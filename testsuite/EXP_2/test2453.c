
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

int32_t x2 = -103;
uint32_t x4 = 19577U;
int32_t x9 = 15;
static uint32_t x12 = UINT32_MAX;
int16_t x15 = INT16_MIN;
volatile int32_t t3 = 395;
static uint16_t x17 = UINT16_MAX;
volatile int64_t x24 = -1LL;
int64_t t5 = -62LL;
volatile int8_t x25 = -8;
uint8_t x29 = 0U;
uint32_t x36 = UINT32_MAX;
static volatile uint32_t t8 = 243242216U;
uint64_t x39 = 508LLU;
int8_t x41 = INT8_MIN;
static volatile int8_t x47 = INT8_MAX;
int32_t x48 = -245302;
int32_t t13 = -29468735;
int32_t t15 = 11805;
int64_t x69 = INT64_MIN;
int32_t x71 = INT32_MIN;
int32_t t17 = 2605;
int16_t x78 = -1;
volatile int64_t x81 = 5955594439LL;
uint64_t x94 = 4179248521LLU;
volatile int64_t t24 = -198LL;
uint16_t x106 = 15U;
int8_t x107 = -1;
int8_t x108 = -1;
int8_t x111 = INT8_MAX;
int8_t x115 = -33;
volatile int16_t x119 = INT16_MIN;
static uint32_t x125 = 0U;
static int32_t x131 = 5;
static int32_t x133 = INT32_MAX;
int64_t x135 = INT64_MIN;
int16_t x151 = -11;
volatile int64_t x152 = INT64_MIN;
volatile int64_t x154 = INT64_MIN;
volatile int64_t t38 = -26LL;
int32_t t39 = 2195447;
int32_t x163 = -1;
volatile uint32_t t41 = 1U;
int64_t x172 = INT64_MAX;
static volatile uint8_t x173 = 1U;
int64_t t44 = 19592797227447796LL;
static int32_t t45 = 84477015;
int16_t x185 = -1;
uint32_t t46 = UINT32_MAX;
int16_t x194 = INT16_MIN;
volatile int32_t x195 = INT32_MIN;
int32_t t48 = -25;
int64_t t51 = 207134085LL;
uint16_t x209 = UINT16_MAX;
volatile int64_t t54 = -2539LL;
volatile int64_t x223 = 5LL;
uint16_t x230 = 23U;
static int16_t x233 = INT16_MIN;
volatile int64_t t58 = 1LL;
uint16_t x240 = 2515U;
int64_t x245 = -134126517373LL;
int64_t x247 = INT64_MIN;
int32_t t61 = 0;
static int32_t x261 = INT32_MIN;
uint8_t x263 = 6U;
int16_t x265 = INT16_MIN;
int64_t x266 = -30366638250324LL;
static uint32_t x267 = 1677998888U;
static volatile int16_t x268 = INT16_MIN;
static int16_t x269 = INT16_MIN;
int16_t x275 = 49;
int32_t t70 = -180;
int64_t x287 = INT64_MIN;
int32_t t71 = 686;
int32_t x292 = INT32_MAX;
uint32_t x294 = 88906U;
int32_t x297 = INT32_MAX;
uint64_t x298 = UINT64_MAX;
int8_t x302 = INT8_MIN;
int32_t x303 = INT32_MIN;
volatile int64_t t76 = 109499460683LL;
static int8_t x310 = 1;
int64_t x316 = INT64_MIN;
uint8_t x324 = UINT8_MAX;
volatile uint8_t x336 = 0U;
int16_t x338 = -1;
int8_t x340 = 38;
static int16_t x341 = INT16_MIN;
int8_t x342 = 1;
int64_t x359 = -1LL;
static uint8_t x360 = 4U;
static int64_t x367 = INT64_MAX;
int64_t x369 = INT64_MIN;
int16_t x373 = INT16_MAX;
int32_t t94 = 102621977;
static uint64_t x382 = 4LLU;
int32_t x387 = 13;
int32_t t97 = -19751;
uint32_t x396 = 49U;
volatile uint64_t x403 = 244344LLU;
static volatile uint64_t x407 = 1320LLU;
int64_t x409 = -734215973719226LL;
int64_t x410 = INT64_MIN;
static int8_t x416 = INT8_MIN;
volatile int32_t t103 = 1;
static int32_t x419 = 41;
int32_t t104 = -3025948;
int8_t x421 = INT8_MIN;
int8_t x423 = INT8_MIN;
volatile int64_t t107 = -987040725LL;
int8_t x435 = -1;
int32_t t108 = -1749;
int16_t x438 = -1;
volatile int16_t x440 = INT16_MIN;
volatile int32_t t109 = -89880245;
uint64_t x442 = 8223974LLU;
uint16_t x443 = 9961U;
static volatile uint64_t t110 = 2771134299456399722LLU;
int8_t x446 = INT8_MAX;
int8_t x448 = -2;
static volatile int16_t x449 = INT16_MIN;
uint16_t x452 = UINT16_MAX;
uint32_t x458 = 29985U;
volatile uint8_t x459 = UINT8_MAX;
uint16_t x460 = 9U;
static volatile int32_t t116 = 393672;
uint16_t x473 = 67U;
int8_t x474 = 24;
uint16_t x478 = UINT16_MAX;
int16_t x481 = INT16_MIN;
int8_t x491 = INT8_MIN;
static volatile int16_t x500 = INT16_MAX;
volatile int8_t x501 = INT8_MIN;
int8_t x506 = INT8_MIN;
volatile int32_t x507 = INT32_MIN;
uint32_t x509 = 49049863U;
uint64_t x510 = 64349457664LLU;
int8_t x514 = 4;
volatile int8_t x517 = INT8_MIN;
static int64_t x522 = -1LL;
volatile uint64_t t130 = 354227LLU;
uint64_t x525 = UINT64_MAX;
volatile int16_t x532 = 366;
int16_t x535 = INT16_MIN;
int16_t x538 = -1;
int8_t x542 = INT8_MAX;
int16_t x546 = INT16_MAX;
uint64_t x552 = 223299LLU;
volatile uint32_t x553 = 279157U;
int32_t x559 = INT32_MAX;
static int64_t x565 = 3681054568684076111LL;
int8_t x572 = INT8_MAX;
volatile int32_t t142 = -2980;
int32_t t143 = 120;
volatile int8_t x585 = INT8_MAX;
int32_t x587 = -1;
int8_t x594 = INT8_MAX;
volatile uint8_t x596 = 4U;
uint8_t x599 = 0U;
int32_t t149 = 1;
int32_t x607 = INT32_MIN;
uint8_t x609 = 2U;
static int8_t x610 = -1;
int32_t t155 = 16;
uint8_t x627 = UINT8_MAX;
int16_t x642 = INT16_MAX;
uint16_t x643 = UINT16_MAX;
uint32_t x652 = 11461121U;
int32_t x654 = -1;
static int64_t x655 = INT64_MAX;
int8_t x656 = INT8_MIN;
uint32_t x660 = UINT32_MAX;
static volatile int8_t x671 = INT8_MIN;
int64_t x681 = 0LL;
int64_t x683 = 1172429278222LL;
volatile int8_t x690 = INT8_MIN;
int32_t t173 = -1047297373;
uint8_t x699 = UINT8_MAX;
uint64_t x705 = UINT64_MAX;
volatile int32_t x725 = INT32_MIN;
int16_t x728 = 91;
volatile int64_t x735 = INT64_MIN;
volatile int64_t t186 = -414011191LL;
volatile int64_t t187 = 241LL;
int32_t t188 = 492392550;
int8_t x761 = INT8_MIN;
int64_t x763 = -1LL;
volatile int64_t t190 = 15222860LL;
volatile int8_t x765 = 42;
int8_t x767 = INT8_MIN;
uint16_t x770 = 67U;
static int64_t t193 = 0LL;
int64_t t194 = -118LL;
static int16_t x783 = -1;
volatile int64_t x790 = INT64_MIN;
int64_t x793 = INT64_MAX;
int64_t x795 = 9LL;
int16_t x799 = 23;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	volatile int8_t x3 = 0;
	uint32_t t0 = 600U;

    t0 = ((x1==(x2|x3))*x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = -1;
	uint64_t x6 = UINT64_MAX;
	int8_t x7 = INT8_MIN;
	volatile uint64_t x8 = 18LLU;
	volatile uint64_t t1 = 1939728LLU;

    t1 = ((x5==(x6|x7))*x8);

    if (t1 != 18LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x10 = UINT32_MAX;
	static int8_t x11 = INT8_MIN;
	volatile uint32_t t2 = 2127U;

    t2 = ((x9==(x10|x11))*x12);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	uint64_t x14 = UINT64_MAX;
	volatile int8_t x16 = 1;

    t3 = ((x13==(x14|x15))*x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x18 = 15;
	uint16_t x19 = 269U;
	uint8_t x20 = 11U;
	int32_t t4 = -61947042;

    t4 = ((x17==(x18|x19))*x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x21 = INT32_MIN;
	volatile int32_t x22 = 284270086;
	volatile int8_t x23 = -1;

    t5 = ((x21==(x22|x23))*x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x26 = 1371LLU;
	int8_t x27 = 7;
	volatile int64_t x28 = -18213803LL;
	volatile int64_t t6 = 31LL;

    t6 = ((x25==(x26|x27))*x28);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = INT8_MAX;
	int64_t x31 = INT64_MIN;
	static int8_t x32 = INT8_MAX;
	static int32_t t7 = 168372;

    t7 = ((x29==(x30|x31))*x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 827U;
	static uint8_t x34 = 4U;
	int32_t x35 = INT32_MAX;

    t8 = ((x33==(x34|x35))*x36);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int64_t x38 = 6327937378LL;
	int32_t x40 = -1;
	volatile int32_t t9 = 3;

    t9 = ((x37==(x38|x39))*x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x42 = INT32_MIN;
	volatile int16_t x43 = INT16_MIN;
	uint64_t x44 = 995171960LLU;
	uint64_t t10 = 99386493509870392LLU;

    t10 = ((x41==(x42|x43))*x44);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = UINT64_MAX;
	int16_t x46 = -1;
	int32_t t11 = 751;

    t11 = ((x45==(x46|x47))*x48);

    if (t11 != -245302) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x49 = UINT8_MAX;
	int8_t x50 = INT8_MIN;
	uint32_t x51 = UINT32_MAX;
	int32_t x52 = INT32_MAX;
	volatile int32_t t12 = 493;

    t12 = ((x49==(x50|x51))*x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = INT64_MAX;
	int8_t x54 = INT8_MAX;
	static int16_t x55 = INT16_MIN;
	int32_t x56 = INT32_MIN;

    t13 = ((x53==(x54|x55))*x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 1527;
	int64_t x58 = -892744749LL;
	uint32_t x59 = 7050U;
	volatile uint32_t x60 = 51U;
	static volatile uint32_t t14 = 297668570U;

    t14 = ((x57==(x58|x59))*x60);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = 0;
	volatile int32_t x62 = 1;
	int16_t x63 = -366;
	int32_t x64 = 75;

    t15 = ((x61==(x62|x63))*x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = UINT64_MAX;
	volatile int64_t x66 = -22LL;
	int16_t x67 = INT16_MIN;
	int32_t x68 = 234031087;
	int32_t t16 = 29386;

    t16 = ((x65==(x66|x67))*x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = INT16_MIN;
	int8_t x72 = INT8_MIN;

    t17 = ((x69==(x70|x71))*x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x73 = 7U;
	int32_t x74 = -1;
	uint32_t x75 = 9295737U;
	int64_t x76 = -1286132176LL;
	static volatile int64_t t18 = -942447429062LL;

    t18 = ((x73==(x74|x75))*x76);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 391U;
	uint32_t x79 = 115649712U;
	int8_t x80 = -1;
	int32_t t19 = -28;

    t19 = ((x77==(x78|x79))*x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x82 = INT32_MIN;
	int64_t x83 = INT64_MIN;
	static volatile int64_t x84 = INT64_MAX;
	int64_t t20 = -11445189955948LL;

    t20 = ((x81==(x82|x83))*x84);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = 56027829LL;
	volatile int64_t x86 = INT64_MAX;
	int16_t x87 = INT16_MIN;
	volatile int64_t x88 = INT64_MAX;
	volatile int64_t t21 = -61382429LL;

    t21 = ((x85==(x86|x87))*x88);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x89 = INT8_MIN;
	int32_t x90 = INT32_MIN;
	uint8_t x91 = UINT8_MAX;
	volatile uint8_t x92 = 13U;
	volatile int32_t t22 = 1670778;

    t22 = ((x89==(x90|x91))*x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 7U;
	int64_t x95 = -1LL;
	static volatile int8_t x96 = INT8_MIN;
	volatile int32_t t23 = -38641197;

    t23 = ((x93==(x94|x95))*x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = -1;
	static int8_t x98 = INT8_MIN;
	volatile uint32_t x99 = UINT32_MAX;
	int64_t x100 = -71903312693910243LL;

    t24 = ((x97==(x98|x99))*x100);

    if (t24 != -71903312693910243LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = UINT64_MAX;
	volatile int32_t x102 = -157966;
	int32_t x103 = 13;
	int8_t x104 = 1;
	volatile int32_t t25 = 7596411;

    t25 = ((x101==(x102|x103))*x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x105 = 100U;
	volatile int32_t t26 = 1;

    t26 = ((x105==(x106|x107))*x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = -3978LL;
	volatile int16_t x110 = INT16_MIN;
	uint32_t x112 = 1582U;
	volatile uint32_t t27 = 257926U;

    t27 = ((x109==(x110|x111))*x112);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -40270243139LL;
	int64_t x114 = INT64_MAX;
	static int16_t x116 = INT16_MIN;
	int32_t t28 = -644836;

    t28 = ((x113==(x114|x115))*x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	int8_t x118 = 6;
	static int16_t x120 = INT16_MIN;
	static int32_t t29 = -858291480;

    t29 = ((x117==(x118|x119))*x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = UINT8_MAX;
	static int32_t x122 = 1632;
	int8_t x123 = INT8_MAX;
	static volatile uint16_t x124 = 4U;
	int32_t t30 = 0;

    t30 = ((x121==(x122|x123))*x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x126 = INT32_MIN;
	static int64_t x127 = -1234LL;
	static int32_t x128 = 1269055;
	static int32_t t31 = -913077;

    t31 = ((x125==(x126|x127))*x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	int8_t x130 = -1;
	int16_t x132 = INT16_MIN;
	int32_t t32 = 1176;

    t32 = ((x129==(x130|x131))*x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x134 = -1;
	int32_t x136 = INT32_MIN;
	int32_t t33 = 666159696;

    t33 = ((x133==(x134|x135))*x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x137 = INT16_MIN;
	int64_t x138 = INT64_MIN;
	uint16_t x139 = 11591U;
	int16_t x140 = INT16_MIN;
	int32_t t34 = 77318473;

    t34 = ((x137==(x138|x139))*x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MIN;
	int8_t x142 = -1;
	static int32_t x143 = 43569;
	static uint32_t x144 = 2073295632U;
	volatile uint32_t t35 = 3U;

    t35 = ((x141==(x142|x143))*x144);

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MAX;
	volatile int32_t x146 = INT32_MAX;
	static int8_t x147 = INT8_MAX;
	static int64_t x148 = INT64_MIN;
	int64_t t36 = INT64_MIN;

    t36 = ((x145==(x146|x147))*x148);

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x149 = -1;
	int8_t x150 = -5;
	volatile int64_t t37 = INT64_MIN;

    t37 = ((x149==(x150|x151))*x152);

    if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = -1;
	int32_t x155 = INT32_MIN;
	static int64_t x156 = INT64_MIN;

    t38 = ((x153==(x154|x155))*x156);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 13U;
	static int32_t x158 = INT32_MAX;
	static volatile int16_t x159 = INT16_MIN;
	uint16_t x160 = 293U;

    t39 = ((x157==(x158|x159))*x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int32_t x161 = -53779;
	int16_t x162 = INT16_MIN;
	uint8_t x164 = 0U;
	volatile int32_t t40 = -5529;

    t40 = ((x161==(x162|x163))*x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = 0;
	volatile int16_t x166 = INT16_MIN;
	static int32_t x167 = INT32_MIN;
	uint32_t x168 = 16154U;

    t41 = ((x165==(x166|x167))*x168);

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MIN;
	static uint32_t x170 = 44880U;
	volatile uint16_t x171 = 2693U;
	int64_t t42 = 28LL;

    t42 = ((x169==(x170|x171))*x172);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x174 = -1;
	uint64_t x175 = UINT64_MAX;
	volatile uint16_t x176 = 499U;
	volatile int32_t t43 = 7;

    t43 = ((x173==(x174|x175))*x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = -1;
	static int64_t x178 = -19035365998376LL;
	int16_t x179 = 85;
	int64_t x180 = INT64_MIN;

    t44 = ((x177==(x178|x179))*x180);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x181 = -6048;
	int16_t x182 = -1;
	int32_t x183 = INT32_MIN;
	volatile uint16_t x184 = UINT16_MAX;

    t45 = ((x181==(x182|x183))*x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x186 = 51U;
	uint64_t x187 = UINT64_MAX;
	volatile uint32_t x188 = UINT32_MAX;

    t46 = ((x185==(x186|x187))*x188);

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = 133U;
	int32_t x190 = 6;
	uint64_t x191 = 993945511161632LLU;
	static volatile int64_t x192 = -1LL;
	static volatile int64_t t47 = -13636169LL;

    t47 = ((x189==(x190|x191))*x192);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MIN;
	uint16_t x196 = 72U;

    t48 = ((x193==(x194|x195))*x196);

    if (t48 != 72) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 0U;
	int64_t x198 = 216545334260572183LL;
	int64_t x199 = INT64_MAX;
	int64_t x200 = -9230633798983876LL;
	int64_t t49 = -11664861LL;

    t49 = ((x197==(x198|x199))*x200);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	int8_t x202 = INT8_MIN;
	int8_t x203 = INT8_MAX;
	uint32_t x204 = 34U;
	static uint32_t t50 = 287720U;

    t50 = ((x201==(x202|x203))*x204);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x205 = 1U;
	uint8_t x206 = UINT8_MAX;
	volatile int8_t x207 = -1;
	int64_t x208 = -1LL;

    t51 = ((x205==(x206|x207))*x208);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x210 = 31333677U;
	int8_t x211 = INT8_MIN;
	static uint8_t x212 = 5U;
	volatile int32_t t52 = -90;

    t52 = ((x209==(x210|x211))*x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -789;
	uint64_t x214 = 30752682563044604LLU;
	int64_t x215 = 2238724965858530LL;
	int16_t x216 = -86;
	volatile int32_t t53 = 107821793;

    t53 = ((x213==(x214|x215))*x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MIN;
	volatile int32_t x218 = INT32_MAX;
	int8_t x219 = INT8_MIN;
	int64_t x220 = -21754924245LL;

    t54 = ((x217==(x218|x219))*x220);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x221 = INT64_MIN;
	static uint64_t x222 = UINT64_MAX;
	static int64_t x224 = INT64_MIN;
	volatile int64_t t55 = -389336070540382072LL;

    t55 = ((x221==(x222|x223))*x224);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x225 = UINT32_MAX;
	static volatile uint32_t x226 = 185394U;
	static int8_t x227 = INT8_MAX;
	int32_t x228 = 158;
	static int32_t t56 = -101;

    t56 = ((x225==(x226|x227))*x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = UINT8_MAX;
	volatile int32_t x231 = INT32_MIN;
	volatile int8_t x232 = INT8_MIN;
	volatile int32_t t57 = -1;

    t57 = ((x229==(x230|x231))*x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x234 = INT32_MIN;
	int32_t x235 = INT32_MAX;
	static int64_t x236 = INT64_MAX;

    t58 = ((x233==(x234|x235))*x236);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	int16_t x238 = INT16_MIN;
	int16_t x239 = -1594;
	int32_t t59 = -1;

    t59 = ((x237==(x238|x239))*x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MIN;
	volatile uint32_t x242 = 153751U;
	uint64_t x243 = 0LLU;
	uint16_t x244 = 91U;
	static int32_t t60 = -8;

    t60 = ((x241==(x242|x243))*x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x246 = UINT64_MAX;
	uint16_t x248 = 0U;

    t61 = ((x245==(x246|x247))*x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x249 = -1LL;
	int16_t x250 = INT16_MIN;
	uint64_t x251 = 8843826945984147746LLU;
	int16_t x252 = INT16_MIN;
	int32_t t62 = 0;

    t62 = ((x249==(x250|x251))*x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = UINT64_MAX;
	int32_t x254 = -1;
	int32_t x255 = INT32_MAX;
	static volatile uint32_t x256 = 246U;
	static uint32_t t63 = 31U;

    t63 = ((x253==(x254|x255))*x256);

    if (t63 != 246U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x257 = 38458489529753855LLU;
	int32_t x258 = -1;
	int64_t x259 = INT64_MIN;
	static int64_t x260 = INT64_MIN;
	volatile int64_t t64 = 884LL;

    t64 = ((x257==(x258|x259))*x260);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x262 = -147LL;
	static int32_t x264 = INT32_MAX;
	int32_t t65 = 1949659;

    t65 = ((x261==(x262|x263))*x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t t66 = -28;

    t66 = ((x265==(x266|x267))*x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x270 = INT8_MAX;
	static int32_t x271 = -1;
	int64_t x272 = INT64_MAX;
	int64_t t67 = -3223243LL;

    t67 = ((x269==(x270|x271))*x272);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MIN;
	static uint64_t x274 = UINT64_MAX;
	int16_t x276 = 618;
	static volatile int32_t t68 = -2027;

    t68 = ((x273==(x274|x275))*x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = UINT8_MAX;
	uint16_t x278 = 3U;
	volatile int32_t x279 = 8067;
	int16_t x280 = INT16_MAX;
	int32_t t69 = 829275871;

    t69 = ((x277==(x278|x279))*x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = 1155847955988LLU;
	static uint64_t x282 = 2744453235LLU;
	uint32_t x283 = 14759U;
	int16_t x284 = INT16_MIN;

    t70 = ((x281==(x282|x283))*x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x285 = 5933U;
	int64_t x286 = INT64_MAX;
	int8_t x288 = INT8_MAX;

    t71 = ((x285==(x286|x287))*x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -1;
	int16_t x290 = -1;
	volatile int32_t x291 = INT32_MIN;
	static volatile int32_t t72 = INT32_MAX;

    t72 = ((x289==(x290|x291))*x292);

    if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MIN;
	static int64_t x295 = INT64_MIN;
	int16_t x296 = -1;
	volatile int32_t t73 = -4909023;

    t73 = ((x293==(x294|x295))*x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x299 = -29;
	int32_t x300 = INT32_MIN;
	int32_t t74 = -359;

    t74 = ((x297==(x298|x299))*x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = 1;
	uint8_t x304 = UINT8_MAX;
	volatile int32_t t75 = 1;

    t75 = ((x301==(x302|x303))*x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MAX;
	int32_t x306 = -1;
	uint8_t x307 = 88U;
	volatile int64_t x308 = INT64_MAX;

    t76 = ((x305==(x306|x307))*x308);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MAX;
	int64_t x311 = 2511LL;
	uint64_t x312 = 4272290077492232LLU;
	volatile uint64_t t77 = 12822LLU;

    t77 = ((x309==(x310|x311))*x312);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = 15129485;
	int32_t x314 = -1;
	volatile int8_t x315 = 7;
	int64_t t78 = -26622205LL;

    t78 = ((x313==(x314|x315))*x316);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -1;
	uint16_t x318 = 6U;
	int8_t x319 = INT8_MIN;
	static int16_t x320 = INT16_MIN;
	static int32_t t79 = -32393077;

    t79 = ((x317==(x318|x319))*x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x321 = INT16_MIN;
	static volatile uint8_t x322 = UINT8_MAX;
	uint64_t x323 = UINT64_MAX;
	volatile int32_t t80 = -433493976;

    t80 = ((x321==(x322|x323))*x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x325 = 54U;
	volatile uint8_t x326 = 3U;
	volatile int64_t x327 = INT64_MIN;
	int64_t x328 = 1145LL;
	int64_t t81 = -35LL;

    t81 = ((x325==(x326|x327))*x328);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = UINT16_MAX;
	int8_t x330 = INT8_MAX;
	int64_t x331 = -23921LL;
	int32_t x332 = 73174950;
	int32_t t82 = 1684;

    t82 = ((x329==(x330|x331))*x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -734995;
	static int32_t x334 = -1;
	volatile int8_t x335 = INT8_MIN;
	int32_t t83 = -9125;

    t83 = ((x333==(x334|x335))*x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MAX;
	int8_t x339 = INT8_MIN;
	static volatile int32_t t84 = -209;

    t84 = ((x337==(x338|x339))*x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x343 = 0;
	int16_t x344 = -1;
	int32_t t85 = -1;

    t85 = ((x341==(x342|x343))*x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = UINT32_MAX;
	static int64_t x346 = 36952LL;
	int32_t x347 = INT32_MIN;
	int8_t x348 = INT8_MIN;
	static int32_t t86 = -1894355;

    t86 = ((x345==(x346|x347))*x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = UINT32_MAX;
	uint16_t x350 = 7769U;
	volatile int8_t x351 = INT8_MAX;
	int16_t x352 = INT16_MAX;
	static int32_t t87 = -24461;

    t87 = ((x349==(x350|x351))*x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x353 = INT32_MAX;
	volatile int8_t x354 = INT8_MAX;
	int16_t x355 = -1;
	int8_t x356 = 1;
	static volatile int32_t t88 = -1702;

    t88 = ((x353==(x354|x355))*x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x357 = INT32_MIN;
	uint32_t x358 = UINT32_MAX;
	static volatile int32_t t89 = -18634363;

    t89 = ((x357==(x358|x359))*x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x361 = INT64_MIN;
	int16_t x362 = INT16_MIN;
	uint32_t x363 = UINT32_MAX;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t90 = 10309671LLU;

    t90 = ((x361==(x362|x363))*x364);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x365 = INT16_MIN;
	int64_t x366 = -1LL;
	volatile int64_t x368 = INT64_MAX;
	volatile int64_t t91 = 2039413908LL;

    t91 = ((x365==(x366|x367))*x368);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x370 = INT32_MAX;
	int8_t x371 = INT8_MIN;
	static int64_t x372 = INT64_MAX;
	volatile int64_t t92 = 551172270668243LL;

    t92 = ((x369==(x370|x371))*x372);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x374 = INT32_MIN;
	uint8_t x375 = 8U;
	uint64_t x376 = 166778734021454LLU;
	static uint64_t t93 = 952228112191837630LLU;

    t93 = ((x373==(x374|x375))*x376);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = INT64_MIN;
	uint32_t x378 = 15U;
	static uint16_t x379 = UINT16_MAX;
	int32_t x380 = -1;

    t94 = ((x377==(x378|x379))*x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x381 = UINT16_MAX;
	static int32_t x383 = -93353;
	volatile uint32_t x384 = 56794U;
	uint32_t t95 = 77U;

    t95 = ((x381==(x382|x383))*x384);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x385 = 14890U;
	int8_t x386 = INT8_MAX;
	static uint8_t x388 = 1U;
	int32_t t96 = -4075243;

    t96 = ((x385==(x386|x387))*x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x389 = 14;
	volatile int16_t x390 = -13;
	volatile int16_t x391 = INT16_MIN;
	int8_t x392 = INT8_MAX;

    t97 = ((x389==(x390|x391))*x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = UINT16_MAX;
	uint32_t x394 = 65168940U;
	int8_t x395 = -57;
	volatile uint32_t t98 = 74601660U;

    t98 = ((x393==(x394|x395))*x396);

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MAX;
	int64_t x398 = -1LL;
	uint32_t x399 = UINT32_MAX;
	volatile int64_t x400 = -3843944209166900LL;
	volatile int64_t t99 = -9842327718115895LL;

    t99 = ((x397==(x398|x399))*x400);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;
	static volatile uint64_t x402 = 249534696057817501LLU;
	uint32_t x404 = 31143357U;
	volatile uint32_t t100 = 122531U;

    t100 = ((x401==(x402|x403))*x404);

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x405 = UINT16_MAX;
	volatile int8_t x406 = INT8_MIN;
	int8_t x408 = INT8_MAX;
	volatile int32_t t101 = 28;

    t101 = ((x405==(x406|x407))*x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x411 = -8;
	int64_t x412 = -1LL;
	volatile int64_t t102 = -59608142LL;

    t102 = ((x409==(x410|x411))*x412);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MIN;
	static int32_t x414 = INT32_MIN;
	static uint64_t x415 = 2320941796909LLU;

    t103 = ((x413==(x414|x415))*x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x417 = -1;
	volatile int8_t x418 = INT8_MIN;
	volatile int16_t x420 = INT16_MAX;

    t104 = ((x417==(x418|x419))*x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x422 = INT32_MIN;
	uint8_t x424 = 0U;
	int32_t t105 = -202412;

    t105 = ((x421==(x422|x423))*x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 11251U;
	static int8_t x426 = 6;
	int32_t x427 = -1;
	int16_t x428 = INT16_MAX;
	static int32_t t106 = 62537;

    t106 = ((x425==(x426|x427))*x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MAX;
	int64_t x430 = -9452702773157290LL;
	uint64_t x431 = UINT64_MAX;
	volatile int64_t x432 = INT64_MIN;

    t107 = ((x429==(x430|x431))*x432);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = UINT8_MAX;
	uint32_t x434 = 67612873U;
	static int8_t x436 = INT8_MAX;

    t108 = ((x433==(x434|x435))*x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -1;
	int16_t x439 = INT16_MIN;

    t109 = ((x437==(x438|x439))*x440);

    if (t109 != -32768) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MAX;
	uint64_t x444 = 4LLU;

    t110 = ((x441==(x442|x443))*x444);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x445 = 346715961;
	int32_t x447 = -1;
	static volatile int32_t t111 = 1;

    t111 = ((x445==(x446|x447))*x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x450 = 0LL;
	int16_t x451 = -1;
	int32_t t112 = -2518;

    t112 = ((x449==(x450|x451))*x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 65U;
	static int64_t x454 = INT64_MIN;
	int16_t x455 = INT16_MIN;
	volatile int8_t x456 = 1;
	volatile int32_t t113 = 43;

    t113 = ((x453==(x454|x455))*x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = UINT16_MAX;
	volatile int32_t t114 = 41638;

    t114 = ((x457==(x458|x459))*x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = INT64_MIN;
	uint32_t x462 = 69537071U;
	int32_t x463 = 89;
	int64_t x464 = -1LL;
	int64_t t115 = -1282157688941LL;

    t115 = ((x461==(x462|x463))*x464);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x465 = UINT8_MAX;
	uint64_t x466 = 1015935LLU;
	uint32_t x467 = 376985U;
	int8_t x468 = 3;

    t116 = ((x465==(x466|x467))*x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = -23LL;
	int32_t x470 = INT32_MIN;
	volatile uint32_t x471 = 1645U;
	int32_t x472 = INT32_MIN;
	volatile int32_t t117 = 178;

    t117 = ((x469==(x470|x471))*x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x475 = INT32_MIN;
	int64_t x476 = INT64_MIN;
	volatile int64_t t118 = 901LL;

    t118 = ((x473==(x474|x475))*x476);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = 219;
	int8_t x479 = -1;
	volatile int64_t x480 = INT64_MAX;
	volatile int64_t t119 = 142105760636LL;

    t119 = ((x477==(x478|x479))*x480);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int16_t x482 = INT16_MAX;
	uint16_t x483 = 519U;
	uint32_t x484 = 238U;
	static volatile uint32_t t120 = 44U;

    t120 = ((x481==(x482|x483))*x484);

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = INT32_MIN;
	int64_t x486 = -3416LL;
	uint64_t x487 = 1083382490881204408LLU;
	volatile int64_t x488 = INT64_MIN;
	static int64_t t121 = 1121863105553LL;

    t121 = ((x485==(x486|x487))*x488);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	static int64_t x490 = 8154LL;
	static uint8_t x492 = 8U;
	int32_t t122 = 72702;

    t122 = ((x489==(x490|x491))*x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MIN;
	uint32_t x494 = UINT32_MAX;
	int16_t x495 = INT16_MIN;
	static volatile uint32_t x496 = 2U;
	uint32_t t123 = 1117U;

    t123 = ((x493==(x494|x495))*x496);

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x497 = UINT16_MAX;
	volatile int32_t x498 = 11;
	int64_t x499 = INT64_MIN;
	int32_t t124 = -1;

    t124 = ((x497==(x498|x499))*x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x502 = 0;
	volatile int8_t x503 = INT8_MAX;
	int16_t x504 = INT16_MIN;
	volatile int32_t t125 = 7;

    t125 = ((x501==(x502|x503))*x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint64_t x505 = 10697329867100363LLU;
	static uint16_t x508 = UINT16_MAX;
	volatile int32_t t126 = 5;

    t126 = ((x505==(x506|x507))*x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x511 = INT16_MAX;
	uint64_t x512 = 112133407640LLU;
	volatile uint64_t t127 = 15126426249845LLU;

    t127 = ((x509==(x510|x511))*x512);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MIN;
	int32_t x515 = -876795800;
	uint16_t x516 = UINT16_MAX;
	static int32_t t128 = -1395;

    t128 = ((x513==(x514|x515))*x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x518 = INT64_MIN;
	int8_t x519 = 7;
	int32_t x520 = INT32_MIN;
	volatile int32_t t129 = -64;

    t129 = ((x517==(x518|x519))*x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x521 = UINT16_MAX;
	int32_t x523 = -1;
	uint64_t x524 = 4572301313910628LLU;

    t130 = ((x521==(x522|x523))*x524);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x526 = -443663807LL;
	uint64_t x527 = UINT64_MAX;
	static uint64_t x528 = 5548236451LLU;
	volatile uint64_t t131 = 235415LLU;

    t131 = ((x525==(x526|x527))*x528);

    if (t131 != 5548236451LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = -1;
	volatile int8_t x530 = INT8_MAX;
	static uint64_t x531 = 157851006LLU;
	volatile int32_t t132 = -5;

    t132 = ((x529==(x530|x531))*x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x533 = INT16_MIN;
	int8_t x534 = -1;
	int16_t x536 = INT16_MAX;
	static volatile int32_t t133 = 6;

    t133 = ((x533==(x534|x535))*x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x537 = INT16_MIN;
	volatile uint64_t x539 = UINT64_MAX;
	static int32_t x540 = -6593266;
	volatile int32_t t134 = 1624622;

    t134 = ((x537==(x538|x539))*x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int32_t x541 = -1;
	volatile int8_t x543 = -2;
	static int16_t x544 = 7707;
	static volatile int32_t t135 = -7615;

    t135 = ((x541==(x542|x543))*x544);

    if (t135 != 7707) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	volatile uint16_t x547 = 1U;
	int32_t x548 = -5707;
	int32_t t136 = -741;

    t136 = ((x545==(x546|x547))*x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MIN;
	static uint32_t x550 = 22U;
	int8_t x551 = INT8_MIN;
	volatile uint64_t t137 = 26832760921LLU;

    t137 = ((x549==(x550|x551))*x552);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x554 = INT64_MIN;
	volatile int64_t x555 = INT64_MIN;
	volatile int8_t x556 = INT8_MIN;
	int32_t t138 = 224929224;

    t138 = ((x553==(x554|x555))*x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x557 = INT8_MIN;
	volatile uint16_t x558 = 1U;
	static volatile int8_t x560 = -2;
	int32_t t139 = -1032433;

    t139 = ((x557==(x558|x559))*x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x561 = 1035217LLU;
	uint32_t x562 = UINT32_MAX;
	int32_t x563 = -1;
	volatile uint16_t x564 = UINT16_MAX;
	int32_t t140 = 44570;

    t140 = ((x561==(x562|x563))*x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x566 = 7U;
	static uint32_t x567 = 38U;
	int32_t x568 = -1;
	volatile int32_t t141 = 10;

    t141 = ((x565==(x566|x567))*x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int8_t x569 = -1;
	uint64_t x570 = 2227018564503397971LLU;
	volatile int8_t x571 = INT8_MIN;

    t142 = ((x569==(x570|x571))*x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = 7742;
	int32_t x574 = 90686696;
	int64_t x575 = INT64_MIN;
	volatile int32_t x576 = INT32_MIN;

    t143 = ((x573==(x574|x575))*x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x577 = 110U;
	int16_t x578 = -3;
	int16_t x579 = INT16_MIN;
	volatile int8_t x580 = -59;
	static volatile int32_t t144 = -6297144;

    t144 = ((x577==(x578|x579))*x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x581 = 4518204U;
	volatile int32_t x582 = -49;
	static int32_t x583 = INT32_MAX;
	uint64_t x584 = UINT64_MAX;
	volatile uint64_t t145 = 3811186101202LLU;

    t145 = ((x581==(x582|x583))*x584);

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x586 = 0;
	uint16_t x588 = 14549U;
	static volatile int32_t t146 = -285;

    t146 = ((x585==(x586|x587))*x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = INT64_MAX;
	int32_t x590 = 4476;
	int8_t x591 = -1;
	int16_t x592 = INT16_MIN;
	static int32_t t147 = 54460;

    t147 = ((x589==(x590|x591))*x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 16LLU;
	volatile int32_t x595 = -18;
	volatile int32_t t148 = 79;

    t148 = ((x593==(x594|x595))*x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MIN;
	int8_t x598 = 1;
	int32_t x600 = INT32_MIN;

    t149 = ((x597==(x598|x599))*x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x601 = 167U;
	int8_t x602 = -1;
	int16_t x603 = 1;
	volatile uint16_t x604 = 113U;
	static int32_t t150 = 3283;

    t150 = ((x601==(x602|x603))*x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = 939915075U;
	int16_t x606 = INT16_MIN;
	static int64_t x608 = INT64_MIN;
	volatile int64_t t151 = -290915245841987LL;

    t151 = ((x605==(x606|x607))*x608);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x611 = 2U;
	int8_t x612 = -5;
	volatile int32_t t152 = 968629055;

    t152 = ((x609==(x610|x611))*x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MIN;
	uint64_t x614 = 62LLU;
	static uint32_t x615 = 628340U;
	int16_t x616 = INT16_MAX;
	int32_t t153 = -10;

    t153 = ((x613==(x614|x615))*x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = 1;
	int16_t x618 = -1;
	int64_t x619 = 30764744168LL;
	volatile uint8_t x620 = UINT8_MAX;
	int32_t t154 = -6038719;

    t154 = ((x617==(x618|x619))*x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x621 = 168072U;
	int8_t x622 = -1;
	int64_t x623 = -83115103LL;
	int16_t x624 = -1;

    t155 = ((x621==(x622|x623))*x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MAX;
	uint16_t x626 = 12012U;
	int8_t x628 = 58;
	int32_t t156 = -17;

    t156 = ((x625==(x626|x627))*x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = INT32_MIN;
	static int8_t x630 = -1;
	static volatile int64_t x631 = INT64_MIN;
	int8_t x632 = -6;
	int32_t t157 = 0;

    t157 = ((x629==(x630|x631))*x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint32_t x633 = UINT32_MAX;
	static volatile uint32_t x634 = 54U;
	static uint8_t x635 = 0U;
	volatile int32_t x636 = 3222071;
	volatile int32_t t158 = 0;

    t158 = ((x633==(x634|x635))*x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MAX;
	uint8_t x638 = UINT8_MAX;
	uint32_t x639 = 3U;
	int32_t x640 = -1;
	static volatile int32_t t159 = 429;

    t159 = ((x637==(x638|x639))*x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x641 = 19628077U;
	static int8_t x644 = INT8_MIN;
	int32_t t160 = 1;

    t160 = ((x641==(x642|x643))*x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x645 = UINT64_MAX;
	int16_t x646 = INT16_MAX;
	static int64_t x647 = -225221455LL;
	uint32_t x648 = UINT32_MAX;
	volatile uint32_t t161 = 37U;

    t161 = ((x645==(x646|x647))*x648);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x649 = INT8_MIN;
	volatile int8_t x650 = INT8_MIN;
	static int16_t x651 = -558;
	uint32_t t162 = 17U;

    t162 = ((x649==(x650|x651))*x652);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	volatile int32_t t163 = -3009327;

    t163 = ((x653==(x654|x655))*x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x657 = -189956281214811605LL;
	int64_t x658 = 55619LL;
	static int64_t x659 = -12992915949742004LL;
	volatile uint32_t t164 = 2063016340U;

    t164 = ((x657==(x658|x659))*x660);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = 51268LL;
	int8_t x662 = -1;
	volatile int8_t x663 = 0;
	uint64_t x664 = UINT64_MAX;
	static volatile uint64_t t165 = 29906393LLU;

    t165 = ((x661==(x662|x663))*x664);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MAX;
	static uint32_t x666 = 39951971U;
	uint32_t x667 = 9438U;
	uint16_t x668 = 156U;
	volatile int32_t t166 = -102712;

    t166 = ((x665==(x666|x667))*x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MIN;
	uint8_t x670 = 0U;
	int64_t x672 = -1LL;
	int64_t t167 = -3015216475LL;

    t167 = ((x669==(x670|x671))*x672);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = 25449;
	static int8_t x674 = -1;
	uint32_t x675 = UINT32_MAX;
	static int64_t x676 = -1LL;
	volatile int64_t t168 = 12222LL;

    t168 = ((x673==(x674|x675))*x676);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x677 = UINT16_MAX;
	int8_t x678 = -7;
	int32_t x679 = INT32_MAX;
	int8_t x680 = 25;
	static volatile int32_t t169 = 465;

    t169 = ((x677==(x678|x679))*x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t x682 = 5LLU;
	uint32_t x684 = 1496U;
	volatile uint32_t t170 = 22290U;

    t170 = ((x681==(x682|x683))*x684);

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x685 = INT64_MAX;
	int32_t x686 = INT32_MAX;
	static volatile int8_t x687 = INT8_MIN;
	int16_t x688 = -6;
	int32_t t171 = -5;

    t171 = ((x685==(x686|x687))*x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int64_t x689 = INT64_MIN;
	uint16_t x691 = UINT16_MAX;
	int64_t x692 = INT64_MAX;
	volatile int64_t t172 = 2733833060530LL;

    t172 = ((x689==(x690|x691))*x692);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x693 = INT8_MAX;
	volatile int64_t x694 = INT64_MAX;
	int16_t x695 = -1;
	uint8_t x696 = 59U;

    t173 = ((x693==(x694|x695))*x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = 39U;
	int32_t x698 = INT32_MIN;
	int64_t x700 = INT64_MIN;
	int64_t t174 = 195LL;

    t174 = ((x697==(x698|x699))*x700);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x701 = INT16_MAX;
	static int32_t x702 = INT32_MAX;
	uint16_t x703 = UINT16_MAX;
	static volatile int64_t x704 = -1LL;
	static volatile int64_t t175 = 9072582899LL;

    t175 = ((x701==(x702|x703))*x704);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x706 = INT8_MIN;
	volatile int8_t x707 = -42;
	static int16_t x708 = INT16_MIN;
	volatile int32_t t176 = -247654;

    t176 = ((x705==(x706|x707))*x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = -1LL;
	uint64_t x710 = UINT64_MAX;
	int32_t x711 = -178;
	int64_t x712 = -1LL;
	int64_t t177 = 3LL;

    t177 = ((x709==(x710|x711))*x712);

    if (t177 != -1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x713 = -212093106;
	uint8_t x714 = 0U;
	int8_t x715 = INT8_MAX;
	uint64_t x716 = UINT64_MAX;
	volatile uint64_t t178 = 8069571160291LLU;

    t178 = ((x713==(x714|x715))*x716);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = -1LL;
	static int16_t x718 = INT16_MIN;
	int8_t x719 = INT8_MIN;
	uint8_t x720 = 7U;
	volatile int32_t t179 = -69507;

    t179 = ((x717==(x718|x719))*x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 295U;
	volatile int8_t x722 = -9;
	uint8_t x723 = UINT8_MAX;
	static int16_t x724 = INT16_MIN;
	volatile int32_t t180 = 18;

    t180 = ((x721==(x722|x723))*x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x726 = UINT16_MAX;
	volatile int64_t x727 = INT64_MAX;
	int32_t t181 = 11668246;

    t181 = ((x725==(x726|x727))*x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint8_t x729 = UINT8_MAX;
	int32_t x730 = INT32_MIN;
	volatile uint32_t x731 = 19U;
	int32_t x732 = INT32_MIN;
	static volatile int32_t t182 = 0;

    t182 = ((x729==(x730|x731))*x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MIN;
	uint16_t x734 = UINT16_MAX;
	static int64_t x736 = 39520794267126LL;
	static int64_t t183 = -17336LL;

    t183 = ((x733==(x734|x735))*x736);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = INT32_MIN;
	int32_t x738 = -2;
	uint64_t x739 = 942452878602401LLU;
	uint64_t x740 = 22137376470412487LLU;
	volatile uint64_t t184 = 7836774288LLU;

    t184 = ((x737==(x738|x739))*x740);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MIN;
	int32_t x742 = INT32_MAX;
	volatile uint64_t x743 = 49LLU;
	int8_t x744 = 7;
	int32_t t185 = 31;

    t185 = ((x741==(x742|x743))*x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = -47;
	uint16_t x746 = 166U;
	static int8_t x747 = -1;
	int64_t x748 = 333511LL;

    t186 = ((x745==(x746|x747))*x748);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x749 = 15U;
	uint64_t x750 = 8622992158227114928LLU;
	uint64_t x751 = UINT64_MAX;
	int64_t x752 = -74967823687087LL;

    t187 = ((x749==(x750|x751))*x752);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x753 = INT8_MAX;
	volatile uint16_t x754 = UINT16_MAX;
	volatile uint64_t x755 = UINT64_MAX;
	int8_t x756 = INT8_MAX;

    t188 = ((x753==(x754|x755))*x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = 230455058631LL;
	int16_t x758 = 223;
	int8_t x759 = -2;
	static volatile int8_t x760 = INT8_MIN;
	int32_t t189 = 5;

    t189 = ((x757==(x758|x759))*x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x762 = 4;
	int64_t x764 = -1LL;

    t190 = ((x761==(x762|x763))*x764);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x766 = INT16_MIN;
	uint16_t x768 = 9U;
	int32_t t191 = -1813938;

    t191 = ((x765==(x766|x767))*x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = UINT64_MAX;
	int32_t x771 = INT32_MIN;
	int8_t x772 = 2;
	volatile int32_t t192 = 107;

    t192 = ((x769==(x770|x771))*x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = INT16_MIN;
	int32_t x774 = -1;
	int64_t x775 = 637788025LL;
	int64_t x776 = 55015740LL;

    t193 = ((x773==(x774|x775))*x776);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x777 = INT8_MAX;
	int64_t x778 = INT64_MIN;
	uint16_t x779 = 11991U;
	int64_t x780 = INT64_MAX;

    t194 = ((x777==(x778|x779))*x780);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = 21U;
	static uint32_t x782 = 0U;
	static uint8_t x784 = UINT8_MAX;
	volatile int32_t t195 = 15;

    t195 = ((x781==(x782|x783))*x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x785 = INT32_MIN;
	uint32_t x786 = 1277867U;
	static int64_t x787 = INT64_MAX;
	volatile int32_t x788 = -1679586;
	int32_t t196 = -492672951;

    t196 = ((x785==(x786|x787))*x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x789 = -1;
	int32_t x791 = -1;
	static uint32_t x792 = 54U;
	volatile uint32_t t197 = 2359936U;

    t197 = ((x789==(x790|x791))*x792);

    if (t197 != 54U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x794 = -1;
	volatile int32_t x796 = 11720731;
	int32_t t198 = -159287;

    t198 = ((x793==(x794|x795))*x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x797 = 1;
	static int64_t x798 = INT64_MIN;
	volatile int32_t x800 = INT32_MAX;
	volatile int32_t t199 = -1;

    t199 = ((x797==(x798|x799))*x800);

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


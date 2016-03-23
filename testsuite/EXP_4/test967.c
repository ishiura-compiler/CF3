
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

uint32_t x2 = 46U;
static volatile int8_t x12 = -13;
volatile int8_t x13 = INT8_MIN;
int8_t x14 = -6;
volatile uint64_t t3 = 4LLU;
static int64_t x21 = -108804575110878192LL;
volatile int64_t t5 = 302444LL;
static int64_t t6 = -1399LL;
uint64_t x41 = 65349771590312730LLU;
static int32_t x42 = INT32_MIN;
int32_t x54 = INT32_MIN;
static int32_t x57 = INT32_MIN;
int32_t x60 = -1;
uint32_t t14 = 1956078U;
static volatile uint32_t x65 = 22967057U;
int64_t t17 = 7092095181754LL;
uint64_t t18 = 32213568302LLU;
int64_t x87 = INT64_MAX;
static int8_t x88 = INT8_MIN;
static uint64_t x90 = 8582986592239LLU;
uint64_t t21 = 854827096LLU;
int64_t x110 = -48179175297982980LL;
int64_t x115 = INT64_MIN;
int32_t t27 = 565780521;
uint8_t x128 = UINT8_MAX;
int16_t x134 = 9803;
volatile uint64_t x136 = 2809LLU;
volatile uint64_t t29 = 1273871LLU;
int8_t x142 = INT8_MAX;
uint8_t x144 = 12U;
int16_t x147 = INT16_MAX;
volatile uint64_t x148 = 42945368298LLU;
static volatile int64_t x150 = INT64_MIN;
volatile int64_t t34 = 44LL;
uint16_t x161 = UINT16_MAX;
int8_t x165 = -3;
volatile int32_t x167 = 424;
int32_t x168 = INT32_MIN;
volatile int32_t t36 = -1440995;
int32_t x172 = -1;
uint64_t t37 = 138456793674297535LLU;
volatile int32_t t38 = 0;
static int8_t x178 = INT8_MIN;
int16_t x182 = INT16_MIN;
static uint64_t x189 = 23LLU;
volatile uint64_t t42 = 1699737397LLU;
volatile uint64_t t45 = 31707339LLU;
static volatile uint64_t t48 = 32154970026LLU;
int16_t x218 = INT16_MIN;
int8_t x223 = INT8_MIN;
int8_t x228 = 7;
uint32_t x230 = 15206U;
int64_t x231 = INT64_MIN;
uint32_t x244 = UINT32_MAX;
static volatile uint8_t x256 = 13U;
uint64_t t57 = 489120LLU;
int64_t x257 = 689177598610005LL;
uint64_t t58 = 1333966256LLU;
uint64_t t62 = 67LLU;
static int64_t x282 = INT64_MIN;
static int64_t x284 = -113LL;
int16_t x286 = INT16_MIN;
static volatile int64_t t65 = 7552LL;
int8_t x293 = -1;
static uint32_t x294 = UINT32_MAX;
int8_t x295 = 1;
int8_t x301 = INT8_MAX;
int16_t x302 = -1;
volatile uint32_t t69 = 221749U;
uint8_t x306 = 49U;
static volatile uint64_t t70 = 1720149LLU;
uint64_t x311 = 144582LLU;
static int64_t x312 = -1LL;
volatile uint64_t t71 = 504229281864049866LLU;
volatile int32_t x320 = INT32_MAX;
int8_t x323 = 44;
volatile int8_t x325 = 5;
uint8_t x327 = UINT8_MAX;
volatile int16_t x329 = -1;
static volatile int32_t x334 = INT32_MIN;
uint16_t x338 = UINT16_MAX;
static int8_t x339 = -1;
int8_t x342 = -1;
int64_t x343 = INT64_MAX;
uint32_t x347 = UINT32_MAX;
uint32_t x353 = 2999578U;
static volatile int64_t x354 = -672605675677LL;
static uint64_t x358 = 435295LLU;
int32_t x362 = INT32_MIN;
uint64_t t84 = 540297970106266LLU;
volatile int16_t x371 = 58;
volatile uint8_t x374 = UINT8_MAX;
static int32_t x376 = 645401;
int16_t x378 = INT16_MIN;
volatile uint16_t x391 = UINT16_MAX;
int8_t x392 = INT8_MAX;
static volatile int32_t t92 = -237915345;
volatile uint64_t t93 = 5LLU;
volatile int64_t t94 = 15004470709208578LL;
uint32_t x409 = 69U;
volatile int64_t x413 = 216980259LL;
int64_t x414 = -1917244827LL;
volatile int32_t t97 = 71323;
uint64_t x422 = 2018LLU;
int32_t t99 = -5388;
static int32_t x430 = 43328;
int8_t x433 = INT8_MAX;
int64_t x435 = 577779409567LL;
static uint32_t x442 = UINT32_MAX;
int32_t x443 = INT32_MAX;
static uint64_t x444 = 1816103976LLU;
int32_t x466 = INT32_MAX;
uint64_t x467 = 46293LLU;
int32_t x476 = INT32_MIN;
static volatile int8_t x478 = -3;
uint16_t x485 = UINT16_MAX;
int64_t x487 = -1LL;
uint8_t x489 = 2U;
static int32_t x490 = INT32_MAX;
static volatile int32_t x496 = INT32_MIN;
int16_t x503 = INT16_MIN;
int64_t x506 = -1LL;
int32_t x508 = 53771;
uint8_t x511 = 58U;
volatile int64_t t119 = -5889222LL;
static uint16_t x516 = 37U;
uint32_t t120 = 2U;
volatile int64_t t122 = 1LL;
int16_t x527 = 540;
static volatile int64_t x529 = INT64_MAX;
int8_t x544 = INT8_MAX;
static volatile int64_t x548 = INT64_MIN;
static int64_t t127 = -508006LL;
volatile uint32_t t129 = 273U;
static int16_t x559 = -1;
uint16_t x576 = UINT16_MAX;
int8_t x577 = INT8_MIN;
int64_t t134 = -5301492222952636LL;
int16_t x586 = INT16_MIN;
volatile int64_t t136 = -104936031LL;
volatile uint16_t x594 = 5103U;
static uint8_t x597 = UINT8_MAX;
volatile int32_t t139 = -7980607;
uint16_t x608 = 76U;
uint32_t t140 = 1U;
int8_t x617 = INT8_MAX;
volatile uint64_t t144 = 496580973861LLU;
static int16_t x633 = 10199;
uint8_t x634 = UINT8_MAX;
volatile int64_t x636 = -4166210727216LL;
int64_t x643 = INT64_MIN;
static int16_t x650 = 138;
int32_t x654 = 3;
static int8_t x662 = 0;
static int8_t x663 = INT8_MIN;
volatile int32_t t151 = 1016331557;
volatile int8_t x669 = -52;
static volatile uint32_t x674 = 3015105U;
int32_t x685 = INT32_MIN;
volatile int32_t x687 = INT32_MIN;
volatile int64_t t157 = 165774290696541849LL;
volatile uint32_t x695 = 347555227U;
uint32_t t158 = 108984U;
static int64_t t159 = -5307876154265879LL;
volatile uint32_t x710 = 2019U;
static int16_t x715 = INT16_MAX;
volatile int32_t t162 = 72;
int16_t x719 = -266;
volatile int16_t x721 = INT16_MIN;
static int8_t x723 = INT8_MIN;
int16_t x725 = 2;
int64_t x727 = -1LL;
int32_t t166 = -688923027;
volatile int32_t x734 = 0;
uint8_t x743 = UINT8_MAX;
volatile uint64_t t170 = 6067931LLU;
int64_t t172 = 2427992159LL;
volatile uint8_t x765 = 40U;
int16_t x768 = 14203;
int16_t x778 = INT16_MAX;
static int64_t x785 = -1LL;
volatile int32_t t181 = 1561;
static volatile uint64_t t182 = 2923620LLU;
int8_t x797 = 2;
uint16_t x800 = 179U;
static int8_t x812 = -48;
static int8_t x814 = INT8_MIN;
static volatile uint64_t t185 = 221710280866478LLU;
int32_t x825 = -1529135;
volatile uint8_t x834 = 21U;
int32_t x836 = INT32_MAX;
int64_t x837 = 0LL;
uint64_t t191 = 907387LLU;
volatile uint64_t x842 = 17966659404LLU;
int64_t x843 = -764045845389LL;
volatile uint32_t x846 = 112U;
uint8_t x848 = UINT8_MAX;
int16_t x856 = INT16_MAX;
static int64_t x870 = -2332259947LL;
int16_t x871 = INT16_MIN;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	static volatile int32_t x3 = -1;
	int8_t x4 = INT8_MIN;
	volatile uint32_t t0 = 19611U;

    t0 = (x1+(x2^(x3%x4)));

    if (t0 != 80U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 7;
	uint8_t x6 = UINT8_MAX;
	int32_t x7 = INT32_MIN;
	static uint8_t x8 = UINT8_MAX;
	int32_t t1 = 135560;

    t1 = (x5+(x6^(x7%x8)));

    if (t1 != -122) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = INT16_MIN;
	int8_t x10 = INT8_MAX;
	int16_t x11 = -1;
	volatile int32_t t2 = 44543993;

    t2 = (x9+(x10^(x11%x12)));

    if (t2 != -32896) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x15 = 210047325LLU;
	static int64_t x16 = -3513710464214510LL;

    t3 = (x13+(x14^(x15%x16)));

    if (t3 != 18446744073499504167LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	uint32_t x18 = UINT32_MAX;
	uint8_t x19 = UINT8_MAX;
	volatile int64_t x20 = 1LL;
	volatile int64_t t4 = -2847454LL;

    t4 = (x17+(x18^(x19%x20)));

    if (t4 != 4295032830LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x22 = -713;
	int32_t x23 = -99;
	volatile int16_t x24 = INT16_MIN;

    t5 = (x21+(x22^(x23%x24)));

    if (t5 != -108804575110877510LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 31U;
	int64_t x26 = INT64_MIN;
	int16_t x27 = INT16_MIN;
	static uint32_t x28 = 473U;

    t6 = (x25+(x26^(x27%x28)));

    if (t6 != -9223372036854775376LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	int16_t x30 = 7;
	static int32_t x31 = INT32_MIN;
	static uint16_t x32 = UINT16_MAX;
	int32_t t7 = 85615;

    t7 = (x29+(x30^(x31%x32)));

    if (t7 != -32889) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	static int8_t x34 = INT8_MIN;
	static int64_t x35 = INT64_MIN;
	uint32_t x36 = 125875562U;
	int64_t t8 = 31438LL;

    t8 = (x33+(x34^(x35%x36)));

    if (t8 != -9223372036734175992LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	int16_t x38 = 0;
	int64_t x39 = INT64_MIN;
	volatile int32_t x40 = -49877976;
	volatile int64_t t9 = -2526947LL;

    t9 = (x37+(x38^(x39%x40)));

    if (t9 != -11001424LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x43 = 1;
	int16_t x44 = 6166;
	uint64_t t10 = 458627320787126395LLU;

    t10 = (x41+(x42^(x43%x44)));

    if (t10 != 65349769442829083LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 15U;
	static int8_t x46 = 1;
	uint8_t x47 = 0U;
	static int16_t x48 = 6;
	static volatile int32_t t11 = 129394789;

    t11 = (x45+(x46^(x47%x48)));

    if (t11 != 16) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 235U;
	uint64_t x50 = 441802945234LLU;
	volatile uint8_t x51 = 73U;
	volatile uint16_t x52 = UINT16_MAX;
	volatile uint64_t t12 = 1789LLU;

    t12 = (x49+(x50^(x51%x52)));

    if (t12 != 441802945414LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x53 = 344883U;
	int64_t x55 = INT64_MIN;
	int16_t x56 = INT16_MIN;
	int64_t t13 = -1LL;

    t13 = (x53+(x54^(x55%x56)));

    if (t13 != -2147138765LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x58 = UINT32_MAX;
	uint8_t x59 = 34U;

    t14 = (x57+(x58^(x59%x60)));

    if (t14 != 2147483647U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x66 = UINT32_MAX;
	volatile uint16_t x67 = 12691U;
	volatile uint64_t x68 = UINT64_MAX;
	volatile uint64_t t15 = 48034LLU;

    t15 = (x65+(x66^(x67%x68)));

    if (t15 != 4317921661LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x69 = UINT32_MAX;
	static int16_t x70 = INT16_MAX;
	volatile uint8_t x71 = 37U;
	volatile uint32_t x72 = UINT32_MAX;
	uint32_t t16 = 55254826U;

    t16 = (x69+(x70^(x71%x72)));

    if (t16 != 32729U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x77 = -1;
	static uint16_t x78 = UINT16_MAX;
	int64_t x79 = -15667181575727997LL;
	int8_t x80 = INT8_MIN;

    t17 = (x77+(x78^(x79%x80)));

    if (t17 != -65413LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x81 = 21077872197808LLU;
	int8_t x82 = -1;
	int8_t x83 = INT8_MAX;
	int64_t x84 = -1LL;

    t18 = (x81+(x82^(x83%x84)));

    if (t18 != 21077872197807LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = INT32_MIN;
	int8_t x86 = INT8_MIN;
	int64_t t19 = -6041239168322963LL;

    t19 = (x85+(x86^(x87%x88)));

    if (t19 != -2147483649LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x89 = UINT8_MAX;
	uint8_t x91 = 47U;
	int16_t x92 = INT16_MIN;
	uint64_t t20 = 58136244432LLU;

    t20 = (x89+(x90^(x91%x92)));

    if (t20 != 8582986592447LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x93 = 558799;
	int32_t x94 = INT32_MIN;
	uint16_t x95 = 112U;
	uint64_t x96 = 1236449859605873035LLU;

    t21 = (x93+(x94^(x95%x96)));

    if (t21 != 18446744071562626879LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x101 = -34;
	int16_t x102 = INT16_MAX;
	int64_t x103 = -204363034287435LL;
	uint32_t x104 = 59U;
	volatile int64_t t22 = -2350LL;

    t22 = (x101+(x102^(x103%x104)));

    if (t22 != -32749LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x105 = INT8_MIN;
	volatile uint16_t x106 = UINT16_MAX;
	static uint64_t x107 = 2LLU;
	volatile uint32_t x108 = 2879503U;
	volatile uint64_t t23 = 272075LLU;

    t23 = (x105+(x106^(x107%x108)));

    if (t23 != 65405LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x109 = INT32_MIN;
	static int16_t x111 = INT16_MIN;
	volatile int32_t x112 = -1;
	int64_t t24 = 46723LL;

    t24 = (x109+(x110^(x111%x112)));

    if (t24 != -48179177445466628LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x113 = -1LL;
	static volatile uint64_t x114 = 7537LLU;
	static volatile int16_t x116 = INT16_MIN;
	volatile uint64_t t25 = 1063896628375LLU;

    t25 = (x113+(x114^(x115%x116)));

    if (t25 != 7536LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x117 = INT16_MAX;
	int64_t x118 = 2201624938276063531LL;
	int16_t x119 = 13569;
	volatile uint8_t x120 = UINT8_MAX;
	volatile int64_t t26 = -138366253497274LL;

    t26 = (x117+(x118^(x119%x120)));

    if (t26 != 2201624938276096284LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x121 = -1;
	uint8_t x122 = UINT8_MAX;
	volatile int8_t x123 = INT8_MIN;
	volatile int16_t x124 = INT16_MAX;

    t27 = (x121+(x122^(x123%x124)));

    if (t27 != -130) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x125 = -1;
	volatile uint32_t x126 = UINT32_MAX;
	int8_t x127 = INT8_MIN;
	volatile uint32_t t28 = 39U;

    t28 = (x125+(x126^(x127%x128)));

    if (t28 != 126U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x133 = 240U;
	int64_t x135 = 279986983452484641LL;

    t29 = (x133+(x134^(x135%x136)));

    if (t29 != 12424LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x137 = -133;
	uint16_t x138 = 294U;
	int32_t x139 = -1;
	uint32_t x140 = UINT32_MAX;
	uint32_t t30 = 229813U;

    t30 = (x137+(x138^(x139%x140)));

    if (t30 != 161U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x141 = INT16_MAX;
	uint64_t x143 = UINT64_MAX;
	uint64_t t31 = 679913992838LLU;

    t31 = (x141+(x142^(x143%x144)));

    if (t31 != 32891LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x145 = INT16_MAX;
	uint16_t x146 = 19217U;
	uint64_t t32 = 4987645074166319178LLU;

    t32 = (x145+(x146^(x147%x148)));

    if (t32 != 46317LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x149 = 83282;
	uint16_t x151 = 2U;
	int16_t x152 = -1;
	int64_t t33 = 38698757695470138LL;

    t33 = (x149+(x150^(x151%x152)));

    if (t33 != -9223372036854692526LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x153 = 558642;
	static int16_t x154 = -1;
	int32_t x155 = INT32_MIN;
	static int64_t x156 = -13853401113683LL;

    t34 = (x153+(x154^(x155%x156)));

    if (t34 != 2148042289LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x162 = 1034047LL;
	int64_t x163 = 14LL;
	int16_t x164 = INT16_MAX;
	int64_t t35 = -294019212404546LL;

    t35 = (x161+(x162^(x163%x164)));

    if (t35 != 1099568LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x166 = 0U;

    t36 = (x165+(x166^(x167%x168)));

    if (t36 != 421) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x169 = UINT8_MAX;
	int32_t x170 = 1;
	uint64_t x171 = UINT64_MAX;

    t37 = (x169+(x170^(x171%x172)));

    if (t37 != 256LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x173 = 3U;
	int8_t x174 = INT8_MIN;
	volatile int16_t x175 = INT16_MIN;
	volatile int8_t x176 = INT8_MIN;

    t38 = (x173+(x174^(x175%x176)));

    if (t38 != -125) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x177 = 10874U;
	uint8_t x179 = UINT8_MAX;
	int32_t x180 = INT32_MIN;
	volatile int32_t t39 = -1717;

    t39 = (x177+(x178^(x179%x180)));

    if (t39 != 10745) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x181 = INT8_MIN;
	volatile int64_t x183 = 72327365257016LL;
	int8_t x184 = INT8_MIN;
	int64_t t40 = -119641795LL;

    t40 = (x181+(x182^(x183%x184)));

    if (t40 != -32840LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x185 = 22LLU;
	int16_t x186 = INT16_MIN;
	static int16_t x187 = INT16_MIN;
	static volatile int8_t x188 = 37;
	volatile uint64_t t41 = 6LLU;

    t41 = (x185+(x186^(x187%x188)));

    if (t41 != 32767LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x190 = -1668;
	int16_t x191 = INT16_MIN;
	uint16_t x192 = UINT16_MAX;

    t42 = (x189+(x190^(x191%x192)));

    if (t42 != 31123LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x193 = 11;
	uint64_t x194 = UINT64_MAX;
	volatile int8_t x195 = INT8_MAX;
	int16_t x196 = 1;
	volatile uint64_t t43 = 2179248079182LLU;

    t43 = (x193+(x194^(x195%x196)));

    if (t43 != 10LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x197 = -118;
	int64_t x198 = 89482LL;
	int32_t x199 = INT32_MIN;
	int16_t x200 = 1;
	static int64_t t44 = -2890854LL;

    t44 = (x197+(x198^(x199%x200)));

    if (t44 != 89364LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x201 = UINT32_MAX;
	uint64_t x202 = 6LLU;
	uint32_t x203 = 14617U;
	static volatile int64_t x204 = 227261404915743LL;

    t45 = (x201+(x202^(x203%x204)));

    if (t45 != 4294981918LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x205 = -1;
	uint8_t x206 = 0U;
	int16_t x207 = -1818;
	volatile int32_t x208 = INT32_MAX;
	static int32_t t46 = 1870;

    t46 = (x205+(x206^(x207%x208)));

    if (t46 != -1819) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x209 = -46;
	uint32_t x210 = UINT32_MAX;
	volatile uint64_t x211 = UINT64_MAX;
	int64_t x212 = INT64_MIN;
	volatile uint64_t t47 = 683735LLU;

    t47 = (x209+(x210^(x211%x212)));

    if (t47 != 9223372032559808466LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x213 = 835037284028788085LLU;
	int32_t x214 = 1820;
	int16_t x215 = -1;
	volatile uint8_t x216 = UINT8_MAX;

    t48 = (x213+(x214^(x215%x216)));

    if (t48 != 835037284028786264LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x217 = 19992U;
	static int32_t x219 = 78416569;
	volatile int64_t x220 = 12665974345961LL;
	volatile int64_t t49 = -346966984189LL;

    t49 = (x217+(x218^(x219%x220)));

    if (t49 != -78423855LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x221 = -67253LL;
	uint16_t x222 = 237U;
	int16_t x224 = INT16_MIN;
	volatile int64_t t50 = -91028LL;

    t50 = (x221+(x222^(x223%x224)));

    if (t50 != -67400LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x225 = 3U;
	static int64_t x226 = INT64_MIN;
	uint16_t x227 = UINT16_MAX;
	static volatile int64_t t51 = 1777LL;

    t51 = (x225+(x226^(x227%x228)));

    if (t51 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x229 = 7;
	uint16_t x232 = 4U;
	volatile int64_t t52 = -12771087LL;

    t52 = (x229+(x230^(x231%x232)));

    if (t52 != 15213LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x233 = -1;
	uint64_t x234 = 57914468LLU;
	int32_t x235 = INT32_MAX;
	int64_t x236 = INT64_MIN;
	uint64_t t53 = 6301348LLU;

    t53 = (x233+(x234^(x235%x236)));

    if (t53 != 2089569178LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x237 = 1;
	int16_t x238 = INT16_MIN;
	int8_t x239 = INT8_MIN;
	volatile uint16_t x240 = 2328U;
	int32_t t54 = 369886886;

    t54 = (x237+(x238^(x239%x240)));

    if (t54 != 32641) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x241 = INT8_MAX;
	uint8_t x242 = UINT8_MAX;
	static volatile uint32_t x243 = 1U;
	volatile uint32_t t55 = 10013863U;

    t55 = (x241+(x242^(x243%x244)));

    if (t55 != 381U) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x245 = UINT64_MAX;
	int32_t x246 = -3;
	static int16_t x247 = INT16_MAX;
	static int16_t x248 = -1;
	volatile uint64_t t56 = 5134869124418528804LLU;

    t56 = (x245+(x246^(x247%x248)));

    if (t56 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int64_t x253 = -1LL;
	uint64_t x254 = UINT64_MAX;
	int32_t x255 = INT32_MAX;

    t57 = (x253+(x254^(x255%x256)));

    if (t57 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x258 = INT16_MIN;
	static uint64_t x259 = UINT64_MAX;
	uint16_t x260 = 594U;

    t58 = (x257+(x258^(x259%x260)));

    if (t58 != 689177598577450LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x261 = INT32_MIN;
	static volatile int32_t x262 = -1;
	int8_t x263 = INT8_MAX;
	uint64_t x264 = 1911312LLU;
	uint64_t t59 = 3232LLU;

    t59 = (x261+(x262^(x263%x264)));

    if (t59 != 18446744071562067840LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x265 = INT16_MIN;
	int8_t x266 = INT8_MIN;
	uint64_t x267 = UINT64_MAX;
	static int64_t x268 = -4312010622280855LL;
	volatile uint64_t t60 = 213850876LLU;

    t60 = (x265+(x266^(x267%x268)));

    if (t60 != 18442432063087237910LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x269 = INT32_MIN;
	static volatile int64_t x270 = -1LL;
	int32_t x271 = -1;
	int8_t x272 = INT8_MIN;
	int64_t t61 = 33855586048410LL;

    t61 = (x269+(x270^(x271%x272)));

    if (t61 != -2147483648LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x273 = UINT32_MAX;
	int64_t x274 = 19812850967LL;
	uint32_t x275 = 11150U;
	volatile uint64_t x276 = 6140693007211589296LLU;

    t62 = (x273+(x274^(x275%x276)));

    if (t62 != 24107824792LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x277 = -32627LL;
	int64_t x278 = INT64_MIN;
	static int32_t x279 = -419872298;
	int8_t x280 = 26;
	static volatile int64_t t63 = -207694529LL;

    t63 = (x277+(x278^(x279%x280)));

    if (t63 != 9223372036854743167LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x281 = 10U;
	uint16_t x283 = 6U;
	volatile int64_t t64 = -123599359729404511LL;

    t64 = (x281+(x282^(x283%x284)));

    if (t64 != -9223372036854775792LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x285 = INT16_MIN;
	uint16_t x287 = 4U;
	int64_t x288 = -1LL;

    t65 = (x285+(x286^(x287%x288)));

    if (t65 != -65536LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x289 = -13999;
	int8_t x290 = -1;
	int64_t x291 = INT64_MIN;
	int8_t x292 = -1;
	int64_t t66 = 75LL;

    t66 = (x289+(x290^(x291%x292)));

    if (t66 != -14000LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x296 = INT8_MAX;
	uint32_t t67 = 6297894U;

    t67 = (x293+(x294^(x295%x296)));

    if (t67 != 4294967293U) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x297 = INT8_MIN;
	static int8_t x298 = 5;
	int8_t x299 = 2;
	static int32_t x300 = INT32_MAX;
	static int32_t t68 = 9989;

    t68 = (x297+(x298^(x299%x300)));

    if (t68 != -121) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x303 = 2;
	static uint32_t x304 = 6533U;

    t69 = (x301+(x302^(x303%x304)));

    if (t69 != 124U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x305 = 275309264598510LLU;
	int32_t x307 = -651216;
	uint8_t x308 = UINT8_MAX;

    t70 = (x305+(x306^(x307%x308)));

    if (t70 != 275309264598260LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x309 = INT8_MIN;
	uint64_t x310 = UINT64_MAX;

    t71 = (x309+(x310^(x311%x312)));

    if (t71 != 18446744073709406905LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x313 = INT64_MAX;
	static uint8_t x314 = 54U;
	int32_t x315 = -1;
	int32_t x316 = INT32_MAX;
	volatile int64_t t72 = -72565501177LL;

    t72 = (x313+(x314^(x315%x316)));

    if (t72 != 9223372036854775752LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x317 = UINT16_MAX;
	int16_t x318 = INT16_MIN;
	uint16_t x319 = UINT16_MAX;
	int32_t t73 = 54152;

    t73 = (x317+(x318^(x319%x320)));

    if (t73 != 32766) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x321 = INT16_MAX;
	int32_t x322 = -7598839;
	int64_t x324 = INT64_MAX;
	volatile int64_t t74 = -1488LL;

    t74 = (x321+(x322^(x323%x324)));

    if (t74 != -7566044LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x326 = 0U;
	uint32_t x328 = 50110U;
	uint32_t t75 = 218343U;

    t75 = (x325+(x326^(x327%x328)));

    if (t75 != 260U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x330 = INT8_MIN;
	int64_t x331 = INT64_MIN;
	static int32_t x332 = INT32_MAX;
	static int64_t t76 = 0LL;

    t76 = (x329+(x330^(x331%x332)));

    if (t76 != 125LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x333 = UINT8_MAX;
	uint8_t x335 = 4U;
	int64_t x336 = INT64_MIN;
	volatile int64_t t77 = 1723LL;

    t77 = (x333+(x334^(x335%x336)));

    if (t77 != -2147483389LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x337 = 2U;
	int8_t x340 = -1;
	static volatile int32_t t78 = -27422;

    t78 = (x337+(x338^(x339%x340)));

    if (t78 != 65537) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x341 = INT8_MAX;
	int16_t x344 = -1;
	volatile int64_t t79 = 33971814910235LL;

    t79 = (x341+(x342^(x343%x344)));

    if (t79 != 126LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x345 = UINT8_MAX;
	int16_t x346 = -1;
	volatile int8_t x348 = INT8_MIN;
	uint32_t t80 = 82853U;

    t80 = (x345+(x346^(x347%x348)));

    if (t80 != 127U) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x349 = 12;
	static int8_t x350 = INT8_MIN;
	static int16_t x351 = -15677;
	volatile uint8_t x352 = 12U;
	volatile int32_t t81 = -22614988;

    t81 = (x349+(x350^(x351%x352)));

    if (t81 != 135) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x355 = 338131658LLU;
	static int16_t x356 = INT16_MIN;
	volatile uint64_t t82 = 8914291127443937LLU;

    t82 = (x353+(x354^(x355%x356)));

    if (t82 != 18446743401310350019LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x357 = 15U;
	int16_t x359 = INT16_MIN;
	int32_t x360 = 12;
	uint64_t t83 = 1414986405LLU;

    t83 = (x357+(x358^(x359%x360)));

    if (t83 != 18446744073709116342LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x361 = INT8_MIN;
	volatile int64_t x363 = -202127092532LL;
	uint64_t x364 = UINT64_MAX;

    t84 = (x361+(x362^(x363%x364)));

    if (t84 != 203747316812LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x365 = 2;
	int8_t x366 = INT8_MIN;
	int16_t x367 = -382;
	int32_t x368 = -1;
	volatile int32_t t85 = -8;

    t85 = (x365+(x366^(x367%x368)));

    if (t85 != -126) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x369 = INT16_MIN;
	volatile uint64_t x370 = 63LLU;
	uint8_t x372 = 15U;
	volatile uint64_t t86 = 73LLU;

    t86 = (x369+(x370^(x371%x372)));

    if (t86 != 18446744073709518898LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x373 = INT16_MIN;
	uint32_t x375 = 32675506U;
	volatile uint32_t t87 = 0U;

    t87 = (x373+(x374^(x375%x376)));

    if (t87 != 372527U) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x377 = INT16_MIN;
	static uint32_t x379 = 92745922U;
	uint8_t x380 = UINT8_MAX;
	uint32_t t88 = 12679771U;

    t88 = (x377+(x378^(x379%x380)));

    if (t88 != 4294901887U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x381 = INT16_MIN;
	int16_t x382 = INT16_MIN;
	int16_t x383 = INT16_MIN;
	volatile uint64_t x384 = 353866832LLU;
	uint64_t t89 = 1054908537378548452LLU;

    t89 = (x381+(x382^(x383%x384)));

    if (t89 != 18446744073496032368LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x385 = -2554601955426LL;
	int16_t x386 = INT16_MAX;
	static int64_t x387 = INT64_MIN;
	static uint16_t x388 = 162U;
	volatile int64_t t90 = 1944410671LL;

    t90 = (x385+(x386^(x387%x388)));

    if (t90 != -2554601988169LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x389 = 26034176430634071LL;
	int64_t x390 = INT64_MIN;
	int64_t t91 = -1073026810949789294LL;

    t91 = (x389+(x390^(x391%x392)));

    if (t91 != -9197337860424141734LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x397 = 14U;
	volatile uint16_t x398 = UINT16_MAX;
	int8_t x399 = -1;
	int8_t x400 = INT8_MIN;

    t92 = (x397+(x398^(x399%x400)));

    if (t92 != -65522) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x401 = -1;
	static volatile uint64_t x402 = 2776376078LLU;
	uint64_t x403 = 35807838068LLU;
	static volatile uint32_t x404 = 3848U;

    t93 = (x401+(x402^(x403%x404)));

    if (t93 != 2776375377LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x405 = -1;
	static volatile uint32_t x406 = 13U;
	int32_t x407 = -1;
	int64_t x408 = INT64_MIN;

    t94 = (x405+(x406^(x407%x408)));

    if (t94 != -15LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x410 = 6U;
	int16_t x411 = INT16_MIN;
	static uint16_t x412 = 1U;
	static uint32_t t95 = 8861340U;

    t95 = (x409+(x410^(x411%x412)));

    if (t95 != 75U) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x415 = -6;
	uint64_t x416 = 1LLU;
	uint64_t t96 = 796099461655130LLU;

    t96 = (x413+(x414^(x415%x416)));

    if (t96 != 18446744072009287048LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x417 = -1;
	uint8_t x418 = UINT8_MAX;
	static int16_t x419 = -1;
	int8_t x420 = INT8_MIN;

    t97 = (x417+(x418^(x419%x420)));

    if (t97 != -257) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x421 = 20;
	volatile int16_t x423 = INT16_MAX;
	int16_t x424 = INT16_MAX;
	static volatile uint64_t t98 = 521068850566LLU;

    t98 = (x421+(x422^(x423%x424)));

    if (t98 != 2038LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x425 = 0U;
	int8_t x426 = INT8_MIN;
	int16_t x427 = -120;
	int16_t x428 = INT16_MIN;

    t99 = (x425+(x426^(x427%x428)));

    if (t99 != 8) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x429 = INT16_MIN;
	volatile int32_t x431 = -1;
	int64_t x432 = -7LL;
	volatile int64_t t100 = 473240468LL;

    t100 = (x429+(x430^(x431%x432)));

    if (t100 != -76097LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x434 = -43;
	int16_t x436 = -1;
	static volatile int64_t t101 = 1948144LL;

    t101 = (x433+(x434^(x435%x436)));

    if (t101 != 84LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x437 = 137107236182078048LLU;
	volatile int16_t x438 = -1;
	uint16_t x439 = UINT16_MAX;
	uint8_t x440 = 29U;
	static uint64_t t102 = 6893297734612LLU;

    t102 = (x437+(x438^(x439%x440)));

    if (t102 != 137107236182078023LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x441 = 998940418U;
	uint64_t t103 = 63931437LLU;

    t103 = (x441+(x442^(x443%x444)));

    if (t103 != 4962528042LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x445 = INT16_MIN;
	uint32_t x446 = 72U;
	static uint8_t x447 = UINT8_MAX;
	uint32_t x448 = 810716U;
	volatile uint32_t t104 = 3261U;

    t104 = (x445+(x446^(x447%x448)));

    if (t104 != 4294934711U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x449 = UINT32_MAX;
	static int16_t x450 = -9901;
	uint64_t x451 = UINT64_MAX;
	static uint32_t x452 = UINT32_MAX;
	volatile uint64_t t105 = 2993517LLU;

    t105 = (x449+(x450^(x451%x452)));

    if (t105 != 4294957394LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x453 = 1652363LL;
	int8_t x454 = 39;
	static uint8_t x455 = UINT8_MAX;
	int16_t x456 = INT16_MAX;
	volatile int64_t t106 = 252247430232489LL;

    t106 = (x453+(x454^(x455%x456)));

    if (t106 != 1652579LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x461 = INT8_MIN;
	uint16_t x462 = 6U;
	uint16_t x463 = UINT16_MAX;
	int32_t x464 = INT32_MAX;
	int32_t t107 = 1046209177;

    t107 = (x461+(x462^(x463%x464)));

    if (t107 != 65401) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x465 = -1;
	int8_t x468 = INT8_MIN;
	volatile uint64_t t108 = 181495596360778158LLU;

    t108 = (x465+(x466^(x467%x468)));

    if (t108 != 2147437353LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x469 = INT16_MAX;
	uint32_t x470 = 1232517U;
	uint64_t x471 = 30204438774058LLU;
	uint32_t x472 = 100422112U;
	static uint64_t t109 = 638311LLU;

    t109 = (x469+(x470^(x471%x472)));

    if (t109 != 79724398LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x473 = UINT16_MAX;
	int8_t x474 = 1;
	int8_t x475 = -11;
	volatile int32_t t110 = -15953;

    t110 = (x473+(x474^(x475%x476)));

    if (t110 != 65523) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x477 = UINT16_MAX;
	int8_t x479 = INT8_MIN;
	int32_t x480 = INT32_MAX;
	static int32_t t111 = 0;

    t111 = (x477+(x478^(x479%x480)));

    if (t111 != 65660) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x481 = 71U;
	int32_t x482 = INT32_MAX;
	uint32_t x483 = 62192161U;
	int16_t x484 = INT16_MIN;
	volatile uint32_t t112 = 136U;

    t112 = (x481+(x482^(x483%x484)));

    if (t112 != 2085291557U) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x486 = -694438169;
	uint8_t x488 = 15U;
	int64_t t113 = 1966511810876178LL;

    t113 = (x485+(x486^(x487%x488)));

    if (t113 != 694503703LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x491 = 5U;
	static uint8_t x492 = UINT8_MAX;
	volatile int32_t t114 = -74212146;

    t114 = (x489+(x490^(x491%x492)));

    if (t114 != 2147483644) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x493 = INT64_MAX;
	static int64_t x494 = -468498865406410LL;
	static uint8_t x495 = 16U;
	static volatile int64_t t115 = 1582472705LL;

    t115 = (x493+(x494^(x495%x496)));

    if (t115 != 9222903537989369381LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x497 = 112U;
	int32_t x498 = 8220485;
	int32_t x499 = -1;
	volatile int32_t x500 = INT32_MIN;
	volatile int32_t t116 = -1324;

    t116 = (x497+(x498^(x499%x500)));

    if (t116 != -8220374) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x501 = INT32_MIN;
	uint64_t x502 = 427502360LLU;
	static uint8_t x504 = UINT8_MAX;
	uint64_t t117 = 82257225987530LLU;

    t117 = (x501+(x502^(x503%x504)));

    if (t117 != 18446744071134565528LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x505 = UINT16_MAX;
	volatile int64_t x507 = 7518LL;
	volatile int64_t t118 = -1729600LL;

    t118 = (x505+(x506^(x507%x508)));

    if (t118 != 58016LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x509 = -3700LL;
	int64_t x510 = -22785275268LL;
	static int32_t x512 = -128;

    t119 = (x509+(x510^(x511%x512)));

    if (t119 != -22785279022LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x513 = 1U;
	volatile uint32_t x514 = UINT32_MAX;
	int32_t x515 = INT32_MIN;

    t120 = (x513+(x514^(x515%x516)));

    if (t120 != 22U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x517 = 28934899U;
	uint64_t x518 = 1650773LLU;
	int16_t x519 = 0;
	uint16_t x520 = 1714U;
	static volatile uint64_t t121 = 1437918413LLU;

    t121 = (x517+(x518^(x519%x520)));

    if (t121 != 30585672LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x521 = INT64_MAX;
	static int16_t x522 = INT16_MIN;
	int64_t x523 = INT64_MAX;
	uint32_t x524 = UINT32_MAX;

    t122 = (x521+(x522^(x523%x524)));

    if (t122 != 9223372034707324926LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x525 = 18U;
	int16_t x526 = 24;
	uint32_t x528 = 545824305U;
	uint32_t t123 = 21U;

    t123 = (x525+(x526^(x527%x528)));

    if (t123 != 534U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x530 = -16847;
	int16_t x531 = INT16_MIN;
	int8_t x532 = -1;
	volatile int64_t t124 = 4502917528032416180LL;

    t124 = (x529+(x530^(x531%x532)));

    if (t124 != 9223372036854758960LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x533 = 2127U;
	int16_t x534 = INT16_MIN;
	static volatile int64_t x535 = INT64_MAX;
	volatile int32_t x536 = 1;
	volatile int64_t t125 = -77LL;

    t125 = (x533+(x534^(x535%x536)));

    if (t125 != -30641LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x541 = 2U;
	int16_t x542 = INT16_MIN;
	uint8_t x543 = UINT8_MAX;
	volatile int32_t t126 = 556083;

    t126 = (x541+(x542^(x543%x544)));

    if (t126 != -32765) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x545 = INT8_MIN;
	static int16_t x546 = INT16_MIN;
	volatile int32_t x547 = INT32_MIN;

    t127 = (x545+(x546^(x547%x548)));

    if (t127 != 2147450752LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x549 = INT16_MAX;
	volatile uint8_t x550 = 90U;
	uint8_t x551 = 0U;
	uint16_t x552 = 223U;
	int32_t t128 = 37736037;

    t128 = (x549+(x550^(x551%x552)));

    if (t128 != 32857) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x553 = INT32_MAX;
	uint8_t x554 = UINT8_MAX;
	volatile uint32_t x555 = 98990609U;
	int16_t x556 = 23;

    t129 = (x553+(x554^(x555%x556)));

    if (t129 != 2147483890U) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x557 = -1LL;
	int8_t x558 = INT8_MIN;
	int64_t x560 = -1LL;
	volatile int64_t t130 = 1930093042822702LL;

    t130 = (x557+(x558^(x559%x560)));

    if (t130 != -129LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x565 = -1;
	int8_t x566 = INT8_MAX;
	int8_t x567 = 0;
	volatile int64_t x568 = INT64_MIN;
	int64_t t131 = -34LL;

    t131 = (x565+(x566^(x567%x568)));

    if (t131 != 126LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x569 = 1175U;
	uint16_t x570 = 0U;
	int8_t x571 = INT8_MIN;
	static uint64_t x572 = 17148887LLU;
	uint64_t t132 = 1LLU;

    t132 = (x569+(x570^(x571%x572)));

    if (t132 != 5196120LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x573 = INT32_MIN;
	static uint64_t x574 = 63403681191LLU;
	volatile uint16_t x575 = 1894U;
	static volatile uint64_t t133 = 31104229841810942LLU;

    t133 = (x573+(x574^(x575%x576)));

    if (t133 != 61256196801LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x578 = 316926808814LL;
	int8_t x579 = -1;
	volatile uint8_t x580 = 1U;

    t134 = (x577+(x578^(x579%x580)));

    if (t134 != 316926808686LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x581 = INT8_MAX;
	uint32_t x582 = 1082997046U;
	volatile uint32_t x583 = 64280U;
	uint64_t x584 = UINT64_MAX;
	static volatile uint64_t t135 = 16945496809332LLU;

    t135 = (x581+(x582^(x583%x584)));

    if (t135 != 1083032237LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x585 = INT8_MIN;
	int64_t x587 = INT64_MIN;
	static volatile int64_t x588 = INT64_MIN;

    t136 = (x585+(x586^(x587%x588)));

    if (t136 != -32896LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x589 = UINT64_MAX;
	uint16_t x590 = 10598U;
	static int16_t x591 = -247;
	static int64_t x592 = INT64_MIN;
	volatile uint64_t t137 = 49578668LLU;

    t137 = (x589+(x590^(x591%x592)));

    if (t137 != 18446744073709540974LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x593 = -1;
	int8_t x595 = -7;
	int8_t x596 = INT8_MIN;
	volatile int32_t t138 = 47450274;

    t138 = (x593+(x594^(x595%x596)));

    if (t138 != -5099) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x598 = 512375445;
	static volatile int8_t x599 = 0;
	int8_t x600 = INT8_MIN;

    t139 = (x597+(x598^(x599%x600)));

    if (t139 != 512375700) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x605 = 193U;
	uint32_t x606 = 27595926U;
	static volatile int32_t x607 = INT32_MIN;

    t140 = (x605+(x606^(x607%x608)));

    if (t140 != 4267371539U) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x609 = 104LL;
	int64_t x610 = 7534140004623787LL;
	int8_t x611 = 17;
	int32_t x612 = -25;
	volatile int64_t t141 = 3866375974717LL;

    t141 = (x609+(x610^(x611%x612)));

    if (t141 != 7534140004623906LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x618 = 62235LLU;
	int8_t x619 = -1;
	static uint16_t x620 = 193U;
	uint64_t t142 = 69499835192373617LLU;

    t142 = (x617+(x618^(x619%x620)));

    if (t142 != 18446744073709489507LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x621 = -1LL;
	static uint32_t x622 = 310790671U;
	int64_t x623 = INT64_MIN;
	int16_t x624 = 1031;
	volatile int64_t t143 = -34283608274430LL;

    t143 = (x621+(x622^(x623%x624)));

    if (t143 != -310790554LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x629 = 8268300LLU;
	int64_t x630 = INT64_MAX;
	int16_t x631 = -17;
	int64_t x632 = -2040196724LL;

    t144 = (x629+(x630^(x631%x632)));

    if (t144 != 9223372036863044124LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x635 = 224;
	volatile int64_t t145 = -314LL;

    t145 = (x633+(x634^(x635%x636)));

    if (t145 != 10230LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x641 = INT16_MAX;
	uint32_t x642 = 316387157U;
	static int32_t x644 = 91;
	volatile int64_t t146 = -1106137708041377LL;

    t146 = (x641+(x642^(x643%x644)));

    if (t146 != -316354388LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x645 = INT16_MIN;
	volatile uint16_t x646 = 164U;
	int64_t x647 = INT64_MAX;
	static volatile uint64_t x648 = 500778037113LLU;
	uint64_t t147 = 1480357472LLU;

    t147 = (x645+(x646^(x647%x648)));

    if (t147 != 83952391647LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x649 = INT16_MIN;
	volatile int8_t x651 = -1;
	uint16_t x652 = 1397U;
	static int32_t t148 = -39;

    t148 = (x649+(x650^(x651%x652)));

    if (t148 != -32907) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x653 = 0U;
	volatile int32_t x655 = INT32_MAX;
	uint32_t x656 = 199248736U;
	volatile uint32_t t149 = 295330U;

    t149 = (x653+(x654^(x655%x656)));

    if (t149 != 154996284U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x657 = 7LLU;
	static uint32_t x658 = 7769957U;
	int8_t x659 = 1;
	volatile int32_t x660 = INT32_MIN;
	volatile uint64_t t150 = 2966551734LLU;

    t150 = (x657+(x658^(x659%x660)));

    if (t150 != 7769963LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x661 = UINT16_MAX;
	int16_t x664 = -1;

    t151 = (x661+(x662^(x663%x664)));

    if (t151 != 65535) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x665 = INT32_MAX;
	int32_t x666 = INT32_MIN;
	static uint64_t x667 = UINT64_MAX;
	int16_t x668 = 4;
	volatile uint64_t t152 = 1429245862234535LLU;

    t152 = (x665+(x666^(x667%x668)));

    if (t152 != 2LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x670 = INT64_MIN;
	volatile uint64_t x671 = 20571381468045LLU;
	int32_t x672 = INT32_MIN;
	volatile uint64_t t153 = 7360523882744LLU;

    t153 = (x669+(x670^(x671%x672)));

    if (t153 != 9223392608236243801LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x673 = 2U;
	int32_t x675 = -1;
	uint16_t x676 = 2U;
	volatile uint32_t t154 = 815100U;

    t154 = (x673+(x674^(x675%x676)));

    if (t154 != 4291952192U) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x677 = INT32_MIN;
	uint8_t x678 = UINT8_MAX;
	volatile int16_t x679 = INT16_MAX;
	volatile uint32_t x680 = 12U;
	static volatile uint32_t t155 = 12U;

    t155 = (x677+(x678^(x679%x680)));

    if (t155 != 2147483896U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x681 = 13047230246560509LLU;
	int32_t x682 = -1832;
	volatile int32_t x683 = INT32_MIN;
	uint8_t x684 = UINT8_MAX;
	uint64_t t156 = 18787736LLU;

    t156 = (x681+(x682^(x683%x684)));

    if (t156 != 13047230246562389LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x686 = INT64_MIN;
	int64_t x688 = INT64_MAX;

    t157 = (x685+(x686^(x687%x688)));

    if (t157 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x693 = 0;
	volatile uint16_t x694 = 44U;
	volatile int8_t x696 = INT8_MAX;

    t158 = (x693+(x694^(x695%x696)));

    if (t158 != 6U) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x701 = -2;
	static uint8_t x702 = 3U;
	int64_t x703 = INT64_MIN;
	uint32_t x704 = UINT32_MAX;

    t159 = (x701+(x702^(x703%x704)));

    if (t159 != -2147483647LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x705 = INT8_MIN;
	static uint64_t x706 = 3066307638LLU;
	volatile uint32_t x707 = 112925937U;
	int8_t x708 = INT8_MAX;
	volatile uint64_t t160 = 74162508LLU;

    t160 = (x705+(x706^(x707%x708)));

    if (t160 != 3066307579LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x709 = UINT16_MAX;
	uint16_t x711 = 3791U;
	int64_t x712 = INT64_MIN;
	int64_t t161 = 43150LL;

    t161 = (x709+(x710^(x711%x712)));

    if (t161 != 67883LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x713 = 7U;
	int16_t x714 = -1;
	uint8_t x716 = UINT8_MAX;

    t162 = (x713+(x714^(x715%x716)));

    if (t162 != -121) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x717 = 407305273LLU;
	static int8_t x718 = -1;
	int16_t x720 = INT16_MIN;
	static volatile uint64_t t163 = 11LLU;

    t163 = (x717+(x718^(x719%x720)));

    if (t163 != 407305538LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x722 = 3U;
	int64_t x724 = -3948LL;
	int64_t t164 = -60246LL;

    t164 = (x721+(x722^(x723%x724)));

    if (t164 != -32893LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x726 = 49028U;
	static volatile int64_t x728 = INT64_MIN;
	volatile int64_t t165 = 493LL;

    t165 = (x725+(x726^(x727%x728)));

    if (t165 != -49027LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x729 = 114U;
	volatile int8_t x730 = INT8_MIN;
	int32_t x731 = -1;
	int8_t x732 = INT8_MAX;

    t166 = (x729+(x730^(x731%x732)));

    if (t166 != 241) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x733 = 58U;
	int16_t x735 = INT16_MIN;
	volatile int16_t x736 = INT16_MIN;
	volatile uint32_t t167 = 1U;

    t167 = (x733+(x734^(x735%x736)));

    if (t167 != 58U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x737 = -1;
	int64_t x738 = INT64_MIN;
	uint64_t x739 = 7676187152681LLU;
	int64_t x740 = -1LL;
	uint64_t t168 = 54974176957494458LLU;

    t168 = (x737+(x738^(x739%x740)));

    if (t168 != 9223379713041928488LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x741 = INT8_MAX;
	uint64_t x742 = UINT64_MAX;
	static volatile uint64_t x744 = UINT64_MAX;
	volatile uint64_t t169 = 36227620854014293LLU;

    t169 = (x741+(x742^(x743%x744)));

    if (t169 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x745 = -3;
	uint32_t x746 = UINT32_MAX;
	uint64_t x747 = UINT64_MAX;
	static int16_t x748 = INT16_MIN;

    t170 = (x745+(x746^(x747%x748)));

    if (t170 != 4294934525LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x749 = INT16_MAX;
	int64_t x750 = -4128797351699496667LL;
	static int32_t x751 = INT32_MAX;
	int16_t x752 = INT16_MAX;
	int64_t t171 = -3163092300LL;

    t171 = (x749+(x750^(x751%x752)));

    if (t171 != -4128797351699463901LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x753 = INT8_MAX;
	int64_t x754 = -1LL;
	volatile uint16_t x755 = UINT16_MAX;
	int16_t x756 = 524;

    t172 = (x753+(x754^(x755%x756)));

    if (t172 != 91LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x757 = UINT16_MAX;
	static uint8_t x758 = 1U;
	int64_t x759 = INT64_MIN;
	uint32_t x760 = 10300781U;
	int64_t t173 = 31470166742859LL;

    t173 = (x757+(x758^(x759%x760)));

    if (t173 != -3990016LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x761 = INT16_MAX;
	int64_t x762 = INT64_MAX;
	volatile int64_t x763 = INT64_MIN;
	volatile uint16_t x764 = 212U;
	static int64_t t174 = -28931236187348LL;

    t174 = (x761+(x762^(x763%x764)));

    if (t174 != -9223372036854742902LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x766 = 26729227;
	int8_t x767 = 3;
	int32_t t175 = -36095901;

    t175 = (x765+(x766^(x767%x768)));

    if (t175 != 26729264) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x769 = INT32_MIN;
	uint64_t x770 = 3652LLU;
	int8_t x771 = INT8_MIN;
	int16_t x772 = INT16_MIN;
	volatile uint64_t t176 = 116967409986LLU;

    t176 = (x769+(x770^(x771%x772)));

    if (t176 != 18446744071562064324LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x773 = -5812LL;
	int8_t x774 = INT8_MIN;
	uint8_t x775 = 7U;
	int8_t x776 = 54;
	int64_t t177 = 102950067LL;

    t177 = (x773+(x774^(x775%x776)));

    if (t177 != -5933LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x777 = -3749272LL;
	int8_t x779 = -1;
	static int64_t x780 = INT64_MAX;
	volatile int64_t t178 = -14710LL;

    t178 = (x777+(x778^(x779%x780)));

    if (t178 != -3782040LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x781 = INT32_MIN;
	uint8_t x782 = 0U;
	int8_t x783 = 23;
	int32_t x784 = INT32_MAX;
	int32_t t179 = 1015830;

    t179 = (x781+(x782^(x783%x784)));

    if (t179 != -2147483625) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x786 = -1LL;
	uint8_t x787 = 20U;
	uint64_t x788 = UINT64_MAX;
	uint64_t t180 = 10858450051967LLU;

    t180 = (x785+(x786^(x787%x788)));

    if (t180 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint16_t x789 = 3U;
	int8_t x790 = 7;
	int32_t x791 = 99893368;
	volatile int8_t x792 = INT8_MAX;

    t181 = (x789+(x790^(x791%x792)));

    if (t181 != 129) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x793 = 1041472LLU;
	uint16_t x794 = 1U;
	uint32_t x795 = UINT32_MAX;
	volatile uint32_t x796 = UINT32_MAX;

    t182 = (x793+(x794^(x795%x796)));

    if (t182 != 1041473LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x798 = 3519071331267038LL;
	static volatile int64_t x799 = -1LL;
	volatile int64_t t183 = 10784511LL;

    t183 = (x797+(x798^(x799%x800)));

    if (t183 != -3519071331267037LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x809 = 35070;
	volatile int64_t x810 = -1LL;
	int16_t x811 = -1;
	int64_t t184 = -33780815588LL;

    t184 = (x809+(x810^(x811%x812)));

    if (t184 != 35070LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x813 = 114LLU;
	int64_t x815 = 310LL;
	static int16_t x816 = -59;

    t185 = (x813+(x814^(x815%x816)));

    if (t185 != 1LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x817 = 5;
	uint8_t x818 = UINT8_MAX;
	int32_t x819 = -3;
	int32_t x820 = INT32_MIN;
	int32_t t186 = 0;

    t186 = (x817+(x818^(x819%x820)));

    if (t186 != -249) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x821 = 5943537705753LLU;
	int64_t x822 = 12084LL;
	int64_t x823 = -512744LL;
	int8_t x824 = INT8_MAX;
	uint64_t t187 = 118461638221LLU;

    t187 = (x821+(x822^(x823%x824)));

    if (t187 != 5943537693696LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x826 = UINT64_MAX;
	int32_t x827 = INT32_MIN;
	static int8_t x828 = -1;
	uint64_t t188 = 13794178197LLU;

    t188 = (x825+(x826^(x827%x828)));

    if (t188 != 18446744073708022480LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x829 = 7923051807LLU;
	static volatile uint8_t x830 = 80U;
	uint8_t x831 = UINT8_MAX;
	int32_t x832 = -1;
	uint64_t t189 = 31077475LLU;

    t189 = (x829+(x830^(x831%x832)));

    if (t189 != 7923051887LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x833 = UINT8_MAX;
	int16_t x835 = 3713;
	int32_t t190 = 123;

    t190 = (x833+(x834^(x835%x836)));

    if (t190 != 3987) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x838 = 332667LLU;
	volatile int32_t x839 = -1;
	int32_t x840 = 38847;

    t191 = (x837+(x838^(x839%x840)));

    if (t191 != 18446744073709218948LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x841 = 476U;
	uint8_t x844 = 2U;
	static uint64_t t192 = 5571948978336019LLU;

    t192 = (x841+(x842^(x843%x844)));

    if (t192 != 18446744055742892687LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x845 = INT16_MAX;
	static uint64_t x847 = UINT64_MAX;
	volatile uint64_t t193 = 874193355LLU;

    t193 = (x845+(x846^(x847%x848)));

    if (t193 != 32879LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x849 = 6U;
	int32_t x850 = -97;
	int8_t x851 = INT8_MAX;
	int8_t x852 = INT8_MAX;
	int32_t t194 = -631908518;

    t194 = (x849+(x850^(x851%x852)));

    if (t194 != -91) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x853 = 726295181U;
	static volatile int64_t x854 = -1LL;
	static int16_t x855 = INT16_MIN;
	int64_t t195 = -113423626LL;

    t195 = (x853+(x854^(x855%x856)));

    if (t195 != 726295181LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x857 = -1LL;
	uint64_t x858 = UINT64_MAX;
	static int64_t x859 = INT64_MAX;
	static uint64_t x860 = 4LLU;
	static uint64_t t196 = 7769181190LLU;

    t196 = (x857+(x858^(x859%x860)));

    if (t196 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x861 = -2476;
	static volatile int64_t x862 = 22920903851LL;
	static uint8_t x863 = UINT8_MAX;
	static uint16_t x864 = 57U;
	int64_t t197 = -1612307332489679LL;

    t197 = (x861+(x862^(x863%x864)));

    if (t197 != 22920901380LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x865 = 0LLU;
	volatile int32_t x866 = INT32_MAX;
	uint64_t x867 = UINT64_MAX;
	uint8_t x868 = 27U;
	volatile uint64_t t198 = 3375261637LLU;

    t198 = (x865+(x866^(x867%x868)));

    if (t198 != 2147483623LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint8_t x869 = UINT8_MAX;
	int64_t x872 = -29933389LL;
	static int64_t t199 = -197LL;

    t199 = (x869+(x870^(x871%x872)));

    if (t199 != 2332232340LL) { NG(); } else { ; }
	
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


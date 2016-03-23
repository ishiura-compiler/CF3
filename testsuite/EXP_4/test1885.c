
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

int8_t x1 = -11;
int16_t x8 = -1;
int32_t t2 = 705870072;
static int8_t x13 = INT8_MIN;
volatile int8_t x22 = INT8_MIN;
static int32_t t5 = 74049;
int16_t x27 = INT16_MIN;
int16_t x29 = INT16_MIN;
int8_t x30 = 22;
volatile uint8_t x35 = 10U;
int32_t t8 = 26;
volatile int32_t x39 = 5697;
int32_t t9 = 488278;
int8_t x41 = 0;
uint64_t x56 = 104382035705405LLU;
static int8_t x64 = INT8_MAX;
static int8_t x66 = 0;
int16_t x78 = -11;
static int8_t x81 = -21;
static int64_t x87 = -13LL;
uint64_t x101 = UINT64_MAX;
int32_t t25 = 163211;
int16_t x105 = -59;
int8_t x113 = INT8_MAX;
volatile int32_t t29 = -19;
int8_t x121 = -1;
static volatile uint64_t x124 = UINT64_MAX;
int64_t x127 = -2310LL;
int64_t x128 = INT64_MIN;
int32_t x131 = INT32_MIN;
int16_t x132 = INT16_MIN;
uint8_t x134 = 9U;
volatile int32_t t33 = -529275479;
static uint16_t x138 = 141U;
volatile int32_t t35 = 15;
uint8_t x146 = 1U;
uint8_t x147 = 118U;
int8_t x148 = -41;
volatile int64_t x156 = INT64_MAX;
int32_t t38 = 72;
int8_t x166 = -1;
int64_t x169 = 230397370993521LL;
uint16_t x172 = UINT16_MAX;
uint64_t x174 = 3000356573463880LLU;
uint16_t x176 = 8317U;
static uint16_t x178 = UINT16_MAX;
volatile int16_t x183 = INT16_MIN;
volatile int32_t t45 = -947410928;
volatile int64_t x188 = 104564152LL;
uint8_t x189 = UINT8_MAX;
volatile int32_t t48 = 0;
uint32_t x199 = 224U;
int16_t x205 = -1;
int16_t x209 = 50;
int64_t x210 = INT64_MAX;
uint32_t x216 = UINT32_MAX;
static int32_t x217 = INT32_MIN;
int16_t x228 = INT16_MIN;
int16_t x235 = 4;
volatile int32_t t58 = -7710910;
int8_t x246 = INT8_MAX;
int32_t x251 = INT32_MAX;
int64_t x259 = -1LL;
int16_t x263 = -104;
int64_t x264 = INT64_MAX;
static int64_t x267 = -1LL;
static volatile int32_t t67 = 12215;
int64_t x276 = INT64_MIN;
int64_t x281 = 10292LL;
int16_t x285 = INT16_MIN;
int16_t x290 = -1;
static int16_t x293 = 0;
static int32_t x296 = 0;
uint64_t x310 = UINT64_MAX;
uint8_t x321 = 8U;
int64_t x322 = -197211846310296LL;
int64_t x325 = INT64_MIN;
int64_t x329 = INT64_MIN;
static volatile int32_t x331 = 91140775;
uint64_t x333 = UINT64_MAX;
int16_t x336 = INT16_MIN;
volatile int32_t t83 = 111173114;
int16_t x337 = INT16_MIN;
uint64_t x340 = UINT64_MAX;
int64_t x346 = INT64_MIN;
int64_t x350 = INT64_MIN;
static int16_t x351 = -1;
uint16_t x353 = 823U;
int16_t x360 = INT16_MIN;
int32_t t89 = 87;
static int16_t x363 = INT16_MAX;
uint64_t x364 = UINT64_MAX;
volatile int32_t x368 = INT32_MAX;
int32_t x377 = -1;
int16_t x378 = INT16_MIN;
uint16_t x381 = 180U;
static volatile int32_t t95 = -10;
uint16_t x385 = 5093U;
volatile uint16_t x390 = UINT16_MAX;
static int32_t x391 = -1;
volatile uint8_t x393 = UINT8_MAX;
int16_t x394 = INT16_MIN;
volatile int64_t x398 = INT64_MAX;
int32_t t99 = -12;
int32_t x408 = -6998920;
int32_t x409 = -1;
volatile int16_t x415 = -1;
int8_t x416 = -1;
int32_t x426 = INT32_MAX;
int64_t x428 = INT64_MAX;
volatile int8_t x433 = 1;
int32_t x436 = INT32_MIN;
volatile uint32_t x437 = 89920U;
volatile uint8_t x438 = UINT8_MAX;
int16_t x440 = INT16_MIN;
int8_t x444 = -12;
static int16_t x455 = -22;
uint64_t x457 = UINT64_MAX;
volatile int16_t x460 = INT16_MAX;
uint8_t x466 = 0U;
static int64_t x468 = 7558257294LL;
uint16_t x471 = 1958U;
int32_t x472 = -62977;
int64_t x474 = INT64_MIN;
volatile int32_t x485 = -136670887;
int32_t x486 = -991;
int64_t x495 = INT64_MIN;
volatile int32_t t123 = -624619;
static int32_t x497 = -490884;
int8_t x513 = -1;
int8_t x516 = 11;
int64_t x522 = INT64_MIN;
int32_t x524 = INT32_MIN;
int64_t x529 = INT64_MAX;
int32_t x531 = -1;
int16_t x532 = -1;
int64_t x533 = INT64_MAX;
int8_t x534 = 28;
uint64_t x539 = 21874011485LLU;
static int32_t x548 = 13;
uint16_t x549 = UINT16_MAX;
uint32_t x555 = UINT32_MAX;
int16_t x558 = -1;
static volatile int32_t t139 = 41610124;
static int32_t x571 = -1;
int16_t x572 = 1351;
static int16_t x578 = INT16_MIN;
volatile int32_t t144 = 2493;
int64_t x581 = -212936119387387226LL;
static volatile int32_t t146 = -367;
uint16_t x589 = 1U;
uint32_t x591 = 371497U;
uint16_t x594 = 30U;
int16_t x596 = INT16_MIN;
static int32_t t148 = -95;
int64_t x609 = INT64_MIN;
static int32_t x615 = INT32_MAX;
volatile uint32_t x617 = UINT32_MAX;
uint16_t x618 = 9U;
uint16_t x619 = 764U;
int32_t t154 = -14;
int32_t x625 = 11;
volatile int16_t x632 = INT16_MAX;
volatile int32_t x636 = 77;
uint16_t x641 = UINT16_MAX;
uint64_t x644 = UINT64_MAX;
uint64_t x646 = 23478360LLU;
volatile int32_t t162 = -110610517;
int32_t x653 = INT32_MIN;
volatile int32_t x656 = -3;
static int32_t t163 = -148199;
int8_t x662 = -1;
volatile int8_t x667 = -46;
int32_t x668 = INT32_MIN;
int32_t x670 = INT32_MAX;
static uint64_t x671 = 1134277LLU;
static int64_t x678 = -714LL;
int64_t x686 = INT64_MIN;
int32_t x687 = INT32_MIN;
int16_t x692 = INT16_MIN;
int16_t x693 = INT16_MIN;
volatile int8_t x695 = INT8_MAX;
volatile int32_t t174 = 305864455;
uint8_t x706 = 5U;
int16_t x707 = 3395;
volatile uint32_t x718 = UINT32_MAX;
int32_t t179 = 88577648;
int32_t x723 = INT32_MAX;
static int32_t t181 = -9517;
int8_t x732 = INT8_MAX;
static volatile int32_t t182 = 17;
int32_t x733 = INT32_MIN;
uint16_t x734 = UINT16_MAX;
int16_t x735 = 0;
uint8_t x740 = 5U;
static uint32_t x749 = UINT32_MAX;
int64_t x752 = INT64_MIN;
uint16_t x761 = UINT16_MAX;
static uint64_t x763 = UINT64_MAX;
static int8_t x764 = INT8_MIN;
uint32_t x772 = UINT32_MAX;
static volatile uint8_t x777 = UINT8_MAX;
static int32_t x779 = 362474;
volatile int64_t x786 = INT64_MIN;
volatile uint32_t x789 = UINT32_MAX;
uint32_t x792 = 314046U;
uint32_t x796 = 99U;
volatile int16_t x797 = 6;


void f0(void) {
    	int64_t x2 = 144234473763445LL;
	int32_t x3 = -1;
	uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = 56068;

    t0 = (x1>(x2>(x3<=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	static int16_t x6 = -197;
	int16_t x7 = INT16_MIN;
	int32_t t1 = 192;

    t1 = (x5>(x6>(x7<=x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 274025547LL;
	uint32_t x10 = UINT32_MAX;
	int64_t x11 = -50LL;
	uint16_t x12 = 19U;

    t2 = (x9>(x10>(x11<=x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x14 = INT32_MIN;
	uint8_t x15 = UINT8_MAX;
	volatile int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 114858;

    t3 = (x13>(x14>(x15<=x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = INT8_MIN;
	volatile int8_t x18 = INT8_MIN;
	static int8_t x19 = 4;
	int64_t x20 = INT64_MAX;
	static volatile int32_t t4 = -10242;

    t4 = (x17>(x18>(x19<=x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = 1;
	int16_t x23 = -197;
	int64_t x24 = -1LL;

    t5 = (x21>(x22>(x23<=x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = -3;
	static uint64_t x26 = UINT64_MAX;
	int16_t x28 = -3;
	volatile int32_t t6 = -411856294;

    t6 = (x25>(x26>(x27<=x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x31 = -1;
	volatile uint64_t x32 = UINT64_MAX;
	static volatile int32_t t7 = 252;

    t7 = (x29>(x30>(x31<=x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 719LLU;
	int8_t x34 = -1;
	int8_t x36 = INT8_MIN;

    t8 = (x33>(x34>(x35<=x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = INT16_MIN;
	volatile int32_t x38 = INT32_MIN;
	volatile uint8_t x40 = UINT8_MAX;

    t9 = (x37>(x38>(x39<=x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x42 = INT16_MIN;
	int8_t x43 = -19;
	uint32_t x44 = UINT32_MAX;
	int32_t t10 = -836657393;

    t10 = (x41>(x42>(x43<=x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = 1;
	int32_t x46 = INT32_MIN;
	int8_t x47 = INT8_MIN;
	int64_t x48 = -1LL;
	int32_t t11 = 0;

    t11 = (x45>(x46>(x47<=x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MAX;
	int64_t x50 = 1583051496578LL;
	int16_t x51 = INT16_MIN;
	int32_t x52 = INT32_MIN;
	static volatile int32_t t12 = 3187783;

    t12 = (x49>(x50>(x51<=x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = 6LL;
	uint8_t x54 = UINT8_MAX;
	static int32_t x55 = INT32_MIN;
	int32_t t13 = -2;

    t13 = (x53>(x54>(x55<=x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int16_t x57 = INT16_MIN;
	int64_t x58 = -1LL;
	static uint8_t x59 = 64U;
	uint32_t x60 = UINT32_MAX;
	static volatile int32_t t14 = 939;

    t14 = (x57>(x58>(x59<=x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = 11LL;
	uint16_t x62 = UINT16_MAX;
	static volatile int16_t x63 = INT16_MIN;
	static int32_t t15 = -79;

    t15 = (x61>(x62>(x63<=x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = UINT16_MAX;
	volatile int32_t x67 = INT32_MAX;
	static int8_t x68 = INT8_MAX;
	volatile int32_t t16 = -1727643;

    t16 = (x65>(x66>(x67<=x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x69 = -18;
	static int8_t x70 = -1;
	uint64_t x71 = 522506550840318182LLU;
	uint16_t x72 = 1U;
	volatile int32_t t17 = -6509;

    t17 = (x69>(x70>(x71<=x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -3;
	volatile int16_t x74 = -1;
	int64_t x75 = -1LL;
	int64_t x76 = INT64_MAX;
	volatile int32_t t18 = 1897325;

    t18 = (x73>(x74>(x75<=x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x77 = 34;
	volatile int64_t x79 = -2128589881117434105LL;
	static int8_t x80 = 14;
	int32_t t19 = 530;

    t19 = (x77>(x78>(x79<=x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x82 = 0U;
	int64_t x83 = -1LL;
	int8_t x84 = INT8_MIN;
	volatile int32_t t20 = 0;

    t20 = (x81>(x82>(x83<=x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -1LL;
	int64_t x86 = INT64_MAX;
	volatile int16_t x88 = INT16_MAX;
	volatile int32_t t21 = -203946090;

    t21 = (x85>(x86>(x87<=x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 7U;
	int16_t x90 = 2;
	int8_t x91 = -1;
	int16_t x92 = INT16_MIN;
	int32_t t22 = 168;

    t22 = (x89>(x90>(x91<=x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = UINT16_MAX;
	int16_t x94 = INT16_MIN;
	int16_t x95 = INT16_MIN;
	uint16_t x96 = 10U;
	volatile int32_t t23 = -3394931;

    t23 = (x93>(x94>(x95<=x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x97 = UINT16_MAX;
	int8_t x98 = 1;
	int64_t x99 = -23LL;
	volatile uint32_t x100 = UINT32_MAX;
	volatile int32_t t24 = -224489;

    t24 = (x97>(x98>(x99<=x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x102 = 4508U;
	volatile int16_t x103 = -1;
	uint64_t x104 = 2LLU;

    t25 = (x101>(x102>(x103<=x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x106 = -3LL;
	int64_t x107 = INT64_MAX;
	int16_t x108 = 16;
	int32_t t26 = -3401;

    t26 = (x105>(x106>(x107<=x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x109 = 22U;
	int16_t x110 = 11;
	static int8_t x111 = -13;
	int16_t x112 = 0;
	int32_t t27 = -5206;

    t27 = (x109>(x110>(x111<=x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x114 = INT64_MIN;
	int16_t x115 = INT16_MAX;
	static int64_t x116 = INT64_MIN;
	int32_t t28 = 1054381526;

    t28 = (x113>(x114>(x115<=x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x117 = UINT8_MAX;
	uint16_t x118 = 7449U;
	static int8_t x119 = -1;
	uint8_t x120 = UINT8_MAX;

    t29 = (x117>(x118>(x119<=x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x122 = 2112U;
	static volatile uint32_t x123 = 56U;
	int32_t t30 = -3673266;

    t30 = (x121>(x122>(x123<=x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x125 = -1;
	uint8_t x126 = 0U;
	static int32_t t31 = -39930199;

    t31 = (x125>(x126>(x127<=x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -55075327890LL;
	int64_t x130 = 4LL;
	volatile int32_t t32 = -1;

    t32 = (x129>(x130>(x131<=x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 38940U;
	uint8_t x135 = UINT8_MAX;
	volatile int8_t x136 = INT8_MIN;

    t33 = (x133>(x134>(x135<=x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x137 = 869;
	uint16_t x139 = 811U;
	int64_t x140 = INT64_MIN;
	static volatile int32_t t34 = 1;

    t34 = (x137>(x138>(x139<=x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MAX;
	volatile int8_t x142 = 57;
	volatile uint32_t x143 = 7700822U;
	int8_t x144 = -1;

    t35 = (x141>(x142>(x143<=x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MAX;
	static volatile int32_t t36 = 119843;

    t36 = (x145>(x146>(x147<=x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x149 = -1;
	uint64_t x150 = UINT64_MAX;
	uint64_t x151 = UINT64_MAX;
	int64_t x152 = INT64_MIN;
	int32_t t37 = 3514;

    t37 = (x149>(x150>(x151<=x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint32_t x153 = 486U;
	int32_t x154 = INT32_MIN;
	int16_t x155 = -1;

    t38 = (x153>(x154>(x155<=x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 19U;
	int8_t x158 = INT8_MIN;
	volatile int64_t x159 = -5921598981136153LL;
	uint32_t x160 = 1426553020U;
	volatile int32_t t39 = -5;

    t39 = (x157>(x158>(x159<=x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = 52841LLU;
	uint16_t x162 = 121U;
	int16_t x163 = INT16_MAX;
	uint32_t x164 = 12043344U;
	volatile int32_t t40 = 18;

    t40 = (x161>(x162>(x163<=x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x165 = 198U;
	int32_t x167 = INT32_MAX;
	uint8_t x168 = 4U;
	volatile int32_t t41 = -51;

    t41 = (x165>(x166>(x167<=x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x170 = 909175728;
	static uint8_t x171 = 10U;
	volatile int32_t t42 = -14152260;

    t42 = (x169>(x170>(x171<=x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MIN;
	uint16_t x175 = UINT16_MAX;
	volatile int32_t t43 = 2;

    t43 = (x173>(x174>(x175<=x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int64_t x177 = 4LL;
	uint32_t x179 = 5108U;
	volatile int64_t x180 = INT64_MIN;
	int32_t t44 = 868;

    t44 = (x177>(x178>(x179<=x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = UINT64_MAX;
	volatile uint16_t x182 = 1U;
	static int16_t x184 = -279;

    t45 = (x181>(x182>(x183<=x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x185 = INT8_MIN;
	int16_t x186 = INT16_MIN;
	volatile int64_t x187 = INT64_MIN;
	volatile int32_t t46 = -76495;

    t46 = (x185>(x186>(x187<=x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x190 = -1;
	volatile int32_t x191 = -1;
	static volatile uint32_t x192 = 347534459U;
	volatile int32_t t47 = 87110976;

    t47 = (x189>(x190>(x191<=x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 25200792696541LLU;
	uint16_t x194 = UINT16_MAX;
	volatile uint8_t x195 = 7U;
	int64_t x196 = INT64_MIN;

    t48 = (x193>(x194>(x195<=x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x197 = 1LL;
	int8_t x198 = -1;
	static int64_t x200 = INT64_MIN;
	int32_t t49 = 28945;

    t49 = (x197>(x198>(x199<=x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = -1LL;
	int64_t x202 = INT64_MAX;
	int32_t x203 = -1;
	int64_t x204 = INT64_MIN;
	volatile int32_t t50 = 27114728;

    t50 = (x201>(x202>(x203<=x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x206 = -7241;
	volatile int64_t x207 = 6LL;
	int8_t x208 = INT8_MAX;
	int32_t t51 = -10884557;

    t51 = (x205>(x206>(x207<=x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x211 = 0;
	volatile uint64_t x212 = 183LLU;
	static int32_t t52 = -1616;

    t52 = (x209>(x210>(x211<=x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x213 = 0;
	volatile int16_t x214 = INT16_MIN;
	volatile int32_t x215 = INT32_MIN;
	int32_t t53 = -1785;

    t53 = (x213>(x214>(x215<=x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x218 = 846U;
	uint8_t x219 = 0U;
	int32_t x220 = 3507386;
	int32_t t54 = -11714;

    t54 = (x217>(x218>(x219<=x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = INT64_MAX;
	int8_t x222 = -30;
	uint64_t x223 = 5442483576153382321LLU;
	int16_t x224 = 0;
	volatile int32_t t55 = 0;

    t55 = (x221>(x222>(x223<=x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = -9125643;
	int64_t x226 = INT64_MIN;
	static volatile int16_t x227 = INT16_MIN;
	volatile int32_t t56 = -34728;

    t56 = (x225>(x226>(x227<=x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = UINT16_MAX;
	int32_t x230 = INT32_MAX;
	uint8_t x231 = UINT8_MAX;
	int16_t x232 = INT16_MAX;
	volatile int32_t t57 = 14789580;

    t57 = (x229>(x230>(x231<=x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x233 = 17;
	uint16_t x234 = UINT16_MAX;
	uint32_t x236 = 339011169U;

    t58 = (x233>(x234>(x235<=x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 231U;
	int16_t x238 = -49;
	int64_t x239 = 10565845964635LL;
	int64_t x240 = -1LL;
	volatile int32_t t59 = 10730305;

    t59 = (x237>(x238>(x239<=x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = UINT64_MAX;
	uint16_t x242 = 45U;
	volatile int64_t x243 = 1442272479205037LL;
	int16_t x244 = INT16_MAX;
	int32_t t60 = 6;

    t60 = (x241>(x242>(x243<=x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MIN;
	int32_t x247 = -1;
	uint16_t x248 = UINT16_MAX;
	int32_t t61 = -2;

    t61 = (x245>(x246>(x247<=x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = -1;
	int16_t x250 = INT16_MIN;
	int32_t x252 = -1;
	static int32_t t62 = -9339;

    t62 = (x249>(x250>(x251<=x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = INT32_MIN;
	volatile int16_t x254 = INT16_MAX;
	int32_t x255 = 379;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t63 = -155425004;

    t63 = (x253>(x254>(x255<=x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x257 = -1;
	int32_t x258 = -1;
	static uint8_t x260 = 114U;
	volatile int32_t t64 = -110;

    t64 = (x257>(x258>(x259<=x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x261 = INT16_MAX;
	uint32_t x262 = 1622840U;
	int32_t t65 = 13136;

    t65 = (x261>(x262>(x263<=x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = -1;
	int16_t x266 = INT16_MIN;
	volatile int8_t x268 = INT8_MIN;
	int32_t t66 = -434317847;

    t66 = (x265>(x266>(x267<=x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = 3U;
	int8_t x270 = INT8_MIN;
	volatile uint8_t x271 = 116U;
	static int32_t x272 = INT32_MAX;

    t67 = (x269>(x270>(x271<=x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x273 = 819U;
	volatile int8_t x274 = INT8_MIN;
	int8_t x275 = -1;
	volatile int32_t t68 = -2;

    t68 = (x273>(x274>(x275<=x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	volatile int8_t x278 = INT8_MIN;
	static int64_t x279 = INT64_MIN;
	int32_t x280 = INT32_MIN;
	volatile int32_t t69 = -7;

    t69 = (x277>(x278>(x279<=x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint16_t x282 = 1154U;
	uint16_t x283 = 223U;
	volatile int8_t x284 = -1;
	volatile int32_t t70 = 4585;

    t70 = (x281>(x282>(x283<=x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x286 = INT32_MAX;
	int64_t x287 = INT64_MIN;
	int64_t x288 = INT64_MIN;
	int32_t t71 = 3;

    t71 = (x285>(x286>(x287<=x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x289 = INT64_MIN;
	uint8_t x291 = 0U;
	static int8_t x292 = 3;
	volatile int32_t t72 = -2159436;

    t72 = (x289>(x290>(x291<=x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x294 = -132163287LL;
	uint16_t x295 = 3U;
	int32_t t73 = -401132;

    t73 = (x293>(x294>(x295<=x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MAX;
	int32_t x298 = 86542;
	volatile uint16_t x299 = 31U;
	volatile uint16_t x300 = 1U;
	static volatile int32_t t74 = 1;

    t74 = (x297>(x298>(x299<=x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x301 = INT64_MAX;
	int8_t x302 = -1;
	int32_t x303 = -234725835;
	int64_t x304 = -1LL;
	static volatile int32_t t75 = 2578;

    t75 = (x301>(x302>(x303<=x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x305 = 1;
	uint16_t x306 = 59U;
	int32_t x307 = 447653821;
	static uint8_t x308 = 108U;
	int32_t t76 = 30;

    t76 = (x305>(x306>(x307<=x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = 649291LL;
	int32_t x311 = INT32_MAX;
	uint8_t x312 = 2U;
	static volatile int32_t t77 = -3;

    t77 = (x309>(x310>(x311<=x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x313 = 100U;
	int8_t x314 = -1;
	static uint16_t x315 = 20U;
	uint64_t x316 = 713865610434620LLU;
	volatile int32_t t78 = 561137255;

    t78 = (x313>(x314>(x315<=x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = 34;
	uint16_t x318 = 131U;
	uint64_t x319 = UINT64_MAX;
	volatile uint8_t x320 = 5U;
	volatile int32_t t79 = 335;

    t79 = (x317>(x318>(x319<=x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x323 = 19556804LLU;
	int32_t x324 = 613824;
	static int32_t t80 = 0;

    t80 = (x321>(x322>(x323<=x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x326 = 14201832002799LL;
	static uint16_t x327 = UINT16_MAX;
	static int8_t x328 = INT8_MAX;
	volatile int32_t t81 = -2;

    t81 = (x325>(x326>(x327<=x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x330 = INT64_MAX;
	uint16_t x332 = UINT16_MAX;
	static int32_t t82 = -5417541;

    t82 = (x329>(x330>(x331<=x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x334 = 1177158;
	static int8_t x335 = -1;

    t83 = (x333>(x334>(x335<=x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x338 = 1;
	static int16_t x339 = 138;
	int32_t t84 = 129145;

    t84 = (x337>(x338>(x339<=x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x341 = INT32_MAX;
	static uint32_t x342 = 411435880U;
	int32_t x343 = INT32_MIN;
	volatile uint64_t x344 = UINT64_MAX;
	int32_t t85 = -1644;

    t85 = (x341>(x342>(x343<=x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = 54694577LLU;
	int8_t x347 = -1;
	uint16_t x348 = UINT16_MAX;
	int32_t t86 = -10747;

    t86 = (x345>(x346>(x347<=x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x349 = 3052;
	uint64_t x352 = UINT64_MAX;
	int32_t t87 = 6;

    t87 = (x349>(x350>(x351<=x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x354 = INT8_MIN;
	int64_t x355 = -1LL;
	uint16_t x356 = 183U;
	volatile int32_t t88 = -1514495;

    t88 = (x353>(x354>(x355<=x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = 4083463LL;
	static uint8_t x358 = 20U;
	int8_t x359 = -1;

    t89 = (x357>(x358>(x359<=x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int64_t x361 = INT64_MIN;
	int8_t x362 = 1;
	volatile int32_t t90 = 12763685;

    t90 = (x361>(x362>(x363<=x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -1LL;
	int16_t x366 = -9607;
	static int64_t x367 = -65710465396130LL;
	volatile int32_t t91 = -1105673;

    t91 = (x365>(x366>(x367<=x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MIN;
	volatile uint64_t x370 = 11918767590072LLU;
	static int16_t x371 = INT16_MIN;
	volatile int8_t x372 = -1;
	volatile int32_t t92 = 70785239;

    t92 = (x369>(x370>(x371<=x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x373 = 21239195912831317LLU;
	uint64_t x374 = UINT64_MAX;
	static uint32_t x375 = 2027065U;
	static int32_t x376 = INT32_MIN;
	volatile int32_t t93 = 879987;

    t93 = (x373>(x374>(x375<=x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x379 = INT8_MAX;
	int64_t x380 = -1LL;
	int32_t t94 = 19566;

    t94 = (x377>(x378>(x379<=x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x382 = INT64_MAX;
	int16_t x383 = INT16_MIN;
	volatile uint8_t x384 = 10U;

    t95 = (x381>(x382>(x383<=x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x386 = -1LL;
	static volatile uint64_t x387 = 295642268028277980LLU;
	uint16_t x388 = UINT16_MAX;
	static int32_t t96 = 622;

    t96 = (x385>(x386>(x387<=x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x389 = 9442U;
	uint32_t x392 = UINT32_MAX;
	int32_t t97 = -19404321;

    t97 = (x389>(x390>(x391<=x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x395 = INT16_MAX;
	int32_t x396 = 507736;
	volatile int32_t t98 = 19604435;

    t98 = (x393>(x394>(x395<=x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MIN;
	int64_t x399 = INT64_MIN;
	int16_t x400 = INT16_MIN;

    t99 = (x397>(x398>(x399<=x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x401 = 18253U;
	static int64_t x402 = -1LL;
	uint32_t x403 = UINT32_MAX;
	static int16_t x404 = INT16_MIN;
	int32_t t100 = -13158971;

    t100 = (x401>(x402>(x403<=x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	int64_t x406 = INT64_MIN;
	int16_t x407 = -200;
	int32_t t101 = 40043936;

    t101 = (x405>(x406>(x407<=x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x410 = -1;
	int16_t x411 = 1231;
	int64_t x412 = -395LL;
	volatile int32_t t102 = -3;

    t102 = (x409>(x410>(x411<=x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x413 = INT64_MIN;
	static int16_t x414 = INT16_MIN;
	static int32_t t103 = -532179491;

    t103 = (x413>(x414>(x415<=x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x417 = 62U;
	int32_t x418 = INT32_MIN;
	int32_t x419 = -681;
	uint64_t x420 = UINT64_MAX;
	static volatile int32_t t104 = -11680645;

    t104 = (x417>(x418>(x419<=x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = -219;
	int16_t x422 = -2;
	volatile int16_t x423 = INT16_MAX;
	volatile uint16_t x424 = 1362U;
	int32_t t105 = -10442;

    t105 = (x421>(x422>(x423<=x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 0U;
	int8_t x427 = -1;
	volatile int32_t t106 = 3338927;

    t106 = (x425>(x426>(x427<=x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x429 = -1LL;
	static uint8_t x430 = 0U;
	int8_t x431 = INT8_MAX;
	static int16_t x432 = -28;
	volatile int32_t t107 = -567;

    t107 = (x429>(x430>(x431<=x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x434 = -1LL;
	static int64_t x435 = -1LL;
	int32_t t108 = -387;

    t108 = (x433>(x434>(x435<=x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x439 = INT64_MIN;
	volatile int32_t t109 = -131760289;

    t109 = (x437>(x438>(x439<=x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = 172820U;
	uint64_t x442 = 230212LLU;
	uint16_t x443 = 5469U;
	int32_t t110 = 47;

    t110 = (x441>(x442>(x443<=x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = 14U;
	uint8_t x446 = UINT8_MAX;
	uint64_t x447 = 3884334446259682LLU;
	uint32_t x448 = 141224U;
	volatile int32_t t111 = -13936;

    t111 = (x445>(x446>(x447<=x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = 150957875LL;
	int8_t x450 = INT8_MIN;
	int64_t x451 = INT64_MIN;
	int8_t x452 = INT8_MAX;
	volatile int32_t t112 = -465350;

    t112 = (x449>(x450>(x451<=x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 6U;
	int64_t x454 = -1LL;
	uint32_t x456 = 1827U;
	int32_t t113 = 292093;

    t113 = (x453>(x454>(x455<=x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x458 = UINT8_MAX;
	static volatile int8_t x459 = 1;
	volatile int32_t t114 = 346003;

    t114 = (x457>(x458>(x459<=x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MAX;
	uint32_t x462 = 1815U;
	uint8_t x463 = UINT8_MAX;
	static int8_t x464 = -1;
	int32_t t115 = -28;

    t115 = (x461>(x462>(x463<=x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = 7576228769LL;
	int8_t x467 = INT8_MAX;
	volatile int32_t t116 = 143880663;

    t116 = (x465>(x466>(x467<=x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x469 = 21U;
	uint64_t x470 = 90060443LLU;
	static volatile int32_t t117 = 2;

    t117 = (x469>(x470>(x471<=x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 181U;
	int8_t x475 = -1;
	volatile int8_t x476 = INT8_MIN;
	int32_t t118 = -1;

    t118 = (x473>(x474>(x475<=x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MIN;
	volatile uint16_t x478 = 1U;
	int16_t x479 = 58;
	uint32_t x480 = UINT32_MAX;
	int32_t t119 = 605468;

    t119 = (x477>(x478>(x479<=x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x481 = 3581728977930306LLU;
	uint32_t x482 = 14144486U;
	uint8_t x483 = 10U;
	int16_t x484 = INT16_MIN;
	int32_t t120 = 23;

    t120 = (x481>(x482>(x483<=x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x487 = 6U;
	static int32_t x488 = -1;
	volatile int32_t t121 = -273;

    t121 = (x485>(x486>(x487<=x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MAX;
	volatile uint64_t x490 = 8904004381596320LLU;
	static int64_t x491 = INT64_MIN;
	int8_t x492 = INT8_MIN;
	volatile int32_t t122 = 668328;

    t122 = (x489>(x490>(x491<=x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = -1;
	static int64_t x494 = -320412093LL;
	volatile uint8_t x496 = UINT8_MAX;

    t123 = (x493>(x494>(x495<=x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x498 = INT64_MIN;
	int64_t x499 = -1LL;
	static uint32_t x500 = 42U;
	volatile int32_t t124 = 34;

    t124 = (x497>(x498>(x499<=x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = 6850;
	uint16_t x502 = 1U;
	static int32_t x503 = -1;
	uint64_t x504 = 7618LLU;
	int32_t t125 = 73;

    t125 = (x501>(x502>(x503<=x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x505 = 2;
	int32_t x506 = -1;
	int8_t x507 = -1;
	volatile int16_t x508 = INT16_MIN;
	int32_t t126 = -110;

    t126 = (x505>(x506>(x507<=x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = -1;
	int32_t x510 = -45164221;
	uint16_t x511 = UINT16_MAX;
	uint64_t x512 = 10827118LLU;
	volatile int32_t t127 = 1;

    t127 = (x509>(x510>(x511<=x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x514 = 7810198124567LL;
	uint64_t x515 = 46884904LLU;
	int32_t t128 = -15;

    t128 = (x513>(x514>(x515<=x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -1LL;
	uint16_t x518 = UINT16_MAX;
	static int32_t x519 = INT32_MIN;
	volatile int64_t x520 = -557500442062LL;
	static int32_t t129 = -23705583;

    t129 = (x517>(x518>(x519<=x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x521 = 1930U;
	int8_t x523 = INT8_MIN;
	int32_t t130 = -3811553;

    t130 = (x521>(x522>(x523<=x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = UINT8_MAX;
	int32_t x526 = -1;
	static int16_t x527 = -1;
	static uint16_t x528 = 1011U;
	volatile int32_t t131 = 808229;

    t131 = (x525>(x526>(x527<=x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x530 = INT16_MAX;
	static volatile int32_t t132 = -14;

    t132 = (x529>(x530>(x531<=x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x535 = 56U;
	int8_t x536 = 6;
	volatile int32_t t133 = 3945264;

    t133 = (x533>(x534>(x535<=x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = 56U;
	int8_t x538 = INT8_MIN;
	int64_t x540 = -1LL;
	int32_t t134 = 12;

    t134 = (x537>(x538>(x539<=x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x541 = UINT64_MAX;
	volatile uint64_t x542 = 218667961LLU;
	static int32_t x543 = 1;
	static int16_t x544 = 1;
	int32_t t135 = -68267740;

    t135 = (x541>(x542>(x543<=x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = -1;
	int32_t x546 = INT32_MIN;
	int8_t x547 = INT8_MIN;
	int32_t t136 = -146;

    t136 = (x545>(x546>(x547<=x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x550 = 1;
	uint32_t x551 = UINT32_MAX;
	static int32_t x552 = -10899942;
	int32_t t137 = -13;

    t137 = (x549>(x550>(x551<=x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MIN;
	static uint64_t x554 = UINT64_MAX;
	static volatile int64_t x556 = -6LL;
	int32_t t138 = 1869114;

    t138 = (x553>(x554>(x555<=x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x557 = 216585;
	int16_t x559 = INT16_MAX;
	uint32_t x560 = 1019978794U;

    t139 = (x557>(x558>(x559<=x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = 792U;
	static volatile uint8_t x562 = UINT8_MAX;
	int64_t x563 = INT64_MAX;
	int64_t x564 = 3320252263942230947LL;
	volatile int32_t t140 = 1689;

    t140 = (x561>(x562>(x563<=x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x565 = UINT64_MAX;
	volatile int64_t x566 = -1LL;
	uint16_t x567 = 2368U;
	int8_t x568 = INT8_MAX;
	int32_t t141 = -596;

    t141 = (x565>(x566>(x567<=x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = 179;
	uint16_t x570 = UINT16_MAX;
	volatile int32_t t142 = -70402121;

    t142 = (x569>(x570>(x571<=x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = -3345;
	uint8_t x574 = 3U;
	int32_t x575 = INT32_MIN;
	int8_t x576 = -1;
	volatile int32_t t143 = 196241801;

    t143 = (x573>(x574>(x575<=x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x577 = 3497564515981751167LLU;
	int16_t x579 = INT16_MAX;
	int64_t x580 = INT64_MIN;

    t144 = (x577>(x578>(x579<=x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int32_t x582 = INT32_MAX;
	static uint8_t x583 = 3U;
	uint64_t x584 = 2538834349LLU;
	volatile int32_t t145 = 4776;

    t145 = (x581>(x582>(x583<=x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	int16_t x586 = -1;
	static int32_t x587 = -1;
	static int8_t x588 = INT8_MAX;

    t146 = (x585>(x586>(x587<=x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x590 = INT32_MIN;
	static int16_t x592 = 56;
	int32_t t147 = -41917;

    t147 = (x589>(x590>(x591<=x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MIN;
	static uint64_t x595 = 74371240719184LLU;

    t148 = (x593>(x594>(x595<=x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x597 = INT16_MAX;
	int16_t x598 = INT16_MAX;
	uint8_t x599 = UINT8_MAX;
	int64_t x600 = INT64_MIN;
	volatile int32_t t149 = -12515;

    t149 = (x597>(x598>(x599<=x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 15620U;
	int32_t x602 = -1;
	static uint8_t x603 = 2U;
	int32_t x604 = INT32_MIN;
	static int32_t t150 = 8;

    t150 = (x601>(x602>(x603<=x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = 35U;
	int64_t x606 = INT64_MAX;
	volatile uint32_t x607 = 9U;
	int32_t x608 = 2396;
	int32_t t151 = 14265;

    t151 = (x605>(x606>(x607<=x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x610 = -1;
	int32_t x611 = INT32_MAX;
	volatile uint32_t x612 = 42451U;
	static volatile int32_t t152 = -7;

    t152 = (x609>(x610>(x611<=x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x613 = INT8_MIN;
	static uint8_t x614 = 15U;
	volatile int32_t x616 = INT32_MIN;
	volatile int32_t t153 = -50368;

    t153 = (x613>(x614>(x615<=x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x620 = 2741064986952LLU;

    t154 = (x617>(x618>(x619<=x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = -1LL;
	static uint64_t x622 = 450349188775LLU;
	int32_t x623 = INT32_MIN;
	volatile int64_t x624 = INT64_MAX;
	volatile int32_t t155 = -62122;

    t155 = (x621>(x622>(x623<=x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x626 = -1;
	volatile int32_t x627 = INT32_MIN;
	volatile int32_t x628 = INT32_MAX;
	int32_t t156 = 295;

    t156 = (x625>(x626>(x627<=x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = INT64_MIN;
	int16_t x630 = -2;
	int32_t x631 = 0;
	volatile int32_t t157 = 2760812;

    t157 = (x629>(x630>(x631<=x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 1601U;
	static int16_t x634 = INT16_MIN;
	volatile int64_t x635 = 2622LL;
	volatile int32_t t158 = -7528887;

    t158 = (x633>(x634>(x635<=x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x637 = INT16_MIN;
	uint64_t x638 = 87064LLU;
	int32_t x639 = -124113275;
	uint8_t x640 = UINT8_MAX;
	int32_t t159 = 1;

    t159 = (x637>(x638>(x639<=x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x642 = UINT32_MAX;
	int16_t x643 = 1859;
	volatile int32_t t160 = -10071;

    t160 = (x641>(x642>(x643<=x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MIN;
	int32_t x647 = INT32_MIN;
	int64_t x648 = INT64_MIN;
	static volatile int32_t t161 = -251;

    t161 = (x645>(x646>(x647<=x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x649 = INT32_MIN;
	int64_t x650 = -166LL;
	int64_t x651 = INT64_MIN;
	static int64_t x652 = INT64_MAX;

    t162 = (x649>(x650>(x651<=x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x654 = -1;
	int16_t x655 = -1;

    t163 = (x653>(x654>(x655<=x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MAX;
	uint16_t x658 = 2007U;
	static int8_t x659 = -24;
	volatile int32_t x660 = -65350;
	static int32_t t164 = -50233643;

    t164 = (x657>(x658>(x659<=x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x661 = 1;
	int16_t x663 = INT16_MAX;
	int16_t x664 = 12339;
	volatile int32_t t165 = -19559;

    t165 = (x661>(x662>(x663<=x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -1;
	uint8_t x666 = UINT8_MAX;
	int32_t t166 = -766;

    t166 = (x665>(x666>(x667<=x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = 2;
	int8_t x672 = INT8_MIN;
	volatile int32_t t167 = 11240;

    t167 = (x669>(x670>(x671<=x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x673 = 38U;
	int8_t x674 = -10;
	int32_t x675 = INT32_MIN;
	uint8_t x676 = UINT8_MAX;
	int32_t t168 = 185537373;

    t168 = (x673>(x674>(x675<=x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x677 = 643LL;
	int64_t x679 = INT64_MAX;
	uint64_t x680 = 1128LLU;
	volatile int32_t t169 = 15578189;

    t169 = (x677>(x678>(x679<=x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int8_t x681 = -1;
	int32_t x682 = INT32_MIN;
	int32_t x683 = -793;
	int16_t x684 = INT16_MAX;
	volatile int32_t t170 = 23072766;

    t170 = (x681>(x682>(x683<=x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 2054497LLU;
	int32_t x688 = -1;
	volatile int32_t t171 = -63275752;

    t171 = (x685>(x686>(x687<=x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = 3575392541658LLU;
	int8_t x690 = INT8_MAX;
	int64_t x691 = 789007416LL;
	volatile int32_t t172 = -1104;

    t172 = (x689>(x690>(x691<=x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x694 = -1;
	int32_t x696 = INT32_MIN;
	int32_t t173 = -30;

    t173 = (x693>(x694>(x695<=x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x697 = UINT16_MAX;
	uint32_t x698 = 1U;
	static uint8_t x699 = UINT8_MAX;
	uint8_t x700 = 62U;

    t174 = (x697>(x698>(x699<=x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MIN;
	uint64_t x702 = 2426844610768124LLU;
	int32_t x703 = 1909440;
	int64_t x704 = INT64_MAX;
	int32_t t175 = -3762044;

    t175 = (x701>(x702>(x703<=x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = INT64_MAX;
	uint64_t x708 = 61441383LLU;
	volatile int32_t t176 = -13;

    t176 = (x705>(x706>(x707<=x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = -1;
	volatile uint32_t x710 = 37316U;
	static uint32_t x711 = UINT32_MAX;
	int16_t x712 = -1;
	volatile int32_t t177 = 1389110;

    t177 = (x709>(x710>(x711<=x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x713 = 4739;
	int16_t x714 = INT16_MAX;
	static uint64_t x715 = UINT64_MAX;
	static int8_t x716 = INT8_MIN;
	int32_t t178 = 1537;

    t178 = (x713>(x714>(x715<=x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = UINT8_MAX;
	int16_t x719 = 1933;
	static uint8_t x720 = 28U;

    t179 = (x717>(x718>(x719<=x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = UINT16_MAX;
	int64_t x722 = 21198269549963LL;
	static uint8_t x724 = UINT8_MAX;
	static volatile int32_t t180 = 0;

    t180 = (x721>(x722>(x723<=x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x725 = UINT16_MAX;
	int8_t x726 = 0;
	int64_t x727 = -1LL;
	int8_t x728 = INT8_MIN;

    t181 = (x725>(x726>(x727<=x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x729 = 5778LLU;
	int16_t x730 = 47;
	uint64_t x731 = UINT64_MAX;

    t182 = (x729>(x730>(x731<=x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x736 = UINT8_MAX;
	volatile int32_t t183 = -503;

    t183 = (x733>(x734>(x735<=x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = 1;
	int32_t x738 = INT32_MIN;
	static uint16_t x739 = 21869U;
	volatile int32_t t184 = -3800;

    t184 = (x737>(x738>(x739<=x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = 11;
	int16_t x742 = -29;
	int8_t x743 = -1;
	int64_t x744 = INT64_MIN;
	volatile int32_t t185 = 24388750;

    t185 = (x741>(x742>(x743<=x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = UINT8_MAX;
	int64_t x746 = 85505LL;
	int64_t x747 = INT64_MIN;
	int16_t x748 = -1262;
	int32_t t186 = -174248104;

    t186 = (x745>(x746>(x747<=x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x750 = INT32_MAX;
	static int64_t x751 = 6831913883LL;
	volatile int32_t t187 = 321903524;

    t187 = (x749>(x750>(x751<=x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x753 = 30U;
	static int16_t x754 = INT16_MIN;
	int32_t x755 = INT32_MIN;
	static uint8_t x756 = 19U;
	int32_t t188 = -12987102;

    t188 = (x753>(x754>(x755<=x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MIN;
	uint32_t x758 = 29002U;
	int32_t x759 = -186;
	uint16_t x760 = 1717U;
	static int32_t t189 = -3870;

    t189 = (x757>(x758>(x759<=x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x762 = 7;
	volatile int32_t t190 = -906;

    t190 = (x761>(x762>(x763<=x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x765 = -1;
	int8_t x766 = 3;
	volatile uint8_t x767 = UINT8_MAX;
	int64_t x768 = INT64_MIN;
	int32_t t191 = 41;

    t191 = (x765>(x766>(x767<=x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = 768U;
	uint32_t x770 = 20U;
	int16_t x771 = -1;
	int32_t t192 = 45;

    t192 = (x769>(x770>(x771<=x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = UINT8_MAX;
	static int32_t x774 = 23943438;
	int8_t x775 = -20;
	int8_t x776 = 48;
	volatile int32_t t193 = 242705162;

    t193 = (x773>(x774>(x775<=x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x778 = 867LLU;
	uint8_t x780 = 3U;
	int32_t t194 = -926625;

    t194 = (x777>(x778>(x779<=x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MAX;
	int32_t x782 = -1;
	int8_t x783 = INT8_MIN;
	static int16_t x784 = -21;
	volatile int32_t t195 = 675;

    t195 = (x781>(x782>(x783<=x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = 12903U;
	static uint8_t x787 = 9U;
	int64_t x788 = INT64_MIN;
	int32_t t196 = 1892;

    t196 = (x785>(x786>(x787<=x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x790 = 22881144;
	int16_t x791 = -1;
	volatile int32_t t197 = 1;

    t197 = (x789>(x790>(x791<=x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int8_t x793 = -1;
	volatile uint32_t x794 = 1262887U;
	int32_t x795 = 8327589;
	volatile int32_t t198 = 1;

    t198 = (x793>(x794>(x795<=x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x798 = INT8_MAX;
	int16_t x799 = INT16_MIN;
	int32_t x800 = -221;
	int32_t t199 = -2;

    t199 = (x797>(x798>(x799<=x800)));

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


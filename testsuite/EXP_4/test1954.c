
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

uint8_t x4 = UINT8_MAX;
int32_t x12 = -1;
volatile int8_t x17 = 0;
static volatile int32_t t4 = -9792;
uint8_t x21 = 58U;
uint64_t x25 = 105701172113249LLU;
int32_t x28 = INT32_MIN;
int64_t x33 = INT64_MIN;
volatile uint8_t x37 = 0U;
volatile int32_t x42 = -4870026;
static int32_t x44 = INT32_MIN;
static int32_t t10 = 39644;
static int32_t t11 = 91;
int64_t x49 = 16915574191949LL;
uint32_t x51 = 23U;
int16_t x58 = -11056;
uint32_t x59 = 1321U;
int32_t x61 = INT32_MIN;
int16_t x64 = INT16_MIN;
volatile int32_t t15 = 1277;
uint8_t x68 = UINT8_MAX;
volatile uint32_t x70 = 335U;
static int16_t x81 = -1;
volatile int64_t x87 = -85664552185358LL;
static uint8_t x90 = 0U;
uint8_t x94 = 1U;
volatile int16_t x100 = 88;
int16_t x107 = -237;
volatile int32_t x112 = -1280;
int64_t x113 = INT64_MIN;
int8_t x117 = -25;
int32_t x127 = INT32_MAX;
int64_t x153 = -1LL;
static int32_t t38 = 1615203;
static volatile int32_t x158 = INT32_MIN;
uint16_t x161 = 0U;
int8_t x173 = 0;
uint64_t x174 = 260058500755234LLU;
uint64_t x176 = 3LLU;
volatile int32_t x183 = INT32_MIN;
int32_t t45 = -17511;
static volatile int16_t x186 = INT16_MIN;
volatile int32_t t46 = -67;
int32_t x193 = 248575957;
int32_t x196 = -1;
uint16_t x199 = 1279U;
volatile uint32_t x201 = 470U;
volatile int64_t x204 = 6851378539785956LL;
int16_t x206 = INT16_MIN;
int8_t x207 = 2;
volatile int32_t t51 = 912680131;
int16_t x210 = 6921;
int64_t x221 = -1LL;
int8_t x228 = INT8_MAX;
volatile int32_t t57 = 278110258;
static uint16_t x235 = UINT16_MAX;
uint32_t x238 = 673770U;
int8_t x242 = 4;
int32_t x243 = -6251282;
int32_t t60 = 7;
uint32_t x248 = UINT32_MAX;
int32_t x250 = 811083;
uint32_t x256 = 62815U;
int64_t x258 = INT64_MAX;
volatile int64_t x259 = INT64_MIN;
int8_t x263 = INT8_MAX;
int64_t x264 = INT64_MIN;
static int8_t x266 = INT8_MAX;
int16_t x269 = INT16_MAX;
int64_t x276 = INT64_MAX;
int32_t x289 = INT32_MIN;
int64_t x290 = -63120906878LL;
uint8_t x295 = UINT8_MAX;
uint16_t x296 = 212U;
int32_t x299 = 74142513;
int32_t t74 = -11475070;
uint8_t x309 = 101U;
int8_t x315 = -24;
volatile int32_t x317 = INT32_MAX;
uint64_t x324 = 6LLU;
int16_t x328 = -1;
int64_t x337 = -6LL;
int16_t x347 = -1;
int8_t x355 = 14;
uint16_t x365 = 10477U;
int32_t x372 = INT32_MAX;
static volatile int32_t t93 = 1;
int64_t x380 = -48647301511562LL;
static int64_t x382 = INT64_MIN;
uint64_t x385 = UINT64_MAX;
int16_t x386 = -1;
uint16_t x392 = 2U;
int32_t x393 = 470;
int32_t t99 = -17;
int32_t x402 = INT32_MIN;
int16_t x403 = INT16_MIN;
volatile int16_t x408 = 0;
int64_t x410 = 14630244380LL;
uint16_t x411 = 83U;
volatile uint32_t x414 = UINT32_MAX;
int32_t x415 = INT32_MIN;
int32_t t104 = 211;
int32_t t105 = -17;
static int32_t t107 = 6;
int64_t x433 = INT64_MIN;
volatile int64_t x435 = INT64_MIN;
static uint64_t x436 = 3LLU;
static int8_t x440 = 1;
int16_t x442 = INT16_MIN;
int32_t t110 = 94784;
static volatile uint32_t x450 = 13169U;
volatile int64_t x454 = INT64_MIN;
volatile int16_t x456 = INT16_MIN;
int32_t t113 = -26;
int32_t x466 = INT32_MIN;
int64_t x471 = INT64_MIN;
int32_t x476 = INT32_MIN;
int16_t x479 = INT16_MAX;
uint8_t x482 = UINT8_MAX;
static int32_t t122 = -1;
int32_t x496 = INT32_MIN;
int64_t x498 = INT64_MIN;
int8_t x502 = INT8_MIN;
uint16_t x506 = 214U;
int32_t x509 = 1891477;
int8_t x523 = INT8_MIN;
uint8_t x535 = 49U;
static volatile int32_t t133 = -31185;
uint16_t x537 = 12206U;
uint8_t x541 = 1U;
volatile int32_t t135 = 4;
volatile int32_t t136 = 2;
int8_t x549 = INT8_MIN;
volatile int32_t t137 = 1940050;
uint16_t x554 = 1U;
volatile int16_t x560 = INT16_MIN;
volatile int32_t t141 = 1;
int8_t x573 = -1;
uint8_t x575 = UINT8_MAX;
int64_t x576 = INT64_MIN;
int16_t x577 = INT16_MAX;
int64_t x589 = -1LL;
uint64_t x591 = 35956346976LLU;
uint8_t x593 = 1U;
volatile int32_t t150 = 7513638;
int16_t x605 = INT16_MIN;
static uint32_t x607 = 113429703U;
int32_t x609 = -13748;
uint64_t x610 = UINT64_MAX;
int64_t x620 = INT64_MIN;
int64_t x638 = 26370369LL;
static int16_t x639 = -1382;
volatile uint64_t x643 = 223LLU;
static volatile int32_t t160 = -4465592;
volatile int64_t x648 = INT64_MAX;
uint64_t x649 = 853LLU;
static int16_t x651 = INT16_MIN;
uint16_t x657 = 29U;
volatile int8_t x658 = -1;
int64_t x663 = INT64_MIN;
volatile int32_t t165 = -1;
volatile int16_t x667 = -4114;
static uint32_t x668 = 202U;
int16_t x669 = INT16_MIN;
int8_t x672 = -1;
int16_t x677 = 46;
uint8_t x681 = UINT8_MAX;
static int64_t x682 = -1LL;
uint16_t x687 = 29083U;
static int32_t t171 = -224114190;
int64_t x689 = INT64_MAX;
int16_t x690 = INT16_MAX;
static int64_t x692 = -835748171345LL;
int16_t x695 = INT16_MIN;
static int32_t t173 = 2535661;
int32_t x701 = -3837139;
static int32_t t175 = 42492734;
uint32_t x708 = 124769U;
int64_t x709 = -48LL;
int8_t x712 = -3;
volatile int32_t t177 = -487;
volatile uint16_t x717 = 48U;
volatile int32_t t179 = 246708;
uint64_t x724 = UINT64_MAX;
int16_t x738 = INT16_MIN;
int16_t x740 = INT16_MIN;
int32_t t184 = 11101;
static int32_t t186 = 0;
static int64_t x749 = INT64_MIN;
volatile int16_t x754 = -1;
volatile uint64_t x757 = 63LLU;
static volatile int32_t x759 = INT32_MIN;
static int32_t x764 = INT32_MIN;
volatile int32_t t190 = 36;
static int32_t t191 = -363;
volatile int32_t t192 = -52683047;
volatile int32_t x774 = -1;
volatile int32_t x779 = -1;
uint16_t x782 = 26208U;
uint8_t x783 = 2U;
int64_t x790 = -1609178665301779LL;
int64_t x792 = -1688313126972192952LL;
int16_t x793 = INT16_MIN;
static int16_t x796 = INT16_MIN;
int32_t t198 = 10311;


void f0(void) {
    	volatile int64_t x1 = INT64_MAX;
	int16_t x2 = INT16_MIN;
	int16_t x3 = 13886;
	int32_t t0 = -475;

    t0 = (x1==(x2^(x3<=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = INT8_MIN;
	int32_t x6 = -1728;
	static int8_t x7 = 0;
	uint64_t x8 = UINT64_MAX;
	int32_t t1 = 1685;

    t1 = (x5==(x6^(x7<=x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = -1818042098LL;
	uint64_t x10 = 9067223337991032257LLU;
	int64_t x11 = 46388120187LL;
	int32_t t2 = 63342;

    t2 = (x9==(x10^(x11<=x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = 30514041;
	volatile uint16_t x14 = UINT16_MAX;
	int16_t x15 = INT16_MIN;
	static int64_t x16 = INT64_MIN;
	volatile int32_t t3 = 44;

    t3 = (x13==(x14^(x15<=x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x18 = -57;
	volatile int16_t x19 = 87;
	static volatile int8_t x20 = INT8_MAX;

    t4 = (x17==(x18^(x19<=x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = INT8_MIN;
	uint64_t x23 = 744595894163143LLU;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -5;

    t5 = (x21==(x22^(x23<=x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x26 = 2U;
	static uint64_t x27 = 558142257478098364LLU;
	int32_t t6 = -110;

    t6 = (x25==(x26^(x27<=x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MAX;
	uint64_t x30 = UINT64_MAX;
	static uint32_t x31 = UINT32_MAX;
	int16_t x32 = -1;
	int32_t t7 = 828366;

    t7 = (x29==(x30^(x31<=x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = INT16_MIN;
	uint32_t x35 = 4U;
	int16_t x36 = INT16_MAX;
	static volatile int32_t t8 = -118016993;

    t8 = (x33==(x34^(x35<=x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = INT32_MAX;
	uint16_t x39 = 1109U;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -14736669;

    t9 = (x37==(x38^(x39<=x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 6U;
	int64_t x43 = 310LL;

    t10 = (x41==(x42^(x43<=x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = 1;
	int64_t x46 = -1LL;
	static uint8_t x47 = UINT8_MAX;
	volatile uint8_t x48 = UINT8_MAX;

    t11 = (x45==(x46^(x47<=x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = -166601075;
	uint32_t x52 = 6849U;
	int32_t t12 = -6;

    t12 = (x49==(x50^(x51<=x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	int8_t x54 = 2;
	int8_t x55 = -1;
	static volatile int32_t x56 = 32697;
	int32_t t13 = -29150052;

    t13 = (x53==(x54^(x55<=x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	volatile uint8_t x60 = 7U;
	int32_t t14 = -1;

    t14 = (x57==(x58^(x59<=x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x62 = 740;
	uint8_t x63 = 0U;

    t15 = (x61==(x62^(x63<=x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 2006480LLU;
	volatile int16_t x66 = INT16_MIN;
	static volatile uint16_t x67 = 2U;
	int32_t t16 = 817932;

    t16 = (x65==(x66^(x67<=x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = 448604518LL;
	uint8_t x71 = 1U;
	volatile int8_t x72 = -1;
	static volatile int32_t t17 = 1;

    t17 = (x69==(x70^(x71<=x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x73 = INT8_MIN;
	static uint8_t x74 = 61U;
	int64_t x75 = -1LL;
	int32_t x76 = INT32_MIN;
	int32_t t18 = -614172473;

    t18 = (x73==(x74^(x75<=x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	uint32_t x78 = UINT32_MAX;
	uint16_t x79 = UINT16_MAX;
	volatile int8_t x80 = INT8_MAX;
	static int32_t t19 = 113;

    t19 = (x77==(x78^(x79<=x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x82 = INT64_MIN;
	volatile uint64_t x83 = 7933099LLU;
	uint32_t x84 = UINT32_MAX;
	int32_t t20 = 189;

    t20 = (x81==(x82^(x83<=x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MIN;
	uint8_t x86 = 110U;
	int64_t x88 = -89828LL;
	volatile int32_t t21 = 348;

    t21 = (x85==(x86^(x87<=x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = 55848210;
	uint8_t x91 = UINT8_MAX;
	static int8_t x92 = INT8_MIN;
	int32_t t22 = -1541551;

    t22 = (x89==(x90^(x91<=x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	static int16_t x95 = 12748;
	uint32_t x96 = 473U;
	int32_t t23 = 8478;

    t23 = (x93==(x94^(x95<=x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 85U;
	uint64_t x98 = 1044194911275582LLU;
	int16_t x99 = 9541;
	volatile int32_t t24 = 2718;

    t24 = (x97==(x98^(x99<=x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = UINT32_MAX;
	uint32_t x102 = 235U;
	int64_t x103 = INT64_MIN;
	volatile int16_t x104 = INT16_MIN;
	volatile int32_t t25 = -1;

    t25 = (x101==(x102^(x103<=x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = 12;
	int64_t x106 = 75037423087LL;
	uint64_t x108 = UINT64_MAX;
	int32_t t26 = -18;

    t26 = (x105==(x106^(x107<=x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = 1;
	static int16_t x110 = -1;
	int64_t x111 = -1LL;
	int32_t t27 = 1;

    t27 = (x109==(x110^(x111<=x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x114 = INT8_MIN;
	uint8_t x115 = 7U;
	volatile int64_t x116 = INT64_MIN;
	static volatile int32_t t28 = -409482564;

    t28 = (x113==(x114^(x115<=x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x118 = 1196LLU;
	static volatile int64_t x119 = INT64_MIN;
	int8_t x120 = -19;
	static int32_t t29 = -168;

    t29 = (x117==(x118^(x119<=x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x121 = -1;
	int8_t x122 = -1;
	int64_t x123 = INT64_MIN;
	uint64_t x124 = 536684761113130241LLU;
	int32_t t30 = 7786599;

    t30 = (x121==(x122^(x123<=x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = UINT16_MAX;
	int16_t x126 = INT16_MAX;
	static int64_t x128 = -1LL;
	static volatile int32_t t31 = 5253887;

    t31 = (x125==(x126^(x127<=x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = -1;
	static uint32_t x130 = UINT32_MAX;
	int16_t x131 = 89;
	int64_t x132 = INT64_MAX;
	volatile int32_t t32 = -890131966;

    t32 = (x129==(x130^(x131<=x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	int32_t x134 = 22;
	int8_t x135 = INT8_MIN;
	int8_t x136 = INT8_MIN;
	volatile int32_t t33 = -112665;

    t33 = (x133==(x134^(x135<=x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x137 = INT8_MIN;
	int32_t x138 = INT32_MAX;
	uint32_t x139 = 32646989U;
	uint32_t x140 = 4U;
	int32_t t34 = 7795328;

    t34 = (x137==(x138^(x139<=x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x141 = 1;
	int64_t x142 = INT64_MIN;
	uint16_t x143 = 2886U;
	static int8_t x144 = INT8_MAX;
	volatile int32_t t35 = -25674;

    t35 = (x141==(x142^(x143<=x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x145 = INT16_MAX;
	int8_t x146 = INT8_MAX;
	int32_t x147 = -1;
	static uint32_t x148 = UINT32_MAX;
	int32_t t36 = 1;

    t36 = (x145==(x146^(x147<=x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = 3814;
	int8_t x150 = 11;
	int8_t x151 = -42;
	static int16_t x152 = INT16_MIN;
	volatile int32_t t37 = 6;

    t37 = (x149==(x150^(x151<=x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x154 = UINT64_MAX;
	int32_t x155 = INT32_MAX;
	int32_t x156 = -1;

    t38 = (x153==(x154^(x155<=x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint8_t x157 = 0U;
	uint16_t x159 = 43U;
	uint32_t x160 = 853U;
	int32_t t39 = 0;

    t39 = (x157==(x158^(x159<=x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x162 = INT16_MAX;
	volatile uint32_t x163 = 46792U;
	volatile int8_t x164 = 30;
	int32_t t40 = 155985;

    t40 = (x161==(x162^(x163<=x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int64_t x165 = INT64_MAX;
	int16_t x166 = INT16_MIN;
	int64_t x167 = INT64_MIN;
	static int32_t x168 = INT32_MIN;
	static volatile int32_t t41 = -762313432;

    t41 = (x165==(x166^(x167<=x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = -1;
	int8_t x170 = 1;
	volatile uint64_t x171 = 47382252686LLU;
	int16_t x172 = INT16_MIN;
	volatile int32_t t42 = 67803;

    t42 = (x169==(x170^(x171<=x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x175 = UINT64_MAX;
	int32_t t43 = -38;

    t43 = (x173==(x174^(x175<=x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x177 = 15U;
	uint16_t x178 = 4614U;
	volatile uint32_t x179 = 2103416617U;
	int16_t x180 = 227;
	volatile int32_t t44 = -280977;

    t44 = (x177==(x178^(x179<=x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint16_t x181 = 3057U;
	int32_t x182 = -1;
	int8_t x184 = INT8_MIN;

    t45 = (x181==(x182^(x183<=x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = INT32_MIN;
	int32_t x187 = -1;
	int8_t x188 = INT8_MIN;

    t46 = (x185==(x186^(x187<=x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	int64_t x190 = INT64_MAX;
	int64_t x191 = INT64_MIN;
	uint32_t x192 = UINT32_MAX;
	int32_t t47 = 25463467;

    t47 = (x189==(x190^(x191<=x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x194 = 6;
	volatile int32_t x195 = INT32_MAX;
	volatile int32_t t48 = 1;

    t48 = (x193==(x194^(x195<=x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MAX;
	uint8_t x198 = 28U;
	uint32_t x200 = 1U;
	int32_t t49 = 934;

    t49 = (x197==(x198^(x199<=x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x202 = INT8_MIN;
	volatile int64_t x203 = -12767293356159610LL;
	volatile int32_t t50 = 3;

    t50 = (x201==(x202^(x203<=x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	int8_t x208 = INT8_MIN;

    t51 = (x205==(x206^(x207<=x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = -1;
	volatile uint64_t x211 = 2460055LLU;
	static int8_t x212 = INT8_MIN;
	volatile int32_t t52 = -106916325;

    t52 = (x209==(x210^(x211<=x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	int8_t x214 = 0;
	volatile int64_t x215 = -1LL;
	int64_t x216 = -201762944110LL;
	volatile int32_t t53 = -1;

    t53 = (x213==(x214^(x215<=x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x217 = 21U;
	int16_t x218 = INT16_MIN;
	static volatile int16_t x219 = INT16_MAX;
	static volatile int32_t x220 = -317670617;
	int32_t t54 = -45;

    t54 = (x217==(x218^(x219<=x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x222 = 0U;
	int16_t x223 = -1;
	volatile int8_t x224 = -1;
	static int32_t t55 = -704;

    t55 = (x221==(x222^(x223<=x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 1U;
	uint8_t x226 = 2U;
	static int16_t x227 = INT16_MAX;
	volatile int32_t t56 = 3;

    t56 = (x225==(x226^(x227<=x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = UINT16_MAX;
	static int32_t x230 = INT32_MIN;
	static uint64_t x231 = 120062465178148150LLU;
	static int32_t x232 = INT32_MIN;

    t57 = (x229==(x230^(x231<=x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = 1538740936102757035LLU;
	int16_t x234 = INT16_MIN;
	uint64_t x236 = 20LLU;
	volatile int32_t t58 = 95877;

    t58 = (x233==(x234^(x235<=x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	int32_t x239 = -1;
	static int64_t x240 = -1LL;
	volatile int32_t t59 = 129507;

    t59 = (x237==(x238^(x239<=x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MIN;
	uint8_t x244 = UINT8_MAX;

    t60 = (x241==(x242^(x243<=x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -47LL;
	int64_t x246 = -1LL;
	static uint64_t x247 = 6682439369255872492LLU;
	int32_t t61 = -9;

    t61 = (x245==(x246^(x247<=x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	int8_t x251 = INT8_MIN;
	int32_t x252 = 10713482;
	volatile int32_t t62 = -618572659;

    t62 = (x249==(x250^(x251<=x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = 1;
	int64_t x254 = 0LL;
	int32_t x255 = INT32_MAX;
	volatile int32_t t63 = -277777;

    t63 = (x253==(x254^(x255<=x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = -12;
	int64_t x260 = INT64_MAX;
	volatile int32_t t64 = 0;

    t64 = (x257==(x258^(x259<=x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = 2728LLU;
	int8_t x262 = INT8_MIN;
	volatile int32_t t65 = 255820022;

    t65 = (x261==(x262^(x263<=x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x265 = -1;
	static int32_t x267 = INT32_MIN;
	static int32_t x268 = INT32_MIN;
	static volatile int32_t t66 = 12424;

    t66 = (x265==(x266^(x267<=x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x270 = INT64_MIN;
	volatile int32_t x271 = 413808392;
	int8_t x272 = INT8_MAX;
	static volatile int32_t t67 = -45;

    t67 = (x269==(x270^(x271<=x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MIN;
	volatile uint16_t x274 = 4842U;
	uint32_t x275 = UINT32_MAX;
	volatile int32_t t68 = 5936;

    t68 = (x273==(x274^(x275<=x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = -1;
	int32_t x278 = INT32_MIN;
	static uint64_t x279 = UINT64_MAX;
	volatile int64_t x280 = -137836263584481154LL;
	int32_t t69 = -552389343;

    t69 = (x277==(x278^(x279<=x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = 191U;
	uint16_t x282 = UINT16_MAX;
	volatile int8_t x283 = INT8_MAX;
	static volatile int32_t x284 = INT32_MIN;
	int32_t t70 = -11047473;

    t70 = (x281==(x282^(x283<=x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = -23;
	volatile int8_t x286 = INT8_MIN;
	uint8_t x287 = 1U;
	uint8_t x288 = UINT8_MAX;
	static int32_t t71 = -4190076;

    t71 = (x285==(x286^(x287<=x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x291 = -1LL;
	int32_t x292 = INT32_MIN;
	int32_t t72 = -8738837;

    t72 = (x289==(x290^(x291<=x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = -1;
	int32_t x294 = INT32_MIN;
	int32_t t73 = 1;

    t73 = (x293==(x294^(x295<=x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x297 = -63;
	uint64_t x298 = UINT64_MAX;
	int16_t x300 = 1;

    t74 = (x297==(x298^(x299<=x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = -3;
	uint8_t x302 = 118U;
	volatile uint8_t x303 = 102U;
	uint8_t x304 = UINT8_MAX;
	int32_t t75 = 7;

    t75 = (x301==(x302^(x303<=x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x305 = 4368;
	volatile int64_t x306 = INT64_MIN;
	static uint64_t x307 = 240742LLU;
	int16_t x308 = INT16_MIN;
	volatile int32_t t76 = -23135420;

    t76 = (x305==(x306^(x307<=x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x310 = -3494;
	uint8_t x311 = 2U;
	static int8_t x312 = INT8_MIN;
	volatile int32_t t77 = 20;

    t77 = (x309==(x310^(x311<=x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = -1;
	volatile uint64_t x314 = 28295358374LLU;
	uint32_t x316 = 141U;
	int32_t t78 = -435099;

    t78 = (x313==(x314^(x315<=x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x318 = 13U;
	uint16_t x319 = 3U;
	int16_t x320 = INT16_MIN;
	volatile int32_t t79 = 3;

    t79 = (x317==(x318^(x319<=x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x321 = UINT8_MAX;
	int32_t x322 = INT32_MIN;
	volatile int64_t x323 = INT64_MIN;
	static int32_t t80 = 497233515;

    t80 = (x321==(x322^(x323<=x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = 437U;
	int32_t x326 = -966196277;
	volatile uint16_t x327 = 3U;
	static volatile int32_t t81 = 53926721;

    t81 = (x325==(x326^(x327<=x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x329 = 0;
	static int32_t x330 = -1;
	static int64_t x331 = INT64_MAX;
	uint32_t x332 = 1188886U;
	int32_t t82 = 31749;

    t82 = (x329==(x330^(x331<=x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = 2807815942095LLU;
	uint32_t x334 = 22373U;
	static int16_t x335 = 1;
	int64_t x336 = INT64_MIN;
	static int32_t t83 = -14879;

    t83 = (x333==(x334^(x335<=x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x338 = INT16_MIN;
	int64_t x339 = INT64_MAX;
	uint16_t x340 = UINT16_MAX;
	static int32_t t84 = 368741;

    t84 = (x337==(x338^(x339<=x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x341 = INT16_MIN;
	volatile int8_t x342 = INT8_MIN;
	int32_t x343 = INT32_MIN;
	int16_t x344 = -64;
	volatile int32_t t85 = 473;

    t85 = (x341==(x342^(x343<=x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x345 = INT32_MIN;
	int8_t x346 = INT8_MAX;
	int8_t x348 = INT8_MIN;
	volatile int32_t t86 = -309352278;

    t86 = (x345==(x346^(x347<=x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = 9U;
	int16_t x350 = -1;
	volatile int16_t x351 = INT16_MIN;
	uint64_t x352 = 4312624LLU;
	static volatile int32_t t87 = 763;

    t87 = (x349==(x350^(x351<=x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = -8;
	int32_t x354 = -96;
	volatile int32_t x356 = 938454340;
	static int32_t t88 = -2086978;

    t88 = (x353==(x354^(x355<=x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x357 = UINT32_MAX;
	static volatile int64_t x358 = INT64_MIN;
	static int32_t x359 = INT32_MIN;
	volatile int64_t x360 = INT64_MAX;
	int32_t t89 = 96641;

    t89 = (x357==(x358^(x359<=x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 224U;
	int64_t x362 = -9063LL;
	int16_t x363 = -1;
	int16_t x364 = INT16_MIN;
	int32_t t90 = -6156;

    t90 = (x361==(x362^(x363<=x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x366 = -58;
	int8_t x367 = INT8_MIN;
	static int32_t x368 = INT32_MIN;
	volatile int32_t t91 = -337095;

    t91 = (x365==(x366^(x367<=x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x369 = INT32_MAX;
	int64_t x370 = -1LL;
	uint16_t x371 = 11U;
	volatile int32_t t92 = -1;

    t92 = (x369==(x370^(x371<=x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x373 = 4824823457830348LL;
	int16_t x374 = INT16_MIN;
	int32_t x375 = -1846;
	static int64_t x376 = -1LL;

    t93 = (x373==(x374^(x375<=x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = 145587399502791LL;
	int32_t x378 = INT32_MIN;
	int64_t x379 = INT64_MAX;
	volatile int32_t t94 = 987;

    t94 = (x377==(x378^(x379<=x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = 190593283375881186LL;
	int8_t x383 = INT8_MIN;
	volatile uint32_t x384 = 5U;
	int32_t t95 = 1;

    t95 = (x381==(x382^(x383<=x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x387 = -117LL;
	uint64_t x388 = 30786963789882LLU;
	volatile int32_t t96 = -112414325;

    t96 = (x385==(x386^(x387<=x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 0LLU;
	volatile uint64_t x390 = 552202128279736026LLU;
	volatile uint64_t x391 = 5LLU;
	static volatile int32_t t97 = -62919048;

    t97 = (x389==(x390^(x391<=x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x394 = -32;
	static int32_t x395 = INT32_MIN;
	int8_t x396 = INT8_MIN;
	volatile int32_t t98 = 65;

    t98 = (x393==(x394^(x395<=x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MAX;
	uint16_t x398 = 1535U;
	int16_t x399 = 342;
	uint64_t x400 = UINT64_MAX;

    t99 = (x397==(x398^(x399<=x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;
	uint8_t x404 = 54U;
	volatile int32_t t100 = -1041372428;

    t100 = (x401==(x402^(x403<=x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x405 = -1LL;
	int16_t x406 = -14477;
	uint8_t x407 = 0U;
	static volatile int32_t t101 = -92281909;

    t101 = (x405==(x406^(x407<=x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MAX;
	int32_t x412 = -457941;
	int32_t t102 = 298718524;

    t102 = (x409==(x410^(x411<=x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x413 = UINT32_MAX;
	static int64_t x416 = INT64_MIN;
	int32_t t103 = -1;

    t103 = (x413==(x414^(x415<=x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x417 = INT16_MAX;
	uint8_t x418 = 57U;
	uint16_t x419 = 29U;
	int32_t x420 = -1;

    t104 = (x417==(x418^(x419<=x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int32_t x421 = INT32_MIN;
	int64_t x422 = -415279627917596584LL;
	volatile int16_t x423 = INT16_MAX;
	volatile int16_t x424 = INT16_MAX;

    t105 = (x421==(x422^(x423<=x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = -1;
	int16_t x426 = -13414;
	volatile int16_t x427 = 3501;
	static uint8_t x428 = 34U;
	static int32_t t106 = 913304222;

    t106 = (x425==(x426^(x427<=x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x429 = 425LLU;
	int32_t x430 = 2348;
	int64_t x431 = INT64_MAX;
	volatile uint16_t x432 = UINT16_MAX;

    t107 = (x429==(x430^(x431<=x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x434 = UINT64_MAX;
	volatile int32_t t108 = 4072034;

    t108 = (x433==(x434^(x435<=x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x437 = UINT16_MAX;
	int64_t x438 = -1LL;
	uint64_t x439 = 20LLU;
	static int32_t t109 = -78;

    t109 = (x437==(x438^(x439<=x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x441 = -1000025265707641LL;
	uint32_t x443 = 1881U;
	uint32_t x444 = 31835U;

    t110 = (x441==(x442^(x443<=x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = 968;
	static int16_t x446 = 1584;
	int8_t x447 = INT8_MIN;
	volatile int16_t x448 = INT16_MIN;
	volatile int32_t t111 = 10;

    t111 = (x445==(x446^(x447<=x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x449 = 112493346;
	volatile uint16_t x451 = UINT16_MAX;
	int64_t x452 = 456755134LL;
	volatile int32_t t112 = -421;

    t112 = (x449==(x450^(x451<=x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x453 = INT32_MIN;
	int64_t x455 = INT64_MIN;

    t113 = (x453==(x454^(x455<=x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 302643423U;
	int8_t x458 = -1;
	uint16_t x459 = 4U;
	uint8_t x460 = UINT8_MAX;
	int32_t t114 = 344;

    t114 = (x457==(x458^(x459<=x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x461 = 6628175U;
	static int64_t x462 = -1LL;
	static int32_t x463 = -4867;
	volatile int64_t x464 = 1402152326881655LL;
	static volatile int32_t t115 = 1;

    t115 = (x461==(x462^(x463<=x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = -1;
	int8_t x467 = -1;
	int8_t x468 = INT8_MIN;
	static int32_t t116 = -109;

    t116 = (x465==(x466^(x467<=x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x469 = 428755;
	volatile int16_t x470 = INT16_MAX;
	volatile uint8_t x472 = 27U;
	volatile int32_t t117 = 37;

    t117 = (x469==(x470^(x471<=x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x473 = INT64_MIN;
	int8_t x474 = -48;
	static volatile uint16_t x475 = UINT16_MAX;
	volatile int32_t t118 = -33627198;

    t118 = (x473==(x474^(x475<=x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -3805991235654477LL;
	uint8_t x478 = 14U;
	static int16_t x480 = 1;
	volatile int32_t t119 = -75932;

    t119 = (x477==(x478^(x479<=x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MIN;
	uint16_t x483 = 5U;
	int16_t x484 = INT16_MIN;
	int32_t t120 = -34;

    t120 = (x481==(x482^(x483<=x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -1;
	static uint32_t x486 = 2965453U;
	volatile uint16_t x487 = 3605U;
	int64_t x488 = 3574358383968446LL;
	int32_t t121 = -1109087;

    t121 = (x485==(x486^(x487<=x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	int16_t x490 = INT16_MIN;
	int64_t x491 = -1LL;
	int16_t x492 = 729;

    t122 = (x489==(x490^(x491<=x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x493 = UINT8_MAX;
	volatile uint64_t x494 = 4508LLU;
	int8_t x495 = INT8_MIN;
	static int32_t t123 = 5;

    t123 = (x493==(x494^(x495<=x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MIN;
	int8_t x499 = -14;
	int16_t x500 = -3939;
	int32_t t124 = 41;

    t124 = (x497==(x498^(x499<=x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = 28;
	static int32_t x503 = INT32_MIN;
	int8_t x504 = 0;
	volatile int32_t t125 = -659074;

    t125 = (x501==(x502^(x503<=x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = 8381185LLU;
	uint16_t x507 = 0U;
	int32_t x508 = INT32_MIN;
	volatile int32_t t126 = 14605;

    t126 = (x505==(x506^(x507<=x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x510 = UINT64_MAX;
	uint32_t x511 = 4037961U;
	int32_t x512 = -1;
	volatile int32_t t127 = 61413;

    t127 = (x509==(x510^(x511<=x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x513 = 1;
	uint16_t x514 = UINT16_MAX;
	int64_t x515 = -4672174LL;
	uint8_t x516 = 13U;
	static volatile int32_t t128 = 537911;

    t128 = (x513==(x514^(x515<=x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -130504LL;
	static uint16_t x518 = 53U;
	volatile int32_t x519 = -1;
	uint8_t x520 = UINT8_MAX;
	static int32_t t129 = 24868;

    t129 = (x517==(x518^(x519<=x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MIN;
	volatile int64_t x522 = INT64_MAX;
	uint32_t x524 = UINT32_MAX;
	int32_t t130 = -1;

    t130 = (x521==(x522^(x523<=x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x525 = 917U;
	int8_t x526 = 9;
	int8_t x527 = INT8_MIN;
	int64_t x528 = 131946394955LL;
	int32_t t131 = 1060;

    t131 = (x525==(x526^(x527<=x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x529 = 143U;
	int64_t x530 = -1LL;
	int32_t x531 = 7;
	int64_t x532 = INT64_MIN;
	volatile int32_t t132 = -2360721;

    t132 = (x529==(x530^(x531<=x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	static uint64_t x534 = 2376LLU;
	int32_t x536 = INT32_MAX;

    t133 = (x533==(x534^(x535<=x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint32_t x538 = 20243U;
	static int8_t x539 = INT8_MIN;
	uint16_t x540 = UINT16_MAX;
	volatile int32_t t134 = -399229122;

    t134 = (x537==(x538^(x539<=x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x542 = 4;
	uint64_t x543 = 226628317613915LLU;
	static int8_t x544 = INT8_MIN;

    t135 = (x541==(x542^(x543<=x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x545 = 19LLU;
	static volatile int32_t x546 = INT32_MIN;
	volatile int8_t x547 = INT8_MIN;
	static uint8_t x548 = UINT8_MAX;

    t136 = (x545==(x546^(x547<=x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x550 = INT32_MIN;
	int32_t x551 = INT32_MIN;
	int8_t x552 = -11;

    t137 = (x549==(x550^(x551<=x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x553 = INT64_MIN;
	int8_t x555 = INT8_MIN;
	static int32_t x556 = INT32_MAX;
	volatile int32_t t138 = -23128;

    t138 = (x553==(x554^(x555<=x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MIN;
	int32_t x558 = INT32_MIN;
	int32_t x559 = 2666;
	volatile int32_t t139 = 5;

    t139 = (x557==(x558^(x559<=x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x561 = 8U;
	static int32_t x562 = INT32_MIN;
	int16_t x563 = INT16_MIN;
	uint32_t x564 = UINT32_MAX;
	int32_t t140 = -248;

    t140 = (x561==(x562^(x563<=x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	static volatile int8_t x566 = -27;
	int8_t x567 = -1;
	uint32_t x568 = UINT32_MAX;

    t141 = (x565==(x566^(x567<=x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = UINT64_MAX;
	uint16_t x570 = UINT16_MAX;
	static int32_t x571 = INT32_MAX;
	static volatile uint8_t x572 = 63U;
	volatile int32_t t142 = 55;

    t142 = (x569==(x570^(x571<=x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x574 = INT8_MIN;
	volatile int32_t t143 = -82967;

    t143 = (x573==(x574^(x575<=x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x578 = 44;
	int16_t x579 = -630;
	int8_t x580 = -1;
	static int32_t t144 = -3217154;

    t144 = (x577==(x578^(x579<=x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = 17327905666326LLU;
	int8_t x582 = INT8_MIN;
	volatile uint8_t x583 = UINT8_MAX;
	static int8_t x584 = -6;
	static int32_t t145 = 9136;

    t145 = (x581==(x582^(x583<=x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x585 = UINT64_MAX;
	int8_t x586 = -2;
	volatile int64_t x587 = -1LL;
	int32_t x588 = -1;
	volatile int32_t t146 = -100;

    t146 = (x585==(x586^(x587<=x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x590 = -1;
	static volatile int32_t x592 = -367479;
	static volatile int32_t t147 = -1454;

    t147 = (x589==(x590^(x591<=x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x594 = INT8_MIN;
	static int8_t x595 = INT8_MIN;
	int8_t x596 = -1;
	int32_t t148 = 28565;

    t148 = (x593==(x594^(x595<=x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x597 = 10986;
	int16_t x598 = INT16_MIN;
	static int64_t x599 = -1632LL;
	static int64_t x600 = INT64_MIN;
	static int32_t t149 = -1088;

    t149 = (x597==(x598^(x599<=x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = 6088U;
	static int8_t x602 = INT8_MAX;
	uint8_t x603 = 1U;
	static int8_t x604 = INT8_MIN;

    t150 = (x601==(x602^(x603<=x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x606 = UINT16_MAX;
	int16_t x608 = INT16_MIN;
	volatile int32_t t151 = 5;

    t151 = (x605==(x606^(x607<=x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int64_t x611 = INT64_MIN;
	uint32_t x612 = UINT32_MAX;
	static int32_t t152 = 63;

    t152 = (x609==(x610^(x611<=x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = -1;
	int8_t x614 = 15;
	int8_t x615 = INT8_MIN;
	int16_t x616 = INT16_MIN;
	volatile int32_t t153 = -1611455;

    t153 = (x613==(x614^(x615<=x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = -1046586877;
	static uint16_t x618 = 2013U;
	uint8_t x619 = UINT8_MAX;
	int32_t t154 = 29660505;

    t154 = (x617==(x618^(x619<=x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MIN;
	int32_t x622 = INT32_MAX;
	static int8_t x623 = 0;
	uint64_t x624 = 1735083389851395840LLU;
	volatile int32_t t155 = -313;

    t155 = (x621==(x622^(x623<=x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = 300929LL;
	uint16_t x626 = 1648U;
	uint16_t x627 = 4213U;
	int8_t x628 = -1;
	int32_t t156 = 889512;

    t156 = (x625==(x626^(x627<=x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = UINT32_MAX;
	volatile uint64_t x630 = 2053505218955723497LLU;
	volatile int32_t x631 = INT32_MIN;
	int16_t x632 = -1;
	int32_t t157 = 192239;

    t157 = (x629==(x630^(x631<=x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MIN;
	static volatile uint16_t x634 = 470U;
	uint8_t x635 = 28U;
	uint32_t x636 = 1976U;
	static int32_t t158 = 60747;

    t158 = (x633==(x634^(x635<=x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = UINT32_MAX;
	volatile int16_t x640 = INT16_MAX;
	volatile int32_t t159 = -240995;

    t159 = (x637==(x638^(x639<=x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MAX;
	int32_t x642 = INT32_MIN;
	int32_t x644 = -1;

    t160 = (x641==(x642^(x643<=x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = UINT32_MAX;
	int64_t x646 = INT64_MIN;
	uint64_t x647 = 26659667077LLU;
	int32_t t161 = 1;

    t161 = (x645==(x646^(x647<=x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x650 = 0U;
	uint64_t x652 = UINT64_MAX;
	volatile int32_t t162 = -8;

    t162 = (x649==(x650^(x651<=x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = 19280642158LL;
	int32_t x654 = -475;
	static volatile int32_t x655 = INT32_MIN;
	uint16_t x656 = 3840U;
	volatile int32_t t163 = -7449;

    t163 = (x653==(x654^(x655<=x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x659 = -1;
	static uint8_t x660 = UINT8_MAX;
	static int32_t t164 = -532;

    t164 = (x657==(x658^(x659<=x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = UINT32_MAX;
	uint16_t x662 = 22U;
	volatile int8_t x664 = -1;

    t165 = (x661==(x662^(x663<=x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x665 = 2;
	static int16_t x666 = INT16_MIN;
	int32_t t166 = -1;

    t166 = (x665==(x666^(x667<=x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x670 = INT8_MAX;
	volatile int32_t x671 = -363057;
	static int32_t t167 = 264;

    t167 = (x669==(x670^(x671<=x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x673 = INT8_MIN;
	uint64_t x674 = 4419901336024095LLU;
	int8_t x675 = INT8_MIN;
	volatile int16_t x676 = 1;
	int32_t t168 = -37708;

    t168 = (x673==(x674^(x675<=x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x678 = INT32_MIN;
	int64_t x679 = 21413463LL;
	int16_t x680 = INT16_MIN;
	int32_t t169 = 8167414;

    t169 = (x677==(x678^(x679<=x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x683 = INT16_MIN;
	uint8_t x684 = 10U;
	int32_t t170 = 4062;

    t170 = (x681==(x682^(x683<=x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = INT64_MAX;
	int8_t x686 = -3;
	uint32_t x688 = 53U;

    t171 = (x685==(x686^(x687<=x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x691 = 1028909364U;
	volatile int32_t t172 = -41044;

    t172 = (x689==(x690^(x691<=x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x693 = 75U;
	int16_t x694 = 1;
	uint64_t x696 = 1327LLU;

    t173 = (x693==(x694^(x695<=x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MIN;
	int64_t x698 = 64613632667LL;
	uint8_t x699 = 23U;
	static int32_t x700 = -52101804;
	int32_t t174 = -15940;

    t174 = (x697==(x698^(x699<=x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x702 = -1;
	static uint8_t x703 = UINT8_MAX;
	volatile int8_t x704 = INT8_MIN;

    t175 = (x701==(x702^(x703<=x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	int8_t x706 = INT8_MIN;
	uint32_t x707 = UINT32_MAX;
	static volatile int32_t t176 = 269;

    t176 = (x705==(x706^(x707<=x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x710 = UINT16_MAX;
	static volatile int16_t x711 = INT16_MIN;

    t177 = (x709==(x710^(x711<=x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MIN;
	int8_t x714 = 45;
	uint8_t x715 = 11U;
	uint16_t x716 = UINT16_MAX;
	int32_t t178 = 276122615;

    t178 = (x713==(x714^(x715<=x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x718 = 7;
	volatile uint64_t x719 = 118294329LLU;
	int32_t x720 = INT32_MIN;

    t179 = (x717==(x718^(x719<=x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x721 = 6U;
	volatile uint32_t x722 = 94U;
	int8_t x723 = -1;
	int32_t t180 = 0;

    t180 = (x721==(x722^(x723<=x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x725 = 1865U;
	int32_t x726 = -1;
	int16_t x727 = INT16_MIN;
	int16_t x728 = INT16_MIN;
	int32_t t181 = -1269;

    t181 = (x725==(x726^(x727<=x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -1;
	uint64_t x730 = 92080396395270467LLU;
	int32_t x731 = -1;
	int32_t x732 = INT32_MIN;
	volatile int32_t t182 = 8;

    t182 = (x729==(x730^(x731<=x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int32_t x733 = INT32_MIN;
	int64_t x734 = -108LL;
	int64_t x735 = INT64_MIN;
	int32_t x736 = INT32_MAX;
	volatile int32_t t183 = 1934;

    t183 = (x733==(x734^(x735<=x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = INT32_MAX;
	int32_t x739 = -66;

    t184 = (x737==(x738^(x739<=x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -5801;
	int8_t x742 = 0;
	int16_t x743 = INT16_MIN;
	int8_t x744 = INT8_MIN;
	int32_t t185 = -3;

    t185 = (x741==(x742^(x743<=x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x745 = 23016264350175827LLU;
	uint8_t x746 = UINT8_MAX;
	volatile int16_t x747 = -1;
	static int32_t x748 = -1;

    t186 = (x745==(x746^(x747<=x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x750 = INT32_MAX;
	int32_t x751 = INT32_MAX;
	int8_t x752 = INT8_MIN;
	int32_t t187 = 438217;

    t187 = (x749==(x750^(x751<=x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MIN;
	uint32_t x755 = 1548308665U;
	int32_t x756 = INT32_MIN;
	volatile int32_t t188 = -253562;

    t188 = (x753==(x754^(x755<=x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x758 = -1;
	uint8_t x760 = UINT8_MAX;
	int32_t t189 = 26;

    t189 = (x757==(x758^(x759<=x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -22;
	int64_t x762 = -1LL;
	int64_t x763 = 38473247LL;

    t190 = (x761==(x762^(x763<=x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x765 = INT16_MIN;
	volatile int64_t x766 = INT64_MAX;
	static int64_t x767 = 1304LL;
	int32_t x768 = 2;

    t191 = (x765==(x766^(x767<=x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint8_t x769 = UINT8_MAX;
	int32_t x770 = 912;
	int64_t x771 = INT64_MIN;
	volatile int8_t x772 = INT8_MAX;

    t192 = (x769==(x770^(x771<=x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x773 = INT16_MIN;
	static int64_t x775 = -26124507487108168LL;
	int8_t x776 = INT8_MIN;
	static volatile int32_t t193 = 6;

    t193 = (x773==(x774^(x775<=x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x777 = -1;
	volatile int64_t x778 = INT64_MIN;
	int8_t x780 = INT8_MIN;
	volatile int32_t t194 = 121;

    t194 = (x777==(x778^(x779<=x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x781 = INT64_MIN;
	int8_t x784 = INT8_MIN;
	int32_t t195 = 0;

    t195 = (x781==(x782^(x783<=x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = 4U;
	int32_t x786 = INT32_MIN;
	uint32_t x787 = 8U;
	static int8_t x788 = INT8_MIN;
	volatile int32_t t196 = 3634264;

    t196 = (x785==(x786^(x787<=x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x789 = INT8_MAX;
	int16_t x791 = -1;
	int32_t t197 = -12;

    t197 = (x789==(x790^(x791<=x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x794 = 27831768057069976LLU;
	uint64_t x795 = UINT64_MAX;

    t198 = (x793==(x794^(x795<=x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x797 = 7U;
	uint8_t x798 = 0U;
	uint64_t x799 = 72554044388558LLU;
	int8_t x800 = INT8_MAX;
	int32_t t199 = 410;

    t199 = (x797==(x798^(x799<=x800)));

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



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

static int64_t x1 = 5LL;
int64_t x3 = -1LL;
static int8_t x11 = INT8_MIN;
uint64_t x14 = 243LLU;
static volatile uint32_t x15 = 83407708U;
uint64_t x17 = UINT64_MAX;
static uint64_t x20 = UINT64_MAX;
volatile uint64_t t4 = UINT64_MAX;
uint8_t x23 = 1U;
int32_t t7 = 1361;
uint64_t x36 = 395LLU;
int8_t x39 = INT8_MIN;
volatile int64_t t9 = INT64_MIN;
int16_t x42 = 107;
volatile uint16_t x48 = 1U;
int32_t t11 = INT32_MAX;
volatile int32_t x58 = -7317;
int8_t x66 = INT8_MAX;
uint16_t x70 = 2015U;
volatile uint64_t x73 = 5LLU;
uint8_t x74 = 0U;
static volatile uint64_t t18 = 160031882253960038LLU;
uint8_t x77 = 30U;
int64_t x79 = INT64_MAX;
uint16_t x84 = 5890U;
int64_t x85 = INT64_MAX;
uint8_t x89 = 59U;
static uint32_t x90 = 378U;
static int32_t t22 = -54;
int64_t x99 = 3499LL;
int16_t x103 = -1;
volatile int8_t x104 = 0;
int32_t t25 = 19931989;
volatile int32_t t28 = -11;
volatile uint64_t x122 = UINT64_MAX;
int8_t x131 = 6;
volatile uint64_t x135 = UINT64_MAX;
volatile uint8_t x141 = 8U;
uint16_t x142 = 5U;
int16_t x144 = INT16_MIN;
volatile int32_t t35 = 0;
static int64_t x148 = -110LL;
int32_t t36 = 87;
volatile int64_t x155 = -1LL;
static int64_t x158 = INT64_MIN;
volatile int32_t t39 = -15;
int16_t x163 = -31;
int32_t t40 = 414896;
int32_t x166 = INT32_MIN;
volatile int32_t t41 = 1;
static uint32_t x172 = UINT32_MAX;
int64_t x173 = -14497LL;
uint8_t x184 = 8U;
uint32_t x185 = UINT32_MAX;
int16_t x199 = -6618;
volatile int64_t t49 = INT64_MAX;
uint32_t x210 = 15U;
int64_t t55 = 118661372568132897LL;
int64_t t57 = -944LL;
static volatile uint16_t x233 = 6U;
volatile int32_t x237 = INT32_MIN;
static volatile uint16_t x241 = 0U;
int32_t t60 = 0;
uint64_t x256 = 61300994LLU;
int32_t x263 = -1;
volatile int32_t t69 = -6;
int64_t x283 = 15251250LL;
uint32_t x284 = 1963148U;
volatile uint64_t x286 = UINT64_MAX;
uint64_t t71 = 487LLU;
volatile uint64_t x289 = UINT64_MAX;
int32_t x291 = INT32_MIN;
uint32_t x297 = 51556135U;
static int32_t x299 = INT32_MIN;
volatile uint32_t t74 = 1U;
int64_t t75 = 34557575346487006LL;
int8_t x306 = -1;
int64_t x307 = INT64_MIN;
volatile uint8_t x309 = 22U;
int64_t x313 = INT64_MAX;
int8_t x315 = -1;
int64_t x316 = INT64_MIN;
int64_t t78 = INT64_MAX;
uint16_t x324 = 14U;
volatile int32_t t80 = -8371797;
static uint16_t x326 = UINT16_MAX;
static volatile int32_t t81 = 0;
static int64_t x341 = -1LL;
volatile uint64_t x350 = UINT64_MAX;
static volatile int32_t t87 = 47;
int32_t x355 = INT32_MIN;
volatile int32_t x357 = -1;
volatile int16_t x361 = -2208;
uint16_t x374 = 140U;
static volatile int64_t x375 = INT64_MIN;
volatile uint16_t x376 = UINT16_MAX;
static int32_t t93 = -220157;
int64_t x381 = INT64_MIN;
int8_t x384 = -1;
volatile int16_t x390 = 13;
int16_t x397 = INT16_MIN;
volatile uint32_t x399 = 81U;
int32_t t99 = 5120;
int32_t x407 = INT32_MIN;
int8_t x410 = INT8_MAX;
int8_t x413 = 14;
uint64_t x414 = 15884253370793LLU;
int64_t x415 = INT64_MIN;
static int16_t x418 = 6180;
volatile uint64_t t105 = UINT64_MAX;
static volatile uint32_t x429 = UINT32_MAX;
static uint32_t x435 = 3U;
uint64_t x449 = UINT64_MAX;
int8_t x450 = -6;
volatile int64_t x451 = INT64_MIN;
volatile uint64_t t113 = UINT64_MAX;
volatile int32_t t114 = -62300110;
static int16_t x462 = INT16_MIN;
int32_t t115 = -630529631;
uint8_t x469 = 10U;
int16_t x472 = 90;
static uint8_t x479 = 1U;
int16_t x483 = -3612;
volatile int8_t x486 = -29;
int32_t t121 = 622122;
volatile int16_t x495 = INT16_MIN;
volatile int32_t t123 = 862669499;
uint32_t x497 = 57U;
static int32_t x498 = INT32_MAX;
volatile uint32_t t124 = 113U;
static int8_t x505 = INT8_MIN;
volatile int32_t t127 = -1118;
uint32_t x513 = 3142887U;
int16_t x514 = INT16_MIN;
volatile uint32_t t128 = 205614U;
volatile int32_t t129 = -782016;
int8_t x527 = INT8_MAX;
int64_t x528 = INT64_MIN;
int64_t x529 = -1334038869LL;
uint64_t x530 = UINT64_MAX;
static int32_t x541 = INT32_MIN;
int64_t t136 = INT64_MIN;
static int16_t x552 = -9985;
int8_t x556 = INT8_MIN;
volatile uint64_t t138 = 175604856358595770LLU;
int16_t x560 = -1;
volatile int32_t t141 = INT32_MIN;
int16_t x570 = -1;
int8_t x572 = -1;
volatile int32_t t142 = 35954;
int16_t x573 = 6;
uint8_t x575 = 0U;
int32_t t144 = 3718;
static uint16_t x581 = 22397U;
int8_t x585 = INT8_MIN;
int32_t t146 = 1371399;
volatile int32_t x589 = INT32_MIN;
static uint64_t x593 = UINT64_MAX;
int64_t x596 = INT64_MIN;
volatile int32_t t149 = -64046;
uint64_t x601 = 135603064660036LLU;
uint64_t t150 = 4841223895024LLU;
int32_t x606 = 662;
static int64_t x607 = -1LL;
volatile int64_t t151 = INT64_MAX;
static volatile int64_t x615 = -1LL;
int16_t x616 = 493;
volatile int16_t x618 = INT16_MIN;
uint32_t x622 = UINT32_MAX;
volatile int32_t t155 = 1;
uint16_t x628 = 3U;
int32_t t157 = 202062;
static volatile int64_t x634 = INT64_MIN;
volatile uint32_t t159 = 184U;
volatile uint16_t x641 = 2U;
int32_t t160 = 1827701;
uint64_t x645 = 100389721536LLU;
int32_t x651 = 803;
static uint32_t t162 = 5U;
static volatile int8_t x656 = 13;
volatile int32_t t163 = -49;
static uint16_t x658 = 61U;
uint32_t x666 = 24U;
volatile int32_t t169 = 6662;
volatile int32_t x681 = -1;
static int64_t x687 = INT64_MIN;
volatile int32_t t171 = 122963131;
int32_t x692 = INT32_MAX;
static int32_t x695 = 8;
volatile int64_t t175 = INT64_MIN;
int32_t x705 = INT32_MIN;
static volatile int16_t x709 = -1;
volatile int64_t x711 = INT64_MIN;
volatile int32_t t178 = 2979355;
static int8_t x720 = -10;
uint64_t x726 = UINT64_MAX;
volatile uint16_t x729 = UINT16_MAX;
int32_t x732 = 55181;
volatile int32_t t182 = -1;
int64_t x737 = INT64_MIN;
static volatile uint32_t x740 = UINT32_MAX;
int64_t t184 = INT64_MIN;
uint32_t x744 = 10U;
static int64_t x747 = INT64_MIN;
static int8_t x749 = INT8_MIN;
static uint64_t x751 = UINT64_MAX;
static int32_t x753 = 2911185;
int8_t x755 = -1;
int32_t x758 = -1;
uint16_t x760 = UINT16_MAX;
uint16_t x766 = 12120U;
int16_t x771 = -821;
volatile uint16_t x772 = UINT16_MAX;
volatile int32_t x779 = -1;
int16_t x784 = -1;
int16_t x790 = -485;
uint16_t x791 = 6U;
int16_t x795 = INT16_MIN;
int16_t x799 = INT16_MIN;


void f0(void) {
    	int32_t x2 = 110;
	int16_t x4 = -1;
	int64_t t0 = 23403LL;

    t0 = (x1^(x2==(x3!=x4)));

    if (t0 != 5LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = -1LL;
	static int8_t x6 = INT8_MIN;
	static uint8_t x7 = 53U;
	uint64_t x8 = UINT64_MAX;
	static volatile int64_t t1 = -88734322514913LL;

    t1 = (x5^(x6==(x7!=x8)));

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 9;
	volatile uint16_t x10 = 9U;
	uint16_t x12 = UINT16_MAX;
	static volatile int32_t t2 = -545543;

    t2 = (x9^(x10==(x11!=x12)));

    if (t2 != 9) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	volatile int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 403;

    t3 = (x13^(x14==(x15!=x16)));

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x18 = INT16_MIN;
	int32_t x19 = INT32_MIN;

    t4 = (x17^(x18==(x19!=x20)));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x21 = INT32_MAX;
	int16_t x22 = INT16_MIN;
	int16_t x24 = -1;
	static int32_t t5 = INT32_MAX;

    t5 = (x21^(x22==(x23!=x24)));

    if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	int32_t x26 = INT32_MIN;
	uint64_t x27 = 45973850535LLU;
	volatile int8_t x28 = INT8_MAX;
	static uint64_t t6 = UINT64_MAX;

    t6 = (x25^(x26==(x27!=x28)));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 3U;
	int16_t x30 = INT16_MAX;
	int64_t x31 = 1LL;
	uint64_t x32 = 1518891195LLU;

    t7 = (x29^(x30==(x31!=x32)));

    if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	volatile uint16_t x34 = 6U;
	int32_t x35 = -62;
	volatile int32_t t8 = 3;

    t8 = (x33^(x34==(x35!=x36)));

    if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	volatile int64_t x38 = -1LL;
	static int64_t x40 = -1LL;

    t9 = (x37^(x38==(x39!=x40)));

    if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = INT8_MIN;
	int64_t x43 = INT64_MIN;
	int16_t x44 = INT16_MAX;
	static int32_t t10 = 27941687;

    t10 = (x41^(x42==(x43!=x44)));

    if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = INT32_MAX;
	volatile uint16_t x46 = 107U;
	uint16_t x47 = UINT16_MAX;

    t11 = (x45^(x46==(x47!=x48)));

    if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x49 = UINT64_MAX;
	uint16_t x50 = UINT16_MAX;
	int32_t x51 = -1058;
	static int16_t x52 = INT16_MIN;
	static volatile uint64_t t12 = UINT64_MAX;

    t12 = (x49^(x50==(x51!=x52)));

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -1LL;
	uint32_t x54 = 1U;
	int8_t x55 = -1;
	volatile uint64_t x56 = 74LLU;
	int64_t t13 = 9LL;

    t13 = (x53^(x54==(x55!=x56)));

    if (t13 != -2LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x57 = 0U;
	int8_t x59 = INT8_MIN;
	uint8_t x60 = UINT8_MAX;
	int32_t t14 = 64624;

    t14 = (x57^(x58==(x59!=x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x61 = INT32_MIN;
	uint32_t x62 = UINT32_MAX;
	int16_t x63 = INT16_MIN;
	volatile uint64_t x64 = 28079334058LLU;
	volatile int32_t t15 = INT32_MIN;

    t15 = (x61^(x62==(x63!=x64)));

    if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	int8_t x67 = INT8_MAX;
	uint32_t x68 = UINT32_MAX;
	static int32_t t16 = INT32_MIN;

    t16 = (x65^(x66==(x67!=x68)));

    if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -2;
	int64_t x71 = INT64_MIN;
	int8_t x72 = 28;
	volatile int32_t t17 = 114985664;

    t17 = (x69^(x70==(x71!=x72)));

    if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x75 = -118;
	static volatile int64_t x76 = 347LL;

    t18 = (x73^(x74==(x75!=x76)));

    if (t18 != 5LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x78 = 793613165110923607LLU;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = -1530;

    t19 = (x77^(x78==(x79!=x80)));

    if (t19 != 30) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -1790;
	uint64_t x82 = 8834708546177097LLU;
	int8_t x83 = -1;
	static int32_t t20 = -48;

    t20 = (x81^(x82==(x83!=x84)));

    if (t20 != -1790) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x86 = -1LL;
	uint64_t x87 = 4LLU;
	int16_t x88 = INT16_MAX;
	volatile int64_t t21 = INT64_MAX;

    t21 = (x85^(x86==(x87!=x88)));

    if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x91 = -1;
	volatile int32_t x92 = INT32_MAX;

    t22 = (x89^(x90==(x91!=x92)));

    if (t22 != 59) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = UINT32_MAX;
	static uint16_t x94 = 454U;
	uint16_t x95 = 2149U;
	static uint64_t x96 = UINT64_MAX;
	uint32_t t23 = UINT32_MAX;

    t23 = (x93^(x94==(x95!=x96)));

    if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 119557280U;
	uint64_t x98 = UINT64_MAX;
	int64_t x100 = INT64_MIN;
	static volatile uint32_t t24 = 72987U;

    t24 = (x97^(x98==(x99!=x100)));

    if (t24 != 119557280U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MIN;
	int32_t x102 = -1;

    t25 = (x101^(x102==(x103!=x104)));

    if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MAX;
	int8_t x106 = INT8_MIN;
	int32_t x107 = -2540;
	int16_t x108 = 8308;
	int32_t t26 = INT32_MAX;

    t26 = (x105^(x106==(x107!=x108)));

    if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x109 = INT32_MIN;
	int16_t x110 = INT16_MAX;
	int32_t x111 = 3211;
	volatile int16_t x112 = 837;
	int32_t t27 = INT32_MIN;

    t27 = (x109^(x110==(x111!=x112)));

    if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	uint32_t x114 = 0U;
	volatile int8_t x115 = INT8_MIN;
	int16_t x116 = INT16_MIN;

    t28 = (x113^(x114==(x115!=x116)));

    if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x117 = 77U;
	int64_t x118 = INT64_MIN;
	volatile int64_t x119 = INT64_MIN;
	int16_t x120 = 67;
	int32_t t29 = -3333744;

    t29 = (x117^(x118==(x119!=x120)));

    if (t29 != 77) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = UINT64_MAX;
	static volatile uint32_t x123 = UINT32_MAX;
	int32_t x124 = 1936663;
	volatile uint64_t t30 = UINT64_MAX;

    t30 = (x121^(x122==(x123!=x124)));

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 3U;
	int8_t x126 = INT8_MIN;
	static uint32_t x127 = 4325751U;
	uint64_t x128 = 139323796LLU;
	int32_t t31 = 0;

    t31 = (x125^(x126==(x127!=x128)));

    if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = INT64_MAX;
	volatile uint32_t x130 = UINT32_MAX;
	int16_t x132 = INT16_MAX;
	int64_t t32 = INT64_MAX;

    t32 = (x129^(x130==(x131!=x132)));

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 44U;
	uint64_t x134 = 767642424394810LLU;
	int16_t x136 = -1;
	volatile int32_t t33 = -1;

    t33 = (x133^(x134==(x135!=x136)));

    if (t33 != 44) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 795525579U;
	int64_t x138 = INT64_MIN;
	int64_t x139 = INT64_MAX;
	int8_t x140 = INT8_MIN;
	uint32_t t34 = 1290267431U;

    t34 = (x137^(x138==(x139!=x140)));

    if (t34 != 795525579U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x143 = -6;

    t35 = (x141^(x142==(x143!=x144)));

    if (t35 != 8) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -1908;
	int64_t x146 = INT64_MAX;
	int8_t x147 = INT8_MIN;

    t36 = (x145^(x146==(x147!=x148)));

    if (t36 != -1908) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MAX;
	int32_t x150 = INT32_MIN;
	int16_t x151 = INT16_MAX;
	int32_t x152 = INT32_MAX;
	volatile int32_t t37 = 0;

    t37 = (x149^(x150==(x151!=x152)));

    if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MIN;
	uint64_t x154 = UINT64_MAX;
	int8_t x156 = -3;
	int32_t t38 = 1583;

    t38 = (x153^(x154==(x155!=x156)));

    if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x157 = 5937270;
	volatile int32_t x159 = 309869109;
	volatile int32_t x160 = INT32_MIN;

    t39 = (x157^(x158==(x159!=x160)));

    if (t39 != 5937270) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x161 = -2;
	static int16_t x162 = INT16_MIN;
	uint64_t x164 = UINT64_MAX;

    t40 = (x161^(x162==(x163!=x164)));

    if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MIN;
	int16_t x167 = INT16_MAX;
	static int32_t x168 = INT32_MIN;

    t41 = (x165^(x166==(x167!=x168)));

    if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MAX;
	uint32_t x170 = 1933U;
	int8_t x171 = INT8_MIN;
	int64_t t42 = INT64_MAX;

    t42 = (x169^(x170==(x171!=x172)));

    if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x174 = INT32_MIN;
	uint8_t x175 = 5U;
	int8_t x176 = 11;
	int64_t t43 = -42406402945240417LL;

    t43 = (x173^(x174==(x175!=x176)));

    if (t43 != -14497LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x177 = -1;
	volatile int32_t x178 = INT32_MIN;
	uint16_t x179 = UINT16_MAX;
	uint32_t x180 = UINT32_MAX;
	int32_t t44 = 8;

    t44 = (x177^(x178==(x179!=x180)));

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -1LL;
	static uint16_t x182 = 12923U;
	int16_t x183 = INT16_MIN;
	int64_t t45 = -34732216225392LL;

    t45 = (x181^(x182==(x183!=x184)));

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x186 = 26671U;
	volatile uint32_t x187 = 68354U;
	int64_t x188 = INT64_MAX;
	volatile uint32_t t46 = UINT32_MAX;

    t46 = (x185^(x186==(x187!=x188)));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x189 = INT16_MIN;
	volatile int8_t x190 = -1;
	static int32_t x191 = -1;
	static int8_t x192 = INT8_MIN;
	volatile int32_t t47 = 1151095;

    t47 = (x189^(x190==(x191!=x192)));

    if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MAX;
	static volatile int8_t x194 = -1;
	static int32_t x195 = -1;
	int8_t x196 = -1;
	volatile int64_t t48 = INT64_MAX;

    t48 = (x193^(x194==(x195!=x196)));

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MAX;
	uint16_t x198 = UINT16_MAX;
	int8_t x200 = -1;

    t49 = (x197^(x198==(x199!=x200)));

    if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = -1;
	int8_t x202 = INT8_MIN;
	volatile int8_t x203 = -1;
	uint32_t x204 = 812769270U;
	static volatile int32_t t50 = 390;

    t50 = (x201^(x202==(x203!=x204)));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = -8550366;
	static uint32_t x206 = 0U;
	int8_t x207 = -1;
	int8_t x208 = INT8_MIN;
	int32_t t51 = 11635;

    t51 = (x205^(x206==(x207!=x208)));

    if (t51 != -8550366) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MIN;
	int8_t x211 = -1;
	int32_t x212 = 0;
	int32_t t52 = 2570036;

    t52 = (x209^(x210==(x211!=x212)));

    if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = -67035393737653LL;
	int32_t x214 = INT32_MIN;
	int32_t x215 = INT32_MIN;
	volatile int32_t x216 = -1;
	static volatile int64_t t53 = -1846550268386825405LL;

    t53 = (x213^(x214==(x215!=x216)));

    if (t53 != -67035393737653LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MAX;
	int32_t x218 = 2891;
	int32_t x219 = INT32_MIN;
	uint8_t x220 = 24U;
	volatile int32_t t54 = 3906;

    t54 = (x217^(x218==(x219!=x220)));

    if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x221 = 477LL;
	int32_t x222 = INT32_MAX;
	static int32_t x223 = -7661;
	int8_t x224 = -1;

    t55 = (x221^(x222==(x223!=x224)));

    if (t55 != 477LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x225 = INT8_MIN;
	static uint64_t x226 = 32388623LLU;
	uint64_t x227 = 88812303LLU;
	int8_t x228 = 52;
	int32_t t56 = 4157345;

    t56 = (x225^(x226==(x227!=x228)));

    if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = -1539844LL;
	int8_t x230 = 4;
	int32_t x231 = INT32_MIN;
	uint64_t x232 = UINT64_MAX;

    t57 = (x229^(x230==(x231!=x232)));

    if (t57 != -1539844LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x234 = INT8_MIN;
	uint8_t x235 = UINT8_MAX;
	int64_t x236 = INT64_MAX;
	int32_t t58 = -58758;

    t58 = (x233^(x234==(x235!=x236)));

    if (t58 != 6) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x238 = INT64_MAX;
	static int64_t x239 = -1LL;
	int8_t x240 = -7;
	int32_t t59 = INT32_MIN;

    t59 = (x237^(x238==(x239!=x240)));

    if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x242 = 10959668293388235LLU;
	static volatile int16_t x243 = INT16_MIN;
	int32_t x244 = 482271;

    t60 = (x241^(x242==(x243!=x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x245 = -1;
	uint8_t x246 = UINT8_MAX;
	int32_t x247 = 471220217;
	int32_t x248 = INT32_MIN;
	volatile int32_t t61 = -209615881;

    t61 = (x245^(x246==(x247!=x248)));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int64_t x249 = INT64_MIN;
	int8_t x250 = INT8_MIN;
	int64_t x251 = 77647761090593LL;
	uint8_t x252 = 14U;
	int64_t t62 = INT64_MIN;

    t62 = (x249^(x250==(x251!=x252)));

    if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = -220;
	int64_t x254 = INT64_MIN;
	int32_t x255 = 14;
	volatile int32_t t63 = -93719554;

    t63 = (x253^(x254==(x255!=x256)));

    if (t63 != -220) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x257 = 4303U;
	static uint64_t x258 = 2722980736100328365LLU;
	int32_t x259 = -1;
	volatile int64_t x260 = -161090009786LL;
	static int32_t t64 = 834;

    t64 = (x257^(x258==(x259!=x260)));

    if (t64 != 4303) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x261 = INT16_MAX;
	int32_t x262 = INT32_MIN;
	uint16_t x264 = 4U;
	volatile int32_t t65 = -3377520;

    t65 = (x261^(x262==(x263!=x264)));

    if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int8_t x265 = -1;
	int32_t x266 = INT32_MIN;
	volatile uint16_t x267 = 455U;
	uint64_t x268 = UINT64_MAX;
	int32_t t66 = -2;

    t66 = (x265^(x266==(x267!=x268)));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = UINT64_MAX;
	volatile int64_t x270 = -4324916LL;
	int8_t x271 = INT8_MIN;
	static volatile uint64_t x272 = 0LLU;
	uint64_t t67 = UINT64_MAX;

    t67 = (x269^(x270==(x271!=x272)));

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x273 = INT8_MIN;
	static volatile int32_t x274 = 2274017;
	int32_t x275 = INT32_MAX;
	static uint32_t x276 = UINT32_MAX;
	volatile int32_t t68 = -143;

    t68 = (x273^(x274==(x275!=x276)));

    if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = UINT16_MAX;
	static volatile int8_t x278 = INT8_MAX;
	int16_t x279 = 13;
	int8_t x280 = INT8_MIN;

    t69 = (x277^(x278==(x279!=x280)));

    if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = 648;
	uint8_t x282 = 2U;
	int32_t t70 = -6920118;

    t70 = (x281^(x282==(x283!=x284)));

    if (t70 != 648) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = 51581732740LLU;
	int8_t x287 = INT8_MIN;
	static int64_t x288 = INT64_MIN;

    t71 = (x285^(x286==(x287!=x288)));

    if (t71 != 51581732740LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x290 = -1LL;
	int32_t x292 = INT32_MIN;
	static uint64_t t72 = UINT64_MAX;

    t72 = (x289^(x290==(x291!=x292)));

    if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x293 = 2;
	int32_t x294 = INT32_MIN;
	uint8_t x295 = UINT8_MAX;
	int32_t x296 = -1;
	int32_t t73 = -15;

    t73 = (x293^(x294==(x295!=x296)));

    if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x298 = 0U;
	uint64_t x300 = 144LLU;

    t74 = (x297^(x298==(x299!=x300)));

    if (t74 != 51556135U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x301 = 0LL;
	int32_t x302 = INT32_MAX;
	int32_t x303 = INT32_MIN;
	volatile uint32_t x304 = 14354132U;

    t75 = (x301^(x302==(x303!=x304)));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = -3504;
	volatile int32_t x308 = 21086564;
	static volatile int32_t t76 = 1032668216;

    t76 = (x305^(x306==(x307!=x308)));

    if (t76 != -3504) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x310 = UINT64_MAX;
	int16_t x311 = -1;
	int32_t x312 = INT32_MIN;
	volatile int32_t t77 = -1;

    t77 = (x309^(x310==(x311!=x312)));

    if (t77 != 22) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x314 = -1;

    t78 = (x313^(x314==(x315!=x316)));

    if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 3683512508468691389LLU;
	int64_t x318 = -1LL;
	uint8_t x319 = UINT8_MAX;
	uint8_t x320 = UINT8_MAX;
	volatile uint64_t t79 = 505405LLU;

    t79 = (x317^(x318==(x319!=x320)));

    if (t79 != 3683512508468691389LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = -1;
	int64_t x322 = INT64_MIN;
	uint16_t x323 = UINT16_MAX;

    t80 = (x321^(x322==(x323!=x324)));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x325 = 69U;
	int64_t x327 = INT64_MIN;
	uint16_t x328 = 219U;

    t81 = (x325^(x326==(x327!=x328)));

    if (t81 != 69) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x329 = -193;
	int64_t x330 = INT64_MIN;
	static volatile uint64_t x331 = 2830716786LLU;
	static int32_t x332 = INT32_MIN;
	int32_t t82 = 3;

    t82 = (x329^(x330==(x331!=x332)));

    if (t82 != -193) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = 2LLU;
	uint32_t x334 = 1031045U;
	volatile int64_t x335 = INT64_MAX;
	volatile int64_t x336 = -1LL;
	static uint64_t t83 = 1939332643093LLU;

    t83 = (x333^(x334==(x335!=x336)));

    if (t83 != 2LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = 39;
	volatile int8_t x338 = INT8_MAX;
	volatile int32_t x339 = INT32_MAX;
	int16_t x340 = -15635;
	volatile int32_t t84 = 960315;

    t84 = (x337^(x338==(x339!=x340)));

    if (t84 != 39) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x342 = -1;
	int32_t x343 = INT32_MAX;
	uint64_t x344 = 15486647LLU;
	int64_t t85 = 4009567368LL;

    t85 = (x341^(x342==(x343!=x344)));

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x345 = INT64_MAX;
	static int32_t x346 = INT32_MIN;
	static uint8_t x347 = 3U;
	volatile int16_t x348 = INT16_MAX;
	int64_t t86 = INT64_MAX;

    t86 = (x345^(x346==(x347!=x348)));

    if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x349 = 17925U;
	int16_t x351 = 4205;
	int32_t x352 = -1921741;

    t87 = (x349^(x350==(x351!=x352)));

    if (t87 != 17925) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x353 = INT64_MAX;
	int64_t x354 = INT64_MAX;
	volatile uint64_t x356 = 3044083341741428965LLU;
	volatile int64_t t88 = INT64_MAX;

    t88 = (x353^(x354==(x355!=x356)));

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x358 = UINT32_MAX;
	uint64_t x359 = UINT64_MAX;
	int8_t x360 = -2;
	int32_t t89 = -182;

    t89 = (x357^(x358==(x359!=x360)));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x362 = -107427423;
	uint32_t x363 = 9674U;
	int16_t x364 = -1;
	volatile int32_t t90 = -12552;

    t90 = (x361^(x362==(x363!=x364)));

    if (t90 != -2208) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = 1;
	int64_t x366 = 519238309146871334LL;
	volatile int16_t x367 = INT16_MAX;
	uint32_t x368 = 6U;
	volatile int32_t t91 = -25191597;

    t91 = (x365^(x366==(x367!=x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x369 = INT32_MIN;
	volatile int32_t x370 = 0;
	uint16_t x371 = UINT16_MAX;
	static uint8_t x372 = 1U;
	int32_t t92 = INT32_MIN;

    t92 = (x369^(x370==(x371!=x372)));

    if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x373 = -2662405;

    t93 = (x373^(x374==(x375!=x376)));

    if (t93 != -2662405) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = -1;
	static uint32_t x378 = 1U;
	uint8_t x379 = UINT8_MAX;
	uint8_t x380 = 4U;
	int32_t t94 = 15279576;

    t94 = (x377^(x378==(x379!=x380)));

    if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x382 = -2182;
	uint8_t x383 = UINT8_MAX;
	static int64_t t95 = INT64_MIN;

    t95 = (x381^(x382==(x383!=x384)));

    if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = UINT8_MAX;
	uint16_t x386 = 22119U;
	int32_t x387 = INT32_MIN;
	int16_t x388 = -4;
	static volatile int32_t t96 = 3058969;

    t96 = (x385^(x386==(x387!=x388)));

    if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = -4;
	volatile int8_t x391 = 0;
	int16_t x392 = -1;
	int32_t t97 = 310451495;

    t97 = (x389^(x390==(x391!=x392)));

    if (t97 != -4) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = 130858;
	int8_t x394 = -20;
	int64_t x395 = INT64_MAX;
	volatile uint64_t x396 = 7464580065250248LLU;
	static volatile int32_t t98 = -7858744;

    t98 = (x393^(x394==(x395!=x396)));

    if (t98 != 130858) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x398 = 56U;
	uint8_t x400 = 97U;

    t99 = (x397^(x398==(x399!=x400)));

    if (t99 != -32768) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MIN;
	int8_t x402 = INT8_MIN;
	int32_t x403 = 3;
	int16_t x404 = 723;
	static int32_t t100 = INT32_MIN;

    t100 = (x401^(x402==(x403!=x404)));

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = 41573;
	uint32_t x406 = 2486U;
	int8_t x408 = INT8_MIN;
	int32_t t101 = -39427868;

    t101 = (x405^(x406==(x407!=x408)));

    if (t101 != 41573) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x409 = 15187746U;
	static int16_t x411 = INT16_MAX;
	uint32_t x412 = 1507444460U;
	uint32_t t102 = 92013067U;

    t102 = (x409^(x410==(x411!=x412)));

    if (t102 != 15187746U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x416 = 3U;
	int32_t t103 = 13617;

    t103 = (x413^(x414==(x415!=x416)));

    if (t103 != 14) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x417 = INT64_MIN;
	int8_t x419 = INT8_MIN;
	uint8_t x420 = 2U;
	int64_t t104 = INT64_MIN;

    t104 = (x417^(x418==(x419!=x420)));

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = UINT64_MAX;
	volatile uint16_t x422 = UINT16_MAX;
	volatile uint8_t x423 = 103U;
	int64_t x424 = -47880863574LL;

    t105 = (x421^(x422==(x423!=x424)));

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MIN;
	volatile int32_t x426 = -67;
	volatile int16_t x427 = INT16_MIN;
	int64_t x428 = -1474299651623495LL;
	static int32_t t106 = 1;

    t106 = (x425^(x426==(x427!=x428)));

    if (t106 != -128) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x430 = INT32_MIN;
	volatile int64_t x431 = 78870LL;
	static uint16_t x432 = UINT16_MAX;
	volatile uint32_t t107 = UINT32_MAX;

    t107 = (x429^(x430==(x431!=x432)));

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x433 = -1474924473702660807LL;
	int8_t x434 = -36;
	volatile int8_t x436 = -1;
	int64_t t108 = 9788LL;

    t108 = (x433^(x434==(x435!=x436)));

    if (t108 != -1474924473702660807LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = 0;
	int64_t x438 = INT64_MIN;
	int8_t x439 = -1;
	int8_t x440 = 1;
	static int32_t t109 = -1;

    t109 = (x437^(x438==(x439!=x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MAX;
	uint16_t x442 = 105U;
	uint64_t x443 = 26LLU;
	static int64_t x444 = INT64_MAX;
	int64_t t110 = INT64_MAX;

    t110 = (x441^(x442==(x443!=x444)));

    if (t110 != INT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MIN;
	volatile uint16_t x446 = 0U;
	int32_t x447 = -15684560;
	uint8_t x448 = 2U;
	volatile int32_t t111 = -13375;

    t111 = (x445^(x446==(x447!=x448)));

    if (t111 != -128) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x452 = 3543U;
	uint64_t t112 = UINT64_MAX;

    t112 = (x449^(x450==(x451!=x452)));

    if (t112 != UINT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = UINT64_MAX;
	volatile int64_t x454 = 62732471657LL;
	int64_t x455 = INT64_MIN;
	int8_t x456 = -3;

    t113 = (x453^(x454==(x455!=x456)));

    if (t113 != UINT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = 18;
	int32_t x458 = INT32_MIN;
	static int64_t x459 = INT64_MIN;
	static volatile uint64_t x460 = 33515178058111LLU;

    t114 = (x457^(x458==(x459!=x460)));

    if (t114 != 18) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MIN;
	int32_t x463 = INT32_MIN;
	uint8_t x464 = UINT8_MAX;

    t115 = (x461^(x462==(x463!=x464)));

    if (t115 != -128) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = 36U;
	static uint8_t x466 = UINT8_MAX;
	int32_t x467 = -1;
	uint32_t x468 = UINT32_MAX;
	static int32_t t116 = 1095627;

    t116 = (x465^(x466==(x467!=x468)));

    if (t116 != 36) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x470 = -140279717;
	int8_t x471 = INT8_MIN;
	int32_t t117 = -890212;

    t117 = (x469^(x470==(x471!=x472)));

    if (t117 != 10) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = 8013U;
	int8_t x474 = -1;
	static int64_t x475 = INT64_MAX;
	int64_t x476 = INT64_MAX;
	uint32_t t118 = 57U;

    t118 = (x473^(x474==(x475!=x476)));

    if (t118 != 8013U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x477 = 43302198U;
	uint64_t x478 = 17695LLU;
	static int8_t x480 = INT8_MAX;
	volatile uint32_t t119 = 662463942U;

    t119 = (x477^(x478==(x479!=x480)));

    if (t119 != 43302198U) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = -85;
	uint16_t x482 = 16821U;
	int64_t x484 = INT64_MIN;
	static int32_t t120 = 0;

    t120 = (x481^(x482==(x483!=x484)));

    if (t120 != -85) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -1;
	static int32_t x487 = 44;
	volatile int64_t x488 = INT64_MIN;

    t121 = (x485^(x486==(x487!=x488)));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x489 = UINT16_MAX;
	int8_t x490 = INT8_MIN;
	uint64_t x491 = 637836995LLU;
	volatile int64_t x492 = -565101360398926488LL;
	static volatile int32_t t122 = 352;

    t122 = (x489^(x490==(x491!=x492)));

    if (t122 != 65535) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = INT8_MAX;
	int32_t x494 = -685;
	int64_t x496 = -17LL;

    t123 = (x493^(x494==(x495!=x496)));

    if (t123 != 127) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x499 = INT64_MIN;
	int32_t x500 = -1;

    t124 = (x497^(x498==(x499!=x500)));

    if (t124 != 57U) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = -1;
	int16_t x502 = INT16_MIN;
	int16_t x503 = 12;
	int16_t x504 = INT16_MIN;
	volatile int32_t t125 = 1675936;

    t125 = (x501^(x502==(x503!=x504)));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x506 = INT32_MIN;
	uint8_t x507 = 1U;
	int8_t x508 = -1;
	volatile int32_t t126 = 1840;

    t126 = (x505^(x506==(x507!=x508)));

    if (t126 != -128) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = -1;
	uint32_t x510 = 84308U;
	static uint64_t x511 = UINT64_MAX;
	uint8_t x512 = 4U;

    t127 = (x509^(x510==(x511!=x512)));

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int64_t x515 = INT64_MIN;
	int64_t x516 = INT64_MAX;

    t128 = (x513^(x514==(x515!=x516)));

    if (t128 != 3142887U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x517 = 46U;
	int8_t x518 = INT8_MIN;
	int64_t x519 = -204178383037328LL;
	static int64_t x520 = INT64_MAX;

    t129 = (x517^(x518==(x519!=x520)));

    if (t129 != 46) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MAX;
	uint64_t x522 = 86306225867LLU;
	static uint64_t x523 = UINT64_MAX;
	int8_t x524 = 0;
	volatile int32_t t130 = 7;

    t130 = (x521^(x522==(x523!=x524)));

    if (t130 != 127) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x525 = INT32_MIN;
	uint64_t x526 = 426236LLU;
	int32_t t131 = INT32_MIN;

    t131 = (x525^(x526==(x527!=x528)));

    if (t131 != INT32_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int32_t x531 = INT32_MAX;
	uint32_t x532 = UINT32_MAX;
	volatile int64_t t132 = 92627256LL;

    t132 = (x529^(x530==(x531!=x532)));

    if (t132 != -1334038869LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = 29;
	uint16_t x534 = 37U;
	volatile int16_t x535 = -2;
	static uint16_t x536 = UINT16_MAX;
	int32_t t133 = -51;

    t133 = (x533^(x534==(x535!=x536)));

    if (t133 != 29) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = 292718U;
	int16_t x538 = INT16_MAX;
	int8_t x539 = -1;
	int32_t x540 = INT32_MAX;
	static uint32_t t134 = 402864584U;

    t134 = (x537^(x538==(x539!=x540)));

    if (t134 != 292718U) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x542 = INT32_MIN;
	uint32_t x543 = UINT32_MAX;
	int64_t x544 = INT64_MIN;
	int32_t t135 = INT32_MIN;

    t135 = (x541^(x542==(x543!=x544)));

    if (t135 != INT32_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x545 = INT64_MIN;
	static int16_t x546 = -15446;
	uint64_t x547 = 27270815360644LLU;
	int8_t x548 = 26;

    t136 = (x545^(x546==(x547!=x548)));

    if (t136 != INT64_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 4U;
	int64_t x550 = INT64_MIN;
	volatile int32_t x551 = INT32_MAX;
	static int32_t t137 = 1042575615;

    t137 = (x549^(x550==(x551!=x552)));

    if (t137 != 4) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 801577962415960840LLU;
	volatile int32_t x554 = -1;
	static volatile uint8_t x555 = 17U;

    t138 = (x553^(x554==(x555!=x556)));

    if (t138 != 801577962415960840LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x557 = -1;
	int16_t x558 = -27;
	static uint16_t x559 = 22U;
	volatile int32_t t139 = 3764;

    t139 = (x557^(x558==(x559!=x560)));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint16_t x561 = 23U;
	int8_t x562 = 56;
	static int64_t x563 = 453301985LL;
	uint64_t x564 = UINT64_MAX;
	static int32_t t140 = 21022;

    t140 = (x561^(x562==(x563!=x564)));

    if (t140 != 23) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x565 = INT32_MIN;
	uint8_t x566 = 23U;
	static uint64_t x567 = 53763558857077LLU;
	int8_t x568 = -1;

    t141 = (x565^(x566==(x567!=x568)));

    if (t141 != INT32_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x569 = 0;
	static volatile uint16_t x571 = 122U;

    t142 = (x569^(x570==(x571!=x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x574 = -707;
	int8_t x576 = 54;
	volatile int32_t t143 = -9419;

    t143 = (x573^(x574==(x575!=x576)));

    if (t143 != 6) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = -25;
	volatile uint16_t x578 = UINT16_MAX;
	static uint32_t x579 = 31951268U;
	int64_t x580 = -948777823067511810LL;

    t144 = (x577^(x578==(x579!=x580)));

    if (t144 != -25) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x582 = 233U;
	int8_t x583 = INT8_MAX;
	int16_t x584 = -620;
	volatile int32_t t145 = -3925;

    t145 = (x581^(x582==(x583!=x584)));

    if (t145 != 22397) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x586 = UINT32_MAX;
	uint16_t x587 = UINT16_MAX;
	volatile uint8_t x588 = 15U;

    t146 = (x585^(x586==(x587!=x588)));

    if (t146 != -128) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int64_t x590 = INT64_MIN;
	int16_t x591 = 417;
	uint32_t x592 = UINT32_MAX;
	static int32_t t147 = INT32_MIN;

    t147 = (x589^(x590==(x591!=x592)));

    if (t147 != INT32_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x594 = -8218878291183371LL;
	static int16_t x595 = INT16_MAX;
	uint64_t t148 = UINT64_MAX;

    t148 = (x593^(x594==(x595!=x596)));

    if (t148 != UINT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x597 = -3;
	uint32_t x598 = 1U;
	int32_t x599 = -1;
	uint8_t x600 = 0U;

    t149 = (x597^(x598==(x599!=x600)));

    if (t149 != -4) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x602 = -1;
	volatile int32_t x603 = 1273;
	uint32_t x604 = 70638427U;

    t150 = (x601^(x602==(x603!=x604)));

    if (t150 != 135603064660036LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x605 = INT64_MAX;
	int32_t x608 = -1;

    t151 = (x605^(x606==(x607!=x608)));

    if (t151 != INT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x609 = UINT32_MAX;
	int32_t x610 = INT32_MIN;
	uint64_t x611 = 1128215LLU;
	static int8_t x612 = -1;
	uint32_t t152 = UINT32_MAX;

    t152 = (x609^(x610==(x611!=x612)));

    if (t152 != UINT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MAX;
	volatile int16_t x614 = INT16_MAX;
	int32_t t153 = INT32_MAX;

    t153 = (x613^(x614==(x615!=x616)));

    if (t153 != INT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x617 = 29;
	static int16_t x619 = -324;
	static volatile int16_t x620 = -1;
	static int32_t t154 = 193343;

    t154 = (x617^(x618==(x619!=x620)));

    if (t154 != 29) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = -1;
	int16_t x623 = -1;
	static int8_t x624 = INT8_MIN;

    t155 = (x621^(x622==(x623!=x624)));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = INT16_MIN;
	int32_t x626 = -6;
	int64_t x627 = INT64_MIN;
	volatile int32_t t156 = -212;

    t156 = (x625^(x626==(x627!=x628)));

    if (t156 != -32768) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MIN;
	static int16_t x630 = -1;
	int64_t x631 = -520816177674LL;
	static int8_t x632 = INT8_MIN;

    t157 = (x629^(x630==(x631!=x632)));

    if (t157 != -128) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = -10;
	int32_t x635 = INT32_MAX;
	uint16_t x636 = 96U;
	static volatile int32_t t158 = -51965075;

    t158 = (x633^(x634==(x635!=x636)));

    if (t158 != -10) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = 13908U;
	uint32_t x638 = UINT32_MAX;
	int64_t x639 = INT64_MIN;
	volatile int64_t x640 = -965744805147555LL;

    t159 = (x637^(x638==(x639!=x640)));

    if (t159 != 13908U) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x642 = 10698LL;
	volatile int8_t x643 = INT8_MIN;
	static int8_t x644 = INT8_MIN;

    t160 = (x641^(x642==(x643!=x644)));

    if (t160 != 2) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x646 = INT16_MAX;
	static uint8_t x647 = 2U;
	uint8_t x648 = 42U;
	uint64_t t161 = 6082861211774320140LLU;

    t161 = (x645^(x646==(x647!=x648)));

    if (t161 != 100389721536LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x649 = UINT32_MAX;
	int8_t x650 = 1;
	uint8_t x652 = UINT8_MAX;

    t162 = (x649^(x650==(x651!=x652)));

    if (t162 != 4294967294U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x653 = -1;
	volatile uint64_t x654 = UINT64_MAX;
	static int8_t x655 = -1;

    t163 = (x653^(x654==(x655!=x656)));

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x657 = UINT32_MAX;
	uint64_t x659 = 823053LLU;
	uint64_t x660 = 390334334409LLU;
	volatile uint32_t t164 = UINT32_MAX;

    t164 = (x657^(x658==(x659!=x660)));

    if (t164 != UINT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MIN;
	static uint64_t x662 = 242870693LLU;
	static int8_t x663 = INT8_MAX;
	int64_t x664 = 19609202118779LL;
	volatile int32_t t165 = 20932;

    t165 = (x661^(x662==(x663!=x664)));

    if (t165 != -128) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x665 = 1;
	uint32_t x667 = UINT32_MAX;
	int32_t x668 = INT32_MIN;
	volatile int32_t t166 = -3;

    t166 = (x665^(x666==(x667!=x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = INT8_MAX;
	static uint64_t x670 = 495230030342720897LLU;
	uint32_t x671 = 24663425U;
	int64_t x672 = INT64_MIN;
	volatile int32_t t167 = 212135;

    t167 = (x669^(x670==(x671!=x672)));

    if (t167 != 127) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x673 = UINT16_MAX;
	static uint64_t x674 = 251837LLU;
	static int16_t x675 = -1142;
	int32_t x676 = 5829824;
	int32_t t168 = 310;

    t168 = (x673^(x674==(x675!=x676)));

    if (t168 != 65535) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MIN;
	static int64_t x678 = 498174192872LL;
	int32_t x679 = INT32_MAX;
	int32_t x680 = INT32_MIN;

    t169 = (x677^(x678==(x679!=x680)));

    if (t169 != -32768) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x682 = 69011LLU;
	int16_t x683 = -1;
	int8_t x684 = INT8_MAX;
	static int32_t t170 = 1;

    t170 = (x681^(x682==(x683!=x684)));

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = -11;
	int8_t x686 = INT8_MIN;
	static int64_t x688 = -2226550345187466749LL;

    t171 = (x685^(x686==(x687!=x688)));

    if (t171 != -11) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = 547759994;
	static int16_t x690 = INT16_MAX;
	int16_t x691 = INT16_MIN;
	volatile int32_t t172 = 4;

    t172 = (x689^(x690==(x691!=x692)));

    if (t172 != 547759994) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = -33;
	uint32_t x694 = 1213U;
	int16_t x696 = 0;
	int32_t t173 = 748975;

    t173 = (x693^(x694==(x695!=x696)));

    if (t173 != -33) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = 17U;
	int16_t x698 = INT16_MAX;
	uint64_t x699 = 104474LLU;
	int8_t x700 = 3;
	int32_t t174 = 1905349;

    t174 = (x697^(x698==(x699!=x700)));

    if (t174 != 17) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MIN;
	static int8_t x702 = -2;
	volatile int16_t x703 = -22;
	int64_t x704 = -1LL;

    t175 = (x701^(x702==(x703!=x704)));

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x706 = INT16_MIN;
	static int64_t x707 = 41840LL;
	volatile int32_t x708 = INT32_MIN;
	int32_t t176 = INT32_MIN;

    t176 = (x705^(x706==(x707!=x708)));

    if (t176 != INT32_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x710 = INT64_MIN;
	int16_t x712 = INT16_MIN;
	int32_t t177 = 14153;

    t177 = (x709^(x710==(x711!=x712)));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MIN;
	int64_t x714 = -3658LL;
	int64_t x715 = -3409701LL;
	int16_t x716 = -1;

    t178 = (x713^(x714==(x715!=x716)));

    if (t178 != -128) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x717 = UINT16_MAX;
	volatile uint8_t x718 = UINT8_MAX;
	int8_t x719 = -12;
	volatile int32_t t179 = 2091;

    t179 = (x717^(x718==(x719!=x720)));

    if (t179 != 65535) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MIN;
	int8_t x722 = -16;
	int8_t x723 = -1;
	uint32_t x724 = 13759U;
	static int32_t t180 = -5;

    t180 = (x721^(x722==(x723!=x724)));

    if (t180 != -32768) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = -1;
	uint8_t x727 = 7U;
	static int16_t x728 = -12685;
	int32_t t181 = 131;

    t181 = (x725^(x726==(x727!=x728)));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x730 = 2U;
	uint64_t x731 = UINT64_MAX;

    t182 = (x729^(x730==(x731!=x732)));

    if (t182 != 65535) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = 2799LLU;
	volatile int64_t x734 = INT64_MAX;
	uint32_t x735 = 5402301U;
	int32_t x736 = INT32_MIN;
	volatile uint64_t t183 = 1000609LLU;

    t183 = (x733^(x734==(x735!=x736)));

    if (t183 != 2799LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x738 = 20U;
	static uint32_t x739 = 6747393U;

    t184 = (x737^(x738==(x739!=x740)));

    if (t184 != INT64_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = 17805;
	int16_t x742 = INT16_MIN;
	uint64_t x743 = 2791044784LLU;
	int32_t t185 = -219407769;

    t185 = (x741^(x742==(x743!=x744)));

    if (t185 != 17805) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MIN;
	int64_t x746 = 4510487657513LL;
	int16_t x748 = 0;
	volatile int32_t t186 = 26541;

    t186 = (x745^(x746==(x747!=x748)));

    if (t186 != -128) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x750 = 1;
	int16_t x752 = INT16_MIN;
	volatile int32_t t187 = 100179;

    t187 = (x749^(x750==(x751!=x752)));

    if (t187 != -127) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x754 = INT8_MAX;
	int64_t x756 = INT64_MIN;
	volatile int32_t t188 = -9;

    t188 = (x753^(x754==(x755!=x756)));

    if (t188 != 2911185) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = UINT8_MAX;
	int32_t x759 = -1;
	int32_t t189 = 24019;

    t189 = (x757^(x758==(x759!=x760)));

    if (t189 != 255) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x761 = 33107829749LL;
	int8_t x762 = -1;
	int64_t x763 = -2494335581472525629LL;
	static int16_t x764 = 12316;
	volatile int64_t t190 = 28377140899LL;

    t190 = (x761^(x762==(x763!=x764)));

    if (t190 != 33107829749LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = 54U;
	int16_t x767 = INT16_MIN;
	int64_t x768 = INT64_MAX;
	int32_t t191 = 509;

    t191 = (x765^(x766==(x767!=x768)));

    if (t191 != 54) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x769 = -3171;
	int64_t x770 = INT64_MIN;
	int32_t t192 = 1905935;

    t192 = (x769^(x770==(x771!=x772)));

    if (t192 != -3171) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = -1LL;
	int64_t x774 = INT64_MIN;
	int64_t x775 = INT64_MIN;
	volatile int16_t x776 = 1;
	int64_t t193 = -837757176LL;

    t193 = (x773^(x774==(x775!=x776)));

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x777 = UINT8_MAX;
	int16_t x778 = INT16_MIN;
	volatile uint32_t x780 = 944826U;
	static int32_t t194 = 114277;

    t194 = (x777^(x778==(x779!=x780)));

    if (t194 != 255) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = 3293LLU;
	uint16_t x782 = UINT16_MAX;
	volatile uint8_t x783 = 18U;
	static volatile uint64_t t195 = 767172132LLU;

    t195 = (x781^(x782==(x783!=x784)));

    if (t195 != 3293LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = UINT16_MAX;
	int32_t x786 = INT32_MAX;
	int32_t x787 = 1195;
	int8_t x788 = 1;
	volatile int32_t t196 = 583;

    t196 = (x785^(x786==(x787!=x788)));

    if (t196 != 65535) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = 0U;
	static volatile int8_t x792 = 4;
	int32_t t197 = -96918294;

    t197 = (x789^(x790==(x791!=x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x793 = 115LLU;
	int64_t x794 = INT64_MAX;
	uint32_t x796 = 923465431U;
	volatile uint64_t t198 = 8951LLU;

    t198 = (x793^(x794==(x795!=x796)));

    if (t198 != 115LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x797 = 1862U;
	uint64_t x798 = UINT64_MAX;
	volatile int8_t x800 = 1;
	int32_t t199 = -1857;

    t199 = (x797^(x798==(x799!=x800)));

    if (t199 != 1862) { NG(); } else { ; }
	
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


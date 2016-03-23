
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

uint16_t x1 = UINT16_MAX;
uint32_t x9 = UINT32_MAX;
int16_t x12 = INT16_MAX;
int8_t x13 = -1;
int32_t x14 = -12702;
uint64_t x15 = UINT64_MAX;
static int16_t x17 = INT16_MIN;
int32_t t5 = 9;
volatile int16_t x26 = 0;
volatile int32_t t6 = -20;
int64_t t7 = 6157LL;
uint16_t x35 = 15U;
int16_t x41 = INT16_MAX;
int64_t x42 = -945801886283976112LL;
uint8_t x55 = UINT8_MAX;
uint8_t x56 = 14U;
volatile int8_t x62 = INT8_MIN;
int32_t x64 = INT32_MIN;
static volatile int64_t t16 = 610103812LL;
int32_t x75 = INT32_MIN;
int64_t x77 = -49731LL;
volatile int32_t t20 = -4251;
int64_t x86 = -55520653755LL;
int32_t x88 = 11014649;
uint64_t x94 = 4260429025819242LLU;
volatile int32_t t23 = 17621;
static volatile int8_t x103 = INT8_MIN;
int8_t x104 = -1;
int32_t t26 = -374968;
uint16_t x112 = UINT16_MAX;
int32_t t27 = 2090747;
int16_t x115 = INT16_MIN;
int64_t x119 = 35655LL;
volatile int8_t x120 = INT8_MIN;
int32_t x124 = INT32_MIN;
int8_t x128 = 0;
static int16_t x132 = INT16_MIN;
static volatile int64_t x133 = INT64_MAX;
static volatile int64_t x134 = -1LL;
int32_t t34 = -95973;
uint16_t x142 = 1U;
int16_t x149 = -164;
int32_t t39 = -1900;
uint8_t x169 = UINT8_MAX;
volatile int8_t x180 = INT8_MAX;
volatile int8_t x181 = INT8_MAX;
int8_t x182 = -1;
volatile int32_t t45 = 28074;
int64_t x185 = -1LL;
static uint64_t x186 = UINT64_MAX;
int16_t x189 = -1;
volatile int32_t t49 = 1;
static uint64_t x202 = UINT64_MAX;
volatile int8_t x204 = INT8_MIN;
static volatile int16_t x205 = -15709;
volatile uint8_t x207 = 10U;
int8_t x209 = 30;
int32_t t52 = -13;
static int64_t t53 = 1774LL;
int32_t x217 = -1;
int32_t x219 = -1;
int8_t x223 = INT8_MAX;
uint8_t x235 = 28U;
uint64_t x236 = 236730504285LLU;
uint32_t x239 = UINT32_MAX;
volatile int32_t t59 = 11930;
uint32_t x245 = 56163491U;
uint32_t t61 = 1988U;
static int32_t x250 = INT32_MIN;
static int32_t t62 = 1600551;
uint16_t x262 = UINT16_MAX;
int16_t x263 = -1;
int64_t x277 = 2215897887852865LL;
int8_t x278 = INT8_MAX;
int64_t x284 = -1LL;
int32_t t71 = 1;
int32_t x293 = INT32_MAX;
int32_t t73 = -17;
int64_t x299 = -1LL;
uint32_t x300 = 488485U;
volatile int32_t t74 = -87;
volatile uint16_t x302 = 2U;
volatile int64_t t75 = -815627LL;
int32_t t76 = 844146;
int8_t x311 = 11;
static int16_t x317 = INT16_MAX;
static int8_t x318 = -36;
volatile int32_t t79 = -1;
volatile uint64_t x322 = 26204271529LLU;
int32_t x323 = INT32_MIN;
volatile uint32_t x334 = 1108U;
int8_t x342 = 1;
uint32_t x353 = 180U;
int32_t x358 = -1450;
int16_t x360 = -1202;
int8_t x361 = INT8_MIN;
int64_t x369 = -22869121032858LL;
static int8_t x370 = INT8_MIN;
uint16_t x372 = 29U;
int32_t x374 = 536;
int8_t x389 = 3;
volatile uint32_t x396 = UINT32_MAX;
int32_t x399 = -1;
int64_t x400 = 7999359221748LL;
static uint64_t x401 = UINT64_MAX;
static int64_t x404 = 59565207102LL;
uint8_t x406 = 63U;
static int32_t x407 = INT32_MIN;
uint8_t x408 = 33U;
int32_t t103 = 7;
volatile int32_t t107 = -501354580;
volatile int16_t x436 = INT16_MAX;
static int8_t x443 = INT8_MIN;
int16_t x446 = -603;
volatile int64_t x449 = -1LL;
static int64_t x454 = -1275736079LL;
uint64_t x459 = 2080726172506193LLU;
static uint32_t x464 = UINT32_MAX;
int8_t x469 = 3;
int64_t x471 = INT64_MIN;
volatile int8_t x474 = -4;
static volatile int16_t x488 = INT16_MIN;
uint16_t x490 = 2788U;
int64_t x494 = INT64_MIN;
int8_t x498 = -1;
int64_t x501 = INT64_MIN;
uint16_t x504 = 14U;
uint64_t x511 = 608618LLU;
static int8_t x512 = INT8_MIN;
uint32_t x520 = 7010862U;
int32_t x523 = -1;
int64_t x525 = -1LL;
volatile uint16_t x526 = 200U;
int32_t x528 = INT32_MIN;
volatile uint32_t x530 = UINT32_MAX;
int8_t x534 = -1;
uint64_t x536 = UINT64_MAX;
uint32_t x537 = 607801U;
uint64_t x539 = 15640661LLU;
volatile uint32_t x540 = UINT32_MAX;
volatile uint32_t t134 = 11320U;
int16_t x542 = INT16_MIN;
int32_t x544 = INT32_MIN;
uint16_t x556 = 0U;
int64_t x560 = INT64_MIN;
int8_t x561 = INT8_MAX;
int32_t x569 = INT32_MAX;
int64_t x573 = -1LL;
int32_t t144 = -399780980;
volatile int16_t x582 = INT16_MIN;
int16_t x583 = INT16_MAX;
volatile int8_t x585 = INT8_MAX;
static int16_t x586 = -1430;
int32_t x591 = 220943;
int8_t x594 = INT8_MAX;
uint8_t x602 = 0U;
int64_t t150 = 39LL;
volatile uint16_t x606 = UINT16_MAX;
uint32_t x610 = UINT32_MAX;
int16_t x611 = -1;
int16_t x612 = 0;
int32_t t154 = -340687517;
uint32_t x623 = 970988959U;
volatile uint16_t x628 = 1U;
volatile int32_t t157 = -23101;
int16_t x635 = 3;
static int32_t x643 = -12402942;
int64_t x644 = -1LL;
static int32_t t160 = -8899;
uint32_t x651 = 3909U;
uint8_t x653 = 25U;
uint64_t x654 = 93077724LLU;
static uint64_t x655 = 855253766214193LLU;
uint64_t x659 = UINT64_MAX;
static uint32_t x661 = 5950154U;
volatile int16_t x664 = INT16_MIN;
volatile uint32_t x666 = UINT32_MAX;
volatile uint16_t x672 = 1U;
volatile int8_t x675 = INT8_MAX;
int64_t x680 = INT64_MAX;
volatile uint32_t x681 = UINT32_MAX;
int16_t x684 = INT16_MIN;
int32_t x692 = INT32_MIN;
static volatile uint8_t x698 = 55U;
static volatile int32_t t174 = 2771892;
static volatile uint16_t x706 = 4250U;
uint8_t x707 = 57U;
static int16_t x713 = INT16_MIN;
static int32_t t179 = -3;
int16_t x725 = INT16_MIN;
static volatile int8_t x731 = -1;
int8_t x732 = INT8_MAX;
volatile int32_t t183 = -6;
static volatile int8_t x738 = -1;
int8_t x742 = -1;
int64_t t185 = INT64_MAX;
uint32_t x747 = UINT32_MAX;
uint64_t x748 = 6754376551617573LLU;
volatile int32_t t186 = 14785655;
uint64_t x761 = 2723418342LLU;
volatile int16_t x767 = INT16_MIN;
uint64_t t191 = 41850LLU;
int32_t x769 = -24338575;
uint32_t x770 = UINT32_MAX;
int32_t x772 = INT32_MIN;
uint32_t x776 = 176237U;
volatile int16_t x778 = INT16_MAX;
int16_t x785 = INT16_MAX;


void f0(void) {
    	volatile int64_t x2 = -46LL;
	static int32_t x3 = INT32_MAX;
	volatile int64_t x4 = INT64_MAX;
	static volatile int32_t t0 = -500614015;

    t0 = (x1^(x2!=(x3|x4)));

    if (t0 != 65534) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 4U;
	int16_t x6 = INT16_MIN;
	int16_t x7 = INT16_MAX;
	int64_t x8 = -1891LL;
	static int32_t t1 = -30458139;

    t1 = (x5^(x6!=(x7|x8)));

    if (t1 != 5) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x10 = INT8_MAX;
	static int8_t x11 = -1;
	volatile uint32_t t2 = 111170U;

    t2 = (x9^(x10!=(x11|x12)));

    if (t2 != 4294967294U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x16 = INT32_MIN;
	int32_t t3 = -559116;

    t3 = (x13^(x14!=(x15|x16)));

    if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x18 = UINT64_MAX;
	int16_t x19 = INT16_MIN;
	volatile int64_t x20 = 234524915761955890LL;
	volatile int32_t t4 = -4733177;

    t4 = (x17^(x18!=(x19|x20)));

    if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 24228U;
	static uint8_t x22 = 5U;
	static volatile int32_t x23 = 866452;
	int8_t x24 = -37;

    t5 = (x21^(x22!=(x23|x24)));

    if (t5 != 24229) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -2380;
	int16_t x27 = 187;
	volatile int64_t x28 = INT64_MIN;

    t6 = (x25^(x26!=(x27|x28)));

    if (t6 != -2379) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	static int8_t x30 = 61;
	int16_t x31 = INT16_MIN;
	int32_t x32 = INT32_MIN;

    t7 = (x29^(x30!=(x31|x32)));

    if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	static int8_t x34 = INT8_MIN;
	uint32_t x36 = UINT32_MAX;
	int32_t t8 = 125300;

    t8 = (x33^(x34!=(x35|x36)));

    if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = INT64_MIN;
	static uint8_t x38 = 3U;
	int32_t x39 = -1;
	static uint32_t x40 = 23872U;
	int64_t t9 = -31LL;

    t9 = (x37^(x38!=(x39|x40)));

    if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x43 = INT32_MIN;
	static int32_t x44 = INT32_MAX;
	static volatile int32_t t10 = 16338312;

    t10 = (x41^(x42!=(x43|x44)));

    if (t10 != 32766) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = UINT32_MAX;
	int64_t x46 = INT64_MIN;
	uint64_t x47 = UINT64_MAX;
	uint64_t x48 = UINT64_MAX;
	static uint32_t t11 = 23006U;

    t11 = (x45^(x46!=(x47|x48)));

    if (t11 != 4294967294U) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x49 = 20U;
	static int64_t x50 = INT64_MAX;
	volatile uint64_t x51 = 14140891933702243LLU;
	int64_t x52 = 50070834LL;
	int32_t t12 = -1339;

    t12 = (x49^(x50!=(x51|x52)));

    if (t12 != 21) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = INT16_MIN;
	int16_t x54 = -1;
	volatile int32_t t13 = -22;

    t13 = (x53^(x54!=(x55|x56)));

    if (t13 != -32767) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -172;
	int64_t x58 = INT64_MAX;
	static int64_t x59 = INT64_MAX;
	volatile int8_t x60 = 1;
	int32_t t14 = -2;

    t14 = (x57^(x58!=(x59|x60)));

    if (t14 != -172) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	uint16_t x63 = 29U;
	int64_t t15 = 5340475LL;

    t15 = (x61^(x62!=(x63|x64)));

    if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = -1LL;
	static volatile int16_t x66 = INT16_MIN;
	uint8_t x67 = UINT8_MAX;
	int16_t x68 = INT16_MAX;

    t16 = (x65^(x66!=(x67|x68)));

    if (t16 != -2LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 3U;
	static volatile uint32_t x70 = UINT32_MAX;
	int8_t x71 = -1;
	static int8_t x72 = 18;
	volatile int32_t t17 = -402;

    t17 = (x69^(x70!=(x71|x72)));

    if (t17 != 3) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -68623925289982509LL;
	int64_t x74 = INT64_MAX;
	int32_t x76 = INT32_MIN;
	static int64_t t18 = 8LL;

    t18 = (x73^(x74!=(x75|x76)));

    if (t18 != -68623925289982510LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint64_t x78 = 288151274LLU;
	volatile int64_t x79 = 17LL;
	uint32_t x80 = 1316370U;
	int64_t t19 = -359825197629074016LL;

    t19 = (x77^(x78!=(x79|x80)));

    if (t19 != -49732LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x81 = -1;
	int8_t x82 = INT8_MAX;
	int16_t x83 = INT16_MIN;
	int16_t x84 = 15;

    t20 = (x81^(x82!=(x83|x84)));

    if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x85 = 1U;
	static int64_t x87 = -1LL;
	volatile int32_t t21 = -595;

    t21 = (x85^(x86!=(x87|x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x89 = -13100;
	int8_t x90 = INT8_MIN;
	int8_t x91 = 26;
	int16_t x92 = -1;
	volatile int32_t t22 = 231597;

    t22 = (x89^(x90!=(x91|x92)));

    if (t22 != -13099) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	uint32_t x95 = UINT32_MAX;
	static int8_t x96 = INT8_MIN;

    t23 = (x93^(x94!=(x95|x96)));

    if (t23 != -2147483647) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = -31;
	int64_t x98 = 16658093LL;
	int64_t x99 = INT64_MIN;
	uint16_t x100 = 147U;
	volatile int32_t t24 = 4374401;

    t24 = (x97^(x98!=(x99|x100)));

    if (t24 != -32) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = -1;
	uint16_t x102 = 3U;
	static int32_t t25 = -16;

    t25 = (x101^(x102!=(x103|x104)));

    if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x105 = 37U;
	int16_t x106 = -1;
	int8_t x107 = 1;
	static int32_t x108 = INT32_MIN;

    t26 = (x105^(x106!=(x107|x108)));

    if (t26 != 36) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = -1;
	volatile uint32_t x110 = UINT32_MAX;
	int64_t x111 = -1LL;

    t27 = (x109^(x110!=(x111|x112)));

    if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x113 = INT16_MAX;
	static volatile uint32_t x114 = 15828U;
	int32_t x116 = -1;
	volatile int32_t t28 = 476050641;

    t28 = (x113^(x114!=(x115|x116)));

    if (t28 != 32766) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	uint16_t x118 = UINT16_MAX;
	int32_t t29 = -78;

    t29 = (x117^(x118!=(x119|x120)));

    if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MAX;
	static int8_t x122 = -1;
	static int32_t x123 = 107;
	int64_t t30 = -2307946349810824LL;

    t30 = (x121^(x122!=(x123|x124)));

    if (t30 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -7;
	uint32_t x126 = UINT32_MAX;
	static int32_t x127 = INT32_MAX;
	static int32_t t31 = -789882;

    t31 = (x125^(x126!=(x127|x128)));

    if (t31 != -8) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	uint8_t x130 = UINT8_MAX;
	int8_t x131 = INT8_MIN;
	int64_t t32 = -670471406LL;

    t32 = (x129^(x130!=(x131|x132)));

    if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x135 = INT64_MIN;
	int16_t x136 = 214;
	volatile int64_t t33 = 1115309958013428706LL;

    t33 = (x133^(x134!=(x135|x136)));

    if (t33 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 0U;
	uint16_t x138 = 16U;
	static int16_t x139 = 0;
	int16_t x140 = INT16_MIN;

    t34 = (x137^(x138!=(x139|x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -164;
	static uint64_t x143 = UINT64_MAX;
	int32_t x144 = 2117;
	int32_t t35 = -5953;

    t35 = (x141^(x142!=(x143|x144)));

    if (t35 != -163) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = 236533356084554LL;
	static int64_t x146 = INT64_MIN;
	int8_t x147 = INT8_MAX;
	static uint8_t x148 = 21U;
	volatile int64_t t36 = 7098552LL;

    t36 = (x145^(x146!=(x147|x148)));

    if (t36 != 236533356084555LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x150 = INT8_MAX;
	static volatile int16_t x151 = INT16_MIN;
	int64_t x152 = 1LL;
	static int32_t t37 = -127;

    t37 = (x149^(x150!=(x151|x152)));

    if (t37 != -163) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = 4U;
	uint16_t x154 = 186U;
	volatile int16_t x155 = INT16_MAX;
	volatile int64_t x156 = -1925250673615217748LL;
	volatile int32_t t38 = -176;

    t38 = (x153^(x154!=(x155|x156)));

    if (t38 != 5) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 2U;
	int8_t x158 = 10;
	volatile int16_t x159 = -1;
	volatile uint64_t x160 = UINT64_MAX;

    t39 = (x157^(x158!=(x159|x160)));

    if (t39 != 3) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = -1;
	int8_t x162 = -1;
	int8_t x163 = 2;
	uint16_t x164 = 5924U;
	int32_t t40 = 11;

    t40 = (x161^(x162!=(x163|x164)));

    if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	int32_t x166 = -1;
	uint32_t x167 = 1166739086U;
	volatile int32_t x168 = 99030;
	int32_t t41 = -54188;

    t41 = (x165^(x166!=(x167|x168)));

    if (t41 != -32767) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x170 = 27082LLU;
	int16_t x171 = INT16_MAX;
	int8_t x172 = INT8_MIN;
	volatile int32_t t42 = 0;

    t42 = (x169^(x170!=(x171|x172)));

    if (t42 != 254) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = -109;
	uint32_t x174 = 136U;
	volatile uint64_t x175 = 27550239009869LLU;
	uint64_t x176 = 215754608LLU;
	volatile int32_t t43 = -843673;

    t43 = (x173^(x174!=(x175|x176)));

    if (t43 != -110) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = 12020;
	int8_t x178 = INT8_MAX;
	uint16_t x179 = 22U;
	volatile int32_t t44 = 5101678;

    t44 = (x177^(x178!=(x179|x180)));

    if (t44 != 12020) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x183 = INT16_MIN;
	static int8_t x184 = INT8_MIN;

    t45 = (x181^(x182!=(x183|x184)));

    if (t45 != 126) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x187 = INT8_MIN;
	int16_t x188 = -83;
	int64_t t46 = 122579LL;

    t46 = (x185^(x186!=(x187|x188)));

    if (t46 != -2LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x190 = -1;
	static int64_t x191 = -5LL;
	static uint8_t x192 = UINT8_MAX;
	volatile int32_t t47 = 7939;

    t47 = (x189^(x190!=(x191|x192)));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = -3152606324088271LL;
	int8_t x194 = -1;
	uint8_t x195 = UINT8_MAX;
	static int8_t x196 = INT8_MAX;
	static int64_t t48 = -9530325LL;

    t48 = (x193^(x194!=(x195|x196)));

    if (t48 != -3152606324088272LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 0U;
	int32_t x198 = INT32_MIN;
	int8_t x199 = 6;
	uint8_t x200 = 0U;

    t49 = (x197^(x198!=(x199|x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = 18506U;
	volatile int8_t x203 = INT8_MAX;
	volatile uint32_t t50 = 1913U;

    t50 = (x201^(x202!=(x203|x204)));

    if (t50 != 18506U) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x206 = -1;
	volatile int64_t x208 = INT64_MIN;
	static volatile int32_t t51 = -155790;

    t51 = (x205^(x206!=(x207|x208)));

    if (t51 != -15710) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x210 = INT64_MIN;
	int16_t x211 = -2;
	int16_t x212 = -878;

    t52 = (x209^(x210!=(x211|x212)));

    if (t52 != 31) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = 217166217395LL;
	uint32_t x214 = 1U;
	static uint16_t x215 = 688U;
	uint64_t x216 = 83LLU;

    t53 = (x213^(x214!=(x215|x216)));

    if (t53 != 217166217394LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x218 = -1LL;
	int16_t x220 = INT16_MIN;
	static int32_t t54 = -2;

    t54 = (x217^(x218!=(x219|x220)));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = INT64_MAX;
	int16_t x222 = INT16_MAX;
	static volatile int64_t x224 = INT64_MIN;
	volatile int64_t t55 = 706644966LL;

    t55 = (x221^(x222!=(x223|x224)));

    if (t55 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = 5636981;
	int64_t x226 = -1LL;
	int16_t x227 = 36;
	static int16_t x228 = INT16_MIN;
	int32_t t56 = 2288400;

    t56 = (x225^(x226!=(x227|x228)));

    if (t56 != 5636980) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = 36502961230LLU;
	int8_t x230 = -8;
	static uint32_t x231 = UINT32_MAX;
	volatile uint16_t x232 = 20U;
	uint64_t t57 = 158725876302965LLU;

    t57 = (x229^(x230!=(x231|x232)));

    if (t57 != 36502961231LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = -35;
	volatile uint8_t x234 = 1U;
	static int32_t t58 = -3;

    t58 = (x233^(x234!=(x235|x236)));

    if (t58 != -36) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x237 = -1;
	uint32_t x238 = 32541633U;
	int8_t x240 = INT8_MIN;

    t59 = (x237^(x238!=(x239|x240)));

    if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x241 = -1;
	static uint64_t x242 = 15LLU;
	int8_t x243 = INT8_MIN;
	static int8_t x244 = INT8_MIN;
	int32_t t60 = -118411256;

    t60 = (x241^(x242!=(x243|x244)));

    if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x246 = 39610537559608LLU;
	int64_t x247 = INT64_MAX;
	volatile int16_t x248 = INT16_MIN;

    t61 = (x245^(x246!=(x247|x248)));

    if (t61 != 56163490U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x249 = 16U;
	static int64_t x251 = -1LL;
	int8_t x252 = -1;

    t62 = (x249^(x250!=(x251|x252)));

    if (t62 != 17) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x253 = -1;
	uint16_t x254 = 732U;
	volatile uint64_t x255 = UINT64_MAX;
	uint8_t x256 = 1U;
	int32_t t63 = -147741362;

    t63 = (x253^(x254!=(x255|x256)));

    if (t63 != -2) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 1295671121U;
	static int8_t x258 = -47;
	int8_t x259 = INT8_MIN;
	uint16_t x260 = 22U;
	volatile uint32_t t64 = 3946U;

    t64 = (x257^(x258!=(x259|x260)));

    if (t64 != 1295671120U) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = INT16_MAX;
	static uint8_t x264 = 3U;
	static volatile int32_t t65 = -273511;

    t65 = (x261^(x262!=(x263|x264)));

    if (t65 != 32766) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x265 = UINT64_MAX;
	int64_t x266 = INT64_MIN;
	volatile int16_t x267 = -1;
	static int8_t x268 = INT8_MIN;
	uint64_t t66 = 3LLU;

    t66 = (x265^(x266!=(x267|x268)));

    if (t66 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = UINT16_MAX;
	static uint16_t x270 = 498U;
	volatile int8_t x271 = 7;
	uint64_t x272 = UINT64_MAX;
	static int32_t t67 = -18724;

    t67 = (x269^(x270!=(x271|x272)));

    if (t67 != 65534) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = UINT16_MAX;
	uint32_t x274 = 51705054U;
	int8_t x275 = -1;
	uint8_t x276 = 2U;
	volatile int32_t t68 = -216;

    t68 = (x273^(x274!=(x275|x276)));

    if (t68 != 65534) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x279 = UINT16_MAX;
	uint16_t x280 = 1U;
	static volatile int64_t t69 = 774321LL;

    t69 = (x277^(x278!=(x279|x280)));

    if (t69 != 2215897887852864LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MIN;
	static volatile int32_t x282 = -22960;
	uint32_t x283 = 26U;
	int64_t t70 = -148178249495LL;

    t70 = (x281^(x282!=(x283|x284)));

    if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = 14U;
	int8_t x286 = INT8_MIN;
	int64_t x287 = -1LL;
	int64_t x288 = INT64_MIN;

    t71 = (x285^(x286!=(x287|x288)));

    if (t71 != 15) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint32_t x289 = UINT32_MAX;
	int16_t x290 = INT16_MAX;
	int64_t x291 = INT64_MIN;
	int32_t x292 = -126743337;
	static uint32_t t72 = 480089529U;

    t72 = (x289^(x290!=(x291|x292)));

    if (t72 != 4294967294U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x294 = -77;
	static int16_t x295 = -1;
	int64_t x296 = 2798LL;

    t73 = (x293^(x294!=(x295|x296)));

    if (t73 != 2147483646) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MAX;
	volatile int16_t x298 = INT16_MIN;

    t74 = (x297^(x298!=(x299|x300)));

    if (t74 != 32766) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int64_t x301 = -1992687406LL;
	static int16_t x303 = -127;
	static int32_t x304 = INT32_MIN;

    t75 = (x301^(x302!=(x303|x304)));

    if (t75 != -1992687405LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -30;
	volatile int32_t x306 = -1;
	int32_t x307 = -23;
	static int16_t x308 = INT16_MIN;

    t76 = (x305^(x306!=(x307|x308)));

    if (t76 != -29) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x309 = UINT8_MAX;
	int8_t x310 = -1;
	int64_t x312 = INT64_MIN;
	volatile int32_t t77 = 505665513;

    t77 = (x309^(x310!=(x311|x312)));

    if (t77 != 254) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int32_t x313 = INT32_MIN;
	int64_t x314 = INT64_MIN;
	static int8_t x315 = INT8_MIN;
	uint8_t x316 = UINT8_MAX;
	volatile int32_t t78 = 1317509;

    t78 = (x313^(x314!=(x315|x316)));

    if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x319 = UINT32_MAX;
	uint64_t x320 = 429760529408LLU;

    t79 = (x317^(x318!=(x319|x320)));

    if (t79 != 32766) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MAX;
	uint64_t x324 = UINT64_MAX;
	volatile int32_t t80 = -2686;

    t80 = (x321^(x322!=(x323|x324)));

    if (t80 != 32766) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -747;
	uint8_t x326 = 99U;
	int8_t x327 = -1;
	int32_t x328 = INT32_MIN;
	int32_t t81 = -1832;

    t81 = (x325^(x326!=(x327|x328)));

    if (t81 != -748) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x329 = 536856330353LLU;
	int16_t x330 = INT16_MIN;
	int64_t x331 = -1LL;
	int32_t x332 = INT32_MIN;
	uint64_t t82 = 48460313233603LLU;

    t82 = (x329^(x330!=(x331|x332)));

    if (t82 != 536856330352LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = 46619192815670389LL;
	uint32_t x335 = 0U;
	static volatile int8_t x336 = INT8_MIN;
	volatile int64_t t83 = -200083306336769406LL;

    t83 = (x333^(x334!=(x335|x336)));

    if (t83 != 46619192815670388LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x337 = INT64_MIN;
	int8_t x338 = INT8_MIN;
	int64_t x339 = 2646069705039159LL;
	static uint32_t x340 = 25441072U;
	volatile int64_t t84 = 13534995344088LL;

    t84 = (x337^(x338!=(x339|x340)));

    if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = 2;
	static volatile uint64_t x343 = 13298254162777710LLU;
	uint64_t x344 = 8469081LLU;
	static int32_t t85 = -2006414;

    t85 = (x341^(x342!=(x343|x344)));

    if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = -27391612LL;
	static uint64_t x346 = 244849970720283776LLU;
	int64_t x347 = INT64_MIN;
	volatile int8_t x348 = INT8_MIN;
	static int64_t t86 = -46172684LL;

    t86 = (x345^(x346!=(x347|x348)));

    if (t86 != -27391611LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MAX;
	uint8_t x350 = UINT8_MAX;
	uint8_t x351 = 1U;
	static int8_t x352 = -1;
	int64_t t87 = 20058164203415LL;

    t87 = (x349^(x350!=(x351|x352)));

    if (t87 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x354 = 7515;
	static int64_t x355 = -21644367126LL;
	uint8_t x356 = UINT8_MAX;
	volatile uint32_t t88 = 334639U;

    t88 = (x353^(x354!=(x355|x356)));

    if (t88 != 181U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = -42;
	volatile int8_t x359 = 12;
	volatile int32_t t89 = 2017;

    t89 = (x357^(x358!=(x359|x360)));

    if (t89 != -41) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x362 = INT16_MIN;
	uint64_t x363 = UINT64_MAX;
	volatile int8_t x364 = -1;
	int32_t t90 = -981054;

    t90 = (x361^(x362!=(x363|x364)));

    if (t90 != -127) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x365 = 11210U;
	int16_t x366 = INT16_MAX;
	uint32_t x367 = 8530917U;
	uint32_t x368 = UINT32_MAX;
	uint32_t t91 = 96182U;

    t91 = (x365^(x366!=(x367|x368)));

    if (t91 != 11211U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x371 = INT16_MIN;
	static int64_t t92 = 5752LL;

    t92 = (x369^(x370!=(x371|x372)));

    if (t92 != -22869121032857LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x373 = -1LL;
	volatile int16_t x375 = INT16_MAX;
	volatile int64_t x376 = 177574782959436111LL;
	volatile int64_t t93 = 1311121823975207417LL;

    t93 = (x373^(x374!=(x375|x376)));

    if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x377 = INT32_MAX;
	static uint8_t x378 = 1U;
	uint64_t x379 = 14327LLU;
	uint64_t x380 = 8081810683128897LLU;
	volatile int32_t t94 = 209;

    t94 = (x377^(x378!=(x379|x380)));

    if (t94 != 2147483646) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x381 = 29464000LL;
	volatile int8_t x382 = INT8_MIN;
	volatile uint8_t x383 = 0U;
	static int64_t x384 = 1565641581076LL;
	static volatile int64_t t95 = -2278047018677232008LL;

    t95 = (x381^(x382!=(x383|x384)));

    if (t95 != 29464001LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = 1;
	uint8_t x386 = UINT8_MAX;
	int8_t x387 = INT8_MAX;
	int8_t x388 = INT8_MIN;
	static int32_t t96 = 2833;

    t96 = (x385^(x386!=(x387|x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x390 = INT16_MAX;
	int32_t x391 = INT32_MIN;
	static int32_t x392 = INT32_MIN;
	int32_t t97 = -17;

    t97 = (x389^(x390!=(x391|x392)));

    if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = INT8_MAX;
	static int8_t x394 = INT8_MIN;
	int8_t x395 = INT8_MAX;
	volatile int32_t t98 = 5318;

    t98 = (x393^(x394!=(x395|x396)));

    if (t98 != 126) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = INT8_MIN;
	uint64_t x398 = 0LLU;
	static volatile int32_t t99 = 131973322;

    t99 = (x397^(x398!=(x399|x400)));

    if (t99 != -127) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x402 = INT16_MAX;
	uint16_t x403 = UINT16_MAX;
	static volatile uint64_t t100 = 120LLU;

    t100 = (x401^(x402!=(x403|x404)));

    if (t100 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MIN;
	volatile int32_t t101 = 19;

    t101 = (x405^(x406!=(x407|x408)));

    if (t101 != -127) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = 25888U;
	static int16_t x410 = 318;
	int32_t x411 = 679260;
	int8_t x412 = -6;
	int32_t t102 = 96304725;

    t102 = (x409^(x410!=(x411|x412)));

    if (t102 != 25889) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x413 = -1;
	int64_t x414 = -45596467754497560LL;
	volatile uint8_t x415 = UINT8_MAX;
	int16_t x416 = 16036;

    t103 = (x413^(x414!=(x415|x416)));

    if (t103 != -2) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = -96;
	static int8_t x418 = INT8_MIN;
	volatile int32_t x419 = INT32_MAX;
	int8_t x420 = 0;
	volatile int32_t t104 = 1387;

    t104 = (x417^(x418!=(x419|x420)));

    if (t104 != -95) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MAX;
	int8_t x422 = INT8_MIN;
	int32_t x423 = -1;
	static int16_t x424 = 1;
	volatile int64_t t105 = 30457362LL;

    t105 = (x421^(x422!=(x423|x424)));

    if (t105 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MIN;
	int64_t x426 = 986311595703164103LL;
	uint8_t x427 = 1U;
	int16_t x428 = -1;
	int32_t t106 = -35581681;

    t106 = (x425^(x426!=(x427|x428)));

    if (t106 != -127) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = -18221;
	static volatile uint8_t x430 = 1U;
	volatile uint32_t x431 = 32096U;
	int16_t x432 = 49;

    t107 = (x429^(x430!=(x431|x432)));

    if (t107 != -18222) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x433 = 264U;
	volatile int8_t x434 = -1;
	uint64_t x435 = UINT64_MAX;
	volatile int32_t t108 = -330;

    t108 = (x433^(x434!=(x435|x436)));

    if (t108 != 264) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x437 = INT32_MIN;
	int64_t x438 = -1LL;
	int8_t x439 = -9;
	static uint16_t x440 = UINT16_MAX;
	int32_t t109 = INT32_MIN;

    t109 = (x437^(x438!=(x439|x440)));

    if (t109 != INT32_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -1;
	int16_t x442 = 1299;
	int16_t x444 = INT16_MAX;
	static int32_t t110 = 111705;

    t110 = (x441^(x442!=(x443|x444)));

    if (t110 != -2) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = UINT16_MAX;
	uint16_t x447 = 15197U;
	volatile int16_t x448 = INT16_MAX;
	volatile int32_t t111 = -958;

    t111 = (x445^(x446!=(x447|x448)));

    if (t111 != 65534) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x450 = 4357U;
	volatile uint8_t x451 = UINT8_MAX;
	volatile int32_t x452 = -1378;
	volatile int64_t t112 = -256729LL;

    t112 = (x449^(x450!=(x451|x452)));

    if (t112 != -2LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 1U;
	int64_t x455 = INT64_MIN;
	static volatile int64_t x456 = INT64_MIN;
	static volatile int32_t t113 = -1837880;

    t113 = (x453^(x454!=(x455|x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 3U;
	static int16_t x458 = INT16_MIN;
	static int16_t x460 = INT16_MIN;
	volatile uint32_t t114 = 44U;

    t114 = (x457^(x458!=(x459|x460)));

    if (t114 != 2U) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = -1;
	int64_t x462 = -1LL;
	volatile int8_t x463 = 0;
	volatile int32_t t115 = -12824;

    t115 = (x461^(x462!=(x463|x464)));

    if (t115 != -2) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x465 = 19U;
	volatile int8_t x466 = 15;
	static int8_t x467 = INT8_MAX;
	int32_t x468 = -273;
	static volatile int32_t t116 = -623;

    t116 = (x465^(x466!=(x467|x468)));

    if (t116 != 18) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int64_t x470 = INT64_MIN;
	volatile uint16_t x472 = 11U;
	volatile int32_t t117 = 405757512;

    t117 = (x469^(x470!=(x471|x472)));

    if (t117 != 2) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x473 = 29382422035LLU;
	static int16_t x475 = INT16_MIN;
	volatile int16_t x476 = INT16_MAX;
	uint64_t t118 = 186LLU;

    t118 = (x473^(x474!=(x475|x476)));

    if (t118 != 29382422034LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = 0;
	volatile int8_t x478 = INT8_MAX;
	int8_t x479 = INT8_MIN;
	int8_t x480 = INT8_MAX;
	volatile int32_t t119 = 989801119;

    t119 = (x477^(x478!=(x479|x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = -1;
	static int32_t x482 = INT32_MIN;
	int16_t x483 = INT16_MIN;
	static volatile int32_t x484 = INT32_MIN;
	int32_t t120 = -1;

    t120 = (x481^(x482!=(x483|x484)));

    if (t120 != -2) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x485 = 3U;
	int16_t x486 = -58;
	int16_t x487 = 0;
	volatile int32_t t121 = -1067;

    t121 = (x485^(x486!=(x487|x488)));

    if (t121 != 2) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x489 = INT8_MAX;
	int64_t x491 = INT64_MIN;
	uint8_t x492 = 9U;
	volatile int32_t t122 = -1372023;

    t122 = (x489^(x490!=(x491|x492)));

    if (t122 != 126) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x493 = 488844572U;
	int32_t x495 = INT32_MAX;
	int64_t x496 = INT64_MIN;
	uint32_t t123 = 5521892U;

    t123 = (x493^(x494!=(x495|x496)));

    if (t123 != 488844573U) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MIN;
	uint8_t x499 = 3U;
	int8_t x500 = -1;
	volatile int32_t t124 = 12;

    t124 = (x497^(x498!=(x499|x500)));

    if (t124 != -128) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x502 = 38U;
	static uint16_t x503 = 0U;
	volatile int64_t t125 = 74LL;

    t125 = (x501^(x502!=(x503|x504)));

    if (t125 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x505 = INT16_MAX;
	volatile uint8_t x506 = UINT8_MAX;
	uint16_t x507 = 4U;
	uint8_t x508 = UINT8_MAX;
	static int32_t t126 = -35940877;

    t126 = (x505^(x506!=(x507|x508)));

    if (t126 != 32767) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = 840336LL;
	int64_t x510 = INT64_MIN;
	volatile int64_t t127 = 435LL;

    t127 = (x509^(x510!=(x511|x512)));

    if (t127 != 840337LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x513 = -1;
	volatile uint8_t x514 = 33U;
	int16_t x515 = -1;
	volatile int64_t x516 = -1568LL;
	static int32_t t128 = 24386734;

    t128 = (x513^(x514!=(x515|x516)));

    if (t128 != -2) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x517 = 621U;
	int8_t x518 = INT8_MAX;
	static int32_t x519 = -425538;
	volatile uint32_t t129 = 378106U;

    t129 = (x517^(x518!=(x519|x520)));

    if (t129 != 620U) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MIN;
	volatile int64_t x522 = INT64_MIN;
	int8_t x524 = -1;
	int64_t t130 = 483572298370LL;

    t130 = (x521^(x522!=(x523|x524)));

    if (t130 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x527 = -1;
	int64_t t131 = -57370095892LL;

    t131 = (x525^(x526!=(x527|x528)));

    if (t131 != -2LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x529 = UINT64_MAX;
	volatile uint8_t x531 = 5U;
	int8_t x532 = INT8_MIN;
	volatile uint64_t t132 = 904333000948180535LLU;

    t132 = (x529^(x530!=(x531|x532)));

    if (t132 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = -113;
	int32_t x535 = -15;
	int32_t t133 = 425;

    t133 = (x533^(x534!=(x535|x536)));

    if (t133 != -113) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x538 = INT16_MIN;

    t134 = (x537^(x538!=(x539|x540)));

    if (t134 != 607800U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = 125;
	volatile uint16_t x543 = UINT16_MAX;
	int32_t t135 = -289267152;

    t135 = (x541^(x542!=(x543|x544)));

    if (t135 != 124) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = 1U;
	volatile int8_t x546 = -48;
	volatile int16_t x547 = -12;
	volatile uint8_t x548 = 29U;
	uint32_t t136 = 3U;

    t136 = (x545^(x546!=(x547|x548)));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x549 = -1;
	volatile uint16_t x550 = 3255U;
	int64_t x551 = -223736848LL;
	int32_t x552 = INT32_MIN;
	volatile int32_t t137 = -666258494;

    t137 = (x549^(x550!=(x551|x552)));

    if (t137 != -2) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MAX;
	uint64_t x554 = 152954011513LLU;
	int8_t x555 = 13;
	int64_t t138 = 59894202941LL;

    t138 = (x553^(x554!=(x555|x556)));

    if (t138 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x557 = INT16_MAX;
	volatile uint32_t x558 = UINT32_MAX;
	int64_t x559 = -1LL;
	static int32_t t139 = 908;

    t139 = (x557^(x558!=(x559|x560)));

    if (t139 != 32766) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x562 = 5LL;
	static int16_t x563 = -1;
	int16_t x564 = INT16_MAX;
	static int32_t t140 = -1051;

    t140 = (x561^(x562!=(x563|x564)));

    if (t140 != 126) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x565 = UINT64_MAX;
	static int8_t x566 = -1;
	volatile uint8_t x567 = 3U;
	uint8_t x568 = 74U;
	uint64_t t141 = 73LLU;

    t141 = (x565^(x566!=(x567|x568)));

    if (t141 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x570 = -555237739083403LL;
	int8_t x571 = -1;
	int64_t x572 = -15505LL;
	static volatile int32_t t142 = 436;

    t142 = (x569^(x570!=(x571|x572)));

    if (t142 != 2147483646) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x574 = 7U;
	volatile int8_t x575 = 2;
	uint32_t x576 = 1461911U;
	int64_t t143 = -85LL;

    t143 = (x573^(x574!=(x575|x576)));

    if (t143 != -2LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	volatile int8_t x578 = INT8_MIN;
	int64_t x579 = -6LL;
	static int8_t x580 = INT8_MAX;

    t144 = (x577^(x578!=(x579|x580)));

    if (t144 != -127) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MIN;
	int32_t x584 = INT32_MAX;
	volatile int32_t t145 = -254436376;

    t145 = (x581^(x582!=(x583|x584)));

    if (t145 != -2147483647) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x587 = 1U;
	int8_t x588 = INT8_MIN;
	volatile int32_t t146 = -3788653;

    t146 = (x585^(x586!=(x587|x588)));

    if (t146 != 126) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -822367;
	int16_t x590 = INT16_MIN;
	volatile int8_t x592 = -1;
	static int32_t t147 = -1;

    t147 = (x589^(x590!=(x591|x592)));

    if (t147 != -822368) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = -1;
	volatile int64_t x595 = -1LL;
	uint32_t x596 = 5020511U;
	int32_t t148 = -140380413;

    t148 = (x593^(x594!=(x595|x596)));

    if (t148 != -2) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = 1;
	int16_t x598 = -1;
	uint32_t x599 = UINT32_MAX;
	uint8_t x600 = 77U;
	volatile int32_t t149 = -1;

    t149 = (x597^(x598!=(x599|x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x601 = INT64_MIN;
	static int16_t x603 = 7886;
	volatile int8_t x604 = -1;

    t150 = (x601^(x602!=(x603|x604)));

    if (t150 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = UINT64_MAX;
	int16_t x607 = -60;
	uint64_t x608 = 7670034829327843641LLU;
	volatile uint64_t t151 = 138928125482013319LLU;

    t151 = (x605^(x606!=(x607|x608)));

    if (t151 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = -1;
	static volatile int32_t t152 = -1;

    t152 = (x609^(x610!=(x611|x612)));

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x613 = -8;
	static int64_t x614 = INT64_MAX;
	int16_t x615 = 0;
	uint32_t x616 = 81105182U;
	volatile int32_t t153 = -12;

    t153 = (x613^(x614!=(x615|x616)));

    if (t153 != -7) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x617 = INT16_MIN;
	int32_t x618 = INT32_MIN;
	int16_t x619 = -1;
	static int8_t x620 = -1;

    t154 = (x617^(x618!=(x619|x620)));

    if (t154 != -32767) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = -73;
	int64_t x622 = INT64_MIN;
	static int16_t x624 = INT16_MIN;
	int32_t t155 = -39250;

    t155 = (x621^(x622!=(x623|x624)));

    if (t155 != -74) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int8_t x625 = INT8_MAX;
	uint16_t x626 = UINT16_MAX;
	int16_t x627 = INT16_MAX;
	volatile int32_t t156 = 0;

    t156 = (x625^(x626!=(x627|x628)));

    if (t156 != 126) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = 8163;
	volatile int8_t x630 = INT8_MIN;
	volatile int64_t x631 = INT64_MAX;
	int16_t x632 = -1;

    t157 = (x629^(x630!=(x631|x632)));

    if (t157 != 8162) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x633 = -34502060;
	uint8_t x634 = UINT8_MAX;
	uint16_t x636 = UINT16_MAX;
	int32_t t158 = 31973304;

    t158 = (x633^(x634!=(x635|x636)));

    if (t158 != -34502059) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = 255;
	int64_t x638 = INT64_MIN;
	int16_t x639 = -1;
	uint32_t x640 = 216U;
	int32_t t159 = 15249634;

    t159 = (x637^(x638!=(x639|x640)));

    if (t159 != 254) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x641 = -15;
	int16_t x642 = INT16_MIN;

    t160 = (x641^(x642!=(x643|x644)));

    if (t160 != -16) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x645 = 2493803378LLU;
	uint64_t x646 = 1443LLU;
	uint64_t x647 = 15LLU;
	static int32_t x648 = INT32_MIN;
	uint64_t t161 = 7727630670283LLU;

    t161 = (x645^(x646!=(x647|x648)));

    if (t161 != 2493803379LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x649 = INT8_MIN;
	volatile int8_t x650 = -1;
	uint8_t x652 = UINT8_MAX;
	int32_t t162 = -18241;

    t162 = (x649^(x650!=(x651|x652)));

    if (t162 != -127) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x656 = -16181950555LL;
	int32_t t163 = 442913;

    t163 = (x653^(x654!=(x655|x656)));

    if (t163 != 24) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x657 = 40;
	uint32_t x658 = 8607U;
	volatile int16_t x660 = -1;
	volatile int32_t t164 = 5;

    t164 = (x657^(x658!=(x659|x660)));

    if (t164 != 41) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x662 = INT64_MAX;
	int16_t x663 = 1;
	uint32_t t165 = 8215432U;

    t165 = (x661^(x662!=(x663|x664)));

    if (t165 != 5950155U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = UINT8_MAX;
	volatile int32_t x667 = INT32_MAX;
	uint64_t x668 = 165576LLU;
	static int32_t t166 = 12680394;

    t166 = (x665^(x666!=(x667|x668)));

    if (t166 != 254) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x669 = -654;
	int64_t x670 = -60LL;
	static int64_t x671 = INT64_MAX;
	int32_t t167 = 2678357;

    t167 = (x669^(x670!=(x671|x672)));

    if (t167 != -653) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -23;
	int64_t x674 = INT64_MAX;
	int8_t x676 = 23;
	int32_t t168 = -57125371;

    t168 = (x673^(x674!=(x675|x676)));

    if (t168 != -24) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x677 = INT8_MIN;
	int32_t x678 = INT32_MIN;
	uint32_t x679 = 5431U;
	volatile int32_t t169 = -338;

    t169 = (x677^(x678!=(x679|x680)));

    if (t169 != -127) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x682 = INT32_MAX;
	int8_t x683 = -1;
	volatile uint32_t t170 = 0U;

    t170 = (x681^(x682!=(x683|x684)));

    if (t170 != 4294967294U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x685 = INT16_MIN;
	int64_t x686 = INT64_MIN;
	int16_t x687 = -1;
	volatile int8_t x688 = -1;
	int32_t t171 = -922804819;

    t171 = (x685^(x686!=(x687|x688)));

    if (t171 != -32767) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = UINT32_MAX;
	static int64_t x690 = 0LL;
	int32_t x691 = 53;
	uint32_t t172 = 2695886U;

    t172 = (x689^(x690!=(x691|x692)));

    if (t172 != 4294967294U) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x693 = UINT8_MAX;
	static int8_t x694 = INT8_MIN;
	int32_t x695 = -3710413;
	uint16_t x696 = 165U;
	volatile int32_t t173 = -419644371;

    t173 = (x693^(x694!=(x695|x696)));

    if (t173 != 254) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MIN;
	int16_t x699 = INT16_MIN;
	volatile int8_t x700 = INT8_MAX;

    t174 = (x697^(x698!=(x699|x700)));

    if (t174 != -127) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x701 = -30587910319723362LL;
	uint16_t x702 = 11U;
	int8_t x703 = -6;
	int32_t x704 = 7592;
	int64_t t175 = -116260814LL;

    t175 = (x701^(x702!=(x703|x704)));

    if (t175 != -30587910319723361LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x705 = 2LLU;
	static int32_t x708 = INT32_MIN;
	static volatile uint64_t t176 = 5504476832136480678LLU;

    t176 = (x705^(x706!=(x707|x708)));

    if (t176 != 3LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MAX;
	static uint32_t x710 = 92U;
	static int64_t x711 = INT64_MAX;
	uint8_t x712 = 1U;
	volatile int64_t t177 = 379379LL;

    t177 = (x709^(x710!=(x711|x712)));

    if (t177 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x714 = 59U;
	volatile int64_t x715 = 3228830LL;
	uint8_t x716 = UINT8_MAX;
	static volatile int32_t t178 = 1;

    t178 = (x713^(x714!=(x715|x716)));

    if (t178 != -32767) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MIN;
	int8_t x718 = INT8_MIN;
	int16_t x719 = INT16_MIN;
	uint32_t x720 = UINT32_MAX;

    t179 = (x717^(x718!=(x719|x720)));

    if (t179 != -32767) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x721 = -1;
	int64_t x722 = -1LL;
	int64_t x723 = -1LL;
	int32_t x724 = INT32_MIN;
	int32_t t180 = -1388029;

    t180 = (x721^(x722!=(x723|x724)));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x726 = -14216512741LL;
	int32_t x727 = INT32_MIN;
	static int16_t x728 = 3382;
	static volatile int32_t t181 = 76233701;

    t181 = (x725^(x726!=(x727|x728)));

    if (t181 != -32767) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = INT16_MIN;
	int16_t x730 = INT16_MIN;
	static int32_t t182 = 10;

    t182 = (x729^(x730!=(x731|x732)));

    if (t182 != -32767) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x733 = INT16_MIN;
	int32_t x734 = INT32_MIN;
	static int8_t x735 = -1;
	int8_t x736 = -23;

    t183 = (x733^(x734!=(x735|x736)));

    if (t183 != -32767) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x737 = -2;
	int64_t x739 = 12LL;
	int32_t x740 = INT32_MIN;
	static int32_t t184 = 95579;

    t184 = (x737^(x738!=(x739|x740)));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MAX;
	int32_t x743 = -220670480;
	uint32_t x744 = UINT32_MAX;

    t185 = (x741^(x742!=(x743|x744)));

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x745 = -1;
	static uint32_t x746 = UINT32_MAX;

    t186 = (x745^(x746!=(x747|x748)));

    if (t186 != -2) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MAX;
	int16_t x750 = 1;
	int16_t x751 = -1;
	static uint64_t x752 = 249799LLU;
	static volatile int32_t t187 = -1884317;

    t187 = (x749^(x750!=(x751|x752)));

    if (t187 != 2147483646) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x753 = 15U;
	int64_t x754 = INT64_MAX;
	uint8_t x755 = 43U;
	int8_t x756 = INT8_MIN;
	static volatile int32_t t188 = -9525;

    t188 = (x753^(x754!=(x755|x756)));

    if (t188 != 14) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = -1LL;
	volatile uint16_t x758 = UINT16_MAX;
	volatile int16_t x759 = INT16_MAX;
	volatile int64_t x760 = INT64_MIN;
	static int64_t t189 = 367430289LL;

    t189 = (x757^(x758!=(x759|x760)));

    if (t189 != -2LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x762 = INT8_MAX;
	uint16_t x763 = 65U;
	int8_t x764 = INT8_MIN;
	uint64_t t190 = 188019280626038400LLU;

    t190 = (x761^(x762!=(x763|x764)));

    if (t190 != 2723418343LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x765 = 11245081LLU;
	static int8_t x766 = INT8_MAX;
	static int16_t x768 = INT16_MAX;

    t191 = (x765^(x766!=(x767|x768)));

    if (t191 != 11245080LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x771 = -1;
	static int32_t t192 = 393;

    t192 = (x769^(x770!=(x771|x772)));

    if (t192 != -24338575) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = UINT32_MAX;
	uint8_t x774 = 32U;
	static volatile int8_t x775 = 48;
	static volatile uint32_t t193 = 42U;

    t193 = (x773^(x774!=(x775|x776)));

    if (t193 != 4294967294U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = 3U;
	static uint16_t x779 = UINT16_MAX;
	static int32_t x780 = -1;
	static int32_t t194 = -368870708;

    t194 = (x777^(x778!=(x779|x780)));

    if (t194 != 2) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MIN;
	volatile int16_t x782 = INT16_MIN;
	int32_t x783 = -512080433;
	static int16_t x784 = INT16_MAX;
	int32_t t195 = 228185349;

    t195 = (x781^(x782!=(x783|x784)));

    if (t195 != -127) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x786 = 91291U;
	uint8_t x787 = UINT8_MAX;
	uint64_t x788 = UINT64_MAX;
	volatile int32_t t196 = 175730689;

    t196 = (x785^(x786!=(x787|x788)));

    if (t196 != 32766) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x789 = INT16_MIN;
	volatile uint16_t x790 = 3124U;
	int16_t x791 = INT16_MIN;
	int32_t x792 = -1307;
	volatile int32_t t197 = 3;

    t197 = (x789^(x790!=(x791|x792)));

    if (t197 != -32767) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = 5240LL;
	uint16_t x794 = 1306U;
	int64_t x795 = INT64_MIN;
	int32_t x796 = 59;
	volatile int64_t t198 = -98293LL;

    t198 = (x793^(x794!=(x795|x796)));

    if (t198 != 5241LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x797 = INT16_MIN;
	int8_t x798 = -7;
	int64_t x799 = INT64_MAX;
	int64_t x800 = INT64_MIN;
	volatile int32_t t199 = 1;

    t199 = (x797^(x798!=(x799|x800)));

    if (t199 != -32767) { NG(); } else { ; }
	
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


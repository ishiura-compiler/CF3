
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

int16_t x6 = INT16_MIN;
int32_t x7 = INT32_MAX;
uint16_t x8 = 574U;
int16_t x11 = -1;
volatile int64_t x12 = -1LL;
static int16_t x16 = 214;
uint16_t x18 = 43U;
static volatile int32_t t5 = 301459053;
int64_t x30 = -1LL;
uint8_t x33 = UINT8_MAX;
static int32_t x35 = -93;
int64_t t8 = -298780745955LL;
static int16_t x39 = INT16_MAX;
int16_t x40 = 2;
uint64_t x44 = 1074446625370LLU;
static int64_t x51 = INT64_MIN;
volatile int16_t x54 = INT16_MIN;
int8_t x57 = -1;
int16_t x58 = INT16_MAX;
int64_t t15 = 24245676993LL;
int64_t t16 = -1491LL;
volatile uint16_t x70 = UINT16_MAX;
int64_t t17 = 19692860LL;
static uint64_t x73 = 321615LLU;
int32_t x74 = -1;
uint8_t x83 = 1U;
volatile int32_t x84 = -1;
volatile int64_t t20 = -28292137430945977LL;
int64_t x89 = -1LL;
volatile uint64_t t22 = 2044315656752470383LLU;
volatile uint64_t x98 = UINT64_MAX;
int32_t x120 = INT32_MIN;
int32_t x127 = INT32_MIN;
static uint64_t t31 = 546380LLU;
volatile int16_t x130 = INT16_MAX;
static uint64_t x133 = UINT64_MAX;
uint64_t x136 = 619329LLU;
int32_t t34 = -7;
static volatile int64_t t35 = 0LL;
uint64_t x149 = 4497LLU;
static int32_t x158 = INT32_MAX;
volatile int64_t t39 = -53LL;
volatile int32_t x163 = INT32_MIN;
uint64_t x164 = 5548233LLU;
static int64_t x166 = -2033170LL;
int64_t x178 = 1046718119LL;
int16_t x179 = -14267;
int64_t x181 = INT64_MAX;
int32_t x188 = INT32_MAX;
static volatile int8_t x190 = INT8_MAX;
volatile uint32_t x204 = UINT32_MAX;
uint32_t x205 = 342U;
int64_t x206 = -1LL;
uint16_t x207 = 1762U;
int8_t x213 = INT8_MIN;
int8_t x227 = INT8_MAX;
volatile int32_t x228 = INT32_MIN;
int64_t t56 = -180905265111457356LL;
int8_t x245 = -1;
int64_t x246 = -11755481814LL;
int8_t x248 = -3;
volatile int64_t x250 = INT64_MAX;
uint64_t x252 = 284635833171775LLU;
int32_t x263 = -1;
uint16_t x266 = 4U;
static int8_t x268 = -1;
uint64_t x272 = 1682749634039LLU;
int8_t x276 = -1;
uint8_t x281 = 7U;
uint64_t x283 = UINT64_MAX;
int32_t x285 = INT32_MAX;
int8_t x286 = -34;
static volatile uint32_t t68 = 874645987U;
uint64_t t69 = 140036512LLU;
uint64_t t70 = 558399898813098LLU;
static volatile int8_t x304 = INT8_MIN;
volatile uint32_t t72 = 924489U;
uint64_t t73 = 5827836647394145LLU;
static int8_t x320 = INT8_MIN;
volatile uint32_t t75 = 1U;
volatile uint64_t x322 = UINT64_MAX;
int16_t x324 = 2;
int8_t x330 = -1;
int32_t x332 = -12574;
uint32_t x335 = 29230795U;
int64_t t80 = -226990763584LL;
static volatile int32_t x344 = INT32_MAX;
static volatile int64_t t82 = 1LL;
int8_t x367 = -1;
static int8_t x368 = 0;
uint32_t t87 = 1U;
static volatile int64_t t88 = -206781847306029688LL;
uint8_t x385 = 1U;
static volatile int64_t t90 = -1151002346LL;
uint8_t x389 = 58U;
uint8_t x396 = UINT8_MAX;
int32_t x399 = 0;
int8_t x400 = INT8_MIN;
static int16_t x401 = 11;
volatile uint8_t x412 = 1U;
int32_t t96 = -91;
uint64_t x416 = 185403226LLU;
volatile int32_t x422 = INT32_MAX;
uint8_t x423 = 1U;
int64_t t98 = 1539348524250LL;
static int16_t x425 = INT16_MIN;
static volatile int32_t x426 = -1;
static int64_t x427 = 3676751229485938604LL;
volatile uint32_t t100 = 12211U;
static uint32_t x439 = UINT32_MAX;
uint16_t x443 = 186U;
static uint16_t x450 = UINT16_MAX;
int8_t x452 = INT8_MAX;
uint8_t x454 = 26U;
uint8_t x457 = 63U;
int16_t x462 = -1;
static int64_t x467 = INT64_MAX;
static uint16_t x473 = 1497U;
volatile uint64_t x475 = 105273LLU;
uint64_t x489 = 126150963750624044LLU;
volatile uint8_t x493 = 6U;
int16_t x503 = 0;
volatile int16_t x504 = -1;
uint16_t x511 = UINT16_MAX;
static int64_t x514 = INT64_MAX;
int8_t x515 = -18;
int64_t x517 = -1434591271309LL;
volatile int64_t t121 = 274LL;
int32_t x532 = 16;
volatile int8_t x534 = 9;
volatile int32_t x541 = 1077;
volatile int8_t x548 = INT8_MAX;
uint64_t x550 = 6538379663372LLU;
uint64_t t126 = 2273663LLU;
volatile int64_t x557 = INT64_MIN;
int8_t x562 = -1;
static uint8_t x564 = 0U;
uint32_t x567 = 357U;
volatile uint64_t x568 = 454263047139LLU;
int16_t x570 = INT16_MIN;
static uint64_t t133 = 2853465517673LLU;
uint8_t x587 = UINT8_MAX;
static int32_t x588 = -1;
static int32_t x592 = -1;
int16_t x594 = INT16_MAX;
int64_t x596 = INT64_MAX;
int64_t t136 = -1054291551365376LL;
uint8_t x610 = UINT8_MAX;
int32_t x616 = INT32_MIN;
uint64_t t140 = 12851464304010LLU;
int64_t x619 = INT64_MIN;
uint8_t x620 = UINT8_MAX;
volatile uint8_t x622 = 30U;
volatile int32_t x625 = INT32_MIN;
uint64_t x632 = 39LLU;
uint32_t x637 = 2U;
volatile uint64_t x645 = 19219420LLU;
int64_t x648 = 4498275951896770343LL;
int64_t x662 = INT64_MAX;
static uint64_t x663 = 21413900798665LLU;
int64_t x670 = INT64_MIN;
int32_t x674 = 1520287;
int8_t x687 = INT8_MIN;
volatile int64_t t157 = -118890014782702LL;
volatile uint8_t x689 = UINT8_MAX;
uint32_t x691 = 12750236U;
volatile int64_t t159 = -3907151820LL;
uint8_t x699 = UINT8_MAX;
int32_t x701 = INT32_MIN;
int32_t x703 = -1;
int8_t x706 = INT8_MAX;
volatile int16_t x707 = INT16_MIN;
uint8_t x708 = UINT8_MAX;
int16_t x709 = INT16_MAX;
uint32_t x712 = UINT32_MAX;
int64_t x714 = INT64_MIN;
uint8_t x717 = 93U;
int64_t x718 = INT64_MIN;
uint32_t x732 = 224993987U;
int16_t x733 = 12837;
uint32_t x734 = 41934U;
uint32_t x739 = 32311666U;
volatile int64_t t169 = -5360LL;
int64_t x748 = 1380997268LL;
volatile int64_t t170 = -273LL;
uint64_t x755 = 5191LLU;
static int32_t x759 = 2;
volatile int64_t x762 = INT64_MAX;
int64_t x763 = INT64_MIN;
volatile int16_t x764 = INT16_MAX;
int16_t x773 = -3;
int16_t x778 = 427;
int64_t x783 = INT64_MAX;
int32_t x787 = -1;
int8_t x795 = 25;
volatile int16_t x798 = INT16_MIN;
volatile uint64_t t183 = 1362019479LLU;
int8_t x807 = INT8_MIN;
uint64_t x811 = 101LLU;
static uint16_t x815 = UINT16_MAX;
int16_t x816 = INT16_MIN;
volatile int64_t x817 = INT64_MIN;
int8_t x819 = INT8_MIN;
static int8_t x825 = INT8_MIN;
static volatile int8_t x828 = 1;
static uint8_t x830 = 21U;
static uint8_t x832 = 0U;
int32_t x838 = -1;
uint16_t x839 = UINT16_MAX;
volatile int64_t x842 = 3942LL;
int64_t x843 = INT64_MIN;
volatile uint8_t x847 = UINT8_MAX;
uint8_t x848 = 13U;
uint64_t x850 = 248957529081208523LLU;
static int32_t x862 = INT32_MIN;
volatile int32_t x866 = -1;
uint8_t x867 = 3U;
int32_t x869 = INT32_MAX;
uint64_t x871 = 4973LLU;
volatile uint64_t t198 = 325907787LLU;
int32_t x873 = -8154096;
int8_t x875 = INT8_MIN;


void f0(void) {
    	volatile int64_t x1 = -5416222410828681LL;
	static int16_t x2 = -7;
	uint8_t x3 = 7U;
	static uint8_t x4 = UINT8_MAX;
	int64_t t0 = 2540253616491133LL;

    t0 = (((x1|x2)|x3)+x4);

    if (t0 != 254LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = INT64_MAX;
	volatile int64_t t1 = 14107020558355LL;

    t1 = (((x5|x6)|x7)+x8);

    if (t1 != 573LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	int64_t x10 = INT64_MIN;
	int64_t t2 = -5LL;

    t2 = (((x9|x10)|x11)+x12);

    if (t2 != -2LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 6322657U;
	uint8_t x14 = 5U;
	uint32_t x15 = 186U;
	volatile uint32_t t3 = 1269U;

    t3 = (((x13|x14)|x15)+x16);

    if (t3 != 6322901U) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = -1;
	int32_t x19 = -47357;
	uint32_t x20 = 3680U;
	volatile uint32_t t4 = 7U;

    t4 = (((x17|x18)|x19)+x20);

    if (t4 != 3679U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = -23;
	uint16_t x22 = UINT16_MAX;
	volatile uint8_t x23 = UINT8_MAX;
	static volatile int8_t x24 = INT8_MIN;

    t5 = (((x21|x22)|x23)+x24);

    if (t5 != -129) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = 14414;
	int64_t x26 = -1LL;
	static int16_t x27 = INT16_MIN;
	uint8_t x28 = UINT8_MAX;
	volatile int64_t t6 = 27738LL;

    t6 = (((x25|x26)|x27)+x28);

    if (t6 != 254LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MAX;
	int8_t x31 = INT8_MIN;
	int16_t x32 = INT16_MAX;
	static volatile int64_t t7 = -11500698941051458LL;

    t7 = (((x29|x30)|x31)+x32);

    if (t7 != 32766LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x34 = -169;
	volatile int64_t x36 = -1LL;

    t8 = (((x33|x34)|x35)+x36);

    if (t8 != -2LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 705655U;
	uint8_t x38 = UINT8_MAX;
	uint32_t t9 = 5646388U;

    t9 = (((x37|x38)|x39)+x40);

    if (t9 != 720897U) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	int32_t x42 = INT32_MIN;
	int64_t x43 = INT64_MIN;
	static uint64_t t10 = 149LLU;

    t10 = (((x41|x42)|x43)+x44);

    if (t10 != 1074446625369LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = 13043;
	static volatile int32_t x46 = -1;
	int64_t x47 = INT64_MIN;
	int64_t x48 = -48880LL;
	int64_t t11 = 107257642717976780LL;

    t11 = (((x45|x46)|x47)+x48);

    if (t11 != -48881LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x49 = 4U;
	int32_t x50 = 114237;
	int32_t x52 = -1;
	int64_t t12 = -413LL;

    t12 = (((x49|x50)|x51)+x52);

    if (t12 != -9223372036854661572LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = 1727;
	int8_t x55 = INT8_MAX;
	uint8_t x56 = 4U;
	volatile int32_t t13 = -1;

    t13 = (((x53|x54)|x55)+x56);

    if (t13 != -30973) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x59 = INT32_MIN;
	int16_t x60 = 3015;
	volatile int32_t t14 = -110092;

    t14 = (((x57|x58)|x59)+x60);

    if (t14 != 3014) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = 220649260LL;
	uint8_t x62 = 2U;
	int64_t x63 = -4149975815812163LL;
	static int8_t x64 = INT8_MAX;

    t15 = (((x61|x62)|x63)+x64);

    if (t15 != -4149975681408962LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	int16_t x66 = INT16_MIN;
	static int64_t x67 = INT64_MIN;
	volatile uint32_t x68 = 61U;

    t16 = (((x65|x66)|x67)+x68);

    if (t16 != -32707LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	volatile int64_t x71 = INT64_MIN;
	static uint16_t x72 = 26566U;

    t17 = (((x69|x70)|x71)+x72);

    if (t17 != -9223372036854683707LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x75 = UINT64_MAX;
	int64_t x76 = -1LL;
	uint64_t t18 = 43274986553047521LLU;

    t18 = (((x73|x74)|x75)+x76);

    if (t18 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = -1;
	static volatile uint16_t x78 = UINT16_MAX;
	int64_t x79 = 289525452LL;
	uint16_t x80 = 2910U;
	int64_t t19 = 638LL;

    t19 = (((x77|x78)|x79)+x80);

    if (t19 != 2909LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = UINT8_MAX;
	static volatile int64_t x82 = INT64_MIN;

    t20 = (((x81|x82)|x83)+x84);

    if (t20 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x85 = -1223;
	static int64_t x86 = -473643568801216LL;
	static int32_t x87 = INT32_MAX;
	static volatile int8_t x88 = INT8_MAX;
	int64_t t21 = -162362LL;

    t21 = (((x85|x86)|x87)+x88);

    if (t21 != 126LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x90 = -34510828300294501LL;
	volatile int8_t x91 = INT8_MAX;
	uint64_t x92 = UINT64_MAX;

    t22 = (((x89|x90)|x91)+x92);

    if (t22 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	volatile uint16_t x94 = 1509U;
	int8_t x95 = 62;
	volatile uint16_t x96 = 4U;
	static int32_t t23 = 0;

    t23 = (((x93|x94)|x95)+x96);

    if (t23 != -2147482109) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = 27;
	int64_t x99 = INT64_MIN;
	volatile uint64_t x100 = UINT64_MAX;
	volatile uint64_t t24 = 42112LLU;

    t24 = (((x97|x98)|x99)+x100);

    if (t24 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 5649U;
	int8_t x102 = INT8_MAX;
	uint8_t x103 = UINT8_MAX;
	int16_t x104 = -1;
	int32_t t25 = -15876;

    t25 = (((x101|x102)|x103)+x104);

    if (t25 != 5886) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x105 = INT32_MAX;
	static int64_t x106 = INT64_MIN;
	uint64_t x107 = 5LLU;
	int16_t x108 = INT16_MAX;
	uint64_t t26 = 51745549130453LLU;

    t26 = (((x105|x106)|x107)+x108);

    if (t26 != 9223372039002292222LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -15619;
	int64_t x110 = INT64_MIN;
	uint16_t x111 = 2677U;
	uint32_t x112 = 1216922U;
	int64_t t27 = 30269889311324399LL;

    t27 = (((x109|x110)|x111)+x112);

    if (t27 != 1203351LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = 0;
	uint64_t x114 = 19412940366846LLU;
	static int64_t x115 = INT64_MIN;
	int8_t x116 = -1;
	uint64_t t28 = 36LLU;

    t28 = (((x113|x114)|x115)+x116);

    if (t28 != 9223391449795142653LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = -1;
	uint64_t x118 = UINT64_MAX;
	int16_t x119 = -1;
	uint64_t t29 = 7303626482764LLU;

    t29 = (((x117|x118)|x119)+x120);

    if (t29 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = UINT64_MAX;
	volatile int16_t x122 = 10479;
	uint8_t x123 = UINT8_MAX;
	int32_t x124 = INT32_MAX;
	static volatile uint64_t t30 = 578810994150707648LLU;

    t30 = (((x121|x122)|x123)+x124);

    if (t30 != 2147483646LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x125 = UINT16_MAX;
	uint64_t x126 = UINT64_MAX;
	static int16_t x128 = 4347;

    t31 = (((x125|x126)|x127)+x128);

    if (t31 != 4346LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x129 = -5263;
	int64_t x131 = INT64_MIN;
	int16_t x132 = INT16_MAX;
	int64_t t32 = 941972LL;

    t32 = (((x129|x130)|x131)+x132);

    if (t32 != 32766LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x134 = INT32_MIN;
	uint16_t x135 = 593U;
	static volatile uint64_t t33 = 2051658LLU;

    t33 = (((x133|x134)|x135)+x136);

    if (t33 != 619328LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -1;
	static int16_t x138 = INT16_MAX;
	int32_t x139 = INT32_MIN;
	int8_t x140 = -1;

    t34 = (((x137|x138)|x139)+x140);

    if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MIN;
	int64_t x142 = -1LL;
	int16_t x143 = -22;
	volatile int64_t x144 = 51414LL;

    t35 = (((x141|x142)|x143)+x144);

    if (t35 != 51413LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = -5;
	uint64_t x146 = 120423830633440LLU;
	volatile int8_t x147 = -1;
	int64_t x148 = 101199LL;
	volatile uint64_t t36 = 3681LLU;

    t36 = (((x145|x146)|x147)+x148);

    if (t36 != 101198LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x150 = INT16_MAX;
	volatile uint32_t x151 = 1767815374U;
	uint8_t x152 = 26U;
	volatile uint64_t t37 = 18061733574LLU;

    t37 = (((x149|x150)|x151)+x152);

    if (t37 != 1767833625LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint32_t x153 = 221U;
	int8_t x154 = INT8_MAX;
	volatile uint64_t x155 = 12288LLU;
	uint8_t x156 = UINT8_MAX;
	uint64_t t38 = 4617131246643LLU;

    t38 = (((x153|x154)|x155)+x156);

    if (t38 != 12798LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x157 = -8383432266900LL;
	static uint32_t x159 = UINT32_MAX;
	uint8_t x160 = 58U;

    t39 = (((x157|x158)|x159)+x160);

    if (t39 != -8379481194439LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MAX;
	uint32_t x162 = UINT32_MAX;
	uint64_t t40 = 7LLU;

    t40 = (((x161|x162)|x163)+x164);

    if (t40 != 4300515528LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x165 = -19;
	int64_t x167 = INT64_MAX;
	int16_t x168 = -13221;
	volatile int64_t t41 = 12300049LL;

    t41 = (((x165|x166)|x167)+x168);

    if (t41 != -13222LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -11918;
	static uint32_t x170 = 342U;
	uint8_t x171 = 7U;
	uint32_t x172 = UINT32_MAX;
	uint32_t t42 = 1U;

    t42 = (((x169|x170)|x171)+x172);

    if (t42 != 4294955382U) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x173 = 2;
	static int64_t x174 = -1LL;
	volatile int8_t x175 = INT8_MAX;
	uint32_t x176 = 441U;
	int64_t t43 = -894237LL;

    t43 = (((x173|x174)|x175)+x176);

    if (t43 != 440LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x177 = 408886439U;
	uint16_t x180 = 22U;
	static int64_t t44 = -1695337LL;

    t44 = (((x177|x178)|x179)+x180);

    if (t44 != -259LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x182 = INT16_MAX;
	int16_t x183 = INT16_MIN;
	static volatile int32_t x184 = -1;
	volatile int64_t t45 = 1178231545527LL;

    t45 = (((x181|x182)|x183)+x184);

    if (t45 != -2LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MIN;
	static uint16_t x187 = 21074U;
	int32_t t46 = -185518;

    t46 = (((x185|x186)|x187)+x188);

    if (t46 != 2147471953) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = 0U;
	static uint16_t x191 = 6399U;
	static int16_t x192 = -1;
	volatile int32_t t47 = 27;

    t47 = (((x189|x190)|x191)+x192);

    if (t47 != 6398) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = 0;
	int8_t x194 = -1;
	uint32_t x195 = UINT32_MAX;
	volatile uint64_t x196 = UINT64_MAX;
	uint64_t t48 = 7819014LLU;

    t48 = (((x193|x194)|x195)+x196);

    if (t48 != 4294967294LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = -1;
	int16_t x198 = INT16_MAX;
	uint32_t x199 = 228U;
	int16_t x200 = 263;
	volatile uint32_t t49 = 8454333U;

    t49 = (((x197|x198)|x199)+x200);

    if (t49 != 262U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x201 = INT16_MIN;
	volatile uint16_t x202 = 31226U;
	uint16_t x203 = 5799U;
	static volatile uint32_t t50 = 158515U;

    t50 = (((x201|x202)|x203)+x204);

    if (t50 != 4294967294U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x208 = UINT32_MAX;
	volatile int64_t t51 = -69244976384459LL;

    t51 = (((x205|x206)|x207)+x208);

    if (t51 != 4294967294LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x214 = 94U;
	int32_t x215 = -889;
	static uint64_t x216 = 925145447552921356LLU;
	static uint64_t t52 = 367021269969343216LLU;

    t52 = (((x213|x214)|x215)+x216);

    if (t52 != 925145451847888619LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x217 = INT64_MIN;
	int16_t x218 = INT16_MIN;
	static uint64_t x219 = UINT64_MAX;
	static int32_t x220 = -1;
	static volatile uint64_t t53 = 2139175295060349966LLU;

    t53 = (((x217|x218)|x219)+x220);

    if (t53 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x221 = 123788119;
	static uint64_t x222 = UINT64_MAX;
	volatile int64_t x223 = -1LL;
	int32_t x224 = INT32_MIN;
	uint64_t t54 = 97428557080869100LLU;

    t54 = (((x221|x222)|x223)+x224);

    if (t54 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x225 = UINT32_MAX;
	volatile int8_t x226 = -1;
	uint32_t t55 = 50257U;

    t55 = (((x225|x226)|x227)+x228);

    if (t55 != 2147483647U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x229 = 83U;
	int64_t x230 = INT64_MAX;
	int64_t x231 = 162671868LL;
	int8_t x232 = -1;

    t56 = (((x229|x230)|x231)+x232);

    if (t56 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x233 = -1;
	int8_t x234 = 1;
	static uint16_t x235 = 1161U;
	uint16_t x236 = 5651U;
	int32_t t57 = -495423005;

    t57 = (((x233|x234)|x235)+x236);

    if (t57 != 5650) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x237 = -18;
	volatile uint64_t x238 = 57963995291850976LLU;
	static int32_t x239 = -1;
	uint8_t x240 = UINT8_MAX;
	uint64_t t58 = 3550762LLU;

    t58 = (((x237|x238)|x239)+x240);

    if (t58 != 254LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x247 = 1666;
	int64_t t59 = -3LL;

    t59 = (((x245|x246)|x247)+x248);

    if (t59 != -4LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x249 = INT16_MIN;
	volatile int32_t x251 = INT32_MAX;
	uint64_t t60 = 1793558LLU;

    t60 = (((x249|x250)|x251)+x252);

    if (t60 != 284635833171774LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x257 = INT32_MIN;
	static uint8_t x258 = UINT8_MAX;
	volatile uint8_t x259 = UINT8_MAX;
	int16_t x260 = -1;
	volatile int32_t t61 = -101847841;

    t61 = (((x257|x258)|x259)+x260);

    if (t61 != -2147483394) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x261 = 15U;
	int16_t x262 = 1;
	uint16_t x264 = 55U;
	int32_t t62 = 115845;

    t62 = (((x261|x262)|x263)+x264);

    if (t62 != 54) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x265 = INT8_MAX;
	uint16_t x267 = 9U;
	int32_t t63 = -1;

    t63 = (((x265|x266)|x267)+x268);

    if (t63 != 126) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x269 = 4U;
	uint32_t x270 = 125505U;
	uint32_t x271 = UINT32_MAX;
	volatile uint64_t t64 = 7496602LLU;

    t64 = (((x269|x270)|x271)+x272);

    if (t64 != 1687044601334LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x273 = 2U;
	int64_t x274 = -1738869132995174LL;
	int8_t x275 = -1;
	static volatile int64_t t65 = 444984LL;

    t65 = (((x273|x274)|x275)+x276);

    if (t65 != -2LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x277 = 0U;
	volatile int32_t x278 = INT32_MIN;
	uint16_t x279 = 50U;
	uint16_t x280 = 1752U;
	uint32_t t66 = 3016U;

    t66 = (((x277|x278)|x279)+x280);

    if (t66 != 2147485450U) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x282 = INT32_MIN;
	volatile int64_t x284 = INT64_MIN;
	uint64_t t67 = 124283LLU;

    t67 = (((x281|x282)|x283)+x284);

    if (t67 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x287 = 1458685730U;
	int8_t x288 = INT8_MAX;

    t68 = (((x285|x286)|x287)+x288);

    if (t68 != 126U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x289 = -26;
	uint64_t x290 = 287738316034LLU;
	static volatile uint16_t x291 = 8485U;
	int8_t x292 = INT8_MIN;

    t69 = (((x289|x290)|x291)+x292);

    if (t69 != 18446744073709551463LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x297 = UINT64_MAX;
	volatile int64_t x298 = INT64_MIN;
	int16_t x299 = -6946;
	volatile uint16_t x300 = UINT16_MAX;

    t70 = (((x297|x298)|x299)+x300);

    if (t70 != 65534LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x301 = 194U;
	int8_t x302 = 4;
	static int16_t x303 = INT16_MIN;
	int32_t t71 = 7651;

    t71 = (((x301|x302)|x303)+x304);

    if (t71 != -32698) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x305 = 1025;
	uint32_t x306 = UINT32_MAX;
	int16_t x307 = INT16_MIN;
	static int32_t x308 = 1;

    t72 = (((x305|x306)|x307)+x308);

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x309 = 37LL;
	uint64_t x310 = 112LLU;
	volatile int64_t x311 = INT64_MIN;
	static int8_t x312 = -1;

    t73 = (((x309|x310)|x311)+x312);

    if (t73 != 9223372036854775924LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x313 = INT32_MIN;
	uint32_t x314 = 5U;
	static int32_t x315 = INT32_MIN;
	int64_t x316 = -3018192LL;
	volatile int64_t t74 = -8217448LL;

    t74 = (((x313|x314)|x315)+x316);

    if (t74 != 2144465461LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x317 = 20U;
	static int32_t x318 = INT32_MAX;
	uint32_t x319 = 1482298U;

    t75 = (((x317|x318)|x319)+x320);

    if (t75 != 2147483519U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x321 = 13;
	volatile uint8_t x323 = 45U;
	uint64_t t76 = 460LLU;

    t76 = (((x321|x322)|x323)+x324);

    if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x325 = 25U;
	int16_t x326 = INT16_MAX;
	static int32_t x327 = -1;
	static int64_t x328 = 730087258115LL;
	int64_t t77 = -450300472467965LL;

    t77 = (((x325|x326)|x327)+x328);

    if (t77 != 730087258114LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x329 = -1;
	volatile int64_t x331 = INT64_MAX;
	static int64_t t78 = -11700440LL;

    t78 = (((x329|x330)|x331)+x332);

    if (t78 != -12575LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x333 = 14;
	int32_t x334 = INT32_MIN;
	int16_t x336 = INT16_MIN;
	volatile uint32_t t79 = 6U;

    t79 = (((x333|x334)|x335)+x336);

    if (t79 != 2176681679U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x337 = INT64_MIN;
	int16_t x338 = INT16_MIN;
	int16_t x339 = INT16_MIN;
	volatile int32_t x340 = INT32_MIN;

    t80 = (((x337|x338)|x339)+x340);

    if (t80 != -2147516416LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x341 = 31214U;
	int16_t x342 = -1;
	uint32_t x343 = 232U;
	volatile uint32_t t81 = 24U;

    t81 = (((x341|x342)|x343)+x344);

    if (t81 != 2147483646U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x345 = 4U;
	int16_t x346 = -22;
	int64_t x347 = -1LL;
	static int8_t x348 = -10;

    t82 = (((x345|x346)|x347)+x348);

    if (t82 != -11LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x349 = INT16_MIN;
	uint32_t x350 = UINT32_MAX;
	int16_t x351 = -1;
	int16_t x352 = INT16_MAX;
	static uint32_t t83 = 2293184U;

    t83 = (((x349|x350)|x351)+x352);

    if (t83 != 32766U) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x353 = INT32_MIN;
	uint8_t x354 = 25U;
	uint32_t x355 = 13691424U;
	uint16_t x356 = 3U;
	volatile uint32_t t84 = 55812850U;

    t84 = (((x353|x354)|x355)+x356);

    if (t84 != 2161175100U) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x361 = -4;
	static int64_t x362 = INT64_MIN;
	volatile uint32_t x363 = 92429912U;
	int32_t x364 = -1;
	volatile int64_t t85 = 21069297240LL;

    t85 = (((x361|x362)|x363)+x364);

    if (t85 != -5LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x365 = INT8_MAX;
	int8_t x366 = INT8_MAX;
	volatile int32_t t86 = 0;

    t86 = (((x365|x366)|x367)+x368);

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x369 = 60152U;
	int16_t x370 = INT16_MIN;
	volatile int32_t x371 = INT32_MIN;
	static volatile int32_t x372 = -1;

    t87 = (((x369|x370)|x371)+x372);

    if (t87 != 4294961911U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x373 = INT64_MIN;
	int16_t x374 = INT16_MIN;
	static int64_t x375 = 12343034793LL;
	int16_t x376 = INT16_MIN;

    t88 = (((x373|x374)|x375)+x376);

    if (t88 != -48215LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x377 = INT8_MAX;
	int64_t x378 = INT64_MAX;
	uint32_t x379 = UINT32_MAX;
	static int64_t x380 = INT64_MIN;
	volatile int64_t t89 = 35767160166472498LL;

    t89 = (((x377|x378)|x379)+x380);

    if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x386 = INT64_MIN;
	static volatile int8_t x387 = 22;
	volatile int32_t x388 = INT32_MAX;

    t90 = (((x385|x386)|x387)+x388);

    if (t90 != -9223372034707292138LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x390 = 9356U;
	int64_t x391 = INT64_MIN;
	uint64_t x392 = 16995211327LLU;
	uint64_t t91 = 43911517LLU;

    t91 = (((x389|x390)|x391)+x392);

    if (t91 != 9223372053849996541LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x393 = UINT8_MAX;
	int8_t x394 = INT8_MIN;
	static uint64_t x395 = 39309839149LLU;
	uint64_t t92 = 477907751620773LLU;

    t92 = (((x393|x394)|x395)+x396);

    if (t92 != 254LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x397 = INT16_MAX;
	uint32_t x398 = 2693331U;
	static uint32_t t93 = 53552452U;

    t93 = (((x397|x398)|x399)+x400);

    if (t93 != 2719615U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x402 = UINT64_MAX;
	volatile int32_t x403 = -273;
	volatile uint64_t x404 = 35516107610819561LLU;
	static uint64_t t94 = 50594276LLU;

    t94 = (((x401|x402)|x403)+x404);

    if (t94 != 35516107610819560LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x405 = 0;
	volatile uint16_t x406 = 2U;
	static int16_t x407 = INT16_MAX;
	int8_t x408 = -1;
	volatile int32_t t95 = 1644309;

    t95 = (((x405|x406)|x407)+x408);

    if (t95 != 32766) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x409 = -1;
	volatile int8_t x410 = -1;
	static uint8_t x411 = UINT8_MAX;

    t96 = (((x409|x410)|x411)+x412);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x413 = 204505801U;
	volatile int32_t x414 = INT32_MIN;
	uint32_t x415 = 0U;
	volatile uint64_t t97 = 13555504LLU;

    t97 = (((x413|x414)|x415)+x416);

    if (t97 != 2537392675LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x421 = -76059675;
	volatile int64_t x424 = 2914LL;

    t98 = (((x421|x422)|x423)+x424);

    if (t98 != 2913LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x428 = 7;
	int64_t t99 = -101431650436LL;

    t99 = (((x425|x426)|x427)+x428);

    if (t99 != 6LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x429 = 47369U;
	uint32_t x430 = 892624U;
	uint32_t x431 = UINT32_MAX;
	volatile int8_t x432 = INT8_MIN;

    t100 = (((x429|x430)|x431)+x432);

    if (t100 != 4294967167U) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x433 = INT64_MAX;
	int32_t x434 = -49312;
	static uint64_t x435 = 10850LLU;
	int32_t x436 = INT32_MIN;
	uint64_t t101 = 1328242146761LLU;

    t101 = (((x433|x434)|x435)+x436);

    if (t101 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x437 = INT16_MIN;
	int64_t x438 = 45637LL;
	int16_t x440 = INT16_MIN;
	static volatile int64_t t102 = -131127917034LL;

    t102 = (((x437|x438)|x439)+x440);

    if (t102 != -32769LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x441 = INT32_MIN;
	int64_t x442 = INT64_MIN;
	uint32_t x444 = 1075358485U;
	volatile int64_t t103 = 84373437LL;

    t103 = (((x441|x442)|x443)+x444);

    if (t103 != -1072124977LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x445 = -1;
	static int8_t x446 = 1;
	static int8_t x447 = 46;
	uint8_t x448 = 0U;
	int32_t t104 = 20474421;

    t104 = (((x445|x446)|x447)+x448);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x449 = 13567;
	uint16_t x451 = UINT16_MAX;
	int32_t t105 = 19037;

    t105 = (((x449|x450)|x451)+x452);

    if (t105 != 65662) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x453 = INT32_MAX;
	int32_t x455 = -1;
	int32_t x456 = -1;
	int32_t t106 = 30;

    t106 = (((x453|x454)|x455)+x456);

    if (t106 != -2) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x458 = 80U;
	volatile int16_t x459 = -1158;
	uint64_t x460 = UINT64_MAX;
	uint64_t t107 = 7403520188LLU;

    t107 = (((x457|x458)|x459)+x460);

    if (t107 != 18446744073709550462LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x461 = 0;
	volatile int64_t x463 = INT64_MIN;
	static int32_t x464 = INT32_MIN;
	static volatile int64_t t108 = -7620486724540775LL;

    t108 = (((x461|x462)|x463)+x464);

    if (t108 != -2147483649LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x465 = 35332590538320555LLU;
	static volatile int64_t x466 = -1LL;
	volatile int16_t x468 = INT16_MIN;
	volatile uint64_t t109 = 14118LLU;

    t109 = (((x465|x466)|x467)+x468);

    if (t109 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x469 = UINT16_MAX;
	static uint8_t x470 = 22U;
	uint16_t x471 = UINT16_MAX;
	volatile int32_t x472 = INT32_MIN;
	int32_t t110 = 776499;

    t110 = (((x469|x470)|x471)+x472);

    if (t110 != -2147418113) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x474 = -3968161247276014078LL;
	static uint16_t x476 = 0U;
	uint64_t t111 = 1799681820508LLU;

    t111 = (((x473|x474)|x475)+x476);

    if (t111 != 14478582826433642491LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x485 = INT64_MAX;
	int64_t x486 = -7452LL;
	int16_t x487 = -1;
	int16_t x488 = 10603;
	volatile int64_t t112 = -971LL;

    t112 = (((x485|x486)|x487)+x488);

    if (t112 != 10602LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x490 = 8U;
	volatile uint8_t x491 = 21U;
	int16_t x492 = 14;
	volatile uint64_t t113 = 143683LLU;

    t113 = (((x489|x490)|x491)+x492);

    if (t113 != 126150963750624075LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x494 = UINT64_MAX;
	static uint32_t x495 = 156U;
	int8_t x496 = INT8_MAX;
	volatile uint64_t t114 = 216380979846LLU;

    t114 = (((x493|x494)|x495)+x496);

    if (t114 != 126LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x497 = 7383U;
	static volatile uint64_t x498 = 1LLU;
	volatile int64_t x499 = INT64_MAX;
	uint64_t x500 = 7367227855186LLU;
	volatile uint64_t t115 = 3882959425372195913LLU;

    t115 = (((x497|x498)|x499)+x500);

    if (t115 != 9223379404082630993LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x501 = 13U;
	int8_t x502 = INT8_MIN;
	int32_t t116 = 19;

    t116 = (((x501|x502)|x503)+x504);

    if (t116 != -116) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x509 = INT16_MIN;
	uint32_t x510 = 15809762U;
	static int16_t x512 = INT16_MIN;
	uint32_t t117 = 610009U;

    t117 = (((x509|x510)|x511)+x512);

    if (t117 != 4294934527U) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x513 = -1;
	int64_t x516 = 3323432819729719312LL;
	static volatile int64_t t118 = -363262LL;

    t118 = (((x513|x514)|x515)+x516);

    if (t118 != 3323432819729719311LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x518 = 13U;
	int64_t x519 = INT64_MIN;
	volatile uint32_t x520 = 187U;
	int64_t t119 = -2626811692651035LL;

    t119 = (((x517|x518)|x519)+x520);

    if (t119 != -1434591271110LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x521 = INT8_MIN;
	int8_t x522 = INT8_MIN;
	int16_t x523 = INT16_MIN;
	int16_t x524 = INT16_MIN;
	volatile int32_t t120 = 6801709;

    t120 = (((x521|x522)|x523)+x524);

    if (t120 != -32896) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x525 = INT64_MIN;
	volatile int64_t x526 = -1LL;
	static int64_t x527 = -265386522641729992LL;
	int32_t x528 = -55345;

    t121 = (((x525|x526)|x527)+x528);

    if (t121 != -55346LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x529 = 54418822U;
	volatile int64_t x530 = -1LL;
	uint64_t x531 = 719861086133LLU;
	uint64_t t122 = 4LLU;

    t122 = (((x529|x530)|x531)+x532);

    if (t122 != 15LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x533 = 0;
	int64_t x535 = -1LL;
	static int32_t x536 = -10830161;
	int64_t t123 = -171LL;

    t123 = (((x533|x534)|x535)+x536);

    if (t123 != -10830162LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x542 = INT64_MIN;
	int32_t x543 = INT32_MIN;
	uint16_t x544 = 18638U;
	volatile int64_t t124 = 1889LL;

    t124 = (((x541|x542)|x543)+x544);

    if (t124 != -2147463933LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x545 = UINT8_MAX;
	volatile int64_t x546 = 3149729LL;
	static volatile uint64_t x547 = 476080623277334LLU;
	volatile uint64_t t125 = 28582033LLU;

    t125 = (((x545|x546)|x547)+x548);

    if (t125 != 476080624328830LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x549 = -1;
	static volatile int8_t x551 = INT8_MIN;
	int64_t x552 = INT64_MAX;

    t126 = (((x549|x550)|x551)+x552);

    if (t126 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x553 = INT16_MIN;
	int64_t x554 = 55LL;
	int64_t x555 = 27559799458LL;
	uint8_t x556 = 55U;
	volatile int64_t t127 = 4985225850657700LL;

    t127 = (((x553|x554)|x555)+x556);

    if (t127 != -21778LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x558 = 1U;
	volatile int32_t x559 = 106;
	volatile uint8_t x560 = 22U;
	int64_t t128 = -1002729211LL;

    t128 = (((x557|x558)|x559)+x560);

    if (t128 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x561 = INT16_MAX;
	int8_t x563 = 0;
	static int32_t t129 = -2;

    t129 = (((x561|x562)|x563)+x564);

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x565 = 1;
	volatile int32_t x566 = 2619;
	volatile uint64_t t130 = 131709292625LLU;

    t130 = (((x565|x566)|x567)+x568);

    if (t130 != 454263050082LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x569 = 522300U;
	static uint64_t x571 = 9504593LLU;
	volatile uint64_t x572 = UINT64_MAX;
	uint64_t t131 = 802568733952183LLU;

    t131 = (((x569|x570)|x571)+x572);

    if (t131 != 4294967164LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x573 = 260102U;
	static uint32_t x574 = 148636739U;
	uint8_t x575 = 3U;
	int8_t x576 = -1;
	volatile uint32_t t132 = 31U;

    t132 = (((x573|x574)|x575)+x576);

    if (t132 != 148896838U) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint64_t x581 = 3844245613398624LLU;
	uint32_t x582 = UINT32_MAX;
	int32_t x583 = -97080882;
	volatile int8_t x584 = -1;

    t133 = (((x581|x582)|x583)+x584);

    if (t133 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x585 = -1;
	uint64_t x586 = UINT64_MAX;
	static volatile uint64_t t134 = 8602845137307122143LLU;

    t134 = (((x585|x586)|x587)+x588);

    if (t134 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x589 = 2U;
	int32_t x590 = -107276;
	uint8_t x591 = 29U;
	int32_t t135 = -167659;

    t135 = (((x589|x590)|x591)+x592);

    if (t135 != -107266) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x593 = INT16_MIN;
	int16_t x595 = -1;

    t136 = (((x593|x594)|x595)+x596);

    if (t136 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x601 = -1;
	int16_t x602 = INT16_MIN;
	int8_t x603 = INT8_MAX;
	int32_t x604 = -46876;
	static volatile int32_t t137 = -1;

    t137 = (((x601|x602)|x603)+x604);

    if (t137 != -46877) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x605 = INT32_MIN;
	volatile int8_t x606 = INT8_MIN;
	uint16_t x607 = UINT16_MAX;
	uint16_t x608 = 25378U;
	int32_t t138 = 667445;

    t138 = (((x605|x606)|x607)+x608);

    if (t138 != 25377) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x609 = INT8_MIN;
	volatile int64_t x611 = -21165044731LL;
	static uint64_t x612 = UINT64_MAX;
	uint64_t t139 = 137413299787657402LLU;

    t139 = (((x609|x610)|x611)+x612);

    if (t139 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x613 = UINT64_MAX;
	volatile int8_t x614 = -1;
	static volatile int32_t x615 = -1;

    t140 = (((x613|x614)|x615)+x616);

    if (t140 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x617 = 2U;
	int8_t x618 = -1;
	volatile int64_t t141 = 8208399LL;

    t141 = (((x617|x618)|x619)+x620);

    if (t141 != 254LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x621 = 12821U;
	int16_t x623 = 6496;
	uint16_t x624 = 379U;
	static uint32_t t142 = 142U;

    t142 = (((x621|x622)|x623)+x624);

    if (t142 != 15610U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x626 = -22;
	static uint8_t x627 = UINT8_MAX;
	uint32_t x628 = 12U;
	static uint32_t t143 = 10577609U;

    t143 = (((x625|x626)|x627)+x628);

    if (t143 != 11U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x629 = -15075192780693LL;
	volatile uint16_t x630 = UINT16_MAX;
	uint16_t x631 = UINT16_MAX;
	uint64_t t144 = 10LLU;

    t144 = (((x629|x630)|x631)+x632);

    if (t144 != 18446728998516817958LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x633 = -42;
	int16_t x634 = 428;
	int16_t x635 = INT16_MIN;
	uint16_t x636 = 367U;
	int32_t t145 = 327410;

    t145 = (((x633|x634)|x635)+x636);

    if (t145 != 365) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x638 = INT64_MIN;
	int32_t x639 = 7491;
	int16_t x640 = 1;
	int64_t t146 = 110LL;

    t146 = (((x637|x638)|x639)+x640);

    if (t146 != -9223372036854768316LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x641 = 38U;
	static uint64_t x642 = 570810939623455LLU;
	static volatile int32_t x643 = INT32_MAX;
	volatile int8_t x644 = 0;
	volatile uint64_t t147 = 15797954587684672LLU;

    t147 = (((x641|x642)|x643)+x644);

    if (t147 != 570811891056639LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x646 = -1;
	uint16_t x647 = 0U;
	volatile uint64_t t148 = 15243619026LLU;

    t148 = (((x645|x646)|x647)+x648);

    if (t148 != 4498275951896770342LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x649 = 3U;
	uint8_t x650 = 7U;
	uint64_t x651 = 593302904107LLU;
	uint16_t x652 = 18U;
	static volatile uint64_t t149 = 137062695677977LLU;

    t149 = (((x649|x650)|x651)+x652);

    if (t149 != 593302904129LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x653 = UINT32_MAX;
	int64_t x654 = INT64_MIN;
	volatile uint64_t x655 = 471735LLU;
	static volatile int16_t x656 = INT16_MIN;
	static volatile uint64_t t150 = 150025343880298LLU;

    t150 = (((x653|x654)|x655)+x656);

    if (t150 != 9223372041149710335LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x661 = UINT16_MAX;
	uint64_t x664 = 406LLU;
	volatile uint64_t t151 = 29882LLU;

    t151 = (((x661|x662)|x663)+x664);

    if (t151 != 9223372036854776213LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x665 = -1;
	int8_t x666 = 2;
	uint16_t x667 = 1U;
	uint8_t x668 = 44U;
	int32_t t152 = 13496191;

    t152 = (((x665|x666)|x667)+x668);

    if (t152 != 43) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x669 = 14U;
	int32_t x671 = 1;
	int32_t x672 = INT32_MAX;
	int64_t t153 = 661740276348908LL;

    t153 = (((x669|x670)|x671)+x672);

    if (t153 != -9223372034707292146LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x673 = -1;
	volatile int8_t x675 = 0;
	volatile int16_t x676 = INT16_MAX;
	static int32_t t154 = -187;

    t154 = (((x673|x674)|x675)+x676);

    if (t154 != 32766) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x677 = -93657463713LL;
	int32_t x678 = -14;
	uint8_t x679 = 116U;
	int64_t x680 = -4844294888518LL;
	volatile int64_t t155 = -776549880887LL;

    t155 = (((x677|x678)|x679)+x680);

    if (t155 != -4844294888519LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x681 = INT64_MAX;
	static uint64_t x682 = 206968567999LLU;
	int32_t x683 = -1;
	uint16_t x684 = 0U;
	volatile uint64_t t156 = UINT64_MAX;

    t156 = (((x681|x682)|x683)+x684);

    if (t156 != UINT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x685 = 39;
	int64_t x686 = INT64_MAX;
	int16_t x688 = -1;

    t157 = (((x685|x686)|x687)+x688);

    if (t157 != -2LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x690 = 249971447261614LLU;
	static uint32_t x692 = UINT32_MAX;
	static uint64_t t158 = 14491215197053948LLU;

    t158 = (((x689|x690)|x691)+x692);

    if (t158 != 249975750782462LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x693 = 5;
	int64_t x694 = 485721500012871LL;
	static int16_t x695 = 90;
	static uint8_t x696 = UINT8_MAX;

    t159 = (((x693|x694)|x695)+x696);

    if (t159 != 485721500013150LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x697 = 13;
	uint8_t x698 = 29U;
	static int32_t x700 = INT32_MIN;
	static volatile int32_t t160 = 479;

    t160 = (((x697|x698)|x699)+x700);

    if (t160 != -2147483393) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x702 = 25969LLU;
	int64_t x704 = INT64_MAX;
	static volatile uint64_t t161 = 780197LLU;

    t161 = (((x701|x702)|x703)+x704);

    if (t161 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x705 = INT32_MIN;
	volatile int32_t t162 = 16700255;

    t162 = (((x705|x706)|x707)+x708);

    if (t162 != -32386) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x710 = -61693108;
	uint8_t x711 = 30U;
	volatile uint32_t t163 = 830877894U;

    t163 = (((x709|x710)|x711)+x712);

    if (t163 != 4233297918U) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x713 = 3U;
	int32_t x715 = -4;
	static volatile int32_t x716 = -3820;
	volatile int64_t t164 = 14960575336654LL;

    t164 = (((x713|x714)|x715)+x716);

    if (t164 != -3821LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x719 = INT64_MAX;
	static int16_t x720 = INT16_MIN;
	volatile int64_t t165 = 517898688758618102LL;

    t165 = (((x717|x718)|x719)+x720);

    if (t165 != -32769LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x725 = 17816U;
	uint16_t x726 = UINT16_MAX;
	volatile int16_t x727 = -1;
	volatile int8_t x728 = INT8_MAX;
	static volatile int32_t t166 = -26;

    t166 = (((x725|x726)|x727)+x728);

    if (t166 != 126) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x729 = UINT16_MAX;
	volatile uint16_t x730 = 11U;
	uint32_t x731 = 655204649U;
	volatile uint32_t t167 = 2072U;

    t167 = (((x729|x730)|x731)+x732);

    if (t167 != 880222914U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x735 = UINT8_MAX;
	int32_t x736 = -1;
	volatile uint32_t t168 = 14779U;

    t168 = (((x733|x734)|x735)+x736);

    if (t168 != 46078U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x737 = INT64_MIN;
	int32_t x738 = -1;
	int32_t x740 = -1016;

    t169 = (((x737|x738)|x739)+x740);

    if (t169 != -1017LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x745 = UINT8_MAX;
	static int8_t x746 = -1;
	int8_t x747 = INT8_MAX;

    t170 = (((x745|x746)|x747)+x748);

    if (t170 != 1380997267LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x753 = 160929805;
	int16_t x754 = -1;
	int32_t x756 = INT32_MIN;
	volatile uint64_t t171 = 92114930LLU;

    t171 = (((x753|x754)|x755)+x756);

    if (t171 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x757 = INT32_MIN;
	int64_t x758 = -17976392308113LL;
	volatile int64_t x760 = -1LL;
	volatile int64_t t172 = -512429LL;

    t172 = (((x757|x758)|x759)+x760);

    if (t172 != -1954174354LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x761 = INT16_MIN;
	int64_t t173 = -6275564LL;

    t173 = (((x761|x762)|x763)+x764);

    if (t173 != 32766LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x765 = INT64_MIN;
	int64_t x766 = -1LL;
	volatile int64_t x767 = INT64_MIN;
	int16_t x768 = INT16_MIN;
	volatile int64_t t174 = 32218398082LL;

    t174 = (((x765|x766)|x767)+x768);

    if (t174 != -32769LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x769 = 10459512;
	int8_t x770 = INT8_MIN;
	int8_t x771 = 1;
	volatile int64_t x772 = -1LL;
	int64_t t175 = -333982LL;

    t175 = (((x769|x770)|x771)+x772);

    if (t175 != -8LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x774 = 0U;
	int8_t x775 = 6;
	static uint16_t x776 = UINT16_MAX;
	static int32_t t176 = -1;

    t176 = (((x773|x774)|x775)+x776);

    if (t176 != 65534) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x777 = -1LL;
	uint32_t x779 = 6U;
	volatile int64_t x780 = INT64_MAX;
	int64_t t177 = -982672499LL;

    t177 = (((x777|x778)|x779)+x780);

    if (t177 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x781 = 983363LL;
	uint32_t x782 = 9633632U;
	int32_t x784 = -1;
	int64_t t178 = -3280115LL;

    t178 = (((x781|x782)|x783)+x784);

    if (t178 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x785 = INT16_MAX;
	volatile uint16_t x786 = 2U;
	int16_t x788 = -1;
	volatile int32_t t179 = 247;

    t179 = (((x785|x786)|x787)+x788);

    if (t179 != -2) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x789 = UINT64_MAX;
	volatile int16_t x790 = -10;
	volatile int8_t x791 = INT8_MAX;
	int8_t x792 = -1;
	static volatile uint64_t t180 = 321587726946942LLU;

    t180 = (((x789|x790)|x791)+x792);

    if (t180 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x793 = UINT8_MAX;
	static int32_t x794 = -1;
	volatile int16_t x796 = INT16_MIN;
	int32_t t181 = 123162;

    t181 = (((x793|x794)|x795)+x796);

    if (t181 != -32769) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x797 = INT64_MIN;
	int16_t x799 = INT16_MAX;
	static uint8_t x800 = UINT8_MAX;
	volatile int64_t t182 = 1LL;

    t182 = (((x797|x798)|x799)+x800);

    if (t182 != 254LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x801 = INT8_MIN;
	uint64_t x802 = 740855244174868LLU;
	static uint16_t x803 = UINT16_MAX;
	static int8_t x804 = INT8_MIN;

    t183 = (((x801|x802)|x803)+x804);

    if (t183 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x805 = 0U;
	uint32_t x806 = 696U;
	uint64_t x808 = UINT64_MAX;
	uint64_t t184 = 49595113577389LLU;

    t184 = (((x805|x806)|x807)+x808);

    if (t184 != 4294967223LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x809 = UINT16_MAX;
	int32_t x810 = -1;
	int64_t x812 = -1LL;
	uint64_t t185 = 2121617115205833LLU;

    t185 = (((x809|x810)|x811)+x812);

    if (t185 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x813 = 0U;
	int32_t x814 = INT32_MIN;
	volatile int32_t t186 = 72;

    t186 = (((x813|x814)|x815)+x816);

    if (t186 != -2147450881) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x818 = INT8_MAX;
	int16_t x820 = INT16_MIN;
	int64_t t187 = 3631232529899993LL;

    t187 = (((x817|x818)|x819)+x820);

    if (t187 != -32769LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x821 = -1;
	uint64_t x822 = 445687731662489LLU;
	int8_t x823 = INT8_MIN;
	int64_t x824 = -1LL;
	uint64_t t188 = 249690701550LLU;

    t188 = (((x821|x822)|x823)+x824);

    if (t188 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x826 = INT64_MIN;
	int64_t x827 = INT64_MIN;
	int64_t t189 = 56LL;

    t189 = (((x825|x826)|x827)+x828);

    if (t189 != -127LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x829 = INT8_MAX;
	int16_t x831 = INT16_MIN;
	int32_t t190 = -249736056;

    t190 = (((x829|x830)|x831)+x832);

    if (t190 != -32641) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint8_t x837 = 7U;
	static int16_t x840 = INT16_MIN;
	volatile int32_t t191 = -1068936008;

    t191 = (((x837|x838)|x839)+x840);

    if (t191 != -32769) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x841 = -2284349;
	int8_t x844 = 0;
	volatile int64_t t192 = 15260070590218LL;

    t192 = (((x841|x842)|x843)+x844);

    if (t192 != -2281497LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x845 = -1LL;
	int64_t x846 = INT64_MIN;
	int64_t t193 = -8368281072331LL;

    t193 = (((x845|x846)|x847)+x848);

    if (t193 != 12LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x849 = -1;
	int32_t x851 = INT32_MAX;
	static int64_t x852 = INT64_MAX;
	uint64_t t194 = 1042326801020LLU;

    t194 = (((x849|x850)|x851)+x852);

    if (t194 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x857 = UINT16_MAX;
	uint8_t x858 = 25U;
	static int64_t x859 = INT64_MAX;
	volatile uint64_t x860 = UINT64_MAX;
	uint64_t t195 = 30175783766169LLU;

    t195 = (((x857|x858)|x859)+x860);

    if (t195 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x861 = 187904947LLU;
	uint32_t x863 = 265810760U;
	uint16_t x864 = UINT16_MAX;
	volatile uint64_t t196 = 26474154568847012LLU;

    t196 = (((x861|x862)|x863)+x864);

    if (t196 != 18446744071830041594LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x865 = 0U;
	uint8_t x868 = 86U;
	volatile int32_t t197 = -1;

    t197 = (((x865|x866)|x867)+x868);

    if (t197 != 85) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x870 = UINT8_MAX;
	static int8_t x872 = -1;

    t198 = (((x869|x870)|x871)+x872);

    if (t198 != 2147483646LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x874 = -1;
	int32_t x876 = -1;
	volatile int32_t t199 = -5554;

    t199 = (((x873|x874)|x875)+x876);

    if (t199 != -2) { NG(); } else { ; }
	
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



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

static volatile int8_t x4 = INT8_MIN;
int16_t x5 = INT16_MAX;
volatile int32_t t2 = 4;
uint32_t x13 = UINT32_MAX;
int16_t x21 = INT16_MIN;
volatile int32_t x23 = INT32_MIN;
static int8_t x28 = -1;
int32_t t6 = 43029;
static int16_t x31 = INT16_MIN;
int64_t x32 = INT64_MAX;
uint8_t x34 = 38U;
int8_t x35 = -1;
int32_t t8 = 283497401;
int16_t x40 = -2;
int32_t t9 = -13436;
volatile uint32_t x43 = UINT32_MAX;
int32_t t10 = 2;
int16_t x48 = 1;
volatile int32_t t12 = -293;
int8_t x59 = INT8_MAX;
int16_t x63 = INT16_MAX;
int32_t x65 = INT32_MAX;
uint8_t x74 = UINT8_MAX;
uint8_t x84 = 0U;
int16_t x85 = -17;
uint8_t x97 = UINT8_MAX;
static volatile int32_t x101 = INT32_MIN;
int32_t t24 = -55299;
int32_t t26 = 1339237;
volatile int32_t t27 = -3630;
volatile uint16_t x118 = 469U;
static int32_t t29 = 290362;
uint16_t x125 = 194U;
volatile int32_t t30 = 20296;
int32_t t31 = 1;
static int32_t x140 = 103873840;
volatile uint32_t x150 = UINT32_MAX;
volatile int8_t x154 = -1;
int32_t t37 = -7;
int16_t x160 = -6;
int32_t t38 = -24;
uint64_t x162 = 81LLU;
int32_t t39 = 120373467;
int32_t t40 = -21;
static int32_t x169 = -97780341;
int16_t x172 = -1;
int8_t x173 = -1;
volatile int32_t t44 = 3403;
volatile int32_t t46 = -1;
uint16_t x193 = 31105U;
int32_t t47 = -60;
static uint64_t x208 = UINT64_MAX;
volatile int32_t t49 = 669895938;
int32_t t53 = -507783399;
volatile int8_t x231 = 1;
volatile int32_t t55 = 1;
int32_t x240 = INT32_MAX;
int32_t x243 = -43394;
static int32_t t58 = 1;
static volatile int8_t x250 = INT8_MIN;
volatile int64_t x254 = INT64_MAX;
static uint8_t x257 = UINT8_MAX;
static int32_t x259 = INT32_MAX;
static int8_t x266 = INT8_MIN;
int16_t x275 = -1;
int32_t t66 = 36104;
int64_t x285 = 1LL;
static volatile int32_t t69 = 14047636;
uint16_t x303 = 94U;
int8_t x305 = -1;
volatile int32_t t74 = 56;
uint64_t x309 = 1176044211288438405LLU;
static int32_t t75 = -223620556;
uint16_t x315 = 1889U;
int32_t t76 = 28;
int64_t x317 = INT64_MAX;
int32_t x323 = -1;
static volatile int32_t x325 = INT32_MAX;
int64_t x331 = INT64_MAX;
int32_t x343 = INT32_MIN;
int16_t x345 = 38;
uint32_t x348 = UINT32_MAX;
int16_t x350 = -1;
volatile int8_t x354 = -1;
volatile uint16_t x355 = 1436U;
uint16_t x360 = 56U;
static volatile int32_t t87 = 135;
int8_t x361 = -1;
uint8_t x363 = 1U;
volatile int32_t x365 = -34;
int64_t x367 = INT64_MIN;
volatile int64_t x370 = INT64_MIN;
int8_t x372 = -1;
static volatile uint8_t x378 = 22U;
int32_t x379 = INT32_MIN;
int64_t x382 = INT64_MIN;
int16_t x390 = -596;
static int16_t x391 = INT16_MIN;
int32_t t94 = 192;
static int64_t x395 = INT64_MAX;
volatile int32_t x400 = INT32_MAX;
static int64_t x403 = -1LL;
volatile int32_t t97 = -7721;
volatile int32_t t98 = -1;
int16_t x411 = INT16_MIN;
uint32_t x415 = 636160U;
int32_t x417 = INT32_MIN;
uint64_t x427 = 20066LLU;
int16_t x428 = -1;
int8_t x431 = -1;
int8_t x440 = 7;
uint8_t x443 = 2U;
static int32_t t110 = 11498483;
static int16_t x459 = INT16_MAX;
static volatile int64_t x463 = 14633821519LL;
int16_t x471 = -1;
static uint8_t x474 = UINT8_MAX;
int32_t x476 = -1;
int32_t t115 = 8903;
int64_t x478 = 2197533134255LL;
volatile uint16_t x482 = UINT16_MAX;
int32_t x485 = 20150;
uint64_t x491 = UINT64_MAX;
int16_t x496 = INT16_MIN;
int16_t x497 = -1;
int8_t x518 = -1;
static uint16_t x525 = UINT16_MAX;
int8_t x526 = 1;
int32_t t128 = 36841;
uint8_t x530 = 1U;
int32_t x535 = INT32_MAX;
static int32_t x537 = INT32_MAX;
volatile int32_t x539 = -1;
int16_t x545 = 9828;
int32_t t133 = 40161464;
static volatile int32_t t134 = 118;
uint8_t x556 = UINT8_MAX;
static int32_t x559 = 21581783;
volatile int32_t x561 = INT32_MIN;
uint64_t x570 = 25669757146LLU;
volatile int8_t x578 = -7;
static int8_t x580 = INT8_MAX;
volatile uint64_t x582 = 136027718053LLU;
int16_t x596 = INT16_MAX;
int32_t t145 = 760476;
uint8_t x600 = 13U;
int32_t t146 = 445817;
int64_t x602 = INT64_MAX;
int32_t x604 = 1;
volatile int32_t t147 = 10;
uint8_t x605 = 0U;
volatile int64_t x615 = -268321760LL;
int32_t x616 = INT32_MIN;
volatile int16_t x617 = INT16_MIN;
volatile int32_t t151 = 1;
static uint64_t x632 = 443664965529LLU;
uint8_t x635 = 39U;
int16_t x637 = INT16_MIN;
static uint64_t x643 = 41209252010224LLU;
uint16_t x651 = 3U;
int8_t x657 = INT8_MIN;
volatile uint64_t x658 = 76967LLU;
static int32_t t159 = -943;
static int32_t t160 = 7778478;
static int64_t x682 = -111LL;
int32_t x686 = INT32_MAX;
int8_t x690 = -1;
static uint8_t x701 = 4U;
int8_t x706 = -9;
volatile int32_t t170 = -12;
volatile uint64_t x713 = 27061084325378LLU;
int32_t x716 = -1;
int64_t x721 = -1LL;
volatile uint16_t x725 = UINT16_MAX;
volatile int32_t x730 = -1;
int8_t x732 = INT8_MAX;
int32_t t176 = -623;
static uint64_t x745 = UINT64_MAX;
static uint8_t x746 = UINT8_MAX;
int64_t x753 = -6599548491288LL;
int8_t x759 = INT8_MIN;
int32_t x761 = INT32_MAX;
int32_t x764 = INT32_MIN;
volatile int32_t t185 = 1;
uint64_t x773 = 3368LLU;
volatile int8_t x774 = INT8_MIN;
int8_t x775 = INT8_MIN;
int16_t x776 = -1014;
uint8_t x777 = UINT8_MAX;
static int16_t x781 = -1;
int64_t x790 = -1LL;
int32_t x791 = -1;
volatile int32_t x793 = -406;
int32_t t192 = 510195;
int32_t x797 = -2;
int8_t x800 = INT8_MAX;
static volatile int32_t t193 = 16069938;
static int64_t x807 = INT64_MIN;
volatile int32_t t195 = 57210;
static int64_t x809 = INT64_MIN;
int32_t x812 = -1;
static int64_t x814 = INT64_MAX;
static int64_t x815 = INT64_MAX;
int32_t x816 = -607476195;
static int32_t t197 = -79;
uint64_t x822 = 29LLU;
uint32_t x823 = 3141U;
int64_t x824 = INT64_MAX;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	uint16_t x2 = 466U;
	int16_t x3 = 3;
	int32_t t0 = -342;

    t0 = ((x1^(x2%x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = UINT16_MAX;
	int8_t x7 = 4;
	volatile int8_t x8 = INT8_MIN;
	int32_t t1 = -14192;

    t1 = ((x5^(x6%x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 19;
	volatile int64_t x10 = INT64_MIN;
	uint16_t x11 = 10U;
	volatile int8_t x12 = INT8_MIN;

    t2 = ((x9^(x10%x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x14 = 24430935LLU;
	int32_t x15 = INT32_MAX;
	int32_t x16 = -1;
	int32_t t3 = 56584733;

    t3 = ((x13^(x14%x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -121;
	int8_t x18 = INT8_MIN;
	volatile uint32_t x19 = UINT32_MAX;
	int8_t x20 = INT8_MAX;
	volatile int32_t t4 = 107;

    t4 = ((x17^(x18%x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = 2;
	static int32_t x24 = -1;
	int32_t t5 = 159522645;

    t5 = ((x21^(x22%x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = INT16_MIN;
	int64_t x26 = -1LL;
	int32_t x27 = 467;

    t6 = ((x25^(x26%x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = 3726134201LL;
	uint32_t x30 = 13074U;
	static int32_t t7 = 3;

    t7 = ((x29^(x30%x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 0;
	uint32_t x36 = 440U;

    t8 = ((x33^(x34%x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x37 = UINT16_MAX;
	int16_t x38 = -3339;
	int32_t x39 = -1;

    t9 = ((x37^(x38%x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = 173910865447802LL;
	static int64_t x42 = INT64_MAX;
	int64_t x44 = INT64_MIN;

    t10 = ((x41^(x42%x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	uint32_t x46 = 111U;
	static uint64_t x47 = 7340660829LLU;
	static volatile int32_t t11 = 477882857;

    t11 = ((x45^(x46%x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x53 = -13;
	volatile int32_t x54 = INT32_MAX;
	int32_t x55 = 7892;
	volatile int8_t x56 = INT8_MIN;

    t12 = ((x53^(x54%x55))==x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = INT16_MAX;
	int16_t x58 = -26;
	int8_t x60 = -1;
	volatile int32_t t13 = 18;

    t13 = ((x57^(x58%x59))==x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x61 = -11471152;
	uint64_t x62 = UINT64_MAX;
	int16_t x64 = INT16_MIN;
	int32_t t14 = 2936480;

    t14 = ((x61^(x62%x63))==x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x66 = UINT64_MAX;
	uint8_t x67 = UINT8_MAX;
	int8_t x68 = INT8_MIN;
	volatile int32_t t15 = 4821;

    t15 = ((x65^(x66%x67))==x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x69 = 70825U;
	int16_t x70 = 1;
	int16_t x71 = -8978;
	static int16_t x72 = INT16_MIN;
	volatile int32_t t16 = -191172;

    t16 = ((x69^(x70%x71))==x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x73 = -22;
	static volatile uint32_t x75 = 239U;
	int64_t x76 = INT64_MIN;
	int32_t t17 = 37102331;

    t17 = ((x73^(x74%x75))==x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = 12;
	static int16_t x78 = -1;
	int32_t x79 = INT32_MIN;
	static int8_t x80 = -1;
	volatile int32_t t18 = 44825626;

    t18 = ((x77^(x78%x79))==x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x81 = 21148LLU;
	static volatile uint16_t x82 = UINT16_MAX;
	volatile int8_t x83 = INT8_MIN;
	volatile int32_t t19 = -7;

    t19 = ((x81^(x82%x83))==x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x86 = INT64_MIN;
	uint32_t x87 = 152U;
	int16_t x88 = INT16_MIN;
	volatile int32_t t20 = 3568;

    t20 = ((x85^(x86%x87))==x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x89 = 29382LL;
	uint8_t x90 = 3U;
	uint64_t x91 = 113893505153127LLU;
	uint64_t x92 = 864483LLU;
	volatile int32_t t21 = 1;

    t21 = ((x89^(x90%x91))==x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x93 = 7U;
	int64_t x94 = INT64_MIN;
	int64_t x95 = 1023908LL;
	int64_t x96 = INT64_MAX;
	volatile int32_t t22 = -1;

    t22 = ((x93^(x94%x95))==x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x98 = 902285958356LL;
	int8_t x99 = INT8_MIN;
	int16_t x100 = -1;
	volatile int32_t t23 = -9049494;

    t23 = ((x97^(x98%x99))==x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x102 = INT16_MAX;
	uint32_t x103 = 887840379U;
	int8_t x104 = 16;

    t24 = ((x101^(x102%x103))==x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x105 = 7U;
	volatile int32_t x106 = -40;
	static int64_t x107 = 6825218976957117LL;
	static int16_t x108 = INT16_MIN;
	static int32_t t25 = 186029;

    t25 = ((x105^(x106%x107))==x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x109 = UINT16_MAX;
	uint16_t x110 = 7U;
	uint64_t x111 = 1803639694049848LLU;
	int8_t x112 = INT8_MIN;

    t26 = ((x109^(x110%x111))==x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = 2124372592729523145LL;
	volatile int64_t x114 = INT64_MIN;
	int64_t x115 = 392536745158615274LL;
	uint16_t x116 = UINT16_MAX;

    t27 = ((x113^(x114%x115))==x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = INT16_MIN;
	int16_t x119 = -1;
	uint32_t x120 = UINT32_MAX;
	int32_t t28 = -119315;

    t28 = ((x117^(x118%x119))==x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x121 = 16LLU;
	volatile int32_t x122 = INT32_MIN;
	static int32_t x123 = INT32_MIN;
	int16_t x124 = 0;

    t29 = ((x121^(x122%x123))==x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x126 = INT64_MIN;
	static uint32_t x127 = 192508979U;
	int32_t x128 = -414245;

    t30 = ((x125^(x126%x127))==x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x129 = UINT16_MAX;
	uint8_t x130 = UINT8_MAX;
	static uint32_t x131 = 403U;
	volatile int16_t x132 = INT16_MIN;

    t31 = ((x129^(x130%x131))==x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = -1;
	static uint64_t x134 = 0LLU;
	int16_t x135 = INT16_MAX;
	static int8_t x136 = -1;
	static volatile int32_t t32 = 738882;

    t32 = ((x133^(x134%x135))==x136);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x137 = INT8_MIN;
	int32_t x138 = INT32_MIN;
	int16_t x139 = INT16_MIN;
	int32_t t33 = -42596;

    t33 = ((x137^(x138%x139))==x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x141 = INT8_MAX;
	static volatile uint32_t x142 = 25259345U;
	int16_t x143 = INT16_MIN;
	static int32_t x144 = 17515;
	static int32_t t34 = -7599142;

    t34 = ((x141^(x142%x143))==x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x145 = -5;
	int16_t x146 = -1;
	uint16_t x147 = 21U;
	static volatile uint8_t x148 = 36U;
	volatile int32_t t35 = 3;

    t35 = ((x145^(x146%x147))==x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x149 = INT16_MIN;
	static int16_t x151 = INT16_MIN;
	int16_t x152 = -1;
	int32_t t36 = 12296025;

    t36 = ((x149^(x150%x151))==x152);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x153 = INT32_MIN;
	volatile int32_t x155 = INT32_MIN;
	int8_t x156 = INT8_MIN;

    t37 = ((x153^(x154%x155))==x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x157 = -1LL;
	int32_t x158 = INT32_MAX;
	int8_t x159 = -1;

    t38 = ((x157^(x158%x159))==x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x161 = 181LLU;
	volatile int64_t x163 = INT64_MAX;
	static uint8_t x164 = UINT8_MAX;

    t39 = ((x161^(x162%x163))==x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x165 = -1;
	int64_t x166 = -1LL;
	volatile int16_t x167 = INT16_MAX;
	uint64_t x168 = 961039182838501407LLU;

    t40 = ((x165^(x166%x167))==x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x170 = INT16_MIN;
	int16_t x171 = INT16_MIN;
	int32_t t41 = 80;

    t41 = ((x169^(x170%x171))==x172);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x174 = 170375016612LL;
	volatile int64_t x175 = -5LL;
	int16_t x176 = -1;
	static volatile int32_t t42 = -4836;

    t42 = ((x173^(x174%x175))==x176);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x177 = UINT32_MAX;
	int32_t x178 = -56;
	volatile int64_t x179 = INT64_MIN;
	uint64_t x180 = UINT64_MAX;
	static int32_t t43 = 13426490;

    t43 = ((x177^(x178%x179))==x180);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x181 = INT16_MIN;
	static int16_t x182 = 5815;
	static volatile int64_t x183 = INT64_MIN;
	volatile uint64_t x184 = 225847308405LLU;

    t44 = ((x181^(x182%x183))==x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x185 = 1183U;
	int32_t x186 = -3354196;
	int16_t x187 = 209;
	volatile uint64_t x188 = UINT64_MAX;
	volatile int32_t t45 = 116258;

    t45 = ((x185^(x186%x187))==x188);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x189 = 0U;
	static volatile int8_t x190 = -7;
	int16_t x191 = INT16_MIN;
	int8_t x192 = INT8_MIN;

    t46 = ((x189^(x190%x191))==x192);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x194 = 95U;
	uint8_t x195 = 2U;
	int32_t x196 = INT32_MAX;

    t47 = ((x193^(x194%x195))==x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x201 = 121U;
	int64_t x202 = -791801670LL;
	uint32_t x203 = 19629U;
	int16_t x204 = 9;
	int32_t t48 = 83;

    t48 = ((x201^(x202%x203))==x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x205 = -9;
	int16_t x206 = -1;
	uint64_t x207 = 1068153973LLU;

    t49 = ((x205^(x206%x207))==x208);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x209 = -1;
	volatile int64_t x210 = INT64_MIN;
	int32_t x211 = INT32_MIN;
	int8_t x212 = INT8_MIN;
	static int32_t t50 = 76;

    t50 = ((x209^(x210%x211))==x212);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x213 = INT32_MAX;
	uint16_t x214 = UINT16_MAX;
	int8_t x215 = 31;
	volatile int32_t x216 = INT32_MAX;
	int32_t t51 = 59;

    t51 = ((x213^(x214%x215))==x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x217 = -1;
	int64_t x218 = 5347LL;
	uint32_t x219 = 220849987U;
	volatile int8_t x220 = 15;
	volatile int32_t t52 = -24939121;

    t52 = ((x217^(x218%x219))==x220);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x221 = -201;
	int16_t x222 = INT16_MAX;
	static volatile int64_t x223 = 33263514560LL;
	int32_t x224 = INT32_MIN;

    t53 = ((x221^(x222%x223))==x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x225 = INT32_MIN;
	int8_t x226 = -1;
	int32_t x227 = INT32_MIN;
	static int8_t x228 = -1;
	int32_t t54 = -1;

    t54 = ((x225^(x226%x227))==x228);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint64_t x229 = 231LLU;
	volatile int64_t x230 = INT64_MIN;
	int16_t x232 = INT16_MIN;

    t55 = ((x229^(x230%x231))==x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x233 = 24U;
	uint64_t x234 = 58946LLU;
	static volatile int64_t x235 = -1LL;
	int64_t x236 = -1LL;
	int32_t t56 = -2433693;

    t56 = ((x233^(x234%x235))==x236);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x237 = INT8_MIN;
	int8_t x238 = -7;
	int16_t x239 = -4123;
	volatile int32_t t57 = 32252;

    t57 = ((x237^(x238%x239))==x240);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x241 = 3U;
	volatile int64_t x242 = 1760973465LL;
	static volatile int64_t x244 = INT64_MIN;

    t58 = ((x241^(x242%x243))==x244);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x245 = 93712824U;
	static uint16_t x246 = 4U;
	static int32_t x247 = INT32_MIN;
	volatile uint32_t x248 = UINT32_MAX;
	volatile int32_t t59 = -6747;

    t59 = ((x245^(x246%x247))==x248);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x249 = INT16_MAX;
	static int32_t x251 = INT32_MIN;
	int16_t x252 = INT16_MAX;
	int32_t t60 = -1;

    t60 = ((x249^(x250%x251))==x252);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x253 = -1;
	int8_t x255 = INT8_MIN;
	int8_t x256 = 1;
	int32_t t61 = 632930;

    t61 = ((x253^(x254%x255))==x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x258 = 1355546229731283577LL;
	int64_t x260 = INT64_MIN;
	static volatile int32_t t62 = 32699;

    t62 = ((x257^(x258%x259))==x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x261 = UINT64_MAX;
	int16_t x262 = INT16_MIN;
	int16_t x263 = -226;
	volatile int8_t x264 = -47;
	volatile int32_t t63 = 3022;

    t63 = ((x261^(x262%x263))==x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x265 = 1;
	int32_t x267 = -1;
	int8_t x268 = INT8_MIN;
	int32_t t64 = -1018882;

    t64 = ((x265^(x266%x267))==x268);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x269 = -707010077;
	int32_t x270 = -1;
	volatile int64_t x271 = -6LL;
	uint32_t x272 = UINT32_MAX;
	int32_t t65 = 142353;

    t65 = ((x269^(x270%x271))==x272);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x273 = INT16_MIN;
	static int64_t x274 = INT64_MAX;
	uint16_t x276 = 10U;

    t66 = ((x273^(x274%x275))==x276);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x277 = 21308LLU;
	volatile int64_t x278 = -1LL;
	int64_t x279 = -1LL;
	int16_t x280 = INT16_MIN;
	int32_t t67 = -1240692;

    t67 = ((x277^(x278%x279))==x280);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x281 = UINT16_MAX;
	int16_t x282 = INT16_MIN;
	static uint32_t x283 = 9U;
	int16_t x284 = INT16_MIN;
	static volatile int32_t t68 = -108;

    t68 = ((x281^(x282%x283))==x284);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x286 = 1692;
	int8_t x287 = -1;
	volatile int64_t x288 = INT64_MIN;

    t69 = ((x285^(x286%x287))==x288);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x289 = INT8_MIN;
	int64_t x290 = INT64_MAX;
	uint8_t x291 = UINT8_MAX;
	volatile uint8_t x292 = 20U;
	volatile int32_t t70 = 149817835;

    t70 = ((x289^(x290%x291))==x292);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x293 = INT32_MIN;
	int8_t x294 = 1;
	volatile int16_t x295 = INT16_MIN;
	int8_t x296 = -1;
	volatile int32_t t71 = -133396087;

    t71 = ((x293^(x294%x295))==x296);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x297 = -1;
	int64_t x298 = -1LL;
	uint32_t x299 = 105163U;
	int8_t x300 = -1;
	volatile int32_t t72 = 846575;

    t72 = ((x297^(x298%x299))==x300);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x301 = UINT16_MAX;
	uint32_t x302 = 2U;
	uint64_t x304 = UINT64_MAX;
	int32_t t73 = -1447812;

    t73 = ((x301^(x302%x303))==x304);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x306 = -1;
	int64_t x307 = 2662LL;
	int8_t x308 = 2;

    t74 = ((x305^(x306%x307))==x308);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x310 = 20112LLU;
	volatile uint32_t x311 = 23900090U;
	volatile int32_t x312 = -1;

    t75 = ((x309^(x310%x311))==x312);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x313 = 6279418LLU;
	int8_t x314 = INT8_MAX;
	int32_t x316 = 923228;

    t76 = ((x313^(x314%x315))==x316);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint64_t x318 = 4LLU;
	uint32_t x319 = 1825618655U;
	int32_t x320 = -262120;
	int32_t t77 = -457485523;

    t77 = ((x317^(x318%x319))==x320);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x321 = -1;
	int8_t x322 = -1;
	volatile int8_t x324 = 1;
	volatile int32_t t78 = -16442571;

    t78 = ((x321^(x322%x323))==x324);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x326 = INT64_MIN;
	uint32_t x327 = UINT32_MAX;
	volatile int32_t x328 = INT32_MAX;
	static volatile int32_t t79 = -30818;

    t79 = ((x325^(x326%x327))==x328);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int16_t x329 = INT16_MAX;
	int8_t x330 = INT8_MAX;
	int32_t x332 = INT32_MAX;
	int32_t t80 = -1;

    t80 = ((x329^(x330%x331))==x332);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x333 = INT32_MIN;
	static int32_t x334 = 1638215;
	uint8_t x335 = UINT8_MAX;
	static uint16_t x336 = 8U;
	int32_t t81 = -83;

    t81 = ((x333^(x334%x335))==x336);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x337 = UINT8_MAX;
	int8_t x338 = 26;
	uint16_t x339 = 1U;
	uint8_t x340 = 73U;
	static volatile int32_t t82 = 34407;

    t82 = ((x337^(x338%x339))==x340);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x341 = INT8_MAX;
	uint32_t x342 = 20U;
	static int64_t x344 = INT64_MAX;
	volatile int32_t t83 = -5015895;

    t83 = ((x341^(x342%x343))==x344);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x346 = 0;
	volatile int16_t x347 = INT16_MIN;
	int32_t t84 = -556108;

    t84 = ((x345^(x346%x347))==x348);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x349 = 48550269U;
	uint32_t x351 = UINT32_MAX;
	volatile uint64_t x352 = 582627LLU;
	static volatile int32_t t85 = -40828;

    t85 = ((x349^(x350%x351))==x352);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x353 = INT16_MIN;
	int16_t x356 = INT16_MIN;
	volatile int32_t t86 = 26417;

    t86 = ((x353^(x354%x355))==x356);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x357 = 15355946U;
	int16_t x358 = INT16_MIN;
	int64_t x359 = 2856483853861472LL;

    t87 = ((x357^(x358%x359))==x360);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x362 = 8U;
	volatile int32_t x364 = -1;
	int32_t t88 = -292;

    t88 = ((x361^(x362%x363))==x364);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x366 = UINT16_MAX;
	int8_t x368 = -42;
	volatile int32_t t89 = -469301;

    t89 = ((x365^(x366%x367))==x368);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x369 = 342440389LL;
	int32_t x371 = INT32_MIN;
	volatile int32_t t90 = -18;

    t90 = ((x369^(x370%x371))==x372);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x373 = INT16_MIN;
	int32_t x374 = INT32_MIN;
	int16_t x375 = INT16_MIN;
	int32_t x376 = -47;
	volatile int32_t t91 = -2232471;

    t91 = ((x373^(x374%x375))==x376);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x377 = 7601LL;
	int32_t x380 = 2565780;
	static int32_t t92 = 106011;

    t92 = ((x377^(x378%x379))==x380);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x381 = -9790LL;
	static int64_t x383 = INT64_MIN;
	int64_t x384 = INT64_MAX;
	int32_t t93 = -42296;

    t93 = ((x381^(x382%x383))==x384);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x389 = 13U;
	volatile int64_t x392 = INT64_MIN;

    t94 = ((x389^(x390%x391))==x392);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x393 = -1;
	int16_t x394 = 0;
	static uint64_t x396 = 27101978LLU;
	volatile int32_t t95 = 7;

    t95 = ((x393^(x394%x395))==x396);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x397 = -9;
	int8_t x398 = -1;
	uint32_t x399 = 15510U;
	static int32_t t96 = 21;

    t96 = ((x397^(x398%x399))==x400);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x401 = INT8_MIN;
	int64_t x402 = -198892986835322539LL;
	static int64_t x404 = INT64_MIN;

    t97 = ((x401^(x402%x403))==x404);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x405 = INT8_MIN;
	int16_t x406 = INT16_MIN;
	int8_t x407 = INT8_MIN;
	int32_t x408 = INT32_MAX;

    t98 = ((x405^(x406%x407))==x408);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x409 = -1LL;
	uint16_t x410 = 215U;
	volatile int8_t x412 = INT8_MIN;
	int32_t t99 = 1;

    t99 = ((x409^(x410%x411))==x412);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x413 = 121U;
	volatile int16_t x414 = -1;
	int8_t x416 = 3;
	volatile int32_t t100 = 101196;

    t100 = ((x413^(x414%x415))==x416);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x418 = 1U;
	static int64_t x419 = INT64_MAX;
	uint64_t x420 = 6222LLU;
	int32_t t101 = 0;

    t101 = ((x417^(x418%x419))==x420);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x421 = INT8_MIN;
	uint8_t x422 = 62U;
	volatile int64_t x423 = 8705471381794LL;
	uint16_t x424 = 465U;
	volatile int32_t t102 = -119261232;

    t102 = ((x421^(x422%x423))==x424);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x425 = -10;
	int64_t x426 = INT64_MAX;
	int32_t t103 = 1;

    t103 = ((x425^(x426%x427))==x428);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x429 = 10140496LLU;
	int8_t x430 = 2;
	volatile uint32_t x432 = 53383404U;
	int32_t t104 = -120;

    t104 = ((x429^(x430%x431))==x432);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x433 = INT16_MIN;
	static volatile int8_t x434 = -1;
	uint8_t x435 = 19U;
	int32_t x436 = 1;
	volatile int32_t t105 = 6776620;

    t105 = ((x433^(x434%x435))==x436);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x437 = UINT8_MAX;
	static volatile int32_t x438 = 9498;
	volatile int64_t x439 = INT64_MIN;
	int32_t t106 = 0;

    t106 = ((x437^(x438%x439))==x440);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x441 = UINT16_MAX;
	static int8_t x442 = INT8_MAX;
	uint64_t x444 = UINT64_MAX;
	int32_t t107 = -2193;

    t107 = ((x441^(x442%x443))==x444);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x445 = -1LL;
	int32_t x446 = INT32_MAX;
	int16_t x447 = INT16_MAX;
	int16_t x448 = 12779;
	static volatile int32_t t108 = 5753;

    t108 = ((x445^(x446%x447))==x448);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x449 = 13;
	int64_t x450 = 7364077493005469LL;
	volatile uint8_t x451 = 100U;
	uint16_t x452 = UINT16_MAX;
	volatile int32_t t109 = 3;

    t109 = ((x449^(x450%x451))==x452);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x453 = INT8_MIN;
	int16_t x454 = -304;
	uint16_t x455 = 2U;
	int64_t x456 = INT64_MIN;

    t110 = ((x453^(x454%x455))==x456);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x457 = UINT8_MAX;
	uint8_t x458 = UINT8_MAX;
	uint64_t x460 = 1729497608653131LLU;
	int32_t t111 = 1;

    t111 = ((x457^(x458%x459))==x460);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x461 = 56U;
	int32_t x462 = -877282108;
	int64_t x464 = -1LL;
	volatile int32_t t112 = -3;

    t112 = ((x461^(x462%x463))==x464);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x465 = 43628343612LLU;
	int64_t x466 = INT64_MAX;
	int16_t x467 = INT16_MIN;
	uint16_t x468 = UINT16_MAX;
	int32_t t113 = -21;

    t113 = ((x465^(x466%x467))==x468);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x469 = INT32_MIN;
	int32_t x470 = -1;
	int16_t x472 = INT16_MIN;
	volatile int32_t t114 = -401;

    t114 = ((x469^(x470%x471))==x472);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x473 = INT64_MAX;
	static int8_t x475 = INT8_MIN;

    t115 = ((x473^(x474%x475))==x476);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x477 = -1LL;
	static int8_t x479 = -1;
	volatile uint16_t x480 = UINT16_MAX;
	volatile int32_t t116 = 45;

    t116 = ((x477^(x478%x479))==x480);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x481 = -10;
	uint32_t x483 = UINT32_MAX;
	int64_t x484 = -14LL;
	int32_t t117 = 74;

    t117 = ((x481^(x482%x483))==x484);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x486 = -1;
	uint32_t x487 = 1498345U;
	int16_t x488 = -1;
	volatile int32_t t118 = 3;

    t118 = ((x485^(x486%x487))==x488);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x489 = INT16_MIN;
	int8_t x490 = 12;
	uint32_t x492 = UINT32_MAX;
	static volatile int32_t t119 = 95006;

    t119 = ((x489^(x490%x491))==x492);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x493 = 29U;
	uint8_t x494 = 27U;
	volatile uint16_t x495 = 1439U;
	volatile int32_t t120 = 5;

    t120 = ((x493^(x494%x495))==x496);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x498 = UINT32_MAX;
	static int64_t x499 = -27644898895301LL;
	int64_t x500 = -539903159149LL;
	volatile int32_t t121 = -128524;

    t121 = ((x497^(x498%x499))==x500);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x501 = UINT16_MAX;
	volatile uint8_t x502 = UINT8_MAX;
	int8_t x503 = -15;
	uint8_t x504 = UINT8_MAX;
	int32_t t122 = -86001603;

    t122 = ((x501^(x502%x503))==x504);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x505 = UINT32_MAX;
	static int8_t x506 = INT8_MAX;
	int16_t x507 = INT16_MIN;
	static int8_t x508 = 0;
	volatile int32_t t123 = 13737;

    t123 = ((x505^(x506%x507))==x508);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x509 = UINT64_MAX;
	static int64_t x510 = -1LL;
	int32_t x511 = -10891;
	int32_t x512 = INT32_MIN;
	volatile int32_t t124 = 37786;

    t124 = ((x509^(x510%x511))==x512);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x513 = 54;
	volatile int32_t x514 = INT32_MAX;
	volatile int16_t x515 = INT16_MIN;
	int16_t x516 = -3;
	int32_t t125 = 1;

    t125 = ((x513^(x514%x515))==x516);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x517 = INT16_MIN;
	volatile int8_t x519 = -21;
	static uint8_t x520 = 2U;
	static volatile int32_t t126 = 36544;

    t126 = ((x517^(x518%x519))==x520);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x521 = 14225759061LLU;
	volatile uint32_t x522 = 551439530U;
	uint32_t x523 = 2004U;
	static int8_t x524 = INT8_MIN;
	static volatile int32_t t127 = 31647955;

    t127 = ((x521^(x522%x523))==x524);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int16_t x527 = INT16_MIN;
	static int8_t x528 = -1;

    t128 = ((x525^(x526%x527))==x528);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x529 = 44U;
	int8_t x531 = INT8_MAX;
	volatile int32_t x532 = -1;
	int32_t t129 = 17483;

    t129 = ((x529^(x530%x531))==x532);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x533 = -1404;
	int64_t x534 = -3809211425817LL;
	uint32_t x536 = 845724U;
	volatile int32_t t130 = 116;

    t130 = ((x533^(x534%x535))==x536);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x538 = UINT64_MAX;
	volatile int32_t x540 = INT32_MIN;
	volatile int32_t t131 = 1;

    t131 = ((x537^(x538%x539))==x540);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x541 = INT16_MIN;
	uint64_t x542 = 12LLU;
	volatile int16_t x543 = -1;
	int64_t x544 = -13486420LL;
	int32_t t132 = 1333;

    t132 = ((x541^(x542%x543))==x544);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x546 = INT16_MIN;
	volatile int64_t x547 = INT64_MIN;
	int64_t x548 = INT64_MIN;

    t133 = ((x545^(x546%x547))==x548);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x549 = INT64_MAX;
	static int16_t x550 = -6;
	int64_t x551 = -312901LL;
	uint32_t x552 = 12213U;

    t134 = ((x549^(x550%x551))==x552);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x553 = 593646032U;
	uint64_t x554 = 53356LLU;
	volatile uint16_t x555 = 3712U;
	static int32_t t135 = 7082038;

    t135 = ((x553^(x554%x555))==x556);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x557 = -11;
	int16_t x558 = -1335;
	int64_t x560 = 4368915227049809393LL;
	int32_t t136 = -47;

    t136 = ((x557^(x558%x559))==x560);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x562 = 96972LLU;
	volatile int32_t x563 = INT32_MAX;
	uint8_t x564 = UINT8_MAX;
	int32_t t137 = 34747469;

    t137 = ((x561^(x562%x563))==x564);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x565 = -970219;
	int64_t x566 = INT64_MIN;
	uint8_t x567 = UINT8_MAX;
	uint32_t x568 = 391439U;
	volatile int32_t t138 = -3183214;

    t138 = ((x565^(x566%x567))==x568);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x569 = INT64_MAX;
	int64_t x571 = 12371992129LL;
	uint64_t x572 = 274542559501LLU;
	static volatile int32_t t139 = 679728;

    t139 = ((x569^(x570%x571))==x572);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x573 = INT64_MAX;
	volatile int8_t x574 = -6;
	int8_t x575 = INT8_MIN;
	int32_t x576 = INT32_MAX;
	volatile int32_t t140 = -1;

    t140 = ((x573^(x574%x575))==x576);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x577 = 1706734562U;
	uint16_t x579 = UINT16_MAX;
	static int32_t t141 = -899;

    t141 = ((x577^(x578%x579))==x580);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x581 = 0;
	uint8_t x583 = UINT8_MAX;
	static int32_t x584 = INT32_MIN;
	static int32_t t142 = -252;

    t142 = ((x581^(x582%x583))==x584);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x585 = INT8_MIN;
	uint8_t x586 = 26U;
	uint64_t x587 = 2163498088925394LLU;
	int64_t x588 = INT64_MAX;
	volatile int32_t t143 = 3447632;

    t143 = ((x585^(x586%x587))==x588);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x589 = 7U;
	int16_t x590 = -399;
	int16_t x591 = INT16_MIN;
	static uint16_t x592 = UINT16_MAX;
	volatile int32_t t144 = 14;

    t144 = ((x589^(x590%x591))==x592);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x593 = INT8_MIN;
	int8_t x594 = 1;
	volatile int8_t x595 = -15;

    t145 = ((x593^(x594%x595))==x596);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x597 = UINT16_MAX;
	uint8_t x598 = 107U;
	uint32_t x599 = 78361884U;

    t146 = ((x597^(x598%x599))==x600);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x601 = 5U;
	static int32_t x603 = -1;

    t147 = ((x601^(x602%x603))==x604);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x606 = -1LL;
	uint32_t x607 = UINT32_MAX;
	uint32_t x608 = 1U;
	int32_t t148 = 27;

    t148 = ((x605^(x606%x607))==x608);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x609 = -1;
	int8_t x610 = -1;
	volatile int16_t x611 = INT16_MIN;
	static volatile int32_t x612 = INT32_MIN;
	volatile int32_t t149 = -43231;

    t149 = ((x609^(x610%x611))==x612);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint32_t x613 = 719U;
	int16_t x614 = INT16_MIN;
	int32_t t150 = -11434071;

    t150 = ((x613^(x614%x615))==x616);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x618 = -1464;
	uint16_t x619 = 1U;
	int8_t x620 = -1;

    t151 = ((x617^(x618%x619))==x620);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x625 = -441975338571383LL;
	volatile int16_t x626 = INT16_MAX;
	int16_t x627 = -381;
	int8_t x628 = 0;
	int32_t t152 = 2;

    t152 = ((x625^(x626%x627))==x628);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x629 = INT8_MAX;
	volatile uint16_t x630 = 289U;
	int8_t x631 = INT8_MAX;
	int32_t t153 = -836;

    t153 = ((x629^(x630%x631))==x632);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x633 = INT8_MAX;
	static int64_t x634 = INT64_MAX;
	int64_t x636 = -1LL;
	int32_t t154 = 473804083;

    t154 = ((x633^(x634%x635))==x636);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x638 = 412U;
	int8_t x639 = INT8_MIN;
	int16_t x640 = -15076;
	int32_t t155 = 3;

    t155 = ((x637^(x638%x639))==x640);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x641 = -124242297624176LL;
	volatile uint64_t x642 = 43483LLU;
	volatile uint32_t x644 = UINT32_MAX;
	int32_t t156 = 1864;

    t156 = ((x641^(x642%x643))==x644);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x649 = INT16_MAX;
	int32_t x650 = -1;
	static int64_t x652 = INT64_MIN;
	int32_t t157 = -663194;

    t157 = ((x649^(x650%x651))==x652);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x653 = INT16_MIN;
	int64_t x654 = 271201240029234783LL;
	volatile int16_t x655 = -1;
	static volatile int8_t x656 = INT8_MIN;
	int32_t t158 = 4757702;

    t158 = ((x653^(x654%x655))==x656);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x659 = INT8_MIN;
	uint16_t x660 = UINT16_MAX;

    t159 = ((x657^(x658%x659))==x660);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x665 = UINT16_MAX;
	static int8_t x666 = 1;
	int16_t x667 = -1;
	int8_t x668 = INT8_MIN;

    t160 = ((x665^(x666%x667))==x668);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x669 = 33816149LLU;
	static uint8_t x670 = UINT8_MAX;
	int16_t x671 = -1;
	static int8_t x672 = INT8_MIN;
	volatile int32_t t161 = 95;

    t161 = ((x669^(x670%x671))==x672);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x673 = 95U;
	uint64_t x674 = UINT64_MAX;
	int8_t x675 = INT8_MAX;
	int64_t x676 = -1LL;
	int32_t t162 = -1;

    t162 = ((x673^(x674%x675))==x676);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x677 = 186LLU;
	int32_t x678 = -1;
	static int16_t x679 = INT16_MAX;
	volatile uint64_t x680 = UINT64_MAX;
	static int32_t t163 = 44189;

    t163 = ((x677^(x678%x679))==x680);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x681 = INT64_MAX;
	uint16_t x683 = 125U;
	uint32_t x684 = 47799U;
	int32_t t164 = 60872181;

    t164 = ((x681^(x682%x683))==x684);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x685 = 20U;
	int16_t x687 = -1;
	int8_t x688 = 0;
	volatile int32_t t165 = -2824839;

    t165 = ((x685^(x686%x687))==x688);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x689 = 798;
	int32_t x691 = INT32_MIN;
	int8_t x692 = -20;
	static volatile int32_t t166 = 26394;

    t166 = ((x689^(x690%x691))==x692);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x693 = UINT64_MAX;
	int64_t x694 = -1LL;
	static int16_t x695 = -1861;
	int64_t x696 = 70015LL;
	volatile int32_t t167 = -1986;

    t167 = ((x693^(x694%x695))==x696);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x697 = -1LL;
	static uint16_t x698 = UINT16_MAX;
	int32_t x699 = 77301;
	volatile int8_t x700 = INT8_MIN;
	volatile int32_t t168 = 2;

    t168 = ((x697^(x698%x699))==x700);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x702 = INT32_MAX;
	int16_t x703 = INT16_MAX;
	int16_t x704 = INT16_MIN;
	int32_t t169 = 31759;

    t169 = ((x701^(x702%x703))==x704);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x705 = INT8_MIN;
	static int32_t x707 = INT32_MIN;
	uint8_t x708 = 9U;

    t170 = ((x705^(x706%x707))==x708);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x709 = 6U;
	int32_t x710 = 901;
	static int32_t x711 = 30645;
	volatile int16_t x712 = -4514;
	int32_t t171 = 165;

    t171 = ((x709^(x710%x711))==x712);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x714 = 68U;
	int16_t x715 = -83;
	volatile int32_t t172 = 4276347;

    t172 = ((x713^(x714%x715))==x716);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x717 = INT16_MIN;
	uint16_t x718 = 1U;
	uint16_t x719 = 20105U;
	int32_t x720 = -1;
	volatile int32_t t173 = -15968026;

    t173 = ((x717^(x718%x719))==x720);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x722 = 414U;
	static int64_t x723 = -3029275069556LL;
	int64_t x724 = INT64_MAX;
	static int32_t t174 = -11059;

    t174 = ((x721^(x722%x723))==x724);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x726 = 10266218LLU;
	volatile int16_t x727 = INT16_MAX;
	int32_t x728 = 3914522;
	static int32_t t175 = -2166;

    t175 = ((x725^(x726%x727))==x728);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x729 = INT16_MAX;
	int64_t x731 = -1LL;

    t176 = ((x729^(x730%x731))==x732);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x733 = -162;
	uint32_t x734 = UINT32_MAX;
	int64_t x735 = INT64_MIN;
	static int32_t x736 = 0;
	static int32_t t177 = -575103;

    t177 = ((x733^(x734%x735))==x736);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x737 = 3U;
	static uint32_t x738 = UINT32_MAX;
	volatile uint8_t x739 = 6U;
	uint16_t x740 = 50U;
	static volatile int32_t t178 = 28522;

    t178 = ((x737^(x738%x739))==x740);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x741 = -20;
	static int32_t x742 = INT32_MIN;
	static int16_t x743 = INT16_MIN;
	int16_t x744 = INT16_MAX;
	volatile int32_t t179 = -6675;

    t179 = ((x741^(x742%x743))==x744);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x747 = 22U;
	int64_t x748 = -1LL;
	int32_t t180 = 0;

    t180 = ((x745^(x746%x747))==x748);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x749 = -1;
	int64_t x750 = INT64_MAX;
	volatile uint64_t x751 = 1573LLU;
	int8_t x752 = 1;
	volatile int32_t t181 = -104048994;

    t181 = ((x749^(x750%x751))==x752);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x754 = -4;
	int32_t x755 = INT32_MAX;
	static int32_t x756 = 7083;
	volatile int32_t t182 = 4;

    t182 = ((x753^(x754%x755))==x756);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x757 = INT8_MAX;
	int32_t x758 = INT32_MIN;
	volatile uint64_t x760 = UINT64_MAX;
	volatile int32_t t183 = 490184;

    t183 = ((x757^(x758%x759))==x760);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x762 = INT32_MIN;
	int64_t x763 = INT64_MIN;
	int32_t t184 = 7695463;

    t184 = ((x761^(x762%x763))==x764);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x765 = INT8_MIN;
	volatile int16_t x766 = -1272;
	int64_t x767 = 20LL;
	int16_t x768 = INT16_MAX;

    t185 = ((x765^(x766%x767))==x768);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x769 = -1;
	int64_t x770 = 1022488316073LL;
	int64_t x771 = 259078722705LL;
	int8_t x772 = -1;
	static volatile int32_t t186 = -188539042;

    t186 = ((x769^(x770%x771))==x772);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t t187 = 49416;

    t187 = ((x773^(x774%x775))==x776);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x778 = UINT8_MAX;
	static int16_t x779 = -1;
	int64_t x780 = INT64_MIN;
	int32_t t188 = -55;

    t188 = ((x777^(x778%x779))==x780);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x782 = UINT16_MAX;
	uint16_t x783 = 1022U;
	static uint64_t x784 = UINT64_MAX;
	static volatile int32_t t189 = -438585524;

    t189 = ((x781^(x782%x783))==x784);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x785 = 8145855658401077LLU;
	int64_t x786 = INT64_MIN;
	int16_t x787 = INT16_MIN;
	int32_t x788 = -45870036;
	int32_t t190 = -88;

    t190 = ((x785^(x786%x787))==x788);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x789 = -1;
	uint64_t x792 = UINT64_MAX;
	int32_t t191 = 2156013;

    t191 = ((x789^(x790%x791))==x792);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x794 = INT8_MAX;
	uint64_t x795 = 718564375047747LLU;
	uint8_t x796 = UINT8_MAX;

    t192 = ((x793^(x794%x795))==x796);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x798 = -1LL;
	int64_t x799 = INT64_MIN;

    t193 = ((x797^(x798%x799))==x800);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint32_t x801 = 58713760U;
	volatile int32_t x802 = -1;
	int32_t x803 = INT32_MAX;
	int64_t x804 = -44329864LL;
	int32_t t194 = -18;

    t194 = ((x801^(x802%x803))==x804);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x805 = INT16_MAX;
	static int8_t x806 = -1;
	int8_t x808 = -1;

    t195 = ((x805^(x806%x807))==x808);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x810 = -1LL;
	static uint32_t x811 = 747U;
	int32_t t196 = -20825935;

    t196 = ((x809^(x810%x811))==x812);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x813 = 3104;

    t197 = ((x813^(x814%x815))==x816);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x817 = INT8_MAX;
	uint8_t x818 = 1U;
	int64_t x819 = -1LL;
	static volatile int16_t x820 = -1;
	int32_t t198 = 16155;

    t198 = ((x817^(x818%x819))==x820);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x821 = INT8_MIN;
	volatile int32_t t199 = -165632147;

    t199 = ((x821^(x822%x823))==x824);

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


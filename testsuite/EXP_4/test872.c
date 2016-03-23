
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

int32_t x3 = INT32_MIN;
volatile int8_t x4 = INT8_MAX;
int16_t x5 = INT16_MIN;
uint32_t x7 = UINT32_MAX;
int16_t x8 = -1;
int16_t x15 = INT16_MAX;
int32_t x17 = 13475654;
uint32_t x30 = 0U;
volatile uint8_t x44 = 27U;
static volatile int32_t t9 = -1;
volatile int8_t x45 = -1;
int16_t x48 = INT16_MAX;
volatile int8_t x54 = INT8_MIN;
int64_t x57 = -94LL;
int64_t x61 = INT64_MIN;
uint16_t x67 = 0U;
static uint8_t x76 = 2U;
uint16_t x77 = 61U;
volatile int8_t x84 = -26;
uint8_t x92 = UINT8_MAX;
static uint64_t x93 = UINT64_MAX;
uint32_t x95 = UINT32_MAX;
int32_t x100 = -204898760;
uint32_t t22 = UINT32_MAX;
int8_t x102 = -1;
volatile int32_t t25 = -5119;
static volatile int32_t x115 = INT32_MIN;
volatile uint8_t x118 = UINT8_MAX;
uint8_t x119 = 0U;
int16_t x127 = 29;
int32_t x131 = INT32_MIN;
uint64_t x148 = UINT64_MAX;
int16_t x150 = -8613;
volatile int32_t t35 = 27358;
static volatile int16_t x153 = -36;
static int64_t x155 = 7LL;
volatile int32_t t36 = 1;
int16_t x157 = INT16_MAX;
static int32_t t37 = 1;
uint32_t x161 = 68659109U;
int64_t x163 = 1LL;
volatile int32_t x165 = -202;
uint64_t x167 = 52263LLU;
uint8_t x171 = 116U;
static volatile uint8_t x172 = 7U;
static int64_t x175 = INT64_MIN;
int32_t x182 = -803198942;
uint16_t x186 = 6905U;
static uint64_t x190 = 500949452LLU;
static volatile int8_t x194 = INT8_MIN;
volatile int32_t t46 = INT32_MIN;
volatile uint64_t x203 = 522061101729LLU;
int32_t x204 = -523768;
static int32_t x213 = 255318;
int8_t x218 = INT8_MIN;
int32_t t51 = -339606494;
int32_t t53 = -2951;
volatile uint32_t x240 = UINT32_MAX;
static volatile int32_t t57 = 23307;
volatile int32_t x250 = INT32_MIN;
int32_t t59 = -19428325;
uint16_t x255 = UINT16_MAX;
volatile uint32_t x259 = UINT32_MAX;
static uint32_t x260 = 874393543U;
uint64_t t61 = 132477529LLU;
static int8_t x262 = -1;
uint8_t x266 = UINT8_MAX;
static uint8_t x269 = 4U;
volatile int64_t x271 = INT64_MIN;
uint64_t x272 = 10281LLU;
uint32_t x275 = 26U;
int16_t x276 = -4;
int32_t t66 = -5034;
int8_t x283 = -2;
volatile int64_t t67 = INT64_MIN;
int32_t x287 = INT32_MIN;
static volatile int64_t t68 = INT64_MIN;
uint64_t x294 = 791328844055LLU;
static int8_t x300 = INT8_MIN;
int8_t x311 = INT8_MAX;
uint16_t x313 = 1104U;
int16_t x314 = -23;
int32_t x317 = INT32_MIN;
uint16_t x323 = 351U;
static int32_t x325 = INT32_MIN;
static int8_t x330 = 1;
static int8_t x331 = INT8_MIN;
uint8_t x332 = 126U;
int32_t x335 = 10059;
int32_t x337 = INT32_MIN;
int16_t x339 = 30;
volatile int8_t x342 = -59;
volatile int32_t t85 = INT32_MIN;
int64_t x360 = INT64_MIN;
static int16_t x361 = INT16_MIN;
int8_t x376 = -1;
static volatile int32_t t90 = INT32_MIN;
uint8_t x383 = 25U;
static int64_t x384 = INT64_MIN;
int32_t x388 = INT32_MIN;
static int8_t x390 = 6;
volatile uint16_t x395 = 1990U;
volatile uint32_t x397 = 254769891U;
int8_t x399 = 37;
static uint16_t x401 = 11U;
volatile uint8_t x408 = 7U;
static volatile uint32_t t98 = UINT32_MAX;
uint8_t x410 = 26U;
static int8_t x413 = -23;
int32_t x414 = INT32_MIN;
static volatile int64_t x415 = INT64_MAX;
volatile int64_t t102 = INT64_MIN;
static volatile uint8_t x429 = 30U;
int16_t x431 = 47;
int16_t x441 = INT16_MAX;
int64_t x445 = 6929457000LL;
volatile int8_t x447 = -1;
int16_t x453 = -1;
volatile int32_t t110 = 88;
int64_t x460 = -1LL;
int32_t t111 = 11188644;
int32_t x462 = 4817;
static volatile uint32_t t112 = 1909820U;
int64_t x465 = -7494966LL;
int64_t t113 = 2847215743LL;
static int16_t x470 = -550;
static volatile int32_t t114 = INT32_MIN;
uint64_t x482 = 60LLU;
int32_t x487 = -1;
volatile int64_t x489 = INT64_MIN;
volatile int64_t x492 = INT64_MAX;
static int32_t t120 = -5200;
int32_t x497 = INT32_MIN;
volatile int32_t t121 = INT32_MIN;
volatile uint8_t x502 = 5U;
int16_t x503 = INT16_MAX;
int16_t x505 = -3235;
int64_t x508 = -1LL;
static int32_t t123 = 25846;
volatile int8_t x510 = 55;
static int64_t x511 = 93LL;
static int32_t x516 = INT32_MIN;
int64_t x517 = INT64_MAX;
uint16_t x521 = 482U;
uint16_t x524 = UINT16_MAX;
uint32_t x529 = UINT32_MAX;
volatile uint8_t x531 = 2U;
volatile int32_t t131 = 0;
int16_t x548 = 23;
uint32_t x549 = 15234013U;
volatile uint64_t x552 = UINT64_MAX;
volatile uint32_t x553 = 6U;
uint8_t x554 = 13U;
int32_t x556 = -1;
int64_t x580 = INT64_MIN;
static int32_t t144 = INT32_MIN;
int16_t x602 = INT16_MIN;
uint16_t x605 = UINT16_MAX;
int8_t x612 = 1;
int16_t x619 = INT16_MIN;
uint16_t x620 = 28299U;
int8_t x636 = -1;
int64_t x645 = 2LL;
volatile int16_t x650 = INT16_MIN;
volatile uint8_t x654 = 15U;
volatile int16_t x656 = INT16_MIN;
int32_t t159 = -11859;
static volatile int8_t x661 = 0;
volatile int16_t x663 = 30;
static int8_t x672 = -1;
volatile int32_t t162 = INT32_MIN;
uint32_t x678 = 5U;
int32_t x682 = INT32_MIN;
uint32_t x683 = 371081747U;
uint64_t x684 = 41LLU;
volatile int32_t t165 = 26466;
int64_t x691 = -9661573014LL;
int32_t x692 = -1;
static int32_t t166 = INT32_MIN;
int32_t x694 = INT32_MAX;
int8_t x696 = INT8_MIN;
volatile uint32_t x697 = 14152515U;
volatile uint32_t x712 = 5U;
static int8_t x714 = INT8_MIN;
uint16_t x718 = UINT16_MAX;
volatile int64_t x721 = INT64_MAX;
int32_t x727 = -244665;
volatile int32_t x733 = -2;
uint8_t x737 = UINT8_MAX;
int8_t x738 = -1;
int32_t t177 = -38441;
int16_t x752 = INT16_MIN;
volatile int32_t t179 = 183;
volatile uint64_t x754 = 103097057410LLU;
int64_t x756 = INT64_MIN;
volatile int32_t x757 = 1720338;
int16_t x761 = -1;
uint16_t x762 = UINT16_MAX;
int64_t x763 = -1LL;
int32_t x766 = -483400;
int32_t t183 = INT32_MAX;
uint32_t x769 = 2580631U;
static int32_t x772 = -7356;
int32_t x773 = -658;
volatile int16_t x775 = INT16_MIN;
int16_t x777 = INT16_MAX;
int32_t t186 = 615;
int16_t x783 = -1;
uint32_t x785 = 13U;
uint8_t x786 = 100U;
static uint32_t t188 = 44351211U;
static int32_t x789 = INT32_MIN;
int64_t x797 = INT64_MIN;
uint64_t x799 = UINT64_MAX;
static int16_t x802 = -6;
volatile int32_t t192 = 8;
volatile int64_t x809 = -3168474831LL;
int64_t x815 = -39497377959699012LL;
int32_t t195 = -1030263610;
int16_t x822 = -12734;
volatile int32_t t198 = 31904774;
uint8_t x835 = 0U;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	uint8_t x2 = UINT8_MAX;
	int32_t t0 = -172;

    t0 = (x1/(x2!=(x3%x4)));

    if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = 4790LL;
	int32_t t1 = 2402;

    t1 = (x5/(x6!=(x7%x8)));

    if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = INT32_MIN;
	uint16_t x10 = UINT16_MAX;
	uint8_t x11 = 13U;
	static int8_t x12 = 26;
	volatile int32_t t2 = INT32_MIN;

    t2 = (x9/(x10!=(x11%x12)));

    if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	int16_t x14 = -1;
	int16_t x16 = INT16_MAX;
	int32_t t3 = -370;

    t3 = (x13/(x14!=(x15%x16)));

    if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x18 = UINT32_MAX;
	int8_t x19 = -1;
	volatile int8_t x20 = -1;
	int32_t t4 = 1;

    t4 = (x17/(x18!=(x19%x20)));

    if (t4 != 13475654) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint16_t x21 = UINT16_MAX;
	volatile uint8_t x22 = 7U;
	static volatile uint16_t x23 = 12U;
	int32_t x24 = -1;
	int32_t t5 = 49;

    t5 = (x21/(x22!=(x23%x24)));

    if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	volatile int16_t x26 = -1;
	uint64_t x27 = UINT64_MAX;
	volatile uint64_t x28 = UINT64_MAX;
	static int32_t t6 = 9;

    t6 = (x25/(x26!=(x27%x28)));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	int8_t x31 = INT8_MIN;
	static int16_t x32 = -21;
	int64_t t7 = INT64_MIN;

    t7 = (x29/(x30!=(x31%x32)));

    if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	volatile int8_t x34 = -1;
	static int16_t x35 = 7;
	uint16_t x36 = UINT16_MAX;
	volatile int64_t t8 = INT64_MIN;

    t8 = (x33/(x34!=(x35%x36)));

    if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = INT16_MIN;
	uint32_t x42 = 165U;
	int16_t x43 = INT16_MIN;

    t9 = (x41/(x42!=(x43%x44)));

    if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x46 = 172799799;
	int32_t x47 = INT32_MIN;
	int32_t t10 = 8;

    t10 = (x45/(x46!=(x47%x48)));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x53 = -28931LL;
	int8_t x55 = 48;
	int32_t x56 = INT32_MAX;
	int64_t t11 = -26931482LL;

    t11 = (x53/(x54!=(x55%x56)));

    if (t11 != -28931LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x58 = -5704078202797408LL;
	uint8_t x59 = UINT8_MAX;
	uint64_t x60 = 43LLU;
	volatile int64_t t12 = 78LL;

    t12 = (x57/(x58!=(x59%x60)));

    if (t12 != -94LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x62 = 31286915781774446LLU;
	uint16_t x63 = 0U;
	int8_t x64 = -1;
	volatile int64_t t13 = INT64_MIN;

    t13 = (x61/(x62!=(x63%x64)));

    if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x65 = INT8_MAX;
	static int32_t x66 = INT32_MIN;
	uint64_t x68 = 11637053LLU;
	volatile int32_t t14 = -6;

    t14 = (x65/(x66!=(x67%x68)));

    if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x69 = -1;
	int16_t x70 = INT16_MIN;
	uint64_t x71 = UINT64_MAX;
	int32_t x72 = INT32_MIN;
	volatile int32_t t15 = 1680;

    t15 = (x69/(x70!=(x71%x72)));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = -13218LL;
	uint8_t x74 = 2U;
	int8_t x75 = 0;
	int64_t t16 = 1LL;

    t16 = (x73/(x74!=(x75%x76)));

    if (t16 != -13218LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x78 = INT32_MIN;
	volatile uint64_t x79 = UINT64_MAX;
	uint64_t x80 = 2761LLU;
	volatile int32_t t17 = 1900;

    t17 = (x77/(x78!=(x79%x80)));

    if (t17 != 61) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x81 = 0U;
	uint64_t x82 = UINT64_MAX;
	static int64_t x83 = 433110902744892208LL;
	volatile int32_t t18 = -1;

    t18 = (x81/(x82!=(x83%x84)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = INT64_MAX;
	uint16_t x86 = 1695U;
	int8_t x87 = -1;
	uint16_t x88 = UINT16_MAX;
	int64_t t19 = INT64_MAX;

    t19 = (x85/(x86!=(x87%x88)));

    if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x89 = 24U;
	int32_t x90 = 514722173;
	volatile uint32_t x91 = UINT32_MAX;
	int32_t t20 = 13;

    t20 = (x89/(x90!=(x91%x92)));

    if (t20 != 24) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x94 = 0LL;
	int64_t x96 = INT64_MIN;
	static volatile uint64_t t21 = UINT64_MAX;

    t21 = (x93/(x94!=(x95%x96)));

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x97 = UINT32_MAX;
	static uint16_t x98 = 2020U;
	volatile int32_t x99 = INT32_MIN;

    t22 = (x97/(x98!=(x99%x100)));

    if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x101 = 6LL;
	static volatile int16_t x103 = -777;
	static int16_t x104 = -1;
	volatile int64_t t23 = 40191585351691LL;

    t23 = (x101/(x102!=(x103%x104)));

    if (t23 != 6LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x105 = INT32_MIN;
	int16_t x106 = INT16_MIN;
	static uint64_t x107 = 0LLU;
	uint32_t x108 = 622U;
	volatile int32_t t24 = INT32_MIN;

    t24 = (x105/(x106!=(x107%x108)));

    if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x109 = -1;
	static uint16_t x110 = UINT16_MAX;
	int64_t x111 = -1LL;
	int32_t x112 = -1;

    t25 = (x109/(x110!=(x111%x112)));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x113 = INT16_MIN;
	int32_t x114 = INT32_MAX;
	int64_t x116 = INT64_MIN;
	static int32_t t26 = -289765399;

    t26 = (x113/(x114!=(x115%x116)));

    if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = 3288280;
	uint64_t x120 = UINT64_MAX;
	int32_t t27 = 35;

    t27 = (x117/(x118!=(x119%x120)));

    if (t27 != 3288280) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x121 = -1;
	int64_t x122 = INT64_MAX;
	int32_t x123 = -3331932;
	int32_t x124 = 71;
	volatile int32_t t28 = -1566;

    t28 = (x121/(x122!=(x123%x124)));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x125 = INT16_MAX;
	int8_t x126 = INT8_MIN;
	int32_t x128 = -1161597;
	volatile int32_t t29 = -8897;

    t29 = (x125/(x126!=(x127%x128)));

    if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x129 = 6U;
	uint32_t x130 = UINT32_MAX;
	static int8_t x132 = -28;
	int32_t t30 = -107;

    t30 = (x129/(x130!=(x131%x132)));

    if (t30 != 6) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x133 = INT16_MIN;
	volatile uint64_t x134 = UINT64_MAX;
	int64_t x135 = -64822919783895330LL;
	static volatile int16_t x136 = -1;
	int32_t t31 = -9604;

    t31 = (x133/(x134!=(x135%x136)));

    if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x137 = 1915943U;
	uint8_t x138 = 6U;
	uint32_t x139 = 737873298U;
	uint64_t x140 = 4890061529LLU;
	volatile uint32_t t32 = 28375U;

    t32 = (x137/(x138!=(x139%x140)));

    if (t32 != 1915943U) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = INT16_MIN;
	int64_t x142 = INT64_MIN;
	uint64_t x143 = 1714812978683394552LLU;
	int16_t x144 = INT16_MAX;
	volatile int32_t t33 = -349;

    t33 = (x141/(x142!=(x143%x144)));

    if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = 2;
	uint32_t x146 = UINT32_MAX;
	static uint8_t x147 = UINT8_MAX;
	int32_t t34 = -214426229;

    t34 = (x145/(x146!=(x147%x148)));

    if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x149 = INT16_MAX;
	static int32_t x151 = INT32_MIN;
	static volatile int64_t x152 = INT64_MIN;

    t35 = (x149/(x150!=(x151%x152)));

    if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x154 = 4U;
	volatile uint64_t x156 = UINT64_MAX;

    t36 = (x153/(x154!=(x155%x156)));

    if (t36 != -36) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x158 = 1;
	uint16_t x159 = 112U;
	int32_t x160 = -46250886;

    t37 = (x157/(x158!=(x159%x160)));

    if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x162 = INT16_MAX;
	static int16_t x164 = INT16_MAX;
	volatile uint32_t t38 = 12U;

    t38 = (x161/(x162!=(x163%x164)));

    if (t38 != 68659109U) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x166 = 8673U;
	volatile int8_t x168 = -3;
	int32_t t39 = -195;

    t39 = (x165/(x166!=(x167%x168)));

    if (t39 != -202) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x169 = UINT16_MAX;
	static uint8_t x170 = 6U;
	int32_t t40 = -984880;

    t40 = (x169/(x170!=(x171%x172)));

    if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x173 = -5;
	static int8_t x174 = INT8_MIN;
	volatile int16_t x176 = INT16_MIN;
	static int32_t t41 = -19729810;

    t41 = (x173/(x174!=(x175%x176)));

    if (t41 != -5) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x177 = -1;
	uint8_t x178 = UINT8_MAX;
	int16_t x179 = -1;
	uint64_t x180 = 127825937805731LLU;
	volatile int32_t t42 = 100215;

    t42 = (x177/(x178!=(x179%x180)));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x181 = UINT8_MAX;
	uint64_t x183 = UINT64_MAX;
	volatile uint16_t x184 = 6210U;
	int32_t t43 = -197422799;

    t43 = (x181/(x182!=(x183%x184)));

    if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x185 = 0U;
	volatile int16_t x187 = -1;
	volatile int8_t x188 = INT8_MIN;
	volatile int32_t t44 = 30686682;

    t44 = (x185/(x186!=(x187%x188)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x189 = -1;
	int16_t x191 = INT16_MIN;
	int32_t x192 = INT32_MIN;
	int32_t t45 = 48236134;

    t45 = (x189/(x190!=(x191%x192)));

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x193 = INT32_MIN;
	uint16_t x195 = 1U;
	volatile uint64_t x196 = 460551686783563941LLU;

    t46 = (x193/(x194!=(x195%x196)));

    if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x197 = 566732189LL;
	uint16_t x198 = UINT16_MAX;
	int32_t x199 = INT32_MAX;
	int8_t x200 = -1;
	volatile int64_t t47 = -440699988265106LL;

    t47 = (x197/(x198!=(x199%x200)));

    if (t47 != 566732189LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x201 = UINT64_MAX;
	int16_t x202 = -1;
	volatile uint64_t t48 = UINT64_MAX;

    t48 = (x201/(x202!=(x203%x204)));

    if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x205 = INT32_MIN;
	volatile int16_t x206 = INT16_MIN;
	volatile int8_t x207 = INT8_MIN;
	int8_t x208 = INT8_MAX;
	volatile int32_t t49 = INT32_MIN;

    t49 = (x205/(x206!=(x207%x208)));

    if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x214 = UINT32_MAX;
	volatile int32_t x215 = -34940;
	static int32_t x216 = INT32_MIN;
	volatile int32_t t50 = -268694972;

    t50 = (x213/(x214!=(x215%x216)));

    if (t50 != 255318) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x217 = -71787;
	volatile int64_t x219 = 107922LL;
	uint16_t x220 = UINT16_MAX;

    t51 = (x217/(x218!=(x219%x220)));

    if (t51 != -71787) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x221 = 152601388006LL;
	uint16_t x222 = UINT16_MAX;
	int16_t x223 = -1;
	int8_t x224 = 4;
	int64_t t52 = 202LL;

    t52 = (x221/(x222!=(x223%x224)));

    if (t52 != 152601388006LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x225 = INT8_MIN;
	int64_t x226 = 14542824LL;
	int8_t x227 = INT8_MAX;
	static uint8_t x228 = 4U;

    t53 = (x225/(x226!=(x227%x228)));

    if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x229 = 30U;
	int32_t x230 = 14760374;
	volatile int32_t x231 = INT32_MIN;
	uint64_t x232 = 172090709450770LLU;
	int32_t t54 = 510424;

    t54 = (x229/(x230!=(x231%x232)));

    if (t54 != 30) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x233 = -1LL;
	uint16_t x234 = UINT16_MAX;
	int64_t x235 = INT64_MAX;
	uint64_t x236 = UINT64_MAX;
	static volatile int64_t t55 = -386232393160LL;

    t55 = (x233/(x234!=(x235%x236)));

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x237 = 27U;
	volatile uint64_t x238 = 18737LLU;
	int8_t x239 = 7;
	int32_t t56 = -465706;

    t56 = (x237/(x238!=(x239%x240)));

    if (t56 != 27) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x241 = INT8_MIN;
	int16_t x242 = INT16_MIN;
	int64_t x243 = INT64_MAX;
	int16_t x244 = INT16_MIN;

    t57 = (x241/(x242!=(x243%x244)));

    if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x245 = 39U;
	uint32_t x246 = 2U;
	volatile uint16_t x247 = 1187U;
	volatile int16_t x248 = -1;
	uint32_t t58 = 0U;

    t58 = (x245/(x246!=(x247%x248)));

    if (t58 != 39U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x249 = UINT8_MAX;
	volatile uint32_t x251 = UINT32_MAX;
	int64_t x252 = -1LL;

    t59 = (x249/(x250!=(x251%x252)));

    if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint16_t x253 = UINT16_MAX;
	volatile uint64_t x254 = 364679082530368LLU;
	int64_t x256 = INT64_MIN;
	volatile int32_t t60 = -375276;

    t60 = (x253/(x254!=(x255%x256)));

    if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x257 = 18852099605LLU;
	int32_t x258 = -72;

    t61 = (x257/(x258!=(x259%x260)));

    if (t61 != 18852099605LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x261 = 9U;
	int64_t x263 = INT64_MIN;
	static int16_t x264 = 5674;
	volatile int32_t t62 = 331819;

    t62 = (x261/(x262!=(x263%x264)));

    if (t62 != 9) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x265 = -1;
	static uint8_t x267 = UINT8_MAX;
	int32_t x268 = -1;
	volatile int32_t t63 = -38294;

    t63 = (x265/(x266!=(x267%x268)));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x270 = -1399;
	volatile int32_t t64 = -676134;

    t64 = (x269/(x270!=(x271%x272)));

    if (t64 != 4) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x273 = 10414U;
	int16_t x274 = 781;
	int32_t t65 = -3;

    t65 = (x273/(x274!=(x275%x276)));

    if (t65 != 10414) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x277 = 7223U;
	static uint32_t x278 = 122764140U;
	int64_t x279 = 64047LL;
	uint64_t x280 = 4405450103809121LLU;

    t66 = (x277/(x278!=(x279%x280)));

    if (t66 != 7223) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x281 = INT64_MIN;
	uint8_t x282 = 10U;
	uint8_t x284 = UINT8_MAX;

    t67 = (x281/(x282!=(x283%x284)));

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x285 = INT64_MIN;
	int64_t x286 = -1LL;
	static int16_t x288 = INT16_MIN;

    t68 = (x285/(x286!=(x287%x288)));

    if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x289 = -1;
	int64_t x290 = INT64_MAX;
	int64_t x291 = INT64_MAX;
	uint32_t x292 = 569U;
	int32_t t69 = 130250;

    t69 = (x289/(x290!=(x291%x292)));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x293 = -532314625569692LL;
	static int8_t x295 = INT8_MIN;
	int32_t x296 = INT32_MIN;
	volatile int64_t t70 = 29LL;

    t70 = (x293/(x294!=(x295%x296)));

    if (t70 != -532314625569692LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x297 = INT64_MIN;
	static volatile uint64_t x298 = 17115868086535LLU;
	volatile int16_t x299 = -1;
	volatile int64_t t71 = INT64_MIN;

    t71 = (x297/(x298!=(x299%x300)));

    if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x301 = INT64_MAX;
	int64_t x302 = INT64_MIN;
	uint64_t x303 = 2313152476115999066LLU;
	uint32_t x304 = UINT32_MAX;
	volatile int64_t t72 = INT64_MAX;

    t72 = (x301/(x302!=(x303%x304)));

    if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x305 = 1858468195423LLU;
	int8_t x306 = INT8_MIN;
	int8_t x307 = INT8_MAX;
	int8_t x308 = INT8_MAX;
	volatile uint64_t t73 = 12837884LLU;

    t73 = (x305/(x306!=(x307%x308)));

    if (t73 != 1858468195423LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x309 = -1;
	uint64_t x310 = 8401715120753LLU;
	int32_t x312 = INT32_MIN;
	volatile int32_t t74 = 20691507;

    t74 = (x309/(x310!=(x311%x312)));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x315 = INT16_MIN;
	uint64_t x316 = UINT64_MAX;
	int32_t t75 = 0;

    t75 = (x313/(x314!=(x315%x316)));

    if (t75 != 1104) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x318 = INT64_MAX;
	static int8_t x319 = INT8_MIN;
	int32_t x320 = INT32_MAX;
	volatile int32_t t76 = INT32_MIN;

    t76 = (x317/(x318!=(x319%x320)));

    if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x321 = 1;
	volatile int8_t x322 = INT8_MAX;
	int8_t x324 = INT8_MIN;
	int32_t t77 = -264543781;

    t77 = (x321/(x322!=(x323%x324)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x326 = 6U;
	static uint16_t x327 = 44U;
	static int8_t x328 = INT8_MAX;
	volatile int32_t t78 = INT32_MIN;

    t78 = (x325/(x326!=(x327%x328)));

    if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x329 = UINT8_MAX;
	volatile int32_t t79 = -9359266;

    t79 = (x329/(x330!=(x331%x332)));

    if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x333 = 501657940LLU;
	static uint32_t x334 = 2U;
	int64_t x336 = INT64_MIN;
	uint64_t t80 = 162LLU;

    t80 = (x333/(x334!=(x335%x336)));

    if (t80 != 501657940LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int8_t x338 = INT8_MIN;
	volatile int64_t x340 = -561508588349932324LL;
	static int32_t t81 = INT32_MIN;

    t81 = (x337/(x338!=(x339%x340)));

    if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x341 = INT8_MIN;
	int64_t x343 = -1LL;
	int32_t x344 = 16493;
	static volatile int32_t t82 = -19;

    t82 = (x341/(x342!=(x343%x344)));

    if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x345 = 28753872;
	int64_t x346 = 41786975016619369LL;
	int8_t x347 = -1;
	int64_t x348 = -1LL;
	int32_t t83 = -7276328;

    t83 = (x345/(x346!=(x347%x348)));

    if (t83 != 28753872) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x349 = INT8_MIN;
	volatile int8_t x350 = -1;
	volatile uint64_t x351 = 357168321415LLU;
	volatile int16_t x352 = INT16_MAX;
	volatile int32_t t84 = -8782479;

    t84 = (x349/(x350!=(x351%x352)));

    if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x353 = INT32_MIN;
	int64_t x354 = INT64_MIN;
	uint8_t x355 = UINT8_MAX;
	uint32_t x356 = 4U;

    t85 = (x353/(x354!=(x355%x356)));

    if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x357 = -1;
	int16_t x358 = INT16_MIN;
	volatile int64_t x359 = -118074630037LL;
	static int32_t t86 = -1;

    t86 = (x357/(x358!=(x359%x360)));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x362 = 18995U;
	int16_t x363 = INT16_MIN;
	int32_t x364 = -2649582;
	static volatile int32_t t87 = 349937135;

    t87 = (x361/(x362!=(x363%x364)));

    if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x365 = INT16_MAX;
	int64_t x366 = -28378239LL;
	uint64_t x367 = UINT64_MAX;
	uint64_t x368 = UINT64_MAX;
	int32_t t88 = 1675;

    t88 = (x365/(x366!=(x367%x368)));

    if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x369 = 3U;
	volatile uint32_t x370 = 1709769855U;
	volatile int64_t x371 = -1LL;
	int32_t x372 = INT32_MIN;
	volatile uint32_t t89 = 190U;

    t89 = (x369/(x370!=(x371%x372)));

    if (t89 != 3U) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x373 = INT32_MIN;
	uint8_t x374 = 49U;
	int32_t x375 = INT32_MIN;

    t90 = (x373/(x374!=(x375%x376)));

    if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x377 = -1LL;
	static volatile int64_t x378 = -1LL;
	int64_t x379 = 10297LL;
	uint8_t x380 = 10U;
	int64_t t91 = 823642LL;

    t91 = (x377/(x378!=(x379%x380)));

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x381 = 4840LLU;
	static volatile int8_t x382 = INT8_MIN;
	uint64_t t92 = 770924589352532LLU;

    t92 = (x381/(x382!=(x383%x384)));

    if (t92 != 4840LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x385 = 5;
	volatile int8_t x386 = INT8_MIN;
	uint32_t x387 = 12U;
	volatile int32_t t93 = -37;

    t93 = (x385/(x386!=(x387%x388)));

    if (t93 != 5) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x389 = 1186U;
	int16_t x391 = INT16_MIN;
	int64_t x392 = INT64_MIN;
	volatile uint32_t t94 = 39507U;

    t94 = (x389/(x390!=(x391%x392)));

    if (t94 != 1186U) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x393 = 2;
	int32_t x394 = INT32_MIN;
	int64_t x396 = INT64_MIN;
	int32_t t95 = 7;

    t95 = (x393/(x394!=(x395%x396)));

    if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x398 = UINT8_MAX;
	int64_t x400 = -571837295LL;
	volatile uint32_t t96 = 873445U;

    t96 = (x397/(x398!=(x399%x400)));

    if (t96 != 254769891U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x402 = -1LL;
	volatile int16_t x403 = INT16_MIN;
	int16_t x404 = -1;
	volatile int32_t t97 = -58;

    t97 = (x401/(x402!=(x403%x404)));

    if (t97 != 11) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x405 = UINT32_MAX;
	uint16_t x406 = 120U;
	static int16_t x407 = 205;

    t98 = (x405/(x406!=(x407%x408)));

    if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x409 = INT16_MIN;
	int8_t x411 = 32;
	uint32_t x412 = 114469U;
	volatile int32_t t99 = 58;

    t99 = (x409/(x410!=(x411%x412)));

    if (t99 != -32768) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x416 = 1;
	static volatile int32_t t100 = 0;

    t100 = (x413/(x414!=(x415%x416)));

    if (t100 != -23) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x417 = 118614U;
	int8_t x418 = 10;
	uint16_t x419 = 38U;
	uint32_t x420 = 2255U;
	uint32_t t101 = 1984428U;

    t101 = (x417/(x418!=(x419%x420)));

    if (t101 != 118614U) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x421 = INT64_MIN;
	uint32_t x422 = 217729U;
	int64_t x423 = 7685214LL;
	uint16_t x424 = UINT16_MAX;

    t102 = (x421/(x422!=(x423%x424)));

    if (t102 != INT64_MIN) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x425 = 33U;
	volatile int32_t x426 = 13501887;
	uint16_t x427 = UINT16_MAX;
	int32_t x428 = INT32_MIN;
	volatile int32_t t103 = 256;

    t103 = (x425/(x426!=(x427%x428)));

    if (t103 != 33) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x430 = UINT8_MAX;
	uint8_t x432 = 8U;
	int32_t t104 = -442;

    t104 = (x429/(x430!=(x431%x432)));

    if (t104 != 30) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x433 = INT16_MAX;
	int32_t x434 = -1;
	static uint32_t x435 = 7U;
	static uint8_t x436 = UINT8_MAX;
	volatile int32_t t105 = 1;

    t105 = (x433/(x434!=(x435%x436)));

    if (t105 != 32767) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x437 = 0U;
	volatile int8_t x438 = -1;
	static uint16_t x439 = UINT16_MAX;
	uint64_t x440 = 22664LLU;
	int32_t t106 = 255;

    t106 = (x437/(x438!=(x439%x440)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x442 = 0;
	volatile int64_t x443 = 908765990887408LL;
	uint64_t x444 = 74LLU;
	volatile int32_t t107 = -15;

    t107 = (x441/(x442!=(x443%x444)));

    if (t107 != 32767) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x446 = INT16_MIN;
	static volatile uint64_t x448 = UINT64_MAX;
	volatile int64_t t108 = 65326020293478LL;

    t108 = (x445/(x446!=(x447%x448)));

    if (t108 != 6929457000LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x449 = -1LL;
	uint64_t x450 = 27453LLU;
	uint8_t x451 = UINT8_MAX;
	uint64_t x452 = 5327LLU;
	int64_t t109 = 37915LL;

    t109 = (x449/(x450!=(x451%x452)));

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x454 = INT16_MIN;
	int32_t x455 = INT32_MIN;
	static volatile uint32_t x456 = UINT32_MAX;

    t110 = (x453/(x454!=(x455%x456)));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x457 = INT8_MAX;
	static uint32_t x458 = UINT32_MAX;
	int16_t x459 = INT16_MIN;

    t111 = (x457/(x458!=(x459%x460)));

    if (t111 != 127) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x461 = 0U;
	static uint32_t x463 = 84U;
	int64_t x464 = INT64_MIN;

    t112 = (x461/(x462!=(x463%x464)));

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x466 = -46;
	volatile uint8_t x467 = 2U;
	int32_t x468 = INT32_MIN;

    t113 = (x465/(x466!=(x467%x468)));

    if (t113 != -7494966LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x469 = INT32_MIN;
	int32_t x471 = INT32_MAX;
	int8_t x472 = 2;

    t114 = (x469/(x470!=(x471%x472)));

    if (t114 != INT32_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x473 = INT64_MAX;
	int16_t x474 = -14987;
	uint16_t x475 = 20U;
	volatile uint8_t x476 = UINT8_MAX;
	static int64_t t115 = INT64_MAX;

    t115 = (x473/(x474!=(x475%x476)));

    if (t115 != INT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x477 = 306318037507942616LLU;
	int32_t x478 = 1004889465;
	int16_t x479 = INT16_MAX;
	volatile uint64_t x480 = UINT64_MAX;
	volatile uint64_t t116 = 513477956550LLU;

    t116 = (x477/(x478!=(x479%x480)));

    if (t116 != 306318037507942616LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x481 = INT32_MIN;
	uint32_t x483 = UINT32_MAX;
	volatile uint8_t x484 = 22U;
	int32_t t117 = INT32_MIN;

    t117 = (x481/(x482!=(x483%x484)));

    if (t117 != INT32_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x485 = INT16_MIN;
	static int16_t x486 = INT16_MIN;
	uint32_t x488 = 1009U;
	static volatile int32_t t118 = -56;

    t118 = (x485/(x486!=(x487%x488)));

    if (t118 != -32768) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x490 = UINT32_MAX;
	uint64_t x491 = 4995767LLU;
	int64_t t119 = INT64_MIN;

    t119 = (x489/(x490!=(x491%x492)));

    if (t119 != INT64_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x493 = -10;
	int8_t x494 = INT8_MIN;
	volatile int16_t x495 = 1072;
	int32_t x496 = -1;

    t120 = (x493/(x494!=(x495%x496)));

    if (t120 != -10) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x498 = -1LL;
	static volatile uint64_t x499 = 203583673LLU;
	volatile int32_t x500 = INT32_MIN;

    t121 = (x497/(x498!=(x499%x500)));

    if (t121 != INT32_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int32_t x501 = 17;
	uint64_t x504 = UINT64_MAX;
	volatile int32_t t122 = 236;

    t122 = (x501/(x502!=(x503%x504)));

    if (t122 != 17) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x506 = 36;
	static uint32_t x507 = 163U;

    t123 = (x505/(x506!=(x507%x508)));

    if (t123 != -3235) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x509 = 2U;
	volatile uint64_t x512 = UINT64_MAX;
	volatile uint32_t t124 = 110554067U;

    t124 = (x509/(x510!=(x511%x512)));

    if (t124 != 2U) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x513 = INT16_MAX;
	volatile int16_t x514 = INT16_MIN;
	int8_t x515 = -17;
	volatile int32_t t125 = 2;

    t125 = (x513/(x514!=(x515%x516)));

    if (t125 != 32767) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x518 = INT64_MAX;
	static volatile int64_t x519 = -2828920339230717856LL;
	int8_t x520 = INT8_MIN;
	static volatile int64_t t126 = INT64_MAX;

    t126 = (x517/(x518!=(x519%x520)));

    if (t126 != INT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x522 = INT64_MAX;
	int64_t x523 = -579218LL;
	volatile int32_t t127 = 839;

    t127 = (x521/(x522!=(x523%x524)));

    if (t127 != 482) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x525 = 0U;
	int32_t x526 = INT32_MIN;
	volatile int8_t x527 = -1;
	uint32_t x528 = 13U;
	static int32_t t128 = 1;

    t128 = (x525/(x526!=(x527%x528)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x530 = INT32_MIN;
	int8_t x532 = -1;
	uint32_t t129 = UINT32_MAX;

    t129 = (x529/(x530!=(x531%x532)));

    if (t129 != UINT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x533 = -1;
	uint16_t x534 = 55U;
	static int8_t x535 = 60;
	volatile int16_t x536 = INT16_MAX;
	volatile int32_t t130 = 543;

    t130 = (x533/(x534!=(x535%x536)));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x537 = -1;
	int32_t x538 = -7113;
	static int8_t x539 = -1;
	int32_t x540 = INT32_MIN;

    t131 = (x537/(x538!=(x539%x540)));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int32_t x545 = INT32_MIN;
	int64_t x546 = -7772960969022742LL;
	volatile uint16_t x547 = 823U;
	int32_t t132 = INT32_MIN;

    t132 = (x545/(x546!=(x547%x548)));

    if (t132 != INT32_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x550 = INT8_MIN;
	int32_t x551 = INT32_MIN;
	uint32_t t133 = 291U;

    t133 = (x549/(x550!=(x551%x552)));

    if (t133 != 15234013U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x555 = 2379U;
	uint32_t t134 = 2U;

    t134 = (x553/(x554!=(x555%x556)));

    if (t134 != 6U) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int64_t x557 = -337605688LL;
	uint8_t x558 = 90U;
	static volatile uint64_t x559 = 5544295720LLU;
	int16_t x560 = -1;
	volatile int64_t t135 = -434282LL;

    t135 = (x557/(x558!=(x559%x560)));

    if (t135 != -337605688LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x561 = UINT32_MAX;
	volatile int64_t x562 = -1LL;
	int64_t x563 = 9677634LL;
	int8_t x564 = INT8_MIN;
	uint32_t t136 = UINT32_MAX;

    t136 = (x561/(x562!=(x563%x564)));

    if (t136 != UINT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x565 = INT8_MAX;
	uint16_t x566 = UINT16_MAX;
	static int8_t x567 = INT8_MAX;
	uint64_t x568 = 1097968LLU;
	static int32_t t137 = 8112197;

    t137 = (x565/(x566!=(x567%x568)));

    if (t137 != 127) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x569 = UINT8_MAX;
	volatile uint32_t x570 = UINT32_MAX;
	int64_t x571 = -1504635021800467LL;
	int8_t x572 = 34;
	volatile int32_t t138 = 6433;

    t138 = (x569/(x570!=(x571%x572)));

    if (t138 != 255) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x573 = INT8_MIN;
	int32_t x574 = -611299057;
	int64_t x575 = INT64_MIN;
	volatile int32_t x576 = INT32_MIN;
	static volatile int32_t t139 = -257765254;

    t139 = (x573/(x574!=(x575%x576)));

    if (t139 != -128) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x577 = UINT16_MAX;
	volatile int8_t x578 = -27;
	int64_t x579 = -359LL;
	volatile int32_t t140 = -57887;

    t140 = (x577/(x578!=(x579%x580)));

    if (t140 != 65535) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x581 = 0;
	int64_t x582 = INT64_MIN;
	int8_t x583 = -1;
	volatile uint8_t x584 = 61U;
	int32_t t141 = 14819;

    t141 = (x581/(x582!=(x583%x584)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x589 = 0;
	int8_t x590 = INT8_MIN;
	int8_t x591 = INT8_MAX;
	uint32_t x592 = UINT32_MAX;
	int32_t t142 = 18648595;

    t142 = (x589/(x590!=(x591%x592)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x593 = INT32_MIN;
	uint64_t x594 = 12764400842LLU;
	int16_t x595 = INT16_MIN;
	int16_t x596 = INT16_MAX;
	int32_t t143 = INT32_MIN;

    t143 = (x593/(x594!=(x595%x596)));

    if (t143 != INT32_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x597 = INT32_MIN;
	static int8_t x598 = -23;
	int64_t x599 = -64038156933215267LL;
	int32_t x600 = 1;

    t144 = (x597/(x598!=(x599%x600)));

    if (t144 != INT32_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x601 = 248428160LL;
	static int8_t x603 = -1;
	int64_t x604 = INT64_MAX;
	volatile int64_t t145 = -185699264413974507LL;

    t145 = (x601/(x602!=(x603%x604)));

    if (t145 != 248428160LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x606 = -19;
	uint64_t x607 = 7675718461722150397LLU;
	int64_t x608 = INT64_MAX;
	int32_t t146 = 270250796;

    t146 = (x605/(x606!=(x607%x608)));

    if (t146 != 65535) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x609 = 17216142U;
	int8_t x610 = INT8_MIN;
	int16_t x611 = INT16_MIN;
	uint32_t t147 = 936263506U;

    t147 = (x609/(x610!=(x611%x612)));

    if (t147 != 17216142U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x613 = UINT16_MAX;
	uint16_t x614 = 65U;
	int16_t x615 = -1;
	static int32_t x616 = -2;
	int32_t t148 = -31124;

    t148 = (x613/(x614!=(x615%x616)));

    if (t148 != 65535) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x617 = INT8_MIN;
	int32_t x618 = INT32_MIN;
	volatile int32_t t149 = 1119;

    t149 = (x617/(x618!=(x619%x620)));

    if (t149 != -128) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x621 = 1;
	uint16_t x622 = 27913U;
	static uint64_t x623 = UINT64_MAX;
	int16_t x624 = INT16_MIN;
	volatile int32_t t150 = -449510907;

    t150 = (x621/(x622!=(x623%x624)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x625 = INT8_MAX;
	static uint8_t x626 = 27U;
	int8_t x627 = 1;
	uint16_t x628 = 151U;
	static volatile int32_t t151 = 6;

    t151 = (x625/(x626!=(x627%x628)));

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x629 = -3656;
	volatile int16_t x630 = INT16_MIN;
	volatile int32_t x631 = -26642;
	volatile int8_t x632 = 3;
	static volatile int32_t t152 = 38898;

    t152 = (x629/(x630!=(x631%x632)));

    if (t152 != -3656) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x633 = INT16_MIN;
	int32_t x634 = -242640618;
	static uint32_t x635 = UINT32_MAX;
	volatile int32_t t153 = 1;

    t153 = (x633/(x634!=(x635%x636)));

    if (t153 != -32768) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x637 = -1;
	volatile uint8_t x638 = 27U;
	volatile uint16_t x639 = 467U;
	int16_t x640 = INT16_MAX;
	static int32_t t154 = -12764;

    t154 = (x637/(x638!=(x639%x640)));

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x641 = -234;
	int16_t x642 = -7;
	int32_t x643 = -1;
	uint32_t x644 = 359431U;
	int32_t t155 = -490731;

    t155 = (x641/(x642!=(x643%x644)));

    if (t155 != -234) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x646 = 1U;
	int16_t x647 = -1;
	uint8_t x648 = UINT8_MAX;
	static volatile int64_t t156 = -38747LL;

    t156 = (x645/(x646!=(x647%x648)));

    if (t156 != 2LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x649 = 591356U;
	int32_t x651 = 65;
	int64_t x652 = INT64_MIN;
	uint32_t t157 = 3241149U;

    t157 = (x649/(x650!=(x651%x652)));

    if (t157 != 591356U) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x653 = INT8_MIN;
	int16_t x655 = INT16_MAX;
	volatile int32_t t158 = -7069;

    t158 = (x653/(x654!=(x655%x656)));

    if (t158 != -128) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x657 = 0;
	static int32_t x658 = INT32_MIN;
	volatile int8_t x659 = 11;
	uint8_t x660 = UINT8_MAX;

    t159 = (x657/(x658!=(x659%x660)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x662 = 1;
	uint8_t x664 = 7U;
	static volatile int32_t t160 = -8596;

    t160 = (x661/(x662!=(x663%x664)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x665 = 491643LL;
	uint8_t x666 = 118U;
	int32_t x667 = INT32_MAX;
	int32_t x668 = -988;
	volatile int64_t t161 = 2095568690671712347LL;

    t161 = (x665/(x666!=(x667%x668)));

    if (t161 != 491643LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x669 = INT32_MIN;
	static uint16_t x670 = 37U;
	volatile int64_t x671 = -31549459573510096LL;

    t162 = (x669/(x670!=(x671%x672)));

    if (t162 != INT32_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x673 = INT16_MIN;
	uint8_t x674 = UINT8_MAX;
	int8_t x675 = INT8_MIN;
	int64_t x676 = -1LL;
	volatile int32_t t163 = -51354;

    t163 = (x673/(x674!=(x675%x676)));

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x677 = 14;
	int64_t x679 = INT64_MIN;
	volatile uint16_t x680 = UINT16_MAX;
	volatile int32_t t164 = 380;

    t164 = (x677/(x678!=(x679%x680)));

    if (t164 != 14) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x681 = INT16_MIN;

    t165 = (x681/(x682!=(x683%x684)));

    if (t165 != -32768) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x689 = INT32_MIN;
	int64_t x690 = 12LL;

    t166 = (x689/(x690!=(x691%x692)));

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x693 = INT16_MAX;
	uint8_t x695 = UINT8_MAX;
	int32_t t167 = 96;

    t167 = (x693/(x694!=(x695%x696)));

    if (t167 != 32767) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x698 = INT32_MAX;
	uint32_t x699 = 248811498U;
	int64_t x700 = INT64_MAX;
	volatile uint32_t t168 = 87186204U;

    t168 = (x697/(x698!=(x699%x700)));

    if (t168 != 14152515U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x705 = 1LLU;
	volatile int32_t x706 = -2;
	int8_t x707 = INT8_MAX;
	volatile int8_t x708 = -1;
	uint64_t t169 = 255783LLU;

    t169 = (x705/(x706!=(x707%x708)));

    if (t169 != 1LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x709 = 105LLU;
	int16_t x710 = INT16_MIN;
	int64_t x711 = INT64_MAX;
	volatile uint64_t t170 = 14LLU;

    t170 = (x709/(x710!=(x711%x712)));

    if (t170 != 105LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x713 = INT64_MIN;
	int32_t x715 = INT32_MIN;
	int8_t x716 = INT8_MAX;
	volatile int64_t t171 = INT64_MIN;

    t171 = (x713/(x714!=(x715%x716)));

    if (t171 != INT64_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x717 = INT16_MIN;
	int64_t x719 = INT64_MIN;
	int32_t x720 = INT32_MAX;
	int32_t t172 = 24;

    t172 = (x717/(x718!=(x719%x720)));

    if (t172 != -32768) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x722 = UINT8_MAX;
	uint32_t x723 = UINT32_MAX;
	int16_t x724 = -1;
	volatile int64_t t173 = INT64_MAX;

    t173 = (x721/(x722!=(x723%x724)));

    if (t173 != INT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x725 = INT32_MIN;
	int16_t x726 = INT16_MAX;
	static int64_t x728 = -15287808264LL;
	volatile int32_t t174 = INT32_MIN;

    t174 = (x725/(x726!=(x727%x728)));

    if (t174 != INT32_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x729 = -22;
	int32_t x730 = INT32_MIN;
	int16_t x731 = INT16_MIN;
	volatile int16_t x732 = INT16_MAX;
	volatile int32_t t175 = -16262;

    t175 = (x729/(x730!=(x731%x732)));

    if (t175 != -22) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x734 = -1;
	int32_t x735 = -305806951;
	int8_t x736 = INT8_MIN;
	static volatile int32_t t176 = 0;

    t176 = (x733/(x734!=(x735%x736)));

    if (t176 != -2) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x739 = 4U;
	int8_t x740 = INT8_MIN;

    t177 = (x737/(x738!=(x739%x740)));

    if (t177 != 255) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x745 = 7889111U;
	int64_t x746 = INT64_MIN;
	volatile uint16_t x747 = 13255U;
	int16_t x748 = INT16_MIN;
	static uint32_t t178 = 110529298U;

    t178 = (x745/(x746!=(x747%x748)));

    if (t178 != 7889111U) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x749 = INT8_MIN;
	int8_t x750 = -1;
	uint16_t x751 = 12932U;

    t179 = (x749/(x750!=(x751%x752)));

    if (t179 != -128) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x753 = INT32_MIN;
	int16_t x755 = -1;
	volatile int32_t t180 = INT32_MIN;

    t180 = (x753/(x754!=(x755%x756)));

    if (t180 != INT32_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x758 = -1;
	int64_t x759 = INT64_MIN;
	uint8_t x760 = 19U;
	volatile int32_t t181 = -254;

    t181 = (x757/(x758!=(x759%x760)));

    if (t181 != 1720338) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x764 = 2;
	int32_t t182 = 45;

    t182 = (x761/(x762!=(x763%x764)));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x765 = INT32_MAX;
	volatile int64_t x767 = INT64_MIN;
	int64_t x768 = -248560574LL;

    t183 = (x765/(x766!=(x767%x768)));

    if (t183 != INT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x770 = -4;
	static uint64_t x771 = 1928546222LLU;
	volatile uint32_t t184 = 380U;

    t184 = (x769/(x770!=(x771%x772)));

    if (t184 != 2580631U) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x774 = 16075LLU;
	static uint32_t x776 = UINT32_MAX;
	int32_t t185 = -391987070;

    t185 = (x773/(x774!=(x775%x776)));

    if (t185 != -658) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x778 = INT16_MIN;
	uint8_t x779 = 124U;
	volatile int16_t x780 = -1;

    t186 = (x777/(x778!=(x779%x780)));

    if (t186 != 32767) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x781 = INT64_MIN;
	volatile int8_t x782 = INT8_MIN;
	int32_t x784 = 1773;
	static int64_t t187 = INT64_MIN;

    t187 = (x781/(x782!=(x783%x784)));

    if (t187 != INT64_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x787 = 464U;
	int64_t x788 = 17738240474LL;

    t188 = (x785/(x786!=(x787%x788)));

    if (t188 != 13U) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x790 = -2829864207100LL;
	int32_t x791 = INT32_MIN;
	int16_t x792 = INT16_MIN;
	int32_t t189 = INT32_MIN;

    t189 = (x789/(x790!=(x791%x792)));

    if (t189 != INT32_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x793 = 431;
	int16_t x794 = INT16_MAX;
	volatile int64_t x795 = INT64_MAX;
	volatile uint8_t x796 = UINT8_MAX;
	static int32_t t190 = 2349;

    t190 = (x793/(x794!=(x795%x796)));

    if (t190 != 431) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x798 = INT32_MIN;
	int8_t x800 = INT8_MIN;
	volatile int64_t t191 = INT64_MIN;

    t191 = (x797/(x798!=(x799%x800)));

    if (t191 != INT64_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x801 = -1006020;
	uint16_t x803 = 2924U;
	int8_t x804 = -1;

    t192 = (x801/(x802!=(x803%x804)));

    if (t192 != -1006020) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x805 = INT64_MIN;
	volatile int16_t x806 = INT16_MAX;
	static uint16_t x807 = 3120U;
	int32_t x808 = 1;
	int64_t t193 = INT64_MIN;

    t193 = (x805/(x806!=(x807%x808)));

    if (t193 != INT64_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x810 = -1LL;
	uint8_t x811 = 40U;
	volatile int64_t x812 = INT64_MAX;
	static int64_t t194 = -1LL;

    t194 = (x809/(x810!=(x811%x812)));

    if (t194 != -3168474831LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x813 = -677955;
	uint16_t x814 = 17U;
	int16_t x816 = INT16_MIN;

    t195 = (x813/(x814!=(x815%x816)));

    if (t195 != -677955) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x821 = UINT64_MAX;
	int32_t x823 = -1;
	int64_t x824 = INT64_MIN;
	uint64_t t196 = UINT64_MAX;

    t196 = (x821/(x822!=(x823%x824)));

    if (t196 != UINT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x825 = INT32_MAX;
	int8_t x826 = 1;
	int64_t x827 = -1LL;
	int32_t x828 = INT32_MIN;
	static volatile int32_t t197 = INT32_MAX;

    t197 = (x825/(x826!=(x827%x828)));

    if (t197 != INT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x829 = 6;
	uint8_t x830 = 3U;
	int16_t x831 = -14;
	int64_t x832 = INT64_MIN;

    t198 = (x829/(x830!=(x831%x832)));

    if (t198 != 6) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x833 = UINT32_MAX;
	static volatile int8_t x834 = INT8_MAX;
	volatile int64_t x836 = INT64_MAX;
	volatile uint32_t t199 = UINT32_MAX;

    t199 = (x833/(x834!=(x835%x836)));

    if (t199 != UINT32_MAX) { NG(); } else { ; }
	
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


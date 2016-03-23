
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
volatile int8_t x2 = INT8_MIN;
int32_t x4 = INT32_MIN;
volatile uint64_t x9 = 34050107931243LLU;
int8_t x12 = INT8_MAX;
volatile int32_t x14 = 143;
int32_t x15 = INT32_MAX;
int64_t x18 = -1LL;
uint32_t t4 = 21637U;
int64_t x42 = 14355238126LL;
static int32_t x44 = -224832;
static int32_t t10 = -41863;
static uint32_t x51 = UINT32_MAX;
static volatile int64_t x55 = INT64_MIN;
int8_t x61 = INT8_MAX;
int32_t x66 = 3926333;
int32_t x74 = INT32_MIN;
static int16_t x82 = -1;
int8_t x85 = 18;
int16_t x87 = -1;
uint32_t t21 = UINT32_MAX;
int32_t x91 = INT32_MIN;
static volatile int64_t t22 = INT64_MIN;
static int32_t t23 = 2752;
volatile int8_t x98 = 0;
uint32_t x100 = UINT32_MAX;
int64_t x106 = -1LL;
int16_t x109 = 12;
int8_t x117 = INT8_MIN;
int32_t x120 = -31915100;
int8_t x121 = -1;
uint8_t x123 = 96U;
static volatile int32_t t30 = INT32_MIN;
int32_t x125 = INT32_MAX;
int32_t x126 = INT32_MAX;
volatile int64_t x146 = 446695103245LL;
uint8_t x148 = 62U;
volatile uint8_t x149 = 26U;
int64_t x152 = 7LL;
static volatile int64_t x156 = INT64_MIN;
volatile int8_t x164 = INT8_MIN;
int32_t t40 = 1338714;
int32_t t41 = -8090703;
volatile uint32_t t42 = 283013U;
uint32_t x174 = 109U;
static int64_t x177 = INT64_MIN;
int64_t x186 = -820668LL;
int64_t x187 = 856218739431366443LL;
volatile int64_t x189 = INT64_MIN;
uint64_t x194 = UINT64_MAX;
uint16_t x200 = 163U;
uint64_t x206 = UINT64_MAX;
static int32_t x208 = INT32_MAX;
int32_t t52 = INT32_MIN;
volatile int64_t x215 = INT64_MIN;
uint32_t x216 = 370602U;
volatile int16_t x228 = INT16_MIN;
uint16_t x236 = 74U;
volatile int32_t t58 = 2487;
int32_t t59 = INT32_MAX;
volatile int8_t x241 = INT8_MIN;
uint16_t x245 = 76U;
uint32_t x247 = 46372864U;
uint32_t x248 = 4986584U;
int16_t x254 = 13;
uint8_t x261 = 0U;
int16_t x263 = INT16_MIN;
static int64_t x274 = INT64_MAX;
static int8_t x276 = -1;
int64_t x280 = INT64_MAX;
volatile int16_t x284 = INT16_MIN;
static int32_t x285 = -1;
int8_t x288 = INT8_MIN;
int32_t t76 = -446666894;
volatile int8_t x317 = INT8_MIN;
volatile int64_t t79 = 2444767941475LL;
static int8_t x321 = INT8_MIN;
uint8_t x322 = UINT8_MAX;
int32_t t80 = 0;
int16_t x325 = -1;
volatile uint8_t x330 = 8U;
int8_t x332 = INT8_MAX;
volatile int32_t x333 = INT32_MIN;
int64_t x337 = -20229451527965LL;
volatile int32_t t85 = 2357105;
int32_t x349 = INT32_MAX;
static uint8_t x352 = 86U;
static volatile uint8_t x360 = 61U;
volatile int32_t t90 = 125697;
volatile int8_t x365 = INT8_MIN;
uint64_t x366 = 438533611379282LLU;
int8_t x369 = INT8_MIN;
uint8_t x370 = 127U;
int64_t x372 = INT64_MIN;
int64_t t93 = -7848971225815LL;
int64_t x377 = 14556LL;
int8_t x380 = INT8_MIN;
static volatile int64_t x388 = -47046LL;
uint32_t x394 = UINT32_MAX;
volatile int32_t t98 = 6294;
static uint32_t x397 = 26986773U;
static volatile int64_t t99 = 535935421LL;
int32_t t100 = -46968619;
volatile int16_t x408 = 20;
uint64_t x410 = UINT64_MAX;
volatile uint8_t x412 = 3U;
int32_t t103 = 20;
int64_t x417 = -607534051LL;
volatile int64_t x420 = -1LL;
int64_t x423 = INT64_MAX;
uint16_t x429 = UINT16_MAX;
volatile int64_t x434 = INT64_MIN;
int32_t t108 = INT32_MAX;
int64_t t109 = 597LL;
static int32_t x443 = 41016;
uint64_t x448 = 5970794959862382LLU;
int16_t x453 = -582;
uint32_t x454 = 1U;
static uint64_t x455 = UINT64_MAX;
int32_t x459 = -32096;
int64_t x471 = 521LL;
int16_t x472 = -1;
int64_t t119 = INT64_MAX;
static int32_t t120 = 8053;
int8_t x489 = -1;
int8_t x490 = INT8_MAX;
int32_t x491 = 9;
static int32_t t122 = -727;
uint8_t x493 = 26U;
uint32_t x498 = UINT32_MAX;
static int32_t t124 = -73;
volatile int64_t x504 = -1LL;
static volatile int64_t t125 = 41094450273LL;
static int32_t t127 = -942;
uint32_t x516 = 176U;
int16_t x518 = 2563;
int64_t x524 = INT64_MIN;
uint16_t x528 = UINT16_MAX;
int64_t x544 = INT64_MIN;
volatile int32_t t136 = 4420;
volatile int8_t x550 = -1;
uint32_t x558 = 41U;
int64_t x564 = INT64_MIN;
int32_t x565 = -1;
static uint64_t x571 = UINT64_MAX;
int32_t t142 = INT32_MIN;
volatile int16_t x573 = INT16_MIN;
int32_t t147 = -253568966;
uint64_t x594 = 815959LLU;
int8_t x595 = -1;
uint64_t x596 = UINT64_MAX;
int64_t x602 = -1LL;
int32_t x603 = -1;
static uint8_t x614 = UINT8_MAX;
static int32_t t153 = INT32_MIN;
volatile int64_t t154 = -1037277LL;
volatile uint8_t x622 = 1U;
int64_t x624 = -53473620LL;
uint64_t t157 = 8804343LLU;
uint64_t x634 = 496715812448LLU;
int64_t x635 = INT64_MAX;
int16_t x639 = INT16_MIN;
uint32_t x648 = UINT32_MAX;
uint32_t t161 = UINT32_MAX;
volatile int8_t x654 = -63;
volatile int32_t t165 = 99135;
volatile int16_t x665 = INT16_MIN;
int8_t x666 = INT8_MIN;
int32_t t167 = 866899;
volatile uint64_t x674 = 7746LLU;
int16_t x681 = INT16_MIN;
static int64_t x682 = 122137176316476110LL;
int16_t x688 = INT16_MIN;
uint64_t x690 = UINT64_MAX;
uint8_t x691 = 1U;
int64_t x698 = INT64_MIN;
volatile int32_t x703 = -1;
static int32_t x705 = INT32_MAX;
int32_t x708 = 750;
uint8_t x710 = 35U;
static int8_t x717 = -1;
uint16_t x718 = 2U;
int32_t x721 = -1;
volatile int16_t x724 = INT16_MAX;
int32_t t180 = -108;
uint64_t x726 = 2159572547647LLU;
volatile int8_t x729 = INT8_MIN;
int64_t x736 = INT64_MIN;
volatile int64_t t183 = INT64_MIN;
static int32_t x739 = -366109;
static uint8_t x742 = UINT8_MAX;
uint64_t x746 = 44LLU;
uint8_t x754 = UINT8_MAX;
int8_t x758 = -1;
uint16_t x765 = 1U;
int16_t x776 = INT16_MIN;
int8_t x777 = INT8_MIN;
volatile int32_t x786 = 579465;
volatile int32_t t196 = 609652635;
int16_t x796 = 1048;


void f0(void) {
    	int8_t x3 = INT8_MIN;
	volatile int32_t t0 = -4052;

    t0 = (((x1&x2)>x3)|x4);

    if (t0 != -2147483647) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 2;
	int8_t x6 = 1;
	volatile uint64_t x7 = UINT64_MAX;
	int16_t x8 = -1;
	int32_t t1 = 10;

    t1 = (((x5&x6)>x7)|x8);

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x10 = INT8_MIN;
	static uint8_t x11 = 64U;
	int32_t t2 = -74513696;

    t2 = (((x9&x10)>x11)|x12);

    if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	volatile uint32_t x16 = UINT32_MAX;
	uint32_t t3 = UINT32_MAX;

    t3 = (((x13&x14)>x15)|x16);

    if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	uint32_t x19 = 46309U;
	volatile uint32_t x20 = 5590632U;

    t4 = (((x17&x18)>x19)|x20);

    if (t4 != 5590632U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 14U;
	volatile int8_t x22 = INT8_MAX;
	uint32_t x23 = UINT32_MAX;
	int32_t x24 = -761;
	int32_t t5 = -854814903;

    t5 = (((x21&x22)>x23)|x24);

    if (t5 != -761) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	uint32_t x26 = 263U;
	int32_t x27 = INT32_MIN;
	static int64_t x28 = -1509867428LL;
	volatile int64_t t6 = 7781835102891922LL;

    t6 = (((x25&x26)>x27)|x28);

    if (t6 != -1509867428LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 14224985052967750LLU;
	uint8_t x30 = 47U;
	int32_t x31 = INT32_MAX;
	static volatile int64_t x32 = INT64_MIN;
	static int64_t t7 = INT64_MIN;

    t7 = (((x29&x30)>x31)|x32);

    if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -32;
	static uint16_t x34 = UINT16_MAX;
	uint64_t x35 = 15175010118464LLU;
	uint32_t x36 = 868506U;
	volatile uint32_t t8 = 140612453U;

    t8 = (((x33&x34)>x35)|x36);

    if (t8 != 868506U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = UINT16_MAX;
	static int16_t x38 = INT16_MIN;
	volatile int16_t x39 = -14544;
	volatile int64_t x40 = -1LL;
	int64_t t9 = 75546585456LL;

    t9 = (((x37&x38)>x39)|x40);

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x41 = UINT16_MAX;
	uint16_t x43 = 3U;

    t10 = (((x41&x42)>x43)|x44);

    if (t10 != -224831) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x45 = 108U;
	uint32_t x46 = 498195U;
	volatile int8_t x47 = 2;
	int64_t x48 = -127118379LL;
	volatile int64_t t11 = 52LL;

    t11 = (((x45&x46)>x47)|x48);

    if (t11 != -127118379LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -1LL;
	volatile uint64_t x50 = 237252839773597216LLU;
	uint32_t x52 = 22704051U;
	uint32_t t12 = 62806700U;

    t12 = (((x49&x50)>x51)|x52);

    if (t12 != 22704051U) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MAX;
	int8_t x54 = -41;
	static int32_t x56 = -265666554;
	int32_t t13 = -26540;

    t13 = (((x53&x54)>x55)|x56);

    if (t13 != -265666553) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = INT64_MIN;
	int32_t x58 = -3927447;
	volatile uint32_t x59 = UINT32_MAX;
	uint32_t x60 = 28U;
	volatile uint32_t t14 = 104U;

    t14 = (((x57&x58)>x59)|x60);

    if (t14 != 28U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x62 = 74U;
	static int16_t x63 = -5718;
	int16_t x64 = INT16_MIN;
	int32_t t15 = 517;

    t15 = (((x61&x62)>x63)|x64);

    if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MAX;
	int64_t x67 = -1LL;
	int8_t x68 = 5;
	static int32_t t16 = -4539;

    t16 = (((x65&x66)>x67)|x68);

    if (t16 != 5) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint32_t x69 = 224113348U;
	uint8_t x70 = 54U;
	int8_t x71 = -1;
	static uint32_t x72 = 1218U;
	volatile uint32_t t17 = 2841311U;

    t17 = (((x69&x70)>x71)|x72);

    if (t17 != 1218U) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MAX;
	int8_t x75 = INT8_MIN;
	volatile int32_t x76 = INT32_MIN;
	int32_t t18 = -8918;

    t18 = (((x73&x74)>x75)|x76);

    if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	int16_t x78 = INT16_MAX;
	uint64_t x79 = 1886020544LLU;
	int16_t x80 = -7;
	static volatile int32_t t19 = -1982639;

    t19 = (((x77&x78)>x79)|x80);

    if (t19 != -7) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	volatile uint16_t x83 = 108U;
	int8_t x84 = INT8_MIN;
	static volatile int32_t t20 = -38297;

    t20 = (((x81&x82)>x83)|x84);

    if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x86 = 2379;
	uint32_t x88 = UINT32_MAX;

    t21 = (((x85&x86)>x87)|x88);

    if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x89 = 2;
	uint32_t x90 = UINT32_MAX;
	int64_t x92 = INT64_MIN;

    t22 = (((x89&x90)>x91)|x92);

    if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = UINT32_MAX;
	int16_t x94 = INT16_MIN;
	uint16_t x95 = 16392U;
	int32_t x96 = -1;

    t23 = (((x93&x94)>x95)|x96);

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = 21;
	int32_t x99 = -750941156;
	uint32_t t24 = UINT32_MAX;

    t24 = (((x97&x98)>x99)|x100);

    if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 8299U;
	uint64_t x102 = 331LLU;
	static uint8_t x103 = UINT8_MAX;
	static uint8_t x104 = 3U;
	int32_t t25 = -1;

    t25 = (((x101&x102)>x103)|x104);

    if (t25 != 3) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = UINT16_MAX;
	static int32_t x107 = INT32_MIN;
	uint64_t x108 = 5188LLU;
	static uint64_t t26 = 5773245775832567730LLU;

    t26 = (((x105&x106)>x107)|x108);

    if (t26 != 5189LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x110 = INT8_MAX;
	static volatile int32_t x111 = -1;
	static int64_t x112 = INT64_MIN;
	static int64_t t27 = 2136602LL;

    t27 = (((x109&x110)>x111)|x112);

    if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = 3233521840075648LL;
	static volatile int8_t x114 = 3;
	uint8_t x115 = 0U;
	static int16_t x116 = INT16_MIN;
	static volatile int32_t t28 = 0;

    t28 = (((x113&x114)>x115)|x116);

    if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x118 = INT16_MIN;
	volatile int8_t x119 = 1;
	static volatile int32_t t29 = -30;

    t29 = (((x117&x118)>x119)|x120);

    if (t29 != -31915100) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x122 = -98;
	static int32_t x124 = INT32_MIN;

    t30 = (((x121&x122)>x123)|x124);

    if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x127 = 40566LLU;
	int8_t x128 = INT8_MAX;
	volatile int32_t t31 = 1116655;

    t31 = (((x125&x126)>x127)|x128);

    if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = INT64_MAX;
	int16_t x130 = INT16_MAX;
	int32_t x131 = INT32_MAX;
	int8_t x132 = INT8_MIN;
	volatile int32_t t32 = -26739227;

    t32 = (((x129&x130)>x131)|x132);

    if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x133 = -7;
	volatile int8_t x134 = -1;
	int32_t x135 = 110;
	static int8_t x136 = -1;
	int32_t t33 = 1252;

    t33 = (((x133&x134)>x135)|x136);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	uint32_t x138 = UINT32_MAX;
	static volatile uint16_t x139 = 22105U;
	static int64_t x140 = -18644LL;
	volatile int64_t t34 = -12850829LL;

    t34 = (((x137&x138)>x139)|x140);

    if (t34 != -18643LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -943054LL;
	volatile int64_t x142 = INT64_MIN;
	volatile int32_t x143 = INT32_MIN;
	int8_t x144 = INT8_MIN;
	static int32_t t35 = 13052;

    t35 = (((x141&x142)>x143)|x144);

    if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = 1;
	static int16_t x147 = -6584;
	volatile int32_t t36 = 30;

    t36 = (((x145&x146)>x147)|x148);

    if (t36 != 63) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x150 = 257682U;
	static int8_t x151 = INT8_MIN;
	static int64_t t37 = 1874567365LL;

    t37 = (((x149&x150)>x151)|x152);

    if (t37 != 7LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = 229032U;
	int64_t x154 = -180835293844104LL;
	int8_t x155 = INT8_MIN;
	int64_t t38 = -4653LL;

    t38 = (((x153&x154)>x155)|x156);

    if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x157 = 8U;
	static int32_t x158 = -147583;
	static uint8_t x159 = 26U;
	uint64_t x160 = UINT64_MAX;
	volatile uint64_t t39 = UINT64_MAX;

    t39 = (((x157&x158)>x159)|x160);

    if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MAX;
	static int64_t x162 = INT64_MIN;
	uint16_t x163 = 6U;

    t40 = (((x161&x162)>x163)|x164);

    if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = 9918077270LL;
	volatile int64_t x166 = INT64_MAX;
	volatile int8_t x167 = INT8_MIN;
	static int16_t x168 = INT16_MAX;

    t41 = (((x165&x166)>x167)|x168);

    if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	static int8_t x170 = INT8_MIN;
	int64_t x171 = -4060306669332841783LL;
	uint32_t x172 = 1831U;

    t42 = (((x169&x170)>x171)|x172);

    if (t42 != 1831U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = 2U;
	int32_t x175 = INT32_MIN;
	volatile int32_t x176 = INT32_MIN;
	int32_t t43 = INT32_MIN;

    t43 = (((x173&x174)>x175)|x176);

    if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x178 = 1345;
	int8_t x179 = 1;
	int16_t x180 = -1;
	volatile int32_t t44 = -23519272;

    t44 = (((x177&x178)>x179)|x180);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 31U;
	volatile uint64_t x182 = 2989LLU;
	volatile int8_t x183 = -1;
	static int8_t x184 = -1;
	volatile int32_t t45 = 672457;

    t45 = (((x181&x182)>x183)|x184);

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = UINT8_MAX;
	int32_t x188 = INT32_MIN;
	int32_t t46 = INT32_MIN;

    t46 = (((x185&x186)>x187)|x188);

    if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x190 = 7;
	volatile int16_t x191 = INT16_MIN;
	volatile int8_t x192 = -5;
	volatile int32_t t47 = 129;

    t47 = (((x189&x190)>x191)|x192);

    if (t47 != -5) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MAX;
	uint64_t x195 = UINT64_MAX;
	uint32_t x196 = 1817982U;
	static uint32_t t48 = 1049744U;

    t48 = (((x193&x194)>x195)|x196);

    if (t48 != 1817982U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = 0U;
	int64_t x198 = -1LL;
	static int8_t x199 = INT8_MAX;
	volatile int32_t t49 = 40078;

    t49 = (((x197&x198)>x199)|x200);

    if (t49 != 163) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = -90623112590750LL;
	volatile int8_t x202 = 1;
	int32_t x203 = -884100335;
	int16_t x204 = -1022;
	volatile int32_t t50 = -77531;

    t50 = (((x201&x202)>x203)|x204);

    if (t50 != -1021) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = 0;
	int8_t x207 = -23;
	static volatile int32_t t51 = INT32_MAX;

    t51 = (((x205&x206)>x207)|x208);

    if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x209 = INT64_MIN;
	int16_t x210 = -1;
	uint32_t x211 = 155U;
	static volatile int32_t x212 = INT32_MIN;

    t52 = (((x209&x210)>x211)|x212);

    if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x213 = 12325;
	static int32_t x214 = INT32_MIN;
	static uint32_t t53 = 51543162U;

    t53 = (((x213&x214)>x215)|x216);

    if (t53 != 370603U) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x217 = -7;
	int64_t x218 = -741049701003LL;
	int64_t x219 = 23508341109060056LL;
	uint16_t x220 = 9764U;
	volatile int32_t t54 = -20243;

    t54 = (((x217&x218)>x219)|x220);

    if (t54 != 9764) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = -1;
	static uint32_t x222 = 132037U;
	uint32_t x223 = 58644168U;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t55 = 459463279;

    t55 = (((x221&x222)>x223)|x224);

    if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = UINT16_MAX;
	static volatile uint8_t x226 = 2U;
	uint64_t x227 = 22228962LLU;
	static volatile int32_t t56 = 79;

    t56 = (((x225&x226)>x227)|x228);

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	static int64_t x230 = INT64_MAX;
	int64_t x231 = 24441253312LL;
	int32_t x232 = 1;
	int32_t t57 = -15;

    t57 = (((x229&x230)>x231)|x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = -1;
	static volatile int64_t x234 = -1861LL;
	int64_t x235 = -1LL;

    t58 = (((x233&x234)>x235)|x236);

    if (t58 != 74) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = UINT64_MAX;
	uint64_t x238 = UINT64_MAX;
	static uint32_t x239 = 74882294U;
	int32_t x240 = INT32_MAX;

    t59 = (((x237&x238)>x239)|x240);

    if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x242 = 1U;
	static int32_t x243 = INT32_MIN;
	int8_t x244 = INT8_MAX;
	volatile int32_t t60 = 121;

    t60 = (((x241&x242)>x243)|x244);

    if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x246 = UINT8_MAX;
	static volatile uint32_t t61 = 111U;

    t61 = (((x245&x246)>x247)|x248);

    if (t61 != 4986584U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x249 = -1;
	int64_t x250 = -7LL;
	uint64_t x251 = 6LLU;
	int16_t x252 = 15580;
	volatile int32_t t62 = 1;

    t62 = (((x249&x250)>x251)|x252);

    if (t62 != 15581) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = -1;
	int16_t x255 = 25;
	uint16_t x256 = 56U;
	static int32_t t63 = -10930;

    t63 = (((x253&x254)>x255)|x256);

    if (t63 != 56) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = 3640237LLU;
	int64_t x258 = -1733LL;
	volatile int32_t x259 = INT32_MIN;
	int16_t x260 = INT16_MIN;
	int32_t t64 = 65;

    t64 = (((x257&x258)>x259)|x260);

    if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t x262 = INT32_MAX;
	int64_t x264 = INT64_MIN;
	int64_t t65 = -53726810LL;

    t65 = (((x261&x262)>x263)|x264);

    if (t65 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x265 = UINT8_MAX;
	int16_t x266 = INT16_MAX;
	static int16_t x267 = 840;
	volatile uint8_t x268 = 3U;
	static volatile int32_t t66 = -442873563;

    t66 = (((x265&x266)>x267)|x268);

    if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	int8_t x270 = INT8_MIN;
	int8_t x271 = 1;
	static int8_t x272 = 45;
	static volatile int32_t t67 = 689;

    t67 = (((x269&x270)>x271)|x272);

    if (t67 != 45) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = 22U;
	int32_t x275 = -1054458905;
	int32_t t68 = -10;

    t68 = (((x273&x274)>x275)|x276);

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MAX;
	int32_t x278 = INT32_MIN;
	int16_t x279 = -41;
	int64_t t69 = INT64_MAX;

    t69 = (((x277&x278)>x279)|x280);

    if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = 1U;
	int64_t x282 = -1LL;
	static int32_t x283 = -7;
	int32_t t70 = 2766;

    t70 = (((x281&x282)>x283)|x284);

    if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x286 = 0U;
	int32_t x287 = INT32_MAX;
	volatile int32_t t71 = -113;

    t71 = (((x285&x286)>x287)|x288);

    if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -1;
	volatile int16_t x290 = INT16_MIN;
	volatile int16_t x291 = 10;
	int64_t x292 = INT64_MAX;
	static volatile int64_t t72 = INT64_MAX;

    t72 = (((x289&x290)>x291)|x292);

    if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MAX;
	static volatile int64_t x294 = 116800703995008LL;
	int8_t x295 = INT8_MIN;
	volatile uint8_t x296 = 5U;
	volatile int32_t t73 = -5902;

    t73 = (((x293&x294)>x295)|x296);

    if (t73 != 5) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = UINT16_MAX;
	uint64_t x298 = UINT64_MAX;
	volatile int64_t x299 = -1LL;
	int8_t x300 = -41;
	int32_t t74 = 75533565;

    t74 = (((x297&x298)>x299)|x300);

    if (t74 != -41) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x301 = 13544U;
	int8_t x302 = INT8_MAX;
	uint32_t x303 = UINT32_MAX;
	int64_t x304 = INT64_MAX;
	int64_t t75 = INT64_MAX;

    t75 = (((x301&x302)>x303)|x304);

    if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x305 = -1;
	int16_t x306 = -7;
	static volatile int32_t x307 = INT32_MIN;
	int16_t x308 = INT16_MIN;

    t76 = (((x305&x306)>x307)|x308);

    if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = UINT64_MAX;
	int64_t x310 = 362512195440LL;
	int64_t x311 = INT64_MIN;
	static int32_t x312 = INT32_MIN;
	static volatile int32_t t77 = INT32_MIN;

    t77 = (((x309&x310)>x311)|x312);

    if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x313 = INT8_MIN;
	int64_t x314 = 16026477LL;
	int64_t x315 = -762360363524LL;
	uint8_t x316 = 3U;
	volatile int32_t t78 = -43;

    t78 = (((x313&x314)>x315)|x316);

    if (t78 != 3) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x318 = INT16_MIN;
	static uint8_t x319 = 0U;
	volatile int64_t x320 = -115653875693LL;

    t79 = (((x317&x318)>x319)|x320);

    if (t79 != -115653875693LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x323 = -1;
	int32_t x324 = 1385722;

    t80 = (((x321&x322)>x323)|x324);

    if (t80 != 1385723) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x326 = INT8_MIN;
	uint8_t x327 = 0U;
	int8_t x328 = INT8_MIN;
	volatile int32_t t81 = 693;

    t81 = (((x325&x326)>x327)|x328);

    if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = -22;
	int8_t x331 = -1;
	volatile int32_t t82 = -8;

    t82 = (((x329&x330)>x331)|x332);

    if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x334 = 40U;
	uint64_t x335 = 0LLU;
	static int16_t x336 = 257;
	static volatile int32_t t83 = -11;

    t83 = (((x333&x334)>x335)|x336);

    if (t83 != 257) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x338 = 29424U;
	int16_t x339 = INT16_MAX;
	int32_t x340 = 82;
	volatile int32_t t84 = -40;

    t84 = (((x337&x338)>x339)|x340);

    if (t84 != 82) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -22;
	int16_t x342 = -32;
	static int16_t x343 = INT16_MIN;
	volatile int8_t x344 = -21;

    t85 = (((x341&x342)>x343)|x344);

    if (t85 != -21) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MIN;
	static int32_t x346 = -1;
	int8_t x347 = INT8_MIN;
	volatile int32_t x348 = -24734580;
	static volatile int32_t t86 = -1;

    t86 = (((x345&x346)>x347)|x348);

    if (t86 != -24734580) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x350 = -31;
	int8_t x351 = 13;
	volatile int32_t t87 = -4;

    t87 = (((x349&x350)>x351)|x352);

    if (t87 != 87) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x353 = UINT8_MAX;
	static int16_t x354 = INT16_MAX;
	int64_t x355 = 7312070LL;
	int32_t x356 = INT32_MAX;
	static volatile int32_t t88 = INT32_MAX;

    t88 = (((x353&x354)>x355)|x356);

    if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x357 = UINT32_MAX;
	static int8_t x358 = 2;
	uint64_t x359 = 365962245375LLU;
	int32_t t89 = -8322208;

    t89 = (((x357&x358)>x359)|x360);

    if (t89 != 61) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = INT64_MIN;
	volatile int16_t x362 = 682;
	static volatile int64_t x363 = -122LL;
	int8_t x364 = 0;

    t90 = (((x361&x362)>x363)|x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x367 = -1;
	int8_t x368 = 1;
	int32_t t91 = -92;

    t91 = (((x365&x366)>x367)|x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x371 = 8LL;
	int64_t t92 = INT64_MIN;

    t92 = (((x369&x370)>x371)|x372);

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x373 = 10471;
	uint16_t x374 = 246U;
	static volatile int64_t x375 = INT64_MAX;
	int64_t x376 = -1LL;

    t93 = (((x373&x374)>x375)|x376);

    if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x378 = -1LL;
	int32_t x379 = INT32_MIN;
	volatile int32_t t94 = 168;

    t94 = (((x377&x378)>x379)|x380);

    if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x381 = UINT16_MAX;
	int32_t x382 = INT32_MIN;
	volatile int8_t x383 = INT8_MAX;
	uint8_t x384 = 14U;
	volatile int32_t t95 = 84;

    t95 = (((x381&x382)>x383)|x384);

    if (t95 != 14) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x385 = -1;
	volatile int8_t x386 = 0;
	int32_t x387 = -434090;
	static int64_t t96 = -8302012LL;

    t96 = (((x385&x386)>x387)|x388);

    if (t96 != -47045LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x389 = -1;
	uint64_t x390 = UINT64_MAX;
	uint64_t x391 = 141020174LLU;
	int16_t x392 = 5857;
	static volatile int32_t t97 = 14174231;

    t97 = (((x389&x390)>x391)|x392);

    if (t97 != 5857) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = -30;
	uint64_t x395 = UINT64_MAX;
	volatile uint16_t x396 = 13413U;

    t98 = (((x393&x394)>x395)|x396);

    if (t98 != 13413) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x398 = 63;
	volatile int8_t x399 = INT8_MIN;
	volatile int64_t x400 = -1LL;

    t99 = (((x397&x398)>x399)|x400);

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MIN;
	static int32_t x402 = 9;
	volatile uint8_t x403 = UINT8_MAX;
	int8_t x404 = INT8_MAX;

    t100 = (((x401&x402)>x403)|x404);

    if (t100 != 127) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	uint32_t x406 = 60170U;
	int32_t x407 = 39;
	volatile int32_t t101 = 22510;

    t101 = (((x405&x406)>x407)|x408);

    if (t101 != 20) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x409 = 0U;
	int32_t x411 = -1;
	volatile int32_t t102 = -5;

    t102 = (((x409&x410)>x411)|x412);

    if (t102 != 3) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x413 = 8U;
	volatile int8_t x414 = 0;
	static int64_t x415 = -1264378708LL;
	int16_t x416 = INT16_MIN;

    t103 = (((x413&x414)>x415)|x416);

    if (t103 != -32767) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x418 = -1;
	static int8_t x419 = -1;
	volatile int64_t t104 = -722380000870453LL;

    t104 = (((x417&x418)>x419)|x420);

    if (t104 != -1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = 0U;
	static volatile int16_t x422 = -34;
	int16_t x424 = -7014;
	int32_t t105 = 243989;

    t105 = (((x421&x422)>x423)|x424);

    if (t105 != -7014) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MIN;
	int16_t x426 = INT16_MIN;
	static volatile int64_t x427 = 1519793LL;
	volatile uint16_t x428 = 1406U;
	int32_t t106 = 8615;

    t106 = (((x425&x426)>x427)|x428);

    if (t106 != 1406) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x430 = INT16_MIN;
	static volatile int8_t x431 = 63;
	int16_t x432 = -1;
	static volatile int32_t t107 = -2965;

    t107 = (((x429&x430)>x431)|x432);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -457566416459LL;
	static int64_t x435 = -27621765LL;
	volatile int32_t x436 = INT32_MAX;

    t108 = (((x433&x434)>x435)|x436);

    if (t108 != INT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = UINT8_MAX;
	volatile uint8_t x438 = 46U;
	static int64_t x439 = -1LL;
	int64_t x440 = INT64_MIN;

    t109 = (((x437&x438)>x439)|x440);

    if (t109 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x441 = INT64_MIN;
	int32_t x442 = INT32_MIN;
	int32_t x444 = INT32_MIN;
	static int32_t t110 = INT32_MIN;

    t110 = (((x441&x442)>x443)|x444);

    if (t110 != INT32_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x445 = UINT32_MAX;
	int32_t x446 = -503605032;
	uint16_t x447 = 6U;
	static uint64_t t111 = 53707446LLU;

    t111 = (((x445&x446)>x447)|x448);

    if (t111 != 5970794959862383LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = UINT64_MAX;
	int64_t x450 = -1LL;
	int64_t x451 = -663551793530615432LL;
	uint16_t x452 = 850U;
	volatile int32_t t112 = 3;

    t112 = (((x449&x450)>x451)|x452);

    if (t112 != 851) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x456 = 43767432LL;
	volatile int64_t t113 = -12952704930LL;

    t113 = (((x453&x454)>x455)|x456);

    if (t113 != 43767432LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = UINT8_MAX;
	static volatile int16_t x458 = -81;
	volatile uint32_t x460 = 13965U;
	uint32_t t114 = 7152432U;

    t114 = (((x457&x458)>x459)|x460);

    if (t114 != 13965U) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = 29390LL;
	int32_t x462 = INT32_MAX;
	volatile int8_t x463 = 1;
	int32_t x464 = INT32_MIN;
	volatile int32_t t115 = -255470125;

    t115 = (((x461&x462)>x463)|x464);

    if (t115 != -2147483647) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = 162;
	int8_t x466 = 31;
	int64_t x467 = 775LL;
	uint8_t x468 = UINT8_MAX;
	volatile int32_t t116 = 448872;

    t116 = (((x465&x466)>x467)|x468);

    if (t116 != 255) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = -1LL;
	int8_t x470 = 7;
	volatile int32_t t117 = 993104;

    t117 = (((x469&x470)>x471)|x472);

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -1;
	uint16_t x474 = 1U;
	volatile uint8_t x475 = 1U;
	uint32_t x476 = 72U;
	volatile uint32_t t118 = 62U;

    t118 = (((x473&x474)>x475)|x476);

    if (t118 != 72U) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = 3;
	int8_t x478 = -1;
	uint8_t x479 = 11U;
	int64_t x480 = INT64_MAX;

    t119 = (((x477&x478)>x479)|x480);

    if (t119 != INT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = -1;
	volatile int32_t x482 = INT32_MIN;
	static int32_t x483 = -1;
	static uint16_t x484 = 104U;

    t120 = (((x481&x482)>x483)|x484);

    if (t120 != 104) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x485 = INT8_MIN;
	static int64_t x486 = INT64_MAX;
	int32_t x487 = INT32_MIN;
	int64_t x488 = -561324415897855281LL;
	int64_t t121 = -293LL;

    t121 = (((x485&x486)>x487)|x488);

    if (t121 != -561324415897855281LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x492 = UINT16_MAX;

    t122 = (((x489&x490)>x491)|x492);

    if (t122 != 65535) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x494 = INT64_MIN;
	uint16_t x495 = UINT16_MAX;
	int16_t x496 = -1;
	volatile int32_t t123 = 19357;

    t123 = (((x493&x494)>x495)|x496);

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x497 = UINT8_MAX;
	static volatile uint8_t x499 = 26U;
	static uint8_t x500 = 0U;

    t124 = (((x497&x498)>x499)|x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = 2;
	static int8_t x502 = INT8_MIN;
	uint8_t x503 = UINT8_MAX;

    t125 = (((x501&x502)>x503)|x504);

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x505 = INT32_MIN;
	volatile uint32_t x506 = UINT32_MAX;
	static int64_t x507 = INT64_MIN;
	static int16_t x508 = -15;
	volatile int32_t t126 = 117;

    t126 = (((x505&x506)>x507)|x508);

    if (t126 != -15) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint8_t x509 = UINT8_MAX;
	volatile int32_t x510 = INT32_MIN;
	static volatile uint32_t x511 = 5U;
	int16_t x512 = INT16_MIN;

    t127 = (((x509&x510)>x511)|x512);

    if (t127 != -32768) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = UINT8_MAX;
	int16_t x514 = INT16_MIN;
	int64_t x515 = -28LL;
	static volatile uint32_t t128 = 51341317U;

    t128 = (((x513&x514)>x515)|x516);

    if (t128 != 177U) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MAX;
	volatile int8_t x519 = 7;
	int8_t x520 = -1;
	int32_t t129 = -413033109;

    t129 = (((x517&x518)>x519)|x520);

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x521 = 1008717783216778LL;
	uint16_t x522 = 1U;
	int32_t x523 = INT32_MAX;
	int64_t t130 = INT64_MIN;

    t130 = (((x521&x522)>x523)|x524);

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = UINT64_MAX;
	int64_t x526 = INT64_MIN;
	uint32_t x527 = 568U;
	int32_t t131 = 5969705;

    t131 = (((x525&x526)>x527)|x528);

    if (t131 != 65535) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x529 = UINT64_MAX;
	static volatile int16_t x530 = -1;
	volatile int32_t x531 = -215139520;
	static int32_t x532 = 19;
	volatile int32_t t132 = -224190956;

    t132 = (((x529&x530)>x531)|x532);

    if (t132 != 19) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MIN;
	static uint32_t x534 = 1U;
	uint32_t x535 = UINT32_MAX;
	volatile uint32_t x536 = 120262745U;
	volatile uint32_t t133 = 32290U;

    t133 = (((x533&x534)>x535)|x536);

    if (t133 != 120262745U) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x537 = 0;
	int16_t x538 = -1;
	int8_t x539 = -1;
	uint16_t x540 = UINT16_MAX;
	static volatile int32_t t134 = 7;

    t134 = (((x537&x538)>x539)|x540);

    if (t134 != 65535) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MIN;
	uint8_t x542 = 2U;
	int64_t x543 = -1LL;
	volatile int64_t t135 = 1151227289497LL;

    t135 = (((x541&x542)>x543)|x544);

    if (t135 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = -1;
	int64_t x546 = INT64_MAX;
	static volatile int8_t x547 = INT8_MAX;
	int16_t x548 = -1;

    t136 = (((x545&x546)>x547)|x548);

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x549 = 3U;
	volatile int8_t x551 = -1;
	uint32_t x552 = 6U;
	uint32_t t137 = 63164203U;

    t137 = (((x549&x550)>x551)|x552);

    if (t137 != 7U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x553 = 3;
	int16_t x554 = INT16_MIN;
	uint32_t x555 = UINT32_MAX;
	int8_t x556 = INT8_MIN;
	static int32_t t138 = -30094422;

    t138 = (((x553&x554)>x555)|x556);

    if (t138 != -128) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x557 = UINT16_MAX;
	int64_t x559 = 7LL;
	int8_t x560 = INT8_MAX;
	volatile int32_t t139 = 665906772;

    t139 = (((x557&x558)>x559)|x560);

    if (t139 != 127) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x561 = INT8_MIN;
	int64_t x562 = -370114891101779983LL;
	int8_t x563 = INT8_MAX;
	int64_t t140 = INT64_MIN;

    t140 = (((x561&x562)>x563)|x564);

    if (t140 != INT64_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x566 = 3;
	static int64_t x567 = INT64_MAX;
	static volatile int64_t x568 = INT64_MAX;
	volatile int64_t t141 = INT64_MAX;

    t141 = (((x565&x566)>x567)|x568);

    if (t141 != INT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x569 = INT8_MIN;
	static uint32_t x570 = 1U;
	int32_t x572 = INT32_MIN;

    t142 = (((x569&x570)>x571)|x572);

    if (t142 != INT32_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x574 = INT64_MIN;
	volatile int32_t x575 = INT32_MIN;
	volatile uint32_t x576 = 227531715U;
	volatile uint32_t t143 = 1366270U;

    t143 = (((x573&x574)>x575)|x576);

    if (t143 != 227531715U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x577 = 2LL;
	uint64_t x578 = 17LLU;
	uint8_t x579 = UINT8_MAX;
	uint8_t x580 = UINT8_MAX;
	volatile int32_t t144 = 81;

    t144 = (((x577&x578)>x579)|x580);

    if (t144 != 255) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MAX;
	int16_t x582 = INT16_MIN;
	volatile uint64_t x583 = 9823LLU;
	int32_t x584 = INT32_MAX;
	volatile int32_t t145 = INT32_MAX;

    t145 = (((x581&x582)>x583)|x584);

    if (t145 != INT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x585 = 16750746U;
	static int32_t x586 = -1;
	int8_t x587 = INT8_MIN;
	uint32_t x588 = 5U;
	static volatile uint32_t t146 = 26U;

    t146 = (((x585&x586)>x587)|x588);

    if (t146 != 5U) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MAX;
	volatile int64_t x590 = -5736775LL;
	volatile uint32_t x591 = 7U;
	uint16_t x592 = UINT16_MAX;

    t147 = (((x589&x590)>x591)|x592);

    if (t147 != 65535) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int32_t x593 = 752192;
	volatile uint64_t t148 = UINT64_MAX;

    t148 = (((x593&x594)>x595)|x596);

    if (t148 != UINT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = -31;
	int64_t x598 = 4069610489861003LL;
	uint64_t x599 = 27923LLU;
	uint8_t x600 = 37U;
	int32_t t149 = 28173525;

    t149 = (((x597&x598)>x599)|x600);

    if (t149 != 37) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MIN;
	volatile uint16_t x604 = UINT16_MAX;
	volatile int32_t t150 = -3277;

    t150 = (((x601&x602)>x603)|x604);

    if (t150 != 65535) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x605 = 3U;
	volatile int16_t x606 = 0;
	static volatile int32_t x607 = 5037;
	static uint8_t x608 = 16U;
	volatile int32_t t151 = -97301416;

    t151 = (((x605&x606)>x607)|x608);

    if (t151 != 16) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MIN;
	int64_t x610 = INT64_MIN;
	int8_t x611 = INT8_MIN;
	int64_t x612 = INT64_MIN;
	volatile int64_t t152 = INT64_MIN;

    t152 = (((x609&x610)>x611)|x612);

    if (t152 != INT64_MIN) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = 25U;
	static volatile int64_t x615 = 938119946248359179LL;
	int32_t x616 = INT32_MIN;

    t153 = (((x613&x614)>x615)|x616);

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x617 = 2937890538714257576LLU;
	static uint16_t x618 = 58U;
	uint16_t x619 = 10786U;
	int64_t x620 = -1255679096033LL;

    t154 = (((x617&x618)>x619)|x620);

    if (t154 != -1255679096033LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = -1LL;
	int64_t x623 = -160LL;
	volatile int64_t t155 = -1LL;

    t155 = (((x621&x622)>x623)|x624);

    if (t155 != -53473619LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = -230;
	static uint64_t x626 = UINT64_MAX;
	volatile int64_t x627 = INT64_MAX;
	uint32_t x628 = UINT32_MAX;
	uint32_t t156 = UINT32_MAX;

    t156 = (((x625&x626)>x627)|x628);

    if (t156 != UINT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = INT16_MIN;
	int8_t x630 = -1;
	uint32_t x631 = UINT32_MAX;
	uint64_t x632 = 326443191967212656LLU;

    t157 = (((x629&x630)>x631)|x632);

    if (t157 != 326443191967212656LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x633 = 367754098472237LLU;
	int8_t x636 = INT8_MIN;
	int32_t t158 = -5092925;

    t158 = (((x633&x634)>x635)|x636);

    if (t158 != -128) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = -1;
	static uint16_t x638 = UINT16_MAX;
	uint32_t x640 = 483896248U;
	uint32_t t159 = 14945U;

    t159 = (((x637&x638)>x639)|x640);

    if (t159 != 483896249U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x641 = UINT8_MAX;
	int32_t x642 = INT32_MIN;
	int16_t x643 = -1;
	uint8_t x644 = UINT8_MAX;
	int32_t t160 = -17833;

    t160 = (((x641&x642)>x643)|x644);

    if (t160 != 255) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x645 = -63369186930155750LL;
	int8_t x646 = INT8_MAX;
	uint32_t x647 = 453U;

    t161 = (((x645&x646)>x647)|x648);

    if (t161 != UINT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x649 = INT32_MAX;
	static uint8_t x650 = 3U;
	int64_t x651 = INT64_MIN;
	volatile int32_t x652 = -4;
	volatile int32_t t162 = -12997761;

    t162 = (((x649&x650)>x651)|x652);

    if (t162 != -3) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x653 = UINT32_MAX;
	int16_t x655 = -1;
	uint32_t x656 = 1U;
	uint32_t t163 = 54U;

    t163 = (((x653&x654)>x655)|x656);

    if (t163 != 1U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x657 = UINT32_MAX;
	int32_t x658 = 13;
	volatile int32_t x659 = INT32_MAX;
	int8_t x660 = INT8_MAX;
	int32_t t164 = -7635827;

    t164 = (((x657&x658)>x659)|x660);

    if (t164 != 127) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = INT16_MIN;
	uint16_t x662 = 11U;
	int32_t x663 = -3;
	int8_t x664 = -16;

    t165 = (((x661&x662)>x663)|x664);

    if (t165 != -15) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x667 = -3408895LL;
	int16_t x668 = INT16_MIN;
	int32_t t166 = 270079;

    t166 = (((x665&x666)>x667)|x668);

    if (t166 != -32767) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MIN;
	int64_t x670 = INT64_MAX;
	uint32_t x671 = 126852U;
	uint16_t x672 = 6147U;

    t167 = (((x669&x670)>x671)|x672);

    if (t167 != 6147) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -1;
	volatile int64_t x675 = INT64_MIN;
	int16_t x676 = -393;
	static volatile int32_t t168 = 15;

    t168 = (((x673&x674)>x675)|x676);

    if (t168 != -393) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = UINT32_MAX;
	static int32_t x678 = INT32_MIN;
	int16_t x679 = -428;
	uint16_t x680 = 5203U;
	volatile int32_t t169 = 1;

    t169 = (((x677&x678)>x679)|x680);

    if (t169 != 5203) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x683 = -11055085705753LL;
	int8_t x684 = -1;
	int32_t t170 = 426656048;

    t170 = (((x681&x682)>x683)|x684);

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = INT64_MIN;
	static int32_t x686 = INT32_MIN;
	int64_t x687 = INT64_MAX;
	volatile int32_t t171 = 16254772;

    t171 = (((x685&x686)>x687)|x688);

    if (t171 != -32768) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = UINT8_MAX;
	static volatile int8_t x692 = INT8_MAX;
	volatile int32_t t172 = -31004778;

    t172 = (((x689&x690)>x691)|x692);

    if (t172 != 127) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MIN;
	uint8_t x694 = 9U;
	static volatile uint16_t x695 = 75U;
	int64_t x696 = -6459417552460LL;
	int64_t t173 = 5339680195091LL;

    t173 = (((x693&x694)>x695)|x696);

    if (t173 != -6459417552460LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = 264647795125848828LLU;
	int32_t x699 = INT32_MIN;
	volatile int64_t x700 = 8861713994653LL;
	volatile int64_t t174 = -27LL;

    t174 = (((x697&x698)>x699)|x700);

    if (t174 != 8861713994653LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = 1U;
	volatile uint16_t x702 = UINT16_MAX;
	int64_t x704 = -5038LL;
	int64_t t175 = 6684163181LL;

    t175 = (((x701&x702)>x703)|x704);

    if (t175 != -5037LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x706 = 63U;
	static uint32_t x707 = 11778U;
	volatile int32_t t176 = 107;

    t176 = (((x705&x706)>x707)|x708);

    if (t176 != 750) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = UINT8_MAX;
	int8_t x711 = -20;
	volatile uint16_t x712 = UINT16_MAX;
	int32_t t177 = -234;

    t177 = (((x709&x710)>x711)|x712);

    if (t177 != 65535) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MIN;
	int64_t x714 = -1LL;
	uint16_t x715 = 7U;
	volatile uint16_t x716 = UINT16_MAX;
	static volatile int32_t t178 = 1684950;

    t178 = (((x713&x714)>x715)|x716);

    if (t178 != 65535) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x719 = INT32_MIN;
	int8_t x720 = INT8_MAX;
	int32_t t179 = -355706806;

    t179 = (((x717&x718)>x719)|x720);

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x722 = 236125740575LLU;
	int32_t x723 = 1;

    t180 = (((x721&x722)>x723)|x724);

    if (t180 != 32767) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MAX;
	uint64_t x727 = 538498698603920LLU;
	int64_t x728 = INT64_MAX;
	volatile int64_t t181 = INT64_MAX;

    t181 = (((x725&x726)>x727)|x728);

    if (t181 != INT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x730 = UINT8_MAX;
	uint64_t x731 = 187891608442LLU;
	int16_t x732 = INT16_MIN;
	int32_t t182 = 831381;

    t182 = (((x729&x730)>x731)|x732);

    if (t182 != -32768) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int8_t x733 = -56;
	static uint16_t x734 = UINT16_MAX;
	int64_t x735 = 525870719310490856LL;

    t183 = (((x733&x734)>x735)|x736);

    if (t183 != INT64_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = -1LL;
	int64_t x738 = INT64_MAX;
	int16_t x740 = INT16_MAX;
	int32_t t184 = -5;

    t184 = (((x737&x738)>x739)|x740);

    if (t184 != 32767) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = 1U;
	int16_t x743 = 81;
	static int8_t x744 = 1;
	static volatile int32_t t185 = -238759;

    t185 = (((x741&x742)>x743)|x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x745 = 721U;
	int8_t x747 = 1;
	int64_t x748 = 8578220212629198LL;
	static int64_t t186 = 5431397831299LL;

    t186 = (((x745&x746)>x747)|x748);

    if (t186 != 8578220212629198LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MIN;
	volatile int8_t x750 = -24;
	uint8_t x751 = 37U;
	static int64_t x752 = -73478140721164966LL;
	volatile int64_t t187 = -126165863205987045LL;

    t187 = (((x749&x750)>x751)|x752);

    if (t187 != -73478140721164966LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MAX;
	int16_t x755 = INT16_MIN;
	static volatile int8_t x756 = -1;
	int32_t t188 = 446562921;

    t188 = (((x753&x754)>x755)|x756);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x757 = INT32_MAX;
	uint64_t x759 = UINT64_MAX;
	volatile uint64_t x760 = 122128LLU;
	volatile uint64_t t189 = 345LLU;

    t189 = (((x757&x758)>x759)|x760);

    if (t189 != 122128LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x761 = 2210203545812650772LLU;
	int32_t x762 = 213387246;
	uint64_t x763 = UINT64_MAX;
	static volatile uint8_t x764 = 26U;
	volatile int32_t t190 = 1310;

    t190 = (((x761&x762)>x763)|x764);

    if (t190 != 26) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x766 = -1;
	uint32_t x767 = 301U;
	uint16_t x768 = UINT16_MAX;
	volatile int32_t t191 = -4607398;

    t191 = (((x765&x766)>x767)|x768);

    if (t191 != 65535) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = 42U;
	int64_t x770 = INT64_MAX;
	static int16_t x771 = -55;
	int8_t x772 = INT8_MIN;
	int32_t t192 = -1580633;

    t192 = (((x769&x770)>x771)|x772);

    if (t192 != -127) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x773 = INT8_MAX;
	volatile uint64_t x774 = 3526439125830172458LLU;
	uint8_t x775 = 123U;
	int32_t t193 = -498994;

    t193 = (((x773&x774)>x775)|x776);

    if (t193 != -32768) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x778 = INT8_MAX;
	static int32_t x779 = 3;
	uint8_t x780 = UINT8_MAX;
	int32_t t194 = 1;

    t194 = (((x777&x778)>x779)|x780);

    if (t194 != 255) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint32_t x781 = UINT32_MAX;
	uint64_t x782 = 1144896726685518311LLU;
	uint8_t x783 = UINT8_MAX;
	int32_t x784 = -86;
	static int32_t t195 = -1;

    t195 = (((x781&x782)>x783)|x784);

    if (t195 != -85) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x785 = -5;
	volatile int64_t x787 = -1LL;
	volatile int16_t x788 = INT16_MIN;

    t196 = (((x785&x786)>x787)|x788);

    if (t196 != -32767) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x789 = INT8_MIN;
	uint16_t x790 = 653U;
	int16_t x791 = INT16_MIN;
	volatile int8_t x792 = 18;
	static volatile int32_t t197 = -1472371;

    t197 = (((x789&x790)>x791)|x792);

    if (t197 != 19) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MIN;
	int32_t x794 = -14414;
	static uint8_t x795 = 7U;
	volatile int32_t t198 = -8;

    t198 = (((x793&x794)>x795)|x796);

    if (t198 != 1048) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = 6856416076LL;
	int32_t x798 = INT32_MIN;
	int16_t x799 = INT16_MIN;
	volatile int32_t x800 = INT32_MAX;
	int32_t t199 = INT32_MAX;

    t199 = (((x797&x798)>x799)|x800);

    if (t199 != INT32_MAX) { NG(); } else { ; }
	
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


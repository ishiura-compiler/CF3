
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

uint16_t x4 = UINT16_MAX;
int32_t x11 = INT32_MAX;
volatile uint32_t x12 = 51U;
int16_t x14 = INT16_MIN;
int32_t x19 = INT32_MIN;
int32_t t4 = -46517506;
volatile int16_t x24 = INT16_MIN;
volatile int32_t t5 = -2024501;
uint64_t x29 = 5994850624620905531LLU;
uint16_t x34 = 423U;
static int64_t x40 = 56903232685276853LL;
int64_t t9 = -287659892265LL;
volatile int32_t x41 = INT32_MIN;
int32_t t10 = 267726;
uint16_t x48 = UINT16_MAX;
int8_t x52 = INT8_MAX;
uint8_t x58 = 4U;
int32_t t14 = 605688800;
int32_t x67 = INT32_MIN;
int64_t x72 = INT64_MAX;
static int32_t x74 = -34234;
int32_t x79 = -1;
int8_t x81 = INT8_MIN;
volatile int16_t x83 = -9;
int16_t x95 = -1;
uint32_t x101 = UINT32_MAX;
uint16_t x107 = 2618U;
volatile uint16_t x109 = 31712U;
static int8_t x111 = INT8_MIN;
static int64_t x112 = INT64_MIN;
volatile int64_t t26 = INT64_MIN;
int32_t x113 = INT32_MIN;
static uint8_t x122 = 2U;
static int32_t x123 = -35442810;
int64_t x127 = INT64_MAX;
volatile int64_t t30 = -2452433134441LL;
static int32_t t31 = 44916398;
uint32_t x134 = UINT32_MAX;
uint32_t x141 = UINT32_MAX;
volatile uint32_t x149 = UINT32_MAX;
int8_t x151 = INT8_MIN;
static int16_t x153 = INT16_MIN;
volatile int32_t t36 = -483788;
int32_t t38 = 784;
volatile uint8_t x165 = 6U;
volatile int32_t x166 = -6;
volatile int32_t t40 = 1;
int16_t x176 = -4928;
volatile uint8_t x177 = 20U;
volatile int32_t x180 = INT32_MIN;
uint8_t x188 = 2U;
int32_t t44 = 1;
static int32_t x192 = -1;
volatile int32_t t45 = 169438;
uint32_t x194 = 1638264100U;
int8_t x196 = -1;
int32_t x198 = INT32_MAX;
int32_t x199 = -1;
volatile uint8_t x204 = UINT8_MAX;
int32_t t50 = 213234;
int64_t x217 = -1LL;
volatile int32_t x220 = -1;
uint32_t x222 = 471225U;
int32_t x223 = -1;
static int64_t t54 = 1715698LL;
static volatile int32_t x236 = -1;
int32_t x238 = INT32_MAX;
int8_t x240 = INT8_MIN;
uint8_t x243 = 14U;
uint16_t x249 = 0U;
volatile int8_t x252 = INT8_MAX;
int8_t x255 = INT8_MIN;
uint32_t x258 = 8605U;
int32_t t62 = -1467;
int8_t x263 = INT8_MIN;
int8_t x264 = INT8_MAX;
volatile int8_t x265 = 1;
static volatile int32_t t65 = 67;
int16_t x278 = -9;
uint64_t t67 = 14LLU;
int32_t x281 = 30835372;
int16_t x292 = INT16_MIN;
volatile int32_t x293 = -28048;
int64_t x294 = INT64_MIN;
uint8_t x296 = UINT8_MAX;
static uint8_t x298 = 3U;
volatile int32_t t73 = 739642394;
uint32_t x309 = 2060U;
volatile int64_t x311 = INT64_MIN;
volatile int16_t x318 = -1;
int16_t x319 = INT16_MIN;
volatile uint64_t t76 = UINT64_MAX;
int8_t x324 = -1;
volatile int32_t t77 = -872844572;
volatile int64_t x343 = INT64_MIN;
uint32_t x351 = 10U;
static int32_t x353 = -1;
uint64_t x361 = 6469556872126015293LLU;
uint8_t x364 = 45U;
volatile int32_t t87 = -1263;
int32_t x368 = -203019345;
int32_t x369 = INT32_MAX;
uint32_t x372 = 508824U;
static int64_t x377 = INT64_MAX;
uint16_t x381 = UINT16_MAX;
int32_t x383 = -1;
volatile int32_t t92 = -1742441;
int64_t x387 = 32300155978LL;
volatile uint64_t t93 = 18005575302259LLU;
static uint8_t x396 = UINT8_MAX;
int8_t x408 = 3;
int8_t x409 = INT8_MIN;
uint32_t x410 = UINT32_MAX;
static int64_t x415 = -62357783LL;
static uint32_t t100 = 20U;
int64_t x423 = 33541LL;
uint16_t x426 = UINT16_MAX;
int64_t t103 = 1331442LL;
static int32_t t111 = 136;
uint64_t x463 = 13LLU;
static uint64_t x464 = 10065130064LLU;
uint16_t x465 = 1U;
static int64_t t113 = INT64_MAX;
volatile int32_t t115 = 469585;
int32_t x483 = INT32_MIN;
int32_t x488 = 3179219;
int8_t x493 = INT8_MIN;
int8_t x497 = 4;
int16_t x501 = -5;
volatile int16_t x505 = INT16_MAX;
uint32_t x510 = 1343U;
static uint32_t x513 = UINT32_MAX;
uint32_t x522 = UINT32_MAX;
volatile int8_t x523 = -1;
volatile uint32_t x528 = 1751684U;
int32_t t129 = 1;
static int8_t x537 = -1;
static volatile int16_t x542 = INT16_MIN;
int32_t t132 = -125565030;
int8_t x550 = -1;
static volatile int32_t t134 = 31541;
uint32_t x562 = 1933202327U;
int16_t x563 = -1;
int64_t x565 = INT64_MIN;
int64_t x566 = INT64_MIN;
static int8_t x569 = -1;
int64_t x570 = INT64_MIN;
volatile uint64_t t141 = 49860937689LLU;
static int32_t x594 = -1;
int8_t x596 = INT8_MAX;
int64_t x603 = INT64_MIN;
volatile int64_t x608 = INT64_MIN;
uint16_t x611 = UINT16_MAX;
uint32_t x612 = 89U;
int32_t x614 = INT32_MAX;
int32_t t151 = 4898;
int8_t x634 = INT8_MAX;
volatile uint64_t x638 = UINT64_MAX;
int16_t x639 = INT16_MAX;
volatile int64_t x642 = INT64_MAX;
int32_t x644 = -1;
uint64_t x647 = 842505672234LLU;
int8_t x657 = 4;
static int16_t x661 = 661;
int32_t x667 = -1;
int8_t x672 = -1;
uint32_t x679 = 116697660U;
int64_t x680 = -1LL;
static int64_t x685 = 2934842445635266048LL;
uint16_t x694 = UINT16_MAX;
int16_t x698 = 7274;
int64_t x702 = INT64_MIN;
static uint32_t x703 = 54334372U;
volatile int16_t x705 = -3;
uint16_t x706 = 123U;
static uint64_t x716 = 4LLU;
static uint32_t x718 = 2U;
int8_t x719 = INT8_MIN;
int32_t t175 = -1;
int16_t x722 = INT16_MIN;
uint16_t x723 = UINT16_MAX;
int64_t x725 = -934125619445LL;
volatile int64_t x729 = -1821383384843LL;
int64_t x730 = INT64_MIN;
static int32_t t178 = -8214863;
static int16_t x747 = INT16_MIN;
static int32_t t182 = 1;
int32_t x752 = -689229663;
static volatile int16_t x755 = 1;
static int16_t x759 = INT16_MAX;
static volatile int32_t t185 = -1;
uint8_t x783 = 0U;
int16_t x791 = INT16_MIN;
int64_t x793 = 1987LL;
volatile int16_t x798 = -1;
int64_t x804 = INT64_MIN;
static volatile int64_t t196 = 3877LL;
uint16_t x815 = 601U;


void f0(void) {
    	static uint64_t x1 = UINT64_MAX;
	int16_t x2 = -363;
	uint8_t x3 = 4U;
	int32_t t0 = 642586577;

    t0 = (((x1%x2)>x3)*x4);

    if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	static volatile int8_t x6 = INT8_MAX;
	int16_t x7 = INT16_MIN;
	int64_t x8 = INT64_MIN;
	static int64_t t1 = 59258LL;

    t1 = (((x5%x6)>x7)*x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	uint32_t x10 = 5435U;
	volatile uint32_t t2 = 8047U;

    t2 = (((x9%x10)>x11)*x12);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 34U;
	static uint8_t x15 = 11U;
	static volatile int64_t x16 = INT64_MIN;
	static int64_t t3 = INT64_MIN;

    t3 = (((x13%x14)>x15)*x16);

    if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	static int32_t x18 = INT32_MIN;
	volatile int16_t x20 = 1;

    t4 = (((x17%x18)>x19)*x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	int64_t x22 = -1LL;
	int32_t x23 = -1;

    t5 = (((x21%x22)>x23)*x24);

    if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 5646U;
	static volatile int16_t x26 = -1;
	volatile uint64_t x27 = 12113503325LLU;
	int32_t x28 = 1;
	int32_t t6 = 186651537;

    t6 = (((x25%x26)>x27)*x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x30 = -15712;
	int8_t x31 = -1;
	int8_t x32 = INT8_MIN;
	static int32_t t7 = -314549844;

    t7 = (((x29%x30)>x31)*x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = -1LL;
	volatile int8_t x35 = INT8_MIN;
	int8_t x36 = INT8_MIN;
	int32_t t8 = 340196;

    t8 = (((x33%x34)>x35)*x36);

    if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = 135;
	volatile uint64_t x38 = 172074243844576826LLU;
	static uint64_t x39 = UINT64_MAX;

    t9 = (((x37%x38)>x39)*x40);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x42 = -1;
	static int64_t x43 = INT64_MAX;
	volatile int8_t x44 = INT8_MIN;

    t10 = (((x41%x42)>x43)*x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x45 = 98U;
	static int64_t x46 = -1LL;
	int16_t x47 = INT16_MAX;
	int32_t t11 = -9;

    t11 = (((x45%x46)>x47)*x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = UINT8_MAX;
	int8_t x50 = INT8_MIN;
	static volatile int64_t x51 = INT64_MIN;
	volatile int32_t t12 = 443;

    t12 = (((x49%x50)>x51)*x52);

    if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MAX;
	uint16_t x54 = UINT16_MAX;
	int32_t x55 = INT32_MAX;
	volatile int64_t x56 = INT64_MIN;
	static int64_t t13 = -276425846201152665LL;

    t13 = (((x53%x54)>x55)*x56);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -18;
	int8_t x59 = 7;
	static uint8_t x60 = UINT8_MAX;

    t14 = (((x57%x58)>x59)*x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = -1LL;
	int32_t x66 = 25815;
	int32_t x68 = -7703;
	int32_t t15 = -2658;

    t15 = (((x65%x66)>x67)*x68);

    if (t15 != -7703) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = 3010LL;
	uint32_t x70 = 1866520194U;
	static uint8_t x71 = 14U;
	static int64_t t16 = INT64_MAX;

    t16 = (((x69%x70)>x71)*x72);

    if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x73 = 8752U;
	int8_t x75 = -7;
	volatile int16_t x76 = INT16_MAX;
	int32_t t17 = -115516;

    t17 = (((x73%x74)>x75)*x76);

    if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = INT8_MAX;
	static uint32_t x78 = 17U;
	int8_t x80 = INT8_MIN;
	int32_t t18 = -923;

    t18 = (((x77%x78)>x79)*x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x82 = -1;
	int16_t x84 = 431;
	static volatile int32_t t19 = 7;

    t19 = (((x81%x82)>x83)*x84);

    if (t19 != 431) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x85 = INT16_MAX;
	volatile int8_t x86 = INT8_MAX;
	static int8_t x87 = 58;
	uint8_t x88 = UINT8_MAX;
	int32_t t20 = -34;

    t20 = (((x85%x86)>x87)*x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x89 = UINT16_MAX;
	uint32_t x90 = UINT32_MAX;
	int16_t x91 = 482;
	static volatile int8_t x92 = 37;
	volatile int32_t t21 = 1069313985;

    t21 = (((x89%x90)>x91)*x92);

    if (t21 != 37) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x93 = 8822712LLU;
	int64_t x94 = INT64_MIN;
	int32_t x96 = INT32_MIN;
	int32_t t22 = -13;

    t22 = (((x93%x94)>x95)*x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x97 = INT32_MAX;
	uint64_t x98 = 244939LLU;
	static uint32_t x99 = UINT32_MAX;
	static int16_t x100 = 1016;
	volatile int32_t t23 = 860630;

    t23 = (((x97%x98)>x99)*x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x102 = UINT32_MAX;
	uint32_t x103 = 31U;
	uint16_t x104 = 1U;
	volatile int32_t t24 = -158;

    t24 = (((x101%x102)>x103)*x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x105 = 33U;
	volatile int64_t x106 = -120914433LL;
	uint64_t x108 = 7189928LLU;
	volatile uint64_t t25 = 1699355603381LLU;

    t25 = (((x105%x106)>x107)*x108);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x110 = -9887;

    t26 = (((x109%x110)>x111)*x112);

    if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x114 = 4763884041888LLU;
	uint64_t x115 = 110930798LLU;
	static int32_t x116 = INT32_MIN;
	volatile int32_t t27 = INT32_MIN;

    t27 = (((x113%x114)>x115)*x116);

    if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x117 = -285446082747LL;
	int32_t x118 = INT32_MIN;
	int16_t x119 = INT16_MAX;
	volatile int8_t x120 = INT8_MIN;
	volatile int32_t t28 = -45056;

    t28 = (((x117%x118)>x119)*x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = INT16_MIN;
	int8_t x124 = INT8_MIN;
	volatile int32_t t29 = -507;

    t29 = (((x121%x122)>x123)*x124);

    if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x125 = 1678718011LL;
	int8_t x126 = INT8_MIN;
	int64_t x128 = INT64_MIN;

    t30 = (((x125%x126)>x127)*x128);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x129 = 1U;
	int16_t x130 = -412;
	uint32_t x131 = UINT32_MAX;
	static int8_t x132 = 27;

    t31 = (((x129%x130)>x131)*x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x133 = INT64_MIN;
	uint8_t x135 = 3U;
	int64_t x136 = -1LL;
	int64_t t32 = -44LL;

    t32 = (((x133%x134)>x135)*x136);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x142 = INT8_MIN;
	int16_t x143 = 1;
	int16_t x144 = 1024;
	static int32_t t33 = 2794278;

    t33 = (((x141%x142)>x143)*x144);

    if (t33 != 1024) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = 1;
	uint8_t x146 = UINT8_MAX;
	volatile int8_t x147 = 0;
	volatile int8_t x148 = INT8_MIN;
	int32_t t34 = 3358922;

    t34 = (((x145%x146)>x147)*x148);

    if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int16_t x150 = INT16_MIN;
	volatile int16_t x152 = INT16_MAX;
	volatile int32_t t35 = -5455306;

    t35 = (((x149%x150)>x151)*x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x154 = -1;
	int32_t x155 = 126;
	int8_t x156 = -1;

    t36 = (((x153%x154)>x155)*x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x157 = UINT64_MAX;
	int16_t x158 = -1;
	static volatile int64_t x159 = INT64_MAX;
	volatile int32_t x160 = INT32_MIN;
	volatile int32_t t37 = 0;

    t37 = (((x157%x158)>x159)*x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x161 = 68U;
	uint64_t x162 = UINT64_MAX;
	int32_t x163 = INT32_MIN;
	int16_t x164 = INT16_MIN;

    t38 = (((x161%x162)>x163)*x164);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x167 = INT8_MIN;
	int16_t x168 = INT16_MIN;
	int32_t t39 = 14;

    t39 = (((x165%x166)>x167)*x168);

    if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x169 = INT64_MIN;
	int16_t x170 = INT16_MIN;
	uint64_t x171 = 244425874462872832LLU;
	volatile uint8_t x172 = UINT8_MAX;

    t40 = (((x169%x170)>x171)*x172);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x173 = -1298;
	int8_t x174 = -1;
	static int8_t x175 = -1;
	int32_t t41 = 25;

    t41 = (((x173%x174)>x175)*x176);

    if (t41 != -4928) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x178 = UINT16_MAX;
	static uint64_t x179 = 456LLU;
	volatile int32_t t42 = -55126605;

    t42 = (((x177%x178)>x179)*x180);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x181 = UINT32_MAX;
	uint16_t x182 = 7U;
	uint32_t x183 = UINT32_MAX;
	int64_t x184 = INT64_MIN;
	int64_t t43 = 51890LL;

    t43 = (((x181%x182)>x183)*x184);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x185 = -1LL;
	static uint8_t x186 = 30U;
	volatile int8_t x187 = 60;

    t44 = (((x185%x186)>x187)*x188);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x189 = UINT32_MAX;
	static int64_t x190 = INT64_MIN;
	static uint32_t x191 = UINT32_MAX;

    t45 = (((x189%x190)>x191)*x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x193 = 22058990LLU;
	volatile int64_t x195 = INT64_MAX;
	volatile int32_t t46 = 504333;

    t46 = (((x193%x194)>x195)*x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x197 = 26U;
	uint32_t x200 = UINT32_MAX;
	uint32_t t47 = UINT32_MAX;

    t47 = (((x197%x198)>x199)*x200);

    if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x201 = UINT32_MAX;
	static int16_t x202 = -1;
	static int8_t x203 = INT8_MIN;
	int32_t t48 = 93172;

    t48 = (((x201%x202)>x203)*x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x205 = -57;
	int32_t x206 = 2741;
	static volatile int32_t x207 = INT32_MIN;
	int32_t x208 = INT32_MIN;
	volatile int32_t t49 = INT32_MIN;

    t49 = (((x205%x206)>x207)*x208);

    if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x209 = UINT16_MAX;
	static uint8_t x210 = 2U;
	static int16_t x211 = -36;
	int32_t x212 = 2;

    t50 = (((x209%x210)>x211)*x212);

    if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x213 = -45;
	volatile uint32_t x214 = 14076U;
	volatile int8_t x215 = -40;
	int32_t x216 = 26566546;
	volatile int32_t t51 = -56440819;

    t51 = (((x213%x214)>x215)*x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x218 = -1;
	volatile int8_t x219 = INT8_MAX;
	int32_t t52 = -313;

    t52 = (((x217%x218)>x219)*x220);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x221 = 799LLU;
	uint32_t x224 = 15778U;
	volatile uint32_t t53 = 66U;

    t53 = (((x221%x222)>x223)*x224);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x225 = 190;
	volatile int32_t x226 = INT32_MAX;
	uint16_t x227 = 113U;
	int64_t x228 = -1755110365494081LL;

    t54 = (((x225%x226)>x227)*x228);

    if (t54 != -1755110365494081LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x229 = INT64_MIN;
	volatile int64_t x230 = INT64_MIN;
	int8_t x231 = -1;
	int32_t x232 = INT32_MAX;
	volatile int32_t t55 = INT32_MAX;

    t55 = (((x229%x230)>x231)*x232);

    if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = INT8_MAX;
	int64_t x234 = -1559596614LL;
	int16_t x235 = INT16_MIN;
	int32_t t56 = 950;

    t56 = (((x233%x234)>x235)*x236);

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x237 = INT64_MAX;
	int8_t x239 = INT8_MIN;
	static int32_t t57 = -108;

    t57 = (((x237%x238)>x239)*x240);

    if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x241 = -1LL;
	int32_t x242 = INT32_MIN;
	int8_t x244 = -1;
	int32_t t58 = -15;

    t58 = (((x241%x242)>x243)*x244);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x245 = 2266U;
	uint32_t x246 = 1641445312U;
	int8_t x247 = -1;
	volatile int16_t x248 = 6;
	volatile int32_t t59 = -6528;

    t59 = (((x245%x246)>x247)*x248);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x250 = 67U;
	int16_t x251 = INT16_MIN;
	static volatile int32_t t60 = 709;

    t60 = (((x249%x250)>x251)*x252);

    if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x253 = INT64_MAX;
	volatile uint8_t x254 = UINT8_MAX;
	int64_t x256 = INT64_MAX;
	volatile int64_t t61 = INT64_MAX;

    t61 = (((x253%x254)>x255)*x256);

    if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x257 = -1LL;
	int32_t x259 = INT32_MAX;
	volatile uint16_t x260 = UINT16_MAX;

    t62 = (((x257%x258)>x259)*x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x261 = 3LLU;
	int64_t x262 = INT64_MAX;
	int32_t t63 = 121325;

    t63 = (((x261%x262)>x263)*x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x266 = 1310;
	uint64_t x267 = 2LLU;
	volatile int8_t x268 = -6;
	volatile int32_t t64 = 12;

    t64 = (((x265%x266)>x267)*x268);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x269 = INT32_MIN;
	volatile int16_t x270 = INT16_MIN;
	int16_t x271 = INT16_MAX;
	int8_t x272 = 7;

    t65 = (((x269%x270)>x271)*x272);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x273 = -1;
	int16_t x274 = INT16_MAX;
	static int16_t x275 = INT16_MAX;
	int8_t x276 = -1;
	volatile int32_t t66 = -1912221;

    t66 = (((x273%x274)>x275)*x276);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x277 = INT64_MAX;
	uint64_t x279 = UINT64_MAX;
	volatile uint64_t x280 = 24701196295436LLU;

    t67 = (((x277%x278)>x279)*x280);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x282 = INT64_MAX;
	volatile int32_t x283 = INT32_MAX;
	static int64_t x284 = INT64_MAX;
	volatile int64_t t68 = 26383249324286LL;

    t68 = (((x281%x282)>x283)*x284);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x285 = 659LLU;
	int32_t x286 = INT32_MAX;
	uint32_t x287 = 57578U;
	int8_t x288 = -1;
	volatile int32_t t69 = -402;

    t69 = (((x285%x286)>x287)*x288);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x289 = INT64_MIN;
	int8_t x290 = INT8_MAX;
	uint8_t x291 = 69U;
	volatile int32_t t70 = -24006718;

    t70 = (((x289%x290)>x291)*x292);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x295 = -3;
	int32_t t71 = 3691831;

    t71 = (((x293%x294)>x295)*x296);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x297 = 3322U;
	static volatile uint16_t x299 = 7793U;
	static volatile uint32_t x300 = 145463U;
	uint32_t t72 = 3U;

    t72 = (((x297%x298)>x299)*x300);

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x305 = 7U;
	uint32_t x306 = UINT32_MAX;
	int8_t x307 = INT8_MAX;
	int32_t x308 = -1;

    t73 = (((x305%x306)>x307)*x308);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint8_t x310 = UINT8_MAX;
	uint32_t x312 = 3700070U;
	uint32_t t74 = 462U;

    t74 = (((x309%x310)>x311)*x312);

    if (t74 != 3700070U) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x313 = 425U;
	int64_t x314 = -2LL;
	uint32_t x315 = 360146600U;
	static volatile uint8_t x316 = 3U;
	volatile int32_t t75 = 1453;

    t75 = (((x313%x314)>x315)*x316);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x317 = 2;
	uint64_t x320 = UINT64_MAX;

    t76 = (((x317%x318)>x319)*x320);

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x321 = 12968LLU;
	int32_t x322 = INT32_MAX;
	uint64_t x323 = UINT64_MAX;

    t77 = (((x321%x322)>x323)*x324);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x325 = INT64_MAX;
	int16_t x326 = -1;
	int32_t x327 = INT32_MIN;
	int8_t x328 = INT8_MAX;
	volatile int32_t t78 = 252546;

    t78 = (((x325%x326)>x327)*x328);

    if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x329 = INT32_MIN;
	volatile int32_t x330 = 92601;
	int32_t x331 = INT32_MIN;
	int16_t x332 = 2128;
	volatile int32_t t79 = 787;

    t79 = (((x329%x330)>x331)*x332);

    if (t79 != 2128) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x333 = INT16_MAX;
	static int32_t x334 = INT32_MAX;
	int8_t x335 = -1;
	int64_t x336 = INT64_MAX;
	static volatile int64_t t80 = INT64_MAX;

    t80 = (((x333%x334)>x335)*x336);

    if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x337 = -1;
	int16_t x338 = -1;
	uint16_t x339 = 9U;
	volatile uint64_t x340 = UINT64_MAX;
	volatile uint64_t t81 = 25465909584747981LLU;

    t81 = (((x337%x338)>x339)*x340);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x341 = -1;
	int64_t x342 = -104338680713617LL;
	static volatile uint32_t x344 = 7185U;
	volatile uint32_t t82 = 120802U;

    t82 = (((x341%x342)>x343)*x344);

    if (t82 != 7185U) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x345 = INT8_MAX;
	static uint8_t x346 = UINT8_MAX;
	uint64_t x347 = 1542784499772LLU;
	int32_t x348 = 26492;
	int32_t t83 = -882712;

    t83 = (((x345%x346)>x347)*x348);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x349 = 425419944079276479LLU;
	uint16_t x350 = 1109U;
	static int8_t x352 = INT8_MAX;
	volatile int32_t t84 = 0;

    t84 = (((x349%x350)>x351)*x352);

    if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x354 = 5;
	volatile uint32_t x355 = 443835U;
	static int32_t x356 = INT32_MAX;
	volatile int32_t t85 = INT32_MAX;

    t85 = (((x353%x354)>x355)*x356);

    if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x357 = 6258419813870004LL;
	int64_t x358 = INT64_MAX;
	static int32_t x359 = 6438625;
	static uint8_t x360 = 6U;
	int32_t t86 = 27820352;

    t86 = (((x357%x358)>x359)*x360);

    if (t86 != 6) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x362 = 15858542U;
	int8_t x363 = -1;

    t87 = (((x361%x362)>x363)*x364);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x365 = INT16_MIN;
	int32_t x366 = -198;
	static volatile int64_t x367 = INT64_MIN;
	volatile int32_t t88 = -466;

    t88 = (((x365%x366)>x367)*x368);

    if (t88 != -203019345) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x370 = UINT8_MAX;
	uint16_t x371 = UINT16_MAX;
	uint32_t t89 = 9U;

    t89 = (((x369%x370)>x371)*x372);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x373 = 2U;
	int32_t x374 = INT32_MAX;
	int16_t x375 = 693;
	static uint64_t x376 = 3LLU;
	static uint64_t t90 = 3177411676595699LLU;

    t90 = (((x373%x374)>x375)*x376);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x378 = INT32_MIN;
	uint16_t x379 = 1398U;
	int16_t x380 = INT16_MIN;
	static int32_t t91 = -491798;

    t91 = (((x377%x378)>x379)*x380);

    if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x382 = INT8_MIN;
	static volatile uint8_t x384 = UINT8_MAX;

    t92 = (((x381%x382)>x383)*x384);

    if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x385 = INT64_MIN;
	int8_t x386 = INT8_MIN;
	uint64_t x388 = 504LLU;

    t93 = (((x385%x386)>x387)*x388);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x389 = 6U;
	uint32_t x390 = 6U;
	static int64_t x391 = INT64_MAX;
	int64_t x392 = 3053836320094017558LL;
	volatile int64_t t94 = 7524293197LL;

    t94 = (((x389%x390)>x391)*x392);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x393 = 135U;
	int32_t x394 = INT32_MIN;
	uint8_t x395 = 14U;
	volatile int32_t t95 = 95;

    t95 = (((x393%x394)>x395)*x396);

    if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x397 = 29;
	static volatile int32_t x398 = -1;
	int32_t x399 = -201725;
	volatile int8_t x400 = INT8_MAX;
	volatile int32_t t96 = -15357840;

    t96 = (((x397%x398)>x399)*x400);

    if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint16_t x401 = 335U;
	int8_t x402 = INT8_MIN;
	int8_t x403 = INT8_MIN;
	static int32_t x404 = -13;
	int32_t t97 = -8785;

    t97 = (((x401%x402)>x403)*x404);

    if (t97 != -13) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x405 = 62202674U;
	int32_t x406 = -235;
	int32_t x407 = INT32_MIN;
	int32_t t98 = -76052452;

    t98 = (((x405%x406)>x407)*x408);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x411 = INT16_MIN;
	int32_t x412 = INT32_MIN;
	int32_t t99 = INT32_MIN;

    t99 = (((x409%x410)>x411)*x412);

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x413 = INT64_MIN;
	volatile uint64_t x414 = UINT64_MAX;
	static uint32_t x416 = 10697924U;

    t100 = (((x413%x414)>x415)*x416);

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x417 = 5236377272LLU;
	uint16_t x418 = 6446U;
	uint16_t x419 = UINT16_MAX;
	uint64_t x420 = 146LLU;
	volatile uint64_t t101 = 9030LLU;

    t101 = (((x417%x418)>x419)*x420);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x421 = 1950U;
	int8_t x422 = -55;
	volatile uint64_t x424 = 57834788767336225LLU;
	volatile uint64_t t102 = 1657938929LLU;

    t102 = (((x421%x422)>x423)*x424);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x425 = 1;
	volatile uint64_t x427 = UINT64_MAX;
	static int64_t x428 = 1LL;

    t103 = (((x425%x426)>x427)*x428);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x429 = 1287U;
	int8_t x430 = INT8_MAX;
	static int8_t x431 = 24;
	int8_t x432 = INT8_MIN;
	int32_t t104 = 960;

    t104 = (((x429%x430)>x431)*x432);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x433 = UINT64_MAX;
	int16_t x434 = INT16_MIN;
	int64_t x435 = -1LL;
	static int16_t x436 = INT16_MIN;
	volatile int32_t t105 = 749317422;

    t105 = (((x433%x434)>x435)*x436);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x437 = -1;
	static volatile int32_t x438 = 6;
	volatile uint32_t x439 = UINT32_MAX;
	static volatile int16_t x440 = INT16_MIN;
	volatile int32_t t106 = 24;

    t106 = (((x437%x438)>x439)*x440);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x441 = INT64_MAX;
	int16_t x442 = INT16_MIN;
	uint16_t x443 = 20244U;
	uint16_t x444 = UINT16_MAX;
	static volatile int32_t t107 = -845436723;

    t107 = (((x441%x442)>x443)*x444);

    if (t107 != 65535) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x445 = 5973U;
	uint64_t x446 = UINT64_MAX;
	static int32_t x447 = -130;
	volatile int16_t x448 = INT16_MIN;
	volatile int32_t t108 = 22;

    t108 = (((x445%x446)>x447)*x448);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x449 = 102U;
	int8_t x450 = INT8_MIN;
	volatile int8_t x451 = -1;
	int16_t x452 = -1;
	volatile int32_t t109 = -307883478;

    t109 = (((x449%x450)>x451)*x452);

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x453 = INT16_MAX;
	static int64_t x454 = INT64_MAX;
	int8_t x455 = INT8_MIN;
	int16_t x456 = -1;
	volatile int32_t t110 = -10;

    t110 = (((x453%x454)>x455)*x456);

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x457 = 4366693528747536LL;
	int16_t x458 = INT16_MIN;
	uint32_t x459 = 6326U;
	volatile int8_t x460 = -1;

    t111 = (((x457%x458)>x459)*x460);

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x461 = -885;
	static uint64_t x462 = 1597LLU;
	uint64_t t112 = 18125819851LLU;

    t112 = (((x461%x462)>x463)*x464);

    if (t112 != 10065130064LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x466 = 10U;
	int32_t x467 = -1;
	volatile int64_t x468 = INT64_MAX;

    t113 = (((x465%x466)>x467)*x468);

    if (t113 != INT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x469 = 13212U;
	int16_t x470 = INT16_MIN;
	uint8_t x471 = 1U;
	int8_t x472 = 10;
	int32_t t114 = 1;

    t114 = (((x469%x470)>x471)*x472);

    if (t114 != 10) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x473 = INT64_MIN;
	int64_t x474 = INT64_MIN;
	int16_t x475 = 10124;
	int8_t x476 = -1;

    t115 = (((x473%x474)>x475)*x476);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x477 = INT16_MIN;
	static int16_t x478 = INT16_MIN;
	int8_t x479 = INT8_MIN;
	static uint16_t x480 = UINT16_MAX;
	volatile int32_t t116 = 86001;

    t116 = (((x477%x478)>x479)*x480);

    if (t116 != 65535) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x481 = INT32_MAX;
	int64_t x482 = INT64_MAX;
	uint32_t x484 = 0U;
	uint32_t t117 = 11331U;

    t117 = (((x481%x482)>x483)*x484);

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x485 = UINT8_MAX;
	volatile uint64_t x486 = 129712679307209LLU;
	int32_t x487 = -574806327;
	volatile int32_t t118 = -8963;

    t118 = (((x485%x486)>x487)*x488);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x489 = 427448LL;
	volatile int16_t x490 = 7;
	int16_t x491 = INT16_MIN;
	int16_t x492 = INT16_MAX;
	int32_t t119 = -37200;

    t119 = (((x489%x490)>x491)*x492);

    if (t119 != 32767) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x494 = INT16_MIN;
	uint8_t x495 = 3U;
	uint8_t x496 = 49U;
	volatile int32_t t120 = -1587601;

    t120 = (((x493%x494)>x495)*x496);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x498 = INT32_MIN;
	int16_t x499 = 128;
	int32_t x500 = INT32_MIN;
	static int32_t t121 = -128547;

    t121 = (((x497%x498)>x499)*x500);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint8_t x502 = 6U;
	volatile int32_t x503 = INT32_MAX;
	static int8_t x504 = -1;
	int32_t t122 = -1086;

    t122 = (((x501%x502)>x503)*x504);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x506 = INT32_MIN;
	volatile int8_t x507 = -1;
	static int32_t x508 = INT32_MAX;
	volatile int32_t t123 = INT32_MAX;

    t123 = (((x505%x506)>x507)*x508);

    if (t123 != INT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x509 = 173333531127799LLU;
	static int16_t x511 = -1;
	int64_t x512 = -1LL;
	int64_t t124 = -53009098LL;

    t124 = (((x509%x510)>x511)*x512);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x514 = -1;
	static uint8_t x515 = UINT8_MAX;
	uint64_t x516 = UINT64_MAX;
	volatile uint64_t t125 = 814998557588915987LLU;

    t125 = (((x513%x514)>x515)*x516);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x517 = 1U;
	uint8_t x518 = 9U;
	uint8_t x519 = 106U;
	volatile int32_t x520 = -21155700;
	int32_t t126 = -15;

    t126 = (((x517%x518)>x519)*x520);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x521 = INT32_MIN;
	static uint8_t x524 = UINT8_MAX;
	volatile int32_t t127 = -10;

    t127 = (((x521%x522)>x523)*x524);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x525 = 3062U;
	uint16_t x526 = UINT16_MAX;
	int8_t x527 = -1;
	uint32_t t128 = 254384U;

    t128 = (((x525%x526)>x527)*x528);

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x529 = UINT64_MAX;
	static volatile int8_t x530 = -1;
	static volatile int64_t x531 = INT64_MAX;
	int32_t x532 = INT32_MIN;

    t129 = (((x529%x530)>x531)*x532);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x533 = INT16_MAX;
	static int32_t x534 = INT32_MAX;
	int32_t x535 = INT32_MIN;
	int8_t x536 = -1;
	static int32_t t130 = -36922430;

    t130 = (((x533%x534)>x535)*x536);

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x538 = -1;
	uint16_t x539 = UINT16_MAX;
	int64_t x540 = 194433816421434LL;
	volatile int64_t t131 = -25015LL;

    t131 = (((x537%x538)>x539)*x540);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x541 = UINT32_MAX;
	int32_t x543 = -3561117;
	int8_t x544 = INT8_MIN;

    t132 = (((x541%x542)>x543)*x544);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x545 = -1;
	volatile int8_t x546 = 1;
	int32_t x547 = -91;
	int16_t x548 = 6;
	static volatile int32_t t133 = -204383;

    t133 = (((x545%x546)>x547)*x548);

    if (t133 != 6) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x549 = 0;
	int8_t x551 = 51;
	int8_t x552 = INT8_MIN;

    t134 = (((x549%x550)>x551)*x552);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int32_t x553 = INT32_MAX;
	uint16_t x554 = 1U;
	uint64_t x555 = 3137LLU;
	static int32_t x556 = -3;
	volatile int32_t t135 = 17742;

    t135 = (((x553%x554)>x555)*x556);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x561 = UINT64_MAX;
	int16_t x564 = -12;
	volatile int32_t t136 = 5;

    t136 = (((x561%x562)>x563)*x564);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x567 = -1LL;
	int16_t x568 = -1;
	volatile int32_t t137 = -14;

    t137 = (((x565%x566)>x567)*x568);

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x571 = INT32_MAX;
	int16_t x572 = 111;
	int32_t t138 = 59208404;

    t138 = (((x569%x570)>x571)*x572);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x573 = 6;
	uint8_t x574 = UINT8_MAX;
	int16_t x575 = INT16_MIN;
	int8_t x576 = INT8_MIN;
	volatile int32_t t139 = 45;

    t139 = (((x573%x574)>x575)*x576);

    if (t139 != -128) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x577 = INT64_MIN;
	int8_t x578 = INT8_MIN;
	int8_t x579 = INT8_MAX;
	uint16_t x580 = UINT16_MAX;
	volatile int32_t t140 = -3576918;

    t140 = (((x577%x578)>x579)*x580);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x581 = UINT8_MAX;
	int64_t x582 = 66876496887LL;
	int64_t x583 = INT64_MAX;
	uint64_t x584 = 172303LLU;

    t141 = (((x581%x582)>x583)*x584);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x585 = -523;
	int64_t x586 = -1LL;
	uint8_t x587 = 12U;
	static int16_t x588 = -1;
	volatile int32_t t142 = 99102567;

    t142 = (((x585%x586)>x587)*x588);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x589 = UINT16_MAX;
	volatile uint16_t x590 = 1U;
	int32_t x591 = INT32_MIN;
	int16_t x592 = INT16_MIN;
	volatile int32_t t143 = -2028;

    t143 = (((x589%x590)>x591)*x592);

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x593 = -1LL;
	int16_t x595 = INT16_MIN;
	int32_t t144 = 14;

    t144 = (((x593%x594)>x595)*x596);

    if (t144 != 127) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x597 = INT64_MAX;
	int32_t x598 = INT32_MAX;
	uint8_t x599 = UINT8_MAX;
	volatile uint16_t x600 = 24U;
	volatile int32_t t145 = 2029;

    t145 = (((x597%x598)>x599)*x600);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x601 = 43U;
	uint64_t x602 = 8576124690LLU;
	static int32_t x604 = INT32_MIN;
	int32_t t146 = -179141;

    t146 = (((x601%x602)>x603)*x604);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x605 = 1U;
	int32_t x606 = INT32_MIN;
	static int32_t x607 = INT32_MAX;
	static volatile int64_t t147 = -36801964747481674LL;

    t147 = (((x605%x606)>x607)*x608);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x609 = INT16_MAX;
	int64_t x610 = 46LL;
	uint32_t t148 = 9265U;

    t148 = (((x609%x610)>x611)*x612);

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x613 = 46U;
	volatile int16_t x615 = INT16_MIN;
	int32_t x616 = INT32_MIN;
	int32_t t149 = INT32_MIN;

    t149 = (((x613%x614)>x615)*x616);

    if (t149 != INT32_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x617 = -1;
	int8_t x618 = 1;
	int16_t x619 = -3029;
	uint16_t x620 = UINT16_MAX;
	static int32_t t150 = 1766470;

    t150 = (((x617%x618)>x619)*x620);

    if (t150 != 65535) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x621 = 2065418;
	uint32_t x622 = UINT32_MAX;
	uint8_t x623 = 11U;
	int8_t x624 = INT8_MIN;

    t151 = (((x621%x622)>x623)*x624);

    if (t151 != -128) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x625 = INT32_MIN;
	uint64_t x626 = 757752768942LLU;
	int16_t x627 = -11326;
	static volatile int16_t x628 = INT16_MIN;
	volatile int32_t t152 = 28;

    t152 = (((x625%x626)>x627)*x628);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x629 = INT16_MIN;
	int64_t x630 = -231LL;
	static int8_t x631 = INT8_MIN;
	uint16_t x632 = 1U;
	static int32_t t153 = -1;

    t153 = (((x629%x630)>x631)*x632);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x633 = INT64_MIN;
	static uint8_t x635 = 2U;
	static int64_t x636 = -57606616LL;
	volatile int64_t t154 = -10LL;

    t154 = (((x633%x634)>x635)*x636);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x637 = 89U;
	int16_t x640 = -1;
	static int32_t t155 = -1;

    t155 = (((x637%x638)>x639)*x640);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x641 = -240;
	uint64_t x643 = 76493553222LLU;
	int32_t t156 = -421;

    t156 = (((x641%x642)>x643)*x644);

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x645 = 401813702405759LLU;
	int16_t x646 = INT16_MIN;
	volatile int64_t x648 = -15138906LL;
	volatile int64_t t157 = -25068341LL;

    t157 = (((x645%x646)>x647)*x648);

    if (t157 != -15138906LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x649 = -1174273LL;
	uint32_t x650 = 683U;
	uint64_t x651 = 99225919963LLU;
	int64_t x652 = INT64_MAX;
	volatile int64_t t158 = INT64_MAX;

    t158 = (((x649%x650)>x651)*x652);

    if (t158 != INT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x653 = INT16_MIN;
	static volatile uint64_t x654 = 6866482758LLU;
	static int16_t x655 = INT16_MIN;
	int8_t x656 = 1;
	int32_t t159 = 0;

    t159 = (((x653%x654)>x655)*x656);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x658 = 462U;
	static volatile uint8_t x659 = 13U;
	volatile int16_t x660 = -1;
	int32_t t160 = 383719247;

    t160 = (((x657%x658)>x659)*x660);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x662 = INT64_MIN;
	static int8_t x663 = INT8_MAX;
	uint8_t x664 = 68U;
	volatile int32_t t161 = 4319340;

    t161 = (((x661%x662)>x663)*x664);

    if (t161 != 68) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x665 = 1704LLU;
	int8_t x666 = INT8_MIN;
	int32_t x668 = -477;
	volatile int32_t t162 = -2;

    t162 = (((x665%x666)>x667)*x668);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x669 = 1;
	static int16_t x670 = -5;
	volatile int32_t x671 = INT32_MIN;
	int32_t t163 = -1059312;

    t163 = (((x669%x670)>x671)*x672);

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x673 = 8U;
	static int32_t x674 = 202;
	int16_t x675 = INT16_MAX;
	volatile int64_t x676 = INT64_MIN;
	int64_t t164 = -219027LL;

    t164 = (((x673%x674)>x675)*x676);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x677 = -1;
	volatile int8_t x678 = -1;
	volatile int64_t t165 = 376304217013743LL;

    t165 = (((x677%x678)>x679)*x680);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x681 = INT64_MIN;
	uint32_t x682 = UINT32_MAX;
	int32_t x683 = INT32_MIN;
	int32_t x684 = INT32_MAX;
	int32_t t166 = -64120;

    t166 = (((x681%x682)>x683)*x684);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x686 = INT16_MAX;
	int16_t x687 = 482;
	static int16_t x688 = INT16_MAX;
	volatile int32_t t167 = 789;

    t167 = (((x685%x686)>x687)*x688);

    if (t167 != 32767) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x689 = 71963887U;
	int64_t x690 = -2896066LL;
	volatile uint32_t x691 = 8874U;
	int32_t x692 = -87019;
	volatile int32_t t168 = -10105;

    t168 = (((x689%x690)>x691)*x692);

    if (t168 != -87019) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x693 = 2775606135LLU;
	uint64_t x695 = UINT64_MAX;
	int32_t x696 = -1;
	int32_t t169 = 477928550;

    t169 = (((x693%x694)>x695)*x696);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x697 = 6772;
	int8_t x699 = INT8_MAX;
	volatile int64_t x700 = -1LL;
	int64_t t170 = -11556553845322LL;

    t170 = (((x697%x698)>x699)*x700);

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x701 = -1;
	uint8_t x704 = 0U;
	static volatile int32_t t171 = 456880;

    t171 = (((x701%x702)>x703)*x704);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x707 = -1;
	int32_t x708 = INT32_MIN;
	int32_t t172 = 945;

    t172 = (((x705%x706)>x707)*x708);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x709 = INT8_MIN;
	int8_t x710 = INT8_MIN;
	int8_t x711 = -3;
	int8_t x712 = INT8_MIN;
	volatile int32_t t173 = -723265928;

    t173 = (((x709%x710)>x711)*x712);

    if (t173 != -128) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x713 = 213;
	int8_t x714 = 58;
	int32_t x715 = 683667;
	uint64_t t174 = 34531774LLU;

    t174 = (((x713%x714)>x715)*x716);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x717 = 763;
	int16_t x720 = -6;

    t175 = (((x717%x718)>x719)*x720);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x721 = 516000323U;
	static int64_t x724 = INT64_MIN;
	int64_t t176 = INT64_MIN;

    t176 = (((x721%x722)>x723)*x724);

    if (t176 != INT64_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x726 = INT16_MIN;
	volatile int64_t x727 = 2189459594843463LL;
	int64_t x728 = INT64_MIN;
	int64_t t177 = -18990012069591LL;

    t177 = (((x725%x726)>x727)*x728);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x731 = -3;
	int32_t x732 = INT32_MIN;

    t178 = (((x729%x730)>x731)*x732);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x733 = -1;
	static int32_t x734 = -6004;
	int8_t x735 = -1;
	int16_t x736 = INT16_MIN;
	int32_t t179 = 1;

    t179 = (((x733%x734)>x735)*x736);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x737 = -1LL;
	int8_t x738 = INT8_MIN;
	uint64_t x739 = UINT64_MAX;
	volatile uint8_t x740 = 75U;
	volatile int32_t t180 = 5;

    t180 = (((x737%x738)>x739)*x740);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x741 = UINT64_MAX;
	volatile int8_t x742 = INT8_MIN;
	int16_t x743 = INT16_MIN;
	volatile uint64_t x744 = 7122466175180968083LLU;
	volatile uint64_t t181 = 5533LLU;

    t181 = (((x741%x742)>x743)*x744);

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x745 = 343429643762776331LLU;
	int32_t x746 = -90391343;
	volatile int32_t x748 = 710;

    t182 = (((x745%x746)>x747)*x748);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x749 = 21859157LLU;
	int8_t x750 = 1;
	int64_t x751 = INT64_MIN;
	volatile int32_t t183 = -391995;

    t183 = (((x749%x750)>x751)*x752);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x753 = INT16_MIN;
	int16_t x754 = INT16_MIN;
	uint64_t x756 = 112756912LLU;
	volatile uint64_t t184 = 13995406183380LLU;

    t184 = (((x753%x754)>x755)*x756);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x757 = 443693;
	volatile int64_t x758 = -1LL;
	volatile int16_t x760 = -1036;

    t185 = (((x757%x758)>x759)*x760);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x761 = 0;
	uint64_t x762 = 146558755568990699LLU;
	volatile uint64_t x763 = 40566212978602LLU;
	static int16_t x764 = -1;
	int32_t t186 = -10798;

    t186 = (((x761%x762)>x763)*x764);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x765 = INT64_MIN;
	static int64_t x766 = INT64_MIN;
	volatile int16_t x767 = -5;
	static int32_t x768 = INT32_MIN;
	volatile int32_t t187 = INT32_MIN;

    t187 = (((x765%x766)>x767)*x768);

    if (t187 != INT32_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x769 = -1;
	static uint64_t x770 = 3506309LLU;
	volatile int16_t x771 = INT16_MIN;
	int64_t x772 = -124LL;
	int64_t t188 = -32175LL;

    t188 = (((x769%x770)>x771)*x772);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x773 = -7;
	uint8_t x774 = 5U;
	int64_t x775 = INT64_MIN;
	int64_t x776 = -1LL;
	volatile int64_t t189 = 3108254699714LL;

    t189 = (((x773%x774)>x775)*x776);

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x777 = UINT32_MAX;
	static int64_t x778 = INT64_MIN;
	static int16_t x779 = 205;
	int32_t x780 = -1;
	int32_t t190 = -71694;

    t190 = (((x777%x778)>x779)*x780);

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x781 = 37U;
	volatile int8_t x782 = INT8_MIN;
	volatile int64_t x784 = -300127327LL;
	int64_t t191 = 237053677397LL;

    t191 = (((x781%x782)>x783)*x784);

    if (t191 != -300127327LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x785 = -4LL;
	uint16_t x786 = UINT16_MAX;
	int32_t x787 = INT32_MIN;
	static int16_t x788 = INT16_MIN;
	int32_t t192 = -2513974;

    t192 = (((x785%x786)>x787)*x788);

    if (t192 != -32768) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x789 = 0;
	uint64_t x790 = 1142253LLU;
	uint32_t x792 = 4038482U;
	volatile uint32_t t193 = 3704U;

    t193 = (((x789%x790)>x791)*x792);

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x794 = 375058;
	static int8_t x795 = INT8_MIN;
	static volatile uint8_t x796 = 1U;
	static volatile int32_t t194 = -395235515;

    t194 = (((x793%x794)>x795)*x796);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x797 = 26U;
	int64_t x799 = INT64_MAX;
	static uint64_t x800 = 3LLU;
	uint64_t t195 = 2085122388LLU;

    t195 = (((x797%x798)>x799)*x800);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x801 = 1579890;
	int16_t x802 = -1;
	uint8_t x803 = 107U;

    t196 = (((x801%x802)>x803)*x804);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x805 = 15;
	static int32_t x806 = INT32_MIN;
	int64_t x807 = INT64_MAX;
	int64_t x808 = -4461200471370572LL;
	volatile int64_t t197 = 94336007540460182LL;

    t197 = (((x805%x806)>x807)*x808);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x809 = INT8_MAX;
	volatile int64_t x810 = 828601277045040012LL;
	uint64_t x811 = UINT64_MAX;
	int8_t x812 = INT8_MIN;
	volatile int32_t t198 = 0;

    t198 = (((x809%x810)>x811)*x812);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x813 = INT32_MIN;
	int32_t x814 = -3596641;
	volatile int32_t x816 = INT32_MIN;
	int32_t t199 = -6;

    t199 = (((x813%x814)>x815)*x816);

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


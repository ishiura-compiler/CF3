
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

int64_t x4 = -1LL;
int64_t x10 = INT64_MIN;
int64_t x23 = INT64_MIN;
uint16_t x24 = 178U;
volatile uint64_t x32 = 22938LLU;
int16_t x35 = -1;
int64_t x36 = -60LL;
volatile int32_t x47 = 176;
int32_t x56 = 505138;
uint16_t x57 = UINT16_MAX;
static uint16_t x61 = UINT16_MAX;
int8_t x62 = -1;
volatile int64_t x63 = -1LL;
volatile int64_t t16 = -3740986574534172LL;
volatile uint64_t x70 = 3248986583375856LLU;
int32_t t18 = 36374919;
static volatile int64_t x77 = -1LL;
uint8_t x79 = 0U;
int64_t x81 = INT64_MIN;
static uint64_t t20 = 8186335662292420LLU;
volatile uint64_t x85 = UINT64_MAX;
int16_t x86 = 3;
static int8_t x90 = -1;
uint8_t x94 = UINT8_MAX;
int8_t x96 = INT8_MIN;
int8_t x104 = INT8_MIN;
volatile int32_t x109 = 39646228;
int32_t x119 = INT32_MAX;
uint8_t x126 = 2U;
uint16_t x128 = UINT16_MAX;
static uint32_t t31 = 12U;
static int64_t x131 = -1037373432436256893LL;
int64_t t32 = -2913LL;
volatile uint64_t t34 = 42LLU;
int16_t x147 = INT16_MIN;
int64_t t36 = 481741547LL;
volatile int64_t x157 = 928LL;
int64_t t39 = 297532963344637708LL;
int8_t x165 = -15;
volatile uint16_t x168 = 40U;
int32_t x170 = -1;
volatile uint64_t t42 = UINT64_MAX;
static uint32_t x179 = UINT32_MAX;
uint32_t t46 = 479014148U;
int8_t x198 = INT8_MIN;
volatile int64_t t51 = -28788LL;
uint8_t x212 = 3U;
uint32_t x215 = 10716819U;
int8_t x221 = INT8_MIN;
int64_t x223 = INT64_MIN;
volatile uint64_t x227 = 4036LLU;
static int64_t x229 = 794LL;
uint64_t x230 = 13023571LLU;
static uint16_t x231 = 58U;
int64_t x234 = INT64_MIN;
int8_t x243 = INT8_MIN;
int16_t x244 = INT16_MIN;
int64_t x247 = INT64_MIN;
int8_t x252 = -1;
int64_t x253 = INT64_MIN;
volatile int32_t x255 = INT32_MIN;
int32_t x258 = INT32_MIN;
volatile uint8_t x260 = UINT8_MAX;
int8_t x267 = -57;
volatile uint64_t t67 = 4960LLU;
static uint8_t x279 = 39U;
int16_t x286 = INT16_MIN;
uint8_t x293 = 61U;
uint16_t x296 = 3U;
static int32_t t73 = 1049787259;
volatile int32_t t76 = 1797551;
int8_t x325 = 1;
int32_t x330 = INT32_MIN;
int16_t x332 = 0;
volatile int16_t x339 = INT16_MAX;
static int16_t x347 = 0;
int32_t x350 = INT32_MAX;
static uint64_t x354 = UINT64_MAX;
volatile uint16_t x355 = 159U;
volatile int64_t x356 = INT64_MIN;
volatile int64_t x359 = 13990949845167501LL;
uint16_t x360 = 39U;
volatile int32_t x366 = INT32_MIN;
int16_t x375 = -1;
int32_t t93 = -165;
int8_t x380 = INT8_MIN;
volatile uint32_t t94 = UINT32_MAX;
uint32_t x388 = 368U;
volatile int64_t x392 = 118278LL;
uint32_t x400 = 44239U;
uint32_t t99 = 9088U;
int16_t x402 = 25;
int16_t x418 = INT16_MIN;
int8_t x421 = -1;
volatile int64_t x426 = -1LL;
static uint64_t x431 = UINT64_MAX;
int8_t x436 = INT8_MAX;
volatile uint64_t x438 = UINT64_MAX;
volatile uint32_t x442 = 130938U;
uint32_t x443 = 127U;
int32_t x452 = -1;
static uint32_t x458 = 54562U;
int16_t x459 = -1;
int8_t x462 = INT8_MIN;
uint32_t x464 = 8008U;
volatile uint32_t t115 = UINT32_MAX;
int32_t x469 = INT32_MIN;
volatile int64_t x470 = 1798869LL;
int32_t x471 = -1;
int32_t x472 = 9970140;
volatile uint32_t x473 = 59939U;
int16_t x474 = -1;
volatile int16_t x476 = -22;
uint64_t x478 = UINT64_MAX;
static volatile int8_t x482 = 25;
static int64_t x483 = -1LL;
int32_t x485 = -1;
int8_t x491 = INT8_MIN;
int32_t t123 = INT32_MAX;
static volatile int32_t x507 = 446209;
static volatile int32_t t128 = 1446345;
uint16_t x523 = UINT16_MAX;
uint32_t x525 = UINT32_MAX;
uint32_t x526 = 6U;
int32_t x536 = INT32_MIN;
uint16_t x537 = 501U;
int32_t x538 = INT32_MIN;
uint64_t x539 = UINT64_MAX;
uint32_t x546 = 7U;
uint64_t x557 = 33218732884015721LLU;
static uint8_t x567 = 0U;
uint16_t x568 = UINT16_MAX;
int64_t t141 = 2628392460LL;
static uint64_t t142 = 25508130836LLU;
int64_t t143 = 686526LL;
int32_t x578 = INT32_MIN;
volatile int64_t x587 = -231791491019LL;
uint64_t x592 = 158LLU;
volatile uint8_t x598 = UINT8_MAX;
int32_t x601 = INT32_MIN;
int16_t x602 = -1732;
static volatile int8_t x603 = 4;
uint32_t t151 = UINT32_MAX;
volatile int8_t x615 = 2;
int8_t x616 = INT8_MAX;
static uint64_t t155 = 222954999LLU;
uint16_t x633 = UINT16_MAX;
int8_t x638 = -36;
volatile uint32_t x639 = UINT32_MAX;
volatile uint8_t x641 = 1U;
uint16_t x645 = 34U;
uint32_t x647 = UINT32_MAX;
int8_t x648 = 0;
int64_t t161 = 79910LL;
int16_t x649 = 3318;
volatile uint32_t t164 = UINT32_MAX;
int8_t x665 = 21;
volatile int32_t x666 = 252;
volatile uint64_t t166 = 750LLU;
volatile int32_t x675 = INT32_MIN;
static uint32_t x678 = 5U;
static volatile int16_t x679 = -1;
uint64_t t170 = UINT64_MAX;
uint64_t x686 = 23183756532786LLU;
static volatile int32_t x690 = INT32_MAX;
volatile uint32_t t172 = 234076U;
static uint32_t x696 = 9U;
int32_t x700 = -65460;
int64_t t174 = -113111132691LL;
uint8_t x702 = 18U;
uint8_t x703 = UINT8_MAX;
volatile int32_t t177 = 6747207;
static uint64_t x714 = UINT64_MAX;
uint64_t t178 = 10401097543792LLU;
static int8_t x718 = -17;
volatile int16_t x723 = -9918;
uint64_t x730 = 13622LLU;
volatile uint8_t x734 = 0U;
volatile int8_t x737 = -1;
int32_t x738 = INT32_MIN;
volatile uint16_t x747 = 26312U;
static uint64_t t186 = 20276449847LLU;
int16_t x750 = INT16_MIN;
static int8_t x756 = INT8_MAX;
int16_t x768 = INT16_MAX;
uint32_t t192 = 27493726U;
int64_t x773 = INT64_MIN;
int64_t t193 = -715263143595581120LL;
uint8_t x792 = 31U;


void f0(void) {
    	uint16_t x1 = 286U;
	volatile int8_t x2 = INT8_MIN;
	int32_t x3 = INT32_MIN;
	volatile int64_t t0 = -324LL;

    t0 = (((x1|x2)^x3)|x4);

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	uint64_t x6 = 943694LLU;
	uint8_t x7 = UINT8_MAX;
	int8_t x8 = INT8_MIN;
	uint64_t t1 = 8715999LLU;

    t1 = (((x5|x6)^x7)|x8);

    if (t1 != 18446744073709551537LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 6056983LLU;
	int32_t x11 = INT32_MIN;
	int64_t x12 = INT64_MAX;
	volatile uint64_t t2 = 2979819LLU;

    t2 = (((x9|x10)^x11)|x12);

    if (t2 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = UINT32_MAX;
	volatile uint32_t x14 = 193U;
	uint8_t x15 = 27U;
	uint8_t x16 = UINT8_MAX;
	volatile uint32_t t3 = UINT32_MAX;

    t3 = (((x13|x14)^x15)|x16);

    if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x17 = UINT16_MAX;
	int32_t x18 = -1;
	static int64_t x19 = 8109402872350LL;
	static int8_t x20 = INT8_MIN;
	int64_t t4 = 3108260057449918LL;

    t4 = (((x17|x18)^x19)|x20);

    if (t4 != -31LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	volatile int8_t x22 = 0;
	volatile int64_t t5 = 3765379672580LL;

    t5 = (((x21|x22)^x23)|x24);

    if (t5 != 9223372034707292338LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = -41;
	volatile int16_t x26 = -1;
	int8_t x27 = INT8_MIN;
	int16_t x28 = -1;
	static volatile int32_t t6 = -727;

    t6 = (((x25|x26)^x27)|x28);

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 98659245;
	volatile int64_t x30 = INT64_MAX;
	int64_t x31 = -1LL;
	uint64_t t7 = 1570444908LLU;

    t7 = (((x29|x30)^x31)|x32);

    if (t7 != 9223372036854798746LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = 16;
	static int8_t x34 = -1;
	int64_t t8 = 462LL;

    t8 = (((x33|x34)^x35)|x36);

    if (t8 != -60LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	uint16_t x38 = UINT16_MAX;
	static uint32_t x39 = 46U;
	static uint64_t x40 = UINT64_MAX;
	uint64_t t9 = UINT64_MAX;

    t9 = (((x37|x38)^x39)|x40);

    if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x41 = -12659;
	int16_t x42 = INT16_MIN;
	uint32_t x43 = UINT32_MAX;
	static uint32_t x44 = 15U;
	uint32_t t10 = 273483U;

    t10 = (((x41|x42)^x43)|x44);

    if (t10 != 12671U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x45 = UINT32_MAX;
	int64_t x46 = 906670103LL;
	int32_t x48 = INT32_MAX;
	int64_t t11 = 33717999642840918LL;

    t11 = (((x45|x46)^x47)|x48);

    if (t11 != 4294967295LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = UINT64_MAX;
	static int32_t x50 = INT32_MIN;
	int32_t x51 = INT32_MIN;
	static uint32_t x52 = UINT32_MAX;
	uint64_t t12 = 523191256318712LLU;

    t12 = (((x49|x50)^x51)|x52);

    if (t12 != 4294967295LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x53 = 11575;
	uint16_t x54 = 429U;
	int32_t x55 = INT32_MAX;
	int32_t t13 = -251385;

    t13 = (((x53|x54)^x55)|x56);

    if (t13 != 2147481458) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x58 = 6U;
	int8_t x59 = -3;
	volatile uint64_t x60 = 3605LLU;
	volatile uint64_t t14 = 1962888486252004LLU;

    t14 = (((x57|x58)^x59)|x60);

    if (t14 != 18446744073709489687LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x64 = 44116286;
	int64_t t15 = -335LL;

    t15 = (((x61|x62)^x63)|x64);

    if (t15 != 44116286LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x65 = UINT8_MAX;
	uint16_t x66 = 204U;
	int32_t x67 = INT32_MIN;
	static int64_t x68 = INT64_MIN;

    t16 = (((x65|x66)^x67)|x68);

    if (t16 != -2147483393LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x69 = -1;
	int32_t x71 = INT32_MIN;
	int32_t x72 = 10079017;
	uint64_t t17 = 4194533492739LLU;

    t17 = (((x69|x70)^x71)|x72);

    if (t17 != 2147483647LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 31U;
	static int16_t x74 = INT16_MIN;
	uint8_t x75 = 97U;
	static volatile int16_t x76 = INT16_MIN;

    t18 = (((x73|x74)^x75)|x76);

    if (t18 != -32642) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x78 = -1;
	int8_t x80 = 0;
	volatile int64_t t19 = 168902526LL;

    t19 = (((x77|x78)^x79)|x80);

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x82 = 0U;
	uint32_t x83 = UINT32_MAX;
	uint64_t x84 = 1596617976349802550LLU;

    t20 = (((x81|x82)^x83)|x84);

    if (t20 != 10819990017057751039LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x87 = INT64_MAX;
	int32_t x88 = INT32_MIN;
	static uint64_t t21 = 8025816LLU;

    t21 = (((x85|x86)^x87)|x88);

    if (t21 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = -4;
	int32_t x91 = INT32_MIN;
	int8_t x92 = INT8_MIN;
	int32_t t22 = -3478734;

    t22 = (((x89|x90)^x91)|x92);

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = 315;
	static volatile int16_t x95 = -288;
	int32_t t23 = -3524;

    t23 = (((x93|x94)^x95)|x96);

    if (t23 != -97) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x97 = INT32_MIN;
	int32_t x98 = 3283;
	volatile int32_t x99 = 7;
	int64_t x100 = -4265846289545973671LL;
	int64_t t24 = 4039LL;

    t24 = (((x97|x98)^x99)|x100);

    if (t24 != -1389249315LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MIN;
	int32_t x102 = 813430238;
	volatile int64_t x103 = INT64_MIN;
	volatile int64_t t25 = -125LL;

    t25 = (((x101|x102)^x103)|x104);

    if (t25 != -34LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = 1592;
	int32_t x106 = 34;
	uint8_t x107 = UINT8_MAX;
	int64_t x108 = -760LL;
	int64_t t26 = 6485279896878586LL;

    t26 = (((x105|x106)^x107)|x108);

    if (t26 != -51LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x110 = INT32_MIN;
	static int64_t x111 = INT64_MIN;
	int64_t x112 = 12533704LL;
	volatile int64_t t27 = 0LL;

    t27 = (((x109|x110)^x111)|x112);

    if (t27 != 9223372034757623772LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = UINT32_MAX;
	volatile int32_t x114 = INT32_MAX;
	int32_t x115 = INT32_MAX;
	static int64_t x116 = INT64_MIN;
	static int64_t t28 = -129496333513846116LL;

    t28 = (((x113|x114)^x115)|x116);

    if (t28 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = 4619;
	int16_t x118 = -1;
	int64_t x120 = INT64_MIN;
	volatile int64_t t29 = 45235343356LL;

    t29 = (((x117|x118)^x119)|x120);

    if (t29 != -2147483648LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = 12;
	int64_t x122 = INT64_MAX;
	uint32_t x123 = UINT32_MAX;
	static int8_t x124 = 1;
	int64_t t30 = -1321450LL;

    t30 = (((x121|x122)^x123)|x124);

    if (t30 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = 1;
	uint32_t x127 = 41918165U;

    t31 = (((x125|x126)^x127)|x128);

    if (t31 != 41943039U) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int64_t x129 = INT64_MAX;
	int32_t x130 = INT32_MIN;
	int64_t x132 = 390064LL;

    t32 = (((x129|x130)^x131)|x132);

    if (t32 != 1037373432436618236LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = 416646LLU;
	int8_t x134 = INT8_MIN;
	static uint16_t x135 = UINT16_MAX;
	int64_t x136 = INT64_MIN;
	volatile uint64_t t33 = 20044LLU;

    t33 = (((x133|x134)^x135)|x136);

    if (t33 != 18446744073709486201LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x137 = INT16_MAX;
	uint64_t x138 = 13828077886LLU;
	uint64_t x139 = 435LLU;
	int16_t x140 = INT16_MIN;

    t34 = (((x137|x138)^x139)|x140);

    if (t34 != 18446744073709551180LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MIN;
	int8_t x142 = INT8_MAX;
	int16_t x143 = INT16_MAX;
	volatile int32_t x144 = 0;
	int32_t t35 = 1548176;

    t35 = (((x141|x142)^x143)|x144);

    if (t35 != -2147451008) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -1;
	volatile int64_t x146 = INT64_MAX;
	int8_t x148 = INT8_MIN;

    t36 = (((x145|x146)^x147)|x148);

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 212979615U;
	int16_t x150 = -185;
	static uint16_t x151 = UINT16_MAX;
	static int8_t x152 = INT8_MIN;
	static volatile uint32_t t37 = 943659995U;

    t37 = (((x149|x150)^x151)|x152);

    if (t37 != 4294967200U) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x153 = 36;
	static uint8_t x154 = 0U;
	int64_t x155 = 9LL;
	int16_t x156 = 419;
	int64_t t38 = 118455617061234600LL;

    t38 = (((x153|x154)^x155)|x156);

    if (t38 != 431LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x158 = 6169876U;
	static int32_t x159 = INT32_MAX;
	int32_t x160 = -1;

    t39 = (((x157|x158)^x159)|x160);

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x161 = 60U;
	uint64_t x162 = 472208175588123603LLU;
	int32_t x163 = INT32_MIN;
	int64_t x164 = INT64_MIN;
	static volatile uint64_t t40 = 52LLU;

    t40 = (((x161|x162)^x163)|x164);

    if (t40 != 17974535899932206079LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x166 = 62148U;
	int64_t x167 = 13339251391334LL;
	int64_t t41 = 52LL;

    t41 = (((x165|x166)^x167)|x168);

    if (t41 != 13336790484155LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 3562LLU;
	int16_t x171 = INT16_MIN;
	static int32_t x172 = -11;

    t42 = (((x169|x170)^x171)|x172);

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x173 = INT8_MAX;
	int16_t x174 = -18;
	int64_t x175 = -664125LL;
	int8_t x176 = INT8_MIN;
	int64_t t43 = 3841615759LL;

    t43 = (((x173|x174)^x175)|x176);

    if (t43 != -68LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -20737082745910LL;
	static uint32_t x178 = 1U;
	static uint8_t x180 = 7U;
	volatile int64_t t44 = 8LL;

    t44 = (((x177|x178)^x179)|x180);

    if (t44 != -20739416431561LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MAX;
	static int8_t x182 = 1;
	static int16_t x183 = -1;
	static int16_t x184 = INT16_MIN;
	volatile int64_t t45 = 5328113154693LL;

    t45 = (((x181|x182)^x183)|x184);

    if (t45 != -32768LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = 24U;
	uint16_t x186 = 3U;
	uint32_t x187 = 3U;
	volatile int32_t x188 = -685777136;

    t46 = (((x185|x186)^x187)|x188);

    if (t46 != 3609190168U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = UINT64_MAX;
	volatile uint16_t x190 = 93U;
	static volatile int32_t x191 = -15577;
	static int32_t x192 = -1;
	volatile uint64_t t47 = UINT64_MAX;

    t47 = (((x189|x190)^x191)|x192);

    if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = UINT16_MAX;
	uint8_t x194 = UINT8_MAX;
	int16_t x195 = INT16_MIN;
	int16_t x196 = INT16_MAX;
	int32_t t48 = -37;

    t48 = (((x193|x194)^x195)|x196);

    if (t48 != -32769) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x197 = 444058;
	uint16_t x199 = 2138U;
	static int64_t x200 = -1LL;
	volatile int64_t t49 = 90829LL;

    t49 = (((x197|x198)^x199)|x200);

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x201 = UINT16_MAX;
	static volatile uint16_t x202 = 71U;
	volatile int16_t x203 = INT16_MIN;
	static uint32_t x204 = 124437U;
	uint32_t t50 = UINT32_MAX;

    t50 = (((x201|x202)^x203)|x204);

    if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x205 = INT64_MAX;
	static uint16_t x206 = 2U;
	volatile uint8_t x207 = 24U;
	int64_t x208 = INT64_MIN;

    t51 = (((x205|x206)^x207)|x208);

    if (t51 != -25LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -3178;
	int8_t x210 = -1;
	uint16_t x211 = 1685U;
	volatile int32_t t52 = -18;

    t52 = (((x209|x210)^x211)|x212);

    if (t52 != -1685) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	static uint8_t x214 = 21U;
	static volatile uint64_t x216 = 98253125LLU;
	volatile uint64_t t53 = 1557007LLU;

    t53 = (((x213|x214)^x215)|x216);

    if (t53 != 4292820935LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x217 = 1;
	int16_t x218 = INT16_MIN;
	static int64_t x219 = INT64_MIN;
	volatile int16_t x220 = INT16_MIN;
	static int64_t t54 = 1963LL;

    t54 = (((x217|x218)^x219)|x220);

    if (t54 != -32767LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x222 = 406555LLU;
	static int8_t x224 = -1;
	volatile uint64_t t55 = UINT64_MAX;

    t55 = (((x221|x222)^x223)|x224);

    if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x225 = UINT64_MAX;
	int16_t x226 = INT16_MAX;
	volatile int32_t x228 = 21;
	uint64_t t56 = 278981329143LLU;

    t56 = (((x225|x226)^x227)|x228);

    if (t56 != 18446744073709547583LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x232 = -15;
	volatile uint64_t t57 = 13684670899328543LLU;

    t57 = (((x229|x230)^x231)|x232);

    if (t57 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 82929001U;
	int8_t x235 = 0;
	int8_t x236 = 0;
	volatile int64_t t58 = -3395698136223LL;

    t58 = (((x233|x234)^x235)|x236);

    if (t58 != -9223372036771846807LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = UINT32_MAX;
	volatile int32_t x238 = 2424;
	volatile int32_t x239 = INT32_MIN;
	int32_t x240 = INT32_MIN;
	volatile uint32_t t59 = UINT32_MAX;

    t59 = (((x237|x238)^x239)|x240);

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MIN;
	static uint64_t x242 = UINT64_MAX;
	volatile uint64_t t60 = 1323634175327112171LLU;

    t60 = (((x241|x242)^x243)|x244);

    if (t60 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x245 = -1LL;
	int32_t x246 = INT32_MIN;
	static uint64_t x248 = 197177347765807040LLU;
	uint64_t t61 = 413907936025300427LLU;

    t61 = (((x245|x246)^x247)|x248);

    if (t61 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = 1LL;
	static int8_t x250 = INT8_MIN;
	volatile uint16_t x251 = UINT16_MAX;
	int64_t t62 = 341775964254625645LL;

    t62 = (((x249|x250)^x251)|x252);

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x254 = -1;
	static int8_t x256 = 4;
	volatile int64_t t63 = -78460362LL;

    t63 = (((x253|x254)^x255)|x256);

    if (t63 != 2147483647LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MIN;
	int16_t x259 = INT16_MIN;
	volatile int64_t t64 = 0LL;

    t64 = (((x257|x258)^x259)|x260);

    if (t64 != 2147451135LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = INT8_MAX;
	int32_t x262 = -53;
	int16_t x263 = -1;
	int8_t x264 = INT8_MAX;
	static int32_t t65 = 5165;

    t65 = (((x261|x262)^x263)|x264);

    if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MIN;
	volatile int16_t x266 = INT16_MIN;
	int32_t x268 = INT32_MIN;
	int64_t t66 = -259LL;

    t66 = (((x265|x266)^x267)|x268);

    if (t66 != -2147450937LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = -1;
	uint16_t x270 = UINT16_MAX;
	static uint64_t x271 = 149497LLU;
	uint64_t x272 = 87143LLU;

    t67 = (((x269|x270)^x271)|x272);

    if (t67 != 18446744073709419623LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x273 = 11U;
	int64_t x274 = -15217851753020604LL;
	volatile uint8_t x275 = UINT8_MAX;
	volatile int16_t x276 = -1;
	static int64_t t68 = -124341514291115731LL;

    t68 = (((x273|x274)^x275)|x276);

    if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = 1168U;
	int64_t x278 = INT64_MIN;
	int32_t x280 = 700701;
	int64_t t69 = -4LL;

    t69 = (((x277|x278)^x279)|x280);

    if (t69 != -9223372036854073921LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -2;
	int64_t x282 = 659931193LL;
	int32_t x283 = -1;
	int64_t x284 = -400451581608LL;
	int64_t t70 = 2764960LL;

    t70 = (((x281|x282)^x283)|x284);

    if (t70 != -400451581608LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x285 = INT16_MIN;
	int64_t x287 = -1LL;
	volatile uint64_t x288 = UINT64_MAX;
	uint64_t t71 = UINT64_MAX;

    t71 = (((x285|x286)^x287)|x288);

    if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x289 = UINT16_MAX;
	int8_t x290 = INT8_MIN;
	volatile int16_t x291 = INT16_MAX;
	uint64_t x292 = 520712939248LLU;
	uint64_t t72 = 1055LLU;

    t72 = (((x289|x290)^x291)|x292);

    if (t72 != 18446744073709545200LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x294 = INT8_MIN;
	static uint16_t x295 = 1U;

    t73 = (((x293|x294)^x295)|x296);

    if (t73 != -65) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x297 = -1LL;
	uint8_t x298 = 10U;
	static volatile int16_t x299 = INT16_MAX;
	int8_t x300 = -13;
	int64_t t74 = -1LL;

    t74 = (((x297|x298)^x299)|x300);

    if (t74 != -13LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MIN;
	uint32_t x302 = 58490875U;
	uint8_t x303 = 0U;
	uint32_t x304 = 197U;
	volatile uint32_t t75 = UINT32_MAX;

    t75 = (((x301|x302)^x303)|x304);

    if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MIN;
	int16_t x306 = INT16_MIN;
	volatile int16_t x307 = -119;
	int8_t x308 = INT8_MIN;

    t76 = (((x305|x306)^x307)|x308);

    if (t76 != -119) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MAX;
	int64_t x310 = INT64_MIN;
	int64_t x311 = 1212762717535526LL;
	int64_t x312 = 3331187006081369LL;
	int64_t t77 = 31778112711LL;

    t77 = (((x309|x310)^x311)|x312);

    if (t77 != -1136895305200679LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int8_t x313 = INT8_MIN;
	int64_t x314 = -3134LL;
	static int64_t x315 = -3LL;
	int8_t x316 = INT8_MIN;
	int64_t t78 = -3770LL;

    t78 = (((x313|x314)^x315)|x316);

    if (t78 != -65LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MAX;
	static int64_t x318 = INT64_MIN;
	uint8_t x319 = UINT8_MAX;
	int8_t x320 = 1;
	static volatile int64_t t79 = 7LL;

    t79 = (((x317|x318)^x319)|x320);

    if (t79 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MAX;
	uint64_t x322 = UINT64_MAX;
	int32_t x323 = 3234;
	static int32_t x324 = INT32_MAX;
	volatile uint64_t t80 = UINT64_MAX;

    t80 = (((x321|x322)^x323)|x324);

    if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x326 = INT16_MIN;
	uint8_t x327 = UINT8_MAX;
	static int64_t x328 = INT64_MIN;
	int64_t t81 = 132LL;

    t81 = (((x325|x326)^x327)|x328);

    if (t81 != -32514LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MIN;
	uint32_t x331 = 69999799U;
	uint32_t t82 = 15309523U;

    t82 = (((x329|x330)^x331)|x332);

    if (t82 != 2217483447U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = 28U;
	static int16_t x334 = -1;
	uint8_t x335 = 18U;
	int32_t x336 = 5462;
	int32_t t83 = -23749;

    t83 = (((x333|x334)^x335)|x336);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -3635;
	static volatile uint32_t x338 = 1061466542U;
	uint8_t x340 = 9U;
	volatile uint32_t t84 = 27422U;

    t84 = (((x337|x338)^x339)|x340);

    if (t84 != 4294938137U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = 141160846991495062LLU;
	int64_t x342 = -1LL;
	volatile int8_t x343 = -1;
	static int64_t x344 = 588350320755LL;
	volatile uint64_t t85 = 371265866692057LLU;

    t85 = (((x341|x342)^x343)|x344);

    if (t85 != 588350320755LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x345 = -11;
	static int32_t x346 = -117;
	int16_t x348 = INT16_MAX;
	volatile int32_t t86 = 10990390;

    t86 = (((x345|x346)^x347)|x348);

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = 5811660LLU;
	int32_t x351 = 3715991;
	int32_t x352 = INT32_MIN;
	volatile uint64_t t87 = 6766550537117806LLU;

    t87 = (((x349|x350)^x351)|x352);

    if (t87 != 18446744073705835624LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x353 = INT64_MAX;
	uint64_t t88 = 105790654LLU;

    t88 = (((x353|x354)^x355)|x356);

    if (t88 != 18446744073709551456LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = INT64_MAX;
	int16_t x358 = -133;
	int64_t t89 = 2398LL;

    t89 = (((x357|x358)^x359)|x360);

    if (t89 != -13990949845167497LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -2318726;
	static int8_t x362 = INT8_MAX;
	int64_t x363 = -1LL;
	volatile int64_t x364 = -59493130LL;
	volatile int64_t t90 = 4284133007LL;

    t90 = (((x361|x362)^x363)|x364);

    if (t90 != -59279882LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = 428693098597904355LLU;
	int64_t x367 = -22691390LL;
	uint64_t x368 = UINT64_MAX;
	static volatile uint64_t t91 = UINT64_MAX;

    t91 = (((x365|x366)^x367)|x368);

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint8_t x369 = 2U;
	volatile uint32_t x370 = UINT32_MAX;
	uint16_t x371 = UINT16_MAX;
	volatile uint32_t x372 = UINT32_MAX;
	static uint32_t t92 = UINT32_MAX;

    t92 = (((x369|x370)^x371)|x372);

    if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x373 = 1U;
	int16_t x374 = INT16_MAX;
	volatile int8_t x376 = -1;

    t93 = (((x373|x374)^x375)|x376);

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = 119093954U;
	int8_t x378 = -1;
	int16_t x379 = INT16_MIN;

    t94 = (((x377|x378)^x379)|x380);

    if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = 92U;
	int64_t x382 = -1LL;
	uint64_t x383 = 226741LLU;
	int16_t x384 = INT16_MIN;
	static volatile uint64_t t95 = 208220390LLU;

    t95 = (((x381|x382)^x383)|x384);

    if (t95 != 18446744073709521482LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MAX;
	int16_t x386 = INT16_MAX;
	int64_t x387 = -21847560LL;
	volatile int64_t t96 = 20029LL;

    t96 = (((x385|x386)^x387)|x388);

    if (t96 != -21831817LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = -1;
	static int16_t x390 = -1;
	int64_t x391 = INT64_MAX;
	static int64_t t97 = -137225697618453LL;

    t97 = (((x389|x390)^x391)|x392);

    if (t97 != -9223372036854657530LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = 11475214U;
	static int8_t x394 = -1;
	int8_t x395 = 1;
	uint64_t x396 = UINT64_MAX;
	static uint64_t t98 = UINT64_MAX;

    t98 = (((x393|x394)^x395)|x396);

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x397 = INT32_MAX;
	uint32_t x398 = UINT32_MAX;
	static int32_t x399 = -1;

    t99 = (((x397|x398)^x399)|x400);

    if (t99 != 44239U) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = 3263645418LL;
	int16_t x403 = INT16_MIN;
	int8_t x404 = 7;
	int64_t t100 = 450818932806443LL;

    t100 = (((x401|x402)^x403)|x404);

    if (t100 != -3263641857LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x405 = INT8_MAX;
	int32_t x406 = INT32_MAX;
	uint8_t x407 = 52U;
	static int64_t x408 = -924270LL;
	volatile int64_t t101 = 16765917234676067LL;

    t101 = (((x405|x406)^x407)|x408);

    if (t101 != -37LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	static int64_t x410 = -4252760786860801LL;
	int32_t x411 = INT32_MIN;
	int8_t x412 = INT8_MIN;
	volatile int64_t t102 = 3922500473937LL;

    t102 = (((x409|x410)^x411)|x412);

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x413 = 41;
	uint8_t x414 = UINT8_MAX;
	int32_t x415 = 1;
	int16_t x416 = INT16_MIN;
	static int32_t t103 = 915668841;

    t103 = (((x413|x414)^x415)|x416);

    if (t103 != -32514) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MIN;
	uint32_t x419 = 8238U;
	static volatile int8_t x420 = -1;
	volatile uint32_t t104 = UINT32_MAX;

    t104 = (((x417|x418)^x419)|x420);

    if (t104 != UINT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x422 = 3U;
	static int64_t x423 = 299LL;
	int8_t x424 = INT8_MAX;
	int64_t t105 = -513503843LL;

    t105 = (((x421|x422)^x423)|x424);

    if (t105 != -257LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x425 = UINT8_MAX;
	int16_t x427 = -1;
	int32_t x428 = 97;
	volatile int64_t t106 = -3LL;

    t106 = (((x425|x426)^x427)|x428);

    if (t106 != 97LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x429 = UINT32_MAX;
	static int64_t x430 = INT64_MIN;
	uint32_t x432 = 3609U;
	uint64_t t107 = 47LLU;

    t107 = (((x429|x430)^x431)|x432);

    if (t107 != 9223372032559812121LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x433 = INT16_MIN;
	int32_t x434 = INT32_MIN;
	int16_t x435 = INT16_MIN;
	volatile int32_t t108 = -22639;

    t108 = (((x433|x434)^x435)|x436);

    if (t108 != 127) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x437 = -89067150303LL;
	int8_t x439 = INT8_MIN;
	int64_t x440 = INT64_MIN;
	uint64_t t109 = 83933695843LLU;

    t109 = (((x437|x438)^x439)|x440);

    if (t109 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = 231LL;
	int32_t x444 = INT32_MAX;
	static volatile int64_t t110 = 66422994407990LL;

    t110 = (((x441|x442)^x443)|x444);

    if (t110 != 2147483647LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x445 = 6739;
	static volatile int32_t x446 = INT32_MIN;
	int8_t x447 = INT8_MAX;
	int8_t x448 = INT8_MIN;
	volatile int32_t t111 = -48822328;

    t111 = (((x445|x446)^x447)|x448);

    if (t111 != -84) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x449 = INT64_MIN;
	int32_t x450 = -1;
	uint16_t x451 = UINT16_MAX;
	int64_t t112 = 15859912143612LL;

    t112 = (((x449|x450)^x451)|x452);

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = -2724LL;
	static int32_t x454 = INT32_MIN;
	volatile int8_t x455 = INT8_MAX;
	int8_t x456 = 7;
	volatile int64_t t113 = 122543982332927LL;

    t113 = (((x453|x454)^x455)|x456);

    if (t113 != -2777LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x457 = INT32_MIN;
	uint8_t x460 = 1U;
	uint32_t t114 = 6U;

    t114 = (((x457|x458)^x459)|x460);

    if (t114 != 2147429085U) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int32_t x461 = INT32_MIN;
	int8_t x463 = INT8_MAX;

    t115 = (((x461|x462)^x463)|x464);

    if (t115 != UINT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x465 = UINT64_MAX;
	static volatile uint8_t x466 = 52U;
	static int32_t x467 = -1;
	uint8_t x468 = UINT8_MAX;
	uint64_t t116 = 13934273530331964LLU;

    t116 = (((x465|x466)^x467)|x468);

    if (t116 != 255LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t t117 = 64420LL;

    t117 = (((x469|x470)^x471)|x472);

    if (t117 != 2147266046LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x475 = 12572U;
	static volatile uint32_t t118 = 5550395U;

    t118 = (((x473|x474)^x475)|x476);

    if (t118 != 4294967275U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x477 = 28633U;
	int32_t x479 = -591895;
	int32_t x480 = -1;
	uint64_t t119 = UINT64_MAX;

    t119 = (((x477|x478)^x479)|x480);

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = -1;
	uint64_t x484 = 123408388LLU;
	static volatile uint64_t t120 = 8281030632LLU;

    t120 = (((x481|x482)^x483)|x484);

    if (t120 != 123408388LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x486 = 16U;
	volatile int8_t x487 = -1;
	static int32_t x488 = -1;
	volatile int32_t t121 = -1;

    t121 = (((x485|x486)^x487)|x488);

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int8_t x489 = -1;
	volatile uint16_t x490 = 1235U;
	uint8_t x492 = 6U;
	volatile int32_t t122 = 43441;

    t122 = (((x489|x490)^x491)|x492);

    if (t122 != 127) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x493 = 1;
	uint8_t x494 = 4U;
	int8_t x495 = 1;
	int32_t x496 = INT32_MAX;

    t123 = (((x493|x494)^x495)|x496);

    if (t123 != INT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = 1U;
	volatile int16_t x498 = INT16_MIN;
	static int16_t x499 = 3;
	int32_t x500 = INT32_MAX;
	volatile int32_t t124 = 2;

    t124 = (((x497|x498)^x499)|x500);

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MIN;
	static uint16_t x502 = UINT16_MAX;
	volatile int16_t x503 = INT16_MIN;
	static int16_t x504 = 1;
	volatile int64_t t125 = -44900988264975356LL;

    t125 = (((x501|x502)^x503)|x504);

    if (t125 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x505 = -1;
	static int32_t x506 = 280165;
	uint32_t x508 = UINT32_MAX;
	volatile uint32_t t126 = UINT32_MAX;

    t126 = (((x505|x506)^x507)|x508);

    if (t126 != UINT32_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x509 = INT8_MAX;
	int8_t x510 = 14;
	int16_t x511 = 14;
	uint64_t x512 = UINT64_MAX;
	uint64_t t127 = UINT64_MAX;

    t127 = (((x509|x510)^x511)|x512);

    if (t127 != UINT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x513 = -2;
	int16_t x514 = -174;
	int8_t x515 = -1;
	int32_t x516 = INT32_MIN;

    t128 = (((x513|x514)^x515)|x516);

    if (t128 != -2147483647) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -27981LL;
	static int8_t x518 = INT8_MAX;
	int64_t x519 = -1LL;
	volatile int16_t x520 = INT16_MAX;
	int64_t t129 = -495055732180LL;

    t129 = (((x517|x518)^x519)|x520);

    if (t129 != 32767LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = 668430;
	static volatile int8_t x522 = INT8_MAX;
	uint16_t x524 = 2U;
	volatile int32_t t130 = -529;

    t130 = (((x521|x522)^x523)|x524);

    if (t130 != 707714) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x527 = -34828;
	volatile int64_t x528 = -1LL;
	int64_t t131 = 2765338196271046LL;

    t131 = (((x525|x526)^x527)|x528);

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x529 = -1;
	volatile int64_t x530 = INT64_MIN;
	volatile int32_t x531 = -429;
	static int64_t x532 = INT64_MAX;
	int64_t t132 = INT64_MAX;

    t132 = (((x529|x530)^x531)|x532);

    if (t132 != INT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = 1645;
	int8_t x534 = INT8_MIN;
	int64_t x535 = INT64_MIN;
	volatile int64_t t133 = 1632057344625338175LL;

    t133 = (((x533|x534)^x535)|x536);

    if (t133 != -19LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x540 = INT8_MIN;
	uint64_t t134 = 4574431996367LLU;

    t134 = (((x537|x538)^x539)|x540);

    if (t134 != 18446744073709551498LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x541 = 3U;
	int8_t x542 = INT8_MIN;
	int8_t x543 = INT8_MIN;
	volatile int32_t x544 = 775756;
	int32_t t135 = 41;

    t135 = (((x541|x542)^x543)|x544);

    if (t135 != 775759) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x545 = 25331252LLU;
	static int32_t x547 = INT32_MAX;
	volatile int16_t x548 = -1;
	volatile uint64_t t136 = UINT64_MAX;

    t136 = (((x545|x546)^x547)|x548);

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x549 = 7U;
	int64_t x550 = INT64_MIN;
	uint32_t x551 = UINT32_MAX;
	int8_t x552 = 3;
	static int64_t t137 = -5920179093552753LL;

    t137 = (((x549|x550)^x551)|x552);

    if (t137 != -9223372032559808517LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = 949U;
	int64_t x554 = -1LL;
	int64_t x555 = 632998399LL;
	static uint64_t x556 = 12056632LLU;
	uint64_t t138 = 8473508LLU;

    t138 = (((x553|x554)^x555)|x556);

    if (t138 != 18446744073088269880LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x558 = 294;
	int64_t x559 = 4240907LL;
	int8_t x560 = INT8_MIN;
	uint64_t t139 = 12LLU;

    t139 = (((x557|x558)^x559)|x560);

    if (t139 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x561 = INT32_MIN;
	int8_t x562 = 61;
	volatile uint8_t x563 = 1U;
	uint16_t x564 = 6712U;
	volatile int32_t t140 = 597275475;

    t140 = (((x561|x562)^x563)|x564);

    if (t140 != -2147476932) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MIN;
	uint16_t x566 = 112U;

    t141 = (((x565|x566)^x567)|x568);

    if (t141 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x569 = -1;
	uint8_t x570 = 1U;
	uint64_t x571 = 7169LLU;
	int64_t x572 = INT64_MIN;

    t142 = (((x569|x570)^x571)|x572);

    if (t142 != 18446744073709544446LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MAX;
	int32_t x574 = INT32_MIN;
	int16_t x575 = 52;
	uint8_t x576 = 0U;

    t143 = (((x573|x574)^x575)|x576);

    if (t143 != -53LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = 757U;
	static int32_t x579 = -1;
	volatile uint32_t x580 = UINT32_MAX;
	volatile uint32_t t144 = UINT32_MAX;

    t144 = (((x577|x578)^x579)|x580);

    if (t144 != UINT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MAX;
	uint32_t x582 = UINT32_MAX;
	int8_t x583 = INT8_MIN;
	uint16_t x584 = 0U;
	uint32_t t145 = 324U;

    t145 = (((x581|x582)^x583)|x584);

    if (t145 != 127U) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = 47;
	int8_t x586 = -5;
	uint16_t x588 = UINT16_MAX;
	int64_t t146 = -83196518499LL;

    t146 = (((x585|x586)^x587)|x588);

    if (t146 != 231791525887LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -1;
	uint16_t x590 = 15189U;
	uint16_t x591 = 820U;
	static volatile uint64_t t147 = 684LLU;

    t147 = (((x589|x590)^x591)|x592);

    if (t147 != 18446744073709550815LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x593 = INT64_MAX;
	uint32_t x594 = UINT32_MAX;
	volatile int32_t x595 = INT32_MIN;
	int32_t x596 = INT32_MAX;
	int64_t t148 = 254759486711799LL;

    t148 = (((x593|x594)^x595)|x596);

    if (t148 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MAX;
	int16_t x599 = INT16_MIN;
	static int32_t x600 = INT32_MIN;
	int32_t t149 = 5;

    t149 = (((x597|x598)^x599)|x600);

    if (t149 != -2147450881) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x604 = -4;
	volatile int32_t t150 = 144979;

    t150 = (((x601|x602)^x603)|x604);

    if (t150 != -4) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = 51U;
	uint32_t x606 = UINT32_MAX;
	uint8_t x607 = 52U;
	int8_t x608 = -1;

    t151 = (((x605|x606)^x607)|x608);

    if (t151 != UINT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int32_t x609 = -1;
	volatile int32_t x610 = INT32_MIN;
	uint64_t x611 = 45748885LLU;
	int64_t x612 = INT64_MIN;
	uint64_t t152 = 2221754548037273LLU;

    t152 = (((x609|x610)^x611)|x612);

    if (t152 != 18446744073663802730LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x613 = 1U;
	int16_t x614 = -1303;
	volatile int32_t t153 = -744708934;

    t153 = (((x613|x614)^x615)|x616);

    if (t153 != -1281) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = -2482850268287007LL;
	int64_t x618 = INT64_MIN;
	volatile int8_t x619 = -1;
	static int64_t x620 = INT64_MAX;
	static volatile int64_t t154 = INT64_MAX;

    t154 = (((x617|x618)^x619)|x620);

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = 90085645934LLU;
	int16_t x622 = -1;
	int16_t x623 = INT16_MIN;
	static int64_t x624 = 15483447533034LL;

    t155 = (((x621|x622)^x623)|x624);

    if (t155 != 15483447541759LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x625 = INT16_MAX;
	volatile uint64_t x626 = 2484664654LLU;
	volatile uint8_t x627 = 17U;
	int8_t x628 = INT8_MIN;
	uint64_t t156 = 973260568839805LLU;

    t156 = (((x625|x626)^x627)|x628);

    if (t156 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x629 = INT8_MAX;
	static int16_t x630 = 0;
	int16_t x631 = -14;
	volatile int64_t x632 = INT64_MAX;
	int64_t t157 = -1LL;

    t157 = (((x629|x630)^x631)|x632);

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x634 = INT32_MAX;
	uint16_t x635 = 20U;
	volatile int8_t x636 = -22;
	volatile int32_t t158 = 251177;

    t158 = (((x633|x634)^x635)|x636);

    if (t158 != -21) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = UINT32_MAX;
	uint64_t x640 = 42331LLU;
	uint64_t t159 = 1143647318LLU;

    t159 = (((x637|x638)^x639)|x640);

    if (t159 != 42331LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x642 = UINT16_MAX;
	int64_t x643 = INT64_MIN;
	int32_t x644 = INT32_MIN;
	volatile int64_t t160 = -650335609011LL;

    t160 = (((x641|x642)^x643)|x644);

    if (t160 != -2147418113LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x646 = INT64_MAX;

    t161 = (((x645|x646)^x647)|x648);

    if (t161 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x650 = UINT32_MAX;
	int8_t x651 = -1;
	int64_t x652 = -77992438940786366LL;
	int64_t t162 = 833260LL;

    t162 = (((x649|x650)^x651)|x652);

    if (t162 != -77992438940786366LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MIN;
	uint8_t x654 = 37U;
	uint8_t x655 = UINT8_MAX;
	int32_t x656 = 255228924;
	int32_t t163 = 0;

    t163 = (((x653|x654)^x655)|x656);

    if (t163 != -2) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x657 = UINT32_MAX;
	uint32_t x658 = 418942808U;
	int8_t x659 = 0;
	uint16_t x660 = 795U;

    t164 = (((x657|x658)^x659)|x660);

    if (t164 != UINT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = -1;
	int64_t x662 = INT64_MIN;
	static volatile uint32_t x663 = 58800611U;
	uint16_t x664 = UINT16_MAX;
	volatile int64_t t165 = 93782124516237636LL;

    t165 = (((x661|x662)^x663)|x664);

    if (t165 != -58785793LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x667 = 24U;
	static uint64_t x668 = 901278471LLU;

    t166 = (((x665|x666)^x667)|x668);

    if (t166 != 901278695LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = -1;
	uint16_t x670 = 19977U;
	int32_t x671 = INT32_MIN;
	volatile int32_t x672 = INT32_MIN;
	volatile int32_t t167 = 5890;

    t167 = (((x669|x670)^x671)|x672);

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	int16_t x674 = INT16_MIN;
	static uint8_t x676 = UINT8_MAX;
	static volatile int32_t t168 = INT32_MAX;

    t168 = (((x673|x674)^x675)|x676);

    if (t168 != INT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x677 = 3U;
	int16_t x680 = INT16_MIN;
	static uint32_t t169 = 2464128U;

    t169 = (((x677|x678)^x679)|x680);

    if (t169 != 4294967288U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x681 = UINT32_MAX;
	static int8_t x682 = -1;
	static uint64_t x683 = UINT64_MAX;
	int16_t x684 = -1;

    t170 = (((x681|x682)^x683)|x684);

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x685 = INT32_MAX;
	uint32_t x687 = 151577839U;
	volatile uint16_t x688 = 3205U;
	uint64_t t171 = 18707LLU;

    t171 = (((x685|x686)^x687)|x688);

    if (t171 != 23184081887125LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = UINT16_MAX;
	static int8_t x691 = INT8_MIN;
	uint32_t x692 = 277U;

    t172 = (((x689|x690)^x691)|x692);

    if (t172 != 2147484031U) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x693 = INT32_MAX;
	int8_t x694 = INT8_MIN;
	volatile uint8_t x695 = UINT8_MAX;
	uint32_t t173 = 840946U;

    t173 = (((x693|x694)^x695)|x696);

    if (t173 != 4294967049U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x697 = 0U;
	static int64_t x698 = INT64_MIN;
	static int8_t x699 = INT8_MIN;

    t174 = (((x697|x698)^x699)|x700);

    if (t174 != -52LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MIN;
	int64_t x704 = INT64_MIN;
	int64_t t175 = 88146433983LL;

    t175 = (((x701|x702)^x703)|x704);

    if (t175 != -32531LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MAX;
	int32_t x706 = -1;
	int8_t x707 = INT8_MAX;
	int16_t x708 = 0;
	volatile int32_t t176 = 555436;

    t176 = (((x705|x706)^x707)|x708);

    if (t176 != -128) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = -13124850;
	int32_t x710 = -1;
	uint8_t x711 = 9U;
	int8_t x712 = -1;

    t177 = (((x709|x710)^x711)|x712);

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MAX;
	static volatile int64_t x715 = 1LL;
	int16_t x716 = INT16_MIN;

    t178 = (((x713|x714)^x715)|x716);

    if (t178 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MAX;
	static volatile int64_t x719 = -1LL;
	int32_t x720 = -1;
	int64_t t179 = -5LL;

    t179 = (((x717|x718)^x719)|x720);

    if (t179 != -1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint32_t x721 = 6518019U;
	int8_t x722 = INT8_MIN;
	volatile uint64_t x724 = 1518LLU;
	volatile uint64_t t180 = 3958555354796295LLU;

    t180 = (((x721|x722)^x723)|x724);

    if (t180 != 10223LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MIN;
	uint8_t x726 = 5U;
	static int32_t x727 = -979;
	volatile uint16_t x728 = 11U;
	int32_t t181 = -194;

    t181 = (((x725|x726)^x727)|x728);

    if (t181 != 2147482667) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x729 = INT64_MAX;
	int32_t x731 = INT32_MIN;
	static uint64_t x732 = 6497799877LLU;
	uint64_t t182 = 5598LLU;

    t182 = (((x729|x730)^x731)|x732);

    if (t182 != 9223372045444710399LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = 5555;
	int8_t x735 = 11;
	int32_t x736 = -1;
	int32_t t183 = -415665459;

    t183 = (((x733|x734)^x735)|x736);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x739 = INT16_MIN;
	uint8_t x740 = 110U;
	static volatile int32_t t184 = -15;

    t184 = (((x737|x738)^x739)|x740);

    if (t184 != 32767) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = -1;
	volatile int64_t x742 = INT64_MIN;
	uint16_t x743 = 78U;
	volatile uint16_t x744 = UINT16_MAX;
	volatile int64_t t185 = 10391891LL;

    t185 = (((x741|x742)^x743)|x744);

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = INT16_MAX;
	volatile uint64_t x746 = UINT64_MAX;
	volatile int64_t x748 = -9777480189429LL;

    t186 = (((x745|x746)^x747)|x748);

    if (t186 != 18446744073709534015LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = -1;
	uint64_t x751 = 40861006LLU;
	uint16_t x752 = 7853U;
	volatile uint64_t t187 = 733785393LLU;

    t187 = (((x749|x750)^x751)|x752);

    if (t187 != 18446744073668697789LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 68399164293LLU;
	int64_t x754 = 6840292199546LL;
	uint64_t x755 = UINT64_MAX;
	static uint64_t t188 = 13125281LLU;

    t188 = (((x753|x754)^x755)|x756);

    if (t188 != 18446737202064920703LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = -1LL;
	uint16_t x758 = 33U;
	volatile int16_t x759 = INT16_MIN;
	int8_t x760 = INT8_MIN;
	volatile int64_t t189 = -26508100LL;

    t189 = (((x757|x758)^x759)|x760);

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x761 = -1;
	volatile int8_t x762 = 6;
	int32_t x763 = -3557697;
	static uint16_t x764 = 3413U;
	static volatile int32_t t190 = 879;

    t190 = (((x761|x762)^x763)|x764);

    if (t190 != 3558741) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x765 = UINT16_MAX;
	static uint32_t x766 = UINT32_MAX;
	uint32_t x767 = 2131134016U;
	volatile uint32_t t191 = 2903969U;

    t191 = (((x765|x766)^x767)|x768);

    if (t191 != 2163834879U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x769 = 98387U;
	int16_t x770 = INT16_MAX;
	static int32_t x771 = -1;
	int8_t x772 = INT8_MIN;

    t192 = (((x769|x770)^x771)|x772);

    if (t192 != 4294967168U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x774 = 5726;
	volatile uint32_t x775 = UINT32_MAX;
	int8_t x776 = INT8_MAX;

    t193 = (((x773|x774)^x775)|x776);

    if (t193 != -9223372032559814145LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x777 = INT64_MIN;
	int32_t x778 = -1;
	int32_t x779 = 1;
	static volatile int16_t x780 = -1;
	int64_t t194 = 112LL;

    t194 = (((x777|x778)^x779)|x780);

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MIN;
	static volatile int16_t x782 = -101;
	int16_t x783 = INT16_MIN;
	int64_t x784 = INT64_MIN;
	int64_t t195 = -493LL;

    t195 = (((x781|x782)^x783)|x784);

    if (t195 != -9223372036854743141LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MIN;
	volatile int32_t x786 = INT32_MIN;
	volatile int64_t x787 = INT64_MIN;
	static volatile uint8_t x788 = 0U;
	int64_t t196 = -162LL;

    t196 = (((x785|x786)^x787)|x788);

    if (t196 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = 47U;
	static uint64_t x790 = 11926LLU;
	uint16_t x791 = 7196U;
	volatile uint64_t t197 = 252695645LLU;

    t197 = (((x789|x790)^x791)|x792);

    if (t197 != 12991LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MIN;
	int32_t x794 = INT32_MAX;
	int8_t x795 = INT8_MIN;
	int16_t x796 = 256;
	static int64_t t198 = -14340LL;

    t198 = (((x793|x794)^x795)|x796);

    if (t198 != 9223372034707292543LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = 18LLU;
	static uint32_t x798 = 81093U;
	int16_t x799 = -1;
	int64_t x800 = INT64_MIN;
	uint64_t t199 = 17231032319545045LLU;

    t199 = (((x797|x798)^x799)|x800);

    if (t199 != 18446744073709470504LLU) { NG(); } else { ; }
	
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



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

int32_t x4 = -1;
int64_t t1 = INT64_MIN;
int32_t x17 = 51;
int32_t x22 = INT32_MIN;
int16_t x30 = 3;
int64_t x35 = INT64_MIN;
int32_t t9 = INT32_MIN;
volatile int16_t x44 = INT16_MAX;
static int32_t x48 = 1;
uint32_t x53 = 8U;
static int64_t x59 = INT64_MIN;
int8_t x64 = INT8_MIN;
volatile int32_t t15 = 1155;
static int32_t x65 = INT32_MIN;
volatile uint64_t t16 = 446400LLU;
uint8_t x69 = UINT8_MAX;
int16_t x72 = INT16_MAX;
static int32_t x73 = INT32_MAX;
volatile int8_t x75 = INT8_MAX;
int64_t x77 = -42LL;
volatile uint32_t x81 = 258894085U;
int64_t x82 = INT64_MIN;
volatile int32_t t20 = -103238366;
int8_t x90 = INT8_MIN;
int8_t x91 = 9;
int64_t x94 = 7433303631744LL;
volatile int64_t x100 = INT64_MIN;
int64_t t24 = INT64_MIN;
uint8_t x108 = 25U;
static uint64_t x115 = UINT64_MAX;
volatile int32_t t28 = -12;
int32_t x119 = -1;
volatile int16_t x120 = -1556;
uint8_t x126 = 25U;
uint32_t x128 = 1U;
volatile uint16_t x131 = UINT16_MAX;
int64_t x143 = INT64_MIN;
volatile uint64_t t35 = UINT64_MAX;
volatile uint32_t x154 = 1058224U;
volatile int32_t t37 = 0;
static int64_t x171 = -88158631360921804LL;
volatile uint32_t t40 = UINT32_MAX;
volatile int16_t x174 = 23;
int64_t x175 = INT64_MIN;
int16_t x182 = INT16_MAX;
volatile int32_t t43 = INT32_MIN;
static volatile uint8_t x186 = 6U;
uint32_t x187 = UINT32_MAX;
volatile int16_t x188 = INT16_MIN;
volatile int64_t x191 = -397690681136594LL;
int32_t x192 = -3;
volatile int64_t x207 = INT64_MIN;
int8_t x212 = INT8_MIN;
int16_t x221 = -1;
static volatile int8_t x225 = -7;
volatile int16_t x229 = 10929;
int64_t x232 = INT64_MIN;
volatile uint64_t t55 = 2800993LLU;
int32_t t56 = -193325;
int16_t x248 = INT16_MIN;
uint8_t x256 = UINT8_MAX;
int8_t x261 = 9;
int32_t x264 = INT32_MIN;
int8_t x284 = -7;
int32_t x287 = 3554337;
static volatile int32_t t68 = 233046;
volatile int8_t x289 = INT8_MIN;
static uint16_t x294 = 613U;
int32_t x295 = 27065567;
int32_t t70 = INT32_MIN;
uint32_t x298 = UINT32_MAX;
uint16_t x300 = UINT16_MAX;
volatile int32_t t71 = 0;
int32_t t73 = -299;
int16_t x309 = 56;
uint64_t x317 = UINT64_MAX;
int64_t x327 = INT64_MIN;
static int64_t x333 = INT64_MIN;
volatile int32_t t80 = 3;
uint8_t x339 = 1U;
int64_t x346 = INT64_MAX;
volatile int32_t x353 = 1704;
int16_t x355 = -1;
int8_t x357 = INT8_MIN;
static volatile int32_t x371 = INT32_MIN;
static volatile int64_t x375 = -1LL;
uint8_t x379 = 1U;
static volatile uint32_t x388 = UINT32_MAX;
uint32_t t92 = UINT32_MAX;
int32_t t93 = -460116029;
static volatile uint64_t x394 = 63LLU;
uint16_t x406 = UINT16_MAX;
int8_t x408 = INT8_MAX;
static int8_t x418 = INT8_MIN;
volatile int32_t t98 = -129225;
int64_t x422 = 4811LL;
static int32_t x428 = INT32_MIN;
int32_t t100 = INT32_MIN;
int32_t x442 = INT32_MIN;
volatile int32_t t104 = -1769986;
int32_t x449 = -1;
uint32_t x454 = 944891U;
int8_t x457 = -1;
uint64_t x458 = UINT64_MAX;
uint64_t x461 = 3LLU;
uint64_t x466 = UINT64_MAX;
int32_t x467 = -1;
uint32_t x468 = UINT32_MAX;
int8_t x469 = -1;
uint8_t x473 = 79U;
static int64_t x474 = INT64_MIN;
static uint8_t x479 = 23U;
uint8_t x485 = 2U;
int8_t x486 = INT8_MIN;
uint8_t x487 = 57U;
uint8_t x494 = UINT8_MAX;
static int16_t x495 = INT16_MIN;
int32_t x505 = INT32_MIN;
volatile int8_t x507 = 60;
int16_t x510 = -1;
static int32_t t120 = -57285;
int32_t x518 = -12488;
static int8_t x524 = 0;
int32_t t122 = 1052;
uint32_t x530 = 887734U;
uint32_t x541 = UINT32_MAX;
volatile int16_t x552 = -1;
volatile int8_t x558 = INT8_MAX;
int32_t x560 = INT32_MAX;
int32_t t131 = INT32_MAX;
volatile int32_t t132 = -143;
uint32_t x569 = 476792U;
int8_t x571 = 0;
int8_t x573 = INT8_MIN;
uint16_t x575 = 1U;
volatile int32_t t135 = -20;
int16_t x579 = -1291;
int16_t x580 = INT16_MAX;
volatile int32_t t136 = 0;
volatile uint32_t x581 = 1023U;
int32_t x584 = 60180502;
uint8_t x593 = UINT8_MAX;
int16_t x595 = INT16_MIN;
volatile uint64_t x596 = 34530004LLU;
int8_t x597 = INT8_MIN;
volatile int16_t x604 = INT16_MAX;
uint64_t x616 = UINT64_MAX;
uint8_t x618 = 14U;
volatile uint8_t x619 = 1U;
int32_t x622 = INT32_MIN;
uint16_t x631 = 63U;
int32_t x634 = -44;
int32_t x635 = -1;
int32_t x636 = -1;
uint32_t x641 = 4394054U;
int16_t x643 = INT16_MAX;
uint8_t x650 = 7U;
uint8_t x651 = 1U;
int32_t x656 = INT32_MIN;
int32_t x668 = INT32_MIN;
volatile uint16_t x672 = UINT16_MAX;
static uint32_t x673 = UINT32_MAX;
static int64_t x675 = -162613271420LL;
uint64_t x676 = UINT64_MAX;
volatile int64_t t158 = INT64_MAX;
uint8_t x681 = UINT8_MAX;
static int32_t x694 = -1;
static int16_t x702 = INT16_MAX;
uint64_t x704 = UINT64_MAX;
uint64_t t164 = UINT64_MAX;
int8_t x705 = INT8_MIN;
volatile uint64_t x711 = 6731778LLU;
volatile uint16_t x723 = 18U;
static int8_t x730 = INT8_MIN;
uint64_t t171 = 60915133528LLU;
volatile uint64_t x736 = 709123LLU;
int16_t x745 = -3;
volatile int16_t x759 = -1;
int32_t x761 = -1;
int8_t x766 = 42;
static volatile uint32_t t178 = 54U;
static uint64_t x773 = UINT64_MAX;
int64_t x779 = -1LL;
static int32_t x783 = INT32_MAX;
int32_t x785 = INT32_MAX;
int16_t x786 = INT16_MAX;
volatile int32_t t183 = -52590;
uint8_t x794 = 54U;
static uint8_t x798 = 39U;
int8_t x801 = -1;
uint64_t x802 = UINT64_MAX;
static int64_t x805 = INT64_MIN;
static uint16_t x815 = 23822U;
uint16_t x819 = 0U;
static volatile int32_t t194 = 587233447;
uint64_t x847 = 1940221348258LLU;
int32_t x850 = INT32_MIN;


void f0(void) {
    	static int64_t x1 = -55511131LL;
	int32_t x2 = INT32_MAX;
	uint8_t x3 = 93U;
	int32_t t0 = -2634;

    t0 = (((x1/x2)==x3)^x4);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MIN;
	int16_t x6 = 1225;
	uint16_t x7 = UINT16_MAX;
	static int64_t x8 = INT64_MIN;

    t1 = (((x5/x6)==x7)^x8);

    if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 60;
	int16_t x10 = -1;
	uint8_t x11 = 4U;
	uint64_t x12 = 349911939679306524LLU;
	static uint64_t t2 = 1107340830981LLU;

    t2 = (((x9/x10)==x11)^x12);

    if (t2 != 349911939679306524LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	int16_t x14 = INT16_MIN;
	uint16_t x15 = UINT16_MAX;
	static volatile int64_t x16 = INT64_MIN;
	int64_t t3 = INT64_MIN;

    t3 = (((x13/x14)==x15)^x16);

    if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x18 = INT32_MIN;
	volatile uint16_t x19 = 221U;
	int8_t x20 = -1;
	int32_t t4 = -94;

    t4 = (((x17/x18)==x19)^x20);

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	int64_t x23 = INT64_MAX;
	int8_t x24 = 1;
	int32_t t5 = -2641;

    t5 = (((x21/x22)==x23)^x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	int8_t x26 = 5;
	int16_t x27 = INT16_MAX;
	int32_t x28 = -46513741;
	int32_t t6 = 2;

    t6 = (((x25/x26)==x27)^x28);

    if (t6 != -46513741) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	static volatile uint8_t x31 = 30U;
	int8_t x32 = 1;
	int32_t t7 = 58058692;

    t7 = (((x29/x30)==x31)^x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int16_t x34 = INT16_MIN;
	int32_t x36 = 38038;
	volatile int32_t t8 = -192489;

    t8 = (((x33/x34)==x35)^x36);

    if (t8 != 38038) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 941045LLU;
	int8_t x38 = -3;
	int8_t x39 = 2;
	int32_t x40 = INT32_MIN;

    t9 = (((x37/x38)==x39)^x40);

    if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	uint16_t x42 = 40U;
	volatile uint64_t x43 = 115180058506LLU;
	volatile int32_t t10 = -4037;

    t10 = (((x41/x42)==x43)^x44);

    if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -1;
	int8_t x46 = INT8_MAX;
	int16_t x47 = -6331;
	volatile int32_t t11 = 0;

    t11 = (((x45/x46)==x47)^x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MAX;
	int64_t x50 = INT64_MIN;
	static volatile int8_t x51 = INT8_MIN;
	int16_t x52 = -172;
	static int32_t t12 = 503;

    t12 = (((x49/x50)==x51)^x52);

    if (t12 != -172) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = INT64_MIN;
	uint64_t x55 = 8LLU;
	volatile int8_t x56 = -14;
	static volatile int32_t t13 = 99671;

    t13 = (((x53/x54)==x55)^x56);

    if (t13 != -14) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x57 = 10U;
	static int16_t x58 = INT16_MAX;
	uint8_t x60 = 123U;
	static volatile int32_t t14 = -29896;

    t14 = (((x57/x58)==x59)^x60);

    if (t14 != 123) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = 15;
	int8_t x62 = INT8_MIN;
	static int8_t x63 = -1;

    t15 = (((x61/x62)==x63)^x64);

    if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x66 = 92759785LL;
	static volatile uint16_t x67 = UINT16_MAX;
	uint64_t x68 = 32564309510LLU;

    t16 = (((x65/x66)==x67)^x68);

    if (t16 != 32564309510LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x70 = INT32_MIN;
	static int64_t x71 = INT64_MAX;
	int32_t t17 = -89;

    t17 = (((x69/x70)==x71)^x72);

    if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x74 = 7U;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = 14313598;

    t18 = (((x73/x74)==x75)^x76);

    if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x78 = -1;
	int64_t x79 = INT64_MIN;
	volatile uint64_t x80 = 71251982LLU;
	uint64_t t19 = 7479586791LLU;

    t19 = (((x77/x78)==x79)^x80);

    if (t19 != 71251982LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x83 = -1;
	int32_t x84 = -124108;

    t20 = (((x81/x82)==x83)^x84);

    if (t20 != -124108) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x85 = INT16_MAX;
	uint8_t x86 = UINT8_MAX;
	volatile int64_t x87 = INT64_MAX;
	int32_t x88 = -15430293;
	volatile int32_t t21 = 0;

    t21 = (((x85/x86)==x87)^x88);

    if (t21 != -15430293) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x89 = -1;
	static int32_t x92 = -12613252;
	int32_t t22 = 10500748;

    t22 = (((x89/x90)==x91)^x92);

    if (t22 != -12613252) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x93 = INT8_MIN;
	uint16_t x95 = UINT16_MAX;
	uint64_t x96 = UINT64_MAX;
	volatile uint64_t t23 = UINT64_MAX;

    t23 = (((x93/x94)==x95)^x96);

    if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x97 = -1LL;
	static uint64_t x98 = UINT64_MAX;
	int16_t x99 = -13;

    t24 = (((x97/x98)==x99)^x100);

    if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x101 = -28;
	static int32_t x102 = -103189946;
	int16_t x103 = -1;
	static volatile uint32_t x104 = 20230076U;
	uint32_t t25 = 39U;

    t25 = (((x101/x102)==x103)^x104);

    if (t25 != 20230076U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = 244693848U;
	static int16_t x106 = INT16_MIN;
	uint64_t x107 = UINT64_MAX;
	int32_t t26 = -2;

    t26 = (((x105/x106)==x107)^x108);

    if (t26 != 25) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 1U;
	int16_t x110 = INT16_MAX;
	static int64_t x111 = INT64_MIN;
	int8_t x112 = INT8_MAX;
	volatile int32_t t27 = -7934;

    t27 = (((x109/x110)==x111)^x112);

    if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -20787908906454064LL;
	int32_t x114 = INT32_MIN;
	int16_t x116 = INT16_MIN;

    t28 = (((x113/x114)==x115)^x116);

    if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = INT32_MIN;
	int64_t x118 = -1312322198588779LL;
	volatile int32_t t29 = -7;

    t29 = (((x117/x118)==x119)^x120);

    if (t29 != -1556) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = 0;
	static uint32_t x127 = 33U;
	volatile uint32_t t30 = 13706U;

    t30 = (((x125/x126)==x127)^x128);

    if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x129 = INT64_MAX;
	volatile int64_t x130 = 1193LL;
	uint32_t x132 = UINT32_MAX;
	uint32_t t31 = UINT32_MAX;

    t31 = (((x129/x130)==x131)^x132);

    if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x133 = 10U;
	static int8_t x134 = -2;
	uint64_t x135 = 99LLU;
	int32_t x136 = INT32_MIN;
	volatile int32_t t32 = INT32_MIN;

    t32 = (((x133/x134)==x135)^x136);

    if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x141 = INT64_MAX;
	int16_t x142 = -1;
	static int8_t x144 = 17;
	volatile int32_t t33 = -3655;

    t33 = (((x141/x142)==x143)^x144);

    if (t33 != 17) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x145 = 21450U;
	uint32_t x146 = 172096U;
	volatile int64_t x147 = INT64_MIN;
	volatile int8_t x148 = INT8_MIN;
	volatile int32_t t34 = 0;

    t34 = (((x145/x146)==x147)^x148);

    if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x149 = INT8_MIN;
	uint8_t x150 = 29U;
	uint64_t x151 = 827456479LLU;
	volatile uint64_t x152 = UINT64_MAX;

    t35 = (((x149/x150)==x151)^x152);

    if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x153 = INT16_MAX;
	int32_t x155 = INT32_MIN;
	int32_t x156 = -1;
	static int32_t t36 = -5530405;

    t36 = (((x153/x154)==x155)^x156);

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x157 = -104;
	int8_t x158 = INT8_MIN;
	int16_t x159 = INT16_MAX;
	uint16_t x160 = UINT16_MAX;

    t37 = (((x157/x158)==x159)^x160);

    if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x161 = -457567762;
	static int8_t x162 = -1;
	static int8_t x163 = -1;
	int8_t x164 = 40;
	int32_t t38 = 890607;

    t38 = (((x161/x162)==x163)^x164);

    if (t38 != 40) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x165 = 12454570999642898LLU;
	static uint32_t x166 = 32121U;
	uint8_t x167 = UINT8_MAX;
	uint16_t x168 = UINT16_MAX;
	static volatile int32_t t39 = 938754088;

    t39 = (((x165/x166)==x167)^x168);

    if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x169 = INT16_MAX;
	int16_t x170 = INT16_MIN;
	static uint32_t x172 = UINT32_MAX;

    t40 = (((x169/x170)==x171)^x172);

    if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x173 = 5870U;
	int16_t x176 = -1;
	int32_t t41 = 73942613;

    t41 = (((x173/x174)==x175)^x176);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x177 = -1;
	int64_t x178 = INT64_MIN;
	volatile int8_t x179 = INT8_MAX;
	static uint16_t x180 = 8692U;
	static volatile int32_t t42 = -1;

    t42 = (((x177/x178)==x179)^x180);

    if (t42 != 8692) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x181 = 10U;
	uint16_t x183 = 7U;
	int32_t x184 = INT32_MIN;

    t43 = (((x181/x182)==x183)^x184);

    if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x185 = INT8_MAX;
	static int32_t t44 = 3;

    t44 = (((x185/x186)==x187)^x188);

    if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x189 = INT64_MIN;
	static uint8_t x190 = 6U;
	volatile int32_t t45 = -216;

    t45 = (((x189/x190)==x191)^x192);

    if (t45 != -3) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x193 = INT8_MIN;
	volatile int8_t x194 = INT8_MIN;
	int16_t x195 = 178;
	volatile uint16_t x196 = 8363U;
	int32_t t46 = 292627559;

    t46 = (((x193/x194)==x195)^x196);

    if (t46 != 8363) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x201 = 47;
	int8_t x202 = INT8_MAX;
	int8_t x203 = -1;
	int32_t x204 = INT32_MIN;
	int32_t t47 = INT32_MIN;

    t47 = (((x201/x202)==x203)^x204);

    if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x205 = UINT64_MAX;
	volatile int8_t x206 = INT8_MIN;
	int8_t x208 = -36;
	int32_t t48 = -574657;

    t48 = (((x205/x206)==x207)^x208);

    if (t48 != -36) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x209 = 525U;
	volatile int32_t x210 = INT32_MIN;
	uint32_t x211 = UINT32_MAX;
	volatile int32_t t49 = 49021;

    t49 = (((x209/x210)==x211)^x212);

    if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x213 = 1365U;
	int8_t x214 = INT8_MIN;
	int64_t x215 = 124010448LL;
	uint64_t x216 = 8LLU;
	static uint64_t t50 = 1997LLU;

    t50 = (((x213/x214)==x215)^x216);

    if (t50 != 8LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x217 = -1;
	volatile int64_t x218 = INT64_MIN;
	static int32_t x219 = INT32_MAX;
	volatile uint8_t x220 = 0U;
	volatile int32_t t51 = 43869;

    t51 = (((x217/x218)==x219)^x220);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x222 = 11U;
	int32_t x223 = INT32_MIN;
	int16_t x224 = -1;
	static int32_t t52 = 28;

    t52 = (((x221/x222)==x223)^x224);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x226 = 1029935178284196LLU;
	uint16_t x227 = 1U;
	int32_t x228 = 17;
	int32_t t53 = -9769497;

    t53 = (((x225/x226)==x227)^x228);

    if (t53 != 17) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x230 = INT64_MAX;
	int16_t x231 = -9;
	static int64_t t54 = INT64_MIN;

    t54 = (((x229/x230)==x231)^x232);

    if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x233 = INT8_MIN;
	volatile uint32_t x234 = UINT32_MAX;
	static int64_t x235 = -1LL;
	uint64_t x236 = 132197774LLU;

    t55 = (((x233/x234)==x235)^x236);

    if (t55 != 132197774LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint32_t x237 = UINT32_MAX;
	uint32_t x238 = 16U;
	volatile int8_t x239 = INT8_MAX;
	int16_t x240 = 2495;

    t56 = (((x237/x238)==x239)^x240);

    if (t56 != 2495) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x241 = 112U;
	static int8_t x242 = INT8_MIN;
	int8_t x243 = -1;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t57 = UINT64_MAX;

    t57 = (((x241/x242)==x243)^x244);

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x245 = 1784;
	static uint64_t x246 = 28020852850LLU;
	int64_t x247 = -1LL;
	int32_t t58 = 515127;

    t58 = (((x245/x246)==x247)^x248);

    if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x249 = 102510U;
	static volatile uint64_t x250 = 55544458083535LLU;
	int32_t x251 = -1;
	int64_t x252 = 1179517702LL;
	static int64_t t59 = -150413137407LL;

    t59 = (((x249/x250)==x251)^x252);

    if (t59 != 1179517702LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x253 = 25382U;
	uint32_t x254 = 9U;
	volatile int16_t x255 = INT16_MIN;
	int32_t t60 = 0;

    t60 = (((x253/x254)==x255)^x256);

    if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x257 = INT16_MIN;
	int64_t x258 = INT64_MAX;
	static int8_t x259 = -1;
	uint64_t x260 = 12398LLU;
	uint64_t t61 = 40204001743686LLU;

    t61 = (((x257/x258)==x259)^x260);

    if (t61 != 12398LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x262 = 6599993;
	volatile int16_t x263 = -1;
	volatile int32_t t62 = INT32_MIN;

    t62 = (((x261/x262)==x263)^x264);

    if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x265 = INT8_MIN;
	volatile int32_t x266 = INT32_MIN;
	volatile int8_t x267 = -31;
	uint64_t x268 = UINT64_MAX;
	static uint64_t t63 = UINT64_MAX;

    t63 = (((x265/x266)==x267)^x268);

    if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x269 = INT16_MAX;
	int32_t x270 = 5208;
	int8_t x271 = -1;
	int64_t x272 = -1LL;
	int64_t t64 = -1707896085667658310LL;

    t64 = (((x269/x270)==x271)^x272);

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x273 = 0;
	uint8_t x274 = 9U;
	int64_t x275 = -1LL;
	uint8_t x276 = 6U;
	static int32_t t65 = 122080459;

    t65 = (((x273/x274)==x275)^x276);

    if (t65 != 6) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x277 = 2678LLU;
	int32_t x278 = -597;
	uint64_t x279 = UINT64_MAX;
	int64_t x280 = INT64_MIN;
	volatile int64_t t66 = INT64_MIN;

    t66 = (((x277/x278)==x279)^x280);

    if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x281 = INT8_MIN;
	volatile int64_t x282 = INT64_MIN;
	int16_t x283 = -1;
	static int32_t t67 = 134;

    t67 = (((x281/x282)==x283)^x284);

    if (t67 != -7) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x285 = -7359;
	uint64_t x286 = 435940450LLU;
	uint8_t x288 = 93U;

    t68 = (((x285/x286)==x287)^x288);

    if (t68 != 93) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x290 = INT16_MIN;
	int64_t x291 = -26956LL;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t69 = 2119;

    t69 = (((x289/x290)==x291)^x292);

    if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x293 = INT16_MIN;
	int32_t x296 = INT32_MIN;

    t70 = (((x293/x294)==x295)^x296);

    if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x297 = 461U;
	int32_t x299 = INT32_MAX;

    t71 = (((x297/x298)==x299)^x300);

    if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x301 = -1;
	int8_t x302 = -2;
	int64_t x303 = INT64_MIN;
	int64_t x304 = -2585484LL;
	int64_t t72 = -1585846321840715LL;

    t72 = (((x301/x302)==x303)^x304);

    if (t72 != -2585484LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x305 = INT8_MIN;
	volatile int64_t x306 = 1052947737217745568LL;
	uint64_t x307 = 16968411862953099LLU;
	int16_t x308 = 7;

    t73 = (((x305/x306)==x307)^x308);

    if (t73 != 7) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x310 = 16LLU;
	volatile int16_t x311 = INT16_MIN;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t74 = -303616501;

    t74 = (((x309/x310)==x311)^x312);

    if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x313 = -1;
	static int32_t x314 = -355956;
	volatile int8_t x315 = -1;
	volatile int16_t x316 = INT16_MAX;
	int32_t t75 = 300191;

    t75 = (((x313/x314)==x315)^x316);

    if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x318 = INT16_MIN;
	static int32_t x319 = INT32_MAX;
	uint16_t x320 = 31885U;
	volatile int32_t t76 = 133326851;

    t76 = (((x317/x318)==x319)^x320);

    if (t76 != 31885) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int16_t x321 = INT16_MIN;
	static uint8_t x322 = 4U;
	int64_t x323 = 303479543822LL;
	uint8_t x324 = UINT8_MAX;
	static volatile int32_t t77 = -1596893;

    t77 = (((x321/x322)==x323)^x324);

    if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x325 = 1LLU;
	int16_t x326 = -1;
	int32_t x328 = -1;
	static int32_t t78 = 23704;

    t78 = (((x325/x326)==x327)^x328);

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x329 = 0;
	uint64_t x330 = 94659587552LLU;
	int8_t x331 = 1;
	int64_t x332 = INT64_MIN;
	volatile int64_t t79 = INT64_MIN;

    t79 = (((x329/x330)==x331)^x332);

    if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x334 = INT64_MIN;
	uint32_t x335 = 507U;
	int32_t x336 = -1;

    t80 = (((x333/x334)==x335)^x336);

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x337 = 326;
	volatile int8_t x338 = INT8_MAX;
	volatile int64_t x340 = INT64_MIN;
	static int64_t t81 = INT64_MIN;

    t81 = (((x337/x338)==x339)^x340);

    if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x341 = INT16_MIN;
	int32_t x342 = INT32_MIN;
	int16_t x343 = -1;
	static uint64_t x344 = UINT64_MAX;
	volatile uint64_t t82 = UINT64_MAX;

    t82 = (((x341/x342)==x343)^x344);

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x345 = INT64_MAX;
	int64_t x347 = -432072367418294136LL;
	static volatile int16_t x348 = INT16_MIN;
	int32_t t83 = 0;

    t83 = (((x345/x346)==x347)^x348);

    if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x349 = INT32_MIN;
	int16_t x350 = 47;
	int64_t x351 = INT64_MIN;
	int8_t x352 = 0;
	volatile int32_t t84 = -19047;

    t84 = (((x349/x350)==x351)^x352);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x354 = UINT8_MAX;
	uint8_t x356 = 1U;
	static volatile int32_t t85 = 1;

    t85 = (((x353/x354)==x355)^x356);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x358 = -1;
	int64_t x359 = -6351033320LL;
	int16_t x360 = INT16_MIN;
	static int32_t t86 = 2905345;

    t86 = (((x357/x358)==x359)^x360);

    if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x365 = 4508LLU;
	int64_t x366 = INT64_MIN;
	int16_t x367 = -4;
	int8_t x368 = INT8_MIN;
	volatile int32_t t87 = 10452;

    t87 = (((x365/x366)==x367)^x368);

    if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x369 = INT8_MIN;
	int8_t x370 = INT8_MAX;
	int32_t x372 = 5267;
	static int32_t t88 = -985964068;

    t88 = (((x369/x370)==x371)^x372);

    if (t88 != 5267) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x373 = 207905653261LLU;
	uint8_t x374 = 7U;
	volatile int8_t x376 = INT8_MAX;
	int32_t t89 = -19477696;

    t89 = (((x373/x374)==x375)^x376);

    if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x377 = INT16_MIN;
	int16_t x378 = -33;
	int16_t x380 = -1;
	volatile int32_t t90 = 116;

    t90 = (((x377/x378)==x379)^x380);

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x381 = 99685357U;
	int64_t x382 = INT64_MIN;
	int16_t x383 = INT16_MIN;
	volatile int16_t x384 = 1;
	static int32_t t91 = -1042;

    t91 = (((x381/x382)==x383)^x384);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x385 = INT16_MAX;
	int8_t x386 = 3;
	volatile int32_t x387 = 7;

    t92 = (((x385/x386)==x387)^x388);

    if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x389 = -30;
	int8_t x390 = INT8_MIN;
	uint8_t x391 = 46U;
	int8_t x392 = -1;

    t93 = (((x389/x390)==x391)^x392);

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x393 = INT64_MIN;
	volatile uint32_t x395 = UINT32_MAX;
	volatile int16_t x396 = -344;
	volatile int32_t t94 = -17903031;

    t94 = (((x393/x394)==x395)^x396);

    if (t94 != -344) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x397 = -1;
	static volatile int8_t x398 = INT8_MIN;
	uint64_t x399 = 17899537623908LLU;
	int64_t x400 = INT64_MAX;
	volatile int64_t t95 = INT64_MAX;

    t95 = (((x397/x398)==x399)^x400);

    if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x405 = -2;
	uint64_t x407 = 53068LLU;
	int32_t t96 = 1329;

    t96 = (((x405/x406)==x407)^x408);

    if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x409 = -2072334706LL;
	volatile int8_t x410 = -17;
	uint32_t x411 = 635277U;
	uint64_t x412 = 3013595176665LLU;
	uint64_t t97 = 224525893640049880LLU;

    t97 = (((x409/x410)==x411)^x412);

    if (t97 != 3013595176665LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x417 = UINT16_MAX;
	int8_t x419 = INT8_MIN;
	uint8_t x420 = 66U;

    t98 = (((x417/x418)==x419)^x420);

    if (t98 != 66) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x421 = -1;
	int16_t x423 = -1;
	volatile int8_t x424 = -1;
	volatile int32_t t99 = 78789595;

    t99 = (((x421/x422)==x423)^x424);

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x425 = 0;
	uint16_t x426 = UINT16_MAX;
	int64_t x427 = -1LL;

    t100 = (((x425/x426)==x427)^x428);

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x429 = 452U;
	uint64_t x430 = 130937448252246761LLU;
	int64_t x431 = INT64_MIN;
	int32_t x432 = INT32_MIN;
	static volatile int32_t t101 = INT32_MIN;

    t101 = (((x429/x430)==x431)^x432);

    if (t101 != INT32_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x437 = -1LL;
	int32_t x438 = INT32_MIN;
	int16_t x439 = -1;
	static int8_t x440 = 5;
	int32_t t102 = -11210417;

    t102 = (((x437/x438)==x439)^x440);

    if (t102 != 5) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x441 = UINT16_MAX;
	static uint16_t x443 = 3U;
	static int32_t x444 = 47454;
	int32_t t103 = 0;

    t103 = (((x441/x442)==x443)^x444);

    if (t103 != 47454) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x445 = INT8_MAX;
	uint64_t x446 = 8065419136LLU;
	static int64_t x447 = INT64_MIN;
	uint16_t x448 = 497U;

    t104 = (((x445/x446)==x447)^x448);

    if (t104 != 497) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x450 = UINT64_MAX;
	int32_t x451 = INT32_MAX;
	volatile uint32_t x452 = 55820727U;
	uint32_t t105 = 12U;

    t105 = (((x449/x450)==x451)^x452);

    if (t105 != 55820727U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x453 = -20;
	uint16_t x455 = UINT16_MAX;
	static int8_t x456 = INT8_MIN;
	int32_t t106 = 5306;

    t106 = (((x453/x454)==x455)^x456);

    if (t106 != -128) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x459 = -1;
	static int8_t x460 = INT8_MAX;
	volatile int32_t t107 = -297641185;

    t107 = (((x457/x458)==x459)^x460);

    if (t107 != 127) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int16_t x462 = -1;
	int16_t x463 = INT16_MIN;
	int32_t x464 = INT32_MIN;
	static int32_t t108 = INT32_MIN;

    t108 = (((x461/x462)==x463)^x464);

    if (t108 != INT32_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x465 = INT64_MIN;
	volatile uint32_t t109 = UINT32_MAX;

    t109 = (((x465/x466)==x467)^x468);

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x470 = 446U;
	int32_t x471 = -1;
	int8_t x472 = -1;
	volatile int32_t t110 = 1;

    t110 = (((x469/x470)==x471)^x472);

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x475 = INT8_MIN;
	int32_t x476 = INT32_MAX;
	static int32_t t111 = INT32_MAX;

    t111 = (((x473/x474)==x475)^x476);

    if (t111 != INT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x477 = INT8_MIN;
	uint32_t x478 = 3U;
	uint64_t x480 = 7610370805667LLU;
	static volatile uint64_t t112 = 696061537050944LLU;

    t112 = (((x477/x478)==x479)^x480);

    if (t112 != 7610370805667LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x481 = INT16_MAX;
	int8_t x482 = -1;
	uint16_t x483 = UINT16_MAX;
	uint32_t x484 = UINT32_MAX;
	volatile uint32_t t113 = UINT32_MAX;

    t113 = (((x481/x482)==x483)^x484);

    if (t113 != UINT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x488 = -1;
	volatile int32_t t114 = -870297;

    t114 = (((x485/x486)==x487)^x488);

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x489 = -1LL;
	static int32_t x490 = -1;
	int64_t x491 = -57LL;
	int16_t x492 = INT16_MAX;
	volatile int32_t t115 = 38;

    t115 = (((x489/x490)==x491)^x492);

    if (t115 != 32767) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x493 = INT64_MAX;
	uint16_t x496 = 11U;
	int32_t t116 = -193439400;

    t116 = (((x493/x494)==x495)^x496);

    if (t116 != 11) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x497 = 1U;
	int16_t x498 = INT16_MAX;
	volatile int16_t x499 = INT16_MIN;
	uint32_t x500 = 71677208U;
	static volatile uint32_t t117 = 97979U;

    t117 = (((x497/x498)==x499)^x500);

    if (t117 != 71677208U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x506 = 34U;
	int64_t x508 = -1LL;
	static int64_t t118 = 5027782030824278LL;

    t118 = (((x505/x506)==x507)^x508);

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x509 = 28867629U;
	int8_t x511 = -1;
	static volatile int8_t x512 = 52;
	int32_t t119 = -22;

    t119 = (((x509/x510)==x511)^x512);

    if (t119 != 52) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x513 = INT8_MAX;
	uint32_t x514 = UINT32_MAX;
	uint64_t x515 = UINT64_MAX;
	int8_t x516 = 5;

    t120 = (((x513/x514)==x515)^x516);

    if (t120 != 5) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x517 = INT64_MAX;
	int32_t x519 = INT32_MAX;
	volatile int16_t x520 = INT16_MIN;
	volatile int32_t t121 = -445185;

    t121 = (((x517/x518)==x519)^x520);

    if (t121 != -32768) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x521 = UINT32_MAX;
	uint8_t x522 = 2U;
	volatile uint8_t x523 = UINT8_MAX;

    t122 = (((x521/x522)==x523)^x524);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x525 = 0;
	int64_t x526 = -1LL;
	volatile uint16_t x527 = 116U;
	volatile int32_t x528 = INT32_MIN;
	static volatile int32_t t123 = INT32_MIN;

    t123 = (((x525/x526)==x527)^x528);

    if (t123 != INT32_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x529 = UINT8_MAX;
	static uint16_t x531 = 378U;
	volatile int32_t x532 = INT32_MIN;
	int32_t t124 = INT32_MIN;

    t124 = (((x529/x530)==x531)^x532);

    if (t124 != INT32_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x533 = -1;
	static int64_t x534 = -1LL;
	int32_t x535 = -1;
	volatile int32_t x536 = INT32_MIN;
	volatile int32_t t125 = INT32_MIN;

    t125 = (((x533/x534)==x535)^x536);

    if (t125 != INT32_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x537 = -1;
	static int64_t x538 = INT64_MIN;
	int16_t x539 = INT16_MIN;
	static uint32_t x540 = 15749U;
	volatile uint32_t t126 = 247U;

    t126 = (((x537/x538)==x539)^x540);

    if (t126 != 15749U) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint8_t x542 = UINT8_MAX;
	volatile int32_t x543 = INT32_MIN;
	volatile uint8_t x544 = 1U;
	int32_t t127 = 869;

    t127 = (((x541/x542)==x543)^x544);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x545 = UINT64_MAX;
	int8_t x546 = INT8_MAX;
	int32_t x547 = INT32_MIN;
	volatile uint64_t x548 = 1750688787LLU;
	static uint64_t t128 = 419LLU;

    t128 = (((x545/x546)==x547)^x548);

    if (t128 != 1750688787LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x549 = INT8_MAX;
	int64_t x550 = -615675LL;
	int32_t x551 = INT32_MIN;
	int32_t t129 = 83371;

    t129 = (((x549/x550)==x551)^x552);

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x553 = UINT16_MAX;
	int32_t x554 = INT32_MIN;
	int64_t x555 = -116880186LL;
	static int32_t x556 = 21533786;
	static volatile int32_t t130 = 0;

    t130 = (((x553/x554)==x555)^x556);

    if (t130 != 21533786) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x557 = INT16_MIN;
	int32_t x559 = -1;

    t131 = (((x557/x558)==x559)^x560);

    if (t131 != INT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x561 = INT8_MIN;
	static int64_t x562 = 996193LL;
	uint64_t x563 = 50679671423687608LLU;
	int8_t x564 = -1;

    t132 = (((x561/x562)==x563)^x564);

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x565 = 19077584LLU;
	int16_t x566 = INT16_MIN;
	uint32_t x567 = 78593203U;
	uint16_t x568 = 21652U;
	volatile int32_t t133 = 436588965;

    t133 = (((x565/x566)==x567)^x568);

    if (t133 != 21652) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x570 = UINT32_MAX;
	int8_t x572 = INT8_MIN;
	static int32_t t134 = -980;

    t134 = (((x569/x570)==x571)^x572);

    if (t134 != -127) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x574 = INT8_MIN;
	uint16_t x576 = UINT16_MAX;

    t135 = (((x573/x574)==x575)^x576);

    if (t135 != 65534) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x577 = INT16_MIN;
	volatile int32_t x578 = 51;

    t136 = (((x577/x578)==x579)^x580);

    if (t136 != 32767) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x582 = UINT64_MAX;
	int16_t x583 = 169;
	static volatile int32_t t137 = 2;

    t137 = (((x581/x582)==x583)^x584);

    if (t137 != 60180502) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x585 = -1LL;
	static uint32_t x586 = 5470667U;
	int64_t x587 = -129746LL;
	static int8_t x588 = -9;
	volatile int32_t t138 = 0;

    t138 = (((x585/x586)==x587)^x588);

    if (t138 != -9) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x589 = INT32_MAX;
	volatile uint16_t x590 = UINT16_MAX;
	int16_t x591 = INT16_MAX;
	volatile int64_t x592 = INT64_MIN;
	static volatile int64_t t139 = INT64_MIN;

    t139 = (((x589/x590)==x591)^x592);

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x594 = 1;
	volatile uint64_t t140 = 1391261261654337LLU;

    t140 = (((x593/x594)==x595)^x596);

    if (t140 != 34530004LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x598 = INT32_MAX;
	int16_t x599 = INT16_MIN;
	int32_t x600 = -677406;
	volatile int32_t t141 = -55204;

    t141 = (((x597/x598)==x599)^x600);

    if (t141 != -677406) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x601 = 2U;
	volatile int8_t x602 = -4;
	int16_t x603 = -422;
	int32_t t142 = 6646296;

    t142 = (((x601/x602)==x603)^x604);

    if (t142 != 32767) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x609 = INT16_MAX;
	static int16_t x610 = -1;
	static uint64_t x611 = 164598426LLU;
	volatile int64_t x612 = INT64_MIN;
	volatile int64_t t143 = INT64_MIN;

    t143 = (((x609/x610)==x611)^x612);

    if (t143 != INT64_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x613 = 731013284168390LL;
	volatile int8_t x614 = -15;
	int8_t x615 = -1;
	static uint64_t t144 = UINT64_MAX;

    t144 = (((x613/x614)==x615)^x616);

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x617 = INT64_MIN;
	int32_t x620 = INT32_MIN;
	static volatile int32_t t145 = INT32_MIN;

    t145 = (((x617/x618)==x619)^x620);

    if (t145 != INT32_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x621 = INT8_MIN;
	volatile uint64_t x623 = 2588711LLU;
	volatile int32_t x624 = -1;
	int32_t t146 = 1273188;

    t146 = (((x621/x622)==x623)^x624);

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x625 = INT16_MAX;
	int16_t x626 = -1;
	volatile int32_t x627 = INT32_MIN;
	int8_t x628 = -1;
	volatile int32_t t147 = -2316;

    t147 = (((x625/x626)==x627)^x628);

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x629 = INT32_MAX;
	int32_t x630 = -1;
	static int64_t x632 = INT64_MAX;
	volatile int64_t t148 = INT64_MAX;

    t148 = (((x629/x630)==x631)^x632);

    if (t148 != INT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x633 = 64U;
	int32_t t149 = -9876;

    t149 = (((x633/x634)==x635)^x636);

    if (t149 != -2) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x637 = UINT32_MAX;
	int16_t x638 = INT16_MIN;
	int64_t x639 = INT64_MIN;
	int64_t x640 = INT64_MIN;
	volatile int64_t t150 = INT64_MIN;

    t150 = (((x637/x638)==x639)^x640);

    if (t150 != INT64_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x642 = -1;
	volatile uint16_t x644 = UINT16_MAX;
	volatile int32_t t151 = 2462;

    t151 = (((x641/x642)==x643)^x644);

    if (t151 != 65535) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x649 = UINT16_MAX;
	static uint8_t x652 = UINT8_MAX;
	volatile int32_t t152 = 832637396;

    t152 = (((x649/x650)==x651)^x652);

    if (t152 != 255) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x653 = INT64_MIN;
	static int16_t x654 = INT16_MIN;
	int32_t x655 = -3;
	static volatile int32_t t153 = INT32_MIN;

    t153 = (((x653/x654)==x655)^x656);

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x657 = INT8_MAX;
	static int64_t x658 = INT64_MIN;
	uint16_t x659 = UINT16_MAX;
	volatile uint32_t x660 = 14364U;
	static volatile uint32_t t154 = 17139473U;

    t154 = (((x657/x658)==x659)^x660);

    if (t154 != 14364U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x665 = INT8_MAX;
	volatile int8_t x666 = 23;
	int16_t x667 = INT16_MIN;
	static int32_t t155 = INT32_MIN;

    t155 = (((x665/x666)==x667)^x668);

    if (t155 != INT32_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x669 = INT16_MIN;
	int64_t x670 = -1LL;
	int8_t x671 = -1;
	int32_t t156 = 3875424;

    t156 = (((x669/x670)==x671)^x672);

    if (t156 != 65535) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x674 = 1389U;
	static volatile uint64_t t157 = UINT64_MAX;

    t157 = (((x673/x674)==x675)^x676);

    if (t157 != UINT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x677 = 3674;
	static int32_t x678 = INT32_MAX;
	int8_t x679 = INT8_MIN;
	volatile int64_t x680 = INT64_MAX;

    t158 = (((x677/x678)==x679)^x680);

    if (t158 != INT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x682 = UINT32_MAX;
	volatile int16_t x683 = -1721;
	uint16_t x684 = 409U;
	volatile int32_t t159 = -128550;

    t159 = (((x681/x682)==x683)^x684);

    if (t159 != 409) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x685 = INT16_MIN;
	int32_t x686 = INT32_MIN;
	int16_t x687 = 2;
	volatile uint16_t x688 = UINT16_MAX;
	static volatile int32_t t160 = -1531;

    t160 = (((x685/x686)==x687)^x688);

    if (t160 != 65535) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x689 = -1;
	uint32_t x690 = 32U;
	volatile uint16_t x691 = 11U;
	volatile int32_t x692 = -1;
	volatile int32_t t161 = 595;

    t161 = (((x689/x690)==x691)^x692);

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x693 = -9;
	int64_t x695 = INT64_MIN;
	static int8_t x696 = INT8_MIN;
	int32_t t162 = -3540;

    t162 = (((x693/x694)==x695)^x696);

    if (t162 != -128) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x697 = INT16_MIN;
	uint16_t x698 = UINT16_MAX;
	int16_t x699 = 1944;
	static int64_t x700 = INT64_MIN;
	int64_t t163 = INT64_MIN;

    t163 = (((x697/x698)==x699)^x700);

    if (t163 != INT64_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x701 = 19U;
	uint32_t x703 = UINT32_MAX;

    t164 = (((x701/x702)==x703)^x704);

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x706 = -129976LL;
	static int8_t x707 = -7;
	uint32_t x708 = 475878U;
	volatile uint32_t t165 = 447000321U;

    t165 = (((x705/x706)==x707)^x708);

    if (t165 != 475878U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x709 = INT16_MAX;
	uint64_t x710 = 1062245486774732LLU;
	int8_t x712 = -1;
	volatile int32_t t166 = 613806;

    t166 = (((x709/x710)==x711)^x712);

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x713 = UINT8_MAX;
	static volatile int16_t x714 = INT16_MAX;
	uint8_t x715 = 0U;
	uint32_t x716 = 40506U;
	static volatile uint32_t t167 = 30381U;

    t167 = (((x713/x714)==x715)^x716);

    if (t167 != 40507U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x717 = 4U;
	volatile uint64_t x718 = 1485180LLU;
	int32_t x719 = 326989;
	int8_t x720 = -2;
	volatile int32_t t168 = -687;

    t168 = (((x717/x718)==x719)^x720);

    if (t168 != -2) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x721 = 1;
	volatile int32_t x722 = 49476;
	uint64_t x724 = 390515734LLU;
	static uint64_t t169 = 10589263506716013LLU;

    t169 = (((x721/x722)==x723)^x724);

    if (t169 != 390515734LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x725 = 3;
	int32_t x726 = INT32_MIN;
	static uint8_t x727 = UINT8_MAX;
	uint16_t x728 = UINT16_MAX;
	volatile int32_t t170 = -1164826;

    t170 = (((x725/x726)==x727)^x728);

    if (t170 != 65535) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x729 = INT32_MAX;
	static int32_t x731 = INT32_MIN;
	static uint64_t x732 = 300098767829LLU;

    t171 = (((x729/x730)==x731)^x732);

    if (t171 != 300098767829LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x733 = INT8_MIN;
	int64_t x734 = INT64_MIN;
	volatile int8_t x735 = INT8_MIN;
	static volatile uint64_t t172 = 6LLU;

    t172 = (((x733/x734)==x735)^x736);

    if (t172 != 709123LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x737 = 1837490U;
	int64_t x738 = INT64_MIN;
	uint8_t x739 = 0U;
	int8_t x740 = INT8_MAX;
	volatile int32_t t173 = 23179;

    t173 = (((x737/x738)==x739)^x740);

    if (t173 != 126) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x746 = INT32_MAX;
	uint16_t x747 = 14U;
	static uint64_t x748 = UINT64_MAX;
	uint64_t t174 = UINT64_MAX;

    t174 = (((x745/x746)==x747)^x748);

    if (t174 != UINT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x753 = -1;
	uint16_t x754 = 777U;
	volatile uint32_t x755 = 97697U;
	uint64_t x756 = UINT64_MAX;
	volatile uint64_t t175 = UINT64_MAX;

    t175 = (((x753/x754)==x755)^x756);

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x757 = UINT32_MAX;
	uint8_t x758 = 6U;
	int8_t x760 = -15;
	int32_t t176 = 25596;

    t176 = (((x757/x758)==x759)^x760);

    if (t176 != -15) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x762 = UINT16_MAX;
	static int16_t x763 = -454;
	uint8_t x764 = UINT8_MAX;
	int32_t t177 = -116062294;

    t177 = (((x761/x762)==x763)^x764);

    if (t177 != 255) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x765 = 615308LLU;
	int16_t x767 = -1;
	static volatile uint32_t x768 = 240847U;

    t178 = (((x765/x766)==x767)^x768);

    if (t178 != 240847U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x769 = 464483325U;
	int32_t x770 = -1;
	static int8_t x771 = INT8_MIN;
	uint16_t x772 = 6U;
	int32_t t179 = -219606665;

    t179 = (((x769/x770)==x771)^x772);

    if (t179 != 6) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x774 = INT8_MIN;
	int8_t x775 = INT8_MAX;
	volatile uint16_t x776 = UINT16_MAX;
	int32_t t180 = -822;

    t180 = (((x773/x774)==x775)^x776);

    if (t180 != 65535) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x777 = INT32_MIN;
	uint16_t x778 = UINT16_MAX;
	volatile int32_t x780 = INT32_MIN;
	static int32_t t181 = INT32_MIN;

    t181 = (((x777/x778)==x779)^x780);

    if (t181 != INT32_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x781 = 1LLU;
	static volatile int16_t x782 = INT16_MIN;
	static int8_t x784 = INT8_MAX;
	volatile int32_t t182 = 8567;

    t182 = (((x781/x782)==x783)^x784);

    if (t182 != 127) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x787 = INT16_MAX;
	uint8_t x788 = 16U;

    t183 = (((x785/x786)==x787)^x788);

    if (t183 != 16) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x789 = INT32_MIN;
	int64_t x790 = INT64_MAX;
	uint8_t x791 = 1U;
	static volatile int64_t x792 = 97485414LL;
	volatile int64_t t184 = -33510229LL;

    t184 = (((x789/x790)==x791)^x792);

    if (t184 != 97485414LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x793 = 4;
	static int16_t x795 = -1;
	int64_t x796 = INT64_MAX;
	volatile int64_t t185 = INT64_MAX;

    t185 = (((x793/x794)==x795)^x796);

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x797 = INT64_MIN;
	uint64_t x799 = 140609010870988LLU;
	int64_t x800 = 402001156363473LL;
	static int64_t t186 = 29341863652016LL;

    t186 = (((x797/x798)==x799)^x800);

    if (t186 != 402001156363473LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x803 = -1;
	volatile uint16_t x804 = 5381U;
	int32_t t187 = -6;

    t187 = (((x801/x802)==x803)^x804);

    if (t187 != 5381) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x806 = 853LL;
	int16_t x807 = INT16_MAX;
	static int32_t x808 = INT32_MIN;
	int32_t t188 = INT32_MIN;

    t188 = (((x805/x806)==x807)^x808);

    if (t188 != INT32_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x809 = 6U;
	uint16_t x810 = UINT16_MAX;
	uint32_t x811 = 0U;
	uint32_t x812 = UINT32_MAX;
	static volatile uint32_t t189 = 244U;

    t189 = (((x809/x810)==x811)^x812);

    if (t189 != 4294967294U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x813 = INT64_MIN;
	volatile uint16_t x814 = 1U;
	int32_t x816 = INT32_MIN;
	volatile int32_t t190 = INT32_MIN;

    t190 = (((x813/x814)==x815)^x816);

    if (t190 != INT32_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x817 = 3U;
	int8_t x818 = INT8_MAX;
	int64_t x820 = INT64_MIN;
	int64_t t191 = 1273013497120294695LL;

    t191 = (((x817/x818)==x819)^x820);

    if (t191 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x821 = INT16_MIN;
	static uint8_t x822 = 111U;
	volatile int64_t x823 = INT64_MAX;
	int32_t x824 = INT32_MAX;
	volatile int32_t t192 = INT32_MAX;

    t192 = (((x821/x822)==x823)^x824);

    if (t192 != INT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x825 = 4713643286579LLU;
	volatile uint64_t x826 = 15909LLU;
	int64_t x827 = -1179385033715713094LL;
	static int16_t x828 = -152;
	int32_t t193 = 491502844;

    t193 = (((x825/x826)==x827)^x828);

    if (t193 != -152) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x829 = INT8_MIN;
	static uint32_t x830 = 1U;
	uint8_t x831 = UINT8_MAX;
	int16_t x832 = INT16_MIN;

    t194 = (((x829/x830)==x831)^x832);

    if (t194 != -32768) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x833 = 20LLU;
	uint64_t x834 = 141627303654886LLU;
	volatile int32_t x835 = 275;
	int16_t x836 = -3827;
	volatile int32_t t195 = -3361;

    t195 = (((x833/x834)==x835)^x836);

    if (t195 != -3827) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x837 = UINT16_MAX;
	volatile uint16_t x838 = 29802U;
	int32_t x839 = -1538;
	static int64_t x840 = INT64_MAX;
	static volatile int64_t t196 = INT64_MAX;

    t196 = (((x837/x838)==x839)^x840);

    if (t196 != INT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x841 = -947;
	static int16_t x842 = INT16_MIN;
	static int64_t x843 = INT64_MIN;
	uint8_t x844 = 0U;
	volatile int32_t t197 = -240046;

    t197 = (((x841/x842)==x843)^x844);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x845 = 2383U;
	volatile int16_t x846 = -1;
	int16_t x848 = INT16_MAX;
	volatile int32_t t198 = -3;

    t198 = (((x845/x846)==x847)^x848);

    if (t198 != 32767) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x849 = 1;
	uint16_t x851 = 17U;
	static uint16_t x852 = 16U;
	int32_t t199 = -853854;

    t199 = (((x849/x850)==x851)^x852);

    if (t199 != 16) { NG(); } else { ; }
	
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


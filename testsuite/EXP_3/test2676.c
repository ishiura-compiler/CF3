
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

static int16_t x1 = INT16_MAX;
static int32_t x7 = INT32_MIN;
volatile int8_t x11 = 31;
static uint8_t x13 = 20U;
uint32_t x14 = 22027441U;
uint16_t x16 = 200U;
volatile uint32_t x18 = UINT32_MAX;
int8_t x19 = INT8_MIN;
int8_t x20 = INT8_MIN;
static volatile uint64_t t5 = 30LLU;
int8_t x25 = -48;
int64_t x30 = -3395399231829204173LL;
int64_t t7 = INT64_MAX;
int64_t x37 = -154171816002059LL;
static volatile uint32_t t9 = 25U;
int64_t x42 = -22LL;
uint64_t x48 = 20592822473LLU;
int32_t x49 = 14349;
int32_t x50 = INT32_MIN;
int64_t t12 = -271LL;
int32_t x53 = INT32_MIN;
volatile int8_t x54 = INT8_MAX;
int64_t x64 = INT64_MIN;
volatile int16_t x73 = INT16_MIN;
volatile int8_t x75 = 3;
uint64_t t19 = 3239544946939345LLU;
int16_t x82 = INT16_MAX;
static volatile uint32_t x85 = 227U;
int16_t x92 = 148;
volatile int32_t t22 = 207;
static int32_t t25 = -2504;
uint8_t x106 = 12U;
int16_t x108 = -1;
static volatile uint32_t x117 = UINT32_MAX;
int64_t t29 = 33088012084914LL;
static uint32_t t30 = 132207805U;
uint16_t x134 = 93U;
int16_t x136 = -1;
uint32_t x138 = 179U;
static volatile int32_t x141 = INT32_MAX;
int16_t x145 = INT16_MIN;
static uint16_t x147 = UINT16_MAX;
int16_t x149 = -1;
static uint16_t x158 = 405U;
uint8_t x159 = 45U;
int32_t t39 = -89972;
uint64_t t41 = 247479627825578003LLU;
volatile uint16_t x169 = 4U;
int32_t t42 = 889902489;
uint32_t x180 = 2045U;
uint32_t x182 = UINT32_MAX;
int32_t t45 = 36530;
volatile int64_t x189 = -11580566839275LL;
uint32_t x192 = 3362753U;
int8_t x194 = 0;
int64_t x196 = -1LL;
uint16_t x198 = 20571U;
int32_t t49 = -2090525;
volatile int64_t x202 = INT64_MIN;
int8_t x204 = INT8_MIN;
int8_t x217 = INT8_MIN;
static volatile uint32_t x220 = 369785090U;
int8_t x225 = 0;
int8_t x243 = 1;
volatile int32_t t60 = 918171;
int64_t x251 = -1LL;
int16_t x260 = INT16_MIN;
volatile int64_t t65 = 2801947LL;
volatile int64_t t66 = 4314863524LL;
int64_t x278 = INT64_MIN;
static volatile int32_t x279 = -1;
static int8_t x283 = INT8_MIN;
uint64_t x284 = 6671393LLU;
uint64_t x291 = 1406LLU;
int8_t x292 = 31;
int32_t x297 = INT32_MIN;
int8_t x306 = INT8_MIN;
int8_t x309 = INT8_MIN;
volatile uint64_t t77 = 102778426LLU;
int8_t x313 = INT8_MIN;
int32_t x318 = -25185;
int64_t x319 = -1LL;
int16_t x321 = INT16_MAX;
volatile uint32_t x323 = 2102510U;
int32_t x341 = INT32_MIN;
uint32_t t85 = 90045U;
uint8_t x346 = 14U;
uint8_t x347 = 101U;
uint8_t x349 = UINT8_MAX;
uint8_t x359 = UINT8_MAX;
int32_t t92 = 251131090;
volatile int64_t x373 = -29652411005247083LL;
uint64_t t93 = 16LLU;
int32_t t95 = 626;
uint8_t x395 = UINT8_MAX;
int64_t x402 = 0LL;
uint16_t x404 = UINT16_MAX;
static volatile int16_t x405 = INT16_MAX;
volatile int64_t t100 = -142233388LL;
volatile uint16_t x409 = UINT16_MAX;
int16_t x413 = INT16_MIN;
static int8_t x416 = INT8_MIN;
static volatile uint64_t t102 = 7461258807367645LLU;
volatile int64_t t103 = -2333209860LL;
uint8_t x423 = UINT8_MAX;
int64_t x424 = INT64_MIN;
int16_t x427 = -1;
static uint16_t x430 = 60U;
static int8_t x431 = INT8_MAX;
uint64_t t107 = 850LLU;
volatile int64_t x446 = INT64_MAX;
int64_t t110 = 46106LL;
int64_t x450 = 14838302404951LL;
int32_t x451 = INT32_MAX;
int8_t x456 = INT8_MIN;
static uint8_t x463 = 1U;
int64_t x465 = INT64_MAX;
int16_t x467 = INT16_MAX;
int64_t x469 = INT64_MIN;
static uint64_t x474 = 1272632000556656LLU;
volatile int64_t t117 = -799976LL;
int32_t x478 = INT32_MIN;
uint16_t x479 = 75U;
static int32_t x480 = -1;
int64_t x482 = INT64_MIN;
volatile int64_t t119 = -27632285896LL;
int32_t x485 = 3;
static int8_t x489 = 0;
static uint8_t x491 = UINT8_MAX;
int32_t x492 = INT32_MIN;
volatile int64_t t122 = 4717581972886LL;
uint8_t x503 = 15U;
int64_t t124 = -5LL;
volatile int8_t x505 = 1;
int32_t x506 = INT32_MIN;
uint16_t x512 = 0U;
int16_t x514 = 1523;
volatile int64_t x519 = INT64_MIN;
int64_t x520 = INT64_MIN;
uint16_t x522 = 26653U;
static int64_t x526 = -49691LL;
volatile uint8_t x531 = 5U;
int32_t t131 = -1583;
uint8_t x540 = 0U;
uint64_t x554 = UINT64_MAX;
static uint16_t x556 = UINT16_MAX;
int16_t x557 = -1;
static int32_t x558 = -1;
static int8_t x565 = 7;
volatile int8_t x569 = INT8_MAX;
static uint64_t x570 = UINT64_MAX;
static uint16_t x580 = 1991U;
volatile int32_t x586 = -1;
volatile int64_t x587 = -1LL;
static volatile int32_t x589 = -15;
int64_t t146 = 3991507LL;
uint64_t x601 = 4903921LLU;
int16_t x604 = -1;
int16_t x614 = -3616;
uint64_t x615 = 2892887156603LLU;
static volatile uint64_t t152 = 56115268608863LLU;
volatile int16_t x617 = 0;
uint32_t x624 = 430813U;
int64_t x629 = INT64_MIN;
volatile int16_t x632 = INT16_MIN;
volatile int32_t t156 = 7;
volatile int32_t x639 = INT32_MAX;
uint16_t x644 = 57U;
volatile int8_t x646 = -1;
uint16_t x648 = 3668U;
uint64_t x652 = 124006301606270LLU;
int64_t x653 = -1LL;
static volatile int32_t t162 = -504008784;
volatile uint64_t x660 = 88418107LLU;
static uint16_t x664 = 3156U;
volatile int32_t t164 = -9389;
int64_t x665 = INT64_MAX;
static int32_t x670 = INT32_MIN;
volatile int16_t x671 = INT16_MIN;
int64_t x682 = INT64_MAX;
int64_t x686 = INT64_MIN;
volatile int64_t x687 = -1LL;
int16_t x701 = INT16_MIN;
static int64_t x718 = -542228LL;
static volatile uint32_t x722 = 1066939856U;
uint8_t x726 = UINT8_MAX;
static int64_t x728 = -1LL;
static volatile uint64_t t181 = 125781762498230913LLU;
volatile int16_t x737 = -1;
static volatile int32_t t183 = -91;
volatile int32_t x742 = -1;
int64_t x744 = INT64_MAX;
int64_t x752 = INT64_MAX;
int16_t x754 = INT16_MIN;
int8_t x755 = -1;
int16_t x757 = -1;
uint16_t x758 = 5575U;
int64_t x762 = INT64_MIN;
int64_t t189 = 0LL;
static int16_t x771 = INT16_MAX;
uint8_t x773 = 45U;
volatile int32_t x776 = INT32_MAX;
uint8_t x780 = UINT8_MAX;
int64_t x782 = -726037159674LL;
uint16_t x783 = 4902U;
static volatile int64_t t196 = -896642975608LL;
uint64_t x795 = 7045LLU;
static uint8_t x797 = UINT8_MAX;
int32_t x798 = INT32_MIN;
volatile uint16_t x803 = UINT16_MAX;


void f0(void) {
    	uint16_t x2 = 2U;
	int32_t x3 = INT32_MIN;
	int32_t x4 = -1;
	static int32_t t0 = 6192;

    t0 = ((x1<=x2)-(x3^x4));

    if (t0 != -2147483647) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 694U;
	int8_t x6 = -1;
	int16_t x8 = -1;
	volatile int32_t t1 = 1;

    t1 = ((x5<=x6)-(x7^x8));

    if (t1 != -2147483647) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 1117LLU;
	volatile uint64_t x10 = UINT64_MAX;
	uint32_t x12 = 1U;
	volatile uint32_t t2 = 2U;

    t2 = ((x9<=x10)-(x11^x12));

    if (t2 != 4294967267U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x15 = -232146;
	volatile int32_t t3 = -26;

    t3 = ((x13<=x14)-(x15^x16));

    if (t3 != 231963) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	volatile int32_t t4 = 126938;

    t4 = ((x17<=x18)-(x19^x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	int32_t x22 = INT32_MIN;
	int32_t x23 = -1;
	static uint64_t x24 = 10038913LLU;

    t5 = ((x21<=x22)-(x23^x24));

    if (t5 != 10038915LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = -1;
	int64_t x27 = 44880717333LL;
	int64_t x28 = 1LL;
	static volatile int64_t t6 = -1LL;

    t6 = ((x25<=x26)-(x27^x28));

    if (t6 != -44880717331LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = 63076148301LL;
	int64_t x31 = INT64_MIN;
	int8_t x32 = 1;

    t7 = ((x29<=x30)-(x31^x32));

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = UINT8_MAX;
	volatile uint64_t x34 = 80429030914750LLU;
	volatile int16_t x35 = -3;
	int16_t x36 = -1;
	static volatile int32_t t8 = -2;

    t8 = ((x33<=x34)-(x35^x36));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = 215440;
	uint32_t x39 = 2U;
	volatile int8_t x40 = INT8_MAX;

    t9 = ((x37<=x38)-(x39^x40));

    if (t9 != 4294967172U) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	volatile uint8_t x43 = 1U;
	static int32_t x44 = -7674;
	int32_t t10 = 10768921;

    t10 = ((x41<=x42)-(x43^x44));

    if (t10 != 7674) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x45 = UINT16_MAX;
	uint8_t x46 = 0U;
	uint8_t x47 = 1U;
	volatile uint64_t t11 = 56LLU;

    t11 = ((x45<=x46)-(x47^x48));

    if (t11 != 18446744053116729144LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x51 = INT8_MIN;
	static int64_t x52 = -1LL;

    t12 = ((x49<=x50)-(x51^x52));

    if (t12 != -127LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x55 = INT32_MIN;
	int8_t x56 = -1;
	static int32_t t13 = 799;

    t13 = ((x53<=x54)-(x55^x56));

    if (t13 != -2147483646) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x57 = 3560;
	volatile int16_t x58 = -125;
	int8_t x59 = INT8_MIN;
	uint32_t x60 = UINT32_MAX;
	volatile uint32_t t14 = 104U;

    t14 = ((x57<=x58)-(x59^x60));

    if (t14 != 4294967169U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x61 = 36297940;
	int16_t x62 = -17;
	volatile uint8_t x63 = 1U;
	static int64_t t15 = INT64_MAX;

    t15 = ((x61<=x62)-(x63^x64));

    if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x65 = 546U;
	uint16_t x66 = 3U;
	int32_t x67 = 143079405;
	volatile int64_t x68 = INT64_MAX;
	int64_t t16 = -59806363373LL;

    t16 = ((x65<=x66)-(x67^x68));

    if (t16 != -9223372036711696402LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = INT64_MIN;
	static uint8_t x70 = 30U;
	int32_t x71 = -107080880;
	int64_t x72 = INT64_MAX;
	static int64_t t17 = -41304LL;

    t17 = ((x69<=x70)-(x71^x72));

    if (t17 != 9223372036747694930LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = INT32_MIN;
	int64_t x76 = -1LL;
	int64_t t18 = 1453942387LL;

    t18 = ((x73<=x74)-(x75^x76));

    if (t18 != 4LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x77 = 6885236023672LLU;
	int64_t x78 = INT64_MIN;
	int32_t x79 = INT32_MIN;
	volatile uint64_t x80 = 29403556003918761LLU;

    t19 = ((x77<=x78)-(x79^x80));

    if (t19 != 29403554972224600LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MAX;
	uint32_t x83 = 0U;
	volatile int64_t x84 = -8192299229174LL;
	volatile int64_t t20 = 3231604LL;

    t20 = ((x81<=x82)-(x83^x84));

    if (t20 != 8192299229174LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x86 = 16;
	volatile int16_t x87 = 9;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t21 = 259LLU;

    t21 = ((x85<=x86)-(x87^x88));

    if (t21 != 10LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint8_t x89 = 123U;
	int64_t x90 = INT64_MAX;
	int32_t x91 = INT32_MIN;

    t22 = ((x89<=x90)-(x91^x92));

    if (t22 != 2147483501) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -738697LL;
	static volatile int32_t x94 = INT32_MIN;
	uint64_t x95 = UINT64_MAX;
	int64_t x96 = 1LL;
	volatile uint64_t t23 = 60980224LLU;

    t23 = ((x93<=x94)-(x95^x96));

    if (t23 != 2LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -1;
	volatile int64_t x98 = 37086397556LL;
	int32_t x99 = 10623;
	uint16_t x100 = 16997U;
	volatile int32_t t24 = -1;

    t24 = ((x97<=x98)-(x99^x100));

    if (t24 != -27417) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -1;
	uint32_t x102 = UINT32_MAX;
	volatile uint8_t x103 = 13U;
	static int32_t x104 = INT32_MIN;

    t25 = ((x101<=x102)-(x103^x104));

    if (t25 != 2147483636) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MAX;
	static uint32_t x107 = 28U;
	uint32_t t26 = 4023U;

    t26 = ((x105<=x106)-(x107^x108));

    if (t26 != 29U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x109 = -24;
	static int8_t x110 = INT8_MIN;
	static int16_t x111 = -1;
	volatile uint32_t x112 = 41U;
	volatile uint32_t t27 = 1596228U;

    t27 = ((x109<=x110)-(x111^x112));

    if (t27 != 42U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	uint8_t x114 = 22U;
	volatile int8_t x115 = -1;
	int64_t x116 = -1LL;
	int64_t t28 = 190589349440303LL;

    t28 = ((x113<=x114)-(x115^x116));

    if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x118 = INT16_MAX;
	int64_t x119 = 6330LL;
	int32_t x120 = -339330024;

    t29 = ((x117<=x118)-(x119^x120));

    if (t29 != 339336030LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = 74;
	volatile int32_t x122 = 15840336;
	uint8_t x123 = 91U;
	uint32_t x124 = 43817404U;

    t30 = ((x121<=x122)-(x123^x124));

    if (t30 != 4251149850U) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int32_t x125 = -1;
	uint16_t x126 = 24827U;
	int32_t x127 = -641;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = -1011;

    t31 = ((x125<=x126)-(x127^x128));

    if (t31 != -2147483006) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MAX;
	int64_t x130 = INT64_MIN;
	static int64_t x131 = INT64_MIN;
	volatile uint64_t x132 = UINT64_MAX;
	volatile uint64_t t32 = 264146064326512193LLU;

    t32 = ((x129<=x130)-(x131^x132));

    if (t32 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x133 = 17009;
	static int32_t x135 = -1;
	volatile int32_t t33 = -37;

    t33 = ((x133<=x134)-(x135^x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = -1;
	int16_t x139 = INT16_MIN;
	int16_t x140 = INT16_MIN;
	volatile int32_t t34 = 8;

    t34 = ((x137<=x138)-(x139^x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x142 = -72668652;
	uint16_t x143 = 3618U;
	static int16_t x144 = INT16_MIN;
	static int32_t t35 = -1;

    t35 = ((x141<=x142)-(x143^x144));

    if (t35 != 29150) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x146 = INT16_MAX;
	int16_t x148 = -3228;
	static int32_t t36 = -16;

    t36 = ((x145<=x146)-(x147^x148));

    if (t36 != 62310) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t x150 = INT64_MIN;
	static int32_t x151 = INT32_MIN;
	uint8_t x152 = 3U;
	static int32_t t37 = -4435;

    t37 = ((x149<=x150)-(x151^x152));

    if (t37 != 2147483645) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x153 = 477U;
	static volatile int64_t x154 = INT64_MIN;
	int32_t x155 = INT32_MAX;
	uint8_t x156 = 14U;
	volatile int32_t t38 = 4;

    t38 = ((x153<=x154)-(x155^x156));

    if (t38 != -2147483633) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x157 = INT8_MIN;
	int16_t x160 = 2054;

    t39 = ((x157<=x158)-(x159^x160));

    if (t39 != -2090) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MIN;
	int8_t x162 = 3;
	volatile int64_t x163 = INT64_MAX;
	static int32_t x164 = INT32_MIN;
	static volatile int64_t t40 = -8199LL;

    t40 = ((x161<=x162)-(x163^x164));

    if (t40 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x165 = INT32_MIN;
	volatile int32_t x166 = 176;
	int8_t x167 = INT8_MAX;
	static uint64_t x168 = 2294LLU;

    t41 = ((x165<=x166)-(x167^x168));

    if (t41 != 18446744073709549432LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x170 = -1;
	int8_t x171 = -1;
	static int8_t x172 = INT8_MIN;

    t42 = ((x169<=x170)-(x171^x172));

    if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x173 = INT8_MAX;
	int64_t x174 = 135897906538580634LL;
	int16_t x175 = INT16_MAX;
	int32_t x176 = INT32_MAX;
	volatile int32_t t43 = -2362531;

    t43 = ((x173<=x174)-(x175^x176));

    if (t43 != -2147450879) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MAX;
	volatile int32_t x178 = -1;
	int8_t x179 = -3;
	uint32_t t44 = 485763654U;

    t44 = ((x177<=x178)-(x179^x180));

    if (t44 != 2048U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = UINT64_MAX;
	int16_t x183 = 17;
	int8_t x184 = -4;

    t45 = ((x181<=x182)-(x183^x184));

    if (t45 != 19) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = 45;
	int16_t x186 = -191;
	static volatile int16_t x187 = 3838;
	static volatile uint64_t x188 = 3LLU;
	volatile uint64_t t46 = 10430LLU;

    t46 = ((x185<=x186)-(x187^x188));

    if (t46 != 18446744073709547779LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x190 = 0;
	uint8_t x191 = 0U;
	static volatile uint32_t t47 = 41U;

    t47 = ((x189<=x190)-(x191^x192));

    if (t47 != 4291604544U) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MIN;
	volatile uint32_t x195 = UINT32_MAX;
	volatile int64_t t48 = 837304690663953598LL;

    t48 = ((x193<=x194)-(x195^x196));

    if (t48 != 4294967297LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 1507229U;
	uint16_t x199 = 57U;
	static uint16_t x200 = UINT16_MAX;

    t49 = ((x197<=x198)-(x199^x200));

    if (t49 != -65478) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x201 = 27963806152LLU;
	int16_t x203 = INT16_MIN;
	volatile int32_t t50 = 2;

    t50 = ((x201<=x202)-(x203^x204));

    if (t50 != -32639) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = -1LL;
	int16_t x206 = INT16_MIN;
	uint32_t x207 = 1191U;
	static int8_t x208 = -1;
	volatile uint32_t t51 = 2054616053U;

    t51 = ((x205<=x206)-(x207^x208));

    if (t51 != 1192U) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	int32_t x210 = 41103;
	int64_t x211 = INT64_MIN;
	uint64_t x212 = UINT64_MAX;
	volatile uint64_t t52 = 98106544437LLU;

    t52 = ((x209<=x210)-(x211^x212));

    if (t52 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	uint16_t x214 = 250U;
	static uint8_t x215 = 1U;
	uint32_t x216 = 163615U;
	uint32_t t53 = 1U;

    t53 = ((x213<=x214)-(x215^x216));

    if (t53 != 4294803683U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x218 = UINT32_MAX;
	static uint64_t x219 = 89915520879394684LLU;
	static uint64_t t54 = 916616969889795LLU;

    t54 = ((x217<=x218)-(x219^x220));

    if (t54 != 18356828552998615427LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x221 = 771U;
	uint32_t x222 = 39253U;
	static int32_t x223 = -310244805;
	volatile uint16_t x224 = 1U;
	int32_t t55 = -100532701;

    t55 = ((x221<=x222)-(x223^x224));

    if (t55 != 310244807) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x226 = 1;
	static uint8_t x227 = 1U;
	uint8_t x228 = 119U;
	int32_t t56 = -354;

    t56 = ((x225<=x226)-(x227^x228));

    if (t56 != -117) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	static uint64_t x230 = 3648588507704616534LLU;
	static int64_t x231 = INT64_MIN;
	static uint32_t x232 = UINT32_MAX;
	volatile int64_t t57 = -1927842419312076187LL;

    t57 = ((x229<=x230)-(x231^x232));

    if (t57 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = -917175579LL;
	int64_t x234 = INT64_MIN;
	static int8_t x235 = -1;
	int8_t x236 = -1;
	int32_t t58 = 50696;

    t58 = ((x233<=x234)-(x235^x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = -227;
	volatile uint64_t x238 = 345207648171LLU;
	int16_t x239 = -1;
	static int16_t x240 = INT16_MAX;
	int32_t t59 = -2294446;

    t59 = ((x237<=x238)-(x239^x240));

    if (t59 != 32768) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x241 = -9;
	volatile int64_t x242 = -1LL;
	uint8_t x244 = UINT8_MAX;

    t60 = ((x241<=x242)-(x243^x244));

    if (t60 != -253) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x245 = -1;
	int32_t x246 = -1;
	static int32_t x247 = INT32_MAX;
	static int32_t x248 = -190017;
	volatile int32_t t61 = -13783;

    t61 = ((x245<=x246)-(x247^x248));

    if (t61 != 2147293633) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x249 = UINT8_MAX;
	uint16_t x250 = UINT16_MAX;
	int16_t x252 = -32;
	volatile int64_t t62 = 136528821749929871LL;

    t62 = ((x249<=x250)-(x251^x252));

    if (t62 != -30LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = 0;
	int16_t x254 = 733;
	volatile int16_t x255 = -1;
	int64_t x256 = -33748540567LL;
	static int64_t t63 = 3574216862LL;

    t63 = ((x253<=x254)-(x255^x256));

    if (t63 != -33748540565LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x257 = UINT32_MAX;
	volatile int32_t x258 = 771882;
	uint32_t x259 = 87728U;
	static uint32_t t64 = 1366471U;

    t64 = ((x257<=x258)-(x259^x260));

    if (t64 != 76112U) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = 7;
	int32_t x262 = INT32_MAX;
	uint32_t x263 = 69U;
	volatile int64_t x264 = -14LL;

    t65 = ((x261<=x262)-(x263^x264));

    if (t65 != 74LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MAX;
	int8_t x266 = 0;
	int64_t x267 = -883527916316039LL;
	int32_t x268 = 2;

    t66 = ((x265<=x266)-(x267^x268));

    if (t66 != 883527916316037LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = UINT8_MAX;
	int8_t x270 = INT8_MIN;
	int32_t x271 = INT32_MIN;
	static int32_t x272 = -1;
	int32_t t67 = 1;

    t67 = ((x269<=x270)-(x271^x272));

    if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MIN;
	uint64_t x274 = 131435LLU;
	int16_t x275 = INT16_MIN;
	volatile int32_t x276 = INT32_MIN;
	int32_t t68 = 36563;

    t68 = ((x273<=x274)-(x275^x276));

    if (t68 != -2147450880) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = 2993650;
	uint64_t x280 = UINT64_MAX;
	volatile uint64_t t69 = 29882057213LLU;

    t69 = ((x277<=x278)-(x279^x280));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x281 = 13780474665077145LLU;
	static int64_t x282 = -9056133902LL;
	static uint64_t t70 = 1496621461377LLU;

    t70 = ((x281<=x282)-(x283^x284));

    if (t70 != 6671456LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 3U;
	int64_t x286 = INT64_MIN;
	int64_t x287 = INT64_MIN;
	int64_t x288 = INT64_MIN;
	static volatile int64_t t71 = 20667LL;

    t71 = ((x285<=x286)-(x287^x288));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -56;
	volatile int64_t x290 = 955461627LL;
	static uint64_t t72 = 19584LLU;

    t72 = ((x289<=x290)-(x291^x292));

    if (t72 != 18446744073709550240LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = UINT32_MAX;
	static uint32_t x294 = 19U;
	volatile int16_t x295 = 6770;
	volatile int64_t x296 = -1LL;
	static int64_t t73 = -6665LL;

    t73 = ((x293<=x294)-(x295^x296));

    if (t73 != 6771LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int16_t x298 = INT16_MAX;
	volatile int16_t x299 = INT16_MIN;
	int8_t x300 = -1;
	static volatile int32_t t74 = 106404;

    t74 = ((x297<=x298)-(x299^x300));

    if (t74 != -32766) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MIN;
	int16_t x302 = INT16_MAX;
	static uint16_t x303 = UINT16_MAX;
	uint32_t x304 = 460211U;
	volatile uint32_t t75 = 121U;

    t75 = ((x301<=x302)-(x303^x304));

    if (t75 != 4294444469U) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MAX;
	int64_t x307 = -491217639308LL;
	static uint32_t x308 = 67438U;
	int64_t t76 = 39LL;

    t76 = ((x305<=x306)-(x307^x308));

    if (t76 != 491217703142LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x310 = 3U;
	static int16_t x311 = -5432;
	volatile uint64_t x312 = 14176LLU;

    t77 = ((x309<=x310)-(x311^x312));

    if (t77 != 8793LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x314 = -990;
	static int16_t x315 = INT16_MAX;
	uint64_t x316 = 13475864417230682LLU;
	static uint64_t t78 = 16225358709432280LLU;

    t78 = ((x313<=x314)-(x315^x316));

    if (t78 != 18433268209292336987LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 3U;
	int64_t x320 = -1LL;
	int64_t t79 = -1508229347LL;

    t79 = ((x317<=x318)-(x319^x320));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x322 = 15443LLU;
	int8_t x324 = -1;
	uint32_t t80 = 2336U;

    t80 = ((x321<=x322)-(x323^x324));

    if (t80 != 2102511U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x325 = INT64_MIN;
	int16_t x326 = -1;
	int32_t x327 = -1;
	uint32_t x328 = 61611U;
	uint32_t t81 = 176154013U;

    t81 = ((x325<=x326)-(x327^x328));

    if (t81 != 61613U) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x329 = 103795187299515260LLU;
	uint16_t x330 = 3077U;
	int16_t x331 = INT16_MIN;
	int16_t x332 = -20;
	int32_t t82 = 49703078;

    t82 = ((x329<=x330)-(x331^x332));

    if (t82 != -32748) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = 2313086U;
	int64_t x334 = INT64_MIN;
	int64_t x335 = 3312421139075LL;
	volatile uint64_t x336 = UINT64_MAX;
	volatile uint64_t t83 = 7590976562348431LLU;

    t83 = ((x333<=x334)-(x335^x336));

    if (t83 != 3312421139076LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MAX;
	volatile uint64_t x338 = 5544286LLU;
	int32_t x339 = 14;
	static int16_t x340 = INT16_MAX;
	static int32_t t84 = -24;

    t84 = ((x337<=x338)-(x339^x340));

    if (t84 != -32753) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x342 = UINT16_MAX;
	int16_t x343 = -1;
	uint32_t x344 = UINT32_MAX;

    t85 = ((x341<=x342)-(x343^x344));

    if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x345 = 3U;
	int8_t x348 = INT8_MIN;
	volatile int32_t t86 = -1;

    t86 = ((x345<=x346)-(x347^x348));

    if (t86 != 28) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x350 = 0;
	uint8_t x351 = 2U;
	int16_t x352 = -1;
	volatile int32_t t87 = -228;

    t87 = ((x349<=x350)-(x351^x352));

    if (t87 != 3) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x353 = 14U;
	static uint16_t x354 = UINT16_MAX;
	static int64_t x355 = 202878320939LL;
	int16_t x356 = INT16_MIN;
	int64_t t88 = 503665276704LL;

    t88 = ((x353<=x354)-(x355^x356));

    if (t88 != 202878353110LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = 12;
	volatile int16_t x358 = 8730;
	volatile int16_t x360 = INT16_MIN;
	static int32_t t89 = 922092179;

    t89 = ((x357<=x358)-(x359^x360));

    if (t89 != 32514) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x361 = 9550546U;
	static volatile int32_t x362 = INT32_MIN;
	static int64_t x363 = INT64_MIN;
	int64_t x364 = INT64_MAX;
	volatile int64_t t90 = -31532LL;

    t90 = ((x361<=x362)-(x363^x364));

    if (t90 != 2LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = 15548U;
	static int32_t x366 = -6;
	uint8_t x367 = UINT8_MAX;
	uint32_t x368 = 226U;
	static volatile uint32_t t91 = 1265U;

    t91 = ((x365<=x366)-(x367^x368));

    if (t91 != 4294967267U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x369 = INT16_MIN;
	int16_t x370 = -13;
	uint8_t x371 = UINT8_MAX;
	int32_t x372 = -81888;

    t92 = ((x369<=x370)-(x371^x372));

    if (t92 != 81698) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x374 = 19726696U;
	uint64_t x375 = 58048822697148LLU;
	int64_t x376 = -1LL;

    t93 = ((x373<=x374)-(x375^x376));

    if (t93 != 58048822697150LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x377 = -25;
	int8_t x378 = -43;
	static uint8_t x379 = 90U;
	int32_t x380 = INT32_MIN;
	int32_t t94 = 78332133;

    t94 = ((x377<=x378)-(x379^x380));

    if (t94 != 2147483558) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = UINT8_MAX;
	static volatile int8_t x382 = INT8_MAX;
	static volatile int16_t x383 = -1;
	static int8_t x384 = -25;

    t95 = ((x381<=x382)-(x383^x384));

    if (t95 != -24) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x389 = 1;
	uint32_t x390 = UINT32_MAX;
	static int8_t x391 = -1;
	int32_t x392 = INT32_MIN;
	volatile int32_t t96 = -5;

    t96 = ((x389<=x390)-(x391^x392));

    if (t96 != -2147483646) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x393 = -359698LL;
	uint32_t x394 = 111U;
	int8_t x396 = INT8_MIN;
	int32_t t97 = -863;

    t97 = ((x393<=x394)-(x395^x396));

    if (t97 != 130) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x397 = 15U;
	static int16_t x398 = -1;
	static int64_t x399 = INT64_MIN;
	int8_t x400 = 14;
	volatile int64_t t98 = 105064830517059552LL;

    t98 = ((x397<=x398)-(x399^x400));

    if (t98 != 9223372036854775794LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int8_t x401 = -1;
	static volatile int16_t x403 = -13;
	volatile int32_t t99 = 732802416;

    t99 = ((x401<=x402)-(x403^x404));

    if (t99 != 65525) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x406 = UINT32_MAX;
	int16_t x407 = INT16_MIN;
	int64_t x408 = INT64_MIN;

    t100 = ((x405<=x406)-(x407^x408));

    if (t100 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x410 = 8;
	int16_t x411 = INT16_MIN;
	static uint64_t x412 = UINT64_MAX;
	uint64_t t101 = 115691438083LLU;

    t101 = ((x409<=x410)-(x411^x412));

    if (t101 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x414 = -596;
	volatile uint64_t x415 = UINT64_MAX;

    t102 = ((x413<=x414)-(x415^x416));

    if (t102 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x417 = 465LL;
	int8_t x418 = -2;
	int64_t x419 = -1LL;
	int32_t x420 = -36834620;

    t103 = ((x417<=x418)-(x419^x420));

    if (t103 != -36834619LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x421 = INT64_MIN;
	int32_t x422 = -1;
	int64_t t104 = 33852603122278LL;

    t104 = ((x421<=x422)-(x423^x424));

    if (t104 != 9223372036854775554LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x425 = 105;
	int16_t x426 = -15;
	int16_t x428 = -1;
	int32_t t105 = -263162259;

    t105 = ((x425<=x426)-(x427^x428));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x429 = 159U;
	volatile int32_t x432 = INT32_MIN;
	int32_t t106 = -1555;

    t106 = ((x429<=x430)-(x431^x432));

    if (t106 != 2147483521) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x433 = INT8_MIN;
	volatile int64_t x434 = 25299279805LL;
	static uint64_t x435 = 243967335114LLU;
	int16_t x436 = -166;

    t107 = ((x433<=x434)-(x435^x436));

    if (t107 != 243967335025LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint32_t x437 = 2839U;
	uint64_t x438 = UINT64_MAX;
	uint8_t x439 = 33U;
	static uint16_t x440 = 353U;
	int32_t t108 = 7927978;

    t108 = ((x437<=x438)-(x439^x440));

    if (t108 != -319) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x441 = INT32_MIN;
	volatile int16_t x442 = 996;
	int64_t x443 = -1814572846740988LL;
	int64_t x444 = 14LL;
	int64_t t109 = 965035764646LL;

    t109 = ((x441<=x442)-(x443^x444));

    if (t109 != 1814572846740983LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x445 = INT8_MIN;
	uint16_t x447 = 9U;
	int64_t x448 = INT64_MIN;

    t110 = ((x445<=x446)-(x447^x448));

    if (t110 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x449 = UINT64_MAX;
	uint32_t x452 = 0U;
	uint32_t t111 = 3U;

    t111 = ((x449<=x450)-(x451^x452));

    if (t111 != 2147483649U) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x453 = INT64_MIN;
	static uint32_t x454 = 2338U;
	volatile uint8_t x455 = 27U;
	int32_t t112 = 3;

    t112 = ((x453<=x454)-(x455^x456));

    if (t112 != 102) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x457 = -5820;
	uint64_t x458 = UINT64_MAX;
	uint64_t x459 = UINT64_MAX;
	uint32_t x460 = UINT32_MAX;
	volatile uint64_t t113 = 17657570470160920LLU;

    t113 = ((x457<=x458)-(x459^x460));

    if (t113 != 4294967297LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x461 = 10U;
	int16_t x462 = INT16_MAX;
	int8_t x464 = -20;
	volatile int32_t t114 = 888952;

    t114 = ((x461<=x462)-(x463^x464));

    if (t114 != 20) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x466 = UINT16_MAX;
	int16_t x468 = INT16_MAX;
	int32_t t115 = 2;

    t115 = ((x465<=x466)-(x467^x468));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x470 = INT8_MIN;
	volatile int64_t x471 = -1498664505LL;
	int16_t x472 = INT16_MIN;
	int64_t t116 = -267214095LL;

    t116 = ((x469<=x470)-(x471^x472));

    if (t116 != -1498657222LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x473 = -1;
	uint8_t x475 = UINT8_MAX;
	int64_t x476 = INT64_MIN;

    t117 = ((x473<=x474)-(x475^x476));

    if (t117 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x477 = -1LL;
	static volatile int32_t t118 = -71;

    t118 = ((x477<=x478)-(x479^x480));

    if (t118 != 76) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x481 = 0U;
	static volatile int64_t x483 = 127370089275LL;
	volatile int32_t x484 = INT32_MIN;

    t119 = ((x481<=x482)-(x483^x484));

    if (t119 != 128180464837LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x486 = 2U;
	volatile uint16_t x487 = 5U;
	static int32_t x488 = INT32_MIN;
	volatile int32_t t120 = 6;

    t120 = ((x485<=x486)-(x487^x488));

    if (t120 != 2147483643) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x490 = INT16_MIN;
	volatile int32_t t121 = -1;

    t121 = ((x489<=x490)-(x491^x492));

    if (t121 != 2147483393) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x493 = INT8_MIN;
	int16_t x494 = 581;
	uint8_t x495 = UINT8_MAX;
	volatile int64_t x496 = -1LL;

    t122 = ((x493<=x494)-(x495^x496));

    if (t122 != 257LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x497 = 66U;
	int64_t x498 = INT64_MIN;
	static volatile int64_t x499 = INT64_MIN;
	uint32_t x500 = 173U;
	int64_t t123 = 1919266020514LL;

    t123 = ((x497<=x498)-(x499^x500));

    if (t123 != 9223372036854775635LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x501 = 42295973499669476LLU;
	static int16_t x502 = INT16_MIN;
	int64_t x504 = 31411130641LL;

    t124 = ((x501<=x502)-(x503^x504));

    if (t124 != -31411130653LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x507 = 419300U;
	int16_t x508 = INT16_MIN;
	volatile uint32_t t125 = 1333249551U;

    t125 = ((x505<=x506)-(x507^x508));

    if (t125 != 399900U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x509 = UINT32_MAX;
	uint64_t x510 = 836469531793670LLU;
	int32_t x511 = INT32_MAX;
	int32_t t126 = -1;

    t126 = ((x509<=x510)-(x511^x512));

    if (t126 != -2147483646) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x513 = 863U;
	int32_t x515 = INT32_MIN;
	static int64_t x516 = INT64_MAX;
	static int64_t t127 = 1LL;

    t127 = ((x513<=x514)-(x515^x516));

    if (t127 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x517 = -694;
	static volatile int16_t x518 = -87;
	static int64_t t128 = 1LL;

    t128 = ((x517<=x518)-(x519^x520));

    if (t128 != 1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x521 = INT64_MAX;
	int16_t x523 = -1;
	int32_t x524 = -1;
	volatile int32_t t129 = -528;

    t129 = ((x521<=x522)-(x523^x524));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x525 = 23;
	int8_t x527 = -1;
	int16_t x528 = -1;
	static int32_t t130 = -164;

    t130 = ((x525<=x526)-(x527^x528));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x529 = 23143422LLU;
	int16_t x530 = -2787;
	volatile int16_t x532 = -1;

    t131 = ((x529<=x530)-(x531^x532));

    if (t131 != 7) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x533 = 168339201276LL;
	uint16_t x534 = UINT16_MAX;
	static int32_t x535 = -440486551;
	int32_t x536 = -60961;
	int32_t t132 = 85111;

    t132 = ((x533<=x534)-(x535^x536));

    if (t132 != -440509622) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x537 = INT32_MAX;
	int16_t x538 = -33;
	static int32_t x539 = 6718083;
	volatile int32_t t133 = 270194673;

    t133 = ((x537<=x538)-(x539^x540));

    if (t133 != -6718083) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x541 = 1U;
	int32_t x542 = INT32_MIN;
	static uint32_t x543 = UINT32_MAX;
	static int8_t x544 = INT8_MIN;
	uint32_t t134 = 11159U;

    t134 = ((x541<=x542)-(x543^x544));

    if (t134 != 4294967170U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x545 = -1;
	volatile int64_t x546 = INT64_MAX;
	int8_t x547 = INT8_MAX;
	uint32_t x548 = UINT32_MAX;
	uint32_t t135 = 151857594U;

    t135 = ((x545<=x546)-(x547^x548));

    if (t135 != 129U) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x549 = INT32_MIN;
	volatile uint8_t x550 = 7U;
	static uint64_t x551 = UINT64_MAX;
	uint8_t x552 = UINT8_MAX;
	volatile uint64_t t136 = 34066257698LLU;

    t136 = ((x549<=x550)-(x551^x552));

    if (t136 != 257LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x553 = UINT16_MAX;
	volatile uint16_t x555 = 3U;
	volatile int32_t t137 = -2782;

    t137 = ((x553<=x554)-(x555^x556));

    if (t137 != -65531) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x559 = UINT64_MAX;
	int16_t x560 = INT16_MAX;
	uint64_t t138 = 0LLU;

    t138 = ((x557<=x558)-(x559^x560));

    if (t138 != 32769LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x561 = INT8_MAX;
	int32_t x562 = INT32_MIN;
	volatile int16_t x563 = 1;
	int32_t x564 = INT32_MAX;
	static int32_t t139 = 23;

    t139 = ((x561<=x562)-(x563^x564));

    if (t139 != -2147483646) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint32_t x566 = UINT32_MAX;
	uint8_t x567 = 6U;
	uint64_t x568 = UINT64_MAX;
	volatile uint64_t t140 = 2100320574804377480LLU;

    t140 = ((x565<=x566)-(x567^x568));

    if (t140 != 8LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x571 = INT8_MIN;
	int16_t x572 = 12348;
	volatile int32_t t141 = 11647;

    t141 = ((x569<=x570)-(x571^x572));

    if (t141 != 12357) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x573 = 8U;
	int32_t x574 = -2;
	uint32_t x575 = 200465U;
	static int32_t x576 = INT32_MIN;
	volatile uint32_t t142 = 371685108U;

    t142 = ((x573<=x574)-(x575^x576));

    if (t142 != 2147283183U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x577 = 2363U;
	uint16_t x578 = 104U;
	volatile uint32_t x579 = 5554U;
	volatile uint32_t t143 = 378426U;

    t143 = ((x577<=x578)-(x579^x580));

    if (t143 != 4294962571U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x581 = UINT16_MAX;
	static int32_t x582 = -1;
	int32_t x583 = 3;
	int32_t x584 = INT32_MIN;
	static volatile int32_t t144 = -24950502;

    t144 = ((x581<=x582)-(x583^x584));

    if (t144 != 2147483645) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x585 = INT8_MIN;
	uint8_t x588 = UINT8_MAX;
	int64_t t145 = 2LL;

    t145 = ((x585<=x586)-(x587^x588));

    if (t145 != 257LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x590 = INT8_MIN;
	static int16_t x591 = -3;
	int64_t x592 = INT64_MIN;

    t146 = ((x589<=x590)-(x591^x592));

    if (t146 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x593 = -41LL;
	uint8_t x594 = 2U;
	int32_t x595 = -1;
	int64_t x596 = -1LL;
	static int64_t t147 = 3544422592496683LL;

    t147 = ((x593<=x594)-(x595^x596));

    if (t147 != 1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int16_t x597 = INT16_MAX;
	int32_t x598 = 77553;
	uint16_t x599 = UINT16_MAX;
	static int8_t x600 = INT8_MAX;
	volatile int32_t t148 = -129;

    t148 = ((x597<=x598)-(x599^x600));

    if (t148 != -65407) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x602 = INT8_MIN;
	volatile int8_t x603 = INT8_MIN;
	volatile int32_t t149 = 103;

    t149 = ((x601<=x602)-(x603^x604));

    if (t149 != -126) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x605 = 2809361295366662458LLU;
	static int8_t x606 = INT8_MIN;
	static int16_t x607 = 2;
	static uint16_t x608 = 18U;
	volatile int32_t t150 = -6;

    t150 = ((x605<=x606)-(x607^x608));

    if (t150 != -15) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x609 = UINT64_MAX;
	volatile uint16_t x610 = 25529U;
	uint32_t x611 = 461U;
	int8_t x612 = INT8_MIN;
	volatile uint32_t t151 = 5201108U;

    t151 = ((x609<=x610)-(x611^x612));

    if (t151 != 435U) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int32_t x613 = INT32_MIN;
	volatile uint8_t x616 = 4U;

    t152 = ((x613<=x614)-(x615^x616));

    if (t152 != 18446741180822395010LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x618 = INT32_MIN;
	int32_t x619 = INT32_MIN;
	int16_t x620 = 1;
	volatile int32_t t153 = INT32_MAX;

    t153 = ((x617<=x618)-(x619^x620));

    if (t153 != INT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x621 = 30;
	static int16_t x622 = INT16_MIN;
	int8_t x623 = 1;
	volatile uint32_t t154 = 3U;

    t154 = ((x621<=x622)-(x623^x624));

    if (t154 != 4294536484U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x625 = 2353217U;
	uint64_t x626 = 129594906647880LLU;
	int8_t x627 = INT8_MIN;
	volatile int8_t x628 = INT8_MAX;
	static volatile int32_t t155 = -25;

    t155 = ((x625<=x626)-(x627^x628));

    if (t155 != 2) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x630 = 327811852691232455LLU;
	int16_t x631 = INT16_MIN;

    t156 = ((x629<=x630)-(x631^x632));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x633 = 11491129020651LL;
	int8_t x634 = INT8_MIN;
	int32_t x635 = 182;
	volatile int32_t x636 = INT32_MIN;
	int32_t t157 = -647;

    t157 = ((x633<=x634)-(x635^x636));

    if (t157 != 2147483466) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x637 = 0LLU;
	uint64_t x638 = UINT64_MAX;
	int8_t x640 = INT8_MIN;
	static int32_t t158 = 0;

    t158 = ((x637<=x638)-(x639^x640));

    if (t158 != 2147483522) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x641 = UINT8_MAX;
	static int8_t x642 = -1;
	int16_t x643 = INT16_MAX;
	volatile int32_t t159 = 556983;

    t159 = ((x641<=x642)-(x643^x644));

    if (t159 != -32710) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x645 = UINT64_MAX;
	static uint64_t x647 = 28280916329035LLU;
	uint64_t t160 = 455LLU;

    t160 = ((x645<=x646)-(x647^x648));

    if (t160 != 18446715792793220066LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x649 = INT16_MIN;
	uint64_t x650 = 4837866LLU;
	int16_t x651 = INT16_MAX;
	volatile uint64_t t161 = 686515634LLU;

    t161 = ((x649<=x650)-(x651^x652));

    if (t161 != 18446620067407929727LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x654 = 12;
	int32_t x655 = 49749175;
	int16_t x656 = 15;

    t162 = ((x653<=x654)-(x655^x656));

    if (t162 != -49749175) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x657 = -13;
	int32_t x658 = INT32_MIN;
	static int64_t x659 = INT64_MAX;
	static uint64_t t163 = 251919146858LLU;

    t163 = ((x657<=x658)-(x659^x660));

    if (t163 != 9223372036943193916LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x661 = UINT8_MAX;
	uint8_t x662 = UINT8_MAX;
	int32_t x663 = 79;

    t164 = ((x661<=x662)-(x663^x664));

    if (t164 != -3098) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x666 = -604;
	int32_t x667 = INT32_MIN;
	static volatile int16_t x668 = 1;
	volatile int32_t t165 = INT32_MAX;

    t165 = ((x665<=x666)-(x667^x668));

    if (t165 != INT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x669 = 3U;
	uint64_t x672 = UINT64_MAX;
	uint64_t t166 = 12LLU;

    t166 = ((x669<=x670)-(x671^x672));

    if (t166 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x673 = 10;
	uint32_t x674 = 2880946U;
	uint16_t x675 = UINT16_MAX;
	static int16_t x676 = INT16_MIN;
	static volatile int32_t t167 = -175070112;

    t167 = ((x673<=x674)-(x675^x676));

    if (t167 != 32770) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x677 = INT8_MIN;
	int64_t x678 = INT64_MIN;
	int64_t x679 = 472115LL;
	volatile int64_t x680 = 2148841922764LL;
	static volatile int64_t t168 = 209LL;

    t168 = ((x677<=x678)-(x679^x680));

    if (t168 != -2148841723135LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x681 = INT64_MAX;
	int16_t x683 = INT16_MIN;
	static int8_t x684 = 4;
	volatile int32_t t169 = 556836401;

    t169 = ((x681<=x682)-(x683^x684));

    if (t169 != 32765) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x685 = -160677858;
	static uint8_t x688 = 61U;
	int64_t t170 = 8414503491900826LL;

    t170 = ((x685<=x686)-(x687^x688));

    if (t170 != 62LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x689 = 2614LL;
	volatile int64_t x690 = INT64_MIN;
	int8_t x691 = -61;
	volatile int64_t x692 = 6508532LL;
	static int64_t t171 = 1958068240184LL;

    t171 = ((x689<=x690)-(x691^x692));

    if (t171 != 6508489LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int64_t x693 = -1LL;
	int16_t x694 = INT16_MIN;
	volatile int16_t x695 = 7;
	uint8_t x696 = 52U;
	int32_t t172 = 6817954;

    t172 = ((x693<=x694)-(x695^x696));

    if (t172 != -51) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x697 = INT8_MIN;
	static int64_t x698 = -34LL;
	static volatile int16_t x699 = -526;
	uint8_t x700 = 57U;
	int32_t t173 = -253541;

    t173 = ((x697<=x698)-(x699^x700));

    if (t173 != 566) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x702 = -1;
	uint64_t x703 = 413104335494371LLU;
	int32_t x704 = INT32_MAX;
	volatile uint64_t t174 = 5437708218LLU;

    t174 = ((x701<=x702)-(x703^x704));

    if (t174 != 18446330970218700005LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x705 = 1U;
	int32_t x706 = 317486;
	uint16_t x707 = 1338U;
	int8_t x708 = 2;
	int32_t t175 = -2050008;

    t175 = ((x705<=x706)-(x707^x708));

    if (t175 != -1335) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x709 = UINT8_MAX;
	int16_t x710 = INT16_MIN;
	int8_t x711 = -2;
	int32_t x712 = -1001166;
	volatile int32_t t176 = 1;

    t176 = ((x709<=x710)-(x711^x712));

    if (t176 != -1001164) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x713 = INT16_MIN;
	static int64_t x714 = -158247700763028LL;
	int64_t x715 = -58751LL;
	static int32_t x716 = INT32_MIN;
	int64_t t177 = -639351455383LL;

    t177 = ((x713<=x714)-(x715^x716));

    if (t177 != -2147424897LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x717 = 3;
	volatile int32_t x719 = -1;
	uint8_t x720 = UINT8_MAX;
	volatile int32_t t178 = 43851;

    t178 = ((x717<=x718)-(x719^x720));

    if (t178 != 256) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x721 = 4197586008597867852LLU;
	int16_t x723 = INT16_MIN;
	static int64_t x724 = -134571754313611LL;
	int64_t t179 = 6467914816LL;

    t179 = ((x721<=x722)-(x723^x724));

    if (t179 != -134571754301557LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x725 = INT64_MIN;
	int8_t x727 = -46;
	static volatile int64_t t180 = -44497LL;

    t180 = ((x725<=x726)-(x727^x728));

    if (t180 != -44LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x729 = 7295061U;
	int32_t x730 = INT32_MAX;
	static uint64_t x731 = 901LLU;
	volatile uint64_t x732 = UINT64_MAX;

    t181 = ((x729<=x730)-(x731^x732));

    if (t181 != 903LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x733 = -1;
	volatile int16_t x734 = -1;
	int8_t x735 = -1;
	uint32_t x736 = UINT32_MAX;
	uint32_t t182 = 102500U;

    t182 = ((x733<=x734)-(x735^x736));

    if (t182 != 1U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x738 = UINT32_MAX;
	int8_t x739 = -1;
	volatile int16_t x740 = -163;

    t183 = ((x737<=x738)-(x739^x740));

    if (t183 != -161) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x741 = INT32_MIN;
	static volatile int32_t x743 = -96;
	int64_t t184 = -205944336423LL;

    t184 = ((x741<=x742)-(x743^x744));

    if (t184 != 9223372036854775714LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x745 = 4LLU;
	int8_t x746 = 0;
	static int64_t x747 = INT64_MIN;
	uint32_t x748 = 6424U;
	int64_t t185 = -69099LL;

    t185 = ((x745<=x746)-(x747^x748));

    if (t185 != 9223372036854769384LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x749 = INT16_MIN;
	int32_t x750 = 373046;
	static int32_t x751 = INT32_MIN;
	int64_t t186 = -59881354654685LL;

    t186 = ((x749<=x750)-(x751^x752));

    if (t186 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x753 = 27;
	int8_t x756 = INT8_MIN;
	volatile int32_t t187 = 10023478;

    t187 = ((x753<=x754)-(x755^x756));

    if (t187 != -127) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x759 = 2765855440LLU;
	uint8_t x760 = UINT8_MAX;
	uint64_t t188 = 9918LLU;

    t188 = ((x757<=x758)-(x759^x760));

    if (t188 != 18446744070943696338LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x761 = 2701LL;
	int64_t x763 = 27534733520978632LL;
	int32_t x764 = -2654200;

    t189 = ((x761<=x762)-(x763^x764));

    if (t189 != 27534733523598656LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x765 = -1;
	static int8_t x766 = INT8_MIN;
	int64_t x767 = INT64_MIN;
	static int16_t x768 = 1057;
	volatile int64_t t190 = 132600290670LL;

    t190 = ((x765<=x766)-(x767^x768));

    if (t190 != 9223372036854774751LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x769 = -1;
	int64_t x770 = INT64_MIN;
	volatile int64_t x772 = INT64_MAX;
	int64_t t191 = -265230592924222LL;

    t191 = ((x769<=x770)-(x771^x772));

    if (t191 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x774 = UINT64_MAX;
	uint8_t x775 = 10U;
	volatile int32_t t192 = 15;

    t192 = ((x773<=x774)-(x775^x776));

    if (t192 != -2147483636) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x777 = INT8_MIN;
	static int16_t x778 = 3551;
	int32_t x779 = 0;
	volatile int32_t t193 = 0;

    t193 = ((x777<=x778)-(x779^x780));

    if (t193 != -254) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x781 = -1;
	static volatile int16_t x784 = 61;
	int32_t t194 = -8;

    t194 = ((x781<=x782)-(x783^x784));

    if (t194 != -4891) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x785 = 29770853640LLU;
	uint8_t x786 = UINT8_MAX;
	int32_t x787 = INT32_MIN;
	volatile int32_t x788 = 492501188;
	int32_t t195 = -33553286;

    t195 = ((x785<=x786)-(x787^x788));

    if (t195 != 1654982460) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x789 = UINT8_MAX;
	static volatile int32_t x790 = INT32_MIN;
	volatile int16_t x791 = -369;
	int64_t x792 = -294899901020689609LL;

    t196 = ((x789<=x790)-(x791^x792));

    if (t196 != -294899901020689848LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x793 = UINT64_MAX;
	int32_t x794 = 414;
	static int16_t x796 = INT16_MAX;
	volatile uint64_t t197 = 19090344256LLU;

    t197 = ((x793<=x794)-(x795^x796));

    if (t197 != 18446744073709525894LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x799 = 0;
	uint8_t x800 = 100U;
	int32_t t198 = 135;

    t198 = ((x797<=x798)-(x799^x800));

    if (t198 != -100) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x801 = 56;
	int16_t x802 = 2;
	int32_t x804 = INT32_MAX;
	int32_t t199 = 293376;

    t199 = ((x801<=x802)-(x803^x804));

    if (t199 != -2147418112) { NG(); } else { ; }
	
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


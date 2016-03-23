
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

static int8_t x9 = 2;
uint32_t x15 = 0U;
int64_t x23 = -1LL;
int8_t x24 = -1;
static uint8_t x26 = 13U;
int8_t x28 = INT8_MIN;
int64_t x30 = 580906604LL;
int16_t x31 = INT16_MAX;
uint32_t x33 = UINT32_MAX;
int8_t x38 = -1;
static uint64_t t9 = 1304939706279797693LLU;
volatile uint64_t x46 = UINT64_MAX;
volatile int8_t x47 = INT8_MIN;
volatile int64_t t11 = 19LL;
int32_t t12 = 10435;
volatile uint32_t x58 = 285562U;
volatile int64_t x61 = -1LL;
int32_t x68 = INT32_MAX;
volatile int32_t t15 = -198658112;
int32_t x70 = INT32_MIN;
volatile int16_t x72 = -439;
int8_t x75 = 25;
int8_t x78 = INT8_MAX;
int16_t x82 = INT16_MIN;
static int8_t x88 = INT8_MIN;
uint32_t x93 = UINT32_MAX;
int16_t x98 = INT16_MAX;
uint32_t x103 = UINT32_MAX;
static int8_t x105 = -1;
volatile int64_t t25 = 48812058609LL;
static volatile int32_t x110 = -1;
static uint32_t t26 = 10048U;
int32_t t28 = -8712;
int8_t x121 = -2;
volatile int16_t x122 = INT16_MIN;
uint16_t x124 = 16U;
static volatile int32_t t29 = -124;
uint8_t x127 = UINT8_MAX;
int32_t x128 = -50;
int32_t x141 = INT32_MIN;
uint64_t x143 = UINT64_MAX;
int32_t x171 = -1;
int64_t t40 = -20LL;
volatile int64_t x179 = INT64_MAX;
uint64_t x181 = 9876359LLU;
int8_t x182 = 2;
static int32_t x184 = -1;
static int32_t x193 = INT32_MIN;
int32_t x197 = -1;
static volatile int16_t x205 = INT16_MAX;
int8_t x215 = -1;
int8_t x216 = -6;
int32_t t51 = -40772;
int64_t x228 = 2095187253924LL;
volatile int32_t x229 = INT32_MIN;
static int64_t t55 = 26748138398835LL;
static uint32_t x239 = UINT32_MAX;
volatile uint64_t t58 = 241742009562362078LLU;
uint32_t x257 = 49263723U;
static volatile int64_t x260 = INT64_MAX;
volatile uint32_t t62 = 22U;
uint32_t x269 = 6560U;
static volatile int16_t x274 = 710;
int16_t x279 = -3797;
int8_t x281 = INT8_MAX;
int64_t x282 = INT64_MIN;
static int16_t x284 = -1;
int64_t x290 = -1LL;
int16_t x292 = -2;
static int8_t x299 = -1;
uint64_t x300 = UINT64_MAX;
volatile uint8_t x303 = 1U;
volatile uint32_t t72 = 797325284U;
uint32_t x312 = 1327748087U;
int8_t x313 = INT8_MIN;
volatile uint32_t t75 = 3U;
static uint32_t x319 = UINT32_MAX;
int64_t x320 = INT64_MIN;
int8_t x344 = 21;
int8_t x347 = -1;
int8_t x348 = -1;
int8_t x351 = -1;
volatile uint64_t t84 = 778711353999LLU;
int8_t x353 = INT8_MAX;
uint8_t x355 = 97U;
static uint32_t x362 = UINT32_MAX;
int32_t x368 = 29599176;
int64_t x372 = INT64_MIN;
volatile int16_t x377 = INT16_MIN;
uint64_t x380 = 284363950947LLU;
uint8_t x381 = 1U;
static uint64_t x382 = 6515100189565053LLU;
static uint64_t t92 = 109780802289781LLU;
static int64_t x388 = -93826982068LL;
volatile uint64_t t95 = 6104013792603301647LLU;
int64_t x403 = -1521LL;
uint64_t x407 = 42817755455LLU;
uint64_t t97 = 8970686773191992LLU;
uint64_t t99 = 32928LLU;
static int64_t t102 = -526996939791654LL;
volatile uint8_t x435 = 2U;
int16_t x438 = INT16_MIN;
static volatile int64_t t104 = -136816LL;
int64_t t105 = -248430685LL;
int64_t x445 = INT64_MIN;
uint32_t x446 = 1087U;
int16_t x448 = INT16_MIN;
int16_t x450 = -5188;
static volatile uint32_t t108 = 20949U;
int32_t t109 = 422829243;
int8_t x464 = INT8_MIN;
int64_t t110 = 152276LL;
uint16_t x474 = UINT16_MAX;
uint16_t x483 = UINT16_MAX;
volatile uint64_t x489 = 7128377LLU;
uint8_t x491 = 74U;
volatile uint64_t t116 = 4436215LLU;
static int64_t x493 = 1805195033266665036LL;
uint8_t x494 = 67U;
volatile uint32_t x496 = UINT32_MAX;
volatile int16_t x499 = -1020;
int64_t x501 = INT64_MIN;
uint64_t x502 = 124348147891847105LLU;
int16_t x507 = INT16_MAX;
static uint32_t t120 = 4676U;
uint64_t t121 = 1864LLU;
int8_t x518 = -1;
int8_t x520 = INT8_MIN;
static uint64_t t123 = 4187107249LLU;
uint16_t x522 = 790U;
int64_t x523 = INT64_MIN;
uint8_t x530 = 6U;
int8_t x532 = -5;
static volatile int32_t t126 = 1531019;
uint8_t x537 = UINT8_MAX;
int64_t x540 = INT64_MAX;
int32_t x543 = -13;
uint32_t t129 = 549U;
int8_t x547 = INT8_MIN;
uint64_t t131 = 2011LLU;
int64_t x554 = INT64_MIN;
uint32_t x555 = 785187U;
uint32_t x560 = UINT32_MAX;
uint8_t x566 = 30U;
int64_t x570 = INT64_MAX;
int8_t x581 = INT8_MIN;
int64_t t139 = 3LL;
uint32_t x591 = 455U;
volatile uint64_t x598 = UINT64_MAX;
uint32_t x603 = 121451U;
static int16_t x604 = INT16_MAX;
uint8_t x611 = 3U;
int16_t x614 = INT16_MIN;
static int16_t x617 = INT16_MAX;
int16_t x620 = -1;
static volatile uint32_t t148 = 756086368U;
int16_t x625 = 38;
volatile int64_t t149 = INT64_MIN;
static int8_t x629 = INT8_MIN;
static volatile uint64_t t152 = 745648356LLU;
volatile int32_t x644 = INT32_MIN;
int8_t x647 = INT8_MIN;
int64_t x655 = INT64_MIN;
static volatile uint32_t x657 = 1U;
uint32_t x660 = UINT32_MAX;
static int64_t t159 = 46180431260LL;
uint8_t x679 = 0U;
uint16_t x680 = UINT16_MAX;
int64_t x689 = INT64_MIN;
volatile uint8_t x695 = 13U;
volatile int64_t t164 = 10071962203730884LL;
int32_t x714 = INT32_MIN;
uint64_t t167 = 0LLU;
uint16_t x722 = 204U;
int64_t t169 = 251726LL;
uint64_t x736 = 815LLU;
volatile uint8_t x737 = UINT8_MAX;
int64_t t173 = 15365LL;
int64_t x754 = INT64_MIN;
int64_t t177 = 870286965085LL;
uint64_t x761 = UINT64_MAX;
static int64_t x764 = INT64_MIN;
int8_t x770 = -1;
int64_t x771 = INT64_MAX;
int64_t t180 = -120355083768LL;
int32_t x773 = -782020478;
int32_t x789 = INT32_MAX;
uint64_t x793 = UINT64_MAX;
static uint64_t t186 = 3159347LLU;
int32_t x799 = -1;
volatile int8_t x804 = 2;
uint64_t t188 = 8606333630100LLU;
uint16_t x806 = 1826U;
static volatile uint64_t t189 = 3570592LLU;
static uint32_t x814 = 300U;
uint8_t x815 = 3U;
static int64_t t191 = 1498124438641LL;
uint64_t x819 = 31800460273423837LLU;
int16_t x824 = 0;
uint32_t x825 = 74375604U;
int8_t x828 = INT8_MIN;
volatile uint32_t t194 = 3U;
uint16_t x833 = 30038U;
int32_t x848 = INT32_MAX;
static volatile uint32_t t199 = 1485U;


void f0(void) {
    	int32_t x5 = -1;
	int32_t x6 = -1;
	volatile int8_t x7 = 32;
	int8_t x8 = INT8_MAX;
	volatile int32_t t0 = -1;

    t0 = ((x5/x6)+(x7^x8));

    if (t0 != 96) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x10 = INT32_MAX;
	volatile uint32_t x11 = 41278676U;
	uint16_t x12 = 3411U;
	static volatile uint32_t t1 = 56U;

    t1 = ((x9/x10)+(x11^x12));

    if (t1 != 41275783U) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = 1343433483LL;
	int32_t x14 = INT32_MAX;
	int16_t x16 = INT16_MIN;
	static volatile int64_t t2 = -849441357865892LL;

    t2 = ((x13/x14)+(x15^x16));

    if (t2 != 4294934528LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = -106642639380616LL;
	uint64_t x18 = 1011482972118586LLU;
	static int16_t x19 = INT16_MAX;
	uint32_t x20 = 48964U;
	volatile uint64_t t3 = 33179LLU;

    t3 = ((x17/x18)+(x19^x20));

    if (t3 != 67576LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = INT32_MAX;
	int8_t x22 = -1;
	static int64_t t4 = 2432948885LL;

    t4 = ((x21/x22)+(x23^x24));

    if (t4 != -2147483647LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x25 = -1;
	int64_t x27 = -4133307164858566769LL;
	static int64_t t5 = 3517268383813771637LL;

    t5 = ((x25/x26)+(x27^x28));

    if (t5 != 4133307164858566671LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x29 = 69U;
	uint32_t x32 = 907940091U;
	int64_t t6 = 252466LL;

    t6 = ((x29/x30)+(x31^x32));

    if (t6 != 907964164LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x34 = UINT16_MAX;
	uint32_t x35 = 294254U;
	int64_t x36 = INT64_MIN;
	volatile int64_t t7 = 506970400174LL;

    t7 = ((x33/x34)+(x35^x36));

    if (t7 != -9223372036854416017LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MIN;
	int64_t x39 = 184171993425720LL;
	uint64_t x40 = 1728109731LLU;
	uint64_t t8 = 541772LLU;

    t8 = ((x37/x38)+(x39^x40));

    if (t8 != 184170433100827LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x41 = UINT8_MAX;
	static uint32_t x42 = UINT32_MAX;
	int64_t x43 = INT64_MAX;
	uint64_t x44 = UINT64_MAX;

    t9 = ((x41/x42)+(x43^x44));

    if (t9 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x45 = UINT32_MAX;
	volatile uint8_t x48 = 0U;
	uint64_t t10 = 157438598162166481LLU;

    t10 = ((x45/x46)+(x47^x48));

    if (t10 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = 5;
	int8_t x50 = INT8_MAX;
	volatile int16_t x51 = INT16_MIN;
	volatile int64_t x52 = INT64_MIN;

    t11 = ((x49/x50)+(x51^x52));

    if (t11 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MAX;
	static uint8_t x54 = 3U;
	int8_t x55 = INT8_MIN;
	int16_t x56 = INT16_MIN;

    t12 = ((x53/x54)+(x55^x56));

    if (t12 != 32682) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x57 = 15U;
	static volatile int16_t x59 = INT16_MAX;
	uint16_t x60 = UINT16_MAX;
	uint32_t t13 = 50963U;

    t13 = ((x57/x58)+(x59^x60));

    if (t13 != 32768U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x62 = -1;
	uint64_t x63 = 845683882LLU;
	static int32_t x64 = INT32_MAX;
	uint64_t t14 = 0LLU;

    t14 = ((x61/x62)+(x63^x64));

    if (t14 != 1301799766LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x65 = 229U;
	static volatile int32_t x66 = INT32_MAX;
	int16_t x67 = INT16_MAX;

    t15 = ((x65/x66)+(x67^x68));

    if (t15 != 2147450880) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x69 = INT32_MIN;
	volatile int64_t x71 = INT64_MIN;
	int64_t t16 = 83LL;

    t16 = ((x69/x70)+(x71^x72));

    if (t16 != 9223372036854775370LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = INT64_MAX;
	static int32_t x74 = INT32_MIN;
	int8_t x76 = INT8_MAX;
	int64_t t17 = 5631LL;

    t17 = ((x73/x74)+(x75^x76));

    if (t17 != -4294967193LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x77 = INT32_MIN;
	uint32_t x79 = 16452121U;
	uint64_t x80 = UINT64_MAX;
	volatile uint64_t t18 = 585337116857169LLU;

    t18 = ((x77/x78)+(x79^x80));

    if (t18 != 18446744073676190174LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x81 = -3;
	int64_t x83 = INT64_MIN;
	int8_t x84 = -1;
	static volatile int64_t t19 = INT64_MAX;

    t19 = ((x81/x82)+(x83^x84));

    if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x85 = 76U;
	uint16_t x86 = 5644U;
	static int32_t x87 = -354338;
	int32_t t20 = -1618563;

    t20 = ((x85/x86)+(x87^x88));

    if (t20 != 354398) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x89 = UINT64_MAX;
	int16_t x90 = INT16_MIN;
	int64_t x91 = -88037334913077LL;
	volatile int32_t x92 = -1;
	uint64_t t21 = 825933970086LLU;

    t21 = ((x89/x90)+(x91^x92));

    if (t21 != 88037334913077LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x94 = INT64_MIN;
	uint16_t x95 = 3730U;
	int16_t x96 = -3;
	int64_t t22 = 0LL;

    t22 = ((x93/x94)+(x95^x96));

    if (t22 != -3729LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x97 = UINT32_MAX;
	uint16_t x99 = 1674U;
	uint16_t x100 = 2U;
	static uint32_t t23 = 2U;

    t23 = ((x97/x98)+(x99^x100));

    if (t23 != 132748U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x101 = INT16_MIN;
	int32_t x102 = 205;
	static uint32_t x104 = 128547239U;
	static uint32_t t24 = 22263U;

    t24 = ((x101/x102)+(x103^x104));

    if (t24 != 4166419897U) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x106 = UINT8_MAX;
	int64_t x107 = INT64_MIN;
	int64_t x108 = INT64_MIN;

    t25 = ((x105/x106)+(x107^x108));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = 52;
	int8_t x111 = INT8_MIN;
	uint32_t x112 = UINT32_MAX;

    t26 = ((x109/x110)+(x111^x112));

    if (t26 != 75U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x113 = 0;
	static int16_t x114 = INT16_MIN;
	volatile int32_t x115 = -1020;
	int8_t x116 = -1;
	int32_t t27 = -2523;

    t27 = ((x113/x114)+(x115^x116));

    if (t27 != 1019) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x117 = INT32_MAX;
	int32_t x118 = 1659;
	int32_t x119 = -1;
	uint16_t x120 = UINT16_MAX;

    t28 = ((x117/x118)+(x119^x120));

    if (t28 != 1228908) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x123 = -1;

    t29 = ((x121/x122)+(x123^x124));

    if (t29 != -17) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x125 = INT16_MAX;
	int8_t x126 = INT8_MIN;
	volatile int32_t t30 = 7;

    t30 = ((x125/x126)+(x127^x128));

    if (t30 != -462) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x129 = -12789446409977LL;
	int32_t x130 = INT32_MIN;
	int64_t x131 = INT64_MIN;
	uint64_t x132 = UINT64_MAX;
	static uint64_t t31 = 8419LLU;

    t31 = ((x129/x130)+(x131^x132));

    if (t31 != 9223372036854781762LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = INT8_MAX;
	static int32_t x134 = INT32_MAX;
	uint16_t x135 = UINT16_MAX;
	int16_t x136 = INT16_MAX;
	volatile int32_t t32 = 11;

    t32 = ((x133/x134)+(x135^x136));

    if (t32 != 32768) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x137 = -1;
	static volatile int8_t x138 = 15;
	volatile uint64_t x139 = 41646855LLU;
	int16_t x140 = INT16_MIN;
	uint64_t t33 = 133949794LLU;

    t33 = ((x137/x138)+(x139^x140));

    if (t33 != 18446744073667934983LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x142 = 11;
	int64_t x144 = INT64_MIN;
	uint64_t t34 = 909LLU;

    t34 = ((x141/x142)+(x143^x144));

    if (t34 != 9223372036659550021LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x145 = -36;
	int32_t x146 = -30797;
	int64_t x147 = INT64_MIN;
	static int32_t x148 = 799376114;
	int64_t t35 = 3331990840LL;

    t35 = ((x145/x146)+(x147^x148));

    if (t35 != -9223372036055399694LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x153 = -17;
	uint32_t x154 = 828743751U;
	int16_t x155 = -1;
	volatile int8_t x156 = -1;
	volatile uint32_t t36 = 5839237U;

    t36 = ((x153/x154)+(x155^x156));

    if (t36 != 5U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x157 = UINT8_MAX;
	uint32_t x158 = 82163036U;
	uint64_t x159 = UINT64_MAX;
	volatile uint16_t x160 = UINT16_MAX;
	static volatile uint64_t t37 = 13LLU;

    t37 = ((x157/x158)+(x159^x160));

    if (t37 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x161 = 0;
	volatile int8_t x162 = INT8_MIN;
	uint16_t x163 = UINT16_MAX;
	uint32_t x164 = 429739720U;
	volatile uint32_t t38 = 934924U;

    t38 = ((x161/x162)+(x163^x164));

    if (t38 != 429764919U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x165 = INT16_MAX;
	static int16_t x166 = INT16_MIN;
	volatile int16_t x167 = -1;
	int8_t x168 = INT8_MIN;
	int32_t t39 = -6863073;

    t39 = ((x165/x166)+(x167^x168));

    if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x169 = -1LL;
	int16_t x170 = -1;
	int8_t x172 = INT8_MIN;

    t40 = ((x169/x170)+(x171^x172));

    if (t40 != 128LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x173 = UINT8_MAX;
	int32_t x174 = INT32_MAX;
	volatile int8_t x175 = INT8_MIN;
	int8_t x176 = 1;
	volatile int32_t t41 = 9419;

    t41 = ((x173/x174)+(x175^x176));

    if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x177 = 39648559U;
	volatile int64_t x178 = -19006160641142LL;
	static uint16_t x180 = 15U;
	volatile int64_t t42 = -2298341LL;

    t42 = ((x177/x178)+(x179^x180));

    if (t42 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x183 = -1;
	static volatile uint64_t t43 = 256043918388258LLU;

    t43 = ((x181/x182)+(x183^x184));

    if (t43 != 4938179LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x185 = 353286LLU;
	uint16_t x186 = 15U;
	static int64_t x187 = INT64_MIN;
	int64_t x188 = INT64_MIN;
	static volatile uint64_t t44 = 525022973443LLU;

    t44 = ((x185/x186)+(x187^x188));

    if (t44 != 23552LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x189 = INT64_MIN;
	uint8_t x190 = 44U;
	uint16_t x191 = 683U;
	static int8_t x192 = INT8_MIN;
	volatile int64_t t45 = -481831934899LL;

    t45 = ((x189/x190)+(x191^x192));

    if (t45 != -209622091746700175LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x194 = 22U;
	static volatile int8_t x195 = INT8_MIN;
	int32_t x196 = 857461;
	uint32_t t46 = 206U;

    t46 = ((x193/x194)+(x195^x196));

    if (t46 != 96755538U) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x198 = INT8_MIN;
	int16_t x199 = INT16_MAX;
	uint16_t x200 = 27U;
	volatile int32_t t47 = 3;

    t47 = ((x197/x198)+(x199^x200));

    if (t47 != 32740) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x201 = UINT16_MAX;
	static uint32_t x202 = UINT32_MAX;
	int8_t x203 = INT8_MIN;
	static uint8_t x204 = 1U;
	static uint32_t t48 = 10U;

    t48 = ((x201/x202)+(x203^x204));

    if (t48 != 4294967169U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x206 = INT8_MAX;
	int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MIN;
	volatile int64_t t49 = -3154100865891LL;

    t49 = ((x205/x206)+(x207^x208));

    if (t49 != 9223372036854743298LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x209 = INT32_MAX;
	volatile int16_t x210 = -1;
	uint64_t x211 = UINT64_MAX;
	volatile int16_t x212 = INT16_MAX;
	volatile uint64_t t50 = 10044157397681837LLU;

    t50 = ((x209/x210)+(x211^x212));

    if (t50 != 18446744071562035201LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x213 = 14164;
	int16_t x214 = INT16_MAX;

    t51 = ((x213/x214)+(x215^x216));

    if (t51 != 5) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x217 = INT64_MAX;
	int8_t x218 = INT8_MIN;
	int16_t x219 = -310;
	int32_t x220 = INT32_MAX;
	static volatile int64_t t52 = 65060088784282369LL;

    t52 = ((x217/x218)+(x219^x220));

    if (t52 != -72057596185411274LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x221 = 32345U;
	uint32_t x222 = 1409837495U;
	int64_t x223 = INT64_MIN;
	uint32_t x224 = 116306U;
	volatile int64_t t53 = -719758513514622LL;

    t53 = ((x221/x222)+(x223^x224));

    if (t53 != -9223372036854659502LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x225 = 7744175281312LLU;
	int16_t x226 = -1;
	int8_t x227 = -1;
	uint64_t t54 = 27118584726435528LLU;

    t54 = ((x225/x226)+(x227^x228));

    if (t54 != 18446741978522297691LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x230 = INT32_MIN;
	volatile int64_t x231 = 0LL;
	static int64_t x232 = -400997888822948270LL;

    t55 = ((x229/x230)+(x231^x232));

    if (t55 != -400997888822948269LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = -1;
	volatile int8_t x234 = INT8_MIN;
	int16_t x235 = INT16_MIN;
	static volatile uint16_t x236 = 24143U;
	volatile int32_t t56 = 1870885;

    t56 = ((x233/x234)+(x235^x236));

    if (t56 != -8625) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x237 = 901519;
	static int16_t x238 = -68;
	int32_t x240 = -1166;
	static uint32_t t57 = 244063792U;

    t57 = ((x237/x238)+(x239^x240));

    if (t57 != 4294955204U) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x241 = -6098436LL;
	int32_t x242 = -4225;
	uint64_t x243 = 1011136920706498LLU;
	uint64_t x244 = 7130849099LLU;

    t58 = ((x241/x242)+(x243^x244));

    if (t58 != 1011129823414316LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x245 = 13030LL;
	static uint32_t x246 = UINT32_MAX;
	int16_t x247 = -1;
	int32_t x248 = -3;
	static int64_t t59 = -38974161644LL;

    t59 = ((x245/x246)+(x247^x248));

    if (t59 != 2LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x249 = -40;
	int64_t x250 = -1LL;
	uint32_t x251 = UINT32_MAX;
	int64_t x252 = 14LL;
	volatile int64_t t60 = -1882434668830555LL;

    t60 = ((x249/x250)+(x251^x252));

    if (t60 != 4294967321LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x258 = UINT16_MAX;
	static int8_t x259 = INT8_MIN;
	static volatile int64_t t61 = 3420724988LL;

    t61 = ((x257/x258)+(x259^x260));

    if (t61 != -9223372036854774930LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x261 = 3U;
	int16_t x262 = -2727;
	int32_t x263 = INT32_MIN;
	uint32_t x264 = 6U;

    t62 = ((x261/x262)+(x263^x264));

    if (t62 != 2147483654U) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x265 = -1;
	uint32_t x266 = 2U;
	volatile uint64_t x267 = 174806492LLU;
	int8_t x268 = INT8_MIN;
	volatile uint64_t t63 = 103087259769538685LLU;

    t63 = ((x265/x266)+(x267^x268));

    if (t63 != 1972677211LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x270 = INT64_MAX;
	int16_t x271 = INT16_MAX;
	uint32_t x272 = UINT32_MAX;
	int64_t t64 = -206606194318LL;

    t64 = ((x269/x270)+(x271^x272));

    if (t64 != 4294934528LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x273 = -1;
	int16_t x275 = 1;
	uint32_t x276 = 1696124U;
	uint32_t t65 = 136U;

    t65 = ((x273/x274)+(x275^x276));

    if (t65 != 1696125U) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x277 = INT8_MAX;
	int32_t x278 = -6;
	uint8_t x280 = UINT8_MAX;
	volatile int32_t t66 = 15874;

    t66 = ((x277/x278)+(x279^x280));

    if (t66 != -3649) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x283 = UINT32_MAX;
	volatile int64_t t67 = 1662026LL;

    t67 = ((x281/x282)+(x283^x284));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x285 = -1LL;
	uint8_t x286 = UINT8_MAX;
	uint8_t x287 = 3U;
	int8_t x288 = INT8_MIN;
	volatile int64_t t68 = 1767306LL;

    t68 = ((x285/x286)+(x287^x288));

    if (t68 != -125LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x289 = -373954724;
	static uint32_t x291 = 952U;
	volatile int64_t t69 = 1006LL;

    t69 = ((x289/x290)+(x291^x292));

    if (t69 != 4668921066LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x293 = -2540305070854313200LL;
	uint32_t x294 = 62246609U;
	static uint64_t x295 = 6196LLU;
	volatile uint8_t x296 = UINT8_MAX;
	volatile uint64_t t70 = 4339628689714357LLU;

    t70 = ((x293/x294)+(x295^x296));

    if (t70 != 18446744032899221277LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x297 = -1;
	int32_t x298 = INT32_MIN;
	volatile uint64_t t71 = 891LLU;

    t71 = ((x297/x298)+(x299^x300));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x301 = -1;
	int16_t x302 = INT16_MIN;
	uint32_t x304 = 52U;

    t72 = ((x301/x302)+(x303^x304));

    if (t72 != 53U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x305 = INT16_MIN;
	int64_t x306 = -1LL;
	int64_t x307 = INT64_MAX;
	uint16_t x308 = UINT16_MAX;
	int64_t t73 = 43LL;

    t73 = ((x305/x306)+(x307^x308));

    if (t73 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x309 = 45031U;
	volatile int32_t x310 = -1;
	volatile int16_t x311 = -9867;
	volatile uint32_t t74 = 430422140U;

    t74 = ((x309/x310)+(x311^x312));

    if (t74 != 2967210626U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x314 = INT32_MIN;
	uint8_t x315 = 1U;
	uint32_t x316 = 29139471U;

    t75 = ((x313/x314)+(x315^x316));

    if (t75 != 29139470U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x317 = 8898U;
	int32_t x318 = INT32_MIN;
	volatile int64_t t76 = 1088904183158220541LL;

    t76 = ((x317/x318)+(x319^x320));

    if (t76 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x321 = -1LL;
	int8_t x322 = INT8_MAX;
	int64_t x323 = -252LL;
	uint32_t x324 = 18333U;
	volatile int64_t t77 = -20534592154027782LL;

    t77 = ((x321/x322)+(x323^x324));

    if (t77 != -18279LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x325 = UINT64_MAX;
	volatile uint8_t x326 = UINT8_MAX;
	uint16_t x327 = UINT16_MAX;
	int64_t x328 = -3LL;
	volatile uint64_t t78 = 2976511722133LLU;

    t78 = ((x325/x326)+(x327^x328));

    if (t78 != 72340172838011139LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x329 = -4231004;
	int64_t x330 = INT64_MIN;
	static uint8_t x331 = 2U;
	volatile int64_t x332 = -334065191329498754LL;
	int64_t t79 = 1614050802140907LL;

    t79 = ((x329/x330)+(x331^x332));

    if (t79 != -334065191329498756LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x333 = 0U;
	int8_t x334 = -15;
	uint32_t x335 = 1102U;
	uint8_t x336 = 1U;
	static uint32_t t80 = 573508U;

    t80 = ((x333/x334)+(x335^x336));

    if (t80 != 1103U) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x337 = INT32_MAX;
	int64_t x338 = -6493LL;
	int64_t x339 = -1LL;
	static int32_t x340 = INT32_MAX;
	int64_t t81 = 921869880313LL;

    t81 = ((x337/x338)+(x339^x340));

    if (t81 != -2147814386LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x341 = UINT16_MAX;
	volatile int64_t x342 = INT64_MIN;
	int64_t x343 = INT64_MAX;
	volatile int64_t t82 = -884124LL;

    t82 = ((x341/x342)+(x343^x344));

    if (t82 != 9223372036854775786LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x345 = -1;
	int16_t x346 = INT16_MAX;
	int32_t t83 = -27614;

    t83 = ((x345/x346)+(x347^x348));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x349 = INT32_MAX;
	int64_t x350 = -23625LL;
	static uint64_t x352 = UINT64_MAX;

    t84 = ((x349/x350)+(x351^x352));

    if (t84 != 18446744073709460718LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x354 = INT16_MAX;
	uint8_t x356 = 1U;
	static int32_t t85 = 2;

    t85 = ((x353/x354)+(x355^x356));

    if (t85 != 96) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x357 = UINT32_MAX;
	int64_t x358 = INT64_MIN;
	int16_t x359 = -1;
	volatile uint64_t x360 = UINT64_MAX;
	volatile uint64_t t86 = 73LLU;

    t86 = ((x357/x358)+(x359^x360));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x361 = -1;
	static int32_t x363 = 295797;
	uint8_t x364 = 16U;
	static volatile uint32_t t87 = 973843U;

    t87 = ((x361/x362)+(x363^x364));

    if (t87 != 295782U) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x365 = INT16_MAX;
	uint64_t x366 = 971110122334431LLU;
	uint32_t x367 = UINT32_MAX;
	uint64_t t88 = 904LLU;

    t88 = ((x365/x366)+(x367^x368));

    if (t88 != 4265368119LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x369 = 371;
	static int64_t x370 = INT64_MIN;
	int16_t x371 = -1;
	int64_t t89 = INT64_MAX;

    t89 = ((x369/x370)+(x371^x372));

    if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x373 = INT8_MIN;
	uint32_t x374 = 5383322U;
	static int64_t x375 = 1LL;
	uint8_t x376 = 0U;
	int64_t t90 = -62612606739118LL;

    t90 = ((x373/x374)+(x375^x376));

    if (t90 != 798LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x378 = INT32_MIN;
	int32_t x379 = -1;
	volatile uint64_t t91 = 968183LLU;

    t91 = ((x377/x378)+(x379^x380));

    if (t91 != 18446743789345600668LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x383 = -20918;
	static int64_t x384 = INT64_MIN;

    t92 = ((x381/x382)+(x383^x384));

    if (t92 != 9223372036854754890LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x385 = 0U;
	int8_t x386 = -1;
	uint16_t x387 = 13514U;
	static volatile int64_t t93 = 10026841867684352LL;

    t93 = ((x385/x386)+(x387^x388));

    if (t93 != -93826978938LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x393 = -1;
	volatile uint8_t x394 = UINT8_MAX;
	volatile uint32_t x395 = UINT32_MAX;
	int8_t x396 = INT8_MIN;
	uint32_t t94 = 8226U;

    t94 = ((x393/x394)+(x395^x396));

    if (t94 != 127U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x397 = -1;
	volatile int64_t x398 = INT64_MAX;
	int8_t x399 = 1;
	static uint64_t x400 = UINT64_MAX;

    t95 = ((x397/x398)+(x399^x400));

    if (t95 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x401 = 395019339;
	static int64_t x402 = -133857LL;
	volatile int32_t x404 = 26;
	static int64_t t96 = 6LL;

    t96 = ((x401/x402)+(x403^x404));

    if (t96 != -4466LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x405 = INT16_MAX;
	int8_t x406 = INT8_MAX;
	int8_t x408 = 0;

    t97 = ((x405/x406)+(x407^x408));

    if (t97 != 42817755713LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x413 = -6;
	static uint8_t x414 = 5U;
	int16_t x415 = -1;
	int16_t x416 = -1;
	volatile int32_t t98 = 458337;

    t98 = ((x413/x414)+(x415^x416));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint16_t x417 = UINT16_MAX;
	uint32_t x418 = UINT32_MAX;
	int8_t x419 = -3;
	static volatile uint64_t x420 = UINT64_MAX;

    t99 = ((x417/x418)+(x419^x420));

    if (t99 != 2LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x421 = 3487615U;
	uint8_t x422 = 5U;
	volatile uint16_t x423 = 10208U;
	volatile uint8_t x424 = 75U;
	volatile uint32_t t100 = 3904018U;

    t100 = ((x421/x422)+(x423^x424));

    if (t100 != 707678U) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x425 = 5549000;
	int64_t x426 = INT64_MAX;
	int16_t x427 = INT16_MIN;
	uint16_t x428 = UINT16_MAX;
	int64_t t101 = 1LL;

    t101 = ((x425/x426)+(x427^x428));

    if (t101 != -32769LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x429 = 5367445674486628LL;
	static int64_t x430 = INT64_MAX;
	int16_t x431 = 1725;
	uint16_t x432 = 3421U;

    t102 = ((x429/x430)+(x431^x432));

    if (t102 != 3040LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x433 = INT16_MAX;
	uint16_t x434 = UINT16_MAX;
	int16_t x436 = -1;
	volatile int32_t t103 = -2;

    t103 = ((x433/x434)+(x435^x436));

    if (t103 != -3) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x437 = -824LL;
	int32_t x439 = -52513644;
	int64_t x440 = INT64_MIN;

    t104 = ((x437/x438)+(x439^x440));

    if (t104 != 9223372036802262164LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x441 = 0LL;
	int16_t x442 = -114;
	volatile int16_t x443 = 251;
	volatile uint16_t x444 = 41U;

    t105 = ((x441/x442)+(x443^x444));

    if (t105 != 210LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x447 = -119660196910LL;
	int64_t t106 = 796931458200203LL;

    t106 = ((x445/x446)+(x447^x448));

    if (t106 != -8485043207188736LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x449 = INT64_MAX;
	int8_t x451 = -1;
	volatile int8_t x452 = INT8_MIN;
	int64_t t107 = 1523948LL;

    t107 = ((x449/x450)+(x451^x452));

    if (t107 != -1777828071868565LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x453 = INT32_MAX;
	static uint32_t x454 = 642U;
	int8_t x455 = INT8_MIN;
	volatile int8_t x456 = INT8_MIN;

    t108 = ((x453/x454)+(x455^x456));

    if (t108 != 3344990U) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int16_t x457 = INT16_MAX;
	int8_t x458 = -3;
	int16_t x459 = -627;
	int16_t x460 = -83;

    t109 = ((x457/x458)+(x459^x460));

    if (t109 != -10378) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x461 = INT16_MAX;
	int64_t x462 = INT64_MAX;
	int16_t x463 = INT16_MIN;

    t110 = ((x461/x462)+(x463^x464));

    if (t110 != 32640LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x465 = 3817758LLU;
	uint64_t x466 = 499576305LLU;
	int8_t x467 = -3;
	uint16_t x468 = 1U;
	static uint64_t t111 = 70494884894LLU;

    t111 = ((x465/x466)+(x467^x468));

    if (t111 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x469 = UINT32_MAX;
	volatile int64_t x470 = 45LL;
	static volatile int16_t x471 = INT16_MIN;
	uint32_t x472 = UINT32_MAX;
	volatile int64_t t112 = 6545LL;

    t112 = ((x469/x470)+(x471^x472));

    if (t112 != 95476484LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int16_t x473 = INT16_MIN;
	static volatile uint8_t x475 = 12U;
	uint8_t x476 = 10U;
	volatile int32_t t113 = 19877798;

    t113 = ((x473/x474)+(x475^x476));

    if (t113 != 6) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x477 = 0U;
	int64_t x478 = -1LL;
	uint16_t x479 = UINT16_MAX;
	static volatile int8_t x480 = -1;
	static volatile int64_t t114 = 176277760473114LL;

    t114 = ((x477/x478)+(x479^x480));

    if (t114 != -65536LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x481 = INT32_MIN;
	volatile uint16_t x482 = 6U;
	static int64_t x484 = 31435180LL;
	volatile int64_t t115 = 612426893LL;

    t115 = ((x481/x482)+(x483^x484));

    if (t115 != -326500098LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x490 = INT8_MIN;
	volatile int64_t x492 = -1LL;

    t116 = ((x489/x490)+(x491^x492));

    if (t116 != 18446744073709551541LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x495 = 72680767958834968LLU;
	volatile uint64_t t117 = 47791103672558LLU;

    t117 = ((x493/x494)+(x495^x496));

    if (t117 != 99623973243486524LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x497 = 3909963489228409LLU;
	static int64_t x498 = INT64_MIN;
	uint8_t x500 = UINT8_MAX;
	volatile uint64_t t118 = 15265722862104LLU;

    t118 = ((x497/x498)+(x499^x500));

    if (t118 != 18446744073709550843LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x503 = INT16_MIN;
	uint16_t x504 = 24168U;
	static uint64_t t119 = 22845025420LLU;

    t119 = ((x501/x502)+(x503^x504));

    if (t119 != 18446744073709543090LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x505 = -16245;
	volatile uint32_t x506 = 27U;
	uint32_t x508 = 12U;

    t120 = ((x505/x506)+(x507^x508));

    if (t120 != 159105016U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x509 = 1;
	uint64_t x510 = UINT64_MAX;
	volatile uint64_t x511 = 252461997LLU;
	int8_t x512 = -1;

    t121 = ((x509/x510)+(x511^x512));

    if (t121 != 18446744073457089618LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x513 = INT32_MIN;
	uint16_t x514 = 34U;
	int16_t x515 = 20;
	static volatile int64_t x516 = INT64_MAX;
	volatile int64_t t122 = 464594LL;

    t122 = ((x513/x514)+(x515^x516));

    if (t122 != 9223372036791614504LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x517 = UINT64_MAX;
	int8_t x519 = INT8_MIN;

    t123 = ((x517/x518)+(x519^x520));

    if (t123 != 1LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x521 = UINT8_MAX;
	uint16_t x524 = 191U;
	volatile int64_t t124 = -1456LL;

    t124 = ((x521/x522)+(x523^x524));

    if (t124 != -9223372036854775617LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint8_t x525 = UINT8_MAX;
	int16_t x526 = -1;
	int32_t x527 = -1;
	int16_t x528 = -436;
	static int32_t t125 = 83189;

    t125 = ((x525/x526)+(x527^x528));

    if (t125 != 180) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x529 = INT32_MIN;
	int16_t x531 = -1;

    t126 = ((x529/x530)+(x531^x532));

    if (t126 != -357913937) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x533 = INT64_MIN;
	int8_t x534 = -33;
	int16_t x535 = -1;
	uint16_t x536 = 1U;
	int64_t t127 = 4LL;

    t127 = ((x533/x534)+(x535^x536));

    if (t127 != 279496122328932598LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x538 = UINT16_MAX;
	int64_t x539 = INT64_MAX;
	volatile int64_t t128 = -109302685927LL;

    t128 = ((x537/x538)+(x539^x540));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x541 = INT32_MIN;
	uint16_t x542 = UINT16_MAX;
	uint32_t x544 = 39496U;

    t129 = ((x541/x542)+(x543^x544));

    if (t129 != 4294895035U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x545 = INT16_MAX;
	volatile int8_t x546 = INT8_MIN;
	int16_t x548 = INT16_MIN;
	volatile int32_t t130 = 915;

    t130 = ((x545/x546)+(x547^x548));

    if (t130 != 32385) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x549 = INT64_MAX;
	int16_t x550 = INT16_MAX;
	static uint64_t x551 = 4503184454LLU;
	static volatile uint16_t x552 = UINT16_MAX;

    t131 = ((x549/x550)+(x551^x552));

    if (t131 != 281488070138817LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x553 = 3979U;
	static int16_t x556 = -10357;
	volatile int64_t t132 = 177030381LL;

    t132 = ((x553/x554)+(x555^x556));

    if (t132 != 4294192296LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x557 = 0;
	volatile int16_t x558 = -1;
	int8_t x559 = INT8_MIN;
	uint32_t t133 = 17929U;

    t133 = ((x557/x558)+(x559^x560));

    if (t133 != 127U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x561 = 0U;
	int64_t x562 = INT64_MIN;
	static int8_t x563 = -36;
	static int32_t x564 = 6988822;
	volatile int64_t t134 = 296910LL;

    t134 = ((x561/x562)+(x563^x564));

    if (t134 != -6988854LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x565 = 6397U;
	static uint16_t x567 = 5227U;
	static int8_t x568 = 1;
	volatile uint32_t t135 = 1538U;

    t135 = ((x565/x566)+(x567^x568));

    if (t135 != 5439U) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x569 = INT64_MIN;
	int64_t x571 = INT64_MAX;
	uint32_t x572 = 3U;
	int64_t t136 = -9803342508LL;

    t136 = ((x569/x570)+(x571^x572));

    if (t136 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x577 = INT8_MIN;
	volatile int16_t x578 = -9199;
	int32_t x579 = 198;
	static int16_t x580 = -1;
	int32_t t137 = 5769;

    t137 = ((x577/x578)+(x579^x580));

    if (t137 != -199) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x582 = 626LL;
	int32_t x583 = -1;
	int16_t x584 = INT16_MIN;
	int64_t t138 = -229407602LL;

    t138 = ((x581/x582)+(x583^x584));

    if (t138 != 32767LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x585 = INT16_MIN;
	int64_t x586 = -31603397967060542LL;
	volatile int16_t x587 = INT16_MIN;
	volatile int8_t x588 = 1;

    t139 = ((x585/x586)+(x587^x588));

    if (t139 != -32767LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x589 = INT8_MIN;
	int64_t x590 = -1LL;
	int32_t x592 = INT32_MIN;
	volatile int64_t t140 = 3645LL;

    t140 = ((x589/x590)+(x591^x592));

    if (t140 != 2147484231LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x593 = -1;
	static uint8_t x594 = UINT8_MAX;
	int64_t x595 = 555184442LL;
	uint32_t x596 = 131728251U;
	static volatile int64_t t141 = -5921556551LL;

    t141 = ((x593/x594)+(x595^x596));

    if (t141 != 650998337LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x597 = INT64_MAX;
	int16_t x599 = INT16_MAX;
	int16_t x600 = INT16_MAX;
	uint64_t t142 = 25288LLU;

    t142 = ((x597/x598)+(x599^x600));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x601 = -5181232;
	int32_t x602 = INT32_MIN;
	volatile uint32_t t143 = 1U;

    t143 = ((x601/x602)+(x603^x604));

    if (t143 != 107924U) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int16_t x605 = INT16_MIN;
	int16_t x606 = 5;
	uint8_t x607 = 14U;
	uint8_t x608 = UINT8_MAX;
	volatile int32_t t144 = -2768227;

    t144 = ((x605/x606)+(x607^x608));

    if (t144 != -6312) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x609 = INT32_MAX;
	volatile int16_t x610 = INT16_MIN;
	static volatile int16_t x612 = -1;
	int32_t t145 = 127775065;

    t145 = ((x609/x610)+(x611^x612));

    if (t145 != -65539) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x613 = -1;
	uint16_t x615 = 4U;
	int16_t x616 = -353;
	int32_t t146 = 1539;

    t146 = ((x613/x614)+(x615^x616));

    if (t146 != -357) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x618 = 33878568760084LL;
	static int8_t x619 = -1;
	int64_t t147 = 18LL;

    t147 = ((x617/x618)+(x619^x620));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x621 = INT8_MIN;
	volatile uint32_t x622 = 1707U;
	int8_t x623 = INT8_MAX;
	int16_t x624 = -1;

    t148 = ((x621/x622)+(x623^x624));

    if (t148 != 2515962U) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int32_t x626 = INT32_MIN;
	int64_t x627 = INT64_MAX;
	static int64_t x628 = -1LL;

    t149 = ((x625/x626)+(x627^x628));

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x630 = INT16_MAX;
	static int8_t x631 = -1;
	int8_t x632 = -1;
	static volatile int32_t t150 = 468631;

    t150 = ((x629/x630)+(x631^x632));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x633 = 125450010338181LLU;
	int32_t x634 = INT32_MIN;
	uint8_t x635 = 29U;
	int64_t x636 = INT64_MIN;
	volatile uint64_t t151 = 207692801564096LLU;

    t151 = ((x633/x634)+(x635^x636));

    if (t151 != 9223372036854775837LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x637 = 1U;
	uint64_t x638 = UINT64_MAX;
	uint16_t x639 = 1951U;
	uint8_t x640 = 2U;

    t152 = ((x637/x638)+(x639^x640));

    if (t152 != 1949LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x641 = 12;
	int8_t x642 = INT8_MIN;
	uint32_t x643 = 125830U;
	static uint32_t t153 = 32053979U;

    t153 = ((x641/x642)+(x643^x644));

    if (t153 != 2147609478U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x645 = UINT8_MAX;
	int64_t x646 = INT64_MIN;
	int32_t x648 = -13;
	static int64_t t154 = 183117LL;

    t154 = ((x645/x646)+(x647^x648));

    if (t154 != 115LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x653 = 827981059U;
	int64_t x654 = INT64_MIN;
	uint32_t x656 = UINT32_MAX;
	int64_t t155 = 126217054LL;

    t155 = ((x653/x654)+(x655^x656));

    if (t155 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x658 = UINT8_MAX;
	uint64_t x659 = 845716765558829227LLU;
	uint64_t t156 = 609768481513178LLU;

    t156 = ((x657/x658)+(x659^x660));

    if (t156 != 845716762346786644LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x661 = -1;
	static uint16_t x662 = UINT16_MAX;
	static int64_t x663 = 6064LL;
	int16_t x664 = -1;
	volatile int64_t t157 = 2971574143LL;

    t157 = ((x661/x662)+(x663^x664));

    if (t157 != -6065LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x665 = -1LL;
	int64_t x666 = INT64_MIN;
	int64_t x667 = INT64_MIN;
	int8_t x668 = -1;
	int64_t t158 = INT64_MAX;

    t158 = ((x665/x666)+(x667^x668));

    if (t158 != INT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x669 = INT64_MAX;
	uint32_t x670 = UINT32_MAX;
	int16_t x671 = INT16_MIN;
	uint8_t x672 = 4U;

    t159 = ((x669/x670)+(x671^x672));

    if (t159 != 2147450884LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x677 = 35U;
	uint32_t x678 = 147625U;
	volatile uint32_t t160 = 382389670U;

    t160 = ((x677/x678)+(x679^x680));

    if (t160 != 65535U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x681 = 3203LL;
	static int64_t x682 = -1LL;
	int16_t x683 = INT16_MIN;
	int8_t x684 = -1;
	int64_t t161 = -16996006190853LL;

    t161 = ((x681/x682)+(x683^x684));

    if (t161 != 29564LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x690 = 2;
	uint32_t x691 = 3U;
	volatile int32_t x692 = 20;
	int64_t t162 = 233212952LL;

    t162 = ((x689/x690)+(x691^x692));

    if (t162 != -4611686018427387881LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x693 = -1;
	int16_t x694 = -1;
	int8_t x696 = 1;
	static int32_t t163 = 18682895;

    t163 = ((x693/x694)+(x695^x696));

    if (t163 != 13) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x697 = INT64_MIN;
	static int8_t x698 = INT8_MIN;
	uint32_t x699 = 1341517U;
	static int16_t x700 = 2;

    t164 = ((x697/x698)+(x699^x700));

    if (t164 != 72057594039269455LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x705 = 2U;
	int16_t x706 = 1217;
	uint8_t x707 = UINT8_MAX;
	uint16_t x708 = UINT16_MAX;
	volatile int32_t t165 = -422094;

    t165 = ((x705/x706)+(x707^x708));

    if (t165 != 65280) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x709 = INT16_MIN;
	int32_t x710 = INT32_MIN;
	uint16_t x711 = 6U;
	uint32_t x712 = 2U;
	volatile uint32_t t166 = 19678095U;

    t166 = ((x709/x710)+(x711^x712));

    if (t166 != 4U) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x713 = 45397378406369LL;
	int8_t x715 = 7;
	uint64_t x716 = 33LLU;

    t167 = ((x713/x714)+(x715^x716));

    if (t167 != 18446744073709530515LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x717 = 1942974672707385LLU;
	int64_t x718 = -1940832813194LL;
	uint16_t x719 = UINT16_MAX;
	static uint8_t x720 = UINT8_MAX;
	uint64_t t168 = 19726161LLU;

    t168 = ((x717/x718)+(x719^x720));

    if (t168 != 65280LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x721 = INT32_MIN;
	int64_t x723 = -1LL;
	static uint8_t x724 = 1U;

    t169 = ((x721/x722)+(x723^x724));

    if (t169 != -10526882LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x729 = 1;
	static int64_t x730 = INT64_MAX;
	int16_t x731 = INT16_MIN;
	int8_t x732 = INT8_MIN;
	static volatile int64_t t170 = -1224051LL;

    t170 = ((x729/x730)+(x731^x732));

    if (t170 != 32640LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x733 = -1;
	static int8_t x734 = INT8_MIN;
	uint16_t x735 = 2U;
	static volatile uint64_t t171 = 13548733LLU;

    t171 = ((x733/x734)+(x735^x736));

    if (t171 != 813LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x738 = INT64_MAX;
	static volatile uint32_t x739 = UINT32_MAX;
	volatile int64_t x740 = INT64_MIN;
	static volatile int64_t t172 = -164564LL;

    t172 = ((x737/x738)+(x739^x740));

    if (t172 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x741 = 917990490U;
	uint16_t x742 = 1589U;
	int8_t x743 = INT8_MIN;
	int64_t x744 = INT64_MAX;

    t173 = ((x741/x742)+(x743^x744));

    if (t173 != -9223372036854197966LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x745 = UINT8_MAX;
	int64_t x746 = INT64_MAX;
	volatile int8_t x747 = 0;
	static volatile int64_t x748 = INT64_MAX;
	volatile int64_t t174 = INT64_MAX;

    t174 = ((x745/x746)+(x747^x748));

    if (t174 != INT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x749 = INT32_MIN;
	uint64_t x750 = 12298657508280LLU;
	static uint16_t x751 = UINT16_MAX;
	int64_t x752 = -1LL;
	volatile uint64_t t175 = 2286910244627205493LLU;

    t175 = ((x749/x750)+(x751^x752));

    if (t175 != 1434362LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x753 = INT8_MAX;
	volatile int64_t x755 = INT64_MAX;
	volatile int64_t x756 = -1LL;
	static int64_t t176 = INT64_MIN;

    t176 = ((x753/x754)+(x755^x756));

    if (t176 != INT64_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x757 = 492U;
	int64_t x758 = -30187793681728846LL;
	int64_t x759 = -1LL;
	uint8_t x760 = 4U;

    t177 = ((x757/x758)+(x759^x760));

    if (t177 != -5LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x762 = INT64_MAX;
	uint8_t x763 = 1U;
	static volatile uint64_t t178 = 236628708356603LLU;

    t178 = ((x761/x762)+(x763^x764));

    if (t178 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x765 = -5703348296LL;
	uint32_t x766 = 233U;
	volatile int64_t x767 = INT64_MAX;
	uint64_t x768 = 313539LLU;
	uint64_t t179 = 28992207LLU;

    t179 = ((x765/x766)+(x767^x768));

    if (t179 != 9223372036829984379LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x769 = 22U;
	int64_t x772 = INT64_MIN;

    t180 = ((x769/x770)+(x771^x772));

    if (t180 != -23LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x774 = 2445736LL;
	int16_t x775 = INT16_MIN;
	volatile int64_t x776 = -1LL;
	int64_t t181 = -624717307517LL;

    t181 = ((x773/x774)+(x775^x776));

    if (t181 != 32448LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x777 = 25U;
	volatile int64_t x778 = -6757851754227LL;
	int64_t x779 = INT64_MIN;
	int32_t x780 = INT32_MIN;
	volatile int64_t t182 = 1454LL;

    t182 = ((x777/x778)+(x779^x780));

    if (t182 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x781 = 8U;
	int8_t x782 = -1;
	static uint8_t x783 = 0U;
	int8_t x784 = INT8_MAX;
	volatile int32_t t183 = 935;

    t183 = ((x781/x782)+(x783^x784));

    if (t183 != 119) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x785 = INT8_MIN;
	volatile int64_t x786 = INT64_MAX;
	uint32_t x787 = 10U;
	int64_t x788 = INT64_MIN;
	volatile int64_t t184 = -3226973411478328LL;

    t184 = ((x785/x786)+(x787^x788));

    if (t184 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x790 = INT64_MIN;
	uint32_t x791 = UINT32_MAX;
	int32_t x792 = -100170423;
	volatile int64_t t185 = -2056506487524087LL;

    t185 = ((x789/x790)+(x791^x792));

    if (t185 != 100170422LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x794 = 3645574111974194038LL;
	int32_t x795 = INT32_MAX;
	int64_t x796 = INT64_MIN;

    t186 = ((x793/x794)+(x795^x796));

    if (t186 != 9223372039002259460LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x797 = 21408318LLU;
	uint16_t x798 = 123U;
	uint64_t x800 = UINT64_MAX;
	uint64_t t187 = 1219215655329524LLU;

    t187 = ((x797/x798)+(x799^x800));

    if (t187 != 174051LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x801 = 53818565996131918LL;
	volatile int8_t x802 = INT8_MIN;
	volatile uint64_t x803 = 8915749244LLU;

    t188 = ((x801/x802)+(x803^x804));

    if (t188 != 18446323625078456082LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x805 = 113971132;
	uint16_t x807 = UINT16_MAX;
	volatile uint64_t x808 = 29461550LLU;

    t189 = ((x805/x806)+(x807^x808));

    if (t189 != 29517728LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x809 = 0;
	volatile uint16_t x810 = UINT16_MAX;
	static volatile uint32_t x811 = UINT32_MAX;
	uint8_t x812 = UINT8_MAX;
	uint32_t t190 = 2748U;

    t190 = ((x809/x810)+(x811^x812));

    if (t190 != 4294967040U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x813 = 0;
	volatile int64_t x816 = INT64_MIN;

    t191 = ((x813/x814)+(x815^x816));

    if (t191 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x817 = -269916LL;
	uint8_t x818 = UINT8_MAX;
	int8_t x820 = -23;
	uint64_t t192 = 1912LLU;

    t192 = ((x817/x818)+(x819^x820));

    if (t192 != 18414943613436126738LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x821 = -34;
	static int8_t x822 = INT8_MIN;
	uint8_t x823 = UINT8_MAX;
	volatile int32_t t193 = 6;

    t193 = ((x821/x822)+(x823^x824));

    if (t193 != 255) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x826 = 3U;
	uint32_t x827 = 1462487U;

    t194 = ((x825/x826)+(x827^x828));

    if (t194 != 23329427U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x829 = 190838525376607345LLU;
	static int8_t x830 = -1;
	static uint64_t x831 = 4640683513383LLU;
	int64_t x832 = INT64_MIN;
	volatile uint64_t t195 = 203417034LLU;

    t195 = ((x829/x830)+(x831^x832));

    if (t195 != 9223376677538289191LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x834 = 1U;
	int32_t x835 = 113889345;
	volatile int8_t x836 = INT8_MIN;
	volatile int32_t t196 = 654585;

    t196 = ((x833/x834)+(x835^x836));

    if (t196 != -113859305) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x837 = 0U;
	uint32_t x838 = 1746174590U;
	int32_t x839 = INT32_MAX;
	int16_t x840 = -1;
	uint32_t t197 = 116289288U;

    t197 = ((x837/x838)+(x839^x840));

    if (t197 != 2147483648U) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x841 = INT8_MIN;
	int8_t x842 = INT8_MIN;
	int64_t x843 = INT64_MIN;
	static int64_t x844 = INT64_MIN;
	volatile int64_t t198 = 55239841LL;

    t198 = ((x841/x842)+(x843^x844));

    if (t198 != 1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x845 = 88;
	int32_t x846 = 225592;
	uint32_t x847 = 1U;

    t199 = ((x845/x846)+(x847^x848));

    if (t199 != 2147483646U) { NG(); } else { ; }
	
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


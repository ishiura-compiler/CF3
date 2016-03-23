
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

int8_t x3 = 0;
static volatile int32_t x6 = -1;
int32_t x10 = -9172420;
int16_t x11 = INT16_MIN;
int16_t x19 = 48;
int8_t x25 = 3;
int16_t x26 = INT16_MAX;
int64_t x28 = -1LL;
int8_t x31 = 1;
volatile int64_t x33 = -1LL;
volatile int32_t x35 = -196;
int16_t x37 = -8154;
static uint16_t x38 = 14U;
static int32_t t10 = 1;
int8_t x45 = INT8_MAX;
static volatile int16_t x46 = INT16_MIN;
int32_t x48 = INT32_MIN;
int16_t x50 = INT16_MIN;
int8_t x58 = INT8_MIN;
int64_t x61 = INT64_MIN;
static volatile uint64_t x71 = 51746173LLU;
int64_t x77 = -1LL;
uint32_t x79 = UINT32_MAX;
uint32_t x81 = UINT32_MAX;
uint8_t x84 = 0U;
uint16_t x113 = 1691U;
volatile uint32_t t30 = UINT32_MAX;
int32_t t31 = 7065;
volatile int64_t x130 = INT64_MAX;
int16_t x135 = INT16_MIN;
uint64_t x136 = 1790LLU;
uint8_t x138 = UINT8_MAX;
int32_t t35 = 3836513;
uint64_t t36 = 209356992195151LLU;
static uint8_t x149 = 3U;
volatile uint32_t t38 = UINT32_MAX;
uint64_t x157 = 51892820610200387LLU;
uint64_t x169 = 4992327447LLU;
uint8_t x171 = UINT8_MAX;
uint16_t x177 = 3U;
int64_t x181 = -324LL;
static int8_t x186 = INT8_MIN;
uint8_t x188 = 46U;
static int32_t t46 = 1138111;
volatile uint32_t x197 = UINT32_MAX;
int64_t t52 = 1LL;
volatile int32_t t53 = 786664998;
int64_t x227 = -1LL;
int32_t t56 = 864002318;
volatile uint32_t x229 = 1U;
uint16_t x232 = UINT16_MAX;
volatile int32_t t57 = -335;
uint16_t x233 = UINT16_MAX;
int16_t x235 = -1;
int16_t x247 = 1411;
uint32_t t61 = 3U;
static int32_t t63 = INT32_MIN;
uint16_t x265 = 11234U;
volatile int32_t t67 = 156177;
volatile int64_t x273 = 44617751688391LL;
uint32_t x276 = 58404U;
volatile int64_t t69 = INT64_MIN;
static volatile int64_t x283 = -1LL;
volatile uint64_t t70 = 4904LLU;
volatile uint32_t x288 = UINT32_MAX;
static int8_t x293 = -1;
int16_t x300 = INT16_MAX;
uint32_t x304 = UINT32_MAX;
int16_t x310 = INT16_MIN;
int8_t x316 = -21;
static int16_t x323 = INT16_MAX;
static int32_t x324 = -48;
uint16_t x328 = 23U;
int64_t x330 = INT64_MAX;
static uint16_t x337 = 2509U;
uint16_t x341 = 4U;
uint8_t x347 = UINT8_MAX;
int64_t x352 = -20414476LL;
int64_t t87 = 195387LL;
static uint8_t x355 = 15U;
volatile int32_t t89 = 18663;
int32_t x365 = 1022;
uint8_t x367 = 8U;
volatile uint64_t t92 = 30715280684409302LLU;
int32_t x373 = 1;
uint32_t x377 = UINT32_MAX;
static int64_t x385 = INT64_MIN;
static uint16_t x390 = UINT16_MAX;
volatile int8_t x392 = INT8_MIN;
int16_t x396 = -117;
uint64_t x410 = 67093587948424LLU;
volatile uint8_t x415 = 54U;
int64_t t103 = INT64_MIN;
static uint8_t x418 = 103U;
uint16_t x428 = UINT16_MAX;
int32_t t110 = INT32_MAX;
static volatile uint64_t x446 = 140LLU;
static volatile int32_t t111 = 4761738;
int8_t x456 = 36;
uint8_t x459 = 0U;
volatile int32_t t114 = 255797843;
static int32_t x464 = INT32_MIN;
static int32_t t115 = INT32_MIN;
int64_t x471 = -200373304147381LL;
int8_t x481 = INT8_MAX;
int64_t t120 = -2905666717561053129LL;
volatile int32_t x489 = -1;
volatile uint64_t t123 = 128083701862LLU;
volatile uint32_t x503 = 9U;
volatile int64_t t125 = -6961LL;
int8_t x506 = 3;
int8_t x511 = INT8_MIN;
int32_t t128 = 7;
static int16_t x520 = 0;
int64_t x522 = INT64_MIN;
static int32_t x523 = INT32_MIN;
int8_t x527 = 35;
static uint16_t x531 = 6U;
int32_t x535 = -14689543;
uint64_t x543 = 454561692LLU;
volatile int32_t t138 = 1795677;
int16_t x560 = INT16_MIN;
int32_t t139 = 4;
int64_t x562 = INT64_MIN;
int8_t x574 = INT8_MAX;
int16_t x578 = -1;
int8_t x580 = 3;
volatile int32_t t144 = 959692;
static uint16_t x585 = 11U;
static uint16_t x588 = 54U;
int16_t x595 = INT16_MAX;
int32_t t148 = 175430201;
volatile int64_t x604 = 687040LL;
int8_t x619 = INT8_MIN;
int32_t x621 = INT32_MAX;
int16_t x623 = -1;
int64_t x628 = 2410918918788LL;
int64_t x633 = INT64_MIN;
int8_t x636 = INT8_MIN;
int32_t x650 = INT32_MAX;
int32_t x663 = INT32_MIN;
volatile uint64_t t165 = UINT64_MAX;
volatile uint16_t x670 = UINT16_MAX;
int8_t x682 = -15;
static uint16_t x685 = 253U;
int64_t t171 = 46249LL;
int64_t x691 = -1LL;
int16_t x698 = INT16_MAX;
volatile int16_t x701 = INT16_MIN;
int64_t x709 = INT64_MIN;
int8_t x714 = 1;
int32_t t179 = 2;
int64_t x721 = -1LL;
volatile int32_t t181 = 1;
int64_t x729 = 16579156675LL;
uint32_t x744 = UINT32_MAX;
uint32_t t185 = 255322U;
int64_t x745 = INT64_MIN;
uint32_t x748 = 263287U;
uint8_t x752 = 7U;
uint32_t x761 = 18121U;
static int32_t t190 = -30;
volatile uint64_t x765 = UINT64_MAX;
int16_t x767 = INT16_MIN;
int64_t x771 = INT64_MIN;
int32_t t192 = 1;
int32_t t194 = -36;
volatile int32_t x784 = -2088379;
int64_t x786 = INT64_MIN;
static uint16_t x789 = 3509U;
int64_t x794 = -138LL;


void f0(void) {
    	uint32_t x1 = 4U;
	uint64_t x2 = UINT64_MAX;
	int8_t x4 = 1;
	static volatile int32_t t0 = 115354564;

    t0 = (((x1^x2)>x3)*x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 0;
	int32_t x7 = INT32_MIN;
	volatile uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 78850;

    t1 = (((x5^x6)>x7)*x8);

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint64_t x9 = 54793LLU;
	int64_t x12 = -1LL;
	int64_t t2 = 6179401LL;

    t2 = (((x9^x10)>x11)*x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 5140;
	int8_t x14 = 1;
	int8_t x15 = -25;
	uint32_t x16 = 6U;
	static uint32_t t3 = 0U;

    t3 = (((x13^x14)>x15)*x16);

    if (t3 != 6U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	int8_t x18 = INT8_MIN;
	static uint8_t x20 = 20U;
	volatile int32_t t4 = 6;

    t4 = (((x17^x18)>x19)*x20);

    if (t4 != 20) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int16_t x21 = -14;
	volatile int8_t x22 = -1;
	uint64_t x23 = UINT64_MAX;
	int8_t x24 = -1;
	volatile int32_t t5 = 5678992;

    t5 = (((x21^x22)>x23)*x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x27 = INT32_MIN;
	static int64_t t6 = -9314637LL;

    t6 = (((x25^x26)>x27)*x28);

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MAX;
	volatile int8_t x30 = INT8_MIN;
	static int8_t x32 = INT8_MIN;
	volatile int32_t t7 = -1;

    t7 = (((x29^x30)>x31)*x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x34 = INT64_MIN;
	int16_t x36 = -1;
	int32_t t8 = 11;

    t8 = (((x33^x34)>x35)*x36);

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint32_t x39 = 374U;
	volatile int32_t x40 = INT32_MAX;
	int32_t t9 = INT32_MAX;

    t9 = (((x37^x38)>x39)*x40);

    if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	volatile int64_t x42 = -84548990421LL;
	volatile int64_t x43 = -19542886LL;
	volatile int16_t x44 = INT16_MIN;

    t10 = (((x41^x42)>x43)*x44);

    if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x47 = INT8_MIN;
	int32_t t11 = 7;

    t11 = (((x45^x46)>x47)*x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x49 = 18U;
	volatile int32_t x51 = INT32_MIN;
	static uint8_t x52 = 3U;
	volatile int32_t t12 = 0;

    t12 = (((x49^x50)>x51)*x52);

    if (t12 != 3) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = INT8_MAX;
	int8_t x54 = 12;
	int8_t x55 = -1;
	volatile int64_t x56 = INT64_MIN;
	int64_t t13 = INT64_MIN;

    t13 = (((x53^x54)>x55)*x56);

    if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -130510LL;
	int16_t x59 = INT16_MAX;
	int16_t x60 = INT16_MIN;
	static volatile int32_t t14 = 11;

    t14 = (((x57^x58)>x59)*x60);

    if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x62 = 3022;
	int64_t x63 = -27693024LL;
	int64_t x64 = -71LL;
	volatile int64_t t15 = 1367659LL;

    t15 = (((x61^x62)>x63)*x64);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = -4;
	int32_t x66 = INT32_MIN;
	volatile uint64_t x67 = UINT64_MAX;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = -1927761;

    t16 = (((x65^x66)>x67)*x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	int32_t x70 = -1;
	volatile int32_t x72 = 512114;
	int32_t t17 = -6040;

    t17 = (((x69^x70)>x71)*x72);

    if (t17 != 512114) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	static volatile int8_t x74 = INT8_MIN;
	static int64_t x75 = 2283359827LL;
	int32_t x76 = -1;
	volatile int32_t t18 = 3748;

    t18 = (((x73^x74)>x75)*x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x78 = 201610090468LLU;
	volatile int16_t x80 = -1;
	volatile int32_t t19 = -281929;

    t19 = (((x77^x78)>x79)*x80);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x82 = 1151513576488470LL;
	static int16_t x83 = INT16_MAX;
	volatile int32_t t20 = 123;

    t20 = (((x81^x82)>x83)*x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 251162210772980LLU;
	int32_t x86 = -1;
	static volatile int8_t x87 = -1;
	uint64_t x88 = 2435580543723220946LLU;
	static volatile uint64_t t21 = 99384LLU;

    t21 = (((x85^x86)>x87)*x88);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = -1;
	static int32_t x90 = INT32_MIN;
	int8_t x91 = -1;
	uint32_t x92 = 115706U;
	uint32_t t22 = 77678U;

    t22 = (((x89^x90)>x91)*x92);

    if (t22 != 115706U) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	int32_t x94 = INT32_MIN;
	int16_t x95 = INT16_MIN;
	int16_t x96 = INT16_MAX;
	static int32_t t23 = -136668;

    t23 = (((x93^x94)>x95)*x96);

    if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x97 = 4197235780824939902LL;
	int32_t x98 = 979;
	volatile int64_t x99 = INT64_MIN;
	int64_t x100 = INT64_MAX;
	volatile int64_t t24 = INT64_MAX;

    t24 = (((x97^x98)>x99)*x100);

    if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = 1031115;
	uint8_t x102 = UINT8_MAX;
	volatile uint64_t x103 = UINT64_MAX;
	int32_t x104 = INT32_MAX;
	volatile int32_t t25 = 3;

    t25 = (((x101^x102)>x103)*x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 26486LLU;
	uint16_t x106 = UINT16_MAX;
	static int8_t x107 = INT8_MAX;
	int8_t x108 = 0;
	volatile int32_t t26 = -637658;

    t26 = (((x105^x106)>x107)*x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = -116648931639602LL;
	static uint8_t x110 = 54U;
	uint8_t x111 = 5U;
	volatile uint32_t x112 = 19533U;
	uint32_t t27 = 1U;

    t27 = (((x109^x110)>x111)*x112);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x114 = 47076;
	int64_t x115 = 922234419LL;
	int64_t x116 = -30547010670927LL;
	int64_t t28 = 24846414LL;

    t28 = (((x113^x114)>x115)*x116);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	static int64_t x118 = 17076344LL;
	static volatile int16_t x119 = -1;
	uint8_t x120 = 13U;
	volatile int32_t t29 = 255;

    t29 = (((x117^x118)>x119)*x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	int8_t x122 = -52;
	static int16_t x123 = INT16_MIN;
	static volatile uint32_t x124 = UINT32_MAX;

    t30 = (((x121^x122)>x123)*x124);

    if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 4001U;
	volatile int16_t x126 = 30;
	volatile uint32_t x127 = 44866U;
	int8_t x128 = 0;

    t31 = (((x125^x126)>x127)*x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = -1;
	int32_t x131 = -29168026;
	int8_t x132 = INT8_MIN;
	volatile int32_t t32 = 13953;

    t32 = (((x129^x130)>x131)*x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = 578443255;
	int64_t x134 = INT64_MAX;
	uint64_t t33 = 2194978LLU;

    t33 = (((x133^x134)>x135)*x136);

    if (t33 != 1790LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = UINT16_MAX;
	uint32_t x139 = UINT32_MAX;
	static int8_t x140 = -1;
	volatile int32_t t34 = -455;

    t34 = (((x137^x138)>x139)*x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 37839U;
	int8_t x142 = INT8_MIN;
	volatile int16_t x143 = 2;
	int16_t x144 = INT16_MIN;

    t35 = (((x141^x142)>x143)*x144);

    if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = 19147220111540LL;
	int8_t x146 = INT8_MIN;
	volatile int32_t x147 = -1;
	uint64_t x148 = 202893133398837LLU;

    t36 = (((x145^x146)>x147)*x148);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x150 = 5U;
	static int64_t x151 = INT64_MIN;
	int64_t x152 = 111083LL;
	volatile int64_t t37 = -1LL;

    t37 = (((x149^x150)>x151)*x152);

    if (t37 != 111083LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x153 = 3LLU;
	volatile int32_t x154 = -1;
	volatile uint8_t x155 = UINT8_MAX;
	uint32_t x156 = UINT32_MAX;

    t38 = (((x153^x154)>x155)*x156);

    if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x158 = -1;
	static int64_t x159 = INT64_MAX;
	int32_t x160 = -1;
	volatile int32_t t39 = 783085264;

    t39 = (((x157^x158)>x159)*x160);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -638470079663LL;
	int32_t x162 = -6763;
	volatile uint64_t x163 = 56877953LLU;
	static uint16_t x164 = 46U;
	static volatile int32_t t40 = -24388;

    t40 = (((x161^x162)>x163)*x164);

    if (t40 != 46) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 55U;
	static uint16_t x166 = UINT16_MAX;
	uint16_t x167 = 4645U;
	static uint16_t x168 = 0U;
	static volatile int32_t t41 = -13;

    t41 = (((x165^x166)>x167)*x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x170 = INT64_MIN;
	volatile int16_t x172 = 11919;
	static volatile int32_t t42 = 3554;

    t42 = (((x169^x170)>x171)*x172);

    if (t42 != 11919) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	static int64_t x174 = INT64_MIN;
	int32_t x175 = INT32_MIN;
	volatile int16_t x176 = -1;
	volatile int32_t t43 = -2028134;

    t43 = (((x173^x174)>x175)*x176);

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x178 = -1;
	int64_t x179 = 29420189189546794LL;
	int32_t x180 = INT32_MIN;
	volatile int32_t t44 = 40973408;

    t44 = (((x177^x178)>x179)*x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x182 = UINT8_MAX;
	volatile int32_t x183 = -9680;
	int64_t x184 = -11765LL;
	int64_t t45 = 8814LL;

    t45 = (((x181^x182)>x183)*x184);

    if (t45 != -11765LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = UINT16_MAX;
	uint64_t x187 = 12064227LLU;

    t46 = (((x185^x186)>x187)*x188);

    if (t46 != 46) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MIN;
	int8_t x190 = INT8_MIN;
	volatile uint32_t x191 = 19U;
	static volatile int8_t x192 = 58;
	volatile int32_t t47 = -18254557;

    t47 = (((x189^x190)>x191)*x192);

    if (t47 != 58) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MAX;
	uint32_t x194 = 59342U;
	volatile int64_t x195 = 26322LL;
	static int64_t x196 = INT64_MIN;
	volatile int64_t t48 = INT64_MIN;

    t48 = (((x193^x194)>x195)*x196);

    if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x198 = -28453322LL;
	static int64_t x199 = INT64_MIN;
	static int32_t x200 = INT32_MAX;
	static volatile int32_t t49 = INT32_MAX;

    t49 = (((x197^x198)>x199)*x200);

    if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint8_t x201 = 8U;
	int32_t x202 = INT32_MAX;
	int64_t x203 = INT64_MIN;
	int64_t x204 = 29499043651930713LL;
	int64_t t50 = -1919623LL;

    t50 = (((x201^x202)>x203)*x204);

    if (t50 != 29499043651930713LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 0U;
	uint64_t x206 = 21333157317379900LLU;
	int64_t x207 = INT64_MIN;
	int32_t x208 = INT32_MIN;
	int32_t t51 = 1763;

    t51 = (((x205^x206)>x207)*x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MAX;
	int32_t x210 = INT32_MIN;
	volatile int8_t x211 = 5;
	int64_t x212 = INT64_MAX;

    t52 = (((x209^x210)>x211)*x212);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MAX;
	int8_t x214 = INT8_MIN;
	int16_t x215 = -1;
	static int32_t x216 = 40541652;

    t53 = (((x213^x214)>x215)*x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = -47;
	int64_t x218 = INT64_MIN;
	volatile int32_t x219 = INT32_MIN;
	volatile int8_t x220 = -48;
	int32_t t54 = -1;

    t54 = (((x217^x218)>x219)*x220);

    if (t54 != -48) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = -1LL;
	int32_t x222 = -5;
	int64_t x223 = INT64_MIN;
	static uint64_t x224 = UINT64_MAX;
	uint64_t t55 = UINT64_MAX;

    t55 = (((x221^x222)>x223)*x224);

    if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -1LL;
	uint8_t x226 = 8U;
	static int16_t x228 = INT16_MAX;

    t56 = (((x225^x226)>x227)*x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x230 = UINT16_MAX;
	int8_t x231 = INT8_MIN;

    t57 = (((x229^x230)>x231)*x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint64_t x234 = UINT64_MAX;
	uint32_t x236 = UINT32_MAX;
	uint32_t t58 = 10U;

    t58 = (((x233^x234)>x235)*x236);

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = 58920772113281LL;
	int8_t x238 = 1;
	int8_t x239 = -3;
	int32_t x240 = INT32_MIN;
	int32_t t59 = INT32_MIN;

    t59 = (((x237^x238)>x239)*x240);

    if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 1483215326196610739LLU;
	static int64_t x242 = INT64_MIN;
	int64_t x243 = INT64_MIN;
	int32_t x244 = INT32_MAX;
	int32_t t60 = INT32_MAX;

    t60 = (((x241^x242)>x243)*x244);

    if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = UINT32_MAX;
	int8_t x246 = -1;
	volatile uint32_t x248 = 304U;

    t61 = (((x245^x246)>x247)*x248);

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = INT16_MIN;
	uint16_t x250 = 11U;
	uint64_t x251 = UINT64_MAX;
	int8_t x252 = 6;
	int32_t t62 = 6985343;

    t62 = (((x249^x250)>x251)*x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	volatile int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MIN;
	int32_t x256 = INT32_MIN;

    t63 = (((x253^x254)>x255)*x256);

    if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x257 = UINT16_MAX;
	int16_t x258 = -6;
	int32_t x259 = 5;
	int64_t x260 = INT64_MAX;
	static volatile int64_t t64 = -4261884095LL;

    t64 = (((x257^x258)>x259)*x260);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x261 = -1;
	int8_t x262 = -1;
	uint16_t x263 = UINT16_MAX;
	int64_t x264 = -53804297816LL;
	volatile int64_t t65 = 779317531LL;

    t65 = (((x261^x262)>x263)*x264);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x266 = 0;
	int32_t x267 = 59;
	volatile int16_t x268 = -1;
	volatile int32_t t66 = 5689;

    t66 = (((x265^x266)>x267)*x268);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = -44;
	uint8_t x270 = 25U;
	int8_t x271 = -1;
	uint8_t x272 = 4U;

    t67 = (((x269^x270)>x271)*x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x274 = -1;
	static int8_t x275 = INT8_MAX;
	volatile uint32_t t68 = 683782378U;

    t68 = (((x273^x274)>x275)*x276);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x277 = UINT64_MAX;
	uint16_t x278 = UINT16_MAX;
	uint8_t x279 = UINT8_MAX;
	int64_t x280 = INT64_MIN;

    t69 = (((x277^x278)>x279)*x280);

    if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = 115U;
	int16_t x282 = -1;
	uint64_t x284 = UINT64_MAX;

    t70 = (((x281^x282)>x283)*x284);

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int32_t x285 = INT32_MIN;
	int16_t x286 = -1;
	volatile int32_t x287 = INT32_MIN;
	volatile uint32_t t71 = UINT32_MAX;

    t71 = (((x285^x286)>x287)*x288);

    if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = -110;
	volatile int16_t x290 = -1;
	int64_t x291 = INT64_MAX;
	static int8_t x292 = 1;
	int32_t t72 = -3;

    t72 = (((x289^x290)>x291)*x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x294 = 5U;
	static int16_t x295 = INT16_MIN;
	int8_t x296 = -6;
	static int32_t t73 = 35861728;

    t73 = (((x293^x294)>x295)*x296);

    if (t73 != -6) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = 0;
	volatile int16_t x298 = -448;
	uint64_t x299 = UINT64_MAX;
	int32_t t74 = 45973;

    t74 = (((x297^x298)>x299)*x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x301 = 863366379685LLU;
	int16_t x302 = INT16_MIN;
	static int8_t x303 = 15;
	uint32_t t75 = UINT32_MAX;

    t75 = (((x301^x302)>x303)*x304);

    if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 213882U;
	static int8_t x306 = INT8_MIN;
	int8_t x307 = INT8_MIN;
	uint8_t x308 = 0U;
	int32_t t76 = 11866;

    t76 = (((x305^x306)>x307)*x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = 156LL;
	int16_t x311 = INT16_MAX;
	int32_t x312 = -1;
	volatile int32_t t77 = 1090544;

    t77 = (((x309^x310)>x311)*x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x313 = 22284788LLU;
	int8_t x314 = INT8_MAX;
	static int32_t x315 = INT32_MAX;
	volatile int32_t t78 = -582481173;

    t78 = (((x313^x314)>x315)*x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -1;
	int16_t x318 = INT16_MIN;
	uint8_t x319 = 1U;
	uint16_t x320 = 1433U;
	int32_t t79 = -13652354;

    t79 = (((x317^x318)>x319)*x320);

    if (t79 != 1433) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint8_t x321 = 1U;
	uint16_t x322 = 13032U;
	volatile int32_t t80 = 5973;

    t80 = (((x321^x322)>x323)*x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x325 = -2;
	volatile uint16_t x326 = UINT16_MAX;
	int64_t x327 = 162LL;
	static int32_t t81 = 392;

    t81 = (((x325^x326)>x327)*x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = INT8_MAX;
	uint16_t x331 = 120U;
	int8_t x332 = INT8_MIN;
	volatile int32_t t82 = 45478;

    t82 = (((x329^x330)>x331)*x332);

    if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int8_t x333 = INT8_MIN;
	int64_t x334 = INT64_MIN;
	int32_t x335 = INT32_MIN;
	uint16_t x336 = 188U;
	int32_t t83 = 508401495;

    t83 = (((x333^x334)>x335)*x336);

    if (t83 != 188) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x338 = UINT16_MAX;
	volatile int16_t x339 = -156;
	int32_t x340 = INT32_MIN;
	volatile int32_t t84 = INT32_MIN;

    t84 = (((x337^x338)>x339)*x340);

    if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x342 = 11U;
	int32_t x343 = INT32_MIN;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t85 = UINT64_MAX;

    t85 = (((x341^x342)>x343)*x344);

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = 0;
	static int8_t x346 = 4;
	uint8_t x348 = 3U;
	volatile int32_t t86 = 2;

    t86 = (((x345^x346)>x347)*x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MAX;
	uint16_t x350 = UINT16_MAX;
	uint8_t x351 = UINT8_MAX;

    t87 = (((x349^x350)>x351)*x352);

    if (t87 != -20414476LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = 59712;
	int64_t x354 = 499859052LL;
	int16_t x356 = INT16_MIN;
	volatile int32_t t88 = 194681679;

    t88 = (((x353^x354)>x355)*x356);

    if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = UINT32_MAX;
	int64_t x358 = 214862988LL;
	uint16_t x359 = UINT16_MAX;
	static int16_t x360 = INT16_MIN;

    t89 = (((x357^x358)>x359)*x360);

    if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x361 = INT64_MIN;
	static int8_t x362 = INT8_MIN;
	int32_t x363 = INT32_MIN;
	uint16_t x364 = 31U;
	int32_t t90 = -599519;

    t90 = (((x361^x362)>x363)*x364);

    if (t90 != 31) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x366 = -128;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t91 = -4;

    t91 = (((x365^x366)>x367)*x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = UINT64_MAX;
	int64_t x370 = -89364642LL;
	uint8_t x371 = UINT8_MAX;
	uint64_t x372 = 1427951677426230087LLU;

    t92 = (((x369^x370)>x371)*x372);

    if (t92 != 1427951677426230087LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x374 = 763U;
	static int16_t x375 = -15540;
	uint8_t x376 = 0U;
	volatile int32_t t93 = 2552622;

    t93 = (((x373^x374)>x375)*x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x378 = INT32_MAX;
	static uint64_t x379 = UINT64_MAX;
	volatile int16_t x380 = INT16_MAX;
	volatile int32_t t94 = 137999846;

    t94 = (((x377^x378)>x379)*x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	static uint32_t x382 = 394U;
	int32_t x383 = INT32_MIN;
	uint64_t x384 = 637524188788LLU;
	static uint64_t t95 = 8717LLU;

    t95 = (((x381^x382)>x383)*x384);

    if (t95 != 637524188788LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x386 = 1458049U;
	uint64_t x387 = UINT64_MAX;
	uint16_t x388 = 740U;
	int32_t t96 = -3;

    t96 = (((x385^x386)>x387)*x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = -4;
	uint16_t x391 = 2342U;
	int32_t t97 = 6745;

    t97 = (((x389^x390)>x391)*x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MIN;
	static int8_t x394 = 0;
	int32_t x395 = -1;
	static int32_t t98 = -112;

    t98 = (((x393^x394)>x395)*x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MIN;
	int32_t x398 = -155806;
	volatile int32_t x399 = -1023;
	int32_t x400 = INT32_MAX;
	volatile int32_t t99 = INT32_MAX;

    t99 = (((x397^x398)>x399)*x400);

    if (t99 != INT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x401 = 1U;
	int8_t x402 = -1;
	uint16_t x403 = UINT16_MAX;
	volatile uint32_t x404 = 10437623U;
	static uint32_t t100 = 10U;

    t100 = (((x401^x402)>x403)*x404);

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = 34726861278972LLU;
	int16_t x406 = INT16_MIN;
	volatile uint8_t x407 = UINT8_MAX;
	static int8_t x408 = -1;
	int32_t t101 = 0;

    t101 = (((x405^x406)>x407)*x408);

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	int8_t x411 = INT8_MAX;
	volatile uint16_t x412 = 20U;
	static volatile int32_t t102 = -160504;

    t102 = (((x409^x410)>x411)*x412);

    if (t102 != 20) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = -6484;
	volatile int64_t x414 = -1LL;
	static volatile int64_t x416 = INT64_MIN;

    t103 = (((x413^x414)>x415)*x416);

    if (t103 != INT64_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = UINT64_MAX;
	uint8_t x419 = UINT8_MAX;
	int32_t x420 = -1;
	volatile int32_t t104 = 5;

    t104 = (((x417^x418)>x419)*x420);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MAX;
	int8_t x422 = INT8_MIN;
	static int64_t x423 = -1LL;
	uint32_t x424 = UINT32_MAX;
	volatile uint32_t t105 = 0U;

    t105 = (((x421^x422)>x423)*x424);

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	volatile uint64_t x426 = 28824288799761LLU;
	int16_t x427 = -1;
	static int32_t t106 = -111;

    t106 = (((x425^x426)>x427)*x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x429 = UINT16_MAX;
	uint32_t x430 = UINT32_MAX;
	static uint32_t x431 = 155664U;
	int32_t x432 = -12648154;
	volatile int32_t t107 = -2746;

    t107 = (((x429^x430)>x431)*x432);

    if (t107 != -12648154) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = INT64_MAX;
	int32_t x434 = INT32_MAX;
	uint64_t x435 = UINT64_MAX;
	uint32_t x436 = 66086U;
	volatile uint32_t t108 = 127234U;

    t108 = (((x433^x434)>x435)*x436);

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x437 = 25118427U;
	uint64_t x438 = UINT64_MAX;
	volatile int8_t x439 = INT8_MIN;
	int16_t x440 = INT16_MIN;
	volatile int32_t t109 = -133472872;

    t109 = (((x437^x438)>x439)*x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MIN;
	static int16_t x442 = INT16_MIN;
	static int8_t x443 = INT8_MIN;
	static int32_t x444 = INT32_MAX;

    t110 = (((x441^x442)>x443)*x444);

    if (t110 != INT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x445 = INT64_MAX;
	uint64_t x447 = 1189LLU;
	uint8_t x448 = UINT8_MAX;

    t111 = (((x445^x446)>x447)*x448);

    if (t111 != 255) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x449 = UINT8_MAX;
	static int8_t x450 = INT8_MIN;
	int32_t x451 = -2031;
	int16_t x452 = 16;
	int32_t t112 = 1;

    t112 = (((x449^x450)>x451)*x452);

    if (t112 != 16) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x453 = 6U;
	int64_t x454 = 23695158200310975LL;
	static uint16_t x455 = 2U;
	volatile int32_t t113 = 8351;

    t113 = (((x453^x454)>x455)*x456);

    if (t113 != 36) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = -1;
	int32_t x458 = -1;
	static int16_t x460 = INT16_MAX;

    t114 = (((x457^x458)>x459)*x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = 8124648LL;
	volatile uint8_t x462 = 7U;
	static volatile uint8_t x463 = 10U;

    t115 = (((x461^x462)>x463)*x464);

    if (t115 != INT32_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x465 = 2U;
	static uint16_t x466 = 16144U;
	int8_t x467 = -1;
	volatile int32_t x468 = INT32_MIN;
	int32_t t116 = INT32_MIN;

    t116 = (((x465^x466)>x467)*x468);

    if (t116 != INT32_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = 12650571803LL;
	int64_t x470 = INT64_MIN;
	int16_t x472 = INT16_MIN;
	static int32_t t117 = -111;

    t117 = (((x469^x470)>x471)*x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 3U;
	static uint16_t x474 = UINT16_MAX;
	static int32_t x475 = -654535316;
	static volatile uint64_t x476 = 100242986LLU;
	uint64_t t118 = 53LLU;

    t118 = (((x473^x474)>x475)*x476);

    if (t118 != 100242986LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = UINT64_MAX;
	int16_t x478 = INT16_MIN;
	static int8_t x479 = INT8_MIN;
	int8_t x480 = -1;
	int32_t t119 = 529;

    t119 = (((x477^x478)>x479)*x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x482 = -1;
	int32_t x483 = INT32_MAX;
	static int64_t x484 = INT64_MIN;

    t120 = (((x481^x482)>x483)*x484);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = UINT8_MAX;
	uint64_t x486 = 106906LLU;
	int64_t x487 = -40LL;
	volatile int32_t x488 = -5180;
	int32_t t121 = 3595;

    t121 = (((x485^x486)>x487)*x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x490 = UINT16_MAX;
	static uint16_t x491 = UINT16_MAX;
	uint64_t x492 = 1856365949426171895LLU;
	static uint64_t t122 = 1930632522788786LLU;

    t122 = (((x489^x490)>x491)*x492);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = 1630803536LLU;
	uint32_t x494 = 475887U;
	static int64_t x495 = 1555LL;
	volatile uint64_t x496 = 1248268412316428LLU;

    t123 = (((x493^x494)>x495)*x496);

    if (t123 != 1248268412316428LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MAX;
	static int64_t x498 = INT64_MIN;
	static uint16_t x499 = UINT16_MAX;
	int8_t x500 = INT8_MIN;
	int32_t t124 = -505;

    t124 = (((x497^x498)>x499)*x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x501 = 504U;
	int64_t x502 = INT64_MAX;
	volatile int64_t x504 = -1LL;

    t125 = (((x501^x502)>x503)*x504);

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x505 = 23U;
	int16_t x507 = INT16_MIN;
	static int16_t x508 = -1;
	volatile int32_t t126 = -220497;

    t126 = (((x505^x506)>x507)*x508);

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x509 = INT16_MAX;
	uint16_t x510 = 19U;
	volatile int64_t x512 = -1LL;
	int64_t t127 = -8375560224223LL;

    t127 = (((x509^x510)>x511)*x512);

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MIN;
	uint32_t x514 = 8638U;
	volatile int8_t x515 = 7;
	int32_t x516 = -1;

    t128 = (((x513^x514)>x515)*x516);

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x517 = INT32_MAX;
	uint16_t x518 = 17U;
	volatile uint64_t x519 = 1LLU;
	int32_t t129 = -1030905741;

    t129 = (((x517^x518)>x519)*x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x521 = INT8_MIN;
	int64_t x524 = INT64_MIN;
	int64_t t130 = INT64_MIN;

    t130 = (((x521^x522)>x523)*x524);

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int16_t x525 = 4454;
	uint64_t x526 = UINT64_MAX;
	static int32_t x528 = 0;
	int32_t t131 = 361719;

    t131 = (((x525^x526)>x527)*x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint16_t x529 = 8240U;
	volatile uint64_t x530 = UINT64_MAX;
	volatile int64_t x532 = -1LL;
	int64_t t132 = 4411960670438119065LL;

    t132 = (((x529^x530)>x531)*x532);

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x533 = INT32_MIN;
	int16_t x534 = INT16_MAX;
	uint64_t x536 = UINT64_MAX;
	uint64_t t133 = 178857373653LLU;

    t133 = (((x533^x534)>x535)*x536);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = 7;
	uint32_t x538 = 4782U;
	static int32_t x539 = INT32_MIN;
	int64_t x540 = INT64_MIN;
	int64_t t134 = 900LL;

    t134 = (((x537^x538)>x539)*x540);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = -5;
	uint8_t x542 = 68U;
	int16_t x544 = INT16_MIN;
	volatile int32_t t135 = 3;

    t135 = (((x541^x542)>x543)*x544);

    if (t135 != -32768) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = 6;
	int32_t x546 = INT32_MIN;
	volatile uint32_t x547 = UINT32_MAX;
	static volatile int8_t x548 = INT8_MAX;
	static int32_t t136 = -21374;

    t136 = (((x545^x546)>x547)*x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = -12157;
	uint32_t x550 = 124U;
	int64_t x551 = INT64_MAX;
	static volatile uint16_t x552 = 2347U;
	volatile int32_t t137 = 10757;

    t137 = (((x549^x550)>x551)*x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	int16_t x554 = INT16_MIN;
	static int64_t x555 = -466355152594LL;
	static uint8_t x556 = UINT8_MAX;

    t138 = (((x553^x554)>x555)*x556);

    if (t138 != 255) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x557 = INT16_MAX;
	int8_t x558 = -1;
	int64_t x559 = INT64_MIN;

    t139 = (((x557^x558)>x559)*x560);

    if (t139 != -32768) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = 935800184384LL;
	volatile uint16_t x563 = UINT16_MAX;
	static volatile uint64_t x564 = UINT64_MAX;
	uint64_t t140 = 14441351943LLU;

    t140 = (((x561^x562)>x563)*x564);

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = -1;
	uint8_t x566 = 6U;
	uint16_t x567 = UINT16_MAX;
	int16_t x568 = -1;
	int32_t t141 = -1;

    t141 = (((x565^x566)>x567)*x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = UINT8_MAX;
	volatile uint32_t x570 = 13U;
	volatile int16_t x571 = INT16_MAX;
	int32_t x572 = INT32_MIN;
	int32_t t142 = 41;

    t142 = (((x569^x570)>x571)*x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = 0;
	static int64_t x575 = INT64_MIN;
	static uint16_t x576 = 94U;
	volatile int32_t t143 = -46142066;

    t143 = (((x573^x574)>x575)*x576);

    if (t143 != 94) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = UINT16_MAX;
	uint64_t x579 = UINT64_MAX;

    t144 = (((x577^x578)>x579)*x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x581 = INT8_MAX;
	uint32_t x582 = UINT32_MAX;
	uint64_t x583 = 215LLU;
	int64_t x584 = INT64_MAX;
	volatile int64_t t145 = INT64_MAX;

    t145 = (((x581^x582)>x583)*x584);

    if (t145 != INT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int32_t x586 = -1;
	int8_t x587 = 1;
	int32_t t146 = 119486;

    t146 = (((x585^x586)>x587)*x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = 6486672LLU;
	static uint64_t x590 = 23701745436598LLU;
	static uint8_t x591 = UINT8_MAX;
	volatile int64_t x592 = INT64_MIN;
	volatile int64_t t147 = INT64_MIN;

    t147 = (((x589^x590)>x591)*x592);

    if (t147 != INT64_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint8_t x593 = UINT8_MAX;
	static int32_t x594 = INT32_MIN;
	int16_t x596 = INT16_MIN;

    t148 = (((x593^x594)>x595)*x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MIN;
	int8_t x598 = -1;
	int8_t x599 = INT8_MIN;
	static int16_t x600 = -1722;
	int32_t t149 = 2036;

    t149 = (((x597^x598)>x599)*x600);

    if (t149 != -1722) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = 1U;
	volatile int16_t x602 = -1;
	static uint16_t x603 = UINT16_MAX;
	volatile int64_t t150 = -111248924210LL;

    t150 = (((x601^x602)>x603)*x604);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = -1;
	int16_t x606 = -5;
	uint64_t x607 = 3LLU;
	int8_t x608 = -6;
	int32_t t151 = -1;

    t151 = (((x605^x606)>x607)*x608);

    if (t151 != -6) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x609 = 708064106U;
	static uint8_t x610 = UINT8_MAX;
	static int16_t x611 = INT16_MIN;
	int16_t x612 = INT16_MIN;
	volatile int32_t t152 = 8083547;

    t152 = (((x609^x610)>x611)*x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x613 = UINT64_MAX;
	int32_t x614 = -214881;
	uint8_t x615 = 58U;
	int8_t x616 = -49;
	volatile int32_t t153 = -3790435;

    t153 = (((x613^x614)>x615)*x616);

    if (t153 != -49) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = UINT32_MAX;
	int32_t x618 = INT32_MAX;
	int32_t x620 = 23798;
	int32_t t154 = -347;

    t154 = (((x617^x618)>x619)*x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x622 = INT64_MIN;
	int8_t x624 = INT8_MIN;
	static volatile int32_t t155 = -1690;

    t155 = (((x621^x622)>x623)*x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x625 = -1;
	volatile int64_t x626 = INT64_MAX;
	static volatile int32_t x627 = INT32_MIN;
	int64_t t156 = -1169641834880324389LL;

    t156 = (((x625^x626)>x627)*x628);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint16_t x629 = 2U;
	static int16_t x630 = 7342;
	int32_t x631 = INT32_MIN;
	volatile int32_t x632 = 2463270;
	int32_t t157 = -868152004;

    t157 = (((x629^x630)>x631)*x632);

    if (t157 != 2463270) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint64_t x634 = UINT64_MAX;
	volatile int64_t x635 = INT64_MIN;
	int32_t t158 = 173;

    t158 = (((x633^x634)>x635)*x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = 131636136U;
	static int64_t x638 = INT64_MIN;
	int64_t x639 = -1LL;
	static int16_t x640 = INT16_MIN;
	int32_t t159 = 1084;

    t159 = (((x637^x638)>x639)*x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MAX;
	int32_t x642 = INT32_MIN;
	static uint16_t x643 = UINT16_MAX;
	uint64_t x644 = 9631681525477664LLU;
	static volatile uint64_t t160 = 1025320817228LLU;

    t160 = (((x641^x642)>x643)*x644);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MIN;
	static int64_t x646 = INT64_MAX;
	uint32_t x647 = 393958U;
	uint32_t x648 = 242123U;
	uint32_t t161 = 3U;

    t161 = (((x645^x646)>x647)*x648);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x649 = 27244U;
	uint32_t x651 = UINT32_MAX;
	int32_t x652 = INT32_MAX;
	static volatile int32_t t162 = 36;

    t162 = (((x649^x650)>x651)*x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = UINT8_MAX;
	uint16_t x654 = 9190U;
	static volatile int32_t x655 = -176;
	int32_t x656 = INT32_MIN;
	volatile int32_t t163 = INT32_MIN;

    t163 = (((x653^x654)>x655)*x656);

    if (t163 != INT32_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x657 = 118U;
	uint8_t x658 = 47U;
	uint8_t x659 = 96U;
	int64_t x660 = INT64_MIN;
	int64_t t164 = 234076626604313LL;

    t164 = (((x657^x658)>x659)*x660);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x661 = 96U;
	int8_t x662 = INT8_MAX;
	static uint64_t x664 = UINT64_MAX;

    t165 = (((x661^x662)>x663)*x664);

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x665 = 2476U;
	int8_t x666 = INT8_MIN;
	int64_t x667 = INT64_MAX;
	static uint32_t x668 = 1136958U;
	uint32_t t166 = 4024U;

    t166 = (((x665^x666)>x667)*x668);

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = 79U;
	volatile int32_t x671 = -1;
	int64_t x672 = INT64_MIN;
	volatile int64_t t167 = INT64_MIN;

    t167 = (((x669^x670)>x671)*x672);

    if (t167 != INT64_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -13;
	int64_t x674 = INT64_MAX;
	static int16_t x675 = -1;
	volatile int16_t x676 = -1;
	volatile int32_t t168 = 1485192;

    t168 = (((x673^x674)>x675)*x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x677 = 507LLU;
	int8_t x678 = INT8_MAX;
	static int8_t x679 = INT8_MAX;
	volatile int32_t x680 = INT32_MIN;
	int32_t t169 = INT32_MIN;

    t169 = (((x677^x678)>x679)*x680);

    if (t169 != INT32_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = -1;
	static uint64_t x683 = 15842932LLU;
	uint64_t x684 = 61511LLU;
	volatile uint64_t t170 = 4580730LLU;

    t170 = (((x681^x682)>x683)*x684);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x686 = INT64_MIN;
	int8_t x687 = INT8_MIN;
	int64_t x688 = -134192660LL;

    t171 = (((x685^x686)>x687)*x688);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = INT64_MIN;
	int64_t x690 = INT64_MAX;
	int32_t x692 = INT32_MAX;
	static volatile int32_t t172 = -644206667;

    t172 = (((x689^x690)>x691)*x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x693 = INT32_MIN;
	int8_t x694 = INT8_MIN;
	volatile int16_t x695 = -95;
	int64_t x696 = -62LL;
	volatile int64_t t173 = 2754987LL;

    t173 = (((x693^x694)>x695)*x696);

    if (t173 != -62LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	int64_t x699 = -1LL;
	uint16_t x700 = UINT16_MAX;
	volatile int32_t t174 = -116;

    t174 = (((x697^x698)>x699)*x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x702 = INT8_MIN;
	int8_t x703 = INT8_MIN;
	int64_t x704 = INT64_MAX;
	int64_t t175 = INT64_MAX;

    t175 = (((x701^x702)>x703)*x704);

    if (t175 != INT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x705 = -1;
	static uint8_t x706 = 5U;
	int64_t x707 = 2064506125581LL;
	static int32_t x708 = INT32_MIN;
	int32_t t176 = 16800881;

    t176 = (((x705^x706)>x707)*x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x710 = INT64_MIN;
	int64_t x711 = -7359638LL;
	uint8_t x712 = UINT8_MAX;
	int32_t t177 = -1;

    t177 = (((x709^x710)>x711)*x712);

    if (t177 != 255) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MIN;
	int16_t x715 = INT16_MAX;
	int32_t x716 = 27;
	int32_t t178 = 424;

    t178 = (((x713^x714)>x715)*x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MAX;
	uint16_t x718 = 356U;
	volatile int8_t x719 = INT8_MAX;
	volatile int8_t x720 = -1;

    t179 = (((x717^x718)>x719)*x720);

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x722 = -1;
	int8_t x723 = INT8_MIN;
	int8_t x724 = INT8_MAX;
	volatile int32_t t180 = -912;

    t180 = (((x721^x722)>x723)*x724);

    if (t180 != 127) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = -3;
	uint8_t x726 = 3U;
	static int64_t x727 = -1454575583LL;
	int16_t x728 = 5981;

    t181 = (((x725^x726)>x727)*x728);

    if (t181 != 5981) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x730 = -1;
	volatile uint64_t x731 = 4LLU;
	static uint8_t x732 = UINT8_MAX;
	volatile int32_t t182 = 21;

    t182 = (((x729^x730)>x731)*x732);

    if (t182 != 255) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x733 = UINT64_MAX;
	int16_t x734 = -896;
	static int16_t x735 = INT16_MIN;
	static int8_t x736 = 0;
	int32_t t183 = -20504380;

    t183 = (((x733^x734)>x735)*x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MIN;
	volatile int8_t x738 = -1;
	uint16_t x739 = UINT16_MAX;
	static int8_t x740 = -1;
	volatile int32_t t184 = 20;

    t184 = (((x737^x738)>x739)*x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x741 = 700892669206785676LLU;
	int64_t x742 = INT64_MIN;
	int8_t x743 = -6;

    t185 = (((x741^x742)>x743)*x744);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x746 = 1855262581890601LLU;
	volatile uint64_t x747 = UINT64_MAX;
	uint32_t t186 = 2776U;

    t186 = (((x745^x746)>x747)*x748);

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x749 = INT32_MAX;
	uint16_t x750 = 180U;
	volatile int16_t x751 = INT16_MIN;
	volatile int32_t t187 = 0;

    t187 = (((x749^x750)>x751)*x752);

    if (t187 != 7) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MIN;
	static int8_t x754 = -1;
	int32_t x755 = -57;
	int8_t x756 = 12;
	int32_t t188 = -15;

    t188 = (((x753^x754)>x755)*x756);

    if (t188 != 12) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	volatile int32_t x758 = INT32_MIN;
	int8_t x759 = -1;
	static uint8_t x760 = 77U;
	static int32_t t189 = -5973328;

    t189 = (((x757^x758)>x759)*x760);

    if (t189 != 77) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x762 = 239885LL;
	static volatile uint8_t x763 = UINT8_MAX;
	int8_t x764 = INT8_MAX;

    t190 = (((x761^x762)>x763)*x764);

    if (t190 != 127) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x766 = 230;
	static uint32_t x768 = 7U;
	uint32_t t191 = 35U;

    t191 = (((x765^x766)>x767)*x768);

    if (t191 != 7U) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MAX;
	int32_t x770 = 48;
	int16_t x772 = INT16_MIN;

    t192 = (((x769^x770)>x771)*x772);

    if (t192 != -32768) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = UINT64_MAX;
	static int8_t x774 = -1;
	static volatile int16_t x775 = INT16_MAX;
	static uint16_t x776 = 20U;
	int32_t t193 = -2292;

    t193 = (((x773^x774)>x775)*x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 13654U;
	uint32_t x778 = 115231590U;
	static int8_t x779 = 0;
	volatile uint8_t x780 = UINT8_MAX;

    t194 = (((x777^x778)>x779)*x780);

    if (t194 != 255) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	int16_t x782 = INT16_MIN;
	uint8_t x783 = 13U;
	int32_t t195 = 0;

    t195 = (((x781^x782)>x783)*x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 650474104466LLU;
	int64_t x787 = INT64_MIN;
	int8_t x788 = -1;
	int32_t t196 = -9134521;

    t196 = (((x785^x786)>x787)*x788);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint16_t x790 = 3133U;
	uint8_t x791 = UINT8_MAX;
	int8_t x792 = 1;
	int32_t t197 = -203298;

    t197 = (((x789^x790)>x791)*x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = -85171285LL;
	int16_t x795 = 1;
	int32_t x796 = -38;
	volatile int32_t t198 = -992544267;

    t198 = (((x793^x794)>x795)*x796);

    if (t198 != -38) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MIN;
	int16_t x798 = INT16_MIN;
	int64_t x799 = -62LL;
	int16_t x800 = INT16_MIN;
	static volatile int32_t t199 = -716816254;

    t199 = (((x797^x798)>x799)*x800);

    if (t199 != -32768) { NG(); } else { ; }
	
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


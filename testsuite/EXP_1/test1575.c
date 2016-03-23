
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

int64_t x1 = INT64_MIN;
int16_t x4 = -1;
int32_t t0 = 1;
int64_t x7 = INT64_MIN;
int64_t x8 = INT64_MIN;
volatile int64_t x15 = INT64_MIN;
static int8_t x16 = INT8_MIN;
static volatile int32_t t4 = -20;
uint16_t x22 = UINT16_MAX;
uint8_t x23 = 15U;
volatile uint16_t x27 = 13U;
uint8_t x34 = UINT8_MAX;
int16_t x35 = -1;
uint32_t x39 = 83069960U;
uint16_t x41 = 6U;
int32_t x45 = INT32_MAX;
uint32_t x48 = UINT32_MAX;
uint8_t x52 = UINT8_MAX;
static int32_t x55 = -245;
volatile int32_t t13 = -780699;
volatile int16_t x58 = -1;
volatile int16_t x60 = -124;
static int32_t t14 = 333692341;
volatile int64_t x66 = INT64_MIN;
static int16_t x71 = INT16_MIN;
int8_t x72 = INT8_MAX;
static uint16_t x75 = 1852U;
volatile int32_t t18 = 1;
volatile int64_t x79 = INT64_MIN;
volatile int8_t x80 = -22;
uint16_t x95 = 4U;
volatile int32_t t22 = 358;
int64_t x100 = -1LL;
volatile int32_t x101 = 20808;
static uint8_t x103 = 4U;
volatile int32_t t24 = -16;
volatile int16_t x107 = -373;
int32_t x108 = 54;
volatile int64_t x111 = INT64_MIN;
int32_t x117 = INT32_MIN;
volatile int32_t t29 = -107033884;
uint64_t x132 = 31763LLU;
static volatile int32_t x137 = 82;
int8_t x138 = -1;
volatile int32_t t34 = -2;
int16_t x153 = INT16_MIN;
int64_t x157 = -966236956050210627LL;
volatile int32_t x158 = INT32_MAX;
volatile uint16_t x159 = 10443U;
volatile int32_t t40 = -1890330;
int32_t x171 = -46170;
volatile int64_t x178 = 59071547LL;
uint16_t x180 = 117U;
int32_t t43 = -1;
static int8_t x186 = -1;
int8_t x188 = INT8_MIN;
int32_t t46 = -1974;
uint32_t x195 = 14615U;
uint8_t x201 = 1U;
uint16_t x205 = 1358U;
uint8_t x208 = UINT8_MAX;
int32_t x211 = -1;
int32_t x213 = -1;
uint8_t x215 = 43U;
int8_t x220 = INT8_MIN;
volatile uint64_t x222 = 6891LLU;
uint16_t x223 = 29271U;
static volatile uint16_t x224 = 5113U;
uint8_t x225 = 0U;
static volatile int8_t x227 = -1;
int8_t x236 = -36;
static int32_t t57 = -3735;
int64_t x237 = 950838986420595LL;
int32_t x240 = -1;
volatile int8_t x243 = INT8_MAX;
volatile uint8_t x248 = UINT8_MAX;
int32_t x249 = INT32_MIN;
int16_t x252 = INT16_MIN;
uint16_t x253 = 6U;
int16_t x255 = 103;
static int16_t x266 = -5;
volatile int32_t t65 = -593687;
int32_t x271 = -1;
volatile int8_t x272 = -1;
static int32_t t67 = -20411;
int32_t x279 = -48645497;
static uint8_t x280 = 6U;
volatile int32_t x282 = -15650073;
uint32_t x283 = UINT32_MAX;
static int32_t t70 = 41476330;
int32_t x291 = -27;
static volatile uint32_t x295 = 6950U;
uint8_t x300 = UINT8_MAX;
uint8_t x307 = 72U;
int32_t t77 = -63;
uint8_t x320 = 115U;
int8_t x324 = -1;
static int32_t x329 = INT32_MIN;
volatile int8_t x332 = 10;
int16_t x334 = INT16_MIN;
volatile int32_t t83 = 1294383;
int16_t x342 = INT16_MAX;
volatile int32_t x347 = INT32_MAX;
static int64_t x348 = INT64_MAX;
int32_t t85 = -8743880;
uint16_t x353 = 2U;
volatile uint64_t x354 = 50971897539698800LLU;
static int16_t x368 = INT16_MAX;
static int8_t x370 = -54;
static volatile int32_t t91 = 1791;
int32_t x373 = -1;
uint32_t x376 = 66598U;
static int16_t x378 = -1;
static int64_t x382 = INT64_MIN;
int16_t x383 = INT16_MIN;
int32_t t94 = -15291385;
volatile uint16_t x385 = 20U;
static int32_t t95 = -60;
int64_t x397 = INT64_MAX;
static uint32_t x400 = 219U;
int8_t x401 = INT8_MIN;
volatile int32_t t99 = 151;
int32_t x407 = INT32_MAX;
uint64_t x409 = 1482842LLU;
static int16_t x413 = INT16_MIN;
static int32_t x423 = 263736;
int32_t x424 = INT32_MIN;
static int64_t x428 = 6223688168LL;
int16_t x444 = 25;
uint32_t x445 = UINT32_MAX;
static int16_t x447 = -1;
volatile int64_t x458 = 1LL;
volatile int64_t x462 = INT64_MIN;
static int32_t x464 = INT32_MAX;
volatile int32_t x466 = -1;
volatile int32_t x470 = INT32_MAX;
int32_t t116 = -30;
int8_t x474 = 1;
int8_t x478 = -12;
int64_t x483 = -16452177LL;
int64_t x484 = INT64_MIN;
volatile int32_t t119 = 14170;
int32_t t120 = -31;
int32_t t121 = -12548752;
int64_t x500 = INT64_MAX;
volatile uint8_t x504 = 1U;
int32_t x506 = INT32_MAX;
uint16_t x508 = 7703U;
int64_t x513 = INT64_MIN;
uint32_t x525 = UINT32_MAX;
uint64_t x536 = UINT64_MAX;
volatile int32_t t133 = -154823317;
int64_t x545 = -1LL;
static int8_t x553 = 2;
int64_t x554 = INT64_MIN;
static int32_t x558 = -1;
volatile int32_t t139 = 5643;
static int16_t x567 = -1558;
uint8_t x572 = UINT8_MAX;
static volatile int64_t x574 = INT64_MIN;
int32_t t145 = 110;
int32_t t146 = 106537057;
volatile int32_t x603 = -1;
uint64_t x604 = UINT64_MAX;
int32_t t149 = -3;
static int16_t x623 = INT16_MIN;
volatile int32_t t155 = -34;
static uint8_t x633 = UINT8_MAX;
int16_t x652 = INT16_MIN;
int32_t x656 = 47;
int64_t x659 = INT64_MIN;
int16_t x663 = -1;
static volatile uint64_t x664 = UINT64_MAX;
volatile int64_t x666 = -1LL;
static uint32_t x667 = UINT32_MAX;
int8_t x668 = INT8_MIN;
int32_t t166 = -5;
uint16_t x680 = 730U;
volatile int8_t x690 = 0;
volatile int16_t x694 = INT16_MIN;
int64_t x697 = -29336891267LL;
int64_t x702 = 4571127LL;
volatile uint16_t x707 = UINT16_MAX;
int64_t x708 = 3699119448LL;
int16_t x718 = -1;
uint64_t x723 = UINT64_MAX;
int16_t x728 = 83;
volatile int32_t t182 = 3785152;
int8_t x744 = INT8_MIN;
int32_t x747 = INT32_MIN;
static volatile int32_t t184 = -890776567;
uint64_t x753 = 5226543096638715LLU;
uint64_t x754 = 87929372936894136LLU;
volatile uint8_t x773 = 84U;
uint8_t x774 = 8U;
volatile int32_t x776 = -1;
uint32_t x779 = 756U;
int32_t x780 = INT32_MAX;
int32_t x791 = -15786051;
int32_t t194 = 948002371;
static uint16_t x793 = 425U;
static int32_t t197 = -514;
volatile int8_t x809 = INT8_MIN;


void f0(void) {
    	int32_t x2 = INT32_MIN;
	static int16_t x3 = -5399;

    t0 = (((x1>x2)+x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	uint8_t x6 = UINT8_MAX;
	int32_t t1 = -20157052;

    t1 = (((x5>x6)+x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = 264501919092526526LL;
	int64_t x10 = INT64_MIN;
	static int8_t x11 = INT8_MIN;
	uint64_t x12 = 28847503LLU;
	int32_t t2 = 3427;

    t2 = (((x9>x10)+x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 0U;
	volatile uint32_t x14 = UINT32_MAX;
	int32_t t3 = 45450;

    t3 = (((x13>x14)+x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	int8_t x18 = -1;
	int8_t x19 = INT8_MAX;
	static int16_t x20 = 29;

    t4 = (((x17>x18)+x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MAX;
	volatile int16_t x24 = INT16_MIN;
	int32_t t5 = -83;

    t5 = (((x21>x22)+x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MAX;
	int16_t x26 = INT16_MAX;
	uint32_t x28 = 237031U;
	volatile int32_t t6 = 3;

    t6 = (((x25>x26)+x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 3;
	static volatile int64_t x30 = INT64_MAX;
	static int16_t x31 = INT16_MAX;
	int16_t x32 = 30;
	static int32_t t7 = -27665;

    t7 = (((x29>x30)+x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = -1;
	int16_t x36 = -1;
	volatile int32_t t8 = -495683692;

    t8 = (((x33>x34)+x35)!=x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = -1LL;
	int64_t x38 = -662916233LL;
	uint32_t x40 = UINT32_MAX;
	volatile int32_t t9 = 339038;

    t9 = (((x37>x38)+x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint8_t x42 = UINT8_MAX;
	volatile int8_t x43 = INT8_MAX;
	static int32_t x44 = INT32_MIN;
	int32_t t10 = 1700468;

    t10 = (((x41>x42)+x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x46 = INT16_MIN;
	uint8_t x47 = 50U;
	int32_t t11 = -1038785;

    t11 = (((x45>x46)+x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x49 = 116644U;
	int8_t x50 = 40;
	int32_t x51 = INT32_MIN;
	volatile int32_t t12 = -260523065;

    t12 = (((x49>x50)+x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x53 = INT32_MAX;
	int64_t x54 = INT64_MIN;
	int32_t x56 = -1;

    t13 = (((x53>x54)+x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -29320318;
	int32_t x59 = -1;

    t14 = (((x57>x58)+x59)!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -1;
	int32_t x62 = -415;
	int8_t x63 = -12;
	int64_t x64 = INT64_MIN;
	volatile int32_t t15 = 35302;

    t15 = (((x61>x62)+x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -1;
	volatile int64_t x67 = INT64_MIN;
	int8_t x68 = -1;
	static volatile int32_t t16 = -254822;

    t16 = (((x65>x66)+x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 3599U;
	volatile uint16_t x70 = UINT16_MAX;
	static int32_t t17 = -794354020;

    t17 = (((x69>x70)+x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x73 = 1;
	uint8_t x74 = 2U;
	int64_t x76 = -1LL;

    t18 = (((x73>x74)+x75)!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MAX;
	int32_t x78 = INT32_MIN;
	int32_t t19 = -19;

    t19 = (((x77>x78)+x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x81 = INT8_MIN;
	uint16_t x82 = 6101U;
	uint8_t x83 = 1U;
	int64_t x84 = INT64_MIN;
	volatile int32_t t20 = -3473736;

    t20 = (((x81>x82)+x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 43U;
	uint16_t x86 = UINT16_MAX;
	volatile int64_t x87 = -1LL;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 0;

    t21 = (((x85>x86)+x87)!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x93 = UINT16_MAX;
	static int64_t x94 = INT64_MAX;
	volatile uint16_t x96 = 2304U;

    t22 = (((x93>x94)+x95)!=x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = 41738032LL;
	int16_t x98 = 3615;
	static int32_t x99 = 437239744;
	static int32_t t23 = -52;

    t23 = (((x97>x98)+x99)!=x100);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x102 = -987;
	volatile int8_t x104 = -5;

    t24 = (((x101>x102)+x103)!=x104);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint16_t x105 = 383U;
	int8_t x106 = INT8_MIN;
	static int32_t t25 = -390;

    t25 = (((x105>x106)+x107)!=x108);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x109 = INT8_MIN;
	volatile int64_t x110 = INT64_MIN;
	static int64_t x112 = -7364769001288187LL;
	volatile int32_t t26 = 14183751;

    t26 = (((x109>x110)+x111)!=x112);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = INT32_MIN;
	uint8_t x114 = UINT8_MAX;
	volatile int32_t x115 = INT32_MIN;
	static int16_t x116 = INT16_MAX;
	static int32_t t27 = 155;

    t27 = (((x113>x114)+x115)!=x116);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x118 = 444228026920104239LL;
	int8_t x119 = INT8_MIN;
	static int8_t x120 = INT8_MIN;
	int32_t t28 = 116133;

    t28 = (((x117>x118)+x119)!=x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x121 = 735U;
	int8_t x122 = 17;
	uint64_t x123 = 0LLU;
	int8_t x124 = INT8_MAX;

    t29 = (((x121>x122)+x123)!=x124);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x125 = UINT32_MAX;
	volatile int16_t x126 = 70;
	int8_t x127 = INT8_MAX;
	int8_t x128 = INT8_MIN;
	static int32_t t30 = -455;

    t30 = (((x125>x126)+x127)!=x128);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x129 = INT32_MIN;
	uint32_t x130 = UINT32_MAX;
	int64_t x131 = INT64_MAX;
	volatile int32_t t31 = 3586040;

    t31 = (((x129>x130)+x131)!=x132);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = INT8_MAX;
	int8_t x134 = INT8_MIN;
	static int8_t x135 = INT8_MAX;
	uint8_t x136 = 7U;
	volatile int32_t t32 = 153035815;

    t32 = (((x133>x134)+x135)!=x136);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x139 = UINT8_MAX;
	uint8_t x140 = 21U;
	volatile int32_t t33 = 6;

    t33 = (((x137>x138)+x139)!=x140);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x141 = 216494U;
	int16_t x142 = -1;
	int32_t x143 = INT32_MAX;
	int32_t x144 = -1;

    t34 = (((x141>x142)+x143)!=x144);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x145 = 1U;
	volatile int16_t x146 = INT16_MAX;
	int16_t x147 = -36;
	volatile int8_t x148 = INT8_MIN;
	static volatile int32_t t35 = -2652730;

    t35 = (((x145>x146)+x147)!=x148);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = -111175455419233LL;
	uint64_t x150 = UINT64_MAX;
	volatile int16_t x151 = INT16_MAX;
	uint32_t x152 = UINT32_MAX;
	int32_t t36 = 0;

    t36 = (((x149>x150)+x151)!=x152);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x154 = -1;
	int16_t x155 = INT16_MAX;
	uint8_t x156 = 1U;
	int32_t t37 = -4940017;

    t37 = (((x153>x154)+x155)!=x156);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x160 = INT16_MIN;
	int32_t t38 = 447701;

    t38 = (((x157>x158)+x159)!=x160);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = 4100;
	uint64_t x162 = 80944326LLU;
	static uint16_t x163 = UINT16_MAX;
	volatile int16_t x164 = INT16_MIN;
	int32_t t39 = 148;

    t39 = (((x161>x162)+x163)!=x164);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x165 = 46U;
	volatile int32_t x166 = INT32_MAX;
	int32_t x167 = -1;
	int64_t x168 = INT64_MIN;

    t40 = (((x165>x166)+x167)!=x168);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x169 = 168;
	int64_t x170 = INT64_MIN;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t41 = 1;

    t41 = (((x169>x170)+x171)!=x172);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x173 = 2181992472LLU;
	static int16_t x174 = -188;
	volatile uint64_t x175 = UINT64_MAX;
	int64_t x176 = INT64_MAX;
	int32_t t42 = -1046590496;

    t42 = (((x173>x174)+x175)!=x176);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x177 = -19920;
	static int32_t x179 = INT32_MAX;

    t43 = (((x177>x178)+x179)!=x180);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x181 = 3275U;
	int16_t x182 = INT16_MIN;
	int32_t x183 = -2;
	static uint64_t x184 = UINT64_MAX;
	volatile int32_t t44 = 21403;

    t44 = (((x181>x182)+x183)!=x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x185 = INT64_MIN;
	static uint8_t x187 = 0U;
	static volatile int32_t t45 = 1;

    t45 = (((x185>x186)+x187)!=x188);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x189 = 6LLU;
	int16_t x190 = INT16_MIN;
	static int32_t x191 = -19719;
	static int64_t x192 = INT64_MAX;

    t46 = (((x189>x190)+x191)!=x192);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x193 = INT64_MIN;
	uint8_t x194 = 19U;
	int16_t x196 = 5166;
	int32_t t47 = 3787;

    t47 = (((x193>x194)+x195)!=x196);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = -1;
	volatile int16_t x198 = INT16_MAX;
	uint32_t x199 = 1U;
	uint64_t x200 = 41925967418LLU;
	int32_t t48 = -11754451;

    t48 = (((x197>x198)+x199)!=x200);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x202 = -7613;
	int8_t x203 = INT8_MAX;
	volatile uint32_t x204 = 12635583U;
	static volatile int32_t t49 = 1687;

    t49 = (((x201>x202)+x203)!=x204);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x206 = INT32_MIN;
	int16_t x207 = 29;
	volatile int32_t t50 = 24067435;

    t50 = (((x205>x206)+x207)!=x208);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x209 = INT16_MAX;
	int32_t x210 = INT32_MAX;
	static int16_t x212 = -13011;
	int32_t t51 = 794;

    t51 = (((x209>x210)+x211)!=x212);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x214 = -1138872597912048LL;
	static int64_t x216 = INT64_MIN;
	static volatile int32_t t52 = 847;

    t52 = (((x213>x214)+x215)!=x216);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x217 = 5110239;
	uint64_t x218 = UINT64_MAX;
	int16_t x219 = 9123;
	volatile int32_t t53 = -4;

    t53 = (((x217>x218)+x219)!=x220);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x221 = 0U;
	static volatile int32_t t54 = 20;

    t54 = (((x221>x222)+x223)!=x224);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x226 = -5;
	uint32_t x228 = 2U;
	volatile int32_t t55 = -16241031;

    t55 = (((x225>x226)+x227)!=x228);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x229 = INT64_MIN;
	int16_t x230 = INT16_MAX;
	volatile uint16_t x231 = 5845U;
	int16_t x232 = INT16_MIN;
	int32_t t56 = -2;

    t56 = (((x229>x230)+x231)!=x232);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x233 = INT64_MIN;
	int64_t x234 = 211265400137125LL;
	uint16_t x235 = 1184U;

    t57 = (((x233>x234)+x235)!=x236);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x238 = INT8_MIN;
	static int8_t x239 = INT8_MIN;
	int32_t t58 = 39;

    t58 = (((x237>x238)+x239)!=x240);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x241 = -113;
	static int8_t x242 = INT8_MAX;
	int16_t x244 = INT16_MAX;
	int32_t t59 = 0;

    t59 = (((x241>x242)+x243)!=x244);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x245 = 3;
	uint32_t x246 = 4U;
	int64_t x247 = INT64_MAX;
	int32_t t60 = 29529;

    t60 = (((x245>x246)+x247)!=x248);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x250 = -381248485074657LL;
	int16_t x251 = INT16_MIN;
	volatile int32_t t61 = 1;

    t61 = (((x249>x250)+x251)!=x252);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x254 = -1;
	uint32_t x256 = UINT32_MAX;
	volatile int32_t t62 = 87993;

    t62 = (((x253>x254)+x255)!=x256);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x257 = 5287;
	uint64_t x258 = 887897958LLU;
	volatile uint32_t x259 = 9313970U;
	volatile int8_t x260 = 1;
	static int32_t t63 = 12;

    t63 = (((x257>x258)+x259)!=x260);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x261 = 3U;
	static int32_t x262 = 499;
	int16_t x263 = 203;
	int32_t x264 = INT32_MAX;
	volatile int32_t t64 = -56691242;

    t64 = (((x261>x262)+x263)!=x264);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x265 = INT8_MAX;
	volatile int16_t x267 = 0;
	int32_t x268 = INT32_MIN;

    t65 = (((x265>x266)+x267)!=x268);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x269 = 32U;
	uint32_t x270 = UINT32_MAX;
	int32_t t66 = 1418;

    t66 = (((x269>x270)+x271)!=x272);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x273 = INT8_MIN;
	uint16_t x274 = UINT16_MAX;
	uint32_t x275 = UINT32_MAX;
	static uint64_t x276 = UINT64_MAX;

    t67 = (((x273>x274)+x275)!=x276);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x277 = -13748458697LL;
	volatile int64_t x278 = -1LL;
	int32_t t68 = -95646000;

    t68 = (((x277>x278)+x279)!=x280);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x281 = 1;
	volatile int16_t x284 = 1;
	int32_t t69 = -237771518;

    t69 = (((x281>x282)+x283)!=x284);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x285 = UINT64_MAX;
	uint16_t x286 = 8642U;
	uint64_t x287 = 60987665530LLU;
	int16_t x288 = 68;

    t70 = (((x285>x286)+x287)!=x288);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x289 = INT64_MIN;
	uint8_t x290 = UINT8_MAX;
	uint32_t x292 = UINT32_MAX;
	volatile int32_t t71 = 113027;

    t71 = (((x289>x290)+x291)!=x292);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x293 = INT8_MIN;
	int32_t x294 = -1;
	int8_t x296 = -1;
	volatile int32_t t72 = -250;

    t72 = (((x293>x294)+x295)!=x296);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x297 = -123;
	int64_t x298 = INT64_MAX;
	int8_t x299 = -26;
	static int32_t t73 = 12;

    t73 = (((x297>x298)+x299)!=x300);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x301 = INT16_MIN;
	int8_t x302 = 2;
	int32_t x303 = INT32_MIN;
	static int32_t x304 = INT32_MAX;
	static int32_t t74 = 958349685;

    t74 = (((x301>x302)+x303)!=x304);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x305 = UINT32_MAX;
	int32_t x306 = 1;
	int8_t x308 = -1;
	volatile int32_t t75 = 7961788;

    t75 = (((x305>x306)+x307)!=x308);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x309 = 430249U;
	uint8_t x310 = 1U;
	static int16_t x311 = INT16_MAX;
	int32_t x312 = INT32_MIN;
	volatile int32_t t76 = -2;

    t76 = (((x309>x310)+x311)!=x312);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x313 = INT8_MIN;
	int32_t x314 = -964411961;
	volatile uint32_t x315 = 14118420U;
	int8_t x316 = INT8_MAX;

    t77 = (((x313>x314)+x315)!=x316);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int32_t x317 = 101945513;
	static uint64_t x318 = UINT64_MAX;
	int64_t x319 = INT64_MIN;
	static int32_t t78 = -7940785;

    t78 = (((x317>x318)+x319)!=x320);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x321 = 268489325338LL;
	uint8_t x322 = UINT8_MAX;
	volatile uint64_t x323 = 82119344372695LLU;
	static volatile int32_t t79 = 23;

    t79 = (((x321>x322)+x323)!=x324);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x325 = INT32_MIN;
	uint64_t x326 = 4004868663LLU;
	int32_t x327 = INT32_MIN;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t80 = -117;

    t80 = (((x325>x326)+x327)!=x328);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x330 = INT8_MIN;
	static volatile int64_t x331 = 4710623875LL;
	int32_t t81 = 2790;

    t81 = (((x329>x330)+x331)!=x332);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x333 = 4364083186960LL;
	uint8_t x335 = UINT8_MAX;
	static volatile int16_t x336 = INT16_MIN;
	volatile int32_t t82 = -1652;

    t82 = (((x333>x334)+x335)!=x336);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x337 = 3487246604LL;
	uint8_t x338 = UINT8_MAX;
	int8_t x339 = -26;
	int16_t x340 = -48;

    t83 = (((x337>x338)+x339)!=x340);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x341 = -7;
	int16_t x343 = INT16_MIN;
	volatile int32_t x344 = INT32_MIN;
	static volatile int32_t t84 = 1036503423;

    t84 = (((x341>x342)+x343)!=x344);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x345 = INT8_MIN;
	int8_t x346 = -1;

    t85 = (((x345>x346)+x347)!=x348);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x349 = 0U;
	int32_t x350 = INT32_MIN;
	int64_t x351 = INT64_MIN;
	volatile int64_t x352 = -1LL;
	int32_t t86 = 24543594;

    t86 = (((x349>x350)+x351)!=x352);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x355 = UINT8_MAX;
	static int64_t x356 = -56983806224LL;
	static volatile int32_t t87 = -51638;

    t87 = (((x353>x354)+x355)!=x356);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x357 = INT32_MIN;
	volatile int8_t x358 = INT8_MAX;
	static int16_t x359 = INT16_MIN;
	int16_t x360 = -32;
	volatile int32_t t88 = 515;

    t88 = (((x357>x358)+x359)!=x360);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x361 = 3U;
	uint64_t x362 = 2768904642080037057LLU;
	uint8_t x363 = 91U;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t89 = -818394022;

    t89 = (((x361>x362)+x363)!=x364);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x365 = 111U;
	int64_t x366 = 526555668365LL;
	int32_t x367 = INT32_MIN;
	int32_t t90 = -91309733;

    t90 = (((x365>x366)+x367)!=x368);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x369 = 190759221U;
	uint32_t x371 = 1704121498U;
	int8_t x372 = INT8_MAX;

    t91 = (((x369>x370)+x371)!=x372);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x374 = INT32_MAX;
	int8_t x375 = INT8_MIN;
	int32_t t92 = -437;

    t92 = (((x373>x374)+x375)!=x376);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x377 = 849U;
	int64_t x379 = -1LL;
	uint8_t x380 = 3U;
	volatile int32_t t93 = 34212752;

    t93 = (((x377>x378)+x379)!=x380);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x381 = -1;
	uint16_t x384 = 2U;

    t94 = (((x381>x382)+x383)!=x384);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x386 = 5602U;
	static int32_t x387 = INT32_MAX;
	static int32_t x388 = -1;

    t95 = (((x385>x386)+x387)!=x388);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x389 = 119U;
	uint8_t x390 = 1U;
	int8_t x391 = -1;
	int16_t x392 = -3142;
	int32_t t96 = -5092;

    t96 = (((x389>x390)+x391)!=x392);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x393 = UINT8_MAX;
	uint32_t x394 = UINT32_MAX;
	int32_t x395 = INT32_MAX;
	int8_t x396 = INT8_MIN;
	volatile int32_t t97 = -957445;

    t97 = (((x393>x394)+x395)!=x396);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x398 = 14;
	static int16_t x399 = -1456;
	volatile int32_t t98 = 7411190;

    t98 = (((x397>x398)+x399)!=x400);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x402 = UINT32_MAX;
	volatile uint16_t x403 = UINT16_MAX;
	int16_t x404 = INT16_MAX;

    t99 = (((x401>x402)+x403)!=x404);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x405 = -1;
	int8_t x406 = -1;
	uint32_t x408 = 651758387U;
	static int32_t t100 = 201009;

    t100 = (((x405>x406)+x407)!=x408);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x410 = INT32_MAX;
	int16_t x411 = -14;
	int32_t x412 = 50;
	int32_t t101 = 1535;

    t101 = (((x409>x410)+x411)!=x412);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x414 = 23U;
	int8_t x415 = INT8_MAX;
	uint16_t x416 = 714U;
	volatile int32_t t102 = 2058354;

    t102 = (((x413>x414)+x415)!=x416);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x417 = INT32_MIN;
	volatile int64_t x418 = INT64_MIN;
	int8_t x419 = -1;
	volatile uint16_t x420 = UINT16_MAX;
	int32_t t103 = -34;

    t103 = (((x417>x418)+x419)!=x420);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x421 = INT8_MIN;
	uint64_t x422 = 23LLU;
	volatile int32_t t104 = 17239;

    t104 = (((x421>x422)+x423)!=x424);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x425 = 0U;
	int64_t x426 = INT64_MIN;
	uint32_t x427 = 388369209U;
	volatile int32_t t105 = 3;

    t105 = (((x425>x426)+x427)!=x428);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x429 = 1639926LLU;
	int32_t x430 = INT32_MIN;
	int8_t x431 = -1;
	static volatile uint16_t x432 = 1749U;
	int32_t t106 = 1947756;

    t106 = (((x429>x430)+x431)!=x432);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x433 = INT16_MIN;
	int32_t x434 = INT32_MIN;
	uint32_t x435 = 1003021U;
	int64_t x436 = -1LL;
	int32_t t107 = 782;

    t107 = (((x433>x434)+x435)!=x436);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x437 = 487317790U;
	static volatile uint32_t x438 = UINT32_MAX;
	volatile int32_t x439 = 7127066;
	uint32_t x440 = UINT32_MAX;
	volatile int32_t t108 = 1;

    t108 = (((x437>x438)+x439)!=x440);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x441 = 62608769406634LLU;
	int16_t x442 = INT16_MIN;
	int64_t x443 = INT64_MAX;
	int32_t t109 = 1;

    t109 = (((x441>x442)+x443)!=x444);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x446 = UINT16_MAX;
	static uint8_t x448 = 8U;
	int32_t t110 = -5547;

    t110 = (((x445>x446)+x447)!=x448);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x449 = UINT8_MAX;
	int32_t x450 = 1964085;
	static int16_t x451 = 154;
	uint8_t x452 = UINT8_MAX;
	int32_t t111 = -1;

    t111 = (((x449>x450)+x451)!=x452);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x453 = 1994U;
	static int8_t x454 = -1;
	volatile int32_t x455 = INT32_MIN;
	int16_t x456 = 212;
	static int32_t t112 = 70;

    t112 = (((x453>x454)+x455)!=x456);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x457 = -1;
	uint64_t x459 = UINT64_MAX;
	int32_t x460 = 0;
	int32_t t113 = 707942;

    t113 = (((x457>x458)+x459)!=x460);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x461 = INT16_MIN;
	volatile uint8_t x463 = 11U;
	int32_t t114 = -1039507;

    t114 = (((x461>x462)+x463)!=x464);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x465 = INT64_MIN;
	uint32_t x467 = 1310242U;
	int32_t x468 = INT32_MAX;
	volatile int32_t t115 = -32314;

    t115 = (((x465>x466)+x467)!=x468);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x469 = INT64_MIN;
	static uint8_t x471 = 49U;
	uint32_t x472 = UINT32_MAX;

    t116 = (((x469>x470)+x471)!=x472);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x473 = 1;
	int64_t x475 = INT64_MIN;
	int16_t x476 = INT16_MIN;
	int32_t t117 = -106027;

    t117 = (((x473>x474)+x475)!=x476);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x477 = 13U;
	int8_t x479 = 4;
	uint8_t x480 = UINT8_MAX;
	volatile int32_t t118 = 4000208;

    t118 = (((x477>x478)+x479)!=x480);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x481 = -3;
	int64_t x482 = 31388797048LL;

    t119 = (((x481>x482)+x483)!=x484);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x485 = 13U;
	volatile uint16_t x486 = 1461U;
	int16_t x487 = INT16_MAX;
	volatile uint32_t x488 = 9U;

    t120 = (((x485>x486)+x487)!=x488);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x489 = -1;
	volatile uint64_t x490 = 49LLU;
	volatile uint32_t x491 = 80U;
	int64_t x492 = INT64_MIN;

    t121 = (((x489>x490)+x491)!=x492);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x493 = INT64_MIN;
	int64_t x494 = 11LL;
	int16_t x495 = INT16_MAX;
	uint32_t x496 = 1824069156U;
	int32_t t122 = -299;

    t122 = (((x493>x494)+x495)!=x496);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x497 = INT64_MIN;
	int32_t x498 = -1;
	int64_t x499 = INT64_MIN;
	int32_t t123 = 246;

    t123 = (((x497>x498)+x499)!=x500);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x501 = UINT16_MAX;
	uint64_t x502 = 1682LLU;
	int64_t x503 = 100LL;
	static int32_t t124 = 413029;

    t124 = (((x501>x502)+x503)!=x504);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x505 = INT16_MIN;
	uint8_t x507 = 9U;
	int32_t t125 = -128444880;

    t125 = (((x505>x506)+x507)!=x508);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x509 = 19142;
	uint32_t x510 = 179036U;
	int16_t x511 = INT16_MIN;
	volatile int16_t x512 = INT16_MIN;
	static volatile int32_t t126 = 0;

    t126 = (((x509>x510)+x511)!=x512);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x514 = 1;
	volatile int64_t x515 = INT64_MIN;
	uint16_t x516 = 10U;
	int32_t t127 = 173023344;

    t127 = (((x513>x514)+x515)!=x516);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x517 = 13U;
	static int16_t x518 = 1;
	uint16_t x519 = 185U;
	uint8_t x520 = 2U;
	int32_t t128 = -2;

    t128 = (((x517>x518)+x519)!=x520);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x521 = 1U;
	int64_t x522 = -1LL;
	static volatile int32_t x523 = INT32_MIN;
	int32_t x524 = -1;
	static int32_t t129 = -345;

    t129 = (((x521>x522)+x523)!=x524);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x526 = 430760;
	static volatile int32_t x527 = INT32_MIN;
	static uint16_t x528 = 778U;
	volatile int32_t t130 = -114275;

    t130 = (((x525>x526)+x527)!=x528);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x529 = INT16_MIN;
	int32_t x530 = INT32_MIN;
	int16_t x531 = -115;
	int16_t x532 = INT16_MIN;
	volatile int32_t t131 = -206481;

    t131 = (((x529>x530)+x531)!=x532);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x533 = 1677030U;
	int64_t x534 = -1LL;
	uint8_t x535 = 7U;
	volatile int32_t t132 = -4127951;

    t132 = (((x533>x534)+x535)!=x536);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x537 = 153;
	volatile uint64_t x538 = 815LLU;
	int8_t x539 = 29;
	static volatile int64_t x540 = INT64_MAX;

    t133 = (((x537>x538)+x539)!=x540);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x541 = 855508;
	volatile int32_t x542 = INT32_MAX;
	volatile uint16_t x543 = 2U;
	uint32_t x544 = 1U;
	int32_t t134 = -3;

    t134 = (((x541>x542)+x543)!=x544);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x546 = -1;
	int16_t x547 = INT16_MIN;
	static uint32_t x548 = UINT32_MAX;
	volatile int32_t t135 = -287;

    t135 = (((x545>x546)+x547)!=x548);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x549 = 0;
	int8_t x550 = -1;
	int16_t x551 = 1;
	int16_t x552 = INT16_MAX;
	int32_t t136 = 9099200;

    t136 = (((x549>x550)+x551)!=x552);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x555 = INT8_MIN;
	volatile uint16_t x556 = 75U;
	static volatile int32_t t137 = -1;

    t137 = (((x553>x554)+x555)!=x556);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x557 = INT32_MIN;
	int8_t x559 = -1;
	static int8_t x560 = 1;
	static int32_t t138 = -1;

    t138 = (((x557>x558)+x559)!=x560);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x561 = 77889882LL;
	uint16_t x562 = 0U;
	int16_t x563 = INT16_MAX;
	int8_t x564 = INT8_MAX;

    t139 = (((x561>x562)+x563)!=x564);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x565 = INT32_MIN;
	int8_t x566 = INT8_MAX;
	int8_t x568 = -1;
	static volatile int32_t t140 = -135;

    t140 = (((x565>x566)+x567)!=x568);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x569 = -1;
	int16_t x570 = INT16_MIN;
	int8_t x571 = INT8_MIN;
	int32_t t141 = -372599;

    t141 = (((x569>x570)+x571)!=x572);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x573 = 24390745LL;
	int16_t x575 = INT16_MIN;
	int16_t x576 = INT16_MIN;
	static int32_t t142 = 4;

    t142 = (((x573>x574)+x575)!=x576);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x577 = INT8_MIN;
	int8_t x578 = -2;
	static int32_t x579 = INT32_MAX;
	int64_t x580 = 3510409462984LL;
	int32_t t143 = -20866;

    t143 = (((x577>x578)+x579)!=x580);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x581 = INT32_MIN;
	int16_t x582 = 314;
	int64_t x583 = INT64_MAX;
	int64_t x584 = INT64_MIN;
	volatile int32_t t144 = -54386406;

    t144 = (((x581>x582)+x583)!=x584);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x585 = -1;
	volatile uint64_t x586 = UINT64_MAX;
	volatile uint32_t x587 = UINT32_MAX;
	int16_t x588 = 10875;

    t145 = (((x585>x586)+x587)!=x588);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x589 = -1;
	static int32_t x590 = INT32_MIN;
	int64_t x591 = -1LL;
	int32_t x592 = INT32_MIN;

    t146 = (((x589>x590)+x591)!=x592);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x593 = 986U;
	uint16_t x594 = 2U;
	uint32_t x595 = 0U;
	static int8_t x596 = INT8_MIN;
	volatile int32_t t147 = 30;

    t147 = (((x593>x594)+x595)!=x596);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x597 = INT64_MIN;
	static int16_t x598 = INT16_MIN;
	int64_t x599 = INT64_MAX;
	uint16_t x600 = 125U;
	volatile int32_t t148 = -672243163;

    t148 = (((x597>x598)+x599)!=x600);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x601 = 1U;
	uint32_t x602 = 103U;

    t149 = (((x601>x602)+x603)!=x604);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x605 = INT64_MIN;
	volatile uint32_t x606 = UINT32_MAX;
	volatile uint64_t x607 = 175962532059LLU;
	int32_t x608 = -5099966;
	int32_t t150 = 3400;

    t150 = (((x605>x606)+x607)!=x608);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x609 = 230LL;
	static uint8_t x610 = 3U;
	uint16_t x611 = UINT16_MAX;
	volatile int32_t x612 = -1;
	int32_t t151 = 370;

    t151 = (((x609>x610)+x611)!=x612);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x613 = UINT32_MAX;
	int32_t x614 = 30;
	volatile int16_t x615 = INT16_MAX;
	uint64_t x616 = 8457758481LLU;
	volatile int32_t t152 = 4;

    t152 = (((x613>x614)+x615)!=x616);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x617 = INT8_MIN;
	int32_t x618 = -1;
	int8_t x619 = -1;
	int8_t x620 = -1;
	int32_t t153 = -4246516;

    t153 = (((x617>x618)+x619)!=x620);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x621 = -29;
	int8_t x622 = INT8_MIN;
	int8_t x624 = -58;
	volatile int32_t t154 = 29873204;

    t154 = (((x621>x622)+x623)!=x624);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x625 = UINT8_MAX;
	int64_t x626 = INT64_MIN;
	static uint64_t x627 = 62020007688898782LLU;
	volatile int16_t x628 = -1617;

    t155 = (((x625>x626)+x627)!=x628);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x629 = INT64_MIN;
	int8_t x630 = 1;
	static int8_t x631 = -2;
	int16_t x632 = INT16_MIN;
	int32_t t156 = -367181650;

    t156 = (((x629>x630)+x631)!=x632);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x634 = 201880658LLU;
	int64_t x635 = INT64_MIN;
	uint16_t x636 = 5U;
	static volatile int32_t t157 = -358;

    t157 = (((x633>x634)+x635)!=x636);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x637 = 0U;
	int64_t x638 = INT64_MIN;
	volatile int32_t x639 = -1;
	volatile int8_t x640 = 20;
	volatile int32_t t158 = -15255936;

    t158 = (((x637>x638)+x639)!=x640);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x645 = -50943295698729LL;
	volatile uint32_t x646 = 1630U;
	uint16_t x647 = 3338U;
	volatile int32_t x648 = -1092;
	static int32_t t159 = -1;

    t159 = (((x645>x646)+x647)!=x648);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x649 = -1LL;
	int16_t x650 = 13;
	int8_t x651 = 2;
	int32_t t160 = 106;

    t160 = (((x649>x650)+x651)!=x652);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x653 = INT8_MIN;
	volatile int64_t x654 = INT64_MIN;
	static uint32_t x655 = UINT32_MAX;
	int32_t t161 = -1034485555;

    t161 = (((x653>x654)+x655)!=x656);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x657 = INT32_MIN;
	int32_t x658 = -1;
	int64_t x660 = INT64_MIN;
	volatile int32_t t162 = -81943;

    t162 = (((x657>x658)+x659)!=x660);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x661 = UINT16_MAX;
	static volatile int16_t x662 = 2;
	volatile int32_t t163 = 636634;

    t163 = (((x661>x662)+x663)!=x664);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x665 = 186970869429LLU;
	volatile int32_t t164 = 86513120;

    t164 = (((x665>x666)+x667)!=x668);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x669 = UINT8_MAX;
	int64_t x670 = 7864489960LL;
	uint16_t x671 = 9336U;
	uint64_t x672 = 10684480046456LLU;
	int32_t t165 = -448524;

    t165 = (((x669>x670)+x671)!=x672);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x673 = 7;
	int16_t x674 = INT16_MAX;
	static int64_t x675 = 92462960082920223LL;
	uint16_t x676 = 1006U;

    t166 = (((x673>x674)+x675)!=x676);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x677 = INT8_MIN;
	int32_t x678 = INT32_MAX;
	uint32_t x679 = 14717U;
	static volatile int32_t t167 = 12;

    t167 = (((x677>x678)+x679)!=x680);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x681 = INT32_MIN;
	int32_t x682 = INT32_MIN;
	uint8_t x683 = 1U;
	uint64_t x684 = 3794876288135382414LLU;
	int32_t t168 = 8442697;

    t168 = (((x681>x682)+x683)!=x684);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x685 = UINT64_MAX;
	uint16_t x686 = 2238U;
	uint8_t x687 = UINT8_MAX;
	static int32_t x688 = -1;
	int32_t t169 = 0;

    t169 = (((x685>x686)+x687)!=x688);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x689 = INT8_MIN;
	uint64_t x691 = 23732495778175LLU;
	static int8_t x692 = INT8_MIN;
	static volatile int32_t t170 = -240815325;

    t170 = (((x689>x690)+x691)!=x692);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x693 = INT32_MAX;
	int8_t x695 = INT8_MIN;
	static int8_t x696 = -1;
	volatile int32_t t171 = 0;

    t171 = (((x693>x694)+x695)!=x696);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x698 = 66166912409651125LLU;
	uint8_t x699 = 0U;
	int16_t x700 = INT16_MIN;
	volatile int32_t t172 = -2237403;

    t172 = (((x697>x698)+x699)!=x700);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x701 = INT64_MAX;
	static int32_t x703 = -5;
	int64_t x704 = INT64_MAX;
	int32_t t173 = 4425;

    t173 = (((x701>x702)+x703)!=x704);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x705 = 3;
	uint16_t x706 = 9U;
	static volatile int32_t t174 = -14552;

    t174 = (((x705>x706)+x707)!=x708);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x709 = INT16_MIN;
	int16_t x710 = -174;
	volatile uint32_t x711 = UINT32_MAX;
	uint32_t x712 = UINT32_MAX;
	static volatile int32_t t175 = 25250238;

    t175 = (((x709>x710)+x711)!=x712);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x713 = INT16_MIN;
	int32_t x714 = -1;
	static uint8_t x715 = UINT8_MAX;
	uint8_t x716 = 6U;
	static int32_t t176 = -1;

    t176 = (((x713>x714)+x715)!=x716);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x717 = INT64_MIN;
	uint64_t x719 = 71444839183645620LLU;
	uint16_t x720 = UINT16_MAX;
	volatile int32_t t177 = -741277104;

    t177 = (((x717>x718)+x719)!=x720);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x721 = INT64_MAX;
	volatile uint64_t x722 = UINT64_MAX;
	int8_t x724 = -1;
	volatile int32_t t178 = -164840620;

    t178 = (((x721>x722)+x723)!=x724);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x725 = INT64_MAX;
	static int16_t x726 = INT16_MIN;
	int32_t x727 = 204;
	int32_t t179 = -1326;

    t179 = (((x725>x726)+x727)!=x728);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x729 = UINT64_MAX;
	int64_t x730 = -1LL;
	uint8_t x731 = UINT8_MAX;
	uint8_t x732 = 39U;
	volatile int32_t t180 = 57488472;

    t180 = (((x729>x730)+x731)!=x732);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x733 = UINT64_MAX;
	uint64_t x734 = UINT64_MAX;
	int64_t x735 = -39914563509LL;
	int64_t x736 = INT64_MIN;
	volatile int32_t t181 = 926721;

    t181 = (((x733>x734)+x735)!=x736);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x737 = 10807449508379LL;
	int16_t x738 = -1;
	static uint16_t x739 = 9U;
	int16_t x740 = 8;

    t182 = (((x737>x738)+x739)!=x740);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x741 = 6183758LL;
	volatile int64_t x742 = -1LL;
	volatile int64_t x743 = 15176596544697LL;
	int32_t t183 = 130197;

    t183 = (((x741>x742)+x743)!=x744);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x745 = INT32_MIN;
	uint32_t x746 = UINT32_MAX;
	volatile uint64_t x748 = 133LLU;

    t184 = (((x745>x746)+x747)!=x748);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x749 = -308925060;
	static volatile int32_t x750 = 5;
	uint64_t x751 = UINT64_MAX;
	int16_t x752 = 1560;
	volatile int32_t t185 = -78;

    t185 = (((x749>x750)+x751)!=x752);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x755 = INT32_MIN;
	volatile int32_t x756 = INT32_MIN;
	volatile int32_t t186 = -3413;

    t186 = (((x753>x754)+x755)!=x756);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x757 = 30U;
	int64_t x758 = -1LL;
	int16_t x759 = 452;
	static uint16_t x760 = UINT16_MAX;
	static int32_t t187 = -57;

    t187 = (((x757>x758)+x759)!=x760);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x761 = -1;
	int8_t x762 = -1;
	int16_t x763 = -347;
	int64_t x764 = 198469397326LL;
	static int32_t t188 = -90737769;

    t188 = (((x761>x762)+x763)!=x764);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x765 = 7248U;
	int32_t x766 = INT32_MIN;
	int16_t x767 = 4863;
	int8_t x768 = INT8_MIN;
	int32_t t189 = 29;

    t189 = (((x765>x766)+x767)!=x768);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x769 = -1LL;
	uint16_t x770 = 61U;
	int8_t x771 = -1;
	static volatile int64_t x772 = INT64_MAX;
	int32_t t190 = -1;

    t190 = (((x769>x770)+x771)!=x772);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x775 = 20U;
	static volatile int32_t t191 = -11998;

    t191 = (((x773>x774)+x775)!=x776);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x777 = 124;
	int16_t x778 = -5220;
	int32_t t192 = 247596221;

    t192 = (((x777>x778)+x779)!=x780);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x785 = -1;
	static int16_t x786 = 982;
	uint16_t x787 = UINT16_MAX;
	uint16_t x788 = UINT16_MAX;
	static int32_t t193 = -896426;

    t193 = (((x785>x786)+x787)!=x788);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x789 = 54800;
	int64_t x790 = INT64_MIN;
	uint32_t x792 = 64285415U;

    t194 = (((x789>x790)+x791)!=x792);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x794 = -1;
	static volatile int64_t x795 = INT64_MIN;
	static int32_t x796 = 946031;
	volatile int32_t t195 = -217;

    t195 = (((x793>x794)+x795)!=x796);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x797 = UINT32_MAX;
	int32_t x798 = INT32_MIN;
	uint64_t x799 = 136529124LLU;
	uint16_t x800 = 20678U;
	volatile int32_t t196 = -2511963;

    t196 = (((x797>x798)+x799)!=x800);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x801 = INT16_MIN;
	uint16_t x802 = UINT16_MAX;
	uint64_t x803 = UINT64_MAX;
	static volatile int8_t x804 = INT8_MIN;

    t197 = (((x801>x802)+x803)!=x804);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x805 = INT32_MIN;
	int8_t x806 = 0;
	uint8_t x807 = 0U;
	uint8_t x808 = UINT8_MAX;
	static volatile int32_t t198 = -60076;

    t198 = (((x805>x806)+x807)!=x808);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x810 = -1;
	int16_t x811 = INT16_MAX;
	int32_t x812 = INT32_MIN;
	int32_t t199 = -240503143;

    t199 = (((x809>x810)+x811)!=x812);

    if (t199 != 1) { NG(); } else { ; }
	
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


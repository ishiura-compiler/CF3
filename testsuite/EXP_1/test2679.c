
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

int64_t x1 = -1LL;
int32_t x5 = 433;
int8_t x9 = -56;
int8_t x12 = 4;
volatile uint16_t x15 = UINT16_MAX;
uint32_t t3 = 51642U;
volatile int32_t t4 = 22314524;
int32_t x21 = INT32_MIN;
int64_t t5 = 999944LL;
static volatile int32_t x26 = 152;
static uint16_t x32 = 127U;
volatile int32_t t7 = 309;
int16_t x41 = -1;
uint32_t x49 = UINT32_MAX;
volatile int8_t x51 = -1;
static volatile int32_t t12 = 1244454;
volatile int32_t x56 = INT32_MIN;
volatile int32_t x61 = -1;
volatile uint16_t x64 = UINT16_MAX;
uint8_t x70 = 1U;
uint16_t x72 = 3283U;
int8_t x75 = 57;
static int64_t x76 = 63350LL;
static volatile int64_t t18 = 27912880532LL;
uint16_t x79 = UINT16_MAX;
int16_t x84 = 3325;
int32_t t20 = -1522533;
uint64_t t21 = 1748402510950LLU;
uint64_t x93 = 253785LLU;
int32_t t22 = 77508035;
int64_t x101 = -1LL;
int16_t x104 = INT16_MAX;
volatile int32_t t23 = -782;
volatile int32_t x108 = INT32_MAX;
int64_t x109 = 315484883LL;
uint16_t x113 = 1U;
volatile int32_t t27 = 19;
int64_t t29 = -384744447449LL;
uint32_t x135 = UINT32_MAX;
uint64_t x136 = 313LLU;
volatile int32_t x143 = INT32_MIN;
int64_t x147 = -3789994666LL;
volatile int8_t x161 = -1;
static volatile int32_t t38 = 848392;
int8_t x165 = -1;
volatile int32_t x166 = -1;
static uint16_t x167 = UINT16_MAX;
static int32_t x173 = 56343;
int8_t x176 = INT8_MIN;
int16_t x177 = INT16_MIN;
int64_t x178 = INT64_MIN;
uint64_t x180 = 59LLU;
int16_t x183 = INT16_MIN;
volatile int64_t x184 = 3LL;
static int16_t x190 = INT16_MIN;
int32_t x195 = 14;
uint64_t x196 = 71615LLU;
volatile int32_t t47 = 3781792;
volatile int16_t x204 = INT16_MAX;
static uint16_t x205 = 1033U;
uint16_t x208 = 8879U;
volatile int64_t t53 = -113760465671053085LL;
int32_t x227 = -1;
int16_t x229 = -1;
int32_t t55 = -6;
int32_t x234 = -1;
int64_t t56 = 2802135483618516042LL;
int32_t t62 = 0;
int64_t x262 = 49071960LL;
uint16_t x264 = UINT16_MAX;
int32_t t65 = -2137198;
int64_t x277 = 0LL;
int8_t x279 = 9;
volatile uint32_t t66 = 20U;
int16_t x281 = INT16_MAX;
int16_t x286 = INT16_MIN;
int32_t x287 = -1683334;
int32_t x307 = INT32_MAX;
static volatile uint8_t x309 = 0U;
int64_t x312 = INT64_MIN;
uint16_t x318 = 60U;
int32_t x326 = INT32_MIN;
volatile int64_t t78 = 252510219284346LL;
uint64_t x333 = 7672128LLU;
int16_t x338 = INT16_MIN;
static volatile uint32_t t81 = 1836207328U;
int32_t x345 = INT32_MAX;
int32_t x349 = INT32_MIN;
static uint8_t x352 = 1U;
static uint64_t x354 = 14516LLU;
volatile int8_t x363 = INT8_MAX;
static uint16_t x368 = 19360U;
int64_t x377 = INT64_MIN;
volatile int8_t x378 = INT8_MIN;
uint32_t x380 = 58507944U;
uint32_t x383 = UINT32_MAX;
int32_t x385 = 1071468507;
uint32_t x388 = 143175U;
volatile int8_t x393 = -1;
uint64_t x400 = 4152004041568310098LLU;
int32_t x401 = -1;
volatile int8_t x412 = 59;
uint32_t x415 = UINT32_MAX;
int16_t x420 = INT16_MIN;
volatile int8_t x421 = INT8_MIN;
uint32_t x425 = 112413370U;
int64_t x426 = -1LL;
uint64_t x437 = 10LLU;
volatile int64_t x438 = -11090LL;
volatile int16_t x441 = INT16_MIN;
int16_t x449 = -7163;
static int16_t x451 = -1;
static volatile int16_t x454 = INT16_MIN;
int32_t x457 = INT32_MIN;
int16_t x462 = INT16_MIN;
static int64_t x464 = -3LL;
int16_t x466 = -502;
volatile int32_t x468 = -15038935;
int32_t x475 = INT32_MAX;
static volatile int8_t x477 = INT8_MAX;
uint32_t x481 = 1046324U;
volatile int8_t x482 = -1;
int32_t x487 = 24;
static int32_t t116 = 2111213;
uint64_t x510 = UINT64_MAX;
int8_t x512 = INT8_MAX;
static int64_t x519 = INT64_MIN;
int8_t x520 = -1;
static int8_t x523 = 39;
int64_t x525 = INT64_MIN;
int8_t x527 = 2;
int64_t x528 = -24LL;
int16_t x532 = INT16_MIN;
volatile int64_t t128 = -30583853687LL;
int64_t x543 = -510691703812580514LL;
int8_t x550 = INT8_MIN;
uint16_t x551 = 4U;
static uint32_t x552 = 2497U;
uint16_t x554 = UINT16_MAX;
int32_t x558 = INT32_MIN;
static int32_t t133 = 9797438;
static uint8_t x587 = 0U;
int16_t x597 = -1;
static volatile int16_t x605 = INT16_MIN;
static int16_t x616 = -65;
uint8_t x622 = UINT8_MAX;
int32_t x623 = INT32_MIN;
volatile int32_t t148 = -1923;
volatile int8_t x625 = INT8_MIN;
uint32_t x628 = 145472U;
static int8_t x630 = INT8_MAX;
static uint32_t t150 = 281U;
static uint16_t x637 = 6403U;
static int8_t x639 = INT8_MIN;
uint8_t x640 = 31U;
uint64_t x644 = 213604LLU;
uint64_t t153 = 1948043811760054LLU;
int32_t x647 = INT32_MIN;
volatile int32_t t155 = -12882764;
int32_t x657 = -1;
static int64_t x658 = 23256830026946LL;
int32_t t158 = -113;
static uint8_t x667 = UINT8_MAX;
uint8_t x668 = UINT8_MAX;
uint16_t x670 = 457U;
uint8_t x674 = 14U;
int32_t t161 = 96;
volatile int32_t t162 = -1;
int16_t x682 = -1;
volatile int32_t x684 = INT32_MAX;
static int8_t x689 = -1;
uint64_t x695 = 27246960502500466LLU;
static uint8_t x696 = UINT8_MAX;
volatile int32_t t166 = 254322891;
static int32_t x704 = INT32_MAX;
int32_t t168 = -763197;
int8_t x713 = -6;
volatile int32_t x715 = INT32_MIN;
static volatile int16_t x721 = INT16_MAX;
int8_t x723 = -21;
volatile int32_t t173 = -1307846;
uint64_t x725 = 4LLU;
uint8_t x728 = UINT8_MAX;
volatile int8_t x734 = -1;
uint64_t t177 = 1368154660LLU;
int32_t x746 = INT32_MAX;
int8_t x747 = 0;
uint32_t x750 = 4193922U;
static volatile int8_t x753 = INT8_MIN;
int32_t x760 = 416245448;
volatile uint64_t x761 = UINT64_MAX;
int8_t x763 = 6;
volatile uint16_t x764 = UINT16_MAX;
uint16_t x771 = 31308U;
int8_t x772 = INT8_MAX;
int8_t x773 = -1;
int16_t x783 = -7;
volatile uint32_t x784 = 401950986U;
uint64_t x786 = UINT64_MAX;
int32_t x795 = INT32_MIN;
uint16_t x796 = UINT16_MAX;
volatile int32_t t191 = 3899232;
int32_t t193 = 39341;
volatile uint16_t x808 = 25U;
static int32_t t194 = -458364;
int8_t x814 = -1;
static volatile uint8_t x816 = 1U;
int32_t t199 = -14005952;


void f0(void) {
    	static volatile uint16_t x2 = UINT16_MAX;
	uint64_t x3 = 495376868452LLU;
	int8_t x4 = -24;
	static int32_t t0 = 23510851;

    t0 = (((x1^x2)<=x3)%x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = 122442109000LL;
	int32_t x7 = 106948136;
	uint32_t x8 = 185133U;
	static uint32_t t1 = 55U;

    t1 = (((x5^x6)<=x7)%x8);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x10 = UINT16_MAX;
	volatile uint32_t x11 = 2600061U;
	int32_t t2 = 0;

    t2 = (((x9^x10)<=x11)%x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 30;
	int64_t x14 = -153433076210132LL;
	uint32_t x16 = UINT32_MAX;

    t3 = (((x13^x14)<=x15)%x16);

    if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 884LLU;
	static int64_t x18 = 102548176606LL;
	volatile int8_t x19 = INT8_MIN;
	int32_t x20 = INT32_MAX;

    t4 = (((x17^x18)<=x19)%x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = -1;
	volatile int64_t x23 = INT64_MAX;
	int64_t x24 = 128348908468424LL;

    t5 = (((x21^x22)<=x23)%x24);

    if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint64_t x25 = 478LLU;
	volatile uint32_t x27 = 0U;
	uint64_t x28 = 119094199488LLU;
	uint64_t t6 = 16178962LLU;

    t6 = (((x25^x26)<=x27)%x28);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 31809825;
	int16_t x30 = INT16_MIN;
	int8_t x31 = -55;

    t7 = (((x29^x30)<=x31)%x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint8_t x33 = 26U;
	int8_t x34 = INT8_MIN;
	volatile int8_t x35 = -7;
	volatile int16_t x36 = INT16_MAX;
	volatile int32_t t8 = 6938248;

    t8 = (((x33^x34)<=x35)%x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x37 = 1407U;
	static uint64_t x38 = 923863858990421065LLU;
	static uint32_t x39 = 9015238U;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = 73423737;

    t9 = (((x37^x38)<=x39)%x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x42 = INT64_MIN;
	uint8_t x43 = 7U;
	int8_t x44 = -28;
	volatile int32_t t10 = 10546;

    t10 = (((x41^x42)<=x43)%x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint8_t x45 = 21U;
	volatile int32_t x46 = 239079332;
	static uint64_t x47 = UINT64_MAX;
	int16_t x48 = 313;
	volatile int32_t t11 = -207005;

    t11 = (((x45^x46)<=x47)%x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = INT8_MAX;
	volatile uint16_t x52 = 1674U;

    t12 = (((x49^x50)<=x51)%x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x53 = 6951U;
	int16_t x54 = INT16_MIN;
	volatile int32_t x55 = INT32_MIN;
	volatile int32_t t13 = 146815037;

    t13 = (((x53^x54)<=x55)%x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = -2138LL;
	uint64_t x58 = UINT64_MAX;
	int8_t x59 = INT8_MIN;
	int8_t x60 = -1;
	int32_t t14 = -229504986;

    t14 = (((x57^x58)<=x59)%x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x62 = 19518U;
	int64_t x63 = INT64_MIN;
	int32_t t15 = 0;

    t15 = (((x61^x62)<=x63)%x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = 4;
	int8_t x66 = -1;
	volatile int16_t x67 = INT16_MAX;
	int64_t x68 = -1LL;
	int64_t t16 = -297482580823984LL;

    t16 = (((x65^x66)<=x67)%x68);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = UINT16_MAX;
	static int8_t x71 = INT8_MIN;
	static int32_t t17 = -680260217;

    t17 = (((x69^x70)<=x71)%x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 47592719U;
	int16_t x74 = 1949;

    t18 = (((x73^x74)<=x75)%x76);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = -1;
	int32_t x78 = -1;
	volatile int32_t x80 = 26;
	volatile int32_t t19 = -652332164;

    t19 = (((x77^x78)<=x79)%x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = 1001887044320LL;
	static volatile int16_t x82 = 8;
	int64_t x83 = -567199736800775528LL;

    t20 = (((x81^x82)<=x83)%x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x89 = INT32_MAX;
	int16_t x90 = -1;
	int8_t x91 = -1;
	uint64_t x92 = UINT64_MAX;

    t21 = (((x89^x90)<=x91)%x92);

    if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x94 = -1LL;
	int8_t x95 = 11;
	static uint16_t x96 = 29U;

    t22 = (((x93^x94)<=x95)%x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x102 = 1U;
	int32_t x103 = -26510569;

    t23 = (((x101^x102)<=x103)%x104);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x105 = 108187786U;
	uint16_t x106 = 3U;
	static volatile int32_t x107 = -5165;
	int32_t t24 = -1;

    t24 = (((x105^x106)<=x107)%x108);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x110 = -1;
	volatile int8_t x111 = INT8_MAX;
	int8_t x112 = INT8_MAX;
	int32_t t25 = 6;

    t25 = (((x109^x110)<=x111)%x112);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x114 = 145156784571426LLU;
	uint8_t x115 = UINT8_MAX;
	int64_t x116 = INT64_MAX;
	volatile int64_t t26 = 2640520630583089937LL;

    t26 = (((x113^x114)<=x115)%x116);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x117 = -1LL;
	int32_t x118 = INT32_MIN;
	uint32_t x119 = 1U;
	int32_t x120 = INT32_MIN;

    t27 = (((x117^x118)<=x119)%x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x121 = INT32_MIN;
	int16_t x122 = -5;
	int32_t x123 = -1;
	int8_t x124 = INT8_MIN;
	volatile int32_t t28 = -1;

    t28 = (((x121^x122)<=x123)%x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x125 = UINT8_MAX;
	uint32_t x126 = 1071U;
	static int8_t x127 = -6;
	int64_t x128 = -4LL;

    t29 = (((x125^x126)<=x127)%x128);

    if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x129 = -23;
	static uint64_t x130 = 8221500500164379LLU;
	static volatile int32_t x131 = 907978851;
	static int16_t x132 = INT16_MIN;
	int32_t t30 = -9206076;

    t30 = (((x129^x130)<=x131)%x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MIN;
	uint64_t t31 = 360345LLU;

    t31 = (((x133^x134)<=x135)%x136);

    if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x137 = UINT64_MAX;
	int16_t x138 = 0;
	static uint64_t x139 = 4LLU;
	static int8_t x140 = -1;
	volatile int32_t t32 = 30708;

    t32 = (((x137^x138)<=x139)%x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x141 = 48LL;
	static int8_t x142 = INT8_MIN;
	uint16_t x144 = 365U;
	volatile int32_t t33 = -40999;

    t33 = (((x141^x142)<=x143)%x144);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x145 = 9U;
	int64_t x146 = -588988924LL;
	int8_t x148 = -1;
	int32_t t34 = -4341;

    t34 = (((x145^x146)<=x147)%x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x149 = UINT32_MAX;
	int16_t x150 = 4;
	int8_t x151 = INT8_MAX;
	static volatile int8_t x152 = INT8_MAX;
	volatile int32_t t35 = -14177580;

    t35 = (((x149^x150)<=x151)%x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x153 = -1;
	int8_t x154 = INT8_MAX;
	int8_t x155 = -1;
	static int16_t x156 = -4978;
	volatile int32_t t36 = 306507;

    t36 = (((x153^x154)<=x155)%x156);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x157 = -1;
	int64_t x158 = INT64_MIN;
	int16_t x159 = -1;
	uint8_t x160 = UINT8_MAX;
	int32_t t37 = -1759;

    t37 = (((x157^x158)<=x159)%x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x162 = UINT16_MAX;
	int64_t x163 = -14261142259095259LL;
	uint8_t x164 = UINT8_MAX;

    t38 = (((x161^x162)<=x163)%x164);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x168 = INT32_MIN;
	static int32_t t39 = -2918441;

    t39 = (((x165^x166)<=x167)%x168);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x169 = 1;
	int8_t x170 = -1;
	static int8_t x171 = 9;
	int8_t x172 = INT8_MIN;
	static int32_t t40 = 711772;

    t40 = (((x169^x170)<=x171)%x172);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x174 = -15941;
	volatile uint8_t x175 = 58U;
	int32_t t41 = 27461699;

    t41 = (((x173^x174)<=x175)%x176);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x179 = 93U;
	volatile uint64_t t42 = 594432LLU;

    t42 = (((x177^x178)<=x179)%x180);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x181 = INT64_MIN;
	static volatile int64_t x182 = INT64_MAX;
	int64_t t43 = 35417662940476174LL;

    t43 = (((x181^x182)<=x183)%x184);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x185 = -61775618885208074LL;
	int32_t x186 = -6;
	uint16_t x187 = UINT16_MAX;
	int64_t x188 = INT64_MAX;
	volatile int64_t t44 = 83632945LL;

    t44 = (((x185^x186)<=x187)%x188);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x189 = 19U;
	int8_t x191 = INT8_MIN;
	uint32_t x192 = UINT32_MAX;
	static volatile uint32_t t45 = 4032U;

    t45 = (((x189^x190)<=x191)%x192);

    if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x193 = -1LL;
	int64_t x194 = INT64_MAX;
	volatile uint64_t t46 = 26317LLU;

    t46 = (((x193^x194)<=x195)%x196);

    if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x197 = 10LL;
	uint8_t x198 = 2U;
	uint32_t x199 = 958386U;
	int32_t x200 = INT32_MIN;

    t47 = (((x197^x198)<=x199)%x200);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x201 = INT8_MAX;
	uint32_t x202 = UINT32_MAX;
	volatile int32_t x203 = 1;
	int32_t t48 = -2065863;

    t48 = (((x201^x202)<=x203)%x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x206 = -3684LL;
	volatile int16_t x207 = -1;
	static int32_t t49 = -290257301;

    t49 = (((x205^x206)<=x207)%x208);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x209 = INT64_MAX;
	volatile int64_t x210 = 81488323LL;
	static int32_t x211 = -267042560;
	static int8_t x212 = INT8_MAX;
	static int32_t t50 = 1;

    t50 = (((x209^x210)<=x211)%x212);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x213 = INT64_MAX;
	uint32_t x214 = 41488647U;
	int64_t x215 = INT64_MAX;
	int16_t x216 = -1;
	int32_t t51 = 13797456;

    t51 = (((x213^x214)<=x215)%x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x217 = 392366726236614LL;
	static int32_t x218 = INT32_MIN;
	int32_t x219 = INT32_MIN;
	int64_t x220 = -1LL;
	static int64_t t52 = -1086LL;

    t52 = (((x217^x218)<=x219)%x220);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x221 = -1;
	int8_t x222 = INT8_MIN;
	static uint8_t x223 = 13U;
	int64_t x224 = INT64_MAX;

    t53 = (((x221^x222)<=x223)%x224);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x225 = UINT16_MAX;
	int16_t x226 = 0;
	volatile int64_t x228 = -354016LL;
	volatile int64_t t54 = -4337410458118148660LL;

    t54 = (((x225^x226)<=x227)%x228);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x230 = 4569U;
	static int16_t x231 = INT16_MIN;
	volatile int8_t x232 = INT8_MIN;

    t55 = (((x229^x230)<=x231)%x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = INT8_MAX;
	static volatile int8_t x235 = -8;
	static int64_t x236 = -1LL;

    t56 = (((x233^x234)<=x235)%x236);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x237 = 14985U;
	int32_t x238 = INT32_MAX;
	uint32_t x239 = UINT32_MAX;
	static int16_t x240 = INT16_MAX;
	volatile int32_t t57 = 6256;

    t57 = (((x237^x238)<=x239)%x240);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int64_t x241 = 1163LL;
	int8_t x242 = 0;
	uint8_t x243 = 0U;
	int16_t x244 = INT16_MIN;
	volatile int32_t t58 = 184444;

    t58 = (((x241^x242)<=x243)%x244);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x245 = INT64_MAX;
	int16_t x246 = -1;
	static int64_t x247 = INT64_MIN;
	static int32_t x248 = INT32_MIN;
	int32_t t59 = 135268;

    t59 = (((x245^x246)<=x247)%x248);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x249 = UINT64_MAX;
	static int32_t x250 = 685946518;
	int64_t x251 = INT64_MAX;
	uint8_t x252 = UINT8_MAX;
	volatile int32_t t60 = -4;

    t60 = (((x249^x250)<=x251)%x252);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x253 = INT64_MIN;
	int32_t x254 = -1;
	int16_t x255 = INT16_MIN;
	static uint16_t x256 = UINT16_MAX;
	volatile int32_t t61 = 154874;

    t61 = (((x253^x254)<=x255)%x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x257 = INT8_MIN;
	uint8_t x258 = 1U;
	int32_t x259 = -1;
	int16_t x260 = -202;

    t62 = (((x257^x258)<=x259)%x260);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x261 = -1;
	uint64_t x263 = 2184022080323LLU;
	int32_t t63 = -326508;

    t63 = (((x261^x262)<=x263)%x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x265 = INT64_MIN;
	int16_t x266 = -1;
	static int8_t x267 = -59;
	int16_t x268 = INT16_MIN;
	volatile int32_t t64 = 19344;

    t64 = (((x265^x266)<=x267)%x268);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x269 = 2U;
	int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	static int32_t x272 = -1;

    t65 = (((x269^x270)<=x271)%x272);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x278 = INT64_MAX;
	uint32_t x280 = 2183U;

    t66 = (((x277^x278)<=x279)%x280);

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x282 = UINT64_MAX;
	static int16_t x283 = -1;
	int16_t x284 = INT16_MIN;
	volatile int32_t t67 = 43;

    t67 = (((x281^x282)<=x283)%x284);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x285 = -1;
	int8_t x288 = INT8_MIN;
	volatile int32_t t68 = -4058;

    t68 = (((x285^x286)<=x287)%x288);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x289 = INT64_MIN;
	int32_t x290 = INT32_MIN;
	int32_t x291 = INT32_MIN;
	int16_t x292 = INT16_MIN;
	static int32_t t69 = 3;

    t69 = (((x289^x290)<=x291)%x292);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x293 = INT16_MIN;
	int32_t x294 = INT32_MIN;
	uint8_t x295 = 2U;
	int64_t x296 = -1LL;
	int64_t t70 = -12463391979LL;

    t70 = (((x293^x294)<=x295)%x296);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x297 = UINT16_MAX;
	int64_t x298 = INT64_MIN;
	int16_t x299 = INT16_MIN;
	int32_t x300 = 1;
	volatile int32_t t71 = -105267603;

    t71 = (((x297^x298)<=x299)%x300);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x301 = INT16_MAX;
	static int16_t x302 = INT16_MAX;
	int8_t x303 = INT8_MIN;
	volatile uint16_t x304 = 7U;
	int32_t t72 = -589828834;

    t72 = (((x301^x302)<=x303)%x304);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x305 = 854045U;
	static int16_t x306 = INT16_MIN;
	int64_t x308 = INT64_MIN;
	int64_t t73 = -121581826518901LL;

    t73 = (((x305^x306)<=x307)%x308);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x310 = -1;
	int8_t x311 = -1;
	int64_t t74 = -9788358329605819LL;

    t74 = (((x309^x310)<=x311)%x312);

    if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x313 = INT16_MIN;
	uint32_t x314 = 26U;
	int8_t x315 = -1;
	volatile int32_t x316 = INT32_MIN;
	volatile int32_t t75 = -39717470;

    t75 = (((x313^x314)<=x315)%x316);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x317 = 28U;
	int8_t x319 = 0;
	int8_t x320 = -1;
	volatile int32_t t76 = 26056505;

    t76 = (((x317^x318)<=x319)%x320);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x321 = UINT8_MAX;
	static int8_t x322 = INT8_MAX;
	uint16_t x323 = 11U;
	uint8_t x324 = 59U;
	int32_t t77 = -88836;

    t77 = (((x321^x322)<=x323)%x324);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x325 = 132519109544423007LLU;
	uint8_t x327 = 126U;
	static int64_t x328 = 384LL;

    t78 = (((x325^x326)<=x327)%x328);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x334 = 214U;
	uint32_t x335 = 67235U;
	uint16_t x336 = UINT16_MAX;
	int32_t t79 = -93219840;

    t79 = (((x333^x334)<=x335)%x336);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x337 = INT8_MIN;
	volatile int64_t x339 = -1LL;
	int64_t x340 = 8529661LL;
	volatile int64_t t80 = -433442240LL;

    t80 = (((x337^x338)<=x339)%x340);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x341 = INT32_MIN;
	uint64_t x342 = 626175LLU;
	int8_t x343 = -1;
	uint32_t x344 = 25067792U;

    t81 = (((x341^x342)<=x343)%x344);

    if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x346 = 431168703219LL;
	int16_t x347 = -1;
	int32_t x348 = INT32_MAX;
	volatile int32_t t82 = -16;

    t82 = (((x345^x346)<=x347)%x348);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x350 = -1;
	int32_t x351 = 159947183;
	volatile int32_t t83 = -196;

    t83 = (((x349^x350)<=x351)%x352);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x353 = 1486LLU;
	int64_t x355 = INT64_MIN;
	static int64_t x356 = 207LL;
	volatile int64_t t84 = -23885348583LL;

    t84 = (((x353^x354)<=x355)%x356);

    if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x361 = -1597;
	uint8_t x362 = 15U;
	int16_t x364 = 76;
	int32_t t85 = -495852;

    t85 = (((x361^x362)<=x363)%x364);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x365 = -1;
	int8_t x366 = INT8_MAX;
	uint32_t x367 = 118591644U;
	volatile int32_t t86 = 3;

    t86 = (((x365^x366)<=x367)%x368);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x369 = INT16_MIN;
	volatile int16_t x370 = -15032;
	volatile int32_t x371 = 114;
	int64_t x372 = INT64_MIN;
	int64_t t87 = -843LL;

    t87 = (((x369^x370)<=x371)%x372);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x379 = 3088619091548LL;
	volatile uint32_t t88 = 1612058504U;

    t88 = (((x377^x378)<=x379)%x380);

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x381 = UINT8_MAX;
	static int32_t x382 = 198831798;
	static uint64_t x384 = 2244575864924208LLU;
	volatile uint64_t t89 = 236471LLU;

    t89 = (((x381^x382)<=x383)%x384);

    if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x386 = 7740;
	int32_t x387 = -1;
	static uint32_t t90 = 34200U;

    t90 = (((x385^x386)<=x387)%x388);

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x389 = INT32_MAX;
	int8_t x390 = INT8_MAX;
	int32_t x391 = INT32_MIN;
	uint64_t x392 = 46053434LLU;
	uint64_t t91 = 230LLU;

    t91 = (((x389^x390)<=x391)%x392);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x394 = -3;
	int32_t x395 = INT32_MAX;
	uint32_t x396 = UINT32_MAX;
	static uint32_t t92 = 2530U;

    t92 = (((x393^x394)<=x395)%x396);

    if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x397 = -1;
	int32_t x398 = -1;
	int64_t x399 = INT64_MAX;
	volatile uint64_t t93 = 29LLU;

    t93 = (((x397^x398)<=x399)%x400);

    if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x402 = UINT16_MAX;
	volatile int16_t x403 = INT16_MAX;
	int16_t x404 = INT16_MIN;
	int32_t t94 = -883337;

    t94 = (((x401^x402)<=x403)%x404);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x405 = INT32_MAX;
	uint16_t x406 = 0U;
	static int16_t x407 = INT16_MAX;
	volatile int16_t x408 = -88;
	int32_t t95 = 1;

    t95 = (((x405^x406)<=x407)%x408);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x409 = INT64_MIN;
	uint8_t x410 = 27U;
	static volatile int16_t x411 = INT16_MIN;
	int32_t t96 = 1;

    t96 = (((x409^x410)<=x411)%x412);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x413 = -1;
	int16_t x414 = -1;
	int16_t x416 = INT16_MIN;
	volatile int32_t t97 = 2476;

    t97 = (((x413^x414)<=x415)%x416);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x417 = INT32_MIN;
	uint64_t x418 = 6642176618LLU;
	static volatile int32_t x419 = -1;
	volatile int32_t t98 = -173815053;

    t98 = (((x417^x418)<=x419)%x420);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x422 = 13;
	int16_t x423 = 3150;
	static int32_t x424 = INT32_MIN;
	int32_t t99 = 1;

    t99 = (((x421^x422)<=x423)%x424);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x427 = 185307140693LLU;
	volatile int16_t x428 = 2926;
	static int32_t t100 = -1;

    t100 = (((x425^x426)<=x427)%x428);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x429 = -1LL;
	int64_t x430 = -1LL;
	volatile int16_t x431 = INT16_MAX;
	int16_t x432 = -1;
	int32_t t101 = 3473;

    t101 = (((x429^x430)<=x431)%x432);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x433 = INT64_MIN;
	uint32_t x434 = 18048U;
	uint32_t x435 = 2915U;
	int32_t x436 = INT32_MIN;
	int32_t t102 = -52620;

    t102 = (((x433^x434)<=x435)%x436);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x439 = -1101497LL;
	uint64_t x440 = 93222240731242305LLU;
	uint64_t t103 = 113819622659LLU;

    t103 = (((x437^x438)<=x439)%x440);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x442 = INT8_MAX;
	int8_t x443 = INT8_MIN;
	volatile int64_t x444 = INT64_MIN;
	volatile int64_t t104 = -251809715846LL;

    t104 = (((x441^x442)<=x443)%x444);

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x445 = 393650LL;
	int8_t x446 = INT8_MIN;
	int16_t x447 = INT16_MIN;
	uint16_t x448 = 4U;
	volatile int32_t t105 = 213169;

    t105 = (((x445^x446)<=x447)%x448);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x450 = 3398U;
	int64_t x452 = -1630311539LL;
	static volatile int64_t t106 = 304LL;

    t106 = (((x449^x450)<=x451)%x452);

    if (t106 != 1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x453 = -3298773;
	volatile int64_t x455 = INT64_MIN;
	volatile int32_t x456 = INT32_MIN;
	volatile int32_t t107 = -4060386;

    t107 = (((x453^x454)<=x455)%x456);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x458 = INT8_MIN;
	uint8_t x459 = 4U;
	static int16_t x460 = -771;
	volatile int32_t t108 = 51924238;

    t108 = (((x457^x458)<=x459)%x460);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x461 = INT16_MIN;
	static int8_t x463 = -1;
	static int64_t t109 = 1009556557762LL;

    t109 = (((x461^x462)<=x463)%x464);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x465 = 82LLU;
	int16_t x467 = 3926;
	static int32_t t110 = 5;

    t110 = (((x465^x466)<=x467)%x468);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x469 = 159769LLU;
	volatile uint32_t x470 = 3491720U;
	int32_t x471 = -1;
	int64_t x472 = -1LL;
	int64_t t111 = 768992128373832883LL;

    t111 = (((x469^x470)<=x471)%x472);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x473 = UINT64_MAX;
	int16_t x474 = -1;
	int64_t x476 = -31452028112LL;
	static int64_t t112 = 6163141LL;

    t112 = (((x473^x474)<=x475)%x476);

    if (t112 != 1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x478 = -27;
	volatile int16_t x479 = INT16_MIN;
	int64_t x480 = 59717640988LL;
	static int64_t t113 = 167178756784LL;

    t113 = (((x477^x478)<=x479)%x480);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x483 = INT64_MIN;
	uint64_t x484 = UINT64_MAX;
	uint64_t t114 = 147618633041LLU;

    t114 = (((x481^x482)<=x483)%x484);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x485 = INT32_MIN;
	uint64_t x486 = 40106345086792179LLU;
	uint16_t x488 = 7U;
	int32_t t115 = 419658;

    t115 = (((x485^x486)<=x487)%x488);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint32_t x489 = 247393160U;
	volatile int32_t x490 = -961379585;
	static volatile int16_t x491 = -1;
	volatile uint8_t x492 = 7U;

    t116 = (((x489^x490)<=x491)%x492);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x493 = 100U;
	volatile uint32_t x494 = 8181U;
	uint32_t x495 = 8245841U;
	int64_t x496 = -1LL;
	volatile int64_t t117 = -852LL;

    t117 = (((x493^x494)<=x495)%x496);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x497 = INT32_MIN;
	static volatile int8_t x498 = INT8_MIN;
	int32_t x499 = INT32_MAX;
	volatile int32_t x500 = INT32_MIN;
	int32_t t118 = 7;

    t118 = (((x497^x498)<=x499)%x500);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x501 = UINT64_MAX;
	static int8_t x502 = INT8_MAX;
	uint16_t x503 = 25U;
	int8_t x504 = -1;
	static volatile int32_t t119 = 1;

    t119 = (((x501^x502)<=x503)%x504);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x505 = 6U;
	uint16_t x506 = UINT16_MAX;
	int32_t x507 = -1;
	int32_t x508 = INT32_MAX;
	volatile int32_t t120 = -702621271;

    t120 = (((x505^x506)<=x507)%x508);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x509 = UINT32_MAX;
	int16_t x511 = INT16_MIN;
	volatile int32_t t121 = 16795098;

    t121 = (((x509^x510)<=x511)%x512);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x513 = -4;
	uint8_t x514 = 0U;
	static int64_t x515 = 293186LL;
	int8_t x516 = -1;
	volatile int32_t t122 = 33;

    t122 = (((x513^x514)<=x515)%x516);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x517 = INT16_MIN;
	volatile int32_t x518 = 0;
	volatile int32_t t123 = 63456;

    t123 = (((x517^x518)<=x519)%x520);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x521 = 1U;
	int8_t x522 = -25;
	static volatile int16_t x524 = -1;
	static volatile int32_t t124 = -16;

    t124 = (((x521^x522)<=x523)%x524);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x526 = -1;
	volatile int64_t t125 = 92LL;

    t125 = (((x525^x526)<=x527)%x528);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x529 = 1U;
	int16_t x530 = INT16_MAX;
	static int64_t x531 = -5079LL;
	int32_t t126 = -2258;

    t126 = (((x529^x530)<=x531)%x532);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x533 = INT8_MIN;
	int16_t x534 = INT16_MAX;
	int16_t x535 = 7007;
	static int32_t x536 = -297;
	volatile int32_t t127 = 17183;

    t127 = (((x533^x534)<=x535)%x536);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x537 = -1;
	int32_t x538 = INT32_MIN;
	volatile uint64_t x539 = UINT64_MAX;
	volatile int64_t x540 = INT64_MIN;

    t128 = (((x537^x538)<=x539)%x540);

    if (t128 != 1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x541 = UINT32_MAX;
	int32_t x542 = INT32_MIN;
	static int16_t x544 = -1;
	volatile int32_t t129 = -31;

    t129 = (((x541^x542)<=x543)%x544);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x545 = -1;
	int8_t x546 = -1;
	uint64_t x547 = UINT64_MAX;
	int16_t x548 = INT16_MIN;
	volatile int32_t t130 = -3;

    t130 = (((x545^x546)<=x547)%x548);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x549 = 80;
	uint32_t t131 = 2392375U;

    t131 = (((x549^x550)<=x551)%x552);

    if (t131 != 1U) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x553 = INT8_MAX;
	uint64_t x555 = 167184LLU;
	uint64_t x556 = UINT64_MAX;
	uint64_t t132 = 559575LLU;

    t132 = (((x553^x554)<=x555)%x556);

    if (t132 != 1LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x557 = INT64_MIN;
	uint16_t x559 = 3U;
	int8_t x560 = INT8_MIN;

    t133 = (((x557^x558)<=x559)%x560);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x561 = INT16_MIN;
	static uint16_t x562 = 2U;
	static uint64_t x563 = 1885482582344LLU;
	int64_t x564 = -1LL;
	volatile int64_t t134 = -205716625LL;

    t134 = (((x561^x562)<=x563)%x564);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x565 = -2;
	uint8_t x566 = 11U;
	uint16_t x567 = UINT16_MAX;
	int16_t x568 = INT16_MAX;
	static int32_t t135 = 6;

    t135 = (((x565^x566)<=x567)%x568);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x569 = INT64_MIN;
	static int16_t x570 = INT16_MAX;
	static uint32_t x571 = 314387884U;
	volatile uint64_t x572 = UINT64_MAX;
	volatile uint64_t t136 = 91989072207521LLU;

    t136 = (((x569^x570)<=x571)%x572);

    if (t136 != 1LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint16_t x573 = 22707U;
	int64_t x574 = -1LL;
	uint16_t x575 = 28U;
	static volatile int16_t x576 = -50;
	static volatile int32_t t137 = -218;

    t137 = (((x573^x574)<=x575)%x576);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x577 = INT32_MAX;
	int16_t x578 = INT16_MIN;
	int8_t x579 = 1;
	static volatile int8_t x580 = -1;
	static volatile int32_t t138 = -1930;

    t138 = (((x577^x578)<=x579)%x580);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x581 = 8396586482LLU;
	volatile int64_t x582 = INT64_MAX;
	volatile int16_t x583 = INT16_MIN;
	int32_t x584 = 884;
	int32_t t139 = 71;

    t139 = (((x581^x582)<=x583)%x584);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x585 = INT64_MIN;
	int64_t x586 = INT64_MIN;
	static int64_t x588 = -1LL;
	int64_t t140 = 1095LL;

    t140 = (((x585^x586)<=x587)%x588);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x589 = 539269743852LLU;
	volatile int32_t x590 = -1;
	uint16_t x591 = UINT16_MAX;
	volatile uint64_t x592 = 262955588247376263LLU;
	uint64_t t141 = 2310LLU;

    t141 = (((x589^x590)<=x591)%x592);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x593 = 22715526123LLU;
	static uint8_t x594 = 30U;
	static uint64_t x595 = UINT64_MAX;
	int64_t x596 = INT64_MIN;
	int64_t t142 = -4955102345856112LL;

    t142 = (((x593^x594)<=x595)%x596);

    if (t142 != 1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x598 = UINT64_MAX;
	static int8_t x599 = INT8_MAX;
	int64_t x600 = INT64_MIN;
	int64_t t143 = 46298LL;

    t143 = (((x597^x598)<=x599)%x600);

    if (t143 != 1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x601 = -1;
	int64_t x602 = INT64_MIN;
	volatile uint8_t x603 = UINT8_MAX;
	static int32_t x604 = 7;
	int32_t t144 = 10994122;

    t144 = (((x601^x602)<=x603)%x604);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x606 = -8;
	int64_t x607 = -239319541668909374LL;
	int64_t x608 = -8715215973101546LL;
	volatile int64_t t145 = -127246705537382207LL;

    t145 = (((x605^x606)<=x607)%x608);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int64_t x609 = -1LL;
	int64_t x610 = INT64_MAX;
	int64_t x611 = -1LL;
	volatile uint32_t x612 = 1U;
	volatile uint32_t t146 = 7U;

    t146 = (((x609^x610)<=x611)%x612);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int64_t x613 = INT64_MAX;
	int64_t x614 = 5934995670LL;
	int16_t x615 = -1;
	static int32_t t147 = -2864052;

    t147 = (((x613^x614)<=x615)%x616);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x621 = INT16_MAX;
	volatile uint16_t x624 = 1605U;

    t148 = (((x621^x622)<=x623)%x624);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x626 = 213LL;
	static int16_t x627 = -1;
	volatile uint32_t t149 = 1240838455U;

    t149 = (((x625^x626)<=x627)%x628);

    if (t149 != 1U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x629 = 13;
	int16_t x631 = INT16_MIN;
	uint32_t x632 = 1672906710U;

    t150 = (((x629^x630)<=x631)%x632);

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x633 = INT32_MAX;
	volatile int8_t x634 = INT8_MIN;
	static int8_t x635 = -58;
	static int32_t x636 = 267135;
	volatile int32_t t151 = 658431;

    t151 = (((x633^x634)<=x635)%x636);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x638 = -20;
	int32_t t152 = 4049963;

    t152 = (((x637^x638)<=x639)%x640);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x641 = INT16_MAX;
	volatile int64_t x642 = INT64_MIN;
	uint8_t x643 = 122U;

    t153 = (((x641^x642)<=x643)%x644);

    if (t153 != 1LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x645 = UINT32_MAX;
	static int32_t x646 = INT32_MIN;
	int64_t x648 = -1LL;
	volatile int64_t t154 = -161285144161943LL;

    t154 = (((x645^x646)<=x647)%x648);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x649 = INT64_MAX;
	static int8_t x650 = -1;
	int32_t x651 = -1;
	int16_t x652 = -1;

    t155 = (((x649^x650)<=x651)%x652);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x653 = INT8_MIN;
	int64_t x654 = INT64_MIN;
	static int8_t x655 = -1;
	int64_t x656 = -1LL;
	volatile int64_t t156 = -602160160684914LL;

    t156 = (((x653^x654)<=x655)%x656);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x659 = UINT64_MAX;
	volatile int32_t x660 = INT32_MIN;
	int32_t t157 = -6299254;

    t157 = (((x657^x658)<=x659)%x660);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x661 = 551668895U;
	int8_t x662 = 7;
	static int16_t x663 = -1;
	int32_t x664 = INT32_MIN;

    t158 = (((x661^x662)<=x663)%x664);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x665 = -2913799LL;
	static uint8_t x666 = 3U;
	static int32_t t159 = 20;

    t159 = (((x665^x666)<=x667)%x668);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x669 = 1660;
	volatile int8_t x671 = 1;
	int8_t x672 = 27;
	volatile int32_t t160 = 13253;

    t160 = (((x669^x670)<=x671)%x672);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x673 = INT8_MAX;
	int32_t x675 = -2947;
	int8_t x676 = -1;

    t161 = (((x673^x674)<=x675)%x676);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x677 = INT8_MIN;
	static uint64_t x678 = 1517220668440862LLU;
	int8_t x679 = -1;
	int8_t x680 = INT8_MIN;

    t162 = (((x677^x678)<=x679)%x680);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x681 = -1417;
	uint64_t x683 = 1150LLU;
	int32_t t163 = -1;

    t163 = (((x681^x682)<=x683)%x684);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x685 = -1LL;
	int16_t x686 = -6218;
	int16_t x687 = INT16_MIN;
	static uint16_t x688 = 59U;
	int32_t t164 = 20357793;

    t164 = (((x685^x686)<=x687)%x688);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x690 = INT16_MAX;
	static volatile uint16_t x691 = 3938U;
	uint8_t x692 = 30U;
	static int32_t t165 = -149071559;

    t165 = (((x689^x690)<=x691)%x692);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x693 = 2628554505464LLU;
	int16_t x694 = -1;

    t166 = (((x693^x694)<=x695)%x696);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x697 = INT64_MIN;
	int64_t x698 = INT64_MAX;
	int32_t x699 = 43945;
	int32_t x700 = INT32_MIN;
	int32_t t167 = -161;

    t167 = (((x697^x698)<=x699)%x700);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x701 = -44;
	volatile int16_t x702 = -1743;
	int64_t x703 = -1LL;

    t168 = (((x701^x702)<=x703)%x704);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x705 = 25;
	int8_t x706 = INT8_MAX;
	static volatile int64_t x707 = INT64_MIN;
	int64_t x708 = INT64_MAX;
	int64_t t169 = -2179344504888123LL;

    t169 = (((x705^x706)<=x707)%x708);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x709 = INT64_MAX;
	static int8_t x710 = INT8_MAX;
	int64_t x711 = INT64_MIN;
	volatile int32_t x712 = -1;
	volatile int32_t t170 = 14225;

    t170 = (((x709^x710)<=x711)%x712);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x714 = -1;
	uint16_t x716 = UINT16_MAX;
	int32_t t171 = -105;

    t171 = (((x713^x714)<=x715)%x716);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x717 = 327677965161749022LL;
	volatile int32_t x718 = INT32_MIN;
	uint8_t x719 = UINT8_MAX;
	int64_t x720 = INT64_MIN;
	int64_t t172 = -1LL;

    t172 = (((x717^x718)<=x719)%x720);

    if (t172 != 1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x722 = 1U;
	volatile int8_t x724 = INT8_MIN;

    t173 = (((x721^x722)<=x723)%x724);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x726 = 0LL;
	int8_t x727 = 1;
	volatile int32_t t174 = 623;

    t174 = (((x725^x726)<=x727)%x728);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x729 = INT32_MIN;
	int16_t x730 = 0;
	int64_t x731 = INT64_MIN;
	int32_t x732 = INT32_MIN;
	int32_t t175 = 72139;

    t175 = (((x729^x730)<=x731)%x732);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x733 = INT16_MIN;
	static int64_t x735 = INT64_MIN;
	int16_t x736 = INT16_MIN;
	volatile int32_t t176 = 6699;

    t176 = (((x733^x734)<=x735)%x736);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x737 = -1;
	int8_t x738 = INT8_MAX;
	int64_t x739 = 44LL;
	uint64_t x740 = 2363365309LLU;

    t177 = (((x737^x738)<=x739)%x740);

    if (t177 != 1LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x741 = INT64_MIN;
	uint64_t x742 = UINT64_MAX;
	int16_t x743 = -3988;
	volatile int16_t x744 = -4438;
	static volatile int32_t t178 = 1;

    t178 = (((x741^x742)<=x743)%x744);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x745 = 1;
	uint16_t x748 = 1U;
	static int32_t t179 = -1972;

    t179 = (((x745^x746)<=x747)%x748);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x749 = 15;
	volatile int32_t x751 = -1;
	int16_t x752 = INT16_MIN;
	int32_t t180 = 20486662;

    t180 = (((x749^x750)<=x751)%x752);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x754 = UINT64_MAX;
	uint8_t x755 = 123U;
	uint16_t x756 = UINT16_MAX;
	int32_t t181 = 1517;

    t181 = (((x753^x754)<=x755)%x756);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x757 = 16916707U;
	static int64_t x758 = INT64_MIN;
	volatile int64_t x759 = -1008LL;
	static volatile int32_t t182 = -34918573;

    t182 = (((x757^x758)<=x759)%x760);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x762 = INT64_MIN;
	volatile int32_t t183 = -142786119;

    t183 = (((x761^x762)<=x763)%x764);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x765 = INT8_MIN;
	volatile int16_t x766 = INT16_MAX;
	volatile int8_t x767 = INT8_MAX;
	static int16_t x768 = INT16_MIN;
	static int32_t t184 = 1025;

    t184 = (((x765^x766)<=x767)%x768);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x769 = INT32_MAX;
	uint64_t x770 = UINT64_MAX;
	volatile int32_t t185 = -37858;

    t185 = (((x769^x770)<=x771)%x772);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x774 = INT16_MAX;
	uint64_t x775 = UINT64_MAX;
	uint16_t x776 = 2U;
	volatile int32_t t186 = -1676;

    t186 = (((x773^x774)<=x775)%x776);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x777 = 356U;
	uint32_t x778 = 518823393U;
	volatile uint8_t x779 = UINT8_MAX;
	uint8_t x780 = UINT8_MAX;
	volatile int32_t t187 = 3;

    t187 = (((x777^x778)<=x779)%x780);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x781 = INT32_MIN;
	static uint32_t x782 = 17671443U;
	uint32_t t188 = 62825U;

    t188 = (((x781^x782)<=x783)%x784);

    if (t188 != 1U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x785 = 1686535715LLU;
	volatile uint8_t x787 = 12U;
	int8_t x788 = INT8_MIN;
	volatile int32_t t189 = 58001582;

    t189 = (((x785^x786)<=x787)%x788);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x789 = 15986431U;
	int32_t x790 = INT32_MIN;
	static int16_t x791 = -1;
	int16_t x792 = INT16_MIN;
	static volatile int32_t t190 = -1;

    t190 = (((x789^x790)<=x791)%x792);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x793 = INT8_MIN;
	volatile int16_t x794 = -3;

    t191 = (((x793^x794)<=x795)%x796);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x797 = -1;
	int64_t x798 = INT64_MIN;
	int32_t x799 = INT32_MIN;
	volatile uint64_t x800 = 675052318LLU;
	uint64_t t192 = 534457725922LLU;

    t192 = (((x797^x798)<=x799)%x800);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x801 = 5269500LLU;
	int16_t x802 = 0;
	int16_t x803 = INT16_MAX;
	uint16_t x804 = UINT16_MAX;

    t193 = (((x801^x802)<=x803)%x804);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x805 = INT16_MIN;
	volatile int8_t x806 = -1;
	volatile int8_t x807 = INT8_MAX;

    t194 = (((x805^x806)<=x807)%x808);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x813 = 3602LL;
	int16_t x815 = -1;
	int32_t t195 = 98;

    t195 = (((x813^x814)<=x815)%x816);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x817 = -2711477;
	int16_t x818 = -1;
	uint32_t x819 = 2989698U;
	volatile int32_t x820 = INT32_MIN;
	int32_t t196 = 517;

    t196 = (((x817^x818)<=x819)%x820);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x821 = UINT16_MAX;
	int32_t x822 = INT32_MIN;
	uint16_t x823 = 84U;
	int32_t x824 = 387;
	volatile int32_t t197 = 35;

    t197 = (((x821^x822)<=x823)%x824);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x825 = 0U;
	int16_t x826 = INT16_MIN;
	uint32_t x827 = UINT32_MAX;
	int8_t x828 = 29;
	volatile int32_t t198 = 3341;

    t198 = (((x825^x826)<=x827)%x828);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x829 = INT16_MIN;
	int64_t x830 = 253796756857361LL;
	static int64_t x831 = -2201221000553573895LL;
	int8_t x832 = -1;

    t199 = (((x829^x830)<=x831)%x832);

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


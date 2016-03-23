
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

volatile int8_t x1 = -1;
uint8_t x3 = 18U;
static int32_t x5 = INT32_MAX;
int32_t x15 = 1;
int16_t x22 = -11;
static int64_t x31 = INT64_MIN;
int16_t x41 = INT16_MIN;
uint32_t t10 = 4988668U;
int32_t x46 = INT32_MIN;
int32_t t11 = 114326489;
int64_t t12 = 262137279508773LL;
int16_t x53 = INT16_MAX;
static volatile int16_t x56 = INT16_MAX;
uint8_t x57 = 2U;
static uint32_t x60 = 3641462U;
uint8_t x63 = 12U;
static volatile uint8_t x69 = 2U;
static int32_t t19 = -31;
int32_t t22 = -127407;
volatile int8_t x94 = -16;
uint64_t x97 = 4026608817887001069LLU;
uint64_t x99 = UINT64_MAX;
int8_t x102 = 3;
static int32_t x110 = INT32_MAX;
static int64_t x111 = 5324844937LL;
uint8_t x114 = 11U;
uint32_t t29 = 3386U;
int64_t t34 = INT64_MIN;
uint32_t x142 = 7586U;
int8_t x143 = INT8_MIN;
volatile int8_t x145 = -13;
volatile int64_t x150 = -1LL;
static int8_t x151 = INT8_MIN;
int16_t x152 = INT16_MIN;
int8_t x170 = INT8_MAX;
int32_t x173 = -407;
uint64_t x175 = 9151427704845399626LLU;
int32_t t43 = -2464;
int64_t x181 = -30273658LL;
int8_t x183 = -1;
volatile int64_t x184 = INT64_MIN;
uint8_t x185 = UINT8_MAX;
int8_t x189 = -1;
uint16_t x192 = 1U;
int32_t x197 = -12311636;
uint32_t x208 = UINT32_MAX;
int64_t x211 = 42LL;
int32_t x214 = INT32_MAX;
static volatile uint64_t x219 = UINT64_MAX;
static int32_t x221 = -190;
uint8_t x235 = 112U;
int8_t x241 = INT8_MIN;
int32_t t60 = -1;
int16_t x268 = INT16_MIN;
int32_t x275 = -4203;
uint32_t x285 = UINT32_MAX;
static volatile int64_t x288 = -1LL;
uint32_t x292 = UINT32_MAX;
volatile int8_t x296 = 0;
int16_t x299 = -72;
uint16_t x301 = 0U;
uint32_t x303 = 0U;
int64_t x306 = INT64_MIN;
int16_t x307 = INT16_MIN;
int32_t t76 = -26;
volatile uint64_t t78 = UINT64_MAX;
static int64_t x323 = INT64_MIN;
volatile uint8_t x343 = 14U;
int8_t x344 = INT8_MIN;
int32_t t86 = 367899;
uint32_t t87 = 107102510U;
volatile int32_t t89 = 1;
volatile uint8_t x366 = 2U;
int16_t x371 = -1;
static int32_t x378 = INT32_MIN;
int16_t x381 = -1;
uint64_t t95 = 99985862LLU;
uint32_t x387 = UINT32_MAX;
int32_t t96 = -5983;
uint32_t x389 = 124881U;
static uint8_t x402 = 6U;
static int32_t x403 = -1;
static volatile uint8_t x408 = 0U;
int32_t x414 = 670081699;
static uint16_t x418 = 27U;
static int8_t x424 = INT8_MIN;
int32_t t105 = -2;
uint64_t t107 = UINT64_MAX;
static int16_t x434 = 2086;
int64_t t108 = INT64_MIN;
static int8_t x437 = -1;
uint16_t x438 = 778U;
volatile int16_t x442 = INT16_MIN;
int8_t x444 = -1;
static volatile int32_t x448 = INT32_MAX;
int32_t x450 = 1;
int64_t x459 = INT64_MIN;
int64_t x464 = -34677376331060LL;
volatile int64_t t115 = 3082196147LL;
volatile uint32_t x468 = 2315049U;
static uint8_t x486 = 43U;
int64_t t122 = 96941446093067LL;
uint16_t x499 = 4005U;
volatile int32_t x501 = INT32_MIN;
static uint32_t x503 = 6991U;
int64_t x505 = INT64_MIN;
int8_t x509 = INT8_MIN;
int64_t x511 = INT64_MIN;
int32_t x527 = -1;
static volatile int64_t t132 = -142025924315286722LL;
int16_t x533 = 4;
volatile uint8_t x534 = 46U;
volatile int32_t t133 = -987631678;
int16_t x545 = -1;
int32_t x557 = INT32_MIN;
static int32_t x559 = INT32_MAX;
int32_t x561 = -1;
int32_t t140 = -620797321;
int32_t x568 = INT32_MAX;
uint16_t x572 = 61U;
int8_t x586 = INT8_MIN;
int8_t x587 = -1;
int32_t x589 = 157005;
int32_t x597 = INT32_MAX;
int8_t x598 = INT8_MAX;
uint32_t x604 = 1237530U;
volatile uint32_t t150 = 27U;
volatile int32_t t151 = 2662110;
int64_t x614 = -64354493714864LL;
volatile int8_t x619 = INT8_MAX;
volatile int32_t t154 = 166248;
static int8_t x622 = INT8_MIN;
uint32_t x624 = 1890827U;
int8_t x626 = INT8_MIN;
int8_t x630 = INT8_MIN;
int8_t x631 = 1;
int32_t t158 = 3;
int64_t x637 = INT64_MAX;
int8_t x647 = 0;
int16_t x649 = -1690;
int16_t x654 = 1;
static uint16_t x662 = UINT16_MAX;
int8_t x664 = INT8_MIN;
static volatile uint8_t x669 = 24U;
volatile int32_t t167 = -83196;
static int8_t x674 = -9;
volatile int32_t t168 = -342025879;
int32_t x682 = -2;
static int16_t x689 = INT16_MIN;
volatile int16_t x691 = INT16_MIN;
int32_t x695 = -3876;
int64_t t173 = -3LL;
volatile int64_t t174 = -3013458813775LL;
volatile int16_t x709 = 0;
int8_t x720 = INT8_MAX;
uint8_t x731 = 41U;
volatile int32_t t183 = 42238;
int32_t x745 = 48667;
int32_t x748 = -223347845;
int32_t t188 = 11;
volatile uint64_t x761 = 15888061908111792LLU;
uint32_t x762 = 863951079U;
int64_t t190 = 7434173LL;
int16_t x767 = INT16_MIN;
int32_t t191 = -90194555;
uint64_t x773 = 3636015LLU;
int64_t x777 = INT64_MAX;
static volatile int32_t t196 = 21644458;
int8_t x791 = INT8_MAX;
volatile int32_t t199 = 417;


void f0(void) {
    	static uint64_t x2 = 14LLU;
	volatile int8_t x4 = -1;
	int32_t t0 = -1;

    t0 = ((x1!=(x2==x3))*x4);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = -8478;
	int16_t x7 = 314;
	static int64_t x8 = 13109843438864417LL;
	int64_t t1 = -935166961LL;

    t1 = ((x5!=(x6==x7))*x8);

    if (t1 != 13109843438864417LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -5;
	int32_t x10 = -1;
	int64_t x11 = -1LL;
	int8_t x12 = 2;
	volatile int32_t t2 = 3;

    t2 = ((x9!=(x10==x11))*x12);

    if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	static volatile int16_t x14 = INT16_MIN;
	static int16_t x16 = 5;
	int32_t t3 = -15790;

    t3 = ((x13!=(x14==x15))*x16);

    if (t3 != 5) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -37;
	int16_t x18 = INT16_MIN;
	static int32_t x19 = INT32_MAX;
	static uint64_t x20 = 164634948437831423LLU;
	volatile uint64_t t4 = 742616LLU;

    t4 = ((x17!=(x18==x19))*x20);

    if (t4 != 164634948437831423LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x21 = UINT32_MAX;
	int64_t x23 = -1LL;
	int32_t x24 = INT32_MAX;
	static volatile int32_t t5 = INT32_MAX;

    t5 = ((x21!=(x22==x23))*x24);

    if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	int32_t x26 = INT32_MIN;
	volatile uint8_t x27 = UINT8_MAX;
	int64_t x28 = -56863616LL;
	static int64_t t6 = -2091750LL;

    t6 = ((x25!=(x26==x27))*x28);

    if (t6 != -56863616LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = INT32_MIN;
	int16_t x30 = INT16_MAX;
	static int32_t x32 = INT32_MIN;
	int32_t t7 = INT32_MIN;

    t7 = ((x29!=(x30==x31))*x32);

    if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = UINT32_MAX;
	uint8_t x34 = 43U;
	int64_t x35 = INT64_MIN;
	static int8_t x36 = -7;
	int32_t t8 = 7952;

    t8 = ((x33!=(x34==x35))*x36);

    if (t8 != -7) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 51405U;
	uint64_t x38 = UINT64_MAX;
	volatile int16_t x39 = INT16_MAX;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = 97;

    t9 = ((x37!=(x38==x39))*x40);

    if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x42 = INT64_MIN;
	uint32_t x43 = 2813U;
	uint32_t x44 = 447U;

    t10 = ((x41!=(x42==x43))*x44);

    if (t10 != 447U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 1444LLU;
	static int16_t x47 = INT16_MIN;
	int16_t x48 = INT16_MIN;

    t11 = ((x45!=(x46==x47))*x48);

    if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 0U;
	volatile uint8_t x50 = 14U;
	int64_t x51 = -177LL;
	static int64_t x52 = INT64_MIN;

    t12 = ((x49!=(x50==x51))*x52);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x54 = INT16_MAX;
	static int32_t x55 = -1;
	volatile int32_t t13 = -14037;

    t13 = ((x53!=(x54==x55))*x56);

    if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x58 = INT32_MIN;
	int64_t x59 = 0LL;
	uint32_t t14 = 29837U;

    t14 = ((x57!=(x58==x59))*x60);

    if (t14 != 3641462U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x61 = -220;
	int8_t x62 = -1;
	int8_t x64 = 0;
	static int32_t t15 = -710;

    t15 = ((x61!=(x62==x63))*x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 40399LLU;
	int16_t x66 = 15;
	volatile int16_t x67 = -1;
	int16_t x68 = -1;
	int32_t t16 = 0;

    t16 = ((x65!=(x66==x67))*x68);

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = INT16_MIN;
	volatile int16_t x71 = INT16_MIN;
	static int8_t x72 = 3;
	volatile int32_t t17 = 9;

    t17 = ((x69!=(x70==x71))*x72);

    if (t17 != 3) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x73 = -1LL;
	int32_t x74 = 166704;
	int16_t x75 = INT16_MIN;
	static uint32_t x76 = 1346906U;
	volatile uint32_t t18 = 1128249093U;

    t18 = ((x73!=(x74==x75))*x76);

    if (t18 != 1346906U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = INT64_MIN;
	volatile uint32_t x78 = UINT32_MAX;
	int16_t x79 = INT16_MAX;
	volatile uint16_t x80 = 124U;

    t19 = ((x77!=(x78==x79))*x80);

    if (t19 != 124) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint8_t x81 = 52U;
	volatile uint8_t x82 = 6U;
	uint8_t x83 = 53U;
	static uint64_t x84 = 25LLU;
	uint64_t t20 = 219876579LLU;

    t20 = ((x81!=(x82==x83))*x84);

    if (t20 != 25LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x85 = 80813285607104LLU;
	volatile int8_t x86 = -1;
	uint8_t x87 = UINT8_MAX;
	static int32_t x88 = INT32_MIN;
	volatile int32_t t21 = INT32_MIN;

    t21 = ((x85!=(x86==x87))*x88);

    if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x89 = 7LLU;
	uint64_t x90 = UINT64_MAX;
	static uint8_t x91 = 98U;
	uint16_t x92 = 63U;

    t22 = ((x89!=(x90==x91))*x92);

    if (t22 != 63) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -1;
	int16_t x95 = -12592;
	static int32_t x96 = INT32_MIN;
	volatile int32_t t23 = INT32_MIN;

    t23 = ((x93!=(x94==x95))*x96);

    if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x98 = INT32_MAX;
	volatile uint16_t x100 = 14333U;
	volatile int32_t t24 = -451;

    t24 = ((x97!=(x98==x99))*x100);

    if (t24 != 14333) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x101 = INT16_MIN;
	int64_t x103 = -1LL;
	uint8_t x104 = UINT8_MAX;
	static volatile int32_t t25 = 10;

    t25 = ((x101!=(x102==x103))*x104);

    if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x105 = UINT8_MAX;
	int16_t x106 = -2;
	uint32_t x107 = 2938137U;
	static int16_t x108 = 0;
	volatile int32_t t26 = -523693;

    t26 = ((x105!=(x106==x107))*x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = INT16_MIN;
	volatile int8_t x112 = -1;
	volatile int32_t t27 = 75994882;

    t27 = ((x109!=(x110==x111))*x112);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x113 = UINT16_MAX;
	static volatile int8_t x115 = INT8_MIN;
	static uint64_t x116 = 67292819493672LLU;
	static uint64_t t28 = 4077LLU;

    t28 = ((x113!=(x114==x115))*x116);

    if (t28 != 67292819493672LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x117 = 68U;
	int16_t x118 = 40;
	volatile int32_t x119 = 355958;
	uint32_t x120 = 3994U;

    t29 = ((x117!=(x118==x119))*x120);

    if (t29 != 3994U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -341LL;
	uint32_t x122 = UINT32_MAX;
	volatile int8_t x123 = INT8_MIN;
	uint8_t x124 = 0U;
	static int32_t t30 = -2796086;

    t30 = ((x121!=(x122==x123))*x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = 124U;
	uint64_t x126 = 371385770331714LLU;
	int16_t x127 = INT16_MAX;
	volatile int32_t x128 = INT32_MAX;
	static volatile int32_t t31 = INT32_MAX;

    t31 = ((x125!=(x126==x127))*x128);

    if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -1LL;
	static uint8_t x130 = 23U;
	int16_t x131 = 0;
	static int8_t x132 = INT8_MIN;
	volatile int32_t t32 = 14754;

    t32 = ((x129!=(x130==x131))*x132);

    if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = UINT32_MAX;
	static int8_t x134 = INT8_MAX;
	uint32_t x135 = 35182U;
	volatile int64_t x136 = -1LL;
	volatile int64_t t33 = 514263380LL;

    t33 = ((x133!=(x134==x135))*x136);

    if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MAX;
	uint16_t x138 = UINT16_MAX;
	static int32_t x139 = -1;
	volatile int64_t x140 = INT64_MIN;

    t34 = ((x137!=(x138==x139))*x140);

    if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = 124;
	uint8_t x144 = 1U;
	volatile int32_t t35 = 31064;

    t35 = ((x141!=(x142==x143))*x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x146 = UINT16_MAX;
	int8_t x147 = -1;
	int32_t x148 = -1;
	volatile int32_t t36 = 58;

    t36 = ((x145!=(x146==x147))*x148);

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MAX;
	int32_t t37 = -50371;

    t37 = ((x149!=(x150==x151))*x152);

    if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x153 = 74377292U;
	static int16_t x154 = INT16_MIN;
	static uint8_t x155 = UINT8_MAX;
	int16_t x156 = INT16_MIN;
	volatile int32_t t38 = -50611;

    t38 = ((x153!=(x154==x155))*x156);

    if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x157 = 194329755170LL;
	volatile int32_t x158 = -1;
	volatile int16_t x159 = INT16_MAX;
	static uint8_t x160 = UINT8_MAX;
	volatile int32_t t39 = -1881542;

    t39 = ((x157!=(x158==x159))*x160);

    if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -13175;
	int64_t x162 = -1LL;
	uint8_t x163 = 0U;
	int64_t x164 = INT64_MAX;
	static volatile int64_t t40 = INT64_MAX;

    t40 = ((x161!=(x162==x163))*x164);

    if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x165 = UINT16_MAX;
	static uint16_t x166 = 1U;
	volatile int32_t x167 = INT32_MIN;
	int64_t x168 = -1LL;
	static int64_t t41 = 350597604457294135LL;

    t41 = ((x165!=(x166==x167))*x168);

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 7U;
	uint64_t x171 = UINT64_MAX;
	int16_t x172 = INT16_MIN;
	int32_t t42 = 1652;

    t42 = ((x169!=(x170==x171))*x172);

    if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x174 = UINT32_MAX;
	int16_t x176 = INT16_MAX;

    t43 = ((x173!=(x174==x175))*x176);

    if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 172U;
	uint8_t x178 = 42U;
	int16_t x179 = INT16_MAX;
	volatile uint64_t x180 = 76017195865434827LLU;
	volatile uint64_t t44 = 7643113296769183LLU;

    t44 = ((x177!=(x178==x179))*x180);

    if (t44 != 76017195865434827LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x182 = INT64_MIN;
	int64_t t45 = INT64_MIN;

    t45 = ((x181!=(x182==x183))*x184);

    if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x186 = INT32_MAX;
	int32_t x187 = 75954976;
	static int32_t x188 = -466;
	int32_t t46 = -164;

    t46 = ((x185!=(x186==x187))*x188);

    if (t46 != -466) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x190 = 64U;
	volatile uint32_t x191 = 59186U;
	int32_t t47 = -21;

    t47 = ((x189!=(x190==x191))*x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = 32962065109LL;
	int64_t x194 = 821023079127415LL;
	int64_t x195 = INT64_MAX;
	int16_t x196 = 2258;
	volatile int32_t t48 = 36382;

    t48 = ((x193!=(x194==x195))*x196);

    if (t48 != 2258) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x198 = 0;
	int8_t x199 = -1;
	int16_t x200 = -13417;
	int32_t t49 = 40;

    t49 = ((x197!=(x198==x199))*x200);

    if (t49 != -13417) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	int8_t x202 = INT8_MIN;
	int16_t x203 = INT16_MIN;
	int16_t x204 = INT16_MIN;
	int32_t t50 = -468776687;

    t50 = ((x201!=(x202==x203))*x204);

    if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = UINT64_MAX;
	volatile uint64_t x206 = 1LLU;
	static int32_t x207 = -20305;
	volatile uint32_t t51 = UINT32_MAX;

    t51 = ((x205!=(x206==x207))*x208);

    if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = 1U;
	volatile int16_t x210 = INT16_MIN;
	int8_t x212 = INT8_MIN;
	static volatile int32_t t52 = -630;

    t52 = ((x209!=(x210==x211))*x212);

    if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = 1225U;
	int8_t x215 = 1;
	int64_t x216 = INT64_MIN;
	static volatile int64_t t53 = INT64_MIN;

    t53 = ((x213!=(x214==x215))*x216);

    if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x217 = INT64_MIN;
	int16_t x218 = INT16_MIN;
	int32_t x220 = INT32_MIN;
	static int32_t t54 = INT32_MIN;

    t54 = ((x217!=(x218==x219))*x220);

    if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x222 = INT64_MIN;
	int16_t x223 = INT16_MIN;
	int16_t x224 = INT16_MAX;
	int32_t t55 = 24068704;

    t55 = ((x221!=(x222==x223))*x224);

    if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -18331593LL;
	uint64_t x226 = 64106648265364448LLU;
	static int8_t x227 = -1;
	static int8_t x228 = INT8_MIN;
	static volatile int32_t t56 = -25549;

    t56 = ((x225!=(x226==x227))*x228);

    if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = INT32_MIN;
	uint8_t x230 = UINT8_MAX;
	int16_t x231 = INT16_MAX;
	static volatile int64_t x232 = INT64_MIN;
	int64_t t57 = INT64_MIN;

    t57 = ((x229!=(x230==x231))*x232);

    if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = 121498952435316925LLU;
	volatile int64_t x234 = INT64_MAX;
	int8_t x236 = -1;
	int32_t t58 = 55035855;

    t58 = ((x233!=(x234==x235))*x236);

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MIN;
	uint64_t x238 = 953545390967LLU;
	static volatile uint16_t x239 = UINT16_MAX;
	uint64_t x240 = 14556LLU;
	static uint64_t t59 = 11258858669LLU;

    t59 = ((x237!=(x238==x239))*x240);

    if (t59 != 14556LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint16_t x242 = 69U;
	int64_t x243 = INT64_MAX;
	uint8_t x244 = UINT8_MAX;

    t60 = ((x241!=(x242==x243))*x244);

    if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = -3850;
	volatile uint64_t x246 = 3693200470123LLU;
	int32_t x247 = INT32_MIN;
	volatile int32_t x248 = -986901348;
	int32_t t61 = -16522648;

    t61 = ((x245!=(x246==x247))*x248);

    if (t61 != -986901348) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x249 = 3U;
	volatile int64_t x250 = -1LL;
	int32_t x251 = INT32_MAX;
	uint16_t x252 = UINT16_MAX;
	int32_t t62 = 9157936;

    t62 = ((x249!=(x250==x251))*x252);

    if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x253 = UINT8_MAX;
	static volatile int16_t x254 = INT16_MAX;
	int8_t x255 = -1;
	static uint32_t x256 = UINT32_MAX;
	static uint32_t t63 = UINT32_MAX;

    t63 = ((x253!=(x254==x255))*x256);

    if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = 98;
	int64_t x258 = -1564881400LL;
	uint64_t x259 = 12893986496031625LLU;
	int8_t x260 = INT8_MIN;
	static volatile int32_t t64 = 27714190;

    t64 = ((x257!=(x258==x259))*x260);

    if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = 7;
	volatile uint8_t x262 = 2U;
	uint16_t x263 = 1050U;
	static uint16_t x264 = 3786U;
	volatile int32_t t65 = -469438;

    t65 = ((x261!=(x262==x263))*x264);

    if (t65 != 3786) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MAX;
	uint32_t x266 = UINT32_MAX;
	int8_t x267 = INT8_MIN;
	int32_t t66 = 0;

    t66 = ((x265!=(x266==x267))*x268);

    if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 9614U;
	int64_t x270 = INT64_MAX;
	int32_t x271 = INT32_MIN;
	volatile uint16_t x272 = 5343U;
	volatile int32_t t67 = 544;

    t67 = ((x269!=(x270==x271))*x272);

    if (t67 != 5343) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x273 = UINT8_MAX;
	uint8_t x274 = UINT8_MAX;
	uint32_t x276 = 17U;
	uint32_t t68 = 469890261U;

    t68 = ((x273!=(x274==x275))*x276);

    if (t68 != 17U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 44913338U;
	uint8_t x278 = 0U;
	volatile int32_t x279 = 193;
	uint8_t x280 = UINT8_MAX;
	static int32_t t69 = -3425240;

    t69 = ((x277!=(x278==x279))*x280);

    if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MIN;
	static uint16_t x282 = 35U;
	int32_t x283 = INT32_MIN;
	volatile uint32_t x284 = 7U;
	uint32_t t70 = 758U;

    t70 = ((x281!=(x282==x283))*x284);

    if (t70 != 7U) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x286 = -1;
	uint64_t x287 = 186341278399206630LLU;
	int64_t t71 = -1LL;

    t71 = ((x285!=(x286==x287))*x288);

    if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MAX;
	int8_t x290 = INT8_MIN;
	volatile uint64_t x291 = 452168063857LLU;
	volatile uint32_t t72 = UINT32_MAX;

    t72 = ((x289!=(x290==x291))*x292);

    if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MAX;
	static volatile uint8_t x294 = 59U;
	int32_t x295 = INT32_MIN;
	volatile int32_t t73 = -3;

    t73 = ((x293!=(x294==x295))*x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -58;
	int32_t x298 = 355433;
	volatile int8_t x300 = INT8_MAX;
	static volatile int32_t t74 = 10481148;

    t74 = ((x297!=(x298==x299))*x300);

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x302 = INT8_MIN;
	uint8_t x304 = 0U;
	int32_t t75 = -12;

    t75 = ((x301!=(x302==x303))*x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 6930151U;
	int8_t x308 = 0;

    t76 = ((x305!=(x306==x307))*x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MIN;
	int8_t x310 = -1;
	int64_t x311 = -1203813LL;
	int16_t x312 = INT16_MIN;
	int32_t t77 = 121;

    t77 = ((x309!=(x310==x311))*x312);

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x313 = 1665133062071LLU;
	int64_t x314 = 1264091936076412344LL;
	int32_t x315 = -1;
	uint64_t x316 = UINT64_MAX;

    t78 = ((x313!=(x314==x315))*x316);

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x317 = INT8_MIN;
	int32_t x318 = -59;
	uint8_t x319 = 3U;
	volatile int64_t x320 = 372LL;
	int64_t t79 = 13717LL;

    t79 = ((x317!=(x318==x319))*x320);

    if (t79 != 372LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x321 = 1733U;
	int16_t x322 = -5349;
	volatile uint32_t x324 = UINT32_MAX;
	static uint32_t t80 = UINT32_MAX;

    t80 = ((x321!=(x322==x323))*x324);

    if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = -1;
	uint32_t x326 = 35U;
	uint32_t x327 = 503U;
	volatile int32_t x328 = 1388;
	volatile int32_t t81 = 6802524;

    t81 = ((x325!=(x326==x327))*x328);

    if (t81 != 1388) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MIN;
	int16_t x330 = INT16_MAX;
	int8_t x331 = 45;
	int32_t x332 = -1;
	volatile int32_t t82 = -78;

    t82 = ((x329!=(x330==x331))*x332);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -175;
	int16_t x334 = INT16_MAX;
	int16_t x335 = INT16_MIN;
	int64_t x336 = -1LL;
	int64_t t83 = 260LL;

    t83 = ((x333!=(x334==x335))*x336);

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x337 = -1;
	int32_t x338 = INT32_MAX;
	uint32_t x339 = 7710505U;
	volatile uint64_t x340 = 7585434691709LLU;
	volatile uint64_t t84 = 841108813LLU;

    t84 = ((x337!=(x338==x339))*x340);

    if (t84 != 7585434691709LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x341 = 0U;
	static uint16_t x342 = UINT16_MAX;
	volatile int32_t t85 = 24016896;

    t85 = ((x341!=(x342==x343))*x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = 465751U;
	static int16_t x346 = INT16_MIN;
	int64_t x347 = -1LL;
	static int16_t x348 = -3;

    t86 = ((x345!=(x346==x347))*x348);

    if (t86 != -3) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = INT32_MAX;
	static uint8_t x350 = UINT8_MAX;
	int64_t x351 = INT64_MIN;
	uint32_t x352 = 1537098U;

    t87 = ((x349!=(x350==x351))*x352);

    if (t87 != 1537098U) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int32_t x353 = INT32_MAX;
	int32_t x354 = INT32_MIN;
	uint8_t x355 = 7U;
	int32_t x356 = INT32_MIN;
	int32_t t88 = INT32_MIN;

    t88 = ((x353!=(x354==x355))*x356);

    if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MIN;
	int64_t x358 = -1LL;
	int16_t x359 = -1;
	uint16_t x360 = 58U;

    t89 = ((x357!=(x358==x359))*x360);

    if (t89 != 58) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x361 = INT64_MIN;
	static uint64_t x362 = 8398865243517723576LLU;
	static int32_t x363 = INT32_MIN;
	int32_t x364 = INT32_MAX;
	volatile int32_t t90 = INT32_MAX;

    t90 = ((x361!=(x362==x363))*x364);

    if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = 107U;
	int32_t x367 = INT32_MIN;
	int64_t x368 = -1LL;
	int64_t t91 = -847762032151LL;

    t91 = ((x365!=(x366==x367))*x368);

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = -1;
	uint32_t x370 = 117U;
	int8_t x372 = INT8_MAX;
	int32_t t92 = 456;

    t92 = ((x369!=(x370==x371))*x372);

    if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x373 = -8274793;
	int8_t x374 = INT8_MAX;
	uint64_t x375 = 3996105LLU;
	volatile uint32_t x376 = 35993730U;
	static volatile uint32_t t93 = 152858U;

    t93 = ((x373!=(x374==x375))*x376);

    if (t93 != 35993730U) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = -1;
	int32_t x379 = INT32_MIN;
	volatile uint32_t x380 = 6062U;
	volatile uint32_t t94 = 26450357U;

    t94 = ((x377!=(x378==x379))*x380);

    if (t94 != 6062U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x382 = -79;
	int8_t x383 = -1;
	static uint64_t x384 = 28232321339LLU;

    t95 = ((x381!=(x382==x383))*x384);

    if (t95 != 28232321339LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x385 = UINT64_MAX;
	uint64_t x386 = 31814803910LLU;
	static int8_t x388 = -2;

    t96 = ((x385!=(x386==x387))*x388);

    if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x390 = INT64_MAX;
	uint64_t x391 = 79111LLU;
	volatile uint16_t x392 = 2407U;
	int32_t t97 = -1043108249;

    t97 = ((x389!=(x390==x391))*x392);

    if (t97 != 2407) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x393 = INT16_MIN;
	int16_t x394 = 547;
	volatile uint64_t x395 = 87663868651LLU;
	uint32_t x396 = 29U;
	static volatile uint32_t t98 = 0U;

    t98 = ((x393!=(x394==x395))*x396);

    if (t98 != 29U) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MIN;
	static uint32_t x398 = 90758U;
	uint64_t x399 = UINT64_MAX;
	static int8_t x400 = 62;
	int32_t t99 = 1;

    t99 = ((x397!=(x398==x399))*x400);

    if (t99 != 62) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x401 = INT32_MIN;
	volatile int64_t x404 = 1LL;
	static int64_t t100 = 101392636799135LL;

    t100 = ((x401!=(x402==x403))*x404);

    if (t100 != 1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = -1;
	volatile int16_t x406 = 1713;
	int32_t x407 = -483651;
	volatile int32_t t101 = -7373057;

    t101 = ((x405!=(x406==x407))*x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x409 = 843LLU;
	int64_t x410 = 52LL;
	static int16_t x411 = -1;
	static int8_t x412 = INT8_MIN;
	static volatile int32_t t102 = 52598544;

    t102 = ((x409!=(x410==x411))*x412);

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MIN;
	uint64_t x415 = 7147115621840680599LLU;
	uint32_t x416 = UINT32_MAX;
	static uint32_t t103 = UINT32_MAX;

    t103 = ((x413!=(x414==x415))*x416);

    if (t103 != UINT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x417 = -1;
	int32_t x419 = INT32_MIN;
	static int64_t x420 = INT64_MIN;
	static volatile int64_t t104 = INT64_MIN;

    t104 = ((x417!=(x418==x419))*x420);

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	uint16_t x422 = UINT16_MAX;
	int16_t x423 = 21;

    t105 = ((x421!=(x422==x423))*x424);

    if (t105 != -128) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x425 = UINT8_MAX;
	int32_t x426 = INT32_MIN;
	int32_t x427 = 11540;
	int8_t x428 = 1;
	static volatile int32_t t106 = 0;

    t106 = ((x425!=(x426==x427))*x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x429 = INT64_MIN;
	uint16_t x430 = 4U;
	uint32_t x431 = 31938792U;
	static uint64_t x432 = UINT64_MAX;

    t107 = ((x429!=(x430==x431))*x432);

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x433 = -1;
	int8_t x435 = -1;
	static int64_t x436 = INT64_MIN;

    t108 = ((x433!=(x434==x435))*x436);

    if (t108 != INT64_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x439 = -1;
	static int32_t x440 = INT32_MIN;
	int32_t t109 = INT32_MIN;

    t109 = ((x437!=(x438==x439))*x440);

    if (t109 != INT32_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = 2368240U;
	static uint32_t x443 = UINT32_MAX;
	volatile int32_t t110 = -225550734;

    t110 = ((x441!=(x442==x443))*x444);

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x445 = INT8_MIN;
	volatile uint32_t x446 = 34U;
	int16_t x447 = INT16_MIN;
	static volatile int32_t t111 = INT32_MAX;

    t111 = ((x445!=(x446==x447))*x448);

    if (t111 != INT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x449 = 5U;
	uint16_t x451 = 51U;
	volatile uint64_t x452 = 10LLU;
	volatile uint64_t t112 = 60858929993648LLU;

    t112 = ((x449!=(x450==x451))*x452);

    if (t112 != 10LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = 2394185371118LLU;
	int8_t x454 = INT8_MAX;
	volatile int32_t x455 = INT32_MAX;
	uint32_t x456 = 1321U;
	volatile uint32_t t113 = 5U;

    t113 = ((x453!=(x454==x455))*x456);

    if (t113 != 1321U) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x457 = UINT8_MAX;
	volatile int64_t x458 = -27455619629LL;
	int8_t x460 = INT8_MIN;
	int32_t t114 = -11;

    t114 = ((x457!=(x458==x459))*x460);

    if (t114 != -128) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x461 = 29018LLU;
	int64_t x462 = -1LL;
	static uint16_t x463 = 24332U;

    t115 = ((x461!=(x462==x463))*x464);

    if (t115 != -34677376331060LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = 4;
	uint32_t x466 = 31163967U;
	int32_t x467 = INT32_MIN;
	uint32_t t116 = 11U;

    t116 = ((x465!=(x466==x467))*x468);

    if (t116 != 2315049U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = 41373150228756452LLU;
	int32_t x470 = INT32_MIN;
	volatile int16_t x471 = -1;
	static volatile int64_t x472 = -2639146LL;
	volatile int64_t t117 = 5165750676LL;

    t117 = ((x469!=(x470==x471))*x472);

    if (t117 != -2639146LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x473 = INT8_MIN;
	uint16_t x474 = 3U;
	uint32_t x475 = UINT32_MAX;
	uint16_t x476 = 48U;
	volatile int32_t t118 = -2393;

    t118 = ((x473!=(x474==x475))*x476);

    if (t118 != 48) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = INT16_MIN;
	volatile uint64_t x478 = UINT64_MAX;
	uint32_t x479 = 24646U;
	int8_t x480 = 52;
	volatile int32_t t119 = 9082852;

    t119 = ((x477!=(x478==x479))*x480);

    if (t119 != 52) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x481 = -1;
	volatile int64_t x482 = -261571112LL;
	static int64_t x483 = INT64_MAX;
	volatile uint16_t x484 = UINT16_MAX;
	static int32_t t120 = 358093791;

    t120 = ((x481!=(x482==x483))*x484);

    if (t120 != 65535) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x485 = 682643050U;
	int32_t x487 = INT32_MIN;
	int16_t x488 = INT16_MAX;
	int32_t t121 = 15638928;

    t121 = ((x485!=(x486==x487))*x488);

    if (t121 != 32767) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	int16_t x490 = -1;
	int32_t x491 = 93517;
	int64_t x492 = 521008470199LL;

    t122 = ((x489!=(x490==x491))*x492);

    if (t122 != 521008470199LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x493 = -261223181515033093LL;
	int16_t x494 = -1;
	static int32_t x495 = INT32_MIN;
	uint8_t x496 = UINT8_MAX;
	int32_t t123 = 520603105;

    t123 = ((x493!=(x494==x495))*x496);

    if (t123 != 255) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MIN;
	int16_t x498 = INT16_MAX;
	volatile int16_t x500 = INT16_MAX;
	int32_t t124 = 86;

    t124 = ((x497!=(x498==x499))*x500);

    if (t124 != 32767) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x502 = -1819600073176898797LL;
	uint32_t x504 = 129442427U;
	volatile uint32_t t125 = 0U;

    t125 = ((x501!=(x502==x503))*x504);

    if (t125 != 129442427U) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x506 = 1532LL;
	int8_t x507 = INT8_MIN;
	int32_t x508 = INT32_MIN;
	volatile int32_t t126 = INT32_MIN;

    t126 = ((x505!=(x506==x507))*x508);

    if (t126 != INT32_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x510 = 94U;
	int32_t x512 = -1;
	volatile int32_t t127 = -1;

    t127 = ((x509!=(x510==x511))*x512);

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = -496;
	uint32_t x514 = 46310U;
	int64_t x515 = -16786996LL;
	int64_t x516 = INT64_MAX;
	int64_t t128 = INT64_MAX;

    t128 = ((x513!=(x514==x515))*x516);

    if (t128 != INT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x517 = -1;
	int16_t x518 = 57;
	uint8_t x519 = 1U;
	int32_t x520 = 542;
	volatile int32_t t129 = -174849;

    t129 = ((x517!=(x518==x519))*x520);

    if (t129 != 542) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x521 = 0;
	uint64_t x522 = 1408769809955953LLU;
	int8_t x523 = -1;
	uint16_t x524 = 1U;
	static int32_t t130 = -37;

    t130 = ((x521!=(x522==x523))*x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = 26919937018533LLU;
	int64_t x526 = 1344LL;
	int64_t x528 = INT64_MIN;
	int64_t t131 = INT64_MIN;

    t131 = ((x525!=(x526==x527))*x528);

    if (t131 != INT64_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x529 = 329957U;
	static int16_t x530 = INT16_MIN;
	static int16_t x531 = INT16_MAX;
	volatile int64_t x532 = 26979835LL;

    t132 = ((x529!=(x530==x531))*x532);

    if (t132 != 26979835LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x535 = INT32_MAX;
	volatile int8_t x536 = 5;

    t133 = ((x533!=(x534==x535))*x536);

    if (t133 != 5) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = 156U;
	int8_t x538 = -1;
	volatile uint8_t x539 = 2U;
	uint16_t x540 = UINT16_MAX;
	volatile int32_t t134 = -3;

    t134 = ((x537!=(x538==x539))*x540);

    if (t134 != 65535) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = -1;
	volatile int32_t x542 = -1;
	volatile uint16_t x543 = UINT16_MAX;
	int64_t x544 = INT64_MAX;
	static volatile int64_t t135 = INT64_MAX;

    t135 = ((x541!=(x542==x543))*x544);

    if (t135 != INT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x546 = INT16_MIN;
	uint32_t x547 = UINT32_MAX;
	uint16_t x548 = UINT16_MAX;
	static volatile int32_t t136 = -59656;

    t136 = ((x545!=(x546==x547))*x548);

    if (t136 != 65535) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x549 = -1;
	int32_t x550 = -7;
	uint32_t x551 = 88339184U;
	int8_t x552 = 0;
	volatile int32_t t137 = -488;

    t137 = ((x549!=(x550==x551))*x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	int16_t x554 = INT16_MIN;
	static uint32_t x555 = UINT32_MAX;
	volatile int16_t x556 = INT16_MAX;
	int32_t t138 = 1343;

    t138 = ((x553!=(x554==x555))*x556);

    if (t138 != 32767) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x558 = INT8_MIN;
	uint16_t x560 = UINT16_MAX;
	int32_t t139 = 467619;

    t139 = ((x557!=(x558==x559))*x560);

    if (t139 != 65535) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x562 = INT32_MAX;
	int32_t x563 = -287963;
	static volatile uint16_t x564 = UINT16_MAX;

    t140 = ((x561!=(x562==x563))*x564);

    if (t140 != 65535) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = 6729701U;
	uint16_t x566 = 217U;
	int64_t x567 = -1LL;
	static volatile int32_t t141 = INT32_MAX;

    t141 = ((x565!=(x566==x567))*x568);

    if (t141 != INT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x569 = INT16_MIN;
	static uint32_t x570 = 212817277U;
	int8_t x571 = 1;
	static int32_t t142 = 18820346;

    t142 = ((x569!=(x570==x571))*x572);

    if (t142 != 61) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	static int16_t x574 = -1;
	static volatile uint32_t x575 = 1305656U;
	uint16_t x576 = 1U;
	volatile int32_t t143 = -960834254;

    t143 = ((x573!=(x574==x575))*x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = -1;
	static int32_t x578 = 276;
	static uint16_t x579 = 8U;
	volatile int8_t x580 = -1;
	volatile int32_t t144 = 5;

    t144 = ((x577!=(x578==x579))*x580);

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = 1197LLU;
	int64_t x582 = INT64_MAX;
	int16_t x583 = -188;
	int64_t x584 = -1LL;
	int64_t t145 = 20513646038292LL;

    t145 = ((x581!=(x582==x583))*x584);

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = -1;
	uint16_t x588 = 20U;
	static volatile int32_t t146 = 22301166;

    t146 = ((x585!=(x586==x587))*x588);

    if (t146 != 20) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x590 = INT32_MIN;
	uint8_t x591 = 0U;
	uint16_t x592 = 20U;
	static int32_t t147 = 0;

    t147 = ((x589!=(x590==x591))*x592);

    if (t147 != 20) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MIN;
	uint64_t x594 = 19541914LLU;
	volatile int32_t x595 = INT32_MAX;
	static int32_t x596 = -1;
	static int32_t t148 = -159337197;

    t148 = ((x593!=(x594==x595))*x596);

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x599 = -1LL;
	static int8_t x600 = -1;
	static volatile int32_t t149 = 4972;

    t149 = ((x597!=(x598==x599))*x600);

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = -723;
	static int16_t x602 = INT16_MAX;
	uint32_t x603 = 46U;

    t150 = ((x601!=(x602==x603))*x604);

    if (t150 != 1237530U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	uint64_t x606 = UINT64_MAX;
	int16_t x607 = INT16_MAX;
	volatile int8_t x608 = -1;

    t151 = ((x605!=(x606==x607))*x608);

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = -1;
	int8_t x610 = -1;
	static int16_t x611 = 17;
	uint32_t x612 = 81625852U;
	static volatile uint32_t t152 = 5U;

    t152 = ((x609!=(x610==x611))*x612);

    if (t152 != 81625852U) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MIN;
	static uint64_t x615 = 43525LLU;
	int16_t x616 = INT16_MAX;
	volatile int32_t t153 = -7637;

    t153 = ((x613!=(x614==x615))*x616);

    if (t153 != 32767) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint8_t x617 = 1U;
	static int32_t x618 = 28454;
	int32_t x620 = -1;

    t154 = ((x617!=(x618==x619))*x620);

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x621 = INT64_MIN;
	static uint16_t x623 = 6857U;
	uint32_t t155 = 1232U;

    t155 = ((x621!=(x622==x623))*x624);

    if (t155 != 1890827U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = UINT32_MAX;
	uint64_t x627 = UINT64_MAX;
	static int64_t x628 = 1778LL;
	volatile int64_t t156 = -115921LL;

    t156 = ((x625!=(x626==x627))*x628);

    if (t156 != 1778LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = 110608U;
	int32_t x632 = -13;
	static int32_t t157 = -2840035;

    t157 = ((x629!=(x630==x631))*x632);

    if (t157 != -13) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 12U;
	volatile int8_t x634 = INT8_MIN;
	uint32_t x635 = 9508925U;
	static int32_t x636 = -248;

    t158 = ((x633!=(x634==x635))*x636);

    if (t158 != -248) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x638 = -2004945LL;
	volatile int64_t x639 = -25640692638LL;
	uint16_t x640 = 28U;
	volatile int32_t t159 = 190470;

    t159 = ((x637!=(x638==x639))*x640);

    if (t159 != 28) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -1LL;
	static int64_t x642 = -100740LL;
	uint16_t x643 = UINT16_MAX;
	int8_t x644 = INT8_MIN;
	int32_t t160 = -456;

    t160 = ((x641!=(x642==x643))*x644);

    if (t160 != -128) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int64_t x645 = -220177042209818LL;
	volatile int32_t x646 = 5324178;
	int16_t x648 = INT16_MIN;
	int32_t t161 = 272;

    t161 = ((x645!=(x646==x647))*x648);

    if (t161 != -32768) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x650 = -22693999844LL;
	static int8_t x651 = 2;
	static uint16_t x652 = 419U;
	volatile int32_t t162 = 42;

    t162 = ((x649!=(x650==x651))*x652);

    if (t162 != 419) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = 1;
	volatile uint16_t x655 = 15808U;
	int16_t x656 = -61;
	static int32_t t163 = -35793120;

    t163 = ((x653!=(x654==x655))*x656);

    if (t163 != -61) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x657 = UINT32_MAX;
	uint32_t x658 = UINT32_MAX;
	static volatile int16_t x659 = -1;
	int64_t x660 = -3LL;
	int64_t t164 = -6783934212877925LL;

    t164 = ((x657!=(x658==x659))*x660);

    if (t164 != -3LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x661 = INT32_MIN;
	int16_t x663 = INT16_MIN;
	static volatile int32_t t165 = 956;

    t165 = ((x661!=(x662==x663))*x664);

    if (t165 != -128) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MIN;
	static int8_t x666 = INT8_MAX;
	static int32_t x667 = -1;
	static volatile int16_t x668 = INT16_MIN;
	volatile int32_t t166 = -90575635;

    t166 = ((x665!=(x666==x667))*x668);

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x670 = 1U;
	static int32_t x671 = -55;
	int8_t x672 = INT8_MIN;

    t167 = ((x669!=(x670==x671))*x672);

    if (t167 != -128) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = 109;
	int8_t x675 = 7;
	int32_t x676 = -20103;

    t168 = ((x673!=(x674==x675))*x676);

    if (t168 != -20103) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MAX;
	volatile uint32_t x678 = UINT32_MAX;
	static volatile uint8_t x679 = 6U;
	int32_t x680 = 217;
	int32_t t169 = 2122;

    t169 = ((x677!=(x678==x679))*x680);

    if (t169 != 217) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int32_t x681 = INT32_MIN;
	int8_t x683 = INT8_MIN;
	volatile int32_t x684 = INT32_MIN;
	volatile int32_t t170 = INT32_MIN;

    t170 = ((x681!=(x682==x683))*x684);

    if (t170 != INT32_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MAX;
	int8_t x686 = INT8_MAX;
	volatile int8_t x687 = 0;
	uint16_t x688 = 303U;
	volatile int32_t t171 = -997;

    t171 = ((x685!=(x686==x687))*x688);

    if (t171 != 303) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x690 = -73;
	int32_t x692 = 194;
	int32_t t172 = -667886;

    t172 = ((x689!=(x690==x691))*x692);

    if (t172 != 194) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x693 = -41986;
	uint8_t x694 = 48U;
	int64_t x696 = 8LL;

    t173 = ((x693!=(x694==x695))*x696);

    if (t173 != 8LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = 70566557222871LL;
	uint64_t x698 = 589LLU;
	int8_t x699 = 0;
	int64_t x700 = -95576832LL;

    t174 = ((x697!=(x698==x699))*x700);

    if (t174 != -95576832LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = -1;
	volatile int16_t x702 = -1;
	int8_t x703 = INT8_MIN;
	int32_t x704 = -1;
	volatile int32_t t175 = -450;

    t175 = ((x701!=(x702==x703))*x704);

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x705 = 1812441LLU;
	uint32_t x706 = 0U;
	int32_t x707 = INT32_MIN;
	static int8_t x708 = INT8_MIN;
	static int32_t t176 = -988175610;

    t176 = ((x705!=(x706==x707))*x708);

    if (t176 != -128) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x710 = INT16_MIN;
	int64_t x711 = INT64_MAX;
	int64_t x712 = -1LL;
	volatile int64_t t177 = -60407507LL;

    t177 = ((x709!=(x710==x711))*x712);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x713 = UINT32_MAX;
	volatile int32_t x714 = 59;
	int8_t x715 = INT8_MIN;
	int16_t x716 = INT16_MAX;
	int32_t t178 = -28;

    t178 = ((x713!=(x714==x715))*x716);

    if (t178 != 32767) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = -1;
	uint32_t x718 = 1434626U;
	int32_t x719 = -1;
	volatile int32_t t179 = -1;

    t179 = ((x717!=(x718==x719))*x720);

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x721 = -1;
	int16_t x722 = INT16_MIN;
	int64_t x723 = -197450025501856LL;
	int32_t x724 = INT32_MAX;
	int32_t t180 = INT32_MAX;

    t180 = ((x721!=(x722==x723))*x724);

    if (t180 != INT32_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MIN;
	static int64_t x726 = -1LL;
	int64_t x727 = -1LL;
	int32_t x728 = INT32_MAX;
	int32_t t181 = INT32_MAX;

    t181 = ((x725!=(x726==x727))*x728);

    if (t181 != INT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MAX;
	uint16_t x730 = 10U;
	int16_t x732 = INT16_MAX;
	static volatile int32_t t182 = 1;

    t182 = ((x729!=(x730==x731))*x732);

    if (t182 != 32767) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x733 = 2U;
	int64_t x734 = INT64_MAX;
	static int32_t x735 = INT32_MIN;
	uint8_t x736 = 2U;

    t183 = ((x733!=(x734==x735))*x736);

    if (t183 != 2) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = 1;
	uint16_t x738 = 3U;
	uint8_t x739 = UINT8_MAX;
	uint16_t x740 = 509U;
	int32_t t184 = 2;

    t184 = ((x737!=(x738==x739))*x740);

    if (t184 != 509) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MAX;
	int8_t x742 = -56;
	static int8_t x743 = -1;
	int16_t x744 = 2;
	volatile int32_t t185 = 116630;

    t185 = ((x741!=(x742==x743))*x744);

    if (t185 != 2) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x746 = INT8_MIN;
	uint32_t x747 = 7658U;
	int32_t t186 = 367681848;

    t186 = ((x745!=(x746==x747))*x748);

    if (t186 != -223347845) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = 204465840U;
	volatile int8_t x750 = INT8_MIN;
	static volatile int16_t x751 = INT16_MIN;
	static int16_t x752 = INT16_MAX;
	static volatile int32_t t187 = 2006124;

    t187 = ((x749!=(x750==x751))*x752);

    if (t187 != 32767) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x753 = INT8_MIN;
	volatile int16_t x754 = -165;
	static int8_t x755 = 1;
	int16_t x756 = INT16_MAX;

    t188 = ((x753!=(x754==x755))*x756);

    if (t188 != 32767) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MIN;
	static uint8_t x758 = 1U;
	int64_t x759 = INT64_MIN;
	int64_t x760 = 579560184071137LL;
	static volatile int64_t t189 = 68089433193717LL;

    t189 = ((x757!=(x758==x759))*x760);

    if (t189 != 579560184071137LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x763 = UINT16_MAX;
	int64_t x764 = 22422963323697212LL;

    t190 = ((x761!=(x762==x763))*x764);

    if (t190 != 22422963323697212LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x765 = INT16_MIN;
	volatile int64_t x766 = INT64_MIN;
	volatile uint16_t x768 = 12415U;

    t191 = ((x765!=(x766==x767))*x768);

    if (t191 != 12415) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = 1U;
	uint16_t x770 = 255U;
	uint64_t x771 = 68250125418731LLU;
	int64_t x772 = INT64_MIN;
	volatile int64_t t192 = INT64_MIN;

    t192 = ((x769!=(x770==x771))*x772);

    if (t192 != INT64_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x774 = 11865955148492249LLU;
	static uint16_t x775 = UINT16_MAX;
	int32_t x776 = -492840;
	int32_t t193 = 65;

    t193 = ((x773!=(x774==x775))*x776);

    if (t193 != -492840) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x778 = UINT32_MAX;
	int32_t x779 = -1;
	static int8_t x780 = INT8_MAX;
	volatile int32_t t194 = 531;

    t194 = ((x777!=(x778==x779))*x780);

    if (t194 != 127) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x781 = 2888U;
	int8_t x782 = INT8_MIN;
	uint16_t x783 = 833U;
	int8_t x784 = -54;
	volatile int32_t t195 = -33212459;

    t195 = ((x781!=(x782==x783))*x784);

    if (t195 != -54) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x785 = -17274879428980LL;
	uint8_t x786 = UINT8_MAX;
	int64_t x787 = INT64_MIN;
	int16_t x788 = 3;

    t196 = ((x785!=(x786==x787))*x788);

    if (t196 != 3) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = UINT64_MAX;
	uint8_t x790 = UINT8_MAX;
	int64_t x792 = INT64_MIN;
	static volatile int64_t t197 = INT64_MIN;

    t197 = ((x789!=(x790==x791))*x792);

    if (t197 != INT64_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MIN;
	uint32_t x794 = 27U;
	int16_t x795 = INT16_MAX;
	static volatile int16_t x796 = INT16_MIN;
	volatile int32_t t198 = -11707;

    t198 = ((x793!=(x794==x795))*x796);

    if (t198 != -32768) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MIN;
	volatile uint8_t x798 = UINT8_MAX;
	uint64_t x799 = 786511LLU;
	static uint16_t x800 = UINT16_MAX;

    t199 = ((x797!=(x798==x799))*x800);

    if (t199 != 65535) { NG(); } else { ; }
	
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


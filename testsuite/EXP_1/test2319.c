
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

int32_t x1 = -1;
volatile int32_t t0 = -22;
int16_t x6 = INT16_MAX;
volatile uint64_t x7 = UINT64_MAX;
int32_t x10 = INT32_MIN;
volatile int32_t t2 = 822;
int32_t t3 = -302828285;
int16_t x18 = 26;
static volatile uint8_t x20 = 3U;
volatile int32_t t4 = -60987;
static volatile int32_t x22 = INT32_MIN;
int64_t x25 = INT64_MIN;
int32_t t6 = 2561;
uint16_t x30 = 0U;
int8_t x35 = INT8_MAX;
static uint32_t x36 = 1U;
volatile int64_t x46 = INT64_MIN;
static uint32_t x48 = 142262U;
int64_t x54 = -1LL;
uint32_t x60 = 1453506U;
volatile int64_t x61 = -1LL;
uint8_t x64 = 98U;
int32_t x70 = -1;
uint8_t x76 = 45U;
int32_t t18 = -1;
volatile int32_t x77 = 39006;
static int32_t t19 = -109515;
int32_t x81 = -780925;
int64_t x85 = INT64_MIN;
int8_t x87 = INT8_MAX;
static volatile int32_t t21 = 1;
int64_t x92 = 2394670892918151103LL;
uint16_t x95 = UINT16_MAX;
int32_t t23 = 1;
int32_t x98 = INT32_MAX;
uint32_t x100 = 9905U;
static int16_t x108 = 5;
volatile int32_t t27 = -1804;
uint16_t x115 = 17U;
int32_t t28 = 3;
volatile int32_t x120 = 18783;
volatile int32_t t29 = 133;
volatile uint8_t x123 = 99U;
volatile int32_t t31 = 18710;
static uint16_t x134 = 4580U;
static int64_t x136 = 4496LL;
uint16_t x137 = 1290U;
volatile int8_t x149 = INT8_MIN;
int16_t x158 = INT16_MIN;
int32_t t39 = 1039298582;
int16_t x162 = 13889;
volatile int64_t x165 = INT64_MIN;
int32_t x166 = 509403;
int16_t x169 = INT16_MAX;
static int16_t x175 = -18;
int64_t x179 = INT64_MIN;
volatile int32_t t44 = -1361;
volatile int32_t t46 = 0;
volatile uint32_t x189 = UINT32_MAX;
int16_t x195 = 3;
int32_t x203 = INT32_MAX;
int16_t x209 = INT16_MAX;
volatile int64_t x210 = INT64_MIN;
int64_t x211 = -4463769437718537978LL;
volatile int16_t x212 = 23;
int32_t t53 = 13;
static uint8_t x220 = UINT8_MAX;
static int16_t x226 = INT16_MIN;
int32_t x232 = INT32_MIN;
volatile uint16_t x233 = 13100U;
volatile int16_t x236 = -1;
uint32_t x238 = 2067185609U;
volatile uint64_t x239 = 184848051192LLU;
int32_t t59 = -1;
static int32_t t60 = 11;
int64_t x249 = INT64_MIN;
uint16_t x250 = 519U;
static uint64_t x263 = 16177LLU;
static volatile int8_t x264 = INT8_MAX;
uint32_t x267 = 42870828U;
int64_t x269 = INT64_MIN;
int8_t x276 = 28;
volatile int32_t t70 = -13755;
int32_t t71 = 1;
int16_t x290 = -1;
static int32_t x291 = INT32_MIN;
static uint8_t x300 = UINT8_MAX;
volatile int32_t x301 = INT32_MIN;
int64_t x308 = INT64_MIN;
int16_t x309 = INT16_MIN;
int16_t x310 = -1;
volatile int16_t x322 = 14391;
static volatile int32_t t80 = -782319547;
uint16_t x326 = 112U;
int64_t x327 = 26LL;
int32_t t82 = -1;
volatile int32_t t83 = 223;
volatile int32_t x337 = 2;
int8_t x338 = INT8_MIN;
uint8_t x344 = 1U;
volatile uint32_t x346 = UINT32_MAX;
volatile int32_t t86 = 110548425;
uint64_t x357 = 619903LLU;
static int8_t x359 = INT8_MAX;
int32_t t89 = 35752074;
int8_t x361 = INT8_MIN;
uint32_t x365 = 3719U;
static int32_t t91 = 523448;
int32_t x373 = -465317;
uint32_t x376 = 147588U;
static int32_t x380 = -37;
int32_t t94 = 222651624;
volatile int32_t t96 = 807010;
uint64_t x389 = UINT64_MAX;
int8_t x392 = INT8_MAX;
static volatile int32_t t97 = -124432;
int8_t x409 = INT8_MAX;
static int8_t x424 = -1;
int16_t x425 = INT16_MIN;
uint8_t x429 = 1U;
uint64_t x430 = 151019675108359LLU;
static int32_t x431 = INT32_MIN;
static int32_t x439 = INT32_MIN;
static volatile uint16_t x440 = 3807U;
int16_t x449 = INT16_MAX;
uint32_t x465 = 292161867U;
volatile int32_t x468 = -1;
int32_t x471 = INT32_MIN;
int32_t t118 = -71436;
uint8_t x492 = 58U;
uint64_t x494 = 1423054779490086330LLU;
uint64_t x495 = UINT64_MAX;
static int16_t x498 = 822;
static uint32_t x502 = 33892066U;
static int8_t x514 = -1;
volatile int64_t x515 = 3125971324340412830LL;
volatile int8_t x522 = -5;
static int32_t x523 = INT32_MIN;
uint16_t x527 = 12364U;
int16_t x533 = INT16_MAX;
static int32_t x537 = INT32_MAX;
volatile int8_t x538 = INT8_MAX;
static int16_t x543 = INT16_MAX;
volatile int64_t x544 = INT64_MAX;
static int16_t x549 = -1;
static int32_t t141 = 2882534;
int16_t x573 = -1;
int16_t x574 = INT16_MAX;
volatile int64_t x577 = INT64_MAX;
int32_t x581 = INT32_MIN;
static uint16_t x585 = 7U;
uint32_t x593 = 15838U;
int16_t x596 = INT16_MIN;
static uint64_t x597 = 592088323537LLU;
volatile int32_t t150 = 34597;
uint32_t x605 = 8757845U;
uint16_t x607 = UINT16_MAX;
int32_t x608 = INT32_MAX;
volatile uint64_t x609 = 3598LLU;
volatile int32_t x611 = -1;
int16_t x614 = INT16_MAX;
volatile int32_t t153 = 1;
int32_t x618 = -1;
int16_t x620 = -55;
int32_t t156 = 670;
volatile uint64_t x636 = 3621607LLU;
int8_t x638 = INT8_MAX;
static int64_t x639 = -1LL;
int8_t x642 = 0;
int16_t x652 = INT16_MIN;
int16_t x653 = -3831;
int64_t x657 = -1LL;
int32_t t165 = -1;
uint64_t x666 = 9LLU;
uint16_t x668 = 12698U;
int16_t x680 = INT16_MAX;
static uint32_t x685 = UINT32_MAX;
volatile uint64_t x688 = UINT64_MAX;
int64_t x689 = INT64_MIN;
uint8_t x690 = 0U;
static int32_t x691 = -1;
static uint8_t x694 = 1U;
int16_t x695 = 46;
int32_t t173 = 2672;
static volatile uint16_t x698 = 31960U;
volatile uint32_t x699 = 487232U;
int8_t x703 = INT8_MIN;
int16_t x706 = INT16_MIN;
int8_t x708 = INT8_MIN;
int64_t x709 = INT64_MAX;
static uint32_t x711 = 850U;
int32_t t177 = 1510313;
int16_t x713 = 912;
uint32_t x715 = 50569422U;
uint8_t x716 = 0U;
int32_t x720 = INT32_MIN;
int32_t x726 = INT32_MAX;
static int32_t t181 = 153691;
int16_t x733 = INT16_MIN;
int32_t x735 = -1;
volatile int32_t t183 = -66476;
int64_t x738 = INT64_MAX;
int64_t x740 = -1LL;
volatile int32_t t186 = 162;
static int32_t x750 = -1;
static uint16_t x754 = 1286U;
volatile int16_t x758 = -3;
int16_t x759 = -1;
volatile int32_t t189 = 1;
int64_t x765 = INT64_MIN;
volatile int32_t t191 = 116102;
int16_t x782 = -11414;
volatile int32_t t195 = 32751244;
static uint32_t x786 = 3613022U;
volatile uint16_t x793 = 3071U;
static int8_t x794 = -1;
static int32_t x796 = -8279276;


void f0(void) {
    	uint32_t x2 = 13U;
	int32_t x3 = 1;
	uint16_t x4 = 15U;

    t0 = (((x1&x2)&x3)>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x5 = 39418U;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -1040502;

    t1 = (((x5&x6)&x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 29;
	static int8_t x11 = -1;
	int64_t x12 = INT64_MIN;

    t2 = (((x9&x10)&x11)>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = -34543;
	int64_t x14 = -261310435037974LL;
	int64_t x15 = -1LL;
	int8_t x16 = INT8_MAX;

    t3 = (((x13&x14)&x15)>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	static int8_t x19 = INT8_MAX;

    t4 = (((x17&x18)&x19)>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -10058;
	uint8_t x23 = 2U;
	int32_t x24 = -30969478;
	int32_t t5 = 43;

    t5 = (((x21&x22)&x23)>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x26 = UINT16_MAX;
	static int16_t x27 = -1;
	volatile uint64_t x28 = 19137209732682LLU;

    t6 = (((x25&x26)&x27)>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 102U;
	uint32_t x31 = UINT32_MAX;
	static volatile int32_t x32 = INT32_MIN;
	volatile int32_t t7 = 0;

    t7 = (((x29&x30)&x31)>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x33 = INT32_MAX;
	int64_t x34 = INT64_MIN;
	int32_t t8 = -75895811;

    t8 = (((x33&x34)&x35)>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 893;
	uint16_t x38 = 998U;
	static uint64_t x39 = 11934991828818LLU;
	uint16_t x40 = 14U;
	volatile int32_t t9 = 233502450;

    t9 = (((x37&x38)&x39)>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = INT8_MIN;
	int8_t x42 = -47;
	uint8_t x43 = 0U;
	static int16_t x44 = -1;
	static volatile int32_t t10 = -12530;

    t10 = (((x41&x42)&x43)>x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = INT64_MAX;
	int16_t x47 = -1;
	volatile int32_t t11 = 320423;

    t11 = (((x45&x46)&x47)>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MAX;
	uint64_t x50 = 13154902129044LLU;
	int16_t x51 = 156;
	static int64_t x52 = 2391477877619LL;
	volatile int32_t t12 = 215893543;

    t12 = (((x49&x50)&x51)>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 31166U;
	uint16_t x55 = UINT16_MAX;
	int8_t x56 = INT8_MIN;
	int32_t t13 = -333665282;

    t13 = (((x53&x54)&x55)>x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = INT8_MIN;
	static int64_t x58 = -496252LL;
	int64_t x59 = INT64_MIN;
	int32_t t14 = -1623230;

    t14 = (((x57&x58)&x59)>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x62 = 214702U;
	static int32_t x63 = INT32_MIN;
	int32_t t15 = 110;

    t15 = (((x61&x62)&x63)>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x65 = INT8_MIN;
	uint32_t x66 = UINT32_MAX;
	uint16_t x67 = 937U;
	volatile int32_t x68 = -1;
	volatile int32_t t16 = 419;

    t16 = (((x65&x66)&x67)>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 522152U;
	volatile int8_t x71 = 28;
	static uint64_t x72 = 2324371131LLU;
	int32_t t17 = 27339790;

    t17 = (((x69&x70)&x71)>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -1LL;
	uint16_t x74 = 0U;
	static uint64_t x75 = UINT64_MAX;

    t18 = (((x73&x74)&x75)>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x78 = -1;
	int16_t x79 = 1380;
	uint8_t x80 = 6U;

    t19 = (((x77&x78)&x79)>x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x82 = -61022233;
	static int8_t x83 = INT8_MIN;
	int32_t x84 = INT32_MAX;
	volatile int32_t t20 = -28292274;

    t20 = (((x81&x82)&x83)>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x86 = INT32_MIN;
	int64_t x88 = INT64_MIN;

    t21 = (((x85&x86)&x87)>x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = -1LL;
	int32_t x90 = INT32_MIN;
	int64_t x91 = -1LL;
	int32_t t22 = -27432;

    t22 = (((x89&x90)&x91)>x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = 0;
	static uint64_t x94 = 4450674891944179LLU;
	int64_t x96 = -1LL;

    t23 = (((x93&x94)&x95)>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = UINT64_MAX;
	int32_t x99 = -1;
	static volatile int32_t t24 = 1;

    t24 = (((x97&x98)&x99)>x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 93974LLU;
	int16_t x102 = INT16_MIN;
	static int64_t x103 = -28LL;
	static int8_t x104 = INT8_MIN;
	int32_t t25 = -5107852;

    t25 = (((x101&x102)&x103)>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = -1;
	int8_t x106 = INT8_MIN;
	int32_t x107 = INT32_MIN;
	volatile int32_t t26 = 25612;

    t26 = (((x105&x106)&x107)>x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = UINT16_MAX;
	int32_t x110 = INT32_MIN;
	int8_t x111 = INT8_MIN;
	int8_t x112 = -18;

    t27 = (((x109&x110)&x111)>x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	int32_t x114 = -1;
	int64_t x116 = INT64_MAX;

    t28 = (((x113&x114)&x115)>x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x117 = 0U;
	static int16_t x118 = INT16_MAX;
	int8_t x119 = INT8_MIN;

    t29 = (((x117&x118)&x119)>x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x121 = 19133336U;
	int16_t x122 = INT16_MIN;
	int8_t x124 = INT8_MIN;
	int32_t t30 = 132235011;

    t30 = (((x121&x122)&x123)>x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x125 = 297539U;
	int8_t x126 = -1;
	int16_t x127 = 757;
	int16_t x128 = 1443;

    t31 = (((x125&x126)&x127)>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MAX;
	int16_t x130 = INT16_MIN;
	int8_t x131 = -1;
	static uint16_t x132 = 6773U;
	int32_t t32 = 7564425;

    t32 = (((x129&x130)&x131)>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x133 = INT32_MIN;
	static uint32_t x135 = 3U;
	volatile int32_t t33 = 16655;

    t33 = (((x133&x134)&x135)>x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x138 = INT8_MAX;
	int8_t x139 = INT8_MIN;
	int64_t x140 = INT64_MIN;
	volatile int32_t t34 = 15410609;

    t34 = (((x137&x138)&x139)>x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -1;
	int64_t x142 = INT64_MIN;
	static uint16_t x143 = 229U;
	static uint32_t x144 = 372017292U;
	int32_t t35 = -228;

    t35 = (((x141&x142)&x143)>x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = UINT32_MAX;
	uint32_t x146 = 1U;
	volatile uint64_t x147 = 91941425887LLU;
	volatile int64_t x148 = INT64_MIN;
	volatile int32_t t36 = 0;

    t36 = (((x145&x146)&x147)>x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x150 = -1;
	static uint32_t x151 = 1562U;
	uint64_t x152 = 5LLU;
	int32_t t37 = -235;

    t37 = (((x149&x150)&x151)>x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = 70U;
	uint32_t x154 = 19444372U;
	uint8_t x155 = 84U;
	uint64_t x156 = UINT64_MAX;
	volatile int32_t t38 = -471087004;

    t38 = (((x153&x154)&x155)>x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = INT32_MAX;
	uint64_t x159 = UINT64_MAX;
	uint16_t x160 = UINT16_MAX;

    t39 = (((x157&x158)&x159)>x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = INT8_MAX;
	int8_t x163 = INT8_MIN;
	int64_t x164 = -1LL;
	static int32_t t40 = 7507;

    t40 = (((x161&x162)&x163)>x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x167 = -1;
	volatile int32_t x168 = 753664;
	volatile int32_t t41 = -15;

    t41 = (((x165&x166)&x167)>x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x170 = -1LL;
	volatile uint8_t x171 = 3U;
	int64_t x172 = -834723535366993182LL;
	volatile int32_t t42 = -107813;

    t42 = (((x169&x170)&x171)>x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MAX;
	volatile uint16_t x174 = 269U;
	int16_t x176 = 3520;
	volatile int32_t t43 = 4;

    t43 = (((x173&x174)&x175)>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MAX;
	int8_t x178 = INT8_MAX;
	int32_t x180 = INT32_MIN;

    t44 = (((x177&x178)&x179)>x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 16U;
	uint64_t x182 = 106390610843LLU;
	int16_t x183 = -1006;
	int8_t x184 = -1;
	static int32_t t45 = -7315927;

    t45 = (((x181&x182)&x183)>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MIN;
	uint64_t x186 = 38509505671425413LLU;
	int8_t x187 = INT8_MIN;
	int32_t x188 = 432062;

    t46 = (((x185&x186)&x187)>x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x190 = -21;
	int32_t x191 = 6521483;
	int64_t x192 = INT64_MIN;
	volatile int32_t t47 = 742;

    t47 = (((x189&x190)&x191)>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 3511813944400136LLU;
	static int64_t x194 = INT64_MIN;
	static int32_t x196 = -1;
	int32_t t48 = -100666;

    t48 = (((x193&x194)&x195)>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x197 = 40169U;
	int16_t x198 = -1;
	volatile int16_t x199 = INT16_MIN;
	uint64_t x200 = 209LLU;
	static int32_t t49 = 1439;

    t49 = (((x197&x198)&x199)>x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = UINT64_MAX;
	volatile int8_t x202 = INT8_MIN;
	static uint8_t x204 = 28U;
	int32_t t50 = -7226;

    t50 = (((x201&x202)&x203)>x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x205 = -1;
	int32_t x206 = INT32_MIN;
	static uint32_t x207 = UINT32_MAX;
	volatile int32_t x208 = -179692;
	volatile int32_t t51 = 97088061;

    t51 = (((x205&x206)&x207)>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t t52 = 2129209;

    t52 = (((x209&x210)&x211)>x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = UINT8_MAX;
	volatile int8_t x214 = 0;
	int64_t x215 = -1011643870243LL;
	int8_t x216 = INT8_MAX;

    t53 = (((x213&x214)&x215)>x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MAX;
	uint16_t x218 = 206U;
	volatile int64_t x219 = 9243308LL;
	static int32_t t54 = 6139410;

    t54 = (((x217&x218)&x219)>x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x221 = INT16_MIN;
	static uint32_t x222 = UINT32_MAX;
	uint64_t x223 = 6863372904808956859LLU;
	uint64_t x224 = 274240151695LLU;
	static volatile int32_t t55 = -239541;

    t55 = (((x221&x222)&x223)>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = 0;
	int64_t x227 = INT64_MIN;
	static volatile uint16_t x228 = UINT16_MAX;
	static volatile int32_t t56 = 57352;

    t56 = (((x225&x226)&x227)>x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = INT32_MIN;
	int32_t x230 = INT32_MIN;
	int32_t x231 = INT32_MIN;
	int32_t t57 = -2748;

    t57 = (((x229&x230)&x231)>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x234 = INT8_MIN;
	volatile uint8_t x235 = UINT8_MAX;
	volatile int32_t t58 = -228462473;

    t58 = (((x233&x234)&x235)>x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x237 = 1396743463U;
	int32_t x240 = INT32_MAX;

    t59 = (((x237&x238)&x239)>x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -1;
	uint16_t x242 = UINT16_MAX;
	int64_t x243 = INT64_MAX;
	int32_t x244 = INT32_MIN;

    t60 = (((x241&x242)&x243)>x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MAX;
	int32_t x246 = INT32_MIN;
	static int16_t x247 = 6;
	static int32_t x248 = INT32_MAX;
	static volatile int32_t t61 = -259095;

    t61 = (((x245&x246)&x247)>x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x251 = 106U;
	volatile int16_t x252 = INT16_MAX;
	volatile int32_t t62 = -8019951;

    t62 = (((x249&x250)&x251)>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 1U;
	int64_t x254 = -1LL;
	int32_t x255 = -1;
	int32_t x256 = INT32_MAX;
	static volatile int32_t t63 = -5113349;

    t63 = (((x253&x254)&x255)>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x257 = INT32_MAX;
	int64_t x258 = INT64_MAX;
	volatile int8_t x259 = INT8_MAX;
	int8_t x260 = INT8_MIN;
	int32_t t64 = -6;

    t64 = (((x257&x258)&x259)>x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = -5878524LL;
	int16_t x262 = INT16_MIN;
	volatile int32_t t65 = -38021;

    t65 = (((x261&x262)&x263)>x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = UINT32_MAX;
	volatile int16_t x266 = INT16_MAX;
	uint32_t x268 = UINT32_MAX;
	int32_t t66 = -2494349;

    t66 = (((x265&x266)&x267)>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x270 = 687U;
	int64_t x271 = -1LL;
	int64_t x272 = -6512915LL;
	int32_t t67 = 2017977;

    t67 = (((x269&x270)&x271)>x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint8_t x273 = 3U;
	int8_t x274 = INT8_MIN;
	int32_t x275 = INT32_MIN;
	int32_t t68 = -7;

    t68 = (((x273&x274)&x275)>x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x277 = -38;
	int8_t x278 = INT8_MIN;
	static int32_t x279 = INT32_MIN;
	uint8_t x280 = 7U;
	static int32_t t69 = -1;

    t69 = (((x277&x278)&x279)>x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint16_t x281 = 63U;
	volatile int32_t x282 = INT32_MIN;
	int8_t x283 = INT8_MIN;
	uint64_t x284 = UINT64_MAX;

    t70 = (((x281&x282)&x283)>x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int8_t x285 = INT8_MIN;
	int8_t x286 = INT8_MIN;
	int8_t x287 = INT8_MAX;
	uint8_t x288 = UINT8_MAX;

    t71 = (((x285&x286)&x287)>x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x289 = 101U;
	static volatile uint8_t x292 = 7U;
	int32_t t72 = -722;

    t72 = (((x289&x290)&x291)>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	int32_t x294 = -2503165;
	int8_t x295 = INT8_MIN;
	uint16_t x296 = 6U;
	static volatile int32_t t73 = -116327;

    t73 = (((x293&x294)&x295)>x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = -20121040312046810LL;
	uint16_t x298 = 674U;
	volatile int32_t x299 = -1;
	int32_t t74 = -6;

    t74 = (((x297&x298)&x299)>x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x302 = 0U;
	uint64_t x303 = 2207625398345LLU;
	int32_t x304 = INT32_MIN;
	int32_t t75 = -869;

    t75 = (((x301&x302)&x303)>x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x305 = UINT8_MAX;
	volatile int16_t x306 = 4501;
	int32_t x307 = INT32_MIN;
	volatile int32_t t76 = 164984846;

    t76 = (((x305&x306)&x307)>x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x311 = 0;
	uint8_t x312 = UINT8_MAX;
	int32_t t77 = 308;

    t77 = (((x309&x310)&x311)>x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = 8;
	int32_t x314 = INT32_MIN;
	int8_t x315 = -1;
	int64_t x316 = -13995LL;
	int32_t t78 = 15401493;

    t78 = (((x313&x314)&x315)>x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = UINT16_MAX;
	int64_t x318 = 3385LL;
	static int8_t x319 = INT8_MIN;
	static int16_t x320 = -1620;
	volatile int32_t t79 = 666;

    t79 = (((x317&x318)&x319)>x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x321 = INT64_MIN;
	static int32_t x323 = -1;
	volatile int16_t x324 = INT16_MIN;

    t80 = (((x321&x322)&x323)>x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint8_t x325 = 0U;
	static int8_t x328 = INT8_MAX;
	volatile int32_t t81 = 194;

    t81 = (((x325&x326)&x327)>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MIN;
	int64_t x330 = -1036867536352076611LL;
	int8_t x331 = INT8_MIN;
	static uint8_t x332 = 9U;

    t82 = (((x329&x330)&x331)>x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = 454;
	uint16_t x334 = UINT16_MAX;
	static uint32_t x335 = 242766U;
	volatile int32_t x336 = INT32_MIN;

    t83 = (((x333&x334)&x335)>x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x339 = INT32_MIN;
	static uint16_t x340 = UINT16_MAX;
	int32_t t84 = -13120686;

    t84 = (((x337&x338)&x339)>x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = -199LL;
	static uint32_t x342 = 4479U;
	volatile int32_t x343 = INT32_MIN;
	static int32_t t85 = 260310345;

    t85 = (((x341&x342)&x343)>x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = -3;
	uint32_t x347 = UINT32_MAX;
	static int8_t x348 = -49;

    t86 = (((x345&x346)&x347)>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x349 = 3258703758236204492LLU;
	int64_t x350 = INT64_MIN;
	uint8_t x351 = UINT8_MAX;
	int16_t x352 = INT16_MIN;
	volatile int32_t t87 = -75313875;

    t87 = (((x349&x350)&x351)>x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = -1;
	int8_t x354 = INT8_MIN;
	volatile uint8_t x355 = UINT8_MAX;
	int8_t x356 = INT8_MIN;
	static int32_t t88 = 220;

    t88 = (((x353&x354)&x355)>x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x358 = 0U;
	uint32_t x360 = 80034U;

    t89 = (((x357&x358)&x359)>x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x362 = UINT64_MAX;
	int16_t x363 = INT16_MIN;
	volatile uint16_t x364 = 141U;
	volatile int32_t t90 = -15661021;

    t90 = (((x361&x362)&x363)>x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x366 = 1;
	static int16_t x367 = -1;
	volatile int8_t x368 = INT8_MAX;

    t91 = (((x365&x366)&x367)>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x369 = INT64_MAX;
	static uint32_t x370 = UINT32_MAX;
	volatile int64_t x371 = 2549247249194LL;
	int16_t x372 = INT16_MAX;
	volatile int32_t t92 = 1;

    t92 = (((x369&x370)&x371)>x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x374 = INT8_MAX;
	uint64_t x375 = 39965031LLU;
	volatile int32_t t93 = -15741;

    t93 = (((x373&x374)&x375)>x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = -1LL;
	int32_t x378 = -1;
	int16_t x379 = INT16_MIN;

    t94 = (((x377&x378)&x379)>x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x381 = 0U;
	int8_t x382 = -1;
	uint32_t x383 = UINT32_MAX;
	int32_t x384 = INT32_MAX;
	volatile int32_t t95 = -37282124;

    t95 = (((x381&x382)&x383)>x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x385 = INT8_MIN;
	volatile int8_t x386 = INT8_MAX;
	uint64_t x387 = 15718LLU;
	int16_t x388 = 1;

    t96 = (((x385&x386)&x387)>x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x390 = 9602242018LLU;
	static int8_t x391 = 14;

    t97 = (((x389&x390)&x391)>x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -1;
	int8_t x394 = INT8_MIN;
	uint8_t x395 = 7U;
	volatile uint16_t x396 = UINT16_MAX;
	int32_t t98 = -68401;

    t98 = (((x393&x394)&x395)>x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MAX;
	int8_t x398 = -1;
	int64_t x399 = INT64_MIN;
	static volatile int8_t x400 = -7;
	static int32_t t99 = 2321282;

    t99 = (((x397&x398)&x399)>x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x401 = INT32_MIN;
	int32_t x402 = INT32_MIN;
	int16_t x403 = -255;
	int8_t x404 = -7;
	int32_t t100 = -105;

    t100 = (((x401&x402)&x403)>x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x405 = 19U;
	int8_t x406 = -28;
	int8_t x407 = INT8_MIN;
	int64_t x408 = -31987LL;
	static volatile int32_t t101 = -13897;

    t101 = (((x405&x406)&x407)>x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x410 = UINT64_MAX;
	uint64_t x411 = 705859LLU;
	uint16_t x412 = 4906U;
	static int32_t t102 = -476315880;

    t102 = (((x409&x410)&x411)>x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MAX;
	static uint64_t x414 = UINT64_MAX;
	int32_t x415 = INT32_MAX;
	int16_t x416 = INT16_MAX;
	static int32_t t103 = -100980;

    t103 = (((x413&x414)&x415)>x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x417 = INT64_MIN;
	volatile int16_t x418 = INT16_MAX;
	volatile int64_t x419 = -160237LL;
	int16_t x420 = 1917;
	int32_t t104 = 138100;

    t104 = (((x417&x418)&x419)>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x421 = 11148979206335LLU;
	int32_t x422 = INT32_MIN;
	volatile uint16_t x423 = 12U;
	static volatile int32_t t105 = -6682;

    t105 = (((x421&x422)&x423)>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x426 = 4U;
	static int64_t x427 = -2805333773147LL;
	int16_t x428 = 8;
	volatile int32_t t106 = 184303811;

    t106 = (((x425&x426)&x427)>x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x432 = 3078475LLU;
	int32_t t107 = -6354590;

    t107 = (((x429&x430)&x431)>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x433 = UINT16_MAX;
	int16_t x434 = 241;
	int32_t x435 = 325;
	volatile int64_t x436 = -58068LL;
	volatile int32_t t108 = 13060;

    t108 = (((x433&x434)&x435)>x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x437 = UINT64_MAX;
	int32_t x438 = INT32_MIN;
	int32_t t109 = 391353;

    t109 = (((x437&x438)&x439)>x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x441 = 627U;
	int64_t x442 = 1LL;
	volatile uint8_t x443 = UINT8_MAX;
	int64_t x444 = 1LL;
	int32_t t110 = 63982763;

    t110 = (((x441&x442)&x443)>x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x445 = -171347435;
	uint16_t x446 = UINT16_MAX;
	int64_t x447 = 13082368622738LL;
	int16_t x448 = -1;
	volatile int32_t t111 = 21787744;

    t111 = (((x445&x446)&x447)>x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x450 = INT32_MIN;
	int16_t x451 = INT16_MIN;
	int64_t x452 = INT64_MIN;
	int32_t t112 = 9624;

    t112 = (((x449&x450)&x451)>x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MIN;
	int16_t x454 = -124;
	int8_t x455 = -1;
	int64_t x456 = 5468LL;
	int32_t t113 = -517842732;

    t113 = (((x453&x454)&x455)>x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = -1;
	int64_t x458 = INT64_MAX;
	static uint16_t x459 = 394U;
	uint64_t x460 = 1841549259756410LLU;
	volatile int32_t t114 = -5628584;

    t114 = (((x457&x458)&x459)>x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x461 = INT16_MAX;
	static int32_t x462 = INT32_MIN;
	uint16_t x463 = 1180U;
	static int16_t x464 = INT16_MAX;
	volatile int32_t t115 = -71055;

    t115 = (((x461&x462)&x463)>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x466 = INT64_MIN;
	static uint64_t x467 = UINT64_MAX;
	int32_t t116 = 2583;

    t116 = (((x465&x466)&x467)>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x469 = 7244LLU;
	int64_t x470 = INT64_MAX;
	uint64_t x472 = 24120006LLU;
	int32_t t117 = 64769;

    t117 = (((x469&x470)&x471)>x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x473 = INT16_MAX;
	static volatile int16_t x474 = -59;
	uint8_t x475 = 9U;
	int32_t x476 = 4;

    t118 = (((x473&x474)&x475)>x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x477 = INT16_MIN;
	volatile int32_t x478 = INT32_MIN;
	int8_t x479 = INT8_MIN;
	uint16_t x480 = 16U;
	int32_t t119 = -1100813;

    t119 = (((x477&x478)&x479)>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x481 = -1LL;
	volatile int8_t x482 = -1;
	volatile uint32_t x483 = 6U;
	int64_t x484 = INT64_MAX;
	static int32_t t120 = 262920414;

    t120 = (((x481&x482)&x483)>x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x485 = INT16_MIN;
	static int16_t x486 = INT16_MIN;
	volatile int16_t x487 = -1;
	volatile int64_t x488 = -1LL;
	volatile int32_t t121 = -15;

    t121 = (((x485&x486)&x487)>x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x489 = INT16_MIN;
	volatile uint8_t x490 = 23U;
	int8_t x491 = INT8_MIN;
	int32_t t122 = 12789987;

    t122 = (((x489&x490)&x491)>x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = -1;
	volatile int16_t x496 = 14;
	static volatile int32_t t123 = -7371;

    t123 = (((x493&x494)&x495)>x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = 3142814U;
	volatile int64_t x499 = 1LL;
	volatile int16_t x500 = -92;
	volatile int32_t t124 = 128665;

    t124 = (((x497&x498)&x499)>x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x501 = INT32_MIN;
	volatile int32_t x503 = INT32_MAX;
	uint8_t x504 = 1U;
	volatile int32_t t125 = 153712;

    t125 = (((x501&x502)&x503)>x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x505 = INT16_MIN;
	static uint16_t x506 = 744U;
	static int16_t x507 = INT16_MIN;
	uint64_t x508 = 11062627LLU;
	int32_t t126 = -448655850;

    t126 = (((x505&x506)&x507)>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x509 = INT32_MIN;
	int64_t x510 = INT64_MIN;
	int16_t x511 = INT16_MAX;
	static uint64_t x512 = UINT64_MAX;
	int32_t t127 = 21;

    t127 = (((x509&x510)&x511)>x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = -4332;
	uint8_t x516 = 7U;
	static int32_t t128 = 446954056;

    t128 = (((x513&x514)&x515)>x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -14370;
	volatile int16_t x518 = INT16_MIN;
	int32_t x519 = INT32_MIN;
	int16_t x520 = -1;
	volatile int32_t t129 = 81;

    t129 = (((x517&x518)&x519)>x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x521 = INT32_MIN;
	int32_t x524 = -1;
	volatile int32_t t130 = -886163949;

    t130 = (((x521&x522)&x523)>x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x525 = UINT32_MAX;
	uint8_t x526 = 6U;
	int16_t x528 = -1926;
	volatile int32_t t131 = 35;

    t131 = (((x525&x526)&x527)>x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 482241U;
	int32_t x530 = -1;
	int8_t x531 = INT8_MIN;
	uint64_t x532 = 148204933454297LLU;
	volatile int32_t t132 = -797003;

    t132 = (((x529&x530)&x531)>x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x534 = -1LL;
	static int64_t x535 = -19LL;
	int16_t x536 = -1;
	volatile int32_t t133 = 210617913;

    t133 = (((x533&x534)&x535)>x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int64_t x539 = 45574940LL;
	static uint8_t x540 = 29U;
	static int32_t t134 = -211;

    t134 = (((x537&x538)&x539)>x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x541 = INT32_MAX;
	static uint16_t x542 = 28U;
	volatile int32_t t135 = -88;

    t135 = (((x541&x542)&x543)>x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x545 = 195U;
	static volatile uint16_t x546 = UINT16_MAX;
	int8_t x547 = 1;
	int64_t x548 = -1LL;
	volatile int32_t t136 = 29947;

    t136 = (((x545&x546)&x547)>x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x550 = INT32_MIN;
	uint8_t x551 = UINT8_MAX;
	int8_t x552 = INT8_MAX;
	volatile int32_t t137 = 245602871;

    t137 = (((x549&x550)&x551)>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x553 = 14LL;
	static int8_t x554 = -1;
	volatile int8_t x555 = INT8_MAX;
	static int8_t x556 = -6;
	volatile int32_t t138 = -1173;

    t138 = (((x553&x554)&x555)>x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x557 = INT16_MAX;
	static volatile int32_t x558 = INT32_MAX;
	int32_t x559 = INT32_MIN;
	volatile int32_t x560 = -21423318;
	volatile int32_t t139 = 12904;

    t139 = (((x557&x558)&x559)>x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MAX;
	int16_t x562 = INT16_MAX;
	int8_t x563 = INT8_MAX;
	int8_t x564 = -1;
	volatile int32_t t140 = 6;

    t140 = (((x561&x562)&x563)>x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x565 = UINT16_MAX;
	int32_t x566 = INT32_MIN;
	int16_t x567 = INT16_MAX;
	uint16_t x568 = 2192U;

    t141 = (((x565&x566)&x567)>x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MIN;
	int64_t x570 = INT64_MAX;
	int64_t x571 = -1LL;
	uint32_t x572 = 996U;
	static int32_t t142 = -1281981;

    t142 = (((x569&x570)&x571)>x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x575 = -1;
	int64_t x576 = -1LL;
	static int32_t t143 = 20100568;

    t143 = (((x573&x574)&x575)>x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x578 = -935706;
	int8_t x579 = INT8_MIN;
	int32_t x580 = INT32_MIN;
	volatile int32_t t144 = 3566;

    t144 = (((x577&x578)&x579)>x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x582 = UINT8_MAX;
	volatile int64_t x583 = INT64_MIN;
	volatile int32_t x584 = -1;
	volatile int32_t t145 = 28762;

    t145 = (((x581&x582)&x583)>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x586 = -1;
	int32_t x587 = 58476;
	uint32_t x588 = 1911610403U;
	volatile int32_t t146 = -1;

    t146 = (((x585&x586)&x587)>x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x589 = 4U;
	uint16_t x590 = 393U;
	int32_t x591 = INT32_MAX;
	int32_t x592 = INT32_MIN;
	static int32_t t147 = 60;

    t147 = (((x589&x590)&x591)>x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x594 = 0U;
	int32_t x595 = INT32_MIN;
	volatile int32_t t148 = 40086;

    t148 = (((x593&x594)&x595)>x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x598 = INT8_MIN;
	uint32_t x599 = UINT32_MAX;
	int64_t x600 = -62LL;
	int32_t t149 = 71;

    t149 = (((x597&x598)&x599)>x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = 384U;
	uint32_t x602 = 604U;
	static int32_t x603 = INT32_MIN;
	int32_t x604 = -1;

    t150 = (((x601&x602)&x603)>x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x606 = 3U;
	int32_t t151 = 1;

    t151 = (((x605&x606)&x607)>x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x610 = INT8_MIN;
	volatile uint16_t x612 = 71U;
	int32_t t152 = -2019370;

    t152 = (((x609&x610)&x611)>x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = 51LLU;
	int64_t x615 = 26885287967585LL;
	volatile int64_t x616 = -1LL;

    t153 = (((x613&x614)&x615)>x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x617 = -6;
	int32_t x619 = -1;
	static volatile int32_t t154 = 58491196;

    t154 = (((x617&x618)&x619)>x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = UINT16_MAX;
	static int16_t x622 = INT16_MIN;
	uint16_t x623 = 7076U;
	int64_t x624 = INT64_MIN;
	static int32_t t155 = -655;

    t155 = (((x621&x622)&x623)>x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x625 = 0U;
	uint8_t x626 = 0U;
	uint64_t x627 = 5010LLU;
	int32_t x628 = -1;

    t156 = (((x625&x626)&x627)>x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MAX;
	int32_t x630 = 78969439;
	uint64_t x631 = UINT64_MAX;
	int8_t x632 = INT8_MIN;
	volatile int32_t t157 = -2981;

    t157 = (((x629&x630)&x631)>x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = UINT32_MAX;
	volatile int8_t x634 = -1;
	int8_t x635 = -10;
	static volatile int32_t t158 = -498;

    t158 = (((x633&x634)&x635)>x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = 107078LL;
	uint16_t x640 = 0U;
	volatile int32_t t159 = 87211;

    t159 = (((x637&x638)&x639)>x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = 39241LLU;
	uint64_t x643 = 1137968408369746LLU;
	static int32_t x644 = 0;
	int32_t t160 = -5277;

    t160 = (((x641&x642)&x643)>x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = 8U;
	static int32_t x646 = 14;
	uint64_t x647 = UINT64_MAX;
	int16_t x648 = INT16_MIN;
	static int32_t t161 = 0;

    t161 = (((x645&x646)&x647)>x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = UINT32_MAX;
	volatile uint16_t x650 = 23U;
	uint16_t x651 = 6220U;
	int32_t t162 = 28782;

    t162 = (((x649&x650)&x651)>x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x654 = UINT32_MAX;
	volatile int64_t x655 = INT64_MIN;
	int32_t x656 = -1;
	static int32_t t163 = 262596;

    t163 = (((x653&x654)&x655)>x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x658 = INT64_MIN;
	int16_t x659 = -966;
	volatile int64_t x660 = INT64_MAX;
	int32_t t164 = -10030;

    t164 = (((x657&x658)&x659)>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = -13547;
	static int8_t x662 = 0;
	int64_t x663 = INT64_MIN;
	uint32_t x664 = 1164218068U;

    t165 = (((x661&x662)&x663)>x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -1LL;
	static int16_t x667 = INT16_MAX;
	int32_t t166 = 1315002;

    t166 = (((x665&x666)&x667)>x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = 2;
	volatile uint64_t x670 = 89817803289395242LLU;
	volatile int32_t x671 = INT32_MIN;
	int16_t x672 = -1;
	volatile int32_t t167 = 28;

    t167 = (((x669&x670)&x671)>x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MIN;
	static int16_t x674 = INT16_MIN;
	int64_t x675 = -3769459LL;
	int16_t x676 = INT16_MAX;
	int32_t t168 = -77127190;

    t168 = (((x673&x674)&x675)>x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x677 = 106U;
	int64_t x678 = INT64_MIN;
	int32_t x679 = -47244;
	volatile int32_t t169 = -10390963;

    t169 = (((x677&x678)&x679)>x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x681 = INT64_MIN;
	volatile int64_t x682 = 4LL;
	int64_t x683 = INT64_MIN;
	uint32_t x684 = 28U;
	int32_t t170 = -114;

    t170 = (((x681&x682)&x683)>x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x686 = -4147558LL;
	static int8_t x687 = -1;
	int32_t t171 = 45488358;

    t171 = (((x685&x686)&x687)>x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x692 = 13U;
	volatile int32_t t172 = 10851566;

    t172 = (((x689&x690)&x691)>x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = 3188;
	volatile uint32_t x696 = 1790U;

    t173 = (((x693&x694)&x695)>x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x697 = INT64_MIN;
	int32_t x700 = 496275;
	int32_t t174 = -508492951;

    t174 = (((x697&x698)&x699)>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MIN;
	int64_t x702 = -1LL;
	int16_t x704 = -1;
	volatile int32_t t175 = 51501553;

    t175 = (((x701&x702)&x703)>x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = -1;
	static int16_t x707 = INT16_MIN;
	int32_t t176 = 57750;

    t176 = (((x705&x706)&x707)>x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x710 = 218288891U;
	int64_t x712 = INT64_MAX;

    t177 = (((x709&x710)&x711)>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x714 = -1579;
	static int32_t t178 = 0;

    t178 = (((x713&x714)&x715)>x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = UINT32_MAX;
	uint64_t x718 = 10666LLU;
	int32_t x719 = -1;
	volatile int32_t t179 = 9279563;

    t179 = (((x717&x718)&x719)>x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x721 = INT16_MAX;
	volatile int16_t x722 = 14;
	uint8_t x723 = 76U;
	uint32_t x724 = UINT32_MAX;
	volatile int32_t t180 = -1317432;

    t180 = (((x721&x722)&x723)>x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x725 = 6U;
	volatile int32_t x727 = 108;
	static uint64_t x728 = 8LLU;

    t181 = (((x725&x726)&x727)>x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x729 = 4242091344007529577LL;
	static volatile uint8_t x730 = UINT8_MAX;
	static uint32_t x731 = 104U;
	uint32_t x732 = 158U;
	static volatile int32_t t182 = 3641;

    t182 = (((x729&x730)&x731)>x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int8_t x734 = -1;
	int64_t x736 = INT64_MIN;

    t183 = (((x733&x734)&x735)>x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x737 = 76U;
	uint16_t x739 = 10U;
	volatile int32_t t184 = -41891;

    t184 = (((x737&x738)&x739)>x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x741 = INT32_MIN;
	int32_t x742 = 18471;
	int64_t x743 = -1LL;
	int16_t x744 = -1;
	int32_t t185 = -5413286;

    t185 = (((x741&x742)&x743)>x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x745 = 5575LL;
	static volatile int64_t x746 = INT64_MIN;
	int16_t x747 = INT16_MIN;
	uint32_t x748 = 877763U;

    t186 = (((x745&x746)&x747)>x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x749 = -1LL;
	int8_t x751 = -1;
	uint32_t x752 = 11387U;
	volatile int32_t t187 = 20;

    t187 = (((x749&x750)&x751)>x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = 1129U;
	int64_t x755 = INT64_MAX;
	volatile int8_t x756 = 14;
	int32_t t188 = 21676582;

    t188 = (((x753&x754)&x755)>x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MIN;
	int16_t x760 = INT16_MAX;

    t189 = (((x757&x758)&x759)>x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -1;
	int16_t x762 = 1600;
	uint32_t x763 = UINT32_MAX;
	int32_t x764 = -1;
	static volatile int32_t t190 = 719305;

    t190 = (((x761&x762)&x763)>x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x766 = INT16_MIN;
	static int64_t x767 = 363793283978LL;
	int8_t x768 = INT8_MIN;

    t191 = (((x765&x766)&x767)>x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = UINT16_MAX;
	volatile int8_t x770 = -37;
	int8_t x771 = INT8_MAX;
	static int64_t x772 = INT64_MIN;
	volatile int32_t t192 = -2;

    t192 = (((x769&x770)&x771)>x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x773 = UINT32_MAX;
	uint16_t x774 = 6792U;
	uint16_t x775 = UINT16_MAX;
	int8_t x776 = INT8_MIN;
	static int32_t t193 = 2152;

    t193 = (((x773&x774)&x775)>x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x777 = INT64_MIN;
	int64_t x778 = INT64_MIN;
	static int64_t x779 = 108691LL;
	int32_t x780 = INT32_MIN;
	volatile int32_t t194 = -524105;

    t194 = (((x777&x778)&x779)>x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x781 = INT8_MIN;
	static int16_t x783 = -1;
	uint64_t x784 = 3551814362LLU;

    t195 = (((x781&x782)&x783)>x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = -1;
	static volatile int64_t x787 = -1LL;
	volatile int32_t x788 = INT32_MAX;
	volatile int32_t t196 = 0;

    t196 = (((x785&x786)&x787)>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = 3;
	volatile int8_t x790 = 1;
	int16_t x791 = -34;
	int32_t x792 = -4588689;
	int32_t t197 = -14420;

    t197 = (((x789&x790)&x791)>x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x795 = INT16_MIN;
	int32_t t198 = 10936;

    t198 = (((x793&x794)&x795)>x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MIN;
	int8_t x798 = INT8_MIN;
	static int64_t x799 = -20272573068686585LL;
	int32_t x800 = INT32_MAX;
	volatile int32_t t199 = 452575138;

    t199 = (((x797&x798)&x799)>x800);

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


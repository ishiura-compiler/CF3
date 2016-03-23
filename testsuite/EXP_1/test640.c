
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

uint32_t x1 = 1266582U;
int32_t t1 = -243;
volatile int32_t x9 = -1;
volatile int64_t x10 = -340647724570647LL;
int64_t x11 = -250494LL;
volatile int32_t t3 = -729858;
int64_t x22 = INT64_MIN;
static uint32_t x25 = 27U;
int32_t t5 = -12;
uint64_t x31 = UINT64_MAX;
uint16_t x32 = 6U;
static int8_t x35 = INT8_MIN;
volatile int32_t t9 = 5;
int8_t x47 = INT8_MAX;
volatile int64_t x48 = INT64_MIN;
int64_t x53 = INT64_MAX;
volatile int32_t x56 = INT32_MIN;
volatile int8_t x64 = -1;
int32_t t15 = -78442466;
volatile int64_t x73 = -491719LL;
uint32_t x78 = 3U;
static volatile int16_t x85 = -9;
static uint64_t x86 = UINT64_MAX;
volatile int32_t t19 = 414166;
uint64_t x92 = 44110510420122389LLU;
int32_t t20 = -6879;
static int8_t x94 = -1;
static volatile int32_t t21 = 1940;
int32_t t22 = 73;
static int32_t x103 = 1515;
static int32_t x104 = -784854073;
volatile int16_t x112 = 15037;
int16_t x115 = -3270;
int16_t x116 = INT16_MIN;
volatile int32_t t26 = -1;
static int8_t x118 = 1;
int64_t x119 = -1LL;
uint8_t x125 = 14U;
int64_t x136 = INT64_MAX;
int32_t x154 = INT32_MAX;
int64_t x164 = INT64_MIN;
int16_t x165 = INT16_MIN;
volatile int64_t x170 = INT64_MAX;
volatile int32_t x173 = -69;
int16_t x174 = -1;
uint16_t x182 = UINT16_MAX;
int8_t x183 = 7;
volatile int32_t x186 = -233734110;
volatile uint64_t x187 = 6690864326LLU;
int16_t x190 = -1384;
volatile int32_t t45 = -523812672;
int8_t x194 = INT8_MIN;
volatile int32_t t46 = 15130651;
int32_t x202 = INT32_MIN;
volatile int32_t t48 = -700887177;
static int8_t x205 = INT8_MIN;
uint64_t x206 = 29126974743402LLU;
volatile int8_t x210 = -1;
int32_t t52 = -3;
static uint32_t x230 = UINT32_MAX;
int8_t x240 = 1;
volatile int32_t t59 = 0;
volatile uint16_t x255 = 2U;
static int8_t x257 = INT8_MIN;
uint16_t x261 = UINT16_MAX;
int32_t x263 = 12631338;
uint16_t x264 = 28035U;
volatile int32_t t65 = -125158553;
int8_t x274 = -3;
int16_t x276 = INT16_MAX;
int64_t x283 = 257LL;
uint32_t x288 = 8350583U;
int32_t t69 = 5;
static volatile int16_t x289 = 6031;
static volatile int32_t t72 = -15520;
uint32_t x302 = 278807U;
int64_t x303 = -1LL;
int16_t x306 = -4;
volatile int16_t x307 = INT16_MAX;
volatile int32_t t75 = -82448;
int64_t x314 = -1LL;
int8_t x318 = INT8_MAX;
int8_t x320 = -1;
static volatile int32_t t77 = 10845993;
int32_t x324 = -60159;
static int64_t x327 = INT64_MIN;
volatile int32_t t79 = 13439;
int32_t x339 = -1;
uint64_t x347 = 14215LLU;
uint32_t x354 = 1220999210U;
static int32_t t84 = -375;
uint64_t x358 = UINT64_MAX;
volatile int32_t t86 = -344671198;
int32_t t88 = -4501;
volatile uint16_t x379 = 7021U;
uint8_t x386 = 11U;
int32_t x387 = -963723145;
uint64_t x388 = UINT64_MAX;
int32_t x390 = 117778;
int64_t x392 = -314693LL;
int8_t x395 = INT8_MIN;
volatile int32_t t93 = 1;
int8_t x401 = INT8_MIN;
int32_t t95 = 4207;
int8_t x406 = -10;
uint8_t x409 = 1U;
int32_t t97 = 53017;
int16_t x420 = 7728;
static int8_t x421 = INT8_MAX;
int32_t t100 = 14903212;
uint32_t x428 = 1U;
static int32_t t102 = 3;
uint32_t x437 = 278U;
uint8_t x440 = UINT8_MAX;
volatile int32_t x443 = 52710649;
int8_t x446 = -1;
uint32_t x448 = 19930U;
volatile int64_t x450 = 30LL;
int64_t x451 = INT64_MAX;
volatile int32_t t107 = -1;
int16_t x453 = -1;
volatile int32_t t108 = 120349;
volatile uint16_t x463 = UINT16_MAX;
uint8_t x464 = UINT8_MAX;
static int32_t t110 = -621383;
uint16_t x470 = 18229U;
int32_t x481 = 1;
int8_t x482 = INT8_MAX;
int32_t t113 = 107141081;
int32_t t114 = -108;
int16_t x492 = -1;
int32_t t115 = -238;
int8_t x496 = INT8_MIN;
volatile int32_t t116 = 31736093;
volatile uint64_t x497 = 89LLU;
int32_t x499 = 6133697;
uint64_t x501 = 132085846661865054LLU;
int16_t x502 = INT16_MAX;
int32_t x503 = 1779;
volatile int32_t t118 = 15900;
int32_t x507 = 4250;
int32_t x515 = INT32_MIN;
volatile int32_t t123 = -16;
static uint64_t x525 = 7814001764054201324LLU;
volatile uint64_t x526 = UINT64_MAX;
static int16_t x532 = INT16_MAX;
int32_t x533 = INT32_MAX;
uint16_t x535 = UINT16_MAX;
int32_t t126 = -772891;
static uint64_t x537 = UINT64_MAX;
static volatile uint64_t x539 = 2685911875792063LLU;
uint16_t x540 = 15450U;
int16_t x543 = -4;
int16_t x546 = INT16_MIN;
volatile int8_t x548 = -4;
int16_t x554 = INT16_MIN;
int8_t x560 = -3;
int32_t x567 = -6687;
int8_t x568 = INT8_MIN;
int64_t x570 = 2097864624LL;
static volatile int16_t x573 = 1;
int64_t x586 = INT64_MIN;
static int16_t x592 = -1;
volatile uint16_t x595 = 150U;
int32_t t140 = 22016;
uint16_t x599 = 7U;
int64_t x603 = INT64_MAX;
int8_t x608 = 3;
int16_t x612 = INT16_MIN;
uint64_t x617 = 62412989083LLU;
static int8_t x619 = INT8_MIN;
int16_t x634 = INT16_MIN;
int8_t x642 = -1;
volatile int32_t t150 = 360890;
static volatile int32_t t151 = 16;
volatile int32_t t153 = -1;
uint8_t x661 = 2U;
int16_t x663 = -186;
int32_t t155 = -1;
int64_t x665 = -30289607237LL;
static int8_t x668 = 1;
volatile int64_t x673 = INT64_MIN;
int64_t x685 = INT64_MIN;
static int32_t x689 = -1;
uint16_t x691 = UINT16_MAX;
static volatile int64_t x692 = -9295LL;
static int16_t x701 = INT16_MAX;
int16_t x704 = INT16_MIN;
volatile int32_t t163 = -2;
static int32_t x706 = INT32_MAX;
int32_t x707 = -216;
int16_t x718 = -1;
uint8_t x725 = UINT8_MAX;
uint32_t x727 = UINT32_MAX;
int64_t x730 = 62048773918LL;
uint32_t x732 = 176631429U;
uint16_t x737 = 2841U;
static volatile int16_t x740 = -2290;
static int8_t x745 = 2;
int64_t x754 = INT64_MIN;
static int64_t x755 = -1LL;
int64_t x761 = INT64_MAX;
volatile int16_t x765 = INT16_MIN;
volatile int32_t x766 = 337002617;
int16_t x767 = INT16_MIN;
volatile int32_t t177 = 43819053;
volatile int8_t x771 = -1;
volatile int64_t x780 = INT64_MAX;
static int32_t x791 = 74;
volatile int8_t x792 = INT8_MIN;
int32_t t182 = 10796;
int16_t x797 = INT16_MIN;
static int16_t x805 = INT16_MIN;
int32_t x808 = INT32_MAX;
static int32_t t187 = -14;
uint32_t x827 = UINT32_MAX;
int32_t x831 = INT32_MIN;
volatile int32_t t192 = -1090219;
uint16_t x838 = 1U;
static int32_t t194 = 251368;
int32_t t196 = 9;
uint64_t x854 = 2252691082181LLU;
uint16_t x859 = UINT16_MAX;
int32_t t198 = -94;
static uint8_t x863 = 88U;
uint16_t x864 = 27882U;


void f0(void) {
    	int64_t x2 = INT64_MIN;
	static int32_t x3 = -1;
	volatile int32_t x4 = INT32_MIN;
	static volatile int32_t t0 = 390336;

    t0 = (((x1/x2)/x3)<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MAX;
	int64_t x6 = -32988LL;
	volatile int32_t x7 = -1;
	volatile int64_t x8 = 596581634968671379LL;

    t1 = (((x5/x6)/x7)<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x12 = 518209765LL;
	static int32_t t2 = 49;

    t2 = (((x9/x10)/x11)<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MIN;
	static int64_t x14 = INT64_MAX;
	uint8_t x15 = UINT8_MAX;
	static int8_t x16 = -1;

    t3 = (((x13/x14)/x15)<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = 155;
	int16_t x23 = -9562;
	volatile int32_t x24 = -1;
	int32_t t4 = -18;

    t4 = (((x21/x22)/x23)<=x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x26 = UINT32_MAX;
	int8_t x27 = INT8_MIN;
	static int32_t x28 = INT32_MAX;

    t5 = (((x25/x26)/x27)<=x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = -1;
	static volatile int8_t x30 = 1;
	volatile int32_t t6 = -255429178;

    t6 = (((x29/x30)/x31)<=x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x33 = -111;
	static uint64_t x34 = 49353LLU;
	int8_t x36 = 1;
	volatile int32_t t7 = -653038;

    t7 = (((x33/x34)/x35)<=x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = INT32_MIN;
	uint32_t x38 = 137451264U;
	int16_t x39 = -1;
	static int16_t x40 = INT16_MIN;
	volatile int32_t t8 = 370;

    t8 = (((x37/x38)/x39)<=x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = INT64_MAX;
	int32_t x42 = 3;
	uint16_t x43 = UINT16_MAX;
	static uint64_t x44 = 60LLU;

    t9 = (((x41/x42)/x43)<=x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = INT32_MAX;
	static volatile int16_t x46 = -1;
	volatile int32_t t10 = -50373279;

    t10 = (((x45/x46)/x47)<=x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int16_t x49 = INT16_MIN;
	volatile uint8_t x50 = UINT8_MAX;
	uint64_t x51 = UINT64_MAX;
	uint64_t x52 = 30340469LLU;
	static int32_t t11 = -1;

    t11 = (((x49/x50)/x51)<=x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x54 = INT32_MAX;
	int16_t x55 = -1;
	volatile int32_t t12 = -1246;

    t12 = (((x53/x54)/x55)<=x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x57 = INT16_MAX;
	int16_t x58 = INT16_MIN;
	int8_t x59 = -7;
	int32_t x60 = INT32_MIN;
	int32_t t13 = 5454376;

    t13 = (((x57/x58)/x59)<=x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = 14291;
	static int16_t x62 = 2286;
	volatile int64_t x63 = -634002308965LL;
	volatile int32_t t14 = 4178;

    t14 = (((x61/x62)/x63)<=x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = 184368444LL;
	uint8_t x66 = UINT8_MAX;
	int32_t x67 = INT32_MIN;
	int8_t x68 = INT8_MAX;

    t15 = (((x65/x66)/x67)<=x68);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = INT16_MAX;
	static int32_t x70 = INT32_MIN;
	int8_t x71 = -30;
	volatile int16_t x72 = INT16_MIN;
	volatile int32_t t16 = -7352;

    t16 = (((x69/x70)/x71)<=x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x74 = UINT16_MAX;
	uint8_t x75 = UINT8_MAX;
	static uint64_t x76 = 19161044703714LLU;
	volatile int32_t t17 = -15;

    t17 = (((x73/x74)/x75)<=x76);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x77 = 1466084U;
	int16_t x79 = INT16_MAX;
	int32_t x80 = INT32_MAX;
	int32_t t18 = -7421215;

    t18 = (((x77/x78)/x79)<=x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x87 = -1;
	volatile uint64_t x88 = 19334402LLU;

    t19 = (((x85/x86)/x87)<=x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x89 = 2;
	int32_t x90 = -841;
	uint64_t x91 = 1LLU;

    t20 = (((x89/x90)/x91)<=x92);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x93 = INT16_MIN;
	volatile uint16_t x95 = 7211U;
	volatile int32_t x96 = -67705358;

    t21 = (((x93/x94)/x95)<=x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x97 = 130808180LLU;
	int8_t x98 = -6;
	volatile int64_t x99 = INT64_MIN;
	volatile int8_t x100 = INT8_MIN;

    t22 = (((x97/x98)/x99)<=x100);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x101 = -1;
	volatile uint8_t x102 = UINT8_MAX;
	static int32_t t23 = 15558;

    t23 = (((x101/x102)/x103)<=x104);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x105 = INT32_MAX;
	uint16_t x106 = UINT16_MAX;
	static int8_t x107 = INT8_MAX;
	uint32_t x108 = 250188693U;
	int32_t t24 = 1;

    t24 = (((x105/x106)/x107)<=x108);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x109 = 189241371LLU;
	int64_t x110 = 132LL;
	uint8_t x111 = 7U;
	int32_t t25 = 1;

    t25 = (((x109/x110)/x111)<=x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x113 = INT8_MIN;
	int16_t x114 = INT16_MIN;

    t26 = (((x113/x114)/x115)<=x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x117 = UINT64_MAX;
	uint64_t x120 = UINT64_MAX;
	int32_t t27 = 8470;

    t27 = (((x117/x118)/x119)<=x120);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x121 = INT32_MIN;
	int16_t x122 = 2000;
	int16_t x123 = INT16_MIN;
	uint8_t x124 = 17U;
	int32_t t28 = 14316;

    t28 = (((x121/x122)/x123)<=x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x126 = UINT32_MAX;
	static volatile uint16_t x127 = 2U;
	uint64_t x128 = 106450434624LLU;
	int32_t t29 = 255;

    t29 = (((x125/x126)/x127)<=x128);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x129 = 0U;
	uint8_t x130 = UINT8_MAX;
	uint16_t x131 = UINT16_MAX;
	static uint8_t x132 = 6U;
	int32_t t30 = -2238;

    t30 = (((x129/x130)/x131)<=x132);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x133 = 400;
	int64_t x134 = INT64_MIN;
	uint64_t x135 = 29LLU;
	int32_t t31 = 34317;

    t31 = (((x133/x134)/x135)<=x136);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x137 = 3581;
	static int32_t x138 = INT32_MAX;
	volatile int64_t x139 = INT64_MIN;
	static volatile int8_t x140 = INT8_MIN;
	int32_t t32 = -613;

    t32 = (((x137/x138)/x139)<=x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x141 = 7U;
	int32_t x142 = INT32_MIN;
	volatile uint64_t x143 = UINT64_MAX;
	int32_t x144 = -1;
	int32_t t33 = -47325;

    t33 = (((x141/x142)/x143)<=x144);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x145 = INT16_MIN;
	int32_t x146 = INT32_MAX;
	volatile int16_t x147 = -1;
	uint64_t x148 = 116368488104107LLU;
	volatile int32_t t34 = -507207926;

    t34 = (((x145/x146)/x147)<=x148);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x149 = INT8_MAX;
	static uint32_t x150 = UINT32_MAX;
	int16_t x151 = -9;
	uint64_t x152 = 23728629795501LLU;
	volatile int32_t t35 = -102519;

    t35 = (((x149/x150)/x151)<=x152);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x153 = 217U;
	int32_t x155 = INT32_MAX;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t36 = -80905;

    t36 = (((x153/x154)/x155)<=x156);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x157 = UINT16_MAX;
	volatile int32_t x158 = 338168;
	int16_t x159 = INT16_MIN;
	uint64_t x160 = UINT64_MAX;
	int32_t t37 = 7320426;

    t37 = (((x157/x158)/x159)<=x160);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x161 = INT16_MIN;
	static int32_t x162 = -1;
	volatile int64_t x163 = 1057471018625105848LL;
	volatile int32_t t38 = 319;

    t38 = (((x161/x162)/x163)<=x164);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x166 = 2;
	int8_t x167 = INT8_MIN;
	static volatile uint32_t x168 = 1415374695U;
	static int32_t t39 = 1815;

    t39 = (((x165/x166)/x167)<=x168);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x169 = 1754313146477645LLU;
	int16_t x171 = INT16_MIN;
	int32_t x172 = INT32_MIN;
	volatile int32_t t40 = 453628043;

    t40 = (((x169/x170)/x171)<=x172);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x175 = -1LL;
	int8_t x176 = -1;
	volatile int32_t t41 = -39524;

    t41 = (((x173/x174)/x175)<=x176);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x177 = UINT8_MAX;
	volatile int16_t x178 = 13203;
	uint64_t x179 = UINT64_MAX;
	int64_t x180 = INT64_MIN;
	volatile int32_t t42 = 0;

    t42 = (((x177/x178)/x179)<=x180);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x181 = INT64_MIN;
	int64_t x184 = -25LL;
	static int32_t t43 = -32087970;

    t43 = (((x181/x182)/x183)<=x184);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x185 = 5130U;
	int8_t x188 = -1;
	static int32_t t44 = -1;

    t44 = (((x185/x186)/x187)<=x188);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x189 = INT64_MAX;
	static int64_t x191 = INT64_MAX;
	int16_t x192 = -14;

    t45 = (((x189/x190)/x191)<=x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x193 = 0;
	int32_t x195 = INT32_MIN;
	uint16_t x196 = UINT16_MAX;

    t46 = (((x193/x194)/x195)<=x196);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x197 = -689;
	volatile uint8_t x198 = 27U;
	int64_t x199 = -1LL;
	int64_t x200 = -1LL;
	static int32_t t47 = -550571;

    t47 = (((x197/x198)/x199)<=x200);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x201 = INT8_MIN;
	uint16_t x203 = UINT16_MAX;
	volatile int16_t x204 = -1;

    t48 = (((x201/x202)/x203)<=x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x207 = INT32_MIN;
	int32_t x208 = INT32_MAX;
	int32_t t49 = -5;

    t49 = (((x205/x206)/x207)<=x208);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x209 = INT32_MAX;
	int16_t x211 = INT16_MIN;
	uint32_t x212 = UINT32_MAX;
	int32_t t50 = -802853;

    t50 = (((x209/x210)/x211)<=x212);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x213 = INT8_MIN;
	int32_t x214 = INT32_MIN;
	static int8_t x215 = -1;
	uint16_t x216 = 2U;
	static int32_t t51 = -23681;

    t51 = (((x213/x214)/x215)<=x216);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x217 = INT32_MAX;
	int16_t x218 = INT16_MIN;
	uint8_t x219 = UINT8_MAX;
	uint32_t x220 = 39240U;

    t52 = (((x217/x218)/x219)<=x220);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x221 = INT16_MIN;
	int8_t x222 = -1;
	uint8_t x223 = UINT8_MAX;
	int32_t x224 = INT32_MIN;
	volatile int32_t t53 = -253;

    t53 = (((x221/x222)/x223)<=x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x225 = INT32_MIN;
	int32_t x226 = 632;
	volatile uint16_t x227 = 116U;
	int64_t x228 = -3746156778132686LL;
	int32_t t54 = 10;

    t54 = (((x225/x226)/x227)<=x228);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x229 = 3708955;
	int16_t x231 = INT16_MAX;
	uint16_t x232 = 1U;
	volatile int32_t t55 = -113411;

    t55 = (((x229/x230)/x231)<=x232);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x233 = INT64_MIN;
	uint64_t x234 = 408LLU;
	int32_t x235 = INT32_MIN;
	static int32_t x236 = INT32_MAX;
	int32_t t56 = 166793624;

    t56 = (((x233/x234)/x235)<=x236);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x237 = UINT64_MAX;
	volatile uint32_t x238 = 480U;
	uint32_t x239 = 1871345U;
	volatile int32_t t57 = -1;

    t57 = (((x237/x238)/x239)<=x240);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x241 = INT8_MAX;
	uint64_t x242 = 127041283272LLU;
	int16_t x243 = INT16_MIN;
	uint64_t x244 = 1064673324240042LLU;
	static volatile int32_t t58 = 808306;

    t58 = (((x241/x242)/x243)<=x244);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x245 = -21457637484894LL;
	int64_t x246 = -10920690LL;
	int8_t x247 = INT8_MIN;
	int16_t x248 = INT16_MIN;

    t59 = (((x245/x246)/x247)<=x248);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x249 = INT16_MIN;
	static uint16_t x250 = 862U;
	volatile int32_t x251 = -1;
	int32_t x252 = 81;
	volatile int32_t t60 = 1;

    t60 = (((x249/x250)/x251)<=x252);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x253 = 82U;
	uint64_t x254 = UINT64_MAX;
	int32_t x256 = -1;
	int32_t t61 = 14;

    t61 = (((x253/x254)/x255)<=x256);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x258 = UINT8_MAX;
	int8_t x259 = 28;
	int8_t x260 = -1;
	static int32_t t62 = -829204389;

    t62 = (((x257/x258)/x259)<=x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x262 = 80589975LL;
	static volatile int32_t t63 = -33;

    t63 = (((x261/x262)/x263)<=x264);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x265 = UINT16_MAX;
	int64_t x266 = INT64_MIN;
	int8_t x267 = -1;
	volatile int64_t x268 = INT64_MIN;
	int32_t t64 = 160;

    t64 = (((x265/x266)/x267)<=x268);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x269 = 7645U;
	uint8_t x270 = 4U;
	uint64_t x271 = 426829LLU;
	static int8_t x272 = -17;

    t65 = (((x269/x270)/x271)<=x272);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x273 = INT8_MIN;
	int8_t x275 = -1;
	volatile int32_t t66 = 128298992;

    t66 = (((x273/x274)/x275)<=x276);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x277 = 2;
	int32_t x278 = -2992817;
	int16_t x279 = INT16_MIN;
	int64_t x280 = INT64_MIN;
	int32_t t67 = -112856;

    t67 = (((x277/x278)/x279)<=x280);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x281 = INT32_MAX;
	int16_t x282 = INT16_MIN;
	int32_t x284 = -1;
	static volatile int32_t t68 = 2;

    t68 = (((x281/x282)/x283)<=x284);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x285 = -1;
	int32_t x286 = -3;
	static int32_t x287 = INT32_MIN;

    t69 = (((x285/x286)/x287)<=x288);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x290 = INT8_MIN;
	static int32_t x291 = 644;
	int32_t x292 = INT32_MIN;
	static volatile int32_t t70 = -1;

    t70 = (((x289/x290)/x291)<=x292);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x293 = INT32_MIN;
	static uint32_t x294 = 1U;
	static uint32_t x295 = 26808021U;
	uint32_t x296 = UINT32_MAX;
	volatile int32_t t71 = -444071031;

    t71 = (((x293/x294)/x295)<=x296);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x297 = INT64_MAX;
	static uint64_t x298 = UINT64_MAX;
	volatile uint64_t x299 = 86921952341733596LLU;
	int32_t x300 = -1;

    t72 = (((x297/x298)/x299)<=x300);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x301 = INT64_MIN;
	int64_t x304 = INT64_MIN;
	volatile int32_t t73 = -37;

    t73 = (((x301/x302)/x303)<=x304);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x305 = UINT16_MAX;
	int8_t x308 = INT8_MIN;
	static volatile int32_t t74 = -364;

    t74 = (((x305/x306)/x307)<=x308);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x309 = 0U;
	volatile uint8_t x310 = UINT8_MAX;
	int32_t x311 = -1;
	int8_t x312 = -10;

    t75 = (((x309/x310)/x311)<=x312);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x313 = 1;
	int16_t x315 = 22;
	int64_t x316 = 1006586532045LL;
	static volatile int32_t t76 = 6212976;

    t76 = (((x313/x314)/x315)<=x316);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x317 = -282698957LL;
	int64_t x319 = INT64_MIN;

    t77 = (((x317/x318)/x319)<=x320);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x321 = -1LL;
	static int64_t x322 = INT64_MIN;
	uint32_t x323 = 1903746135U;
	static volatile int32_t t78 = 469;

    t78 = (((x321/x322)/x323)<=x324);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x325 = 0;
	int16_t x326 = INT16_MIN;
	int64_t x328 = -20599031LL;

    t79 = (((x325/x326)/x327)<=x328);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x337 = -1;
	int64_t x338 = 1057LL;
	static uint16_t x340 = UINT16_MAX;
	int32_t t80 = -248;

    t80 = (((x337/x338)/x339)<=x340);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x341 = 6229797664426580LLU;
	int32_t x342 = INT32_MIN;
	static volatile int8_t x343 = INT8_MIN;
	int64_t x344 = INT64_MIN;
	volatile int32_t t81 = 31;

    t81 = (((x341/x342)/x343)<=x344);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x345 = 7163LL;
	volatile int8_t x346 = -63;
	volatile int16_t x348 = INT16_MAX;
	int32_t t82 = -133344;

    t82 = (((x345/x346)/x347)<=x348);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x349 = INT16_MIN;
	int16_t x350 = INT16_MAX;
	uint32_t x351 = 266544720U;
	int16_t x352 = INT16_MIN;
	volatile int32_t t83 = -2803;

    t83 = (((x349/x350)/x351)<=x352);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x353 = 0U;
	int32_t x355 = INT32_MIN;
	uint8_t x356 = 34U;

    t84 = (((x353/x354)/x355)<=x356);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x357 = INT64_MIN;
	uint64_t x359 = 67442LLU;
	volatile uint16_t x360 = UINT16_MAX;
	volatile int32_t t85 = 8245;

    t85 = (((x357/x358)/x359)<=x360);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x365 = 1068LLU;
	int64_t x366 = -1LL;
	uint32_t x367 = UINT32_MAX;
	uint64_t x368 = 298745462472143LLU;

    t86 = (((x365/x366)/x367)<=x368);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x369 = 3395719190LLU;
	static int8_t x370 = 1;
	static volatile int16_t x371 = INT16_MIN;
	int64_t x372 = INT64_MIN;
	volatile int32_t t87 = 730369662;

    t87 = (((x369/x370)/x371)<=x372);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x373 = INT64_MAX;
	uint8_t x374 = UINT8_MAX;
	int16_t x375 = -1;
	int16_t x376 = INT16_MIN;

    t88 = (((x373/x374)/x375)<=x376);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int32_t x377 = -1104215;
	static uint16_t x378 = UINT16_MAX;
	volatile int8_t x380 = INT8_MIN;
	int32_t t89 = -62560;

    t89 = (((x377/x378)/x379)<=x380);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x381 = 173U;
	volatile int16_t x382 = 109;
	volatile uint32_t x383 = 9U;
	volatile int64_t x384 = -41LL;
	int32_t t90 = 313923;

    t90 = (((x381/x382)/x383)<=x384);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x385 = 399U;
	int32_t t91 = -999049;

    t91 = (((x385/x386)/x387)<=x388);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x389 = UINT16_MAX;
	int32_t x391 = 48;
	static int32_t t92 = 2824;

    t92 = (((x389/x390)/x391)<=x392);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x393 = 52709140U;
	static int16_t x394 = INT16_MIN;
	volatile int32_t x396 = INT32_MIN;

    t93 = (((x393/x394)/x395)<=x396);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x397 = INT8_MAX;
	volatile int32_t x398 = INT32_MIN;
	int32_t x399 = -26958;
	int8_t x400 = -24;
	int32_t t94 = 20921;

    t94 = (((x397/x398)/x399)<=x400);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x402 = UINT8_MAX;
	uint16_t x403 = UINT16_MAX;
	uint64_t x404 = UINT64_MAX;

    t95 = (((x401/x402)/x403)<=x404);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x405 = UINT16_MAX;
	uint8_t x407 = 25U;
	int64_t x408 = INT64_MIN;
	int32_t t96 = -2310197;

    t96 = (((x405/x406)/x407)<=x408);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x410 = INT8_MIN;
	uint64_t x411 = 937439141111031LLU;
	int8_t x412 = INT8_MIN;

    t97 = (((x409/x410)/x411)<=x412);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x413 = -12142;
	int8_t x414 = INT8_MIN;
	int32_t x415 = -1;
	uint16_t x416 = 12349U;
	static int32_t t98 = -12161;

    t98 = (((x413/x414)/x415)<=x416);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x417 = 1LLU;
	volatile int64_t x418 = INT64_MIN;
	int16_t x419 = -208;
	static int32_t t99 = -3012;

    t99 = (((x417/x418)/x419)<=x420);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MIN;
	static volatile int64_t x424 = INT64_MAX;

    t100 = (((x421/x422)/x423)<=x424);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x425 = 122U;
	int8_t x426 = INT8_MIN;
	static uint64_t x427 = 64709203066408956LLU;
	volatile int32_t t101 = -130448715;

    t101 = (((x425/x426)/x427)<=x428);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x429 = 15570341134LL;
	uint64_t x430 = 1329031LLU;
	uint64_t x431 = 209315595616294747LLU;
	int64_t x432 = INT64_MIN;

    t102 = (((x429/x430)/x431)<=x432);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x433 = -321395;
	uint8_t x434 = UINT8_MAX;
	volatile int16_t x435 = INT16_MAX;
	int8_t x436 = 1;
	volatile int32_t t103 = 60128;

    t103 = (((x433/x434)/x435)<=x436);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x438 = 6596U;
	int16_t x439 = INT16_MAX;
	volatile int32_t t104 = 30232;

    t104 = (((x437/x438)/x439)<=x440);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x441 = 1;
	static uint8_t x442 = 69U;
	uint16_t x444 = UINT16_MAX;
	int32_t t105 = 1931;

    t105 = (((x441/x442)/x443)<=x444);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x445 = 150;
	volatile uint32_t x447 = 170986575U;
	int32_t t106 = 867;

    t106 = (((x445/x446)/x447)<=x448);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x449 = -1;
	int64_t x452 = -1LL;

    t107 = (((x449/x450)/x451)<=x452);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x454 = INT16_MIN;
	int16_t x455 = INT16_MIN;
	int8_t x456 = -30;

    t108 = (((x453/x454)/x455)<=x456);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint32_t x457 = 6016U;
	static uint8_t x458 = 1U;
	static volatile int32_t x459 = INT32_MAX;
	int16_t x460 = INT16_MIN;
	static volatile int32_t t109 = -65523;

    t109 = (((x457/x458)/x459)<=x460);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x461 = 28355LL;
	int8_t x462 = 3;

    t110 = (((x461/x462)/x463)<=x464);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x465 = INT32_MIN;
	static int8_t x466 = INT8_MIN;
	static int32_t x467 = INT32_MAX;
	static uint8_t x468 = 6U;
	volatile int32_t t111 = 3;

    t111 = (((x465/x466)/x467)<=x468);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x469 = -1LL;
	uint32_t x471 = UINT32_MAX;
	volatile uint64_t x472 = 3252LLU;
	int32_t t112 = 631842;

    t112 = (((x469/x470)/x471)<=x472);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x483 = 1;
	volatile uint16_t x484 = UINT16_MAX;

    t113 = (((x481/x482)/x483)<=x484);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x485 = -2;
	uint64_t x486 = 4104216510945LLU;
	uint8_t x487 = 4U;
	int64_t x488 = 114781732LL;

    t114 = (((x485/x486)/x487)<=x488);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x489 = 5633566506LLU;
	volatile int64_t x490 = INT64_MIN;
	volatile uint64_t x491 = UINT64_MAX;

    t115 = (((x489/x490)/x491)<=x492);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x493 = INT16_MIN;
	uint8_t x494 = 31U;
	int16_t x495 = -48;

    t116 = (((x493/x494)/x495)<=x496);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x498 = INT8_MIN;
	static int16_t x500 = INT16_MIN;
	volatile int32_t t117 = 817462;

    t117 = (((x497/x498)/x499)<=x500);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x504 = INT16_MIN;

    t118 = (((x501/x502)/x503)<=x504);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x505 = -23;
	volatile uint8_t x506 = 12U;
	static int8_t x508 = 5;
	int32_t t119 = 6704;

    t119 = (((x505/x506)/x507)<=x508);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x509 = -63464300;
	int32_t x510 = INT32_MIN;
	int32_t x511 = INT32_MIN;
	static volatile uint32_t x512 = UINT32_MAX;
	int32_t t120 = 18404603;

    t120 = (((x509/x510)/x511)<=x512);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x513 = INT32_MIN;
	static volatile int32_t x514 = INT32_MAX;
	int32_t x516 = 15249;
	volatile int32_t t121 = -802;

    t121 = (((x513/x514)/x515)<=x516);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x517 = INT8_MIN;
	uint16_t x518 = 222U;
	static int64_t x519 = INT64_MIN;
	static int16_t x520 = 10548;
	volatile int32_t t122 = 180493;

    t122 = (((x517/x518)/x519)<=x520);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x521 = UINT8_MAX;
	uint32_t x522 = 12827U;
	uint8_t x523 = UINT8_MAX;
	int8_t x524 = -1;

    t123 = (((x521/x522)/x523)<=x524);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x527 = INT64_MIN;
	static int16_t x528 = INT16_MIN;
	volatile int32_t t124 = -78;

    t124 = (((x525/x526)/x527)<=x528);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int32_t x529 = -17;
	volatile uint32_t x530 = UINT32_MAX;
	volatile uint8_t x531 = 2U;
	static volatile int32_t t125 = 6064;

    t125 = (((x529/x530)/x531)<=x532);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x534 = 12U;
	volatile int8_t x536 = INT8_MIN;

    t126 = (((x533/x534)/x535)<=x536);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x538 = INT8_MIN;
	static int32_t t127 = 1597;

    t127 = (((x537/x538)/x539)<=x540);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x541 = 5U;
	volatile int8_t x542 = INT8_MIN;
	static uint8_t x544 = UINT8_MAX;
	int32_t t128 = -348486124;

    t128 = (((x541/x542)/x543)<=x544);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x545 = INT8_MIN;
	volatile int16_t x547 = INT16_MAX;
	int32_t t129 = 90900;

    t129 = (((x545/x546)/x547)<=x548);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x549 = 2004317LLU;
	int16_t x550 = -1;
	uint64_t x551 = UINT64_MAX;
	int64_t x552 = -97580148496178LL;
	int32_t t130 = 476;

    t130 = (((x549/x550)/x551)<=x552);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x553 = UINT32_MAX;
	volatile int64_t x555 = -53756842615LL;
	uint8_t x556 = UINT8_MAX;
	int32_t t131 = -6816093;

    t131 = (((x553/x554)/x555)<=x556);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x557 = -1;
	int16_t x558 = INT16_MIN;
	volatile uint64_t x559 = UINT64_MAX;
	int32_t t132 = -1;

    t132 = (((x557/x558)/x559)<=x560);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x565 = 14;
	int16_t x566 = -56;
	int32_t t133 = -1466;

    t133 = (((x565/x566)/x567)<=x568);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x569 = 120;
	uint32_t x571 = 20049282U;
	int32_t x572 = -522017;
	volatile int32_t t134 = 235;

    t134 = (((x569/x570)/x571)<=x572);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x574 = 14220756163881LLU;
	int32_t x575 = INT32_MIN;
	volatile int8_t x576 = INT8_MIN;
	volatile int32_t t135 = 29494805;

    t135 = (((x573/x574)/x575)<=x576);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x577 = UINT64_MAX;
	int8_t x578 = INT8_MIN;
	static volatile uint16_t x579 = 11U;
	int64_t x580 = -1LL;
	static volatile int32_t t136 = -9044612;

    t136 = (((x577/x578)/x579)<=x580);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x581 = -3;
	int16_t x582 = -5929;
	int32_t x583 = -123;
	volatile uint8_t x584 = 3U;
	static volatile int32_t t137 = -346838678;

    t137 = (((x581/x582)/x583)<=x584);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x585 = UINT16_MAX;
	uint64_t x587 = 249218364020LLU;
	volatile uint64_t x588 = 1907535863570LLU;
	int32_t t138 = -355186;

    t138 = (((x585/x586)/x587)<=x588);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x589 = INT8_MIN;
	int64_t x590 = 4LL;
	int8_t x591 = -1;
	int32_t t139 = 52108;

    t139 = (((x589/x590)/x591)<=x592);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x593 = 886251792;
	volatile int64_t x594 = 380LL;
	volatile int32_t x596 = INT32_MIN;

    t140 = (((x593/x594)/x595)<=x596);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x597 = UINT32_MAX;
	int32_t x598 = INT32_MIN;
	static uint64_t x600 = 220634720LLU;
	volatile int32_t t141 = -795453679;

    t141 = (((x597/x598)/x599)<=x600);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x601 = -1;
	int32_t x602 = INT32_MIN;
	static int8_t x604 = -1;
	int32_t t142 = 12937;

    t142 = (((x601/x602)/x603)<=x604);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint32_t x605 = 6U;
	static int16_t x606 = -19;
	uint16_t x607 = UINT16_MAX;
	volatile int32_t t143 = -10449983;

    t143 = (((x605/x606)/x607)<=x608);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x609 = INT8_MIN;
	volatile uint32_t x610 = UINT32_MAX;
	static int64_t x611 = -26LL;
	volatile int32_t t144 = -242;

    t144 = (((x609/x610)/x611)<=x612);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x613 = INT8_MIN;
	int64_t x614 = INT64_MIN;
	uint64_t x615 = 551821927409LLU;
	int8_t x616 = -1;
	static int32_t t145 = 0;

    t145 = (((x613/x614)/x615)<=x616);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x618 = -26838868768952LL;
	int8_t x620 = INT8_MIN;
	volatile int32_t t146 = 1804223;

    t146 = (((x617/x618)/x619)<=x620);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x629 = 13828645758806899LL;
	uint16_t x630 = 18U;
	int16_t x631 = INT16_MIN;
	int16_t x632 = -1;
	volatile int32_t t147 = -77;

    t147 = (((x629/x630)/x631)<=x632);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x633 = INT64_MIN;
	static int8_t x635 = INT8_MIN;
	int16_t x636 = 10;
	static volatile int32_t t148 = -209643221;

    t148 = (((x633/x634)/x635)<=x636);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x637 = 52U;
	int16_t x638 = INT16_MAX;
	uint32_t x639 = UINT32_MAX;
	static volatile int8_t x640 = -1;
	int32_t t149 = -359496680;

    t149 = (((x637/x638)/x639)<=x640);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x641 = INT8_MIN;
	volatile int64_t x643 = INT64_MIN;
	static volatile uint32_t x644 = 0U;

    t150 = (((x641/x642)/x643)<=x644);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x645 = -32545144169878LL;
	uint64_t x646 = 54LLU;
	uint16_t x647 = 230U;
	uint32_t x648 = 1977U;

    t151 = (((x645/x646)/x647)<=x648);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x649 = INT8_MIN;
	static volatile int64_t x650 = -1LL;
	int16_t x651 = INT16_MIN;
	volatile uint32_t x652 = 3506856U;
	int32_t t152 = -106;

    t152 = (((x649/x650)/x651)<=x652);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x653 = 200394U;
	int32_t x654 = INT32_MIN;
	static uint16_t x655 = UINT16_MAX;
	volatile uint8_t x656 = 45U;

    t153 = (((x653/x654)/x655)<=x656);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x657 = 1842690U;
	uint16_t x658 = 4726U;
	uint16_t x659 = UINT16_MAX;
	int16_t x660 = -4623;
	volatile int32_t t154 = -3889;

    t154 = (((x657/x658)/x659)<=x660);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x662 = -1LL;
	int64_t x664 = INT64_MAX;

    t155 = (((x661/x662)/x663)<=x664);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x666 = UINT8_MAX;
	volatile int16_t x667 = -1;
	int32_t t156 = 253;

    t156 = (((x665/x666)/x667)<=x668);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x669 = UINT16_MAX;
	static uint16_t x670 = UINT16_MAX;
	int64_t x671 = -1LL;
	uint8_t x672 = UINT8_MAX;
	int32_t t157 = -362592;

    t157 = (((x669/x670)/x671)<=x672);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x674 = INT64_MAX;
	uint64_t x675 = 8606257073320190357LLU;
	int8_t x676 = -1;
	int32_t t158 = -93365500;

    t158 = (((x673/x674)/x675)<=x676);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x677 = -110;
	static uint64_t x678 = 4476096771450844251LLU;
	static int8_t x679 = -12;
	int16_t x680 = 13;
	volatile int32_t t159 = -1;

    t159 = (((x677/x678)/x679)<=x680);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x686 = INT64_MIN;
	static int64_t x687 = -1LL;
	int8_t x688 = -24;
	int32_t t160 = 0;

    t160 = (((x685/x686)/x687)<=x688);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x690 = 12U;
	volatile int32_t t161 = 145102;

    t161 = (((x689/x690)/x691)<=x692);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x697 = 4;
	uint32_t x698 = 551U;
	int8_t x699 = INT8_MIN;
	volatile uint8_t x700 = 27U;
	volatile int32_t t162 = 4;

    t162 = (((x697/x698)/x699)<=x700);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x702 = -284;
	int8_t x703 = -1;

    t163 = (((x701/x702)/x703)<=x704);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x705 = INT16_MIN;
	static int16_t x708 = 1;
	volatile int32_t t164 = 5;

    t164 = (((x705/x706)/x707)<=x708);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x709 = 571360403669489636LLU;
	int64_t x710 = 1LL;
	uint8_t x711 = 1U;
	static int64_t x712 = INT64_MIN;
	int32_t t165 = -91558472;

    t165 = (((x709/x710)/x711)<=x712);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x717 = -1LL;
	static int8_t x719 = INT8_MAX;
	int64_t x720 = -493863531LL;
	volatile int32_t t166 = -85;

    t166 = (((x717/x718)/x719)<=x720);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x721 = UINT8_MAX;
	static int16_t x722 = INT16_MAX;
	uint64_t x723 = 1294819LLU;
	uint8_t x724 = 0U;
	volatile int32_t t167 = 0;

    t167 = (((x721/x722)/x723)<=x724);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x726 = UINT8_MAX;
	int32_t x728 = 134190;
	int32_t t168 = 104;

    t168 = (((x725/x726)/x727)<=x728);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x729 = 1256217335U;
	volatile int8_t x731 = INT8_MAX;
	int32_t t169 = -212;

    t169 = (((x729/x730)/x731)<=x732);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x733 = 47;
	int8_t x734 = INT8_MAX;
	int8_t x735 = INT8_MIN;
	uint16_t x736 = 0U;
	volatile int32_t t170 = -527706417;

    t170 = (((x733/x734)/x735)<=x736);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x738 = 287145LLU;
	uint16_t x739 = 1U;
	volatile int32_t t171 = -62733;

    t171 = (((x737/x738)/x739)<=x740);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x741 = INT16_MAX;
	int64_t x742 = -444LL;
	static uint32_t x743 = 63417U;
	int32_t x744 = 1646;
	volatile int32_t t172 = -21552298;

    t172 = (((x741/x742)/x743)<=x744);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x746 = 635LLU;
	int32_t x747 = INT32_MAX;
	static int16_t x748 = -3760;
	static volatile int32_t t173 = -1807;

    t173 = (((x745/x746)/x747)<=x748);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x753 = -1;
	static int64_t x756 = INT64_MIN;
	int32_t t174 = -8098;

    t174 = (((x753/x754)/x755)<=x756);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x757 = 183249977067LL;
	uint16_t x758 = 8U;
	int64_t x759 = -1LL;
	int32_t x760 = INT32_MIN;
	int32_t t175 = 18;

    t175 = (((x757/x758)/x759)<=x760);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x762 = 3387U;
	volatile uint64_t x763 = 205605824641512496LLU;
	volatile int8_t x764 = 12;
	volatile int32_t t176 = 18361816;

    t176 = (((x761/x762)/x763)<=x764);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x768 = 1LLU;

    t177 = (((x765/x766)/x767)<=x768);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x769 = -1;
	uint16_t x770 = UINT16_MAX;
	int8_t x772 = 0;
	volatile int32_t t178 = 0;

    t178 = (((x769/x770)/x771)<=x772);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x773 = -5343LL;
	int16_t x774 = -1;
	static uint16_t x775 = 7400U;
	static int16_t x776 = -1;
	volatile int32_t t179 = -176;

    t179 = (((x773/x774)/x775)<=x776);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x777 = INT32_MIN;
	uint16_t x778 = 150U;
	int16_t x779 = INT16_MIN;
	static int32_t t180 = -1;

    t180 = (((x777/x778)/x779)<=x780);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x785 = 298U;
	int16_t x786 = INT16_MIN;
	int8_t x787 = INT8_MIN;
	int8_t x788 = INT8_MIN;
	volatile int32_t t181 = 90129;

    t181 = (((x785/x786)/x787)<=x788);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x789 = 110U;
	int8_t x790 = INT8_MIN;

    t182 = (((x789/x790)/x791)<=x792);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x793 = 1;
	uint8_t x794 = UINT8_MAX;
	volatile uint32_t x795 = 678176848U;
	static uint16_t x796 = 1U;
	volatile int32_t t183 = -31971;

    t183 = (((x793/x794)/x795)<=x796);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x798 = UINT16_MAX;
	static uint8_t x799 = 49U;
	int64_t x800 = INT64_MIN;
	volatile int32_t t184 = -27;

    t184 = (((x797/x798)/x799)<=x800);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x801 = 1;
	int32_t x802 = INT32_MIN;
	uint16_t x803 = UINT16_MAX;
	uint16_t x804 = 846U;
	static int32_t t185 = 2353689;

    t185 = (((x801/x802)/x803)<=x804);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x806 = UINT64_MAX;
	int16_t x807 = -1;
	volatile int32_t t186 = -236692635;

    t186 = (((x805/x806)/x807)<=x808);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x813 = -1;
	int8_t x814 = -40;
	static int8_t x815 = INT8_MIN;
	static int8_t x816 = -1;

    t187 = (((x813/x814)/x815)<=x816);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x817 = INT16_MIN;
	volatile int8_t x818 = -1;
	uint32_t x819 = UINT32_MAX;
	int64_t x820 = INT64_MIN;
	int32_t t188 = 2;

    t188 = (((x817/x818)/x819)<=x820);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x821 = 346U;
	static int16_t x822 = INT16_MAX;
	static uint16_t x823 = 1671U;
	int32_t x824 = -1;
	volatile int32_t t189 = 344;

    t189 = (((x821/x822)/x823)<=x824);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x825 = 1;
	int64_t x826 = INT64_MIN;
	static uint32_t x828 = UINT32_MAX;
	int32_t t190 = 1;

    t190 = (((x825/x826)/x827)<=x828);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x829 = -838;
	int8_t x830 = INT8_MIN;
	int8_t x832 = INT8_MIN;
	volatile int32_t t191 = -3293269;

    t191 = (((x829/x830)/x831)<=x832);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x833 = -1;
	int32_t x834 = INT32_MAX;
	static int8_t x835 = INT8_MIN;
	uint16_t x836 = 5U;

    t192 = (((x833/x834)/x835)<=x836);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x837 = INT64_MIN;
	int64_t x839 = INT64_MAX;
	int64_t x840 = INT64_MAX;
	volatile int32_t t193 = 14273494;

    t193 = (((x837/x838)/x839)<=x840);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x841 = 61U;
	int32_t x842 = -26;
	int16_t x843 = 51;
	int8_t x844 = INT8_MIN;

    t194 = (((x841/x842)/x843)<=x844);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int64_t x845 = INT64_MIN;
	int32_t x846 = INT32_MAX;
	int64_t x847 = INT64_MIN;
	volatile int32_t x848 = INT32_MIN;
	volatile int32_t t195 = -232885;

    t195 = (((x845/x846)/x847)<=x848);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x849 = -1LL;
	int16_t x850 = INT16_MAX;
	int16_t x851 = -1;
	int8_t x852 = 39;

    t196 = (((x849/x850)/x851)<=x852);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x853 = INT64_MAX;
	uint8_t x855 = UINT8_MAX;
	static int32_t x856 = 58076;
	int32_t t197 = 28976;

    t197 = (((x853/x854)/x855)<=x856);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x857 = 15U;
	volatile int32_t x858 = 498087475;
	uint64_t x860 = 5826998751LLU;

    t198 = (((x857/x858)/x859)<=x860);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x861 = 431U;
	int32_t x862 = INT32_MIN;
	volatile int32_t t199 = 187;

    t199 = (((x861/x862)/x863)<=x864);

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



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
int16_t x9 = INT16_MIN;
static volatile int64_t x12 = INT64_MAX;
static int16_t x13 = INT16_MIN;
volatile int32_t x14 = INT32_MIN;
int8_t x20 = 5;
volatile uint8_t x24 = UINT8_MAX;
volatile int32_t t5 = 2045298;
static int32_t t6 = -440;
static int32_t t7 = -69490;
int32_t x35 = INT32_MIN;
static volatile uint64_t x37 = 24555981LLU;
volatile int32_t t9 = -963;
int8_t x43 = INT8_MIN;
uint8_t x48 = UINT8_MAX;
static int32_t x52 = 48;
volatile uint32_t x64 = 1U;
static int32_t x72 = INT32_MAX;
int16_t x75 = INT16_MIN;
int16_t x81 = INT16_MIN;
int16_t x87 = -1;
static volatile int32_t t21 = -773950;
int64_t x95 = INT64_MAX;
static int32_t x97 = 2094;
static int64_t x104 = 255LL;
static int64_t x107 = INT64_MIN;
int32_t t28 = 70;
static uint32_t x117 = UINT32_MAX;
int64_t x121 = -1LL;
uint8_t x134 = 1U;
int64_t x136 = INT64_MAX;
int32_t t33 = 142467522;
uint64_t x140 = 274566345175871949LLU;
volatile int32_t t35 = 37880;
volatile int32_t x158 = -1;
volatile int16_t x163 = INT16_MIN;
static int64_t x166 = INT64_MIN;
volatile int32_t t41 = 570134051;
int32_t t42 = 542900;
volatile int16_t x176 = -1;
volatile uint32_t x178 = 1510339U;
static uint64_t x179 = 86321LLU;
volatile int32_t t46 = 9763;
volatile int32_t t47 = -346115;
int32_t x193 = -1;
int16_t x196 = 80;
volatile int64_t x198 = INT64_MIN;
static uint8_t x201 = 36U;
int16_t x202 = INT16_MIN;
static int64_t x209 = INT64_MIN;
static volatile uint32_t x210 = 202U;
int32_t x212 = INT32_MIN;
int64_t x213 = INT64_MIN;
int32_t t55 = -1012029859;
int8_t x237 = INT8_MAX;
uint64_t x241 = 1059774043LLU;
static int32_t x246 = -208;
int64_t x251 = -109624031954503739LL;
int8_t x260 = INT8_MIN;
static volatile int64_t x265 = INT64_MAX;
int32_t x266 = -7;
int16_t x269 = INT16_MIN;
int16_t x273 = INT16_MIN;
int32_t x274 = INT32_MIN;
volatile int16_t x275 = -11986;
volatile uint16_t x280 = 2U;
uint32_t x284 = UINT32_MAX;
int16_t x286 = INT16_MIN;
static volatile int8_t x289 = -1;
int32_t x294 = INT32_MIN;
uint32_t x299 = 2586U;
int64_t x303 = INT64_MIN;
volatile int32_t t75 = 6226;
volatile uint32_t x313 = UINT32_MAX;
volatile int32_t t78 = 3813;
uint8_t x320 = 10U;
static volatile int32_t t79 = 6469679;
int32_t x321 = 11;
static volatile uint8_t x322 = 73U;
int32_t t83 = 981829740;
int8_t x338 = INT8_MIN;
int64_t x347 = -1LL;
int32_t t86 = -16;
int8_t x352 = INT8_MAX;
int8_t x354 = -7;
int16_t x364 = INT16_MAX;
static int64_t x366 = INT64_MIN;
volatile int8_t x369 = 9;
int64_t x373 = INT64_MIN;
int32_t x375 = INT32_MAX;
uint64_t x377 = 176617943750LLU;
uint32_t x384 = UINT32_MAX;
int32_t x391 = INT32_MIN;
uint64_t x396 = 136056327919LLU;
int16_t x401 = INT16_MIN;
int8_t x408 = -1;
static int16_t x410 = -1;
static uint32_t x423 = UINT32_MAX;
volatile int64_t x425 = -85816664422LL;
static int64_t x427 = -7626059637874768LL;
static volatile uint16_t x429 = 648U;
static int64_t x432 = INT64_MIN;
int32_t t109 = -595833;
int64_t x443 = INT64_MAX;
volatile int8_t x444 = INT8_MIN;
int16_t x445 = 3;
uint64_t x449 = 1LLU;
uint32_t x450 = UINT32_MAX;
static int64_t x464 = INT64_MAX;
uint8_t x467 = UINT8_MAX;
int8_t x474 = INT8_MAX;
int32_t t118 = -251;
static int32_t x477 = INT32_MIN;
int64_t x479 = INT64_MIN;
uint64_t x480 = 10600LLU;
static int32_t t119 = 13;
int32_t x483 = 340275591;
volatile int64_t x487 = INT64_MAX;
static volatile int16_t x488 = -28;
volatile int8_t x490 = 54;
int64_t x492 = -29039LL;
uint32_t x494 = 1U;
int32_t t123 = -36356;
static int16_t x497 = INT16_MAX;
volatile uint32_t x498 = 10U;
volatile int32_t t125 = 1675;
int32_t t126 = -7657108;
uint64_t x509 = UINT64_MAX;
volatile uint32_t x518 = 104842U;
static volatile int64_t x522 = INT64_MIN;
static int32_t x523 = -2650186;
static volatile uint64_t x529 = 2253269709504673LLU;
int16_t x531 = INT16_MIN;
int16_t x532 = 0;
uint64_t x534 = UINT64_MAX;
int8_t x535 = INT8_MIN;
static int16_t x536 = -3283;
uint64_t x540 = 27484LLU;
int64_t x544 = -25366774914168167LL;
volatile int64_t x550 = INT64_MIN;
uint64_t x552 = 85299743136284039LLU;
int16_t x561 = -1;
int32_t x563 = -1;
static int32_t x568 = INT32_MIN;
static int16_t x574 = INT16_MIN;
uint8_t x583 = UINT8_MAX;
uint64_t x584 = UINT64_MAX;
uint32_t x588 = 96607113U;
int32_t t146 = 1;
uint64_t x596 = UINT64_MAX;
int8_t x603 = -1;
int8_t x604 = INT8_MAX;
static int32_t x608 = -1;
uint64_t x617 = UINT64_MAX;
volatile int8_t x618 = INT8_MIN;
uint32_t x630 = UINT32_MAX;
int8_t x646 = -31;
static int64_t x647 = -1LL;
static int32_t t164 = 45586;
uint64_t x669 = 2704483525967LLU;
static uint8_t x671 = 99U;
uint64_t x672 = 4334LLU;
volatile int32_t t167 = -1;
static int16_t x674 = INT16_MIN;
int32_t x675 = INT32_MIN;
volatile int32_t t169 = -2738885;
int64_t x682 = INT64_MIN;
uint16_t x684 = UINT16_MAX;
static int16_t x685 = INT16_MAX;
volatile int16_t x689 = INT16_MIN;
int32_t t172 = -393669046;
int32_t t174 = -464850;
volatile int32_t t175 = 968825;
uint32_t x708 = UINT32_MAX;
int8_t x709 = INT8_MAX;
int32_t t177 = -36425;
int32_t x713 = INT32_MIN;
int64_t x718 = INT64_MIN;
static volatile int32_t t180 = 32420;
static int16_t x725 = INT16_MAX;
static uint16_t x735 = 13666U;
static volatile int32_t x741 = -72;
static int32_t t185 = -1;
static int64_t x746 = INT64_MIN;
int16_t x751 = -1;
static int16_t x754 = INT16_MIN;
int32_t x756 = -1;
volatile uint8_t x761 = 5U;
static int32_t t190 = 250;
uint8_t x765 = 39U;
static uint16_t x768 = 30U;
int64_t x772 = -880852LL;
volatile int16_t x776 = INT16_MAX;
static int32_t x778 = INT32_MIN;
volatile int32_t t194 = -22727;
int16_t x782 = 57;
int64_t x784 = 141051453859LL;
static volatile int32_t t195 = -100266164;
uint16_t x788 = UINT16_MAX;
int32_t x797 = 132;


void f0(void) {
    	volatile uint64_t x2 = UINT64_MAX;
	uint8_t x3 = UINT8_MAX;
	int32_t x4 = -342698;
	int32_t t0 = 0;

    t0 = ((x1^(x2!=x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	volatile uint32_t x6 = 1U;
	volatile int16_t x7 = INT16_MIN;
	static int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = -1;

    t1 = ((x5^(x6!=x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x10 = INT16_MAX;
	uint16_t x11 = 1560U;
	volatile int32_t t2 = 25882095;

    t2 = ((x9^(x10!=x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x15 = INT8_MIN;
	static uint8_t x16 = 57U;
	static int32_t t3 = -9027518;

    t3 = ((x13^(x14!=x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -7;
	int32_t x18 = 5036942;
	int32_t x19 = -1;
	int32_t t4 = -2;

    t4 = ((x17^(x18!=x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -3946976;
	static int64_t x22 = -1LL;
	int16_t x23 = INT16_MAX;

    t5 = ((x21^(x22!=x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = INT16_MIN;
	int8_t x26 = INT8_MIN;
	volatile int8_t x27 = 1;
	int8_t x28 = INT8_MAX;

    t6 = ((x25^(x26!=x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	int64_t x30 = -1LL;
	static int8_t x31 = INT8_MIN;
	int8_t x32 = INT8_MAX;

    t7 = ((x29^(x30!=x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	volatile int16_t x34 = 405;
	int32_t x36 = -1;
	static volatile int32_t t8 = -29785;

    t8 = ((x33^(x34!=x35))!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x38 = INT16_MIN;
	int8_t x39 = INT8_MAX;
	uint16_t x40 = UINT16_MAX;

    t9 = ((x37^(x38!=x39))!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	volatile uint64_t x42 = 3452852955086LLU;
	volatile int8_t x44 = INT8_MAX;
	volatile int32_t t10 = 4;

    t10 = ((x41^(x42!=x43))!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = INT32_MIN;
	static int32_t x46 = -1;
	int64_t x47 = INT64_MIN;
	volatile int32_t t11 = 25961530;

    t11 = ((x45^(x46!=x47))!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = 812099801004110637LL;
	uint8_t x50 = UINT8_MAX;
	static uint64_t x51 = 117200763094LLU;
	int32_t t12 = 5544;

    t12 = ((x49^(x50!=x51))!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = 4326391;
	uint16_t x54 = 8U;
	int8_t x55 = INT8_MIN;
	int16_t x56 = -8;
	int32_t t13 = -23;

    t13 = ((x53^(x54!=x55))!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MIN;
	uint64_t x58 = 58801085531LLU;
	static int64_t x59 = -1LL;
	uint64_t x60 = UINT64_MAX;
	volatile int32_t t14 = 1;

    t14 = ((x57^(x58!=x59))!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 16055542U;
	uint32_t x62 = 38U;
	static uint32_t x63 = 121239469U;
	int32_t t15 = 882919;

    t15 = ((x61^(x62!=x63))!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = -17172LL;
	static uint16_t x66 = 1304U;
	uint32_t x67 = 339494092U;
	int64_t x68 = 117744643111668LL;
	volatile int32_t t16 = -960;

    t16 = ((x65^(x66!=x67))!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -1;
	int16_t x70 = INT16_MIN;
	static int32_t x71 = INT32_MIN;
	int32_t t17 = 187;

    t17 = ((x69^(x70!=x71))!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint8_t x73 = 30U;
	volatile int32_t x74 = -763261;
	uint32_t x76 = 3318U;
	volatile int32_t t18 = -3;

    t18 = ((x73^(x74!=x75))!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	int64_t x78 = -9678442448LL;
	uint32_t x79 = 450023918U;
	uint64_t x80 = 7121LLU;
	int32_t t19 = 41171;

    t19 = ((x77^(x78!=x79))!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x82 = INT64_MIN;
	static uint8_t x83 = 3U;
	volatile int8_t x84 = INT8_MIN;
	volatile int32_t t20 = -96801;

    t20 = ((x81^(x82!=x83))!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x85 = 2U;
	static int8_t x86 = INT8_MIN;
	uint32_t x88 = UINT32_MAX;

    t21 = ((x85^(x86!=x87))!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x89 = UINT64_MAX;
	static volatile int64_t x90 = INT64_MAX;
	int16_t x91 = INT16_MIN;
	int32_t x92 = INT32_MIN;
	int32_t t22 = -15748;

    t22 = ((x89^(x90!=x91))!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = 42434824LL;
	int16_t x94 = 6;
	int32_t x96 = -1047117808;
	static int32_t t23 = -1046450152;

    t23 = ((x93^(x94!=x95))!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x98 = INT64_MAX;
	static volatile uint64_t x99 = UINT64_MAX;
	int32_t x100 = INT32_MIN;
	volatile int32_t t24 = -6715;

    t24 = ((x97^(x98!=x99))!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	static int8_t x102 = -53;
	int32_t x103 = INT32_MIN;
	int32_t t25 = -1;

    t25 = ((x101^(x102!=x103))!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x105 = UINT16_MAX;
	int32_t x106 = -1;
	uint8_t x108 = UINT8_MAX;
	static int32_t t26 = -10345084;

    t26 = ((x105^(x106!=x107))!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = UINT32_MAX;
	uint16_t x110 = 3803U;
	int8_t x111 = 1;
	int64_t x112 = INT64_MIN;
	volatile int32_t t27 = -332;

    t27 = ((x109^(x110!=x111))!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MAX;
	volatile int64_t x114 = 1146LL;
	int8_t x115 = INT8_MIN;
	int32_t x116 = 12672020;

    t28 = ((x113^(x114!=x115))!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x118 = -1;
	volatile uint8_t x119 = UINT8_MAX;
	static int16_t x120 = -1;
	volatile int32_t t29 = -62925271;

    t29 = ((x117^(x118!=x119))!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x122 = UINT32_MAX;
	static uint32_t x123 = 10564U;
	int8_t x124 = -1;
	volatile int32_t t30 = 11230206;

    t30 = ((x121^(x122!=x123))!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MAX;
	int8_t x126 = -1;
	uint64_t x127 = 2232050834339128LLU;
	int8_t x128 = INT8_MIN;
	volatile int32_t t31 = -2939;

    t31 = ((x125^(x126!=x127))!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = 102;
	volatile uint32_t x130 = 844081U;
	volatile int32_t x131 = INT32_MIN;
	int8_t x132 = 53;
	volatile int32_t t32 = -2;

    t32 = ((x129^(x130!=x131))!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = 3855LL;
	uint8_t x135 = UINT8_MAX;

    t33 = ((x133^(x134!=x135))!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x137 = 37U;
	int16_t x138 = INT16_MAX;
	int64_t x139 = -406LL;
	volatile int32_t t34 = 965824559;

    t34 = ((x137^(x138!=x139))!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -11385;
	uint32_t x142 = 5009U;
	int8_t x143 = 45;
	int16_t x144 = INT16_MAX;

    t35 = ((x141^(x142!=x143))!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	static int32_t x146 = INT32_MIN;
	int8_t x147 = INT8_MAX;
	uint64_t x148 = 79LLU;
	static int32_t t36 = -35098;

    t36 = ((x145^(x146!=x147))!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	int64_t x150 = INT64_MIN;
	uint16_t x151 = UINT16_MAX;
	uint8_t x152 = UINT8_MAX;
	volatile int32_t t37 = -399;

    t37 = ((x149^(x150!=x151))!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = -1LL;
	static int8_t x154 = -5;
	int32_t x155 = -1;
	uint8_t x156 = UINT8_MAX;
	volatile int32_t t38 = 1799470;

    t38 = ((x153^(x154!=x155))!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = 1;
	uint64_t x159 = 249027LLU;
	int32_t x160 = -63590027;
	volatile int32_t t39 = -3678806;

    t39 = ((x157^(x158!=x159))!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = -1;
	uint32_t x162 = 202248198U;
	int32_t x164 = 8282870;
	int32_t t40 = -1043011105;

    t40 = ((x161^(x162!=x163))!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = 14U;
	static int64_t x167 = -17808374831LL;
	uint16_t x168 = UINT16_MAX;

    t41 = ((x165^(x166!=x167))!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x169 = -1;
	static uint16_t x170 = 242U;
	int32_t x171 = -1;
	uint64_t x172 = UINT64_MAX;

    t42 = ((x169^(x170!=x171))!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x173 = INT64_MIN;
	int32_t x174 = INT32_MAX;
	int64_t x175 = INT64_MIN;
	volatile int32_t t43 = -1;

    t43 = ((x173^(x174!=x175))!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = -1;
	int64_t x180 = INT64_MAX;
	volatile int32_t t44 = 58;

    t44 = ((x177^(x178!=x179))!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = 250;
	volatile int32_t x182 = -1;
	uint32_t x183 = 7U;
	uint32_t x184 = 0U;
	int32_t t45 = 14125955;

    t45 = ((x181^(x182!=x183))!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = 7;
	int32_t x186 = -1;
	int64_t x187 = -1738848859450278236LL;
	volatile int32_t x188 = 1;

    t46 = ((x185^(x186!=x187))!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x189 = 356;
	uint32_t x190 = 254U;
	int8_t x191 = -1;
	int8_t x192 = INT8_MIN;

    t47 = ((x189^(x190!=x191))!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x194 = 3U;
	int32_t x195 = -1;
	volatile int32_t t48 = -3972;

    t48 = ((x193^(x194!=x195))!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x197 = -749716722323LL;
	static int32_t x199 = 1554;
	static int8_t x200 = 0;
	static volatile int32_t t49 = 7;

    t49 = ((x197^(x198!=x199))!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x203 = INT64_MAX;
	uint64_t x204 = UINT64_MAX;
	volatile int32_t t50 = -2154256;

    t50 = ((x201^(x202!=x203))!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = -1;
	int32_t x206 = INT32_MAX;
	int8_t x207 = INT8_MIN;
	int32_t x208 = INT32_MIN;
	int32_t t51 = -107168;

    t51 = ((x205^(x206!=x207))!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x211 = UINT64_MAX;
	volatile int32_t t52 = -16;

    t52 = ((x209^(x210!=x211))!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x214 = 156U;
	int32_t x215 = 4;
	int32_t x216 = INT32_MIN;
	int32_t t53 = 170;

    t53 = ((x213^(x214!=x215))!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = 3;
	static volatile int32_t x218 = 1;
	volatile int16_t x219 = -1069;
	int8_t x220 = INT8_MAX;
	volatile int32_t t54 = 1;

    t54 = ((x217^(x218!=x219))!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = -1;
	volatile int16_t x222 = INT16_MAX;
	static uint64_t x223 = 247966LLU;
	volatile int8_t x224 = INT8_MAX;

    t55 = ((x221^(x222!=x223))!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MIN;
	volatile int64_t x226 = 4986014LL;
	uint64_t x227 = UINT64_MAX;
	uint32_t x228 = 635U;
	static int32_t t56 = 459142969;

    t56 = ((x225^(x226!=x227))!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x229 = -18;
	uint16_t x230 = UINT16_MAX;
	uint64_t x231 = 90235425LLU;
	uint32_t x232 = 260338U;
	volatile int32_t t57 = 1811;

    t57 = ((x229^(x230!=x231))!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	int16_t x234 = INT16_MIN;
	static int16_t x235 = INT16_MIN;
	static int64_t x236 = INT64_MAX;
	int32_t t58 = -275198;

    t58 = ((x233^(x234!=x235))!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x238 = INT64_MAX;
	int16_t x239 = -1;
	volatile uint64_t x240 = UINT64_MAX;
	volatile int32_t t59 = 9;

    t59 = ((x237^(x238!=x239))!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x242 = INT16_MIN;
	int16_t x243 = -1;
	static volatile int32_t x244 = INT32_MIN;
	volatile int32_t t60 = -254;

    t60 = ((x241^(x242!=x243))!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x245 = 10044312U;
	int32_t x247 = 7;
	int64_t x248 = INT64_MAX;
	int32_t t61 = 1524786;

    t61 = ((x245^(x246!=x247))!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x249 = -1;
	uint64_t x250 = UINT64_MAX;
	int32_t x252 = INT32_MIN;
	volatile int32_t t62 = -5906652;

    t62 = ((x249^(x250!=x251))!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = UINT16_MAX;
	uint8_t x254 = 2U;
	int8_t x255 = INT8_MIN;
	int64_t x256 = INT64_MIN;
	int32_t t63 = -489916868;

    t63 = ((x253^(x254!=x255))!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x257 = 1982985888023LLU;
	static uint16_t x258 = UINT16_MAX;
	volatile uint32_t x259 = UINT32_MAX;
	int32_t t64 = -39624;

    t64 = ((x257^(x258!=x259))!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x261 = -1LL;
	volatile int32_t x262 = INT32_MIN;
	uint16_t x263 = 487U;
	volatile uint8_t x264 = UINT8_MAX;
	int32_t t65 = -6554;

    t65 = ((x261^(x262!=x263))!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x267 = 4U;
	int64_t x268 = INT64_MAX;
	int32_t t66 = -15;

    t66 = ((x265^(x266!=x267))!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x270 = INT64_MAX;
	int16_t x271 = INT16_MIN;
	static int16_t x272 = INT16_MIN;
	volatile int32_t t67 = 856;

    t67 = ((x269^(x270!=x271))!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x276 = 9238U;
	volatile int32_t t68 = 986;

    t68 = ((x273^(x274!=x275))!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = 1;
	int64_t x278 = INT64_MIN;
	int32_t x279 = -640;
	static int32_t t69 = 37009;

    t69 = ((x277^(x278!=x279))!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MAX;
	uint16_t x282 = 3240U;
	static volatile int16_t x283 = 13821;
	int32_t t70 = 559;

    t70 = ((x281^(x282!=x283))!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	static uint16_t x287 = 120U;
	uint64_t x288 = UINT64_MAX;
	int32_t t71 = -9997291;

    t71 = ((x285^(x286!=x287))!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x290 = 201LLU;
	static uint16_t x291 = 2U;
	static volatile int16_t x292 = INT16_MAX;
	volatile int32_t t72 = 865778487;

    t72 = ((x289^(x290!=x291))!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x293 = INT64_MIN;
	int16_t x295 = -2;
	int16_t x296 = -1;
	int32_t t73 = -11475;

    t73 = ((x293^(x294!=x295))!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MIN;
	static int32_t x298 = -967968;
	int32_t x300 = INT32_MAX;
	int32_t t74 = 2;

    t74 = ((x297^(x298!=x299))!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MIN;
	int64_t x302 = -1LL;
	uint64_t x304 = UINT64_MAX;

    t75 = ((x301^(x302!=x303))!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MAX;
	static volatile int64_t x306 = INT64_MIN;
	int16_t x307 = -3;
	volatile int32_t x308 = 796619349;
	int32_t t76 = 1051;

    t76 = ((x305^(x306!=x307))!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x309 = INT8_MIN;
	int16_t x310 = 1;
	int16_t x311 = -565;
	uint32_t x312 = UINT32_MAX;
	volatile int32_t t77 = -777029;

    t77 = ((x309^(x310!=x311))!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x314 = -1;
	volatile int32_t x315 = -251881588;
	volatile int8_t x316 = 14;

    t78 = ((x313^(x314!=x315))!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x317 = INT64_MIN;
	int8_t x318 = INT8_MIN;
	volatile int16_t x319 = 16;

    t79 = ((x317^(x318!=x319))!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x323 = UINT16_MAX;
	static volatile uint16_t x324 = 10U;
	int32_t t80 = 16033;

    t80 = ((x321^(x322!=x323))!=x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x325 = UINT16_MAX;
	int8_t x326 = 0;
	int8_t x327 = -2;
	uint8_t x328 = 30U;
	volatile int32_t t81 = 0;

    t81 = ((x325^(x326!=x327))!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = UINT64_MAX;
	uint8_t x330 = UINT8_MAX;
	static int64_t x331 = INT64_MIN;
	int32_t x332 = -1;
	volatile int32_t t82 = -86628669;

    t82 = ((x329^(x330!=x331))!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = 124547LL;
	uint16_t x334 = UINT16_MAX;
	int8_t x335 = INT8_MAX;
	int16_t x336 = -467;

    t83 = ((x333^(x334!=x335))!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x337 = INT32_MIN;
	uint16_t x339 = 453U;
	uint64_t x340 = 193462020LLU;
	static volatile int32_t t84 = 934369;

    t84 = ((x337^(x338!=x339))!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = 150U;
	static int8_t x342 = -1;
	static int32_t x343 = -15392;
	uint8_t x344 = 5U;
	int32_t t85 = -136240607;

    t85 = ((x341^(x342!=x343))!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint64_t x345 = 2142886381192LLU;
	volatile int16_t x346 = -1;
	uint16_t x348 = UINT16_MAX;

    t86 = ((x345^(x346!=x347))!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = 43;
	static uint16_t x350 = 48U;
	int16_t x351 = INT16_MIN;
	volatile int32_t t87 = -247152787;

    t87 = ((x349^(x350!=x351))!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x353 = INT16_MAX;
	int32_t x355 = INT32_MIN;
	int16_t x356 = INT16_MIN;
	volatile int32_t t88 = 1;

    t88 = ((x353^(x354!=x355))!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = 8022U;
	static int32_t x358 = INT32_MIN;
	volatile int8_t x359 = -5;
	int64_t x360 = INT64_MIN;
	int32_t t89 = -394;

    t89 = ((x357^(x358!=x359))!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = 1U;
	int32_t x362 = -3482;
	int16_t x363 = -1;
	static volatile int32_t t90 = -873;

    t90 = ((x361^(x362!=x363))!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint64_t x365 = UINT64_MAX;
	int32_t x367 = -17;
	int64_t x368 = INT64_MAX;
	volatile int32_t t91 = -21087083;

    t91 = ((x365^(x366!=x367))!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x370 = -1;
	static volatile int32_t x371 = 3453328;
	int32_t x372 = -1;
	int32_t t92 = 130476409;

    t92 = ((x369^(x370!=x371))!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x374 = INT8_MAX;
	int16_t x376 = INT16_MAX;
	static volatile int32_t t93 = 0;

    t93 = ((x373^(x374!=x375))!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x378 = 40LLU;
	static volatile int8_t x379 = INT8_MIN;
	int8_t x380 = INT8_MIN;
	volatile int32_t t94 = -416;

    t94 = ((x377^(x378!=x379))!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = -1;
	int16_t x382 = INT16_MAX;
	volatile int16_t x383 = INT16_MIN;
	int32_t t95 = -91713;

    t95 = ((x381^(x382!=x383))!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MIN;
	int16_t x386 = INT16_MIN;
	int32_t x387 = -1;
	volatile uint32_t x388 = 21U;
	int32_t t96 = 22503553;

    t96 = ((x385^(x386!=x387))!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = 298503991U;
	static int64_t x390 = -1LL;
	static volatile int16_t x392 = INT16_MAX;
	volatile int32_t t97 = -100;

    t97 = ((x389^(x390!=x391))!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = -688LL;
	int32_t x394 = INT32_MAX;
	static int16_t x395 = -1;
	volatile int32_t t98 = -2328;

    t98 = ((x393^(x394!=x395))!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = UINT8_MAX;
	int64_t x398 = INT64_MAX;
	int32_t x399 = 13107;
	volatile uint64_t x400 = UINT64_MAX;
	int32_t t99 = -93677;

    t99 = ((x397^(x398!=x399))!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x402 = 5U;
	static int16_t x403 = -3;
	static int32_t x404 = -4390;
	int32_t t100 = 19;

    t100 = ((x401^(x402!=x403))!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x405 = -1;
	int32_t x406 = INT32_MAX;
	int64_t x407 = INT64_MAX;
	int32_t t101 = -25132;

    t101 = ((x405^(x406!=x407))!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x409 = 196134019997592883LL;
	int64_t x411 = INT64_MIN;
	static int64_t x412 = -30884LL;
	volatile int32_t t102 = -124;

    t102 = ((x409^(x410!=x411))!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = -50316571LL;
	int32_t x414 = 11432716;
	int8_t x415 = INT8_MIN;
	int16_t x416 = -1;
	int32_t t103 = -5024388;

    t103 = ((x413^(x414!=x415))!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x417 = -1541197579005788LL;
	uint64_t x418 = 1979803166860563LLU;
	int32_t x419 = INT32_MAX;
	volatile int64_t x420 = INT64_MAX;
	int32_t t104 = -25242280;

    t104 = ((x417^(x418!=x419))!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = 90082429U;
	int64_t x422 = -409406518LL;
	uint64_t x424 = 659737930952LLU;
	volatile int32_t t105 = -608;

    t105 = ((x421^(x422!=x423))!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x426 = -40;
	static int8_t x428 = 9;
	int32_t t106 = -111;

    t106 = ((x425^(x426!=x427))!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x430 = INT16_MIN;
	int64_t x431 = INT64_MIN;
	volatile int32_t t107 = -4621;

    t107 = ((x429^(x430!=x431))!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = -1;
	static volatile uint64_t x434 = 3891506491973777LLU;
	int16_t x435 = INT16_MAX;
	static int16_t x436 = 0;
	volatile int32_t t108 = 5;

    t108 = ((x433^(x434!=x435))!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MIN;
	int8_t x438 = INT8_MIN;
	int32_t x439 = -1;
	static int32_t x440 = INT32_MIN;

    t109 = ((x437^(x438!=x439))!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = 31U;
	uint64_t x442 = 87LLU;
	volatile int32_t t110 = 703;

    t110 = ((x441^(x442!=x443))!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x446 = INT16_MAX;
	int64_t x447 = INT64_MIN;
	volatile int16_t x448 = INT16_MIN;
	volatile int32_t t111 = -22;

    t111 = ((x445^(x446!=x447))!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x451 = -1;
	uint32_t x452 = UINT32_MAX;
	int32_t t112 = 84251;

    t112 = ((x449^(x450!=x451))!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x453 = -389LL;
	uint8_t x454 = UINT8_MAX;
	static int8_t x455 = INT8_MIN;
	int16_t x456 = 20;
	volatile int32_t t113 = 1043605742;

    t113 = ((x453^(x454!=x455))!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = UINT16_MAX;
	volatile uint32_t x458 = 860066046U;
	volatile uint8_t x459 = 1U;
	int64_t x460 = -1LL;
	volatile int32_t t114 = 148066427;

    t114 = ((x457^(x458!=x459))!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = 3LLU;
	uint8_t x462 = UINT8_MAX;
	static uint64_t x463 = 4273557855LLU;
	int32_t t115 = -16726505;

    t115 = ((x461^(x462!=x463))!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = -225;
	int32_t x466 = INT32_MAX;
	int8_t x468 = INT8_MAX;
	static volatile int32_t t116 = 1028277418;

    t116 = ((x465^(x466!=x467))!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x469 = -1;
	volatile int16_t x470 = INT16_MIN;
	uint32_t x471 = UINT32_MAX;
	uint32_t x472 = UINT32_MAX;
	int32_t t117 = 82;

    t117 = ((x469^(x470!=x471))!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -79;
	uint8_t x475 = 4U;
	volatile int8_t x476 = INT8_MIN;

    t118 = ((x473^(x474!=x475))!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x478 = 1;

    t119 = ((x477^(x478!=x479))!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = 15U;
	static uint16_t x482 = 3909U;
	int16_t x484 = INT16_MIN;
	int32_t t120 = -12;

    t120 = ((x481^(x482!=x483))!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = UINT16_MAX;
	uint32_t x486 = 150U;
	volatile int32_t t121 = 2;

    t121 = ((x485^(x486!=x487))!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x489 = INT16_MIN;
	volatile int16_t x491 = -1;
	volatile int32_t t122 = -9;

    t122 = ((x489^(x490!=x491))!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x493 = -1;
	static volatile int8_t x495 = INT8_MAX;
	static uint8_t x496 = 3U;

    t123 = ((x493^(x494!=x495))!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x499 = INT8_MAX;
	int32_t x500 = INT32_MAX;
	int32_t t124 = 677300;

    t124 = ((x497^(x498!=x499))!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MIN;
	int8_t x502 = INT8_MIN;
	int8_t x503 = -1;
	int64_t x504 = -37791037878954LL;

    t125 = ((x501^(x502!=x503))!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x505 = -1LL;
	uint64_t x506 = 25LLU;
	uint16_t x507 = UINT16_MAX;
	volatile uint16_t x508 = 5126U;

    t126 = ((x505^(x506!=x507))!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x510 = UINT32_MAX;
	int64_t x511 = -1705LL;
	uint16_t x512 = UINT16_MAX;
	volatile int32_t t127 = 160;

    t127 = ((x509^(x510!=x511))!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MAX;
	int16_t x514 = INT16_MAX;
	static uint32_t x515 = 682937164U;
	uint8_t x516 = UINT8_MAX;
	static volatile int32_t t128 = -251880;

    t128 = ((x513^(x514!=x515))!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MIN;
	uint64_t x519 = 7651555831LLU;
	uint8_t x520 = 59U;
	int32_t t129 = -1910351;

    t129 = ((x517^(x518!=x519))!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x521 = -4;
	volatile int32_t x524 = 2551314;
	int32_t t130 = -384800;

    t130 = ((x521^(x522!=x523))!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MIN;
	int64_t x526 = INT64_MIN;
	volatile int64_t x527 = 96851LL;
	static int8_t x528 = -1;
	volatile int32_t t131 = 1;

    t131 = ((x525^(x526!=x527))!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x530 = 65U;
	int32_t t132 = 8288;

    t132 = ((x529^(x530!=x531))!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MAX;
	volatile int32_t t133 = -2970;

    t133 = ((x533^(x534!=x535))!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	int64_t x538 = INT64_MIN;
	uint8_t x539 = 95U;
	int32_t t134 = 727043013;

    t134 = ((x537^(x538!=x539))!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x541 = INT64_MIN;
	static uint16_t x542 = 15651U;
	int64_t x543 = -1LL;
	volatile int32_t t135 = 0;

    t135 = ((x541^(x542!=x543))!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x545 = -28307LL;
	uint32_t x546 = UINT32_MAX;
	volatile int8_t x547 = 0;
	uint8_t x548 = UINT8_MAX;
	int32_t t136 = 0;

    t136 = ((x545^(x546!=x547))!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x549 = -74674897;
	volatile int8_t x551 = -1;
	static volatile int32_t t137 = -32;

    t137 = ((x549^(x550!=x551))!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MAX;
	uint8_t x554 = 3U;
	int32_t x555 = 1;
	static int16_t x556 = -1;
	static int32_t t138 = -1088;

    t138 = ((x553^(x554!=x555))!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x557 = 108U;
	volatile int16_t x558 = -1;
	int32_t x559 = -2045;
	int32_t x560 = INT32_MIN;
	int32_t t139 = 60829;

    t139 = ((x557^(x558!=x559))!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x562 = -1LL;
	int32_t x564 = INT32_MAX;
	int32_t t140 = 1563;

    t140 = ((x561^(x562!=x563))!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MIN;
	uint64_t x566 = 0LLU;
	uint16_t x567 = 251U;
	int32_t t141 = 740815;

    t141 = ((x565^(x566!=x567))!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MIN;
	uint64_t x570 = 0LLU;
	volatile int16_t x571 = INT16_MIN;
	uint16_t x572 = 0U;
	volatile int32_t t142 = 469409228;

    t142 = ((x569^(x570!=x571))!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x573 = UINT64_MAX;
	static int16_t x575 = INT16_MIN;
	int64_t x576 = 80400033122126116LL;
	int32_t t143 = 11276;

    t143 = ((x573^(x574!=x575))!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x577 = 61;
	static int32_t x578 = INT32_MAX;
	int16_t x579 = INT16_MIN;
	uint64_t x580 = 3209LLU;
	volatile int32_t t144 = 22572784;

    t144 = ((x577^(x578!=x579))!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = 8011U;
	int32_t x582 = 1517;
	int32_t t145 = 435;

    t145 = ((x581^(x582!=x583))!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = 67673703144LLU;
	static uint8_t x586 = 1U;
	volatile int8_t x587 = INT8_MIN;

    t146 = ((x585^(x586!=x587))!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x589 = -1;
	volatile int16_t x590 = INT16_MIN;
	int32_t x591 = INT32_MAX;
	static int64_t x592 = INT64_MAX;
	int32_t t147 = -4;

    t147 = ((x589^(x590!=x591))!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint16_t x593 = UINT16_MAX;
	int16_t x594 = INT16_MAX;
	uint16_t x595 = UINT16_MAX;
	volatile int32_t t148 = 12;

    t148 = ((x593^(x594!=x595))!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MAX;
	static uint64_t x598 = 26545951597086LLU;
	volatile int16_t x599 = -1;
	static volatile uint16_t x600 = UINT16_MAX;
	int32_t t149 = 279;

    t149 = ((x597^(x598!=x599))!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = 84LLU;
	int8_t x602 = INT8_MIN;
	volatile int32_t t150 = -54;

    t150 = ((x601^(x602!=x603))!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MAX;
	static int8_t x606 = -1;
	volatile int16_t x607 = INT16_MAX;
	static int32_t t151 = 798241445;

    t151 = ((x605^(x606!=x607))!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x609 = UINT32_MAX;
	static int8_t x610 = INT8_MIN;
	int64_t x611 = -836417817826547513LL;
	volatile int64_t x612 = -1LL;
	int32_t t152 = 68;

    t152 = ((x609^(x610!=x611))!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = -1LL;
	static volatile int8_t x614 = -1;
	int64_t x615 = 26528162529965387LL;
	int64_t x616 = INT64_MIN;
	static int32_t t153 = 246;

    t153 = ((x613^(x614!=x615))!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x619 = 0U;
	volatile uint16_t x620 = UINT16_MAX;
	int32_t t154 = 4;

    t154 = ((x617^(x618!=x619))!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = -40;
	int16_t x622 = -1;
	uint16_t x623 = UINT16_MAX;
	volatile int16_t x624 = -1;
	volatile int32_t t155 = 1193;

    t155 = ((x621^(x622!=x623))!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = -1;
	uint8_t x626 = UINT8_MAX;
	int16_t x627 = INT16_MIN;
	volatile int16_t x628 = -42;
	volatile int32_t t156 = -15776;

    t156 = ((x625^(x626!=x627))!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = INT16_MIN;
	int32_t x631 = -13334723;
	int8_t x632 = -1;
	int32_t t157 = -4563512;

    t157 = ((x629^(x630!=x631))!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x633 = 73LLU;
	uint64_t x634 = 56597LLU;
	uint32_t x635 = 269307U;
	uint32_t x636 = 443870473U;
	int32_t t158 = 3091;

    t158 = ((x633^(x634!=x635))!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x637 = UINT8_MAX;
	int64_t x638 = INT64_MIN;
	int32_t x639 = INT32_MIN;
	uint32_t x640 = UINT32_MAX;
	int32_t t159 = -12;

    t159 = ((x637^(x638!=x639))!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = 1;
	volatile uint64_t x642 = UINT64_MAX;
	static volatile uint32_t x643 = 15546U;
	static int64_t x644 = INT64_MAX;
	int32_t t160 = 1;

    t160 = ((x641^(x642!=x643))!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x645 = 965175399U;
	static int32_t x648 = -1;
	int32_t t161 = -62523;

    t161 = ((x645^(x646!=x647))!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x649 = UINT8_MAX;
	int64_t x650 = INT64_MAX;
	uint64_t x651 = 1725027LLU;
	int8_t x652 = -1;
	int32_t t162 = -5793703;

    t162 = ((x649^(x650!=x651))!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MAX;
	uint16_t x654 = 1U;
	static int16_t x655 = 2039;
	uint32_t x656 = UINT32_MAX;
	volatile int32_t t163 = 619366;

    t163 = ((x653^(x654!=x655))!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MIN;
	int16_t x658 = 69;
	int64_t x659 = INT64_MIN;
	uint16_t x660 = 6954U;

    t164 = ((x657^(x658!=x659))!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -894471169486463LL;
	int16_t x662 = INT16_MIN;
	int32_t x663 = -5034;
	volatile uint16_t x664 = UINT16_MAX;
	static volatile int32_t t165 = -1;

    t165 = ((x661^(x662!=x663))!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MIN;
	uint64_t x666 = 6654270LLU;
	volatile int16_t x667 = 15;
	static int8_t x668 = -42;
	volatile int32_t t166 = -3691683;

    t166 = ((x665^(x666!=x667))!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x670 = 726757924LLU;

    t167 = ((x669^(x670!=x671))!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MIN;
	int32_t x676 = -4906879;
	volatile int32_t t168 = 16;

    t168 = ((x673^(x674!=x675))!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = 1;
	int32_t x678 = 60822;
	volatile uint64_t x679 = 151951009108315256LLU;
	int16_t x680 = INT16_MIN;

    t169 = ((x677^(x678!=x679))!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x681 = 1820897U;
	uint32_t x683 = 144990985U;
	int32_t t170 = -1;

    t170 = ((x681^(x682!=x683))!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x686 = UINT32_MAX;
	volatile int8_t x687 = -10;
	int64_t x688 = INT64_MIN;
	int32_t t171 = -17;

    t171 = ((x685^(x686!=x687))!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x690 = -1;
	int16_t x691 = INT16_MIN;
	int8_t x692 = INT8_MIN;

    t172 = ((x689^(x690!=x691))!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x693 = INT32_MIN;
	int32_t x694 = -1;
	static int16_t x695 = INT16_MIN;
	int8_t x696 = INT8_MIN;
	volatile int32_t t173 = 1;

    t173 = ((x693^(x694!=x695))!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MIN;
	int64_t x698 = INT64_MAX;
	int8_t x699 = INT8_MIN;
	volatile uint16_t x700 = 976U;

    t174 = ((x697^(x698!=x699))!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x701 = 3293U;
	uint16_t x702 = 15U;
	volatile int64_t x703 = -1LL;
	int16_t x704 = INT16_MIN;

    t175 = ((x701^(x702!=x703))!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 0U;
	int64_t x706 = 112509LL;
	volatile int32_t x707 = INT32_MAX;
	volatile int32_t t176 = 1;

    t176 = ((x705^(x706!=x707))!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x710 = -33245717102345430LL;
	static uint64_t x711 = 5425664107LLU;
	int32_t x712 = INT32_MIN;

    t177 = ((x709^(x710!=x711))!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x714 = INT16_MIN;
	int64_t x715 = -1LL;
	volatile int64_t x716 = -94742895003053LL;
	int32_t t178 = -82;

    t178 = ((x713^(x714!=x715))!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int8_t x717 = -40;
	volatile uint64_t x719 = 632213063LLU;
	uint64_t x720 = 1408LLU;
	int32_t t179 = -179;

    t179 = ((x717^(x718!=x719))!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x721 = UINT64_MAX;
	volatile uint8_t x722 = UINT8_MAX;
	uint8_t x723 = 10U;
	volatile int16_t x724 = INT16_MIN;

    t180 = ((x721^(x722!=x723))!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x726 = UINT32_MAX;
	volatile int32_t x727 = INT32_MIN;
	volatile int16_t x728 = -1;
	volatile int32_t t181 = 1;

    t181 = ((x725^(x726!=x727))!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 37934133U;
	int8_t x730 = -13;
	volatile uint8_t x731 = 58U;
	uint64_t x732 = 3607LLU;
	volatile int32_t t182 = -359349517;

    t182 = ((x729^(x730!=x731))!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = -1;
	int32_t x734 = -45925;
	uint32_t x736 = 209U;
	int32_t t183 = 1828334;

    t183 = ((x733^(x734!=x735))!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = 1;
	int8_t x738 = 5;
	uint64_t x739 = 701862425276775LLU;
	uint32_t x740 = 434U;
	volatile int32_t t184 = -13;

    t184 = ((x737^(x738!=x739))!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x742 = 0;
	int64_t x743 = INT64_MIN;
	static volatile int32_t x744 = INT32_MIN;

    t185 = ((x741^(x742!=x743))!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x745 = -185LL;
	int64_t x747 = INT64_MIN;
	uint32_t x748 = 1384U;
	volatile int32_t t186 = -8;

    t186 = ((x745^(x746!=x747))!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = -1;
	int64_t x750 = 42399322218858LL;
	uint64_t x752 = 10544LLU;
	static int32_t t187 = -1745928;

    t187 = ((x749^(x750!=x751))!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = -1LL;
	int32_t x755 = INT32_MAX;
	int32_t t188 = 103971;

    t188 = ((x753^(x754!=x755))!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MAX;
	int8_t x758 = 0;
	int32_t x759 = 58940;
	uint64_t x760 = UINT64_MAX;
	int32_t t189 = 23000655;

    t189 = ((x757^(x758!=x759))!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x762 = UINT64_MAX;
	static int64_t x763 = INT64_MIN;
	int64_t x764 = INT64_MAX;

    t190 = ((x761^(x762!=x763))!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x766 = INT64_MAX;
	int16_t x767 = -1;
	int32_t t191 = 0;

    t191 = ((x765^(x766!=x767))!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = -1;
	uint16_t x770 = 8U;
	volatile uint64_t x771 = 1509612310LLU;
	int32_t t192 = -1042;

    t192 = ((x769^(x770!=x771))!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = 1650678552LLU;
	static uint32_t x774 = 341875801U;
	int8_t x775 = -1;
	static volatile int32_t t193 = -223473;

    t193 = ((x773^(x774!=x775))!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MIN;
	volatile uint32_t x779 = 851623569U;
	static uint8_t x780 = 17U;

    t194 = ((x777^(x778!=x779))!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = 982;
	uint32_t x783 = UINT32_MAX;

    t195 = ((x781^(x782!=x783))!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x785 = 4905U;
	int64_t x786 = 141038662452067750LL;
	int16_t x787 = INT16_MAX;
	int32_t t196 = -364844;

    t196 = ((x785^(x786!=x787))!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x789 = UINT64_MAX;
	uint64_t x790 = 621LLU;
	uint8_t x791 = UINT8_MAX;
	uint16_t x792 = 861U;
	volatile int32_t t197 = -5922588;

    t197 = ((x789^(x790!=x791))!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x793 = -5238LL;
	uint8_t x794 = 5U;
	volatile int8_t x795 = INT8_MIN;
	int16_t x796 = INT16_MIN;
	volatile int32_t t198 = -106;

    t198 = ((x793^(x794!=x795))!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x798 = 6U;
	uint64_t x799 = 6LLU;
	static volatile uint16_t x800 = 166U;
	volatile int32_t t199 = 14;

    t199 = ((x797^(x798!=x799))!=x800);

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


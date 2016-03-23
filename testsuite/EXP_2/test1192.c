
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

static int64_t x8 = INT64_MIN;
uint32_t x25 = UINT32_MAX;
int64_t x28 = -1LL;
int16_t x31 = 41;
int8_t x32 = -1;
volatile int64_t t6 = 625684427238893LL;
int64_t x41 = INT64_MAX;
static uint64_t x42 = 3678LLU;
int32_t x44 = -1;
static int64_t t7 = INT64_MAX;
volatile uint64_t x52 = 11LLU;
uint8_t x55 = 1U;
static volatile int64_t x56 = INT64_MAX;
int32_t x64 = -1;
volatile int32_t t12 = 2413;
volatile int32_t t13 = -292084776;
int8_t x72 = -1;
volatile uint32_t x81 = 476450U;
uint64_t x97 = UINT64_MAX;
uint8_t x99 = UINT8_MAX;
static int64_t x100 = INT64_MIN;
volatile int32_t x106 = -1;
uint8_t x107 = 1U;
int32_t x122 = -1309;
volatile int16_t x129 = -16367;
int32_t t28 = 1;
int64_t x141 = -1LL;
uint8_t x146 = 8U;
static uint32_t x148 = 29070U;
uint32_t t31 = 652U;
volatile int64_t t33 = -116LL;
uint8_t x165 = 23U;
volatile int32_t t35 = 2;
volatile uint64_t t36 = 249412813808326114LLU;
volatile uint32_t t39 = 4186514U;
uint8_t x193 = 2U;
static int32_t x228 = -1854;
static int64_t x238 = INT64_MIN;
int8_t x240 = INT8_MIN;
int8_t x263 = -1;
static volatile uint32_t x265 = UINT32_MAX;
int32_t x272 = 3;
volatile uint64_t t54 = 928134247LLU;
int8_t x276 = -1;
int32_t t55 = -43;
int8_t x279 = -1;
volatile int8_t x282 = INT8_MAX;
static int8_t x287 = INT8_MIN;
static int8_t x288 = INT8_MIN;
uint8_t x291 = 14U;
volatile int64_t x294 = INT64_MIN;
static int16_t x295 = -1;
static volatile uint32_t x296 = 6U;
volatile int16_t x303 = INT16_MAX;
static int8_t x304 = INT8_MIN;
int32_t t62 = 9;
int8_t x323 = -12;
uint32_t x325 = 6U;
static int64_t x326 = 315908742636LL;
int64_t x327 = INT64_MIN;
int64_t x330 = -1237096909846217905LL;
static volatile uint16_t x331 = UINT16_MAX;
static uint64_t x332 = 22453992LLU;
static uint64_t t69 = 4977966410281854151LLU;
static int32_t x333 = INT32_MAX;
int8_t x357 = INT8_MAX;
uint64_t t73 = 733LLU;
uint16_t x379 = 944U;
int16_t x381 = 0;
uint8_t x384 = UINT8_MAX;
uint32_t x385 = UINT32_MAX;
uint16_t x388 = 3U;
int64_t x389 = INT64_MAX;
int64_t x393 = 199LL;
static volatile int16_t x406 = -862;
int8_t x410 = INT8_MAX;
volatile uint8_t x411 = UINT8_MAX;
static uint32_t x433 = 65037U;
uint8_t x434 = 13U;
uint32_t t89 = 12206681U;
static int64_t x439 = INT64_MIN;
volatile uint64_t t90 = 1654285811618574LLU;
volatile uint8_t x454 = 1U;
int64_t x458 = -1LL;
static uint16_t x459 = 0U;
int32_t x460 = INT32_MIN;
uint8_t x461 = 1U;
int8_t x470 = INT8_MIN;
int16_t x473 = INT16_MIN;
int8_t x476 = -7;
static int64_t x477 = 10LL;
int64_t x482 = 229368160LL;
volatile int32_t x493 = -819;
static int8_t x494 = 2;
int8_t x498 = INT8_MAX;
int16_t x501 = INT16_MIN;
int64_t x502 = INT64_MAX;
uint16_t x509 = 4U;
volatile int8_t x510 = INT8_MIN;
static uint16_t x517 = 16U;
int32_t x519 = INT32_MIN;
uint16_t x522 = 2761U;
volatile int16_t x523 = 198;
static uint64_t x524 = 13014542931404478LLU;
uint32_t x531 = UINT32_MAX;
volatile uint64_t x545 = UINT64_MAX;
int64_t x554 = INT64_MIN;
int64_t x555 = INT64_MAX;
uint8_t x558 = 1U;
int16_t x564 = INT16_MIN;
volatile int16_t x565 = INT16_MIN;
volatile uint32_t x571 = 2U;
static uint16_t x572 = UINT16_MAX;
int64_t x575 = INT64_MIN;
uint16_t x603 = 5562U;
uint32_t x605 = UINT32_MAX;
static uint32_t x609 = 16271U;
int64_t x610 = INT64_MAX;
volatile uint32_t t127 = 865672U;
uint8_t x618 = 28U;
volatile int64_t x620 = -1LL;
uint32_t x630 = 98343U;
int16_t x636 = 111;
uint16_t x638 = 2125U;
static int8_t x646 = -7;
volatile int64_t t134 = 65826LL;
static volatile int64_t x656 = -23730653783LL;
int64_t x663 = INT64_MIN;
static int64_t x674 = INT64_MIN;
static uint16_t x676 = UINT16_MAX;
uint8_t x678 = 0U;
volatile int8_t x681 = -3;
static int8_t x682 = INT8_MIN;
int32_t t140 = 4131351;
static int32_t x691 = INT32_MAX;
static int32_t x693 = -1;
int32_t t143 = 32307597;
int64_t x703 = 922727645847698556LL;
uint8_t x705 = 0U;
uint64_t x709 = 4750LLU;
uint16_t x712 = 119U;
int32_t x717 = -211353;
int64_t x733 = -804917080288797294LL;
volatile int64_t t150 = -879632210819014846LL;
uint64_t x737 = UINT64_MAX;
uint64_t x740 = 483180LLU;
volatile int32_t t154 = 1;
int8_t x755 = INT8_MIN;
static volatile uint8_t x763 = 31U;
int32_t x764 = 554732;
int8_t x767 = INT8_MIN;
int32_t t157 = -1561459;
uint8_t x769 = 0U;
volatile uint8_t x790 = 0U;
static int16_t x811 = -1;
int64_t x825 = -1LL;
int8_t x828 = INT8_MIN;
int64_t t170 = 6LL;
static int64_t x830 = 766LL;
static uint8_t x840 = UINT8_MAX;
int8_t x841 = -1;
uint8_t x844 = 0U;
int8_t x845 = 5;
int64_t x862 = -1LL;
uint32_t x873 = 106U;
uint64_t x875 = 301436963775939152LLU;
int64_t x884 = -262386451LL;
int64_t t183 = 16829066492767LL;
uint8_t x887 = 6U;
static int64_t x889 = -86325704997LL;
uint8_t x894 = UINT8_MAX;
int64_t x895 = 483196081836LL;
static uint32_t x899 = UINT32_MAX;
int64_t x900 = 32LL;
int16_t x907 = INT16_MIN;
static volatile int64_t t189 = -16827582244044LL;
int8_t x909 = INT8_MIN;
static uint32_t x910 = UINT32_MAX;
static int16_t x913 = INT16_MAX;
int16_t x915 = INT16_MAX;
static int32_t x916 = -1;
volatile uint64_t t192 = 4LLU;
int16_t x923 = INT16_MIN;
static int32_t t193 = 10773;
int16_t x935 = INT16_MIN;
uint8_t x936 = 49U;
int8_t x937 = INT8_MIN;
int8_t x940 = -33;
uint32_t x945 = 6896888U;
static uint64_t x948 = UINT64_MAX;
uint64_t t198 = 770988595LLU;


void f0(void) {
    	volatile int16_t x1 = INT16_MIN;
	uint8_t x2 = UINT8_MAX;
	static int32_t x3 = -1;
	int16_t x4 = INT16_MAX;
	volatile int32_t t0 = -1226;

    t0 = ((x1-(x2!=x3))-x4);

    if (t0 != -65536) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	uint16_t x6 = UINT16_MAX;
	uint8_t x7 = 52U;
	static int64_t t1 = 7LL;

    t1 = ((x5-(x6!=x7))-x8);

    if (t1 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x13 = UINT8_MAX;
	uint16_t x14 = UINT16_MAX;
	uint32_t x15 = 73479U;
	volatile uint16_t x16 = 48U;
	volatile int32_t t2 = 28110933;

    t2 = ((x13-(x14!=x15))-x16);

    if (t2 != 206) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x17 = UINT32_MAX;
	int8_t x18 = INT8_MIN;
	static uint64_t x19 = UINT64_MAX;
	static int64_t x20 = -25LL;
	int64_t t3 = 115701220LL;

    t3 = ((x17-(x18!=x19))-x20);

    if (t3 != 4294967319LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x26 = -22688685324704022LL;
	static int32_t x27 = -17100119;
	static volatile int64_t t4 = -175320360841LL;

    t4 = ((x25-(x26!=x27))-x28);

    if (t4 != 4294967295LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x29 = UINT32_MAX;
	static int16_t x30 = -1;
	uint32_t t5 = UINT32_MAX;

    t5 = ((x29-(x30!=x31))-x32);

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x37 = INT64_MAX;
	int64_t x38 = -1LL;
	int32_t x39 = INT32_MIN;
	static uint16_t x40 = 2795U;

    t6 = ((x37-(x38!=x39))-x40);

    if (t6 != 9223372036854773011LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x43 = INT16_MIN;

    t7 = ((x41-(x42!=x43))-x44);

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x45 = INT16_MAX;
	static int32_t x46 = -1;
	static int16_t x47 = INT16_MIN;
	int32_t x48 = -1;
	volatile int32_t t8 = 0;

    t8 = ((x45-(x46!=x47))-x48);

    if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x49 = INT16_MIN;
	uint64_t x50 = 6433495LLU;
	volatile int8_t x51 = -1;
	volatile uint64_t t9 = 10813LLU;

    t9 = ((x49-(x50!=x51))-x52);

    if (t9 != 18446744073709518836LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x53 = UINT32_MAX;
	volatile int64_t x54 = INT64_MAX;
	int64_t t10 = 1374LL;

    t10 = ((x53-(x54!=x55))-x56);

    if (t10 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x57 = 5973066596917994345LLU;
	int32_t x58 = 19505792;
	uint64_t x59 = UINT64_MAX;
	int8_t x60 = INT8_MIN;
	static uint64_t t11 = 692402LLU;

    t11 = ((x57-(x58!=x59))-x60);

    if (t11 != 5973066596917994472LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x61 = 32U;
	int16_t x62 = -142;
	volatile int8_t x63 = -1;

    t12 = ((x61-(x62!=x63))-x64);

    if (t12 != 32) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x65 = INT8_MAX;
	int8_t x66 = 12;
	volatile int64_t x67 = 267LL;
	volatile int8_t x68 = INT8_MIN;

    t13 = ((x65-(x66!=x67))-x68);

    if (t13 != 254) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x69 = 5862U;
	int32_t x70 = INT32_MAX;
	uint32_t x71 = UINT32_MAX;
	volatile int32_t t14 = 45;

    t14 = ((x69-(x70!=x71))-x72);

    if (t14 != 5862) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x73 = 1U;
	int8_t x74 = 11;
	int32_t x75 = -807;
	int32_t x76 = INT32_MAX;
	int32_t t15 = -49958689;

    t15 = ((x73-(x74!=x75))-x76);

    if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x77 = -3377771LL;
	static uint16_t x78 = 122U;
	int32_t x79 = INT32_MIN;
	static volatile int16_t x80 = INT16_MIN;
	volatile int64_t t16 = 7585154611LL;

    t16 = ((x77-(x78!=x79))-x80);

    if (t16 != -3345004LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint16_t x82 = UINT16_MAX;
	static int32_t x83 = INT32_MIN;
	int8_t x84 = -7;
	volatile uint32_t t17 = 1462992505U;

    t17 = ((x81-(x82!=x83))-x84);

    if (t17 != 476456U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x85 = 72U;
	int32_t x86 = 94;
	int16_t x87 = INT16_MAX;
	static volatile uint64_t x88 = 7016081040507240LLU;
	uint64_t t18 = 27895299510305450LLU;

    t18 = ((x85-(x86!=x87))-x88);

    if (t18 != 18439727992669044447LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x89 = INT16_MAX;
	int32_t x90 = INT32_MAX;
	uint16_t x91 = 2893U;
	int64_t x92 = -15114LL;
	volatile int64_t t19 = 19452068146605027LL;

    t19 = ((x89-(x90!=x91))-x92);

    if (t19 != 47880LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x98 = INT64_MIN;
	static uint64_t t20 = 4LLU;

    t20 = ((x97-(x98!=x99))-x100);

    if (t20 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x101 = INT32_MAX;
	uint64_t x102 = UINT64_MAX;
	int16_t x103 = -3942;
	int64_t x104 = 54LL;
	volatile int64_t t21 = 0LL;

    t21 = ((x101-(x102!=x103))-x104);

    if (t21 != 2147483592LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x105 = UINT64_MAX;
	static uint64_t x108 = 1131438347352542LLU;
	static volatile uint64_t t22 = 227604646689LLU;

    t22 = ((x105-(x106!=x107))-x108);

    if (t22 != 18445612635362199072LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x109 = UINT16_MAX;
	int8_t x110 = INT8_MIN;
	int16_t x111 = INT16_MIN;
	static int16_t x112 = INT16_MIN;
	volatile int32_t t23 = -495;

    t23 = ((x109-(x110!=x111))-x112);

    if (t23 != 98302) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x113 = INT8_MIN;
	int32_t x114 = 185135221;
	int32_t x115 = -1;
	int8_t x116 = INT8_MAX;
	volatile int32_t t24 = -30910385;

    t24 = ((x113-(x114!=x115))-x116);

    if (t24 != -256) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x121 = -1;
	uint8_t x123 = 0U;
	uint16_t x124 = 2U;
	volatile int32_t t25 = -37;

    t25 = ((x121-(x122!=x123))-x124);

    if (t25 != -4) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x125 = 187U;
	int64_t x126 = -17317LL;
	static int32_t x127 = -13;
	static int8_t x128 = -1;
	volatile uint32_t t26 = 1691727374U;

    t26 = ((x125-(x126!=x127))-x128);

    if (t26 != 187U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x130 = INT64_MIN;
	volatile int16_t x131 = 184;
	int32_t x132 = 87216868;
	int32_t t27 = 212;

    t27 = ((x129-(x130!=x131))-x132);

    if (t27 != -87233236) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x133 = -1;
	volatile uint64_t x134 = 486694182934LLU;
	int16_t x135 = 0;
	int16_t x136 = -1;

    t28 = ((x133-(x134!=x135))-x136);

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x137 = 82101;
	static int16_t x138 = -1;
	static int64_t x139 = 69832999197306539LL;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t29 = 34391620;

    t29 = ((x137-(x138!=x139))-x140);

    if (t29 != 81845) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x142 = INT16_MIN;
	int64_t x143 = 13153LL;
	static uint64_t x144 = 135024764950LLU;
	uint64_t t30 = 9LLU;

    t30 = ((x141-(x142!=x143))-x144);

    if (t30 != 18446743938684786664LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x145 = INT8_MIN;
	uint64_t x147 = UINT64_MAX;

    t31 = ((x145-(x146!=x147))-x148);

    if (t31 != 4294938097U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x149 = 22681503U;
	static volatile uint64_t x150 = 3061480LLU;
	int32_t x151 = INT32_MIN;
	static int64_t x152 = -1000372467124534LL;
	static volatile int64_t t32 = 2313694LL;

    t32 = ((x149-(x150!=x151))-x152);

    if (t32 != 1000372489806036LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x153 = 3U;
	int64_t x154 = -1LL;
	static int32_t x155 = INT32_MIN;
	int64_t x156 = -1LL;

    t33 = ((x153-(x154!=x155))-x156);

    if (t33 != 3LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x157 = 2004U;
	int16_t x158 = INT16_MIN;
	volatile int8_t x159 = INT8_MAX;
	volatile int64_t x160 = 9491LL;
	static volatile int64_t t34 = 3LL;

    t34 = ((x157-(x158!=x159))-x160);

    if (t34 != -7488LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x166 = INT64_MIN;
	int64_t x167 = INT64_MAX;
	static int32_t x168 = 860278;

    t35 = ((x165-(x166!=x167))-x168);

    if (t35 != -860256) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x169 = 1584809110LLU;
	int16_t x170 = INT16_MIN;
	uint16_t x171 = 355U;
	volatile int32_t x172 = 1041123886;

    t36 = ((x169-(x170!=x171))-x172);

    if (t36 != 543685223LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x173 = UINT8_MAX;
	int16_t x174 = INT16_MIN;
	int32_t x175 = INT32_MAX;
	int16_t x176 = INT16_MIN;
	volatile int32_t t37 = 27033;

    t37 = ((x173-(x174!=x175))-x176);

    if (t37 != 33022) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x177 = INT32_MIN;
	int32_t x178 = -1;
	uint32_t x179 = UINT32_MAX;
	int8_t x180 = INT8_MIN;
	int32_t t38 = -18325;

    t38 = ((x177-(x178!=x179))-x180);

    if (t38 != -2147483520) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x189 = 3134832U;
	int32_t x190 = INT32_MAX;
	int16_t x191 = INT16_MAX;
	static int8_t x192 = -1;

    t39 = ((x189-(x190!=x191))-x192);

    if (t39 != 3134832U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x194 = 4U;
	uint64_t x195 = UINT64_MAX;
	static int8_t x196 = 1;
	int32_t t40 = -7;

    t40 = ((x193-(x194!=x195))-x196);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x197 = 21U;
	int64_t x198 = INT64_MIN;
	uint64_t x199 = UINT64_MAX;
	static uint16_t x200 = 18496U;
	static int32_t t41 = -62;

    t41 = ((x197-(x198!=x199))-x200);

    if (t41 != -18476) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x201 = -1;
	int8_t x202 = INT8_MAX;
	volatile int64_t x203 = INT64_MIN;
	static int16_t x204 = INT16_MAX;
	static volatile int32_t t42 = -3576;

    t42 = ((x201-(x202!=x203))-x204);

    if (t42 != -32769) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x217 = INT8_MIN;
	uint32_t x218 = 21990953U;
	int16_t x219 = INT16_MIN;
	int16_t x220 = INT16_MIN;
	int32_t t43 = -14;

    t43 = ((x217-(x218!=x219))-x220);

    if (t43 != 32639) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x225 = -1;
	int16_t x226 = -1;
	static uint8_t x227 = 44U;
	int32_t t44 = -22;

    t44 = ((x225-(x226!=x227))-x228);

    if (t44 != 1852) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x229 = INT64_MAX;
	volatile int16_t x230 = INT16_MAX;
	volatile int32_t x231 = INT32_MIN;
	int32_t x232 = -1;
	volatile int64_t t45 = INT64_MAX;

    t45 = ((x229-(x230!=x231))-x232);

    if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x233 = UINT8_MAX;
	static uint16_t x234 = 9U;
	int32_t x235 = -3;
	uint64_t x236 = 77572183LLU;
	uint64_t t46 = 17LLU;

    t46 = ((x233-(x234!=x235))-x236);

    if (t46 != 18446744073631979687LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int64_t x237 = -1LL;
	static uint8_t x239 = 1U;
	volatile int64_t t47 = -21096LL;

    t47 = ((x237-(x238!=x239))-x240);

    if (t47 != 126LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x241 = 75895U;
	int16_t x242 = INT16_MIN;
	uint64_t x243 = 1420924LLU;
	volatile uint16_t x244 = UINT16_MAX;
	uint32_t t48 = 17885306U;

    t48 = ((x241-(x242!=x243))-x244);

    if (t48 != 10359U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x245 = INT8_MIN;
	int64_t x246 = -1LL;
	volatile uint32_t x247 = 6238U;
	int32_t x248 = INT32_MIN;
	volatile int32_t t49 = 4;

    t49 = ((x245-(x246!=x247))-x248);

    if (t49 != 2147483519) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x253 = INT8_MIN;
	int32_t x254 = INT32_MIN;
	uint16_t x255 = 985U;
	static uint16_t x256 = 7U;
	int32_t t50 = 98;

    t50 = ((x253-(x254!=x255))-x256);

    if (t50 != -136) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x257 = 22796718LL;
	int8_t x258 = 0;
	static int16_t x259 = -123;
	int8_t x260 = -1;
	volatile int64_t t51 = 291LL;

    t51 = ((x257-(x258!=x259))-x260);

    if (t51 != 22796718LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x261 = 316712306519LLU;
	int16_t x262 = INT16_MIN;
	int64_t x264 = INT64_MAX;
	uint64_t t52 = 4177765681LLU;

    t52 = ((x261-(x262!=x263))-x264);

    if (t52 != 9223372353567082327LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x266 = UINT8_MAX;
	static int64_t x267 = INT64_MAX;
	uint64_t x268 = 4226852362837548LLU;
	volatile uint64_t t53 = 15160845LLU;

    t53 = ((x265-(x266!=x267))-x268);

    if (t53 != 18442517225641681362LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x269 = 499704LLU;
	volatile int64_t x270 = INT64_MIN;
	static volatile int64_t x271 = 0LL;

    t54 = ((x269-(x270!=x271))-x272);

    if (t54 != 499700LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x273 = INT16_MIN;
	uint64_t x274 = UINT64_MAX;
	uint16_t x275 = 0U;

    t55 = ((x273-(x274!=x275))-x276);

    if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x277 = -1;
	uint32_t x278 = UINT32_MAX;
	int8_t x280 = -22;
	volatile int32_t t56 = -14877;

    t56 = ((x277-(x278!=x279))-x280);

    if (t56 != 21) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x281 = INT16_MIN;
	uint32_t x283 = 440699274U;
	static int32_t x284 = INT32_MIN;
	int32_t t57 = 0;

    t57 = ((x281-(x282!=x283))-x284);

    if (t57 != 2147450879) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x285 = 31789099U;
	static volatile int64_t x286 = INT64_MIN;
	uint32_t t58 = 45946490U;

    t58 = ((x285-(x286!=x287))-x288);

    if (t58 != 31789226U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x289 = -1;
	uint32_t x290 = 1127632834U;
	volatile int64_t x292 = 293364LL;
	static int64_t t59 = 3LL;

    t59 = ((x289-(x290!=x291))-x292);

    if (t59 != -293366LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x293 = 26U;
	volatile uint32_t t60 = 60694U;

    t60 = ((x293-(x294!=x295))-x296);

    if (t60 != 19U) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x297 = -1LL;
	int32_t x298 = -1;
	static volatile uint8_t x299 = 27U;
	int16_t x300 = INT16_MIN;
	volatile int64_t t61 = 2728721065555911462LL;

    t61 = ((x297-(x298!=x299))-x300);

    if (t61 != 32766LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x301 = 7U;
	static int64_t x302 = INT64_MIN;

    t62 = ((x301-(x302!=x303))-x304);

    if (t62 != 134) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x305 = 8344185840LL;
	uint8_t x306 = UINT8_MAX;
	int64_t x307 = -1LL;
	volatile uint16_t x308 = 0U;
	int64_t t63 = 3592004692LL;

    t63 = ((x305-(x306!=x307))-x308);

    if (t63 != 8344185839LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x309 = INT8_MAX;
	uint8_t x310 = 4U;
	uint64_t x311 = 2608628LLU;
	volatile int64_t x312 = -386667LL;
	volatile int64_t t64 = 4531093LL;

    t64 = ((x309-(x310!=x311))-x312);

    if (t64 != 386793LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x313 = 38U;
	uint64_t x314 = 554628523399275556LLU;
	int8_t x315 = INT8_MAX;
	volatile uint8_t x316 = 14U;
	volatile int32_t t65 = 1;

    t65 = ((x313-(x314!=x315))-x316);

    if (t65 != 23) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x317 = 102U;
	static volatile uint32_t x318 = 0U;
	static int64_t x319 = -3674LL;
	static volatile int32_t x320 = INT32_MAX;
	int32_t t66 = 8173;

    t66 = ((x317-(x318!=x319))-x320);

    if (t66 != -2147483546) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x321 = -1;
	int16_t x322 = -1;
	int16_t x324 = INT16_MIN;
	volatile int32_t t67 = 151;

    t67 = ((x321-(x322!=x323))-x324);

    if (t67 != 32766) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x328 = -57;
	volatile uint32_t t68 = 4361871U;

    t68 = ((x325-(x326!=x327))-x328);

    if (t68 != 62U) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x329 = 627;

    t69 = ((x329-(x330!=x331))-x332);

    if (t69 != 18446744073687098250LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x334 = 38U;
	uint32_t x335 = 19743401U;
	volatile uint16_t x336 = 97U;
	volatile int32_t t70 = -304532836;

    t70 = ((x333-(x334!=x335))-x336);

    if (t70 != 2147483549) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x341 = 134012659479717045LLU;
	volatile uint16_t x342 = 157U;
	uint64_t x343 = 5165179LLU;
	static int8_t x344 = -6;
	volatile uint64_t t71 = 7101099936793LLU;

    t71 = ((x341-(x342!=x343))-x344);

    if (t71 != 134012659479717050LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x345 = -119;
	volatile int32_t x346 = 2;
	uint32_t x347 = 11582U;
	int16_t x348 = -318;
	static int32_t t72 = -40;

    t72 = ((x345-(x346!=x347))-x348);

    if (t72 != 198) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x358 = 774203LLU;
	int16_t x359 = INT16_MIN;
	uint64_t x360 = 29746440284LLU;

    t73 = ((x357-(x358!=x359))-x360);

    if (t73 != 18446744043963111458LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x361 = 280446U;
	int32_t x362 = INT32_MIN;
	static uint8_t x363 = UINT8_MAX;
	volatile int32_t x364 = INT32_MIN;
	volatile uint32_t t74 = 1527U;

    t74 = ((x361-(x362!=x363))-x364);

    if (t74 != 2147764093U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x365 = UINT32_MAX;
	uint32_t x366 = 8759829U;
	static volatile uint32_t x367 = UINT32_MAX;
	int8_t x368 = INT8_MIN;
	volatile uint32_t t75 = 12101U;

    t75 = ((x365-(x366!=x367))-x368);

    if (t75 != 126U) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x373 = -467814031156392LL;
	volatile int16_t x374 = -469;
	uint32_t x375 = 100403U;
	volatile uint16_t x376 = 7245U;
	int64_t t76 = -3406LL;

    t76 = ((x373-(x374!=x375))-x376);

    if (t76 != -467814031163638LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x377 = -1;
	int32_t x378 = -1;
	volatile int32_t x380 = -1;
	int32_t t77 = 15;

    t77 = ((x377-(x378!=x379))-x380);

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x382 = -122255602469785LL;
	int64_t x383 = 4278257969675123566LL;
	volatile int32_t t78 = -42186;

    t78 = ((x381-(x382!=x383))-x384);

    if (t78 != -256) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x386 = 8;
	int8_t x387 = -3;
	volatile uint32_t t79 = 690U;

    t79 = ((x385-(x386!=x387))-x388);

    if (t79 != 4294967291U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x390 = 10U;
	static int32_t x391 = INT32_MIN;
	int32_t x392 = INT32_MAX;
	int64_t t80 = 68487LL;

    t80 = ((x389-(x390!=x391))-x392);

    if (t80 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x394 = INT32_MIN;
	static volatile int8_t x395 = INT8_MAX;
	volatile int16_t x396 = INT16_MIN;
	int64_t t81 = -47910LL;

    t81 = ((x393-(x394!=x395))-x396);

    if (t81 != 32966LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x397 = -1437;
	volatile int16_t x398 = -1;
	volatile int32_t x399 = INT32_MAX;
	int32_t x400 = INT32_MIN;
	volatile int32_t t82 = -4634;

    t82 = ((x397-(x398!=x399))-x400);

    if (t82 != 2147482210) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x401 = 484U;
	int64_t x402 = INT64_MAX;
	static uint16_t x403 = 10372U;
	volatile int8_t x404 = INT8_MIN;
	int32_t t83 = -1;

    t83 = ((x401-(x402!=x403))-x404);

    if (t83 != 611) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x405 = -223883;
	uint8_t x407 = 0U;
	volatile int64_t x408 = INT64_MIN;
	int64_t t84 = 3524106740708963623LL;

    t84 = ((x405-(x406!=x407))-x408);

    if (t84 != 9223372036854551924LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x409 = 256182968;
	int16_t x412 = -1;
	volatile int32_t t85 = 2109034;

    t85 = ((x409-(x410!=x411))-x412);

    if (t85 != 256182968) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x421 = -1;
	uint8_t x422 = 17U;
	uint16_t x423 = 155U;
	int32_t x424 = 367444;
	volatile int32_t t86 = 14;

    t86 = ((x421-(x422!=x423))-x424);

    if (t86 != -367446) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x425 = 0U;
	static int8_t x426 = INT8_MIN;
	static int32_t x427 = -3856795;
	uint32_t x428 = 294285U;
	volatile uint32_t t87 = 316910U;

    t87 = ((x425-(x426!=x427))-x428);

    if (t87 != 4294673010U) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x429 = -1;
	uint8_t x430 = UINT8_MAX;
	int32_t x431 = INT32_MAX;
	int32_t x432 = -1;
	int32_t t88 = -2738;

    t88 = ((x429-(x430!=x431))-x432);

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x435 = -15984;
	int16_t x436 = INT16_MIN;

    t89 = ((x433-(x434!=x435))-x436);

    if (t89 != 97804U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x437 = 13754297LLU;
	uint16_t x438 = 3U;
	static int16_t x440 = INT16_MIN;

    t90 = ((x437-(x438!=x439))-x440);

    if (t90 != 13787064LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x441 = UINT32_MAX;
	uint64_t x442 = UINT64_MAX;
	int64_t x443 = -807202372LL;
	int16_t x444 = INT16_MAX;
	volatile uint32_t t91 = 877U;

    t91 = ((x441-(x442!=x443))-x444);

    if (t91 != 4294934527U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x449 = 2743;
	static int32_t x450 = INT32_MIN;
	volatile int64_t x451 = INT64_MAX;
	volatile int64_t x452 = INT64_MAX;
	static volatile int64_t t92 = -2LL;

    t92 = ((x449-(x450!=x451))-x452);

    if (t92 != -9223372036854773065LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x453 = INT8_MIN;
	int16_t x455 = 0;
	static uint8_t x456 = UINT8_MAX;
	volatile int32_t t93 = 34452;

    t93 = ((x453-(x454!=x455))-x456);

    if (t93 != -384) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x457 = INT8_MIN;
	volatile int32_t t94 = -76623013;

    t94 = ((x457-(x458!=x459))-x460);

    if (t94 != 2147483519) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x462 = INT8_MIN;
	int16_t x463 = -178;
	int8_t x464 = INT8_MAX;
	int32_t t95 = -123100116;

    t95 = ((x461-(x462!=x463))-x464);

    if (t95 != -127) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x469 = 4;
	int64_t x471 = INT64_MIN;
	static uint8_t x472 = 0U;
	volatile int32_t t96 = 11974;

    t96 = ((x469-(x470!=x471))-x472);

    if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x474 = 1U;
	static int64_t x475 = 1LL;
	volatile int32_t t97 = -317;

    t97 = ((x473-(x474!=x475))-x476);

    if (t97 != -32761) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x478 = 192;
	static uint32_t x479 = 1086U;
	uint8_t x480 = 27U;
	static volatile int64_t t98 = -779445636690LL;

    t98 = ((x477-(x478!=x479))-x480);

    if (t98 != -18LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x481 = -1LL;
	int32_t x483 = 171890;
	uint16_t x484 = 14U;
	int64_t t99 = 24LL;

    t99 = ((x481-(x482!=x483))-x484);

    if (t99 != -16LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x485 = 1U;
	uint64_t x486 = 57363261LLU;
	static int8_t x487 = INT8_MAX;
	uint16_t x488 = 5U;
	int32_t t100 = -71011313;

    t100 = ((x485-(x486!=x487))-x488);

    if (t100 != -5) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x489 = INT16_MIN;
	uint8_t x490 = 24U;
	int16_t x491 = INT16_MIN;
	volatile uint8_t x492 = UINT8_MAX;
	static int32_t t101 = 1;

    t101 = ((x489-(x490!=x491))-x492);

    if (t101 != -33024) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x495 = -1;
	int32_t x496 = -1;
	static int32_t t102 = -11;

    t102 = ((x493-(x494!=x495))-x496);

    if (t102 != -819) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x497 = -1;
	volatile int32_t x499 = INT32_MIN;
	int16_t x500 = INT16_MAX;
	int32_t t103 = 201542;

    t103 = ((x497-(x498!=x499))-x500);

    if (t103 != -32769) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x503 = -1;
	int32_t x504 = -123449;
	int32_t t104 = 17364;

    t104 = ((x501-(x502!=x503))-x504);

    if (t104 != 90680) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x505 = UINT64_MAX;
	int8_t x506 = INT8_MIN;
	uint8_t x507 = 28U;
	uint64_t x508 = UINT64_MAX;
	volatile uint64_t t105 = UINT64_MAX;

    t105 = ((x505-(x506!=x507))-x508);

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x511 = UINT32_MAX;
	static int32_t x512 = 619451449;
	volatile int32_t t106 = -715666;

    t106 = ((x509-(x510!=x511))-x512);

    if (t106 != -619451446) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x513 = -1;
	static uint16_t x514 = 25918U;
	int16_t x515 = -1;
	int8_t x516 = INT8_MAX;
	volatile int32_t t107 = 4;

    t107 = ((x513-(x514!=x515))-x516);

    if (t107 != -129) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x518 = 86U;
	int16_t x520 = INT16_MIN;
	volatile int32_t t108 = -2;

    t108 = ((x517-(x518!=x519))-x520);

    if (t108 != 32783) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int8_t x521 = 53;
	volatile uint64_t t109 = 144LLU;

    t109 = ((x521-(x522!=x523))-x524);

    if (t109 != 18433729530778147190LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x525 = UINT16_MAX;
	volatile int8_t x526 = INT8_MIN;
	int8_t x527 = -1;
	static volatile int64_t x528 = -89713919LL;
	int64_t t110 = 57LL;

    t110 = ((x525-(x526!=x527))-x528);

    if (t110 != 89779453LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x529 = 233U;
	uint16_t x530 = 3U;
	int16_t x532 = -1874;
	uint32_t t111 = 3U;

    t111 = ((x529-(x530!=x531))-x532);

    if (t111 != 2106U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x533 = 56U;
	int64_t x534 = 110LL;
	static volatile int64_t x535 = -1LL;
	static int8_t x536 = 11;
	static volatile int32_t t112 = -14;

    t112 = ((x533-(x534!=x535))-x536);

    if (t112 != 44) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x546 = 3;
	uint8_t x547 = 0U;
	uint32_t x548 = 15250U;
	uint64_t t113 = 123679927173959199LLU;

    t113 = ((x545-(x546!=x547))-x548);

    if (t113 != 18446744073709536364LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x549 = INT8_MIN;
	volatile uint16_t x550 = 20775U;
	int64_t x551 = -1LL;
	static int16_t x552 = -1511;
	volatile int32_t t114 = -3;

    t114 = ((x549-(x550!=x551))-x552);

    if (t114 != 1382) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x553 = 219U;
	int16_t x556 = -1;
	volatile int32_t t115 = -19052;

    t115 = ((x553-(x554!=x555))-x556);

    if (t115 != 219) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x557 = -50725973477109084LL;
	int16_t x559 = 3;
	int64_t x560 = INT64_MIN;
	volatile int64_t t116 = 22441LL;

    t116 = ((x557-(x558!=x559))-x560);

    if (t116 != 9172646063377666723LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x561 = INT8_MIN;
	int8_t x562 = INT8_MAX;
	static int8_t x563 = INT8_MAX;
	static volatile int32_t t117 = -913044;

    t117 = ((x561-(x562!=x563))-x564);

    if (t117 != 32640) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x566 = INT8_MIN;
	uint32_t x567 = UINT32_MAX;
	static int32_t x568 = INT32_MIN;
	static int32_t t118 = -3843600;

    t118 = ((x565-(x566!=x567))-x568);

    if (t118 != 2147450879) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x569 = -8418628;
	uint32_t x570 = 9016U;
	volatile int32_t t119 = 288;

    t119 = ((x569-(x570!=x571))-x572);

    if (t119 != -8484164) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x573 = INT16_MIN;
	volatile int64_t x574 = 11LL;
	static int32_t x576 = INT32_MIN;
	volatile int32_t t120 = -3003;

    t120 = ((x573-(x574!=x575))-x576);

    if (t120 != 2147450879) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x581 = 78110813U;
	uint8_t x582 = 0U;
	int32_t x583 = -1393376;
	int32_t x584 = -1;
	uint32_t t121 = 1068U;

    t121 = ((x581-(x582!=x583))-x584);

    if (t121 != 78110813U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x589 = 49LLU;
	volatile int16_t x590 = INT16_MIN;
	static uint64_t x591 = 64624909LLU;
	static int64_t x592 = -1424LL;
	uint64_t t122 = 108LLU;

    t122 = ((x589-(x590!=x591))-x592);

    if (t122 != 1472LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x593 = 493LL;
	volatile uint64_t x594 = 37198378131715LLU;
	uint32_t x595 = 997U;
	int32_t x596 = 92985;
	volatile int64_t t123 = 299391367LL;

    t123 = ((x593-(x594!=x595))-x596);

    if (t123 != -92493LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x597 = 30833U;
	static uint32_t x598 = 2811U;
	int32_t x599 = INT32_MIN;
	int16_t x600 = INT16_MIN;
	volatile int32_t t124 = 7;

    t124 = ((x597-(x598!=x599))-x600);

    if (t124 != 63600) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x601 = UINT16_MAX;
	int64_t x602 = 3707358089LL;
	int8_t x604 = INT8_MIN;
	volatile int32_t t125 = 16453206;

    t125 = ((x601-(x602!=x603))-x604);

    if (t125 != 65662) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x606 = INT32_MAX;
	uint32_t x607 = 21406U;
	int16_t x608 = INT16_MAX;
	uint32_t t126 = 1249727U;

    t126 = ((x605-(x606!=x607))-x608);

    if (t126 != 4294934527U) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x611 = INT32_MAX;
	uint16_t x612 = 2407U;

    t127 = ((x609-(x610!=x611))-x612);

    if (t127 != 13863U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x613 = INT16_MIN;
	int32_t x614 = 4884;
	static int8_t x615 = INT8_MIN;
	uint32_t x616 = 1270210U;
	volatile uint32_t t128 = 54U;

    t128 = ((x613-(x614!=x615))-x616);

    if (t128 != 4293664317U) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint64_t x617 = UINT64_MAX;
	uint32_t x619 = 5598U;
	volatile uint64_t t129 = UINT64_MAX;

    t129 = ((x617-(x618!=x619))-x620);

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x621 = 23U;
	int32_t x622 = INT32_MIN;
	static uint64_t x623 = 257314663110717228LLU;
	int64_t x624 = -12285019649LL;
	volatile int64_t t130 = -43420LL;

    t130 = ((x621-(x622!=x623))-x624);

    if (t130 != 12285019671LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x629 = 1;
	uint8_t x631 = 6U;
	int32_t x632 = -1;
	int32_t t131 = 15459;

    t131 = ((x629-(x630!=x631))-x632);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x633 = UINT16_MAX;
	int16_t x634 = INT16_MIN;
	int16_t x635 = INT16_MIN;
	static int32_t t132 = -94857516;

    t132 = ((x633-(x634!=x635))-x636);

    if (t132 != 65424) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x637 = 117U;
	static volatile uint8_t x639 = 58U;
	uint8_t x640 = UINT8_MAX;
	int32_t t133 = 6;

    t133 = ((x637-(x638!=x639))-x640);

    if (t133 != -139) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x645 = INT64_MAX;
	volatile uint8_t x647 = UINT8_MAX;
	uint32_t x648 = UINT32_MAX;

    t134 = ((x645-(x646!=x647))-x648);

    if (t134 != 9223372032559808511LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x653 = 50020LL;
	static int8_t x654 = -47;
	int64_t x655 = 311659LL;
	volatile int64_t t135 = -468961789LL;

    t135 = ((x653-(x654!=x655))-x656);

    if (t135 != 23730703802LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int64_t x657 = -4934523974LL;
	int64_t x658 = 236792348LL;
	int16_t x659 = INT16_MIN;
	int32_t x660 = -1;
	volatile int64_t t136 = 1317391041071266889LL;

    t136 = ((x657-(x658!=x659))-x660);

    if (t136 != -4934523974LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x661 = -551;
	static int32_t x662 = -566233433;
	volatile int64_t x664 = -1LL;
	volatile int64_t t137 = -119996264435923LL;

    t137 = ((x661-(x662!=x663))-x664);

    if (t137 != -551LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x673 = UINT32_MAX;
	static int64_t x675 = INT64_MIN;
	uint32_t t138 = 0U;

    t138 = ((x673-(x674!=x675))-x676);

    if (t138 != 4294901760U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x677 = 142945664723046656LLU;
	int64_t x679 = INT64_MAX;
	int32_t x680 = INT32_MAX;
	volatile uint64_t t139 = 133750444065010LLU;

    t139 = ((x677-(x678!=x679))-x680);

    if (t139 != 142945662575563008LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x683 = -1;
	volatile int8_t x684 = INT8_MIN;

    t140 = ((x681-(x682!=x683))-x684);

    if (t140 != 124) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x689 = -236;
	int8_t x690 = INT8_MIN;
	static int16_t x692 = INT16_MIN;
	int32_t t141 = -25578851;

    t141 = ((x689-(x690!=x691))-x692);

    if (t141 != 32531) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x694 = UINT64_MAX;
	int8_t x695 = 0;
	int32_t x696 = INT32_MIN;
	volatile int32_t t142 = 845259;

    t142 = ((x693-(x694!=x695))-x696);

    if (t142 != 2147483646) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x697 = -205894;
	static int8_t x698 = INT8_MIN;
	int32_t x699 = INT32_MAX;
	uint8_t x700 = UINT8_MAX;

    t143 = ((x697-(x698!=x699))-x700);

    if (t143 != -206150) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x701 = UINT8_MAX;
	uint16_t x702 = 1669U;
	volatile uint64_t x704 = UINT64_MAX;
	static volatile uint64_t t144 = 1003876975703277LLU;

    t144 = ((x701-(x702!=x703))-x704);

    if (t144 != 255LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x706 = INT32_MIN;
	uint8_t x707 = 54U;
	int16_t x708 = -1;
	int32_t t145 = -66258;

    t145 = ((x705-(x706!=x707))-x708);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x710 = INT8_MIN;
	int64_t x711 = 14430101LL;
	static volatile uint64_t t146 = 33085557195729189LLU;

    t146 = ((x709-(x710!=x711))-x712);

    if (t146 != 4630LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x718 = 669201;
	volatile uint32_t x719 = 31U;
	volatile uint16_t x720 = 15583U;
	int32_t t147 = -4536105;

    t147 = ((x717-(x718!=x719))-x720);

    if (t147 != -226937) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x721 = UINT32_MAX;
	uint16_t x722 = 0U;
	int16_t x723 = 1;
	volatile int32_t x724 = INT32_MIN;
	uint32_t t148 = 187145U;

    t148 = ((x721-(x722!=x723))-x724);

    if (t148 != 2147483646U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x729 = UINT16_MAX;
	static uint32_t x730 = 3694U;
	static int8_t x731 = INT8_MIN;
	int64_t x732 = INT64_MAX;
	volatile int64_t t149 = 1726986446LL;

    t149 = ((x729-(x730!=x731))-x732);

    if (t149 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x734 = INT16_MIN;
	volatile int8_t x735 = INT8_MIN;
	volatile int8_t x736 = INT8_MAX;

    t150 = ((x733-(x734!=x735))-x736);

    if (t150 != -804917080288797422LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x738 = 3460896U;
	uint32_t x739 = 26686U;
	uint64_t t151 = 5505472483530206960LLU;

    t151 = ((x737-(x738!=x739))-x740);

    if (t151 != 18446744073709068434LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x741 = UINT32_MAX;
	int32_t x742 = -58;
	volatile uint32_t x743 = 108674844U;
	uint8_t x744 = 0U;
	uint32_t t152 = 3U;

    t152 = ((x741-(x742!=x743))-x744);

    if (t152 != 4294967294U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x745 = -1;
	uint8_t x746 = 0U;
	int32_t x747 = -296103;
	uint16_t x748 = UINT16_MAX;
	static volatile int32_t t153 = -200371;

    t153 = ((x745-(x746!=x747))-x748);

    if (t153 != -65537) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x749 = INT16_MIN;
	int16_t x750 = -1;
	static int8_t x751 = INT8_MAX;
	int8_t x752 = INT8_MIN;

    t154 = ((x749-(x750!=x751))-x752);

    if (t154 != -32641) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x753 = 2557262LLU;
	uint32_t x754 = 0U;
	volatile int8_t x756 = 0;
	volatile uint64_t t155 = 14054973250LLU;

    t155 = ((x753-(x754!=x755))-x756);

    if (t155 != 2557261LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x761 = 1;
	static uint16_t x762 = 776U;
	volatile int32_t t156 = 1627636;

    t156 = ((x761-(x762!=x763))-x764);

    if (t156 != -554732) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x765 = INT8_MIN;
	uint16_t x766 = 51U;
	int16_t x768 = -2;

    t157 = ((x765-(x766!=x767))-x768);

    if (t157 != -127) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x770 = 1U;
	uint16_t x771 = UINT16_MAX;
	uint32_t x772 = 11073U;
	volatile uint32_t t158 = 10770337U;

    t158 = ((x769-(x770!=x771))-x772);

    if (t158 != 4294956222U) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x773 = -419424;
	uint16_t x774 = UINT16_MAX;
	int32_t x775 = -1;
	uint64_t x776 = 20LLU;
	uint64_t t159 = 289550420962374LLU;

    t159 = ((x773-(x774!=x775))-x776);

    if (t159 != 18446744073709132171LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int8_t x777 = INT8_MIN;
	int32_t x778 = 0;
	int16_t x779 = -11;
	static int8_t x780 = 28;
	volatile int32_t t160 = -805004;

    t160 = ((x777-(x778!=x779))-x780);

    if (t160 != -157) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x781 = 24195344785011LLU;
	static int8_t x782 = INT8_MAX;
	int8_t x783 = INT8_MIN;
	uint64_t x784 = 96307849640988199LLU;
	volatile uint64_t t161 = 26933039088017635LLU;

    t161 = ((x781-(x782!=x783))-x784);

    if (t161 != 18350460419413348427LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x785 = INT16_MIN;
	uint64_t x786 = 691028121LLU;
	uint16_t x787 = UINT16_MAX;
	uint8_t x788 = 62U;
	static volatile int32_t t162 = -186;

    t162 = ((x785-(x786!=x787))-x788);

    if (t162 != -32831) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x789 = -1;
	volatile int16_t x791 = -1;
	int32_t x792 = -1;
	int32_t t163 = 114;

    t163 = ((x789-(x790!=x791))-x792);

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x801 = INT16_MIN;
	int64_t x802 = INT64_MIN;
	static int32_t x803 = INT32_MAX;
	static int8_t x804 = -1;
	int32_t t164 = -62978562;

    t164 = ((x801-(x802!=x803))-x804);

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x805 = 10U;
	int8_t x806 = -23;
	int8_t x807 = -1;
	int8_t x808 = INT8_MIN;
	uint32_t t165 = 18U;

    t165 = ((x805-(x806!=x807))-x808);

    if (t165 != 137U) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x809 = INT16_MAX;
	int32_t x810 = -31027;
	static volatile uint64_t x812 = UINT64_MAX;
	uint64_t t166 = 3LLU;

    t166 = ((x809-(x810!=x811))-x812);

    if (t166 != 32767LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x813 = 493686U;
	int16_t x814 = -13;
	volatile uint32_t x815 = 25339598U;
	int32_t x816 = -1;
	uint32_t t167 = 4173263U;

    t167 = ((x813-(x814!=x815))-x816);

    if (t167 != 493686U) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x817 = -1LL;
	uint32_t x818 = UINT32_MAX;
	uint32_t x819 = 1703523993U;
	int64_t x820 = 1493LL;
	int64_t t168 = -230272981206LL;

    t168 = ((x817-(x818!=x819))-x820);

    if (t168 != -1495LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x821 = INT16_MAX;
	int64_t x822 = INT64_MIN;
	int64_t x823 = 1806473843LL;
	volatile int64_t x824 = INT64_MAX;
	int64_t t169 = 9185516625928486LL;

    t169 = ((x821-(x822!=x823))-x824);

    if (t169 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x826 = 1538U;
	uint16_t x827 = UINT16_MAX;

    t170 = ((x825-(x826!=x827))-x828);

    if (t170 != 126LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x829 = 65U;
	static uint64_t x831 = UINT64_MAX;
	static uint64_t x832 = 3888268955LLU;
	static uint64_t t171 = 74515947747644933LLU;

    t171 = ((x829-(x830!=x831))-x832);

    if (t171 != 18446744069821282725LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x833 = INT8_MIN;
	static int8_t x834 = -1;
	uint8_t x835 = UINT8_MAX;
	int8_t x836 = 0;
	volatile int32_t t172 = -48685;

    t172 = ((x833-(x834!=x835))-x836);

    if (t172 != -129) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x837 = -7596;
	volatile int16_t x838 = INT16_MIN;
	volatile uint8_t x839 = 1U;
	volatile int32_t t173 = 442293878;

    t173 = ((x837-(x838!=x839))-x840);

    if (t173 != -7852) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x842 = INT64_MIN;
	uint8_t x843 = 7U;
	int32_t t174 = -13026;

    t174 = ((x841-(x842!=x843))-x844);

    if (t174 != -2) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x846 = UINT64_MAX;
	int64_t x847 = INT64_MAX;
	uint32_t x848 = 719576U;
	uint32_t t175 = 11984867U;

    t175 = ((x845-(x846!=x847))-x848);

    if (t175 != 4294247724U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x849 = 2971267453870896330LLU;
	int64_t x850 = INT64_MIN;
	int64_t x851 = INT64_MAX;
	uint8_t x852 = 113U;
	static uint64_t t176 = 1LLU;

    t176 = ((x849-(x850!=x851))-x852);

    if (t176 != 2971267453870896216LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x853 = 121U;
	static int16_t x854 = INT16_MIN;
	static int64_t x855 = -2377108033263588964LL;
	static uint64_t x856 = 26268683520LLU;
	uint64_t t177 = 48LLU;

    t177 = ((x853-(x854!=x855))-x856);

    if (t177 != 18446744047440868216LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x857 = -4064678;
	int32_t x858 = -9358;
	volatile int32_t x859 = -6002258;
	int64_t x860 = 3355879LL;
	int64_t t178 = 1762901984886066504LL;

    t178 = ((x857-(x858!=x859))-x860);

    if (t178 != -7420558LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x861 = 212438LLU;
	int32_t x863 = 51656;
	uint64_t x864 = 486156834LLU;
	uint64_t t179 = 216314819499919992LLU;

    t179 = ((x861-(x862!=x863))-x864);

    if (t179 != 18446744073223607219LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x865 = 26688878;
	static int32_t x866 = INT32_MIN;
	uint64_t x867 = 9879112277628476LLU;
	static volatile int8_t x868 = -3;
	int32_t t180 = -66;

    t180 = ((x865-(x866!=x867))-x868);

    if (t180 != 26688880) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x869 = INT8_MIN;
	static int16_t x870 = 7;
	volatile uint32_t x871 = 178U;
	static volatile uint8_t x872 = UINT8_MAX;
	static int32_t t181 = -3865271;

    t181 = ((x869-(x870!=x871))-x872);

    if (t181 != -384) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x874 = UINT8_MAX;
	volatile uint16_t x876 = 18375U;
	static volatile uint32_t t182 = 4U;

    t182 = ((x873-(x874!=x875))-x876);

    if (t182 != 4294949026U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x881 = INT16_MAX;
	int32_t x882 = INT32_MAX;
	volatile int32_t x883 = -25;

    t183 = ((x881-(x882!=x883))-x884);

    if (t183 != 262419217LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x885 = -25;
	int64_t x886 = INT64_MAX;
	int64_t x888 = INT64_MIN;
	volatile int64_t t184 = 2221089232139353LL;

    t184 = ((x885-(x886!=x887))-x888);

    if (t184 != 9223372036854775782LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x890 = 13U;
	int32_t x891 = -1;
	static uint8_t x892 = 0U;
	static int64_t t185 = 429283868LL;

    t185 = ((x889-(x890!=x891))-x892);

    if (t185 != -86325704998LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x893 = 12;
	int16_t x896 = -1;
	static volatile int32_t t186 = 1892;

    t186 = ((x893-(x894!=x895))-x896);

    if (t186 != 12) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x897 = -1;
	int32_t x898 = -31101;
	static volatile int64_t t187 = 1LL;

    t187 = ((x897-(x898!=x899))-x900);

    if (t187 != -34LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x901 = -6679222;
	static int8_t x902 = 2;
	int32_t x903 = 11;
	volatile uint64_t x904 = 3413523359LLU;
	uint64_t t188 = 35813484533985LLU;

    t188 = ((x901-(x902!=x903))-x904);

    if (t188 != 18446744070289349034LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x905 = 744996LL;
	static uint64_t x906 = 164LLU;
	static uint32_t x908 = 1U;

    t189 = ((x905-(x906!=x907))-x908);

    if (t189 != 744994LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x911 = INT16_MIN;
	static int64_t x912 = -1LL;
	int64_t t190 = -1835672527424LL;

    t190 = ((x909-(x910!=x911))-x912);

    if (t190 != -128LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x914 = -1;
	static int32_t t191 = 1;

    t191 = ((x913-(x914!=x915))-x916);

    if (t191 != 32767) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x917 = 10U;
	int32_t x918 = -1;
	static uint16_t x919 = 6U;
	uint64_t x920 = 509LLU;

    t192 = ((x917-(x918!=x919))-x920);

    if (t192 != 18446744073709551116LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x921 = 76U;
	int32_t x922 = -1;
	static int8_t x924 = INT8_MIN;

    t193 = ((x921-(x922!=x923))-x924);

    if (t193 != 203) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x929 = 0;
	int32_t x930 = INT32_MIN;
	int64_t x931 = INT64_MIN;
	int16_t x932 = -1;
	static int32_t t194 = 2231971;

    t194 = ((x929-(x930!=x931))-x932);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int32_t x933 = INT32_MAX;
	int64_t x934 = INT64_MIN;
	static int32_t t195 = 1340;

    t195 = ((x933-(x934!=x935))-x936);

    if (t195 != 2147483597) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x938 = -7;
	volatile int32_t x939 = INT32_MIN;
	static volatile int32_t t196 = -3633;

    t196 = ((x937-(x938!=x939))-x940);

    if (t196 != -96) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x941 = 1929345376479082182LLU;
	int8_t x942 = INT8_MAX;
	uint64_t x943 = 1452260643328906LLU;
	int8_t x944 = 2;
	volatile uint64_t t197 = 6LLU;

    t197 = ((x941-(x942!=x943))-x944);

    if (t197 != 1929345376479082179LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x946 = INT8_MAX;
	int8_t x947 = INT8_MAX;

    t198 = ((x945-(x946!=x947))-x948);

    if (t198 != 6896889LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x949 = INT32_MAX;
	volatile int16_t x950 = 1867;
	volatile uint16_t x951 = UINT16_MAX;
	uint8_t x952 = UINT8_MAX;
	static volatile int32_t t199 = 50366;

    t199 = ((x949-(x950!=x951))-x952);

    if (t199 != 2147483391) { NG(); } else { ; }
	
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



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

static volatile uint32_t x3 = 4720U;
static int64_t x7 = -1LL;
volatile uint32_t x14 = UINT32_MAX;
int64_t x15 = -1LL;
uint16_t x16 = UINT16_MAX;
static uint64_t x18 = 7870587679537214LLU;
static volatile int16_t x20 = INT16_MIN;
int32_t x32 = 204;
volatile int32_t t7 = -336416;
static volatile int32_t t8 = -40242326;
uint32_t x37 = UINT32_MAX;
volatile int16_t x39 = INT16_MAX;
static volatile uint8_t x43 = 89U;
int16_t x45 = INT16_MIN;
int16_t x72 = INT16_MAX;
static int64_t x77 = 1958426683914LL;
volatile uint8_t x78 = 37U;
uint8_t x80 = 7U;
volatile int16_t x82 = -1;
static volatile uint16_t x88 = 713U;
int8_t x90 = -1;
int16_t x97 = INT16_MIN;
volatile int32_t t24 = 54;
uint64_t x102 = UINT64_MAX;
int32_t x104 = INT32_MAX;
volatile int64_t x109 = INT64_MIN;
int32_t x117 = INT32_MAX;
int64_t t30 = -3472047531839383696LL;
volatile int32_t x139 = -4491625;
int64_t t34 = -209656443LL;
int32_t x149 = INT32_MIN;
int16_t x154 = -1;
uint8_t x157 = UINT8_MAX;
uint64_t x159 = 6355962015150LLU;
static volatile int8_t x160 = INT8_MAX;
int32_t x166 = INT32_MIN;
static uint16_t x167 = 1355U;
static volatile int32_t x170 = INT32_MIN;
volatile uint8_t x171 = 126U;
int64_t x174 = -3LL;
static int32_t t43 = 116251100;
int64_t x183 = 71090LL;
int64_t x184 = -1LL;
int64_t t45 = -88869LL;
static int16_t x187 = 8855;
volatile int32_t t46 = 778981;
int32_t x202 = INT32_MIN;
static int32_t t50 = -7699;
static uint64_t x212 = 4599184935615043646LLU;
volatile int32_t t55 = -5258832;
int64_t x226 = -1159441682LL;
volatile uint64_t x229 = 1373307557989840LLU;
static uint32_t x231 = 752285U;
volatile int16_t x239 = INT16_MAX;
volatile uint64_t x240 = 5650LLU;
volatile int32_t t60 = 211208045;
volatile uint32_t x249 = 764572U;
volatile int8_t x250 = -1;
volatile uint64_t t64 = 1432418931423769LLU;
int8_t x261 = -1;
int32_t x281 = -104176;
uint16_t x288 = UINT16_MAX;
volatile uint16_t x293 = UINT16_MAX;
uint64_t x301 = 118655915LLU;
int64_t x303 = -14317622528244LL;
volatile int64_t t73 = 29627304869540606LL;
int64_t x310 = INT64_MIN;
static int64_t x311 = 6340026417LL;
static int64_t t74 = -769564LL;
int32_t x316 = INT32_MIN;
volatile int32_t t75 = -8269396;
int32_t t76 = -7362;
int32_t x321 = INT32_MIN;
int8_t x329 = -1;
volatile uint64_t t79 = 19999LLU;
volatile int32_t x334 = INT32_MAX;
uint32_t x341 = 11838U;
static volatile int32_t x357 = INT32_MIN;
int8_t x361 = INT8_MIN;
static int64_t x363 = -90LL;
uint64_t x366 = 113506LLU;
int64_t x367 = -103181544LL;
int64_t x368 = INT64_MAX;
int64_t x376 = INT64_MIN;
int16_t x379 = INT16_MIN;
int64_t x393 = 457749264226LL;
static volatile int16_t x396 = INT16_MAX;
int32_t x403 = INT32_MIN;
static int16_t x414 = INT16_MIN;
volatile int16_t x415 = -5035;
uint32_t x416 = UINT32_MAX;
int16_t x418 = -1730;
uint16_t x423 = 2U;
volatile int32_t t101 = 257154983;
static int32_t x425 = INT32_MIN;
int64_t x431 = INT64_MIN;
static int16_t x441 = -1;
int64_t t105 = 598223359LL;
volatile int16_t x447 = INT16_MIN;
static volatile int64_t t108 = -3700107663023928097LL;
volatile int8_t x460 = INT8_MAX;
int64_t t110 = 81768635403924969LL;
volatile uint8_t x471 = UINT8_MAX;
uint8_t x479 = 5U;
volatile int32_t x482 = INT32_MIN;
static int64_t x488 = -1LL;
int32_t x494 = -1;
uint16_t x502 = 18U;
volatile uint64_t x507 = UINT64_MAX;
int64_t x513 = INT64_MIN;
volatile int32_t t123 = 1005844;
int8_t x517 = INT8_MIN;
static int32_t x518 = 12838345;
volatile uint16_t x519 = 113U;
int8_t x520 = 2;
volatile int64_t x526 = -1LL;
static int32_t x531 = INT32_MIN;
int8_t x532 = -1;
int64_t x537 = 31LL;
uint16_t x548 = UINT16_MAX;
int32_t t132 = 1836;
uint32_t t134 = 15U;
static uint32_t x562 = 151742U;
static volatile int64_t t135 = 70685695754712LL;
volatile uint16_t x567 = UINT16_MAX;
uint16_t x574 = 3870U;
static int32_t x575 = INT32_MIN;
int64_t x577 = -1LL;
int16_t x582 = INT16_MAX;
uint32_t x589 = 6U;
int16_t x590 = 5872;
uint32_t t142 = 388385U;
volatile int64_t x601 = INT64_MIN;
int8_t x604 = INT8_MIN;
int8_t x606 = -1;
int64_t x608 = 325563LL;
static int16_t x611 = INT16_MAX;
int16_t x612 = INT16_MIN;
uint32_t x629 = UINT32_MAX;
static int8_t x632 = -6;
int64_t x647 = 28096LL;
volatile uint32_t x651 = UINT32_MAX;
uint32_t t155 = 1218673U;
volatile int32_t t157 = 4;
int32_t x664 = -9241;
static uint64_t x671 = 59260LLU;
int16_t x673 = INT16_MIN;
static int8_t x676 = -1;
volatile int64_t t161 = 275627280523974LL;
uint64_t x684 = 68611697650LLU;
static int8_t x699 = -1;
static uint32_t x702 = 215053U;
int8_t x703 = INT8_MIN;
static volatile int8_t x704 = -1;
static int32_t x708 = INT32_MIN;
volatile int32_t t169 = -21253;
static int16_t x723 = -1;
uint32_t t172 = 1U;
uint64_t t174 = 676121LLU;
int16_t x738 = 0;
int32_t t177 = -81567184;
uint16_t x752 = UINT16_MAX;
int32_t x753 = INT32_MIN;
int64_t x756 = -1LL;
uint32_t x758 = UINT32_MAX;
uint8_t x760 = 2U;
static int8_t x761 = -4;
int32_t x764 = INT32_MIN;
int64_t t182 = -1942029926953LL;
volatile int8_t x773 = INT8_MAX;
volatile int32_t t184 = -1895656;
volatile int32_t t185 = 1;
uint16_t x782 = 5U;
int32_t x792 = 2;
int32_t x797 = 243256953;
int8_t x798 = INT8_MIN;
int64_t x807 = -14007507095LL;
volatile int64_t t192 = 96164LL;
int32_t x810 = INT32_MAX;
int64_t t193 = 0LL;
static uint32_t x817 = UINT32_MAX;
int64_t x824 = -6076538658126791LL;
static int32_t x826 = 0;
int16_t x829 = INT16_MIN;
uint16_t x830 = 26U;


void f0(void) {
    	int32_t x1 = 56;
	int64_t x2 = 735659511836358LL;
	static volatile uint32_t x4 = UINT32_MAX;
	uint32_t t0 = 33077U;

    t0 = (((x1>x2)|x3)/x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	volatile int64_t x6 = INT64_MIN;
	volatile uint64_t x8 = 24402803469997431LLU;
	uint64_t t1 = 3LLU;

    t1 = (((x5>x6)|x7)/x8);

    if (t1 != 755LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = UINT64_MAX;
	static int64_t x10 = 5870839LL;
	uint64_t x11 = 2361932LLU;
	uint8_t x12 = 90U;
	uint64_t t2 = 81613520691904LLU;

    t2 = (((x9>x10)|x11)/x12);

    if (t2 != 26243LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = INT64_MIN;
	volatile int64_t t3 = -142896017511873399LL;

    t3 = (((x13>x14)|x15)/x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = INT64_MIN;
	uint32_t x19 = 1188U;
	uint32_t t4 = 15509U;

    t4 = (((x17>x18)|x19)/x20);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 6U;
	int8_t x22 = INT8_MAX;
	uint64_t x23 = UINT64_MAX;
	uint64_t x24 = UINT64_MAX;
	volatile uint64_t t5 = 392126125LLU;

    t5 = (((x21>x22)|x23)/x24);

    if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 9LLU;
	int16_t x26 = INT16_MAX;
	int8_t x27 = -1;
	volatile int64_t x28 = INT64_MIN;
	int64_t t6 = 662764126015209516LL;

    t6 = (((x25>x26)|x27)/x28);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = UINT8_MAX;
	volatile int32_t x30 = -1;
	uint16_t x31 = 2627U;

    t7 = (((x29>x30)|x31)/x32);

    if (t7 != 12) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int16_t x33 = 276;
	int64_t x34 = -1LL;
	static uint8_t x35 = 13U;
	static int8_t x36 = INT8_MAX;

    t8 = (((x33>x34)|x35)/x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x38 = -1;
	uint16_t x40 = 2803U;
	volatile int32_t t9 = -45;

    t9 = (((x37>x38)|x39)/x40);

    if (t9 != 11) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	volatile int32_t x42 = 646124;
	int32_t x44 = INT32_MAX;
	int32_t t10 = 0;

    t10 = (((x41>x42)|x43)/x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x46 = -1;
	uint64_t x47 = 285983414761593033LLU;
	volatile uint8_t x48 = UINT8_MAX;
	volatile uint64_t t11 = 6591509066LLU;

    t11 = (((x45>x46)|x47)/x48);

    if (t11 != 1121503587300364LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint64_t x49 = 4848LLU;
	int8_t x50 = INT8_MAX;
	int8_t x51 = INT8_MIN;
	int8_t x52 = -42;
	int32_t t12 = 41402;

    t12 = (((x49>x50)|x51)/x52);

    if (t12 != 3) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 0U;
	int16_t x54 = INT16_MIN;
	volatile uint8_t x55 = 10U;
	int8_t x56 = INT8_MIN;
	int32_t t13 = -651897;

    t13 = (((x53>x54)|x55)/x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 13886872LLU;
	static volatile uint32_t x58 = 342485281U;
	uint8_t x59 = UINT8_MAX;
	volatile int8_t x60 = INT8_MIN;
	static volatile int32_t t14 = -3;

    t14 = (((x57>x58)|x59)/x60);

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MAX;
	volatile uint64_t x62 = 276103449262684LLU;
	volatile int32_t x63 = -1;
	volatile int16_t x64 = INT16_MAX;
	int32_t t15 = 148;

    t15 = (((x61>x62)|x63)/x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 1U;
	int32_t x66 = INT32_MAX;
	int8_t x67 = INT8_MIN;
	volatile int32_t x68 = INT32_MIN;
	int32_t t16 = 0;

    t16 = (((x65>x66)|x67)/x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x69 = -56025573;
	int32_t x70 = INT32_MAX;
	int64_t x71 = INT64_MAX;
	int64_t t17 = 999048317046LL;

    t17 = (((x69>x70)|x71)/x72);

    if (t17 != 281483566907400LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x73 = INT64_MIN;
	static uint8_t x74 = 0U;
	static int32_t x75 = -41;
	int16_t x76 = -178;
	int32_t t18 = 8779001;

    t18 = (((x73>x74)|x75)/x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x79 = -127;
	volatile int32_t t19 = -106754;

    t19 = (((x77>x78)|x79)/x80);

    if (t19 != -18) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = 45;
	static int32_t x83 = INT32_MIN;
	int32_t x84 = -1;
	int32_t t20 = INT32_MAX;

    t20 = (((x81>x82)|x83)/x84);

    if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -1;
	int8_t x86 = -1;
	uint16_t x87 = UINT16_MAX;
	volatile int32_t t21 = -12641074;

    t21 = (((x85>x86)|x87)/x88);

    if (t21 != 91) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = 125;
	uint8_t x91 = 103U;
	uint16_t x92 = 458U;
	static int32_t t22 = 114;

    t22 = (((x89>x90)|x91)/x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x93 = -14770141689917205LL;
	uint32_t x94 = UINT32_MAX;
	int64_t x95 = 3924LL;
	uint64_t x96 = 52799911038871LLU;
	uint64_t t23 = 34245144888732LLU;

    t23 = (((x93>x94)|x95)/x96);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x98 = INT8_MIN;
	uint8_t x99 = UINT8_MAX;
	int32_t x100 = 4671;

    t24 = (((x97>x98)|x99)/x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 4U;
	int16_t x103 = -8365;
	volatile int32_t t25 = -14174889;

    t25 = (((x101>x102)|x103)/x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x105 = 22681310830040LLU;
	static int64_t x106 = -1LL;
	uint64_t x107 = 54625411LLU;
	int16_t x108 = 1531;
	volatile uint64_t t26 = 42982828LLU;

    t26 = (((x105>x106)|x107)/x108);

    if (t26 != 35679LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x110 = INT16_MAX;
	int8_t x111 = INT8_MIN;
	static int64_t x112 = -62085LL;
	int64_t t27 = -156535494829627LL;

    t27 = (((x109>x110)|x111)/x112);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = 334132052679616033LL;
	int64_t x114 = -149786896LL;
	static int32_t x115 = INT32_MIN;
	static int16_t x116 = INT16_MIN;
	volatile int32_t t28 = 2944224;

    t28 = (((x113>x114)|x115)/x116);

    if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x118 = INT32_MAX;
	static int16_t x119 = -1;
	int64_t x120 = INT64_MIN;
	volatile int64_t t29 = -1555828857810279LL;

    t29 = (((x117>x118)|x119)/x120);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = -1;
	int64_t x122 = -19090065349LL;
	int64_t x123 = INT64_MAX;
	int32_t x124 = -1;

    t30 = (((x121>x122)|x123)/x124);

    if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x125 = 7930U;
	volatile uint32_t x126 = 616568U;
	int64_t x127 = 14068LL;
	int16_t x128 = 12;
	int64_t t31 = 9459LL;

    t31 = (((x125>x126)|x127)/x128);

    if (t31 != 1172LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = INT32_MIN;
	uint16_t x130 = UINT16_MAX;
	int32_t x131 = INT32_MAX;
	int32_t x132 = -15543;
	int32_t t32 = 1064326403;

    t32 = (((x129>x130)|x131)/x132);

    if (t32 != -138164) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int8_t x133 = -1;
	static int16_t x134 = INT16_MIN;
	volatile int8_t x135 = INT8_MIN;
	int32_t x136 = 26;
	int32_t t33 = -103;

    t33 = (((x133>x134)|x135)/x136);

    if (t33 != -4) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = INT32_MIN;
	int16_t x138 = INT16_MIN;
	volatile int64_t x140 = -1LL;

    t34 = (((x137>x138)|x139)/x140);

    if (t34 != 4491625LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -1;
	int8_t x142 = -1;
	static uint32_t x143 = 54U;
	uint8_t x144 = 2U;
	uint32_t t35 = 4944036U;

    t35 = (((x141>x142)|x143)/x144);

    if (t35 != 27U) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x145 = UINT16_MAX;
	uint16_t x146 = 7126U;
	uint8_t x147 = UINT8_MAX;
	static int64_t x148 = -1LL;
	int64_t t36 = 16911428029LL;

    t36 = (((x145>x146)|x147)/x148);

    if (t36 != -255LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x150 = INT64_MIN;
	int32_t x151 = INT32_MAX;
	int16_t x152 = INT16_MIN;
	volatile int32_t t37 = -56154144;

    t37 = (((x149>x150)|x151)/x152);

    if (t37 != -65535) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = UINT16_MAX;
	static int32_t x155 = INT32_MIN;
	static int8_t x156 = -2;
	int32_t t38 = -16;

    t38 = (((x153>x154)|x155)/x156);

    if (t38 != 1073741823) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x158 = -1LL;
	volatile uint64_t t39 = 149804982537002LLU;

    t39 = (((x157>x158)|x159)/x160);

    if (t39 != 50046945001LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MIN;
	int16_t x162 = INT16_MIN;
	int8_t x163 = -1;
	uint8_t x164 = UINT8_MAX;
	int32_t t40 = -1684019;

    t40 = (((x161>x162)|x163)/x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x165 = 66;
	int64_t x168 = INT64_MIN;
	static int64_t t41 = 207973546964374664LL;

    t41 = (((x165>x166)|x167)/x168);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 5U;
	static uint8_t x172 = UINT8_MAX;
	static volatile int32_t t42 = -22225937;

    t42 = (((x169>x170)|x171)/x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = INT16_MAX;
	int16_t x175 = INT16_MIN;
	static int16_t x176 = INT16_MAX;

    t43 = (((x173>x174)|x175)/x176);

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = -10989;
	static uint16_t x178 = 5U;
	int16_t x179 = INT16_MIN;
	volatile int16_t x180 = -52;
	volatile int32_t t44 = -877446139;

    t44 = (((x177>x178)|x179)/x180);

    if (t44 != 630) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 0U;
	volatile int8_t x182 = 7;

    t45 = (((x181>x182)|x183)/x184);

    if (t45 != -71090LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int64_t x185 = -2668127LL;
	static uint64_t x186 = 4594194300253314301LLU;
	volatile int8_t x188 = INT8_MIN;

    t46 = (((x185>x186)|x187)/x188);

    if (t46 != -69) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x189 = UINT8_MAX;
	int8_t x190 = INT8_MIN;
	static uint64_t x191 = 48011LLU;
	int64_t x192 = -1LL;
	static uint64_t t47 = 1397573LLU;

    t47 = (((x189>x190)|x191)/x192);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MIN;
	static volatile int64_t x194 = INT64_MAX;
	int64_t x195 = INT64_MAX;
	int64_t x196 = -1LL;
	static volatile int64_t t48 = 7294344825217224LL;

    t48 = (((x193>x194)|x195)/x196);

    if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	int32_t x198 = INT32_MIN;
	volatile uint16_t x199 = 108U;
	int16_t x200 = INT16_MIN;
	int32_t t49 = 1;

    t49 = (((x197>x198)|x199)/x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MAX;
	int32_t x203 = INT32_MIN;
	volatile int32_t x204 = INT32_MAX;

    t50 = (((x201>x202)|x203)/x204);

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	volatile uint16_t x206 = 0U;
	int8_t x207 = -1;
	static volatile int16_t x208 = -56;
	volatile int32_t t51 = -212;

    t51 = (((x205>x206)|x207)/x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MAX;
	int32_t x210 = INT32_MIN;
	int8_t x211 = INT8_MIN;
	volatile uint64_t t52 = 9349LLU;

    t52 = (((x209>x210)|x211)/x212);

    if (t52 != 4LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = UINT64_MAX;
	volatile uint32_t x214 = 2U;
	int64_t x215 = INT64_MAX;
	uint8_t x216 = 7U;
	volatile int64_t t53 = 15LL;

    t53 = (((x213>x214)|x215)/x216);

    if (t53 != 1317624576693539401LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x217 = 197LLU;
	int16_t x218 = INT16_MAX;
	int32_t x219 = -1;
	uint32_t x220 = 55791902U;
	uint32_t t54 = 189U;

    t54 = (((x217>x218)|x219)/x220);

    if (t54 != 76U) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = -1;
	int8_t x222 = 46;
	static int32_t x223 = INT32_MIN;
	int8_t x224 = INT8_MIN;

    t55 = (((x221>x222)|x223)/x224);

    if (t55 != 16777216) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x225 = UINT8_MAX;
	int16_t x227 = INT16_MAX;
	int64_t x228 = INT64_MIN;
	volatile int64_t t56 = 901255369343167LL;

    t56 = (((x225>x226)|x227)/x228);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x230 = INT8_MAX;
	int16_t x232 = INT16_MIN;
	volatile uint32_t t57 = 26058U;

    t57 = (((x229>x230)|x231)/x232);

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x233 = -19;
	uint32_t x234 = UINT32_MAX;
	int16_t x235 = INT16_MAX;
	int32_t x236 = INT32_MAX;
	int32_t t58 = -2;

    t58 = (((x233>x234)|x235)/x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x237 = INT16_MIN;
	int32_t x238 = 1;
	static uint64_t t59 = 94LLU;

    t59 = (((x237>x238)|x239)/x240);

    if (t59 != 5LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x241 = UINT8_MAX;
	uint32_t x242 = 1U;
	static int16_t x243 = -1648;
	int8_t x244 = INT8_MIN;

    t60 = (((x241>x242)|x243)/x244);

    if (t60 != 12) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = 29U;
	uint16_t x246 = UINT16_MAX;
	static int64_t x247 = INT64_MIN;
	int8_t x248 = INT8_MIN;
	int64_t t61 = -26LL;

    t61 = (((x245>x246)|x247)/x248);

    if (t61 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x251 = -1;
	int8_t x252 = INT8_MIN;
	volatile int32_t t62 = -2677479;

    t62 = (((x249>x250)|x251)/x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -20115325741316LL;
	int32_t x254 = -25;
	int32_t x255 = 5330556;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t63 = 10765;

    t63 = (((x253>x254)|x255)/x256);

    if (t63 != 20904) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = 478813419536110604LLU;
	volatile uint32_t x258 = 60853U;
	volatile uint64_t x259 = UINT64_MAX;
	int8_t x260 = -1;

    t64 = (((x257>x258)|x259)/x260);

    if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x262 = -1LL;
	uint32_t x263 = 88414U;
	static int64_t x264 = INT64_MIN;
	static int64_t t65 = 5965591LL;

    t65 = (((x261>x262)|x263)/x264);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x269 = INT64_MIN;
	static int32_t x270 = 19236544;
	int32_t x271 = -1;
	int32_t x272 = -18996417;
	int32_t t66 = -339607770;

    t66 = (((x269>x270)|x271)/x272);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x273 = -1;
	volatile int8_t x274 = 1;
	int32_t x275 = -1;
	uint8_t x276 = 59U;
	static volatile int32_t t67 = 292616;

    t67 = (((x273>x274)|x275)/x276);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x277 = 7415113687LLU;
	uint16_t x278 = 4U;
	int8_t x279 = INT8_MAX;
	int32_t x280 = -55214;
	int32_t t68 = 0;

    t68 = (((x277>x278)|x279)/x280);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x282 = 443962LLU;
	int8_t x283 = INT8_MIN;
	uint32_t x284 = 1494037358U;
	uint32_t t69 = 61505U;

    t69 = (((x281>x282)|x283)/x284);

    if (t69 != 2U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x285 = INT32_MAX;
	int8_t x286 = INT8_MAX;
	int64_t x287 = INT64_MAX;
	int64_t t70 = 340330LL;

    t70 = (((x285>x286)|x287)/x288);

    if (t70 != 140739635871744LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x294 = 175U;
	int16_t x295 = INT16_MIN;
	int32_t x296 = 597600;
	int32_t t71 = 5375274;

    t71 = (((x293>x294)|x295)/x296);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x297 = UINT8_MAX;
	int8_t x298 = -7;
	uint16_t x299 = 0U;
	int64_t x300 = INT64_MIN;
	volatile int64_t t72 = -11578898LL;

    t72 = (((x297>x298)|x299)/x300);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x302 = INT16_MAX;
	int16_t x304 = -1;

    t73 = (((x301>x302)|x303)/x304);

    if (t73 != 14317622528243LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x309 = INT64_MAX;
	int16_t x312 = INT16_MIN;

    t74 = (((x309>x310)|x311)/x312);

    if (t74 != -193482LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x313 = 209U;
	int64_t x314 = 17588LL;
	volatile int32_t x315 = INT32_MAX;

    t75 = (((x313>x314)|x315)/x316);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x317 = INT8_MIN;
	volatile uint64_t x318 = 44852579943LLU;
	int16_t x319 = -1;
	int32_t x320 = INT32_MAX;

    t76 = (((x317>x318)|x319)/x320);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x322 = 7749648U;
	int32_t x323 = 7328434;
	int8_t x324 = -1;
	volatile int32_t t77 = -8000;

    t77 = (((x321>x322)|x323)/x324);

    if (t77 != -7328435) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x325 = INT64_MIN;
	uint32_t x326 = 930020524U;
	int8_t x327 = 1;
	int64_t x328 = -1LL;
	int64_t t78 = -71559346123656LL;

    t78 = (((x325>x326)|x327)/x328);

    if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x330 = 0U;
	int32_t x331 = -654780;
	uint64_t x332 = 623227LLU;

    t79 = (((x329>x330)|x331)/x332);

    if (t79 != 29598756269720LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x333 = INT64_MIN;
	static int16_t x335 = INT16_MAX;
	int32_t x336 = -1;
	int32_t t80 = -459305;

    t80 = (((x333>x334)|x335)/x336);

    if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x337 = INT32_MAX;
	int16_t x338 = -1;
	int8_t x339 = 53;
	int64_t x340 = INT64_MIN;
	static volatile int64_t t81 = 138834734LL;

    t81 = (((x337>x338)|x339)/x340);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x342 = INT8_MIN;
	volatile uint64_t x343 = UINT64_MAX;
	static int64_t x344 = 1310945174LL;
	volatile uint64_t t82 = 240690LLU;

    t82 = (((x341>x342)|x343)/x344);

    if (t82 != 14071331463LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x345 = INT32_MIN;
	static uint64_t x346 = UINT64_MAX;
	int8_t x347 = 3;
	int64_t x348 = INT64_MIN;
	volatile int64_t t83 = -451434990LL;

    t83 = (((x345>x346)|x347)/x348);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x349 = 3U;
	uint16_t x350 = UINT16_MAX;
	int32_t x351 = -4;
	int32_t x352 = 12536385;
	int32_t t84 = 0;

    t84 = (((x349>x350)|x351)/x352);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x353 = INT64_MAX;
	int8_t x354 = INT8_MIN;
	uint16_t x355 = 5U;
	int32_t x356 = INT32_MIN;
	volatile int32_t t85 = -12705;

    t85 = (((x353>x354)|x355)/x356);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x358 = 60U;
	uint64_t x359 = UINT64_MAX;
	uint32_t x360 = UINT32_MAX;
	volatile uint64_t t86 = 21703866056519LLU;

    t86 = (((x357>x358)|x359)/x360);

    if (t86 != 4294967297LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x362 = INT32_MIN;
	static volatile int32_t x364 = -1;
	volatile int64_t t87 = 1LL;

    t87 = (((x361>x362)|x363)/x364);

    if (t87 != 89LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x365 = INT8_MIN;
	static int64_t t88 = 187710281277811521LL;

    t88 = (((x365>x366)|x367)/x368);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x373 = 3691U;
	volatile uint8_t x374 = UINT8_MAX;
	int64_t x375 = INT64_MIN;
	int64_t t89 = -1445250150848013LL;

    t89 = (((x373>x374)|x375)/x376);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x377 = INT16_MIN;
	uint16_t x378 = UINT16_MAX;
	int64_t x380 = -530520755360526LL;
	volatile int64_t t90 = -2776878397LL;

    t90 = (((x377>x378)|x379)/x380);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x381 = -1;
	int8_t x382 = INT8_MIN;
	static uint16_t x383 = 272U;
	static int32_t x384 = -1;
	static int32_t t91 = -15777953;

    t91 = (((x381>x382)|x383)/x384);

    if (t91 != -273) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x385 = -28036;
	int32_t x386 = INT32_MAX;
	int8_t x387 = 0;
	volatile int32_t x388 = 20733601;
	int32_t t92 = 461089618;

    t92 = (((x385>x386)|x387)/x388);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x389 = INT64_MIN;
	volatile uint64_t x390 = 173381162LLU;
	static int32_t x391 = -21;
	static int8_t x392 = INT8_MAX;
	int32_t t93 = -62850;

    t93 = (((x389>x390)|x391)/x392);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x394 = INT64_MIN;
	volatile uint32_t x395 = 948008640U;
	volatile uint32_t t94 = 456820U;

    t94 = (((x393>x394)|x395)/x396);

    if (t94 != 28931U) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x397 = UINT32_MAX;
	static uint16_t x398 = UINT16_MAX;
	int32_t x399 = -19080027;
	static int16_t x400 = 18;
	volatile int32_t t95 = 40138538;

    t95 = (((x397>x398)|x399)/x400);

    if (t95 != -1060001) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x401 = 530267U;
	int16_t x402 = -30;
	int64_t x404 = 22LL;
	int64_t t96 = -1545116771988382178LL;

    t96 = (((x401>x402)|x403)/x404);

    if (t96 != -97612893LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x405 = 86U;
	volatile int8_t x406 = INT8_MIN;
	static int32_t x407 = 1;
	uint64_t x408 = 716775190600LLU;
	static uint64_t t97 = 165070302052LLU;

    t97 = (((x405>x406)|x407)/x408);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x409 = -1;
	static int32_t x410 = INT32_MAX;
	uint8_t x411 = 9U;
	int64_t x412 = INT64_MAX;
	static volatile int64_t t98 = 435188369LL;

    t98 = (((x409>x410)|x411)/x412);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x413 = -1;
	static volatile uint32_t t99 = 11414U;

    t99 = (((x413>x414)|x415)/x416);

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x417 = 0U;
	uint16_t x419 = 11896U;
	static uint16_t x420 = 2062U;
	int32_t t100 = 33;

    t100 = (((x417>x418)|x419)/x420);

    if (t100 != 5) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x421 = INT32_MAX;
	uint32_t x422 = 1235320U;
	int8_t x424 = 62;

    t101 = (((x421>x422)|x423)/x424);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x426 = 42103U;
	static int32_t x427 = -45570934;
	static volatile int8_t x428 = INT8_MAX;
	static volatile int32_t t102 = -65539;

    t102 = (((x425>x426)|x427)/x428);

    if (t102 != -358826) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x429 = 5;
	int32_t x430 = -30532783;
	int32_t x432 = 6569;
	volatile int64_t t103 = 47324335397LL;

    t103 = (((x429>x430)|x431)/x432);

    if (t103 != -1404075511775730LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x437 = 13804668;
	int32_t x438 = -1;
	static volatile int16_t x439 = -1;
	int32_t x440 = -1;
	int32_t t104 = -51007176;

    t104 = (((x437>x438)|x439)/x440);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x442 = UINT32_MAX;
	volatile uint8_t x443 = 59U;
	static int64_t x444 = 1675807461LL;

    t105 = (((x441>x442)|x443)/x444);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x445 = -1LL;
	uint8_t x446 = 5U;
	int16_t x448 = INT16_MAX;
	int32_t t106 = 1702491;

    t106 = (((x445>x446)|x447)/x448);

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x449 = -11314;
	volatile uint64_t x450 = UINT64_MAX;
	static int8_t x451 = -1;
	int16_t x452 = -10;
	volatile int32_t t107 = -57;

    t107 = (((x449>x450)|x451)/x452);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x453 = -1LL;
	int8_t x454 = INT8_MAX;
	int16_t x455 = 80;
	static volatile int64_t x456 = -16889999463386180LL;

    t108 = (((x453>x454)|x455)/x456);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x457 = 7;
	int64_t x458 = -395205569805LL;
	uint64_t x459 = 2474000159106445LLU;
	volatile uint64_t t109 = 12LLU;

    t109 = (((x457>x458)|x459)/x460);

    if (t109 != 19480316213436LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x461 = UINT8_MAX;
	static volatile uint8_t x462 = 33U;
	uint32_t x463 = UINT32_MAX;
	int64_t x464 = 6004584372797863LL;

    t110 = (((x461>x462)|x463)/x464);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x465 = UINT8_MAX;
	static uint16_t x466 = UINT16_MAX;
	uint32_t x467 = 4U;
	uint32_t x468 = 1076746730U;
	volatile uint32_t t111 = 22490U;

    t111 = (((x465>x466)|x467)/x468);

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x469 = -1LL;
	static volatile int32_t x470 = INT32_MAX;
	int16_t x472 = INT16_MAX;
	static int32_t t112 = 482714;

    t112 = (((x469>x470)|x471)/x472);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x473 = 3U;
	int16_t x474 = INT16_MIN;
	int64_t x475 = INT64_MIN;
	uint16_t x476 = 59U;
	volatile int64_t t113 = -34787303567578LL;

    t113 = (((x473>x474)|x475)/x476);

    if (t113 != -156328339607708064LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x477 = UINT64_MAX;
	static uint8_t x478 = 29U;
	uint8_t x480 = 26U;
	int32_t t114 = -1473112;

    t114 = (((x477>x478)|x479)/x480);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x481 = INT64_MIN;
	static int16_t x483 = -71;
	volatile int16_t x484 = -7;
	static volatile int32_t t115 = -122429937;

    t115 = (((x481>x482)|x483)/x484);

    if (t115 != 10) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x485 = UINT64_MAX;
	uint8_t x486 = UINT8_MAX;
	int16_t x487 = INT16_MIN;
	int64_t t116 = 44172445LL;

    t116 = (((x485>x486)|x487)/x488);

    if (t116 != 32767LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x489 = INT8_MIN;
	int64_t x490 = INT64_MAX;
	static int64_t x491 = -1LL;
	volatile int8_t x492 = 63;
	volatile int64_t t117 = -745409327240LL;

    t117 = (((x489>x490)|x491)/x492);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x493 = INT64_MAX;
	int32_t x495 = 695;
	uint32_t x496 = UINT32_MAX;
	uint32_t t118 = 6282309U;

    t118 = (((x493>x494)|x495)/x496);

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x497 = 3U;
	int64_t x498 = -1LL;
	volatile uint32_t x499 = 123149550U;
	volatile int16_t x500 = -5849;
	volatile uint32_t t119 = 57423618U;

    t119 = (((x497>x498)|x499)/x500);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x501 = 7U;
	uint64_t x503 = 6888358244461LLU;
	int8_t x504 = INT8_MAX;
	static uint64_t t120 = 54523076572886LLU;

    t120 = (((x501>x502)|x503)/x504);

    if (t120 != 54239041294LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x505 = INT16_MAX;
	uint32_t x506 = 5U;
	int32_t x508 = INT32_MIN;
	uint64_t t121 = 257898850741LLU;

    t121 = (((x505>x506)|x507)/x508);

    if (t121 != 1LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x509 = UINT8_MAX;
	int64_t x510 = -831351599624LL;
	int8_t x511 = -42;
	uint64_t x512 = 401LLU;
	uint64_t t122 = 2354LLU;

    t122 = (((x509>x510)|x511)/x512);

    if (t122 != 46001855545410353LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x514 = INT16_MIN;
	volatile uint8_t x515 = UINT8_MAX;
	static int16_t x516 = INT16_MIN;

    t123 = (((x513>x514)|x515)/x516);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t t124 = -468919359;

    t124 = (((x517>x518)|x519)/x520);

    if (t124 != 56) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x521 = INT16_MIN;
	volatile uint16_t x522 = 375U;
	uint16_t x523 = 2224U;
	static int32_t x524 = INT32_MIN;
	int32_t t125 = -18267;

    t125 = (((x521>x522)|x523)/x524);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x525 = INT64_MAX;
	uint64_t x527 = UINT64_MAX;
	int8_t x528 = INT8_MAX;
	uint64_t t126 = 505638LLU;

    t126 = (((x525>x526)|x527)/x528);

    if (t126 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x529 = 162449140;
	int8_t x530 = INT8_MIN;
	volatile int32_t t127 = INT32_MAX;

    t127 = (((x529>x530)|x531)/x532);

    if (t127 != INT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x533 = INT64_MAX;
	int64_t x534 = 62855651457125LL;
	volatile uint8_t x535 = UINT8_MAX;
	int64_t x536 = INT64_MIN;
	int64_t t128 = -1939973063LL;

    t128 = (((x533>x534)|x535)/x536);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x538 = 6992U;
	uint32_t x539 = 737866883U;
	volatile int16_t x540 = INT16_MAX;
	volatile uint32_t t129 = 4076U;

    t129 = (((x537>x538)|x539)/x540);

    if (t129 != 22518U) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x541 = INT32_MIN;
	static uint16_t x542 = 413U;
	volatile int16_t x543 = INT16_MAX;
	static volatile int64_t x544 = INT64_MAX;
	static int64_t t130 = 13LL;

    t130 = (((x541>x542)|x543)/x544);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x545 = UINT16_MAX;
	static uint8_t x546 = 15U;
	uint8_t x547 = UINT8_MAX;
	int32_t t131 = -458;

    t131 = (((x545>x546)|x547)/x548);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int8_t x549 = -10;
	volatile uint8_t x550 = 4U;
	volatile int16_t x551 = INT16_MAX;
	int8_t x552 = INT8_MIN;

    t132 = (((x549>x550)|x551)/x552);

    if (t132 != -255) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x553 = INT8_MAX;
	int64_t x554 = -1LL;
	int64_t x555 = -1LL;
	static uint32_t x556 = 748658522U;
	static volatile int64_t t133 = -47624175LL;

    t133 = (((x553>x554)|x555)/x556);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x557 = 63407716561LL;
	int64_t x558 = -1LL;
	volatile uint32_t x559 = 190U;
	int16_t x560 = INT16_MIN;

    t134 = (((x557>x558)|x559)/x560);

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x561 = INT64_MIN;
	int32_t x563 = INT32_MAX;
	int64_t x564 = -1LL;

    t135 = (((x561>x562)|x563)/x564);

    if (t135 != -2147483647LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x565 = 0;
	static uint16_t x566 = 9U;
	volatile uint32_t x568 = UINT32_MAX;
	static uint32_t t136 = 240948U;

    t136 = (((x565>x566)|x567)/x568);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x573 = INT16_MAX;
	int8_t x576 = INT8_MIN;
	volatile int32_t t137 = 1661189;

    t137 = (((x573>x574)|x575)/x576);

    if (t137 != 16777215) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x578 = 241U;
	uint8_t x579 = 19U;
	static uint64_t x580 = UINT64_MAX;
	volatile uint64_t t138 = 9208107992064LLU;

    t138 = (((x577>x578)|x579)/x580);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x581 = -1106;
	uint16_t x583 = UINT16_MAX;
	int8_t x584 = INT8_MIN;
	volatile int32_t t139 = -313552;

    t139 = (((x581>x582)|x583)/x584);

    if (t139 != -511) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x585 = UINT16_MAX;
	int32_t x586 = INT32_MIN;
	volatile int8_t x587 = INT8_MAX;
	int32_t x588 = INT32_MAX;
	int32_t t140 = 40007214;

    t140 = (((x585>x586)|x587)/x588);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x591 = INT32_MAX;
	static int32_t x592 = INT32_MIN;
	int32_t t141 = 109160;

    t141 = (((x589>x590)|x591)/x592);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x593 = INT32_MIN;
	static int64_t x594 = INT64_MAX;
	volatile uint32_t x595 = 13U;
	uint16_t x596 = 8U;

    t142 = (((x593>x594)|x595)/x596);

    if (t142 != 1U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x597 = -156;
	volatile int32_t x598 = -3596222;
	volatile int64_t x599 = INT64_MIN;
	static uint32_t x600 = 356U;
	static int64_t t143 = 460LL;

    t143 = (((x597>x598)|x599)/x600);

    if (t143 != -25908348418131392LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x602 = -1;
	volatile int16_t x603 = INT16_MAX;
	volatile int32_t t144 = 25709;

    t144 = (((x601>x602)|x603)/x604);

    if (t144 != -255) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x605 = UINT32_MAX;
	int8_t x607 = INT8_MIN;
	volatile int64_t t145 = 1498676237339390LL;

    t145 = (((x605>x606)|x607)/x608);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x609 = INT32_MIN;
	int8_t x610 = 0;
	int32_t t146 = -201992913;

    t146 = (((x609>x610)|x611)/x612);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x613 = 15781U;
	int32_t x614 = INT32_MIN;
	uint16_t x615 = 1U;
	volatile uint32_t x616 = UINT32_MAX;
	uint32_t t147 = 75960U;

    t147 = (((x613>x614)|x615)/x616);

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x617 = -1;
	static int32_t x618 = -1;
	uint16_t x619 = UINT16_MAX;
	int32_t x620 = INT32_MAX;
	volatile int32_t t148 = -2900255;

    t148 = (((x617>x618)|x619)/x620);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x621 = UINT64_MAX;
	static volatile int32_t x622 = INT32_MAX;
	volatile uint8_t x623 = 4U;
	static volatile int64_t x624 = -12LL;
	int64_t t149 = 20745163579701571LL;

    t149 = (((x621>x622)|x623)/x624);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x625 = UINT16_MAX;
	int8_t x626 = 1;
	int8_t x627 = 7;
	volatile int32_t x628 = 178439;
	int32_t t150 = -1;

    t150 = (((x625>x626)|x627)/x628);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x630 = UINT8_MAX;
	int64_t x631 = INT64_MAX;
	volatile int64_t t151 = -2112040403LL;

    t151 = (((x629>x630)|x631)/x632);

    if (t151 != -1537228672809129301LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x637 = INT64_MIN;
	int32_t x638 = INT32_MIN;
	int8_t x639 = INT8_MAX;
	int64_t x640 = INT64_MIN;
	volatile int64_t t152 = -2LL;

    t152 = (((x637>x638)|x639)/x640);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x641 = INT8_MAX;
	static int8_t x642 = INT8_MAX;
	uint8_t x643 = 62U;
	int8_t x644 = -14;
	static volatile int32_t t153 = 5170196;

    t153 = (((x641>x642)|x643)/x644);

    if (t153 != -4) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x645 = 62U;
	int32_t x646 = -1;
	uint8_t x648 = 3U;
	volatile int64_t t154 = 241198771919LL;

    t154 = (((x645>x646)|x647)/x648);

    if (t154 != 9365LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x649 = -1LL;
	uint64_t x650 = 46395775098160LLU;
	int32_t x652 = INT32_MIN;

    t155 = (((x649>x650)|x651)/x652);

    if (t155 != 1U) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x653 = INT32_MAX;
	int32_t x654 = INT32_MIN;
	static int8_t x655 = -1;
	static int16_t x656 = -3445;
	static volatile int32_t t156 = -4071;

    t156 = (((x653>x654)|x655)/x656);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x657 = INT8_MIN;
	int8_t x658 = -2;
	uint8_t x659 = 9U;
	int16_t x660 = -1509;

    t157 = (((x657>x658)|x659)/x660);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x661 = -267045;
	static uint8_t x662 = UINT8_MAX;
	int64_t x663 = INT64_MIN;
	volatile int64_t t158 = 47908223176419LL;

    t158 = (((x661>x662)|x663)/x664);

    if (t158 != 998092418229063LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x665 = UINT16_MAX;
	int16_t x666 = -1;
	static volatile uint32_t x667 = 406817U;
	static uint64_t x668 = UINT64_MAX;
	uint64_t t159 = 972668LLU;

    t159 = (((x665>x666)|x667)/x668);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x669 = 51;
	volatile int32_t x670 = 32884;
	int32_t x672 = 291969927;
	uint64_t t160 = 18450493LLU;

    t160 = (((x669>x670)|x671)/x672);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x674 = INT32_MIN;
	volatile int64_t x675 = -105684876274LL;

    t161 = (((x673>x674)|x675)/x676);

    if (t161 != 105684876273LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int32_t x681 = INT32_MIN;
	static int32_t x682 = INT32_MIN;
	static int16_t x683 = INT16_MAX;
	volatile uint64_t t162 = 761899317LLU;

    t162 = (((x681>x682)|x683)/x684);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x689 = INT32_MIN;
	volatile uint8_t x690 = 3U;
	uint16_t x691 = 14209U;
	volatile int16_t x692 = -874;
	int32_t t163 = -274;

    t163 = (((x689>x690)|x691)/x692);

    if (t163 != -16) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x693 = INT8_MAX;
	int32_t x694 = -1;
	uint8_t x695 = 55U;
	int8_t x696 = -1;
	int32_t t164 = -55;

    t164 = (((x693>x694)|x695)/x696);

    if (t164 != -55) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x697 = 12;
	static volatile int64_t x698 = INT64_MIN;
	static volatile uint64_t x700 = 3LLU;
	uint64_t t165 = 345096LLU;

    t165 = (((x697>x698)|x699)/x700);

    if (t165 != 6148914691236517205LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x701 = UINT16_MAX;
	static volatile int32_t t166 = 123632;

    t166 = (((x701>x702)|x703)/x704);

    if (t166 != 128) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x705 = -4;
	static int64_t x706 = 5603LL;
	static int16_t x707 = -1017;
	static int32_t t167 = -6364;

    t167 = (((x705>x706)|x707)/x708);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x709 = -1;
	uint8_t x710 = 5U;
	int8_t x711 = 1;
	int16_t x712 = INT16_MIN;
	volatile int32_t t168 = 2;

    t168 = (((x709>x710)|x711)/x712);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x713 = -1;
	int16_t x714 = INT16_MIN;
	static volatile int16_t x715 = INT16_MIN;
	uint16_t x716 = UINT16_MAX;

    t169 = (((x713>x714)|x715)/x716);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x717 = INT8_MAX;
	uint16_t x718 = UINT16_MAX;
	int8_t x719 = INT8_MAX;
	volatile uint16_t x720 = 205U;
	int32_t t170 = 57834;

    t170 = (((x717>x718)|x719)/x720);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x721 = -1LL;
	uint16_t x722 = 338U;
	uint8_t x724 = UINT8_MAX;
	volatile int32_t t171 = -238243587;

    t171 = (((x721>x722)|x723)/x724);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x725 = -1;
	static volatile int32_t x726 = -457472;
	uint32_t x727 = 667780U;
	uint16_t x728 = 33U;

    t172 = (((x725>x726)|x727)/x728);

    if (t172 != 20235U) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x729 = -1LL;
	int8_t x730 = INT8_MIN;
	volatile int32_t x731 = INT32_MAX;
	static uint16_t x732 = 405U;
	static int32_t t173 = 27;

    t173 = (((x729>x730)|x731)/x732);

    if (t173 != 5302428) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x733 = INT64_MIN;
	int16_t x734 = INT16_MAX;
	static uint64_t x735 = 1024513398699977LLU;
	volatile int16_t x736 = INT16_MIN;

    t174 = (((x733>x734)|x735)/x736);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x737 = INT32_MAX;
	uint32_t x739 = 0U;
	volatile int16_t x740 = INT16_MAX;
	volatile uint32_t t175 = 4U;

    t175 = (((x737>x738)|x739)/x740);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x741 = INT32_MIN;
	static uint16_t x742 = 21U;
	static uint8_t x743 = 0U;
	int8_t x744 = -2;
	volatile int32_t t176 = 1226857;

    t176 = (((x741>x742)|x743)/x744);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x745 = 14U;
	static int32_t x746 = INT32_MAX;
	int32_t x747 = INT32_MIN;
	uint16_t x748 = UINT16_MAX;

    t177 = (((x745>x746)|x747)/x748);

    if (t177 != -32768) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x749 = 370407526939LLU;
	int16_t x750 = -1;
	volatile int64_t x751 = -1LL;
	int64_t t178 = -26506829034850154LL;

    t178 = (((x749>x750)|x751)/x752);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x754 = -435882524869506000LL;
	volatile int64_t x755 = INT64_MIN;
	static int64_t t179 = INT64_MAX;

    t179 = (((x753>x754)|x755)/x756);

    if (t179 != INT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x757 = 2270341346647547LL;
	volatile uint32_t x759 = 2U;
	static volatile uint32_t t180 = 1U;

    t180 = (((x757>x758)|x759)/x760);

    if (t180 != 1U) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x762 = INT32_MIN;
	int32_t x763 = INT32_MIN;
	volatile int32_t t181 = -7;

    t181 = (((x761>x762)|x763)/x764);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x765 = INT64_MIN;
	int32_t x766 = INT32_MIN;
	volatile int32_t x767 = INT32_MIN;
	int64_t x768 = INT64_MIN;

    t182 = (((x765>x766)|x767)/x768);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x769 = -1;
	int32_t x770 = INT32_MIN;
	static volatile int64_t x771 = INT64_MIN;
	uint64_t x772 = 161227132691LLU;
	volatile uint64_t t183 = 1876LLU;

    t183 = (((x769>x770)|x771)/x772);

    if (t183 != 57207319LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x774 = 0;
	uint16_t x775 = 29U;
	static int16_t x776 = 25;

    t184 = (((x773>x774)|x775)/x776);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x777 = INT64_MIN;
	volatile uint16_t x778 = 2U;
	int32_t x779 = 16020;
	int8_t x780 = INT8_MIN;

    t185 = (((x777>x778)|x779)/x780);

    if (t185 != -125) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x781 = -1;
	volatile uint8_t x783 = 0U;
	int16_t x784 = INT16_MIN;
	int32_t t186 = 3570;

    t186 = (((x781>x782)|x783)/x784);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x785 = UINT32_MAX;
	int8_t x786 = INT8_MIN;
	static volatile uint64_t x787 = 7883763135276974LLU;
	int32_t x788 = -1;
	volatile uint64_t t187 = 115LLU;

    t187 = (((x785>x786)|x787)/x788);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x789 = 464305U;
	int16_t x790 = INT16_MIN;
	uint16_t x791 = UINT16_MAX;
	int32_t t188 = 2837;

    t188 = (((x789>x790)|x791)/x792);

    if (t188 != 32767) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x793 = 2U;
	uint32_t x794 = 6634758U;
	static uint64_t x795 = 6489064LLU;
	int64_t x796 = -600LL;
	uint64_t t189 = 2450499337969471271LLU;

    t189 = (((x793>x794)|x795)/x796);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x799 = INT8_MIN;
	volatile uint8_t x800 = 3U;
	volatile int32_t t190 = -864208;

    t190 = (((x797>x798)|x799)/x800);

    if (t190 != -42) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x801 = 0;
	volatile int16_t x802 = INT16_MAX;
	int32_t x803 = INT32_MAX;
	volatile int8_t x804 = INT8_MIN;
	int32_t t191 = 4680314;

    t191 = (((x801>x802)|x803)/x804);

    if (t191 != -16777215) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x805 = UINT16_MAX;
	uint32_t x806 = 18434U;
	uint32_t x808 = UINT32_MAX;

    t192 = (((x805>x806)|x807)/x808);

    if (t192 != -3LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x809 = INT16_MIN;
	int64_t x811 = INT64_MAX;
	static int8_t x812 = INT8_MIN;

    t193 = (((x809>x810)|x811)/x812);

    if (t193 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x813 = INT16_MIN;
	int8_t x814 = INT8_MIN;
	uint16_t x815 = 5218U;
	static uint32_t x816 = UINT32_MAX;
	volatile uint32_t t194 = 1325U;

    t194 = (((x813>x814)|x815)/x816);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint8_t x818 = 13U;
	static int32_t x819 = INT32_MIN;
	uint16_t x820 = 109U;
	static volatile int32_t t195 = 14;

    t195 = (((x817>x818)|x819)/x820);

    if (t195 != -19701684) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int16_t x821 = -1;
	uint16_t x822 = UINT16_MAX;
	int8_t x823 = 1;
	volatile int64_t t196 = -5011804420LL;

    t196 = (((x821>x822)|x823)/x824);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x825 = 15942U;
	static int32_t x827 = INT32_MIN;
	static volatile int16_t x828 = INT16_MAX;
	static int32_t t197 = 59;

    t197 = (((x825>x826)|x827)/x828);

    if (t197 != -65538) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x831 = 262308;
	uint64_t x832 = UINT64_MAX;
	uint64_t t198 = 2032920772112912LLU;

    t198 = (((x829>x830)|x831)/x832);

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x833 = -1;
	int64_t x834 = 68421160556LL;
	int16_t x835 = -1;
	int16_t x836 = INT16_MIN;
	int32_t t199 = 102314;

    t199 = (((x833>x834)|x835)/x836);

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


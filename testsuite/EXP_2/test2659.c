
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

static int16_t x1 = INT16_MIN;
int8_t x3 = -1;
int16_t x4 = 11;
uint8_t x7 = 3U;
int32_t t1 = 0;
int16_t x9 = 6496;
static volatile int8_t x12 = INT8_MIN;
int8_t x14 = INT8_MIN;
uint64_t x18 = 1026186365632827LLU;
static int8_t x19 = INT8_MAX;
int8_t x24 = -1;
uint32_t x27 = 70U;
int8_t x32 = INT8_MIN;
static volatile int32_t t7 = 72;
volatile int32_t x33 = 49900188;
static volatile uint32_t t8 = UINT32_MAX;
uint16_t x39 = 14U;
static int64_t x48 = INT64_MAX;
int8_t x51 = INT8_MIN;
volatile int32_t x60 = INT32_MAX;
int32_t x61 = INT32_MAX;
int16_t x67 = -1502;
int32_t t16 = -29;
uint8_t x71 = UINT8_MAX;
uint32_t t18 = 30073764U;
static uint32_t x81 = UINT32_MAX;
static int64_t x82 = INT64_MAX;
uint8_t x85 = UINT8_MAX;
uint64_t x86 = 666LLU;
int32_t x87 = 1894;
int32_t x91 = -258;
int32_t x98 = -851168;
int8_t x100 = INT8_MIN;
int32_t t24 = 395;
int32_t x102 = INT32_MIN;
int32_t t25 = 50258707;
int64_t x110 = INT64_MAX;
uint32_t x118 = 3640653U;
uint64_t t29 = UINT64_MAX;
int8_t x125 = INT8_MIN;
int64_t x133 = INT64_MAX;
uint64_t x136 = 436478602677001537LLU;
static volatile uint64_t t33 = 100688798012667025LLU;
static volatile uint64_t x138 = 9295LLU;
volatile uint32_t t35 = 27U;
uint32_t x146 = 1436U;
int8_t x160 = INT8_MIN;
static volatile int8_t x161 = INT8_MIN;
int32_t x175 = -10919;
int64_t x179 = -156LL;
static volatile int16_t x181 = -441;
uint32_t x188 = 19890815U;
volatile uint32_t x189 = UINT32_MAX;
static int16_t x190 = 379;
int32_t t49 = 162099;
int64_t x209 = 2003LL;
uint32_t x212 = 773207271U;
static volatile int64_t x219 = -869764LL;
int64_t x224 = INT64_MAX;
volatile uint16_t x225 = 4921U;
volatile int64_t t57 = INT64_MIN;
int8_t x237 = -4;
int64_t x240 = -1LL;
volatile int8_t x246 = INT8_MIN;
uint32_t x249 = 106U;
int32_t x255 = -1;
uint8_t x257 = 2U;
uint64_t x260 = 1083636973028593333LLU;
static int16_t x267 = -1;
int64_t x272 = 12344162323292823LL;
static volatile int64_t t67 = 962098231435424939LL;
uint32_t x279 = 224473428U;
int64_t x280 = INT64_MAX;
int64_t x281 = INT64_MAX;
uint16_t x290 = UINT16_MAX;
int32_t x292 = -113110;
int32_t x297 = INT32_MIN;
static volatile int64_t x301 = 20252330272887LL;
int64_t x302 = 227460LL;
int64_t x304 = INT64_MIN;
uint32_t x305 = UINT32_MAX;
int8_t x306 = INT8_MIN;
static volatile int32_t t76 = 11106;
int32_t x321 = 15;
int8_t x324 = 13;
int8_t x330 = INT8_MAX;
int8_t x331 = 1;
int16_t x334 = INT16_MIN;
static int32_t x335 = INT32_MAX;
volatile int32_t t83 = -50;
static int16_t x340 = 1;
uint32_t x344 = UINT32_MAX;
int32_t x349 = 404312;
volatile uint32_t t87 = UINT32_MAX;
volatile int64_t x360 = INT64_MIN;
int64_t t89 = INT64_MIN;
int16_t x362 = 12719;
int8_t x366 = INT8_MAX;
int8_t x367 = INT8_MIN;
uint64_t x369 = UINT64_MAX;
volatile int32_t x372 = -1;
volatile int8_t x374 = -13;
volatile uint32_t x375 = 6076U;
uint64_t x377 = UINT64_MAX;
int8_t x379 = INT8_MAX;
static uint16_t x380 = 19U;
uint32_t x384 = UINT32_MAX;
uint16_t x387 = 1U;
volatile int32_t t96 = -5241417;
int64_t x390 = INT64_MAX;
volatile int8_t x402 = -1;
uint64_t x404 = 14917LLU;
static uint64_t t100 = 403162LLU;
static volatile uint32_t x415 = 63U;
volatile int32_t t104 = 20;
int32_t x422 = INT32_MIN;
static int32_t x432 = -1;
uint32_t x437 = UINT32_MAX;
static uint32_t x439 = 369541992U;
static int32_t t109 = -1549;
int8_t x441 = -24;
int16_t x443 = INT16_MIN;
int64_t x447 = 3064081042090634659LL;
volatile int8_t x456 = 0;
int32_t t113 = 1946175;
int64_t x461 = INT64_MIN;
int8_t x462 = 5;
uint8_t x467 = 6U;
uint8_t x476 = 4U;
volatile int32_t t119 = 32695;
volatile int32_t t120 = -2247659;
int8_t x486 = INT8_MAX;
int32_t t121 = 348675164;
int64_t x489 = INT64_MIN;
int32_t x511 = INT32_MAX;
uint16_t x512 = 165U;
uint16_t x520 = 0U;
volatile int32_t x526 = INT32_MAX;
volatile uint8_t x534 = 0U;
volatile uint16_t x543 = 12U;
int16_t x544 = INT16_MAX;
int32_t x550 = INT32_MIN;
uint32_t x557 = UINT32_MAX;
int16_t x558 = -1;
static int32_t x559 = INT32_MIN;
uint32_t t139 = UINT32_MAX;
volatile uint8_t x571 = 8U;
uint32_t x574 = 120228U;
static int16_t x576 = -1032;
uint8_t x580 = UINT8_MAX;
volatile int64_t x581 = -7253LL;
static int32_t x587 = INT32_MAX;
uint8_t x590 = 7U;
int32_t x602 = 0;
uint64_t x605 = 767021136047LLU;
int16_t x606 = INT16_MIN;
int64_t x619 = INT64_MIN;
volatile int32_t t154 = INT32_MIN;
int16_t x626 = INT16_MAX;
uint32_t x627 = 55075U;
static int8_t x628 = INT8_MAX;
static int64_t x630 = INT64_MAX;
static int32_t x633 = -1;
int16_t x634 = -1;
int16_t x638 = 1;
uint32_t x641 = UINT32_MAX;
uint64_t x642 = 22436060896822LLU;
static int64_t t160 = 863323438198744538LL;
volatile int16_t x645 = -1;
static int16_t x647 = -1;
volatile int32_t t161 = -214328529;
static int16_t x651 = INT16_MIN;
static int8_t x652 = -1;
uint8_t x658 = 109U;
int64_t x667 = INT64_MAX;
static volatile int32_t x668 = INT32_MIN;
int32_t t166 = INT32_MIN;
uint16_t x669 = 8215U;
int32_t x688 = INT32_MIN;
volatile int32_t t176 = -30;
static volatile int16_t x710 = INT16_MAX;
int64_t x717 = -1LL;
int64_t x719 = INT64_MIN;
static uint8_t x726 = 3U;
uint8_t x731 = 34U;
static volatile uint8_t x732 = 5U;
int64_t x740 = -2521LL;
volatile uint64_t x742 = 73LLU;
int16_t x743 = INT16_MAX;
int32_t t185 = -7312494;
static uint16_t x747 = 839U;
int8_t x752 = -1;
int16_t x756 = 497;
volatile int32_t t188 = 101643714;
static volatile uint64_t t190 = 4981705774855LLU;
int32_t x765 = INT32_MIN;
uint32_t x766 = 43813U;
int32_t t191 = 105329119;
int32_t t193 = 15396;
int64_t x778 = INT64_MIN;
int8_t x783 = -35;
volatile int32_t t196 = 14902;
int8_t x789 = INT8_MAX;
uint16_t x796 = UINT16_MAX;
int32_t t198 = 4;


void f0(void) {
    	int8_t x2 = -1;
	static int32_t t0 = -9448;

    t0 = ((x1==(x2^x3))|x4);

    if (t0 != 11) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = 1;
	uint64_t x6 = UINT64_MAX;
	int16_t x8 = -1954;

    t1 = ((x5==(x6^x7))|x8);

    if (t1 != -1954) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x10 = 764341LLU;
	int64_t x11 = INT64_MIN;
	int32_t t2 = -540;

    t2 = ((x9==(x10^x11))|x12);

    if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 906446U;
	int8_t x15 = INT8_MIN;
	uint32_t x16 = 1U;
	uint32_t t3 = 928746U;

    t3 = ((x13==(x14^x15))|x16);

    if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t4 = UINT64_MAX;

    t4 = ((x17==(x18^x19))|x20);

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MAX;
	uint8_t x22 = 4U;
	int64_t x23 = INT64_MIN;
	volatile int32_t t5 = 70772;

    t5 = ((x21==(x22^x23))|x24);

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = -2;
	uint32_t x26 = 36254923U;
	static volatile int16_t x28 = -1;
	static volatile int32_t t6 = -8;

    t6 = ((x25==(x26^x27))|x28);

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	volatile int8_t x30 = INT8_MIN;
	uint64_t x31 = 8143004109496LLU;

    t7 = ((x29==(x30^x31))|x32);

    if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = INT8_MAX;
	volatile int16_t x35 = INT16_MIN;
	static uint32_t x36 = UINT32_MAX;

    t8 = ((x33==(x34^x35))|x36);

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = UINT8_MAX;
	uint16_t x38 = 9U;
	int32_t x40 = INT32_MIN;
	int32_t t9 = INT32_MIN;

    t9 = ((x37==(x38^x39))|x40);

    if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 235U;
	int8_t x42 = INT8_MAX;
	volatile int64_t x43 = INT64_MAX;
	uint32_t x44 = UINT32_MAX;
	static volatile uint32_t t10 = UINT32_MAX;

    t10 = ((x41==(x42^x43))|x44);

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 3485U;
	uint64_t x46 = 8LLU;
	int32_t x47 = -1;
	int64_t t11 = INT64_MAX;

    t11 = ((x45==(x46^x47))|x48);

    if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x49 = 1U;
	static uint64_t x50 = 1430860LLU;
	int8_t x52 = -1;
	int32_t t12 = 14880;

    t12 = ((x49==(x50^x51))|x52);

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = -7901;
	static int8_t x54 = -19;
	int8_t x55 = -1;
	int64_t x56 = -268019LL;
	int64_t t13 = -3892LL;

    t13 = ((x53==(x54^x55))|x56);

    if (t13 != -268019LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = UINT32_MAX;
	int32_t x58 = INT32_MIN;
	static volatile int32_t x59 = INT32_MAX;
	int32_t t14 = INT32_MAX;

    t14 = ((x57==(x58^x59))|x60);

    if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x62 = -56;
	int64_t x63 = 439LL;
	int8_t x64 = INT8_MIN;
	int32_t t15 = 4081;

    t15 = ((x61==(x62^x63))|x64);

    if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	int32_t x66 = -1;
	int16_t x68 = -1;

    t16 = ((x65==(x66^x67))|x68);

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x69 = 2;
	static uint16_t x70 = 221U;
	int64_t x72 = INT64_MIN;
	int64_t t17 = INT64_MIN;

    t17 = ((x69==(x70^x71))|x72);

    if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x73 = -1LL;
	uint8_t x74 = 1U;
	uint32_t x75 = 214625654U;
	uint32_t x76 = 261216359U;

    t18 = ((x73==(x74^x75))|x76);

    if (t18 != 261216359U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x77 = 2U;
	static int16_t x78 = 1734;
	static int16_t x79 = INT16_MIN;
	int8_t x80 = -1;
	int32_t t19 = -4314;

    t19 = ((x77==(x78^x79))|x80);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x83 = -8866267560131LL;
	int8_t x84 = INT8_MAX;
	int32_t t20 = -618577072;

    t20 = ((x81==(x82^x83))|x84);

    if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x88 = 10U;
	uint32_t t21 = 523622944U;

    t21 = ((x85==(x86^x87))|x88);

    if (t21 != 10U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = INT64_MIN;
	uint16_t x90 = UINT16_MAX;
	volatile int16_t x92 = -277;
	volatile int32_t t22 = 53257;

    t22 = ((x89==(x90^x91))|x92);

    if (t22 != -277) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 1U;
	static volatile uint64_t x94 = 119984223612033LLU;
	volatile uint64_t x95 = UINT64_MAX;
	volatile uint16_t x96 = 4U;
	volatile int32_t t23 = 25;

    t23 = ((x93==(x94^x95))|x96);

    if (t23 != 4) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MIN;
	int64_t x99 = -1LL;

    t24 = ((x97==(x98^x99))|x100);

    if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x101 = INT32_MIN;
	static int8_t x103 = INT8_MIN;
	volatile int8_t x104 = INT8_MAX;

    t25 = ((x101==(x102^x103))|x104);

    if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 136307720882414LLU;
	uint8_t x106 = 0U;
	int16_t x107 = -42;
	static uint8_t x108 = UINT8_MAX;
	int32_t t26 = -1420;

    t26 = ((x105==(x106^x107))|x108);

    if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x109 = -1;
	int16_t x111 = 1244;
	int64_t x112 = 0LL;
	volatile int64_t t27 = -8412LL;

    t27 = ((x109==(x110^x111))|x112);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	int32_t x114 = 22511453;
	static int64_t x115 = 3LL;
	static uint64_t x116 = UINT64_MAX;
	static volatile uint64_t t28 = UINT64_MAX;

    t28 = ((x113==(x114^x115))|x116);

    if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = 0;
	int16_t x119 = INT16_MAX;
	uint64_t x120 = UINT64_MAX;

    t29 = ((x117==(x118^x119))|x120);

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -928391284680692371LL;
	static uint16_t x122 = 2626U;
	int64_t x123 = INT64_MAX;
	volatile int16_t x124 = INT16_MAX;
	int32_t t30 = -26;

    t30 = ((x121==(x122^x123))|x124);

    if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x126 = 3464798432616LLU;
	uint64_t x127 = UINT64_MAX;
	volatile uint16_t x128 = 4197U;
	static volatile int32_t t31 = 12917267;

    t31 = ((x125==(x126^x127))|x128);

    if (t31 != 4197) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -1;
	uint64_t x130 = UINT64_MAX;
	static uint32_t x131 = UINT32_MAX;
	uint8_t x132 = 0U;
	volatile int32_t t32 = -11310;

    t32 = ((x129==(x130^x131))|x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x134 = 1;
	volatile int32_t x135 = INT32_MIN;

    t33 = ((x133==(x134^x135))|x136);

    if (t33 != 436478602677001537LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = 52;
	uint16_t x139 = UINT16_MAX;
	int32_t x140 = -1;
	volatile int32_t t34 = -4595;

    t34 = ((x137==(x138^x139))|x140);

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = 3U;
	int8_t x142 = -1;
	int16_t x143 = -1;
	uint32_t x144 = 4423537U;

    t35 = ((x141==(x142^x143))|x144);

    if (t35 != 4423537U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x145 = -1010492129;
	int32_t x147 = INT32_MIN;
	uint64_t x148 = 51449595644LLU;
	uint64_t t36 = 41719921110LLU;

    t36 = ((x145==(x146^x147))|x148);

    if (t36 != 51449595644LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MAX;
	volatile int64_t x150 = INT64_MIN;
	static volatile uint32_t x151 = UINT32_MAX;
	int32_t x152 = -1;
	int32_t t37 = 3117600;

    t37 = ((x149==(x150^x151))|x152);

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = 8274004LLU;
	int32_t x154 = -1;
	volatile uint16_t x155 = UINT16_MAX;
	int16_t x156 = -1;
	int32_t t38 = -1;

    t38 = ((x153==(x154^x155))|x156);

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	static volatile int32_t x158 = -1;
	uint64_t x159 = 598048LLU;
	volatile int32_t t39 = -252;

    t39 = ((x157==(x158^x159))|x160);

    if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x162 = 12951429U;
	int16_t x163 = INT16_MIN;
	int32_t x164 = INT32_MAX;
	int32_t t40 = INT32_MAX;

    t40 = ((x161==(x162^x163))|x164);

    if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	int16_t x166 = -5;
	int32_t x167 = INT32_MIN;
	uint8_t x168 = 67U;
	volatile int32_t t41 = -339;

    t41 = ((x165==(x166^x167))|x168);

    if (t41 != 67) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 365U;
	int32_t x170 = -1;
	int32_t x171 = -1;
	volatile uint8_t x172 = 12U;
	static volatile int32_t t42 = 89;

    t42 = ((x169==(x170^x171))|x172);

    if (t42 != 12) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 30389463U;
	uint64_t x174 = 147743697LLU;
	uint16_t x176 = 1U;
	static int32_t t43 = -460252;

    t43 = ((x173==(x174^x175))|x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = UINT8_MAX;
	uint16_t x178 = 17U;
	volatile int8_t x180 = -1;
	int32_t t44 = 5573;

    t44 = ((x177==(x178^x179))|x180);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x182 = 1457918449446LL;
	int16_t x183 = INT16_MAX;
	int64_t x184 = INT64_MIN;
	volatile int64_t t45 = INT64_MIN;

    t45 = ((x181==(x182^x183))|x184);

    if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = INT64_MIN;
	int8_t x186 = 7;
	uint64_t x187 = 634265734LLU;
	uint32_t t46 = 173U;

    t46 = ((x185==(x186^x187))|x188);

    if (t46 != 19890815U) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x191 = 3700;
	int32_t x192 = 107;
	static volatile int32_t t47 = 123;

    t47 = ((x189==(x190^x191))|x192);

    if (t47 != 107) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = INT32_MAX;
	int32_t x194 = -1;
	int8_t x195 = 23;
	uint64_t x196 = UINT64_MAX;
	volatile uint64_t t48 = UINT64_MAX;

    t48 = ((x193==(x194^x195))|x196);

    if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x197 = -1;
	uint32_t x198 = 82964U;
	static uint32_t x199 = 2561055U;
	int16_t x200 = -1;

    t49 = ((x197==(x198^x199))|x200);

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	uint32_t x202 = 415U;
	uint8_t x203 = 12U;
	uint64_t x204 = 300521LLU;
	uint64_t t50 = 171156LLU;

    t50 = ((x201==(x202^x203))|x204);

    if (t50 != 300521LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x205 = -1;
	int32_t x206 = -1;
	volatile int8_t x207 = -1;
	int32_t x208 = INT32_MIN;
	int32_t t51 = INT32_MIN;

    t51 = ((x205==(x206^x207))|x208);

    if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x210 = 15U;
	volatile uint16_t x211 = 129U;
	volatile uint32_t t52 = 28U;

    t52 = ((x209==(x210^x211))|x212);

    if (t52 != 773207271U) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MIN;
	volatile int64_t x214 = -1634814287213LL;
	volatile uint32_t x215 = 129414670U;
	uint8_t x216 = 0U;
	int32_t t53 = -21;

    t53 = ((x213==(x214^x215))|x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -1LL;
	static int64_t x218 = -1LL;
	int64_t x220 = INT64_MIN;
	int64_t t54 = INT64_MIN;

    t54 = ((x217==(x218^x219))|x220);

    if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = 224;
	volatile int64_t x222 = INT64_MIN;
	int16_t x223 = 6;
	volatile int64_t t55 = INT64_MAX;

    t55 = ((x221==(x222^x223))|x224);

    if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint8_t x226 = 9U;
	int32_t x227 = -1;
	int8_t x228 = INT8_MAX;
	int32_t t56 = 83500042;

    t56 = ((x225==(x226^x227))|x228);

    if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x229 = -1;
	int16_t x230 = -1;
	int8_t x231 = 1;
	volatile int64_t x232 = INT64_MIN;

    t57 = ((x229==(x230^x231))|x232);

    if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MIN;
	int16_t x234 = 916;
	int16_t x235 = 11;
	volatile int64_t x236 = 1LL;
	int64_t t58 = 734180LL;

    t58 = ((x233==(x234^x235))|x236);

    if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x238 = INT8_MAX;
	int8_t x239 = -1;
	volatile int64_t t59 = -238131186276153237LL;

    t59 = ((x237==(x238^x239))|x240);

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = -1;
	int32_t x242 = INT32_MIN;
	int64_t x243 = INT64_MIN;
	int32_t x244 = INT32_MAX;
	static int32_t t60 = INT32_MAX;

    t60 = ((x241==(x242^x243))|x244);

    if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = UINT32_MAX;
	int32_t x247 = INT32_MIN;
	int64_t x248 = -2256119LL;
	int64_t t61 = 2332396542175LL;

    t61 = ((x245==(x246^x247))|x248);

    if (t61 != -2256119LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x250 = -861;
	int16_t x251 = 9;
	uint64_t x252 = UINT64_MAX;
	uint64_t t62 = UINT64_MAX;

    t62 = ((x249==(x250^x251))|x252);

    if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MAX;
	int64_t x254 = -80363526643392LL;
	int16_t x256 = 234;
	int32_t t63 = -1;

    t63 = ((x253==(x254^x255))|x256);

    if (t63 != 234) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x258 = 30010U;
	volatile int64_t x259 = INT64_MIN;
	volatile uint64_t t64 = 546780904636571689LLU;

    t64 = ((x257==(x258^x259))|x260);

    if (t64 != 1083636973028593333LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x261 = INT64_MIN;
	uint32_t x262 = 595201U;
	int64_t x263 = -7961843259756209LL;
	uint8_t x264 = 7U;
	volatile int32_t t65 = 44689;

    t65 = ((x261==(x262^x263))|x264);

    if (t65 != 7) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	int32_t x266 = -17;
	static int32_t x268 = -32;
	int32_t t66 = -628;

    t66 = ((x265==(x266^x267))|x268);

    if (t66 != -32) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = 1661U;
	uint16_t x270 = 15100U;
	int8_t x271 = INT8_MAX;

    t67 = ((x269==(x270^x271))|x272);

    if (t67 != 12344162323292823LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MIN;
	int64_t x274 = -1LL;
	static uint8_t x275 = 0U;
	int64_t x276 = INT64_MIN;
	int64_t t68 = INT64_MIN;

    t68 = ((x273==(x274^x275))|x276);

    if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x277 = INT8_MIN;
	static uint32_t x278 = 6U;
	int64_t t69 = INT64_MAX;

    t69 = ((x277==(x278^x279))|x280);

    if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x282 = -9;
	int8_t x283 = 1;
	int8_t x284 = INT8_MAX;
	int32_t t70 = -19374;

    t70 = ((x281==(x282^x283))|x284);

    if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MAX;
	static uint64_t x286 = 2873692681583LLU;
	volatile int32_t x287 = INT32_MIN;
	uint8_t x288 = 5U;
	volatile int32_t t71 = 41;

    t71 = ((x285==(x286^x287))|x288);

    if (t71 != 5) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x289 = UINT64_MAX;
	int16_t x291 = INT16_MAX;
	int32_t t72 = -191618;

    t72 = ((x289==(x290^x291))|x292);

    if (t72 != -113110) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = 18020325596426971LL;
	static uint64_t x294 = UINT64_MAX;
	int8_t x295 = -1;
	int8_t x296 = INT8_MIN;
	static int32_t t73 = 181714339;

    t73 = ((x293==(x294^x295))|x296);

    if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x298 = INT16_MAX;
	uint64_t x299 = 29803215091871640LLU;
	volatile uint16_t x300 = 112U;
	volatile int32_t t74 = -4200955;

    t74 = ((x297==(x298^x299))|x300);

    if (t74 != 112) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x303 = -24;
	int64_t t75 = INT64_MIN;

    t75 = ((x301==(x302^x303))|x304);

    if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x307 = INT64_MIN;
	static volatile int8_t x308 = -1;

    t76 = ((x305==(x306^x307))|x308);

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = 482;
	int16_t x310 = -8548;
	int64_t x311 = INT64_MIN;
	int16_t x312 = INT16_MIN;
	int32_t t77 = -460833402;

    t77 = ((x309==(x310^x311))|x312);

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = -1;
	int32_t x314 = INT32_MIN;
	int64_t x315 = INT64_MIN;
	static int8_t x316 = INT8_MIN;
	volatile int32_t t78 = -2088458;

    t78 = ((x313==(x314^x315))|x316);

    if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x317 = 342551922926563LLU;
	static uint16_t x318 = 7U;
	int8_t x319 = INT8_MAX;
	volatile int16_t x320 = INT16_MIN;
	volatile int32_t t79 = -3;

    t79 = ((x317==(x318^x319))|x320);

    if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x322 = UINT16_MAX;
	static uint32_t x323 = 924359286U;
	static int32_t t80 = 49389206;

    t80 = ((x321==(x322^x323))|x324);

    if (t80 != 13) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = INT8_MIN;
	static int16_t x326 = -1;
	static int64_t x327 = INT64_MIN;
	static int32_t x328 = 91423852;
	volatile int32_t t81 = 28290;

    t81 = ((x325==(x326^x327))|x328);

    if (t81 != 91423852) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = -1;
	volatile int64_t x332 = INT64_MIN;
	static int64_t t82 = INT64_MIN;

    t82 = ((x329==(x330^x331))|x332);

    if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = UINT8_MAX;
	volatile int16_t x336 = INT16_MAX;

    t83 = ((x333==(x334^x335))|x336);

    if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MIN;
	volatile int32_t x338 = INT32_MIN;
	uint64_t x339 = 20LLU;
	int32_t t84 = -2;

    t84 = ((x337==(x338^x339))|x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x341 = INT8_MIN;
	int16_t x342 = -1;
	int8_t x343 = -2;
	volatile uint32_t t85 = UINT32_MAX;

    t85 = ((x341==(x342^x343))|x344);

    if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = -10;
	uint8_t x346 = 10U;
	static volatile uint16_t x347 = UINT16_MAX;
	int16_t x348 = INT16_MAX;
	volatile int32_t t86 = 44;

    t86 = ((x345==(x346^x347))|x348);

    if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x350 = 1;
	int64_t x351 = -11701LL;
	uint32_t x352 = UINT32_MAX;

    t87 = ((x349==(x350^x351))|x352);

    if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = UINT16_MAX;
	int32_t x354 = INT32_MIN;
	static int64_t x355 = INT64_MIN;
	uint32_t x356 = 6813U;
	static uint32_t t88 = 61681527U;

    t88 = ((x353==(x354^x355))|x356);

    if (t88 != 6813U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = UINT32_MAX;
	uint32_t x358 = 7595957U;
	volatile int8_t x359 = -1;

    t89 = ((x357==(x358^x359))|x360);

    if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = -1LL;
	uint16_t x363 = 572U;
	int32_t x364 = 128;
	int32_t t90 = 2;

    t90 = ((x361==(x362^x363))|x364);

    if (t90 != 128) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = 977568690;
	volatile uint32_t x368 = UINT32_MAX;
	static volatile uint32_t t91 = UINT32_MAX;

    t91 = ((x365==(x366^x367))|x368);

    if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x370 = -14831;
	static uint16_t x371 = UINT16_MAX;
	static int32_t t92 = -22962;

    t92 = ((x369==(x370^x371))|x372);

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = 4U;
	volatile int64_t x376 = INT64_MAX;
	volatile int64_t t93 = INT64_MAX;

    t93 = ((x373==(x374^x375))|x376);

    if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x378 = 1218790371747LLU;
	int32_t t94 = -301196016;

    t94 = ((x377==(x378^x379))|x380);

    if (t94 != 19) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x381 = -5847762068LL;
	int8_t x382 = -1;
	int16_t x383 = -758;
	volatile uint32_t t95 = UINT32_MAX;

    t95 = ((x381==(x382^x383))|x384);

    if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = UINT64_MAX;
	static int32_t x386 = -1;
	uint8_t x388 = 21U;

    t96 = ((x385==(x386^x387))|x388);

    if (t96 != 21) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = -1793LL;
	static uint32_t x391 = 388340380U;
	int32_t x392 = -1;
	int32_t t97 = -2853291;

    t97 = ((x389==(x390^x391))|x392);

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = UINT8_MAX;
	uint32_t x394 = UINT32_MAX;
	uint32_t x395 = 1240U;
	volatile int16_t x396 = -9;
	volatile int32_t t98 = 427;

    t98 = ((x393==(x394^x395))|x396);

    if (t98 != -9) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x397 = 1647411752U;
	int64_t x398 = -1LL;
	uint64_t x399 = 0LLU;
	static uint64_t x400 = 12697LLU;
	uint64_t t99 = 5LLU;

    t99 = ((x397==(x398^x399))|x400);

    if (t99 != 12697LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MIN;
	volatile int32_t x403 = INT32_MIN;

    t100 = ((x401==(x402^x403))|x404);

    if (t100 != 14917LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x405 = -1;
	volatile int64_t x406 = INT64_MIN;
	volatile int16_t x407 = -106;
	static int64_t x408 = 1LL;
	int64_t t101 = -6625928481917LL;

    t101 = ((x405==(x406^x407))|x408);

    if (t101 != 1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x409 = 1U;
	volatile int16_t x410 = INT16_MIN;
	volatile int64_t x411 = -1LL;
	uint8_t x412 = UINT8_MAX;
	int32_t t102 = -25;

    t102 = ((x409==(x410^x411))|x412);

    if (t102 != 255) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x413 = UINT8_MAX;
	int16_t x414 = -1;
	uint64_t x416 = 2896613589736508LLU;
	volatile uint64_t t103 = 1059160092669653LLU;

    t103 = ((x413==(x414^x415))|x416);

    if (t103 != 2896613589736508LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MIN;
	static uint16_t x418 = 4291U;
	static volatile int8_t x419 = INT8_MIN;
	int16_t x420 = INT16_MIN;

    t104 = ((x417==(x418^x419))|x420);

    if (t104 != -32768) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x421 = 0;
	int8_t x423 = -1;
	volatile uint16_t x424 = 27959U;
	volatile int32_t t105 = 428286;

    t105 = ((x421==(x422^x423))|x424);

    if (t105 != 27959) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = 8283210LL;
	uint8_t x426 = 0U;
	volatile int64_t x427 = -15744LL;
	uint16_t x428 = 3U;
	static int32_t t106 = 799;

    t106 = ((x425==(x426^x427))|x428);

    if (t106 != 3) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x429 = UINT8_MAX;
	int64_t x430 = INT64_MIN;
	static uint32_t x431 = 57U;
	volatile int32_t t107 = 101448295;

    t107 = ((x429==(x430^x431))|x432);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = 589635260968626867LLU;
	static volatile int64_t x434 = 6954272052LL;
	int8_t x435 = -2;
	static uint64_t x436 = UINT64_MAX;
	uint64_t t108 = UINT64_MAX;

    t108 = ((x433==(x434^x435))|x436);

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x438 = 1;
	volatile int32_t x440 = 14;

    t109 = ((x437==(x438^x439))|x440);

    if (t109 != 14) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x442 = 255;
	int16_t x444 = INT16_MAX;
	int32_t t110 = 38957313;

    t110 = ((x441==(x442^x443))|x444);

    if (t110 != 32767) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MAX;
	int8_t x446 = INT8_MIN;
	int32_t x448 = -92057845;
	int32_t t111 = -1;

    t111 = ((x445==(x446^x447))|x448);

    if (t111 != -92057845) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 36483777U;
	int16_t x450 = 7416;
	int32_t x451 = INT32_MAX;
	int32_t x452 = INT32_MIN;
	volatile int32_t t112 = INT32_MIN;

    t112 = ((x449==(x450^x451))|x452);

    if (t112 != INT32_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MIN;
	static int16_t x454 = INT16_MIN;
	uint64_t x455 = UINT64_MAX;

    t113 = ((x453==(x454^x455))|x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = -1;
	static int8_t x458 = 1;
	volatile uint16_t x459 = 17U;
	int16_t x460 = 11025;
	int32_t t114 = -94;

    t114 = ((x457==(x458^x459))|x460);

    if (t114 != 11025) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x463 = INT8_MIN;
	int32_t x464 = -11;
	int32_t t115 = -148;

    t115 = ((x461==(x462^x463))|x464);

    if (t115 != -11) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = INT16_MIN;
	volatile int8_t x466 = -1;
	int16_t x468 = INT16_MAX;
	int32_t t116 = -305882;

    t116 = ((x465==(x466^x467))|x468);

    if (t116 != 32767) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x469 = -12176416;
	int8_t x470 = -1;
	int64_t x471 = -189LL;
	volatile int64_t x472 = INT64_MIN;
	int64_t t117 = INT64_MIN;

    t117 = ((x469==(x470^x471))|x472);

    if (t117 != INT64_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x473 = 16388208;
	static int32_t x474 = 34680;
	volatile int64_t x475 = INT64_MAX;
	int32_t t118 = 18;

    t118 = ((x473==(x474^x475))|x476);

    if (t118 != 4) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -1LL;
	static uint32_t x478 = 47U;
	uint32_t x479 = 89396U;
	uint8_t x480 = 15U;

    t119 = ((x477==(x478^x479))|x480);

    if (t119 != 15) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x481 = INT64_MIN;
	static uint64_t x482 = 65757LLU;
	int16_t x483 = INT16_MIN;
	static volatile int8_t x484 = 1;

    t120 = ((x481==(x482^x483))|x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MAX;
	int64_t x487 = INT64_MAX;
	int16_t x488 = INT16_MIN;

    t121 = ((x485==(x486^x487))|x488);

    if (t121 != -32768) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x490 = 12U;
	volatile int64_t x491 = INT64_MAX;
	int8_t x492 = INT8_MAX;
	volatile int32_t t122 = -2;

    t122 = ((x489==(x490^x491))|x492);

    if (t122 != 127) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = -47;
	int8_t x494 = -1;
	uint8_t x495 = 1U;
	uint8_t x496 = 1U;
	volatile int32_t t123 = -392;

    t123 = ((x493==(x494^x495))|x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MIN;
	uint32_t x498 = 100U;
	int32_t x499 = -9;
	int64_t x500 = -701031634114LL;
	volatile int64_t t124 = 510717294496LL;

    t124 = ((x497==(x498^x499))|x500);

    if (t124 != -701031634114LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x501 = -1;
	uint32_t x502 = 19949476U;
	static int32_t x503 = INT32_MIN;
	volatile int16_t x504 = 6;
	volatile int32_t t125 = -11765;

    t125 = ((x501==(x502^x503))|x504);

    if (t125 != 6) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint8_t x505 = UINT8_MAX;
	int8_t x506 = INT8_MIN;
	int16_t x507 = INT16_MIN;
	int64_t x508 = 2725012LL;
	static volatile int64_t t126 = 679928875564350LL;

    t126 = ((x505==(x506^x507))|x508);

    if (t126 != 2725012LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x509 = 70421051U;
	int8_t x510 = INT8_MIN;
	int32_t t127 = -226;

    t127 = ((x509==(x510^x511))|x512);

    if (t127 != 165) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = -660618;
	uint16_t x514 = 9U;
	int8_t x515 = INT8_MIN;
	int64_t x516 = INT64_MAX;
	volatile int64_t t128 = INT64_MAX;

    t128 = ((x513==(x514^x515))|x516);

    if (t128 != INT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	static int64_t x518 = INT64_MAX;
	static uint32_t x519 = UINT32_MAX;
	int32_t t129 = 5910524;

    t129 = ((x517==(x518^x519))|x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = -1;
	uint16_t x522 = UINT16_MAX;
	static int64_t x523 = -1LL;
	int8_t x524 = INT8_MIN;
	static int32_t t130 = -4;

    t130 = ((x521==(x522^x523))|x524);

    if (t130 != -128) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = -5385;
	volatile int64_t x527 = -1LL;
	volatile int64_t x528 = -655623861593862096LL;
	volatile int64_t t131 = 621761237LL;

    t131 = ((x525==(x526^x527))|x528);

    if (t131 != -655623861593862096LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x529 = 1U;
	uint64_t x530 = 2LLU;
	uint8_t x531 = 4U;
	volatile int32_t x532 = -1;
	int32_t t132 = 1633915;

    t132 = ((x529==(x530^x531))|x532);

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = 15960574LLU;
	volatile uint8_t x535 = 8U;
	int64_t x536 = 5138LL;
	int64_t t133 = -16684506LL;

    t133 = ((x533==(x534^x535))|x536);

    if (t133 != 5138LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x537 = UINT8_MAX;
	uint64_t x538 = 2348LLU;
	static uint64_t x539 = UINT64_MAX;
	int8_t x540 = -27;
	static int32_t t134 = 13;

    t134 = ((x537==(x538^x539))|x540);

    if (t134 != -27) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x541 = -272LL;
	volatile int64_t x542 = INT64_MAX;
	static int32_t t135 = -26207118;

    t135 = ((x541==(x542^x543))|x544);

    if (t135 != 32767) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x545 = INT16_MIN;
	int16_t x546 = INT16_MAX;
	int16_t x547 = INT16_MIN;
	int16_t x548 = -637;
	volatile int32_t t136 = -164;

    t136 = ((x545==(x546^x547))|x548);

    if (t136 != -637) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MIN;
	volatile uint32_t x551 = 112U;
	volatile int32_t x552 = INT32_MAX;
	int32_t t137 = INT32_MAX;

    t137 = ((x549==(x550^x551))|x552);

    if (t137 != INT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x553 = UINT8_MAX;
	volatile int8_t x554 = 0;
	int64_t x555 = INT64_MIN;
	static int16_t x556 = INT16_MIN;
	volatile int32_t t138 = 4;

    t138 = ((x553==(x554^x555))|x556);

    if (t138 != -32768) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x560 = UINT32_MAX;

    t139 = ((x557==(x558^x559))|x560);

    if (t139 != UINT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = 569812U;
	static uint64_t x562 = 3754144510291LLU;
	uint32_t x563 = UINT32_MAX;
	int8_t x564 = -3;
	static int32_t t140 = -86587;

    t140 = ((x561==(x562^x563))|x564);

    if (t140 != -3) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x565 = INT64_MIN;
	uint64_t x566 = 31LLU;
	int64_t x567 = INT64_MIN;
	static int64_t x568 = -20210846726LL;
	volatile int64_t t141 = -23785412990LL;

    t141 = ((x565==(x566^x567))|x568);

    if (t141 != -20210846726LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint32_t x569 = UINT32_MAX;
	int16_t x570 = INT16_MIN;
	int32_t x572 = INT32_MIN;
	static volatile int32_t t142 = INT32_MIN;

    t142 = ((x569==(x570^x571))|x572);

    if (t142 != INT32_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	int32_t x575 = 81;
	static int32_t t143 = -2;

    t143 = ((x573==(x574^x575))|x576);

    if (t143 != -1032) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = 54U;
	uint16_t x578 = 0U;
	volatile uint8_t x579 = 9U;
	int32_t t144 = -3;

    t144 = ((x577==(x578^x579))|x580);

    if (t144 != 255) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x582 = -1;
	uint16_t x583 = 226U;
	int16_t x584 = -4;
	int32_t t145 = 165193;

    t145 = ((x581==(x582^x583))|x584);

    if (t145 != -4) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x585 = 1U;
	static volatile int16_t x586 = -593;
	int16_t x588 = INT16_MAX;
	volatile int32_t t146 = 7;

    t146 = ((x585==(x586^x587))|x588);

    if (t146 != 32767) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x589 = INT8_MIN;
	static uint64_t x591 = 12416152LLU;
	int64_t x592 = -1LL;
	int64_t t147 = 14LL;

    t147 = ((x589==(x590^x591))|x592);

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint64_t x593 = UINT64_MAX;
	volatile uint16_t x594 = 114U;
	uint32_t x595 = 120133585U;
	static int64_t x596 = 950876LL;
	int64_t t148 = 224012244759LL;

    t148 = ((x593==(x594^x595))|x596);

    if (t148 != 950876LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = UINT8_MAX;
	static int16_t x598 = -23;
	static uint8_t x599 = 34U;
	static int8_t x600 = -1;
	int32_t t149 = 2;

    t149 = ((x597==(x598^x599))|x600);

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x601 = 2LL;
	volatile int32_t x603 = INT32_MAX;
	int16_t x604 = -1;
	volatile int32_t t150 = -3;

    t150 = ((x601==(x602^x603))|x604);

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x607 = 389U;
	int32_t x608 = INT32_MIN;
	volatile int32_t t151 = INT32_MIN;

    t151 = ((x605==(x606^x607))|x608);

    if (t151 != INT32_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = 7U;
	static int64_t x610 = -1LL;
	int8_t x611 = 1;
	volatile uint64_t x612 = UINT64_MAX;
	static volatile uint64_t t152 = UINT64_MAX;

    t152 = ((x609==(x610^x611))|x612);

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = 7306698304666452LL;
	int32_t x614 = 391681;
	int16_t x615 = INT16_MIN;
	int16_t x616 = INT16_MIN;
	int32_t t153 = 27314;

    t153 = ((x613==(x614^x615))|x616);

    if (t153 != -32768) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = 1960251556811609800LLU;
	int8_t x618 = 1;
	static volatile int32_t x620 = INT32_MIN;

    t154 = ((x617==(x618^x619))|x620);

    if (t154 != INT32_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = -6LL;
	static uint8_t x622 = 8U;
	static uint32_t x623 = 528U;
	int64_t x624 = INT64_MIN;
	volatile int64_t t155 = INT64_MIN;

    t155 = ((x621==(x622^x623))|x624);

    if (t155 != INT64_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int64_t x625 = INT64_MIN;
	volatile int32_t t156 = -1;

    t156 = ((x625==(x626^x627))|x628);

    if (t156 != 127) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x629 = INT16_MIN;
	volatile uint16_t x631 = 56U;
	int8_t x632 = -1;
	static int32_t t157 = 224;

    t157 = ((x629==(x630^x631))|x632);

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x635 = INT8_MAX;
	static int16_t x636 = INT16_MIN;
	volatile int32_t t158 = 27469542;

    t158 = ((x633==(x634^x635))|x636);

    if (t158 != -32768) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x637 = INT64_MAX;
	int16_t x639 = INT16_MAX;
	int32_t x640 = -1;
	volatile int32_t t159 = -88620314;

    t159 = ((x637==(x638^x639))|x640);

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x643 = 4379U;
	volatile int64_t x644 = 0LL;

    t160 = ((x641==(x642^x643))|x644);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x646 = 1U;
	static int32_t x648 = 6348795;

    t161 = ((x645==(x646^x647))|x648);

    if (t161 != 6348795) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x649 = 5;
	uint32_t x650 = 2062402U;
	int32_t t162 = 4867;

    t162 = ((x649==(x650^x651))|x652);

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x653 = 33139868;
	int64_t x654 = INT64_MAX;
	uint16_t x655 = UINT16_MAX;
	int64_t x656 = 3209738673243844553LL;
	int64_t t163 = 903768789442909LL;

    t163 = ((x653==(x654^x655))|x656);

    if (t163 != 3209738673243844553LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = -1;
	int64_t x659 = INT64_MIN;
	volatile int32_t x660 = INT32_MIN;
	int32_t t164 = INT32_MIN;

    t164 = ((x657==(x658^x659))|x660);

    if (t164 != INT32_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x661 = 22073918002LLU;
	int64_t x662 = 371LL;
	static int16_t x663 = INT16_MIN;
	volatile int32_t x664 = -51332;
	int32_t t165 = 7444;

    t165 = ((x661==(x662^x663))|x664);

    if (t165 != -51332) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = UINT32_MAX;
	volatile uint32_t x666 = 28194646U;

    t166 = ((x665==(x666^x667))|x668);

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x670 = UINT16_MAX;
	int16_t x671 = -245;
	volatile uint32_t x672 = 646U;
	uint32_t t167 = 121145119U;

    t167 = ((x669==(x670^x671))|x672);

    if (t167 != 646U) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	uint16_t x674 = UINT16_MAX;
	uint8_t x675 = UINT8_MAX;
	int8_t x676 = 14;
	int32_t t168 = 810647452;

    t168 = ((x673==(x674^x675))|x676);

    if (t168 != 14) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MIN;
	int64_t x678 = INT64_MIN;
	static volatile int16_t x679 = -2966;
	int16_t x680 = 0;
	volatile int32_t t169 = -145842347;

    t169 = ((x677==(x678^x679))|x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x681 = -1LL;
	uint16_t x682 = 0U;
	uint64_t x683 = 216LLU;
	volatile int16_t x684 = INT16_MAX;
	volatile int32_t t170 = 10994091;

    t170 = ((x681==(x682^x683))|x684);

    if (t170 != 32767) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x685 = UINT32_MAX;
	int8_t x686 = -1;
	uint16_t x687 = 40U;
	volatile int32_t t171 = INT32_MIN;

    t171 = ((x685==(x686^x687))|x688);

    if (t171 != INT32_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = -1;
	volatile int64_t x690 = 548740932199288794LL;
	uint16_t x691 = UINT16_MAX;
	uint32_t x692 = 706513U;
	volatile uint32_t t172 = 31347180U;

    t172 = ((x689==(x690^x691))|x692);

    if (t172 != 706513U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = UINT8_MAX;
	int8_t x694 = -1;
	int32_t x695 = -12399533;
	volatile int64_t x696 = INT64_MAX;
	volatile int64_t t173 = INT64_MAX;

    t173 = ((x693==(x694^x695))|x696);

    if (t173 != INT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = UINT64_MAX;
	uint8_t x698 = 2U;
	int8_t x699 = INT8_MIN;
	volatile int64_t x700 = INT64_MAX;
	int64_t t174 = INT64_MAX;

    t174 = ((x697==(x698^x699))|x700);

    if (t174 != INT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MAX;
	uint32_t x702 = 16578213U;
	uint32_t x703 = 159695U;
	int32_t x704 = 0;
	int32_t t175 = 32986750;

    t175 = ((x701==(x702^x703))|x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MAX;
	int8_t x706 = INT8_MAX;
	int8_t x707 = 1;
	int8_t x708 = 3;

    t176 = ((x705==(x706^x707))|x708);

    if (t176 != 3) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	static int32_t x711 = INT32_MIN;
	uint64_t x712 = 2567344465811929LLU;
	volatile uint64_t t177 = 5LLU;

    t177 = ((x709==(x710^x711))|x712);

    if (t177 != 2567344465811929LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x713 = INT64_MIN;
	int64_t x714 = INT64_MIN;
	static volatile uint8_t x715 = 52U;
	uint64_t x716 = UINT64_MAX;
	uint64_t t178 = UINT64_MAX;

    t178 = ((x713==(x714^x715))|x716);

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x718 = -1913;
	int8_t x720 = INT8_MAX;
	volatile int32_t t179 = 32802;

    t179 = ((x717==(x718^x719))|x720);

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 1129LLU;
	static volatile int8_t x722 = INT8_MIN;
	int64_t x723 = INT64_MIN;
	static int8_t x724 = INT8_MAX;
	volatile int32_t t180 = 8766;

    t180 = ((x721==(x722^x723))|x724);

    if (t180 != 127) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x725 = INT32_MIN;
	static uint64_t x727 = 3091699LLU;
	int32_t x728 = INT32_MIN;
	static int32_t t181 = INT32_MIN;

    t181 = ((x725==(x726^x727))|x728);

    if (t181 != INT32_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x729 = 6U;
	uint16_t x730 = 2U;
	volatile int32_t t182 = -227731;

    t182 = ((x729==(x730^x731))|x732);

    if (t182 != 5) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x733 = UINT16_MAX;
	uint8_t x734 = UINT8_MAX;
	uint64_t x735 = UINT64_MAX;
	uint16_t x736 = 6054U;
	int32_t t183 = -190;

    t183 = ((x733==(x734^x735))|x736);

    if (t183 != 6054) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MAX;
	static int16_t x738 = INT16_MAX;
	static int16_t x739 = INT16_MAX;
	volatile int64_t t184 = -288LL;

    t184 = ((x737==(x738^x739))|x740);

    if (t184 != -2521LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = 32079U;
	uint16_t x744 = 33U;

    t185 = ((x741==(x742^x743))|x744);

    if (t185 != 33) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = UINT8_MAX;
	static int16_t x746 = -1;
	int64_t x748 = INT64_MIN;
	volatile int64_t t186 = INT64_MIN;

    t186 = ((x745==(x746^x747))|x748);

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x749 = 15U;
	uint8_t x750 = UINT8_MAX;
	int64_t x751 = -1LL;
	static volatile int32_t t187 = 888;

    t187 = ((x749==(x750^x751))|x752);

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x753 = -1LL;
	int64_t x754 = INT64_MIN;
	uint64_t x755 = 60049702768171LLU;

    t188 = ((x753==(x754^x755))|x756);

    if (t188 != 497) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	volatile uint32_t x758 = 315256U;
	volatile int8_t x759 = -1;
	int64_t x760 = 187725296LL;
	int64_t t189 = 2LL;

    t189 = ((x757==(x758^x759))|x760);

    if (t189 != 187725296LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -1;
	int64_t x762 = -1LL;
	int32_t x763 = 45;
	uint64_t x764 = 0LLU;

    t190 = ((x761==(x762^x763))|x764);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x767 = -13811;
	uint8_t x768 = 0U;

    t191 = ((x765==(x766^x767))|x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = -1;
	volatile int8_t x770 = -1;
	int8_t x771 = INT8_MIN;
	volatile int32_t x772 = -1;
	int32_t t192 = -62;

    t192 = ((x769==(x770^x771))|x772);

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = -12414;
	uint8_t x774 = 0U;
	static int8_t x775 = INT8_MIN;
	int32_t x776 = 1;

    t193 = ((x773==(x774^x775))|x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = 22518U;
	uint16_t x779 = 20160U;
	int32_t x780 = INT32_MIN;
	volatile int32_t t194 = INT32_MIN;

    t194 = ((x777==(x778^x779))|x780);

    if (t194 != INT32_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x781 = -24286399488LL;
	int8_t x782 = INT8_MIN;
	int32_t x784 = 3030967;
	int32_t t195 = 65;

    t195 = ((x781==(x782^x783))|x784);

    if (t195 != 3030967) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	uint16_t x786 = 5U;
	int64_t x787 = -1LL;
	static int16_t x788 = INT16_MIN;

    t196 = ((x785==(x786^x787))|x788);

    if (t196 != -32768) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x790 = UINT32_MAX;
	int8_t x791 = 7;
	int16_t x792 = 0;
	volatile int32_t t197 = -1109;

    t197 = ((x789==(x790^x791))|x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MAX;
	int64_t x794 = INT64_MAX;
	uint8_t x795 = 31U;

    t198 = ((x793==(x794^x795))|x796);

    if (t198 != 65535) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = -34;
	int64_t x798 = INT64_MAX;
	int32_t x799 = INT32_MAX;
	static int32_t x800 = -1;
	static int32_t t199 = 12503826;

    t199 = ((x797==(x798^x799))|x800);

    if (t199 != -1) { NG(); } else { ; }
	
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


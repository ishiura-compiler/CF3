
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

int8_t x10 = INT8_MIN;
int32_t t2 = -10;
int32_t x15 = INT32_MIN;
uint8_t x18 = 12U;
int64_t x19 = INT64_MAX;
uint16_t x20 = 5476U;
static int16_t x22 = INT16_MAX;
int8_t x23 = -1;
volatile int32_t t5 = 2;
volatile int32_t t8 = -50431096;
int64_t x37 = INT64_MIN;
volatile int32_t t10 = 0;
uint32_t x48 = UINT32_MAX;
int32_t x52 = -1;
static int16_t x53 = -146;
volatile int64_t x55 = -231019997584170LL;
volatile int32_t t13 = 1;
volatile int32_t x58 = -1;
int32_t x62 = INT32_MIN;
static volatile int64_t t20 = 34242799204372970LL;
int32_t x86 = -11930182;
int16_t x89 = INT16_MAX;
volatile int64_t x96 = -3413751442LL;
static uint16_t x99 = 3688U;
int32_t t25 = 386;
uint16_t x106 = UINT16_MAX;
uint64_t x109 = 5760524699204LLU;
uint16_t x110 = UINT16_MAX;
int16_t x114 = INT16_MIN;
static volatile int32_t t29 = -20882974;
uint16_t x128 = UINT16_MAX;
uint16_t x130 = UINT16_MAX;
uint32_t x131 = 440U;
uint8_t x132 = 66U;
int32_t x136 = 1;
int32_t x159 = -592031;
static int32_t t39 = -67071752;
uint64_t x166 = UINT64_MAX;
static int16_t x170 = INT16_MAX;
static int32_t t42 = -162172091;
static int8_t x174 = 13;
int16_t x175 = INT16_MAX;
int32_t x176 = INT32_MIN;
uint8_t x177 = UINT8_MAX;
int8_t x192 = INT8_MIN;
int8_t x198 = -29;
static int32_t x202 = INT32_MAX;
volatile int32_t t50 = 97;
int32_t x214 = INT32_MIN;
volatile int32_t x217 = -1;
int32_t t55 = -59925;
int8_t x228 = INT8_MIN;
int8_t x230 = INT8_MAX;
volatile int32_t t57 = -6858;
uint64_t x236 = 1060818492996028LLU;
volatile int16_t x244 = -1;
static volatile int64_t x247 = -403511391266LL;
int64_t x248 = INT64_MIN;
int32_t x255 = -1;
uint8_t x258 = 1U;
int64_t x267 = 25782747586964878LL;
uint8_t x269 = UINT8_MAX;
int16_t x276 = -4;
int8_t x281 = INT8_MIN;
int8_t x285 = -1;
volatile int16_t x287 = INT16_MAX;
static uint64_t x288 = 188398595297174381LLU;
uint32_t x296 = UINT32_MAX;
static int32_t x300 = INT32_MAX;
int16_t x301 = INT16_MAX;
static int64_t x312 = INT64_MIN;
static volatile int8_t x319 = INT8_MIN;
volatile uint64_t t79 = 119735142217118511LLU;
static volatile int8_t x321 = INT8_MAX;
static int16_t x322 = -2190;
uint32_t x331 = 12642U;
uint16_t x333 = 318U;
static uint8_t x335 = 6U;
volatile int64_t t84 = -372125637688561LL;
volatile int64_t t85 = 1LL;
static volatile int32_t t86 = -6726093;
int8_t x355 = INT8_MIN;
volatile int32_t t88 = -4;
int8_t x362 = INT8_MIN;
volatile uint8_t x363 = UINT8_MAX;
static uint8_t x366 = 20U;
uint64_t x367 = UINT64_MAX;
int32_t x368 = INT32_MAX;
int64_t x370 = INT64_MIN;
int8_t x376 = -1;
volatile int32_t t93 = -4;
int32_t x378 = -1;
volatile int64_t x379 = 3008362552919269412LL;
volatile uint16_t x383 = UINT16_MAX;
int32_t t95 = 107389904;
uint64_t x387 = 13056717704LLU;
static uint8_t x388 = 0U;
uint64_t x391 = 384126LLU;
volatile int32_t t97 = -116204;
volatile uint8_t x395 = 0U;
int8_t x399 = -1;
int16_t x401 = -3452;
volatile int32_t x402 = -3;
static int8_t x404 = INT8_MIN;
int32_t t100 = 0;
int16_t x416 = 10063;
int8_t x421 = -1;
uint64_t x431 = 7549777569064LLU;
uint32_t x437 = 112663U;
static int64_t t109 = -7767005LL;
uint32_t x447 = 0U;
uint64_t t111 = 129LLU;
int64_t x453 = -14713LL;
int16_t x458 = 97;
volatile int32_t t115 = 87284055;
uint32_t x466 = 8U;
uint16_t x467 = UINT16_MAX;
uint64_t x471 = 21339111936330978LLU;
int16_t x477 = INT16_MIN;
volatile int16_t x478 = -1;
uint8_t x480 = UINT8_MAX;
int32_t x481 = -36721829;
int32_t x483 = INT32_MIN;
uint64_t x492 = 3LLU;
int32_t x511 = -1;
volatile uint64_t t128 = 233LLU;
int32_t x517 = -78604104;
int16_t x518 = 1;
static int32_t x526 = -1;
uint16_t x528 = 14494U;
uint64_t x529 = UINT64_MAX;
static int32_t x530 = INT32_MIN;
static uint16_t x532 = UINT16_MAX;
int64_t x536 = -3078414272035191LL;
volatile uint16_t x538 = 30909U;
int16_t x539 = -87;
int8_t x543 = INT8_MIN;
int64_t x544 = INT64_MAX;
int64_t x554 = -189701902LL;
static volatile uint8_t x555 = UINT8_MAX;
static int32_t x559 = INT32_MIN;
uint16_t x560 = 2927U;
int32_t t139 = 206;
volatile int32_t x562 = INT32_MAX;
volatile int32_t t140 = -10;
int64_t x565 = 1LL;
int32_t x572 = 0;
volatile uint16_t x578 = 2U;
uint8_t x581 = 63U;
uint32_t x582 = 1627716669U;
volatile int8_t x585 = INT8_MAX;
int16_t x587 = INT16_MAX;
int8_t x588 = INT8_MIN;
int16_t x604 = -188;
int16_t x606 = -1;
int64_t x614 = INT64_MIN;
int32_t t154 = -9;
uint32_t x622 = 3483742U;
uint64_t x624 = UINT64_MAX;
int64_t x629 = INT64_MAX;
int32_t t157 = 313;
static int32_t x634 = INT32_MAX;
static uint16_t x636 = 110U;
volatile int32_t x640 = -1;
uint64_t x642 = 86780505027078LLU;
volatile int32_t t160 = -132774718;
static int32_t x646 = -1;
static volatile int32_t t163 = -519805;
volatile int32_t t164 = -5;
int64_t x663 = INT64_MIN;
static volatile uint64_t t165 = 38LLU;
int32_t x671 = -1;
volatile int64_t x673 = INT64_MIN;
int64_t t169 = 398426LL;
int16_t x685 = INT16_MIN;
int64_t x687 = INT64_MIN;
static uint64_t x688 = 898092196929LLU;
volatile uint64_t t171 = 6436515327LLU;
static volatile int32_t t174 = 112142;
int64_t x701 = -1LL;
uint8_t x703 = UINT8_MAX;
volatile int32_t t179 = -82051218;
uint64_t x723 = 1352549891LLU;
static int64_t x736 = INT64_MIN;
static volatile int16_t x745 = -1;
int16_t x751 = -7689;
int8_t x759 = 0;
volatile int32_t x763 = 12118753;
static volatile uint8_t x764 = 8U;
int16_t x768 = INT16_MIN;
uint64_t x769 = 10917689LLU;
int64_t x772 = INT64_MAX;
int64_t t192 = -3365LL;
static int64_t x775 = -1LL;
volatile int32_t t193 = -31712;
int16_t x777 = INT16_MIN;
uint64_t x781 = UINT64_MAX;
volatile int32_t t195 = -343;
volatile int32_t t196 = 4;
static uint32_t x790 = 3139U;
int8_t x791 = INT8_MIN;
uint16_t x792 = 28447U;


void f0(void) {
    	int32_t x1 = -27;
	int32_t x2 = 7174112;
	int32_t x3 = -1;
	uint16_t x4 = 0U;
	volatile int32_t t0 = -5856013;

    t0 = ((x1!=(x2<=x3))&x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x5 = UINT64_MAX;
	uint64_t x6 = 117LLU;
	static int64_t x7 = INT64_MAX;
	int16_t x8 = INT16_MIN;
	static int32_t t1 = 4515;

    t1 = ((x5!=(x6<=x7))&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 662260LL;
	uint16_t x11 = UINT16_MAX;
	uint8_t x12 = 28U;

    t2 = ((x9!=(x10<=x11))&x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 5U;
	uint16_t x14 = 141U;
	static int8_t x16 = -28;
	int32_t t3 = 517;

    t3 = ((x13!=(x14<=x15))&x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = UINT8_MAX;
	int32_t t4 = 60436;

    t4 = ((x17!=(x18<=x19))&x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint64_t x21 = UINT64_MAX;
	uint8_t x24 = 0U;

    t5 = ((x21!=(x22<=x23))&x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = 1;
	volatile uint16_t x26 = UINT16_MAX;
	static uint32_t x27 = UINT32_MAX;
	uint8_t x28 = 0U;
	int32_t t6 = 1;

    t6 = ((x25!=(x26<=x27))&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -9;
	static int16_t x30 = INT16_MIN;
	int8_t x31 = -1;
	int16_t x32 = -1;
	int32_t t7 = 311738;

    t7 = ((x29!=(x30<=x31))&x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MAX;
	int32_t x34 = INT32_MAX;
	uint8_t x35 = 2U;
	uint16_t x36 = 10U;

    t8 = ((x33!=(x34<=x35))&x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = INT8_MAX;
	volatile int32_t x39 = INT32_MIN;
	int8_t x40 = 50;
	volatile int32_t t9 = -61;

    t9 = ((x37!=(x38<=x39))&x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -231367033638LL;
	int64_t x42 = -1LL;
	uint64_t x43 = 489089183908836457LLU;
	volatile int32_t x44 = -18332;

    t10 = ((x41!=(x42<=x43))&x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	volatile int32_t x46 = 426024;
	int64_t x47 = INT64_MIN;
	volatile uint32_t t11 = 52972939U;

    t11 = ((x45!=(x46<=x47))&x48);

    if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MAX;
	uint32_t x50 = 32620203U;
	static int64_t x51 = INT64_MAX;
	volatile int32_t t12 = -9811;

    t12 = ((x49!=(x50<=x51))&x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = INT64_MIN;
	static uint16_t x56 = UINT16_MAX;

    t13 = ((x53!=(x54<=x55))&x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	int64_t x59 = INT64_MIN;
	uint32_t x60 = 1U;
	uint32_t t14 = 66278533U;

    t14 = ((x57!=(x58<=x59))&x60);

    if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -27;
	uint8_t x63 = 14U;
	volatile int64_t x64 = INT64_MAX;
	int64_t t15 = -236762679290LL;

    t15 = ((x61!=(x62<=x63))&x64);

    if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = 3;
	int8_t x66 = -1;
	static volatile int16_t x67 = INT16_MIN;
	volatile uint32_t x68 = 110151015U;
	volatile uint32_t t16 = 236189U;

    t16 = ((x65!=(x66<=x67))&x68);

    if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 2552U;
	static int8_t x70 = -1;
	int64_t x71 = -1LL;
	uint64_t x72 = UINT64_MAX;
	uint64_t t17 = 2163379LLU;

    t17 = ((x69!=(x70<=x71))&x72);

    if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -9LL;
	int32_t x74 = INT32_MAX;
	int8_t x75 = INT8_MIN;
	volatile int64_t x76 = INT64_MIN;
	static volatile int64_t t18 = -3788075372LL;

    t18 = ((x73!=(x74<=x75))&x76);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	int64_t x78 = INT64_MAX;
	uint32_t x79 = 199U;
	uint16_t x80 = UINT16_MAX;
	int32_t t19 = -7923;

    t19 = ((x77!=(x78<=x79))&x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MAX;
	int64_t x82 = INT64_MIN;
	uint64_t x83 = 223494676971LLU;
	int64_t x84 = INT64_MIN;

    t20 = ((x81!=(x82<=x83))&x84);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -1;
	uint32_t x87 = 8U;
	int64_t x88 = INT64_MAX;
	static volatile int64_t t21 = 41465692676LL;

    t21 = ((x85!=(x86<=x87))&x88);

    if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x90 = 3U;
	uint16_t x91 = UINT16_MAX;
	volatile uint8_t x92 = 30U;
	volatile int32_t t22 = -4863142;

    t22 = ((x89!=(x90<=x91))&x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = 112112;
	static uint8_t x94 = UINT8_MAX;
	int16_t x95 = INT16_MIN;
	static int64_t t23 = 198884413LL;

    t23 = ((x93!=(x94<=x95))&x96);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x97 = 13008993172LLU;
	uint64_t x98 = UINT64_MAX;
	volatile int16_t x100 = INT16_MAX;
	volatile int32_t t24 = -30865;

    t24 = ((x97!=(x98<=x99))&x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x101 = UINT8_MAX;
	int64_t x102 = INT64_MAX;
	int16_t x103 = 724;
	uint16_t x104 = 20U;

    t25 = ((x101!=(x102<=x103))&x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x105 = 1818;
	volatile int16_t x107 = INT16_MAX;
	static uint16_t x108 = UINT16_MAX;
	volatile int32_t t26 = 1064750463;

    t26 = ((x105!=(x106<=x107))&x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x111 = -7LL;
	int32_t x112 = -6176;
	volatile int32_t t27 = 459;

    t27 = ((x109!=(x110<=x111))&x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x113 = INT8_MIN;
	int8_t x115 = -1;
	int32_t x116 = 69;
	static int32_t t28 = 239;

    t28 = ((x113!=(x114<=x115))&x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x117 = -835694930877LL;
	static int8_t x118 = 1;
	int32_t x119 = 967;
	volatile int16_t x120 = 5;

    t29 = ((x117!=(x118<=x119))&x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = -1;
	volatile int64_t x122 = 152250026125408553LL;
	static uint8_t x123 = UINT8_MAX;
	int64_t x124 = 147254LL;
	int64_t t30 = -313699805473246LL;

    t30 = ((x121!=(x122<=x123))&x124);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = 6U;
	int8_t x126 = INT8_MAX;
	static int16_t x127 = INT16_MIN;
	static volatile int32_t t31 = 4030;

    t31 = ((x125!=(x126<=x127))&x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	static volatile int32_t t32 = -12450;

    t32 = ((x129!=(x130<=x131))&x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x133 = 1;
	int32_t x134 = -76245943;
	volatile int32_t x135 = INT32_MAX;
	volatile int32_t t33 = -2;

    t33 = ((x133!=(x134<=x135))&x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint8_t x137 = 14U;
	volatile uint16_t x138 = UINT16_MAX;
	volatile int32_t x139 = INT32_MIN;
	int8_t x140 = INT8_MIN;
	int32_t t34 = -3577743;

    t34 = ((x137!=(x138<=x139))&x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = UINT32_MAX;
	int32_t x142 = INT32_MIN;
	static int64_t x143 = INT64_MIN;
	uint64_t x144 = 45334178299LLU;
	volatile uint64_t t35 = 13051122925988273LLU;

    t35 = ((x141!=(x142<=x143))&x144);

    if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;
	static int8_t x146 = INT8_MIN;
	int32_t x147 = 3;
	int8_t x148 = 38;
	int32_t t36 = 1056386;

    t36 = ((x145!=(x146<=x147))&x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = -978253626293047LL;
	int16_t x150 = -1;
	static uint32_t x151 = UINT32_MAX;
	uint64_t x152 = 53726164LLU;
	uint64_t t37 = 183403491LLU;

    t37 = ((x149!=(x150<=x151))&x152);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x153 = UINT64_MAX;
	int32_t x154 = INT32_MIN;
	static int8_t x155 = 12;
	uint16_t x156 = UINT16_MAX;
	int32_t t38 = 48;

    t38 = ((x153!=(x154<=x155))&x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = 688249190309LL;
	int32_t x158 = -5788669;
	int8_t x160 = -1;

    t39 = ((x157!=(x158<=x159))&x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x161 = INT32_MIN;
	volatile int8_t x162 = 3;
	int64_t x163 = -38167314104362LL;
	static volatile int8_t x164 = -18;
	int32_t t40 = -54937;

    t40 = ((x161!=(x162<=x163))&x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x165 = -1LL;
	uint8_t x167 = 6U;
	int8_t x168 = INT8_MIN;
	int32_t t41 = -3464244;

    t41 = ((x165!=(x166<=x167))&x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MAX;
	static uint16_t x171 = 3650U;
	uint8_t x172 = UINT8_MAX;

    t42 = ((x169!=(x170<=x171))&x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = -2;
	int32_t t43 = 14239742;

    t43 = ((x173!=(x174<=x175))&x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint16_t x178 = 52U;
	volatile uint8_t x179 = 61U;
	volatile uint16_t x180 = 460U;
	int32_t t44 = -79173;

    t44 = ((x177!=(x178<=x179))&x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = UINT8_MAX;
	int64_t x182 = -1LL;
	static volatile uint32_t x183 = 328U;
	static uint16_t x184 = 945U;
	volatile int32_t t45 = 3732546;

    t45 = ((x181!=(x182<=x183))&x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x185 = -7390;
	uint16_t x186 = 570U;
	int16_t x187 = -142;
	int64_t x188 = INT64_MAX;
	static volatile int64_t t46 = 55940901593936LL;

    t46 = ((x185!=(x186<=x187))&x188);

    if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MAX;
	volatile uint16_t x190 = UINT16_MAX;
	int16_t x191 = -54;
	static volatile int32_t t47 = 33;

    t47 = ((x189!=(x190<=x191))&x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x193 = -1;
	static uint32_t x194 = 2157U;
	uint32_t x195 = 49872662U;
	volatile int64_t x196 = -74050LL;
	int64_t t48 = 11994LL;

    t48 = ((x193!=(x194<=x195))&x196);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	static volatile int16_t x199 = -15703;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t49 = -1998;

    t49 = ((x197!=(x198<=x199))&x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = 1;
	int16_t x203 = -2195;
	int16_t x204 = 6032;

    t50 = ((x201!=(x202<=x203))&x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 25U;
	volatile int64_t x206 = INT64_MAX;
	static int64_t x207 = INT64_MAX;
	int8_t x208 = -6;
	int32_t t51 = -1;

    t51 = ((x205!=(x206<=x207))&x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = -1;
	static int64_t x210 = INT64_MAX;
	uint16_t x211 = 3743U;
	int64_t x212 = 547514075216LL;
	int64_t t52 = 239LL;

    t52 = ((x209!=(x210<=x211))&x212);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x213 = -3828;
	int64_t x215 = INT64_MIN;
	static uint32_t x216 = 340798573U;
	volatile uint32_t t53 = 365U;

    t53 = ((x213!=(x214<=x215))&x216);

    if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x218 = 1586166U;
	int32_t x219 = 7072;
	volatile int8_t x220 = INT8_MAX;
	int32_t t54 = -1;

    t54 = ((x217!=(x218<=x219))&x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 77U;
	uint64_t x222 = 1432626252587LLU;
	int16_t x223 = -1;
	int16_t x224 = INT16_MAX;

    t55 = ((x221!=(x222<=x223))&x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = -21;
	uint8_t x226 = 1U;
	volatile int64_t x227 = 238430LL;
	int32_t t56 = 594536609;

    t56 = ((x225!=(x226<=x227))&x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = UINT32_MAX;
	int8_t x231 = -1;
	int8_t x232 = 0;

    t57 = ((x229!=(x230<=x231))&x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = 0U;
	int32_t x234 = -2219963;
	int16_t x235 = INT16_MIN;
	static volatile uint64_t t58 = 112887683683158LLU;

    t58 = ((x233!=(x234<=x235))&x236);

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = 855407980U;
	int16_t x238 = 1;
	volatile uint16_t x239 = 5600U;
	int8_t x240 = INT8_MAX;
	static int32_t t59 = -12542;

    t59 = ((x237!=(x238<=x239))&x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint16_t x241 = 11636U;
	int32_t x242 = -18;
	int16_t x243 = -1;
	volatile int32_t t60 = 2008736;

    t60 = ((x241!=(x242<=x243))&x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x245 = INT8_MIN;
	uint32_t x246 = 32755832U;
	volatile int64_t t61 = 5450350LL;

    t61 = ((x245!=(x246<=x247))&x248);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x249 = 0;
	uint32_t x250 = 461566U;
	int64_t x251 = INT64_MAX;
	int32_t x252 = -6135338;
	static int32_t t62 = -7;

    t62 = ((x249!=(x250<=x251))&x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = UINT32_MAX;
	int8_t x254 = 7;
	uint16_t x256 = 245U;
	volatile int32_t t63 = 701739178;

    t63 = ((x253!=(x254<=x255))&x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -2;
	static int8_t x259 = INT8_MIN;
	uint8_t x260 = 2U;
	int32_t t64 = 8045914;

    t64 = ((x257!=(x258<=x259))&x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = UINT32_MAX;
	uint8_t x262 = UINT8_MAX;
	int64_t x263 = INT64_MAX;
	int16_t x264 = INT16_MIN;
	volatile int32_t t65 = -6;

    t65 = ((x261!=(x262<=x263))&x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int64_t x265 = INT64_MIN;
	volatile uint32_t x266 = 142U;
	uint32_t x268 = UINT32_MAX;
	static uint32_t t66 = 8U;

    t66 = ((x265!=(x266<=x267))&x268);

    if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x270 = 2267U;
	volatile int64_t x271 = -1LL;
	uint8_t x272 = UINT8_MAX;
	volatile int32_t t67 = -12419276;

    t67 = ((x269!=(x270<=x271))&x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint64_t x273 = UINT64_MAX;
	int32_t x274 = -1;
	static int8_t x275 = 54;
	volatile int32_t t68 = 9158;

    t68 = ((x273!=(x274<=x275))&x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 78927U;
	int8_t x278 = 7;
	uint16_t x279 = UINT16_MAX;
	volatile uint64_t x280 = UINT64_MAX;
	uint64_t t69 = 6175382352246LLU;

    t69 = ((x277!=(x278<=x279))&x280);

    if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x282 = -1;
	volatile uint32_t x283 = 131668422U;
	uint16_t x284 = 408U;
	int32_t t70 = 146;

    t70 = ((x281!=(x282<=x283))&x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x286 = -50;
	volatile uint64_t t71 = 6292849200LLU;

    t71 = ((x285!=(x286<=x287))&x288);

    if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -1;
	int64_t x290 = INT64_MIN;
	static int32_t x291 = -393929186;
	int16_t x292 = -3158;
	int32_t t72 = -2;

    t72 = ((x289!=(x290<=x291))&x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = -298140401058805449LL;
	uint8_t x294 = 17U;
	int16_t x295 = -1;
	uint32_t t73 = 1025U;

    t73 = ((x293!=(x294<=x295))&x296);

    if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MIN;
	int32_t x298 = -1;
	int32_t x299 = INT32_MIN;
	volatile int32_t t74 = -6136;

    t74 = ((x297!=(x298<=x299))&x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x302 = INT8_MIN;
	int64_t x303 = 978410528LL;
	uint32_t x304 = 4270U;
	volatile uint32_t t75 = 2744U;

    t75 = ((x301!=(x302<=x303))&x304);

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x305 = INT16_MAX;
	uint64_t x306 = UINT64_MAX;
	int64_t x307 = INT64_MAX;
	int16_t x308 = -1;
	int32_t t76 = -13335259;

    t76 = ((x305!=(x306<=x307))&x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x309 = INT64_MIN;
	volatile int64_t x310 = INT64_MIN;
	int8_t x311 = INT8_MAX;
	int64_t t77 = -3911653698762590523LL;

    t77 = ((x309!=(x310<=x311))&x312);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = -1;
	int16_t x314 = -1;
	uint32_t x315 = 0U;
	volatile uint32_t x316 = UINT32_MAX;
	volatile uint32_t t78 = 16528369U;

    t78 = ((x313!=(x314<=x315))&x316);

    if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 1005LLU;
	int16_t x318 = 1;
	uint64_t x320 = 6634856521638LLU;

    t79 = ((x317!=(x318<=x319))&x320);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x323 = -1;
	uint32_t x324 = 2644U;
	uint32_t t80 = 1376U;

    t80 = ((x321!=(x322<=x323))&x324);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MIN;
	static int16_t x326 = INT16_MIN;
	uint16_t x327 = 30814U;
	uint8_t x328 = 17U;
	int32_t t81 = -923431;

    t81 = ((x325!=(x326<=x327))&x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = UINT64_MAX;
	int32_t x330 = -19313414;
	static uint32_t x332 = UINT32_MAX;
	static volatile uint32_t t82 = 3626U;

    t82 = ((x329!=(x330<=x331))&x332);

    if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x334 = 1692373141327294106LLU;
	int16_t x336 = -1;
	int32_t t83 = 28138;

    t83 = ((x333!=(x334<=x335))&x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MIN;
	int32_t x338 = -1;
	static volatile uint8_t x339 = UINT8_MAX;
	int64_t x340 = -1LL;

    t84 = ((x337!=(x338<=x339))&x340);

    if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	int8_t x342 = INT8_MAX;
	static uint32_t x343 = UINT32_MAX;
	int64_t x344 = 0LL;

    t85 = ((x341!=(x342<=x343))&x344);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = 27227U;
	int64_t x346 = -194LL;
	int32_t x347 = INT32_MIN;
	static uint16_t x348 = 13U;

    t86 = ((x345!=(x346<=x347))&x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MAX;
	volatile int64_t x350 = -1LL;
	uint64_t x351 = 2908400681897332LLU;
	static int64_t x352 = -1LL;
	volatile int64_t t87 = 4658LL;

    t87 = ((x349!=(x350<=x351))&x352);

    if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x353 = INT64_MIN;
	int64_t x354 = INT64_MIN;
	int32_t x356 = -1;

    t88 = ((x353!=(x354<=x355))&x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int32_t x357 = -1;
	uint16_t x358 = UINT16_MAX;
	int8_t x359 = -8;
	static int32_t x360 = -1;
	int32_t t89 = -23;

    t89 = ((x357!=(x358<=x359))&x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x361 = 110;
	int32_t x364 = -1;
	static volatile int32_t t90 = -60394108;

    t90 = ((x361!=(x362<=x363))&x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x365 = 33193155LLU;
	static int32_t t91 = -8322830;

    t91 = ((x365!=(x366<=x367))&x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	int32_t x371 = INT32_MIN;
	uint64_t x372 = 171289277758841LLU;
	static uint64_t t92 = 87LLU;

    t92 = ((x369!=(x370<=x371))&x372);

    if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x373 = 10;
	static int16_t x374 = INT16_MIN;
	int64_t x375 = -6346227693702LL;

    t93 = ((x373!=(x374<=x375))&x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x377 = 76U;
	static int64_t x380 = INT64_MIN;
	int64_t t94 = -197075806512108LL;

    t94 = ((x377!=(x378<=x379))&x380);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = UINT8_MAX;
	static int8_t x382 = INT8_MIN;
	static int32_t x384 = INT32_MAX;

    t95 = ((x381!=(x382<=x383))&x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = 946;
	int64_t x386 = -20LL;
	int32_t t96 = -1;

    t96 = ((x385!=(x386<=x387))&x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = UINT8_MAX;
	volatile int64_t x390 = -1LL;
	int32_t x392 = -1;

    t97 = ((x389!=(x390<=x391))&x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = 11U;
	uint8_t x394 = 1U;
	volatile int64_t x396 = 5LL;
	volatile int64_t t98 = 27977785737LL;

    t98 = ((x393!=(x394<=x395))&x396);

    if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MIN;
	int8_t x398 = INT8_MIN;
	int8_t x400 = -5;
	int32_t t99 = -131057;

    t99 = ((x397!=(x398<=x399))&x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x403 = 200579080LLU;

    t100 = ((x401!=(x402<=x403))&x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x405 = UINT16_MAX;
	uint32_t x406 = 1007482U;
	static uint64_t x407 = UINT64_MAX;
	uint16_t x408 = 25937U;
	int32_t t101 = -34240985;

    t101 = ((x405!=(x406<=x407))&x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x409 = UINT64_MAX;
	int32_t x410 = 0;
	volatile uint32_t x411 = UINT32_MAX;
	int32_t x412 = INT32_MIN;
	int32_t t102 = -9878580;

    t102 = ((x409!=(x410<=x411))&x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = -1;
	static volatile int16_t x414 = -1;
	static uint16_t x415 = 6U;
	volatile int32_t t103 = 575536;

    t103 = ((x413!=(x414<=x415))&x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x417 = -1320170;
	static uint16_t x418 = 2U;
	static int16_t x419 = -57;
	int16_t x420 = INT16_MIN;
	volatile int32_t t104 = -5988;

    t104 = ((x417!=(x418<=x419))&x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x422 = -1;
	static uint64_t x423 = 1350898704LLU;
	uint32_t x424 = UINT32_MAX;
	volatile uint32_t t105 = 1926249U;

    t105 = ((x421!=(x422<=x423))&x424);

    if (t105 != 1U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 573U;
	uint8_t x426 = 13U;
	int64_t x427 = INT64_MIN;
	uint16_t x428 = UINT16_MAX;
	int32_t t106 = 199213633;

    t106 = ((x425!=(x426<=x427))&x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x429 = INT16_MIN;
	volatile uint16_t x430 = UINT16_MAX;
	uint16_t x432 = 2626U;
	volatile int32_t t107 = -14881;

    t107 = ((x429!=(x430<=x431))&x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = -118;
	int8_t x434 = INT8_MAX;
	int64_t x435 = -1LL;
	volatile int8_t x436 = INT8_MIN;
	volatile int32_t t108 = -3185957;

    t108 = ((x433!=(x434<=x435))&x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x438 = INT16_MIN;
	volatile int8_t x439 = -1;
	int64_t x440 = INT64_MIN;

    t109 = ((x437!=(x438<=x439))&x440);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x441 = -1;
	int8_t x442 = 0;
	static int8_t x443 = INT8_MIN;
	static uint8_t x444 = UINT8_MAX;
	int32_t t110 = -2243386;

    t110 = ((x441!=(x442<=x443))&x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -6608253LL;
	volatile int16_t x446 = -7;
	uint64_t x448 = 0LLU;

    t111 = ((x445!=(x446<=x447))&x448);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x449 = -1;
	volatile int16_t x450 = 1429;
	int32_t x451 = -1;
	uint8_t x452 = 1U;
	volatile int32_t t112 = 47;

    t112 = ((x449!=(x450<=x451))&x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x454 = INT64_MAX;
	volatile uint64_t x455 = 1302706776162206LLU;
	uint16_t x456 = 48U;
	int32_t t113 = -2050725;

    t113 = ((x453!=(x454<=x455))&x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = -7;
	int16_t x459 = 74;
	int8_t x460 = INT8_MAX;
	int32_t t114 = 40;

    t114 = ((x457!=(x458<=x459))&x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x461 = INT64_MIN;
	uint32_t x462 = 1377480U;
	uint16_t x463 = 3U;
	volatile uint8_t x464 = 14U;

    t115 = ((x461!=(x462<=x463))&x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = 26253U;
	volatile int16_t x468 = INT16_MIN;
	volatile int32_t t116 = 8187;

    t116 = ((x465!=(x466<=x467))&x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x469 = UINT16_MAX;
	static uint8_t x470 = UINT8_MAX;
	int8_t x472 = -14;
	int32_t t117 = 1;

    t117 = ((x469!=(x470<=x471))&x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -1;
	uint32_t x474 = 1U;
	int64_t x475 = INT64_MAX;
	int16_t x476 = -1;
	int32_t t118 = -85;

    t118 = ((x473!=(x474<=x475))&x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x479 = UINT16_MAX;
	int32_t t119 = -6135;

    t119 = ((x477!=(x478<=x479))&x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x482 = 1815U;
	volatile int16_t x484 = 16;
	int32_t t120 = -28633;

    t120 = ((x481!=(x482<=x483))&x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -1;
	static uint32_t x486 = 11U;
	int8_t x487 = 6;
	volatile int8_t x488 = INT8_MIN;
	static volatile int32_t t121 = -3983063;

    t121 = ((x485!=(x486<=x487))&x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = -13LL;
	int16_t x490 = INT16_MAX;
	volatile uint64_t x491 = 1977803LLU;
	uint64_t t122 = 632029LLU;

    t122 = ((x489!=(x490<=x491))&x492);

    if (t122 != 1LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint16_t x493 = 12714U;
	int64_t x494 = -1LL;
	int8_t x495 = -62;
	uint64_t x496 = 455860403038706329LLU;
	uint64_t t123 = 3LLU;

    t123 = ((x493!=(x494<=x495))&x496);

    if (t123 != 1LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MIN;
	uint64_t x498 = 99936827704LLU;
	uint16_t x499 = 253U;
	uint32_t x500 = 7U;
	volatile uint32_t t124 = 13947625U;

    t124 = ((x497!=(x498<=x499))&x500);

    if (t124 != 1U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x501 = 28994170675681401LLU;
	int64_t x502 = -1LL;
	volatile int32_t x503 = INT32_MAX;
	static volatile int32_t x504 = -1;
	int32_t t125 = -7011559;

    t125 = ((x501!=(x502<=x503))&x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MAX;
	int32_t x506 = INT32_MAX;
	int8_t x507 = -1;
	uint8_t x508 = 3U;
	volatile int32_t t126 = 924740;

    t126 = ((x505!=(x506<=x507))&x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = 38;
	static uint8_t x510 = 38U;
	int64_t x512 = INT64_MAX;
	int64_t t127 = 0LL;

    t127 = ((x509!=(x510<=x511))&x512);

    if (t127 != 1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MIN;
	uint64_t x514 = 9353746082743LLU;
	static int8_t x515 = -1;
	volatile uint64_t x516 = UINT64_MAX;

    t128 = ((x513!=(x514<=x515))&x516);

    if (t128 != 1LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x519 = -54;
	int16_t x520 = INT16_MIN;
	volatile int32_t t129 = -1;

    t129 = ((x517!=(x518<=x519))&x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = 6U;
	volatile int8_t x522 = -7;
	volatile uint32_t x523 = 683U;
	int32_t x524 = INT32_MAX;
	volatile int32_t t130 = -40592267;

    t130 = ((x521!=(x522<=x523))&x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = -1;
	uint8_t x527 = 3U;
	volatile int32_t t131 = -1;

    t131 = ((x525!=(x526<=x527))&x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x531 = 0;
	static volatile int32_t t132 = 1731847;

    t132 = ((x529!=(x530<=x531))&x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x533 = 155107U;
	volatile uint16_t x534 = 15U;
	static int64_t x535 = INT64_MAX;
	volatile int64_t t133 = 64267909339433718LL;

    t133 = ((x533!=(x534<=x535))&x536);

    if (t133 != 1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	int8_t x540 = -1;
	volatile int32_t t134 = 83;

    t134 = ((x537!=(x538<=x539))&x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x541 = -1LL;
	static volatile uint8_t x542 = UINT8_MAX;
	static int64_t t135 = 17750816734476LL;

    t135 = ((x541!=(x542<=x543))&x544);

    if (t135 != 1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint32_t x545 = 6U;
	static int16_t x546 = INT16_MAX;
	int64_t x547 = -558907561LL;
	int32_t x548 = INT32_MIN;
	int32_t t136 = 1;

    t136 = ((x545!=(x546<=x547))&x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MAX;
	int64_t x550 = INT64_MIN;
	static uint8_t x551 = UINT8_MAX;
	static int64_t x552 = 216838168314LL;
	static volatile int64_t t137 = 26706LL;

    t137 = ((x549!=(x550<=x551))&x552);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = -13063303031851581LL;
	static int64_t x556 = INT64_MAX;
	volatile int64_t t138 = -36LL;

    t138 = ((x553!=(x554<=x555))&x556);

    if (t138 != 1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x557 = 428U;
	int64_t x558 = 15690220952LL;

    t139 = ((x557!=(x558<=x559))&x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int8_t x561 = -37;
	volatile uint32_t x563 = 3003U;
	int16_t x564 = INT16_MAX;

    t140 = ((x561!=(x562<=x563))&x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x566 = 75541U;
	int8_t x567 = INT8_MAX;
	static int32_t x568 = 141343;
	int32_t t141 = 31426178;

    t141 = ((x565!=(x566<=x567))&x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -1LL;
	volatile int8_t x570 = INT8_MIN;
	static int16_t x571 = 0;
	volatile int32_t t142 = 21;

    t142 = ((x569!=(x570<=x571))&x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x573 = INT64_MIN;
	static uint32_t x574 = 143032U;
	uint64_t x575 = 155701505382001LLU;
	int32_t x576 = -13;
	int32_t t143 = -523;

    t143 = ((x573!=(x574<=x575))&x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	int16_t x579 = INT16_MIN;
	uint64_t x580 = UINT64_MAX;
	uint64_t t144 = 1525760593LLU;

    t144 = ((x577!=(x578<=x579))&x580);

    if (t144 != 1LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x583 = INT64_MAX;
	int8_t x584 = 8;
	volatile int32_t t145 = -4390;

    t145 = ((x581!=(x582<=x583))&x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x586 = INT64_MIN;
	int32_t t146 = -30847681;

    t146 = ((x585!=(x586<=x587))&x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x589 = INT64_MIN;
	static volatile int64_t x590 = INT64_MIN;
	uint16_t x591 = 0U;
	int16_t x592 = INT16_MAX;
	volatile int32_t t147 = -2886;

    t147 = ((x589!=(x590<=x591))&x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x593 = INT8_MAX;
	int16_t x594 = -11284;
	static int64_t x595 = INT64_MAX;
	uint16_t x596 = 3U;
	static volatile int32_t t148 = 5381936;

    t148 = ((x593!=(x594<=x595))&x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = 1596U;
	int64_t x598 = 341978863001LL;
	int32_t x599 = -1;
	int64_t x600 = -13LL;
	static volatile int64_t t149 = 7908032LL;

    t149 = ((x597!=(x598<=x599))&x600);

    if (t149 != 1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x601 = INT8_MAX;
	static volatile uint32_t x602 = UINT32_MAX;
	volatile int16_t x603 = INT16_MIN;
	int32_t t150 = -14357;

    t150 = ((x601!=(x602<=x603))&x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint32_t x605 = 64144109U;
	int64_t x607 = -1LL;
	int8_t x608 = -1;
	volatile int32_t t151 = 215751;

    t151 = ((x605!=(x606<=x607))&x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x609 = INT16_MIN;
	volatile uint16_t x610 = UINT16_MAX;
	static int32_t x611 = -1;
	int32_t x612 = -1;
	volatile int32_t t152 = -3078170;

    t152 = ((x609!=(x610<=x611))&x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = 377434532410659LLU;
	uint8_t x615 = 1U;
	static uint16_t x616 = 0U;
	volatile int32_t t153 = -1035944;

    t153 = ((x613!=(x614<=x615))&x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = UINT64_MAX;
	uint32_t x618 = UINT32_MAX;
	int64_t x619 = -1LL;
	uint16_t x620 = UINT16_MAX;

    t154 = ((x617!=(x618<=x619))&x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MAX;
	int32_t x623 = INT32_MIN;
	volatile uint64_t t155 = 2130359341681LLU;

    t155 = ((x621!=(x622<=x623))&x624);

    if (t155 != 1LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = 39U;
	int32_t x626 = -1;
	volatile uint8_t x627 = 2U;
	int32_t x628 = INT32_MIN;
	int32_t t156 = 820;

    t156 = ((x625!=(x626<=x627))&x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int64_t x630 = 53257593146107095LL;
	static volatile int8_t x631 = 0;
	static int8_t x632 = -28;

    t157 = ((x629!=(x630<=x631))&x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MIN;
	int16_t x635 = -845;
	volatile int32_t t158 = 27065516;

    t158 = ((x633!=(x634<=x635))&x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x637 = 1027526U;
	volatile int8_t x638 = INT8_MIN;
	int32_t x639 = 0;
	volatile int32_t t159 = -13;

    t159 = ((x637!=(x638<=x639))&x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x641 = 0;
	volatile int64_t x643 = INT64_MAX;
	int32_t x644 = 403926002;

    t160 = ((x641!=(x642<=x643))&x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = 3821U;
	int16_t x647 = -6;
	static int64_t x648 = INT64_MIN;
	volatile int64_t t161 = -355970275979677LL;

    t161 = ((x645!=(x646<=x647))&x648);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MIN;
	uint8_t x650 = 58U;
	int16_t x651 = INT16_MIN;
	volatile uint32_t x652 = 28267388U;
	uint32_t t162 = 1U;

    t162 = ((x649!=(x650<=x651))&x652);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x653 = INT8_MAX;
	int64_t x654 = INT64_MIN;
	int32_t x655 = 4204;
	int8_t x656 = INT8_MIN;

    t163 = ((x653!=(x654<=x655))&x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = 14328U;
	uint8_t x658 = 1U;
	int64_t x659 = -1LL;
	static uint8_t x660 = 3U;

    t164 = ((x657!=(x658<=x659))&x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x661 = 1091U;
	int32_t x662 = INT32_MIN;
	static uint64_t x664 = 61788152452LLU;

    t165 = ((x661!=(x662<=x663))&x664);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MAX;
	static int8_t x666 = -1;
	static int8_t x667 = INT8_MAX;
	int8_t x668 = INT8_MIN;
	static int32_t t166 = 10926;

    t166 = ((x665!=(x666<=x667))&x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = 51881062LLU;
	int32_t x670 = -1;
	volatile int32_t x672 = -1;
	static int32_t t167 = 11864330;

    t167 = ((x669!=(x670<=x671))&x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x674 = UINT64_MAX;
	uint8_t x675 = 1U;
	static uint8_t x676 = 5U;
	volatile int32_t t168 = -109223137;

    t168 = ((x673!=(x674<=x675))&x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	uint16_t x678 = 37U;
	volatile uint32_t x679 = 7574178U;
	volatile int64_t x680 = -1LL;

    t169 = ((x677!=(x678<=x679))&x680);

    if (t169 != 1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MIN;
	int32_t x682 = INT32_MIN;
	int32_t x683 = INT32_MIN;
	uint64_t x684 = 16866188813LLU;
	static uint64_t t170 = 1115703787LLU;

    t170 = ((x681!=(x682<=x683))&x684);

    if (t170 != 1LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x686 = 81633369740943462LLU;

    t171 = ((x685!=(x686<=x687))&x688);

    if (t171 != 1LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = -1;
	uint64_t x690 = 814LLU;
	static volatile int16_t x691 = INT16_MIN;
	int16_t x692 = -46;
	int32_t t172 = -1604;

    t172 = ((x689!=(x690<=x691))&x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x693 = 26727942U;
	volatile int32_t x694 = -1;
	int32_t x695 = INT32_MIN;
	uint64_t x696 = 33594961185884LLU;
	volatile uint64_t t173 = 709692096888814LLU;

    t173 = ((x693!=(x694<=x695))&x696);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MIN;
	int64_t x698 = INT64_MIN;
	int8_t x699 = INT8_MAX;
	int8_t x700 = -1;

    t174 = ((x697!=(x698<=x699))&x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x702 = 119U;
	volatile int8_t x704 = INT8_MAX;
	int32_t t175 = -410076;

    t175 = ((x701!=(x702<=x703))&x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = -1;
	uint16_t x706 = 14U;
	int8_t x707 = -19;
	int16_t x708 = INT16_MIN;
	volatile int32_t t176 = 597798;

    t176 = ((x705!=(x706<=x707))&x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x709 = 0;
	static int64_t x710 = -1LL;
	int32_t x711 = 6662;
	uint64_t x712 = 27453780985135579LLU;
	static uint64_t t177 = 6371420LLU;

    t177 = ((x709!=(x710<=x711))&x712);

    if (t177 != 1LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MAX;
	static volatile int8_t x714 = INT8_MIN;
	uint8_t x715 = UINT8_MAX;
	uint64_t x716 = UINT64_MAX;
	static volatile uint64_t t178 = 28115101LLU;

    t178 = ((x713!=(x714<=x715))&x716);

    if (t178 != 1LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = -1;
	static uint8_t x718 = 0U;
	int8_t x719 = INT8_MAX;
	int16_t x720 = -26;

    t179 = ((x717!=(x718<=x719))&x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = UINT64_MAX;
	int16_t x722 = -8466;
	int16_t x724 = 1;
	volatile int32_t t180 = -26834509;

    t180 = ((x721!=(x722<=x723))&x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 0U;
	uint16_t x726 = 2U;
	uint16_t x727 = 72U;
	uint8_t x728 = UINT8_MAX;
	volatile int32_t t181 = -1437;

    t181 = ((x725!=(x726<=x727))&x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x729 = 31;
	int8_t x730 = INT8_MIN;
	volatile int32_t x731 = -20;
	uint16_t x732 = 275U;
	volatile int32_t t182 = 174;

    t182 = ((x729!=(x730<=x731))&x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x733 = 195721402810408345LLU;
	volatile int64_t x734 = 1919294LL;
	int16_t x735 = INT16_MIN;
	volatile int64_t t183 = 15680844LL;

    t183 = ((x733!=(x734<=x735))&x736);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x737 = 1U;
	static volatile uint32_t x738 = 73276697U;
	uint64_t x739 = 466817040364223693LLU;
	volatile uint64_t x740 = 50LLU;
	volatile uint64_t t184 = 4814133957472985150LLU;

    t184 = ((x737!=(x738<=x739))&x740);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x741 = 25U;
	int16_t x742 = INT16_MAX;
	uint16_t x743 = UINT16_MAX;
	int16_t x744 = INT16_MIN;
	volatile int32_t t185 = -558;

    t185 = ((x741!=(x742<=x743))&x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x746 = -1;
	int64_t x747 = 1449LL;
	uint16_t x748 = UINT16_MAX;
	volatile int32_t t186 = 5426;

    t186 = ((x745!=(x746<=x747))&x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	uint64_t x750 = 731113221923672LLU;
	uint8_t x752 = UINT8_MAX;
	volatile int32_t t187 = 25266241;

    t187 = ((x749!=(x750<=x751))&x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 1389654995LLU;
	int64_t x754 = INT64_MAX;
	volatile int16_t x755 = -1;
	uint8_t x756 = 9U;
	volatile int32_t t188 = 13456;

    t188 = ((x753!=(x754<=x755))&x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = UINT64_MAX;
	int8_t x758 = 2;
	int8_t x760 = INT8_MAX;
	int32_t t189 = -470616886;

    t189 = ((x757!=(x758<=x759))&x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = 1350733043U;
	int32_t x762 = INT32_MAX;
	volatile int32_t t190 = 726;

    t190 = ((x761!=(x762<=x763))&x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int16_t x765 = -3;
	static int32_t x766 = -1;
	int32_t x767 = INT32_MAX;
	volatile int32_t t191 = -57120;

    t191 = ((x765!=(x766<=x767))&x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x770 = 278U;
	uint64_t x771 = 130941285506569LLU;

    t192 = ((x769!=(x770<=x771))&x772);

    if (t192 != 1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x773 = -1;
	uint64_t x774 = 121400136732LLU;
	int8_t x776 = INT8_MIN;

    t193 = ((x773!=(x774<=x775))&x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int16_t x778 = INT16_MIN;
	int32_t x779 = -1;
	static int8_t x780 = 38;
	volatile int32_t t194 = -2891146;

    t194 = ((x777!=(x778<=x779))&x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x782 = 27;
	volatile int16_t x783 = -3721;
	uint8_t x784 = UINT8_MAX;

    t195 = ((x781!=(x782<=x783))&x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = 545LL;
	int16_t x786 = INT16_MIN;
	int8_t x787 = 6;
	int32_t x788 = INT32_MIN;

    t196 = ((x785!=(x786<=x787))&x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = 275LL;
	int32_t t197 = 21376;

    t197 = ((x789!=(x790<=x791))&x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = -33369172481LL;
	static int32_t x794 = INT32_MIN;
	int16_t x795 = -2;
	int16_t x796 = -1;
	volatile int32_t t198 = -146239965;

    t198 = ((x793!=(x794<=x795))&x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = -6;
	volatile int32_t x798 = -1;
	volatile int64_t x799 = INT64_MIN;
	int8_t x800 = INT8_MIN;
	int32_t t199 = 15604670;

    t199 = ((x797!=(x798<=x799))&x800);

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


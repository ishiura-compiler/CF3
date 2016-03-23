
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

static volatile int8_t x1 = INT8_MIN;
uint16_t x6 = UINT16_MAX;
int16_t x18 = INT16_MIN;
volatile uint8_t x20 = 0U;
uint16_t x26 = 4338U;
int16_t x35 = INT16_MIN;
uint64_t x43 = 20481762728146942LLU;
int16_t x45 = 6;
static volatile int32_t x52 = INT32_MAX;
static volatile int64_t t11 = INT64_MIN;
int8_t x73 = -1;
int8_t x74 = -1;
uint32_t x78 = 8096349U;
uint8_t x87 = UINT8_MAX;
volatile int32_t t20 = -12223663;
static uint64_t x109 = UINT64_MAX;
uint8_t x118 = UINT8_MAX;
uint16_t x126 = 26U;
int8_t x127 = INT8_MIN;
int16_t x128 = -1;
static int16_t x131 = INT16_MIN;
int8_t x139 = INT8_MIN;
static volatile uint32_t t30 = 15086U;
static int32_t x154 = INT32_MAX;
uint8_t x160 = UINT8_MAX;
int16_t x173 = INT16_MAX;
uint16_t x175 = UINT16_MAX;
uint16_t x177 = 6337U;
int8_t x180 = 0;
static int16_t x184 = -568;
volatile int32_t t40 = 12;
volatile uint8_t x195 = UINT8_MAX;
int64_t x196 = 511LL;
int16_t x205 = -1;
int16_t x206 = -146;
int64_t x213 = INT64_MIN;
static uint32_t x222 = 1U;
int64_t t49 = -828322195942LL;
static uint64_t x260 = 1LLU;
volatile uint64_t t52 = 121854226178LLU;
uint32_t x265 = 1128101397U;
volatile uint16_t x270 = UINT16_MAX;
volatile int32_t t54 = -1;
int8_t x277 = 0;
volatile int32_t t56 = -87;
uint32_t x283 = UINT32_MAX;
static int8_t x284 = 0;
uint32_t t57 = 1555U;
int32_t x287 = -1;
volatile int32_t t58 = -12885;
int32_t t59 = 32941;
static int16_t x293 = INT16_MAX;
int64_t x294 = INT64_MIN;
uint8_t x299 = UINT8_MAX;
int16_t x309 = 1;
static volatile uint16_t x314 = 7U;
int64_t x318 = INT64_MIN;
volatile int8_t x320 = -1;
volatile uint64_t t67 = 907LLU;
int16_t x355 = -1;
int16_t x356 = 0;
uint16_t x358 = UINT16_MAX;
int8_t x360 = -1;
int16_t x366 = -1;
volatile uint8_t x367 = 48U;
static int32_t t73 = -493;
volatile uint16_t x377 = 0U;
int32_t x396 = -1;
int8_t x397 = INT8_MAX;
uint16_t x399 = UINT16_MAX;
int16_t x400 = -1;
uint64_t x403 = 708894137881255624LLU;
int8_t x404 = INT8_MIN;
volatile uint32_t x405 = UINT32_MAX;
static int32_t x407 = -2885;
int32_t x418 = INT32_MIN;
int8_t x421 = -3;
uint32_t x422 = 888457180U;
int16_t x426 = -13088;
int8_t x427 = INT8_MIN;
static uint8_t x431 = 118U;
uint64_t t88 = 3887181433LLU;
uint64_t x435 = 104LLU;
volatile int64_t x442 = INT64_MIN;
int8_t x443 = INT8_MAX;
int32_t x452 = INT32_MIN;
volatile uint32_t x459 = UINT32_MAX;
int16_t x461 = INT16_MIN;
int8_t x463 = -28;
int16_t x466 = -1;
uint8_t x467 = 86U;
static int64_t x468 = INT64_MAX;
volatile int64_t t95 = -231LL;
uint32_t t97 = 838185U;
static volatile int64_t x477 = INT64_MIN;
static uint64_t x486 = 15353922LLU;
volatile int32_t t100 = -25560;
int32_t x489 = INT32_MIN;
volatile uint8_t x490 = UINT8_MAX;
volatile int32_t x497 = -1;
uint8_t x498 = 37U;
volatile uint32_t x503 = 1U;
uint64_t t104 = 232692648LLU;
int8_t x509 = 3;
int16_t x510 = INT16_MAX;
int16_t x521 = -1;
int64_t x527 = 1268856483654964545LL;
int64_t t108 = -1968042184836LL;
volatile int64_t x541 = INT64_MIN;
int8_t x544 = 0;
static volatile int32_t t111 = 0;
int64_t x560 = INT64_MIN;
uint64_t x566 = 2691942149LLU;
volatile int8_t x570 = INT8_MAX;
int32_t x572 = -500;
int64_t x575 = -1LL;
uint32_t x576 = UINT32_MAX;
int64_t t116 = 731LL;
volatile int16_t x583 = -87;
int32_t x588 = INT32_MIN;
uint32_t x591 = UINT32_MAX;
int8_t x594 = -1;
int8_t x599 = INT8_MIN;
uint64_t x600 = 3379820LLU;
volatile int64_t t122 = -461180286579LL;
int16_t x608 = INT16_MAX;
int32_t x610 = -11;
int64_t x619 = -1LL;
uint8_t x623 = 0U;
int8_t x624 = 1;
uint16_t x649 = 915U;
int16_t x652 = INT16_MAX;
uint8_t x660 = UINT8_MAX;
int32_t x662 = -31533;
int16_t x673 = -14;
static volatile uint8_t x677 = 1U;
volatile uint8_t x679 = UINT8_MAX;
volatile int32_t t137 = -308994;
int64_t x681 = -1LL;
uint32_t x686 = 407419U;
static uint64_t x693 = 50LLU;
uint64_t x697 = 245LLU;
int8_t x699 = INT8_MAX;
volatile int32_t t141 = -6;
int8_t x702 = -1;
volatile uint64_t x705 = 472896052335LLU;
uint8_t x709 = UINT8_MAX;
int32_t x728 = INT32_MAX;
static int64_t t148 = -16117LL;
int32_t x744 = 55621;
volatile int16_t x763 = -1;
int32_t t153 = -11;
int8_t x772 = -1;
int64_t x777 = INT64_MIN;
uint64_t x790 = 714LLU;
int32_t x791 = -76;
int8_t x794 = INT8_MAX;
static volatile uint8_t x796 = UINT8_MAX;
int32_t x801 = -1;
volatile uint32_t t162 = 17U;
int16_t x809 = INT16_MIN;
volatile uint16_t x810 = 41U;
int64_t t164 = 330LL;
int8_t x818 = INT8_MIN;
volatile uint32_t x822 = UINT32_MAX;
volatile uint64_t x827 = 442013442770270LLU;
volatile uint64_t t167 = 913330892LLU;
int16_t x831 = INT16_MIN;
int16_t x836 = -1;
static int8_t x839 = INT8_MIN;
int32_t x840 = -380633898;
volatile int64_t x845 = -1848270020155669399LL;
static int64_t x847 = -48700553906LL;
int16_t x848 = INT16_MIN;
int8_t x849 = INT8_MIN;
int32_t x851 = 1;
int32_t t173 = -2415;
volatile int32_t t174 = -546156;
static int16_t x860 = -226;
int32_t x864 = INT32_MIN;
uint64_t x878 = 248637603733286LLU;
int64_t x884 = 899931347101LL;
uint8_t x893 = 1U;
int8_t x895 = INT8_MIN;
volatile int8_t x904 = INT8_MIN;
int32_t x908 = -1;
volatile uint8_t x915 = UINT8_MAX;
volatile uint16_t x925 = 13U;
static int64_t x936 = -988690LL;
int64_t t193 = 12786448858LL;
volatile int16_t x948 = -1;
volatile uint8_t x955 = UINT8_MAX;
static int8_t x959 = -1;
int64_t x960 = 176010288495LL;
static int64_t x976 = INT64_MIN;


void f0(void) {
    	uint16_t x2 = 0U;
	int16_t x3 = INT16_MIN;
	volatile int64_t x4 = INT64_MIN;
	volatile int64_t t0 = 539LL;

    t0 = (((x1>x2)-x3)+x4);

    if (t0 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 109060LLU;
	int64_t x7 = 99750565LL;
	int16_t x8 = -1;
	static int64_t t1 = -105450LL;

    t1 = (((x5>x6)-x7)+x8);

    if (t1 != -99750565LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = -1;
	uint64_t x14 = UINT64_MAX;
	static uint8_t x15 = 5U;
	int16_t x16 = 3;
	static int32_t t2 = 11360809;

    t2 = (((x13>x14)-x15)+x16);

    if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = -1;
	uint8_t x19 = 0U;
	int32_t t3 = -37521204;

    t3 = (((x17>x18)-x19)+x20);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x21 = 14227230LLU;
	volatile uint16_t x22 = UINT16_MAX;
	int16_t x23 = INT16_MAX;
	int8_t x24 = INT8_MAX;
	volatile int32_t t4 = 1;

    t4 = (((x21>x22)-x23)+x24);

    if (t4 != -32639) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MAX;
	uint16_t x27 = 1008U;
	static int16_t x28 = INT16_MAX;
	static int32_t t5 = -873541;

    t5 = (((x25>x26)-x27)+x28);

    if (t5 != 31760) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x29 = -1LL;
	uint16_t x30 = UINT16_MAX;
	uint32_t x31 = UINT32_MAX;
	int8_t x32 = -1;
	uint32_t t6 = 21607U;

    t6 = (((x29>x30)-x31)+x32);

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x33 = INT64_MIN;
	volatile int16_t x34 = 5;
	int8_t x36 = -16;
	int32_t t7 = 1;

    t7 = (((x33>x34)-x35)+x36);

    if (t7 != 32752) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x41 = 481550768202897LLU;
	volatile int64_t x42 = 199060075LL;
	int64_t x44 = -1LL;
	static volatile uint64_t t8 = 112LLU;

    t8 = (((x41>x42)-x43)+x44);

    if (t8 != 18426262310981404674LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x46 = 958;
	uint64_t x47 = UINT64_MAX;
	static int32_t x48 = INT32_MAX;
	volatile uint64_t t9 = 136727653LLU;

    t9 = (((x45>x46)-x47)+x48);

    if (t9 != 2147483648LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x49 = -3998;
	int8_t x50 = -12;
	int8_t x51 = 0;
	volatile int32_t t10 = INT32_MAX;

    t10 = (((x49>x50)-x51)+x52);

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x53 = 6645776020072095446LLU;
	volatile int64_t x54 = INT64_MIN;
	uint16_t x55 = 0U;
	int64_t x56 = INT64_MIN;

    t11 = (((x53>x54)-x55)+x56);

    if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x57 = -1;
	int32_t x58 = -3043;
	static volatile int8_t x59 = INT8_MIN;
	volatile int32_t x60 = 13748682;
	static int32_t t12 = -3;

    t12 = (((x57>x58)-x59)+x60);

    if (t12 != 13748811) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x61 = 1;
	volatile int32_t x62 = 3;
	int8_t x63 = 14;
	volatile uint16_t x64 = 28U;
	volatile int32_t t13 = -17;

    t13 = (((x61>x62)-x63)+x64);

    if (t13 != 14) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x65 = INT8_MIN;
	int64_t x66 = -48LL;
	int64_t x67 = -6827389556LL;
	int16_t x68 = INT16_MAX;
	volatile int64_t t14 = 2418113LL;

    t14 = (((x65>x66)-x67)+x68);

    if (t14 != 6827422323LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = INT32_MIN;
	volatile uint8_t x70 = UINT8_MAX;
	int64_t x71 = -7902LL;
	int32_t x72 = INT32_MIN;
	volatile int64_t t15 = -256279098951LL;

    t15 = (((x69>x70)-x71)+x72);

    if (t15 != -2147475746LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x75 = 21259856045068LLU;
	volatile int64_t x76 = INT64_MIN;
	uint64_t t16 = 11276029118182849LLU;

    t16 = (((x73>x74)-x75)+x76);

    if (t16 != 9223350776998730740LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x77 = -20835556912362353LL;
	static int8_t x79 = -1;
	static uint64_t x80 = 8537887900304320LLU;
	static volatile uint64_t t17 = 12277780256LLU;

    t17 = (((x77>x78)-x79)+x80);

    if (t17 != 8537887900304321LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x85 = 284U;
	int8_t x86 = INT8_MIN;
	volatile uint32_t x88 = 47U;
	volatile uint32_t t18 = 2172U;

    t18 = (((x85>x86)-x87)+x88);

    if (t18 != 4294967089U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x89 = 41LLU;
	int16_t x90 = -1278;
	static int8_t x91 = INT8_MIN;
	int64_t x92 = INT64_MIN;
	volatile int64_t t19 = -39LL;

    t19 = (((x89>x90)-x91)+x92);

    if (t19 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x93 = -1;
	int16_t x94 = INT16_MAX;
	static uint8_t x95 = UINT8_MAX;
	int16_t x96 = -3591;

    t20 = (((x93>x94)-x95)+x96);

    if (t20 != -3846) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x101 = 175;
	uint32_t x102 = 331434206U;
	static int8_t x103 = INT8_MIN;
	int32_t x104 = -2873;
	volatile int32_t t21 = -139665;

    t21 = (((x101>x102)-x103)+x104);

    if (t21 != -2745) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int16_t x105 = -1;
	static int16_t x106 = INT16_MIN;
	static int32_t x107 = INT32_MAX;
	static volatile int32_t x108 = -1;
	volatile int32_t t22 = -117820;

    t22 = (((x105>x106)-x107)+x108);

    if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x110 = INT64_MIN;
	uint32_t x111 = 607226U;
	uint16_t x112 = 29917U;
	uint32_t t23 = 2U;

    t23 = (((x109>x110)-x111)+x112);

    if (t23 != 4294389988U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x113 = 91189582126182675LL;
	static uint64_t x114 = UINT64_MAX;
	int16_t x115 = 0;
	volatile int8_t x116 = 13;
	volatile int32_t t24 = 37;

    t24 = (((x113>x114)-x115)+x116);

    if (t24 != 13) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x117 = INT32_MIN;
	int64_t x119 = -20LL;
	int8_t x120 = INT8_MIN;
	int64_t t25 = 90732054215643773LL;

    t25 = (((x117>x118)-x119)+x120);

    if (t25 != -108LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x121 = INT64_MAX;
	uint8_t x122 = 17U;
	volatile int16_t x123 = -4029;
	volatile int32_t x124 = INT32_MIN;
	volatile int32_t t26 = -1004983;

    t26 = (((x121>x122)-x123)+x124);

    if (t26 != -2147479618) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int32_t x125 = -1;
	int32_t t27 = 1388;

    t27 = (((x125>x126)-x127)+x128);

    if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x129 = -1;
	int8_t x130 = INT8_MIN;
	int16_t x132 = 1;
	int32_t t28 = 1026;

    t28 = (((x129>x130)-x131)+x132);

    if (t28 != 32770) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x137 = 106U;
	uint64_t x138 = 154LLU;
	volatile int8_t x140 = -1;
	static volatile int32_t t29 = 3;

    t29 = (((x137>x138)-x139)+x140);

    if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x141 = INT64_MIN;
	volatile uint16_t x142 = 1329U;
	volatile uint32_t x143 = 4924719U;
	int16_t x144 = 0;

    t30 = (((x141>x142)-x143)+x144);

    if (t30 != 4290042577U) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x149 = UINT16_MAX;
	int16_t x150 = INT16_MAX;
	uint16_t x151 = 2U;
	volatile int16_t x152 = INT16_MIN;
	volatile int32_t t31 = 0;

    t31 = (((x149>x150)-x151)+x152);

    if (t31 != -32769) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x153 = 425;
	int64_t x155 = -86780LL;
	int16_t x156 = -1581;
	volatile int64_t t32 = 174969481080LL;

    t32 = (((x153>x154)-x155)+x156);

    if (t32 != 85199LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint32_t x157 = UINT32_MAX;
	int8_t x158 = -1;
	uint16_t x159 = 28U;
	int32_t t33 = -145;

    t33 = (((x157>x158)-x159)+x160);

    if (t33 != 227) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x161 = INT32_MAX;
	int8_t x162 = 2;
	uint16_t x163 = 8U;
	uint64_t x164 = UINT64_MAX;
	uint64_t t34 = 119534165LLU;

    t34 = (((x161>x162)-x163)+x164);

    if (t34 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x165 = UINT16_MAX;
	uint32_t x166 = UINT32_MAX;
	volatile int16_t x167 = INT16_MAX;
	int32_t x168 = -1;
	static volatile int32_t t35 = 122726191;

    t35 = (((x165>x166)-x167)+x168);

    if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x169 = -1;
	volatile uint8_t x170 = UINT8_MAX;
	int16_t x171 = -1;
	static int16_t x172 = INT16_MAX;
	int32_t t36 = 17;

    t36 = (((x169>x170)-x171)+x172);

    if (t36 != 32768) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x174 = 1U;
	volatile uint64_t x176 = UINT64_MAX;
	static volatile uint64_t t37 = 79570LLU;

    t37 = (((x173>x174)-x175)+x176);

    if (t37 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x178 = 36866U;
	volatile int16_t x179 = -1;
	volatile int32_t t38 = -1;

    t38 = (((x177>x178)-x179)+x180);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x181 = -1;
	int16_t x182 = INT16_MIN;
	int8_t x183 = 1;
	int32_t t39 = -3627552;

    t39 = (((x181>x182)-x183)+x184);

    if (t39 != -568) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x185 = INT32_MAX;
	static uint32_t x186 = UINT32_MAX;
	static int8_t x187 = -3;
	static uint16_t x188 = 0U;

    t40 = (((x185>x186)-x187)+x188);

    if (t40 != 3) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x189 = -39607104LL;
	uint32_t x190 = UINT32_MAX;
	int16_t x191 = -1;
	int64_t x192 = -228LL;
	static volatile int64_t t41 = 1573927144698LL;

    t41 = (((x189>x190)-x191)+x192);

    if (t41 != -227LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x193 = -1;
	int32_t x194 = INT32_MIN;
	int64_t t42 = 0LL;

    t42 = (((x193>x194)-x195)+x196);

    if (t42 != 257LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x201 = 3;
	static int64_t x202 = 62552LL;
	uint16_t x203 = 2396U;
	static int16_t x204 = 153;
	static int32_t t43 = 17;

    t43 = (((x201>x202)-x203)+x204);

    if (t43 != -2243) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x207 = 1;
	static int64_t x208 = INT64_MIN;
	volatile int64_t t44 = INT64_MIN;

    t44 = (((x205>x206)-x207)+x208);

    if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x209 = -165;
	volatile int16_t x210 = -122;
	uint8_t x211 = UINT8_MAX;
	static uint32_t x212 = UINT32_MAX;
	volatile uint32_t t45 = 1408131145U;

    t45 = (((x209>x210)-x211)+x212);

    if (t45 != 4294967040U) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x214 = -1;
	static int32_t x215 = -347394282;
	int64_t x216 = INT64_MIN;
	volatile int64_t t46 = 8501LL;

    t46 = (((x213>x214)-x215)+x216);

    if (t46 != -9223372036507381526LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int32_t x217 = -80;
	uint16_t x218 = 12165U;
	int8_t x219 = 0;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t47 = -81193;

    t47 = (((x217>x218)-x219)+x220);

    if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x221 = INT8_MAX;
	volatile int64_t x223 = -1LL;
	static int64_t x224 = INT64_MIN;
	volatile int64_t t48 = 96671LL;

    t48 = (((x221>x222)-x223)+x224);

    if (t48 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x225 = 3392U;
	int64_t x226 = INT64_MIN;
	int64_t x227 = 2LL;
	static int8_t x228 = -1;

    t49 = (((x225>x226)-x227)+x228);

    if (t49 != -2LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x237 = 0U;
	volatile int64_t x238 = INT64_MIN;
	static uint16_t x239 = 976U;
	uint16_t x240 = 1982U;
	int32_t t50 = 238262112;

    t50 = (((x237>x238)-x239)+x240);

    if (t50 != 1007) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x245 = INT32_MIN;
	volatile int16_t x246 = INT16_MAX;
	int16_t x247 = 87;
	uint32_t x248 = UINT32_MAX;
	uint32_t t51 = 17U;

    t51 = (((x245>x246)-x247)+x248);

    if (t51 != 4294967208U) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x257 = 6950080;
	int64_t x258 = -22850067392LL;
	int8_t x259 = INT8_MAX;

    t52 = (((x257>x258)-x259)+x260);

    if (t52 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x266 = 30U;
	int32_t x267 = INT32_MAX;
	uint32_t x268 = 1529U;
	uint32_t t53 = 686627U;

    t53 = (((x265>x266)-x267)+x268);

    if (t53 != 2147485179U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x269 = 2128U;
	volatile int16_t x271 = -1;
	static int16_t x272 = -1;

    t54 = (((x269>x270)-x271)+x272);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x273 = INT64_MAX;
	int64_t x274 = INT64_MIN;
	int16_t x275 = -1;
	uint8_t x276 = UINT8_MAX;
	int32_t t55 = -7;

    t55 = (((x273>x274)-x275)+x276);

    if (t55 != 257) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x278 = 23U;
	uint8_t x279 = 14U;
	uint16_t x280 = 1564U;

    t56 = (((x277>x278)-x279)+x280);

    if (t56 != 1550) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x281 = INT32_MIN;
	int32_t x282 = INT32_MAX;

    t57 = (((x281>x282)-x283)+x284);

    if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x285 = INT16_MIN;
	uint16_t x286 = 0U;
	static uint8_t x288 = 3U;

    t58 = (((x285>x286)-x287)+x288);

    if (t58 != 4) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x289 = -1;
	int8_t x290 = INT8_MIN;
	int16_t x291 = INT16_MIN;
	static int8_t x292 = INT8_MIN;

    t59 = (((x289>x290)-x291)+x292);

    if (t59 != 32641) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint16_t x295 = 251U;
	volatile int16_t x296 = -23;
	volatile int32_t t60 = 13934;

    t60 = (((x293>x294)-x295)+x296);

    if (t60 != -273) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x297 = INT32_MAX;
	int64_t x298 = -1LL;
	volatile uint64_t x300 = 760895663755635LLU;
	uint64_t t61 = 67447240042857LLU;

    t61 = (((x297>x298)-x299)+x300);

    if (t61 != 760895663755381LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x305 = 4731809210438916363LLU;
	volatile int16_t x306 = INT16_MIN;
	static int16_t x307 = -4077;
	volatile int8_t x308 = INT8_MAX;
	volatile int32_t t62 = -194;

    t62 = (((x305>x306)-x307)+x308);

    if (t62 != 4204) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x310 = -1LL;
	int32_t x311 = -1;
	int32_t x312 = 14;
	int32_t t63 = 3714683;

    t63 = (((x309>x310)-x311)+x312);

    if (t63 != 16) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x313 = INT8_MAX;
	static int32_t x315 = -1;
	uint8_t x316 = UINT8_MAX;
	int32_t t64 = -25387;

    t64 = (((x313>x314)-x315)+x316);

    if (t64 != 257) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x317 = 6U;
	int8_t x319 = INT8_MIN;
	int32_t t65 = 268679266;

    t65 = (((x317>x318)-x319)+x320);

    if (t65 != 128) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x325 = INT32_MAX;
	uint64_t x326 = 12LLU;
	static uint16_t x327 = 16295U;
	uint32_t x328 = 635U;
	uint32_t t66 = 6U;

    t66 = (((x325>x326)-x327)+x328);

    if (t66 != 4294951637U) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x329 = INT32_MAX;
	int64_t x330 = INT64_MIN;
	volatile uint64_t x331 = 1086183895978LLU;
	static volatile int64_t x332 = 3LL;

    t67 = (((x329>x330)-x331)+x332);

    if (t67 != 18446742987525655642LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x333 = 1U;
	uint8_t x334 = 26U;
	int8_t x335 = -1;
	int8_t x336 = INT8_MIN;
	int32_t t68 = 34;

    t68 = (((x333>x334)-x335)+x336);

    if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x337 = -1;
	volatile int64_t x338 = -1LL;
	int16_t x339 = -1;
	uint64_t x340 = 8750423465LLU;
	volatile uint64_t t69 = 146450499535LLU;

    t69 = (((x337>x338)-x339)+x340);

    if (t69 != 8750423466LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x353 = INT32_MAX;
	uint8_t x354 = 3U;
	volatile int32_t t70 = 2361;

    t70 = (((x353>x354)-x355)+x356);

    if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x357 = -1;
	int64_t x359 = -4LL;
	static int64_t t71 = -2LL;

    t71 = (((x357>x358)-x359)+x360);

    if (t71 != 3LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x361 = 7;
	int16_t x362 = INT16_MIN;
	static int64_t x363 = -22LL;
	int64_t x364 = INT64_MIN;
	volatile int64_t t72 = 26230973LL;

    t72 = (((x361>x362)-x363)+x364);

    if (t72 != -9223372036854775785LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x365 = -2113;
	volatile int16_t x368 = INT16_MAX;

    t73 = (((x365>x366)-x367)+x368);

    if (t73 != 32719) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x373 = -2695747061666LL;
	int64_t x374 = INT64_MIN;
	int32_t x375 = -1;
	int8_t x376 = INT8_MIN;
	int32_t t74 = -54616277;

    t74 = (((x373>x374)-x375)+x376);

    if (t74 != -126) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x378 = -40;
	int64_t x379 = 34932667723392LL;
	int16_t x380 = -1;
	int64_t t75 = -22149LL;

    t75 = (((x377>x378)-x379)+x380);

    if (t75 != -34932667723392LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x381 = -221644;
	static int64_t x382 = INT64_MIN;
	volatile int8_t x383 = INT8_MIN;
	int32_t x384 = -1;
	int32_t t76 = -3;

    t76 = (((x381>x382)-x383)+x384);

    if (t76 != 128) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x385 = -1;
	int32_t x386 = -9008;
	static uint8_t x387 = UINT8_MAX;
	uint64_t x388 = UINT64_MAX;
	static uint64_t t77 = 53LLU;

    t77 = (((x385>x386)-x387)+x388);

    if (t77 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x389 = 4971U;
	int16_t x390 = -19;
	volatile uint64_t x391 = 529389930587LLU;
	static uint8_t x392 = UINT8_MAX;
	volatile uint64_t t78 = 383429LLU;

    t78 = (((x389>x390)-x391)+x392);

    if (t78 != 18446743544319621284LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x393 = 420018975LL;
	volatile uint8_t x394 = UINT8_MAX;
	uint16_t x395 = 1U;
	int32_t t79 = 215;

    t79 = (((x393>x394)-x395)+x396);

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x398 = 426;
	int32_t t80 = 119042;

    t80 = (((x397>x398)-x399)+x400);

    if (t80 != -65536) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x401 = INT16_MIN;
	int8_t x402 = 0;
	volatile uint64_t t81 = 2LLU;

    t81 = (((x401>x402)-x403)+x404);

    if (t81 != 17737849935828295864LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x406 = -1;
	static uint8_t x408 = 7U;
	volatile int32_t t82 = 254615046;

    t82 = (((x405>x406)-x407)+x408);

    if (t82 != 2892) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x409 = INT32_MAX;
	uint16_t x410 = 1082U;
	volatile int64_t x411 = -1LL;
	uint16_t x412 = 1646U;
	volatile int64_t t83 = 1109076375LL;

    t83 = (((x409>x410)-x411)+x412);

    if (t83 != 1648LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x413 = 6;
	int8_t x414 = -1;
	uint32_t x415 = 1380U;
	int32_t x416 = INT32_MIN;
	uint32_t t84 = 2143911854U;

    t84 = (((x413>x414)-x415)+x416);

    if (t84 != 2147482269U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x417 = 0U;
	volatile int8_t x419 = -3;
	static uint32_t x420 = 77800381U;
	volatile uint32_t t85 = 67U;

    t85 = (((x417>x418)-x419)+x420);

    if (t85 != 77800385U) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x423 = INT16_MAX;
	uint8_t x424 = 10U;
	static int32_t t86 = 3513151;

    t86 = (((x421>x422)-x423)+x424);

    if (t86 != -32756) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x425 = INT16_MIN;
	static int8_t x428 = INT8_MIN;
	int32_t t87 = 947;

    t87 = (((x425>x426)-x427)+x428);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x429 = 18989U;
	int8_t x430 = INT8_MIN;
	volatile uint64_t x432 = 4937LLU;

    t88 = (((x429>x430)-x431)+x432);

    if (t88 != 4820LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x433 = 25U;
	int64_t x434 = -104630298564229LL;
	static volatile int32_t x436 = -72349762;
	volatile uint64_t t89 = 19488299LLU;

    t89 = (((x433>x434)-x435)+x436);

    if (t89 != 18446744073637201751LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x437 = INT64_MAX;
	volatile int16_t x438 = -191;
	int8_t x439 = INT8_MIN;
	int8_t x440 = INT8_MAX;
	int32_t t90 = -2129;

    t90 = (((x437>x438)-x439)+x440);

    if (t90 != 256) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x441 = 1016U;
	volatile int16_t x444 = -1;
	static int32_t t91 = -14721267;

    t91 = (((x441>x442)-x443)+x444);

    if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x449 = INT32_MIN;
	int64_t x450 = INT64_MIN;
	int16_t x451 = -24;
	static volatile int32_t t92 = 34;

    t92 = (((x449>x450)-x451)+x452);

    if (t92 != -2147483623) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x457 = 28117U;
	static int8_t x458 = -1;
	int64_t x460 = -1LL;
	int64_t t93 = 113045LL;

    t93 = (((x457>x458)-x459)+x460);

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x462 = UINT64_MAX;
	int64_t x464 = INT64_MIN;
	volatile int64_t t94 = 20168285409074LL;

    t94 = (((x461>x462)-x463)+x464);

    if (t94 != -9223372036854775780LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x465 = UINT32_MAX;

    t95 = (((x465>x466)-x467)+x468);

    if (t95 != 9223372036854775721LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x469 = -1;
	int64_t x470 = -1LL;
	volatile int64_t x471 = -1LL;
	int64_t x472 = 1550244787317LL;
	volatile int64_t t96 = 12371610121LL;

    t96 = (((x469>x470)-x471)+x472);

    if (t96 != 1550244787318LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x473 = UINT16_MAX;
	int8_t x474 = -3;
	uint32_t x475 = UINT32_MAX;
	volatile int16_t x476 = INT16_MAX;

    t97 = (((x473>x474)-x475)+x476);

    if (t97 != 32769U) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x478 = 0;
	uint32_t x479 = 202819375U;
	volatile uint8_t x480 = 35U;
	uint32_t t98 = 0U;

    t98 = (((x477>x478)-x479)+x480);

    if (t98 != 4092147956U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x481 = 156;
	volatile uint8_t x482 = 2U;
	uint64_t x483 = UINT64_MAX;
	int64_t x484 = 1LL;
	uint64_t t99 = 340824971LLU;

    t99 = (((x481>x482)-x483)+x484);

    if (t99 != 3LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x485 = INT64_MIN;
	int8_t x487 = -1;
	int32_t x488 = -1;

    t100 = (((x485>x486)-x487)+x488);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint8_t x491 = UINT8_MAX;
	int64_t x492 = -19194918669835765LL;
	static volatile int64_t t101 = -14120535LL;

    t101 = (((x489>x490)-x491)+x492);

    if (t101 != -19194918669836020LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x493 = INT64_MIN;
	volatile int64_t x494 = -221256353236LL;
	int8_t x495 = 1;
	static uint8_t x496 = UINT8_MAX;
	volatile int32_t t102 = 13;

    t102 = (((x493>x494)-x495)+x496);

    if (t102 != 254) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x499 = 59889981;
	uint64_t x500 = 2191284759060360202LLU;
	uint64_t t103 = 1940LLU;

    t103 = (((x497>x498)-x499)+x500);

    if (t103 != 2191284759000470221LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x501 = INT8_MAX;
	int16_t x502 = INT16_MAX;
	uint64_t x504 = 18117239664LLU;

    t104 = (((x501>x502)-x503)+x504);

    if (t104 != 22412206959LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x511 = 28398634835LLU;
	uint16_t x512 = 22U;
	uint64_t t105 = 237161579258838012LLU;

    t105 = (((x509>x510)-x511)+x512);

    if (t105 != 18446744045310916803LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x517 = INT16_MIN;
	uint8_t x518 = 1U;
	int16_t x519 = INT16_MIN;
	uint8_t x520 = 2U;
	int32_t t106 = 15241;

    t106 = (((x517>x518)-x519)+x520);

    if (t106 != 32770) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x522 = INT64_MIN;
	int8_t x523 = INT8_MAX;
	uint16_t x524 = UINT16_MAX;
	volatile int32_t t107 = 3412489;

    t107 = (((x521>x522)-x523)+x524);

    if (t107 != 65409) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x525 = INT64_MAX;
	static int64_t x526 = 484755722916017397LL;
	static int64_t x528 = INT64_MAX;

    t108 = (((x525>x526)-x527)+x528);

    if (t108 != 7954515553199811263LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x533 = 15;
	int16_t x534 = 1;
	int16_t x535 = -384;
	int8_t x536 = INT8_MIN;
	volatile int32_t t109 = -446;

    t109 = (((x533>x534)-x535)+x536);

    if (t109 != 257) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x537 = INT8_MIN;
	static int64_t x538 = -223444308062LL;
	uint32_t x539 = UINT32_MAX;
	volatile int16_t x540 = INT16_MIN;
	uint32_t t110 = 2291915U;

    t110 = (((x537>x538)-x539)+x540);

    if (t110 != 4294934530U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x542 = 247LLU;
	int16_t x543 = INT16_MIN;

    t111 = (((x541>x542)-x543)+x544);

    if (t111 != 32769) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x553 = INT64_MAX;
	int8_t x554 = INT8_MIN;
	int64_t x555 = -314441LL;
	int16_t x556 = 3;
	int64_t t112 = 634652LL;

    t112 = (((x553>x554)-x555)+x556);

    if (t112 != 314445LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x557 = 35438571217914630LL;
	static uint32_t x558 = UINT32_MAX;
	int8_t x559 = -31;
	int64_t t113 = 389712473LL;

    t113 = (((x557>x558)-x559)+x560);

    if (t113 != -9223372036854775776LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x565 = UINT64_MAX;
	uint8_t x567 = 77U;
	volatile int8_t x568 = INT8_MIN;
	volatile int32_t t114 = -565774;

    t114 = (((x565>x566)-x567)+x568);

    if (t114 != -204) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x569 = 1337616354LLU;
	int16_t x571 = INT16_MAX;
	int32_t t115 = 15;

    t115 = (((x569>x570)-x571)+x572);

    if (t115 != -33266) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x573 = INT8_MIN;
	static int32_t x574 = 772;

    t116 = (((x573>x574)-x575)+x576);

    if (t116 != 4294967296LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x581 = INT8_MAX;
	uint16_t x582 = 11U;
	static uint64_t x584 = UINT64_MAX;
	static volatile uint64_t t117 = 175303101051LLU;

    t117 = (((x581>x582)-x583)+x584);

    if (t117 != 87LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x585 = INT16_MAX;
	int64_t x586 = -1LL;
	int32_t x587 = -184;
	volatile int32_t t118 = 15500908;

    t118 = (((x585>x586)-x587)+x588);

    if (t118 != -2147483463) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x589 = -665;
	int64_t x590 = INT64_MIN;
	int64_t x592 = INT64_MIN;
	int64_t t119 = 509801LL;

    t119 = (((x589>x590)-x591)+x592);

    if (t119 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x593 = UINT16_MAX;
	static int8_t x595 = -1;
	int16_t x596 = 198;
	volatile int32_t t120 = 491;

    t120 = (((x593>x594)-x595)+x596);

    if (t120 != 200) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x597 = INT8_MAX;
	int32_t x598 = 213;
	volatile uint64_t t121 = 678099247LLU;

    t121 = (((x597>x598)-x599)+x600);

    if (t121 != 3379948LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x601 = UINT8_MAX;
	int16_t x602 = INT16_MAX;
	int64_t x603 = INT64_MAX;
	uint32_t x604 = 8719U;

    t122 = (((x601>x602)-x603)+x604);

    if (t122 != -9223372036854767088LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x605 = INT16_MAX;
	int32_t x606 = -1;
	int64_t x607 = 1652LL;
	static volatile int64_t t123 = 9LL;

    t123 = (((x605>x606)-x607)+x608);

    if (t123 != 31116LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x609 = 9;
	int32_t x611 = -3407;
	uint16_t x612 = 623U;
	static int32_t t124 = -2;

    t124 = (((x609>x610)-x611)+x612);

    if (t124 != 4031) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x617 = 12;
	uint8_t x618 = 0U;
	uint16_t x620 = 611U;
	static int64_t t125 = 4220390085344291186LL;

    t125 = (((x617>x618)-x619)+x620);

    if (t125 != 613LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x621 = INT8_MIN;
	int32_t x622 = -1;
	volatile int32_t t126 = 33488102;

    t126 = (((x621>x622)-x623)+x624);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x625 = INT32_MIN;
	int8_t x626 = -1;
	int64_t x627 = -3667577678885LL;
	uint8_t x628 = 123U;
	volatile int64_t t127 = -788553LL;

    t127 = (((x625>x626)-x627)+x628);

    if (t127 != 3667577679008LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x629 = 15U;
	uint8_t x630 = 1U;
	static uint16_t x631 = UINT16_MAX;
	int64_t x632 = 25255757411952LL;
	int64_t t128 = 0LL;

    t128 = (((x629>x630)-x631)+x632);

    if (t128 != 25255757346418LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x637 = INT64_MAX;
	int8_t x638 = INT8_MIN;
	static volatile uint8_t x639 = 116U;
	uint32_t x640 = 161U;
	static uint32_t t129 = 1058581172U;

    t129 = (((x637>x638)-x639)+x640);

    if (t129 != 46U) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x641 = INT8_MIN;
	static int32_t x642 = -2;
	int16_t x643 = 23;
	uint64_t x644 = 312757325517003083LLU;
	uint64_t t130 = 5878365LLU;

    t130 = (((x641>x642)-x643)+x644);

    if (t130 != 312757325517003060LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x650 = 3506305U;
	uint16_t x651 = 3516U;
	static volatile int32_t t131 = -45515;

    t131 = (((x649>x650)-x651)+x652);

    if (t131 != 29251) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x657 = 8071827884LL;
	volatile int32_t x658 = -1;
	int32_t x659 = -1;
	int32_t t132 = 146773;

    t132 = (((x657>x658)-x659)+x660);

    if (t132 != 257) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x661 = 8082563399808270LLU;
	static int8_t x663 = INT8_MIN;
	int16_t x664 = -22;
	volatile int32_t t133 = 300139337;

    t133 = (((x661>x662)-x663)+x664);

    if (t133 != 106) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x665 = 4978U;
	volatile int8_t x666 = -2;
	int16_t x667 = INT16_MAX;
	static int8_t x668 = -2;
	static int32_t t134 = -35143217;

    t134 = (((x665>x666)-x667)+x668);

    if (t134 != -32768) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x669 = -1;
	int32_t x670 = INT32_MIN;
	int32_t x671 = INT32_MAX;
	int64_t x672 = -1LL;
	static volatile int64_t t135 = 34629LL;

    t135 = (((x669>x670)-x671)+x672);

    if (t135 != -2147483647LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x674 = UINT64_MAX;
	int8_t x675 = INT8_MIN;
	volatile int64_t x676 = 12LL;
	static volatile int64_t t136 = -22782026153LL;

    t136 = (((x673>x674)-x675)+x676);

    if (t136 != 140LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x678 = INT16_MIN;
	volatile int16_t x680 = 18;

    t137 = (((x677>x678)-x679)+x680);

    if (t137 != -236) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x682 = INT16_MIN;
	volatile int8_t x683 = INT8_MIN;
	int16_t x684 = -111;
	volatile int32_t t138 = -3268289;

    t138 = (((x681>x682)-x683)+x684);

    if (t138 != 18) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x685 = INT64_MIN;
	volatile uint32_t x687 = 438U;
	volatile int16_t x688 = -1139;
	static volatile uint32_t t139 = 241142233U;

    t139 = (((x685>x686)-x687)+x688);

    if (t139 != 4294965719U) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x694 = 52U;
	volatile int8_t x695 = 0;
	int32_t x696 = INT32_MAX;
	static volatile int32_t t140 = INT32_MAX;

    t140 = (((x693>x694)-x695)+x696);

    if (t140 != INT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x698 = INT64_MAX;
	static int16_t x700 = INT16_MIN;

    t141 = (((x697>x698)-x699)+x700);

    if (t141 != -32895) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x701 = INT8_MIN;
	int16_t x703 = INT16_MAX;
	int8_t x704 = INT8_MIN;
	static int32_t t142 = -28215796;

    t142 = (((x701>x702)-x703)+x704);

    if (t142 != -32895) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x706 = UINT16_MAX;
	int32_t x707 = -1;
	static volatile int16_t x708 = -1;
	volatile int32_t t143 = -6427665;

    t143 = (((x705>x706)-x707)+x708);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x710 = -17890685LL;
	static int8_t x711 = INT8_MIN;
	volatile uint32_t x712 = UINT32_MAX;
	volatile uint32_t t144 = 538853463U;

    t144 = (((x709>x710)-x711)+x712);

    if (t144 != 128U) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x717 = INT32_MIN;
	static int64_t x718 = INT64_MIN;
	uint8_t x719 = UINT8_MAX;
	int64_t x720 = -30287976LL;
	int64_t t145 = 41233394358688724LL;

    t145 = (((x717>x718)-x719)+x720);

    if (t145 != -30288230LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x721 = -1;
	int16_t x722 = INT16_MIN;
	uint32_t x723 = 2U;
	uint32_t x724 = UINT32_MAX;
	volatile uint32_t t146 = 1863851U;

    t146 = (((x721>x722)-x723)+x724);

    if (t146 != 4294967294U) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x725 = INT32_MIN;
	volatile int8_t x726 = INT8_MIN;
	uint32_t x727 = 1644U;
	static uint32_t t147 = 34U;

    t147 = (((x725>x726)-x727)+x728);

    if (t147 != 2147482003U) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x733 = INT16_MIN;
	uint64_t x734 = 7288259975421LLU;
	int64_t x735 = -1LL;
	int32_t x736 = -1;

    t148 = (((x733>x734)-x735)+x736);

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x741 = INT64_MIN;
	uint16_t x742 = 42U;
	volatile int16_t x743 = INT16_MIN;
	int32_t t149 = 5;

    t149 = (((x741>x742)-x743)+x744);

    if (t149 != 88389) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x745 = 17;
	int16_t x746 = INT16_MIN;
	int8_t x747 = INT8_MIN;
	static int8_t x748 = INT8_MIN;
	int32_t t150 = 1;

    t150 = (((x745>x746)-x747)+x748);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x749 = 6452257U;
	volatile uint8_t x750 = 2U;
	int16_t x751 = -162;
	int16_t x752 = INT16_MAX;
	volatile int32_t t151 = 13147;

    t151 = (((x749>x750)-x751)+x752);

    if (t151 != 32930) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x757 = 32204LLU;
	int32_t x758 = INT32_MIN;
	static uint16_t x759 = UINT16_MAX;
	uint32_t x760 = 264U;
	static volatile uint32_t t152 = 19U;

    t152 = (((x757>x758)-x759)+x760);

    if (t152 != 4294902025U) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x761 = UINT64_MAX;
	int8_t x762 = -1;
	int32_t x764 = INT32_MIN;

    t153 = (((x761>x762)-x763)+x764);

    if (t153 != -2147483647) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x769 = INT32_MAX;
	static volatile int8_t x770 = INT8_MIN;
	static volatile uint8_t x771 = UINT8_MAX;
	volatile int32_t t154 = -28;

    t154 = (((x769>x770)-x771)+x772);

    if (t154 != -255) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x773 = UINT32_MAX;
	static int64_t x774 = INT64_MIN;
	int8_t x775 = -1;
	int8_t x776 = INT8_MIN;
	volatile int32_t t155 = 3994;

    t155 = (((x773>x774)-x775)+x776);

    if (t155 != -126) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x778 = -1LL;
	int32_t x779 = INT32_MAX;
	static int32_t x780 = 1;
	int32_t t156 = 5072713;

    t156 = (((x777>x778)-x779)+x780);

    if (t156 != -2147483646) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x781 = UINT64_MAX;
	static int64_t x782 = -3383LL;
	static int8_t x783 = INT8_MAX;
	volatile uint64_t x784 = UINT64_MAX;
	volatile uint64_t t157 = 6763652163250LLU;

    t157 = (((x781>x782)-x783)+x784);

    if (t157 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x785 = INT64_MAX;
	int8_t x786 = 0;
	static volatile int64_t x787 = -3LL;
	static uint8_t x788 = 36U;
	int64_t t158 = -10931412336LL;

    t158 = (((x785>x786)-x787)+x788);

    if (t158 != 40LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x789 = UINT16_MAX;
	uint16_t x792 = UINT16_MAX;
	volatile int32_t t159 = -808682789;

    t159 = (((x789>x790)-x791)+x792);

    if (t159 != 65612) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x793 = 14LLU;
	volatile int8_t x795 = 0;
	int32_t t160 = -11;

    t160 = (((x793>x794)-x795)+x796);

    if (t160 != 255) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x797 = UINT16_MAX;
	int32_t x798 = INT32_MIN;
	uint32_t x799 = 59533382U;
	int32_t x800 = -142457821;
	volatile uint32_t t161 = 41288388U;

    t161 = (((x797>x798)-x799)+x800);

    if (t161 != 4092976094U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x802 = 6659991U;
	static volatile int32_t x803 = -1;
	static uint32_t x804 = 377U;

    t162 = (((x801>x802)-x803)+x804);

    if (t162 != 379U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x805 = INT8_MAX;
	volatile uint8_t x806 = 12U;
	int32_t x807 = INT32_MAX;
	static int8_t x808 = -1;
	volatile int32_t t163 = 5934;

    t163 = (((x805>x806)-x807)+x808);

    if (t163 != -2147483647) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x811 = INT8_MIN;
	int64_t x812 = INT64_MIN;

    t164 = (((x809>x810)-x811)+x812);

    if (t164 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x817 = INT8_MAX;
	int16_t x819 = -3;
	volatile int64_t x820 = 22984119407LL;
	volatile int64_t t165 = 53894LL;

    t165 = (((x817>x818)-x819)+x820);

    if (t165 != 22984119411LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x821 = -1LL;
	uint64_t x823 = 72240LLU;
	static int16_t x824 = -1;
	uint64_t t166 = 4LLU;

    t166 = (((x821>x822)-x823)+x824);

    if (t166 != 18446744073709479375LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x825 = 2590333672252988550LL;
	int32_t x826 = INT32_MAX;
	uint64_t x828 = 785376160844LLU;

    t167 = (((x825>x826)-x827)+x828);

    if (t167 != 18446302845642942191LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x829 = INT16_MIN;
	int32_t x830 = -3;
	volatile int8_t x832 = 2;
	int32_t t168 = 901;

    t168 = (((x829>x830)-x831)+x832);

    if (t168 != 32770) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x833 = UINT64_MAX;
	uint32_t x834 = 7519U;
	volatile int16_t x835 = 1;
	static volatile int32_t t169 = 104899633;

    t169 = (((x833>x834)-x835)+x836);

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x837 = UINT64_MAX;
	int64_t x838 = -1LL;
	int32_t t170 = 54032;

    t170 = (((x837>x838)-x839)+x840);

    if (t170 != -380633770) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x841 = INT32_MIN;
	int8_t x842 = 1;
	int8_t x843 = -1;
	int64_t x844 = 10071628991143LL;
	int64_t t171 = -25LL;

    t171 = (((x841>x842)-x843)+x844);

    if (t171 != 10071628991144LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x846 = UINT64_MAX;
	volatile int64_t t172 = -4213656541LL;

    t172 = (((x845>x846)-x847)+x848);

    if (t172 != 48700521138LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x850 = INT8_MAX;
	int16_t x852 = -1;

    t173 = (((x849>x850)-x851)+x852);

    if (t173 != -2) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x853 = 33U;
	static uint64_t x854 = 164198714LLU;
	static int32_t x855 = INT32_MAX;
	int8_t x856 = 0;

    t174 = (((x853>x854)-x855)+x856);

    if (t174 != -2147483647) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x857 = UINT8_MAX;
	volatile int16_t x858 = INT16_MIN;
	int8_t x859 = -4;
	int32_t t175 = -30;

    t175 = (((x857>x858)-x859)+x860);

    if (t175 != -221) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x861 = 3LLU;
	int8_t x862 = INT8_MIN;
	uint64_t x863 = 1281601171675841843LLU;
	uint64_t t176 = 21600965792LLU;

    t176 = (((x861>x862)-x863)+x864);

    if (t176 != 17165142899886226125LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x869 = INT32_MAX;
	static volatile uint16_t x870 = 2U;
	uint64_t x871 = 65105989LLU;
	uint8_t x872 = UINT8_MAX;
	uint64_t t177 = 5194125LLU;

    t177 = (((x869>x870)-x871)+x872);

    if (t177 != 18446744073644445883LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x873 = -1;
	int32_t x874 = INT32_MIN;
	int8_t x875 = INT8_MAX;
	static int32_t x876 = -1;
	volatile int32_t t178 = 96699;

    t178 = (((x873>x874)-x875)+x876);

    if (t178 != -127) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x877 = UINT32_MAX;
	int64_t x879 = INT64_MAX;
	uint16_t x880 = UINT16_MAX;
	int64_t t179 = 123LL;

    t179 = (((x877>x878)-x879)+x880);

    if (t179 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x881 = -1;
	int64_t x882 = -886029398827LL;
	volatile int16_t x883 = 1;
	int64_t t180 = 17519136LL;

    t180 = (((x881>x882)-x883)+x884);

    if (t180 != 899931347101LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x889 = INT32_MAX;
	static uint8_t x890 = 34U;
	int64_t x891 = -1LL;
	int32_t x892 = 1293;
	int64_t t181 = -2050576939992306LL;

    t181 = (((x889>x890)-x891)+x892);

    if (t181 != 1295LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x894 = INT8_MIN;
	static uint16_t x896 = UINT16_MAX;
	volatile int32_t t182 = 12862879;

    t182 = (((x893>x894)-x895)+x896);

    if (t182 != 65664) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int64_t x897 = -24217031LL;
	int64_t x898 = INT64_MIN;
	uint8_t x899 = UINT8_MAX;
	static volatile uint64_t x900 = UINT64_MAX;
	volatile uint64_t t183 = 113LLU;

    t183 = (((x897>x898)-x899)+x900);

    if (t183 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x901 = 0;
	int64_t x902 = -1LL;
	int8_t x903 = INT8_MIN;
	int32_t t184 = 791015;

    t184 = (((x901>x902)-x903)+x904);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x905 = INT64_MAX;
	int8_t x906 = 1;
	volatile int16_t x907 = INT16_MAX;
	static int32_t t185 = -15;

    t185 = (((x905>x906)-x907)+x908);

    if (t185 != -32767) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x909 = -1LL;
	uint8_t x910 = 2U;
	int8_t x911 = -1;
	uint32_t x912 = UINT32_MAX;
	volatile uint32_t t186 = 102U;

    t186 = (((x909>x910)-x911)+x912);

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x913 = -12612;
	static int64_t x914 = INT64_MIN;
	volatile int16_t x916 = -3381;
	volatile int32_t t187 = -6487;

    t187 = (((x913>x914)-x915)+x916);

    if (t187 != -3635) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int32_t x917 = INT32_MAX;
	uint32_t x918 = UINT32_MAX;
	int8_t x919 = INT8_MAX;
	int16_t x920 = -913;
	int32_t t188 = 101367327;

    t188 = (((x917>x918)-x919)+x920);

    if (t188 != -1040) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x921 = INT64_MAX;
	static volatile int32_t x922 = -85006844;
	uint16_t x923 = UINT16_MAX;
	uint64_t x924 = UINT64_MAX;
	uint64_t t189 = 8033791359004LLU;

    t189 = (((x921>x922)-x923)+x924);

    if (t189 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x926 = INT64_MIN;
	volatile int16_t x927 = INT16_MIN;
	uint8_t x928 = UINT8_MAX;
	volatile int32_t t190 = 1451;

    t190 = (((x925>x926)-x927)+x928);

    if (t190 != 33024) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x929 = INT64_MIN;
	static int8_t x930 = 6;
	static int32_t x931 = -30919430;
	static uint64_t x932 = UINT64_MAX;
	static uint64_t t191 = 1433138762087875264LLU;

    t191 = (((x929>x930)-x931)+x932);

    if (t191 != 30919429LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x933 = -1;
	static volatile uint32_t x934 = 5915780U;
	uint32_t x935 = 73079U;
	volatile int64_t t192 = -51690374LL;

    t192 = (((x933>x934)-x935)+x936);

    if (t192 != 4293905528LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x937 = 492;
	static uint8_t x938 = UINT8_MAX;
	uint32_t x939 = 508443U;
	int64_t x940 = -1LL;

    t193 = (((x937>x938)-x939)+x940);

    if (t193 != 4294458853LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x941 = 0U;
	static volatile uint16_t x942 = 8866U;
	static uint16_t x943 = 107U;
	uint16_t x944 = 32014U;
	volatile int32_t t194 = 116;

    t194 = (((x941>x942)-x943)+x944);

    if (t194 != 31907) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x945 = INT8_MIN;
	int8_t x946 = -31;
	volatile int64_t x947 = INT64_MAX;
	volatile int64_t t195 = INT64_MIN;

    t195 = (((x945>x946)-x947)+x948);

    if (t195 != INT64_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x949 = 306421325LLU;
	int16_t x950 = INT16_MAX;
	volatile int32_t x951 = -32635;
	int16_t x952 = -6147;
	int32_t t196 = 1;

    t196 = (((x949>x950)-x951)+x952);

    if (t196 != 26489) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x953 = 307473735911LLU;
	int32_t x954 = -1;
	uint8_t x956 = UINT8_MAX;
	volatile int32_t t197 = -440659137;

    t197 = (((x953>x954)-x955)+x956);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x957 = 20;
	volatile uint32_t x958 = 10821U;
	int64_t t198 = 123804LL;

    t198 = (((x957>x958)-x959)+x960);

    if (t198 != 176010288496LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x973 = -1;
	uint32_t x974 = UINT32_MAX;
	volatile int8_t x975 = INT8_MIN;
	volatile int64_t t199 = -1LL;

    t199 = (((x973>x974)-x975)+x976);

    if (t199 != -9223372036854775680LL) { NG(); } else { ; }
	
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


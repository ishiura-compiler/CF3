
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

volatile uint8_t x4 = UINT8_MAX;
static int8_t x7 = -2;
int32_t x13 = INT32_MAX;
uint64_t x15 = UINT64_MAX;
static int64_t x19 = INT64_MAX;
static int8_t x21 = INT8_MAX;
volatile int16_t x28 = INT16_MIN;
volatile int32_t t6 = -920;
uint64_t x29 = 111905675LLU;
uint8_t x32 = UINT8_MAX;
int16_t x41 = INT16_MIN;
uint16_t x50 = 45U;
static uint64_t x51 = 1LLU;
int32_t x58 = -1;
int32_t x59 = INT32_MIN;
int64_t x62 = 64099431864246LL;
uint32_t x67 = 9U;
static uint32_t t15 = 307U;
static int32_t x71 = INT32_MIN;
uint8_t x73 = 4U;
volatile int32_t x78 = -1;
int64_t x80 = INT64_MAX;
uint16_t x89 = 343U;
volatile uint32_t x93 = UINT32_MAX;
static volatile int32_t t23 = INT32_MAX;
int8_t x101 = INT8_MIN;
volatile int64_t x104 = -20830979093827280LL;
int16_t x105 = -1;
volatile int32_t t25 = -89272655;
int32_t x116 = INT32_MIN;
volatile int8_t x119 = -1;
static int32_t x132 = -1;
int32_t x137 = -112304;
uint32_t x138 = 0U;
static volatile uint64_t x139 = 26725LLU;
int16_t x151 = -1;
volatile int64_t x153 = INT64_MIN;
static volatile uint64_t x155 = 102536LLU;
int32_t x156 = -1;
int64_t x171 = INT64_MIN;
static int32_t x174 = 242209345;
uint64_t x178 = UINT64_MAX;
uint16_t x180 = 1865U;
int8_t x181 = INT8_MIN;
static int32_t x191 = -28363;
int8_t x192 = -1;
volatile int16_t x194 = -1;
uint64_t x204 = 78443658370409605LLU;
volatile uint32_t x206 = 399666U;
uint32_t x211 = UINT32_MAX;
int16_t x219 = -1;
volatile int8_t x228 = 32;
int32_t t54 = -98419360;
int64_t x234 = INT64_MAX;
uint64_t x239 = 6197LLU;
volatile int16_t x245 = INT16_MIN;
static volatile uint16_t x246 = UINT16_MAX;
int16_t x249 = INT16_MIN;
static uint8_t x251 = 8U;
int64_t x253 = INT64_MAX;
uint32_t x262 = 2828856U;
int32_t x300 = INT32_MIN;
int64_t t71 = -1671710490928002LL;
volatile int64_t x305 = INT64_MIN;
volatile int32_t x306 = INT32_MAX;
volatile uint64_t x313 = UINT64_MAX;
volatile int64_t t75 = -13606558LL;
int64_t x319 = INT64_MIN;
static volatile uint32_t t77 = 84475U;
int16_t x328 = INT16_MIN;
uint16_t x329 = 2153U;
int16_t x330 = 1;
uint16_t x335 = 5U;
int64_t t81 = 6665874LL;
int32_t t82 = 7254;
int32_t t83 = -745033;
static volatile uint64_t t85 = 133981723838172LLU;
int8_t x357 = INT8_MIN;
int16_t x366 = -1;
volatile uint8_t x367 = 42U;
volatile int8_t x387 = INT8_MIN;
static volatile int64_t t97 = 2243180403985LL;
uint16_t x406 = UINT16_MAX;
volatile uint16_t x416 = UINT16_MAX;
int64_t x417 = INT64_MIN;
volatile int64_t x429 = INT64_MIN;
int64_t x440 = INT64_MIN;
static int64_t t104 = INT64_MIN;
int16_t x445 = INT16_MAX;
int8_t x448 = 1;
static int32_t x455 = INT32_MIN;
uint8_t x460 = 3U;
int8_t x461 = 8;
uint64_t x464 = 8000283187982843LLU;
int32_t x471 = -1;
volatile int64_t x481 = -4093LL;
static volatile int64_t x483 = -3196162846827153LL;
static volatile uint8_t x487 = UINT8_MAX;
volatile int32_t x488 = 4520;
volatile int32_t x495 = -1;
volatile int32_t t117 = 7376699;
int32_t x506 = -116;
int32_t t120 = 355;
int32_t x518 = INT32_MIN;
uint8_t x520 = 3U;
volatile int32_t x522 = INT32_MIN;
volatile uint32_t x536 = 957698128U;
int16_t x543 = -1;
int64_t x549 = INT64_MIN;
volatile int32_t t129 = 3;
int8_t x561 = 9;
int8_t x562 = 4;
int32_t x566 = 953454;
int64_t x572 = INT64_MAX;
int64_t x573 = INT64_MAX;
uint32_t x580 = 1298602372U;
volatile int64_t t136 = 105157846951195503LL;
static int64_t x581 = INT64_MAX;
volatile int8_t x588 = 0;
static volatile int32_t t140 = 11;
int64_t x599 = -1LL;
int16_t x600 = -3323;
volatile int32_t t142 = -1738;
uint32_t x609 = UINT32_MAX;
int64_t x612 = INT64_MAX;
int64_t x620 = -1LL;
int64_t x621 = -1LL;
volatile int64_t t147 = -120LL;
static uint8_t x626 = 0U;
int64_t x627 = -1LL;
volatile int64_t x629 = -2522971802788080LL;
int16_t x630 = INT16_MIN;
volatile uint16_t x640 = 0U;
int32_t x644 = -42594;
uint32_t x647 = 1048787U;
int8_t x657 = -1;
volatile int64_t t157 = -3466165LL;
static int8_t x672 = -1;
volatile int16_t x673 = INT16_MAX;
static uint8_t x674 = 49U;
volatile int32_t t160 = INT32_MIN;
volatile int32_t x680 = INT32_MIN;
uint64_t x689 = 71848LLU;
static int16_t x693 = 7;
int8_t x697 = INT8_MIN;
int16_t x704 = 39;
static int32_t t167 = -3239;
int16_t x708 = INT16_MIN;
volatile int64_t t168 = 3598909112LL;
uint64_t x710 = 96699516918635159LLU;
int32_t x712 = INT32_MIN;
static int8_t x715 = INT8_MAX;
volatile int64_t t170 = INT64_MIN;
static int8_t x721 = -1;
volatile uint32_t x725 = 1U;
uint64_t x730 = UINT64_MAX;
int32_t x737 = -1;
int32_t x739 = -1;
static uint64_t x751 = UINT64_MAX;
int8_t x753 = INT8_MAX;
static int16_t x762 = INT16_MAX;
static volatile int16_t x764 = 2;
static volatile int32_t t181 = -127859972;
static int32_t x770 = INT32_MIN;
int8_t x771 = INT8_MIN;
volatile int32_t x789 = INT32_MIN;
uint64_t x795 = UINT64_MAX;
uint8_t x812 = 0U;
static volatile int64_t t193 = 27686410LL;
int8_t x819 = -10;
int16_t x826 = INT16_MIN;
int8_t x832 = INT8_MIN;
volatile int32_t t197 = -808;
volatile uint16_t x838 = UINT16_MAX;


void f0(void) {
    	volatile int8_t x1 = INT8_MIN;
	uint8_t x2 = 104U;
	uint8_t x3 = 2U;
	static volatile int32_t t0 = -2679352;

    t0 = (((x1==x2)/x3)^x4);

    if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	int8_t x6 = INT8_MIN;
	int16_t x8 = 10248;
	int32_t t1 = 440;

    t1 = (((x5==x6)/x7)^x8);

    if (t1 != 10248) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x9 = 1U;
	int32_t x10 = INT32_MAX;
	int64_t x11 = INT64_MIN;
	uint8_t x12 = UINT8_MAX;
	volatile int64_t t2 = 36398860103271LL;

    t2 = (((x9==x10)/x11)^x12);

    if (t2 != 255LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = INT8_MAX;
	int64_t x16 = INT64_MAX;
	volatile uint64_t t3 = 130561LLU;

    t3 = (((x13==x14)/x15)^x16);

    if (t3 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 47U;
	volatile uint32_t x18 = 3376U;
	int16_t x20 = 164;
	int64_t t4 = 2552LL;

    t4 = (((x17==x18)/x19)^x20);

    if (t4 != 164LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = INT8_MIN;
	int16_t x23 = 194;
	int64_t x24 = -1LL;
	volatile int64_t t5 = -38115736LL;

    t5 = (((x21==x22)/x23)^x24);

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = -190;
	uint64_t x26 = 8205LLU;
	static int32_t x27 = INT32_MIN;

    t6 = (((x25==x26)/x27)^x28);

    if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = -1680;
	int64_t x31 = INT64_MIN;
	volatile int64_t t7 = 1049595292092LL;

    t7 = (((x29==x30)/x31)^x32);

    if (t7 != 255LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 1551166LLU;
	uint16_t x34 = 3U;
	volatile uint16_t x35 = 7678U;
	uint64_t x36 = 72355965085576LLU;
	volatile uint64_t t8 = 6425LLU;

    t8 = (((x33==x34)/x35)^x36);

    if (t8 != 72355965085576LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	static int16_t x38 = -1;
	int8_t x39 = -1;
	uint16_t x40 = 1613U;
	int32_t t9 = 279931479;

    t9 = (((x37==x38)/x39)^x40);

    if (t9 != 1613) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x42 = INT32_MIN;
	uint8_t x43 = UINT8_MAX;
	int64_t x44 = -1LL;
	int64_t t10 = 16345031460867031LL;

    t10 = (((x41==x42)/x43)^x44);

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = 114;
	volatile uint32_t x46 = 4897554U;
	static int8_t x47 = -1;
	int32_t x48 = INT32_MIN;
	static volatile int32_t t11 = INT32_MIN;

    t11 = (((x45==x46)/x47)^x48);

    if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x49 = 252371079077872996LLU;
	volatile int64_t x52 = INT64_MAX;
	static volatile uint64_t t12 = 152LLU;

    t12 = (((x49==x50)/x51)^x52);

    if (t12 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = 55823241;
	int64_t x60 = 57922122LL;
	volatile int64_t t13 = -150LL;

    t13 = (((x57==x58)/x59)^x60);

    if (t13 != 57922122LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = -7193;
	volatile uint8_t x63 = 1U;
	static uint64_t x64 = 1321412892690LLU;
	volatile uint64_t t14 = 46851LLU;

    t14 = (((x61==x62)/x63)^x64);

    if (t14 != 1321412892690LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = INT8_MIN;
	int16_t x66 = INT16_MAX;
	uint8_t x68 = 5U;

    t15 = (((x65==x66)/x67)^x68);

    if (t15 != 5U) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = INT32_MIN;
	uint64_t x70 = 1374LLU;
	uint64_t x72 = 216604656947LLU;
	volatile uint64_t t16 = 10155528704LLU;

    t16 = (((x69==x70)/x71)^x72);

    if (t16 != 216604656947LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x74 = 41U;
	volatile int16_t x75 = INT16_MIN;
	uint16_t x76 = 2057U;
	int32_t t17 = 944244131;

    t17 = (((x73==x74)/x75)^x76);

    if (t17 != 2057) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = INT8_MIN;
	int8_t x79 = -42;
	int64_t t18 = INT64_MAX;

    t18 = (((x77==x78)/x79)^x80);

    if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x81 = 13765U;
	static int64_t x82 = INT64_MIN;
	int16_t x83 = INT16_MAX;
	int8_t x84 = 1;
	static int32_t t19 = 205901;

    t19 = (((x81==x82)/x83)^x84);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x85 = 245U;
	static volatile int16_t x86 = INT16_MIN;
	int8_t x87 = 1;
	int64_t x88 = INT64_MIN;
	int64_t t20 = INT64_MIN;

    t20 = (((x85==x86)/x87)^x88);

    if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x90 = INT8_MIN;
	volatile int32_t x91 = INT32_MAX;
	static volatile int8_t x92 = INT8_MAX;
	static int32_t t21 = 283;

    t21 = (((x89==x90)/x91)^x92);

    if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x94 = UINT16_MAX;
	int16_t x95 = 7260;
	static volatile int8_t x96 = 6;
	static int32_t t22 = 105285;

    t22 = (((x93==x94)/x95)^x96);

    if (t22 != 6) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = 1;
	volatile int16_t x98 = -1;
	uint16_t x99 = 3U;
	static int32_t x100 = INT32_MAX;

    t23 = (((x97==x98)/x99)^x100);

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x102 = INT32_MIN;
	int16_t x103 = -1;
	static volatile int64_t t24 = 30534292878771316LL;

    t24 = (((x101==x102)/x103)^x104);

    if (t24 != -20830979093827280LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x106 = 20;
	int8_t x107 = INT8_MIN;
	static uint8_t x108 = 22U;

    t25 = (((x105==x106)/x107)^x108);

    if (t25 != 22) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = INT8_MIN;
	uint64_t x110 = UINT64_MAX;
	volatile int32_t x111 = INT32_MIN;
	static volatile uint32_t x112 = UINT32_MAX;
	uint32_t t26 = UINT32_MAX;

    t26 = (((x109==x110)/x111)^x112);

    if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x113 = INT64_MAX;
	static volatile int32_t x114 = 60;
	int64_t x115 = -1891195271303031802LL;
	int64_t t27 = -91108359093275LL;

    t27 = (((x113==x114)/x115)^x116);

    if (t27 != -2147483648LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = -119911;
	int16_t x118 = INT16_MIN;
	volatile int8_t x120 = INT8_MIN;
	int32_t t28 = -2;

    t28 = (((x117==x118)/x119)^x120);

    if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x121 = 41U;
	int32_t x122 = -1;
	volatile int32_t x123 = INT32_MAX;
	uint64_t x124 = UINT64_MAX;
	static uint64_t t29 = UINT64_MAX;

    t29 = (((x121==x122)/x123)^x124);

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x125 = UINT8_MAX;
	int8_t x126 = INT8_MAX;
	int16_t x127 = 6320;
	volatile uint32_t x128 = 1018638U;
	uint32_t t30 = 12U;

    t30 = (((x125==x126)/x127)^x128);

    if (t30 != 1018638U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = 1;
	static int16_t x130 = INT16_MAX;
	volatile uint32_t x131 = 3325446U;
	uint32_t t31 = UINT32_MAX;

    t31 = (((x129==x130)/x131)^x132);

    if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = INT16_MIN;
	int32_t x134 = 31;
	int8_t x135 = INT8_MAX;
	uint8_t x136 = 8U;
	static int32_t t32 = 21459328;

    t32 = (((x133==x134)/x135)^x136);

    if (t32 != 8) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x140 = INT64_MAX;
	static uint64_t t33 = 11415892LLU;

    t33 = (((x137==x138)/x139)^x140);

    if (t33 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = -3592;
	uint32_t x142 = 1550486U;
	static uint8_t x143 = 1U;
	int8_t x144 = INT8_MAX;
	volatile int32_t t34 = -1988;

    t34 = (((x141==x142)/x143)^x144);

    if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x149 = INT8_MIN;
	uint64_t x150 = 6091177510955946LLU;
	uint64_t x152 = 385989538561LLU;
	uint64_t t35 = 8596338449624513LLU;

    t35 = (((x149==x150)/x151)^x152);

    if (t35 != 385989538561LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x154 = 79486356028660556LL;
	volatile uint64_t t36 = UINT64_MAX;

    t36 = (((x153==x154)/x155)^x156);

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x157 = -362252LL;
	static int8_t x158 = -1;
	int8_t x159 = INT8_MIN;
	int8_t x160 = -38;
	volatile int32_t t37 = -12970;

    t37 = (((x157==x158)/x159)^x160);

    if (t37 != -38) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x161 = INT32_MAX;
	static int64_t x162 = 7LL;
	uint64_t x163 = 11578974LLU;
	int64_t x164 = -1LL;
	volatile uint64_t t38 = UINT64_MAX;

    t38 = (((x161==x162)/x163)^x164);

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x165 = 1U;
	static uint16_t x166 = 13200U;
	int64_t x167 = INT64_MIN;
	int64_t x168 = 807080LL;
	int64_t t39 = 1LL;

    t39 = (((x165==x166)/x167)^x168);

    if (t39 != 807080LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x169 = UINT16_MAX;
	int64_t x170 = INT64_MIN;
	uint64_t x172 = 20115022402965LLU;
	static volatile uint64_t t40 = 2LLU;

    t40 = (((x169==x170)/x171)^x172);

    if (t40 != 20115022402965LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x173 = -1;
	static uint64_t x175 = UINT64_MAX;
	int8_t x176 = INT8_MIN;
	static uint64_t t41 = 3LLU;

    t41 = (((x173==x174)/x175)^x176);

    if (t41 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x177 = INT32_MAX;
	int16_t x179 = -3;
	volatile int32_t t42 = -8969;

    t42 = (((x177==x178)/x179)^x180);

    if (t42 != 1865) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x182 = 5662LLU;
	uint8_t x183 = 1U;
	volatile uint32_t x184 = UINT32_MAX;
	volatile uint32_t t43 = UINT32_MAX;

    t43 = (((x181==x182)/x183)^x184);

    if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MIN;
	uint64_t x187 = 6500LLU;
	static int64_t x188 = 7LL;
	volatile uint64_t t44 = 27469279244LLU;

    t44 = (((x185==x186)/x187)^x188);

    if (t44 != 7LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x189 = 9190764023789353070LLU;
	int8_t x190 = -1;
	static int32_t t45 = 27;

    t45 = (((x189==x190)/x191)^x192);

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x193 = 14910031U;
	int8_t x195 = -52;
	volatile int32_t x196 = INT32_MAX;
	volatile int32_t t46 = INT32_MAX;

    t46 = (((x193==x194)/x195)^x196);

    if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x197 = 2;
	static int16_t x198 = INT16_MAX;
	int32_t x199 = INT32_MIN;
	uint32_t x200 = 148712U;
	static uint32_t t47 = 16558U;

    t47 = (((x197==x198)/x199)^x200);

    if (t47 != 148712U) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x201 = 0;
	int8_t x202 = INT8_MIN;
	uint32_t x203 = UINT32_MAX;
	uint64_t t48 = 713188LLU;

    t48 = (((x201==x202)/x203)^x204);

    if (t48 != 78443658370409605LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x205 = INT32_MAX;
	volatile int32_t x207 = INT32_MIN;
	volatile uint8_t x208 = UINT8_MAX;
	volatile int32_t t49 = -6;

    t49 = (((x205==x206)/x207)^x208);

    if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int16_t x209 = INT16_MIN;
	static uint16_t x210 = 4337U;
	uint16_t x212 = UINT16_MAX;
	uint32_t t50 = 4071U;

    t50 = (((x209==x210)/x211)^x212);

    if (t50 != 65535U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x213 = 61849203U;
	uint8_t x214 = UINT8_MAX;
	volatile int32_t x215 = INT32_MIN;
	int64_t x216 = 738529LL;
	volatile int64_t t51 = -228183470LL;

    t51 = (((x213==x214)/x215)^x216);

    if (t51 != 738529LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x217 = INT64_MIN;
	uint16_t x218 = 2548U;
	int32_t x220 = -774878774;
	int32_t t52 = -441740;

    t52 = (((x217==x218)/x219)^x220);

    if (t52 != -774878774) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int16_t x221 = INT16_MIN;
	int8_t x222 = 1;
	volatile uint16_t x223 = 153U;
	static uint64_t x224 = 835424146606342LLU;
	uint64_t t53 = 117LLU;

    t53 = (((x221==x222)/x223)^x224);

    if (t53 != 835424146606342LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x225 = UINT64_MAX;
	int64_t x226 = INT64_MIN;
	static int16_t x227 = -1;

    t54 = (((x225==x226)/x227)^x228);

    if (t54 != 32) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x229 = INT16_MIN;
	int8_t x230 = INT8_MIN;
	static int8_t x231 = INT8_MAX;
	int8_t x232 = INT8_MIN;
	static volatile int32_t t55 = -12132;

    t55 = (((x229==x230)/x231)^x232);

    if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x233 = 9265000623975122LL;
	int64_t x235 = -1LL;
	static volatile int8_t x236 = INT8_MIN;
	int64_t t56 = 468308415805LL;

    t56 = (((x233==x234)/x235)^x236);

    if (t56 != -128LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x237 = 3;
	uint64_t x238 = 259726785824850110LLU;
	int8_t x240 = INT8_MIN;
	uint64_t t57 = 33886557510LLU;

    t57 = (((x237==x238)/x239)^x240);

    if (t57 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x241 = 2899022907LLU;
	static int64_t x242 = INT64_MIN;
	uint32_t x243 = UINT32_MAX;
	uint32_t x244 = 78U;
	static volatile uint32_t t58 = 23U;

    t58 = (((x241==x242)/x243)^x244);

    if (t58 != 78U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x247 = 3014324LLU;
	static int8_t x248 = INT8_MIN;
	uint64_t t59 = 34336954550LLU;

    t59 = (((x245==x246)/x247)^x248);

    if (t59 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x250 = UINT16_MAX;
	int64_t x252 = 5638002LL;
	volatile int64_t t60 = 10681152578868905LL;

    t60 = (((x249==x250)/x251)^x252);

    if (t60 != 5638002LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x254 = INT8_MAX;
	uint16_t x255 = UINT16_MAX;
	volatile int32_t x256 = 58769;
	static int32_t t61 = -13859758;

    t61 = (((x253==x254)/x255)^x256);

    if (t61 != 58769) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x257 = 10U;
	int64_t x258 = 1LL;
	uint16_t x259 = UINT16_MAX;
	volatile int32_t x260 = INT32_MIN;
	int32_t t62 = INT32_MIN;

    t62 = (((x257==x258)/x259)^x260);

    if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x261 = -4438872LL;
	int32_t x263 = INT32_MIN;
	int32_t x264 = INT32_MIN;
	volatile int32_t t63 = INT32_MIN;

    t63 = (((x261==x262)/x263)^x264);

    if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x265 = INT32_MIN;
	static volatile int16_t x266 = -1;
	int16_t x267 = INT16_MIN;
	uint64_t x268 = UINT64_MAX;
	volatile uint64_t t64 = UINT64_MAX;

    t64 = (((x265==x266)/x267)^x268);

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x269 = -253515LL;
	int8_t x270 = -1;
	int8_t x271 = 46;
	int64_t x272 = INT64_MAX;
	static volatile int64_t t65 = INT64_MAX;

    t65 = (((x269==x270)/x271)^x272);

    if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x273 = -1;
	int32_t x274 = -1;
	uint64_t x275 = UINT64_MAX;
	int16_t x276 = INT16_MAX;
	uint64_t t66 = 1226101LLU;

    t66 = (((x273==x274)/x275)^x276);

    if (t66 != 32767LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x281 = INT32_MIN;
	int8_t x282 = INT8_MIN;
	volatile uint32_t x283 = 996U;
	uint8_t x284 = UINT8_MAX;
	volatile uint32_t t67 = 377399U;

    t67 = (((x281==x282)/x283)^x284);

    if (t67 != 255U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x285 = -2;
	uint16_t x286 = 726U;
	static volatile uint32_t x287 = UINT32_MAX;
	uint32_t x288 = 1014035360U;
	static uint32_t t68 = 123U;

    t68 = (((x285==x286)/x287)^x288);

    if (t68 != 1014035360U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x289 = 20186U;
	int64_t x290 = -1LL;
	uint32_t x291 = UINT32_MAX;
	static uint16_t x292 = UINT16_MAX;
	static uint32_t t69 = 364062U;

    t69 = (((x289==x290)/x291)^x292);

    if (t69 != 65535U) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x293 = INT64_MIN;
	static int8_t x294 = 1;
	int8_t x295 = INT8_MIN;
	static int32_t x296 = -1;
	volatile int32_t t70 = 9;

    t70 = (((x293==x294)/x295)^x296);

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x297 = UINT16_MAX;
	static volatile uint8_t x298 = UINT8_MAX;
	static int64_t x299 = INT64_MIN;

    t71 = (((x297==x298)/x299)^x300);

    if (t71 != -2147483648LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x301 = INT16_MAX;
	int8_t x302 = INT8_MIN;
	int64_t x303 = 75452862LL;
	uint32_t x304 = 16442U;
	int64_t t72 = -47LL;

    t72 = (((x301==x302)/x303)^x304);

    if (t72 != 16442LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x307 = 47;
	static uint64_t x308 = 209246LLU;
	uint64_t t73 = 957899LLU;

    t73 = (((x305==x306)/x307)^x308);

    if (t73 != 209246LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x309 = 6693651671200670LLU;
	volatile int32_t x310 = -1;
	int32_t x311 = -1;
	uint64_t x312 = 129308LLU;
	uint64_t t74 = 2LLU;

    t74 = (((x309==x310)/x311)^x312);

    if (t74 != 129308LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x314 = -1LL;
	int8_t x315 = INT8_MIN;
	int64_t x316 = -1LL;

    t75 = (((x313==x314)/x315)^x316);

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x317 = INT32_MIN;
	int8_t x318 = INT8_MIN;
	static uint8_t x320 = 95U;
	volatile int64_t t76 = -225692403449540998LL;

    t76 = (((x317==x318)/x319)^x320);

    if (t76 != 95LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x321 = UINT32_MAX;
	int8_t x322 = INT8_MAX;
	uint16_t x323 = UINT16_MAX;
	uint32_t x324 = 24U;

    t77 = (((x321==x322)/x323)^x324);

    if (t77 != 24U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x325 = 3;
	int16_t x326 = -1;
	uint8_t x327 = UINT8_MAX;
	int32_t t78 = 54;

    t78 = (((x325==x326)/x327)^x328);

    if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x331 = 34203U;
	uint32_t x332 = 4087922U;
	volatile uint32_t t79 = 61588U;

    t79 = (((x329==x330)/x331)^x332);

    if (t79 != 4087922U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x333 = -1;
	uint32_t x334 = 996836U;
	int64_t x336 = -1LL;
	int64_t t80 = -1565LL;

    t80 = (((x333==x334)/x335)^x336);

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x337 = INT16_MIN;
	static int64_t x338 = INT64_MIN;
	volatile int64_t x339 = -5165LL;
	int32_t x340 = INT32_MAX;

    t81 = (((x337==x338)/x339)^x340);

    if (t81 != 2147483647LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x341 = INT32_MIN;
	volatile int8_t x342 = 5;
	uint16_t x343 = 3635U;
	uint8_t x344 = UINT8_MAX;

    t82 = (((x341==x342)/x343)^x344);

    if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x345 = INT64_MIN;
	int32_t x346 = 496989;
	int8_t x347 = 2;
	int32_t x348 = 117846;

    t83 = (((x345==x346)/x347)^x348);

    if (t83 != 117846) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x349 = INT16_MIN;
	volatile int64_t x350 = -1LL;
	volatile int16_t x351 = INT16_MIN;
	int16_t x352 = 366;
	static volatile int32_t t84 = 2;

    t84 = (((x349==x350)/x351)^x352);

    if (t84 != 366) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x353 = 29256242;
	static int64_t x354 = INT64_MIN;
	uint64_t x355 = UINT64_MAX;
	int8_t x356 = INT8_MAX;

    t85 = (((x353==x354)/x355)^x356);

    if (t85 != 127LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x358 = INT64_MIN;
	uint16_t x359 = UINT16_MAX;
	static volatile int8_t x360 = 0;
	int32_t t86 = 478584998;

    t86 = (((x357==x358)/x359)^x360);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x361 = UINT64_MAX;
	int32_t x362 = 1705;
	int64_t x363 = INT64_MIN;
	volatile int32_t x364 = INT32_MIN;
	int64_t t87 = 394LL;

    t87 = (((x361==x362)/x363)^x364);

    if (t87 != -2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x365 = INT16_MAX;
	volatile int32_t x368 = INT32_MIN;
	static int32_t t88 = INT32_MIN;

    t88 = (((x365==x366)/x367)^x368);

    if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x369 = 36296790042872544LL;
	static int16_t x370 = -31;
	int8_t x371 = INT8_MIN;
	int64_t x372 = -1327395910LL;
	volatile int64_t t89 = -96981822642379568LL;

    t89 = (((x369==x370)/x371)^x372);

    if (t89 != -1327395910LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint8_t x373 = 4U;
	static int16_t x374 = -1;
	volatile uint64_t x375 = UINT64_MAX;
	uint64_t x376 = 1LLU;
	static volatile uint64_t t90 = 894LLU;

    t90 = (((x373==x374)/x375)^x376);

    if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x377 = -1;
	int8_t x378 = -1;
	volatile int8_t x379 = -1;
	int64_t x380 = -15344394842715070LL;
	int64_t t91 = 654940789LL;

    t91 = (((x377==x378)/x379)^x380);

    if (t91 != 15344394842715069LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x381 = INT16_MIN;
	int8_t x382 = -1;
	static uint8_t x383 = 68U;
	int16_t x384 = INT16_MIN;
	int32_t t92 = -566975199;

    t92 = (((x381==x382)/x383)^x384);

    if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x385 = 2694U;
	static int32_t x386 = INT32_MAX;
	int8_t x388 = INT8_MAX;
	int32_t t93 = -8994616;

    t93 = (((x385==x386)/x387)^x388);

    if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x389 = -1LL;
	int16_t x390 = 10;
	volatile int8_t x391 = -1;
	int16_t x392 = INT16_MAX;
	int32_t t94 = 1;

    t94 = (((x389==x390)/x391)^x392);

    if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x393 = 1852092727U;
	int16_t x394 = INT16_MIN;
	static uint64_t x395 = 2103232050LLU;
	uint8_t x396 = 37U;
	uint64_t t95 = 75032029LLU;

    t95 = (((x393==x394)/x395)^x396);

    if (t95 != 37LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x397 = INT8_MIN;
	static int32_t x398 = INT32_MAX;
	int64_t x399 = INT64_MIN;
	uint64_t x400 = 149LLU;
	volatile uint64_t t96 = 11524370665528901LLU;

    t96 = (((x397==x398)/x399)^x400);

    if (t96 != 149LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x401 = INT32_MIN;
	static volatile int32_t x402 = -996049;
	volatile uint8_t x403 = UINT8_MAX;
	int64_t x404 = 125835LL;

    t97 = (((x401==x402)/x403)^x404);

    if (t97 != 125835LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x405 = -1;
	int32_t x407 = INT32_MIN;
	volatile uint16_t x408 = UINT16_MAX;
	volatile int32_t t98 = 37;

    t98 = (((x405==x406)/x407)^x408);

    if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x409 = 2742U;
	uint32_t x410 = 86036060U;
	volatile int32_t x411 = INT32_MIN;
	static uint16_t x412 = UINT16_MAX;
	volatile int32_t t99 = -148777725;

    t99 = (((x409==x410)/x411)^x412);

    if (t99 != 65535) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x413 = INT64_MIN;
	int32_t x414 = INT32_MIN;
	volatile int64_t x415 = -1LL;
	int64_t t100 = -28442108047LL;

    t100 = (((x413==x414)/x415)^x416);

    if (t100 != 65535LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x418 = 6U;
	uint32_t x419 = 255360064U;
	uint64_t x420 = 178807786022868LLU;
	volatile uint64_t t101 = 4803809232623289255LLU;

    t101 = (((x417==x418)/x419)^x420);

    if (t101 != 178807786022868LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x430 = 3429834944LLU;
	uint8_t x431 = UINT8_MAX;
	static int64_t x432 = 15577603366262LL;
	static int64_t t102 = -4861443LL;

    t102 = (((x429==x430)/x431)^x432);

    if (t102 != 15577603366262LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x433 = -904;
	uint32_t x434 = 1837956U;
	int32_t x435 = 102572;
	uint32_t x436 = 814367248U;
	uint32_t t103 = 17U;

    t103 = (((x433==x434)/x435)^x436);

    if (t103 != 814367248U) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x437 = UINT64_MAX;
	uint8_t x438 = 4U;
	int16_t x439 = INT16_MIN;

    t104 = (((x437==x438)/x439)^x440);

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x441 = INT8_MIN;
	uint32_t x442 = 14410U;
	int32_t x443 = -1;
	volatile uint16_t x444 = 1972U;
	volatile int32_t t105 = -5356;

    t105 = (((x441==x442)/x443)^x444);

    if (t105 != 1972) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int16_t x446 = 2;
	volatile int64_t x447 = -571LL;
	int64_t t106 = -461442025509136821LL;

    t106 = (((x445==x446)/x447)^x448);

    if (t106 != 1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x453 = 1;
	int16_t x454 = -1;
	static int64_t x456 = 32LL;
	volatile int64_t t107 = 522949470LL;

    t107 = (((x453==x454)/x455)^x456);

    if (t107 != 32LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x457 = UINT32_MAX;
	volatile uint8_t x458 = UINT8_MAX;
	volatile uint16_t x459 = 2U;
	int32_t t108 = 113421793;

    t108 = (((x457==x458)/x459)^x460);

    if (t108 != 3) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x462 = INT64_MIN;
	uint64_t x463 = UINT64_MAX;
	static uint64_t t109 = 254586279037LLU;

    t109 = (((x461==x462)/x463)^x464);

    if (t109 != 8000283187982843LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x465 = 0U;
	int32_t x466 = INT32_MAX;
	volatile int16_t x467 = -1;
	volatile int8_t x468 = -1;
	static int32_t t110 = 29260;

    t110 = (((x465==x466)/x467)^x468);

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x469 = INT64_MIN;
	volatile int16_t x470 = INT16_MAX;
	int64_t x472 = 19217223403725197LL;
	volatile int64_t t111 = 81LL;

    t111 = (((x469==x470)/x471)^x472);

    if (t111 != 19217223403725197LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int16_t x473 = INT16_MIN;
	static int8_t x474 = -1;
	int8_t x475 = INT8_MIN;
	volatile uint32_t x476 = 155901U;
	volatile uint32_t t112 = 12476850U;

    t112 = (((x473==x474)/x475)^x476);

    if (t112 != 155901U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x477 = -221;
	int8_t x478 = -6;
	static volatile int8_t x479 = INT8_MAX;
	int8_t x480 = INT8_MAX;
	int32_t t113 = 494058533;

    t113 = (((x477==x478)/x479)^x480);

    if (t113 != 127) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x482 = INT8_MIN;
	uint8_t x484 = UINT8_MAX;
	volatile int64_t t114 = 430400731087208LL;

    t114 = (((x481==x482)/x483)^x484);

    if (t114 != 255LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x485 = -568480433;
	static int64_t x486 = -1LL;
	int32_t t115 = -9;

    t115 = (((x485==x486)/x487)^x488);

    if (t115 != 4520) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x489 = INT8_MAX;
	int8_t x490 = 0;
	int32_t x491 = -3;
	uint32_t x492 = 12U;
	uint32_t t116 = 2611025U;

    t116 = (((x489==x490)/x491)^x492);

    if (t116 != 12U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x493 = 0U;
	uint16_t x494 = 2531U;
	volatile int8_t x496 = INT8_MAX;

    t117 = (((x493==x494)/x495)^x496);

    if (t117 != 127) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int32_t x497 = -1;
	int16_t x498 = INT16_MIN;
	uint64_t x499 = UINT64_MAX;
	int32_t x500 = -1;
	volatile uint64_t t118 = UINT64_MAX;

    t118 = (((x497==x498)/x499)^x500);

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x501 = INT64_MAX;
	volatile int8_t x502 = INT8_MIN;
	uint16_t x503 = 16U;
	static uint16_t x504 = UINT16_MAX;
	volatile int32_t t119 = -140304;

    t119 = (((x501==x502)/x503)^x504);

    if (t119 != 65535) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x505 = -42;
	static int32_t x507 = -44448;
	int16_t x508 = -1;

    t120 = (((x505==x506)/x507)^x508);

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x509 = -73;
	uint8_t x510 = UINT8_MAX;
	uint16_t x511 = 1438U;
	static uint32_t x512 = 2515067U;
	volatile uint32_t t121 = 1463044U;

    t121 = (((x509==x510)/x511)^x512);

    if (t121 != 2515067U) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x517 = INT64_MIN;
	int8_t x519 = INT8_MAX;
	int32_t t122 = 18460310;

    t122 = (((x517==x518)/x519)^x520);

    if (t122 != 3) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x521 = INT32_MIN;
	int32_t x523 = INT32_MAX;
	int32_t x524 = INT32_MIN;
	volatile int32_t t123 = INT32_MIN;

    t123 = (((x521==x522)/x523)^x524);

    if (t123 != INT32_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x525 = INT8_MIN;
	volatile uint8_t x526 = UINT8_MAX;
	int32_t x527 = -1;
	static volatile int8_t x528 = INT8_MIN;
	int32_t t124 = -396758;

    t124 = (((x525==x526)/x527)^x528);

    if (t124 != -128) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int64_t x533 = 275247401933LL;
	static int16_t x534 = 22;
	uint16_t x535 = 12631U;
	uint32_t t125 = 789343U;

    t125 = (((x533==x534)/x535)^x536);

    if (t125 != 957698128U) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x537 = 1827;
	int64_t x538 = INT64_MAX;
	int32_t x539 = INT32_MIN;
	static volatile int64_t x540 = -1LL;
	volatile int64_t t126 = 2759052512610LL;

    t126 = (((x537==x538)/x539)^x540);

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x541 = INT64_MAX;
	static int8_t x542 = -1;
	int16_t x544 = 2974;
	int32_t t127 = -17780;

    t127 = (((x541==x542)/x543)^x544);

    if (t127 != 2974) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x545 = INT16_MAX;
	volatile int32_t x546 = INT32_MIN;
	uint32_t x547 = UINT32_MAX;
	volatile int64_t x548 = -1456576544568LL;
	int64_t t128 = -284806538315607042LL;

    t128 = (((x545==x546)/x547)^x548);

    if (t128 != -1456576544568LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x550 = UINT8_MAX;
	static int8_t x551 = -1;
	int16_t x552 = -2;

    t129 = (((x549==x550)/x551)^x552);

    if (t129 != -2) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x553 = INT64_MAX;
	uint32_t x554 = UINT32_MAX;
	static uint64_t x555 = 22958863351937198LLU;
	static int32_t x556 = INT32_MIN;
	volatile uint64_t t130 = 74294758912281571LLU;

    t130 = (((x553==x554)/x555)^x556);

    if (t130 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x557 = 107LL;
	volatile int8_t x558 = INT8_MAX;
	uint8_t x559 = 34U;
	int8_t x560 = INT8_MIN;
	volatile int32_t t131 = -12629280;

    t131 = (((x557==x558)/x559)^x560);

    if (t131 != -128) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint32_t x563 = UINT32_MAX;
	int16_t x564 = -1;
	volatile uint32_t t132 = UINT32_MAX;

    t132 = (((x561==x562)/x563)^x564);

    if (t132 != UINT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x565 = INT32_MAX;
	static volatile uint8_t x567 = 3U;
	volatile int32_t x568 = INT32_MIN;
	static volatile int32_t t133 = INT32_MIN;

    t133 = (((x565==x566)/x567)^x568);

    if (t133 != INT32_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x569 = INT32_MIN;
	int16_t x570 = -1;
	int32_t x571 = 2;
	int64_t t134 = INT64_MAX;

    t134 = (((x569==x570)/x571)^x572);

    if (t134 != INT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x574 = 24972;
	int32_t x575 = INT32_MIN;
	static volatile int8_t x576 = INT8_MIN;
	int32_t t135 = -404552;

    t135 = (((x573==x574)/x575)^x576);

    if (t135 != -128) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x577 = UINT8_MAX;
	uint16_t x578 = 11871U;
	static int64_t x579 = INT64_MIN;

    t136 = (((x577==x578)/x579)^x580);

    if (t136 != 1298602372LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x582 = -1;
	uint8_t x583 = 7U;
	volatile uint8_t x584 = 1U;
	volatile int32_t t137 = 320763199;

    t137 = (((x581==x582)/x583)^x584);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x585 = -1;
	static int8_t x586 = INT8_MAX;
	int16_t x587 = INT16_MIN;
	int32_t t138 = -15547344;

    t138 = (((x585==x586)/x587)^x588);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x589 = INT16_MIN;
	static int32_t x590 = INT32_MAX;
	int32_t x591 = 11216019;
	volatile int16_t x592 = 0;
	static volatile int32_t t139 = -316;

    t139 = (((x589==x590)/x591)^x592);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x593 = 71U;
	int32_t x594 = INT32_MIN;
	int32_t x595 = INT32_MIN;
	uint8_t x596 = UINT8_MAX;

    t140 = (((x593==x594)/x595)^x596);

    if (t140 != 255) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x597 = UINT32_MAX;
	int8_t x598 = 7;
	volatile int64_t t141 = -2832949242203640LL;

    t141 = (((x597==x598)/x599)^x600);

    if (t141 != -3323LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x601 = 122U;
	volatile uint8_t x602 = 67U;
	int16_t x603 = INT16_MIN;
	volatile int32_t x604 = -1;

    t142 = (((x601==x602)/x603)^x604);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x605 = 3582U;
	int16_t x606 = -1354;
	uint8_t x607 = 38U;
	uint32_t x608 = UINT32_MAX;
	uint32_t t143 = UINT32_MAX;

    t143 = (((x605==x606)/x607)^x608);

    if (t143 != UINT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x610 = INT16_MIN;
	uint32_t x611 = 12U;
	static int64_t t144 = INT64_MAX;

    t144 = (((x609==x610)/x611)^x612);

    if (t144 != INT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x613 = INT8_MIN;
	int8_t x614 = -1;
	static int8_t x615 = -1;
	uint32_t x616 = UINT32_MAX;
	uint32_t t145 = UINT32_MAX;

    t145 = (((x613==x614)/x615)^x616);

    if (t145 != UINT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x617 = INT64_MIN;
	volatile int8_t x618 = 0;
	uint32_t x619 = 119297U;
	int64_t t146 = 16396413987158LL;

    t146 = (((x617==x618)/x619)^x620);

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x622 = INT32_MAX;
	static int64_t x623 = 23124850930LL;
	int16_t x624 = INT16_MAX;

    t147 = (((x621==x622)/x623)^x624);

    if (t147 != 32767LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x625 = 863;
	static int8_t x628 = INT8_MAX;
	static int64_t t148 = 110392762LL;

    t148 = (((x625==x626)/x627)^x628);

    if (t148 != 127LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x631 = UINT16_MAX;
	int8_t x632 = INT8_MIN;
	volatile int32_t t149 = 50139132;

    t149 = (((x629==x630)/x631)^x632);

    if (t149 != -128) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x633 = 257830952112LLU;
	uint8_t x634 = 3U;
	int32_t x635 = -6987;
	int64_t x636 = INT64_MIN;
	volatile int64_t t150 = INT64_MIN;

    t150 = (((x633==x634)/x635)^x636);

    if (t150 != INT64_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int64_t x637 = -27LL;
	int32_t x638 = -1;
	uint16_t x639 = 867U;
	volatile int32_t t151 = 11;

    t151 = (((x637==x638)/x639)^x640);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x641 = INT64_MIN;
	int16_t x642 = -1;
	int64_t x643 = -1LL;
	volatile int64_t t152 = 572LL;

    t152 = (((x641==x642)/x643)^x644);

    if (t152 != -42594LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x645 = 62U;
	uint8_t x646 = 10U;
	static uint8_t x648 = 22U;
	static volatile uint32_t t153 = 507U;

    t153 = (((x645==x646)/x647)^x648);

    if (t153 != 22U) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x649 = INT64_MAX;
	uint8_t x650 = 0U;
	int32_t x651 = INT32_MIN;
	volatile int64_t x652 = 4164161LL;
	volatile int64_t t154 = 482803054LL;

    t154 = (((x649==x650)/x651)^x652);

    if (t154 != 4164161LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x653 = INT16_MIN;
	int8_t x654 = INT8_MAX;
	uint16_t x655 = 4U;
	uint16_t x656 = 1U;
	volatile int32_t t155 = -278078;

    t155 = (((x653==x654)/x655)^x656);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x658 = INT8_MAX;
	int32_t x659 = 560081160;
	uint8_t x660 = 4U;
	volatile int32_t t156 = 0;

    t156 = (((x657==x658)/x659)^x660);

    if (t156 != 4) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x661 = -587;
	static int64_t x662 = 32311743LL;
	int16_t x663 = 10;
	int64_t x664 = -669998LL;

    t157 = (((x661==x662)/x663)^x664);

    if (t157 != -669998LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x665 = -1LL;
	uint16_t x666 = 140U;
	int64_t x667 = 1LL;
	int8_t x668 = INT8_MAX;
	int64_t t158 = -50667617LL;

    t158 = (((x665==x666)/x667)^x668);

    if (t158 != 127LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x669 = 23;
	int64_t x670 = INT64_MIN;
	int16_t x671 = INT16_MIN;
	volatile int32_t t159 = -1;

    t159 = (((x669==x670)/x671)^x672);

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x675 = INT8_MIN;
	int32_t x676 = INT32_MIN;

    t160 = (((x673==x674)/x675)^x676);

    if (t160 != INT32_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x677 = 1539U;
	static int16_t x678 = 24;
	int32_t x679 = INT32_MAX;
	int32_t t161 = INT32_MIN;

    t161 = (((x677==x678)/x679)^x680);

    if (t161 != INT32_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x681 = INT32_MAX;
	static int32_t x682 = 7810733;
	volatile int32_t x683 = -1;
	int16_t x684 = -6;
	volatile int32_t t162 = 1;

    t162 = (((x681==x682)/x683)^x684);

    if (t162 != -6) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x685 = INT32_MIN;
	int64_t x686 = INT64_MIN;
	static uint64_t x687 = 46176LLU;
	int16_t x688 = INT16_MIN;
	volatile uint64_t t163 = 28659243679508745LLU;

    t163 = (((x685==x686)/x687)^x688);

    if (t163 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x690 = INT16_MAX;
	int32_t x691 = INT32_MAX;
	uint64_t x692 = 3761490710LLU;
	uint64_t t164 = 4210583515605338410LLU;

    t164 = (((x689==x690)/x691)^x692);

    if (t164 != 3761490710LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x694 = -1;
	static int64_t x695 = -33220663485243707LL;
	int8_t x696 = -1;
	volatile int64_t t165 = -3580520243542113LL;

    t165 = (((x693==x694)/x695)^x696);

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x698 = INT64_MAX;
	int16_t x699 = 1;
	static int8_t x700 = -1;
	int32_t t166 = -10237;

    t166 = (((x697==x698)/x699)^x700);

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x701 = INT16_MAX;
	volatile int8_t x702 = INT8_MIN;
	static uint16_t x703 = UINT16_MAX;

    t167 = (((x701==x702)/x703)^x704);

    if (t167 != 39) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x705 = 60631791108665329LL;
	static uint64_t x706 = 521383087LLU;
	volatile int64_t x707 = INT64_MAX;

    t168 = (((x705==x706)/x707)^x708);

    if (t168 != -32768LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x709 = 9LLU;
	static volatile int64_t x711 = INT64_MAX;
	volatile int64_t t169 = -4955877LL;

    t169 = (((x709==x710)/x711)^x712);

    if (t169 != -2147483648LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x713 = INT16_MIN;
	int8_t x714 = INT8_MAX;
	int64_t x716 = INT64_MIN;

    t170 = (((x713==x714)/x715)^x716);

    if (t170 != INT64_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x717 = INT16_MAX;
	int32_t x718 = 194957;
	int8_t x719 = INT8_MAX;
	uint64_t x720 = 451LLU;
	static uint64_t t171 = 17065821622473LLU;

    t171 = (((x717==x718)/x719)^x720);

    if (t171 != 451LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x722 = -17;
	static uint16_t x723 = UINT16_MAX;
	int32_t x724 = INT32_MAX;
	int32_t t172 = INT32_MAX;

    t172 = (((x721==x722)/x723)^x724);

    if (t172 != INT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x726 = -7965;
	int64_t x727 = -1LL;
	static volatile int16_t x728 = -1;
	volatile int64_t t173 = 30495LL;

    t173 = (((x725==x726)/x727)^x728);

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x729 = UINT32_MAX;
	uint16_t x731 = 9U;
	uint16_t x732 = UINT16_MAX;
	int32_t t174 = 1;

    t174 = (((x729==x730)/x731)^x732);

    if (t174 != 65535) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x738 = 96U;
	uint64_t x740 = 2LLU;
	static uint64_t t175 = 6215680837029LLU;

    t175 = (((x737==x738)/x739)^x740);

    if (t175 != 2LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x741 = INT32_MAX;
	uint16_t x742 = 1068U;
	uint8_t x743 = UINT8_MAX;
	static volatile uint8_t x744 = 17U;
	volatile int32_t t176 = -1;

    t176 = (((x741==x742)/x743)^x744);

    if (t176 != 17) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x745 = INT8_MIN;
	uint16_t x746 = 22U;
	static uint64_t x747 = 56284LLU;
	volatile int16_t x748 = INT16_MIN;
	volatile uint64_t t177 = 349LLU;

    t177 = (((x745==x746)/x747)^x748);

    if (t177 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x749 = UINT8_MAX;
	volatile int64_t x750 = 519732026946LL;
	volatile uint32_t x752 = 3U;
	uint64_t t178 = 839408124LLU;

    t178 = (((x749==x750)/x751)^x752);

    if (t178 != 3LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x754 = 2U;
	uint32_t x755 = UINT32_MAX;
	static volatile int64_t x756 = 737LL;
	volatile int64_t t179 = 808216636043LL;

    t179 = (((x753==x754)/x755)^x756);

    if (t179 != 737LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x757 = INT16_MIN;
	int32_t x758 = -3;
	uint8_t x759 = UINT8_MAX;
	int8_t x760 = 0;
	int32_t t180 = -40;

    t180 = (((x757==x758)/x759)^x760);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x761 = 28U;
	int8_t x763 = INT8_MIN;

    t181 = (((x761==x762)/x763)^x764);

    if (t181 != 2) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x769 = -1LL;
	static int32_t x772 = -169630;
	volatile int32_t t182 = 1;

    t182 = (((x769==x770)/x771)^x772);

    if (t182 != -169630) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x773 = INT32_MIN;
	int16_t x774 = INT16_MIN;
	int32_t x775 = INT32_MIN;
	static int64_t x776 = -28778878952959785LL;
	static int64_t t183 = 70041997658LL;

    t183 = (((x773==x774)/x775)^x776);

    if (t183 != -28778878952959785LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x777 = INT16_MIN;
	volatile uint16_t x778 = 2U;
	volatile int16_t x779 = 1;
	uint8_t x780 = 82U;
	volatile int32_t t184 = -1;

    t184 = (((x777==x778)/x779)^x780);

    if (t184 != 82) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x781 = 1U;
	int32_t x782 = 383557640;
	uint64_t x783 = UINT64_MAX;
	volatile int64_t x784 = INT64_MIN;
	uint64_t t185 = 875109736317877LLU;

    t185 = (((x781==x782)/x783)^x784);

    if (t185 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x785 = 6LL;
	static int8_t x786 = INT8_MIN;
	static volatile uint32_t x787 = 96238575U;
	int16_t x788 = 0;
	volatile uint32_t t186 = 14308857U;

    t186 = (((x785==x786)/x787)^x788);

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x790 = UINT8_MAX;
	uint8_t x791 = UINT8_MAX;
	uint64_t x792 = UINT64_MAX;
	uint64_t t187 = UINT64_MAX;

    t187 = (((x789==x790)/x791)^x792);

    if (t187 != UINT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x793 = -1;
	static int64_t x794 = -1LL;
	int16_t x796 = INT16_MIN;
	static uint64_t t188 = 97312303361LLU;

    t188 = (((x793==x794)/x795)^x796);

    if (t188 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x797 = 6830U;
	uint8_t x798 = UINT8_MAX;
	volatile int8_t x799 = -1;
	static int16_t x800 = INT16_MIN;
	volatile int32_t t189 = -104;

    t189 = (((x797==x798)/x799)^x800);

    if (t189 != -32768) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x801 = INT64_MIN;
	uint64_t x802 = 666142LLU;
	static uint32_t x803 = UINT32_MAX;
	int32_t x804 = INT32_MAX;
	static uint32_t t190 = 5404U;

    t190 = (((x801==x802)/x803)^x804);

    if (t190 != 2147483647U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x805 = -1;
	int8_t x806 = -1;
	int8_t x807 = -1;
	int64_t x808 = INT64_MAX;
	volatile int64_t t191 = INT64_MIN;

    t191 = (((x805==x806)/x807)^x808);

    if (t191 != INT64_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x809 = 5969664U;
	int32_t x810 = -118249;
	static int16_t x811 = 19;
	int32_t t192 = 117;

    t192 = (((x809==x810)/x811)^x812);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x813 = -1;
	static volatile int16_t x814 = INT16_MIN;
	int64_t x815 = -1LL;
	int8_t x816 = -44;

    t193 = (((x813==x814)/x815)^x816);

    if (t193 != -44LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x817 = 286366927;
	static uint32_t x818 = 6U;
	volatile int16_t x820 = -1;
	static int32_t t194 = 3626734;

    t194 = (((x817==x818)/x819)^x820);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x821 = UINT16_MAX;
	int16_t x822 = -33;
	static int32_t x823 = INT32_MAX;
	int64_t x824 = INT64_MIN;
	static volatile int64_t t195 = INT64_MIN;

    t195 = (((x821==x822)/x823)^x824);

    if (t195 != INT64_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x825 = INT64_MIN;
	int32_t x827 = INT32_MIN;
	int16_t x828 = 181;
	volatile int32_t t196 = -58913;

    t196 = (((x825==x826)/x827)^x828);

    if (t196 != 181) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x829 = 48425261LL;
	uint64_t x830 = 28814LLU;
	static uint16_t x831 = UINT16_MAX;

    t197 = (((x829==x830)/x831)^x832);

    if (t197 != -128) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x833 = -53262;
	static int64_t x834 = -244831075349LL;
	int32_t x835 = INT32_MIN;
	uint16_t x836 = 30143U;
	volatile int32_t t198 = 0;

    t198 = (((x833==x834)/x835)^x836);

    if (t198 != 30143) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int8_t x837 = INT8_MAX;
	int16_t x839 = INT16_MIN;
	int16_t x840 = -16;
	static int32_t t199 = 180;

    t199 = (((x837==x838)/x839)^x840);

    if (t199 != -16) { NG(); } else { ; }
	
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


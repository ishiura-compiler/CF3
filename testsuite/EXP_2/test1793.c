
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

int32_t x6 = INT32_MIN;
uint16_t x9 = UINT16_MAX;
volatile uint16_t x10 = 455U;
int64_t x12 = 43599845LL;
volatile int32_t x24 = INT32_MIN;
int16_t x37 = INT16_MIN;
int64_t x40 = INT64_MIN;
volatile int64_t t8 = INT64_MIN;
int16_t x49 = 300;
int32_t t11 = 30469866;
uint8_t x57 = 6U;
int8_t x62 = INT8_MIN;
uint8_t x63 = UINT8_MAX;
volatile int64_t x64 = INT64_MAX;
uint32_t x72 = 5943939U;
uint16_t x80 = 50U;
int8_t x87 = INT8_MAX;
volatile uint64_t t18 = 93011LLU;
int16_t x95 = INT16_MIN;
static uint16_t x104 = 2085U;
int64_t x106 = 62750LL;
int8_t x107 = INT8_MIN;
int32_t x110 = -1;
uint64_t x124 = UINT64_MAX;
int16_t x127 = INT16_MIN;
volatile int32_t t28 = -725720;
static volatile int64_t x133 = -1LL;
volatile int8_t x134 = INT8_MIN;
int64_t t29 = -22418142LL;
int16_t x140 = 1021;
int32_t t33 = -7185;
uint16_t x153 = 320U;
static uint16_t x155 = UINT16_MAX;
int8_t x160 = -37;
int64_t x162 = 164LL;
uint16_t x165 = 32670U;
int16_t x167 = INT16_MIN;
uint32_t x168 = 1U;
volatile uint32_t t38 = 463U;
volatile int32_t x179 = INT32_MIN;
int32_t t40 = 19288;
int8_t x191 = -1;
static int8_t x206 = INT8_MIN;
uint32_t x217 = 109U;
int32_t x221 = -31094748;
volatile int32_t x232 = INT32_MIN;
int16_t x233 = INT16_MAX;
uint8_t x234 = UINT8_MAX;
uint32_t x253 = 78472810U;
uint32_t t56 = 42194U;
uint32_t x259 = 4577085U;
int64_t t57 = 5LL;
uint16_t x261 = UINT16_MAX;
uint32_t x262 = 105U;
uint32_t x265 = UINT32_MAX;
int64_t x268 = INT64_MIN;
static int32_t x275 = INT32_MIN;
int32_t x283 = INT32_MIN;
int64_t x284 = -1LL;
static uint64_t t61 = 1703026968LLU;
static int16_t x287 = 99;
static volatile int64_t x288 = INT64_MIN;
int8_t x293 = INT8_MAX;
volatile uint64_t x303 = UINT64_MAX;
volatile int64_t t66 = 25517864068576159LL;
uint64_t x308 = 714340282LLU;
int16_t x309 = INT16_MIN;
static int16_t x311 = INT16_MAX;
volatile uint64_t x314 = 126917898618LLU;
volatile int64_t x322 = INT64_MIN;
uint64_t x328 = 4876700LLU;
static uint64_t t72 = 369283902434060LLU;
int32_t x332 = INT32_MIN;
volatile uint32_t t73 = 12574U;
int64_t x340 = 26412LL;
int64_t x349 = INT64_MIN;
static int8_t x351 = -1;
volatile int32_t t79 = -188;
int32_t x362 = INT32_MIN;
int8_t x364 = INT8_MAX;
volatile uint8_t x369 = 11U;
volatile uint8_t x370 = 2U;
volatile int16_t x372 = INT16_MAX;
int16_t x375 = INT16_MAX;
uint8_t x377 = UINT8_MAX;
volatile int16_t x379 = INT16_MAX;
int64_t t85 = -7707324821LL;
int64_t x385 = -1LL;
int64_t x390 = INT64_MAX;
uint64_t x395 = UINT64_MAX;
int64_t x397 = INT64_MIN;
int64_t x398 = INT64_MIN;
uint64_t x400 = 542520218722679LLU;
int32_t x401 = INT32_MIN;
uint32_t x402 = UINT32_MAX;
int64_t x403 = 8202512LL;
volatile uint8_t x414 = 3U;
int64_t x416 = -10814461972736177LL;
static int32_t x418 = 237679;
int16_t x424 = INT16_MIN;
int16_t x426 = 624;
uint16_t x427 = 653U;
int16_t x432 = INT16_MAX;
int32_t t97 = -119782664;
int16_t x433 = INT16_MAX;
static int64_t x438 = INT64_MAX;
int16_t x439 = INT16_MAX;
uint32_t x448 = 746U;
volatile uint64_t t101 = 55773695551956LLU;
int32_t x450 = INT32_MAX;
static int32_t x456 = INT32_MAX;
static int32_t x460 = -1;
int16_t x461 = INT16_MAX;
uint32_t x462 = UINT32_MAX;
int32_t x466 = 334752988;
static int8_t x477 = INT8_MAX;
volatile int16_t x484 = INT16_MAX;
uint32_t t110 = 928497U;
volatile uint16_t x487 = 18007U;
uint32_t t113 = 30U;
uint64_t x499 = 145419910185LLU;
uint16_t x501 = 3950U;
volatile int64_t x503 = -1LL;
int32_t t115 = -64;
uint64_t t116 = 826366618795LLU;
volatile int16_t x515 = -1;
volatile int64_t x516 = 226521LL;
uint16_t x519 = UINT16_MAX;
int64_t x520 = 1LL;
uint16_t x521 = 115U;
volatile int32_t t120 = 9132302;
static volatile int8_t x532 = INT8_MIN;
uint64_t t123 = 484775388LLU;
uint64_t x538 = 2784967LLU;
int64_t x540 = -1LL;
static volatile int64_t x543 = INT64_MIN;
volatile int8_t x544 = -62;
static volatile int32_t t125 = 1152309;
uint16_t x545 = UINT16_MAX;
static int16_t x550 = -1;
volatile int8_t x553 = INT8_MIN;
uint8_t x554 = 0U;
static int64_t x560 = INT64_MIN;
int32_t x565 = INT32_MIN;
int16_t x567 = INT16_MAX;
static int16_t x568 = INT16_MAX;
volatile uint32_t x570 = 64536203U;
static volatile uint32_t x573 = 48U;
uint64_t x575 = UINT64_MAX;
uint64_t x577 = 9716525LLU;
static int32_t x588 = 1;
static uint8_t x595 = UINT8_MAX;
volatile int64_t t136 = 2627249075949LL;
int64_t x599 = -35589384692499LL;
volatile int32_t x601 = 0;
volatile uint64_t x604 = 127127967319LLU;
volatile int16_t x606 = INT16_MIN;
int8_t x607 = INT8_MAX;
int64_t x609 = INT64_MIN;
int64_t x615 = INT64_MIN;
int64_t x620 = -513142413578LL;
static int32_t x621 = -1055;
int8_t x624 = 3;
int32_t t143 = -3;
int32_t t145 = -786;
uint8_t x634 = UINT8_MAX;
uint16_t x635 = 24167U;
int32_t t146 = 986922625;
uint8_t x643 = 2U;
volatile int16_t x649 = -1;
static int64_t x650 = INT64_MIN;
int64_t x651 = INT64_MIN;
volatile uint8_t x665 = 1U;
static int32_t x670 = -123;
int8_t x671 = 21;
uint8_t x672 = UINT8_MAX;
int64_t x682 = INT64_MIN;
volatile int64_t t158 = 15LL;
volatile int64_t t159 = 17LL;
int32_t x710 = 1661;
static volatile int16_t x717 = -49;
int64_t x723 = 392856605997LL;
int64_t x724 = 1045LL;
int16_t x730 = -2009;
int16_t x742 = -1;
int8_t x746 = INT8_MIN;
volatile uint32_t t172 = 685457777U;
int16_t x759 = INT16_MAX;
static volatile uint64_t t174 = 99407270LLU;
int8_t x774 = 0;
int32_t x775 = -1;
volatile uint32_t x777 = 2662U;
uint32_t x778 = 116095254U;
int32_t t179 = -9227941;
int64_t x789 = -68710739626707442LL;
static uint32_t x797 = 407U;
int64_t x801 = 35323196172920LL;
uint64_t x803 = 3261840699318279468LLU;
static uint64_t x809 = 799109LLU;
int32_t x811 = INT32_MIN;
int32_t x812 = 328616;
uint64_t t185 = 185LLU;
volatile uint64_t t186 = UINT64_MAX;
int64_t x818 = 24LL;
int8_t x819 = -1;
volatile int32_t t187 = -16181;
int8_t x821 = -1;
int16_t x825 = INT16_MIN;
int8_t x831 = -5;
int64_t x833 = INT64_MAX;
uint32_t x835 = 1259332U;
static uint8_t x836 = 7U;
int16_t x840 = INT16_MAX;
volatile int64_t x842 = INT64_MIN;
int8_t x851 = INT8_MIN;
int64_t t195 = 2832488787644LL;
int8_t x854 = INT8_MIN;
volatile int64_t t198 = -2070613781LL;
static volatile uint32_t x868 = UINT32_MAX;


void f0(void) {
    	int64_t x1 = 5306350029921LL;
	uint32_t x2 = 878116334U;
	uint8_t x3 = 4U;
	uint64_t x4 = UINT64_MAX;
	uint64_t t0 = UINT64_MAX;

    t0 = ((x1*(x2<=x3))+x4);

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = -445;
	static int64_t x7 = INT64_MIN;
	int32_t x8 = 1004508;
	volatile int32_t t1 = -1;

    t1 = ((x5*(x6<=x7))+x8);

    if (t1 != 1004508) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x11 = -864836907820933LL;
	static int64_t t2 = 123428LL;

    t2 = ((x9*(x10<=x11))+x12);

    if (t2 != 43599845LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 5LLU;
	int64_t x14 = -1LL;
	int64_t x15 = INT64_MIN;
	volatile int64_t x16 = INT64_MIN;
	volatile uint64_t t3 = 65588627966LLU;

    t3 = ((x13*(x14<=x15))+x16);

    if (t3 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	uint64_t x18 = UINT64_MAX;
	static int32_t x19 = -1;
	uint64_t x20 = UINT64_MAX;
	static uint64_t t4 = 258LLU;

    t4 = ((x17*(x18<=x19))+x20);

    if (t4 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 31;
	int8_t x22 = INT8_MIN;
	static volatile int8_t x23 = INT8_MIN;
	volatile int32_t t5 = 4105856;

    t5 = ((x21*(x22<=x23))+x24);

    if (t5 != -2147483617) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -75;
	volatile int16_t x26 = -2;
	volatile int8_t x27 = INT8_MAX;
	volatile uint16_t x28 = 198U;
	int32_t t6 = 34;

    t6 = ((x25*(x26<=x27))+x28);

    if (t6 != 123) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = 31;
	static volatile int64_t x34 = 19836LL;
	static int32_t x35 = INT32_MIN;
	uint16_t x36 = UINT16_MAX;
	static int32_t t7 = -750;

    t7 = ((x33*(x34<=x35))+x36);

    if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x38 = -1;
	uint32_t x39 = 1530U;

    t8 = ((x37*(x38<=x39))+x40);

    if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x41 = INT32_MIN;
	uint64_t x42 = 474932046324LLU;
	uint64_t x43 = 7961LLU;
	static volatile int64_t x44 = -425708LL;
	volatile int64_t t9 = 11214LL;

    t9 = ((x41*(x42<=x43))+x44);

    if (t9 != -425708LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x45 = UINT32_MAX;
	int32_t x46 = -1;
	uint64_t x47 = 182512811999LLU;
	int32_t x48 = -1;
	volatile uint32_t t10 = UINT32_MAX;

    t10 = ((x45*(x46<=x47))+x48);

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x50 = 1U;
	int16_t x51 = INT16_MIN;
	volatile uint8_t x52 = 3U;

    t11 = ((x49*(x50<=x51))+x52);

    if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int8_t x53 = INT8_MAX;
	uint32_t x54 = UINT32_MAX;
	uint64_t x55 = UINT64_MAX;
	int16_t x56 = -4;
	int32_t t12 = -7854760;

    t12 = ((x53*(x54<=x55))+x56);

    if (t12 != 123) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x58 = INT16_MIN;
	static volatile int8_t x59 = INT8_MAX;
	int64_t x60 = 2316516LL;
	volatile int64_t t13 = 2662316860LL;

    t13 = ((x57*(x58<=x59))+x60);

    if (t13 != 2316522LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = INT16_MIN;
	volatile int64_t t14 = 78746817LL;

    t14 = ((x61*(x62<=x63))+x64);

    if (t14 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x65 = 7581LLU;
	int16_t x66 = INT16_MAX;
	uint32_t x67 = 3U;
	int16_t x68 = INT16_MIN;
	volatile uint64_t t15 = 1524697LLU;

    t15 = ((x65*(x66<=x67))+x68);

    if (t15 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x69 = INT16_MIN;
	uint16_t x70 = 16U;
	uint32_t x71 = UINT32_MAX;
	static volatile uint32_t t16 = 2U;

    t16 = ((x69*(x70<=x71))+x72);

    if (t16 != 5911171U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x77 = INT32_MIN;
	int64_t x78 = INT64_MAX;
	int8_t x79 = INT8_MAX;
	int32_t t17 = 59;

    t17 = ((x77*(x78<=x79))+x80);

    if (t17 != 50) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x85 = INT32_MIN;
	static int8_t x86 = 1;
	uint64_t x88 = 3268503152807606LLU;

    t18 = ((x85*(x86<=x87))+x88);

    if (t18 != 3268501005323958LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x89 = 968U;
	static uint8_t x90 = 0U;
	int32_t x91 = INT32_MAX;
	static int8_t x92 = INT8_MAX;
	int32_t t19 = 32;

    t19 = ((x89*(x90<=x91))+x92);

    if (t19 != 1095) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x93 = 0U;
	int16_t x94 = 195;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t20 = -548837650;

    t20 = ((x93*(x94<=x95))+x96);

    if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x101 = -1;
	int64_t x102 = INT64_MIN;
	uint64_t x103 = 17891LLU;
	volatile int32_t t21 = 948946;

    t21 = ((x101*(x102<=x103))+x104);

    if (t21 != 2085) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x105 = INT64_MAX;
	volatile int32_t x108 = 1;
	int64_t t22 = 11093844410LL;

    t22 = ((x105*(x106<=x107))+x108);

    if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x109 = INT32_MAX;
	int64_t x111 = -1LL;
	int16_t x112 = INT16_MIN;
	int32_t t23 = -1847;

    t23 = ((x109*(x110<=x111))+x112);

    if (t23 != 2147450879) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x113 = -1;
	static int32_t x114 = -1;
	int16_t x115 = INT16_MIN;
	static volatile uint32_t x116 = UINT32_MAX;
	static volatile uint32_t t24 = UINT32_MAX;

    t24 = ((x113*(x114<=x115))+x116);

    if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x117 = INT16_MAX;
	int64_t x118 = 833LL;
	static uint32_t x119 = 814713U;
	static int32_t x120 = 30651;
	int32_t t25 = -13510;

    t25 = ((x117*(x118<=x119))+x120);

    if (t25 != 63418) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x121 = -25;
	volatile uint16_t x122 = 125U;
	int16_t x123 = INT16_MIN;
	uint64_t t26 = UINT64_MAX;

    t26 = ((x121*(x122<=x123))+x124);

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x125 = 3881840160LLU;
	uint16_t x126 = 3U;
	uint32_t x128 = 191U;
	static uint64_t t27 = 3774921756082742603LLU;

    t27 = ((x125*(x126<=x127))+x128);

    if (t27 != 191LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x129 = 1762;
	uint16_t x130 = 1203U;
	uint16_t x131 = 23U;
	int32_t x132 = -648144954;

    t28 = ((x129*(x130<=x131))+x132);

    if (t28 != -648144954) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x135 = INT64_MAX;
	uint8_t x136 = UINT8_MAX;

    t29 = ((x133*(x134<=x135))+x136);

    if (t29 != 254LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x137 = INT16_MAX;
	uint8_t x138 = UINT8_MAX;
	int64_t x139 = -853892241323883786LL;
	int32_t t30 = -34107782;

    t30 = ((x137*(x138<=x139))+x140);

    if (t30 != 1021) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x141 = UINT32_MAX;
	static int16_t x142 = -56;
	uint32_t x143 = 47326U;
	int16_t x144 = -18;
	volatile uint32_t t31 = 135050464U;

    t31 = ((x141*(x142<=x143))+x144);

    if (t31 != 4294967278U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x145 = INT64_MIN;
	int64_t x146 = -1LL;
	int64_t x147 = INT64_MIN;
	int64_t x148 = INT64_MAX;
	int64_t t32 = INT64_MAX;

    t32 = ((x145*(x146<=x147))+x148);

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x149 = 7;
	uint16_t x150 = 26U;
	int64_t x151 = -1LL;
	uint16_t x152 = 1287U;

    t33 = ((x149*(x150<=x151))+x152);

    if (t33 != 1287) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x154 = -1;
	int32_t x156 = INT32_MIN;
	static volatile int32_t t34 = -3;

    t34 = ((x153*(x154<=x155))+x156);

    if (t34 != -2147483328) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x157 = INT32_MIN;
	static int16_t x158 = 0;
	volatile int64_t x159 = INT64_MIN;
	int32_t t35 = -1275561;

    t35 = ((x157*(x158<=x159))+x160);

    if (t35 != -37) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x161 = INT16_MIN;
	int8_t x163 = INT8_MIN;
	int16_t x164 = -1;
	volatile int32_t t36 = -52242;

    t36 = ((x161*(x162<=x163))+x164);

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x166 = -1LL;
	static uint32_t t37 = 121935577U;

    t37 = ((x165*(x166<=x167))+x168);

    if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x169 = 288U;
	int8_t x170 = INT8_MIN;
	int64_t x171 = INT64_MIN;
	static int32_t x172 = INT32_MAX;

    t38 = ((x169*(x170<=x171))+x172);

    if (t38 != 2147483647U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x173 = UINT32_MAX;
	static int16_t x174 = INT16_MIN;
	static uint8_t x175 = 7U;
	uint32_t x176 = 134676794U;
	uint32_t t39 = 6509114U;

    t39 = ((x173*(x174<=x175))+x176);

    if (t39 != 134676793U) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x177 = INT16_MAX;
	int8_t x178 = INT8_MIN;
	int32_t x180 = -7543362;

    t40 = ((x177*(x178<=x179))+x180);

    if (t40 != -7543362) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x181 = INT16_MAX;
	uint32_t x182 = 73390882U;
	int32_t x183 = -1;
	int16_t x184 = INT16_MAX;
	static volatile int32_t t41 = 117767;

    t41 = ((x181*(x182<=x183))+x184);

    if (t41 != 65534) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x189 = -1;
	int8_t x190 = INT8_MIN;
	int8_t x192 = INT8_MIN;
	int32_t t42 = 68044;

    t42 = ((x189*(x190<=x191))+x192);

    if (t42 != -129) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x193 = -1;
	volatile int32_t x194 = INT32_MAX;
	uint16_t x195 = UINT16_MAX;
	volatile uint64_t x196 = UINT64_MAX;
	volatile uint64_t t43 = UINT64_MAX;

    t43 = ((x193*(x194<=x195))+x196);

    if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x197 = INT64_MIN;
	uint16_t x198 = UINT16_MAX;
	static uint64_t x199 = 694LLU;
	int8_t x200 = 9;
	volatile int64_t t44 = -13945LL;

    t44 = ((x197*(x198<=x199))+x200);

    if (t44 != 9LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x201 = -1;
	uint64_t x202 = 1037676255145795LLU;
	volatile int64_t x203 = -3865438951930840338LL;
	int8_t x204 = 15;
	int32_t t45 = 78463818;

    t45 = ((x201*(x202<=x203))+x204);

    if (t45 != 14) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x205 = -1;
	volatile int16_t x207 = INT16_MIN;
	int8_t x208 = INT8_MIN;
	static volatile int32_t t46 = 72223;

    t46 = ((x205*(x206<=x207))+x208);

    if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x209 = -22;
	static int32_t x210 = INT32_MIN;
	volatile int8_t x211 = INT8_MAX;
	int64_t x212 = INT64_MAX;
	volatile int64_t t47 = -3799156188530LL;

    t47 = ((x209*(x210<=x211))+x212);

    if (t47 != 9223372036854775785LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x213 = 1848U;
	volatile int16_t x214 = -1;
	volatile uint16_t x215 = UINT16_MAX;
	static int64_t x216 = 167206846LL;
	int64_t t48 = -47773485630LL;

    t48 = ((x213*(x214<=x215))+x216);

    if (t48 != 167208694LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x218 = UINT64_MAX;
	static uint64_t x219 = 17157426561LLU;
	int64_t x220 = -1LL;
	int64_t t49 = -26837544580286LL;

    t49 = ((x217*(x218<=x219))+x220);

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x222 = INT16_MIN;
	int16_t x223 = 4;
	int32_t x224 = 1116;
	int32_t t50 = -23247934;

    t50 = ((x221*(x222<=x223))+x224);

    if (t50 != -31093632) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x225 = INT32_MIN;
	static int16_t x226 = INT16_MAX;
	static int8_t x227 = -1;
	int8_t x228 = 14;
	volatile int32_t t51 = -519948082;

    t51 = ((x225*(x226<=x227))+x228);

    if (t51 != 14) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int64_t x229 = -1LL;
	static uint8_t x230 = 54U;
	int16_t x231 = -1;
	volatile int64_t t52 = 99046524LL;

    t52 = ((x229*(x230<=x231))+x232);

    if (t52 != -2147483648LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x235 = INT32_MAX;
	int32_t x236 = -1827;
	volatile int32_t t53 = -31;

    t53 = ((x233*(x234<=x235))+x236);

    if (t53 != 30940) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x237 = 6654268U;
	static int16_t x238 = -1;
	uint8_t x239 = 87U;
	int64_t x240 = INT64_MIN;
	int64_t t54 = 247579704936LL;

    t54 = ((x237*(x238<=x239))+x240);

    if (t54 != -9223372036848121540LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x249 = 1929487428319LL;
	uint8_t x250 = 0U;
	int16_t x251 = INT16_MIN;
	int32_t x252 = 7;
	volatile int64_t t55 = 2195238355620240LL;

    t55 = ((x249*(x250<=x251))+x252);

    if (t55 != 7LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x254 = -1LL;
	uint64_t x255 = 2282070973LLU;
	static uint8_t x256 = 61U;

    t56 = ((x253*(x254<=x255))+x256);

    if (t56 != 61U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x257 = INT64_MAX;
	int64_t x258 = INT64_MAX;
	int16_t x260 = INT16_MAX;

    t57 = ((x257*(x258<=x259))+x260);

    if (t57 != 32767LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x263 = INT16_MIN;
	int16_t x264 = -1;
	static volatile int32_t t58 = 480066;

    t58 = ((x261*(x262<=x263))+x264);

    if (t58 != 65534) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x266 = 295815861615LL;
	int64_t x267 = -1LL;
	volatile int64_t t59 = INT64_MIN;

    t59 = ((x265*(x266<=x267))+x268);

    if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x273 = 13;
	int16_t x274 = INT16_MIN;
	uint8_t x276 = 45U;
	int32_t t60 = -78;

    t60 = ((x273*(x274<=x275))+x276);

    if (t60 != 45) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x281 = 21420923073195556LLU;
	static uint64_t x282 = 16083783482128LLU;

    t61 = ((x281*(x282<=x283))+x284);

    if (t61 != 21420923073195555LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x285 = INT64_MIN;
	static int32_t x286 = INT32_MAX;
	int64_t t62 = INT64_MIN;

    t62 = ((x285*(x286<=x287))+x288);

    if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x289 = INT8_MIN;
	int16_t x290 = INT16_MIN;
	uint64_t x291 = UINT64_MAX;
	int8_t x292 = -53;
	static int32_t t63 = 0;

    t63 = ((x289*(x290<=x291))+x292);

    if (t63 != -181) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x294 = INT32_MAX;
	int32_t x295 = 47977329;
	static int64_t x296 = INT64_MIN;
	volatile int64_t t64 = INT64_MIN;

    t64 = ((x293*(x294<=x295))+x296);

    if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x297 = 434505714;
	int32_t x298 = -1;
	static uint32_t x299 = 246632U;
	uint32_t x300 = UINT32_MAX;
	uint32_t t65 = UINT32_MAX;

    t65 = ((x297*(x298<=x299))+x300);

    if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x301 = INT64_MIN;
	uint8_t x302 = 0U;
	static uint16_t x304 = 121U;

    t66 = ((x301*(x302<=x303))+x304);

    if (t66 != -9223372036854775687LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x305 = INT32_MAX;
	static int32_t x306 = -1;
	uint8_t x307 = 15U;
	volatile uint64_t t67 = 714LLU;

    t67 = ((x305*(x306<=x307))+x308);

    if (t67 != 2861823929LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x310 = INT64_MIN;
	volatile int64_t x312 = -2328050264085LL;
	int64_t t68 = 78038073851720LL;

    t68 = ((x309*(x310<=x311))+x312);

    if (t68 != -2328050296853LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x313 = 7197LLU;
	int64_t x315 = 449554028063038LL;
	uint32_t x316 = 37991U;
	uint64_t t69 = 19022189228LLU;

    t69 = ((x313*(x314<=x315))+x316);

    if (t69 != 45188LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x317 = INT16_MIN;
	volatile int8_t x318 = -3;
	uint32_t x319 = 8U;
	int8_t x320 = INT8_MIN;
	volatile int32_t t70 = -21;

    t70 = ((x317*(x318<=x319))+x320);

    if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x321 = INT16_MIN;
	int64_t x323 = INT64_MIN;
	int32_t x324 = 172071;
	volatile int32_t t71 = -15342015;

    t71 = ((x321*(x322<=x323))+x324);

    if (t71 != 139303) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x325 = INT64_MIN;
	int8_t x326 = INT8_MAX;
	int32_t x327 = INT32_MIN;

    t72 = ((x325*(x326<=x327))+x328);

    if (t72 != 4876700LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint32_t x329 = UINT32_MAX;
	static int8_t x330 = INT8_MAX;
	int64_t x331 = INT64_MIN;

    t73 = ((x329*(x330<=x331))+x332);

    if (t73 != 2147483648U) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x333 = -1;
	int16_t x334 = INT16_MIN;
	static uint16_t x335 = 90U;
	int16_t x336 = INT16_MIN;
	int32_t t74 = -88375;

    t74 = ((x333*(x334<=x335))+x336);

    if (t74 != -32769) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x337 = -1;
	uint32_t x338 = 15U;
	static int16_t x339 = -1;
	int64_t t75 = 239747186053LL;

    t75 = ((x337*(x338<=x339))+x340);

    if (t75 != 26411LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x341 = UINT8_MAX;
	static int32_t x342 = INT32_MAX;
	static uint32_t x343 = UINT32_MAX;
	volatile uint16_t x344 = 45U;
	volatile int32_t t76 = 17287;

    t76 = ((x341*(x342<=x343))+x344);

    if (t76 != 300) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x350 = 2;
	static int64_t x352 = -30506807LL;
	static volatile int64_t t77 = 1049083660184LL;

    t77 = ((x349*(x350<=x351))+x352);

    if (t77 != -30506807LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x353 = -1;
	int16_t x354 = -4979;
	uint16_t x355 = 8U;
	static int16_t x356 = INT16_MIN;
	int32_t t78 = 24778063;

    t78 = ((x353*(x354<=x355))+x356);

    if (t78 != -32769) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x357 = INT16_MIN;
	int8_t x358 = -1;
	static int8_t x359 = 3;
	int16_t x360 = 2;

    t79 = ((x357*(x358<=x359))+x360);

    if (t79 != -32766) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x361 = 947194232U;
	static int32_t x363 = INT32_MIN;
	uint32_t t80 = 10665013U;

    t80 = ((x361*(x362<=x363))+x364);

    if (t80 != 947194359U) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x365 = 1;
	uint32_t x366 = 2600256U;
	volatile int16_t x367 = INT16_MIN;
	volatile uint8_t x368 = UINT8_MAX;
	int32_t t81 = -871316981;

    t81 = ((x365*(x366<=x367))+x368);

    if (t81 != 256) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x371 = 4063181455987876LLU;
	int32_t t82 = 21721;

    t82 = ((x369*(x370<=x371))+x372);

    if (t82 != 32778) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x373 = INT64_MAX;
	volatile int64_t x374 = -1LL;
	static int64_t x376 = INT64_MIN;
	int64_t t83 = -16344LL;

    t83 = ((x373*(x374<=x375))+x376);

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x378 = 31759515U;
	int64_t x380 = INT64_MAX;
	int64_t t84 = INT64_MAX;

    t84 = ((x377*(x378<=x379))+x380);

    if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x381 = 147;
	int32_t x382 = INT32_MIN;
	static int32_t x383 = INT32_MAX;
	int64_t x384 = -1LL;

    t85 = ((x381*(x382<=x383))+x384);

    if (t85 != 146LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x386 = 1U;
	static volatile int32_t x387 = 1;
	int32_t x388 = 936;
	volatile int64_t t86 = -12547230LL;

    t86 = ((x385*(x386<=x387))+x388);

    if (t86 != 935LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x389 = 3785LLU;
	uint64_t x391 = UINT64_MAX;
	volatile int8_t x392 = INT8_MAX;
	uint64_t t87 = 502290868464LLU;

    t87 = ((x389*(x390<=x391))+x392);

    if (t87 != 3912LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x393 = -31816;
	int64_t x394 = INT64_MAX;
	uint64_t x396 = UINT64_MAX;
	uint64_t t88 = 33251163207290LLU;

    t88 = ((x393*(x394<=x395))+x396);

    if (t88 != 18446744073709519799LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x399 = 2U;
	uint64_t t89 = 29949485874637718LLU;

    t89 = ((x397*(x398<=x399))+x400);

    if (t89 != 9223914557073498487LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x404 = INT64_MIN;
	int64_t t90 = INT64_MIN;

    t90 = ((x401*(x402<=x403))+x404);

    if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x405 = UINT8_MAX;
	int64_t x406 = 2637LL;
	int64_t x407 = 206292LL;
	int32_t x408 = INT32_MIN;
	volatile int32_t t91 = 55;

    t91 = ((x405*(x406<=x407))+x408);

    if (t91 != -2147483393) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x409 = INT64_MAX;
	uint64_t x410 = 9702131210633936LLU;
	int16_t x411 = 6088;
	uint64_t x412 = 13147LLU;
	volatile uint64_t t92 = 65490157LLU;

    t92 = ((x409*(x410<=x411))+x412);

    if (t92 != 13147LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x413 = INT32_MIN;
	static int16_t x415 = INT16_MAX;
	volatile int64_t t93 = 51806229016698582LL;

    t93 = ((x413*(x414<=x415))+x416);

    if (t93 != -10814464120219825LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x417 = INT32_MIN;
	static uint16_t x419 = 117U;
	volatile int32_t x420 = INT32_MIN;
	volatile int32_t t94 = INT32_MIN;

    t94 = ((x417*(x418<=x419))+x420);

    if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x421 = 1U;
	int64_t x422 = 645451LL;
	int8_t x423 = -1;
	volatile int32_t t95 = -26921942;

    t95 = ((x421*(x422<=x423))+x424);

    if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x425 = INT64_MIN;
	static uint32_t x428 = UINT32_MAX;
	int64_t t96 = 16LL;

    t96 = ((x425*(x426<=x427))+x428);

    if (t96 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x429 = 15U;
	volatile int64_t x430 = -390738914867301503LL;
	volatile int8_t x431 = 1;

    t97 = ((x429*(x430<=x431))+x432);

    if (t97 != 32782) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x434 = 60U;
	static int8_t x435 = INT8_MIN;
	uint8_t x436 = 13U;
	static int32_t t98 = 1;

    t98 = ((x433*(x434<=x435))+x436);

    if (t98 != 13) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x437 = -359LL;
	volatile int64_t x440 = INT64_MIN;
	volatile int64_t t99 = INT64_MIN;

    t99 = ((x437*(x438<=x439))+x440);

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x441 = -166565LL;
	static volatile int64_t x442 = INT64_MIN;
	volatile uint64_t x443 = UINT64_MAX;
	int8_t x444 = INT8_MIN;
	static int64_t t100 = 29910580045390LL;

    t100 = ((x441*(x442<=x443))+x444);

    if (t100 != -166693LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x445 = 12332052LLU;
	uint32_t x446 = 795U;
	volatile uint32_t x447 = UINT32_MAX;

    t101 = ((x445*(x446<=x447))+x448);

    if (t101 != 12332798LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x449 = UINT8_MAX;
	int32_t x451 = INT32_MIN;
	uint32_t x452 = UINT32_MAX;
	uint32_t t102 = UINT32_MAX;

    t102 = ((x449*(x450<=x451))+x452);

    if (t102 != UINT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x453 = 74673;
	int64_t x454 = -1LL;
	int8_t x455 = INT8_MIN;
	int32_t t103 = INT32_MAX;

    t103 = ((x453*(x454<=x455))+x456);

    if (t103 != INT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x457 = -1;
	int8_t x458 = INT8_MIN;
	volatile uint64_t x459 = 10791530176967LLU;
	int32_t t104 = -669455;

    t104 = ((x457*(x458<=x459))+x460);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x463 = 0U;
	volatile int64_t x464 = INT64_MIN;
	static int64_t t105 = INT64_MIN;

    t105 = ((x461*(x462<=x463))+x464);

    if (t105 != INT64_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x465 = 21308091;
	int64_t x467 = INT64_MIN;
	int8_t x468 = INT8_MIN;
	int32_t t106 = -30565;

    t106 = ((x465*(x466<=x467))+x468);

    if (t106 != -128) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x469 = 31780U;
	int16_t x470 = 2;
	int16_t x471 = INT16_MAX;
	int16_t x472 = INT16_MIN;
	volatile int32_t t107 = -1;

    t107 = ((x469*(x470<=x471))+x472);

    if (t107 != -988) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x473 = INT64_MIN;
	volatile uint32_t x474 = 218867U;
	uint16_t x475 = UINT16_MAX;
	uint32_t x476 = 30158836U;
	volatile int64_t t108 = 3740847861886067LL;

    t108 = ((x473*(x474<=x475))+x476);

    if (t108 != 30158836LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x478 = -352841072169LL;
	int16_t x479 = INT16_MIN;
	volatile int8_t x480 = -1;
	volatile int32_t t109 = -710981;

    t109 = ((x477*(x478<=x479))+x480);

    if (t109 != 126) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x481 = UINT32_MAX;
	uint8_t x482 = 14U;
	volatile uint64_t x483 = UINT64_MAX;

    t110 = ((x481*(x482<=x483))+x484);

    if (t110 != 32766U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x485 = -3709;
	static uint8_t x486 = 26U;
	int16_t x488 = -1;
	volatile int32_t t111 = -384;

    t111 = ((x485*(x486<=x487))+x488);

    if (t111 != -3710) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x489 = 36675299LLU;
	static int16_t x490 = -285;
	uint8_t x491 = UINT8_MAX;
	static uint64_t x492 = 528013232153LLU;
	volatile uint64_t t112 = 849351510922165LLU;

    t112 = ((x489*(x490<=x491))+x492);

    if (t112 != 528049907452LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint32_t x493 = 1897850403U;
	volatile uint32_t x494 = UINT32_MAX;
	int32_t x495 = -1;
	int32_t x496 = -1;

    t113 = ((x493*(x494<=x495))+x496);

    if (t113 != 1897850402U) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x497 = 2097119980766265522LLU;
	volatile int64_t x498 = 8238162LL;
	int8_t x500 = -1;
	volatile uint64_t t114 = 906LLU;

    t114 = ((x497*(x498<=x499))+x500);

    if (t114 != 2097119980766265521LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x502 = -842;
	volatile uint8_t x504 = 0U;

    t115 = ((x501*(x502<=x503))+x504);

    if (t115 != 3950) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x505 = 51535696622205926LLU;
	int64_t x506 = -3LL;
	volatile uint16_t x507 = 24U;
	volatile int32_t x508 = INT32_MIN;

    t116 = ((x505*(x506<=x507))+x508);

    if (t116 != 51535694474722278LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint8_t x509 = 7U;
	static int64_t x510 = 8362231467LL;
	int8_t x511 = -1;
	volatile uint8_t x512 = 9U;
	int32_t t117 = 23413;

    t117 = ((x509*(x510<=x511))+x512);

    if (t117 != 9) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x513 = INT64_MIN;
	volatile int32_t x514 = 197123;
	volatile int64_t t118 = -3133LL;

    t118 = ((x513*(x514<=x515))+x516);

    if (t118 != 226521LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x517 = INT8_MIN;
	uint32_t x518 = 254U;
	volatile int64_t t119 = -108890LL;

    t119 = ((x517*(x518<=x519))+x520);

    if (t119 != -127LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x522 = INT64_MAX;
	uint32_t x523 = UINT32_MAX;
	static uint16_t x524 = UINT16_MAX;

    t120 = ((x521*(x522<=x523))+x524);

    if (t120 != 65535) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x525 = INT16_MAX;
	int64_t x526 = INT64_MIN;
	int32_t x527 = 2890;
	int64_t x528 = -1LL;
	int64_t t121 = 1LL;

    t121 = ((x525*(x526<=x527))+x528);

    if (t121 != 32766LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x529 = -2487262786504LL;
	static volatile int64_t x530 = 128663836138LL;
	static int64_t x531 = 425LL;
	int64_t t122 = -4935894LL;

    t122 = ((x529*(x530<=x531))+x532);

    if (t122 != -128LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x533 = UINT64_MAX;
	int8_t x534 = INT8_MIN;
	int32_t x535 = 0;
	volatile int16_t x536 = INT16_MIN;

    t123 = ((x533*(x534<=x535))+x536);

    if (t123 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x537 = INT16_MAX;
	int8_t x539 = -7;
	volatile int64_t t124 = 8147LL;

    t124 = ((x537*(x538<=x539))+x540);

    if (t124 != 32766LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x541 = -28;
	uint32_t x542 = UINT32_MAX;

    t125 = ((x541*(x542<=x543))+x544);

    if (t125 != -62) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x546 = UINT32_MAX;
	int8_t x547 = -11;
	volatile uint16_t x548 = 405U;
	int32_t t126 = 12369;

    t126 = ((x545*(x546<=x547))+x548);

    if (t126 != 405) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x549 = 219U;
	static int32_t x551 = -1;
	int8_t x552 = -60;
	uint32_t t127 = 381191967U;

    t127 = ((x549*(x550<=x551))+x552);

    if (t127 != 159U) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x555 = -1LL;
	int64_t x556 = INT64_MAX;
	int64_t t128 = INT64_MAX;

    t128 = ((x553*(x554<=x555))+x556);

    if (t128 != INT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x557 = 9U;
	static uint64_t x558 = UINT64_MAX;
	uint64_t x559 = 4352848542756860699LLU;
	int64_t t129 = INT64_MIN;

    t129 = ((x557*(x558<=x559))+x560);

    if (t129 != INT64_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x566 = 13;
	volatile int32_t t130 = 7;

    t130 = ((x565*(x566<=x567))+x568);

    if (t130 != -2147450881) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x569 = UINT64_MAX;
	int8_t x571 = 0;
	uint32_t x572 = 746350894U;
	static volatile uint64_t t131 = 16LLU;

    t131 = ((x569*(x570<=x571))+x572);

    if (t131 != 746350894LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x574 = 1311640093LLU;
	int8_t x576 = INT8_MIN;
	uint32_t t132 = 6803122U;

    t132 = ((x573*(x574<=x575))+x576);

    if (t132 != 4294967216U) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x578 = -1;
	int64_t x579 = 3635LL;
	int8_t x580 = 16;
	static uint64_t t133 = 10648405016011LLU;

    t133 = ((x577*(x578<=x579))+x580);

    if (t133 != 9716541LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x581 = UINT32_MAX;
	uint16_t x582 = 0U;
	volatile int64_t x583 = 384477LL;
	static int16_t x584 = -1;
	uint32_t t134 = 4118U;

    t134 = ((x581*(x582<=x583))+x584);

    if (t134 != 4294967294U) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x585 = 10095U;
	volatile int32_t x586 = -15987274;
	volatile int16_t x587 = -24;
	int32_t t135 = -688962;

    t135 = ((x585*(x586<=x587))+x588);

    if (t135 != 10096) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x593 = 702LL;
	static uint16_t x594 = 452U;
	volatile int32_t x596 = INT32_MIN;

    t136 = ((x593*(x594<=x595))+x596);

    if (t136 != -2147483648LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x597 = -1;
	uint32_t x598 = 244268U;
	int8_t x600 = INT8_MIN;
	static volatile int32_t t137 = -2060612;

    t137 = ((x597*(x598<=x599))+x600);

    if (t137 != -128) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x602 = UINT64_MAX;
	int32_t x603 = INT32_MIN;
	volatile uint64_t t138 = 22LLU;

    t138 = ((x601*(x602<=x603))+x604);

    if (t138 != 127127967319LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x605 = 1187490;
	int64_t x608 = INT64_MIN;
	int64_t t139 = -375407305861LL;

    t139 = ((x605*(x606<=x607))+x608);

    if (t139 != -9223372036853588318LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x610 = 294U;
	static int16_t x611 = -8;
	static int64_t x612 = 15059LL;
	static int64_t t140 = 832803368853167LL;

    t140 = ((x609*(x610<=x611))+x612);

    if (t140 != -9223372036854760749LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x613 = 52361402U;
	volatile int64_t x614 = INT64_MIN;
	int32_t x616 = -1;
	volatile uint32_t t141 = 2782602U;

    t141 = ((x613*(x614<=x615))+x616);

    if (t141 != 52361401U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x617 = 3030;
	int8_t x618 = -1;
	int8_t x619 = -53;
	int64_t t142 = 4LL;

    t142 = ((x617*(x618<=x619))+x620);

    if (t142 != -513142413578LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x622 = UINT16_MAX;
	uint8_t x623 = 13U;

    t143 = ((x621*(x622<=x623))+x624);

    if (t143 != 3) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x625 = 216;
	int16_t x626 = INT16_MIN;
	static uint16_t x627 = 1007U;
	static int16_t x628 = 1;
	int32_t t144 = -55;

    t144 = ((x625*(x626<=x627))+x628);

    if (t144 != 217) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x629 = UINT16_MAX;
	static uint16_t x630 = 270U;
	volatile int16_t x631 = 54;
	int16_t x632 = -2919;

    t145 = ((x629*(x630<=x631))+x632);

    if (t145 != -2919) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x633 = -71568163;
	static int8_t x636 = INT8_MAX;

    t146 = ((x633*(x634<=x635))+x636);

    if (t146 != -71568036) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int8_t x637 = INT8_MIN;
	volatile int32_t x638 = 534;
	volatile int16_t x639 = -1;
	uint64_t x640 = UINT64_MAX;
	volatile uint64_t t147 = UINT64_MAX;

    t147 = ((x637*(x638<=x639))+x640);

    if (t147 != UINT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x641 = 1098U;
	volatile int64_t x642 = INT64_MAX;
	int32_t x644 = -515310;
	volatile int32_t t148 = -190685;

    t148 = ((x641*(x642<=x643))+x644);

    if (t148 != -515310) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x645 = 2U;
	volatile int32_t x646 = -824199;
	int16_t x647 = INT16_MAX;
	uint8_t x648 = 68U;
	volatile int32_t t149 = -39436;

    t149 = ((x645*(x646<=x647))+x648);

    if (t149 != 70) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x652 = 977;
	int32_t t150 = -869;

    t150 = ((x649*(x650<=x651))+x652);

    if (t150 != 976) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x653 = -1;
	int32_t x654 = -3945191;
	int32_t x655 = INT32_MIN;
	int8_t x656 = -42;
	static int32_t t151 = -12;

    t151 = ((x653*(x654<=x655))+x656);

    if (t151 != -42) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x657 = UINT8_MAX;
	uint64_t x658 = 719973931700LLU;
	volatile int32_t x659 = -939039275;
	uint64_t x660 = 21173572040LLU;
	uint64_t t152 = 494967280LLU;

    t152 = ((x657*(x658<=x659))+x660);

    if (t152 != 21173572295LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x661 = -1;
	volatile int8_t x662 = INT8_MAX;
	uint32_t x663 = 673305U;
	uint32_t x664 = 19495U;
	static uint32_t t153 = 14286983U;

    t153 = ((x661*(x662<=x663))+x664);

    if (t153 != 19494U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x666 = UINT64_MAX;
	int32_t x667 = INT32_MAX;
	int8_t x668 = INT8_MIN;
	volatile int32_t t154 = 7317202;

    t154 = ((x665*(x666<=x667))+x668);

    if (t154 != -128) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint64_t x669 = 1LLU;
	uint64_t t155 = 14514577796747LLU;

    t155 = ((x669*(x670<=x671))+x672);

    if (t155 != 256LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x673 = 7713159;
	int8_t x674 = -1;
	static int16_t x675 = 1;
	int16_t x676 = -5473;
	int32_t t156 = 21723;

    t156 = ((x673*(x674<=x675))+x676);

    if (t156 != 7707686) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x677 = INT32_MIN;
	volatile int64_t x678 = 0LL;
	volatile uint16_t x679 = 3941U;
	int16_t x680 = INT16_MAX;
	volatile int32_t t157 = 2019083;

    t157 = ((x677*(x678<=x679))+x680);

    if (t157 != -2147450881) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x681 = -1;
	uint32_t x683 = UINT32_MAX;
	int64_t x684 = -192525861LL;

    t158 = ((x681*(x682<=x683))+x684);

    if (t158 != -192525862LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x685 = 149865;
	int32_t x686 = -20907;
	volatile uint32_t x687 = 65654302U;
	int64_t x688 = 2110343840999924951LL;

    t159 = ((x685*(x686<=x687))+x688);

    if (t159 != 2110343840999924951LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x689 = -1;
	volatile int32_t x690 = -1;
	uint16_t x691 = 29U;
	volatile int32_t x692 = INT32_MAX;
	int32_t t160 = 990106755;

    t160 = ((x689*(x690<=x691))+x692);

    if (t160 != 2147483646) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x693 = 3U;
	int8_t x694 = -1;
	volatile int8_t x695 = INT8_MIN;
	volatile int8_t x696 = INT8_MIN;
	static volatile uint32_t t161 = 778059U;

    t161 = ((x693*(x694<=x695))+x696);

    if (t161 != 4294967168U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x701 = -3127LL;
	static int16_t x702 = -1;
	int32_t x703 = -1;
	int64_t x704 = 119LL;
	volatile int64_t t162 = 333543902LL;

    t162 = ((x701*(x702<=x703))+x704);

    if (t162 != -3008LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x709 = -1;
	int8_t x711 = -1;
	static uint64_t x712 = 295180399034786LLU;
	uint64_t t163 = 101365275000808191LLU;

    t163 = ((x709*(x710<=x711))+x712);

    if (t163 != 295180399034786LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x713 = INT16_MAX;
	int32_t x714 = INT32_MAX;
	int64_t x715 = 659629263699492381LL;
	uint32_t x716 = UINT32_MAX;
	volatile uint32_t t164 = 28070U;

    t164 = ((x713*(x714<=x715))+x716);

    if (t164 != 32766U) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x718 = INT16_MIN;
	uint64_t x719 = UINT64_MAX;
	int32_t x720 = 2557;
	volatile int32_t t165 = -4358;

    t165 = ((x717*(x718<=x719))+x720);

    if (t165 != 2508) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x721 = UINT32_MAX;
	int64_t x722 = INT64_MAX;
	volatile int64_t t166 = -5224138981222109LL;

    t166 = ((x721*(x722<=x723))+x724);

    if (t166 != 1045LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int16_t x725 = 14;
	uint16_t x726 = UINT16_MAX;
	volatile int64_t x727 = INT64_MAX;
	static int32_t x728 = INT32_MIN;
	volatile int32_t t167 = -1;

    t167 = ((x725*(x726<=x727))+x728);

    if (t167 != -2147483634) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x729 = 66846845U;
	uint8_t x731 = 0U;
	int64_t x732 = INT64_MIN;
	int64_t t168 = -342LL;

    t168 = ((x729*(x730<=x731))+x732);

    if (t168 != -9223372036787928963LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x737 = 1;
	int64_t x738 = -1LL;
	volatile int32_t x739 = INT32_MAX;
	int32_t x740 = INT32_MIN;
	int32_t t169 = 15898;

    t169 = ((x737*(x738<=x739))+x740);

    if (t169 != -2147483647) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x741 = INT64_MIN;
	static int64_t x743 = -453010LL;
	int64_t x744 = -114700863333130348LL;
	volatile int64_t t170 = 43990LL;

    t170 = ((x741*(x742<=x743))+x744);

    if (t170 != -114700863333130348LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x745 = INT32_MAX;
	int64_t x747 = -7998384874LL;
	static int16_t x748 = INT16_MIN;
	int32_t t171 = 49507;

    t171 = ((x745*(x746<=x747))+x748);

    if (t171 != -32768) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x749 = 1196U;
	volatile uint8_t x750 = 26U;
	int16_t x751 = INT16_MIN;
	int32_t x752 = INT32_MAX;

    t172 = ((x749*(x750<=x751))+x752);

    if (t172 != 2147483647U) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x757 = INT16_MAX;
	int16_t x758 = INT16_MAX;
	int64_t x760 = -1LL;
	int64_t t173 = 165061258581LL;

    t173 = ((x757*(x758<=x759))+x760);

    if (t173 != 32766LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x765 = UINT16_MAX;
	int64_t x766 = INT64_MAX;
	int64_t x767 = INT64_MIN;
	static volatile uint64_t x768 = 35LLU;

    t174 = ((x765*(x766<=x767))+x768);

    if (t174 != 35LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x769 = INT8_MAX;
	int32_t x770 = INT32_MIN;
	volatile uint16_t x771 = 11U;
	int16_t x772 = INT16_MIN;
	volatile int32_t t175 = -65097;

    t175 = ((x769*(x770<=x771))+x772);

    if (t175 != -32641) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x773 = INT16_MIN;
	int64_t x776 = 51485581862559280LL;
	volatile int64_t t176 = -850441LL;

    t176 = ((x773*(x774<=x775))+x776);

    if (t176 != 51485581862559280LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x779 = -1LL;
	int32_t x780 = INT32_MAX;
	volatile uint32_t t177 = 6U;

    t177 = ((x777*(x778<=x779))+x780);

    if (t177 != 2147483647U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x781 = -278149037849052LL;
	int32_t x782 = INT32_MIN;
	int64_t x783 = INT64_MAX;
	int32_t x784 = INT32_MAX;
	int64_t t178 = 476773LL;

    t178 = ((x781*(x782<=x783))+x784);

    if (t178 != -278146890365405LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x785 = 1669U;
	volatile int8_t x786 = 1;
	static int64_t x787 = -1LL;
	uint16_t x788 = 1U;

    t179 = ((x785*(x786<=x787))+x788);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x790 = INT16_MIN;
	uint32_t x791 = 3193U;
	volatile uint32_t x792 = 222094U;
	int64_t t180 = 26593LL;

    t180 = ((x789*(x790<=x791))+x792);

    if (t180 != 222094LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x793 = INT64_MAX;
	int32_t x794 = INT32_MIN;
	int16_t x795 = -1760;
	int16_t x796 = -1;
	int64_t t181 = 2788934715000765LL;

    t181 = ((x793*(x794<=x795))+x796);

    if (t181 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x798 = 3U;
	uint16_t x799 = 4232U;
	uint8_t x800 = 5U;
	uint32_t t182 = 45788U;

    t182 = ((x797*(x798<=x799))+x800);

    if (t182 != 412U) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int16_t x802 = INT16_MIN;
	volatile uint64_t x804 = UINT64_MAX;
	uint64_t t183 = UINT64_MAX;

    t183 = ((x801*(x802<=x803))+x804);

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x805 = -1;
	uint64_t x806 = UINT64_MAX;
	static volatile int32_t x807 = INT32_MIN;
	uint64_t x808 = 68960943356LLU;
	static volatile uint64_t t184 = 1337034LLU;

    t184 = ((x805*(x806<=x807))+x808);

    if (t184 != 68960943356LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x810 = 15939;

    t185 = ((x809*(x810<=x811))+x812);

    if (t185 != 328616LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int32_t x813 = 474;
	static int16_t x814 = -1;
	static int32_t x815 = INT32_MIN;
	uint64_t x816 = UINT64_MAX;

    t186 = ((x813*(x814<=x815))+x816);

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x817 = INT8_MAX;
	static uint16_t x820 = 19U;

    t187 = ((x817*(x818<=x819))+x820);

    if (t187 != 19) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x822 = INT8_MIN;
	uint32_t x823 = 8246U;
	int16_t x824 = 8622;
	volatile int32_t t188 = -2494;

    t188 = ((x821*(x822<=x823))+x824);

    if (t188 != 8622) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x826 = 14U;
	volatile int32_t x827 = 46;
	static volatile int32_t x828 = -1;
	static int32_t t189 = 98262;

    t189 = ((x825*(x826<=x827))+x828);

    if (t189 != -32769) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x829 = 122U;
	int16_t x830 = INT16_MIN;
	volatile int32_t x832 = INT32_MIN;
	int32_t t190 = -1;

    t190 = ((x829*(x830<=x831))+x832);

    if (t190 != -2147483526) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x834 = INT16_MIN;
	volatile int64_t t191 = 21335227023LL;

    t191 = ((x833*(x834<=x835))+x836);

    if (t191 != 7LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x837 = -1;
	uint16_t x838 = 4678U;
	volatile int64_t x839 = INT64_MIN;
	int32_t t192 = 8441315;

    t192 = ((x837*(x838<=x839))+x840);

    if (t192 != 32767) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x841 = INT8_MAX;
	static int32_t x843 = INT32_MAX;
	uint8_t x844 = 20U;
	volatile int32_t t193 = 3;

    t193 = ((x841*(x842<=x843))+x844);

    if (t193 != 147) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x845 = 25U;
	int64_t x846 = INT64_MIN;
	volatile int16_t x847 = INT16_MIN;
	uint16_t x848 = 5U;
	volatile uint32_t t194 = 28266861U;

    t194 = ((x845*(x846<=x847))+x848);

    if (t194 != 30U) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x849 = INT64_MAX;
	static int32_t x850 = INT32_MAX;
	int32_t x852 = INT32_MIN;

    t195 = ((x849*(x850<=x851))+x852);

    if (t195 != -2147483648LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x853 = UINT16_MAX;
	int32_t x855 = -24;
	static volatile uint8_t x856 = 12U;
	static volatile int32_t t196 = -238979;

    t196 = ((x853*(x854<=x855))+x856);

    if (t196 != 65547) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x857 = INT16_MIN;
	int64_t x858 = -1LL;
	static uint32_t x859 = UINT32_MAX;
	static int8_t x860 = INT8_MAX;
	volatile int32_t t197 = 0;

    t197 = ((x857*(x858<=x859))+x860);

    if (t197 != -32641) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x861 = 14794859804285LL;
	int8_t x862 = -1;
	uint64_t x863 = UINT64_MAX;
	int32_t x864 = INT32_MIN;

    t198 = ((x861*(x862<=x863))+x864);

    if (t198 != 14792712320637LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x865 = -25714;
	int32_t x866 = -1;
	int32_t x867 = INT32_MIN;
	volatile uint32_t t199 = UINT32_MAX;

    t199 = ((x865*(x866<=x867))+x868);

    if (t199 != UINT32_MAX) { NG(); } else { ; }
	
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


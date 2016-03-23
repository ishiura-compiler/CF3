
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

int8_t x3 = 0;
uint32_t x15 = UINT32_MAX;
uint8_t x25 = 99U;
int16_t x29 = INT16_MIN;
static volatile int32_t x30 = 0;
int8_t x34 = INT8_MIN;
uint64_t x36 = 778836033711LLU;
uint64_t t8 = 88228LLU;
int64_t x43 = -1LL;
static int32_t t10 = 412309139;
int32_t x45 = 2380124;
int8_t x47 = INT8_MIN;
static volatile int8_t x51 = INT8_MAX;
int64_t x52 = 1923642161803LL;
volatile int64_t t12 = -16LL;
int16_t x53 = INT16_MAX;
uint32_t x54 = UINT32_MAX;
int16_t x61 = INT16_MIN;
static int64_t x74 = INT64_MIN;
int64_t x79 = -1LL;
volatile int16_t x80 = INT16_MIN;
static volatile uint64_t x83 = 40251441LLU;
static int8_t x85 = -11;
uint16_t x91 = 0U;
int16_t x98 = -1;
int64_t x114 = -17071950808462LL;
int32_t t27 = 497519;
static uint16_t x137 = UINT16_MAX;
int16_t x139 = -1006;
int64_t x141 = INT64_MIN;
static int16_t x146 = -100;
int32_t x150 = -1265483;
static int64_t x157 = INT64_MIN;
int64_t x160 = -316318LL;
int16_t x162 = 1005;
static int32_t t38 = INT32_MIN;
static int8_t x180 = -1;
int64_t x181 = INT64_MIN;
int32_t t41 = -3;
volatile int8_t x186 = 40;
int8_t x197 = INT8_MIN;
int32_t x202 = -1;
int16_t x205 = -3056;
volatile uint64_t t48 = 5741248017LLU;
uint64_t x217 = UINT64_MAX;
volatile int64_t x222 = -1LL;
static int64_t t51 = -2434LL;
int16_t x229 = INT16_MIN;
static int8_t x232 = INT8_MAX;
uint64_t x238 = UINT64_MAX;
uint16_t x241 = UINT16_MAX;
int8_t x243 = INT8_MIN;
volatile int16_t x252 = INT16_MAX;
int8_t x253 = INT8_MIN;
uint8_t x254 = 30U;
int16_t x258 = -1;
int64_t x261 = INT64_MAX;
uint8_t x262 = 27U;
uint64_t x265 = 3068LLU;
uint64_t x268 = UINT64_MAX;
volatile uint64_t t61 = UINT64_MAX;
uint8_t x269 = UINT8_MAX;
volatile uint32_t x271 = 159U;
int8_t x272 = INT8_MAX;
uint64_t t65 = 0LLU;
int8_t x285 = INT8_MIN;
static volatile int32_t x286 = -20421;
static int8_t x289 = -1;
int32_t x292 = INT32_MAX;
int16_t x293 = 0;
static int64_t x306 = 6740510LL;
static uint8_t x308 = 7U;
volatile int32_t x317 = INT32_MIN;
uint8_t x319 = UINT8_MAX;
int32_t x320 = 2681;
volatile int64_t x322 = -1LL;
int16_t x337 = INT16_MIN;
volatile int8_t x338 = INT8_MIN;
static volatile uint16_t x340 = UINT16_MAX;
volatile int32_t t75 = 4293;
int32_t x346 = INT32_MIN;
volatile int64_t t77 = -1880039LL;
static int32_t x353 = INT32_MIN;
int64_t x355 = -1LL;
int32_t x357 = -233;
int64_t x358 = INT64_MIN;
volatile uint32_t t81 = 213U;
int16_t x378 = 7;
uint8_t x379 = 37U;
volatile int32_t x380 = INT32_MAX;
uint16_t x382 = 556U;
uint32_t x384 = 240469693U;
static uint32_t x387 = 302914U;
uint64_t x388 = 893329750LLU;
int64_t x391 = 1399344921LL;
int64_t x396 = INT64_MIN;
int64_t t86 = -557276809473149542LL;
static volatile int32_t x397 = -1;
int64_t t87 = INT64_MIN;
int8_t x404 = INT8_MIN;
uint32_t x407 = 780951227U;
int16_t x415 = INT16_MAX;
int32_t t90 = -505918881;
int8_t x417 = INT8_MIN;
uint8_t x420 = 1U;
int64_t x421 = INT64_MAX;
volatile uint16_t x429 = UINT16_MAX;
int8_t x432 = INT8_MAX;
int16_t x434 = INT16_MIN;
static uint16_t x435 = 155U;
int16_t x441 = INT16_MIN;
volatile uint32_t x447 = 25U;
static int16_t x452 = -1;
int32_t x456 = -1;
static volatile int32_t t100 = INT32_MAX;
static int32_t x466 = 63787910;
uint16_t x468 = UINT16_MAX;
int32_t t102 = 7689;
int64_t x479 = INT64_MAX;
uint16_t x481 = UINT16_MAX;
int16_t x487 = -21;
volatile uint32_t x488 = 134391U;
uint8_t x494 = 14U;
static volatile int32_t x499 = -1;
static volatile uint16_t x504 = 13606U;
static volatile int32_t t109 = -2225;
static int16_t x506 = INT16_MIN;
uint64_t x507 = UINT64_MAX;
uint16_t x514 = 21684U;
volatile int32_t x516 = -1;
volatile int16_t x532 = -1;
volatile int32_t t116 = 5;
int64_t x543 = -14517564322744LL;
uint16_t x554 = 9U;
uint64_t t120 = 60LLU;
int8_t x557 = 6;
uint64_t x558 = 255LLU;
int32_t x563 = -1;
uint64_t x569 = 4515186674773449410LLU;
volatile int32_t t124 = -389;
static volatile uint32_t x574 = 1U;
int32_t t127 = 3272;
uint32_t x587 = 12576158U;
int64_t x602 = -947363663637LL;
int32_t x603 = INT32_MIN;
uint64_t x612 = 2732LLU;
uint64_t t134 = 11LLU;
static volatile int8_t x614 = 1;
volatile int32_t x623 = INT32_MAX;
int32_t t137 = 199870804;
uint16_t x633 = 6U;
int8_t x636 = -1;
int64_t x647 = 3938564180533336692LL;
int16_t x651 = INT16_MIN;
static volatile int64_t x656 = INT64_MAX;
uint64_t x664 = 85078583749024LLU;
static uint8_t x666 = 25U;
uint16_t x667 = UINT16_MAX;
int8_t x680 = 1;
int32_t x681 = INT32_MIN;
int64_t x688 = -1LL;
int16_t x694 = INT16_MIN;
int64_t x695 = -249637LL;
int8_t x708 = INT8_MAX;
uint16_t x714 = 4U;
int64_t x717 = 450860416043429LL;
uint32_t t156 = 3247008U;
volatile int16_t x722 = INT16_MAX;
static uint32_t x733 = 2148240U;
uint64_t x734 = 8LLU;
static int64_t x737 = 91935692466LL;
volatile int64_t t164 = 24LL;
volatile int8_t x762 = 2;
volatile uint16_t x766 = 8U;
int16_t x777 = -11918;
volatile int16_t x782 = INT16_MIN;
uint16_t x797 = UINT16_MAX;
int64_t x806 = -1LL;
uint64_t x813 = 60068LLU;
volatile uint32_t t173 = 3149277U;
uint64_t x817 = UINT64_MAX;
uint64_t x822 = UINT64_MAX;
volatile int64_t t176 = INT64_MIN;
static uint8_t x836 = UINT8_MAX;
static int16_t x841 = INT16_MIN;
uint8_t x843 = 24U;
volatile int32_t x847 = 47221234;
volatile int32_t t180 = -12;
int64_t x863 = INT64_MIN;
uint16_t x866 = UINT16_MAX;
int32_t t184 = -64419731;
volatile int64_t x869 = INT64_MAX;
volatile uint8_t x872 = 7U;
static int32_t t185 = 143261414;
static volatile uint32_t x873 = UINT32_MAX;
int8_t x878 = -7;
volatile int32_t t187 = -656931;
int32_t x882 = -1;
volatile int32_t x883 = 251001;
int64_t x885 = INT64_MAX;
int8_t x892 = INT8_MIN;
int64_t x893 = INT64_MAX;
uint32_t x894 = UINT32_MAX;
int8_t x899 = 0;
static int64_t x900 = -30965988084LL;
volatile uint16_t x915 = 503U;
int64_t t195 = -480LL;
uint32_t x920 = 1653043U;
int32_t t197 = 1737;


void f0(void) {
    	uint32_t x1 = 39365899U;
	static volatile int16_t x2 = INT16_MIN;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 0;

    t0 = ((x1>(x2+x3))^x4);

    if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	static int16_t x6 = -1;
	uint16_t x7 = 8314U;
	int64_t x8 = 265070709LL;
	static int64_t t1 = -2754299LL;

    t1 = ((x5>(x6+x7))^x8);

    if (t1 != 265070709LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MIN;
	volatile uint8_t x10 = 24U;
	int8_t x11 = INT8_MAX;
	volatile uint32_t x12 = 6U;
	volatile uint32_t t2 = 8U;

    t2 = ((x9>(x10+x11))^x12);

    if (t2 != 6U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 9;
	volatile uint8_t x14 = UINT8_MAX;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = 11780924;

    t3 = ((x13>(x14+x15))^x16);

    if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = INT8_MIN;
	static uint32_t x18 = 12U;
	volatile int16_t x19 = -1;
	static int64_t x20 = INT64_MIN;
	volatile int64_t t4 = 53958290LL;

    t4 = ((x17>(x18+x19))^x20);

    if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = 0;
	uint16_t x22 = 10812U;
	volatile int32_t x23 = 391939;
	static int8_t x24 = INT8_MIN;
	int32_t t5 = 0;

    t5 = ((x21>(x22+x23))^x24);

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = INT16_MAX;
	int32_t x27 = INT32_MIN;
	int64_t x28 = -1LL;
	int64_t t6 = 6655929631LL;

    t6 = ((x25>(x26+x27))^x28);

    if (t6 != -2LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x31 = UINT64_MAX;
	int64_t x32 = INT64_MIN;
	volatile int64_t t7 = INT64_MIN;

    t7 = ((x29>(x30+x31))^x32);

    if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = 180959LL;
	static volatile uint16_t x35 = 211U;

    t8 = ((x33>(x34+x35))^x36);

    if (t8 != 778836033710LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 0U;
	volatile uint64_t x38 = 29605478801975LLU;
	int32_t x39 = -1;
	uint8_t x40 = 5U;
	volatile int32_t t9 = 68;

    t9 = ((x37>(x38+x39))^x40);

    if (t9 != 5) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = 6;
	int8_t x42 = 14;
	uint16_t x44 = UINT16_MAX;

    t10 = ((x41>(x42+x43))^x44);

    if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x46 = INT8_MAX;
	int64_t x48 = -335908813642641409LL;
	int64_t t11 = 0LL;

    t11 = ((x45>(x46+x47))^x48);

    if (t11 != -335908813642641410LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = 22144214832213675LL;
	uint32_t x50 = 197973843U;

    t12 = ((x49>(x50+x51))^x52);

    if (t12 != 1923642161802LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x55 = 19U;
	volatile int64_t x56 = INT64_MAX;
	volatile int64_t t13 = 45653717633809579LL;

    t13 = ((x53>(x54+x55))^x56);

    if (t13 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = -52;
	static int16_t x58 = 12605;
	int16_t x59 = -5021;
	uint64_t x60 = UINT64_MAX;
	uint64_t t14 = UINT64_MAX;

    t14 = ((x57>(x58+x59))^x60);

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x62 = -1;
	int8_t x63 = 3;
	static uint16_t x64 = 17934U;
	volatile int32_t t15 = -87855;

    t15 = ((x61>(x62+x63))^x64);

    if (t15 != 17934) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = -1;
	uint32_t x66 = 383U;
	int16_t x67 = -1;
	static int32_t x68 = INT32_MAX;
	int32_t t16 = 102750;

    t16 = ((x65>(x66+x67))^x68);

    if (t16 != 2147483646) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x69 = -1;
	volatile int16_t x70 = INT16_MIN;
	uint64_t x71 = 25452316894558LLU;
	uint64_t x72 = 12LLU;
	static volatile uint64_t t17 = 3136749267LLU;

    t17 = ((x69>(x70+x71))^x72);

    if (t17 != 13LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 56249262590LLU;
	uint32_t x75 = UINT32_MAX;
	uint32_t x76 = 35850130U;
	volatile uint32_t t18 = 98362333U;

    t18 = ((x73>(x74+x75))^x76);

    if (t18 != 35850130U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = INT32_MIN;
	int8_t x78 = INT8_MIN;
	static int32_t t19 = 406058113;

    t19 = ((x77>(x78+x79))^x80);

    if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = 0;
	volatile int64_t x82 = 1340994964LL;
	int32_t x84 = INT32_MIN;
	int32_t t20 = INT32_MIN;

    t20 = ((x81>(x82+x83))^x84);

    if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x86 = INT64_MAX;
	int32_t x87 = INT32_MIN;
	uint16_t x88 = 9065U;
	int32_t t21 = -136945;

    t21 = ((x85>(x86+x87))^x88);

    if (t21 != 9065) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -566441269732484LL;
	int32_t x90 = -81;
	static int8_t x92 = -15;
	static int32_t t22 = -1;

    t22 = ((x89>(x90+x91))^x92);

    if (t22 != -15) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 1U;
	int64_t x94 = -1LL;
	int16_t x95 = 0;
	static int8_t x96 = INT8_MIN;
	int32_t t23 = -107476;

    t23 = ((x93>(x94+x95))^x96);

    if (t23 != -127) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = -650081629;
	uint8_t x99 = UINT8_MAX;
	uint64_t x100 = 759023252320LLU;
	uint64_t t24 = 237887214LLU;

    t24 = ((x97>(x98+x99))^x100);

    if (t24 != 759023252320LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = -1894452;
	int32_t x102 = 5;
	int8_t x103 = 8;
	volatile int64_t x104 = INT64_MIN;
	volatile int64_t t25 = INT64_MIN;

    t25 = ((x101>(x102+x103))^x104);

    if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = 867;
	uint8_t x106 = 6U;
	uint16_t x107 = 0U;
	int64_t x108 = -1LL;
	static volatile int64_t t26 = -1985555892439528679LL;

    t26 = ((x105>(x106+x107))^x108);

    if (t26 != -2LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = INT32_MIN;
	static volatile int32_t x115 = -1;
	uint16_t x116 = UINT16_MAX;

    t27 = ((x113>(x114+x115))^x116);

    if (t27 != 65534) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x117 = 28U;
	volatile uint32_t x118 = 7U;
	volatile uint32_t x119 = 48U;
	int8_t x120 = INT8_MIN;
	volatile int32_t t28 = -17687;

    t28 = ((x117>(x118+x119))^x120);

    if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x125 = INT16_MIN;
	static int64_t x126 = 6590335LL;
	volatile uint64_t x127 = 242480158LLU;
	static uint8_t x128 = 1U;
	volatile int32_t t29 = 1702581;

    t29 = ((x125>(x126+x127))^x128);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x129 = 3U;
	uint64_t x130 = 20703947LLU;
	uint64_t x131 = 64335708432066949LLU;
	uint8_t x132 = 0U;
	volatile int32_t t30 = -7106247;

    t30 = ((x129>(x130+x131))^x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x133 = 364533U;
	volatile int32_t x134 = INT32_MAX;
	int8_t x135 = -1;
	int16_t x136 = INT16_MIN;
	volatile int32_t t31 = 715898152;

    t31 = ((x133>(x134+x135))^x136);

    if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int8_t x138 = INT8_MAX;
	int8_t x140 = INT8_MAX;
	volatile int32_t t32 = -949574750;

    t32 = ((x137>(x138+x139))^x140);

    if (t32 != 126) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x142 = -14;
	volatile uint8_t x143 = 6U;
	uint32_t x144 = 13U;
	volatile uint32_t t33 = 390299630U;

    t33 = ((x141>(x142+x143))^x144);

    if (t33 != 13U) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x145 = UINT16_MAX;
	volatile uint16_t x147 = 18070U;
	int8_t x148 = INT8_MIN;
	int32_t t34 = 16945073;

    t34 = ((x145>(x146+x147))^x148);

    if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x149 = INT32_MIN;
	static int16_t x151 = -63;
	volatile int8_t x152 = 1;
	static volatile int32_t t35 = -10025;

    t35 = ((x149>(x150+x151))^x152);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x158 = UINT32_MAX;
	static volatile int16_t x159 = INT16_MIN;
	volatile int64_t t36 = 52474LL;

    t36 = ((x157>(x158+x159))^x160);

    if (t36 != -316318LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x161 = INT16_MAX;
	uint32_t x163 = 1663969U;
	static uint32_t x164 = UINT32_MAX;
	volatile uint32_t t37 = UINT32_MAX;

    t37 = ((x161>(x162+x163))^x164);

    if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x169 = INT8_MIN;
	volatile int16_t x170 = 6;
	int32_t x171 = 593714;
	volatile int32_t x172 = INT32_MIN;

    t38 = ((x169>(x170+x171))^x172);

    if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x173 = UINT64_MAX;
	static int16_t x174 = INT16_MAX;
	uint16_t x175 = 0U;
	volatile uint16_t x176 = UINT16_MAX;
	int32_t t39 = 474;

    t39 = ((x173>(x174+x175))^x176);

    if (t39 != 65534) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x177 = 37;
	static volatile uint64_t x178 = UINT64_MAX;
	uint32_t x179 = UINT32_MAX;
	int32_t t40 = 114;

    t40 = ((x177>(x178+x179))^x180);

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x182 = -1LL;
	uint16_t x183 = 60U;
	int32_t x184 = -1;

    t41 = ((x181>(x182+x183))^x184);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x185 = INT16_MIN;
	static uint8_t x187 = UINT8_MAX;
	static uint64_t x188 = 7485477223LLU;
	uint64_t t42 = 685892LLU;

    t42 = ((x185>(x186+x187))^x188);

    if (t42 != 7485477223LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x189 = INT32_MIN;
	volatile uint32_t x190 = 192682U;
	uint8_t x191 = UINT8_MAX;
	static volatile int64_t x192 = INT64_MIN;
	int64_t t43 = -548732917519311043LL;

    t43 = ((x189>(x190+x191))^x192);

    if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x193 = -116208583876264LL;
	int64_t x194 = -15128009175782570LL;
	volatile uint64_t x195 = 450834276251879LLU;
	int16_t x196 = INT16_MIN;
	volatile int32_t t44 = 256721129;

    t44 = ((x193>(x194+x195))^x196);

    if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x198 = INT64_MIN;
	int64_t x199 = INT64_MAX;
	volatile int8_t x200 = 0;
	static volatile int32_t t45 = -92;

    t45 = ((x197>(x198+x199))^x200);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x201 = -2;
	uint32_t x203 = 518609216U;
	volatile int16_t x204 = -1;
	volatile int32_t t46 = 13546269;

    t46 = ((x201>(x202+x203))^x204);

    if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x206 = 149864U;
	int16_t x207 = INT16_MIN;
	uint16_t x208 = 2484U;
	static volatile int32_t t47 = -2633;

    t47 = ((x205>(x206+x207))^x208);

    if (t47 != 2485) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x209 = -1LL;
	uint8_t x210 = 1U;
	int8_t x211 = 1;
	uint64_t x212 = 1304855948756344LLU;

    t48 = ((x209>(x210+x211))^x212);

    if (t48 != 1304855948756344LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x213 = -1;
	uint8_t x214 = 24U;
	int64_t x215 = 1917212736860237LL;
	volatile uint16_t x216 = UINT16_MAX;
	volatile int32_t t49 = 224767;

    t49 = ((x213>(x214+x215))^x216);

    if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x218 = -9659LL;
	int16_t x219 = INT16_MIN;
	int64_t x220 = INT64_MIN;
	int64_t t50 = 24663902075434466LL;

    t50 = ((x217>(x218+x219))^x220);

    if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x221 = -1LL;
	static volatile int8_t x223 = -4;
	int64_t x224 = INT64_MIN;

    t51 = ((x221>(x222+x223))^x224);

    if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x225 = INT16_MAX;
	uint8_t x226 = UINT8_MAX;
	uint64_t x227 = 231255741313LLU;
	int8_t x228 = -1;
	volatile int32_t t52 = -14;

    t52 = ((x225>(x226+x227))^x228);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x230 = INT8_MIN;
	volatile int32_t x231 = 346178;
	volatile int32_t t53 = -67584;

    t53 = ((x229>(x230+x231))^x232);

    if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x233 = UINT16_MAX;
	int8_t x234 = INT8_MAX;
	uint16_t x235 = 25U;
	volatile int8_t x236 = INT8_MIN;
	int32_t t54 = 116904113;

    t54 = ((x233>(x234+x235))^x236);

    if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x237 = INT16_MAX;
	volatile int64_t x239 = -1LL;
	volatile int64_t x240 = INT64_MIN;
	int64_t t55 = INT64_MIN;

    t55 = ((x237>(x238+x239))^x240);

    if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x242 = INT16_MAX;
	uint32_t x244 = 387030346U;
	uint32_t t56 = 27624468U;

    t56 = ((x241>(x242+x243))^x244);

    if (t56 != 387030347U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x249 = -1;
	int32_t x250 = INT32_MIN;
	uint64_t x251 = 6LLU;
	int32_t t57 = -156168143;

    t57 = ((x249>(x250+x251))^x252);

    if (t57 != 32766) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x255 = UINT16_MAX;
	uint16_t x256 = 1U;
	volatile int32_t t58 = 1044647079;

    t58 = ((x253>(x254+x255))^x256);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x257 = 72;
	int64_t x259 = -1LL;
	uint8_t x260 = 1U;
	volatile int32_t t59 = 36111475;

    t59 = ((x257>(x258+x259))^x260);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x263 = INT16_MIN;
	volatile int64_t x264 = -1LL;
	int64_t t60 = 356765LL;

    t60 = ((x261>(x262+x263))^x264);

    if (t60 != -2LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x266 = -1;
	static int8_t x267 = INT8_MIN;

    t61 = ((x265>(x266+x267))^x268);

    if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int64_t x270 = INT64_MIN;
	static int32_t t62 = 689787;

    t62 = ((x269>(x270+x271))^x272);

    if (t62 != 126) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x273 = INT64_MIN;
	static int16_t x274 = -1;
	volatile uint64_t x275 = 262232199416LLU;
	static int16_t x276 = INT16_MIN;
	static int32_t t63 = -98;

    t63 = ((x273>(x274+x275))^x276);

    if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x277 = INT16_MIN;
	int32_t x278 = -447;
	int8_t x279 = -1;
	int32_t x280 = -1;
	volatile int32_t t64 = -83;

    t64 = ((x277>(x278+x279))^x280);

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x281 = -6487437LL;
	int32_t x282 = INT32_MIN;
	uint8_t x283 = UINT8_MAX;
	uint64_t x284 = UINT64_MAX;

    t65 = ((x281>(x282+x283))^x284);

    if (t65 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x287 = 9202776718498961331LLU;
	volatile int16_t x288 = INT16_MIN;
	volatile int32_t t66 = 37658384;

    t66 = ((x285>(x286+x287))^x288);

    if (t66 != -32767) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int8_t x290 = INT8_MIN;
	static int16_t x291 = INT16_MIN;
	int32_t t67 = -2368747;

    t67 = ((x289>(x290+x291))^x292);

    if (t67 != 2147483646) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x294 = 2468;
	uint64_t x295 = 55213078707111568LLU;
	static volatile uint16_t x296 = 212U;
	int32_t t68 = -11544;

    t68 = ((x293>(x294+x295))^x296);

    if (t68 != 212) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x301 = INT32_MIN;
	uint8_t x302 = UINT8_MAX;
	static uint16_t x303 = 1682U;
	uint16_t x304 = 9U;
	volatile int32_t t69 = -1;

    t69 = ((x301>(x302+x303))^x304);

    if (t69 != 9) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x305 = -1;
	int16_t x307 = INT16_MIN;
	int32_t t70 = -55;

    t70 = ((x305>(x306+x307))^x308);

    if (t70 != 7) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x313 = -11;
	static int8_t x314 = INT8_MIN;
	int16_t x315 = INT16_MIN;
	int8_t x316 = -1;
	volatile int32_t t71 = 269772599;

    t71 = ((x313>(x314+x315))^x316);

    if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x318 = 7044U;
	volatile int32_t t72 = 1;

    t72 = ((x317>(x318+x319))^x320);

    if (t72 != 2681) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x321 = 1471986LLU;
	int16_t x323 = INT16_MIN;
	static uint8_t x324 = 24U;
	volatile int32_t t73 = 3025010;

    t73 = ((x321>(x322+x323))^x324);

    if (t73 != 24) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x329 = 76LLU;
	static volatile uint32_t x330 = UINT32_MAX;
	int64_t x331 = INT64_MIN;
	int8_t x332 = -26;
	int32_t t74 = -48330519;

    t74 = ((x329>(x330+x331))^x332);

    if (t74 != -26) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x339 = 52;

    t75 = ((x337>(x338+x339))^x340);

    if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x341 = INT64_MIN;
	int32_t x342 = 1353073;
	int8_t x343 = INT8_MIN;
	uint16_t x344 = 18589U;
	volatile int32_t t76 = -174558094;

    t76 = ((x341>(x342+x343))^x344);

    if (t76 != 18589) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x345 = 29129011;
	uint32_t x347 = UINT32_MAX;
	volatile int64_t x348 = -6588870807LL;

    t77 = ((x345>(x346+x347))^x348);

    if (t77 != -6588870807LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x349 = INT64_MIN;
	int64_t x350 = INT64_MIN;
	volatile uint32_t x351 = 1358U;
	int32_t x352 = -1;
	int32_t t78 = 693553;

    t78 = ((x349>(x350+x351))^x352);

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x354 = -1;
	static volatile uint64_t x356 = 199917453943364LLU;
	volatile uint64_t t79 = 24678LLU;

    t79 = ((x353>(x354+x355))^x356);

    if (t79 != 199917453943364LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x359 = UINT64_MAX;
	int16_t x360 = -1;
	volatile int32_t t80 = -111;

    t80 = ((x357>(x358+x359))^x360);

    if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x373 = INT64_MAX;
	static int16_t x374 = INT16_MIN;
	volatile int8_t x375 = -2;
	static uint32_t x376 = 968257U;

    t81 = ((x373>(x374+x375))^x376);

    if (t81 != 968256U) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x377 = INT8_MIN;
	volatile int32_t t82 = INT32_MAX;

    t82 = ((x377>(x378+x379))^x380);

    if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x381 = 787U;
	volatile int16_t x383 = INT16_MIN;
	uint32_t t83 = 54U;

    t83 = ((x381>(x382+x383))^x384);

    if (t83 != 240469692U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x385 = UINT32_MAX;
	int8_t x386 = INT8_MIN;
	volatile uint64_t t84 = 5162510200006LLU;

    t84 = ((x385>(x386+x387))^x388);

    if (t84 != 893329751LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x389 = -7;
	uint8_t x390 = 0U;
	static int32_t x392 = -1;
	int32_t t85 = 11020045;

    t85 = ((x389>(x390+x391))^x392);

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x393 = INT16_MAX;
	int8_t x394 = 0;
	uint16_t x395 = 15U;

    t86 = ((x393>(x394+x395))^x396);

    if (t86 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int64_t x398 = 13426582LL;
	uint8_t x399 = 1U;
	int64_t x400 = INT64_MIN;

    t87 = ((x397>(x398+x399))^x400);

    if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x401 = INT8_MIN;
	int32_t x402 = 110160;
	int32_t x403 = -1;
	volatile int32_t t88 = -60;

    t88 = ((x401>(x402+x403))^x404);

    if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x405 = INT8_MAX;
	int8_t x406 = 1;
	static volatile uint32_t x408 = 14362U;
	uint32_t t89 = 67151U;

    t89 = ((x405>(x406+x407))^x408);

    if (t89 != 14362U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x413 = UINT16_MAX;
	int16_t x414 = INT16_MIN;
	int32_t x416 = -2;

    t90 = ((x413>(x414+x415))^x416);

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x418 = -1LL;
	int64_t x419 = 377446828423393604LL;
	int32_t t91 = 760735104;

    t91 = ((x417>(x418+x419))^x420);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x422 = UINT16_MAX;
	int16_t x423 = INT16_MIN;
	static int8_t x424 = INT8_MIN;
	int32_t t92 = 3446300;

    t92 = ((x421>(x422+x423))^x424);

    if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x425 = -1;
	int16_t x426 = INT16_MIN;
	int8_t x427 = 1;
	static volatile int8_t x428 = INT8_MIN;
	volatile int32_t t93 = -352;

    t93 = ((x425>(x426+x427))^x428);

    if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x430 = 99;
	volatile int64_t x431 = INT64_MIN;
	static int32_t t94 = 9214947;

    t94 = ((x429>(x430+x431))^x432);

    if (t94 != 126) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x433 = -3;
	int8_t x436 = 7;
	static int32_t t95 = -25932273;

    t95 = ((x433>(x434+x435))^x436);

    if (t95 != 6) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x442 = INT64_MAX;
	uint64_t x443 = 7LLU;
	uint8_t x444 = UINT8_MAX;
	static volatile int32_t t96 = -3;

    t96 = ((x441>(x442+x443))^x444);

    if (t96 != 254) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x445 = 524048U;
	static uint64_t x446 = 3321317364714011894LLU;
	int64_t x448 = -1LL;
	volatile int64_t t97 = -3408603595318273967LL;

    t97 = ((x445>(x446+x447))^x448);

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x449 = INT32_MAX;
	uint16_t x450 = 0U;
	int8_t x451 = 0;
	static volatile int32_t t98 = 40352808;

    t98 = ((x449>(x450+x451))^x452);

    if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x453 = INT16_MIN;
	static volatile int16_t x454 = INT16_MIN;
	uint8_t x455 = UINT8_MAX;
	volatile int32_t t99 = 22;

    t99 = ((x453>(x454+x455))^x456);

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x457 = UINT16_MAX;
	int16_t x458 = INT16_MIN;
	int32_t x459 = 113840332;
	int32_t x460 = INT32_MAX;

    t100 = ((x457>(x458+x459))^x460);

    if (t100 != INT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x461 = INT32_MIN;
	int64_t x462 = -1384191087841LL;
	uint16_t x463 = 3U;
	int32_t x464 = -156;
	volatile int32_t t101 = 22;

    t101 = ((x461>(x462+x463))^x464);

    if (t101 != -155) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x465 = -1;
	volatile int8_t x467 = 3;

    t102 = ((x465>(x466+x467))^x468);

    if (t102 != 65535) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x477 = INT32_MIN;
	volatile int32_t x478 = INT32_MIN;
	int8_t x480 = -1;
	int32_t t103 = 42;

    t103 = ((x477>(x478+x479))^x480);

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int32_t x482 = 206;
	static volatile uint32_t x483 = 23745U;
	int16_t x484 = -1;
	static volatile int32_t t104 = -50899;

    t104 = ((x481>(x482+x483))^x484);

    if (t104 != -2) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x485 = -1;
	volatile uint16_t x486 = UINT16_MAX;
	uint32_t t105 = 1047796U;

    t105 = ((x485>(x486+x487))^x488);

    if (t105 != 134391U) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x489 = INT64_MAX;
	uint32_t x490 = UINT32_MAX;
	uint16_t x491 = 2459U;
	int32_t x492 = -1;
	volatile int32_t t106 = 2035;

    t106 = ((x489>(x490+x491))^x492);

    if (t106 != -2) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x493 = 3528LLU;
	int32_t x495 = -703458684;
	int16_t x496 = INT16_MIN;
	static int32_t t107 = 1943694;

    t107 = ((x493>(x494+x495))^x496);

    if (t107 != -32768) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x497 = INT8_MIN;
	static uint64_t x498 = 568LLU;
	volatile int64_t x500 = INT64_MAX;
	static int64_t t108 = 14393934406680627LL;

    t108 = ((x497>(x498+x499))^x500);

    if (t108 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x501 = -5583;
	volatile int8_t x502 = INT8_MIN;
	volatile int8_t x503 = INT8_MIN;

    t109 = ((x501>(x502+x503))^x504);

    if (t109 != 13606) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x505 = -1;
	int32_t x508 = INT32_MIN;
	int32_t t110 = -60;

    t110 = ((x505>(x506+x507))^x508);

    if (t110 != -2147483647) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x509 = -75114087394431508LL;
	static int8_t x510 = INT8_MIN;
	volatile uint8_t x511 = UINT8_MAX;
	volatile uint16_t x512 = 28174U;
	static volatile int32_t t111 = 42095;

    t111 = ((x509>(x510+x511))^x512);

    if (t111 != 28174) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x513 = 1346;
	int16_t x515 = -1;
	int32_t t112 = -4;

    t112 = ((x513>(x514+x515))^x516);

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x517 = 27352243757238LLU;
	volatile uint16_t x518 = 1882U;
	volatile int64_t x519 = INT64_MIN;
	int8_t x520 = -1;
	volatile int32_t t113 = -296524297;

    t113 = ((x517>(x518+x519))^x520);

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x521 = INT32_MIN;
	static int64_t x522 = -54222LL;
	static int16_t x523 = 10;
	int64_t x524 = -14496368846298485LL;
	int64_t t114 = -1125767388031LL;

    t114 = ((x521>(x522+x523))^x524);

    if (t114 != -14496368846298485LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x525 = UINT32_MAX;
	int32_t x526 = INT32_MIN;
	static uint32_t x527 = UINT32_MAX;
	static volatile uint8_t x528 = UINT8_MAX;
	volatile int32_t t115 = 135;

    t115 = ((x525>(x526+x527))^x528);

    if (t115 != 254) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int64_t x529 = 152379495906301982LL;
	int8_t x530 = 1;
	volatile uint16_t x531 = 209U;

    t116 = ((x529>(x530+x531))^x532);

    if (t116 != -2) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x537 = INT64_MIN;
	uint8_t x538 = UINT8_MAX;
	int64_t x539 = -1LL;
	int64_t x540 = INT64_MAX;
	volatile int64_t t117 = INT64_MAX;

    t117 = ((x537>(x538+x539))^x540);

    if (t117 != INT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x541 = 26176U;
	int32_t x542 = -1;
	int32_t x544 = -1;
	static int32_t t118 = -15;

    t118 = ((x541>(x542+x543))^x544);

    if (t118 != -2) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x549 = -1;
	uint32_t x550 = 57389U;
	static int8_t x551 = 1;
	int8_t x552 = INT8_MAX;
	int32_t t119 = -204;

    t119 = ((x549>(x550+x551))^x552);

    if (t119 != 126) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x553 = INT64_MIN;
	uint16_t x555 = 4333U;
	volatile uint64_t x556 = 2LLU;

    t120 = ((x553>(x554+x555))^x556);

    if (t120 != 2LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x559 = 866U;
	static uint8_t x560 = 22U;
	volatile int32_t t121 = -27441;

    t121 = ((x557>(x558+x559))^x560);

    if (t121 != 22) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x561 = -413;
	int16_t x562 = -1;
	uint64_t x564 = 602040874LLU;
	volatile uint64_t t122 = 31070917005LLU;

    t122 = ((x561>(x562+x563))^x564);

    if (t122 != 602040874LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x565 = -1;
	volatile int8_t x566 = INT8_MIN;
	uint32_t x567 = 127202U;
	static int64_t x568 = -1LL;
	int64_t t123 = 85LL;

    t123 = ((x565>(x566+x567))^x568);

    if (t123 != -2LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x570 = 36935;
	volatile int32_t x571 = 997981;
	int16_t x572 = -1;

    t124 = ((x569>(x570+x571))^x572);

    if (t124 != -2) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x573 = INT64_MAX;
	int16_t x575 = INT16_MAX;
	int8_t x576 = -44;
	static int32_t t125 = -1914232;

    t125 = ((x573>(x574+x575))^x576);

    if (t125 != -43) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x577 = UINT64_MAX;
	static int16_t x578 = INT16_MIN;
	int64_t x579 = INT64_MAX;
	uint8_t x580 = 12U;
	int32_t t126 = -45592058;

    t126 = ((x577>(x578+x579))^x580);

    if (t126 != 13) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x581 = -4871;
	int32_t x582 = 51678552;
	uint64_t x583 = UINT64_MAX;
	uint16_t x584 = 99U;

    t127 = ((x581>(x582+x583))^x584);

    if (t127 != 98) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x585 = INT64_MIN;
	static int32_t x586 = INT32_MAX;
	uint16_t x588 = 289U;
	volatile int32_t t128 = -3;

    t128 = ((x585>(x586+x587))^x588);

    if (t128 != 289) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x589 = 3;
	uint64_t x590 = 498779906550LLU;
	volatile uint64_t x591 = 7513654973LLU;
	static int64_t x592 = INT64_MIN;
	int64_t t129 = INT64_MIN;

    t129 = ((x589>(x590+x591))^x592);

    if (t129 != INT64_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x593 = -264687LL;
	volatile int64_t x594 = -1LL;
	uint64_t x595 = 2068LLU;
	int16_t x596 = 509;
	static int32_t t130 = -257579654;

    t130 = ((x593>(x594+x595))^x596);

    if (t130 != 508) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x597 = INT64_MIN;
	uint16_t x598 = 14U;
	volatile int16_t x599 = -13;
	volatile uint8_t x600 = 4U;
	int32_t t131 = -1;

    t131 = ((x597>(x598+x599))^x600);

    if (t131 != 4) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint8_t x601 = 0U;
	int64_t x604 = 16658653036599LL;
	static int64_t t132 = 4985335LL;

    t132 = ((x601>(x602+x603))^x604);

    if (t132 != 16658653036598LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x605 = -936;
	int8_t x606 = -1;
	volatile uint32_t x607 = UINT32_MAX;
	uint32_t x608 = UINT32_MAX;
	static volatile uint32_t t133 = UINT32_MAX;

    t133 = ((x605>(x606+x607))^x608);

    if (t133 != UINT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x609 = 1;
	volatile uint16_t x610 = UINT16_MAX;
	uint8_t x611 = UINT8_MAX;

    t134 = ((x609>(x610+x611))^x612);

    if (t134 != 2732LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x613 = UINT32_MAX;
	uint32_t x615 = 60U;
	int8_t x616 = INT8_MIN;
	static volatile int32_t t135 = -6873237;

    t135 = ((x613>(x614+x615))^x616);

    if (t135 != -127) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x617 = -174152;
	volatile int8_t x618 = INT8_MAX;
	int16_t x619 = INT16_MIN;
	uint8_t x620 = 84U;
	static int32_t t136 = 94640543;

    t136 = ((x617>(x618+x619))^x620);

    if (t136 != 84) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x621 = 5LL;
	static int64_t x622 = 912523487LL;
	int32_t x624 = -195;

    t137 = ((x621>(x622+x623))^x624);

    if (t137 != -195) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x634 = INT8_MAX;
	int64_t x635 = -105953825282LL;
	int32_t t138 = 229514610;

    t138 = ((x633>(x634+x635))^x636);

    if (t138 != -2) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x641 = 134;
	static int16_t x642 = 15349;
	volatile uint16_t x643 = 40U;
	int64_t x644 = INT64_MIN;
	volatile int64_t t139 = INT64_MIN;

    t139 = ((x641>(x642+x643))^x644);

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x645 = -38;
	static volatile uint64_t x646 = 310294527492448319LLU;
	uint32_t x648 = UINT32_MAX;
	static volatile uint32_t t140 = 60U;

    t140 = ((x645>(x646+x647))^x648);

    if (t140 != 4294967294U) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x649 = 57120088000111LL;
	uint16_t x650 = UINT16_MAX;
	static uint32_t x652 = 1105611U;
	volatile uint32_t t141 = 542467U;

    t141 = ((x649>(x650+x651))^x652);

    if (t141 != 1105610U) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x653 = INT8_MAX;
	int64_t x654 = -1LL;
	int8_t x655 = INT8_MAX;
	volatile int64_t t142 = 37167791458973LL;

    t142 = ((x653>(x654+x655))^x656);

    if (t142 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x657 = -1;
	int32_t x658 = INT32_MAX;
	volatile uint8_t x659 = 0U;
	int64_t x660 = INT64_MIN;
	static int64_t t143 = INT64_MIN;

    t143 = ((x657>(x658+x659))^x660);

    if (t143 != INT64_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x661 = 2U;
	static int16_t x662 = INT16_MIN;
	int32_t x663 = -1;
	volatile uint64_t t144 = 1984LLU;

    t144 = ((x661>(x662+x663))^x664);

    if (t144 != 85078583749025LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x665 = 1543U;
	int32_t x668 = INT32_MAX;
	volatile int32_t t145 = INT32_MAX;

    t145 = ((x665>(x666+x667))^x668);

    if (t145 != INT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x669 = UINT32_MAX;
	static volatile uint64_t x670 = UINT64_MAX;
	uint32_t x671 = 39319217U;
	static int32_t x672 = INT32_MIN;
	static volatile int32_t t146 = 3;

    t146 = ((x669>(x670+x671))^x672);

    if (t146 != -2147483647) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x677 = 244333842205LLU;
	uint8_t x678 = 56U;
	volatile int8_t x679 = INT8_MIN;
	int32_t t147 = 11461;

    t147 = ((x677>(x678+x679))^x680);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x682 = INT32_MIN;
	uint8_t x683 = 122U;
	int8_t x684 = -1;
	volatile int32_t t148 = 15;

    t148 = ((x681>(x682+x683))^x684);

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x685 = -1;
	int8_t x686 = INT8_MIN;
	static volatile int16_t x687 = 3;
	volatile int64_t t149 = -9LL;

    t149 = ((x685>(x686+x687))^x688);

    if (t149 != -2LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x689 = -1;
	static int16_t x690 = INT16_MAX;
	uint8_t x691 = 30U;
	int64_t x692 = 85LL;
	int64_t t150 = 69928009922LL;

    t150 = ((x689>(x690+x691))^x692);

    if (t150 != 85LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x693 = 77462837LLU;
	volatile int32_t x696 = INT32_MAX;
	int32_t t151 = INT32_MAX;

    t151 = ((x693>(x694+x695))^x696);

    if (t151 != INT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x697 = 11969909401205784LLU;
	volatile uint8_t x698 = 8U;
	static uint8_t x699 = 105U;
	uint32_t x700 = UINT32_MAX;
	volatile uint32_t t152 = 0U;

    t152 = ((x697>(x698+x699))^x700);

    if (t152 != 4294967294U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x701 = UINT8_MAX;
	volatile int16_t x702 = 1603;
	volatile int8_t x703 = -1;
	int8_t x704 = -22;
	int32_t t153 = 7;

    t153 = ((x701>(x702+x703))^x704);

    if (t153 != -22) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x705 = INT16_MIN;
	int32_t x706 = -12698;
	static volatile int8_t x707 = INT8_MAX;
	int32_t t154 = 543904277;

    t154 = ((x705>(x706+x707))^x708);

    if (t154 != 127) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x713 = -1;
	int16_t x715 = INT16_MIN;
	static int8_t x716 = -15;
	volatile int32_t t155 = 322429;

    t155 = ((x713>(x714+x715))^x716);

    if (t155 != -16) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x718 = 16906U;
	int8_t x719 = INT8_MIN;
	volatile uint32_t x720 = UINT32_MAX;

    t156 = ((x717>(x718+x719))^x720);

    if (t156 != 4294967294U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x721 = 1510U;
	int16_t x723 = 144;
	int16_t x724 = 0;
	int32_t t157 = -37;

    t157 = ((x721>(x722+x723))^x724);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x729 = 437U;
	int64_t x730 = INT64_MIN;
	uint16_t x731 = 198U;
	static int8_t x732 = -1;
	static volatile int32_t t158 = -95908;

    t158 = ((x729>(x730+x731))^x732);

    if (t158 != -2) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x735 = UINT16_MAX;
	uint32_t x736 = 20598746U;
	uint32_t t159 = 297U;

    t159 = ((x733>(x734+x735))^x736);

    if (t159 != 20598747U) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x738 = INT8_MIN;
	uint32_t x739 = 236U;
	volatile int8_t x740 = INT8_MIN;
	volatile int32_t t160 = -22;

    t160 = ((x737>(x738+x739))^x740);

    if (t160 != -127) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x741 = 3891U;
	int16_t x742 = -1827;
	uint64_t x743 = UINT64_MAX;
	uint16_t x744 = 0U;
	volatile int32_t t161 = 101617848;

    t161 = ((x741>(x742+x743))^x744);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x749 = 23406507619639536LL;
	uint32_t x750 = UINT32_MAX;
	int16_t x751 = INT16_MAX;
	int32_t x752 = INT32_MAX;
	volatile int32_t t162 = -114871;

    t162 = ((x749>(x750+x751))^x752);

    if (t162 != 2147483646) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x753 = INT8_MIN;
	static int32_t x754 = 43;
	uint8_t x755 = UINT8_MAX;
	int16_t x756 = INT16_MIN;
	int32_t t163 = -5;

    t163 = ((x753>(x754+x755))^x756);

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x757 = 16U;
	int16_t x758 = 37;
	uint16_t x759 = UINT16_MAX;
	static int64_t x760 = -1LL;

    t164 = ((x757>(x758+x759))^x760);

    if (t164 != -1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x761 = INT32_MAX;
	static volatile int16_t x763 = INT16_MIN;
	int64_t x764 = INT64_MIN;
	volatile int64_t t165 = -3630731LL;

    t165 = ((x761>(x762+x763))^x764);

    if (t165 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x765 = INT64_MIN;
	int8_t x767 = 0;
	int64_t x768 = INT64_MIN;
	volatile int64_t t166 = INT64_MIN;

    t166 = ((x765>(x766+x767))^x768);

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x778 = INT8_MIN;
	static int8_t x779 = -10;
	int64_t x780 = -139LL;
	volatile int64_t t167 = -4LL;

    t167 = ((x777>(x778+x779))^x780);

    if (t167 != -139LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x781 = INT32_MIN;
	static int16_t x783 = INT16_MIN;
	uint16_t x784 = UINT16_MAX;
	int32_t t168 = 12067;

    t168 = ((x781>(x782+x783))^x784);

    if (t168 != 65535) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x793 = INT64_MIN;
	uint16_t x794 = 21U;
	int8_t x795 = -1;
	static int8_t x796 = INT8_MIN;
	int32_t t169 = 27;

    t169 = ((x793>(x794+x795))^x796);

    if (t169 != -128) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x798 = INT64_MAX;
	int8_t x799 = -1;
	int8_t x800 = INT8_MIN;
	int32_t t170 = 124;

    t170 = ((x797>(x798+x799))^x800);

    if (t170 != -128) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x801 = INT16_MIN;
	volatile int64_t x802 = INT64_MIN;
	uint32_t x803 = 625933354U;
	int8_t x804 = INT8_MIN;
	volatile int32_t t171 = 0;

    t171 = ((x801>(x802+x803))^x804);

    if (t171 != -127) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x805 = INT64_MAX;
	uint16_t x807 = 18U;
	static volatile int8_t x808 = -1;
	static volatile int32_t t172 = -1707;

    t172 = ((x805>(x806+x807))^x808);

    if (t172 != -2) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x814 = INT64_MIN;
	static uint64_t x815 = 40457553864295LLU;
	uint32_t x816 = 68128U;

    t173 = ((x813>(x814+x815))^x816);

    if (t173 != 68128U) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x818 = 4U;
	static int8_t x819 = INT8_MIN;
	int64_t x820 = INT64_MAX;
	int64_t t174 = -136280325LL;

    t174 = ((x817>(x818+x819))^x820);

    if (t174 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x821 = 111U;
	int64_t x823 = INT64_MIN;
	static int32_t x824 = INT32_MIN;
	int32_t t175 = INT32_MIN;

    t175 = ((x821>(x822+x823))^x824);

    if (t175 != INT32_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x825 = -187210829LL;
	int16_t x826 = -1;
	int8_t x827 = 1;
	static int64_t x828 = INT64_MIN;

    t176 = ((x825>(x826+x827))^x828);

    if (t176 != INT64_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x829 = -1LL;
	int16_t x830 = INT16_MIN;
	int16_t x831 = INT16_MIN;
	static volatile int16_t x832 = INT16_MAX;
	static int32_t t177 = 65395;

    t177 = ((x829>(x830+x831))^x832);

    if (t177 != 32766) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x833 = INT16_MIN;
	volatile int16_t x834 = INT16_MIN;
	int64_t x835 = -29867532LL;
	int32_t t178 = 52950651;

    t178 = ((x833>(x834+x835))^x836);

    if (t178 != 254) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x842 = UINT8_MAX;
	int8_t x844 = 11;
	int32_t t179 = -578287;

    t179 = ((x841>(x842+x843))^x844);

    if (t179 != 11) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x845 = 19177852967051LLU;
	static volatile uint32_t x846 = UINT32_MAX;
	static volatile int8_t x848 = 4;

    t180 = ((x845>(x846+x847))^x848);

    if (t180 != 5) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x853 = 84;
	volatile int64_t x854 = -11650LL;
	static int8_t x855 = INT8_MIN;
	uint8_t x856 = 29U;
	static int32_t t181 = 298056965;

    t181 = ((x853>(x854+x855))^x856);

    if (t181 != 28) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x857 = -10;
	static uint8_t x858 = 59U;
	int8_t x859 = INT8_MIN;
	int32_t x860 = INT32_MAX;
	int32_t t182 = 1777;

    t182 = ((x857>(x858+x859))^x860);

    if (t182 != 2147483646) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x861 = INT16_MIN;
	volatile int64_t x862 = INT64_MAX;
	volatile uint16_t x864 = 500U;
	static int32_t t183 = -15;

    t183 = ((x861>(x862+x863))^x864);

    if (t183 != 500) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x865 = 5698LL;
	volatile uint32_t x867 = UINT32_MAX;
	uint8_t x868 = 0U;

    t184 = ((x865>(x866+x867))^x868);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x870 = INT32_MAX;
	uint8_t x871 = 0U;

    t185 = ((x869>(x870+x871))^x872);

    if (t185 != 6) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x874 = INT8_MIN;
	static uint32_t x875 = 13U;
	static int16_t x876 = -1;
	int32_t t186 = 110577;

    t186 = ((x873>(x874+x875))^x876);

    if (t186 != -2) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x877 = -1;
	static volatile int64_t x879 = 16LL;
	uint8_t x880 = 1U;

    t187 = ((x877>(x878+x879))^x880);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x881 = -2;
	static int8_t x884 = -1;
	int32_t t188 = -56837;

    t188 = ((x881>(x882+x883))^x884);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x886 = UINT64_MAX;
	static int8_t x887 = 1;
	uint32_t x888 = UINT32_MAX;
	static volatile uint32_t t189 = 1803958U;

    t189 = ((x885>(x886+x887))^x888);

    if (t189 != 4294967294U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x889 = INT16_MIN;
	int16_t x890 = 106;
	int8_t x891 = -1;
	static int32_t t190 = -42993685;

    t190 = ((x889>(x890+x891))^x892);

    if (t190 != -128) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x895 = UINT8_MAX;
	uint64_t x896 = UINT64_MAX;
	static uint64_t t191 = 70770795834308LLU;

    t191 = ((x893>(x894+x895))^x896);

    if (t191 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x897 = INT16_MAX;
	int64_t x898 = INT64_MAX;
	volatile int64_t t192 = -3986124537350584499LL;

    t192 = ((x897>(x898+x899))^x900);

    if (t192 != -30965988084LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x901 = INT32_MIN;
	int16_t x902 = INT16_MIN;
	uint16_t x903 = 13U;
	uint32_t x904 = UINT32_MAX;
	static volatile uint32_t t193 = UINT32_MAX;

    t193 = ((x901>(x902+x903))^x904);

    if (t193 != UINT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x909 = 0U;
	static int16_t x910 = INT16_MIN;
	int32_t x911 = -1;
	static uint8_t x912 = 4U;
	volatile int32_t t194 = 14;

    t194 = ((x909>(x910+x911))^x912);

    if (t194 != 5) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x913 = INT64_MIN;
	volatile int16_t x914 = 3204;
	int64_t x916 = 147LL;

    t195 = ((x913>(x914+x915))^x916);

    if (t195 != 147LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x917 = INT8_MAX;
	int16_t x918 = 43;
	static int64_t x919 = 188769393547237572LL;
	volatile uint32_t t196 = 773191U;

    t196 = ((x917>(x918+x919))^x920);

    if (t196 != 1653043U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x921 = -1;
	volatile int16_t x922 = INT16_MIN;
	static int16_t x923 = -6502;
	static int16_t x924 = -408;

    t197 = ((x921>(x922+x923))^x924);

    if (t197 != -407) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x925 = -1LL;
	int32_t x926 = 12109735;
	uint32_t x927 = UINT32_MAX;
	uint64_t x928 = 2215049855459791766LLU;
	volatile uint64_t t198 = 26253800457773LLU;

    t198 = ((x925>(x926+x927))^x928);

    if (t198 != 2215049855459791766LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x933 = INT8_MIN;
	uint32_t x934 = 309U;
	int16_t x935 = -50;
	static uint32_t x936 = 4U;
	uint32_t t199 = 58934079U;

    t199 = ((x933>(x934+x935))^x936);

    if (t199 != 5U) { NG(); } else { ; }
	
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


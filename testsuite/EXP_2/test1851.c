
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

uint8_t x5 = UINT8_MAX;
int32_t x8 = INT32_MIN;
uint64_t x11 = 388681LLU;
volatile uint32_t t2 = 9U;
static volatile uint8_t x13 = UINT8_MAX;
uint64_t x14 = 138850013536128544LLU;
static int8_t x16 = 0;
int16_t x18 = INT16_MIN;
int64_t t4 = INT64_MAX;
uint32_t x24 = UINT32_MAX;
int32_t x25 = INT32_MIN;
int64_t x28 = -10834787505LL;
int8_t x32 = INT8_MIN;
int32_t t8 = 190717;
uint64_t x42 = 12LLU;
int8_t x43 = INT8_MIN;
int16_t x45 = INT16_MAX;
volatile int32_t x60 = INT32_MIN;
uint32_t x69 = 0U;
static int16_t x71 = INT16_MIN;
int64_t x80 = -1547063547635LL;
uint64_t x82 = 7LLU;
uint8_t x83 = UINT8_MAX;
int8_t x84 = 7;
int64_t x108 = 35823073322225903LL;
static uint64_t x114 = UINT64_MAX;
static volatile int64_t x116 = INT64_MIN;
uint64_t t29 = 26223827LLU;
uint64_t x123 = 2LLU;
int32_t x125 = INT32_MAX;
int32_t x127 = INT32_MIN;
int64_t x131 = -1LL;
volatile uint8_t x132 = 71U;
uint8_t x133 = 1U;
int16_t x134 = INT16_MAX;
static volatile int16_t x140 = INT16_MIN;
int64_t x141 = INT64_MIN;
uint64_t x142 = 1463LLU;
int32_t x144 = INT32_MIN;
uint32_t x150 = 1470U;
int64_t x155 = INT64_MIN;
volatile int32_t t38 = 210891228;
static int32_t x160 = INT32_MIN;
int32_t t42 = 6;
int32_t x181 = INT32_MAX;
int64_t x182 = -1947675056LL;
volatile uint32_t t45 = 2298068U;
int16_t x185 = -1;
uint16_t x196 = 13438U;
volatile int64_t x198 = 16953969395LL;
int32_t x201 = 15607917;
uint64_t x203 = UINT64_MAX;
uint8_t x205 = 21U;
int32_t t51 = 52;
volatile int16_t x212 = -1;
uint8_t x215 = UINT8_MAX;
int32_t t53 = -176737;
int64_t x218 = INT64_MIN;
int16_t x220 = -618;
volatile int32_t x224 = INT32_MIN;
static int16_t x232 = 3836;
int16_t x234 = INT16_MIN;
uint16_t x244 = 490U;
volatile int32_t t60 = -397471510;
static int8_t x249 = -2;
int16_t x251 = -12683;
static int16_t x258 = 4;
int8_t x265 = INT8_MIN;
int64_t x266 = -371865084966880LL;
volatile uint16_t x267 = 242U;
static int16_t x270 = -1;
uint16_t x274 = 887U;
static volatile int64_t x287 = -1LL;
uint16_t x288 = UINT16_MAX;
uint64_t x289 = UINT64_MAX;
uint32_t x292 = 1U;
uint32_t x293 = 10923U;
static uint8_t x294 = 20U;
uint64_t x302 = 923062485968017LLU;
uint16_t x303 = 48U;
int8_t x304 = INT8_MIN;
int64_t x306 = 1LL;
int16_t x310 = INT16_MIN;
uint64_t x315 = 3276292592814198LLU;
int32_t x319 = INT32_MIN;
int64_t x323 = INT64_MAX;
volatile uint32_t x329 = UINT32_MAX;
int64_t x336 = 760044LL;
static int16_t x342 = 1;
static uint32_t x343 = 29381U;
volatile int32_t t86 = -870;
static int64_t x358 = INT64_MIN;
static int64_t x359 = INT64_MIN;
volatile uint32_t t89 = UINT32_MAX;
int32_t x365 = -1;
static uint64_t x376 = 12353200952LLU;
volatile int32_t x377 = INT32_MAX;
int32_t x380 = -1;
volatile int8_t x382 = 15;
int64_t x388 = -1LL;
uint32_t x389 = 34938U;
int64_t x390 = -1LL;
int64_t x406 = -78414443LL;
int32_t x407 = -2046984;
int16_t x409 = -1;
static volatile int32_t x411 = -1;
int32_t t102 = -9562;
uint16_t x424 = 175U;
int32_t t105 = 193244;
uint32_t x431 = UINT32_MAX;
volatile int8_t x434 = 0;
int64_t t108 = INT64_MIN;
int64_t x441 = -1LL;
static int32_t x444 = -1;
int8_t x450 = 1;
int8_t x451 = INT8_MIN;
volatile int32_t t112 = 4143;
int16_t x456 = INT16_MIN;
int8_t x457 = 39;
static int8_t x459 = INT8_MIN;
int32_t x463 = INT32_MIN;
static int32_t x465 = -1;
static volatile uint8_t x467 = 35U;
int32_t x474 = -1;
volatile int32_t t119 = 19;
static uint8_t x481 = 4U;
int8_t x493 = INT8_MIN;
static uint64_t x497 = 7LLU;
static int64_t x498 = INT64_MIN;
volatile int64_t x506 = INT64_MIN;
static int16_t x515 = 24;
uint16_t x524 = 155U;
uint32_t x525 = 35763U;
uint16_t x526 = 36U;
int32_t x531 = -452;
int64_t x536 = INT64_MAX;
static int16_t x538 = INT16_MIN;
int8_t x540 = -1;
volatile int32_t x546 = INT32_MIN;
int64_t x558 = INT64_MIN;
int64_t x563 = -1LL;
int16_t x566 = INT16_MIN;
static int32_t t142 = -4583670;
static int32_t x582 = 1;
int64_t x584 = INT64_MAX;
int64_t x585 = -1LL;
volatile int64_t x589 = INT64_MIN;
uint32_t t147 = 4167760U;
static volatile int8_t x604 = 29;
uint16_t x619 = UINT16_MAX;
int64_t x627 = -1LL;
int32_t x628 = INT32_MAX;
int16_t x636 = INT16_MIN;
static volatile int32_t t158 = -98495929;
volatile int32_t x639 = -1884;
int8_t x642 = -1;
static volatile uint64_t t163 = UINT64_MAX;
volatile uint16_t x665 = UINT16_MAX;
static int32_t x670 = 1;
int64_t x671 = -359690202LL;
int32_t x676 = 20134;
int64_t t169 = 4003672048LL;
int64_t x685 = -1LL;
static volatile int8_t x706 = INT8_MAX;
uint16_t x714 = UINT16_MAX;
uint32_t x717 = 235575332U;
uint32_t x719 = 63U;
volatile int32_t t179 = 515;
static volatile int32_t t180 = 158;
static int16_t x728 = 20;
volatile int8_t x729 = INT8_MIN;
int8_t x733 = 1;
volatile int64_t x737 = 21970086141269497LL;
volatile uint64_t x742 = 30582230681343495LLU;
uint8_t x746 = 46U;
uint16_t x753 = 6U;
int8_t x761 = INT8_MAX;
static volatile int32_t x768 = INT32_MIN;
volatile int32_t t191 = INT32_MIN;
int8_t x770 = -1;
volatile int64_t x778 = INT64_MAX;
volatile int32_t t194 = 2128;
uint8_t x781 = UINT8_MAX;
volatile int16_t x783 = INT16_MIN;
int16_t x798 = 2346;
static int64_t x799 = INT64_MAX;


void f0(void) {
    	static uint32_t x1 = UINT32_MAX;
	static int8_t x2 = -1;
	int8_t x3 = INT8_MIN;
	static int64_t x4 = INT64_MIN;
	static volatile int64_t t0 = INT64_MIN;

    t0 = ((x1!=(x2<=x3))*x4);

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = UINT16_MAX;
	static volatile int32_t x7 = -1;
	int32_t t1 = INT32_MIN;

    t1 = ((x5!=(x6<=x7))*x8);

    if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x9 = UINT32_MAX;
	int8_t x10 = 0;
	uint32_t x12 = 6155U;

    t2 = ((x9!=(x10<=x11))*x12);

    if (t2 != 6155U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x15 = -28;
	volatile int32_t t3 = 36;

    t3 = ((x13!=(x14<=x15))*x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	int64_t x19 = INT64_MAX;
	int64_t x20 = INT64_MAX;

    t4 = ((x17!=(x18<=x19))*x20);

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = -1;
	int32_t x22 = 8;
	volatile uint32_t x23 = 64881257U;
	static volatile uint32_t t5 = UINT32_MAX;

    t5 = ((x21!=(x22<=x23))*x24);

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x26 = 0U;
	static int16_t x27 = -1;
	volatile int64_t t6 = -2133283004773LL;

    t6 = ((x25!=(x26<=x27))*x28);

    if (t6 != -10834787505LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 1U;
	int32_t x30 = 441768353;
	volatile int64_t x31 = INT64_MAX;
	volatile int32_t t7 = -513465192;

    t7 = ((x29!=(x30<=x31))*x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 17U;
	static uint8_t x34 = 13U;
	int8_t x35 = -1;
	int16_t x36 = INT16_MAX;

    t8 = ((x33!=(x34<=x35))*x36);

    if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	uint16_t x38 = UINT16_MAX;
	static int32_t x39 = -230600321;
	uint32_t x40 = UINT32_MAX;
	volatile uint32_t t9 = UINT32_MAX;

    t9 = ((x37!=(x38<=x39))*x40);

    if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	int16_t x44 = INT16_MIN;
	static int32_t t10 = -8987;

    t10 = ((x41!=(x42<=x43))*x44);

    if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x46 = -1;
	int64_t x47 = INT64_MIN;
	int16_t x48 = 944;
	volatile int32_t t11 = 53523;

    t11 = ((x45!=(x46<=x47))*x48);

    if (t11 != 944) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -1;
	int16_t x50 = INT16_MIN;
	int64_t x51 = 27490759079397650LL;
	int64_t x52 = INT64_MIN;
	static int64_t t12 = INT64_MIN;

    t12 = ((x49!=(x50<=x51))*x52);

    if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -1;
	int8_t x54 = -16;
	uint32_t x55 = UINT32_MAX;
	static uint16_t x56 = UINT16_MAX;
	int32_t t13 = -239434109;

    t13 = ((x53!=(x54<=x55))*x56);

    if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x57 = INT32_MIN;
	static int16_t x58 = INT16_MAX;
	uint8_t x59 = 11U;
	int32_t t14 = INT32_MIN;

    t14 = ((x57!=(x58<=x59))*x60);

    if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	int64_t x62 = INT64_MIN;
	int32_t x63 = -97391;
	int16_t x64 = 0;
	int32_t t15 = -36002449;

    t15 = ((x61!=(x62<=x63))*x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -1;
	static int16_t x66 = -1;
	volatile int64_t x67 = INT64_MAX;
	volatile int16_t x68 = INT16_MAX;
	static volatile int32_t t16 = -1;

    t16 = ((x65!=(x66<=x67))*x68);

    if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x70 = -1LL;
	int32_t x72 = INT32_MIN;
	static volatile int32_t t17 = 25897672;

    t17 = ((x69!=(x70<=x71))*x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	volatile int8_t x74 = -39;
	int64_t x75 = -5726LL;
	int32_t x76 = 4223;
	static int32_t t18 = 37480;

    t18 = ((x73!=(x74<=x75))*x76);

    if (t18 != 4223) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 8LLU;
	static int8_t x78 = INT8_MIN;
	uint32_t x79 = 1446509U;
	int64_t t19 = 68230621135537LL;

    t19 = ((x77!=(x78<=x79))*x80);

    if (t19 != -1547063547635LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	volatile int32_t t20 = -65007;

    t20 = ((x81!=(x82<=x83))*x84);

    if (t20 != 7) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int64_t x85 = -1LL;
	volatile uint32_t x86 = 0U;
	uint64_t x87 = UINT64_MAX;
	int8_t x88 = INT8_MAX;
	volatile int32_t t21 = 70613241;

    t21 = ((x85!=(x86<=x87))*x88);

    if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 19U;
	static uint64_t x90 = 145659388407832484LLU;
	uint8_t x91 = 2U;
	volatile int32_t x92 = INT32_MIN;
	int32_t t22 = INT32_MIN;

    t22 = ((x89!=(x90<=x91))*x92);

    if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = -111;
	uint64_t x94 = 990576564LLU;
	int32_t x95 = INT32_MAX;
	volatile int16_t x96 = -2;
	volatile int32_t t23 = 11;

    t23 = ((x93!=(x94<=x95))*x96);

    if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 3U;
	int16_t x98 = INT16_MAX;
	volatile uint16_t x99 = 1343U;
	volatile int16_t x100 = INT16_MAX;
	volatile int32_t t24 = -460932739;

    t24 = ((x97!=(x98<=x99))*x100);

    if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint32_t x101 = 2U;
	static int8_t x102 = INT8_MIN;
	static int16_t x103 = 4;
	uint32_t x104 = 955U;
	volatile uint32_t t25 = 635654572U;

    t25 = ((x101!=(x102<=x103))*x104);

    if (t25 != 955U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = UINT32_MAX;
	int64_t x106 = 3940456091LL;
	static int32_t x107 = 1;
	volatile int64_t t26 = -4122126LL;

    t26 = ((x105!=(x106<=x107))*x108);

    if (t26 != 35823073322225903LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	int16_t x110 = INT16_MIN;
	static int16_t x111 = INT16_MIN;
	int16_t x112 = 54;
	volatile int32_t t27 = -550;

    t27 = ((x109!=(x110<=x111))*x112);

    if (t27 != 54) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = UINT32_MAX;
	int16_t x115 = -1;
	int64_t t28 = INT64_MIN;

    t28 = ((x113!=(x114<=x115))*x116);

    if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -40009064;
	int16_t x118 = INT16_MIN;
	static volatile uint64_t x119 = 2895694LLU;
	uint64_t x120 = 318139219852315LLU;

    t29 = ((x117!=(x118<=x119))*x120);

    if (t29 != 318139219852315LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	int64_t x122 = 36188453LL;
	uint16_t x124 = 6U;
	volatile int32_t t30 = -3;

    t30 = ((x121!=(x122<=x123))*x124);

    if (t30 != 6) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x126 = -1840947027LL;
	static volatile int8_t x128 = INT8_MAX;
	int32_t t31 = -14476;

    t31 = ((x125!=(x126<=x127))*x128);

    if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	volatile uint32_t x130 = 116625214U;
	volatile int32_t t32 = 3178274;

    t32 = ((x129!=(x130<=x131))*x132);

    if (t32 != 71) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x135 = 15LLU;
	uint16_t x136 = 1832U;
	int32_t t33 = 7922728;

    t33 = ((x133!=(x134<=x135))*x136);

    if (t33 != 1832) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x137 = -1;
	uint16_t x138 = 13007U;
	static int64_t x139 = -3039983LL;
	volatile int32_t t34 = 100830;

    t34 = ((x137!=(x138<=x139))*x140);

    if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x143 = INT16_MAX;
	static volatile int32_t t35 = INT32_MIN;

    t35 = ((x141!=(x142<=x143))*x144);

    if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MAX;
	int32_t x146 = INT32_MIN;
	static uint16_t x147 = 93U;
	static int32_t x148 = INT32_MIN;
	int32_t t36 = INT32_MIN;

    t36 = ((x145!=(x146<=x147))*x148);

    if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -20;
	uint16_t x151 = UINT16_MAX;
	uint16_t x152 = UINT16_MAX;
	volatile int32_t t37 = -111;

    t37 = ((x149!=(x150<=x151))*x152);

    if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = 1;
	uint8_t x154 = 43U;
	int32_t x156 = 784888060;

    t38 = ((x153!=(x154<=x155))*x156);

    if (t38 != 784888060) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	static volatile int16_t x158 = INT16_MIN;
	volatile int64_t x159 = INT64_MAX;
	volatile int32_t t39 = INT32_MIN;

    t39 = ((x157!=(x158<=x159))*x160);

    if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = -1;
	int64_t x162 = 2389LL;
	int32_t x163 = INT32_MAX;
	int32_t x164 = -14279974;
	int32_t t40 = -942764537;

    t40 = ((x161!=(x162<=x163))*x164);

    if (t40 != -14279974) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = UINT16_MAX;
	int16_t x166 = -1;
	static uint32_t x167 = 1191139U;
	static int16_t x168 = INT16_MIN;
	volatile int32_t t41 = -1182844;

    t41 = ((x165!=(x166<=x167))*x168);

    if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x169 = 174098U;
	uint64_t x170 = 24774LLU;
	static uint16_t x171 = 0U;
	int16_t x172 = INT16_MAX;

    t42 = ((x169!=(x170<=x171))*x172);

    if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = -1LL;
	volatile int8_t x174 = INT8_MIN;
	uint16_t x175 = 16869U;
	int16_t x176 = INT16_MAX;
	int32_t t43 = 10008251;

    t43 = ((x173!=(x174<=x175))*x176);

    if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 145U;
	int32_t x178 = INT32_MAX;
	int32_t x179 = -1;
	uint64_t x180 = 7695802LLU;
	uint64_t t44 = 521243307656LLU;

    t44 = ((x177!=(x178<=x179))*x180);

    if (t44 != 7695802LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x183 = -1;
	uint32_t x184 = 2U;

    t45 = ((x181!=(x182<=x183))*x184);

    if (t45 != 2U) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x186 = -10;
	static uint16_t x187 = UINT16_MAX;
	int16_t x188 = INT16_MAX;
	int32_t t46 = -17365222;

    t46 = ((x185!=(x186<=x187))*x188);

    if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x189 = INT8_MIN;
	int8_t x190 = INT8_MIN;
	uint8_t x191 = UINT8_MAX;
	static int16_t x192 = -1;
	volatile int32_t t47 = 210504692;

    t47 = ((x189!=(x190<=x191))*x192);

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = UINT16_MAX;
	int32_t x194 = INT32_MIN;
	static int64_t x195 = INT64_MIN;
	int32_t t48 = -2711;

    t48 = ((x193!=(x194<=x195))*x196);

    if (t48 != 13438) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x197 = UINT32_MAX;
	volatile int64_t x199 = -1LL;
	int8_t x200 = INT8_MAX;
	int32_t t49 = 19172;

    t49 = ((x197!=(x198<=x199))*x200);

    if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x202 = -25989402051LL;
	int64_t x204 = -1LL;
	static int64_t t50 = 1468LL;

    t50 = ((x201!=(x202<=x203))*x204);

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x206 = 73534893U;
	int8_t x207 = 1;
	static uint16_t x208 = 579U;

    t51 = ((x205!=(x206<=x207))*x208);

    if (t51 != 579) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x209 = 19LL;
	int16_t x210 = INT16_MIN;
	uint8_t x211 = 3U;
	int32_t t52 = -111044333;

    t52 = ((x209!=(x210<=x211))*x212);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MAX;
	uint8_t x214 = 1U;
	int32_t x216 = 206458;

    t53 = ((x213!=(x214<=x215))*x216);

    if (t53 != 206458) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MIN;
	volatile int8_t x219 = INT8_MIN;
	int32_t t54 = -3184339;

    t54 = ((x217!=(x218<=x219))*x220);

    if (t54 != -618) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 203U;
	volatile int16_t x222 = -1;
	int8_t x223 = INT8_MIN;
	volatile int32_t t55 = INT32_MIN;

    t55 = ((x221!=(x222<=x223))*x224);

    if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x225 = -1047142;
	uint64_t x226 = 879LLU;
	int8_t x227 = INT8_MIN;
	static int64_t x228 = INT64_MIN;
	int64_t t56 = INT64_MIN;

    t56 = ((x225!=(x226<=x227))*x228);

    if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x229 = INT32_MIN;
	uint32_t x230 = 128115U;
	uint8_t x231 = 5U;
	volatile int32_t t57 = 807;

    t57 = ((x229!=(x230<=x231))*x232);

    if (t57 != 3836) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = 1;
	int32_t x235 = INT32_MIN;
	volatile uint32_t x236 = UINT32_MAX;
	uint32_t t58 = UINT32_MAX;

    t58 = ((x233!=(x234<=x235))*x236);

    if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x237 = INT8_MAX;
	int32_t x238 = INT32_MIN;
	uint8_t x239 = 2U;
	int32_t x240 = 12;
	int32_t t59 = 16360410;

    t59 = ((x237!=(x238<=x239))*x240);

    if (t59 != 12) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x241 = -1;
	uint64_t x242 = 836243495419078277LLU;
	uint32_t x243 = 505902U;

    t60 = ((x241!=(x242<=x243))*x244);

    if (t60 != 490) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = 1095U;
	int8_t x246 = -2;
	uint64_t x247 = 118472390LLU;
	int8_t x248 = 1;
	volatile int32_t t61 = 8428;

    t61 = ((x245!=(x246<=x247))*x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x250 = INT8_MAX;
	volatile int16_t x252 = -1;
	volatile int32_t t62 = -14;

    t62 = ((x249!=(x250<=x251))*x252);

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x253 = INT64_MIN;
	static int32_t x254 = INT32_MIN;
	uint32_t x255 = UINT32_MAX;
	int16_t x256 = INT16_MAX;
	int32_t t63 = -969;

    t63 = ((x253!=(x254<=x255))*x256);

    if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = 11281485;
	int16_t x259 = -1;
	static int8_t x260 = 2;
	static int32_t t64 = 612453055;

    t64 = ((x257!=(x258<=x259))*x260);

    if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = -1LL;
	volatile uint32_t x262 = 37570214U;
	int16_t x263 = INT16_MIN;
	int32_t x264 = INT32_MIN;
	static int32_t t65 = INT32_MIN;

    t65 = ((x261!=(x262<=x263))*x264);

    if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x268 = -1;
	int32_t t66 = -6591879;

    t66 = ((x265!=(x266<=x267))*x268);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = UINT8_MAX;
	int64_t x271 = -1LL;
	int32_t x272 = -1;
	int32_t t67 = -15123;

    t67 = ((x269!=(x270<=x271))*x272);

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = UINT16_MAX;
	uint64_t x275 = 155LLU;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t68 = -44531590;

    t68 = ((x273!=(x274<=x275))*x276);

    if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MIN;
	int32_t x278 = -1;
	volatile uint16_t x279 = UINT16_MAX;
	volatile int64_t x280 = 0LL;
	static int64_t t69 = 90571871096811LL;

    t69 = ((x277!=(x278<=x279))*x280);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x281 = -1;
	static int8_t x282 = INT8_MAX;
	int32_t x283 = -1;
	uint32_t x284 = UINT32_MAX;
	uint32_t t70 = UINT32_MAX;

    t70 = ((x281!=(x282<=x283))*x284);

    if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = -1;
	volatile int16_t x286 = INT16_MIN;
	volatile int32_t t71 = 489;

    t71 = ((x285!=(x286<=x287))*x288);

    if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x290 = 1705;
	int8_t x291 = -1;
	static volatile uint32_t t72 = 98605U;

    t72 = ((x289!=(x290<=x291))*x292);

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x295 = 18U;
	int8_t x296 = INT8_MIN;
	volatile int32_t t73 = 173956;

    t73 = ((x293!=(x294<=x295))*x296);

    if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x297 = INT8_MAX;
	int16_t x298 = INT16_MAX;
	static int64_t x299 = 7570LL;
	volatile uint16_t x300 = UINT16_MAX;
	static volatile int32_t t74 = 123791;

    t74 = ((x297!=(x298<=x299))*x300);

    if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = -1;
	volatile int32_t t75 = -11174;

    t75 = ((x301!=(x302<=x303))*x304);

    if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x305 = INT8_MIN;
	uint32_t x307 = 886184278U;
	static int16_t x308 = -1;
	static volatile int32_t t76 = 164165805;

    t76 = ((x305!=(x306<=x307))*x308);

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = -52;
	static volatile int16_t x311 = 1;
	int32_t x312 = INT32_MAX;
	volatile int32_t t77 = INT32_MAX;

    t77 = ((x309!=(x310<=x311))*x312);

    if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = -190;
	uint64_t x314 = 149623002948383629LLU;
	int32_t x316 = INT32_MIN;
	volatile int32_t t78 = INT32_MIN;

    t78 = ((x313!=(x314<=x315))*x316);

    if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = 20142U;
	int16_t x318 = INT16_MAX;
	volatile uint16_t x320 = 33U;
	volatile int32_t t79 = 501470;

    t79 = ((x317!=(x318<=x319))*x320);

    if (t79 != 33) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = 1737LLU;
	int16_t x322 = INT16_MIN;
	int64_t x324 = INT64_MIN;
	int64_t t80 = INT64_MIN;

    t80 = ((x321!=(x322<=x323))*x324);

    if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = 0U;
	uint32_t x326 = 445660U;
	int64_t x327 = -1LL;
	static volatile int32_t x328 = -114;
	volatile int32_t t81 = 366;

    t81 = ((x325!=(x326<=x327))*x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x330 = -1;
	int64_t x331 = -1LL;
	volatile int32_t x332 = INT32_MIN;
	static volatile int32_t t82 = INT32_MIN;

    t82 = ((x329!=(x330<=x331))*x332);

    if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MIN;
	int32_t x334 = INT32_MIN;
	uint16_t x335 = 867U;
	static int64_t t83 = 0LL;

    t83 = ((x333!=(x334<=x335))*x336);

    if (t83 != 760044LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MIN;
	volatile int64_t x338 = 568LL;
	uint64_t x339 = UINT64_MAX;
	int32_t x340 = INT32_MIN;
	volatile int32_t t84 = INT32_MIN;

    t84 = ((x337!=(x338<=x339))*x340);

    if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -5469649;
	uint64_t x344 = 209LLU;
	volatile uint64_t t85 = 122925LLU;

    t85 = ((x341!=(x342<=x343))*x344);

    if (t85 != 209LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x345 = INT64_MIN;
	static uint16_t x346 = 125U;
	static int32_t x347 = INT32_MIN;
	int16_t x348 = INT16_MIN;

    t86 = ((x345!=(x346<=x347))*x348);

    if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = INT32_MIN;
	uint16_t x350 = UINT16_MAX;
	int16_t x351 = -1;
	uint64_t x352 = UINT64_MAX;
	static volatile uint64_t t87 = UINT64_MAX;

    t87 = ((x349!=(x350<=x351))*x352);

    if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = -1;
	uint64_t x354 = 19071LLU;
	int32_t x355 = 127987;
	static uint8_t x356 = 1U;
	volatile int32_t t88 = -2;

    t88 = ((x353!=(x354<=x355))*x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x357 = 3154334U;
	volatile uint32_t x360 = UINT32_MAX;

    t89 = ((x357!=(x358<=x359))*x360);

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x361 = 209400545230710LL;
	static int8_t x362 = 45;
	volatile int64_t x363 = -1LL;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t90 = UINT64_MAX;

    t90 = ((x361!=(x362<=x363))*x364);

    if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x366 = INT32_MIN;
	int16_t x367 = -1;
	volatile int16_t x368 = 4;
	static int32_t t91 = 231316639;

    t91 = ((x365!=(x366<=x367))*x368);

    if (t91 != 4) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 46895732U;
	uint64_t x370 = UINT64_MAX;
	int16_t x371 = INT16_MIN;
	int16_t x372 = -1;
	int32_t t92 = -12;

    t92 = ((x369!=(x370<=x371))*x372);

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x373 = INT64_MAX;
	volatile int8_t x374 = INT8_MIN;
	int64_t x375 = INT64_MIN;
	volatile uint64_t t93 = 29564127LLU;

    t93 = ((x373!=(x374<=x375))*x376);

    if (t93 != 12353200952LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x378 = INT64_MIN;
	volatile int16_t x379 = INT16_MIN;
	int32_t t94 = 1399113;

    t94 = ((x377!=(x378<=x379))*x380);

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x381 = 23112032U;
	int64_t x383 = -30232551610472LL;
	int64_t x384 = INT64_MAX;
	int64_t t95 = INT64_MAX;

    t95 = ((x381!=(x382<=x383))*x384);

    if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x385 = INT32_MIN;
	static int64_t x386 = INT64_MIN;
	int16_t x387 = 3;
	volatile int64_t t96 = 14295368549908LL;

    t96 = ((x385!=(x386<=x387))*x388);

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x391 = -7858;
	volatile int8_t x392 = -1;
	int32_t t97 = 0;

    t97 = ((x389!=(x390<=x391))*x392);

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = UINT16_MAX;
	uint64_t x394 = 2136107539677LLU;
	int32_t x395 = INT32_MIN;
	static uint16_t x396 = 8025U;
	int32_t t98 = -1716;

    t98 = ((x393!=(x394<=x395))*x396);

    if (t98 != 8025) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x397 = UINT32_MAX;
	int32_t x398 = -1;
	int16_t x399 = -978;
	volatile int8_t x400 = -13;
	int32_t t99 = 0;

    t99 = ((x397!=(x398<=x399))*x400);

    if (t99 != -13) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x401 = INT32_MIN;
	int32_t x402 = INT32_MIN;
	volatile uint64_t x403 = 5LLU;
	uint32_t x404 = UINT32_MAX;
	uint32_t t100 = UINT32_MAX;

    t100 = ((x401!=(x402<=x403))*x404);

    if (t100 != UINT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x405 = -1;
	static int32_t x408 = INT32_MAX;
	volatile int32_t t101 = INT32_MAX;

    t101 = ((x405!=(x406<=x407))*x408);

    if (t101 != INT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x410 = INT16_MAX;
	static volatile int8_t x412 = INT8_MIN;

    t102 = ((x409!=(x410<=x411))*x412);

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x413 = INT8_MIN;
	int32_t x414 = -1;
	int8_t x415 = INT8_MAX;
	uint32_t x416 = 837836016U;
	volatile uint32_t t103 = 115U;

    t103 = ((x413!=(x414<=x415))*x416);

    if (t103 != 837836016U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = INT8_MIN;
	static volatile int16_t x418 = INT16_MIN;
	int32_t x419 = INT32_MIN;
	static uint16_t x420 = 12U;
	int32_t t104 = 840;

    t104 = ((x417!=(x418<=x419))*x420);

    if (t104 != 12) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = 1U;
	uint64_t x422 = 2181845614LLU;
	int8_t x423 = -1;

    t105 = ((x421!=(x422<=x423))*x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MIN;
	uint16_t x426 = UINT16_MAX;
	int8_t x427 = INT8_MAX;
	int32_t x428 = -1;
	volatile int32_t t106 = 7581;

    t106 = ((x425!=(x426<=x427))*x428);

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MIN;
	uint16_t x430 = 3U;
	int64_t x432 = INT64_MIN;
	volatile int64_t t107 = INT64_MIN;

    t107 = ((x429!=(x430<=x431))*x432);

    if (t107 != INT64_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = 58U;
	int8_t x435 = INT8_MIN;
	int64_t x436 = INT64_MIN;

    t108 = ((x433!=(x434<=x435))*x436);

    if (t108 != INT64_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -1518;
	int8_t x438 = -2;
	int8_t x439 = INT8_MIN;
	uint64_t x440 = 6395838041571324LLU;
	uint64_t t109 = 42361837LLU;

    t109 = ((x437!=(x438<=x439))*x440);

    if (t109 != 6395838041571324LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x442 = UINT8_MAX;
	int64_t x443 = -1LL;
	volatile int32_t t110 = 13523759;

    t110 = ((x441!=(x442<=x443))*x444);

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x445 = -1LL;
	static volatile int8_t x446 = INT8_MIN;
	uint16_t x447 = 4U;
	int64_t x448 = INT64_MIN;
	volatile int64_t t111 = INT64_MIN;

    t111 = ((x445!=(x446<=x447))*x448);

    if (t111 != INT64_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int8_t x449 = 1;
	int8_t x452 = INT8_MAX;

    t112 = ((x449!=(x450<=x451))*x452);

    if (t112 != 127) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MAX;
	uint32_t x454 = 106706U;
	static int32_t x455 = INT32_MIN;
	volatile int32_t t113 = -406354;

    t113 = ((x453!=(x454<=x455))*x456);

    if (t113 != -32768) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x458 = INT64_MIN;
	int64_t x460 = INT64_MIN;
	volatile int64_t t114 = INT64_MIN;

    t114 = ((x457!=(x458<=x459))*x460);

    if (t114 != INT64_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MIN;
	int8_t x462 = 18;
	int32_t x464 = INT32_MIN;
	int32_t t115 = INT32_MIN;

    t115 = ((x461!=(x462<=x463))*x464);

    if (t115 != INT32_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x466 = UINT16_MAX;
	volatile int8_t x468 = INT8_MIN;
	int32_t t116 = -13;

    t116 = ((x465!=(x466<=x467))*x468);

    if (t116 != -128) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x469 = -5;
	int32_t x470 = INT32_MIN;
	volatile int8_t x471 = INT8_MAX;
	int8_t x472 = -1;
	static volatile int32_t t117 = -94812;

    t117 = ((x469!=(x470<=x471))*x472);

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x473 = -1;
	int16_t x475 = INT16_MAX;
	static int32_t x476 = INT32_MIN;
	static volatile int32_t t118 = INT32_MIN;

    t118 = ((x473!=(x474<=x475))*x476);

    if (t118 != INT32_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x477 = UINT16_MAX;
	int16_t x478 = INT16_MIN;
	volatile uint32_t x479 = 30U;
	int16_t x480 = INT16_MIN;

    t119 = ((x477!=(x478<=x479))*x480);

    if (t119 != -32768) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x482 = INT8_MIN;
	static int16_t x483 = -24;
	int16_t x484 = 3;
	int32_t t120 = 338517292;

    t120 = ((x481!=(x482<=x483))*x484);

    if (t120 != 3) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = UINT8_MAX;
	int64_t x486 = INT64_MIN;
	int32_t x487 = INT32_MIN;
	volatile int64_t x488 = -1LL;
	int64_t t121 = -297998014608LL;

    t121 = ((x485!=(x486<=x487))*x488);

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = 8U;
	uint64_t x490 = 29447715270130064LLU;
	static uint32_t x491 = UINT32_MAX;
	int8_t x492 = INT8_MIN;
	volatile int32_t t122 = -59851;

    t122 = ((x489!=(x490<=x491))*x492);

    if (t122 != -128) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x494 = INT64_MIN;
	volatile int8_t x495 = -1;
	static int8_t x496 = INT8_MIN;
	static volatile int32_t t123 = 14790023;

    t123 = ((x493!=(x494<=x495))*x496);

    if (t123 != -128) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x499 = INT8_MAX;
	uint8_t x500 = 1U;
	int32_t t124 = 2;

    t124 = ((x497!=(x498<=x499))*x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = 16U;
	static uint16_t x502 = UINT16_MAX;
	static int16_t x503 = INT16_MAX;
	int16_t x504 = -1;
	volatile int32_t t125 = 2;

    t125 = ((x501!=(x502<=x503))*x504);

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x505 = UINT8_MAX;
	uint16_t x507 = UINT16_MAX;
	static uint32_t x508 = 2U;
	static uint32_t t126 = 375719U;

    t126 = ((x505!=(x506<=x507))*x508);

    if (t126 != 2U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x509 = 1U;
	volatile int16_t x510 = -1;
	int32_t x511 = 0;
	static int8_t x512 = INT8_MIN;
	int32_t t127 = 2091778;

    t127 = ((x509!=(x510<=x511))*x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = 1U;
	static uint64_t x514 = 1259379LLU;
	int64_t x516 = -23952908LL;
	volatile int64_t t128 = 44LL;

    t128 = ((x513!=(x514<=x515))*x516);

    if (t128 != -23952908LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = -238;
	int8_t x518 = INT8_MAX;
	int32_t x519 = INT32_MAX;
	volatile uint8_t x520 = UINT8_MAX;
	static int32_t t129 = 145;

    t129 = ((x517!=(x518<=x519))*x520);

    if (t129 != 255) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = 9U;
	static uint8_t x522 = 12U;
	int16_t x523 = INT16_MIN;
	volatile int32_t t130 = 12781006;

    t130 = ((x521!=(x522<=x523))*x524);

    if (t130 != 155) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x527 = -1;
	uint64_t x528 = 1854LLU;
	volatile uint64_t t131 = 6LLU;

    t131 = ((x525!=(x526<=x527))*x528);

    if (t131 != 1854LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x529 = UINT64_MAX;
	int32_t x530 = INT32_MAX;
	static uint64_t x532 = 862685LLU;
	volatile uint64_t t132 = 152309LLU;

    t132 = ((x529!=(x530<=x531))*x532);

    if (t132 != 862685LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = INT64_MIN;
	uint16_t x534 = 1U;
	int8_t x535 = -1;
	volatile int64_t t133 = INT64_MAX;

    t133 = ((x533!=(x534<=x535))*x536);

    if (t133 != INT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MAX;
	uint32_t x539 = 452U;
	volatile int32_t t134 = -472760;

    t134 = ((x537!=(x538<=x539))*x540);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x541 = UINT16_MAX;
	volatile int16_t x542 = INT16_MIN;
	volatile int32_t x543 = INT32_MIN;
	uint32_t x544 = 295042585U;
	static uint32_t t135 = 132669266U;

    t135 = ((x541!=(x542<=x543))*x544);

    if (t135 != 295042585U) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = -1;
	static uint64_t x547 = UINT64_MAX;
	int64_t x548 = -1LL;
	int64_t t136 = 111684906LL;

    t136 = ((x545!=(x546<=x547))*x548);

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MIN;
	volatile int16_t x550 = 0;
	int64_t x551 = 812086611331161LL;
	uint8_t x552 = 30U;
	static int32_t t137 = 0;

    t137 = ((x549!=(x550<=x551))*x552);

    if (t137 != 30) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x553 = INT8_MIN;
	static int64_t x554 = INT64_MIN;
	uint64_t x555 = UINT64_MAX;
	volatile int64_t x556 = INT64_MAX;
	int64_t t138 = INT64_MAX;

    t138 = ((x553!=(x554<=x555))*x556);

    if (t138 != INT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x557 = UINT16_MAX;
	int8_t x559 = 41;
	int64_t x560 = -983274353611265064LL;
	static int64_t t139 = -45LL;

    t139 = ((x557!=(x558<=x559))*x560);

    if (t139 != -983274353611265064LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MIN;
	uint8_t x562 = 9U;
	int8_t x564 = -17;
	int32_t t140 = -6790;

    t140 = ((x561!=(x562<=x563))*x564);

    if (t140 != -17) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int8_t x565 = -3;
	static int16_t x567 = -1;
	uint8_t x568 = 2U;
	static volatile int32_t t141 = -960936485;

    t141 = ((x565!=(x566<=x567))*x568);

    if (t141 != 2) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = 0;
	volatile uint8_t x570 = UINT8_MAX;
	static uint32_t x571 = 8541309U;
	uint16_t x572 = 76U;

    t142 = ((x569!=(x570<=x571))*x572);

    if (t142 != 76) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x573 = 23;
	int16_t x574 = INT16_MIN;
	int32_t x575 = -1;
	uint16_t x576 = 0U;
	int32_t t143 = -19;

    t143 = ((x573!=(x574<=x575))*x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MAX;
	static volatile int8_t x578 = -1;
	int32_t x579 = -114337;
	volatile uint16_t x580 = UINT16_MAX;
	int32_t t144 = 90;

    t144 = ((x577!=(x578<=x579))*x580);

    if (t144 != 65535) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x581 = -1656;
	volatile uint32_t x583 = UINT32_MAX;
	volatile int64_t t145 = INT64_MAX;

    t145 = ((x581!=(x582<=x583))*x584);

    if (t145 != INT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x586 = 13266U;
	uint16_t x587 = UINT16_MAX;
	int16_t x588 = INT16_MIN;
	int32_t t146 = 17107;

    t146 = ((x585!=(x586<=x587))*x588);

    if (t146 != -32768) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x590 = INT64_MAX;
	uint64_t x591 = UINT64_MAX;
	uint32_t x592 = 111721U;

    t147 = ((x589!=(x590<=x591))*x592);

    if (t147 != 111721U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = -1;
	int8_t x594 = INT8_MIN;
	static volatile uint32_t x595 = 470884469U;
	int64_t x596 = INT64_MAX;
	volatile int64_t t148 = INT64_MAX;

    t148 = ((x593!=(x594<=x595))*x596);

    if (t148 != INT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int64_t x597 = 327941507LL;
	uint32_t x598 = UINT32_MAX;
	uint64_t x599 = 0LLU;
	uint32_t x600 = 203U;
	volatile uint32_t t149 = 2296882U;

    t149 = ((x597!=(x598<=x599))*x600);

    if (t149 != 203U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MIN;
	int8_t x602 = INT8_MIN;
	int8_t x603 = INT8_MAX;
	static int32_t t150 = 59617;

    t150 = ((x601!=(x602<=x603))*x604);

    if (t150 != 29) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	static int64_t x606 = -1LL;
	int16_t x607 = -1;
	static volatile int8_t x608 = -1;
	int32_t t151 = 10644751;

    t151 = ((x605!=(x606<=x607))*x608);

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MAX;
	int32_t x610 = INT32_MAX;
	uint32_t x611 = 24247648U;
	volatile int32_t x612 = 3173723;
	int32_t t152 = -510242;

    t152 = ((x609!=(x610<=x611))*x612);

    if (t152 != 3173723) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = -1;
	static int64_t x614 = INT64_MIN;
	int8_t x615 = -2;
	static int8_t x616 = INT8_MAX;
	int32_t t153 = 0;

    t153 = ((x613!=(x614<=x615))*x616);

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = 1U;
	uint32_t x618 = 9342U;
	volatile uint16_t x620 = 3U;
	volatile int32_t t154 = 8160;

    t154 = ((x617!=(x618<=x619))*x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MIN;
	static int16_t x622 = INT16_MAX;
	static int32_t x623 = 89050;
	static int64_t x624 = INT64_MIN;
	volatile int64_t t155 = INT64_MIN;

    t155 = ((x621!=(x622<=x623))*x624);

    if (t155 != INT64_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = UINT32_MAX;
	static uint8_t x626 = 1U;
	static int32_t t156 = INT32_MAX;

    t156 = ((x625!=(x626<=x627))*x628);

    if (t156 != INT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = 2143;
	static uint32_t x630 = 22330U;
	uint64_t x631 = 3354866256LLU;
	int32_t x632 = -242413080;
	int32_t t157 = -57538001;

    t157 = ((x629!=(x630<=x631))*x632);

    if (t157 != -242413080) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = UINT8_MAX;
	static volatile uint64_t x634 = 5316581711698494LLU;
	volatile uint64_t x635 = 74394598LLU;

    t158 = ((x633!=(x634<=x635))*x636);

    if (t158 != -32768) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x637 = INT16_MIN;
	volatile int8_t x638 = -11;
	volatile int16_t x640 = -1;
	static int32_t t159 = 1;

    t159 = ((x637!=(x638<=x639))*x640);

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MAX;
	int16_t x643 = -1;
	volatile int8_t x644 = -1;
	int32_t t160 = -752;

    t160 = ((x641!=(x642<=x643))*x644);

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = 2U;
	int8_t x646 = INT8_MIN;
	int8_t x647 = INT8_MIN;
	static uint8_t x648 = UINT8_MAX;
	volatile int32_t t161 = 193534360;

    t161 = ((x645!=(x646<=x647))*x648);

    if (t161 != 255) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -33055209LL;
	static uint64_t x650 = 9214714LLU;
	uint8_t x651 = 8U;
	uint64_t x652 = 1714823588118815609LLU;
	uint64_t t162 = 7870709360169LLU;

    t162 = ((x649!=(x650<=x651))*x652);

    if (t162 != 1714823588118815609LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = -2356;
	int8_t x654 = -1;
	uint16_t x655 = 0U;
	uint64_t x656 = UINT64_MAX;

    t163 = ((x653!=(x654<=x655))*x656);

    if (t163 != UINT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MAX;
	int64_t x658 = INT64_MIN;
	int64_t x659 = INT64_MAX;
	static uint64_t x660 = 7298837013LLU;
	static volatile uint64_t t164 = 44011680LLU;

    t164 = ((x657!=(x658<=x659))*x660);

    if (t164 != 7298837013LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x661 = INT64_MIN;
	static int64_t x662 = INT64_MAX;
	volatile uint8_t x663 = UINT8_MAX;
	int64_t x664 = -1LL;
	volatile int64_t t165 = -11816875722430LL;

    t165 = ((x661!=(x662<=x663))*x664);

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x666 = 112172237628045LL;
	static int16_t x667 = INT16_MIN;
	uint32_t x668 = 1467U;
	uint32_t t166 = 133391649U;

    t166 = ((x665!=(x666<=x667))*x668);

    if (t166 != 1467U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x669 = 206973044219LLU;
	volatile uint8_t x672 = 0U;
	int32_t t167 = 2510;

    t167 = ((x669!=(x670<=x671))*x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 10U;
	uint16_t x674 = UINT16_MAX;
	static int16_t x675 = -1;
	volatile int32_t t168 = -887;

    t168 = ((x673!=(x674<=x675))*x676);

    if (t168 != 20134) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = 1U;
	uint16_t x678 = 11470U;
	static int8_t x679 = -28;
	static int64_t x680 = -1LL;

    t169 = ((x677!=(x678<=x679))*x680);

    if (t169 != -1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MIN;
	static volatile int32_t x682 = -1;
	volatile int32_t x683 = 14463;
	int16_t x684 = 50;
	int32_t t170 = -9609;

    t170 = ((x681!=(x682<=x683))*x684);

    if (t170 != 50) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x686 = INT16_MIN;
	static int64_t x687 = -88080583045LL;
	int8_t x688 = -1;
	int32_t t171 = 30029;

    t171 = ((x685!=(x686<=x687))*x688);

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	uint8_t x690 = UINT8_MAX;
	static int64_t x691 = -1LL;
	int8_t x692 = INT8_MIN;
	volatile int32_t t172 = 25;

    t172 = ((x689!=(x690<=x691))*x692);

    if (t172 != -128) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = UINT8_MAX;
	int8_t x694 = INT8_MIN;
	uint32_t x695 = 15422U;
	int16_t x696 = INT16_MIN;
	volatile int32_t t173 = -27;

    t173 = ((x693!=(x694<=x695))*x696);

    if (t173 != -32768) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x697 = 7U;
	static int16_t x698 = 108;
	static volatile uint8_t x699 = 118U;
	int8_t x700 = INT8_MIN;
	int32_t t174 = 0;

    t174 = ((x697!=(x698<=x699))*x700);

    if (t174 != -128) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x701 = INT16_MIN;
	static int32_t x702 = INT32_MIN;
	uint64_t x703 = 9LLU;
	int8_t x704 = INT8_MAX;
	volatile int32_t t175 = -374920;

    t175 = ((x701!=(x702<=x703))*x704);

    if (t175 != 127) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x705 = INT16_MAX;
	int8_t x707 = INT8_MIN;
	static uint32_t x708 = 284742912U;
	uint32_t t176 = 517U;

    t176 = ((x705!=(x706<=x707))*x708);

    if (t176 != 284742912U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = -1;
	volatile uint32_t x710 = 52822U;
	int16_t x711 = INT16_MAX;
	int16_t x712 = 1862;
	volatile int32_t t177 = 163526891;

    t177 = ((x709!=(x710<=x711))*x712);

    if (t177 != 1862) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MAX;
	static volatile int32_t x715 = -644927928;
	uint8_t x716 = 2U;
	static int32_t t178 = 494773;

    t178 = ((x713!=(x714<=x715))*x716);

    if (t178 != 2) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x718 = INT8_MIN;
	static int16_t x720 = INT16_MAX;

    t179 = ((x717!=(x718<=x719))*x720);

    if (t179 != 32767) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -1;
	int8_t x722 = -1;
	volatile int32_t x723 = -1;
	uint8_t x724 = 0U;

    t180 = ((x721!=(x722<=x723))*x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x725 = -45710476689491LL;
	int16_t x726 = -1;
	uint64_t x727 = UINT64_MAX;
	volatile int32_t t181 = 1;

    t181 = ((x725!=(x726<=x727))*x728);

    if (t181 != 20) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x730 = INT64_MIN;
	volatile uint16_t x731 = 1U;
	uint32_t x732 = 0U;
	uint32_t t182 = 255381713U;

    t182 = ((x729!=(x730<=x731))*x732);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x734 = 1998;
	int16_t x735 = INT16_MAX;
	uint16_t x736 = 11440U;
	int32_t t183 = -9156;

    t183 = ((x733!=(x734<=x735))*x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x738 = -1;
	static volatile int16_t x739 = INT16_MAX;
	volatile int64_t x740 = INT64_MIN;
	static volatile int64_t t184 = INT64_MIN;

    t184 = ((x737!=(x738<=x739))*x740);

    if (t184 != INT64_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MAX;
	static int32_t x743 = -1;
	int64_t x744 = -1LL;
	int64_t t185 = 0LL;

    t185 = ((x741!=(x742<=x743))*x744);

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MIN;
	int16_t x747 = 53;
	volatile uint8_t x748 = UINT8_MAX;
	volatile int32_t t186 = -185;

    t186 = ((x745!=(x746<=x747))*x748);

    if (t186 != 255) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x749 = INT64_MIN;
	static uint16_t x750 = UINT16_MAX;
	uint16_t x751 = UINT16_MAX;
	uint16_t x752 = 1496U;
	volatile int32_t t187 = 1084;

    t187 = ((x749!=(x750<=x751))*x752);

    if (t187 != 1496) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x754 = INT32_MIN;
	volatile int8_t x755 = 6;
	int64_t x756 = 85524194951LL;
	volatile int64_t t188 = 2009859309309644610LL;

    t188 = ((x753!=(x754<=x755))*x756);

    if (t188 != 85524194951LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MAX;
	static int8_t x758 = -3;
	volatile uint8_t x759 = UINT8_MAX;
	int64_t x760 = INT64_MAX;
	int64_t t189 = INT64_MAX;

    t189 = ((x757!=(x758<=x759))*x760);

    if (t189 != INT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x762 = 3625U;
	int32_t x763 = 38400481;
	int32_t x764 = -1;
	volatile int32_t t190 = 237820375;

    t190 = ((x761!=(x762<=x763))*x764);

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x765 = INT16_MIN;
	int8_t x766 = INT8_MAX;
	int64_t x767 = INT64_MIN;

    t191 = ((x765!=(x766<=x767))*x768);

    if (t191 != INT32_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MAX;
	volatile int64_t x771 = INT64_MIN;
	volatile int32_t x772 = 1;
	int32_t t192 = 20;

    t192 = ((x769!=(x770<=x771))*x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x773 = UINT8_MAX;
	uint8_t x774 = 0U;
	int32_t x775 = 12;
	int64_t x776 = INT64_MIN;
	static volatile int64_t t193 = INT64_MIN;

    t193 = ((x773!=(x774<=x775))*x776);

    if (t193 != INT64_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MAX;
	int64_t x779 = 1579456547147687911LL;
	static int16_t x780 = INT16_MAX;

    t194 = ((x777!=(x778<=x779))*x780);

    if (t194 != 32767) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x782 = UINT64_MAX;
	uint16_t x784 = 11296U;
	static int32_t t195 = 2768;

    t195 = ((x781!=(x782<=x783))*x784);

    if (t195 != 11296) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x785 = -1LL;
	uint32_t x786 = 0U;
	volatile int8_t x787 = -1;
	uint32_t x788 = 24U;
	uint32_t t196 = 92U;

    t196 = ((x785!=(x786<=x787))*x788);

    if (t196 != 24U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -3;
	static uint16_t x790 = UINT16_MAX;
	static int8_t x791 = INT8_MIN;
	uint64_t x792 = 726632LLU;
	static uint64_t t197 = 356668375LLU;

    t197 = ((x789!=(x790<=x791))*x792);

    if (t197 != 726632LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = -7730727LL;
	int16_t x794 = INT16_MIN;
	volatile int64_t x795 = INT64_MIN;
	static int16_t x796 = -1;
	static volatile int32_t t198 = -25;

    t198 = ((x793!=(x794<=x795))*x796);

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x797 = 23U;
	static int8_t x800 = INT8_MAX;
	static volatile int32_t t199 = 171;

    t199 = ((x797!=(x798<=x799))*x800);

    if (t199 != 127) { NG(); } else { ; }
	
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


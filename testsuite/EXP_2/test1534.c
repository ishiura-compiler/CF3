
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

int32_t x4 = 0;
volatile int32_t x10 = 0;
int8_t x12 = INT8_MIN;
int16_t x14 = INT16_MIN;
int8_t x28 = INT8_MIN;
int64_t x31 = -1LL;
int32_t t7 = 0;
uint16_t x35 = UINT16_MAX;
static int64_t x36 = -628682LL;
int32_t t8 = -8;
int32_t x40 = -99;
int32_t t9 = 1110;
volatile int32_t t10 = 97344747;
int32_t t11 = -16862607;
uint32_t x50 = 5U;
int8_t x51 = INT8_MAX;
int32_t x60 = -1;
int32_t x65 = INT32_MIN;
uint8_t x70 = 15U;
uint32_t x72 = 11797U;
static int8_t x92 = INT8_MIN;
static uint8_t x100 = UINT8_MAX;
static int16_t x109 = INT16_MIN;
int32_t x126 = -1;
volatile uint8_t x128 = 6U;
int32_t t31 = 0;
int16_t x131 = -5513;
volatile uint32_t x135 = 459519U;
int16_t x141 = -1;
volatile int8_t x142 = INT8_MAX;
static int64_t x150 = 9632636LL;
volatile int32_t t37 = -3533;
int16_t x157 = INT16_MIN;
static int16_t x159 = -113;
volatile uint32_t x165 = UINT32_MAX;
int16_t x167 = -1;
volatile int32_t t42 = -30;
uint8_t x176 = UINT8_MAX;
int32_t x180 = 27842772;
static int32_t t44 = 1;
volatile int64_t x183 = INT64_MAX;
int32_t x188 = INT32_MIN;
uint8_t x189 = 55U;
static uint64_t x195 = 293LLU;
int64_t x202 = -53148314758139500LL;
int32_t t51 = 10415;
uint32_t x209 = UINT32_MAX;
static uint64_t x211 = 5240629739995180366LLU;
static int64_t x213 = INT64_MIN;
static volatile uint16_t x216 = UINT16_MAX;
int8_t x221 = -3;
volatile int8_t x222 = -1;
int8_t x223 = -1;
int32_t x234 = INT32_MIN;
uint8_t x236 = 66U;
volatile int32_t t58 = 30575;
uint8_t x252 = 40U;
uint8_t x256 = UINT8_MAX;
uint64_t x263 = UINT64_MAX;
int32_t x265 = INT32_MIN;
static int32_t t66 = -5218;
int64_t x270 = 33795549280414LL;
static uint8_t x274 = UINT8_MAX;
static volatile int8_t x277 = INT8_MIN;
int32_t x282 = INT32_MAX;
int16_t x284 = INT16_MIN;
int8_t x288 = INT8_MAX;
int8_t x294 = INT8_MAX;
uint16_t x297 = 6U;
volatile int32_t t74 = 17;
volatile int32_t t75 = 617;
uint32_t x307 = 48480595U;
volatile uint8_t x310 = 1U;
int16_t x314 = -1;
int8_t x315 = 1;
volatile int32_t x343 = INT32_MIN;
volatile int32_t t85 = -135654737;
int32_t t87 = -963169835;
static int8_t x354 = INT8_MIN;
int16_t x356 = INT16_MIN;
volatile int32_t t88 = -10;
int32_t t90 = -2;
static int16_t x369 = -1;
volatile int8_t x374 = -20;
int8_t x378 = INT8_MAX;
volatile int32_t t95 = 1;
int32_t t96 = 236159;
uint64_t x391 = UINT64_MAX;
volatile int32_t x398 = INT32_MIN;
static int64_t x400 = -32LL;
static int32_t t99 = 399676;
volatile int32_t t101 = 17440039;
volatile int32_t x415 = -11617605;
volatile int32_t t103 = 0;
uint16_t x426 = 427U;
int8_t x429 = 1;
int16_t x431 = INT16_MIN;
volatile int32_t x436 = 62;
volatile int8_t x437 = INT8_MIN;
volatile int32_t x439 = INT32_MAX;
volatile int8_t x440 = INT8_MIN;
int16_t x441 = INT16_MAX;
int64_t x443 = -1LL;
int16_t x444 = INT16_MIN;
int8_t x450 = 6;
uint8_t x452 = 13U;
volatile int32_t t114 = 3;
uint64_t x465 = UINT64_MAX;
int8_t x466 = -1;
static int16_t x467 = -1223;
static int32_t t116 = 37200;
int32_t x469 = -1;
static int8_t x476 = -1;
static uint16_t x484 = UINT16_MAX;
volatile int32_t t122 = -65932;
volatile int32_t x495 = 1;
uint64_t x499 = 1007313058LLU;
uint64_t x502 = UINT64_MAX;
int64_t x512 = INT64_MIN;
volatile int32_t t128 = 510;
static volatile int32_t t129 = 52286519;
volatile int32_t t130 = 3;
int32_t x525 = -1;
int32_t x528 = INT32_MIN;
int8_t x546 = -1;
static int64_t x552 = INT64_MIN;
uint32_t x560 = 4813U;
int32_t t139 = -1;
int16_t x565 = -1;
int8_t x569 = 1;
int16_t x570 = -1;
int64_t x572 = 4848205452580981LL;
volatile int32_t t143 = -1363;
int64_t x581 = 2156132LL;
volatile int8_t x588 = INT8_MIN;
int16_t x593 = INT16_MIN;
int32_t t148 = 7895373;
volatile int64_t x600 = 1611556LL;
static volatile int8_t x602 = -15;
volatile uint16_t x605 = 622U;
int16_t x607 = -2743;
uint32_t x609 = UINT32_MAX;
int8_t x610 = INT8_MIN;
int8_t x613 = INT8_MAX;
uint64_t x616 = 2LLU;
uint8_t x621 = UINT8_MAX;
int64_t x623 = INT64_MAX;
uint32_t x625 = 5200843U;
uint32_t x628 = 1908781315U;
int16_t x629 = -1;
static int32_t x632 = INT32_MIN;
static volatile int32_t t157 = 612843476;
int32_t x639 = INT32_MIN;
int64_t x647 = INT64_MIN;
static int16_t x649 = 1;
uint8_t x650 = UINT8_MAX;
static int64_t x653 = INT64_MAX;
static volatile int32_t t163 = 559;
int64_t x663 = INT64_MIN;
int8_t x665 = 18;
int64_t x672 = INT64_MIN;
int32_t t167 = 23;
int8_t x675 = -1;
volatile int32_t x677 = -1;
volatile int8_t x678 = INT8_MIN;
int64_t x680 = INT64_MIN;
uint32_t x684 = 5703830U;
uint64_t x693 = 15777558LLU;
volatile int32_t t173 = 1;
volatile int32_t x699 = -10776;
static int64_t x701 = -11LL;
int32_t t175 = -454970926;
int8_t x713 = INT8_MIN;
int16_t x716 = -3;
static int32_t x719 = -1;
volatile int16_t x720 = -1;
int32_t t181 = 0;
static int16_t x732 = INT16_MIN;
uint64_t x734 = 11LLU;
volatile uint16_t x739 = UINT16_MAX;
static int32_t x743 = INT32_MIN;
uint8_t x748 = 6U;
int8_t x750 = INT8_MIN;
int32_t x757 = INT32_MAX;
volatile int16_t x759 = 1991;
uint32_t x764 = 443999254U;
volatile int32_t t191 = 12483;
static int64_t x772 = INT64_MIN;
int32_t t192 = -167231;
uint16_t x774 = 64U;
volatile uint32_t x779 = 1016429269U;
int32_t t195 = -1429;
int32_t x788 = INT32_MIN;
static volatile int32_t t197 = -355;
int32_t x794 = INT32_MAX;
volatile int32_t t198 = 59278;


void f0(void) {
    	volatile uint64_t x1 = UINT64_MAX;
	int16_t x2 = INT16_MIN;
	int32_t x3 = -3;
	volatile int32_t t0 = -54410;

    t0 = ((x1&(x2==x3))==x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = 23290764837055447LL;
	int32_t x6 = -1;
	static volatile int16_t x7 = -1;
	static int8_t x8 = -1;
	static volatile int32_t t1 = 5;

    t1 = ((x5&(x6==x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = 15177;
	volatile int64_t x11 = INT64_MIN;
	int32_t t2 = -202989;

    t2 = ((x9&(x10==x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	static uint64_t x15 = 1024058LLU;
	static uint32_t x16 = 46372U;
	int32_t t3 = 195612;

    t3 = ((x13&(x14==x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = UINT32_MAX;
	volatile int16_t x18 = INT16_MIN;
	static uint16_t x19 = UINT16_MAX;
	uint64_t x20 = 3LLU;
	volatile int32_t t4 = 602489999;

    t4 = ((x17&(x18==x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = 9401;
	int8_t x22 = INT8_MAX;
	int8_t x23 = -1;
	volatile uint16_t x24 = 21309U;
	int32_t t5 = -1;

    t5 = ((x21&(x22==x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1034;
	uint32_t x26 = UINT32_MAX;
	int16_t x27 = 2952;
	volatile int32_t t6 = -1480610;

    t6 = ((x25&(x26==x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 38LLU;
	int32_t x30 = -1;
	static int8_t x32 = INT8_MIN;

    t7 = ((x29&(x30==x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 1822445611LLU;
	int8_t x34 = -1;

    t8 = ((x33&(x34==x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = -1;
	volatile int8_t x38 = INT8_MIN;
	int64_t x39 = -1LL;

    t9 = ((x37&(x38==x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	uint64_t x42 = UINT64_MAX;
	static int64_t x43 = INT64_MAX;
	uint64_t x44 = UINT64_MAX;

    t10 = ((x41&(x42==x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	volatile int32_t x46 = INT32_MIN;
	volatile int8_t x47 = INT8_MAX;
	static int8_t x48 = -2;

    t11 = ((x45&(x46==x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	int16_t x52 = -1;
	int32_t t12 = 25651;

    t12 = ((x49&(x50==x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = 64990893;
	volatile int8_t x54 = INT8_MIN;
	volatile int32_t x55 = -42905;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -11196796;

    t13 = ((x53&(x54==x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	static int16_t x58 = -58;
	int64_t x59 = -1LL;
	int32_t t14 = -1;

    t14 = ((x57&(x58==x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int16_t x61 = INT16_MAX;
	int32_t x62 = INT32_MIN;
	static int8_t x63 = -1;
	int64_t x64 = INT64_MAX;
	static volatile int32_t t15 = -1495255;

    t15 = ((x61&(x62==x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x66 = -1;
	static int8_t x67 = INT8_MAX;
	volatile int64_t x68 = INT64_MIN;
	int32_t t16 = 6;

    t16 = ((x65&(x66==x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 989167817800549156LLU;
	static int32_t x71 = -5561;
	int32_t t17 = -2190490;

    t17 = ((x69&(x70==x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = 7213;
	int8_t x74 = INT8_MIN;
	volatile int64_t x75 = -1LL;
	uint16_t x76 = 30331U;
	int32_t t18 = 4442497;

    t18 = ((x73&(x74==x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MAX;
	static uint32_t x78 = 0U;
	int64_t x79 = INT64_MIN;
	static int32_t x80 = INT32_MAX;
	int32_t t19 = -28551485;

    t19 = ((x77&(x78==x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = 39;
	volatile uint8_t x82 = 0U;
	uint16_t x83 = 52U;
	static uint8_t x84 = 28U;
	int32_t t20 = 1354416;

    t20 = ((x81&(x82==x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MIN;
	static uint16_t x86 = 382U;
	uint16_t x87 = 6U;
	int64_t x88 = INT64_MIN;
	volatile int32_t t21 = -1325384;

    t21 = ((x85&(x86==x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 16535278883743LLU;
	int64_t x90 = -1LL;
	int32_t x91 = INT32_MIN;
	volatile int32_t t22 = -5707712;

    t22 = ((x89&(x90==x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MIN;
	int32_t x94 = -1;
	int16_t x95 = -1;
	int16_t x96 = -1;
	static volatile int32_t t23 = 4;

    t23 = ((x93&(x94==x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x97 = 3197613704LLU;
	static int16_t x98 = -1;
	uint16_t x99 = 3560U;
	volatile int32_t t24 = -853851539;

    t24 = ((x97&(x98==x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = 433866;
	uint32_t x102 = 209U;
	int16_t x103 = -66;
	volatile int8_t x104 = -1;
	volatile int32_t t25 = -2663;

    t25 = ((x101&(x102==x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 76U;
	volatile int16_t x106 = -1;
	volatile uint32_t x107 = 1558156468U;
	int64_t x108 = -1848776345069LL;
	volatile int32_t t26 = 37049;

    t26 = ((x105&(x106==x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x110 = -1;
	volatile uint16_t x111 = 1U;
	int32_t x112 = INT32_MIN;
	static int32_t t27 = -132;

    t27 = ((x109&(x110==x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = UINT16_MAX;
	volatile int8_t x114 = -12;
	int32_t x115 = INT32_MAX;
	static volatile int8_t x116 = 1;
	static int32_t t28 = 524;

    t28 = ((x113&(x114==x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x117 = -1;
	uint8_t x118 = 3U;
	uint32_t x119 = 1080257187U;
	static volatile int8_t x120 = INT8_MAX;
	int32_t t29 = -20062;

    t29 = ((x117&(x118==x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int8_t x121 = INT8_MIN;
	uint64_t x122 = UINT64_MAX;
	uint16_t x123 = 7U;
	uint16_t x124 = 20U;
	int32_t t30 = -501677;

    t30 = ((x121&(x122==x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = UINT8_MAX;
	int8_t x127 = 14;

    t31 = ((x125&(x126==x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	int64_t x130 = -1LL;
	int16_t x132 = INT16_MAX;
	int32_t t32 = -1854562;

    t32 = ((x129&(x130==x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = 3;
	volatile int64_t x134 = 47746182224623LL;
	static volatile int8_t x136 = INT8_MAX;
	static int32_t t33 = 25043;

    t33 = ((x133&(x134==x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x137 = -26;
	int8_t x138 = INT8_MIN;
	uint16_t x139 = UINT16_MAX;
	int64_t x140 = 998010732456876031LL;
	volatile int32_t t34 = 6;

    t34 = ((x137&(x138==x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x143 = INT16_MIN;
	uint8_t x144 = 5U;
	volatile int32_t t35 = 2051584;

    t35 = ((x141&(x142==x143))==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = 3523U;
	uint16_t x146 = UINT16_MAX;
	uint16_t x147 = 341U;
	int32_t x148 = 25408;
	volatile int32_t t36 = -4691482;

    t36 = ((x145&(x146==x147))==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x149 = 4U;
	volatile uint32_t x151 = 12295572U;
	uint32_t x152 = UINT32_MAX;

    t37 = ((x149&(x150==x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = -5;
	uint8_t x154 = 3U;
	static int8_t x155 = INT8_MIN;
	int8_t x156 = -28;
	int32_t t38 = 862;

    t38 = ((x153&(x154==x155))==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x158 = 2088U;
	volatile int32_t x160 = -95003292;
	static volatile int32_t t39 = 208302;

    t39 = ((x157&(x158==x159))==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = 1U;
	int64_t x162 = INT64_MAX;
	int32_t x163 = -340;
	int16_t x164 = INT16_MIN;
	volatile int32_t t40 = -3917154;

    t40 = ((x161&(x162==x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x166 = 8398317U;
	int32_t x168 = INT32_MAX;
	volatile int32_t t41 = 845597;

    t41 = ((x165&(x166==x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MAX;
	uint8_t x170 = UINT8_MAX;
	static int32_t x171 = INT32_MIN;
	volatile int8_t x172 = -1;

    t42 = ((x169&(x170==x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = 3562130LL;
	volatile int32_t x174 = INT32_MIN;
	volatile int32_t x175 = 0;
	static int32_t t43 = -18165;

    t43 = ((x173&(x174==x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MIN;
	uint16_t x178 = UINT16_MAX;
	uint64_t x179 = 413LLU;

    t44 = ((x177&(x178==x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x181 = -1;
	int32_t x182 = -999;
	uint8_t x184 = 86U;
	int32_t t45 = 22;

    t45 = ((x181&(x182==x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x185 = -27202636059LL;
	uint16_t x186 = 26U;
	uint32_t x187 = 202519U;
	int32_t t46 = -112519167;

    t46 = ((x185&(x186==x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x190 = INT8_MIN;
	int8_t x191 = INT8_MAX;
	static int64_t x192 = INT64_MIN;
	static int32_t t47 = 2023202;

    t47 = ((x189&(x190==x191))==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 3104409LLU;
	int8_t x194 = INT8_MAX;
	int32_t x196 = INT32_MIN;
	int32_t t48 = 12;

    t48 = ((x193&(x194==x195))==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int64_t x197 = -1LL;
	int8_t x198 = INT8_MAX;
	int16_t x199 = INT16_MIN;
	volatile int16_t x200 = -2859;
	int32_t t49 = 215;

    t49 = ((x197&(x198==x199))==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MAX;
	int64_t x203 = INT64_MIN;
	static int32_t x204 = INT32_MIN;
	volatile int32_t t50 = 3809298;

    t50 = ((x201&(x202==x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x205 = 45U;
	uint32_t x206 = 2402U;
	volatile int32_t x207 = -1;
	uint64_t x208 = 221259873602413LLU;

    t51 = ((x205&(x206==x207))==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x210 = INT16_MIN;
	volatile int16_t x212 = INT16_MAX;
	int32_t t52 = 22818;

    t52 = ((x209&(x210==x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x214 = 2466U;
	int64_t x215 = -29272761578LL;
	int32_t t53 = 73230;

    t53 = ((x213&(x214==x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x217 = INT32_MIN;
	static int8_t x218 = -29;
	volatile uint32_t x219 = UINT32_MAX;
	int32_t x220 = INT32_MAX;
	volatile int32_t t54 = 1511144;

    t54 = ((x217&(x218==x219))==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x224 = 18U;
	int32_t t55 = -3;

    t55 = ((x221&(x222==x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x225 = 26U;
	int32_t x226 = INT32_MIN;
	int8_t x227 = -1;
	int8_t x228 = INT8_MIN;
	volatile int32_t t56 = 1809086;

    t56 = ((x225&(x226==x227))==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MIN;
	static uint16_t x230 = 808U;
	volatile int8_t x231 = -2;
	int64_t x232 = -7249147348727LL;
	int32_t t57 = -391;

    t57 = ((x229&(x230==x231))==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = 62U;
	int8_t x235 = -1;

    t58 = ((x233&(x234==x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x237 = 16322016;
	static uint8_t x238 = 0U;
	volatile uint8_t x239 = UINT8_MAX;
	int16_t x240 = -1;
	int32_t t59 = -30336;

    t59 = ((x237&(x238==x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x241 = 195883185883024LLU;
	int32_t x242 = -19320;
	static int64_t x243 = -1LL;
	volatile int64_t x244 = 224482151244LL;
	int32_t t60 = 876303;

    t60 = ((x241&(x242==x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x245 = 148603198035355645LLU;
	int16_t x246 = INT16_MIN;
	int16_t x247 = -1;
	static volatile int16_t x248 = 3335;
	volatile int32_t t61 = 21;

    t61 = ((x245&(x246==x247))==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x249 = 415399368LLU;
	static int32_t x250 = 0;
	volatile int8_t x251 = INT8_MIN;
	static int32_t t62 = -26688711;

    t62 = ((x249&(x250==x251))==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = 1622861022736LLU;
	volatile uint8_t x254 = UINT8_MAX;
	int64_t x255 = -1LL;
	int32_t t63 = -241608792;

    t63 = ((x253&(x254==x255))==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = -1;
	uint64_t x258 = 696LLU;
	int32_t x259 = -1107;
	int8_t x260 = -1;
	int32_t t64 = 940462051;

    t64 = ((x257&(x258==x259))==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = -701276729709LL;
	uint32_t x262 = 128703U;
	uint64_t x264 = 7448676041LLU;
	int32_t t65 = -87;

    t65 = ((x261&(x262==x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x266 = -15;
	int16_t x267 = INT16_MIN;
	int64_t x268 = INT64_MIN;

    t66 = ((x265&(x266==x267))==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = UINT64_MAX;
	uint8_t x271 = UINT8_MAX;
	volatile uint8_t x272 = 58U;
	int32_t t67 = 544;

    t67 = ((x269&(x270==x271))==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x273 = 2;
	int32_t x275 = INT32_MIN;
	int64_t x276 = INT64_MAX;
	int32_t t68 = 8816;

    t68 = ((x273&(x274==x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x278 = INT64_MAX;
	volatile int64_t x279 = INT64_MIN;
	int8_t x280 = -1;
	volatile int32_t t69 = -1;

    t69 = ((x277&(x278==x279))==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x281 = 8;
	volatile int16_t x283 = 45;
	volatile int32_t t70 = -1;

    t70 = ((x281&(x282==x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x285 = 0U;
	volatile int32_t x286 = INT32_MAX;
	int16_t x287 = INT16_MIN;
	int32_t t71 = -9741;

    t71 = ((x285&(x286==x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x289 = -7617;
	int8_t x290 = INT8_MAX;
	static volatile int64_t x291 = INT64_MIN;
	int8_t x292 = 0;
	volatile int32_t t72 = 11;

    t72 = ((x289&(x290==x291))==x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MIN;
	int64_t x295 = -17869679029LL;
	volatile int16_t x296 = -1;
	int32_t t73 = 3329296;

    t73 = ((x293&(x294==x295))==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x298 = 538505623;
	static uint8_t x299 = UINT8_MAX;
	volatile int32_t x300 = 13390920;

    t74 = ((x297&(x298==x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x301 = 7U;
	volatile int32_t x302 = INT32_MIN;
	int8_t x303 = INT8_MIN;
	uint8_t x304 = 0U;

    t75 = ((x301&(x302==x303))==x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x305 = 378108;
	int64_t x306 = INT64_MAX;
	int32_t x308 = INT32_MIN;
	volatile int32_t t76 = -1;

    t76 = ((x305&(x306==x307))==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MIN;
	static volatile int16_t x311 = INT16_MAX;
	int32_t x312 = INT32_MIN;
	volatile int32_t t77 = -472396722;

    t77 = ((x309&(x310==x311))==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x313 = 2U;
	int8_t x316 = 1;
	volatile int32_t t78 = -1;

    t78 = ((x313&(x314==x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x317 = UINT8_MAX;
	static uint16_t x318 = 17U;
	volatile uint8_t x319 = 62U;
	int8_t x320 = 54;
	int32_t t79 = -356;

    t79 = ((x317&(x318==x319))==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = -1LL;
	int32_t x322 = -1;
	static int8_t x323 = 0;
	int32_t x324 = -1;
	volatile int32_t t80 = 101992;

    t80 = ((x321&(x322==x323))==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x325 = -406;
	int64_t x326 = 4256026LL;
	static int8_t x327 = INT8_MIN;
	static volatile int16_t x328 = 1;
	int32_t t81 = 6;

    t81 = ((x325&(x326==x327))==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = UINT16_MAX;
	uint32_t x330 = UINT32_MAX;
	uint8_t x331 = UINT8_MAX;
	int32_t x332 = INT32_MAX;
	int32_t t82 = -976;

    t82 = ((x329&(x330==x331))==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = -1LL;
	uint32_t x334 = 7U;
	int32_t x335 = INT32_MIN;
	int16_t x336 = -1;
	static int32_t t83 = -1200;

    t83 = ((x333&(x334==x335))==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = 135U;
	int64_t x338 = -1LL;
	int64_t x339 = INT64_MIN;
	int32_t x340 = -1;
	volatile int32_t t84 = 8150;

    t84 = ((x337&(x338==x339))==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = 0U;
	volatile int8_t x342 = -1;
	int64_t x344 = INT64_MAX;

    t85 = ((x341&(x342==x343))==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = 1937384283U;
	volatile int8_t x346 = INT8_MAX;
	static int16_t x347 = -20;
	static int32_t x348 = -5;
	static int32_t t86 = 98708;

    t86 = ((x345&(x346==x347))==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x349 = INT32_MIN;
	volatile int64_t x350 = 4208443808LL;
	static int64_t x351 = INT64_MIN;
	uint64_t x352 = UINT64_MAX;

    t87 = ((x349&(x350==x351))==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x353 = INT16_MIN;
	static int64_t x355 = -1LL;

    t88 = ((x353&(x354==x355))==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = INT64_MIN;
	int16_t x358 = INT16_MAX;
	int8_t x359 = 58;
	uint64_t x360 = UINT64_MAX;
	volatile int32_t t89 = 1;

    t89 = ((x357&(x358==x359))==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -1;
	static int16_t x362 = INT16_MAX;
	volatile int32_t x363 = INT32_MIN;
	uint64_t x364 = 466274LLU;

    t90 = ((x361&(x362==x363))==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x365 = -1LL;
	uint8_t x366 = UINT8_MAX;
	int16_t x367 = -6891;
	int16_t x368 = INT16_MAX;
	volatile int32_t t91 = 1522;

    t91 = ((x365&(x366==x367))==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x370 = -1LL;
	int16_t x371 = INT16_MIN;
	uint16_t x372 = 18545U;
	int32_t t92 = 133;

    t92 = ((x369&(x370==x371))==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = -1;
	int64_t x375 = INT64_MAX;
	static int64_t x376 = INT64_MIN;
	static int32_t t93 = 28;

    t93 = ((x373&(x374==x375))==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x377 = 215;
	volatile int16_t x379 = INT16_MAX;
	static int32_t x380 = INT32_MAX;
	static volatile int32_t t94 = 151480740;

    t94 = ((x377&(x378==x379))==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x381 = -1;
	uint8_t x382 = 7U;
	int64_t x383 = INT64_MAX;
	uint8_t x384 = 6U;

    t95 = ((x381&(x382==x383))==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x385 = INT8_MIN;
	int64_t x386 = INT64_MAX;
	uint8_t x387 = 0U;
	uint8_t x388 = 81U;

    t96 = ((x385&(x386==x387))==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = -33072300;
	int64_t x390 = -1LL;
	int64_t x392 = 84669124740LL;
	int32_t t97 = -64937404;

    t97 = ((x389&(x390==x391))==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 86LLU;
	int16_t x394 = -316;
	int8_t x395 = INT8_MIN;
	static volatile uint16_t x396 = UINT16_MAX;
	volatile int32_t t98 = -1424602;

    t98 = ((x393&(x394==x395))==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = 22237303U;
	static int64_t x399 = INT64_MAX;

    t99 = ((x397&(x398==x399))==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = 4U;
	static uint16_t x402 = 3U;
	uint64_t x403 = 2LLU;
	int8_t x404 = INT8_MIN;
	int32_t t100 = -11377101;

    t100 = ((x401&(x402==x403))==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = -1;
	volatile int32_t x406 = -1;
	int32_t x407 = INT32_MIN;
	int16_t x408 = INT16_MIN;

    t101 = ((x405&(x406==x407))==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = 0;
	uint32_t x410 = UINT32_MAX;
	int8_t x411 = INT8_MIN;
	static volatile uint8_t x412 = 1U;
	int32_t t102 = -58069228;

    t102 = ((x409&(x410==x411))==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = 3U;
	int8_t x414 = INT8_MAX;
	static int32_t x416 = 1452106;

    t103 = ((x413&(x414==x415))==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 24U;
	volatile uint16_t x418 = 466U;
	int16_t x419 = INT16_MAX;
	int16_t x420 = -1;
	volatile int32_t t104 = 2327;

    t104 = ((x417&(x418==x419))==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = INT8_MIN;
	int8_t x422 = -2;
	int64_t x423 = INT64_MIN;
	static int8_t x424 = INT8_MAX;
	static volatile int32_t t105 = -514185793;

    t105 = ((x421&(x422==x423))==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x425 = 27214354677LLU;
	static int64_t x427 = 1275462633262LL;
	int64_t x428 = -421691060LL;
	int32_t t106 = 7443;

    t106 = ((x425&(x426==x427))==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x430 = 33017659;
	int16_t x432 = INT16_MAX;
	int32_t t107 = 3233;

    t107 = ((x429&(x430==x431))==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = 149U;
	static uint8_t x434 = UINT8_MAX;
	int64_t x435 = -32132423LL;
	static int32_t t108 = 0;

    t108 = ((x433&(x434==x435))==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x438 = 1787U;
	int32_t t109 = 182;

    t109 = ((x437&(x438==x439))==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x442 = 6U;
	volatile int32_t t110 = -7;

    t110 = ((x441&(x442==x443))==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MIN;
	volatile int8_t x446 = INT8_MIN;
	int64_t x447 = -285208666599616488LL;
	int64_t x448 = INT64_MIN;
	int32_t t111 = -12737617;

    t111 = ((x445&(x446==x447))==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = 1339LL;
	uint8_t x451 = 5U;
	volatile int32_t t112 = -5;

    t112 = ((x449&(x450==x451))==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MIN;
	volatile int64_t x454 = INT64_MIN;
	static int64_t x455 = -1LL;
	int16_t x456 = INT16_MAX;
	int32_t t113 = -299267439;

    t113 = ((x453&(x454==x455))==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 1U;
	uint8_t x458 = 2U;
	int32_t x459 = INT32_MIN;
	uint64_t x460 = 461488LLU;

    t114 = ((x457&(x458==x459))==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = 661609289975LL;
	uint64_t x462 = 22249297479783LLU;
	static volatile int8_t x463 = INT8_MIN;
	static int8_t x464 = -1;
	int32_t t115 = -571719640;

    t115 = ((x461&(x462==x463))==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x468 = INT32_MIN;

    t116 = ((x465&(x466==x467))==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x470 = 166LLU;
	int32_t x471 = INT32_MIN;
	static int8_t x472 = 2;
	int32_t t117 = -19853;

    t117 = ((x469&(x470==x471))==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -1;
	int16_t x474 = INT16_MIN;
	volatile uint32_t x475 = 6318U;
	int32_t t118 = 3422;

    t118 = ((x473&(x474==x475))==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x477 = 321473624602599LLU;
	volatile int16_t x478 = INT16_MIN;
	uint16_t x479 = 896U;
	int64_t x480 = INT64_MIN;
	volatile int32_t t119 = 68;

    t119 = ((x477&(x478==x479))==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 46182213LLU;
	static volatile int8_t x482 = -1;
	static int64_t x483 = INT64_MIN;
	volatile int32_t t120 = 1537103;

    t120 = ((x481&(x482==x483))==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	volatile int8_t x486 = INT8_MIN;
	int8_t x487 = INT8_MIN;
	int16_t x488 = -893;
	int32_t t121 = 9934623;

    t121 = ((x485&(x486==x487))==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = UINT32_MAX;
	uint16_t x490 = UINT16_MAX;
	volatile int16_t x491 = 0;
	int32_t x492 = 1012;

    t122 = ((x489&(x490==x491))==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = -15497;
	static int32_t x494 = 33232834;
	uint64_t x496 = 106LLU;
	volatile int32_t t123 = 0;

    t123 = ((x493&(x494==x495))==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = -1;
	int8_t x498 = 12;
	int64_t x500 = INT64_MIN;
	static int32_t t124 = -119;

    t124 = ((x497&(x498==x499))==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = 285;
	volatile uint64_t x503 = UINT64_MAX;
	int64_t x504 = -1LL;
	volatile int32_t t125 = -3590671;

    t125 = ((x501&(x502==x503))==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	uint8_t x506 = 1U;
	static int32_t x507 = INT32_MAX;
	int64_t x508 = INT64_MIN;
	volatile int32_t t126 = 93456525;

    t126 = ((x505&(x506==x507))==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MAX;
	int8_t x510 = -1;
	volatile int8_t x511 = INT8_MAX;
	int32_t t127 = 0;

    t127 = ((x509&(x510==x511))==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x513 = -1;
	uint8_t x514 = UINT8_MAX;
	static volatile uint8_t x515 = UINT8_MAX;
	static uint64_t x516 = 414389157LLU;

    t128 = ((x513&(x514==x515))==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x517 = 6U;
	uint32_t x518 = 304384664U;
	uint64_t x519 = UINT64_MAX;
	int16_t x520 = INT16_MIN;

    t129 = ((x517&(x518==x519))==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x521 = 288566335368876LL;
	static int16_t x522 = -6;
	uint64_t x523 = UINT64_MAX;
	uint32_t x524 = UINT32_MAX;

    t130 = ((x521&(x522==x523))==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x526 = INT32_MIN;
	uint8_t x527 = 2U;
	int32_t t131 = 850605;

    t131 = ((x525&(x526==x527))==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MAX;
	volatile int32_t x530 = INT32_MAX;
	static int64_t x531 = INT64_MIN;
	int16_t x532 = INT16_MIN;
	int32_t t132 = 68;

    t132 = ((x529&(x530==x531))==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x533 = 1U;
	uint16_t x534 = 23742U;
	volatile int8_t x535 = INT8_MIN;
	int16_t x536 = INT16_MAX;
	static int32_t t133 = -48;

    t133 = ((x533&(x534==x535))==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x537 = 299265695552LLU;
	uint8_t x538 = 0U;
	int32_t x539 = INT32_MIN;
	volatile int8_t x540 = INT8_MIN;
	static volatile int32_t t134 = -1632344;

    t134 = ((x537&(x538==x539))==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = 60LL;
	int32_t x542 = INT32_MIN;
	uint32_t x543 = 177U;
	int32_t x544 = INT32_MAX;
	volatile int32_t t135 = 104907245;

    t135 = ((x541&(x542==x543))==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = UINT64_MAX;
	int64_t x547 = -142584658766LL;
	int8_t x548 = INT8_MIN;
	volatile int32_t t136 = -29003;

    t136 = ((x545&(x546==x547))==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 15U;
	uint8_t x550 = 48U;
	volatile int16_t x551 = INT16_MIN;
	volatile int32_t t137 = -166152;

    t137 = ((x549&(x550==x551))==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = 9106;
	uint16_t x554 = UINT16_MAX;
	uint8_t x555 = 20U;
	int32_t x556 = 1;
	int32_t t138 = 0;

    t138 = ((x553&(x554==x555))==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint32_t x557 = 12912U;
	int16_t x558 = 3;
	uint64_t x559 = UINT64_MAX;

    t139 = ((x557&(x558==x559))==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 23596591417389LLU;
	int8_t x562 = -1;
	int64_t x563 = 278023518042227LL;
	static volatile int16_t x564 = 5;
	int32_t t140 = 38323944;

    t140 = ((x561&(x562==x563))==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x566 = INT64_MAX;
	uint16_t x567 = UINT16_MAX;
	volatile uint64_t x568 = 128844937012307505LLU;
	volatile int32_t t141 = 1116;

    t141 = ((x565&(x566==x567))==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x571 = 82639633162LLU;
	int32_t t142 = -2;

    t142 = ((x569&(x570==x571))==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x573 = -1LL;
	uint64_t x574 = 1797096711LLU;
	volatile int32_t x575 = -1;
	volatile int16_t x576 = INT16_MIN;

    t143 = ((x573&(x574==x575))==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MIN;
	int32_t x578 = INT32_MAX;
	static volatile uint64_t x579 = 146083LLU;
	int16_t x580 = 4438;
	volatile int32_t t144 = -7;

    t144 = ((x577&(x578==x579))==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int32_t x582 = 1;
	int64_t x583 = 0LL;
	static int8_t x584 = INT8_MAX;
	volatile int32_t t145 = 0;

    t145 = ((x581&(x582==x583))==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MAX;
	int32_t x586 = 65;
	uint32_t x587 = 3276251U;
	volatile int32_t t146 = -1940;

    t146 = ((x585&(x586==x587))==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x589 = 758848748U;
	static uint32_t x590 = 14U;
	uint8_t x591 = 0U;
	int64_t x592 = INT64_MIN;
	volatile int32_t t147 = -2;

    t147 = ((x589&(x590==x591))==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x594 = INT64_MIN;
	volatile int8_t x595 = INT8_MIN;
	volatile int8_t x596 = -1;

    t148 = ((x593&(x594==x595))==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = 255;
	static volatile uint16_t x598 = 0U;
	uint16_t x599 = UINT16_MAX;
	volatile int32_t t149 = 28036;

    t149 = ((x597&(x598==x599))==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MIN;
	uint16_t x603 = UINT16_MAX;
	uint8_t x604 = 1U;
	volatile int32_t t150 = 4224;

    t150 = ((x601&(x602==x603))==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x606 = UINT16_MAX;
	int32_t x608 = INT32_MIN;
	int32_t t151 = -511591880;

    t151 = ((x605&(x606==x607))==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x611 = UINT64_MAX;
	int64_t x612 = INT64_MIN;
	static volatile int32_t t152 = -997450;

    t152 = ((x609&(x610==x611))==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x614 = -1728420619622LL;
	uint32_t x615 = UINT32_MAX;
	static int32_t t153 = -558978513;

    t153 = ((x613&(x614==x615))==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = 83U;
	int32_t x618 = -1;
	volatile int64_t x619 = 3402368710632LL;
	int16_t x620 = INT16_MIN;
	int32_t t154 = 2073119;

    t154 = ((x617&(x618==x619))==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x622 = 0U;
	int32_t x624 = INT32_MIN;
	volatile int32_t t155 = -4818;

    t155 = ((x621&(x622==x623))==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x626 = 8258350LLU;
	volatile int32_t x627 = INT32_MIN;
	static int32_t t156 = 142070;

    t156 = ((x625&(x626==x627))==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x630 = INT16_MAX;
	int32_t x631 = -1;

    t157 = ((x629&(x630==x631))==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = 1638057;
	int16_t x634 = -1;
	volatile uint32_t x635 = UINT32_MAX;
	static int16_t x636 = INT16_MIN;
	volatile int32_t t158 = 98010262;

    t158 = ((x633&(x634==x635))==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x637 = 93;
	static volatile uint64_t x638 = 3796020LLU;
	uint64_t x640 = 38200044138LLU;
	volatile int32_t t159 = 165;

    t159 = ((x637&(x638==x639))==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x641 = 188484LLU;
	uint32_t x642 = UINT32_MAX;
	uint8_t x643 = 97U;
	int16_t x644 = -1;
	volatile int32_t t160 = 16225;

    t160 = ((x641&(x642==x643))==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x645 = INT32_MIN;
	static int8_t x646 = 2;
	uint16_t x648 = 0U;
	static int32_t t161 = -450;

    t161 = ((x645&(x646==x647))==x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x651 = 7090;
	static int64_t x652 = INT64_MAX;
	static volatile int32_t t162 = 13418;

    t162 = ((x649&(x650==x651))==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x654 = -1;
	static int16_t x655 = INT16_MIN;
	int8_t x656 = -1;

    t163 = ((x653&(x654==x655))==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x657 = -1LL;
	volatile uint16_t x658 = UINT16_MAX;
	uint64_t x659 = 6282LLU;
	uint16_t x660 = UINT16_MAX;
	int32_t t164 = -113;

    t164 = ((x657&(x658==x659))==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x661 = UINT8_MAX;
	int8_t x662 = INT8_MIN;
	int16_t x664 = INT16_MAX;
	volatile int32_t t165 = 5817526;

    t165 = ((x661&(x662==x663))==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x666 = -1;
	int8_t x667 = INT8_MIN;
	int8_t x668 = INT8_MIN;
	int32_t t166 = 4;

    t166 = ((x665&(x666==x667))==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -80155863;
	volatile int64_t x670 = INT64_MIN;
	int32_t x671 = INT32_MIN;

    t167 = ((x669&(x670==x671))==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x673 = 14U;
	uint8_t x674 = 17U;
	uint64_t x676 = 1368135999360179179LLU;
	volatile int32_t t168 = -1;

    t168 = ((x673&(x674==x675))==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x679 = 9757U;
	int32_t t169 = 5047;

    t169 = ((x677&(x678==x679))==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MIN;
	int64_t x682 = -1LL;
	int32_t x683 = -1;
	int32_t t170 = 5295;

    t170 = ((x681&(x682==x683))==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x685 = INT16_MIN;
	int32_t x686 = INT32_MIN;
	int32_t x687 = -854492;
	static int64_t x688 = 1339679462LL;
	volatile int32_t t171 = 3010;

    t171 = ((x685&(x686==x687))==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x689 = -1497;
	static uint32_t x690 = 667598U;
	uint32_t x691 = UINT32_MAX;
	int16_t x692 = -245;
	volatile int32_t t172 = 593668;

    t172 = ((x689&(x690==x691))==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x694 = INT32_MIN;
	int64_t x695 = INT64_MAX;
	volatile int32_t x696 = INT32_MAX;

    t173 = ((x693&(x694==x695))==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = -1;
	static int64_t x698 = INT64_MAX;
	uint64_t x700 = 11355545734623LLU;
	int32_t t174 = -654303494;

    t174 = ((x697&(x698==x699))==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x702 = -4;
	int64_t x703 = -39607265263LL;
	int16_t x704 = 24;

    t175 = ((x701&(x702==x703))==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x705 = UINT64_MAX;
	static volatile int32_t x706 = -166783842;
	int32_t x707 = -256958;
	int8_t x708 = -1;
	static int32_t t176 = 4039582;

    t176 = ((x705&(x706==x707))==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = 11U;
	static uint32_t x710 = UINT32_MAX;
	volatile int8_t x711 = INT8_MIN;
	int64_t x712 = INT64_MAX;
	volatile int32_t t177 = 30374810;

    t177 = ((x709&(x710==x711))==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x714 = -1;
	static uint64_t x715 = UINT64_MAX;
	int32_t t178 = 1;

    t178 = ((x713&(x714==x715))==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = -1;
	uint8_t x718 = UINT8_MAX;
	int32_t t179 = -15908731;

    t179 = ((x717&(x718==x719))==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 560874U;
	uint64_t x722 = UINT64_MAX;
	int16_t x723 = 61;
	uint32_t x724 = UINT32_MAX;
	volatile int32_t t180 = 4756869;

    t180 = ((x721&(x722==x723))==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x725 = -3749;
	int64_t x726 = INT64_MIN;
	static uint16_t x727 = 31219U;
	int16_t x728 = INT16_MIN;

    t181 = ((x725&(x726==x727))==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = INT8_MIN;
	int32_t x730 = -1;
	static int16_t x731 = -1;
	int32_t t182 = 9968;

    t182 = ((x729&(x730==x731))==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = -1LL;
	uint8_t x735 = 27U;
	volatile int16_t x736 = INT16_MAX;
	static int32_t t183 = 1;

    t183 = ((x733&(x734==x735))==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = INT32_MIN;
	static int32_t x738 = INT32_MIN;
	int32_t x740 = -7075;
	int32_t t184 = 84961264;

    t184 = ((x737&(x738==x739))==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MAX;
	volatile int64_t x742 = INT64_MIN;
	uint16_t x744 = 136U;
	volatile int32_t t185 = -30851;

    t185 = ((x741&(x742==x743))==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MAX;
	static volatile int32_t x746 = INT32_MAX;
	static int64_t x747 = -1LL;
	int32_t t186 = -207;

    t186 = ((x745&(x746==x747))==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x749 = -1LL;
	uint8_t x751 = 2U;
	static int16_t x752 = 649;
	volatile int32_t t187 = 1;

    t187 = ((x749&(x750==x751))==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x753 = 0;
	int64_t x754 = 89LL;
	int32_t x755 = INT32_MAX;
	static int32_t x756 = INT32_MIN;
	static int32_t t188 = 10;

    t188 = ((x753&(x754==x755))==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x758 = 65072LLU;
	int16_t x760 = INT16_MIN;
	static int32_t t189 = 1;

    t189 = ((x757&(x758==x759))==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = INT16_MAX;
	static int32_t x762 = INT32_MIN;
	volatile int16_t x763 = INT16_MIN;
	int32_t t190 = -427172;

    t190 = ((x761&(x762==x763))==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x765 = -1LL;
	int8_t x766 = INT8_MAX;
	static uint8_t x767 = UINT8_MAX;
	int16_t x768 = 1484;

    t191 = ((x765&(x766==x767))==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = 38U;
	volatile uint32_t x770 = 1495U;
	volatile int32_t x771 = -1;

    t192 = ((x769&(x770==x771))==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = UINT8_MAX;
	static volatile uint32_t x775 = UINT32_MAX;
	static volatile int8_t x776 = INT8_MAX;
	volatile int32_t t193 = 170963104;

    t193 = ((x773&(x774==x775))==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x777 = INT32_MAX;
	uint8_t x778 = 97U;
	uint64_t x780 = UINT64_MAX;
	int32_t t194 = -31095;

    t194 = ((x777&(x778==x779))==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x781 = -1;
	volatile int64_t x782 = -28367522773099356LL;
	int8_t x783 = INT8_MIN;
	int16_t x784 = INT16_MIN;

    t195 = ((x781&(x782==x783))==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x785 = INT64_MIN;
	static uint16_t x786 = UINT16_MAX;
	volatile uint8_t x787 = 11U;
	int32_t t196 = -389666254;

    t196 = ((x785&(x786==x787))==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x789 = 34U;
	uint64_t x790 = UINT64_MAX;
	int8_t x791 = INT8_MIN;
	uint16_t x792 = UINT16_MAX;

    t197 = ((x789&(x790==x791))==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = 5U;
	uint8_t x795 = 8U;
	int64_t x796 = -1LL;

    t198 = ((x793&(x794==x795))==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = 0;
	int8_t x798 = INT8_MIN;
	int64_t x799 = 318LL;
	uint16_t x800 = 7643U;
	int32_t t199 = -25320799;

    t199 = ((x797&(x798==x799))==x800);

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


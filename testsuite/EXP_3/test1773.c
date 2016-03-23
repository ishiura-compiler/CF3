
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

volatile int8_t x1 = INT8_MAX;
uint16_t x3 = 99U;
uint8_t x24 = 1U;
int32_t x25 = INT32_MIN;
uint8_t x28 = 1U;
int32_t t4 = 738;
volatile int8_t x31 = 7;
static int16_t x36 = 13;
volatile int32_t t8 = 5824;
static int64_t x48 = 104681753648830832LL;
static int32_t t9 = 238206;
static int16_t x60 = -1;
volatile int16_t x69 = -1;
volatile int8_t x70 = -12;
volatile int16_t x76 = 16106;
int16_t x86 = INT16_MIN;
uint8_t x90 = UINT8_MAX;
int16_t x94 = 26;
static volatile int32_t t19 = -1;
int16_t x97 = INT16_MIN;
int32_t t20 = -230864;
volatile uint32_t x106 = UINT32_MAX;
uint32_t x107 = 0U;
int32_t t21 = -35512852;
uint16_t x110 = 46U;
volatile int32_t x129 = -1;
uint16_t x130 = 511U;
int16_t x140 = 1083;
static int32_t x142 = -1;
uint8_t x149 = 14U;
volatile uint32_t x152 = UINT32_MAX;
static volatile int32_t t34 = -283;
static uint8_t x174 = 15U;
uint8_t x175 = 0U;
static uint64_t x179 = 42LLU;
int8_t x182 = 2;
volatile int32_t t37 = 7153;
int16_t x188 = INT16_MAX;
int32_t t38 = 4623;
int8_t x198 = -1;
int32_t x200 = -1;
static int32_t t41 = -28306;
int64_t x205 = INT64_MIN;
int16_t x206 = INT16_MAX;
volatile uint16_t x207 = UINT16_MAX;
static int32_t t43 = -937125;
int64_t x214 = 6817096LL;
volatile int32_t t46 = 39;
static uint32_t x229 = 0U;
int8_t x230 = -1;
int32_t x231 = -241;
uint16_t x238 = UINT16_MAX;
int16_t x246 = INT16_MIN;
int32_t x253 = -1;
int8_t x254 = -1;
int8_t x257 = 25;
uint8_t x263 = 121U;
volatile int32_t t56 = -2857355;
volatile int32_t x273 = INT32_MIN;
int32_t x283 = INT32_MIN;
volatile int32_t t59 = 24;
static int8_t x287 = 44;
volatile int32_t t62 = -907;
static uint8_t x306 = 22U;
uint16_t x310 = 0U;
volatile int32_t x312 = 660615;
uint8_t x314 = UINT8_MAX;
uint64_t x317 = 25871LLU;
int8_t x323 = -1;
volatile uint16_t x335 = UINT16_MAX;
uint16_t x354 = UINT16_MAX;
static int16_t x357 = INT16_MAX;
static uint64_t x362 = UINT64_MAX;
int16_t x371 = INT16_MIN;
static volatile int32_t t79 = 60;
uint32_t x379 = 22764461U;
uint16_t x381 = 138U;
int16_t x384 = 1159;
uint64_t x387 = UINT64_MAX;
int32_t x391 = 2858;
volatile int32_t t84 = 1;
uint32_t x401 = 60700825U;
volatile int16_t x413 = INT16_MAX;
int32_t x419 = 320559803;
int8_t x423 = INT8_MIN;
static int32_t t90 = -25624605;
int32_t x427 = -123908;
int8_t x432 = -1;
int32_t t92 = -1076589;
static int32_t t93 = 9997046;
uint8_t x450 = 1U;
volatile int16_t x454 = -1;
volatile int32_t t95 = 1;
uint64_t x463 = UINT64_MAX;
volatile int32_t t98 = 154;
volatile uint32_t x469 = 4239U;
int8_t x470 = INT8_MIN;
int32_t x480 = -1;
static int64_t x486 = -119236091LL;
volatile int32_t t103 = 27415963;
int16_t x497 = INT16_MIN;
volatile int32_t x499 = INT32_MIN;
int32_t x502 = -13729;
int16_t x504 = -1;
uint16_t x506 = 14U;
static int64_t x507 = INT64_MAX;
int32_t t108 = 33094013;
int16_t x521 = -5;
uint32_t x538 = 37U;
int32_t t111 = -65441;
int32_t x561 = -3771;
static volatile int64_t x563 = INT64_MAX;
int32_t t115 = -2300727;
int32_t x572 = 74888;
static volatile int32_t t116 = 13024645;
uint64_t x574 = 746648LLU;
volatile uint16_t x576 = UINT16_MAX;
volatile uint16_t x581 = 0U;
int8_t x582 = INT8_MIN;
volatile int32_t t122 = 2997;
static uint8_t x597 = 2U;
int16_t x599 = INT16_MIN;
int32_t x603 = INT32_MIN;
volatile int32_t t125 = 148;
uint64_t x612 = 1609689LLU;
volatile uint32_t x614 = UINT32_MAX;
int64_t x620 = INT64_MIN;
int64_t x623 = INT64_MIN;
volatile int8_t x642 = 0;
static volatile int32_t t134 = 100684875;
volatile uint8_t x656 = UINT8_MAX;
volatile int32_t t135 = -5520;
volatile int32_t t138 = 159;
volatile int8_t x671 = -1;
static uint64_t x685 = 14094LLU;
int64_t x692 = INT64_MAX;
static int32_t x695 = -30916;
int32_t t144 = 221055230;
int8_t x697 = -1;
static uint32_t x699 = UINT32_MAX;
uint32_t x700 = 69U;
volatile int8_t x705 = INT8_MIN;
static int16_t x713 = -1;
volatile int32_t t149 = -1330437;
volatile int16_t x720 = INT16_MIN;
int32_t t150 = -15347402;
uint8_t x725 = 32U;
int32_t x732 = INT32_MAX;
int64_t x735 = INT64_MIN;
int32_t t154 = -75226151;
int64_t x741 = INT64_MIN;
int32_t x746 = -1;
volatile int64_t x747 = INT64_MAX;
volatile uint64_t x754 = 6938049903865LLU;
int64_t x756 = -1LL;
volatile int16_t x760 = INT16_MIN;
static uint32_t x766 = 275327150U;
int32_t x768 = -56;
int32_t x772 = 3336309;
int32_t x775 = INT32_MAX;
int16_t x776 = 2099;
int32_t t163 = -1;
int32_t x780 = INT32_MAX;
volatile uint64_t x784 = UINT64_MAX;
int64_t x788 = INT64_MIN;
volatile int32_t t166 = -223;
volatile int64_t x791 = INT64_MIN;
volatile int8_t x792 = -1;
static volatile uint64_t x793 = UINT64_MAX;
int8_t x794 = INT8_MIN;
volatile int32_t t168 = 4362;
volatile int16_t x799 = -10959;
volatile int8_t x802 = INT8_MIN;
uint16_t x808 = 20U;
volatile int32_t t171 = -145;
volatile int32_t x809 = -5;
int8_t x820 = -13;
int32_t t175 = -1;
static int64_t x835 = -5443427LL;
int64_t x837 = INT64_MAX;
int32_t t177 = -423942;
int16_t x846 = 109;
int32_t x847 = INT32_MIN;
volatile int16_t x855 = INT16_MAX;
uint32_t x857 = 6688U;
uint16_t x862 = 1U;
int16_t x863 = INT16_MAX;
static uint64_t x869 = UINT64_MAX;
uint32_t x870 = 60782U;
uint64_t x872 = 20LLU;
volatile int8_t x873 = 36;
volatile int32_t t186 = 39075;
volatile int64_t x884 = INT64_MAX;
static int8_t x891 = INT8_MIN;
static volatile int32_t t190 = -28;
volatile int32_t t191 = 2;
int32_t t192 = -29047;
static uint16_t x914 = 19354U;
uint32_t x916 = UINT32_MAX;
static int8_t x920 = 0;
int16_t x922 = 2957;
int64_t x923 = -150LL;
int64_t x924 = INT64_MIN;
int64_t x927 = -10144LL;
static int16_t x931 = -13;
int32_t x936 = INT32_MIN;


void f0(void) {
    	static int16_t x2 = -1;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 26807740;

    t0 = ((x1+x2)>(x3<=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int32_t x13 = 1469945;
	volatile int64_t x14 = INT64_MIN;
	int32_t x15 = 242;
	int16_t x16 = INT16_MAX;
	volatile int32_t t1 = 63;

    t1 = ((x13+x14)>(x15<=x16));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x17 = INT32_MAX;
	int16_t x18 = INT16_MIN;
	int8_t x19 = INT8_MAX;
	int32_t x20 = INT32_MIN;
	int32_t t2 = -79436;

    t2 = ((x17+x18)>(x19<=x20));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x21 = UINT64_MAX;
	int64_t x22 = INT64_MAX;
	static volatile int32_t x23 = -29281798;
	int32_t t3 = 82;

    t3 = ((x21+x22)>(x23<=x24));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x26 = UINT64_MAX;
	static volatile int64_t x27 = -1LL;

    t4 = ((x25+x26)>(x27<=x28));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int16_t x29 = 1;
	int32_t x30 = 123390;
	static volatile int32_t x32 = INT32_MAX;
	static int32_t t5 = 19;

    t5 = ((x29+x30)>(x31<=x32));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x33 = UINT8_MAX;
	int8_t x34 = -6;
	int8_t x35 = -55;
	int32_t t6 = 84;

    t6 = ((x33+x34)>(x35<=x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x37 = 2;
	int64_t x38 = INT64_MIN;
	int32_t x39 = -993117740;
	int64_t x40 = INT64_MIN;
	int32_t t7 = 14169;

    t7 = ((x37+x38)>(x39<=x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x41 = 15LL;
	uint32_t x42 = 1482493469U;
	int16_t x43 = -1;
	static uint64_t x44 = 10LLU;

    t8 = ((x41+x42)>(x43<=x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = INT32_MAX;
	uint32_t x46 = UINT32_MAX;
	volatile int32_t x47 = INT32_MAX;

    t9 = ((x45+x46)>(x47<=x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x49 = INT8_MIN;
	volatile uint16_t x50 = 980U;
	volatile int16_t x51 = -1;
	int32_t x52 = INT32_MIN;
	int32_t t10 = -18072780;

    t10 = ((x49+x50)>(x51<=x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x53 = 17U;
	volatile int64_t x54 = -1LL;
	volatile uint8_t x55 = 1U;
	int64_t x56 = INT64_MIN;
	static volatile int32_t t11 = -30;

    t11 = ((x53+x54)>(x55<=x56));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = -1LL;
	int8_t x58 = 16;
	int16_t x59 = 1984;
	static int32_t t12 = 203;

    t12 = ((x57+x58)>(x59<=x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x61 = INT32_MIN;
	int32_t x62 = 15917;
	volatile int16_t x63 = 1;
	static uint64_t x64 = UINT64_MAX;
	static int32_t t13 = 11;

    t13 = ((x61+x62)>(x63<=x64));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x65 = 13U;
	volatile uint8_t x66 = 1U;
	int16_t x67 = INT16_MAX;
	volatile int8_t x68 = INT8_MIN;
	int32_t t14 = -3;

    t14 = ((x65+x66)>(x67<=x68));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x71 = INT64_MIN;
	uint32_t x72 = UINT32_MAX;
	int32_t t15 = 46802;

    t15 = ((x69+x70)>(x71<=x72));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = -1LL;
	volatile int64_t x74 = 25104342603537816LL;
	int64_t x75 = INT64_MIN;
	volatile int32_t t16 = 49282;

    t16 = ((x73+x74)>(x75<=x76));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x85 = -1;
	int16_t x87 = 1;
	int8_t x88 = INT8_MAX;
	int32_t t17 = -92106053;

    t17 = ((x85+x86)>(x87<=x88));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x89 = UINT16_MAX;
	int64_t x91 = INT64_MIN;
	static int8_t x92 = INT8_MIN;
	volatile int32_t t18 = -1395;

    t18 = ((x89+x90)>(x91<=x92));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x93 = 26708185748403411LLU;
	volatile int32_t x95 = INT32_MAX;
	int8_t x96 = INT8_MIN;

    t19 = ((x93+x94)>(x95<=x96));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x98 = UINT64_MAX;
	int16_t x99 = INT16_MAX;
	volatile int16_t x100 = -10;

    t20 = ((x97+x98)>(x99<=x100));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x105 = INT32_MIN;
	int64_t x108 = INT64_MIN;

    t21 = ((x105+x106)>(x107<=x108));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x109 = 2114U;
	uint32_t x111 = UINT32_MAX;
	int8_t x112 = 3;
	int32_t t22 = 0;

    t22 = ((x109+x110)>(x111<=x112));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x113 = 87182113U;
	int64_t x114 = -370045669LL;
	int64_t x115 = INT64_MIN;
	static int16_t x116 = INT16_MIN;
	int32_t t23 = 648;

    t23 = ((x113+x114)>(x115<=x116));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x121 = UINT64_MAX;
	volatile int8_t x122 = -1;
	int64_t x123 = INT64_MAX;
	uint16_t x124 = 11U;
	volatile int32_t t24 = 166098;

    t24 = ((x121+x122)>(x123<=x124));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x125 = 0;
	int32_t x126 = INT32_MIN;
	int64_t x127 = -1LL;
	uint16_t x128 = UINT16_MAX;
	volatile int32_t t25 = -917953;

    t25 = ((x125+x126)>(x127<=x128));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x131 = 1969972996429135496LL;
	int32_t x132 = -1;
	volatile int32_t t26 = -8772;

    t26 = ((x129+x130)>(x131<=x132));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x137 = 1;
	int64_t x138 = INT64_MIN;
	int8_t x139 = -24;
	volatile int32_t t27 = 17623214;

    t27 = ((x137+x138)>(x139<=x140));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x141 = UINT64_MAX;
	int16_t x143 = 9612;
	int16_t x144 = INT16_MAX;
	int32_t t28 = 8458591;

    t28 = ((x141+x142)>(x143<=x144));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x145 = INT32_MAX;
	static int32_t x146 = -1;
	volatile int64_t x147 = 757535532LL;
	uint32_t x148 = 3U;
	static volatile int32_t t29 = 910791178;

    t29 = ((x145+x146)>(x147<=x148));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x150 = INT16_MAX;
	uint32_t x151 = 9038U;
	volatile int32_t t30 = 2;

    t30 = ((x149+x150)>(x151<=x152));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x153 = 2;
	static int8_t x154 = 26;
	uint8_t x155 = 29U;
	uint8_t x156 = UINT8_MAX;
	int32_t t31 = 747;

    t31 = ((x153+x154)>(x155<=x156));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x157 = INT8_MAX;
	volatile int8_t x158 = 17;
	int16_t x159 = INT16_MIN;
	uint32_t x160 = 19184U;
	volatile int32_t t32 = -171;

    t32 = ((x157+x158)>(x159<=x160));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x161 = 29U;
	uint32_t x162 = 1048U;
	int64_t x163 = INT64_MIN;
	int64_t x164 = INT64_MIN;
	static volatile int32_t t33 = -65;

    t33 = ((x161+x162)>(x163<=x164));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x169 = INT8_MAX;
	static int64_t x170 = -1LL;
	int32_t x171 = -73;
	int32_t x172 = INT32_MIN;

    t34 = ((x169+x170)>(x171<=x172));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x173 = -228757;
	static uint32_t x176 = UINT32_MAX;
	volatile int32_t t35 = 1;

    t35 = ((x173+x174)>(x175<=x176));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x177 = UINT8_MAX;
	static volatile uint16_t x178 = 3U;
	volatile int16_t x180 = INT16_MIN;
	volatile int32_t t36 = 37765;

    t36 = ((x177+x178)>(x179<=x180));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x181 = INT64_MIN;
	static int64_t x183 = -390016684337594LL;
	int64_t x184 = INT64_MIN;

    t37 = ((x181+x182)>(x183<=x184));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x185 = INT64_MIN;
	uint16_t x186 = UINT16_MAX;
	int8_t x187 = -1;

    t38 = ((x185+x186)>(x187<=x188));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x189 = 10017U;
	int32_t x190 = INT32_MIN;
	static int64_t x191 = -1LL;
	int16_t x192 = INT16_MIN;
	int32_t t39 = 10627433;

    t39 = ((x189+x190)>(x191<=x192));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x193 = 0;
	static uint16_t x194 = 123U;
	int32_t x195 = -508;
	int8_t x196 = INT8_MIN;
	int32_t t40 = -12;

    t40 = ((x193+x194)>(x195<=x196));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x197 = UINT32_MAX;
	static uint32_t x199 = UINT32_MAX;

    t41 = ((x197+x198)>(x199<=x200));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x201 = INT64_MIN;
	static int8_t x202 = INT8_MAX;
	static volatile uint16_t x203 = 2728U;
	uint8_t x204 = 15U;
	volatile int32_t t42 = -962586665;

    t42 = ((x201+x202)>(x203<=x204));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x208 = 8U;

    t43 = ((x205+x206)>(x207<=x208));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x209 = INT64_MAX;
	int64_t x210 = -1LL;
	int16_t x211 = 14681;
	int32_t x212 = -1188257;
	static volatile int32_t t44 = 249995;

    t44 = ((x209+x210)>(x211<=x212));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x213 = INT32_MIN;
	static int32_t x215 = INT32_MIN;
	volatile uint8_t x216 = UINT8_MAX;
	volatile int32_t t45 = -2294;

    t45 = ((x213+x214)>(x215<=x216));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x221 = INT32_MIN;
	uint32_t x222 = UINT32_MAX;
	static uint8_t x223 = 1U;
	volatile uint32_t x224 = UINT32_MAX;

    t46 = ((x221+x222)>(x223<=x224));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x225 = 2U;
	uint8_t x226 = 25U;
	uint32_t x227 = 55002U;
	static int32_t x228 = INT32_MAX;
	volatile int32_t t47 = 402849011;

    t47 = ((x225+x226)>(x227<=x228));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x232 = -1;
	int32_t t48 = 1455;

    t48 = ((x229+x230)>(x231<=x232));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x237 = 2968808139LLU;
	uint8_t x239 = 1U;
	static int8_t x240 = -17;
	int32_t t49 = -604945;

    t49 = ((x237+x238)>(x239<=x240));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x241 = 4U;
	static uint32_t x242 = UINT32_MAX;
	int16_t x243 = INT16_MAX;
	int32_t x244 = INT32_MIN;
	volatile int32_t t50 = -1164404;

    t50 = ((x241+x242)>(x243<=x244));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x245 = 27776512646030319LLU;
	int16_t x247 = INT16_MAX;
	int64_t x248 = 2036892523LL;
	volatile int32_t t51 = 195732648;

    t51 = ((x245+x246)>(x247<=x248));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x249 = INT8_MIN;
	int32_t x250 = INT32_MAX;
	static uint64_t x251 = 84254435579LLU;
	int8_t x252 = -50;
	int32_t t52 = 1;

    t52 = ((x249+x250)>(x251<=x252));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x255 = -1;
	volatile int32_t x256 = INT32_MAX;
	volatile int32_t t53 = -10150313;

    t53 = ((x253+x254)>(x255<=x256));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x258 = INT32_MIN;
	volatile int64_t x259 = -1LL;
	int8_t x260 = INT8_MAX;
	volatile int32_t t54 = 860;

    t54 = ((x257+x258)>(x259<=x260));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x261 = -1;
	int64_t x262 = INT64_MAX;
	volatile int8_t x264 = -1;
	static int32_t t55 = 2748452;

    t55 = ((x261+x262)>(x263<=x264));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x265 = INT8_MIN;
	int8_t x266 = INT8_MIN;
	volatile int32_t x267 = 11560601;
	int64_t x268 = INT64_MIN;

    t56 = ((x265+x266)>(x267<=x268));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x274 = 44U;
	int32_t x275 = -120453;
	static volatile int64_t x276 = INT64_MIN;
	volatile int32_t t57 = -27;

    t57 = ((x273+x274)>(x275<=x276));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x277 = 4308LLU;
	uint8_t x278 = UINT8_MAX;
	uint16_t x279 = 28488U;
	int64_t x280 = INT64_MIN;
	int32_t t58 = -523360;

    t58 = ((x277+x278)>(x279<=x280));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x281 = 17166213637686001LLU;
	volatile uint32_t x282 = 1680U;
	uint16_t x284 = 890U;

    t59 = ((x281+x282)>(x283<=x284));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x285 = 15U;
	int8_t x286 = INT8_MIN;
	uint8_t x288 = 6U;
	int32_t t60 = 25528;

    t60 = ((x285+x286)>(x287<=x288));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x293 = -1;
	volatile uint64_t x294 = 7783LLU;
	int32_t x295 = -6914;
	int64_t x296 = -96648LL;
	int32_t t61 = 997142;

    t61 = ((x293+x294)>(x295<=x296));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x297 = INT16_MAX;
	static int32_t x298 = -1;
	static int8_t x299 = 1;
	uint64_t x300 = UINT64_MAX;

    t62 = ((x297+x298)>(x299<=x300));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint8_t x301 = UINT8_MAX;
	int64_t x302 = -66326737509LL;
	int8_t x303 = 28;
	volatile uint64_t x304 = 609578404919LLU;
	volatile int32_t t63 = 540257;

    t63 = ((x301+x302)>(x303<=x304));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x305 = 0;
	uint16_t x307 = UINT16_MAX;
	volatile uint32_t x308 = 4U;
	volatile int32_t t64 = -372;

    t64 = ((x305+x306)>(x307<=x308));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x309 = INT16_MAX;
	uint16_t x311 = 1327U;
	int32_t t65 = 169;

    t65 = ((x309+x310)>(x311<=x312));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x313 = 90U;
	volatile uint64_t x315 = UINT64_MAX;
	uint32_t x316 = 312392391U;
	int32_t t66 = -446322089;

    t66 = ((x313+x314)>(x315<=x316));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x318 = INT32_MAX;
	volatile uint8_t x319 = 0U;
	static uint64_t x320 = 3LLU;
	int32_t t67 = 42393;

    t67 = ((x317+x318)>(x319<=x320));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x321 = UINT8_MAX;
	uint8_t x322 = 2U;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t68 = 1;

    t68 = ((x321+x322)>(x323<=x324));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x329 = 15U;
	uint8_t x330 = 0U;
	volatile int8_t x331 = INT8_MAX;
	volatile int8_t x332 = -10;
	int32_t t69 = -115;

    t69 = ((x329+x330)>(x331<=x332));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x333 = 2;
	uint8_t x334 = UINT8_MAX;
	int64_t x336 = -1LL;
	int32_t t70 = 170664808;

    t70 = ((x333+x334)>(x335<=x336));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x337 = 99U;
	volatile uint32_t x338 = UINT32_MAX;
	int64_t x339 = -1LL;
	volatile uint8_t x340 = 14U;
	volatile int32_t t71 = 59285;

    t71 = ((x337+x338)>(x339<=x340));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x341 = UINT8_MAX;
	int32_t x342 = -1813;
	int16_t x343 = -541;
	volatile int16_t x344 = 396;
	volatile int32_t t72 = -988793;

    t72 = ((x341+x342)>(x343<=x344));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x345 = UINT32_MAX;
	static int32_t x346 = INT32_MIN;
	int16_t x347 = INT16_MIN;
	volatile int8_t x348 = -1;
	volatile int32_t t73 = -45207;

    t73 = ((x345+x346)>(x347<=x348));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x349 = 450U;
	int8_t x350 = 1;
	int64_t x351 = INT64_MIN;
	static int32_t x352 = INT32_MIN;
	volatile int32_t t74 = 823836;

    t74 = ((x349+x350)>(x351<=x352));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x353 = -1LL;
	uint16_t x355 = 14U;
	uint8_t x356 = 15U;
	int32_t t75 = -230;

    t75 = ((x353+x354)>(x355<=x356));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x358 = 1U;
	uint32_t x359 = UINT32_MAX;
	int32_t x360 = -1;
	int32_t t76 = -567623777;

    t76 = ((x357+x358)>(x359<=x360));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x361 = -15;
	static int8_t x363 = INT8_MIN;
	int16_t x364 = -1292;
	int32_t t77 = 0;

    t77 = ((x361+x362)>(x363<=x364));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x369 = INT16_MIN;
	int8_t x370 = INT8_MIN;
	int8_t x372 = INT8_MAX;
	volatile int32_t t78 = -552;

    t78 = ((x369+x370)>(x371<=x372));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x373 = -22;
	int64_t x374 = -1LL;
	static int8_t x375 = INT8_MIN;
	volatile uint64_t x376 = 283LLU;

    t79 = ((x373+x374)>(x375<=x376));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x377 = 117175520375778LL;
	int8_t x378 = INT8_MAX;
	uint16_t x380 = UINT16_MAX;
	static volatile int32_t t80 = -33740;

    t80 = ((x377+x378)>(x379<=x380));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x382 = 105U;
	static uint8_t x383 = UINT8_MAX;
	static int32_t t81 = 7329584;

    t81 = ((x381+x382)>(x383<=x384));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x385 = 90;
	uint32_t x386 = 86U;
	volatile uint32_t x388 = UINT32_MAX;
	int32_t t82 = 1509722;

    t82 = ((x385+x386)>(x387<=x388));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x389 = UINT8_MAX;
	int16_t x390 = -48;
	int16_t x392 = 393;
	static volatile int32_t t83 = -3190;

    t83 = ((x389+x390)>(x391<=x392));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x397 = -8;
	static uint16_t x398 = 362U;
	uint8_t x399 = UINT8_MAX;
	uint64_t x400 = 101764017450213217LLU;

    t84 = ((x397+x398)>(x399<=x400));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x402 = INT8_MIN;
	int64_t x403 = -1LL;
	static int8_t x404 = -1;
	int32_t t85 = -385478;

    t85 = ((x401+x402)>(x403<=x404));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x405 = 9141U;
	static volatile int32_t x406 = 5434;
	int32_t x407 = -287;
	uint16_t x408 = 2U;
	volatile int32_t t86 = 76057;

    t86 = ((x405+x406)>(x407<=x408));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x409 = UINT16_MAX;
	static volatile int8_t x410 = -11;
	static int64_t x411 = -48LL;
	uint32_t x412 = UINT32_MAX;
	volatile int32_t t87 = -1;

    t87 = ((x409+x410)>(x411<=x412));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x414 = -1;
	volatile int32_t x415 = 2525974;
	static uint64_t x416 = UINT64_MAX;
	int32_t t88 = -13448;

    t88 = ((x413+x414)>(x415<=x416));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x417 = -2;
	int8_t x418 = INT8_MIN;
	static volatile uint8_t x420 = UINT8_MAX;
	static int32_t t89 = 4219439;

    t89 = ((x417+x418)>(x419<=x420));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x421 = -1;
	uint64_t x422 = 1275951167850259LLU;
	static uint16_t x424 = 1327U;

    t90 = ((x421+x422)>(x423<=x424));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x425 = UINT64_MAX;
	uint64_t x426 = UINT64_MAX;
	static volatile int8_t x428 = INT8_MAX;
	int32_t t91 = -4255;

    t91 = ((x425+x426)>(x427<=x428));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x429 = 7;
	uint8_t x430 = 43U;
	static volatile int64_t x431 = 0LL;

    t92 = ((x429+x430)>(x431<=x432));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x445 = 1430LLU;
	static uint8_t x446 = 9U;
	int8_t x447 = 15;
	int16_t x448 = INT16_MIN;

    t93 = ((x445+x446)>(x447<=x448));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x449 = INT8_MIN;
	int32_t x451 = INT32_MAX;
	static int64_t x452 = INT64_MIN;
	int32_t t94 = -53;

    t94 = ((x449+x450)>(x451<=x452));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x453 = INT8_MAX;
	int16_t x455 = INT16_MAX;
	volatile int64_t x456 = INT64_MIN;

    t95 = ((x453+x454)>(x455<=x456));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x457 = 123364182250075591LLU;
	int64_t x458 = -21940558316LL;
	int8_t x459 = INT8_MIN;
	static volatile int64_t x460 = INT64_MIN;
	static int32_t t96 = -5008;

    t96 = ((x457+x458)>(x459<=x460));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x461 = INT64_MAX;
	static volatile int16_t x462 = INT16_MIN;
	uint64_t x464 = 179LLU;
	int32_t t97 = 531472;

    t97 = ((x461+x462)>(x463<=x464));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x465 = 18949402226663LLU;
	int16_t x466 = -1;
	uint16_t x467 = UINT16_MAX;
	uint8_t x468 = 1U;

    t98 = ((x465+x466)>(x467<=x468));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x471 = INT16_MIN;
	int8_t x472 = -1;
	static int32_t t99 = -44011021;

    t99 = ((x469+x470)>(x471<=x472));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x477 = INT8_MAX;
	static uint32_t x478 = 55605U;
	int8_t x479 = INT8_MIN;
	volatile int32_t t100 = 209;

    t100 = ((x477+x478)>(x479<=x480));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x481 = INT64_MIN;
	int8_t x482 = 24;
	volatile int64_t x483 = -1LL;
	volatile int32_t x484 = INT32_MIN;
	int32_t t101 = -10994324;

    t101 = ((x481+x482)>(x483<=x484));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x485 = INT16_MAX;
	volatile int16_t x487 = -160;
	static uint16_t x488 = 8U;
	volatile int32_t t102 = -101274194;

    t102 = ((x485+x486)>(x487<=x488));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x489 = INT16_MIN;
	int32_t x490 = 90781144;
	uint64_t x491 = 18371870196LLU;
	int32_t x492 = -105088;

    t103 = ((x489+x490)>(x491<=x492));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x493 = UINT16_MAX;
	int16_t x494 = INT16_MIN;
	volatile int32_t x495 = INT32_MIN;
	volatile int8_t x496 = -1;
	volatile int32_t t104 = -16099054;

    t104 = ((x493+x494)>(x495<=x496));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x498 = -5;
	int8_t x500 = INT8_MIN;
	volatile int32_t t105 = -8058717;

    t105 = ((x497+x498)>(x499<=x500));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x501 = 64337348U;
	uint8_t x503 = UINT8_MAX;
	volatile int32_t t106 = -29067;

    t106 = ((x501+x502)>(x503<=x504));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x505 = 1U;
	int8_t x508 = INT8_MIN;
	volatile int32_t t107 = 1557707;

    t107 = ((x505+x506)>(x507<=x508));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x517 = -925041;
	int8_t x518 = 3;
	static volatile uint8_t x519 = UINT8_MAX;
	static int64_t x520 = -1LL;

    t108 = ((x517+x518)>(x519<=x520));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x522 = 14;
	uint8_t x523 = UINT8_MAX;
	int32_t x524 = INT32_MIN;
	int32_t t109 = -2878913;

    t109 = ((x521+x522)>(x523<=x524));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x533 = 668353683892603309LL;
	int16_t x534 = -1;
	int32_t x535 = INT32_MIN;
	int32_t x536 = -1389341;
	volatile int32_t t110 = -163;

    t110 = ((x533+x534)>(x535<=x536));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x537 = -6;
	int64_t x539 = INT64_MAX;
	int32_t x540 = -696390;

    t111 = ((x537+x538)>(x539<=x540));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x545 = -1;
	volatile int32_t x546 = -1;
	int32_t x547 = INT32_MAX;
	int8_t x548 = INT8_MIN;
	int32_t t112 = -67969129;

    t112 = ((x545+x546)>(x547<=x548));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x549 = INT64_MIN;
	uint8_t x550 = UINT8_MAX;
	uint8_t x551 = 127U;
	int16_t x552 = INT16_MAX;
	static volatile int32_t t113 = 1;

    t113 = ((x549+x550)>(x551<=x552));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x562 = 93U;
	uint16_t x564 = UINT16_MAX;
	volatile int32_t t114 = 640524435;

    t114 = ((x561+x562)>(x563<=x564));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x565 = -1LL;
	volatile uint8_t x566 = 3U;
	static volatile int64_t x567 = 8407LL;
	uint8_t x568 = UINT8_MAX;

    t115 = ((x565+x566)>(x567<=x568));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x569 = INT32_MIN;
	uint64_t x570 = 13170310831796LLU;
	int64_t x571 = INT64_MAX;

    t116 = ((x569+x570)>(x571<=x572));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x573 = UINT8_MAX;
	volatile int16_t x575 = -3;
	int32_t t117 = 140;

    t117 = ((x573+x574)>(x575<=x576));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x577 = 21415U;
	int8_t x578 = INT8_MIN;
	int16_t x579 = -1;
	int64_t x580 = INT64_MIN;
	volatile int32_t t118 = 415352;

    t118 = ((x577+x578)>(x579<=x580));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x583 = 133;
	static int8_t x584 = INT8_MAX;
	volatile int32_t t119 = 797577762;

    t119 = ((x581+x582)>(x583<=x584));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x585 = -5024;
	static uint64_t x586 = 151944230924LLU;
	uint64_t x587 = 27139599LLU;
	uint64_t x588 = 6867347LLU;
	static int32_t t120 = -184;

    t120 = ((x585+x586)>(x587<=x588));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x589 = INT32_MAX;
	int32_t x590 = -1;
	int64_t x591 = -4378454325110606155LL;
	static volatile int8_t x592 = INT8_MAX;
	int32_t t121 = -633870;

    t121 = ((x589+x590)>(x591<=x592));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x593 = 951241LLU;
	int32_t x594 = -4178;
	uint32_t x595 = UINT32_MAX;
	static int32_t x596 = INT32_MIN;

    t122 = ((x593+x594)>(x595<=x596));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x598 = -1LL;
	volatile int64_t x600 = INT64_MAX;
	int32_t t123 = 31222811;

    t123 = ((x597+x598)>(x599<=x600));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x601 = 116U;
	uint64_t x602 = 32862LLU;
	uint16_t x604 = 2906U;
	static int32_t t124 = -1356;

    t124 = ((x601+x602)>(x603<=x604));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x605 = 22;
	int8_t x606 = INT8_MIN;
	uint32_t x607 = UINT32_MAX;
	static uint16_t x608 = UINT16_MAX;

    t125 = ((x605+x606)>(x607<=x608));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x609 = -59;
	uint32_t x610 = UINT32_MAX;
	int8_t x611 = -7;
	int32_t t126 = -75920762;

    t126 = ((x609+x610)>(x611<=x612));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x613 = INT32_MAX;
	static int64_t x615 = -90707364LL;
	int8_t x616 = INT8_MIN;
	int32_t t127 = -62403971;

    t127 = ((x613+x614)>(x615<=x616));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int64_t x617 = INT64_MIN;
	uint8_t x618 = UINT8_MAX;
	int8_t x619 = -1;
	static volatile int32_t t128 = 0;

    t128 = ((x617+x618)>(x619<=x620));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x621 = 55U;
	uint16_t x622 = 6U;
	int8_t x624 = INT8_MIN;
	volatile int32_t t129 = -19;

    t129 = ((x621+x622)>(x623<=x624));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x629 = INT16_MIN;
	volatile int8_t x630 = INT8_MIN;
	volatile int64_t x631 = -784201831216749618LL;
	uint64_t x632 = UINT64_MAX;
	static int32_t t130 = 49181651;

    t130 = ((x629+x630)>(x631<=x632));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x633 = -1LL;
	int16_t x634 = INT16_MAX;
	int8_t x635 = -18;
	static int16_t x636 = INT16_MIN;
	int32_t t131 = 0;

    t131 = ((x633+x634)>(x635<=x636));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x641 = -474298LL;
	int8_t x643 = -20;
	int16_t x644 = INT16_MAX;
	static int32_t t132 = -15779724;

    t132 = ((x641+x642)>(x643<=x644));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x645 = INT16_MIN;
	static uint8_t x646 = 19U;
	static int8_t x647 = -1;
	uint64_t x648 = 98011LLU;
	int32_t t133 = -1723;

    t133 = ((x645+x646)>(x647<=x648));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x649 = 396246341685200LLU;
	int16_t x650 = -9653;
	int8_t x651 = -18;
	int8_t x652 = INT8_MIN;

    t134 = ((x649+x650)>(x651<=x652));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x653 = INT16_MAX;
	int32_t x654 = -1;
	volatile int8_t x655 = 1;

    t135 = ((x653+x654)>(x655<=x656));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x657 = 1889587402007LLU;
	int16_t x658 = -166;
	static volatile int64_t x659 = -6770723252054LL;
	volatile int16_t x660 = INT16_MIN;
	volatile int32_t t136 = 445;

    t136 = ((x657+x658)>(x659<=x660));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x661 = -1;
	volatile uint32_t x662 = 1069999U;
	int8_t x663 = INT8_MIN;
	uint64_t x664 = 89LLU;
	int32_t t137 = -1;

    t137 = ((x661+x662)>(x663<=x664));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x665 = INT16_MAX;
	uint16_t x666 = 90U;
	int64_t x667 = -1LL;
	static uint8_t x668 = UINT8_MAX;

    t138 = ((x665+x666)>(x667<=x668));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x669 = -1;
	volatile int32_t x670 = INT32_MAX;
	uint32_t x672 = 1538U;
	int32_t t139 = -3392185;

    t139 = ((x669+x670)>(x671<=x672));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x673 = 528113U;
	int32_t x674 = 0;
	volatile uint8_t x675 = 7U;
	int32_t x676 = INT32_MAX;
	int32_t t140 = 296926314;

    t140 = ((x673+x674)>(x675<=x676));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x677 = 95356847001815LLU;
	uint16_t x678 = UINT16_MAX;
	int32_t x679 = 82527041;
	volatile uint16_t x680 = UINT16_MAX;
	static int32_t t141 = -6128166;

    t141 = ((x677+x678)>(x679<=x680));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x686 = 3150U;
	volatile int64_t x687 = -1LL;
	int16_t x688 = 451;
	volatile int32_t t142 = 128756;

    t142 = ((x685+x686)>(x687<=x688));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x689 = -42777864LL;
	uint8_t x690 = UINT8_MAX;
	uint16_t x691 = UINT16_MAX;
	volatile int32_t t143 = 86;

    t143 = ((x689+x690)>(x691<=x692));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x693 = 3;
	volatile int64_t x694 = INT64_MIN;
	uint64_t x696 = UINT64_MAX;

    t144 = ((x693+x694)>(x695<=x696));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x698 = UINT8_MAX;
	volatile int32_t t145 = -549205025;

    t145 = ((x697+x698)>(x699<=x700));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x701 = -1LL;
	static int8_t x702 = INT8_MAX;
	int64_t x703 = 569396769092958LL;
	int64_t x704 = 17088100760687LL;
	int32_t t146 = -1862715;

    t146 = ((x701+x702)>(x703<=x704));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x706 = -8299845620287851LL;
	int16_t x707 = 1265;
	static volatile uint16_t x708 = UINT16_MAX;
	int32_t t147 = 227733728;

    t147 = ((x705+x706)>(x707<=x708));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x709 = -1497990;
	static uint16_t x710 = 6205U;
	uint16_t x711 = 1U;
	volatile uint64_t x712 = 1886311781199622LLU;
	static int32_t t148 = -139541774;

    t148 = ((x709+x710)>(x711<=x712));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x714 = INT8_MIN;
	int8_t x715 = INT8_MAX;
	volatile uint16_t x716 = 1U;

    t149 = ((x713+x714)>(x715<=x716));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x717 = 808556626LLU;
	volatile int8_t x718 = INT8_MIN;
	static int8_t x719 = -1;

    t150 = ((x717+x718)>(x719<=x720));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x721 = INT8_MIN;
	volatile int64_t x722 = -46555142813350LL;
	int8_t x723 = -6;
	volatile uint64_t x724 = 82LLU;
	int32_t t151 = -693;

    t151 = ((x721+x722)>(x723<=x724));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x726 = -1;
	int32_t x727 = INT32_MAX;
	uint8_t x728 = 2U;
	int32_t t152 = -1013849702;

    t152 = ((x725+x726)>(x727<=x728));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x729 = 510;
	volatile uint32_t x730 = 23817U;
	uint8_t x731 = 86U;
	int32_t t153 = 1992;

    t153 = ((x729+x730)>(x731<=x732));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x733 = 17073364U;
	int16_t x734 = INT16_MIN;
	int32_t x736 = -127395;

    t154 = ((x733+x734)>(x735<=x736));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x737 = INT64_MIN;
	static uint64_t x738 = UINT64_MAX;
	int64_t x739 = 145335620850484877LL;
	static int64_t x740 = -1LL;
	int32_t t155 = 3950500;

    t155 = ((x737+x738)>(x739<=x740));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x742 = 0U;
	int64_t x743 = INT64_MIN;
	int16_t x744 = -1;
	int32_t t156 = -28972;

    t156 = ((x741+x742)>(x743<=x744));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x745 = -3;
	uint8_t x748 = 0U;
	volatile int32_t t157 = 4505;

    t157 = ((x745+x746)>(x747<=x748));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x749 = INT32_MAX;
	uint32_t x750 = 34490U;
	int32_t x751 = -1;
	static volatile int32_t x752 = -1;
	volatile int32_t t158 = 27;

    t158 = ((x749+x750)>(x751<=x752));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x753 = INT8_MIN;
	uint8_t x755 = UINT8_MAX;
	volatile int32_t t159 = -31;

    t159 = ((x753+x754)>(x755<=x756));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x757 = UINT32_MAX;
	volatile int8_t x758 = INT8_MIN;
	volatile int32_t x759 = INT32_MIN;
	volatile int32_t t160 = -1631;

    t160 = ((x757+x758)>(x759<=x760));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x765 = 528128949LLU;
	volatile uint8_t x767 = 0U;
	int32_t t161 = 10778668;

    t161 = ((x765+x766)>(x767<=x768));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x769 = INT32_MIN;
	uint16_t x770 = 9U;
	uint64_t x771 = 717044770618259LLU;
	volatile int32_t t162 = -2;

    t162 = ((x769+x770)>(x771<=x772));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x773 = INT8_MIN;
	uint32_t x774 = UINT32_MAX;

    t163 = ((x773+x774)>(x775<=x776));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x777 = 3840544;
	int32_t x778 = -203630;
	int32_t x779 = 150;
	int32_t t164 = 0;

    t164 = ((x777+x778)>(x779<=x780));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x781 = 37;
	int32_t x782 = -32735;
	int64_t x783 = INT64_MIN;
	int32_t t165 = -35505;

    t165 = ((x781+x782)>(x783<=x784));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x785 = INT64_MIN;
	volatile uint64_t x786 = 2174276399008LLU;
	int8_t x787 = INT8_MIN;

    t166 = ((x785+x786)>(x787<=x788));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x789 = 37U;
	volatile uint16_t x790 = 4136U;
	int32_t t167 = 21461;

    t167 = ((x789+x790)>(x791<=x792));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x795 = -1LL;
	static int64_t x796 = 2956229LL;

    t168 = ((x793+x794)>(x795<=x796));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x797 = UINT32_MAX;
	int64_t x798 = 1042249857LL;
	uint16_t x800 = 248U;
	int32_t t169 = 1;

    t169 = ((x797+x798)>(x799<=x800));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x801 = INT8_MAX;
	static uint32_t x803 = 265006561U;
	int8_t x804 = -5;
	volatile int32_t t170 = -1;

    t170 = ((x801+x802)>(x803<=x804));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x805 = UINT8_MAX;
	uint16_t x806 = 2326U;
	uint8_t x807 = 1U;

    t171 = ((x805+x806)>(x807<=x808));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x810 = 2518;
	int16_t x811 = 0;
	int16_t x812 = -14;
	volatile int32_t t172 = 27295;

    t172 = ((x809+x810)>(x811<=x812));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x817 = INT8_MIN;
	int32_t x818 = -1;
	static volatile int64_t x819 = -274820425741LL;
	static volatile int32_t t173 = 501956;

    t173 = ((x817+x818)>(x819<=x820));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x821 = INT16_MIN;
	int8_t x822 = -1;
	static volatile int32_t x823 = -125250715;
	int8_t x824 = INT8_MIN;
	volatile int32_t t174 = 578;

    t174 = ((x821+x822)>(x823<=x824));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x829 = 0U;
	int64_t x830 = -329699814364664LL;
	static int16_t x831 = INT16_MAX;
	int64_t x832 = INT64_MIN;

    t175 = ((x829+x830)>(x831<=x832));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x833 = UINT32_MAX;
	static uint64_t x834 = 898953283453LLU;
	static int8_t x836 = -1;
	int32_t t176 = -1976854;

    t176 = ((x833+x834)>(x835<=x836));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x838 = INT16_MIN;
	int8_t x839 = INT8_MAX;
	uint64_t x840 = 2720538LLU;

    t177 = ((x837+x838)>(x839<=x840));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x841 = 45U;
	int32_t x842 = -1;
	uint32_t x843 = UINT32_MAX;
	int32_t x844 = -3125326;
	volatile int32_t t178 = -806;

    t178 = ((x841+x842)>(x843<=x844));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x845 = UINT16_MAX;
	volatile int64_t x848 = 1947905182197139631LL;
	int32_t t179 = 97731;

    t179 = ((x845+x846)>(x847<=x848));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x849 = 82;
	int64_t x850 = INT64_MIN;
	int8_t x851 = INT8_MIN;
	int16_t x852 = -1;
	int32_t t180 = 9;

    t180 = ((x849+x850)>(x851<=x852));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x853 = -1;
	int32_t x854 = -1;
	int16_t x856 = INT16_MAX;
	volatile int32_t t181 = 15162;

    t181 = ((x853+x854)>(x855<=x856));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x858 = UINT64_MAX;
	static int32_t x859 = INT32_MIN;
	static uint32_t x860 = 1094531U;
	static volatile int32_t t182 = -8070;

    t182 = ((x857+x858)>(x859<=x860));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x861 = 567233U;
	int32_t x864 = -1;
	volatile int32_t t183 = -1;

    t183 = ((x861+x862)>(x863<=x864));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x865 = 36LLU;
	uint8_t x866 = UINT8_MAX;
	int32_t x867 = INT32_MIN;
	volatile uint8_t x868 = 88U;
	static int32_t t184 = -5;

    t184 = ((x865+x866)>(x867<=x868));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x871 = INT8_MIN;
	int32_t t185 = -142;

    t185 = ((x869+x870)>(x871<=x872));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x874 = 10335912LL;
	int16_t x875 = -1;
	uint32_t x876 = 734576U;

    t186 = ((x873+x874)>(x875<=x876));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x877 = 0;
	volatile int8_t x878 = 0;
	static int64_t x879 = INT64_MIN;
	uint64_t x880 = UINT64_MAX;
	int32_t t187 = 5;

    t187 = ((x877+x878)>(x879<=x880));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x881 = INT8_MAX;
	int64_t x882 = INT64_MIN;
	int32_t x883 = -1;
	int32_t t188 = 3186212;

    t188 = ((x881+x882)>(x883<=x884));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x885 = INT16_MAX;
	uint16_t x886 = UINT16_MAX;
	static int32_t x887 = -1;
	int64_t x888 = 1LL;
	int32_t t189 = 524624678;

    t189 = ((x885+x886)>(x887<=x888));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x889 = -1LL;
	static volatile int32_t x890 = INT32_MIN;
	int32_t x892 = -1;

    t190 = ((x889+x890)>(x891<=x892));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x897 = 26U;
	int32_t x898 = INT32_MIN;
	volatile uint32_t x899 = 2U;
	volatile uint64_t x900 = 203280675673LLU;

    t191 = ((x897+x898)>(x899<=x900));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x901 = UINT16_MAX;
	int16_t x902 = 147;
	int64_t x903 = INT64_MIN;
	volatile int32_t x904 = -1;

    t192 = ((x901+x902)>(x903<=x904));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x909 = -1LL;
	static uint16_t x910 = 26874U;
	volatile uint16_t x911 = 41U;
	static uint16_t x912 = UINT16_MAX;
	volatile int32_t t193 = -58;

    t193 = ((x909+x910)>(x911<=x912));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x913 = -1;
	uint16_t x915 = 12470U;
	volatile int32_t t194 = -997993;

    t194 = ((x913+x914)>(x915<=x916));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x917 = 45U;
	uint64_t x918 = 16388220579LLU;
	volatile int8_t x919 = -43;
	volatile int32_t t195 = 100532;

    t195 = ((x917+x918)>(x919<=x920));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x921 = 11LLU;
	volatile int32_t t196 = -81182221;

    t196 = ((x921+x922)>(x923<=x924));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x925 = INT8_MAX;
	static volatile uint64_t x926 = UINT64_MAX;
	static uint32_t x928 = 1317U;
	int32_t t197 = 0;

    t197 = ((x925+x926)>(x927<=x928));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x929 = UINT32_MAX;
	volatile uint16_t x930 = UINT16_MAX;
	uint64_t x932 = UINT64_MAX;
	int32_t t198 = 116497796;

    t198 = ((x929+x930)>(x931<=x932));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x933 = 1U;
	static int32_t x934 = INT32_MIN;
	uint64_t x935 = 7280123480519197364LLU;
	int32_t t199 = 13;

    t199 = ((x933+x934)>(x935<=x936));

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



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

static int8_t x2 = -5;
uint64_t x5 = 66783LLU;
int32_t x8 = INT32_MIN;
volatile int32_t t2 = 110098;
volatile int8_t x14 = 1;
volatile int16_t x34 = -7;
int32_t x37 = INT32_MAX;
static int32_t x40 = INT32_MIN;
static int8_t x45 = 1;
int32_t x46 = 959;
volatile int32_t x48 = -1;
int16_t x50 = -1025;
int64_t x53 = -1LL;
int32_t x54 = 38735;
int64_t x57 = INT64_MAX;
static uint64_t x61 = 3LLU;
int32_t x62 = INT32_MIN;
volatile uint32_t x67 = 12323707U;
static volatile int32_t t14 = 75;
volatile int64_t x70 = -6157LL;
static int32_t x74 = INT32_MAX;
uint64_t x78 = UINT64_MAX;
int32_t t17 = 8669;
int32_t x83 = INT32_MIN;
volatile int32_t t18 = -501;
int32_t x85 = 939;
int64_t x87 = -1LL;
volatile int16_t x88 = INT16_MIN;
int32_t x96 = INT32_MIN;
static int16_t x101 = INT16_MAX;
int64_t x110 = INT64_MAX;
static uint16_t x112 = 14089U;
int8_t x115 = INT8_MIN;
static int32_t t25 = -399;
volatile int32_t x117 = -1;
uint64_t x130 = UINT64_MAX;
volatile int32_t t29 = 269358456;
static volatile int32_t x138 = 1792;
volatile uint16_t x140 = UINT16_MAX;
int16_t x142 = -8341;
int32_t x145 = -1;
int32_t x148 = INT32_MAX;
volatile int32_t t32 = 13972093;
int8_t x149 = INT8_MIN;
uint16_t x151 = 56U;
int32_t t34 = -63214869;
uint64_t x163 = UINT64_MAX;
static int64_t x164 = -1LL;
int16_t x180 = -162;
uint16_t x192 = UINT16_MAX;
uint64_t x194 = UINT64_MAX;
static int32_t t41 = 21468;
volatile int16_t x199 = -1;
int8_t x201 = -1;
int64_t x203 = -480732LL;
int8_t x207 = 1;
uint64_t x208 = UINT64_MAX;
int32_t t44 = -1;
volatile int32_t t45 = -19541;
static int16_t x219 = INT16_MIN;
volatile uint64_t x223 = UINT64_MAX;
int16_t x225 = INT16_MAX;
static int16_t x233 = -1;
static volatile int64_t x236 = INT64_MIN;
int8_t x242 = -1;
volatile uint32_t x248 = 1926887U;
int32_t x249 = INT32_MAX;
static int32_t t54 = -33591752;
uint32_t x253 = 1166880855U;
int32_t x256 = INT32_MIN;
int32_t t55 = -113869;
volatile int8_t x258 = INT8_MIN;
volatile int32_t x262 = INT32_MAX;
static int64_t x263 = -1LL;
uint32_t x270 = UINT32_MAX;
int32_t x272 = 45;
volatile uint64_t x277 = 55486393519552LLU;
int32_t x285 = -1;
volatile uint64_t x287 = 106620460LLU;
volatile int32_t t61 = 4;
volatile int32_t t63 = 0;
int16_t x301 = -63;
int8_t x302 = INT8_MIN;
int32_t t66 = 2139;
int64_t x312 = INT64_MIN;
int16_t x314 = -1;
uint32_t x315 = 0U;
volatile uint64_t x323 = UINT64_MAX;
volatile int32_t t70 = 2;
static uint8_t x325 = UINT8_MAX;
volatile int32_t t71 = 84451231;
uint16_t x331 = UINT16_MAX;
uint16_t x334 = 0U;
int16_t x341 = 16121;
int8_t x343 = 1;
static int8_t x351 = 0;
volatile int32_t t76 = 1777427;
int64_t x355 = INT64_MAX;
int16_t x362 = INT16_MAX;
int32_t x364 = -83915164;
int64_t x365 = -1LL;
uint32_t x366 = UINT32_MAX;
static uint64_t x371 = 1080913201LLU;
int64_t x384 = -40566081362380218LL;
volatile int32_t t83 = 1;
volatile uint8_t x385 = UINT8_MAX;
int8_t x386 = 1;
static uint32_t x394 = 6722U;
int32_t x396 = INT32_MIN;
volatile uint16_t x400 = 41U;
uint32_t x408 = 0U;
int16_t x413 = INT16_MAX;
int32_t x418 = -1;
int32_t t94 = -240;
int16_t x438 = INT16_MAX;
volatile int32_t t96 = -15800;
int64_t x447 = 7900442484168LL;
volatile int32_t t98 = 1;
int8_t x461 = INT8_MIN;
volatile int32_t x467 = INT32_MIN;
int16_t x469 = -3742;
uint8_t x471 = 94U;
static int8_t x472 = -1;
int16_t x480 = INT16_MIN;
static volatile int32_t x496 = -1678;
volatile int32_t t108 = -129241;
volatile int32_t t109 = -15894298;
int16_t x505 = 117;
int16_t x507 = INT16_MIN;
int64_t x508 = INT64_MAX;
static volatile int64_t x511 = INT64_MIN;
uint64_t x514 = UINT64_MAX;
uint8_t x515 = UINT8_MAX;
int32_t x517 = INT32_MIN;
int16_t x518 = -1;
static volatile int32_t t113 = -1;
static uint32_t x525 = 72380U;
static volatile int32_t t114 = 1;
volatile int16_t x530 = INT16_MIN;
volatile uint8_t x533 = UINT8_MAX;
int32_t x534 = 169591;
static volatile int16_t x539 = -1;
uint16_t x542 = 10683U;
int32_t x544 = INT32_MIN;
int32_t x545 = -1;
int8_t x548 = INT8_MIN;
static uint8_t x553 = 5U;
uint64_t x556 = 1100286LLU;
int8_t x566 = INT8_MIN;
uint16_t x568 = UINT16_MAX;
int8_t x572 = INT8_MAX;
static uint64_t x574 = 2LLU;
int16_t x583 = INT16_MIN;
static volatile int32_t t128 = -985502685;
uint64_t x590 = 17183LLU;
static uint32_t x591 = 44134U;
static int32_t t130 = 1114078;
int64_t x604 = 2496664710031027LL;
volatile int32_t x608 = -1;
volatile int16_t x610 = 5;
int8_t x611 = -1;
uint64_t x625 = 28672537088014LLU;
uint32_t x626 = 6196899U;
static int8_t x631 = INT8_MIN;
uint8_t x633 = 13U;
int32_t x640 = -1;
uint16_t x646 = 57U;
int8_t x647 = INT8_MAX;
volatile uint8_t x648 = 47U;
volatile int32_t t142 = 3183;
static int16_t x655 = INT16_MIN;
volatile uint64_t x659 = 95475762LLU;
uint64_t x663 = UINT64_MAX;
int8_t x664 = INT8_MIN;
int32_t x672 = 5069444;
int32_t t148 = -90815120;
int64_t x685 = 38838176LL;
uint16_t x698 = 2253U;
uint8_t x700 = 11U;
int32_t t153 = -30;
volatile int32_t t156 = 104;
volatile uint64_t x717 = 11109919LLU;
uint32_t x726 = 0U;
uint64_t x735 = UINT64_MAX;
volatile int8_t x736 = INT8_MIN;
volatile int32_t t161 = -17003;
int32_t x742 = INT32_MIN;
volatile int8_t x743 = INT8_MIN;
volatile int32_t t163 = -16689284;
volatile int32_t t164 = 681241184;
int8_t x759 = INT8_MIN;
static int32_t x778 = -1;
int32_t x784 = -1;
volatile int32_t x796 = -1;
int64_t x797 = 3958459879LL;
int8_t x800 = INT8_MIN;
int64_t x801 = INT64_MIN;
int64_t x805 = INT64_MAX;
int16_t x807 = -1;
int8_t x811 = 1;
static int32_t x819 = 383524;
static int32_t t176 = 22;
volatile uint8_t x827 = UINT8_MAX;
int8_t x831 = 0;
int64_t x832 = 26373046LL;
volatile uint64_t x838 = 1441168684986913205LLU;
int8_t x840 = INT8_MIN;
static volatile int32_t t181 = -23495;
int32_t t182 = -3;
volatile int32_t t183 = -548;
int32_t x850 = INT32_MIN;
volatile uint64_t x852 = UINT64_MAX;
static int32_t t184 = 3;
int16_t x860 = -15;
static uint32_t x866 = 61733U;
static volatile int32_t t188 = 21;
uint64_t x870 = 160493911001601LLU;
int32_t t191 = 33;
int64_t x881 = INT64_MIN;
volatile int32_t t192 = -12;
static uint32_t x886 = UINT32_MAX;
int16_t x888 = -1;
uint8_t x891 = 0U;
volatile int32_t t194 = 3;
volatile int64_t x899 = 7199600LL;
int8_t x900 = INT8_MAX;
int64_t x901 = -55573000109LL;


void f0(void) {
    	int32_t x1 = 227205425;
	int8_t x3 = 1;
	int16_t x4 = -46;
	static int32_t t0 = -133060789;

    t0 = (((x1^x2)-x3)>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = 21U;
	uint64_t x7 = 26842LLU;
	volatile int32_t t1 = -1238811;

    t1 = (((x5^x6)-x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 57844619LLU;
	int32_t x10 = -25;
	static int32_t x11 = 87852;
	int16_t x12 = -295;

    t2 = (((x9^x10)-x11)>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 9077465450058438LLU;
	int16_t x15 = 7;
	volatile uint64_t x16 = 3821077944528928437LLU;
	static int32_t t3 = 29;

    t3 = (((x13^x14)-x15)>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint32_t x17 = 1352194362U;
	int32_t x18 = 349;
	uint8_t x19 = 1U;
	int64_t x20 = -87030857097986855LL;
	int32_t t4 = 5;

    t4 = (((x17^x18)-x19)>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x25 = UINT32_MAX;
	int16_t x26 = -1;
	int64_t x27 = 67495063910419LL;
	int8_t x28 = 3;
	int32_t t5 = 956158;

    t5 = (((x25^x26)-x27)>x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x29 = INT16_MAX;
	static int64_t x30 = INT64_MIN;
	int16_t x31 = INT16_MAX;
	static int64_t x32 = -9493132541725LL;
	int32_t t6 = -191;

    t6 = (((x29^x30)-x31)>x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x33 = INT32_MAX;
	uint32_t x35 = UINT32_MAX;
	volatile int8_t x36 = -36;
	static int32_t t7 = -206;

    t7 = (((x33^x34)-x35)>x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x38 = INT8_MIN;
	int8_t x39 = -5;
	int32_t t8 = -99134;

    t8 = (((x37^x38)-x39)>x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x47 = -1;
	int32_t t9 = 10;

    t9 = (((x45^x46)-x47)>x48);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x49 = -1LL;
	uint32_t x51 = UINT32_MAX;
	int64_t x52 = INT64_MAX;
	int32_t t10 = 40132246;

    t10 = (((x49^x50)-x51)>x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x55 = UINT64_MAX;
	int64_t x56 = -106LL;
	static volatile int32_t t11 = 3;

    t11 = (((x53^x54)-x55)>x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x58 = INT16_MAX;
	volatile int16_t x59 = INT16_MAX;
	int64_t x60 = INT64_MAX;
	volatile int32_t t12 = 1851750;

    t12 = (((x57^x58)-x59)>x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x63 = 190LL;
	uint8_t x64 = 4U;
	int32_t t13 = 0;

    t13 = (((x61^x62)-x63)>x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x65 = UINT8_MAX;
	static volatile int64_t x66 = -1019537045LL;
	int16_t x68 = 43;

    t14 = (((x65^x66)-x67)>x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x69 = 13042U;
	int8_t x71 = -1;
	int16_t x72 = INT16_MAX;
	int32_t t15 = -53;

    t15 = (((x69^x70)-x71)>x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x73 = -1;
	int64_t x75 = 762LL;
	volatile uint64_t x76 = UINT64_MAX;
	volatile int32_t t16 = -123597389;

    t16 = (((x73^x74)-x75)>x76);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x77 = UINT16_MAX;
	int64_t x79 = -6192699LL;
	int16_t x80 = INT16_MAX;

    t17 = (((x77^x78)-x79)>x80);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x81 = INT32_MIN;
	static int64_t x82 = 99858368377319176LL;
	uint64_t x84 = 886297519LLU;

    t18 = (((x81^x82)-x83)>x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x86 = UINT16_MAX;
	volatile int32_t t19 = 4271;

    t19 = (((x85^x86)-x87)>x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x93 = 101134U;
	int32_t x94 = -1;
	volatile int16_t x95 = INT16_MAX;
	static volatile int32_t t20 = -121914996;

    t20 = (((x93^x94)-x95)>x96);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x97 = 2LLU;
	static volatile int64_t x98 = INT64_MAX;
	int64_t x99 = 3519274231026784897LL;
	int16_t x100 = 1630;
	int32_t t21 = 117;

    t21 = (((x97^x98)-x99)>x100);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x102 = -394262;
	int64_t x103 = INT64_MIN;
	volatile int16_t x104 = 5089;
	int32_t t22 = 32465;

    t22 = (((x101^x102)-x103)>x104);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x105 = 173U;
	uint32_t x106 = UINT32_MAX;
	uint32_t x107 = UINT32_MAX;
	volatile uint8_t x108 = 63U;
	volatile int32_t t23 = -35544093;

    t23 = (((x105^x106)-x107)>x108);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x109 = 19658U;
	int32_t x111 = -1;
	int32_t t24 = 29992490;

    t24 = (((x109^x110)-x111)>x112);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x113 = 60475751U;
	static volatile int8_t x114 = INT8_MIN;
	volatile int32_t x116 = INT32_MAX;

    t25 = (((x113^x114)-x115)>x116);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x118 = INT32_MIN;
	uint8_t x119 = 0U;
	static int16_t x120 = -1;
	volatile int32_t t26 = -30;

    t26 = (((x117^x118)-x119)>x120);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x121 = 1U;
	static int16_t x122 = -1;
	volatile uint16_t x123 = UINT16_MAX;
	static int8_t x124 = -1;
	int32_t t27 = -2172;

    t27 = (((x121^x122)-x123)>x124);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x129 = 98;
	static volatile int8_t x131 = INT8_MAX;
	int32_t x132 = -99;
	static volatile int32_t t28 = 748;

    t28 = (((x129^x130)-x131)>x132);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x133 = INT8_MAX;
	int16_t x134 = 0;
	int64_t x135 = -1LL;
	uint8_t x136 = UINT8_MAX;

    t29 = (((x133^x134)-x135)>x136);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x137 = 235U;
	int64_t x139 = 1031393919LL;
	volatile int32_t t30 = 5591;

    t30 = (((x137^x138)-x139)>x140);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x141 = -1LL;
	int32_t x143 = 987156;
	int64_t x144 = -1LL;
	static volatile int32_t t31 = -138;

    t31 = (((x141^x142)-x143)>x144);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x146 = UINT32_MAX;
	volatile int64_t x147 = INT64_MAX;

    t32 = (((x145^x146)-x147)>x148);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x150 = -228;
	volatile int8_t x152 = INT8_MIN;
	int32_t t33 = 44;

    t33 = (((x149^x150)-x151)>x152);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x157 = 26;
	int64_t x158 = INT64_MAX;
	uint32_t x159 = 53124720U;
	uint32_t x160 = 246U;

    t34 = (((x157^x158)-x159)>x160);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x161 = 58U;
	int64_t x162 = INT64_MIN;
	volatile int32_t t35 = 272;

    t35 = (((x161^x162)-x163)>x164);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x169 = INT32_MAX;
	uint16_t x170 = UINT16_MAX;
	static int16_t x171 = 14565;
	static uint64_t x172 = UINT64_MAX;
	volatile int32_t t36 = 1;

    t36 = (((x169^x170)-x171)>x172);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x173 = 0U;
	int16_t x174 = INT16_MIN;
	int16_t x175 = INT16_MIN;
	int16_t x176 = 2;
	int32_t t37 = 22593;

    t37 = (((x173^x174)-x175)>x176);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x177 = UINT64_MAX;
	uint64_t x178 = 1326822LLU;
	uint16_t x179 = UINT16_MAX;
	volatile int32_t t38 = 1029047726;

    t38 = (((x177^x178)-x179)>x180);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x181 = INT8_MIN;
	static int32_t x182 = INT32_MAX;
	volatile int8_t x183 = INT8_MIN;
	int32_t x184 = INT32_MAX;
	static int32_t t39 = 2090282;

    t39 = (((x181^x182)-x183)>x184);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x189 = 122044949;
	int64_t x190 = -16053LL;
	int8_t x191 = INT8_MAX;
	static volatile int32_t t40 = 2;

    t40 = (((x189^x190)-x191)>x192);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x193 = -1;
	int16_t x195 = -1;
	volatile int32_t x196 = -1;

    t41 = (((x193^x194)-x195)>x196);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x197 = 511U;
	static int64_t x198 = -16193131364LL;
	volatile int32_t x200 = INT32_MAX;
	static int32_t t42 = 6604;

    t42 = (((x197^x198)-x199)>x200);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x202 = INT16_MAX;
	volatile int16_t x204 = INT16_MIN;
	volatile int32_t t43 = -1;

    t43 = (((x201^x202)-x203)>x204);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x205 = 12968U;
	uint8_t x206 = 15U;

    t44 = (((x205^x206)-x207)>x208);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x209 = INT16_MIN;
	volatile uint8_t x210 = 88U;
	int16_t x211 = -1;
	uint32_t x212 = UINT32_MAX;

    t45 = (((x209^x210)-x211)>x212);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x213 = INT32_MAX;
	uint64_t x214 = 1188806500724287433LLU;
	int8_t x215 = 6;
	int16_t x216 = INT16_MIN;
	int32_t t46 = 37644;

    t46 = (((x213^x214)-x215)>x216);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x217 = INT16_MAX;
	int16_t x218 = INT16_MIN;
	volatile uint8_t x220 = UINT8_MAX;
	volatile int32_t t47 = -13;

    t47 = (((x217^x218)-x219)>x220);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x221 = UINT64_MAX;
	static int16_t x222 = -1;
	int64_t x224 = -30LL;
	int32_t t48 = 4644;

    t48 = (((x221^x222)-x223)>x224);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x226 = INT8_MIN;
	static uint64_t x227 = 14245438465LLU;
	int32_t x228 = -1;
	volatile int32_t t49 = -29077;

    t49 = (((x225^x226)-x227)>x228);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x229 = INT64_MIN;
	uint16_t x230 = UINT16_MAX;
	int32_t x231 = INT32_MIN;
	int16_t x232 = INT16_MAX;
	volatile int32_t t50 = 11046;

    t50 = (((x229^x230)-x231)>x232);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x234 = 11433037U;
	uint32_t x235 = 28U;
	int32_t t51 = 80052;

    t51 = (((x233^x234)-x235)>x236);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x241 = 18052415619213202LLU;
	int8_t x243 = INT8_MAX;
	int64_t x244 = 24391LL;
	int32_t t52 = 1;

    t52 = (((x241^x242)-x243)>x244);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x245 = 1LL;
	static int8_t x246 = INT8_MIN;
	volatile int8_t x247 = INT8_MAX;
	static volatile int32_t t53 = -991;

    t53 = (((x245^x246)-x247)>x248);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x250 = 103194U;
	int32_t x251 = INT32_MAX;
	volatile int16_t x252 = -1;

    t54 = (((x249^x250)-x251)>x252);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x254 = 0;
	int32_t x255 = -12862245;

    t55 = (((x253^x254)-x255)>x256);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int16_t x257 = INT16_MIN;
	volatile int16_t x259 = INT16_MIN;
	static volatile int32_t x260 = -29069;
	volatile int32_t t56 = -841774;

    t56 = (((x257^x258)-x259)>x260);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x261 = 0U;
	static volatile int16_t x264 = 0;
	volatile int32_t t57 = -47;

    t57 = (((x261^x262)-x263)>x264);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x269 = 1;
	volatile uint8_t x271 = UINT8_MAX;
	int32_t t58 = -13;

    t58 = (((x269^x270)-x271)>x272);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x273 = -1127912LL;
	int16_t x274 = -9213;
	static int8_t x275 = 2;
	volatile uint16_t x276 = 339U;
	volatile int32_t t59 = 7;

    t59 = (((x273^x274)-x275)>x276);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x278 = UINT64_MAX;
	int32_t x279 = -1;
	int8_t x280 = -1;
	volatile int32_t t60 = 11283710;

    t60 = (((x277^x278)-x279)>x280);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x286 = UINT64_MAX;
	static volatile int8_t x288 = INT8_MIN;

    t61 = (((x285^x286)-x287)>x288);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x289 = -1;
	int8_t x290 = 0;
	uint8_t x291 = 1U;
	static int16_t x292 = INT16_MIN;
	static int32_t t62 = 262501398;

    t62 = (((x289^x290)-x291)>x292);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x293 = 22;
	uint32_t x294 = UINT32_MAX;
	int32_t x295 = 72268;
	uint32_t x296 = UINT32_MAX;

    t63 = (((x293^x294)-x295)>x296);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x297 = -1;
	uint64_t x298 = 67258738306LLU;
	volatile int32_t x299 = -1484100;
	volatile int8_t x300 = -1;
	volatile int32_t t64 = 11205;

    t64 = (((x297^x298)-x299)>x300);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x303 = UINT16_MAX;
	int64_t x304 = 177LL;
	volatile int32_t t65 = -2226;

    t65 = (((x301^x302)-x303)>x304);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x305 = INT32_MAX;
	static int16_t x306 = -1;
	int64_t x307 = INT64_MIN;
	static int16_t x308 = -16;

    t66 = (((x305^x306)-x307)>x308);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x309 = 0LLU;
	int64_t x310 = 109262768LL;
	int64_t x311 = INT64_MAX;
	int32_t t67 = 7590008;

    t67 = (((x309^x310)-x311)>x312);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x313 = INT8_MIN;
	static int64_t x316 = -1LL;
	volatile int32_t t68 = 28592433;

    t68 = (((x313^x314)-x315)>x316);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x317 = 34378178913103LL;
	int32_t x318 = -74853;
	int8_t x319 = INT8_MAX;
	volatile uint8_t x320 = UINT8_MAX;
	volatile int32_t t69 = -13362;

    t69 = (((x317^x318)-x319)>x320);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x321 = 121U;
	volatile uint8_t x322 = UINT8_MAX;
	int8_t x324 = -1;

    t70 = (((x321^x322)-x323)>x324);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x326 = INT16_MAX;
	volatile int32_t x327 = -489530;
	int32_t x328 = INT32_MIN;

    t71 = (((x325^x326)-x327)>x328);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x329 = 21342707655LLU;
	volatile uint16_t x330 = UINT16_MAX;
	int64_t x332 = INT64_MIN;
	int32_t t72 = 0;

    t72 = (((x329^x330)-x331)>x332);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint16_t x333 = UINT16_MAX;
	static int32_t x335 = INT32_MAX;
	uint8_t x336 = 1U;
	static volatile int32_t t73 = 2575;

    t73 = (((x333^x334)-x335)>x336);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x342 = UINT64_MAX;
	uint16_t x344 = UINT16_MAX;
	int32_t t74 = -830643275;

    t74 = (((x341^x342)-x343)>x344);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x345 = INT8_MIN;
	static int16_t x346 = INT16_MIN;
	static int64_t x347 = -939147095829844040LL;
	volatile int16_t x348 = INT16_MIN;
	static volatile int32_t t75 = 110457;

    t75 = (((x345^x346)-x347)>x348);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x349 = UINT64_MAX;
	volatile uint8_t x350 = UINT8_MAX;
	volatile int64_t x352 = INT64_MAX;

    t76 = (((x349^x350)-x351)>x352);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x353 = 2U;
	static uint8_t x354 = 5U;
	int32_t x356 = -2927015;
	int32_t t77 = 17441;

    t77 = (((x353^x354)-x355)>x356);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x357 = 24;
	static uint8_t x358 = UINT8_MAX;
	volatile int8_t x359 = 13;
	volatile uint32_t x360 = UINT32_MAX;
	static volatile int32_t t78 = 3387;

    t78 = (((x357^x358)-x359)>x360);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x361 = INT8_MIN;
	static volatile int32_t x363 = 63400186;
	int32_t t79 = 907470;

    t79 = (((x361^x362)-x363)>x364);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int64_t x367 = -26LL;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t80 = 49512;

    t80 = (((x365^x366)-x367)>x368);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x369 = -1;
	volatile int64_t x370 = -1LL;
	int8_t x372 = INT8_MIN;
	int32_t t81 = 1070972444;

    t81 = (((x369^x370)-x371)>x372);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x373 = 2038520886215758182LLU;
	int16_t x374 = 0;
	uint64_t x375 = 54938591LLU;
	uint8_t x376 = 0U;
	int32_t t82 = 375988;

    t82 = (((x373^x374)-x375)>x376);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x381 = -1LL;
	static uint32_t x382 = 455546U;
	uint8_t x383 = 4U;

    t83 = (((x381^x382)-x383)>x384);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x387 = INT8_MIN;
	int64_t x388 = INT64_MAX;
	int32_t t84 = -1;

    t84 = (((x385^x386)-x387)>x388);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x389 = INT16_MIN;
	uint64_t x390 = 29801837323LLU;
	volatile uint16_t x391 = 119U;
	int16_t x392 = -1659;
	int32_t t85 = 1;

    t85 = (((x389^x390)-x391)>x392);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x393 = 145LL;
	volatile int16_t x395 = -1;
	int32_t t86 = -7106;

    t86 = (((x393^x394)-x395)>x396);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x397 = INT8_MIN;
	uint64_t x398 = 6674375298164949LLU;
	static uint32_t x399 = UINT32_MAX;
	static volatile int32_t t87 = -82607;

    t87 = (((x397^x398)-x399)>x400);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x405 = 13U;
	static uint16_t x406 = 29U;
	int16_t x407 = -12693;
	volatile int32_t t88 = 6641;

    t88 = (((x405^x406)-x407)>x408);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x409 = INT64_MIN;
	uint64_t x410 = 3655LLU;
	int64_t x411 = 245632135160747165LL;
	int32_t x412 = 3;
	volatile int32_t t89 = -60;

    t89 = (((x409^x410)-x411)>x412);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int32_t x414 = INT32_MIN;
	int16_t x415 = INT16_MAX;
	uint32_t x416 = UINT32_MAX;
	static volatile int32_t t90 = 294475;

    t90 = (((x413^x414)-x415)>x416);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x417 = -36;
	int32_t x419 = 1190;
	int64_t x420 = -2LL;
	int32_t t91 = 16;

    t91 = (((x417^x418)-x419)>x420);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x421 = 1661U;
	volatile uint32_t x422 = UINT32_MAX;
	int32_t x423 = INT32_MIN;
	static int16_t x424 = 540;
	int32_t t92 = -18071101;

    t92 = (((x421^x422)-x423)>x424);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x425 = 35;
	static int32_t x426 = -1;
	volatile int16_t x427 = INT16_MIN;
	uint8_t x428 = 17U;
	volatile int32_t t93 = -30;

    t93 = (((x425^x426)-x427)>x428);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x429 = -1;
	int16_t x430 = -2378;
	uint16_t x431 = 302U;
	int8_t x432 = -1;

    t94 = (((x429^x430)-x431)>x432);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x433 = -1;
	static uint16_t x434 = 3U;
	uint64_t x435 = UINT64_MAX;
	int32_t x436 = 0;
	int32_t t95 = 5;

    t95 = (((x433^x434)-x435)>x436);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x437 = INT16_MAX;
	int64_t x439 = -1LL;
	int16_t x440 = 0;

    t96 = (((x437^x438)-x439)>x440);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x445 = INT32_MIN;
	int32_t x446 = INT32_MIN;
	uint32_t x448 = UINT32_MAX;
	volatile int32_t t97 = 14601015;

    t97 = (((x445^x446)-x447)>x448);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x449 = INT16_MAX;
	uint32_t x450 = UINT32_MAX;
	int32_t x451 = 2644246;
	int32_t x452 = -1;

    t98 = (((x449^x450)-x451)>x452);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x457 = 324985820712121LLU;
	uint64_t x458 = UINT64_MAX;
	uint32_t x459 = 4U;
	int16_t x460 = 983;
	volatile int32_t t99 = 1;

    t99 = (((x457^x458)-x459)>x460);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x462 = INT64_MAX;
	volatile uint16_t x463 = 20U;
	uint16_t x464 = 5U;
	int32_t t100 = 9;

    t100 = (((x461^x462)-x463)>x464);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x465 = 14U;
	int64_t x466 = -8941963236435LL;
	uint32_t x468 = 73341572U;
	volatile int32_t t101 = 407;

    t101 = (((x465^x466)-x467)>x468);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x470 = -111493699686297LL;
	volatile int32_t t102 = -173765572;

    t102 = (((x469^x470)-x471)>x472);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x473 = UINT8_MAX;
	volatile uint64_t x474 = 443446582LLU;
	uint32_t x475 = UINT32_MAX;
	static int8_t x476 = INT8_MIN;
	volatile int32_t t103 = -129635648;

    t103 = (((x473^x474)-x475)>x476);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x477 = 6008U;
	uint8_t x478 = 0U;
	int32_t x479 = INT32_MAX;
	static int32_t t104 = 26807;

    t104 = (((x477^x478)-x479)>x480);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x485 = INT32_MAX;
	static int64_t x486 = INT64_MAX;
	volatile int8_t x487 = INT8_MAX;
	uint16_t x488 = UINT16_MAX;
	int32_t t105 = -2497779;

    t105 = (((x485^x486)-x487)>x488);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x489 = INT8_MIN;
	int8_t x490 = INT8_MIN;
	static int8_t x491 = INT8_MAX;
	volatile uint32_t x492 = UINT32_MAX;
	static int32_t t106 = -6094294;

    t106 = (((x489^x490)-x491)>x492);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x493 = 933;
	static volatile int32_t x494 = -1044029604;
	int8_t x495 = INT8_MAX;
	int32_t t107 = 83776127;

    t107 = (((x493^x494)-x495)>x496);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x497 = 166250U;
	uint32_t x498 = 369U;
	uint16_t x499 = UINT16_MAX;
	int32_t x500 = INT32_MIN;

    t108 = (((x497^x498)-x499)>x500);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x501 = -1LL;
	uint16_t x502 = UINT16_MAX;
	int32_t x503 = INT32_MAX;
	int16_t x504 = INT16_MIN;

    t109 = (((x501^x502)-x503)>x504);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint8_t x506 = 95U;
	volatile int32_t t110 = -1477;

    t110 = (((x505^x506)-x507)>x508);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x509 = INT64_MIN;
	static int64_t x510 = INT64_MAX;
	volatile uint16_t x512 = 6U;
	static volatile int32_t t111 = -16325;

    t111 = (((x509^x510)-x511)>x512);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x513 = INT8_MIN;
	uint64_t x516 = 1603613281142LLU;
	static int32_t t112 = 194206;

    t112 = (((x513^x514)-x515)>x516);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint64_t x519 = UINT64_MAX;
	int8_t x520 = -1;

    t113 = (((x517^x518)-x519)>x520);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x526 = INT32_MAX;
	volatile uint64_t x527 = UINT64_MAX;
	int8_t x528 = INT8_MIN;

    t114 = (((x525^x526)-x527)>x528);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x529 = UINT8_MAX;
	uint32_t x531 = UINT32_MAX;
	uint8_t x532 = 61U;
	int32_t t115 = -12;

    t115 = (((x529^x530)-x531)>x532);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x535 = INT16_MIN;
	int32_t x536 = -1;
	int32_t t116 = 51;

    t116 = (((x533^x534)-x535)>x536);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x537 = UINT8_MAX;
	int32_t x538 = INT32_MIN;
	int32_t x540 = INT32_MAX;
	int32_t t117 = 12939;

    t117 = (((x537^x538)-x539)>x540);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x541 = 0;
	int8_t x543 = -1;
	volatile int32_t t118 = 25;

    t118 = (((x541^x542)-x543)>x544);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x546 = INT64_MAX;
	int64_t x547 = INT64_MIN;
	int32_t t119 = -1015;

    t119 = (((x545^x546)-x547)>x548);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x549 = 7U;
	int64_t x550 = 253LL;
	volatile int8_t x551 = INT8_MIN;
	static uint32_t x552 = 44796966U;
	static volatile int32_t t120 = -5224414;

    t120 = (((x549^x550)-x551)>x552);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x554 = -1;
	uint8_t x555 = 1U;
	volatile int32_t t121 = 16794;

    t121 = (((x553^x554)-x555)>x556);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x557 = 466427355LLU;
	volatile int8_t x558 = INT8_MIN;
	uint32_t x559 = 173U;
	static int8_t x560 = 12;
	volatile int32_t t122 = 159086;

    t122 = (((x557^x558)-x559)>x560);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x561 = INT8_MAX;
	static int8_t x562 = INT8_MIN;
	static uint16_t x563 = UINT16_MAX;
	int32_t x564 = 8;
	volatile int32_t t123 = -1601563;

    t123 = (((x561^x562)-x563)>x564);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x565 = -200273538LL;
	volatile int8_t x567 = -1;
	static int32_t t124 = -107350416;

    t124 = (((x565^x566)-x567)>x568);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x569 = -2085358;
	int8_t x570 = -1;
	volatile uint32_t x571 = UINT32_MAX;
	volatile int32_t t125 = 111249;

    t125 = (((x569^x570)-x571)>x572);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x573 = INT64_MIN;
	uint32_t x575 = 478U;
	static int64_t x576 = -1LL;
	volatile int32_t t126 = -2206;

    t126 = (((x573^x574)-x575)>x576);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x577 = INT16_MIN;
	int32_t x578 = 1;
	static uint8_t x579 = 0U;
	int64_t x580 = 33LL;
	volatile int32_t t127 = -2104;

    t127 = (((x577^x578)-x579)>x580);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x581 = 0;
	int32_t x582 = INT32_MIN;
	int16_t x584 = INT16_MIN;

    t128 = (((x581^x582)-x583)>x584);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x589 = 6773234807LLU;
	int8_t x592 = -1;
	static int32_t t129 = 1;

    t129 = (((x589^x590)-x591)>x592);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x597 = -5;
	volatile int8_t x598 = -1;
	uint32_t x599 = UINT32_MAX;
	int16_t x600 = -1;

    t130 = (((x597^x598)-x599)>x600);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x601 = 7087LLU;
	uint32_t x602 = 1U;
	uint64_t x603 = 190790287LLU;
	volatile int32_t t131 = 12975287;

    t131 = (((x601^x602)-x603)>x604);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x605 = INT32_MIN;
	int8_t x606 = INT8_MAX;
	static volatile int16_t x607 = -15800;
	static int32_t t132 = 189;

    t132 = (((x605^x606)-x607)>x608);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x609 = INT8_MIN;
	uint8_t x612 = 1U;
	volatile int32_t t133 = 18;

    t133 = (((x609^x610)-x611)>x612);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x613 = 7U;
	volatile int32_t x614 = INT32_MAX;
	int32_t x615 = -1;
	int64_t x616 = -5008338136867LL;
	int32_t t134 = 33172312;

    t134 = (((x613^x614)-x615)>x616);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x617 = -523664;
	static uint8_t x618 = 0U;
	uint16_t x619 = 28223U;
	int64_t x620 = INT64_MAX;
	int32_t t135 = 24382871;

    t135 = (((x617^x618)-x619)>x620);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x621 = -9;
	uint16_t x622 = 0U;
	volatile int16_t x623 = 1;
	int32_t x624 = INT32_MIN;
	static int32_t t136 = -464556674;

    t136 = (((x621^x622)-x623)>x624);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x627 = INT16_MIN;
	uint16_t x628 = 116U;
	int32_t t137 = -6;

    t137 = (((x625^x626)-x627)>x628);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x629 = UINT8_MAX;
	static int32_t x630 = -6;
	int16_t x632 = INT16_MAX;
	int32_t t138 = -102800;

    t138 = (((x629^x630)-x631)>x632);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x634 = 364259LLU;
	int8_t x635 = 0;
	int16_t x636 = INT16_MAX;
	int32_t t139 = 388200;

    t139 = (((x633^x634)-x635)>x636);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x637 = INT16_MAX;
	int64_t x638 = INT64_MAX;
	volatile int64_t x639 = 5693LL;
	static volatile int32_t t140 = 27;

    t140 = (((x637^x638)-x639)>x640);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x645 = 10U;
	volatile int32_t t141 = -212469161;

    t141 = (((x645^x646)-x647)>x648);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x649 = 6857465291277897180LLU;
	volatile int64_t x650 = INT64_MIN;
	uint16_t x651 = UINT16_MAX;
	uint64_t x652 = 25128315LLU;

    t142 = (((x649^x650)-x651)>x652);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x653 = -1LL;
	static int8_t x654 = INT8_MIN;
	int8_t x656 = INT8_MIN;
	volatile int32_t t143 = -201;

    t143 = (((x653^x654)-x655)>x656);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x657 = INT32_MIN;
	static int64_t x658 = 2990907LL;
	uint8_t x660 = 3U;
	volatile int32_t t144 = -1498;

    t144 = (((x657^x658)-x659)>x660);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x661 = INT16_MIN;
	int64_t x662 = 228047473740016LL;
	int32_t t145 = -28656;

    t145 = (((x661^x662)-x663)>x664);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x665 = 518183U;
	volatile uint64_t x666 = 117498377LLU;
	uint64_t x667 = 973274883634LLU;
	uint8_t x668 = UINT8_MAX;
	volatile int32_t t146 = -7182;

    t146 = (((x665^x666)-x667)>x668);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x669 = 230439679883778LLU;
	volatile int16_t x670 = INT16_MIN;
	int16_t x671 = INT16_MAX;
	volatile int32_t t147 = -21767064;

    t147 = (((x669^x670)-x671)>x672);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x673 = 12;
	static uint64_t x674 = 2202LLU;
	int32_t x675 = INT32_MIN;
	int8_t x676 = -1;

    t148 = (((x673^x674)-x675)>x676);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x677 = UINT8_MAX;
	int16_t x678 = INT16_MIN;
	volatile uint64_t x679 = UINT64_MAX;
	uint64_t x680 = 44854LLU;
	static volatile int32_t t149 = 444228371;

    t149 = (((x677^x678)-x679)>x680);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x681 = 2142918323U;
	int8_t x682 = -1;
	int64_t x683 = INT64_MAX;
	int64_t x684 = -1LL;
	int32_t t150 = 63314;

    t150 = (((x681^x682)-x683)>x684);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x686 = INT64_MIN;
	int8_t x687 = INT8_MIN;
	int8_t x688 = -62;
	volatile int32_t t151 = 30;

    t151 = (((x685^x686)-x687)>x688);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x689 = -9165182;
	volatile int64_t x690 = INT64_MIN;
	int32_t x691 = 0;
	uint16_t x692 = 5727U;
	volatile int32_t t152 = -12769450;

    t152 = (((x689^x690)-x691)>x692);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x697 = INT32_MIN;
	volatile int8_t x699 = 1;

    t153 = (((x697^x698)-x699)>x700);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x701 = -1;
	uint16_t x702 = 3U;
	int8_t x703 = -1;
	static uint16_t x704 = UINT16_MAX;
	volatile int32_t t154 = 237070304;

    t154 = (((x701^x702)-x703)>x704);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x705 = INT8_MAX;
	int32_t x706 = -1;
	int16_t x707 = INT16_MIN;
	volatile int64_t x708 = INT64_MAX;
	volatile int32_t t155 = 20;

    t155 = (((x705^x706)-x707)>x708);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x709 = 2959;
	int16_t x710 = -1;
	int64_t x711 = 457430828281825LL;
	uint64_t x712 = 1356390742LLU;

    t156 = (((x709^x710)-x711)>x712);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x718 = UINT16_MAX;
	uint64_t x719 = 394LLU;
	uint16_t x720 = 10816U;
	volatile int32_t t157 = -1448;

    t157 = (((x717^x718)-x719)>x720);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x721 = INT16_MAX;
	static int8_t x722 = INT8_MIN;
	int32_t x723 = INT32_MIN;
	volatile uint8_t x724 = UINT8_MAX;
	volatile int32_t t158 = 239790;

    t158 = (((x721^x722)-x723)>x724);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x725 = INT32_MAX;
	uint8_t x727 = UINT8_MAX;
	volatile int16_t x728 = -156;
	volatile int32_t t159 = -197;

    t159 = (((x725^x726)-x727)>x728);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x729 = -1;
	int64_t x730 = -35229LL;
	int16_t x731 = -1;
	uint64_t x732 = 89891213335LLU;
	volatile int32_t t160 = -393230;

    t160 = (((x729^x730)-x731)>x732);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x733 = 23191635;
	static int64_t x734 = INT64_MAX;

    t161 = (((x733^x734)-x735)>x736);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x737 = -2236;
	int8_t x738 = INT8_MAX;
	static int8_t x739 = INT8_MIN;
	int16_t x740 = INT16_MAX;
	static int32_t t162 = 24921;

    t162 = (((x737^x738)-x739)>x740);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x741 = 472130340674088975LL;
	static uint16_t x744 = 17548U;

    t163 = (((x741^x742)-x743)>x744);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x745 = 22538U;
	uint32_t x746 = UINT32_MAX;
	static volatile int32_t x747 = INT32_MIN;
	uint8_t x748 = UINT8_MAX;

    t164 = (((x745^x746)-x747)>x748);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint32_t x757 = 2U;
	int32_t x758 = INT32_MAX;
	uint16_t x760 = 797U;
	int32_t t165 = 215;

    t165 = (((x757^x758)-x759)>x760);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x761 = -1;
	volatile int16_t x762 = -271;
	int8_t x763 = -3;
	static volatile int16_t x764 = INT16_MIN;
	static volatile int32_t t166 = -22655946;

    t166 = (((x761^x762)-x763)>x764);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x769 = 7163616U;
	uint8_t x770 = 43U;
	uint8_t x771 = 0U;
	static int32_t x772 = INT32_MIN;
	int32_t t167 = 26505;

    t167 = (((x769^x770)-x771)>x772);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x777 = 20867U;
	volatile int8_t x779 = 30;
	static uint32_t x780 = 972U;
	static int32_t t168 = 74648188;

    t168 = (((x777^x778)-x779)>x780);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x781 = 2U;
	int16_t x782 = 237;
	static volatile int16_t x783 = INT16_MIN;
	int32_t t169 = -1145;

    t169 = (((x781^x782)-x783)>x784);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x789 = 1007747U;
	uint16_t x790 = 86U;
	int32_t x791 = -1;
	int32_t x792 = INT32_MIN;
	int32_t t170 = 1;

    t170 = (((x789^x790)-x791)>x792);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x793 = UINT16_MAX;
	uint8_t x794 = 2U;
	volatile uint8_t x795 = 119U;
	int32_t t171 = -15315;

    t171 = (((x793^x794)-x795)>x796);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x798 = -68945830;
	int16_t x799 = INT16_MIN;
	volatile int32_t t172 = 14752109;

    t172 = (((x797^x798)-x799)>x800);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x802 = 195076;
	int8_t x803 = INT8_MIN;
	static uint16_t x804 = UINT16_MAX;
	int32_t t173 = -3;

    t173 = (((x801^x802)-x803)>x804);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x806 = INT8_MIN;
	volatile int64_t x808 = INT64_MIN;
	int32_t t174 = 2919;

    t174 = (((x805^x806)-x807)>x808);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x809 = INT8_MIN;
	volatile int32_t x810 = INT32_MIN;
	static uint64_t x812 = 3100303001060LLU;
	int32_t t175 = -4389284;

    t175 = (((x809^x810)-x811)>x812);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint64_t x817 = 24138659LLU;
	volatile uint32_t x818 = 350368436U;
	int16_t x820 = INT16_MIN;

    t176 = (((x817^x818)-x819)>x820);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x821 = INT16_MIN;
	int8_t x822 = INT8_MIN;
	volatile uint16_t x823 = 116U;
	volatile int8_t x824 = INT8_MIN;
	static int32_t t177 = 620406;

    t177 = (((x821^x822)-x823)>x824);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x825 = 1056U;
	int64_t x826 = INT64_MIN;
	uint32_t x828 = UINT32_MAX;
	volatile int32_t t178 = 143964983;

    t178 = (((x825^x826)-x827)>x828);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x829 = -263508033LL;
	int32_t x830 = 228435623;
	static volatile int32_t t179 = 141478895;

    t179 = (((x829^x830)-x831)>x832);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x833 = INT8_MAX;
	volatile int16_t x834 = 2;
	uint32_t x835 = 2U;
	int16_t x836 = INT16_MIN;
	int32_t t180 = -1;

    t180 = (((x833^x834)-x835)>x836);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x837 = INT8_MIN;
	int64_t x839 = -1LL;

    t181 = (((x837^x838)-x839)>x840);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x841 = INT32_MAX;
	uint8_t x842 = 1U;
	uint32_t x843 = 983U;
	int16_t x844 = INT16_MIN;

    t182 = (((x841^x842)-x843)>x844);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x845 = UINT8_MAX;
	volatile int16_t x846 = INT16_MAX;
	volatile int8_t x847 = INT8_MIN;
	volatile uint16_t x848 = 0U;

    t183 = (((x845^x846)-x847)>x848);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x849 = -519369180448965LL;
	static uint64_t x851 = 0LLU;

    t184 = (((x849^x850)-x851)>x852);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x853 = 12279U;
	volatile uint32_t x854 = 2981U;
	uint32_t x855 = 3585931U;
	uint64_t x856 = 2080492LLU;
	static volatile int32_t t185 = 53801;

    t185 = (((x853^x854)-x855)>x856);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x857 = UINT32_MAX;
	int64_t x858 = -2LL;
	int16_t x859 = -1;
	int32_t t186 = 1;

    t186 = (((x857^x858)-x859)>x860);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x861 = INT8_MIN;
	static int16_t x862 = 19;
	int16_t x863 = 12599;
	int64_t x864 = INT64_MAX;
	static volatile int32_t t187 = 7354924;

    t187 = (((x861^x862)-x863)>x864);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x865 = INT32_MIN;
	volatile int16_t x867 = -30;
	int8_t x868 = INT8_MIN;

    t188 = (((x865^x866)-x867)>x868);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x869 = INT64_MAX;
	int32_t x871 = -17760;
	int16_t x872 = 250;
	int32_t t189 = 2018;

    t189 = (((x869^x870)-x871)>x872);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x873 = UINT8_MAX;
	static uint8_t x874 = UINT8_MAX;
	volatile int16_t x875 = 78;
	int32_t x876 = -1;
	static int32_t t190 = 935628168;

    t190 = (((x873^x874)-x875)>x876);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x877 = UINT64_MAX;
	int32_t x878 = INT32_MAX;
	int16_t x879 = 1;
	uint8_t x880 = 1U;

    t191 = (((x877^x878)-x879)>x880);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x882 = -1;
	uint64_t x883 = UINT64_MAX;
	static int8_t x884 = -1;

    t192 = (((x881^x882)-x883)>x884);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int16_t x885 = -14602;
	uint32_t x887 = 412865U;
	int32_t t193 = -11;

    t193 = (((x885^x886)-x887)>x888);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x889 = INT32_MIN;
	static int64_t x890 = INT64_MIN;
	int8_t x892 = 1;

    t194 = (((x889^x890)-x891)>x892);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x893 = 3;
	int8_t x894 = -1;
	uint32_t x895 = 648352638U;
	volatile int16_t x896 = 30;
	int32_t t195 = 35750473;

    t195 = (((x893^x894)-x895)>x896);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x897 = 357323387085116LLU;
	volatile int16_t x898 = INT16_MAX;
	volatile int32_t t196 = 7365;

    t196 = (((x897^x898)-x899)>x900);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x902 = -37382035547463LL;
	static int16_t x903 = -17;
	static uint8_t x904 = 2U;
	int32_t t197 = -36479;

    t197 = (((x901^x902)-x903)>x904);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x905 = INT8_MIN;
	static volatile int16_t x906 = INT16_MIN;
	int32_t x907 = -1;
	static int16_t x908 = 766;
	volatile int32_t t198 = -11630;

    t198 = (((x905^x906)-x907)>x908);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x909 = INT16_MAX;
	uint64_t x910 = 1755436382751LLU;
	volatile uint16_t x911 = 7980U;
	uint16_t x912 = 15U;
	int32_t t199 = -63376;

    t199 = (((x909^x910)-x911)>x912);

    if (t199 != 1) { NG(); } else { ; }
	
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



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

static int32_t t1 = 1;
int64_t x12 = INT64_MIN;
int8_t x13 = INT8_MIN;
int8_t x18 = -1;
volatile uint64_t x27 = UINT64_MAX;
static int8_t x29 = INT8_MIN;
int64_t x31 = INT64_MIN;
int64_t x32 = INT64_MAX;
int64_t x35 = INT64_MIN;
int64_t x47 = INT64_MIN;
static int32_t x56 = -1;
int32_t t13 = -32427511;
static int32_t x66 = 519699;
static uint64_t x69 = 221249917494443798LLU;
static uint32_t x72 = 61U;
volatile int64_t x75 = INT64_MAX;
int8_t x76 = INT8_MIN;
int32_t x78 = -13396;
int8_t x83 = INT8_MAX;
uint32_t x84 = 55U;
int16_t x87 = -12057;
volatile uint32_t x88 = UINT32_MAX;
static int8_t x89 = INT8_MIN;
int32_t x101 = INT32_MAX;
volatile int16_t x105 = 47;
uint8_t x110 = 16U;
static uint32_t x113 = 9472688U;
volatile int32_t t28 = -1;
static int32_t x119 = INT32_MAX;
int32_t t31 = 62665534;
int16_t x132 = INT16_MAX;
static int32_t t35 = -495746;
static uint64_t x145 = 1134LLU;
int8_t x146 = -1;
int32_t t38 = -343;
int8_t x159 = INT8_MIN;
static uint32_t x162 = 2U;
int32_t t41 = -609838940;
int64_t x172 = -26719883455017773LL;
volatile int64_t x175 = 26850633LL;
uint8_t x177 = 59U;
uint8_t x184 = 15U;
static int8_t x187 = -1;
volatile int64_t x193 = INT64_MAX;
int8_t x194 = INT8_MIN;
volatile int16_t x195 = INT16_MIN;
static uint16_t x198 = 0U;
int32_t x201 = -2945;
int32_t x203 = 5746;
int8_t x204 = -3;
uint64_t x209 = UINT64_MAX;
static volatile int32_t t54 = -1;
int8_t x227 = INT8_MAX;
static int8_t x228 = -1;
volatile int32_t t56 = -586661549;
uint64_t x233 = 22020619844066LLU;
static volatile int16_t x238 = INT16_MIN;
uint32_t x239 = 126U;
int32_t t59 = 2;
int16_t x242 = 25;
static int8_t x243 = INT8_MIN;
int64_t x251 = 0LL;
volatile int16_t x255 = -1;
static volatile int32_t x262 = INT32_MAX;
uint16_t x266 = 3590U;
int32_t t66 = -6379881;
static volatile int32_t t68 = 324654;
static int8_t x279 = 2;
static int16_t x292 = 491;
int64_t x293 = INT64_MIN;
int32_t x295 = 24815219;
int64_t x303 = INT64_MIN;
int32_t t75 = 471885131;
int16_t x308 = INT16_MAX;
int64_t x314 = INT64_MIN;
volatile int32_t t78 = -3019125;
uint8_t x318 = UINT8_MAX;
int32_t t79 = 97062;
static int16_t x321 = -936;
int16_t x324 = INT16_MAX;
int8_t x325 = INT8_MIN;
uint16_t x326 = UINT16_MAX;
int64_t x327 = -1LL;
int64_t x328 = INT64_MIN;
volatile uint8_t x330 = 1U;
uint64_t x332 = UINT64_MAX;
volatile int32_t x333 = -1;
volatile int32_t t86 = 1;
int8_t x350 = INT8_MIN;
int32_t t88 = 0;
volatile uint32_t x359 = 57068366U;
int16_t x362 = -9225;
uint64_t x366 = UINT64_MAX;
static volatile int32_t t93 = -3;
int64_t x379 = -1LL;
int8_t x380 = 7;
int8_t x383 = -52;
static uint8_t x396 = 2U;
int16_t x397 = INT16_MAX;
int32_t x400 = -1;
int32_t t99 = 15;
uint8_t x403 = 1U;
int32_t t100 = 189386;
static int8_t x406 = -14;
int64_t x411 = INT64_MAX;
int64_t x413 = 1185548648091LL;
uint64_t x415 = 11315386832490LLU;
volatile int32_t t103 = -1;
int64_t x419 = INT64_MIN;
uint16_t x420 = 3138U;
int32_t t105 = -10994;
volatile int32_t x428 = 87237;
int64_t x431 = INT64_MIN;
int32_t t107 = 1679;
uint8_t x435 = 86U;
volatile int32_t x436 = INT32_MIN;
uint8_t x442 = 8U;
int64_t x448 = -1LL;
volatile int32_t t111 = 48763730;
int32_t t112 = -65529496;
volatile int32_t x456 = -1;
volatile int64_t x458 = INT64_MIN;
int32_t x469 = 1913;
volatile int32_t t117 = 16;
static int32_t x474 = 897;
static volatile uint8_t x480 = 1U;
int64_t x484 = -1LL;
int32_t x494 = INT32_MIN;
int8_t x496 = INT8_MAX;
int16_t x498 = -1;
volatile int16_t x503 = INT16_MIN;
static int8_t x506 = INT8_MIN;
int64_t x509 = INT64_MIN;
int16_t x511 = INT16_MIN;
static int8_t x512 = 9;
volatile int32_t t127 = 532507813;
uint16_t x516 = 394U;
int16_t x524 = -1;
int32_t x526 = 56476339;
int64_t x527 = INT64_MIN;
volatile uint32_t x530 = 133305U;
int32_t x535 = 38;
int64_t x555 = INT64_MIN;
int8_t x557 = -1;
int64_t x559 = 0LL;
uint8_t x561 = 4U;
uint16_t x566 = 374U;
volatile int32_t t142 = -195008;
static volatile uint8_t x573 = 1U;
uint16_t x577 = 31448U;
int16_t x584 = -6190;
volatile int32_t t146 = 89198;
uint64_t x595 = 909067637598983LLU;
volatile int8_t x611 = INT8_MIN;
volatile int32_t t152 = 9;
static int32_t t153 = 675112;
volatile int64_t x619 = -1LL;
int32_t t154 = -13;
uint64_t x622 = 515374488521470LLU;
int8_t x633 = -1;
int32_t t158 = -14;
volatile uint32_t x648 = 552U;
volatile int64_t x656 = INT64_MIN;
volatile int32_t x657 = INT32_MAX;
int8_t x659 = -4;
int32_t t165 = -1041;
static int16_t x668 = -7;
int16_t x679 = -1;
int64_t x689 = INT64_MIN;
int32_t x690 = 0;
int8_t x693 = INT8_MAX;
uint32_t x695 = 18U;
int8_t x704 = INT8_MIN;
volatile int32_t t175 = -766;
volatile int32_t t176 = -7320;
int8_t x709 = -1;
uint64_t x719 = UINT64_MAX;
int32_t x720 = INT32_MAX;
volatile int32_t t179 = -13878997;
int32_t x722 = INT32_MIN;
int8_t x723 = -1;
uint64_t x728 = 71823030512709144LLU;
int16_t x733 = -1;
int8_t x746 = INT8_MAX;
int32_t t186 = 75592455;
int8_t x752 = -15;
int64_t x754 = -1LL;
int8_t x759 = -17;
uint8_t x764 = 80U;
static int32_t t190 = -23168;
static int32_t x769 = INT32_MAX;
int32_t t192 = -63676;
int8_t x780 = INT8_MIN;
uint16_t x784 = 46U;
static uint64_t x786 = 1402801009122872577LLU;
uint8_t x787 = 30U;
int8_t x796 = INT8_MIN;


void f0(void) {
    	uint64_t x1 = 13LLU;
	int16_t x2 = INT16_MIN;
	volatile uint8_t x3 = UINT8_MAX;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -200171;

    t0 = ((x1==x2)+(x3==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 336U;
	uint64_t x6 = 6879967172272216225LLU;
	int8_t x7 = -1;
	static uint8_t x8 = 1U;

    t1 = ((x5==x6)+(x7==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 27955LL;
	uint8_t x10 = UINT8_MAX;
	uint64_t x11 = UINT64_MAX;
	volatile int32_t t2 = -3;

    t2 = ((x9==x10)+(x11==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x14 = 4593U;
	int16_t x15 = 108;
	int32_t x16 = -1;
	static volatile int32_t t3 = -58948572;

    t3 = ((x13==x14)+(x15==x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x17 = INT8_MAX;
	int16_t x19 = -1;
	uint8_t x20 = 2U;
	int32_t t4 = 3959;

    t4 = ((x17==x18)+(x19==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 19025494U;
	uint16_t x22 = 11769U;
	uint32_t x23 = 50110U;
	int16_t x24 = INT16_MAX;
	static int32_t t5 = 58231002;

    t5 = ((x21==x22)+(x23==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	int64_t x26 = -204314097634LL;
	int64_t x28 = INT64_MIN;
	volatile int32_t t6 = 13174110;

    t6 = ((x25==x26)+(x27==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = -45;
	volatile int32_t t7 = 499093526;

    t7 = ((x29==x30)+(x31==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = -1LL;
	static int64_t x34 = 24LL;
	uint16_t x36 = 32U;
	int32_t t8 = -789627;

    t8 = ((x33==x34)+(x35==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	int8_t x38 = -1;
	uint64_t x39 = 57LLU;
	uint32_t x40 = UINT32_MAX;
	volatile int32_t t9 = -1534429;

    t9 = ((x37==x38)+(x39==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	static int64_t x42 = -3638041901LL;
	int32_t x43 = 71504;
	int32_t x44 = INT32_MIN;
	int32_t t10 = 124068050;

    t10 = ((x41==x42)+(x43==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -847;
	static volatile int32_t x46 = INT32_MIN;
	int32_t x48 = -1;
	volatile int32_t t11 = -88304702;

    t11 = ((x45==x46)+(x47==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	static volatile int8_t x50 = 0;
	int8_t x51 = -1;
	int16_t x52 = 115;
	int32_t t12 = 104;

    t12 = ((x49==x50)+(x51==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x53 = 50U;
	volatile uint32_t x54 = UINT32_MAX;
	uint16_t x55 = 923U;

    t13 = ((x53==x54)+(x55==x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 101U;
	volatile int64_t x58 = INT64_MAX;
	volatile int16_t x59 = INT16_MIN;
	volatile int16_t x60 = 252;
	volatile int32_t t14 = 25565786;

    t14 = ((x57==x58)+(x59==x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x61 = -1;
	uint32_t x62 = UINT32_MAX;
	int64_t x63 = INT64_MIN;
	static int16_t x64 = INT16_MAX;
	int32_t t15 = 2813925;

    t15 = ((x61==x62)+(x63==x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = UINT64_MAX;
	static uint16_t x67 = 6572U;
	int64_t x68 = INT64_MAX;
	volatile int32_t t16 = 138667322;

    t16 = ((x65==x66)+(x67==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x70 = INT8_MIN;
	volatile int16_t x71 = INT16_MIN;
	volatile int32_t t17 = -84381091;

    t17 = ((x69==x70)+(x71==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 1U;
	static int32_t x74 = -48734;
	int32_t t18 = -26385949;

    t18 = ((x73==x74)+(x75==x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = -1;
	int16_t x79 = INT16_MAX;
	uint8_t x80 = 16U;
	volatile int32_t t19 = -2;

    t19 = ((x77==x78)+(x79==x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 29857U;
	int16_t x82 = INT16_MIN;
	static volatile int32_t t20 = 431;

    t20 = ((x81==x82)+(x83==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = -1;
	int16_t x86 = -1;
	volatile int32_t t21 = 3;

    t21 = ((x85==x86)+(x87==x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x90 = UINT32_MAX;
	uint8_t x91 = UINT8_MAX;
	int32_t x92 = -1;
	int32_t t22 = -4875;

    t22 = ((x89==x90)+(x91==x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = 15;
	uint64_t x94 = 3482LLU;
	int8_t x95 = INT8_MIN;
	static int16_t x96 = 9846;
	volatile int32_t t23 = 119;

    t23 = ((x93==x94)+(x95==x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x97 = INT64_MIN;
	int64_t x98 = 15496520LL;
	volatile uint64_t x99 = 20397623112587449LLU;
	static int8_t x100 = INT8_MIN;
	int32_t t24 = -202;

    t24 = ((x97==x98)+(x99==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int8_t x102 = INT8_MIN;
	volatile uint64_t x103 = 207464819LLU;
	int8_t x104 = INT8_MAX;
	int32_t t25 = 3520450;

    t25 = ((x101==x102)+(x103==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x106 = INT32_MIN;
	static uint8_t x107 = 13U;
	uint32_t x108 = UINT32_MAX;
	static volatile int32_t t26 = 98218;

    t26 = ((x105==x106)+(x107==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x109 = 121809502169LLU;
	volatile int64_t x111 = -1LL;
	uint8_t x112 = 5U;
	volatile int32_t t27 = -1;

    t27 = ((x109==x110)+(x111==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x114 = 6407450U;
	volatile int64_t x115 = 507369588494879LL;
	int8_t x116 = INT8_MAX;

    t28 = ((x113==x114)+(x115==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 20U;
	int32_t x118 = -123;
	uint64_t x120 = UINT64_MAX;
	volatile int32_t t29 = -385956;

    t29 = ((x117==x118)+(x119==x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = 99U;
	int64_t x122 = -64141590349LL;
	static int16_t x123 = -5160;
	int32_t x124 = INT32_MIN;
	static volatile int32_t t30 = -2;

    t30 = ((x121==x122)+(x123==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int64_t x125 = -85117867586564943LL;
	int64_t x126 = INT64_MIN;
	int8_t x127 = INT8_MIN;
	volatile int32_t x128 = INT32_MIN;

    t31 = ((x125==x126)+(x127==x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MAX;
	int64_t x130 = INT64_MIN;
	uint16_t x131 = 2U;
	volatile int32_t t32 = 794365529;

    t32 = ((x129==x130)+(x131==x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 226006777U;
	int64_t x134 = -1LL;
	int32_t x135 = INT32_MAX;
	volatile uint16_t x136 = 16U;
	volatile int32_t t33 = -21;

    t33 = ((x133==x134)+(x135==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x137 = 1;
	int16_t x138 = INT16_MAX;
	static uint16_t x139 = 1U;
	uint32_t x140 = 8U;
	volatile int32_t t34 = -644054480;

    t34 = ((x137==x138)+(x139==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x141 = INT16_MAX;
	uint8_t x142 = 2U;
	int64_t x143 = INT64_MIN;
	int8_t x144 = -1;

    t35 = ((x141==x142)+(x143==x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x147 = INT32_MIN;
	uint64_t x148 = 63586116LLU;
	volatile int32_t t36 = -9995;

    t36 = ((x145==x146)+(x147==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MIN;
	uint8_t x150 = 26U;
	volatile int16_t x151 = INT16_MAX;
	int32_t x152 = INT32_MIN;
	int32_t t37 = 1161604;

    t37 = ((x149==x150)+(x151==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MAX;
	uint8_t x154 = UINT8_MAX;
	int32_t x155 = INT32_MAX;
	static uint16_t x156 = 44U;

    t38 = ((x153==x154)+(x155==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x157 = 33776353LLU;
	uint64_t x158 = 1933753922324656LLU;
	int64_t x160 = -56483LL;
	static volatile int32_t t39 = 6;

    t39 = ((x157==x158)+(x159==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x161 = UINT16_MAX;
	int32_t x163 = INT32_MIN;
	int16_t x164 = -1;
	int32_t t40 = 6;

    t40 = ((x161==x162)+(x163==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = -1;
	int8_t x166 = 7;
	int32_t x167 = INT32_MAX;
	int8_t x168 = INT8_MAX;

    t41 = ((x165==x166)+(x167==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x169 = 63867661LLU;
	uint8_t x170 = 54U;
	int32_t x171 = -2481119;
	int32_t t42 = 24582;

    t42 = ((x169==x170)+(x171==x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x173 = 15LL;
	uint64_t x174 = 131884662182423LLU;
	volatile uint8_t x176 = 0U;
	int32_t t43 = 1;

    t43 = ((x173==x174)+(x175==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x178 = -20;
	static int16_t x179 = 6;
	uint32_t x180 = 1210863U;
	int32_t t44 = -178842626;

    t44 = ((x177==x178)+(x179==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x181 = INT32_MAX;
	int64_t x182 = INT64_MIN;
	uint8_t x183 = 5U;
	int32_t t45 = -152426;

    t45 = ((x181==x182)+(x183==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = 123980711759LLU;
	static int8_t x186 = -1;
	volatile uint8_t x188 = 21U;
	int32_t t46 = 90645421;

    t46 = ((x185==x186)+(x187==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 0U;
	int8_t x190 = 48;
	int64_t x191 = INT64_MIN;
	uint16_t x192 = 1991U;
	volatile int32_t t47 = -26894;

    t47 = ((x189==x190)+(x191==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x196 = INT32_MIN;
	volatile int32_t t48 = 1;

    t48 = ((x193==x194)+(x195==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = UINT64_MAX;
	int8_t x199 = INT8_MIN;
	int64_t x200 = -5477377006802LL;
	volatile int32_t t49 = -40081;

    t49 = ((x197==x198)+(x199==x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x202 = 1;
	volatile int32_t t50 = -29;

    t50 = ((x201==x202)+(x203==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x205 = INT32_MAX;
	uint16_t x206 = 104U;
	uint32_t x207 = UINT32_MAX;
	int32_t x208 = INT32_MIN;
	int32_t t51 = -13;

    t51 = ((x205==x206)+(x207==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x210 = -1;
	int32_t x211 = INT32_MIN;
	int8_t x212 = -1;
	int32_t t52 = -24362541;

    t52 = ((x209==x210)+(x211==x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x213 = 12;
	uint16_t x214 = UINT16_MAX;
	int8_t x215 = INT8_MIN;
	static int16_t x216 = INT16_MIN;
	int32_t t53 = -175;

    t53 = ((x213==x214)+(x215==x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = 30451U;
	static int32_t x218 = INT32_MAX;
	uint64_t x219 = 23440849902LLU;
	volatile int16_t x220 = INT16_MAX;

    t54 = ((x217==x218)+(x219==x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = 53170;
	static int64_t x222 = INT64_MIN;
	int32_t x223 = INT32_MIN;
	int32_t x224 = -9107090;
	int32_t t55 = -3440;

    t55 = ((x221==x222)+(x223==x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x225 = INT32_MIN;
	uint64_t x226 = UINT64_MAX;

    t56 = ((x225==x226)+(x227==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x229 = -8;
	int8_t x230 = INT8_MAX;
	volatile int8_t x231 = 1;
	int64_t x232 = 28404684811300LL;
	volatile int32_t t57 = 7;

    t57 = ((x229==x230)+(x231==x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x234 = INT32_MIN;
	int32_t x235 = INT32_MIN;
	static int32_t x236 = INT32_MIN;
	volatile int32_t t58 = -235403011;

    t58 = ((x233==x234)+(x235==x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = -1;
	volatile int64_t x240 = INT64_MIN;

    t59 = ((x237==x238)+(x239==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x241 = -25;
	volatile uint64_t x244 = 12888LLU;
	volatile int32_t t60 = 8617;

    t60 = ((x241==x242)+(x243==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = 13298U;
	uint64_t x246 = UINT64_MAX;
	uint32_t x247 = UINT32_MAX;
	volatile uint32_t x248 = 634472U;
	int32_t t61 = 18154319;

    t61 = ((x245==x246)+(x247==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x249 = 878496685432869LLU;
	int8_t x250 = -14;
	uint64_t x252 = UINT64_MAX;
	int32_t t62 = -22;

    t62 = ((x249==x250)+(x251==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x253 = 3612U;
	int32_t x254 = INT32_MIN;
	int64_t x256 = -1LL;
	int32_t t63 = -227835676;

    t63 = ((x253==x254)+(x255==x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x257 = -1;
	uint16_t x258 = 5U;
	volatile int32_t x259 = INT32_MIN;
	volatile uint8_t x260 = 106U;
	volatile int32_t t64 = -100025518;

    t64 = ((x257==x258)+(x259==x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x261 = INT16_MIN;
	int64_t x263 = INT64_MAX;
	volatile uint8_t x264 = UINT8_MAX;
	volatile int32_t t65 = 10981;

    t65 = ((x261==x262)+(x263==x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x265 = INT32_MAX;
	int8_t x267 = -1;
	uint32_t x268 = UINT32_MAX;

    t66 = ((x265==x266)+(x267==x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x269 = -1;
	uint8_t x270 = 6U;
	int32_t x271 = INT32_MAX;
	volatile int32_t x272 = 787772246;
	int32_t t67 = -66882986;

    t67 = ((x269==x270)+(x271==x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x273 = 898LL;
	int8_t x274 = -1;
	volatile int32_t x275 = -25783659;
	static uint64_t x276 = UINT64_MAX;

    t68 = ((x273==x274)+(x275==x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = 126U;
	int64_t x278 = 2065LL;
	static int64_t x280 = -27659990182LL;
	volatile int32_t t69 = 148589999;

    t69 = ((x277==x278)+(x279==x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x281 = 523U;
	int16_t x282 = INT16_MAX;
	int32_t x283 = INT32_MIN;
	uint16_t x284 = 6079U;
	int32_t t70 = 51;

    t70 = ((x281==x282)+(x283==x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = 3665929253193LL;
	uint8_t x286 = 84U;
	uint8_t x287 = 1U;
	static uint32_t x288 = UINT32_MAX;
	int32_t t71 = -12695296;

    t71 = ((x285==x286)+(x287==x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x289 = INT32_MAX;
	int8_t x290 = INT8_MIN;
	int32_t x291 = -1;
	volatile int32_t t72 = -807489966;

    t72 = ((x289==x290)+(x291==x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x294 = -7853LL;
	static int8_t x296 = -3;
	int32_t t73 = -25238;

    t73 = ((x293==x294)+(x295==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	int8_t x298 = INT8_MAX;
	static uint32_t x299 = UINT32_MAX;
	int16_t x300 = INT16_MIN;
	volatile int32_t t74 = -6656;

    t74 = ((x297==x298)+(x299==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x301 = 896U;
	static int8_t x302 = INT8_MIN;
	int64_t x304 = INT64_MAX;

    t75 = ((x301==x302)+(x303==x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MAX;
	int8_t x306 = -1;
	int32_t x307 = -1;
	static int32_t t76 = 7664190;

    t76 = ((x305==x306)+(x307==x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x309 = INT32_MIN;
	int16_t x310 = 1;
	static volatile int32_t x311 = INT32_MAX;
	static int64_t x312 = 192909347729LL;
	static volatile int32_t t77 = -1;

    t77 = ((x309==x310)+(x311==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MIN;
	uint32_t x315 = 60U;
	int8_t x316 = INT8_MIN;

    t78 = ((x313==x314)+(x315==x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = 3381;
	volatile int16_t x319 = INT16_MAX;
	uint16_t x320 = 29U;

    t79 = ((x317==x318)+(x319==x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x322 = -1937931LL;
	int8_t x323 = 0;
	volatile int32_t t80 = -16;

    t80 = ((x321==x322)+(x323==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t t81 = 105274184;

    t81 = ((x325==x326)+(x327==x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x329 = 67U;
	uint16_t x331 = 2111U;
	int32_t t82 = 844;

    t82 = ((x329==x330)+(x331==x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x334 = UINT8_MAX;
	volatile int8_t x335 = INT8_MAX;
	int32_t x336 = -117;
	static int32_t t83 = -1093763;

    t83 = ((x333==x334)+(x335==x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = 13783029649LL;
	int64_t x338 = INT64_MAX;
	static uint8_t x339 = UINT8_MAX;
	uint16_t x340 = 113U;
	volatile int32_t t84 = 159;

    t84 = ((x337==x338)+(x339==x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = 1LLU;
	static uint16_t x342 = UINT16_MAX;
	uint32_t x343 = 671799895U;
	volatile int64_t x344 = INT64_MAX;
	static volatile int32_t t85 = -973738;

    t85 = ((x341==x342)+(x343==x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = 2095742265079LLU;
	int32_t x346 = INT32_MIN;
	uint32_t x347 = 1264746941U;
	static uint16_t x348 = 165U;

    t86 = ((x345==x346)+(x347==x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = 8U;
	int16_t x351 = INT16_MIN;
	static volatile uint32_t x352 = UINT32_MAX;
	volatile int32_t t87 = 20346352;

    t87 = ((x349==x350)+(x351==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x353 = UINT8_MAX;
	int16_t x354 = INT16_MIN;
	uint8_t x355 = UINT8_MAX;
	static volatile uint32_t x356 = 267984987U;

    t88 = ((x353==x354)+(x355==x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = 4702857LL;
	uint8_t x358 = UINT8_MAX;
	volatile int32_t x360 = -1;
	int32_t t89 = -667979;

    t89 = ((x357==x358)+(x359==x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x361 = -1954987596994LL;
	int8_t x363 = INT8_MIN;
	int32_t x364 = -1;
	volatile int32_t t90 = -895;

    t90 = ((x361==x362)+(x363==x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x365 = -63;
	int16_t x367 = -1;
	int16_t x368 = INT16_MIN;
	int32_t t91 = -1708617;

    t91 = ((x365==x366)+(x367==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int8_t x369 = 14;
	int16_t x370 = -4423;
	int8_t x371 = -1;
	int8_t x372 = INT8_MIN;
	volatile int32_t t92 = -453;

    t92 = ((x369==x370)+(x371==x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x373 = 61U;
	int64_t x374 = -1LL;
	uint8_t x375 = UINT8_MAX;
	int16_t x376 = INT16_MIN;

    t93 = ((x373==x374)+(x375==x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = 1U;
	int8_t x378 = INT8_MAX;
	volatile int32_t t94 = 600;

    t94 = ((x377==x378)+(x379==x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x381 = 24823U;
	volatile int16_t x382 = INT16_MAX;
	static int16_t x384 = INT16_MIN;
	static int32_t t95 = -1615;

    t95 = ((x381==x382)+(x383==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x385 = 2U;
	volatile int32_t x386 = 16020176;
	int32_t x387 = INT32_MAX;
	static uint32_t x388 = 233454426U;
	volatile int32_t t96 = -51970;

    t96 = ((x385==x386)+(x387==x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = UINT8_MAX;
	static uint8_t x390 = 4U;
	int8_t x391 = -7;
	uint32_t x392 = 24U;
	volatile int32_t t97 = -45;

    t97 = ((x389==x390)+(x391==x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = 3;
	int64_t x394 = INT64_MIN;
	uint8_t x395 = 0U;
	static volatile int32_t t98 = 278366673;

    t98 = ((x393==x394)+(x395==x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x398 = INT64_MIN;
	static volatile int8_t x399 = INT8_MIN;

    t99 = ((x397==x398)+(x399==x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int32_t x401 = 11209426;
	int64_t x402 = INT64_MIN;
	volatile int16_t x404 = INT16_MAX;

    t100 = ((x401==x402)+(x403==x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x405 = INT16_MIN;
	uint8_t x407 = 0U;
	uint64_t x408 = UINT64_MAX;
	volatile int32_t t101 = 276292;

    t101 = ((x405==x406)+(x407==x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MAX;
	static volatile int32_t x410 = -1;
	volatile int32_t x412 = INT32_MIN;
	volatile int32_t t102 = 8974;

    t102 = ((x409==x410)+(x411==x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x414 = INT16_MIN;
	int8_t x416 = INT8_MIN;

    t103 = ((x413==x414)+(x415==x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = -1;
	static int32_t x418 = 2;
	int32_t t104 = -4200;

    t104 = ((x417==x418)+(x419==x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x421 = 0U;
	int32_t x422 = INT32_MAX;
	int64_t x423 = INT64_MIN;
	volatile uint32_t x424 = 5U;

    t105 = ((x421==x422)+(x423==x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x425 = UINT64_MAX;
	int64_t x426 = INT64_MIN;
	int8_t x427 = INT8_MIN;
	static volatile int32_t t106 = 340551103;

    t106 = ((x425==x426)+(x427==x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = -1;
	uint64_t x430 = 5257440393342LLU;
	uint64_t x432 = 16635821378835LLU;

    t107 = ((x429==x430)+(x431==x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = UINT64_MAX;
	volatile int64_t x434 = 929260LL;
	volatile int32_t t108 = 1;

    t108 = ((x433==x434)+(x435==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MAX;
	int64_t x438 = 216336244623286114LL;
	static int64_t x439 = -8530487825621LL;
	int64_t x440 = -150208337LL;
	static volatile int32_t t109 = 265697485;

    t109 = ((x437==x438)+(x439==x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = UINT8_MAX;
	int64_t x443 = 2LL;
	uint8_t x444 = 53U;
	static volatile int32_t t110 = -7;

    t110 = ((x441==x442)+(x443==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x445 = 3018LLU;
	int64_t x446 = -28914LL;
	volatile int8_t x447 = 6;

    t111 = ((x445==x446)+(x447==x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = UINT16_MAX;
	static int64_t x450 = INT64_MIN;
	int16_t x451 = INT16_MIN;
	uint16_t x452 = UINT16_MAX;

    t112 = ((x449==x450)+(x451==x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = 2;
	volatile uint16_t x454 = UINT16_MAX;
	int8_t x455 = 1;
	int32_t t113 = 1;

    t113 = ((x453==x454)+(x455==x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = INT64_MAX;
	uint16_t x459 = 827U;
	static int64_t x460 = INT64_MAX;
	int32_t t114 = -13;

    t114 = ((x457==x458)+(x459==x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x461 = -1;
	static uint16_t x462 = 6746U;
	uint8_t x463 = 2U;
	static int8_t x464 = -5;
	volatile int32_t t115 = -587317;

    t115 = ((x461==x462)+(x463==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -29;
	int32_t x466 = INT32_MAX;
	volatile int16_t x467 = INT16_MIN;
	static uint16_t x468 = 1U;
	int32_t t116 = -473708711;

    t116 = ((x465==x466)+(x467==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x470 = 6U;
	int32_t x471 = INT32_MIN;
	int16_t x472 = -1;

    t117 = ((x469==x470)+(x471==x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x473 = UINT8_MAX;
	int8_t x475 = -1;
	int64_t x476 = -319877LL;
	int32_t t118 = 45;

    t118 = ((x473==x474)+(x475==x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x477 = UINT64_MAX;
	uint32_t x478 = 2066108489U;
	volatile uint32_t x479 = 6161264U;
	volatile int32_t t119 = -1;

    t119 = ((x477==x478)+(x479==x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x481 = -1;
	static int16_t x482 = INT16_MIN;
	volatile uint32_t x483 = UINT32_MAX;
	volatile int32_t t120 = 66016;

    t120 = ((x481==x482)+(x483==x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = 48;
	uint32_t x486 = 820914U;
	static uint16_t x487 = 5U;
	volatile int8_t x488 = 1;
	volatile int32_t t121 = -436209;

    t121 = ((x485==x486)+(x487==x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x489 = INT32_MAX;
	uint32_t x490 = 378559U;
	static int16_t x491 = -1;
	int32_t x492 = -10279410;
	volatile int32_t t122 = 1421606;

    t122 = ((x489==x490)+(x491==x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = INT8_MIN;
	volatile uint16_t x495 = 5U;
	static volatile int32_t t123 = 468475657;

    t123 = ((x493==x494)+(x495==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x497 = UINT32_MAX;
	int8_t x499 = INT8_MIN;
	int8_t x500 = 39;
	static int32_t t124 = -1;

    t124 = ((x497==x498)+(x499==x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x501 = INT64_MIN;
	int64_t x502 = 462831789466LL;
	uint8_t x504 = 3U;
	int32_t t125 = -23805271;

    t125 = ((x501==x502)+(x503==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	static int8_t x507 = INT8_MIN;
	int64_t x508 = INT64_MAX;
	volatile int32_t t126 = 348290;

    t126 = ((x505==x506)+(x507==x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x510 = UINT32_MAX;

    t127 = ((x509==x510)+(x511==x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = -1;
	int8_t x514 = -1;
	int32_t x515 = INT32_MIN;
	volatile int32_t t128 = -47785656;

    t128 = ((x513==x514)+(x515==x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x517 = 6331LLU;
	uint32_t x518 = 1439939U;
	static int64_t x519 = -1LL;
	static volatile int64_t x520 = INT64_MIN;
	int32_t t129 = -564129;

    t129 = ((x517==x518)+(x519==x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MIN;
	int8_t x522 = 1;
	uint8_t x523 = 39U;
	static volatile int32_t t130 = -1;

    t130 = ((x521==x522)+(x523==x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x525 = -1LL;
	volatile int32_t x528 = 499;
	volatile int32_t t131 = 1;

    t131 = ((x525==x526)+(x527==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = -17015196656112363LL;
	static volatile uint32_t x531 = UINT32_MAX;
	int32_t x532 = -1;
	volatile int32_t t132 = 18;

    t132 = ((x529==x530)+(x531==x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = 97230282890949LLU;
	static uint16_t x534 = 52U;
	uint16_t x536 = 3974U;
	int32_t t133 = 0;

    t133 = ((x533==x534)+(x535==x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x537 = INT16_MIN;
	int8_t x538 = INT8_MIN;
	static uint32_t x539 = 366861143U;
	int8_t x540 = INT8_MIN;
	volatile int32_t t134 = -5122;

    t134 = ((x537==x538)+(x539==x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	volatile uint8_t x542 = UINT8_MAX;
	static int32_t x543 = -1;
	int64_t x544 = INT64_MAX;
	int32_t t135 = -2878;

    t135 = ((x541==x542)+(x543==x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x545 = 447U;
	volatile uint64_t x546 = 502137861969265288LLU;
	int32_t x547 = -141;
	static uint32_t x548 = 10171719U;
	int32_t t136 = 345725;

    t136 = ((x545==x546)+(x547==x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x549 = UINT16_MAX;
	int16_t x550 = -1;
	volatile uint16_t x551 = 3925U;
	volatile uint16_t x552 = UINT16_MAX;
	int32_t t137 = 38;

    t137 = ((x549==x550)+(x551==x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = -1LL;
	uint32_t x554 = UINT32_MAX;
	int16_t x556 = -70;
	volatile int32_t t138 = 53186;

    t138 = ((x553==x554)+(x555==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint8_t x558 = 1U;
	volatile int16_t x560 = -1;
	volatile int32_t t139 = -78034;

    t139 = ((x557==x558)+(x559==x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x562 = 2782;
	uint64_t x563 = UINT64_MAX;
	volatile uint16_t x564 = 692U;
	int32_t t140 = -423306;

    t140 = ((x561==x562)+(x563==x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = 277583LLU;
	volatile int8_t x567 = -1;
	static uint64_t x568 = 96LLU;
	int32_t t141 = -949;

    t141 = ((x565==x566)+(x567==x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x569 = 1U;
	static int64_t x570 = INT64_MIN;
	static int32_t x571 = -64080;
	uint64_t x572 = 1427864490240136LLU;

    t142 = ((x569==x570)+(x571==x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x574 = 3598709U;
	int16_t x575 = INT16_MIN;
	volatile int16_t x576 = INT16_MIN;
	volatile int32_t t143 = -175450696;

    t143 = ((x573==x574)+(x575==x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x578 = 7009776071LLU;
	static uint64_t x579 = UINT64_MAX;
	int64_t x580 = 495781LL;
	volatile int32_t t144 = 189791;

    t144 = ((x577==x578)+(x579==x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = INT16_MAX;
	uint32_t x582 = 460890U;
	int16_t x583 = -2521;
	int32_t t145 = -4;

    t145 = ((x581==x582)+(x583==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x585 = -1LL;
	int8_t x586 = 1;
	uint16_t x587 = 9378U;
	volatile int16_t x588 = 1;

    t146 = ((x585==x586)+(x587==x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = -1LL;
	int16_t x590 = INT16_MIN;
	uint8_t x591 = 40U;
	int32_t x592 = -1;
	int32_t t147 = -4;

    t147 = ((x589==x590)+(x591==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -230408654050584LL;
	static int16_t x594 = INT16_MAX;
	uint32_t x596 = 6243262U;
	int32_t t148 = -2411591;

    t148 = ((x593==x594)+(x595==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MIN;
	int16_t x598 = INT16_MIN;
	int8_t x599 = 10;
	uint16_t x600 = 14U;
	volatile int32_t t149 = 12546;

    t149 = ((x597==x598)+(x599==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MIN;
	volatile uint8_t x602 = UINT8_MAX;
	int8_t x603 = INT8_MIN;
	int32_t x604 = INT32_MAX;
	int32_t t150 = -3;

    t150 = ((x601==x602)+(x603==x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = -1;
	static volatile uint16_t x606 = 169U;
	static uint32_t x607 = 7097431U;
	int8_t x608 = INT8_MAX;
	int32_t t151 = 4230;

    t151 = ((x605==x606)+(x607==x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = -22861835LL;
	uint8_t x610 = UINT8_MAX;
	int8_t x612 = INT8_MIN;

    t152 = ((x609==x610)+(x611==x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x613 = -1LL;
	int64_t x614 = -1467876199LL;
	uint32_t x615 = UINT32_MAX;
	volatile int8_t x616 = 11;

    t153 = ((x613==x614)+(x615==x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MIN;
	int32_t x618 = -1;
	int8_t x620 = INT8_MIN;

    t154 = ((x617==x618)+(x619==x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = INT16_MIN;
	volatile uint8_t x623 = 33U;
	uint8_t x624 = 37U;
	static int32_t t155 = 24;

    t155 = ((x621==x622)+(x623==x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x625 = INT64_MIN;
	static int8_t x626 = INT8_MAX;
	int8_t x627 = -1;
	volatile uint64_t x628 = 17105414706852124LLU;
	volatile int32_t t156 = 860474;

    t156 = ((x625==x626)+(x627==x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = 0;
	int32_t x630 = -1;
	volatile int64_t x631 = -556436389072549054LL;
	uint16_t x632 = 899U;
	int32_t t157 = -5;

    t157 = ((x629==x630)+(x631==x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x634 = 13U;
	int64_t x635 = -105545LL;
	static int32_t x636 = -1;

    t158 = ((x633==x634)+(x635==x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = -1;
	volatile int32_t x638 = INT32_MIN;
	uint8_t x639 = UINT8_MAX;
	int32_t x640 = INT32_MAX;
	int32_t t159 = -112;

    t159 = ((x637==x638)+(x639==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MAX;
	uint8_t x642 = 1U;
	static uint16_t x643 = 1907U;
	int16_t x644 = INT16_MAX;
	volatile int32_t t160 = 48540;

    t160 = ((x641==x642)+(x643==x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = 1U;
	int8_t x646 = INT8_MIN;
	uint16_t x647 = UINT16_MAX;
	int32_t t161 = -199344;

    t161 = ((x645==x646)+(x647==x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x649 = -264;
	int16_t x650 = 1;
	int64_t x651 = INT64_MAX;
	static int32_t x652 = 10;
	int32_t t162 = 474907543;

    t162 = ((x649==x650)+(x651==x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x653 = 968;
	int64_t x654 = INT64_MIN;
	int16_t x655 = INT16_MIN;
	volatile int32_t t163 = -14095469;

    t163 = ((x653==x654)+(x655==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x658 = -1;
	static int32_t x660 = INT32_MAX;
	int32_t t164 = 1074262;

    t164 = ((x657==x658)+(x659==x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MAX;
	uint8_t x662 = 23U;
	volatile uint32_t x663 = 34U;
	int64_t x664 = 1812923LL;

    t165 = ((x661==x662)+(x663==x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x665 = 809U;
	uint16_t x666 = UINT16_MAX;
	volatile int32_t x667 = -1;
	int32_t t166 = 633250;

    t166 = ((x665==x666)+(x667==x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -477789777927LL;
	uint32_t x670 = UINT32_MAX;
	uint16_t x671 = UINT16_MAX;
	uint32_t x672 = 996U;
	int32_t t167 = 2;

    t167 = ((x669==x670)+(x671==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x673 = 28687130006875LLU;
	int32_t x674 = -1;
	int8_t x675 = 0;
	int16_t x676 = 34;
	int32_t t168 = 37;

    t168 = ((x673==x674)+(x675==x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x677 = 922201646;
	int8_t x678 = 1;
	volatile int64_t x680 = -13630LL;
	int32_t t169 = 104806;

    t169 = ((x677==x678)+(x679==x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MIN;
	int32_t x682 = 7786;
	int8_t x683 = INT8_MIN;
	int64_t x684 = -17006074689193LL;
	volatile int32_t t170 = -35;

    t170 = ((x681==x682)+(x683==x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MIN;
	int32_t x686 = INT32_MIN;
	uint16_t x687 = UINT16_MAX;
	int32_t x688 = -1;
	volatile int32_t t171 = -351;

    t171 = ((x685==x686)+(x687==x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x691 = INT32_MAX;
	int16_t x692 = INT16_MIN;
	static int32_t t172 = -5779618;

    t172 = ((x689==x690)+(x691==x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x694 = 35U;
	static volatile uint8_t x696 = 6U;
	int32_t t173 = 4145984;

    t173 = ((x693==x694)+(x695==x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = 14643797U;
	static int64_t x698 = 189725LL;
	uint8_t x699 = UINT8_MAX;
	uint64_t x700 = 3844498905104LLU;
	static int32_t t174 = -149;

    t174 = ((x697==x698)+(x699==x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x701 = 5835614LL;
	uint16_t x702 = UINT16_MAX;
	int32_t x703 = -11888;

    t175 = ((x701==x702)+(x703==x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 211U;
	int16_t x706 = -1;
	volatile int32_t x707 = INT32_MIN;
	volatile int64_t x708 = -5328436016667802LL;

    t176 = ((x705==x706)+(x707==x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x710 = INT16_MIN;
	uint64_t x711 = UINT64_MAX;
	int64_t x712 = INT64_MIN;
	volatile int32_t t177 = -12024;

    t177 = ((x709==x710)+(x711==x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x713 = 25666U;
	int8_t x714 = INT8_MIN;
	volatile int16_t x715 = -2;
	int16_t x716 = -1;
	static int32_t t178 = 6791;

    t178 = ((x713==x714)+(x715==x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = 0;
	static int32_t x718 = -116005229;

    t179 = ((x717==x718)+(x719==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = UINT32_MAX;
	int32_t x724 = 504291;
	volatile int32_t t180 = -77209;

    t180 = ((x721==x722)+(x723==x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x725 = INT16_MIN;
	uint32_t x726 = UINT32_MAX;
	static int8_t x727 = 6;
	volatile int32_t t181 = -2279238;

    t181 = ((x725==x726)+(x727==x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x729 = INT32_MAX;
	int8_t x730 = INT8_MIN;
	uint8_t x731 = 1U;
	uint8_t x732 = 12U;
	static volatile int32_t t182 = 1508575;

    t182 = ((x729==x730)+(x731==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x734 = INT8_MIN;
	volatile int32_t x735 = INT32_MIN;
	int16_t x736 = INT16_MIN;
	volatile int32_t t183 = 260588955;

    t183 = ((x733==x734)+(x735==x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x737 = 1967570U;
	int64_t x738 = -1LL;
	int16_t x739 = INT16_MAX;
	static uint32_t x740 = 794U;
	volatile int32_t t184 = -1367560;

    t184 = ((x737==x738)+(x739==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = -1;
	uint64_t x742 = 1336731780562323LLU;
	static volatile uint64_t x743 = 1552780LLU;
	volatile uint64_t x744 = UINT64_MAX;
	static volatile int32_t t185 = -26;

    t185 = ((x741==x742)+(x743==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = UINT16_MAX;
	int64_t x747 = INT64_MIN;
	int64_t x748 = INT64_MIN;

    t186 = ((x745==x746)+(x747==x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MAX;
	volatile int64_t x750 = INT64_MAX;
	int64_t x751 = 214351LL;
	static int32_t t187 = 3;

    t187 = ((x749==x750)+(x751==x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = 48529LL;
	int32_t x755 = INT32_MIN;
	uint8_t x756 = 1U;
	int32_t t188 = 41;

    t188 = ((x753==x754)+(x755==x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MIN;
	volatile int32_t x758 = -1;
	static uint32_t x760 = UINT32_MAX;
	int32_t t189 = 1896;

    t189 = ((x757==x758)+(x759==x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = INT16_MIN;
	int8_t x762 = -1;
	static int16_t x763 = INT16_MAX;

    t190 = ((x761==x762)+(x763==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = -958341498261LL;
	uint64_t x766 = UINT64_MAX;
	uint8_t x767 = 85U;
	volatile uint64_t x768 = 21607099577853087LLU;
	volatile int32_t t191 = 159180;

    t191 = ((x765==x766)+(x767==x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x770 = 15;
	uint8_t x771 = 86U;
	int32_t x772 = -1;

    t192 = ((x769==x770)+(x771==x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = UINT32_MAX;
	uint64_t x774 = UINT64_MAX;
	int32_t x775 = INT32_MIN;
	int32_t x776 = INT32_MAX;
	volatile int32_t t193 = 54313;

    t193 = ((x773==x774)+(x775==x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x777 = -1;
	volatile int32_t x778 = INT32_MIN;
	int8_t x779 = INT8_MIN;
	volatile int32_t t194 = 11230;

    t194 = ((x777==x778)+(x779==x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MIN;
	uint64_t x782 = UINT64_MAX;
	static int64_t x783 = INT64_MAX;
	volatile int32_t t195 = 421463088;

    t195 = ((x781==x782)+(x783==x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 2315146276LLU;
	int32_t x788 = 104317;
	volatile int32_t t196 = 4307572;

    t196 = ((x785==x786)+(x787==x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = -1;
	int32_t x790 = 0;
	static volatile int64_t x791 = INT64_MIN;
	int64_t x792 = INT64_MIN;
	volatile int32_t t197 = 344973;

    t197 = ((x789==x790)+(x791==x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x793 = INT64_MIN;
	volatile int32_t x794 = -1;
	volatile int16_t x795 = INT16_MIN;
	static volatile int32_t t198 = 93856624;

    t198 = ((x793==x794)+(x795==x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x797 = 1;
	uint32_t x798 = 5U;
	uint32_t x799 = UINT32_MAX;
	uint16_t x800 = UINT16_MAX;
	volatile int32_t t199 = 44876;

    t199 = ((x797==x798)+(x799==x800));

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


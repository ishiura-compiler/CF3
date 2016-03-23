
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

int16_t x2 = 31;
int8_t x8 = -1;
static int8_t x10 = -1;
uint16_t x12 = 592U;
static volatile int32_t t2 = -35510;
volatile uint64_t x14 = 3806LLU;
uint8_t x15 = 27U;
volatile int32_t t3 = -416;
static int8_t x36 = INT8_MIN;
int16_t x39 = -144;
uint8_t x40 = UINT8_MAX;
uint32_t x41 = UINT32_MAX;
static volatile int32_t t10 = -44894145;
int64_t x49 = INT64_MAX;
static int32_t t15 = -141822;
int64_t x66 = INT64_MIN;
int64_t x68 = INT64_MIN;
volatile int16_t x70 = INT16_MAX;
int64_t x73 = INT64_MAX;
uint64_t x76 = 12230786108525585LLU;
int16_t x78 = 11071;
int32_t t19 = -61858295;
uint16_t x90 = UINT16_MAX;
static int32_t x99 = INT32_MIN;
static uint32_t x105 = UINT32_MAX;
int32_t x107 = -11;
volatile int32_t t26 = 1;
uint8_t x113 = 1U;
int32_t t30 = -155;
volatile int32_t t31 = -76;
int8_t x142 = -1;
uint16_t x143 = 25U;
int64_t x144 = 18804LL;
uint64_t x145 = 7903668LLU;
static int64_t x150 = -1LL;
static volatile int32_t t39 = -20663;
volatile int32_t t40 = 107528455;
static int64_t x171 = INT64_MIN;
static uint32_t x172 = 323292832U;
int32_t t42 = -73118640;
int32_t x180 = 57;
volatile int32_t t44 = -59;
uint16_t x185 = 2U;
static int8_t x186 = INT8_MIN;
static volatile int64_t x187 = INT64_MAX;
int32_t t46 = -88592391;
int32_t x189 = 1;
int16_t x190 = INT16_MAX;
uint8_t x191 = 6U;
int32_t t47 = -135;
uint8_t x195 = 1U;
volatile uint8_t x196 = 7U;
static uint16_t x198 = UINT16_MAX;
int16_t x199 = 363;
volatile int32_t t50 = -877368;
int32_t t51 = 39235220;
uint32_t x212 = 120098065U;
static volatile int32_t t52 = 58670;
volatile int32_t x214 = INT32_MIN;
static int8_t x215 = INT8_MIN;
volatile int32_t t53 = 34858732;
int32_t x219 = 891472;
volatile int32_t t54 = -698677;
volatile int64_t x225 = INT64_MIN;
volatile int8_t x228 = -1;
static volatile int32_t t56 = -921;
uint8_t x229 = 3U;
int16_t x237 = INT16_MIN;
static int64_t x242 = -1LL;
static int64_t x248 = INT64_MIN;
uint64_t x258 = UINT64_MAX;
int64_t x259 = INT64_MIN;
int32_t t65 = -1;
int8_t x268 = INT8_MIN;
static volatile int32_t t66 = -203661707;
uint16_t x269 = 14561U;
volatile int16_t x276 = 62;
int32_t x277 = 7654095;
static uint8_t x279 = 28U;
static int16_t x283 = -1;
int32_t t70 = 895;
uint32_t x285 = 3U;
int16_t x289 = INT16_MIN;
uint8_t x290 = UINT8_MAX;
uint8_t x291 = 71U;
int64_t x296 = 318597586899LL;
int8_t x298 = INT8_MIN;
int64_t x308 = INT64_MIN;
static uint8_t x311 = 8U;
int8_t x313 = INT8_MAX;
volatile int32_t t79 = -3;
int16_t x334 = -256;
static int32_t t84 = 153278;
uint8_t x341 = 95U;
static uint64_t x352 = 7914850LLU;
volatile int32_t t88 = -2;
int32_t t89 = -4;
static uint64_t x364 = UINT64_MAX;
uint16_t x372 = 11989U;
int32_t t94 = -37;
volatile int32_t t95 = 47;
int32_t x394 = INT32_MIN;
static uint8_t x397 = 3U;
static int32_t t100 = 6566;
volatile int32_t t102 = 5;
volatile int8_t x414 = 4;
uint16_t x418 = 7U;
int8_t x426 = -1;
static volatile int8_t x427 = 3;
int16_t x428 = INT16_MIN;
int16_t x436 = INT16_MIN;
static int32_t x440 = 1009850150;
int64_t x441 = -1LL;
int16_t x442 = INT16_MIN;
int64_t x446 = INT64_MIN;
uint8_t x455 = 108U;
int32_t t118 = 277;
static int8_t x479 = INT8_MIN;
uint16_t x482 = 29718U;
uint64_t x483 = UINT64_MAX;
static volatile int32_t t121 = -13140;
static volatile int32_t t123 = -14216;
uint64_t x502 = UINT64_MAX;
int64_t x504 = INT64_MIN;
volatile uint32_t x506 = 863612640U;
int32_t t127 = -17811;
int64_t x513 = -7438661407574714LL;
volatile int32_t t128 = 1135372;
volatile uint8_t x520 = 30U;
uint16_t x523 = UINT16_MAX;
volatile int32_t x525 = INT32_MAX;
int8_t x531 = -28;
int32_t x547 = -1;
static volatile int16_t x549 = -335;
volatile int64_t x551 = INT64_MIN;
int32_t t137 = 396082369;
int32_t t140 = 63;
static uint64_t x565 = 6412553552LLU;
volatile uint8_t x566 = UINT8_MAX;
static int32_t x567 = INT32_MIN;
int16_t x570 = -31;
uint32_t x575 = UINT32_MAX;
int32_t t143 = -13;
volatile int32_t x579 = -809182616;
int16_t x587 = INT16_MAX;
static int64_t x596 = INT64_MIN;
volatile int16_t x602 = INT16_MIN;
volatile uint32_t x607 = 331882979U;
int8_t x608 = 0;
static volatile int32_t t151 = -154;
int8_t x610 = INT8_MIN;
int8_t x613 = -1;
static volatile int32_t x615 = -1;
int32_t t154 = -8;
int64_t x626 = INT64_MIN;
uint32_t x628 = 5527U;
uint64_t x638 = UINT64_MAX;
uint8_t x650 = UINT8_MAX;
volatile int64_t x652 = -3413LL;
uint16_t x654 = 20U;
int8_t x658 = 1;
static volatile int32_t t166 = -2436139;
int8_t x670 = 29;
int32_t x674 = -1;
static int8_t x685 = INT8_MAX;
static uint32_t x686 = 0U;
int32_t t172 = 281083460;
int16_t x694 = 6738;
uint16_t x696 = 342U;
uint64_t x699 = 6550LLU;
volatile int32_t t176 = 116095025;
int32_t x713 = INT32_MIN;
uint32_t x719 = UINT32_MAX;
int8_t x724 = INT8_MIN;
int16_t x725 = -1;
uint8_t x726 = UINT8_MAX;
static int32_t x730 = INT32_MAX;
volatile int32_t t182 = -1;
int32_t x736 = -1;
static int32_t t183 = 466;
int64_t x740 = INT64_MIN;
volatile int16_t x744 = INT16_MIN;
volatile int32_t t185 = -700;
int8_t x747 = INT8_MIN;
uint32_t x748 = 6U;
int32_t t186 = -1105911;
uint8_t x749 = 14U;
static int32_t x755 = 6650037;
uint64_t x769 = UINT64_MAX;
static int32_t t193 = -11272;
int64_t x780 = -1LL;
int8_t x781 = INT8_MIN;
int8_t x786 = 45;
volatile int8_t x787 = 1;
int32_t t198 = -390346;
volatile int32_t t199 = -1;


void f0(void) {
    	int16_t x1 = -5420;
	volatile int64_t x3 = 8634427082LL;
	volatile int32_t x4 = -25214070;
	int32_t t0 = -165108280;

    t0 = ((x1==x2)>(x3^x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	int64_t x6 = INT64_MAX;
	uint8_t x7 = 15U;
	volatile int32_t t1 = -1392779;

    t1 = ((x5==x6)>(x7^x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = INT8_MIN;
	static int8_t x11 = INT8_MIN;

    t2 = ((x9==x10)>(x11^x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = 14;
	uint16_t x16 = 623U;

    t3 = ((x13==x14)>(x15^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	int8_t x18 = 0;
	int64_t x19 = -1LL;
	uint64_t x20 = 3525314823371541LLU;
	int32_t t4 = -230124451;

    t4 = ((x17==x18)>(x19^x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	uint8_t x22 = 117U;
	static int32_t x23 = INT32_MIN;
	static int8_t x24 = 57;
	volatile int32_t t5 = -3977;

    t5 = ((x21==x22)>(x23^x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	int8_t x26 = -15;
	uint8_t x27 = 0U;
	int64_t x28 = 1868051671LL;
	volatile int32_t t6 = -177405;

    t6 = ((x25==x26)>(x27^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = UINT64_MAX;
	uint32_t x30 = UINT32_MAX;
	uint16_t x31 = UINT16_MAX;
	int64_t x32 = INT64_MAX;
	volatile int32_t t7 = -62070033;

    t7 = ((x29==x30)>(x31^x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 36;
	volatile uint16_t x34 = 520U;
	int64_t x35 = -1LL;
	volatile int32_t t8 = -65552484;

    t8 = ((x33==x34)>(x35^x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = -225066561;
	int64_t x38 = INT64_MAX;
	volatile int32_t t9 = 0;

    t9 = ((x37==x38)>(x39^x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x42 = UINT16_MAX;
	uint16_t x43 = 2522U;
	static volatile int32_t x44 = INT32_MIN;

    t10 = ((x41==x42)>(x43^x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = UINT32_MAX;
	static int8_t x46 = 5;
	uint16_t x47 = 256U;
	int8_t x48 = -1;
	int32_t t11 = -1291;

    t11 = ((x45==x46)>(x47^x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = 0;
	uint16_t x51 = 286U;
	int32_t x52 = INT32_MIN;
	int32_t t12 = 1692;

    t12 = ((x49==x50)>(x51^x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MAX;
	static uint16_t x54 = 30U;
	static int32_t x55 = -689948;
	uint32_t x56 = UINT32_MAX;
	int32_t t13 = 331;

    t13 = ((x53==x54)>(x55^x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = 2;
	uint8_t x58 = 66U;
	static int16_t x59 = INT16_MIN;
	static int32_t x60 = -817341;
	int32_t t14 = -965101;

    t14 = ((x57==x58)>(x59^x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	uint64_t x62 = 62419LLU;
	int32_t x63 = 2633;
	int16_t x64 = 53;

    t15 = ((x61==x62)>(x63^x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MIN;
	int64_t x67 = 2278643584695758947LL;
	int32_t t16 = -980221;

    t16 = ((x65==x66)>(x67^x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 8U;
	int16_t x71 = -1;
	int8_t x72 = -21;
	int32_t t17 = 112654;

    t17 = ((x69==x70)>(x71^x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x74 = INT64_MIN;
	uint64_t x75 = 0LLU;
	volatile int32_t t18 = 33395665;

    t18 = ((x73==x74)>(x75^x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x77 = 7115;
	int8_t x79 = INT8_MIN;
	int32_t x80 = -4398;

    t19 = ((x77==x78)>(x79^x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = UINT32_MAX;
	uint64_t x82 = 119LLU;
	uint8_t x83 = 1U;
	volatile uint8_t x84 = UINT8_MAX;
	int32_t t20 = -176765;

    t20 = ((x81==x82)>(x83^x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x85 = 1300U;
	static int16_t x86 = INT16_MIN;
	uint16_t x87 = 35U;
	volatile int32_t x88 = INT32_MAX;
	volatile int32_t t21 = -40182;

    t21 = ((x85==x86)>(x87^x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x89 = 1U;
	int32_t x91 = -1;
	static int32_t x92 = INT32_MAX;
	volatile int32_t t22 = -160513192;

    t22 = ((x89==x90)>(x91^x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = 717252169860LL;
	int8_t x94 = INT8_MIN;
	static uint32_t x95 = 2304880U;
	int32_t x96 = -1;
	volatile int32_t t23 = 1122854;

    t23 = ((x93==x94)>(x95^x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = UINT8_MAX;
	int32_t x98 = INT32_MIN;
	static volatile int8_t x100 = INT8_MIN;
	static volatile int32_t t24 = 31136;

    t24 = ((x97==x98)>(x99^x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = -1;
	int64_t x102 = INT64_MIN;
	int64_t x103 = -1727948LL;
	uint64_t x104 = 737913503872504091LLU;
	volatile int32_t t25 = 11461012;

    t25 = ((x101==x102)>(x103^x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x106 = INT16_MIN;
	volatile int32_t x108 = INT32_MIN;

    t26 = ((x105==x106)>(x107^x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x109 = -2;
	int16_t x110 = -1;
	uint16_t x111 = 647U;
	int8_t x112 = -1;
	volatile int32_t t27 = -6;

    t27 = ((x109==x110)>(x111^x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x114 = INT16_MAX;
	uint8_t x115 = 6U;
	int64_t x116 = INT64_MIN;
	volatile int32_t t28 = 26324;

    t28 = ((x113==x114)>(x115^x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = 6;
	int8_t x118 = INT8_MIN;
	uint16_t x119 = 288U;
	int16_t x120 = INT16_MAX;
	volatile int32_t t29 = 2;

    t29 = ((x117==x118)>(x119^x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x121 = -1420020;
	volatile int16_t x122 = 10;
	uint32_t x123 = 32112965U;
	volatile uint16_t x124 = UINT16_MAX;

    t30 = ((x121==x122)>(x123^x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x125 = 13642;
	uint8_t x126 = UINT8_MAX;
	int64_t x127 = INT64_MAX;
	int32_t x128 = INT32_MIN;

    t31 = ((x125==x126)>(x127^x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = 52;
	static int8_t x130 = 1;
	int64_t x131 = INT64_MAX;
	int64_t x132 = INT64_MIN;
	static volatile int32_t t32 = -29962;

    t32 = ((x129==x130)>(x131^x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = 308740598061480923LL;
	int8_t x134 = INT8_MAX;
	static volatile int64_t x135 = -1LL;
	uint16_t x136 = UINT16_MAX;
	int32_t t33 = 7470;

    t33 = ((x133==x134)>(x135^x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MAX;
	int64_t x138 = INT64_MAX;
	uint64_t x139 = UINT64_MAX;
	int16_t x140 = INT16_MIN;
	int32_t t34 = -461;

    t34 = ((x137==x138)>(x139^x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -1;
	int32_t t35 = 9;

    t35 = ((x141==x142)>(x143^x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x146 = -130804754LL;
	volatile int16_t x147 = INT16_MIN;
	volatile int16_t x148 = INT16_MIN;
	int32_t t36 = -3;

    t36 = ((x145==x146)>(x147^x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = 1U;
	int32_t x151 = INT32_MIN;
	int64_t x152 = INT64_MIN;
	int32_t t37 = 531;

    t37 = ((x149==x150)>(x151^x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	int16_t x154 = 1;
	int64_t x155 = INT64_MIN;
	uint32_t x156 = UINT32_MAX;
	int32_t t38 = 27035057;

    t38 = ((x153==x154)>(x155^x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MAX;
	volatile int16_t x158 = INT16_MIN;
	int16_t x159 = INT16_MIN;
	static int8_t x160 = -30;

    t39 = ((x157==x158)>(x159^x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = 1;
	int32_t x162 = -30;
	uint8_t x163 = 59U;
	int32_t x164 = -423;

    t40 = ((x161==x162)>(x163^x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 50U;
	uint16_t x166 = 1462U;
	int8_t x167 = INT8_MIN;
	volatile uint16_t x168 = UINT16_MAX;
	int32_t t41 = -180503623;

    t41 = ((x165==x166)>(x167^x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x169 = 5781U;
	int32_t x170 = INT32_MIN;

    t42 = ((x169==x170)>(x171^x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = 0;
	volatile int16_t x174 = 1;
	int32_t x175 = 26975;
	uint16_t x176 = 7139U;
	int32_t t43 = -218877;

    t43 = ((x173==x174)>(x175^x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 0U;
	volatile int64_t x178 = -4388877511619LL;
	static uint8_t x179 = UINT8_MAX;

    t44 = ((x177==x178)>(x179^x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x181 = INT32_MIN;
	int8_t x182 = INT8_MIN;
	int8_t x183 = INT8_MIN;
	volatile int64_t x184 = -5997LL;
	int32_t t45 = -5970264;

    t45 = ((x181==x182)>(x183^x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x188 = UINT16_MAX;

    t46 = ((x185==x186)>(x187^x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x192 = 1010702432842LLU;

    t47 = ((x189==x190)>(x191^x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MIN;
	int32_t x194 = INT32_MAX;
	int32_t t48 = 7;

    t48 = ((x193==x194)>(x195^x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint8_t x197 = 16U;
	int8_t x200 = INT8_MAX;
	volatile int32_t t49 = 74450;

    t49 = ((x197==x198)>(x199^x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	uint64_t x202 = UINT64_MAX;
	volatile int8_t x203 = -1;
	uint8_t x204 = 4U;

    t50 = ((x201==x202)>(x203^x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 447458594LLU;
	static volatile int32_t x206 = INT32_MIN;
	uint64_t x207 = 1297LLU;
	static uint64_t x208 = 8012905573LLU;

    t51 = ((x205==x206)>(x207^x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x209 = 1LLU;
	volatile int16_t x210 = INT16_MIN;
	static int64_t x211 = -1LL;

    t52 = ((x209==x210)>(x211^x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x213 = INT8_MIN;
	int16_t x216 = 4;

    t53 = ((x213==x214)>(x215^x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x217 = 345;
	static volatile uint64_t x218 = 0LLU;
	static volatile int8_t x220 = -1;

    t54 = ((x217==x218)>(x219^x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x221 = -1;
	int64_t x222 = INT64_MIN;
	static volatile int8_t x223 = INT8_MAX;
	uint16_t x224 = 431U;
	int32_t t55 = -2791;

    t55 = ((x221==x222)>(x223^x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x226 = 3303301061218354907LLU;
	int16_t x227 = INT16_MIN;

    t56 = ((x225==x226)>(x227^x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x230 = 29U;
	uint8_t x231 = 0U;
	uint64_t x232 = UINT64_MAX;
	int32_t t57 = -1;

    t57 = ((x229==x230)>(x231^x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x233 = -1LL;
	static int32_t x234 = -5413;
	uint64_t x235 = UINT64_MAX;
	uint16_t x236 = 530U;
	int32_t t58 = 661076664;

    t58 = ((x233==x234)>(x235^x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x238 = 38626773;
	static uint16_t x239 = 1896U;
	static int64_t x240 = INT64_MIN;
	volatile int32_t t59 = -1786;

    t59 = ((x237==x238)>(x239^x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = 60U;
	int64_t x243 = 187387178692510778LL;
	static volatile uint16_t x244 = 1135U;
	int32_t t60 = 0;

    t60 = ((x241==x242)>(x243^x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MAX;
	int16_t x246 = 1;
	int64_t x247 = INT64_MIN;
	volatile int32_t t61 = -1743522;

    t61 = ((x245==x246)>(x247^x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x249 = INT32_MAX;
	int32_t x250 = 80455233;
	int8_t x251 = INT8_MIN;
	int8_t x252 = 32;
	int32_t t62 = -7;

    t62 = ((x249==x250)>(x251^x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x253 = INT16_MIN;
	int32_t x254 = -1;
	static uint64_t x255 = 70532004560801903LLU;
	int16_t x256 = INT16_MIN;
	volatile int32_t t63 = -982;

    t63 = ((x253==x254)>(x255^x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x257 = 329749925961141LLU;
	int32_t x260 = 52005;
	static int32_t t64 = -1810254;

    t64 = ((x257==x258)>(x259^x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MIN;
	volatile int8_t x262 = -1;
	int64_t x263 = 663032111562792LL;
	int32_t x264 = 0;

    t65 = ((x261==x262)>(x263^x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x265 = INT64_MAX;
	static int32_t x266 = -242;
	int64_t x267 = INT64_MIN;

    t66 = ((x265==x266)>(x267^x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x270 = 4;
	int8_t x271 = INT8_MIN;
	int8_t x272 = INT8_MIN;
	static volatile int32_t t67 = 19947;

    t67 = ((x269==x270)>(x271^x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MIN;
	static int16_t x274 = -1;
	int16_t x275 = -1;
	int32_t t68 = 444365;

    t68 = ((x273==x274)>(x275^x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x278 = INT16_MIN;
	volatile int32_t x280 = -3;
	int32_t t69 = -61195;

    t69 = ((x277==x278)>(x279^x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x281 = -1LL;
	int64_t x282 = INT64_MIN;
	volatile int32_t x284 = 6318;

    t70 = ((x281==x282)>(x283^x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x286 = -889038724LL;
	int32_t x287 = -1;
	volatile int16_t x288 = INT16_MAX;
	int32_t t71 = 68;

    t71 = ((x285==x286)>(x287^x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x292 = INT16_MAX;
	static int32_t t72 = 0;

    t72 = ((x289==x290)>(x291^x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = -1;
	static volatile uint16_t x294 = 2033U;
	uint32_t x295 = UINT32_MAX;
	volatile int32_t t73 = -1044544696;

    t73 = ((x293==x294)>(x295^x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = -1;
	uint64_t x299 = 1342437778199411LLU;
	int64_t x300 = -1LL;
	volatile int32_t t74 = 222;

    t74 = ((x297==x298)>(x299^x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = 35823989623587782LLU;
	int64_t x302 = INT64_MIN;
	static int32_t x303 = -1;
	int16_t x304 = INT16_MIN;
	int32_t t75 = -122;

    t75 = ((x301==x302)>(x303^x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	uint64_t x306 = 5467141029647337433LLU;
	int32_t x307 = -388;
	int32_t t76 = 248864539;

    t76 = ((x305==x306)>(x307^x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x309 = 90501LLU;
	static uint64_t x310 = UINT64_MAX;
	static uint64_t x312 = UINT64_MAX;
	volatile int32_t t77 = -179464;

    t77 = ((x309==x310)>(x311^x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x314 = INT16_MIN;
	int16_t x315 = INT16_MAX;
	int8_t x316 = 27;
	static int32_t t78 = -12963378;

    t78 = ((x313==x314)>(x315^x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x317 = 1U;
	static int8_t x318 = -1;
	static int16_t x319 = INT16_MAX;
	static int8_t x320 = -1;

    t79 = ((x317==x318)>(x319^x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = 1;
	uint32_t x322 = 21630677U;
	int32_t x323 = INT32_MIN;
	int32_t x324 = -1;
	volatile int32_t t80 = -45;

    t80 = ((x321==x322)>(x323^x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = -1;
	uint16_t x326 = 11U;
	int16_t x327 = INT16_MIN;
	uint32_t x328 = 6U;
	int32_t t81 = 2;

    t81 = ((x325==x326)>(x327^x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = -22000731725LL;
	int8_t x330 = 3;
	int8_t x331 = INT8_MIN;
	int8_t x332 = INT8_MIN;
	static int32_t t82 = 13727;

    t82 = ((x329==x330)>(x331^x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = 0;
	uint64_t x335 = 23402989LLU;
	static uint32_t x336 = 1U;
	volatile int32_t t83 = 152;

    t83 = ((x333==x334)>(x335^x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x337 = 40027U;
	volatile uint64_t x338 = 14LLU;
	static int16_t x339 = 1;
	int64_t x340 = 272447750148LL;

    t84 = ((x337==x338)>(x339^x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x342 = 13U;
	volatile int16_t x343 = -357;
	uint8_t x344 = 51U;
	volatile int32_t t85 = -564904;

    t85 = ((x341==x342)>(x343^x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x345 = INT16_MAX;
	uint32_t x346 = UINT32_MAX;
	volatile int32_t x347 = 6400;
	static uint8_t x348 = 28U;
	int32_t t86 = 2961;

    t86 = ((x345==x346)>(x347^x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x349 = -1;
	int8_t x350 = 42;
	int8_t x351 = -1;
	volatile int32_t t87 = 94700;

    t87 = ((x349==x350)>(x351^x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = 91258881170LL;
	uint16_t x354 = 2U;
	static uint64_t x355 = 12791135569LLU;
	uint32_t x356 = 5U;

    t88 = ((x353==x354)>(x355^x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x357 = UINT16_MAX;
	uint8_t x358 = UINT8_MAX;
	int64_t x359 = -41605657LL;
	int32_t x360 = -2005095;

    t89 = ((x357==x358)>(x359^x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	volatile uint16_t x362 = 110U;
	static int8_t x363 = -1;
	volatile int32_t t90 = 2008985;

    t90 = ((x361==x362)>(x363^x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = -382308866;
	static uint16_t x366 = UINT16_MAX;
	int64_t x367 = INT64_MIN;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t91 = -24547;

    t91 = ((x365==x366)>(x367^x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -1;
	int64_t x370 = INT64_MIN;
	uint32_t x371 = 213285481U;
	static volatile int32_t t92 = 176450;

    t92 = ((x369==x370)>(x371^x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x373 = INT64_MIN;
	uint32_t x374 = 3U;
	int8_t x375 = -1;
	int8_t x376 = 1;
	int32_t t93 = -79928627;

    t93 = ((x373==x374)>(x375^x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x377 = 0U;
	int32_t x378 = INT32_MIN;
	int32_t x379 = 431500;
	int16_t x380 = INT16_MAX;

    t94 = ((x377==x378)>(x379^x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint16_t x381 = 25U;
	int16_t x382 = INT16_MIN;
	static uint64_t x383 = UINT64_MAX;
	volatile uint64_t x384 = 140535437403857LLU;

    t95 = ((x381==x382)>(x383^x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x385 = 117U;
	volatile int8_t x386 = INT8_MIN;
	volatile int64_t x387 = INT64_MAX;
	int64_t x388 = 548766026273413LL;
	int32_t t96 = 0;

    t96 = ((x385==x386)>(x387^x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x389 = 432LLU;
	int32_t x390 = INT32_MIN;
	int32_t x391 = -719669409;
	int16_t x392 = INT16_MAX;
	int32_t t97 = -198131;

    t97 = ((x389==x390)>(x391^x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x393 = 52994667018150668LLU;
	volatile int32_t x395 = INT32_MAX;
	static int64_t x396 = INT64_MAX;
	volatile int32_t t98 = 1566241;

    t98 = ((x393==x394)>(x395^x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x398 = 2;
	int32_t x399 = INT32_MIN;
	int32_t x400 = INT32_MIN;
	int32_t t99 = 31446614;

    t99 = ((x397==x398)>(x399^x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	int64_t x402 = -1LL;
	int16_t x403 = INT16_MIN;
	int16_t x404 = -1;

    t100 = ((x401==x402)>(x403^x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x405 = -39;
	int32_t x406 = -1;
	static volatile int8_t x407 = -1;
	volatile int64_t x408 = INT64_MAX;
	volatile int32_t t101 = -42;

    t101 = ((x405==x406)>(x407^x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x409 = 2104165U;
	int64_t x410 = INT64_MIN;
	uint8_t x411 = 0U;
	uint8_t x412 = 36U;

    t102 = ((x409==x410)>(x411^x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x413 = 28624427LLU;
	int32_t x415 = 27979;
	int8_t x416 = INT8_MIN;
	volatile int32_t t103 = 28007592;

    t103 = ((x413==x414)>(x415^x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MIN;
	uint8_t x419 = 67U;
	int16_t x420 = 525;
	volatile int32_t t104 = 509;

    t104 = ((x417==x418)>(x419^x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x421 = UINT16_MAX;
	int8_t x422 = -6;
	volatile uint16_t x423 = 13U;
	int32_t x424 = -5300;
	int32_t t105 = -1422;

    t105 = ((x421==x422)>(x423^x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x425 = UINT32_MAX;
	int32_t t106 = 356;

    t106 = ((x425==x426)>(x427^x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x429 = -1LL;
	uint64_t x430 = 4562293084670627817LLU;
	uint8_t x431 = 0U;
	int16_t x432 = INT16_MIN;
	int32_t t107 = -1;

    t107 = ((x429==x430)>(x431^x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MIN;
	static int16_t x434 = INT16_MAX;
	uint64_t x435 = UINT64_MAX;
	volatile int32_t t108 = -103;

    t108 = ((x433==x434)>(x435^x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x437 = UINT64_MAX;
	static int16_t x438 = INT16_MAX;
	int8_t x439 = -1;
	volatile int32_t t109 = -2155820;

    t109 = ((x437==x438)>(x439^x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x443 = 50459147427944919LL;
	uint32_t x444 = 530U;
	int32_t t110 = 189424;

    t110 = ((x441==x442)>(x443^x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MAX;
	int16_t x447 = -1;
	volatile int16_t x448 = INT16_MIN;
	static int32_t t111 = 158448040;

    t111 = ((x445==x446)>(x447^x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = 3208622761578586LLU;
	volatile int64_t x450 = -1LL;
	int32_t x451 = 40309;
	int8_t x452 = INT8_MIN;
	int32_t t112 = -164585;

    t112 = ((x449==x450)>(x451^x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x453 = 7LLU;
	int8_t x454 = INT8_MIN;
	int64_t x456 = INT64_MIN;
	volatile int32_t t113 = -1;

    t113 = ((x453==x454)>(x455^x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x457 = -10;
	static int16_t x458 = INT16_MAX;
	int64_t x459 = INT64_MIN;
	static volatile int16_t x460 = 1;
	static int32_t t114 = 413;

    t114 = ((x457==x458)>(x459^x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MIN;
	int64_t x462 = INT64_MIN;
	uint64_t x463 = 0LLU;
	volatile int8_t x464 = INT8_MAX;
	volatile int32_t t115 = 1;

    t115 = ((x461==x462)>(x463^x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x465 = 52U;
	int32_t x466 = -39943;
	int64_t x467 = -1LL;
	int8_t x468 = INT8_MIN;
	volatile int32_t t116 = 1;

    t116 = ((x465==x466)>(x467^x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = 106259LLU;
	uint8_t x470 = UINT8_MAX;
	static int16_t x471 = 24;
	int32_t x472 = -1;
	int32_t t117 = 180;

    t117 = ((x469==x470)>(x471^x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x473 = UINT16_MAX;
	uint32_t x474 = 4904U;
	uint64_t x475 = UINT64_MAX;
	volatile uint64_t x476 = 1433228184LLU;

    t118 = ((x473==x474)>(x475^x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = 15U;
	int64_t x478 = INT64_MIN;
	int32_t x480 = -13297;
	int32_t t119 = 16243076;

    t119 = ((x477==x478)>(x479^x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x481 = -1;
	static int8_t x484 = INT8_MIN;
	int32_t t120 = -16305671;

    t120 = ((x481==x482)>(x483^x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = 3285LL;
	int16_t x486 = INT16_MIN;
	int8_t x487 = INT8_MAX;
	uint32_t x488 = 2043563U;

    t121 = ((x485==x486)>(x487^x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MIN;
	static int8_t x490 = 2;
	int32_t x491 = INT32_MIN;
	static int8_t x492 = INT8_MIN;
	volatile int32_t t122 = -1;

    t122 = ((x489==x490)>(x491^x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x493 = 7U;
	int16_t x494 = INT16_MIN;
	static int8_t x495 = -1;
	volatile int64_t x496 = 3486051LL;

    t123 = ((x493==x494)>(x495^x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = -1;
	volatile uint8_t x498 = UINT8_MAX;
	uint64_t x499 = 6871252183734LLU;
	uint16_t x500 = 1933U;
	volatile int32_t t124 = 55148;

    t124 = ((x497==x498)>(x499^x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int16_t x501 = 28;
	static int16_t x503 = -1;
	static volatile int32_t t125 = -337;

    t125 = ((x501==x502)>(x503^x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MIN;
	int64_t x507 = INT64_MIN;
	volatile int32_t x508 = INT32_MIN;
	int32_t t126 = 16089;

    t126 = ((x505==x506)>(x507^x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MIN;
	static int32_t x510 = 5;
	int8_t x511 = INT8_MIN;
	volatile int16_t x512 = INT16_MIN;

    t127 = ((x509==x510)>(x511^x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x514 = INT64_MIN;
	int64_t x515 = 135213239LL;
	static uint64_t x516 = 1898366912774LLU;

    t128 = ((x513==x514)>(x515^x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = -1;
	uint32_t x518 = 40U;
	volatile uint16_t x519 = 351U;
	static volatile int32_t t129 = -45804256;

    t129 = ((x517==x518)>(x519^x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = 32;
	int8_t x522 = INT8_MIN;
	uint32_t x524 = UINT32_MAX;
	int32_t t130 = -205702;

    t130 = ((x521==x522)>(x523^x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x526 = UINT64_MAX;
	int8_t x527 = INT8_MIN;
	int8_t x528 = 0;
	int32_t t131 = 342187;

    t131 = ((x525==x526)>(x527^x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x529 = 7;
	int8_t x530 = INT8_MIN;
	int64_t x532 = -1LL;
	static volatile int32_t t132 = -25213044;

    t132 = ((x529==x530)>(x531^x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = 553U;
	int64_t x534 = INT64_MAX;
	int8_t x535 = INT8_MIN;
	static volatile int16_t x536 = -1;
	volatile int32_t t133 = 15637;

    t133 = ((x533==x534)>(x535^x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = -1LL;
	int8_t x538 = INT8_MIN;
	int8_t x539 = 0;
	static int64_t x540 = INT64_MIN;
	int32_t t134 = -294174819;

    t134 = ((x537==x538)>(x539^x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x541 = UINT8_MAX;
	uint8_t x542 = 1U;
	volatile uint32_t x543 = UINT32_MAX;
	uint64_t x544 = 118748LLU;
	int32_t t135 = 43542;

    t135 = ((x541==x542)>(x543^x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = 0;
	volatile int64_t x546 = -1LL;
	uint16_t x548 = 160U;
	static volatile int32_t t136 = 54;

    t136 = ((x545==x546)>(x547^x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x550 = INT16_MIN;
	int8_t x552 = 2;

    t137 = ((x549==x550)>(x551^x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MAX;
	volatile uint32_t x554 = 2066342U;
	int64_t x555 = INT64_MAX;
	static int8_t x556 = INT8_MIN;
	int32_t t138 = -268550;

    t138 = ((x553==x554)>(x555^x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MAX;
	static int32_t x558 = -1;
	int8_t x559 = INT8_MAX;
	volatile int16_t x560 = INT16_MIN;
	volatile int32_t t139 = 4424924;

    t139 = ((x557==x558)>(x559^x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x561 = INT16_MIN;
	static int32_t x562 = INT32_MIN;
	uint32_t x563 = 249018U;
	int32_t x564 = -1;

    t140 = ((x561==x562)>(x563^x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x568 = 863221247LLU;
	int32_t t141 = -5;

    t141 = ((x565==x566)>(x567^x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MIN;
	static int64_t x571 = INT64_MAX;
	volatile uint8_t x572 = UINT8_MAX;
	volatile int32_t t142 = 306255740;

    t142 = ((x569==x570)>(x571^x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = 4;
	uint16_t x574 = UINT16_MAX;
	int8_t x576 = 0;

    t143 = ((x573==x574)>(x575^x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MAX;
	volatile uint64_t x578 = 1172641307958659LLU;
	int16_t x580 = -1;
	int32_t t144 = -1506;

    t144 = ((x577==x578)>(x579^x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = -1;
	static int16_t x582 = INT16_MIN;
	int64_t x583 = INT64_MAX;
	static int64_t x584 = INT64_MIN;
	int32_t t145 = 82315;

    t145 = ((x581==x582)>(x583^x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MIN;
	uint16_t x586 = 3U;
	uint64_t x588 = 2826LLU;
	int32_t t146 = -74526;

    t146 = ((x585==x586)>(x587^x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = 15298;
	static int8_t x590 = 0;
	uint64_t x591 = UINT64_MAX;
	int16_t x592 = INT16_MIN;
	int32_t t147 = -5595;

    t147 = ((x589==x590)>(x591^x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x593 = INT16_MIN;
	static volatile int64_t x594 = INT64_MIN;
	static uint8_t x595 = 60U;
	volatile int32_t t148 = 151119;

    t148 = ((x593==x594)>(x595^x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = INT16_MAX;
	int32_t x598 = INT32_MAX;
	int16_t x599 = -1;
	int32_t x600 = -1;
	volatile int32_t t149 = -1735;

    t149 = ((x597==x598)>(x599^x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = 720LLU;
	int32_t x603 = INT32_MIN;
	int32_t x604 = INT32_MAX;
	volatile int32_t t150 = 122206;

    t150 = ((x601==x602)>(x603^x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x605 = INT16_MAX;
	int8_t x606 = -1;

    t151 = ((x605==x606)>(x607^x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	static uint32_t x611 = 12921U;
	int64_t x612 = INT64_MIN;
	volatile int32_t t152 = 2085004;

    t152 = ((x609==x610)>(x611^x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x614 = -1;
	volatile int8_t x616 = INT8_MIN;
	int32_t t153 = -30629;

    t153 = ((x613==x614)>(x615^x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x617 = UINT16_MAX;
	int8_t x618 = 11;
	uint64_t x619 = 46072257139305LLU;
	int64_t x620 = 1603498973299879LL;

    t154 = ((x617==x618)>(x619^x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MIN;
	static uint8_t x622 = UINT8_MAX;
	volatile uint64_t x623 = 8LLU;
	int8_t x624 = INT8_MIN;
	volatile int32_t t155 = -3508;

    t155 = ((x621==x622)>(x623^x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = 0U;
	int32_t x627 = INT32_MIN;
	int32_t t156 = 41203;

    t156 = ((x625==x626)>(x627^x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MIN;
	uint16_t x630 = UINT16_MAX;
	static uint16_t x631 = UINT16_MAX;
	uint8_t x632 = UINT8_MAX;
	static volatile int32_t t157 = 3136;

    t157 = ((x629==x630)>(x631^x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = 84U;
	uint16_t x634 = 3U;
	uint16_t x635 = 30138U;
	int16_t x636 = 1;
	int32_t t158 = 25;

    t158 = ((x633==x634)>(x635^x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x637 = 1;
	int64_t x639 = -1LL;
	int64_t x640 = INT64_MIN;
	int32_t t159 = -176;

    t159 = ((x637==x638)>(x639^x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MIN;
	static uint8_t x642 = 13U;
	int8_t x643 = INT8_MIN;
	int64_t x644 = 136583452577430LL;
	volatile int32_t t160 = -31289093;

    t160 = ((x641==x642)>(x643^x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = 171499606824363LL;
	volatile int16_t x646 = -1;
	uint16_t x647 = UINT16_MAX;
	uint32_t x648 = UINT32_MAX;
	int32_t t161 = 378321877;

    t161 = ((x645==x646)>(x647^x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MAX;
	int16_t x651 = -4860;
	int32_t t162 = 1988090;

    t162 = ((x649==x650)>(x651^x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = -1;
	int16_t x655 = 117;
	int8_t x656 = 15;
	int32_t t163 = 181216;

    t163 = ((x653==x654)>(x655^x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MIN;
	int64_t x659 = 95065347LL;
	int32_t x660 = 3;
	int32_t t164 = -15495282;

    t164 = ((x657==x658)>(x659^x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = -1;
	uint64_t x662 = 123903281757037LLU;
	static uint64_t x663 = 353LLU;
	volatile int16_t x664 = INT16_MIN;
	volatile int32_t t165 = -36;

    t165 = ((x661==x662)>(x663^x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x665 = 62738562771848639LL;
	volatile int16_t x666 = -1;
	int16_t x667 = INT16_MIN;
	static int8_t x668 = INT8_MIN;

    t166 = ((x665==x666)>(x667^x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = UINT64_MAX;
	uint32_t x671 = 78U;
	uint64_t x672 = 24539480155LLU;
	int32_t t167 = 89622;

    t167 = ((x669==x670)>(x671^x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -12;
	static int64_t x675 = INT64_MIN;
	uint32_t x676 = 380182U;
	volatile int32_t t168 = 48302;

    t168 = ((x673==x674)>(x675^x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = 0U;
	uint8_t x678 = 0U;
	volatile int16_t x679 = 25;
	int16_t x680 = -281;
	volatile int32_t t169 = -345662738;

    t169 = ((x677==x678)>(x679^x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x681 = 18230U;
	int16_t x682 = INT16_MIN;
	uint16_t x683 = 592U;
	uint16_t x684 = 103U;
	volatile int32_t t170 = -14978947;

    t170 = ((x681==x682)>(x683^x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x687 = 12455635211449LLU;
	static int64_t x688 = -1LL;
	volatile int32_t t171 = -409695906;

    t171 = ((x685==x686)>(x687^x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x689 = 17045718796LLU;
	int64_t x690 = INT64_MAX;
	volatile uint16_t x691 = UINT16_MAX;
	int16_t x692 = 3266;

    t172 = ((x689==x690)>(x691^x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint8_t x693 = 39U;
	volatile int8_t x695 = -12;
	int32_t t173 = 0;

    t173 = ((x693==x694)>(x695^x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = 361U;
	int32_t x698 = -1;
	volatile int16_t x700 = 0;
	static int32_t t174 = 3158921;

    t174 = ((x697==x698)>(x699^x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MIN;
	volatile int8_t x702 = INT8_MAX;
	int8_t x703 = 4;
	static int32_t x704 = -1;
	int32_t t175 = -58;

    t175 = ((x701==x702)>(x703^x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = -1;
	int8_t x706 = -1;
	int8_t x707 = 36;
	int8_t x708 = INT8_MIN;

    t176 = ((x705==x706)>(x707^x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = 922231U;
	uint32_t x710 = 5233922U;
	uint8_t x711 = 122U;
	uint64_t x712 = 29614306LLU;
	static int32_t t177 = 12;

    t177 = ((x709==x710)>(x711^x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x714 = UINT8_MAX;
	int8_t x715 = -1;
	static int16_t x716 = -1;
	int32_t t178 = 43;

    t178 = ((x713==x714)>(x715^x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x717 = 1894U;
	static uint16_t x718 = 5U;
	static uint16_t x720 = UINT16_MAX;
	int32_t t179 = 59819844;

    t179 = ((x717==x718)>(x719^x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MIN;
	int32_t x722 = INT32_MIN;
	int64_t x723 = INT64_MIN;
	volatile int32_t t180 = 226;

    t180 = ((x721==x722)>(x723^x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x727 = 68023695397519LLU;
	static uint8_t x728 = 11U;
	volatile int32_t t181 = -1982008;

    t181 = ((x725==x726)>(x727^x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 706533U;
	int8_t x731 = INT8_MIN;
	int32_t x732 = 1;

    t182 = ((x729==x730)>(x731^x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = UINT32_MAX;
	int32_t x734 = INT32_MIN;
	uint16_t x735 = 29U;

    t183 = ((x733==x734)>(x735^x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MAX;
	int8_t x738 = -1;
	uint8_t x739 = 13U;
	int32_t t184 = 1;

    t184 = ((x737==x738)>(x739^x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = -1LL;
	static int8_t x742 = -1;
	static volatile int32_t x743 = -3051;

    t185 = ((x741==x742)>(x743^x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	static uint8_t x746 = UINT8_MAX;

    t186 = ((x745==x746)>(x747^x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x750 = 13;
	uint16_t x751 = UINT16_MAX;
	static int64_t x752 = 45715LL;
	volatile int32_t t187 = 5991;

    t187 = ((x749==x750)>(x751^x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MAX;
	volatile int64_t x754 = -1LL;
	volatile int32_t x756 = INT32_MIN;
	int32_t t188 = -225;

    t188 = ((x753==x754)>(x755^x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	int8_t x758 = INT8_MAX;
	static uint8_t x759 = 18U;
	uint64_t x760 = UINT64_MAX;
	int32_t t189 = -634846236;

    t189 = ((x757==x758)>(x759^x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = 26LL;
	int64_t x762 = INT64_MIN;
	int8_t x763 = INT8_MIN;
	volatile int16_t x764 = -137;
	static int32_t t190 = 3;

    t190 = ((x761==x762)>(x763^x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = -135180;
	int16_t x766 = -30;
	volatile uint8_t x767 = UINT8_MAX;
	uint16_t x768 = 24U;
	static volatile int32_t t191 = 693;

    t191 = ((x765==x766)>(x767^x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x770 = -1;
	static volatile int16_t x771 = INT16_MAX;
	int16_t x772 = INT16_MIN;
	int32_t t192 = -2;

    t192 = ((x769==x770)>(x771^x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = 355172265;
	uint32_t x774 = UINT32_MAX;
	int8_t x775 = 2;
	int64_t x776 = INT64_MIN;

    t193 = ((x773==x774)>(x775^x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x777 = -1LL;
	uint16_t x778 = 3621U;
	static uint32_t x779 = 9838986U;
	int32_t t194 = -1;

    t194 = ((x777==x778)>(x779^x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x782 = 72217069604035369LLU;
	int32_t x783 = 5;
	uint8_t x784 = UINT8_MAX;
	int32_t t195 = 247590548;

    t195 = ((x781==x782)>(x783^x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MIN;
	int16_t x788 = INT16_MAX;
	int32_t t196 = -1071612472;

    t196 = ((x785==x786)>(x787^x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = 40U;
	int32_t x790 = -1;
	volatile int32_t x791 = INT32_MAX;
	static int64_t x792 = -1LL;
	static volatile int32_t t197 = 23830;

    t197 = ((x789==x790)>(x791^x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x793 = 0U;
	volatile int64_t x794 = -3LL;
	uint32_t x795 = UINT32_MAX;
	static uint64_t x796 = 3LLU;

    t198 = ((x793==x794)>(x795^x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x797 = INT16_MAX;
	static uint64_t x798 = UINT64_MAX;
	int16_t x799 = INT16_MAX;
	static volatile uint16_t x800 = 7U;

    t199 = ((x797==x798)>(x799^x800));

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


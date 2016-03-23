
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

int16_t x1 = INT16_MIN;
int32_t x6 = 8;
volatile int16_t x7 = 34;
volatile int8_t x9 = 34;
static int32_t t2 = -2;
uint16_t x15 = 895U;
int16_t x18 = 2;
int32_t x25 = 0;
int64_t x28 = INT64_MAX;
int8_t x35 = -24;
int64_t x42 = INT64_MAX;
static int16_t x43 = INT16_MAX;
int32_t t10 = -95561;
int32_t x48 = INT32_MAX;
volatile int32_t t11 = -84955256;
uint32_t x54 = 48U;
int16_t x55 = INT16_MIN;
int16_t x58 = INT16_MAX;
int64_t x62 = 97691LL;
int64_t x69 = INT64_MAX;
volatile int32_t t17 = 11381866;
uint16_t x73 = 871U;
int8_t x74 = -1;
int16_t x76 = -7115;
int8_t x83 = INT8_MAX;
int64_t x87 = INT64_MIN;
static uint16_t x101 = UINT16_MAX;
int16_t x102 = -1;
volatile int32_t x106 = -1;
int32_t t26 = 2017744;
int64_t x114 = INT64_MAX;
int32_t x115 = INT32_MAX;
static int32_t t28 = -59528;
volatile uint64_t x118 = UINT64_MAX;
static int32_t x120 = -1;
volatile int32_t t29 = 74;
int16_t x122 = INT16_MIN;
uint16_t x126 = UINT16_MAX;
volatile int64_t x128 = 236091981LL;
int8_t x129 = INT8_MIN;
volatile int32_t x131 = -1;
static int16_t x132 = 204;
int64_t x136 = -93514LL;
static int8_t x137 = -18;
uint32_t x140 = 194037796U;
uint16_t x151 = 2225U;
uint32_t x152 = UINT32_MAX;
static int32_t x154 = -1951162;
int32_t x159 = -1;
static int32_t t39 = 2985;
int64_t x161 = INT64_MIN;
int16_t x166 = INT16_MIN;
static uint64_t x171 = 3666463256946584486LLU;
uint64_t x182 = UINT64_MAX;
static volatile uint16_t x183 = UINT16_MAX;
uint16_t x189 = UINT16_MAX;
int64_t x190 = INT64_MIN;
static int32_t x196 = INT32_MIN;
volatile uint8_t x198 = UINT8_MAX;
uint64_t x205 = UINT64_MAX;
int8_t x208 = -4;
int32_t t51 = 1856;
int16_t x211 = -1;
uint64_t x214 = 12890LLU;
int8_t x225 = INT8_MIN;
volatile int32_t t56 = 56;
static volatile uint8_t x232 = UINT8_MAX;
int64_t x234 = INT64_MAX;
uint32_t x236 = 2U;
int64_t x242 = -15LL;
int64_t x255 = -1LL;
int32_t t62 = -535;
int16_t x259 = INT16_MIN;
int8_t x262 = 0;
int32_t x264 = INT32_MIN;
int32_t t64 = -8748;
int16_t x265 = INT16_MIN;
int64_t x269 = -1LL;
int32_t t66 = -276060523;
static uint16_t x286 = 12U;
static uint16_t x294 = UINT16_MAX;
int16_t x295 = -1;
volatile int64_t x296 = INT64_MIN;
static volatile int32_t x303 = INT32_MIN;
volatile int16_t x306 = INT16_MAX;
volatile uint32_t x312 = 930928816U;
uint64_t x316 = UINT64_MAX;
int32_t t77 = -1636330;
volatile int32_t x322 = INT32_MIN;
int64_t x324 = INT64_MIN;
volatile int32_t x327 = -24144015;
static uint8_t x330 = 3U;
int32_t x349 = INT32_MAX;
uint8_t x352 = 13U;
int16_t x353 = -1471;
static int32_t x356 = INT32_MIN;
static uint8_t x363 = 1U;
int32_t t86 = 54;
int16_t x367 = 5;
volatile uint64_t x374 = 30303319LLU;
volatile int16_t x390 = -1;
uint64_t x391 = UINT64_MAX;
volatile uint8_t x392 = UINT8_MAX;
int32_t t94 = -104382;
int32_t x408 = INT32_MIN;
int32_t x409 = 288;
int8_t x412 = INT8_MIN;
int32_t t97 = 11672;
uint32_t x420 = UINT32_MAX;
volatile int32_t x423 = INT32_MIN;
int32_t x434 = -64436;
static int64_t x438 = -20523509LL;
int64_t x439 = INT64_MIN;
volatile int16_t x441 = INT16_MIN;
int32_t t105 = 472;
static int16_t x451 = INT16_MIN;
volatile int32_t t107 = 26;
static int8_t x458 = 12;
uint64_t x461 = 20227000LLU;
int16_t x462 = -137;
volatile int32_t t111 = 71;
static int32_t x469 = INT32_MIN;
int32_t t112 = -328;
volatile int32_t t114 = -3091502;
uint16_t x486 = UINT16_MAX;
int8_t x489 = INT8_MIN;
static int64_t x494 = 287333140930921696LL;
uint8_t x496 = 0U;
uint16_t x499 = 7159U;
int32_t t119 = -251069;
static int16_t x502 = INT16_MIN;
uint32_t x505 = UINT32_MAX;
volatile int64_t x507 = INT64_MIN;
volatile int32_t t122 = 13406358;
int32_t x516 = -11330599;
volatile int32_t t123 = 61465;
uint16_t x518 = 787U;
int8_t x521 = -1;
volatile uint32_t x523 = UINT32_MAX;
static int32_t t125 = 3212;
static int8_t x526 = INT8_MAX;
static int16_t x528 = -1;
volatile uint64_t x538 = 352791LLU;
static int32_t t128 = -125;
static int16_t x541 = 1253;
volatile uint16_t x547 = 7U;
static volatile int16_t x550 = INT16_MIN;
uint32_t x554 = 26334998U;
volatile int32_t x557 = -1;
static int16_t x561 = 25;
int8_t x566 = INT8_MAX;
static int64_t x567 = 1LL;
uint32_t x568 = 364989391U;
int32_t t135 = 19645;
int8_t x570 = INT8_MIN;
int8_t x576 = 1;
volatile int32_t t140 = 210;
uint32_t x589 = 53U;
static int32_t t147 = 259;
uint64_t x624 = 6080992106574525891LLU;
static int16_t x626 = -1;
uint8_t x628 = 28U;
static int16_t x629 = INT16_MAX;
volatile int32_t t152 = 118961272;
static int16_t x639 = INT16_MAX;
int16_t x641 = -327;
volatile int16_t x647 = -1;
int32_t x648 = -1;
volatile int32_t t155 = -366870;
int32_t t156 = 649092;
volatile int32_t x670 = INT32_MIN;
static volatile uint16_t x674 = 1U;
static uint64_t x683 = 2405340353551107LLU;
static uint16_t x694 = UINT16_MAX;
static int32_t x696 = 113;
int32_t x700 = INT32_MIN;
int32_t t169 = 41;
int32_t x708 = -1;
uint16_t x712 = UINT16_MAX;
volatile int32_t t171 = -1;
volatile int64_t x722 = 1196670LL;
uint8_t x725 = 15U;
volatile int32_t x728 = INT32_MIN;
int32_t x729 = INT32_MIN;
volatile uint8_t x738 = 0U;
volatile int16_t x743 = INT16_MIN;
static int32_t t179 = 13424;
static int32_t t182 = 5730;
int8_t x757 = INT8_MIN;
int32_t x759 = INT32_MAX;
volatile int32_t t184 = 33;
int16_t x767 = INT16_MIN;
int64_t x768 = INT64_MAX;
int64_t x770 = -830179887356LL;
static volatile int8_t x775 = 3;
volatile int32_t x779 = INT32_MIN;
volatile int32_t t188 = -11784;
uint64_t x792 = 1898288LLU;
uint8_t x796 = UINT8_MAX;
volatile uint32_t x800 = 793179711U;
volatile uint16_t x803 = 3930U;
volatile int32_t t196 = -56254;
static int16_t x813 = -1;
volatile int32_t x822 = -1;


void f0(void) {
    	int16_t x2 = 63;
	uint32_t x3 = UINT32_MAX;
	uint8_t x4 = 0U;
	int32_t t0 = 23654950;

    t0 = ((x1!=(x2%x3))>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = -23;
	static int32_t x8 = -28838537;
	int32_t t1 = -7358;

    t1 = ((x5!=(x6%x7))>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x10 = INT8_MAX;
	int16_t x11 = -193;
	volatile int8_t x12 = -1;

    t2 = ((x9!=(x10%x11))>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 30897U;
	static int32_t x14 = 36177;
	volatile int64_t x16 = INT64_MIN;
	int32_t t3 = -106016;

    t3 = ((x13!=(x14%x15))>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	static int8_t x19 = -1;
	int16_t x20 = -1;
	volatile int32_t t4 = -107;

    t4 = ((x17!=(x18%x19))>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	uint8_t x22 = UINT8_MAX;
	uint16_t x23 = 3557U;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 1390790;

    t5 = ((x21!=(x22%x23))>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x26 = -1;
	int32_t x27 = INT32_MIN;
	volatile int32_t t6 = 12758;

    t6 = ((x25!=(x26%x27))>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -1;
	int32_t x30 = INT32_MAX;
	static volatile int16_t x31 = INT16_MIN;
	volatile uint8_t x32 = 15U;
	volatile int32_t t7 = 11399;

    t7 = ((x29!=(x30%x31))>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	int32_t x34 = INT32_MAX;
	int64_t x36 = INT64_MIN;
	volatile int32_t t8 = 35;

    t8 = ((x33!=(x34%x35))>x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x37 = UINT64_MAX;
	static uint8_t x38 = UINT8_MAX;
	int8_t x39 = INT8_MIN;
	uint64_t x40 = 971125091LLU;
	int32_t t9 = -17248;

    t9 = ((x37!=(x38%x39))>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	uint64_t x44 = UINT64_MAX;

    t10 = ((x41!=(x42%x43))>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 2303U;
	static int32_t x46 = -1;
	int32_t x47 = -1;

    t11 = ((x45!=(x46%x47))>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 15U;
	uint8_t x50 = 114U;
	int8_t x51 = 6;
	int64_t x52 = 352291070206927976LL;
	static volatile int32_t t12 = 740107540;

    t12 = ((x49!=(x50%x51))>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -1;
	static int64_t x56 = INT64_MIN;
	volatile int32_t t13 = -1;

    t13 = ((x53!=(x54%x55))>x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 26262U;
	static int32_t x59 = INT32_MAX;
	volatile int32_t x60 = INT32_MIN;
	volatile int32_t t14 = 1833389;

    t14 = ((x57!=(x58%x59))>x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 2U;
	static uint32_t x63 = 949676U;
	int8_t x64 = -33;
	int32_t t15 = -35157;

    t15 = ((x61!=(x62%x63))>x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = 224;
	int8_t x66 = 3;
	int16_t x67 = 1402;
	static int32_t x68 = INT32_MIN;
	volatile int32_t t16 = 85;

    t16 = ((x65!=(x66%x67))>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x70 = 0U;
	static int32_t x71 = -15714;
	int8_t x72 = -1;

    t17 = ((x69!=(x70%x71))>x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x75 = -1;
	volatile int32_t t18 = -27112842;

    t18 = ((x73!=(x74%x75))>x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint32_t x77 = 18628084U;
	static uint16_t x78 = UINT16_MAX;
	uint16_t x79 = 31564U;
	static volatile uint8_t x80 = UINT8_MAX;
	int32_t t19 = -3;

    t19 = ((x77!=(x78%x79))>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -44178795048LL;
	static uint64_t x82 = 2368392375249LLU;
	uint32_t x84 = 1435104U;
	int32_t t20 = 1028167;

    t20 = ((x81!=(x82%x83))>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	int16_t x86 = 379;
	int8_t x88 = -1;
	volatile int32_t t21 = -34;

    t21 = ((x85!=(x86%x87))>x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	volatile uint64_t x90 = 107LLU;
	int32_t x91 = INT32_MAX;
	int16_t x92 = -1;
	int32_t t22 = 151147;

    t22 = ((x89!=(x90%x91))>x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	int32_t x94 = 99967;
	int32_t x95 = 335612045;
	static volatile uint16_t x96 = UINT16_MAX;
	volatile int32_t t23 = 62260;

    t23 = ((x93!=(x94%x95))>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -99127;
	static volatile uint16_t x98 = 59U;
	static volatile uint16_t x99 = 1773U;
	int32_t x100 = -10;
	int32_t t24 = 53919982;

    t24 = ((x97!=(x98%x99))>x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x103 = UINT16_MAX;
	int8_t x104 = 58;
	volatile int32_t t25 = 96631;

    t25 = ((x101!=(x102%x103))>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = UINT64_MAX;
	static int32_t x107 = 25;
	int8_t x108 = -1;

    t26 = ((x105!=(x106%x107))>x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = UINT32_MAX;
	int16_t x110 = INT16_MIN;
	uint64_t x111 = UINT64_MAX;
	static int32_t x112 = INT32_MAX;
	volatile int32_t t27 = -7;

    t27 = ((x109!=(x110%x111))>x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x113 = INT8_MIN;
	int8_t x116 = INT8_MAX;

    t28 = ((x113!=(x114%x115))>x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	int32_t x119 = -7369;

    t29 = ((x117!=(x118%x119))>x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	static int8_t x123 = INT8_MAX;
	volatile uint8_t x124 = 2U;
	int32_t t30 = -3058;

    t30 = ((x121!=(x122%x123))>x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 19963LLU;
	uint8_t x127 = UINT8_MAX;
	volatile int32_t t31 = -952;

    t31 = ((x125!=(x126%x127))>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int64_t x130 = -1LL;
	volatile int32_t t32 = 105037;

    t32 = ((x129!=(x130%x131))>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = 7531997336087957383LLU;
	static int64_t x134 = INT64_MIN;
	volatile uint64_t x135 = UINT64_MAX;
	static volatile int32_t t33 = 4988;

    t33 = ((x133!=(x134%x135))>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x138 = -1;
	int8_t x139 = -1;
	volatile int32_t t34 = 791742823;

    t34 = ((x137!=(x138%x139))>x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x141 = 315LLU;
	static uint32_t x142 = 21701419U;
	uint32_t x143 = 3U;
	int32_t x144 = -34974;
	int32_t t35 = 615859056;

    t35 = ((x141!=(x142%x143))>x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x145 = 4U;
	volatile int64_t x146 = -1LL;
	uint32_t x147 = 1817U;
	static uint8_t x148 = UINT8_MAX;
	static int32_t t36 = -6787;

    t36 = ((x145!=(x146%x147))>x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x149 = INT32_MIN;
	int64_t x150 = -82531044LL;
	int32_t t37 = 1238;

    t37 = ((x149!=(x150%x151))>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -1;
	int32_t x155 = -4099185;
	static volatile int64_t x156 = 35LL;
	int32_t t38 = 541;

    t38 = ((x153!=(x154%x155))>x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x157 = -1LL;
	static int64_t x158 = -1LL;
	volatile int16_t x160 = INT16_MIN;

    t39 = ((x157!=(x158%x159))>x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x162 = INT32_MAX;
	uint32_t x163 = UINT32_MAX;
	int32_t x164 = -4;
	static int32_t t40 = -431;

    t40 = ((x161!=(x162%x163))>x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = UINT16_MAX;
	int8_t x167 = -1;
	volatile int8_t x168 = INT8_MIN;
	int32_t t41 = -69903;

    t41 = ((x165!=(x166%x167))>x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = UINT8_MAX;
	int32_t x170 = -216205;
	static uint8_t x172 = UINT8_MAX;
	volatile int32_t t42 = 224394;

    t42 = ((x169!=(x170%x171))>x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x173 = INT8_MAX;
	int8_t x174 = INT8_MIN;
	int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MIN;
	int32_t t43 = -7322;

    t43 = ((x173!=(x174%x175))>x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = UINT64_MAX;
	int32_t x178 = -1;
	uint32_t x179 = 2U;
	int32_t x180 = 9289;
	volatile int32_t t44 = 17125719;

    t44 = ((x177!=(x178%x179))>x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x181 = INT32_MAX;
	static int32_t x184 = INT32_MIN;
	volatile int32_t t45 = -11;

    t45 = ((x181!=(x182%x183))>x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint64_t x185 = 34211LLU;
	uint8_t x186 = 4U;
	volatile int8_t x187 = INT8_MIN;
	int16_t x188 = -1;
	volatile int32_t t46 = -2;

    t46 = ((x185!=(x186%x187))>x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int64_t x191 = INT64_MAX;
	int64_t x192 = INT64_MIN;
	volatile int32_t t47 = -475753;

    t47 = ((x189!=(x190%x191))>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = 137430672616025LL;
	int8_t x194 = INT8_MIN;
	int64_t x195 = INT64_MIN;
	static volatile int32_t t48 = 0;

    t48 = ((x193!=(x194%x195))>x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = -1;
	int8_t x199 = INT8_MIN;
	uint16_t x200 = 115U;
	volatile int32_t t49 = 61621;

    t49 = ((x197!=(x198%x199))>x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x201 = -1;
	uint16_t x202 = 33U;
	volatile int64_t x203 = INT64_MIN;
	int8_t x204 = -1;
	int32_t t50 = 419066;

    t50 = ((x201!=(x202%x203))>x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x206 = INT16_MIN;
	int8_t x207 = 13;

    t51 = ((x205!=(x206%x207))>x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = 7893;
	int16_t x210 = INT16_MAX;
	int64_t x212 = INT64_MAX;
	static int32_t t52 = -10;

    t52 = ((x209!=(x210%x211))>x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -1;
	static int32_t x215 = -1;
	int64_t x216 = -1102568LL;
	static volatile int32_t t53 = 337911490;

    t53 = ((x213!=(x214%x215))>x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MIN;
	int32_t x218 = INT32_MAX;
	static int16_t x219 = INT16_MIN;
	volatile int64_t x220 = INT64_MAX;
	volatile int32_t t54 = -74;

    t54 = ((x217!=(x218%x219))>x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = UINT64_MAX;
	volatile uint8_t x222 = 0U;
	int32_t x223 = 346869;
	int64_t x224 = 56LL;
	int32_t t55 = 24429804;

    t55 = ((x221!=(x222%x223))>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x226 = INT64_MIN;
	int16_t x227 = INT16_MAX;
	volatile int64_t x228 = INT64_MIN;

    t56 = ((x225!=(x226%x227))>x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = -1023945088907645333LL;
	volatile uint8_t x230 = 1U;
	static int32_t x231 = 107926;
	volatile int32_t t57 = 335948447;

    t57 = ((x229!=(x230%x231))>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x233 = INT64_MIN;
	int32_t x235 = INT32_MIN;
	static int32_t t58 = -5;

    t58 = ((x233!=(x234%x235))>x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = 857444281345979790LL;
	int8_t x238 = -3;
	int8_t x239 = INT8_MAX;
	int16_t x240 = INT16_MAX;
	volatile int32_t t59 = -5;

    t59 = ((x237!=(x238%x239))>x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x241 = 3U;
	uint16_t x243 = 170U;
	int32_t x244 = INT32_MAX;
	int32_t t60 = 40941;

    t60 = ((x241!=(x242%x243))>x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x249 = UINT32_MAX;
	uint32_t x250 = 26644U;
	int8_t x251 = INT8_MIN;
	volatile uint64_t x252 = UINT64_MAX;
	int32_t t61 = 356245922;

    t61 = ((x249!=(x250%x251))>x252);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x253 = 10U;
	int32_t x254 = INT32_MIN;
	volatile int64_t x256 = INT64_MAX;

    t62 = ((x253!=(x254%x255))>x256);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x257 = INT32_MIN;
	static int64_t x258 = INT64_MAX;
	volatile int8_t x260 = -32;
	static int32_t t63 = 69519;

    t63 = ((x257!=(x258%x259))>x260);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x261 = -890654LL;
	uint32_t x263 = UINT32_MAX;

    t64 = ((x261!=(x262%x263))>x264);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x266 = -1;
	static uint8_t x267 = 1U;
	int64_t x268 = -58773022514412LL;
	int32_t t65 = 1;

    t65 = ((x265!=(x266%x267))>x268);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x270 = -4LL;
	int16_t x271 = INT16_MIN;
	int32_t x272 = INT32_MIN;

    t66 = ((x269!=(x270%x271))>x272);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x273 = -1;
	uint64_t x274 = UINT64_MAX;
	static volatile int64_t x275 = INT64_MAX;
	int32_t x276 = INT32_MAX;
	int32_t t67 = -499665;

    t67 = ((x273!=(x274%x275))>x276);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int16_t x277 = -9;
	int8_t x278 = INT8_MIN;
	int16_t x279 = INT16_MIN;
	int16_t x280 = 425;
	int32_t t68 = -159343780;

    t68 = ((x277!=(x278%x279))>x280);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x281 = 139U;
	int8_t x282 = 3;
	uint32_t x283 = 24U;
	uint64_t x284 = UINT64_MAX;
	int32_t t69 = 23127;

    t69 = ((x281!=(x282%x283))>x284);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x285 = UINT8_MAX;
	int64_t x287 = INT64_MIN;
	int32_t x288 = -516777877;
	int32_t t70 = 53;

    t70 = ((x285!=(x286%x287))>x288);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x293 = 26;
	volatile int32_t t71 = 1;

    t71 = ((x293!=(x294%x295))>x296);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x297 = UINT64_MAX;
	int16_t x298 = INT16_MAX;
	int32_t x299 = INT32_MIN;
	int16_t x300 = INT16_MIN;
	volatile int32_t t72 = 26808299;

    t72 = ((x297!=(x298%x299))>x300);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x301 = 1;
	uint8_t x302 = 1U;
	int8_t x304 = 1;
	int32_t t73 = -18697;

    t73 = ((x301!=(x302%x303))>x304);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x305 = -1;
	static volatile int32_t x307 = INT32_MAX;
	int16_t x308 = INT16_MAX;
	int32_t t74 = -1437209;

    t74 = ((x305!=(x306%x307))>x308);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x309 = INT8_MAX;
	uint64_t x310 = 5155LLU;
	uint32_t x311 = UINT32_MAX;
	volatile int32_t t75 = -23;

    t75 = ((x309!=(x310%x311))>x312);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x313 = INT8_MIN;
	int64_t x314 = -15524331672LL;
	int16_t x315 = -1;
	volatile int32_t t76 = 9813511;

    t76 = ((x313!=(x314%x315))>x316);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x317 = UINT64_MAX;
	int32_t x318 = -84;
	uint64_t x319 = UINT64_MAX;
	int64_t x320 = INT64_MIN;

    t77 = ((x317!=(x318%x319))>x320);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x321 = 15U;
	volatile int32_t x323 = -92;
	static volatile int32_t t78 = 22805;

    t78 = ((x321!=(x322%x323))>x324);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x325 = INT32_MAX;
	volatile uint8_t x326 = UINT8_MAX;
	int8_t x328 = INT8_MAX;
	volatile int32_t t79 = 2608;

    t79 = ((x325!=(x326%x327))>x328);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x329 = INT16_MIN;
	volatile uint8_t x331 = 13U;
	int64_t x332 = 11594480358735LL;
	volatile int32_t t80 = -1;

    t80 = ((x329!=(x330%x331))>x332);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x333 = 6U;
	volatile int64_t x334 = INT64_MIN;
	static volatile uint16_t x335 = 308U;
	static int8_t x336 = -28;
	static volatile int32_t t81 = 14624860;

    t81 = ((x333!=(x334%x335))>x336);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x337 = INT16_MAX;
	int16_t x338 = -378;
	int16_t x339 = 121;
	int8_t x340 = 3;
	volatile int32_t t82 = -9;

    t82 = ((x337!=(x338%x339))>x340);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x345 = -1;
	int32_t x346 = INT32_MAX;
	static int64_t x347 = -1LL;
	static uint32_t x348 = 3537U;
	volatile int32_t t83 = -3280501;

    t83 = ((x345!=(x346%x347))>x348);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x350 = -2;
	uint8_t x351 = UINT8_MAX;
	volatile int32_t t84 = -421571157;

    t84 = ((x349!=(x350%x351))>x352);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x354 = -1;
	uint32_t x355 = 95U;
	volatile int32_t t85 = 4594;

    t85 = ((x353!=(x354%x355))>x356);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x361 = INT16_MIN;
	int32_t x362 = INT32_MIN;
	uint8_t x364 = 25U;

    t86 = ((x361!=(x362%x363))>x364);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x365 = 5U;
	volatile uint16_t x366 = 6U;
	volatile int64_t x368 = INT64_MAX;
	int32_t t87 = -510310;

    t87 = ((x365!=(x366%x367))>x368);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x369 = 8U;
	int16_t x370 = -1;
	static int32_t x371 = 1266;
	int64_t x372 = -1LL;
	int32_t t88 = 3;

    t88 = ((x369!=(x370%x371))>x372);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x373 = UINT32_MAX;
	uint64_t x375 = 10561016832311LLU;
	uint16_t x376 = UINT16_MAX;
	static volatile int32_t t89 = 20;

    t89 = ((x373!=(x374%x375))>x376);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x381 = -24;
	static volatile uint32_t x382 = UINT32_MAX;
	uint8_t x383 = UINT8_MAX;
	volatile int16_t x384 = -25;
	int32_t t90 = 72292216;

    t90 = ((x381!=(x382%x383))>x384);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint8_t x385 = 1U;
	volatile int32_t x386 = INT32_MIN;
	uint64_t x387 = 5LLU;
	int16_t x388 = INT16_MAX;
	int32_t t91 = 7549102;

    t91 = ((x385!=(x386%x387))>x388);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int32_t x389 = 97;
	static volatile int32_t t92 = 236;

    t92 = ((x389!=(x390%x391))>x392);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x393 = 0U;
	volatile uint32_t x394 = UINT32_MAX;
	uint32_t x395 = UINT32_MAX;
	uint64_t x396 = UINT64_MAX;
	int32_t t93 = 20583;

    t93 = ((x393!=(x394%x395))>x396);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x397 = -1;
	volatile uint8_t x398 = UINT8_MAX;
	uint8_t x399 = 1U;
	int16_t x400 = 7768;

    t94 = ((x397!=(x398%x399))>x400);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x401 = UINT8_MAX;
	int64_t x402 = 13792038LL;
	int64_t x403 = -68015194789660074LL;
	volatile uint8_t x404 = 1U;
	volatile int32_t t95 = 10872;

    t95 = ((x401!=(x402%x403))>x404);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x405 = UINT16_MAX;
	int32_t x406 = INT32_MAX;
	volatile uint32_t x407 = 1609016595U;
	int32_t t96 = -781;

    t96 = ((x405!=(x406%x407))>x408);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x410 = 691096180U;
	volatile int16_t x411 = -7;

    t97 = ((x409!=(x410%x411))>x412);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x413 = 22U;
	uint8_t x414 = 1U;
	static int32_t x415 = 7724367;
	int64_t x416 = 1LL;
	int32_t t98 = 52;

    t98 = ((x413!=(x414%x415))>x416);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x417 = INT32_MIN;
	uint8_t x418 = 0U;
	volatile uint8_t x419 = UINT8_MAX;
	int32_t t99 = 15;

    t99 = ((x417!=(x418%x419))>x420);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x421 = 25925847913055LL;
	int16_t x422 = -1;
	int16_t x424 = 6029;
	int32_t t100 = 930771;

    t100 = ((x421!=(x422%x423))>x424);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x425 = INT8_MIN;
	int64_t x426 = INT64_MIN;
	int64_t x427 = INT64_MAX;
	static int8_t x428 = -57;
	int32_t t101 = -2175652;

    t101 = ((x425!=(x426%x427))>x428);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x429 = -1;
	volatile uint16_t x430 = UINT16_MAX;
	uint64_t x431 = UINT64_MAX;
	uint64_t x432 = 14120286867LLU;
	static int32_t t102 = -40827141;

    t102 = ((x429!=(x430%x431))>x432);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x433 = 0U;
	int64_t x435 = INT64_MIN;
	int16_t x436 = -3;
	int32_t t103 = 14340;

    t103 = ((x433!=(x434%x435))>x436);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x437 = INT16_MAX;
	int32_t x440 = -1;
	volatile int32_t t104 = 8;

    t104 = ((x437!=(x438%x439))>x440);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x442 = UINT16_MAX;
	int32_t x443 = INT32_MAX;
	static int16_t x444 = INT16_MIN;

    t105 = ((x441!=(x442%x443))>x444);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x445 = UINT16_MAX;
	static uint8_t x446 = 4U;
	int32_t x447 = -243;
	static uint8_t x448 = UINT8_MAX;
	int32_t t106 = -30;

    t106 = ((x445!=(x446%x447))>x448);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x449 = 2;
	int64_t x450 = INT64_MAX;
	static int32_t x452 = -5;

    t107 = ((x449!=(x450%x451))>x452);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x453 = INT8_MIN;
	static volatile int32_t x454 = INT32_MIN;
	int64_t x455 = INT64_MIN;
	int16_t x456 = INT16_MIN;
	int32_t t108 = 1822;

    t108 = ((x453!=(x454%x455))>x456);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x457 = INT16_MIN;
	uint32_t x459 = UINT32_MAX;
	int64_t x460 = 19037092047893LL;
	volatile int32_t t109 = 3;

    t109 = ((x457!=(x458%x459))>x460);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x463 = -54;
	static int8_t x464 = INT8_MIN;
	static int32_t t110 = -27578021;

    t110 = ((x461!=(x462%x463))>x464);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x465 = -1;
	int64_t x466 = INT64_MAX;
	uint8_t x467 = 115U;
	int32_t x468 = INT32_MIN;

    t111 = ((x465!=(x466%x467))>x468);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x470 = INT8_MIN;
	int64_t x471 = INT64_MIN;
	int8_t x472 = -1;

    t112 = ((x469!=(x470%x471))>x472);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x473 = 45;
	int32_t x474 = INT32_MIN;
	static int64_t x475 = 3996335857394LL;
	uint8_t x476 = UINT8_MAX;
	int32_t t113 = -20;

    t113 = ((x473!=(x474%x475))>x476);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x477 = -3;
	static uint32_t x478 = UINT32_MAX;
	uint16_t x479 = 12U;
	int64_t x480 = INT64_MIN;

    t114 = ((x477!=(x478%x479))>x480);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x481 = 1996U;
	static int32_t x482 = INT32_MIN;
	int16_t x483 = 10;
	static int8_t x484 = INT8_MAX;
	static volatile int32_t t115 = 1139837;

    t115 = ((x481!=(x482%x483))>x484);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x485 = -7;
	int8_t x487 = INT8_MAX;
	uint64_t x488 = 46862426LLU;
	volatile int32_t t116 = -191248803;

    t116 = ((x485!=(x486%x487))>x488);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x490 = INT16_MIN;
	int16_t x491 = INT16_MIN;
	uint8_t x492 = 16U;
	int32_t t117 = 93820;

    t117 = ((x489!=(x490%x491))>x492);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x493 = UINT32_MAX;
	uint16_t x495 = 1U;
	volatile int32_t t118 = -15168683;

    t118 = ((x493!=(x494%x495))>x496);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x497 = -108090820LL;
	int32_t x498 = INT32_MIN;
	uint32_t x500 = 127U;

    t119 = ((x497!=(x498%x499))>x500);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x501 = 8305448U;
	int64_t x503 = INT64_MAX;
	static int16_t x504 = -1;
	static volatile int32_t t120 = 1016178965;

    t120 = ((x501!=(x502%x503))>x504);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x506 = 0;
	int16_t x508 = INT16_MIN;
	int32_t t121 = 1;

    t121 = ((x505!=(x506%x507))>x508);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x509 = INT8_MIN;
	int64_t x510 = 4284299163326550LL;
	static int32_t x511 = -212545;
	uint16_t x512 = UINT16_MAX;

    t122 = ((x509!=(x510%x511))>x512);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x513 = -6739961LL;
	static uint64_t x514 = 8291LLU;
	int32_t x515 = -1;

    t123 = ((x513!=(x514%x515))>x516);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x517 = -56;
	volatile int32_t x519 = INT32_MAX;
	int32_t x520 = -9;
	int32_t t124 = 362;

    t124 = ((x517!=(x518%x519))>x520);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x522 = UINT32_MAX;
	int64_t x524 = INT64_MIN;

    t125 = ((x521!=(x522%x523))>x524);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x525 = INT64_MAX;
	static int8_t x527 = 28;
	static volatile int32_t t126 = 365914;

    t126 = ((x525!=(x526%x527))>x528);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x533 = INT64_MAX;
	int32_t x534 = 233;
	uint64_t x535 = UINT64_MAX;
	int8_t x536 = INT8_MIN;
	volatile int32_t t127 = 0;

    t127 = ((x533!=(x534%x535))>x536);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x537 = INT8_MIN;
	int8_t x539 = -1;
	volatile int8_t x540 = INT8_MAX;

    t128 = ((x537!=(x538%x539))>x540);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x542 = UINT64_MAX;
	int8_t x543 = INT8_MAX;
	int64_t x544 = INT64_MAX;
	int32_t t129 = -127413;

    t129 = ((x541!=(x542%x543))>x544);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x545 = -58;
	uint8_t x546 = UINT8_MAX;
	uint8_t x548 = 117U;
	static int32_t t130 = 90199527;

    t130 = ((x545!=(x546%x547))>x548);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x549 = -6;
	uint8_t x551 = 40U;
	uint16_t x552 = UINT16_MAX;
	volatile int32_t t131 = 3203090;

    t131 = ((x549!=(x550%x551))>x552);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x553 = 546885873113362LL;
	int16_t x555 = -1;
	int32_t x556 = 15027;
	static int32_t t132 = 109825;

    t132 = ((x553!=(x554%x555))>x556);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x558 = INT64_MAX;
	int64_t x559 = 196204421178568461LL;
	static int16_t x560 = -1;
	volatile int32_t t133 = 13143195;

    t133 = ((x557!=(x558%x559))>x560);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x562 = INT32_MIN;
	volatile int8_t x563 = 10;
	int16_t x564 = INT16_MAX;
	static volatile int32_t t134 = 183646571;

    t134 = ((x561!=(x562%x563))>x564);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x565 = INT64_MIN;

    t135 = ((x565!=(x566%x567))>x568);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x569 = INT64_MAX;
	int8_t x571 = INT8_MAX;
	uint8_t x572 = 48U;
	int32_t t136 = 479198;

    t136 = ((x569!=(x570%x571))>x572);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x573 = INT16_MIN;
	int16_t x574 = -1;
	int16_t x575 = -60;
	int32_t t137 = -195420322;

    t137 = ((x573!=(x574%x575))>x576);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x577 = INT64_MIN;
	static volatile uint16_t x578 = 13476U;
	static volatile uint32_t x579 = UINT32_MAX;
	uint64_t x580 = 984120LLU;
	volatile int32_t t138 = 133;

    t138 = ((x577!=(x578%x579))>x580);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x581 = 3834U;
	static uint32_t x582 = 99665U;
	int16_t x583 = INT16_MAX;
	volatile int8_t x584 = INT8_MAX;
	volatile int32_t t139 = -19255762;

    t139 = ((x581!=(x582%x583))>x584);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x585 = 1559U;
	volatile int8_t x586 = 3;
	static uint8_t x587 = UINT8_MAX;
	uint8_t x588 = 27U;

    t140 = ((x585!=(x586%x587))>x588);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int8_t x590 = INT8_MAX;
	int64_t x591 = INT64_MIN;
	static int16_t x592 = INT16_MIN;
	int32_t t141 = -2071021;

    t141 = ((x589!=(x590%x591))>x592);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x593 = INT16_MAX;
	int64_t x594 = 12LL;
	uint8_t x595 = UINT8_MAX;
	static volatile uint64_t x596 = 1731LLU;
	volatile int32_t t142 = -96262;

    t142 = ((x593!=(x594%x595))>x596);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x597 = INT16_MIN;
	volatile int64_t x598 = -1LL;
	static int16_t x599 = -1;
	int32_t x600 = 113038;
	volatile int32_t t143 = -10286;

    t143 = ((x597!=(x598%x599))>x600);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x601 = INT64_MIN;
	int32_t x602 = INT32_MIN;
	int32_t x603 = INT32_MIN;
	uint16_t x604 = 6940U;
	static int32_t t144 = 657070;

    t144 = ((x601!=(x602%x603))>x604);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x605 = INT32_MIN;
	volatile uint16_t x606 = 2461U;
	uint32_t x607 = 466U;
	int32_t x608 = INT32_MIN;
	static volatile int32_t t145 = -69530;

    t145 = ((x605!=(x606%x607))>x608);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint32_t x609 = 13210U;
	int32_t x610 = -13;
	static int8_t x611 = INT8_MIN;
	static int64_t x612 = -1LL;
	int32_t t146 = -1460;

    t146 = ((x609!=(x610%x611))>x612);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x613 = INT8_MIN;
	uint16_t x614 = 48U;
	int32_t x615 = INT32_MIN;
	static uint16_t x616 = UINT16_MAX;

    t147 = ((x613!=(x614%x615))>x616);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x617 = 80778416476778691LL;
	volatile int64_t x618 = 3LL;
	int32_t x619 = INT32_MIN;
	volatile int64_t x620 = INT64_MIN;
	volatile int32_t t148 = -58171;

    t148 = ((x617!=(x618%x619))>x620);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x621 = -33154382882022493LL;
	volatile int64_t x622 = INT64_MAX;
	static uint16_t x623 = 225U;
	volatile int32_t t149 = -93875977;

    t149 = ((x621!=(x622%x623))>x624);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x625 = -1;
	static int64_t x627 = INT64_MAX;
	int32_t t150 = -11631;

    t150 = ((x625!=(x626%x627))>x628);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x630 = -7;
	uint64_t x631 = 3709663223LLU;
	int16_t x632 = -1;
	static int32_t t151 = 44083326;

    t151 = ((x629!=(x630%x631))>x632);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x633 = 6387U;
	int32_t x634 = INT32_MIN;
	uint8_t x635 = UINT8_MAX;
	volatile int32_t x636 = -1;

    t152 = ((x633!=(x634%x635))>x636);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x637 = INT8_MAX;
	static int8_t x638 = -1;
	static int32_t x640 = -140856032;
	int32_t t153 = -120159210;

    t153 = ((x637!=(x638%x639))>x640);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x642 = -1;
	int16_t x643 = INT16_MIN;
	int8_t x644 = 9;
	int32_t t154 = 5134;

    t154 = ((x641!=(x642%x643))>x644);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x645 = 69U;
	static int32_t x646 = -1;

    t155 = ((x645!=(x646%x647))>x648);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x649 = -1;
	uint16_t x650 = 970U;
	int64_t x651 = 27768090267408383LL;
	uint8_t x652 = UINT8_MAX;

    t156 = ((x649!=(x650%x651))>x652);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x653 = -1;
	uint8_t x654 = UINT8_MAX;
	volatile int8_t x655 = INT8_MIN;
	uint8_t x656 = 13U;
	int32_t t157 = 14142;

    t157 = ((x653!=(x654%x655))>x656);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x657 = INT64_MIN;
	static int8_t x658 = INT8_MAX;
	volatile int16_t x659 = -31;
	int32_t x660 = INT32_MIN;
	volatile int32_t t158 = -11;

    t158 = ((x657!=(x658%x659))>x660);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint8_t x661 = 98U;
	static int32_t x662 = INT32_MAX;
	static int64_t x663 = INT64_MIN;
	static int64_t x664 = INT64_MIN;
	static volatile int32_t t159 = -2405291;

    t159 = ((x661!=(x662%x663))>x664);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x665 = -1146;
	int64_t x666 = INT64_MAX;
	static volatile uint8_t x667 = 3U;
	uint16_t x668 = 0U;
	int32_t t160 = 849364;

    t160 = ((x665!=(x666%x667))>x668);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x669 = -15898067;
	int64_t x671 = INT64_MAX;
	uint64_t x672 = 1041483344LLU;
	int32_t t161 = -15;

    t161 = ((x669!=(x670%x671))>x672);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int64_t x673 = -136LL;
	int16_t x675 = 8;
	volatile int32_t x676 = INT32_MIN;
	volatile int32_t t162 = -7644;

    t162 = ((x673!=(x674%x675))>x676);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x677 = UINT32_MAX;
	volatile int32_t x678 = 274568645;
	int64_t x679 = INT64_MIN;
	uint16_t x680 = UINT16_MAX;
	static volatile int32_t t163 = -1758;

    t163 = ((x677!=(x678%x679))>x680);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x681 = -1;
	int8_t x682 = -1;
	static int32_t x684 = -1;
	volatile int32_t t164 = -973203;

    t164 = ((x681!=(x682%x683))>x684);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x685 = 7U;
	uint8_t x686 = 1U;
	int8_t x687 = INT8_MAX;
	uint32_t x688 = UINT32_MAX;
	static int32_t t165 = -1053;

    t165 = ((x685!=(x686%x687))>x688);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x689 = INT8_MIN;
	uint8_t x690 = 34U;
	static uint32_t x691 = 951858U;
	volatile int16_t x692 = INT16_MIN;
	volatile int32_t t166 = -17535;

    t166 = ((x689!=(x690%x691))>x692);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x693 = 435927723U;
	int16_t x695 = -1;
	int32_t t167 = 337974391;

    t167 = ((x693!=(x694%x695))>x696);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x697 = INT16_MAX;
	static uint8_t x698 = 2U;
	uint8_t x699 = 13U;
	static int32_t t168 = 43;

    t168 = ((x697!=(x698%x699))>x700);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x701 = -11LL;
	volatile int8_t x702 = INT8_MIN;
	int32_t x703 = -64709553;
	int8_t x704 = INT8_MIN;

    t169 = ((x701!=(x702%x703))>x704);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x705 = UINT8_MAX;
	uint32_t x706 = UINT32_MAX;
	int32_t x707 = -44407;
	static int32_t t170 = -29001;

    t170 = ((x705!=(x706%x707))>x708);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x709 = INT32_MIN;
	volatile int16_t x710 = -1;
	static int64_t x711 = 296996210309821LL;

    t171 = ((x709!=(x710%x711))>x712);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x713 = 1575349LLU;
	static uint32_t x714 = 52925737U;
	int64_t x715 = INT64_MIN;
	int64_t x716 = INT64_MAX;
	int32_t t172 = -25058;

    t172 = ((x713!=(x714%x715))>x716);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x717 = INT16_MIN;
	static uint64_t x718 = UINT64_MAX;
	uint32_t x719 = UINT32_MAX;
	uint64_t x720 = UINT64_MAX;
	static int32_t t173 = -574;

    t173 = ((x717!=(x718%x719))>x720);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x721 = -16;
	static int8_t x723 = INT8_MAX;
	uint8_t x724 = 2U;
	int32_t t174 = -289;

    t174 = ((x721!=(x722%x723))>x724);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x726 = 4U;
	volatile uint8_t x727 = 31U;
	int32_t t175 = -2204989;

    t175 = ((x725!=(x726%x727))>x728);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x730 = 66U;
	static uint64_t x731 = 2827LLU;
	int16_t x732 = -1;
	volatile int32_t t176 = -484370;

    t176 = ((x729!=(x730%x731))>x732);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x733 = -1;
	int16_t x734 = INT16_MAX;
	volatile uint32_t x735 = 688760585U;
	uint16_t x736 = 8251U;
	int32_t t177 = -102;

    t177 = ((x733!=(x734%x735))>x736);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x737 = -28707451720854LL;
	int64_t x739 = INT64_MIN;
	uint32_t x740 = 13639475U;
	volatile int32_t t178 = -1;

    t178 = ((x737!=(x738%x739))>x740);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x741 = -1;
	int32_t x742 = INT32_MIN;
	int64_t x744 = INT64_MIN;

    t179 = ((x741!=(x742%x743))>x744);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x745 = INT8_MAX;
	uint64_t x746 = 193118859984936867LLU;
	uint64_t x747 = UINT64_MAX;
	int8_t x748 = 5;
	volatile int32_t t180 = -10180;

    t180 = ((x745!=(x746%x747))>x748);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x749 = INT8_MIN;
	volatile int8_t x750 = INT8_MIN;
	int64_t x751 = INT64_MAX;
	uint32_t x752 = 286184U;
	int32_t t181 = 28;

    t181 = ((x749!=(x750%x751))>x752);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x753 = INT8_MAX;
	int8_t x754 = INT8_MAX;
	static volatile int64_t x755 = INT64_MIN;
	uint16_t x756 = 4268U;

    t182 = ((x753!=(x754%x755))>x756);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x758 = 3;
	volatile uint8_t x760 = 40U;
	int32_t t183 = 110178;

    t183 = ((x757!=(x758%x759))>x760);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x761 = 1419823991U;
	static int32_t x762 = INT32_MIN;
	uint8_t x763 = 1U;
	int16_t x764 = -142;

    t184 = ((x761!=(x762%x763))>x764);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x765 = -1LL;
	int64_t x766 = INT64_MAX;
	volatile int32_t t185 = -196;

    t185 = ((x765!=(x766%x767))>x768);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x769 = INT8_MIN;
	int16_t x771 = -1;
	volatile int8_t x772 = -1;
	int32_t t186 = 4528873;

    t186 = ((x769!=(x770%x771))>x772);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x773 = INT64_MAX;
	int32_t x774 = INT32_MIN;
	int32_t x776 = INT32_MIN;
	static volatile int32_t t187 = 1198888;

    t187 = ((x773!=(x774%x775))>x776);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x777 = -1;
	uint16_t x778 = 1489U;
	int32_t x780 = INT32_MAX;

    t188 = ((x777!=(x778%x779))>x780);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x781 = INT32_MAX;
	int16_t x782 = INT16_MIN;
	static int16_t x783 = 11596;
	int32_t x784 = INT32_MIN;
	int32_t t189 = -6531;

    t189 = ((x781!=(x782%x783))>x784);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x785 = 146;
	volatile int64_t x786 = INT64_MAX;
	int16_t x787 = INT16_MIN;
	static uint32_t x788 = 17U;
	int32_t t190 = -417032610;

    t190 = ((x785!=(x786%x787))>x788);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x789 = UINT64_MAX;
	int32_t x790 = INT32_MAX;
	uint8_t x791 = 4U;
	volatile int32_t t191 = 2;

    t191 = ((x789!=(x790%x791))>x792);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x793 = INT32_MAX;
	int64_t x794 = INT64_MIN;
	volatile uint16_t x795 = 6039U;
	int32_t t192 = 154215;

    t192 = ((x793!=(x794%x795))>x796);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x797 = INT32_MIN;
	static volatile int32_t x798 = -1;
	volatile int64_t x799 = 1LL;
	volatile int32_t t193 = -339356;

    t193 = ((x797!=(x798%x799))>x800);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x801 = INT16_MIN;
	static uint8_t x802 = 2U;
	int16_t x804 = -1638;
	static volatile int32_t t194 = -106;

    t194 = ((x801!=(x802%x803))>x804);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x805 = -1;
	int64_t x806 = INT64_MAX;
	static volatile int16_t x807 = INT16_MIN;
	int32_t x808 = -1;
	volatile int32_t t195 = -321371;

    t195 = ((x805!=(x806%x807))>x808);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x809 = -1;
	int8_t x810 = INT8_MAX;
	int16_t x811 = -139;
	uint32_t x812 = 27479224U;

    t196 = ((x809!=(x810%x811))>x812);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x814 = UINT64_MAX;
	int64_t x815 = 1LL;
	static int32_t x816 = 86009999;
	int32_t t197 = 20;

    t197 = ((x813!=(x814%x815))>x816);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x817 = UINT64_MAX;
	static uint32_t x818 = 93408U;
	static uint16_t x819 = UINT16_MAX;
	uint64_t x820 = 2915LLU;
	int32_t t198 = 1;

    t198 = ((x817!=(x818%x819))>x820);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x821 = 1U;
	uint64_t x823 = UINT64_MAX;
	int8_t x824 = 3;
	int32_t t199 = -1036238662;

    t199 = ((x821!=(x822%x823))>x824);

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



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

uint8_t x2 = UINT8_MAX;
static volatile uint16_t x3 = 0U;
int64_t x10 = INT64_MAX;
static int32_t t2 = 47942589;
int8_t x13 = INT8_MIN;
volatile int8_t x15 = -1;
volatile uint32_t t3 = 195541080U;
int8_t x31 = INT8_MIN;
static uint32_t x34 = 25U;
int64_t x36 = 226LL;
int64_t t8 = 0LL;
int8_t x39 = 1;
int8_t x43 = 0;
int32_t x47 = INT32_MAX;
static volatile int32_t t11 = 1;
static int16_t x56 = -23;
static int8_t x61 = 1;
int8_t x67 = 1;
static int8_t x74 = 0;
uint32_t x77 = UINT32_MAX;
int32_t x78 = -1;
volatile int32_t x82 = -1;
int16_t x83 = INT16_MIN;
volatile int32_t t22 = 102989290;
int32_t x100 = INT32_MAX;
static volatile int32_t t25 = -29623;
volatile int16_t x105 = INT16_MAX;
int8_t x107 = 1;
static int16_t x116 = INT16_MIN;
int32_t t28 = 2517;
volatile int8_t x118 = -1;
static int32_t x120 = INT32_MIN;
volatile int32_t t29 = -176;
int32_t t31 = -90144480;
static int16_t x135 = INT16_MAX;
volatile int32_t t35 = 121;
uint16_t x150 = 189U;
int8_t x160 = 26;
static volatile int32_t t39 = 0;
int32_t t42 = 8072;
volatile uint16_t x179 = 685U;
int64_t x180 = INT64_MIN;
volatile int32_t t45 = -61545;
int8_t x186 = INT8_MIN;
static uint64_t x187 = 3135LLU;
volatile int32_t t46 = 7251;
uint64_t x189 = 20815077383762478LLU;
int8_t x201 = INT8_MAX;
int8_t x220 = -1;
static int16_t x225 = -1;
static int16_t x227 = -12959;
volatile int8_t x231 = -5;
int32_t x232 = -1;
static uint32_t t58 = 33104325U;
volatile int16_t x238 = -59;
static int8_t x244 = -1;
volatile int32_t t60 = 61019;
uint16_t x247 = 26U;
uint32_t x252 = 2U;
int32_t t63 = 32169293;
int32_t x259 = 26135588;
int32_t t64 = 1;
static int64_t x262 = INT64_MAX;
static int32_t x263 = 0;
volatile int32_t t65 = -345134;
uint64_t x269 = UINT64_MAX;
int32_t x275 = INT32_MAX;
int8_t x278 = INT8_MIN;
static int16_t x280 = 0;
int8_t x288 = INT8_MIN;
static int32_t t71 = -1;
uint32_t t72 = 0U;
int32_t x293 = 216690;
volatile uint32_t x295 = 1U;
uint32_t x296 = UINT32_MAX;
static volatile int32_t t75 = INT32_MAX;
uint8_t x310 = 25U;
int16_t x312 = -1;
static uint8_t x316 = 28U;
int32_t t78 = -59;
int32_t x330 = INT32_MIN;
int32_t x333 = INT32_MIN;
volatile uint64_t x334 = 43741402334498372LLU;
volatile int64_t t84 = 12LL;
static volatile int64_t x345 = INT64_MAX;
volatile uint32_t x346 = 3252U;
volatile int16_t x349 = INT16_MIN;
uint8_t x358 = UINT8_MAX;
int64_t x361 = -3LL;
uint64_t x362 = 413958176848277603LLU;
uint64_t x363 = UINT64_MAX;
int32_t t90 = 7440;
uint64_t x367 = 208670296940448LLU;
int64_t x369 = INT64_MAX;
int64_t x371 = -70LL;
static int16_t x372 = INT16_MIN;
volatile int64_t x377 = -1LL;
volatile int32_t x380 = INT32_MIN;
uint8_t x390 = 53U;
static uint64_t x391 = UINT64_MAX;
static int32_t t97 = 2449;
int64_t x393 = -1LL;
int64_t x397 = INT64_MAX;
uint32_t x400 = UINT32_MAX;
volatile uint32_t t99 = UINT32_MAX;
static volatile uint8_t x407 = UINT8_MAX;
int8_t x411 = INT8_MAX;
static uint64_t x417 = 5552613670LLU;
static volatile uint16_t x420 = UINT16_MAX;
int16_t x423 = -1;
int16_t x437 = INT16_MAX;
volatile uint32_t t109 = 7087U;
uint16_t x443 = 3393U;
volatile int16_t x453 = INT16_MAX;
volatile int32_t x463 = INT32_MIN;
volatile int32_t t115 = -22;
int64_t x465 = INT64_MIN;
int16_t x469 = INT16_MAX;
volatile int32_t t117 = 28610666;
volatile uint64_t x479 = UINT64_MAX;
volatile int8_t x481 = INT8_MIN;
uint16_t x484 = 1747U;
static volatile int8_t x488 = INT8_MIN;
int16_t x502 = INT16_MIN;
static int32_t x508 = INT32_MAX;
uint32_t x513 = 205954U;
static int64_t x517 = -1LL;
int16_t x520 = -1;
volatile int32_t t129 = 5;
volatile int32_t x528 = INT32_MIN;
static volatile int32_t t131 = -591926910;
int64_t x530 = -1LL;
uint64_t t132 = 87961757068LLU;
int8_t x533 = INT8_MIN;
int16_t x535 = INT16_MIN;
uint16_t x542 = 91U;
int8_t x545 = -1;
int32_t t136 = -481871;
static int16_t x549 = INT16_MAX;
volatile int32_t t138 = 7;
static int8_t x557 = -51;
int64_t x565 = INT64_MIN;
static int64_t t141 = 2165958781359019LL;
int8_t x571 = INT8_MIN;
int64_t x572 = 277987664242211469LL;
int16_t x574 = -1;
int32_t x576 = INT32_MAX;
int64_t x578 = INT64_MIN;
static volatile int32_t t144 = 292;
uint16_t x591 = 104U;
volatile int32_t x592 = 378436;
int16_t x597 = INT16_MAX;
int8_t x600 = -1;
static int8_t x601 = INT8_MAX;
volatile int32_t x605 = INT32_MAX;
int64_t x606 = INT64_MIN;
int16_t x610 = 26;
static int16_t x614 = 7951;
int8_t x616 = INT8_MIN;
uint8_t x618 = 31U;
int64_t x623 = INT64_MAX;
int8_t x627 = -1;
uint8_t x629 = 0U;
static int64_t t159 = 2233874242836204425LL;
static int64_t x643 = -7263726540675246LL;
volatile int8_t x650 = INT8_MIN;
uint64_t x651 = 50463LLU;
int16_t x656 = INT16_MIN;
int32_t x659 = -1;
static int8_t x660 = INT8_MIN;
int32_t x665 = 14427358;
int32_t t166 = -4977;
int32_t x670 = INT32_MIN;
int64_t x672 = 1LL;
int16_t x683 = INT16_MIN;
int32_t x685 = -101533793;
uint32_t t171 = UINT32_MAX;
int8_t x691 = INT8_MIN;
uint32_t x693 = UINT32_MAX;
int64_t x706 = INT64_MIN;
int32_t t176 = 32269;
volatile int16_t x709 = INT16_MIN;
static volatile int8_t x712 = -1;
uint8_t x715 = 7U;
static int8_t x718 = 2;
int16_t x721 = -1;
uint16_t x723 = 2903U;
static uint64_t t180 = UINT64_MAX;
uint64_t x737 = UINT64_MAX;
uint64_t x739 = 222038LLU;
volatile int32_t x749 = 0;
int16_t x751 = INT16_MIN;
int16_t x754 = 169;
static int64_t x757 = -112396527173323LL;
int16_t x759 = 14143;
volatile uint16_t x763 = 31U;
uint64_t x765 = UINT64_MAX;
static uint32_t x766 = 2006U;
volatile int32_t t192 = -852;
int64_t x774 = INT64_MIN;
static int32_t x778 = INT32_MIN;
int32_t x780 = -1;
static int32_t x784 = -1554232;
int16_t x788 = -8;
int16_t x797 = INT16_MIN;
static int16_t x798 = 7;


void f0(void) {
    	int8_t x1 = 9;
	uint16_t x4 = 30762U;
	static int32_t t0 = -8;

    t0 = (((x1&x2)!=x3)|x4);

    if (t0 != 30763) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 14738U;
	static volatile uint8_t x6 = UINT8_MAX;
	int32_t x7 = INT32_MIN;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = -61985;

    t1 = (((x5&x6)!=x7)|x8);

    if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x9 = 904405743U;
	uint32_t x11 = 0U;
	static volatile int8_t x12 = 5;

    t2 = (((x9&x10)!=x11)|x12);

    if (t2 != 5) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x14 = -2;
	static uint32_t x16 = 17559U;

    t3 = (((x13&x14)!=x15)|x16);

    if (t3 != 17559U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 5627U;
	int8_t x18 = -60;
	uint64_t x19 = UINT64_MAX;
	uint32_t x20 = 2U;
	volatile uint32_t t4 = 14131521U;

    t4 = (((x17&x18)!=x19)|x20);

    if (t4 != 3U) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x21 = 105U;
	volatile int32_t x22 = -1;
	int8_t x23 = INT8_MAX;
	int16_t x24 = INT16_MAX;
	volatile int32_t t5 = -12504470;

    t5 = (((x21&x22)!=x23)|x24);

    if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	static volatile int64_t x26 = -1LL;
	static int8_t x27 = -1;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = 302529;

    t6 = (((x25&x26)!=x27)|x28);

    if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	static int8_t x30 = INT8_MIN;
	int32_t x32 = INT32_MAX;
	int32_t t7 = INT32_MAX;

    t7 = (((x29&x30)!=x31)|x32);

    if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 34445916830819LLU;
	static uint8_t x35 = UINT8_MAX;

    t8 = (((x33&x34)!=x35)|x36);

    if (t8 != 227LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = UINT16_MAX;
	volatile uint64_t x38 = UINT64_MAX;
	int8_t x40 = 20;
	int32_t t9 = -3770703;

    t9 = (((x37&x38)!=x39)|x40);

    if (t9 != 21) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int16_t x41 = -1;
	int32_t x42 = 5038227;
	uint32_t x44 = 2397252U;
	uint32_t t10 = 166U;

    t10 = (((x41&x42)!=x43)|x44);

    if (t10 != 2397253U) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	uint16_t x46 = 19482U;
	int16_t x48 = INT16_MIN;

    t11 = (((x45&x46)!=x47)|x48);

    if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 993884256U;
	int8_t x50 = -1;
	static int8_t x51 = INT8_MIN;
	int64_t x52 = -1LL;
	volatile int64_t t12 = 259625901LL;

    t12 = (((x49&x50)!=x51)|x52);

    if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -1806;
	volatile uint16_t x54 = 4U;
	volatile int16_t x55 = INT16_MIN;
	int32_t t13 = 11309;

    t13 = (((x53&x54)!=x55)|x56);

    if (t13 != -23) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MAX;
	int32_t x58 = INT32_MAX;
	volatile uint16_t x59 = 8565U;
	volatile int16_t x60 = 10;
	int32_t t14 = 28933;

    t14 = (((x57&x58)!=x59)|x60);

    if (t14 != 11) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x62 = 9614U;
	int8_t x63 = INT8_MIN;
	uint8_t x64 = 3U;
	static volatile int32_t t15 = -1;

    t15 = (((x61&x62)!=x63)|x64);

    if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x65 = 255U;
	uint64_t x66 = 451LLU;
	static uint16_t x68 = 2692U;
	int32_t t16 = -724488;

    t16 = (((x65&x66)!=x67)|x68);

    if (t16 != 2693) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	int32_t x70 = -1;
	static uint8_t x71 = UINT8_MAX;
	int8_t x72 = INT8_MIN;
	volatile int32_t t17 = 1;

    t17 = (((x69&x70)!=x71)|x72);

    if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MIN;
	volatile int64_t x75 = -1LL;
	int16_t x76 = -480;
	static volatile int32_t t18 = 2;

    t18 = (((x73&x74)!=x75)|x76);

    if (t18 != -479) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x79 = INT64_MIN;
	int8_t x80 = -1;
	static volatile int32_t t19 = -21;

    t19 = (((x77&x78)!=x79)|x80);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 1580646;
	int16_t x84 = -1;
	volatile int32_t t20 = -218460678;

    t20 = (((x81&x82)!=x83)|x84);

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 5535820642856126768LLU;
	static uint8_t x86 = 118U;
	int16_t x87 = -1;
	static int16_t x88 = INT16_MIN;
	static volatile int32_t t21 = -958266653;

    t21 = (((x85&x86)!=x87)|x88);

    if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = UINT8_MAX;
	static int8_t x90 = 62;
	static int8_t x91 = -20;
	int32_t x92 = INT32_MIN;

    t22 = (((x89&x90)!=x91)|x92);

    if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MAX;
	static uint64_t x94 = 114LLU;
	uint32_t x95 = 1494396929U;
	int64_t x96 = INT64_MIN;
	int64_t t23 = 0LL;

    t23 = (((x93&x94)!=x95)|x96);

    if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 1928896841691LLU;
	int16_t x98 = INT16_MIN;
	uint64_t x99 = UINT64_MAX;
	volatile int32_t t24 = INT32_MAX;

    t24 = (((x97&x98)!=x99)|x100);

    if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = UINT16_MAX;
	int16_t x102 = INT16_MIN;
	int16_t x103 = 436;
	int16_t x104 = INT16_MAX;

    t25 = (((x101&x102)!=x103)|x104);

    if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x106 = -834;
	uint64_t x108 = 234LLU;
	uint64_t t26 = 163LLU;

    t26 = (((x105&x106)!=x107)|x108);

    if (t26 != 235LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = 5562822572566286LLU;
	int16_t x110 = -127;
	static uint16_t x111 = UINT16_MAX;
	int16_t x112 = -1;
	volatile int32_t t27 = 120453710;

    t27 = (((x109&x110)!=x111)|x112);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint64_t x113 = 237493281904053LLU;
	static uint16_t x114 = UINT16_MAX;
	static volatile int8_t x115 = -5;

    t28 = (((x113&x114)!=x115)|x116);

    if (t28 != -32767) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = INT32_MIN;
	int8_t x119 = INT8_MIN;

    t29 = (((x117&x118)!=x119)|x120);

    if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = 392629;
	volatile int32_t x122 = INT32_MIN;
	static volatile int16_t x123 = INT16_MIN;
	static int32_t x124 = INT32_MIN;
	int32_t t30 = 18;

    t30 = (((x121&x122)!=x123)|x124);

    if (t30 != -2147483647) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x125 = -59595719952LL;
	volatile uint64_t x126 = 6163LLU;
	volatile int16_t x127 = INT16_MIN;
	uint16_t x128 = UINT16_MAX;

    t31 = (((x125&x126)!=x127)|x128);

    if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = 52U;
	static int8_t x130 = 54;
	volatile uint16_t x131 = 621U;
	int16_t x132 = INT16_MAX;
	static int32_t t32 = 271;

    t32 = (((x129&x130)!=x131)|x132);

    if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x133 = 0U;
	uint64_t x134 = 251143680507970236LLU;
	static int64_t x136 = INT64_MIN;
	int64_t t33 = -2269133256669LL;

    t33 = (((x133&x134)!=x135)|x136);

    if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 11513U;
	static int64_t x138 = -15202LL;
	uint32_t x139 = 521620071U;
	static int8_t x140 = INT8_MAX;
	int32_t t34 = 229;

    t34 = (((x137&x138)!=x139)|x140);

    if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x141 = 0U;
	int64_t x142 = 20121LL;
	static uint32_t x143 = 79862U;
	uint8_t x144 = 3U;

    t35 = (((x141&x142)!=x143)|x144);

    if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = UINT32_MAX;
	volatile int64_t x146 = -1LL;
	uint16_t x147 = 1812U;
	int32_t x148 = 8565;
	volatile int32_t t36 = -19981800;

    t36 = (((x145&x146)!=x147)|x148);

    if (t36 != 8565) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int16_t x149 = -3108;
	int8_t x151 = -1;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = 266424;

    t37 = (((x149&x150)!=x151)|x152);

    if (t37 != -2147483647) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x153 = 0;
	volatile int16_t x154 = -1;
	static volatile int32_t x155 = 4628;
	static uint32_t x156 = 60476U;
	volatile uint32_t t38 = 7859363U;

    t38 = (((x153&x154)!=x155)|x156);

    if (t38 != 60477U) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = 11215634;
	volatile int32_t x158 = -341007;
	int16_t x159 = INT16_MIN;

    t39 = (((x157&x158)!=x159)|x160);

    if (t39 != 27) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -1LL;
	static volatile int32_t x162 = INT32_MAX;
	uint8_t x163 = 10U;
	int8_t x164 = INT8_MIN;
	volatile int32_t t40 = 223;

    t40 = (((x161&x162)!=x163)|x164);

    if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 1443U;
	uint16_t x166 = 73U;
	static int8_t x167 = -49;
	uint64_t x168 = 2LLU;
	static uint64_t t41 = 6160841542246750LLU;

    t41 = (((x165&x166)!=x167)|x168);

    if (t41 != 3LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x169 = 444;
	int16_t x170 = -1;
	uint64_t x171 = 99001144LLU;
	int8_t x172 = INT8_MIN;

    t42 = (((x169&x170)!=x171)|x172);

    if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = 29;
	int16_t x174 = INT16_MAX;
	static uint64_t x175 = UINT64_MAX;
	int32_t x176 = INT32_MIN;
	static volatile int32_t t43 = -11507;

    t43 = (((x173&x174)!=x175)|x176);

    if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = -157;
	uint64_t x178 = 768317265LLU;
	volatile int64_t t44 = -34602681215460563LL;

    t44 = (((x177&x178)!=x179)|x180);

    if (t44 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x181 = 4908U;
	static int8_t x182 = INT8_MIN;
	uint64_t x183 = 234862807LLU;
	int16_t x184 = INT16_MAX;

    t45 = (((x181&x182)!=x183)|x184);

    if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MIN;
	int8_t x188 = INT8_MAX;

    t46 = (((x185&x186)!=x187)|x188);

    if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x190 = 25U;
	int32_t x191 = -3;
	volatile int8_t x192 = 0;
	volatile int32_t t47 = 8;

    t47 = (((x189&x190)!=x191)|x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x193 = UINT16_MAX;
	static int16_t x194 = INT16_MIN;
	static volatile int8_t x195 = INT8_MIN;
	int8_t x196 = -1;
	static int32_t t48 = -382;

    t48 = (((x193&x194)!=x195)|x196);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x197 = -4;
	static int32_t x198 = -1;
	volatile int32_t x199 = -1079570;
	volatile int16_t x200 = INT16_MIN;
	volatile int32_t t49 = -178;

    t49 = (((x197&x198)!=x199)|x200);

    if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x202 = -1;
	int64_t x203 = -1LL;
	static uint32_t x204 = UINT32_MAX;
	uint32_t t50 = UINT32_MAX;

    t50 = (((x201&x202)!=x203)|x204);

    if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x205 = -1;
	int16_t x206 = -1961;
	int8_t x207 = -1;
	int64_t x208 = INT64_MAX;
	int64_t t51 = INT64_MAX;

    t51 = (((x205&x206)!=x207)|x208);

    if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x209 = INT8_MAX;
	int8_t x210 = -3;
	volatile uint16_t x211 = 25U;
	volatile int16_t x212 = 2;
	volatile int32_t t52 = -1719564;

    t52 = (((x209&x210)!=x211)|x212);

    if (t52 != 3) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	int16_t x214 = -1;
	static int16_t x215 = 58;
	int32_t x216 = INT32_MIN;
	volatile int32_t t53 = -34094633;

    t53 = (((x213&x214)!=x215)|x216);

    if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -49252711151LL;
	static int32_t x218 = INT32_MAX;
	int64_t x219 = -84632132468742846LL;
	volatile int32_t t54 = 3918;

    t54 = (((x217&x218)!=x219)|x220);

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	int8_t x222 = -1;
	static int64_t x223 = -1LL;
	static volatile int8_t x224 = INT8_MIN;
	static int32_t t55 = 5;

    t55 = (((x221&x222)!=x223)|x224);

    if (t55 != -127) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x226 = 11U;
	int8_t x228 = INT8_MIN;
	volatile int32_t t56 = -2216039;

    t56 = (((x225&x226)!=x227)|x228);

    if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 1062U;
	int8_t x230 = INT8_MIN;
	static volatile int32_t t57 = 4041;

    t57 = (((x229&x230)!=x231)|x232);

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = -2688511297491361528LL;
	uint32_t x234 = UINT32_MAX;
	volatile uint32_t x235 = UINT32_MAX;
	static uint32_t x236 = 973793803U;

    t58 = (((x233&x234)!=x235)|x236);

    if (t58 != 973793803U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x237 = 11107;
	volatile int8_t x239 = -1;
	int32_t x240 = INT32_MAX;
	volatile int32_t t59 = INT32_MAX;

    t59 = (((x237&x238)!=x239)|x240);

    if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x241 = INT64_MAX;
	int32_t x242 = -3181673;
	volatile uint8_t x243 = 0U;

    t60 = (((x241&x242)!=x243)|x244);

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x245 = 6U;
	uint16_t x246 = 6275U;
	int32_t x248 = INT32_MAX;
	int32_t t61 = INT32_MAX;

    t61 = (((x245&x246)!=x247)|x248);

    if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 6U;
	volatile uint16_t x250 = UINT16_MAX;
	uint64_t x251 = UINT64_MAX;
	static volatile uint32_t t62 = 227309638U;

    t62 = (((x249&x250)!=x251)|x252);

    if (t62 != 3U) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MIN;
	uint8_t x254 = UINT8_MAX;
	static uint8_t x255 = UINT8_MAX;
	static int8_t x256 = -1;

    t63 = (((x253&x254)!=x255)|x256);

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = 19;
	int8_t x258 = INT8_MIN;
	int16_t x260 = 1948;

    t64 = (((x257&x258)!=x259)|x260);

    if (t64 != 1949) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x261 = INT16_MIN;
	uint16_t x264 = UINT16_MAX;

    t65 = (((x261&x262)!=x263)|x264);

    if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 130269603LLU;
	int16_t x266 = INT16_MIN;
	static volatile uint64_t x267 = 110LLU;
	int64_t x268 = 25023049LL;
	volatile int64_t t66 = -242LL;

    t66 = (((x265&x266)!=x267)|x268);

    if (t66 != 25023049LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x270 = -1;
	int8_t x271 = -14;
	uint16_t x272 = 179U;
	int32_t t67 = -1;

    t67 = (((x269&x270)!=x271)|x272);

    if (t67 != 179) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = 24115U;
	int16_t x274 = 5;
	int64_t x276 = INT64_MAX;
	int64_t t68 = INT64_MAX;

    t68 = (((x273&x274)!=x275)|x276);

    if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x277 = -1LL;
	volatile int32_t x279 = -977461628;
	int32_t t69 = -313871;

    t69 = (((x277&x278)!=x279)|x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = 2166;
	uint32_t x282 = 16368U;
	int64_t x283 = INT64_MAX;
	int16_t x284 = INT16_MIN;
	volatile int32_t t70 = -2426;

    t70 = (((x281&x282)!=x283)|x284);

    if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x285 = 629U;
	static int16_t x286 = INT16_MIN;
	uint32_t x287 = 1U;

    t71 = (((x285&x286)!=x287)|x288);

    if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MIN;
	uint32_t x290 = 117U;
	static int64_t x291 = INT64_MIN;
	uint32_t x292 = 0U;

    t72 = (((x289&x290)!=x291)|x292);

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x294 = 0U;
	volatile uint32_t t73 = UINT32_MAX;

    t73 = (((x293&x294)!=x295)|x296);

    if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x297 = INT64_MIN;
	static int32_t x298 = INT32_MAX;
	uint16_t x299 = 796U;
	static int64_t x300 = INT64_MIN;
	static volatile int64_t t74 = -535149773LL;

    t74 = (((x297&x298)!=x299)|x300);

    if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = -14405128341044578LL;
	volatile int64_t x302 = -255045097405489LL;
	volatile int32_t x303 = INT32_MIN;
	int32_t x304 = INT32_MAX;

    t75 = (((x301&x302)!=x303)|x304);

    if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x305 = INT16_MIN;
	int64_t x306 = INT64_MIN;
	static int16_t x307 = INT16_MIN;
	static int32_t x308 = INT32_MAX;
	int32_t t76 = INT32_MAX;

    t76 = (((x305&x306)!=x307)|x308);

    if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = UINT16_MAX;
	volatile uint64_t x311 = 73103373LLU;
	static volatile int32_t t77 = -43404455;

    t77 = (((x309&x310)!=x311)|x312);

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = UINT64_MAX;
	int16_t x314 = -1;
	int32_t x315 = INT32_MAX;

    t78 = (((x313&x314)!=x315)|x316);

    if (t78 != 29) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 25U;
	int64_t x318 = -43760021536536402LL;
	uint16_t x319 = 10635U;
	static int8_t x320 = INT8_MIN;
	int32_t t79 = -48251;

    t79 = (((x317&x318)!=x319)|x320);

    if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x321 = INT32_MAX;
	volatile int64_t x322 = INT64_MAX;
	uint32_t x323 = UINT32_MAX;
	int32_t x324 = INT32_MAX;
	int32_t t80 = INT32_MAX;

    t80 = (((x321&x322)!=x323)|x324);

    if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x325 = UINT8_MAX;
	uint64_t x326 = 593977LLU;
	int64_t x327 = INT64_MIN;
	static uint16_t x328 = 23U;
	int32_t t81 = -497;

    t81 = (((x325&x326)!=x327)|x328);

    if (t81 != 23) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = 1;
	int8_t x331 = -1;
	int8_t x332 = INT8_MAX;
	static volatile int32_t t82 = -378;

    t82 = (((x329&x330)!=x331)|x332);

    if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x335 = INT16_MAX;
	int64_t x336 = INT64_MAX;
	static volatile int64_t t83 = INT64_MAX;

    t83 = (((x333&x334)!=x335)|x336);

    if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x337 = INT16_MIN;
	int16_t x338 = 386;
	static uint16_t x339 = 11U;
	volatile int64_t x340 = INT64_MIN;

    t84 = (((x337&x338)!=x339)|x340);

    if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = 17U;
	uint8_t x342 = 19U;
	uint16_t x343 = UINT16_MAX;
	int32_t x344 = INT32_MIN;
	volatile int32_t t85 = -2459777;

    t85 = (((x341&x342)!=x343)|x344);

    if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x347 = 3683056U;
	int16_t x348 = -337;
	int32_t t86 = -18477;

    t86 = (((x345&x346)!=x347)|x348);

    if (t86 != -337) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x350 = 49U;
	volatile uint16_t x351 = 21U;
	int64_t x352 = -80784301LL;
	static volatile int64_t t87 = -31786LL;

    t87 = (((x349&x350)!=x351)|x352);

    if (t87 != -80784301LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x353 = 650;
	int16_t x354 = -1;
	uint16_t x355 = 8526U;
	static int8_t x356 = -7;
	int32_t t88 = 2;

    t88 = (((x353&x354)!=x355)|x356);

    if (t88 != -7) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x357 = -1;
	uint32_t x359 = 46720744U;
	uint64_t x360 = 3LLU;
	volatile uint64_t t89 = 461566866404LLU;

    t89 = (((x357&x358)!=x359)|x360);

    if (t89 != 3LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x364 = INT32_MIN;

    t90 = (((x361&x362)!=x363)|x364);

    if (t90 != -2147483647) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x365 = 22;
	static uint8_t x366 = 28U;
	static uint16_t x368 = 20152U;
	int32_t t91 = 37073948;

    t91 = (((x365&x366)!=x367)|x368);

    if (t91 != 20153) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint8_t x370 = UINT8_MAX;
	int32_t t92 = 4076038;

    t92 = (((x369&x370)!=x371)|x372);

    if (t92 != -32767) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x373 = INT8_MIN;
	static int16_t x374 = 1;
	int64_t x375 = -260508838LL;
	int8_t x376 = INT8_MIN;
	int32_t t93 = -1044;

    t93 = (((x373&x374)!=x375)|x376);

    if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x378 = 3527U;
	uint16_t x379 = 2274U;
	volatile int32_t t94 = -8691215;

    t94 = (((x377&x378)!=x379)|x380);

    if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = UINT16_MAX;
	static uint64_t x382 = 1489411117LLU;
	int64_t x383 = INT64_MIN;
	int8_t x384 = -1;
	static int32_t t95 = -2644;

    t95 = (((x381&x382)!=x383)|x384);

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = 109;
	static uint64_t x386 = UINT64_MAX;
	volatile int32_t x387 = 150;
	uint16_t x388 = 1U;
	volatile int32_t t96 = -2;

    t96 = (((x385&x386)!=x387)|x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x389 = INT32_MAX;
	uint16_t x392 = UINT16_MAX;

    t97 = (((x389&x390)!=x391)|x392);

    if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x394 = -1;
	int32_t x395 = 11127;
	static int16_t x396 = INT16_MAX;
	volatile int32_t t98 = -68;

    t98 = (((x393&x394)!=x395)|x396);

    if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x398 = -1;
	static int8_t x399 = INT8_MAX;

    t99 = (((x397&x398)!=x399)|x400);

    if (t99 != UINT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x401 = -891424;
	int32_t x402 = INT32_MIN;
	int16_t x403 = INT16_MIN;
	uint32_t x404 = 11659118U;
	uint32_t t100 = 13267U;

    t100 = (((x401&x402)!=x403)|x404);

    if (t100 != 11659119U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = 193926629U;
	volatile int64_t x406 = INT64_MIN;
	int16_t x408 = 1652;
	volatile int32_t t101 = 1;

    t101 = (((x405&x406)!=x407)|x408);

    if (t101 != 1653) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x409 = UINT32_MAX;
	int16_t x410 = 473;
	int64_t x412 = -2LL;
	int64_t t102 = 200349309550LL;

    t102 = (((x409&x410)!=x411)|x412);

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = UINT8_MAX;
	static volatile int8_t x414 = -1;
	static volatile int32_t x415 = INT32_MIN;
	uint64_t x416 = 53811LLU;
	uint64_t t103 = 11220217129LLU;

    t103 = (((x413&x414)!=x415)|x416);

    if (t103 != 53811LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x418 = -1;
	int16_t x419 = INT16_MAX;
	static int32_t t104 = -765;

    t104 = (((x417&x418)!=x419)|x420);

    if (t104 != 65535) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = 1;
	uint64_t x422 = 101526968785570LLU;
	int64_t x424 = INT64_MIN;
	static int64_t t105 = 24599854562047LL;

    t105 = (((x421&x422)!=x423)|x424);

    if (t105 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = UINT32_MAX;
	int8_t x426 = INT8_MAX;
	uint16_t x427 = 342U;
	static int16_t x428 = 160;
	volatile int32_t t106 = -3566;

    t106 = (((x425&x426)!=x427)|x428);

    if (t106 != 161) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x429 = INT64_MIN;
	uint64_t x430 = 18965544585612LLU;
	static int32_t x431 = INT32_MAX;
	int64_t x432 = INT64_MIN;
	volatile int64_t t107 = 66146440723800753LL;

    t107 = (((x429&x430)!=x431)|x432);

    if (t107 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 941U;
	static int16_t x434 = INT16_MAX;
	volatile int64_t x435 = INT64_MIN;
	int32_t x436 = INT32_MIN;
	volatile int32_t t108 = -1;

    t108 = (((x433&x434)!=x435)|x436);

    if (t108 != -2147483647) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x438 = 1501762073781LLU;
	volatile int32_t x439 = -1;
	volatile uint32_t x440 = 34184765U;

    t109 = (((x437&x438)!=x439)|x440);

    if (t109 != 34184765U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MAX;
	static volatile int64_t x442 = INT64_MIN;
	volatile uint64_t x444 = 498241365LLU;
	volatile uint64_t t110 = 23994351563LLU;

    t110 = (((x441&x442)!=x443)|x444);

    if (t110 != 498241365LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MAX;
	int64_t x446 = INT64_MAX;
	volatile int8_t x447 = INT8_MIN;
	int8_t x448 = INT8_MAX;
	static int32_t t111 = -2571;

    t111 = (((x445&x446)!=x447)|x448);

    if (t111 != 127) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x449 = UINT64_MAX;
	static uint64_t x450 = 127LLU;
	int32_t x451 = -194185;
	uint64_t x452 = 2047671272038636LLU;
	volatile uint64_t t112 = 448134LLU;

    t112 = (((x449&x450)!=x451)|x452);

    if (t112 != 2047671272038637LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x454 = INT16_MIN;
	uint8_t x455 = UINT8_MAX;
	static uint8_t x456 = 69U;
	int32_t t113 = -40;

    t113 = (((x453&x454)!=x455)|x456);

    if (t113 != 69) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int64_t x457 = -1LL;
	static volatile int32_t x458 = INT32_MIN;
	int64_t x459 = -1LL;
	int32_t x460 = -455347;
	volatile int32_t t114 = -26398;

    t114 = (((x457&x458)!=x459)|x460);

    if (t114 != -455347) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = 6549165LLU;
	int32_t x462 = -6498464;
	int32_t x464 = INT32_MIN;

    t115 = (((x461&x462)!=x463)|x464);

    if (t115 != -2147483647) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x466 = 5300188LL;
	int64_t x467 = INT64_MIN;
	int32_t x468 = 96;
	volatile int32_t t116 = 15;

    t116 = (((x465&x466)!=x467)|x468);

    if (t116 != 97) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x470 = 17U;
	volatile int32_t x471 = -619198;
	int16_t x472 = -21;

    t117 = (((x469&x470)!=x471)|x472);

    if (t117 != -21) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MAX;
	int8_t x474 = -1;
	int32_t x475 = 354;
	uint64_t x476 = 5LLU;
	uint64_t t118 = 39233LLU;

    t118 = (((x473&x474)!=x475)|x476);

    if (t118 != 5LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x477 = 522486850279LLU;
	uint64_t x478 = UINT64_MAX;
	int32_t x480 = INT32_MAX;
	int32_t t119 = INT32_MAX;

    t119 = (((x477&x478)!=x479)|x480);

    if (t119 != INT32_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x482 = 11U;
	int64_t x483 = INT64_MIN;
	int32_t t120 = 329454;

    t120 = (((x481&x482)!=x483)|x484);

    if (t120 != 1747) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x485 = 393191U;
	int32_t x486 = INT32_MIN;
	static int64_t x487 = -855335LL;
	int32_t t121 = 4094338;

    t121 = (((x485&x486)!=x487)|x488);

    if (t121 != -127) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 18U;
	static int32_t x490 = INT32_MAX;
	int64_t x491 = INT64_MIN;
	volatile uint16_t x492 = 46U;
	volatile int32_t t122 = -986321;

    t122 = (((x489&x490)!=x491)|x492);

    if (t122 != 47) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = INT8_MAX;
	volatile int64_t x494 = INT64_MIN;
	volatile int32_t x495 = INT32_MIN;
	static int8_t x496 = INT8_MIN;
	volatile int32_t t123 = 1270;

    t123 = (((x493&x494)!=x495)|x496);

    if (t123 != -127) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = UINT64_MAX;
	volatile uint8_t x498 = 11U;
	uint16_t x499 = UINT16_MAX;
	volatile int16_t x500 = -16373;
	volatile int32_t t124 = -416333;

    t124 = (((x497&x498)!=x499)|x500);

    if (t124 != -16373) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x501 = 0;
	uint64_t x503 = 1LLU;
	static int64_t x504 = 4166553038918727269LL;
	int64_t t125 = -37171268444217135LL;

    t125 = (((x501&x502)!=x503)|x504);

    if (t125 != 4166553038918727269LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = -4981126047LL;
	volatile int16_t x506 = INT16_MAX;
	static int64_t x507 = -634535671928LL;
	static volatile int32_t t126 = INT32_MAX;

    t126 = (((x505&x506)!=x507)|x508);

    if (t126 != INT32_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x509 = 0;
	uint16_t x510 = UINT16_MAX;
	static int16_t x511 = INT16_MIN;
	static int64_t x512 = INT64_MAX;
	static int64_t t127 = INT64_MAX;

    t127 = (((x509&x510)!=x511)|x512);

    if (t127 != INT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x514 = INT64_MIN;
	int8_t x515 = INT8_MIN;
	volatile int32_t x516 = INT32_MIN;
	int32_t t128 = -179703;

    t128 = (((x513&x514)!=x515)|x516);

    if (t128 != -2147483647) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x518 = INT16_MAX;
	static uint8_t x519 = 2U;

    t129 = (((x517&x518)!=x519)|x520);

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = 6;
	uint8_t x522 = 94U;
	int64_t x523 = INT64_MAX;
	volatile uint16_t x524 = UINT16_MAX;
	volatile int32_t t130 = -3;

    t130 = (((x521&x522)!=x523)|x524);

    if (t130 != 65535) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x525 = -1847536;
	uint64_t x526 = 5041957LLU;
	volatile int32_t x527 = INT32_MIN;

    t131 = (((x525&x526)!=x527)|x528);

    if (t131 != -2147483647) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x529 = 127384743U;
	int16_t x531 = 3;
	static uint64_t x532 = 4835LLU;

    t132 = (((x529&x530)!=x531)|x532);

    if (t132 != 4835LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x534 = INT16_MIN;
	uint16_t x536 = 14U;
	int32_t t133 = 576;

    t133 = (((x533&x534)!=x535)|x536);

    if (t133 != 14) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x537 = INT32_MIN;
	uint16_t x538 = UINT16_MAX;
	int16_t x539 = -1;
	int64_t x540 = INT64_MIN;
	volatile int64_t t134 = -7417446LL;

    t134 = (((x537&x538)!=x539)|x540);

    if (t134 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x541 = INT8_MIN;
	static uint32_t x543 = 19U;
	int32_t x544 = INT32_MAX;
	volatile int32_t t135 = INT32_MAX;

    t135 = (((x541&x542)!=x543)|x544);

    if (t135 != INT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x546 = UINT32_MAX;
	uint64_t x547 = 7793329309595LLU;
	uint16_t x548 = UINT16_MAX;

    t136 = (((x545&x546)!=x547)|x548);

    if (t136 != 65535) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x550 = 10816883602334779LL;
	uint8_t x551 = UINT8_MAX;
	static int16_t x552 = 23;
	static volatile int32_t t137 = -341847255;

    t137 = (((x549&x550)!=x551)|x552);

    if (t137 != 23) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x553 = UINT8_MAX;
	volatile int16_t x554 = INT16_MIN;
	int64_t x555 = -67LL;
	uint16_t x556 = UINT16_MAX;

    t138 = (((x553&x554)!=x555)|x556);

    if (t138 != 65535) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x558 = INT8_MIN;
	static int16_t x559 = INT16_MIN;
	uint64_t x560 = UINT64_MAX;
	uint64_t t139 = UINT64_MAX;

    t139 = (((x557&x558)!=x559)|x560);

    if (t139 != UINT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MAX;
	int64_t x562 = -464279631728934LL;
	int16_t x563 = -7;
	int16_t x564 = INT16_MIN;
	int32_t t140 = 91;

    t140 = (((x561&x562)!=x563)|x564);

    if (t140 != -32767) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x566 = 219009831010779810LL;
	int64_t x567 = -1LL;
	int64_t x568 = -315482887049LL;

    t141 = (((x565&x566)!=x567)|x568);

    if (t141 != -315482887049LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = 33057921;
	int64_t x570 = -212LL;
	int64_t t142 = 803LL;

    t142 = (((x569&x570)!=x571)|x572);

    if (t142 != 277987664242211469LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x573 = -1;
	int16_t x575 = 0;
	volatile int32_t t143 = INT32_MAX;

    t143 = (((x573&x574)!=x575)|x576);

    if (t143 != INT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = -23;
	uint16_t x579 = UINT16_MAX;
	int16_t x580 = INT16_MAX;

    t144 = (((x577&x578)!=x579)|x580);

    if (t144 != 32767) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x581 = -1;
	int64_t x582 = INT64_MAX;
	volatile int16_t x583 = -1;
	int16_t x584 = 1093;
	volatile int32_t t145 = 23194445;

    t145 = (((x581&x582)!=x583)|x584);

    if (t145 != 1093) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x585 = 3;
	uint32_t x586 = 365U;
	volatile int16_t x587 = -1;
	static int8_t x588 = INT8_MAX;
	static int32_t t146 = -2627423;

    t146 = (((x585&x586)!=x587)|x588);

    if (t146 != 127) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x589 = UINT32_MAX;
	uint8_t x590 = UINT8_MAX;
	static volatile int32_t t147 = -549;

    t147 = (((x589&x590)!=x591)|x592);

    if (t147 != 378437) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x593 = UINT16_MAX;
	int8_t x594 = 6;
	int16_t x595 = INT16_MAX;
	static int32_t x596 = INT32_MIN;
	int32_t t148 = 352;

    t148 = (((x593&x594)!=x595)|x596);

    if (t148 != -2147483647) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x598 = INT8_MIN;
	volatile int64_t x599 = -8399518881465434LL;
	static int32_t t149 = 272759835;

    t149 = (((x597&x598)!=x599)|x600);

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x602 = INT8_MIN;
	int64_t x603 = -1151347LL;
	static volatile uint8_t x604 = 0U;
	static volatile int32_t t150 = -2;

    t150 = (((x601&x602)!=x603)|x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int64_t x607 = 15793530LL;
	int8_t x608 = 3;
	int32_t t151 = 975415;

    t151 = (((x605&x606)!=x607)|x608);

    if (t151 != 3) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MIN;
	uint64_t x611 = 242781831674448069LLU;
	int8_t x612 = INT8_MIN;
	int32_t t152 = -89;

    t152 = (((x609&x610)!=x611)|x612);

    if (t152 != -127) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x613 = 1002;
	int8_t x615 = INT8_MIN;
	volatile int32_t t153 = 127134;

    t153 = (((x613&x614)!=x615)|x616);

    if (t153 != -127) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x617 = UINT8_MAX;
	int16_t x619 = -1;
	volatile uint16_t x620 = UINT16_MAX;
	volatile int32_t t154 = -3;

    t154 = (((x617&x618)!=x619)|x620);

    if (t154 != 65535) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x621 = 447U;
	static int16_t x622 = INT16_MIN;
	int64_t x624 = 40125763459126239LL;
	int64_t t155 = 52LL;

    t155 = (((x621&x622)!=x623)|x624);

    if (t155 != 40125763459126239LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = 2169978;
	int32_t x626 = 4037386;
	static uint32_t x628 = 640593U;
	uint32_t t156 = 1403875454U;

    t156 = (((x625&x626)!=x627)|x628);

    if (t156 != 640593U) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x630 = -1LL;
	static volatile int32_t x631 = INT32_MIN;
	int32_t x632 = INT32_MIN;
	int32_t t157 = 20294;

    t157 = (((x629&x630)!=x631)|x632);

    if (t157 != -2147483647) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint64_t x633 = 0LLU;
	volatile uint16_t x634 = UINT16_MAX;
	volatile int16_t x635 = INT16_MAX;
	uint8_t x636 = UINT8_MAX;
	int32_t t158 = -147;

    t158 = (((x633&x634)!=x635)|x636);

    if (t158 != 255) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MIN;
	uint32_t x638 = 344046U;
	uint8_t x639 = 14U;
	int64_t x640 = -1LL;

    t159 = (((x637&x638)!=x639)|x640);

    if (t159 != -1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x641 = 25U;
	int16_t x642 = -1;
	uint16_t x644 = UINT16_MAX;
	volatile int32_t t160 = -788;

    t160 = (((x641&x642)!=x643)|x644);

    if (t160 != 65535) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = UINT8_MAX;
	uint64_t x646 = UINT64_MAX;
	uint8_t x647 = 3U;
	static int8_t x648 = INT8_MIN;
	volatile int32_t t161 = 633794304;

    t161 = (((x645&x646)!=x647)|x648);

    if (t161 != -127) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x649 = INT32_MIN;
	int32_t x652 = INT32_MIN;
	int32_t t162 = -266236;

    t162 = (((x649&x650)!=x651)|x652);

    if (t162 != -2147483647) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MAX;
	uint32_t x654 = 748625693U;
	int8_t x655 = -1;
	volatile int32_t t163 = -4308761;

    t163 = (((x653&x654)!=x655)|x656);

    if (t163 != -32767) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x657 = 760U;
	volatile int8_t x658 = INT8_MIN;
	int32_t t164 = 8692;

    t164 = (((x657&x658)!=x659)|x660);

    if (t164 != -127) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	int32_t x662 = 0;
	int8_t x663 = -1;
	int64_t x664 = INT64_MAX;
	volatile int64_t t165 = INT64_MAX;

    t165 = (((x661&x662)!=x663)|x664);

    if (t165 != INT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x666 = UINT32_MAX;
	static int32_t x667 = INT32_MIN;
	int32_t x668 = -93009;

    t166 = (((x665&x666)!=x667)|x668);

    if (t166 != -93009) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x669 = INT16_MAX;
	uint64_t x671 = 2182735323240LLU;
	static int64_t t167 = 281602147LL;

    t167 = (((x669&x670)!=x671)|x672);

    if (t167 != 1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	uint16_t x674 = 239U;
	int8_t x675 = INT8_MIN;
	uint32_t x676 = 10436792U;
	uint32_t t168 = 1289600U;

    t168 = (((x673&x674)!=x675)|x676);

    if (t168 != 10436793U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -1;
	int64_t x678 = -1LL;
	uint16_t x679 = UINT16_MAX;
	static int32_t x680 = -1;
	int32_t t169 = 1360;

    t169 = (((x677&x678)!=x679)|x680);

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x681 = UINT64_MAX;
	uint16_t x682 = UINT16_MAX;
	int16_t x684 = INT16_MIN;
	volatile int32_t t170 = 6859609;

    t170 = (((x681&x682)!=x683)|x684);

    if (t170 != -32767) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x686 = INT16_MIN;
	int8_t x687 = INT8_MIN;
	uint32_t x688 = UINT32_MAX;

    t171 = (((x685&x686)!=x687)|x688);

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x689 = 2U;
	volatile int32_t x690 = -1;
	volatile int8_t x692 = -7;
	volatile int32_t t172 = 42;

    t172 = (((x689&x690)!=x691)|x692);

    if (t172 != -7) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x694 = INT16_MAX;
	int32_t x695 = 1;
	volatile uint8_t x696 = 20U;
	volatile int32_t t173 = -625;

    t173 = (((x693&x694)!=x695)|x696);

    if (t173 != 21) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = 691765448439LL;
	uint16_t x698 = UINT16_MAX;
	static volatile uint32_t x699 = 23765344U;
	static int32_t x700 = INT32_MAX;
	volatile int32_t t174 = INT32_MAX;

    t174 = (((x697&x698)!=x699)|x700);

    if (t174 != INT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = 2453U;
	int8_t x702 = -1;
	static int16_t x703 = INT16_MIN;
	uint32_t x704 = UINT32_MAX;
	static volatile uint32_t t175 = UINT32_MAX;

    t175 = (((x701&x702)!=x703)|x704);

    if (t175 != UINT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MIN;
	static int8_t x707 = INT8_MIN;
	int16_t x708 = INT16_MIN;

    t176 = (((x705&x706)!=x707)|x708);

    if (t176 != -32767) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x710 = 3199858642935433LLU;
	int32_t x711 = -372355322;
	volatile int32_t t177 = 10;

    t177 = (((x709&x710)!=x711)|x712);

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x713 = 171557768LLU;
	int64_t x714 = INT64_MIN;
	static uint64_t x716 = 8LLU;
	static volatile uint64_t t178 = 1110068605112310LLU;

    t178 = (((x713&x714)!=x715)|x716);

    if (t178 != 9LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = -11;
	uint8_t x719 = 19U;
	int8_t x720 = INT8_MIN;
	volatile int32_t t179 = 229;

    t179 = (((x717&x718)!=x719)|x720);

    if (t179 != -127) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x722 = -1;
	static uint64_t x724 = UINT64_MAX;

    t180 = (((x721&x722)!=x723)|x724);

    if (t180 != UINT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x725 = INT64_MIN;
	int32_t x726 = -1;
	int8_t x727 = -1;
	int8_t x728 = INT8_MAX;
	static volatile int32_t t181 = 250804;

    t181 = (((x725&x726)!=x727)|x728);

    if (t181 != 127) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = INT16_MAX;
	uint8_t x730 = 1U;
	int8_t x731 = -1;
	volatile uint64_t x732 = 13147902LLU;
	static uint64_t t182 = 6LLU;

    t182 = (((x729&x730)!=x731)|x732);

    if (t182 != 13147903LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = UINT32_MAX;
	uint16_t x734 = 340U;
	uint32_t x735 = 402028U;
	uint16_t x736 = UINT16_MAX;
	int32_t t183 = 6;

    t183 = (((x733&x734)!=x735)|x736);

    if (t183 != 65535) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x738 = INT64_MAX;
	int64_t x740 = -1LL;
	static int64_t t184 = -1815326041187LL;

    t184 = (((x737&x738)!=x739)|x740);

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MIN;
	static uint64_t x742 = UINT64_MAX;
	uint16_t x743 = 230U;
	static int32_t x744 = -1893;
	int32_t t185 = 881166;

    t185 = (((x741&x742)!=x743)|x744);

    if (t185 != -1893) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int8_t x745 = INT8_MIN;
	int32_t x746 = INT32_MIN;
	int32_t x747 = INT32_MIN;
	int16_t x748 = INT16_MIN;
	int32_t t186 = -3;

    t186 = (((x745&x746)!=x747)|x748);

    if (t186 != -32768) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x750 = -1;
	static volatile uint32_t x752 = 1063U;
	volatile uint32_t t187 = 835U;

    t187 = (((x749&x750)!=x751)|x752);

    if (t187 != 1063U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x753 = INT16_MAX;
	uint64_t x755 = 114LLU;
	int16_t x756 = -1;
	int32_t t188 = 130538940;

    t188 = (((x753&x754)!=x755)|x756);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x758 = INT64_MIN;
	int16_t x760 = INT16_MIN;
	volatile int32_t t189 = 6943096;

    t189 = (((x757&x758)!=x759)|x760);

    if (t189 != -32767) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 0U;
	int8_t x762 = INT8_MIN;
	static int8_t x764 = INT8_MIN;
	int32_t t190 = -923307182;

    t190 = (((x761&x762)!=x763)|x764);

    if (t190 != -127) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x767 = -1;
	int32_t x768 = -1;
	volatile int32_t t191 = 4;

    t191 = (((x765&x766)!=x767)|x768);

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MIN;
	volatile uint8_t x770 = 3U;
	int64_t x771 = -1LL;
	volatile int16_t x772 = 10;

    t192 = (((x769&x770)!=x771)|x772);

    if (t192 != 11) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = 54U;
	volatile int32_t x775 = -26;
	int32_t x776 = INT32_MIN;
	static int32_t t193 = 199;

    t193 = (((x773&x774)!=x775)|x776);

    if (t193 != -2147483647) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 86U;
	int32_t x779 = INT32_MAX;
	static int32_t t194 = -189;

    t194 = (((x777&x778)!=x779)|x780);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = 8120U;
	static uint64_t x782 = 148399LLU;
	int64_t x783 = INT64_MIN;
	int32_t t195 = 487237;

    t195 = (((x781&x782)!=x783)|x784);

    if (t195 != -1554231) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 2977427839261736LLU;
	static uint8_t x786 = 4U;
	static volatile int64_t x787 = 101858724868008LL;
	static volatile int32_t t196 = 0;

    t196 = (((x785&x786)!=x787)|x788);

    if (t196 != -7) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = UINT16_MAX;
	static uint16_t x790 = UINT16_MAX;
	static int16_t x791 = INT16_MAX;
	uint16_t x792 = 3973U;
	volatile int32_t t197 = -2272192;

    t197 = (((x789&x790)!=x791)|x792);

    if (t197 != 3973) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x793 = UINT64_MAX;
	volatile uint32_t x794 = UINT32_MAX;
	int32_t x795 = INT32_MIN;
	int32_t x796 = INT32_MIN;
	int32_t t198 = -12636533;

    t198 = (((x793&x794)!=x795)|x796);

    if (t198 != -2147483647) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x799 = INT16_MIN;
	int32_t x800 = 66;
	volatile int32_t t199 = -952;

    t199 = (((x797&x798)!=x799)|x800);

    if (t199 != 67) { NG(); } else { ; }
	
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


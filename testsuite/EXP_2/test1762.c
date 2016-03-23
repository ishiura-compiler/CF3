
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

static int32_t x3 = -234370;
uint32_t x7 = 1618980U;
int8_t x8 = INT8_MIN;
volatile int32_t x12 = -1;
int32_t x21 = INT32_MIN;
uint8_t x22 = 7U;
static int8_t x25 = -13;
static int64_t x28 = INT64_MIN;
int16_t x37 = 15;
uint64_t x39 = UINT64_MAX;
volatile uint32_t x42 = 81335U;
int32_t x50 = -332590435;
int16_t x57 = INT16_MAX;
int8_t x58 = INT8_MIN;
volatile int64_t x63 = INT64_MIN;
int32_t x68 = INT32_MAX;
static int32_t x69 = -1;
uint16_t x72 = 1U;
int8_t x82 = -8;
static int64_t x84 = INT64_MAX;
int64_t x87 = INT64_MIN;
int8_t x88 = -11;
uint64_t t22 = 41842LLU;
static int16_t x101 = -1;
int32_t x104 = INT32_MAX;
int32_t x112 = -276;
volatile int16_t x119 = INT16_MIN;
static volatile int64_t t29 = INT64_MIN;
int64_t x122 = -1LL;
volatile uint8_t x126 = UINT8_MAX;
int8_t x127 = INT8_MIN;
volatile uint64_t t32 = 0LLU;
uint16_t x135 = 3U;
int64_t x138 = -2546020801614LL;
int8_t x140 = INT8_MIN;
int8_t x147 = -1;
volatile int16_t x148 = INT16_MAX;
int16_t x149 = -1314;
uint32_t t37 = 179U;
int64_t x153 = INT64_MIN;
static int8_t x157 = -1;
int16_t x168 = 0;
uint32_t x171 = 1865U;
volatile int8_t x173 = INT8_MIN;
int32_t x174 = -50693182;
int8_t x181 = INT8_MAX;
int64_t x183 = -1LL;
int32_t x184 = -406;
uint64_t x193 = UINT64_MAX;
volatile uint64_t t48 = 2098272270LLU;
volatile int16_t x199 = 0;
int64_t x200 = -1LL;
int16_t x202 = INT16_MIN;
volatile int8_t x206 = 1;
volatile int64_t t51 = -5LL;
uint64_t x209 = UINT64_MAX;
volatile int32_t x214 = -1;
volatile uint32_t x220 = UINT32_MAX;
int64_t x227 = 298018709176439851LL;
static uint16_t x234 = 12U;
int64_t t59 = -19241663569066LL;
static int64_t x245 = INT64_MIN;
int64_t x251 = INT64_MAX;
static volatile int32_t t62 = -19999;
int16_t x256 = 116;
uint8_t x257 = 103U;
int32_t x261 = -6361;
uint64_t t65 = 936018202LLU;
int64_t t67 = -67084481576872897LL;
static int32_t x278 = INT32_MIN;
int64_t x281 = INT64_MIN;
int16_t x282 = -126;
int16_t x287 = -6633;
int32_t t71 = -144797;
int64_t x291 = INT64_MIN;
int32_t x294 = -1;
static uint64_t x295 = 1532LLU;
int32_t x299 = 7;
int64_t x300 = INT64_MAX;
uint64_t x310 = UINT64_MAX;
uint32_t x316 = 26U;
int32_t x320 = 102893432;
volatile uint16_t x325 = 114U;
uint64_t x327 = 1689810610740845961LLU;
static uint8_t x338 = 16U;
int64_t x342 = 18LL;
int64_t t85 = INT64_MIN;
int32_t x345 = -213612;
static uint32_t x351 = 3679860U;
int32_t t87 = -2;
int8_t x353 = 0;
uint8_t x354 = 41U;
int16_t x356 = INT16_MIN;
volatile int64_t x364 = INT64_MIN;
uint32_t x368 = UINT32_MAX;
volatile uint32_t t91 = 90443U;
static int32_t x370 = INT32_MIN;
volatile uint64_t x373 = UINT64_MAX;
uint16_t x381 = 25U;
static int16_t x383 = INT16_MIN;
static int16_t x385 = 0;
int64_t x389 = INT64_MIN;
uint16_t x390 = 3258U;
volatile int64_t t97 = 180165891050042975LL;
int16_t x395 = 221;
volatile uint16_t x400 = 13U;
int16_t x406 = INT16_MIN;
static int16_t x415 = INT16_MIN;
uint32_t x417 = 12932293U;
static uint8_t x421 = UINT8_MAX;
uint16_t x426 = 0U;
int16_t x431 = 3;
volatile int32_t t107 = 647979818;
uint64_t t111 = 203276312897LLU;
static int64_t x451 = INT64_MIN;
volatile int16_t x452 = INT16_MAX;
int64_t x457 = INT64_MAX;
int8_t x458 = 14;
int64_t x460 = -1140929530427654661LL;
volatile int32_t x461 = INT32_MAX;
uint32_t x463 = 19U;
int8_t x465 = INT8_MIN;
volatile uint16_t x468 = UINT16_MAX;
int64_t x472 = -4071130679LL;
int16_t x473 = INT16_MAX;
static uint64_t x474 = UINT64_MAX;
int16_t x484 = 0;
int16_t x490 = -2;
volatile uint16_t x495 = 1U;
static int8_t x499 = -1;
uint32_t t124 = 3576228U;
uint64_t x502 = UINT64_MAX;
int32_t x505 = INT32_MAX;
int64_t x509 = INT64_MIN;
int8_t x511 = -1;
static int32_t x514 = INT32_MIN;
int32_t x519 = INT32_MIN;
static volatile int16_t x521 = -2668;
volatile int32_t t130 = -799;
uint8_t x529 = 99U;
int8_t x536 = -1;
uint32_t x541 = 112769951U;
volatile uint16_t x549 = UINT16_MAX;
static int16_t x555 = -1;
uint32_t x557 = 1U;
uint8_t x562 = 72U;
int16_t x563 = INT16_MAX;
volatile int8_t x567 = INT8_MAX;
uint64_t x570 = UINT64_MAX;
static volatile int32_t t142 = -159053753;
uint16_t x576 = 3U;
int32_t t143 = -5;
int8_t x583 = -1;
int16_t x586 = -3;
int16_t x589 = -28;
volatile int32_t x592 = -137150971;
uint32_t t149 = 3252525U;
volatile int32_t x603 = INT32_MIN;
int64_t x607 = -1LL;
int16_t x609 = INT16_MIN;
int16_t x613 = INT16_MAX;
volatile uint64_t t154 = 4146416601924219583LLU;
uint8_t x621 = 120U;
uint64_t x635 = 1LLU;
uint8_t x636 = UINT8_MAX;
volatile int32_t t158 = 646346862;
volatile int16_t x644 = INT16_MIN;
int16_t x653 = INT16_MIN;
static uint64_t x656 = 11LLU;
int16_t x679 = INT16_MIN;
static uint8_t x680 = 3U;
static volatile int32_t t171 = -9;
volatile int32_t t173 = 1;
int32_t x697 = -268317;
int16_t x698 = 6661;
int8_t x710 = 0;
int64_t t178 = -50882802271338LL;
int64_t x724 = -6558510905LL;
static int8_t x725 = INT8_MIN;
uint16_t x742 = 0U;
int16_t x744 = -1;
int32_t t185 = 7;
uint64_t x748 = 2741283685LLU;
uint64_t t186 = 64750LLU;
static int16_t x752 = INT16_MAX;
int32_t t187 = -2278417;
uint64_t x758 = UINT64_MAX;
uint8_t x759 = 0U;
uint32_t x763 = UINT32_MAX;
volatile int16_t x764 = -1;
int32_t x765 = -1821358;
int64_t x776 = -487187743LL;
volatile uint64_t t193 = 698611805LLU;
uint8_t x779 = 13U;
int32_t x793 = INT32_MIN;
volatile int16_t x795 = INT16_MIN;
volatile uint16_t x796 = 96U;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	int16_t x2 = 398;
	int8_t x4 = INT8_MIN;
	volatile uint64_t t0 = 756634109606LLU;

    t0 = ((x1^(x2>x3))&x4);

    if (t0 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 28LLU;
	int32_t x6 = INT32_MAX;
	static uint64_t t1 = 13888591652LLU;

    t1 = ((x5^(x6>x7))&x8);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	uint8_t x10 = UINT8_MAX;
	uint64_t x11 = 2818387238302690LLU;
	volatile int32_t t2 = 0;

    t2 = ((x9^(x10>x11))&x12);

    if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = INT32_MAX;
	static volatile int8_t x14 = INT8_MAX;
	uint32_t x15 = UINT32_MAX;
	int32_t x16 = -1;
	int32_t t3 = INT32_MAX;

    t3 = ((x13^(x14>x15))&x16);

    if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = INT16_MIN;
	uint8_t x18 = UINT8_MAX;
	uint16_t x19 = UINT16_MAX;
	static int16_t x20 = INT16_MAX;
	volatile int32_t t4 = -149429;

    t4 = ((x17^(x18>x19))&x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x23 = INT64_MIN;
	int8_t x24 = INT8_MAX;
	int32_t t5 = 1093645;

    t5 = ((x21^(x22>x23))&x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = INT16_MIN;
	static uint32_t x27 = 66254U;
	int64_t t6 = INT64_MIN;

    t6 = ((x25^(x26>x27))&x28);

    if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = -1981718;
	int8_t x30 = -1;
	uint64_t x31 = 55146180194LLU;
	int32_t x32 = 232824509;
	volatile int32_t t7 = 36100;

    t7 = ((x29^(x30>x31))&x32);

    if (t7 != 232817321) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = 559756001LL;
	uint8_t x34 = 21U;
	static int32_t x35 = -24434894;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t8 = 775892118647275864LLU;

    t8 = ((x33^(x34>x35))&x36);

    if (t8 != 559756000LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = INT64_MAX;
	volatile int64_t x40 = INT64_MIN;
	volatile int64_t t9 = 55LL;

    t9 = ((x37^(x38>x39))&x40);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	volatile int8_t x43 = -50;
	static volatile int8_t x44 = INT8_MIN;
	static int32_t t10 = 2688041;

    t10 = ((x41^(x42>x43))&x44);

    if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int64_t x45 = -194902197LL;
	uint8_t x46 = 6U;
	static int64_t x47 = -5LL;
	int32_t x48 = -1;
	volatile int64_t t11 = -109LL;

    t11 = ((x45^(x46>x47))&x48);

    if (t11 != -194902198LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x49 = 53981036563773LLU;
	int16_t x51 = -4068;
	static volatile uint64_t x52 = 45LLU;
	uint64_t t12 = 7720468183274LLU;

    t12 = ((x49^(x50>x51))&x52);

    if (t12 != 45LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 20U;
	volatile uint8_t x54 = 52U;
	int64_t x55 = INT64_MIN;
	static int32_t x56 = INT32_MIN;
	volatile int32_t t13 = -52716;

    t13 = ((x53^(x54>x55))&x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x59 = INT16_MIN;
	static uint16_t x60 = UINT16_MAX;
	int32_t t14 = -14290312;

    t14 = ((x57^(x58>x59))&x60);

    if (t14 != 32766) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x61 = INT16_MIN;
	int16_t x62 = INT16_MIN;
	uint8_t x64 = UINT8_MAX;
	static volatile int32_t t15 = 23917;

    t15 = ((x61^(x62>x63))&x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = UINT8_MAX;
	uint64_t x66 = 3756LLU;
	int16_t x67 = -5;
	int32_t t16 = -6;

    t16 = ((x65^(x66>x67))&x68);

    if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x70 = -1;
	int32_t x71 = -1;
	static int32_t t17 = 489;

    t17 = ((x69^(x70>x71))&x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -1LL;
	static int32_t x74 = -1;
	int8_t x75 = INT8_MIN;
	int8_t x76 = INT8_MAX;
	int64_t t18 = -41617608640LL;

    t18 = ((x73^(x74>x75))&x76);

    if (t18 != 126LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	volatile int8_t x78 = -1;
	int8_t x79 = -27;
	int8_t x80 = INT8_MAX;
	volatile int64_t t19 = 216LL;

    t19 = ((x77^(x78>x79))&x80);

    if (t19 != 126LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MAX;
	int8_t x83 = -1;
	volatile int64_t t20 = 6971889857LL;

    t20 = ((x81^(x82>x83))&x84);

    if (t20 != 32767LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -1;
	int64_t x86 = INT64_MAX;
	int32_t t21 = 83619;

    t21 = ((x85^(x86>x87))&x88);

    if (t21 != -12) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x89 = 516990581330111382LLU;
	volatile uint8_t x90 = 9U;
	uint16_t x91 = UINT16_MAX;
	static int32_t x92 = INT32_MIN;

    t22 = ((x89^(x90>x91))&x92);

    if (t22 != 516990579981156352LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -1;
	int64_t x94 = INT64_MIN;
	int64_t x95 = 16341LL;
	uint16_t x96 = 263U;
	volatile int32_t t23 = 1;

    t23 = ((x93^(x94>x95))&x96);

    if (t23 != 263) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 514157094942842332LLU;
	uint16_t x98 = UINT16_MAX;
	int32_t x99 = INT32_MAX;
	static volatile uint32_t x100 = 16675980U;
	uint64_t t24 = 687875LLU;

    t24 = ((x97^(x98>x99))&x100);

    if (t24 != 13636748LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int8_t x102 = -1;
	static int8_t x103 = -1;
	int32_t t25 = INT32_MAX;

    t25 = ((x101^(x102>x103))&x104);

    if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = 4U;
	uint16_t x106 = UINT16_MAX;
	int16_t x107 = 10770;
	uint16_t x108 = 247U;
	volatile int32_t t26 = 225;

    t26 = ((x105^(x106>x107))&x108);

    if (t26 != 5) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x109 = INT16_MIN;
	volatile uint32_t x110 = 8U;
	int64_t x111 = -1LL;
	static volatile int32_t t27 = 401499018;

    t27 = ((x109^(x110>x111))&x112);

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = UINT8_MAX;
	int64_t x114 = INT64_MIN;
	uint16_t x115 = 153U;
	uint8_t x116 = 6U;
	volatile int32_t t28 = 505;

    t28 = ((x113^(x114>x115))&x116);

    if (t28 != 6) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	static int32_t x118 = 1;
	int16_t x120 = INT16_MIN;

    t29 = ((x117^(x118>x119))&x120);

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = UINT64_MAX;
	uint16_t x123 = 497U;
	uint8_t x124 = 2U;
	static volatile uint64_t t30 = 184725786408548LLU;

    t30 = ((x121^(x122>x123))&x124);

    if (t30 != 2LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -1;
	int32_t x128 = INT32_MIN;
	static volatile int32_t t31 = INT32_MIN;

    t31 = ((x125^(x126>x127))&x128);

    if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 22006581919381190LLU;
	static uint8_t x130 = 14U;
	static uint32_t x131 = UINT32_MAX;
	volatile int16_t x132 = 3089;

    t32 = ((x129^(x130>x131))&x132);

    if (t32 != 1024LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MAX;
	static int16_t x134 = INT16_MIN;
	int16_t x136 = 993;
	int32_t t33 = 1337450;

    t33 = ((x133^(x134>x135))&x136);

    if (t33 != 993) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = 258940188;
	int16_t x139 = -1;
	static int32_t t34 = 773604743;

    t34 = ((x137^(x138>x139))&x140);

    if (t34 != 258940160) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	static volatile uint16_t x142 = 275U;
	int64_t x143 = INT64_MIN;
	static volatile uint16_t x144 = 1U;
	int32_t t35 = 304932858;

    t35 = ((x141^(x142>x143))&x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 240822000948LLU;
	int16_t x146 = -12;
	uint64_t t36 = 4833534279LLU;

    t36 = ((x145^(x146>x147))&x148);

    if (t36 != 7476LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x150 = 6U;
	int8_t x151 = 2;
	uint32_t x152 = 6U;

    t37 = ((x149^(x150>x151))&x152);

    if (t37 != 6U) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x154 = 1;
	volatile int32_t x155 = 2622;
	int8_t x156 = 3;
	static int64_t t38 = 5295LL;

    t38 = ((x153^(x154>x155))&x156);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x158 = -110759260301LL;
	uint32_t x159 = 127U;
	int32_t x160 = 7;
	int32_t t39 = -2506;

    t39 = ((x157^(x158>x159))&x160);

    if (t39 != 7) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MAX;
	uint32_t x162 = 209U;
	volatile int8_t x163 = INT8_MIN;
	uint32_t x164 = 4371U;
	volatile uint32_t t40 = 56U;

    t40 = ((x161^(x162>x163))&x164);

    if (t40 != 4371U) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = 1;
	int8_t x166 = 1;
	uint8_t x167 = 13U;
	volatile int32_t t41 = 13735431;

    t41 = ((x165^(x166>x167))&x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x169 = INT16_MIN;
	int8_t x170 = INT8_MAX;
	int64_t x172 = 130118LL;
	int64_t t42 = 59476LL;

    t42 = ((x169^(x170>x171))&x172);

    if (t42 != 98304LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x175 = -1;
	int8_t x176 = -4;
	static volatile int32_t t43 = 54;

    t43 = ((x173^(x174>x175))&x176);

    if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 23557U;
	volatile uint8_t x178 = UINT8_MAX;
	uint16_t x179 = UINT16_MAX;
	volatile int8_t x180 = INT8_MAX;
	int32_t t44 = -874057;

    t44 = ((x177^(x178>x179))&x180);

    if (t44 != 5) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x182 = -12400LL;
	static volatile int32_t t45 = 181;

    t45 = ((x181^(x182>x183))&x184);

    if (t45 != 106) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = INT32_MAX;
	int8_t x186 = INT8_MIN;
	uint32_t x187 = 443U;
	static int32_t x188 = INT32_MIN;
	static int32_t t46 = -61;

    t46 = ((x185^(x186>x187))&x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int8_t x189 = -1;
	volatile uint32_t x190 = UINT32_MAX;
	int32_t x191 = 25014;
	int32_t x192 = 3796;
	int32_t t47 = 399;

    t47 = ((x189^(x190>x191))&x192);

    if (t47 != 3796) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x194 = INT32_MAX;
	volatile int32_t x195 = 14;
	uint32_t x196 = 6U;

    t48 = ((x193^(x194>x195))&x196);

    if (t48 != 6LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 305U;
	uint8_t x198 = 3U;
	static volatile int64_t t49 = -1373825LL;

    t49 = ((x197^(x198>x199))&x200);

    if (t49 != 304LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x201 = UINT8_MAX;
	int64_t x203 = INT64_MAX;
	volatile int32_t x204 = -1;
	int32_t t50 = -47;

    t50 = ((x201^(x202>x203))&x204);

    if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x205 = INT64_MIN;
	static uint64_t x207 = 155LLU;
	int64_t x208 = 14156922LL;

    t51 = ((x205^(x206>x207))&x208);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x210 = -1;
	int8_t x211 = INT8_MIN;
	static int16_t x212 = INT16_MAX;
	uint64_t t52 = 10LLU;

    t52 = ((x209^(x210>x211))&x212);

    if (t52 != 32766LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MAX;
	int32_t x215 = 236;
	int32_t x216 = INT32_MIN;
	static volatile int32_t t53 = 14107;

    t53 = ((x213^(x214>x215))&x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x217 = 58U;
	int8_t x218 = -1;
	int32_t x219 = 4653452;
	uint32_t t54 = 129446U;

    t54 = ((x217^(x218>x219))&x220);

    if (t54 != 58U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 12U;
	static int16_t x222 = 1001;
	int64_t x223 = INT64_MIN;
	uint16_t x224 = 515U;
	int32_t t55 = 201;

    t55 = ((x221^(x222>x223))&x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = -788;
	uint64_t x226 = 58775LLU;
	int16_t x228 = -1;
	int32_t t56 = -503448577;

    t56 = ((x225^(x226>x227))&x228);

    if (t56 != -788) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = UINT8_MAX;
	static int8_t x230 = -1;
	int8_t x231 = -3;
	uint64_t x232 = 1074933705432803LLU;
	uint64_t t57 = 155084LLU;

    t57 = ((x229^(x230>x231))&x232);

    if (t57 != 226LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x233 = -13;
	int16_t x235 = -1;
	int32_t x236 = INT32_MIN;
	static volatile int32_t t58 = INT32_MIN;

    t58 = ((x233^(x234>x235))&x236);

    if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = INT64_MIN;
	volatile uint64_t x238 = 7458LLU;
	volatile uint32_t x239 = 0U;
	volatile uint32_t x240 = 37944987U;

    t59 = ((x237^(x238>x239))&x240);

    if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = 511;
	uint32_t x242 = 1U;
	volatile int32_t x243 = INT32_MIN;
	int16_t x244 = -8;
	volatile int32_t t60 = 31320;

    t60 = ((x241^(x242>x243))&x244);

    if (t60 != 504) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x246 = INT64_MIN;
	volatile int8_t x247 = INT8_MIN;
	uint16_t x248 = 14U;
	int64_t t61 = -61457588LL;

    t61 = ((x245^(x246>x247))&x248);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int32_t x249 = -1;
	volatile uint64_t x250 = 209177902297LLU;
	static int16_t x252 = INT16_MIN;

    t62 = ((x249^(x250>x251))&x252);

    if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	volatile uint32_t x254 = 31417387U;
	uint32_t x255 = 1986U;
	static int32_t t63 = -3;

    t63 = ((x253^(x254>x255))&x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x258 = UINT64_MAX;
	int32_t x259 = 737517;
	int64_t x260 = 2410LL;
	volatile int64_t t64 = 0LL;

    t64 = ((x257^(x258>x259))&x260);

    if (t64 != 98LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x262 = -1LL;
	int64_t x263 = INT64_MAX;
	uint64_t x264 = 7520062277095LLU;

    t65 = ((x261^(x262>x263))&x264);

    if (t65 != 7520062276903LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = INT64_MAX;
	uint64_t x266 = 25LLU;
	uint16_t x267 = 74U;
	static int64_t x268 = -1LL;
	static volatile int64_t t66 = INT64_MAX;

    t66 = ((x265^(x266>x267))&x268);

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = -1025119138416LL;
	static int64_t x270 = INT64_MIN;
	int8_t x271 = INT8_MIN;
	volatile int32_t x272 = INT32_MIN;

    t67 = ((x269^(x270>x271))&x272);

    if (t67 != -1026497183744LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = 1U;
	int64_t x274 = INT64_MIN;
	volatile int32_t x275 = 102331635;
	uint64_t x276 = 462LLU;
	volatile uint64_t t68 = 901955502760371734LLU;

    t68 = ((x273^(x274>x275))&x276);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MIN;
	volatile uint8_t x279 = UINT8_MAX;
	int32_t x280 = INT32_MIN;
	int64_t t69 = INT64_MIN;

    t69 = ((x277^(x278>x279))&x280);

    if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x283 = -3;
	int8_t x284 = INT8_MIN;
	volatile int64_t t70 = INT64_MIN;

    t70 = ((x281^(x282>x283))&x284);

    if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x285 = INT16_MIN;
	static volatile int32_t x286 = 347670344;
	volatile uint16_t x288 = 8U;

    t71 = ((x285^(x286>x287))&x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = 24U;
	uint8_t x290 = UINT8_MAX;
	int32_t x292 = INT32_MIN;
	volatile int32_t t72 = 14;

    t72 = ((x289^(x290>x291))&x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x293 = -154;
	int64_t x296 = 1LL;
	volatile int64_t t73 = -70LL;

    t73 = ((x293^(x294>x295))&x296);

    if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x297 = INT64_MIN;
	static uint8_t x298 = 35U;
	volatile int64_t t74 = 45772340854LL;

    t74 = ((x297^(x298>x299))&x300);

    if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	static int8_t x302 = INT8_MIN;
	static int16_t x303 = INT16_MIN;
	static volatile int8_t x304 = INT8_MIN;
	int64_t t75 = INT64_MIN;

    t75 = ((x301^(x302>x303))&x304);

    if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x305 = UINT8_MAX;
	volatile uint16_t x306 = 2U;
	int32_t x307 = INT32_MIN;
	volatile uint32_t x308 = 220026U;
	volatile uint32_t t76 = 542871U;

    t76 = ((x305^(x306>x307))&x308);

    if (t76 != 122U) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MIN;
	int32_t x311 = INT32_MIN;
	int16_t x312 = INT16_MAX;
	volatile int32_t t77 = -2;

    t77 = ((x309^(x310>x311))&x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = 1;
	int64_t x314 = 5598308LL;
	int16_t x315 = -252;
	volatile uint32_t t78 = 2917U;

    t78 = ((x313^(x314>x315))&x316);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -1;
	int32_t x318 = INT32_MAX;
	volatile int64_t x319 = 79025987702LL;
	int32_t t79 = 10817050;

    t79 = ((x317^(x318>x319))&x320);

    if (t79 != 102893432) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = 33878;
	int64_t x322 = INT64_MAX;
	uint16_t x323 = UINT16_MAX;
	int16_t x324 = 3552;
	static int32_t t80 = 1759917;

    t80 = ((x321^(x322>x323))&x324);

    if (t80 != 1088) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x326 = UINT8_MAX;
	uint64_t x328 = 0LLU;
	volatile uint64_t t81 = 70976916516LLU;

    t81 = ((x325^(x326>x327))&x328);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = 23;
	int16_t x330 = -1;
	int64_t x331 = INT64_MIN;
	int32_t x332 = 74182;
	static int32_t t82 = 5454;

    t82 = ((x329^(x330>x331))&x332);

    if (t82 != 6) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = -36;
	volatile int32_t x334 = -15;
	static int32_t x335 = INT32_MIN;
	static int32_t x336 = -334405335;
	static int32_t t83 = 92485043;

    t83 = ((x333^(x334>x335))&x336);

    if (t83 != -334405367) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x337 = -2096;
	volatile uint32_t x339 = 23420493U;
	static int32_t x340 = INT32_MAX;
	int32_t t84 = 5;

    t84 = ((x337^(x338>x339))&x340);

    if (t84 != 2147481552) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = -1LL;
	volatile uint8_t x343 = 72U;
	int64_t x344 = INT64_MIN;

    t85 = ((x341^(x342>x343))&x344);

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x346 = 0;
	int32_t x347 = INT32_MIN;
	int8_t x348 = -16;
	volatile int32_t t86 = -1497105;

    t86 = ((x345^(x346>x347))&x348);

    if (t86 != -213616) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = INT32_MIN;
	int64_t x350 = 0LL;
	uint8_t x352 = 2U;

    t87 = ((x349^(x350>x351))&x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x355 = -1;
	int32_t t88 = -45052280;

    t88 = ((x353^(x354>x355))&x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = -13;
	uint16_t x358 = UINT16_MAX;
	static uint8_t x359 = 0U;
	uint8_t x360 = 118U;
	int32_t t89 = -12;

    t89 = ((x357^(x358>x359))&x360);

    if (t89 != 114) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x361 = -1LL;
	int32_t x362 = -4241;
	static uint8_t x363 = 27U;
	volatile int64_t t90 = INT64_MIN;

    t90 = ((x361^(x362>x363))&x364);

    if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = INT32_MIN;
	volatile int8_t x366 = INT8_MIN;
	uint16_t x367 = 4118U;

    t91 = ((x365^(x366>x367))&x368);

    if (t91 != 2147483648U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = 186112456LLU;
	int16_t x371 = 1;
	int8_t x372 = 47;
	static uint64_t t92 = 6109514LLU;

    t92 = ((x369^(x370>x371))&x372);

    if (t92 != 8LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x374 = 4784655766415554LLU;
	int32_t x375 = 207385;
	static uint32_t x376 = 566615747U;
	uint64_t t93 = 2132411LLU;

    t93 = ((x373^(x374>x375))&x376);

    if (t93 != 566615746LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint8_t x377 = UINT8_MAX;
	int16_t x378 = INT16_MIN;
	int32_t x379 = -1;
	static int64_t x380 = 547155LL;
	int64_t t94 = 10257936098LL;

    t94 = ((x377^(x378>x379))&x380);

    if (t94 != 83LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x382 = INT8_MIN;
	uint16_t x384 = 69U;
	int32_t t95 = 54228540;

    t95 = ((x381^(x382>x383))&x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x386 = 68U;
	static int64_t x387 = -692384LL;
	uint32_t x388 = 29730042U;
	uint32_t t96 = 81911U;

    t96 = ((x385^(x386>x387))&x388);

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x391 = -1LL;
	uint32_t x392 = UINT32_MAX;

    t97 = ((x389^(x390>x391))&x392);

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int16_t x393 = INT16_MAX;
	static volatile uint16_t x394 = 46U;
	volatile int8_t x396 = -1;
	static volatile int32_t t98 = -31803626;

    t98 = ((x393^(x394>x395))&x396);

    if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = INT8_MIN;
	int8_t x398 = INT8_MAX;
	int8_t x399 = 1;
	int32_t t99 = 7;

    t99 = ((x397^(x398>x399))&x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x401 = 3U;
	uint16_t x402 = 2619U;
	volatile int8_t x403 = -1;
	uint16_t x404 = 2U;
	volatile int32_t t100 = -872023;

    t100 = ((x401^(x402>x403))&x404);

    if (t100 != 2) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MIN;
	int8_t x407 = -1;
	int16_t x408 = 4;
	volatile int32_t t101 = -680594269;

    t101 = ((x405^(x406>x407))&x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = 12576U;
	int16_t x410 = -1;
	uint16_t x411 = UINT16_MAX;
	int8_t x412 = INT8_MIN;
	volatile int32_t t102 = 1;

    t102 = ((x409^(x410>x411))&x412);

    if (t102 != 12544) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x413 = -1;
	uint32_t x414 = 0U;
	uint64_t x416 = UINT64_MAX;
	static volatile uint64_t t103 = UINT64_MAX;

    t103 = ((x413^(x414>x415))&x416);

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x418 = INT64_MIN;
	int8_t x419 = -1;
	static volatile int16_t x420 = -1;
	volatile uint32_t t104 = 50U;

    t104 = ((x417^(x418>x419))&x420);

    if (t104 != 12932293U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x422 = 9491719762LLU;
	uint32_t x423 = UINT32_MAX;
	int32_t x424 = -3750449;
	volatile int32_t t105 = -24389;

    t105 = ((x421^(x422>x423))&x424);

    if (t105 != 206) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x425 = INT8_MIN;
	int32_t x427 = -443575675;
	int16_t x428 = INT16_MIN;
	volatile int32_t t106 = -169959705;

    t106 = ((x425^(x426>x427))&x428);

    if (t106 != -32768) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = UINT16_MAX;
	volatile int8_t x430 = INT8_MIN;
	int32_t x432 = INT32_MIN;

    t107 = ((x429^(x430>x431))&x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -1LL;
	static uint64_t x434 = UINT64_MAX;
	uint32_t x435 = 394811U;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t108 = 8577120056153729LLU;

    t108 = ((x433^(x434>x435))&x436);

    if (t108 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x437 = INT16_MIN;
	uint16_t x438 = 637U;
	uint16_t x439 = UINT16_MAX;
	int16_t x440 = INT16_MIN;
	int32_t t109 = 1;

    t109 = ((x437^(x438>x439))&x440);

    if (t109 != -32768) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = 9187U;
	static volatile int32_t x442 = -1;
	int8_t x443 = -1;
	static uint32_t x444 = UINT32_MAX;
	volatile uint32_t t110 = 301U;

    t110 = ((x441^(x442>x443))&x444);

    if (t110 != 9187U) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MIN;
	static int8_t x446 = 19;
	int64_t x447 = 10967LL;
	uint64_t x448 = 347520565986218LLU;

    t111 = ((x445^(x446>x447))&x448);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = 3;
	volatile uint64_t x450 = 1477LLU;
	volatile int32_t t112 = 35085;

    t112 = ((x449^(x450>x451))&x452);

    if (t112 != 3) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x453 = INT32_MAX;
	static int16_t x454 = INT16_MIN;
	int16_t x455 = 1;
	int64_t x456 = 135LL;
	int64_t t113 = 5888431613LL;

    t113 = ((x453^(x454>x455))&x456);

    if (t113 != 135LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int64_t x459 = INT64_MIN;
	int64_t t114 = -22LL;

    t114 = ((x457^(x458>x459))&x460);

    if (t114 != 8082442506427121146LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x462 = -1;
	uint64_t x464 = 9540LLU;
	volatile uint64_t t115 = 210649LLU;

    t115 = ((x461^(x462>x463))&x464);

    if (t115 != 9540LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x466 = INT8_MIN;
	uint16_t x467 = UINT16_MAX;
	int32_t t116 = 5267;

    t116 = ((x465^(x466>x467))&x468);

    if (t116 != 65408) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 18371U;
	volatile uint16_t x470 = UINT16_MAX;
	uint8_t x471 = 2U;
	int64_t t117 = 209110317878LL;

    t117 = ((x469^(x470>x471))&x472);

    if (t117 != 16832LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int32_t x475 = -270374;
	uint32_t x476 = 8U;
	uint32_t t118 = 3U;

    t118 = ((x473^(x474>x475))&x476);

    if (t118 != 8U) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = -1;
	uint64_t x478 = UINT64_MAX;
	uint16_t x479 = 5178U;
	static uint64_t x480 = UINT64_MAX;
	uint64_t t119 = 1LLU;

    t119 = ((x477^(x478>x479))&x480);

    if (t119 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x481 = 0;
	int32_t x482 = -1;
	volatile int64_t x483 = -1130809410321LL;
	static int32_t t120 = 21;

    t120 = ((x481^(x482>x483))&x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x485 = INT8_MIN;
	volatile int16_t x486 = INT16_MAX;
	volatile uint32_t x487 = 363660U;
	static int32_t x488 = 0;
	int32_t t121 = 0;

    t121 = ((x485^(x486>x487))&x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = 0;
	static uint16_t x491 = 446U;
	static int8_t x492 = 9;
	int32_t t122 = -1;

    t122 = ((x489^(x490>x491))&x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MIN;
	volatile uint32_t x494 = 9U;
	static int8_t x496 = INT8_MAX;
	static volatile int32_t t123 = -19;

    t123 = ((x493^(x494>x495))&x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = 69462U;
	static volatile int16_t x498 = INT16_MIN;
	uint8_t x500 = 4U;

    t124 = ((x497^(x498>x499))&x500);

    if (t124 != 4U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = 7;
	static volatile int64_t x503 = -7339LL;
	int64_t x504 = INT64_MIN;
	int64_t t125 = -972807788LL;

    t125 = ((x501^(x502>x503))&x504);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x506 = 6360238467604536LL;
	int64_t x507 = INT64_MIN;
	static int8_t x508 = 0;
	volatile int32_t t126 = 29769;

    t126 = ((x505^(x506>x507))&x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x510 = -1;
	int8_t x512 = INT8_MIN;
	int64_t t127 = INT64_MIN;

    t127 = ((x509^(x510>x511))&x512);

    if (t127 != INT64_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MIN;
	int16_t x515 = INT16_MIN;
	uint32_t x516 = 3698U;
	uint32_t t128 = 524203U;

    t128 = ((x513^(x514>x515))&x516);

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x517 = INT64_MIN;
	int32_t x518 = INT32_MIN;
	volatile uint64_t x520 = UINT64_MAX;
	volatile uint64_t t129 = 180992138203LLU;

    t129 = ((x517^(x518>x519))&x520);

    if (t129 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x522 = 5U;
	uint8_t x523 = 1U;
	int16_t x524 = INT16_MIN;

    t130 = ((x521^(x522>x523))&x524);

    if (t130 != -32768) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = 0;
	int8_t x526 = INT8_MAX;
	int32_t x527 = INT32_MIN;
	static int64_t x528 = -2960146237292786504LL;
	static int64_t t131 = 355LL;

    t131 = ((x525^(x526>x527))&x528);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x530 = INT16_MIN;
	volatile int8_t x531 = 0;
	static int64_t x532 = -1LL;
	volatile int64_t t132 = -147LL;

    t132 = ((x529^(x530>x531))&x532);

    if (t132 != 99LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = 298201LLU;
	volatile int16_t x534 = INT16_MIN;
	int64_t x535 = INT64_MIN;
	volatile uint64_t t133 = 791223LLU;

    t133 = ((x533^(x534>x535))&x536);

    if (t133 != 298200LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x537 = 2001508816LL;
	int32_t x538 = 2142119;
	int8_t x539 = INT8_MAX;
	volatile int8_t x540 = INT8_MAX;
	int64_t t134 = 4222602530344LL;

    t134 = ((x537^(x538>x539))&x540);

    if (t134 != 81LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x542 = UINT8_MAX;
	static int64_t x543 = INT64_MIN;
	volatile int8_t x544 = INT8_MAX;
	static volatile uint32_t t135 = 1140398884U;

    t135 = ((x541^(x542>x543))&x544);

    if (t135 != 30U) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int64_t x545 = 305026592786180622LL;
	volatile int16_t x546 = -1;
	int32_t x547 = -1;
	uint64_t x548 = 851920123LLU;
	uint64_t t136 = 10655224490556983LLU;

    t136 = ((x545^(x546>x547))&x548);

    if (t136 != 570507274LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x550 = 638;
	volatile int16_t x551 = 0;
	static int64_t x552 = INT64_MIN;
	volatile int64_t t137 = -5440LL;

    t137 = ((x549^(x550>x551))&x552);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x553 = 1811632603795671LL;
	int64_t x554 = INT64_MAX;
	int8_t x556 = INT8_MIN;
	volatile int64_t t138 = 246776232031489LL;

    t138 = ((x553^(x554>x555))&x556);

    if (t138 != 1811632603795584LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x558 = -1;
	int64_t x559 = INT64_MAX;
	int32_t x560 = INT32_MAX;
	uint32_t t139 = 3649U;

    t139 = ((x557^(x558>x559))&x560);

    if (t139 != 1U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = UINT64_MAX;
	int64_t x564 = -1LL;
	volatile uint64_t t140 = UINT64_MAX;

    t140 = ((x561^(x562>x563))&x564);

    if (t140 != UINT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x565 = UINT16_MAX;
	int8_t x566 = -5;
	int8_t x568 = INT8_MIN;
	volatile int32_t t141 = -69;

    t141 = ((x565^(x566>x567))&x568);

    if (t141 != 65408) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x569 = 102U;
	int64_t x571 = INT64_MIN;
	int32_t x572 = INT32_MIN;

    t142 = ((x569^(x570>x571))&x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = 11;
	volatile int16_t x574 = -1;
	volatile uint8_t x575 = UINT8_MAX;

    t143 = ((x573^(x574>x575))&x576);

    if (t143 != 3) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = -1;
	int8_t x578 = -1;
	int16_t x579 = -15420;
	uint64_t x580 = 458367LLU;
	volatile uint64_t t144 = 6399436817286LLU;

    t144 = ((x577^(x578>x579))&x580);

    if (t144 != 458366LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x581 = INT8_MAX;
	int8_t x582 = -1;
	int64_t x584 = INT64_MIN;
	volatile int64_t t145 = -1LL;

    t145 = ((x581^(x582>x583))&x584);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = 12783;
	uint8_t x587 = UINT8_MAX;
	static int8_t x588 = -19;
	volatile int32_t t146 = -4037637;

    t146 = ((x585^(x586>x587))&x588);

    if (t146 != 12781) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int64_t x590 = -1LL;
	int64_t x591 = INT64_MIN;
	int32_t t147 = -711988010;

    t147 = ((x589^(x590>x591))&x592);

    if (t147 != -137150971) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = -15769;
	int32_t x594 = 237039;
	int64_t x595 = INT64_MAX;
	static int64_t x596 = INT64_MIN;
	volatile int64_t t148 = INT64_MIN;

    t148 = ((x593^(x594>x595))&x596);

    if (t148 != INT64_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x597 = UINT32_MAX;
	uint16_t x598 = 1U;
	volatile int16_t x599 = INT16_MIN;
	volatile int8_t x600 = 1;

    t149 = ((x597^(x598>x599))&x600);

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x601 = 35836967U;
	int8_t x602 = INT8_MIN;
	int16_t x604 = -1;
	static volatile uint32_t t150 = 512833817U;

    t150 = ((x601^(x602>x603))&x604);

    if (t150 != 35836966U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = 478973471327LLU;
	int8_t x606 = -1;
	static volatile uint16_t x608 = 1U;
	uint64_t t151 = 122298058209700725LLU;

    t151 = ((x605^(x606>x607))&x608);

    if (t151 != 1LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x610 = INT16_MIN;
	static int16_t x611 = INT16_MIN;
	int32_t x612 = INT32_MAX;
	volatile int32_t t152 = 55034353;

    t152 = ((x609^(x610>x611))&x612);

    if (t152 != 2147450880) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x614 = 11729945108994LLU;
	int16_t x615 = INT16_MIN;
	int8_t x616 = INT8_MIN;
	volatile int32_t t153 = -1138;

    t153 = ((x613^(x614>x615))&x616);

    if (t153 != 32640) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = INT64_MIN;
	int8_t x618 = -1;
	volatile uint32_t x619 = 56143601U;
	volatile uint64_t x620 = UINT64_MAX;

    t154 = ((x617^(x618>x619))&x620);

    if (t154 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x622 = -1;
	int16_t x623 = INT16_MAX;
	int8_t x624 = INT8_MIN;
	volatile int32_t t155 = -52379668;

    t155 = ((x621^(x622>x623))&x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -26175504790LL;
	volatile uint64_t x626 = 1002248671277LLU;
	int64_t x627 = 420475462587LL;
	static uint64_t x628 = UINT64_MAX;
	uint64_t t156 = 247266771637LLU;

    t156 = ((x625^(x626>x627))&x628);

    if (t156 != 18446744047534046827LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = INT32_MAX;
	volatile int8_t x630 = -1;
	uint8_t x631 = UINT8_MAX;
	int8_t x632 = INT8_MIN;
	int32_t t157 = -390555837;

    t157 = ((x629^(x630>x631))&x632);

    if (t157 != 2147483520) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MAX;
	int16_t x634 = INT16_MAX;

    t158 = ((x633^(x634>x635))&x636);

    if (t158 != 254) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = -1LL;
	static uint64_t x638 = 2832310829LLU;
	int64_t x639 = 1418LL;
	uint16_t x640 = 929U;
	int64_t t159 = -528479305313LL;

    t159 = ((x637^(x638>x639))&x640);

    if (t159 != 928LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x641 = 1U;
	volatile int8_t x642 = INT8_MIN;
	uint32_t x643 = UINT32_MAX;
	int32_t t160 = 6;

    t160 = ((x641^(x642>x643))&x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x645 = -15;
	int16_t x646 = INT16_MIN;
	int32_t x647 = INT32_MAX;
	uint8_t x648 = UINT8_MAX;
	int32_t t161 = 484;

    t161 = ((x645^(x646>x647))&x648);

    if (t161 != 241) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MAX;
	static int32_t x650 = INT32_MIN;
	volatile int64_t x651 = -19510LL;
	uint16_t x652 = UINT16_MAX;
	volatile int32_t t162 = 56165272;

    t162 = ((x649^(x650>x651))&x652);

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x654 = 107629946734662941LLU;
	int8_t x655 = INT8_MIN;
	volatile uint64_t t163 = 19397LLU;

    t163 = ((x653^(x654>x655))&x656);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = 1399;
	volatile uint64_t x658 = UINT64_MAX;
	int64_t x659 = INT64_MAX;
	uint64_t x660 = UINT64_MAX;
	volatile uint64_t t164 = 24621125602643502LLU;

    t164 = ((x657^(x658>x659))&x660);

    if (t164 != 1398LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x661 = INT64_MIN;
	uint64_t x662 = 117442894914LLU;
	int8_t x663 = INT8_MIN;
	static volatile int32_t x664 = 2690282;
	int64_t t165 = 1240699428739LL;

    t165 = ((x661^(x662>x663))&x664);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x665 = -462191;
	int8_t x666 = INT8_MIN;
	int16_t x667 = -1;
	int64_t x668 = 69773816020001717LL;
	volatile int64_t t166 = -30355469LL;

    t166 = ((x665^(x666>x667))&x668);

    if (t166 != 69773816019608209LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MAX;
	static int8_t x670 = INT8_MIN;
	int64_t x671 = INT64_MAX;
	int8_t x672 = INT8_MIN;
	volatile int32_t t167 = -163052174;

    t167 = ((x669^(x670>x671))&x672);

    if (t167 != 32640) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x673 = 16267U;
	static uint64_t x674 = 27263236LLU;
	static int8_t x675 = INT8_MIN;
	int16_t x676 = 35;
	uint32_t t168 = 8022543U;

    t168 = ((x673^(x674>x675))&x676);

    if (t168 != 3U) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MAX;
	int16_t x678 = INT16_MIN;
	int32_t t169 = -442;

    t169 = ((x677^(x678>x679))&x680);

    if (t169 != 3) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = 1789U;
	volatile uint32_t x682 = 2703764U;
	volatile int8_t x683 = INT8_MIN;
	static int64_t x684 = INT64_MIN;
	int64_t t170 = 30356284LL;

    t170 = ((x681^(x682>x683))&x684);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = 3236643;
	volatile int16_t x686 = -1;
	uint32_t x687 = 110686U;
	int16_t x688 = INT16_MIN;

    t171 = ((x685^(x686>x687))&x688);

    if (t171 != 3211264) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MIN;
	int64_t x690 = INT64_MIN;
	static int64_t x691 = -1LL;
	static volatile int64_t x692 = 1209591LL;
	static volatile int64_t t172 = -180LL;

    t172 = ((x689^(x690>x691))&x692);

    if (t172 != 1179648LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x693 = -1;
	int32_t x694 = 92;
	int16_t x695 = INT16_MAX;
	uint16_t x696 = UINT16_MAX;

    t173 = ((x693^(x694>x695))&x696);

    if (t173 != 65535) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x699 = -1;
	volatile int32_t x700 = INT32_MIN;
	int32_t t174 = INT32_MIN;

    t174 = ((x697^(x698>x699))&x700);

    if (t174 != INT32_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MAX;
	int8_t x702 = 2;
	int32_t x703 = -1;
	int64_t x704 = -1LL;
	int64_t t175 = 22369858LL;

    t175 = ((x701^(x702>x703))&x704);

    if (t175 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x705 = -1LL;
	int32_t x706 = 4303;
	int8_t x707 = INT8_MIN;
	uint8_t x708 = 1U;
	int64_t t176 = 2793342LL;

    t176 = ((x705^(x706>x707))&x708);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x709 = INT8_MIN;
	int8_t x711 = INT8_MIN;
	static volatile int8_t x712 = 1;
	static int32_t t177 = 11053;

    t177 = ((x709^(x710>x711))&x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = INT64_MIN;
	int16_t x714 = INT16_MAX;
	uint16_t x715 = UINT16_MAX;
	volatile int8_t x716 = INT8_MAX;

    t178 = ((x713^(x714>x715))&x716);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x717 = INT16_MIN;
	static int8_t x718 = -1;
	static int64_t x719 = -333LL;
	uint32_t x720 = 67607461U;
	volatile uint32_t t179 = 70721719U;

    t179 = ((x717^(x718>x719))&x720);

    if (t179 != 67600385U) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -1;
	int16_t x722 = 0;
	int32_t x723 = -36476887;
	int64_t t180 = 15186013LL;

    t180 = ((x721^(x722>x723))&x724);

    if (t180 != -6558510906LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x726 = 2;
	int32_t x727 = -1;
	uint64_t x728 = 117LLU;
	volatile uint64_t t181 = 1223LLU;

    t181 = ((x725^(x726>x727))&x728);

    if (t181 != 1LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = -14;
	static volatile int16_t x730 = -1;
	static uint8_t x731 = 1U;
	int32_t x732 = -1;
	static int32_t t182 = -893131339;

    t182 = ((x729^(x730>x731))&x732);

    if (t182 != -14) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x733 = -14;
	uint64_t x734 = 1686531LLU;
	int16_t x735 = 5288;
	uint16_t x736 = UINT16_MAX;
	int32_t t183 = 368;

    t183 = ((x733^(x734>x735))&x736);

    if (t183 != 65523) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x737 = INT64_MAX;
	static volatile int16_t x738 = INT16_MAX;
	volatile uint64_t x739 = 1425116372LLU;
	int16_t x740 = 1;
	volatile int64_t t184 = 58721568091092011LL;

    t184 = ((x737^(x738>x739))&x740);

    if (t184 != 1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x741 = 111U;
	static uint8_t x743 = 16U;

    t185 = ((x741^(x742>x743))&x744);

    if (t185 != 111) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = -88764;
	int16_t x746 = -244;
	static int64_t x747 = INT64_MIN;

    t186 = ((x745^(x746>x747))&x748);

    if (t186 != 2741281093LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = 110728;
	volatile int16_t x750 = INT16_MAX;
	uint64_t x751 = 1482080LLU;

    t187 = ((x749^(x750>x751))&x752);

    if (t187 != 12424) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x753 = UINT8_MAX;
	int8_t x754 = INT8_MAX;
	int64_t x755 = -231014298310LL;
	int64_t x756 = INT64_MIN;
	volatile int64_t t188 = -1LL;

    t188 = ((x753^(x754>x755))&x756);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = -1LL;
	uint32_t x760 = UINT32_MAX;
	int64_t t189 = -130160438889413806LL;

    t189 = ((x757^(x758>x759))&x760);

    if (t189 != 4294967294LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = 490;
	static int64_t x762 = INT64_MIN;
	int32_t t190 = 844523891;

    t190 = ((x761^(x762>x763))&x764);

    if (t190 != 490) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x766 = 0U;
	uint8_t x767 = 15U;
	int16_t x768 = INT16_MIN;
	static int32_t t191 = 2443;

    t191 = ((x765^(x766>x767))&x768);

    if (t191 != -1835008) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -1LL;
	int16_t x770 = -1;
	int32_t x771 = INT32_MIN;
	volatile uint16_t x772 = UINT16_MAX;
	int64_t t192 = -1671210997268088278LL;

    t192 = ((x769^(x770>x771))&x772);

    if (t192 != 65534LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = 2835956393930LLU;
	uint32_t x774 = 23940U;
	static uint32_t x775 = UINT32_MAX;

    t193 = ((x773^(x774>x775))&x776);

    if (t193 != 2835754517184LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = -1LL;
	int16_t x778 = 2010;
	static int16_t x780 = -4156;
	static volatile int64_t t194 = 163LL;

    t194 = ((x777^(x778>x779))&x780);

    if (t194 != -4156LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x781 = INT64_MAX;
	volatile int8_t x782 = -12;
	uint16_t x783 = 683U;
	int64_t x784 = INT64_MAX;
	static volatile int64_t t195 = INT64_MAX;

    t195 = ((x781^(x782>x783))&x784);

    if (t195 != INT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x785 = 31U;
	static uint32_t x786 = 140731678U;
	int16_t x787 = INT16_MAX;
	int32_t x788 = -1;
	int32_t t196 = -360571;

    t196 = ((x785^(x786>x787))&x788);

    if (t196 != 30) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -1;
	volatile uint32_t x790 = UINT32_MAX;
	int8_t x791 = INT8_MIN;
	static int16_t x792 = -1699;
	static volatile int32_t t197 = 504;

    t197 = ((x789^(x790>x791))&x792);

    if (t197 != -1700) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x794 = 0;
	volatile int32_t t198 = 729206;

    t198 = ((x793^(x794>x795))&x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 63U;
	int64_t x798 = INT64_MAX;
	static int16_t x799 = INT16_MIN;
	int16_t x800 = INT16_MAX;
	volatile int32_t t199 = -1405;

    t199 = ((x797^(x798>x799))&x800);

    if (t199 != 62) { NG(); } else { ; }
	
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


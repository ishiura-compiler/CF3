
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

uint8_t x2 = 13U;
int8_t x6 = 6;
int16_t x8 = INT16_MIN;
int64_t x9 = INT64_MIN;
int64_t x23 = INT64_MAX;
int32_t t5 = INT32_MIN;
int32_t t6 = 73015;
int32_t x32 = INT32_MIN;
uint8_t x39 = 15U;
int64_t x45 = -1LL;
int16_t x47 = INT16_MIN;
static int32_t t11 = -10351620;
volatile int64_t x49 = -2209410LL;
int16_t x51 = INT16_MIN;
volatile int32_t t12 = -288195366;
volatile int64_t x58 = INT64_MIN;
int16_t x60 = INT16_MAX;
volatile int32_t t14 = -1;
int64_t x64 = INT64_MIN;
int64_t x71 = INT64_MAX;
int64_t x72 = INT64_MIN;
int64_t t17 = INT64_MIN;
static volatile int32_t x75 = INT32_MAX;
static int8_t x78 = 20;
int32_t t19 = INT32_MIN;
uint16_t x84 = 875U;
uint64_t t21 = 3732457944559535471LLU;
volatile int32_t t22 = 0;
static volatile int32_t t23 = 2655;
int32_t x106 = INT32_MIN;
int16_t x107 = 1;
static int32_t t26 = 19658;
int32_t x111 = INT32_MAX;
int64_t x113 = INT64_MIN;
uint64_t t28 = 750546798618384069LLU;
int32_t t29 = -61373;
int32_t x121 = -206;
int32_t x126 = INT32_MIN;
static volatile int32_t t31 = -5;
int8_t x140 = 1;
int64_t x142 = INT64_MIN;
uint32_t x146 = 19798789U;
static volatile int64_t x151 = -2100LL;
uint64_t t38 = UINT64_MAX;
volatile uint8_t x170 = UINT8_MAX;
static volatile int16_t x173 = INT16_MAX;
uint8_t x182 = 3U;
static uint64_t x185 = UINT64_MAX;
uint32_t x192 = 113U;
int8_t x196 = INT8_MIN;
int32_t x205 = -3;
static volatile int32_t x207 = -3193;
int32_t t51 = 186315802;
int16_t x215 = INT16_MIN;
int64_t t53 = INT64_MAX;
uint16_t x218 = 1601U;
int8_t x219 = 11;
static uint8_t x227 = 18U;
int32_t t58 = -115015596;
int64_t x238 = 4109783297LL;
uint32_t x243 = 3U;
uint32_t x250 = 1254342950U;
volatile int16_t x251 = -1;
volatile uint8_t x254 = 1U;
uint16_t x255 = 0U;
volatile uint64_t x260 = UINT64_MAX;
int8_t x265 = INT8_MAX;
static uint32_t x267 = 32176U;
int64_t x272 = 1001771LL;
int8_t x285 = INT8_MIN;
uint32_t x286 = 32922U;
int8_t x291 = INT8_MAX;
static int8_t x294 = 1;
int64_t x296 = 5589200LL;
static uint32_t x306 = 5667159U;
int64_t x312 = -1LL;
static volatile int32_t t76 = -6305;
volatile int64_t x321 = INT64_MAX;
int16_t x324 = INT16_MIN;
int64_t x330 = INT64_MIN;
int16_t x332 = -1;
int32_t t81 = -773024;
uint16_t x337 = 8723U;
static volatile int32_t t83 = -4794436;
int32_t t84 = 818157;
int64_t x349 = -1LL;
static int8_t x351 = 24;
volatile int8_t x353 = -1;
uint16_t x354 = UINT16_MAX;
int32_t t86 = -521723;
int32_t x369 = -95001;
int32_t x374 = -274600;
int8_t x375 = INT8_MIN;
volatile int32_t t91 = 325914574;
uint64_t x392 = 8874LLU;
volatile uint64_t x396 = 26370180560LLU;
int32_t x398 = INT32_MIN;
uint8_t x400 = 0U;
static int32_t t97 = -6971;
uint64_t x402 = 273668LLU;
uint8_t x403 = 43U;
int16_t x404 = INT16_MAX;
int64_t t99 = INT64_MIN;
static int64_t x411 = -636929469484598251LL;
static int16_t x412 = INT16_MIN;
int8_t x421 = -1;
int8_t x424 = -1;
int8_t x427 = INT8_MIN;
uint64_t x429 = 1258011452220414LLU;
uint32_t t105 = UINT32_MAX;
volatile uint8_t x435 = 8U;
uint8_t x437 = 1U;
int16_t x441 = -211;
volatile int8_t x452 = INT8_MAX;
int8_t x454 = INT8_MAX;
int64_t x455 = 3605025675LL;
int16_t x465 = INT16_MIN;
int8_t x467 = -1;
static volatile int64_t x469 = INT64_MAX;
int32_t t117 = -75464;
int16_t x484 = INT16_MIN;
uint8_t x488 = 0U;
volatile int32_t x495 = 152;
volatile uint32_t t121 = UINT32_MAX;
static int8_t x508 = 0;
uint16_t x509 = UINT16_MAX;
static int8_t x512 = -1;
static volatile int32_t t125 = -40003867;
int8_t x516 = INT8_MIN;
volatile int8_t x524 = -1;
static volatile uint8_t x526 = 41U;
uint64_t x529 = 11635LLU;
volatile uint64_t x532 = 1129694175547363LLU;
static volatile int32_t x534 = INT32_MIN;
int32_t x537 = INT32_MIN;
int64_t x552 = -1LL;
int8_t x554 = -14;
int16_t x555 = INT16_MIN;
static volatile int32_t t136 = 103274576;
int64_t x564 = INT64_MIN;
int64_t t138 = INT64_MIN;
int64_t x565 = 52197240LL;
volatile int32_t t139 = 56553610;
int16_t x581 = INT16_MIN;
uint8_t x583 = 33U;
uint64_t x585 = 17698488088133098LLU;
static uint32_t x588 = 575153U;
uint64_t x591 = 8498811077LLU;
volatile int16_t x595 = 10936;
volatile uint8_t x602 = 2U;
volatile int8_t x603 = -30;
static int8_t x610 = INT8_MIN;
int16_t x612 = INT16_MAX;
volatile uint8_t x613 = 15U;
uint32_t x614 = UINT32_MAX;
int64_t x615 = 30119LL;
uint8_t x629 = UINT8_MAX;
volatile int8_t x630 = INT8_MIN;
int8_t x636 = INT8_MAX;
int64_t x637 = INT64_MIN;
volatile uint8_t x639 = 19U;
volatile int32_t t157 = 122904;
int32_t x642 = 16;
static volatile uint32_t t158 = 351966058U;
uint8_t x648 = 109U;
static volatile int64_t t161 = 193LL;
int64_t x657 = INT64_MIN;
int64_t x664 = INT64_MIN;
uint64_t x666 = 11784374126243LLU;
static uint64_t x667 = 0LLU;
volatile uint64_t x673 = 2739240LLU;
volatile int64_t x674 = -1LL;
volatile int16_t x677 = INT16_MAX;
int64_t x680 = INT64_MAX;
uint16_t x681 = UINT16_MAX;
uint8_t x683 = 65U;
volatile int64_t x688 = INT64_MAX;
static int16_t x692 = INT16_MAX;
int16_t x693 = INT16_MAX;
int16_t x695 = INT16_MIN;
int8_t x696 = -1;
volatile int8_t x697 = -1;
int32_t x701 = INT32_MIN;
volatile uint8_t x707 = 18U;
int16_t x710 = INT16_MIN;
volatile int16_t x712 = INT16_MIN;
int16_t x718 = 13443;
volatile int64_t x721 = -1LL;
int64_t x727 = INT64_MIN;
int32_t t179 = 1981;
volatile int32_t t180 = 47498;
int8_t x737 = INT8_MIN;
int32_t x739 = INT32_MIN;
volatile uint32_t x740 = 830948U;
static uint8_t x745 = 123U;
int64_t x748 = INT64_MIN;
volatile int64_t t184 = INT64_MIN;
uint16_t x754 = UINT16_MAX;
static int16_t x755 = -1;
static int32_t x760 = -1148;
volatile int64_t x769 = -1LL;
int64_t x774 = INT64_MIN;
static uint32_t x775 = 189060U;
int64_t x779 = INT64_MIN;
int8_t x781 = INT8_MIN;
volatile int32_t t194 = -9263;
uint8_t x791 = 60U;
volatile int32_t t196 = INT32_MAX;
int64_t x800 = -16193878934LL;
int64_t t197 = -173LL;
volatile uint32_t x802 = 318U;
static int16_t x803 = -1;
volatile uint16_t x806 = UINT16_MAX;
int16_t x807 = -1541;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	volatile int16_t x3 = -1;
	int16_t x4 = 20;
	static volatile int32_t t0 = 0;

    t0 = (((x1==x2)==x3)+x4);

    if (t0 != 20) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 7U;
	int16_t x7 = INT16_MAX;
	int32_t t1 = -876142;

    t1 = (((x5==x6)==x7)+x8);

    if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x10 = 232727208LL;
	static int64_t x11 = 46065LL;
	uint8_t x12 = UINT8_MAX;
	static int32_t t2 = 3;

    t2 = (((x9==x10)==x11)+x12);

    if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	int16_t x14 = INT16_MIN;
	int64_t x15 = INT64_MIN;
	volatile int64_t x16 = -1037610018875532LL;
	static int64_t t3 = 1550LL;

    t3 = (((x13==x14)==x15)+x16);

    if (t3 != -1037610018875532LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x17 = 14U;
	int8_t x18 = INT8_MIN;
	int32_t x19 = 537;
	static volatile int32_t x20 = INT32_MIN;
	int32_t t4 = INT32_MIN;

    t4 = (((x17==x18)==x19)+x20);

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x21 = UINT32_MAX;
	int64_t x22 = INT64_MIN;
	static int32_t x24 = INT32_MIN;

    t5 = (((x21==x22)==x23)+x24);

    if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	uint64_t x26 = 1007844897LLU;
	int8_t x27 = -51;
	int16_t x28 = INT16_MAX;

    t6 = (((x25==x26)==x27)+x28);

    if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	volatile uint64_t x30 = 728065146291658LLU;
	int8_t x31 = INT8_MIN;
	static volatile int32_t t7 = INT32_MIN;

    t7 = (((x29==x30)==x31)+x32);

    if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	volatile int64_t x34 = -1LL;
	int64_t x35 = INT64_MIN;
	uint64_t x36 = UINT64_MAX;
	static volatile uint64_t t8 = UINT64_MAX;

    t8 = (((x33==x34)==x35)+x36);

    if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	static volatile int16_t x38 = -3;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = -9570031;

    t9 = (((x37==x38)==x39)+x40);

    if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	int64_t x42 = -13LL;
	uint16_t x43 = UINT16_MAX;
	static int16_t x44 = INT16_MIN;
	static volatile int32_t t10 = 9;

    t10 = (((x41==x42)==x43)+x44);

    if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x46 = 38U;
	int16_t x48 = INT16_MIN;

    t11 = (((x45==x46)==x47)+x48);

    if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x50 = 206U;
	static int32_t x52 = -12471950;

    t12 = (((x49==x50)==x51)+x52);

    if (t12 != -12471950) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 127U;
	uint8_t x54 = 3U;
	int32_t x55 = INT32_MAX;
	static volatile int16_t x56 = -203;
	volatile int32_t t13 = 26;

    t13 = (((x53==x54)==x55)+x56);

    if (t13 != -203) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MAX;
	int32_t x59 = INT32_MIN;

    t14 = (((x57==x58)==x59)+x60);

    if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -13683;
	static uint64_t x62 = UINT64_MAX;
	uint32_t x63 = 643U;
	static int64_t t15 = INT64_MIN;

    t15 = (((x61==x62)==x63)+x64);

    if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = UINT64_MAX;
	volatile uint64_t x66 = 4102714405196125916LLU;
	uint16_t x67 = 23067U;
	int16_t x68 = INT16_MIN;
	static volatile int32_t t16 = 2;

    t16 = (((x65==x66)==x67)+x68);

    if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int8_t x69 = 1;
	int32_t x70 = -255;

    t17 = (((x69==x70)==x71)+x72);

    if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 29U;
	static int16_t x74 = -1;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t18 = 65383365;

    t18 = (((x73==x74)==x75)+x76);

    if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MAX;
	int64_t x79 = -30459470859LL;
	static int32_t x80 = INT32_MIN;

    t19 = (((x77==x78)==x79)+x80);

    if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x81 = 18573646897930033LL;
	static uint32_t x82 = 12U;
	int16_t x83 = -899;
	int32_t t20 = -9;

    t20 = (((x81==x82)==x83)+x84);

    if (t20 != 875) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	volatile int32_t x86 = -4;
	int64_t x87 = 4329754LL;
	static uint64_t x88 = 3921104LLU;

    t21 = (((x85==x86)==x87)+x88);

    if (t21 != 3921104LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x89 = 5U;
	int8_t x90 = 1;
	static int32_t x91 = INT32_MIN;
	volatile int16_t x92 = INT16_MIN;

    t22 = (((x89==x90)==x91)+x92);

    if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x93 = 78543U;
	int64_t x94 = -188557345385427LL;
	int8_t x95 = INT8_MAX;
	static volatile int8_t x96 = INT8_MIN;

    t23 = (((x93==x94)==x95)+x96);

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = -227436791430915LL;
	uint64_t x98 = 2682266818932LLU;
	int16_t x99 = INT16_MIN;
	int32_t x100 = -1;
	volatile int32_t t24 = -260655;

    t24 = (((x97==x98)==x99)+x100);

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = 44;
	int32_t x102 = -56981112;
	uint64_t x103 = 1865926304LLU;
	int8_t x104 = INT8_MIN;
	static int32_t t25 = -81;

    t25 = (((x101==x102)==x103)+x104);

    if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = 228005822LL;
	int8_t x108 = INT8_MIN;

    t26 = (((x105==x106)==x107)+x108);

    if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MAX;
	uint16_t x110 = 1431U;
	uint32_t x112 = 6U;
	uint32_t t27 = 24934662U;

    t27 = (((x109==x110)==x111)+x112);

    if (t27 != 6U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x114 = 422771LLU;
	int64_t x115 = INT64_MIN;
	uint64_t x116 = 620887336373LLU;

    t28 = (((x113==x114)==x115)+x116);

    if (t28 != 620887336373LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x117 = 62996U;
	volatile int8_t x118 = -1;
	volatile uint32_t x119 = UINT32_MAX;
	volatile int16_t x120 = -913;

    t29 = (((x117==x118)==x119)+x120);

    if (t29 != -913) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x122 = 8177550321711LLU;
	uint32_t x123 = 68020746U;
	int32_t x124 = -106;
	static volatile int32_t t30 = -38;

    t30 = (((x121==x122)==x123)+x124);

    if (t30 != -106) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint64_t x125 = 326309456309573LLU;
	volatile int16_t x127 = INT16_MIN;
	volatile int8_t x128 = INT8_MIN;

    t31 = (((x125==x126)==x127)+x128);

    if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = 23LL;
	int32_t x130 = 342046224;
	static volatile uint8_t x131 = UINT8_MAX;
	int64_t x132 = INT64_MIN;
	static int64_t t32 = INT64_MIN;

    t32 = (((x129==x130)==x131)+x132);

    if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MIN;
	int8_t x134 = -7;
	uint8_t x135 = 15U;
	static int64_t x136 = -6367LL;
	static int64_t t33 = -237593906LL;

    t33 = (((x133==x134)==x135)+x136);

    if (t33 != -6367LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 463116LLU;
	int64_t x138 = INT64_MAX;
	static volatile uint32_t x139 = 9U;
	static int32_t t34 = 0;

    t34 = (((x137==x138)==x139)+x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MAX;
	static int64_t x143 = -1506489297371LL;
	static uint8_t x144 = UINT8_MAX;
	static int32_t t35 = 22;

    t35 = (((x141==x142)==x143)+x144);

    if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x145 = 13995;
	int64_t x147 = -1LL;
	volatile uint8_t x148 = UINT8_MAX;
	static int32_t t36 = -48;

    t36 = (((x145==x146)==x147)+x148);

    if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -1LL;
	uint64_t x150 = 27921774073LLU;
	int64_t x152 = -1LL;
	volatile int64_t t37 = -68980029689003LL;

    t37 = (((x149==x150)==x151)+x152);

    if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = -1226;
	int8_t x154 = INT8_MIN;
	int8_t x155 = INT8_MIN;
	uint64_t x156 = UINT64_MAX;

    t38 = (((x153==x154)==x155)+x156);

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = 1924109LL;
	int16_t x158 = -1;
	uint32_t x159 = 42039U;
	uint8_t x160 = 5U;
	volatile int32_t t39 = -3736887;

    t39 = (((x157==x158)==x159)+x160);

    if (t39 != 5) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = 1555U;
	uint32_t x162 = 884265086U;
	volatile uint8_t x163 = 58U;
	volatile int8_t x164 = INT8_MIN;
	static volatile int32_t t40 = 30199523;

    t40 = (((x161==x162)==x163)+x164);

    if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x165 = -1;
	int16_t x166 = INT16_MAX;
	int8_t x167 = -56;
	int8_t x168 = -1;
	volatile int32_t t41 = 4485136;

    t41 = (((x165==x166)==x167)+x168);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint16_t x169 = 102U;
	volatile uint16_t x171 = 12752U;
	int32_t x172 = INT32_MIN;
	int32_t t42 = INT32_MIN;

    t42 = (((x169==x170)==x171)+x172);

    if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x174 = UINT32_MAX;
	uint8_t x175 = UINT8_MAX;
	static int8_t x176 = -1;
	volatile int32_t t43 = -43567736;

    t43 = (((x173==x174)==x175)+x176);

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MIN;
	volatile uint8_t x178 = 36U;
	uint64_t x179 = UINT64_MAX;
	int16_t x180 = 1;
	int32_t t44 = -8157592;

    t44 = (((x177==x178)==x179)+x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x181 = 7U;
	int64_t x183 = INT64_MIN;
	int8_t x184 = 40;
	int32_t t45 = 180699661;

    t45 = (((x181==x182)==x183)+x184);

    if (t45 != 40) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x186 = INT8_MAX;
	static int16_t x187 = INT16_MIN;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t46 = -673789;

    t46 = (((x185==x186)==x187)+x188);

    if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x189 = 123888586U;
	int8_t x190 = INT8_MAX;
	uint32_t x191 = 183571U;
	static uint32_t t47 = 1037018U;

    t47 = (((x189==x190)==x191)+x192);

    if (t47 != 113U) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x193 = INT32_MAX;
	static int8_t x194 = -1;
	uint64_t x195 = 242268LLU;
	int32_t t48 = 26;

    t48 = (((x193==x194)==x195)+x196);

    if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = 8;
	int64_t x198 = INT64_MIN;
	volatile int16_t x199 = INT16_MAX;
	int16_t x200 = INT16_MIN;
	volatile int32_t t49 = -165893;

    t49 = (((x197==x198)==x199)+x200);

    if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = UINT64_MAX;
	static volatile int8_t x202 = -3;
	int8_t x203 = INT8_MIN;
	int32_t x204 = -383662;
	int32_t t50 = 389755;

    t50 = (((x201==x202)==x203)+x204);

    if (t50 != -383662) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x206 = INT32_MIN;
	int8_t x208 = INT8_MAX;

    t51 = (((x205==x206)==x207)+x208);

    if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x209 = INT8_MIN;
	uint8_t x210 = 9U;
	static int64_t x211 = INT64_MAX;
	static uint16_t x212 = 17U;
	int32_t t52 = -455546;

    t52 = (((x209==x210)==x211)+x212);

    if (t52 != 17) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = 301LLU;
	int8_t x214 = 2;
	int64_t x216 = INT64_MAX;

    t53 = (((x213==x214)==x215)+x216);

    if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 3LLU;
	uint32_t x220 = UINT32_MAX;
	volatile uint32_t t54 = UINT32_MAX;

    t54 = (((x217==x218)==x219)+x220);

    if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 5458003U;
	static int16_t x222 = INT16_MIN;
	volatile uint32_t x223 = UINT32_MAX;
	uint32_t x224 = 89298U;
	static volatile uint32_t t55 = 1060524033U;

    t55 = (((x221==x222)==x223)+x224);

    if (t55 != 89298U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = UINT64_MAX;
	static int16_t x226 = 99;
	uint32_t x228 = 47U;
	uint32_t t56 = 2617294U;

    t56 = (((x225==x226)==x227)+x228);

    if (t56 != 47U) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x229 = INT16_MIN;
	int32_t x230 = 41124;
	int8_t x231 = INT8_MAX;
	volatile int64_t x232 = 961034388313556LL;
	static int64_t t57 = -222254010739808LL;

    t57 = (((x229==x230)==x231)+x232);

    if (t57 != 961034388313556LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x233 = 156969U;
	static int32_t x234 = INT32_MAX;
	uint64_t x235 = 87096239310LLU;
	uint16_t x236 = 943U;

    t58 = (((x233==x234)==x235)+x236);

    if (t58 != 943) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = 3568982856464589LL;
	int32_t x239 = INT32_MIN;
	volatile int16_t x240 = INT16_MIN;
	volatile int32_t t59 = -139;

    t59 = (((x237==x238)==x239)+x240);

    if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MAX;
	int64_t x242 = INT64_MAX;
	volatile int8_t x244 = INT8_MIN;
	static volatile int32_t t60 = -13467;

    t60 = (((x241==x242)==x243)+x244);

    if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -923594300;
	int8_t x246 = -1;
	static volatile uint8_t x247 = UINT8_MAX;
	uint8_t x248 = UINT8_MAX;
	static int32_t t61 = 676216975;

    t61 = (((x245==x246)==x247)+x248);

    if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x249 = INT32_MAX;
	static int8_t x252 = INT8_MAX;
	int32_t t62 = -132955;

    t62 = (((x249==x250)==x251)+x252);

    if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint32_t x253 = UINT32_MAX;
	int64_t x256 = -52062602277449LL;
	int64_t t63 = 589485796403LL;

    t63 = (((x253==x254)==x255)+x256);

    if (t63 != -52062602277448LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 313486923U;
	int16_t x258 = INT16_MIN;
	static uint32_t x259 = 88901U;
	volatile uint64_t t64 = UINT64_MAX;

    t64 = (((x257==x258)==x259)+x260);

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x266 = 6139;
	static int32_t x268 = 11361671;
	static int32_t t65 = 326;

    t65 = (((x265==x266)==x267)+x268);

    if (t65 != 11361671) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x269 = -116;
	int32_t x270 = -47637;
	int32_t x271 = INT32_MAX;
	int64_t t66 = -14367320LL;

    t66 = (((x269==x270)==x271)+x272);

    if (t66 != 1001771LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x277 = INT16_MIN;
	uint64_t x278 = 8853192LLU;
	int64_t x279 = 59LL;
	int8_t x280 = 0;
	volatile int32_t t67 = -5;

    t67 = (((x277==x278)==x279)+x280);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x281 = -1;
	int32_t x282 = -163;
	static int32_t x283 = INT32_MAX;
	volatile uint64_t x284 = UINT64_MAX;
	uint64_t t68 = UINT64_MAX;

    t68 = (((x281==x282)==x283)+x284);

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x287 = -15193;
	int32_t x288 = INT32_MAX;
	int32_t t69 = INT32_MAX;

    t69 = (((x285==x286)==x287)+x288);

    if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x289 = 30011000LL;
	int8_t x290 = 6;
	static volatile int64_t x292 = INT64_MIN;
	volatile int64_t t70 = INT64_MIN;

    t70 = (((x289==x290)==x291)+x292);

    if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x293 = -1;
	int64_t x295 = 3452552LL;
	int64_t t71 = -118601LL;

    t71 = (((x293==x294)==x295)+x296);

    if (t71 != 5589200LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x297 = INT32_MAX;
	uint8_t x298 = UINT8_MAX;
	static int32_t x299 = INT32_MIN;
	int8_t x300 = 1;
	int32_t t72 = 23;

    t72 = (((x297==x298)==x299)+x300);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x301 = UINT16_MAX;
	int16_t x302 = -1;
	uint16_t x303 = 11412U;
	uint8_t x304 = 0U;
	volatile int32_t t73 = -93914;

    t73 = (((x301==x302)==x303)+x304);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x305 = -377;
	volatile uint32_t x307 = 1U;
	static volatile int8_t x308 = INT8_MAX;
	int32_t t74 = 4301;

    t74 = (((x305==x306)==x307)+x308);

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x309 = 97;
	int16_t x310 = INT16_MAX;
	volatile int8_t x311 = INT8_MAX;
	static volatile int64_t t75 = 28243LL;

    t75 = (((x309==x310)==x311)+x312);

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x313 = UINT16_MAX;
	uint64_t x314 = UINT64_MAX;
	uint32_t x315 = 969682U;
	uint16_t x316 = UINT16_MAX;

    t76 = (((x313==x314)==x315)+x316);

    if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x317 = -7974;
	uint64_t x318 = UINT64_MAX;
	int16_t x319 = INT16_MIN;
	uint32_t x320 = 1970431U;
	volatile uint32_t t77 = 465766486U;

    t77 = (((x317==x318)==x319)+x320);

    if (t77 != 1970431U) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x322 = 1;
	volatile uint32_t x323 = UINT32_MAX;
	volatile int32_t t78 = 1099688;

    t78 = (((x321==x322)==x323)+x324);

    if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x325 = INT16_MIN;
	volatile int16_t x326 = INT16_MIN;
	uint32_t x327 = 2321U;
	int32_t x328 = INT32_MIN;
	int32_t t79 = INT32_MIN;

    t79 = (((x325==x326)==x327)+x328);

    if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x329 = INT16_MIN;
	int16_t x331 = -1;
	int32_t t80 = 603;

    t80 = (((x329==x330)==x331)+x332);

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x333 = 1U;
	int16_t x334 = INT16_MIN;
	int64_t x335 = -1LL;
	int16_t x336 = 1;

    t81 = (((x333==x334)==x335)+x336);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x338 = UINT32_MAX;
	uint64_t x339 = 34782748198759LLU;
	int32_t x340 = -1;
	volatile int32_t t82 = -4774744;

    t82 = (((x337==x338)==x339)+x340);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x341 = INT32_MIN;
	int64_t x342 = 521927268LL;
	uint64_t x343 = 1LLU;
	int16_t x344 = 66;

    t83 = (((x341==x342)==x343)+x344);

    if (t83 != 66) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x345 = -1;
	int8_t x346 = INT8_MAX;
	uint32_t x347 = 13U;
	uint16_t x348 = 4U;

    t84 = (((x345==x346)==x347)+x348);

    if (t84 != 4) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int64_t x350 = INT64_MAX;
	static uint64_t x352 = 7LLU;
	volatile uint64_t t85 = 103335059657LLU;

    t85 = (((x349==x350)==x351)+x352);

    if (t85 != 7LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x355 = 13603;
	int16_t x356 = 0;

    t86 = (((x353==x354)==x355)+x356);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x357 = INT16_MIN;
	static int8_t x358 = INT8_MAX;
	int64_t x359 = -1LL;
	static uint8_t x360 = 1U;
	volatile int32_t t87 = -312204;

    t87 = (((x357==x358)==x359)+x360);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x361 = UINT8_MAX;
	uint8_t x362 = UINT8_MAX;
	int8_t x363 = 3;
	int8_t x364 = -1;
	int32_t t88 = 9091;

    t88 = (((x361==x362)==x363)+x364);

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x365 = -1;
	int8_t x366 = -1;
	static volatile uint64_t x367 = 63127729LLU;
	volatile int32_t x368 = INT32_MIN;
	int32_t t89 = INT32_MIN;

    t89 = (((x365==x366)==x367)+x368);

    if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x370 = -1;
	uint8_t x371 = UINT8_MAX;
	static volatile int64_t x372 = INT64_MIN;
	volatile int64_t t90 = INT64_MIN;

    t90 = (((x369==x370)==x371)+x372);

    if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x373 = INT32_MAX;
	volatile int8_t x376 = 0;

    t91 = (((x373==x374)==x375)+x376);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x377 = 751U;
	uint64_t x378 = 1180673132673537457LLU;
	static uint8_t x379 = 11U;
	static int8_t x380 = 1;
	volatile int32_t t92 = 13865405;

    t92 = (((x377==x378)==x379)+x380);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x381 = INT16_MIN;
	static int64_t x382 = INT64_MIN;
	int32_t x383 = -2587;
	volatile int64_t x384 = INT64_MIN;
	int64_t t93 = INT64_MIN;

    t93 = (((x381==x382)==x383)+x384);

    if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x385 = 903734958247810LLU;
	int32_t x386 = 4507;
	int64_t x387 = -1LL;
	volatile uint64_t x388 = UINT64_MAX;
	volatile uint64_t t94 = UINT64_MAX;

    t94 = (((x385==x386)==x387)+x388);

    if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x389 = 2407U;
	int16_t x390 = -1;
	int8_t x391 = INT8_MIN;
	volatile uint64_t t95 = 17221045121465381LLU;

    t95 = (((x389==x390)==x391)+x392);

    if (t95 != 8874LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x393 = -1;
	uint64_t x394 = 72LLU;
	int64_t x395 = -1LL;
	static volatile uint64_t t96 = 103665027584877872LLU;

    t96 = (((x393==x394)==x395)+x396);

    if (t96 != 26370180560LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int8_t x397 = 11;
	volatile int32_t x399 = INT32_MIN;

    t97 = (((x397==x398)==x399)+x400);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x401 = -2363;
	int32_t t98 = -704657383;

    t98 = (((x401==x402)==x403)+x404);

    if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x405 = INT64_MIN;
	int32_t x406 = -1;
	volatile int32_t x407 = INT32_MIN;
	int64_t x408 = INT64_MIN;

    t99 = (((x405==x406)==x407)+x408);

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x409 = -1;
	int32_t x410 = -264;
	volatile int32_t t100 = -227;

    t100 = (((x409==x410)==x411)+x412);

    if (t100 != -32768) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x413 = UINT16_MAX;
	int8_t x414 = INT8_MIN;
	uint64_t x415 = 89564613200LLU;
	volatile int8_t x416 = INT8_MIN;
	volatile int32_t t101 = 996694;

    t101 = (((x413==x414)==x415)+x416);

    if (t101 != -128) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x417 = 1854U;
	int16_t x418 = INT16_MAX;
	int64_t x419 = INT64_MIN;
	int32_t x420 = INT32_MIN;
	volatile int32_t t102 = INT32_MIN;

    t102 = (((x417==x418)==x419)+x420);

    if (t102 != INT32_MIN) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x422 = INT16_MAX;
	static int32_t x423 = 199036;
	volatile int32_t t103 = -15324283;

    t103 = (((x421==x422)==x423)+x424);

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x425 = -1;
	volatile int8_t x426 = 1;
	int64_t x428 = 23973LL;
	static int64_t t104 = 902166899000346LL;

    t104 = (((x425==x426)==x427)+x428);

    if (t104 != 23973LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x430 = -1;
	static int16_t x431 = 192;
	uint32_t x432 = UINT32_MAX;

    t105 = (((x429==x430)==x431)+x432);

    if (t105 != UINT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x433 = -3034LL;
	int8_t x434 = INT8_MIN;
	static int8_t x436 = 0;
	int32_t t106 = -1;

    t106 = (((x433==x434)==x435)+x436);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x438 = 1;
	int8_t x439 = INT8_MAX;
	uint8_t x440 = 15U;
	volatile int32_t t107 = 80;

    t107 = (((x437==x438)==x439)+x440);

    if (t107 != 15) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x442 = INT8_MIN;
	volatile uint8_t x443 = 26U;
	static volatile uint8_t x444 = 13U;
	static int32_t t108 = 2441;

    t108 = (((x441==x442)==x443)+x444);

    if (t108 != 13) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x445 = INT64_MIN;
	static volatile int16_t x446 = -1;
	static volatile int16_t x447 = INT16_MIN;
	uint16_t x448 = UINT16_MAX;
	volatile int32_t t109 = -1;

    t109 = (((x445==x446)==x447)+x448);

    if (t109 != 65535) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x449 = 200604536958076149LLU;
	int8_t x450 = INT8_MIN;
	int16_t x451 = 1185;
	static int32_t t110 = 41;

    t110 = (((x449==x450)==x451)+x452);

    if (t110 != 127) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x453 = -59500513851778810LL;
	static uint64_t x456 = 959128970659LLU;
	uint64_t t111 = 56LLU;

    t111 = (((x453==x454)==x455)+x456);

    if (t111 != 959128970659LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x457 = UINT64_MAX;
	static int16_t x458 = -566;
	int32_t x459 = 149;
	int16_t x460 = INT16_MIN;
	static volatile int32_t t112 = 186915;

    t112 = (((x457==x458)==x459)+x460);

    if (t112 != -32768) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x461 = INT64_MIN;
	int64_t x462 = 3158877098123457LL;
	uint8_t x463 = 52U;
	volatile int8_t x464 = -1;
	static int32_t t113 = -6536;

    t113 = (((x461==x462)==x463)+x464);

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x466 = 57U;
	int64_t x468 = INT64_MIN;
	volatile int64_t t114 = INT64_MIN;

    t114 = (((x465==x466)==x467)+x468);

    if (t114 != INT64_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x470 = 122U;
	static int16_t x471 = 502;
	uint32_t x472 = 14107867U;
	uint32_t t115 = 170225283U;

    t115 = (((x469==x470)==x471)+x472);

    if (t115 != 14107867U) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x473 = INT32_MIN;
	volatile int16_t x474 = INT16_MIN;
	int32_t x475 = -2088;
	uint16_t x476 = 7116U;
	int32_t t116 = -32193;

    t116 = (((x473==x474)==x475)+x476);

    if (t116 != 7116) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint64_t x477 = UINT64_MAX;
	int64_t x478 = INT64_MIN;
	int64_t x479 = -1LL;
	static volatile uint16_t x480 = 105U;

    t117 = (((x477==x478)==x479)+x480);

    if (t117 != 105) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x481 = INT32_MIN;
	uint64_t x482 = UINT64_MAX;
	int32_t x483 = INT32_MIN;
	int32_t t118 = 43;

    t118 = (((x481==x482)==x483)+x484);

    if (t118 != -32768) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x485 = UINT16_MAX;
	volatile uint64_t x486 = UINT64_MAX;
	int8_t x487 = -1;
	volatile int32_t t119 = 90197584;

    t119 = (((x485==x486)==x487)+x488);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int64_t x489 = -2745486LL;
	static int8_t x490 = -1;
	int8_t x491 = 1;
	volatile int8_t x492 = INT8_MIN;
	volatile int32_t t120 = 3364;

    t120 = (((x489==x490)==x491)+x492);

    if (t120 != -128) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x493 = INT64_MIN;
	int16_t x494 = 7834;
	uint32_t x496 = UINT32_MAX;

    t121 = (((x493==x494)==x495)+x496);

    if (t121 != UINT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x497 = UINT32_MAX;
	uint8_t x498 = 80U;
	int16_t x499 = INT16_MIN;
	static volatile int32_t x500 = 305;
	static int32_t t122 = 27718696;

    t122 = (((x497==x498)==x499)+x500);

    if (t122 != 305) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x501 = 64395411;
	int32_t x502 = -1;
	static int32_t x503 = INT32_MIN;
	int32_t x504 = -1;
	volatile int32_t t123 = 16031763;

    t123 = (((x501==x502)==x503)+x504);

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x505 = INT16_MIN;
	int8_t x506 = -1;
	static int8_t x507 = -1;
	volatile int32_t t124 = 6;

    t124 = (((x505==x506)==x507)+x508);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x510 = UINT64_MAX;
	uint16_t x511 = 0U;

    t125 = (((x509==x510)==x511)+x512);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x513 = 337000431845675159LL;
	uint32_t x514 = UINT32_MAX;
	volatile int32_t x515 = -1;
	volatile int32_t t126 = 1622402;

    t126 = (((x513==x514)==x515)+x516);

    if (t126 != -128) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x517 = -1;
	volatile int64_t x518 = INT64_MIN;
	uint32_t x519 = 220274170U;
	volatile int8_t x520 = -1;
	int32_t t127 = -17;

    t127 = (((x517==x518)==x519)+x520);

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x521 = -27;
	volatile uint64_t x522 = 453067LLU;
	volatile int64_t x523 = 74LL;
	int32_t t128 = -47181;

    t128 = (((x521==x522)==x523)+x524);

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x525 = 9;
	int64_t x527 = -6235261LL;
	int8_t x528 = -1;
	volatile int32_t t129 = 315626329;

    t129 = (((x525==x526)==x527)+x528);

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint8_t x530 = 0U;
	int8_t x531 = INT8_MIN;
	uint64_t t130 = 1087384080272531543LLU;

    t130 = (((x529==x530)==x531)+x532);

    if (t130 != 1129694175547363LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x533 = -1;
	static volatile int64_t x535 = INT64_MIN;
	int64_t x536 = 679106408LL;
	int64_t t131 = 36932847LL;

    t131 = (((x533==x534)==x535)+x536);

    if (t131 != 679106408LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int64_t x538 = INT64_MIN;
	uint16_t x539 = 461U;
	volatile int64_t x540 = INT64_MAX;
	int64_t t132 = INT64_MAX;

    t132 = (((x537==x538)==x539)+x540);

    if (t132 != INT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x541 = 69637803696LL;
	static volatile int8_t x542 = 1;
	int64_t x543 = INT64_MIN;
	int32_t x544 = INT32_MIN;
	static int32_t t133 = INT32_MIN;

    t133 = (((x541==x542)==x543)+x544);

    if (t133 != INT32_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x545 = -1LL;
	volatile int16_t x546 = INT16_MAX;
	static int16_t x547 = INT16_MIN;
	int16_t x548 = -7;
	int32_t t134 = -1;

    t134 = (((x545==x546)==x547)+x548);

    if (t134 != -7) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x549 = 27U;
	static int16_t x550 = INT16_MAX;
	uint8_t x551 = UINT8_MAX;
	volatile int64_t t135 = 3244651LL;

    t135 = (((x549==x550)==x551)+x552);

    if (t135 != -1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x553 = INT32_MAX;
	uint8_t x556 = 2U;

    t136 = (((x553==x554)==x555)+x556);

    if (t136 != 2) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x557 = -1;
	uint8_t x558 = 1U;
	uint8_t x559 = UINT8_MAX;
	static volatile uint32_t x560 = UINT32_MAX;
	uint32_t t137 = UINT32_MAX;

    t137 = (((x557==x558)==x559)+x560);

    if (t137 != UINT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x561 = INT8_MIN;
	volatile uint32_t x562 = 2828471U;
	uint32_t x563 = 3U;

    t138 = (((x561==x562)==x563)+x564);

    if (t138 != INT64_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x566 = -21054;
	volatile uint32_t x567 = 28782U;
	uint8_t x568 = 3U;

    t139 = (((x565==x566)==x567)+x568);

    if (t139 != 3) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x569 = UINT32_MAX;
	int32_t x570 = 715;
	int8_t x571 = INT8_MIN;
	int8_t x572 = INT8_MIN;
	static int32_t t140 = -3089082;

    t140 = (((x569==x570)==x571)+x572);

    if (t140 != -128) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x573 = 31U;
	int16_t x574 = INT16_MAX;
	int8_t x575 = INT8_MIN;
	int16_t x576 = INT16_MAX;
	int32_t t141 = -95;

    t141 = (((x573==x574)==x575)+x576);

    if (t141 != 32767) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x577 = -1;
	int64_t x578 = INT64_MIN;
	int32_t x579 = INT32_MIN;
	static int16_t x580 = INT16_MIN;
	static int32_t t142 = -2612;

    t142 = (((x577==x578)==x579)+x580);

    if (t142 != -32768) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x582 = -1;
	int64_t x584 = INT64_MAX;
	volatile int64_t t143 = INT64_MAX;

    t143 = (((x581==x582)==x583)+x584);

    if (t143 != INT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x586 = INT8_MIN;
	static int64_t x587 = INT64_MIN;
	uint32_t t144 = 29010602U;

    t144 = (((x585==x586)==x587)+x588);

    if (t144 != 575153U) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x589 = 979;
	uint64_t x590 = 226718701LLU;
	static uint64_t x592 = UINT64_MAX;
	uint64_t t145 = UINT64_MAX;

    t145 = (((x589==x590)==x591)+x592);

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x593 = INT16_MIN;
	volatile int16_t x594 = -1;
	volatile int64_t x596 = -1LL;
	static volatile int64_t t146 = -85LL;

    t146 = (((x593==x594)==x595)+x596);

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x597 = INT8_MIN;
	static int64_t x598 = -1LL;
	static int8_t x599 = -1;
	volatile int64_t x600 = INT64_MAX;
	volatile int64_t t147 = INT64_MAX;

    t147 = (((x597==x598)==x599)+x600);

    if (t147 != INT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x601 = -1;
	volatile int32_t x604 = INT32_MAX;
	int32_t t148 = INT32_MAX;

    t148 = (((x601==x602)==x603)+x604);

    if (t148 != INT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x605 = -1;
	int8_t x606 = -12;
	static int64_t x607 = INT64_MIN;
	static int8_t x608 = INT8_MIN;
	int32_t t149 = 260431664;

    t149 = (((x605==x606)==x607)+x608);

    if (t149 != -128) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x609 = 451074676U;
	static int16_t x611 = INT16_MIN;
	volatile int32_t t150 = -6;

    t150 = (((x609==x610)==x611)+x612);

    if (t150 != 32767) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x616 = INT8_MIN;
	static int32_t t151 = 183;

    t151 = (((x613==x614)==x615)+x616);

    if (t151 != -128) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x617 = -1;
	int32_t x618 = INT32_MIN;
	volatile int64_t x619 = 88042495LL;
	int8_t x620 = INT8_MIN;
	int32_t t152 = 6070529;

    t152 = (((x617==x618)==x619)+x620);

    if (t152 != -128) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x621 = INT32_MAX;
	static int8_t x622 = -12;
	int16_t x623 = INT16_MAX;
	uint8_t x624 = 1U;
	int32_t t153 = 0;

    t153 = (((x621==x622)==x623)+x624);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x625 = 240251673536695395LL;
	uint32_t x626 = UINT32_MAX;
	volatile int32_t x627 = 12573;
	int32_t x628 = INT32_MIN;
	int32_t t154 = INT32_MIN;

    t154 = (((x625==x626)==x627)+x628);

    if (t154 != INT32_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint32_t x631 = UINT32_MAX;
	volatile uint16_t x632 = 2939U;
	int32_t t155 = 0;

    t155 = (((x629==x630)==x631)+x632);

    if (t155 != 2939) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x633 = 58786591818LL;
	int64_t x634 = INT64_MIN;
	static uint64_t x635 = 2LLU;
	static int32_t t156 = 124909;

    t156 = (((x633==x634)==x635)+x636);

    if (t156 != 127) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x638 = 449290028U;
	volatile int8_t x640 = INT8_MAX;

    t157 = (((x637==x638)==x639)+x640);

    if (t157 != 127) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x641 = INT64_MAX;
	static int32_t x643 = INT32_MIN;
	volatile uint32_t x644 = 17350U;

    t158 = (((x641==x642)==x643)+x644);

    if (t158 != 17350U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x645 = UINT32_MAX;
	volatile int32_t x646 = INT32_MIN;
	int16_t x647 = INT16_MIN;
	static volatile int32_t t159 = -42679;

    t159 = (((x645==x646)==x647)+x648);

    if (t159 != 109) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int8_t x649 = -4;
	int16_t x650 = INT16_MAX;
	static volatile int32_t x651 = INT32_MAX;
	static uint64_t x652 = 21666LLU;
	volatile uint64_t t160 = 69535LLU;

    t160 = (((x649==x650)==x651)+x652);

    if (t160 != 21666LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x653 = INT32_MIN;
	uint32_t x654 = 4404536U;
	uint32_t x655 = 3122739U;
	static volatile int64_t x656 = -1LL;

    t161 = (((x653==x654)==x655)+x656);

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x658 = UINT32_MAX;
	volatile int64_t x659 = INT64_MIN;
	static int32_t x660 = INT32_MIN;
	volatile int32_t t162 = INT32_MIN;

    t162 = (((x657==x658)==x659)+x660);

    if (t162 != INT32_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x661 = INT64_MIN;
	volatile uint8_t x662 = 11U;
	uint32_t x663 = UINT32_MAX;
	static volatile int64_t t163 = INT64_MIN;

    t163 = (((x661==x662)==x663)+x664);

    if (t163 != INT64_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x665 = -58114014153LL;
	uint16_t x668 = UINT16_MAX;
	volatile int32_t t164 = 14;

    t164 = (((x665==x666)==x667)+x668);

    if (t164 != 65536) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x669 = 1249693LL;
	volatile uint32_t x670 = UINT32_MAX;
	volatile uint8_t x671 = 3U;
	static int8_t x672 = 43;
	int32_t t165 = -30707467;

    t165 = (((x669==x670)==x671)+x672);

    if (t165 != 43) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x675 = -1;
	static int64_t x676 = INT64_MAX;
	static int64_t t166 = INT64_MAX;

    t166 = (((x673==x674)==x675)+x676);

    if (t166 != INT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x678 = INT64_MIN;
	uint8_t x679 = UINT8_MAX;
	static volatile int64_t t167 = INT64_MAX;

    t167 = (((x677==x678)==x679)+x680);

    if (t167 != INT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x682 = INT16_MIN;
	uint16_t x684 = UINT16_MAX;
	volatile int32_t t168 = -404395518;

    t168 = (((x681==x682)==x683)+x684);

    if (t168 != 65535) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x685 = UINT32_MAX;
	static uint16_t x686 = 13U;
	uint32_t x687 = 16987U;
	volatile int64_t t169 = INT64_MAX;

    t169 = (((x685==x686)==x687)+x688);

    if (t169 != INT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x689 = UINT64_MAX;
	int8_t x690 = 0;
	static int32_t x691 = -1;
	int32_t t170 = 3377;

    t170 = (((x689==x690)==x691)+x692);

    if (t170 != 32767) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x694 = INT64_MAX;
	volatile int32_t t171 = 950758139;

    t171 = (((x693==x694)==x695)+x696);

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int8_t x698 = INT8_MIN;
	int16_t x699 = INT16_MIN;
	static int16_t x700 = INT16_MIN;
	volatile int32_t t172 = 2;

    t172 = (((x697==x698)==x699)+x700);

    if (t172 != -32768) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x702 = -1;
	static int8_t x703 = INT8_MIN;
	uint16_t x704 = UINT16_MAX;
	int32_t t173 = 3;

    t173 = (((x701==x702)==x703)+x704);

    if (t173 != 65535) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x705 = -1;
	static volatile uint32_t x706 = 3U;
	int64_t x708 = 12998190169928961LL;
	int64_t t174 = 1337438339885535964LL;

    t174 = (((x705==x706)==x707)+x708);

    if (t174 != 12998190169928961LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x709 = 2U;
	int64_t x711 = INT64_MIN;
	int32_t t175 = -5972;

    t175 = (((x709==x710)==x711)+x712);

    if (t175 != -32768) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x713 = UINT32_MAX;
	static uint8_t x714 = UINT8_MAX;
	uint8_t x715 = UINT8_MAX;
	int16_t x716 = -1;
	int32_t t176 = -4;

    t176 = (((x713==x714)==x715)+x716);

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x717 = INT8_MIN;
	int8_t x719 = INT8_MIN;
	volatile int64_t x720 = -1LL;
	static volatile int64_t t177 = 85544LL;

    t177 = (((x717==x718)==x719)+x720);

    if (t177 != -1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x722 = 57U;
	volatile int8_t x723 = -1;
	uint64_t x724 = 106LLU;
	volatile uint64_t t178 = 3026LLU;

    t178 = (((x721==x722)==x723)+x724);

    if (t178 != 106LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x725 = UINT8_MAX;
	static int8_t x726 = -1;
	volatile int16_t x728 = INT16_MIN;

    t179 = (((x725==x726)==x727)+x728);

    if (t179 != -32768) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x729 = 7U;
	static int16_t x730 = INT16_MIN;
	uint64_t x731 = 1219312670620892565LLU;
	int16_t x732 = -1;

    t180 = (((x729==x730)==x731)+x732);

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x733 = 2327;
	int8_t x734 = -1;
	static uint8_t x735 = 1U;
	static int64_t x736 = 20949LL;
	int64_t t181 = -1LL;

    t181 = (((x733==x734)==x735)+x736);

    if (t181 != 20949LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x738 = 114U;
	volatile uint32_t t182 = 408U;

    t182 = (((x737==x738)==x739)+x740);

    if (t182 != 830948U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x741 = 2100959933318LLU;
	static uint32_t x742 = UINT32_MAX;
	volatile int8_t x743 = -1;
	static uint16_t x744 = 6685U;
	volatile int32_t t183 = -1259502;

    t183 = (((x741==x742)==x743)+x744);

    if (t183 != 6685) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x746 = 1186U;
	int16_t x747 = INT16_MIN;

    t184 = (((x745==x746)==x747)+x748);

    if (t184 != INT64_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x749 = 0U;
	volatile int8_t x750 = 52;
	static uint32_t x751 = UINT32_MAX;
	uint16_t x752 = 135U;
	static int32_t t185 = 30118664;

    t185 = (((x749==x750)==x751)+x752);

    if (t185 != 135) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x753 = -1;
	static volatile int64_t x756 = INT64_MAX;
	int64_t t186 = INT64_MAX;

    t186 = (((x753==x754)==x755)+x756);

    if (t186 != INT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x757 = 1887990U;
	uint64_t x758 = 25796208LLU;
	int32_t x759 = INT32_MIN;
	int32_t t187 = -575562594;

    t187 = (((x757==x758)==x759)+x760);

    if (t187 != -1148) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x761 = 431U;
	static int16_t x762 = 4;
	volatile uint64_t x763 = UINT64_MAX;
	static uint8_t x764 = 2U;
	int32_t t188 = 2822;

    t188 = (((x761==x762)==x763)+x764);

    if (t188 != 2) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x765 = INT8_MAX;
	int8_t x766 = 0;
	static uint64_t x767 = 127376137110760LLU;
	uint8_t x768 = 1U;
	volatile int32_t t189 = -3360864;

    t189 = (((x765==x766)==x767)+x768);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x770 = INT32_MIN;
	int8_t x771 = INT8_MAX;
	int64_t x772 = 1799313LL;
	static int64_t t190 = -11079123LL;

    t190 = (((x769==x770)==x771)+x772);

    if (t190 != 1799313LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x773 = INT32_MIN;
	static uint64_t x776 = UINT64_MAX;
	uint64_t t191 = UINT64_MAX;

    t191 = (((x773==x774)==x775)+x776);

    if (t191 != UINT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x777 = INT16_MIN;
	static int64_t x778 = INT64_MIN;
	static int64_t x780 = INT64_MIN;
	int64_t t192 = INT64_MIN;

    t192 = (((x777==x778)==x779)+x780);

    if (t192 != INT64_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x782 = -220758044;
	uint32_t x783 = 47986284U;
	uint8_t x784 = UINT8_MAX;
	static volatile int32_t t193 = -4014;

    t193 = (((x781==x782)==x783)+x784);

    if (t193 != 255) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x785 = 8U;
	int32_t x786 = 56407;
	int64_t x787 = INT64_MAX;
	int32_t x788 = -1;

    t194 = (((x785==x786)==x787)+x788);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x789 = -1;
	volatile uint32_t x790 = 949U;
	int8_t x792 = -1;
	int32_t t195 = -7369294;

    t195 = (((x789==x790)==x791)+x792);

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x793 = INT32_MIN;
	int32_t x794 = -43910711;
	volatile int16_t x795 = INT16_MIN;
	int32_t x796 = INT32_MAX;

    t196 = (((x793==x794)==x795)+x796);

    if (t196 != INT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x797 = 104U;
	volatile uint8_t x798 = UINT8_MAX;
	int32_t x799 = 117178064;

    t197 = (((x797==x798)==x799)+x800);

    if (t197 != -16193878934LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x801 = INT16_MIN;
	int64_t x804 = INT64_MIN;
	volatile int64_t t198 = INT64_MIN;

    t198 = (((x801==x802)==x803)+x804);

    if (t198 != INT64_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x805 = INT16_MIN;
	volatile int16_t x808 = INT16_MAX;
	int32_t t199 = 128285889;

    t199 = (((x805==x806)==x807)+x808);

    if (t199 != 32767) { NG(); } else { ; }
	
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



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

static int8_t x11 = 3;
uint16_t x14 = 3U;
int32_t t1 = 613551645;
volatile int8_t x18 = -7;
uint32_t x19 = 504632834U;
volatile int64_t x26 = INT64_MIN;
int64_t x27 = -1LL;
int32_t t4 = 178481923;
int64_t x31 = INT64_MAX;
static uint16_t x32 = 9818U;
volatile int32_t t6 = 466686935;
int32_t x37 = INT32_MAX;
volatile int32_t x39 = INT32_MIN;
volatile int32_t x40 = INT32_MIN;
int32_t t9 = -8;
int8_t x59 = INT8_MIN;
int64_t x60 = INT64_MAX;
static uint32_t x62 = 1784472885U;
int32_t t13 = 813668;
static int64_t x72 = -1LL;
int32_t t15 = 977;
static uint8_t x75 = UINT8_MAX;
static int16_t x77 = 1;
volatile int32_t x80 = INT32_MAX;
static int32_t t17 = 11219091;
int8_t x86 = 0;
static int32_t t19 = 18271;
int16_t x97 = INT16_MIN;
volatile int64_t x99 = 1553605833233476LL;
static int64_t x117 = 232508904LL;
int16_t x124 = INT16_MAX;
uint64_t x125 = 858LLU;
int32_t x127 = INT32_MIN;
volatile int16_t x129 = 1979;
int64_t x131 = INT64_MIN;
volatile int64_t x143 = 160092712428LL;
volatile int8_t x148 = INT8_MIN;
int32_t x149 = INT32_MIN;
volatile uint64_t x153 = 837393049764902LLU;
int8_t x154 = INT8_MIN;
uint32_t x156 = 6215U;
static int32_t x157 = INT32_MAX;
volatile int64_t x164 = -522LL;
int8_t x174 = -1;
int8_t x176 = -21;
int32_t x184 = 1;
int16_t x193 = INT16_MAX;
volatile int32_t t46 = -32220546;
int32_t x216 = -643;
int32_t t48 = 2915718;
static int32_t t49 = -50;
int32_t t50 = -1;
static int16_t x228 = INT16_MAX;
static int8_t x229 = 0;
int32_t t52 = -2;
volatile uint16_t x234 = UINT16_MAX;
int32_t x236 = -440168;
int8_t x241 = 36;
uint16_t x243 = 1U;
uint16_t x252 = 459U;
int16_t x264 = 13396;
int16_t x265 = INT16_MIN;
static uint16_t x277 = 30910U;
volatile uint16_t x281 = UINT16_MAX;
uint8_t x284 = 2U;
int64_t x286 = INT64_MIN;
int8_t x287 = INT8_MAX;
uint16_t x288 = UINT16_MAX;
int32_t x293 = INT32_MIN;
volatile int8_t x295 = -26;
int8_t x303 = INT8_MAX;
int8_t x309 = INT8_MIN;
static uint8_t x318 = 7U;
volatile uint32_t x321 = UINT32_MAX;
static uint32_t x329 = 59593157U;
uint16_t x330 = 204U;
int64_t x331 = INT64_MIN;
volatile int32_t x332 = -1;
static int32_t t71 = 186;
volatile int16_t x341 = 1;
uint32_t x343 = 5928U;
uint32_t x354 = 245U;
static int8_t x357 = INT8_MIN;
volatile int32_t t74 = -2378103;
int32_t x364 = -918142;
static int32_t x369 = INT32_MIN;
volatile int32_t t77 = -79561;
static volatile int16_t x379 = INT16_MAX;
static volatile uint16_t x381 = 8130U;
static uint8_t x392 = 63U;
int32_t t80 = -211;
int64_t x393 = 246905209499825830LL;
volatile uint32_t x400 = UINT32_MAX;
int32_t x404 = INT32_MIN;
static volatile int8_t x408 = -1;
volatile int32_t t84 = 22681718;
volatile int32_t x410 = INT32_MIN;
volatile int64_t x411 = -1LL;
uint64_t x412 = 1342447596780870LLU;
uint16_t x413 = 45U;
static int32_t t88 = -10;
volatile uint32_t x431 = 45223485U;
static volatile int32_t x432 = INT32_MAX;
uint16_t x435 = 4U;
static uint64_t x438 = 7588428997LLU;
static int8_t x447 = -27;
uint32_t x448 = 155243695U;
int8_t x450 = INT8_MIN;
static int64_t x452 = -1LL;
uint16_t x458 = UINT16_MAX;
static uint32_t x475 = 1616U;
int32_t x477 = -1;
int64_t x481 = INT64_MIN;
static int32_t x491 = INT32_MIN;
int32_t t101 = -67473;
int8_t x495 = INT8_MAX;
int16_t x502 = 30;
int32_t x506 = 0;
uint8_t x507 = UINT8_MAX;
int8_t x516 = INT8_MAX;
int16_t x519 = -1;
int8_t x534 = -1;
int32_t x537 = -1;
volatile int8_t x543 = INT8_MIN;
uint64_t x545 = UINT64_MAX;
int64_t x550 = -1LL;
uint32_t x551 = 473U;
static uint8_t x555 = 21U;
static volatile uint64_t x557 = 38374LLU;
static int32_t t117 = 21;
static int8_t x561 = INT8_MIN;
static volatile int8_t x562 = INT8_MIN;
static volatile int64_t x564 = INT64_MAX;
static int8_t x569 = INT8_MAX;
uint8_t x581 = 26U;
volatile int32_t t124 = -265779427;
int32_t x599 = -1;
volatile int32_t t129 = -12156739;
int8_t x617 = -1;
int32_t t130 = 227259098;
uint64_t x629 = UINT64_MAX;
uint64_t x641 = UINT64_MAX;
volatile uint16_t x643 = 22275U;
uint64_t x644 = 517458LLU;
static uint64_t x657 = 516581526034LLU;
static volatile int16_t x667 = -1;
static uint8_t x668 = UINT8_MAX;
static int16_t x671 = INT16_MIN;
int32_t t142 = 0;
static int64_t x675 = INT64_MIN;
volatile int16_t x676 = INT16_MIN;
int32_t x680 = INT32_MIN;
int32_t t144 = -39750;
volatile int32_t x690 = -498313;
int8_t x691 = 13;
static volatile int32_t t150 = -1556;
static uint16_t x718 = 7845U;
uint32_t x722 = UINT32_MAX;
uint8_t x723 = 63U;
volatile uint16_t x724 = 137U;
int16_t x737 = -1;
volatile int32_t t155 = -3;
uint8_t x741 = 0U;
static volatile int32_t t156 = -66190263;
static uint8_t x748 = 51U;
int32_t t157 = -49;
static int32_t t160 = 105856;
static int64_t x769 = -1568555LL;
uint8_t x772 = 32U;
int64_t x780 = INT64_MIN;
int32_t t163 = 5;
static int32_t x788 = -1;
static uint64_t x798 = 3161574772383799LLU;
volatile int32_t t167 = 78226749;
int16_t x801 = INT16_MIN;
int64_t x807 = -12161619292995LL;
int8_t x825 = INT8_MAX;
int32_t x826 = -11;
int32_t t173 = 21205;
int8_t x830 = INT8_MAX;
int32_t x833 = -1;
uint8_t x847 = 61U;
uint64_t x858 = UINT64_MAX;
int16_t x859 = INT16_MIN;
uint32_t x861 = 411U;
volatile int16_t x862 = INT16_MIN;
int8_t x863 = INT8_MAX;
int32_t x865 = INT32_MIN;
static uint16_t x875 = UINT16_MAX;
static int8_t x879 = 0;
int16_t x882 = INT16_MIN;
int64_t x883 = -1LL;
uint64_t x894 = UINT64_MAX;
int32_t x903 = 130;
int64_t x904 = INT64_MIN;
int32_t t190 = 0;
int16_t x910 = INT16_MAX;
uint32_t x912 = 5395U;
int32_t t192 = 358335;
static volatile int16_t x919 = -3813;
static int8_t x922 = INT8_MAX;
static int64_t x934 = INT64_MIN;
int64_t x937 = 64638485094LL;
uint32_t x943 = UINT32_MAX;


void f0(void) {
    	int16_t x9 = 194;
	static uint64_t x10 = UINT64_MAX;
	static uint64_t x12 = 1090489208873819LLU;
	volatile int32_t t0 = -3192;

    t0 = ((x9-x10)>(x11%x12));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x13 = -1;
	uint16_t x15 = 80U;
	int16_t x16 = -1;

    t1 = ((x13-x14)>(x15%x16));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x17 = UINT32_MAX;
	volatile int64_t x20 = -1LL;
	volatile int32_t t2 = -652;

    t2 = ((x17-x18)>(x19%x20));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x21 = 472U;
	volatile int16_t x22 = -1;
	volatile uint8_t x23 = 1U;
	int64_t x24 = INT64_MAX;
	int32_t t3 = 25723655;

    t3 = ((x21-x22)>(x23%x24));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x25 = -1;
	static uint32_t x28 = 9754934U;

    t4 = ((x25-x26)>(x27%x28));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x29 = 2073949629900156356LLU;
	static uint16_t x30 = UINT16_MAX;
	int32_t t5 = -196;

    t5 = ((x29-x30)>(x31%x32));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x33 = UINT64_MAX;
	volatile int64_t x34 = -1LL;
	int8_t x35 = INT8_MIN;
	int32_t x36 = INT32_MAX;

    t6 = ((x33-x34)>(x35%x36));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x38 = 1U;
	volatile int32_t t7 = 25770;

    t7 = ((x37-x38)>(x39%x40));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x41 = INT8_MIN;
	static uint64_t x42 = 398285891352761LLU;
	int8_t x43 = INT8_MAX;
	volatile int16_t x44 = 99;
	int32_t t8 = -85281;

    t8 = ((x41-x42)>(x43%x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = -656;
	int64_t x46 = -1LL;
	int64_t x47 = INT64_MIN;
	uint16_t x48 = UINT16_MAX;

    t9 = ((x45-x46)>(x47%x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x49 = 625U;
	uint8_t x50 = 1U;
	static int64_t x51 = -1LL;
	volatile uint8_t x52 = 121U;
	volatile int32_t t10 = 63;

    t10 = ((x49-x50)>(x51%x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x53 = 5;
	uint16_t x54 = 328U;
	int32_t x55 = 3967;
	static int32_t x56 = INT32_MIN;
	static volatile int32_t t11 = -122;

    t11 = ((x53-x54)>(x55%x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x57 = 0U;
	static int16_t x58 = INT16_MIN;
	volatile int32_t t12 = -1922752;

    t12 = ((x57-x58)>(x59%x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x61 = 445U;
	int8_t x63 = INT8_MIN;
	uint8_t x64 = 13U;

    t13 = ((x61-x62)>(x63%x64));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x65 = 319397131LLU;
	int32_t x66 = INT32_MIN;
	int16_t x67 = -1;
	static int32_t x68 = INT32_MIN;
	volatile int32_t t14 = 505;

    t14 = ((x65-x66)>(x67%x68));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint16_t x69 = UINT16_MAX;
	int16_t x70 = INT16_MIN;
	static int32_t x71 = 342103087;

    t15 = ((x69-x70)>(x71%x72));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x73 = UINT8_MAX;
	int16_t x74 = INT16_MIN;
	int32_t x76 = INT32_MIN;
	volatile int32_t t16 = 2;

    t16 = ((x73-x74)>(x75%x76));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x78 = 3LLU;
	uint32_t x79 = 1778677367U;

    t17 = ((x77-x78)>(x79%x80));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x81 = INT64_MIN;
	uint64_t x82 = 51751118772654LLU;
	volatile uint32_t x83 = 23234U;
	int8_t x84 = INT8_MIN;
	int32_t t18 = -17;

    t18 = ((x81-x82)>(x83%x84));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x85 = 0;
	volatile int32_t x87 = 327230137;
	volatile int8_t x88 = -1;

    t19 = ((x85-x86)>(x87%x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x89 = UINT8_MAX;
	int8_t x90 = 5;
	volatile int64_t x91 = INT64_MAX;
	int32_t x92 = 10;
	static int32_t t20 = -479418;

    t20 = ((x89-x90)>(x91%x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x93 = UINT16_MAX;
	int8_t x94 = INT8_MIN;
	static volatile int32_t x95 = INT32_MAX;
	volatile uint32_t x96 = 29723U;
	static volatile int32_t t21 = 4445;

    t21 = ((x93-x94)>(x95%x96));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x98 = 11210483U;
	static int32_t x100 = -136794221;
	volatile int32_t t22 = 163760;

    t22 = ((x97-x98)>(x99%x100));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x109 = INT16_MIN;
	volatile int16_t x110 = INT16_MIN;
	static int8_t x111 = INT8_MAX;
	uint16_t x112 = 3U;
	volatile int32_t t23 = 262;

    t23 = ((x109-x110)>(x111%x112));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x113 = -1LL;
	int64_t x114 = -1LL;
	volatile int8_t x115 = -1;
	int64_t x116 = INT64_MIN;
	static int32_t t24 = -2;

    t24 = ((x113-x114)>(x115%x116));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int32_t x118 = -12008843;
	volatile uint64_t x119 = UINT64_MAX;
	int32_t x120 = INT32_MAX;
	int32_t t25 = 24;

    t25 = ((x117-x118)>(x119%x120));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x121 = INT16_MAX;
	int8_t x122 = 0;
	volatile int8_t x123 = INT8_MAX;
	int32_t t26 = 91996083;

    t26 = ((x121-x122)>(x123%x124));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x126 = -1LL;
	int64_t x128 = 9899387948LL;
	int32_t t27 = 204;

    t27 = ((x125-x126)>(x127%x128));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x130 = UINT16_MAX;
	static uint32_t x132 = UINT32_MAX;
	int32_t t28 = 192986558;

    t28 = ((x129-x130)>(x131%x132));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x133 = UINT32_MAX;
	uint32_t x134 = 924U;
	int8_t x135 = INT8_MAX;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t29 = 359122286;

    t29 = ((x133-x134)>(x135%x136));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x137 = -1;
	static int64_t x138 = -1LL;
	volatile uint64_t x139 = 2799270822298863267LLU;
	int64_t x140 = INT64_MIN;
	int32_t t30 = -38577;

    t30 = ((x137-x138)>(x139%x140));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x141 = 32483U;
	volatile int32_t x142 = INT32_MIN;
	int64_t x144 = INT64_MIN;
	int32_t t31 = -30;

    t31 = ((x141-x142)>(x143%x144));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int64_t x145 = -1LL;
	int32_t x146 = 13762;
	volatile uint64_t x147 = 10892721432LLU;
	volatile int32_t t32 = -38662283;

    t32 = ((x145-x146)>(x147%x148));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x150 = 36LL;
	int8_t x151 = -1;
	uint16_t x152 = 9591U;
	volatile int32_t t33 = 1;

    t33 = ((x149-x150)>(x151%x152));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x155 = INT16_MIN;
	int32_t t34 = -163281237;

    t34 = ((x153-x154)>(x155%x156));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x158 = 11;
	int8_t x159 = INT8_MIN;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t35 = 7;

    t35 = ((x157-x158)>(x159%x160));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x161 = 1;
	int8_t x162 = INT8_MAX;
	uint16_t x163 = UINT16_MAX;
	static volatile int32_t t36 = -153252886;

    t36 = ((x161-x162)>(x163%x164));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x165 = UINT8_MAX;
	volatile int8_t x166 = 13;
	uint8_t x167 = 1U;
	int8_t x168 = INT8_MIN;
	int32_t t37 = -20;

    t37 = ((x165-x166)>(x167%x168));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x169 = INT8_MIN;
	static int16_t x170 = INT16_MIN;
	uint16_t x171 = 99U;
	volatile int64_t x172 = INT64_MAX;
	volatile int32_t t38 = -7708;

    t38 = ((x169-x170)>(x171%x172));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x173 = 74U;
	uint64_t x175 = 395644777LLU;
	volatile int32_t t39 = -1;

    t39 = ((x173-x174)>(x175%x176));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x177 = 25;
	uint16_t x178 = 7266U;
	uint64_t x179 = 49LLU;
	uint8_t x180 = 4U;
	volatile int32_t t40 = 47720604;

    t40 = ((x177-x178)>(x179%x180));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x181 = -1;
	uint8_t x182 = UINT8_MAX;
	uint64_t x183 = 1703728977608LLU;
	static volatile int32_t t41 = -977970;

    t41 = ((x181-x182)>(x183%x184));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x185 = UINT64_MAX;
	uint8_t x186 = 0U;
	uint8_t x187 = UINT8_MAX;
	int32_t x188 = -1;
	int32_t t42 = -86;

    t42 = ((x185-x186)>(x187%x188));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x189 = UINT64_MAX;
	volatile uint32_t x190 = 36063U;
	int8_t x191 = INT8_MIN;
	int64_t x192 = INT64_MIN;
	volatile int32_t t43 = -10;

    t43 = ((x189-x190)>(x191%x192));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x194 = 7;
	int64_t x195 = 426268298LL;
	volatile int8_t x196 = 20;
	int32_t t44 = 4374;

    t44 = ((x193-x194)>(x195%x196));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x197 = INT32_MIN;
	uint64_t x198 = 25535679881094150LLU;
	uint16_t x199 = UINT16_MAX;
	static int8_t x200 = -1;
	int32_t t45 = 87247784;

    t45 = ((x197-x198)>(x199%x200));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x205 = INT16_MIN;
	int64_t x206 = -389361LL;
	int8_t x207 = INT8_MAX;
	static int8_t x208 = INT8_MIN;

    t46 = ((x205-x206)>(x207%x208));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x209 = -1;
	int64_t x210 = INT64_MAX;
	int16_t x211 = 177;
	uint32_t x212 = UINT32_MAX;
	volatile int32_t t47 = 1;

    t47 = ((x209-x210)>(x211%x212));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x213 = INT16_MIN;
	int64_t x214 = 0LL;
	static int8_t x215 = 1;

    t48 = ((x213-x214)>(x215%x216));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x217 = 7608;
	static int64_t x218 = 2731997LL;
	uint32_t x219 = 4U;
	uint32_t x220 = UINT32_MAX;

    t49 = ((x217-x218)>(x219%x220));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x221 = UINT8_MAX;
	uint64_t x222 = 908816628LLU;
	volatile uint8_t x223 = 55U;
	int64_t x224 = INT64_MIN;

    t50 = ((x221-x222)>(x223%x224));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x225 = INT16_MAX;
	volatile int32_t x226 = 29825128;
	volatile int16_t x227 = -1;
	volatile int32_t t51 = -59532;

    t51 = ((x225-x226)>(x227%x228));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x230 = UINT32_MAX;
	volatile int64_t x231 = -1LL;
	int64_t x232 = INT64_MIN;

    t52 = ((x229-x230)>(x231%x232));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x233 = INT16_MAX;
	int16_t x235 = INT16_MIN;
	volatile int32_t t53 = 86;

    t53 = ((x233-x234)>(x235%x236));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x242 = 0U;
	volatile int32_t x244 = INT32_MIN;
	volatile int32_t t54 = 93866176;

    t54 = ((x241-x242)>(x243%x244));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x249 = INT8_MAX;
	int64_t x250 = -1LL;
	int64_t x251 = INT64_MIN;
	int32_t t55 = 30;

    t55 = ((x249-x250)>(x251%x252));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x261 = INT64_MIN;
	int64_t x262 = INT64_MIN;
	int16_t x263 = INT16_MAX;
	static volatile int32_t t56 = 15964983;

    t56 = ((x261-x262)>(x263%x264));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x266 = INT8_MIN;
	int16_t x267 = INT16_MIN;
	int64_t x268 = INT64_MIN;
	int32_t t57 = -10551;

    t57 = ((x265-x266)>(x267%x268));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x269 = 52U;
	volatile int16_t x270 = 51;
	uint64_t x271 = 2223281362986251LLU;
	uint64_t x272 = 778070874838563935LLU;
	static int32_t t58 = 1;

    t58 = ((x269-x270)>(x271%x272));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x278 = INT16_MIN;
	int8_t x279 = INT8_MAX;
	volatile int8_t x280 = -1;
	static volatile int32_t t59 = 1;

    t59 = ((x277-x278)>(x279%x280));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x282 = INT16_MAX;
	static int16_t x283 = INT16_MIN;
	static volatile int32_t t60 = -189121038;

    t60 = ((x281-x282)>(x283%x284));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x285 = UINT64_MAX;
	volatile int32_t t61 = 6854;

    t61 = ((x285-x286)>(x287%x288));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x289 = -6571006179LL;
	uint16_t x290 = UINT16_MAX;
	volatile int8_t x291 = 0;
	static uint32_t x292 = UINT32_MAX;
	volatile int32_t t62 = 15920988;

    t62 = ((x289-x290)>(x291%x292));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x294 = INT32_MIN;
	int64_t x296 = -1LL;
	volatile int32_t t63 = 8661;

    t63 = ((x293-x294)>(x295%x296));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x297 = INT8_MAX;
	static int64_t x298 = INT64_MAX;
	static volatile int8_t x299 = INT8_MIN;
	static int16_t x300 = INT16_MAX;
	int32_t t64 = 13987693;

    t64 = ((x297-x298)>(x299%x300));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x301 = -1;
	volatile int16_t x302 = 809;
	uint8_t x304 = UINT8_MAX;
	volatile int32_t t65 = -176465;

    t65 = ((x301-x302)>(x303%x304));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x305 = INT16_MIN;
	int32_t x306 = INT32_MIN;
	static uint8_t x307 = UINT8_MAX;
	int64_t x308 = -1LL;
	int32_t t66 = 0;

    t66 = ((x305-x306)>(x307%x308));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x310 = INT64_MIN;
	uint64_t x311 = 227088900327LLU;
	static uint16_t x312 = UINT16_MAX;
	static volatile int32_t t67 = -3;

    t67 = ((x309-x310)>(x311%x312));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x313 = -470394948;
	uint16_t x314 = 0U;
	int8_t x315 = 3;
	volatile int16_t x316 = INT16_MIN;
	int32_t t68 = 0;

    t68 = ((x313-x314)>(x315%x316));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x317 = 0;
	int16_t x319 = INT16_MAX;
	int16_t x320 = INT16_MIN;
	volatile int32_t t69 = -1893853;

    t69 = ((x317-x318)>(x319%x320));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x322 = INT32_MIN;
	int16_t x323 = INT16_MAX;
	int32_t x324 = INT32_MAX;
	volatile int32_t t70 = -32968347;

    t70 = ((x321-x322)>(x323%x324));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    

    t71 = ((x329-x330)>(x331%x332));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x342 = -1211868;
	int64_t x344 = -6LL;
	volatile int32_t t72 = 1948;

    t72 = ((x341-x342)>(x343%x344));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x353 = INT64_MAX;
	int32_t x355 = 21581;
	int8_t x356 = INT8_MAX;
	volatile int32_t t73 = -431867538;

    t73 = ((x353-x354)>(x355%x356));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x358 = 0U;
	int64_t x359 = 3486LL;
	int64_t x360 = INT64_MIN;

    t74 = ((x357-x358)>(x359%x360));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x361 = 512;
	volatile int64_t x362 = -1LL;
	int8_t x363 = -1;
	volatile int32_t t75 = 38043;

    t75 = ((x361-x362)>(x363%x364));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x370 = INT64_MIN;
	int64_t x371 = INT64_MAX;
	int16_t x372 = INT16_MIN;
	volatile int32_t t76 = 163715517;

    t76 = ((x369-x370)>(x371%x372));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x373 = INT16_MAX;
	static int32_t x374 = -382;
	volatile int16_t x375 = -22;
	int64_t x376 = -1LL;

    t77 = ((x373-x374)>(x375%x376));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x377 = -76066076879480368LL;
	int16_t x378 = -1;
	uint64_t x380 = UINT64_MAX;
	volatile int32_t t78 = -1060;

    t78 = ((x377-x378)>(x379%x380));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x382 = UINT32_MAX;
	static int64_t x383 = -11LL;
	int8_t x384 = -2;
	static int32_t t79 = 3937;

    t79 = ((x381-x382)>(x383%x384));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x389 = UINT8_MAX;
	volatile int32_t x390 = -71;
	uint32_t x391 = 30U;

    t80 = ((x389-x390)>(x391%x392));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x394 = 57LL;
	volatile int8_t x395 = -1;
	int16_t x396 = INT16_MIN;
	volatile int32_t t81 = -71;

    t81 = ((x393-x394)>(x395%x396));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x397 = -1;
	int8_t x398 = -1;
	int8_t x399 = INT8_MIN;
	int32_t t82 = 0;

    t82 = ((x397-x398)>(x399%x400));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x401 = INT16_MAX;
	int8_t x402 = INT8_MIN;
	int32_t x403 = INT32_MIN;
	static volatile int32_t t83 = -283870192;

    t83 = ((x401-x402)>(x403%x404));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x405 = INT8_MIN;
	static int32_t x406 = INT32_MIN;
	int32_t x407 = INT32_MIN;

    t84 = ((x405-x406)>(x407%x408));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int8_t x409 = -1;
	static int32_t t85 = -42;

    t85 = ((x409-x410)>(x411%x412));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x414 = 201U;
	int8_t x415 = -31;
	volatile int16_t x416 = INT16_MIN;
	volatile int32_t t86 = -142881827;

    t86 = ((x413-x414)>(x415%x416));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x417 = 191;
	int32_t x418 = -14;
	int32_t x419 = INT32_MIN;
	int64_t x420 = -2LL;
	int32_t t87 = 85014293;

    t87 = ((x417-x418)>(x419%x420));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x425 = INT64_MIN;
	int8_t x426 = -1;
	uint64_t x427 = 282194806300701284LLU;
	int16_t x428 = 1;

    t88 = ((x425-x426)>(x427%x428));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x429 = UINT8_MAX;
	static int64_t x430 = -1LL;
	int32_t t89 = -3609;

    t89 = ((x429-x430)>(x431%x432));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x433 = INT64_MIN;
	int64_t x434 = INT64_MIN;
	volatile uint8_t x436 = 47U;
	int32_t t90 = 30;

    t90 = ((x433-x434)>(x435%x436));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x437 = 5U;
	int32_t x439 = -1;
	int16_t x440 = 137;
	int32_t t91 = 1380;

    t91 = ((x437-x438)>(x439%x440));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x445 = 94189LLU;
	int16_t x446 = INT16_MIN;
	int32_t t92 = 33946090;

    t92 = ((x445-x446)>(x447%x448));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x449 = INT8_MIN;
	int16_t x451 = INT16_MIN;
	volatile int32_t t93 = -78;

    t93 = ((x449-x450)>(x451%x452));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x457 = UINT64_MAX;
	int32_t x459 = 402700633;
	uint16_t x460 = 2U;
	int32_t t94 = 2355;

    t94 = ((x457-x458)>(x459%x460));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x461 = 48;
	int64_t x462 = -3269701175645638494LL;
	static volatile int32_t x463 = INT32_MIN;
	volatile uint8_t x464 = 11U;
	int32_t t95 = -8113;

    t95 = ((x461-x462)>(x463%x464));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x465 = INT32_MIN;
	int16_t x466 = INT16_MIN;
	int64_t x467 = INT64_MAX;
	int64_t x468 = INT64_MIN;
	volatile int32_t t96 = -209;

    t96 = ((x465-x466)>(x467%x468));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x469 = 75821573LLU;
	int32_t x470 = -1;
	static volatile uint64_t x471 = 638879907388470054LLU;
	static int8_t x472 = INT8_MAX;
	static volatile int32_t t97 = -222392;

    t97 = ((x469-x470)>(x471%x472));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x473 = INT8_MAX;
	uint32_t x474 = UINT32_MAX;
	uint8_t x476 = 5U;
	volatile int32_t t98 = 1;

    t98 = ((x473-x474)>(x475%x476));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x478 = 171U;
	int32_t x479 = INT32_MIN;
	int32_t x480 = INT32_MAX;
	int32_t t99 = 4862319;

    t99 = ((x477-x478)>(x479%x480));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x482 = INT64_MIN;
	int64_t x483 = INT64_MAX;
	int16_t x484 = -1;
	int32_t t100 = -173274;

    t100 = ((x481-x482)>(x483%x484));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x489 = -1LL;
	int8_t x490 = INT8_MIN;
	int8_t x492 = INT8_MIN;

    t101 = ((x489-x490)>(x491%x492));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x493 = INT32_MIN;
	static uint32_t x494 = 3U;
	uint64_t x496 = 8439570329LLU;
	int32_t t102 = 21242;

    t102 = ((x493-x494)>(x495%x496));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x497 = INT8_MIN;
	static int32_t x498 = INT32_MIN;
	int64_t x499 = -1LL;
	uint32_t x500 = 41884081U;
	int32_t t103 = 3873;

    t103 = ((x497-x498)>(x499%x500));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x501 = 5;
	static int8_t x503 = -1;
	volatile int32_t x504 = -1;
	volatile int32_t t104 = -1;

    t104 = ((x501-x502)>(x503%x504));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x505 = -2;
	int64_t x508 = INT64_MAX;
	int32_t t105 = 121;

    t105 = ((x505-x506)>(x507%x508));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x509 = UINT8_MAX;
	static int8_t x510 = -1;
	uint16_t x511 = UINT16_MAX;
	int16_t x512 = -1;
	volatile int32_t t106 = -4171801;

    t106 = ((x509-x510)>(x511%x512));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x513 = INT16_MIN;
	static int64_t x514 = INT64_MIN;
	int64_t x515 = 358LL;
	int32_t t107 = 0;

    t107 = ((x513-x514)>(x515%x516));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x517 = 14;
	int8_t x518 = INT8_MIN;
	uint16_t x520 = 1576U;
	static volatile int32_t t108 = -1;

    t108 = ((x517-x518)>(x519%x520));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x525 = -1;
	volatile int32_t x526 = 36095;
	int8_t x527 = 25;
	uint64_t x528 = UINT64_MAX;
	volatile int32_t t109 = 284319;

    t109 = ((x525-x526)>(x527%x528));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x529 = -1;
	static volatile int32_t x530 = INT32_MIN;
	int32_t x531 = INT32_MIN;
	int64_t x532 = -1LL;
	volatile int32_t t110 = -27;

    t110 = ((x529-x530)>(x531%x532));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x533 = INT8_MIN;
	int16_t x535 = -10079;
	int8_t x536 = -1;
	int32_t t111 = 108038;

    t111 = ((x533-x534)>(x535%x536));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x538 = 33;
	int32_t x539 = INT32_MIN;
	static int8_t x540 = INT8_MAX;
	volatile int32_t t112 = 91326;

    t112 = ((x537-x538)>(x539%x540));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x541 = 65U;
	volatile uint32_t x542 = 198U;
	volatile int16_t x544 = INT16_MIN;
	int32_t t113 = -293741;

    t113 = ((x541-x542)>(x543%x544));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x546 = UINT8_MAX;
	int16_t x547 = 104;
	int32_t x548 = INT32_MAX;
	static int32_t t114 = 3;

    t114 = ((x545-x546)>(x547%x548));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x549 = -1;
	int32_t x552 = -1;
	static volatile int32_t t115 = -12484;

    t115 = ((x549-x550)>(x551%x552));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x553 = -109836169537LL;
	uint64_t x554 = 617426LLU;
	int64_t x556 = INT64_MIN;
	int32_t t116 = -273877438;

    t116 = ((x553-x554)>(x555%x556));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint32_t x558 = 28110447U;
	uint16_t x559 = 625U;
	uint16_t x560 = 3122U;

    t117 = ((x557-x558)>(x559%x560));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x563 = INT64_MIN;
	int32_t t118 = -1;

    t118 = ((x561-x562)>(x563%x564));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x565 = 1U;
	static int8_t x566 = -1;
	uint64_t x567 = 27LLU;
	int16_t x568 = -15924;
	static volatile int32_t t119 = 2194;

    t119 = ((x565-x566)>(x567%x568));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x570 = -1LL;
	int32_t x571 = INT32_MAX;
	static volatile int8_t x572 = INT8_MAX;
	int32_t t120 = 11635392;

    t120 = ((x569-x570)>(x571%x572));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x573 = UINT32_MAX;
	static int64_t x574 = -2496465876617LL;
	volatile int64_t x575 = INT64_MIN;
	volatile int64_t x576 = INT64_MIN;
	static int32_t t121 = -31578;

    t121 = ((x573-x574)>(x575%x576));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x577 = 2U;
	static int32_t x578 = -455805;
	volatile int16_t x579 = INT16_MIN;
	int64_t x580 = 74024063519LL;
	int32_t t122 = -4056;

    t122 = ((x577-x578)>(x579%x580));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x582 = INT8_MIN;
	volatile int8_t x583 = 3;
	int64_t x584 = INT64_MIN;
	int32_t t123 = -192;

    t123 = ((x581-x582)>(x583%x584));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int64_t x585 = -1979766400980603LL;
	int16_t x586 = 357;
	int64_t x587 = 4644972702250409LL;
	int16_t x588 = INT16_MIN;

    t124 = ((x585-x586)>(x587%x588));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x597 = 3;
	uint8_t x598 = 7U;
	static int16_t x600 = -1;
	volatile int32_t t125 = -12903377;

    t125 = ((x597-x598)>(x599%x600));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x601 = 63209332396239LL;
	static uint16_t x602 = UINT16_MAX;
	volatile uint16_t x603 = 1714U;
	static int64_t x604 = INT64_MIN;
	int32_t t126 = -233;

    t126 = ((x601-x602)>(x603%x604));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x605 = 3;
	volatile uint64_t x606 = 643968167LLU;
	uint64_t x607 = UINT64_MAX;
	volatile uint32_t x608 = 858U;
	int32_t t127 = 954601;

    t127 = ((x605-x606)>(x607%x608));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x609 = INT64_MAX;
	uint8_t x610 = 4U;
	int8_t x611 = -1;
	int8_t x612 = 1;
	int32_t t128 = -7;

    t128 = ((x609-x610)>(x611%x612));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x613 = 12293U;
	uint8_t x614 = 1U;
	int32_t x615 = 20160;
	int8_t x616 = 1;

    t129 = ((x613-x614)>(x615%x616));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x618 = 92289676567LLU;
	int8_t x619 = -1;
	static uint32_t x620 = UINT32_MAX;

    t130 = ((x617-x618)>(x619%x620));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x621 = INT16_MIN;
	int16_t x622 = 2;
	int8_t x623 = 3;
	uint16_t x624 = 1063U;
	volatile int32_t t131 = 18;

    t131 = ((x621-x622)>(x623%x624));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x625 = 79U;
	static int32_t x626 = 130705200;
	int32_t x627 = -1359;
	int32_t x628 = INT32_MIN;
	volatile int32_t t132 = 24628810;

    t132 = ((x625-x626)>(x627%x628));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x630 = UINT32_MAX;
	static int8_t x631 = INT8_MIN;
	volatile uint64_t x632 = 895LLU;
	static volatile int32_t t133 = -402355;

    t133 = ((x629-x630)>(x631%x632));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x633 = 0U;
	static int16_t x634 = 426;
	int8_t x635 = 3;
	uint8_t x636 = UINT8_MAX;
	volatile int32_t t134 = 0;

    t134 = ((x633-x634)>(x635%x636));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x642 = -5146726992546563LL;
	int32_t t135 = -269876;

    t135 = ((x641-x642)>(x643%x644));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x645 = INT64_MAX;
	uint16_t x646 = UINT16_MAX;
	volatile int64_t x647 = -1LL;
	static uint8_t x648 = UINT8_MAX;
	volatile int32_t t136 = -466881915;

    t136 = ((x645-x646)>(x647%x648));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x649 = INT8_MIN;
	uint64_t x650 = 477930115295LLU;
	uint16_t x651 = UINT16_MAX;
	uint8_t x652 = UINT8_MAX;
	int32_t t137 = 214551661;

    t137 = ((x649-x650)>(x651%x652));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x653 = INT64_MAX;
	static uint16_t x654 = 844U;
	int8_t x655 = INT8_MAX;
	int32_t x656 = 681301;
	volatile int32_t t138 = 712275;

    t138 = ((x653-x654)>(x655%x656));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x658 = 7365260;
	volatile uint8_t x659 = 1U;
	uint64_t x660 = 395369451779695177LLU;
	volatile int32_t t139 = -408156105;

    t139 = ((x657-x658)>(x659%x660));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x661 = INT16_MAX;
	uint64_t x662 = 56707LLU;
	int16_t x663 = INT16_MAX;
	static uint32_t x664 = 3176U;
	int32_t t140 = 235006307;

    t140 = ((x661-x662)>(x663%x664));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x665 = INT16_MAX;
	int64_t x666 = 3117383969LL;
	int32_t t141 = -1;

    t141 = ((x665-x666)>(x667%x668));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x669 = 56U;
	volatile uint8_t x670 = UINT8_MAX;
	uint64_t x672 = UINT64_MAX;

    t142 = ((x669-x670)>(x671%x672));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x673 = -1;
	static volatile int64_t x674 = INT64_MAX;
	volatile int32_t t143 = 31066;

    t143 = ((x673-x674)>(x675%x676));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x677 = 8U;
	int8_t x678 = -5;
	int16_t x679 = -1;

    t144 = ((x677-x678)>(x679%x680));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x685 = UINT16_MAX;
	static volatile uint64_t x686 = UINT64_MAX;
	int64_t x687 = INT64_MIN;
	int32_t x688 = INT32_MAX;
	int32_t t145 = -1258;

    t145 = ((x685-x686)>(x687%x688));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x689 = 2;
	uint8_t x692 = 31U;
	int32_t t146 = 0;

    t146 = ((x689-x690)>(x691%x692));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x693 = -1;
	volatile uint64_t x694 = 31310LLU;
	static volatile int8_t x695 = INT8_MIN;
	volatile uint8_t x696 = UINT8_MAX;
	int32_t t147 = 600094411;

    t147 = ((x693-x694)>(x695%x696));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x697 = -5526;
	int8_t x698 = -1;
	int16_t x699 = INT16_MIN;
	uint16_t x700 = 1550U;
	int32_t t148 = 837503;

    t148 = ((x697-x698)>(x699%x700));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x701 = UINT8_MAX;
	int64_t x702 = -44148025644117259LL;
	int16_t x703 = -1;
	uint16_t x704 = 94U;
	int32_t t149 = -380523472;

    t149 = ((x701-x702)>(x703%x704));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x709 = -1;
	uint16_t x710 = 7U;
	int16_t x711 = INT16_MAX;
	volatile int32_t x712 = 18083;

    t150 = ((x709-x710)>(x711%x712));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x717 = 5815578006929853LL;
	static volatile uint32_t x719 = 1741866U;
	uint8_t x720 = 15U;
	static int32_t t151 = 2;

    t151 = ((x717-x718)>(x719%x720));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int32_t x721 = INT32_MAX;
	int32_t t152 = 540;

    t152 = ((x721-x722)>(x723%x724));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint8_t x729 = 0U;
	static uint8_t x730 = 116U;
	uint8_t x731 = 78U;
	static int8_t x732 = INT8_MIN;
	int32_t t153 = -41958171;

    t153 = ((x729-x730)>(x731%x732));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x733 = -1;
	uint32_t x734 = 12538278U;
	uint64_t x735 = UINT64_MAX;
	static int32_t x736 = -2160;
	static volatile int32_t t154 = -413712;

    t154 = ((x733-x734)>(x735%x736));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x738 = -1;
	int32_t x739 = 13654;
	int8_t x740 = -1;

    t155 = ((x737-x738)>(x739%x740));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x742 = UINT8_MAX;
	volatile int16_t x743 = INT16_MIN;
	int16_t x744 = -1;

    t156 = ((x741-x742)>(x743%x744));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x745 = -1LL;
	int32_t x746 = 47;
	static int8_t x747 = INT8_MIN;

    t157 = ((x745-x746)>(x747%x748));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x749 = 26U;
	volatile int16_t x750 = 530;
	int16_t x751 = INT16_MIN;
	int32_t x752 = INT32_MIN;
	volatile int32_t t158 = 48;

    t158 = ((x749-x750)>(x751%x752));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x753 = 1634LLU;
	uint64_t x754 = 79LLU;
	uint16_t x755 = 2265U;
	uint64_t x756 = 47211714836541LLU;
	volatile int32_t t159 = -93;

    t159 = ((x753-x754)>(x755%x756));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x765 = 1087986231461882LL;
	int8_t x766 = INT8_MIN;
	static int8_t x767 = -1;
	int8_t x768 = 6;

    t160 = ((x765-x766)>(x767%x768));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x770 = 0U;
	int32_t x771 = -1;
	static volatile int32_t t161 = 108033;

    t161 = ((x769-x770)>(x771%x772));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x773 = 112239528015LLU;
	uint16_t x774 = 581U;
	static int64_t x775 = 1158296243973LL;
	uint64_t x776 = 3372809LLU;
	int32_t t162 = 164564;

    t162 = ((x773-x774)>(x775%x776));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x777 = 4U;
	static uint16_t x778 = 33U;
	uint16_t x779 = 40U;

    t163 = ((x777-x778)>(x779%x780));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x781 = -18021363968LL;
	volatile int64_t x782 = INT64_MIN;
	static int32_t x783 = -1;
	int32_t x784 = INT32_MAX;
	int32_t t164 = 3040;

    t164 = ((x781-x782)>(x783%x784));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x785 = INT8_MIN;
	int32_t x786 = INT32_MIN;
	static volatile int8_t x787 = INT8_MIN;
	volatile int32_t t165 = 209;

    t165 = ((x785-x786)>(x787%x788));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x793 = 7662693784469922LLU;
	int8_t x794 = INT8_MIN;
	volatile int8_t x795 = 10;
	static uint8_t x796 = 1U;
	volatile int32_t t166 = -410862;

    t166 = ((x793-x794)>(x795%x796));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x797 = 0LLU;
	volatile int32_t x799 = INT32_MIN;
	int32_t x800 = -1;

    t167 = ((x797-x798)>(x799%x800));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x802 = 251;
	uint32_t x803 = 136U;
	volatile int16_t x804 = -3;
	int32_t t168 = -68261422;

    t168 = ((x801-x802)>(x803%x804));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x805 = INT8_MIN;
	uint32_t x806 = 27U;
	int32_t x808 = 81;
	static volatile int32_t t169 = -180968119;

    t169 = ((x805-x806)>(x807%x808));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x809 = 28U;
	volatile uint16_t x810 = UINT16_MAX;
	uint8_t x811 = 20U;
	static int16_t x812 = INT16_MAX;
	static int32_t t170 = 7;

    t170 = ((x809-x810)>(x811%x812));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x813 = UINT16_MAX;
	int32_t x814 = -877586442;
	static volatile int16_t x815 = INT16_MAX;
	static int16_t x816 = INT16_MIN;
	int32_t t171 = -126;

    t171 = ((x813-x814)>(x815%x816));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x817 = INT64_MAX;
	uint8_t x818 = 29U;
	static volatile int8_t x819 = INT8_MIN;
	volatile uint8_t x820 = 11U;
	int32_t t172 = -1;

    t172 = ((x817-x818)>(x819%x820));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint16_t x827 = 0U;
	int8_t x828 = INT8_MIN;

    t173 = ((x825-x826)>(x827%x828));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x829 = INT8_MIN;
	volatile int32_t x831 = INT32_MIN;
	uint32_t x832 = 32275U;
	volatile int32_t t174 = 49806;

    t174 = ((x829-x830)>(x831%x832));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x834 = -10;
	int16_t x835 = INT16_MIN;
	uint8_t x836 = UINT8_MAX;
	int32_t t175 = -62;

    t175 = ((x833-x834)>(x835%x836));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x841 = INT16_MAX;
	uint64_t x842 = UINT64_MAX;
	int32_t x843 = INT32_MIN;
	static uint16_t x844 = 1791U;
	volatile int32_t t176 = 57135801;

    t176 = ((x841-x842)>(x843%x844));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x845 = -1;
	int8_t x846 = INT8_MAX;
	static int64_t x848 = INT64_MIN;
	volatile int32_t t177 = 4004;

    t177 = ((x845-x846)>(x847%x848));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x853 = UINT64_MAX;
	int16_t x854 = -1;
	static int64_t x855 = 14129860LL;
	int16_t x856 = 56;
	int32_t t178 = -333827;

    t178 = ((x853-x854)>(x855%x856));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x857 = INT8_MIN;
	uint32_t x860 = 3U;
	static volatile int32_t t179 = -27359;

    t179 = ((x857-x858)>(x859%x860));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x864 = INT64_MIN;
	static int32_t t180 = -53;

    t180 = ((x861-x862)>(x863%x864));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x866 = -1;
	int32_t x867 = INT32_MIN;
	int16_t x868 = -2064;
	volatile int32_t t181 = -69148;

    t181 = ((x865-x866)>(x867%x868));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x869 = 35U;
	uint16_t x870 = 5U;
	static volatile int64_t x871 = INT64_MIN;
	int64_t x872 = -6185964LL;
	volatile int32_t t182 = 5189661;

    t182 = ((x869-x870)>(x871%x872));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x873 = 782296907LLU;
	uint64_t x874 = 8841566035LLU;
	uint64_t x876 = UINT64_MAX;
	volatile int32_t t183 = 4783;

    t183 = ((x873-x874)>(x875%x876));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x877 = -1LL;
	uint16_t x878 = 22968U;
	int16_t x880 = -1;
	int32_t t184 = -7;

    t184 = ((x877-x878)>(x879%x880));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x881 = -1;
	int32_t x884 = INT32_MAX;
	static volatile int32_t t185 = 201;

    t185 = ((x881-x882)>(x883%x884));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x889 = INT64_MIN;
	static int16_t x890 = -1;
	uint8_t x891 = UINT8_MAX;
	volatile int64_t x892 = 87481940229LL;
	int32_t t186 = 1660911;

    t186 = ((x889-x890)>(x891%x892));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x893 = 81LL;
	int64_t x895 = 13120086688LL;
	int32_t x896 = -1;
	int32_t t187 = -7;

    t187 = ((x893-x894)>(x895%x896));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x897 = INT8_MIN;
	int8_t x898 = INT8_MIN;
	uint32_t x899 = UINT32_MAX;
	int32_t x900 = INT32_MIN;
	static int32_t t188 = 1429;

    t188 = ((x897-x898)>(x899%x900));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint32_t x901 = UINT32_MAX;
	int16_t x902 = INT16_MIN;
	int32_t t189 = 1786;

    t189 = ((x901-x902)>(x903%x904));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x905 = INT8_MAX;
	int8_t x906 = -1;
	uint8_t x907 = 6U;
	int16_t x908 = 6;

    t190 = ((x905-x906)>(x907%x908));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x909 = 2U;
	uint32_t x911 = 363135U;
	volatile int32_t t191 = 8212331;

    t191 = ((x909-x910)>(x911%x912));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x913 = 145768884719866LL;
	static uint8_t x914 = 8U;
	int64_t x915 = INT64_MIN;
	int64_t x916 = 6160LL;

    t192 = ((x913-x914)>(x915%x916));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x917 = 1U;
	int8_t x918 = -1;
	volatile uint64_t x920 = 1431LLU;
	volatile int32_t t193 = -3;

    t193 = ((x917-x918)>(x919%x920));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x921 = UINT8_MAX;
	int32_t x923 = 86;
	static int16_t x924 = 11909;
	volatile int32_t t194 = -1;

    t194 = ((x921-x922)>(x923%x924));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x925 = -1;
	int16_t x926 = 4498;
	uint32_t x927 = UINT32_MAX;
	static int64_t x928 = INT64_MAX;
	int32_t t195 = 1683000;

    t195 = ((x925-x926)>(x927%x928));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x929 = 217108LL;
	int8_t x930 = INT8_MAX;
	volatile int64_t x931 = 1LL;
	static int32_t x932 = INT32_MAX;
	volatile int32_t t196 = 327;

    t196 = ((x929-x930)>(x931%x932));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x933 = INT64_MIN;
	int64_t x935 = 2014431820695LL;
	uint16_t x936 = 7U;
	volatile int32_t t197 = 10;

    t197 = ((x933-x934)>(x935%x936));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x938 = -19;
	int8_t x939 = INT8_MIN;
	int16_t x940 = 132;
	volatile int32_t t198 = -1;

    t198 = ((x937-x938)>(x939%x940));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x941 = -14671376;
	int8_t x942 = INT8_MIN;
	int64_t x944 = -1LL;
	int32_t t199 = 11;

    t199 = ((x941-x942)>(x943%x944));

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


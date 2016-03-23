
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

static int8_t x1 = INT8_MAX;
static int64_t x5 = INT64_MIN;
int16_t x7 = -1;
int16_t x9 = INT16_MAX;
int32_t t2 = 4484857;
int32_t x16 = INT32_MAX;
int32_t x18 = INT32_MIN;
int64_t x20 = -1LL;
int32_t t4 = -61;
int16_t x22 = -6;
int64_t x28 = INT64_MIN;
int16_t x33 = INT16_MIN;
volatile int32_t x50 = INT32_MIN;
int16_t x58 = INT16_MIN;
volatile int32_t t13 = -1625662;
volatile int64_t x62 = -10175LL;
volatile int32_t t17 = 6;
int32_t t18 = -84168944;
int8_t x86 = INT8_MAX;
int8_t x90 = 27;
int8_t x92 = INT8_MIN;
static int16_t x94 = INT16_MIN;
int16_t x96 = 1336;
int32_t x98 = -1;
uint64_t x103 = UINT64_MAX;
volatile int8_t x104 = INT8_MIN;
int32_t t25 = 3638318;
int16_t x111 = INT16_MIN;
int16_t x113 = 1;
uint64_t x116 = UINT64_MAX;
int64_t x117 = INT64_MIN;
int32_t x120 = -1596;
static volatile int32_t x123 = -1;
int32_t t29 = -87;
volatile int16_t x127 = INT16_MIN;
static int64_t x134 = -1LL;
int8_t x137 = INT8_MAX;
static int32_t x142 = INT32_MIN;
int16_t x146 = INT16_MIN;
int16_t x147 = -288;
int64_t x149 = INT64_MAX;
uint16_t x153 = 7340U;
int16_t x156 = INT16_MIN;
int32_t x163 = 718;
uint16_t x167 = UINT16_MAX;
int32_t t40 = 37559374;
uint8_t x173 = UINT8_MAX;
int8_t x177 = INT8_MAX;
int8_t x179 = -1;
volatile int64_t x185 = -51415LL;
int64_t x186 = 100243862LL;
int64_t x187 = INT64_MAX;
static int32_t x193 = 9;
static int32_t x196 = -1;
volatile int32_t t47 = -2055769;
uint16_t x197 = UINT16_MAX;
int32_t x208 = -1133;
volatile int8_t x212 = -1;
int32_t t51 = 1;
int64_t x214 = -2043114LL;
int8_t x217 = INT8_MAX;
int32_t x218 = -1;
uint16_t x227 = 1270U;
uint8_t x231 = 4U;
int64_t x232 = -1LL;
int32_t t56 = 12988;
int32_t t57 = -22365;
int64_t x237 = INT64_MAX;
int16_t x240 = INT16_MAX;
int64_t x241 = INT64_MAX;
static volatile uint8_t x242 = 1U;
int32_t t59 = 2349639;
int32_t x245 = INT32_MIN;
volatile int32_t t61 = 29830;
int64_t x270 = INT64_MIN;
volatile uint64_t x271 = 1732057951912982804LLU;
uint16_t x280 = 108U;
uint32_t x285 = 105U;
int64_t x290 = -1LL;
uint8_t x293 = 1U;
int64_t x301 = INT64_MAX;
volatile int32_t t74 = -24;
volatile int32_t x309 = INT32_MAX;
uint8_t x312 = UINT8_MAX;
static uint64_t x320 = 565LLU;
static int8_t x321 = INT8_MIN;
uint8_t x323 = UINT8_MAX;
uint64_t x325 = 1150673277LLU;
volatile int32_t t81 = 1297863;
int16_t x338 = -1;
static uint8_t x339 = 28U;
uint16_t x345 = UINT16_MAX;
static int8_t x347 = INT8_MAX;
volatile int32_t t85 = 2715;
volatile int32_t x356 = INT32_MIN;
int32_t x359 = 631510324;
volatile int32_t t87 = 969567;
int32_t x361 = -56828439;
int8_t x364 = -1;
int8_t x366 = INT8_MAX;
int16_t x369 = -1;
static volatile int64_t x370 = 4343994LL;
int32_t t90 = 9427272;
static uint64_t x373 = 378LLU;
int16_t x389 = INT16_MAX;
uint64_t x393 = UINT64_MAX;
int64_t x395 = INT64_MIN;
uint64_t x396 = UINT64_MAX;
volatile int32_t t96 = -3225813;
static int32_t x401 = -1;
uint16_t x407 = 0U;
volatile int32_t t98 = 11454283;
uint32_t x412 = 723U;
int16_t x425 = INT16_MIN;
volatile int32_t x433 = -1;
static int8_t x446 = INT8_MIN;
volatile uint8_t x459 = UINT8_MAX;
volatile int64_t x462 = INT64_MIN;
uint64_t x470 = 117721465LLU;
volatile int32_t t113 = 12843;
static int32_t t116 = 136534646;
volatile int32_t t117 = -833603;
int16_t x494 = 317;
int8_t x496 = -1;
int32_t x501 = INT32_MIN;
static volatile int32_t t121 = 532401;
int32_t t122 = -3725;
int64_t x509 = INT64_MIN;
int32_t x510 = INT32_MAX;
volatile uint64_t x515 = 33449058274LLU;
int32_t t126 = 2955;
int32_t x530 = -1;
int32_t t131 = 3875;
volatile uint64_t x545 = 11915082LLU;
int32_t x552 = INT32_MIN;
volatile uint8_t x555 = UINT8_MAX;
int16_t x559 = -1;
int32_t t135 = 14596;
int32_t x567 = INT32_MIN;
uint16_t x571 = UINT16_MAX;
int32_t t139 = 1807829;
int16_t x583 = 29;
volatile int32_t t141 = -38943;
int8_t x588 = INT8_MAX;
static volatile int16_t x589 = INT16_MIN;
int8_t x600 = -1;
volatile int32_t t145 = -30520;
int16_t x602 = -1;
static int16_t x606 = -1;
static uint64_t x612 = 36189677094LLU;
volatile int32_t x620 = -1;
uint8_t x624 = 9U;
int32_t t151 = -52877649;
uint16_t x628 = 2U;
volatile int32_t t152 = 106;
static int64_t x635 = -2067532LL;
volatile int32_t x644 = -120335;
uint8_t x649 = 54U;
uint32_t x653 = 62943256U;
uint16_t x654 = UINT16_MAX;
int8_t x658 = INT8_MAX;
volatile int32_t t160 = 3195;
int64_t x666 = -192776LL;
int32_t t162 = -2472;
static int16_t x676 = INT16_MAX;
int32_t t163 = 29;
volatile int32_t t164 = 223;
int16_t x684 = 1;
int8_t x687 = INT8_MIN;
uint8_t x688 = UINT8_MAX;
static volatile int32_t t167 = 66;
int32_t x694 = 926151;
int8_t x696 = INT8_MIN;
volatile int32_t t168 = -2003;
int32_t x700 = INT32_MIN;
int32_t x705 = 775895;
int8_t x706 = INT8_MIN;
uint16_t x708 = UINT16_MAX;
int32_t t170 = 26;
static volatile int64_t x710 = INT64_MAX;
int32_t x717 = -1845;
volatile uint64_t x720 = 3959LLU;
int32_t t173 = 149;
int64_t x721 = INT64_MIN;
int32_t t175 = -2060005;
int16_t x732 = INT16_MIN;
volatile uint8_t x742 = 3U;
static int64_t x750 = INT64_MIN;
volatile int16_t x751 = INT16_MIN;
static int64_t x753 = INT64_MIN;
uint8_t x758 = 16U;
int32_t t183 = -1507924;
static volatile int32_t x769 = -718430369;
int16_t x772 = INT16_MIN;
uint16_t x782 = UINT16_MAX;
uint64_t x784 = 6465121LLU;
int32_t t189 = 274461;
static int8_t x787 = -2;
int16_t x790 = -1;
static volatile int64_t x794 = INT64_MAX;
uint16_t x798 = 2U;
volatile int32_t t193 = 1115983;
volatile int16_t x802 = INT16_MAX;
uint8_t x805 = 1U;
int64_t x811 = -1LL;
static int32_t x816 = INT32_MIN;
int32_t t197 = 5953;
uint64_t x819 = UINT64_MAX;
volatile int8_t x824 = 1;


void f0(void) {
    	int32_t x2 = -108;
	volatile uint64_t x3 = UINT64_MAX;
	int32_t x4 = -24024868;
	volatile int32_t t0 = 184184;

    t0 = (x1>(x2<=(x3%x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x6 = INT16_MIN;
	uint32_t x8 = 38U;
	static volatile int32_t t1 = -5;

    t1 = (x5>(x6<=(x7%x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x10 = 8027099U;
	volatile int8_t x11 = INT8_MIN;
	static int64_t x12 = -1LL;

    t2 = (x9>(x10<=(x11%x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = 12;
	volatile int8_t x14 = 20;
	uint32_t x15 = 4124U;
	int32_t t3 = 1332479;

    t3 = (x13>(x14<=(x15%x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 8U;
	int16_t x19 = -1;

    t4 = (x17>(x18<=(x19%x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 32159U;
	int8_t x23 = -1;
	static uint32_t x24 = 910098U;
	volatile int32_t t5 = 7163891;

    t5 = (x21>(x22<=(x23%x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x25 = 28U;
	volatile int32_t x26 = INT32_MIN;
	int64_t x27 = -1LL;
	int32_t t6 = 53;

    t6 = (x25>(x26<=(x27%x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 0U;
	static int16_t x30 = -1;
	int8_t x31 = -7;
	int32_t x32 = 26;
	int32_t t7 = 12637;

    t7 = (x29>(x30<=(x31%x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x34 = INT64_MIN;
	static int8_t x35 = -3;
	uint32_t x36 = UINT32_MAX;
	int32_t t8 = -1;

    t8 = (x33>(x34<=(x35%x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x41 = UINT64_MAX;
	static int16_t x42 = 654;
	int32_t x43 = -3374;
	int8_t x44 = -1;
	int32_t t9 = -9;

    t9 = (x41>(x42<=(x43%x44)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x45 = 2645;
	uint32_t x46 = UINT32_MAX;
	int32_t x47 = -1;
	volatile int16_t x48 = -1;
	static volatile int32_t t10 = 5709;

    t10 = (x45>(x46<=(x47%x48)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = 460338U;
	uint8_t x51 = UINT8_MAX;
	uint8_t x52 = 2U;
	volatile int32_t t11 = -569;

    t11 = (x49>(x50<=(x51%x52)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x53 = 1U;
	volatile int32_t x54 = 12660;
	int64_t x55 = INT64_MIN;
	int8_t x56 = 27;
	volatile int32_t t12 = 264744;

    t12 = (x53>(x54<=(x55%x56)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = -246861432;
	volatile int8_t x59 = INT8_MAX;
	int64_t x60 = 1191932278LL;

    t13 = (x57>(x58<=(x59%x60)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x61 = 79U;
	volatile int16_t x63 = -1;
	int64_t x64 = INT64_MIN;
	volatile int32_t t14 = 424356;

    t14 = (x61>(x62<=(x63%x64)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x65 = 0U;
	volatile int16_t x66 = INT16_MIN;
	uint16_t x67 = 0U;
	static uint8_t x68 = 10U;
	volatile int32_t t15 = -2178;

    t15 = (x65>(x66<=(x67%x68)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x69 = 42;
	uint32_t x70 = 24323U;
	int32_t x71 = -1;
	uint32_t x72 = UINT32_MAX;
	int32_t t16 = -306179;

    t16 = (x69>(x70<=(x71%x72)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = -47772694;
	uint64_t x74 = UINT64_MAX;
	volatile uint64_t x75 = UINT64_MAX;
	int16_t x76 = INT16_MAX;

    t17 = (x73>(x74<=(x75%x76)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x77 = INT32_MAX;
	uint8_t x78 = 2U;
	static int8_t x79 = -1;
	int64_t x80 = -1LL;

    t18 = (x77>(x78<=(x79%x80)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = INT64_MAX;
	uint32_t x82 = 0U;
	static uint64_t x83 = 15195206LLU;
	uint8_t x84 = UINT8_MAX;
	static volatile int32_t t19 = 3381839;

    t19 = (x81>(x82<=(x83%x84)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x85 = INT8_MAX;
	static uint8_t x87 = 10U;
	volatile uint64_t x88 = UINT64_MAX;
	volatile int32_t t20 = 80628641;

    t20 = (x85>(x86<=(x87%x88)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x89 = INT32_MIN;
	uint32_t x91 = UINT32_MAX;
	int32_t t21 = 135;

    t21 = (x89>(x90<=(x91%x92)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x93 = INT32_MIN;
	int16_t x95 = INT16_MIN;
	volatile int32_t t22 = 6;

    t22 = (x93>(x94<=(x95%x96)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = 1698;
	volatile uint8_t x99 = UINT8_MAX;
	uint8_t x100 = UINT8_MAX;
	static volatile int32_t t23 = 1628;

    t23 = (x97>(x98<=(x99%x100)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x101 = UINT32_MAX;
	static uint32_t x102 = 669654991U;
	int32_t t24 = -700347825;

    t24 = (x101>(x102<=(x103%x104)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = -1LL;
	uint8_t x106 = 18U;
	int8_t x107 = -1;
	int8_t x108 = INT8_MAX;

    t25 = (x105>(x106<=(x107%x108)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x109 = INT16_MIN;
	uint64_t x110 = 188862LLU;
	static volatile uint16_t x112 = UINT16_MAX;
	int32_t t26 = -98092;

    t26 = (x109>(x110<=(x111%x112)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int32_t x114 = INT32_MIN;
	uint16_t x115 = 31U;
	int32_t t27 = -183;

    t27 = (x113>(x114<=(x115%x116)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x118 = UINT64_MAX;
	volatile int16_t x119 = INT16_MAX;
	volatile int32_t t28 = 390;

    t28 = (x117>(x118<=(x119%x120)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = 763334;
	int64_t x122 = INT64_MAX;
	static uint32_t x124 = 85563U;

    t29 = (x121>(x122<=(x123%x124)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = INT32_MAX;
	uint64_t x126 = 4130791250817998LLU;
	int16_t x128 = 10;
	volatile int32_t t30 = 537;

    t30 = (x125>(x126<=(x127%x128)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = INT16_MAX;
	volatile int32_t x130 = -7576;
	static uint64_t x131 = 8988531688683427LLU;
	int32_t x132 = 3512197;
	volatile int32_t t31 = 49027;

    t31 = (x129>(x130<=(x131%x132)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x133 = UINT64_MAX;
	int64_t x135 = INT64_MIN;
	static int64_t x136 = -8826107348243LL;
	static volatile int32_t t32 = 7952002;

    t32 = (x133>(x134<=(x135%x136)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x138 = INT8_MAX;
	uint16_t x139 = UINT16_MAX;
	int8_t x140 = INT8_MIN;
	static int32_t t33 = 58155;

    t33 = (x137>(x138<=(x139%x140)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int64_t x141 = INT64_MIN;
	uint8_t x143 = UINT8_MAX;
	uint64_t x144 = 706628723530883LLU;
	volatile int32_t t34 = -9919488;

    t34 = (x141>(x142<=(x143%x144)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x145 = UINT64_MAX;
	uint32_t x148 = 660236U;
	volatile int32_t t35 = 6968373;

    t35 = (x145>(x146<=(x147%x148)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x150 = -1;
	volatile int32_t x151 = -139;
	volatile int16_t x152 = 6;
	volatile int32_t t36 = -7113068;

    t36 = (x149>(x150<=(x151%x152)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x154 = INT64_MIN;
	uint64_t x155 = 396344650LLU;
	volatile int32_t t37 = -166708637;

    t37 = (x153>(x154<=(x155%x156)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x157 = 7104370225481LLU;
	static volatile uint32_t x158 = 3U;
	uint64_t x159 = 36421091449275206LLU;
	int8_t x160 = INT8_MIN;
	int32_t t38 = 54;

    t38 = (x157>(x158<=(x159%x160)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x161 = -1;
	int16_t x162 = -1;
	int64_t x164 = INT64_MAX;
	volatile int32_t t39 = 772;

    t39 = (x161>(x162<=(x163%x164)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x165 = 3368349563LLU;
	int8_t x166 = -3;
	int32_t x168 = -1;

    t40 = (x165>(x166<=(x167%x168)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x169 = -1LL;
	static int16_t x170 = 13;
	static volatile int8_t x171 = INT8_MIN;
	uint32_t x172 = UINT32_MAX;
	volatile int32_t t41 = 0;

    t41 = (x169>(x170<=(x171%x172)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x174 = 3845U;
	int16_t x175 = 1;
	uint32_t x176 = 158423U;
	volatile int32_t t42 = -7933498;

    t42 = (x173>(x174<=(x175%x176)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x178 = -27408751;
	int32_t x180 = -124;
	volatile int32_t t43 = -14638;

    t43 = (x177>(x178<=(x179%x180)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x181 = 587U;
	volatile int32_t x182 = INT32_MIN;
	int32_t x183 = 926881452;
	uint16_t x184 = 3U;
	int32_t t44 = -78;

    t44 = (x181>(x182<=(x183%x184)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x188 = 284808116;
	static int32_t t45 = 28;

    t45 = (x185>(x186<=(x187%x188)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint16_t x189 = 12454U;
	int64_t x190 = 866LL;
	static volatile int8_t x191 = INT8_MAX;
	uint16_t x192 = 910U;
	int32_t t46 = -321;

    t46 = (x189>(x190<=(x191%x192)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x194 = 2;
	uint32_t x195 = 994U;

    t47 = (x193>(x194<=(x195%x196)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x198 = 1U;
	int8_t x199 = -1;
	volatile uint8_t x200 = 19U;
	static volatile int32_t t48 = -2310;

    t48 = (x197>(x198<=(x199%x200)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x201 = 50U;
	int64_t x202 = INT64_MIN;
	static volatile int32_t x203 = INT32_MIN;
	volatile int64_t x204 = 2250925388368800LL;
	volatile int32_t t49 = 2;

    t49 = (x201>(x202<=(x203%x204)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x205 = INT8_MIN;
	volatile uint32_t x206 = 1644931U;
	int16_t x207 = -168;
	static volatile int32_t t50 = 63221;

    t50 = (x205>(x206<=(x207%x208)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x209 = -1;
	int32_t x210 = INT32_MIN;
	int32_t x211 = 50739294;

    t51 = (x209>(x210<=(x211%x212)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x213 = INT16_MIN;
	uint64_t x215 = 5651248290673365011LLU;
	volatile int16_t x216 = -30;
	int32_t t52 = 158045;

    t52 = (x213>(x214<=(x215%x216)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x219 = INT8_MAX;
	int16_t x220 = -1;
	int32_t t53 = 267;

    t53 = (x217>(x218<=(x219%x220)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x221 = -263366523LL;
	int16_t x222 = -13;
	int64_t x223 = 2073615603754311LL;
	uint16_t x224 = 869U;
	static volatile int32_t t54 = -50;

    t54 = (x221>(x222<=(x223%x224)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x225 = 8;
	int16_t x226 = INT16_MAX;
	uint8_t x228 = 52U;
	int32_t t55 = -785029;

    t55 = (x225>(x226<=(x227%x228)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x229 = INT8_MIN;
	int64_t x230 = INT64_MIN;

    t56 = (x229>(x230<=(x231%x232)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x233 = INT8_MIN;
	int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MAX;
	uint16_t x236 = 878U;

    t57 = (x233>(x234<=(x235%x236)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x238 = INT32_MIN;
	int16_t x239 = -112;
	int32_t t58 = -111237714;

    t58 = (x237>(x238<=(x239%x240)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x243 = INT64_MIN;
	int8_t x244 = 1;

    t59 = (x241>(x242<=(x243%x244)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x246 = -1;
	int64_t x247 = 125040316LL;
	uint64_t x248 = UINT64_MAX;
	volatile int32_t t60 = 32;

    t60 = (x245>(x246<=(x247%x248)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x249 = -20;
	volatile int16_t x250 = 177;
	volatile int64_t x251 = -1LL;
	int64_t x252 = -8821LL;

    t61 = (x249>(x250<=(x251%x252)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x253 = -1;
	int32_t x254 = INT32_MIN;
	volatile int64_t x255 = -1LL;
	uint32_t x256 = UINT32_MAX;
	int32_t t62 = -90;

    t62 = (x253>(x254<=(x255%x256)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x257 = -6959LL;
	uint16_t x258 = 20U;
	int16_t x259 = INT16_MIN;
	int32_t x260 = -42;
	int32_t t63 = 5;

    t63 = (x257>(x258<=(x259%x260)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x261 = 1665;
	int32_t x262 = INT32_MIN;
	int32_t x263 = 2;
	int16_t x264 = INT16_MIN;
	volatile int32_t t64 = -3737;

    t64 = (x261>(x262<=(x263%x264)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint64_t x265 = UINT64_MAX;
	int64_t x266 = INT64_MAX;
	int32_t x267 = INT32_MIN;
	static uint32_t x268 = UINT32_MAX;
	static volatile int32_t t65 = -17536768;

    t65 = (x265>(x266<=(x267%x268)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int32_t x269 = -83;
	volatile int8_t x272 = -1;
	volatile int32_t t66 = 2;

    t66 = (x269>(x270<=(x271%x272)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x273 = 251463U;
	int64_t x274 = INT64_MIN;
	static uint16_t x275 = 30454U;
	volatile int32_t x276 = -1;
	volatile int32_t t67 = -1819985;

    t67 = (x273>(x274<=(x275%x276)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int64_t x277 = -21787842256378758LL;
	volatile int32_t x278 = INT32_MAX;
	uint8_t x279 = 1U;
	volatile int32_t t68 = -31138;

    t68 = (x277>(x278<=(x279%x280)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x281 = UINT16_MAX;
	static int8_t x282 = INT8_MIN;
	static int32_t x283 = -2928137;
	int8_t x284 = -1;
	int32_t t69 = 28;

    t69 = (x281>(x282<=(x283%x284)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x286 = -1;
	uint32_t x287 = 1010U;
	volatile int8_t x288 = 43;
	volatile int32_t t70 = -53;

    t70 = (x285>(x286<=(x287%x288)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x289 = 44588108;
	int16_t x291 = 858;
	uint32_t x292 = 26U;
	int32_t t71 = -316171501;

    t71 = (x289>(x290<=(x291%x292)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x294 = 1U;
	int64_t x295 = INT64_MAX;
	static int64_t x296 = INT64_MIN;
	volatile int32_t t72 = -922899580;

    t72 = (x293>(x294<=(x295%x296)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x297 = 7233U;
	static volatile int32_t x298 = -1;
	int16_t x299 = 451;
	uint16_t x300 = 4785U;
	volatile int32_t t73 = -158;

    t73 = (x297>(x298<=(x299%x300)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x302 = 17U;
	static int8_t x303 = -1;
	int64_t x304 = -10666975453596LL;

    t74 = (x301>(x302<=(x303%x304)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x310 = INT64_MIN;
	uint8_t x311 = 34U;
	int32_t t75 = 620749;

    t75 = (x309>(x310<=(x311%x312)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x313 = INT32_MIN;
	int8_t x314 = -2;
	uint16_t x315 = 47U;
	int32_t x316 = INT32_MIN;
	int32_t t76 = -955395;

    t76 = (x313>(x314<=(x315%x316)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x317 = 11;
	int16_t x318 = -1;
	volatile uint64_t x319 = UINT64_MAX;
	volatile int32_t t77 = -48652;

    t77 = (x317>(x318<=(x319%x320)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint16_t x322 = 3808U;
	uint64_t x324 = UINT64_MAX;
	int32_t t78 = 286792;

    t78 = (x321>(x322<=(x323%x324)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x326 = INT16_MIN;
	int16_t x327 = -1;
	volatile int32_t x328 = -1;
	int32_t t79 = 1263;

    t79 = (x325>(x326<=(x327%x328)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x329 = 3U;
	volatile int8_t x330 = 5;
	int8_t x331 = 39;
	int32_t x332 = 115;
	int32_t t80 = 5078265;

    t80 = (x329>(x330<=(x331%x332)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x333 = -1;
	uint64_t x334 = UINT64_MAX;
	uint16_t x335 = 1143U;
	static uint32_t x336 = 15853076U;

    t81 = (x333>(x334<=(x335%x336)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x337 = UINT8_MAX;
	int64_t x340 = -2054360171469525LL;
	int32_t t82 = -217451;

    t82 = (x337>(x338<=(x339%x340)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x341 = -1;
	uint64_t x342 = 1254LLU;
	uint8_t x343 = 0U;
	static uint8_t x344 = UINT8_MAX;
	int32_t t83 = 169684;

    t83 = (x341>(x342<=(x343%x344)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x346 = INT8_MAX;
	int64_t x348 = INT64_MAX;
	volatile int32_t t84 = 1009;

    t84 = (x345>(x346<=(x347%x348)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x349 = 94016437;
	int16_t x350 = -22;
	static int64_t x351 = -1LL;
	static int8_t x352 = INT8_MIN;

    t85 = (x349>(x350<=(x351%x352)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x353 = UINT32_MAX;
	int8_t x354 = INT8_MIN;
	uint16_t x355 = 415U;
	volatile int32_t t86 = -162794349;

    t86 = (x353>(x354<=(x355%x356)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x357 = UINT16_MAX;
	uint32_t x358 = UINT32_MAX;
	int64_t x360 = INT64_MIN;

    t87 = (x357>(x358<=(x359%x360)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x362 = -1;
	volatile int32_t x363 = INT32_MIN;
	volatile int32_t t88 = 79169039;

    t88 = (x361>(x362<=(x363%x364)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x365 = -1;
	static volatile int32_t x367 = INT32_MIN;
	uint16_t x368 = 848U;
	int32_t t89 = 308453;

    t89 = (x365>(x366<=(x367%x368)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x371 = INT16_MIN;
	static int64_t x372 = INT64_MIN;

    t90 = (x369>(x370<=(x371%x372)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x374 = -1;
	static volatile int64_t x375 = INT64_MAX;
	uint64_t x376 = 26570201494LLU;
	int32_t t91 = 13063821;

    t91 = (x373>(x374<=(x375%x376)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x381 = 2726;
	uint8_t x382 = 7U;
	uint8_t x383 = UINT8_MAX;
	static int32_t x384 = INT32_MIN;
	volatile int32_t t92 = 0;

    t92 = (x381>(x382<=(x383%x384)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x385 = UINT16_MAX;
	int8_t x386 = INT8_MIN;
	int16_t x387 = 66;
	volatile uint16_t x388 = UINT16_MAX;
	int32_t t93 = -7;

    t93 = (x385>(x386<=(x387%x388)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x390 = UINT64_MAX;
	static int64_t x391 = INT64_MIN;
	volatile uint64_t x392 = 287084859844506LLU;
	int32_t t94 = 0;

    t94 = (x389>(x390<=(x391%x392)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x394 = -125755383LL;
	int32_t t95 = -2810;

    t95 = (x393>(x394<=(x395%x396)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x397 = UINT32_MAX;
	int16_t x398 = -1;
	static uint16_t x399 = 3U;
	static int16_t x400 = INT16_MIN;

    t96 = (x397>(x398<=(x399%x400)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x402 = 24U;
	static int32_t x403 = -1;
	uint8_t x404 = 72U;
	static int32_t t97 = -470180;

    t97 = (x401>(x402<=(x403%x404)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x405 = INT16_MIN;
	int32_t x406 = INT32_MAX;
	int32_t x408 = -1;

    t98 = (x405>(x406<=(x407%x408)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x409 = -50;
	volatile int64_t x410 = INT64_MAX;
	int64_t x411 = INT64_MAX;
	volatile int32_t t99 = -16509;

    t99 = (x409>(x410<=(x411%x412)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x413 = 2720U;
	static uint32_t x414 = 10132U;
	int8_t x415 = INT8_MIN;
	static int8_t x416 = -1;
	int32_t t100 = 0;

    t100 = (x413>(x414<=(x415%x416)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x417 = 460143145;
	uint32_t x418 = UINT32_MAX;
	uint16_t x419 = UINT16_MAX;
	uint64_t x420 = 21677500332LLU;
	volatile int32_t t101 = -231825897;

    t101 = (x417>(x418<=(x419%x420)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x421 = 35U;
	static uint64_t x422 = 3178716639LLU;
	volatile uint16_t x423 = UINT16_MAX;
	int16_t x424 = INT16_MAX;
	volatile int32_t t102 = 0;

    t102 = (x421>(x422<=(x423%x424)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x426 = INT16_MAX;
	static volatile uint64_t x427 = 19LLU;
	int8_t x428 = INT8_MIN;
	int32_t t103 = 160973;

    t103 = (x425>(x426<=(x427%x428)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x429 = 113583;
	int32_t x430 = -1;
	int8_t x431 = INT8_MIN;
	static volatile int32_t x432 = -660501;
	int32_t t104 = 0;

    t104 = (x429>(x430<=(x431%x432)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x434 = INT64_MIN;
	int16_t x435 = INT16_MIN;
	int32_t x436 = -1;
	static int32_t t105 = 79728;

    t105 = (x433>(x434<=(x435%x436)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x437 = -1;
	volatile int16_t x438 = -1;
	int32_t x439 = -1711;
	int64_t x440 = -166159767LL;
	volatile int32_t t106 = -97732;

    t106 = (x437>(x438<=(x439%x440)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x441 = 94056176LL;
	int64_t x442 = -1LL;
	int64_t x443 = -1536404051643541LL;
	static int8_t x444 = INT8_MIN;
	int32_t t107 = -592;

    t107 = (x441>(x442<=(x443%x444)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int32_t x445 = 857326;
	volatile uint32_t x447 = UINT32_MAX;
	volatile int64_t x448 = INT64_MAX;
	int32_t t108 = -5629;

    t108 = (x445>(x446<=(x447%x448)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x449 = 8222094670527LL;
	int32_t x450 = INT32_MAX;
	static volatile uint64_t x451 = 2470570888438LLU;
	volatile int8_t x452 = INT8_MIN;
	int32_t t109 = 1;

    t109 = (x449>(x450<=(x451%x452)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x453 = -1;
	static uint32_t x454 = UINT32_MAX;
	static int32_t x455 = INT32_MIN;
	int16_t x456 = -1;
	volatile int32_t t110 = -15;

    t110 = (x453>(x454<=(x455%x456)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x457 = 12;
	int64_t x458 = -1LL;
	uint8_t x460 = 55U;
	volatile int32_t t111 = 55843;

    t111 = (x457>(x458<=(x459%x460)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x461 = INT32_MIN;
	static int64_t x463 = -1LL;
	int8_t x464 = INT8_MAX;
	volatile int32_t t112 = 7232208;

    t112 = (x461>(x462<=(x463%x464)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x469 = INT16_MIN;
	uint32_t x471 = UINT32_MAX;
	volatile int32_t x472 = 108529;

    t113 = (x469>(x470<=(x471%x472)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x473 = 25U;
	volatile int16_t x474 = INT16_MAX;
	int16_t x475 = INT16_MIN;
	int32_t x476 = -1;
	volatile int32_t t114 = -49547;

    t114 = (x473>(x474<=(x475%x476)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x477 = -31083LL;
	static int64_t x478 = INT64_MIN;
	static int16_t x479 = -7212;
	int32_t x480 = INT32_MIN;
	int32_t t115 = 219;

    t115 = (x477>(x478<=(x479%x480)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x481 = -1;
	int64_t x482 = INT64_MIN;
	static uint8_t x483 = UINT8_MAX;
	static int32_t x484 = INT32_MAX;

    t116 = (x481>(x482<=(x483%x484)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x485 = UINT64_MAX;
	int16_t x486 = -3;
	volatile int32_t x487 = -1;
	int32_t x488 = INT32_MAX;

    t117 = (x485>(x486<=(x487%x488)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x489 = INT32_MIN;
	int16_t x490 = INT16_MAX;
	uint8_t x491 = UINT8_MAX;
	volatile int32_t x492 = INT32_MAX;
	volatile int32_t t118 = -17554969;

    t118 = (x489>(x490<=(x491%x492)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x493 = 3162U;
	static int32_t x495 = -1;
	volatile int32_t t119 = -2;

    t119 = (x493>(x494<=(x495%x496)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x497 = INT64_MIN;
	uint32_t x498 = UINT32_MAX;
	uint64_t x499 = 1056803250174352LLU;
	int64_t x500 = INT64_MAX;
	volatile int32_t t120 = -13;

    t120 = (x497>(x498<=(x499%x500)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x502 = INT8_MIN;
	uint32_t x503 = UINT32_MAX;
	int8_t x504 = INT8_MIN;

    t121 = (x501>(x502<=(x503%x504)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x505 = UINT8_MAX;
	static int32_t x506 = 0;
	int8_t x507 = INT8_MAX;
	int16_t x508 = INT16_MIN;

    t122 = (x505>(x506<=(x507%x508)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x511 = 1U;
	int8_t x512 = INT8_MIN;
	int32_t t123 = 28;

    t123 = (x509>(x510<=(x511%x512)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x513 = INT32_MAX;
	static uint8_t x514 = UINT8_MAX;
	static volatile int32_t x516 = INT32_MIN;
	volatile int32_t t124 = 3946;

    t124 = (x513>(x514<=(x515%x516)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x517 = 265134523519221LLU;
	uint8_t x518 = 2U;
	int16_t x519 = INT16_MAX;
	volatile uint32_t x520 = 59U;
	int32_t t125 = -114843638;

    t125 = (x517>(x518<=(x519%x520)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x521 = 64U;
	volatile uint64_t x522 = 6272961LLU;
	static int16_t x523 = 1224;
	int32_t x524 = INT32_MIN;

    t126 = (x521>(x522<=(x523%x524)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x525 = INT8_MIN;
	static volatile int8_t x526 = INT8_MAX;
	int8_t x527 = INT8_MAX;
	int32_t x528 = -14510761;
	int32_t t127 = -251167;

    t127 = (x525>(x526<=(x527%x528)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x529 = INT16_MIN;
	volatile int8_t x531 = INT8_MIN;
	volatile uint16_t x532 = 2U;
	int32_t t128 = 2524;

    t128 = (x529>(x530<=(x531%x532)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint64_t x533 = 2730767LLU;
	int64_t x534 = INT64_MIN;
	volatile int32_t x535 = -1;
	static int64_t x536 = INT64_MIN;
	volatile int32_t t129 = 565;

    t129 = (x533>(x534<=(x535%x536)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x537 = 6LLU;
	uint8_t x538 = 127U;
	int64_t x539 = INT64_MAX;
	uint16_t x540 = 884U;
	static volatile int32_t t130 = -687;

    t130 = (x537>(x538<=(x539%x540)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x541 = 449336U;
	uint32_t x542 = UINT32_MAX;
	volatile int32_t x543 = INT32_MAX;
	volatile int16_t x544 = INT16_MAX;

    t131 = (x541>(x542<=(x543%x544)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x546 = 17U;
	int8_t x547 = -1;
	static uint32_t x548 = UINT32_MAX;
	volatile int32_t t132 = 117;

    t132 = (x545>(x546<=(x547%x548)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x549 = -1;
	volatile int64_t x550 = INT64_MIN;
	uint64_t x551 = UINT64_MAX;
	int32_t t133 = -8;

    t133 = (x549>(x550<=(x551%x552)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x553 = 3482556509589862217LL;
	static uint32_t x554 = UINT32_MAX;
	int16_t x556 = -1;
	volatile int32_t t134 = 35158221;

    t134 = (x553>(x554<=(x555%x556)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x557 = -92;
	volatile uint8_t x558 = 4U;
	int8_t x560 = -1;

    t135 = (x557>(x558<=(x559%x560)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x561 = INT64_MAX;
	volatile uint8_t x562 = 4U;
	volatile uint64_t x563 = 6175724944869LLU;
	int8_t x564 = 1;
	static volatile int32_t t136 = 5;

    t136 = (x561>(x562<=(x563%x564)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x565 = -1;
	int64_t x566 = INT64_MAX;
	volatile int32_t x568 = INT32_MAX;
	volatile int32_t t137 = -448;

    t137 = (x565>(x566<=(x567%x568)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x569 = INT16_MIN;
	volatile uint8_t x570 = 0U;
	uint64_t x572 = UINT64_MAX;
	volatile int32_t t138 = 9;

    t138 = (x569>(x570<=(x571%x572)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x573 = UINT8_MAX;
	int16_t x574 = INT16_MIN;
	int64_t x575 = -114228546248LL;
	int8_t x576 = -1;

    t139 = (x573>(x574<=(x575%x576)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x577 = 19711U;
	int64_t x578 = INT64_MIN;
	static int8_t x579 = INT8_MIN;
	uint8_t x580 = 108U;
	volatile int32_t t140 = -2;

    t140 = (x577>(x578<=(x579%x580)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x581 = 82U;
	uint64_t x582 = UINT64_MAX;
	uint8_t x584 = UINT8_MAX;

    t141 = (x581>(x582<=(x583%x584)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x585 = UINT8_MAX;
	uint64_t x586 = 805318344LLU;
	uint8_t x587 = 1U;
	static int32_t t142 = -7455;

    t142 = (x585>(x586<=(x587%x588)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x590 = -1233;
	uint64_t x591 = 1LLU;
	uint64_t x592 = UINT64_MAX;
	volatile int32_t t143 = -110;

    t143 = (x589>(x590<=(x591%x592)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x593 = -72;
	int16_t x594 = INT16_MAX;
	volatile int8_t x595 = INT8_MIN;
	uint16_t x596 = 12U;
	int32_t t144 = 16531;

    t144 = (x593>(x594<=(x595%x596)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x597 = INT64_MIN;
	int64_t x598 = INT64_MIN;
	uint32_t x599 = UINT32_MAX;

    t145 = (x597>(x598<=(x599%x600)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x601 = 162932224;
	static int16_t x603 = 53;
	uint8_t x604 = UINT8_MAX;
	volatile int32_t t146 = 131638894;

    t146 = (x601>(x602<=(x603%x604)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x605 = 2;
	uint8_t x607 = 21U;
	int32_t x608 = INT32_MIN;
	int32_t t147 = 14;

    t147 = (x605>(x606<=(x607%x608)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x609 = UINT8_MAX;
	int64_t x610 = 1936852556709LL;
	int32_t x611 = 1;
	volatile int32_t t148 = 123895;

    t148 = (x609>(x610<=(x611%x612)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x613 = 1U;
	volatile int64_t x614 = -1LL;
	uint16_t x615 = 228U;
	int32_t x616 = INT32_MIN;
	static int32_t t149 = 407;

    t149 = (x613>(x614<=(x615%x616)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x617 = INT8_MAX;
	static volatile uint8_t x618 = 0U;
	uint32_t x619 = UINT32_MAX;
	int32_t t150 = -2006;

    t150 = (x617>(x618<=(x619%x620)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x621 = INT64_MIN;
	static int32_t x622 = -37;
	int32_t x623 = INT32_MIN;

    t151 = (x621>(x622<=(x623%x624)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x625 = 35895U;
	int16_t x626 = 0;
	int16_t x627 = INT16_MAX;

    t152 = (x625>(x626<=(x627%x628)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x629 = -1;
	volatile uint8_t x630 = 12U;
	int64_t x631 = INT64_MIN;
	int8_t x632 = INT8_MAX;
	volatile int32_t t153 = -2;

    t153 = (x629>(x630<=(x631%x632)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x633 = 4;
	int64_t x634 = INT64_MIN;
	uint16_t x636 = 42U;
	int32_t t154 = 93;

    t154 = (x633>(x634<=(x635%x636)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x641 = -2595776;
	int8_t x642 = 4;
	int16_t x643 = 15385;
	int32_t t155 = -1;

    t155 = (x641>(x642<=(x643%x644)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x645 = 95LLU;
	int32_t x646 = INT32_MAX;
	int64_t x647 = INT64_MAX;
	int16_t x648 = INT16_MIN;
	int32_t t156 = -148780114;

    t156 = (x645>(x646<=(x647%x648)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x650 = UINT64_MAX;
	int16_t x651 = INT16_MIN;
	int16_t x652 = -13242;
	volatile int32_t t157 = 101370288;

    t157 = (x649>(x650<=(x651%x652)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x655 = 7U;
	int32_t x656 = INT32_MAX;
	volatile int32_t t158 = -21277289;

    t158 = (x653>(x654<=(x655%x656)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x657 = INT32_MAX;
	int8_t x659 = INT8_MIN;
	int16_t x660 = INT16_MIN;
	int32_t t159 = -132296;

    t159 = (x657>(x658<=(x659%x660)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x661 = INT16_MAX;
	uint64_t x662 = 552LLU;
	uint16_t x663 = 93U;
	static volatile uint64_t x664 = UINT64_MAX;

    t160 = (x661>(x662<=(x663%x664)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x665 = 4;
	uint64_t x667 = UINT64_MAX;
	int16_t x668 = INT16_MIN;
	int32_t t161 = -103953;

    t161 = (x665>(x666<=(x667%x668)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x669 = 70U;
	volatile int32_t x670 = -50;
	static int16_t x671 = -1;
	int32_t x672 = INT32_MIN;

    t162 = (x669>(x670<=(x671%x672)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x673 = INT32_MIN;
	uint32_t x674 = 508996U;
	volatile uint8_t x675 = UINT8_MAX;

    t163 = (x673>(x674<=(x675%x676)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x677 = 0;
	static uint64_t x678 = 159400168308LLU;
	static volatile int64_t x679 = 1130437060536229860LL;
	static int64_t x680 = 34293435261LL;

    t164 = (x677>(x678<=(x679%x680)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x681 = INT64_MAX;
	uint64_t x682 = 88780516LLU;
	uint64_t x683 = 23406573271075712LLU;
	int32_t t165 = -7429752;

    t165 = (x681>(x682<=(x683%x684)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x685 = 208;
	uint32_t x686 = 4912065U;
	int32_t t166 = 60;

    t166 = (x685>(x686<=(x687%x688)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x689 = INT8_MAX;
	int64_t x690 = INT64_MIN;
	uint32_t x691 = 1945589006U;
	uint8_t x692 = 14U;

    t167 = (x689>(x690<=(x691%x692)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x693 = INT8_MIN;
	uint8_t x695 = 7U;

    t168 = (x693>(x694<=(x695%x696)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x697 = -256126237LL;
	int16_t x698 = INT16_MIN;
	uint64_t x699 = UINT64_MAX;
	int32_t t169 = -800451225;

    t169 = (x697>(x698<=(x699%x700)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x707 = 7;

    t170 = (x705>(x706<=(x707%x708)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x709 = 793LL;
	volatile int32_t x711 = INT32_MAX;
	static volatile int32_t x712 = INT32_MAX;
	static volatile int32_t t171 = 13167;

    t171 = (x709>(x710<=(x711%x712)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x713 = INT64_MIN;
	volatile uint16_t x714 = 252U;
	int8_t x715 = INT8_MIN;
	int8_t x716 = -1;
	static int32_t t172 = -71012;

    t172 = (x713>(x714<=(x715%x716)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x718 = 0;
	int8_t x719 = INT8_MIN;

    t173 = (x717>(x718<=(x719%x720)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x722 = 21U;
	volatile int32_t x723 = INT32_MIN;
	int32_t x724 = -1;
	int32_t t174 = -16;

    t174 = (x721>(x722<=(x723%x724)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x725 = -8519;
	static int32_t x726 = 52;
	volatile uint8_t x727 = 116U;
	static int64_t x728 = INT64_MIN;

    t175 = (x725>(x726<=(x727%x728)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x729 = INT32_MAX;
	static uint16_t x730 = UINT16_MAX;
	uint16_t x731 = UINT16_MAX;
	int32_t t176 = 2266;

    t176 = (x729>(x730<=(x731%x732)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x733 = UINT32_MAX;
	uint64_t x734 = UINT64_MAX;
	int16_t x735 = -1;
	static int64_t x736 = 758909643201LL;
	int32_t t177 = -6379;

    t177 = (x733>(x734<=(x735%x736)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint16_t x737 = 59U;
	uint8_t x738 = 1U;
	int8_t x739 = INT8_MAX;
	uint64_t x740 = 14101550850762LLU;
	int32_t t178 = -4810;

    t178 = (x737>(x738<=(x739%x740)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x741 = 1778533;
	int32_t x743 = -2950037;
	volatile uint32_t x744 = 2479U;
	volatile int32_t t179 = 1404423;

    t179 = (x741>(x742<=(x743%x744)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x745 = INT8_MIN;
	int64_t x746 = INT64_MIN;
	int32_t x747 = INT32_MAX;
	int32_t x748 = INT32_MAX;
	int32_t t180 = -1;

    t180 = (x745>(x746<=(x747%x748)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x749 = INT32_MIN;
	uint16_t x752 = 50U;
	int32_t t181 = -3323;

    t181 = (x749>(x750<=(x751%x752)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x754 = UINT32_MAX;
	uint64_t x755 = UINT64_MAX;
	int16_t x756 = -609;
	volatile int32_t t182 = -228652833;

    t182 = (x753>(x754<=(x755%x756)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x757 = INT16_MIN;
	static uint16_t x759 = 21718U;
	static volatile uint8_t x760 = 23U;

    t183 = (x757>(x758<=(x759%x760)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint16_t x761 = 65U;
	static uint16_t x762 = 3025U;
	volatile int32_t x763 = INT32_MAX;
	volatile uint8_t x764 = 2U;
	int32_t t184 = 36253922;

    t184 = (x761>(x762<=(x763%x764)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x765 = INT32_MAX;
	volatile int8_t x766 = INT8_MIN;
	int64_t x767 = -1LL;
	uint16_t x768 = 98U;
	int32_t t185 = 25599429;

    t185 = (x765>(x766<=(x767%x768)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint8_t x770 = UINT8_MAX;
	volatile int16_t x771 = -2018;
	int32_t t186 = -445001834;

    t186 = (x769>(x770<=(x771%x772)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x773 = INT8_MIN;
	int16_t x774 = -1247;
	uint32_t x775 = UINT32_MAX;
	int32_t x776 = INT32_MIN;
	int32_t t187 = -3147;

    t187 = (x773>(x774<=(x775%x776)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x777 = 4074181159LL;
	int64_t x778 = INT64_MIN;
	int8_t x779 = INT8_MAX;
	int64_t x780 = INT64_MIN;
	volatile int32_t t188 = 266867;

    t188 = (x777>(x778<=(x779%x780)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x781 = -4127891091032155658LL;
	int16_t x783 = INT16_MIN;

    t189 = (x781>(x782<=(x783%x784)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int32_t x785 = 1358;
	int32_t x786 = 481;
	int16_t x788 = 2;
	int32_t t190 = 190;

    t190 = (x785>(x786<=(x787%x788)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x789 = -1LL;
	uint16_t x791 = UINT16_MAX;
	int64_t x792 = 249532LL;
	int32_t t191 = -1;

    t191 = (x789>(x790<=(x791%x792)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x793 = UINT8_MAX;
	uint16_t x795 = 5U;
	int32_t x796 = -1;
	int32_t t192 = 97041249;

    t192 = (x793>(x794<=(x795%x796)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x797 = 382000;
	int16_t x799 = -1;
	int64_t x800 = -139572559154LL;

    t193 = (x797>(x798<=(x799%x800)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x801 = -27LL;
	int8_t x803 = 0;
	uint64_t x804 = UINT64_MAX;
	int32_t t194 = -442424;

    t194 = (x801>(x802<=(x803%x804)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x806 = INT32_MIN;
	int64_t x807 = 25778005893521225LL;
	uint64_t x808 = UINT64_MAX;
	volatile int32_t t195 = 693230;

    t195 = (x805>(x806<=(x807%x808)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x809 = -1LL;
	int64_t x810 = -30078048LL;
	volatile int32_t x812 = -1;
	static int32_t t196 = 2186178;

    t196 = (x809>(x810<=(x811%x812)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x813 = INT16_MIN;
	int32_t x814 = INT32_MIN;
	int32_t x815 = INT32_MAX;

    t197 = (x813>(x814<=(x815%x816)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x817 = -1;
	static volatile uint16_t x818 = 1U;
	uint64_t x820 = UINT64_MAX;
	int32_t t198 = -2;

    t198 = (x817>(x818<=(x819%x820)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x821 = UINT32_MAX;
	volatile int32_t x822 = 31394;
	int64_t x823 = -3332361816LL;
	static int32_t t199 = -2437;

    t199 = (x821>(x822<=(x823%x824)));

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



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

static int64_t x15 = 823428309763LL;
static uint8_t x17 = UINT8_MAX;
int16_t x21 = INT16_MIN;
int16_t x23 = -1;
volatile uint8_t x24 = 2U;
int64_t x32 = INT64_MIN;
int32_t t7 = -754;
int8_t x40 = -1;
uint64_t x45 = 8480169LLU;
volatile uint8_t x47 = 85U;
uint16_t x53 = 51U;
int8_t x54 = -2;
static uint16_t x56 = 7U;
int32_t x60 = INT32_MAX;
volatile int32_t x64 = INT32_MAX;
int8_t x65 = -1;
uint16_t x66 = UINT16_MAX;
volatile uint32_t x76 = 822100U;
int64_t x79 = 531689347240LL;
volatile int64_t x80 = INT64_MAX;
volatile int32_t t17 = -7;
static int32_t t18 = 0;
uint32_t x85 = 726942202U;
static int32_t x88 = -1;
static uint16_t x91 = 12U;
uint16_t x99 = UINT16_MAX;
uint64_t x104 = UINT64_MAX;
int64_t x108 = -1LL;
static uint16_t x115 = 3U;
static uint8_t x117 = UINT8_MAX;
uint16_t x118 = UINT16_MAX;
uint64_t x129 = 159LLU;
volatile uint64_t x140 = UINT64_MAX;
uint64_t x144 = UINT64_MAX;
int8_t x150 = -4;
volatile int64_t x164 = INT64_MIN;
int8_t x184 = INT8_MIN;
static uint64_t x185 = 2LLU;
int8_t x187 = INT8_MIN;
int64_t x192 = 2453276485130320LL;
volatile int32_t t44 = -1;
static uint64_t x208 = UINT64_MAX;
static volatile int16_t x213 = -9;
volatile int32_t t48 = 6520465;
static int8_t x231 = INT8_MIN;
uint32_t x240 = UINT32_MAX;
int32_t t53 = -19311962;
uint8_t x245 = 17U;
volatile int8_t x246 = INT8_MIN;
volatile int64_t x248 = -111LL;
int16_t x257 = -6475;
int8_t x262 = -1;
int32_t t57 = -9683;
volatile int8_t x270 = 16;
uint64_t x281 = UINT64_MAX;
int64_t x284 = -566217960LL;
int32_t t61 = 3;
uint64_t x285 = UINT64_MAX;
uint8_t x286 = UINT8_MAX;
static uint32_t x295 = 93U;
uint8_t x298 = UINT8_MAX;
uint32_t x305 = 1644530731U;
volatile int32_t x308 = INT32_MIN;
volatile int32_t x312 = INT32_MIN;
int16_t x313 = INT16_MAX;
uint16_t x319 = UINT16_MAX;
volatile int32_t t70 = -10035;
volatile int32_t x326 = INT32_MIN;
int16_t x327 = INT16_MAX;
int64_t x332 = 23LL;
static volatile uint16_t x334 = UINT16_MAX;
static int8_t x338 = INT8_MAX;
int32_t t74 = 88;
int16_t x341 = -452;
volatile uint64_t x346 = 9LLU;
int8_t x347 = 1;
volatile int32_t t78 = -3211;
int64_t x377 = INT64_MAX;
volatile int32_t t80 = 47;
int32_t x389 = -1;
uint64_t x390 = UINT64_MAX;
uint64_t x395 = 225621422841LLU;
volatile uint8_t x397 = 85U;
uint16_t x402 = 1320U;
static int32_t t85 = -331;
int16_t x417 = -10380;
static int32_t x419 = 46600235;
int32_t t88 = 35476;
int32_t x423 = INT32_MAX;
uint64_t x427 = 18980653328912LLU;
int32_t x431 = INT32_MIN;
int16_t x435 = -1;
uint8_t x436 = 7U;
int8_t x440 = -1;
volatile int64_t x445 = -31518LL;
volatile int32_t x446 = -1;
volatile uint64_t x451 = 1955LLU;
int8_t x462 = -1;
static int16_t x463 = -1;
volatile int8_t x467 = INT8_MIN;
int8_t x468 = -16;
static volatile int8_t x471 = -5;
volatile int32_t t102 = 883874;
static volatile int32_t t103 = 13;
int8_t x488 = INT8_MIN;
uint64_t x504 = 1900793008661LLU;
int64_t x507 = 213768534309LL;
int32_t x512 = -6245;
int32_t x523 = -1;
volatile int32_t t112 = 170;
static uint32_t x552 = UINT32_MAX;
static volatile int32_t t119 = -170;
static volatile int32_t t120 = -2;
volatile int16_t x562 = INT16_MIN;
int64_t x563 = INT64_MIN;
volatile int32_t t121 = 0;
volatile uint16_t x565 = UINT16_MAX;
static int32_t x571 = INT32_MIN;
int64_t x574 = -63424LL;
volatile int64_t x577 = INT64_MIN;
static int64_t x580 = -1LL;
volatile int32_t t127 = -187;
int32_t x600 = -1;
int64_t x607 = -3040554299LL;
int64_t x611 = 1004108691LL;
volatile int32_t t134 = -5326;
int16_t x633 = -1;
int8_t x636 = -29;
int64_t x655 = -1LL;
uint8_t x663 = UINT8_MAX;
int8_t x670 = INT8_MAX;
static uint32_t x673 = 178U;
static uint8_t x677 = UINT8_MAX;
uint32_t x678 = UINT32_MAX;
int32_t t149 = 3;
volatile int32_t t151 = 321;
static uint16_t x700 = 910U;
int32_t x711 = -22187;
uint8_t x712 = UINT8_MAX;
int64_t x716 = -1LL;
uint64_t x723 = 1517204582051112LLU;
int8_t x733 = 27;
static uint32_t x735 = 373U;
int32_t t159 = -251;
int8_t x737 = 1;
static uint32_t x741 = UINT32_MAX;
volatile uint64_t x745 = UINT64_MAX;
int64_t x748 = INT64_MIN;
int32_t t162 = 1;
static volatile int32_t t163 = 7;
int8_t x770 = INT8_MAX;
volatile uint64_t x783 = 979899LLU;
static volatile int32_t t170 = 1;
int16_t x802 = INT16_MIN;
uint64_t x811 = 426815088285966LLU;
static int32_t t175 = -50;
static int32_t t176 = 501966;
int32_t x833 = -1;
static uint8_t x834 = 15U;
volatile int32_t t179 = -3688;
volatile int32_t x837 = INT32_MIN;
static int32_t x842 = -1;
int64_t x845 = INT64_MAX;
uint8_t x856 = 3U;
int8_t x879 = INT8_MAX;
int64_t x880 = -1LL;
int16_t x884 = 25;
static int32_t t192 = 168837;
volatile int32_t t194 = -1765;
int8_t x904 = INT8_MIN;
uint64_t x910 = 5280528LLU;
volatile uint32_t x911 = 3U;
volatile int32_t t197 = -54238743;
static int8_t x916 = -18;
uint16_t x917 = 390U;
int64_t x918 = -1LL;


void f0(void) {
    	static int64_t x1 = 14939521458LL;
	int16_t x2 = -1;
	int32_t x3 = -1;
	int16_t x4 = INT16_MAX;
	int32_t t0 = 4;

    t0 = ((x1<=x2)==(x3-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	int16_t x6 = INT16_MIN;
	uint16_t x7 = 95U;
	uint8_t x8 = 11U;
	static volatile int32_t t1 = -194742303;

    t1 = ((x5<=x6)==(x7-x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 0LLU;
	uint32_t x10 = 45U;
	uint32_t x11 = 32656U;
	volatile uint8_t x12 = 15U;
	volatile int32_t t2 = 465359573;

    t2 = ((x9<=x10)==(x11-x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 3069LLU;
	uint16_t x14 = UINT16_MAX;
	uint64_t x16 = UINT64_MAX;
	volatile int32_t t3 = 422719;

    t3 = ((x13<=x14)==(x15-x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x18 = UINT32_MAX;
	uint64_t x19 = 43432242LLU;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = -1589;

    t4 = ((x17<=x18)==(x19-x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x22 = -798921033;
	volatile int32_t t5 = 214130;

    t5 = ((x21<=x22)==(x23-x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = 0LL;
	volatile int16_t x26 = 0;
	volatile uint64_t x27 = 380145LLU;
	int64_t x28 = -1LL;
	static int32_t t6 = 1;

    t6 = ((x25<=x26)==(x27-x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 29995;
	int64_t x30 = -1LL;
	int32_t x31 = -1;

    t7 = ((x29<=x30)==(x31-x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = -101;
	volatile int8_t x38 = -1;
	int8_t x39 = INT8_MAX;
	volatile int32_t t8 = -28779;

    t8 = ((x37<=x38)==(x39-x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x41 = INT16_MIN;
	volatile int32_t x42 = INT32_MAX;
	int32_t x43 = INT32_MIN;
	int32_t x44 = -1;
	int32_t t9 = 12410;

    t9 = ((x41<=x42)==(x43-x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x46 = INT32_MAX;
	static volatile int8_t x48 = -1;
	volatile int32_t t10 = 771898;

    t10 = ((x45<=x46)==(x47-x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x49 = 39U;
	int8_t x50 = -1;
	uint64_t x51 = 1LLU;
	int64_t x52 = INT64_MIN;
	int32_t t11 = 1048488964;

    t11 = ((x49<=x50)==(x51-x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x55 = 1U;
	volatile int32_t t12 = 75785;

    t12 = ((x53<=x54)==(x55-x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x57 = INT64_MAX;
	volatile int32_t x58 = INT32_MIN;
	uint16_t x59 = 9635U;
	volatile int32_t t13 = 2781242;

    t13 = ((x57<=x58)==(x59-x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int16_t x61 = 2;
	int32_t x62 = -1;
	int64_t x63 = -1LL;
	int32_t t14 = 3498928;

    t14 = ((x61<=x62)==(x63-x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x67 = 5549;
	int8_t x68 = -1;
	int32_t t15 = 96894734;

    t15 = ((x65<=x66)==(x67-x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x73 = INT32_MIN;
	uint16_t x74 = 12486U;
	static int8_t x75 = INT8_MIN;
	int32_t t16 = -1;

    t16 = ((x73<=x74)==(x75-x76));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x77 = INT8_MAX;
	volatile int64_t x78 = INT64_MIN;

    t17 = ((x77<=x78)==(x79-x80));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x81 = 539U;
	int32_t x82 = -1;
	volatile int32_t x83 = 1500;
	int64_t x84 = INT64_MAX;

    t18 = ((x81<=x82)==(x83-x84));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x86 = UINT16_MAX;
	static uint16_t x87 = UINT16_MAX;
	volatile int32_t t19 = -130093659;

    t19 = ((x85<=x86)==(x87-x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = INT8_MIN;
	int16_t x90 = INT16_MAX;
	uint8_t x92 = 0U;
	int32_t t20 = -1010344824;

    t20 = ((x89<=x90)==(x91-x92));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x93 = 2U;
	volatile int8_t x94 = -1;
	uint32_t x95 = UINT32_MAX;
	uint64_t x96 = 13LLU;
	static int32_t t21 = -336160902;

    t21 = ((x93<=x94)==(x95-x96));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x97 = -1736;
	int16_t x98 = INT16_MIN;
	static int32_t x100 = 237208518;
	int32_t t22 = 1;

    t22 = ((x97<=x98)==(x99-x100));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = -1;
	int64_t x102 = INT64_MIN;
	int8_t x103 = -1;
	int32_t t23 = 1709;

    t23 = ((x101<=x102)==(x103-x104));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x105 = 4918;
	volatile int16_t x106 = INT16_MIN;
	uint16_t x107 = 13U;
	static volatile int32_t t24 = -2521396;

    t24 = ((x105<=x106)==(x107-x108));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x113 = INT32_MIN;
	volatile int16_t x114 = 7;
	int8_t x116 = INT8_MIN;
	volatile int32_t t25 = -38486836;

    t25 = ((x113<=x114)==(x115-x116));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x119 = 1LL;
	static int16_t x120 = -4804;
	int32_t t26 = 399527;

    t26 = ((x117<=x118)==(x119-x120));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x121 = -1;
	uint32_t x122 = 15U;
	int32_t x123 = -26677;
	int64_t x124 = 535650LL;
	int32_t t27 = -93313313;

    t27 = ((x121<=x122)==(x123-x124));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x125 = INT16_MIN;
	int32_t x126 = 292624;
	int64_t x127 = -1LL;
	volatile int32_t x128 = INT32_MIN;
	volatile int32_t t28 = 64008410;

    t28 = ((x125<=x126)==(x127-x128));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x130 = INT16_MAX;
	int16_t x131 = INT16_MAX;
	int32_t x132 = INT32_MAX;
	int32_t t29 = -32;

    t29 = ((x129<=x130)==(x131-x132));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x133 = -2;
	static volatile int16_t x134 = INT16_MIN;
	int8_t x135 = 1;
	volatile int16_t x136 = INT16_MIN;
	int32_t t30 = 304271229;

    t30 = ((x133<=x134)==(x135-x136));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x137 = INT64_MIN;
	volatile int32_t x138 = INT32_MIN;
	int32_t x139 = INT32_MIN;
	static volatile int32_t t31 = -1068380;

    t31 = ((x137<=x138)==(x139-x140));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x141 = 3U;
	int32_t x142 = INT32_MIN;
	uint8_t x143 = UINT8_MAX;
	int32_t t32 = 1;

    t32 = ((x141<=x142)==(x143-x144));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x145 = -20;
	volatile int8_t x146 = INT8_MAX;
	int8_t x147 = -51;
	volatile int64_t x148 = 132738837LL;
	volatile int32_t t33 = 228;

    t33 = ((x145<=x146)==(x147-x148));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x149 = 79U;
	uint32_t x151 = 3532633U;
	volatile int16_t x152 = INT16_MIN;
	volatile int32_t t34 = -102151;

    t34 = ((x149<=x150)==(x151-x152));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x153 = UINT64_MAX;
	int32_t x154 = INT32_MAX;
	uint8_t x155 = 90U;
	int8_t x156 = -1;
	volatile int32_t t35 = -1259204;

    t35 = ((x153<=x154)==(x155-x156));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x161 = INT64_MIN;
	int8_t x162 = INT8_MIN;
	uint64_t x163 = 2LLU;
	int32_t t36 = -218927242;

    t36 = ((x161<=x162)==(x163-x164));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x165 = INT64_MAX;
	volatile int16_t x166 = INT16_MAX;
	volatile int32_t x167 = -1;
	static int64_t x168 = INT64_MIN;
	volatile int32_t t37 = 62;

    t37 = ((x165<=x166)==(x167-x168));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x169 = -59;
	int64_t x170 = -1LL;
	uint8_t x171 = UINT8_MAX;
	int16_t x172 = INT16_MIN;
	static volatile int32_t t38 = 0;

    t38 = ((x169<=x170)==(x171-x172));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x173 = -49492242;
	static volatile int8_t x174 = INT8_MIN;
	int16_t x175 = INT16_MIN;
	static uint32_t x176 = 3931U;
	volatile int32_t t39 = -2752790;

    t39 = ((x173<=x174)==(x175-x176));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x177 = UINT16_MAX;
	static int32_t x178 = 744593;
	uint16_t x179 = UINT16_MAX;
	int16_t x180 = 7;
	int32_t t40 = -154;

    t40 = ((x177<=x178)==(x179-x180));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x181 = INT8_MIN;
	uint64_t x182 = UINT64_MAX;
	static int16_t x183 = INT16_MIN;
	int32_t t41 = 20;

    t41 = ((x181<=x182)==(x183-x184));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x186 = 55827LL;
	int32_t x188 = -50649972;
	volatile int32_t t42 = -6531;

    t42 = ((x185<=x186)==(x187-x188));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x189 = INT16_MIN;
	int16_t x190 = -1;
	int8_t x191 = INT8_MIN;
	static volatile int32_t t43 = -653321890;

    t43 = ((x189<=x190)==(x191-x192));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x197 = -1;
	int32_t x198 = INT32_MIN;
	static int32_t x199 = -1;
	uint32_t x200 = 130757U;

    t44 = ((x197<=x198)==(x199-x200));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x201 = UINT16_MAX;
	volatile uint16_t x202 = 103U;
	static uint8_t x203 = 10U;
	static volatile uint32_t x204 = 4U;
	static volatile int32_t t45 = -3;

    t45 = ((x201<=x202)==(x203-x204));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x205 = INT32_MAX;
	int32_t x206 = -1;
	volatile int16_t x207 = INT16_MIN;
	static volatile int32_t t46 = 0;

    t46 = ((x205<=x206)==(x207-x208));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x214 = -2;
	int16_t x215 = -1;
	int32_t x216 = -73;
	volatile int32_t t47 = -81;

    t47 = ((x213<=x214)==(x215-x216));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x217 = INT8_MIN;
	uint64_t x218 = UINT64_MAX;
	static int16_t x219 = INT16_MIN;
	int8_t x220 = INT8_MAX;

    t48 = ((x217<=x218)==(x219-x220));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x221 = INT64_MAX;
	volatile uint8_t x222 = UINT8_MAX;
	int16_t x223 = INT16_MIN;
	int32_t x224 = INT32_MIN;
	volatile int32_t t49 = 523;

    t49 = ((x221<=x222)==(x223-x224));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x229 = INT8_MAX;
	int32_t x230 = 7302;
	static int64_t x232 = INT64_MIN;
	volatile int32_t t50 = 0;

    t50 = ((x229<=x230)==(x231-x232));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x233 = 14U;
	static volatile uint32_t x234 = 85870577U;
	uint32_t x235 = UINT32_MAX;
	uint16_t x236 = 7053U;
	int32_t t51 = -2;

    t51 = ((x233<=x234)==(x235-x236));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x237 = INT8_MAX;
	int8_t x238 = INT8_MIN;
	int16_t x239 = -15356;
	int32_t t52 = 0;

    t52 = ((x237<=x238)==(x239-x240));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x241 = 5U;
	volatile int64_t x242 = INT64_MIN;
	static int64_t x243 = 63550LL;
	volatile int32_t x244 = INT32_MIN;

    t53 = ((x241<=x242)==(x243-x244));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x247 = -1;
	static volatile int32_t t54 = -1;

    t54 = ((x245<=x246)==(x247-x248));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x253 = 299767;
	volatile int64_t x254 = INT64_MIN;
	int64_t x255 = -1LL;
	uint64_t x256 = 97676242888LLU;
	static volatile int32_t t55 = 7;

    t55 = ((x253<=x254)==(x255-x256));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x258 = INT64_MIN;
	int8_t x259 = INT8_MIN;
	int64_t x260 = INT64_MIN;
	volatile int32_t t56 = 79757398;

    t56 = ((x257<=x258)==(x259-x260));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x261 = 0;
	int16_t x263 = INT16_MAX;
	int16_t x264 = -1;

    t57 = ((x261<=x262)==(x263-x264));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x265 = -2963191072459LL;
	static volatile int16_t x266 = INT16_MIN;
	static uint16_t x267 = 4886U;
	int32_t x268 = -14;
	int32_t t58 = 195331;

    t58 = ((x265<=x266)==(x267-x268));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x269 = INT8_MAX;
	int16_t x271 = -2;
	int64_t x272 = INT64_MIN;
	int32_t t59 = 0;

    t59 = ((x269<=x270)==(x271-x272));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x273 = 7246470LLU;
	uint32_t x274 = 298874161U;
	uint64_t x275 = 1LLU;
	int16_t x276 = -3672;
	volatile int32_t t60 = -81191380;

    t60 = ((x273<=x274)==(x275-x276));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int32_t x282 = INT32_MAX;
	volatile int8_t x283 = -1;

    t61 = ((x281<=x282)==(x283-x284));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x287 = -1;
	uint8_t x288 = UINT8_MAX;
	volatile int32_t t62 = 1;

    t62 = ((x285<=x286)==(x287-x288));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x289 = UINT32_MAX;
	uint32_t x290 = 4U;
	volatile int16_t x291 = INT16_MAX;
	int64_t x292 = -1LL;
	static volatile int32_t t63 = -650;

    t63 = ((x289<=x290)==(x291-x292));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x293 = INT64_MAX;
	int32_t x294 = 0;
	int32_t x296 = INT32_MIN;
	static volatile int32_t t64 = -234;

    t64 = ((x293<=x294)==(x295-x296));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x297 = UINT16_MAX;
	static volatile int32_t x299 = 35169;
	uint16_t x300 = 53U;
	static volatile int32_t t65 = 1;

    t65 = ((x297<=x298)==(x299-x300));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x306 = 0U;
	int16_t x307 = INT16_MIN;
	volatile int32_t t66 = 267205867;

    t66 = ((x305<=x306)==(x307-x308));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x309 = 162430991;
	uint16_t x310 = UINT16_MAX;
	int64_t x311 = -516774LL;
	static int32_t t67 = 1101;

    t67 = ((x309<=x310)==(x311-x312));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x314 = -1;
	int16_t x315 = 19;
	uint16_t x316 = 0U;
	volatile int32_t t68 = 12;

    t68 = ((x313<=x314)==(x315-x316));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x317 = 1741LL;
	int8_t x318 = INT8_MAX;
	int16_t x320 = INT16_MIN;
	volatile int32_t t69 = -1924;

    t69 = ((x317<=x318)==(x319-x320));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x321 = 103748U;
	int16_t x322 = 152;
	uint8_t x323 = 1U;
	int8_t x324 = -25;

    t70 = ((x321<=x322)==(x323-x324));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x325 = 205364824102403LLU;
	uint8_t x328 = 5U;
	volatile int32_t t71 = 282470;

    t71 = ((x325<=x326)==(x327-x328));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x329 = UINT64_MAX;
	volatile int16_t x330 = -1;
	int32_t x331 = -147299335;
	int32_t t72 = 0;

    t72 = ((x329<=x330)==(x331-x332));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x333 = -1LL;
	int16_t x335 = 11;
	static uint64_t x336 = UINT64_MAX;
	int32_t t73 = -25656584;

    t73 = ((x333<=x334)==(x335-x336));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x337 = INT64_MIN;
	int32_t x339 = 3585;
	int32_t x340 = -1;

    t74 = ((x337<=x338)==(x339-x340));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x342 = -1;
	uint8_t x343 = UINT8_MAX;
	uint64_t x344 = UINT64_MAX;
	volatile int32_t t75 = 427722;

    t75 = ((x341<=x342)==(x343-x344));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x345 = 588156241U;
	int32_t x348 = -44;
	volatile int32_t t76 = 1414625;

    t76 = ((x345<=x346)==(x347-x348));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x353 = INT64_MIN;
	int64_t x354 = 100152LL;
	uint64_t x355 = 114806573043LLU;
	uint16_t x356 = 1355U;
	volatile int32_t t77 = -20095917;

    t77 = ((x353<=x354)==(x355-x356));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x365 = -11238;
	static uint32_t x366 = 13413171U;
	int64_t x367 = -7097LL;
	int16_t x368 = INT16_MIN;

    t78 = ((x365<=x366)==(x367-x368));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x378 = 92;
	int32_t x379 = INT32_MIN;
	static uint64_t x380 = 4064062LLU;
	int32_t t79 = -17475;

    t79 = ((x377<=x378)==(x379-x380));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x381 = 1;
	uint32_t x382 = UINT32_MAX;
	static int16_t x383 = INT16_MIN;
	volatile uint8_t x384 = 6U;

    t80 = ((x381<=x382)==(x383-x384));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x391 = 41401027016388LL;
	int32_t x392 = 950397369;
	volatile int32_t t81 = 0;

    t81 = ((x389<=x390)==(x391-x392));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x393 = -1;
	int8_t x394 = INT8_MIN;
	static uint64_t x396 = UINT64_MAX;
	int32_t t82 = 4;

    t82 = ((x393<=x394)==(x395-x396));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x398 = 1;
	volatile int32_t x399 = -1;
	static uint64_t x400 = UINT64_MAX;
	static volatile int32_t t83 = -8;

    t83 = ((x397<=x398)==(x399-x400));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x401 = -319;
	volatile int32_t x403 = -1;
	static int32_t x404 = INT32_MAX;
	volatile int32_t t84 = -153;

    t84 = ((x401<=x402)==(x403-x404));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x405 = -1;
	uint64_t x406 = UINT64_MAX;
	static int64_t x407 = 1296107403193205LL;
	uint8_t x408 = UINT8_MAX;

    t85 = ((x405<=x406)==(x407-x408));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x409 = 624545;
	int16_t x410 = -5;
	int64_t x411 = INT64_MAX;
	static int8_t x412 = INT8_MAX;
	static volatile int32_t t86 = -21347690;

    t86 = ((x409<=x410)==(x411-x412));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x413 = UINT32_MAX;
	int16_t x414 = INT16_MIN;
	int8_t x415 = INT8_MIN;
	static volatile int32_t x416 = -1;
	static volatile int32_t t87 = -13657;

    t87 = ((x413<=x414)==(x415-x416));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x418 = 28835616U;
	volatile int16_t x420 = 6;

    t88 = ((x417<=x418)==(x419-x420));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x421 = -15LL;
	static int32_t x422 = 10447202;
	static uint8_t x424 = 0U;
	int32_t t89 = 445;

    t89 = ((x421<=x422)==(x423-x424));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x425 = INT8_MIN;
	uint16_t x426 = 2U;
	int32_t x428 = INT32_MIN;
	int32_t t90 = -25495814;

    t90 = ((x425<=x426)==(x427-x428));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x429 = INT64_MIN;
	uint8_t x430 = 7U;
	uint32_t x432 = UINT32_MAX;
	volatile int32_t t91 = 372300847;

    t91 = ((x429<=x430)==(x431-x432));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x433 = INT16_MIN;
	uint16_t x434 = UINT16_MAX;
	int32_t t92 = 1160172;

    t92 = ((x433<=x434)==(x435-x436));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x437 = INT32_MIN;
	int64_t x438 = -518992LL;
	int8_t x439 = -1;
	static volatile int32_t t93 = 351404;

    t93 = ((x437<=x438)==(x439-x440));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x441 = INT16_MIN;
	uint8_t x442 = 51U;
	int8_t x443 = INT8_MIN;
	static int16_t x444 = INT16_MAX;
	volatile int32_t t94 = 115;

    t94 = ((x441<=x442)==(x443-x444));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x447 = INT16_MAX;
	int8_t x448 = INT8_MIN;
	static volatile int32_t t95 = 121502827;

    t95 = ((x445<=x446)==(x447-x448));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x449 = INT64_MIN;
	static int16_t x450 = INT16_MIN;
	uint16_t x452 = 7710U;
	int32_t t96 = -45440963;

    t96 = ((x449<=x450)==(x451-x452));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x453 = -1;
	int16_t x454 = INT16_MAX;
	uint64_t x455 = 80545651598LLU;
	int32_t x456 = -1;
	volatile int32_t t97 = 47739096;

    t97 = ((x453<=x454)==(x455-x456));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x457 = INT16_MIN;
	volatile int32_t x458 = -633591721;
	static int32_t x459 = -1;
	int32_t x460 = -1;
	volatile int32_t t98 = -197362;

    t98 = ((x457<=x458)==(x459-x460));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x461 = UINT16_MAX;
	uint64_t x464 = 195271266881580840LLU;
	int32_t t99 = 51;

    t99 = ((x461<=x462)==(x463-x464));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x465 = 4;
	int32_t x466 = INT32_MIN;
	int32_t t100 = -17419;

    t100 = ((x465<=x466)==(x467-x468));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x469 = -1;
	uint16_t x470 = 299U;
	int64_t x472 = 11720582004050495LL;
	int32_t t101 = 158;

    t101 = ((x469<=x470)==(x471-x472));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x473 = UINT32_MAX;
	uint32_t x474 = 1011678U;
	uint16_t x475 = 104U;
	volatile int64_t x476 = -8511073387LL;

    t102 = ((x473<=x474)==(x475-x476));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x477 = UINT16_MAX;
	static int32_t x478 = -251;
	int32_t x479 = INT32_MIN;
	int8_t x480 = INT8_MIN;

    t103 = ((x477<=x478)==(x479-x480));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x485 = 3U;
	int32_t x486 = -225607;
	uint8_t x487 = 5U;
	int32_t t104 = 63210;

    t104 = ((x485<=x486)==(x487-x488));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x489 = INT64_MAX;
	uint8_t x490 = UINT8_MAX;
	uint16_t x491 = 1U;
	uint32_t x492 = 1882760U;
	int32_t t105 = 216;

    t105 = ((x489<=x490)==(x491-x492));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x493 = INT64_MIN;
	int32_t x494 = 2;
	int64_t x495 = 4046422655886LL;
	static volatile int8_t x496 = INT8_MIN;
	volatile int32_t t106 = 244899;

    t106 = ((x493<=x494)==(x495-x496));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x497 = INT8_MAX;
	int16_t x498 = -203;
	uint8_t x499 = 1U;
	uint16_t x500 = 124U;
	int32_t t107 = -291184832;

    t107 = ((x497<=x498)==(x499-x500));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x501 = -1LL;
	int8_t x502 = -44;
	int32_t x503 = INT32_MIN;
	int32_t t108 = 3474135;

    t108 = ((x501<=x502)==(x503-x504));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint32_t x505 = 634U;
	volatile int16_t x506 = INT16_MAX;
	volatile int64_t x508 = -1LL;
	volatile int32_t t109 = 0;

    t109 = ((x505<=x506)==(x507-x508));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x509 = 2U;
	int8_t x510 = INT8_MAX;
	volatile int16_t x511 = INT16_MAX;
	int32_t t110 = 4;

    t110 = ((x509<=x510)==(x511-x512));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x513 = 14U;
	static int64_t x514 = -1732LL;
	int8_t x515 = -1;
	int64_t x516 = 25895425444840LL;
	int32_t t111 = 4110048;

    t111 = ((x513<=x514)==(x515-x516));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint16_t x521 = 99U;
	static uint16_t x522 = 32093U;
	static int64_t x524 = INT64_MIN;

    t112 = ((x521<=x522)==(x523-x524));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x525 = INT8_MIN;
	int32_t x526 = -1;
	volatile int32_t x527 = INT32_MIN;
	int32_t x528 = INT32_MIN;
	int32_t t113 = 12123851;

    t113 = ((x525<=x526)==(x527-x528));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x529 = INT32_MIN;
	static uint16_t x530 = UINT16_MAX;
	uint64_t x531 = 6661340973745LLU;
	int16_t x532 = INT16_MIN;
	int32_t t114 = 5;

    t114 = ((x529<=x530)==(x531-x532));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x533 = -1;
	int8_t x534 = INT8_MIN;
	volatile int16_t x535 = INT16_MIN;
	int16_t x536 = 10;
	int32_t t115 = 560632;

    t115 = ((x533<=x534)==(x535-x536));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x541 = INT8_MIN;
	static int16_t x542 = 8;
	static int16_t x543 = INT16_MAX;
	volatile uint8_t x544 = UINT8_MAX;
	volatile int32_t t116 = -1336;

    t116 = ((x541<=x542)==(x543-x544));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x545 = INT32_MAX;
	uint64_t x546 = 480518227651439LLU;
	volatile int16_t x547 = -410;
	static int64_t x548 = INT64_MIN;
	int32_t t117 = 1556181;

    t117 = ((x545<=x546)==(x547-x548));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x549 = INT8_MAX;
	int8_t x550 = 9;
	int16_t x551 = INT16_MAX;
	volatile int32_t t118 = -83;

    t118 = ((x549<=x550)==(x551-x552));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x553 = 7U;
	volatile int8_t x554 = -1;
	int32_t x555 = -1;
	int64_t x556 = -1LL;

    t119 = ((x553<=x554)==(x555-x556));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x557 = 69582U;
	volatile uint32_t x558 = UINT32_MAX;
	int16_t x559 = INT16_MAX;
	static int16_t x560 = INT16_MIN;

    t120 = ((x557<=x558)==(x559-x560));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x561 = INT64_MAX;
	int8_t x564 = -1;

    t121 = ((x561<=x562)==(x563-x564));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x566 = -1;
	volatile uint8_t x567 = 27U;
	static int8_t x568 = INT8_MIN;
	int32_t t122 = 1014971;

    t122 = ((x565<=x566)==(x567-x568));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x569 = -1;
	static int16_t x570 = INT16_MIN;
	int8_t x572 = INT8_MIN;
	int32_t t123 = 896139225;

    t123 = ((x569<=x570)==(x571-x572));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x573 = 73306092U;
	int16_t x575 = -149;
	static int32_t x576 = -5097881;
	int32_t t124 = -12;

    t124 = ((x573<=x574)==(x575-x576));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x578 = 16U;
	volatile uint8_t x579 = 24U;
	volatile int32_t t125 = 371765;

    t125 = ((x577<=x578)==(x579-x580));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x581 = INT8_MAX;
	static int64_t x582 = INT64_MIN;
	uint16_t x583 = UINT16_MAX;
	volatile uint32_t x584 = 262560U;
	volatile int32_t t126 = -9;

    t126 = ((x581<=x582)==(x583-x584));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x585 = INT16_MIN;
	volatile int64_t x586 = 2054964LL;
	int8_t x587 = INT8_MAX;
	static int16_t x588 = INT16_MIN;

    t127 = ((x585<=x586)==(x587-x588));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x589 = 55;
	volatile uint32_t x590 = 106U;
	int8_t x591 = -1;
	volatile uint64_t x592 = 39436108291658388LLU;
	int32_t t128 = -11;

    t128 = ((x589<=x590)==(x591-x592));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x593 = -16;
	volatile int64_t x594 = -55LL;
	uint16_t x595 = 36U;
	uint16_t x596 = 62U;
	int32_t t129 = 76087;

    t129 = ((x593<=x594)==(x595-x596));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x597 = UINT8_MAX;
	int8_t x598 = INT8_MIN;
	static uint32_t x599 = 377655U;
	volatile int32_t t130 = 12090926;

    t130 = ((x597<=x598)==(x599-x600));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x601 = -1;
	volatile int8_t x602 = -9;
	uint32_t x603 = UINT32_MAX;
	static int32_t x604 = -1;
	volatile int32_t t131 = -544288;

    t131 = ((x601<=x602)==(x603-x604));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x605 = INT16_MAX;
	int64_t x606 = -15528LL;
	int64_t x608 = -1LL;
	int32_t t132 = -1371;

    t132 = ((x605<=x606)==(x607-x608));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x609 = INT16_MAX;
	volatile uint16_t x610 = 0U;
	int16_t x612 = INT16_MIN;
	static int32_t t133 = 1492437;

    t133 = ((x609<=x610)==(x611-x612));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x613 = 1;
	int64_t x614 = INT64_MIN;
	uint32_t x615 = 1U;
	uint8_t x616 = 11U;

    t134 = ((x613<=x614)==(x615-x616));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x625 = 1039502312850093085LLU;
	static int16_t x626 = INT16_MAX;
	int16_t x627 = INT16_MAX;
	int8_t x628 = INT8_MIN;
	int32_t t135 = -5730443;

    t135 = ((x625<=x626)==(x627-x628));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x629 = 41U;
	int16_t x630 = INT16_MIN;
	int8_t x631 = -58;
	int32_t x632 = -1753;
	int32_t t136 = -906;

    t136 = ((x629<=x630)==(x631-x632));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x634 = -1;
	int32_t x635 = INT32_MIN;
	int32_t t137 = -481074;

    t137 = ((x633<=x634)==(x635-x636));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x637 = -1;
	int32_t x638 = INT32_MAX;
	int16_t x639 = -1;
	uint8_t x640 = 29U;
	volatile int32_t t138 = 1;

    t138 = ((x637<=x638)==(x639-x640));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x641 = -1;
	int16_t x642 = -1;
	uint8_t x643 = UINT8_MAX;
	uint64_t x644 = 500741471566433LLU;
	int32_t t139 = 451980;

    t139 = ((x641<=x642)==(x643-x644));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x645 = INT64_MAX;
	static int8_t x646 = INT8_MAX;
	static volatile int32_t x647 = -1;
	static uint8_t x648 = UINT8_MAX;
	static volatile int32_t t140 = -14953037;

    t140 = ((x645<=x646)==(x647-x648));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x649 = INT64_MIN;
	static int32_t x650 = 4;
	volatile int8_t x651 = INT8_MIN;
	volatile uint8_t x652 = 21U;
	int32_t t141 = -1041409884;

    t141 = ((x649<=x650)==(x651-x652));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x653 = INT8_MIN;
	volatile int64_t x654 = INT64_MIN;
	uint64_t x656 = 46332LLU;
	int32_t t142 = -178467;

    t142 = ((x653<=x654)==(x655-x656));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x657 = INT64_MAX;
	int16_t x658 = INT16_MIN;
	int16_t x659 = 1;
	uint32_t x660 = 204U;
	static int32_t t143 = -2778;

    t143 = ((x657<=x658)==(x659-x660));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint16_t x661 = 4U;
	int32_t x662 = INT32_MIN;
	volatile int32_t x664 = 7647;
	int32_t t144 = -142737391;

    t144 = ((x661<=x662)==(x663-x664));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x665 = -1;
	static int16_t x666 = -6;
	int16_t x667 = -454;
	static int16_t x668 = -1;
	static volatile int32_t t145 = -242424238;

    t145 = ((x665<=x666)==(x667-x668));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x669 = -1;
	int16_t x671 = INT16_MIN;
	static int16_t x672 = INT16_MIN;
	volatile int32_t t146 = 1189;

    t146 = ((x669<=x670)==(x671-x672));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x674 = 0U;
	int32_t x675 = -10873383;
	static int64_t x676 = INT64_MIN;
	static int32_t t147 = -12;

    t147 = ((x673<=x674)==(x675-x676));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x679 = -1;
	int64_t x680 = -171162818408081LL;
	int32_t t148 = -926;

    t148 = ((x677<=x678)==(x679-x680));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x681 = INT16_MAX;
	static int16_t x682 = -1;
	int32_t x683 = INT32_MIN;
	int8_t x684 = INT8_MIN;

    t149 = ((x681<=x682)==(x683-x684));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x685 = 15634LL;
	volatile int32_t x686 = 3;
	static uint32_t x687 = UINT32_MAX;
	uint64_t x688 = UINT64_MAX;
	int32_t t150 = -1399;

    t150 = ((x685<=x686)==(x687-x688));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x689 = -14;
	uint8_t x690 = 0U;
	uint64_t x691 = 11249012498751321LLU;
	int32_t x692 = -1;

    t151 = ((x689<=x690)==(x691-x692));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x697 = -1;
	int8_t x698 = INT8_MIN;
	int8_t x699 = INT8_MAX;
	volatile int32_t t152 = 212;

    t152 = ((x697<=x698)==(x699-x700));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x701 = 1875U;
	uint8_t x702 = 40U;
	int16_t x703 = -2;
	static int32_t x704 = INT32_MIN;
	int32_t t153 = -397936832;

    t153 = ((x701<=x702)==(x703-x704));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x705 = UINT8_MAX;
	volatile int32_t x706 = -2647;
	volatile int16_t x707 = INT16_MIN;
	int32_t x708 = -202619;
	static volatile int32_t t154 = -1;

    t154 = ((x705<=x706)==(x707-x708));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x709 = INT64_MIN;
	uint8_t x710 = 12U;
	static int32_t t155 = 0;

    t155 = ((x709<=x710)==(x711-x712));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x713 = INT32_MIN;
	static volatile int16_t x714 = INT16_MAX;
	uint32_t x715 = UINT32_MAX;
	volatile int32_t t156 = 0;

    t156 = ((x713<=x714)==(x715-x716));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x721 = UINT16_MAX;
	int32_t x722 = 102;
	int8_t x724 = -1;
	volatile int32_t t157 = -69838;

    t157 = ((x721<=x722)==(x723-x724));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x725 = INT16_MIN;
	static int8_t x726 = -2;
	int16_t x727 = INT16_MIN;
	int64_t x728 = INT64_MIN;
	int32_t t158 = 48;

    t158 = ((x725<=x726)==(x727-x728));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x734 = UINT16_MAX;
	int64_t x736 = 10699LL;

    t159 = ((x733<=x734)==(x735-x736));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x738 = INT32_MIN;
	int32_t x739 = INT32_MIN;
	int32_t x740 = INT32_MIN;
	static volatile int32_t t160 = 8635714;

    t160 = ((x737<=x738)==(x739-x740));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x742 = INT32_MIN;
	int64_t x743 = 17460012894756855LL;
	int16_t x744 = INT16_MIN;
	volatile int32_t t161 = 46;

    t161 = ((x741<=x742)==(x743-x744));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x746 = -1;
	int16_t x747 = INT16_MIN;

    t162 = ((x745<=x746)==(x747-x748));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x749 = 614385022049LL;
	volatile uint64_t x750 = 5795826LLU;
	static volatile uint32_t x751 = 3U;
	uint32_t x752 = 1722U;

    t163 = ((x749<=x750)==(x751-x752));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x753 = INT8_MAX;
	int32_t x754 = INT32_MAX;
	int32_t x755 = -225070066;
	static uint32_t x756 = 10025U;
	int32_t t164 = -264806;

    t164 = ((x753<=x754)==(x755-x756));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x761 = INT16_MIN;
	volatile int32_t x762 = 6127;
	uint32_t x763 = 9183U;
	static int8_t x764 = INT8_MIN;
	static int32_t t165 = -218220744;

    t165 = ((x761<=x762)==(x763-x764));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x765 = 101U;
	int16_t x766 = -107;
	volatile int8_t x767 = INT8_MAX;
	static int8_t x768 = -1;
	int32_t t166 = 12344473;

    t166 = ((x765<=x766)==(x767-x768));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x769 = UINT16_MAX;
	int16_t x771 = -1;
	uint8_t x772 = UINT8_MAX;
	int32_t t167 = -775;

    t167 = ((x769<=x770)==(x771-x772));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x773 = -1;
	uint16_t x774 = 3726U;
	static int16_t x775 = -22;
	static int8_t x776 = INT8_MAX;
	int32_t t168 = 15;

    t168 = ((x773<=x774)==(x775-x776));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x781 = INT32_MIN;
	volatile uint64_t x782 = 910966299751779LLU;
	uint8_t x784 = 5U;
	static volatile int32_t t169 = 1007944833;

    t169 = ((x781<=x782)==(x783-x784));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x793 = UINT8_MAX;
	static uint64_t x794 = UINT64_MAX;
	static uint8_t x795 = UINT8_MAX;
	int16_t x796 = INT16_MAX;

    t170 = ((x793<=x794)==(x795-x796));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int8_t x797 = 0;
	volatile int8_t x798 = INT8_MIN;
	uint16_t x799 = 265U;
	int16_t x800 = INT16_MIN;
	volatile int32_t t171 = 884428;

    t171 = ((x797<=x798)==(x799-x800));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x801 = INT64_MAX;
	uint64_t x803 = 29LLU;
	int64_t x804 = INT64_MAX;
	volatile int32_t t172 = -15;

    t172 = ((x801<=x802)==(x803-x804));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x805 = UINT8_MAX;
	int32_t x806 = INT32_MIN;
	volatile int32_t x807 = -1;
	int8_t x808 = INT8_MAX;
	static int32_t t173 = 10;

    t173 = ((x805<=x806)==(x807-x808));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x809 = 73U;
	static volatile uint8_t x810 = UINT8_MAX;
	volatile uint16_t x812 = 156U;
	int32_t t174 = -3102797;

    t174 = ((x809<=x810)==(x811-x812));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x813 = 43U;
	static int16_t x814 = INT16_MIN;
	uint16_t x815 = 7471U;
	static uint32_t x816 = 5611U;

    t175 = ((x813<=x814)==(x815-x816));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x817 = INT64_MAX;
	int32_t x818 = -737221;
	volatile int32_t x819 = INT32_MIN;
	int8_t x820 = INT8_MIN;

    t176 = ((x817<=x818)==(x819-x820));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int8_t x821 = INT8_MIN;
	volatile uint32_t x822 = 2U;
	uint16_t x823 = 39U;
	static uint16_t x824 = 8169U;
	int32_t t177 = -86;

    t177 = ((x821<=x822)==(x823-x824));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x825 = -1;
	static int16_t x826 = 0;
	uint32_t x827 = 6U;
	static int8_t x828 = INT8_MIN;
	volatile int32_t t178 = -13686451;

    t178 = ((x825<=x826)==(x827-x828));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x835 = INT32_MIN;
	uint64_t x836 = UINT64_MAX;

    t179 = ((x833<=x834)==(x835-x836));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x838 = -597;
	int64_t x839 = -141124936684LL;
	int64_t x840 = -1LL;
	static volatile int32_t t180 = -2;

    t180 = ((x837<=x838)==(x839-x840));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x841 = INT8_MIN;
	int8_t x843 = -1;
	int8_t x844 = INT8_MAX;
	static volatile int32_t t181 = -202;

    t181 = ((x841<=x842)==(x843-x844));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x846 = 11U;
	static uint32_t x847 = UINT32_MAX;
	int32_t x848 = INT32_MAX;
	int32_t t182 = -161804999;

    t182 = ((x845<=x846)==(x847-x848));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x849 = 29U;
	int64_t x850 = -1LL;
	static uint16_t x851 = 101U;
	static uint32_t x852 = 62U;
	static volatile int32_t t183 = -141120;

    t183 = ((x849<=x850)==(x851-x852));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x853 = 0;
	static uint32_t x854 = UINT32_MAX;
	int16_t x855 = -9;
	int32_t t184 = -675745;

    t184 = ((x853<=x854)==(x855-x856));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int64_t x861 = 6397179LL;
	uint64_t x862 = 27682363LLU;
	int16_t x863 = INT16_MAX;
	uint16_t x864 = UINT16_MAX;
	volatile int32_t t185 = -120;

    t185 = ((x861<=x862)==(x863-x864));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x865 = -3;
	int32_t x866 = -124797;
	int8_t x867 = INT8_MAX;
	int8_t x868 = 1;
	int32_t t186 = -1;

    t186 = ((x865<=x866)==(x867-x868));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x869 = INT64_MIN;
	int64_t x870 = INT64_MIN;
	volatile uint8_t x871 = 2U;
	int32_t x872 = -1;
	static volatile int32_t t187 = -28456493;

    t187 = ((x869<=x870)==(x871-x872));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x873 = INT32_MIN;
	int8_t x874 = 1;
	uint64_t x875 = 3524LLU;
	int64_t x876 = INT64_MIN;
	int32_t t188 = -3343;

    t188 = ((x873<=x874)==(x875-x876));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x877 = 3U;
	int16_t x878 = -1;
	volatile int32_t t189 = -1;

    t189 = ((x877<=x878)==(x879-x880));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x881 = 237890U;
	static volatile int64_t x882 = 2187251981882LL;
	int8_t x883 = INT8_MIN;
	volatile int32_t t190 = -299450;

    t190 = ((x881<=x882)==(x883-x884));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x885 = 55U;
	int64_t x886 = -1LL;
	uint64_t x887 = UINT64_MAX;
	volatile int64_t x888 = -6LL;
	volatile int32_t t191 = -99254;

    t191 = ((x885<=x886)==(x887-x888));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x889 = 17183;
	static int64_t x890 = INT64_MIN;
	static int32_t x891 = -1288;
	static int16_t x892 = INT16_MIN;

    t192 = ((x889<=x890)==(x891-x892));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x893 = INT8_MIN;
	uint16_t x894 = 3173U;
	uint32_t x895 = 71U;
	uint32_t x896 = UINT32_MAX;
	volatile int32_t t193 = -1;

    t193 = ((x893<=x894)==(x895-x896));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x897 = UINT8_MAX;
	int32_t x898 = INT32_MAX;
	static uint32_t x899 = UINT32_MAX;
	int8_t x900 = 0;

    t194 = ((x897<=x898)==(x899-x900));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x901 = INT16_MAX;
	volatile int64_t x902 = INT64_MAX;
	int32_t x903 = -1;
	static int32_t t195 = -1;

    t195 = ((x901<=x902)==(x903-x904));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x905 = 0LLU;
	static int16_t x906 = INT16_MIN;
	static int16_t x907 = INT16_MIN;
	static volatile uint8_t x908 = 48U;
	volatile int32_t t196 = -9272;

    t196 = ((x905<=x906)==(x907-x908));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x909 = INT32_MAX;
	uint64_t x912 = UINT64_MAX;

    t197 = ((x909<=x910)==(x911-x912));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x913 = UINT16_MAX;
	static int32_t x914 = -1;
	int32_t x915 = INT32_MIN;
	volatile int32_t t198 = -2521;

    t198 = ((x913<=x914)==(x915-x916));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int8_t x919 = -1;
	int32_t x920 = INT32_MIN;
	int32_t t199 = -150895;

    t199 = ((x917<=x918)==(x919-x920));

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


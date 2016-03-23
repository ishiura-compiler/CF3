
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

static int32_t x2 = 26619;
volatile int32_t x20 = -72;
int16_t x25 = -2;
int32_t x28 = INT32_MIN;
static int8_t x37 = -1;
static uint64_t x44 = UINT64_MAX;
static volatile int32_t t8 = -11853154;
volatile int32_t t9 = -10;
static int32_t x50 = -693231;
int8_t x53 = INT8_MAX;
static volatile int8_t x54 = INT8_MAX;
int32_t x62 = INT32_MIN;
int8_t x63 = INT8_MAX;
static int32_t x70 = -1;
uint16_t x71 = UINT16_MAX;
static int8_t x77 = -1;
volatile int16_t x78 = -32;
volatile int32_t t16 = 21;
uint32_t x87 = UINT32_MAX;
int64_t x93 = INT64_MIN;
static uint16_t x95 = 15600U;
int8_t x96 = INT8_MIN;
uint8_t x130 = 2U;
volatile int32_t x131 = -2;
static volatile int32_t t23 = -1706;
uint8_t x153 = 2U;
int16_t x160 = INT16_MIN;
static volatile int16_t x162 = -1;
int16_t x163 = INT16_MAX;
uint64_t x169 = 151724885768548887LLU;
uint64_t x175 = UINT64_MAX;
volatile int32_t t31 = -67;
int32_t t32 = 1;
uint8_t x194 = 3U;
int16_t x195 = INT16_MIN;
static volatile uint32_t x202 = 264U;
static volatile int32_t x204 = -1;
uint32_t x216 = UINT32_MAX;
int8_t x221 = INT8_MAX;
uint64_t x226 = UINT64_MAX;
static int64_t x236 = -29481573735LL;
int64_t x238 = -1LL;
uint8_t x253 = 9U;
int32_t x261 = 2;
static int64_t x264 = -2178969748749846307LL;
int32_t x267 = -13801955;
static uint8_t x273 = 99U;
static int8_t x282 = INT8_MIN;
int32_t t55 = -127;
static int64_t x298 = -7647194LL;
int8_t x299 = -1;
uint8_t x305 = 56U;
uint16_t x310 = 1141U;
volatile uint64_t x311 = UINT64_MAX;
int8_t x314 = INT8_MIN;
uint32_t x316 = 5735U;
static uint64_t x321 = UINT64_MAX;
volatile uint16_t x322 = UINT16_MAX;
int16_t x327 = 77;
volatile int32_t t61 = -27951;
int32_t t63 = 441032;
int8_t x352 = -1;
uint64_t x357 = UINT64_MAX;
int8_t x379 = INT8_MIN;
int8_t x398 = -1;
uint64_t x400 = 418LLU;
static volatile int32_t t74 = 1;
volatile int8_t x402 = 41;
static int32_t x404 = INT32_MIN;
uint8_t x414 = 17U;
static int32_t x416 = INT32_MAX;
static volatile uint16_t x418 = 8072U;
int8_t x426 = -1;
int32_t x430 = INT32_MAX;
int8_t x445 = INT8_MIN;
int32_t x451 = -2279;
int8_t x455 = -1;
volatile int16_t x468 = -13;
int8_t x470 = INT8_MIN;
int16_t x479 = INT16_MAX;
int16_t x483 = INT16_MIN;
int32_t t91 = 7;
uint32_t x498 = 7772U;
int32_t t93 = -3;
int16_t x503 = -14;
uint8_t x506 = 1U;
int16_t x507 = INT16_MIN;
int64_t x510 = 218885008LL;
volatile uint64_t x519 = 94066317469255LLU;
uint8_t x522 = 29U;
int8_t x526 = 15;
static uint16_t x538 = UINT16_MAX;
volatile int8_t x542 = INT8_MAX;
uint8_t x546 = UINT8_MAX;
static int64_t x557 = -1855021LL;
volatile uint8_t x573 = 1U;
volatile int16_t x579 = INT16_MIN;
int32_t t111 = -135532;
static volatile int32_t x584 = INT32_MAX;
static int16_t x585 = INT16_MIN;
volatile int32_t x588 = -1;
volatile int32_t t113 = 13796;
int64_t x599 = INT64_MAX;
volatile int16_t x603 = INT16_MIN;
int32_t t116 = 2688007;
int64_t x609 = INT64_MIN;
int8_t x615 = INT8_MIN;
uint8_t x617 = 77U;
volatile int32_t x620 = 0;
int64_t x643 = 2131868165787958312LL;
int8_t x663 = INT8_MAX;
int32_t t128 = -7380;
static uint8_t x667 = 2U;
uint16_t x668 = UINT16_MAX;
uint32_t x676 = 40966U;
volatile int8_t x692 = -1;
int32_t t133 = 1;
static int32_t t134 = -2955;
uint8_t x705 = UINT8_MAX;
int8_t x707 = -1;
uint32_t x713 = UINT32_MAX;
volatile int32_t x715 = -1;
int8_t x722 = 29;
int64_t x729 = -11230969754LL;
volatile int64_t x736 = -14943111332557341LL;
volatile uint64_t x746 = UINT64_MAX;
int8_t x750 = -1;
volatile uint64_t x751 = UINT64_MAX;
static uint32_t x755 = 366711U;
volatile int32_t t147 = 3579;
uint32_t x792 = UINT32_MAX;
static uint16_t x794 = 2U;
uint32_t x795 = UINT32_MAX;
static int16_t x796 = INT16_MAX;
int16_t x802 = INT16_MIN;
int32_t t158 = 486;
volatile int64_t x821 = INT64_MIN;
uint64_t x831 = 379354556508261LLU;
uint8_t x837 = 37U;
volatile int32_t t161 = 33491468;
uint64_t x866 = UINT64_MAX;
volatile int32_t t164 = -4590847;
int16_t x881 = 1;
int16_t x882 = -29;
int8_t x886 = INT8_MAX;
static int32_t t168 = 2468962;
int8_t x899 = INT8_MIN;
int32_t x910 = INT32_MIN;
int16_t x915 = INT16_MIN;
int32_t t175 = 11;
uint32_t x946 = 2U;
volatile int32_t x954 = 99246;
uint64_t x955 = 14992973978495LLU;
volatile int8_t x964 = INT8_MIN;
uint8_t x969 = 5U;
int32_t x971 = -1;
int32_t x975 = INT32_MAX;
static volatile uint16_t x976 = 213U;
volatile uint8_t x978 = 0U;
int16_t x980 = INT16_MIN;
volatile int32_t t183 = 115829240;
int8_t x981 = -1;
static volatile uint32_t x985 = UINT32_MAX;
int32_t x988 = INT32_MAX;
volatile int64_t x1007 = 3419912395824252LL;
int64_t x1008 = -58607922544281LL;
int8_t x1013 = -1;
int32_t t190 = -1195;
static uint16_t x1022 = 2462U;
volatile int32_t t192 = -61781845;
int16_t x1030 = INT16_MIN;
int32_t x1032 = INT32_MIN;
static int64_t x1033 = INT64_MIN;
volatile uint64_t x1034 = 971882252LLU;
int32_t t194 = -12065;
uint64_t x1041 = 167336255988477659LLU;
volatile int16_t x1042 = INT16_MAX;
uint64_t x1043 = UINT64_MAX;
volatile int32_t t195 = -38871;
int32_t t198 = -4230;


void f0(void) {
    	volatile int32_t x1 = -1;
	int8_t x3 = -1;
	volatile int16_t x4 = INT16_MAX;
	int32_t t0 = 3555;

    t0 = ((x1-x2)!=(x3-x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = INT16_MIN;
	volatile int16_t x10 = INT16_MIN;
	int64_t x11 = -81988024LL;
	int64_t x12 = 61982934LL;
	volatile int32_t t1 = 55606;

    t1 = ((x9-x10)!=(x11-x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x13 = -1;
	volatile int8_t x14 = -1;
	static uint32_t x15 = 5201U;
	int32_t x16 = 1360;
	volatile int32_t t2 = 14428927;

    t2 = ((x13-x14)!=(x15-x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x17 = 660U;
	int32_t x18 = -1;
	int32_t x19 = -1;
	volatile int32_t t3 = -8;

    t3 = ((x17-x18)!=(x19-x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = 6403175047LL;
	int16_t x22 = -1;
	int64_t x23 = -24329LL;
	static volatile uint8_t x24 = UINT8_MAX;
	int32_t t4 = -7;

    t4 = ((x21-x22)!=(x23-x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x26 = 3U;
	int64_t x27 = INT64_MIN;
	static int32_t t5 = 1376;

    t5 = ((x25-x26)!=(x27-x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x33 = 114U;
	static int16_t x34 = INT16_MAX;
	int8_t x35 = -1;
	int64_t x36 = 113568LL;
	volatile int32_t t6 = 147122827;

    t6 = ((x33-x34)!=(x35-x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x38 = 7;
	int16_t x39 = -6086;
	int32_t x40 = -1;
	volatile int32_t t7 = -153067763;

    t7 = ((x37-x38)!=(x39-x40));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x41 = UINT64_MAX;
	volatile uint8_t x42 = UINT8_MAX;
	int16_t x43 = INT16_MAX;

    t8 = ((x41-x42)!=(x43-x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x45 = -1;
	static int8_t x46 = 31;
	int64_t x47 = INT64_MAX;
	volatile uint32_t x48 = UINT32_MAX;

    t9 = ((x45-x46)!=(x47-x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x49 = UINT64_MAX;
	static volatile uint8_t x51 = UINT8_MAX;
	int16_t x52 = 99;
	volatile int32_t t10 = 3774;

    t10 = ((x49-x50)!=(x51-x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x55 = 173U;
	uint8_t x56 = UINT8_MAX;
	static volatile int32_t t11 = -13;

    t11 = ((x53-x54)!=(x55-x56));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x57 = -1;
	int32_t x58 = INT32_MAX;
	int64_t x59 = INT64_MIN;
	volatile uint64_t x60 = 25713342239360597LLU;
	int32_t t12 = -1;

    t12 = ((x57-x58)!=(x59-x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x61 = INT32_MIN;
	static int16_t x64 = INT16_MIN;
	volatile int32_t t13 = 5390445;

    t13 = ((x61-x62)!=(x63-x64));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x65 = -2;
	uint8_t x66 = 11U;
	int16_t x67 = INT16_MIN;
	int64_t x68 = -1LL;
	volatile int32_t t14 = -61;

    t14 = ((x65-x66)!=(x67-x68));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x69 = 6569764079382LLU;
	static int16_t x72 = INT16_MAX;
	static volatile int32_t t15 = 0;

    t15 = ((x69-x70)!=(x71-x72));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x79 = -118728;
	int8_t x80 = -2;

    t16 = ((x77-x78)!=(x79-x80));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x85 = -1;
	int8_t x86 = 1;
	int32_t x88 = -1;
	static int32_t t17 = -18;

    t17 = ((x85-x86)!=(x87-x88));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x89 = 3926490U;
	static volatile int8_t x90 = INT8_MAX;
	int16_t x91 = -1;
	static uint64_t x92 = 120LLU;
	static int32_t t18 = 1;

    t18 = ((x89-x90)!=(x91-x92));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x94 = INT8_MIN;
	static int32_t t19 = 37959445;

    t19 = ((x93-x94)!=(x95-x96));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint32_t x109 = UINT32_MAX;
	volatile int32_t x110 = 32116;
	static volatile int8_t x111 = -1;
	volatile uint64_t x112 = 387484761028798370LLU;
	volatile int32_t t20 = 261305565;

    t20 = ((x109-x110)!=(x111-x112));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x117 = UINT8_MAX;
	int8_t x118 = INT8_MAX;
	uint32_t x119 = 3854705U;
	uint16_t x120 = 5U;
	static int32_t t21 = -2;

    t21 = ((x117-x118)!=(x119-x120));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x129 = UINT8_MAX;
	uint8_t x132 = UINT8_MAX;
	int32_t t22 = -108;

    t22 = ((x129-x130)!=(x131-x132));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x133 = -1;
	uint16_t x134 = 7999U;
	uint8_t x135 = 1U;
	int32_t x136 = -1;

    t23 = ((x133-x134)!=(x135-x136));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x137 = -1;
	int32_t x138 = -1;
	static int32_t x139 = 21319598;
	uint64_t x140 = UINT64_MAX;
	static volatile int32_t t24 = -8;

    t24 = ((x137-x138)!=(x139-x140));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x141 = -4;
	static int64_t x142 = INT64_MIN;
	int16_t x143 = 7119;
	int32_t x144 = 465891970;
	volatile int32_t t25 = 750331701;

    t25 = ((x141-x142)!=(x143-x144));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x145 = INT32_MIN;
	uint8_t x146 = 0U;
	volatile uint32_t x147 = 18U;
	int64_t x148 = 570111909LL;
	volatile int32_t t26 = 55835668;

    t26 = ((x145-x146)!=(x147-x148));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x154 = 0;
	int16_t x155 = 1;
	volatile int64_t x156 = -129432LL;
	volatile int32_t t27 = 7;

    t27 = ((x153-x154)!=(x155-x156));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x157 = -687;
	volatile int64_t x158 = 11468037447LL;
	static volatile uint8_t x159 = 1U;
	int32_t t28 = 506;

    t28 = ((x157-x158)!=(x159-x160));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x161 = -1;
	int32_t x164 = INT32_MAX;
	int32_t t29 = -2396;

    t29 = ((x161-x162)!=(x163-x164));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x170 = INT16_MIN;
	int16_t x171 = -1;
	int32_t x172 = INT32_MIN;
	volatile int32_t t30 = -785;

    t30 = ((x169-x170)!=(x171-x172));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x173 = 5464454741749166516LLU;
	int64_t x174 = 182833264LL;
	static int16_t x176 = INT16_MIN;

    t31 = ((x173-x174)!=(x175-x176));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x177 = -1LL;
	int32_t x178 = INT32_MAX;
	static uint16_t x179 = 190U;
	static int64_t x180 = 40391LL;

    t32 = ((x177-x178)!=(x179-x180));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x181 = UINT32_MAX;
	int8_t x182 = -46;
	int32_t x183 = -30;
	int16_t x184 = INT16_MIN;
	volatile int32_t t33 = 3360;

    t33 = ((x181-x182)!=(x183-x184));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x189 = -234410431962050628LL;
	volatile uint32_t x190 = 2078271491U;
	uint16_t x191 = 356U;
	int8_t x192 = 1;
	volatile int32_t t34 = -1;

    t34 = ((x189-x190)!=(x191-x192));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x193 = 26U;
	int8_t x196 = INT8_MIN;
	volatile int32_t t35 = 614997673;

    t35 = ((x193-x194)!=(x195-x196));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x197 = -1LL;
	volatile uint8_t x198 = 9U;
	uint8_t x199 = 48U;
	uint8_t x200 = 69U;
	static int32_t t36 = 490;

    t36 = ((x197-x198)!=(x199-x200));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x201 = INT8_MAX;
	volatile uint64_t x203 = 1956827557442441528LLU;
	static int32_t t37 = 1;

    t37 = ((x201-x202)!=(x203-x204));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x213 = INT8_MIN;
	static int8_t x214 = -1;
	uint32_t x215 = UINT32_MAX;
	static volatile int32_t t38 = 124620859;

    t38 = ((x213-x214)!=(x215-x216));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x222 = INT8_MIN;
	volatile int8_t x223 = -1;
	int16_t x224 = 0;
	volatile int32_t t39 = 3520261;

    t39 = ((x221-x222)!=(x223-x224));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x225 = INT64_MIN;
	volatile uint64_t x227 = 617LLU;
	volatile int32_t x228 = INT32_MIN;
	int32_t t40 = 4;

    t40 = ((x225-x226)!=(x227-x228));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x233 = UINT8_MAX;
	volatile int64_t x234 = 49LL;
	int32_t x235 = INT32_MIN;
	int32_t t41 = -32190;

    t41 = ((x233-x234)!=(x235-x236));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x237 = -1;
	int16_t x239 = -1;
	int32_t x240 = INT32_MAX;
	static int32_t t42 = -90822543;

    t42 = ((x237-x238)!=(x239-x240));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x241 = UINT32_MAX;
	static int16_t x242 = -1007;
	int16_t x243 = -1;
	int16_t x244 = INT16_MIN;
	static volatile int32_t t43 = -898;

    t43 = ((x241-x242)!=(x243-x244));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x245 = 1361U;
	int64_t x246 = -43LL;
	uint16_t x247 = UINT16_MAX;
	int16_t x248 = 28;
	int32_t t44 = 201;

    t44 = ((x245-x246)!=(x247-x248));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x249 = 47;
	int64_t x250 = INT64_MAX;
	int64_t x251 = -1LL;
	int64_t x252 = -539293618342857LL;
	static int32_t t45 = 772316;

    t45 = ((x249-x250)!=(x251-x252));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x254 = UINT32_MAX;
	int32_t x255 = -1;
	int32_t x256 = -1;
	volatile int32_t t46 = 869668912;

    t46 = ((x253-x254)!=(x255-x256));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x257 = -116;
	uint32_t x258 = 181676U;
	int32_t x259 = -234844;
	static int16_t x260 = -1;
	static volatile int32_t t47 = 90996136;

    t47 = ((x257-x258)!=(x259-x260));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x262 = 2U;
	int16_t x263 = INT16_MIN;
	volatile int32_t t48 = 55463665;

    t48 = ((x261-x262)!=(x263-x264));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x265 = INT8_MIN;
	volatile int64_t x266 = -1LL;
	int8_t x268 = -6;
	static volatile int32_t t49 = 13823;

    t49 = ((x265-x266)!=(x267-x268));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x269 = INT32_MAX;
	static uint32_t x270 = 2466U;
	int32_t x271 = INT32_MIN;
	volatile int64_t x272 = INT64_MIN;
	int32_t t50 = 275221;

    t50 = ((x269-x270)!=(x271-x272));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x274 = INT16_MAX;
	static int32_t x275 = INT32_MIN;
	volatile int8_t x276 = -62;
	volatile int32_t t51 = 12;

    t51 = ((x273-x274)!=(x275-x276));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x277 = UINT32_MAX;
	int32_t x278 = -39412;
	int8_t x279 = INT8_MIN;
	int16_t x280 = INT16_MIN;
	static int32_t t52 = -8;

    t52 = ((x277-x278)!=(x279-x280));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x281 = 3U;
	uint64_t x283 = 258202985271527LLU;
	int8_t x284 = -2;
	static int32_t t53 = -173;

    t53 = ((x281-x282)!=(x283-x284));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x289 = 74U;
	volatile int8_t x290 = INT8_MIN;
	int8_t x291 = INT8_MIN;
	volatile uint64_t x292 = UINT64_MAX;
	int32_t t54 = 28;

    t54 = ((x289-x290)!=(x291-x292));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x293 = 77595124;
	int32_t x294 = -2;
	static volatile int64_t x295 = INT64_MAX;
	volatile int32_t x296 = INT32_MAX;

    t55 = ((x293-x294)!=(x295-x296));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x297 = INT32_MIN;
	volatile uint16_t x300 = 7U;
	int32_t t56 = 376;

    t56 = ((x297-x298)!=(x299-x300));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x306 = UINT8_MAX;
	static uint8_t x307 = UINT8_MAX;
	volatile uint32_t x308 = 27217718U;
	int32_t t57 = 16058288;

    t57 = ((x305-x306)!=(x307-x308));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x309 = 124559991LLU;
	int16_t x312 = INT16_MIN;
	volatile int32_t t58 = 25141499;

    t58 = ((x309-x310)!=(x311-x312));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x313 = 0;
	uint16_t x315 = 392U;
	int32_t t59 = -9741307;

    t59 = ((x313-x314)!=(x315-x316));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x323 = 61795U;
	uint16_t x324 = 6U;
	volatile int32_t t60 = 34512;

    t60 = ((x321-x322)!=(x323-x324));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x325 = 137071545508LLU;
	static volatile int16_t x326 = INT16_MAX;
	int16_t x328 = 3;

    t61 = ((x325-x326)!=(x327-x328));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x329 = UINT64_MAX;
	int8_t x330 = INT8_MIN;
	uint32_t x331 = 95215U;
	uint16_t x332 = 26081U;
	volatile int32_t t62 = 251078000;

    t62 = ((x329-x330)!=(x331-x332));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x337 = 3U;
	int8_t x338 = -1;
	int8_t x339 = INT8_MIN;
	uint16_t x340 = 0U;

    t63 = ((x337-x338)!=(x339-x340));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x341 = INT8_MIN;
	uint8_t x342 = 0U;
	int16_t x343 = 2383;
	static int8_t x344 = INT8_MAX;
	volatile int32_t t64 = -1;

    t64 = ((x341-x342)!=(x343-x344));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x345 = INT64_MIN;
	int32_t x346 = -1;
	int64_t x347 = INT64_MIN;
	static int8_t x348 = INT8_MIN;
	volatile int32_t t65 = 0;

    t65 = ((x345-x346)!=(x347-x348));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x349 = -1;
	static uint64_t x350 = 3043828617299LLU;
	static int64_t x351 = INT64_MIN;
	volatile int32_t t66 = -581415;

    t66 = ((x349-x350)!=(x351-x352));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x353 = UINT64_MAX;
	static int16_t x354 = 167;
	static int64_t x355 = INT64_MAX;
	static uint16_t x356 = UINT16_MAX;
	int32_t t67 = -19544;

    t67 = ((x353-x354)!=(x355-x356));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x358 = 31;
	int64_t x359 = -36287118LL;
	int32_t x360 = -435845;
	static volatile int32_t t68 = -805;

    t68 = ((x357-x358)!=(x359-x360));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x369 = -1LL;
	static uint8_t x370 = 14U;
	int32_t x371 = 50;
	static volatile int8_t x372 = 2;
	int32_t t69 = -69;

    t69 = ((x369-x370)!=(x371-x372));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x377 = INT16_MAX;
	volatile uint8_t x378 = UINT8_MAX;
	static int8_t x380 = -1;
	volatile int32_t t70 = 1;

    t70 = ((x377-x378)!=(x379-x380));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x381 = INT64_MIN;
	int16_t x382 = INT16_MIN;
	volatile int16_t x383 = INT16_MAX;
	uint64_t x384 = 1138719847LLU;
	volatile int32_t t71 = -131961863;

    t71 = ((x381-x382)!=(x383-x384));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x385 = 412;
	volatile int8_t x386 = INT8_MIN;
	int16_t x387 = INT16_MAX;
	uint64_t x388 = 20380LLU;
	volatile int32_t t72 = -35;

    t72 = ((x385-x386)!=(x387-x388));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x389 = 727;
	uint16_t x390 = 1207U;
	volatile uint16_t x391 = 342U;
	static volatile uint16_t x392 = 9538U;
	static int32_t t73 = -6185743;

    t73 = ((x389-x390)!=(x391-x392));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x397 = INT8_MIN;
	int16_t x399 = INT16_MAX;

    t74 = ((x397-x398)!=(x399-x400));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x401 = 955999;
	volatile int64_t x403 = INT64_MIN;
	int32_t t75 = -18743502;

    t75 = ((x401-x402)!=(x403-x404));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x405 = 136009193323795LL;
	uint32_t x406 = 1890U;
	int8_t x407 = INT8_MIN;
	static uint8_t x408 = 3U;
	volatile int32_t t76 = -859374387;

    t76 = ((x405-x406)!=(x407-x408));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x413 = 1U;
	uint32_t x415 = UINT32_MAX;
	int32_t t77 = -4;

    t77 = ((x413-x414)!=(x415-x416));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint64_t x417 = UINT64_MAX;
	uint64_t x419 = 34LLU;
	uint8_t x420 = UINT8_MAX;
	int32_t t78 = -81;

    t78 = ((x417-x418)!=(x419-x420));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x425 = UINT64_MAX;
	uint64_t x427 = 45969667466632045LLU;
	int8_t x428 = -1;
	static int32_t t79 = -638;

    t79 = ((x425-x426)!=(x427-x428));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x429 = 973507058U;
	int8_t x431 = INT8_MIN;
	volatile uint8_t x432 = 29U;
	volatile int32_t t80 = -128;

    t80 = ((x429-x430)!=(x431-x432));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x433 = -1;
	volatile int16_t x434 = INT16_MIN;
	volatile int32_t x435 = INT32_MIN;
	volatile int8_t x436 = -1;
	volatile int32_t t81 = 2193;

    t81 = ((x433-x434)!=(x435-x436));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x441 = 47;
	uint8_t x442 = UINT8_MAX;
	int64_t x443 = INT64_MAX;
	static uint64_t x444 = 17LLU;
	int32_t t82 = -32535;

    t82 = ((x441-x442)!=(x443-x444));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x446 = 9;
	int8_t x447 = INT8_MAX;
	int32_t x448 = INT32_MAX;
	volatile int32_t t83 = 916507003;

    t83 = ((x445-x446)!=(x447-x448));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x449 = INT16_MIN;
	int8_t x450 = INT8_MIN;
	uint8_t x452 = 30U;
	int32_t t84 = 251;

    t84 = ((x449-x450)!=(x451-x452));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x453 = 45U;
	int16_t x454 = 2;
	static int64_t x456 = -26011LL;
	volatile int32_t t85 = 80;

    t85 = ((x453-x454)!=(x455-x456));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x457 = INT8_MIN;
	int8_t x458 = INT8_MAX;
	uint32_t x459 = UINT32_MAX;
	int16_t x460 = -944;
	volatile int32_t t86 = -81;

    t86 = ((x457-x458)!=(x459-x460));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x465 = INT8_MAX;
	volatile int16_t x466 = INT16_MAX;
	int64_t x467 = -426827LL;
	volatile int32_t t87 = -169;

    t87 = ((x465-x466)!=(x467-x468));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x469 = -1;
	int64_t x471 = 1512171600006LL;
	uint8_t x472 = UINT8_MAX;
	int32_t t88 = -128035;

    t88 = ((x469-x470)!=(x471-x472));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x473 = INT8_MIN;
	int32_t x474 = -14;
	uint8_t x475 = 1U;
	uint16_t x476 = 29251U;
	int32_t t89 = 0;

    t89 = ((x473-x474)!=(x475-x476));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x477 = 3;
	int8_t x478 = 3;
	int8_t x480 = INT8_MIN;
	volatile int32_t t90 = 5178;

    t90 = ((x477-x478)!=(x479-x480));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x481 = 3510864559415370167LLU;
	volatile uint16_t x482 = 2427U;
	int32_t x484 = 2;

    t91 = ((x481-x482)!=(x483-x484));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x489 = INT8_MIN;
	volatile int16_t x490 = INT16_MAX;
	volatile int16_t x491 = INT16_MAX;
	uint32_t x492 = UINT32_MAX;
	int32_t t92 = 101750631;

    t92 = ((x489-x490)!=(x491-x492));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x497 = 3707;
	static uint64_t x499 = 4204999426LLU;
	uint32_t x500 = UINT32_MAX;

    t93 = ((x497-x498)!=(x499-x500));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x501 = INT8_MAX;
	int64_t x502 = 144227015063LL;
	uint32_t x504 = 105272559U;
	volatile int32_t t94 = -1;

    t94 = ((x501-x502)!=(x503-x504));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x505 = 988090342611960LL;
	int64_t x508 = -1LL;
	static volatile int32_t t95 = -10078;

    t95 = ((x505-x506)!=(x507-x508));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x509 = UINT64_MAX;
	uint32_t x511 = 175284910U;
	int16_t x512 = 205;
	static volatile int32_t t96 = -1386082;

    t96 = ((x509-x510)!=(x511-x512));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x513 = 2929LLU;
	uint64_t x514 = 2597LLU;
	uint32_t x515 = 0U;
	int64_t x516 = -1LL;
	int32_t t97 = 0;

    t97 = ((x513-x514)!=(x515-x516));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x517 = 4786296857LLU;
	static volatile int64_t x518 = -1LL;
	int64_t x520 = -1LL;
	volatile int32_t t98 = 6105;

    t98 = ((x517-x518)!=(x519-x520));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x521 = UINT32_MAX;
	static int64_t x523 = INT64_MIN;
	volatile int32_t x524 = INT32_MIN;
	volatile int32_t t99 = 79;

    t99 = ((x521-x522)!=(x523-x524));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x525 = INT8_MIN;
	static int8_t x527 = 5;
	uint32_t x528 = 445U;
	int32_t t100 = 4665;

    t100 = ((x525-x526)!=(x527-x528));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x529 = INT64_MAX;
	volatile int8_t x530 = 14;
	int8_t x531 = INT8_MIN;
	uint32_t x532 = UINT32_MAX;
	volatile int32_t t101 = 165125;

    t101 = ((x529-x530)!=(x531-x532));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x533 = -123451;
	volatile uint16_t x534 = UINT16_MAX;
	uint16_t x535 = UINT16_MAX;
	volatile uint32_t x536 = 1832792994U;
	int32_t t102 = -8176325;

    t102 = ((x533-x534)!=(x535-x536));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x537 = 6908173355479LLU;
	uint64_t x539 = 1005944367340LLU;
	uint16_t x540 = 3801U;
	volatile int32_t t103 = -1;

    t103 = ((x537-x538)!=(x539-x540));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x541 = INT16_MAX;
	int32_t x543 = 23717258;
	int32_t x544 = 389;
	int32_t t104 = 42161;

    t104 = ((x541-x542)!=(x543-x544));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x545 = INT64_MAX;
	uint16_t x547 = UINT16_MAX;
	int16_t x548 = -1;
	int32_t t105 = 0;

    t105 = ((x545-x546)!=(x547-x548));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x553 = 190;
	int64_t x554 = -384LL;
	static int32_t x555 = -1;
	uint16_t x556 = 179U;
	int32_t t106 = 0;

    t106 = ((x553-x554)!=(x555-x556));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x558 = -1;
	int16_t x559 = -126;
	uint16_t x560 = UINT16_MAX;
	int32_t t107 = 2565443;

    t107 = ((x557-x558)!=(x559-x560));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x561 = INT16_MAX;
	int8_t x562 = -1;
	int8_t x563 = 8;
	static int8_t x564 = INT8_MIN;
	volatile int32_t t108 = -46810;

    t108 = ((x561-x562)!=(x563-x564));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x565 = 4;
	int16_t x566 = INT16_MIN;
	static uint64_t x567 = 13LLU;
	uint16_t x568 = 1U;
	int32_t t109 = 19;

    t109 = ((x565-x566)!=(x567-x568));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x574 = INT8_MIN;
	static uint64_t x575 = UINT64_MAX;
	int16_t x576 = -1;
	int32_t t110 = -40402608;

    t110 = ((x573-x574)!=(x575-x576));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x577 = 5243;
	int16_t x578 = -1;
	int64_t x580 = INT64_MIN;

    t111 = ((x577-x578)!=(x579-x580));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x581 = INT64_MAX;
	int8_t x582 = 3;
	int32_t x583 = 1;
	volatile int32_t t112 = 0;

    t112 = ((x581-x582)!=(x583-x584));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x586 = 91U;
	volatile uint16_t x587 = UINT16_MAX;

    t113 = ((x585-x586)!=(x587-x588));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x597 = 607576223U;
	volatile int32_t x598 = INT32_MAX;
	uint32_t x600 = 7779223U;
	volatile int32_t t114 = 1587668;

    t114 = ((x597-x598)!=(x599-x600));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x601 = 989407287U;
	int8_t x602 = INT8_MAX;
	int16_t x604 = INT16_MIN;
	int32_t t115 = 33761337;

    t115 = ((x601-x602)!=(x603-x604));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x605 = INT16_MIN;
	static volatile int32_t x606 = INT32_MIN;
	static uint32_t x607 = UINT32_MAX;
	int32_t x608 = -32238500;

    t116 = ((x605-x606)!=(x607-x608));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x610 = INT64_MIN;
	uint32_t x611 = UINT32_MAX;
	int64_t x612 = INT64_MAX;
	int32_t t117 = -6490;

    t117 = ((x609-x610)!=(x611-x612));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x613 = INT64_MIN;
	volatile uint64_t x614 = 320540LLU;
	static int16_t x616 = INT16_MAX;
	static int32_t t118 = -35595682;

    t118 = ((x613-x614)!=(x615-x616));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x618 = INT8_MAX;
	static volatile int32_t x619 = 94877;
	int32_t t119 = -3245;

    t119 = ((x617-x618)!=(x619-x620));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x629 = INT8_MAX;
	int64_t x630 = -8705LL;
	static volatile uint64_t x631 = UINT64_MAX;
	int16_t x632 = INT16_MIN;
	int32_t t120 = 437875715;

    t120 = ((x629-x630)!=(x631-x632));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x633 = UINT32_MAX;
	int32_t x634 = INT32_MIN;
	uint8_t x635 = UINT8_MAX;
	static int8_t x636 = 0;
	int32_t t121 = 91;

    t121 = ((x633-x634)!=(x635-x636));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x637 = 5977698LLU;
	int64_t x638 = 1LL;
	uint16_t x639 = 2U;
	int64_t x640 = 8LL;
	static int32_t t122 = -7396152;

    t122 = ((x637-x638)!=(x639-x640));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x641 = -1;
	int8_t x642 = INT8_MAX;
	uint32_t x644 = 9545255U;
	int32_t t123 = -326853202;

    t123 = ((x641-x642)!=(x643-x644));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x645 = 0;
	int8_t x646 = -1;
	volatile uint32_t x647 = 216896324U;
	int64_t x648 = -1806612LL;
	int32_t t124 = 110764;

    t124 = ((x645-x646)!=(x647-x648));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x649 = INT32_MIN;
	static uint16_t x650 = 0U;
	static uint8_t x651 = 1U;
	int64_t x652 = -28156756645214LL;
	volatile int32_t t125 = 1055241407;

    t125 = ((x649-x650)!=(x651-x652));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x653 = UINT8_MAX;
	uint16_t x654 = 25803U;
	static int32_t x655 = 0;
	static uint64_t x656 = 1884400631569062LLU;
	static volatile int32_t t126 = -83207;

    t126 = ((x653-x654)!=(x655-x656));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x657 = UINT16_MAX;
	volatile int32_t x658 = -1;
	int64_t x659 = -55691LL;
	static volatile uint64_t x660 = UINT64_MAX;
	volatile int32_t t127 = -1795;

    t127 = ((x657-x658)!=(x659-x660));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x661 = UINT64_MAX;
	uint64_t x662 = 9LLU;
	int8_t x664 = -1;

    t128 = ((x661-x662)!=(x663-x664));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x665 = 12U;
	int16_t x666 = INT16_MIN;
	volatile int32_t t129 = 36895;

    t129 = ((x665-x666)!=(x667-x668));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x669 = INT16_MAX;
	int16_t x670 = 9;
	int64_t x671 = INT64_MIN;
	static int32_t x672 = -1;
	static volatile int32_t t130 = 1;

    t130 = ((x669-x670)!=(x671-x672));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x673 = INT8_MIN;
	int32_t x674 = -764464;
	int32_t x675 = -1;
	int32_t t131 = 1;

    t131 = ((x673-x674)!=(x675-x676));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x685 = -233779;
	static int32_t x686 = INT32_MIN;
	volatile int32_t x687 = INT32_MIN;
	uint32_t x688 = 39705349U;
	int32_t t132 = 752807578;

    t132 = ((x685-x686)!=(x687-x688));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x689 = INT8_MIN;
	int8_t x690 = -1;
	static int16_t x691 = -1;

    t133 = ((x689-x690)!=(x691-x692));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x693 = -1;
	uint64_t x694 = 235709654616125LLU;
	static uint32_t x695 = 136U;
	int16_t x696 = INT16_MIN;

    t134 = ((x693-x694)!=(x695-x696));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x697 = -1;
	static int8_t x698 = INT8_MAX;
	int64_t x699 = -91516717958360LL;
	volatile int16_t x700 = INT16_MAX;
	static volatile int32_t t135 = 2298;

    t135 = ((x697-x698)!=(x699-x700));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x701 = INT32_MIN;
	int32_t x702 = INT32_MIN;
	volatile int32_t x703 = -1;
	int16_t x704 = -1;
	int32_t t136 = -31096274;

    t136 = ((x701-x702)!=(x703-x704));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x706 = 1022515LLU;
	int32_t x708 = INT32_MAX;
	int32_t t137 = 1049694822;

    t137 = ((x705-x706)!=(x707-x708));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int32_t x714 = -64;
	int8_t x716 = INT8_MIN;
	volatile int32_t t138 = 14;

    t138 = ((x713-x714)!=(x715-x716));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x721 = 2U;
	int8_t x723 = -1;
	uint16_t x724 = 124U;
	static volatile int32_t t139 = -303325;

    t139 = ((x721-x722)!=(x723-x724));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int8_t x730 = -1;
	int16_t x731 = INT16_MIN;
	int64_t x732 = INT64_MIN;
	int32_t t140 = 38483;

    t140 = ((x729-x730)!=(x731-x732));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int16_t x733 = 11344;
	uint16_t x734 = UINT16_MAX;
	int32_t x735 = INT32_MIN;
	volatile int32_t t141 = 24898319;

    t141 = ((x733-x734)!=(x735-x736));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x737 = 30;
	uint8_t x738 = UINT8_MAX;
	volatile uint32_t x739 = 1302589867U;
	uint64_t x740 = 2352LLU;
	int32_t t142 = 1535263;

    t142 = ((x737-x738)!=(x739-x740));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x741 = 127;
	volatile uint64_t x742 = 2438LLU;
	uint16_t x743 = UINT16_MAX;
	static int64_t x744 = -1LL;
	volatile int32_t t143 = 0;

    t143 = ((x741-x742)!=(x743-x744));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x745 = 15;
	int64_t x747 = -108LL;
	uint32_t x748 = 263U;
	int32_t t144 = -194077589;

    t144 = ((x745-x746)!=(x747-x748));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x749 = INT64_MIN;
	int16_t x752 = -1;
	int32_t t145 = 118;

    t145 = ((x749-x750)!=(x751-x752));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x753 = INT8_MAX;
	uint32_t x754 = UINT32_MAX;
	static uint8_t x756 = 6U;
	volatile int32_t t146 = -165032;

    t146 = ((x753-x754)!=(x755-x756));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x757 = 21;
	uint64_t x758 = 356502LLU;
	int32_t x759 = -895796275;
	uint8_t x760 = 5U;

    t147 = ((x757-x758)!=(x759-x760));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x765 = INT64_MAX;
	uint32_t x766 = 35U;
	static int8_t x767 = INT8_MAX;
	int32_t x768 = 2;
	volatile int32_t t148 = 49;

    t148 = ((x765-x766)!=(x767-x768));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x769 = INT16_MAX;
	volatile int32_t x770 = -3;
	static int16_t x771 = INT16_MIN;
	int16_t x772 = INT16_MIN;
	int32_t t149 = -4140993;

    t149 = ((x769-x770)!=(x771-x772));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x773 = INT16_MIN;
	volatile int8_t x774 = INT8_MAX;
	int16_t x775 = -1;
	int64_t x776 = INT64_MAX;
	int32_t t150 = -18425;

    t150 = ((x773-x774)!=(x775-x776));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x777 = -1;
	uint64_t x778 = UINT64_MAX;
	int64_t x779 = INT64_MIN;
	static uint64_t x780 = UINT64_MAX;
	static int32_t t151 = 2;

    t151 = ((x777-x778)!=(x779-x780));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x785 = INT16_MIN;
	int16_t x786 = 121;
	uint32_t x787 = UINT32_MAX;
	int32_t x788 = INT32_MAX;
	int32_t t152 = 1;

    t152 = ((x785-x786)!=(x787-x788));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x789 = 79U;
	static int64_t x790 = INT64_MAX;
	uint32_t x791 = 64267U;
	static int32_t t153 = 68763;

    t153 = ((x789-x790)!=(x791-x792));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x793 = 2U;
	int32_t t154 = -7;

    t154 = ((x793-x794)!=(x795-x796));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x797 = 7;
	static int64_t x798 = 17719LL;
	uint32_t x799 = 244106634U;
	static uint16_t x800 = 48U;
	static volatile int32_t t155 = 3220;

    t155 = ((x797-x798)!=(x799-x800));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x801 = 0LL;
	uint64_t x803 = UINT64_MAX;
	int32_t x804 = -1153;
	static int32_t t156 = -1;

    t156 = ((x801-x802)!=(x803-x804));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x805 = 4;
	static uint8_t x806 = 0U;
	static uint32_t x807 = 29081U;
	int32_t x808 = INT32_MIN;
	int32_t t157 = -83351789;

    t157 = ((x805-x806)!=(x807-x808));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int8_t x813 = -1;
	int16_t x814 = INT16_MAX;
	int8_t x815 = INT8_MIN;
	uint16_t x816 = UINT16_MAX;

    t158 = ((x813-x814)!=(x815-x816));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x822 = 463957912953LLU;
	int32_t x823 = INT32_MIN;
	int64_t x824 = -1LL;
	volatile int32_t t159 = -78;

    t159 = ((x821-x822)!=(x823-x824));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x829 = 3293;
	int8_t x830 = -1;
	uint16_t x832 = 1U;
	int32_t t160 = 31;

    t160 = ((x829-x830)!=(x831-x832));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x838 = UINT64_MAX;
	int8_t x839 = -1;
	static uint16_t x840 = UINT16_MAX;

    t161 = ((x837-x838)!=(x839-x840));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x841 = UINT64_MAX;
	int64_t x842 = INT64_MIN;
	uint16_t x843 = UINT16_MAX;
	int64_t x844 = -34419LL;
	static int32_t t162 = -19423;

    t162 = ((x841-x842)!=(x843-x844));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x857 = 15210728162LLU;
	uint32_t x858 = UINT32_MAX;
	int16_t x859 = -1;
	static uint32_t x860 = 581411643U;
	static volatile int32_t t163 = -1870;

    t163 = ((x857-x858)!=(x859-x860));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x865 = 6815545LLU;
	int16_t x867 = -1;
	int32_t x868 = INT32_MAX;

    t164 = ((x865-x866)!=(x867-x868));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x869 = INT64_MIN;
	int64_t x870 = INT64_MIN;
	int64_t x871 = INT64_MAX;
	static uint8_t x872 = UINT8_MAX;
	int32_t t165 = 1;

    t165 = ((x869-x870)!=(x871-x872));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x883 = -1;
	int32_t x884 = -1;
	int32_t t166 = 64591306;

    t166 = ((x881-x882)!=(x883-x884));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x885 = 2;
	uint64_t x887 = UINT64_MAX;
	volatile int32_t x888 = -1;
	static int32_t t167 = 60919;

    t167 = ((x885-x886)!=(x887-x888));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x889 = INT8_MIN;
	int8_t x890 = 1;
	volatile uint16_t x891 = 5U;
	int8_t x892 = INT8_MAX;

    t168 = ((x889-x890)!=(x891-x892));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int16_t x897 = INT16_MAX;
	int64_t x898 = 11022LL;
	volatile uint16_t x900 = 28U;
	volatile int32_t t169 = -11;

    t169 = ((x897-x898)!=(x899-x900));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x901 = 1577195666356369LL;
	int8_t x902 = -2;
	int32_t x903 = -1;
	int32_t x904 = -957;
	int32_t t170 = -451;

    t170 = ((x901-x902)!=(x903-x904));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x909 = -1831192;
	int64_t x911 = -1LL;
	int8_t x912 = INT8_MIN;
	int32_t t171 = -28;

    t171 = ((x909-x910)!=(x911-x912));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x913 = -1;
	int16_t x914 = INT16_MAX;
	int16_t x916 = 6;
	static int32_t t172 = 104;

    t172 = ((x913-x914)!=(x915-x916));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint16_t x921 = UINT16_MAX;
	static volatile int16_t x922 = INT16_MIN;
	volatile uint32_t x923 = UINT32_MAX;
	int16_t x924 = -1125;
	int32_t t173 = 26278854;

    t173 = ((x921-x922)!=(x923-x924));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x925 = -1LL;
	int32_t x926 = -1721;
	static int32_t x927 = -1;
	static int8_t x928 = INT8_MIN;
	static volatile int32_t t174 = 29629336;

    t174 = ((x925-x926)!=(x927-x928));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x929 = 1;
	uint8_t x930 = 0U;
	volatile int8_t x931 = INT8_MIN;
	uint16_t x932 = 3U;

    t175 = ((x929-x930)!=(x931-x932));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x937 = 12308904LL;
	int16_t x938 = -1;
	int64_t x939 = INT64_MIN;
	int16_t x940 = INT16_MIN;
	int32_t t176 = -236566;

    t176 = ((x937-x938)!=(x939-x940));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x945 = UINT32_MAX;
	uint16_t x947 = 1U;
	int32_t x948 = -1;
	int32_t t177 = 2;

    t177 = ((x945-x946)!=(x947-x948));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x953 = 316U;
	uint64_t x956 = 11509012057LLU;
	volatile int32_t t178 = -54;

    t178 = ((x953-x954)!=(x955-x956));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x961 = 13U;
	static int8_t x962 = INT8_MAX;
	static uint16_t x963 = 6U;
	volatile int32_t t179 = 6650176;

    t179 = ((x961-x962)!=(x963-x964));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x965 = UINT64_MAX;
	static int64_t x966 = -1LL;
	static uint32_t x967 = 21219996U;
	int16_t x968 = -13;
	volatile int32_t t180 = 1035369991;

    t180 = ((x965-x966)!=(x967-x968));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x970 = INT16_MIN;
	static int64_t x972 = -7613586116066LL;
	volatile int32_t t181 = 3338;

    t181 = ((x969-x970)!=(x971-x972));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint64_t x973 = UINT64_MAX;
	int64_t x974 = -1LL;
	int32_t t182 = -60933;

    t182 = ((x973-x974)!=(x975-x976));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x977 = 158LLU;
	uint8_t x979 = 1U;

    t183 = ((x977-x978)!=(x979-x980));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x982 = INT64_MAX;
	uint64_t x983 = 1LLU;
	int8_t x984 = INT8_MIN;
	volatile int32_t t184 = -145;

    t184 = ((x981-x982)!=(x983-x984));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x986 = -1;
	static int8_t x987 = -1;
	int32_t t185 = -13645;

    t185 = ((x985-x986)!=(x987-x988));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x989 = UINT64_MAX;
	volatile uint32_t x990 = UINT32_MAX;
	uint16_t x991 = 8U;
	int16_t x992 = -1;
	int32_t t186 = 21;

    t186 = ((x989-x990)!=(x991-x992));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x997 = INT16_MIN;
	static uint64_t x998 = 420549687494LLU;
	int32_t x999 = INT32_MIN;
	uint32_t x1000 = 7U;
	volatile int32_t t187 = 1280;

    t187 = ((x997-x998)!=(x999-x1000));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x1001 = -589470087LL;
	static volatile int32_t x1002 = INT32_MAX;
	volatile uint64_t x1003 = 11329541LLU;
	uint8_t x1004 = UINT8_MAX;
	volatile int32_t t188 = -246707122;

    t188 = ((x1001-x1002)!=(x1003-x1004));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1005 = 6;
	int64_t x1006 = 119910662029313LL;
	volatile int32_t t189 = 2204714;

    t189 = ((x1005-x1006)!=(x1007-x1008));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x1014 = INT16_MIN;
	volatile int64_t x1015 = 382129LL;
	volatile int64_t x1016 = 18LL;

    t190 = ((x1013-x1014)!=(x1015-x1016));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1021 = UINT8_MAX;
	int16_t x1023 = -1104;
	static int8_t x1024 = -1;
	static int32_t t191 = -1286;

    t191 = ((x1021-x1022)!=(x1023-x1024));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x1025 = 1;
	static volatile int32_t x1026 = 46;
	uint8_t x1027 = 8U;
	int32_t x1028 = 1783424;

    t192 = ((x1025-x1026)!=(x1027-x1028));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1029 = UINT16_MAX;
	int16_t x1031 = -1;
	volatile int32_t t193 = 2;

    t193 = ((x1029-x1030)!=(x1031-x1032));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1035 = 107421624LLU;
	uint8_t x1036 = UINT8_MAX;

    t194 = ((x1033-x1034)!=(x1035-x1036));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x1044 = INT64_MIN;

    t195 = ((x1041-x1042)!=(x1043-x1044));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint32_t x1045 = 1560127601U;
	int64_t x1046 = -1LL;
	int16_t x1047 = -3;
	static int16_t x1048 = INT16_MIN;
	volatile int32_t t196 = 7;

    t196 = ((x1045-x1046)!=(x1047-x1048));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1049 = 8356U;
	int16_t x1050 = 1;
	uint32_t x1051 = 1U;
	static int8_t x1052 = 1;
	volatile int32_t t197 = -81;

    t197 = ((x1049-x1050)!=(x1051-x1052));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1053 = 3;
	static volatile int16_t x1054 = 566;
	volatile int32_t x1055 = 6;
	volatile uint32_t x1056 = 253596U;

    t198 = ((x1053-x1054)!=(x1055-x1056));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x1061 = INT16_MIN;
	int8_t x1062 = INT8_MAX;
	int8_t x1063 = 0;
	uint32_t x1064 = 11603U;
	static int32_t t199 = -5649666;

    t199 = ((x1061-x1062)!=(x1063-x1064));

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


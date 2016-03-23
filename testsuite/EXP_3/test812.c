
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

static int8_t x17 = INT8_MIN;
int16_t x20 = INT16_MIN;
int64_t x27 = INT64_MAX;
int64_t x41 = 0LL;
uint32_t x42 = 3378399U;
static volatile int64_t t8 = -31LL;
volatile int16_t x52 = 10;
int8_t x56 = INT8_MAX;
static uint8_t x61 = UINT8_MAX;
static volatile int64_t t13 = 2959756LL;
int16_t x78 = -4125;
uint32_t t15 = 6398277U;
static uint8_t x81 = 55U;
int8_t x84 = -1;
int16_t x85 = 0;
uint64_t t17 = 37486LLU;
volatile uint32_t t18 = 18464478U;
int8_t x95 = -1;
int16_t x101 = INT16_MAX;
volatile int64_t t22 = -209717000621748LL;
int32_t x110 = INT32_MIN;
uint32_t x117 = UINT32_MAX;
int32_t x118 = -1;
static int8_t x120 = 1;
int16_t x124 = INT16_MIN;
int64_t t29 = 0LL;
uint64_t x142 = 13963172LLU;
volatile uint32_t x143 = 95014U;
volatile int16_t x149 = INT16_MAX;
int64_t x152 = INT64_MIN;
int8_t x154 = INT8_MAX;
uint32_t x156 = 15704U;
int64_t t33 = 53729169035256103LL;
uint32_t x158 = 244766U;
int32_t x165 = -1;
uint8_t x166 = UINT8_MAX;
volatile int64_t x170 = INT64_MIN;
int16_t x172 = INT16_MAX;
int32_t t38 = -29151609;
volatile uint64_t t39 = 10184LLU;
int16_t x192 = -1347;
int16_t x195 = -1;
static int16_t x208 = INT16_MAX;
volatile int32_t t43 = -937118;
uint32_t x217 = 12928U;
volatile int64_t t44 = 1710264294596487366LL;
static int8_t x221 = INT8_MAX;
int16_t x224 = INT16_MAX;
int8_t x234 = 1;
volatile int32_t t48 = -1536;
static int8_t x244 = 6;
int16_t x248 = 84;
volatile uint64_t t51 = 17034LLU;
int16_t x265 = 2451;
int8_t x269 = INT8_MIN;
static volatile int64_t x272 = INT64_MIN;
static uint32_t x276 = UINT32_MAX;
int64_t t56 = 983356173LL;
uint64_t t58 = 252287438LLU;
volatile int64_t t63 = 25842262813400447LL;
volatile uint16_t x308 = 24U;
volatile int16_t x309 = 0;
int8_t x311 = INT8_MAX;
uint16_t x313 = UINT16_MAX;
volatile int32_t x315 = INT32_MIN;
volatile int64_t t66 = -633308875287806551LL;
static volatile int64_t x318 = INT64_MIN;
static int8_t x319 = -6;
int8_t x322 = INT8_MAX;
static volatile int8_t x327 = INT8_MIN;
int64_t t70 = 99436952116LL;
volatile int32_t x338 = INT32_MAX;
uint64_t t72 = 867865171440209LLU;
volatile uint16_t x342 = 22U;
static uint64_t x343 = UINT64_MAX;
int16_t x356 = -1332;
static uint16_t x358 = 118U;
uint32_t t77 = 28U;
int8_t x364 = -1;
int64_t x369 = INT64_MAX;
static uint64_t x371 = 964663993LLU;
volatile int16_t x374 = INT16_MAX;
static volatile uint64_t t81 = 26691250459247059LLU;
int16_t x382 = INT16_MIN;
int64_t x392 = 1413934LL;
uint64_t x407 = 213954877LLU;
volatile uint8_t x409 = 14U;
int16_t x412 = INT16_MAX;
int8_t x413 = INT8_MIN;
static int8_t x416 = 45;
static volatile int32_t t88 = 38;
uint32_t t89 = 26525518U;
int32_t x423 = INT32_MIN;
int32_t x427 = INT32_MIN;
volatile uint16_t x441 = 4197U;
static volatile uint64_t x445 = 618872322126LLU;
static uint64_t t95 = 94607745522610LLU;
int8_t x449 = INT8_MIN;
volatile uint32_t x451 = 484164U;
static int32_t x462 = 0;
static volatile int32_t t98 = -99139286;
int64_t x465 = -11LL;
uint8_t x467 = UINT8_MAX;
uint16_t x469 = 16U;
static uint16_t x475 = 4U;
volatile uint8_t x481 = 3U;
int64_t x483 = INT64_MAX;
int64_t t102 = -250515095LL;
volatile uint64_t t103 = 8161286211LLU;
volatile uint64_t x490 = 56287415421029LLU;
uint16_t x493 = UINT16_MAX;
static int32_t x496 = -1;
static volatile uint64_t t105 = 27LLU;
int64_t x505 = 29197LL;
static int8_t x511 = 36;
uint32_t x513 = 3394U;
int32_t x514 = 147883503;
uint32_t t109 = 750905622U;
static int16_t x519 = INT16_MIN;
uint16_t x520 = 5U;
uint16_t x525 = 0U;
volatile uint64_t t111 = 122843819621025LLU;
int8_t x530 = 1;
uint16_t x536 = UINT16_MAX;
int32_t x539 = INT32_MAX;
static int16_t x542 = -1;
volatile uint64_t x547 = 1563894LLU;
static uint32_t x548 = 83U;
static volatile uint64_t t116 = 733699381693563717LLU;
int16_t x549 = 164;
volatile uint64_t t118 = 437725813LLU;
uint32_t x557 = 0U;
int32_t x565 = -1656;
static volatile uint32_t x566 = UINT32_MAX;
static volatile int64_t x577 = 1LL;
uint8_t x584 = 49U;
uint32_t t124 = 7U;
uint32_t x589 = UINT32_MAX;
int32_t x590 = INT32_MAX;
volatile uint64_t t125 = 260926694LLU;
int8_t x596 = INT8_MIN;
int64_t x598 = -1LL;
uint16_t x604 = 47U;
int64_t x616 = INT64_MIN;
static uint16_t x621 = 7U;
static volatile int64_t x623 = -1LL;
static int8_t x625 = INT8_MIN;
int64_t x627 = INT64_MIN;
int32_t x628 = 413244550;
int16_t x634 = -1;
int32_t x639 = INT32_MIN;
static int8_t x640 = INT8_MIN;
int8_t x647 = INT8_MIN;
int8_t x649 = -12;
uint8_t x650 = 97U;
int16_t x651 = -1;
static int32_t x657 = 2286;
volatile int8_t x664 = INT8_MIN;
int16_t x670 = -1;
int32_t t142 = 32063;
uint8_t x674 = UINT8_MAX;
int8_t x677 = INT8_MAX;
int32_t t144 = 1;
volatile uint32_t x684 = UINT32_MAX;
static uint8_t x685 = 95U;
uint32_t x690 = 107559079U;
static int16_t x691 = -1;
int64_t x697 = 11819744448055471LL;
int32_t x698 = INT32_MIN;
int16_t x701 = -1;
int32_t x710 = -1;
uint64_t x720 = 1883817LLU;
uint64_t t153 = 134153335LLU;
uint8_t x725 = UINT8_MAX;
uint8_t x727 = UINT8_MAX;
volatile int64_t t156 = 724461489409LL;
int64_t x734 = -65116066473LL;
volatile int32_t x736 = -1;
static uint32_t t159 = 70790U;
int16_t x758 = -1;
volatile int16_t x760 = -1;
volatile int32_t t161 = 259253716;
volatile uint64_t x763 = UINT64_MAX;
volatile int8_t x770 = INT8_MIN;
int32_t x771 = -1;
int64_t t164 = 100411LL;
int32_t t167 = 225769930;
int32_t x792 = 783;
int8_t x793 = INT8_MIN;
uint8_t x804 = UINT8_MAX;
volatile int64_t x807 = -6501LL;
static volatile uint8_t x813 = UINT8_MAX;
int64_t x816 = INT64_MIN;
volatile int32_t x819 = -1;
int32_t x822 = INT32_MIN;
int32_t x824 = -818637;
static int64_t x828 = INT64_MIN;
uint64_t t176 = 17LLU;
int16_t x832 = INT16_MAX;
int64_t x835 = 631181462LL;
volatile int64_t t178 = 28686030229937055LL;
static volatile uint64_t t180 = 2LLU;
uint32_t x857 = UINT32_MAX;
int16_t x859 = -1;
int8_t x871 = INT8_MIN;
int32_t x873 = INT32_MAX;
int32_t x874 = INT32_MAX;
uint64_t x882 = UINT64_MAX;
uint8_t x887 = 1U;
uint64_t x889 = 2LLU;
int64_t x893 = 1553572222781506LL;
static int64_t x895 = -1LL;
uint16_t x899 = 1U;
volatile int32_t x902 = 7;
int64_t x907 = INT64_MAX;
int8_t x917 = INT8_MIN;
volatile int8_t x919 = 52;
volatile uint64_t t198 = 27LLU;
volatile int32_t x925 = 1673;
int16_t x927 = -10233;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	int32_t x2 = -1;
	volatile int8_t x3 = -1;
	volatile int32_t x4 = INT32_MAX;
	int32_t t0 = 49;

    t0 = ((x1-x2)^(x3%x4));

    if (t0 != -129) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = -23;
	int8_t x6 = INT8_MAX;
	volatile uint32_t x7 = 48740145U;
	static int64_t x8 = INT64_MIN;
	static int64_t t1 = -571404877335040447LL;

    t1 = ((x5-x6)^(x7%x8));

    if (t1 != -48740261LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int32_t x10 = INT32_MIN;
	volatile int8_t x11 = INT8_MAX;
	int64_t x12 = -1LL;
	int64_t t2 = 420330501301165377LL;

    t2 = ((x9-x10)^(x11%x12));

    if (t2 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	int16_t x14 = 1312;
	static int16_t x15 = -310;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 23930;

    t3 = ((x13-x14)^(x15%x16));

    if (t3 != 34090) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = 2LL;
	uint64_t x19 = UINT64_MAX;
	static volatile uint64_t t4 = 1006950486168374LLU;

    t4 = ((x17-x18)^(x19%x20));

    if (t4 != 18446744073709518977LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x25 = -337790812754603869LL;
	uint8_t x26 = UINT8_MAX;
	volatile int8_t x28 = 19;
	int64_t t5 = 6934735660298667LL;

    t5 = ((x25-x26)^(x27%x28));

    if (t5 != -337790812754604107LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x29 = 6U;
	int16_t x30 = -1;
	static volatile int32_t x31 = -820694;
	int16_t x32 = INT16_MIN;
	volatile int32_t t6 = 10;

    t6 = ((x29-x30)^(x31%x32));

    if (t6 != -1491) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x33 = 28996238358LLU;
	int32_t x34 = -89305;
	volatile int64_t x35 = INT64_MIN;
	int64_t x36 = INT64_MIN;
	uint64_t t7 = 33370863089028LLU;

    t7 = ((x33-x34)^(x35%x36));

    if (t7 != 28996327663LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x43 = 264362;
	int32_t x44 = INT32_MIN;

    t8 = ((x41-x42)^(x43%x44));

    if (t8 != -3638389LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x49 = INT8_MIN;
	int32_t x50 = INT32_MIN;
	int64_t x51 = -106LL;
	volatile int64_t t9 = -53942LL;

    t9 = ((x49-x50)^(x51%x52));

    if (t9 != -2147483526LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x53 = -1LL;
	int16_t x54 = -281;
	static volatile int16_t x55 = -1;
	volatile int64_t t10 = 546870186552704991LL;

    t10 = ((x53-x54)^(x55%x56));

    if (t10 != -281LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = -1;
	static int32_t x58 = -1;
	int32_t x59 = INT32_MAX;
	static volatile uint32_t x60 = UINT32_MAX;
	static volatile uint32_t t11 = 211955512U;

    t11 = ((x57-x58)^(x59%x60));

    if (t11 != 2147483647U) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x62 = INT16_MIN;
	uint32_t x63 = UINT32_MAX;
	uint8_t x64 = 32U;
	static volatile uint32_t t12 = 15U;

    t12 = ((x61-x62)^(x63%x64));

    if (t12 != 32992U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x69 = -1LL;
	int8_t x70 = INT8_MIN;
	static int64_t x71 = 2601472297675LL;
	uint16_t x72 = UINT16_MAX;

    t13 = ((x69-x70)^(x71%x72));

    if (t13 != 49282LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x73 = INT16_MAX;
	static int16_t x74 = 9;
	uint8_t x75 = 54U;
	int64_t x76 = 2569795220429560484LL;
	static volatile int64_t t14 = -340983005344381065LL;

    t14 = ((x73-x74)^(x75%x76));

    if (t14 != 32704LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x77 = INT16_MIN;
	static volatile uint32_t x79 = 3504079U;
	int16_t x80 = INT16_MIN;

    t15 = ((x77-x78)^(x79%x80));

    if (t15 != 4291487698U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x82 = 13U;
	uint16_t x83 = 2U;
	int32_t t16 = -821678;

    t16 = ((x81-x82)^(x83%x84));

    if (t16 != 42) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x86 = 11U;
	uint64_t x87 = 307625LLU;
	int8_t x88 = INT8_MIN;

    t17 = ((x85-x86)^(x87%x88));

    if (t17 != 18446744073709243996LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x89 = 631U;
	static int8_t x90 = INT8_MIN;
	int16_t x91 = 2;
	int16_t x92 = INT16_MIN;

    t18 = ((x89-x90)^(x91%x92));

    if (t18 != 757U) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x93 = INT8_MIN;
	int32_t x94 = 330142585;
	uint16_t x96 = 1776U;
	int32_t t19 = -1025163;

    t19 = ((x93-x94)^(x95%x96));

    if (t19 != 330142712) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x97 = 19U;
	int64_t x98 = -1LL;
	uint8_t x99 = UINT8_MAX;
	int64_t x100 = -12973154339974432LL;
	int64_t t20 = 169607672712592517LL;

    t20 = ((x97-x98)^(x99%x100));

    if (t20 != 235LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint64_t x102 = 3LLU;
	int64_t x103 = INT64_MIN;
	static int64_t x104 = -1LL;
	volatile uint64_t t21 = 14816072LLU;

    t21 = ((x101-x102)^(x103%x104));

    if (t21 != 32764LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x105 = -12;
	int64_t x106 = INT64_MIN;
	static volatile int8_t x107 = INT8_MIN;
	static int32_t x108 = 52570;

    t22 = ((x105-x106)^(x107%x108));

    if (t22 != -9223372036854775692LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x109 = INT32_MIN;
	int8_t x111 = INT8_MIN;
	volatile int32_t x112 = -1;
	int32_t t23 = 10;

    t23 = ((x109-x110)^(x111%x112));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x113 = UINT32_MAX;
	int32_t x114 = 411861;
	uint32_t x115 = 930U;
	int32_t x116 = INT32_MIN;
	volatile uint32_t t24 = 1907239267U;

    t24 = ((x113-x114)^(x115%x116));

    if (t24 != 4294554760U) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x119 = 155;
	volatile uint32_t t25 = 1197246U;

    t25 = ((x117-x118)^(x119%x120));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x121 = INT32_MIN;
	int16_t x122 = INT16_MIN;
	volatile int64_t x123 = INT64_MIN;
	static volatile int64_t t26 = -310017964006466391LL;

    t26 = ((x121-x122)^(x123%x124));

    if (t26 != -2147450880LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x129 = -1761710;
	static int16_t x130 = INT16_MIN;
	static uint16_t x131 = UINT16_MAX;
	int32_t x132 = INT32_MIN;
	static int32_t t27 = -305636284;

    t27 = ((x129-x130)^(x131%x132));

    if (t27 != -1744467) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x133 = 4503017687881560LL;
	uint64_t x134 = 68066336835504890LLU;
	int64_t x135 = INT64_MAX;
	uint16_t x136 = 911U;
	uint64_t t28 = 9779990884425788LLU;

    t28 = ((x133-x134)^(x135%x136));

    if (t28 != 18383180754561928730LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x137 = -1;
	static volatile int64_t x138 = -1LL;
	int64_t x139 = INT64_MIN;
	static int64_t x140 = 117LL;

    t29 = ((x137-x138)^(x139%x140));

    if (t29 != -8LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x141 = 1;
	int16_t x144 = -8288;
	uint64_t t30 = 14299817LLU;

    t30 = ((x141-x142)^(x143%x144));

    if (t30 != 18446744073695626107LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x145 = UINT16_MAX;
	static int8_t x146 = INT8_MIN;
	uint64_t x147 = 3927181524746LLU;
	int32_t x148 = INT32_MIN;
	uint64_t t31 = 32091LLU;

    t31 = ((x145-x146)^(x147%x148));

    if (t31 != 3927181590389LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x150 = INT8_MIN;
	int8_t x151 = INT8_MIN;
	volatile int64_t t32 = -32097857365463556LL;

    t32 = ((x149-x150)^(x151%x152));

    if (t32 != -32769LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x153 = INT64_MAX;
	volatile int8_t x155 = 3;

    t33 = ((x153-x154)^(x155%x156));

    if (t33 != 9223372036854775683LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x157 = -1;
	int16_t x159 = 2;
	static uint64_t x160 = 10797LLU;
	uint64_t t34 = 17135697331LLU;

    t34 = ((x157-x158)^(x159%x160));

    if (t34 != 4294722531LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x167 = INT64_MAX;
	int16_t x168 = -214;
	static volatile int64_t t35 = -1194244869316057871LL;

    t35 = ((x165-x166)^(x167%x168));

    if (t35 != -211LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x169 = 11LLU;
	volatile int32_t x171 = 108126307;
	volatile uint64_t t36 = 6662219106LLU;

    t36 = ((x169-x170)^(x171%x172));

    if (t36 != 9223372036854803789LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x173 = 1U;
	int8_t x174 = 1;
	volatile int64_t x175 = -33556509870492590LL;
	static uint8_t x176 = UINT8_MAX;
	volatile int64_t t37 = 386391182LL;

    t37 = ((x173-x174)^(x175%x176));

    if (t37 != -230LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x177 = UINT16_MAX;
	uint16_t x178 = 224U;
	uint8_t x179 = 3U;
	static volatile uint16_t x180 = UINT16_MAX;

    t38 = ((x177-x178)^(x179%x180));

    if (t38 != 65308) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x181 = UINT64_MAX;
	int16_t x182 = INT16_MIN;
	int64_t x183 = INT64_MIN;
	volatile int8_t x184 = 25;

    t39 = ((x181-x182)^(x183%x184));

    if (t39 != 18446744073709518855LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x189 = INT16_MIN;
	static uint16_t x190 = UINT16_MAX;
	static int8_t x191 = INT8_MAX;
	int32_t t40 = 9062202;

    t40 = ((x189-x190)^(x191%x192));

    if (t40 != -98178) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x193 = UINT32_MAX;
	volatile int64_t x194 = -1456204045616450LL;
	static int32_t x196 = 1;
	int64_t t41 = 12155LL;

    t41 = ((x193-x194)^(x195%x196));

    if (t41 != 1456208340583745LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x197 = INT16_MIN;
	int8_t x198 = -1;
	int64_t x199 = INT64_MAX;
	int32_t x200 = INT32_MAX;
	int64_t t42 = 1978888424959385LL;

    t42 = ((x197-x198)^(x199%x200));

    if (t42 != -32768LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x205 = -1;
	uint8_t x206 = UINT8_MAX;
	uint16_t x207 = 232U;

    t43 = ((x205-x206)^(x207%x208));

    if (t43 != -24) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x218 = -67989;
	int64_t x219 = 29LL;
	int64_t x220 = INT64_MIN;

    t44 = ((x217-x218)^(x219%x220));

    if (t44 != 80904LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x222 = 58855715532592LLU;
	int64_t x223 = -21043LL;
	volatile uint64_t t45 = 14719242LLU;

    t45 = ((x221-x222)^(x223%x224));

    if (t45 != 58855715519618LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x225 = 10305U;
	uint64_t x226 = 16006762183476LLU;
	uint32_t x227 = 1521561U;
	int16_t x228 = INT16_MIN;
	uint64_t t46 = 18451122LLU;

    t46 = ((x225-x226)^(x227%x228));

    if (t46 != 18446728066948881044LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x229 = INT32_MIN;
	uint64_t x230 = 31LLU;
	int64_t x231 = INT64_MIN;
	static int8_t x232 = -2;
	volatile uint64_t t47 = 451LLU;

    t47 = ((x229-x230)^(x231%x232));

    if (t47 != 18446744071562067937LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x233 = INT16_MIN;
	int8_t x235 = -1;
	volatile int32_t x236 = INT32_MIN;

    t48 = ((x233-x234)^(x235%x236));

    if (t48 != 32768) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x237 = INT16_MAX;
	int16_t x238 = -1;
	int8_t x239 = 0;
	int8_t x240 = INT8_MAX;
	volatile int32_t t49 = 369787;

    t49 = ((x237-x238)^(x239%x240));

    if (t49 != 32768) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x241 = -1;
	int64_t x242 = INT64_MIN;
	int64_t x243 = 588583886912741826LL;
	int64_t t50 = INT64_MAX;

    t50 = ((x241-x242)^(x243%x244));

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x245 = INT8_MIN;
	uint16_t x246 = 20194U;
	uint64_t x247 = UINT64_MAX;

    t51 = ((x245-x246)^(x247%x248));

    if (t51 != 18446744073709531281LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x249 = -1460654LL;
	static int16_t x250 = -1;
	volatile int16_t x251 = -1;
	uint8_t x252 = 44U;
	int64_t t52 = -60479671065646LL;

    t52 = ((x249-x250)^(x251%x252));

    if (t52 != 1460652LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x253 = 81U;
	int16_t x254 = INT16_MIN;
	int16_t x255 = 5;
	int32_t x256 = 636142;
	volatile int32_t t53 = 71363;

    t53 = ((x253-x254)^(x255%x256));

    if (t53 != 32852) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x266 = 0;
	uint16_t x267 = 99U;
	int32_t x268 = INT32_MIN;
	volatile int32_t t54 = 13569;

    t54 = ((x265-x266)^(x267%x268));

    if (t54 != 2544) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x270 = UINT64_MAX;
	static int32_t x271 = INT32_MAX;
	volatile uint64_t t55 = 151010121LLU;

    t55 = ((x269-x270)^(x271%x272));

    if (t55 != 18446744071562068094LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x273 = INT8_MIN;
	int64_t x274 = 3748334017LL;
	int64_t x275 = 3917LL;

    t56 = ((x273-x274)^(x275%x276));

    if (t56 != -3748332814LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x277 = 20;
	int8_t x278 = INT8_MAX;
	int8_t x279 = INT8_MIN;
	static int64_t x280 = 1463184019856907700LL;
	volatile int64_t t57 = 564823LL;

    t57 = ((x277-x278)^(x279%x280));

    if (t57 != 21LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x281 = -498;
	int32_t x282 = INT32_MIN;
	volatile uint64_t x283 = 16919190553372199LLU;
	uint64_t x284 = UINT64_MAX;

    t58 = ((x281-x282)^(x283%x284));

    if (t58 != 16919192471984169LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x285 = -1LL;
	uint8_t x286 = 10U;
	volatile uint64_t x287 = UINT64_MAX;
	volatile int16_t x288 = INT16_MIN;
	volatile uint64_t t59 = 1LLU;

    t59 = ((x285-x286)^(x287%x288));

    if (t59 != 18446744073709518858LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x289 = INT8_MAX;
	static int32_t x290 = INT32_MAX;
	static uint64_t x291 = UINT64_MAX;
	static uint64_t x292 = 730172342174LLU;
	volatile uint64_t t60 = 381317LLU;

    t60 = ((x289-x290)^(x291%x292));

    if (t60 != 18446744014522229111LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x293 = -1LL;
	int8_t x294 = INT8_MIN;
	int16_t x295 = -393;
	int16_t x296 = INT16_MIN;
	int64_t t61 = -3274457LL;

    t61 = ((x293-x294)^(x295%x296));

    if (t61 != -504LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x297 = UINT64_MAX;
	uint16_t x298 = UINT16_MAX;
	int64_t x299 = INT64_MIN;
	int32_t x300 = INT32_MIN;
	uint64_t t62 = 200574692LLU;

    t62 = ((x297-x298)^(x299%x300));

    if (t62 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x301 = INT16_MAX;
	int8_t x302 = 0;
	volatile int32_t x303 = INT32_MIN;
	int64_t x304 = INT64_MAX;

    t63 = ((x301-x302)^(x303%x304));

    if (t63 != -2147450881LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x305 = 5U;
	static int32_t x306 = 26228;
	int64_t x307 = -1LL;
	int64_t t64 = -74021131871873LL;

    t64 = ((x305-x306)^(x307%x308));

    if (t64 != 26222LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x310 = 41U;
	int64_t x312 = -1LL;
	volatile int64_t t65 = 206130514LL;

    t65 = ((x309-x310)^(x311%x312));

    if (t65 != 4294967255LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x314 = -1;
	volatile int64_t x316 = 1015LL;

    t66 = ((x313-x314)^(x315%x316));

    if (t66 != -65979LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int64_t x317 = -4272858796614LL;
	int16_t x320 = INT16_MIN;
	int64_t t67 = 7LL;

    t67 = ((x317-x318)^(x319%x320));

    if (t67 != -9223367763995979200LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x321 = 62U;
	int8_t x323 = INT8_MIN;
	int8_t x324 = 14;
	int32_t t68 = -128;

    t68 = ((x321-x322)^(x323%x324));

    if (t68 != 65) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int8_t x325 = 3;
	uint64_t x326 = 3269LLU;
	int32_t x328 = INT32_MIN;
	static uint64_t t69 = 40LLU;

    t69 = ((x325-x326)^(x327%x328));

    if (t69 != 3262LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x329 = INT64_MIN;
	int64_t x330 = INT64_MIN;
	int16_t x331 = 1148;
	int16_t x332 = INT16_MAX;

    t70 = ((x329-x330)^(x331%x332));

    if (t70 != 1148LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x333 = UINT32_MAX;
	int8_t x334 = INT8_MIN;
	int16_t x335 = INT16_MIN;
	static int32_t x336 = INT32_MIN;
	volatile uint32_t t71 = 44U;

    t71 = ((x333-x334)^(x335%x336));

    if (t71 != 4294934655U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x337 = 27072758518761LLU;
	static int64_t x339 = -1LL;
	static int64_t x340 = INT64_MIN;

    t72 = ((x337-x338)^(x339%x340));

    if (t72 != 18446717003098516501LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x341 = INT16_MAX;
	int64_t x344 = INT64_MIN;
	uint64_t t73 = 40615261713045LLU;

    t73 = ((x341-x342)^(x343%x344));

    if (t73 != 9223372036854743062LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x345 = 7;
	volatile int16_t x346 = INT16_MIN;
	static volatile uint16_t x347 = 0U;
	volatile uint8_t x348 = UINT8_MAX;
	volatile int32_t t74 = 61;

    t74 = ((x345-x346)^(x347%x348));

    if (t74 != 32775) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x349 = 8615U;
	int64_t x350 = 212093211LL;
	uint64_t x351 = 72652480LLU;
	int64_t x352 = INT64_MIN;
	uint64_t t75 = 224LLU;

    t75 = ((x349-x350)^(x351%x352));

    if (t75 != 18446744073559559756LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x353 = 12;
	volatile int32_t x354 = -512227;
	uint8_t x355 = 1U;
	int32_t t76 = 161;

    t76 = ((x353-x354)^(x355%x356));

    if (t76 != 512238) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x357 = INT8_MIN;
	uint8_t x359 = 1U;
	uint32_t x360 = 3399U;

    t77 = ((x357-x358)^(x359%x360));

    if (t77 != 4294967051U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x361 = -1;
	static uint32_t x362 = 215U;
	int8_t x363 = -5;
	volatile uint32_t t78 = 387U;

    t78 = ((x361-x362)^(x363%x364));

    if (t78 != 4294967080U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x365 = UINT16_MAX;
	static uint32_t x366 = 1485874U;
	int32_t x367 = INT32_MIN;
	uint32_t x368 = 13U;
	volatile uint32_t t79 = 5U;

    t79 = ((x365-x366)^(x367%x368));

    if (t79 != 4293546950U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x370 = 0U;
	static int16_t x372 = 146;
	volatile uint64_t t80 = 32290006984LLU;

    t80 = ((x369-x370)^(x371%x372));

    if (t80 != 9223372036854775716LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x373 = UINT32_MAX;
	int32_t x375 = 647179127;
	uint64_t x376 = 38559504LLU;

    t81 = ((x373-x374)^(x375%x376));

    if (t81 != 4264737399LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x381 = INT64_MIN;
	int32_t x383 = -50;
	int32_t x384 = INT32_MAX;
	volatile int64_t t82 = -585351007780462550LL;

    t82 = ((x381-x382)^(x383%x384));

    if (t82 != 9223372036854742990LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x385 = 605366127047LL;
	uint16_t x386 = 166U;
	uint8_t x387 = UINT8_MAX;
	volatile int8_t x388 = INT8_MAX;
	volatile int64_t t83 = 784LL;

    t83 = ((x385-x386)^(x387%x388));

    if (t83 != 605366126880LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x389 = UINT32_MAX;
	int8_t x390 = INT8_MAX;
	int16_t x391 = -11818;
	volatile int64_t t84 = 6002161541LL;

    t84 = ((x389-x390)^(x391%x392));

    if (t84 != -4294955434LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x397 = -1;
	int16_t x398 = 69;
	uint8_t x399 = 9U;
	volatile int16_t x400 = -1;
	static volatile int32_t t85 = -15740295;

    t85 = ((x397-x398)^(x399%x400));

    if (t85 != -70) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x405 = 79567619U;
	int8_t x406 = INT8_MAX;
	volatile int16_t x408 = -470;
	uint64_t t86 = 7033099736LLU;

    t86 = ((x405-x406)^(x407%x408));

    if (t86 != 142519225LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x410 = INT16_MIN;
	int32_t x411 = 1;
	int32_t t87 = -122458;

    t87 = ((x409-x410)^(x411%x412));

    if (t87 != 32783) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x414 = UINT16_MAX;
	int16_t x415 = -1;

    t88 = ((x413-x414)^(x415%x416));

    if (t88 != 65662) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x417 = UINT32_MAX;
	int8_t x418 = INT8_MIN;
	static volatile int32_t x419 = INT32_MAX;
	int8_t x420 = INT8_MIN;

    t89 = ((x417-x418)^(x419%x420));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x421 = INT16_MIN;
	int8_t x422 = INT8_MIN;
	static int64_t x424 = INT64_MAX;
	int64_t t90 = 207759560960299LL;

    t90 = ((x421-x422)^(x423%x424));

    if (t90 != 2147451008LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x425 = INT8_MIN;
	volatile int8_t x426 = 38;
	static int32_t x428 = INT32_MAX;
	int32_t t91 = -4342;

    t91 = ((x425-x426)^(x427%x428));

    if (t91 != 165) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x433 = -1;
	static int8_t x434 = INT8_MIN;
	int32_t x435 = 5;
	int16_t x436 = -8105;
	volatile int32_t t92 = -1005463421;

    t92 = ((x433-x434)^(x435%x436));

    if (t92 != 122) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint16_t x437 = 486U;
	static volatile int8_t x438 = 30;
	int16_t x439 = INT16_MIN;
	static int64_t x440 = INT64_MIN;
	volatile int64_t t93 = -4079040LL;

    t93 = ((x437-x438)^(x439%x440));

    if (t93 != -32312LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x442 = INT16_MAX;
	static volatile int32_t x443 = INT32_MAX;
	volatile uint32_t x444 = 2241061U;
	volatile uint32_t t94 = 216U;

    t94 = ((x441-x442)^(x443%x444));

    if (t94 != 4294429167U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x446 = INT32_MIN;
	uint16_t x447 = 14U;
	uint32_t x448 = UINT32_MAX;

    t95 = ((x445-x446)^(x447%x448));

    if (t95 != 621019805760LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x450 = 8U;
	int64_t x452 = 64LL;
	int64_t t96 = -90LL;

    t96 = ((x449-x450)^(x451%x452));

    if (t96 != -132LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x453 = 6764LLU;
	int32_t x454 = INT32_MAX;
	uint8_t x455 = UINT8_MAX;
	int32_t x456 = INT32_MIN;
	volatile uint64_t t97 = 1062085089LLU;

    t97 = ((x453-x454)^(x455%x456));

    if (t97 != 18446744071562074770LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x461 = -3458;
	static int16_t x463 = 1770;
	uint8_t x464 = 1U;

    t98 = ((x461-x462)^(x463%x464));

    if (t98 != -3458) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x466 = -241;
	int64_t x468 = INT64_MIN;
	int64_t t99 = -111276LL;

    t99 = ((x465-x466)^(x467%x468));

    if (t99 != 25LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x470 = -41;
	volatile int32_t x471 = INT32_MIN;
	int16_t x472 = INT16_MIN;
	volatile int32_t t100 = 262090295;

    t100 = ((x469-x470)^(x471%x472));

    if (t100 != 57) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x473 = UINT16_MAX;
	static uint8_t x474 = UINT8_MAX;
	uint16_t x476 = 4878U;
	volatile int32_t t101 = -73518;

    t101 = ((x473-x474)^(x475%x476));

    if (t101 != 65284) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint16_t x482 = 25233U;
	int64_t x484 = 1733837837300826LL;

    t102 = ((x481-x482)^(x483%x484));

    if (t102 != -1088580251706501LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x485 = UINT64_MAX;
	int16_t x486 = -6244;
	volatile int64_t x487 = -1LL;
	int8_t x488 = INT8_MIN;

    t103 = ((x485-x486)^(x487%x488));

    if (t103 != 18446744073709545372LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x489 = INT32_MAX;
	static int16_t x491 = -2;
	int32_t x492 = -1;
	volatile uint64_t t104 = 192857891373LLU;

    t104 = ((x489-x490)^(x491%x492));

    if (t104 != 18446687788441614234LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x494 = 1254546490583436653LLU;
	int16_t x495 = -1;

    t105 = ((x493-x494)^(x495%x496));

    if (t105 != 17192197583126180498LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x497 = 0LLU;
	uint8_t x498 = 4U;
	static volatile uint32_t x499 = UINT32_MAX;
	static int16_t x500 = INT16_MIN;
	volatile uint64_t t106 = 586708167LLU;

    t106 = ((x497-x498)^(x499%x500));

    if (t106 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x506 = 910728696266619LLU;
	static uint32_t x507 = 113590U;
	static int8_t x508 = INT8_MIN;
	uint64_t t107 = 73445372485LLU;

    t107 = ((x505-x506)^(x507%x508));

    if (t107 != 18445833345013336356LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x509 = 461585U;
	int32_t x510 = -541848;
	static int16_t x512 = 29;
	volatile uint32_t t108 = 15325957U;

    t108 = ((x509-x510)^(x511%x512));

    if (t108 != 1003438U) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x515 = 42U;
	int16_t x516 = -1;

    t109 = ((x513-x514)^(x515%x516));

    if (t109 != 4147087225U) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x517 = INT8_MIN;
	static uint16_t x518 = UINT16_MAX;
	int32_t t110 = -1044276;

    t110 = ((x517-x518)^(x519%x520));

    if (t110 != 65660) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x526 = 30240619U;
	volatile int32_t x527 = INT32_MIN;
	uint64_t x528 = UINT64_MAX;

    t111 = ((x525-x526)^(x527%x528));

    if (t111 != 18446744071531827349LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x529 = -28;
	static int32_t x531 = -1;
	static uint8_t x532 = 2U;
	int32_t t112 = 456239642;

    t112 = ((x529-x530)^(x531%x532));

    if (t112 != 28) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x533 = 356127408819LLU;
	int16_t x534 = -1;
	int16_t x535 = INT16_MAX;
	volatile uint64_t t113 = 111325LLU;

    t113 = ((x533-x534)^(x535%x536));

    if (t113 != 356127440203LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x537 = INT16_MIN;
	volatile uint8_t x538 = 119U;
	int32_t x540 = -9850151;
	int32_t t114 = -2031751;

    t114 = ((x537-x538)^(x539%x540));

    if (t114 != -183488) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x541 = UINT64_MAX;
	static int16_t x543 = 10598;
	uint64_t x544 = 7731851LLU;
	uint64_t t115 = 28820295898733053LLU;

    t115 = ((x541-x542)^(x543%x544));

    if (t115 != 10598LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x545 = -1LL;
	volatile int32_t x546 = 3;

    t116 = ((x545-x546)^(x547%x548));

    if (t116 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x550 = INT8_MAX;
	int64_t x551 = -1LL;
	uint8_t x552 = 3U;
	volatile int64_t t117 = -5432LL;

    t117 = ((x549-x550)^(x551%x552));

    if (t117 != -38LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint64_t x553 = UINT64_MAX;
	int8_t x554 = INT8_MAX;
	uint8_t x555 = 48U;
	volatile uint8_t x556 = UINT8_MAX;

    t118 = ((x553-x554)^(x555%x556));

    if (t118 != 18446744073709551536LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x558 = 1622647025584187879LLU;
	volatile int16_t x559 = -1;
	int32_t x560 = 5;
	volatile uint64_t t119 = 42720094025300LLU;

    t119 = ((x557-x558)^(x559%x560));

    if (t119 != 1622647025584187878LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x567 = -1051296012LL;
	int32_t x568 = -1;
	static volatile int64_t t120 = -10644555163LL;

    t120 = ((x565-x566)^(x567%x568));

    if (t120 != 4294965641LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x569 = -1LL;
	int8_t x570 = -13;
	uint64_t x571 = 13LLU;
	uint32_t x572 = 93554369U;
	uint64_t t121 = 688188743737539187LLU;

    t121 = ((x569-x570)^(x571%x572));

    if (t121 != 1LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x573 = 0;
	int64_t x574 = -12461185887501051LL;
	int64_t x575 = INT64_MIN;
	int64_t x576 = 6495LL;
	static int64_t t122 = -637865604266LL;

    t122 = ((x573-x574)^(x575%x576));

    if (t122 != -12461185887497095LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x578 = -17LL;
	volatile int16_t x579 = INT16_MIN;
	int64_t x580 = 8212041021LL;
	int64_t t123 = 26896LL;

    t123 = ((x577-x578)^(x579%x580));

    if (t123 != -32750LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x581 = -1;
	volatile uint32_t x582 = UINT32_MAX;
	uint16_t x583 = 6U;

    t124 = ((x581-x582)^(x583%x584));

    if (t124 != 6U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x591 = 4206989314788660LLU;
	static int32_t x592 = -7720;

    t125 = ((x589-x590)^(x591%x592));

    if (t125 != 4206991462272308LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x593 = INT32_MIN;
	int8_t x594 = INT8_MIN;
	int32_t x595 = INT32_MIN;
	volatile int32_t t126 = 197792;

    t126 = ((x593-x594)^(x595%x596));

    if (t126 != -2147483520) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x597 = 2038362;
	volatile uint64_t x599 = UINT64_MAX;
	int8_t x600 = 28;
	static volatile uint64_t t127 = 63799084LLU;

    t127 = ((x597-x598)^(x599%x600));

    if (t127 != 2038356LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x601 = UINT16_MAX;
	volatile int64_t x602 = INT64_MAX;
	int16_t x603 = INT16_MIN;
	static int64_t t128 = 106744460LL;

    t128 = ((x601-x602)^(x603%x604));

    if (t128 != 9223372036854710263LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x609 = -1LL;
	static volatile uint64_t x610 = 95638217427244096LLU;
	volatile int8_t x611 = 1;
	volatile int16_t x612 = INT16_MIN;
	uint64_t t129 = 8969517513LLU;

    t129 = ((x609-x610)^(x611%x612));

    if (t129 != 18351105856282307518LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x613 = -1;
	uint32_t x614 = 1934970866U;
	int32_t x615 = INT32_MIN;
	static int64_t t130 = 1001275785492811491LL;

    t130 = ((x613-x614)^(x615%x616));

    if (t130 != -4082454515LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x617 = UINT64_MAX;
	uint32_t x618 = 16267719U;
	static int32_t x619 = INT32_MIN;
	int32_t x620 = INT32_MIN;
	uint64_t t131 = 19979931462LLU;

    t131 = ((x617-x618)^(x619%x620));

    if (t131 != 18446744073693283896LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x622 = UINT32_MAX;
	volatile uint64_t x624 = 114139061524503500LLU;
	uint64_t t132 = 554840824LLU;

    t132 = ((x621-x622)^(x623%x624));

    if (t132 != 70355168264488123LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x626 = INT8_MIN;
	static volatile int64_t t133 = -3LL;

    t133 = ((x625-x626)^(x627%x628));

    if (t133 != -227737908LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x629 = -28623LL;
	static uint8_t x630 = UINT8_MAX;
	int16_t x631 = 243;
	volatile uint32_t x632 = 1458U;
	volatile int64_t t134 = 1562477741038LL;

    t134 = ((x629-x630)^(x631%x632));

    if (t134 != -28735LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x633 = UINT16_MAX;
	uint8_t x635 = 47U;
	static uint8_t x636 = 21U;
	int32_t t135 = -11312;

    t135 = ((x633-x634)^(x635%x636));

    if (t135 != 65541) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x637 = -9;
	static int16_t x638 = -1;
	volatile int32_t t136 = -109;

    t136 = ((x637-x638)^(x639%x640));

    if (t136 != -8) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x641 = 757301428LLU;
	int64_t x642 = -15484996990761LL;
	int16_t x643 = INT16_MAX;
	int8_t x644 = INT8_MIN;
	volatile uint64_t t137 = 1LLU;

    t137 = ((x641-x642)^(x643%x644));

    if (t137 != 15485754292130LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x645 = 1U;
	uint32_t x646 = UINT32_MAX;
	uint8_t x648 = UINT8_MAX;
	volatile uint32_t t138 = 12419U;

    t138 = ((x645-x646)^(x647%x648));

    if (t138 != 4294967170U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x652 = 354328049LLU;
	uint64_t t139 = 97505559792LLU;

    t139 = ((x649-x650)^(x651%x652));

    if (t139 != 18446744073373457755LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x658 = INT64_MAX;
	int32_t x659 = -551401;
	static uint16_t x660 = UINT16_MAX;
	int64_t t140 = -66660548LL;

    t140 = ((x657-x658)^(x659%x660));

    if (t140 != 9223372036854750944LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x661 = 1971;
	int32_t x662 = 62204722;
	int32_t x663 = 35738107;
	int32_t t141 = 5;

    t141 = ((x661-x662)^(x663%x664));

    if (t141 != -62202630) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x669 = 2;
	int32_t x671 = INT32_MIN;
	volatile int16_t x672 = -1;

    t142 = ((x669-x670)^(x671%x672));

    if (t142 != 3) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x673 = -1LL;
	int8_t x675 = -6;
	uint64_t x676 = UINT64_MAX;
	static uint64_t t143 = 73875816480234757LLU;

    t143 = ((x673-x674)^(x675%x676));

    if (t143 != 250LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x678 = 645U;
	uint16_t x679 = 5U;
	int16_t x680 = INT16_MIN;

    t144 = ((x677-x678)^(x679%x680));

    if (t144 != -513) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x681 = 114;
	volatile int64_t x682 = INT64_MAX;
	uint16_t x683 = 376U;
	static volatile int64_t t145 = -44871049414673LL;

    t145 = ((x681-x682)^(x683%x684));

    if (t145 != -9223372036854775541LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x686 = INT16_MIN;
	int64_t x687 = -846123032308099LL;
	int8_t x688 = INT8_MIN;
	int64_t t146 = 224890LL;

    t146 = ((x685-x686)^(x687%x688));

    if (t146 != -32862LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x689 = -1;
	static int64_t x692 = -1LL;
	volatile int64_t t147 = -668269069702831LL;

    t147 = ((x689-x690)^(x691%x692));

    if (t147 != 4187408216LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x699 = 1098029668356583382LL;
	volatile int64_t x700 = -15LL;
	int64_t t148 = 3154102032696252072LL;

    t148 = ((x697-x698)^(x699%x700));

    if (t148 != 11819746595539117LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x702 = UINT32_MAX;
	uint8_t x703 = 7U;
	static int64_t x704 = 213LL;
	static volatile int64_t t149 = 200435699700214095LL;

    t149 = ((x701-x702)^(x703%x704));

    if (t149 != 7LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x705 = UINT16_MAX;
	int16_t x706 = 65;
	uint16_t x707 = 3032U;
	int16_t x708 = 7;
	static volatile int32_t t150 = -92967;

    t150 = ((x705-x706)^(x707%x708));

    if (t150 != 65471) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x709 = -1LL;
	uint8_t x711 = 6U;
	int8_t x712 = INT8_MIN;
	static int64_t t151 = 19086753931LL;

    t151 = ((x709-x710)^(x711%x712));

    if (t151 != 6LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x713 = -371228;
	static volatile int16_t x714 = INT16_MIN;
	int64_t x715 = INT64_MIN;
	int64_t x716 = 2099893LL;
	volatile int64_t t152 = 26907091279623LL;

    t152 = ((x713-x714)^(x715%x716));

    if (t152 != 108758LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x717 = 2713U;
	uint16_t x718 = UINT16_MAX;
	int32_t x719 = INT32_MIN;

    t153 = ((x717-x718)^(x719%x720));

    if (t153 != 4294676645LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x721 = 139U;
	int32_t x722 = 126;
	volatile uint32_t x723 = 7U;
	int16_t x724 = -1;
	static volatile uint32_t t154 = 10744U;

    t154 = ((x721-x722)^(x723%x724));

    if (t154 != 10U) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x726 = 5;
	int64_t x728 = INT64_MAX;
	volatile int64_t t155 = 233632266LL;

    t155 = ((x725-x726)^(x727%x728));

    if (t155 != 5LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x729 = -1;
	int64_t x730 = 214214421474208350LL;
	int64_t x731 = INT64_MIN;
	int16_t x732 = INT16_MIN;

    t156 = ((x729-x730)^(x731%x732));

    if (t156 != -214214421474208351LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x733 = INT8_MIN;
	int16_t x735 = -1;
	static volatile int64_t t157 = 678LL;

    t157 = ((x733-x734)^(x735%x736));

    if (t157 != 65116066345LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x741 = INT8_MIN;
	int64_t x742 = -167LL;
	int64_t x743 = -30665172469095LL;
	static int8_t x744 = INT8_MAX;
	volatile int64_t t158 = 34974389453831LL;

    t158 = ((x741-x742)^(x743%x744));

    if (t158 != -121LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x749 = 22;
	static uint8_t x750 = 26U;
	static uint32_t x751 = 119U;
	uint8_t x752 = 19U;

    t159 = ((x749-x750)^(x751%x752));

    if (t159 != 4294967289U) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x753 = INT8_MIN;
	static int32_t x754 = -189166705;
	uint16_t x755 = UINT16_MAX;
	uint64_t x756 = 716274567475LLU;
	uint64_t t160 = 4809055789LLU;

    t160 = ((x753-x754)^(x755%x756));

    if (t160 != 189172750LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x757 = 1;
	int32_t x759 = INT32_MAX;

    t161 = ((x757-x758)^(x759%x760));

    if (t161 != 2) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x761 = 3330690;
	int8_t x762 = -16;
	volatile int32_t x764 = INT32_MAX;
	static uint64_t t162 = 716999177578780857LLU;

    t162 = ((x761-x762)^(x763%x764));

    if (t162 != 3330705LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x765 = -1;
	int64_t x766 = 1738717642618681LL;
	volatile int16_t x767 = -4;
	int64_t x768 = INT64_MAX;
	int64_t t163 = 4210390747590LL;

    t163 = ((x765-x766)^(x767%x768));

    if (t163 != 1738717642618682LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x769 = 4300715280236176LL;
	uint16_t x772 = 9U;

    t164 = ((x769-x770)^(x771%x772));

    if (t164 != -4300715280236305LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x773 = -1;
	uint16_t x774 = UINT16_MAX;
	int32_t x775 = INT32_MIN;
	volatile int8_t x776 = -16;
	volatile int32_t t165 = 635187;

    t165 = ((x773-x774)^(x775%x776));

    if (t165 != -65536) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x781 = 13U;
	uint16_t x782 = 10198U;
	int16_t x783 = -1;
	uint64_t x784 = 1979462048943LLU;
	static volatile uint64_t t166 = 472246775647LLU;

    t166 = ((x781-x782)^(x783%x784));

    if (t166 != 18446743416981201563LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x785 = 671U;
	int8_t x786 = INT8_MAX;
	int32_t x787 = INT32_MAX;
	int32_t x788 = 292478836;

    t167 = ((x785-x786)^(x787%x788));

    if (t167 != 100131315) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x789 = 709111;
	volatile int32_t x790 = -1;
	static volatile int16_t x791 = -1439;
	int32_t t168 = 152445389;

    t168 = ((x789-x790)^(x791%x792));

    if (t168 != -709496) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x794 = INT16_MIN;
	uint8_t x795 = 4U;
	int32_t x796 = -5;
	static int32_t t169 = -1202;

    t169 = ((x793-x794)^(x795%x796));

    if (t169 != 32644) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x797 = -1;
	static volatile uint32_t x798 = UINT32_MAX;
	int64_t x799 = INT64_MAX;
	int16_t x800 = -1;
	int64_t t170 = 409556520LL;

    t170 = ((x797-x798)^(x799%x800));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x801 = INT64_MAX;
	int64_t x802 = 645LL;
	uint64_t x803 = 3365813874LLU;
	volatile uint64_t t171 = 2LLU;

    t171 = ((x801-x802)^(x803%x804));

    if (t171 != 9223372036854775138LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x805 = 29;
	int16_t x806 = INT16_MAX;
	int64_t x808 = 1916912195984157LL;
	int64_t t172 = 20709048967LL;

    t172 = ((x805-x806)^(x807%x808));

    if (t172 != 26245LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x814 = INT16_MIN;
	int64_t x815 = 29117LL;
	volatile int64_t t173 = -652186300594882217LL;

    t173 = ((x813-x814)^(x815%x816));

    if (t173 != 61762LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x817 = 20U;
	uint32_t x818 = 11570U;
	int64_t x820 = -16LL;
	int64_t t174 = 2905297768047047LL;

    t174 = ((x817-x818)^(x819%x820));

    if (t174 != -4294955747LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x821 = INT8_MIN;
	int8_t x823 = -1;
	int32_t t175 = -3818038;

    t175 = ((x821-x822)^(x823%x824));

    if (t175 != -2147483521) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x825 = -3;
	uint64_t x826 = 191517462114LLU;
	int32_t x827 = -1;

    t176 = ((x825-x826)^(x827%x828));

    if (t176 != 191517462116LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x829 = -1;
	int64_t x830 = -697397LL;
	int8_t x831 = 2;
	volatile int64_t t177 = 22492LL;

    t177 = ((x829-x830)^(x831%x832));

    if (t177 != 697398LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x833 = INT64_MIN;
	int16_t x834 = INT16_MIN;
	int8_t x836 = INT8_MIN;

    t178 = ((x833-x834)^(x835%x836));

    if (t178 != -9223372036854743018LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x837 = 2839088U;
	uint8_t x838 = 3U;
	int8_t x839 = 5;
	static int64_t x840 = 2LL;
	int64_t t179 = 50280901774LL;

    t179 = ((x837-x838)^(x839%x840));

    if (t179 != 2839084LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x841 = UINT64_MAX;
	uint8_t x842 = 26U;
	int8_t x843 = 10;
	int16_t x844 = 14;

    t180 = ((x841-x842)^(x843%x844));

    if (t180 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x845 = 223735354449245LLU;
	uint8_t x846 = UINT8_MAX;
	int64_t x847 = INT64_MIN;
	uint16_t x848 = UINT16_MAX;
	static uint64_t t181 = 1142601LLU;

    t181 = ((x845-x846)^(x847%x848));

    if (t181 != 18446520338355117150LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x849 = 13U;
	static int64_t x850 = -1LL;
	volatile int16_t x851 = 55;
	static volatile int8_t x852 = INT8_MIN;
	int64_t t182 = 3934145487531702069LL;

    t182 = ((x849-x850)^(x851%x852));

    if (t182 != 57LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x853 = UINT8_MAX;
	uint64_t x854 = 6LLU;
	int64_t x855 = INT64_MAX;
	int16_t x856 = -5826;
	volatile uint64_t t183 = 884998637907LLU;

    t183 = ((x853-x854)^(x855%x856));

    if (t183 != 2088LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x858 = INT8_MIN;
	static uint16_t x860 = UINT16_MAX;
	static volatile uint32_t t184 = 4873U;

    t184 = ((x857-x858)^(x859%x860));

    if (t184 != 4294967168U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x861 = 54U;
	volatile uint16_t x862 = UINT16_MAX;
	static int32_t x863 = INT32_MIN;
	volatile int32_t x864 = 7453;
	uint32_t t185 = 2U;

    t185 = ((x861-x862)^(x863%x864));

    if (t185 != 59487U) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x869 = INT8_MIN;
	uint16_t x870 = 11971U;
	int16_t x872 = -1;
	int32_t t186 = 6473;

    t186 = ((x869-x870)^(x871%x872));

    if (t186 != -12099) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x875 = 41449U;
	uint64_t x876 = UINT64_MAX;
	uint64_t t187 = 21274LLU;

    t187 = ((x873-x874)^(x875%x876));

    if (t187 != 41449LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x877 = UINT8_MAX;
	static int16_t x878 = -31;
	int64_t x879 = -1LL;
	volatile uint8_t x880 = 2U;
	static volatile int64_t t188 = -16496704483051LL;

    t188 = ((x877-x878)^(x879%x880));

    if (t188 != -287LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x881 = UINT8_MAX;
	int8_t x883 = INT8_MIN;
	uint64_t x884 = UINT64_MAX;
	static volatile uint64_t t189 = 5193212685606342LLU;

    t189 = ((x881-x882)^(x883%x884));

    if (t189 != 18446744073709551232LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x885 = 4789171U;
	volatile int32_t x886 = -1;
	volatile int16_t x888 = INT16_MAX;
	static uint32_t t190 = 69574786U;

    t190 = ((x885-x886)^(x887%x888));

    if (t190 != 4789173U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x890 = -1;
	int64_t x891 = -1LL;
	volatile int64_t x892 = -1LL;
	uint64_t t191 = 256554LLU;

    t191 = ((x889-x890)^(x891%x892));

    if (t191 != 3LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x894 = -1;
	volatile uint16_t x896 = 270U;
	int64_t t192 = -628LL;

    t192 = ((x893-x894)^(x895%x896));

    if (t192 != -1553572222781508LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x897 = 27U;
	volatile int16_t x898 = INT16_MIN;
	int32_t x900 = -1;
	volatile int32_t t193 = -116086;

    t193 = ((x897-x898)^(x899%x900));

    if (t193 != 32795) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x901 = -1LL;
	volatile uint64_t x903 = 1LLU;
	uint64_t x904 = UINT64_MAX;
	static uint64_t t194 = 5LLU;

    t194 = ((x901-x902)^(x903%x904));

    if (t194 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x905 = INT16_MIN;
	int64_t x906 = -1LL;
	int16_t x908 = INT16_MIN;
	static volatile int64_t t195 = 188LL;

    t195 = ((x905-x906)^(x907%x908));

    if (t195 != -2LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x909 = -1;
	volatile int32_t x910 = INT32_MIN;
	uint8_t x911 = 13U;
	uint32_t x912 = 6U;
	static volatile uint32_t t196 = 1915U;

    t196 = ((x909-x910)^(x911%x912));

    if (t196 != 2147483646U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x913 = 8155343LLU;
	int64_t x914 = INT64_MIN;
	int8_t x915 = -63;
	volatile int32_t x916 = INT32_MIN;
	volatile uint64_t t197 = 2157492510407268LLU;

    t197 = ((x913-x914)^(x915%x916));

    if (t197 != 9223372036846620430LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x918 = 10675716097757LLU;
	uint16_t x920 = 853U;

    t198 = ((x917-x918)^(x919%x920));

    if (t198 != 18446733397993453719LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x926 = 5484U;
	static volatile int8_t x928 = 1;
	int32_t t199 = -4037164;

    t199 = ((x925-x926)^(x927%x928));

    if (t199 != -3811) { NG(); } else { ; }
	
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


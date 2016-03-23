
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

volatile int16_t x9 = -1;
volatile uint8_t x18 = UINT8_MAX;
static uint32_t x25 = UINT32_MAX;
int16_t x26 = -1;
volatile int64_t t5 = 9LL;
volatile uint8_t x41 = 51U;
uint8_t x42 = UINT8_MAX;
int16_t x46 = INT16_MAX;
int64_t x47 = 1232005672LL;
int8_t x51 = -1;
int64_t x55 = INT64_MAX;
int16_t x66 = INT16_MAX;
static int32_t t12 = 128456759;
volatile uint64_t x70 = 1446682LLU;
int8_t x74 = INT8_MIN;
int8_t x78 = -1;
volatile int16_t x82 = -21;
volatile int32_t t16 = 432;
volatile int64_t x90 = INT64_MAX;
volatile int32_t x97 = 0;
static int8_t x102 = INT8_MIN;
uint64_t x103 = 3347762LLU;
int8_t x113 = INT8_MIN;
uint8_t x114 = 4U;
volatile int32_t t24 = -12756824;
volatile int8_t x126 = INT8_MIN;
uint8_t x141 = UINT8_MAX;
volatile uint32_t t28 = 5U;
uint16_t x147 = UINT16_MAX;
volatile int32_t t29 = -2569;
int16_t x150 = -793;
static int64_t x159 = INT64_MAX;
uint32_t x161 = 204949415U;
int8_t x166 = INT8_MIN;
uint64_t x168 = UINT64_MAX;
uint32_t x176 = 67826629U;
int8_t x178 = -15;
static volatile uint64_t x180 = 747161161792LLU;
uint8_t x189 = UINT8_MAX;
static volatile int32_t x190 = -621;
volatile uint32_t t41 = 370U;
int8_t x198 = 11;
uint64_t x208 = UINT64_MAX;
volatile int8_t x216 = INT8_MIN;
static int16_t x236 = -1;
int32_t t49 = 4315;
int8_t x251 = INT8_MIN;
uint16_t x259 = 63U;
volatile int32_t t53 = -454762337;
int8_t x266 = INT8_MIN;
volatile int16_t x268 = INT16_MIN;
volatile uint8_t x269 = 9U;
static int8_t x272 = -1;
int64_t x275 = -1LL;
int8_t x278 = INT8_MAX;
volatile uint16_t x284 = 26U;
static int16_t x288 = INT16_MIN;
int8_t x292 = -4;
static int8_t x293 = 6;
static uint16_t x294 = 3U;
uint64_t x297 = 728091521LLU;
static uint64_t t62 = 434LLU;
uint32_t x312 = UINT32_MAX;
static int32_t t64 = -8182;
volatile int16_t x321 = INT16_MAX;
volatile uint32_t x326 = 4070145U;
volatile uint32_t t68 = 170102711U;
int64_t x342 = -1LL;
volatile uint32_t x343 = UINT32_MAX;
static int32_t x345 = 27;
volatile int64_t x347 = INT64_MAX;
static uint8_t x350 = 1U;
int8_t x353 = -1;
volatile int32_t t75 = 26249593;
volatile uint64_t x357 = UINT64_MAX;
int16_t x358 = -2242;
uint64_t t76 = 22160484324754430LLU;
volatile int32_t x361 = -826280;
int64_t x368 = INT64_MIN;
int8_t x377 = INT8_MIN;
static volatile int8_t x379 = -6;
uint32_t x381 = UINT32_MAX;
int64_t x386 = INT64_MIN;
volatile int32_t t84 = 597756;
int16_t x399 = INT16_MIN;
volatile uint8_t x407 = UINT8_MAX;
int16_t x409 = 75;
volatile int64_t x413 = -1LL;
uint64_t x414 = 415343603896LLU;
int32_t x415 = 96237;
volatile uint64_t t90 = 67541957917LLU;
int16_t x417 = -1;
static uint16_t x422 = 3187U;
int16_t x427 = INT16_MIN;
int64_t x428 = -1LL;
int64_t x429 = -2LL;
uint64_t t95 = 63049LLU;
int64_t x437 = INT64_MIN;
int32_t x440 = -222;
int64_t t96 = 58887313316552LL;
uint64_t x446 = UINT64_MAX;
volatile uint32_t x448 = 10631074U;
uint64_t x456 = 43765LLU;
int64_t t99 = 14438221233565LL;
int32_t t100 = -45262291;
int16_t x462 = INT16_MIN;
uint32_t x464 = 73U;
volatile uint64_t t102 = 6167592201766420357LLU;
uint8_t x469 = 98U;
int64_t x473 = -1LL;
uint32_t x477 = 4016U;
uint64_t x480 = UINT64_MAX;
volatile int32_t x481 = INT32_MIN;
int32_t x484 = INT32_MIN;
static int8_t x487 = INT8_MIN;
static uint16_t x492 = UINT16_MAX;
volatile int64_t t108 = -534869719LL;
int64_t x504 = 2121241462314435LL;
int8_t x511 = -2;
uint16_t x512 = 256U;
volatile int32_t t113 = 0;
int16_t x518 = -259;
volatile int64_t x519 = INT64_MIN;
int8_t x533 = -1;
int8_t x534 = -6;
static volatile int64_t x537 = -28841LL;
int8_t x543 = INT8_MIN;
volatile int8_t x546 = INT8_MIN;
volatile int16_t x549 = INT16_MAX;
static int16_t x556 = INT16_MIN;
int64_t t122 = -12LL;
static volatile int64_t x557 = -413518LL;
int8_t x558 = 6;
uint64_t x559 = 381052808796LLU;
int8_t x560 = 15;
static int8_t x581 = INT8_MIN;
int64_t x583 = -1LL;
int64_t x588 = INT64_MIN;
int64_t t130 = 11916280LL;
int16_t x604 = 0;
int32_t x606 = -1;
static int32_t t134 = 286104858;
static int64_t x614 = -57920748778LL;
static int64_t t135 = -31235249130LL;
uint32_t x620 = 17U;
static uint16_t x626 = 4315U;
int32_t x628 = INT32_MAX;
static uint16_t x633 = 207U;
int16_t x640 = INT16_MIN;
uint16_t x642 = UINT16_MAX;
static uint64_t x643 = 11LLU;
int16_t x647 = -1;
uint8_t x649 = UINT8_MAX;
int8_t x652 = 62;
int64_t t145 = 3825LL;
volatile uint32_t x667 = 230U;
volatile uint8_t x672 = 0U;
int32_t x674 = -1;
int16_t x676 = INT16_MAX;
static uint16_t x677 = UINT16_MAX;
uint8_t x679 = UINT8_MAX;
int32_t t150 = -127087;
int64_t x683 = INT64_MAX;
int32_t x684 = INT32_MIN;
volatile int32_t x686 = 96;
static int64_t x687 = INT64_MAX;
volatile uint32_t x688 = 413U;
uint64_t t152 = 214184564608LLU;
int64_t x691 = INT64_MIN;
int32_t x692 = -15962;
uint32_t t154 = 39748978U;
volatile int64_t x704 = -253LL;
int8_t x705 = -1;
int32_t t156 = -1533037;
volatile uint32_t x714 = UINT32_MAX;
uint16_t x715 = UINT16_MAX;
volatile uint32_t t159 = 341U;
int16_t x726 = INT16_MIN;
uint16_t x729 = 28U;
int8_t x733 = 9;
static volatile int32_t t163 = 233167262;
int16_t x737 = -1;
int32_t x739 = -28;
int32_t t165 = -7281;
static int8_t x748 = INT8_MIN;
volatile int16_t x756 = -1;
uint8_t x773 = 9U;
int16_t x777 = INT16_MIN;
int32_t t173 = -1;
volatile int32_t x794 = INT32_MIN;
volatile int32_t t176 = -155461067;
int32_t x798 = -1;
static uint16_t x799 = 6U;
int64_t x800 = INT64_MAX;
uint16_t x801 = 107U;
int16_t x815 = INT16_MAX;
static uint32_t x816 = 83935U;
uint64_t x824 = 44879705231LLU;
static volatile int64_t t182 = 229020788LL;
uint16_t x826 = UINT16_MAX;
static int16_t x834 = -12214;
volatile int64_t x836 = INT64_MIN;
int32_t t185 = -37613;
static int32_t t188 = 5874;
static volatile int8_t x850 = INT8_MIN;
uint32_t x883 = 116U;
static volatile int32_t x884 = -1;
int8_t x887 = -1;
int64_t x894 = -124515LL;
uint64_t x901 = UINT64_MAX;


void f0(void) {
    	uint16_t x1 = 21U;
	volatile int64_t x2 = INT64_MIN;
	uint32_t x3 = 13U;
	int8_t x4 = -1;
	volatile int64_t t0 = 358678LL;

    t0 = ((x1+x2)|(x3!=x4));

    if (t0 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x10 = -1;
	uint32_t x11 = 118991287U;
	int8_t x12 = -1;
	int32_t t1 = -1683;

    t1 = ((x9+x10)|(x11!=x12));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x17 = INT8_MAX;
	uint32_t x19 = UINT32_MAX;
	static int32_t x20 = INT32_MIN;
	int32_t t2 = 1;

    t2 = ((x17+x18)|(x19!=x20));

    if (t2 != 383) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x27 = UINT8_MAX;
	int64_t x28 = INT64_MIN;
	uint32_t t3 = UINT32_MAX;

    t3 = ((x25+x26)|(x27!=x28));

    if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x33 = -1;
	uint32_t x34 = UINT32_MAX;
	volatile int8_t x35 = INT8_MIN;
	int32_t x36 = INT32_MIN;
	static uint32_t t4 = UINT32_MAX;

    t4 = ((x33+x34)|(x35!=x36));

    if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x37 = 9990527458LL;
	int32_t x38 = INT32_MIN;
	int32_t x39 = INT32_MAX;
	int8_t x40 = INT8_MIN;

    t5 = ((x37+x38)|(x39!=x40));

    if (t5 != 7843043811LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x43 = -1;
	uint64_t x44 = UINT64_MAX;
	int32_t t6 = 336057576;

    t6 = ((x41+x42)|(x43!=x44));

    if (t6 != 306) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x45 = -54;
	static volatile int64_t x48 = INT64_MIN;
	volatile int32_t t7 = -8182333;

    t7 = ((x45+x46)|(x47!=x48));

    if (t7 != 32713) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x49 = UINT64_MAX;
	int32_t x50 = INT32_MIN;
	static uint8_t x52 = 1U;
	volatile uint64_t t8 = 761307908LLU;

    t8 = ((x49+x50)|(x51!=x52));

    if (t8 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x53 = INT16_MAX;
	int8_t x54 = INT8_MIN;
	uint16_t x56 = 11015U;
	static volatile int32_t t9 = 21;

    t9 = ((x53+x54)|(x55!=x56));

    if (t9 != 32639) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x57 = 30U;
	volatile int16_t x58 = INT16_MIN;
	int64_t x59 = 4642104488468036LL;
	int64_t x60 = INT64_MAX;
	volatile int32_t t10 = 56;

    t10 = ((x57+x58)|(x59!=x60));

    if (t10 != -32737) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x61 = 0U;
	static uint32_t x62 = 676035493U;
	static int16_t x63 = INT16_MAX;
	static int16_t x64 = 173;
	uint32_t t11 = 1U;

    t11 = ((x61+x62)|(x63!=x64));

    if (t11 != 676035493U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x65 = INT8_MIN;
	uint32_t x67 = UINT32_MAX;
	static volatile int32_t x68 = INT32_MIN;

    t12 = ((x65+x66)|(x67!=x68));

    if (t12 != 32639) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x69 = INT64_MAX;
	static int8_t x71 = INT8_MIN;
	int8_t x72 = INT8_MIN;
	uint64_t t13 = 4097128LLU;

    t13 = ((x69+x70)|(x71!=x72));

    if (t13 != 9223372036856222489LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x73 = INT64_MAX;
	uint16_t x75 = 1U;
	int16_t x76 = INT16_MAX;
	volatile int64_t t14 = 887007247983742814LL;

    t14 = ((x73+x74)|(x75!=x76));

    if (t14 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x77 = UINT8_MAX;
	int64_t x79 = -147038090LL;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t15 = 2867;

    t15 = ((x77+x78)|(x79!=x80));

    if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x81 = UINT16_MAX;
	int16_t x83 = 0;
	uint8_t x84 = 41U;

    t16 = ((x81+x82)|(x83!=x84));

    if (t16 != 65515) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x85 = -1;
	int8_t x86 = INT8_MIN;
	uint16_t x87 = UINT16_MAX;
	int32_t x88 = INT32_MIN;
	int32_t t17 = -90541;

    t17 = ((x85+x86)|(x87!=x88));

    if (t17 != -129) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x89 = -1;
	uint16_t x91 = 15U;
	uint64_t x92 = 897327638894LLU;
	volatile int64_t t18 = INT64_MAX;

    t18 = ((x89+x90)|(x91!=x92));

    if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x98 = 170826270099525LLU;
	int16_t x99 = INT16_MIN;
	volatile int8_t x100 = -1;
	volatile uint64_t t19 = 244353LLU;

    t19 = ((x97+x98)|(x99!=x100));

    if (t19 != 170826270099525LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x101 = -24644376002LL;
	volatile int8_t x104 = 32;
	volatile int64_t t20 = -21169830108710437LL;

    t20 = ((x101+x102)|(x103!=x104));

    if (t20 != -24644376129LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x105 = -1;
	uint32_t x106 = 1982U;
	int8_t x107 = INT8_MAX;
	static int8_t x108 = 37;
	volatile uint32_t t21 = 30849U;

    t21 = ((x105+x106)|(x107!=x108));

    if (t21 != 1981U) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x109 = INT8_MAX;
	static int8_t x110 = INT8_MIN;
	uint16_t x111 = UINT16_MAX;
	static int64_t x112 = -1LL;
	volatile int32_t t22 = -14361465;

    t22 = ((x109+x110)|(x111!=x112));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x115 = INT8_MIN;
	volatile int16_t x116 = INT16_MIN;
	int32_t t23 = 0;

    t23 = ((x113+x114)|(x115!=x116));

    if (t23 != -123) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x121 = 57U;
	static int32_t x122 = INT32_MIN;
	volatile int16_t x123 = -1;
	volatile uint16_t x124 = 999U;

    t24 = ((x121+x122)|(x123!=x124));

    if (t24 != -2147483591) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x125 = UINT64_MAX;
	uint64_t x127 = 3292647802LLU;
	volatile uint8_t x128 = 14U;
	volatile uint64_t t25 = 82234165LLU;

    t25 = ((x125+x126)|(x127!=x128));

    if (t25 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x129 = 48;
	int32_t x130 = INT32_MIN;
	static int8_t x131 = INT8_MIN;
	int32_t x132 = INT32_MAX;
	volatile int32_t t26 = -1489506;

    t26 = ((x129+x130)|(x131!=x132));

    if (t26 != -2147483599) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x137 = 2U;
	int16_t x138 = -53;
	int32_t x139 = INT32_MIN;
	int32_t x140 = INT32_MIN;
	int32_t t27 = -315;

    t27 = ((x137+x138)|(x139!=x140));

    if (t27 != -51) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x142 = UINT32_MAX;
	volatile int32_t x143 = 28973;
	int64_t x144 = -1LL;

    t28 = ((x141+x142)|(x143!=x144));

    if (t28 != 255U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x145 = -2983002;
	int16_t x146 = 1;
	static int64_t x148 = INT64_MAX;

    t29 = ((x145+x146)|(x147!=x148));

    if (t29 != -2983001) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x149 = INT8_MIN;
	int8_t x151 = -8;
	volatile uint32_t x152 = UINT32_MAX;
	static int32_t t30 = 244401428;

    t30 = ((x149+x150)|(x151!=x152));

    if (t30 != -921) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x153 = INT64_MAX;
	volatile int16_t x154 = INT16_MIN;
	uint64_t x155 = 24LLU;
	int16_t x156 = -1;
	volatile int64_t t31 = -28387266120LL;

    t31 = ((x153+x154)|(x155!=x156));

    if (t31 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x157 = -1;
	int16_t x158 = INT16_MIN;
	volatile int64_t x160 = INT64_MAX;
	int32_t t32 = -1;

    t32 = ((x157+x158)|(x159!=x160));

    if (t32 != -32769) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x162 = UINT8_MAX;
	int8_t x163 = -1;
	static int32_t x164 = -40;
	uint32_t t33 = 234721U;

    t33 = ((x161+x162)|(x163!=x164));

    if (t33 != 204949671U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x165 = INT16_MAX;
	volatile int8_t x167 = -1;
	volatile int32_t t34 = 427;

    t34 = ((x165+x166)|(x167!=x168));

    if (t34 != 32639) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x169 = INT16_MIN;
	int16_t x170 = 2;
	uint16_t x171 = 20133U;
	uint32_t x172 = 3U;
	int32_t t35 = 11701680;

    t35 = ((x169+x170)|(x171!=x172));

    if (t35 != -32765) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x173 = 27;
	int8_t x174 = -56;
	volatile int8_t x175 = 62;
	static volatile int32_t t36 = -3355;

    t36 = ((x173+x174)|(x175!=x176));

    if (t36 != -29) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x177 = 692496608241792211LL;
	int32_t x179 = INT32_MAX;
	volatile int64_t t37 = -5854LL;

    t37 = ((x177+x178)|(x179!=x180));

    if (t37 != 692496608241792197LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x181 = -6522472648LL;
	int64_t x182 = INT64_MAX;
	uint64_t x183 = 1533LLU;
	static volatile uint16_t x184 = 799U;
	int64_t t38 = -7821598515LL;

    t38 = ((x181+x182)|(x183!=x184));

    if (t38 != 9223372030332303159LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x185 = 19;
	int8_t x186 = 1;
	uint32_t x187 = 177430U;
	int8_t x188 = -1;
	volatile int32_t t39 = -1589;

    t39 = ((x185+x186)|(x187!=x188));

    if (t39 != 21) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x191 = INT32_MIN;
	volatile int16_t x192 = 1;
	int32_t t40 = -4572878;

    t40 = ((x189+x190)|(x191!=x192));

    if (t40 != -365) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x193 = INT32_MIN;
	static uint32_t x194 = UINT32_MAX;
	static uint16_t x195 = 790U;
	uint32_t x196 = 215903989U;

    t41 = ((x193+x194)|(x195!=x196));

    if (t41 != 2147483647U) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x197 = -49LL;
	volatile int32_t x199 = INT32_MAX;
	int64_t x200 = -1LL;
	int64_t t42 = -1717717118922720326LL;

    t42 = ((x197+x198)|(x199!=x200));

    if (t42 != -37LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x201 = 10929950LL;
	volatile uint64_t x202 = 17425313305490052LLU;
	int16_t x203 = INT16_MIN;
	static int8_t x204 = INT8_MIN;
	volatile uint64_t t43 = 456890128061236166LLU;

    t43 = ((x201+x202)|(x203!=x204));

    if (t43 != 17425313316420003LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x205 = UINT32_MAX;
	uint64_t x206 = UINT64_MAX;
	int32_t x207 = -1;
	static uint64_t t44 = 6578076879LLU;

    t44 = ((x205+x206)|(x207!=x208));

    if (t44 != 4294967294LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x213 = INT64_MAX;
	volatile int8_t x214 = -4;
	int16_t x215 = -1;
	int64_t t45 = 9809758348LL;

    t45 = ((x213+x214)|(x215!=x216));

    if (t45 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x217 = UINT16_MAX;
	static uint16_t x218 = UINT16_MAX;
	int32_t x219 = -1;
	volatile uint64_t x220 = UINT64_MAX;
	int32_t t46 = -12524462;

    t46 = ((x217+x218)|(x219!=x220));

    if (t46 != 131070) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x225 = 28;
	static int16_t x226 = INT16_MAX;
	int32_t x227 = INT32_MAX;
	volatile int64_t x228 = -7LL;
	volatile int32_t t47 = -108541727;

    t47 = ((x225+x226)|(x227!=x228));

    if (t47 != 32795) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x229 = 22123U;
	int32_t x230 = 9;
	int16_t x231 = -1;
	uint16_t x232 = 3U;
	int32_t t48 = -49;

    t48 = ((x229+x230)|(x231!=x232));

    if (t48 != 22133) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x233 = 0;
	static int8_t x234 = -2;
	int8_t x235 = INT8_MIN;

    t49 = ((x233+x234)|(x235!=x236));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x241 = -619;
	static uint32_t x242 = 1496450U;
	int16_t x243 = 13243;
	int8_t x244 = INT8_MAX;
	uint32_t t50 = 844138U;

    t50 = ((x241+x242)|(x243!=x244));

    if (t50 != 1495831U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x249 = 767U;
	int16_t x250 = INT16_MIN;
	int32_t x252 = INT32_MIN;
	volatile int32_t t51 = 8354596;

    t51 = ((x249+x250)|(x251!=x252));

    if (t51 != -32001) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x253 = 2941U;
	int32_t x254 = INT32_MIN;
	volatile int8_t x255 = 3;
	int8_t x256 = 11;
	static uint32_t t52 = 148789873U;

    t52 = ((x253+x254)|(x255!=x256));

    if (t52 != 2147486589U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x257 = INT8_MAX;
	static uint8_t x258 = UINT8_MAX;
	static volatile int8_t x260 = INT8_MIN;

    t53 = ((x257+x258)|(x259!=x260));

    if (t53 != 383) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x265 = 1516387397U;
	uint16_t x267 = 8U;
	uint32_t t54 = 242U;

    t54 = ((x265+x266)|(x267!=x268));

    if (t54 != 1516387269U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x270 = 27U;
	int32_t x271 = 382;
	volatile int32_t t55 = -18122;

    t55 = ((x269+x270)|(x271!=x272));

    if (t55 != 37) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x273 = -1;
	int16_t x274 = 1;
	uint64_t x276 = 6867890100029002LLU;
	int32_t t56 = 4;

    t56 = ((x273+x274)|(x275!=x276));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x277 = 27U;
	int16_t x279 = -1;
	uint8_t x280 = 62U;
	int32_t t57 = -16863812;

    t57 = ((x277+x278)|(x279!=x280));

    if (t57 != 155) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x281 = INT16_MIN;
	volatile uint8_t x282 = 2U;
	int32_t x283 = -1;
	int32_t t58 = 1;

    t58 = ((x281+x282)|(x283!=x284));

    if (t58 != -32765) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x285 = 14183638212LLU;
	int16_t x286 = INT16_MIN;
	static volatile int32_t x287 = -13610540;
	volatile uint64_t t59 = 889132739839831878LLU;

    t59 = ((x285+x286)|(x287!=x288));

    if (t59 != 14183605445LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x289 = INT8_MAX;
	uint8_t x290 = 26U;
	int16_t x291 = 4873;
	volatile int32_t t60 = 467151;

    t60 = ((x289+x290)|(x291!=x292));

    if (t60 != 153) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x295 = UINT8_MAX;
	static int32_t x296 = INT32_MIN;
	static int32_t t61 = 47;

    t61 = ((x293+x294)|(x295!=x296));

    if (t61 != 9) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x298 = INT32_MIN;
	int32_t x299 = 436156;
	volatile uint32_t x300 = 11U;

    t62 = ((x297+x298)|(x299!=x300));

    if (t62 != 18446744072290159489LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x305 = 17143343537LLU;
	volatile int32_t x306 = 138973261;
	uint8_t x307 = 3U;
	volatile int16_t x308 = INT16_MIN;
	uint64_t t63 = 30747880879LLU;

    t63 = ((x305+x306)|(x307!=x308));

    if (t63 != 17282316799LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x309 = -1;
	static int16_t x310 = INT16_MIN;
	int32_t x311 = 11;

    t64 = ((x309+x310)|(x311!=x312));

    if (t64 != -32769) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x313 = INT32_MAX;
	static int64_t x314 = INT64_MIN;
	int8_t x315 = 1;
	volatile int16_t x316 = INT16_MIN;
	volatile int64_t t65 = -89709924086429LL;

    t65 = ((x313+x314)|(x315!=x316));

    if (t65 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x317 = 219642296334LLU;
	int8_t x318 = INT8_MIN;
	int32_t x319 = INT32_MIN;
	volatile uint8_t x320 = 1U;
	volatile uint64_t t66 = 487954LLU;

    t66 = ((x317+x318)|(x319!=x320));

    if (t66 != 219642296207LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x322 = -13620623LL;
	uint16_t x323 = UINT16_MAX;
	int32_t x324 = 15548;
	volatile int64_t t67 = -216102406466424LL;

    t67 = ((x321+x322)|(x323!=x324));

    if (t67 != -13587855LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x325 = INT8_MIN;
	uint8_t x327 = 11U;
	volatile int64_t x328 = INT64_MIN;

    t68 = ((x325+x326)|(x327!=x328));

    if (t68 != 4070017U) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x329 = UINT32_MAX;
	int64_t x330 = -1LL;
	uint32_t x331 = 1597107U;
	uint16_t x332 = 5257U;
	static volatile int64_t t69 = -1031232657550969LL;

    t69 = ((x329+x330)|(x331!=x332));

    if (t69 != 4294967295LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x333 = 0;
	static int8_t x334 = -8;
	int64_t x335 = 88865204042905835LL;
	int64_t x336 = -128019LL;
	volatile int32_t t70 = 0;

    t70 = ((x333+x334)|(x335!=x336));

    if (t70 != -7) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x337 = 87U;
	uint64_t x338 = 267232784323LLU;
	uint64_t x339 = 27856LLU;
	int64_t x340 = -1LL;
	uint64_t t71 = 8201968144841838794LLU;

    t71 = ((x337+x338)|(x339!=x340));

    if (t71 != 267232784411LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x341 = INT32_MIN;
	int8_t x344 = INT8_MAX;
	volatile int64_t t72 = 734306707792539378LL;

    t72 = ((x341+x342)|(x343!=x344));

    if (t72 != -2147483649LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x346 = -1;
	volatile int8_t x348 = -1;
	static int32_t t73 = 168;

    t73 = ((x345+x346)|(x347!=x348));

    if (t73 != 27) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x349 = 45U;
	int64_t x351 = INT64_MIN;
	uint64_t x352 = UINT64_MAX;
	volatile int32_t t74 = -87372396;

    t74 = ((x349+x350)|(x351!=x352));

    if (t74 != 47) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x354 = INT16_MIN;
	volatile int16_t x355 = INT16_MAX;
	volatile int32_t x356 = -918881656;

    t75 = ((x353+x354)|(x355!=x356));

    if (t75 != -32769) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x359 = UINT8_MAX;
	volatile int8_t x360 = INT8_MIN;

    t76 = ((x357+x358)|(x359!=x360));

    if (t76 != 18446744073709549373LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x362 = INT32_MAX;
	uint64_t x363 = 7LLU;
	volatile uint16_t x364 = 6210U;
	volatile int32_t t77 = -12;

    t77 = ((x361+x362)|(x363!=x364));

    if (t77 != 2146657367) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x365 = INT32_MAX;
	volatile uint64_t x366 = 5LLU;
	int8_t x367 = INT8_MAX;
	static volatile uint64_t t78 = 3486LLU;

    t78 = ((x365+x366)|(x367!=x368));

    if (t78 != 2147483653LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x369 = 1449517LL;
	int64_t x370 = INT64_MIN;
	int64_t x371 = INT64_MAX;
	volatile int16_t x372 = INT16_MIN;
	volatile int64_t t79 = -817782979809LL;

    t79 = ((x369+x370)|(x371!=x372));

    if (t79 != -9223372036853326291LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x373 = 0;
	static int64_t x374 = -6LL;
	int64_t x375 = 2LL;
	static int8_t x376 = -1;
	int64_t t80 = 9381LL;

    t80 = ((x373+x374)|(x375!=x376));

    if (t80 != -5LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x378 = UINT64_MAX;
	volatile int16_t x380 = -1;
	uint64_t t81 = 133903455097955932LLU;

    t81 = ((x377+x378)|(x379!=x380));

    if (t81 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int32_t x382 = -681;
	volatile int16_t x383 = -1;
	volatile int64_t x384 = INT64_MAX;
	uint32_t t82 = 25U;

    t82 = ((x381+x382)|(x383!=x384));

    if (t82 != 4294966615U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x385 = 2U;
	static int64_t x387 = INT64_MIN;
	volatile int32_t x388 = INT32_MAX;
	static volatile int64_t t83 = -213608966633LL;

    t83 = ((x385+x386)|(x387!=x388));

    if (t83 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x389 = INT32_MAX;
	int32_t x390 = INT32_MIN;
	volatile int8_t x391 = 0;
	uint32_t x392 = UINT32_MAX;

    t84 = ((x389+x390)|(x391!=x392));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x393 = 106U;
	uint64_t x394 = UINT64_MAX;
	int32_t x395 = INT32_MIN;
	static int32_t x396 = -1;
	static uint64_t t85 = 18LLU;

    t85 = ((x393+x394)|(x395!=x396));

    if (t85 != 105LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x397 = INT64_MIN;
	int32_t x398 = 13758;
	uint32_t x400 = UINT32_MAX;
	int64_t t86 = 5183179515LL;

    t86 = ((x397+x398)|(x399!=x400));

    if (t86 != -9223372036854762049LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x401 = -25563286544LL;
	uint64_t x402 = UINT64_MAX;
	uint8_t x403 = 105U;
	int64_t x404 = -1LL;
	uint64_t t87 = 778857335422626628LLU;

    t87 = ((x401+x402)|(x403!=x404));

    if (t87 != 18446744048146265071LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x405 = INT32_MAX;
	int32_t x406 = -911;
	int32_t x408 = INT32_MIN;
	volatile int32_t t88 = -7440214;

    t88 = ((x405+x406)|(x407!=x408));

    if (t88 != 2147482737) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x410 = 25;
	int64_t x411 = -1LL;
	int64_t x412 = INT64_MIN;
	static volatile int32_t t89 = -19;

    t89 = ((x409+x410)|(x411!=x412));

    if (t89 != 101) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x416 = INT64_MAX;

    t90 = ((x413+x414)|(x415!=x416));

    if (t90 != 415343603895LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x418 = UINT16_MAX;
	int32_t x419 = -1;
	int8_t x420 = INT8_MIN;
	volatile int32_t t91 = -680976;

    t91 = ((x417+x418)|(x419!=x420));

    if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x421 = -1;
	volatile uint64_t x423 = UINT64_MAX;
	static volatile uint64_t x424 = UINT64_MAX;
	int32_t t92 = 2753;

    t92 = ((x421+x422)|(x423!=x424));

    if (t92 != 3186) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x425 = -325007340;
	volatile int16_t x426 = -506;
	volatile int32_t t93 = -757467067;

    t93 = ((x425+x426)|(x427!=x428));

    if (t93 != -325007845) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x430 = UINT32_MAX;
	int32_t x431 = -93740;
	int16_t x432 = -30;
	volatile int64_t t94 = -173LL;

    t94 = ((x429+x430)|(x431!=x432));

    if (t94 != 4294967293LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x433 = 2U;
	uint64_t x434 = 489040860350LLU;
	static uint32_t x435 = 5175U;
	uint32_t x436 = UINT32_MAX;

    t95 = ((x433+x434)|(x435!=x436));

    if (t95 != 489040860353LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x438 = 28416U;
	static int32_t x439 = INT32_MIN;

    t96 = ((x437+x438)|(x439!=x440));

    if (t96 != -9223372036854747391LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x445 = UINT16_MAX;
	static uint64_t x447 = 37LLU;
	volatile uint64_t t97 = 2015657644172847060LLU;

    t97 = ((x445+x446)|(x447!=x448));

    if (t97 != 65535LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x449 = -48364193LL;
	volatile uint8_t x450 = 10U;
	static int8_t x451 = -1;
	volatile uint32_t x452 = 3020U;
	volatile int64_t t98 = -1481685LL;

    t98 = ((x449+x450)|(x451!=x452));

    if (t98 != -48364183LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x453 = 86U;
	static int64_t x454 = INT64_MIN;
	int16_t x455 = 1;

    t99 = ((x453+x454)|(x455!=x456));

    if (t99 != -9223372036854775721LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x457 = INT8_MIN;
	static int32_t x458 = 1001467;
	uint8_t x459 = UINT8_MAX;
	int32_t x460 = INT32_MIN;

    t100 = ((x457+x458)|(x459!=x460));

    if (t100 != 1001339) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x461 = INT8_MAX;
	static uint8_t x463 = UINT8_MAX;
	int32_t t101 = -822;

    t101 = ((x461+x462)|(x463!=x464));

    if (t101 != -32641) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x465 = 175LLU;
	uint32_t x466 = UINT32_MAX;
	int16_t x467 = -3;
	int8_t x468 = 3;

    t102 = ((x465+x466)|(x467!=x468));

    if (t102 != 4294967471LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x470 = 22925258854824LLU;
	static int32_t x471 = -1;
	uint8_t x472 = 2U;
	static uint64_t t103 = 14909LLU;

    t103 = ((x469+x470)|(x471!=x472));

    if (t103 != 22925258854923LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x474 = 10U;
	int32_t x475 = INT32_MIN;
	static int16_t x476 = -1;
	volatile int64_t t104 = -46771747920LL;

    t104 = ((x473+x474)|(x475!=x476));

    if (t104 != 9LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x478 = 209740137U;
	int16_t x479 = 1;
	uint32_t t105 = 0U;

    t105 = ((x477+x478)|(x479!=x480));

    if (t105 != 209744153U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x482 = 2;
	int8_t x483 = -1;
	int32_t t106 = -2977;

    t106 = ((x481+x482)|(x483!=x484));

    if (t106 != -2147483645) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x485 = INT16_MIN;
	int32_t x486 = -457143817;
	uint32_t x488 = 66558048U;
	volatile int32_t t107 = -11649844;

    t107 = ((x485+x486)|(x487!=x488));

    if (t107 != -457176585) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x489 = UINT16_MAX;
	int64_t x490 = INT64_MIN;
	static int16_t x491 = INT16_MAX;

    t108 = ((x489+x490)|(x491!=x492));

    if (t108 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x493 = 980U;
	uint8_t x494 = UINT8_MAX;
	int8_t x495 = INT8_MIN;
	int64_t x496 = 21530978692LL;
	volatile uint32_t t109 = 2U;

    t109 = ((x493+x494)|(x495!=x496));

    if (t109 != 1235U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x501 = -1;
	static uint16_t x502 = UINT16_MAX;
	uint8_t x503 = UINT8_MAX;
	int32_t t110 = 897095;

    t110 = ((x501+x502)|(x503!=x504));

    if (t110 != 65535) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x505 = 0U;
	uint16_t x506 = UINT16_MAX;
	int16_t x507 = 3039;
	int64_t x508 = INT64_MIN;
	static volatile int32_t t111 = -37090;

    t111 = ((x505+x506)|(x507!=x508));

    if (t111 != 65535) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x509 = INT32_MIN;
	static int32_t x510 = INT32_MAX;
	int32_t t112 = -11;

    t112 = ((x509+x510)|(x511!=x512));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x513 = 1U;
	int32_t x514 = -319184881;
	uint64_t x515 = 131842256962742LLU;
	uint16_t x516 = UINT16_MAX;

    t113 = ((x513+x514)|(x515!=x516));

    if (t113 != -319184879) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x517 = -1;
	volatile int16_t x520 = INT16_MIN;
	static volatile int32_t t114 = -63;

    t114 = ((x517+x518)|(x519!=x520));

    if (t114 != -259) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x525 = 3U;
	static int16_t x526 = -398;
	static uint32_t x527 = UINT32_MAX;
	static volatile int32_t x528 = -1;
	volatile uint32_t t115 = 237991057U;

    t115 = ((x525+x526)|(x527!=x528));

    if (t115 != 4294966901U) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x529 = INT32_MAX;
	static volatile int32_t x530 = INT32_MIN;
	int64_t x531 = 208LL;
	uint16_t x532 = 178U;
	int32_t t116 = -255800;

    t116 = ((x529+x530)|(x531!=x532));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int32_t x535 = INT32_MAX;
	int16_t x536 = -1;
	volatile int32_t t117 = 1;

    t117 = ((x533+x534)|(x535!=x536));

    if (t117 != -7) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x538 = -37;
	volatile uint8_t x539 = UINT8_MAX;
	volatile int32_t x540 = INT32_MIN;
	static int64_t t118 = 14154977LL;

    t118 = ((x537+x538)|(x539!=x540));

    if (t118 != -28877LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x541 = INT64_MIN;
	uint32_t x542 = 34806764U;
	uint16_t x544 = UINT16_MAX;
	int64_t t119 = 28820037492366LL;

    t119 = ((x541+x542)|(x543!=x544));

    if (t119 != -9223372036819969043LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x545 = 0;
	uint8_t x547 = 5U;
	volatile uint8_t x548 = 42U;
	volatile int32_t t120 = 15191;

    t120 = ((x545+x546)|(x547!=x548));

    if (t120 != -127) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x550 = INT16_MIN;
	volatile int16_t x551 = INT16_MIN;
	int64_t x552 = -2464508683LL;
	int32_t t121 = 15708839;

    t121 = ((x549+x550)|(x551!=x552));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x553 = 417U;
	int64_t x554 = INT64_MIN;
	volatile int8_t x555 = INT8_MAX;

    t122 = ((x553+x554)|(x555!=x556));

    if (t122 != -9223372036854775391LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t t123 = 813029LL;

    t123 = ((x557+x558)|(x559!=x560));

    if (t123 != -413511LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x561 = INT16_MIN;
	uint8_t x562 = 12U;
	uint64_t x563 = 572293833093596772LLU;
	uint16_t x564 = 8U;
	volatile int32_t t124 = 191970488;

    t124 = ((x561+x562)|(x563!=x564));

    if (t124 != -32755) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x573 = 805413U;
	uint32_t x574 = 22328U;
	int32_t x575 = -114874406;
	uint8_t x576 = 4U;
	uint32_t t125 = 309151U;

    t125 = ((x573+x574)|(x575!=x576));

    if (t125 != 827741U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x577 = INT64_MIN;
	uint16_t x578 = 104U;
	uint32_t x579 = 0U;
	static uint16_t x580 = 446U;
	static volatile int64_t t126 = 0LL;

    t126 = ((x577+x578)|(x579!=x580));

    if (t126 != -9223372036854775703LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x582 = UINT16_MAX;
	int8_t x584 = INT8_MIN;
	int32_t t127 = -83909421;

    t127 = ((x581+x582)|(x583!=x584));

    if (t127 != 65407) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x585 = INT32_MAX;
	int32_t x586 = INT32_MIN;
	int8_t x587 = INT8_MAX;
	int32_t t128 = -194498;

    t128 = ((x585+x586)|(x587!=x588));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x589 = 1549210;
	int32_t x590 = INT32_MIN;
	static volatile int64_t x591 = INT64_MIN;
	volatile int64_t x592 = -1LL;
	volatile int32_t t129 = -62841849;

    t129 = ((x589+x590)|(x591!=x592));

    if (t129 != -2145934437) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x593 = INT32_MAX;
	volatile int64_t x594 = -6879396966LL;
	uint8_t x595 = UINT8_MAX;
	uint64_t x596 = 5395257006208035LLU;

    t130 = ((x593+x594)|(x595!=x596));

    if (t130 != -4731913319LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x597 = INT16_MIN;
	static uint8_t x598 = 0U;
	int64_t x599 = -15081535242617308LL;
	volatile int16_t x600 = 3265;
	static int32_t t131 = -13;

    t131 = ((x597+x598)|(x599!=x600));

    if (t131 != -32767) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x601 = -7821LL;
	int64_t x602 = -446LL;
	int32_t x603 = INT32_MIN;
	static int64_t t132 = -66199064LL;

    t132 = ((x601+x602)|(x603!=x604));

    if (t132 != -8267LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x605 = -6;
	static uint64_t x607 = 716788332727946LLU;
	int32_t x608 = -1;
	int32_t t133 = 9355957;

    t133 = ((x605+x606)|(x607!=x608));

    if (t133 != -7) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x609 = UINT8_MAX;
	volatile int8_t x610 = 28;
	int16_t x611 = -1;
	int16_t x612 = -1;

    t134 = ((x609+x610)|(x611!=x612));

    if (t134 != 283) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x613 = INT16_MAX;
	uint64_t x615 = 576988601LLU;
	static int64_t x616 = 996315484501699LL;

    t135 = ((x613+x614)|(x615!=x616));

    if (t135 != -57920716011LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x617 = 8762403083LL;
	int8_t x618 = INT8_MIN;
	static int8_t x619 = INT8_MIN;
	static int64_t t136 = 29LL;

    t136 = ((x617+x618)|(x619!=x620));

    if (t136 != 8762402955LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x625 = 488715095478516LL;
	int64_t x627 = -1LL;
	int64_t t137 = 0LL;

    t137 = ((x625+x626)|(x627!=x628));

    if (t137 != 488715095482831LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x629 = INT16_MAX;
	uint8_t x630 = UINT8_MAX;
	int8_t x631 = -3;
	volatile uint16_t x632 = UINT16_MAX;
	volatile int32_t t138 = 330860793;

    t138 = ((x629+x630)|(x631!=x632));

    if (t138 != 33023) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x634 = UINT16_MAX;
	int8_t x635 = -6;
	uint16_t x636 = UINT16_MAX;
	int32_t t139 = 50049303;

    t139 = ((x633+x634)|(x635!=x636));

    if (t139 != 65743) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x637 = 35U;
	int64_t x638 = INT64_MIN;
	int8_t x639 = INT8_MIN;
	volatile int64_t t140 = 85442797LL;

    t140 = ((x637+x638)|(x639!=x640));

    if (t140 != -9223372036854775773LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x641 = -154150726;
	uint64_t x644 = UINT64_MAX;
	volatile int32_t t141 = -176;

    t141 = ((x641+x642)|(x643!=x644));

    if (t141 != -154085191) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x645 = 760433264305213LLU;
	volatile int64_t x646 = 11LL;
	volatile int8_t x648 = INT8_MIN;
	uint64_t t142 = 531431554257903507LLU;

    t142 = ((x645+x646)|(x647!=x648));

    if (t142 != 760433264305225LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x650 = INT16_MIN;
	uint32_t x651 = UINT32_MAX;
	volatile int32_t t143 = -232720010;

    t143 = ((x649+x650)|(x651!=x652));

    if (t143 != -32513) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x653 = UINT16_MAX;
	uint64_t x654 = 5051629707789639LLU;
	volatile uint16_t x655 = 88U;
	int16_t x656 = INT16_MIN;
	uint64_t t144 = 40030177806200861LLU;

    t144 = ((x653+x654)|(x655!=x656));

    if (t144 != 5051629707855175LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x657 = -47;
	int64_t x658 = INT64_MAX;
	int16_t x659 = -1;
	int16_t x660 = -3450;

    t145 = ((x657+x658)|(x659!=x660));

    if (t145 != 9223372036854775761LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x661 = -1977733777083LL;
	int8_t x662 = -1;
	volatile uint32_t x663 = 50777U;
	uint64_t x664 = 2089546208104221LLU;
	volatile int64_t t146 = -132841700LL;

    t146 = ((x661+x662)|(x663!=x664));

    if (t146 != -1977733777083LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x665 = -1;
	static uint32_t x666 = UINT32_MAX;
	uint64_t x668 = UINT64_MAX;
	static uint32_t t147 = UINT32_MAX;

    t147 = ((x665+x666)|(x667!=x668));

    if (t147 != UINT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x669 = 877430380;
	int16_t x670 = INT16_MIN;
	int8_t x671 = INT8_MAX;
	int32_t t148 = 2;

    t148 = ((x669+x670)|(x671!=x672));

    if (t148 != 877397613) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x673 = -1LL;
	static int64_t x675 = INT64_MIN;
	int64_t t149 = -1541LL;

    t149 = ((x673+x674)|(x675!=x676));

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x678 = 5U;
	int32_t x680 = -1;

    t150 = ((x677+x678)|(x679!=x680));

    if (t150 != 65541) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x681 = -1;
	volatile int16_t x682 = INT16_MIN;
	static int32_t t151 = 42158;

    t151 = ((x681+x682)|(x683!=x684));

    if (t151 != -32769) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x685 = 5340251414710404LLU;

    t152 = ((x685+x686)|(x687!=x688));

    if (t152 != 5340251414710501LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x689 = -1;
	static int8_t x690 = -1;
	int32_t t153 = 0;

    t153 = ((x689+x690)|(x691!=x692));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x693 = 0U;
	uint32_t x694 = 935785499U;
	static volatile int64_t x695 = 4017644LL;
	int8_t x696 = -1;

    t154 = ((x693+x694)|(x695!=x696));

    if (t154 != 935785499U) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x701 = -497226537;
	uint16_t x702 = 3U;
	int64_t x703 = -117LL;
	static volatile int32_t t155 = -1810566;

    t155 = ((x701+x702)|(x703!=x704));

    if (t155 != -497226533) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x706 = 3579;
	int8_t x707 = 0;
	static int16_t x708 = INT16_MIN;

    t156 = ((x705+x706)|(x707!=x708));

    if (t156 != 3579) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x709 = 1899LLU;
	volatile int8_t x710 = 46;
	uint16_t x711 = UINT16_MAX;
	volatile uint64_t x712 = 1826LLU;
	uint64_t t157 = 73909052793385LLU;

    t157 = ((x709+x710)|(x711!=x712));

    if (t157 != 1945LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x713 = -1LL;
	int32_t x716 = -1;
	volatile int64_t t158 = -1314356494970115LL;

    t158 = ((x713+x714)|(x715!=x716));

    if (t158 != 4294967295LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint16_t x717 = 1917U;
	uint32_t x718 = UINT32_MAX;
	int64_t x719 = INT64_MIN;
	uint8_t x720 = 8U;

    t159 = ((x717+x718)|(x719!=x720));

    if (t159 != 1917U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x721 = 0U;
	int8_t x722 = INT8_MIN;
	uint16_t x723 = 5725U;
	int16_t x724 = -1;
	static int32_t t160 = -7899;

    t160 = ((x721+x722)|(x723!=x724));

    if (t160 != -127) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x725 = INT64_MAX;
	volatile int64_t x727 = INT64_MIN;
	static int8_t x728 = INT8_MAX;
	static int64_t t161 = -4137868929LL;

    t161 = ((x725+x726)|(x727!=x728));

    if (t161 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x730 = INT32_MIN;
	volatile int16_t x731 = 1770;
	uint8_t x732 = 9U;
	static volatile int32_t t162 = 12196343;

    t162 = ((x729+x730)|(x731!=x732));

    if (t162 != -2147483619) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x734 = 14U;
	int8_t x735 = -15;
	static int8_t x736 = INT8_MIN;

    t163 = ((x733+x734)|(x735!=x736));

    if (t163 != 23) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x738 = UINT64_MAX;
	uint32_t x740 = UINT32_MAX;
	static volatile uint64_t t164 = UINT64_MAX;

    t164 = ((x737+x738)|(x739!=x740));

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x741 = -646;
	int8_t x742 = 9;
	static int8_t x743 = INT8_MAX;
	int16_t x744 = 84;

    t165 = ((x741+x742)|(x743!=x744));

    if (t165 != -637) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x745 = -1LL;
	static volatile int8_t x746 = INT8_MIN;
	static int16_t x747 = 0;
	volatile int64_t t166 = 429743180370646LL;

    t166 = ((x745+x746)|(x747!=x748));

    if (t166 != -129LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x749 = 97;
	uint64_t x750 = UINT64_MAX;
	uint16_t x751 = 1970U;
	volatile int16_t x752 = INT16_MAX;
	uint64_t t167 = 47483831414LLU;

    t167 = ((x749+x750)|(x751!=x752));

    if (t167 != 97LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x753 = 20794730LL;
	uint32_t x754 = UINT32_MAX;
	int64_t x755 = INT64_MAX;
	int64_t t168 = -4341305999684LL;

    t168 = ((x753+x754)|(x755!=x756));

    if (t168 != 4315762025LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x757 = 12127973U;
	int16_t x758 = INT16_MIN;
	static int16_t x759 = -4;
	static int16_t x760 = -1;
	volatile uint32_t t169 = 9U;

    t169 = ((x757+x758)|(x759!=x760));

    if (t169 != 12095205U) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x761 = INT32_MIN;
	int64_t x762 = -1330720051510172413LL;
	static volatile int32_t x763 = 3940;
	int8_t x764 = -1;
	volatile int64_t t170 = 81848720893154LL;

    t170 = ((x761+x762)|(x763!=x764));

    if (t170 != -1330720053657656061LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x774 = UINT16_MAX;
	volatile int16_t x775 = INT16_MIN;
	uint64_t x776 = 238LLU;
	volatile int32_t t171 = 18;

    t171 = ((x773+x774)|(x775!=x776));

    if (t171 != 65545) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x778 = 3136U;
	int32_t x779 = -233;
	static int8_t x780 = INT8_MIN;
	int32_t t172 = 1745;

    t172 = ((x777+x778)|(x779!=x780));

    if (t172 != -29631) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x781 = INT8_MIN;
	int16_t x782 = -4;
	int64_t x783 = -7LL;
	int32_t x784 = -1;

    t173 = ((x781+x782)|(x783!=x784));

    if (t173 != -131) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x785 = INT64_MIN;
	volatile uint16_t x786 = UINT16_MAX;
	int16_t x787 = INT16_MAX;
	uint8_t x788 = UINT8_MAX;
	static int64_t t174 = 360839976205847019LL;

    t174 = ((x785+x786)|(x787!=x788));

    if (t174 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x789 = 48251338938124930LLU;
	int16_t x790 = 138;
	int32_t x791 = INT32_MIN;
	uint32_t x792 = 60250U;
	uint64_t t175 = 13441531404711LLU;

    t175 = ((x789+x790)|(x791!=x792));

    if (t175 != 48251338938125069LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x793 = 0;
	static int64_t x795 = INT64_MIN;
	static uint8_t x796 = 3U;

    t176 = ((x793+x794)|(x795!=x796));

    if (t176 != -2147483647) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x797 = 3362LLU;
	static volatile uint64_t t177 = 107580041LLU;

    t177 = ((x797+x798)|(x799!=x800));

    if (t177 != 3361LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x802 = -1;
	uint16_t x803 = 4U;
	int64_t x804 = -128662912LL;
	volatile int32_t t178 = -156019;

    t178 = ((x801+x802)|(x803!=x804));

    if (t178 != 107) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x809 = -1;
	uint64_t x810 = UINT64_MAX;
	volatile uint64_t x811 = UINT64_MAX;
	volatile int32_t x812 = INT32_MIN;
	uint64_t t179 = UINT64_MAX;

    t179 = ((x809+x810)|(x811!=x812));

    if (t179 != UINT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint32_t x813 = 217502481U;
	static int64_t x814 = 4LL;
	volatile int64_t t180 = -118277LL;

    t180 = ((x813+x814)|(x815!=x816));

    if (t180 != 217502485LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x817 = 55LLU;
	uint8_t x818 = 1U;
	uint64_t x819 = 135413931854802367LLU;
	static int32_t x820 = INT32_MIN;
	uint64_t t181 = 16LLU;

    t181 = ((x817+x818)|(x819!=x820));

    if (t181 != 57LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x821 = INT64_MIN;
	uint16_t x822 = UINT16_MAX;
	volatile int64_t x823 = -1LL;

    t182 = ((x821+x822)|(x823!=x824));

    if (t182 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x825 = 4859U;
	volatile uint64_t x827 = 32776271324LLU;
	uint32_t x828 = 1116960436U;
	int32_t t183 = 5;

    t183 = ((x825+x826)|(x827!=x828));

    if (t183 != 70395) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x829 = 63U;
	int8_t x830 = -56;
	int8_t x831 = -3;
	int64_t x832 = INT64_MAX;
	volatile int32_t t184 = -8347;

    t184 = ((x829+x830)|(x831!=x832));

    if (t184 != 7) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x833 = INT16_MIN;
	static volatile uint16_t x835 = UINT16_MAX;

    t185 = ((x833+x834)|(x835!=x836));

    if (t185 != -44981) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x837 = 17;
	uint64_t x838 = 100607272269LLU;
	int32_t x839 = INT32_MIN;
	uint16_t x840 = UINT16_MAX;
	uint64_t t186 = 59971987115590LLU;

    t186 = ((x837+x838)|(x839!=x840));

    if (t186 != 100607272287LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x841 = 7145U;
	int16_t x842 = INT16_MIN;
	static int64_t x843 = INT64_MAX;
	uint16_t x844 = 0U;
	volatile uint32_t t187 = 5506502U;

    t187 = ((x841+x842)|(x843!=x844));

    if (t187 != 4294941673U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x845 = 414142;
	volatile int16_t x846 = -22;
	uint8_t x847 = 114U;
	static uint32_t x848 = UINT32_MAX;

    t188 = ((x845+x846)|(x847!=x848));

    if (t188 != 414121) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x849 = INT16_MIN;
	int8_t x851 = -1;
	static int8_t x852 = 12;
	int32_t t189 = 31;

    t189 = ((x849+x850)|(x851!=x852));

    if (t189 != -32895) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x857 = -17;
	uint8_t x858 = 14U;
	int8_t x859 = -1;
	uint32_t x860 = 368281U;
	int32_t t190 = 330071199;

    t190 = ((x857+x858)|(x859!=x860));

    if (t190 != -3) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x865 = 20709759844LL;
	volatile int32_t x866 = INT32_MIN;
	int16_t x867 = INT16_MAX;
	volatile int64_t x868 = -540957453LL;
	int64_t t191 = 1566569833LL;

    t191 = ((x865+x866)|(x867!=x868));

    if (t191 != 18562276197LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x869 = UINT32_MAX;
	uint8_t x870 = 6U;
	static uint32_t x871 = 310627424U;
	uint64_t x872 = 26287960245LLU;
	uint32_t t192 = 202519986U;

    t192 = ((x869+x870)|(x871!=x872));

    if (t192 != 5U) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x873 = INT16_MAX;
	static uint32_t x874 = UINT32_MAX;
	int64_t x875 = -1LL;
	int64_t x876 = -1901759376910LL;
	uint32_t t193 = 218373820U;

    t193 = ((x873+x874)|(x875!=x876));

    if (t193 != 32767U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x881 = INT32_MIN;
	uint64_t x882 = 9801456LLU;
	volatile uint64_t t194 = 28732327LLU;

    t194 = ((x881+x882)|(x883!=x884));

    if (t194 != 18446744071571869425LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x885 = 1505;
	volatile int32_t x886 = 344;
	static int16_t x888 = 1078;
	volatile int32_t t195 = 3469328;

    t195 = ((x885+x886)|(x887!=x888));

    if (t195 != 1849) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x889 = 1283U;
	volatile uint16_t x890 = 550U;
	volatile int32_t x891 = -1;
	int8_t x892 = INT8_MIN;
	int32_t t196 = 62058;

    t196 = ((x889+x890)|(x891!=x892));

    if (t196 != 1833) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x893 = -1371793;
	int64_t x895 = INT64_MAX;
	volatile int16_t x896 = INT16_MIN;
	volatile int64_t t197 = -10830438946LL;

    t197 = ((x893+x894)|(x895!=x896));

    if (t197 != -1496307LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x897 = UINT8_MAX;
	uint16_t x898 = UINT16_MAX;
	int32_t x899 = -70392;
	volatile uint8_t x900 = 0U;
	int32_t t198 = 45042;

    t198 = ((x897+x898)|(x899!=x900));

    if (t198 != 65791) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x902 = UINT64_MAX;
	int32_t x903 = -6;
	volatile int32_t x904 = INT32_MAX;
	volatile uint64_t t199 = UINT64_MAX;

    t199 = ((x901+x902)|(x903!=x904));

    if (t199 != UINT64_MAX) { NG(); } else { ; }
	
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



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

uint32_t x1 = UINT32_MAX;
int32_t x4 = -1;
int64_t t0 = -19LL;
int16_t x7 = -25;
volatile int32_t t1 = 91032225;
uint64_t x10 = 10LLU;
volatile int32_t x20 = INT32_MIN;
volatile uint64_t x28 = UINT64_MAX;
static volatile int64_t x32 = 93807660886421LL;
int8_t x42 = -1;
int8_t x43 = 7;
volatile int8_t x44 = INT8_MIN;
volatile uint32_t x45 = 294U;
int32_t x46 = INT32_MIN;
volatile int32_t t11 = -8469466;
static int16_t x50 = INT16_MIN;
int32_t x51 = INT32_MIN;
static int64_t x54 = INT64_MIN;
int32_t x56 = INT32_MIN;
volatile int64_t t13 = -14299247LL;
int16_t x68 = INT16_MAX;
int16_t x71 = INT16_MIN;
int64_t x82 = INT64_MAX;
volatile uint32_t t20 = 2190304U;
uint8_t x94 = 30U;
volatile int64_t t23 = 7361913311789857LL;
static int8_t x99 = 0;
static int32_t t24 = -55391;
int64_t x108 = INT64_MAX;
static int16_t x119 = INT16_MIN;
volatile int32_t t30 = 5555;
int16_t x130 = 0;
int16_t x134 = INT16_MIN;
static int32_t t33 = -85;
int8_t x146 = INT8_MAX;
static int64_t x157 = 1080690049LL;
int64_t x161 = INT64_MIN;
int8_t x162 = INT8_MAX;
uint16_t x175 = 973U;
static int32_t x181 = INT32_MAX;
volatile int32_t x182 = 4846;
static volatile uint64_t x185 = 42144045LLU;
int16_t x186 = INT16_MAX;
int32_t x188 = INT32_MIN;
int16_t x189 = INT16_MIN;
static int8_t x200 = -1;
static volatile int32_t t51 = 44;
int64_t x211 = INT64_MIN;
int64_t x213 = -6156300556LL;
static int32_t x216 = INT32_MAX;
static int32_t x218 = INT32_MAX;
static uint32_t x222 = UINT32_MAX;
static uint16_t x224 = 6U;
int64_t t56 = 84LL;
uint16_t x230 = 2U;
int64_t t57 = -1468287159627LL;
int16_t x236 = 7266;
uint16_t x237 = 225U;
int64_t t59 = -639818051LL;
volatile uint32_t x243 = 229892753U;
uint32_t x252 = 83980200U;
uint64_t x253 = 2945230260840043535LLU;
static uint16_t x255 = UINT16_MAX;
uint32_t x256 = 4U;
volatile uint32_t t65 = 497900U;
uint16_t x266 = 88U;
int32_t x269 = 245604807;
int64_t x272 = -1739955281LL;
int32_t x274 = -13;
int8_t x278 = -1;
static volatile int32_t t69 = -393;
int8_t x281 = -1;
uint64_t x282 = UINT64_MAX;
int64_t x283 = INT64_MIN;
int64_t t70 = -20806127LL;
volatile int8_t x287 = -1;
static int32_t x289 = INT32_MAX;
static uint64_t x290 = 119LLU;
volatile int64_t t72 = 251LL;
uint64_t x294 = 13831383LLU;
volatile uint64_t t75 = 111904086694835426LLU;
int32_t x305 = -1;
volatile int8_t x307 = -1;
int8_t x308 = 1;
uint32_t x309 = 331U;
int64_t x312 = -61LL;
volatile int64_t x315 = -1463LL;
int16_t x328 = -32;
volatile int64_t x335 = INT64_MAX;
int8_t x353 = INT8_MAX;
static int64_t x357 = INT64_MIN;
uint16_t x358 = 3U;
int32_t t89 = -26794175;
uint16_t x368 = 234U;
volatile uint64_t t91 = 533762958390LLU;
int8_t x370 = -1;
static int32_t t92 = 279462;
uint16_t x376 = 4U;
static int8_t x381 = -1;
int32_t x383 = INT32_MAX;
int32_t x386 = 537222;
volatile uint16_t x390 = UINT16_MAX;
static int16_t x392 = -1;
int32_t x396 = -1;
static int32_t t98 = 0;
static int16_t x398 = 3;
uint64_t x399 = 61LLU;
int64_t x401 = -15LL;
uint16_t x404 = 0U;
int8_t x406 = -1;
uint8_t x415 = UINT8_MAX;
uint16_t x421 = 5U;
uint16_t x426 = 2768U;
volatile uint32_t t106 = 7868648U;
static int8_t x448 = INT8_MAX;
int32_t t111 = -234;
static uint16_t x451 = UINT16_MAX;
int32_t x457 = -515668713;
int16_t x467 = INT16_MIN;
volatile int32_t t116 = -109;
int16_t x482 = -1;
int32_t x483 = INT32_MAX;
int16_t x492 = -1;
int16_t x494 = INT16_MIN;
static int64_t x496 = INT64_MAX;
int16_t x499 = INT16_MAX;
int16_t x500 = -55;
int32_t x501 = -390603036;
int32_t x502 = -1;
int16_t x506 = 416;
int32_t x508 = INT32_MIN;
int32_t x511 = INT32_MIN;
volatile int32_t t127 = -1;
int32_t t130 = 10110968;
static int8_t x525 = -1;
int64_t x532 = INT64_MAX;
volatile int16_t x542 = -44;
volatile int32_t x546 = -1;
uint16_t x548 = 6692U;
int16_t x549 = 1;
uint8_t x550 = 27U;
volatile uint8_t x551 = 9U;
int64_t x552 = INT64_MIN;
static volatile int64_t t137 = 14006638002354LL;
uint32_t x566 = 108220111U;
volatile uint64_t x570 = UINT64_MAX;
volatile int64_t x573 = -1LL;
static volatile int16_t x578 = INT16_MIN;
int64_t t145 = -224860803052948071LL;
int64_t x590 = INT64_MIN;
volatile int64_t x593 = INT64_MIN;
uint8_t x594 = 0U;
volatile int32_t x604 = -1;
volatile int32_t t150 = -706;
volatile int16_t x616 = INT16_MIN;
int16_t x617 = -119;
static int32_t x620 = INT32_MIN;
int8_t x626 = INT8_MIN;
int32_t t156 = -10234739;
volatile int64_t x633 = -1LL;
int8_t x641 = INT8_MIN;
int64_t t160 = 209226508213LL;
int8_t x645 = INT8_MIN;
int16_t x648 = INT16_MIN;
int32_t x653 = 501;
static int32_t x658 = -46018298;
int64_t x659 = -30600747516500517LL;
static volatile int64_t t165 = 1579094508270LL;
int8_t x667 = INT8_MIN;
uint64_t t166 = 5263418210LLU;
uint64_t x669 = 3337368799447976LLU;
int64_t x674 = INT64_MIN;
int32_t x680 = INT32_MAX;
static int32_t t169 = 1058;
volatile int16_t x696 = -1;
volatile int32_t t173 = 2556;
int64_t x703 = INT64_MIN;
int16_t x704 = -1;
static volatile int64_t t175 = -520547345017LL;
static uint8_t x705 = 0U;
uint64_t x706 = 6768000117454LLU;
static int32_t x717 = 25213;
static volatile uint64_t x718 = 30226587480668390LLU;
static volatile uint64_t t179 = 7547LLU;
int32_t t180 = -1;
static int64_t x727 = INT64_MIN;
int64_t t181 = -7518719723409367LL;
static uint64_t x737 = 5LLU;
volatile int8_t x740 = -2;
volatile int32_t t185 = 218289;
volatile uint64_t x748 = 119LLU;
volatile uint64_t t186 = 459462868524227LLU;
uint64_t x750 = UINT64_MAX;
volatile int16_t x751 = 71;
uint32_t x754 = 22772U;
static uint64_t x759 = UINT64_MAX;
uint8_t x761 = UINT8_MAX;
int64_t x766 = INT64_MIN;
static int16_t x770 = INT16_MIN;
uint8_t x779 = 117U;
volatile uint8_t x781 = 48U;
uint16_t x788 = UINT16_MAX;
int8_t x794 = INT8_MIN;
volatile uint16_t x796 = UINT16_MAX;
volatile int16_t x798 = 1;
int32_t x799 = 11029835;


void f0(void) {
    	volatile int64_t x2 = -5062958341971835LL;
	int64_t x3 = -43260982LL;

    t0 = ((x1!=x2)/(x3|x4));

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	int16_t x6 = INT16_MIN;
	static int8_t x8 = INT8_MIN;

    t1 = ((x5!=x6)/(x7|x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	int32_t x11 = INT32_MAX;
	int64_t x12 = INT64_MIN;
	volatile int64_t t2 = 2657095119073928384LL;

    t2 = ((x9!=x10)/(x11|x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x13 = 234U;
	static int8_t x14 = INT8_MIN;
	static uint16_t x15 = 46U;
	uint64_t x16 = 18LLU;
	static uint64_t t3 = 14323096LLU;

    t3 = ((x13!=x14)/(x15|x16));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x17 = 6U;
	int32_t x18 = -43;
	volatile int32_t x19 = INT32_MAX;
	volatile int32_t t4 = -3892;

    t4 = ((x17!=x18)/(x19|x20));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	volatile uint64_t x22 = 6162717594526510385LLU;
	uint32_t x23 = 383606035U;
	uint32_t x24 = UINT32_MAX;
	volatile uint32_t t5 = 939501548U;

    t5 = ((x21!=x22)/(x23|x24));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	int16_t x26 = INT16_MIN;
	int16_t x27 = INT16_MIN;
	static uint64_t t6 = 23484095160253715LLU;

    t6 = ((x25!=x26)/(x27|x28));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = 0;
	int16_t x30 = INT16_MIN;
	volatile int16_t x31 = INT16_MAX;
	int64_t t7 = -1221058316163LL;

    t7 = ((x29!=x30)/(x31|x32));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int64_t x34 = 55911590920LL;
	static int32_t x35 = INT32_MIN;
	int64_t x36 = -28605054105480LL;
	volatile int64_t t8 = -55850433LL;

    t8 = ((x33!=x34)/(x35|x36));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 0U;
	int32_t x38 = INT32_MAX;
	int64_t x39 = -1LL;
	int16_t x40 = INT16_MIN;
	int64_t t9 = 3LL;

    t9 = ((x37!=x38)/(x39|x40));

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -1;
	volatile int32_t t10 = 3012;

    t10 = ((x41!=x42)/(x43|x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x47 = INT8_MAX;
	uint8_t x48 = 7U;

    t11 = ((x45!=x46)/(x47|x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	int64_t x52 = -1LL;
	int64_t t12 = -528518220252352LL;

    t12 = ((x49!=x50)/(x51|x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x53 = INT8_MAX;
	volatile int64_t x55 = -1528773LL;

    t13 = ((x53!=x54)/(x55|x56));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int32_t x57 = INT32_MIN;
	static int64_t x58 = INT64_MAX;
	int8_t x59 = 2;
	uint8_t x60 = 1U;
	volatile int32_t t14 = -15159;

    t14 = ((x57!=x58)/(x59|x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	volatile int8_t x62 = -1;
	static int32_t x63 = -498664;
	int32_t x64 = INT32_MIN;
	static volatile int32_t t15 = -7411129;

    t15 = ((x61!=x62)/(x63|x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MAX;
	static int32_t x66 = INT32_MIN;
	volatile uint32_t x67 = UINT32_MAX;
	static uint32_t t16 = 0U;

    t16 = ((x65!=x66)/(x67|x68));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x69 = UINT8_MAX;
	volatile int16_t x70 = -1630;
	int64_t x72 = -1LL;
	volatile int64_t t17 = 2823923143926188LL;

    t17 = ((x69!=x70)/(x71|x72));

    if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -1;
	uint16_t x74 = UINT16_MAX;
	static int32_t x75 = INT32_MAX;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = -11346;

    t18 = ((x73!=x74)/(x75|x76));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MIN;
	int32_t x78 = 286810570;
	uint32_t x79 = 37505U;
	uint64_t x80 = UINT64_MAX;
	volatile uint64_t t19 = 3438124300938LLU;

    t19 = ((x77!=x78)/(x79|x80));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -13;
	static int16_t x83 = INT16_MAX;
	uint32_t x84 = 128134418U;

    t20 = ((x81!=x82)/(x83|x84));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x85 = UINT16_MAX;
	int64_t x86 = INT64_MIN;
	uint8_t x87 = UINT8_MAX;
	uint8_t x88 = 20U;
	int32_t t21 = 15782;

    t21 = ((x85!=x86)/(x87|x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x89 = 4U;
	uint64_t x90 = UINT64_MAX;
	uint64_t x91 = 2508040688LLU;
	int32_t x92 = -1;
	static volatile uint64_t t22 = 24099164172276LLU;

    t22 = ((x89!=x90)/(x91|x92));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	static int64_t x95 = -407LL;
	uint32_t x96 = UINT32_MAX;

    t23 = ((x93!=x94)/(x95|x96));

    if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 2U;
	static int64_t x98 = -3LL;
	static int32_t x100 = -4556;

    t24 = ((x97!=x98)/(x99|x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -1;
	int64_t x102 = INT64_MIN;
	volatile int64_t x103 = INT64_MAX;
	static volatile uint8_t x104 = UINT8_MAX;
	volatile int64_t t25 = 557033687655037596LL;

    t25 = ((x101!=x102)/(x103|x104));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = 507270698U;
	int16_t x106 = -10;
	int32_t x107 = -32366182;
	volatile int64_t t26 = -1894595738342LL;

    t26 = ((x105!=x106)/(x107|x108));

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = 2297852257LLU;
	int8_t x110 = -1;
	static volatile uint64_t x111 = UINT64_MAX;
	volatile int8_t x112 = -8;
	static uint64_t t27 = 56LLU;

    t27 = ((x109!=x110)/(x111|x112));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MIN;
	int8_t x114 = INT8_MIN;
	int32_t x115 = INT32_MIN;
	static volatile int64_t x116 = -9329486953513064LL;
	int64_t t28 = -4278751LL;

    t28 = ((x113!=x114)/(x115|x116));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x117 = 4U;
	int8_t x118 = INT8_MAX;
	uint32_t x120 = UINT32_MAX;
	static volatile uint32_t t29 = 135538461U;

    t29 = ((x117!=x118)/(x119|x120));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = -1;
	int16_t x122 = INT16_MAX;
	int32_t x123 = -1;
	int8_t x124 = INT8_MAX;

    t30 = ((x121!=x122)/(x123|x124));

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = 1;
	int8_t x126 = -35;
	int64_t x127 = INT64_MIN;
	static uint32_t x128 = 4U;
	volatile int64_t t31 = -2294483496010290LL;

    t31 = ((x125!=x126)/(x127|x128));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MAX;
	static uint8_t x131 = UINT8_MAX;
	uint16_t x132 = 85U;
	static volatile int32_t t32 = -1472502;

    t32 = ((x129!=x130)/(x131|x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int64_t x133 = INT64_MIN;
	volatile int32_t x135 = INT32_MIN;
	int32_t x136 = INT32_MIN;

    t33 = ((x133!=x134)/(x135|x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = 0;
	int32_t x138 = INT32_MAX;
	uint8_t x139 = 1U;
	int16_t x140 = -1;
	volatile int32_t t34 = -1;

    t34 = ((x137!=x138)/(x139|x140));

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	static int32_t x142 = 1;
	int64_t x143 = INT64_MIN;
	volatile int32_t x144 = INT32_MAX;
	static volatile int64_t t35 = -4437917264301463LL;

    t35 = ((x141!=x142)/(x143|x144));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MAX;
	int64_t x147 = INT64_MAX;
	uint64_t x148 = 15252162LLU;
	uint64_t t36 = 598216470LLU;

    t36 = ((x145!=x146)/(x147|x148));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x149 = -1;
	int8_t x150 = INT8_MAX;
	static int8_t x151 = -3;
	static volatile uint64_t x152 = 55342430377LLU;
	volatile uint64_t t37 = 444601297480372595LLU;

    t37 = ((x149!=x150)/(x151|x152));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = 2507869412366769LLU;
	int8_t x154 = INT8_MIN;
	int16_t x155 = INT16_MAX;
	int8_t x156 = 1;
	int32_t t38 = 49127;

    t38 = ((x153!=x154)/(x155|x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x158 = 1;
	uint32_t x159 = 261391576U;
	int32_t x160 = 2340;
	volatile uint32_t t39 = 119641U;

    t39 = ((x157!=x158)/(x159|x160));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x163 = INT64_MIN;
	volatile int8_t x164 = -1;
	volatile int64_t t40 = -20LL;

    t40 = ((x161!=x162)/(x163|x164));

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = 3711229LLU;
	volatile int64_t x166 = -6189381093LL;
	static volatile uint32_t x167 = 27005400U;
	static int16_t x168 = INT16_MIN;
	static uint32_t t41 = 17290U;

    t41 = ((x165!=x166)/(x167|x168));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MIN;
	int32_t x170 = 407719;
	static int16_t x171 = INT16_MIN;
	uint32_t x172 = 17638509U;
	uint32_t t42 = 48U;

    t42 = ((x169!=x170)/(x171|x172));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = 0U;
	int64_t x174 = INT64_MAX;
	volatile uint64_t x176 = UINT64_MAX;
	static uint64_t t43 = 0LLU;

    t43 = ((x173!=x174)/(x175|x176));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x177 = -1;
	int16_t x178 = INT16_MAX;
	int8_t x179 = INT8_MAX;
	uint32_t x180 = 7U;
	volatile uint32_t t44 = 32986127U;

    t44 = ((x177!=x178)/(x179|x180));

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x183 = INT32_MAX;
	volatile int8_t x184 = INT8_MIN;
	volatile int32_t t45 = 229250564;

    t45 = ((x181!=x182)/(x183|x184));

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x187 = 94797511480225LLU;
	static volatile uint64_t t46 = 13541696539628LLU;

    t46 = ((x185!=x186)/(x187|x188));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x190 = 103562U;
	volatile uint64_t x191 = 20148737LLU;
	int64_t x192 = INT64_MAX;
	static volatile uint64_t t47 = 121962447486LLU;

    t47 = ((x189!=x190)/(x191|x192));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = UINT32_MAX;
	uint16_t x194 = UINT16_MAX;
	uint64_t x195 = 100750586LLU;
	uint64_t x196 = UINT64_MAX;
	uint64_t t48 = 326LLU;

    t48 = ((x193!=x194)/(x195|x196));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x197 = INT32_MAX;
	int16_t x198 = 5;
	uint16_t x199 = 14U;
	int32_t t49 = -6;

    t49 = ((x197!=x198)/(x199|x200));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = -1;
	uint16_t x202 = 195U;
	static volatile uint64_t x203 = 36944012LLU;
	int8_t x204 = INT8_MIN;
	uint64_t t50 = 3745530310667132LLU;

    t50 = ((x201!=x202)/(x203|x204));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int8_t x205 = -1;
	static int8_t x206 = 63;
	uint16_t x207 = UINT16_MAX;
	int32_t x208 = INT32_MAX;

    t51 = ((x205!=x206)/(x207|x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint32_t x209 = UINT32_MAX;
	int16_t x210 = INT16_MIN;
	volatile int64_t x212 = INT64_MIN;
	volatile int64_t t52 = 12636LL;

    t52 = ((x209!=x210)/(x211|x212));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x214 = 817U;
	int32_t x215 = -1;
	int32_t t53 = 1459;

    t53 = ((x213!=x214)/(x215|x216));

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MIN;
	volatile int16_t x219 = INT16_MAX;
	uint16_t x220 = UINT16_MAX;
	static int32_t t54 = 61;

    t54 = ((x217!=x218)/(x219|x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MIN;
	static uint64_t x223 = UINT64_MAX;
	volatile uint64_t t55 = 39792LLU;

    t55 = ((x221!=x222)/(x223|x224));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = 413912U;
	static int8_t x226 = INT8_MIN;
	int64_t x227 = INT64_MIN;
	int64_t x228 = 132369151818763157LL;

    t56 = ((x225!=x226)/(x227|x228));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x229 = 465190045768LLU;
	int64_t x231 = 1086187243712653286LL;
	int8_t x232 = 1;

    t57 = ((x229!=x230)/(x231|x232));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = -1;
	static int64_t x234 = -407060LL;
	volatile uint16_t x235 = 4U;
	volatile int32_t t58 = -632;

    t58 = ((x233!=x234)/(x235|x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x238 = 0U;
	int64_t x239 = INT64_MAX;
	uint8_t x240 = 8U;

    t59 = ((x237!=x238)/(x239|x240));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -1LL;
	volatile int32_t x242 = -1;
	static uint64_t x244 = UINT64_MAX;
	static uint64_t t60 = 15LLU;

    t60 = ((x241!=x242)/(x243|x244));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = -1418;
	uint32_t x246 = UINT32_MAX;
	int64_t x247 = INT64_MIN;
	int16_t x248 = 6;
	volatile int64_t t61 = -1LL;

    t61 = ((x245!=x246)/(x247|x248));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -1;
	int8_t x250 = INT8_MIN;
	int32_t x251 = 1124;
	uint32_t t62 = 4U;

    t62 = ((x249!=x250)/(x251|x252));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x254 = UINT64_MAX;
	volatile uint32_t t63 = 2028U;

    t63 = ((x253!=x254)/(x255|x256));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MIN;
	int64_t x258 = -1LL;
	int8_t x259 = -1;
	int32_t x260 = -1;
	static int32_t t64 = 1140;

    t64 = ((x257!=x258)/(x259|x260));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x261 = 9U;
	volatile int8_t x262 = -1;
	int8_t x263 = INT8_MIN;
	volatile uint32_t x264 = 88287695U;

    t65 = ((x261!=x262)/(x263|x264));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = -1;
	uint8_t x267 = 123U;
	int8_t x268 = INT8_MIN;
	static volatile int32_t t66 = -407292501;

    t66 = ((x265!=x266)/(x267|x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x270 = -11141;
	int64_t x271 = 217024555LL;
	int64_t t67 = -450506331497LL;

    t67 = ((x269!=x270)/(x271|x272));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x273 = 1951;
	int16_t x275 = INT16_MIN;
	volatile int32_t x276 = 49572;
	static volatile int32_t t68 = -111870;

    t68 = ((x273!=x274)/(x275|x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = INT32_MIN;
	int32_t x279 = 0;
	int32_t x280 = -1;

    t69 = ((x277!=x278)/(x279|x280));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int16_t x284 = INT16_MIN;

    t70 = ((x281!=x282)/(x283|x284));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 3U;
	int32_t x286 = -6;
	volatile uint64_t x288 = UINT64_MAX;
	uint64_t t71 = 197744337451LLU;

    t71 = ((x285!=x286)/(x287|x288));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x291 = INT64_MAX;
	int8_t x292 = 1;

    t72 = ((x289!=x290)/(x291|x292));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = 26;
	int64_t x295 = 221LL;
	int16_t x296 = INT16_MAX;
	volatile int64_t t73 = 1464824310458908LL;

    t73 = ((x293!=x294)/(x295|x296));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x297 = INT8_MIN;
	int8_t x298 = INT8_MAX;
	volatile int16_t x299 = INT16_MIN;
	uint16_t x300 = 40U;
	volatile int32_t t74 = 205622703;

    t74 = ((x297!=x298)/(x299|x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x301 = 132351737U;
	static volatile int8_t x302 = INT8_MIN;
	static uint64_t x303 = 6LLU;
	int32_t x304 = INT32_MIN;

    t75 = ((x301!=x302)/(x303|x304));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x306 = 4U;
	volatile int32_t t76 = 5;

    t76 = ((x305!=x306)/(x307|x308));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x310 = -2;
	static int16_t x311 = 568;
	static volatile int64_t t77 = -43592557700LL;

    t77 = ((x309!=x310)/(x311|x312));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = 626U;
	volatile uint32_t x314 = 69325U;
	int64_t x316 = INT64_MIN;
	int64_t t78 = -699LL;

    t78 = ((x313!=x314)/(x315|x316));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -1;
	int16_t x318 = 5;
	int64_t x319 = INT64_MAX;
	static uint32_t x320 = UINT32_MAX;
	int64_t t79 = 137402LL;

    t79 = ((x317!=x318)/(x319|x320));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x321 = INT16_MIN;
	static volatile uint8_t x322 = UINT8_MAX;
	static uint32_t x323 = 3358109U;
	uint64_t x324 = 339755153LLU;
	uint64_t t80 = 133505LLU;

    t80 = ((x321!=x322)/(x323|x324));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = -1LL;
	uint8_t x326 = 47U;
	static uint16_t x327 = 666U;
	volatile int32_t t81 = 0;

    t81 = ((x325!=x326)/(x327|x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int16_t x329 = INT16_MIN;
	int64_t x330 = INT64_MIN;
	uint8_t x331 = UINT8_MAX;
	int8_t x332 = -1;
	volatile int32_t t82 = -69104750;

    t82 = ((x329!=x330)/(x331|x332));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MAX;
	uint8_t x334 = 12U;
	int32_t x336 = INT32_MIN;
	int64_t t83 = -856456117602088LL;

    t83 = ((x333!=x334)/(x335|x336));

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x337 = 15938U;
	int32_t x338 = INT32_MAX;
	int8_t x339 = -1;
	static int32_t x340 = 1;
	int32_t t84 = 75;

    t84 = ((x337!=x338)/(x339|x340));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	static int64_t x342 = INT64_MIN;
	uint8_t x343 = UINT8_MAX;
	uint16_t x344 = 306U;
	volatile int32_t t85 = 8838822;

    t85 = ((x341!=x342)/(x343|x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = UINT64_MAX;
	uint8_t x346 = UINT8_MAX;
	static int16_t x347 = -8666;
	volatile int8_t x348 = 35;
	static volatile int32_t t86 = -90632428;

    t86 = ((x345!=x346)/(x347|x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x349 = 124066;
	int16_t x350 = -12;
	uint8_t x351 = UINT8_MAX;
	static volatile int8_t x352 = 5;
	volatile int32_t t87 = 4;

    t87 = ((x349!=x350)/(x351|x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x354 = -1;
	static volatile int32_t x355 = INT32_MAX;
	int64_t x356 = INT64_MIN;
	int64_t t88 = 56673892LL;

    t88 = ((x353!=x354)/(x355|x356));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x359 = 1U;
	static volatile int16_t x360 = 1;

    t89 = ((x357!=x358)/(x359|x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x361 = INT8_MIN;
	volatile int16_t x362 = INT16_MAX;
	volatile int16_t x363 = INT16_MIN;
	uint64_t x364 = 63651265999385809LLU;
	uint64_t t90 = 126271303LLU;

    t90 = ((x361!=x362)/(x363|x364));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x365 = 3743697LLU;
	int8_t x366 = -1;
	uint64_t x367 = 465836050956371450LLU;

    t91 = ((x365!=x366)/(x367|x368));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x369 = INT32_MIN;
	int8_t x371 = INT8_MAX;
	uint8_t x372 = UINT8_MAX;

    t92 = ((x369!=x370)/(x371|x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x373 = -1;
	int16_t x374 = -1;
	uint16_t x375 = 2807U;
	volatile int32_t t93 = -98;

    t93 = ((x373!=x374)/(x375|x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = 2546275LLU;
	int8_t x378 = INT8_MIN;
	static uint64_t x379 = UINT64_MAX;
	uint64_t x380 = 17033024496LLU;
	uint64_t t94 = 20LLU;

    t94 = ((x377!=x378)/(x379|x380));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x382 = INT16_MIN;
	static uint64_t x384 = 407336LLU;
	volatile uint64_t t95 = 189585131LLU;

    t95 = ((x381!=x382)/(x383|x384));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x385 = -5;
	int64_t x387 = INT64_MIN;
	int64_t x388 = INT64_MAX;
	int64_t t96 = -893720717351LL;

    t96 = ((x385!=x386)/(x387|x388));

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x389 = 26852U;
	volatile int16_t x391 = -1;
	volatile int32_t t97 = -6030745;

    t97 = ((x389!=x390)/(x391|x392));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MIN;
	int8_t x394 = 1;
	int16_t x395 = INT16_MIN;

    t98 = ((x393!=x394)/(x395|x396));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = 335143;
	static volatile int32_t x400 = 1;
	uint64_t t99 = 967271140336LLU;

    t99 = ((x397!=x398)/(x399|x400));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x402 = UINT8_MAX;
	uint16_t x403 = 1U;
	int32_t t100 = 13044;

    t100 = ((x401!=x402)/(x403|x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x405 = INT8_MAX;
	int64_t x407 = INT64_MIN;
	int32_t x408 = INT32_MAX;
	static volatile int64_t t101 = -485183193LL;

    t101 = ((x405!=x406)/(x407|x408));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = 41;
	static volatile int16_t x410 = INT16_MIN;
	volatile int64_t x411 = INT64_MAX;
	int16_t x412 = INT16_MIN;
	volatile int64_t t102 = 1305989954493831957LL;

    t102 = ((x409!=x410)/(x411|x412));

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = 28U;
	static uint32_t x414 = UINT32_MAX;
	int32_t x416 = INT32_MIN;
	volatile int32_t t103 = -109194;

    t103 = ((x413!=x414)/(x415|x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MAX;
	volatile int8_t x418 = -3;
	int16_t x419 = INT16_MIN;
	volatile int32_t x420 = INT32_MIN;
	int32_t t104 = -2029;

    t104 = ((x417!=x418)/(x419|x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x422 = 664U;
	uint64_t x423 = UINT64_MAX;
	int16_t x424 = -1;
	uint64_t t105 = 47LLU;

    t105 = ((x421!=x422)/(x423|x424));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 51U;
	uint32_t x427 = UINT32_MAX;
	static int16_t x428 = INT16_MIN;

    t106 = ((x425!=x426)/(x427|x428));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x429 = INT32_MIN;
	int32_t x430 = -577479;
	static uint64_t x431 = 45LLU;
	static int16_t x432 = INT16_MIN;
	static volatile uint64_t t107 = 25501LLU;

    t107 = ((x429!=x430)/(x431|x432));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = INT64_MIN;
	static int16_t x434 = -1;
	volatile uint64_t x435 = UINT64_MAX;
	int64_t x436 = 781LL;
	static uint64_t t108 = 503903671076515982LLU;

    t108 = ((x433!=x434)/(x435|x436));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -16037949;
	int8_t x438 = -1;
	uint64_t x439 = 7488419247LLU;
	volatile int16_t x440 = 6;
	static volatile uint64_t t109 = 133915LLU;

    t109 = ((x437!=x438)/(x439|x440));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MAX;
	uint64_t x442 = 18895873525LLU;
	int32_t x443 = -13696711;
	volatile int64_t x444 = -524792257747561401LL;
	volatile int64_t t110 = -119618201229LL;

    t110 = ((x441!=x442)/(x443|x444));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x445 = UINT16_MAX;
	static int64_t x446 = 6022109713LL;
	static volatile int16_t x447 = -778;

    t111 = ((x445!=x446)/(x447|x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x449 = 294;
	uint16_t x450 = UINT16_MAX;
	uint64_t x452 = 103916LLU;
	static uint64_t t112 = 1639750506553424LLU;

    t112 = ((x449!=x450)/(x451|x452));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = 12;
	uint16_t x454 = UINT16_MAX;
	volatile int32_t x455 = 10;
	static int8_t x456 = -1;
	static volatile int32_t t113 = -18;

    t113 = ((x453!=x454)/(x455|x456));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x458 = INT64_MIN;
	volatile int16_t x459 = INT16_MIN;
	uint16_t x460 = 1U;
	volatile int32_t t114 = -3576629;

    t114 = ((x457!=x458)/(x459|x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MAX;
	int8_t x462 = -1;
	int8_t x463 = -1;
	uint16_t x464 = 3U;
	volatile int32_t t115 = 4;

    t115 = ((x461!=x462)/(x463|x464));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = 1;
	int64_t x466 = -1LL;
	uint16_t x468 = 48U;

    t116 = ((x465!=x466)/(x467|x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 25580610U;
	uint32_t x470 = 4014566U;
	static int64_t x471 = INT64_MIN;
	static int8_t x472 = -1;
	static volatile int64_t t117 = 2670130LL;

    t117 = ((x469!=x470)/(x471|x472));

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -1;
	int8_t x474 = INT8_MIN;
	int16_t x475 = -41;
	int16_t x476 = INT16_MIN;
	int32_t t118 = 3;

    t118 = ((x473!=x474)/(x475|x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = 5U;
	static int8_t x478 = -1;
	int16_t x479 = -1;
	static int64_t x480 = INT64_MAX;
	int64_t t119 = -8523738591021734LL;

    t119 = ((x477!=x478)/(x479|x480));

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x481 = INT32_MIN;
	int64_t x484 = -93817325706493335LL;
	volatile int64_t t120 = -845349LL;

    t120 = ((x481!=x482)/(x483|x484));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x485 = INT8_MAX;
	volatile uint32_t x486 = 136U;
	static int32_t x487 = 64;
	int8_t x488 = INT8_MIN;
	volatile int32_t t121 = -7544080;

    t121 = ((x485!=x486)/(x487|x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x489 = 127U;
	volatile int8_t x490 = -1;
	volatile int64_t x491 = -1LL;
	int64_t t122 = 2958197297245985782LL;

    t122 = ((x489!=x490)/(x491|x492));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = 1U;
	uint64_t x495 = 0LLU;
	uint64_t t123 = 794334141597487LLU;

    t123 = ((x493!=x494)/(x495|x496));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x497 = -7126880369357LL;
	volatile uint32_t x498 = 22U;
	volatile int32_t t124 = -16123824;

    t124 = ((x497!=x498)/(x499|x500));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x503 = -1;
	int8_t x504 = 21;
	int32_t t125 = 97;

    t125 = ((x501!=x502)/(x503|x504));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = 6U;
	volatile int32_t x507 = -1;
	volatile int32_t t126 = -11199104;

    t126 = ((x505!=x506)/(x507|x508));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 1675093517658674LLU;
	int32_t x510 = 293867;
	uint16_t x512 = 1133U;

    t127 = ((x509!=x510)/(x511|x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x513 = UINT16_MAX;
	volatile int8_t x514 = -1;
	int32_t x515 = -1;
	uint32_t x516 = 1U;
	uint32_t t128 = 20817U;

    t128 = ((x513!=x514)/(x515|x516));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x517 = INT8_MIN;
	uint64_t x518 = 2638LLU;
	volatile int16_t x519 = -9086;
	int32_t x520 = INT32_MAX;
	int32_t t129 = 6861;

    t129 = ((x517!=x518)/(x519|x520));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x521 = 1317U;
	static volatile int8_t x522 = -1;
	uint16_t x523 = 540U;
	static uint8_t x524 = UINT8_MAX;

    t130 = ((x521!=x522)/(x523|x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x526 = -5034714803028LL;
	static uint64_t x527 = 181725860897563LLU;
	int16_t x528 = INT16_MIN;
	volatile uint64_t t131 = 73739252442518266LLU;

    t131 = ((x525!=x526)/(x527|x528));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = -1;
	static int8_t x530 = -1;
	int8_t x531 = INT8_MIN;
	int64_t t132 = -973895268059016805LL;

    t132 = ((x529!=x530)/(x531|x532));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = 32272U;
	static int32_t x534 = INT32_MIN;
	int16_t x535 = -2;
	uint64_t x536 = UINT64_MAX;
	volatile uint64_t t133 = 4LLU;

    t133 = ((x533!=x534)/(x535|x536));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = -168334142;
	int16_t x538 = INT16_MAX;
	static volatile int16_t x539 = INT16_MIN;
	volatile int8_t x540 = -2;
	int32_t t134 = -17;

    t134 = ((x537!=x538)/(x539|x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = INT64_MAX;
	int64_t x543 = -1LL;
	int8_t x544 = INT8_MIN;
	int64_t t135 = -894256LL;

    t135 = ((x541!=x542)/(x543|x544));

    if (t135 != -1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = 1294565U;
	int16_t x547 = -1;
	volatile int32_t t136 = -10906514;

    t136 = ((x545!=x546)/(x547|x548));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    

    t137 = ((x549!=x550)/(x551|x552));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MIN;
	int8_t x554 = -1;
	static volatile int64_t x555 = INT64_MIN;
	static int64_t x556 = -1LL;
	static volatile int64_t t138 = 41211LL;

    t138 = ((x553!=x554)/(x555|x556));

    if (t138 != -1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MIN;
	int8_t x558 = 0;
	volatile int64_t x559 = -1LL;
	static int16_t x560 = 282;
	volatile int64_t t139 = -13860514LL;

    t139 = ((x557!=x558)/(x559|x560));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x561 = 1590629LLU;
	uint64_t x562 = 28059120LLU;
	static int16_t x563 = 5;
	int16_t x564 = INT16_MIN;
	int32_t t140 = -55601;

    t140 = ((x561!=x562)/(x563|x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x565 = INT8_MAX;
	int8_t x567 = 15;
	int64_t x568 = 11658630981200925LL;
	volatile int64_t t141 = 246756522LL;

    t141 = ((x565!=x566)/(x567|x568));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x569 = INT64_MAX;
	static int16_t x571 = INT16_MIN;
	int32_t x572 = 124;
	volatile int32_t t142 = 160414;

    t142 = ((x569!=x570)/(x571|x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x574 = 1809355LLU;
	uint32_t x575 = 417U;
	uint64_t x576 = UINT64_MAX;
	volatile uint64_t t143 = 115054667LLU;

    t143 = ((x573!=x574)/(x575|x576));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = 81U;
	static int16_t x579 = 4480;
	uint64_t x580 = 2LLU;
	volatile uint64_t t144 = 706LLU;

    t144 = ((x577!=x578)/(x579|x580));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MIN;
	volatile int16_t x582 = INT16_MAX;
	int64_t x583 = INT64_MAX;
	uint32_t x584 = 459125285U;

    t145 = ((x581!=x582)/(x583|x584));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = UINT64_MAX;
	volatile int32_t x586 = INT32_MIN;
	static int64_t x587 = INT64_MAX;
	int32_t x588 = -117616;
	volatile int64_t t146 = -1942218830035123338LL;

    t146 = ((x585!=x586)/(x587|x588));

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MIN;
	int64_t x591 = -8994LL;
	int16_t x592 = -1;
	static int64_t t147 = 15LL;

    t147 = ((x589!=x590)/(x591|x592));

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x595 = -669;
	uint8_t x596 = 54U;
	volatile int32_t t148 = -150;

    t148 = ((x593!=x594)/(x595|x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x597 = UINT8_MAX;
	volatile int16_t x598 = -2858;
	uint16_t x599 = UINT16_MAX;
	static int16_t x600 = INT16_MAX;
	int32_t t149 = -198647;

    t149 = ((x597!=x598)/(x599|x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = UINT32_MAX;
	uint64_t x602 = 496743644026364220LLU;
	uint16_t x603 = 10180U;

    t150 = ((x601!=x602)/(x603|x604));

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x605 = 9589;
	uint32_t x606 = 243U;
	volatile uint16_t x607 = UINT16_MAX;
	int64_t x608 = 3241131856898376LL;
	int64_t t151 = 58604723338450LL;

    t151 = ((x605!=x606)/(x607|x608));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x609 = 9815323U;
	uint32_t x610 = UINT32_MAX;
	volatile int32_t x611 = 4888;
	static volatile uint64_t x612 = UINT64_MAX;
	static volatile uint64_t t152 = 2084606972925535LLU;

    t152 = ((x609!=x610)/(x611|x612));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = 408U;
	static int32_t x614 = INT32_MIN;
	uint32_t x615 = 13118U;
	static volatile uint32_t t153 = 22862U;

    t153 = ((x613!=x614)/(x615|x616));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x618 = -1078503LL;
	static volatile int8_t x619 = INT8_MAX;
	int32_t t154 = 7856;

    t154 = ((x617!=x618)/(x619|x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = -1LL;
	int64_t x622 = -1LL;
	uint8_t x623 = UINT8_MAX;
	static volatile int64_t x624 = INT64_MAX;
	int64_t t155 = 6484102753367651LL;

    t155 = ((x621!=x622)/(x623|x624));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x625 = -1;
	int8_t x627 = -2;
	uint16_t x628 = 6U;

    t156 = ((x625!=x626)/(x627|x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = -2;
	volatile int64_t x630 = -1LL;
	int8_t x631 = INT8_MIN;
	int8_t x632 = -1;
	int32_t t157 = -4;

    t157 = ((x629!=x630)/(x631|x632));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x634 = -6323LL;
	volatile uint8_t x635 = 1U;
	uint32_t x636 = 1435U;
	uint32_t t158 = 20129517U;

    t158 = ((x633!=x634)/(x635|x636));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MAX;
	int16_t x638 = INT16_MIN;
	uint16_t x639 = UINT16_MAX;
	static volatile int8_t x640 = INT8_MIN;
	int32_t t159 = -734089;

    t159 = ((x637!=x638)/(x639|x640));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x642 = INT8_MAX;
	static int64_t x643 = 5948LL;
	int16_t x644 = INT16_MIN;

    t160 = ((x641!=x642)/(x643|x644));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int32_t x646 = -114694;
	static volatile int64_t x647 = 5661LL;
	volatile int64_t t161 = 2LL;

    t161 = ((x645!=x646)/(x647|x648));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = 1U;
	int8_t x650 = INT8_MIN;
	int16_t x651 = INT16_MIN;
	int16_t x652 = 18;
	static int32_t t162 = -36;

    t162 = ((x649!=x650)/(x651|x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x654 = 1793971183880097690LLU;
	uint32_t x655 = UINT32_MAX;
	volatile int8_t x656 = INT8_MIN;
	uint32_t t163 = 54817577U;

    t163 = ((x653!=x654)/(x655|x656));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x657 = 44U;
	int16_t x660 = INT16_MIN;
	volatile int64_t t164 = 1LL;

    t164 = ((x657!=x658)/(x659|x660));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = UINT16_MAX;
	uint32_t x662 = 1477U;
	static uint8_t x663 = 31U;
	volatile int64_t x664 = -3240475478LL;

    t165 = ((x661!=x662)/(x663|x664));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x665 = 1U;
	int64_t x666 = -1LL;
	volatile uint64_t x668 = 12242LLU;

    t166 = ((x665!=x666)/(x667|x668));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x670 = 1996956256LLU;
	uint8_t x671 = UINT8_MAX;
	int64_t x672 = INT64_MAX;
	volatile int64_t t167 = -827577230087786LL;

    t167 = ((x669!=x670)/(x671|x672));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x673 = UINT32_MAX;
	static int8_t x675 = -1;
	int32_t x676 = INT32_MIN;
	volatile int32_t t168 = -736172;

    t168 = ((x673!=x674)/(x675|x676));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = 14070U;
	int64_t x678 = INT64_MIN;
	int16_t x679 = 442;

    t169 = ((x677!=x678)/(x679|x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	uint16_t x682 = 16U;
	uint8_t x683 = 3U;
	int8_t x684 = INT8_MAX;
	int32_t t170 = 3980;

    t170 = ((x681!=x682)/(x683|x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = 1245;
	int8_t x686 = INT8_MAX;
	uint64_t x687 = UINT64_MAX;
	int32_t x688 = -48745624;
	volatile uint64_t t171 = 7009673285LLU;

    t171 = ((x685!=x686)/(x687|x688));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x689 = INT64_MIN;
	static int32_t x690 = INT32_MIN;
	int8_t x691 = -16;
	uint8_t x692 = 28U;
	int32_t t172 = 0;

    t172 = ((x689!=x690)/(x691|x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = -1;
	static int16_t x694 = INT16_MIN;
	volatile int8_t x695 = INT8_MIN;

    t173 = ((x693!=x694)/(x695|x696));

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x697 = -1;
	uint16_t x698 = 652U;
	static uint16_t x699 = UINT16_MAX;
	int16_t x700 = INT16_MAX;
	int32_t t174 = -2707;

    t174 = ((x697!=x698)/(x699|x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x701 = INT8_MAX;
	uint32_t x702 = 477582642U;

    t175 = ((x701!=x702)/(x703|x704));

    if (t175 != -1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x707 = INT64_MIN;
	int64_t x708 = -1LL;
	int64_t t176 = -222864210862LL;

    t176 = ((x705!=x706)/(x707|x708));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = -7713736554LL;
	static int16_t x710 = 28;
	static int8_t x711 = INT8_MAX;
	static int8_t x712 = -1;
	volatile int32_t t177 = -1736;

    t177 = ((x709!=x710)/(x711|x712));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = -1;
	int8_t x714 = 4;
	int8_t x715 = -1;
	static uint8_t x716 = 72U;
	static int32_t t178 = -40717;

    t178 = ((x713!=x714)/(x715|x716));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x719 = 54790LLU;
	int16_t x720 = -1;

    t179 = ((x717!=x718)/(x719|x720));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = -1;
	int8_t x722 = -61;
	int8_t x723 = INT8_MIN;
	static int32_t x724 = -11213101;

    t180 = ((x721!=x722)/(x723|x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = -58;
	int32_t x726 = INT32_MIN;
	volatile int32_t x728 = -2111;

    t181 = ((x725!=x726)/(x727|x728));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x729 = UINT64_MAX;
	uint16_t x730 = UINT16_MAX;
	uint16_t x731 = 0U;
	static int64_t x732 = INT64_MIN;
	volatile int64_t t182 = 3287LL;

    t182 = ((x729!=x730)/(x731|x732));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x733 = INT32_MIN;
	volatile uint32_t x734 = 6621U;
	static uint32_t x735 = 345U;
	uint8_t x736 = 1U;
	volatile uint32_t t183 = 76137875U;

    t183 = ((x733!=x734)/(x735|x736));

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x738 = INT64_MIN;
	static int16_t x739 = -1;
	int32_t t184 = -1;

    t184 = ((x737!=x738)/(x739|x740));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MIN;
	volatile uint16_t x742 = 1U;
	uint16_t x743 = UINT16_MAX;
	static int8_t x744 = -15;

    t185 = ((x741!=x742)/(x743|x744));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = 11U;
	volatile int8_t x746 = -1;
	static int64_t x747 = 1544109702922380LL;

    t186 = ((x745!=x746)/(x747|x748));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = 2065LLU;
	volatile int64_t x752 = -1LL;
	volatile int64_t t187 = -165228LL;

    t187 = ((x749!=x750)/(x751|x752));

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x753 = 5U;
	int8_t x755 = INT8_MIN;
	uint32_t x756 = UINT32_MAX;
	static volatile uint32_t t188 = 949648598U;

    t188 = ((x753!=x754)/(x755|x756));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 14LLU;
	int16_t x758 = INT16_MIN;
	static volatile uint32_t x760 = 69308730U;
	static volatile uint64_t t189 = 3483LLU;

    t189 = ((x757!=x758)/(x759|x760));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x762 = 6U;
	int64_t x763 = 418203190LL;
	static uint64_t x764 = UINT64_MAX;
	static volatile uint64_t t190 = 132728144288749LLU;

    t190 = ((x761!=x762)/(x763|x764));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = 6U;
	volatile int64_t x767 = 5944935LL;
	int32_t x768 = -1;
	volatile int64_t t191 = 313LL;

    t191 = ((x765!=x766)/(x767|x768));

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MIN;
	int64_t x771 = -7795732418809LL;
	int64_t x772 = 26681837LL;
	static volatile int64_t t192 = 215441LL;

    t192 = ((x769!=x770)/(x771|x772));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x773 = UINT16_MAX;
	int16_t x774 = INT16_MAX;
	uint8_t x775 = UINT8_MAX;
	int8_t x776 = 0;
	int32_t t193 = 40951278;

    t193 = ((x773!=x774)/(x775|x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = -24;
	int16_t x778 = INT16_MIN;
	int16_t x780 = -113;
	volatile int32_t t194 = 283795;

    t194 = ((x777!=x778)/(x779|x780));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x782 = 429952850LLU;
	int32_t x783 = INT32_MIN;
	volatile uint16_t x784 = 22U;
	int32_t t195 = 65;

    t195 = ((x781!=x782)/(x783|x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x785 = 193;
	static int32_t x786 = -212182;
	static int32_t x787 = -551;
	volatile int32_t t196 = -147;

    t196 = ((x785!=x786)/(x787|x788));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = -1LL;
	static int64_t x790 = -1LL;
	int32_t x791 = INT32_MIN;
	static uint64_t x792 = UINT64_MAX;
	static volatile uint64_t t197 = 5LLU;

    t197 = ((x789!=x790)/(x791|x792));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x793 = INT64_MIN;
	int16_t x795 = INT16_MIN;
	volatile int32_t t198 = -7009643;

    t198 = ((x793!=x794)/(x795|x796));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 20056U;
	static int8_t x800 = -22;
	volatile int32_t t199 = -7660;

    t199 = ((x797!=x798)/(x799|x800));

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


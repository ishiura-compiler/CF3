
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

static int64_t x21 = -1LL;
static int8_t x25 = INT8_MIN;
volatile int8_t x29 = -7;
uint32_t x37 = 57735U;
uint32_t x41 = 1900581314U;
int32_t x48 = -3816;
uint64_t t10 = 14450110566615411LLU;
static uint64_t x61 = 436LLU;
volatile int32_t t13 = -34392091;
int64_t x65 = -3809979803LL;
volatile int16_t x75 = -1;
int32_t x80 = INT32_MIN;
int32_t x83 = -1;
uint32_t x85 = 15176925U;
static uint64_t x86 = UINT64_MAX;
volatile int8_t x92 = 1;
volatile int64_t t21 = 45993373LL;
static uint64_t x98 = 180260669773408729LLU;
volatile int32_t x99 = INT32_MIN;
uint64_t x110 = UINT64_MAX;
int32_t x111 = -7;
int16_t x112 = 11348;
int32_t t25 = -15021555;
uint64_t x126 = UINT64_MAX;
volatile int8_t x144 = -33;
int32_t x145 = INT32_MAX;
volatile int16_t x146 = -1;
int64_t x147 = -1412798887441354126LL;
int64_t x148 = INT64_MIN;
volatile int64_t t30 = -8154075229LL;
static uint64_t x151 = 4LLU;
static int16_t x158 = INT16_MIN;
static int64_t t34 = 861732792LL;
int32_t x182 = INT32_MAX;
int16_t x183 = 223;
uint8_t x190 = 22U;
int8_t x195 = INT8_MIN;
static int32_t x205 = -181777;
static volatile uint64_t x206 = UINT64_MAX;
volatile int64_t x207 = -1LL;
static int16_t x214 = INT16_MIN;
uint16_t x215 = 95U;
volatile uint8_t x220 = UINT8_MAX;
int32_t x230 = INT32_MIN;
uint32_t x238 = 40947U;
uint32_t x239 = UINT32_MAX;
static int32_t x240 = -1;
volatile uint32_t t52 = 1656599449U;
uint32_t x245 = UINT32_MAX;
uint64_t x254 = UINT64_MAX;
uint32_t x279 = UINT32_MAX;
volatile uint32_t t61 = 173774093U;
int8_t x286 = INT8_MIN;
volatile int32_t t63 = -518820111;
uint32_t x291 = 1843178987U;
int32_t t65 = -6692;
uint64_t x302 = 516471996073LLU;
uint16_t x303 = UINT16_MAX;
uint8_t x304 = UINT8_MAX;
int32_t x306 = INT32_MIN;
int64_t t68 = 3569367895LL;
int64_t x312 = -1LL;
volatile int64_t x313 = -30638LL;
static uint16_t x314 = UINT16_MAX;
uint64_t x323 = 8523151994532744357LLU;
int32_t x324 = -2854;
static volatile int32_t x329 = -1410;
int8_t x338 = INT8_MAX;
volatile int32_t x340 = -7102282;
volatile uint16_t x345 = 134U;
volatile uint16_t x347 = UINT16_MAX;
uint64_t x353 = 760LLU;
uint32_t x364 = 43445682U;
int8_t x371 = INT8_MIN;
int16_t x375 = -17;
volatile uint32_t x381 = 19U;
uint64_t x382 = UINT64_MAX;
int64_t x383 = INT64_MIN;
int64_t x394 = INT64_MIN;
uint16_t x400 = UINT16_MAX;
int16_t x409 = INT16_MIN;
int8_t x411 = -1;
uint64_t x413 = 11537060LLU;
uint64_t x417 = UINT64_MAX;
int32_t x418 = INT32_MIN;
uint64_t x424 = 21703893785691470LLU;
volatile uint64_t t95 = 2168648LLU;
static volatile int8_t x425 = INT8_MAX;
static int32_t x427 = -1;
uint16_t x428 = 891U;
int16_t x429 = 385;
static int16_t x430 = -1;
uint64_t x435 = 5571288536768049LLU;
int32_t x440 = -1374947;
uint8_t x441 = 5U;
volatile int64_t x443 = -1LL;
volatile uint64_t t100 = 145137157LLU;
int16_t x445 = INT16_MAX;
int64_t x446 = INT64_MIN;
static int16_t x452 = INT16_MAX;
uint8_t x454 = 13U;
volatile int32_t t104 = -109;
int8_t x462 = 3;
volatile uint32_t x471 = 64096117U;
static int64_t x476 = 9030278705465664LL;
int64_t x480 = 2047582556LL;
volatile int64_t t108 = 126529965395913360LL;
int16_t x482 = INT16_MAX;
static volatile uint8_t x493 = 6U;
static int8_t x494 = INT8_MIN;
static volatile int32_t t112 = 715;
volatile int16_t x501 = -2372;
static volatile int16_t x505 = INT16_MAX;
int32_t t116 = -39135;
uint64_t x519 = UINT64_MAX;
static uint64_t x524 = 9128LLU;
int16_t x527 = INT16_MAX;
int32_t x545 = -1;
int64_t x563 = INT64_MAX;
uint16_t x564 = 5U;
int32_t x571 = INT32_MIN;
static volatile int32_t t130 = 2960;
static volatile int16_t x575 = INT16_MIN;
static int16_t x577 = INT16_MIN;
volatile uint32_t x579 = UINT32_MAX;
int16_t x586 = -1;
static uint8_t x588 = 1U;
int32_t t134 = 28;
int16_t x590 = 61;
int16_t x597 = -6;
static int64_t x599 = -8643385331905LL;
int8_t x612 = 1;
volatile uint16_t x619 = 2457U;
int64_t t141 = 63212844314856LL;
volatile uint64_t x622 = UINT64_MAX;
uint16_t x626 = UINT16_MAX;
uint8_t x628 = UINT8_MAX;
static uint64_t t143 = 69LLU;
static int8_t x629 = INT8_MIN;
volatile int32_t t145 = -21275;
int16_t x639 = -1;
int8_t x645 = INT8_MIN;
static int16_t x656 = INT16_MIN;
int16_t x661 = INT16_MAX;
uint8_t x669 = UINT8_MAX;
int32_t t151 = 158264;
int16_t x690 = INT16_MIN;
int32_t x691 = INT32_MIN;
volatile uint32_t t154 = 23418532U;
static uint32_t x698 = 376372655U;
uint8_t x699 = UINT8_MAX;
static int64_t x705 = 1LL;
volatile int16_t x706 = -1;
volatile uint8_t x707 = UINT8_MAX;
static int8_t x708 = -2;
uint32_t x712 = 1366431481U;
int16_t x714 = 56;
int8_t x715 = INT8_MAX;
static int8_t x716 = -1;
int32_t t160 = -9886;
static int8_t x724 = -1;
uint64_t t163 = 11633825LLU;
volatile uint8_t x733 = 93U;
volatile uint32_t x735 = 402635U;
int8_t x748 = 17;
volatile uint32_t t165 = 5U;
static volatile int16_t x753 = 1859;
int32_t x756 = -15800048;
int8_t x758 = 0;
static int8_t x779 = 62;
int64_t t173 = 295LL;
static int8_t x788 = INT8_MIN;
int32_t t174 = 6553067;
volatile int8_t x790 = INT8_MIN;
volatile int64_t t176 = 112293LL;
uint32_t x818 = 2442781U;
static volatile int32_t t182 = 1;
int8_t x829 = -1;
volatile uint32_t x836 = 7U;
int64_t x848 = -1LL;
static volatile int64_t x850 = 20916LL;
int64_t x851 = 39LL;
int16_t x865 = INT16_MAX;
static uint64_t x866 = UINT64_MAX;
int32_t t192 = -87749;
uint64_t x880 = UINT64_MAX;
int8_t x881 = 3;
int64_t x883 = -1LL;
static int16_t x888 = INT16_MIN;
int32_t t195 = -1;
static int8_t x889 = INT8_MAX;
static int16_t x899 = INT16_MIN;
static int8_t x900 = INT8_MIN;
int64_t x902 = INT64_MAX;
int64_t t198 = 489797909LL;


void f0(void) {
    	int8_t x5 = INT8_MIN;
	int64_t x6 = 198LL;
	volatile int8_t x7 = INT8_MIN;
	int64_t x8 = INT64_MIN;
	static volatile int64_t t0 = 4302838LL;

    t0 = ((x5>x6)&(x7-x8));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = -5;
	uint32_t x10 = 2390U;
	uint32_t x11 = UINT32_MAX;
	int32_t x12 = INT32_MIN;
	uint32_t t1 = 2721430U;

    t1 = ((x9>x10)&(x11-x12));

    if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x13 = INT64_MAX;
	volatile int64_t x14 = INT64_MIN;
	int8_t x15 = INT8_MIN;
	static int8_t x16 = INT8_MAX;
	volatile int32_t t2 = -107;

    t2 = ((x13>x14)&(x15-x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = -1LL;
	uint8_t x18 = UINT8_MAX;
	int64_t x19 = INT64_MIN;
	volatile int32_t x20 = -1;
	int64_t t3 = 36LL;

    t3 = ((x17>x18)&(x19-x20));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x22 = 7;
	uint16_t x23 = UINT16_MAX;
	uint32_t x24 = UINT32_MAX;
	volatile uint32_t t4 = 4774475U;

    t4 = ((x21>x22)&(x23-x24));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x26 = UINT16_MAX;
	int64_t x27 = INT64_MIN;
	static int32_t x28 = -1;
	volatile int64_t t5 = 1147795173620976LL;

    t5 = ((x25>x26)&(x27-x28));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x30 = -1;
	static uint8_t x31 = 125U;
	static uint16_t x32 = 248U;
	int32_t t6 = 111;

    t6 = ((x29>x30)&(x31-x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x38 = -1;
	int16_t x39 = INT16_MIN;
	uint8_t x40 = 3U;
	int32_t t7 = 10088;

    t7 = ((x37>x38)&(x39-x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x42 = INT64_MAX;
	uint16_t x43 = 2U;
	uint64_t x44 = 565408386LLU;
	uint64_t t8 = 7621LLU;

    t8 = ((x41>x42)&(x43-x44));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = 19723;
	uint64_t x46 = 65976LLU;
	static uint8_t x47 = 114U;
	int32_t t9 = -47395489;

    t9 = ((x45>x46)&(x47-x48));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x49 = 5029LLU;
	int32_t x50 = INT32_MAX;
	static uint64_t x51 = 1239256121963LLU;
	static int32_t x52 = INT32_MIN;

    t10 = ((x49>x50)&(x51-x52));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x53 = -1;
	volatile int8_t x54 = -1;
	uint16_t x55 = 235U;
	uint32_t x56 = 249471U;
	uint32_t t11 = 857U;

    t11 = ((x53>x54)&(x55-x56));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x57 = -1LL;
	int16_t x58 = INT16_MAX;
	int16_t x59 = INT16_MAX;
	uint64_t x60 = 484993700266643679LLU;
	uint64_t t12 = 6592361042LLU;

    t12 = ((x57>x58)&(x59-x60));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x62 = 0;
	static int8_t x63 = 6;
	volatile int16_t x64 = INT16_MIN;

    t13 = ((x61>x62)&(x63-x64));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x66 = 174885006U;
	uint8_t x67 = 54U;
	uint64_t x68 = 54LLU;
	static volatile uint64_t t14 = 1702165414348LLU;

    t14 = ((x65>x66)&(x67-x68));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = 9192804LL;
	int8_t x70 = 12;
	int64_t x71 = INT64_MIN;
	volatile int16_t x72 = INT16_MIN;
	int64_t t15 = 1706LL;

    t15 = ((x69>x70)&(x71-x72));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x73 = INT32_MIN;
	uint8_t x74 = 1U;
	uint32_t x76 = 6400U;
	uint32_t t16 = 1U;

    t16 = ((x73>x74)&(x75-x76));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x77 = -210693;
	int32_t x78 = -1;
	int16_t x79 = -4098;
	volatile int32_t t17 = -14927;

    t17 = ((x77>x78)&(x79-x80));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x81 = INT16_MIN;
	static int16_t x82 = INT16_MIN;
	uint16_t x84 = 1032U;
	int32_t t18 = -1;

    t18 = ((x81>x82)&(x83-x84));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x87 = INT8_MAX;
	int8_t x88 = -1;
	volatile int32_t t19 = -2;

    t19 = ((x85>x86)&(x87-x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x89 = -1;
	static int32_t x90 = 20;
	volatile int8_t x91 = -30;
	volatile int32_t t20 = -323;

    t20 = ((x89>x90)&(x91-x92));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x93 = 0;
	volatile int64_t x94 = -851162655982770LL;
	int64_t x95 = -768841275230LL;
	volatile int8_t x96 = 2;

    t21 = ((x93>x94)&(x95-x96));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x97 = 114593;
	int64_t x100 = -1LL;
	static int64_t t22 = -821491161220124LL;

    t22 = ((x97>x98)&(x99-x100));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x101 = UINT8_MAX;
	int8_t x102 = INT8_MIN;
	uint16_t x103 = 12U;
	int32_t x104 = 3889;
	volatile int32_t t23 = 496934;

    t23 = ((x101>x102)&(x103-x104));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x105 = UINT64_MAX;
	volatile int64_t x106 = INT64_MIN;
	volatile int8_t x107 = INT8_MIN;
	volatile int16_t x108 = 0;
	int32_t t24 = 7650;

    t24 = ((x105>x106)&(x107-x108));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x109 = UINT16_MAX;

    t25 = ((x109>x110)&(x111-x112));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x121 = -1;
	int64_t x122 = -1LL;
	int64_t x123 = INT64_MAX;
	volatile uint32_t x124 = 49104U;
	volatile int64_t t26 = -487833195LL;

    t26 = ((x121>x122)&(x123-x124));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x125 = UINT8_MAX;
	int8_t x127 = -1;
	int8_t x128 = INT8_MIN;
	int32_t t27 = 27177333;

    t27 = ((x125>x126)&(x127-x128));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x129 = 1543;
	int16_t x130 = 24;
	static int8_t x131 = INT8_MAX;
	int8_t x132 = -1;
	volatile int32_t t28 = 337954;

    t28 = ((x129>x130)&(x131-x132));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x141 = -207843;
	int32_t x142 = 1887;
	int32_t x143 = -1;
	int32_t t29 = 59078926;

    t29 = ((x141>x142)&(x143-x144));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    

    t30 = ((x145>x146)&(x147-x148));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x149 = -1;
	uint16_t x150 = 454U;
	int32_t x152 = -30;
	static uint64_t t31 = 465740530571770649LLU;

    t31 = ((x149>x150)&(x151-x152));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x153 = INT64_MIN;
	int16_t x154 = -1;
	uint16_t x155 = 43U;
	volatile int8_t x156 = 1;
	volatile int32_t t32 = 303430;

    t32 = ((x153>x154)&(x155-x156));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x157 = -1;
	static int8_t x159 = 16;
	static volatile uint64_t x160 = 17519LLU;
	uint64_t t33 = 119874942LLU;

    t33 = ((x157>x158)&(x159-x160));

    if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x161 = INT16_MIN;
	uint8_t x162 = 12U;
	volatile int64_t x163 = INT64_MIN;
	volatile int32_t x164 = INT32_MIN;

    t34 = ((x161>x162)&(x163-x164));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x165 = 10LLU;
	int32_t x166 = INT32_MIN;
	int8_t x167 = -1;
	uint8_t x168 = 1U;
	volatile int32_t t35 = -63;

    t35 = ((x165>x166)&(x167-x168));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x169 = 5;
	uint32_t x170 = 16103U;
	int8_t x171 = INT8_MAX;
	static uint8_t x172 = UINT8_MAX;
	int32_t t36 = 429;

    t36 = ((x169>x170)&(x171-x172));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x173 = -3;
	static int64_t x174 = INT64_MIN;
	volatile int8_t x175 = INT8_MAX;
	int8_t x176 = INT8_MAX;
	volatile int32_t t37 = 0;

    t37 = ((x173>x174)&(x175-x176));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x177 = -1;
	uint32_t x178 = UINT32_MAX;
	uint64_t x179 = 699LLU;
	uint16_t x180 = UINT16_MAX;
	uint64_t t38 = 6850018066828LLU;

    t38 = ((x177>x178)&(x179-x180));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x181 = -930178745;
	int8_t x184 = INT8_MIN;
	static volatile int32_t t39 = 235;

    t39 = ((x181>x182)&(x183-x184));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x185 = 207;
	int16_t x186 = 7;
	static uint8_t x187 = UINT8_MAX;
	int16_t x188 = INT16_MAX;
	static volatile int32_t t40 = 868250;

    t40 = ((x185>x186)&(x187-x188));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x189 = INT16_MIN;
	int32_t x191 = -1;
	int16_t x192 = -1;
	volatile int32_t t41 = 3087398;

    t41 = ((x189>x190)&(x191-x192));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x193 = UINT8_MAX;
	uint8_t x194 = 2U;
	uint16_t x196 = UINT16_MAX;
	int32_t t42 = -502252;

    t42 = ((x193>x194)&(x195-x196));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x197 = -27;
	uint16_t x198 = 13762U;
	int16_t x199 = INT16_MAX;
	int16_t x200 = INT16_MAX;
	static int32_t t43 = -6469671;

    t43 = ((x197>x198)&(x199-x200));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x201 = UINT64_MAX;
	int32_t x202 = INT32_MIN;
	static int32_t x203 = -1;
	int8_t x204 = -1;
	int32_t t44 = -34;

    t44 = ((x201>x202)&(x203-x204));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x208 = 1440;
	volatile int64_t t45 = 2531181962LL;

    t45 = ((x205>x206)&(x207-x208));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x209 = UINT64_MAX;
	volatile int16_t x210 = -1;
	int64_t x211 = -2658LL;
	int8_t x212 = INT8_MIN;
	static int64_t t46 = 420728280984316LL;

    t46 = ((x209>x210)&(x211-x212));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x213 = UINT8_MAX;
	int64_t x216 = 2924518785LL;
	volatile int64_t t47 = -16672883LL;

    t47 = ((x213>x214)&(x215-x216));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x217 = INT64_MAX;
	int8_t x218 = -9;
	int32_t x219 = 156200;
	int32_t t48 = 26120;

    t48 = ((x217>x218)&(x219-x220));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x225 = INT32_MIN;
	uint8_t x226 = 74U;
	int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MAX;
	int32_t t49 = 5;

    t49 = ((x225>x226)&(x227-x228));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x229 = INT64_MIN;
	uint8_t x231 = 0U;
	static uint64_t x232 = 28679148LLU;
	volatile uint64_t t50 = 236770LLU;

    t50 = ((x229>x230)&(x231-x232));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x233 = -1;
	volatile int32_t x234 = INT32_MIN;
	uint8_t x235 = 0U;
	int16_t x236 = -18;
	int32_t t51 = -2128;

    t51 = ((x233>x234)&(x235-x236));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x237 = UINT32_MAX;

    t52 = ((x237>x238)&(x239-x240));

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x241 = 105LLU;
	static volatile int16_t x242 = 114;
	static int64_t x243 = -1LL;
	volatile uint8_t x244 = UINT8_MAX;
	int64_t t53 = 2811910268966699513LL;

    t53 = ((x241>x242)&(x243-x244));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x246 = UINT8_MAX;
	static int16_t x247 = INT16_MIN;
	int64_t x248 = -1LL;
	int64_t t54 = -4263264380365900LL;

    t54 = ((x245>x246)&(x247-x248));

    if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x249 = 15291424182933LLU;
	static int64_t x250 = 1LL;
	int16_t x251 = -5;
	uint64_t x252 = UINT64_MAX;
	uint64_t t55 = 3339447LLU;

    t55 = ((x249>x250)&(x251-x252));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x253 = UINT16_MAX;
	uint32_t x255 = UINT32_MAX;
	volatile int32_t x256 = INT32_MAX;
	uint32_t t56 = 152U;

    t56 = ((x253>x254)&(x255-x256));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x257 = UINT16_MAX;
	int8_t x258 = INT8_MIN;
	int16_t x259 = 43;
	int64_t x260 = 1984796504095LL;
	int64_t t57 = -25462795LL;

    t57 = ((x257>x258)&(x259-x260));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint8_t x265 = 51U;
	static volatile int64_t x266 = -306LL;
	uint8_t x267 = UINT8_MAX;
	int8_t x268 = -1;
	volatile int32_t t58 = -99;

    t58 = ((x265>x266)&(x267-x268));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x269 = 90U;
	int16_t x270 = -1;
	uint64_t x271 = UINT64_MAX;
	int32_t x272 = INT32_MAX;
	static volatile uint64_t t59 = 26564102296278LLU;

    t59 = ((x269>x270)&(x271-x272));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x273 = -6;
	int64_t x274 = INT64_MIN;
	int16_t x275 = -1;
	volatile uint8_t x276 = 98U;
	int32_t t60 = -768;

    t60 = ((x273>x274)&(x275-x276));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x277 = INT8_MIN;
	uint16_t x278 = 539U;
	int16_t x280 = -47;

    t61 = ((x277>x278)&(x279-x280));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x281 = -303726949LL;
	static uint32_t x282 = 6144U;
	int8_t x283 = INT8_MIN;
	uint8_t x284 = 0U;
	int32_t t62 = 279650;

    t62 = ((x281>x282)&(x283-x284));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x285 = -1;
	static uint8_t x287 = 12U;
	volatile int8_t x288 = -1;

    t63 = ((x285>x286)&(x287-x288));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x289 = INT8_MIN;
	static int8_t x290 = INT8_MIN;
	int16_t x292 = -50;
	uint32_t t64 = 123614U;

    t64 = ((x289>x290)&(x291-x292));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x293 = INT64_MIN;
	int64_t x294 = INT64_MIN;
	static uint8_t x295 = UINT8_MAX;
	int8_t x296 = INT8_MIN;

    t65 = ((x293>x294)&(x295-x296));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x297 = INT32_MAX;
	uint64_t x298 = 1038175064053136LLU;
	int32_t x299 = INT32_MIN;
	int64_t x300 = INT64_MIN;
	int64_t t66 = 1030554882626636LL;

    t66 = ((x297>x298)&(x299-x300));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint64_t x301 = 51463LLU;
	volatile int32_t t67 = 13304;

    t67 = ((x301>x302)&(x303-x304));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x305 = UINT8_MAX;
	int32_t x307 = INT32_MIN;
	int64_t x308 = -406530453LL;

    t68 = ((x305>x306)&(x307-x308));

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x309 = UINT32_MAX;
	volatile uint16_t x310 = UINT16_MAX;
	int8_t x311 = INT8_MAX;
	static int64_t t69 = -343LL;

    t69 = ((x309>x310)&(x311-x312));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x315 = -24365885800900LL;
	volatile uint8_t x316 = 1U;
	volatile int64_t t70 = 76755254965LL;

    t70 = ((x313>x314)&(x315-x316));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x317 = UINT8_MAX;
	int8_t x318 = INT8_MIN;
	uint16_t x319 = UINT16_MAX;
	static volatile uint64_t x320 = 13839770063124LLU;
	uint64_t t71 = 47072408LLU;

    t71 = ((x317>x318)&(x319-x320));

    if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x321 = 4356;
	int16_t x322 = 24;
	volatile uint64_t t72 = 658920LLU;

    t72 = ((x321>x322)&(x323-x324));

    if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x330 = INT32_MIN;
	static int32_t x331 = -781220;
	uint16_t x332 = 176U;
	volatile int32_t t73 = 10438;

    t73 = ((x329>x330)&(x331-x332));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x333 = 234U;
	int8_t x334 = 1;
	uint16_t x335 = 11354U;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t74 = 231841444558LLU;

    t74 = ((x333>x334)&(x335-x336));

    if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x337 = 1183777LL;
	int64_t x339 = -1521987270558485LL;
	int64_t t75 = 63340357700513239LL;

    t75 = ((x337>x338)&(x339-x340));

    if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x341 = 2228U;
	int32_t x342 = INT32_MIN;
	int32_t x343 = -1;
	int32_t x344 = INT32_MIN;
	int32_t t76 = -1;

    t76 = ((x341>x342)&(x343-x344));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x346 = INT32_MIN;
	int16_t x348 = 7633;
	volatile int32_t t77 = 3;

    t77 = ((x345>x346)&(x347-x348));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x354 = INT16_MAX;
	int8_t x355 = 13;
	int16_t x356 = INT16_MAX;
	int32_t t78 = 99300787;

    t78 = ((x353>x354)&(x355-x356));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x357 = 0U;
	uint32_t x358 = 1U;
	int8_t x359 = 1;
	int16_t x360 = INT16_MIN;
	static int32_t t79 = -1;

    t79 = ((x357>x358)&(x359-x360));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x361 = 198203201;
	uint64_t x362 = 68210135583621LLU;
	static int64_t x363 = 3403938LL;
	static volatile int64_t t80 = 34306455896510074LL;

    t80 = ((x361>x362)&(x363-x364));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x365 = 2;
	int32_t x366 = INT32_MAX;
	uint8_t x367 = UINT8_MAX;
	int8_t x368 = -1;
	static int32_t t81 = 1600425;

    t81 = ((x365>x366)&(x367-x368));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x369 = INT32_MIN;
	int32_t x370 = INT32_MAX;
	volatile uint32_t x372 = 153159U;
	volatile uint32_t t82 = 141662097U;

    t82 = ((x369>x370)&(x371-x372));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x373 = -1;
	static int64_t x374 = INT64_MAX;
	static int8_t x376 = INT8_MAX;
	volatile int32_t t83 = -112;

    t83 = ((x373>x374)&(x375-x376));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x377 = INT8_MAX;
	int8_t x378 = 4;
	uint8_t x379 = UINT8_MAX;
	uint16_t x380 = 99U;
	volatile int32_t t84 = 1120;

    t84 = ((x377>x378)&(x379-x380));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x384 = INT32_MIN;
	int64_t t85 = -1788480417464435LL;

    t85 = ((x381>x382)&(x383-x384));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x385 = -1LL;
	static int32_t x386 = INT32_MIN;
	uint8_t x387 = UINT8_MAX;
	volatile int64_t x388 = INT64_MAX;
	int64_t t86 = -1665577791LL;

    t86 = ((x385>x386)&(x387-x388));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x389 = 464145940552LLU;
	int32_t x390 = INT32_MIN;
	int16_t x391 = 4076;
	int8_t x392 = INT8_MIN;
	volatile int32_t t87 = 0;

    t87 = ((x389>x390)&(x391-x392));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x393 = UINT32_MAX;
	volatile int8_t x395 = -1;
	int32_t x396 = INT32_MIN;
	int32_t t88 = 1100;

    t88 = ((x393>x394)&(x395-x396));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x397 = INT16_MAX;
	volatile int64_t x398 = INT64_MIN;
	uint32_t x399 = 555U;
	uint32_t t89 = 15045478U;

    t89 = ((x397>x398)&(x399-x400));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x401 = INT16_MIN;
	uint16_t x402 = 20560U;
	uint64_t x403 = UINT64_MAX;
	uint32_t x404 = 2569U;
	volatile uint64_t t90 = 7977LLU;

    t90 = ((x401>x402)&(x403-x404));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x405 = -1;
	int32_t x406 = INT32_MIN;
	int32_t x407 = 1024;
	uint64_t x408 = 842055LLU;
	volatile uint64_t t91 = 114785715673LLU;

    t91 = ((x405>x406)&(x407-x408));

    if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x410 = 31783977U;
	int16_t x412 = INT16_MIN;
	int32_t t92 = -888804;

    t92 = ((x409>x410)&(x411-x412));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x414 = UINT64_MAX;
	uint16_t x415 = 135U;
	int16_t x416 = -1;
	volatile int32_t t93 = 16101035;

    t93 = ((x413>x414)&(x415-x416));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x419 = -1;
	static int8_t x420 = INT8_MIN;
	static int32_t t94 = -326421;

    t94 = ((x417>x418)&(x419-x420));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x421 = INT32_MIN;
	static int8_t x422 = INT8_MAX;
	int8_t x423 = 0;

    t95 = ((x421>x422)&(x423-x424));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x426 = 1069454580;
	static int32_t t96 = -752205819;

    t96 = ((x425>x426)&(x427-x428));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x431 = -721007LL;
	uint32_t x432 = 5651646U;
	volatile int64_t t97 = -139570492600LL;

    t97 = ((x429>x430)&(x431-x432));

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x433 = 794U;
	static uint16_t x434 = 786U;
	static int16_t x436 = INT16_MAX;
	uint64_t t98 = 30156353LLU;

    t98 = ((x433>x434)&(x435-x436));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x437 = UINT16_MAX;
	volatile int32_t x438 = -5;
	int8_t x439 = INT8_MIN;
	volatile int32_t t99 = 11263;

    t99 = ((x437>x438)&(x439-x440));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x442 = 234;
	volatile uint64_t x444 = 11846448737575LLU;

    t100 = ((x441>x442)&(x443-x444));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x447 = INT16_MIN;
	volatile int64_t x448 = 6LL;
	int64_t t101 = 10242639LL;

    t101 = ((x445>x446)&(x447-x448));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x449 = 1110849842873LLU;
	int8_t x450 = 10;
	uint16_t x451 = 163U;
	int32_t t102 = 12866;

    t102 = ((x449>x450)&(x451-x452));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x453 = -20;
	int32_t x455 = -1;
	int16_t x456 = 2983;
	int32_t t103 = 860655287;

    t103 = ((x453>x454)&(x455-x456));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x457 = -166;
	uint64_t x458 = 3511526LLU;
	int32_t x459 = -1;
	volatile uint8_t x460 = UINT8_MAX;

    t104 = ((x457>x458)&(x459-x460));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x461 = INT64_MIN;
	static int16_t x463 = -2;
	static int8_t x464 = -1;
	static int32_t t105 = -1546;

    t105 = ((x461>x462)&(x463-x464));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x469 = INT64_MIN;
	int32_t x470 = INT32_MIN;
	static volatile int8_t x472 = INT8_MAX;
	volatile uint32_t t106 = 625431790U;

    t106 = ((x469>x470)&(x471-x472));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x473 = 1709776;
	int64_t x474 = INT64_MAX;
	volatile int64_t x475 = -3060293018414018LL;
	int64_t t107 = 469LL;

    t107 = ((x473>x474)&(x475-x476));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x477 = INT64_MIN;
	static uint64_t x478 = 66358206615541LLU;
	static int64_t x479 = -1LL;

    t108 = ((x477>x478)&(x479-x480));

    if (t108 != 1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x481 = UINT64_MAX;
	static volatile uint8_t x483 = 11U;
	volatile int64_t x484 = INT64_MAX;
	volatile int64_t t109 = -482706275695323LL;

    t109 = ((x481>x482)&(x483-x484));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x485 = INT32_MIN;
	int16_t x486 = -1;
	static uint64_t x487 = UINT64_MAX;
	static int64_t x488 = INT64_MIN;
	uint64_t t110 = 3388669155514769667LLU;

    t110 = ((x485>x486)&(x487-x488));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x489 = UINT8_MAX;
	int16_t x490 = INT16_MIN;
	uint8_t x491 = 13U;
	int64_t x492 = 196584675749628LL;
	volatile int64_t t111 = 68214028851LL;

    t111 = ((x489>x490)&(x491-x492));

    if (t111 != 1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x495 = 1335500;
	static volatile int16_t x496 = 33;

    t112 = ((x493>x494)&(x495-x496));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x497 = -57;
	volatile uint32_t x498 = UINT32_MAX;
	static uint32_t x499 = 288U;
	volatile uint8_t x500 = UINT8_MAX;
	static volatile uint32_t t113 = 32129736U;

    t113 = ((x497>x498)&(x499-x500));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x502 = INT64_MAX;
	volatile uint8_t x503 = 6U;
	static int8_t x504 = -1;
	volatile int32_t t114 = -471;

    t114 = ((x501>x502)&(x503-x504));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x506 = 0;
	int32_t x507 = INT32_MIN;
	static int8_t x508 = -1;
	int32_t t115 = -1473;

    t115 = ((x505>x506)&(x507-x508));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x509 = INT64_MIN;
	uint64_t x510 = UINT64_MAX;
	int32_t x511 = -1;
	uint8_t x512 = UINT8_MAX;

    t116 = ((x509>x510)&(x511-x512));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x513 = INT16_MAX;
	static int16_t x514 = INT16_MAX;
	uint16_t x515 = UINT16_MAX;
	uint32_t x516 = 8U;
	volatile uint32_t t117 = 1U;

    t117 = ((x513>x514)&(x515-x516));

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x517 = INT8_MIN;
	static int64_t x518 = 1235941LL;
	static uint64_t x520 = 521771549458LLU;
	volatile uint64_t t118 = 6LLU;

    t118 = ((x517>x518)&(x519-x520));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x521 = UINT32_MAX;
	volatile int64_t x522 = INT64_MAX;
	uint8_t x523 = UINT8_MAX;
	uint64_t t119 = 5LLU;

    t119 = ((x521>x522)&(x523-x524));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x525 = -1;
	volatile int32_t x526 = -58668;
	int64_t x528 = INT64_MAX;
	int64_t t120 = -397LL;

    t120 = ((x525>x526)&(x527-x528));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x529 = -1LL;
	uint64_t x530 = 40916LLU;
	static int64_t x531 = 21387722243LL;
	int64_t x532 = 4629547LL;
	static int64_t t121 = -9241577479LL;

    t121 = ((x529>x530)&(x531-x532));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x533 = INT64_MAX;
	int32_t x534 = -29865;
	uint64_t x535 = UINT64_MAX;
	volatile uint16_t x536 = UINT16_MAX;
	static volatile uint64_t t122 = 1548288272222194483LLU;

    t122 = ((x533>x534)&(x535-x536));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x537 = 1783U;
	static int16_t x538 = INT16_MIN;
	int32_t x539 = -27286910;
	int32_t x540 = -1;
	volatile int32_t t123 = 29130;

    t123 = ((x537>x538)&(x539-x540));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x546 = INT32_MIN;
	uint8_t x547 = 125U;
	uint8_t x548 = 4U;
	volatile int32_t t124 = 13;

    t124 = ((x545>x546)&(x547-x548));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x549 = INT16_MIN;
	int16_t x550 = 7;
	int8_t x551 = INT8_MIN;
	static volatile uint32_t x552 = 62U;
	volatile uint32_t t125 = 32659407U;

    t125 = ((x549>x550)&(x551-x552));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x553 = UINT64_MAX;
	volatile int64_t x554 = INT64_MAX;
	uint16_t x555 = 420U;
	static uint32_t x556 = 19267U;
	static volatile uint32_t t126 = 56U;

    t126 = ((x553>x554)&(x555-x556));

    if (t126 != 1U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x557 = INT16_MIN;
	uint64_t x558 = UINT64_MAX;
	static volatile int64_t x559 = -1LL;
	uint8_t x560 = 1U;
	int64_t t127 = 782761031LL;

    t127 = ((x557>x558)&(x559-x560));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x561 = INT16_MAX;
	int16_t x562 = INT16_MIN;
	int64_t t128 = -59LL;

    t128 = ((x561>x562)&(x563-x564));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x565 = INT16_MIN;
	uint64_t x566 = UINT64_MAX;
	int16_t x567 = -103;
	uint32_t x568 = UINT32_MAX;
	volatile uint32_t t129 = 136208958U;

    t129 = ((x565>x566)&(x567-x568));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x569 = INT32_MIN;
	int8_t x570 = 1;
	int8_t x572 = -1;

    t130 = ((x569>x570)&(x571-x572));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x573 = INT16_MIN;
	int64_t x574 = 158LL;
	static int64_t x576 = INT64_MIN;
	int64_t t131 = -317LL;

    t131 = ((x573>x574)&(x575-x576));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x578 = INT64_MIN;
	volatile int16_t x580 = -40;
	uint32_t t132 = 1540331931U;

    t132 = ((x577>x578)&(x579-x580));

    if (t132 != 1U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x581 = INT64_MIN;
	uint16_t x582 = 11696U;
	uint8_t x583 = 1U;
	static int16_t x584 = INT16_MAX;
	int32_t t133 = -472900;

    t133 = ((x581>x582)&(x583-x584));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x585 = INT64_MIN;
	int16_t x587 = -1;

    t134 = ((x585>x586)&(x587-x588));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x589 = UINT16_MAX;
	uint64_t x591 = 1979499697321712650LLU;
	volatile uint32_t x592 = 7710631U;
	volatile uint64_t t135 = 56260872LLU;

    t135 = ((x589>x590)&(x591-x592));

    if (t135 != 1LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x593 = INT8_MIN;
	int8_t x594 = -1;
	uint16_t x595 = 2093U;
	int16_t x596 = INT16_MAX;
	static int32_t t136 = -1;

    t136 = ((x593>x594)&(x595-x596));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x598 = -381737529122LL;
	int32_t x600 = -307;
	static volatile int64_t t137 = 52239919941612019LL;

    t137 = ((x597>x598)&(x599-x600));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x601 = -5;
	static volatile uint16_t x602 = 159U;
	volatile uint16_t x603 = 13862U;
	volatile int16_t x604 = -795;
	static volatile int32_t t138 = 2530547;

    t138 = ((x601>x602)&(x603-x604));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x609 = -1LL;
	static int16_t x610 = INT16_MIN;
	uint8_t x611 = 18U;
	int32_t t139 = -1690;

    t139 = ((x609>x610)&(x611-x612));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x613 = 6U;
	uint64_t x614 = 72473LLU;
	int16_t x615 = INT16_MIN;
	int8_t x616 = -36;
	int32_t t140 = -26745721;

    t140 = ((x613>x614)&(x615-x616));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x617 = -1;
	volatile int8_t x618 = INT8_MIN;
	int64_t x620 = -6391465145LL;

    t141 = ((x617>x618)&(x619-x620));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x621 = INT16_MIN;
	int16_t x623 = INT16_MIN;
	static volatile int16_t x624 = INT16_MAX;
	volatile int32_t t142 = 0;

    t142 = ((x621>x622)&(x623-x624));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x625 = 527;
	static uint64_t x627 = 436605928826607145LLU;

    t143 = ((x625>x626)&(x627-x628));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x630 = INT16_MAX;
	static uint8_t x631 = 4U;
	int64_t x632 = INT64_MAX;
	volatile int64_t t144 = -39LL;

    t144 = ((x629>x630)&(x631-x632));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x633 = 80U;
	int32_t x634 = -1;
	int8_t x635 = -1;
	uint8_t x636 = 11U;

    t145 = ((x633>x634)&(x635-x636));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x637 = 0;
	int64_t x638 = -1LL;
	int32_t x640 = -1;
	static int32_t t146 = 0;

    t146 = ((x637>x638)&(x639-x640));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x646 = 916999443U;
	uint16_t x647 = 2U;
	static int8_t x648 = -1;
	int32_t t147 = -33954;

    t147 = ((x645>x646)&(x647-x648));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x653 = 569;
	int16_t x654 = -1;
	uint8_t x655 = UINT8_MAX;
	int32_t t148 = 4069983;

    t148 = ((x653>x654)&(x655-x656));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x662 = -1;
	int8_t x663 = INT8_MIN;
	int64_t x664 = INT64_MIN;
	volatile int64_t t149 = -117351878845352LL;

    t149 = ((x661>x662)&(x663-x664));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x665 = 1512;
	int8_t x666 = INT8_MIN;
	int32_t x667 = INT32_MIN;
	uint32_t x668 = UINT32_MAX;
	uint32_t t150 = 1396777553U;

    t150 = ((x665>x666)&(x667-x668));

    if (t150 != 1U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x670 = UINT8_MAX;
	volatile int16_t x671 = INT16_MIN;
	volatile int16_t x672 = -1;

    t151 = ((x669>x670)&(x671-x672));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x677 = 2U;
	int64_t x678 = -1LL;
	int32_t x679 = INT32_MAX;
	static int64_t x680 = -6577306067215117LL;
	volatile int64_t t152 = -547394734674LL;

    t152 = ((x677>x678)&(x679-x680));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x689 = -1;
	int64_t x692 = -1431LL;
	int64_t t153 = 31025647LL;

    t153 = ((x689>x690)&(x691-x692));

    if (t153 != 1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x693 = 1933;
	int8_t x694 = 19;
	uint32_t x695 = 24767U;
	int16_t x696 = -4;

    t154 = ((x693>x694)&(x695-x696));

    if (t154 != 1U) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x697 = 44728LLU;
	volatile int16_t x700 = INT16_MIN;
	volatile int32_t t155 = 90470;

    t155 = ((x697>x698)&(x699-x700));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x701 = 20U;
	int32_t x702 = INT32_MAX;
	int8_t x703 = -1;
	int32_t x704 = -1;
	int32_t t156 = -4;

    t156 = ((x701>x702)&(x703-x704));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t t157 = 112;

    t157 = ((x705>x706)&(x707-x708));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x709 = 764;
	int32_t x710 = INT32_MIN;
	volatile int8_t x711 = 20;
	uint32_t t158 = 30U;

    t158 = ((x709>x710)&(x711-x712));

    if (t158 != 1U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x713 = 53U;
	static volatile int32_t t159 = -15;

    t159 = ((x713>x714)&(x715-x716));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x717 = 15781U;
	int64_t x718 = -1LL;
	static volatile int32_t x719 = INT32_MAX;
	static int16_t x720 = 13190;

    t160 = ((x717>x718)&(x719-x720));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x721 = 2U;
	int32_t x722 = 21;
	uint64_t x723 = UINT64_MAX;
	uint64_t t161 = 2LLU;

    t161 = ((x721>x722)&(x723-x724));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x725 = -15;
	static int8_t x726 = INT8_MIN;
	volatile int64_t x727 = 275803494313615LL;
	uint16_t x728 = UINT16_MAX;
	volatile int64_t t162 = 54597047LL;

    t162 = ((x725>x726)&(x727-x728));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x729 = UINT32_MAX;
	uint32_t x730 = UINT32_MAX;
	static int64_t x731 = INT64_MIN;
	uint64_t x732 = 4LLU;

    t163 = ((x729>x730)&(x731-x732));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x734 = INT32_MIN;
	volatile int32_t x736 = INT32_MAX;
	uint32_t t164 = 1436335U;

    t164 = ((x733>x734)&(x735-x736));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x745 = 43U;
	uint32_t x746 = UINT32_MAX;
	uint32_t x747 = 3831346U;

    t165 = ((x745>x746)&(x747-x748));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x749 = 1LL;
	static uint16_t x750 = 215U;
	static int64_t x751 = -1LL;
	volatile int8_t x752 = 0;
	volatile int64_t t166 = 223560961355294LL;

    t166 = ((x749>x750)&(x751-x752));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x754 = INT8_MAX;
	uint8_t x755 = UINT8_MAX;
	volatile int32_t t167 = -2874347;

    t167 = ((x753>x754)&(x755-x756));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x757 = 3U;
	static int8_t x759 = -1;
	uint32_t x760 = UINT32_MAX;
	static volatile uint32_t t168 = 56613U;

    t168 = ((x757>x758)&(x759-x760));

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x761 = 1;
	int8_t x762 = INT8_MIN;
	volatile int32_t x763 = -1;
	int8_t x764 = INT8_MIN;
	static int32_t t169 = -169;

    t169 = ((x761>x762)&(x763-x764));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint32_t x765 = UINT32_MAX;
	int64_t x766 = INT64_MAX;
	uint16_t x767 = UINT16_MAX;
	volatile uint8_t x768 = UINT8_MAX;
	int32_t t170 = -11;

    t170 = ((x765>x766)&(x767-x768));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x769 = -1;
	int32_t x770 = 331120222;
	uint8_t x771 = 2U;
	uint32_t x772 = UINT32_MAX;
	static volatile uint32_t t171 = 16435212U;

    t171 = ((x769>x770)&(x771-x772));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x777 = 0;
	int16_t x778 = INT16_MIN;
	static int8_t x780 = INT8_MIN;
	volatile int32_t t172 = 2;

    t172 = ((x777>x778)&(x779-x780));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x781 = -135LL;
	static volatile int16_t x782 = 6794;
	volatile int64_t x783 = INT64_MIN;
	static uint8_t x784 = 0U;

    t173 = ((x781>x782)&(x783-x784));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x785 = INT32_MIN;
	uint32_t x786 = UINT32_MAX;
	int16_t x787 = INT16_MIN;

    t174 = ((x785>x786)&(x787-x788));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x789 = INT8_MAX;
	int8_t x791 = -1;
	uint8_t x792 = UINT8_MAX;
	volatile int32_t t175 = 223;

    t175 = ((x789>x790)&(x791-x792));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x793 = -675;
	uint8_t x794 = 50U;
	static int8_t x795 = 13;
	int64_t x796 = INT64_MAX;

    t176 = ((x793>x794)&(x795-x796));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x797 = UINT8_MAX;
	static int16_t x798 = INT16_MIN;
	int64_t x799 = INT64_MIN;
	uint64_t x800 = 1104911568532007051LLU;
	volatile uint64_t t177 = 24014LLU;

    t177 = ((x797>x798)&(x799-x800));

    if (t177 != 1LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x801 = -1;
	int64_t x802 = INT64_MIN;
	volatile uint16_t x803 = 3U;
	int16_t x804 = -1;
	volatile int32_t t178 = -3479;

    t178 = ((x801>x802)&(x803-x804));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x813 = INT8_MIN;
	int8_t x814 = 12;
	volatile int8_t x815 = INT8_MIN;
	static uint32_t x816 = 2U;
	uint32_t t179 = 155U;

    t179 = ((x813>x814)&(x815-x816));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x817 = 1U;
	static int16_t x819 = -1;
	uint32_t x820 = 220U;
	uint32_t t180 = 272146928U;

    t180 = ((x817>x818)&(x819-x820));

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x821 = 0U;
	int8_t x822 = -22;
	static int64_t x823 = -670118600900591LL;
	int64_t x824 = INT64_MIN;
	volatile int64_t t181 = 74755725199762LL;

    t181 = ((x821>x822)&(x823-x824));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x825 = UINT32_MAX;
	int32_t x826 = -1;
	uint8_t x827 = 51U;
	static volatile int8_t x828 = INT8_MIN;

    t182 = ((x825>x826)&(x827-x828));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x830 = -1;
	int32_t x831 = -1;
	volatile int8_t x832 = INT8_MIN;
	volatile int32_t t183 = 3726;

    t183 = ((x829>x830)&(x831-x832));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int32_t x833 = INT32_MIN;
	int64_t x834 = 823038378932356049LL;
	int8_t x835 = 0;
	volatile uint32_t t184 = 4688172U;

    t184 = ((x833>x834)&(x835-x836));

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x841 = 5075U;
	int64_t x842 = INT64_MIN;
	uint64_t x843 = UINT64_MAX;
	uint8_t x844 = UINT8_MAX;
	static volatile uint64_t t185 = 7014968465049293874LLU;

    t185 = ((x841>x842)&(x843-x844));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x845 = INT8_MAX;
	uint16_t x846 = UINT16_MAX;
	int32_t x847 = INT32_MIN;
	int64_t t186 = 679LL;

    t186 = ((x845>x846)&(x847-x848));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x849 = 9U;
	int8_t x852 = INT8_MAX;
	volatile int64_t t187 = 849LL;

    t187 = ((x849>x850)&(x851-x852));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x853 = -1;
	static int16_t x854 = 1;
	static int16_t x855 = -1;
	int8_t x856 = INT8_MIN;
	int32_t t188 = 105932564;

    t188 = ((x853>x854)&(x855-x856));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x857 = INT32_MIN;
	static uint64_t x858 = 441953423010495080LLU;
	volatile int16_t x859 = INT16_MAX;
	static uint8_t x860 = 52U;
	int32_t t189 = -986261737;

    t189 = ((x857>x858)&(x859-x860));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x861 = UINT16_MAX;
	int16_t x862 = INT16_MIN;
	volatile int8_t x863 = INT8_MAX;
	volatile uint64_t x864 = 12561LLU;
	static uint64_t t190 = 27087443LLU;

    t190 = ((x861>x862)&(x863-x864));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x867 = INT8_MIN;
	static int8_t x868 = -15;
	int32_t t191 = -45620;

    t191 = ((x865>x866)&(x867-x868));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x869 = -1;
	int16_t x870 = -9169;
	uint16_t x871 = 242U;
	uint8_t x872 = 75U;

    t192 = ((x869>x870)&(x871-x872));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x877 = 7769U;
	volatile int8_t x878 = INT8_MAX;
	static int64_t x879 = INT64_MAX;
	volatile uint64_t t193 = 3454163719LLU;

    t193 = ((x877>x878)&(x879-x880));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int32_t x882 = INT32_MAX;
	int8_t x884 = -1;
	int64_t t194 = 56LL;

    t194 = ((x881>x882)&(x883-x884));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x885 = 3U;
	int8_t x886 = 0;
	volatile int8_t x887 = INT8_MIN;

    t195 = ((x885>x886)&(x887-x888));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x890 = INT32_MAX;
	static uint32_t x891 = UINT32_MAX;
	volatile uint16_t x892 = UINT16_MAX;
	static uint32_t t196 = 11U;

    t196 = ((x889>x890)&(x891-x892));

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x897 = UINT32_MAX;
	int32_t x898 = -1;
	int32_t t197 = 1203801;

    t197 = ((x897>x898)&(x899-x900));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x901 = 1263U;
	int16_t x903 = INT16_MIN;
	int64_t x904 = 3934LL;

    t198 = ((x901>x902)&(x903-x904));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x905 = -30799;
	int16_t x906 = -1;
	uint64_t x907 = 4222044843120166501LLU;
	int32_t x908 = -729864;
	uint64_t t199 = 3040370913824723LLU;

    t199 = ((x905>x906)&(x907-x908));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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


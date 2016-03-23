
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

int64_t x1 = INT64_MIN;
int8_t x2 = -30;
int8_t x4 = INT8_MIN;
volatile int64_t x9 = -1LL;
volatile uint64_t x13 = 1315744971700226LLU;
volatile int64_t x14 = -1LL;
int16_t x16 = INT16_MAX;
static int8_t x26 = INT8_MIN;
uint16_t x31 = 340U;
volatile int8_t x35 = -5;
int16_t x41 = INT16_MIN;
int16_t x45 = INT16_MIN;
int32_t x49 = -1;
volatile uint32_t t11 = 302008U;
int32_t x66 = INT32_MAX;
int64_t x68 = INT64_MAX;
int64_t t15 = INT64_MAX;
int8_t x72 = 0;
int64_t x79 = 1900144221319LL;
int8_t x81 = INT8_MAX;
static uint8_t x97 = 0U;
static uint64_t x99 = UINT64_MAX;
int16_t x104 = -1;
volatile uint64_t x105 = 987843663636268LLU;
uint32_t x111 = 143453129U;
int64_t x114 = 11861321713LL;
int8_t x116 = -7;
uint32_t x118 = UINT32_MAX;
uint64_t x130 = UINT64_MAX;
static uint8_t x132 = UINT8_MAX;
static uint64_t x133 = 3126533654133LLU;
static int8_t x138 = INT8_MIN;
int8_t x148 = -45;
volatile int64_t t34 = 1922846643586485230LL;
uint8_t x153 = UINT8_MAX;
int32_t x154 = -917178;
int64_t x160 = INT64_MAX;
uint16_t x167 = UINT16_MAX;
uint32_t t38 = 12U;
int32_t x169 = 2046425;
volatile uint64_t t40 = 1155LLU;
volatile uint32_t x186 = UINT32_MAX;
static volatile int64_t t41 = 3237166367340485354LL;
int16_t x192 = INT16_MAX;
int32_t x195 = INT32_MIN;
volatile int32_t t43 = 10853564;
static volatile uint64_t t45 = 866LLU;
volatile int64_t x210 = INT64_MIN;
static uint8_t x211 = 2U;
int32_t x216 = INT32_MIN;
volatile uint64_t t48 = 78LLU;
volatile int64_t t49 = 10007747140160773LL;
static uint16_t x228 = 670U;
volatile int32_t t50 = -44074;
int8_t x231 = INT8_MIN;
volatile int16_t x232 = 2;
volatile uint16_t x235 = 49U;
static uint64_t t52 = 999786756334351756LLU;
int16_t x250 = -1;
uint64_t x252 = 140647543LLU;
volatile uint64_t t57 = 6356LLU;
volatile int16_t x263 = INT16_MAX;
int8_t x277 = INT8_MIN;
int64_t x279 = INT64_MIN;
static uint64_t t63 = 267270LLU;
static int32_t x281 = INT32_MIN;
volatile int64_t t64 = 107LL;
int64_t x285 = INT64_MIN;
int8_t x300 = -1;
uint32_t x303 = 7790567U;
volatile int16_t x304 = INT16_MAX;
static uint64_t t68 = 730107100489LLU;
uint64_t x307 = UINT64_MAX;
uint32_t x310 = UINT32_MAX;
int32_t x311 = INT32_MIN;
static uint64_t x316 = UINT64_MAX;
volatile uint32_t t72 = 323305U;
uint64_t x323 = UINT64_MAX;
volatile uint64_t t74 = 4321609924070728LLU;
volatile uint64_t t75 = 26136360284LLU;
static int16_t x334 = -44;
volatile int32_t x338 = INT32_MAX;
int32_t x340 = -1;
int8_t x342 = -1;
uint32_t x347 = 6953974U;
static int8_t x349 = 10;
volatile int32_t x351 = INT32_MIN;
volatile int32_t t80 = 0;
int32_t x353 = INT32_MAX;
volatile uint16_t x357 = 0U;
uint16_t x360 = 0U;
static int32_t x364 = INT32_MIN;
volatile uint32_t x371 = UINT32_MAX;
uint64_t t86 = 689218097725765396LLU;
static int64_t x386 = INT64_MAX;
static volatile int16_t x389 = -1;
volatile int8_t x391 = 0;
int8_t x394 = 4;
int8_t x395 = INT8_MIN;
int16_t x404 = INT16_MAX;
int16_t x408 = -1;
int32_t t92 = 1;
int64_t x409 = -2LL;
int16_t x412 = -2;
int32_t x415 = INT32_MIN;
int64_t x421 = INT64_MIN;
uint64_t t96 = 239LLU;
int64_t x431 = INT64_MIN;
static volatile int16_t x434 = -1;
int16_t x436 = INT16_MIN;
uint64_t t99 = 68613935205LLU;
int64_t x441 = INT64_MAX;
int8_t x442 = -1;
int8_t x448 = INT8_MIN;
int16_t x450 = -1;
int8_t x455 = -1;
int16_t x461 = -14758;
uint16_t x466 = 556U;
static uint64_t x468 = 2818651735363LLU;
uint16_t x470 = 264U;
int8_t x474 = INT8_MIN;
uint32_t t108 = 1029789265U;
static uint64_t x488 = 232425594549LLU;
int32_t x489 = INT32_MAX;
static int64_t x490 = INT64_MIN;
volatile int8_t x491 = INT8_MIN;
static volatile int64_t t111 = -2057836LL;
uint8_t x496 = UINT8_MAX;
uint16_t x498 = 18U;
uint32_t x501 = UINT32_MAX;
volatile int32_t x502 = INT32_MIN;
int8_t x503 = INT8_MAX;
static int8_t x506 = INT8_MAX;
volatile int32_t x509 = -1;
uint32_t x511 = 3U;
volatile uint16_t x513 = 83U;
volatile int64_t x517 = INT64_MIN;
int16_t x522 = 46;
volatile int8_t x525 = INT8_MIN;
int32_t x526 = -1;
volatile uint64_t t120 = 33768790984533576LLU;
static volatile int64_t t122 = -30835340145LL;
int16_t x538 = INT16_MIN;
volatile uint16_t x539 = UINT16_MAX;
int8_t x545 = 14;
int16_t x567 = 18;
volatile int16_t x571 = -1;
uint16_t x572 = 171U;
uint8_t x574 = 19U;
int16_t x576 = -1;
volatile int32_t t133 = 224;
volatile int64_t t136 = -1034693106216LL;
static volatile uint32_t t138 = 72476U;
int32_t x609 = -39734;
volatile int16_t x611 = INT16_MIN;
int32_t x630 = INT32_MIN;
uint64_t x632 = 3708861895091LLU;
int32_t x639 = -1;
uint8_t x641 = UINT8_MAX;
uint32_t x642 = 6912466U;
uint32_t t147 = 248230970U;
int8_t x645 = INT8_MIN;
int8_t x649 = -1;
int64_t x650 = 70270213501683151LL;
volatile int16_t x652 = 583;
uint8_t x668 = 7U;
int64_t x669 = INT64_MAX;
static volatile int16_t x670 = -1;
int16_t x673 = 4;
static uint16_t x675 = 281U;
int64_t x682 = INT64_MIN;
static uint32_t x683 = 1084878U;
volatile int64_t t157 = 30021LL;
uint64_t x703 = 159929LLU;
uint8_t x705 = UINT8_MAX;
int16_t x707 = -1;
static int64_t t163 = 0LL;
static volatile uint64_t x717 = 8286304494752719LLU;
volatile uint8_t x727 = 3U;
static int64_t x733 = 118221305868149976LL;
uint8_t x738 = UINT8_MAX;
volatile uint64_t x746 = 253572LLU;
static int64_t x753 = -29865937LL;
uint8_t x754 = 4U;
volatile uint32_t t174 = 15088974U;
uint16_t x762 = UINT16_MAX;
uint8_t x763 = 75U;
int8_t x764 = INT8_MIN;
volatile uint16_t x765 = 7830U;
volatile uint8_t x771 = 2U;
int32_t x774 = INT32_MAX;
int8_t x779 = -1;
volatile int32_t x780 = -1;
volatile int16_t x783 = INT16_MIN;
static uint8_t x784 = 0U;
uint8_t x785 = 1U;
int64_t x789 = INT64_MIN;
int32_t x794 = -25;
int32_t x796 = INT32_MIN;
volatile uint16_t x800 = 1336U;
uint16_t x805 = 811U;
int64_t t186 = -1014292897285LL;
uint16_t x810 = 159U;
volatile int8_t x811 = -7;
static uint32_t x821 = 39U;
uint64_t x823 = UINT64_MAX;
int8_t x824 = INT8_MAX;
uint32_t x826 = 781U;
static int16_t x829 = 3;
volatile int64_t x838 = 9LL;
volatile uint32_t x851 = 5U;


void f0(void) {
    	static uint8_t x3 = 5U;
	volatile int64_t t0 = -5736LL;

    t0 = ((x1%(x2|x3))*x4);

    if (t0 != 1024LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	int8_t x6 = -7;
	int32_t x7 = INT32_MAX;
	int16_t x8 = INT16_MAX;
	static int64_t t1 = -964995889832728LL;

    t1 = ((x5%(x6|x7))*x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x10 = INT8_MIN;
	int8_t x11 = INT8_MIN;
	uint8_t x12 = 43U;
	int64_t t2 = -346608060735LL;

    t2 = ((x9%(x10|x11))*x12);

    if (t2 != -43LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x15 = INT64_MIN;
	volatile uint64_t t3 = 13LLU;

    t3 = ((x13%(x14|x15))*x16);

    if (t3 != 6219527340282202110LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 7086083LLU;
	int8_t x18 = 1;
	int32_t x19 = 8120714;
	int32_t x20 = INT32_MIN;
	volatile uint64_t t4 = 28381812105LLU;

    t4 = ((x17%(x18|x19))*x20);

    if (t4 != 18431526826338680832LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 11629U;
	static int64_t x22 = -2907723LL;
	int8_t x23 = -1;
	int64_t x24 = -1LL;
	int64_t t5 = -658787794LL;

    t5 = ((x21%(x22|x23))*x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = -1;
	int32_t x27 = 1;
	int64_t x28 = -1LL;
	volatile int64_t t6 = 417LL;

    t6 = ((x25%(x26|x27))*x28);

    if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = 1;
	static uint64_t x30 = 710029363423LLU;
	int64_t x32 = 52LL;
	uint64_t t7 = 2573667860797131394LLU;

    t7 = ((x29%(x30|x31))*x32);

    if (t7 != 52LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 282U;
	static int32_t x34 = -1;
	static int32_t x36 = INT32_MIN;
	int32_t t8 = 55;

    t8 = ((x33%(x34|x35))*x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x42 = 74U;
	int64_t x43 = INT64_MAX;
	int32_t x44 = -1;
	volatile int64_t t9 = -110657LL;

    t9 = ((x41%(x42|x43))*x44);

    if (t9 != 32768LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x46 = 1666U;
	uint64_t x47 = 307399399737894LLU;
	volatile uint64_t x48 = UINT64_MAX;
	volatile uint64_t t10 = 1LLU;

    t10 = ((x45%(x46|x47))*x48);

    if (t10 != 18446730578940444182LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x50 = 2794U;
	int32_t x51 = INT32_MIN;
	int8_t x52 = 4;

    t11 = ((x49%(x50|x51))*x52);

    if (t11 != 4294956116U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MAX;
	uint32_t x54 = 506U;
	static int8_t x55 = -3;
	int8_t x56 = -36;
	uint32_t t12 = 22U;

    t12 = ((x53%(x54|x55))*x56);

    if (t12 != 4294962724U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = INT64_MIN;
	volatile uint8_t x58 = 105U;
	uint32_t x59 = UINT32_MAX;
	static uint8_t x60 = 6U;
	volatile int64_t t13 = 70738045655586666LL;

    t13 = ((x57%(x58|x59))*x60);

    if (t13 != -12884901888LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x61 = UINT8_MAX;
	volatile int64_t x62 = INT64_MAX;
	int32_t x63 = INT32_MIN;
	static uint8_t x64 = UINT8_MAX;
	static int64_t t14 = 58395120LL;

    t14 = ((x61%(x62|x63))*x64);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = INT64_MAX;
	int64_t x67 = 3890852LL;

    t15 = ((x65%(x66|x67))*x68);

    if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = -61LL;
	uint64_t x70 = UINT64_MAX;
	volatile int8_t x71 = INT8_MIN;
	volatile uint64_t t16 = 4796402602LLU;

    t16 = ((x69%(x70|x71))*x72);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = 52U;
	int64_t x74 = 1768543897LL;
	static volatile int8_t x75 = INT8_MAX;
	uint64_t x76 = UINT64_MAX;
	static uint64_t t17 = 26457344026902403LLU;

    t17 = ((x73%(x74|x75))*x76);

    if (t17 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x77 = INT8_MIN;
	int32_t x78 = -76926;
	static int16_t x80 = -1;
	int64_t t18 = 1LL;

    t18 = ((x77%(x78|x79))*x80);

    if (t18 != 128LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x82 = INT8_MAX;
	volatile int8_t x83 = INT8_MIN;
	int32_t x84 = INT32_MAX;
	int32_t t19 = -1;

    t19 = ((x81%(x82|x83))*x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x85 = -1LL;
	uint32_t x86 = 34U;
	static int32_t x87 = INT32_MIN;
	int32_t x88 = -1126;
	volatile int64_t t20 = 268921586709654LL;

    t20 = ((x85%(x86|x87))*x88);

    if (t20 != 1126LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x89 = INT64_MIN;
	int8_t x90 = -32;
	uint64_t x91 = UINT64_MAX;
	int64_t x92 = INT64_MIN;
	uint64_t t21 = 120LLU;

    t21 = ((x89%(x90|x91))*x92);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x98 = -1;
	int16_t x100 = INT16_MIN;
	uint64_t t22 = 23111768LLU;

    t22 = ((x97%(x98|x99))*x100);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint64_t x101 = UINT64_MAX;
	uint32_t x102 = 5055571U;
	static int32_t x103 = INT32_MIN;
	volatile uint64_t t23 = 2502738872570802LLU;

    t23 = ((x101%(x102|x103))*x104);

    if (t23 != 18446744073367213858LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x106 = INT32_MIN;
	volatile uint8_t x107 = 1U;
	uint16_t x108 = UINT16_MAX;
	uint64_t t24 = 1308LLU;

    t24 = ((x105%(x106|x107))*x108);

    if (t24 != 9398102275274168532LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x109 = 27U;
	volatile int32_t x110 = 0;
	int32_t x112 = -1;
	volatile uint32_t t25 = 30U;

    t25 = ((x109%(x110|x111))*x112);

    if (t25 != 4294967269U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = INT8_MIN;
	int16_t x115 = INT16_MAX;
	int64_t t26 = 2LL;

    t26 = ((x113%(x114|x115))*x116);

    if (t26 != 896LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x117 = UINT32_MAX;
	static volatile int8_t x119 = -45;
	uint64_t x120 = 76LLU;
	volatile uint64_t t27 = 110223LLU;

    t27 = ((x117%(x118|x119))*x120);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x121 = -1;
	volatile uint8_t x122 = 5U;
	static uint64_t x123 = 6983819530893968LLU;
	static int16_t x124 = INT16_MIN;
	volatile uint64_t t28 = 25567803LLU;

    t28 = ((x121%(x122|x123))*x124);

    if (t28 != 11077456643281321984LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x125 = INT8_MAX;
	int16_t x126 = INT16_MAX;
	volatile uint64_t x127 = UINT64_MAX;
	int8_t x128 = INT8_MAX;
	uint64_t t29 = 8894LLU;

    t29 = ((x125%(x126|x127))*x128);

    if (t29 != 16129LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x129 = -1;
	uint8_t x131 = 1U;
	volatile uint64_t t30 = 58104347LLU;

    t30 = ((x129%(x130|x131))*x132);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x134 = 19353366967544LLU;
	volatile uint8_t x135 = 0U;
	uint32_t x136 = 52494105U;
	static uint64_t t31 = 233692966LLU;

    t31 = ((x133%(x134|x135))*x136);

    if (t31 != 16550633336414973037LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x137 = 256265LLU;
	int16_t x139 = INT16_MIN;
	int8_t x140 = -5;
	volatile uint64_t t32 = 223846LLU;

    t32 = ((x137%(x138|x139))*x140);

    if (t32 != 18446744073708270291LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x145 = -1;
	int16_t x146 = -2339;
	volatile int16_t x147 = -1;
	static volatile int32_t t33 = -248810;

    t33 = ((x145%(x146|x147))*x148);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x149 = -1;
	int32_t x150 = INT32_MIN;
	int32_t x151 = -1;
	int64_t x152 = -1LL;

    t34 = ((x149%(x150|x151))*x152);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x155 = -1;
	static uint32_t x156 = 5720133U;
	volatile uint32_t t35 = 39497U;

    t35 = ((x153%(x154|x155))*x156);

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x157 = 1814542207LLU;
	uint8_t x158 = UINT8_MAX;
	int64_t x159 = INT64_MIN;
	uint64_t t36 = 1272287LLU;

    t36 = ((x157%(x158|x159))*x160);

    if (t36 != 9223372035040233601LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x161 = INT32_MIN;
	int8_t x162 = INT8_MIN;
	uint32_t x163 = 2496U;
	uint8_t x164 = 18U;
	uint32_t t37 = 1977128U;

    t37 = ((x161%(x162|x163))*x164);

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint32_t x165 = 3244288U;
	volatile int8_t x166 = INT8_MAX;
	int32_t x168 = -3402;

    t38 = ((x165%(x166|x167))*x168);

    if (t38 != 4182452950U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x170 = 57U;
	volatile uint64_t x171 = 140240010393865171LLU;
	static uint32_t x172 = 94310U;
	static volatile uint64_t t39 = 105832521684LLU;

    t39 = ((x169%(x170|x171))*x172);

    if (t39 != 192998341750LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x173 = 1;
	uint64_t x174 = 2047354LLU;
	uint64_t x175 = UINT64_MAX;
	volatile uint32_t x176 = 24U;

    t40 = ((x173%(x174|x175))*x176);

    if (t40 != 24LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x185 = -1;
	int16_t x187 = -1;
	volatile int64_t x188 = INT64_MAX;

    t41 = ((x185%(x186|x187))*x188);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x189 = 3437061956788LLU;
	int64_t x190 = INT64_MIN;
	static uint32_t x191 = 5632U;
	uint64_t t42 = 487587597234LLU;

    t42 = ((x189%(x190|x191))*x192);

    if (t42 != 112622209138072396LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x193 = INT16_MIN;
	static uint16_t x194 = 5U;
	int8_t x196 = INT8_MIN;

    t43 = ((x193%(x194|x195))*x196);

    if (t43 != 4194304) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x197 = 14;
	int32_t x198 = 192491099;
	int32_t x199 = INT32_MIN;
	int16_t x200 = INT16_MIN;
	volatile int32_t t44 = 33;

    t44 = ((x197%(x198|x199))*x200);

    if (t44 != -458752) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x201 = 0LLU;
	static uint16_t x202 = 370U;
	int32_t x203 = INT32_MAX;
	volatile uint64_t x204 = 2185560693823551LLU;

    t45 = ((x201%(x202|x203))*x204);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x205 = UINT16_MAX;
	static int64_t x206 = -38185330LL;
	int16_t x207 = -1;
	static int8_t x208 = 5;
	int64_t t46 = 172870888459026LL;

    t46 = ((x205%(x206|x207))*x208);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x209 = -1;
	int64_t x212 = 14921041005LL;
	volatile int64_t t47 = -196737453322894608LL;

    t47 = ((x209%(x210|x211))*x212);

    if (t47 != -14921041005LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int16_t x213 = 370;
	int32_t x214 = INT32_MIN;
	uint64_t x215 = UINT64_MAX;

    t48 = ((x213%(x214|x215))*x216);

    if (t48 != 18446743279140601856LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x221 = INT16_MIN;
	int8_t x222 = -1;
	int8_t x223 = INT8_MIN;
	volatile int64_t x224 = INT64_MIN;

    t49 = ((x221%(x222|x223))*x224);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x225 = INT8_MIN;
	int32_t x226 = INT32_MIN;
	int16_t x227 = 370;

    t50 = ((x225%(x226|x227))*x228);

    if (t50 != -85760) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x229 = -25LL;
	uint64_t x230 = UINT64_MAX;
	uint64_t t51 = 258129549583LLU;

    t51 = ((x229%(x230|x231))*x232);

    if (t51 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint16_t x233 = 1U;
	static uint64_t x234 = 9773432LLU;
	static int16_t x236 = INT16_MAX;

    t52 = ((x233%(x234|x235))*x236);

    if (t52 != 32767LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x237 = INT16_MAX;
	uint32_t x238 = 41561U;
	uint8_t x239 = 33U;
	int16_t x240 = -88;
	uint32_t t53 = 2036585231U;

    t53 = ((x237%(x238|x239))*x240);

    if (t53 != 4292083800U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x241 = INT16_MAX;
	int16_t x242 = -1;
	volatile uint8_t x243 = 4U;
	int8_t x244 = 14;
	int32_t t54 = -204;

    t54 = ((x241%(x242|x243))*x244);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x245 = 4U;
	uint64_t x246 = 1424938563431134LLU;
	int32_t x247 = -480;
	static int64_t x248 = -582LL;
	uint64_t t55 = 28195303522981715LLU;

    t55 = ((x245%(x246|x247))*x248);

    if (t55 != 18446744073709549288LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x249 = INT64_MIN;
	volatile int16_t x251 = INT16_MIN;
	volatile uint64_t t56 = 4LLU;

    t56 = ((x249%(x250|x251))*x252);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x253 = INT16_MIN;
	static int16_t x254 = -1;
	uint64_t x255 = UINT64_MAX;
	volatile int16_t x256 = -1;

    t57 = ((x253%(x254|x255))*x256);

    if (t57 != 32768LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint32_t x257 = 109456456U;
	static int16_t x258 = -13;
	static int64_t x259 = -1LL;
	int32_t x260 = -201345;
	int64_t t58 = -4309830905LL;

    t58 = ((x257%(x258|x259))*x260);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x261 = 319280U;
	uint8_t x262 = 75U;
	int32_t x264 = INT32_MAX;
	static uint32_t t59 = 29568U;

    t59 = ((x261%(x262|x263))*x264);

    if (t59 != 2147459271U) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x265 = -4;
	uint64_t x266 = 8780258276416LLU;
	static int32_t x267 = 17329;
	int8_t x268 = -1;
	volatile uint64_t t60 = 60410080036427587LLU;

    t60 = ((x265%(x266|x267))*x268);

    if (t60 != 18446743143689155178LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x269 = UINT16_MAX;
	int32_t x270 = -1;
	int64_t x271 = INT64_MIN;
	static volatile uint32_t x272 = UINT32_MAX;
	int64_t t61 = 3056259536565442180LL;

    t61 = ((x269%(x270|x271))*x272);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x273 = 7284331348036LLU;
	int64_t x274 = INT64_MIN;
	static volatile uint64_t x275 = UINT64_MAX;
	uint64_t x276 = UINT64_MAX;
	uint64_t t62 = 57120809895443323LLU;

    t62 = ((x273%(x274|x275))*x276);

    if (t62 != 18446736789378203580LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x278 = 277LLU;
	uint8_t x280 = UINT8_MAX;

    t63 = ((x277%(x278|x279))*x280);

    if (t63 != 9223372036854672533LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x282 = INT64_MAX;
	int64_t x283 = -1LL;
	uint32_t x284 = 40187U;

    t64 = ((x281%(x282|x283))*x284);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x286 = 4U;
	int64_t x287 = -1LL;
	int64_t x288 = -1LL;
	int64_t t65 = -2464LL;

    t65 = ((x285%(x286|x287))*x288);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x289 = UINT64_MAX;
	uint16_t x290 = 14313U;
	uint8_t x291 = UINT8_MAX;
	volatile int64_t x292 = INT64_MAX;
	volatile uint64_t t66 = 902659710LLU;

    t66 = ((x289%(x290|x291))*x292);

    if (t66 != 18446744073709542756LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x297 = 0U;
	uint32_t x298 = 3U;
	int32_t x299 = INT32_MIN;
	static uint32_t t67 = 348659183U;

    t67 = ((x297%(x298|x299))*x300);

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x301 = 6482;
	static volatile uint64_t x302 = 307957669196LLU;

    t68 = ((x301%(x302|x303))*x304);

    if (t68 != 212395694LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x305 = 32U;
	int32_t x306 = -61;
	static int8_t x308 = INT8_MIN;
	static uint64_t t69 = 92LLU;

    t69 = ((x305%(x306|x307))*x308);

    if (t69 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x309 = 1;
	uint8_t x312 = 0U;
	volatile uint32_t t70 = 41U;

    t70 = ((x309%(x310|x311))*x312);

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x313 = INT8_MIN;
	int8_t x314 = 8;
	uint8_t x315 = UINT8_MAX;
	uint64_t t71 = 55645LLU;

    t71 = ((x313%(x314|x315))*x316);

    if (t71 != 128LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x317 = -1;
	int8_t x318 = 1;
	int32_t x319 = -1;
	uint32_t x320 = 2U;

    t72 = ((x317%(x318|x319))*x320);

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x321 = INT8_MIN;
	static volatile int16_t x322 = -1;
	volatile int16_t x324 = INT16_MIN;
	volatile uint64_t t73 = 17442509332219796LLU;

    t73 = ((x321%(x322|x323))*x324);

    if (t73 != 4194304LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x325 = -1;
	static int64_t x326 = 140152141LL;
	uint64_t x327 = 4LLU;
	int64_t x328 = INT64_MAX;

    t74 = ((x325%(x326|x327))*x328);

    if (t74 != 9223372036735051013LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x329 = INT64_MIN;
	volatile uint32_t x330 = 1647028696U;
	uint16_t x331 = UINT16_MAX;
	static uint64_t x332 = 3124LLU;

    t75 = ((x329%(x330|x331))*x332);

    if (t75 != 18446742973839244652LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x333 = INT8_MAX;
	uint32_t x335 = 34557723U;
	int8_t x336 = INT8_MIN;
	static volatile uint32_t t76 = 184663645U;

    t76 = ((x333%(x334|x335))*x336);

    if (t76 != 4294951040U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x337 = INT8_MAX;
	int8_t x339 = INT8_MAX;
	int32_t t77 = 1;

    t77 = ((x337%(x338|x339))*x340);

    if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x341 = -31004943;
	volatile uint64_t x343 = 239LLU;
	uint8_t x344 = 54U;
	volatile uint64_t t78 = 50LLU;

    t78 = ((x341%(x342|x343))*x344);

    if (t78 != 18446744072035284694LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x345 = INT8_MIN;
	volatile uint8_t x346 = UINT8_MAX;
	uint32_t x348 = 843776U;
	volatile uint32_t t79 = 389U;

    t79 = ((x345%(x346|x347))*x348);

    if (t79 != 2081939456U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x350 = -1824548;
	static uint8_t x352 = UINT8_MAX;

    t80 = ((x349%(x350|x351))*x352);

    if (t80 != 2550) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x354 = 3U;
	uint8_t x355 = UINT8_MAX;
	volatile uint16_t x356 = 104U;
	volatile int32_t t81 = 38;

    t81 = ((x353%(x354|x355))*x356);

    if (t81 != 13208) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x358 = 0;
	int64_t x359 = INT64_MIN;
	volatile int64_t t82 = -2670241374695LL;

    t82 = ((x357%(x358|x359))*x360);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x361 = -786277328;
	uint8_t x362 = UINT8_MAX;
	static int16_t x363 = -1;
	int32_t t83 = -449;

    t83 = ((x361%(x362|x363))*x364);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x365 = INT16_MAX;
	int64_t x366 = -20365703LL;
	volatile int32_t x367 = -1;
	int16_t x368 = INT16_MIN;
	volatile int64_t t84 = -4946055651946382LL;

    t84 = ((x365%(x366|x367))*x368);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x369 = 1617767472175203LLU;
	static int8_t x370 = INT8_MAX;
	int8_t x372 = -1;
	volatile uint64_t t85 = 57474LLU;

    t85 = ((x369%(x370|x371))*x372);

    if (t85 != 18446744070093547588LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x373 = 4611696LLU;
	static uint16_t x374 = 0U;
	uint16_t x375 = 6867U;
	volatile uint32_t x376 = 980U;

    t86 = ((x373%(x374|x375))*x376);

    if (t86 != 3860220LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x385 = 19U;
	int64_t x387 = INT64_MAX;
	int32_t x388 = 400389;
	volatile int64_t t87 = 1LL;

    t87 = ((x385%(x386|x387))*x388);

    if (t87 != 7607391LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x390 = INT8_MAX;
	uint64_t x392 = 65617432705401LLU;
	static uint64_t t88 = 16454647409LLU;

    t88 = ((x389%(x390|x391))*x392);

    if (t88 != 18446678456276846215LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x393 = 203631LLU;
	static int32_t x396 = INT32_MAX;
	volatile uint64_t t89 = 837294900LLU;

    t89 = ((x393%(x394|x395))*x396);

    if (t89 != 437294242522257LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x397 = INT16_MAX;
	uint32_t x398 = 8930U;
	int8_t x399 = INT8_MIN;
	int16_t x400 = INT16_MIN;
	uint32_t t90 = 6U;

    t90 = ((x397%(x398|x399))*x400);

    if (t90 != 3221258240U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x401 = 811;
	uint32_t x402 = 11U;
	int8_t x403 = INT8_MIN;
	volatile uint32_t t91 = 1015277317U;

    t91 = ((x401%(x402|x403))*x404);

    if (t91 != 26574037U) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x405 = INT16_MIN;
	int16_t x406 = -1;
	static int32_t x407 = INT32_MIN;

    t92 = ((x405%(x406|x407))*x408);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x410 = INT16_MIN;
	int16_t x411 = -1;
	int64_t t93 = 959118980539142331LL;

    t93 = ((x409%(x410|x411))*x412);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x413 = -1;
	static int64_t x414 = 27678863067348LL;
	int32_t x416 = INT32_MIN;
	static volatile int64_t t94 = -8816511204706918LL;

    t94 = ((x413%(x414|x415))*x416);

    if (t94 != 2147483648LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x422 = -1;
	uint64_t x423 = 1822382013884252LLU;
	uint32_t x424 = 1802287956U;
	volatile uint64_t t95 = 7363470790121594096LLU;

    t95 = ((x421%(x422|x423))*x424);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x425 = INT64_MIN;
	int32_t x426 = INT32_MAX;
	uint64_t x427 = UINT64_MAX;
	int64_t x428 = INT64_MIN;

    t96 = ((x425%(x426|x427))*x428);

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x429 = INT16_MIN;
	int16_t x430 = 12202;
	uint32_t x432 = 922U;
	int64_t t97 = 1466LL;

    t97 = ((x429%(x430|x431))*x432);

    if (t97 != -30212096LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x433 = INT64_MIN;
	int64_t x435 = 3992370LL;
	volatile int64_t t98 = -20266399LL;

    t98 = ((x433%(x434|x435))*x436);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x437 = -27;
	uint64_t x438 = UINT64_MAX;
	uint32_t x439 = 234U;
	uint32_t x440 = UINT32_MAX;

    t99 = ((x437%(x438|x439))*x440);

    if (t99 != 18446743957745434651LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x443 = INT64_MAX;
	int64_t x444 = 6LL;
	int64_t t100 = 6712379368006LL;

    t100 = ((x441%(x442|x443))*x444);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x445 = 803U;
	int64_t x446 = 2838061579LL;
	int32_t x447 = INT32_MIN;
	static int64_t t101 = -6LL;

    t101 = ((x445%(x446|x447))*x448);

    if (t101 != -102784LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x449 = INT32_MIN;
	static volatile uint16_t x451 = 4U;
	static volatile int64_t x452 = INT64_MIN;
	int64_t t102 = -129417416919518LL;

    t102 = ((x449%(x450|x451))*x452);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x453 = -12544620015LL;
	int64_t x454 = -4498347305891042062LL;
	int16_t x456 = -15127;
	volatile int64_t t103 = 265160256427LL;

    t103 = ((x453%(x454|x455))*x456);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x462 = INT32_MAX;
	int32_t x463 = -990156;
	static int16_t x464 = -2028;
	volatile int32_t t104 = -217;

    t104 = ((x461%(x462|x463))*x464);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x465 = 67435793U;
	static uint64_t x467 = UINT64_MAX;
	uint64_t t105 = 4782005LLU;

    t105 = ((x465%(x466|x467))*x468);

    if (t105 != 5610574227934531699LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x469 = 0;
	static volatile int32_t x471 = INT32_MAX;
	int64_t x472 = -839457365720129LL;
	int64_t t106 = -29251507444557197LL;

    t106 = ((x469%(x470|x471))*x472);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x473 = -1LL;
	volatile int32_t x475 = 113780;
	int64_t x476 = -1211349LL;
	volatile int64_t t107 = -213769678LL;

    t107 = ((x473%(x474|x475))*x476);

    if (t107 != 1211349LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x477 = -1;
	uint16_t x478 = 433U;
	uint8_t x479 = UINT8_MAX;
	uint32_t x480 = 23997U;

    t108 = ((x477%(x478|x479))*x480);

    if (t108 != 4294943299U) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x481 = INT64_MIN;
	static int16_t x482 = INT16_MIN;
	uint64_t x483 = UINT64_MAX;
	uint32_t x484 = 53745U;
	volatile uint64_t t109 = 2395862986LLU;

    t109 = ((x481%(x482|x483))*x484);

    if (t109 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x485 = UINT32_MAX;
	int16_t x486 = INT16_MAX;
	uint32_t x487 = UINT32_MAX;
	volatile uint64_t t110 = 1812LLU;

    t110 = ((x485%(x486|x487))*x488);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x492 = INT8_MIN;

    t111 = ((x489%(x490|x491))*x492);

    if (t111 != -16256LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x493 = INT16_MIN;
	int8_t x494 = -1;
	uint32_t x495 = UINT32_MAX;
	static uint32_t t112 = 1364U;

    t112 = ((x493%(x494|x495))*x496);

    if (t112 != 4286611456U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x497 = 1U;
	uint8_t x499 = UINT8_MAX;
	static int8_t x500 = -1;
	volatile int32_t t113 = 836932810;

    t113 = ((x497%(x498|x499))*x500);

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x504 = -102322697;
	uint32_t t114 = 78573U;

    t114 = ((x501%(x502|x503))*x504);

    if (t114 != 2359886976U) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x505 = -1;
	int32_t x507 = INT32_MAX;
	uint32_t x508 = UINT32_MAX;
	volatile uint32_t t115 = 3686250U;

    t115 = ((x505%(x506|x507))*x508);

    if (t115 != 1U) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x510 = -1625LL;
	volatile int8_t x512 = 60;
	volatile int64_t t116 = -3760774758288LL;

    t116 = ((x509%(x510|x511))*x512);

    if (t116 != -60LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x514 = 27819505;
	int64_t x515 = INT64_MAX;
	volatile uint64_t x516 = UINT64_MAX;
	static volatile uint64_t t117 = 1023683441905647LLU;

    t117 = ((x513%(x514|x515))*x516);

    if (t117 != 18446744073709551533LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x518 = INT8_MIN;
	uint64_t x519 = UINT64_MAX;
	int8_t x520 = INT8_MAX;
	uint64_t t118 = 224LLU;

    t118 = ((x517%(x518|x519))*x520);

    if (t118 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x521 = INT8_MIN;
	int64_t x523 = INT64_MIN;
	volatile uint8_t x524 = 0U;
	volatile int64_t t119 = -53603080795963LL;

    t119 = ((x521%(x522|x523))*x524);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x527 = 1451LL;
	volatile uint64_t x528 = UINT64_MAX;

    t120 = ((x525%(x526|x527))*x528);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x529 = INT64_MIN;
	uint32_t x530 = 164815074U;
	static int64_t x531 = INT64_MIN;
	int64_t x532 = -1LL;
	volatile int64_t t121 = 5424173LL;

    t121 = ((x529%(x530|x531))*x532);

    if (t121 != 164815074LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x533 = -21LL;
	static uint8_t x534 = 0U;
	volatile uint8_t x535 = UINT8_MAX;
	int16_t x536 = INT16_MIN;

    t122 = ((x533%(x534|x535))*x536);

    if (t122 != 688128LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x537 = INT16_MIN;
	int16_t x540 = -3766;
	volatile int32_t t123 = -266480;

    t123 = ((x537%(x538|x539))*x540);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x541 = INT8_MIN;
	static uint8_t x542 = 14U;
	static uint8_t x543 = 20U;
	static uint64_t x544 = 263LLU;
	volatile uint64_t t124 = 395555896527346140LLU;

    t124 = ((x541%(x542|x543))*x544);

    if (t124 != 18446744073709549512LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x546 = INT32_MAX;
	int8_t x547 = INT8_MIN;
	uint8_t x548 = UINT8_MAX;
	static int32_t t125 = 50053451;

    t125 = ((x545%(x546|x547))*x548);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x549 = -51LL;
	int64_t x550 = INT64_MIN;
	uint8_t x551 = 7U;
	static int32_t x552 = -1;
	int64_t t126 = 4074961LL;

    t126 = ((x549%(x550|x551))*x552);

    if (t126 != 51LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int8_t x553 = INT8_MIN;
	int16_t x554 = INT16_MIN;
	int64_t x555 = 17LL;
	uint8_t x556 = UINT8_MAX;
	int64_t t127 = 16948829293LL;

    t127 = ((x553%(x554|x555))*x556);

    if (t127 != -32640LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x557 = INT64_MIN;
	int64_t x558 = INT64_MIN;
	int16_t x559 = INT16_MIN;
	int64_t x560 = -1LL;
	int64_t t128 = -7LL;

    t128 = ((x557%(x558|x559))*x560);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x561 = INT64_MIN;
	int8_t x562 = 33;
	volatile uint32_t x563 = UINT32_MAX;
	int32_t x564 = -209680;
	static volatile int64_t t129 = -76685544929872619LL;

    t129 = ((x561%(x562|x563))*x564);

    if (t129 != 450284371312640LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x565 = -1541050;
	uint8_t x566 = 4U;
	static int32_t x568 = -1;
	static volatile int32_t t130 = 27203;

    t130 = ((x565%(x566|x567))*x568);

    if (t130 != 16) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x569 = INT64_MIN;
	int64_t x570 = INT64_MIN;
	static int64_t t131 = 16529549016562LL;

    t131 = ((x569%(x570|x571))*x572);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x573 = -13;
	static uint16_t x575 = UINT16_MAX;
	int32_t t132 = -2405237;

    t132 = ((x573%(x574|x575))*x576);

    if (t132 != 13) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x577 = -1;
	uint16_t x578 = UINT16_MAX;
	int16_t x579 = INT16_MAX;
	int8_t x580 = INT8_MIN;

    t133 = ((x577%(x578|x579))*x580);

    if (t133 != 128) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x581 = -11;
	int32_t x582 = -1;
	uint32_t x583 = 6149344U;
	uint16_t x584 = 191U;
	static uint32_t t134 = 8025960U;

    t134 = ((x581%(x582|x583))*x584);

    if (t134 != 4294965195U) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x585 = UINT64_MAX;
	static uint8_t x586 = 5U;
	int16_t x587 = INT16_MAX;
	int32_t x588 = INT32_MIN;
	uint64_t t135 = 8283887335393LLU;

    t135 = ((x585%(x586|x587))*x588);

    if (t135 != 18446744041497296896LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x589 = INT64_MAX;
	int32_t x590 = -1;
	volatile int16_t x591 = -1;
	uint16_t x592 = 186U;

    t136 = ((x589%(x590|x591))*x592);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x593 = -1LL;
	uint64_t x594 = 1722460147119LLU;
	volatile int64_t x595 = -4467567LL;
	volatile uint64_t x596 = 5241631122248408LLU;
	uint64_t t137 = 572166969217025265LLU;

    t137 = ((x593%(x594|x595))*x596);

    if (t137 != 14543667697835927040LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x597 = INT8_MIN;
	uint32_t x598 = 798080U;
	volatile int32_t x599 = INT32_MAX;
	int8_t x600 = -1;

    t138 = ((x597%(x598|x599))*x600);

    if (t138 != 2147483775U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x601 = INT16_MAX;
	static int64_t x602 = 48331258736683146LL;
	int8_t x603 = -41;
	volatile int16_t x604 = INT16_MIN;
	volatile int64_t t139 = -10434514128100996LL;

    t139 = ((x601%(x602|x603))*x604);

    if (t139 != -1015808LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x605 = -1;
	int16_t x606 = INT16_MIN;
	int8_t x607 = INT8_MAX;
	int16_t x608 = -1;
	static volatile int32_t t140 = 1212450;

    t140 = ((x605%(x606|x607))*x608);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint32_t x610 = 5U;
	int16_t x612 = 3160;
	volatile uint32_t t141 = 2039307U;

    t141 = ((x609%(x610|x611))*x612);

    if (t141 != 4169407856U) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x613 = INT32_MIN;
	int16_t x614 = INT16_MAX;
	uint64_t x615 = 233865415736357711LLU;
	int16_t x616 = INT16_MAX;
	volatile uint64_t t142 = 9139685943LLU;

    t142 = ((x613%(x614|x615))*x616);

    if (t142 != 10538110243519922098LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x621 = UINT64_MAX;
	static int64_t x622 = INT64_MIN;
	int16_t x623 = -1;
	volatile uint16_t x624 = 491U;
	volatile uint64_t t143 = 302685419135654405LLU;

    t143 = ((x621%(x622|x623))*x624);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x629 = 883;
	uint8_t x631 = UINT8_MAX;
	uint64_t t144 = 35LLU;

    t144 = ((x629%(x630|x631))*x632);

    if (t144 != 3274925053365353LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x633 = 0;
	int16_t x634 = 1901;
	int32_t x635 = INT32_MAX;
	static int16_t x636 = -43;
	volatile int32_t t145 = 0;

    t145 = ((x633%(x634|x635))*x636);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x637 = INT32_MAX;
	static int64_t x638 = 109176649LL;
	volatile int16_t x640 = -8700;
	int64_t t146 = 11235065063326448LL;

    t146 = ((x637%(x638|x639))*x640);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x643 = UINT8_MAX;
	int16_t x644 = -7857;

    t147 = ((x641%(x642|x643))*x644);

    if (t147 != 4292963761U) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x646 = INT16_MAX;
	static uint16_t x647 = UINT16_MAX;
	int16_t x648 = -1;
	int32_t t148 = 41;

    t148 = ((x645%(x646|x647))*x648);

    if (t148 != 128) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x651 = 3U;
	volatile int64_t t149 = 162397LL;

    t149 = ((x649%(x650|x651))*x652);

    if (t149 != -583LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x653 = INT64_MAX;
	int16_t x654 = -10;
	uint16_t x655 = UINT16_MAX;
	int32_t x656 = INT32_MIN;
	int64_t t150 = 1068550266907LL;

    t150 = ((x653%(x654|x655))*x656);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x657 = 3658U;
	int64_t x658 = INT64_MIN;
	static int8_t x659 = INT8_MAX;
	volatile uint32_t x660 = 21U;
	volatile int64_t t151 = -543219827LL;

    t151 = ((x657%(x658|x659))*x660);

    if (t151 != 76818LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x661 = -1LL;
	static uint64_t x662 = 144LLU;
	uint64_t x663 = 159865280LLU;
	static int64_t x664 = -46105792278LL;
	volatile uint64_t t152 = 167284451LLU;

    t152 = ((x661%(x662|x663))*x664);

    if (t152 != 14138584217803230838LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x665 = -1;
	int16_t x666 = -328;
	volatile int8_t x667 = INT8_MIN;
	int32_t t153 = 9729;

    t153 = ((x665%(x666|x667))*x668);

    if (t153 != -7) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x671 = INT8_MIN;
	static int64_t x672 = -3066LL;
	int64_t t154 = 4454204459410354LL;

    t154 = ((x669%(x670|x671))*x672);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x674 = 3693229U;
	uint16_t x676 = 3684U;
	volatile uint32_t t155 = 29U;

    t155 = ((x673%(x674|x675))*x676);

    if (t155 != 14736U) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x677 = INT16_MIN;
	uint8_t x678 = 1U;
	int32_t x679 = -1;
	int16_t x680 = INT16_MIN;
	static int32_t t156 = 54245;

    t156 = ((x677%(x678|x679))*x680);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x681 = -31;
	static volatile int16_t x684 = INT16_MAX;

    t157 = ((x681%(x682|x683))*x684);

    if (t157 != -1015777LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x685 = -338915;
	uint32_t x686 = 2U;
	int8_t x687 = INT8_MIN;
	uint64_t x688 = 1447950372769LLU;
	volatile uint64_t t158 = 525857722LLU;

    t158 = ((x685%(x686|x687))*x688);

    if (t158 != 1856012333158062397LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x689 = -1;
	volatile int64_t x690 = -92491LL;
	static volatile uint8_t x691 = 1U;
	int16_t x692 = -1;
	int64_t t159 = 56LL;

    t159 = ((x689%(x690|x691))*x692);

    if (t159 != 1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x697 = INT64_MAX;
	volatile int64_t x698 = INT64_MIN;
	int64_t x699 = -1LL;
	volatile int16_t x700 = INT16_MIN;
	int64_t t160 = -4261326600393614LL;

    t160 = ((x697%(x698|x699))*x700);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x701 = 1;
	static int32_t x702 = INT32_MIN;
	uint32_t x704 = UINT32_MAX;
	volatile uint64_t t161 = 91315294753312LLU;

    t161 = ((x701%(x702|x703))*x704);

    if (t161 != 4294967295LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x706 = INT32_MIN;
	static volatile int8_t x708 = -1;
	int32_t t162 = 7;

    t162 = ((x705%(x706|x707))*x708);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x709 = -19LL;
	volatile int8_t x710 = INT8_MIN;
	uint32_t x711 = 1612344U;
	volatile uint8_t x712 = 6U;

    t163 = ((x709%(x710|x711))*x712);

    if (t163 != -114LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x718 = UINT16_MAX;
	uint32_t x719 = 90U;
	int32_t x720 = INT32_MIN;
	volatile uint64_t t164 = 5361264844036563283LLU;

    t164 = ((x717%(x718|x719))*x720);

    if (t164 != 18446726380591775744LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x721 = INT64_MAX;
	int64_t x722 = -22429LL;
	uint8_t x723 = 0U;
	int16_t x724 = INT16_MIN;
	int64_t t165 = -2LL;

    t165 = ((x721%(x722|x723))*x724);

    if (t165 != -247496704LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x725 = -1;
	int64_t x726 = INT64_MIN;
	int16_t x728 = INT16_MIN;
	int64_t t166 = 12207735681522LL;

    t166 = ((x725%(x726|x727))*x728);

    if (t166 != 32768LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x729 = INT16_MAX;
	int8_t x730 = INT8_MAX;
	uint32_t x731 = UINT32_MAX;
	int16_t x732 = 0;
	uint32_t t167 = 8038487U;

    t167 = ((x729%(x730|x731))*x732);

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x734 = 79090U;
	volatile int32_t x735 = INT32_MAX;
	static int64_t x736 = -1LL;
	int64_t t168 = -57LL;

    t168 = ((x733%(x734|x735))*x736);

    if (t168 != -1081042981LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x737 = INT64_MIN;
	static uint8_t x739 = 3U;
	static int32_t x740 = INT32_MIN;
	static volatile int64_t t169 = -127LL;

    t169 = ((x737%(x738|x739))*x740);

    if (t169 != 274877906944LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x741 = -1;
	volatile uint32_t x742 = UINT32_MAX;
	volatile uint32_t x743 = UINT32_MAX;
	uint8_t x744 = UINT8_MAX;
	uint32_t t170 = 1U;

    t170 = ((x741%(x742|x743))*x744);

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x745 = INT64_MIN;
	volatile int16_t x747 = INT16_MIN;
	int16_t x748 = INT16_MIN;
	volatile uint64_t t171 = 20001379LLU;

    t171 = ((x745%(x746|x747))*x748);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x749 = -1;
	uint64_t x750 = UINT64_MAX;
	int32_t x751 = 8;
	int8_t x752 = 23;
	volatile uint64_t t172 = 571906375LLU;

    t172 = ((x749%(x750|x751))*x752);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x755 = INT64_MAX;
	int8_t x756 = INT8_MIN;
	volatile int64_t t173 = -875373771264LL;

    t173 = ((x753%(x754|x755))*x756);

    if (t173 != 3822839936LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x757 = 2U;
	uint16_t x758 = 21U;
	int32_t x759 = 579145;
	uint32_t x760 = UINT32_MAX;

    t174 = ((x757%(x758|x759))*x760);

    if (t174 != 4294967294U) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x761 = 204598370U;
	uint32_t t175 = 45U;

    t175 = ((x761%(x762|x763))*x764);

    if (t175 != 4286822016U) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x766 = INT16_MIN;
	static uint64_t x767 = 0LLU;
	static volatile int8_t x768 = -1;
	static volatile uint64_t t176 = 129067871LLU;

    t176 = ((x765%(x766|x767))*x768);

    if (t176 != 18446744073709543786LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x769 = 175U;
	static uint8_t x770 = 50U;
	static int16_t x772 = -1;
	volatile int32_t t177 = 887695;

    t177 = ((x769%(x770|x771))*x772);

    if (t177 != -25) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x773 = -993109;
	int16_t x775 = -1;
	uint16_t x776 = UINT16_MAX;
	int32_t t178 = -228575;

    t178 = ((x773%(x774|x775))*x776);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x777 = INT8_MAX;
	static uint32_t x778 = UINT32_MAX;
	static uint32_t t179 = 947U;

    t179 = ((x777%(x778|x779))*x780);

    if (t179 != 4294967169U) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x781 = 1;
	uint32_t x782 = 5103082U;
	uint32_t t180 = 13329U;

    t180 = ((x781%(x782|x783))*x784);

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x786 = 92345U;
	volatile int16_t x787 = -1;
	static volatile uint16_t x788 = 0U;
	uint32_t t181 = 6U;

    t181 = ((x785%(x786|x787))*x788);

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x790 = 839278946015LLU;
	volatile int16_t x791 = 133;
	int8_t x792 = -22;
	uint64_t t182 = 6LLU;

    t182 = ((x789%(x790|x791))*x792);

    if (t182 != 18446738812885120380LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x793 = INT16_MIN;
	int64_t x795 = -1LL;
	int64_t t183 = -367457149429720LL;

    t183 = ((x793%(x794|x795))*x796);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x797 = 2;
	uint32_t x798 = UINT32_MAX;
	int32_t x799 = -1;
	uint32_t t184 = 1542599U;

    t184 = ((x797%(x798|x799))*x800);

    if (t184 != 2672U) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x801 = -1;
	int32_t x802 = 366;
	uint32_t x803 = UINT32_MAX;
	int16_t x804 = -7;
	uint32_t t185 = 2838581U;

    t185 = ((x801%(x802|x803))*x804);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x806 = UINT32_MAX;
	static int64_t x807 = INT64_MIN;
	int32_t x808 = -55;

    t186 = ((x805%(x806|x807))*x808);

    if (t186 != -44605LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x809 = 1;
	int16_t x812 = INT16_MAX;
	volatile int32_t t187 = -481;

    t187 = ((x809%(x810|x811))*x812);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x813 = 57006310018LLU;
	int8_t x814 = INT8_MIN;
	int16_t x815 = INT16_MIN;
	volatile uint32_t x816 = UINT32_MAX;
	uint64_t t188 = 752497LLU;

    t188 = ((x813%(x814|x815))*x816);

    if (t188 != 5032564177716690302LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x817 = INT16_MIN;
	volatile int16_t x818 = -2;
	int64_t x819 = INT64_MAX;
	int8_t x820 = -1;
	int64_t t189 = -39201863772191LL;

    t189 = ((x817%(x818|x819))*x820);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x822 = 2720U;
	volatile uint64_t t190 = 3811646766631LLU;

    t190 = ((x821%(x822|x823))*x824);

    if (t190 != 4953LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x825 = -66453861107LL;
	volatile uint64_t x827 = 3004124874LLU;
	static uint64_t x828 = 56LLU;
	volatile uint64_t t191 = 248164687862099725LLU;

    t191 = ((x825%(x826|x827))*x828);

    if (t191 != 134992063864LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x830 = 7124627105LL;
	uint64_t x831 = 633696LLU;
	static int64_t x832 = INT64_MAX;
	volatile uint64_t t192 = 2187979464295253LLU;

    t192 = ((x829%(x830|x831))*x832);

    if (t192 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x833 = -1;
	int64_t x834 = INT64_MIN;
	static volatile int64_t x835 = 1356575281911862333LL;
	volatile uint16_t x836 = 17U;
	volatile int64_t t193 = 1372030LL;

    t193 = ((x833%(x834|x835))*x836);

    if (t193 != -17LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x837 = 708LLU;
	int32_t x839 = -1;
	int8_t x840 = INT8_MIN;
	volatile uint64_t t194 = 2192690LLU;

    t194 = ((x837%(x838|x839))*x840);

    if (t194 != 18446744073709460992LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x841 = INT8_MAX;
	uint16_t x842 = UINT16_MAX;
	int8_t x843 = -42;
	uint16_t x844 = UINT16_MAX;
	static int32_t t195 = 3;

    t195 = ((x841%(x842|x843))*x844);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x845 = 0;
	int16_t x846 = INT16_MIN;
	volatile int64_t x847 = 952827599233358LL;
	volatile uint32_t x848 = 257U;
	volatile int64_t t196 = -180236923LL;

    t196 = ((x845%(x846|x847))*x848);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x849 = -1LL;
	static int32_t x850 = -1;
	int64_t x852 = -1LL;
	int64_t t197 = 5818685218LL;

    t197 = ((x849%(x850|x851))*x852);

    if (t197 != 1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x853 = 0LL;
	volatile int32_t x854 = 72;
	int16_t x855 = INT16_MIN;
	uint8_t x856 = 11U;
	int64_t t198 = 6948103LL;

    t198 = ((x853%(x854|x855))*x856);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x857 = 91U;
	static int64_t x858 = INT64_MAX;
	uint32_t x859 = 294165U;
	int64_t x860 = 0LL;
	volatile int64_t t199 = -23351922970880LL;

    t199 = ((x857%(x858|x859))*x860);

    if (t199 != 0LL) { NG(); } else { ; }
	
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


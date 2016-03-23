
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

static uint8_t x7 = UINT8_MAX;
volatile uint8_t x12 = UINT8_MAX;
volatile int64_t x13 = INT64_MAX;
volatile int32_t x15 = 288;
uint16_t x16 = 30U;
static uint8_t x18 = UINT8_MAX;
volatile uint8_t x20 = 1U;
uint32_t x21 = 5633U;
uint32_t x24 = 6481U;
volatile uint32_t t5 = 3993538U;
volatile int8_t x35 = 0;
static uint32_t x36 = UINT32_MAX;
uint32_t t8 = 140408658U;
uint8_t x38 = UINT8_MAX;
int8_t x40 = -5;
volatile uint16_t x41 = 802U;
static uint16_t x44 = 4042U;
volatile int64_t t10 = -222957292LL;
volatile int16_t x48 = INT16_MIN;
int8_t x49 = INT8_MIN;
int64_t x50 = INT64_MIN;
volatile int64_t x75 = -30233308062602896LL;
static int64_t t15 = -2992205167810LL;
int16_t x77 = INT16_MAX;
int32_t x80 = INT32_MIN;
int16_t x84 = INT16_MAX;
uint8_t x90 = UINT8_MAX;
static uint8_t x91 = 15U;
uint64_t x94 = 1LLU;
int8_t x105 = INT8_MIN;
uint32_t x106 = UINT32_MAX;
uint16_t x107 = UINT16_MAX;
volatile int8_t x109 = INT8_MIN;
volatile int64_t x112 = INT64_MIN;
int32_t x114 = INT32_MIN;
int16_t x116 = -1;
int8_t x118 = 8;
volatile int8_t x119 = 19;
static int8_t x122 = INT8_MIN;
static int32_t x132 = -1;
int64_t x135 = INT64_MIN;
static volatile int64_t t29 = 57919247628LL;
int64_t x141 = -1LL;
int16_t x142 = INT16_MAX;
int16_t x144 = INT16_MIN;
int32_t x148 = -1;
int64_t t33 = 0LL;
static volatile int16_t x160 = INT16_MIN;
uint8_t x164 = UINT8_MAX;
volatile uint32_t x182 = 1020U;
int32_t x189 = INT32_MIN;
volatile uint32_t x193 = UINT32_MAX;
int8_t x196 = INT8_MIN;
static int32_t x199 = -402;
int64_t x207 = INT64_MIN;
static int64_t t47 = 48716808108LL;
int64_t x222 = INT64_MIN;
int8_t x225 = INT8_MIN;
int64_t x230 = -1LL;
volatile uint32_t x239 = 7874931U;
int8_t x243 = INT8_MIN;
int16_t x254 = -1;
int16_t x255 = 2;
volatile int32_t x256 = 108520;
static int32_t x259 = 2;
uint8_t x262 = 1U;
int32_t x264 = -1;
static int32_t x265 = INT32_MIN;
volatile int16_t x268 = INT16_MIN;
volatile int64_t t59 = 3795266905600992LL;
int64_t x274 = INT64_MIN;
int32_t x275 = -1;
uint32_t x280 = 7801638U;
volatile int64_t t63 = 1544965LL;
static uint32_t x290 = 2105U;
int64_t x291 = INT64_MIN;
static uint64_t x294 = UINT64_MAX;
volatile uint64_t x306 = 15953LLU;
int8_t x308 = INT8_MIN;
int32_t x310 = INT32_MIN;
uint16_t x313 = 1U;
uint64_t t69 = 100762959160LLU;
volatile uint16_t x321 = 45U;
volatile uint64_t x322 = 589482571LLU;
int8_t x323 = 21;
int64_t x324 = -50038991LL;
static int32_t x325 = INT32_MIN;
volatile uint16_t x327 = 515U;
volatile int16_t x328 = -1;
volatile uint32_t x335 = 0U;
int64_t x342 = -1LL;
volatile int64_t x344 = 2004371592LL;
static int64_t t75 = -4832877LL;
volatile int64_t x358 = -20LL;
int32_t x360 = INT32_MIN;
int32_t x368 = -1;
volatile int64_t t80 = 50776578285LL;
int16_t x379 = INT16_MIN;
volatile int64_t t83 = -387322443201115889LL;
volatile int32_t x390 = -1;
static int32_t x396 = -20324;
uint32_t x402 = 20649U;
int16_t x409 = -1;
uint8_t x410 = 0U;
int8_t x413 = -1;
volatile uint32_t x422 = 4U;
uint8_t x428 = 0U;
volatile uint32_t t90 = 331U;
static int16_t x432 = -1;
volatile int32_t t92 = 9641;
uint32_t x442 = UINT32_MAX;
uint8_t x443 = 79U;
int16_t x444 = INT16_MAX;
volatile uint32_t t94 = 1399237281U;
int32_t x445 = INT32_MIN;
uint32_t x447 = UINT32_MAX;
volatile int16_t x448 = 2832;
uint64_t t96 = 972542990078633822LLU;
int16_t x474 = INT16_MAX;
int32_t x480 = INT32_MIN;
int32_t x486 = INT32_MIN;
uint64_t x491 = 50LLU;
static uint8_t x493 = 10U;
uint64_t x498 = 0LLU;
uint32_t x499 = 2U;
volatile uint16_t x504 = UINT16_MAX;
static int64_t x505 = INT64_MIN;
int64_t x517 = -1LL;
uint32_t x518 = 2024612U;
static int32_t x521 = -1;
static int16_t x523 = INT16_MAX;
volatile uint64_t t115 = 944LLU;
int8_t x546 = -6;
int32_t x547 = -1;
volatile uint32_t t117 = 497U;
int32_t x553 = -1;
volatile int32_t x556 = INT32_MAX;
uint16_t x565 = 4U;
int8_t x577 = INT8_MIN;
int8_t x580 = -19;
int32_t t123 = -7346;
uint8_t x590 = 1U;
int8_t x594 = INT8_MAX;
int32_t x596 = INT32_MAX;
uint16_t x599 = 1295U;
uint16_t x602 = 13U;
int32_t x607 = -1;
uint16_t x616 = 11286U;
static int32_t x620 = INT32_MIN;
volatile int8_t x622 = -1;
int64_t x623 = INT64_MIN;
int32_t x640 = 0;
static int64_t t138 = 312179254LL;
int64_t x653 = -3465815524974LL;
volatile int32_t x661 = -14351604;
volatile int16_t x662 = -1;
static int16_t x666 = 7;
uint64_t x673 = 1LLU;
static int32_t x687 = -117519;
uint16_t x692 = 88U;
static int64_t t148 = 1LL;
int64_t x704 = INT64_MIN;
static int32_t x712 = INT32_MIN;
int8_t x727 = 28;
int64_t t154 = 551204147727619083LL;
int32_t x738 = INT32_MIN;
int64_t x742 = INT64_MAX;
volatile int8_t x743 = -26;
volatile int64_t t158 = 207950095816420LL;
int32_t x745 = INT32_MAX;
uint32_t x747 = UINT32_MAX;
volatile int32_t x754 = 736961757;
int32_t t162 = -1633;
static uint8_t x778 = 77U;
int8_t x779 = INT8_MIN;
int64_t x783 = INT64_MIN;
int64_t t165 = -654115037284LL;
uint16_t x804 = 30U;
uint64_t x807 = 1628LLU;
int32_t x812 = -1;
volatile int64_t x813 = -1LL;
uint32_t x815 = UINT32_MAX;
int32_t x816 = INT32_MIN;
volatile int64_t t173 = 3LL;
static volatile int64_t x818 = -568050550582LL;
volatile uint8_t x820 = 0U;
uint64_t t175 = 19354LLU;
int8_t x831 = 21;
static int64_t x838 = -1LL;
uint16_t x861 = 1U;
uint32_t x876 = 1805868097U;
volatile int32_t x878 = INT32_MIN;
int8_t x880 = INT8_MAX;
volatile uint64_t t183 = 589481786586LLU;
uint32_t t184 = 1415985828U;
int32_t x896 = -5251;
volatile int8_t x915 = -3;
int64_t t190 = 666645040212148953LL;
static int8_t x931 = INT8_MIN;
int64_t x934 = 1LL;
int64_t t193 = 3639LL;
int8_t x939 = 0;
static int32_t x949 = INT32_MIN;
int64_t x951 = -1LL;
uint16_t x958 = 13U;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int16_t x2 = INT16_MIN;
	uint64_t x3 = UINT64_MAX;
	static int8_t x4 = INT8_MIN;
	volatile uint64_t t0 = 19295793620LLU;

    t0 = (x1%(x2-(x3|x4)));

    if (t0 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -10192;
	int16_t x6 = INT16_MIN;
	static int16_t x8 = -1;
	volatile int32_t t1 = -212;

    t1 = (x5%(x6-(x7|x8)));

    if (t1 != -10192) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	uint64_t x10 = 59163180608431LLU;
	int32_t x11 = INT32_MIN;
	uint64_t t2 = 8502387854164836LLU;

    t2 = (x9%(x10-(x11|x12)));

    if (t2 != 585256389423LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = -26331480;
	volatile int64_t t3 = -1LL;

    t3 = (x13%(x14-(x15|x16)));

    if (t3 != 23792359LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	uint8_t x19 = 68U;
	static int32_t t4 = 30;

    t4 = (x17%(x18-(x19|x20)));

    if (t4 != -32) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = INT16_MIN;
	int8_t x23 = 1;

    t5 = (x21%(x22-(x23|x24)));

    if (t5 != 5633U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	int32_t x26 = INT32_MIN;
	int32_t x27 = 3;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = 32351LLU;

    t6 = (x25%(x26-(x27|x28)));

    if (t6 != 2147450879LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	uint16_t x30 = 28U;
	int32_t x31 = INT32_MIN;
	int32_t x32 = 54;
	volatile int32_t t7 = 427355;

    t7 = (x29%(x30-(x31|x32)));

    if (t7 != -26) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = 0;
	int8_t x34 = 59;

    t8 = (x33%(x34-(x35|x36)));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 15008618445136LLU;
	volatile int64_t x39 = 81868319LL;
	uint64_t t9 = 39981542329844LLU;

    t9 = (x37%(x38-(x39|x40)));

    if (t9 != 80LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x42 = INT64_MIN;
	volatile int32_t x43 = INT32_MIN;

    t10 = (x41%(x42-(x43|x44)));

    if (t10 != 802LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = -114LL;
	uint16_t x46 = 62U;
	uint64_t x47 = UINT64_MAX;
	uint64_t t11 = 105185181074LLU;

    t11 = (x45%(x46-(x47|x48)));

    if (t11 != 28LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x51 = INT64_MIN;
	uint16_t x52 = 2U;
	static int64_t t12 = 7506509867LL;

    t12 = (x49%(x50-(x51|x52)));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x57 = -1;
	uint8_t x58 = UINT8_MAX;
	static int32_t x59 = -6253976;
	int8_t x60 = -1;
	volatile int32_t t13 = -4104;

    t13 = (x57%(x58-(x59|x60)));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = INT64_MIN;
	volatile uint16_t x62 = 15U;
	volatile int16_t x63 = 98;
	int32_t x64 = INT32_MAX;
	volatile int64_t t14 = 483646101014117LL;

    t14 = (x61%(x62-(x63|x64)));

    if (t14 != -512LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x73 = INT64_MAX;
	volatile uint32_t x74 = 3601720U;
	int8_t x76 = -1;

    t15 = (x73%(x74-(x75|x76)));

    if (t15 != 2827848LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x78 = INT32_MIN;
	uint64_t x79 = 66401376625044LLU;
	uint64_t t16 = 26981358321LLU;

    t16 = (x77%(x78-(x79|x80)));

    if (t16 != 32767LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x81 = 122549686797LL;
	static uint16_t x82 = UINT16_MAX;
	uint64_t x83 = UINT64_MAX;
	volatile uint64_t t17 = 65937778889LLU;

    t17 = (x81%(x82-(x83|x84)));

    if (t17 != 53773LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x89 = UINT64_MAX;
	uint16_t x92 = 67U;
	uint64_t t18 = 90776LLU;

    t18 = (x89%(x90-(x91|x92)));

    if (t18 != 15LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x93 = UINT64_MAX;
	int32_t x95 = INT32_MIN;
	int8_t x96 = 15;
	uint64_t t19 = 521579493137218LLU;

    t19 = (x93%(x94-(x95|x96)));

    if (t19 != 783LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x97 = 44U;
	uint64_t x98 = 12891066396696LLU;
	volatile uint64_t x99 = UINT64_MAX;
	uint32_t x100 = 2061717752U;
	volatile uint64_t t20 = 59624544436909LLU;

    t20 = (x97%(x98-(x99|x100)));

    if (t20 != 44LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x101 = 16294;
	volatile uint8_t x102 = UINT8_MAX;
	int32_t x103 = INT32_MAX;
	int64_t x104 = -87974033388LL;
	static volatile int64_t t21 = 25LL;

    t21 = (x101%(x102-(x103|x104)));

    if (t21 != 16294LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x108 = UINT64_MAX;
	uint64_t t22 = 807683LLU;

    t22 = (x105%(x106-(x107|x108)));

    if (t22 != 4294967168LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x110 = 1;
	int32_t x111 = 514309;
	volatile int64_t t23 = 46435835LL;

    t23 = (x109%(x110-(x111|x112)));

    if (t23 != -128LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x113 = INT32_MIN;
	static int16_t x115 = INT16_MIN;
	static volatile int32_t t24 = -63;

    t24 = (x113%(x114-(x115|x116)));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x117 = INT16_MIN;
	int8_t x120 = INT8_MIN;
	int32_t t25 = 433;

    t25 = (x117%(x118-(x119|x120)));

    if (t25 != -8) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x121 = -1;
	uint8_t x123 = UINT8_MAX;
	int32_t x124 = INT32_MIN;
	int32_t t26 = 74353;

    t26 = (x121%(x122-(x123|x124)));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x125 = UINT64_MAX;
	uint32_t x126 = UINT32_MAX;
	int64_t x127 = -188534319914653LL;
	volatile int8_t x128 = -1;
	volatile uint64_t t27 = 613124817315314239LLU;

    t27 = (x125%(x126-(x127|x128)));

    if (t27 != 4294967295LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x129 = INT8_MIN;
	int8_t x130 = -33;
	uint32_t x131 = UINT32_MAX;
	volatile uint32_t t28 = 27281901U;

    t28 = (x129%(x130-(x131|x132)));

    if (t28 != 4294967168U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x133 = 3U;
	int32_t x134 = -483554;
	uint8_t x136 = UINT8_MAX;

    t29 = (x133%(x134-(x135|x136)));

    if (t29 != 3LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x143 = 24730U;
	volatile int64_t t30 = 6295390930LL;

    t30 = (x141%(x142-(x143|x144)));

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x145 = INT16_MIN;
	static uint8_t x146 = 10U;
	int32_t x147 = -968001870;
	volatile int32_t t31 = -7492;

    t31 = (x145%(x146-(x147|x148)));

    if (t31 != -10) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x149 = INT64_MIN;
	volatile uint32_t x150 = 35U;
	uint16_t x151 = 14U;
	volatile uint64_t x152 = UINT64_MAX;
	uint64_t t32 = 601473482235253792LLU;

    t32 = (x149%(x150-(x151|x152)));

    if (t32 != 8LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x153 = INT64_MAX;
	static uint32_t x154 = 784840U;
	int8_t x155 = INT8_MIN;
	volatile int64_t x156 = INT64_MIN;

    t33 = (x153%(x154-(x155|x156)));

    if (t33 != 86239LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x157 = -1LL;
	static int64_t x158 = -76194LL;
	uint32_t x159 = 76805872U;
	volatile int64_t t34 = -11318441LL;

    t34 = (x157%(x158-(x159|x160)));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x161 = INT8_MAX;
	uint32_t x162 = 950398920U;
	int8_t x163 = -1;
	volatile uint32_t t35 = 5651852U;

    t35 = (x161%(x162-(x163|x164)));

    if (t35 != 127U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x165 = -1;
	uint16_t x166 = 3U;
	int16_t x167 = INT16_MAX;
	int32_t x168 = -112046;
	int32_t t36 = -1;

    t36 = (x165%(x166-(x167|x168)));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x169 = INT32_MAX;
	static int64_t x170 = INT64_MIN;
	uint64_t x171 = UINT64_MAX;
	int16_t x172 = -2834;
	uint64_t t37 = 243LLU;

    t37 = (x169%(x170-(x171|x172)));

    if (t37 != 2147483647LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x173 = 0U;
	int64_t x174 = 5LL;
	uint32_t x175 = 98519665U;
	static int32_t x176 = -1;
	volatile int64_t t38 = -128485355344317LL;

    t38 = (x173%(x174-(x175|x176)));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x177 = -1LL;
	uint64_t x178 = 39563LLU;
	static uint64_t x179 = 54408798LLU;
	static uint8_t x180 = 2U;
	volatile uint64_t t39 = 527703131104621LLU;

    t39 = (x177%(x178-(x179|x180)));

    if (t39 != 54369234LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x181 = -1;
	int32_t x183 = -21166489;
	int32_t x184 = -1461;
	uint32_t t40 = 2623U;

    t40 = (x181%(x182-(x183|x184)));

    if (t40 != 479U) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x185 = INT16_MIN;
	volatile uint64_t x186 = UINT64_MAX;
	int16_t x187 = -2;
	uint32_t x188 = 2U;
	uint64_t t41 = 16678074LLU;

    t41 = (x185%(x186-(x187|x188)));

    if (t41 != 4294934527LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x190 = 2439;
	static volatile int8_t x191 = INT8_MIN;
	int16_t x192 = INT16_MIN;
	int32_t t42 = 48025459;

    t42 = (x189%(x190-(x191|x192)));

    if (t42 != -757) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x194 = 48LLU;
	volatile uint64_t x195 = UINT64_MAX;
	volatile uint64_t t43 = 1473972863133059LLU;

    t43 = (x193%(x194-(x195|x196)));

    if (t43 != 38LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x197 = INT8_MAX;
	volatile uint16_t x198 = UINT16_MAX;
	int16_t x200 = 9;
	int32_t t44 = 40918468;

    t44 = (x197%(x198-(x199|x200)));

    if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x201 = 1459950U;
	uint8_t x202 = UINT8_MAX;
	uint16_t x203 = 2863U;
	volatile uint64_t x204 = 42953532LLU;
	uint64_t t45 = 5656457003134871LLU;

    t45 = (x201%(x202-(x203|x204)));

    if (t45 != 1459950LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x205 = 105LL;
	int64_t x206 = INT64_MIN;
	int8_t x208 = INT8_MAX;
	int64_t t46 = 59525389LL;

    t46 = (x205%(x206-(x207|x208)));

    if (t46 != 105LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x209 = 5589;
	uint16_t x210 = UINT16_MAX;
	int64_t x211 = INT64_MIN;
	int32_t x212 = INT32_MAX;

    t47 = (x209%(x210-(x211|x212)));

    if (t47 != 5589LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x213 = INT16_MAX;
	int64_t x214 = -52822121026988052LL;
	int64_t x215 = INT64_MAX;
	volatile uint64_t x216 = 641945965060431960LLU;
	uint64_t t48 = 4352575800248133LLU;

    t48 = (x213%(x214-(x215|x216)));

    if (t48 != 32767LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x221 = 693776016;
	int32_t x223 = INT32_MAX;
	static int64_t x224 = -46LL;
	static int64_t t49 = 1018261001579536LL;

    t49 = (x221%(x222-(x223|x224)));

    if (t49 != 693776016LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x226 = 2331U;
	volatile int32_t x227 = INT32_MIN;
	volatile int32_t x228 = -1;
	int32_t t50 = 4426;

    t50 = (x225%(x226-(x227|x228)));

    if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x229 = 12256U;
	volatile int32_t x231 = INT32_MIN;
	volatile uint16_t x232 = UINT16_MAX;
	volatile int64_t t51 = 19418535LL;

    t51 = (x229%(x230-(x231|x232)));

    if (t51 != 12256LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x233 = UINT32_MAX;
	uint8_t x234 = 13U;
	int64_t x235 = -1LL;
	uint32_t x236 = 13781670U;
	static int64_t t52 = 2105590812LL;

    t52 = (x233%(x234-(x235|x236)));

    if (t52 != 3LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x237 = 5U;
	volatile uint8_t x238 = 43U;
	int8_t x240 = -9;
	volatile uint32_t t53 = 239237018U;

    t53 = (x237%(x238-(x239|x240)));

    if (t53 != 5U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x241 = -4096816;
	int16_t x242 = INT16_MIN;
	volatile uint8_t x244 = UINT8_MAX;
	int32_t t54 = -1459;

    t54 = (x241%(x242-(x243|x244)));

    if (t54 != -941) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x245 = 1U;
	static uint16_t x246 = 6U;
	static int8_t x247 = INT8_MIN;
	int8_t x248 = -1;
	volatile int32_t t55 = 368;

    t55 = (x245%(x246-(x247|x248)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x253 = INT64_MIN;
	int64_t t56 = -2295LL;

    t56 = (x253%(x254-(x255|x256)));

    if (t56 != -89242LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x257 = INT32_MIN;
	uint64_t x258 = 1817059445LLU;
	int32_t x260 = -1;
	volatile uint64_t t57 = 582852301LLU;

    t57 = (x257%(x258-(x259|x260)));

    if (t57 != 1673767922LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x261 = -1LL;
	uint32_t x263 = UINT32_MAX;
	int64_t t58 = -2025363LL;

    t58 = (x261%(x262-(x263|x264)));

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x266 = -23983163144LL;
	int64_t x267 = -1LL;

    t59 = (x265%(x266-(x267|x268)));

    if (t59 != -2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x273 = 5U;
	uint64_t x276 = 361261502419LLU;
	static uint64_t t60 = 716978122386680306LLU;

    t60 = (x273%(x274-(x275|x276)));

    if (t60 != 5LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x277 = 4141U;
	volatile int16_t x278 = -1;
	volatile uint16_t x279 = 16U;
	uint32_t t61 = 219490U;

    t61 = (x277%(x278-(x279|x280)));

    if (t61 != 4141U) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x281 = 0;
	static int32_t x282 = 1;
	int16_t x283 = INT16_MIN;
	int8_t x284 = 2;
	static int32_t t62 = 4;

    t62 = (x281%(x282-(x283|x284)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int8_t x285 = INT8_MIN;
	int64_t x286 = 711568428739192934LL;
	volatile int8_t x287 = INT8_MIN;
	volatile int8_t x288 = -9;

    t63 = (x285%(x286-(x287|x288)));

    if (t63 != -128LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x289 = -1;
	int32_t x292 = -1;
	int64_t t64 = -35861661941510075LL;

    t64 = (x289%(x290-(x291|x292)));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x293 = UINT64_MAX;
	uint64_t x295 = 2448741948573626LLU;
	int32_t x296 = INT32_MIN;
	uint64_t t65 = 59857LLU;

    t65 = (x293%(x294-(x295|x296)));

    if (t65 != 36652410LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x301 = 3575U;
	int16_t x302 = INT16_MAX;
	int16_t x303 = INT16_MIN;
	int8_t x304 = -1;
	uint32_t t66 = 0U;

    t66 = (x301%(x302-(x303|x304)));

    if (t66 != 3575U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x305 = INT8_MAX;
	static volatile uint32_t x307 = 1U;
	volatile uint64_t t67 = 3626055LLU;

    t67 = (x305%(x306-(x307|x308)));

    if (t67 != 127LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x309 = INT64_MIN;
	int8_t x311 = -1;
	volatile int16_t x312 = 46;
	volatile int64_t t68 = -163305228799491LL;

    t68 = (x309%(x310-(x311|x312)));

    if (t68 != -2LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x314 = 0;
	uint64_t x315 = 118LLU;
	int64_t x316 = INT64_MIN;

    t69 = (x313%(x314-(x315|x316)));

    if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x317 = 4;
	static volatile uint8_t x318 = 7U;
	volatile int16_t x319 = INT16_MIN;
	volatile uint32_t x320 = 502649838U;
	uint32_t t70 = 1U;

    t70 = (x317%(x318-(x319|x320)));

    if (t70 != 4U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t t71 = 78365386882LLU;

    t71 = (x321%(x322-(x323|x324)));

    if (t71 != 45LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x326 = INT16_MAX;
	volatile int32_t t72 = 10994662;

    t72 = (x325%(x326-(x327|x328)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x333 = 5680727U;
	uint64_t x334 = 1192269186490LLU;
	int8_t x336 = -1;
	static uint64_t t73 = 16021913308LLU;

    t73 = (x333%(x334-(x335|x336)));

    if (t73 != 5680727LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x341 = 8U;
	volatile int32_t x343 = INT32_MAX;
	int64_t t74 = -902988016561LL;

    t74 = (x341%(x342-(x343|x344)));

    if (t74 != 8LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x345 = -1;
	uint16_t x346 = UINT16_MAX;
	static int32_t x347 = INT32_MAX;
	int64_t x348 = -1LL;

    t75 = (x345%(x346-(x347|x348)));

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x349 = 0;
	static int16_t x350 = -1;
	uint64_t x351 = 1333668LLU;
	static int32_t x352 = INT32_MIN;
	uint64_t t76 = 233128841569647174LLU;

    t76 = (x349%(x350-(x351|x352)));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x353 = 1073061U;
	int32_t x354 = -1;
	int32_t x355 = INT32_MIN;
	int64_t x356 = -24007LL;
	int64_t t77 = 1868122630474126LL;

    t77 = (x353%(x354-(x355|x356)));

    if (t77 != 16797LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x357 = INT16_MIN;
	volatile int8_t x359 = INT8_MIN;
	int64_t t78 = 316757LL;

    t78 = (x357%(x358-(x359|x360)));

    if (t78 != -44LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x365 = -1;
	static int16_t x366 = INT16_MIN;
	static int16_t x367 = INT16_MIN;
	int32_t t79 = 76;

    t79 = (x365%(x366-(x367|x368)));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x369 = UINT8_MAX;
	uint32_t x370 = UINT32_MAX;
	int64_t x371 = -1118562151433675LL;
	uint8_t x372 = 3U;

    t80 = (x369%(x370-(x371|x372)));

    if (t80 != 255LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x373 = -5926;
	static volatile uint8_t x374 = 0U;
	static int32_t x375 = INT32_MAX;
	uint32_t x376 = 1684991763U;
	volatile uint32_t t81 = 30U;

    t81 = (x373%(x374-(x375|x376)));

    if (t81 != 2147477721U) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x377 = 127675360LL;
	int8_t x378 = INT8_MIN;
	int32_t x380 = 26532798;
	int64_t t82 = -447736092213417604LL;

    t82 = (x377%(x378-(x379|x380)));

    if (t82 != 4522LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x381 = -1;
	int64_t x382 = -524LL;
	int32_t x383 = INT32_MAX;
	int32_t x384 = -1;

    t83 = (x381%(x382-(x383|x384)));

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x389 = -180;
	static int8_t x391 = -30;
	volatile int8_t x392 = INT8_MIN;
	volatile int32_t t84 = 1384;

    t84 = (x389%(x390-(x391|x392)));

    if (t84 != -6) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x393 = -1LL;
	int16_t x394 = INT16_MAX;
	int8_t x395 = INT8_MAX;
	int64_t t85 = -117887128LL;

    t85 = (x393%(x394-(x395|x396)));

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x401 = INT8_MAX;
	uint64_t x403 = 20981LLU;
	static int8_t x404 = INT8_MAX;
	uint64_t t86 = 1027LLU;

    t86 = (x401%(x402-(x403|x404)));

    if (t86 != 127LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x411 = 18U;
	volatile int64_t x412 = 1616832950LL;
	int64_t t87 = -94234LL;

    t87 = (x409%(x410-(x411|x412)));

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x414 = 15851479LLU;
	int32_t x415 = INT32_MAX;
	int16_t x416 = INT16_MAX;
	uint64_t t88 = 184035983228625428LLU;

    t88 = (x413%(x414-(x415|x416)));

    if (t88 != 2131632167LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x421 = INT32_MIN;
	static uint32_t x423 = 778357U;
	int8_t x424 = 0;
	static volatile uint32_t t89 = 0U;

    t89 = (x421%(x422-(x423|x424)));

    if (t89 != 2147483648U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x425 = UINT32_MAX;
	static int8_t x426 = INT8_MIN;
	static volatile int16_t x427 = -1;

    t90 = (x425%(x426-(x427|x428)));

    if (t90 != 126U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x429 = 1U;
	int8_t x430 = 1;
	static int64_t x431 = -1LL;
	int64_t t91 = 31981926LL;

    t91 = (x429%(x430-(x431|x432)));

    if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint16_t x433 = UINT16_MAX;
	uint16_t x434 = 835U;
	int8_t x435 = INT8_MAX;
	int8_t x436 = INT8_MIN;

    t92 = (x433%(x434-(x435|x436)));

    if (t92 != 327) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x437 = INT16_MIN;
	volatile int8_t x438 = INT8_MIN;
	static uint16_t x439 = 3623U;
	static uint64_t x440 = 53011322295741322LLU;
	uint64_t t93 = 24217278LLU;

    t93 = (x437%(x438-(x439|x440)));

    if (t93 != 53011322295709743LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x441 = INT16_MIN;

    t94 = (x441%(x442-(x443|x444)));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x446 = INT16_MIN;
	uint32_t t95 = 7U;

    t95 = (x445%(x446-(x447|x448)));

    if (t95 != 2147483648U) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int16_t x449 = INT16_MAX;
	int8_t x450 = 1;
	uint16_t x451 = 1787U;
	uint64_t x452 = 1452LLU;

    t96 = (x449%(x450-(x451|x452)));

    if (t96 != 32767LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x453 = 0U;
	int8_t x454 = 17;
	int8_t x455 = -13;
	static volatile int16_t x456 = -1;
	int32_t t97 = -12654926;

    t97 = (x453%(x454-(x455|x456)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x457 = -1;
	int64_t x458 = INT64_MIN;
	int16_t x459 = INT16_MIN;
	static int16_t x460 = -207;
	static int64_t t98 = 1111914791097946941LL;

    t98 = (x457%(x458-(x459|x460)));

    if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x461 = 2;
	volatile uint16_t x462 = 6887U;
	int16_t x463 = INT16_MAX;
	int16_t x464 = -3388;
	static int32_t t99 = -84873323;

    t99 = (x461%(x462-(x463|x464)));

    if (t99 != 2) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x465 = UINT64_MAX;
	int32_t x466 = INT32_MIN;
	volatile uint8_t x467 = 1U;
	static uint64_t x468 = UINT64_MAX;
	volatile uint64_t t100 = 9166687341663529LLU;

    t100 = (x465%(x466-(x467|x468)));

    if (t100 != 2147483646LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x473 = -250314LL;
	volatile int32_t x475 = INT32_MAX;
	volatile uint8_t x476 = 0U;
	volatile int64_t t101 = 42LL;

    t101 = (x473%(x474-(x475|x476)));

    if (t101 != -250314LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x477 = INT8_MAX;
	int32_t x478 = 2;
	int16_t x479 = INT16_MAX;
	int32_t t102 = 724;

    t102 = (x477%(x478-(x479|x480)));

    if (t102 != 127) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x485 = 30312606003LLU;
	uint32_t x487 = UINT32_MAX;
	int16_t x488 = -1;
	volatile uint64_t t103 = 669296287877194LLU;

    t103 = (x485%(x486-(x487|x488)));

    if (t103 != 247834917LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x489 = UINT8_MAX;
	int8_t x490 = INT8_MIN;
	int16_t x492 = INT16_MIN;
	volatile uint64_t t104 = 1052540850729854LLU;

    t104 = (x489%(x490-(x491|x492)));

    if (t104 != 255LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x494 = INT16_MIN;
	uint32_t x495 = 38418U;
	int64_t x496 = INT64_MIN;
	int64_t t105 = 3324544501514334LL;

    t105 = (x493%(x494-(x495|x496)));

    if (t105 != 10LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x497 = -13;
	uint16_t x500 = UINT16_MAX;
	static volatile uint64_t t106 = 7059LLU;

    t106 = (x497%(x498-(x499|x500)));

    if (t106 != 65522LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x501 = INT8_MIN;
	uint32_t x502 = UINT32_MAX;
	volatile uint8_t x503 = 60U;
	volatile uint32_t t107 = 33U;

    t107 = (x501%(x502-(x503|x504)));

    if (t107 != 65408U) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x506 = UINT64_MAX;
	int32_t x507 = -24974987;
	int8_t x508 = INT8_MIN;
	volatile uint64_t t108 = 241905LLU;

    t108 = (x505%(x506-(x507|x508)));

    if (t108 != 8LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x513 = 0;
	int32_t x514 = INT32_MIN;
	volatile int16_t x515 = INT16_MAX;
	int8_t x516 = -13;
	volatile int32_t t109 = -4176246;

    t109 = (x513%(x514-(x515|x516)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x519 = -1;
	uint32_t x520 = 127645510U;
	int64_t t110 = 38899106LL;

    t110 = (x517%(x518-(x519|x520)));

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x522 = INT64_MAX;
	static int8_t x524 = INT8_MAX;
	int64_t t111 = 4242LL;

    t111 = (x521%(x522-(x523|x524)));

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x525 = INT8_MAX;
	int16_t x526 = INT16_MIN;
	int8_t x527 = INT8_MIN;
	int64_t x528 = -8LL;
	volatile int64_t t112 = 226894626LL;

    t112 = (x525%(x526-(x527|x528)));

    if (t112 != 127LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x529 = 256;
	int16_t x530 = INT16_MAX;
	int8_t x531 = INT8_MIN;
	volatile int32_t x532 = -1;
	int32_t t113 = -208960;

    t113 = (x529%(x530-(x531|x532)));

    if (t113 != 256) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x533 = -26;
	uint64_t x534 = 137LLU;
	uint16_t x535 = UINT16_MAX;
	uint64_t x536 = 12849006118LLU;
	uint64_t t114 = 2815726368652368387LLU;

    t114 = (x533%(x534-(x535|x536)));

    if (t114 != 12849053532LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x537 = 999809860125582LLU;
	volatile int32_t x538 = -420035214;
	uint16_t x539 = 47U;
	int8_t x540 = 3;

    t115 = (x537%(x538-(x539|x540)));

    if (t115 != 999809860125582LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x545 = 3190097LLU;
	int16_t x548 = -1;
	static volatile uint64_t t116 = 2LLU;

    t116 = (x545%(x546-(x547|x548)));

    if (t116 != 3190097LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x549 = 975001;
	volatile int16_t x550 = INT16_MAX;
	int32_t x551 = 24077;
	uint32_t x552 = 186872570U;

    t117 = (x549%(x550-(x551|x552)));

    if (t117 != 975001U) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x554 = INT32_MIN;
	uint32_t x555 = 4832012U;
	uint32_t t118 = 23371U;

    t118 = (x553%(x554-(x555|x556)));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x557 = INT8_MAX;
	volatile uint16_t x558 = UINT16_MAX;
	int16_t x559 = INT16_MAX;
	int16_t x560 = INT16_MIN;
	volatile int32_t t119 = -443198483;

    t119 = (x557%(x558-(x559|x560)));

    if (t119 != 127) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x566 = INT8_MIN;
	uint64_t x567 = 323278LLU;
	volatile int8_t x568 = INT8_MAX;
	uint64_t t120 = 622LLU;

    t120 = (x565%(x566-(x567|x568)));

    if (t120 != 4LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x569 = INT64_MIN;
	int64_t x570 = -1LL;
	uint32_t x571 = UINT32_MAX;
	static uint32_t x572 = 16U;
	volatile int64_t t121 = -348707548683101LL;

    t121 = (x569%(x570-(x571|x572)));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x578 = INT64_MIN;
	int64_t x579 = INT64_MIN;
	volatile int64_t t122 = 642221391004LL;

    t122 = (x577%(x578-(x579|x580)));

    if (t122 != -128LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x581 = -1;
	static int16_t x582 = -1;
	static volatile int32_t x583 = -78;
	int32_t x584 = 5;

    t123 = (x581%(x582-(x583|x584)));

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x585 = 1824LLU;
	static int8_t x586 = -2;
	int16_t x587 = INT16_MIN;
	int32_t x588 = 117572080;
	uint64_t t124 = 69LLU;

    t124 = (x585%(x586-(x587|x588)));

    if (t124 != 1824LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x589 = 0U;
	int32_t x591 = -213;
	int16_t x592 = -6;
	volatile int32_t t125 = 6;

    t125 = (x589%(x590-(x591|x592)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x593 = INT16_MAX;
	uint64_t x595 = UINT64_MAX;
	volatile uint64_t t126 = 103062LLU;

    t126 = (x593%(x594-(x595|x596)));

    if (t126 != 127LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x597 = INT64_MIN;
	static int32_t x598 = -57831;
	int16_t x600 = INT16_MIN;
	volatile int64_t t127 = 48423LL;

    t127 = (x597%(x598-(x599|x600)));

    if (t127 != -20450LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x601 = 0U;
	int64_t x603 = -15423216434LL;
	uint16_t x604 = 58U;
	int64_t t128 = 1953907703173LL;

    t128 = (x601%(x602-(x603|x604)));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x605 = 56;
	volatile int32_t x606 = INT32_MAX;
	static volatile uint64_t x608 = UINT64_MAX;
	static uint64_t t129 = 5837687044323LLU;

    t129 = (x605%(x606-(x607|x608)));

    if (t129 != 56LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x609 = -242LL;
	uint64_t x610 = UINT64_MAX;
	int32_t x611 = -126;
	int16_t x612 = INT16_MIN;
	uint64_t t130 = 133720493689LLU;

    t130 = (x609%(x610-(x611|x612)));

    if (t130 != 124LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x613 = -477;
	int64_t x614 = INT64_MIN;
	int64_t x615 = -1LL;
	static volatile int64_t t131 = -1LL;

    t131 = (x613%(x614-(x615|x616)));

    if (t131 != -477LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int8_t x617 = 1;
	uint32_t x618 = UINT32_MAX;
	uint16_t x619 = 7820U;
	volatile uint32_t t132 = 15227207U;

    t132 = (x617%(x618-(x619|x620)));

    if (t132 != 1U) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint16_t x621 = UINT16_MAX;
	uint8_t x624 = UINT8_MAX;
	volatile int64_t t133 = -150483LL;

    t133 = (x621%(x622-(x623|x624)));

    if (t133 != 65535LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x625 = INT8_MIN;
	uint8_t x626 = 7U;
	uint64_t x627 = 113LLU;
	volatile int8_t x628 = -1;
	volatile uint64_t t134 = 396997LLU;

    t134 = (x625%(x626-(x627|x628)));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x633 = UINT32_MAX;
	static uint64_t x634 = UINT64_MAX;
	static volatile int64_t x635 = INT64_MIN;
	uint16_t x636 = 520U;
	volatile uint64_t t135 = 218173997865127961LLU;

    t135 = (x633%(x634-(x635|x636)));

    if (t135 != 4294967295LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x637 = INT32_MIN;
	volatile uint8_t x638 = UINT8_MAX;
	int32_t x639 = INT32_MAX;
	int32_t t136 = 11610140;

    t136 = (x637%(x638-(x639|x640)));

    if (t136 != -256) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x641 = 15;
	volatile uint8_t x642 = 3U;
	int64_t x643 = -3684LL;
	int8_t x644 = INT8_MIN;
	int64_t t137 = -550547658614LL;

    t137 = (x641%(x642-(x643|x644)));

    if (t137 != 15LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x645 = INT64_MIN;
	int32_t x646 = -118;
	int32_t x647 = INT32_MAX;
	volatile int16_t x648 = -4;

    t138 = (x645%(x646-(x647|x648)));

    if (t138 != -8LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x654 = INT8_MIN;
	static int8_t x655 = INT8_MIN;
	int64_t x656 = INT64_MAX;
	volatile int64_t t139 = -58008LL;

    t139 = (x653%(x654-(x655|x656)));

    if (t139 != -53LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x657 = UINT16_MAX;
	static uint64_t x658 = 117788LLU;
	volatile int64_t x659 = -1LL;
	volatile uint8_t x660 = 1U;
	volatile uint64_t t140 = 20132860597908LLU;

    t140 = (x657%(x658-(x659|x660)));

    if (t140 != 65535LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x663 = 86U;
	int32_t x664 = 188;
	int32_t t141 = -1;

    t141 = (x661%(x662-(x663|x664)));

    if (t141 != -204) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x665 = INT64_MIN;
	uint8_t x667 = 1U;
	static int64_t x668 = INT64_MAX;
	static int64_t t142 = -11333029069034551LL;

    t142 = (x665%(x666-(x667|x668)));

    if (t142 != -8LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x674 = -1LL;
	static volatile int32_t x675 = INT32_MAX;
	uint64_t x676 = 31LLU;
	volatile uint64_t t143 = 2LLU;

    t143 = (x673%(x674-(x675|x676)));

    if (t143 != 1LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x677 = UINT16_MAX;
	int16_t x678 = -1;
	int8_t x679 = 1;
	int8_t x680 = 2;
	static volatile int32_t t144 = 1830559;

    t144 = (x677%(x678-(x679|x680)));

    if (t144 != 3) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x681 = INT64_MIN;
	int32_t x682 = 0;
	volatile int32_t x683 = INT32_MIN;
	uint32_t x684 = 558U;
	int64_t t145 = 56LL;

    t145 = (x681%(x682-(x683|x684)));

    if (t145 != -622728LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x685 = -1;
	static int8_t x686 = -1;
	uint64_t x688 = 11399017243643LLU;
	volatile uint64_t t146 = 28012424017LLU;

    t146 = (x685%(x686-(x687|x688)));

    if (t146 != 10883LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x689 = 4987;
	int32_t x690 = INT32_MAX;
	uint32_t x691 = 821U;
	static volatile uint32_t t147 = 104U;

    t147 = (x689%(x690-(x691|x692)));

    if (t147 != 4987U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x697 = INT64_MIN;
	int8_t x698 = 4;
	static int16_t x699 = -336;
	uint32_t x700 = 367993U;

    t148 = (x697%(x698-(x699|x700)));

    if (t148 != -8LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x701 = 3245;
	uint64_t x702 = UINT64_MAX;
	static volatile int32_t x703 = INT32_MIN;
	volatile uint64_t t149 = 29641459LLU;

    t149 = (x701%(x702-(x703|x704)));

    if (t149 != 3245LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x709 = 45;
	int32_t x710 = -1874;
	uint16_t x711 = UINT16_MAX;
	int32_t t150 = 26790;

    t150 = (x709%(x710-(x711|x712)));

    if (t150 != 45) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x713 = -1;
	int64_t x714 = -1605343800LL;
	int32_t x715 = -1;
	volatile uint16_t x716 = UINT16_MAX;
	int64_t t151 = 642570957LL;

    t151 = (x713%(x714-(x715|x716)));

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x717 = INT16_MIN;
	int8_t x718 = 1;
	int8_t x719 = -1;
	static int16_t x720 = INT16_MIN;
	static int32_t t152 = 6905303;

    t152 = (x717%(x718-(x719|x720)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x721 = INT8_MIN;
	int64_t x722 = INT64_MIN;
	volatile int64_t x723 = -177911LL;
	static int32_t x724 = INT32_MIN;
	volatile int64_t t153 = 0LL;

    t153 = (x721%(x722-(x723|x724)));

    if (t153 != -128LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x725 = -3018282860LL;
	volatile uint16_t x726 = UINT16_MAX;
	uint16_t x728 = 3U;

    t154 = (x725%(x726-(x727|x728)));

    if (t154 != -55052LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x729 = INT8_MAX;
	int32_t x730 = 14026;
	static uint16_t x731 = 3043U;
	volatile uint32_t x732 = 19009559U;
	volatile uint32_t t155 = 234477U;

    t155 = (x729%(x730-(x731|x732)));

    if (t155 != 127U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x733 = 16924U;
	uint64_t x734 = 16733820828798007LLU;
	uint16_t x735 = UINT16_MAX;
	static int64_t x736 = 42449940828535LL;
	volatile uint64_t t156 = 259219612191LLU;

    t156 = (x733%(x734-(x735|x736)));

    if (t156 != 16924LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x737 = -1;
	uint16_t x739 = 371U;
	volatile uint32_t x740 = UINT32_MAX;
	volatile uint32_t t157 = 11078979U;

    t157 = (x737%(x738-(x739|x740)));

    if (t157 != 2147483646U) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x741 = -215;
	uint32_t x744 = 1568275992U;

    t158 = (x741%(x742-(x743|x744)));

    if (t158 != -215LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x746 = 0;
	volatile int8_t x748 = INT8_MIN;
	static volatile uint32_t t159 = 212U;

    t159 = (x745%(x746-(x747|x748)));

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x753 = 1;
	int64_t x755 = -1LL;
	static int8_t x756 = 1;
	int64_t t160 = 752396201327894LL;

    t160 = (x753%(x754-(x755|x756)));

    if (t160 != 1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x757 = INT8_MAX;
	int8_t x758 = INT8_MIN;
	volatile uint32_t x759 = UINT32_MAX;
	uint64_t x760 = 1826698299340785849LLU;
	volatile uint64_t t161 = 16566198822284LLU;

    t161 = (x757%(x758-(x759|x760)));

    if (t161 != 127LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x761 = UINT16_MAX;
	uint16_t x762 = 124U;
	volatile uint16_t x763 = 1U;
	int8_t x764 = -18;

    t162 = (x761%(x762-(x763|x764)));

    if (t162 != 111) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x773 = 1U;
	volatile int16_t x774 = -1;
	static int16_t x775 = -2;
	static int16_t x776 = 2802;
	int32_t t163 = 0;

    t163 = (x773%(x774-(x775|x776)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x777 = INT32_MIN;
	int64_t x780 = INT64_MIN;
	static volatile int64_t t164 = -327411481283669757LL;

    t164 = (x777%(x778-(x779|x780)));

    if (t164 != -203LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint32_t x781 = 44U;
	int32_t x782 = INT32_MIN;
	int8_t x784 = -26;

    t165 = (x781%(x782-(x783|x784)));

    if (t165 != 44LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x785 = -198;
	int64_t x786 = INT64_MIN;
	static int8_t x787 = INT8_MAX;
	volatile int32_t x788 = -76;
	volatile int64_t t166 = -28602445741154005LL;

    t166 = (x785%(x786-(x787|x788)));

    if (t166 != -198LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x789 = INT8_MIN;
	int32_t x790 = 2029;
	int8_t x791 = -1;
	int8_t x792 = 46;
	int32_t t167 = 11121;

    t167 = (x789%(x790-(x791|x792)));

    if (t167 != -128) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x793 = INT8_MIN;
	static uint8_t x794 = UINT8_MAX;
	uint8_t x795 = 3U;
	volatile int8_t x796 = INT8_MIN;
	int32_t t168 = -21711;

    t168 = (x793%(x794-(x795|x796)));

    if (t168 != -128) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x797 = INT64_MIN;
	volatile uint8_t x798 = 3U;
	int16_t x799 = -1;
	int32_t x800 = -5;
	int64_t t169 = 50LL;

    t169 = (x797%(x798-(x799|x800)));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x801 = INT64_MIN;
	uint8_t x802 = 6U;
	int16_t x803 = INT16_MIN;
	int64_t t170 = 1878958983191115946LL;

    t170 = (x801%(x802-(x803|x804)));

    if (t170 != -1944LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint32_t x805 = UINT32_MAX;
	uint16_t x806 = 1U;
	static int8_t x808 = 0;
	uint64_t t171 = 58110257671295LLU;

    t171 = (x805%(x806-(x807|x808)));

    if (t171 != 4294967295LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x809 = INT64_MIN;
	int16_t x810 = INT16_MIN;
	int8_t x811 = -57;
	int64_t t172 = 3109855474LL;

    t172 = (x809%(x810-(x811|x812)));

    if (t172 != -8LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x814 = -1LL;

    t173 = (x813%(x814-(x815|x816)));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x817 = INT32_MAX;
	static int64_t x819 = -31299910LL;
	int64_t t174 = -2636LL;

    t174 = (x817%(x818-(x819|x820)));

    if (t174 != 2147483647LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x821 = 0;
	static uint64_t x822 = 36710999LLU;
	int64_t x823 = INT64_MIN;
	volatile int8_t x824 = INT8_MAX;

    t175 = (x821%(x822-(x823|x824)));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x829 = -1;
	int16_t x830 = -1;
	int16_t x832 = INT16_MIN;
	volatile int32_t t176 = -7410;

    t176 = (x829%(x830-(x831|x832)));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x837 = -70LL;
	uint64_t x839 = 435778900508593357LLU;
	volatile int64_t x840 = INT64_MAX;
	uint64_t t177 = 2053LLU;

    t177 = (x837%(x838-(x839|x840)));

    if (t177 != 9223372036854775738LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x845 = -1LL;
	int16_t x846 = INT16_MAX;
	volatile int8_t x847 = 7;
	int32_t x848 = 18;
	volatile int64_t t178 = 0LL;

    t178 = (x845%(x846-(x847|x848)));

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x857 = INT16_MIN;
	volatile int8_t x858 = 1;
	int8_t x859 = 34;
	uint8_t x860 = UINT8_MAX;
	volatile int32_t t179 = 56;

    t179 = (x857%(x858-(x859|x860)));

    if (t179 != -2) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x862 = 1279409U;
	uint64_t x863 = 0LLU;
	uint64_t x864 = 12498758379634614LLU;
	volatile uint64_t t180 = 29889671365041LLU;

    t180 = (x861%(x862-(x863|x864)));

    if (t180 != 1LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x865 = UINT16_MAX;
	uint8_t x866 = UINT8_MAX;
	static volatile uint16_t x867 = 0U;
	uint32_t x868 = 5U;
	volatile uint32_t t181 = 128251U;

    t181 = (x865%(x866-(x867|x868)));

    if (t181 != 35U) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x873 = -52;
	uint16_t x874 = 4230U;
	int32_t x875 = 3;
	uint32_t t182 = 409000U;

    t182 = (x873%(x874-(x875|x876)));

    if (t182 != 1805863817U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x877 = UINT64_MAX;
	uint32_t x879 = 38178U;

    t183 = (x877%(x878-(x879|x880)));

    if (t183 != 1563787009LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x881 = UINT32_MAX;
	int8_t x882 = INT8_MIN;
	int8_t x883 = 21;
	int8_t x884 = 7;

    t184 = (x881%(x882-(x883|x884)));

    if (t184 != 150U) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x889 = 257189668LL;
	int16_t x890 = INT16_MIN;
	int32_t x891 = -6;
	int8_t x892 = INT8_MIN;
	static int64_t t185 = -38846850007121915LL;

    t185 = (x889%(x890-(x891|x892)));

    if (t185 != 7968LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x893 = -5038457LL;
	int8_t x894 = -35;
	int64_t x895 = INT64_MAX;
	static int64_t t186 = -450196LL;

    t186 = (x893%(x894-(x895|x896)));

    if (t186 != -31LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x905 = -16159LL;
	static volatile int8_t x906 = INT8_MIN;
	int32_t x907 = INT32_MIN;
	volatile int16_t x908 = 99;
	int64_t t187 = -216089357954LL;

    t187 = (x905%(x906-(x907|x908)));

    if (t187 != -16159LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x909 = UINT16_MAX;
	int32_t x910 = -209496630;
	uint64_t x911 = 1LLU;
	int64_t x912 = -1LL;
	static uint64_t t188 = 7523926215LLU;

    t188 = (x909%(x910-(x911|x912)));

    if (t188 != 65535LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x913 = 108843407U;
	int8_t x914 = INT8_MAX;
	uint16_t x916 = 55U;
	volatile uint32_t t189 = 26737959U;

    t189 = (x913%(x914-(x915|x916)));

    if (t189 != 15U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x917 = INT8_MAX;
	int16_t x918 = INT16_MIN;
	int64_t x919 = -1LL;
	int64_t x920 = 7LL;

    t190 = (x917%(x918-(x919|x920)));

    if (t190 != 127LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x925 = -2031107;
	static uint32_t x926 = 32651332U;
	int16_t x927 = INT16_MIN;
	static int32_t x928 = INT32_MIN;
	uint32_t t191 = 11728U;

    t191 = (x925%(x926-(x927|x928)));

    if (t191 != 11319089U) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x929 = 1530344;
	volatile uint64_t x930 = UINT64_MAX;
	int8_t x932 = INT8_MIN;
	uint64_t t192 = 1068917881196887LLU;

    t192 = (x929%(x930-(x931|x932)));

    if (t192 != 121LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x933 = 78U;
	static uint16_t x935 = UINT16_MAX;
	int64_t x936 = 372LL;

    t193 = (x933%(x934-(x935|x936)));

    if (t193 != 78LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x937 = -1LL;
	static int16_t x938 = INT16_MIN;
	uint32_t x940 = 6U;
	static int64_t t194 = -90604790977615LL;

    t194 = (x937%(x938-(x939|x940)));

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x941 = 385U;
	static int32_t x942 = INT32_MIN;
	uint32_t x943 = 1U;
	uint16_t x944 = UINT16_MAX;
	uint32_t t195 = 1562U;

    t195 = (x941%(x942-(x943|x944)));

    if (t195 != 385U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x950 = -10;
	int32_t x952 = 140354;
	int64_t t196 = -28706270LL;

    t196 = (x949%(x950-(x951|x952)));

    if (t196 != -2LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x953 = INT64_MAX;
	int16_t x954 = INT16_MIN;
	uint16_t x955 = 5113U;
	int16_t x956 = 184;
	volatile int64_t t197 = -1293LL;

    t197 = (x953%(x954-(x955|x956)));

    if (t197 != 9340LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x957 = -1;
	int8_t x959 = 0;
	int8_t x960 = -1;
	int32_t t198 = 126841878;

    t198 = (x957%(x958-(x959|x960)));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x961 = -3;
	int8_t x962 = INT8_MAX;
	int8_t x963 = INT8_MIN;
	uint32_t x964 = 131165U;
	static uint32_t t199 = 0U;

    t199 = (x961%(x962-(x963|x964)));

    if (t199 != 127U) { NG(); } else { ; }
	
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


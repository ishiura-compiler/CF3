
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

volatile int32_t x1 = -1;
int64_t x12 = -1LL;
int64_t t2 = 135485856618380480LL;
volatile int64_t x16 = 26LL;
static volatile int64_t x24 = -1LL;
volatile int64_t t4 = -12603375192234864LL;
uint64_t x29 = 3811151517LLU;
int8_t x33 = INT8_MAX;
uint64_t t10 = 777791876646LLU;
uint16_t x50 = 2128U;
int64_t x58 = INT64_MAX;
volatile int64_t t13 = -279104LL;
static uint16_t x63 = UINT16_MAX;
uint16_t x65 = 15U;
volatile int32_t t16 = 8;
volatile int32_t t18 = -4776;
int16_t x82 = 0;
int16_t x83 = -1;
volatile uint64_t t19 = 180918LLU;
volatile int8_t x87 = -1;
static int8_t x91 = INT8_MAX;
volatile uint64_t t21 = 1735882020463203788LLU;
static uint8_t x95 = 0U;
uint64_t x106 = 32798092212766LLU;
static volatile uint64_t t25 = 1365804934356232643LLU;
int8_t x109 = -38;
static int32_t x110 = INT32_MIN;
int8_t x112 = INT8_MIN;
uint8_t x115 = 48U;
uint64_t t27 = 6786LLU;
volatile int64_t t28 = -1LL;
int32_t x123 = -1223;
uint64_t x132 = 17777787765LLU;
int64_t x135 = INT64_MIN;
uint16_t x138 = 37U;
int64_t x140 = -1LL;
int8_t x141 = INT8_MAX;
int32_t t34 = 1;
static uint16_t x157 = 9U;
int8_t x158 = INT8_MIN;
int16_t x159 = INT16_MIN;
uint16_t x160 = 5119U;
int64_t x166 = -1LL;
volatile int32_t x168 = -3821402;
uint64_t x169 = 1LLU;
int8_t x173 = INT8_MIN;
volatile uint64_t x174 = 799775LLU;
static int16_t x177 = 11;
static volatile int64_t t40 = 0LL;
static uint64_t x181 = 16443360LLU;
uint64_t x187 = 6148924544065LLU;
int32_t x201 = -1;
volatile uint32_t x203 = 7239391U;
static volatile uint32_t t46 = 92U;
int32_t x206 = INT32_MIN;
int64_t x209 = -24955LL;
static uint64_t x219 = 43179LLU;
volatile uint64_t t50 = 3260308471978LLU;
int32_t x228 = 2;
int8_t x229 = -1;
uint8_t x240 = 41U;
int16_t x247 = INT16_MAX;
uint32_t x260 = 1096514481U;
volatile int8_t x261 = -1;
int16_t x265 = 22;
static volatile uint32_t t62 = 42U;
int64_t x273 = -1LL;
int32_t x284 = INT32_MIN;
int16_t x286 = INT16_MAX;
int32_t x303 = INT32_MIN;
uint8_t x309 = 12U;
int16_t x311 = -7;
static int8_t x321 = INT8_MIN;
volatile int8_t x324 = INT8_MAX;
int32_t x326 = INT32_MIN;
int64_t x327 = -69800272150448LL;
int64_t t79 = 12698LL;
uint64_t x344 = 2204755886859405LLU;
int32_t x348 = -1;
volatile int32_t x352 = -1;
int32_t x355 = INT32_MIN;
int16_t x356 = -1898;
uint32_t t84 = 22160U;
uint8_t x364 = 10U;
static int16_t x368 = INT16_MIN;
int64_t x371 = INT64_MIN;
volatile int64_t x373 = INT64_MAX;
static int8_t x376 = INT8_MIN;
static int16_t x382 = -1;
int32_t t91 = 7;
uint16_t x391 = 4U;
int8_t x395 = -46;
uint32_t x398 = UINT32_MAX;
uint32_t x405 = 99757947U;
uint32_t t95 = 15872995U;
int64_t x410 = 866445LL;
static int32_t x420 = INT32_MIN;
volatile int16_t x431 = INT16_MAX;
uint8_t x438 = 19U;
volatile uint64_t x440 = UINT64_MAX;
uint64_t t103 = 1103937845275154064LLU;
static int8_t x441 = INT8_MAX;
int64_t x442 = -3102634476552307121LL;
uint8_t x444 = 1U;
int8_t x456 = INT8_MAX;
volatile uint64_t t107 = 3241LLU;
int32_t x457 = INT32_MIN;
int64_t x458 = 1830776097LL;
int64_t t108 = 43592LL;
uint32_t x461 = 27304U;
uint16_t x466 = 7081U;
volatile int32_t t111 = -21823;
int8_t x477 = INT8_MAX;
static int32_t t112 = -3;
int32_t x488 = 30;
static volatile int16_t x489 = -1;
int8_t x490 = -1;
int16_t x505 = 2255;
int32_t x507 = 200689901;
volatile int16_t x510 = INT16_MIN;
static int32_t t120 = 377;
int8_t x513 = INT8_MAX;
int16_t x519 = INT16_MAX;
int64_t x530 = INT64_MIN;
uint64_t x532 = UINT64_MAX;
uint64_t t125 = 7286121329450797LLU;
uint8_t x533 = UINT8_MAX;
int8_t x534 = -1;
volatile uint64_t x535 = UINT64_MAX;
int16_t x536 = INT16_MAX;
static int64_t x537 = INT64_MAX;
uint32_t x539 = 346272U;
uint8_t x540 = UINT8_MAX;
uint8_t x543 = 7U;
static int64_t x548 = INT64_MIN;
int32_t x555 = INT32_MIN;
int64_t x560 = INT64_MIN;
volatile uint64_t x569 = UINT64_MAX;
int32_t x580 = INT32_MAX;
uint64_t t137 = 83LLU;
static int8_t x586 = -1;
static int16_t x593 = INT16_MIN;
int8_t x595 = 1;
uint16_t x599 = 1865U;
volatile uint32_t t142 = 6101219U;
int64_t x605 = -1LL;
int64_t t143 = -43259886949734LL;
int32_t x612 = 4689363;
int32_t x613 = INT32_MIN;
static uint16_t x621 = 2U;
uint64_t x624 = UINT64_MAX;
static int8_t x627 = -1;
int64_t x629 = INT64_MIN;
volatile int8_t x630 = 2;
volatile uint8_t x633 = 0U;
static uint64_t t150 = 420388157611213LLU;
static int64_t x640 = INT64_MIN;
uint32_t x641 = 125U;
int8_t x643 = -4;
int8_t x644 = -1;
int16_t x645 = INT16_MAX;
uint64_t t153 = 2062775262717674LLU;
static uint32_t x651 = 5942U;
uint64_t x652 = 4284814932483198LLU;
static int8_t x665 = -16;
int64_t t158 = -294258188548LL;
static uint32_t x669 = UINT32_MAX;
int32_t x670 = INT32_MIN;
int8_t x674 = 6;
int32_t t160 = -451257656;
static int32_t x687 = INT32_MAX;
int64_t x688 = 639952027201LL;
static int64_t t163 = 73878322772354LL;
uint16_t x691 = 11638U;
int64_t x696 = INT64_MAX;
uint8_t x698 = 19U;
volatile int64_t t166 = 107323880563LL;
uint32_t x707 = 1555U;
static volatile int16_t x708 = 760;
int8_t x716 = -31;
int8_t x718 = INT8_MAX;
volatile int8_t x719 = INT8_MAX;
int32_t t171 = -11283;
static int64_t x722 = -1LL;
volatile int32_t x725 = -1;
int16_t x726 = INT16_MIN;
uint64_t x727 = UINT64_MAX;
int64_t x729 = INT64_MAX;
volatile int64_t t175 = -11323721189741LL;
int64_t x737 = -1LL;
volatile int8_t x738 = INT8_MIN;
int32_t x740 = -119213;
volatile int64_t t176 = -968465302LL;
uint8_t x741 = 0U;
uint64_t t177 = 16689599434LLU;
volatile int8_t x745 = -1;
static volatile int32_t x747 = INT32_MIN;
static int8_t x750 = INT8_MAX;
volatile int64_t t180 = 107906150922LL;
static int64_t x757 = -1LL;
int64_t t181 = 9871135157075290LL;
int32_t x765 = INT32_MAX;
int8_t x779 = 31;
volatile int32_t x784 = INT32_MIN;
int64_t t186 = 3567063LL;
int32_t x793 = INT32_MIN;
uint8_t x795 = UINT8_MAX;
volatile int32_t t189 = INT32_MIN;
int32_t x798 = -1;
int64_t x800 = INT64_MIN;
int32_t x807 = -1;
uint8_t x810 = 18U;
static uint32_t x822 = UINT32_MAX;
int8_t x823 = -1;
volatile int32_t t196 = -1047482080;
uint8_t x833 = UINT8_MAX;
volatile uint32_t x835 = 3U;


void f0(void) {
    	uint64_t x2 = 9954320596182186LLU;
	int64_t x3 = INT64_MAX;
	uint32_t x4 = UINT32_MAX;
	static volatile uint64_t t0 = 7221497424679248LLU;

    t0 = (x1&(x2-(x3%x4)));

    if (t0 != 9954318448698539LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	int8_t x6 = INT8_MIN;
	int16_t x7 = INT16_MIN;
	int64_t x8 = 1403952LL;
	int64_t t1 = -71323LL;

    t1 = (x5&(x6-(x7%x8)));

    if (t1 != 32640LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	int8_t x10 = INT8_MIN;
	static int8_t x11 = INT8_MIN;

    t2 = (x9&(x10-(x11%x12)));

    if (t2 != 4294967168LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	int8_t x14 = INT8_MIN;
	uint16_t x15 = UINT16_MAX;
	int64_t t3 = -14801LL;

    t3 = (x13&(x14-(x15%x16)));

    if (t3 != 2147483505LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x21 = 0U;
	uint32_t x22 = 25989U;
	uint8_t x23 = 5U;

    t4 = (x21&(x22-(x23%x24)));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x25 = 3809749852298LLU;
	volatile int32_t x26 = INT32_MAX;
	int8_t x27 = 1;
	int64_t x28 = INT64_MIN;
	static uint64_t t5 = 38998LLU;

    t5 = (x25&(x26-(x27%x28)));

    if (t5 != 113860746LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x30 = -2;
	int64_t x31 = INT64_MAX;
	int32_t x32 = 1835;
	volatile uint64_t t6 = 859208667968152978LLU;

    t6 = (x29&(x30-(x31%x32)));

    if (t6 != 3811150340LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x34 = INT64_MAX;
	uint32_t x35 = 4U;
	int8_t x36 = INT8_MAX;
	volatile int64_t t7 = -1897028415156631997LL;

    t7 = (x33&(x34-(x35%x36)));

    if (t7 != 123LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = INT64_MAX;
	int64_t x38 = -12259380LL;
	volatile int64_t x39 = INT64_MIN;
	int32_t x40 = INT32_MIN;
	int64_t t8 = -17667944393401LL;

    t8 = (x37&(x38-(x39%x40)));

    if (t8 != 9223372036842516428LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x41 = 110U;
	static volatile int16_t x42 = INT16_MIN;
	uint32_t x43 = UINT32_MAX;
	volatile int8_t x44 = 50;
	volatile uint32_t t9 = 56603U;

    t9 = (x41&(x42-(x43%x44)));

    if (t9 != 66U) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = 1;
	int32_t x46 = INT32_MAX;
	uint64_t x47 = UINT64_MAX;
	int64_t x48 = -663245240276831594LL;

    t10 = (x45&(x46-(x47%x48)));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x49 = 30877U;
	uint8_t x51 = 6U;
	static int8_t x52 = INT8_MAX;
	volatile int32_t t11 = 3;

    t11 = (x49&(x50-(x51%x52)));

    if (t11 != 2056) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x53 = -1;
	uint16_t x54 = 596U;
	static volatile uint64_t x55 = UINT64_MAX;
	static volatile int8_t x56 = 1;
	uint64_t t12 = 16751459612693638LLU;

    t12 = (x53&(x54-(x55%x56)));

    if (t12 != 596LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x57 = UINT32_MAX;
	volatile uint16_t x59 = UINT16_MAX;
	int32_t x60 = -133;

    t13 = (x57&(x58-(x59%x60)));

    if (t13 != 4294967196LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = INT64_MAX;
	int32_t x62 = -6000;
	int64_t x64 = -1LL;
	int64_t t14 = -32767686638LL;

    t14 = (x61&(x62-(x63%x64)));

    if (t14 != 9223372036854769808LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x66 = 2U;
	volatile int16_t x67 = INT16_MAX;
	static int32_t x68 = INT32_MIN;
	volatile int32_t t15 = 0;

    t15 = (x65&(x66-(x67%x68)));

    if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x69 = 973;
	volatile int16_t x70 = INT16_MIN;
	int32_t x71 = 148131655;
	int8_t x72 = INT8_MIN;

    t16 = (x69&(x70-(x71%x72)));

    if (t16 != 905) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x73 = UINT8_MAX;
	uint32_t x74 = UINT32_MAX;
	uint64_t x75 = 48LLU;
	int8_t x76 = INT8_MIN;
	uint64_t t17 = 58149LLU;

    t17 = (x73&(x74-(x75%x76)));

    if (t17 != 207LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x77 = INT16_MIN;
	int8_t x78 = INT8_MIN;
	int8_t x79 = -1;
	int16_t x80 = -15;

    t18 = (x77&(x78-(x79%x80)));

    if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x81 = 30511LLU;
	int64_t x84 = INT64_MAX;

    t19 = (x81&(x82-(x83%x84)));

    if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = -1LL;
	volatile int8_t x86 = -1;
	uint8_t x88 = 6U;
	volatile int64_t t20 = -1048990978855LL;

    t20 = (x85&(x86-(x87%x88)));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x89 = INT8_MAX;
	uint64_t x90 = 4009208111624212LLU;
	static int8_t x92 = -1;

    t21 = (x89&(x90-(x91%x92)));

    if (t21 != 20LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x93 = UINT8_MAX;
	int16_t x94 = 97;
	int8_t x96 = INT8_MIN;
	int32_t t22 = 29;

    t22 = (x93&(x94-(x95%x96)));

    if (t22 != 97) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = INT8_MIN;
	static int32_t x98 = INT32_MAX;
	uint64_t x99 = 1LLU;
	int64_t x100 = INT64_MIN;
	uint64_t t23 = 2117466345708LLU;

    t23 = (x97&(x98-(x99%x100)));

    if (t23 != 2147483520LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x101 = 5869U;
	int8_t x102 = -10;
	int8_t x103 = -1;
	static uint8_t x104 = 19U;
	volatile int32_t t24 = 2555581;

    t24 = (x101&(x102-(x103%x104)));

    if (t24 != 5861) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = 1504;
	int8_t x107 = -14;
	int8_t x108 = -1;

    t25 = (x105&(x106-(x107%x108)));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x111 = INT64_MAX;
	static volatile int64_t t26 = -46857LL;

    t26 = (x109&(x110-(x111%x112)));

    if (t26 != -2147483776LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x113 = 7901LLU;
	uint16_t x114 = 1766U;
	int16_t x116 = -1;

    t27 = (x113&(x114-(x115%x116)));

    if (t27 != 1732LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x117 = INT8_MIN;
	static int64_t x118 = -1LL;
	int8_t x119 = -1;
	int16_t x120 = 1;

    t28 = (x117&(x118-(x119%x120)));

    if (t28 != -128LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x121 = -1LL;
	uint64_t x122 = 201952746LLU;
	int64_t x124 = INT64_MIN;
	uint64_t t29 = 139646731946403094LLU;

    t29 = (x121&(x122-(x123%x124)));

    if (t29 != 201953969LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x129 = INT64_MIN;
	int64_t x130 = -1LL;
	int16_t x131 = INT16_MIN;
	volatile uint64_t t30 = 1013167LLU;

    t30 = (x129&(x130-(x131%x132)));

    if (t30 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x133 = 0U;
	static int8_t x134 = -12;
	uint16_t x136 = UINT16_MAX;
	int64_t t31 = 1198700627LL;

    t31 = (x133&(x134-(x135%x136)));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x137 = INT16_MAX;
	static volatile int64_t x139 = INT64_MAX;
	volatile int64_t t32 = 83476996508LL;

    t32 = (x137&(x138-(x139%x140)));

    if (t32 != 37LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x142 = INT8_MIN;
	int32_t x143 = INT32_MAX;
	static uint64_t x144 = UINT64_MAX;
	static uint64_t t33 = 8703LLU;

    t33 = (x141&(x142-(x143%x144)));

    if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x149 = 48;
	static int16_t x150 = INT16_MAX;
	int32_t x151 = INT32_MAX;
	int8_t x152 = INT8_MIN;

    t34 = (x149&(x150-(x151%x152)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int32_t t35 = -7835;

    t35 = (x157&(x158-(x159%x160)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x161 = INT32_MIN;
	volatile int64_t x162 = -14LL;
	int16_t x163 = INT16_MIN;
	int16_t x164 = INT16_MIN;
	int64_t t36 = 242614762232137LL;

    t36 = (x161&(x162-(x163%x164)));

    if (t36 != -2147483648LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x165 = -1LL;
	int16_t x167 = 425;
	volatile int64_t t37 = 11955643LL;

    t37 = (x165&(x166-(x167%x168)));

    if (t37 != -426LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x170 = 1;
	volatile int32_t x171 = -1;
	int64_t x172 = INT64_MAX;
	static uint64_t t38 = 881885565950497LLU;

    t38 = (x169&(x170-(x171%x172)));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x175 = INT16_MIN;
	int64_t x176 = 1090368197701315449LL;
	volatile uint64_t t39 = 793986LLU;

    t39 = (x173&(x174-(x175%x176)));

    if (t39 != 832512LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x178 = 0;
	static int64_t x179 = INT64_MAX;
	volatile int8_t x180 = INT8_MAX;

    t40 = (x177&(x178-(x179%x180)));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x182 = 4548946U;
	volatile uint8_t x183 = 18U;
	static int8_t x184 = -38;
	static volatile uint64_t t41 = 2922LLU;

    t41 = (x181&(x182-(x183%x184)));

    if (t41 != 4219200LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x185 = 112;
	uint64_t x186 = 198LLU;
	uint64_t x188 = UINT64_MAX;
	uint64_t t42 = 59775000LLU;

    t42 = (x185&(x186-(x187%x188)));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x189 = INT64_MIN;
	int32_t x190 = INT32_MIN;
	int32_t x191 = INT32_MIN;
	volatile int16_t x192 = INT16_MAX;
	volatile int64_t t43 = INT64_MIN;

    t43 = (x189&(x190-(x191%x192)));

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x193 = -1;
	int16_t x194 = INT16_MAX;
	int64_t x195 = INT64_MAX;
	int64_t x196 = -2934715LL;
	volatile int64_t t44 = 94723LL;

    t44 = (x193&(x194-(x195%x196)));

    if (t44 != -2095940LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x197 = UINT16_MAX;
	int8_t x198 = INT8_MIN;
	static uint32_t x199 = UINT32_MAX;
	int32_t x200 = INT32_MIN;
	volatile uint32_t t45 = 364064U;

    t45 = (x197&(x198-(x199%x200)));

    if (t45 != 65409U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x202 = 13U;
	static int16_t x204 = INT16_MAX;

    t46 = (x201&(x202-(x203%x204)));

    if (t46 != 4294936658U) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x205 = INT8_MIN;
	uint32_t x207 = 38U;
	int64_t x208 = -6LL;
	static int64_t t47 = -960513371148018916LL;

    t47 = (x205&(x206-(x207%x208)));

    if (t47 != -2147483776LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x210 = -1857LL;
	int8_t x211 = INT8_MIN;
	uint8_t x212 = UINT8_MAX;
	static volatile int64_t t48 = -2375373999LL;

    t48 = (x209&(x210-(x211%x212)));

    if (t48 != -26619LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x213 = -5;
	int64_t x214 = INT64_MIN;
	volatile uint16_t x215 = UINT16_MAX;
	uint8_t x216 = UINT8_MAX;
	static int64_t t49 = INT64_MIN;

    t49 = (x213&(x214-(x215%x216)));

    if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x217 = INT32_MIN;
	volatile int16_t x218 = INT16_MAX;
	int32_t x220 = INT32_MIN;

    t50 = (x217&(x218-(x219%x220)));

    if (t50 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x221 = 24177366147LLU;
	int64_t x222 = -1LL;
	volatile int16_t x223 = INT16_MIN;
	int32_t x224 = INT32_MIN;
	volatile uint64_t t51 = 13268503261662LLU;

    t51 = (x221&(x222-(x223%x224)));

    if (t51 != 21635LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint64_t x225 = UINT64_MAX;
	static uint64_t x226 = 43847020164368361LLU;
	int16_t x227 = -2;
	uint64_t t52 = 1544563LLU;

    t52 = (x225&(x226-(x227%x228)));

    if (t52 != 43847020164368361LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x230 = INT8_MAX;
	static volatile int64_t x231 = -2761LL;
	volatile int8_t x232 = 1;
	int64_t t53 = 318690LL;

    t53 = (x229&(x230-(x231%x232)));

    if (t53 != 127LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int16_t x233 = -1;
	volatile int64_t x234 = INT64_MIN;
	uint32_t x235 = 42352U;
	static volatile uint64_t x236 = 1LLU;
	volatile uint64_t t54 = 20089LLU;

    t54 = (x233&(x234-(x235%x236)));

    if (t54 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x237 = INT8_MAX;
	static int64_t x238 = -1LL;
	int8_t x239 = INT8_MAX;
	volatile int64_t t55 = -77309LL;

    t55 = (x237&(x238-(x239%x240)));

    if (t55 != 123LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x241 = INT8_MAX;
	volatile int8_t x242 = INT8_MIN;
	volatile int64_t x243 = INT64_MIN;
	volatile uint64_t x244 = 3LLU;
	volatile uint64_t t56 = 116LLU;

    t56 = (x241&(x242-(x243%x244)));

    if (t56 != 126LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x245 = INT32_MAX;
	volatile int16_t x246 = INT16_MAX;
	uint32_t x248 = 10328U;
	static uint32_t t57 = 458644U;

    t57 = (x245&(x246-(x247%x248)));

    if (t57 != 30984U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x249 = 1796625;
	volatile uint64_t x250 = 3472403311576LLU;
	int16_t x251 = -1;
	int32_t x252 = INT32_MAX;
	volatile uint64_t t58 = 32921133734LLU;

    t58 = (x249&(x250-(x251%x252)));

    if (t58 != 1649169LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x253 = 12811;
	int32_t x254 = INT32_MIN;
	int64_t x255 = INT64_MIN;
	volatile uint16_t x256 = UINT16_MAX;
	int64_t t59 = -1LL;

    t59 = (x253&(x254-(x255%x256)));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x257 = -2;
	uint8_t x258 = 0U;
	static int32_t x259 = INT32_MIN;
	volatile uint32_t t60 = 12U;

    t60 = (x257&(x258-(x259%x260)));

    if (t60 != 3243998128U) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x262 = -1;
	int16_t x263 = INT16_MIN;
	uint16_t x264 = 902U;
	int32_t t61 = -931;

    t61 = (x261&(x262-(x263%x264)));

    if (t61 != 295) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x266 = 18473U;
	int32_t x267 = -1;
	volatile int16_t x268 = -1;

    t62 = (x265&(x266-(x267%x268)));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x269 = 9U;
	uint16_t x270 = 3U;
	int16_t x271 = 1;
	static volatile int16_t x272 = -1;
	static int32_t t63 = 28;

    t63 = (x269&(x270-(x271%x272)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x274 = UINT64_MAX;
	static int8_t x275 = 0;
	volatile int8_t x276 = -1;
	volatile uint64_t t64 = UINT64_MAX;

    t64 = (x273&(x274-(x275%x276)));

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x277 = INT32_MAX;
	int32_t x278 = -40;
	int16_t x279 = INT16_MIN;
	int8_t x280 = INT8_MIN;
	int32_t t65 = 9;

    t65 = (x277&(x278-(x279%x280)));

    if (t65 != 2147483608) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x281 = -1;
	uint8_t x282 = 2U;
	int64_t x283 = 42757LL;
	int64_t t66 = -43209277581LL;

    t66 = (x281&(x282-(x283%x284)));

    if (t66 != -42755LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x285 = -1;
	uint8_t x287 = 1U;
	volatile uint32_t x288 = 640544661U;
	static volatile uint32_t t67 = 1U;

    t67 = (x285&(x286-(x287%x288)));

    if (t67 != 32766U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x289 = INT16_MAX;
	volatile int32_t x290 = INT32_MIN;
	static volatile int64_t x291 = -219644120LL;
	uint16_t x292 = UINT16_MAX;
	static volatile int64_t t68 = -63737865LL;

    t68 = (x289&(x290-(x291%x292)));

    if (t68 != 3567LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x293 = INT8_MAX;
	static int64_t x294 = -1LL;
	static volatile int64_t x295 = 1553667950998LL;
	int16_t x296 = -1;
	volatile int64_t t69 = 5593416595362736LL;

    t69 = (x293&(x294-(x295%x296)));

    if (t69 != 127LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x297 = INT64_MIN;
	volatile int8_t x298 = INT8_MIN;
	int32_t x299 = -1;
	int64_t x300 = INT64_MAX;
	static int64_t t70 = INT64_MIN;

    t70 = (x297&(x298-(x299%x300)));

    if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x301 = INT32_MIN;
	int16_t x302 = 25;
	uint64_t x304 = 11513773376057364LLU;
	volatile uint64_t t71 = 2582851919627682998LLU;

    t71 = (x301&(x302-(x303%x304)));

    if (t71 != 18445064949802729472LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x305 = 159;
	volatile int16_t x306 = INT16_MAX;
	static uint16_t x307 = 483U;
	int8_t x308 = -1;
	static int32_t t72 = -7;

    t72 = (x305&(x306-(x307%x308)));

    if (t72 != 159) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x310 = 1;
	int16_t x312 = 1;
	static int32_t t73 = -35969;

    t73 = (x309&(x310-(x311%x312)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x313 = INT16_MAX;
	int64_t x314 = 32877419721858544LL;
	static volatile int16_t x315 = -44;
	int8_t x316 = -1;
	volatile int64_t t74 = -5LL;

    t74 = (x313&(x314-(x315%x316)));

    if (t74 != 7664LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x317 = INT64_MIN;
	int16_t x318 = INT16_MIN;
	int64_t x319 = -280720LL;
	int32_t x320 = 228034;
	static int64_t t75 = 21516721248265LL;

    t75 = (x317&(x318-(x319%x320)));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x322 = -1;
	volatile int32_t x323 = INT32_MIN;
	int32_t t76 = -104;

    t76 = (x321&(x322-(x323%x324)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x325 = -3;
	int64_t x328 = INT64_MAX;
	volatile int64_t t77 = 19442022364806LL;

    t77 = (x325&(x326-(x327%x328)));

    if (t77 != 69798124666800LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x329 = 1797625U;
	static uint16_t x330 = 180U;
	int32_t x331 = INT32_MIN;
	volatile int64_t x332 = INT64_MIN;
	volatile int64_t t78 = -508091325717442LL;

    t78 = (x329&(x330-(x331%x332)));

    if (t78 != 176LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x333 = INT32_MAX;
	int32_t x334 = INT32_MIN;
	int64_t x335 = -1LL;
	uint16_t x336 = 28U;

    t79 = (x333&(x334-(x335%x336)));

    if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x341 = 2U;
	int16_t x342 = INT16_MAX;
	static int8_t x343 = INT8_MIN;
	static volatile uint64_t t80 = 17LLU;

    t80 = (x341&(x342-(x343%x344)));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x345 = UINT64_MAX;
	int16_t x346 = INT16_MIN;
	uint8_t x347 = UINT8_MAX;
	volatile uint64_t t81 = 3177033LLU;

    t81 = (x345&(x346-(x347%x348)));

    if (t81 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x349 = INT32_MIN;
	static uint8_t x350 = UINT8_MAX;
	int16_t x351 = -1;
	volatile int32_t t82 = -738703746;

    t82 = (x349&(x350-(x351%x352)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x353 = 4U;
	static volatile uint8_t x354 = UINT8_MAX;
	uint32_t t83 = 124728568U;

    t83 = (x353&(x354-(x355%x356)));

    if (t83 != 4U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x357 = -78;
	uint32_t x358 = UINT32_MAX;
	int32_t x359 = 4;
	uint16_t x360 = 937U;

    t84 = (x357&(x358-(x359%x360)));

    if (t84 != 4294967218U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x361 = -1;
	uint16_t x362 = 0U;
	volatile int64_t x363 = 83120170692642LL;
	volatile int64_t t85 = -1LL;

    t85 = (x361&(x362-(x363%x364)));

    if (t85 != -2LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x365 = 10837U;
	int8_t x366 = INT8_MIN;
	int16_t x367 = -1;
	int32_t t86 = -2951;

    t86 = (x365&(x366-(x367%x368)));

    if (t86 != 10753) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x369 = -1;
	static uint64_t x370 = 2028669323086LLU;
	static int16_t x372 = INT16_MAX;
	uint64_t t87 = 10641106LLU;

    t87 = (x369&(x370-(x371%x372)));

    if (t87 != 2028669323094LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x374 = INT8_MAX;
	uint32_t x375 = 52097687U;
	static int64_t t88 = -366155LL;

    t88 = (x373&(x374-(x375%x376)));

    if (t88 != 4242869736LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x377 = 0U;
	int32_t x378 = -1;
	static int32_t x379 = INT32_MAX;
	uint32_t x380 = UINT32_MAX;
	static uint32_t t89 = 48U;

    t89 = (x377&(x378-(x379%x380)));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x381 = -1LL;
	int16_t x383 = 53;
	uint64_t x384 = UINT64_MAX;
	volatile uint64_t t90 = 206006430755214LLU;

    t90 = (x381&(x382-(x383%x384)));

    if (t90 != 18446744073709551562LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x385 = -27;
	int32_t x386 = -1;
	uint16_t x387 = 61U;
	volatile int16_t x388 = INT16_MAX;

    t91 = (x385&(x386-(x387%x388)));

    if (t91 != -64) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x389 = 2702U;
	int64_t x390 = INT64_MAX;
	uint16_t x392 = 319U;
	volatile int64_t t92 = 4726130843520926LL;

    t92 = (x389&(x390-(x391%x392)));

    if (t92 != 2698LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x393 = 1625791;
	int16_t x394 = -384;
	static int32_t x396 = -1;
	volatile int32_t t93 = 20773746;

    t93 = (x393&(x394-(x395%x396)));

    if (t93 != 1625728) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x397 = INT16_MAX;
	static int32_t x399 = -11010196;
	int32_t x400 = 7310;
	volatile uint32_t t94 = 2U;

    t94 = (x397&(x398-(x399%x400)));

    if (t94 != 1335U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x406 = UINT16_MAX;
	volatile int16_t x407 = 20;
	int16_t x408 = INT16_MIN;

    t95 = (x405&(x406-(x407%x408)));

    if (t95 != 12139U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x409 = 0U;
	static int16_t x411 = INT16_MAX;
	volatile uint16_t x412 = UINT16_MAX;
	int64_t t96 = -364158017554359010LL;

    t96 = (x409&(x410-(x411%x412)));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x413 = -1;
	static uint16_t x414 = 2U;
	int16_t x415 = -141;
	int64_t x416 = INT64_MAX;
	static volatile int64_t t97 = 253424289826818188LL;

    t97 = (x413&(x414-(x415%x416)));

    if (t97 != 143LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x417 = UINT16_MAX;
	int8_t x418 = 5;
	volatile uint16_t x419 = UINT16_MAX;
	volatile int32_t t98 = 1498;

    t98 = (x417&(x418-(x419%x420)));

    if (t98 != 6) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x421 = -46;
	uint16_t x422 = UINT16_MAX;
	int8_t x423 = INT8_MIN;
	uint64_t x424 = 9036535334838LLU;
	uint64_t t99 = 2472711144379LLU;

    t99 = (x421&(x422-(x423%x424)));

    if (t99 != 18446740442306951760LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x425 = -1;
	static int8_t x426 = INT8_MIN;
	uint16_t x427 = 8094U;
	uint16_t x428 = 11U;
	volatile int32_t t100 = 917;

    t100 = (x425&(x426-(x427%x428)));

    if (t100 != -137) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x429 = INT8_MAX;
	int32_t x430 = INT32_MAX;
	int16_t x432 = -2;
	int32_t t101 = 742442;

    t101 = (x429&(x430-(x431%x432)));

    if (t101 != 126) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x433 = UINT8_MAX;
	uint8_t x434 = 1U;
	uint32_t x435 = UINT32_MAX;
	uint64_t x436 = UINT64_MAX;
	uint64_t t102 = 4LLU;

    t102 = (x433&(x434-(x435%x436)));

    if (t102 != 2LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x437 = UINT64_MAX;
	int32_t x439 = -1;

    t103 = (x437&(x438-(x439%x440)));

    if (t103 != 19LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x443 = -6;
	volatile int64_t t104 = 3484305583321852LL;

    t104 = (x441&(x442-(x443%x444)));

    if (t104 != 79LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x445 = UINT64_MAX;
	uint64_t x446 = UINT64_MAX;
	int32_t x447 = -1;
	int64_t x448 = INT64_MIN;
	uint64_t t105 = 64017LLU;

    t105 = (x445&(x446-(x447%x448)));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x449 = INT32_MIN;
	uint16_t x450 = 11148U;
	int64_t x451 = 0LL;
	int16_t x452 = -110;
	volatile int64_t t106 = -1012904395500847250LL;

    t106 = (x449&(x450-(x451%x452)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x453 = 26386254476378LLU;
	volatile int8_t x454 = INT8_MIN;
	volatile int16_t x455 = INT16_MIN;

    t107 = (x453&(x454-(x455%x456)));

    if (t107 != 26386254476290LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x459 = -244292;
	int8_t x460 = 1;

    t108 = (x457&(x458-(x459%x460)));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x462 = INT16_MAX;
	int64_t x463 = 97813136348685285LL;
	volatile uint16_t x464 = 3U;
	volatile int64_t t109 = 360347LL;

    t109 = (x461&(x462-(x463%x464)));

    if (t109 != 27304LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x465 = 58001000196LL;
	uint32_t x467 = 412U;
	int8_t x468 = INT8_MAX;
	static int64_t t110 = 11LL;

    t110 = (x465&(x466-(x467%x468)));

    if (t110 != 768LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x469 = -62;
	volatile uint16_t x470 = 12457U;
	volatile int8_t x471 = INT8_MAX;
	int32_t x472 = -1;

    t111 = (x469&(x470-(x471%x472)));

    if (t111 != 12416) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x478 = 30839U;
	int16_t x479 = INT16_MIN;
	volatile int8_t x480 = INT8_MIN;

    t112 = (x477&(x478-(x479%x480)));

    if (t112 != 119) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint8_t x481 = 30U;
	int16_t x482 = INT16_MIN;
	static int64_t x483 = -16LL;
	int16_t x484 = 2;
	int64_t t113 = -41716005244LL;

    t113 = (x481&(x482-(x483%x484)));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x485 = UINT8_MAX;
	static uint8_t x486 = UINT8_MAX;
	int64_t x487 = INT64_MIN;
	static int64_t t114 = -2133100LL;

    t114 = (x485&(x486-(x487%x488)));

    if (t114 != 7LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x491 = -1;
	int32_t x492 = INT32_MIN;
	volatile int32_t t115 = -3;

    t115 = (x489&(x490-(x491%x492)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x493 = -5;
	volatile int64_t x494 = INT64_MIN;
	int32_t x495 = INT32_MIN;
	int16_t x496 = INT16_MIN;
	int64_t t116 = INT64_MIN;

    t116 = (x493&(x494-(x495%x496)));

    if (t116 != INT64_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x497 = 2;
	int32_t x498 = INT32_MIN;
	volatile uint64_t x499 = UINT64_MAX;
	uint64_t x500 = UINT64_MAX;
	uint64_t t117 = 666716113126065LLU;

    t117 = (x497&(x498-(x499%x500)));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x501 = -50;
	int32_t x502 = INT32_MIN;
	volatile int32_t x503 = INT32_MIN;
	volatile uint16_t x504 = UINT16_MAX;
	volatile int32_t t118 = 0;

    t118 = (x501&(x502-(x503%x504)));

    if (t118 != -2147450880) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x506 = -1LL;
	int32_t x508 = INT32_MIN;
	static volatile int64_t t119 = 668LL;

    t119 = (x505&(x506-(x507%x508)));

    if (t119 != 2LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x509 = UINT16_MAX;
	volatile int32_t x511 = -1;
	int32_t x512 = -414436869;

    t120 = (x509&(x510-(x511%x512)));

    if (t120 != 32769) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x514 = INT32_MAX;
	uint32_t x515 = 7U;
	uint16_t x516 = UINT16_MAX;
	uint32_t t121 = 9335985U;

    t121 = (x513&(x514-(x515%x516)));

    if (t121 != 120U) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x517 = INT32_MAX;
	volatile int8_t x518 = INT8_MAX;
	static int16_t x520 = INT16_MIN;
	volatile int32_t t122 = 512968190;

    t122 = (x517&(x518-(x519%x520)));

    if (t122 != 2147451008) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x521 = INT32_MAX;
	static int16_t x522 = 0;
	int64_t x523 = INT64_MAX;
	static int32_t x524 = INT32_MAX;
	static volatile int64_t t123 = 2539776978020LL;

    t123 = (x521&(x522-(x523%x524)));

    if (t123 != 2147483647LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x525 = -1;
	uint64_t x526 = 143057583LLU;
	uint64_t x527 = 1436662511LLU;
	static int8_t x528 = 1;
	uint64_t t124 = 298718626863113LLU;

    t124 = (x525&(x526-(x527%x528)));

    if (t124 != 143057583LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x529 = INT64_MAX;
	uint16_t x531 = 10U;

    t125 = (x529&(x530-(x531%x532)));

    if (t125 != 9223372036854775798LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t t126 = 106322539LLU;

    t126 = (x533&(x534-(x535%x536)));

    if (t126 != 240LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x538 = INT32_MIN;
	int64_t t127 = -25796572871LL;

    t127 = (x537&(x538-(x539%x540)));

    if (t127 != 2147483411LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x541 = INT8_MIN;
	volatile int16_t x542 = 7;
	int32_t x544 = -1;
	int32_t t128 = 13609574;

    t128 = (x541&(x542-(x543%x544)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x545 = UINT8_MAX;
	int64_t x546 = -1LL;
	int64_t x547 = INT64_MIN;
	volatile int64_t t129 = -4490434497531269LL;

    t129 = (x545&(x546-(x547%x548)));

    if (t129 != 255LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x549 = UINT16_MAX;
	int64_t x550 = INT64_MIN;
	static int32_t x551 = -1;
	int64_t x552 = INT64_MIN;
	static int64_t t130 = -149002892868688702LL;

    t130 = (x549&(x550-(x551%x552)));

    if (t130 != 1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x553 = 1U;
	int16_t x554 = INT16_MAX;
	volatile uint32_t x556 = UINT32_MAX;
	static volatile uint32_t t131 = 33U;

    t131 = (x553&(x554-(x555%x556)));

    if (t131 != 1U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x557 = 1U;
	int64_t x558 = INT64_MIN;
	uint64_t x559 = 34087183692523942LLU;
	uint64_t t132 = 25884255099840LLU;

    t132 = (x557&(x558-(x559%x560)));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x561 = 25LL;
	static volatile int8_t x562 = -1;
	int8_t x563 = 1;
	uint8_t x564 = 5U;
	volatile int64_t t133 = 41050702281473LL;

    t133 = (x561&(x562-(x563%x564)));

    if (t133 != 24LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x565 = UINT8_MAX;
	int16_t x566 = 193;
	int8_t x567 = -1;
	int8_t x568 = INT8_MAX;
	static int32_t t134 = -254848;

    t134 = (x565&(x566-(x567%x568)));

    if (t134 != 194) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x570 = 0;
	static volatile int64_t x571 = INT64_MIN;
	int16_t x572 = -1;
	volatile uint64_t t135 = 1813LLU;

    t135 = (x569&(x570-(x571%x572)));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x577 = INT16_MIN;
	uint16_t x578 = 1U;
	int8_t x579 = INT8_MIN;
	volatile int32_t t136 = 206326;

    t136 = (x577&(x578-(x579%x580)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x581 = 796U;
	int64_t x582 = INT64_MAX;
	int64_t x583 = INT64_MAX;
	volatile uint64_t x584 = UINT64_MAX;

    t137 = (x581&(x582-(x583%x584)));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x585 = 11;
	int16_t x587 = INT16_MAX;
	int8_t x588 = 1;
	volatile int32_t t138 = -73183;

    t138 = (x585&(x586-(x587%x588)));

    if (t138 != 11) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x589 = 2197762003390868781LLU;
	static int16_t x590 = INT16_MIN;
	int8_t x591 = 0;
	volatile int8_t x592 = INT8_MIN;
	volatile uint64_t t139 = 15317LLU;

    t139 = (x589&(x590-(x591%x592)));

    if (t139 != 2197762003390857216LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x594 = INT32_MIN;
	int64_t x596 = 54LL;
	volatile int64_t t140 = -23285083LL;

    t140 = (x593&(x594-(x595%x596)));

    if (t140 != -2147516416LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x597 = 67;
	uint16_t x598 = UINT16_MAX;
	static int16_t x600 = INT16_MIN;
	volatile int32_t t141 = 274453;

    t141 = (x597&(x598-(x599%x600)));

    if (t141 != 2) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x601 = INT32_MIN;
	int32_t x602 = -7580915;
	uint16_t x603 = 54U;
	uint32_t x604 = 1432U;

    t142 = (x601&(x602-(x603%x604)));

    if (t142 != 2147483648U) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x606 = -1LL;
	int32_t x607 = INT32_MIN;
	volatile int16_t x608 = INT16_MIN;

    t143 = (x605&(x606-(x607%x608)));

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x609 = INT64_MAX;
	int32_t x610 = 0;
	static int8_t x611 = -1;
	int64_t t144 = 31715341123110LL;

    t144 = (x609&(x610-(x611%x612)));

    if (t144 != 1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x614 = INT16_MIN;
	uint64_t x615 = UINT64_MAX;
	volatile uint16_t x616 = UINT16_MAX;
	uint64_t t145 = 25178061LLU;

    t145 = (x613&(x614-(x615%x616)));

    if (t145 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x617 = INT16_MIN;
	volatile int8_t x618 = INT8_MIN;
	int8_t x619 = 0;
	int64_t x620 = -1968882007LL;
	int64_t t146 = -1733692686LL;

    t146 = (x617&(x618-(x619%x620)));

    if (t146 != -32768LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x622 = INT64_MIN;
	int64_t x623 = 473752739881153538LL;
	volatile uint64_t t147 = 257997271894386LLU;

    t147 = (x621&(x622-(x623%x624)));

    if (t147 != 2LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x625 = -1;
	uint16_t x626 = 2U;
	uint16_t x628 = 10U;
	static volatile int32_t t148 = 208945513;

    t148 = (x625&(x626-(x627%x628)));

    if (t148 != 3) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x631 = 0U;
	uint32_t x632 = UINT32_MAX;
	volatile int64_t t149 = 518382323766930547LL;

    t149 = (x629&(x630-(x631%x632)));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x634 = INT16_MAX;
	static uint64_t x635 = 4003068878849611479LLU;
	static uint16_t x636 = 3U;

    t150 = (x633&(x634-(x635%x636)));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x637 = 309;
	volatile int8_t x638 = 0;
	int16_t x639 = -1818;
	static int64_t t151 = 11LL;

    t151 = (x637&(x638-(x639%x640)));

    if (t151 != 272LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x642 = INT32_MAX;
	volatile uint32_t t152 = 133U;

    t152 = (x641&(x642-(x643%x644)));

    if (t152 != 125U) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x646 = 63U;
	uint16_t x647 = 1336U;
	static uint64_t x648 = 244267232792521412LLU;

    t153 = (x645&(x646-(x647%x648)));

    if (t153 != 31495LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x649 = UINT32_MAX;
	int8_t x650 = INT8_MIN;
	static uint64_t t154 = 8142032081LLU;

    t154 = (x649&(x650-(x651%x652)));

    if (t154 != 4294961226LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x653 = 500074813;
	uint16_t x654 = 461U;
	int8_t x655 = -1;
	uint8_t x656 = 5U;
	static volatile int32_t t155 = 30482;

    t155 = (x653&(x654-(x655%x656)));

    if (t155 != 268) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x657 = INT8_MAX;
	static volatile uint32_t x658 = UINT32_MAX;
	int64_t x659 = INT64_MIN;
	volatile int16_t x660 = -1;
	int64_t t156 = 140326162855LL;

    t156 = (x657&(x658-(x659%x660)));

    if (t156 != 127LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x661 = INT16_MIN;
	int16_t x662 = INT16_MAX;
	int64_t x663 = -1LL;
	int8_t x664 = -1;
	volatile int64_t t157 = -7199LL;

    t157 = (x661&(x662-(x663%x664)));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x666 = 6U;
	int32_t x667 = -101630066;
	int64_t x668 = INT64_MIN;

    t158 = (x665&(x666-(x667%x668)));

    if (t158 != 101630064LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x671 = -1;
	uint16_t x672 = 22U;
	volatile uint32_t t159 = 15726995U;

    t159 = (x669&(x670-(x671%x672)));

    if (t159 != 2147483649U) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x673 = 207;
	int32_t x675 = -1;
	static volatile int16_t x676 = -1;

    t160 = (x673&(x674-(x675%x676)));

    if (t160 != 6) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x677 = INT16_MIN;
	int16_t x678 = INT16_MIN;
	static volatile uint32_t x679 = 42479879U;
	uint64_t x680 = 159325385LLU;
	volatile uint64_t t161 = 62587517715355LLU;

    t161 = (x677&(x678-(x679%x680)));

    if (t161 != 18446744073667018752LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x681 = UINT8_MAX;
	int8_t x682 = INT8_MIN;
	int64_t x683 = INT64_MIN;
	int16_t x684 = -1;
	int64_t t162 = -17564959742LL;

    t162 = (x681&(x682-(x683%x684)));

    if (t162 != 128LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x685 = 4U;
	int16_t x686 = INT16_MIN;

    t163 = (x685&(x686-(x687%x688)));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x689 = INT8_MIN;
	uint8_t x690 = 117U;
	static uint8_t x692 = UINT8_MAX;
	int32_t t164 = 3829391;

    t164 = (x689&(x690-(x691%x692)));

    if (t164 != -128) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x693 = INT8_MIN;
	uint64_t x694 = 154028039383LLU;
	volatile int32_t x695 = INT32_MIN;
	uint64_t t165 = 126180324LLU;

    t165 = (x693&(x694-(x695%x696)));

    if (t165 != 156175522944LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x697 = -1LL;
	volatile int16_t x699 = INT16_MIN;
	int32_t x700 = -1;

    t166 = (x697&(x698-(x699%x700)));

    if (t166 != 19LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint32_t x701 = 51996288U;
	volatile uint64_t x702 = 153541577LLU;
	static volatile int32_t x703 = INT32_MAX;
	int16_t x704 = INT16_MAX;
	static uint64_t t167 = 6840035LLU;

    t167 = (x701&(x702-(x703%x704)));

    if (t167 != 16794240LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x705 = -5408656651613LL;
	int32_t x706 = INT32_MAX;
	int64_t t168 = -3LL;

    t168 = (x705&(x706-(x707%x708)));

    if (t168 != 854657664LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x709 = 3;
	volatile uint64_t x710 = 329347LLU;
	int8_t x711 = INT8_MAX;
	volatile uint64_t x712 = 8066LLU;
	static volatile uint64_t t169 = 439LLU;

    t169 = (x709&(x710-(x711%x712)));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x713 = 14153920U;
	int8_t x714 = INT8_MIN;
	int16_t x715 = INT16_MIN;
	static volatile uint32_t t170 = 0U;

    t170 = (x713&(x714-(x715%x716)));

    if (t170 != 14153856U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x717 = -100;
	static int8_t x720 = INT8_MIN;

    t171 = (x717&(x718-(x719%x720)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x721 = -66672;
	uint32_t x723 = 494U;
	static uint32_t x724 = 15460257U;
	volatile int64_t t172 = 939LL;

    t172 = (x721&(x722-(x723%x724)));

    if (t172 != -67056LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x728 = 5LL;
	volatile uint64_t t173 = 26820466792LLU;

    t173 = (x725&(x726-(x727%x728)));

    if (t173 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x730 = UINT32_MAX;
	volatile int32_t x731 = -102;
	int16_t x732 = 5917;
	int64_t t174 = 70LL;

    t174 = (x729&(x730-(x731%x732)));

    if (t174 != 101LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x733 = INT16_MIN;
	int64_t x734 = -87161550LL;
	int64_t x735 = INT64_MIN;
	int32_t x736 = -1;

    t175 = (x733&(x734-(x735%x736)));

    if (t175 != -87162880LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x739 = -2;

    t176 = (x737&(x738-(x739%x740)));

    if (t176 != -126LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x742 = -1;
	int8_t x743 = INT8_MIN;
	uint64_t x744 = 18LLU;

    t177 = (x741&(x742-(x743%x744)));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x746 = 30627980976756LLU;
	int64_t x748 = -1LL;
	uint64_t t178 = 136328212020224LLU;

    t178 = (x745&(x746-(x747%x748)));

    if (t178 != 30627980976756LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x749 = INT16_MAX;
	volatile int32_t x751 = 16389192;
	int8_t x752 = -6;
	volatile int32_t t179 = 22;

    t179 = (x749&(x750-(x751%x752)));

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x753 = INT64_MAX;
	volatile uint8_t x754 = 17U;
	volatile int32_t x755 = 73235;
	int8_t x756 = INT8_MIN;

    t180 = (x753&(x754-(x755%x756)));

    if (t180 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x758 = 10U;
	static volatile int16_t x759 = -1;
	int32_t x760 = INT32_MIN;

    t181 = (x757&(x758-(x759%x760)));

    if (t181 != 11LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x761 = -6568;
	volatile uint32_t x762 = UINT32_MAX;
	uint32_t x763 = UINT32_MAX;
	static int8_t x764 = INT8_MIN;
	volatile uint32_t t182 = 237U;

    t182 = (x761&(x762-(x763%x764)));

    if (t182 != 4294960640U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x766 = -1;
	static uint8_t x767 = 2U;
	static uint16_t x768 = 1U;
	volatile int32_t t183 = INT32_MAX;

    t183 = (x765&(x766-(x767%x768)));

    if (t183 != INT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x769 = INT32_MAX;
	int8_t x770 = 4;
	int64_t x771 = INT64_MAX;
	volatile uint8_t x772 = 31U;
	volatile int64_t t184 = 1324324671242LL;

    t184 = (x769&(x770-(x771%x772)));

    if (t184 != 2147483645LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x777 = -15843;
	static int32_t x778 = 5;
	volatile int16_t x780 = -2818;
	volatile int32_t t185 = -10957;

    t185 = (x777&(x778-(x779%x780)));

    if (t185 != -15868) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x781 = INT64_MIN;
	volatile uint8_t x782 = UINT8_MAX;
	int8_t x783 = -1;

    t186 = (x781&(x782-(x783%x784)));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x785 = 12019816U;
	volatile int8_t x786 = -1;
	uint8_t x787 = 29U;
	uint32_t x788 = 87U;
	volatile uint32_t t187 = 404823562U;

    t187 = (x785&(x786-(x787%x788)));

    if (t187 != 12019808U) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int64_t x789 = INT64_MIN;
	static int8_t x790 = INT8_MIN;
	int64_t x791 = -254782587635LL;
	volatile int8_t x792 = INT8_MIN;
	int64_t t188 = INT64_MIN;

    t188 = (x789&(x790-(x791%x792)));

    if (t188 != INT64_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x794 = -45;
	volatile uint8_t x796 = 1U;

    t189 = (x793&(x794-(x795%x796)));

    if (t189 != INT32_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int16_t x797 = -50;
	volatile uint32_t x799 = 246314959U;
	volatile int64_t t190 = -67554449484353LL;

    t190 = (x797&(x798-(x799%x800)));

    if (t190 != -246315008LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x801 = 0;
	int64_t x802 = 3082228135976606728LL;
	int16_t x803 = INT16_MIN;
	volatile uint32_t x804 = 29967556U;
	volatile int64_t t191 = 15502531822419736LL;

    t191 = (x801&(x802-(x803%x804)));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x805 = 75;
	int16_t x806 = INT16_MIN;
	static int64_t x808 = INT64_MIN;
	int64_t t192 = -7299568884641035LL;

    t192 = (x805&(x806-(x807%x808)));

    if (t192 != 1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x809 = 4140060664732674LLU;
	int32_t x811 = -1;
	int8_t x812 = INT8_MIN;
	uint64_t t193 = 0LLU;

    t193 = (x809&(x810-(x811%x812)));

    if (t193 != 2LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x817 = INT32_MIN;
	int8_t x818 = INT8_MIN;
	int32_t x819 = -380111509;
	uint32_t x820 = UINT32_MAX;
	volatile uint32_t t194 = 70U;

    t194 = (x817&(x818-(x819%x820)));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x821 = UINT64_MAX;
	uint32_t x824 = 41U;
	volatile uint64_t t195 = 40589889LLU;

    t195 = (x821&(x822-(x823%x824)));

    if (t195 != 4294967259LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x825 = -1;
	int8_t x826 = 1;
	static int32_t x827 = -1;
	volatile int32_t x828 = INT32_MIN;

    t196 = (x825&(x826-(x827%x828)));

    if (t196 != 2) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x829 = -1LL;
	uint32_t x830 = 1289U;
	volatile uint16_t x831 = 460U;
	uint64_t x832 = 47076667799959064LLU;
	static uint64_t t197 = 59097402LLU;

    t197 = (x829&(x830-(x831%x832)));

    if (t197 != 829LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x834 = UINT16_MAX;
	uint8_t x836 = 3U;
	volatile uint32_t t198 = 1606U;

    t198 = (x833&(x834-(x835%x836)));

    if (t198 != 255U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x837 = INT16_MIN;
	int32_t x838 = 21;
	static int64_t x839 = -81LL;
	int32_t x840 = 91753;
	int64_t t199 = 1752849379174LL;

    t199 = (x837&(x838-(x839%x840)));

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


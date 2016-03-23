
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

static volatile int32_t t0 = -1;
uint32_t x13 = 4U;
int8_t x19 = 6;
int32_t x26 = -1;
static volatile int64_t x27 = -1LL;
int64_t x43 = -100778428321184LL;
static volatile uint32_t t10 = 5207295U;
static int64_t x54 = INT64_MIN;
static volatile uint64_t t13 = 22752879LLU;
uint64_t x65 = UINT64_MAX;
static int16_t x66 = -4;
int32_t x68 = -26;
int8_t x71 = -1;
volatile uint16_t x72 = 844U;
static uint8_t x82 = UINT8_MAX;
volatile int32_t t19 = -127062445;
volatile int16_t x85 = INT16_MIN;
int32_t x86 = INT32_MIN;
int32_t t20 = -504267;
static volatile int32_t t21 = 221;
static int8_t x97 = INT8_MIN;
static volatile uint8_t x101 = 1U;
static volatile uint64_t t23 = 265125380LLU;
static int32_t x107 = -1;
static int8_t x110 = INT8_MIN;
int8_t x116 = -2;
uint64_t t26 = 899583LLU;
static volatile int32_t x121 = INT32_MAX;
int32_t x128 = INT32_MAX;
int16_t x129 = 3;
int32_t x144 = INT32_MIN;
uint64_t x146 = 4010094978284LLU;
static volatile int32_t x147 = -1;
volatile uint64_t t34 = 5LLU;
int32_t x155 = -83640940;
static uint64_t x156 = 11581375243337143LLU;
uint16_t x162 = 3U;
int32_t t38 = 6355;
uint8_t x166 = UINT8_MAX;
int64_t x167 = 64369LL;
volatile int64_t t39 = 51LL;
static int16_t x172 = INT16_MIN;
volatile int32_t t40 = -68590;
int32_t x177 = INT32_MIN;
volatile uint16_t x178 = UINT16_MAX;
int32_t x181 = -1;
volatile int64_t x182 = INT64_MIN;
int16_t x186 = -801;
int8_t x187 = INT8_MAX;
int32_t x188 = -397729022;
static uint32_t x194 = 2155U;
int32_t x201 = INT32_MIN;
int8_t x202 = INT8_MIN;
int32_t x204 = -1;
int16_t x205 = -1;
volatile int64_t x208 = INT64_MAX;
volatile uint16_t x210 = UINT16_MAX;
volatile int64_t t49 = -7079LL;
int64_t x213 = INT64_MIN;
int32_t t52 = -130313030;
uint64_t x231 = UINT64_MAX;
uint16_t x237 = 20145U;
static volatile int32_t t55 = -423712;
int64_t x244 = -1LL;
volatile int64_t x245 = INT64_MIN;
static int32_t x251 = -1;
int64_t x252 = INT64_MAX;
int32_t x253 = 257;
int8_t x254 = INT8_MIN;
uint16_t x259 = 190U;
int32_t x261 = 2;
uint32_t x264 = 1973U;
int16_t x268 = INT16_MIN;
int32_t x273 = INT32_MIN;
volatile int32_t t64 = -677150569;
volatile uint32_t t66 = 22207846U;
static int32_t x293 = 1;
int16_t x295 = 143;
uint16_t x306 = 25672U;
int32_t x307 = INT32_MIN;
volatile int32_t x308 = 116024;
volatile int16_t x310 = INT16_MIN;
static int64_t x323 = 3LL;
int32_t x324 = -446945226;
uint64_t t74 = 363955430366LLU;
int16_t x327 = -1240;
static volatile int32_t t75 = 890;
int32_t x329 = 3;
int32_t x330 = INT32_MIN;
static int64_t x336 = INT64_MAX;
volatile int32_t t77 = 1;
volatile uint64_t x343 = 5726507LLU;
volatile uint64_t x350 = 2183402LLU;
volatile uint64_t t81 = 214630861082224LLU;
volatile uint8_t x355 = UINT8_MAX;
static int32_t t83 = -13877;
static int16_t x365 = -3;
int8_t x367 = -1;
uint32_t x370 = 951919U;
int64_t x375 = -29881871LL;
static uint32_t x381 = 0U;
static volatile uint64_t t89 = 144297971946332LLU;
uint16_t x392 = UINT16_MAX;
static volatile uint64_t t91 = 3598657705LLU;
volatile int8_t x403 = -1;
volatile uint64_t t92 = 583194420094992738LLU;
static uint16_t x405 = UINT16_MAX;
uint64_t x409 = 4854220LLU;
uint16_t x410 = 2166U;
int32_t x414 = 17;
volatile int32_t t95 = 679345302;
volatile uint16_t x418 = 189U;
volatile uint8_t x423 = 2U;
volatile int16_t x431 = INT16_MIN;
static int16_t x434 = -1;
volatile int8_t x442 = -1;
volatile int64_t t101 = 1141LL;
int16_t x449 = 99;
int16_t x451 = 0;
volatile uint64_t x452 = UINT64_MAX;
int32_t t102 = 23391734;
int16_t x453 = INT16_MIN;
int8_t x455 = INT8_MIN;
int32_t x466 = INT32_MIN;
int16_t x467 = INT16_MIN;
uint16_t x473 = 327U;
uint8_t x475 = 17U;
uint16_t x479 = 158U;
volatile uint64_t t109 = 843190LLU;
int16_t x481 = -4430;
uint64_t x488 = 1164400495LLU;
uint32_t x489 = 3794U;
static volatile uint8_t x492 = 13U;
uint16_t x514 = 113U;
volatile int16_t x518 = INT16_MIN;
uint8_t x523 = UINT8_MAX;
static uint64_t x524 = 8LLU;
int32_t x527 = INT32_MIN;
static uint16_t x529 = UINT16_MAX;
static int16_t x530 = INT16_MIN;
int16_t x537 = -3950;
int8_t x538 = -1;
volatile int32_t t123 = -35;
uint64_t x544 = 2458810237309LLU;
uint64_t x548 = UINT64_MAX;
uint32_t x555 = UINT32_MAX;
int32_t x559 = INT32_MIN;
int16_t x561 = INT16_MIN;
int32_t t129 = 62;
int16_t x566 = INT16_MIN;
int64_t x570 = INT64_MAX;
int16_t x578 = -3;
uint64_t t133 = 1042415991LLU;
volatile int32_t x581 = INT32_MIN;
int64_t x583 = INT64_MIN;
volatile uint64_t t135 = 347LLU;
volatile int64_t x592 = -3503189656729605LL;
volatile uint64_t x595 = 564994658314801149LLU;
uint64_t x597 = 26777LLU;
uint32_t x598 = 29239U;
static int16_t x599 = 0;
int16_t x611 = -311;
int8_t x624 = -1;
int16_t x628 = INT16_MIN;
volatile int16_t x629 = INT16_MIN;
uint32_t x630 = 30U;
int16_t x633 = -1;
uint64_t x635 = 29LLU;
int64_t x638 = INT64_MIN;
static uint64_t x645 = UINT64_MAX;
static uint64_t t149 = 13467793299835715LLU;
volatile int32_t x653 = 3776;
int64_t x654 = INT64_MIN;
volatile int16_t x656 = INT16_MIN;
volatile int64_t t151 = 445961655906542454LL;
uint32_t t153 = 115341U;
static int8_t x671 = INT8_MIN;
static uint32_t x678 = 12290U;
volatile uint64_t x688 = UINT64_MAX;
int64_t x689 = INT64_MAX;
uint16_t x695 = UINT16_MAX;
uint32_t x697 = 21U;
static volatile int8_t x704 = -1;
volatile int8_t x708 = -1;
uint16_t x713 = UINT16_MAX;
uint64_t x716 = 6323375412033008LLU;
int64_t t166 = 5LL;
int64_t x717 = 52932330224LL;
static uint8_t x723 = 4U;
static int64_t x744 = INT64_MIN;
int64_t x746 = -66319674LL;
int8_t x747 = 39;
static uint32_t x748 = UINT32_MAX;
static int64_t x749 = INT64_MIN;
uint32_t x756 = 15U;
int16_t x769 = INT16_MIN;
int32_t x770 = INT32_MAX;
int16_t x772 = INT16_MIN;
static uint16_t x774 = 3559U;
int64_t x784 = -153968909351334LL;
volatile int32_t x790 = 9;
int64_t t186 = 46204571591LL;
static int8_t x809 = INT8_MIN;
volatile uint64_t x811 = UINT64_MAX;
int64_t x812 = -1LL;
int16_t x813 = INT16_MAX;
volatile uint32_t x817 = UINT32_MAX;
static uint32_t x837 = UINT32_MAX;
volatile int16_t x838 = -1;
int32_t x845 = -491764;
int8_t x846 = INT8_MIN;
int16_t x855 = 1;


void f0(void) {
    	volatile int8_t x1 = INT8_MIN;
	int8_t x2 = INT8_MIN;
	static uint16_t x3 = 25U;
	uint64_t x4 = 433809LLU;

    t0 = (x1/(x2|(x3==x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 666U;
	int64_t x6 = INT64_MIN;
	int16_t x7 = -1;
	volatile int8_t x8 = INT8_MIN;
	int64_t t1 = -151877LL;

    t1 = (x5/(x6|(x7==x8)));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x14 = UINT64_MAX;
	volatile int8_t x15 = INT8_MIN;
	int64_t x16 = INT64_MIN;
	volatile uint64_t t2 = 123LLU;

    t2 = (x13/(x14|(x15==x16)));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x17 = 22262U;
	uint8_t x18 = UINT8_MAX;
	volatile int16_t x20 = INT16_MAX;
	volatile int32_t t3 = 36204723;

    t3 = (x17/(x18|(x19==x20)));

    if (t3 != 87) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x21 = -1;
	int64_t x22 = -1LL;
	static int64_t x23 = -3063228048LL;
	static volatile int16_t x24 = 39;
	volatile int64_t t4 = 19530617163300LL;

    t4 = (x21/(x22|(x23==x24)));

    if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = INT16_MIN;
	volatile uint8_t x28 = 61U;
	volatile int32_t t5 = 45782924;

    t5 = (x25/(x26|(x27==x28)));

    if (t5 != 32768) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x29 = 8LLU;
	int64_t x30 = -1LL;
	int16_t x31 = INT16_MIN;
	volatile uint32_t x32 = 19U;
	static volatile uint64_t t6 = 59LLU;

    t6 = (x29/(x30|(x31==x32)));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x33 = 7LL;
	static volatile int16_t x34 = -7;
	uint32_t x35 = 82104978U;
	int64_t x36 = 395086716583728871LL;
	int64_t t7 = 1LL;

    t7 = (x33/(x34|(x35==x36)));

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = -1671LL;
	static int64_t x38 = INT64_MIN;
	int64_t x39 = INT64_MIN;
	int32_t x40 = INT32_MAX;
	int64_t t8 = 37349741803430LL;

    t8 = (x37/(x38|(x39==x40)));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = -1;
	int16_t x42 = INT16_MIN;
	static int16_t x44 = -13440;
	volatile int32_t t9 = 0;

    t9 = (x41/(x42|(x43==x44)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = -19;
	static uint32_t x46 = 221793875U;
	volatile uint64_t x47 = UINT64_MAX;
	volatile uint8_t x48 = UINT8_MAX;

    t10 = (x45/(x46|(x47==x48)));

    if (t10 != 19U) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = 1;
	int32_t x50 = INT32_MIN;
	int64_t x51 = INT64_MIN;
	static int32_t x52 = -1;
	int32_t t11 = 14390333;

    t11 = (x49/(x50|(x51==x52)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = INT16_MAX;
	int64_t x55 = -1325842752744195LL;
	uint64_t x56 = 392150LLU;
	volatile int64_t t12 = 1921307904450072614LL;

    t12 = (x53/(x54|(x55==x56)));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x57 = UINT64_MAX;
	int64_t x58 = INT64_MIN;
	int16_t x59 = INT16_MIN;
	static volatile uint16_t x60 = 3783U;

    t13 = (x57/(x58|(x59==x60)));

    if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = 1011902;
	uint16_t x62 = UINT16_MAX;
	int64_t x63 = 7355LL;
	uint8_t x64 = 0U;
	int32_t t14 = 10;

    t14 = (x61/(x62|(x63==x64)));

    if (t14 != 15) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x67 = 1U;
	uint64_t t15 = 127535800132295280LLU;

    t15 = (x65/(x66|(x67==x68)));

    if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = INT8_MIN;
	volatile int32_t x70 = -822;
	static volatile int32_t t16 = -24509;

    t16 = (x69/(x70|(x71==x72)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = 214709;
	static int64_t x74 = INT64_MIN;
	static int8_t x75 = -1;
	uint64_t x76 = 117922557729LLU;
	volatile int64_t t17 = -29515055722487369LL;

    t17 = (x73/(x74|(x75==x76)));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x77 = INT8_MIN;
	static int16_t x78 = INT16_MIN;
	uint64_t x79 = UINT64_MAX;
	uint16_t x80 = UINT16_MAX;
	static int32_t t18 = 14541;

    t18 = (x77/(x78|(x79==x80)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x81 = 14U;
	uint64_t x83 = UINT64_MAX;
	uint32_t x84 = UINT32_MAX;

    t19 = (x81/(x82|(x83==x84)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x87 = INT16_MIN;
	uint16_t x88 = UINT16_MAX;

    t20 = (x85/(x86|(x87==x88)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x93 = -1;
	static int8_t x94 = INT8_MIN;
	uint32_t x95 = 26184426U;
	int8_t x96 = INT8_MIN;

    t21 = (x93/(x94|(x95==x96)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x98 = INT64_MIN;
	static uint64_t x99 = UINT64_MAX;
	static int32_t x100 = INT32_MIN;
	volatile int64_t t22 = -4295922369785LL;

    t22 = (x97/(x98|(x99==x100)));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x102 = 1162485492LLU;
	uint64_t x103 = 86416765429LLU;
	int64_t x104 = INT64_MIN;

    t23 = (x101/(x102|(x103==x104)));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = -1LL;
	volatile int8_t x106 = 1;
	int8_t x108 = -1;
	volatile int64_t t24 = -40286096036LL;

    t24 = (x105/(x106|(x107==x108)));

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x109 = -1;
	uint8_t x111 = 0U;
	static int32_t x112 = -12;
	int32_t t25 = -313125;

    t25 = (x109/(x110|(x111==x112)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x113 = 12175023LLU;
	uint8_t x114 = 68U;
	volatile uint8_t x115 = 0U;

    t26 = (x113/(x114|(x115==x116)));

    if (t26 != 179044LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x117 = 82938145U;
	static int32_t x118 = 9726;
	int16_t x119 = -1;
	int8_t x120 = 2;
	static uint32_t t27 = 166277659U;

    t27 = (x117/(x118|(x119==x120)));

    if (t27 != 8527U) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x122 = 10156;
	volatile uint32_t x123 = UINT32_MAX;
	volatile int32_t x124 = 5;
	volatile int32_t t28 = 41017316;

    t28 = (x121/(x122|(x123==x124)));

    if (t28 != 211449) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x125 = UINT32_MAX;
	uint16_t x126 = UINT16_MAX;
	uint32_t x127 = 237U;
	uint32_t t29 = 440246U;

    t29 = (x125/(x126|(x127==x128)));

    if (t29 != 65537U) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x130 = -1;
	volatile int8_t x131 = -51;
	static int8_t x132 = INT8_MAX;
	static volatile int32_t t30 = -10;

    t30 = (x129/(x130|(x131==x132)));

    if (t30 != -3) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x133 = UINT64_MAX;
	volatile int16_t x134 = -1;
	int16_t x135 = -1;
	static int16_t x136 = 2903;
	uint64_t t31 = 9LLU;

    t31 = (x133/(x134|(x135==x136)));

    if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int64_t x137 = -1LL;
	uint32_t x138 = UINT32_MAX;
	int16_t x139 = -3;
	static int32_t x140 = -1;
	static int64_t t32 = -96082061LL;

    t32 = (x137/(x138|(x139==x140)));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x141 = 157126574745621LL;
	int8_t x142 = -1;
	int64_t x143 = INT64_MAX;
	static volatile int64_t t33 = 121023876422632228LL;

    t33 = (x141/(x142|(x143==x144)));

    if (t33 != -157126574745621LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x145 = INT8_MAX;
	int64_t x148 = -1LL;

    t34 = (x145/(x146|(x147==x148)));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x149 = INT64_MAX;
	uint32_t x150 = 22914105U;
	volatile int8_t x151 = -1;
	int32_t x152 = INT32_MIN;
	volatile int64_t t35 = 140353LL;

    t35 = (x149/(x150|(x151==x152)));

    if (t35 != 402519410505LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x153 = INT16_MAX;
	volatile uint32_t x154 = UINT32_MAX;
	uint32_t t36 = 225197514U;

    t36 = (x153/(x154|(x155==x156)));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x157 = -1;
	int16_t x158 = -1792;
	volatile uint8_t x159 = 5U;
	volatile int8_t x160 = INT8_MIN;
	int32_t t37 = 69812951;

    t37 = (x157/(x158|(x159==x160)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x161 = INT16_MIN;
	volatile int32_t x163 = 133079134;
	int8_t x164 = -5;

    t38 = (x161/(x162|(x163==x164)));

    if (t38 != -10922) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x165 = INT64_MIN;
	static int32_t x168 = INT32_MIN;

    t39 = (x165/(x166|(x167==x168)));

    if (t39 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x169 = UINT16_MAX;
	int16_t x170 = INT16_MIN;
	uint16_t x171 = 26502U;

    t40 = (x169/(x170|(x171==x172)));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x179 = UINT64_MAX;
	uint64_t x180 = 24382LLU;
	volatile int32_t t41 = -124602;

    t41 = (x177/(x178|(x179==x180)));

    if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x183 = INT64_MIN;
	uint32_t x184 = 509U;
	int64_t t42 = -25LL;

    t42 = (x181/(x182|(x183==x184)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x185 = INT16_MIN;
	static int32_t t43 = 13628683;

    t43 = (x185/(x186|(x187==x188)));

    if (t43 != 40) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x189 = INT8_MIN;
	volatile int16_t x190 = -1;
	int8_t x191 = INT8_MAX;
	int8_t x192 = -18;
	volatile int32_t t44 = 8;

    t44 = (x189/(x190|(x191==x192)));

    if (t44 != 128) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x193 = INT16_MAX;
	int32_t x195 = INT32_MAX;
	int64_t x196 = INT64_MIN;
	uint32_t t45 = 1996253536U;

    t45 = (x193/(x194|(x195==x196)));

    if (t45 != 15U) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x197 = INT32_MAX;
	volatile uint32_t x198 = UINT32_MAX;
	volatile int32_t x199 = INT32_MIN;
	int16_t x200 = 15;
	uint32_t t46 = 20665U;

    t46 = (x197/(x198|(x199==x200)));

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x203 = 61984;
	static int32_t t47 = -1;

    t47 = (x201/(x202|(x203==x204)));

    if (t47 != 16777216) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x206 = -1;
	volatile int32_t x207 = INT32_MAX;
	int32_t t48 = 70851329;

    t48 = (x205/(x206|(x207==x208)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x209 = -2670801099627432LL;
	int8_t x211 = -1;
	volatile int16_t x212 = INT16_MIN;

    t49 = (x209/(x210|(x211==x212)));

    if (t49 != -40753812460LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x214 = INT8_MIN;
	uint16_t x215 = 106U;
	uint8_t x216 = 6U;
	volatile int64_t t50 = -782839840825015533LL;

    t50 = (x213/(x214|(x215==x216)));

    if (t50 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x217 = 1;
	int32_t x218 = INT32_MIN;
	volatile uint64_t x219 = 1727230178561LLU;
	int8_t x220 = INT8_MIN;
	volatile int32_t t51 = 1460;

    t51 = (x217/(x218|(x219==x220)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x225 = INT8_MAX;
	int32_t x226 = -10;
	int8_t x227 = -1;
	uint32_t x228 = 15044U;

    t52 = (x225/(x226|(x227==x228)));

    if (t52 != -12) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x229 = -1;
	int16_t x230 = 1954;
	static int32_t x232 = -18608;
	int32_t t53 = -601967;

    t53 = (x229/(x230|(x231==x232)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x233 = -1;
	uint8_t x234 = UINT8_MAX;
	static volatile uint8_t x235 = 32U;
	int16_t x236 = INT16_MIN;
	int32_t t54 = -5481338;

    t54 = (x233/(x234|(x235==x236)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x238 = -5712;
	int64_t x239 = -6248131959827519LL;
	static uint32_t x240 = 2650231U;

    t55 = (x237/(x238|(x239==x240)));

    if (t55 != -3) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x241 = -1;
	static int8_t x242 = INT8_MIN;
	int64_t x243 = INT64_MIN;
	volatile int32_t t56 = 363;

    t56 = (x241/(x242|(x243==x244)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x246 = 453U;
	int8_t x247 = INT8_MAX;
	volatile int64_t x248 = INT64_MIN;
	static int64_t t57 = -793LL;

    t57 = (x245/(x246|(x247==x248)));

    if (t57 != -20360644672968600LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x249 = INT32_MAX;
	int64_t x250 = INT64_MIN;
	static int64_t t58 = -11920188869875LL;

    t58 = (x249/(x250|(x251==x252)));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x255 = 1U;
	int64_t x256 = INT64_MIN;
	static volatile int32_t t59 = 26889136;

    t59 = (x253/(x254|(x255==x256)));

    if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x257 = 206924997967LLU;
	static int8_t x258 = INT8_MIN;
	int8_t x260 = 1;
	volatile uint64_t t60 = 1769404LLU;

    t60 = (x257/(x258|(x259==x260)));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x262 = UINT16_MAX;
	static int64_t x263 = -1LL;
	int32_t t61 = 2;

    t61 = (x261/(x262|(x263==x264)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x265 = -34155;
	uint16_t x266 = UINT16_MAX;
	uint16_t x267 = 3U;
	volatile int32_t t62 = 7327585;

    t62 = (x265/(x266|(x267==x268)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x269 = INT64_MIN;
	static volatile int64_t x270 = INT64_MIN;
	int16_t x271 = INT16_MAX;
	volatile int8_t x272 = -1;
	volatile int64_t t63 = -34749388476746790LL;

    t63 = (x269/(x270|(x271==x272)));

    if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x274 = 145U;
	static volatile uint16_t x275 = 3335U;
	static volatile int64_t x276 = -1LL;

    t64 = (x273/(x274|(x275==x276)));

    if (t64 != -14810232) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x277 = -1;
	int32_t x278 = INT32_MIN;
	uint32_t x279 = 759581U;
	static int8_t x280 = INT8_MIN;
	volatile int32_t t65 = -23;

    t65 = (x277/(x278|(x279==x280)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x281 = INT16_MIN;
	static volatile uint32_t x282 = UINT32_MAX;
	uint32_t x283 = UINT32_MAX;
	uint16_t x284 = UINT16_MAX;

    t66 = (x281/(x282|(x283==x284)));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x285 = INT32_MIN;
	static int64_t x286 = -1200039LL;
	static uint64_t x287 = 251885262LLU;
	static uint64_t x288 = 15137880850661LLU;
	static int64_t t67 = -65384902LL;

    t67 = (x285/(x286|(x287==x288)));

    if (t67 != 1789LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x294 = 18948U;
	volatile uint8_t x296 = 70U;
	static volatile uint32_t t68 = 0U;

    t68 = (x293/(x294|(x295==x296)));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x297 = 1304031LLU;
	int64_t x298 = INT64_MIN;
	int8_t x299 = -9;
	uint32_t x300 = 1U;
	uint64_t t69 = 66243947038664LLU;

    t69 = (x297/(x298|(x299==x300)));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x301 = 352U;
	static volatile int8_t x302 = INT8_MAX;
	volatile int64_t x303 = INT64_MAX;
	int64_t x304 = INT64_MIN;
	int32_t t70 = -66;

    t70 = (x301/(x302|(x303==x304)));

    if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x305 = INT64_MIN;
	static int64_t t71 = -719LL;

    t71 = (x305/(x306|(x307==x308)));

    if (t71 != -359277502214660LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x309 = INT16_MIN;
	int8_t x311 = 0;
	static int8_t x312 = INT8_MIN;
	int32_t t72 = -1319;

    t72 = (x309/(x310|(x311==x312)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x317 = INT64_MAX;
	uint32_t x318 = UINT32_MAX;
	int16_t x319 = -1;
	int32_t x320 = INT32_MIN;
	static volatile int64_t t73 = 1371LL;

    t73 = (x317/(x318|(x319==x320)));

    if (t73 != 2147483648LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x321 = 50487723LLU;
	static int64_t x322 = 486424465583LL;

    t74 = (x321/(x322|(x323==x324)));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x325 = -8;
	int32_t x326 = INT32_MIN;
	int32_t x328 = -1;

    t75 = (x325/(x326|(x327==x328)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x331 = INT16_MAX;
	int32_t x332 = INT32_MIN;
	static int32_t t76 = 19;

    t76 = (x329/(x330|(x331==x332)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x333 = -1;
	volatile int16_t x334 = -207;
	volatile uint16_t x335 = UINT16_MAX;

    t77 = (x333/(x334|(x335==x336)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x337 = INT16_MIN;
	int32_t x338 = INT32_MAX;
	static int16_t x339 = -1;
	int32_t x340 = INT32_MIN;
	int32_t t78 = -13532;

    t78 = (x337/(x338|(x339==x340)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x341 = -13170LL;
	volatile uint32_t x342 = 861661584U;
	volatile int64_t x344 = INT64_MIN;
	volatile int64_t t79 = 426442048286LL;

    t79 = (x341/(x342|(x343==x344)));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x345 = -6;
	static uint32_t x346 = 28409710U;
	int16_t x347 = 19;
	static volatile uint8_t x348 = 101U;
	volatile uint32_t t80 = 33907U;

    t80 = (x345/(x346|(x347==x348)));

    if (t80 != 151U) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x349 = 36U;
	int64_t x351 = 61299269556362208LL;
	int32_t x352 = INT32_MIN;

    t81 = (x349/(x350|(x351==x352)));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x353 = -1;
	volatile uint8_t x354 = UINT8_MAX;
	int8_t x356 = INT8_MAX;
	volatile int32_t t82 = -4378864;

    t82 = (x353/(x354|(x355==x356)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x357 = INT16_MAX;
	static uint8_t x358 = 5U;
	volatile int8_t x359 = -29;
	volatile int16_t x360 = 9516;

    t83 = (x357/(x358|(x359==x360)));

    if (t83 != 6553) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x361 = 1U;
	int32_t x362 = -20864;
	uint16_t x363 = UINT16_MAX;
	uint32_t x364 = 1293022U;
	volatile int32_t t84 = 64238005;

    t84 = (x361/(x362|(x363==x364)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x366 = -1LL;
	uint16_t x368 = UINT16_MAX;
	int64_t t85 = -283338167LL;

    t85 = (x365/(x366|(x367==x368)));

    if (t85 != 3LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x369 = INT64_MIN;
	int64_t x371 = 1695922537802884LL;
	int64_t x372 = INT64_MAX;
	int64_t t86 = 0LL;

    t86 = (x369/(x370|(x371==x372)));

    if (t86 != -9689240404755LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x373 = UINT64_MAX;
	int8_t x374 = 4;
	int64_t x376 = INT64_MIN;
	volatile uint64_t t87 = 969002663LLU;

    t87 = (x373/(x374|(x375==x376)));

    if (t87 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x377 = 21U;
	int64_t x378 = -3868099480236556147LL;
	volatile int32_t x379 = INT32_MAX;
	uint64_t x380 = 1218LLU;
	int64_t t88 = -123LL;

    t88 = (x377/(x378|(x379==x380)));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x382 = 13005705267566589LLU;
	int16_t x383 = INT16_MIN;
	uint16_t x384 = UINT16_MAX;

    t89 = (x381/(x382|(x383==x384)));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x385 = -1;
	int32_t x386 = INT32_MIN;
	int16_t x387 = 7050;
	int16_t x388 = -1;
	volatile int32_t t90 = 5;

    t90 = (x385/(x386|(x387==x388)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x389 = 458U;
	static volatile uint64_t x390 = 1LLU;
	int16_t x391 = -1;

    t91 = (x389/(x390|(x391==x392)));

    if (t91 != 458LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x401 = 5792596LLU;
	uint8_t x402 = 61U;
	int16_t x404 = INT16_MAX;

    t92 = (x401/(x402|(x403==x404)));

    if (t92 != 94960LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x406 = 73LL;
	int16_t x407 = INT16_MIN;
	static int16_t x408 = 1;
	volatile int64_t t93 = 2801783400542445LL;

    t93 = (x405/(x406|(x407==x408)));

    if (t93 != 897LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x411 = 11U;
	static uint8_t x412 = 11U;
	uint64_t t94 = 5985LLU;

    t94 = (x409/(x410|(x411==x412)));

    if (t94 != 2240LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x413 = -1;
	volatile int8_t x415 = INT8_MIN;
	volatile uint16_t x416 = UINT16_MAX;

    t95 = (x413/(x414|(x415==x416)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x417 = INT8_MIN;
	int8_t x419 = INT8_MIN;
	static volatile int16_t x420 = INT16_MIN;
	volatile int32_t t96 = 433017922;

    t96 = (x417/(x418|(x419==x420)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x421 = INT32_MIN;
	static uint8_t x422 = 1U;
	int16_t x424 = INT16_MIN;
	int32_t t97 = INT32_MIN;

    t97 = (x421/(x422|(x423==x424)));

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x429 = -1LL;
	int32_t x430 = INT32_MIN;
	volatile int32_t x432 = INT32_MAX;
	int64_t t98 = 480638993192661726LL;

    t98 = (x429/(x430|(x431==x432)));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x433 = 78112;
	static int32_t x435 = INT32_MIN;
	int32_t x436 = -18745972;
	static volatile int32_t t99 = -12666702;

    t99 = (x433/(x434|(x435==x436)));

    if (t99 != -78112) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x441 = UINT8_MAX;
	int8_t x443 = INT8_MIN;
	uint64_t x444 = 1777040956LLU;
	int32_t t100 = 29969559;

    t100 = (x441/(x442|(x443==x444)));

    if (t100 != -255) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x445 = -1272443422112651LL;
	static volatile int8_t x446 = -1;
	uint32_t x447 = 3931316U;
	static int16_t x448 = INT16_MAX;

    t101 = (x445/(x446|(x447==x448)));

    if (t101 != 1272443422112651LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x450 = INT16_MIN;

    t102 = (x449/(x450|(x451==x452)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x454 = UINT32_MAX;
	static int32_t x456 = -1;
	volatile uint32_t t103 = 4353U;

    t103 = (x453/(x454|(x455==x456)));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x457 = 2117U;
	int8_t x458 = INT8_MIN;
	static int32_t x459 = -22013;
	int64_t x460 = INT64_MAX;
	volatile int32_t t104 = 0;

    t104 = (x457/(x458|(x459==x460)));

    if (t104 != -16) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x461 = 1U;
	int8_t x462 = INT8_MAX;
	static volatile int16_t x463 = INT16_MAX;
	static int64_t x464 = -1LL;
	static int32_t t105 = 413286644;

    t105 = (x461/(x462|(x463==x464)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x465 = 16;
	volatile int32_t x468 = INT32_MAX;
	int32_t t106 = -1;

    t106 = (x465/(x466|(x467==x468)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x469 = 2004U;
	int16_t x470 = -1;
	int8_t x471 = 0;
	int8_t x472 = 29;
	static int32_t t107 = 6876;

    t107 = (x469/(x470|(x471==x472)));

    if (t107 != -2004) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x474 = UINT8_MAX;
	int32_t x476 = INT32_MAX;
	volatile int32_t t108 = -246957794;

    t108 = (x473/(x474|(x475==x476)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x477 = 40358683702510828LLU;
	static uint64_t x478 = 445656903668626899LLU;
	int8_t x480 = -1;

    t109 = (x477/(x478|(x479==x480)));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x482 = INT32_MIN;
	volatile uint64_t x483 = 12907618LLU;
	int16_t x484 = INT16_MIN;
	int32_t t110 = -1831;

    t110 = (x481/(x482|(x483==x484)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x485 = -312059;
	static uint16_t x486 = 1U;
	static int16_t x487 = 5655;
	volatile int32_t t111 = 7916781;

    t111 = (x485/(x486|(x487==x488)));

    if (t111 != -312059) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x490 = INT32_MIN;
	volatile int16_t x491 = -2974;
	volatile uint32_t t112 = 1U;

    t112 = (x489/(x490|(x491==x492)));

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x493 = INT16_MIN;
	uint64_t x494 = 682718111LLU;
	uint8_t x495 = 7U;
	uint8_t x496 = UINT8_MAX;
	volatile uint64_t t113 = 11575431047694673LLU;

    t113 = (x493/(x494|(x495==x496)));

    if (t113 != 27019561626LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x501 = 424U;
	uint16_t x502 = UINT16_MAX;
	static int8_t x503 = INT8_MAX;
	static uint16_t x504 = 1791U;
	volatile int32_t t114 = 1985823;

    t114 = (x501/(x502|(x503==x504)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x505 = -3152249307101129970LL;
	int8_t x506 = 1;
	static uint16_t x507 = 593U;
	int64_t x508 = INT64_MIN;
	int64_t t115 = -1LL;

    t115 = (x505/(x506|(x507==x508)));

    if (t115 != -3152249307101129970LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x509 = 7U;
	int8_t x510 = -7;
	static int8_t x511 = 2;
	uint8_t x512 = 16U;
	volatile int32_t t116 = 1;

    t116 = (x509/(x510|(x511==x512)));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x513 = 8769060LLU;
	uint32_t x515 = 25796U;
	uint32_t x516 = 306169221U;
	uint64_t t117 = 3187LLU;

    t117 = (x513/(x514|(x515==x516)));

    if (t117 != 77602LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x517 = INT16_MIN;
	volatile int64_t x519 = INT64_MIN;
	uint16_t x520 = UINT16_MAX;
	int32_t t118 = 6;

    t118 = (x517/(x518|(x519==x520)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x521 = INT8_MIN;
	uint64_t x522 = 4805088433732221LLU;
	volatile uint64_t t119 = 1129590948024584LLU;

    t119 = (x521/(x522|(x523==x524)));

    if (t119 != 3839LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x525 = INT32_MAX;
	int32_t x526 = INT32_MIN;
	volatile uint8_t x528 = 3U;
	volatile int32_t t120 = 2611111;

    t120 = (x525/(x526|(x527==x528)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x531 = 124997730083286287LLU;
	int32_t x532 = 7;
	int32_t t121 = -1448;

    t121 = (x529/(x530|(x531==x532)));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x533 = -1LL;
	volatile uint64_t x534 = 69716983860402609LLU;
	int32_t x535 = -71580;
	static uint16_t x536 = UINT16_MAX;
	uint64_t t122 = 6881LLU;

    t122 = (x533/(x534|(x535==x536)));

    if (t122 != 264LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x539 = INT64_MAX;
	static int8_t x540 = INT8_MIN;

    t123 = (x537/(x538|(x539==x540)));

    if (t123 != 3950) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x541 = UINT16_MAX;
	static volatile uint32_t x542 = 1833587141U;
	static uint8_t x543 = 0U;
	static volatile uint32_t t124 = 54681U;

    t124 = (x541/(x542|(x543==x544)));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x545 = 3U;
	int16_t x546 = -1824;
	static int32_t x547 = -28354331;
	int32_t t125 = 813;

    t125 = (x545/(x546|(x547==x548)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x549 = 4U;
	static volatile uint64_t x550 = UINT64_MAX;
	int64_t x551 = INT64_MIN;
	volatile int8_t x552 = INT8_MIN;
	uint64_t t126 = 3554095249278474LLU;

    t126 = (x549/(x550|(x551==x552)));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x553 = 2U;
	volatile uint16_t x554 = 279U;
	uint32_t x556 = UINT32_MAX;
	volatile uint32_t t127 = 2U;

    t127 = (x553/(x554|(x555==x556)));

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x557 = INT16_MIN;
	static volatile int8_t x558 = -8;
	int64_t x560 = INT64_MAX;
	int32_t t128 = -1245310;

    t128 = (x557/(x558|(x559==x560)));

    if (t128 != 4096) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x562 = 57U;
	int16_t x563 = INT16_MAX;
	int8_t x564 = INT8_MIN;

    t129 = (x561/(x562|(x563==x564)));

    if (t129 != -574) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x565 = INT32_MIN;
	int8_t x567 = -1;
	int32_t x568 = -1;
	int32_t t130 = -271129967;

    t130 = (x565/(x566|(x567==x568)));

    if (t130 != 65538) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x569 = 13972;
	static int64_t x571 = -1LL;
	uint32_t x572 = UINT32_MAX;
	volatile int64_t t131 = -13997847LL;

    t131 = (x569/(x570|(x571==x572)));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x573 = INT16_MIN;
	uint8_t x574 = 1U;
	volatile uint8_t x575 = UINT8_MAX;
	int16_t x576 = INT16_MIN;
	int32_t t132 = -1;

    t132 = (x573/(x574|(x575==x576)));

    if (t132 != -32768) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x577 = 618592LLU;
	static int16_t x579 = INT16_MIN;
	int16_t x580 = INT16_MIN;

    t133 = (x577/(x578|(x579==x580)));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x582 = INT8_MAX;
	int8_t x584 = -1;
	volatile int32_t t134 = 3;

    t134 = (x581/(x582|(x583==x584)));

    if (t134 != -16909320) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x585 = 2963911045021594463LLU;
	int32_t x586 = 265429;
	int64_t x587 = -273437239165LL;
	uint8_t x588 = 1U;

    t135 = (x585/(x586|(x587==x588)));

    if (t135 != 11166492904021LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x589 = 1;
	static uint8_t x590 = UINT8_MAX;
	volatile int32_t x591 = INT32_MAX;
	volatile int32_t t136 = 216022;

    t136 = (x589/(x590|(x591==x592)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x593 = 3;
	static volatile int16_t x594 = INT16_MIN;
	int8_t x596 = INT8_MIN;
	volatile int32_t t137 = -3;

    t137 = (x593/(x594|(x595==x596)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x600 = 6958U;
	static uint64_t t138 = 7LLU;

    t138 = (x597/(x598|(x599==x600)));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x605 = 716955989183060LLU;
	uint32_t x606 = UINT32_MAX;
	volatile int64_t x607 = INT64_MAX;
	volatile int8_t x608 = -1;
	volatile uint64_t t139 = 481326LLU;

    t139 = (x605/(x606|(x607==x608)));

    if (t139 != 166929LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x609 = 4052101255713LL;
	int8_t x610 = -1;
	int32_t x612 = INT32_MIN;
	volatile int64_t t140 = 77087233438LL;

    t140 = (x609/(x610|(x611==x612)));

    if (t140 != -4052101255713LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x613 = -1LL;
	static int16_t x614 = 6;
	volatile uint16_t x615 = 0U;
	static int64_t x616 = INT64_MAX;
	static int64_t t141 = -1936LL;

    t141 = (x613/(x614|(x615==x616)));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x617 = INT16_MIN;
	int32_t x618 = -1;
	int16_t x619 = 1;
	uint32_t x620 = 1U;
	int32_t t142 = 889908;

    t142 = (x617/(x618|(x619==x620)));

    if (t142 != 32768) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x621 = INT64_MIN;
	uint64_t x622 = UINT64_MAX;
	uint64_t x623 = 38613620LLU;
	volatile uint64_t t143 = 47519LLU;

    t143 = (x621/(x622|(x623==x624)));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x625 = -1;
	int32_t x626 = 7488;
	int16_t x627 = INT16_MIN;
	static volatile int32_t t144 = 852602;

    t144 = (x625/(x626|(x627==x628)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x631 = 1U;
	volatile int64_t x632 = INT64_MAX;
	uint32_t t145 = 6U;

    t145 = (x629/(x630|(x631==x632)));

    if (t145 != 143164484U) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x634 = -1LL;
	uint16_t x636 = UINT16_MAX;
	volatile int64_t t146 = 103379905341588LL;

    t146 = (x633/(x634|(x635==x636)));

    if (t146 != 1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x637 = -78326208LL;
	int32_t x639 = -1;
	volatile int64_t x640 = 532225443188685LL;
	volatile int64_t t147 = -760407908LL;

    t147 = (x637/(x638|(x639==x640)));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x641 = INT8_MAX;
	int8_t x642 = INT8_MIN;
	uint64_t x643 = 5LLU;
	int16_t x644 = INT16_MAX;
	static int32_t t148 = 3369623;

    t148 = (x641/(x642|(x643==x644)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x646 = -1;
	int16_t x647 = INT16_MIN;
	uint64_t x648 = 9737LLU;

    t149 = (x645/(x646|(x647==x648)));

    if (t149 != 1LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x649 = INT32_MAX;
	static int64_t x650 = -155382LL;
	int64_t x651 = INT64_MAX;
	int16_t x652 = -1;
	volatile int64_t t150 = 226LL;

    t150 = (x649/(x650|(x651==x652)));

    if (t150 != -13820LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x655 = INT32_MIN;

    t151 = (x653/(x654|(x655==x656)));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x657 = -3;
	int16_t x658 = INT16_MIN;
	int64_t x659 = -1LL;
	volatile int32_t x660 = INT32_MIN;
	static int32_t t152 = -3;

    t152 = (x657/(x658|(x659==x660)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x661 = 0U;
	int16_t x662 = INT16_MIN;
	int64_t x663 = 410LL;
	int16_t x664 = INT16_MIN;

    t153 = (x661/(x662|(x663==x664)));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x665 = INT32_MIN;
	uint8_t x666 = UINT8_MAX;
	volatile int8_t x667 = INT8_MIN;
	int8_t x668 = -1;
	volatile int32_t t154 = -271689763;

    t154 = (x665/(x666|(x667==x668)));

    if (t154 != -8421504) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x669 = INT16_MIN;
	volatile int8_t x670 = -1;
	int16_t x672 = -15406;
	volatile int32_t t155 = 56019319;

    t155 = (x669/(x670|(x671==x672)));

    if (t155 != 32768) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x673 = 124;
	volatile int8_t x674 = 7;
	static uint8_t x675 = 2U;
	int32_t x676 = -1;
	volatile int32_t t156 = -2241264;

    t156 = (x673/(x674|(x675==x676)));

    if (t156 != 17) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x677 = 17LLU;
	int32_t x679 = 9175;
	static int16_t x680 = -1;
	uint64_t t157 = 57LLU;

    t157 = (x677/(x678|(x679==x680)));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x681 = -48LL;
	volatile int8_t x682 = INT8_MAX;
	static int8_t x683 = -1;
	int32_t x684 = INT32_MIN;
	int64_t t158 = -77202270987LL;

    t158 = (x681/(x682|(x683==x684)));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x685 = 105U;
	uint8_t x686 = 5U;
	static uint8_t x687 = 2U;
	static volatile int32_t t159 = -7749719;

    t159 = (x685/(x686|(x687==x688)));

    if (t159 != 21) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x690 = UINT8_MAX;
	int64_t x691 = 127359785199277138LL;
	int64_t x692 = INT64_MAX;
	int64_t t160 = 4LL;

    t160 = (x689/(x690|(x691==x692)));

    if (t160 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x693 = UINT16_MAX;
	static int32_t x694 = -1;
	int32_t x696 = -241271;
	volatile int32_t t161 = 1;

    t161 = (x693/(x694|(x695==x696)));

    if (t161 != -65535) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x698 = UINT16_MAX;
	uint8_t x699 = 7U;
	int16_t x700 = INT16_MAX;
	volatile uint32_t t162 = 14065U;

    t162 = (x697/(x698|(x699==x700)));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x701 = INT8_MAX;
	volatile uint64_t x702 = 353030823993608891LLU;
	uint32_t x703 = 27U;
	volatile uint64_t t163 = 35530826794LLU;

    t163 = (x701/(x702|(x703==x704)));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x705 = INT16_MAX;
	int64_t x706 = -3LL;
	int16_t x707 = INT16_MAX;
	static volatile int64_t t164 = -905LL;

    t164 = (x705/(x706|(x707==x708)));

    if (t164 != -10922LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x709 = 11628208046687LLU;
	int16_t x710 = INT16_MIN;
	int32_t x711 = INT32_MIN;
	volatile uint16_t x712 = 21U;
	volatile uint64_t t165 = 199121153780954079LLU;

    t165 = (x709/(x710|(x711==x712)));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x714 = -50393510582629434LL;
	static volatile int8_t x715 = INT8_MIN;

    t166 = (x713/(x714|(x715==x716)));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x718 = INT32_MIN;
	int16_t x719 = -1;
	static volatile int8_t x720 = INT8_MIN;
	volatile int64_t t167 = -474930932489195LL;

    t167 = (x717/(x718|(x719==x720)));

    if (t167 != -24LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x721 = 1LLU;
	int32_t x722 = -1;
	volatile int8_t x724 = -12;
	uint64_t t168 = 8821497484LLU;

    t168 = (x721/(x722|(x723==x724)));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x725 = -82;
	int32_t x726 = INT32_MIN;
	int16_t x727 = 109;
	static int64_t x728 = -1LL;
	static int32_t t169 = -1696;

    t169 = (x725/(x726|(x727==x728)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x733 = 369264619422LLU;
	int16_t x734 = INT16_MIN;
	int16_t x735 = 455;
	int32_t x736 = -673874485;
	volatile uint64_t t170 = 35364627170578LLU;

    t170 = (x733/(x734|(x735==x736)));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x737 = INT32_MIN;
	volatile int8_t x738 = 10;
	int16_t x739 = -2484;
	int8_t x740 = INT8_MIN;
	int32_t t171 = 0;

    t171 = (x737/(x738|(x739==x740)));

    if (t171 != -214748364) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x741 = INT8_MIN;
	int32_t x742 = 285286;
	int16_t x743 = -1;
	volatile int32_t t172 = 15;

    t172 = (x741/(x742|(x743==x744)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x745 = INT32_MIN;
	volatile int64_t t173 = -6528079003037LL;

    t173 = (x745/(x746|(x747==x748)));

    if (t173 != 32LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x750 = 2U;
	static int64_t x751 = INT64_MIN;
	int32_t x752 = INT32_MIN;
	volatile int64_t t174 = -13009LL;

    t174 = (x749/(x750|(x751==x752)));

    if (t174 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x753 = -1;
	volatile int64_t x754 = 2671733034LL;
	int32_t x755 = INT32_MAX;
	int64_t t175 = -190582615085LL;

    t175 = (x753/(x754|(x755==x756)));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x757 = INT8_MAX;
	int64_t x758 = 71480010410872LL;
	uint32_t x759 = UINT32_MAX;
	uint16_t x760 = UINT16_MAX;
	int64_t t176 = 138003951079547LL;

    t176 = (x757/(x758|(x759==x760)));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x761 = 3622U;
	static volatile int64_t x762 = -1LL;
	volatile int64_t x763 = 30LL;
	volatile int64_t x764 = INT64_MIN;
	int64_t t177 = 110292LL;

    t177 = (x761/(x762|(x763==x764)));

    if (t177 != -3622LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x765 = -89;
	int64_t x766 = 15LL;
	int8_t x767 = INT8_MIN;
	uint16_t x768 = UINT16_MAX;
	volatile int64_t t178 = 0LL;

    t178 = (x765/(x766|(x767==x768)));

    if (t178 != -5LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x771 = 0U;
	int32_t t179 = -14;

    t179 = (x769/(x770|(x771==x772)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x773 = 67121;
	int16_t x775 = 13;
	int16_t x776 = INT16_MAX;
	static volatile int32_t t180 = -62;

    t180 = (x773/(x774|(x775==x776)));

    if (t180 != 18) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x777 = 2U;
	int32_t x778 = -26466;
	uint32_t x779 = UINT32_MAX;
	int8_t x780 = INT8_MAX;
	uint32_t t181 = 55531026U;

    t181 = (x777/(x778|(x779==x780)));

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x781 = 67066427U;
	static int32_t x782 = -1;
	uint16_t x783 = 3877U;
	volatile uint32_t t182 = 284334U;

    t182 = (x781/(x782|(x783==x784)));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x785 = -1LL;
	volatile uint32_t x786 = UINT32_MAX;
	int32_t x787 = INT32_MIN;
	uint16_t x788 = 9U;
	volatile int64_t t183 = -43530095LL;

    t183 = (x785/(x786|(x787==x788)));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x789 = -8;
	uint32_t x791 = 44914378U;
	volatile uint64_t x792 = 217473LLU;
	volatile int32_t t184 = -12075;

    t184 = (x789/(x790|(x791==x792)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x793 = 3990U;
	static int8_t x794 = INT8_MAX;
	volatile uint64_t x795 = 741LLU;
	static volatile int64_t x796 = INT64_MIN;
	int32_t t185 = 89;

    t185 = (x793/(x794|(x795==x796)));

    if (t185 != 31) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x797 = INT64_MAX;
	static int8_t x798 = INT8_MIN;
	int64_t x799 = 16LL;
	int64_t x800 = -1LL;

    t186 = (x797/(x798|(x799==x800)));

    if (t186 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x801 = 1;
	volatile uint32_t x802 = 6U;
	int8_t x803 = -1;
	int64_t x804 = INT64_MIN;
	volatile uint32_t t187 = 316U;

    t187 = (x801/(x802|(x803==x804)));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x805 = 0;
	int8_t x806 = -1;
	int32_t x807 = -29199216;
	volatile int16_t x808 = -15;
	static volatile int32_t t188 = 105;

    t188 = (x805/(x806|(x807==x808)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x810 = INT32_MIN;
	volatile int32_t t189 = -710;

    t189 = (x809/(x810|(x811==x812)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x814 = 357319927437205679LLU;
	int64_t x815 = -1LL;
	int16_t x816 = 1;
	static uint64_t t190 = 7817670LLU;

    t190 = (x813/(x814|(x815==x816)));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x818 = INT8_MIN;
	int16_t x819 = INT16_MAX;
	int8_t x820 = INT8_MIN;
	uint32_t t191 = 249U;

    t191 = (x817/(x818|(x819==x820)));

    if (t191 != 1U) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x821 = INT8_MIN;
	static int8_t x822 = -1;
	uint8_t x823 = 38U;
	static volatile int64_t x824 = INT64_MIN;
	volatile int32_t t192 = 1;

    t192 = (x821/(x822|(x823==x824)));

    if (t192 != 128) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x825 = INT16_MAX;
	int8_t x826 = -1;
	int32_t x827 = -959;
	int16_t x828 = INT16_MIN;
	static volatile int32_t t193 = 29;

    t193 = (x825/(x826|(x827==x828)));

    if (t193 != -32767) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x829 = 4;
	int32_t x830 = INT32_MAX;
	static int16_t x831 = INT16_MIN;
	uint64_t x832 = UINT64_MAX;
	int32_t t194 = 73614027;

    t194 = (x829/(x830|(x831==x832)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x833 = -1;
	int16_t x834 = -2894;
	int8_t x835 = INT8_MIN;
	int16_t x836 = INT16_MIN;
	int32_t t195 = -13;

    t195 = (x833/(x834|(x835==x836)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x839 = UINT8_MAX;
	uint64_t x840 = UINT64_MAX;
	static volatile uint32_t t196 = 14342U;

    t196 = (x837/(x838|(x839==x840)));

    if (t196 != 1U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x847 = 1U;
	uint8_t x848 = UINT8_MAX;
	static volatile int32_t t197 = -1;

    t197 = (x845/(x846|(x847==x848)));

    if (t197 != 3841) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x849 = INT64_MAX;
	int16_t x850 = -1;
	volatile int8_t x851 = INT8_MIN;
	int32_t x852 = -992507;
	static volatile int64_t t198 = -856469187LL;

    t198 = (x849/(x850|(x851==x852)));

    if (t198 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x853 = INT8_MIN;
	int8_t x854 = -1;
	volatile int32_t x856 = INT32_MIN;
	volatile int32_t t199 = -1;

    t199 = (x853/(x854|(x855==x856)));

    if (t199 != 128) { NG(); } else { ; }
	
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


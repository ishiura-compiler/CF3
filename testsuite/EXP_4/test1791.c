
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

static int64_t x4 = -29027142304076LL;
uint64_t x12 = UINT64_MAX;
uint64_t x13 = 15175104472562603LLU;
volatile uint8_t x14 = 0U;
volatile int32_t t4 = 1;
uint8_t x26 = 1U;
int8_t x33 = INT8_MAX;
volatile uint16_t x38 = UINT16_MAX;
int16_t x41 = -1;
int32_t x42 = 568817665;
uint16_t x43 = 3871U;
static int32_t x46 = INT32_MAX;
int16_t x48 = -6;
int32_t t10 = INT32_MAX;
static int32_t x52 = INT32_MAX;
int64_t x56 = -1LL;
uint64_t x60 = 5906542308LLU;
int32_t x61 = INT32_MIN;
int8_t x65 = -3;
static uint32_t x72 = UINT32_MAX;
volatile int64_t t16 = 31948349LL;
volatile int64_t t17 = INT64_MAX;
int16_t x81 = -1;
uint64_t x85 = 321862LLU;
uint32_t x91 = 5U;
static int32_t x95 = -1;
static volatile int32_t t22 = 118406312;
volatile uint64_t x103 = 602318100772831LLU;
uint8_t x107 = 57U;
int64_t x113 = -332730267651287LL;
uint64_t x123 = 1621060632423421LLU;
static int32_t x137 = INT32_MIN;
int16_t x140 = -1;
uint64_t x145 = 303812908971LLU;
int64_t x153 = INT64_MIN;
int64_t t34 = 2162815158850234351LL;
int32_t x166 = 1861;
static uint32_t x167 = 842930U;
static int64_t x184 = INT64_MAX;
volatile int16_t x185 = -1;
int16_t x187 = INT16_MAX;
int16_t x192 = -1;
int16_t x194 = INT16_MIN;
uint32_t x199 = 73U;
int32_t x207 = INT32_MAX;
int64_t x215 = 566660273734612848LL;
int32_t x217 = INT32_MIN;
int8_t x218 = -1;
static int64_t x219 = INT64_MAX;
static int64_t x222 = 842627515638758648LL;
volatile int64_t t51 = -46755967668880377LL;
volatile int8_t x226 = INT8_MIN;
uint32_t x240 = UINT32_MAX;
int32_t x244 = -1;
volatile int16_t x248 = 1565;
uint8_t x250 = UINT8_MAX;
int16_t x252 = -122;
uint8_t x256 = 42U;
int32_t x264 = -1;
volatile int64_t x267 = -1LL;
int16_t x270 = -2;
volatile uint64_t x273 = UINT64_MAX;
static uint64_t t64 = UINT64_MAX;
volatile int8_t x284 = -49;
volatile int16_t x285 = INT16_MIN;
static int64_t x288 = INT64_MAX;
int16_t x302 = -10;
static int8_t x308 = -3;
uint16_t x310 = UINT16_MAX;
volatile int32_t t72 = 2413;
int16_t x315 = 13592;
volatile int64_t x316 = -1LL;
int16_t x329 = -1;
int32_t t78 = 13077714;
uint8_t x346 = UINT8_MAX;
int8_t x351 = -1;
volatile uint64_t x357 = UINT64_MAX;
volatile int64_t x361 = -1999107139678636235LL;
int16_t x362 = INT16_MIN;
int64_t x364 = INT64_MAX;
int64_t t87 = 837441788690LL;
uint32_t x386 = UINT32_MAX;
volatile uint32_t t91 = UINT32_MAX;
static volatile uint64_t t93 = 150110059287858LLU;
int32_t x398 = -1;
int8_t x400 = INT8_MIN;
volatile int64_t t94 = 126282338812797697LL;
int16_t x403 = -191;
int16_t x406 = INT16_MIN;
static volatile int8_t x423 = INT8_MIN;
static int32_t x428 = INT32_MIN;
volatile int32_t t101 = 8030;
uint64_t x437 = 1101838LLU;
int64_t x439 = -1LL;
static volatile int8_t x440 = 15;
int64_t x441 = INT64_MIN;
int32_t x443 = INT32_MAX;
uint32_t x460 = UINT32_MAX;
static int8_t x463 = -1;
uint32_t x464 = 249U;
volatile uint8_t x471 = 0U;
uint16_t x475 = 1174U;
volatile int16_t x476 = INT16_MIN;
volatile uint16_t x479 = 4120U;
int64_t x484 = -29965304783LL;
uint32_t x487 = 629385887U;
int16_t x490 = INT16_MIN;
uint8_t x494 = 4U;
uint8_t x516 = 1U;
int32_t x528 = INT32_MIN;
int16_t x539 = -10260;
static uint8_t x542 = UINT8_MAX;
volatile int64_t t132 = 10591LL;
int16_t x560 = INT16_MAX;
int16_t x562 = 8050;
int8_t x580 = -1;
int32_t t137 = -22007;
uint8_t x583 = 119U;
uint16_t x584 = UINT16_MAX;
static volatile int16_t x585 = 6226;
static uint16_t x587 = UINT16_MAX;
volatile int8_t x589 = INT8_MAX;
static int16_t x594 = INT16_MAX;
int16_t x595 = INT16_MIN;
int32_t x599 = INT32_MIN;
uint16_t x600 = 399U;
int64_t x609 = 11491661219LL;
int8_t x611 = INT8_MIN;
volatile int8_t x615 = INT8_MAX;
int16_t x625 = -6279;
int32_t x629 = 230;
volatile int64_t x633 = -1LL;
int16_t x635 = INT16_MIN;
volatile uint16_t x651 = 0U;
int32_t x654 = -331371515;
volatile uint32_t x662 = 20U;
volatile int32_t x675 = INT32_MIN;
int64_t x677 = INT64_MAX;
int64_t x680 = -1LL;
static volatile int64_t t160 = INT64_MAX;
static volatile int8_t x686 = INT8_MIN;
static uint16_t x687 = 11710U;
int32_t t162 = -59454899;
int64_t x690 = 112030192706553228LL;
uint16_t x691 = UINT16_MAX;
static uint16_t x695 = 16041U;
static volatile uint64_t t164 = 1LLU;
volatile int32_t x698 = INT32_MAX;
volatile int16_t x701 = 7;
uint32_t x705 = 50U;
uint32_t x706 = UINT32_MAX;
int32_t x714 = INT32_MIN;
static volatile int32_t t169 = -91356;
volatile int64_t t170 = -3648LL;
int16_t x729 = 2;
static uint32_t x740 = UINT32_MAX;
uint32_t t174 = UINT32_MAX;
int16_t x742 = -11460;
uint64_t x749 = 3163420LLU;
uint64_t t176 = 3970864588133LLU;
int32_t x753 = -1;
uint8_t x756 = 4U;
int8_t x757 = INT8_MIN;
int16_t x759 = 0;
int8_t x788 = INT8_MAX;
int16_t x789 = -96;
volatile int8_t x793 = INT8_MIN;
static uint32_t t188 = 56926U;
volatile uint64_t x811 = 13LLU;
int16_t x816 = INT16_MAX;
uint32_t x817 = 99845678U;
int32_t x818 = INT32_MAX;
static int8_t x829 = -1;
int32_t x830 = INT32_MAX;
static int32_t x831 = -1;
int32_t t195 = -3784753;
volatile int16_t x836 = INT16_MIN;
int32_t x844 = 72310567;
volatile int64_t x845 = -938251LL;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	int64_t x2 = 98956861LL;
	int16_t x3 = INT16_MAX;
	int64_t t0 = 33017438LL;

    t0 = (x1|(x2-(x3<=x4)));

    if (t0 != -2499LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = -1;
	int32_t x10 = -1;
	int32_t x11 = 61906970;
	volatile int32_t t1 = 751006665;

    t1 = (x9|(x10-(x11<=x12)));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x15 = 29076U;
	int8_t x16 = INT8_MAX;
	uint64_t t2 = 312119755292432LLU;

    t2 = (x13|(x14-(x15<=x16)));

    if (t2 != 15175104472562603LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x17 = INT8_MIN;
	uint32_t x18 = 75202590U;
	uint16_t x19 = 32377U;
	volatile int16_t x20 = -1;
	uint32_t t3 = 942574U;

    t3 = (x17|(x18-(x19<=x20)));

    if (t3 != 4294967198U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x21 = 9037U;
	int16_t x22 = INT16_MAX;
	int32_t x23 = 788379;
	uint8_t x24 = 109U;

    t4 = (x21|(x22-(x23<=x24)));

    if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x25 = 2U;
	uint32_t x27 = 79U;
	static int8_t x28 = 19;
	volatile int32_t t5 = -753;

    t5 = (x25|(x26-(x27<=x28)));

    if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x29 = 330U;
	int8_t x30 = -1;
	uint32_t x31 = 2189U;
	int16_t x32 = -1;
	volatile int32_t t6 = 6;

    t6 = (x29|(x30-(x31<=x32)));

    if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x34 = -1;
	int8_t x35 = -1;
	uint16_t x36 = UINT16_MAX;
	int32_t t7 = -2354;

    t7 = (x33|(x34-(x35<=x36)));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = INT64_MIN;
	static int64_t x39 = INT64_MAX;
	int32_t x40 = 60;
	volatile int64_t t8 = -18943811263LL;

    t8 = (x37|(x38-(x39<=x40)));

    if (t8 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x44 = -1;
	volatile int32_t t9 = -76057;

    t9 = (x41|(x42-(x43<=x44)));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x45 = INT8_MAX;
	uint64_t x47 = UINT64_MAX;

    t10 = (x45|(x46-(x47<=x48)));

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x49 = 5685483607LL;
	int32_t x50 = 216;
	int64_t x51 = INT64_MIN;
	volatile int64_t t11 = -2LL;

    t11 = (x49|(x50-(x51<=x52)));

    if (t11 != 5685483735LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MIN;
	int32_t x54 = -11208;
	int16_t x55 = INT16_MIN;
	static int32_t t12 = 122846019;

    t12 = (x53|(x54-(x55<=x56)));

    if (t12 != -73) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x57 = INT64_MAX;
	int16_t x58 = INT16_MIN;
	static int16_t x59 = INT16_MIN;
	static int64_t t13 = -4443001LL;

    t13 = (x57|(x58-(x59<=x60)));

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x62 = INT64_MIN;
	volatile int8_t x63 = 1;
	int16_t x64 = INT16_MIN;
	int64_t t14 = -53164389806174LL;

    t14 = (x61|(x62-(x63<=x64)));

    if (t14 != -2147483648LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x66 = INT8_MIN;
	static int32_t x67 = 110326;
	volatile int32_t x68 = 0;
	int32_t t15 = -151;

    t15 = (x65|(x66-(x67<=x68)));

    if (t15 != -3) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = INT64_MIN;
	int64_t x70 = INT64_MAX;
	int8_t x71 = 1;

    t16 = (x69|(x70-(x71<=x72)));

    if (t16 != -2LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x77 = 1;
	int64_t x78 = INT64_MAX;
	static int8_t x79 = -1;
	int8_t x80 = -1;

    t17 = (x77|(x78-(x79<=x80)));

    if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x82 = 127U;
	static volatile uint64_t x83 = 1546685561863905331LLU;
	static uint8_t x84 = 0U;
	static int32_t t18 = 0;

    t18 = (x81|(x82-(x83<=x84)));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x86 = 709727LLU;
	int16_t x87 = -1;
	int32_t x88 = INT32_MAX;
	uint64_t t19 = 3LLU;

    t19 = (x85|(x86-(x87<=x88)));

    if (t19 != 982366LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x89 = UINT8_MAX;
	uint32_t x90 = 371202U;
	static int16_t x92 = INT16_MIN;
	volatile uint32_t t20 = 914554005U;

    t20 = (x89|(x90-(x91<=x92)));

    if (t20 != 371455U) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x93 = INT8_MIN;
	int8_t x94 = INT8_MIN;
	uint32_t x96 = 2205960U;
	int32_t t21 = -51346515;

    t21 = (x93|(x94-(x95<=x96)));

    if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x97 = -6253559;
	static int32_t x98 = INT32_MAX;
	int8_t x99 = INT8_MAX;
	int32_t x100 = -187483009;

    t22 = (x97|(x98-(x99<=x100)));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = 9;
	volatile int64_t x102 = -11992232LL;
	static volatile uint32_t x104 = UINT32_MAX;
	volatile int64_t t23 = 29236006LL;

    t23 = (x101|(x102-(x103<=x104)));

    if (t23 != -11992231LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x105 = -1;
	static int8_t x106 = INT8_MIN;
	int16_t x108 = INT16_MIN;
	volatile int32_t t24 = 1;

    t24 = (x105|(x106-(x107<=x108)));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x109 = 0;
	int32_t x110 = INT32_MAX;
	static int64_t x111 = 975401LL;
	int8_t x112 = -1;
	static int32_t t25 = INT32_MAX;

    t25 = (x109|(x110-(x111<=x112)));

    if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x114 = 0U;
	int64_t x115 = INT64_MIN;
	volatile uint16_t x116 = UINT16_MAX;
	int64_t t26 = 2228LL;

    t26 = (x113|(x114-(x115<=x116)));

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = -1;
	volatile int32_t x118 = INT32_MIN;
	int16_t x119 = INT16_MIN;
	static int32_t x120 = INT32_MIN;
	volatile int32_t t27 = -5;

    t27 = (x117|(x118-(x119<=x120)));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x121 = UINT8_MAX;
	uint8_t x122 = 4U;
	int8_t x124 = INT8_MIN;
	int32_t t28 = 86376092;

    t28 = (x121|(x122-(x123<=x124)));

    if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x125 = 862U;
	static uint32_t x126 = 117249U;
	static int8_t x127 = 6;
	static int32_t x128 = INT32_MIN;
	volatile uint32_t t29 = 51810U;

    t29 = (x125|(x126-(x127<=x128)));

    if (t29 != 117599U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x133 = 1U;
	static uint64_t x134 = 6063081638856048LLU;
	static uint8_t x135 = 1U;
	int32_t x136 = 1;
	volatile uint64_t t30 = 3091571690147788LLU;

    t30 = (x133|(x134-(x135<=x136)));

    if (t30 != 6063081638856047LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int8_t x138 = INT8_MIN;
	volatile int32_t x139 = -1;
	volatile int32_t t31 = -4;

    t31 = (x137|(x138-(x139<=x140)));

    if (t31 != -129) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x141 = 51LLU;
	uint16_t x142 = 6053U;
	uint8_t x143 = UINT8_MAX;
	uint8_t x144 = 25U;
	uint64_t t32 = 588366469470626LLU;

    t32 = (x141|(x142-(x143<=x144)));

    if (t32 != 6071LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x146 = 47799;
	static int16_t x147 = -1;
	uint32_t x148 = UINT32_MAX;
	uint64_t t33 = 684LLU;

    t33 = (x145|(x146-(x147<=x148)));

    if (t33 != 303812951999LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x154 = INT8_MAX;
	volatile uint16_t x155 = 6U;
	volatile int64_t x156 = -1LL;

    t34 = (x153|(x154-(x155<=x156)));

    if (t34 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x157 = INT64_MIN;
	uint16_t x158 = 27849U;
	int16_t x159 = -1;
	static uint8_t x160 = UINT8_MAX;
	volatile int64_t t35 = -102995LL;

    t35 = (x157|(x158-(x159<=x160)));

    if (t35 != -9223372036854747960LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x161 = 316371557LL;
	static volatile uint16_t x162 = UINT16_MAX;
	uint64_t x163 = 0LLU;
	uint16_t x164 = UINT16_MAX;
	int64_t t36 = -453525LL;

    t36 = (x161|(x162-(x163<=x164)));

    if (t36 != 316407807LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x165 = -1;
	int16_t x168 = -1;
	static int32_t t37 = 271;

    t37 = (x165|(x166-(x167<=x168)));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x169 = INT64_MAX;
	static int16_t x170 = 2731;
	volatile int16_t x171 = 374;
	static volatile uint32_t x172 = UINT32_MAX;
	volatile int64_t t38 = INT64_MAX;

    t38 = (x169|(x170-(x171<=x172)));

    if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x173 = -1;
	static int32_t x174 = INT32_MIN;
	uint16_t x175 = UINT16_MAX;
	static volatile uint16_t x176 = 2U;
	static int32_t t39 = -450099241;

    t39 = (x173|(x174-(x175<=x176)));

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x177 = INT16_MIN;
	uint16_t x178 = UINT16_MAX;
	volatile uint64_t x179 = 177696936479145604LLU;
	uint8_t x180 = UINT8_MAX;
	volatile int32_t t40 = -7742;

    t40 = (x177|(x178-(x179<=x180)));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x181 = -1;
	static volatile int64_t x182 = 1LL;
	uint32_t x183 = 433U;
	int64_t t41 = -7177963LL;

    t41 = (x181|(x182-(x183<=x184)));

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x186 = -1LL;
	int32_t x188 = -1;
	volatile int64_t t42 = -66257154393952800LL;

    t42 = (x185|(x186-(x187<=x188)));

    if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x189 = 6LLU;
	uint64_t x190 = UINT64_MAX;
	int8_t x191 = INT8_MAX;
	volatile uint64_t t43 = UINT64_MAX;

    t43 = (x189|(x190-(x191<=x192)));

    if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x193 = UINT64_MAX;
	int16_t x195 = INT16_MIN;
	uint64_t x196 = 504LLU;
	volatile uint64_t t44 = UINT64_MAX;

    t44 = (x193|(x194-(x195<=x196)));

    if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x197 = -20;
	int16_t x198 = -23;
	uint64_t x200 = 99LLU;
	static int32_t t45 = -304;

    t45 = (x197|(x198-(x199<=x200)));

    if (t45 != -20) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x201 = INT8_MIN;
	int8_t x202 = 11;
	int16_t x203 = -480;
	int32_t x204 = INT32_MAX;
	int32_t t46 = 14100;

    t46 = (x201|(x202-(x203<=x204)));

    if (t46 != -118) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x205 = INT16_MIN;
	static int16_t x206 = -1066;
	int8_t x208 = 1;
	static volatile int32_t t47 = 331270434;

    t47 = (x205|(x206-(x207<=x208)));

    if (t47 != -1066) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x209 = 791U;
	int16_t x210 = INT16_MAX;
	int32_t x211 = 19284;
	static uint64_t x212 = UINT64_MAX;
	int32_t t48 = -3;

    t48 = (x209|(x210-(x211<=x212)));

    if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x213 = INT16_MIN;
	int32_t x214 = INT32_MIN;
	uint8_t x216 = 1U;
	volatile int32_t t49 = 973058552;

    t49 = (x213|(x214-(x215<=x216)));

    if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x220 = 14076U;
	volatile int32_t t50 = -37897692;

    t50 = (x217|(x218-(x219<=x220)));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x221 = 112U;
	volatile uint32_t x223 = 1170U;
	int16_t x224 = INT16_MAX;

    t51 = (x221|(x222-(x223<=x224)));

    if (t51 != 842627515638758647LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x225 = INT16_MIN;
	int64_t x227 = INT64_MIN;
	int64_t x228 = -2203955263262037252LL;
	int32_t t52 = -454504;

    t52 = (x225|(x226-(x227<=x228)));

    if (t52 != -129) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x229 = 10;
	static volatile uint16_t x230 = UINT16_MAX;
	int32_t x231 = 81;
	uint32_t x232 = 2460469U;
	static volatile int32_t t53 = 23;

    t53 = (x229|(x230-(x231<=x232)));

    if (t53 != 65534) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x233 = UINT16_MAX;
	int32_t x234 = INT32_MIN;
	uint64_t x235 = 1251213152830LLU;
	uint64_t x236 = 40910LLU;
	int32_t t54 = 76;

    t54 = (x233|(x234-(x235<=x236)));

    if (t54 != -2147418113) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x237 = INT16_MIN;
	uint32_t x238 = 614918U;
	static int64_t x239 = INT64_MIN;
	uint32_t t55 = 20723U;

    t55 = (x237|(x238-(x239<=x240)));

    if (t55 != 4294959621U) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x241 = -1LL;
	int8_t x242 = INT8_MIN;
	static uint32_t x243 = UINT32_MAX;
	static volatile int64_t t56 = -620LL;

    t56 = (x241|(x242-(x243<=x244)));

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x245 = INT8_MIN;
	uint32_t x246 = UINT32_MAX;
	int16_t x247 = 3039;
	uint32_t t57 = UINT32_MAX;

    t57 = (x245|(x246-(x247<=x248)));

    if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x249 = -508LL;
	uint8_t x251 = UINT8_MAX;
	int64_t t58 = 4614388321957LL;

    t58 = (x249|(x250-(x251<=x252)));

    if (t58 != -257LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x253 = 55U;
	static uint16_t x254 = 1U;
	int8_t x255 = -11;
	static volatile uint32_t t59 = 22U;

    t59 = (x253|(x254-(x255<=x256)));

    if (t59 != 55U) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x257 = INT64_MIN;
	static int64_t x258 = 531895LL;
	int32_t x259 = -825863;
	uint16_t x260 = UINT16_MAX;
	int64_t t60 = 0LL;

    t60 = (x257|(x258-(x259<=x260)));

    if (t60 != -9223372036854243914LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x261 = -1;
	uint32_t x262 = 2U;
	int32_t x263 = -432811;
	volatile uint32_t t61 = UINT32_MAX;

    t61 = (x261|(x262-(x263<=x264)));

    if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int64_t x265 = INT64_MIN;
	int8_t x266 = INT8_MIN;
	int32_t x268 = INT32_MIN;
	int64_t t62 = -14826LL;

    t62 = (x265|(x266-(x267<=x268)));

    if (t62 != -128LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x269 = 179U;
	int16_t x271 = INT16_MIN;
	uint64_t x272 = 6980632LLU;
	int32_t t63 = -48337;

    t63 = (x269|(x270-(x271<=x272)));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x274 = 0U;
	static volatile int16_t x275 = -1;
	int8_t x276 = INT8_MAX;

    t64 = (x273|(x274-(x275<=x276)));

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x277 = INT32_MAX;
	int8_t x278 = 32;
	int16_t x279 = INT16_MIN;
	volatile int32_t x280 = -1;
	int32_t t65 = INT32_MAX;

    t65 = (x277|(x278-(x279<=x280)));

    if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x281 = UINT32_MAX;
	volatile int16_t x282 = INT16_MIN;
	int64_t x283 = -1LL;
	uint32_t t66 = UINT32_MAX;

    t66 = (x281|(x282-(x283<=x284)));

    if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x286 = -5461891;
	static uint8_t x287 = 61U;
	volatile int32_t t67 = -28;

    t67 = (x285|(x286-(x287<=x288)));

    if (t67 != -22404) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x289 = INT8_MAX;
	volatile int16_t x290 = INT16_MIN;
	int32_t x291 = INT32_MIN;
	volatile uint8_t x292 = UINT8_MAX;
	volatile int32_t t68 = 2403702;

    t68 = (x289|(x290-(x291<=x292)));

    if (t68 != -32769) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x293 = -1;
	static volatile int32_t x294 = INT32_MAX;
	uint32_t x295 = 47561712U;
	int32_t x296 = -1;
	int32_t t69 = -64;

    t69 = (x293|(x294-(x295<=x296)));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x301 = 4159LLU;
	int8_t x303 = -3;
	static volatile uint8_t x304 = 14U;
	uint64_t t70 = UINT64_MAX;

    t70 = (x301|(x302-(x303<=x304)));

    if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x305 = UINT16_MAX;
	uint64_t x306 = 7139096LLU;
	int16_t x307 = INT16_MIN;
	volatile uint64_t t71 = 28949029551LLU;

    t71 = (x305|(x306-(x307<=x308)));

    if (t71 != 7143423LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x309 = -1;
	int16_t x311 = INT16_MIN;
	uint16_t x312 = UINT16_MAX;

    t72 = (x309|(x310-(x311<=x312)));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x313 = UINT8_MAX;
	int16_t x314 = -1;
	static volatile int32_t t73 = -491128317;

    t73 = (x313|(x314-(x315<=x316)));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x317 = 573;
	static int16_t x318 = INT16_MIN;
	uint32_t x319 = 901822U;
	static int8_t x320 = INT8_MIN;
	int32_t t74 = 691079104;

    t74 = (x317|(x318-(x319<=x320)));

    if (t74 != -32769) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x321 = INT16_MIN;
	uint64_t x322 = 3639387837199023LLU;
	volatile int8_t x323 = INT8_MAX;
	volatile int32_t x324 = INT32_MIN;
	volatile uint64_t t75 = 1315940745304568LLU;

    t75 = (x321|(x322-(x323<=x324)));

    if (t75 != 18446744073709548207LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x325 = -1;
	int64_t x326 = 348886979831592707LL;
	static int64_t x327 = 8458LL;
	uint16_t x328 = 21U;
	volatile int64_t t76 = 40758164LL;

    t76 = (x325|(x326-(x327<=x328)));

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x330 = -1LL;
	int32_t x331 = 70;
	static int64_t x332 = INT64_MIN;
	volatile int64_t t77 = -4554643443677LL;

    t77 = (x329|(x330-(x331<=x332)));

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x333 = 1;
	int8_t x334 = INT8_MAX;
	static uint8_t x335 = 3U;
	int16_t x336 = INT16_MAX;

    t78 = (x333|(x334-(x335<=x336)));

    if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x337 = 457U;
	volatile uint8_t x338 = 72U;
	int8_t x339 = 0;
	int8_t x340 = INT8_MAX;
	volatile int32_t t79 = 1;

    t79 = (x337|(x338-(x339<=x340)));

    if (t79 != 463) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x341 = -1;
	int8_t x342 = -1;
	int64_t x343 = 0LL;
	int32_t x344 = INT32_MAX;
	volatile int32_t t80 = -343937573;

    t80 = (x341|(x342-(x343<=x344)));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x345 = UINT32_MAX;
	int16_t x347 = 4;
	static int64_t x348 = INT64_MAX;
	volatile uint32_t t81 = UINT32_MAX;

    t81 = (x345|(x346-(x347<=x348)));

    if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x349 = -1;
	int32_t x350 = INT32_MIN;
	uint64_t x352 = 35137947338LLU;
	int32_t t82 = 9861097;

    t82 = (x349|(x350-(x351<=x352)));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x353 = 5751095LLU;
	static uint16_t x354 = UINT16_MAX;
	static int16_t x355 = INT16_MIN;
	uint32_t x356 = 474454U;
	volatile uint64_t t83 = 4011782LLU;

    t83 = (x353|(x354-(x355<=x356)));

    if (t83 != 5767167LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x358 = INT32_MIN;
	uint16_t x359 = UINT16_MAX;
	int8_t x360 = 0;
	uint64_t t84 = UINT64_MAX;

    t84 = (x357|(x358-(x359<=x360)));

    if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x363 = UINT64_MAX;
	static volatile int64_t t85 = -63407773LL;

    t85 = (x361|(x362-(x363<=x364)));

    if (t85 != -2251LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x365 = 0U;
	uint32_t x366 = 636U;
	int16_t x367 = -1;
	uint16_t x368 = 961U;
	uint32_t t86 = 214737885U;

    t86 = (x365|(x366-(x367<=x368)));

    if (t86 != 635U) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x369 = -310LL;
	uint8_t x370 = UINT8_MAX;
	int32_t x371 = INT32_MIN;
	static uint8_t x372 = 6U;

    t87 = (x369|(x370-(x371<=x372)));

    if (t87 != -258LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x373 = 1036259U;
	uint64_t x374 = 3159LLU;
	volatile int16_t x375 = INT16_MIN;
	int16_t x376 = -1;
	static uint64_t t88 = 590323891119802LLU;

    t88 = (x373|(x374-(x375<=x376)));

    if (t88 != 1036279LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x377 = UINT16_MAX;
	volatile int32_t x378 = -1;
	uint16_t x379 = UINT16_MAX;
	static volatile uint32_t x380 = 10739U;
	static volatile int32_t t89 = -8412981;

    t89 = (x377|(x378-(x379<=x380)));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x381 = INT32_MIN;
	volatile uint32_t x382 = 224U;
	int8_t x383 = INT8_MIN;
	int32_t x384 = INT32_MIN;
	volatile uint32_t t90 = 59195U;

    t90 = (x381|(x382-(x383<=x384)));

    if (t90 != 2147483872U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x385 = -1;
	static uint32_t x387 = UINT32_MAX;
	int16_t x388 = 10035;

    t91 = (x385|(x386-(x387<=x388)));

    if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x389 = INT32_MIN;
	int8_t x390 = INT8_MIN;
	static uint32_t x391 = 1468054U;
	static uint16_t x392 = UINT16_MAX;
	int32_t t92 = 1277;

    t92 = (x389|(x390-(x391<=x392)));

    if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x393 = 3;
	uint64_t x394 = 11133721395179LLU;
	uint32_t x395 = 13237U;
	int64_t x396 = 6793802421906949LL;

    t93 = (x393|(x394-(x395<=x396)));

    if (t93 != 11133721395179LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x397 = INT64_MIN;
	int8_t x399 = -1;

    t94 = (x397|(x398-(x399<=x400)));

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x401 = INT64_MIN;
	uint64_t x402 = 3012156068240676227LLU;
	volatile uint32_t x404 = 155U;
	uint64_t t95 = 624176LLU;

    t95 = (x401|(x402-(x403<=x404)));

    if (t95 != 12235528105095452035LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x405 = -1;
	uint32_t x407 = 84U;
	int16_t x408 = INT16_MIN;
	int32_t t96 = 44784810;

    t96 = (x405|(x406-(x407<=x408)));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x409 = UINT8_MAX;
	int8_t x410 = INT8_MIN;
	int32_t x411 = -17;
	volatile int16_t x412 = INT16_MIN;
	static volatile int32_t t97 = -82;

    t97 = (x409|(x410-(x411<=x412)));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x413 = UINT32_MAX;
	int8_t x414 = -1;
	static uint16_t x415 = 1U;
	int32_t x416 = 23585531;
	volatile uint32_t t98 = UINT32_MAX;

    t98 = (x413|(x414-(x415<=x416)));

    if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x417 = -1LL;
	volatile int32_t x418 = INT32_MIN;
	static int16_t x419 = INT16_MIN;
	int64_t x420 = INT64_MIN;
	volatile int64_t t99 = -620913036814LL;

    t99 = (x417|(x418-(x419<=x420)));

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x421 = 196;
	uint16_t x422 = 14773U;
	int8_t x424 = INT8_MAX;
	volatile int32_t t100 = -50155;

    t100 = (x421|(x422-(x423<=x424)));

    if (t100 != 14836) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x425 = -137882671;
	static int32_t x426 = INT32_MAX;
	int8_t x427 = -22;

    t101 = (x425|(x426-(x427<=x428)));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x429 = INT8_MIN;
	static uint64_t x430 = 757684350LLU;
	int8_t x431 = -1;
	static volatile int8_t x432 = 0;
	uint64_t t102 = 12936195246067LLU;

    t102 = (x429|(x430-(x431<=x432)));

    if (t102 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x433 = 619410LLU;
	volatile int8_t x434 = INT8_MIN;
	uint16_t x435 = 16405U;
	volatile int16_t x436 = -686;
	uint64_t t103 = 7710LLU;

    t103 = (x433|(x434-(x435<=x436)));

    if (t103 != 18446744073709551506LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x438 = INT16_MAX;
	uint64_t t104 = 413244829763943770LLU;

    t104 = (x437|(x438-(x439<=x440)));

    if (t104 != 1114110LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x442 = INT16_MAX;
	uint32_t x444 = UINT32_MAX;
	int64_t t105 = 125014301896LL;

    t105 = (x441|(x442-(x443<=x444)));

    if (t105 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x445 = 10947637461513LL;
	int64_t x446 = -1LL;
	int16_t x447 = INT16_MIN;
	int16_t x448 = INT16_MAX;
	static int64_t t106 = -12251666311884072LL;

    t106 = (x445|(x446-(x447<=x448)));

    if (t106 != -1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x449 = INT32_MIN;
	static uint32_t x450 = UINT32_MAX;
	int16_t x451 = INT16_MAX;
	int8_t x452 = -23;
	volatile uint32_t t107 = UINT32_MAX;

    t107 = (x449|(x450-(x451<=x452)));

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x453 = -1;
	int64_t x454 = -115LL;
	int16_t x455 = INT16_MIN;
	volatile uint16_t x456 = 19U;
	static volatile int64_t t108 = -553LL;

    t108 = (x453|(x454-(x455<=x456)));

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x457 = UINT64_MAX;
	int16_t x458 = INT16_MIN;
	volatile int64_t x459 = INT64_MAX;
	volatile uint64_t t109 = UINT64_MAX;

    t109 = (x457|(x458-(x459<=x460)));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x461 = INT64_MIN;
	volatile int32_t x462 = INT32_MIN;
	static int64_t t110 = 6222457LL;

    t110 = (x461|(x462-(x463<=x464)));

    if (t110 != -2147483648LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x465 = -3186516LL;
	uint32_t x466 = UINT32_MAX;
	int64_t x467 = -332LL;
	int64_t x468 = -11LL;
	volatile int64_t t111 = -257624173334520LL;

    t111 = (x465|(x466-(x467<=x468)));

    if (t111 != -2LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x469 = INT32_MIN;
	static int64_t x470 = INT64_MIN;
	static int8_t x472 = INT8_MIN;
	int64_t t112 = -14105648136207LL;

    t112 = (x469|(x470-(x471<=x472)));

    if (t112 != -2147483648LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x473 = 9U;
	int32_t x474 = INT32_MIN;
	static int32_t t113 = 17;

    t113 = (x473|(x474-(x475<=x476)));

    if (t113 != -2147483639) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x477 = INT32_MAX;
	volatile int8_t x478 = -1;
	int64_t x480 = -1LL;
	volatile int32_t t114 = 5;

    t114 = (x477|(x478-(x479<=x480)));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x481 = INT8_MIN;
	static int8_t x482 = 0;
	int32_t x483 = INT32_MIN;
	int32_t t115 = -3565437;

    t115 = (x481|(x482-(x483<=x484)));

    if (t115 != -128) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x485 = -98050;
	volatile uint16_t x486 = UINT16_MAX;
	uint8_t x488 = 20U;
	static int32_t t116 = 1;

    t116 = (x485|(x486-(x487<=x488)));

    if (t116 != -65537) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x489 = UINT16_MAX;
	static uint64_t x491 = 0LLU;
	static int16_t x492 = -1;
	int32_t t117 = 2;

    t117 = (x489|(x490-(x491<=x492)));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x493 = INT32_MAX;
	uint16_t x495 = 6U;
	int16_t x496 = 92;
	volatile int32_t t118 = INT32_MAX;

    t118 = (x493|(x494-(x495<=x496)));

    if (t118 != INT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x497 = INT8_MIN;
	volatile int64_t x498 = 1172258LL;
	int32_t x499 = -1;
	uint64_t x500 = UINT64_MAX;
	int64_t t119 = 28628150LL;

    t119 = (x497|(x498-(x499<=x500)));

    if (t119 != -95LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x501 = 104LL;
	int16_t x502 = 31;
	int64_t x503 = -440LL;
	int8_t x504 = -1;
	volatile int64_t t120 = -203380397504LL;

    t120 = (x501|(x502-(x503<=x504)));

    if (t120 != 126LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x505 = 244U;
	static int64_t x506 = -137771484660483LL;
	int32_t x507 = -16158877;
	static int8_t x508 = INT8_MIN;
	int64_t t121 = -368877746427LL;

    t121 = (x505|(x506-(x507<=x508)));

    if (t121 != -137771484660484LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int64_t x509 = 28446163338586369LL;
	volatile int32_t x510 = -5;
	volatile uint32_t x511 = 345U;
	int32_t x512 = INT32_MIN;
	int64_t t122 = -75060498LL;

    t122 = (x509|(x510-(x511<=x512)));

    if (t122 != -5LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x513 = UINT32_MAX;
	uint32_t x514 = 904041023U;
	uint64_t x515 = 189155158350LLU;
	uint32_t t123 = UINT32_MAX;

    t123 = (x513|(x514-(x515<=x516)));

    if (t123 != UINT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x521 = INT8_MAX;
	uint64_t x522 = 611581076409260149LLU;
	volatile int16_t x523 = 2066;
	uint64_t x524 = UINT64_MAX;
	volatile uint64_t t124 = 1044551LLU;

    t124 = (x521|(x522-(x523<=x524)));

    if (t124 != 611581076409260159LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int8_t x525 = -1;
	int16_t x526 = INT16_MAX;
	static int8_t x527 = 14;
	volatile int32_t t125 = 501851;

    t125 = (x525|(x526-(x527<=x528)));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x529 = 32605U;
	volatile uint8_t x530 = 4U;
	static int8_t x531 = INT8_MAX;
	volatile uint8_t x532 = UINT8_MAX;
	volatile int32_t t126 = 221;

    t126 = (x529|(x530-(x531<=x532)));

    if (t126 != 32607) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x533 = -23;
	volatile int64_t x534 = -529991755145LL;
	int16_t x535 = INT16_MAX;
	volatile uint32_t x536 = UINT32_MAX;
	static int64_t t127 = -7478174682062977LL;

    t127 = (x533|(x534-(x535<=x536)));

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x537 = UINT64_MAX;
	uint16_t x538 = 15U;
	uint64_t x540 = 37325837586787LLU;
	volatile uint64_t t128 = UINT64_MAX;

    t128 = (x537|(x538-(x539<=x540)));

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x541 = UINT64_MAX;
	static volatile uint64_t x543 = 107012322729948LLU;
	static uint32_t x544 = UINT32_MAX;
	uint64_t t129 = UINT64_MAX;

    t129 = (x541|(x542-(x543<=x544)));

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x545 = -1;
	int16_t x546 = 17;
	static uint64_t x547 = 8590LLU;
	static int8_t x548 = -1;
	int32_t t130 = 1038112219;

    t130 = (x545|(x546-(x547<=x548)));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x549 = 25LLU;
	uint32_t x550 = 4719U;
	volatile uint16_t x551 = UINT16_MAX;
	uint16_t x552 = 10639U;
	volatile uint64_t t131 = 300448LLU;

    t131 = (x549|(x550-(x551<=x552)));

    if (t131 != 4735LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x553 = INT16_MIN;
	int64_t x554 = INT64_MAX;
	int8_t x555 = -1;
	volatile uint8_t x556 = 13U;

    t132 = (x553|(x554-(x555<=x556)));

    if (t132 != -2LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x557 = -210;
	volatile int16_t x558 = INT16_MIN;
	uint16_t x559 = UINT16_MAX;
	volatile int32_t t133 = 0;

    t133 = (x557|(x558-(x559<=x560)));

    if (t133 != -210) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x561 = INT64_MIN;
	int8_t x563 = INT8_MIN;
	int8_t x564 = INT8_MIN;
	static volatile int64_t t134 = -816070772220LL;

    t134 = (x561|(x562-(x563<=x564)));

    if (t134 != -9223372036854767759LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x565 = UINT64_MAX;
	int16_t x566 = 0;
	uint64_t x567 = 9LLU;
	int16_t x568 = -1;
	volatile uint64_t t135 = UINT64_MAX;

    t135 = (x565|(x566-(x567<=x568)));

    if (t135 != UINT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x569 = 3424503LLU;
	static int64_t x570 = -84LL;
	int32_t x571 = INT32_MAX;
	uint16_t x572 = 2173U;
	volatile uint64_t t136 = UINT64_MAX;

    t136 = (x569|(x570-(x571<=x572)));

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x577 = -1;
	uint16_t x578 = 3U;
	int64_t x579 = INT64_MIN;

    t137 = (x577|(x578-(x579<=x580)));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x581 = INT32_MAX;
	int8_t x582 = -1;
	int32_t t138 = 1;

    t138 = (x581|(x582-(x583<=x584)));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x586 = INT16_MIN;
	static uint32_t x588 = 1365645U;
	volatile int32_t t139 = 130;

    t139 = (x585|(x586-(x587<=x588)));

    if (t139 != -32769) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x590 = INT16_MAX;
	uint64_t x591 = 33770737642LLU;
	uint32_t x592 = 53U;
	int32_t t140 = 442049106;

    t140 = (x589|(x590-(x591<=x592)));

    if (t140 != 32767) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x593 = 73LL;
	int8_t x596 = -1;
	static int64_t t141 = -5LL;

    t141 = (x593|(x594-(x595<=x596)));

    if (t141 != 32767LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x597 = 29443741U;
	static uint8_t x598 = UINT8_MAX;
	uint32_t t142 = 7U;

    t142 = (x597|(x598-(x599<=x600)));

    if (t142 != 29443839U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x601 = 9U;
	static uint8_t x602 = 1U;
	int64_t x603 = INT64_MIN;
	volatile uint64_t x604 = 254LLU;
	volatile int32_t t143 = -15;

    t143 = (x601|(x602-(x603<=x604)));

    if (t143 != 9) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x605 = -1;
	uint8_t x606 = 2U;
	int32_t x607 = 3319;
	volatile int64_t x608 = INT64_MIN;
	int32_t t144 = -17276;

    t144 = (x605|(x606-(x607<=x608)));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x610 = 113U;
	int32_t x612 = -404;
	static volatile int64_t t145 = 8814442LL;

    t145 = (x609|(x610-(x611<=x612)));

    if (t145 != 11491661299LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x613 = INT8_MAX;
	int8_t x614 = INT8_MAX;
	int8_t x616 = INT8_MIN;
	volatile int32_t t146 = -3;

    t146 = (x613|(x614-(x615<=x616)));

    if (t146 != 127) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x617 = 6U;
	int32_t x618 = -1123108;
	int64_t x619 = -1643LL;
	uint8_t x620 = 30U;
	volatile int32_t t147 = 502;

    t147 = (x617|(x618-(x619<=x620)));

    if (t147 != -1123105) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x621 = INT8_MAX;
	int32_t x622 = -1016783;
	int8_t x623 = INT8_MIN;
	int8_t x624 = INT8_MIN;
	volatile int32_t t148 = -70160;

    t148 = (x621|(x622-(x623<=x624)));

    if (t148 != -1016705) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x626 = 35U;
	int64_t x627 = -1682262807LL;
	int8_t x628 = INT8_MIN;
	volatile int32_t t149 = 389515314;

    t149 = (x625|(x626-(x627<=x628)));

    if (t149 != -6277) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x630 = -1;
	static int8_t x631 = INT8_MIN;
	static uint16_t x632 = UINT16_MAX;
	volatile int32_t t150 = 259750;

    t150 = (x629|(x630-(x631<=x632)));

    if (t150 != -2) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x634 = 2;
	uint64_t x636 = 809552659938467027LLU;
	volatile int64_t t151 = -206863887691001LL;

    t151 = (x633|(x634-(x635<=x636)));

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x637 = INT32_MAX;
	uint32_t x638 = 99U;
	int64_t x639 = 25244080142375LL;
	int8_t x640 = INT8_MIN;
	uint32_t t152 = 680U;

    t152 = (x637|(x638-(x639<=x640)));

    if (t152 != 2147483647U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x649 = UINT16_MAX;
	uint64_t x650 = 24LLU;
	int16_t x652 = INT16_MAX;
	volatile uint64_t t153 = 8493546012866LLU;

    t153 = (x649|(x650-(x651<=x652)));

    if (t153 != 65535LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x653 = 32493668LLU;
	int64_t x655 = INT64_MIN;
	int32_t x656 = -1;
	uint64_t t154 = 6940115873LLU;

    t154 = (x653|(x654-(x655<=x656)));

    if (t154 != 18446744073407560804LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x657 = INT64_MAX;
	int32_t x658 = -742;
	uint32_t x659 = 428196801U;
	int16_t x660 = INT16_MIN;
	volatile int64_t t155 = -1695LL;

    t155 = (x657|(x658-(x659<=x660)));

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x661 = -1;
	int16_t x663 = 7266;
	uint64_t x664 = 2327535LLU;
	volatile uint32_t t156 = UINT32_MAX;

    t156 = (x661|(x662-(x663<=x664)));

    if (t156 != UINT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x665 = 5U;
	uint64_t x666 = 8309893185046332LLU;
	volatile uint64_t x667 = 0LLU;
	int64_t x668 = 132672536126927577LL;
	static uint64_t t157 = 17626686199LLU;

    t157 = (x665|(x666-(x667<=x668)));

    if (t157 != 8309893185046335LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x669 = INT32_MIN;
	uint16_t x670 = 1U;
	uint16_t x671 = UINT16_MAX;
	int64_t x672 = -1LL;
	volatile int32_t t158 = 128613196;

    t158 = (x669|(x670-(x671<=x672)));

    if (t158 != -2147483647) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x673 = 92LLU;
	int32_t x674 = -1;
	volatile int64_t x676 = 5252837891335083LL;
	volatile uint64_t t159 = 112901805071354817LLU;

    t159 = (x673|(x674-(x675<=x676)));

    if (t159 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x678 = 0U;
	uint16_t x679 = UINT16_MAX;

    t160 = (x677|(x678-(x679<=x680)));

    if (t160 != INT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x681 = 67934797719LLU;
	static int32_t x682 = -471216733;
	uint16_t x683 = 14U;
	static int8_t x684 = INT8_MIN;
	uint64_t t161 = 341720351LLU;

    t161 = (x681|(x682-(x683<=x684)));

    if (t161 != 18446744073507962807LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x685 = UINT16_MAX;
	int32_t x688 = INT32_MIN;

    t162 = (x685|(x686-(x687<=x688)));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int32_t x689 = 12;
	int32_t x692 = INT32_MAX;
	int64_t t163 = -84989484214143887LL;

    t163 = (x689|(x690-(x691<=x692)));

    if (t163 != 112030192706553231LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x693 = INT8_MIN;
	uint64_t x694 = 25744LLU;
	uint32_t x696 = 0U;

    t164 = (x693|(x694-(x695<=x696)));

    if (t164 != 18446744073709551504LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x697 = 477U;
	static int32_t x699 = INT32_MAX;
	volatile uint8_t x700 = 32U;
	int32_t t165 = INT32_MAX;

    t165 = (x697|(x698-(x699<=x700)));

    if (t165 != INT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x702 = -61;
	uint8_t x703 = 3U;
	volatile int16_t x704 = INT16_MAX;
	int32_t t166 = -50;

    t166 = (x701|(x702-(x703<=x704)));

    if (t166 != -57) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x707 = UINT64_MAX;
	int32_t x708 = -17274;
	static volatile uint32_t t167 = UINT32_MAX;

    t167 = (x705|(x706-(x707<=x708)));

    if (t167 != UINT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x709 = INT64_MIN;
	static int8_t x710 = 1;
	int32_t x711 = INT32_MAX;
	uint16_t x712 = 6U;
	volatile int64_t t168 = -795222707LL;

    t168 = (x709|(x710-(x711<=x712)));

    if (t168 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x713 = INT8_MAX;
	int8_t x715 = 2;
	static int32_t x716 = -1;

    t169 = (x713|(x714-(x715<=x716)));

    if (t169 != -2147483521) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x721 = 211080258653174843LL;
	static int16_t x722 = INT16_MIN;
	int32_t x723 = 15383851;
	volatile int64_t x724 = INT64_MIN;

    t170 = (x721|(x722-(x723<=x724)));

    if (t170 != -17349LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x725 = INT16_MIN;
	int16_t x726 = -33;
	static int8_t x727 = -1;
	volatile uint8_t x728 = 0U;
	int32_t t171 = -109248;

    t171 = (x725|(x726-(x727<=x728)));

    if (t171 != -34) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x730 = 52;
	static uint8_t x731 = 3U;
	volatile int16_t x732 = INT16_MIN;
	volatile int32_t t172 = 7111853;

    t172 = (x729|(x730-(x731<=x732)));

    if (t172 != 54) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x733 = 15U;
	int16_t x734 = -1;
	int8_t x735 = -1;
	int64_t x736 = -1LL;
	volatile int32_t t173 = -229876317;

    t173 = (x733|(x734-(x735<=x736)));

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x737 = UINT32_MAX;
	static volatile uint32_t x738 = 252004790U;
	volatile int16_t x739 = -1;

    t174 = (x737|(x738-(x739<=x740)));

    if (t174 != UINT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x741 = UINT32_MAX;
	uint32_t x743 = UINT32_MAX;
	int16_t x744 = INT16_MAX;
	uint32_t t175 = UINT32_MAX;

    t175 = (x741|(x742-(x743<=x744)));

    if (t175 != UINT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x750 = INT8_MIN;
	uint64_t x751 = 124LLU;
	uint32_t x752 = 9830U;

    t176 = (x749|(x750-(x751<=x752)));

    if (t176 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint8_t x754 = 1U;
	uint8_t x755 = 0U;
	static int32_t t177 = 705203914;

    t177 = (x753|(x754-(x755<=x756)));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x758 = UINT16_MAX;
	int8_t x760 = 60;
	volatile int32_t t178 = 25294;

    t178 = (x757|(x758-(x759<=x760)));

    if (t178 != -2) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x761 = UINT8_MAX;
	static int16_t x762 = 8157;
	static volatile int8_t x763 = INT8_MIN;
	static int8_t x764 = INT8_MIN;
	volatile int32_t t179 = -74;

    t179 = (x761|(x762-(x763<=x764)));

    if (t179 != 8191) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x765 = INT16_MAX;
	int64_t x766 = INT64_MAX;
	static int32_t x767 = INT32_MIN;
	volatile uint64_t x768 = 594214LLU;
	int64_t t180 = INT64_MAX;

    t180 = (x765|(x766-(x767<=x768)));

    if (t180 != INT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x769 = -1;
	volatile uint16_t x770 = 123U;
	volatile uint8_t x771 = UINT8_MAX;
	volatile uint64_t x772 = 47256633681234LLU;
	int32_t t181 = -2;

    t181 = (x769|(x770-(x771<=x772)));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x773 = INT64_MIN;
	volatile int16_t x774 = 399;
	volatile int8_t x775 = 1;
	uint8_t x776 = 3U;
	volatile int64_t t182 = -1844LL;

    t182 = (x773|(x774-(x775<=x776)));

    if (t182 != -9223372036854775410LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x781 = 0;
	static int16_t x782 = 141;
	volatile uint8_t x783 = UINT8_MAX;
	volatile int8_t x784 = -1;
	int32_t t183 = 2;

    t183 = (x781|(x782-(x783<=x784)));

    if (t183 != 141) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x785 = -4;
	int8_t x786 = INT8_MAX;
	static uint32_t x787 = 865731667U;
	volatile int32_t t184 = -142;

    t184 = (x785|(x786-(x787<=x788)));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x790 = 6U;
	int16_t x791 = INT16_MAX;
	int64_t x792 = INT64_MIN;
	volatile int32_t t185 = -55244;

    t185 = (x789|(x790-(x791<=x792)));

    if (t185 != -90) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x794 = -7780782146903LL;
	int8_t x795 = INT8_MIN;
	int8_t x796 = INT8_MIN;
	volatile int64_t t186 = -22279854296636277LL;

    t186 = (x793|(x794-(x795<=x796)));

    if (t186 != -88LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x797 = 1;
	int16_t x798 = -1;
	int64_t x799 = -170908LL;
	volatile int32_t x800 = -1;
	volatile int32_t t187 = -130920;

    t187 = (x797|(x798-(x799<=x800)));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x801 = 164103U;
	uint16_t x802 = UINT16_MAX;
	static int16_t x803 = INT16_MAX;
	volatile int16_t x804 = INT16_MIN;

    t188 = (x801|(x802-(x803<=x804)));

    if (t188 != 196607U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x805 = 3U;
	int8_t x806 = INT8_MAX;
	static int64_t x807 = INT64_MAX;
	int64_t x808 = -122124637110217939LL;
	int32_t t189 = -13;

    t189 = (x805|(x806-(x807<=x808)));

    if (t189 != 127) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x809 = INT16_MIN;
	static int8_t x810 = INT8_MAX;
	int32_t x812 = -1;
	volatile int32_t t190 = 142616;

    t190 = (x809|(x810-(x811<=x812)));

    if (t190 != -32642) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x813 = 1473U;
	int32_t x814 = INT32_MIN;
	volatile int64_t x815 = 65213858791056632LL;
	uint32_t t191 = 268698802U;

    t191 = (x813|(x814-(x815<=x816)));

    if (t191 != 2147485121U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x819 = INT16_MIN;
	static uint32_t x820 = 39U;
	uint32_t t192 = 929U;

    t192 = (x817|(x818-(x819<=x820)));

    if (t192 != 2147483647U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x821 = 53U;
	static uint16_t x822 = 3761U;
	int8_t x823 = 15;
	int8_t x824 = INT8_MAX;
	volatile int32_t t193 = -930180671;

    t193 = (x821|(x822-(x823<=x824)));

    if (t193 != 3765) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x825 = INT16_MIN;
	int64_t x826 = INT64_MIN;
	static int8_t x827 = 1;
	int8_t x828 = -1;
	int64_t t194 = -43582805LL;

    t194 = (x825|(x826-(x827<=x828)));

    if (t194 != -32768LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x832 = 765744479009565LL;

    t195 = (x829|(x830-(x831<=x832)));

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x833 = INT32_MIN;
	uint16_t x834 = 219U;
	int32_t x835 = -1;
	volatile int32_t t196 = 666292;

    t196 = (x833|(x834-(x835<=x836)));

    if (t196 != -2147483429) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x837 = 9459U;
	int8_t x838 = INT8_MIN;
	int64_t x839 = INT64_MAX;
	uint16_t x840 = 80U;
	volatile int32_t t197 = 8090122;

    t197 = (x837|(x838-(x839<=x840)));

    if (t197 != -13) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x841 = -3738LL;
	int8_t x842 = INT8_MIN;
	int32_t x843 = -178080;
	int64_t t198 = 8311857928235LL;

    t198 = (x841|(x842-(x843<=x844)));

    if (t198 != -129LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x846 = 20153682U;
	int64_t x847 = INT64_MIN;
	volatile uint8_t x848 = 68U;
	volatile int64_t t199 = 117509992278LL;

    t199 = (x845|(x846-(x847<=x848)));

    if (t199 != -806923LL) { NG(); } else { ; }
	
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


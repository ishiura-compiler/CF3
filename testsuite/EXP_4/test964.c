
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

uint8_t x1 = 0U;
int32_t x4 = INT32_MAX;
volatile int16_t x6 = -1;
int16_t x8 = 60;
uint8_t x11 = 106U;
int64_t x14 = INT64_MIN;
int16_t x18 = INT16_MIN;
int32_t x21 = 386860;
int8_t x31 = INT8_MAX;
volatile uint32_t t7 = UINT32_MAX;
int32_t x34 = 3588;
int64_t t8 = 4086330LL;
uint64_t t9 = 1329295430748LLU;
static volatile int64_t x43 = -1LL;
int8_t x44 = 5;
static volatile int64_t t10 = -542560011014190LL;
uint32_t x49 = 135U;
int32_t x58 = -3;
uint8_t x63 = 1U;
volatile uint32_t t15 = 291U;
uint16_t x68 = UINT16_MAX;
int8_t x80 = -36;
static uint16_t x87 = 6U;
uint8_t x88 = UINT8_MAX;
volatile uint8_t x92 = UINT8_MAX;
int8_t x93 = 0;
static uint64_t x97 = UINT64_MAX;
int16_t x99 = -1;
int32_t x101 = -11;
int64_t x106 = 5685168LL;
uint64_t x114 = 10394LLU;
uint32_t x116 = UINT32_MAX;
volatile int64_t x118 = -49465498316611460LL;
static uint32_t x120 = UINT32_MAX;
uint32_t x123 = 69U;
volatile int16_t x125 = INT16_MAX;
uint8_t x129 = UINT8_MAX;
static int32_t x145 = 626244;
static int64_t x148 = 47537177972LL;
volatile int64_t t35 = 4272488160832LL;
static volatile int64_t t36 = 23384394079507LL;
uint32_t x154 = 60U;
uint32_t t37 = 57385488U;
int64_t x161 = -14LL;
int32_t x164 = INT32_MAX;
static int8_t x168 = -1;
volatile int64_t t40 = -17484245LL;
static int16_t x174 = INT16_MIN;
int8_t x181 = INT8_MIN;
int8_t x182 = -49;
int64_t x183 = INT64_MIN;
static volatile uint32_t t44 = 3137965U;
int64_t t45 = -23775LL;
static uint32_t x199 = 106U;
uint16_t x200 = UINT16_MAX;
static uint8_t x206 = 8U;
volatile int32_t x209 = 2;
int32_t x214 = -1;
static volatile uint64_t t52 = 3LLU;
static volatile uint8_t x222 = 101U;
uint16_t x225 = 19U;
static volatile uint64_t t55 = 10821189716LLU;
uint8_t x248 = 5U;
int32_t x256 = INT32_MAX;
volatile uint16_t x266 = 6763U;
volatile uint32_t t65 = 3U;
int32_t x284 = -1;
int16_t x285 = -1;
volatile uint64_t x286 = 16185838446496455LLU;
int8_t x287 = -42;
static uint64_t t69 = 63400009953LLU;
int64_t x293 = INT64_MAX;
int64_t t71 = INT64_MAX;
uint32_t x297 = 10436U;
static uint64_t t72 = 81998LLU;
volatile int32_t x301 = INT32_MAX;
volatile int8_t x303 = -1;
int64_t x306 = -71LL;
int64_t x307 = INT64_MAX;
static int64_t x308 = -1LL;
static int8_t x310 = INT8_MIN;
int64_t x312 = -4978711LL;
int64_t t75 = 28930195LL;
int16_t x313 = INT16_MIN;
static int8_t x316 = -1;
volatile int16_t x317 = INT16_MIN;
uint16_t x328 = UINT16_MAX;
static int16_t x329 = INT16_MIN;
int32_t x334 = INT32_MAX;
int64_t x341 = 835025LL;
uint8_t x342 = 13U;
int16_t x344 = 5;
int64_t t83 = -1790777969973606687LL;
uint16_t x349 = UINT16_MAX;
volatile int16_t x352 = INT16_MIN;
volatile int16_t x363 = -1;
int64_t x364 = INT64_MAX;
static volatile uint32_t x366 = 122548U;
volatile int64_t x369 = 5114LL;
static volatile int64_t t90 = -4256365LL;
uint32_t x376 = 96124177U;
int8_t x379 = INT8_MAX;
int32_t x380 = -211491;
int16_t x382 = INT16_MAX;
int32_t x383 = -1;
uint32_t x385 = UINT32_MAX;
volatile int32_t x395 = INT32_MAX;
static volatile int64_t t96 = -19301334664423973LL;
int32_t x398 = -9;
uint8_t x400 = UINT8_MAX;
volatile uint32_t t97 = 1U;
static int8_t x404 = 1;
volatile int64_t t98 = 1075993045977951461LL;
volatile uint64_t x411 = UINT64_MAX;
static int64_t x420 = 3288831304019LL;
volatile int32_t x422 = INT32_MIN;
volatile int64_t t103 = 0LL;
volatile uint8_t x425 = UINT8_MAX;
static int32_t x426 = 202;
int64_t x430 = 813LL;
static int32_t x431 = 664437515;
int8_t x437 = -1;
int8_t x441 = -1;
static int8_t x445 = 4;
int8_t x446 = -1;
static int32_t x448 = INT32_MIN;
uint64_t x453 = 1077142019485LLU;
int16_t x455 = INT16_MIN;
uint8_t x459 = 0U;
static uint8_t x467 = 0U;
static int32_t t114 = -80;
volatile int64_t x469 = INT64_MAX;
uint16_t x471 = 0U;
int32_t t116 = 306145308;
int8_t x477 = INT8_MAX;
static uint32_t x484 = UINT32_MAX;
volatile uint64_t x485 = 2032386747LLU;
static uint16_t x487 = 6824U;
int64_t x493 = INT64_MIN;
static volatile int16_t x496 = INT16_MIN;
static uint64_t t122 = UINT64_MAX;
uint32_t x505 = 46887411U;
int8_t x506 = INT8_MIN;
volatile uint16_t x515 = 2687U;
static volatile uint16_t x527 = 1U;
volatile uint32_t x532 = UINT32_MAX;
static uint32_t x536 = 3376U;
volatile uint32_t t132 = 5744235U;
volatile int64_t x544 = 63012043199671LL;
static uint64_t x546 = UINT64_MAX;
int64_t x549 = -2LL;
int8_t x552 = -1;
int32_t x558 = INT32_MIN;
int32_t x563 = 212814;
int32_t x565 = 67539763;
int8_t x567 = INT8_MIN;
volatile int32_t t139 = -1607903;
static int32_t x576 = INT32_MAX;
static uint8_t x577 = UINT8_MAX;
volatile int8_t x584 = INT8_MAX;
int8_t x585 = 61;
volatile int64_t x587 = INT64_MIN;
static volatile int64_t t143 = -25488314921057LL;
static volatile int64_t t144 = 18827508LL;
static int32_t x603 = INT32_MIN;
uint8_t x604 = 14U;
volatile int64_t x609 = -1LL;
volatile int8_t x611 = 3;
static int64_t t149 = 120637084LL;
int64_t x617 = INT64_MAX;
int32_t x620 = INT32_MAX;
int64_t t152 = 16LL;
static volatile int8_t x630 = -1;
int64_t x638 = INT64_MIN;
int64_t x642 = 98765484LL;
static int32_t x653 = -1;
int32_t x660 = 6;
static int8_t x661 = -1;
static volatile int32_t x670 = INT32_MIN;
uint16_t x685 = 6U;
static uint64_t x695 = 4305827214351LLU;
volatile uint64_t x701 = 23760744035914000LLU;
int16_t x708 = -1;
int64_t t173 = 62821940166LL;
volatile uint32_t x711 = UINT32_MAX;
int64_t x720 = -1LL;
int32_t x728 = -173;
volatile int32_t t178 = 49372;
static uint16_t x731 = 15668U;
int16_t x733 = INT16_MAX;
uint8_t x738 = 0U;
uint8_t x748 = UINT8_MAX;
int16_t x753 = INT16_MAX;
volatile int64_t t185 = 11304869LL;
volatile int64_t t187 = -2154417512010915593LL;
static int32_t x765 = INT32_MIN;
uint64_t x772 = 3047939783642LLU;
int64_t t190 = 123156586756176050LL;
volatile int32_t x778 = -5;
int16_t x779 = INT16_MIN;
int8_t x783 = INT8_MIN;
static uint16_t x798 = 400U;
int8_t x801 = INT8_MIN;
int32_t x808 = -62476464;


void f0(void) {
    	static int16_t x2 = INT16_MIN;
	int8_t x3 = INT8_MIN;
	volatile int32_t t0 = 21;

    t0 = (x1&(x2|(x3%x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = -7;
	volatile int16_t x7 = INT16_MAX;
	static int32_t t1 = 594226678;

    t1 = (x5&(x6|(x7%x8)));

    if (t1 != -7) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = INT16_MIN;
	int32_t x10 = INT32_MIN;
	int64_t x12 = INT64_MAX;
	volatile int64_t t2 = -1614553LL;

    t2 = (x9&(x10|(x11%x12)));

    if (t2 != -2147483648LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 679096;
	uint64_t x15 = UINT64_MAX;
	uint16_t x16 = 10U;
	static volatile uint64_t t3 = 30900702677606141LLU;

    t3 = (x13&(x14|(x15%x16)));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	static int64_t x19 = INT64_MAX;
	volatile int64_t x20 = -193151086LL;
	int64_t t4 = 1567095133LL;

    t4 = (x17&(x18|(x19%x20)));

    if (t4 != -575LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = INT32_MAX;
	uint32_t x23 = 6528U;
	uint16_t x24 = 35U;
	volatile uint32_t t5 = 2258706U;

    t5 = (x21&(x22|(x23%x24)));

    if (t5 != 386860U) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	volatile int32_t x26 = INT32_MAX;
	static int8_t x27 = -1;
	int8_t x28 = INT8_MIN;
	static int32_t t6 = INT32_MIN;

    t6 = (x25&(x26|(x27%x28)));

    if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	int16_t x30 = -1;
	uint32_t x32 = 95288U;

    t7 = (x29&(x30|(x31%x32)));

    if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 1482U;
	volatile int32_t x35 = INT32_MIN;
	int64_t x36 = -1LL;

    t8 = (x33&(x34|(x35%x36)));

    if (t8 != 1024LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	static volatile uint16_t x38 = UINT16_MAX;
	uint64_t x39 = UINT64_MAX;
	static uint32_t x40 = UINT32_MAX;

    t9 = (x37&(x38|(x39%x40)));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 5U;
	int32_t x42 = -1;

    t10 = (x41&(x42|(x43%x44)));

    if (t10 != 5LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MIN;
	int16_t x47 = 967;
	volatile int32_t x48 = INT32_MIN;
	int64_t t11 = INT64_MIN;

    t11 = (x45&(x46|(x47%x48)));

    if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x50 = UINT32_MAX;
	uint16_t x51 = 478U;
	uint32_t x52 = 493109288U;
	uint32_t t12 = 3079U;

    t12 = (x49&(x50|(x51%x52)));

    if (t12 != 135U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = UINT64_MAX;
	int16_t x54 = INT16_MIN;
	uint64_t x55 = 660069170282LLU;
	static int32_t x56 = INT32_MAX;
	volatile uint64_t t13 = 3621121438LLU;

    t13 = (x53&(x54|(x55%x56)));

    if (t13 != 18446744073709534621LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 74U;
	uint64_t x59 = 20032LLU;
	static uint64_t x60 = 13218978LLU;
	static uint64_t t14 = 1737128299794311LLU;

    t14 = (x57&(x58|(x59%x60)));

    if (t14 != 72LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -310;
	int32_t x62 = INT32_MAX;
	static volatile uint32_t x64 = 1858U;

    t15 = (x61&(x62|(x63%x64)));

    if (t15 != 2147483338U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 15U;
	int32_t x66 = INT32_MIN;
	volatile uint8_t x67 = 1U;
	int32_t t16 = -4035;

    t16 = (x65&(x66|(x67%x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	uint16_t x70 = 29857U;
	static int32_t x71 = -28289291;
	static uint64_t x72 = 31LLU;
	static volatile uint64_t t17 = 3792732599420530390LLU;

    t17 = (x69&(x70|(x71%x72)));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	int64_t x74 = -729057217039964LL;
	static uint8_t x75 = 29U;
	uint32_t x76 = 58069778U;
	static int64_t t18 = 536689LL;

    t18 = (x73&(x74|(x75%x76)));

    if (t18 != -729057217039939LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = -1;
	int64_t x78 = INT64_MAX;
	uint64_t x79 = 409591295LLU;
	volatile uint64_t t19 = 4927139308145LLU;

    t19 = (x77&(x78|(x79%x80)));

    if (t19 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x81 = INT64_MAX;
	int16_t x82 = 0;
	int16_t x83 = INT16_MAX;
	uint8_t x84 = 12U;
	static volatile int64_t t20 = -1002403050580349LL;

    t20 = (x81&(x82|(x83%x84)));

    if (t20 != 7LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x85 = INT16_MAX;
	uint64_t x86 = 152135536387225LLU;
	static volatile uint64_t t21 = 521LLU;

    t21 = (x85&(x86|(x87%x88)));

    if (t21 != 9375LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	volatile int16_t x90 = -6;
	int8_t x91 = INT8_MIN;
	int64_t t22 = INT64_MIN;

    t22 = (x89&(x90|(x91%x92)));

    if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x94 = INT16_MIN;
	int16_t x95 = -451;
	int8_t x96 = INT8_MIN;
	static int32_t t23 = -2834;

    t23 = (x93&(x94|(x95%x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x98 = INT64_MIN;
	int64_t x100 = INT64_MIN;
	volatile uint64_t t24 = UINT64_MAX;

    t24 = (x97&(x98|(x99%x100)));

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x102 = 194LLU;
	static uint32_t x103 = 8616U;
	int8_t x104 = -22;
	volatile uint64_t t25 = 4388989528742554910LLU;

    t25 = (x101&(x102|(x103%x104)));

    if (t25 != 8672LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = -1LL;
	uint8_t x107 = 20U;
	static int32_t x108 = INT32_MIN;
	volatile int64_t t26 = 7464262805383989LL;

    t26 = (x105&(x106|(x107%x108)));

    if (t26 != 5685172LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -1LL;
	uint32_t x110 = 1726882U;
	int8_t x111 = INT8_MIN;
	int8_t x112 = -1;
	volatile int64_t t27 = -3059093576429426LL;

    t27 = (x109&(x110|(x111%x112)));

    if (t27 != 1726882LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = UINT8_MAX;
	uint16_t x115 = 100U;
	uint64_t t28 = 92915311835830044LLU;

    t28 = (x113&(x114|(x115%x116)));

    if (t28 != 254LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x117 = -12;
	int8_t x119 = 6;
	volatile int64_t t29 = -249336826300201575LL;

    t29 = (x117&(x118|(x119%x120)));

    if (t29 != -49465498316611468LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x121 = -2;
	uint16_t x122 = UINT16_MAX;
	uint16_t x124 = 22U;
	static volatile uint32_t t30 = 3225686U;

    t30 = (x121&(x122|(x123%x124)));

    if (t30 != 65534U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = -457;
	volatile int8_t x127 = -1;
	static int8_t x128 = -1;
	volatile int32_t t31 = -5935455;

    t31 = (x125&(x126|(x127%x128)));

    if (t31 != 32311) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x130 = -1;
	uint32_t x131 = 734524534U;
	int64_t x132 = INT64_MAX;
	static int64_t t32 = 243LL;

    t32 = (x129&(x130|(x131%x132)));

    if (t32 != 255LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -19;
	int8_t x134 = -6;
	int64_t x135 = -1LL;
	int8_t x136 = INT8_MIN;
	volatile int64_t t33 = 6709LL;

    t33 = (x133&(x134|(x135%x136)));

    if (t33 != -19LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x141 = INT16_MIN;
	uint32_t x142 = 7U;
	static int32_t x143 = -1;
	int8_t x144 = -1;
	uint32_t t34 = 25004371U;

    t34 = (x141&(x142|(x143%x144)));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x146 = -1LL;
	int8_t x147 = -1;

    t35 = (x145&(x146|(x147%x148)));

    if (t35 != 626244LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = INT64_MAX;
	uint16_t x150 = 6754U;
	int8_t x151 = -2;
	static uint32_t x152 = 169U;

    t36 = (x149&(x150|(x151%x152)));

    if (t36 != 6767LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x153 = 15U;
	int16_t x155 = INT16_MIN;
	static int8_t x156 = INT8_MIN;

    t37 = (x153&(x154|(x155%x156)));

    if (t37 != 12U) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int16_t x157 = INT16_MIN;
	int64_t x158 = -1LL;
	static int64_t x159 = INT64_MAX;
	static int64_t x160 = INT64_MIN;
	int64_t t38 = 50359198318121335LL;

    t38 = (x157&(x158|(x159%x160)));

    if (t38 != -32768LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x162 = INT16_MIN;
	static volatile uint8_t x163 = 67U;
	volatile int64_t t39 = 1270129733622LL;

    t39 = (x161&(x162|(x163%x164)));

    if (t39 != -32702LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint16_t x165 = 30725U;
	int64_t x166 = INT64_MAX;
	static uint16_t x167 = UINT16_MAX;

    t40 = (x165&(x166|(x167%x168)));

    if (t40 != 30725LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x169 = INT8_MIN;
	volatile int32_t x170 = INT32_MIN;
	int16_t x171 = -1;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t41 = -20599;

    t41 = (x169&(x170|(x171%x172)));

    if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x173 = -1;
	int16_t x175 = 0;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t42 = 0;

    t42 = (x173&(x174|(x175%x176)));

    if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x184 = INT32_MIN;
	volatile int64_t t43 = 1017194LL;

    t43 = (x181&(x182|(x183%x184)));

    if (t43 != -128LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x185 = UINT16_MAX;
	static int16_t x186 = -1;
	int16_t x187 = INT16_MIN;
	uint32_t x188 = 256421U;

    t44 = (x185&(x186|(x187%x188)));

    if (t44 != 65535U) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x189 = INT64_MIN;
	int32_t x190 = -16;
	int16_t x191 = INT16_MIN;
	volatile uint32_t x192 = UINT32_MAX;

    t45 = (x189&(x190|(x191%x192)));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint8_t x193 = UINT8_MAX;
	volatile uint8_t x194 = 9U;
	uint64_t x195 = UINT64_MAX;
	int16_t x196 = INT16_MAX;
	uint64_t t46 = 19944428457394433LLU;

    t46 = (x193&(x194|(x195%x196)));

    if (t46 != 15LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x197 = 510375634;
	int64_t x198 = -6LL;
	volatile int64_t t47 = -1092932153640528LL;

    t47 = (x197&(x198|(x199%x200)));

    if (t47 != 510375634LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x201 = 43U;
	int64_t x202 = 2034LL;
	uint64_t x203 = UINT64_MAX;
	volatile int8_t x204 = 1;
	volatile uint64_t t48 = 810254187169938879LLU;

    t48 = (x201&(x202|(x203%x204)));

    if (t48 != 34LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x205 = UINT64_MAX;
	int64_t x207 = INT64_MIN;
	int16_t x208 = INT16_MIN;
	static volatile uint64_t t49 = 42569724339193664LLU;

    t49 = (x205&(x206|(x207%x208)));

    if (t49 != 8LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x210 = 4854819089006105LLU;
	static volatile int16_t x211 = -1;
	static uint16_t x212 = UINT16_MAX;
	static uint64_t t50 = 221902822391543596LLU;

    t50 = (x209&(x210|(x211%x212)));

    if (t50 != 2LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x213 = -5;
	int32_t x215 = -1;
	int64_t x216 = -1LL;
	volatile int64_t t51 = 288101071126LL;

    t51 = (x213&(x214|(x215%x216)));

    if (t51 != -5LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x217 = INT32_MAX;
	volatile int8_t x218 = 9;
	static uint64_t x219 = 30786010611210988LLU;
	static volatile int8_t x220 = INT8_MIN;

    t52 = (x217&(x218|(x219%x220)));

    if (t52 != 713579245LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x221 = INT32_MAX;
	static uint8_t x223 = 1U;
	volatile int8_t x224 = INT8_MIN;
	volatile int32_t t53 = 115490;

    t53 = (x221&(x222|(x223%x224)));

    if (t53 != 101) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x226 = INT64_MAX;
	uint32_t x227 = UINT32_MAX;
	int16_t x228 = INT16_MIN;
	int64_t t54 = -3510093540251815LL;

    t54 = (x225&(x226|(x227%x228)));

    if (t54 != 19LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x229 = UINT64_MAX;
	int64_t x230 = -48212511514LL;
	int16_t x231 = INT16_MIN;
	int16_t x232 = INT16_MIN;

    t55 = (x229&(x230|(x231%x232)));

    if (t55 != 18446744025497040102LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x233 = -11;
	static volatile uint32_t x234 = 5U;
	volatile int8_t x235 = 6;
	uint64_t x236 = 29333LLU;
	static uint64_t t56 = 114657084LLU;

    t56 = (x233&(x234|(x235%x236)));

    if (t56 != 5LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x237 = 3U;
	int8_t x238 = INT8_MAX;
	static int16_t x239 = INT16_MAX;
	uint32_t x240 = 1U;
	volatile uint32_t t57 = 3379U;

    t57 = (x237&(x238|(x239%x240)));

    if (t57 != 3U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x241 = INT16_MIN;
	uint64_t x242 = UINT64_MAX;
	uint8_t x243 = 115U;
	int16_t x244 = INT16_MAX;
	uint64_t t58 = 1455133LLU;

    t58 = (x241&(x242|(x243%x244)));

    if (t58 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x245 = -5;
	int16_t x246 = INT16_MIN;
	volatile int8_t x247 = INT8_MIN;
	volatile int32_t t59 = 163404;

    t59 = (x245&(x246|(x247%x248)));

    if (t59 != -7) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x249 = 30813493162757LLU;
	int32_t x250 = INT32_MIN;
	static uint64_t x251 = UINT64_MAX;
	int16_t x252 = INT16_MIN;
	volatile uint64_t t60 = 66126205LLU;

    t60 = (x249&(x250|(x251%x252)));

    if (t60 != 30812095410949LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x253 = INT8_MIN;
	volatile uint64_t x254 = 360LLU;
	int8_t x255 = -1;
	volatile uint64_t t61 = 105655LLU;

    t61 = (x253&(x254|(x255%x256)));

    if (t61 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x257 = -1338251747253812LL;
	int32_t x258 = INT32_MAX;
	static uint32_t x259 = 513379U;
	uint64_t x260 = UINT64_MAX;
	uint64_t t62 = 3686373352613911870LLU;

    t62 = (x257&(x258|(x259%x260)));

    if (t62 != 2080121292LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x261 = INT8_MAX;
	static int64_t x262 = INT64_MIN;
	uint64_t x263 = UINT64_MAX;
	int32_t x264 = 6175;
	volatile uint64_t t63 = 221847741280916LLU;

    t63 = (x261&(x262|(x263%x264)));

    if (t63 != 65LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x265 = -1;
	static int8_t x267 = -1;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t64 = 880718;

    t64 = (x265&(x266|(x267%x268)));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x269 = INT16_MIN;
	int32_t x270 = 284912;
	uint32_t x271 = 12210U;
	uint32_t x272 = UINT32_MAX;

    t65 = (x269&(x270|(x271%x272)));

    if (t65 != 262144U) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int32_t x273 = INT32_MIN;
	static int16_t x274 = 4914;
	static uint16_t x275 = 1U;
	uint16_t x276 = 1486U;
	static volatile int32_t t66 = 807190;

    t66 = (x273&(x274|(x275%x276)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x277 = 3152LL;
	volatile int16_t x278 = INT16_MIN;
	static int8_t x279 = INT8_MIN;
	volatile int32_t x280 = 471;
	int64_t t67 = -5989458LL;

    t67 = (x277&(x278|(x279%x280)));

    if (t67 != 3072LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x281 = INT32_MIN;
	volatile int8_t x282 = INT8_MIN;
	int32_t x283 = -1;
	int32_t t68 = INT32_MIN;

    t68 = (x281&(x282|(x283%x284)));

    if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x288 = 1937746459U;

    t69 = (x285&(x286|(x287%x288)));

    if (t69 != 16185838731717607LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x289 = -1417631;
	int16_t x290 = 73;
	uint8_t x291 = UINT8_MAX;
	int16_t x292 = INT16_MIN;
	int32_t t70 = 106125748;

    t70 = (x289&(x290|(x291%x292)));

    if (t70 != 97) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x294 = -1;
	int32_t x295 = INT32_MIN;
	uint8_t x296 = UINT8_MAX;

    t71 = (x293&(x294|(x295%x296)));

    if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x298 = -1LL;
	uint64_t x299 = 6698362283LLU;
	static int64_t x300 = -1LL;

    t72 = (x297&(x298|(x299%x300)));

    if (t72 != 10436LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x302 = INT32_MAX;
	static int16_t x304 = -1;
	int32_t t73 = INT32_MAX;

    t73 = (x301&(x302|(x303%x304)));

    if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x305 = INT16_MIN;
	volatile int64_t t74 = -58446879LL;

    t74 = (x305&(x306|(x307%x308)));

    if (t74 != -32768LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x309 = -1;
	volatile int64_t x311 = INT64_MAX;

    t75 = (x309&(x310|(x311%x312)));

    if (t75 != -96LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x314 = INT64_MIN;
	int64_t x315 = INT64_MAX;
	int64_t t76 = INT64_MIN;

    t76 = (x313&(x314|(x315%x316)));

    if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x318 = -1;
	uint8_t x319 = UINT8_MAX;
	int32_t x320 = INT32_MIN;
	volatile int32_t t77 = 965463;

    t77 = (x317&(x318|(x319%x320)));

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x321 = 48804717348549LLU;
	static uint32_t x322 = 271U;
	static int64_t x323 = -1LL;
	int16_t x324 = INT16_MIN;
	static uint64_t t78 = 6362701LLU;

    t78 = (x321&(x322|(x323%x324)));

    if (t78 != 48804717348549LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x325 = 8;
	int8_t x326 = -1;
	int32_t x327 = INT32_MIN;
	volatile int32_t t79 = 19495;

    t79 = (x325&(x326|(x327%x328)));

    if (t79 != 8) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x330 = 487341373080039515LLU;
	uint8_t x331 = UINT8_MAX;
	uint16_t x332 = 201U;
	volatile uint64_t t80 = 245219626009994LLU;

    t80 = (x329&(x330|(x331%x332)));

    if (t80 != 487341373080010752LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x333 = INT8_MIN;
	int64_t x335 = -1LL;
	int16_t x336 = INT16_MIN;
	static int64_t t81 = 418687463893508LL;

    t81 = (x333&(x334|(x335%x336)));

    if (t81 != -128LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x337 = -33424417169828594LL;
	uint32_t x338 = UINT32_MAX;
	uint8_t x339 = UINT8_MAX;
	static uint32_t x340 = 2U;
	volatile int64_t t82 = 83787073LL;

    t82 = (x337&(x338|(x339%x340)));

    if (t82 != 1875154190LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x343 = -10358093LL;

    t83 = (x341&(x342|(x343%x344)));

    if (t83 != 835025LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x345 = 4U;
	static int64_t x346 = INT64_MAX;
	int32_t x347 = INT32_MIN;
	int64_t x348 = 66142373854786LL;
	volatile int64_t t84 = 689073611049996LL;

    t84 = (x345&(x346|(x347%x348)));

    if (t84 != 4LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x350 = 1;
	uint64_t x351 = 7892859793048245107LLU;
	volatile uint64_t t85 = 934842401LLU;

    t85 = (x349&(x350|(x351%x352)));

    if (t85 != 37747LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x353 = 8U;
	int16_t x354 = 3;
	uint32_t x355 = 1516391U;
	volatile uint32_t x356 = 4U;
	uint32_t t86 = 72304U;

    t86 = (x353&(x354|(x355%x356)));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x357 = -1LL;
	static uint64_t x358 = 1202274LLU;
	static volatile int8_t x359 = 5;
	static int8_t x360 = INT8_MIN;
	uint64_t t87 = 7LLU;

    t87 = (x357&(x358|(x359%x360)));

    if (t87 != 1202279LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x361 = -4;
	volatile int32_t x362 = 48856;
	static int64_t t88 = -93980738486262LL;

    t88 = (x361&(x362|(x363%x364)));

    if (t88 != -4LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x365 = 74838384U;
	int64_t x367 = INT64_MIN;
	volatile int16_t x368 = INT16_MAX;
	volatile int64_t t89 = 119818755438830LL;

    t89 = (x365&(x366|(x367%x368)));

    if (t89 != 74838384LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x370 = 447796498LL;
	static int64_t x371 = -1LL;
	volatile int32_t x372 = -1;

    t90 = (x369&(x370|(x371%x372)));

    if (t90 != 4370LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x373 = INT32_MIN;
	uint64_t x374 = 2635LLU;
	int16_t x375 = -171;
	volatile uint64_t t91 = 11LLU;

    t91 = (x373&(x374|(x375%x376)));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x377 = 81U;
	volatile int16_t x378 = 3;
	static volatile int32_t t92 = 203754;

    t92 = (x377&(x378|(x379%x380)));

    if (t92 != 81) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x381 = INT16_MAX;
	volatile int64_t x384 = -1LL;
	volatile int64_t t93 = 680043LL;

    t93 = (x381&(x382|(x383%x384)));

    if (t93 != 32767LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x386 = -866;
	uint32_t x387 = UINT32_MAX;
	static uint32_t x388 = 29U;
	volatile uint32_t t94 = 1312U;

    t94 = (x385&(x386|(x387%x388)));

    if (t94 != 4294966431U) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x389 = 6305402173LL;
	int16_t x390 = -100;
	int16_t x391 = INT16_MIN;
	volatile uint16_t x392 = 13807U;
	volatile int64_t t95 = 114909LL;

    t95 = (x389&(x390|(x391%x392)));

    if (t95 != 6305402140LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x393 = -18099668;
	static volatile int64_t x394 = -338724LL;
	int32_t x396 = 3;

    t96 = (x393&(x394|(x395%x396)));

    if (t96 != -18165748LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x397 = 2U;
	uint16_t x399 = 41U;

    t97 = (x397&(x398|(x399%x400)));

    if (t97 != 2U) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x401 = -1;
	volatile int8_t x402 = INT8_MAX;
	int64_t x403 = -6LL;

    t98 = (x401&(x402|(x403%x404)));

    if (t98 != 127LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x405 = 59;
	volatile int8_t x406 = -1;
	volatile int64_t x407 = INT64_MIN;
	uint32_t x408 = 28824U;
	static volatile int64_t t99 = -2620LL;

    t99 = (x405&(x406|(x407%x408)));

    if (t99 != 59LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x409 = UINT16_MAX;
	uint16_t x410 = UINT16_MAX;
	volatile int16_t x412 = INT16_MAX;
	static uint64_t t100 = 56359LLU;

    t100 = (x409&(x410|(x411%x412)));

    if (t100 != 65535LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x413 = 0;
	static volatile int8_t x414 = INT8_MIN;
	volatile int16_t x415 = 0;
	int8_t x416 = INT8_MAX;
	volatile int32_t t101 = 25325389;

    t101 = (x413&(x414|(x415%x416)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x417 = 16995U;
	static int32_t x418 = -1;
	volatile int64_t x419 = 1468098LL;
	int64_t t102 = 12LL;

    t102 = (x417&(x418|(x419%x420)));

    if (t102 != 16995LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x421 = INT64_MIN;
	volatile uint32_t x423 = UINT32_MAX;
	int8_t x424 = -1;

    t103 = (x421&(x422|(x423%x424)));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x427 = 0U;
	volatile uint32_t x428 = 922942U;
	uint32_t t104 = 55947885U;

    t104 = (x425&(x426|(x427%x428)));

    if (t104 != 202U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x429 = INT8_MIN;
	static int16_t x432 = 13;
	volatile int64_t t105 = 4825537155178LL;

    t105 = (x429&(x430|(x431%x432)));

    if (t105 != 768LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x433 = 5U;
	uint32_t x434 = UINT32_MAX;
	uint8_t x435 = 29U;
	uint64_t x436 = UINT64_MAX;
	uint64_t t106 = 3148430LLU;

    t106 = (x433&(x434|(x435%x436)));

    if (t106 != 5LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x438 = 12;
	uint64_t x439 = UINT64_MAX;
	int16_t x440 = 15007;
	static volatile uint64_t t107 = 6LLU;

    t107 = (x437&(x438|(x439%x440)));

    if (t107 != 5806LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint8_t x442 = 26U;
	int32_t x443 = -1;
	volatile int16_t x444 = INT16_MIN;
	volatile int32_t t108 = -956533597;

    t108 = (x441&(x442|(x443%x444)));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x447 = INT8_MIN;
	int32_t t109 = 287;

    t109 = (x445&(x446|(x447%x448)));

    if (t109 != 4) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x449 = 1LLU;
	int32_t x450 = -1;
	int16_t x451 = INT16_MIN;
	volatile uint64_t x452 = 8519533305681LLU;
	uint64_t t110 = 21448691612201LLU;

    t110 = (x449&(x450|(x451%x452)));

    if (t110 != 1LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x454 = -1;
	int8_t x456 = INT8_MIN;
	volatile uint64_t t111 = 785982936005LLU;

    t111 = (x453&(x454|(x455%x456)));

    if (t111 != 1077142019485LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x457 = INT64_MIN;
	static int32_t x458 = -1;
	volatile int32_t x460 = 199;
	int64_t t112 = INT64_MIN;

    t112 = (x457&(x458|(x459%x460)));

    if (t112 != INT64_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x461 = -1LL;
	uint32_t x462 = 1U;
	volatile uint16_t x463 = UINT16_MAX;
	uint32_t x464 = UINT32_MAX;
	volatile int64_t t113 = 205105177959LL;

    t113 = (x461&(x462|(x463%x464)));

    if (t113 != 65535LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x465 = 561;
	static int8_t x466 = INT8_MIN;
	static int8_t x468 = INT8_MIN;

    t114 = (x465&(x466|(x467%x468)));

    if (t114 != 512) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x470 = -1;
	static volatile int32_t x472 = 25280082;
	int64_t t115 = INT64_MAX;

    t115 = (x469&(x470|(x471%x472)));

    if (t115 != INT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x473 = 679;
	static volatile uint8_t x474 = UINT8_MAX;
	int32_t x475 = 15948;
	int16_t x476 = INT16_MAX;

    t116 = (x473&(x474|(x475%x476)));

    if (t116 != 679) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x478 = 0U;
	uint32_t x479 = UINT32_MAX;
	static int32_t x480 = 11;
	uint32_t t117 = 172U;

    t117 = (x477&(x478|(x479%x480)));

    if (t117 != 3U) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x481 = 56;
	static int8_t x482 = INT8_MIN;
	int32_t x483 = -392416516;
	static volatile uint32_t t118 = 16071U;

    t118 = (x481&(x482|(x483%x484)));

    if (t118 != 56U) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x486 = INT64_MIN;
	int32_t x488 = -74;
	static volatile uint64_t t119 = 8528952175042113769LLU;

    t119 = (x485&(x486|(x487%x488)));

    if (t119 != 16LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x489 = UINT32_MAX;
	static int32_t x490 = INT32_MIN;
	int64_t x491 = INT64_MAX;
	static uint32_t x492 = 9U;
	static int64_t t120 = 78173LL;

    t120 = (x489&(x490|(x491%x492)));

    if (t120 != 2147483655LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x494 = INT16_MIN;
	volatile int64_t x495 = INT64_MIN;
	static int64_t t121 = INT64_MIN;

    t121 = (x493&(x494|(x495%x496)));

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x497 = -1;
	uint64_t x498 = UINT64_MAX;
	uint16_t x499 = 7U;
	int64_t x500 = -1LL;

    t122 = (x497&(x498|(x499%x500)));

    if (t122 != UINT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x501 = 126LLU;
	uint32_t x502 = 14U;
	uint64_t x503 = UINT64_MAX;
	volatile uint64_t x504 = 11605005134167LLU;
	uint64_t t123 = 8LLU;

    t123 = (x501&(x502|(x503%x504)));

    if (t123 != 94LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x507 = 14233797815LL;
	static uint16_t x508 = UINT16_MAX;
	static volatile int64_t t124 = 19879560LL;

    t124 = (x505&(x506|(x507%x508)));

    if (t124 != 46887328LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x509 = INT32_MAX;
	volatile uint8_t x510 = UINT8_MAX;
	int8_t x511 = -12;
	static uint32_t x512 = 55383406U;
	uint32_t t125 = 384438U;

    t125 = (x509&(x510|(x511%x512)));

    if (t125 != 30445055U) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x513 = -1;
	static volatile int64_t x514 = INT64_MIN;
	volatile int64_t x516 = -1LL;
	int64_t t126 = INT64_MIN;

    t126 = (x513&(x514|(x515%x516)));

    if (t126 != INT64_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x517 = INT16_MIN;
	static int8_t x518 = -1;
	int64_t x519 = 854445219222349606LL;
	int8_t x520 = INT8_MAX;
	static volatile int64_t t127 = -59LL;

    t127 = (x517&(x518|(x519%x520)));

    if (t127 != -32768LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x521 = -1;
	uint64_t x522 = 855379335245672LLU;
	volatile uint32_t x523 = UINT32_MAX;
	volatile int32_t x524 = INT32_MAX;
	volatile uint64_t t128 = 6406284931LLU;

    t128 = (x521&(x522|(x523%x524)));

    if (t128 != 855379335245673LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x525 = 4269759056435LLU;
	int32_t x526 = -1;
	static int8_t x528 = INT8_MIN;
	uint64_t t129 = 208174124762732LLU;

    t129 = (x525&(x526|(x527%x528)));

    if (t129 != 4269759056435LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x529 = INT64_MIN;
	int64_t x530 = -127475427519569187LL;
	uint8_t x531 = 2U;
	int64_t t130 = INT64_MIN;

    t130 = (x529&(x530|(x531%x532)));

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int8_t x533 = INT8_MIN;
	int32_t x534 = INT32_MIN;
	int16_t x535 = INT16_MIN;
	volatile uint32_t t131 = 7229U;

    t131 = (x533&(x534|(x535%x536)));

    if (t131 != 2147484416U) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x537 = -259861819;
	static int16_t x538 = -1;
	uint32_t x539 = 12280589U;
	int32_t x540 = INT32_MIN;

    t132 = (x537&(x538|(x539%x540)));

    if (t132 != 4035105477U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x541 = INT8_MIN;
	int8_t x542 = INT8_MIN;
	int32_t x543 = -8005;
	static int64_t t133 = -914451616295LL;

    t133 = (x541&(x542|(x543%x544)));

    if (t133 != -128LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x545 = INT64_MAX;
	static int16_t x547 = INT16_MIN;
	volatile int8_t x548 = INT8_MIN;
	uint64_t t134 = 7565441LLU;

    t134 = (x545&(x546|(x547%x548)));

    if (t134 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x550 = INT8_MAX;
	uint16_t x551 = 6854U;
	static int64_t t135 = -595904006462320575LL;

    t135 = (x549&(x550|(x551%x552)));

    if (t135 != 126LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x557 = INT16_MIN;
	static uint16_t x559 = 0U;
	int8_t x560 = INT8_MIN;
	static volatile int32_t t136 = INT32_MIN;

    t136 = (x557&(x558|(x559%x560)));

    if (t136 != INT32_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x561 = INT32_MIN;
	static uint16_t x562 = 1220U;
	uint64_t x564 = 69030LLU;
	static volatile uint64_t t137 = 1236928268318LLU;

    t137 = (x561&(x562|(x563%x564)));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x566 = INT16_MIN;
	static uint8_t x568 = UINT8_MAX;
	int32_t t138 = 2794995;

    t138 = (x565&(x566|(x567%x568)));

    if (t138 != 67539712) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x569 = -8;
	int32_t x570 = -1;
	int16_t x571 = INT16_MIN;
	static int32_t x572 = -27682457;

    t139 = (x569&(x570|(x571%x572)));

    if (t139 != -8) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint16_t x573 = UINT16_MAX;
	uint32_t x574 = 1856662U;
	int8_t x575 = -1;
	volatile uint32_t t140 = 282912365U;

    t140 = (x573&(x574|(x575%x576)));

    if (t140 != 65535U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x578 = 317726806;
	int16_t x579 = INT16_MAX;
	static uint16_t x580 = UINT16_MAX;
	int32_t t141 = -997983176;

    t141 = (x577&(x578|(x579%x580)));

    if (t141 != 255) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x581 = INT16_MIN;
	int32_t x582 = INT32_MIN;
	int16_t x583 = -1;
	int32_t t142 = -5;

    t142 = (x581&(x582|(x583%x584)));

    if (t142 != -32768) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x586 = INT8_MIN;
	static int16_t x588 = -23;

    t143 = (x585&(x586|(x587%x588)));

    if (t143 != 61LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x589 = INT32_MAX;
	int8_t x590 = INT8_MAX;
	uint8_t x591 = 1U;
	int64_t x592 = INT64_MAX;

    t144 = (x589&(x590|(x591%x592)));

    if (t144 != 127LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x593 = -7LL;
	uint32_t x594 = 4U;
	int32_t x595 = INT32_MAX;
	int16_t x596 = INT16_MIN;
	volatile int64_t t145 = -54441LL;

    t145 = (x593&(x594|(x595%x596)));

    if (t145 != 32761LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x597 = -1;
	static uint64_t x598 = 656LLU;
	int16_t x599 = INT16_MIN;
	static volatile uint64_t x600 = UINT64_MAX;
	uint64_t t146 = 4239701895162LLU;

    t146 = (x597&(x598|(x599%x600)));

    if (t146 != 18446744073709519504LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x601 = INT32_MIN;
	int32_t x602 = -824244;
	int32_t t147 = INT32_MIN;

    t147 = (x601&(x602|(x603%x604)));

    if (t147 != INT32_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x605 = INT64_MIN;
	volatile int32_t x606 = -1;
	volatile int16_t x607 = INT16_MIN;
	int64_t x608 = INT64_MIN;
	int64_t t148 = INT64_MIN;

    t148 = (x605&(x606|(x607%x608)));

    if (t148 != INT64_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x610 = -257545;
	static uint8_t x612 = 7U;

    t149 = (x609&(x610|(x611%x612)));

    if (t149 != -257545LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x613 = 7U;
	volatile int16_t x614 = 0;
	int16_t x615 = -28;
	int64_t x616 = -4017030523230153596LL;
	int64_t t150 = 580LL;

    t150 = (x613&(x614|(x615%x616)));

    if (t150 != 4LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x618 = -1;
	int8_t x619 = -1;
	int64_t t151 = INT64_MAX;

    t151 = (x617&(x618|(x619%x620)));

    if (t151 != INT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x621 = 44584U;
	int64_t x622 = -1LL;
	int32_t x623 = 10537;
	volatile int8_t x624 = -1;

    t152 = (x621&(x622|(x623%x624)));

    if (t152 != 44584LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x625 = UINT16_MAX;
	int32_t x626 = INT32_MIN;
	int32_t x627 = -1;
	volatile uint64_t x628 = 30888379455833LLU;
	uint64_t t153 = 360060827977LLU;

    t153 = (x625&(x626|(x627%x628)));

    if (t153 != 5017LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x629 = INT32_MAX;
	int16_t x631 = INT16_MIN;
	uint64_t x632 = 62746458900650485LLU;
	volatile uint64_t t154 = 31407549748637427LLU;

    t154 = (x629&(x630|(x631%x632)));

    if (t154 != 2147483647LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x633 = 31;
	volatile uint16_t x634 = 508U;
	static int32_t x635 = 877849;
	volatile int64_t x636 = INT64_MIN;
	volatile int64_t t155 = 8378022LL;

    t155 = (x633&(x634|(x635%x636)));

    if (t155 != 29LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x637 = 2;
	static uint8_t x639 = UINT8_MAX;
	int8_t x640 = -1;
	int64_t t156 = -88LL;

    t156 = (x637&(x638|(x639%x640)));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x641 = UINT32_MAX;
	static uint64_t x643 = 8161248757352LLU;
	int64_t x644 = -1LL;
	uint64_t t157 = 368975LLU;

    t157 = (x641&(x642|(x643%x644)));

    if (t157 != 905400044LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x645 = INT64_MIN;
	int8_t x646 = -1;
	int8_t x647 = INT8_MIN;
	static int64_t x648 = INT64_MAX;
	volatile int64_t t158 = INT64_MIN;

    t158 = (x645&(x646|(x647%x648)));

    if (t158 != INT64_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x649 = INT32_MAX;
	static int64_t x650 = 3477090325747743LL;
	volatile uint64_t x651 = 62118456558LLU;
	int16_t x652 = 8364;
	uint64_t t159 = 1893889144LLU;

    t159 = (x649&(x650|(x651%x652)));

    if (t159 != 767024127LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x654 = INT16_MIN;
	int64_t x655 = INT64_MIN;
	int64_t x656 = INT64_MIN;
	int64_t t160 = 3574463591LL;

    t160 = (x653&(x654|(x655%x656)));

    if (t160 != -32768LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x657 = INT32_MIN;
	volatile uint64_t x658 = 29611637LLU;
	uint16_t x659 = UINT16_MAX;
	static uint64_t t161 = 10681556LLU;

    t161 = (x657&(x658|(x659%x660)));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x662 = 1013U;
	static int32_t x663 = INT32_MIN;
	static int8_t x664 = -1;
	volatile int32_t t162 = -12430;

    t162 = (x661&(x662|(x663%x664)));

    if (t162 != 1013) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x665 = 2U;
	int16_t x666 = INT16_MIN;
	uint64_t x667 = 187153157250010266LLU;
	static int8_t x668 = INT8_MAX;
	static uint64_t t163 = 25824688047446LLU;

    t163 = (x665&(x666|(x667%x668)));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x669 = 3439809;
	int16_t x671 = -8;
	uint32_t x672 = 72726U;
	static volatile uint32_t t164 = 34714915U;

    t164 = (x669&(x670|(x671%x672)));

    if (t164 != 27840U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x673 = INT8_MIN;
	uint32_t x674 = 3497U;
	volatile int8_t x675 = -1;
	int32_t x676 = -9;
	static volatile uint32_t t165 = 292U;

    t165 = (x673&(x674|(x675%x676)));

    if (t165 != 4294967168U) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x677 = INT32_MAX;
	int8_t x678 = -1;
	uint64_t x679 = 20516949606LLU;
	static int64_t x680 = 14302975312177LL;
	static volatile uint64_t t166 = 7572004331LLU;

    t166 = (x677&(x678|(x679%x680)));

    if (t166 != 2147483647LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x681 = -1;
	int16_t x682 = INT16_MAX;
	uint16_t x683 = 2U;
	static int32_t x684 = INT32_MIN;
	volatile int32_t t167 = -133377;

    t167 = (x681&(x682|(x683%x684)));

    if (t167 != 32767) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x686 = INT8_MIN;
	int8_t x687 = 44;
	int64_t x688 = -1LL;
	int64_t t168 = 2055508556773LL;

    t168 = (x685&(x686|(x687%x688)));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x689 = INT32_MIN;
	uint64_t x690 = 855735LLU;
	volatile uint32_t x691 = 0U;
	volatile int32_t x692 = INT32_MAX;
	uint64_t t169 = 34303LLU;

    t169 = (x689&(x690|(x691%x692)));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x693 = 254020LL;
	volatile int32_t x694 = INT32_MIN;
	volatile int8_t x696 = INT8_MAX;
	uint64_t t170 = 57190576LLU;

    t170 = (x693&(x694|(x695%x696)));

    if (t170 != 4LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x697 = INT64_MIN;
	volatile int16_t x698 = INT16_MIN;
	static int32_t x699 = INT32_MIN;
	volatile uint32_t x700 = UINT32_MAX;
	volatile int64_t t171 = 1016LL;

    t171 = (x697&(x698|(x699%x700)));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x702 = -242;
	static uint16_t x703 = 6U;
	static int64_t x704 = INT64_MIN;
	uint64_t t172 = 8859768618948871LLU;

    t172 = (x701&(x702|(x703%x704)));

    if (t172 != 23760744035913984LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x705 = -3;
	int32_t x706 = INT32_MIN;
	volatile int64_t x707 = -13412421LL;

    t173 = (x705&(x706|(x707%x708)));

    if (t173 != -2147483648LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x709 = UINT32_MAX;
	uint32_t x710 = UINT32_MAX;
	int32_t x712 = INT32_MIN;
	uint32_t t174 = UINT32_MAX;

    t174 = (x709&(x710|(x711%x712)));

    if (t174 != UINT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x713 = INT16_MIN;
	uint16_t x714 = 5U;
	int16_t x715 = INT16_MIN;
	uint8_t x716 = 109U;
	static int32_t t175 = -2136;

    t175 = (x713&(x714|(x715%x716)));

    if (t175 != -32768) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x717 = INT64_MAX;
	volatile uint8_t x718 = 6U;
	static int32_t x719 = -728051482;
	volatile int64_t t176 = -479149947286048LL;

    t176 = (x717&(x718|(x719%x720)));

    if (t176 != 6LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x721 = 2U;
	int16_t x722 = INT16_MAX;
	int64_t x723 = 164128LL;
	int64_t x724 = INT64_MAX;
	int64_t t177 = 30274342893LL;

    t177 = (x721&(x722|(x723%x724)));

    if (t177 != 2LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x725 = INT8_MIN;
	static volatile uint8_t x726 = 0U;
	int8_t x727 = INT8_MAX;

    t178 = (x725&(x726|(x727%x728)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x729 = INT32_MIN;
	uint32_t x730 = 61437692U;
	uint16_t x732 = 86U;
	volatile uint32_t t179 = 59316757U;

    t179 = (x729&(x730|(x731%x732)));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x734 = -54644789LL;
	int64_t x735 = INT64_MIN;
	volatile int8_t x736 = INT8_MIN;
	int64_t t180 = -12155425LL;

    t180 = (x733&(x734|(x735%x736)));

    if (t180 != 12235LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x737 = -1;
	int16_t x739 = INT16_MAX;
	int16_t x740 = INT16_MIN;
	int32_t t181 = 5;

    t181 = (x737&(x738|(x739%x740)));

    if (t181 != 32767) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x741 = UINT64_MAX;
	int32_t x742 = -1;
	static uint8_t x743 = UINT8_MAX;
	volatile int8_t x744 = 1;
	volatile uint64_t t182 = UINT64_MAX;

    t182 = (x741&(x742|(x743%x744)));

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x745 = UINT32_MAX;
	int16_t x746 = INT16_MIN;
	static int64_t x747 = INT64_MAX;
	volatile int64_t t183 = -205998136746381LL;

    t183 = (x745&(x746|(x747%x748)));

    if (t183 != 4294934655LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x749 = UINT8_MAX;
	volatile uint8_t x750 = 0U;
	uint32_t x751 = 12257668U;
	uint8_t x752 = 60U;
	uint32_t t184 = 11U;

    t184 = (x749&(x750|(x751%x752)));

    if (t184 != 28U) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x754 = 55571728U;
	int64_t x755 = -123626238702836LL;
	int32_t x756 = 5120;

    t185 = (x753&(x754|(x755%x756)));

    if (t185 != 30492LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x757 = INT8_MIN;
	int16_t x758 = -1;
	static int64_t x759 = INT64_MAX;
	int16_t x760 = INT16_MIN;
	int64_t t186 = 1038340853LL;

    t186 = (x757&(x758|(x759%x760)));

    if (t186 != -128LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x761 = INT32_MIN;
	int16_t x762 = -1;
	int64_t x763 = INT64_MIN;
	int32_t x764 = -12624;

    t187 = (x761&(x762|(x763%x764)));

    if (t187 != -2147483648LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x766 = -1;
	volatile uint32_t x767 = 91995084U;
	uint64_t x768 = UINT64_MAX;
	volatile uint64_t t188 = 260107059868095LLU;

    t188 = (x765&(x766|(x767%x768)));

    if (t188 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x769 = INT16_MAX;
	uint16_t x770 = 1497U;
	int32_t x771 = INT32_MIN;
	static volatile uint64_t t189 = 3058322442524169LLU;

    t189 = (x769&(x770|(x771%x772)));

    if (t189 != 26105LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x773 = -1LL;
	int32_t x774 = INT32_MAX;
	uint8_t x775 = 3U;
	int16_t x776 = INT16_MIN;

    t190 = (x773&(x774|(x775%x776)));

    if (t190 != 2147483647LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x777 = 101856109855591153LLU;
	volatile int64_t x780 = INT64_MIN;
	uint64_t t191 = 8LLU;

    t191 = (x777&(x778|(x779%x780)));

    if (t191 != 101856109855591153LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x781 = -1;
	int8_t x782 = 0;
	uint16_t x784 = 18U;
	volatile int32_t t192 = 495;

    t192 = (x781&(x782|(x783%x784)));

    if (t192 != -2) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x785 = -1;
	uint32_t x786 = 113943695U;
	int32_t x787 = INT32_MIN;
	volatile uint32_t x788 = UINT32_MAX;
	static uint32_t t193 = 552649056U;

    t193 = (x785&(x786|(x787%x788)));

    if (t193 != 2261427343U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x789 = 303;
	volatile int8_t x790 = 3;
	int64_t x791 = INT64_MAX;
	uint16_t x792 = UINT16_MAX;
	int64_t t194 = 1954517458647LL;

    t194 = (x789&(x790|(x791%x792)));

    if (t194 != 303LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x793 = -1;
	int8_t x794 = INT8_MIN;
	static int8_t x795 = INT8_MIN;
	int32_t x796 = -255216;
	volatile int32_t t195 = 32;

    t195 = (x793&(x794|(x795%x796)));

    if (t195 != -128) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x797 = 183392488542LL;
	static int64_t x799 = INT64_MAX;
	int16_t x800 = INT16_MIN;
	volatile int64_t t196 = 9282LL;

    t196 = (x797&(x798|(x799%x800)));

    if (t196 != 19550LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x802 = -1;
	int8_t x803 = INT8_MIN;
	int8_t x804 = INT8_MIN;
	volatile int32_t t197 = -839;

    t197 = (x801&(x802|(x803%x804)));

    if (t197 != -128) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x805 = 24553U;
	int16_t x806 = -111;
	int32_t x807 = -129818;
	int32_t t198 = 258464;

    t198 = (x805&(x806|(x807%x808)));

    if (t198 != 24545) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x809 = -6669;
	int32_t x810 = INT32_MAX;
	int32_t x811 = -1;
	int64_t x812 = INT64_MIN;
	volatile int64_t t199 = 1015LL;

    t199 = (x809&(x810|(x811%x812)));

    if (t199 != -6669LL) { NG(); } else { ; }
	
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


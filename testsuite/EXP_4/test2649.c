
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

static volatile int64_t x1 = INT64_MIN;
int8_t x23 = -1;
int64_t x34 = -1LL;
volatile int64_t x36 = -3164620LL;
int64_t x38 = INT64_MIN;
static volatile int16_t x43 = -1;
uint32_t x45 = UINT32_MAX;
uint8_t x49 = UINT8_MAX;
volatile int8_t x58 = -1;
static volatile uint64_t x62 = UINT64_MAX;
int64_t x64 = INT64_MIN;
int8_t x65 = -1;
static volatile int32_t t16 = 156872724;
static int64_t x70 = INT64_MAX;
int32_t t17 = -661;
uint64_t x86 = UINT64_MAX;
volatile uint16_t x91 = 20U;
int64_t x93 = -1751LL;
static int64_t x94 = INT64_MAX;
int16_t x95 = INT16_MAX;
int64_t t23 = 251436151884LL;
static volatile int32_t t25 = 409;
static int32_t x111 = 19946;
static int64_t x115 = INT64_MIN;
volatile uint64_t x120 = 996LLU;
uint16_t x127 = 0U;
int8_t x130 = -1;
static uint32_t x135 = 14576U;
static int32_t x149 = 1655;
static uint16_t x154 = UINT16_MAX;
int64_t x156 = -1LL;
int64_t x157 = -1LL;
int8_t x162 = INT8_MAX;
volatile int32_t x164 = INT32_MIN;
int8_t x165 = INT8_MAX;
static int64_t x167 = INT64_MIN;
volatile int32_t t41 = -432218117;
int32_t x171 = -1;
int64_t x174 = INT64_MIN;
static volatile uint16_t x183 = UINT16_MAX;
uint16_t x185 = 215U;
volatile int32_t t46 = -3117899;
static volatile uint64_t x197 = 488LLU;
volatile int64_t x198 = INT64_MIN;
int16_t x205 = -1673;
int32_t x207 = 271888791;
volatile int32_t t51 = -845179;
volatile int64_t x211 = -1LL;
volatile uint8_t x229 = 3U;
volatile int32_t t57 = -28989;
volatile uint16_t x233 = 5877U;
static uint64_t x238 = UINT64_MAX;
int64_t t59 = -3LL;
int16_t x248 = INT16_MIN;
uint16_t x249 = 1786U;
static int64_t x252 = -1LL;
int32_t t62 = -121486163;
static uint16_t x257 = 5331U;
uint8_t x267 = 35U;
volatile uint64_t t66 = 3604056868932LLU;
int8_t x271 = -1;
int64_t x272 = -1LL;
static volatile int8_t x274 = INT8_MAX;
int8_t x282 = INT8_MIN;
static uint64_t x285 = 61LLU;
static int8_t x286 = INT8_MAX;
uint64_t t71 = 1731627960530282LLU;
int8_t x293 = INT8_MIN;
int16_t x294 = -1;
uint8_t x299 = 5U;
static int32_t t76 = -16812865;
volatile int16_t x311 = INT16_MAX;
uint32_t x313 = 800848U;
volatile int8_t x315 = INT8_MIN;
static int16_t x316 = INT16_MIN;
int8_t x322 = -1;
volatile int32_t t81 = 0;
volatile int32_t x333 = INT32_MAX;
uint8_t x336 = 42U;
int8_t x341 = -1;
int32_t x342 = INT32_MIN;
static volatile int64_t x343 = -24483LL;
volatile int32_t t85 = -2934;
volatile uint64_t x345 = 306949057518LLU;
volatile int16_t x349 = INT16_MIN;
int16_t x350 = -12;
uint8_t x356 = 6U;
volatile int32_t t88 = 36;
int16_t x357 = INT16_MIN;
static int16_t x358 = INT16_MIN;
static int8_t x367 = INT8_MIN;
uint32_t x385 = 2273U;
int16_t x387 = -1;
uint32_t x389 = 56665406U;
int8_t x393 = INT8_MIN;
int32_t t101 = -55532445;
volatile int32_t t102 = -6183383;
int32_t t106 = -2;
volatile int64_t x433 = INT64_MAX;
uint64_t x441 = 71561655726553860LLU;
uint32_t x442 = 36U;
int32_t x443 = INT32_MIN;
uint64_t t110 = 12316564449084LLU;
int8_t x445 = INT8_MIN;
static int32_t x448 = INT32_MAX;
int64_t x452 = -1LL;
uint8_t x455 = 0U;
uint16_t x459 = UINT16_MAX;
int8_t x460 = -1;
int16_t x468 = -1;
volatile int32_t x474 = -1;
int8_t x476 = INT8_MIN;
int32_t x478 = -2449;
volatile uint8_t x480 = 26U;
int64_t x481 = -15385548189LL;
int16_t x482 = -1;
int16_t x485 = -1;
uint16_t x489 = UINT16_MAX;
int64_t x491 = INT64_MIN;
volatile int32_t t124 = 25096727;
volatile int8_t x514 = INT8_MAX;
int8_t x517 = -1;
int32_t t129 = 11;
int32_t x525 = -1;
volatile int8_t x538 = -1;
int16_t x539 = INT16_MIN;
volatile uint64_t x551 = 25715LLU;
int16_t x552 = INT16_MIN;
int64_t x557 = -1LL;
static uint64_t x563 = 1002907997LLU;
static volatile int32_t t140 = 140;
static int32_t t142 = 25536616;
int32_t x574 = -100437045;
int16_t x575 = -1;
uint64_t t143 = 15110739577LLU;
uint16_t x577 = 84U;
int64_t x582 = INT64_MAX;
int64_t x585 = -1LL;
volatile int8_t x588 = -1;
int64_t t146 = 434899430798273LL;
static int32_t x589 = INT32_MAX;
int32_t x594 = -1;
volatile int8_t x596 = -1;
volatile int64_t t150 = 443065LL;
static volatile int32_t x606 = INT32_MIN;
volatile int32_t x615 = INT32_MAX;
int64_t x617 = -922LL;
int64_t x621 = INT64_MIN;
volatile int64_t t155 = 3039293LL;
volatile uint64_t x627 = 71LLU;
int8_t x632 = INT8_MAX;
int8_t x637 = -1;
volatile int32_t t160 = 475859271;
int32_t t161 = -154;
volatile int8_t x656 = -1;
int32_t t164 = 11096;
int16_t x663 = -10673;
volatile uint64_t x664 = 1434357673LLU;
int64_t x665 = -1LL;
uint16_t x669 = UINT16_MAX;
int8_t x671 = INT8_MAX;
int8_t x674 = INT8_MIN;
static volatile uint64_t x687 = 11554510495LLU;
static int64_t x690 = INT64_MIN;
volatile uint16_t x692 = UINT16_MAX;
volatile int32_t x696 = -17;
static int64_t x697 = 4366416634001LL;
int8_t x698 = 0;
int16_t x699 = INT16_MAX;
int64_t x700 = 109380859763LL;
uint16_t x703 = UINT16_MAX;
int32_t t175 = -1230448;
volatile int64_t x705 = 51312747LL;
int32_t x710 = -1;
uint32_t t177 = 498483U;
volatile int16_t x714 = -1;
int32_t x715 = INT32_MIN;
volatile int32_t x720 = 73527;
int32_t x722 = -1;
static uint32_t x735 = UINT32_MAX;
volatile uint16_t x741 = 73U;
static int8_t x747 = -11;
int32_t t187 = -7633893;
uint16_t x755 = 2209U;
static uint32_t x756 = 55648U;
uint8_t x759 = 2U;
int32_t t189 = -2301;
static int8_t x770 = INT8_MIN;
static volatile int64_t x771 = -1LL;
int64_t x774 = INT64_MAX;
volatile int32_t t194 = -1;
static int16_t x785 = 3190;
uint16_t x786 = 18U;
int16_t x789 = 1;
int32_t x794 = -1;
int64_t t198 = -1166345539466931205LL;


void f0(void) {
    	int16_t x2 = -1;
	static volatile int32_t x3 = 130388;
	int8_t x4 = -1;
	static int64_t t0 = 612LL;

    t0 = (x1*(x2==(x3^x4)));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	uint16_t x6 = 372U;
	uint16_t x7 = 14U;
	int32_t x8 = 102062;
	static int64_t t1 = 2054846348541324LL;

    t1 = (x5*(x6==(x7^x8)));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = 12;
	static uint32_t x10 = 27U;
	static volatile int8_t x11 = -30;
	uint16_t x12 = 121U;
	int32_t t2 = 17689183;

    t2 = (x9*(x10==(x11^x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = INT16_MIN;
	int16_t x14 = INT16_MIN;
	int16_t x15 = -1;
	int32_t x16 = INT32_MAX;
	int32_t t3 = 995530637;

    t3 = (x13*(x14==(x15^x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = INT8_MIN;
	int32_t x18 = INT32_MIN;
	int32_t x19 = INT32_MAX;
	int8_t x20 = -15;
	int32_t t4 = -422308;

    t4 = (x17*(x18==(x19^x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x21 = UINT16_MAX;
	int32_t x22 = -912450;
	int32_t x24 = 436778900;
	static volatile int32_t t5 = -154;

    t5 = (x21*(x22==(x23^x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 28373LLU;
	static int64_t x26 = 6458004182029LL;
	static volatile uint16_t x27 = 11U;
	volatile int64_t x28 = INT64_MIN;
	uint64_t t6 = 159076954199870842LLU;

    t6 = (x25*(x26==(x27^x28)));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x29 = 38U;
	volatile uint64_t x30 = 596172730603012989LLU;
	int32_t x31 = -304;
	static volatile int8_t x32 = INT8_MAX;
	volatile int32_t t7 = -1;

    t7 = (x29*(x30==(x31^x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MAX;
	uint8_t x35 = 54U;
	volatile int32_t t8 = -646;

    t8 = (x33*(x34==(x35^x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	int64_t x39 = INT64_MIN;
	static int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 7324154;

    t9 = (x37*(x38==(x39^x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 15309272U;
	int16_t x42 = INT16_MIN;
	volatile int32_t x44 = 948;
	volatile uint32_t t10 = 186421607U;

    t10 = (x41*(x42==(x43^x44)));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x46 = -102736028692432LL;
	volatile int32_t x47 = -1;
	volatile uint64_t x48 = 37027LLU;
	volatile uint32_t t11 = 13272183U;

    t11 = (x45*(x46==(x47^x48)));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x50 = 59U;
	static volatile uint8_t x51 = UINT8_MAX;
	uint16_t x52 = 1U;
	volatile int32_t t12 = 45;

    t12 = (x49*(x50==(x51^x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	uint64_t x54 = UINT64_MAX;
	uint32_t x55 = 2401176U;
	int16_t x56 = INT16_MIN;
	int64_t t13 = -196LL;

    t13 = (x53*(x54==(x55^x56)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = INT8_MIN;
	uint8_t x59 = 41U;
	int32_t x60 = INT32_MAX;
	int32_t t14 = 1;

    t14 = (x57*(x58==(x59^x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -1LL;
	static uint8_t x63 = 6U;
	static volatile int64_t t15 = 282055098LL;

    t15 = (x61*(x62==(x63^x64)));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x66 = INT16_MAX;
	volatile uint32_t x67 = 0U;
	volatile uint8_t x68 = UINT8_MAX;

    t16 = (x65*(x66==(x67^x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = 16019;
	int16_t x71 = INT16_MAX;
	static int64_t x72 = -2713584774823658LL;

    t17 = (x69*(x70==(x71^x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x73 = UINT8_MAX;
	volatile int16_t x74 = -1;
	int64_t x75 = INT64_MIN;
	int64_t x76 = 152229981695669LL;
	int32_t t18 = 119930;

    t18 = (x73*(x74==(x75^x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MAX;
	int8_t x78 = 0;
	int8_t x79 = INT8_MIN;
	int64_t x80 = INT64_MIN;
	volatile int32_t t19 = -410;

    t19 = (x77*(x78==(x79^x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -1;
	int8_t x82 = 8;
	uint64_t x83 = 12LLU;
	volatile int16_t x84 = INT16_MIN;
	int32_t t20 = 1;

    t20 = (x81*(x82==(x83^x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x85 = INT32_MIN;
	static int32_t x87 = 21;
	static int8_t x88 = INT8_MAX;
	volatile int32_t t21 = -8725;

    t21 = (x85*(x86==(x87^x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 19U;
	uint8_t x90 = 27U;
	int16_t x92 = -1;
	int32_t t22 = -43;

    t22 = (x89*(x90==(x91^x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x96 = INT8_MAX;

    t23 = (x93*(x94==(x95^x96)));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x97 = 52;
	volatile int8_t x98 = -1;
	int64_t x99 = INT64_MAX;
	volatile int64_t x100 = INT64_MIN;
	static int32_t t24 = 13029;

    t24 = (x97*(x98==(x99^x100)));

    if (t24 != 52) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int8_t x101 = 16;
	static uint32_t x102 = UINT32_MAX;
	volatile int32_t x103 = -231240;
	static uint8_t x104 = 14U;

    t25 = (x101*(x102==(x103^x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x105 = INT32_MIN;
	uint64_t x106 = 17219799LLU;
	int64_t x107 = -897460468195LL;
	uint32_t x108 = 39270664U;
	static volatile int32_t t26 = 0;

    t26 = (x105*(x106==(x107^x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	int64_t x110 = INT64_MIN;
	volatile int64_t x112 = 30639532387LL;
	int32_t t27 = -7977015;

    t27 = (x109*(x110==(x111^x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int16_t x113 = INT16_MIN;
	int16_t x114 = INT16_MAX;
	int32_t x116 = INT32_MAX;
	int32_t t28 = 2729;

    t28 = (x113*(x114==(x115^x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x117 = UINT32_MAX;
	static volatile uint64_t x118 = 76107527839LLU;
	volatile int64_t x119 = -398050LL;
	static uint32_t t29 = 1119524U;

    t29 = (x117*(x118==(x119^x120)));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x121 = 15;
	volatile int8_t x122 = INT8_MAX;
	int8_t x123 = -1;
	int8_t x124 = -1;
	static volatile int32_t t30 = 0;

    t30 = (x121*(x122==(x123^x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x125 = 594U;
	static int8_t x126 = INT8_MAX;
	uint8_t x128 = 52U;
	uint32_t t31 = 73U;

    t31 = (x125*(x126==(x127^x128)));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = INT16_MIN;
	int16_t x131 = -1;
	int64_t x132 = INT64_MAX;
	volatile int32_t t32 = -1926;

    t32 = (x129*(x130==(x131^x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = 245774789301364LLU;
	int64_t x134 = INT64_MAX;
	volatile uint8_t x136 = 1U;
	uint64_t t33 = 334811255458996477LLU;

    t33 = (x133*(x134==(x135^x136)));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = 1U;
	uint64_t x138 = UINT64_MAX;
	int16_t x139 = INT16_MIN;
	int8_t x140 = -1;
	static volatile int32_t t34 = -2889083;

    t34 = (x137*(x138==(x139^x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x141 = INT8_MAX;
	int16_t x142 = 1;
	uint64_t x143 = 31076872240679928LLU;
	uint64_t x144 = UINT64_MAX;
	int32_t t35 = 8;

    t35 = (x141*(x142==(x143^x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x145 = UINT32_MAX;
	int8_t x146 = INT8_MAX;
	int16_t x147 = -1;
	int64_t x148 = -7668490132LL;
	uint32_t t36 = 280419073U;

    t36 = (x145*(x146==(x147^x148)));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x150 = 3762849U;
	static uint32_t x151 = 28670553U;
	uint32_t x152 = UINT32_MAX;
	volatile int32_t t37 = 0;

    t37 = (x149*(x150==(x151^x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x153 = INT8_MIN;
	uint32_t x155 = 4U;
	static int32_t t38 = -1048;

    t38 = (x153*(x154==(x155^x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x158 = 290LL;
	uint8_t x159 = 44U;
	uint16_t x160 = UINT16_MAX;
	int64_t t39 = 700048235054028670LL;

    t39 = (x157*(x158==(x159^x160)));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x161 = -1LL;
	uint16_t x163 = 25363U;
	static int64_t t40 = 17367513434987LL;

    t40 = (x161*(x162==(x163^x164)));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x166 = -1;
	static uint16_t x168 = 130U;

    t41 = (x165*(x166==(x167^x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = -1;
	volatile int32_t x170 = INT32_MIN;
	int8_t x172 = -1;
	int32_t t42 = 99450;

    t42 = (x169*(x170==(x171^x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 15U;
	int64_t x175 = -1LL;
	int32_t x176 = 222;
	volatile int32_t t43 = 8703114;

    t43 = (x173*(x174==(x175^x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = 444258875051018LL;
	int16_t x178 = INT16_MIN;
	volatile uint32_t x179 = 4336U;
	uint32_t x180 = 444U;
	volatile int64_t t44 = 101760609LL;

    t44 = (x177*(x178==(x179^x180)));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x181 = INT32_MIN;
	static int32_t x182 = 14;
	int64_t x184 = INT64_MIN;
	int32_t t45 = 108411264;

    t45 = (x181*(x182==(x183^x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x186 = -14;
	int8_t x187 = -1;
	volatile int64_t x188 = INT64_MIN;

    t46 = (x185*(x186==(x187^x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MIN;
	volatile int8_t x190 = -1;
	static int32_t x191 = -127191700;
	uint8_t x192 = 0U;
	volatile int32_t t47 = 10984;

    t47 = (x189*(x190==(x191^x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int16_t x193 = -1;
	volatile int8_t x194 = -3;
	int16_t x195 = INT16_MAX;
	static uint32_t x196 = 2622232U;
	int32_t t48 = -827841;

    t48 = (x193*(x194==(x195^x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x199 = INT32_MAX;
	uint16_t x200 = 61U;
	volatile uint64_t t49 = 336LLU;

    t49 = (x197*(x198==(x199^x200)));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x201 = INT64_MIN;
	int32_t x202 = INT32_MIN;
	uint64_t x203 = 572244LLU;
	static uint64_t x204 = UINT64_MAX;
	int64_t t50 = 2598423348574918LL;

    t50 = (x201*(x202==(x203^x204)));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x206 = UINT64_MAX;
	static int64_t x208 = -1LL;

    t51 = (x205*(x206==(x207^x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = INT16_MIN;
	int16_t x210 = INT16_MIN;
	uint16_t x212 = 649U;
	volatile int32_t t52 = -12;

    t52 = (x209*(x210==(x211^x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x213 = -1;
	uint64_t x214 = UINT64_MAX;
	int8_t x215 = INT8_MIN;
	int16_t x216 = INT16_MIN;
	volatile int32_t t53 = 659;

    t53 = (x213*(x214==(x215^x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x217 = 3U;
	int64_t x218 = -684985LL;
	int64_t x219 = INT64_MAX;
	static uint8_t x220 = 0U;
	static volatile uint32_t t54 = 100030U;

    t54 = (x217*(x218==(x219^x220)));

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	int64_t x222 = -582LL;
	uint8_t x223 = 25U;
	int32_t x224 = INT32_MIN;
	volatile int32_t t55 = -124800;

    t55 = (x221*(x222==(x223^x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x225 = UINT64_MAX;
	int8_t x226 = -1;
	volatile int32_t x227 = -1;
	int64_t x228 = INT64_MIN;
	uint64_t t56 = 212318693091731408LLU;

    t56 = (x225*(x226==(x227^x228)));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x230 = INT16_MIN;
	uint64_t x231 = UINT64_MAX;
	int64_t x232 = -158938LL;

    t57 = (x229*(x230==(x231^x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x234 = INT16_MIN;
	static uint32_t x235 = 485U;
	uint32_t x236 = UINT32_MAX;
	static int32_t t58 = -763501868;

    t58 = (x233*(x234==(x235^x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MIN;
	int16_t x239 = INT16_MIN;
	int32_t x240 = INT32_MAX;

    t59 = (x237*(x238==(x239^x240)));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MIN;
	static uint16_t x242 = UINT16_MAX;
	int32_t x243 = INT32_MAX;
	int64_t x244 = INT64_MIN;
	int32_t t60 = 17;

    t60 = (x241*(x242==(x243^x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x245 = INT32_MIN;
	volatile uint16_t x246 = UINT16_MAX;
	int32_t x247 = INT32_MAX;
	int32_t t61 = -1540;

    t61 = (x245*(x246==(x247^x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x250 = 826610445852654LL;
	volatile int16_t x251 = INT16_MIN;

    t62 = (x249*(x250==(x251^x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x253 = 205569333085715035LLU;
	int16_t x254 = INT16_MIN;
	int16_t x255 = -7402;
	volatile int32_t x256 = INT32_MIN;
	volatile uint64_t t63 = 46492907844843128LLU;

    t63 = (x253*(x254==(x255^x256)));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x258 = 695559;
	volatile uint64_t x259 = 2012004LLU;
	int8_t x260 = INT8_MIN;
	volatile int32_t t64 = 85888;

    t64 = (x257*(x258==(x259^x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x261 = -5;
	static uint16_t x262 = UINT16_MAX;
	uint32_t x263 = 29755U;
	uint8_t x264 = 46U;
	int32_t t65 = -466;

    t65 = (x261*(x262==(x263^x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 5288385246300LLU;
	static uint32_t x266 = UINT32_MAX;
	int8_t x268 = INT8_MIN;

    t66 = (x265*(x266==(x267^x268)));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = -1LL;
	volatile int32_t x270 = -4989;
	static int64_t t67 = 3687801065422349LL;

    t67 = (x269*(x270==(x271^x272)));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MIN;
	int64_t x275 = 126LL;
	static uint64_t x276 = 7374720479LLU;
	int32_t t68 = -434;

    t68 = (x273*(x274==(x275^x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x277 = 1018LLU;
	volatile int8_t x278 = INT8_MIN;
	static int8_t x279 = INT8_MAX;
	uint32_t x280 = 2U;
	uint64_t t69 = 39604LLU;

    t69 = (x277*(x278==(x279^x280)));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	static uint8_t x283 = 67U;
	uint32_t x284 = 237928451U;
	int32_t t70 = -671979035;

    t70 = (x281*(x282==(x283^x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x287 = 25083LLU;
	uint32_t x288 = UINT32_MAX;

    t71 = (x285*(x286==(x287^x288)));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x289 = 2944189064300558756LL;
	int32_t x290 = INT32_MIN;
	int64_t x291 = -1LL;
	static uint64_t x292 = 357369LLU;
	volatile int64_t t72 = -597LL;

    t72 = (x289*(x290==(x291^x292)));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x295 = INT8_MIN;
	volatile uint32_t x296 = UINT32_MAX;
	int32_t t73 = 120318769;

    t73 = (x293*(x294==(x295^x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x297 = UINT32_MAX;
	int16_t x298 = 3821;
	int32_t x300 = INT32_MAX;
	uint32_t t74 = 2576282U;

    t74 = (x297*(x298==(x299^x300)));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x301 = 793223752248LLU;
	volatile uint32_t x302 = 338306U;
	volatile int16_t x303 = INT16_MIN;
	static int16_t x304 = INT16_MIN;
	volatile uint64_t t75 = 27155831454LLU;

    t75 = (x301*(x302==(x303^x304)));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x305 = INT8_MIN;
	int64_t x306 = 1LL;
	uint32_t x307 = UINT32_MAX;
	int32_t x308 = INT32_MAX;

    t76 = (x305*(x306==(x307^x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = 19U;
	static int64_t x310 = -1LL;
	volatile uint8_t x312 = UINT8_MAX;
	int32_t t77 = 0;

    t77 = (x309*(x310==(x311^x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x314 = INT16_MAX;
	uint32_t t78 = 11009679U;

    t78 = (x313*(x314==(x315^x316)));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MIN;
	volatile int32_t x318 = -1601681;
	uint32_t x319 = 131U;
	uint16_t x320 = 2U;
	static volatile int32_t t79 = 99334384;

    t79 = (x317*(x318==(x319^x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MIN;
	static int16_t x323 = -1579;
	volatile int16_t x324 = INT16_MIN;
	int32_t t80 = -4342900;

    t80 = (x321*(x322==(x323^x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -1;
	int64_t x326 = -101676788431888652LL;
	static volatile int64_t x327 = INT64_MIN;
	volatile int8_t x328 = 14;

    t81 = (x325*(x326==(x327^x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = -4;
	volatile int32_t x330 = INT32_MAX;
	uint16_t x331 = 348U;
	volatile uint64_t x332 = 4958926795688198LLU;
	static volatile int32_t t82 = 897;

    t82 = (x329*(x330==(x331^x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x334 = 10749203U;
	int32_t x335 = 20823304;
	int32_t t83 = -56;

    t83 = (x333*(x334==(x335^x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MIN;
	int8_t x338 = INT8_MIN;
	int32_t x339 = INT32_MAX;
	volatile int8_t x340 = -27;
	static volatile int32_t t84 = 7;

    t84 = (x337*(x338==(x339^x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x344 = INT8_MIN;

    t85 = (x341*(x342==(x343^x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x346 = 8U;
	static uint16_t x347 = 0U;
	uint32_t x348 = 751588582U;
	volatile uint64_t t86 = 8874LLU;

    t86 = (x345*(x346==(x347^x348)));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x351 = 51U;
	volatile int32_t x352 = 171421;
	volatile int32_t t87 = 13534100;

    t87 = (x349*(x350==(x351^x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = -52;
	static int64_t x354 = 73LL;
	int32_t x355 = INT32_MIN;

    t88 = (x353*(x354==(x355^x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x359 = INT32_MAX;
	int32_t x360 = 193;
	volatile int32_t t89 = 3;

    t89 = (x357*(x358==(x359^x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = INT64_MIN;
	static int8_t x362 = INT8_MIN;
	uint32_t x363 = 50U;
	static int16_t x364 = 9;
	int64_t t90 = 2LL;

    t90 = (x361*(x362==(x363^x364)));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x365 = 105U;
	static int16_t x366 = -1;
	uint64_t x368 = UINT64_MAX;
	int32_t t91 = 10832500;

    t91 = (x365*(x366==(x367^x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x369 = UINT16_MAX;
	int16_t x370 = 0;
	static volatile uint16_t x371 = 1U;
	volatile int8_t x372 = INT8_MAX;
	static int32_t t92 = -24662221;

    t92 = (x369*(x370==(x371^x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x373 = INT32_MAX;
	volatile int64_t x374 = INT64_MAX;
	uint8_t x375 = 1U;
	uint32_t x376 = UINT32_MAX;
	volatile int32_t t93 = 89;

    t93 = (x373*(x374==(x375^x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = UINT32_MAX;
	volatile int32_t x378 = INT32_MIN;
	uint16_t x379 = UINT16_MAX;
	volatile uint8_t x380 = 56U;
	volatile uint32_t t94 = 933539U;

    t94 = (x377*(x378==(x379^x380)));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = UINT8_MAX;
	uint16_t x382 = 383U;
	static int8_t x383 = INT8_MAX;
	volatile int32_t x384 = -1;
	int32_t t95 = 1027759;

    t95 = (x381*(x382==(x383^x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x386 = 101184U;
	int8_t x388 = INT8_MIN;
	volatile uint32_t t96 = 77U;

    t96 = (x385*(x386==(x387^x388)));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x390 = 227U;
	volatile int64_t x391 = -1LL;
	int64_t x392 = 48307735209917512LL;
	static volatile uint32_t t97 = 54U;

    t97 = (x389*(x390==(x391^x392)));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x394 = INT16_MIN;
	volatile uint8_t x395 = 1U;
	int16_t x396 = INT16_MIN;
	static int32_t t98 = 0;

    t98 = (x393*(x394==(x395^x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = -7;
	int32_t x398 = INT32_MIN;
	static int8_t x399 = INT8_MAX;
	int64_t x400 = INT64_MIN;
	static volatile int32_t t99 = -796372;

    t99 = (x397*(x398==(x399^x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = 162;
	static volatile int16_t x402 = -1;
	uint16_t x403 = 4U;
	int32_t x404 = INT32_MIN;
	int32_t t100 = 64376673;

    t100 = (x401*(x402==(x403^x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 0U;
	int64_t x406 = 59311883278LL;
	int16_t x407 = -1;
	uint16_t x408 = UINT16_MAX;

    t101 = (x405*(x406==(x407^x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x409 = -1558;
	uint8_t x410 = UINT8_MAX;
	int32_t x411 = INT32_MIN;
	int8_t x412 = INT8_MIN;

    t102 = (x409*(x410==(x411^x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = 72452943U;
	volatile uint64_t x414 = 430LLU;
	int32_t x415 = INT32_MIN;
	uint16_t x416 = UINT16_MAX;
	uint32_t t103 = 1209256386U;

    t103 = (x413*(x414==(x415^x416)));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = 0;
	uint8_t x418 = 4U;
	uint8_t x419 = 1U;
	volatile int64_t x420 = -84111796693LL;
	static volatile int32_t t104 = -220;

    t104 = (x417*(x418==(x419^x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MAX;
	uint64_t x422 = 227917LLU;
	static uint8_t x423 = 0U;
	int8_t x424 = -1;
	volatile int64_t t105 = 76LL;

    t105 = (x421*(x422==(x423^x424)));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = -1;
	int8_t x426 = INT8_MIN;
	uint64_t x427 = UINT64_MAX;
	int8_t x428 = -1;

    t106 = (x425*(x426==(x427^x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = -1;
	volatile int8_t x430 = INT8_MIN;
	int8_t x431 = INT8_MAX;
	int8_t x432 = -34;
	volatile int32_t t107 = 169;

    t107 = (x429*(x430==(x431^x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x434 = INT64_MIN;
	int8_t x435 = INT8_MAX;
	uint8_t x436 = UINT8_MAX;
	volatile int64_t t108 = -11735405433LL;

    t108 = (x433*(x434==(x435^x436)));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = -1;
	uint8_t x438 = UINT8_MAX;
	int32_t x439 = INT32_MIN;
	int16_t x440 = INT16_MAX;
	volatile int32_t t109 = -536487015;

    t109 = (x437*(x438==(x439^x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int64_t x444 = INT64_MIN;

    t110 = (x441*(x442==(x443^x444)));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x446 = INT32_MIN;
	uint16_t x447 = 0U;
	volatile int32_t t111 = 6;

    t111 = (x445*(x446==(x447^x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = -1;
	volatile uint8_t x450 = UINT8_MAX;
	int16_t x451 = INT16_MAX;
	volatile int32_t t112 = 67284;

    t112 = (x449*(x450==(x451^x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int8_t x453 = -1;
	int32_t x454 = INT32_MAX;
	static int64_t x456 = INT64_MIN;
	int32_t t113 = 139;

    t113 = (x453*(x454==(x455^x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = -172460;
	uint16_t x458 = 1U;
	static int32_t t114 = 5;

    t114 = (x457*(x458==(x459^x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x461 = 42U;
	static int16_t x462 = 1;
	int32_t x463 = -1;
	uint64_t x464 = UINT64_MAX;
	int32_t t115 = 216885596;

    t115 = (x461*(x462==(x463^x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -1;
	int16_t x466 = -28;
	uint8_t x467 = UINT8_MAX;
	int32_t t116 = -804261535;

    t116 = (x465*(x466==(x467^x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x469 = -45;
	uint64_t x470 = UINT64_MAX;
	int32_t x471 = -1;
	uint16_t x472 = 34U;
	volatile int32_t t117 = -13;

    t117 = (x469*(x470==(x471^x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -3242;
	int8_t x475 = -1;
	volatile int32_t t118 = -63;

    t118 = (x473*(x474==(x475^x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = -5;
	uint16_t x479 = 9669U;
	volatile int32_t t119 = 1;

    t119 = (x477*(x478==(x479^x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x483 = -1;
	uint16_t x484 = UINT16_MAX;
	int64_t t120 = -435386062LL;

    t120 = (x481*(x482==(x483^x484)));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x486 = INT32_MAX;
	int32_t x487 = INT32_MAX;
	int32_t x488 = INT32_MIN;
	int32_t t121 = -3;

    t121 = (x485*(x486==(x487^x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x490 = -1146;
	int32_t x492 = INT32_MAX;
	static int32_t t122 = 3196820;

    t122 = (x489*(x490==(x491^x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x493 = INT16_MAX;
	int16_t x494 = -31;
	int16_t x495 = INT16_MIN;
	uint64_t x496 = 25359586257206030LLU;
	int32_t t123 = -4;

    t123 = (x493*(x494==(x495^x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = 0;
	int32_t x498 = INT32_MIN;
	int32_t x499 = -4951;
	int64_t x500 = INT64_MAX;

    t124 = (x497*(x498==(x499^x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x501 = -1;
	int64_t x502 = INT64_MIN;
	int8_t x503 = INT8_MIN;
	static volatile int16_t x504 = INT16_MIN;
	volatile int32_t t125 = -321202;

    t125 = (x501*(x502==(x503^x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x505 = 3916826U;
	int16_t x506 = -2453;
	uint16_t x507 = 1U;
	int8_t x508 = -48;
	uint32_t t126 = 250617U;

    t126 = (x505*(x506==(x507^x508)));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x509 = -1;
	static volatile uint16_t x510 = 8407U;
	int16_t x511 = -1;
	int32_t x512 = 1;
	volatile int32_t t127 = -448247761;

    t127 = (x509*(x510==(x511^x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = -1;
	uint32_t x515 = 51657U;
	int64_t x516 = -922302412241070LL;
	static int32_t t128 = 1;

    t128 = (x513*(x514==(x515^x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x518 = INT16_MIN;
	volatile int64_t x519 = INT64_MAX;
	int64_t x520 = INT64_MIN;

    t129 = (x517*(x518==(x519^x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MIN;
	uint32_t x522 = UINT32_MAX;
	int8_t x523 = INT8_MIN;
	uint8_t x524 = 3U;
	volatile int32_t t130 = -3;

    t130 = (x521*(x522==(x523^x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x526 = INT16_MAX;
	int32_t x527 = INT32_MAX;
	volatile int32_t x528 = INT32_MIN;
	volatile int32_t t131 = 36;

    t131 = (x525*(x526==(x527^x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MIN;
	int32_t x530 = -19596473;
	int64_t x531 = INT64_MAX;
	int8_t x532 = INT8_MIN;
	int32_t t132 = 84;

    t132 = (x529*(x530==(x531^x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x533 = 7U;
	int64_t x534 = INT64_MIN;
	int64_t x535 = 883LL;
	int32_t x536 = 5;
	volatile int32_t t133 = -10180;

    t133 = (x533*(x534==(x535^x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 33289655478108LLU;
	int8_t x540 = -1;
	uint64_t t134 = 7893961816LLU;

    t134 = (x537*(x538==(x539^x540)));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = -1;
	static int32_t x542 = INT32_MIN;
	static int64_t x543 = INT64_MAX;
	int8_t x544 = INT8_MIN;
	static int32_t t135 = 136327;

    t135 = (x541*(x542==(x543^x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x545 = 1U;
	int32_t x546 = 59;
	static volatile int64_t x547 = INT64_MIN;
	int16_t x548 = -2;
	volatile uint32_t t136 = 7019U;

    t136 = (x545*(x546==(x547^x548)));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MAX;
	int32_t x550 = INT32_MIN;
	volatile int32_t t137 = 3;

    t137 = (x549*(x550==(x551^x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MAX;
	int64_t x554 = INT64_MIN;
	int32_t x555 = -6376;
	uint16_t x556 = 2U;
	volatile int64_t t138 = -105LL;

    t138 = (x553*(x554==(x555^x556)));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x558 = INT64_MIN;
	volatile int16_t x559 = INT16_MIN;
	int32_t x560 = INT32_MAX;
	volatile int64_t t139 = -1LL;

    t139 = (x557*(x558==(x559^x560)));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = INT8_MIN;
	static uint32_t x562 = 1285036544U;
	static uint64_t x564 = 1447229584LLU;

    t140 = (x561*(x562==(x563^x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MIN;
	static uint8_t x566 = 4U;
	uint32_t x567 = 22874413U;
	static int16_t x568 = INT16_MIN;
	volatile int32_t t141 = 257239;

    t141 = (x565*(x566==(x567^x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -1;
	int8_t x570 = INT8_MAX;
	int16_t x571 = INT16_MAX;
	int8_t x572 = 1;

    t142 = (x569*(x570==(x571^x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x573 = UINT64_MAX;
	int32_t x576 = INT32_MIN;

    t143 = (x573*(x574==(x575^x576)));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x578 = INT64_MIN;
	uint16_t x579 = 910U;
	volatile uint64_t x580 = 123980LLU;
	static int32_t t144 = -8225658;

    t144 = (x577*(x578==(x579^x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = 18290509LL;
	int64_t x583 = -8285879796833127LL;
	int16_t x584 = INT16_MIN;
	volatile int64_t t145 = -157170LL;

    t145 = (x581*(x582==(x583^x584)));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x586 = -882;
	uint16_t x587 = 7090U;

    t146 = (x585*(x586==(x587^x588)));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x590 = -1;
	int16_t x591 = INT16_MAX;
	int8_t x592 = -1;
	volatile int32_t t147 = -841867141;

    t147 = (x589*(x590==(x591^x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = 30462U;
	int64_t x595 = INT64_MIN;
	uint32_t t148 = 332984284U;

    t148 = (x593*(x594==(x595^x596)));

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MIN;
	int8_t x598 = INT8_MAX;
	static int64_t x599 = -1LL;
	static int64_t x600 = INT64_MIN;
	volatile int32_t t149 = 261788499;

    t149 = (x597*(x598==(x599^x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x601 = -115428430782LL;
	uint64_t x602 = 239505501813062664LLU;
	volatile int16_t x603 = INT16_MIN;
	uint64_t x604 = UINT64_MAX;

    t150 = (x601*(x602==(x603^x604)));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x605 = INT16_MAX;
	volatile int16_t x607 = 0;
	int32_t x608 = -125561;
	volatile int32_t t151 = 1;

    t151 = (x605*(x606==(x607^x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x609 = INT8_MIN;
	int32_t x610 = INT32_MIN;
	int16_t x611 = INT16_MAX;
	volatile int8_t x612 = INT8_MAX;
	static volatile int32_t t152 = 29205046;

    t152 = (x609*(x610==(x611^x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = -1041020252967668LL;
	volatile int64_t x614 = INT64_MAX;
	int8_t x616 = -1;
	int64_t t153 = -17LL;

    t153 = (x613*(x614==(x615^x616)));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x618 = 33308393LLU;
	static uint16_t x619 = 17883U;
	int8_t x620 = INT8_MIN;
	int64_t t154 = 2622763875317194LL;

    t154 = (x617*(x618==(x619^x620)));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x622 = 1U;
	int32_t x623 = INT32_MIN;
	int8_t x624 = INT8_MIN;

    t155 = (x621*(x622==(x623^x624)));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x625 = INT16_MIN;
	int32_t x626 = INT32_MIN;
	int16_t x628 = 708;
	int32_t t156 = -1;

    t156 = (x625*(x626==(x627^x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = INT16_MAX;
	static int16_t x630 = INT16_MAX;
	uint16_t x631 = 1U;
	int32_t t157 = -6204096;

    t157 = (x629*(x630==(x631^x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = 0U;
	int16_t x634 = 12361;
	uint64_t x635 = 3634672LLU;
	int16_t x636 = INT16_MIN;
	static int32_t t158 = -386312;

    t158 = (x633*(x634==(x635^x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x638 = 36U;
	uint64_t x639 = 6736264386574175LLU;
	static volatile int8_t x640 = INT8_MAX;
	int32_t t159 = 1196094;

    t159 = (x637*(x638==(x639^x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x641 = INT32_MIN;
	static volatile int8_t x642 = INT8_MAX;
	volatile int16_t x643 = INT16_MIN;
	int16_t x644 = INT16_MIN;

    t160 = (x641*(x642==(x643^x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x645 = INT8_MIN;
	volatile uint64_t x646 = UINT64_MAX;
	volatile uint64_t x647 = 30512471609733LLU;
	volatile int32_t x648 = -1;

    t161 = (x645*(x646==(x647^x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = -88;
	volatile uint64_t x650 = UINT64_MAX;
	volatile int8_t x651 = 2;
	volatile int16_t x652 = -6;
	int32_t t162 = 11483891;

    t162 = (x649*(x650==(x651^x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = 38U;
	static uint8_t x654 = 55U;
	static volatile int32_t x655 = INT32_MIN;
	static volatile int32_t t163 = 652653;

    t163 = (x653*(x654==(x655^x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = -53;
	int32_t x658 = INT32_MIN;
	uint8_t x659 = UINT8_MAX;
	int16_t x660 = -1;

    t164 = (x657*(x658==(x659^x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint64_t x661 = 2734019253LLU;
	volatile uint32_t x662 = UINT32_MAX;
	uint64_t t165 = 14478368874037799LLU;

    t165 = (x661*(x662==(x663^x664)));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x666 = 12;
	uint32_t x667 = 20451550U;
	int32_t x668 = INT32_MIN;
	int64_t t166 = 1LL;

    t166 = (x665*(x666==(x667^x668)));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x670 = -1LL;
	int32_t x672 = 1;
	int32_t t167 = 5;

    t167 = (x669*(x670==(x671^x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MIN;
	int32_t x675 = -1;
	static volatile int16_t x676 = INT16_MIN;
	int32_t t168 = -645939;

    t168 = (x673*(x674==(x675^x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = UINT32_MAX;
	uint16_t x678 = 72U;
	static volatile uint64_t x679 = UINT64_MAX;
	int16_t x680 = INT16_MIN;
	volatile uint32_t t169 = 5U;

    t169 = (x677*(x678==(x679^x680)));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x681 = 4U;
	uint16_t x682 = UINT16_MAX;
	int8_t x683 = 0;
	int64_t x684 = -1LL;
	volatile int32_t t170 = 19439;

    t170 = (x681*(x682==(x683^x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MAX;
	uint32_t x686 = UINT32_MAX;
	int32_t x688 = INT32_MAX;
	volatile int32_t t171 = -104499552;

    t171 = (x685*(x686==(x687^x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x689 = INT16_MAX;
	uint16_t x691 = 31U;
	int32_t t172 = 1816;

    t172 = (x689*(x690==(x691^x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = UINT64_MAX;
	static int64_t x694 = INT64_MIN;
	static int8_t x695 = INT8_MIN;
	uint64_t t173 = 11099065609LLU;

    t173 = (x693*(x694==(x695^x696)));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t t174 = 12193980047698LL;

    t174 = (x697*(x698==(x699^x700)));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = -4;
	int64_t x702 = -1LL;
	static volatile uint32_t x704 = 149586U;

    t175 = (x701*(x702==(x703^x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x706 = INT16_MAX;
	uint32_t x707 = UINT32_MAX;
	uint32_t x708 = UINT32_MAX;
	volatile int64_t t176 = 7279553349LL;

    t176 = (x705*(x706==(x707^x708)));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = UINT32_MAX;
	volatile int16_t x711 = INT16_MAX;
	int8_t x712 = -1;

    t177 = (x709*(x710==(x711^x712)));

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MAX;
	static volatile int8_t x716 = -1;
	static volatile int32_t t178 = -3;

    t178 = (x713*(x714==(x715^x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MIN;
	volatile uint16_t x718 = 4U;
	int16_t x719 = INT16_MIN;
	int32_t t179 = 6;

    t179 = (x717*(x718==(x719^x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = -14266LL;
	static uint64_t x723 = 3200318LLU;
	int16_t x724 = 658;
	int64_t t180 = -3516225429LL;

    t180 = (x721*(x722==(x723^x724)));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MIN;
	int8_t x726 = -1;
	uint32_t x727 = 208065U;
	int8_t x728 = -3;
	int64_t t181 = 693270636784467398LL;

    t181 = (x725*(x726==(x727^x728)));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = UINT32_MAX;
	static uint64_t x730 = UINT64_MAX;
	int64_t x731 = -1LL;
	volatile int64_t x732 = -2LL;
	volatile uint32_t t182 = 239U;

    t182 = (x729*(x730==(x731^x732)));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = UINT32_MAX;
	int32_t x734 = -1;
	int8_t x736 = 0;
	uint32_t t183 = UINT32_MAX;

    t183 = (x733*(x734==(x735^x736)));

    if (t183 != UINT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MAX;
	uint8_t x738 = 16U;
	volatile int8_t x739 = 52;
	static int16_t x740 = INT16_MAX;
	volatile int64_t t184 = -110814817LL;

    t184 = (x737*(x738==(x739^x740)));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x742 = INT16_MAX;
	int64_t x743 = -48225941LL;
	int64_t x744 = INT64_MIN;
	volatile int32_t t185 = -127;

    t185 = (x741*(x742==(x743^x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = 152;
	int8_t x746 = -1;
	static int32_t x748 = INT32_MAX;
	volatile int32_t t186 = -199018329;

    t186 = (x745*(x746==(x747^x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	uint16_t x750 = 4387U;
	static volatile uint16_t x751 = 40U;
	volatile int16_t x752 = INT16_MIN;

    t187 = (x749*(x750==(x751^x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x753 = 1561941898U;
	volatile int16_t x754 = -1;
	static volatile uint32_t t188 = 382U;

    t188 = (x753*(x754==(x755^x756)));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x757 = 1U;
	int32_t x758 = 406;
	int64_t x760 = INT64_MIN;

    t189 = (x757*(x758==(x759^x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = UINT8_MAX;
	static int8_t x762 = INT8_MIN;
	uint16_t x763 = 7009U;
	int16_t x764 = INT16_MIN;
	int32_t t190 = -57627442;

    t190 = (x761*(x762==(x763^x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MAX;
	int8_t x766 = INT8_MIN;
	uint32_t x767 = 32134327U;
	int8_t x768 = 12;
	static volatile int32_t t191 = -317;

    t191 = (x765*(x766==(x767^x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x769 = 2;
	volatile int8_t x772 = 1;
	volatile int32_t t192 = 228;

    t192 = (x769*(x770==(x771^x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x773 = 4930496033459855LL;
	int32_t x775 = INT32_MIN;
	int32_t x776 = INT32_MAX;
	int64_t t193 = 4439235797645LL;

    t193 = (x773*(x774==(x775^x776)));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = 15U;
	int64_t x778 = INT64_MIN;
	int64_t x779 = -1LL;
	volatile uint16_t x780 = 4196U;

    t194 = (x777*(x778==(x779^x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x781 = INT8_MAX;
	volatile int32_t x782 = 900;
	int64_t x783 = -1LL;
	int16_t x784 = INT16_MIN;
	static volatile int32_t t195 = 6004287;

    t195 = (x781*(x782==(x783^x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x787 = 57U;
	uint16_t x788 = 8U;
	int32_t t196 = 15326866;

    t196 = (x785*(x786==(x787^x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x790 = UINT32_MAX;
	int8_t x791 = 1;
	int8_t x792 = 4;
	int32_t t197 = 395409;

    t197 = (x789*(x790==(x791^x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = INT64_MAX;
	static uint8_t x795 = 86U;
	uint64_t x796 = 67357844988LLU;

    t198 = (x793*(x794==(x795^x796)));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x797 = -396097980405LL;
	volatile uint16_t x798 = UINT16_MAX;
	int64_t x799 = INT64_MIN;
	static int32_t x800 = INT32_MIN;
	static int64_t t199 = 691095346422803LL;

    t199 = (x797*(x798==(x799^x800)));

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


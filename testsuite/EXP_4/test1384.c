
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

static int8_t x2 = INT8_MIN;
uint16_t x3 = UINT16_MAX;
static uint32_t x5 = UINT32_MAX;
volatile int32_t x6 = -6;
volatile uint64_t x7 = UINT64_MAX;
static int8_t x12 = INT8_MIN;
uint64_t t2 = 5514180633944LLU;
volatile uint64_t t3 = 3393397479958814LLU;
int64_t x18 = INT64_MIN;
int16_t x24 = INT16_MIN;
static volatile int8_t x27 = INT8_MAX;
int16_t x28 = 51;
volatile int32_t t6 = -18875;
uint16_t x33 = 190U;
volatile uint8_t x35 = 87U;
int32_t x36 = INT32_MIN;
uint64_t x48 = 230480119LLU;
int16_t x49 = INT16_MIN;
uint64_t x55 = 9LLU;
volatile int64_t x63 = -1LL;
int32_t x64 = -62;
int16_t x66 = INT16_MAX;
volatile int16_t x75 = 3766;
int64_t x76 = 8591558490LL;
volatile int32_t t18 = -132;
volatile uint8_t x81 = 38U;
static int64_t x83 = INT64_MIN;
volatile int32_t t21 = 0;
static uint16_t x102 = 93U;
volatile int16_t x104 = INT16_MAX;
uint16_t x108 = UINT16_MAX;
volatile int32_t x110 = 6426566;
uint32_t x118 = 6U;
int64_t x123 = INT64_MIN;
uint32_t x124 = 270U;
int64_t x126 = INT64_MIN;
uint32_t x131 = 126707U;
int32_t t32 = -7;
int32_t x134 = -1;
int64_t t33 = INT64_MIN;
static int32_t x143 = INT32_MIN;
int16_t x148 = 1;
int8_t x149 = INT8_MIN;
uint64_t x151 = 1038706077083LLU;
uint16_t x156 = UINT16_MAX;
int16_t x160 = 3;
static volatile int8_t x162 = INT8_MIN;
volatile int16_t x165 = INT16_MIN;
volatile int32_t t41 = -7330311;
uint64_t x171 = UINT64_MAX;
int8_t x177 = INT8_MIN;
static int32_t x178 = -347594;
static int16_t x179 = 0;
static int32_t t44 = -6;
int32_t x181 = -1;
uint16_t x183 = 6U;
static uint32_t x192 = 77U;
volatile int64_t t48 = -656416719LL;
volatile int32_t t49 = 482889;
int16_t x203 = -1;
volatile int16_t x206 = -11;
uint32_t x223 = UINT32_MAX;
volatile int64_t t56 = -49693018239824016LL;
static int64_t t59 = -6652LL;
int8_t x243 = 0;
int8_t x245 = INT8_MIN;
uint32_t x249 = UINT32_MAX;
volatile uint32_t t62 = 41753429U;
uint16_t x258 = UINT16_MAX;
int32_t t64 = -26520;
int16_t x262 = INT16_MAX;
int32_t t65 = 63665;
volatile int64_t x265 = -897865098848LL;
uint64_t x267 = 7029244284649731062LLU;
static uint16_t x273 = UINT16_MAX;
int32_t x274 = INT32_MIN;
static volatile uint32_t x286 = 90U;
volatile int32_t x289 = INT32_MIN;
int64_t t72 = -70017957703135LL;
static uint8_t x295 = UINT8_MAX;
static int8_t x299 = INT8_MAX;
int32_t x302 = INT32_MIN;
volatile int16_t x307 = -35;
volatile int32_t t77 = -30288609;
uint8_t x316 = 3U;
static int64_t x318 = INT64_MIN;
uint8_t x322 = 2U;
uint32_t x323 = 792840U;
static volatile int32_t x329 = -656575;
int32_t x331 = INT32_MIN;
volatile int16_t x341 = -1;
volatile int64_t t88 = INT64_MIN;
volatile int32_t x360 = -1;
uint32_t x363 = 128U;
int8_t x365 = -1;
uint16_t x370 = UINT16_MAX;
uint8_t x371 = UINT8_MAX;
volatile int8_t x375 = -10;
volatile int64_t x383 = -30LL;
volatile int64_t t95 = -1023428118589079LL;
volatile int64_t x387 = -225361706180LL;
volatile int32_t t97 = 1;
volatile uint16_t x393 = 12U;
int8_t x396 = INT8_MAX;
int16_t x399 = INT16_MIN;
uint32_t x402 = 34U;
static int32_t x406 = 33268623;
volatile uint8_t x408 = 90U;
int32_t x415 = INT32_MAX;
static int64_t x427 = -1LL;
static uint32_t x433 = UINT32_MAX;
uint32_t x434 = UINT32_MAX;
volatile int64_t t109 = INT64_MIN;
static volatile uint64_t t115 = 144820070199LLU;
int32_t x465 = INT32_MIN;
int64_t t116 = -15304287888790LL;
uint64_t t117 = 3167037367LLU;
uint64_t t121 = 3711818624596LLU;
static volatile int64_t t124 = 1LL;
volatile uint32_t x501 = UINT32_MAX;
static uint32_t x503 = 475870108U;
static volatile uint64_t x512 = 765804705270940082LLU;
int64_t x521 = INT64_MIN;
int64_t x522 = INT64_MIN;
int64_t x524 = 50951839819LL;
int32_t x526 = INT32_MAX;
int32_t x528 = INT32_MIN;
int32_t t132 = 28146802;
uint64_t x540 = UINT64_MAX;
int32_t t135 = 59;
static int32_t t137 = 28323577;
volatile int16_t x555 = -1;
static volatile int32_t x556 = -1;
uint16_t x557 = UINT16_MAX;
int8_t x570 = -1;
static uint32_t t142 = UINT32_MAX;
int16_t x579 = INT16_MAX;
static int8_t x588 = 0;
int8_t x594 = INT8_MIN;
int8_t x596 = INT8_MIN;
static uint32_t x598 = 255146U;
uint8_t x601 = 70U;
uint64_t x604 = UINT64_MAX;
volatile uint64_t t150 = 9933968260LLU;
int8_t x609 = -25;
int16_t x619 = INT16_MIN;
volatile int32_t t154 = 64467147;
uint8_t x622 = 47U;
int8_t x635 = -2;
int64_t x646 = INT64_MIN;
int32_t t162 = -40276;
int64_t t163 = 19LL;
static volatile uint64_t t164 = 29LLU;
volatile uint64_t x666 = UINT64_MAX;
int32_t x669 = -1;
int16_t x680 = INT16_MIN;
volatile int32_t t169 = -1617878;
int64_t x691 = INT64_MIN;
uint16_t x696 = 1343U;
volatile int32_t t173 = 2589453;
volatile int64_t x699 = 188036065LL;
int64_t x703 = INT64_MIN;
volatile int64_t t175 = 2007880685LL;
volatile uint8_t x707 = 12U;
uint64_t t176 = 84039871LLU;
static int8_t x712 = INT8_MAX;
int8_t x735 = -1;
static volatile uint16_t x742 = UINT16_MAX;
volatile uint32_t x743 = 3770501U;
static volatile int32_t t184 = 33420627;
static volatile int8_t x747 = 31;
static int32_t t186 = 25934742;
uint64_t x755 = UINT64_MAX;
static volatile int32_t t187 = -14800;
static int32_t t189 = 6;
static int32_t x769 = INT32_MIN;
static int8_t x770 = -1;
static int8_t x779 = -3;
int32_t x781 = -1;
int64_t t194 = 1881099LL;
static volatile uint8_t x791 = 36U;
volatile int8_t x793 = INT8_MIN;
volatile uint32_t x795 = 3927U;
int8_t x797 = INT8_MIN;
uint8_t x798 = 2U;


void f0(void) {
    	volatile int8_t x1 = 1;
	uint32_t x4 = 14820U;
	volatile int32_t t0 = -218862828;

    t0 = (x1&(x2+(x3==x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x8 = 309;
	uint32_t t1 = 5914965U;

    t1 = (x5&(x6+(x7==x8)));

    if (t1 != 4294967290U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x9 = 17594U;
	uint64_t x10 = UINT64_MAX;
	uint32_t x11 = 29256U;

    t2 = (x9&(x10+(x11==x12)));

    if (t2 != 17594LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 9U;
	uint64_t x14 = 26774873279885788LLU;
	int64_t x15 = -24474210103LL;
	volatile int32_t x16 = INT32_MIN;

    t3 = (x13&(x14+(x15==x16)));

    if (t3 != 8LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int32_t x19 = INT32_MIN;
	volatile int64_t x20 = INT64_MAX;
	int64_t t4 = INT64_MIN;

    t4 = (x17&(x18+(x19==x20)));

    if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x21 = UINT8_MAX;
	static int64_t x22 = INT64_MIN;
	int16_t x23 = 16;
	volatile int64_t t5 = -1597022289275943LL;

    t5 = (x21&(x22+(x23==x24)));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x25 = 0U;
	static uint8_t x26 = UINT8_MAX;

    t6 = (x25&(x26+(x27==x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 182019;
	static int64_t x30 = INT64_MIN;
	int16_t x31 = INT16_MAX;
	static uint8_t x32 = 3U;
	volatile int64_t t7 = -20275207539224LL;

    t7 = (x29&(x30+(x31==x32)));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = INT8_MIN;
	int32_t t8 = 6080375;

    t8 = (x33&(x34+(x35==x36)));

    if (t8 != 128) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	uint8_t x38 = 11U;
	uint32_t x39 = UINT32_MAX;
	int32_t x40 = INT32_MIN;
	uint64_t t9 = 2687LLU;

    t9 = (x37&(x38+(x39==x40)));

    if (t9 != 11LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 12U;
	static int64_t x42 = -6232744LL;
	volatile uint32_t x43 = UINT32_MAX;
	static int16_t x44 = INT16_MAX;
	int64_t t10 = 47LL;

    t10 = (x41&(x42+(x43==x44)));

    if (t10 != 8LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	volatile int32_t x46 = -3;
	int8_t x47 = 1;
	volatile int64_t t11 = INT64_MIN;

    t11 = (x45&(x46+(x47==x48)));

    if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x50 = 26U;
	volatile uint16_t x51 = 16885U;
	volatile int8_t x52 = 1;
	volatile int32_t t12 = -129167518;

    t12 = (x49&(x50+(x51==x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 37054512050LLU;
	int32_t x54 = -1;
	int64_t x56 = -116388920435654512LL;
	uint64_t t13 = 8881490464601211104LLU;

    t13 = (x53&(x54+(x55==x56)));

    if (t13 != 37054512050LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x57 = -16120978;
	int16_t x58 = INT16_MIN;
	volatile int64_t x59 = -1LL;
	static uint64_t x60 = UINT64_MAX;
	volatile int32_t t14 = 235;

    t14 = (x57&(x58+(x59==x60)));

    if (t14 != -16121856) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -1LL;
	int8_t x62 = -1;
	static int64_t t15 = -132LL;

    t15 = (x61&(x62+(x63==x64)));

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = INT64_MIN;
	static int64_t x67 = -1LL;
	int64_t x68 = INT64_MIN;
	volatile int64_t t16 = -1LL;

    t16 = (x65&(x66+(x67==x68)));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x69 = INT32_MIN;
	static volatile int16_t x70 = -1;
	int16_t x71 = 10;
	uint32_t x72 = 1966473U;
	int32_t t17 = INT32_MIN;

    t17 = (x69&(x70+(x71==x72)));

    if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = 7879;
	uint16_t x74 = 437U;

    t18 = (x73&(x74+(x75==x76)));

    if (t18 != 133) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1LL;
	int16_t x78 = INT16_MIN;
	int32_t x79 = 5;
	volatile int16_t x80 = INT16_MAX;
	int64_t t19 = -3055756LL;

    t19 = (x77&(x78+(x79==x80)));

    if (t19 != -32768LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x82 = -1LL;
	int64_t x84 = 1432049233242LL;
	int64_t t20 = 91LL;

    t20 = (x81&(x82+(x83==x84)));

    if (t20 != 38LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 51U;
	int32_t x86 = 212727;
	volatile int64_t x87 = INT64_MAX;
	uint32_t x88 = 800U;

    t21 = (x85&(x86+(x87==x88)));

    if (t21 != 51) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = UINT64_MAX;
	int8_t x90 = INT8_MIN;
	int16_t x91 = INT16_MAX;
	volatile int16_t x92 = INT16_MIN;
	uint64_t t22 = 10643938043295LLU;

    t22 = (x89&(x90+(x91==x92)));

    if (t22 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = 28396388441276LL;
	volatile uint8_t x94 = UINT8_MAX;
	static int8_t x95 = INT8_MIN;
	static int8_t x96 = INT8_MIN;
	int64_t t23 = 1695399LL;

    t23 = (x93&(x94+(x95==x96)));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x97 = INT32_MIN;
	int16_t x98 = 1;
	uint64_t x99 = 5833688140696627LLU;
	int16_t x100 = INT16_MAX;
	volatile int32_t t24 = 1;

    t24 = (x97&(x98+(x99==x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 330328548LLU;
	volatile int32_t x103 = INT32_MIN;
	uint64_t t25 = 792316LLU;

    t25 = (x101&(x102+(x103==x104)));

    if (t25 != 68LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = INT8_MIN;
	int16_t x106 = INT16_MAX;
	int8_t x107 = -20;
	int32_t t26 = 5916216;

    t26 = (x105&(x106+(x107==x108)));

    if (t26 != 32640) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -17;
	static int64_t x111 = -1LL;
	uint16_t x112 = 4U;
	int32_t t27 = 6917;

    t27 = (x109&(x110+(x111==x112)));

    if (t27 != 6426566) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	uint16_t x114 = UINT16_MAX;
	int32_t x115 = INT32_MIN;
	static int8_t x116 = 5;
	volatile int32_t t28 = 2;

    t28 = (x113&(x114+(x115==x116)));

    if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = -1;
	static volatile uint16_t x119 = 320U;
	int8_t x120 = INT8_MIN;
	volatile uint32_t t29 = 142823171U;

    t29 = (x117&(x118+(x119==x120)));

    if (t29 != 6U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MAX;
	int32_t x122 = 76;
	volatile int64_t t30 = -796314800LL;

    t30 = (x121&(x122+(x123==x124)));

    if (t30 != 76LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 18U;
	uint32_t x127 = 1568485U;
	static int8_t x128 = -1;
	volatile int64_t t31 = -2425624LL;

    t31 = (x125&(x126+(x127==x128)));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = -358;
	static int8_t x130 = -1;
	volatile int8_t x132 = INT8_MAX;

    t32 = (x129&(x130+(x131==x132)));

    if (t32 != -358) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	static int16_t x135 = INT16_MIN;
	uint32_t x136 = UINT32_MAX;

    t33 = (x133&(x134+(x135==x136)));

    if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	int64_t x138 = -1LL;
	volatile int16_t x139 = INT16_MIN;
	static int8_t x140 = -8;
	static volatile int64_t t34 = INT64_MIN;

    t34 = (x137&(x138+(x139==x140)));

    if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -1194323980993130LL;
	uint32_t x142 = 778U;
	uint64_t x144 = UINT64_MAX;
	int64_t t35 = 28322377730LL;

    t35 = (x141&(x142+(x143==x144)));

    if (t35 != 258LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x145 = -1LL;
	int16_t x146 = -18;
	static int32_t x147 = 262133;
	static int64_t t36 = -1374110990519LL;

    t36 = (x145&(x146+(x147==x148)));

    if (t36 != -18LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x150 = UINT16_MAX;
	uint64_t x152 = UINT64_MAX;
	volatile int32_t t37 = 376466;

    t37 = (x149&(x150+(x151==x152)));

    if (t37 != 65408) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	int16_t x154 = 490;
	uint8_t x155 = UINT8_MAX;
	static int32_t t38 = 6664487;

    t38 = (x153&(x154+(x155==x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x157 = INT8_MIN;
	volatile int64_t x158 = INT64_MIN;
	volatile uint64_t x159 = 21236345LLU;
	volatile int64_t t39 = INT64_MIN;

    t39 = (x157&(x158+(x159==x160)));

    if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	int8_t x163 = INT8_MIN;
	uint8_t x164 = 46U;
	volatile int64_t t40 = INT64_MIN;

    t40 = (x161&(x162+(x163==x164)));

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x166 = 12U;
	volatile uint16_t x167 = 55U;
	uint16_t x168 = 737U;

    t41 = (x165&(x166+(x167==x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = UINT8_MAX;
	int32_t x170 = INT32_MAX;
	uint64_t x172 = 177276920964509071LLU;
	int32_t t42 = 32812992;

    t42 = (x169&(x170+(x171==x172)));

    if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x173 = INT64_MIN;
	int8_t x174 = 1;
	static volatile int8_t x175 = INT8_MIN;
	int16_t x176 = -6;
	static int64_t t43 = 126950271440054LL;

    t43 = (x173&(x174+(x175==x176)));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x180 = -1;

    t44 = (x177&(x178+(x179==x180)));

    if (t44 != -347648) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x182 = 632U;
	uint32_t x184 = UINT32_MAX;
	int32_t t45 = 224;

    t45 = (x181&(x182+(x183==x184)));

    if (t45 != 632) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x185 = -4858;
	int64_t x186 = -1LL;
	int64_t x187 = -128846LL;
	volatile uint32_t x188 = UINT32_MAX;
	int64_t t46 = 4054248LL;

    t46 = (x185&(x186+(x187==x188)));

    if (t46 != -4858LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = -14687;
	int64_t x190 = 0LL;
	uint8_t x191 = UINT8_MAX;
	int64_t t47 = 9LL;

    t47 = (x189&(x190+(x191==x192)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = -1LL;
	static int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MIN;
	static int32_t x196 = -5223485;

    t48 = (x193&(x194+(x195==x196)));

    if (t48 != -32768LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 68U;
	uint8_t x198 = UINT8_MAX;
	uint8_t x199 = 47U;
	int8_t x200 = INT8_MAX;

    t49 = (x197&(x198+(x199==x200)));

    if (t49 != 68) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x201 = -1;
	uint64_t x202 = UINT64_MAX;
	int8_t x204 = INT8_MIN;
	volatile uint64_t t50 = UINT64_MAX;

    t50 = (x201&(x202+(x203==x204)));

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	static int32_t x207 = INT32_MIN;
	volatile uint32_t x208 = 227696U;
	static int32_t t51 = -834;

    t51 = (x205&(x206+(x207==x208)));

    if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x209 = UINT64_MAX;
	uint32_t x210 = 546436U;
	static int64_t x211 = -1LL;
	int32_t x212 = -77;
	uint64_t t52 = 75LLU;

    t52 = (x209&(x210+(x211==x212)));

    if (t52 != 546436LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -1;
	int8_t x214 = -1;
	static int32_t x215 = INT32_MAX;
	uint32_t x216 = UINT32_MAX;
	volatile int32_t t53 = 23043;

    t53 = (x213&(x214+(x215==x216)));

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x217 = INT32_MIN;
	int16_t x218 = 1;
	uint16_t x219 = 0U;
	volatile uint64_t x220 = 180430052276227804LLU;
	volatile int32_t t54 = -63280245;

    t54 = (x217&(x218+(x219==x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = INT64_MIN;
	int8_t x222 = -1;
	int32_t x224 = -1;
	static int64_t t55 = -24807333504646533LL;

    t55 = (x221&(x222+(x223==x224)));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MIN;
	static int8_t x226 = 9;
	int32_t x227 = 0;
	static volatile uint16_t x228 = 59U;

    t56 = (x225&(x226+(x227==x228)));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MAX;
	int16_t x230 = INT16_MIN;
	int16_t x231 = -1;
	static int64_t x232 = 48736383LL;
	volatile int64_t t57 = 126737534802LL;

    t57 = (x229&(x230+(x231==x232)));

    if (t57 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = 0;
	int8_t x234 = 2;
	uint8_t x235 = UINT8_MAX;
	int64_t x236 = INT64_MAX;
	static volatile int32_t t58 = -144;

    t58 = (x233&(x234+(x235==x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = -924409229;
	int64_t x238 = 40100558840810LL;
	static int16_t x239 = INT16_MIN;
	static int8_t x240 = -1;

    t59 = (x237&(x238+(x239==x240)));

    if (t59 != 40099970589282LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x241 = 16015526306793768LLU;
	static int8_t x242 = INT8_MAX;
	int64_t x244 = 183637249547581LL;
	volatile uint64_t t60 = 15796366188824824LLU;

    t60 = (x241&(x242+(x243==x244)));

    if (t60 != 40LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x246 = INT8_MAX;
	uint32_t x247 = UINT32_MAX;
	static int64_t x248 = 124366309791352LL;
	int32_t t61 = -1431;

    t61 = (x245&(x246+(x247==x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x250 = 133U;
	volatile int64_t x251 = 1939648703937086LL;
	static int32_t x252 = 0;

    t62 = (x249&(x250+(x251==x252)));

    if (t62 != 133U) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = -1;
	volatile int64_t x254 = INT64_MIN;
	int8_t x255 = INT8_MIN;
	int64_t x256 = INT64_MIN;
	volatile int64_t t63 = INT64_MIN;

    t63 = (x253&(x254+(x255==x256)));

    if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x257 = INT8_MIN;
	uint8_t x259 = UINT8_MAX;
	int8_t x260 = 25;

    t64 = (x257&(x258+(x259==x260)));

    if (t64 != 65408) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -1;
	int64_t x263 = -27178566746029026LL;
	int32_t x264 = INT32_MAX;

    t65 = (x261&(x262+(x263==x264)));

    if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x266 = INT64_MIN;
	volatile uint64_t x268 = 27903384796072LLU;
	volatile int64_t t66 = INT64_MIN;

    t66 = (x265&(x266+(x267==x268)));

    if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x269 = INT64_MIN;
	int64_t x270 = INT64_MIN;
	int16_t x271 = -1;
	int8_t x272 = -7;
	static volatile int64_t t67 = INT64_MIN;

    t67 = (x269&(x270+(x271==x272)));

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x275 = INT16_MAX;
	int32_t x276 = INT32_MAX;
	volatile int32_t t68 = 1806;

    t68 = (x273&(x274+(x275==x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = -1;
	int64_t x278 = INT64_MIN;
	uint32_t x279 = 6U;
	uint16_t x280 = UINT16_MAX;
	volatile int64_t t69 = INT64_MIN;

    t69 = (x277&(x278+(x279==x280)));

    if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x281 = UINT8_MAX;
	int8_t x282 = -1;
	static volatile int16_t x283 = INT16_MAX;
	int16_t x284 = -1;
	volatile int32_t t70 = -6076298;

    t70 = (x281&(x282+(x283==x284)));

    if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = -1LL;
	int16_t x287 = -1595;
	int64_t x288 = INT64_MIN;
	int64_t t71 = 1258574LL;

    t71 = (x285&(x286+(x287==x288)));

    if (t71 != 90LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x290 = INT64_MAX;
	int16_t x291 = INT16_MIN;
	uint32_t x292 = UINT32_MAX;

    t72 = (x289&(x290+(x291==x292)));

    if (t72 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MAX;
	int16_t x294 = INT16_MIN;
	int32_t x296 = INT32_MIN;
	static volatile int32_t t73 = -2875;

    t73 = (x293&(x294+(x295==x296)));

    if (t73 != 2147450880) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MAX;
	uint64_t x298 = 3975LLU;
	static uint64_t x300 = 819LLU;
	static uint64_t t74 = 1805468678115456LLU;

    t74 = (x297&(x298+(x299==x300)));

    if (t74 != 3975LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x301 = -1LL;
	uint32_t x303 = UINT32_MAX;
	int64_t x304 = -1LL;
	int64_t t75 = 542506702LL;

    t75 = (x301&(x302+(x303==x304)));

    if (t75 != -2147483648LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x305 = -98;
	static int8_t x306 = -51;
	static uint64_t x308 = UINT64_MAX;
	int32_t t76 = 490259;

    t76 = (x305&(x306+(x307==x308)));

    if (t76 != -116) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = 8078U;
	int8_t x310 = INT8_MAX;
	uint8_t x311 = 1U;
	int32_t x312 = -1;

    t77 = (x309&(x310+(x311==x312)));

    if (t77 != 14) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x313 = INT32_MIN;
	int32_t x314 = 21125;
	int8_t x315 = INT8_MIN;
	static volatile int32_t t78 = -390789;

    t78 = (x313&(x314+(x315==x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = 340320;
	int16_t x319 = INT16_MIN;
	static uint32_t x320 = UINT32_MAX;
	int64_t t79 = -5448LL;

    t79 = (x317&(x318+(x319==x320)));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MIN;
	static int64_t x324 = INT64_MAX;
	volatile int32_t t80 = -14653449;

    t80 = (x321&(x322+(x323==x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x325 = 10U;
	int8_t x326 = INT8_MIN;
	volatile uint32_t x327 = UINT32_MAX;
	static int16_t x328 = -1;
	int32_t t81 = -376;

    t81 = (x325&(x326+(x327==x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x330 = 1;
	static int16_t x332 = INT16_MIN;
	int32_t t82 = -1;

    t82 = (x329&(x330+(x331==x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = 28329LLU;
	uint8_t x334 = 14U;
	int16_t x335 = -1;
	volatile int64_t x336 = -3LL;
	uint64_t t83 = 3257184476LLU;

    t83 = (x333&(x334+(x335==x336)));

    if (t83 != 8LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = 2725436830717151905LL;
	int64_t x338 = INT64_MIN;
	int64_t x339 = 1LL;
	static uint8_t x340 = 1U;
	volatile int64_t t84 = 7313998753996LL;

    t84 = (x337&(x338+(x339==x340)));

    if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x342 = -1;
	int8_t x343 = -2;
	uint8_t x344 = 62U;
	static volatile int32_t t85 = 1033064847;

    t85 = (x341&(x342+(x343==x344)));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = 1U;
	volatile int16_t x346 = 5475;
	static int16_t x347 = INT16_MIN;
	static uint8_t x348 = 1U;
	volatile int32_t t86 = -209461;

    t86 = (x345&(x346+(x347==x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = 42LLU;
	int8_t x350 = INT8_MIN;
	int32_t x351 = INT32_MAX;
	uint64_t x352 = 2871944707273LLU;
	static uint64_t t87 = 5464LLU;

    t87 = (x349&(x350+(x351==x352)));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = -1;
	int64_t x354 = INT64_MIN;
	static int8_t x355 = -1;
	volatile uint64_t x356 = 742612600750260LLU;

    t88 = (x353&(x354+(x355==x356)));

    if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x357 = -1;
	uint8_t x358 = UINT8_MAX;
	int8_t x359 = 36;
	volatile int32_t t89 = -3;

    t89 = (x357&(x358+(x359==x360)));

    if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 30372498038640472LLU;
	uint64_t x362 = UINT64_MAX;
	int16_t x364 = -1;
	static uint64_t t90 = 6518LLU;

    t90 = (x361&(x362+(x363==x364)));

    if (t90 != 30372498038640472LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x366 = INT32_MIN;
	volatile uint64_t x367 = 28671005410LLU;
	volatile uint16_t x368 = 24U;
	int32_t t91 = INT32_MIN;

    t91 = (x365&(x366+(x367==x368)));

    if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MAX;
	uint32_t x372 = 5882845U;
	static int32_t t92 = -255559;

    t92 = (x369&(x370+(x371==x372)));

    if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x373 = 1U;
	int8_t x374 = INT8_MIN;
	static int64_t x376 = -1LL;
	int32_t t93 = -10380636;

    t93 = (x373&(x374+(x375==x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = 4U;
	int8_t x378 = -1;
	uint32_t x379 = UINT32_MAX;
	int16_t x380 = INT16_MIN;
	static volatile int32_t t94 = 395;

    t94 = (x377&(x378+(x379==x380)));

    if (t94 != 4) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x381 = INT16_MIN;
	int64_t x382 = -1LL;
	uint8_t x384 = 2U;

    t95 = (x381&(x382+(x383==x384)));

    if (t95 != -32768LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x385 = INT16_MIN;
	uint8_t x386 = 0U;
	int8_t x388 = INT8_MIN;
	int32_t t96 = -6;

    t96 = (x385&(x386+(x387==x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x389 = INT8_MIN;
	volatile int16_t x390 = -61;
	volatile uint64_t x391 = 3405863124895230999LLU;
	volatile int8_t x392 = INT8_MIN;

    t97 = (x389&(x390+(x391==x392)));

    if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x394 = UINT8_MAX;
	int64_t x395 = -668141309LL;
	int32_t t98 = 1;

    t98 = (x393&(x394+(x395==x396)));

    if (t98 != 12) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 11416002725213LLU;
	uint16_t x398 = UINT16_MAX;
	uint8_t x400 = 1U;
	uint64_t t99 = 124743262275LLU;

    t99 = (x397&(x398+(x399==x400)));

    if (t99 != 34141LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = UINT64_MAX;
	static int8_t x403 = -1;
	uint32_t x404 = UINT32_MAX;
	uint64_t t100 = 50947926477379533LLU;

    t100 = (x401&(x402+(x403==x404)));

    if (t100 != 35LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = UINT32_MAX;
	int32_t x407 = -880999800;
	volatile uint32_t t101 = 684U;

    t101 = (x405&(x406+(x407==x408)));

    if (t101 != 33268623U) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x409 = INT16_MIN;
	uint32_t x410 = UINT32_MAX;
	int64_t x411 = INT64_MIN;
	uint16_t x412 = UINT16_MAX;
	volatile uint32_t t102 = 171255U;

    t102 = (x409&(x410+(x411==x412)));

    if (t102 != 4294934528U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = UINT32_MAX;
	int8_t x414 = -1;
	uint64_t x416 = 200132965468LLU;
	uint32_t t103 = UINT32_MAX;

    t103 = (x413&(x414+(x415==x416)));

    if (t103 != UINT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = 414251579008061642LLU;
	uint32_t x418 = UINT32_MAX;
	static volatile int16_t x419 = -1;
	static int32_t x420 = -3054980;
	uint64_t t104 = 10986317LLU;

    t104 = (x417&(x418+(x419==x420)));

    if (t104 != 3328938186LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = 591;
	volatile int8_t x422 = -1;
	uint16_t x423 = 2U;
	volatile int8_t x424 = INT8_MIN;
	int32_t t105 = -12;

    t105 = (x421&(x422+(x423==x424)));

    if (t105 != 591) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 12964385U;
	volatile int16_t x426 = 281;
	int32_t x428 = INT32_MIN;
	volatile uint32_t t106 = 86097754U;

    t106 = (x425&(x426+(x427==x428)));

    if (t106 != 1U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x429 = INT16_MAX;
	static volatile int8_t x430 = -1;
	int16_t x431 = 5612;
	volatile uint64_t x432 = UINT64_MAX;
	int32_t t107 = 487;

    t107 = (x429&(x430+(x431==x432)));

    if (t107 != 32767) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x435 = -28;
	static int32_t x436 = INT32_MIN;
	volatile uint32_t t108 = UINT32_MAX;

    t108 = (x433&(x434+(x435==x436)));

    if (t108 != UINT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x437 = INT64_MIN;
	int32_t x438 = -1;
	static int32_t x439 = -1;
	uint8_t x440 = 14U;

    t109 = (x437&(x438+(x439==x440)));

    if (t109 != INT64_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MIN;
	static uint64_t x442 = 14958987183427LLU;
	int64_t x443 = -1LL;
	volatile int8_t x444 = -14;
	static uint64_t t110 = 5569582583597866733LLU;

    t110 = (x441&(x442+(x443==x444)));

    if (t110 != 14958987183360LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x445 = INT16_MIN;
	int8_t x446 = INT8_MIN;
	volatile uint32_t x447 = UINT32_MAX;
	volatile int64_t x448 = -865123159420LL;
	volatile int32_t t111 = 32765235;

    t111 = (x445&(x446+(x447==x448)));

    if (t111 != -32768) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x449 = 3702057U;
	uint64_t x450 = UINT64_MAX;
	int64_t x451 = INT64_MIN;
	volatile int8_t x452 = -1;
	volatile uint64_t t112 = 4168992847242LLU;

    t112 = (x449&(x450+(x451==x452)));

    if (t112 != 3702057LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x453 = 1U;
	static int16_t x454 = 281;
	uint32_t x455 = 2381U;
	int64_t x456 = -1LL;
	int32_t t113 = -548267749;

    t113 = (x453&(x454+(x455==x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x457 = INT32_MIN;
	volatile uint8_t x458 = 6U;
	int16_t x459 = 16;
	int16_t x460 = INT16_MAX;
	int32_t t114 = 7;

    t114 = (x457&(x458+(x459==x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = 108LLU;
	uint32_t x462 = 4U;
	volatile int32_t x463 = -1;
	static volatile int8_t x464 = -1;

    t115 = (x461&(x462+(x463==x464)));

    if (t115 != 4LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x466 = -17219LL;
	uint64_t x467 = 188981319035LLU;
	uint8_t x468 = 19U;

    t116 = (x465&(x466+(x467==x468)));

    if (t116 != -2147483648LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = 2094227232140LLU;
	int32_t x470 = -3;
	int16_t x471 = INT16_MAX;
	uint64_t x472 = UINT64_MAX;

    t117 = (x469&(x470+(x471==x472)));

    if (t117 != 2094227232140LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = INT16_MIN;
	volatile int16_t x474 = INT16_MAX;
	uint8_t x475 = 7U;
	volatile uint16_t x476 = 494U;
	int32_t t118 = 53442861;

    t118 = (x473&(x474+(x475==x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = 1189;
	static int8_t x478 = INT8_MIN;
	int16_t x479 = INT16_MIN;
	int16_t x480 = INT16_MAX;
	int32_t t119 = 15501935;

    t119 = (x477&(x478+(x479==x480)));

    if (t119 != 1152) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = 46;
	int8_t x482 = INT8_MIN;
	static int8_t x483 = INT8_MAX;
	static uint16_t x484 = 1U;
	volatile int32_t t120 = 34;

    t120 = (x481&(x482+(x483==x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x485 = 440213687648971LLU;
	static int64_t x486 = INT64_MIN;
	uint64_t x487 = 82LLU;
	uint64_t x488 = 779250LLU;

    t121 = (x485&(x486+(x487==x488)));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x489 = UINT16_MAX;
	int32_t x490 = -157779613;
	static volatile int32_t x491 = -1;
	volatile uint8_t x492 = 47U;
	static int32_t t122 = 456;

    t122 = (x489&(x490+(x491==x492)));

    if (t122 != 31075) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = 23U;
	int32_t x494 = 15832222;
	int32_t x495 = INT32_MIN;
	volatile uint8_t x496 = 56U;
	static int32_t t123 = -1331;

    t123 = (x493&(x494+(x495==x496)));

    if (t123 != 22) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x497 = 66562U;
	int64_t x498 = INT64_MIN;
	int8_t x499 = 0;
	volatile int32_t x500 = INT32_MIN;

    t124 = (x497&(x498+(x499==x500)));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x502 = INT8_MIN;
	int16_t x504 = 0;
	uint32_t t125 = 20399836U;

    t125 = (x501&(x502+(x503==x504)));

    if (t125 != 4294967168U) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = -1LL;
	int8_t x506 = -24;
	uint64_t x507 = 55LLU;
	int32_t x508 = -33106398;
	volatile int64_t t126 = -33475673498LL;

    t126 = (x505&(x506+(x507==x508)));

    if (t126 != -24LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x509 = -1;
	int16_t x510 = INT16_MIN;
	static int64_t x511 = -262879404550318256LL;
	int32_t t127 = 11584920;

    t127 = (x509&(x510+(x511==x512)));

    if (t127 != -32768) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = 1U;
	volatile int8_t x514 = -58;
	uint64_t x515 = UINT64_MAX;
	static int16_t x516 = -1;
	int32_t t128 = 98;

    t128 = (x513&(x514+(x515==x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x517 = 2U;
	int16_t x518 = 3202;
	int16_t x519 = 1;
	static uint64_t x520 = 53LLU;
	int32_t t129 = -4;

    t129 = (x517&(x518+(x519==x520)));

    if (t129 != 2) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x523 = INT32_MIN;
	int64_t t130 = INT64_MIN;

    t130 = (x521&(x522+(x523==x524)));

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = 1128U;
	static int8_t x527 = -7;
	volatile int32_t t131 = 31898663;

    t131 = (x525&(x526+(x527==x528)));

    if (t131 != 1128) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x529 = 37U;
	static int16_t x530 = INT16_MIN;
	int8_t x531 = -1;
	int64_t x532 = INT64_MAX;

    t132 = (x529&(x530+(x531==x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	volatile int8_t x534 = INT8_MAX;
	int8_t x535 = INT8_MIN;
	uint32_t x536 = UINT32_MAX;
	int32_t t133 = -785;

    t133 = (x533&(x534+(x535==x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	uint32_t x538 = 162198U;
	int64_t x539 = -1LL;
	uint32_t t134 = 1068752838U;

    t134 = (x537&(x538+(x539==x540)));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	int16_t x542 = INT16_MAX;
	static int8_t x543 = -1;
	volatile uint16_t x544 = 538U;

    t135 = (x541&(x542+(x543==x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int16_t x545 = -15252;
	int32_t x546 = INT32_MAX;
	int16_t x547 = 919;
	int16_t x548 = -1;
	int32_t t136 = -7824;

    t136 = (x545&(x546+(x547==x548)));

    if (t136 != 2147468396) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = -83;
	volatile uint16_t x550 = 556U;
	volatile int64_t x551 = INT64_MIN;
	static uint16_t x552 = UINT16_MAX;

    t137 = (x549&(x550+(x551==x552)));

    if (t137 != 556) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MIN;
	static uint32_t x554 = 122001499U;
	volatile uint32_t t138 = 0U;

    t138 = (x553&(x554+(x555==x556)));

    if (t138 != 121995264U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x558 = INT8_MAX;
	static uint64_t x559 = UINT64_MAX;
	int8_t x560 = INT8_MAX;
	volatile int32_t t139 = 256514;

    t139 = (x557&(x558+(x559==x560)));

    if (t139 != 127) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 217LLU;
	volatile int8_t x562 = INT8_MIN;
	int32_t x563 = -29;
	uint16_t x564 = 11897U;
	volatile uint64_t t140 = 4374633740389542386LLU;

    t140 = (x561&(x562+(x563==x564)));

    if (t140 != 128LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = 0LLU;
	static volatile int16_t x566 = -1;
	int16_t x567 = -8109;
	volatile int32_t x568 = 54655900;
	static uint64_t t141 = 182324LLU;

    t141 = (x565&(x566+(x567==x568)));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x569 = UINT32_MAX;
	uint8_t x571 = 1U;
	int16_t x572 = -807;

    t142 = (x569&(x570+(x571==x572)));

    if (t142 != UINT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x573 = INT32_MAX;
	uint16_t x574 = UINT16_MAX;
	int8_t x575 = INT8_MIN;
	volatile int32_t x576 = INT32_MIN;
	static volatile int32_t t143 = 8443386;

    t143 = (x573&(x574+(x575==x576)));

    if (t143 != 65535) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = UINT8_MAX;
	int8_t x578 = INT8_MIN;
	uint16_t x580 = 95U;
	static volatile int32_t t144 = -1;

    t144 = (x577&(x578+(x579==x580)));

    if (t144 != 128) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = 59LL;
	static uint64_t x582 = UINT64_MAX;
	int8_t x583 = INT8_MIN;
	int32_t x584 = INT32_MAX;
	uint64_t t145 = 7740801428259LLU;

    t145 = (x581&(x582+(x583==x584)));

    if (t145 != 59LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MIN;
	uint8_t x586 = UINT8_MAX;
	uint16_t x587 = 5336U;
	int32_t t146 = -698989;

    t146 = (x585&(x586+(x587==x588)));

    if (t146 != 128) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int64_t x589 = INT64_MIN;
	static uint32_t x590 = 2628U;
	static int16_t x591 = INT16_MIN;
	volatile int8_t x592 = -3;
	volatile int64_t t147 = 3521238166779808LL;

    t147 = (x589&(x590+(x591==x592)));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = -1;
	int8_t x595 = -1;
	static int32_t t148 = 376913;

    t148 = (x593&(x594+(x595==x596)));

    if (t148 != -128) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x597 = INT64_MIN;
	volatile int16_t x599 = INT16_MIN;
	static uint16_t x600 = 7428U;
	volatile int64_t t149 = 26521LL;

    t149 = (x597&(x598+(x599==x600)));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint64_t x602 = 1633598055953464LLU;
	volatile int64_t x603 = 78LL;

    t150 = (x601&(x602+(x603==x604)));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x605 = 4U;
	volatile int8_t x606 = INT8_MAX;
	int64_t x607 = INT64_MIN;
	int16_t x608 = -236;
	static volatile int32_t t151 = -3430191;

    t151 = (x605&(x606+(x607==x608)));

    if (t151 != 4) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x610 = INT32_MIN;
	volatile uint16_t x611 = 7U;
	int16_t x612 = 1806;
	int32_t t152 = INT32_MIN;

    t152 = (x609&(x610+(x611==x612)));

    if (t152 != INT32_MIN) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x613 = INT32_MIN;
	static int8_t x614 = INT8_MIN;
	int32_t x615 = -1;
	int16_t x616 = 1462;
	static volatile int32_t t153 = INT32_MIN;

    t153 = (x613&(x614+(x615==x616)));

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x617 = 32487U;
	int16_t x618 = -2955;
	int16_t x620 = INT16_MIN;

    t154 = (x617&(x618+(x619==x620)));

    if (t154 != 29798) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint16_t x621 = 387U;
	volatile int16_t x623 = INT16_MAX;
	volatile uint8_t x624 = UINT8_MAX;
	int32_t t155 = -182085257;

    t155 = (x621&(x622+(x623==x624)));

    if (t155 != 3) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -1LL;
	int8_t x626 = INT8_MIN;
	static volatile uint32_t x627 = UINT32_MAX;
	int32_t x628 = -1;
	volatile int64_t t156 = 0LL;

    t156 = (x625&(x626+(x627==x628)));

    if (t156 != -127LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x629 = 2U;
	uint8_t x630 = 3U;
	uint64_t x631 = 144047095LLU;
	int64_t x632 = -1LL;
	int32_t t157 = -10;

    t157 = (x629&(x630+(x631==x632)));

    if (t157 != 2) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x633 = UINT8_MAX;
	int16_t x634 = INT16_MIN;
	uint32_t x636 = 1U;
	int32_t t158 = 504627;

    t158 = (x633&(x634+(x635==x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = 0;
	static int32_t x638 = -1;
	static volatile int8_t x639 = 2;
	uint64_t x640 = 78LLU;
	int32_t t159 = -923;

    t159 = (x637&(x638+(x639==x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = -160;
	volatile uint32_t x642 = UINT32_MAX;
	int64_t x643 = INT64_MIN;
	static volatile int8_t x644 = INT8_MIN;
	static volatile uint32_t t160 = 203U;

    t160 = (x641&(x642+(x643==x644)));

    if (t160 != 4294967136U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = -15220218;
	int8_t x647 = INT8_MAX;
	static volatile int8_t x648 = INT8_MIN;
	int64_t t161 = INT64_MIN;

    t161 = (x645&(x646+(x647==x648)));

    if (t161 != INT64_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = 33U;
	static volatile int8_t x650 = -1;
	uint16_t x651 = UINT16_MAX;
	int8_t x652 = -1;

    t162 = (x649&(x650+(x651==x652)));

    if (t162 != 33) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	static int16_t x654 = 122;
	volatile int16_t x655 = -1;
	volatile uint8_t x656 = 56U;

    t163 = (x653&(x654+(x655==x656)));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = -11341184829LL;
	uint64_t x658 = 2372027460341442LLU;
	int32_t x659 = -15004332;
	static int32_t x660 = INT32_MIN;

    t164 = (x657&(x658+(x659==x660)));

    if (t164 != 2372024739774658LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = 78823487U;
	uint16_t x662 = 1U;
	static volatile int32_t x663 = INT32_MIN;
	int32_t x664 = -564239811;
	uint32_t t165 = 1030U;

    t165 = (x661&(x662+(x663==x664)));

    if (t165 != 1U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x665 = 4383660LLU;
	volatile int8_t x667 = 44;
	static int64_t x668 = INT64_MIN;
	uint64_t t166 = 3254994498808781LLU;

    t166 = (x665&(x666+(x667==x668)));

    if (t166 != 4383660LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x670 = UINT16_MAX;
	uint64_t x671 = 29795311493LLU;
	static int8_t x672 = 0;
	volatile int32_t t167 = 1;

    t167 = (x669&(x670+(x671==x672)));

    if (t167 != 65535) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x673 = 1056822260425904LLU;
	static uint32_t x674 = 110785U;
	int64_t x675 = INT64_MIN;
	volatile uint16_t x676 = UINT16_MAX;
	volatile uint64_t t168 = 564061LLU;

    t168 = (x673&(x674+(x675==x676)));

    if (t168 != 8320LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x677 = 209;
	int8_t x678 = -1;
	volatile int16_t x679 = INT16_MAX;

    t169 = (x677&(x678+(x679==x680)));

    if (t169 != 209) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x681 = 240;
	int64_t x682 = INT64_MIN;
	uint16_t x683 = 11945U;
	int16_t x684 = INT16_MAX;
	int64_t t170 = 3761355521796157816LL;

    t170 = (x681&(x682+(x683==x684)));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = -1;
	int32_t x686 = INT32_MAX;
	volatile int8_t x687 = INT8_MIN;
	volatile int32_t x688 = -1;
	int32_t t171 = INT32_MAX;

    t171 = (x685&(x686+(x687==x688)));

    if (t171 != INT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MIN;
	uint32_t x690 = 615144864U;
	int32_t x692 = INT32_MAX;
	uint32_t t172 = 29810U;

    t172 = (x689&(x690+(x691==x692)));

    if (t172 != 615120896U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x693 = 25U;
	int8_t x694 = INT8_MAX;
	volatile int64_t x695 = 462687647207LL;

    t173 = (x693&(x694+(x695==x696)));

    if (t173 != 25) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x697 = 29U;
	volatile int32_t x698 = INT32_MIN;
	volatile int8_t x700 = -1;
	int32_t t174 = 290720;

    t174 = (x697&(x698+(x699==x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x701 = INT64_MIN;
	uint8_t x702 = UINT8_MAX;
	int32_t x704 = INT32_MIN;

    t175 = (x701&(x702+(x703==x704)));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x705 = UINT64_MAX;
	static int16_t x706 = 25;
	volatile uint32_t x708 = 768U;

    t176 = (x705&(x706+(x707==x708)));

    if (t176 != 25LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x709 = INT16_MAX;
	uint64_t x710 = UINT64_MAX;
	volatile int8_t x711 = 0;
	uint64_t t177 = 1841191LLU;

    t177 = (x709&(x710+(x711==x712)));

    if (t177 != 32767LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x717 = INT16_MIN;
	static volatile int64_t x718 = -1LL;
	uint8_t x719 = 19U;
	int64_t x720 = INT64_MAX;
	volatile int64_t t178 = 3036094LL;

    t178 = (x717&(x718+(x719==x720)));

    if (t178 != -32768LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint16_t x721 = 3679U;
	static uint32_t x722 = 3021U;
	int32_t x723 = 3;
	volatile int8_t x724 = INT8_MIN;
	volatile uint32_t t179 = 8739144U;

    t179 = (x721&(x722+(x723==x724)));

    if (t179 != 2637U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x725 = 3771;
	int64_t x726 = INT64_MIN;
	volatile uint16_t x727 = 1145U;
	int32_t x728 = INT32_MAX;
	volatile int64_t t180 = -98027016609LL;

    t180 = (x725&(x726+(x727==x728)));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x729 = -92029359LL;
	uint32_t x730 = UINT32_MAX;
	volatile int64_t x731 = -1LL;
	int32_t x732 = 11070;
	volatile int64_t t181 = 2239646LL;

    t181 = (x729&(x730+(x731==x732)));

    if (t181 != 4202937937LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x733 = -27292002;
	static int16_t x734 = 86;
	int16_t x736 = INT16_MIN;
	int32_t t182 = -135348145;

    t182 = (x733&(x734+(x735==x736)));

    if (t182 != 22) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x737 = 26U;
	int64_t x738 = -1810490449LL;
	static uint8_t x739 = UINT8_MAX;
	static uint8_t x740 = UINT8_MAX;
	static int64_t t183 = 5LL;

    t183 = (x737&(x738+(x739==x740)));

    if (t183 != 16LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x741 = UINT8_MAX;
	static volatile uint16_t x744 = 25106U;

    t184 = (x741&(x742+(x743==x744)));

    if (t184 != 255) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x745 = -1;
	int16_t x746 = INT16_MIN;
	uint16_t x748 = 63U;
	int32_t t185 = -556100928;

    t185 = (x745&(x746+(x747==x748)));

    if (t185 != -32768) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x749 = INT8_MAX;
	volatile uint8_t x750 = 7U;
	uint8_t x751 = UINT8_MAX;
	int8_t x752 = -1;

    t186 = (x749&(x750+(x751==x752)));

    if (t186 != 7) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x753 = 7U;
	static int32_t x754 = -29565;
	volatile uint16_t x756 = 217U;

    t187 = (x753&(x754+(x755==x756)));

    if (t187 != 3) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x757 = -16;
	int32_t x758 = INT32_MAX;
	int8_t x759 = -13;
	int32_t x760 = INT32_MAX;
	volatile int32_t t188 = -156054;

    t188 = (x757&(x758+(x759==x760)));

    if (t188 != 2147483632) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x761 = -9;
	int16_t x762 = INT16_MIN;
	int32_t x763 = -1;
	static int32_t x764 = INT32_MAX;

    t189 = (x761&(x762+(x763==x764)));

    if (t189 != -32768) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x765 = -1LL;
	int8_t x766 = 1;
	int8_t x767 = INT8_MIN;
	uint32_t x768 = 499076U;
	volatile int64_t t190 = -2242881401276LL;

    t190 = (x765&(x766+(x767==x768)));

    if (t190 != 1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x771 = UINT8_MAX;
	volatile int64_t x772 = 3745016242LL;
	volatile int32_t t191 = INT32_MIN;

    t191 = (x769&(x770+(x771==x772)));

    if (t191 != INT32_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x773 = INT16_MAX;
	static int16_t x774 = -6;
	int64_t x775 = INT64_MAX;
	int16_t x776 = 0;
	volatile int32_t t192 = -173;

    t192 = (x773&(x774+(x775==x776)));

    if (t192 != 32762) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x777 = -1;
	static int8_t x778 = INT8_MIN;
	int16_t x780 = -11;
	int32_t t193 = 25;

    t193 = (x777&(x778+(x779==x780)));

    if (t193 != -128) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x782 = -1LL;
	int16_t x783 = INT16_MIN;
	int64_t x784 = -15520LL;

    t194 = (x781&(x782+(x783==x784)));

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x785 = INT16_MAX;
	int32_t x786 = -1;
	volatile uint32_t x787 = UINT32_MAX;
	volatile int16_t x788 = INT16_MIN;
	volatile int32_t t195 = 20791;

    t195 = (x785&(x786+(x787==x788)));

    if (t195 != 32767) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x789 = 110U;
	int64_t x790 = -1LL;
	uint8_t x792 = 1U;
	int64_t t196 = -3012749101780975971LL;

    t196 = (x789&(x790+(x791==x792)));

    if (t196 != 110LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x794 = UINT32_MAX;
	static volatile uint8_t x796 = 110U;
	volatile uint32_t t197 = 436998425U;

    t197 = (x793&(x794+(x795==x796)));

    if (t197 != 4294967168U) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x799 = INT16_MIN;
	static int8_t x800 = INT8_MIN;
	volatile int32_t t198 = 0;

    t198 = (x797&(x798+(x799==x800)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x801 = -1;
	int8_t x802 = INT8_MIN;
	volatile int16_t x803 = INT16_MAX;
	int8_t x804 = INT8_MIN;
	volatile int32_t t199 = -4576;

    t199 = (x801&(x802+(x803==x804)));

    if (t199 != -128) { NG(); } else { ; }
	
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


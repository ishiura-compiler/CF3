
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

int32_t x5 = -1;
static volatile int32_t x8 = INT32_MIN;
volatile int32_t x17 = INT32_MIN;
volatile int32_t t4 = INT32_MIN;
int64_t x22 = 19123268LL;
int8_t x23 = -1;
volatile int64_t t5 = -1430266018856617LL;
uint32_t x25 = UINT32_MAX;
static volatile int32_t x27 = INT32_MIN;
volatile int64_t x31 = -1LL;
int16_t x41 = -1;
static int8_t x42 = INT8_MIN;
volatile uint32_t x51 = UINT32_MAX;
int64_t x62 = INT64_MIN;
volatile int16_t x67 = -27;
int8_t x68 = 1;
static volatile int32_t t15 = 15350;
int32_t x82 = -82529;
uint16_t x83 = 0U;
int32_t x87 = INT32_MAX;
static int32_t t22 = 2299484;
int8_t x99 = INT8_MIN;
volatile uint8_t x102 = 8U;
uint32_t x107 = 503U;
volatile int64_t t25 = 253028LL;
uint64_t x109 = UINT64_MAX;
int64_t x111 = 458459021016628835LL;
int8_t x130 = INT8_MIN;
static volatile int16_t x137 = INT16_MIN;
static volatile uint64_t t32 = 84934LLU;
uint16_t x143 = 0U;
int8_t x144 = INT8_MIN;
int8_t x147 = -1;
int32_t x158 = INT32_MIN;
int8_t x159 = INT8_MIN;
uint32_t t36 = 9U;
int64_t x168 = 462603599148483681LL;
volatile int16_t x170 = INT16_MIN;
volatile uint32_t x186 = 3329930U;
uint8_t x193 = 45U;
uint8_t x196 = 79U;
volatile int8_t x203 = INT8_MAX;
uint64_t x207 = UINT64_MAX;
int64_t x211 = -1LL;
static int64_t x221 = INT64_MAX;
uint8_t x222 = 7U;
volatile uint8_t x229 = 49U;
int8_t x232 = INT8_MIN;
uint32_t x235 = UINT32_MAX;
static int64_t x237 = INT64_MAX;
int32_t x241 = 2311040;
static volatile uint64_t t56 = 170769308629LLU;
int8_t x247 = INT8_MIN;
int16_t x248 = INT16_MIN;
uint8_t x251 = 0U;
static volatile uint64_t t58 = 1791900LLU;
volatile int16_t x254 = INT16_MAX;
static int32_t x257 = -10;
uint16_t x259 = 2U;
volatile int16_t x264 = INT16_MIN;
int16_t x265 = INT16_MIN;
int64_t x268 = INT64_MIN;
uint16_t x280 = 173U;
uint32_t x290 = UINT32_MAX;
volatile int64_t x299 = 3676LL;
volatile int64_t t70 = 428675534LL;
static uint32_t t71 = 2190U;
volatile int16_t x308 = INT16_MIN;
static uint64_t t72 = UINT64_MAX;
int8_t x315 = INT8_MIN;
uint32_t x317 = 83U;
int64_t x318 = INT64_MAX;
uint64_t t75 = 24561LLU;
int32_t x321 = -1;
uint64_t t76 = UINT64_MAX;
static uint64_t t77 = 22316851124323LLU;
static volatile uint8_t x330 = 1U;
int32_t x332 = -1;
volatile uint64_t t78 = 357LLU;
int8_t x338 = -1;
static uint32_t x339 = UINT32_MAX;
int8_t x349 = INT8_MIN;
int16_t x351 = INT16_MIN;
volatile uint32_t x356 = 107974U;
int64_t x363 = INT64_MIN;
int64_t t84 = 4637LL;
volatile int32_t x368 = INT32_MIN;
volatile int16_t x394 = INT16_MIN;
volatile int16_t x401 = 2;
uint32_t x402 = UINT32_MAX;
int8_t x404 = INT8_MIN;
uint32_t x411 = 509593U;
volatile int32_t x412 = INT32_MIN;
uint8_t x413 = UINT8_MAX;
int32_t x419 = 0;
int8_t x429 = INT8_MAX;
volatile int8_t x432 = 10;
static volatile uint32_t t98 = 191332809U;
volatile int16_t x434 = INT16_MIN;
uint64_t x435 = 572659527908LLU;
volatile uint64_t t99 = 27177LLU;
uint16_t x441 = 244U;
int8_t x445 = -5;
int32_t x446 = 855005;
static int8_t x447 = INT8_MIN;
int8_t x451 = -1;
int64_t x453 = 278688261104629LL;
int64_t x465 = 2684LL;
int64_t t107 = 5993LL;
int8_t x472 = 2;
int16_t x474 = 23;
uint64_t x477 = 103LLU;
static int32_t x481 = -14186177;
static volatile int8_t x489 = INT8_MIN;
volatile uint16_t x492 = 1269U;
static int8_t x493 = -24;
volatile int32_t x500 = 548;
int64_t x501 = -1LL;
static int8_t x512 = -1;
int64_t t119 = 1817632827548531LL;
uint8_t x517 = 31U;
int32_t t120 = 0;
int16_t x535 = 522;
int8_t x542 = 0;
volatile int8_t x543 = 40;
uint8_t x544 = 1U;
int64_t x547 = 17632098320055381LL;
int32_t x551 = INT32_MIN;
uint8_t x553 = 0U;
volatile int64_t t128 = -8583804110358255LL;
int64_t x559 = INT64_MAX;
volatile int64_t t129 = -101LL;
int8_t x561 = INT8_MIN;
static uint64_t x567 = 271410553LLU;
static volatile uint64_t t132 = 29785LLU;
uint8_t x579 = 15U;
int64_t t135 = 8458211217LL;
uint16_t x592 = 4U;
int64_t x599 = 1268LL;
static uint64_t x605 = 3895332837805472LLU;
uint16_t x610 = 117U;
volatile uint8_t x623 = 0U;
int32_t x626 = -6437;
static int8_t x628 = -1;
static int64_t x629 = INT64_MIN;
volatile int8_t x630 = INT8_MAX;
int16_t x633 = INT16_MAX;
int16_t x635 = INT16_MAX;
static int64_t x638 = -7136522940773645LL;
int16_t x655 = -3;
volatile uint64_t x666 = 5867816902295191050LLU;
uint64_t t156 = 342673LLU;
int16_t x669 = INT16_MIN;
volatile uint16_t x670 = 26U;
int32_t x676 = -149816020;
volatile int64_t t158 = -67LL;
static int32_t x681 = -196;
int32_t x687 = INT32_MIN;
uint8_t x690 = UINT8_MAX;
int64_t x693 = -4887LL;
uint64_t x703 = 228560014957310LLU;
uint8_t x704 = 3U;
static uint8_t x707 = 27U;
static uint32_t x708 = 3198636U;
int16_t x711 = 11151;
volatile uint32_t x716 = 149981085U;
int32_t x717 = -674939784;
int8_t x718 = INT8_MIN;
int16_t x721 = INT16_MIN;
volatile int64_t t171 = -1LL;
int32_t x731 = -1;
static volatile int64_t x732 = INT64_MAX;
int32_t x735 = INT32_MIN;
static volatile int32_t x742 = 711;
int8_t x744 = INT8_MIN;
int32_t t175 = -3575;
int16_t x753 = INT16_MIN;
static uint64_t t178 = 146715LLU;
int8_t x759 = 25;
int16_t x760 = INT16_MIN;
volatile int32_t t179 = -4941;
int16_t x764 = -1;
int16_t x769 = 1;
static volatile uint8_t x773 = 113U;
volatile int64_t t183 = 71314781293610482LL;
static int64_t x792 = INT64_MIN;
static int64_t x795 = INT64_MIN;
int8_t x804 = -1;
int8_t x805 = INT8_MIN;
int64_t x806 = INT64_MAX;
int16_t x808 = INT16_MIN;
int8_t x813 = 1;
int8_t x815 = INT8_MIN;
int16_t x816 = 0;
uint32_t x817 = 380U;
int16_t x822 = -1;
int64_t x827 = INT64_MIN;
static uint8_t x829 = 2U;
volatile int64_t x831 = INT64_MAX;
static int16_t x839 = INT16_MAX;
int8_t x842 = INT8_MIN;
volatile uint8_t x844 = UINT8_MAX;
volatile int32_t t198 = 1467;
int16_t x846 = INT16_MAX;
int64_t x847 = INT64_MAX;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	volatile uint64_t x2 = 5022685000LLU;
	int32_t x3 = INT32_MAX;
	static int32_t x4 = INT32_MIN;
	uint64_t t0 = 425093781507175LLU;

    t0 = (x1-(x2/(x3|x4)));

    if (t0 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x6 = 540226551312786318LLU;
	uint32_t x7 = 2051124U;
	static uint64_t t1 = 5922591403339633LLU;

    t1 = (x5-(x6/(x7|x8)));

    if (t1 != 18446744073458229070LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MAX;
	int64_t x10 = INT64_MIN;
	int64_t x11 = -94824785253155713LL;
	static uint64_t x12 = UINT64_MAX;
	static volatile uint64_t t2 = 33LLU;

    t2 = (x9-(x10/(x11|x12)));

    if (t2 != 127LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 7LL;
	int64_t x14 = INT64_MAX;
	uint64_t x15 = UINT64_MAX;
	static volatile uint8_t x16 = 37U;
	volatile uint64_t t3 = 159683265582001096LLU;

    t3 = (x13-(x14/(x15|x16)));

    if (t3 != 7LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x18 = 1U;
	static int8_t x19 = INT8_MIN;
	static int32_t x20 = 132293;

    t4 = (x17-(x18/(x19|x20)));

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 1451U;
	static uint8_t x24 = UINT8_MAX;

    t5 = (x21-(x22/(x23|x24)));

    if (t5 != 19124719LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = -1;
	uint16_t x28 = UINT16_MAX;
	uint32_t t6 = UINT32_MAX;

    t6 = (x25-(x26/(x27|x28)));

    if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -35;
	int16_t x30 = INT16_MIN;
	int16_t x32 = INT16_MIN;
	volatile int64_t t7 = 283405756417LL;

    t7 = (x29-(x30/(x31|x32)));

    if (t7 != -32803LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MAX;
	int8_t x34 = INT8_MIN;
	volatile uint32_t x35 = UINT32_MAX;
	static int16_t x36 = INT16_MIN;
	uint32_t t8 = 419364U;

    t8 = (x33-(x34/(x35|x36)));

    if (t8 != 32767U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = -1;
	int16_t x38 = -636;
	int64_t x39 = 1816731886776704270LL;
	int64_t x40 = -33407LL;
	int64_t t9 = 53549321572LL;

    t9 = (x37-(x38/(x39|x40)));

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x43 = UINT16_MAX;
	static int32_t x44 = 3;
	int32_t t10 = 675;

    t10 = (x41-(x42/(x43|x44)));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	int8_t x46 = INT8_MIN;
	static int16_t x47 = INT16_MIN;
	uint8_t x48 = 0U;
	volatile int32_t t11 = -1447;

    t11 = (x45-(x46/(x47|x48)));

    if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x49 = UINT8_MAX;
	volatile uint8_t x50 = UINT8_MAX;
	int16_t x52 = INT16_MAX;
	volatile uint32_t t12 = 2U;

    t12 = (x49-(x50/(x51|x52)));

    if (t12 != 255U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x57 = 1U;
	uint32_t x58 = UINT32_MAX;
	int32_t x59 = -181321356;
	uint32_t x60 = UINT32_MAX;
	static volatile uint32_t t13 = 1U;

    t13 = (x57-(x58/(x59|x60)));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x61 = UINT16_MAX;
	volatile uint64_t x63 = 587508273001LLU;
	static int32_t x64 = -1;
	static volatile uint64_t t14 = 2017LLU;

    t14 = (x61-(x62/(x63|x64)));

    if (t14 != 65535LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x65 = 3U;
	int16_t x66 = INT16_MAX;

    t15 = (x65-(x66/(x67|x68)));

    if (t15 != 1216) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = INT32_MAX;
	volatile int64_t x70 = INT64_MIN;
	uint8_t x71 = 6U;
	volatile int8_t x72 = INT8_MIN;
	static int64_t t16 = -19632LL;

    t16 = (x69-(x70/(x71|x72)));

    if (t16 != -75601407990670253LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = 0U;
	uint32_t x74 = UINT32_MAX;
	uint64_t x75 = 717755810153494755LLU;
	int32_t x76 = -1;
	volatile uint64_t t17 = 6044953154493772LLU;

    t17 = (x73-(x74/(x75|x76)));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = 31;
	static volatile int8_t x78 = INT8_MAX;
	int64_t x79 = INT64_MIN;
	int64_t x80 = INT64_MIN;
	static int64_t t18 = 1271650626LL;

    t18 = (x77-(x78/(x79|x80)));

    if (t18 != 31LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = INT8_MAX;
	volatile int16_t x84 = INT16_MAX;
	int32_t t19 = 6881763;

    t19 = (x81-(x82/(x83|x84)));

    if (t19 != 129) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x85 = 29U;
	uint64_t x86 = 485LLU;
	volatile uint16_t x88 = 992U;
	static volatile uint64_t t20 = 154686146LLU;

    t20 = (x85-(x86/(x87|x88)));

    if (t20 != 29LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = -1;
	int16_t x90 = INT16_MAX;
	int32_t x91 = -1;
	int16_t x92 = INT16_MIN;
	int32_t t21 = -201981;

    t21 = (x89-(x90/(x91|x92)));

    if (t21 != 32766) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = INT16_MIN;
	int8_t x94 = INT8_MIN;
	uint16_t x95 = 952U;
	volatile int8_t x96 = -2;

    t22 = (x93-(x94/(x95|x96)));

    if (t22 != -32832) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x97 = UINT16_MAX;
	int8_t x98 = 6;
	uint16_t x100 = 2189U;
	static volatile int32_t t23 = -55964;

    t23 = (x97-(x98/(x99|x100)));

    if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = 1;
	int32_t x103 = -1;
	volatile int64_t x104 = -12LL;
	static int64_t t24 = 997584806747LL;

    t24 = (x101-(x102/(x103|x104)));

    if (t24 != 9LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x105 = INT32_MIN;
	static int64_t x106 = INT64_MIN;
	int8_t x108 = INT8_MAX;

    t25 = (x105-(x106/(x107|x108)));

    if (t25 != 18049649588044289LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x110 = INT8_MIN;
	uint32_t x112 = 1745U;
	volatile uint64_t t26 = UINT64_MAX;

    t26 = (x109-(x110/(x111|x112)));

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = INT32_MAX;
	int64_t x114 = INT64_MIN;
	static uint64_t x115 = 415117842722369762LLU;
	volatile int64_t x116 = INT64_MIN;
	volatile uint64_t t27 = 109LLU;

    t27 = (x113-(x114/(x115|x116)));

    if (t27 != 2147483647LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x121 = INT8_MIN;
	int32_t x122 = -1;
	uint16_t x123 = 19U;
	int64_t x124 = INT64_MIN;
	int64_t t28 = -450433693LL;

    t28 = (x121-(x122/(x123|x124)));

    if (t28 != -128LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x125 = INT16_MIN;
	int64_t x126 = -40540973744842502LL;
	static uint16_t x127 = UINT16_MAX;
	int64_t x128 = 5078931447LL;
	static volatile int64_t t29 = -1873LL;

    t29 = (x125-(x126/(x127|x128)));

    if (t29 != 7949350LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x129 = -1;
	static volatile int64_t x131 = -143031999845LL;
	int8_t x132 = INT8_MAX;
	static volatile int64_t t30 = -4177981LL;

    t30 = (x129-(x130/(x131|x132)));

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x133 = 17291U;
	int16_t x134 = -6;
	volatile int16_t x135 = 13135;
	uint8_t x136 = 7U;
	volatile int32_t t31 = -125114054;

    t31 = (x133-(x134/(x135|x136)));

    if (t31 != 17291) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x138 = UINT64_MAX;
	int8_t x139 = 8;
	volatile uint8_t x140 = 11U;

    t32 = (x137-(x138/(x139|x140)));

    if (t32 != 16769767339735923247LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x141 = INT8_MIN;
	static int8_t x142 = INT8_MAX;
	volatile int32_t t33 = -72148336;

    t33 = (x141-(x142/(x143|x144)));

    if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x145 = 32523LLU;
	int8_t x146 = -1;
	uint16_t x148 = UINT16_MAX;
	uint64_t t34 = 153094LLU;

    t34 = (x145-(x146/(x147|x148)));

    if (t34 != 32522LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x153 = -419605LL;
	int32_t x154 = INT32_MIN;
	static volatile int16_t x155 = INT16_MIN;
	volatile int16_t x156 = INT16_MIN;
	int64_t t35 = 1LL;

    t35 = (x153-(x154/(x155|x156)));

    if (t35 != -485141LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x157 = INT16_MAX;
	static volatile uint32_t x160 = 247U;

    t36 = (x157-(x158/(x159|x160)));

    if (t36 != 32767U) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x161 = 1U;
	static uint64_t x162 = 1431323827LLU;
	static volatile int32_t x163 = INT32_MAX;
	int32_t x164 = INT32_MIN;
	static uint64_t t37 = 15258810LLU;

    t37 = (x161-(x162/(x163|x164)));

    if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x165 = INT64_MAX;
	int64_t x166 = -1LL;
	int8_t x167 = -1;
	volatile int64_t t38 = -110922681LL;

    t38 = (x165-(x166/(x167|x168)));

    if (t38 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x169 = 13644518;
	uint8_t x171 = UINT8_MAX;
	int8_t x172 = INT8_MAX;
	volatile int32_t t39 = 4730;

    t39 = (x169-(x170/(x171|x172)));

    if (t39 != 13644646) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x173 = -1LL;
	volatile int16_t x174 = INT16_MIN;
	volatile uint32_t x175 = UINT32_MAX;
	uint16_t x176 = 1U;
	static int64_t t40 = 327LL;

    t40 = (x173-(x174/(x175|x176)));

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x177 = 13987;
	int16_t x178 = 5;
	static int16_t x179 = -1;
	int32_t x180 = INT32_MIN;
	int32_t t41 = -23;

    t41 = (x177-(x178/(x179|x180)));

    if (t41 != 13992) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x181 = INT8_MIN;
	static int64_t x182 = 53081956886994LL;
	volatile int32_t x183 = INT32_MIN;
	int16_t x184 = INT16_MIN;
	int64_t t42 = 31LL;

    t42 = (x181-(x182/(x183|x184)));

    if (t42 != 1619932638LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x185 = 7290U;
	uint8_t x187 = 0U;
	volatile int16_t x188 = INT16_MAX;
	uint32_t t43 = 321277U;

    t43 = (x185-(x186/(x187|x188)));

    if (t43 != 7189U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x189 = -448064008;
	volatile int8_t x190 = INT8_MIN;
	static int32_t x191 = INT32_MAX;
	int16_t x192 = INT16_MIN;
	volatile int32_t t44 = 1044562310;

    t44 = (x189-(x190/(x191|x192)));

    if (t44 != -448064136) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x194 = INT8_MIN;
	static uint32_t x195 = 114169U;
	volatile uint32_t t45 = 66U;

    t45 = (x193-(x194/(x195|x196)));

    if (t45 != 4294929724U) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x197 = INT32_MAX;
	static int64_t x198 = 0LL;
	int32_t x199 = INT32_MAX;
	uint64_t x200 = 2491120478327046345LLU;
	volatile uint64_t t46 = 39842499957LLU;

    t46 = (x197-(x198/(x199|x200)));

    if (t46 != 2147483647LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x201 = INT16_MIN;
	volatile int32_t x202 = INT32_MIN;
	volatile uint16_t x204 = 57U;
	volatile int32_t t47 = 601798;

    t47 = (x201-(x202/(x203|x204)));

    if (t47 != 16876552) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x205 = 1;
	volatile int8_t x206 = INT8_MIN;
	volatile int64_t x208 = -1LL;
	volatile uint64_t t48 = 3804791984538956LLU;

    t48 = (x205-(x206/(x207|x208)));

    if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x209 = 5U;
	static uint16_t x210 = 12705U;
	uint32_t x212 = UINT32_MAX;
	int64_t t49 = 464303LL;

    t49 = (x209-(x210/(x211|x212)));

    if (t49 != 12710LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x213 = UINT8_MAX;
	int8_t x214 = INT8_MIN;
	volatile int8_t x215 = INT8_MIN;
	int8_t x216 = INT8_MAX;
	volatile int32_t t50 = 1;

    t50 = (x213-(x214/(x215|x216)));

    if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x217 = UINT8_MAX;
	int8_t x218 = -1;
	int32_t x219 = INT32_MIN;
	int16_t x220 = INT16_MAX;
	int32_t t51 = 1237726;

    t51 = (x217-(x218/(x219|x220)));

    if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x223 = 12563905656160281LL;
	int8_t x224 = INT8_MIN;
	static int64_t t52 = INT64_MAX;

    t52 = (x221-(x222/(x223|x224)));

    if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x230 = 0;
	int16_t x231 = -1;
	static int32_t t53 = -672389057;

    t53 = (x229-(x230/(x231|x232)));

    if (t53 != 49) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x233 = -1LL;
	uint64_t x234 = 444616887LLU;
	int64_t x236 = 51LL;
	volatile uint64_t t54 = UINT64_MAX;

    t54 = (x233-(x234/(x235|x236)));

    if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x238 = 0;
	static uint64_t x239 = 3587LLU;
	uint8_t x240 = UINT8_MAX;
	volatile uint64_t t55 = 1LLU;

    t55 = (x237-(x238/(x239|x240)));

    if (t55 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x242 = UINT8_MAX;
	uint64_t x243 = UINT64_MAX;
	uint32_t x244 = 25U;

    t56 = (x241-(x242/(x243|x244)));

    if (t56 != 2311040LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x245 = 1466;
	uint8_t x246 = UINT8_MAX;
	int32_t t57 = 4;

    t57 = (x245-(x246/(x247|x248)));

    if (t57 != 1467) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x249 = INT32_MIN;
	uint64_t x250 = UINT64_MAX;
	int64_t x252 = INT64_MAX;

    t58 = (x249-(x250/(x251|x252)));

    if (t58 != 18446744071562067966LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x253 = INT16_MIN;
	volatile uint8_t x255 = 34U;
	int32_t x256 = -1;
	int32_t t59 = 73;

    t59 = (x253-(x254/(x255|x256)));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x258 = UINT8_MAX;
	volatile uint16_t x260 = UINT16_MAX;
	volatile int32_t t60 = -8983;

    t60 = (x257-(x258/(x259|x260)));

    if (t60 != -10) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x261 = 3238892;
	int8_t x262 = 2;
	uint16_t x263 = 30212U;
	int32_t t61 = 146470;

    t61 = (x261-(x262/(x263|x264)));

    if (t61 != 3238892) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x266 = 1640U;
	int32_t x267 = 4130324;
	int64_t t62 = 2020037038921LL;

    t62 = (x265-(x266/(x267|x268)));

    if (t62 != -32768LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x269 = INT8_MAX;
	int64_t x270 = INT64_MIN;
	int16_t x271 = INT16_MAX;
	uint8_t x272 = UINT8_MAX;
	int64_t t63 = -28192181080LL;

    t63 = (x269-(x270/(x271|x272)));

    if (t63 != 281483566907527LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x273 = INT32_MAX;
	int32_t x274 = -814574;
	int8_t x275 = -13;
	uint64_t x276 = 81739997LLU;
	volatile uint64_t t64 = 96LLU;

    t64 = (x273-(x274/(x275|x276)));

    if (t64 != 2147483647LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x277 = 6U;
	uint8_t x278 = UINT8_MAX;
	uint64_t x279 = 62747LLU;
	uint64_t t65 = 8111719686703512951LLU;

    t65 = (x277-(x278/(x279|x280)));

    if (t65 != 6LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x281 = -3290;
	uint64_t x282 = 14533206LLU;
	static volatile uint8_t x283 = UINT8_MAX;
	int64_t x284 = INT64_MIN;
	uint64_t t66 = 80658383725402854LLU;

    t66 = (x281-(x282/(x283|x284)));

    if (t66 != 18446744073709548326LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x285 = -1405;
	int16_t x286 = INT16_MIN;
	int64_t x287 = -1LL;
	volatile int32_t x288 = INT32_MIN;
	int64_t t67 = 539752899319498LL;

    t67 = (x285-(x286/(x287|x288)));

    if (t67 != -34173LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x289 = UINT32_MAX;
	int32_t x291 = INT32_MIN;
	int32_t x292 = INT32_MIN;
	volatile uint32_t t68 = 475315U;

    t68 = (x289-(x290/(x291|x292)));

    if (t68 != 4294967294U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x293 = 1927LLU;
	static int8_t x294 = INT8_MAX;
	uint8_t x295 = 70U;
	uint64_t x296 = 1167820872560931LLU;
	static uint64_t t69 = 21523976360LLU;

    t69 = (x293-(x294/(x295|x296)));

    if (t69 != 1927LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int32_t x297 = INT32_MAX;
	int32_t x298 = 112833649;
	volatile int8_t x300 = INT8_MAX;

    t70 = (x297-(x298/(x299|x300)));

    if (t70 != 2147453242LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x301 = 382U;
	volatile int16_t x302 = INT16_MIN;
	volatile uint32_t x303 = 87U;
	volatile uint8_t x304 = UINT8_MAX;

    t71 = (x301-(x302/(x303|x304)));

    if (t71 != 4278124798U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x305 = UINT64_MAX;
	int8_t x306 = INT8_MAX;
	volatile int32_t x307 = -1351687;

    t72 = (x305-(x306/(x307|x308)));

    if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x309 = 1758714U;
	int8_t x310 = -1;
	uint8_t x311 = 13U;
	int64_t x312 = -62174880333LL;
	int64_t t73 = 9875961537627LL;

    t73 = (x309-(x310/(x311|x312)));

    if (t73 != 1758714LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x313 = INT32_MIN;
	static uint8_t x314 = UINT8_MAX;
	uint64_t x316 = 3LLU;
	volatile uint64_t t74 = 29124677743LLU;

    t74 = (x313-(x314/(x315|x316)));

    if (t74 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x319 = UINT64_MAX;
	uint16_t x320 = 5629U;

    t75 = (x317-(x318/(x319|x320)));

    if (t75 != 83LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x322 = INT8_MIN;
	int8_t x323 = INT8_MAX;
	static volatile uint64_t x324 = UINT64_MAX;

    t76 = (x321-(x322/(x323|x324)));

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x325 = 6U;
	uint64_t x326 = UINT64_MAX;
	volatile int8_t x327 = 0;
	int32_t x328 = -1;

    t77 = (x325-(x326/(x327|x328)));

    if (t77 != 5LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x329 = INT32_MAX;
	uint64_t x331 = UINT64_MAX;

    t78 = (x329-(x330/(x331|x332)));

    if (t78 != 2147483647LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x337 = INT8_MAX;
	volatile uint32_t x340 = UINT32_MAX;
	volatile uint32_t t79 = 123072794U;

    t79 = (x337-(x338/(x339|x340)));

    if (t79 != 126U) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x341 = INT64_MIN;
	volatile int8_t x342 = 10;
	int32_t x343 = INT32_MIN;
	uint8_t x344 = 7U;
	int64_t t80 = INT64_MIN;

    t80 = (x341-(x342/(x343|x344)));

    if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x350 = 1U;
	volatile int32_t x352 = INT32_MIN;
	int32_t t81 = 722163471;

    t81 = (x349-(x350/(x351|x352)));

    if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x353 = -1;
	int8_t x354 = -2;
	uint64_t x355 = 28618565349026161LLU;
	static uint64_t t82 = 213987854881843LLU;

    t82 = (x353-(x354/(x355|x356)));

    if (t82 != 18446744073709550971LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x357 = INT32_MAX;
	int8_t x358 = -1;
	int64_t x359 = -1LL;
	volatile uint64_t x360 = UINT64_MAX;
	uint64_t t83 = 121608LLU;

    t83 = (x357-(x358/(x359|x360)));

    if (t83 != 2147483646LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x361 = 26;
	uint16_t x362 = UINT16_MAX;
	volatile int8_t x364 = INT8_MIN;

    t84 = (x361-(x362/(x363|x364)));

    if (t84 != 537LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x365 = INT64_MAX;
	int32_t x366 = INT32_MIN;
	uint16_t x367 = 7392U;
	static volatile int64_t t85 = 236LL;

    t85 = (x365-(x366/(x367|x368)));

    if (t85 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x373 = INT64_MIN;
	static uint32_t x374 = 13356679U;
	uint64_t x375 = 21695262168535659LLU;
	int32_t x376 = -1;
	volatile uint64_t t86 = 98474LLU;

    t86 = (x373-(x374/(x375|x376)));

    if (t86 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x377 = 6U;
	uint8_t x378 = 4U;
	int8_t x379 = INT8_MIN;
	int16_t x380 = INT16_MIN;
	int32_t t87 = 17598488;

    t87 = (x377-(x378/(x379|x380)));

    if (t87 != 6) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x381 = 972052LLU;
	int8_t x382 = 0;
	uint32_t x383 = 964253U;
	int32_t x384 = 1;
	volatile uint64_t t88 = 7109777471997136LLU;

    t88 = (x381-(x382/(x383|x384)));

    if (t88 != 972052LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x393 = -1;
	static int8_t x395 = -1;
	volatile uint64_t x396 = 571450LLU;
	volatile uint64_t t89 = UINT64_MAX;

    t89 = (x393-(x394/(x395|x396)));

    if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x397 = INT32_MIN;
	static volatile int8_t x398 = -1;
	uint16_t x399 = 1485U;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t90 = INT32_MIN;

    t90 = (x397-(x398/(x399|x400)));

    if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x403 = -1;
	volatile uint32_t t91 = 1911896909U;

    t91 = (x401-(x402/(x403|x404)));

    if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x405 = 1414U;
	int64_t x406 = -11931LL;
	int64_t x407 = -1LL;
	static int16_t x408 = INT16_MIN;
	volatile int64_t t92 = 248401219453LL;

    t92 = (x405-(x406/(x407|x408)));

    if (t92 != -10517LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x409 = -1LL;
	static int16_t x410 = -2826;
	volatile int64_t t93 = 1085146851420LL;

    t93 = (x409-(x410/(x411|x412)));

    if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x414 = 5211;
	uint8_t x415 = UINT8_MAX;
	int8_t x416 = INT8_MIN;
	volatile int32_t t94 = 1006278;

    t94 = (x413-(x414/(x415|x416)));

    if (t94 != 5466) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x417 = UINT64_MAX;
	uint16_t x418 = UINT16_MAX;
	int64_t x420 = INT64_MAX;
	static volatile uint64_t t95 = UINT64_MAX;

    t95 = (x417-(x418/(x419|x420)));

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x421 = INT64_MIN;
	static volatile int16_t x422 = INT16_MAX;
	int16_t x423 = INT16_MIN;
	int16_t x424 = INT16_MIN;
	volatile int64_t t96 = INT64_MIN;

    t96 = (x421-(x422/(x423|x424)));

    if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x425 = INT32_MIN;
	int8_t x426 = -25;
	int16_t x427 = INT16_MIN;
	uint32_t x428 = 848U;
	uint32_t t97 = 661446043U;

    t97 = (x425-(x426/(x427|x428)));

    if (t97 != 2147483647U) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x430 = UINT32_MAX;
	uint32_t x431 = 1772U;

    t98 = (x429-(x430/(x431|x432)));

    if (t98 != 4292546360U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x433 = 5U;
	static volatile int8_t x436 = -2;

    t99 = (x433-(x434/(x435|x436)));

    if (t99 != 5LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x437 = 143U;
	uint8_t x438 = 2U;
	volatile int32_t x439 = -1;
	volatile int64_t x440 = -1LL;
	int64_t t100 = -4852614285072LL;

    t100 = (x437-(x438/(x439|x440)));

    if (t100 != 145LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x442 = INT64_MIN;
	int16_t x443 = INT16_MIN;
	static uint8_t x444 = 1U;
	int64_t t101 = -54893LL;

    t101 = (x441-(x442/(x443|x444)));

    if (t101 != -281483566907156LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x448 = 4702989117499LL;
	static volatile int64_t t102 = 19255847344500707LL;

    t102 = (x445-(x446/(x447|x448)));

    if (t102 != 12386LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x449 = 492190043U;
	int16_t x450 = 404;
	int32_t x452 = 915;
	static uint32_t t103 = 14124345U;

    t103 = (x449-(x450/(x451|x452)));

    if (t103 != 492190447U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x454 = 6U;
	int64_t x455 = 172457866LL;
	volatile uint32_t x456 = 726929004U;
	static int64_t t104 = 23197927LL;

    t104 = (x453-(x454/(x455|x456)));

    if (t104 != 278688261104629LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x457 = 4U;
	int16_t x458 = -15022;
	volatile uint16_t x459 = UINT16_MAX;
	uint8_t x460 = 7U;
	int32_t t105 = 415;

    t105 = (x457-(x458/(x459|x460)));

    if (t105 != 4) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x461 = INT16_MIN;
	uint16_t x462 = UINT16_MAX;
	uint16_t x463 = 1U;
	uint32_t x464 = 60410U;
	volatile uint32_t t106 = 287879171U;

    t106 = (x461-(x462/(x463|x464)));

    if (t106 != 4294934527U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x466 = INT16_MAX;
	volatile int16_t x467 = INT16_MIN;
	int64_t x468 = -19LL;

    t107 = (x465-(x466/(x467|x468)));

    if (t107 != 4408LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x469 = -21;
	static volatile int16_t x470 = -3327;
	volatile int64_t x471 = -1LL;
	static volatile int64_t t108 = -270LL;

    t108 = (x469-(x470/(x471|x472)));

    if (t108 != -3348LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x473 = 3U;
	static int8_t x475 = -1;
	int32_t x476 = INT32_MIN;
	int32_t t109 = 2695606;

    t109 = (x473-(x474/(x475|x476)));

    if (t109 != 26) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x478 = UINT64_MAX;
	volatile int32_t x479 = -1;
	volatile int8_t x480 = INT8_MIN;
	uint64_t t110 = 115922701430479140LLU;

    t110 = (x477-(x478/(x479|x480)));

    if (t110 != 102LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int16_t x482 = INT16_MIN;
	uint64_t x483 = UINT64_MAX;
	volatile uint8_t x484 = 2U;
	volatile uint64_t t111 = 584808LLU;

    t111 = (x481-(x482/(x483|x484)));

    if (t111 != 18446744073695365439LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x485 = 6;
	int8_t x486 = 26;
	uint32_t x487 = 3U;
	uint16_t x488 = UINT16_MAX;
	uint32_t t112 = 920U;

    t112 = (x485-(x486/(x487|x488)));

    if (t112 != 6U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x490 = -1;
	volatile int64_t x491 = -1LL;
	static volatile int64_t t113 = -638192LL;

    t113 = (x489-(x490/(x491|x492)));

    if (t113 != -129LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x494 = UINT8_MAX;
	int8_t x495 = INT8_MIN;
	int16_t x496 = -1;
	int32_t t114 = -222;

    t114 = (x493-(x494/(x495|x496)));

    if (t114 != 231) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x497 = INT32_MIN;
	uint64_t x498 = 9301LLU;
	int8_t x499 = INT8_MIN;
	uint64_t t115 = 6872014390867207018LLU;

    t115 = (x497-(x498/(x499|x500)));

    if (t115 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x502 = INT32_MIN;
	int8_t x503 = INT8_MAX;
	static uint32_t x504 = 128U;
	int64_t t116 = 1014399593210216LL;

    t116 = (x501-(x502/(x503|x504)));

    if (t116 != -8421505LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x505 = INT32_MIN;
	int16_t x506 = -1;
	uint64_t x507 = 1100170460864726LLU;
	int32_t x508 = -9;
	uint64_t t117 = 2157626LLU;

    t117 = (x505-(x506/(x507|x508)));

    if (t117 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x509 = 4U;
	uint16_t x510 = 293U;
	int32_t x511 = -1;
	volatile int32_t t118 = 343168;

    t118 = (x509-(x510/(x511|x512)));

    if (t118 != 297) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x513 = INT16_MIN;
	int64_t x514 = INT64_MAX;
	static uint16_t x515 = 36U;
	int16_t x516 = -1;

    t119 = (x513-(x514/(x515|x516)));

    if (t119 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x518 = INT8_MAX;
	uint16_t x519 = UINT16_MAX;
	int32_t x520 = INT32_MIN;

    t120 = (x517-(x518/(x519|x520)));

    if (t120 != 31) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x521 = 638046849048238LLU;
	static int8_t x522 = 1;
	volatile int32_t x523 = -1;
	uint16_t x524 = 10U;
	uint64_t t121 = 1635938607941760LLU;

    t121 = (x521-(x522/(x523|x524)));

    if (t121 != 638046849048239LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x525 = UINT8_MAX;
	int16_t x526 = INT16_MAX;
	volatile int32_t x527 = INT32_MIN;
	int16_t x528 = INT16_MIN;
	int32_t t122 = -403406816;

    t122 = (x525-(x526/(x527|x528)));

    if (t122 != 255) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x533 = INT8_MIN;
	int8_t x534 = INT8_MAX;
	int64_t x536 = INT64_MIN;
	int64_t t123 = -212312883009573564LL;

    t123 = (x533-(x534/(x535|x536)));

    if (t123 != -128LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x537 = 134;
	uint64_t x538 = 66151411736440LLU;
	static int64_t x539 = -46777329045LL;
	int32_t x540 = INT32_MIN;
	volatile uint64_t t124 = 998817923624LLU;

    t124 = (x537-(x538/(x539|x540)));

    if (t124 != 134LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x541 = 5U;
	int32_t t125 = -107;

    t125 = (x541-(x542/(x543|x544)));

    if (t125 != 5) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x545 = -10;
	volatile int64_t x546 = INT64_MIN;
	uint32_t x548 = 4U;
	volatile int64_t t126 = -6LL;

    t126 = (x545-(x546/(x547|x548)));

    if (t126 != 513LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x549 = -1LL;
	int64_t x550 = INT64_MIN;
	static uint16_t x552 = 467U;
	volatile int64_t t127 = 1999622219217521LL;

    t127 = (x549-(x550/(x551|x552)));

    if (t127 != -4294968231LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x554 = 15884291879707364LL;
	int8_t x555 = INT8_MIN;
	int32_t x556 = -258918;

    t128 = (x553-(x554/(x555|x556)));

    if (t128 != 155728351761836LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x557 = -1;
	uint32_t x558 = UINT32_MAX;
	uint16_t x560 = 1500U;

    t129 = (x557-(x558/(x559|x560)));

    if (t129 != -1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x562 = -1;
	volatile uint8_t x563 = 8U;
	int16_t x564 = 1;
	static volatile int32_t t130 = 171481;

    t130 = (x561-(x562/(x563|x564)));

    if (t130 != -128) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x565 = INT64_MAX;
	int8_t x566 = 52;
	int32_t x568 = -3952;
	volatile uint64_t t131 = 7546LLU;

    t131 = (x565-(x566/(x567|x568)));

    if (t131 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x569 = -1;
	uint64_t x570 = UINT64_MAX;
	int32_t x571 = 7712;
	int8_t x572 = INT8_MIN;

    t132 = (x569-(x570/(x571|x572)));

    if (t132 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x573 = UINT64_MAX;
	int16_t x574 = INT16_MAX;
	static int32_t x575 = INT32_MAX;
	int32_t x576 = -1;
	uint64_t t133 = 14LLU;

    t133 = (x573-(x574/(x575|x576)));

    if (t133 != 32766LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x577 = UINT32_MAX;
	volatile int32_t x578 = INT32_MIN;
	volatile int16_t x580 = INT16_MIN;
	volatile uint32_t t134 = 562602U;

    t134 = (x577-(x578/(x579|x580)));

    if (t134 != 4294901729U) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x581 = 1U;
	int64_t x582 = INT64_MIN;
	uint16_t x583 = 0U;
	int64_t x584 = INT64_MAX;

    t135 = (x581-(x582/(x583|x584)));

    if (t135 != 2LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x585 = 5193;
	uint64_t x586 = 66342172245LLU;
	uint64_t x587 = UINT64_MAX;
	static int32_t x588 = -2191420;
	uint64_t t136 = 29989097990066LLU;

    t136 = (x585-(x586/(x587|x588)));

    if (t136 != 5193LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x589 = 43794958;
	int16_t x590 = -802;
	int32_t x591 = INT32_MIN;
	volatile int32_t t137 = 3005912;

    t137 = (x589-(x590/(x591|x592)));

    if (t137 != 43794958) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x593 = -50514310778LL;
	int32_t x594 = INT32_MAX;
	volatile uint16_t x595 = 765U;
	int8_t x596 = INT8_MIN;
	int64_t t138 = -166611695532LL;

    t138 = (x593-(x594/(x595|x596)));

    if (t138 != -49798482896LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x597 = 17592178LL;
	volatile int8_t x598 = -41;
	int32_t x600 = INT32_MIN;
	volatile int64_t t139 = 16154401335154LL;

    t139 = (x597-(x598/(x599|x600)));

    if (t139 != 17592178LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x601 = 80332244LLU;
	int8_t x602 = -6;
	static int64_t x603 = -961LL;
	int64_t x604 = -186603979LL;
	volatile uint64_t t140 = 21680752783600LLU;

    t140 = (x601-(x602/(x603|x604)));

    if (t140 != 80332244LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x606 = -1;
	int64_t x607 = 13922904953151576LL;
	static uint16_t x608 = 1094U;
	uint64_t t141 = 1684LLU;

    t141 = (x605-(x606/(x607|x608)));

    if (t141 != 3895332837805472LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x609 = UINT32_MAX;
	static int16_t x611 = INT16_MIN;
	int8_t x612 = INT8_MIN;
	uint32_t t142 = UINT32_MAX;

    t142 = (x609-(x610/(x611|x612)));

    if (t142 != UINT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x613 = INT16_MIN;
	uint8_t x614 = 76U;
	int16_t x615 = -1;
	static int64_t x616 = 6365396083LL;
	int64_t t143 = -1459346610214LL;

    t143 = (x613-(x614/(x615|x616)));

    if (t143 != -32692LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x617 = 83U;
	int8_t x618 = INT8_MIN;
	int32_t x619 = -4;
	int64_t x620 = INT64_MIN;
	volatile int64_t t144 = 186837603885LL;

    t144 = (x617-(x618/(x619|x620)));

    if (t144 != 51LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x621 = 63U;
	static uint8_t x622 = 6U;
	uint32_t x624 = 2U;
	volatile uint32_t t145 = 14757010U;

    t145 = (x621-(x622/(x623|x624)));

    if (t145 != 60U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x625 = 11U;
	uint8_t x627 = UINT8_MAX;
	int32_t t146 = -111;

    t146 = (x625-(x626/(x627|x628)));

    if (t146 != -6426) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x631 = UINT32_MAX;
	volatile int32_t x632 = -8638380;
	int64_t t147 = INT64_MIN;

    t147 = (x629-(x630/(x631|x632)));

    if (t147 != INT64_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x634 = UINT32_MAX;
	int16_t x636 = 0;
	volatile uint32_t t148 = 6U;

    t148 = (x633-(x634/(x635|x636)));

    if (t148 != 4294868987U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x637 = UINT32_MAX;
	int64_t x639 = INT64_MIN;
	static int8_t x640 = -2;
	int64_t t149 = -3194580490157LL;

    t149 = (x637-(x638/(x639|x640)));

    if (t149 != -3568257175419527LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x641 = UINT16_MAX;
	static volatile int32_t x642 = INT32_MAX;
	int8_t x643 = INT8_MIN;
	static int8_t x644 = INT8_MIN;
	static volatile int32_t t150 = -45694961;

    t150 = (x641-(x642/(x643|x644)));

    if (t150 != 16842750) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x645 = -8;
	volatile int32_t x646 = INT32_MIN;
	static volatile int64_t x647 = INT64_MIN;
	int16_t x648 = 12342;
	int64_t t151 = 38LL;

    t151 = (x645-(x646/(x647|x648)));

    if (t151 != -8LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x649 = -2886;
	uint32_t x650 = 33057205U;
	uint8_t x651 = 89U;
	static int16_t x652 = INT16_MIN;
	uint32_t t152 = 1306749U;

    t152 = (x649-(x650/(x651|x652)));

    if (t152 != 4294964410U) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x653 = INT32_MIN;
	uint16_t x654 = 220U;
	int32_t x656 = INT32_MIN;
	volatile int32_t t153 = 768;

    t153 = (x653-(x654/(x655|x656)));

    if (t153 != -2147483575) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x657 = -1;
	int8_t x658 = INT8_MAX;
	uint64_t x659 = 16798882871LLU;
	int64_t x660 = INT64_MIN;
	volatile uint64_t t154 = UINT64_MAX;

    t154 = (x657-(x658/(x659|x660)));

    if (t154 != UINT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x661 = 912U;
	volatile int16_t x662 = INT16_MAX;
	static volatile int32_t x663 = -1;
	int64_t x664 = -257170LL;
	volatile int64_t t155 = -8064LL;

    t155 = (x661-(x662/(x663|x664)));

    if (t155 != 33679LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x665 = -1;
	static uint32_t x667 = UINT32_MAX;
	int16_t x668 = -87;

    t156 = (x665-(x666/(x667|x668)));

    if (t156 != 18446744072343344029LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x671 = 289U;
	static int16_t x672 = 1;
	volatile uint32_t t157 = 9745U;

    t157 = (x669-(x670/(x671|x672)));

    if (t157 != 4294934528U) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x673 = 6404709;
	volatile int64_t x674 = -1LL;
	static volatile uint16_t x675 = UINT16_MAX;

    t158 = (x673-(x674/(x675|x676)));

    if (t158 != 6404709LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x677 = 1300992U;
	static volatile int64_t x678 = -1LL;
	volatile int8_t x679 = INT8_MIN;
	uint16_t x680 = UINT16_MAX;
	int64_t t159 = 6954309426LL;

    t159 = (x677-(x678/(x679|x680)));

    if (t159 != 1300991LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x682 = UINT32_MAX;
	int16_t x683 = INT16_MIN;
	uint16_t x684 = 443U;
	volatile uint32_t t160 = 44U;

    t160 = (x681-(x682/(x683|x684)));

    if (t160 != 4294967099U) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x685 = -89LL;
	int32_t x686 = 8;
	int8_t x688 = INT8_MAX;
	volatile int64_t t161 = -536326285188LL;

    t161 = (x685-(x686/(x687|x688)));

    if (t161 != -89LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x689 = INT32_MIN;
	static int32_t x691 = INT32_MIN;
	int8_t x692 = -1;
	static volatile int32_t t162 = 117729407;

    t162 = (x689-(x690/(x691|x692)));

    if (t162 != -2147483393) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x694 = INT64_MIN;
	static int64_t x695 = INT64_MAX;
	volatile int64_t x696 = 1LL;
	int64_t t163 = 40507350314410LL;

    t163 = (x693-(x694/(x695|x696)));

    if (t163 != -4886LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x697 = INT64_MIN;
	int8_t x698 = INT8_MIN;
	int16_t x699 = -1;
	uint64_t x700 = 38549634LLU;
	volatile uint64_t t164 = 51391LLU;

    t164 = (x697-(x698/(x699|x700)));

    if (t164 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x701 = 634U;
	uint8_t x702 = 3U;
	volatile uint64_t t165 = 23LLU;

    t165 = (x701-(x702/(x703|x704)));

    if (t165 != 634LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x705 = INT32_MAX;
	int16_t x706 = INT16_MAX;
	static uint32_t t166 = 0U;

    t166 = (x705-(x706/(x707|x708)));

    if (t166 != 2147483647U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x709 = INT32_MAX;
	int32_t x710 = 160111;
	int16_t x712 = INT16_MAX;
	int32_t t167 = 6133797;

    t167 = (x709-(x710/(x711|x712)));

    if (t167 != 2147483643) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x713 = INT32_MIN;
	int8_t x714 = 30;
	volatile uint16_t x715 = 16525U;
	volatile uint32_t t168 = 14412320U;

    t168 = (x713-(x714/(x715|x716)));

    if (t168 != 2147483648U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x719 = UINT16_MAX;
	uint16_t x720 = UINT16_MAX;
	int32_t t169 = 17581239;

    t169 = (x717-(x718/(x719|x720)));

    if (t169 != -674939784) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x722 = INT16_MIN;
	static int8_t x723 = INT8_MAX;
	int8_t x724 = -13;
	volatile int32_t t170 = -225038;

    t170 = (x721-(x722/(x723|x724)));

    if (t170 != -65536) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x725 = INT16_MIN;
	volatile int64_t x726 = -1LL;
	static volatile uint16_t x727 = 11U;
	uint32_t x728 = 5U;

    t171 = (x725-(x726/(x727|x728)));

    if (t171 != -32768LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x729 = 1U;
	uint32_t x730 = 1370061U;
	int64_t t172 = -420611LL;

    t172 = (x729-(x730/(x731|x732)));

    if (t172 != 1370062LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x733 = INT64_MAX;
	uint32_t x734 = 1272U;
	int16_t x736 = INT16_MAX;
	int64_t t173 = INT64_MAX;

    t173 = (x733-(x734/(x735|x736)));

    if (t173 != INT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x737 = -1;
	uint64_t x738 = 251671320LLU;
	volatile int32_t x739 = -1;
	int32_t x740 = -1;
	uint64_t t174 = UINT64_MAX;

    t174 = (x737-(x738/(x739|x740)));

    if (t174 != UINT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x741 = -6;
	int16_t x743 = -273;

    t175 = (x741-(x742/(x743|x744)));

    if (t175 != 35) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x745 = 3;
	static int16_t x746 = INT16_MIN;
	int64_t x747 = 46266119303120LL;
	int16_t x748 = INT16_MIN;
	volatile int64_t t176 = 1232478107LL;

    t176 = (x745-(x746/(x747|x748)));

    if (t176 != 2LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x749 = -1437260402353688LL;
	volatile int32_t x750 = INT32_MIN;
	uint8_t x751 = UINT8_MAX;
	int32_t x752 = INT32_MIN;
	volatile int64_t t177 = 6311118175095275LL;

    t177 = (x749-(x750/(x751|x752)));

    if (t177 != -1437260402353689LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x754 = -1LL;
	int64_t x755 = -1LL;
	uint64_t x756 = UINT64_MAX;

    t178 = (x753-(x754/(x755|x756)));

    if (t178 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x757 = 66;
	int32_t x758 = 3;

    t179 = (x757-(x758/(x759|x760)));

    if (t179 != 66) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x761 = UINT32_MAX;
	volatile int16_t x762 = -1;
	int8_t x763 = -1;
	uint32_t t180 = 48U;

    t180 = (x761-(x762/(x763|x764)));

    if (t180 != 4294967294U) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x765 = -1;
	int16_t x766 = 4440;
	int16_t x767 = -7933;
	uint16_t x768 = UINT16_MAX;
	int32_t t181 = 16942318;

    t181 = (x765-(x766/(x767|x768)));

    if (t181 != 4439) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x770 = 179U;
	uint32_t x771 = UINT32_MAX;
	volatile int16_t x772 = 10762;
	uint32_t t182 = 17U;

    t182 = (x769-(x770/(x771|x772)));

    if (t182 != 1U) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x774 = INT64_MIN;
	int8_t x775 = INT8_MAX;
	static uint32_t x776 = 695230377U;

    t183 = (x773-(x774/(x775|x776)));

    if (t183 != 13266639778LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x777 = INT32_MIN;
	volatile int8_t x778 = INT8_MIN;
	static int32_t x779 = -1;
	int64_t x780 = INT64_MIN;
	volatile int64_t t184 = 2LL;

    t184 = (x777-(x778/(x779|x780)));

    if (t184 != -2147483776LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x781 = 158;
	volatile int8_t x782 = INT8_MIN;
	static int32_t x783 = 8;
	int32_t x784 = -77744;
	int32_t t185 = 837;

    t185 = (x781-(x782/(x783|x784)));

    if (t185 != 158) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x785 = INT64_MIN;
	uint32_t x786 = UINT32_MAX;
	volatile int32_t x787 = 881;
	int64_t x788 = INT64_MIN;
	int64_t t186 = INT64_MIN;

    t186 = (x785-(x786/(x787|x788)));

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x789 = INT8_MIN;
	int32_t x790 = 67017921;
	int8_t x791 = INT8_MIN;
	int64_t t187 = -2757071LL;

    t187 = (x789-(x790/(x791|x792)));

    if (t187 != 523449LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x793 = UINT8_MAX;
	int16_t x794 = INT16_MIN;
	static int32_t x796 = INT32_MAX;
	volatile int64_t t188 = -1327947076537756586LL;

    t188 = (x793-(x794/(x795|x796)));

    if (t188 != 255LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x801 = INT8_MIN;
	int8_t x802 = 1;
	volatile uint32_t x803 = UINT32_MAX;
	static volatile uint32_t t189 = 170707U;

    t189 = (x801-(x802/(x803|x804)));

    if (t189 != 4294967168U) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x807 = INT8_MIN;
	int64_t t190 = -383LL;

    t190 = (x805-(x806/(x807|x808)));

    if (t190 != 72057594037927807LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x809 = -1;
	int64_t x810 = 7020LL;
	uint8_t x811 = 22U;
	static volatile int64_t x812 = -33101443LL;
	volatile int64_t t191 = -5LL;

    t191 = (x809-(x810/(x811|x812)));

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x814 = 150776633385557037LLU;
	volatile uint64_t t192 = 8728486203968141LLU;

    t192 = (x813-(x814/(x815|x816)));

    if (t192 != 1LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x818 = -1LL;
	volatile int64_t x819 = 5517461409090LL;
	uint64_t x820 = 1574910647279LLU;
	volatile uint64_t t193 = 1345LLU;

    t193 = (x817-(x818/(x819|x820)));

    if (t193 != 18446744073706463619LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x821 = -1;
	volatile int64_t x823 = INT64_MIN;
	volatile int16_t x824 = -7;
	volatile int64_t t194 = 1591691463357LL;

    t194 = (x821-(x822/(x823|x824)));

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x825 = 1404LL;
	static volatile uint16_t x826 = 0U;
	static int64_t x828 = 71186823LL;
	int64_t t195 = 123565978887LL;

    t195 = (x825-(x826/(x827|x828)));

    if (t195 != 1404LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x830 = INT16_MAX;
	int32_t x832 = INT32_MAX;
	int64_t t196 = -9LL;

    t196 = (x829-(x830/(x831|x832)));

    if (t196 != 2LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x837 = 13;
	uint8_t x838 = 26U;
	static int64_t x840 = INT64_MAX;
	int64_t t197 = -1384224388LL;

    t197 = (x837-(x838/(x839|x840)));

    if (t197 != 13LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x841 = -3367;
	static volatile int8_t x843 = INT8_MAX;

    t198 = (x841-(x842/(x843|x844)));

    if (t198 != -3367) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x845 = 195293084U;
	int8_t x848 = INT8_MAX;
	static int64_t t199 = -2499743941LL;

    t199 = (x845-(x846/(x847|x848)));

    if (t199 != 195293084LL) { NG(); } else { ; }
	
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


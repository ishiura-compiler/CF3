
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

int32_t x5 = INT32_MAX;
int64_t x9 = -1LL;
uint8_t x11 = 4U;
volatile int8_t x12 = INT8_MAX;
int64_t x18 = 5502300471995861LL;
static int64_t x19 = INT64_MIN;
int32_t x20 = 337266;
int64_t t4 = 1941432543071743LL;
int16_t x23 = 12330;
volatile int16_t x25 = 2415;
int16_t x36 = -1;
volatile int64_t t8 = -1438LL;
volatile uint64_t x39 = 17677LLU;
uint64_t t9 = 5220533560994871LLU;
int64_t x43 = INT64_MAX;
static uint32_t t11 = 603U;
volatile uint32_t t12 = 6500370U;
int8_t x54 = INT8_MIN;
int16_t x62 = -30;
volatile uint64_t x65 = 280206LLU;
static uint16_t x66 = UINT16_MAX;
int64_t x81 = -42LL;
int32_t x82 = INT32_MIN;
static volatile int64_t t18 = -239831511533LL;
uint64_t x92 = 76566623LLU;
volatile uint64_t t20 = 8369LLU;
static int64_t x93 = 7046155LL;
volatile int64_t x95 = INT64_MAX;
int64_t x98 = 5030707LL;
static int8_t x99 = INT8_MIN;
int16_t x101 = INT16_MIN;
static volatile uint64_t t23 = 52LLU;
int64_t t24 = 1994029LL;
int16_t x110 = INT16_MIN;
int32_t x114 = -204904;
static int32_t x115 = INT32_MIN;
int8_t x119 = INT8_MAX;
volatile uint64_t t30 = 4151726561473LLU;
volatile int8_t x134 = INT8_MIN;
int32_t x135 = INT32_MAX;
static int32_t x137 = -1;
uint64_t t34 = 3565327428740373616LLU;
uint8_t x160 = UINT8_MAX;
uint32_t t36 = 3131281U;
int32_t x164 = 46;
int32_t x169 = 609;
int64_t x170 = -173633625801762474LL;
int64_t x176 = INT64_MIN;
uint8_t x182 = 0U;
uint64_t x187 = 1537LLU;
uint16_t x188 = UINT16_MAX;
static int8_t x204 = INT8_MIN;
int16_t x215 = 7803;
int32_t x217 = INT32_MIN;
static uint8_t x219 = UINT8_MAX;
volatile int32_t t48 = -1;
volatile int32_t x225 = -1;
int8_t x227 = INT8_MIN;
static uint32_t x228 = 746U;
uint32_t t50 = 25875672U;
int32_t x231 = -1;
int32_t t51 = -780392;
volatile int16_t x235 = INT16_MIN;
int8_t x243 = INT8_MAX;
uint16_t x247 = 2222U;
int16_t x249 = INT16_MIN;
static int64_t x252 = -8505120823306LL;
uint8_t x265 = UINT8_MAX;
int16_t x269 = -1;
int16_t x273 = 0;
int32_t x286 = -1;
uint8_t x301 = 2U;
int32_t x304 = -3707;
static int16_t x305 = 1;
int32_t x314 = -43414;
volatile uint32_t x315 = 15738U;
uint16_t x324 = UINT16_MAX;
volatile int32_t x327 = INT32_MIN;
static int8_t x330 = -1;
uint64_t x343 = UINT64_MAX;
volatile int32_t x345 = 275659719;
uint16_t x349 = 8U;
static uint64_t x350 = UINT64_MAX;
int8_t x361 = INT8_MIN;
int64_t x368 = -1LL;
static int16_t x375 = INT16_MAX;
int64_t x376 = INT64_MAX;
int8_t x378 = INT8_MIN;
int64_t x379 = -1LL;
int64_t t85 = -20700LL;
volatile uint8_t x396 = UINT8_MAX;
int32_t t87 = -252472468;
int8_t x411 = -22;
static uint32_t x412 = UINT32_MAX;
int16_t x419 = -1;
int32_t x420 = INT32_MAX;
uint32_t x422 = 2020288095U;
int8_t x427 = INT8_MIN;
uint64_t x428 = 6587858333527637LLU;
static volatile int8_t x433 = -11;
uint64_t x435 = UINT64_MAX;
int16_t x444 = INT16_MAX;
int32_t x445 = 53;
volatile int64_t t100 = -16967080781949889LL;
int64_t x449 = INT64_MIN;
static int64_t x463 = -1LL;
volatile int64_t t104 = -50623911562630547LL;
static int16_t x466 = -5144;
int8_t x467 = -1;
static uint16_t x487 = 0U;
volatile int8_t x492 = INT8_MIN;
int8_t x493 = -1;
static int64_t x494 = -2576740096109637LL;
int64_t x497 = INT64_MAX;
int64_t t112 = 85530954LL;
uint32_t x515 = UINT32_MAX;
volatile int64_t t116 = -1495509LL;
static volatile uint64_t x533 = 18LLU;
int32_t x534 = -1;
static int16_t x540 = -23;
int32_t x546 = INT32_MIN;
int32_t x547 = INT32_MIN;
static int64_t t122 = -1432202669708172424LL;
volatile int16_t x561 = INT16_MIN;
int8_t x575 = 42;
uint16_t x577 = UINT16_MAX;
volatile int32_t x581 = 84;
uint64_t x586 = 1341LLU;
uint32_t x587 = UINT32_MAX;
uint32_t x593 = 6399U;
int16_t x597 = -1;
uint32_t x598 = 18U;
static volatile int16_t x599 = INT16_MIN;
int8_t x605 = -1;
static int16_t x608 = INT16_MIN;
int32_t x609 = -1;
int8_t x610 = INT8_MAX;
static uint64_t t135 = 7LLU;
int8_t x615 = INT8_MIN;
static int16_t x625 = INT16_MIN;
uint32_t x628 = UINT32_MAX;
volatile int32_t x637 = -102;
uint64_t t142 = 103527982966LLU;
uint16_t x651 = 1U;
int16_t x657 = INT16_MIN;
uint64_t x661 = UINT64_MAX;
uint32_t x662 = 7U;
uint16_t x663 = 510U;
int32_t x670 = INT32_MIN;
int8_t x687 = INT8_MAX;
volatile int64_t t152 = 1416366871035LL;
int64_t x689 = -540000802230107900LL;
volatile int16_t x690 = INT16_MIN;
int64_t x695 = INT64_MIN;
int64_t t154 = -13487LL;
int32_t x698 = INT32_MIN;
volatile int16_t x700 = INT16_MAX;
volatile uint16_t x701 = UINT16_MAX;
int64_t t157 = 28LL;
int32_t x710 = -1;
volatile uint32_t x715 = 1253U;
uint64_t t159 = 7728629138572LLU;
uint8_t x718 = 14U;
int16_t x721 = -1;
int8_t x729 = -1;
volatile int8_t x731 = -1;
int8_t x738 = INT8_MIN;
int16_t x739 = INT16_MIN;
int32_t t165 = -202;
uint16_t x749 = 3042U;
static volatile int32_t x750 = -2087;
int16_t x757 = -1;
uint8_t x762 = 14U;
uint64_t x771 = 204063791353LLU;
uint32_t x777 = 15414234U;
static uint16_t x779 = 20300U;
uint64_t x785 = 40339285LLU;
uint64_t x806 = 117348586LLU;
volatile int8_t x808 = INT8_MIN;
static uint8_t x812 = 4U;
int32_t t179 = -3886762;
uint64_t x825 = 929918600078644516LLU;
uint64_t x838 = 608LLU;
volatile uint64_t t184 = 2632401LLU;
static int8_t x843 = 2;
int64_t t186 = -16830869695643LL;
int64_t x871 = 9LL;
int8_t x872 = INT8_MIN;
uint16_t x878 = 188U;
volatile int32_t x882 = INT32_MIN;
int8_t x884 = -6;
volatile int64_t t194 = 999679688082235LL;
volatile uint64_t t195 = 170107279996LLU;
volatile int32_t t196 = -258930247;
volatile int64_t x894 = INT64_MAX;
uint64_t t197 = 28951LLU;
volatile uint64_t t199 = 3337925811821LLU;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	int32_t x2 = 423;
	int8_t x3 = 7;
	uint32_t x4 = UINT32_MAX;
	static volatile uint32_t t0 = 8019159U;

    t0 = (x1-(x2+(x3%x4)));

    if (t0 != 4294966993U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x6 = UINT64_MAX;
	int16_t x7 = 11408;
	int16_t x8 = INT16_MIN;
	static uint64_t t1 = 4133320273507LLU;

    t1 = (x5-(x6+(x7%x8)));

    if (t1 != 2147472240LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x10 = INT64_MIN;
	volatile int64_t t2 = 967315466637914450LL;

    t2 = (x9-(x10+(x11%x12)));

    if (t2 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 0;
	int16_t x14 = INT16_MIN;
	int64_t x15 = 34116933LL;
	uint64_t x16 = 13338334LLU;
	uint64_t t3 = 13520088LLU;

    t3 = (x13-(x14+(x15%x16)));

    if (t3 != 18446744073702144119LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 32U;

    t4 = (x17-(x18+(x19%x20)));

    if (t4 != -5502300471920545LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 3U;
	int16_t x22 = INT16_MIN;
	static int32_t x24 = INT32_MAX;
	uint32_t t5 = 33U;

    t5 = (x21-(x22+(x23%x24)));

    if (t5 != 20441U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x26 = 2167U;
	volatile int16_t x27 = INT16_MAX;
	volatile uint64_t x28 = 25155168466730LLU;
	static volatile uint64_t t6 = 234684484493135LLU;

    t6 = (x25-(x26+(x27%x28)));

    if (t6 != 18446744073709519097LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 1U;
	uint16_t x30 = UINT16_MAX;
	uint8_t x31 = 1U;
	volatile int8_t x32 = -1;
	volatile int32_t t7 = 0;

    t7 = (x29-(x30+(x31%x32)));

    if (t7 != -65534) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = UINT8_MAX;
	uint32_t x34 = 246U;
	int64_t x35 = INT64_MIN;

    t8 = (x33-(x34+(x35%x36)));

    if (t8 != 9LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x37 = UINT64_MAX;
	static int64_t x38 = -2332LL;
	uint16_t x40 = 5U;

    t9 = (x37-(x38+(x39%x40)));

    if (t9 != 2329LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x41 = 1221U;
	int16_t x42 = INT16_MIN;
	int16_t x44 = -1;
	volatile int64_t t10 = -76062530729LL;

    t10 = (x41-(x42+(x43%x44)));

    if (t10 != 33989LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 2825569U;
	static uint32_t x46 = 1003U;
	int8_t x47 = 14;
	uint32_t x48 = 912195U;

    t11 = (x45-(x46+(x47%x48)));

    if (t11 != 2824552U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = UINT16_MAX;
	uint8_t x50 = 6U;
	uint32_t x51 = UINT32_MAX;
	static int8_t x52 = INT8_MAX;

    t12 = (x49-(x50+(x51%x52)));

    if (t12 != 65514U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x53 = -1;
	static volatile int32_t x55 = INT32_MIN;
	int32_t x56 = INT32_MAX;
	int32_t t13 = -24139;

    t13 = (x53-(x54+(x55%x56)));

    if (t13 != 128) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 72898;
	static volatile int64_t x58 = INT64_MAX;
	static int16_t x59 = -14153;
	int32_t x60 = -7;
	volatile int64_t t14 = 54674531537688932LL;

    t14 = (x57-(x58+(x59%x60)));

    if (t14 != -9223372036854702903LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	uint32_t x63 = 5869092U;
	static uint64_t x64 = 14LLU;
	uint64_t t15 = 1060885607816199LLU;

    t15 = (x61-(x62+(x63%x64)));

    if (t15 != 17LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x67 = INT8_MAX;
	int16_t x68 = -1;
	uint64_t t16 = 1021840365LLU;

    t16 = (x65-(x66+(x67%x68)));

    if (t16 != 214671LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x73 = INT8_MIN;
	uint8_t x74 = 1U;
	int8_t x75 = INT8_MIN;
	int32_t x76 = 220663;
	int32_t t17 = -405;

    t17 = (x73-(x74+(x75%x76)));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x83 = INT8_MAX;
	volatile uint16_t x84 = 2481U;

    t18 = (x81-(x82+(x83%x84)));

    if (t18 != 2147483479LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x85 = 0;
	volatile int64_t x86 = INT64_MIN;
	uint32_t x87 = 1776813857U;
	static int16_t x88 = INT16_MIN;
	int64_t t19 = -14917641037130528LL;

    t19 = (x85-(x86+(x87%x88)));

    if (t19 != 9223372035077961951LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x89 = INT8_MAX;
	uint8_t x90 = 2U;
	uint16_t x91 = 100U;

    t20 = (x89-(x90+(x91%x92)));

    if (t20 != 25LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x94 = 1;
	uint64_t x96 = 3064599LLU;
	uint64_t t21 = 22LLU;

    t21 = (x93-(x94+(x95%x96)));

    if (t21 != 6903218LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x97 = 13;
	int32_t x100 = -1;
	volatile int64_t t22 = -281LL;

    t22 = (x97-(x98+(x99%x100)));

    if (t22 != -5030694LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x102 = UINT16_MAX;
	uint64_t x103 = 1627802LLU;
	int32_t x104 = 1103;

    t23 = (x101-(x102+(x103%x104)));

    if (t23 != 18446744073709452436LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x105 = 14U;
	int16_t x106 = 7;
	int32_t x107 = -1;
	static int64_t x108 = 46862729490849973LL;

    t24 = (x105-(x106+(x107%x108)));

    if (t24 != 8LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x109 = INT8_MAX;
	int8_t x111 = -1;
	int64_t x112 = INT64_MIN;
	int64_t t25 = 101031703LL;

    t25 = (x109-(x110+(x111%x112)));

    if (t25 != 32896LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x113 = 135944661U;
	volatile uint32_t x116 = UINT32_MAX;
	uint32_t t26 = 3459U;

    t26 = (x113-(x114+(x115%x116)));

    if (t26 != 2283633213U) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = -1;
	int8_t x118 = 0;
	int64_t x120 = -34234950249806LL;
	volatile int64_t t27 = -25819035825LL;

    t27 = (x117-(x118+(x119%x120)));

    if (t27 != -128LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x121 = UINT16_MAX;
	uint32_t x122 = UINT32_MAX;
	int32_t x123 = INT32_MAX;
	static int16_t x124 = INT16_MIN;
	volatile uint32_t t28 = 6423U;

    t28 = (x121-(x122+(x123%x124)));

    if (t28 != 32769U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x125 = 23U;
	uint32_t x126 = 1U;
	static uint64_t x127 = 118194463691604LLU;
	volatile uint8_t x128 = 10U;
	uint64_t t29 = 102885LLU;

    t29 = (x125-(x126+(x127%x128)));

    if (t29 != 18LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x129 = 2666U;
	volatile uint32_t x130 = UINT32_MAX;
	uint64_t x131 = 966649656198LLU;
	int16_t x132 = -1;

    t30 = (x129-(x130+(x131%x132)));

    if (t30 != 18446743102764930789LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = 15;
	int64_t x136 = 62211979562663LL;
	volatile int64_t t31 = -5LL;

    t31 = (x133-(x134+(x135%x136)));

    if (t31 != -2147483504LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x138 = INT32_MIN;
	int16_t x139 = 1;
	static int32_t x140 = -1;
	int32_t t32 = INT32_MAX;

    t32 = (x137-(x138+(x139%x140)));

    if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x141 = INT64_MIN;
	static int16_t x142 = INT16_MIN;
	volatile int32_t x143 = 21055;
	volatile int8_t x144 = 1;
	int64_t t33 = -6LL;

    t33 = (x141-(x142+(x143%x144)));

    if (t33 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x145 = -1LL;
	uint32_t x146 = 8U;
	uint64_t x147 = UINT64_MAX;
	int32_t x148 = -1;

    t34 = (x145-(x146+(x147%x148)));

    if (t34 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x153 = INT8_MIN;
	int8_t x154 = INT8_MIN;
	static volatile uint64_t x155 = UINT64_MAX;
	int64_t x156 = INT64_MIN;
	volatile uint64_t t35 = 218688978073969LLU;

    t35 = (x153-(x154+(x155%x156)));

    if (t35 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x157 = INT32_MIN;
	uint32_t x158 = 46U;
	volatile uint32_t x159 = 1627U;

    t36 = (x157-(x158+(x159%x160)));

    if (t36 != 2147483505U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x161 = -1;
	int16_t x162 = -26;
	static uint32_t x163 = UINT32_MAX;
	volatile uint32_t t37 = 2734406U;

    t37 = (x161-(x162+(x163%x164)));

    if (t37 != 14U) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x165 = INT64_MAX;
	uint16_t x166 = 58U;
	int64_t x167 = INT64_MAX;
	volatile int32_t x168 = 813118;
	volatile int64_t t38 = 1088177355456698LL;

    t38 = (x165-(x166+(x167%x168)));

    if (t38 != 9223372036854716224LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint64_t x171 = 257870748270LLU;
	volatile uint64_t x172 = UINT64_MAX;
	uint64_t t39 = 32046LLU;

    t39 = (x169-(x170+(x171%x172)));

    if (t39 != 173633367931014813LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x173 = 124U;
	int32_t x174 = -238187;
	uint8_t x175 = 30U;
	int64_t t40 = -101452LL;

    t40 = (x173-(x174+(x175%x176)));

    if (t40 != 238281LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x177 = INT16_MIN;
	int8_t x178 = INT8_MAX;
	int16_t x179 = INT16_MIN;
	volatile int32_t x180 = -1;
	volatile int32_t t41 = 236;

    t41 = (x177-(x178+(x179%x180)));

    if (t41 != -32895) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x181 = 27LLU;
	uint8_t x183 = 69U;
	volatile int16_t x184 = INT16_MIN;
	uint64_t t42 = 358165802791LLU;

    t42 = (x181-(x182+(x183%x184)));

    if (t42 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x185 = INT16_MIN;
	volatile int32_t x186 = -1;
	uint64_t t43 = 4LLU;

    t43 = (x185-(x186+(x187%x188)));

    if (t43 != 18446744073709517312LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x197 = -1;
	int8_t x198 = INT8_MAX;
	uint16_t x199 = 2U;
	int8_t x200 = -5;
	int32_t t44 = 351;

    t44 = (x197-(x198+(x199%x200)));

    if (t44 != -130) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x201 = 307U;
	int64_t x202 = 179LL;
	int64_t x203 = INT64_MAX;
	int64_t t45 = -426LL;

    t45 = (x201-(x202+(x203%x204)));

    if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x205 = UINT8_MAX;
	volatile int16_t x206 = INT16_MAX;
	int16_t x207 = 764;
	int32_t x208 = -1;
	volatile int32_t t46 = -581;

    t46 = (x205-(x206+(x207%x208)));

    if (t46 != -32512) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x213 = 973838636U;
	static int8_t x214 = INT8_MIN;
	static volatile int64_t x216 = 8535LL;
	static int64_t t47 = -951512131652874LL;

    t47 = (x213-(x214+(x215%x216)));

    if (t47 != 973830961LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x218 = INT8_MIN;
	int8_t x220 = INT8_MAX;

    t48 = (x217-(x218+(x219%x220)));

    if (t48 != -2147483521) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x221 = INT32_MIN;
	int8_t x222 = INT8_MIN;
	uint8_t x223 = 50U;
	volatile uint16_t x224 = UINT16_MAX;
	volatile int32_t t49 = -4595;

    t49 = (x221-(x222+(x223%x224)));

    if (t49 != -2147483570) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x226 = INT16_MIN;

    t50 = (x225-(x226+(x227%x228)));

    if (t50 != 32287U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x229 = 1450U;
	static int32_t x230 = -1;
	static int32_t x232 = 14212715;

    t51 = (x229-(x230+(x231%x232)));

    if (t51 != 1452) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x233 = 1U;
	int16_t x234 = 466;
	int32_t x236 = INT32_MIN;
	volatile int32_t t52 = 490844337;

    t52 = (x233-(x234+(x235%x236)));

    if (t52 != 32303) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x237 = -16;
	int8_t x238 = INT8_MAX;
	volatile int32_t x239 = -1;
	volatile int8_t x240 = INT8_MIN;
	volatile int32_t t53 = 18072;

    t53 = (x237-(x238+(x239%x240)));

    if (t53 != -142) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x241 = 11U;
	int16_t x242 = -1;
	uint64_t x244 = 2807419954579170LLU;
	uint64_t t54 = 30300654585LLU;

    t54 = (x241-(x242+(x243%x244)));

    if (t54 != 18446744073709551501LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x245 = 1930819499082LLU;
	static int8_t x246 = 18;
	int64_t x248 = 110266124252LL;
	static uint64_t t55 = 432536LLU;

    t55 = (x245-(x246+(x247%x248)));

    if (t55 != 1930819496842LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x250 = 7;
	volatile uint16_t x251 = UINT16_MAX;
	volatile int64_t t56 = 108410578191LL;

    t56 = (x249-(x250+(x251%x252)));

    if (t56 != -98310LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint64_t x253 = 262552LLU;
	uint64_t x254 = UINT64_MAX;
	volatile int64_t x255 = INT64_MIN;
	uint8_t x256 = 4U;
	uint64_t t57 = 30LLU;

    t57 = (x253-(x254+(x255%x256)));

    if (t57 != 262553LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x257 = 3U;
	uint16_t x258 = 21U;
	volatile uint64_t x259 = 1868420601200280LLU;
	uint8_t x260 = 4U;
	volatile uint64_t t58 = 50770LLU;

    t58 = (x257-(x258+(x259%x260)));

    if (t58 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x266 = -1;
	volatile int8_t x267 = 0;
	int32_t x268 = 333;
	volatile int32_t t59 = 1065401576;

    t59 = (x265-(x266+(x267%x268)));

    if (t59 != 256) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x270 = 1090;
	int64_t x271 = -26951LL;
	static uint64_t x272 = 1LLU;
	uint64_t t60 = 249820LLU;

    t60 = (x269-(x270+(x271%x272)));

    if (t60 != 18446744073709550525LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x274 = 0LLU;
	static int8_t x275 = INT8_MAX;
	int16_t x276 = 6;
	uint64_t t61 = UINT64_MAX;

    t61 = (x273-(x274+(x275%x276)));

    if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x285 = INT32_MAX;
	uint32_t x287 = 26180U;
	uint64_t x288 = UINT64_MAX;
	static volatile uint64_t t62 = 12415824247098879LLU;

    t62 = (x285-(x286+(x287%x288)));

    if (t62 != 2147457468LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x289 = INT16_MIN;
	int16_t x290 = INT16_MIN;
	volatile uint16_t x291 = 182U;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t63 = 3LLU;

    t63 = (x289-(x290+(x291%x292)));

    if (t63 != 18446744073709551434LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x293 = 0;
	int16_t x294 = -34;
	volatile int8_t x295 = -1;
	volatile int16_t x296 = -1;
	static volatile int32_t t64 = 8;

    t64 = (x293-(x294+(x295%x296)));

    if (t64 != 34) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x297 = UINT64_MAX;
	int32_t x298 = INT32_MIN;
	uint64_t x299 = 6057612780980160257LLU;
	uint32_t x300 = 518288564U;
	volatile uint64_t t65 = 21690203512406941LLU;

    t65 = (x297-(x298+(x299%x300)));

    if (t65 != 2032383826LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x302 = INT64_MAX;
	int8_t x303 = INT8_MIN;
	volatile int64_t t66 = 434676135LL;

    t66 = (x301-(x302+(x303%x304)));

    if (t66 != -9223372036854775677LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x306 = 32;
	static volatile int8_t x307 = INT8_MIN;
	int64_t x308 = -442892980185095LL;
	volatile int64_t t67 = -27LL;

    t67 = (x305-(x306+(x307%x308)));

    if (t67 != 97LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x309 = 248205611;
	static uint16_t x310 = 13U;
	uint32_t x311 = 1500996091U;
	uint8_t x312 = 3U;
	volatile uint32_t t68 = 35087U;

    t68 = (x309-(x310+(x311%x312)));

    if (t68 != 248205597U) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x313 = INT32_MIN;
	static int32_t x316 = INT32_MAX;
	volatile uint32_t t69 = 60U;

    t69 = (x313-(x314+(x315%x316)));

    if (t69 != 2147511324U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x317 = 331517;
	uint8_t x318 = 14U;
	int32_t x319 = -1;
	static int32_t x320 = INT32_MAX;
	int32_t t70 = 3661864;

    t70 = (x317-(x318+(x319%x320)));

    if (t70 != 331504) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x321 = -1;
	int8_t x322 = INT8_MIN;
	int32_t x323 = INT32_MAX;
	int32_t t71 = -3983;

    t71 = (x321-(x322+(x323%x324)));

    if (t71 != -32640) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x325 = 3;
	int64_t x326 = INT64_MAX;
	int16_t x328 = 2;
	static int64_t t72 = 53324LL;

    t72 = (x325-(x326+(x327%x328)));

    if (t72 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x329 = -1;
	uint8_t x331 = 109U;
	int16_t x332 = INT16_MIN;
	static volatile int32_t t73 = -11426;

    t73 = (x329-(x330+(x331%x332)));

    if (t73 != -109) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x333 = 51;
	volatile int32_t x334 = INT32_MAX;
	uint32_t x335 = 18354U;
	int16_t x336 = INT16_MAX;
	uint32_t t74 = 704026U;

    t74 = (x333-(x334+(x335%x336)));

    if (t74 != 2147465346U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x341 = UINT8_MAX;
	int16_t x342 = -4;
	static int8_t x344 = -1;
	volatile uint64_t t75 = 855633885628202LLU;

    t75 = (x341-(x342+(x343%x344)));

    if (t75 != 259LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x346 = -1;
	uint8_t x347 = UINT8_MAX;
	uint8_t x348 = 106U;
	volatile int32_t t76 = 1;

    t76 = (x345-(x346+(x347%x348)));

    if (t76 != 275659677) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x351 = UINT64_MAX;
	static int16_t x352 = 162;
	volatile uint64_t t77 = 4951389LLU;

    t77 = (x349-(x350+(x351%x352)));

    if (t77 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x357 = INT64_MAX;
	int64_t x358 = -66842LL;
	uint64_t x359 = 238476689654118792LLU;
	int8_t x360 = INT8_MIN;
	uint64_t t78 = 392309576728LLU;

    t78 = (x357-(x358+(x359%x360)));

    if (t78 != 8984895347200723857LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x362 = 112363092LLU;
	int64_t x363 = -1LL;
	static int32_t x364 = -16353;
	volatile uint64_t t79 = 407738105507LLU;

    t79 = (x361-(x362+(x363%x364)));

    if (t79 != 18446744073597188397LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x365 = -1LL;
	int16_t x366 = -1;
	int32_t x367 = -42;
	volatile int64_t t80 = 986LL;

    t80 = (x365-(x366+(x367%x368)));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x369 = INT16_MIN;
	int32_t x370 = -1;
	int64_t x371 = INT64_MIN;
	static int32_t x372 = 208794;
	volatile int64_t t81 = 198590873960LL;

    t81 = (x369-(x370+(x371%x372)));

    if (t81 != 49369LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x373 = INT8_MIN;
	int32_t x374 = INT32_MIN;
	int64_t t82 = 24135136720956LL;

    t82 = (x373-(x374+(x375%x376)));

    if (t82 != 2147450753LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x377 = 27U;
	static int16_t x380 = INT16_MIN;
	volatile int64_t t83 = 11663743LL;

    t83 = (x377-(x378+(x379%x380)));

    if (t83 != 156LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x381 = -1;
	int32_t x382 = -1;
	uint8_t x383 = UINT8_MAX;
	volatile uint64_t x384 = UINT64_MAX;
	static uint64_t t84 = 33569133053985LLU;

    t84 = (x381-(x382+(x383%x384)));

    if (t84 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x385 = -835816;
	int16_t x386 = -1;
	int64_t x387 = 87311532LL;
	int32_t x388 = -1;

    t85 = (x385-(x386+(x387%x388)));

    if (t85 != -835815LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x389 = INT32_MIN;
	static int8_t x390 = INT8_MIN;
	uint64_t x391 = 17LLU;
	int8_t x392 = -1;
	uint64_t t86 = 464360459947170595LLU;

    t86 = (x389-(x390+(x391%x392)));

    if (t86 != 18446744071562068079LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x393 = INT8_MAX;
	static uint16_t x394 = 489U;
	volatile int32_t x395 = 571097599;

    t87 = (x393-(x394+(x395%x396)));

    if (t87 != -471) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x397 = -10868;
	uint16_t x398 = UINT16_MAX;
	int8_t x399 = 1;
	int64_t x400 = 1524464462LL;
	volatile int64_t t88 = -1440143169LL;

    t88 = (x397-(x398+(x399%x400)));

    if (t88 != -76404LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x401 = -1;
	uint16_t x402 = 28U;
	int64_t x403 = -1LL;
	uint8_t x404 = 29U;
	volatile int64_t t89 = 458185607327LL;

    t89 = (x401-(x402+(x403%x404)));

    if (t89 != -28LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x405 = 46U;
	int32_t x406 = INT32_MIN;
	int16_t x407 = 68;
	uint32_t x408 = 255U;
	volatile uint32_t t90 = 1511663087U;

    t90 = (x405-(x406+(x407%x408)));

    if (t90 != 2147483626U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x409 = UINT32_MAX;
	uint8_t x410 = UINT8_MAX;
	volatile uint32_t t91 = 37546029U;

    t91 = (x409-(x410+(x411%x412)));

    if (t91 != 4294967062U) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x413 = -1;
	int32_t x414 = -324;
	static uint32_t x415 = UINT32_MAX;
	static int8_t x416 = 2;
	uint32_t t92 = 13090465U;

    t92 = (x413-(x414+(x415%x416)));

    if (t92 != 322U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x417 = 65709435315372LLU;
	static volatile uint32_t x418 = 210527U;
	uint64_t t93 = 121704LLU;

    t93 = (x417-(x418+(x419%x420)));

    if (t93 != 65709435104846LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x421 = INT8_MIN;
	int8_t x423 = -62;
	uint64_t x424 = UINT64_MAX;
	static volatile uint64_t t94 = 8057808553466809LLU;

    t94 = (x421-(x422+(x423%x424)));

    if (t94 != 18446744071689263455LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x425 = UINT16_MAX;
	static int32_t x426 = INT32_MAX;
	uint64_t t95 = 159608146372839797LLU;

    t95 = (x425-(x426+(x427%x428)));

    if (t95 != 18446003331729965616LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x429 = -5;
	volatile uint64_t x430 = 25261226276814652LLU;
	int32_t x431 = 7067;
	volatile int8_t x432 = 34;
	volatile uint64_t t96 = 38315017LLU;

    t96 = (x429-(x430+(x431%x432)));

    if (t96 != 18421482847432736930LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x434 = 388U;
	volatile uint64_t x436 = 11947126617992LLU;
	volatile uint64_t t97 = 375372591LLU;

    t97 = (x433-(x434+(x435%x436)));

    if (t97 != 18446733859104805354LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x437 = INT16_MAX;
	int16_t x438 = INT16_MIN;
	int32_t x439 = 17;
	uint8_t x440 = 1U;
	static int32_t t98 = -116140034;

    t98 = (x437-(x438+(x439%x440)));

    if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x441 = INT16_MAX;
	volatile uint32_t x442 = 53158U;
	volatile uint64_t x443 = UINT64_MAX;
	volatile uint64_t t99 = 35LLU;

    t99 = (x441-(x442+(x443%x444)));

    if (t99 != 18446744073709531210LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x446 = UINT32_MAX;
	int64_t x447 = INT64_MIN;
	int16_t x448 = INT16_MIN;

    t100 = (x445-(x446+(x447%x448)));

    if (t100 != -4294967242LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x450 = UINT64_MAX;
	int64_t x451 = INT64_MIN;
	static int16_t x452 = INT16_MIN;
	uint64_t t101 = 2732670961910LLU;

    t101 = (x449-(x450+(x451%x452)));

    if (t101 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x453 = INT16_MAX;
	int8_t x454 = INT8_MIN;
	int16_t x455 = -1;
	uint64_t x456 = 18123184548LLU;
	volatile uint64_t t102 = 895287LLU;

    t102 = (x453-(x454+(x455%x456)));

    if (t102 != 18446744068603699600LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x457 = 353U;
	int32_t x458 = -1;
	volatile int64_t x459 = INT64_MIN;
	static volatile uint16_t x460 = 2U;
	int64_t t103 = -4243031141061LL;

    t103 = (x457-(x458+(x459%x460)));

    if (t103 != 354LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x461 = INT8_MIN;
	volatile uint32_t x462 = UINT32_MAX;
	int64_t x464 = INT64_MIN;

    t104 = (x461-(x462+(x463%x464)));

    if (t104 != -4294967422LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x465 = 98366U;
	int64_t x468 = -1LL;
	int64_t t105 = -52711522824501LL;

    t105 = (x465-(x466+(x467%x468)));

    if (t105 != 103510LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x473 = UINT16_MAX;
	volatile int32_t x474 = 228;
	uint64_t x475 = UINT64_MAX;
	int8_t x476 = INT8_MIN;
	static volatile uint64_t t106 = 120456027992125048LLU;

    t106 = (x473-(x474+(x475%x476)));

    if (t106 != 65180LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x477 = UINT16_MAX;
	uint8_t x478 = 36U;
	uint8_t x479 = 16U;
	uint16_t x480 = 5U;
	static int32_t t107 = 229;

    t107 = (x477-(x478+(x479%x480)));

    if (t107 != 65498) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x481 = -1;
	volatile uint64_t x482 = UINT64_MAX;
	static int16_t x483 = -2156;
	volatile int32_t x484 = -1;
	volatile uint64_t t108 = 21694LLU;

    t108 = (x481-(x482+(x483%x484)));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x485 = 29220180U;
	volatile int16_t x486 = -6653;
	uint32_t x488 = 9U;
	volatile uint32_t t109 = 21783094U;

    t109 = (x485-(x486+(x487%x488)));

    if (t109 != 29226833U) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x489 = -2161;
	uint8_t x490 = UINT8_MAX;
	volatile int64_t x491 = -379781LL;
	volatile int64_t t110 = 12LL;

    t110 = (x489-(x490+(x491%x492)));

    if (t110 != -2411LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x495 = -1;
	uint64_t x496 = 7405259785LLU;
	uint64_t t111 = 206LLU;

    t111 = (x493-(x494+(x495%x496)));

    if (t111 != 2576735469253541LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x498 = 1172;
	uint8_t x499 = UINT8_MAX;
	uint8_t x500 = UINT8_MAX;

    t112 = (x497-(x498+(x499%x500)));

    if (t112 != 9223372036854774635LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x501 = 22U;
	static int64_t x502 = -1LL;
	int8_t x503 = -1;
	volatile uint64_t x504 = 124824971154LLU;
	uint64_t t113 = 117490749804687LLU;

    t113 = (x501-(x502+(x503%x504)));

    if (t113 != 18446743958287764390LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x509 = INT16_MIN;
	uint64_t x510 = UINT64_MAX;
	static uint64_t x511 = 184LLU;
	int8_t x512 = 51;
	static volatile uint64_t t114 = 1672435343712LLU;

    t114 = (x509-(x510+(x511%x512)));

    if (t114 != 18446744073709518818LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x513 = 34U;
	int8_t x514 = INT8_MIN;
	int64_t x516 = INT64_MIN;
	int64_t t115 = 266576263943275LL;

    t115 = (x513-(x514+(x515%x516)));

    if (t115 != -4294967133LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x517 = -16588248062614867LL;
	uint16_t x518 = UINT16_MAX;
	int64_t x519 = INT64_MIN;
	int32_t x520 = 5096843;

    t116 = (x517-(x518+(x519%x520)));

    if (t116 != -16588248057981338LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x521 = 2598;
	int16_t x522 = -1;
	static int32_t x523 = 430632;
	volatile int64_t x524 = INT64_MIN;
	volatile int64_t t117 = 10LL;

    t117 = (x521-(x522+(x523%x524)));

    if (t117 != -428033LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x525 = INT16_MIN;
	static volatile int8_t x526 = INT8_MAX;
	uint64_t x527 = UINT64_MAX;
	volatile int8_t x528 = INT8_MIN;
	uint64_t t118 = 126LLU;

    t118 = (x525-(x526+(x527%x528)));

    if (t118 != 18446744073709518594LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x529 = 6;
	uint32_t x530 = 91U;
	volatile int64_t x531 = 253505255LL;
	int32_t x532 = INT32_MIN;
	int64_t t119 = -14904LL;

    t119 = (x529-(x530+(x531%x532)));

    if (t119 != -253505340LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x535 = -36568;
	int64_t x536 = INT64_MAX;
	volatile uint64_t t120 = 1394LLU;

    t120 = (x533-(x534+(x535%x536)));

    if (t120 != 36587LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x537 = INT8_MIN;
	uint32_t x538 = 61470874U;
	int32_t x539 = INT32_MIN;
	uint32_t t121 = 4U;

    t121 = (x537-(x538+(x539%x540)));

    if (t121 != 4233496300U) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x545 = -1LL;
	int64_t x548 = INT64_MAX;

    t122 = (x545-(x546+(x547%x548)));

    if (t122 != 4294967295LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x553 = UINT16_MAX;
	static uint8_t x554 = 94U;
	int64_t x555 = INT64_MAX;
	static int64_t x556 = INT64_MAX;
	volatile int64_t t123 = 6653LL;

    t123 = (x553-(x554+(x555%x556)));

    if (t123 != 65441LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x562 = 0U;
	volatile int16_t x563 = INT16_MIN;
	static int32_t x564 = -1;
	int32_t t124 = 99850;

    t124 = (x561-(x562+(x563%x564)));

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x565 = -1LL;
	int64_t x566 = 944149464LL;
	int16_t x567 = 1;
	volatile int16_t x568 = INT16_MIN;
	volatile int64_t t125 = 209LL;

    t125 = (x565-(x566+(x567%x568)));

    if (t125 != -944149466LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x573 = -1;
	volatile uint16_t x574 = UINT16_MAX;
	int8_t x576 = INT8_MAX;
	int32_t t126 = -86;

    t126 = (x573-(x574+(x575%x576)));

    if (t126 != -65578) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x578 = 105U;
	volatile int8_t x579 = INT8_MAX;
	uint8_t x580 = UINT8_MAX;
	static volatile int32_t t127 = 21306213;

    t127 = (x577-(x578+(x579%x580)));

    if (t127 != 65303) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x582 = -5334;
	int64_t x583 = -1LL;
	int8_t x584 = INT8_MIN;
	volatile int64_t t128 = 4372LL;

    t128 = (x581-(x582+(x583%x584)));

    if (t128 != 5419LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x585 = 1U;
	uint8_t x588 = 1U;
	volatile uint64_t t129 = 2642786864425972LLU;

    t129 = (x585-(x586+(x587%x588)));

    if (t129 != 18446744073709550276LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x589 = -1;
	static int64_t x590 = -31724675727397LL;
	volatile int16_t x591 = INT16_MIN;
	int64_t x592 = INT64_MIN;
	volatile int64_t t130 = -2841475LL;

    t130 = (x589-(x590+(x591%x592)));

    if (t130 != 31724675760164LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x594 = INT8_MIN;
	uint32_t x595 = 161388U;
	int32_t x596 = 45325;
	static uint32_t t131 = 6770096U;

    t131 = (x593-(x594+(x595%x596)));

    if (t131 != 4294948410U) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x600 = -1;
	uint32_t t132 = 3040U;

    t132 = (x597-(x598+(x599%x600)));

    if (t132 != 4294967277U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x601 = INT8_MAX;
	int16_t x602 = 30;
	static int32_t x603 = INT32_MIN;
	int8_t x604 = 38;
	volatile int32_t t133 = 218581;

    t133 = (x601-(x602+(x603%x604)));

    if (t133 != 119) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x606 = -32;
	uint8_t x607 = 26U;
	int32_t t134 = 13;

    t134 = (x605-(x606+(x607%x608)));

    if (t134 != 5) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x611 = -1LL;
	uint64_t x612 = 854647466948LLU;

    t135 = (x609-(x610+(x611%x612)));

    if (t135 != 18446743403209375897LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int8_t x613 = INT8_MIN;
	int32_t x614 = INT32_MIN;
	int16_t x616 = -1;
	int32_t t136 = -168535037;

    t136 = (x613-(x614+(x615%x616)));

    if (t136 != 2147483520) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x617 = UINT8_MAX;
	int16_t x618 = -65;
	int32_t x619 = INT32_MAX;
	static int8_t x620 = INT8_MAX;
	int32_t t137 = 136740035;

    t137 = (x617-(x618+(x619%x620)));

    if (t137 != 313) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x621 = -1;
	int16_t x622 = INT16_MAX;
	uint64_t x623 = 40LLU;
	static int32_t x624 = INT32_MAX;
	uint64_t t138 = 2LLU;

    t138 = (x621-(x622+(x623%x624)));

    if (t138 != 18446744073709518808LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x626 = INT64_MIN;
	int32_t x627 = INT32_MAX;
	volatile int64_t t139 = 16101431927449LL;

    t139 = (x625-(x626+(x627%x628)));

    if (t139 != 9223372034707259393LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x629 = 14926U;
	int16_t x630 = -1;
	int32_t x631 = INT32_MIN;
	uint8_t x632 = 13U;
	volatile int32_t t140 = -483;

    t140 = (x629-(x630+(x631%x632)));

    if (t140 != 14938) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x633 = INT32_MAX;
	static int16_t x634 = INT16_MAX;
	int16_t x635 = INT16_MIN;
	int32_t x636 = 1;
	static int32_t t141 = 1065;

    t141 = (x633-(x634+(x635%x636)));

    if (t141 != 2147450880) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x638 = INT16_MIN;
	uint64_t x639 = UINT64_MAX;
	int8_t x640 = INT8_MAX;

    t142 = (x637-(x638+(x639%x640)));

    if (t142 != 32665LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x641 = UINT64_MAX;
	uint8_t x642 = UINT8_MAX;
	uint64_t x643 = UINT64_MAX;
	int16_t x644 = -1854;
	volatile uint64_t t143 = 85629552867LLU;

    t143 = (x641-(x642+(x643%x644)));

    if (t143 != 18446744073709549507LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x645 = -370;
	int8_t x646 = INT8_MIN;
	static int64_t x647 = INT64_MIN;
	volatile uint64_t x648 = 1008356079108681128LLU;
	volatile uint64_t t144 = 431969464199LLU;

    t144 = (x645-(x646+(x647%x648)));

    if (t144 != 18298576748832905718LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x649 = -57;
	int64_t x650 = 33815443154LL;
	int64_t x652 = INT64_MIN;
	static int64_t t145 = -20LL;

    t145 = (x649-(x650+(x651%x652)));

    if (t145 != -33815443212LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x658 = INT8_MIN;
	int8_t x659 = INT8_MAX;
	static uint32_t x660 = UINT32_MAX;
	volatile uint32_t t146 = 9307446U;

    t146 = (x657-(x658+(x659%x660)));

    if (t146 != 4294934529U) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x664 = -1LL;
	volatile uint64_t t147 = 30LLU;

    t147 = (x661-(x662+(x663%x664)));

    if (t147 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x665 = -1LL;
	int16_t x666 = INT16_MIN;
	int16_t x667 = INT16_MAX;
	int16_t x668 = INT16_MAX;
	volatile int64_t t148 = 8186564LL;

    t148 = (x665-(x666+(x667%x668)));

    if (t148 != 32767LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x669 = UINT32_MAX;
	static int32_t x671 = -9;
	uint64_t x672 = 2LLU;
	uint64_t t149 = 3LLU;

    t149 = (x669-(x670+(x671%x672)));

    if (t149 != 6442450942LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x677 = 258U;
	int8_t x678 = 1;
	int8_t x679 = INT8_MAX;
	static int64_t x680 = INT64_MIN;
	int64_t t150 = 783309701752600216LL;

    t150 = (x677-(x678+(x679%x680)));

    if (t150 != 130LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x681 = 61U;
	static int16_t x682 = INT16_MAX;
	int32_t x683 = -1;
	int64_t x684 = -1LL;
	int64_t t151 = -3908637876LL;

    t151 = (x681-(x682+(x683%x684)));

    if (t151 != -32706LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x685 = 59U;
	int64_t x686 = -580136LL;
	int32_t x688 = -418;

    t152 = (x685-(x686+(x687%x688)));

    if (t152 != 580068LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x691 = INT64_MAX;
	uint16_t x692 = 916U;
	static volatile int64_t t153 = -3238151LL;

    t153 = (x689-(x690+(x691%x692)));

    if (t153 != -540000802230075611LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x693 = 49U;
	volatile int32_t x694 = INT32_MIN;
	static volatile uint16_t x696 = UINT16_MAX;

    t154 = (x693-(x694+(x695%x696)));

    if (t154 != 2147516465LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x697 = 3606261791037381844LLU;
	uint32_t x699 = UINT32_MAX;
	volatile uint64_t t155 = 3442522LLU;

    t155 = (x697-(x698+(x699%x700)));

    if (t155 != 3606261788889898193LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x702 = 13328;
	uint32_t x703 = 44246554U;
	int16_t x704 = -1;
	volatile uint32_t t156 = 505414108U;

    t156 = (x701-(x702+(x703%x704)));

    if (t156 != 4250772949U) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x705 = INT64_MIN;
	int8_t x706 = -1;
	int8_t x707 = 14;
	int64_t x708 = -1LL;

    t157 = (x705-(x706+(x707%x708)));

    if (t157 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x709 = 52050U;
	static int64_t x711 = -1LL;
	static int32_t x712 = INT32_MIN;
	volatile int64_t t158 = 14424545734LL;

    t158 = (x709-(x710+(x711%x712)));

    if (t158 != 52052LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x713 = 23725762507LLU;
	volatile uint16_t x714 = UINT16_MAX;
	int32_t x716 = -64;

    t159 = (x713-(x714+(x715%x716)));

    if (t159 != 23725695719LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x717 = INT16_MAX;
	static int16_t x719 = INT16_MIN;
	uint32_t x720 = 8750529U;
	volatile uint32_t t160 = 92U;

    t160 = (x717-(x718+(x719%x720)));

    if (t160 != 4287824731U) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x722 = INT16_MIN;
	int32_t x723 = INT32_MIN;
	int64_t x724 = INT64_MIN;
	volatile int64_t t161 = -1LL;

    t161 = (x721-(x722+(x723%x724)));

    if (t161 != 2147516415LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x730 = INT32_MIN;
	int8_t x732 = -1;
	volatile int32_t t162 = INT32_MAX;

    t162 = (x729-(x730+(x731%x732)));

    if (t162 != INT32_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x733 = INT16_MIN;
	int32_t x734 = INT32_MIN;
	uint64_t x735 = UINT64_MAX;
	static int64_t x736 = INT64_MAX;
	volatile uint64_t t163 = 10980LLU;

    t163 = (x733-(x734+(x735%x736)));

    if (t163 != 2147450879LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int8_t x737 = 1;
	int64_t x740 = INT64_MAX;
	volatile int64_t t164 = -1305701LL;

    t164 = (x737-(x738+(x739%x740)));

    if (t164 != 32897LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x741 = UINT16_MAX;
	static int16_t x742 = 5071;
	uint8_t x743 = 15U;
	int32_t x744 = -487830745;

    t165 = (x741-(x742+(x743%x744)));

    if (t165 != 60449) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x751 = INT8_MAX;
	volatile int16_t x752 = INT16_MAX;
	volatile int32_t t166 = 2437;

    t166 = (x749-(x750+(x751%x752)));

    if (t166 != 5002) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x753 = 58LL;
	volatile uint64_t x754 = 1LLU;
	int8_t x755 = INT8_MAX;
	volatile int8_t x756 = INT8_MAX;
	static uint64_t t167 = 310031LLU;

    t167 = (x753-(x754+(x755%x756)));

    if (t167 != 57LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x758 = INT64_MIN;
	uint32_t x759 = 2483881U;
	uint8_t x760 = UINT8_MAX;
	static int64_t t168 = 2533LL;

    t168 = (x757-(x758+(x759%x760)));

    if (t168 != 9223372036854775626LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x761 = INT32_MIN;
	int16_t x763 = -105;
	int8_t x764 = INT8_MIN;
	volatile int32_t t169 = -22716331;

    t169 = (x761-(x762+(x763%x764)));

    if (t169 != -2147483557) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x769 = 30U;
	int8_t x770 = -1;
	uint64_t x772 = UINT64_MAX;
	static volatile uint64_t t170 = 1504101231LLU;

    t170 = (x769-(x770+(x771%x772)));

    if (t170 != 18446743869645760294LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x773 = -1LL;
	int64_t x774 = -1LL;
	int16_t x775 = -43;
	int16_t x776 = 3564;
	int64_t t171 = -26182LL;

    t171 = (x773-(x774+(x775%x776)));

    if (t171 != 43LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x778 = -1LL;
	int64_t x780 = INT64_MAX;
	volatile int64_t t172 = -1023167LL;

    t172 = (x777-(x778+(x779%x780)));

    if (t172 != 15393935LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x781 = UINT32_MAX;
	volatile uint16_t x782 = 3U;
	static int16_t x783 = INT16_MIN;
	volatile int16_t x784 = 35;
	static uint32_t t173 = 1200U;

    t173 = (x781-(x782+(x783%x784)));

    if (t173 != 4U) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x786 = -1LL;
	volatile uint32_t x787 = UINT32_MAX;
	int16_t x788 = 2274;
	uint64_t t174 = 3387516672861789LLU;

    t174 = (x785-(x786+(x787%x788)));

    if (t174 != 40337189LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x789 = INT8_MAX;
	int16_t x790 = INT16_MIN;
	uint32_t x791 = 91810U;
	int8_t x792 = INT8_MIN;
	uint32_t t175 = 863012U;

    t175 = (x789-(x790+(x791%x792)));

    if (t175 != 4294908381U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x797 = INT64_MIN;
	int64_t x798 = INT64_MIN;
	int32_t x799 = INT32_MIN;
	volatile int32_t x800 = -1;
	volatile int64_t t176 = 749LL;

    t176 = (x797-(x798+(x799%x800)));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x801 = -1;
	uint8_t x802 = 6U;
	uint8_t x803 = UINT8_MAX;
	uint8_t x804 = 32U;
	volatile int32_t t177 = 928;

    t177 = (x801-(x802+(x803%x804)));

    if (t177 != -38) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x805 = 1U;
	uint32_t x807 = UINT32_MAX;
	volatile uint64_t t178 = 268836828510352960LLU;

    t178 = (x805-(x806+(x807%x808)));

    if (t178 != 18446744073592202904LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x809 = -274;
	int8_t x810 = INT8_MIN;
	int8_t x811 = -4;

    t179 = (x809-(x810+(x811%x812)));

    if (t179 != -146) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x813 = -1LL;
	int8_t x814 = INT8_MIN;
	int32_t x815 = -55454;
	static uint32_t x816 = UINT32_MAX;
	int64_t t180 = 3094LL;

    t180 = (x813-(x814+(x815%x816)));

    if (t180 != -4294911715LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x817 = INT32_MIN;
	static int32_t x818 = INT32_MIN;
	static uint8_t x819 = 0U;
	volatile uint16_t x820 = 251U;
	volatile int32_t t181 = -76158;

    t181 = (x817-(x818+(x819%x820)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x826 = 23977U;
	int64_t x827 = INT64_MIN;
	static uint8_t x828 = 108U;
	uint64_t t182 = 2212111971LLU;

    t182 = (x825-(x826+(x827%x828)));

    if (t182 != 929918600078620619LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x829 = 89346U;
	int16_t x830 = INT16_MIN;
	int16_t x831 = INT16_MAX;
	volatile uint16_t x832 = UINT16_MAX;
	uint32_t t183 = 220U;

    t183 = (x829-(x830+(x831%x832)));

    if (t183 != 89347U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x837 = INT32_MIN;
	static int8_t x839 = -1;
	volatile int64_t x840 = -1LL;

    t184 = (x837-(x838+(x839%x840)));

    if (t184 != 18446744071562067360LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x841 = INT16_MIN;
	int8_t x842 = INT8_MAX;
	uint32_t x844 = 729U;
	uint32_t t185 = 285720U;

    t185 = (x841-(x842+(x843%x844)));

    if (t185 != 4294934399U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x845 = 474426754U;
	static uint16_t x846 = 17U;
	int64_t x847 = INT64_MAX;
	volatile int16_t x848 = -1118;

    t186 = (x845-(x846+(x847%x848)));

    if (t186 != 474425664LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x849 = INT16_MIN;
	int16_t x850 = INT16_MIN;
	volatile uint16_t x851 = 16U;
	uint8_t x852 = UINT8_MAX;
	int32_t t187 = -6;

    t187 = (x849-(x850+(x851%x852)));

    if (t187 != -16) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x853 = 8166U;
	volatile uint16_t x854 = UINT16_MAX;
	int32_t x855 = -1;
	int16_t x856 = 88;
	int32_t t188 = 188804;

    t188 = (x853-(x854+(x855%x856)));

    if (t188 != -57368) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x857 = INT8_MIN;
	uint16_t x858 = 15U;
	int8_t x859 = 17;
	int8_t x860 = -33;
	int32_t t189 = 1;

    t189 = (x857-(x858+(x859%x860)));

    if (t189 != -160) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x861 = INT8_MIN;
	int64_t x862 = INT64_MIN;
	volatile uint8_t x863 = 117U;
	static volatile int32_t x864 = 212180604;
	volatile int64_t t190 = 22023720720248LL;

    t190 = (x861-(x862+(x863%x864)));

    if (t190 != 9223372036854775563LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x869 = UINT32_MAX;
	uint16_t x870 = 0U;
	volatile int64_t t191 = -26882698625LL;

    t191 = (x869-(x870+(x871%x872)));

    if (t191 != 4294967286LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x873 = 59U;
	static int32_t x874 = INT32_MIN;
	static uint64_t x875 = UINT64_MAX;
	int16_t x876 = -1;
	volatile uint64_t t192 = 263869LLU;

    t192 = (x873-(x874+(x875%x876)));

    if (t192 != 2147483707LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x877 = INT16_MIN;
	int16_t x879 = -125;
	int32_t x880 = 31667237;
	int32_t t193 = 6269333;

    t193 = (x877-(x878+(x879%x880)));

    if (t193 != -32831) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x881 = INT16_MIN;
	int64_t x883 = INT64_MAX;

    t194 = (x881-(x882+(x883%x884)));

    if (t194 != 2147450879LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x885 = UINT32_MAX;
	volatile uint64_t x886 = 45667LLU;
	volatile int32_t x887 = INT32_MAX;
	static uint32_t x888 = 91U;

    t195 = (x885-(x886+(x887%x888)));

    if (t195 != 4294921592LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x889 = 88U;
	static int16_t x890 = 9;
	int8_t x891 = INT8_MIN;
	int16_t x892 = -3;

    t196 = (x889-(x890+(x891%x892)));

    if (t196 != 81) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x893 = 23974462355171LLU;
	int8_t x895 = -1;
	int8_t x896 = INT8_MIN;

    t197 = (x893-(x894+(x895%x896)));

    if (t197 != 9223396011317130981LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x897 = 0;
	volatile uint64_t x898 = UINT64_MAX;
	volatile int32_t x899 = -1;
	int8_t x900 = 46;
	volatile uint64_t t198 = 55786299980LLU;

    t198 = (x897-(x898+(x899%x900)));

    if (t198 != 2LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x901 = UINT8_MAX;
	volatile uint64_t x902 = UINT64_MAX;
	volatile int32_t x903 = INT32_MIN;
	static volatile int32_t x904 = 8220;

    t199 = (x901-(x902+(x903%x904)));

    if (t199 != 684LLU) { NG(); } else { ; }
	
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


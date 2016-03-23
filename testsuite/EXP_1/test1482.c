
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

volatile int8_t x1 = INT8_MAX;
volatile int32_t x3 = 2;
int16_t x5 = INT16_MAX;
static int16_t x9 = INT16_MAX;
int32_t x10 = 3216;
int32_t x20 = 134699419;
static int32_t t4 = -181;
uint64_t x23 = 3399384622587LLU;
volatile uint8_t x24 = 6U;
int32_t t5 = -3;
int32_t t6 = -404;
static int64_t x33 = INT64_MAX;
uint8_t x35 = 1U;
static int16_t x43 = -1;
int8_t x50 = -1;
volatile int32_t t12 = 206881321;
uint64_t x57 = 1LLU;
int32_t x64 = INT32_MIN;
int16_t x66 = INT16_MIN;
uint32_t x68 = 1010156U;
static int8_t x72 = INT8_MAX;
int64_t x76 = -1LL;
int64_t x78 = INT64_MIN;
int8_t x82 = INT8_MAX;
static uint16_t x86 = 115U;
int64_t x100 = INT64_MAX;
volatile int32_t x108 = INT32_MAX;
uint16_t x114 = UINT16_MAX;
int64_t x117 = INT64_MIN;
int16_t x123 = -1;
volatile int64_t x126 = INT64_MIN;
uint16_t x134 = 7U;
volatile uint16_t x137 = 2554U;
static volatile uint8_t x141 = 1U;
int8_t x144 = INT8_MIN;
uint32_t x146 = UINT32_MAX;
volatile uint32_t t36 = 64199053U;
static uint32_t x152 = 477282U;
static uint32_t t37 = 4180998U;
int16_t x162 = INT16_MAX;
int32_t t40 = -2165;
int32_t x165 = -900;
int64_t x173 = 273040226411LL;
uint32_t x178 = 37524543U;
int32_t x179 = INT32_MIN;
int64_t x180 = INT64_MAX;
uint16_t x184 = 493U;
uint64_t x187 = 69533LLU;
int64_t x194 = INT64_MIN;
int64_t x203 = 293328070998965798LL;
static int32_t x206 = -1;
int32_t t51 = -488867;
static uint64_t t53 = 972843774853LLU;
volatile int8_t x221 = -1;
int32_t x224 = -1;
int64_t x228 = INT64_MIN;
uint16_t x232 = 1U;
uint8_t x234 = UINT8_MAX;
int16_t x237 = INT16_MIN;
int32_t x239 = -1;
static int64_t t59 = 16444486491LL;
int64_t x241 = INT64_MIN;
int32_t t60 = 3;
int8_t x247 = 2;
int64_t x248 = INT64_MAX;
int16_t x252 = INT16_MIN;
uint16_t x256 = 12618U;
static uint64_t x259 = 1180638LLU;
int32_t x265 = INT32_MIN;
int64_t x277 = 263102249LL;
static uint32_t x283 = 248754U;
static volatile int32_t t71 = -400593495;
static int8_t x291 = 20;
int8_t x292 = -1;
volatile int32_t t72 = -15109343;
static int8_t x316 = INT8_MIN;
volatile int32_t t78 = 1;
int8_t x331 = 3;
int16_t x337 = INT16_MAX;
volatile int8_t x351 = 1;
static volatile uint16_t x358 = 1U;
int64_t x373 = 1084668056839778LL;
static volatile uint32_t t94 = 1976U;
uint8_t x384 = 94U;
static volatile int64_t x391 = INT64_MIN;
int16_t x393 = INT16_MIN;
int32_t t98 = -1027846594;
int8_t x397 = -1;
uint16_t x399 = 2U;
uint16_t x404 = 2255U;
int32_t t102 = 25179;
int16_t x414 = -223;
volatile int32_t t106 = 128571;
int32_t x429 = -14836;
int32_t x431 = 4;
volatile int16_t x433 = 3799;
volatile uint16_t x434 = 3U;
static volatile int8_t x446 = INT8_MAX;
uint64_t t111 = 378440LLU;
int32_t x452 = -1;
static int16_t x455 = INT16_MIN;
static uint32_t t113 = 0U;
int16_t x462 = INT16_MIN;
int32_t x465 = INT32_MIN;
volatile int32_t t116 = 36211;
int8_t x473 = -5;
int64_t x478 = -1LL;
int32_t x485 = INT32_MIN;
uint16_t x495 = UINT16_MAX;
uint64_t x497 = 8024LLU;
int8_t x501 = INT8_MAX;
static volatile int8_t x503 = -1;
volatile int32_t t125 = 335246;
uint32_t x505 = UINT32_MAX;
static int32_t t126 = 10705430;
volatile uint16_t x510 = 10909U;
int8_t x528 = INT8_MIN;
uint32_t x530 = 70627U;
int32_t x536 = INT32_MIN;
int16_t x542 = -1;
int64_t x544 = INT64_MIN;
volatile int16_t x548 = -1;
volatile int8_t x550 = 1;
static int64_t x551 = INT64_MIN;
int16_t x555 = INT16_MIN;
int32_t t138 = -88041;
static uint8_t x557 = 30U;
int8_t x561 = INT8_MAX;
int16_t x565 = -7;
int16_t x567 = INT16_MIN;
static int64_t x575 = -1LL;
int16_t x577 = 178;
int64_t x578 = INT64_MIN;
int32_t x579 = INT32_MIN;
uint64_t x583 = 6701558325393LLU;
int64_t t145 = -259517556137005LL;
static volatile uint8_t x586 = 29U;
uint64_t t147 = 1068260728LLU;
int32_t x596 = 113623;
volatile uint8_t x600 = 0U;
static uint16_t x602 = 238U;
static volatile int32_t x606 = 639010254;
uint16_t x611 = UINT16_MAX;
static int32_t x612 = INT32_MIN;
volatile int32_t t153 = -31546619;
int32_t x619 = -1;
uint8_t x625 = 119U;
static int8_t x628 = -14;
uint16_t x632 = 653U;
uint8_t x635 = 50U;
uint8_t x638 = UINT8_MAX;
uint16_t x642 = UINT16_MAX;
volatile int64_t t161 = 53846LL;
int16_t x652 = 66;
uint16_t x658 = UINT16_MAX;
uint8_t x659 = UINT8_MAX;
static int64_t x663 = -48LL;
int64_t x665 = INT64_MIN;
static int64_t t166 = 23481LL;
int32_t t169 = 3;
volatile int64_t x690 = INT64_MAX;
int16_t x697 = INT16_MAX;
uint32_t x703 = UINT32_MAX;
volatile int32_t t176 = -1245;
int64_t x712 = 15087411781LL;
volatile int64_t x717 = -15168295644LL;
static int8_t x721 = INT8_MAX;
volatile int32_t x722 = -724;
int8_t x726 = -1;
uint8_t x729 = 1U;
int64_t x735 = INT64_MIN;
int32_t t184 = -152759;
int64_t x742 = 14LL;
static int32_t t186 = -51405;
static int8_t x749 = -1;
static volatile int8_t x750 = INT8_MIN;
volatile uint32_t x758 = 453477220U;
static uint64_t x760 = 43756LLU;
volatile int16_t x763 = -1;
int64_t x765 = INT64_MIN;
uint8_t x766 = UINT8_MAX;
int16_t x771 = 109;
int32_t t192 = -20174222;
int16_t x777 = 612;
int32_t x778 = -1;
int32_t t194 = -8974212;
static int64_t x784 = -2563769LL;
int64_t t195 = 5749748055383LL;
volatile int16_t x785 = INT16_MAX;
int64_t x788 = -390LL;
int16_t x790 = 3;
int64_t x800 = -257732LL;


void f0(void) {
    	static int64_t x2 = -1LL;
	static int32_t x4 = -1;
	volatile int32_t t0 = 19;

    t0 = (((x1==x2)==x3)&x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x6 = 26U;
	uint64_t x7 = 8331LLU;
	uint16_t x8 = 0U;
	static volatile int32_t t1 = 114;

    t1 = (((x5==x6)==x7)&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x11 = INT64_MIN;
	volatile uint16_t x12 = UINT16_MAX;
	int32_t t2 = 177110;

    t2 = (((x9==x10)==x11)&x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = -1;
	static uint16_t x14 = 2U;
	int16_t x15 = -14;
	int8_t x16 = -31;
	static volatile int32_t t3 = -4076867;

    t3 = (((x13==x14)==x15)&x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = 10523978634181684LL;
	volatile int8_t x18 = INT8_MIN;
	int16_t x19 = INT16_MAX;

    t4 = (((x17==x18)==x19)&x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	volatile uint16_t x22 = UINT16_MAX;

    t5 = (((x21==x22)==x23)&x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	uint16_t x26 = 3U;
	int16_t x27 = INT16_MIN;
	static volatile int16_t x28 = 176;

    t6 = (((x25==x26)==x27)&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	int32_t x30 = INT32_MIN;
	int32_t x31 = -1;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 372578;

    t7 = (((x29==x30)==x31)&x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x34 = 148404U;
	int64_t x36 = INT64_MAX;
	volatile int64_t t8 = -182146646099314LL;

    t8 = (((x33==x34)==x35)&x36);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	static uint8_t x38 = 53U;
	uint64_t x39 = 302330254837289LLU;
	volatile int64_t x40 = -1LL;
	int64_t t9 = -12871445LL;

    t9 = (((x37==x38)==x39)&x40);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	uint8_t x42 = 2U;
	static volatile int16_t x44 = 1;
	int32_t t10 = -3340039;

    t10 = (((x41==x42)==x43)&x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MAX;
	int8_t x46 = 1;
	int64_t x47 = INT64_MIN;
	volatile uint64_t x48 = UINT64_MAX;
	uint64_t t11 = 3LLU;

    t11 = (((x45==x46)==x47)&x48);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x49 = INT64_MIN;
	int32_t x51 = INT32_MIN;
	uint8_t x52 = 4U;

    t12 = (((x49==x50)==x51)&x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = UINT8_MAX;
	static uint32_t x54 = 9319100U;
	static volatile int8_t x55 = INT8_MIN;
	int16_t x56 = -1;
	static volatile int32_t t13 = -3606;

    t13 = (((x53==x54)==x55)&x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = 192628117;
	static uint32_t x59 = 6497U;
	int32_t x60 = INT32_MIN;
	static volatile int32_t t14 = 0;

    t14 = (((x57==x58)==x59)&x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x61 = INT8_MIN;
	static int64_t x62 = 0LL;
	volatile uint64_t x63 = 62LLU;
	volatile int32_t t15 = -3990;

    t15 = (((x61==x62)==x63)&x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x65 = -282;
	int16_t x67 = -14;
	volatile uint32_t t16 = 73U;

    t16 = (((x65==x66)==x67)&x68);

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	static int8_t x70 = -56;
	uint64_t x71 = UINT64_MAX;
	volatile int32_t t17 = 1324897;

    t17 = (((x69==x70)==x71)&x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = 1;
	int8_t x74 = -1;
	int16_t x75 = INT16_MAX;
	volatile int64_t t18 = 7831845999351LL;

    t18 = (((x73==x74)==x75)&x76);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = 16U;
	int8_t x79 = INT8_MAX;
	volatile uint32_t x80 = 49676662U;
	uint32_t t19 = 5617U;

    t19 = (((x77==x78)==x79)&x80);

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x81 = INT32_MIN;
	volatile int32_t x83 = INT32_MIN;
	int8_t x84 = 59;
	int32_t t20 = 397;

    t20 = (((x81==x82)==x83)&x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = 225975;
	int32_t x87 = -1;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = 934;

    t21 = (((x85==x86)==x87)&x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 12831209LLU;
	static int8_t x90 = -4;
	int64_t x91 = 79057180516702LL;
	static volatile uint8_t x92 = 21U;
	static volatile int32_t t22 = -497180898;

    t22 = (((x89==x90)==x91)&x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x93 = 3;
	volatile int16_t x94 = -1;
	int32_t x95 = -1;
	uint8_t x96 = 3U;
	volatile int32_t t23 = 860;

    t23 = (((x93==x94)==x95)&x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -1;
	int16_t x98 = INT16_MAX;
	int16_t x99 = -14457;
	int64_t t24 = -503630LL;

    t24 = (((x97==x98)==x99)&x100);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x101 = INT64_MIN;
	uint64_t x102 = 5366774366686191LLU;
	int32_t x103 = 0;
	volatile int8_t x104 = INT8_MAX;
	int32_t t25 = -15839;

    t25 = (((x101==x102)==x103)&x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	int8_t x106 = INT8_MIN;
	uint32_t x107 = UINT32_MAX;
	int32_t t26 = 35010;

    t26 = (((x105==x106)==x107)&x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = INT64_MIN;
	int8_t x110 = -1;
	uint16_t x111 = UINT16_MAX;
	volatile uint8_t x112 = 15U;
	int32_t t27 = -6750290;

    t27 = (((x109==x110)==x111)&x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	int16_t x115 = -1;
	int64_t x116 = -428811858355261LL;
	int64_t t28 = -42LL;

    t28 = (((x113==x114)==x115)&x116);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = -1LL;
	int8_t x119 = -1;
	volatile int32_t x120 = INT32_MIN;
	static volatile int32_t t29 = 15;

    t29 = (((x117==x118)==x119)&x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x121 = 64U;
	volatile int8_t x122 = 27;
	int64_t x124 = INT64_MAX;
	volatile int64_t t30 = 4825517484950215LL;

    t30 = (((x121==x122)==x123)&x124);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x125 = INT8_MIN;
	static int16_t x127 = -39;
	volatile int64_t x128 = INT64_MIN;
	volatile int64_t t31 = 16630810837LL;

    t31 = (((x125==x126)==x127)&x128);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = 4124439848501782669LL;
	static uint8_t x130 = 1U;
	volatile uint32_t x131 = 303712571U;
	int16_t x132 = INT16_MAX;
	static int32_t t32 = 6142522;

    t32 = (((x129==x130)==x131)&x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 361U;
	int64_t x135 = -1LL;
	volatile int32_t x136 = INT32_MAX;
	static int32_t t33 = 16172154;

    t33 = (((x133==x134)==x135)&x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x138 = INT64_MIN;
	int32_t x139 = -1;
	int64_t x140 = -2134LL;
	int64_t t34 = -117359847LL;

    t34 = (((x137==x138)==x139)&x140);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x142 = 41477U;
	int32_t x143 = INT32_MIN;
	volatile int32_t t35 = 140995571;

    t35 = (((x141==x142)==x143)&x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 1U;
	static int16_t x147 = INT16_MIN;
	uint32_t x148 = 157739U;

    t36 = (((x145==x146)==x147)&x148);

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 95390314U;
	uint8_t x150 = 62U;
	uint8_t x151 = 10U;

    t37 = (((x149==x150)==x151)&x152);

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = 961U;
	volatile int16_t x154 = 1;
	int8_t x155 = INT8_MAX;
	int64_t x156 = INT64_MIN;
	volatile int64_t t38 = 34674342512LL;

    t38 = (((x153==x154)==x155)&x156);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x157 = 0U;
	static int32_t x158 = -1;
	uint8_t x159 = 2U;
	uint8_t x160 = 28U;
	volatile int32_t t39 = 8;

    t39 = (((x157==x158)==x159)&x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = UINT16_MAX;
	int16_t x163 = INT16_MAX;
	int8_t x164 = -1;

    t40 = (((x161==x162)==x163)&x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x166 = 1U;
	int8_t x167 = INT8_MAX;
	int16_t x168 = -1;
	static int32_t t41 = -1709;

    t41 = (((x165==x166)==x167)&x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MAX;
	int16_t x170 = INT16_MAX;
	static int16_t x171 = INT16_MIN;
	uint16_t x172 = 3893U;
	int32_t t42 = -1587677;

    t42 = (((x169==x170)==x171)&x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x174 = INT16_MIN;
	int32_t x175 = -9284;
	int16_t x176 = 97;
	volatile int32_t t43 = -6;

    t43 = (((x173==x174)==x175)&x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = INT8_MIN;
	volatile int64_t t44 = 15497912LL;

    t44 = (((x177==x178)==x179)&x180);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = -18507447;
	int16_t x182 = 93;
	int64_t x183 = INT64_MIN;
	volatile int32_t t45 = 47376;

    t45 = (((x181==x182)==x183)&x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -1;
	volatile int64_t x186 = INT64_MIN;
	int64_t x188 = INT64_MIN;
	int64_t t46 = 543854441689187207LL;

    t46 = (((x185==x186)==x187)&x188);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x189 = INT64_MIN;
	uint32_t x190 = 1U;
	volatile int8_t x191 = INT8_MIN;
	uint16_t x192 = 27637U;
	int32_t t47 = 13697097;

    t47 = (((x189==x190)==x191)&x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MIN;
	uint16_t x195 = UINT16_MAX;
	int64_t x196 = INT64_MAX;
	volatile int64_t t48 = 735076743390LL;

    t48 = (((x193==x194)==x195)&x196);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = 1;
	int16_t x198 = -1;
	int32_t x199 = -423643050;
	static int16_t x200 = 249;
	volatile int32_t t49 = 219;

    t49 = (((x197==x198)==x199)&x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x201 = 72U;
	static int32_t x202 = -1;
	int16_t x204 = -1;
	volatile int32_t t50 = 260392191;

    t50 = (((x201==x202)==x203)&x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x205 = 1983U;
	volatile uint32_t x207 = 349210U;
	int16_t x208 = -1;

    t51 = (((x205==x206)==x207)&x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = 121U;
	uint16_t x210 = 0U;
	static int64_t x211 = -132522063456452327LL;
	volatile int32_t x212 = -24;
	volatile int32_t t52 = 1;

    t52 = (((x209==x210)==x211)&x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = 6;
	static volatile uint64_t x214 = UINT64_MAX;
	volatile int64_t x215 = 1602144LL;
	uint64_t x216 = 1263965717666LLU;

    t53 = (((x213==x214)==x215)&x216);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MAX;
	int8_t x218 = INT8_MIN;
	int16_t x219 = -14;
	uint64_t x220 = UINT64_MAX;
	volatile uint64_t t54 = 14516LLU;

    t54 = (((x217==x218)==x219)&x220);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x222 = 17;
	uint16_t x223 = UINT16_MAX;
	int32_t t55 = 360075907;

    t55 = (((x221==x222)==x223)&x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x225 = INT16_MIN;
	int32_t x226 = INT32_MAX;
	static int8_t x227 = 1;
	int64_t t56 = -279023727321524717LL;

    t56 = (((x225==x226)==x227)&x228);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x229 = 6264;
	volatile int8_t x230 = -1;
	volatile int8_t x231 = INT8_MIN;
	int32_t t57 = -14;

    t57 = (((x229==x230)==x231)&x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = UINT16_MAX;
	int16_t x235 = INT16_MIN;
	int8_t x236 = INT8_MAX;
	static volatile int32_t t58 = 381984424;

    t58 = (((x233==x234)==x235)&x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x238 = -1;
	int64_t x240 = INT64_MIN;

    t59 = (((x237==x238)==x239)&x240);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x242 = 11520U;
	int32_t x243 = INT32_MIN;
	static int32_t x244 = INT32_MIN;

    t60 = (((x241==x242)==x243)&x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x245 = INT16_MAX;
	int8_t x246 = INT8_MIN;
	int64_t t61 = 17950908701834563LL;

    t61 = (((x245==x246)==x247)&x248);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int16_t x249 = INT16_MIN;
	static uint32_t x250 = 8938312U;
	static int64_t x251 = INT64_MIN;
	volatile int32_t t62 = 18487;

    t62 = (((x249==x250)==x251)&x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x253 = INT64_MIN;
	int64_t x254 = INT64_MAX;
	static int8_t x255 = INT8_MIN;
	static int32_t t63 = 7619540;

    t63 = (((x253==x254)==x255)&x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MAX;
	static volatile int16_t x258 = 6306;
	volatile int64_t x260 = 8LL;
	volatile int64_t t64 = 1917080728543LL;

    t64 = (((x257==x258)==x259)&x260);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MIN;
	uint8_t x262 = 30U;
	int8_t x263 = 17;
	static volatile uint16_t x264 = UINT16_MAX;
	static volatile int32_t t65 = -17667;

    t65 = (((x261==x262)==x263)&x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x266 = INT32_MIN;
	int16_t x267 = INT16_MIN;
	uint16_t x268 = 7407U;
	int32_t t66 = -20830;

    t66 = (((x265==x266)==x267)&x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 173352U;
	volatile uint32_t x270 = 3U;
	int16_t x271 = INT16_MAX;
	volatile uint16_t x272 = UINT16_MAX;
	volatile int32_t t67 = 6653915;

    t67 = (((x269==x270)==x271)&x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x273 = 22;
	static uint16_t x274 = 29U;
	int64_t x275 = -1LL;
	volatile int8_t x276 = -1;
	int32_t t68 = 1;

    t68 = (((x273==x274)==x275)&x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x278 = UINT32_MAX;
	static int8_t x279 = INT8_MIN;
	uint64_t x280 = UINT64_MAX;
	volatile uint64_t t69 = 8726774177887311603LLU;

    t69 = (((x277==x278)==x279)&x280);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint64_t x281 = 112621519406209291LLU;
	int8_t x282 = INT8_MIN;
	uint16_t x284 = 0U;
	volatile int32_t t70 = -2371590;

    t70 = (((x281==x282)==x283)&x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = UINT32_MAX;
	static int8_t x286 = INT8_MIN;
	uint64_t x287 = UINT64_MAX;
	int16_t x288 = INT16_MAX;

    t71 = (((x285==x286)==x287)&x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x289 = UINT8_MAX;
	uint16_t x290 = 221U;

    t72 = (((x289==x290)==x291)&x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = UINT8_MAX;
	uint32_t x294 = 247413740U;
	int64_t x295 = 1678177LL;
	static uint8_t x296 = 25U;
	int32_t t73 = -1;

    t73 = (((x293==x294)==x295)&x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x297 = -1LL;
	int64_t x298 = 2874529802827LL;
	volatile int64_t x299 = -1LL;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t74 = 154890159;

    t74 = (((x297==x298)==x299)&x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x301 = UINT16_MAX;
	volatile int32_t x302 = INT32_MIN;
	uint64_t x303 = UINT64_MAX;
	volatile uint8_t x304 = 8U;
	int32_t t75 = -238810800;

    t75 = (((x301==x302)==x303)&x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 1U;
	static volatile uint8_t x306 = 8U;
	int64_t x307 = -15105LL;
	uint64_t x308 = 244771602062LLU;
	volatile uint64_t t76 = 116126053027LLU;

    t76 = (((x305==x306)==x307)&x308);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = 177112679U;
	static int32_t x310 = 120579726;
	int16_t x311 = -1;
	int16_t x312 = INT16_MIN;
	volatile int32_t t77 = 8;

    t77 = (((x309==x310)==x311)&x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = 226374U;
	int16_t x314 = INT16_MAX;
	uint8_t x315 = UINT8_MAX;

    t78 = (((x313==x314)==x315)&x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = INT64_MIN;
	uint32_t x318 = 170936U;
	int64_t x319 = INT64_MIN;
	uint32_t x320 = 1116290238U;
	volatile uint32_t t79 = 4796178U;

    t79 = (((x317==x318)==x319)&x320);

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x321 = UINT32_MAX;
	int32_t x322 = INT32_MAX;
	volatile int8_t x323 = INT8_MIN;
	int8_t x324 = 19;
	volatile int32_t t80 = -14;

    t80 = (((x321==x322)==x323)&x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = 327U;
	volatile int32_t x326 = -44146556;
	int16_t x327 = INT16_MAX;
	int16_t x328 = -755;
	int32_t t81 = -5003070;

    t81 = (((x325==x326)==x327)&x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x329 = -143247205LL;
	uint32_t x330 = UINT32_MAX;
	uint64_t x332 = UINT64_MAX;
	uint64_t t82 = 8637961861488LLU;

    t82 = (((x329==x330)==x331)&x332);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = -1LL;
	static uint8_t x334 = 32U;
	uint16_t x335 = 697U;
	int8_t x336 = 3;
	int32_t t83 = -147;

    t83 = (((x333==x334)==x335)&x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x338 = INT32_MIN;
	int8_t x339 = INT8_MAX;
	int64_t x340 = INT64_MAX;
	int64_t t84 = 255113616LL;

    t84 = (((x337==x338)==x339)&x340);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -1;
	volatile int8_t x342 = -1;
	volatile int32_t x343 = INT32_MIN;
	int64_t x344 = -895538843966158542LL;
	volatile int64_t t85 = 460927834LL;

    t85 = (((x341==x342)==x343)&x344);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x345 = INT32_MAX;
	int16_t x346 = INT16_MIN;
	volatile int8_t x347 = INT8_MAX;
	static uint32_t x348 = 756592840U;
	volatile uint32_t t86 = 2458U;

    t86 = (((x345==x346)==x347)&x348);

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MIN;
	int64_t x350 = INT64_MIN;
	static volatile uint32_t x352 = 5854047U;
	volatile uint32_t t87 = 7111U;

    t87 = (((x349==x350)==x351)&x352);

    if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MAX;
	volatile int32_t x354 = 3;
	int8_t x355 = INT8_MIN;
	int64_t x356 = INT64_MIN;
	volatile int64_t t88 = -788LL;

    t88 = (((x353==x354)==x355)&x356);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x357 = -1LL;
	int32_t x359 = -382558;
	uint32_t x360 = 210299U;
	uint32_t t89 = 894558712U;

    t89 = (((x357==x358)==x359)&x360);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MIN;
	volatile int8_t x362 = -1;
	int16_t x363 = INT16_MIN;
	int8_t x364 = INT8_MIN;
	volatile int32_t t90 = -226938;

    t90 = (((x361==x362)==x363)&x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = UINT16_MAX;
	uint64_t x366 = 2508464081218LLU;
	volatile int32_t x367 = INT32_MIN;
	uint32_t x368 = 435774U;
	uint32_t t91 = 20894U;

    t91 = (((x365==x366)==x367)&x368);

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = -1549;
	uint64_t x370 = 64LLU;
	static int8_t x371 = INT8_MIN;
	int64_t x372 = -1LL;
	volatile int64_t t92 = -995LL;

    t92 = (((x369==x370)==x371)&x372);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x374 = 12;
	int16_t x375 = 274;
	int16_t x376 = -19;
	static int32_t t93 = -208;

    t93 = (((x373==x374)==x375)&x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x377 = 17886U;
	static int8_t x378 = 0;
	int16_t x379 = -892;
	uint32_t x380 = UINT32_MAX;

    t94 = (((x377==x378)==x379)&x380);

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = -6;
	volatile int64_t x382 = INT64_MIN;
	int16_t x383 = INT16_MIN;
	int32_t t95 = -90832946;

    t95 = (((x381==x382)==x383)&x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = INT64_MAX;
	static volatile uint16_t x386 = 13418U;
	int64_t x387 = -5691LL;
	static volatile uint8_t x388 = 19U;
	int32_t t96 = 1001;

    t96 = (((x385==x386)==x387)&x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 347120652548388692LLU;
	uint16_t x390 = UINT16_MAX;
	uint64_t x392 = 2LLU;
	volatile uint64_t t97 = 946627652422LLU;

    t97 = (((x389==x390)==x391)&x392);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint64_t x394 = UINT64_MAX;
	int16_t x395 = INT16_MIN;
	uint8_t x396 = 6U;

    t98 = (((x393==x394)==x395)&x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x398 = 62265276398LL;
	int16_t x400 = -1190;
	volatile int32_t t99 = -300474942;

    t99 = (((x397==x398)==x399)&x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = 8U;
	int32_t x402 = 519411711;
	uint8_t x403 = 0U;
	int32_t t100 = 33922;

    t100 = (((x401==x402)==x403)&x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	int8_t x406 = INT8_MIN;
	volatile int32_t x407 = 328;
	int16_t x408 = -1;
	static volatile int32_t t101 = 3214;

    t101 = (((x405==x406)==x407)&x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x409 = INT8_MAX;
	static uint32_t x410 = 964266488U;
	int64_t x411 = INT64_MAX;
	static uint8_t x412 = 20U;

    t102 = (((x409==x410)==x411)&x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x413 = 14U;
	volatile int8_t x415 = 2;
	static volatile int32_t x416 = -1;
	int32_t t103 = 1;

    t103 = (((x413==x414)==x415)&x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = 44LLU;
	int32_t x418 = -1;
	uint8_t x419 = 116U;
	int16_t x420 = INT16_MIN;
	volatile int32_t t104 = -34056;

    t104 = (((x417==x418)==x419)&x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = INT8_MIN;
	int8_t x422 = -1;
	volatile int16_t x423 = INT16_MAX;
	uint16_t x424 = 30U;
	int32_t t105 = 197576097;

    t105 = (((x421==x422)==x423)&x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = -56022804;
	volatile int8_t x426 = -51;
	int32_t x427 = INT32_MIN;
	int32_t x428 = -1;

    t106 = (((x425==x426)==x427)&x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int8_t x430 = 1;
	int32_t x432 = INT32_MIN;
	int32_t t107 = -123711;

    t107 = (((x429==x430)==x431)&x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x435 = 354057038766LL;
	int64_t x436 = INT64_MAX;
	volatile int64_t t108 = 144523275883899543LL;

    t108 = (((x433==x434)==x435)&x436);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = 119340;
	static volatile int64_t x438 = 16949278437828246LL;
	uint32_t x439 = 178672U;
	volatile int64_t x440 = -2925401096249LL;
	static int64_t t109 = 0LL;

    t109 = (((x437==x438)==x439)&x440);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x441 = INT8_MIN;
	int16_t x442 = INT16_MAX;
	int16_t x443 = INT16_MIN;
	volatile int32_t x444 = INT32_MIN;
	int32_t t110 = 159128;

    t110 = (((x441==x442)==x443)&x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MAX;
	int32_t x447 = -30863;
	uint64_t x448 = UINT64_MAX;

    t111 = (((x445==x446)==x447)&x448);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = 5;
	static int16_t x450 = -4814;
	int16_t x451 = INT16_MIN;
	int32_t t112 = -62642;

    t112 = (((x449==x450)==x451)&x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x453 = UINT32_MAX;
	int32_t x454 = -1;
	uint32_t x456 = UINT32_MAX;

    t113 = (((x453==x454)==x455)&x456);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 2U;
	static int64_t x458 = INT64_MAX;
	int8_t x459 = INT8_MIN;
	static uint64_t x460 = 234390748169179LLU;
	static volatile uint64_t t114 = 1229462198052LLU;

    t114 = (((x457==x458)==x459)&x460);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int32_t x461 = -1;
	static uint32_t x463 = UINT32_MAX;
	int32_t x464 = -1;
	volatile int32_t t115 = -417;

    t115 = (((x461==x462)==x463)&x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x466 = 107LL;
	int8_t x467 = 0;
	uint8_t x468 = 0U;

    t116 = (((x465==x466)==x467)&x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = 3U;
	int32_t x470 = 324282204;
	int32_t x471 = -493085;
	volatile int16_t x472 = INT16_MAX;
	volatile int32_t t117 = 163361159;

    t117 = (((x469==x470)==x471)&x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x474 = 0U;
	static int64_t x475 = -1LL;
	static volatile int16_t x476 = INT16_MIN;
	int32_t t118 = -41986712;

    t118 = (((x473==x474)==x475)&x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x477 = 70U;
	volatile uint32_t x479 = 826467045U;
	int8_t x480 = INT8_MIN;
	volatile int32_t t119 = 1;

    t119 = (((x477==x478)==x479)&x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x481 = 349U;
	int64_t x482 = INT64_MAX;
	int16_t x483 = INT16_MIN;
	int64_t x484 = INT64_MIN;
	int64_t t120 = -3LL;

    t120 = (((x481==x482)==x483)&x484);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int8_t x486 = INT8_MIN;
	int32_t x487 = 26;
	int16_t x488 = -12;
	int32_t t121 = 38123785;

    t121 = (((x485==x486)==x487)&x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MIN;
	int16_t x490 = INT16_MIN;
	int32_t x491 = 27778;
	static volatile uint16_t x492 = 1800U;
	volatile int32_t t122 = 3742270;

    t122 = (((x489==x490)==x491)&x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MAX;
	int64_t x494 = -2973517132002194LL;
	int64_t x496 = INT64_MAX;
	volatile int64_t t123 = 244741772038981LL;

    t123 = (((x493==x494)==x495)&x496);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x498 = INT32_MAX;
	static int64_t x499 = -3384LL;
	int16_t x500 = INT16_MIN;
	volatile int32_t t124 = 114839294;

    t124 = (((x497==x498)==x499)&x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x502 = -17;
	static int8_t x504 = INT8_MIN;

    t125 = (((x501==x502)==x503)&x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x506 = INT32_MIN;
	int32_t x507 = 61500043;
	int16_t x508 = -1379;

    t126 = (((x505==x506)==x507)&x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = -1LL;
	volatile int16_t x511 = -1;
	uint32_t x512 = 138U;
	volatile uint32_t t127 = 3420603U;

    t127 = (((x509==x510)==x511)&x512);

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x513 = -5;
	int16_t x514 = -1543;
	int16_t x515 = INT16_MIN;
	static uint64_t x516 = 2126883171252LLU;
	static uint64_t t128 = 10267695691LLU;

    t128 = (((x513==x514)==x515)&x516);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MIN;
	volatile int32_t x518 = INT32_MIN;
	uint16_t x519 = 349U;
	uint8_t x520 = UINT8_MAX;
	static volatile int32_t t129 = -1;

    t129 = (((x517==x518)==x519)&x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x521 = 5630U;
	int16_t x522 = 1972;
	int16_t x523 = INT16_MAX;
	uint64_t x524 = 29LLU;
	uint64_t t130 = 82148184314LLU;

    t130 = (((x521==x522)==x523)&x524);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint16_t x525 = UINT16_MAX;
	static int16_t x526 = INT16_MAX;
	volatile int8_t x527 = INT8_MIN;
	volatile int32_t t131 = -475561200;

    t131 = (((x525==x526)==x527)&x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x529 = UINT64_MAX;
	volatile uint64_t x531 = UINT64_MAX;
	int64_t x532 = INT64_MAX;
	static int64_t t132 = -96836216240LL;

    t132 = (((x529==x530)==x531)&x532);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = UINT64_MAX;
	volatile int32_t x534 = -344;
	int32_t x535 = 10234;
	int32_t t133 = 1141915;

    t133 = (((x533==x534)==x535)&x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = UINT32_MAX;
	uint64_t x538 = UINT64_MAX;
	int16_t x539 = 6;
	int8_t x540 = -1;
	volatile int32_t t134 = 5238;

    t134 = (((x537==x538)==x539)&x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = 40U;
	static volatile int32_t x543 = INT32_MAX;
	int64_t t135 = -995550LL;

    t135 = (((x541==x542)==x543)&x544);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x545 = 6155917U;
	static uint8_t x546 = UINT8_MAX;
	uint16_t x547 = 40U;
	static volatile int32_t t136 = -73182145;

    t136 = (((x545==x546)==x547)&x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x549 = 13235401U;
	uint8_t x552 = 49U;
	volatile int32_t t137 = -32145747;

    t137 = (((x549==x550)==x551)&x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x553 = 27492U;
	uint64_t x554 = 4441LLU;
	static int8_t x556 = INT8_MAX;

    t138 = (((x553==x554)==x555)&x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x558 = 949334282657LLU;
	uint8_t x559 = 17U;
	static int16_t x560 = INT16_MIN;
	int32_t t139 = -1;

    t139 = (((x557==x558)==x559)&x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x562 = UINT16_MAX;
	static volatile uint64_t x563 = UINT64_MAX;
	uint64_t x564 = 6824666LLU;
	static uint64_t t140 = 18615200797776173LLU;

    t140 = (((x561==x562)==x563)&x564);

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x566 = 43U;
	uint32_t x568 = 143420039U;
	uint32_t t141 = 3620U;

    t141 = (((x565==x566)==x567)&x568);

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x569 = INT32_MIN;
	int32_t x570 = -2694701;
	static uint32_t x571 = UINT32_MAX;
	volatile uint8_t x572 = UINT8_MAX;
	volatile int32_t t142 = 1;

    t142 = (((x569==x570)==x571)&x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MIN;
	volatile uint8_t x574 = UINT8_MAX;
	int16_t x576 = -11116;
	int32_t t143 = 1;

    t143 = (((x573==x574)==x575)&x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x580 = INT16_MIN;
	int32_t t144 = -437;

    t144 = (((x577==x578)==x579)&x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = -6;
	int32_t x582 = 0;
	int64_t x584 = -1LL;

    t145 = (((x581==x582)==x583)&x584);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -1;
	uint8_t x587 = 7U;
	volatile int16_t x588 = -1;
	volatile int32_t t146 = 0;

    t146 = (((x585==x586)==x587)&x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = -1LL;
	int64_t x590 = INT64_MIN;
	uint8_t x591 = UINT8_MAX;
	uint64_t x592 = 32LLU;

    t147 = (((x589==x590)==x591)&x592);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x593 = INT64_MIN;
	uint32_t x594 = 48U;
	uint8_t x595 = 74U;
	int32_t t148 = 1099359;

    t148 = (((x593==x594)==x595)&x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MAX;
	static int32_t x598 = INT32_MIN;
	volatile int64_t x599 = INT64_MIN;
	int32_t t149 = 977171883;

    t149 = (((x597==x598)==x599)&x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int64_t x601 = 12850LL;
	int8_t x603 = INT8_MIN;
	int8_t x604 = INT8_MAX;
	int32_t t150 = 0;

    t150 = (((x601==x602)==x603)&x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = UINT16_MAX;
	int16_t x607 = -1;
	volatile uint8_t x608 = 42U;
	volatile int32_t t151 = 0;

    t151 = (((x605==x606)==x607)&x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x609 = 2U;
	uint64_t x610 = UINT64_MAX;
	volatile int32_t t152 = 32200247;

    t152 = (((x609==x610)==x611)&x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MAX;
	int32_t x614 = -1;
	uint8_t x615 = 18U;
	static int8_t x616 = INT8_MAX;

    t153 = (((x613==x614)==x615)&x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = -4546964LL;
	uint16_t x618 = UINT16_MAX;
	static int64_t x620 = INT64_MIN;
	volatile int64_t t154 = -3287LL;

    t154 = (((x617==x618)==x619)&x620);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x621 = INT32_MIN;
	static uint16_t x622 = UINT16_MAX;
	int8_t x623 = INT8_MIN;
	uint8_t x624 = 1U;
	volatile int32_t t155 = -234;

    t155 = (((x621==x622)==x623)&x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x626 = INT64_MIN;
	int16_t x627 = INT16_MIN;
	static int32_t t156 = 1481514;

    t156 = (((x625==x626)==x627)&x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = INT64_MIN;
	volatile uint64_t x630 = 45482190672496LLU;
	volatile int16_t x631 = 13;
	volatile int32_t t157 = -1041398684;

    t157 = (((x629==x630)==x631)&x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x633 = -11LL;
	int16_t x634 = INT16_MIN;
	uint64_t x636 = 2447558007LLU;
	uint64_t t158 = 1078027911LLU;

    t158 = (((x633==x634)==x635)&x636);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint16_t x637 = UINT16_MAX;
	int16_t x639 = -1;
	uint8_t x640 = 61U;
	int32_t t159 = 2044;

    t159 = (((x637==x638)==x639)&x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = 354U;
	static volatile int8_t x643 = 5;
	int32_t x644 = INT32_MAX;
	int32_t t160 = 129416;

    t160 = (((x641==x642)==x643)&x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x645 = INT8_MIN;
	static uint8_t x646 = UINT8_MAX;
	uint32_t x647 = 733516778U;
	static int64_t x648 = -1717LL;

    t161 = (((x645==x646)==x647)&x648);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = 63U;
	int64_t x650 = INT64_MAX;
	uint32_t x651 = UINT32_MAX;
	volatile int32_t t162 = -48309;

    t162 = (((x649==x650)==x651)&x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = -1LL;
	static volatile int64_t x654 = -3122853885LL;
	volatile uint32_t x655 = UINT32_MAX;
	int32_t x656 = 8;
	volatile int32_t t163 = -11858;

    t163 = (((x653==x654)==x655)&x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -2205;
	volatile uint16_t x660 = 7836U;
	static volatile int32_t t164 = -302190;

    t164 = (((x657==x658)==x659)&x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	volatile int8_t x662 = INT8_MIN;
	uint8_t x664 = 11U;
	volatile int32_t t165 = 2846;

    t165 = (((x661==x662)==x663)&x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x666 = 3434323U;
	int16_t x667 = INT16_MIN;
	int64_t x668 = 214834018307916LL;

    t166 = (((x665==x666)==x667)&x668);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x669 = UINT32_MAX;
	int8_t x670 = INT8_MAX;
	uint64_t x671 = UINT64_MAX;
	int32_t x672 = INT32_MIN;
	volatile int32_t t167 = -11413;

    t167 = (((x669==x670)==x671)&x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x673 = 4;
	uint16_t x674 = UINT16_MAX;
	int16_t x675 = INT16_MAX;
	static volatile uint16_t x676 = UINT16_MAX;
	int32_t t168 = -245608769;

    t168 = (((x673==x674)==x675)&x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	uint16_t x678 = UINT16_MAX;
	int8_t x679 = 7;
	static uint8_t x680 = 0U;

    t169 = (((x677==x678)==x679)&x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x681 = 42U;
	int8_t x682 = -1;
	int8_t x683 = INT8_MIN;
	volatile int16_t x684 = 3;
	static volatile int32_t t170 = -3476615;

    t170 = (((x681==x682)==x683)&x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MIN;
	int16_t x686 = -1;
	uint64_t x687 = UINT64_MAX;
	uint8_t x688 = UINT8_MAX;
	volatile int32_t t171 = -1;

    t171 = (((x685==x686)==x687)&x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = 42U;
	uint32_t x691 = 15U;
	uint64_t x692 = 15813458LLU;
	uint64_t t172 = 332395207636LLU;

    t172 = (((x689==x690)==x691)&x692);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = 14945678383LLU;
	uint32_t x694 = UINT32_MAX;
	int64_t x695 = -35156681714978LL;
	int16_t x696 = INT16_MIN;
	int32_t t173 = -394;

    t173 = (((x693==x694)==x695)&x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x698 = UINT16_MAX;
	uint8_t x699 = 12U;
	int16_t x700 = INT16_MAX;
	static int32_t t174 = 52562490;

    t174 = (((x697==x698)==x699)&x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MIN;
	int16_t x702 = 1;
	uint32_t x704 = 68012240U;
	volatile uint32_t t175 = 1591368381U;

    t175 = (((x701==x702)==x703)&x704);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = 31;
	uint64_t x706 = UINT64_MAX;
	static int64_t x707 = 120730LL;
	int16_t x708 = INT16_MIN;

    t176 = (((x705==x706)==x707)&x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MAX;
	int32_t x710 = -217;
	volatile int16_t x711 = INT16_MIN;
	int64_t t177 = -5877860182091LL;

    t177 = (((x709==x710)==x711)&x712);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x713 = INT16_MIN;
	int32_t x714 = 47;
	int64_t x715 = INT64_MIN;
	uint16_t x716 = UINT16_MAX;
	volatile int32_t t178 = 0;

    t178 = (((x713==x714)==x715)&x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x718 = 13U;
	volatile uint16_t x719 = UINT16_MAX;
	int32_t x720 = INT32_MAX;
	volatile int32_t t179 = 881;

    t179 = (((x717==x718)==x719)&x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x723 = 6U;
	int64_t x724 = INT64_MAX;
	int64_t t180 = 8208670480LL;

    t180 = (((x721==x722)==x723)&x724);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = 22;
	static volatile uint64_t x727 = UINT64_MAX;
	int64_t x728 = -57311791803LL;
	int64_t t181 = 5343LL;

    t181 = (((x725==x726)==x727)&x728);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x730 = UINT8_MAX;
	static uint32_t x731 = UINT32_MAX;
	int16_t x732 = INT16_MAX;
	volatile int32_t t182 = 28504274;

    t182 = (((x729==x730)==x731)&x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = UINT8_MAX;
	static uint64_t x734 = 14693591103996LLU;
	volatile int32_t x736 = -1;
	int32_t t183 = 3050;

    t183 = (((x733==x734)==x735)&x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MAX;
	int16_t x738 = 1360;
	uint32_t x739 = UINT32_MAX;
	int16_t x740 = -2017;

    t184 = (((x737==x738)==x739)&x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = -1LL;
	int32_t x743 = INT32_MIN;
	int16_t x744 = 1;
	volatile int32_t t185 = -1338;

    t185 = (((x741==x742)==x743)&x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	static uint8_t x746 = 0U;
	volatile int16_t x747 = 13;
	static int32_t x748 = -91472717;

    t186 = (((x745==x746)==x747)&x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x751 = UINT32_MAX;
	static int32_t x752 = 613237120;
	volatile int32_t t187 = -121;

    t187 = (((x749==x750)==x751)&x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = -1;
	int16_t x754 = INT16_MIN;
	int16_t x755 = INT16_MIN;
	uint32_t x756 = 3794U;
	volatile uint32_t t188 = 3935U;

    t188 = (((x753==x754)==x755)&x756);

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x757 = INT64_MIN;
	static volatile int8_t x759 = INT8_MIN;
	static uint64_t t189 = 14885LLU;

    t189 = (((x757==x758)==x759)&x760);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MIN;
	static int32_t x762 = -1;
	int16_t x764 = -1;
	volatile int32_t t190 = -1;

    t190 = (((x761==x762)==x763)&x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x767 = -247;
	int64_t x768 = -1LL;
	int64_t t191 = -1LL;

    t191 = (((x765==x766)==x767)&x768);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x769 = UINT32_MAX;
	int16_t x770 = -1;
	static int8_t x772 = INT8_MAX;

    t192 = (((x769==x770)==x771)&x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = -1;
	int8_t x774 = 4;
	uint8_t x775 = UINT8_MAX;
	int64_t x776 = 571812LL;
	static volatile int64_t t193 = 5272040LL;

    t193 = (((x773==x774)==x775)&x776);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x779 = 487070U;
	uint8_t x780 = 0U;

    t194 = (((x777==x778)==x779)&x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x781 = 108604U;
	int32_t x782 = INT32_MIN;
	uint16_t x783 = 1012U;

    t195 = (((x781==x782)==x783)&x784);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x786 = 6212U;
	uint8_t x787 = 37U;
	volatile int64_t t196 = 209605410LL;

    t196 = (((x785==x786)==x787)&x788);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = -8897975277573LL;
	volatile int64_t x791 = -28154327LL;
	uint32_t x792 = 3329U;
	volatile uint32_t t197 = 327U;

    t197 = (((x789==x790)==x791)&x792);

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = 1U;
	static volatile uint64_t x794 = UINT64_MAX;
	int32_t x795 = INT32_MIN;
	static int8_t x796 = -1;
	int32_t t198 = 215150254;

    t198 = (((x793==x794)==x795)&x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = -1;
	uint8_t x798 = UINT8_MAX;
	uint32_t x799 = 813079U;
	volatile int64_t t199 = 129466623910LL;

    t199 = (((x797==x798)==x799)&x800);

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


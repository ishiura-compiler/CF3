
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

static uint64_t x9 = 11LLU;
static int32_t x18 = INT32_MAX;
uint8_t x22 = UINT8_MAX;
int64_t x31 = -4755LL;
static volatile int64_t x45 = INT64_MIN;
uint8_t x55 = 95U;
int64_t x56 = 48050218325841407LL;
static int64_t t10 = 106835369518406464LL;
volatile uint64_t x60 = UINT64_MAX;
uint64_t x63 = 196389226LLU;
int64_t x66 = 14LL;
uint16_t x67 = 27201U;
static volatile uint32_t x68 = 5U;
static int16_t x69 = INT16_MIN;
uint64_t t14 = 237061793LLU;
int8_t x76 = 25;
static int16_t x78 = -3;
volatile int64_t x79 = -1LL;
static int8_t x82 = INT8_MIN;
int64_t t21 = 66277609373250852LL;
int16_t x107 = 4931;
int32_t x112 = -1;
uint32_t x119 = UINT32_MAX;
volatile int64_t t26 = 14137532080250504LL;
int16_t x129 = -8;
uint8_t x137 = 3U;
int8_t x141 = INT8_MIN;
int8_t x143 = INT8_MIN;
int32_t x144 = INT32_MIN;
uint32_t x145 = 2631U;
int64_t x153 = INT64_MAX;
uint32_t x165 = UINT32_MAX;
volatile int64_t t38 = -125093226013601783LL;
static int8_t x177 = -1;
uint32_t x180 = UINT32_MAX;
int8_t x186 = INT8_MAX;
uint8_t x188 = 23U;
volatile int8_t x204 = INT8_MIN;
uint64_t t46 = 70699498081492274LLU;
volatile int64_t x214 = INT64_MAX;
volatile int32_t x223 = -1;
uint64_t t49 = 261217833533314914LLU;
uint32_t x230 = 59663398U;
static volatile int64_t t51 = -2029856737LL;
volatile int32_t x242 = -1;
int64_t x247 = -56LL;
int64_t x249 = -36959206550988LL;
int8_t x258 = -1;
static volatile uint64_t t59 = 68628554LLU;
int16_t x265 = INT16_MAX;
int8_t x267 = INT8_MAX;
uint32_t x281 = 1089346692U;
int16_t x282 = INT16_MIN;
volatile int32_t t68 = 25;
int32_t t69 = 21037205;
int32_t x307 = INT32_MIN;
int16_t x310 = 602;
static int8_t x312 = INT8_MAX;
int16_t x322 = 5228;
int16_t x325 = -1;
static int32_t x333 = 267339;
int64_t t74 = -515963233202LL;
static uint32_t x341 = 449948006U;
volatile uint32_t t76 = 3581581U;
volatile int8_t x346 = INT8_MIN;
int64_t x353 = 1004662066822070LL;
int16_t x354 = 127;
int32_t x356 = -1;
int8_t x358 = -1;
int32_t x359 = -1;
static uint64_t x360 = 1041388760LLU;
uint8_t x363 = 27U;
volatile int32_t t82 = 10446;
volatile int64_t x381 = -16LL;
uint32_t x388 = 1234826U;
volatile int8_t x392 = INT8_MIN;
int32_t t87 = 951463444;
volatile int64_t t88 = 185055257314733LL;
volatile int64_t t90 = 2287595LL;
int8_t x414 = INT8_MIN;
volatile uint64_t x421 = UINT64_MAX;
int32_t x423 = -12010;
int8_t x425 = -1;
static int64_t t93 = 172966210211470LL;
int8_t x431 = -1;
static int8_t x436 = -1;
int32_t x465 = -524124;
volatile uint32_t x468 = 31208836U;
static uint16_t x471 = 228U;
volatile int8_t x476 = -1;
static uint64_t x479 = 29174909442503060LLU;
uint16_t x480 = 8U;
static int32_t x484 = INT32_MIN;
uint64_t t103 = 159997645602852148LLU;
volatile int8_t x492 = -48;
int64_t x499 = INT64_MIN;
uint32_t x500 = 338520U;
volatile int64_t t106 = 3604448LL;
volatile int8_t x509 = INT8_MAX;
int8_t x511 = 12;
volatile int64_t t109 = 45LL;
uint64_t t111 = 661763993LLU;
static int32_t x556 = INT32_MIN;
volatile int64_t x561 = INT64_MIN;
int16_t x567 = -1;
uint8_t x570 = 27U;
static uint8_t x571 = 43U;
static uint32_t x572 = UINT32_MAX;
uint32_t x579 = 89U;
volatile uint8_t x580 = 8U;
volatile uint32_t t118 = 0U;
volatile uint64_t x591 = 941LLU;
volatile int16_t x593 = INT16_MIN;
volatile int32_t x600 = INT32_MIN;
static volatile uint64_t x603 = UINT64_MAX;
static volatile int32_t x604 = INT32_MIN;
volatile uint64_t t123 = 441251161700LLU;
int32_t x605 = INT32_MIN;
int64_t t124 = -967306118111LL;
static uint64_t t125 = UINT64_MAX;
uint64_t x617 = UINT64_MAX;
uint16_t x646 = 21U;
int32_t t133 = 1524;
uint16_t x650 = UINT16_MAX;
int8_t x659 = INT8_MIN;
int8_t x676 = -1;
uint8_t x677 = UINT8_MAX;
static volatile uint8_t x680 = UINT8_MAX;
static int64_t t141 = 3050LL;
int8_t x695 = -1;
volatile uint64_t t145 = 62861238LLU;
volatile uint8_t x713 = 0U;
int16_t x717 = INT16_MIN;
uint64_t t148 = 5964203003887588152LLU;
volatile uint8_t x728 = 1U;
uint64_t x729 = UINT64_MAX;
uint64_t x731 = 8241096394358069513LLU;
volatile int32_t x736 = 2103335;
uint16_t x741 = UINT16_MAX;
static uint16_t x745 = UINT16_MAX;
volatile int64_t t155 = 10625773010572119LL;
int8_t x765 = -1;
uint64_t x767 = 5715LLU;
int16_t x768 = -1;
int32_t x780 = -1;
int64_t x793 = INT64_MIN;
uint64_t t162 = 360639LLU;
static volatile int64_t t163 = 22117814449154LL;
static int8_t x801 = INT8_MAX;
int32_t x809 = -472786733;
int8_t x811 = -1;
static volatile uint32_t t167 = 223240401U;
uint64_t t169 = 197006310LLU;
static int32_t x831 = INT32_MIN;
int64_t x840 = -1LL;
int8_t x850 = 0;
int64_t t174 = -1LL;
static volatile uint64_t t175 = 11233523378LLU;
volatile int32_t x862 = INT32_MAX;
int64_t x867 = -7LL;
volatile int64_t t177 = -281339997948865218LL;
int64_t x869 = 313LL;
uint16_t x871 = UINT16_MAX;
static volatile int32_t t180 = 8216;
uint32_t x890 = 1023U;
static volatile uint64_t x892 = UINT64_MAX;
int32_t x907 = INT32_MIN;
int32_t x916 = INT32_MAX;
volatile uint32_t x925 = 5457034U;
int32_t x927 = INT32_MAX;
int32_t x929 = INT32_MIN;
static volatile int64_t t190 = 36269LL;
volatile int16_t x942 = INT16_MIN;
volatile int32_t x944 = INT32_MAX;
volatile int8_t x947 = INT8_MIN;
uint64_t x951 = 27329585318LLU;
static volatile uint16_t x955 = UINT16_MAX;
uint16_t x956 = UINT16_MAX;
int32_t t194 = -166281;
int64_t x960 = -1LL;
int64_t x964 = INT64_MIN;
uint64_t t197 = 90265076LLU;
int32_t x970 = -1;
volatile uint8_t x976 = 90U;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	volatile int64_t x2 = INT64_MIN;
	int64_t x3 = -18LL;
	uint8_t x4 = UINT8_MAX;
	static int64_t t0 = 143350535505933596LL;

    t0 = (x1*(x2|(x3%x4)));

    if (t0 != 589824LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x5 = UINT32_MAX;
	int32_t x6 = INT32_MIN;
	uint8_t x7 = UINT8_MAX;
	int32_t x8 = INT32_MIN;
	volatile uint32_t t1 = 28U;

    t1 = (x5*(x6|(x7%x8)));

    if (t1 != 2147483393U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x10 = 16U;
	volatile int8_t x11 = INT8_MIN;
	int32_t x12 = INT32_MIN;
	uint64_t t2 = 753161LLU;

    t2 = (x9*(x10|(x11%x12)));

    if (t2 != 18446744073709550384LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = -1;
	int8_t x19 = 0;
	int32_t x20 = -1;
	int32_t t3 = -54;

    t3 = (x17*(x18|(x19%x20)));

    if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = INT16_MIN;
	int64_t x23 = INT64_MAX;
	static uint8_t x24 = 47U;
	volatile int64_t t4 = 23397420364719325LL;

    t4 = (x21*(x22|(x23%x24)));

    if (t4 != -8355840LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x29 = 0;
	static uint16_t x30 = 28U;
	int8_t x32 = INT8_MIN;
	int64_t t5 = 1277539205174624LL;

    t5 = (x29*(x30|(x31%x32)));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x33 = -3;
	volatile int16_t x34 = -1;
	uint64_t x35 = 539025369918LLU;
	int16_t x36 = INT16_MIN;
	uint64_t t6 = 30780515454LLU;

    t6 = (x33*(x34|(x35%x36)));

    if (t6 != 3LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x37 = 4U;
	int64_t x38 = -1LL;
	uint64_t x39 = UINT64_MAX;
	uint8_t x40 = 6U;
	volatile uint64_t t7 = 3663628476LLU;

    t7 = (x37*(x38|(x39%x40)));

    if (t7 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x46 = -1;
	uint64_t x47 = UINT64_MAX;
	int16_t x48 = INT16_MIN;
	volatile uint64_t t8 = 33444094190LLU;

    t8 = (x45*(x46|(x47%x48)));

    if (t8 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x49 = -3309;
	uint64_t x50 = UINT64_MAX;
	int64_t x51 = INT64_MIN;
	int8_t x52 = -22;
	volatile uint64_t t9 = 32639LLU;

    t9 = (x49*(x50|(x51%x52)));

    if (t9 != 3309LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x53 = UINT32_MAX;
	uint32_t x54 = 699064U;

    t10 = (x53*(x54|(x55%x56)));

    if (t10 != 3002761959789825LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int16_t x57 = 11;
	static uint8_t x58 = 1U;
	uint8_t x59 = 2U;
	volatile uint64_t t11 = 80899LLU;

    t11 = (x57*(x58|(x59%x60)));

    if (t11 != 33LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x61 = UINT64_MAX;
	static volatile uint16_t x62 = 14933U;
	volatile uint16_t x64 = 382U;
	static volatile uint64_t t12 = 428138LLU;

    t12 = (x61*(x62|(x63%x64)));

    if (t12 != 18446744073709536395LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x65 = INT32_MIN;
	int64_t t13 = -42850852265189LL;

    t13 = (x65*(x66|(x67%x68)));

    if (t13 != -32212254720LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x70 = -4089;
	uint64_t x71 = 4330472LLU;
	uint8_t x72 = 6U;

    t14 = (x69*(x70|(x71%x72)));

    if (t14 != 133988352LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x73 = UINT64_MAX;
	int16_t x74 = INT16_MIN;
	int64_t x75 = INT64_MIN;
	volatile uint64_t t15 = 1007321LLU;

    t15 = (x73*(x74|(x75%x76)));

    if (t15 != 8LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x77 = -1;
	static int16_t x80 = -15;
	volatile int64_t t16 = -34946LL;

    t16 = (x77*(x78|(x79%x80)));

    if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint64_t x81 = 0LLU;
	volatile int32_t x83 = -113077;
	static volatile int64_t x84 = -3711038775LL;
	volatile uint64_t t17 = 1133LLU;

    t17 = (x81*(x82|(x83%x84)));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x85 = 1;
	static uint8_t x86 = UINT8_MAX;
	int16_t x87 = -1;
	int32_t x88 = INT32_MAX;
	volatile int32_t t18 = -102344;

    t18 = (x85*(x86|(x87%x88)));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x89 = -1LL;
	int8_t x90 = -1;
	uint16_t x91 = UINT16_MAX;
	int64_t x92 = -1LL;
	static int64_t t19 = 398314550603LL;

    t19 = (x89*(x90|(x91%x92)));

    if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x93 = INT64_MIN;
	uint64_t x94 = UINT64_MAX;
	int8_t x95 = -1;
	uint64_t x96 = 6767150457562539LLU;
	static uint64_t t20 = 375952299444LLU;

    t20 = (x93*(x94|(x95%x96)));

    if (t20 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x97 = INT8_MIN;
	volatile int64_t x98 = -1LL;
	static int64_t x99 = 677LL;
	uint16_t x100 = UINT16_MAX;

    t21 = (x97*(x98|(x99%x100)));

    if (t21 != 128LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int16_t x101 = INT16_MAX;
	int16_t x102 = -5;
	volatile uint8_t x103 = 0U;
	int32_t x104 = INT32_MIN;
	static volatile int32_t t22 = 1;

    t22 = (x101*(x102|(x103%x104)));

    if (t22 != -163835) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = INT16_MIN;
	static int8_t x106 = INT8_MIN;
	volatile uint16_t x108 = 1U;
	volatile int32_t t23 = -4;

    t23 = (x105*(x106|(x107%x108)));

    if (t23 != 4194304) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x109 = UINT64_MAX;
	static int16_t x110 = INT16_MIN;
	volatile int32_t x111 = -7424;
	uint64_t t24 = 480728970LLU;

    t24 = (x109*(x110|(x111%x112)));

    if (t24 != 32768LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x117 = 16U;
	int32_t x118 = INT32_MIN;
	volatile int32_t x120 = 1;
	static uint32_t t25 = 2064521609U;

    t25 = (x117*(x118|(x119%x120)));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x121 = 22;
	int16_t x122 = 185;
	int64_t x123 = INT64_MIN;
	int32_t x124 = INT32_MAX;

    t26 = (x121*(x122|(x123%x124)));

    if (t26 != -22LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x130 = 30U;
	uint64_t x131 = 277LLU;
	int16_t x132 = INT16_MIN;
	uint64_t t27 = 14648361129317LLU;

    t27 = (x129*(x130|(x131%x132)));

    if (t27 != 18446744073709549320LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x133 = 7U;
	uint64_t x134 = UINT64_MAX;
	int16_t x135 = -575;
	int8_t x136 = 46;
	volatile uint64_t t28 = 462064863338LLU;

    t28 = (x133*(x134|(x135%x136)));

    if (t28 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x138 = UINT8_MAX;
	uint32_t x139 = 389391U;
	uint16_t x140 = UINT16_MAX;
	volatile uint32_t t29 = 193135394U;

    t29 = (x137*(x138|(x139%x140)));

    if (t29 != 185853U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x142 = -883893LL;
	volatile int64_t t30 = -3138016832621LL;

    t30 = (x141*(x142|(x143%x144)));

    if (t30 != 6784LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x146 = 2U;
	int8_t x147 = INT8_MIN;
	uint32_t x148 = 1267636U;
	volatile uint32_t t31 = 64U;

    t31 = (x145*(x146|(x147%x148)));

    if (t31 != 569353662U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x149 = 151395599401LL;
	int32_t x150 = INT32_MIN;
	uint64_t x151 = UINT64_MAX;
	int32_t x152 = -9228940;
	volatile uint64_t t32 = 2440377143451011786LLU;

    t32 = (x149*(x150|(x151%x152)));

    if (t32 != 8319039985706099779LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x154 = INT16_MAX;
	int8_t x155 = -1;
	uint16_t x156 = UINT16_MAX;
	int64_t t33 = -662852110540LL;

    t33 = (x153*(x154|(x155%x156)));

    if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x157 = 4019585330LLU;
	uint32_t x158 = 1021324634U;
	volatile int16_t x159 = -388;
	static uint8_t x160 = 29U;
	volatile uint64_t t34 = 905987231014LLU;

    t34 = (x157*(x158|(x159%x160)));

    if (t34 != 17263987531811782350LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x161 = -394432777LL;
	static uint16_t x162 = UINT16_MAX;
	int16_t x163 = INT16_MIN;
	int16_t x164 = -1;
	static volatile int64_t t35 = 1573389LL;

    t35 = (x161*(x162|(x163%x164)));

    if (t35 != -25849152040695LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x166 = 610U;
	uint16_t x167 = 0U;
	uint64_t x168 = 15901LLU;
	static uint64_t t36 = 345292LLU;

    t36 = (x165*(x166|(x167%x168)));

    if (t36 != 2619930049950LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x169 = INT32_MIN;
	int16_t x170 = -16;
	volatile uint64_t x171 = 51101582LLU;
	int64_t x172 = 304184150616582LL;
	volatile uint64_t t37 = 34045833267LLU;

    t37 = (x169*(x170|(x171%x172)));

    if (t37 != 4294967296LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x173 = -1;
	static uint16_t x174 = 2776U;
	static volatile int64_t x175 = 491356275LL;
	int32_t x176 = INT32_MIN;

    t38 = (x173*(x174|(x175%x176)));

    if (t38 != -491358971LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x178 = UINT64_MAX;
	int64_t x179 = 322653LL;
	uint64_t t39 = 25405LLU;

    t39 = (x177*(x178|(x179%x180)));

    if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x181 = 141U;
	int8_t x182 = 0;
	int64_t x183 = -1172977579338825801LL;
	static int32_t x184 = 125408695;
	volatile int64_t t40 = 4280110783LL;

    t40 = (x181*(x182|(x183%x184)));

    if (t40 != -8123980221LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x185 = UINT64_MAX;
	int16_t x187 = -1;
	uint64_t t41 = 11367LLU;

    t41 = (x185*(x186|(x187%x188)));

    if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x193 = INT8_MIN;
	int8_t x194 = INT8_MIN;
	uint32_t x195 = 956054U;
	int8_t x196 = -1;
	uint32_t t42 = 2672U;

    t42 = (x193*(x194|(x195%x196)));

    if (t42 != 13568U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x197 = INT16_MIN;
	uint64_t x198 = 15073LLU;
	int8_t x199 = INT8_MAX;
	uint8_t x200 = UINT8_MAX;
	volatile uint64_t t43 = 4040427625250580LLU;

    t43 = (x197*(x198|(x199%x200)));

    if (t43 != 18446744073214656512LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x201 = INT64_MAX;
	static int32_t x202 = -1;
	int32_t x203 = INT32_MIN;
	volatile int64_t t44 = 4428173393248189LL;

    t44 = (x201*(x202|(x203%x204)));

    if (t44 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x205 = INT8_MAX;
	uint16_t x206 = UINT16_MAX;
	int32_t x207 = -1;
	int64_t x208 = 6689165327LL;
	static volatile int64_t t45 = -127864808LL;

    t45 = (x205*(x206|(x207%x208)));

    if (t45 != -127LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x209 = -493;
	int32_t x210 = INT32_MIN;
	volatile uint64_t x211 = 203493045LLU;
	volatile int32_t x212 = INT32_MIN;

    t46 = (x209*(x210|(x211%x212)));

    if (t46 != 958387367279LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x213 = -1;
	volatile int8_t x215 = INT8_MIN;
	int8_t x216 = INT8_MIN;
	static int64_t t47 = 508459823994328LL;

    t47 = (x213*(x214|(x215%x216)));

    if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x217 = -1LL;
	int32_t x218 = INT32_MIN;
	static volatile int16_t x219 = 0;
	uint8_t x220 = 93U;
	volatile int64_t t48 = -74963474LL;

    t48 = (x217*(x218|(x219%x220)));

    if (t48 != 2147483648LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x221 = INT8_MIN;
	uint64_t x222 = UINT64_MAX;
	int32_t x224 = 226949;

    t49 = (x221*(x222|(x223%x224)));

    if (t49 != 128LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x225 = -162781;
	int8_t x226 = -1;
	int16_t x227 = INT16_MIN;
	int32_t x228 = -1;
	int32_t t50 = -7672659;

    t50 = (x225*(x226|(x227%x228)));

    if (t50 != 162781) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x229 = INT16_MAX;
	int64_t x231 = -36557225002214LL;
	static int32_t x232 = 6976519;

    t51 = (x229*(x230|(x231%x232)));

    if (t51 != -2370561382LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x233 = 0U;
	uint32_t x234 = UINT32_MAX;
	static uint64_t x235 = 2256LLU;
	volatile uint64_t x236 = UINT64_MAX;
	volatile uint64_t t52 = 8923843526490019LLU;

    t52 = (x233*(x234|(x235%x236)));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x237 = INT16_MIN;
	int32_t x238 = -1;
	uint16_t x239 = 120U;
	int32_t x240 = INT32_MIN;
	volatile int32_t t53 = -3667071;

    t53 = (x237*(x238|(x239%x240)));

    if (t53 != 32768) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x241 = -58093905LL;
	int8_t x243 = 47;
	int64_t x244 = -1LL;
	static volatile int64_t t54 = -14LL;

    t54 = (x241*(x242|(x243%x244)));

    if (t54 != 58093905LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x245 = 2893620U;
	int64_t x246 = 19LL;
	int8_t x248 = INT8_MIN;
	int64_t t55 = -120LL;

    t55 = (x245*(x246|(x247%x248)));

    if (t55 != -107063940LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x250 = 72928726LLU;
	uint8_t x251 = 6U;
	int16_t x252 = -1;
	uint64_t t56 = 11661465LLU;

    t56 = (x249*(x250|(x251%x252)));

    if (t56 != 16283531100895206264LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x253 = INT16_MIN;
	uint32_t x254 = 27155368U;
	int64_t x255 = INT64_MAX;
	uint8_t x256 = UINT8_MAX;
	int64_t t57 = 473LL;

    t57 = (x253*(x254|(x255%x256)));

    if (t57 != -889829949440LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x257 = -106;
	static int8_t x259 = -3;
	int8_t x260 = 14;
	int32_t t58 = -158;

    t58 = (x257*(x258|(x259%x260)));

    if (t58 != 106) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x261 = 7824LL;
	int8_t x262 = -4;
	static uint64_t x263 = UINT64_MAX;
	int64_t x264 = -236299682LL;

    t59 = (x261*(x262|(x263%x264)));

    if (t59 != 18446744073709528144LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x266 = INT8_MAX;
	static int64_t x268 = INT64_MAX;
	volatile int64_t t60 = -4307587LL;

    t60 = (x265*(x266|(x267%x268)));

    if (t60 != 4161409LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x269 = 17U;
	uint32_t x270 = 18368431U;
	static int32_t x271 = -1;
	int32_t x272 = -1;
	volatile uint32_t t61 = 0U;

    t61 = (x269*(x270|(x271%x272)));

    if (t61 != 312263327U) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x273 = INT8_MAX;
	int16_t x274 = -1;
	static int32_t x275 = -1;
	static volatile int64_t x276 = -1LL;
	volatile int64_t t62 = 12165LL;

    t62 = (x273*(x274|(x275%x276)));

    if (t62 != -127LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x277 = -228954671571LL;
	volatile int8_t x278 = -38;
	volatile int16_t x279 = INT16_MAX;
	int8_t x280 = -13;
	volatile int64_t t63 = -164574250661LL;

    t63 = (x277*(x278|(x279%x280)));

    if (t63 != 7555504161843LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x283 = INT16_MIN;
	uint16_t x284 = UINT16_MAX;
	volatile uint32_t t64 = 25122U;

    t64 = (x281*(x282|(x283%x284)));

    if (t64 != 4055760896U) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint64_t x285 = UINT64_MAX;
	uint32_t x286 = 2U;
	static int32_t x287 = -1;
	volatile uint16_t x288 = 44U;
	static uint64_t t65 = 48670568757410435LLU;

    t65 = (x285*(x286|(x287%x288)));

    if (t65 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x289 = 205U;
	static int8_t x290 = 2;
	volatile int16_t x291 = -1;
	volatile uint64_t x292 = 519763870LLU;
	uint64_t t66 = 54731216LLU;

    t66 = (x289*(x290|(x291%x292)));

    if (t66 != 96775208335LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x293 = INT16_MAX;
	volatile int16_t x294 = INT16_MIN;
	int32_t x295 = INT32_MIN;
	int64_t x296 = INT64_MAX;
	volatile int64_t t67 = -300537824LL;

    t67 = (x293*(x294|(x295%x296)));

    if (t67 != -1073709056LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x297 = INT16_MIN;
	int8_t x298 = INT8_MAX;
	uint16_t x299 = 2U;
	static uint8_t x300 = 5U;

    t68 = (x297*(x298|(x299%x300)));

    if (t68 != -4161536) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x301 = 1U;
	volatile int16_t x302 = INT16_MIN;
	int8_t x303 = INT8_MIN;
	int8_t x304 = INT8_MAX;

    t69 = (x301*(x302|(x303%x304)));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x305 = 250493642177893845LLU;
	volatile int16_t x306 = -36;
	uint8_t x308 = 2U;
	uint64_t t70 = 765451398LLU;

    t70 = (x305*(x306|(x307%x308)));

    if (t70 != 9428972955305373196LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x309 = 0;
	int8_t x311 = INT8_MIN;
	static volatile int32_t t71 = -278929;

    t71 = (x309*(x310|(x311%x312)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x321 = -1LL;
	int16_t x323 = INT16_MAX;
	int64_t x324 = 80641819732LL;
	static int64_t t72 = -2LL;

    t72 = (x321*(x322|(x323%x324)));

    if (t72 != -32767LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x326 = INT32_MIN;
	int32_t x327 = INT32_MIN;
	uint64_t x328 = 45977126118124LLU;
	volatile uint64_t t73 = 5987478572724908LLU;

    t73 = (x325*(x326|(x327%x328)));

    if (t73 != 1606822932LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int8_t x334 = INT8_MAX;
	int64_t x335 = INT64_MIN;
	uint32_t x336 = UINT32_MAX;

    t74 = (x333*(x334|(x335%x336)));

    if (t74 != -574106097020619LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x337 = -1;
	int16_t x338 = INT16_MIN;
	int32_t x339 = INT32_MIN;
	int32_t x340 = 3771;
	volatile int32_t t75 = 0;

    t75 = (x337*(x338|(x339%x340)));

    if (t75 != 965) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x342 = 575U;
	int16_t x343 = 1;
	int16_t x344 = -13;

    t76 = (x341*(x342|(x343%x344)));

    if (t76 != 1022065690U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x345 = 62U;
	int16_t x347 = INT16_MAX;
	static uint8_t x348 = 117U;
	volatile int32_t t77 = -846669003;

    t77 = (x345*(x346|(x347%x348)));

    if (t77 != -7502) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x349 = INT8_MIN;
	static uint16_t x350 = UINT16_MAX;
	int32_t x351 = INT32_MIN;
	int16_t x352 = INT16_MIN;
	int32_t t78 = -81;

    t78 = (x349*(x350|(x351%x352)));

    if (t78 != -8388480) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint64_t x355 = UINT64_MAX;
	volatile uint64_t t79 = 12LLU;

    t79 = (x353*(x354|(x355%x356)));

    if (t79 != 127592082486402890LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x357 = INT8_MIN;
	uint64_t t80 = 215081358LLU;

    t80 = (x357*(x358|(x359%x360)));

    if (t80 != 128LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x361 = -4;
	int32_t x362 = 20;
	uint64_t x364 = UINT64_MAX;
	uint64_t t81 = 280000261478586560LLU;

    t81 = (x361*(x362|(x363%x364)));

    if (t81 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x365 = INT8_MAX;
	uint16_t x366 = 1U;
	volatile uint8_t x367 = 89U;
	int32_t x368 = INT32_MIN;

    t82 = (x365*(x366|(x367%x368)));

    if (t82 != 11303) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x369 = INT16_MIN;
	static uint8_t x370 = 90U;
	volatile int32_t x371 = 207;
	static int16_t x372 = INT16_MIN;
	volatile int32_t t83 = 448165;

    t83 = (x369*(x370|(x371%x372)));

    if (t83 != -7307264) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x377 = UINT16_MAX;
	int8_t x378 = -1;
	uint8_t x379 = UINT8_MAX;
	uint16_t x380 = 13092U;
	int32_t t84 = -100345;

    t84 = (x377*(x378|(x379%x380)));

    if (t84 != -65535) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x382 = 12;
	static int8_t x383 = INT8_MIN;
	int32_t x384 = 771299866;
	int64_t t85 = -5LL;

    t85 = (x381*(x382|(x383%x384)));

    if (t85 != 1856LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x385 = 6799LLU;
	volatile int16_t x386 = INT16_MIN;
	volatile int64_t x387 = INT64_MIN;
	uint64_t t86 = 23LLU;

    t86 = (x385*(x386|(x387%x388)));

    if (t86 != 18446744073676222918LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x389 = -73;
	int16_t x390 = -1;
	int32_t x391 = -46670180;

    t87 = (x389*(x390|(x391%x392)));

    if (t87 != 73) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x393 = 12789U;
	static uint32_t x394 = UINT32_MAX;
	int64_t x395 = INT64_MAX;
	static int16_t x396 = INT16_MIN;

    t88 = (x393*(x394|(x395%x396)));

    if (t88 != 54928336735755LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int16_t x397 = 1;
	int32_t x398 = -13;
	static uint64_t x399 = UINT64_MAX;
	static uint32_t x400 = 7U;
	volatile uint64_t t89 = 86320645399286LLU;

    t89 = (x397*(x398|(x399%x400)));

    if (t89 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x401 = -1;
	static int16_t x402 = 23;
	int64_t x403 = -1913786LL;
	static int16_t x404 = INT16_MIN;

    t90 = (x401*(x402|(x403%x404)));

    if (t90 != 13225LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x413 = 0U;
	int16_t x415 = 0;
	static int32_t x416 = INT32_MIN;
	volatile int32_t t91 = -28725326;

    t91 = (x413*(x414|(x415%x416)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x422 = INT16_MAX;
	uint16_t x424 = 25U;
	static uint64_t t92 = 879740040967477473LLU;

    t92 = (x421*(x422|(x423%x424)));

    if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x426 = INT32_MIN;
	int64_t x427 = -7224LL;
	static int16_t x428 = INT16_MAX;

    t93 = (x425*(x426|(x427%x428)));

    if (t93 != 7224LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x429 = UINT64_MAX;
	int16_t x430 = -1;
	uint32_t x432 = 3510183U;
	volatile uint64_t t94 = 220878412LLU;

    t94 = (x429*(x430|(x431%x432)));

    if (t94 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x433 = 1927528914LLU;
	volatile int64_t x434 = INT64_MIN;
	volatile int64_t x435 = 626803528LL;
	uint64_t t95 = 28081694305LLU;

    t95 = (x433*(x434|(x435%x436)));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x437 = INT16_MIN;
	uint64_t x438 = UINT64_MAX;
	uint8_t x439 = 7U;
	static uint8_t x440 = UINT8_MAX;
	volatile uint64_t t96 = 178389358327359379LLU;

    t96 = (x437*(x438|(x439%x440)));

    if (t96 != 32768LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x445 = UINT32_MAX;
	int32_t x446 = 1;
	static int8_t x447 = -1;
	int64_t x448 = INT64_MIN;
	int64_t t97 = 0LL;

    t97 = (x445*(x446|(x447%x448)));

    if (t97 != -4294967295LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x466 = INT32_MIN;
	int8_t x467 = 9;
	volatile uint32_t t98 = 872U;

    t98 = (x465*(x466|(x467%x468)));

    if (t98 != 4290250180U) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x469 = 25027757U;
	int8_t x470 = -10;
	int8_t x472 = -1;
	static uint32_t t99 = 182160508U;

    t99 = (x469*(x470|(x471%x472)));

    if (t99 != 4044689726U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x473 = UINT32_MAX;
	uint16_t x474 = 21861U;
	int16_t x475 = -1;
	uint32_t t100 = 26031713U;

    t100 = (x473*(x474|(x475%x476)));

    if (t100 != 4294945435U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x477 = 2;
	int32_t x478 = -1;
	uint64_t t101 = 6LLU;

    t101 = (x477*(x478|(x479%x480)));

    if (t101 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x481 = UINT16_MAX;
	int32_t x482 = -1;
	uint32_t x483 = 3U;
	static uint32_t t102 = 244088U;

    t102 = (x481*(x482|(x483%x484)));

    if (t102 != 4294901761U) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x485 = UINT8_MAX;
	uint64_t x486 = UINT64_MAX;
	int8_t x487 = -1;
	volatile int16_t x488 = 2339;

    t103 = (x485*(x486|(x487%x488)));

    if (t103 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x489 = UINT8_MAX;
	static int8_t x490 = -23;
	int32_t x491 = INT32_MIN;
	static int32_t t104 = -1028274741;

    t104 = (x489*(x490|(x491%x492)));

    if (t104 != -5865) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x493 = 210967LLU;
	int8_t x494 = 20;
	static volatile uint8_t x495 = UINT8_MAX;
	static int64_t x496 = INT64_MAX;
	volatile uint64_t t105 = 27130535LLU;

    t105 = (x493*(x494|(x495%x496)));

    if (t105 != 53796585LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x497 = 1707U;
	int64_t x498 = INT64_MIN;

    t106 = (x497*(x498|(x499%x500)));

    if (t106 != -13656LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x510 = 8U;
	volatile int16_t x512 = INT16_MAX;
	int32_t t107 = -4;

    t107 = (x509*(x510|(x511%x512)));

    if (t107 != 1524) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x521 = -1LL;
	int16_t x522 = -10;
	volatile uint32_t x523 = UINT32_MAX;
	static int64_t x524 = -2856217941677215LL;
	int64_t t108 = 74711338083LL;

    t108 = (x521*(x522|(x523%x524)));

    if (t108 != 1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x525 = -1;
	static uint32_t x526 = 906277U;
	int64_t x527 = INT64_MAX;
	static int8_t x528 = INT8_MIN;

    t109 = (x525*(x526|(x527%x528)));

    if (t109 != -906367LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x529 = 57850429U;
	static uint8_t x530 = 11U;
	volatile int16_t x531 = 1627;
	static int8_t x532 = INT8_MIN;
	volatile uint32_t t110 = 488247U;

    t110 = (x529*(x530|(x531%x532)));

    if (t110 != 969421743U) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x533 = -1LL;
	uint64_t x534 = 1282538326652LLU;
	int32_t x535 = INT32_MIN;
	static int16_t x536 = INT16_MIN;

    t111 = (x533*(x534|(x535%x536)));

    if (t111 != 18446742791171224964LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x537 = INT16_MIN;
	int16_t x538 = 1431;
	int16_t x539 = INT16_MIN;
	uint16_t x540 = 205U;
	int32_t t112 = -159113;

    t112 = (x537*(x538|(x539%x540)));

    if (t112 != 1343488) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x553 = -1;
	int8_t x554 = 2;
	volatile int32_t x555 = INT32_MAX;
	volatile int32_t t113 = 517847300;

    t113 = (x553*(x554|(x555%x556)));

    if (t113 != -2147483647) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x557 = 27LL;
	uint32_t x558 = 2088U;
	int8_t x559 = -3;
	int64_t x560 = INT64_MIN;
	int64_t t114 = 33452877155737LL;

    t114 = (x557*(x558|(x559%x560)));

    if (t114 != -81LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x562 = -1;
	volatile int8_t x563 = -19;
	uint64_t x564 = UINT64_MAX;
	static volatile uint64_t t115 = 46227LLU;

    t115 = (x561*(x562|(x563%x564)));

    if (t115 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint32_t x565 = 2U;
	static uint8_t x566 = UINT8_MAX;
	static int32_t x568 = 23541506;
	volatile uint32_t t116 = 140U;

    t116 = (x565*(x566|(x567%x568)));

    if (t116 != 4294967294U) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x569 = -1;
	static uint32_t t117 = 52513723U;

    t117 = (x569*(x570|(x571%x572)));

    if (t117 != 4294967237U) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int16_t x577 = INT16_MIN;
	static int16_t x578 = -6835;

    t118 = (x577*(x578|(x579%x580)));

    if (t118 != 223969280U) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x581 = -2;
	uint32_t x582 = 114227U;
	int16_t x583 = INT16_MAX;
	int64_t x584 = -1LL;
	volatile int64_t t119 = -138967229021570LL;

    t119 = (x581*(x582|(x583%x584)));

    if (t119 != -228454LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x589 = 27;
	volatile int8_t x590 = INT8_MIN;
	uint8_t x592 = UINT8_MAX;
	uint64_t t120 = 11244642350141110LLU;

    t120 = (x589*(x590|(x591%x592)));

    if (t120 != 18446744073709549456LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x594 = INT64_MIN;
	static int32_t x595 = INT32_MIN;
	uint16_t x596 = UINT16_MAX;
	int64_t t121 = -3LL;

    t121 = (x593*(x594|(x595%x596)));

    if (t121 != 1073741824LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x597 = 8062597U;
	volatile int16_t x598 = -1;
	int16_t x599 = INT16_MAX;
	volatile uint32_t t122 = 5331072U;

    t122 = (x597*(x598|(x599%x600)));

    if (t122 != 4286904699U) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x601 = -1;
	volatile int16_t x602 = INT16_MIN;

    t123 = (x601*(x602|(x603%x604)));

    if (t123 != 1LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x606 = 6U;
	int64_t x607 = INT64_MIN;
	static uint8_t x608 = UINT8_MAX;

    t124 = (x605*(x606|(x607%x608)));

    if (t124 != 261993005056LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x609 = 1;
	static int32_t x610 = -1;
	int8_t x611 = -1;
	uint64_t x612 = UINT64_MAX;

    t125 = (x609*(x610|(x611%x612)));

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x618 = UINT64_MAX;
	int16_t x619 = 979;
	static int8_t x620 = INT8_MAX;
	uint64_t t126 = 2029LLU;

    t126 = (x617*(x618|(x619%x620)));

    if (t126 != 1LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x621 = -1;
	uint32_t x622 = UINT32_MAX;
	int32_t x623 = 444609;
	uint64_t x624 = 118LLU;
	uint64_t t127 = 405422941LLU;

    t127 = (x621*(x622|(x623%x624)));

    if (t127 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x625 = INT16_MAX;
	static int8_t x626 = INT8_MAX;
	static uint64_t x627 = 804592704074LLU;
	volatile uint64_t x628 = UINT64_MAX;
	volatile uint64_t t128 = 7115578759924789107LLU;

    t128 = (x625*(x626|(x627%x628)));

    if (t128 != 26364089136129409LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x629 = INT32_MAX;
	static int8_t x630 = -1;
	int16_t x631 = 51;
	volatile int32_t x632 = -1;
	int32_t t129 = 5;

    t129 = (x629*(x630|(x631%x632)));

    if (t129 != -2147483647) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x633 = 1;
	int8_t x634 = INT8_MIN;
	uint64_t x635 = 42155476LLU;
	int64_t x636 = INT64_MAX;
	uint64_t t130 = 1431968918LLU;

    t130 = (x633*(x634|(x635%x636)));

    if (t130 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x637 = INT16_MIN;
	int64_t x638 = -1LL;
	static int16_t x639 = INT16_MAX;
	static int16_t x640 = -333;
	static int64_t t131 = 987427174408180464LL;

    t131 = (x637*(x638|(x639%x640)));

    if (t131 != 32768LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x641 = INT32_MAX;
	int16_t x642 = 17;
	int16_t x643 = -38;
	int64_t x644 = INT64_MIN;
	int64_t t132 = 70LL;

    t132 = (x641*(x642|(x643%x644)));

    if (t132 != -79456894939LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x645 = 0;
	int32_t x647 = 526149;
	int8_t x648 = 3;

    t133 = (x645*(x646|(x647%x648)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x649 = -64173LL;
	int16_t x651 = INT16_MIN;
	int8_t x652 = INT8_MAX;
	int64_t t134 = 243779679595733115LL;

    t134 = (x649*(x650|(x651%x652)));

    if (t134 != 64173LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x657 = 111305LLU;
	uint64_t x658 = 64083408167LLU;
	volatile int32_t x660 = -1;
	volatile uint64_t t135 = 62650291LLU;

    t135 = (x657*(x658|(x659%x660)));

    if (t135 != 7132803746027935LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x661 = INT8_MAX;
	static uint64_t x662 = UINT64_MAX;
	int8_t x663 = INT8_MIN;
	uint32_t x664 = UINT32_MAX;
	volatile uint64_t t136 = 114744542LLU;

    t136 = (x661*(x662|(x663%x664)));

    if (t136 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x665 = -1;
	int64_t x666 = INT64_MIN;
	volatile uint16_t x667 = 306U;
	int16_t x668 = INT16_MIN;
	int64_t t137 = -245715431042LL;

    t137 = (x665*(x666|(x667%x668)));

    if (t137 != 9223372036854775502LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x669 = INT32_MAX;
	uint16_t x670 = UINT16_MAX;
	int16_t x671 = INT16_MIN;
	uint8_t x672 = 30U;
	int32_t t138 = 33246571;

    t138 = (x669*(x670|(x671%x672)));

    if (t138 != -2147483647) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x673 = 1172762446LLU;
	int8_t x674 = INT8_MIN;
	int32_t x675 = -617;
	volatile uint64_t t139 = 16418LLU;

    t139 = (x673*(x674|(x675%x676)));

    if (t139 != 18446743923595958528LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x678 = INT16_MIN;
	int64_t x679 = -1LL;
	volatile int64_t t140 = -12323634486468428LL;

    t140 = (x677*(x678|(x679%x680)));

    if (t140 != -255LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x685 = -1;
	volatile int64_t x686 = INT64_MIN;
	int32_t x687 = INT32_MAX;
	int32_t x688 = -2782;

    t141 = (x685*(x686|(x687%x688)));

    if (t141 != 9223372036854773601LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x689 = 543U;
	int8_t x690 = INT8_MAX;
	int32_t x691 = -553851981;
	static int8_t x692 = INT8_MIN;
	volatile uint32_t t142 = 1017758047U;

    t142 = (x689*(x690|(x691%x692)));

    if (t142 != 4294966753U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x693 = 164;
	int64_t x694 = 0LL;
	static int32_t x696 = INT32_MIN;
	volatile int64_t t143 = 237666737743001740LL;

    t143 = (x693*(x694|(x695%x696)));

    if (t143 != -164LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x701 = 6563U;
	volatile int8_t x702 = -1;
	int32_t x703 = -59473770;
	int8_t x704 = INT8_MAX;
	volatile int32_t t144 = -98962476;

    t144 = (x701*(x702|(x703%x704)));

    if (t144 != -6563) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x709 = INT8_MAX;
	uint64_t x710 = 0LLU;
	static int32_t x711 = INT32_MIN;
	int64_t x712 = INT64_MAX;

    t145 = (x709*(x710|(x711%x712)));

    if (t145 != 18446743800979128320LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x714 = INT16_MIN;
	static uint64_t x715 = UINT64_MAX;
	volatile int64_t x716 = -1LL;
	volatile uint64_t t146 = 74389LLU;

    t146 = (x713*(x714|(x715%x716)));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x718 = 239U;
	static uint32_t x719 = 1850U;
	int8_t x720 = -2;
	uint32_t t147 = 48267U;

    t147 = (x717*(x718|(x719%x720)));

    if (t147 != 4227891200U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x721 = -1899;
	static uint64_t x722 = 10906613LLU;
	int32_t x723 = 820659739;
	uint32_t x724 = 3248U;

    t148 = (x721*(x722|(x723%x724)));

    if (t148 != 18446744052997874539LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x725 = INT32_MIN;
	static int32_t x726 = 186;
	volatile int64_t x727 = INT64_MIN;
	int64_t t149 = 1LL;

    t149 = (x725*(x726|(x727%x728)));

    if (t149 != -399431958528LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x730 = 96U;
	int16_t x732 = INT16_MIN;
	uint64_t t150 = 6465867LLU;

    t150 = (x729*(x730|(x731%x732)));

    if (t150 != 10205647679351482007LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x733 = -1;
	int8_t x734 = 3;
	int64_t x735 = INT64_MIN;
	static volatile int64_t t151 = 70412707260779792LL;

    t151 = (x733*(x734|(x735%x736)));

    if (t151 != 1960145LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x742 = 1287LLU;
	uint16_t x743 = 116U;
	uint64_t x744 = UINT64_MAX;
	uint64_t t152 = 4749LLU;

    t152 = (x741*(x742|(x743%x744)));

    if (t152 != 91683465LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x746 = UINT64_MAX;
	int8_t x747 = -1;
	static volatile int64_t x748 = -1LL;
	volatile uint64_t t153 = 23881582018710LLU;

    t153 = (x745*(x746|(x747%x748)));

    if (t153 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x749 = UINT8_MAX;
	int32_t x750 = -1;
	static volatile int64_t x751 = INT64_MIN;
	int16_t x752 = INT16_MAX;
	volatile int64_t t154 = 14LL;

    t154 = (x749*(x750|(x751%x752)));

    if (t154 != -255LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x761 = UINT16_MAX;
	static int32_t x762 = -5;
	int64_t x763 = -75LL;
	int64_t x764 = INT64_MIN;

    t155 = (x761*(x762|(x763%x764)));

    if (t155 != -65535LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x766 = 1LLU;
	uint64_t t156 = 233020193681334890LLU;

    t156 = (x765*(x766|(x767%x768)));

    if (t156 != 18446744073709545901LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x773 = UINT64_MAX;
	static int8_t x774 = INT8_MAX;
	int64_t x775 = -1LL;
	int64_t x776 = INT64_MIN;
	volatile uint64_t t157 = 289126134150LLU;

    t157 = (x773*(x774|(x775%x776)));

    if (t157 != 1LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x777 = 320;
	volatile int64_t x778 = INT64_MIN;
	uint64_t x779 = UINT64_MAX;
	uint64_t t158 = 637959753227LLU;

    t158 = (x777*(x778|(x779%x780)));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x781 = INT16_MIN;
	int64_t x782 = 376340991LL;
	uint32_t x783 = UINT32_MAX;
	int16_t x784 = -155;
	volatile int64_t t159 = 3367528539077LL;

    t159 = (x781*(x782|(x783%x784)));

    if (t159 != -12331941593088LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x785 = INT16_MIN;
	static uint64_t x786 = 3238967753840LLU;
	int32_t x787 = INT32_MAX;
	static volatile uint64_t x788 = 1441159050614727LLU;
	static volatile uint64_t t160 = 1547116LLU;

    t160 = (x785*(x786|(x787%x788)));

    if (t160 != 18340557638745489408LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x789 = 0U;
	static int16_t x790 = INT16_MAX;
	static int64_t x791 = -1536991LL;
	int64_t x792 = 70734508LL;
	volatile int64_t t161 = 20234735726456390LL;

    t161 = (x789*(x790|(x791%x792)));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x794 = INT16_MIN;
	volatile int16_t x795 = INT16_MIN;
	uint64_t x796 = 1607308LLU;

    t162 = (x793*(x794|(x795%x796)));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x797 = -3745472;
	int32_t x798 = INT32_MAX;
	int64_t x799 = INT64_MIN;
	int32_t x800 = INT32_MIN;

    t163 = (x797*(x798|(x799%x800)));

    if (t163 != -8043339870296384LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x802 = 15952758634LL;
	int8_t x803 = INT8_MIN;
	int8_t x804 = INT8_MAX;
	volatile int64_t t164 = -16757087LL;

    t164 = (x801*(x802|(x803%x804)));

    if (t164 != -127LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x805 = 1U;
	uint64_t x806 = 273LLU;
	uint16_t x807 = UINT16_MAX;
	static int16_t x808 = 3;
	uint64_t t165 = 17850LLU;

    t165 = (x805*(x806|(x807%x808)));

    if (t165 != 273LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x810 = 14;
	uint64_t x812 = 11447742LLU;
	static uint64_t t166 = 42673100069LLU;

    t166 = (x809*(x810|(x811%x812)));

    if (t166 != 18442628552664332221LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x813 = UINT32_MAX;
	int8_t x814 = 0;
	uint16_t x815 = UINT16_MAX;
	uint16_t x816 = 310U;

    t167 = (x813*(x814|(x815%x816)));

    if (t167 != 4294967171U) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x817 = 31965U;
	int8_t x818 = 0;
	int32_t x819 = -1;
	int8_t x820 = -30;
	int32_t t168 = 768581605;

    t168 = (x817*(x818|(x819%x820)));

    if (t168 != -31965) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int16_t x821 = -1;
	uint64_t x822 = 418255LLU;
	int64_t x823 = INT64_MIN;
	uint64_t x824 = 1138480LLU;

    t169 = (x821*(x822|(x823%x824)));

    if (t169 != 18446744073708536337LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x825 = UINT16_MAX;
	static int32_t x826 = INT32_MIN;
	int32_t x827 = INT32_MAX;
	static int32_t x828 = INT32_MIN;
	int32_t t170 = -1;

    t170 = (x825*(x826|(x827%x828)));

    if (t170 != -65535) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x829 = INT8_MIN;
	volatile int16_t x830 = INT16_MIN;
	int64_t x832 = INT64_MIN;
	int64_t t171 = 16526905842528682LL;

    t171 = (x829*(x830|(x831%x832)));

    if (t171 != 4194304LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x833 = -1;
	int64_t x834 = INT64_MIN;
	uint64_t x835 = 164271602LLU;
	static uint8_t x836 = 2U;
	static volatile uint64_t t172 = 1874LLU;

    t172 = (x833*(x834|(x835%x836)));

    if (t172 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x837 = 102653556521320762LLU;
	static int64_t x838 = -5840LL;
	static int16_t x839 = INT16_MIN;
	volatile uint64_t t173 = 535889013587713147LLU;

    t173 = (x837*(x838|(x839%x840)));

    if (t173 != 9245784347901953248LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x849 = UINT32_MAX;
	int16_t x851 = INT16_MIN;
	int64_t x852 = -1567048753571214508LL;

    t174 = (x849*(x850|(x851%x852)));

    if (t174 != -140737488322560LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x853 = -1LL;
	volatile int64_t x854 = -1LL;
	volatile uint64_t x855 = 237026238LLU;
	volatile int32_t x856 = INT32_MAX;

    t175 = (x853*(x854|(x855%x856)));

    if (t175 != 1LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x861 = INT8_MIN;
	volatile uint64_t x863 = 31132206LLU;
	int16_t x864 = INT16_MIN;
	volatile uint64_t t176 = 106591862336522LLU;

    t176 = (x861*(x862|(x863%x864)));

    if (t176 != 18446743798831644800LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x865 = -1LL;
	int32_t x866 = INT32_MIN;
	volatile uint32_t x868 = 2401751U;

    t177 = (x865*(x866|(x867%x868)));

    if (t177 != 7LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x870 = -21;
	int64_t x872 = 29522662906089002LL;
	int64_t t178 = 17133308429995LL;

    t178 = (x869*(x870|(x871%x872)));

    if (t178 != -313LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x873 = 182327U;
	int64_t x874 = INT64_MIN;
	volatile int64_t x875 = INT64_MIN;
	uint32_t x876 = 98992439U;
	volatile int64_t t179 = 451LL;

    t179 = (x873*(x874|(x875%x876)));

    if (t179 != -16768294753096LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x885 = INT8_MIN;
	static int8_t x886 = 1;
	uint16_t x887 = 8402U;
	uint16_t x888 = 10155U;

    t180 = (x885*(x886|(x887%x888)));

    if (t180 != -1075584) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x889 = -1;
	int64_t x891 = -85576580235569866LL;
	static volatile uint64_t t181 = 11247195LLU;

    t181 = (x889*(x890|(x891%x892)));

    if (t181 != 85576580235569153LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x893 = UINT32_MAX;
	int8_t x894 = INT8_MIN;
	uint16_t x895 = 324U;
	int8_t x896 = -1;
	volatile uint32_t t182 = 152852U;

    t182 = (x893*(x894|(x895%x896)));

    if (t182 != 128U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x897 = -3303558879LL;
	int32_t x898 = -1;
	uint16_t x899 = 18110U;
	static uint16_t x900 = 3U;
	static int64_t t183 = -43LL;

    t183 = (x897*(x898|(x899%x900)));

    if (t183 != 3303558879LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x901 = 0;
	uint32_t x902 = 24566U;
	static int16_t x903 = INT16_MAX;
	int64_t x904 = INT64_MIN;
	int64_t t184 = -3LL;

    t184 = (x901*(x902|(x903%x904)));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x905 = 0U;
	volatile int16_t x906 = INT16_MAX;
	volatile int32_t x908 = INT32_MIN;
	volatile int32_t t185 = 8;

    t185 = (x905*(x906|(x907%x908)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x909 = 4768;
	volatile int8_t x910 = INT8_MIN;
	int16_t x911 = INT16_MIN;
	int8_t x912 = INT8_MAX;
	static volatile int32_t t186 = -2318372;

    t186 = (x909*(x910|(x911%x912)));

    if (t186 != -9536) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x913 = 260225LLU;
	int16_t x914 = INT16_MAX;
	uint8_t x915 = 16U;
	static uint64_t t187 = 61185593LLU;

    t187 = (x913*(x914|(x915%x916)));

    if (t187 != 8526792575LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x926 = -29;
	int16_t x928 = 12110;
	volatile uint32_t t188 = 3U;

    t188 = (x925*(x926|(x927%x928)));

    if (t188 != 4245853990U) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x930 = 1028;
	uint64_t x931 = 178023565698LLU;
	int8_t x932 = INT8_MAX;
	volatile uint64_t t189 = 3977378528976799LLU;

    t189 = (x929*(x930|(x931%x932)));

    if (t189 != 18446741640610578432LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x933 = -41;
	int16_t x934 = -1;
	int64_t x935 = INT64_MIN;
	uint16_t x936 = 16456U;

    t190 = (x933*(x934|(x935%x936)));

    if (t190 != 41LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x941 = UINT16_MAX;
	int8_t x943 = INT8_MIN;
	static int32_t t191 = -912100741;

    t191 = (x941*(x942|(x943%x944)));

    if (t191 != -8388480) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x945 = 186082U;
	uint16_t x946 = 10692U;
	int8_t x948 = INT8_MAX;
	volatile uint32_t t192 = 2112U;

    t192 = (x945*(x946|(x947%x948)));

    if (t192 != 4294781214U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x949 = INT8_MAX;
	int8_t x950 = INT8_MIN;
	static int16_t x952 = -8;
	volatile uint64_t t193 = 33184437826622LLU;

    t193 = (x949*(x950|(x951%x952)));

    if (t193 != 18446744073709540186LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x953 = UINT16_MAX;
	static volatile int8_t x954 = -9;

    t194 = (x953*(x954|(x955%x956)));

    if (t194 != -589815) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x957 = -31;
	static uint8_t x958 = 13U;
	int8_t x959 = INT8_MIN;
	int64_t t195 = 7LL;

    t195 = (x957*(x958|(x959%x960)));

    if (t195 != -403LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x961 = INT8_MIN;
	static uint64_t x962 = UINT64_MAX;
	volatile int64_t x963 = -53413LL;
	uint64_t t196 = 8062LLU;

    t196 = (x961*(x962|(x963%x964)));

    if (t196 != 128LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x965 = INT32_MIN;
	int32_t x966 = INT32_MIN;
	volatile uint64_t x967 = 68167132331013978LLU;
	uint16_t x968 = 10U;

    t197 = (x965*(x966|(x967%x968)));

    if (t197 != 4611686001247518720LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x969 = 65196200U;
	int32_t x971 = -9276431;
	static int16_t x972 = INT16_MAX;
	uint32_t t198 = 3U;

    t198 = (x969*(x970|(x971%x972)));

    if (t198 != 4229771096U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x973 = 36U;
	int64_t x974 = INT64_MAX;
	int32_t x975 = INT32_MIN;
	int64_t t199 = 55069086984394LL;

    t199 = (x973*(x974|(x975%x976)));

    if (t199 != -36LL) { NG(); } else { ; }
	
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


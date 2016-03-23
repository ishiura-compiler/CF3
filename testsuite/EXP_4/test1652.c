
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

volatile int16_t x9 = 1902;
static uint8_t x11 = 0U;
int8_t x13 = -3;
int16_t x23 = INT16_MIN;
static int16_t x24 = INT16_MIN;
uint32_t x30 = 281243U;
static int8_t x32 = INT8_MIN;
static volatile uint32_t t4 = 1382368U;
uint8_t x33 = 10U;
int8_t x49 = INT8_MAX;
uint64_t x51 = 13534013LLU;
int16_t x56 = -1;
int16_t x57 = INT16_MIN;
uint32_t x58 = 1U;
static volatile uint32_t t8 = 240U;
uint64_t x81 = 0LLU;
uint64_t x82 = 1LLU;
static volatile int64_t x84 = INT64_MIN;
uint64_t t11 = 4097135542LLU;
int8_t x86 = 0;
int8_t x88 = -1;
static uint64_t x94 = UINT64_MAX;
int16_t x95 = INT16_MIN;
int64_t x96 = -1LL;
volatile uint8_t x100 = 15U;
int16_t x104 = INT16_MAX;
volatile int64_t t16 = -1271LL;
volatile int8_t x126 = 13;
volatile int32_t t18 = 37;
volatile int8_t x136 = INT8_MIN;
static int8_t x142 = 46;
volatile uint64_t x143 = 1196533655536521922LLU;
int32_t t22 = -62566;
volatile uint16_t x148 = UINT16_MAX;
int8_t x149 = 0;
uint32_t x162 = 30U;
volatile int64_t x208 = INT64_MAX;
int16_t x223 = -692;
int64_t x244 = -64745124341884325LL;
int32_t t35 = -479458;
uint16_t x261 = 54U;
volatile int32_t x271 = INT32_MAX;
uint64_t x282 = UINT64_MAX;
uint32_t x301 = UINT32_MAX;
int32_t t42 = 948;
int8_t x315 = INT8_MIN;
volatile int32_t x316 = INT32_MIN;
static int32_t x319 = -506;
int8_t x333 = INT8_MAX;
volatile uint32_t x343 = 145594255U;
int16_t x350 = 32;
int32_t x351 = INT32_MIN;
static int8_t x365 = -1;
uint16_t x366 = 23579U;
uint64_t x378 = UINT64_MAX;
static uint8_t x392 = 26U;
int64_t t56 = 2000319442902706892LL;
uint16_t x404 = 712U;
int16_t x421 = INT16_MIN;
uint64_t t62 = 307LLU;
static uint16_t x447 = 5U;
static uint8_t x448 = 0U;
uint64_t x453 = UINT64_MAX;
volatile int32_t t65 = 82647941;
volatile int16_t x465 = -1;
uint16_t x477 = 0U;
uint16_t x481 = 978U;
uint32_t x483 = 692742438U;
int64_t x487 = -1LL;
int8_t x493 = 1;
int8_t x496 = -1;
int32_t t71 = -1;
uint8_t x498 = 29U;
int32_t x503 = -1;
uint16_t x522 = 1013U;
int32_t x539 = INT32_MIN;
uint32_t x540 = 107986U;
uint32_t x541 = 2U;
volatile uint32_t x549 = 83335061U;
int8_t x567 = INT8_MIN;
int32_t t81 = -272296;
int64_t x585 = INT64_MIN;
int32_t x587 = 3;
volatile int64_t x588 = 31337428124630332LL;
int8_t x590 = INT8_MAX;
int64_t x592 = -1LL;
int32_t x608 = INT32_MIN;
uint32_t t85 = 6399U;
int32_t x624 = -1;
volatile int32_t t87 = -57306690;
volatile int32_t x628 = INT32_MIN;
volatile int64_t t88 = -393505222004LL;
int32_t x629 = -1;
int16_t x632 = -1;
int8_t x634 = INT8_MAX;
uint32_t x673 = 1209351U;
static uint32_t t95 = 3758U;
int16_t x684 = INT16_MAX;
int32_t x697 = 754772811;
static uint32_t x699 = UINT32_MAX;
static int32_t t98 = 150750;
volatile int16_t x708 = -1;
int32_t x711 = INT32_MIN;
int32_t x712 = INT32_MIN;
int8_t x734 = INT8_MAX;
int32_t t104 = 7164134;
int64_t x747 = -737LL;
volatile uint32_t x748 = 12168815U;
uint32_t t106 = 1349605U;
volatile int16_t x750 = INT16_MAX;
static int16_t x751 = INT16_MIN;
static int32_t t107 = 128866;
int64_t x765 = INT64_MIN;
uint64_t x766 = 1LLU;
uint16_t x770 = UINT16_MAX;
int32_t x788 = INT32_MIN;
volatile uint32_t t113 = 309U;
static volatile int16_t x797 = INT16_MIN;
uint32_t x806 = 925813979U;
uint64_t x814 = UINT64_MAX;
static uint32_t t118 = 79U;
int8_t x830 = 2;
int8_t x831 = INT8_MIN;
static volatile int32_t t122 = 19;
uint8_t x843 = UINT8_MAX;
uint8_t x848 = 4U;
uint8_t x854 = 7U;
static volatile uint32_t x856 = 29365037U;
static volatile uint64_t t126 = 7542449027LLU;
uint32_t x869 = 25U;
int32_t x894 = 208974886;
uint64_t x895 = UINT64_MAX;
int64_t x909 = -1LL;
int64_t x912 = 1452279767689552698LL;
volatile int64_t x916 = INT64_MIN;
static int32_t t133 = -164671;
static int16_t x938 = INT16_MAX;
static int16_t x940 = INT16_MIN;
int64_t x941 = 4LL;
uint16_t x946 = UINT16_MAX;
int32_t x949 = -1;
volatile int32_t x951 = 12;
uint32_t t138 = 1U;
static int64_t x966 = 7216LL;
int16_t x972 = -1;
int8_t x986 = INT8_MAX;
uint16_t x988 = UINT16_MAX;
volatile uint16_t x1006 = 1U;
volatile uint64_t x1010 = UINT64_MAX;
int8_t x1011 = 0;
static volatile uint64_t t146 = 12399966133LLU;
uint8_t x1018 = UINT8_MAX;
static uint32_t t148 = 249248U;
uint8_t x1038 = UINT8_MAX;
static uint64_t t151 = 189869814LLU;
int16_t x1080 = -1;
int16_t x1094 = 164;
int64_t t158 = 196842790075166LL;
int32_t x1117 = 2034942;
int16_t x1119 = -1;
volatile uint64_t t160 = 155217LLU;
volatile uint32_t t163 = 1432567U;
int16_t x1191 = INT16_MIN;
uint16_t x1197 = 358U;
volatile int32_t t167 = -1;
int8_t x1212 = INT8_MIN;
static int64_t x1213 = -3413099179189LL;
int16_t x1218 = INT16_MAX;
volatile int8_t x1224 = INT8_MAX;
uint32_t x1227 = UINT32_MAX;
int32_t t172 = -441062;
static uint16_t x1238 = 5U;
volatile uint64_t t174 = 31850924943LLU;
uint8_t x1244 = UINT8_MAX;
uint32_t t175 = 16U;
int8_t x1252 = INT8_MIN;
volatile int16_t x1256 = INT16_MIN;
int16_t x1271 = -1;
volatile int32_t x1280 = INT32_MIN;
static volatile uint32_t t185 = 972U;
int8_t x1334 = INT8_MAX;
uint16_t x1338 = UINT16_MAX;
uint32_t x1342 = 83543685U;
uint16_t x1347 = 7351U;
volatile int32_t t192 = 739094;
int64_t t193 = 0LL;
int8_t x1362 = 8;
int64_t x1365 = INT64_MAX;
static int32_t x1399 = -39;
volatile uint8_t x1404 = UINT8_MAX;
static uint64_t t199 = 22161LLU;


void f0(void) {
    	static uint8_t x10 = UINT8_MAX;
	uint64_t x12 = 38LLU;
	volatile int32_t t0 = -184117330;

    t0 = (x9^(x10<<(x11>x12)));

    if (t0 != 1937) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x14 = 56;
	static int8_t x15 = INT8_MIN;
	int16_t x16 = INT16_MIN;
	int32_t t1 = -1;

    t1 = (x13^(x14<<(x15>x16)));

    if (t1 != -115) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x21 = INT8_MIN;
	volatile uint64_t x22 = 3298581257LLU;
	uint64_t t2 = 51321084204632LLU;

    t2 = (x21^(x22<<(x23>x24)));

    if (t2 != 18446744070410970249LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x25 = UINT16_MAX;
	uint64_t x26 = 80808561741625213LLU;
	int16_t x27 = 2;
	int32_t x28 = -1;
	volatile uint64_t t3 = 10870LLU;

    t3 = (x25^(x26<<(x27>x28)));

    if (t3 != 161617123483193605LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x29 = UINT16_MAX;
	int32_t x31 = 682669;

    t4 = (x29^(x30<<(x31>x32)));

    if (t4 != 551625U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x34 = UINT8_MAX;
	volatile uint8_t x35 = 32U;
	static int16_t x36 = -1;
	volatile int32_t t5 = 677530932;

    t5 = (x33^(x34<<(x35>x36)));

    if (t5 != 500) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x50 = 6U;
	volatile int16_t x52 = INT16_MAX;
	volatile int32_t t6 = -3043946;

    t6 = (x49^(x50<<(x51>x52)));

    if (t6 != 115) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x53 = -1;
	uint8_t x54 = 1U;
	volatile int64_t x55 = INT64_MIN;
	volatile int32_t t7 = 1905988;

    t7 = (x53^(x54<<(x55>x56)));

    if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x59 = -1;
	uint8_t x60 = UINT8_MAX;

    t8 = (x57^(x58<<(x59>x60)));

    if (t8 != 4294934529U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x61 = UINT32_MAX;
	int32_t x62 = 36314;
	uint16_t x63 = UINT16_MAX;
	int64_t x64 = INT64_MIN;
	volatile uint32_t t9 = 16352U;

    t9 = (x61^(x62<<(x63>x64)));

    if (t9 != 4294894667U) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x69 = -1LL;
	uint64_t x70 = 10202908095LLU;
	int8_t x71 = INT8_MIN;
	int64_t x72 = 4300164021LL;
	static uint64_t t10 = 1148LLU;

    t10 = (x69^(x70<<(x71>x72)));

    if (t10 != 18446744063506643520LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x83 = 1U;

    t11 = (x81^(x82<<(x83>x84)));

    if (t11 != 2LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint8_t x85 = 18U;
	int8_t x87 = INT8_MIN;
	int32_t t12 = -43645;

    t12 = (x85^(x86<<(x87>x88)));

    if (t12 != 18) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x93 = INT32_MIN;
	static uint64_t t13 = 252351262555LLU;

    t13 = (x93^(x94<<(x95>x96)));

    if (t13 != 2147483647LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x97 = 0;
	uint8_t x98 = 0U;
	static int64_t x99 = INT64_MIN;
	static int32_t t14 = -6980317;

    t14 = (x97^(x98<<(x99>x100)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x101 = UINT32_MAX;
	uint8_t x102 = UINT8_MAX;
	uint32_t x103 = 4U;
	volatile uint32_t t15 = 0U;

    t15 = (x101^(x102<<(x103>x104)));

    if (t15 != 4294967040U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x105 = INT64_MIN;
	int8_t x106 = INT8_MAX;
	static volatile uint64_t x107 = 1024914511463358453LLU;
	static volatile int32_t x108 = INT32_MIN;

    t16 = (x105^(x106<<(x107>x108)));

    if (t16 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x117 = -1;
	uint32_t x118 = 104116U;
	int16_t x119 = INT16_MIN;
	uint8_t x120 = 100U;
	volatile uint32_t t17 = 267512723U;

    t17 = (x117^(x118<<(x119>x120)));

    if (t17 != 4294863179U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x125 = 813U;
	int32_t x127 = 12;
	uint16_t x128 = UINT16_MAX;

    t18 = (x125^(x126<<(x127>x128)));

    if (t18 != 800) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x129 = -1;
	static uint32_t x130 = 1773634U;
	int32_t x131 = -4226;
	uint32_t x132 = 1U;
	volatile uint32_t t19 = 14U;

    t19 = (x129^(x130<<(x131>x132)));

    if (t19 != 4291420027U) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x133 = -1;
	static int16_t x134 = INT16_MAX;
	uint64_t x135 = 130567645908LLU;
	int32_t t20 = 1693;

    t20 = (x133^(x134<<(x135>x136)));

    if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint64_t x137 = UINT64_MAX;
	uint64_t x138 = 14LLU;
	volatile int16_t x139 = 219;
	uint16_t x140 = 2632U;
	volatile uint64_t t21 = 5LLU;

    t21 = (x137^(x138<<(x139>x140)));

    if (t21 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x141 = 0U;
	volatile int8_t x144 = INT8_MIN;

    t22 = (x141^(x142<<(x143>x144)));

    if (t22 != 46) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x145 = UINT64_MAX;
	int32_t x146 = 5855503;
	int64_t x147 = -1LL;
	static volatile uint64_t t23 = 5554671303713471424LLU;

    t23 = (x145^(x146<<(x147>x148)));

    if (t23 != 18446744073703696112LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x150 = INT16_MAX;
	static int8_t x151 = INT8_MIN;
	volatile int16_t x152 = 2765;
	volatile int32_t t24 = 22976;

    t24 = (x149^(x150<<(x151>x152)));

    if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x161 = -1LL;
	int32_t x163 = INT32_MIN;
	volatile uint64_t x164 = 3101252314784371LLU;
	volatile int64_t t25 = 3812LL;

    t25 = (x161^(x162<<(x163>x164)));

    if (t25 != -61LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x169 = INT64_MIN;
	uint32_t x170 = UINT32_MAX;
	static uint8_t x171 = 1U;
	int32_t x172 = -1;
	volatile int64_t t26 = -6438547LL;

    t26 = (x169^(x170<<(x171>x172)));

    if (t26 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x173 = -9627620;
	uint8_t x174 = 2U;
	int16_t x175 = -762;
	volatile int16_t x176 = INT16_MIN;
	int32_t t27 = 11745615;

    t27 = (x173^(x174<<(x175>x176)));

    if (t27 != -9627624) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x181 = 3853313U;
	int32_t x182 = 2913;
	volatile int16_t x183 = INT16_MAX;
	volatile int16_t x184 = -1998;
	volatile uint32_t t28 = 64063U;

    t28 = (x181^(x182<<(x183>x184)));

    if (t28 != 3857091U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x193 = INT32_MAX;
	volatile uint16_t x194 = 15854U;
	uint64_t x195 = 2043512280053LLU;
	int64_t x196 = 162527LL;
	volatile int32_t t29 = 0;

    t29 = (x193^(x194<<(x195>x196)));

    if (t29 != 2147451939) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x205 = INT8_MIN;
	uint8_t x206 = UINT8_MAX;
	static volatile int32_t x207 = -150773;
	int32_t t30 = 553;

    t30 = (x205^(x206<<(x207>x208)));

    if (t30 != -129) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x217 = -1;
	volatile int64_t x218 = 720441401429858LL;
	volatile uint32_t x219 = UINT32_MAX;
	volatile int32_t x220 = -39925;
	int64_t t31 = -3LL;

    t31 = (x217^(x218<<(x219>x220)));

    if (t31 != -1440882802859717LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x221 = -1;
	int16_t x222 = INT16_MAX;
	static uint64_t x224 = UINT64_MAX;
	int32_t t32 = 0;

    t32 = (x221^(x222<<(x223>x224)));

    if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x237 = INT8_MIN;
	uint16_t x238 = UINT16_MAX;
	volatile int64_t x239 = INT64_MIN;
	int16_t x240 = 1;
	volatile int32_t t33 = 2942391;

    t33 = (x237^(x238<<(x239>x240)));

    if (t33 != -65409) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x241 = -3;
	int8_t x242 = 1;
	uint64_t x243 = 4572666922861LLU;
	static volatile int32_t t34 = 81;

    t34 = (x241^(x242<<(x243>x244)));

    if (t34 != -4) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x245 = 6U;
	volatile uint16_t x246 = 460U;
	int8_t x247 = INT8_MIN;
	int32_t x248 = INT32_MIN;

    t35 = (x245^(x246<<(x247>x248)));

    if (t35 != 926) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x249 = INT32_MIN;
	static uint32_t x250 = UINT32_MAX;
	int16_t x251 = 1986;
	int8_t x252 = 0;
	volatile uint32_t t36 = 22U;

    t36 = (x249^(x250<<(x251>x252)));

    if (t36 != 2147483646U) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x257 = INT16_MIN;
	uint8_t x258 = UINT8_MAX;
	uint8_t x259 = 0U;
	uint64_t x260 = 5LLU;
	volatile int32_t t37 = 444;

    t37 = (x257^(x258<<(x259>x260)));

    if (t37 != -32513) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x262 = INT16_MAX;
	int32_t x263 = INT32_MIN;
	int16_t x264 = -1;
	static int32_t t38 = -117006;

    t38 = (x261^(x262<<(x263>x264)));

    if (t38 != 32713) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x269 = UINT16_MAX;
	static volatile uint32_t x270 = 22866843U;
	uint64_t x272 = UINT64_MAX;
	volatile uint32_t t39 = 5U;

    t39 = (x269^(x270<<(x271>x272)));

    if (t39 != 22811748U) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x281 = INT32_MIN;
	uint16_t x283 = 23U;
	int64_t x284 = INT64_MIN;
	volatile uint64_t t40 = 180580875LLU;

    t40 = (x281^(x282<<(x283>x284)));

    if (t40 != 2147483646LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x302 = UINT32_MAX;
	uint8_t x303 = UINT8_MAX;
	uint64_t x304 = UINT64_MAX;
	uint32_t t41 = 143U;

    t41 = (x301^(x302<<(x303>x304)));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x309 = -1;
	static uint8_t x310 = 11U;
	int32_t x311 = -1;
	static int16_t x312 = INT16_MIN;

    t42 = (x309^(x310<<(x311>x312)));

    if (t42 != -23) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x313 = INT64_MIN;
	int32_t x314 = 8566390;
	static int64_t t43 = -1LL;

    t43 = (x313^(x314<<(x315>x316)));

    if (t43 != -9223372036837643028LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x317 = -48109353;
	static uint64_t x318 = 101678183400903LLU;
	volatile uint16_t x320 = 6304U;
	volatile uint64_t t44 = 154LLU;

    t44 = (x317^(x318<<(x319>x320)));

    if (t44 != 18446642395478043920LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint16_t x321 = 19U;
	uint32_t x322 = 1U;
	uint32_t x323 = UINT32_MAX;
	uint32_t x324 = UINT32_MAX;
	volatile uint32_t t45 = 196U;

    t45 = (x321^(x322<<(x323>x324)));

    if (t45 != 18U) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint64_t x334 = 308382180713090210LLU;
	uint32_t x335 = 363107861U;
	uint16_t x336 = UINT16_MAX;
	volatile uint64_t t46 = 26595196LLU;

    t46 = (x333^(x334<<(x335>x336)));

    if (t46 != 616764361426180411LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x341 = INT64_MIN;
	int16_t x342 = INT16_MAX;
	uint8_t x344 = UINT8_MAX;
	static int64_t t47 = -6LL;

    t47 = (x341^(x342<<(x343>x344)));

    if (t47 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x345 = -9LL;
	static volatile int32_t x346 = 11;
	static int32_t x347 = INT32_MIN;
	static volatile int8_t x348 = INT8_MIN;
	int64_t t48 = -2790148LL;

    t48 = (x345^(x346<<(x347>x348)));

    if (t48 != -4LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x349 = 2572402714382699179LLU;
	int32_t x352 = INT32_MIN;
	volatile uint64_t t49 = 90648879455LLU;

    t49 = (x349^(x350<<(x351>x352)));

    if (t49 != 2572402714382699147LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x361 = -11584;
	uint16_t x362 = 143U;
	int16_t x363 = INT16_MIN;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t50 = -369396504;

    t50 = (x361^(x362<<(x363>x364)));

    if (t50 != -11697) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x367 = INT64_MIN;
	uint32_t x368 = UINT32_MAX;
	static volatile int32_t t51 = 98;

    t51 = (x365^(x366<<(x367>x368)));

    if (t51 != -23580) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x369 = UINT32_MAX;
	uint32_t x370 = 94U;
	int16_t x371 = INT16_MAX;
	volatile uint64_t x372 = 770923426441000049LLU;
	uint32_t t52 = 29U;

    t52 = (x369^(x370<<(x371>x372)));

    if (t52 != 4294967201U) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x373 = INT16_MIN;
	int8_t x374 = 0;
	static volatile int8_t x375 = INT8_MIN;
	int8_t x376 = 6;
	static int32_t t53 = 12621;

    t53 = (x373^(x374<<(x375>x376)));

    if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x377 = UINT8_MAX;
	static int32_t x379 = 907078741;
	volatile int16_t x380 = -10155;
	volatile uint64_t t54 = 4129193081LLU;

    t54 = (x377^(x378<<(x379>x380)));

    if (t54 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x385 = -3366;
	uint32_t x386 = UINT32_MAX;
	static int32_t x387 = INT32_MIN;
	uint64_t x388 = 158487LLU;
	uint32_t t55 = 27463U;

    t55 = (x385^(x386<<(x387>x388)));

    if (t55 != 3364U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x389 = INT64_MIN;
	volatile int8_t x390 = INT8_MAX;
	static volatile uint16_t x391 = UINT16_MAX;

    t56 = (x389^(x390<<(x391>x392)));

    if (t56 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x401 = -1;
	volatile int32_t x402 = 149612961;
	int8_t x403 = INT8_MIN;
	int32_t t57 = -11819;

    t57 = (x401^(x402<<(x403>x404)));

    if (t57 != -149612962) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x409 = INT16_MIN;
	uint8_t x410 = UINT8_MAX;
	static uint8_t x411 = UINT8_MAX;
	int8_t x412 = 1;
	volatile int32_t t58 = -27564;

    t58 = (x409^(x410<<(x411>x412)));

    if (t58 != -32258) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x422 = 1;
	uint32_t x423 = UINT32_MAX;
	volatile int32_t x424 = INT32_MAX;
	volatile int32_t t59 = -292;

    t59 = (x421^(x422<<(x423>x424)));

    if (t59 != -32766) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x433 = 2003LLU;
	volatile uint16_t x434 = UINT16_MAX;
	int64_t x435 = -1LL;
	static volatile int8_t x436 = INT8_MAX;
	uint64_t t60 = 1LLU;

    t60 = (x433^(x434<<(x435>x436)));

    if (t60 != 63532LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x437 = INT8_MIN;
	uint8_t x438 = 28U;
	volatile int8_t x439 = INT8_MIN;
	int32_t x440 = -23009446;
	int32_t t61 = -246;

    t61 = (x437^(x438<<(x439>x440)));

    if (t61 != -72) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x441 = 461LLU;
	uint32_t x442 = 28972U;
	int64_t x443 = INT64_MAX;
	volatile int8_t x444 = INT8_MAX;

    t62 = (x441^(x442<<(x443>x444)));

    if (t62 != 58261LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x445 = INT16_MIN;
	int16_t x446 = 310;
	static volatile int32_t t63 = -52961133;

    t63 = (x445^(x446<<(x447>x448)));

    if (t63 != -32148) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x454 = UINT8_MAX;
	uint32_t x455 = 17U;
	static int16_t x456 = -1;
	volatile uint64_t t64 = 7876691703532171819LLU;

    t64 = (x453^(x454<<(x455>x456)));

    if (t64 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x461 = INT16_MIN;
	uint8_t x462 = 10U;
	int8_t x463 = INT8_MAX;
	static int32_t x464 = INT32_MIN;

    t65 = (x461^(x462<<(x463>x464)));

    if (t65 != -32748) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x466 = 1437943LL;
	int32_t x467 = -103;
	int64_t x468 = 977938014746249716LL;
	int64_t t66 = 97933LL;

    t66 = (x465^(x466<<(x467>x468)));

    if (t66 != -1437944LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x478 = 1429U;
	int64_t x479 = -1391LL;
	int8_t x480 = INT8_MIN;
	uint32_t t67 = 11U;

    t67 = (x477^(x478<<(x479>x480)));

    if (t67 != 1429U) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x482 = INT8_MAX;
	uint32_t x484 = 30336253U;
	volatile int32_t t68 = -34;

    t68 = (x481^(x482<<(x483>x484)));

    if (t68 != 812) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x485 = INT16_MIN;
	int16_t x486 = 0;
	uint32_t x488 = 31974738U;
	int32_t t69 = -676664615;

    t69 = (x485^(x486<<(x487>x488)));

    if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x489 = -2607;
	uint32_t x490 = UINT32_MAX;
	uint16_t x491 = 889U;
	int16_t x492 = INT16_MIN;
	uint32_t t70 = 1968U;

    t70 = (x489^(x490<<(x491>x492)));

    if (t70 != 2607U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x494 = UINT8_MAX;
	int64_t x495 = INT64_MAX;

    t71 = (x493^(x494<<(x495>x496)));

    if (t71 != 511) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x497 = UINT64_MAX;
	volatile int32_t x499 = INT32_MAX;
	int64_t x500 = INT64_MIN;
	uint64_t t72 = 880318772690562LLU;

    t72 = (x497^(x498<<(x499>x500)));

    if (t72 != 18446744073709551557LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x501 = UINT32_MAX;
	uint64_t x502 = 7292402520348321LLU;
	static int16_t x504 = -614;
	uint64_t t73 = 642076946024848672LLU;

    t73 = (x501^(x502<<(x503>x504)));

    if (t73 != 14584804652503741LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x505 = UINT16_MAX;
	uint16_t x506 = 5U;
	int64_t x507 = -275801855335533LL;
	static int32_t x508 = INT32_MIN;
	static volatile int32_t t74 = -1532;

    t74 = (x505^(x506<<(x507>x508)));

    if (t74 != 65530) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x509 = UINT32_MAX;
	static int32_t x510 = INT32_MAX;
	uint32_t x511 = 887410U;
	uint64_t x512 = UINT64_MAX;
	uint32_t t75 = 60379486U;

    t75 = (x509^(x510<<(x511>x512)));

    if (t75 != 2147483648U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x513 = -1;
	volatile int8_t x514 = INT8_MAX;
	uint64_t x515 = UINT64_MAX;
	int32_t x516 = 59;
	static int32_t t76 = -9;

    t76 = (x513^(x514<<(x515>x516)));

    if (t76 != -255) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int32_t x521 = INT32_MIN;
	uint8_t x523 = 3U;
	static int16_t x524 = INT16_MAX;
	int32_t t77 = -5278;

    t77 = (x521^(x522<<(x523>x524)));

    if (t77 != -2147482635) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x537 = UINT16_MAX;
	uint8_t x538 = 12U;
	volatile int32_t t78 = -166982051;

    t78 = (x537^(x538<<(x539>x540)));

    if (t78 != 65511) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x542 = 5U;
	volatile uint8_t x543 = 20U;
	int8_t x544 = INT8_MAX;
	uint32_t t79 = 732912U;

    t79 = (x541^(x542<<(x543>x544)));

    if (t79 != 7U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x550 = UINT8_MAX;
	uint64_t x551 = UINT64_MAX;
	int32_t x552 = INT32_MIN;
	uint32_t t80 = 3U;

    t80 = (x549^(x550<<(x551>x552)));

    if (t80 != 83334763U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x565 = INT16_MIN;
	int8_t x566 = INT8_MAX;
	volatile int16_t x568 = INT16_MIN;

    t81 = (x565^(x566<<(x567>x568)));

    if (t81 != -32514) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x569 = INT32_MIN;
	volatile uint16_t x570 = 1002U;
	int16_t x571 = INT16_MIN;
	uint16_t x572 = 1995U;
	volatile int32_t t82 = -531080677;

    t82 = (x569^(x570<<(x571>x572)));

    if (t82 != -2147482646) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x586 = INT32_MAX;
	volatile int64_t t83 = -205144397145429046LL;

    t83 = (x585^(x586<<(x587>x588)));

    if (t83 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x589 = UINT8_MAX;
	uint16_t x591 = UINT16_MAX;
	volatile int32_t t84 = -2977790;

    t84 = (x589^(x590<<(x591>x592)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x605 = UINT32_MAX;
	int32_t x606 = 31;
	int32_t x607 = INT32_MAX;

    t85 = (x605^(x606<<(x607>x608)));

    if (t85 != 4294967233U) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x617 = 3699U;
	int64_t x618 = 58363177729524LL;
	static uint8_t x619 = 33U;
	volatile int16_t x620 = INT16_MAX;
	static volatile int64_t t86 = 0LL;

    t86 = (x617^(x618<<(x619>x620)));

    if (t86 != 58363177726855LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x621 = INT16_MIN;
	int32_t x622 = INT32_MAX;
	int64_t x623 = INT64_MIN;

    t87 = (x621^(x622<<(x623>x624)));

    if (t87 != -2147450881) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x625 = -358;
	int64_t x626 = 510821702LL;
	uint64_t x627 = UINT64_MAX;

    t88 = (x625^(x626<<(x627>x628)));

    if (t88 != -1021643754LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x630 = INT64_MAX;
	int8_t x631 = -3;
	volatile int64_t t89 = INT64_MIN;

    t89 = (x629^(x630<<(x631>x632)));

    if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x633 = 1783922391505239LL;
	int64_t x635 = INT64_MIN;
	uint16_t x636 = 4U;
	volatile int64_t t90 = -6LL;

    t90 = (x633^(x634<<(x635>x636)));

    if (t90 != 1783922391505192LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x637 = INT64_MAX;
	uint32_t x638 = 1U;
	int16_t x639 = INT16_MIN;
	volatile int32_t x640 = INT32_MIN;
	volatile int64_t t91 = 191206724671830942LL;

    t91 = (x637^(x638<<(x639>x640)));

    if (t91 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x653 = UINT32_MAX;
	static uint8_t x654 = UINT8_MAX;
	static uint64_t x655 = 332424945078LLU;
	int64_t x656 = -1LL;
	static uint32_t t92 = 13819877U;

    t92 = (x653^(x654<<(x655>x656)));

    if (t92 != 4294967040U) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x657 = INT64_MIN;
	uint64_t x658 = 408095819LLU;
	uint32_t x659 = UINT32_MAX;
	static volatile int32_t x660 = INT32_MIN;
	static volatile uint64_t t93 = 364260926LLU;

    t93 = (x657^(x658<<(x659>x660)));

    if (t93 != 9223372037670967446LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x665 = INT32_MIN;
	uint16_t x666 = 44U;
	int16_t x667 = -1;
	int32_t x668 = INT32_MAX;
	static volatile int32_t t94 = -25;

    t94 = (x665^(x666<<(x667>x668)));

    if (t94 != -2147483604) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x674 = 7;
	int16_t x675 = INT16_MIN;
	int8_t x676 = INT8_MIN;

    t95 = (x673^(x674<<(x675>x676)));

    if (t95 != 1209344U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x681 = 34094U;
	uint16_t x682 = UINT16_MAX;
	static uint32_t x683 = UINT32_MAX;
	static volatile uint32_t t96 = 357302400U;

    t96 = (x681^(x682<<(x683>x684)));

    if (t96 != 96976U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x689 = -1LL;
	uint32_t x690 = 1034792U;
	int32_t x691 = INT32_MIN;
	volatile uint8_t x692 = 2U;
	int64_t t97 = -321303700406367756LL;

    t97 = (x689^(x690<<(x691>x692)));

    if (t97 != -1034793LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x698 = UINT16_MAX;
	static int64_t x700 = -3LL;

    t98 = (x697^(x698<<(x699>x700)));

    if (t98 != 754783413) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x705 = UINT16_MAX;
	static uint16_t x706 = 14U;
	uint16_t x707 = 15U;
	volatile int32_t t99 = 230009;

    t99 = (x705^(x706<<(x707>x708)));

    if (t99 != 65507) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x709 = INT16_MAX;
	uint16_t x710 = 27587U;
	volatile int32_t t100 = 107;

    t100 = (x709^(x710<<(x711>x712)));

    if (t100 != 5180) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x721 = INT32_MIN;
	static uint8_t x722 = 6U;
	volatile uint32_t x723 = 31U;
	int32_t x724 = -508;
	int32_t t101 = 13447220;

    t101 = (x721^(x722<<(x723>x724)));

    if (t101 != -2147483642) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x725 = 5923133089825LLU;
	uint32_t x726 = 4U;
	uint8_t x727 = 2U;
	volatile int32_t x728 = -3646570;
	volatile uint64_t t102 = 2287LLU;

    t102 = (x725^(x726<<(x727>x728)));

    if (t102 != 5923133089833LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x729 = INT8_MAX;
	uint64_t x730 = 2LLU;
	static int16_t x731 = -1;
	uint16_t x732 = 0U;
	volatile uint64_t t103 = 19307138LLU;

    t103 = (x729^(x730<<(x731>x732)));

    if (t103 != 125LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x733 = UINT16_MAX;
	uint32_t x735 = UINT32_MAX;
	int16_t x736 = INT16_MIN;

    t104 = (x733^(x734<<(x735>x736)));

    if (t104 != 65281) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x737 = UINT64_MAX;
	volatile uint16_t x738 = 992U;
	static int16_t x739 = INT16_MIN;
	int16_t x740 = INT16_MIN;
	volatile uint64_t t105 = 186906472978129460LLU;

    t105 = (x737^(x738<<(x739>x740)));

    if (t105 != 18446744073709550623LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x745 = 2638U;
	uint32_t x746 = 2062829093U;

    t106 = (x745^(x746<<(x747>x748)));

    if (t106 != 2062830699U) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x749 = INT32_MIN;
	int64_t x752 = 57030991379811LL;

    t107 = (x749^(x750<<(x751>x752)));

    if (t107 != -2147450881) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x767 = 20U;
	int32_t x768 = INT32_MAX;
	volatile uint64_t t108 = 40304237390934962LLU;

    t108 = (x765^(x766<<(x767>x768)));

    if (t108 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x769 = INT8_MIN;
	int16_t x771 = INT16_MIN;
	uint64_t x772 = UINT64_MAX;
	volatile int32_t t109 = 38;

    t109 = (x769^(x770<<(x771>x772)));

    if (t109 != -65409) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x777 = 749656220U;
	static int16_t x778 = 3587;
	volatile uint8_t x779 = UINT8_MAX;
	int16_t x780 = -5;
	volatile uint32_t t110 = 101U;

    t110 = (x777^(x778<<(x779>x780)));

    if (t110 != 749651098U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x781 = 1132612335947030693LLU;
	volatile uint32_t x782 = 15U;
	int64_t x783 = -34741067LL;
	static uint64_t x784 = 1924542383809089762LLU;
	volatile uint64_t t111 = 2370244860036193826LLU;

    t111 = (x781^(x782<<(x783>x784)));

    if (t111 != 1132612335947030715LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x785 = 3;
	uint32_t x786 = UINT32_MAX;
	int32_t x787 = INT32_MIN;
	volatile uint32_t t112 = 139823716U;

    t112 = (x785^(x786<<(x787>x788)));

    if (t112 != 4294967292U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x789 = 5;
	uint32_t x790 = 27U;
	static volatile uint64_t x791 = UINT64_MAX;
	volatile int16_t x792 = -1;

    t113 = (x789^(x790<<(x791>x792)));

    if (t113 != 30U) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x793 = 12292;
	uint8_t x794 = 12U;
	volatile uint16_t x795 = UINT16_MAX;
	int64_t x796 = INT64_MAX;
	int32_t t114 = 380753;

    t114 = (x793^(x794<<(x795>x796)));

    if (t114 != 12296) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x798 = 355704998U;
	int8_t x799 = 29;
	uint8_t x800 = UINT8_MAX;
	static uint32_t t115 = 15712369U;

    t115 = (x797^(x798<<(x799>x800)));

    if (t115 != 3939246246U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x805 = UINT32_MAX;
	int16_t x807 = -1;
	uint64_t x808 = 3LLU;
	volatile uint32_t t116 = 24639U;

    t116 = (x805^(x806<<(x807>x808)));

    if (t116 != 2443339337U) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x813 = INT16_MIN;
	int8_t x815 = INT8_MAX;
	static uint64_t x816 = UINT64_MAX;
	uint64_t t117 = 3903058252114LLU;

    t117 = (x813^(x814<<(x815>x816)));

    if (t117 != 32767LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x817 = -1;
	uint32_t x818 = 12314U;
	volatile uint32_t x819 = UINT32_MAX;
	int16_t x820 = 0;

    t118 = (x817^(x818<<(x819>x820)));

    if (t118 != 4294942667U) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x825 = -3;
	static int8_t x826 = 23;
	uint64_t x827 = 2178522LLU;
	int8_t x828 = 0;
	volatile int32_t t119 = -973038253;

    t119 = (x825^(x826<<(x827>x828)));

    if (t119 != -45) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x829 = -1;
	static int8_t x832 = INT8_MAX;
	volatile int32_t t120 = 145756;

    t120 = (x829^(x830<<(x831>x832)));

    if (t120 != -3) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x833 = INT32_MAX;
	volatile uint32_t x834 = 318U;
	volatile uint32_t x835 = 650252U;
	uint8_t x836 = 17U;
	static uint32_t t121 = 1288772652U;

    t121 = (x833^(x834<<(x835>x836)));

    if (t121 != 2147483011U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x837 = 47U;
	int32_t x838 = 954;
	uint32_t x839 = UINT32_MAX;
	volatile int16_t x840 = 222;

    t122 = (x837^(x838<<(x839>x840)));

    if (t122 != 1883) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x841 = INT64_MAX;
	volatile uint64_t x842 = 16556429LLU;
	uint8_t x844 = 2U;
	uint64_t t123 = 4LLU;

    t123 = (x841^(x842<<(x843>x844)));

    if (t123 != 9223372036821662949LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x845 = UINT8_MAX;
	int32_t x846 = 227;
	int16_t x847 = INT16_MAX;
	int32_t t124 = 3459565;

    t124 = (x845^(x846<<(x847>x848)));

    if (t124 != 313) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x849 = INT64_MAX;
	static volatile int8_t x850 = 3;
	static int16_t x851 = 7;
	static int8_t x852 = -1;
	int64_t t125 = -1520449171061LL;

    t125 = (x849^(x850<<(x851>x852)));

    if (t125 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x853 = 81532LLU;
	int32_t x855 = 78795397;

    t126 = (x853^(x854<<(x855>x856)));

    if (t126 != 81522LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x870 = 463533U;
	static int32_t x871 = INT32_MAX;
	static uint32_t x872 = 1088859477U;
	uint32_t t127 = 0U;

    t127 = (x869^(x870<<(x871>x872)));

    if (t127 != 927043U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x877 = 772U;
	volatile int8_t x878 = INT8_MAX;
	uint64_t x879 = 524961866099343668LLU;
	static volatile int8_t x880 = 22;
	volatile uint32_t t128 = 1U;

    t128 = (x877^(x878<<(x879>x880)));

    if (t128 != 1018U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x893 = INT32_MIN;
	static int8_t x896 = INT8_MIN;
	int32_t t129 = 645358;

    t129 = (x893^(x894<<(x895>x896)));

    if (t129 != -1729533876) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x910 = INT64_MAX;
	uint8_t x911 = 19U;
	volatile int64_t t130 = INT64_MIN;

    t130 = (x909^(x910<<(x911>x912)));

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x913 = -1;
	volatile uint8_t x914 = 29U;
	int8_t x915 = INT8_MIN;
	int32_t t131 = -109904274;

    t131 = (x913^(x914<<(x915>x916)));

    if (t131 != -59) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x917 = -23;
	uint8_t x918 = 121U;
	volatile int32_t x919 = 61;
	volatile uint8_t x920 = UINT8_MAX;
	volatile int32_t t132 = 3;

    t132 = (x917^(x918<<(x919>x920)));

    if (t132 != -112) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x921 = UINT8_MAX;
	uint8_t x922 = UINT8_MAX;
	uint64_t x923 = 396741326783797LLU;
	uint64_t x924 = 342062056898LLU;

    t133 = (x921^(x922<<(x923>x924)));

    if (t133 != 257) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x933 = -1;
	uint8_t x934 = 3U;
	volatile uint64_t x935 = 32697182292304LLU;
	int64_t x936 = 914920832514152051LL;
	int32_t t134 = -489963169;

    t134 = (x933^(x934<<(x935>x936)));

    if (t134 != -4) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x937 = 1LL;
	static uint8_t x939 = UINT8_MAX;
	volatile int64_t t135 = 3297248LL;

    t135 = (x937^(x938<<(x939>x940)));

    if (t135 != 65535LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x942 = UINT64_MAX;
	int8_t x943 = -1;
	static volatile uint64_t x944 = 199291452373LLU;
	uint64_t t136 = 431392776666489LLU;

    t136 = (x941^(x942<<(x943>x944)));

    if (t136 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x945 = INT64_MIN;
	uint64_t x947 = 309810931142483511LLU;
	uint32_t x948 = UINT32_MAX;
	static volatile int64_t t137 = -973655401020390626LL;

    t137 = (x945^(x946<<(x947>x948)));

    if (t137 != -9223372036854644738LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint32_t x950 = 326U;
	int32_t x952 = -1;

    t138 = (x949^(x950<<(x951>x952)));

    if (t138 != 4294966643U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x965 = 2079564624U;
	int16_t x967 = INT16_MIN;
	uint8_t x968 = 7U;
	static int64_t t139 = 219955117513756LL;

    t139 = (x965^(x966<<(x967>x968)));

    if (t139 != 2079571808LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x969 = 739U;
	uint32_t x970 = UINT32_MAX;
	int32_t x971 = 439;
	volatile uint32_t t140 = 573325525U;

    t140 = (x969^(x970<<(x971>x972)));

    if (t140 != 4294966557U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x981 = INT32_MAX;
	int16_t x982 = INT16_MAX;
	uint8_t x983 = 4U;
	uint8_t x984 = UINT8_MAX;
	int32_t t141 = -12;

    t141 = (x981^(x982<<(x983>x984)));

    if (t141 != 2147450880) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x985 = INT16_MIN;
	static int16_t x987 = INT16_MAX;
	static volatile int32_t t142 = -6596659;

    t142 = (x985^(x986<<(x987>x988)));

    if (t142 != -32641) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x993 = -1LL;
	int64_t x994 = INT64_MAX;
	volatile uint32_t x995 = 14U;
	int64_t x996 = 2011323241LL;
	static volatile int64_t t143 = INT64_MIN;

    t143 = (x993^(x994<<(x995>x996)));

    if (t143 != INT64_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x997 = 67LL;
	int64_t x998 = INT64_MAX;
	int64_t x999 = -1LL;
	static uint32_t x1000 = UINT32_MAX;
	int64_t t144 = -37LL;

    t144 = (x997^(x998<<(x999>x1000)));

    if (t144 != 9223372036854775740LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x1005 = -1;
	int32_t x1007 = INT32_MIN;
	static int64_t x1008 = INT64_MAX;
	int32_t t145 = 9692151;

    t145 = (x1005^(x1006<<(x1007>x1008)));

    if (t145 != -2) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x1009 = 66726044;
	int64_t x1012 = INT64_MIN;

    t146 = (x1009^(x1010<<(x1011>x1012)));

    if (t146 != 18446744073642825570LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x1013 = INT16_MAX;
	uint16_t x1014 = 277U;
	int64_t x1015 = 17789325222LL;
	volatile int16_t x1016 = -1;
	volatile int32_t t147 = -872;

    t147 = (x1013^(x1014<<(x1015>x1016)));

    if (t147 != 32213) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x1017 = 31065538U;
	int8_t x1019 = INT8_MIN;
	static int64_t x1020 = -1LL;

    t148 = (x1017^(x1018<<(x1019>x1020)));

    if (t148 != 31065405U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x1037 = 308365274546269LLU;
	static int8_t x1039 = 2;
	volatile int16_t x1040 = -1;
	volatile uint64_t t149 = 52228LLU;

    t149 = (x1037^(x1038<<(x1039>x1040)));

    if (t149 != 308365274546595LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x1041 = UINT16_MAX;
	volatile int64_t x1042 = INT64_MAX;
	uint32_t x1043 = UINT32_MAX;
	int16_t x1044 = -1;
	volatile int64_t t150 = -28122LL;

    t150 = (x1041^(x1042<<(x1043>x1044)));

    if (t150 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x1049 = 14580LLU;
	uint64_t x1050 = 3565955LLU;
	uint16_t x1051 = 13U;
	uint32_t x1052 = UINT32_MAX;

    t151 = (x1049^(x1050<<(x1051>x1052)));

    if (t151 != 3559799LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x1053 = 526;
	int32_t x1054 = INT32_MAX;
	static int32_t x1055 = INT32_MIN;
	int32_t x1056 = 187;
	int32_t t152 = 3649;

    t152 = (x1053^(x1054<<(x1055>x1056)));

    if (t152 != 2147483121) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x1065 = 14944;
	uint32_t x1066 = UINT32_MAX;
	int8_t x1067 = INT8_MIN;
	uint32_t x1068 = 52U;
	static volatile uint32_t t153 = 2409277U;

    t153 = (x1065^(x1066<<(x1067>x1068)));

    if (t153 != 4294952350U) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x1069 = 121U;
	int64_t x1070 = INT64_MAX;
	static int32_t x1071 = -7696357;
	uint16_t x1072 = UINT16_MAX;
	int64_t t154 = 32103589822265396LL;

    t154 = (x1069^(x1070<<(x1071>x1072)));

    if (t154 != 9223372036854775686LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x1077 = 25U;
	volatile uint16_t x1078 = 415U;
	volatile int8_t x1079 = INT8_MIN;
	static volatile int32_t t155 = 3917083;

    t155 = (x1077^(x1078<<(x1079>x1080)));

    if (t155 != 390) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x1089 = -1LL;
	int64_t x1090 = INT64_MAX;
	volatile uint64_t x1091 = 369241LLU;
	static volatile int16_t x1092 = INT16_MIN;
	int64_t t156 = INT64_MIN;

    t156 = (x1089^(x1090<<(x1091>x1092)));

    if (t156 != INT64_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1093 = INT8_MAX;
	static int32_t x1095 = 861709;
	volatile int32_t x1096 = INT32_MAX;
	int32_t t157 = -76347;

    t157 = (x1093^(x1094<<(x1095>x1096)));

    if (t157 != 219) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1109 = -3769229646LL;
	uint8_t x1110 = 2U;
	int64_t x1111 = INT64_MIN;
	uint16_t x1112 = 493U;

    t158 = (x1109^(x1110<<(x1111>x1112)));

    if (t158 != -3769229648LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x1118 = INT64_MAX;
	int64_t x1120 = INT64_MAX;
	int64_t t159 = 768171433LL;

    t159 = (x1117^(x1118<<(x1119>x1120)));

    if (t159 != 9223372036852740865LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x1133 = INT64_MIN;
	static volatile uint64_t x1134 = 6547311388325138417LLU;
	static int32_t x1135 = INT32_MIN;
	int16_t x1136 = INT16_MAX;

    t160 = (x1133^(x1134<<(x1135>x1136)));

    if (t160 != 15770683425179914225LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1149 = INT8_MAX;
	int16_t x1150 = 252;
	int8_t x1151 = -1;
	volatile uint8_t x1152 = UINT8_MAX;
	volatile int32_t t161 = 110;

    t161 = (x1149^(x1150<<(x1151>x1152)));

    if (t161 != 131) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1161 = 7U;
	static uint32_t x1162 = 3819789U;
	int16_t x1163 = INT16_MIN;
	uint32_t x1164 = 52189U;
	uint32_t t162 = 19490455U;

    t162 = (x1161^(x1162<<(x1163>x1164)));

    if (t162 != 7639581U) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1169 = INT32_MIN;
	uint32_t x1170 = 311U;
	uint64_t x1171 = 4LLU;
	uint16_t x1172 = 16U;

    t163 = (x1169^(x1170<<(x1171>x1172)));

    if (t163 != 2147483959U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x1177 = INT64_MIN;
	uint8_t x1178 = 0U;
	static uint32_t x1179 = 191992U;
	volatile int32_t x1180 = INT32_MIN;
	static int64_t t164 = INT64_MIN;

    t164 = (x1177^(x1178<<(x1179>x1180)));

    if (t164 != INT64_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x1189 = UINT64_MAX;
	int16_t x1190 = 11655;
	volatile int32_t x1192 = INT32_MIN;
	uint64_t t165 = 24314488651522LLU;

    t165 = (x1189^(x1190<<(x1191>x1192)));

    if (t165 != 18446744073709528305LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x1198 = INT8_MAX;
	int32_t x1199 = INT32_MAX;
	int16_t x1200 = INT16_MIN;
	int32_t t166 = -1159282;

    t166 = (x1197^(x1198<<(x1199>x1200)));

    if (t166 != 408) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x1201 = 32362;
	uint8_t x1202 = 74U;
	int16_t x1203 = -1;
	int8_t x1204 = INT8_MIN;

    t167 = (x1201^(x1202<<(x1203>x1204)));

    if (t167 != 32510) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1209 = INT8_MAX;
	uint32_t x1210 = 39265U;
	int8_t x1211 = INT8_MIN;
	static volatile uint32_t t168 = 1U;

    t168 = (x1209^(x1210<<(x1211>x1212)));

    if (t168 != 39198U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x1214 = 1658U;
	volatile uint64_t x1215 = 1024145713994LLU;
	int16_t x1216 = INT16_MIN;
	volatile int64_t t169 = 63661886015516LL;

    t169 = (x1213^(x1214<<(x1215>x1216)));

    if (t169 != -3413099178703LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1217 = INT16_MAX;
	uint8_t x1219 = 3U;
	uint32_t x1220 = UINT32_MAX;
	static volatile int32_t t170 = 390;

    t170 = (x1217^(x1218<<(x1219>x1220)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x1221 = -1LL;
	uint16_t x1222 = 4357U;
	volatile int32_t x1223 = INT32_MIN;
	int64_t t171 = 145263915365711342LL;

    t171 = (x1221^(x1222<<(x1223>x1224)));

    if (t171 != -4358LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x1225 = INT16_MIN;
	int8_t x1226 = INT8_MAX;
	int16_t x1228 = INT16_MAX;

    t172 = (x1225^(x1226<<(x1227>x1228)));

    if (t172 != -32514) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x1229 = 4381LLU;
	volatile int64_t x1230 = 55205042324882LL;
	static int64_t x1231 = INT64_MAX;
	int64_t x1232 = INT64_MAX;
	static volatile uint64_t t173 = 720766328LLU;

    t173 = (x1229^(x1230<<(x1231>x1232)));

    if (t173 != 55205042328719LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x1237 = UINT64_MAX;
	int16_t x1239 = INT16_MAX;
	volatile int64_t x1240 = -1LL;

    t174 = (x1237^(x1238<<(x1239>x1240)));

    if (t174 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x1241 = INT32_MAX;
	volatile uint32_t x1242 = 96653602U;
	int8_t x1243 = INT8_MIN;

    t175 = (x1241^(x1242<<(x1243>x1244)));

    if (t175 != 2050830045U) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x1249 = 66126001712599LLU;
	static int64_t x1250 = 11951100373343547LL;
	int64_t x1251 = 1LL;
	uint64_t t176 = 5835516036655LLU;

    t176 = (x1249^(x1250<<(x1251>x1252)));

    if (t176 != 23880056284420001LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1253 = UINT32_MAX;
	static uint8_t x1254 = 4U;
	uint64_t x1255 = 59785244211125LLU;
	volatile uint32_t t177 = 15595230U;

    t177 = (x1253^(x1254<<(x1255>x1256)));

    if (t177 != 4294967291U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x1261 = -20;
	volatile int32_t x1262 = INT32_MAX;
	int8_t x1263 = -1;
	int8_t x1264 = -1;
	volatile int32_t t178 = 99062;

    t178 = (x1261^(x1262<<(x1263>x1264)));

    if (t178 != -2147483629) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x1269 = INT16_MAX;
	int16_t x1270 = 5261;
	int32_t x1272 = -1;
	volatile int32_t t179 = -42955;

    t179 = (x1269^(x1270<<(x1271>x1272)));

    if (t179 != 27506) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1277 = INT8_MIN;
	uint64_t x1278 = UINT64_MAX;
	int64_t x1279 = 833571126922951016LL;
	volatile uint64_t t180 = 1973LLU;

    t180 = (x1277^(x1278<<(x1279>x1280)));

    if (t180 != 126LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x1285 = 0;
	int16_t x1286 = 4;
	volatile uint64_t x1287 = 5483443880918LLU;
	uint16_t x1288 = UINT16_MAX;
	static int32_t t181 = 3;

    t181 = (x1285^(x1286<<(x1287>x1288)));

    if (t181 != 8) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x1289 = -1;
	uint32_t x1290 = 62513552U;
	uint8_t x1291 = UINT8_MAX;
	uint32_t x1292 = 376U;
	uint32_t t182 = 10660U;

    t182 = (x1289^(x1290<<(x1291>x1292)));

    if (t182 != 4232453743U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1293 = 19362;
	volatile int64_t x1294 = INT64_MAX;
	int32_t x1295 = -1;
	uint32_t x1296 = UINT32_MAX;
	int64_t t183 = 29797716LL;

    t183 = (x1293^(x1294<<(x1295>x1296)));

    if (t183 != 9223372036854756445LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1301 = 1U;
	uint16_t x1302 = 70U;
	static int64_t x1303 = -191852296LL;
	uint64_t x1304 = 1180LLU;
	int32_t t184 = -48693;

    t184 = (x1301^(x1302<<(x1303>x1304)));

    if (t184 != 141) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1305 = 3U;
	static volatile uint32_t x1306 = UINT32_MAX;
	uint32_t x1307 = 79U;
	uint32_t x1308 = 1525545U;

    t185 = (x1305^(x1306<<(x1307>x1308)));

    if (t185 != 4294967292U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x1313 = -1;
	uint8_t x1314 = UINT8_MAX;
	int16_t x1315 = INT16_MIN;
	int16_t x1316 = INT16_MAX;
	static volatile int32_t t186 = 185473;

    t186 = (x1313^(x1314<<(x1315>x1316)));

    if (t186 != -256) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1317 = INT8_MAX;
	uint16_t x1318 = 1237U;
	volatile uint16_t x1319 = 3U;
	volatile int8_t x1320 = INT8_MIN;
	int32_t t187 = -1018811;

    t187 = (x1317^(x1318<<(x1319>x1320)));

    if (t187 != 2517) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1325 = 1LL;
	int8_t x1326 = 1;
	static uint32_t x1327 = 126302U;
	uint8_t x1328 = UINT8_MAX;
	volatile int64_t t188 = 80187204887284LL;

    t188 = (x1325^(x1326<<(x1327>x1328)));

    if (t188 != 3LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x1333 = 0;
	int16_t x1335 = -1;
	int32_t x1336 = -1972624;
	volatile int32_t t189 = 206675;

    t189 = (x1333^(x1334<<(x1335>x1336)));

    if (t189 != 254) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x1337 = -1;
	uint64_t x1339 = 36003218948492744LLU;
	static int8_t x1340 = -1;
	int32_t t190 = -231391;

    t190 = (x1337^(x1338<<(x1339>x1340)));

    if (t190 != -65536) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1341 = 11U;
	uint32_t x1343 = UINT32_MAX;
	int8_t x1344 = INT8_MIN;
	volatile uint32_t t191 = 1716181273U;

    t191 = (x1341^(x1342<<(x1343>x1344)));

    if (t191 != 167087361U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1345 = UINT8_MAX;
	static uint16_t x1346 = 12U;
	static int32_t x1348 = -240;

    t192 = (x1345^(x1346<<(x1347>x1348)));

    if (t192 != 231) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1349 = INT8_MAX;
	int64_t x1350 = INT64_MAX;
	static int8_t x1351 = INT8_MIN;
	uint16_t x1352 = 30U;

    t193 = (x1349^(x1350<<(x1351>x1352)));

    if (t193 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1357 = 3;
	volatile int16_t x1358 = INT16_MAX;
	static int32_t x1359 = -1;
	volatile uint16_t x1360 = 76U;
	volatile int32_t t194 = 10021;

    t194 = (x1357^(x1358<<(x1359>x1360)));

    if (t194 != 32764) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x1361 = 12715U;
	int16_t x1363 = -459;
	uint64_t x1364 = UINT64_MAX;
	int32_t t195 = 3400;

    t195 = (x1361^(x1362<<(x1363>x1364)));

    if (t195 != 12707) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1366 = UINT8_MAX;
	int32_t x1367 = 15596;
	int64_t x1368 = INT64_MAX;
	static int64_t t196 = 14543291LL;

    t196 = (x1365^(x1366<<(x1367>x1368)));

    if (t196 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1381 = -15LL;
	int32_t x1382 = INT32_MAX;
	static uint16_t x1383 = 3U;
	volatile uint32_t x1384 = UINT32_MAX;
	volatile int64_t t197 = -9246811616647298LL;

    t197 = (x1381^(x1382<<(x1383>x1384)));

    if (t197 != -2147483634LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x1397 = INT8_MAX;
	uint16_t x1398 = 38U;
	int16_t x1400 = INT16_MIN;
	static volatile int32_t t198 = 141077;

    t198 = (x1397^(x1398<<(x1399>x1400)));

    if (t198 != 51) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x1401 = 874511433LLU;
	static volatile int16_t x1402 = 211;
	volatile uint64_t x1403 = UINT64_MAX;

    t199 = (x1401^(x1402<<(x1403>x1404)));

    if (t199 != 874511855LLU) { NG(); } else { ; }
	
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


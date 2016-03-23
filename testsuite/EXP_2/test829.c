
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

static volatile int8_t x7 = INT8_MIN;
int8_t x8 = 58;
int8_t x10 = -16;
int64_t x13 = INT64_MIN;
int32_t x21 = INT32_MAX;
int64_t x31 = INT64_MIN;
static int16_t x34 = INT16_MIN;
uint32_t x37 = 666613541U;
int16_t x43 = INT16_MIN;
volatile int32_t x44 = INT32_MAX;
volatile int32_t t8 = -33252254;
volatile int8_t x46 = -14;
int64_t x47 = INT64_MAX;
int64_t t9 = -3581458973208452105LL;
volatile int32_t t10 = 15331;
static uint16_t x63 = 1318U;
uint64_t t11 = 12038622LLU;
int8_t x80 = -2;
int8_t x81 = -56;
int64_t t14 = 28937LL;
uint64_t t15 = 1569628262LLU;
volatile uint64_t t18 = 23496128782131LLU;
volatile uint8_t x111 = UINT8_MAX;
uint32_t t19 = 11857U;
int16_t x124 = 410;
uint64_t x126 = 13004745419LLU;
static uint64_t x136 = 0LLU;
static volatile int16_t x141 = INT16_MIN;
uint32_t x142 = UINT32_MAX;
uint64_t t24 = 509028713260LLU;
int8_t x145 = -1;
volatile int32_t t25 = 236487;
uint8_t x150 = 3U;
uint32_t t26 = 115815U;
uint8_t x153 = 30U;
static int8_t x155 = INT8_MAX;
int64_t x156 = -1LL;
int32_t x172 = -1;
int64_t x186 = -1LL;
volatile uint64_t t32 = 108LLU;
volatile int16_t x211 = INT16_MAX;
int8_t x218 = INT8_MIN;
static int32_t x231 = INT32_MAX;
volatile int64_t x232 = -3947263942523LL;
int64_t x241 = INT64_MAX;
int16_t x248 = -3521;
volatile uint8_t x254 = 58U;
volatile uint16_t x261 = 37U;
volatile int64_t x263 = INT64_MAX;
int64_t t41 = -4317747532324100LL;
int16_t x277 = -13757;
uint32_t x292 = UINT32_MAX;
volatile uint32_t x303 = UINT32_MAX;
static volatile uint8_t x319 = 9U;
int8_t x320 = INT8_MAX;
uint32_t x322 = 305U;
int64_t x323 = INT64_MIN;
int16_t x324 = -1;
volatile uint64_t t51 = 151337453228425418LLU;
uint64_t x338 = UINT64_MAX;
static int16_t x343 = -2;
static int8_t x344 = 0;
uint64_t t55 = 112234463889120LLU;
uint64_t x353 = 10630188535861029LLU;
volatile int8_t x365 = 0;
int8_t x377 = 0;
int64_t x385 = INT64_MIN;
volatile int64_t t60 = -548164LL;
int16_t x394 = -3;
int8_t x396 = -1;
int32_t x402 = -1;
int8_t x409 = INT8_MIN;
int64_t x429 = -43242LL;
static uint8_t x431 = 5U;
int8_t x432 = -1;
volatile uint64_t t67 = 57LLU;
int16_t x443 = INT16_MIN;
uint64_t x453 = 744174847LLU;
int32_t x465 = INT32_MIN;
int64_t x475 = -2110736884557LL;
uint32_t x483 = 2451U;
static volatile uint64_t x484 = 52453LLU;
static volatile int8_t x491 = INT8_MAX;
int64_t x497 = INT64_MIN;
uint32_t x499 = 173502U;
int32_t x501 = 684;
int32_t x504 = INT32_MIN;
volatile uint8_t x508 = 116U;
volatile int64_t x511 = INT64_MAX;
static uint64_t t82 = 368106842284LLU;
int32_t t83 = 69020239;
static int32_t x530 = 672;
int64_t x533 = INT64_MAX;
int64_t x535 = -134551412382LL;
static int64_t x539 = INT64_MIN;
static int32_t x543 = INT32_MAX;
int16_t x563 = -490;
uint32_t x570 = UINT32_MAX;
int16_t x577 = -319;
static uint64_t t96 = 354401015645LLU;
static int16_t x610 = INT16_MIN;
static uint32_t x620 = 183516U;
static uint16_t x624 = 748U;
static int16_t x630 = -1;
static uint64_t t101 = 178415238518216LLU;
int8_t x637 = -1;
static volatile int16_t x645 = 1;
int8_t x646 = INT8_MAX;
int8_t x664 = -2;
int16_t x666 = -1;
int32_t x667 = INT32_MIN;
uint64_t t108 = 1LLU;
int16_t x677 = -66;
int8_t x685 = INT8_MIN;
int64_t x687 = INT64_MIN;
int32_t x689 = INT32_MAX;
static int16_t x690 = -1;
uint64_t x713 = UINT64_MAX;
int32_t x714 = INT32_MAX;
int16_t x716 = 0;
int16_t x720 = INT16_MIN;
int16_t x728 = -11;
static int32_t x731 = 8873;
int16_t x741 = INT16_MIN;
uint64_t x744 = UINT64_MAX;
uint64_t t120 = 2794LLU;
static int16_t x763 = INT16_MAX;
int16_t x766 = INT16_MAX;
static uint32_t x767 = 8942U;
int64_t t124 = -85LL;
static volatile uint32_t x777 = 46907377U;
int64_t x791 = -69649774536LL;
volatile int64_t t126 = -5395LL;
volatile uint64_t t127 = 415529467418LLU;
int16_t x799 = -670;
static int16_t x804 = -1;
int64_t x809 = -5237056511754893LL;
int16_t x813 = INT16_MAX;
int8_t x822 = 2;
int32_t x829 = INT32_MIN;
int16_t x830 = INT16_MIN;
uint16_t x835 = UINT16_MAX;
volatile uint64_t x843 = 3746LLU;
int8_t x844 = INT8_MAX;
static volatile int64_t x846 = -1LL;
uint16_t x847 = 15U;
int32_t x848 = 2586007;
static uint16_t x860 = UINT16_MAX;
uint64_t x873 = UINT64_MAX;
int64_t x874 = INT64_MIN;
uint8_t x882 = UINT8_MAX;
uint8_t x883 = 41U;
int32_t x887 = INT32_MAX;
uint64_t x888 = 184143936LLU;
volatile uint64_t t142 = 53LLU;
volatile int64_t x906 = 2065118376881289LL;
uint8_t x909 = UINT8_MAX;
uint16_t x913 = UINT16_MAX;
int32_t x922 = 5;
uint16_t x932 = 7450U;
volatile uint32_t t148 = 100U;
uint8_t x941 = 1U;
volatile int32_t t150 = -1184;
int8_t x971 = INT8_MIN;
int16_t x972 = INT16_MIN;
static volatile int32_t t155 = 127837;
int16_t x981 = 7;
static int64_t x996 = -1LL;
volatile int64_t x998 = 65723054328141LL;
int8_t x999 = INT8_MIN;
volatile int64_t x1001 = 312LL;
volatile int64_t x1010 = 16591153498LL;
uint32_t t165 = 3448503U;
static int16_t x1032 = INT16_MIN;
volatile int32_t t166 = -3174441;
static uint64_t x1049 = 9778095LLU;
static int32_t x1054 = -936500643;
int8_t x1056 = 0;
static uint16_t x1061 = 18075U;
int8_t x1064 = -61;
int64_t x1074 = INT64_MIN;
int16_t x1083 = INT16_MIN;
volatile int64_t t174 = -12474LL;
int32_t x1106 = INT32_MIN;
volatile uint64_t x1142 = 62455111487LLU;
int8_t x1143 = INT8_MAX;
int8_t x1144 = 3;
static volatile int16_t x1159 = 3112;
static volatile uint64_t t186 = 2116576937LLU;
static uint8_t x1197 = UINT8_MAX;
volatile int64_t x1200 = -117463275069729322LL;
uint16_t x1209 = UINT16_MAX;
static int8_t x1210 = 1;
uint32_t t190 = 95106U;
int16_t x1214 = INT16_MIN;
int16_t x1225 = INT16_MAX;
int16_t x1231 = INT16_MIN;
uint64_t t196 = 75LLU;
volatile uint32_t x1241 = UINT32_MAX;
int16_t x1247 = INT16_MIN;


void f0(void) {
    	volatile int16_t x5 = -1;
	volatile int64_t x6 = 4084148807LL;
	int64_t t0 = -509962549284LL;

    t0 = ((x5/(x6%x7))*x8);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x9 = -1LL;
	volatile uint16_t x11 = UINT16_MAX;
	volatile int64_t x12 = -519395LL;
	volatile int64_t t1 = -130847226LL;

    t1 = ((x9/(x10%x11))*x12);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x14 = 26767815;
	int32_t x15 = 4019076;
	static int8_t x16 = -3;
	int64_t t2 = -912514159LL;

    t2 = ((x13/(x14%x15))*x16);

    if (t2 != 10428334842951LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = -1;
	uint64_t x18 = 4313694LLU;
	volatile uint16_t x19 = 509U;
	int8_t x20 = INT8_MIN;
	volatile uint64_t t3 = 4370969419437325219LLU;

    t3 = ((x17/(x18%x19))*x20);

    if (t3 != 12929960799329124992LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x22 = 1874U;
	static int32_t x23 = -6234;
	uint32_t x24 = UINT32_MAX;
	volatile uint32_t t4 = 716248395U;

    t4 = ((x21/(x22%x23))*x24);

    if (t4 != 4293821361U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x29 = 125U;
	int16_t x30 = INT16_MIN;
	int32_t x32 = -3260893;
	volatile int64_t t5 = 21LL;

    t5 = ((x29/(x30%x31))*x32);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x33 = -1;
	int8_t x35 = INT8_MAX;
	static int8_t x36 = INT8_MIN;
	static int32_t t6 = 746253;

    t6 = ((x33/(x34%x35))*x36);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x38 = -1LL;
	static uint16_t x39 = 22U;
	volatile uint64_t x40 = 226LLU;
	volatile uint64_t t7 = 31418587074LLU;

    t7 = ((x37/(x38%x39))*x40);

    if (t7 != 18446743923054891350LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x41 = -1;
	volatile int8_t x42 = INT8_MAX;

    t8 = ((x41/(x42%x43))*x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x45 = -58;
	int64_t x48 = -1LL;

    t9 = ((x45/(x46%x47))*x48);

    if (t9 != -4LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x57 = 752;
	int8_t x58 = INT8_MIN;
	int8_t x59 = -15;
	int8_t x60 = 7;

    t10 = ((x57/(x58%x59))*x60);

    if (t10 != -658) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x61 = UINT64_MAX;
	volatile uint32_t x62 = 1U;
	volatile int8_t x64 = INT8_MIN;

    t11 = ((x61/(x62%x63))*x64);

    if (t11 != 128LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x73 = -131177LL;
	static int16_t x74 = -7020;
	static int8_t x75 = INT8_MAX;
	static int8_t x76 = -23;
	int64_t t12 = 6517508774696017LL;

    t12 = ((x73/(x74%x75))*x76);

    if (t12 != -86181LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x77 = INT16_MAX;
	int16_t x78 = -319;
	uint64_t x79 = 792760924006LLU;
	volatile uint64_t t13 = 49281586348400351LLU;

    t13 = ((x77/(x78%x79))*x80);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x82 = -1LL;
	int64_t x83 = INT64_MIN;
	uint8_t x84 = 90U;

    t14 = ((x81/(x82%x83))*x84);

    if (t14 != 5040LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x85 = INT64_MIN;
	int32_t x86 = INT32_MIN;
	static uint64_t x87 = UINT64_MAX;
	static volatile int64_t x88 = INT64_MIN;

    t15 = ((x85/(x86%x87))*x88);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x93 = 3U;
	volatile int64_t x94 = 41341324LL;
	int16_t x95 = INT16_MIN;
	uint16_t x96 = 816U;
	int64_t t16 = 51058016LL;

    t16 = ((x93/(x94%x95))*x96);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x97 = UINT8_MAX;
	uint32_t x98 = UINT32_MAX;
	volatile int32_t x99 = -251776182;
	int16_t x100 = INT16_MAX;
	uint32_t t17 = 0U;

    t17 = ((x97/(x98%x99))*x100);

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x105 = -1;
	uint32_t x106 = 2U;
	uint64_t x107 = 138529262615047200LLU;
	int16_t x108 = -7774;

    t18 = ((x105/(x106%x107))*x108);

    if (t18 != 7774LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x109 = 15751836U;
	int32_t x110 = INT32_MIN;
	static volatile uint32_t x112 = UINT32_MAX;

    t19 = ((x109/(x110%x111))*x112);

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x117 = 7U;
	int8_t x118 = INT8_MIN;
	uint32_t x119 = 54512U;
	uint32_t x120 = 3U;
	volatile uint32_t t20 = 26926U;

    t20 = ((x117/(x118%x119))*x120);

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x121 = 2191636646154655730LLU;
	volatile int8_t x122 = -1;
	uint32_t x123 = 49489781U;
	static uint64_t t21 = 39560038885047LLU;

    t21 = ((x121/(x122%x123))*x124);

    if (t21 != 23131546129540LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x125 = 182251;
	int16_t x127 = -1295;
	uint8_t x128 = 63U;
	uint64_t t22 = 2491399045029LLU;

    t22 = ((x125/(x126%x127))*x128);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x133 = 513399952U;
	int32_t x134 = -32259546;
	int64_t x135 = INT64_MIN;
	uint64_t t23 = 2413694712611375LLU;

    t23 = ((x133/(x134%x135))*x136);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x143 = UINT64_MAX;
	static int32_t x144 = -142083398;

    t24 = ((x141/(x142%x143))*x144);

    if (t24 != 17836500525994999808LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x146 = -1;
	volatile int32_t x147 = 732023561;
	int8_t x148 = INT8_MAX;

    t25 = ((x145/(x146%x147))*x148);

    if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x149 = INT8_MIN;
	static volatile int8_t x151 = INT8_MIN;
	static uint32_t x152 = 64509U;

    t26 = ((x149/(x150%x151))*x152);

    if (t26 != 4292257918U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x154 = 3U;
	volatile int64_t t27 = 0LL;

    t27 = ((x153/(x154%x155))*x156);

    if (t27 != -10LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x169 = INT32_MAX;
	int64_t x170 = INT64_MAX;
	int8_t x171 = INT8_MIN;
	volatile int64_t t28 = 116776LL;

    t28 = ((x169/(x170%x171))*x172);

    if (t28 != -16909320LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x173 = 77U;
	int8_t x174 = -1;
	volatile int32_t x175 = 161010995;
	int16_t x176 = INT16_MIN;
	int32_t t29 = 10;

    t29 = ((x173/(x174%x175))*x176);

    if (t29 != 2523136) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x185 = INT8_MAX;
	static volatile int32_t x187 = INT32_MIN;
	int16_t x188 = 10;
	int64_t t30 = -12LL;

    t30 = ((x185/(x186%x187))*x188);

    if (t30 != -1270LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x189 = INT32_MAX;
	uint64_t x190 = 3395LLU;
	uint32_t x191 = 2U;
	int16_t x192 = -1;
	uint64_t t31 = 4102LLU;

    t31 = ((x189/(x190%x191))*x192);

    if (t31 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x201 = INT64_MIN;
	int8_t x202 = INT8_MIN;
	static uint16_t x203 = 14495U;
	static uint64_t x204 = 61606018228969LLU;

    t32 = ((x201/(x202%x203))*x204);

    if (t32 != 16789419410837209088LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x209 = 20495U;
	int32_t x210 = INT32_MIN;
	int16_t x212 = INT16_MAX;
	uint32_t t33 = 187988341U;

    t33 = ((x209/(x210%x211))*x212);

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x217 = 71191U;
	int64_t x219 = -221LL;
	static uint64_t x220 = 116763178LLU;
	static uint64_t t34 = 490278018LLU;

    t34 = ((x217/(x218%x219))*x220);

    if (t34 != 18446744008789224648LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x225 = 417620U;
	uint32_t x226 = UINT32_MAX;
	int64_t x227 = INT64_MIN;
	static volatile int32_t x228 = -1;
	int64_t t35 = -219522777LL;

    t35 = ((x225/(x226%x227))*x228);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x229 = -644;
	static int8_t x230 = -1;
	static volatile int64_t t36 = -765556347527531355LL;

    t36 = ((x229/(x230%x231))*x232);

    if (t36 != -2542037978984812LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x242 = -3LL;
	uint64_t x243 = 37872LLU;
	int64_t x244 = INT64_MIN;
	uint64_t t37 = 61683689LLU;

    t37 = ((x241/(x242%x243))*x244);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x245 = 0U;
	int8_t x246 = INT8_MIN;
	static int32_t x247 = INT32_MIN;
	int32_t t38 = 48770413;

    t38 = ((x245/(x246%x247))*x248);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x253 = 3;
	int8_t x255 = INT8_MIN;
	int8_t x256 = 53;
	volatile int32_t t39 = -24065295;

    t39 = ((x253/(x254%x255))*x256);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x257 = -1LL;
	int16_t x258 = -1;
	volatile int32_t x259 = INT32_MAX;
	static int64_t x260 = -1LL;
	volatile int64_t t40 = -589323540307800833LL;

    t40 = ((x257/(x258%x259))*x260);

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x262 = 98;
	int64_t x264 = INT64_MIN;

    t41 = ((x261/(x262%x263))*x264);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x265 = 0;
	volatile int64_t x266 = 1LL;
	int16_t x267 = 7;
	volatile uint32_t x268 = 1U;
	int64_t t42 = 60063459627296LL;

    t42 = ((x265/(x266%x267))*x268);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x273 = 1U;
	volatile int64_t x274 = -1LL;
	static int64_t x275 = INT64_MIN;
	static volatile int32_t x276 = 37;
	int64_t t43 = 7LL;

    t43 = ((x273/(x274%x275))*x276);

    if (t43 != -37LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x278 = INT32_MIN;
	int32_t x279 = INT32_MAX;
	int32_t x280 = -1;
	int32_t t44 = 19568;

    t44 = ((x277/(x278%x279))*x280);

    if (t44 != -13757) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x289 = -183393001;
	int8_t x290 = INT8_MIN;
	uint16_t x291 = 3U;
	volatile uint32_t t45 = 2467356U;

    t45 = ((x289/(x290%x291))*x292);

    if (t45 != 4203270796U) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x301 = 1LLU;
	int16_t x302 = INT16_MIN;
	int32_t x304 = -1;
	uint64_t t46 = 15745706677LLU;

    t46 = ((x301/(x302%x303))*x304);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x309 = INT64_MIN;
	int32_t x310 = INT32_MIN;
	uint64_t x311 = 210385LLU;
	int32_t x312 = INT32_MIN;
	static volatile uint64_t t47 = 6355875256570LLU;

    t47 = ((x309/(x310%x311))*x312);

    if (t47 != 15192741378401501184LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x317 = -1;
	int64_t x318 = -6546471938LL;
	volatile int64_t t48 = 9055647LL;

    t48 = ((x317/(x318%x319))*x320);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x321 = INT16_MIN;
	volatile int64_t t49 = 18123098711460302LL;

    t49 = ((x321/(x322%x323))*x324);

    if (t49 != 107LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x325 = 224U;
	static int64_t x326 = 1LL;
	static int8_t x327 = INT8_MIN;
	int16_t x328 = -215;
	int64_t t50 = 18312613500470LL;

    t50 = ((x325/(x326%x327))*x328);

    if (t50 != -48160LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int32_t x329 = INT32_MIN;
	volatile uint32_t x330 = 806438U;
	int8_t x331 = INT8_MIN;
	uint64_t x332 = UINT64_MAX;

    t51 = ((x329/(x330%x331))*x332);

    if (t51 != 18446744073709548954LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x333 = 1072U;
	volatile int32_t x334 = 6223486;
	int16_t x335 = INT16_MAX;
	uint8_t x336 = 3U;
	volatile uint32_t t52 = 2U;

    t52 = ((x333/(x334%x335))*x336);

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x337 = 1503U;
	int8_t x339 = -33;
	int8_t x340 = 0;
	static uint64_t t53 = 6275548LLU;

    t53 = ((x337/(x338%x339))*x340);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x341 = -1LL;
	volatile uint8_t x342 = 43U;
	static volatile int64_t t54 = 2615527292583LL;

    t54 = ((x341/(x342%x343))*x344);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x345 = INT16_MAX;
	int32_t x346 = 1120045;
	volatile uint64_t x347 = 164201872305229LLU;
	int32_t x348 = INT32_MAX;

    t55 = ((x345/(x346%x347))*x348);

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x354 = -12;
	uint16_t x355 = 8885U;
	uint32_t x356 = 0U;
	volatile uint64_t t56 = 22942882391994LLU;

    t56 = ((x353/(x354%x355))*x356);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x366 = -1;
	volatile uint16_t x367 = UINT16_MAX;
	int8_t x368 = INT8_MAX;
	static volatile int32_t t57 = 6;

    t57 = ((x365/(x366%x367))*x368);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x378 = UINT8_MAX;
	int8_t x379 = INT8_MIN;
	int8_t x380 = -1;
	volatile int32_t t58 = 114764;

    t58 = ((x377/(x378%x379))*x380);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x386 = 1009734LLU;
	static volatile uint64_t x387 = 17704724022409869LLU;
	int16_t x388 = INT16_MIN;
	uint64_t t59 = 4067014LLU;

    t59 = ((x385/(x386%x387))*x388);

    if (t59 != 18147426179191144448LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x389 = -6660;
	static int64_t x390 = INT64_MIN;
	static uint16_t x391 = UINT16_MAX;
	uint8_t x392 = 51U;

    t60 = ((x389/(x390%x391))*x392);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x393 = -14785;
	static int16_t x395 = 234;
	int32_t t61 = 78157;

    t61 = ((x393/(x394%x395))*x396);

    if (t61 != -4928) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int32_t x401 = -60;
	volatile int64_t x403 = -4129767985998540LL;
	int8_t x404 = INT8_MIN;
	int64_t t62 = 1716523983652424436LL;

    t62 = ((x401/(x402%x403))*x404);

    if (t62 != -7680LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x405 = INT64_MAX;
	volatile uint32_t x406 = 11U;
	int8_t x407 = INT8_MIN;
	int16_t x408 = -8;
	static int64_t t63 = 684777096940638876LL;

    t63 = ((x405/(x406%x407))*x408);

    if (t63 != -6707906935894382400LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x410 = INT16_MIN;
	uint32_t x411 = UINT32_MAX;
	int64_t x412 = -30583LL;
	volatile int64_t t64 = 268093921849524620LL;

    t64 = ((x409/(x410%x411))*x412);

    if (t64 != -30583LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int64_t x417 = -3512377LL;
	int64_t x418 = -1LL;
	volatile uint32_t x419 = UINT32_MAX;
	int16_t x420 = 42;
	volatile int64_t t65 = 5582597025940LL;

    t65 = ((x417/(x418%x419))*x420);

    if (t65 != 147519834LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x430 = INT32_MIN;
	volatile int64_t t66 = -815166799837LL;

    t66 = ((x429/(x430%x431))*x432);

    if (t66 != -14414LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x437 = -1;
	uint16_t x438 = 56U;
	uint64_t x439 = 265045054247LLU;
	int16_t x440 = -24;

    t67 = ((x437/(x438%x439))*x440);

    if (t67 != 10540996613548315216LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x441 = INT16_MIN;
	int64_t x442 = 373065975460639LL;
	volatile uint32_t x444 = 8949538U;
	int64_t t68 = 178355537800877LL;

    t68 = ((x441/(x442%x443))*x444);

    if (t68 != -8949538LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x445 = 3;
	static uint32_t x446 = UINT32_MAX;
	volatile int64_t x447 = 118992498480818LL;
	uint8_t x448 = UINT8_MAX;
	volatile int64_t t69 = -2946402529LL;

    t69 = ((x445/(x446%x447))*x448);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x449 = -1;
	uint64_t x450 = 2704LLU;
	int32_t x451 = INT32_MAX;
	volatile int32_t x452 = INT32_MIN;
	volatile uint64_t t70 = 283649654LLU;

    t70 = ((x449/(x450%x451))*x452);

    if (t70 != 4802702599415398400LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int16_t x454 = INT16_MIN;
	uint64_t x455 = 3781147881929LLU;
	uint16_t x456 = 65U;
	static uint64_t t71 = 13LLU;

    t71 = ((x453/(x454%x455))*x456);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x457 = -30;
	int8_t x458 = INT8_MIN;
	static uint64_t x459 = UINT64_MAX;
	int8_t x460 = INT8_MIN;
	volatile uint64_t t72 = 2054608648LLU;

    t72 = ((x457/(x458%x459))*x460);

    if (t72 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x466 = INT64_MIN;
	int8_t x467 = 3;
	int32_t x468 = -77;
	int64_t t73 = 1050LL;

    t73 = ((x465/(x466%x467))*x468);

    if (t73 != -82678120448LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x473 = -1;
	int8_t x474 = -1;
	static int32_t x476 = 327845002;
	volatile int64_t t74 = -2849538414386533LL;

    t74 = ((x473/(x474%x475))*x476);

    if (t74 != 327845002LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x481 = INT16_MAX;
	volatile int64_t x482 = -62584398LL;
	uint64_t t75 = 7615428877250446452LLU;

    t75 = ((x481/(x482%x483))*x484);

    if (t75 != 18446744073706509342LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x485 = INT64_MIN;
	uint16_t x486 = 3491U;
	int64_t x487 = -38934481284LL;
	int32_t x488 = -1;
	int64_t t76 = 2467LL;

    t76 = ((x485/(x486%x487))*x488);

    if (t76 != 2642042978188134LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x489 = UINT64_MAX;
	int16_t x490 = INT16_MIN;
	static uint32_t x492 = 3863189U;
	uint64_t t77 = 1096130016038191LLU;

    t77 = ((x489/(x490%x491))*x492);

    if (t77 != 3863189LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x493 = INT16_MAX;
	int32_t x494 = INT32_MAX;
	volatile int32_t x495 = 334;
	static volatile uint16_t x496 = UINT16_MAX;
	volatile int32_t t78 = 108514;

    t78 = ((x493/(x494%x495))*x496);

    if (t78 != 8454015) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x498 = -1;
	int64_t x500 = -1LL;
	volatile int64_t t79 = -7343506LL;

    t79 = ((x497/(x498%x499))*x500);

    if (t79 != 93366253017651LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x502 = INT16_MIN;
	static uint16_t x503 = 7605U;
	int32_t t80 = -411079;

    t80 = ((x501/(x502%x503))*x504);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x505 = INT16_MAX;
	uint64_t x506 = 5286LLU;
	int64_t x507 = -1LL;
	uint64_t t81 = 26310355329035509LLU;

    t81 = ((x505/(x506%x507))*x508);

    if (t81 != 696LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x509 = 30912752754224LLU;
	int8_t x510 = -16;
	volatile int64_t x512 = 4117748154596987LL;

    t82 = ((x509/(x510%x511))*x512);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x517 = 6002U;
	int32_t x518 = -4603216;
	static int32_t x519 = -728318353;
	int32_t x520 = INT32_MIN;

    t83 = ((x517/(x518%x519))*x520);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x529 = INT8_MAX;
	static uint64_t x531 = 17007885187748405LLU;
	static volatile uint32_t x532 = 3862U;
	static volatile uint64_t t84 = 467077877661267LLU;

    t84 = ((x529/(x530%x531))*x532);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x534 = 91247513811929LLU;
	volatile uint8_t x536 = 10U;
	uint64_t t85 = 1336002306086LLU;

    t85 = ((x533/(x534%x535))*x536);

    if (t85 != 1010800LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x537 = 22155U;
	int16_t x538 = INT16_MAX;
	int8_t x540 = 0;
	int64_t t86 = -43876927924856755LL;

    t86 = ((x537/(x538%x539))*x540);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x541 = INT16_MIN;
	int16_t x542 = 11244;
	uint8_t x544 = UINT8_MAX;
	volatile int32_t t87 = 9635;

    t87 = ((x541/(x542%x543))*x544);

    if (t87 != -510) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int16_t x553 = INT16_MIN;
	uint8_t x554 = 17U;
	int8_t x555 = INT8_MIN;
	int64_t x556 = 5709246382953LL;
	volatile int64_t t88 = 77609853LL;

    t88 = ((x553/(x554%x555))*x556);

    if (t88 != -11001717779950431LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x561 = -1;
	int32_t x562 = -1;
	int16_t x564 = -1;
	static volatile int32_t t89 = 1763693;

    t89 = ((x561/(x562%x563))*x564);

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x565 = UINT32_MAX;
	int16_t x566 = INT16_MIN;
	int8_t x567 = INT8_MAX;
	static uint16_t x568 = UINT16_MAX;
	volatile uint32_t t90 = 877531258U;

    t90 = ((x565/(x566%x567))*x568);

    if (t90 != 65535U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x569 = -1;
	int32_t x571 = INT32_MIN;
	static volatile uint32_t x572 = UINT32_MAX;
	static uint32_t t91 = 5843957U;

    t91 = ((x569/(x570%x571))*x572);

    if (t91 != 4294967294U) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x578 = INT64_MIN;
	uint64_t x579 = 1584LLU;
	uint8_t x580 = 1U;
	uint64_t t92 = 51558834129270364LLU;

    t92 = ((x577/(x578%x579))*x580);

    if (t92 != 23058430092136939LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x581 = -98;
	int64_t x582 = 2351339837709683649LL;
	static int16_t x583 = 41;
	uint32_t x584 = 1U;
	int64_t t93 = -5455238315LL;

    t93 = ((x581/(x582%x583))*x584);

    if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x585 = INT64_MIN;
	int16_t x586 = INT16_MAX;
	int32_t x587 = INT32_MIN;
	static int8_t x588 = INT8_MIN;
	int64_t t94 = 127437458607LL;

    t94 = ((x585/(x586%x587))*x588);

    if (t94 != 36029896564147200LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x593 = 0;
	volatile int8_t x594 = 2;
	int64_t x595 = INT64_MIN;
	int32_t x596 = 962;
	volatile int64_t t95 = -41LL;

    t95 = ((x593/(x594%x595))*x596);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x597 = -1;
	uint64_t x598 = UINT64_MAX;
	int16_t x599 = 183;
	volatile int16_t x600 = INT16_MIN;

    t96 = ((x597/(x598%x599))*x600);

    if (t96 != 8608480567731126272LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x609 = INT8_MIN;
	int64_t x611 = 6LL;
	volatile uint8_t x612 = 1U;
	int64_t t97 = -2LL;

    t97 = ((x609/(x610%x611))*x612);

    if (t97 != 64LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x613 = 2002058251LLU;
	static uint16_t x614 = UINT16_MAX;
	uint64_t x615 = 3785888428626180LLU;
	uint16_t x616 = UINT16_MAX;
	volatile uint64_t t98 = 7008LLU;

    t98 = ((x613/(x614%x615))*x616);

    if (t98 != 2002028715LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x617 = -21;
	int32_t x618 = INT32_MIN;
	uint32_t x619 = 2071027868U;
	volatile uint32_t t99 = 97443U;

    t99 = ((x617/(x618%x619))*x620);

    if (t99 != 10276896U) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x621 = INT32_MIN;
	volatile uint64_t x622 = 3033LLU;
	int8_t x623 = -1;
	static volatile uint64_t t100 = 216185LLU;

    t100 = ((x621/(x622%x623))*x624);

    if (t100 != 4549345389227967636LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x629 = -1;
	uint64_t x631 = 28508380LLU;
	int16_t x632 = -768;

    t101 = ((x629/(x630%x631))*x632);

    if (t101 != 18446160752837001472LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x633 = 1368U;
	uint64_t x634 = UINT64_MAX;
	uint16_t x635 = 22278U;
	static int8_t x636 = INT8_MAX;
	volatile uint64_t t102 = 214546LLU;

    t102 = ((x633/(x634%x635))*x636);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x638 = INT8_MAX;
	int32_t x639 = -6766;
	static uint32_t x640 = UINT32_MAX;
	volatile uint32_t t103 = 7344U;

    t103 = ((x637/(x638%x639))*x640);

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x641 = INT8_MIN;
	int8_t x642 = 42;
	uint8_t x643 = UINT8_MAX;
	int8_t x644 = INT8_MIN;
	int32_t t104 = 797;

    t104 = ((x641/(x642%x643))*x644);

    if (t104 != 384) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x647 = -6;
	uint16_t x648 = UINT16_MAX;
	int32_t t105 = -1;

    t105 = ((x645/(x646%x647))*x648);

    if (t105 != 65535) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x657 = UINT64_MAX;
	uint16_t x658 = UINT16_MAX;
	int32_t x659 = INT32_MIN;
	uint16_t x660 = 1953U;
	uint64_t t106 = 3019201925187LLU;

    t106 = ((x657/(x658%x659))*x660);

    if (t106 != 549729017715034017LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x661 = UINT8_MAX;
	volatile int16_t x662 = INT16_MAX;
	int16_t x663 = INT16_MIN;
	static volatile int32_t t107 = 29621;

    t107 = ((x661/(x662%x663))*x664);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x665 = 652329;
	uint64_t x668 = UINT64_MAX;

    t108 = ((x665/(x666%x667))*x668);

    if (t108 != 652329LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x673 = 2;
	int32_t x674 = 86674599;
	int64_t x675 = INT64_MIN;
	int16_t x676 = INT16_MAX;
	int64_t t109 = 1LL;

    t109 = ((x673/(x674%x675))*x676);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x678 = INT16_MIN;
	uint8_t x679 = UINT8_MAX;
	static int16_t x680 = INT16_MIN;
	static int32_t t110 = 5566133;

    t110 = ((x677/(x678%x679))*x680);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x686 = 745906084LLU;
	uint16_t x688 = 349U;
	uint64_t t111 = 5LLU;

    t111 = ((x685/(x686%x687))*x688);

    if (t111 != 8630997681318LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x691 = 549;
	volatile uint32_t x692 = 296526U;
	static volatile uint32_t t112 = 26U;

    t112 = ((x689/(x690%x691))*x692);

    if (t112 != 296526U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x701 = UINT16_MAX;
	uint64_t x702 = 32645LLU;
	int8_t x703 = -1;
	uint32_t x704 = 30311434U;
	volatile uint64_t t113 = 1616187LLU;

    t113 = ((x701/(x702%x703))*x704);

    if (t113 != 60622868LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x715 = UINT64_MAX;
	volatile uint64_t t114 = 1302462LLU;

    t114 = ((x713/(x714%x715))*x716);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x717 = 513567431530876LLU;
	uint32_t x718 = 34785823U;
	uint16_t x719 = 119U;
	uint64_t t115 = 33033101936431LLU;

    t115 = ((x717/(x718%x719))*x720);

    if (t115 != 18278458297745539072LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x721 = -5424;
	static int8_t x722 = INT8_MIN;
	uint32_t x723 = UINT32_MAX;
	volatile uint16_t x724 = 2U;
	uint32_t t116 = 1745111U;

    t116 = ((x721/(x722%x723))*x724);

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x725 = INT16_MIN;
	static int8_t x726 = INT8_MIN;
	static int16_t x727 = INT16_MIN;
	int32_t t117 = 57926;

    t117 = ((x725/(x726%x727))*x728);

    if (t117 != -2816) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x729 = -1LL;
	int16_t x730 = 511;
	volatile uint64_t x732 = 3127771743070879LLU;
	uint64_t t118 = 9LLU;

    t118 = ((x729/(x730%x731))*x732);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x742 = 5U;
	volatile int32_t x743 = INT32_MIN;
	static volatile uint64_t t119 = 4691541048LLU;

    t119 = ((x741/(x742%x743))*x744);

    if (t119 != 6553LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x757 = UINT16_MAX;
	static uint32_t x758 = UINT32_MAX;
	uint64_t x759 = UINT64_MAX;
	int64_t x760 = -1662442373LL;

    t120 = ((x757/(x758%x759))*x760);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x761 = 3U;
	static volatile int16_t x762 = 2898;
	int16_t x764 = -1;
	int32_t t121 = -59390987;

    t121 = ((x761/(x762%x763))*x764);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x765 = -1LL;
	static uint32_t x768 = UINT32_MAX;
	int64_t t122 = -80241188LL;

    t122 = ((x765/(x766%x767))*x768);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x769 = INT16_MIN;
	uint16_t x770 = 3U;
	int32_t x771 = INT32_MIN;
	volatile int8_t x772 = INT8_MIN;
	static volatile int32_t t123 = -229;

    t123 = ((x769/(x770%x771))*x772);

    if (t123 != 1398016) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x773 = -1;
	static int64_t x774 = 28510LL;
	int16_t x775 = INT16_MIN;
	volatile uint8_t x776 = 61U;

    t124 = ((x773/(x774%x775))*x776);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x778 = 507U;
	volatile int32_t x779 = INT32_MIN;
	int32_t x780 = INT32_MIN;
	static uint32_t t125 = 24207U;

    t125 = ((x777/(x778%x779))*x780);

    if (t125 != 2147483648U) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x789 = 14826062U;
	int16_t x790 = -1;
	uint8_t x792 = 10U;

    t126 = ((x789/(x790%x791))*x792);

    if (t126 != -148260620LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x793 = -5;
	uint64_t x794 = 11127157122096LLU;
	int64_t x795 = -1056426LL;
	static volatile int64_t x796 = -266596124310635LL;

    t127 = ((x793/(x794%x795))*x796);

    if (t127 != 755603733366808164LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x797 = -1;
	volatile uint8_t x798 = UINT8_MAX;
	uint8_t x800 = 1U;
	int32_t t128 = -2;

    t128 = ((x797/(x798%x799))*x800);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x801 = INT16_MIN;
	int64_t x802 = -1LL;
	int32_t x803 = INT32_MAX;
	static volatile int64_t t129 = 748324581LL;

    t129 = ((x801/(x802%x803))*x804);

    if (t129 != -32768LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x810 = 28768847LLU;
	int32_t x811 = INT32_MAX;
	uint16_t x812 = UINT16_MAX;
	uint64_t t130 = 3906005476078098LLU;

    t130 = ((x809/(x810%x811))*x812);

    if (t130 != 42009475123224090LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x814 = -1LL;
	int32_t x815 = -468;
	static int8_t x816 = INT8_MIN;
	volatile int64_t t131 = 500384254859934167LL;

    t131 = ((x813/(x814%x815))*x816);

    if (t131 != 4194176LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x821 = 8U;
	volatile uint32_t x823 = UINT32_MAX;
	int8_t x824 = -1;
	volatile uint32_t t132 = 8934089U;

    t132 = ((x821/(x822%x823))*x824);

    if (t132 != 4294967292U) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x831 = -15310;
	uint64_t x832 = UINT64_MAX;
	volatile uint64_t t133 = 2243822017504685980LLU;

    t133 = ((x829/(x830%x831))*x832);

    if (t133 != 18446744073708551857LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x833 = INT16_MIN;
	int16_t x834 = INT16_MIN;
	static int32_t x836 = -44805;
	int32_t t134 = -1;

    t134 = ((x833/(x834%x835))*x836);

    if (t134 != -44805) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x837 = INT64_MAX;
	int64_t x838 = INT64_MAX;
	uint8_t x839 = UINT8_MAX;
	int32_t x840 = -1;
	volatile int64_t t135 = -5LL;

    t135 = ((x837/(x838%x839))*x840);

    if (t135 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x841 = -1;
	volatile int64_t x842 = 380LL;
	uint64_t t136 = 146938592LLU;

    t136 = ((x841/(x842%x843))*x844);

    if (t136 != 6165096045687139607LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x845 = -2;
	int64_t t137 = 307507346LL;

    t137 = ((x845/(x846%x847))*x848);

    if (t137 != 5172014LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint64_t x857 = 38623532324LLU;
	int64_t x858 = 1LL;
	int64_t x859 = INT64_MIN;
	uint64_t t138 = 20370129006LLU;

    t138 = ((x857/(x858%x859))*x860);

    if (t138 != 2531193190853340LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x861 = 511546;
	uint32_t x862 = 1U;
	uint8_t x863 = UINT8_MAX;
	static int8_t x864 = -8;
	uint32_t t139 = 986U;

    t139 = ((x861/(x862%x863))*x864);

    if (t139 != 4290874928U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x875 = INT64_MAX;
	volatile uint8_t x876 = 16U;
	static uint64_t t140 = 180252740826LLU;

    t140 = ((x873/(x874%x875))*x876);

    if (t140 != 16LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x881 = UINT32_MAX;
	int16_t x884 = -1234;
	uint32_t t141 = 5U;

    t141 = ((x881/(x882%x883))*x884);

    if (t141 != 3817749256U) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x885 = INT8_MIN;
	int8_t x886 = INT8_MIN;

    t142 = ((x885/(x886%x887))*x888);

    if (t142 != 184143936LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x905 = UINT32_MAX;
	int64_t x907 = INT64_MIN;
	int8_t x908 = INT8_MIN;
	int64_t t143 = 34533501731170233LL;

    t143 = ((x905/(x906%x907))*x908);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x910 = 51U;
	static int64_t x911 = 342807LL;
	volatile int64_t x912 = -3383LL;
	static int64_t t144 = 43009130553229LL;

    t144 = ((x909/(x910%x911))*x912);

    if (t144 != -16915LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x914 = -3;
	uint16_t x915 = 3868U;
	int8_t x916 = -1;
	volatile int32_t t145 = 735842717;

    t145 = ((x913/(x914%x915))*x916);

    if (t145 != 21845) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x917 = 4146064U;
	int16_t x918 = 42;
	int64_t x919 = INT64_MAX;
	int32_t x920 = -1449;
	volatile int64_t t146 = 2LL;

    t146 = ((x917/(x918%x919))*x920);

    if (t146 != -143038035LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x921 = -1;
	volatile int8_t x923 = INT8_MIN;
	volatile int16_t x924 = 13867;
	int32_t t147 = 13729902;

    t147 = ((x921/(x922%x923))*x924);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x929 = 128090926U;
	uint8_t x930 = 10U;
	int32_t x931 = INT32_MAX;

    t148 = ((x929/(x930%x931))*x932);

    if (t148 != 938454888U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x933 = 11852950U;
	volatile uint64_t x934 = 4001397270496257LLU;
	volatile int8_t x935 = 11;
	uint16_t x936 = UINT16_MAX;
	volatile uint64_t t149 = 25864264271LLU;

    t149 = ((x933/(x934%x935))*x936);

    if (t149 != 155356615650LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x942 = -1;
	int8_t x943 = -44;
	volatile int8_t x944 = INT8_MIN;

    t150 = ((x941/(x942%x943))*x944);

    if (t150 != 128) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x945 = -1;
	volatile uint64_t x946 = UINT64_MAX;
	int16_t x947 = INT16_MAX;
	int8_t x948 = -1;
	volatile uint64_t t151 = 6356924LLU;

    t151 = ((x945/(x946%x947))*x948);

    if (t151 != 17216961135462248175LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x949 = 263067071LL;
	static int8_t x950 = INT8_MAX;
	int8_t x951 = 13;
	uint8_t x952 = UINT8_MAX;
	int64_t t152 = -2581LL;

    t152 = ((x949/(x950%x951))*x952);

    if (t152 != 6708210285LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int16_t x957 = INT16_MIN;
	int64_t x958 = 558311051LL;
	int8_t x959 = 22;
	int8_t x960 = INT8_MIN;
	int64_t t153 = -1221261164348367LL;

    t153 = ((x957/(x958%x959))*x960);

    if (t153 != 4194304LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x969 = -1015;
	uint8_t x970 = UINT8_MAX;
	volatile int32_t t154 = 23937;

    t154 = ((x969/(x970%x971))*x972);

    if (t154 != 229376) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x977 = INT8_MAX;
	int16_t x978 = INT16_MIN;
	int8_t x979 = -29;
	uint16_t x980 = 1576U;

    t155 = ((x977/(x978%x979))*x980);

    if (t155 != -6304) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x982 = INT8_MIN;
	int64_t x983 = -414219LL;
	int32_t x984 = INT32_MAX;
	int64_t t156 = -908477975LL;

    t156 = ((x981/(x982%x983))*x984);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x989 = -1;
	volatile int64_t x990 = INT64_MAX;
	static int16_t x991 = INT16_MIN;
	int8_t x992 = -18;
	int64_t t157 = 6776LL;

    t157 = ((x989/(x990%x991))*x992);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x993 = INT32_MAX;
	static uint8_t x994 = 15U;
	static int8_t x995 = INT8_MIN;
	int64_t t158 = -117952589672700101LL;

    t158 = ((x993/(x994%x995))*x996);

    if (t158 != -143165576LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x997 = 15475U;
	int8_t x1000 = INT8_MIN;
	volatile int64_t t159 = -329576679082324LL;

    t159 = ((x997/(x998%x999))*x1000);

    if (t159 != -25600LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x1002 = INT32_MIN;
	int64_t x1003 = INT64_MIN;
	int32_t x1004 = INT32_MAX;
	volatile int64_t t160 = 107924208631494LL;

    t160 = ((x1001/(x1002%x1003))*x1004);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1005 = 1;
	uint16_t x1006 = UINT16_MAX;
	uint16_t x1007 = 5962U;
	volatile int64_t x1008 = INT64_MIN;
	int64_t t161 = -8105LL;

    t161 = ((x1005/(x1006%x1007))*x1008);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x1009 = INT16_MIN;
	int64_t x1011 = INT64_MIN;
	int16_t x1012 = 5711;
	volatile int64_t t162 = -213964LL;

    t162 = ((x1009/(x1010%x1011))*x1012);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x1013 = 1U;
	volatile int32_t x1014 = 1;
	int64_t x1015 = -2004LL;
	static volatile int32_t x1016 = INT32_MIN;
	static int64_t t163 = 4910LL;

    t163 = ((x1013/(x1014%x1015))*x1016);

    if (t163 != -2147483648LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x1017 = 20;
	uint32_t x1018 = 13759U;
	int64_t x1019 = INT64_MAX;
	static int8_t x1020 = 1;
	static int64_t t164 = 47012247145115LL;

    t164 = ((x1017/(x1018%x1019))*x1020);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x1021 = UINT32_MAX;
	int32_t x1022 = INT32_MIN;
	uint16_t x1023 = 16985U;
	uint8_t x1024 = UINT8_MAX;

    t165 = ((x1021/(x1022%x1023))*x1024);

    if (t165 != 255U) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x1029 = INT8_MIN;
	int32_t x1030 = -1;
	int16_t x1031 = -4090;

    t166 = ((x1029/(x1030%x1031))*x1032);

    if (t166 != -4194304) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x1033 = 36U;
	int16_t x1034 = INT16_MAX;
	uint64_t x1035 = 913619LLU;
	int32_t x1036 = -1;
	static uint64_t t167 = 11094LLU;

    t167 = ((x1033/(x1034%x1035))*x1036);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x1050 = 16LLU;
	static volatile int32_t x1051 = -1;
	uint64_t x1052 = UINT64_MAX;
	static uint64_t t168 = 147063838241243588LLU;

    t168 = ((x1049/(x1050%x1051))*x1052);

    if (t168 != 18446744073708940486LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1053 = -96803;
	int8_t x1055 = -6;
	volatile int32_t t169 = -14073853;

    t169 = ((x1053/(x1054%x1055))*x1056);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1062 = -1;
	volatile int8_t x1063 = -23;
	volatile int32_t t170 = -1;

    t170 = ((x1061/(x1062%x1063))*x1064);

    if (t170 != 1102575) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x1073 = 36;
	int16_t x1075 = -12;
	uint32_t x1076 = 2920U;
	int64_t t171 = 20407825393328500LL;

    t171 = ((x1073/(x1074%x1075))*x1076);

    if (t171 != -11680LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1077 = -20015LL;
	int8_t x1078 = -1;
	int16_t x1079 = INT16_MAX;
	uint16_t x1080 = UINT16_MAX;
	static int64_t t172 = -94392802629479323LL;

    t172 = ((x1077/(x1078%x1079))*x1080);

    if (t172 != 1311683025LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1081 = -47276;
	int16_t x1082 = INT16_MAX;
	int32_t x1084 = -243;
	volatile int32_t t173 = 101;

    t173 = ((x1081/(x1082%x1083))*x1084);

    if (t173 != 243) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1085 = 3U;
	int64_t x1086 = -3664312LL;
	int16_t x1087 = INT16_MIN;
	int16_t x1088 = 225;

    t174 = ((x1085/(x1086%x1087))*x1088);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x1101 = UINT32_MAX;
	volatile uint32_t x1102 = UINT32_MAX;
	uint64_t x1103 = UINT64_MAX;
	int32_t x1104 = INT32_MIN;
	uint64_t t175 = 143614562517316844LLU;

    t175 = ((x1101/(x1102%x1103))*x1104);

    if (t175 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1105 = INT8_MAX;
	uint8_t x1107 = 31U;
	int16_t x1108 = 1;
	int32_t t176 = -123412;

    t176 = ((x1105/(x1106%x1107))*x1108);

    if (t176 != -63) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1109 = INT32_MAX;
	int64_t x1110 = INT64_MAX;
	volatile int32_t x1111 = 991499345;
	static int32_t x1112 = INT32_MIN;
	int64_t t177 = -3857933622580LL;

    t177 = ((x1109/(x1110%x1111))*x1112);

    if (t177 != -4294967296LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x1113 = INT32_MIN;
	volatile uint64_t x1114 = UINT64_MAX;
	static int8_t x1115 = INT8_MIN;
	volatile uint16_t x1116 = UINT16_MAX;
	static volatile uint64_t t178 = 1360LLU;

    t178 = ((x1113/(x1114%x1115))*x1116);

    if (t178 != 435748751856534279LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x1121 = -174075229;
	int64_t x1122 = 653520119LL;
	uint16_t x1123 = UINT16_MAX;
	int16_t x1124 = -1;
	volatile int64_t t179 = 836LL;

    t179 = ((x1121/(x1122%x1123))*x1124);

    if (t179 != 34139LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x1129 = INT16_MIN;
	uint16_t x1130 = 6284U;
	int32_t x1131 = INT32_MIN;
	int64_t x1132 = -1LL;
	volatile int64_t t180 = -2LL;

    t180 = ((x1129/(x1130%x1131))*x1132);

    if (t180 != 5LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x1141 = 76042473839LLU;
	uint64_t t181 = 19003796992LLU;

    t181 = ((x1141/(x1142%x1143))*x1144);

    if (t181 != 4562548428LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1145 = 42LLU;
	uint32_t x1146 = 5340U;
	static volatile int8_t x1147 = INT8_MIN;
	static uint16_t x1148 = 2883U;
	volatile uint64_t t182 = 14657125LLU;

    t182 = ((x1145/(x1146%x1147))*x1148);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1149 = UINT64_MAX;
	int32_t x1150 = -17410030;
	int64_t x1151 = 3974LL;
	static uint32_t x1152 = 17365U;
	static uint64_t t183 = 1036783LLU;

    t183 = ((x1149/(x1150%x1151))*x1152);

    if (t183 != 17365LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1153 = INT8_MIN;
	uint8_t x1154 = UINT8_MAX;
	int64_t x1155 = INT64_MAX;
	int16_t x1156 = 13;
	volatile int64_t t184 = 3LL;

    t184 = ((x1153/(x1154%x1155))*x1156);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1157 = INT8_MIN;
	uint64_t x1158 = 10063070301993LLU;
	volatile int64_t x1160 = -1690694LL;
	volatile uint64_t t185 = 447LLU;

    t185 = ((x1157/(x1158%x1159))*x1160);

    if (t185 != 4073992423760172474LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x1161 = UINT64_MAX;
	static uint8_t x1162 = 2U;
	uint32_t x1163 = UINT32_MAX;
	int8_t x1164 = INT8_MIN;

    t186 = ((x1161/(x1162%x1163))*x1164);

    if (t186 != 128LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1177 = INT8_MAX;
	static volatile int64_t x1178 = -7LL;
	uint64_t x1179 = 1898025713363185591LLU;
	volatile uint16_t x1180 = UINT16_MAX;
	static volatile uint64_t t187 = 520878686042507143LLU;

    t187 = ((x1177/(x1178%x1179))*x1180);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1193 = INT16_MIN;
	int64_t x1194 = -3741116107219671866LL;
	int64_t x1195 = -8113567821298581LL;
	int32_t x1196 = -2;
	volatile int64_t t188 = 322406366LL;

    t188 = ((x1193/(x1194%x1195))*x1196);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1198 = -5;
	int8_t x1199 = -38;
	volatile int64_t t189 = 929501LL;

    t189 = ((x1197/(x1198%x1199))*x1200);

    if (t189 != 5990627028556195422LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x1211 = 13U;
	int16_t x1212 = INT16_MIN;

    t190 = ((x1209/(x1210%x1211))*x1212);

    if (t190 != 2147516416U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1213 = UINT16_MAX;
	int64_t x1215 = -4039LL;
	int32_t x1216 = -1;
	static volatile int64_t t191 = -1087LL;

    t191 = ((x1213/(x1214%x1215))*x1216);

    if (t191 != 143LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1221 = INT16_MIN;
	int16_t x1222 = INT16_MIN;
	volatile uint64_t x1223 = 1808158LLU;
	volatile uint32_t x1224 = 98590U;
	uint64_t t192 = 628739439672857637LLU;

    t192 = ((x1221/(x1222%x1223))*x1224);

    if (t192 != 1150635464221857870LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1226 = INT8_MAX;
	volatile int64_t x1227 = -11392731LL;
	int32_t x1228 = -64480;
	int64_t t193 = 0LL;

    t193 = ((x1225/(x1226%x1227))*x1228);

    if (t193 != -16635840LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1229 = 1535;
	uint16_t x1230 = 9U;
	int16_t x1232 = -1;
	int32_t t194 = 4;

    t194 = ((x1229/(x1230%x1231))*x1232);

    if (t194 != -170) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x1233 = UINT32_MAX;
	int32_t x1234 = 240176330;
	volatile uint16_t x1235 = UINT16_MAX;
	int32_t x1236 = INT32_MIN;
	volatile uint32_t t195 = 1050571779U;

    t195 = ((x1233/(x1234%x1235))*x1236);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1237 = INT8_MAX;
	static uint64_t x1238 = 802549LLU;
	int64_t x1239 = 33983LL;
	volatile int32_t x1240 = INT32_MIN;

    t196 = ((x1237/(x1238%x1239))*x1240);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int16_t x1242 = 13;
	int16_t x1243 = INT16_MIN;
	int8_t x1244 = INT8_MIN;
	uint32_t t197 = 70U;

    t197 = ((x1241/(x1242%x1243))*x1244);

    if (t197 != 660764288U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1245 = 0U;
	uint32_t x1246 = UINT32_MAX;
	uint64_t x1248 = 7995307886004525LLU;
	volatile uint64_t t198 = 7177942048026727885LLU;

    t198 = ((x1245/(x1246%x1247))*x1248);

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1257 = -55;
	int8_t x1258 = -1;
	static uint16_t x1259 = 26U;
	static uint16_t x1260 = UINT16_MAX;
	int32_t t199 = 80406459;

    t199 = ((x1257/(x1258%x1259))*x1260);

    if (t199 != 3604425) { NG(); } else { ; }
	
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


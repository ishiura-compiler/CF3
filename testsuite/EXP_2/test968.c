
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

volatile int32_t x7 = INT32_MAX;
volatile int64_t x8 = INT64_MIN;
int32_t x10 = 17;
uint64_t x11 = 1LLU;
uint32_t x16 = 35U;
uint64_t x21 = 5844990LLU;
int64_t x22 = 95337LL;
int16_t x25 = INT16_MAX;
static uint16_t x31 = 96U;
int8_t x44 = 6;
int64_t t6 = -1755LL;
static volatile uint64_t t9 = 7938873869487938530LLU;
static int8_t x63 = 2;
uint32_t t11 = 10611382U;
int8_t x71 = 14;
uint64_t t13 = 1006LLU;
int64_t x73 = 257984931286164LL;
int32_t x76 = 10379609;
int16_t x87 = INT16_MIN;
int32_t x88 = INT32_MIN;
int16_t x95 = -1;
int8_t x99 = INT8_MIN;
static int64_t x100 = INT64_MAX;
static uint16_t x106 = UINT16_MAX;
uint32_t t21 = 833292U;
static int64_t t22 = -34176406839574636LL;
int8_t x119 = INT8_MIN;
int16_t x132 = INT16_MAX;
volatile int64_t t27 = -1018299878078695LL;
uint32_t x143 = 50094070U;
volatile int16_t x147 = INT16_MIN;
int32_t x149 = INT32_MAX;
uint32_t x156 = UINT32_MAX;
int32_t x157 = 4;
int16_t x162 = 1662;
int16_t x174 = INT16_MIN;
static uint64_t x175 = UINT64_MAX;
int32_t x178 = -1;
uint16_t x191 = 7U;
volatile int64_t x194 = 10842946712007LL;
int64_t t42 = -1383LL;
volatile uint32_t x200 = UINT32_MAX;
int64_t x201 = -49614748LL;
static int64_t t44 = 1094993384001518607LL;
static uint64_t x205 = 3556659462785312LLU;
int16_t x215 = 1045;
static volatile uint64_t t47 = 59512026804LLU;
uint32_t x227 = 1435413U;
uint8_t x244 = 16U;
volatile int32_t x245 = INT32_MIN;
int8_t x246 = INT8_MAX;
volatile int64_t t55 = 27LL;
volatile int64_t t56 = 5601562LL;
int8_t x253 = INT8_MIN;
int8_t x257 = INT8_MIN;
int32_t x258 = INT32_MIN;
int64_t x260 = -155706206760986LL;
int32_t x266 = INT32_MAX;
static uint64_t x267 = 3817120784835917161LLU;
static volatile uint64_t x281 = 1278853900068LLU;
static int64_t x289 = 3370817631650100500LL;
int32_t x290 = 1560;
int8_t x292 = INT8_MIN;
static int32_t x296 = -1;
uint16_t x303 = UINT16_MAX;
int8_t x316 = 5;
static int32_t x319 = -8;
volatile int16_t x320 = -1;
uint64_t x325 = 312LLU;
int16_t x331 = INT16_MIN;
static volatile int8_t x338 = -2;
volatile int64_t t74 = -13732590LL;
int64_t x344 = -1LL;
volatile int32_t x345 = -1;
uint32_t x347 = UINT32_MAX;
volatile int32_t x348 = -135147072;
uint16_t x353 = UINT16_MAX;
int32_t x355 = INT32_MAX;
int8_t x368 = 0;
int16_t x372 = INT16_MIN;
static volatile uint64_t t82 = 1113252LLU;
uint32_t x383 = UINT32_MAX;
uint8_t x384 = 31U;
uint16_t x388 = 0U;
static uint8_t x395 = 62U;
static int8_t x396 = INT8_MAX;
uint8_t x399 = 9U;
volatile int64_t t89 = -748181738740394045LL;
int64_t x409 = -1LL;
volatile int64_t t90 = -5683LL;
uint64_t x415 = 26392104153957LLU;
volatile int8_t x432 = INT8_MIN;
static int64_t x438 = INT64_MAX;
volatile int16_t x439 = INT16_MIN;
volatile uint64_t t95 = 3826188259LLU;
int64_t x453 = INT64_MAX;
uint32_t x454 = 11U;
int16_t x458 = 17;
uint32_t t99 = 241628205U;
volatile int8_t x463 = INT8_MIN;
volatile uint32_t t102 = 468230U;
static uint16_t x478 = UINT16_MAX;
static int8_t x492 = INT8_MIN;
static int64_t x497 = -1LL;
static int64_t x499 = INT64_MAX;
static int64_t x500 = INT64_MIN;
static volatile int8_t x501 = INT8_MAX;
volatile int16_t x502 = -1;
volatile int8_t x514 = INT8_MAX;
volatile uint64_t x517 = 927063566LLU;
static int32_t x519 = INT32_MIN;
uint32_t t115 = 46564517U;
static uint16_t x526 = UINT16_MAX;
uint64_t x527 = UINT64_MAX;
volatile uint16_t x533 = UINT16_MAX;
uint64_t x535 = 1333LLU;
int8_t x537 = -1;
volatile uint32_t x540 = UINT32_MAX;
int16_t x541 = INT16_MIN;
volatile int8_t x542 = INT8_MIN;
int64_t x550 = -6506139LL;
int16_t x553 = -604;
int16_t x554 = INT16_MAX;
int32_t t123 = 184;
static int64_t x557 = -7390633256540545LL;
int32_t x578 = 7509051;
volatile int64_t t129 = 9928936LL;
uint32_t x589 = UINT32_MAX;
int64_t x599 = INT64_MAX;
volatile int64_t x606 = INT64_MIN;
int64_t x616 = -1LL;
static int8_t x618 = INT8_MIN;
static int32_t x624 = INT32_MIN;
volatile int64_t t137 = -57124680488LL;
static int32_t x629 = INT32_MIN;
volatile uint32_t x631 = 376758U;
int64_t x633 = INT64_MIN;
static uint32_t x636 = 24948U;
uint16_t x656 = UINT16_MAX;
volatile int8_t x661 = -1;
int32_t x663 = 252644784;
int64_t x667 = INT64_MIN;
static volatile int64_t x676 = -1238585670LL;
volatile int8_t x677 = 1;
int32_t x684 = INT32_MAX;
uint8_t x686 = 1U;
int32_t x689 = INT32_MIN;
volatile uint32_t x690 = UINT32_MAX;
uint32_t x693 = UINT32_MAX;
static int32_t t155 = -3;
volatile int16_t x719 = -1;
int8_t x725 = 1;
int32_t t159 = 4460153;
int8_t x730 = INT8_MAX;
int16_t x745 = INT16_MAX;
volatile int16_t x752 = 26;
int32_t x753 = -1687935;
static int16_t x754 = -1;
int8_t x757 = 0;
int64_t t166 = -1127911LL;
static volatile uint16_t x765 = 13U;
static uint16_t x767 = UINT16_MAX;
volatile int32_t x774 = 12;
int32_t x777 = INT32_MIN;
int8_t x778 = INT8_MIN;
int64_t x788 = -1LL;
int64_t x789 = -683LL;
int32_t x798 = INT32_MAX;
uint64_t x806 = 105LLU;
int32_t x810 = 0;
int16_t x811 = INT16_MAX;
static uint8_t x816 = UINT8_MAX;
int64_t t181 = 8115061944976LL;
int32_t x828 = -1;
uint16_t x830 = 213U;
int8_t x844 = -21;
volatile uint32_t t186 = 109728U;
uint8_t x849 = 54U;
static volatile int64_t t188 = -190432199205096LL;
static int16_t x854 = INT16_MIN;
int32_t t189 = 439487;
int32_t x857 = -173907167;
int8_t x858 = 0;
uint16_t x860 = 871U;
int64_t x868 = -1LL;
uint16_t x870 = UINT16_MAX;
uint32_t t194 = 12105U;
uint16_t x879 = 17U;
uint32_t x886 = 11229U;
uint64_t x887 = 16309384042832LLU;
uint8_t x889 = UINT8_MAX;
int64_t x892 = -8602956LL;
int64_t x898 = 9LL;


void f0(void) {
    	int8_t x5 = INT8_MAX;
	int32_t x6 = INT32_MIN;
	static volatile int64_t t0 = 1952213652LL;

    t0 = ((x5^(x6%x7))-x8);

    if (t0 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x9 = UINT16_MAX;
	int8_t x12 = -1;
	uint64_t t1 = 144015410LLU;

    t1 = ((x9^(x10%x11))-x12);

    if (t1 != 65536LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x13 = INT16_MAX;
	int16_t x14 = INT16_MAX;
	int8_t x15 = INT8_MIN;
	volatile uint32_t t2 = 34786991U;

    t2 = ((x13^(x14%x15))-x16);

    if (t2 != 32605U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x23 = INT32_MAX;
	static int8_t x24 = INT8_MIN;
	uint64_t t3 = 21200LLU;

    t3 = ((x21^(x22%x23))-x24);

    if (t3 != 5790743LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x26 = -588709686;
	uint32_t x27 = 1U;
	uint16_t x28 = 4853U;
	uint32_t t4 = 56U;

    t4 = ((x25^(x26%x27))-x28);

    if (t4 != 27914U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x29 = -10045129;
	uint32_t x30 = UINT32_MAX;
	uint8_t x32 = 61U;
	volatile uint32_t t5 = 91442U;

    t5 = ((x29^(x30%x31))-x32);

    if (t5 != 4284922059U) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x41 = -2324027615907711LL;
	static int8_t x42 = 1;
	int32_t x43 = 2;

    t6 = ((x41^(x42%x43))-x44);

    if (t6 != -2324027615907718LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x45 = INT64_MIN;
	static int32_t x46 = -2292;
	int8_t x47 = -13;
	int16_t x48 = 14188;
	volatile int64_t t7 = -43643LL;

    t7 = ((x45^(x46%x47))-x48);

    if (t7 != 9223372036854761616LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x49 = INT64_MIN;
	int32_t x50 = -1;
	int32_t x51 = 316;
	int8_t x52 = INT8_MAX;
	volatile int64_t t8 = -271207027746367525LL;

    t8 = ((x49^(x50%x51))-x52);

    if (t8 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x53 = 61477;
	volatile int64_t x54 = 81364LL;
	uint64_t x55 = UINT64_MAX;
	uint32_t x56 = 333361649U;

    t9 = ((x53^(x54%x55))-x56);

    if (t9 != 18446744073376308224LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x57 = INT16_MIN;
	int16_t x58 = -1;
	uint32_t x59 = UINT32_MAX;
	int64_t x60 = INT64_MAX;
	volatile int64_t t10 = -886875701219167082LL;

    t10 = ((x57^(x58%x59))-x60);

    if (t10 != -9223372032559841279LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x61 = 23;
	uint8_t x62 = 1U;
	uint32_t x64 = 3586U;

    t11 = ((x61^(x62%x63))-x64);

    if (t11 != 4294963732U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x65 = 3780LLU;
	uint8_t x66 = 9U;
	volatile int16_t x67 = -1984;
	uint8_t x68 = 125U;
	static volatile uint64_t t12 = 2374756LLU;

    t12 = ((x65^(x66%x67))-x68);

    if (t12 != 3664LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x69 = -1;
	int8_t x70 = INT8_MIN;
	volatile uint64_t x72 = UINT64_MAX;

    t13 = ((x69^(x70%x71))-x72);

    if (t13 != 2LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x74 = 103474013U;
	static uint16_t x75 = 23451U;
	int64_t t14 = 17073588LL;

    t14 = ((x73^(x74%x75))-x76);

    if (t14 != 257984920914756LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x77 = 816291U;
	int16_t x78 = 8;
	static int64_t x79 = 27987LL;
	int32_t x80 = -18685325;
	static volatile int64_t t15 = -133LL;

    t15 = ((x77^(x78%x79))-x80);

    if (t15 != 19501624LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x81 = 18U;
	uint8_t x82 = 31U;
	static int16_t x83 = 9;
	static uint64_t x84 = 328071LLU;
	volatile uint64_t t16 = 947037LLU;

    t16 = ((x81^(x82%x83))-x84);

    if (t16 != 18446744073709223567LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x85 = INT64_MIN;
	uint64_t x86 = 49803576109663LLU;
	volatile uint64_t t17 = 62497334734288LLU;

    t17 = ((x85^(x86%x87))-x88);

    if (t17 != 9223421842578369119LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x89 = 51U;
	int32_t x90 = INT32_MIN;
	uint32_t x91 = UINT32_MAX;
	static int8_t x92 = 27;
	volatile uint32_t t18 = 1493333578U;

    t18 = ((x89^(x90%x91))-x92);

    if (t18 != 2147483672U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x93 = 1313245780646LL;
	volatile int8_t x94 = INT8_MAX;
	int8_t x96 = 6;
	volatile int64_t t19 = 10111LL;

    t19 = ((x93^(x94%x95))-x96);

    if (t19 != 1313245780640LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x97 = INT16_MAX;
	volatile int32_t x98 = INT32_MAX;
	volatile int64_t t20 = -7LL;

    t20 = ((x97^(x98%x99))-x100);

    if (t20 != -9223372036854743167LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint32_t x105 = 49983901U;
	volatile uint16_t x107 = 22U;
	int8_t x108 = -1;

    t21 = ((x105^(x106%x107))-x108);

    if (t21 != 49983887U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x109 = -1;
	int8_t x110 = 3;
	static int64_t x111 = -1LL;
	volatile int64_t x112 = -1LL;

    t22 = ((x109^(x110%x111))-x112);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x113 = INT32_MIN;
	int8_t x114 = -1;
	volatile uint16_t x115 = 95U;
	volatile int64_t x116 = INT64_MAX;
	volatile int64_t t23 = -3006471377LL;

    t23 = ((x113^(x114%x115))-x116);

    if (t23 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x117 = INT8_MAX;
	int32_t x118 = -28;
	int8_t x120 = INT8_MIN;
	static volatile int32_t t24 = 432519;

    t24 = ((x117^(x118%x119))-x120);

    if (t24 != 27) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x121 = 3U;
	int32_t x122 = INT32_MAX;
	volatile uint8_t x123 = 94U;
	int8_t x124 = -1;
	static volatile int32_t t25 = -33903502;

    t25 = ((x121^(x122%x123))-x124);

    if (t25 != 65) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x125 = UINT32_MAX;
	static int16_t x126 = INT16_MIN;
	int64_t x127 = INT64_MAX;
	static uint32_t x128 = 3531803U;
	int64_t t26 = 801615LL;

    t26 = ((x125^(x126%x127))-x128);

    if (t26 != -4298466332LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x129 = UINT32_MAX;
	volatile int16_t x130 = INT16_MAX;
	int64_t x131 = INT64_MIN;

    t27 = ((x129^(x130%x131))-x132);

    if (t27 != 4294901761LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x133 = 0U;
	int16_t x134 = 7;
	static uint32_t x135 = 1844U;
	int8_t x136 = INT8_MAX;
	uint32_t t28 = 285597876U;

    t28 = ((x133^(x134%x135))-x136);

    if (t28 != 4294967176U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x141 = INT16_MAX;
	static int8_t x142 = INT8_MAX;
	int32_t x144 = -102994258;
	static uint32_t t29 = 50U;

    t29 = ((x141^(x142%x143))-x144);

    if (t29 != 103026898U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x145 = -1;
	static int64_t x146 = INT64_MAX;
	volatile uint64_t x148 = UINT64_MAX;
	volatile uint64_t t30 = 11664LLU;

    t30 = ((x145^(x146%x147))-x148);

    if (t30 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x150 = 12U;
	volatile uint32_t x151 = 291808U;
	uint16_t x152 = 3U;
	uint32_t t31 = 1411086U;

    t31 = ((x149^(x150%x151))-x152);

    if (t31 != 2147483632U) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint32_t x153 = UINT32_MAX;
	volatile int8_t x154 = INT8_MIN;
	static int32_t x155 = INT32_MIN;
	uint32_t t32 = 591809135U;

    t32 = ((x153^(x154%x155))-x156);

    if (t32 != 128U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x158 = INT8_MAX;
	int16_t x159 = INT16_MIN;
	volatile uint32_t x160 = UINT32_MAX;
	volatile uint32_t t33 = 6526U;

    t33 = ((x157^(x158%x159))-x160);

    if (t33 != 124U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x161 = 39;
	int8_t x163 = 2;
	int32_t x164 = 13069;
	volatile int32_t t34 = -1;

    t34 = ((x161^(x162%x163))-x164);

    if (t34 != -13030) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x165 = INT32_MIN;
	uint16_t x166 = UINT16_MAX;
	int64_t x167 = 796521816LL;
	uint32_t x168 = 6U;
	volatile int64_t t35 = -7786786148142944LL;

    t35 = ((x165^(x166%x167))-x168);

    if (t35 != -2147418119LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x169 = INT8_MAX;
	int8_t x170 = INT8_MIN;
	uint8_t x171 = 37U;
	int16_t x172 = -14;
	volatile int32_t t36 = 37006;

    t36 = ((x169^(x170%x171))-x172);

    if (t36 != -98) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x173 = INT64_MIN;
	uint64_t x176 = 44554966221576191LLU;
	uint64_t t37 = 157187224114837LLU;

    t37 = ((x173^(x174%x175))-x176);

    if (t37 != 9178817070633166849LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x177 = 0;
	static int32_t x179 = -1;
	static volatile int64_t x180 = -228308702LL;
	volatile int64_t t38 = 37238412LL;

    t38 = ((x177^(x178%x179))-x180);

    if (t38 != 228308702LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x181 = 1;
	int64_t x182 = 45118773856565981LL;
	int64_t x183 = INT64_MIN;
	int32_t x184 = INT32_MIN;
	int64_t t39 = -109082LL;

    t39 = ((x181^(x182%x183))-x184);

    if (t39 != 45118776004049628LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x185 = INT8_MIN;
	static uint64_t x186 = 76LLU;
	volatile int8_t x187 = INT8_MIN;
	static uint64_t x188 = 190533803248760LLU;
	static uint64_t t40 = 10492LLU;

    t40 = ((x185^(x186%x187))-x188);

    if (t40 != 18446553539906302804LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x189 = 323076877U;
	uint16_t x190 = UINT16_MAX;
	uint8_t x192 = 2U;
	volatile uint32_t t41 = 10394U;

    t41 = ((x189^(x190%x191))-x192);

    if (t41 != 323076874U) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x193 = 26U;
	int32_t x195 = -1;
	uint8_t x196 = 10U;

    t42 = ((x193^(x194%x195))-x196);

    if (t42 != 16LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x197 = 9;
	static uint8_t x198 = 83U;
	int8_t x199 = INT8_MIN;
	static volatile uint32_t t43 = 3975057U;

    t43 = ((x197^(x198%x199))-x200);

    if (t43 != 91U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x202 = -1;
	static int32_t x203 = 48940;
	int16_t x204 = -2075;

    t44 = ((x201^(x202%x203))-x204);

    if (t44 != 49616822LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x206 = -3261;
	static int32_t x207 = INT32_MIN;
	int64_t x208 = -1LL;
	volatile uint64_t t45 = 41008980299LLU;

    t45 = ((x205^(x206%x207))-x208);

    if (t45 != 18443187414246767204LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x209 = -42;
	int8_t x210 = INT8_MIN;
	static uint16_t x211 = 349U;
	int16_t x212 = INT16_MIN;
	volatile int32_t t46 = -15614944;

    t46 = ((x209^(x210%x211))-x212);

    if (t46 != 32854) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x213 = INT16_MAX;
	int64_t x214 = 40574471LL;
	uint64_t x216 = 42459766681100LLU;

    t47 = ((x213^(x214%x215))-x216);

    if (t47 != 18446701613942903027LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x217 = UINT64_MAX;
	uint64_t x218 = 272LLU;
	int32_t x219 = INT32_MIN;
	static int16_t x220 = -1;
	uint64_t t48 = 82191914522360LLU;

    t48 = ((x217^(x218%x219))-x220);

    if (t48 != 18446744073709551344LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x221 = INT8_MIN;
	uint32_t x222 = UINT32_MAX;
	int32_t x223 = INT32_MIN;
	int32_t x224 = -290598;
	volatile uint32_t t49 = 4183434U;

    t49 = ((x221^(x222%x223))-x224);

    if (t49 != 2147774373U) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x225 = -843;
	uint32_t x226 = UINT32_MAX;
	static uint32_t x228 = 38790577U;
	volatile uint32_t t50 = 2U;

    t50 = ((x225^(x226%x227))-x228);

    if (t50 != 4255965321U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x229 = INT64_MIN;
	volatile int32_t x230 = INT32_MIN;
	int16_t x231 = -1;
	int8_t x232 = INT8_MIN;
	int64_t t51 = -3LL;

    t51 = ((x229^(x230%x231))-x232);

    if (t51 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x233 = UINT8_MAX;
	static uint64_t x234 = 125716LLU;
	uint32_t x235 = 1241385U;
	int8_t x236 = -1;
	volatile uint64_t t52 = 2816025348012143LLU;

    t52 = ((x233^(x234%x235))-x236);

    if (t52 != 125932LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x237 = 1U;
	int32_t x238 = -1;
	static volatile uint32_t x239 = UINT32_MAX;
	static int32_t x240 = 22270;
	uint32_t t53 = 9895965U;

    t53 = ((x237^(x238%x239))-x240);

    if (t53 != 4294945027U) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x241 = 1;
	int16_t x242 = -858;
	volatile int64_t x243 = 20960286854LL;
	int64_t t54 = 167476444LL;

    t54 = ((x241^(x242%x243))-x244);

    if (t54 != -873LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x247 = -1;
	int64_t x248 = 20LL;

    t55 = ((x245^(x246%x247))-x248);

    if (t55 != -2147483668LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x249 = -5LL;
	int16_t x250 = INT16_MAX;
	int64_t x251 = INT64_MIN;
	volatile int16_t x252 = INT16_MIN;

    t56 = ((x249^(x250%x251))-x252);

    if (t56 != 4LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x254 = INT8_MAX;
	uint64_t x255 = 483205521193591LLU;
	uint32_t x256 = UINT32_MAX;
	uint64_t t57 = 194027008LLU;

    t57 = ((x253^(x254%x255))-x256);

    if (t57 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x259 = UINT16_MAX;
	int64_t t58 = 1595LL;

    t58 = ((x257^(x258%x259))-x260);

    if (t58 != 155706206793626LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x265 = 40;
	uint64_t x268 = UINT64_MAX;
	uint64_t t59 = 6440913181944LLU;

    t59 = ((x265^(x266%x267))-x268);

    if (t59 != 2147483608LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x273 = INT8_MIN;
	static int64_t x274 = -30239562763365LL;
	static volatile int8_t x275 = INT8_MAX;
	int8_t x276 = -1;
	volatile int64_t t60 = -19037529LL;

    t60 = ((x273^(x274%x275))-x276);

    if (t60 != 88LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x282 = 2914U;
	int64_t x283 = INT64_MAX;
	uint16_t x284 = 6U;
	volatile uint64_t t61 = 944746087LLU;

    t61 = ((x281^(x282%x283))-x284);

    if (t61 != 1278853901376LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x285 = UINT32_MAX;
	volatile int32_t x286 = INT32_MIN;
	static int8_t x287 = INT8_MAX;
	uint8_t x288 = UINT8_MAX;
	uint32_t t62 = 1117319U;

    t62 = ((x285^(x286%x287))-x288);

    if (t62 != 4294967048U) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x291 = -1;
	static volatile int64_t t63 = 207180054LL;

    t63 = ((x289^(x290%x291))-x292);

    if (t63 != 3370817631650100628LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x293 = 2U;
	uint16_t x294 = 157U;
	volatile uint16_t x295 = UINT16_MAX;
	int32_t t64 = -1970004;

    t64 = ((x293^(x294%x295))-x296);

    if (t64 != 160) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x301 = -1;
	int64_t x302 = INT64_MIN;
	int16_t x304 = INT16_MIN;
	static volatile int64_t t65 = 16910742566LL;

    t65 = ((x301^(x302%x303))-x304);

    if (t65 != 65535LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x305 = INT64_MAX;
	int32_t x306 = INT32_MIN;
	int16_t x307 = 305;
	static volatile int32_t x308 = -52214;
	int64_t t66 = 9LL;

    t66 = ((x305^(x306%x307))-x308);

    if (t66 != -9223372036854723292LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x309 = -1;
	uint64_t x310 = UINT64_MAX;
	int8_t x311 = INT8_MIN;
	int64_t x312 = INT64_MIN;
	uint64_t t67 = 0LLU;

    t67 = ((x309^(x310%x311))-x312);

    if (t67 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x313 = 12215U;
	int64_t x314 = -1LL;
	volatile uint16_t x315 = 60U;
	volatile int64_t t68 = -6557LL;

    t68 = ((x313^(x314%x315))-x316);

    if (t68 != -12221LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x317 = -1;
	int16_t x318 = INT16_MIN;
	int32_t t69 = 41;

    t69 = ((x317^(x318%x319))-x320);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x321 = 1579431U;
	int64_t x322 = INT64_MIN;
	volatile uint32_t x323 = 26U;
	int32_t x324 = -1;
	volatile int64_t t70 = 7171672717988901LL;

    t70 = ((x321^(x322%x323))-x324);

    if (t70 != -1579424LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x326 = INT64_MAX;
	int64_t x327 = -2361638387983LL;
	static int8_t x328 = 19;
	volatile uint64_t t71 = 5297278366218784LLU;

    t71 = ((x325^(x326%x327))-x328);

    if (t71 != 397502333021LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x329 = 3U;
	static int8_t x330 = 2;
	int64_t x332 = -1LL;
	int64_t t72 = 7869222664314475LL;

    t72 = ((x329^(x330%x331))-x332);

    if (t72 != 2LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x333 = 1U;
	int64_t x334 = INT64_MAX;
	int32_t x335 = INT32_MAX;
	uint64_t x336 = UINT64_MAX;
	static uint64_t t73 = 4655308962488245LLU;

    t73 = ((x333^(x334%x335))-x336);

    if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x337 = -4951444938LL;
	int8_t x339 = INT8_MAX;
	volatile int8_t x340 = INT8_MAX;

    t74 = ((x337^(x338%x339))-x340);

    if (t74 != 4951444809LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x341 = INT64_MIN;
	uint16_t x342 = 0U;
	uint64_t x343 = 14101LLU;
	uint64_t t75 = 32933987LLU;

    t75 = ((x341^(x342%x343))-x344);

    if (t75 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x346 = UINT32_MAX;
	volatile uint32_t t76 = 180313U;

    t76 = ((x345^(x346%x347))-x348);

    if (t76 != 135147071U) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int16_t x354 = INT16_MIN;
	int16_t x356 = -1;
	volatile int32_t t77 = 50389754;

    t77 = ((x353^(x354%x355))-x356);

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x357 = -1;
	static int16_t x358 = INT16_MAX;
	int64_t x359 = INT64_MAX;
	volatile uint8_t x360 = 58U;
	static int64_t t78 = 273084993675LL;

    t78 = ((x357^(x358%x359))-x360);

    if (t78 != -32826LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x361 = -1;
	int64_t x362 = INT64_MIN;
	volatile uint8_t x363 = 18U;
	int16_t x364 = 10;
	int64_t t79 = 1078158176999410733LL;

    t79 = ((x361^(x362%x363))-x364);

    if (t79 != -3LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x365 = -1;
	uint16_t x366 = UINT16_MAX;
	int16_t x367 = 171;
	volatile int32_t t80 = -191127047;

    t80 = ((x365^(x366%x367))-x368);

    if (t80 != -43) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x369 = 274LL;
	uint32_t x370 = 22U;
	static volatile int16_t x371 = INT16_MIN;
	volatile int64_t t81 = 53560342965LL;

    t81 = ((x369^(x370%x371))-x372);

    if (t81 != 33028LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x373 = INT8_MIN;
	volatile uint32_t x374 = UINT32_MAX;
	uint64_t x375 = UINT64_MAX;
	int32_t x376 = -1;

    t82 = ((x373^(x374%x375))-x376);

    if (t82 != 18446744069414584448LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x377 = INT16_MIN;
	uint64_t x378 = UINT64_MAX;
	static int32_t x379 = -1;
	int32_t x380 = 470585;
	volatile uint64_t t83 = 11139LLU;

    t83 = ((x377^(x378%x379))-x380);

    if (t83 != 18446744073709048263LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x381 = -320;
	static uint16_t x382 = UINT16_MAX;
	static volatile uint32_t t84 = 143685U;

    t84 = ((x381^(x382%x383))-x384);

    if (t84 != 4294902048U) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x385 = INT32_MIN;
	int32_t x386 = INT32_MIN;
	uint16_t x387 = 1U;
	volatile int32_t t85 = INT32_MIN;

    t85 = ((x385^(x386%x387))-x388);

    if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x389 = 3646U;
	static int16_t x390 = INT16_MIN;
	static int64_t x391 = 22857001714068117LL;
	uint32_t x392 = 27070U;
	static volatile int64_t t86 = 0LL;

    t86 = ((x389^(x390%x391))-x392);

    if (t86 != -56192LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x393 = 29060969102LLU;
	uint32_t x394 = 13U;
	uint64_t t87 = 1995103742195569790LLU;

    t87 = ((x393^(x394%x395))-x396);

    if (t87 != 29060968964LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x397 = INT32_MAX;
	uint64_t x398 = 71583391326LLU;
	int32_t x400 = INT32_MAX;
	uint64_t t88 = 7522321075LLU;

    t88 = ((x397^(x398%x399))-x400);

    if (t88 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x405 = 3819712768193700LL;
	int8_t x406 = 5;
	uint32_t x407 = 394346U;
	uint16_t x408 = 59U;

    t89 = ((x405^(x406%x407))-x408);

    if (t89 != 3819712768193638LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x410 = INT32_MIN;
	static int8_t x411 = INT8_MIN;
	int16_t x412 = INT16_MIN;

    t90 = ((x409^(x410%x411))-x412);

    if (t90 != 32767LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x413 = INT16_MIN;
	uint32_t x414 = 53U;
	int32_t x416 = 181270999;
	volatile uint64_t t91 = 1LLU;

    t91 = ((x413^(x414%x415))-x416);

    if (t91 != 18446744073528247902LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x417 = UINT32_MAX;
	volatile int32_t x418 = INT32_MIN;
	uint64_t x419 = UINT64_MAX;
	int8_t x420 = INT8_MIN;
	uint64_t t92 = 3LLU;

    t92 = ((x417^(x418%x419))-x420);

    if (t92 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x421 = 3LL;
	uint16_t x422 = UINT16_MAX;
	uint64_t x423 = 74305001807479LLU;
	int8_t x424 = INT8_MIN;
	uint64_t t93 = 196464402372504LLU;

    t93 = ((x421^(x422%x423))-x424);

    if (t93 != 65660LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x429 = INT16_MIN;
	volatile int64_t x430 = INT64_MAX;
	int8_t x431 = -1;
	static int64_t t94 = 964751326432LL;

    t94 = ((x429^(x430%x431))-x432);

    if (t94 != -32640LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x437 = INT8_MAX;
	static uint64_t x440 = UINT64_MAX;

    t95 = ((x437^(x438%x439))-x440);

    if (t95 != 32641LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x445 = UINT16_MAX;
	int32_t x446 = -1911856;
	int64_t x447 = INT64_MAX;
	static uint64_t x448 = 61661LLU;
	volatile uint64_t t96 = 219667238704LLU;

    t96 = ((x445^(x446%x447))-x448);

    if (t96 != 18446744073707535186LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x449 = INT64_MIN;
	volatile int16_t x450 = 8949;
	volatile int16_t x451 = -646;
	int64_t x452 = -11187988419187984LL;
	static int64_t t97 = -3822104LL;

    t97 = ((x449^(x450%x451))-x452);

    if (t97 != -9212184048435587273LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x455 = 1U;
	uint32_t x456 = 118U;
	volatile int64_t t98 = 115071LL;

    t98 = ((x453^(x454%x455))-x456);

    if (t98 != 9223372036854775689LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x457 = 343635204U;
	int16_t x459 = -1;
	uint8_t x460 = 19U;

    t99 = ((x457^(x458%x459))-x460);

    if (t99 != 343635185U) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x461 = -1LL;
	int32_t x462 = INT32_MIN;
	int64_t x464 = INT64_MIN;
	volatile int64_t t100 = INT64_MAX;

    t100 = ((x461^(x462%x463))-x464);

    if (t100 != INT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x465 = 1377;
	int16_t x466 = -480;
	uint64_t x467 = UINT64_MAX;
	int32_t x468 = INT32_MAX;
	volatile uint64_t t101 = 2687938110172LLU;

    t101 = ((x465^(x466%x467))-x468);

    if (t101 != 18446744071562066754LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x469 = 8;
	int8_t x470 = INT8_MIN;
	int8_t x471 = INT8_MAX;
	volatile uint32_t x472 = 12486447U;

    t102 = ((x469^(x470%x471))-x472);

    if (t102 != 4282480840U) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x473 = INT64_MIN;
	volatile int16_t x474 = INT16_MAX;
	int32_t x475 = INT32_MIN;
	int16_t x476 = INT16_MIN;
	static volatile int64_t t103 = -13885623LL;

    t103 = ((x473^(x474%x475))-x476);

    if (t103 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x477 = INT64_MAX;
	int64_t x479 = 130015LL;
	static int16_t x480 = -1;
	volatile int64_t t104 = 504468444387869675LL;

    t104 = ((x477^(x478%x479))-x480);

    if (t104 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x481 = INT8_MIN;
	static uint16_t x482 = 785U;
	volatile int8_t x483 = -1;
	volatile uint32_t x484 = UINT32_MAX;
	volatile uint32_t t105 = 1860U;

    t105 = ((x481^(x482%x483))-x484);

    if (t105 != 4294967169U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x485 = 5U;
	int8_t x486 = INT8_MIN;
	uint64_t x487 = 203744762810687LLU;
	volatile int32_t x488 = INT32_MIN;
	uint64_t t106 = 190515746LLU;

    t106 = ((x485^(x486%x487))-x488);

    if (t106 != 100740503055535LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x489 = INT16_MIN;
	volatile uint64_t x490 = 2042142586572LLU;
	int16_t x491 = INT16_MAX;
	uint64_t t107 = 7LLU;

    t107 = ((x489^(x490%x491))-x492);

    if (t107 != 18446744073709547799LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x493 = INT16_MIN;
	static int64_t x494 = INT64_MIN;
	volatile int32_t x495 = -15762017;
	static uint16_t x496 = UINT16_MAX;
	volatile int64_t t108 = 4LL;

    t108 = ((x493^(x494%x495))-x496);

    if (t108 != 8122251LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x498 = 571667534LL;
	int64_t t109 = 6617524564700613LL;

    t109 = ((x497^(x498%x499))-x500);

    if (t109 != 9223372036283108273LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x503 = INT16_MIN;
	int8_t x504 = 1;
	int32_t t110 = 29918;

    t110 = ((x501^(x502%x503))-x504);

    if (t110 != -129) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x505 = -1;
	uint64_t x506 = 23LLU;
	volatile int8_t x507 = INT8_MAX;
	int16_t x508 = INT16_MIN;
	volatile uint64_t t111 = 2LLU;

    t111 = ((x505^(x506%x507))-x508);

    if (t111 != 32744LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x509 = 382621838U;
	volatile int32_t x510 = -77566;
	uint64_t x511 = 1808004686940466LLU;
	uint8_t x512 = 6U;
	static uint64_t t112 = 91LLU;

    t112 = ((x509^(x510%x511))-x512);

    if (t112 != 1480257388021466LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x513 = 152212631LL;
	uint16_t x515 = UINT16_MAX;
	static uint32_t x516 = 23U;
	int64_t t113 = -5256482546LL;

    t113 = ((x513^(x514%x515))-x516);

    if (t113 != 152212689LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x518 = -1;
	int64_t x520 = 17317245403130LL;
	volatile uint64_t t114 = 3266425LLU;

    t114 = ((x517^(x518%x519))-x520);

    if (t114 != 18446726755537084919LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x521 = 108U;
	uint32_t x522 = 17879900U;
	volatile int8_t x523 = 18;
	int16_t x524 = INT16_MAX;

    t115 = ((x521^(x522%x523))-x524);

    if (t115 != 4294934627U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x525 = 0;
	uint8_t x528 = 2U;
	volatile uint64_t t116 = 3716144716485LLU;

    t116 = ((x525^(x526%x527))-x528);

    if (t116 != 65533LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x529 = -1LL;
	uint8_t x530 = UINT8_MAX;
	static volatile int64_t x531 = -401718LL;
	uint32_t x532 = 1548648462U;
	volatile int64_t t117 = 102LL;

    t117 = ((x529^(x530%x531))-x532);

    if (t117 != -1548648718LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x534 = -23;
	uint16_t x536 = 5U;
	volatile uint64_t t118 = 10247LLU;

    t118 = ((x533^(x534%x535))-x536);

    if (t118 != 64824LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x538 = INT8_MAX;
	static int64_t x539 = -1LL;
	static int64_t t119 = 366459674065815LL;

    t119 = ((x537^(x538%x539))-x540);

    if (t119 != -4294967296LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x543 = -6;
	static int32_t x544 = -3989;
	static volatile int32_t t120 = 129103;

    t120 = ((x541^(x542%x543))-x544);

    if (t120 != 36755) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x545 = INT8_MIN;
	uint16_t x546 = 154U;
	volatile int32_t x547 = INT32_MAX;
	int8_t x548 = 0;
	volatile int32_t t121 = -6309242;

    t121 = ((x545^(x546%x547))-x548);

    if (t121 != -230) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x549 = 1;
	int16_t x551 = -3079;
	uint64_t x552 = 120173754491LLU;
	volatile uint64_t t122 = 54LLU;

    t122 = ((x549^(x550%x551))-x552);

    if (t122 != 18446743953535796914LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x555 = -2;
	int8_t x556 = -15;

    t123 = ((x553^(x554%x555))-x556);

    if (t123 != -588) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x558 = 7U;
	int32_t x559 = INT32_MIN;
	volatile int64_t x560 = INT64_MIN;
	volatile int64_t t124 = 13820987355LL;

    t124 = ((x557^(x558%x559))-x560);

    if (t124 != 9215981403598235256LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x561 = INT64_MIN;
	uint64_t x562 = 1869782LLU;
	int32_t x563 = INT32_MIN;
	static uint16_t x564 = 48U;
	static uint64_t t125 = 106722566320553LLU;

    t125 = ((x561^(x562%x563))-x564);

    if (t125 != 9223372036856645542LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x565 = INT8_MIN;
	int16_t x566 = INT16_MIN;
	uint64_t x567 = 4359115230703931015LLU;
	static int8_t x568 = INT8_MAX;
	volatile uint64_t t126 = 37381LLU;

    t126 = ((x565^(x566%x567))-x568);

    if (t126 != 17436460922815756773LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x573 = INT64_MIN;
	static uint32_t x574 = UINT32_MAX;
	int32_t x575 = -105610157;
	static uint16_t x576 = UINT16_MAX;
	static int64_t t127 = 127421165747LL;

    t127 = ((x573^(x574%x575))-x576);

    if (t127 != -9223372036749231187LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x577 = 1977900210U;
	int64_t x579 = 25548983973796818LL;
	volatile int64_t x580 = 15710294670LL;
	int64_t t128 = 1848962238107LL;

    t128 = ((x577^(x578%x579))-x580);

    if (t128 != -13737478661LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x581 = 23U;
	uint32_t x582 = 41256356U;
	volatile int8_t x583 = -1;
	volatile int64_t x584 = -1145440845LL;

    t129 = ((x581^(x582%x583))-x584);

    if (t129 != 1186697216LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x585 = 3U;
	int64_t x586 = INT64_MIN;
	int64_t x587 = -947523585419LL;
	volatile int32_t x588 = INT32_MIN;
	volatile int64_t t130 = 28775029270718987LL;

    t130 = ((x585^(x586%x587))-x588);

    if (t130 != -267328272806LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x590 = UINT32_MAX;
	static int64_t x591 = -5388921356160454LL;
	volatile uint64_t x592 = 4095865849LLU;
	volatile uint64_t t131 = 8892269925581222LLU;

    t131 = ((x589^(x590%x591))-x592);

    if (t131 != 18446744069613685767LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x593 = INT16_MIN;
	uint8_t x594 = UINT8_MAX;
	uint64_t x595 = UINT64_MAX;
	int64_t x596 = -1LL;
	volatile uint64_t t132 = 522893438079LLU;

    t132 = ((x593^(x594%x595))-x596);

    if (t132 != 18446744073709519104LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x597 = -536535;
	uint32_t x598 = UINT32_MAX;
	int64_t x600 = -4LL;
	static volatile int64_t t133 = 0LL;

    t133 = ((x597^(x598%x599))-x600);

    if (t133 != -4294430758LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x605 = INT8_MIN;
	uint8_t x607 = 11U;
	int64_t x608 = INT64_MAX;
	int64_t t134 = 3113478360636353LL;

    t134 = ((x605^(x606%x607))-x608);

    if (t134 != -9223372036854775687LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x613 = 4;
	uint16_t x614 = UINT16_MAX;
	int16_t x615 = 3841;
	int64_t t135 = 9567861895LL;

    t135 = ((x613^(x614%x615))-x616);

    if (t135 != 235LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x617 = 6874;
	int32_t x619 = INT32_MIN;
	int32_t x620 = -1;
	volatile int32_t t136 = -11170725;

    t136 = ((x617^(x618%x619))-x620);

    if (t136 != -6821) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x621 = UINT16_MAX;
	int32_t x622 = INT32_MIN;
	int64_t x623 = INT64_MIN;

    t137 = ((x621^(x622%x623))-x624);

    if (t137 != 65535LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x625 = UINT64_MAX;
	int64_t x626 = 7500648477956086LL;
	int64_t x627 = 1012402772642LL;
	int8_t x628 = INT8_MIN;
	static volatile uint64_t t138 = 73946450149574LLU;

    t138 = ((x625^(x626%x627))-x628);

    if (t138 != 18446743304971327593LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x630 = UINT8_MAX;
	volatile int8_t x632 = -1;
	uint32_t t139 = 39040U;

    t139 = ((x629^(x630%x631))-x632);

    if (t139 != 2147483904U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x634 = 2928710LLU;
	int32_t x635 = 4;
	uint64_t t140 = 1224992165104327415LLU;

    t140 = ((x633^(x634%x635))-x636);

    if (t140 != 9223372036854750862LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x641 = INT32_MIN;
	uint16_t x642 = UINT16_MAX;
	int16_t x643 = -4;
	volatile int64_t x644 = INT64_MIN;
	int64_t t141 = -6232277645230008LL;

    t141 = ((x641^(x642%x643))-x644);

    if (t141 != 9223372034707292163LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x645 = INT64_MAX;
	uint16_t x646 = 5U;
	int64_t x647 = -1LL;
	int8_t x648 = INT8_MAX;
	volatile int64_t t142 = -734584LL;

    t142 = ((x645^(x646%x647))-x648);

    if (t142 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x649 = UINT64_MAX;
	uint32_t x650 = UINT32_MAX;
	volatile int32_t x651 = INT32_MIN;
	uint32_t x652 = 2138635U;
	static uint64_t t143 = 327567620750552539LLU;

    t143 = ((x649^(x650%x651))-x652);

    if (t143 != 18446744071559929333LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x653 = UINT64_MAX;
	int32_t x654 = 527575700;
	uint8_t x655 = UINT8_MAX;
	uint64_t t144 = 2055LLU;

    t144 = ((x653^(x654%x655))-x656);

    if (t144 != 18446744073709486000LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x657 = -1;
	volatile int32_t x658 = 7083;
	int32_t x659 = INT32_MIN;
	int8_t x660 = INT8_MIN;
	int32_t t145 = -36648;

    t145 = ((x657^(x658%x659))-x660);

    if (t145 != -6956) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x662 = -1;
	int8_t x664 = 6;
	static int32_t t146 = 116689173;

    t146 = ((x661^(x662%x663))-x664);

    if (t146 != -6) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint8_t x665 = 36U;
	static volatile int64_t x666 = INT64_MAX;
	volatile int8_t x668 = -1;
	int64_t t147 = -48915LL;

    t147 = ((x665^(x666%x667))-x668);

    if (t147 != 9223372036854775772LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x673 = INT32_MAX;
	int64_t x674 = INT64_MIN;
	int32_t x675 = -1;
	volatile int64_t t148 = -317038LL;

    t148 = ((x673^(x674%x675))-x676);

    if (t148 != 3386069317LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x678 = -1;
	uint16_t x679 = UINT16_MAX;
	int8_t x680 = INT8_MIN;
	static volatile int32_t t149 = 43494;

    t149 = ((x677^(x678%x679))-x680);

    if (t149 != 126) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x681 = UINT8_MAX;
	volatile uint16_t x682 = 24175U;
	uint16_t x683 = 10U;
	static int32_t t150 = -256305;

    t150 = ((x681^(x682%x683))-x684);

    if (t150 != -2147483397) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x685 = -1;
	int16_t x687 = 2775;
	static int16_t x688 = -2;
	volatile int32_t t151 = 118047;

    t151 = ((x685^(x686%x687))-x688);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x691 = INT32_MIN;
	uint64_t x692 = 11548LLU;
	uint64_t t152 = 1058731326LLU;

    t152 = ((x689^(x690%x691))-x692);

    if (t152 != 4294955747LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x694 = 0;
	int64_t x695 = INT64_MIN;
	uint32_t x696 = UINT32_MAX;
	volatile int64_t t153 = 218411692709LL;

    t153 = ((x693^(x694%x695))-x696);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x705 = 7U;
	uint16_t x706 = UINT16_MAX;
	uint64_t x707 = UINT64_MAX;
	static int8_t x708 = 1;
	static volatile uint64_t t154 = 3710LLU;

    t154 = ((x705^(x706%x707))-x708);

    if (t154 != 65527LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x709 = INT16_MAX;
	volatile int16_t x710 = 16261;
	int32_t x711 = INT32_MIN;
	int32_t x712 = INT32_MAX;

    t155 = ((x709^(x710%x711))-x712);

    if (t155 != -2147467141) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x713 = -1;
	int64_t x714 = INT64_MIN;
	volatile int32_t x715 = INT32_MIN;
	int32_t x716 = INT32_MIN;
	static volatile int64_t t156 = 840578LL;

    t156 = ((x713^(x714%x715))-x716);

    if (t156 != 2147483647LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x717 = -42;
	int64_t x718 = INT64_MAX;
	static uint8_t x720 = 3U;
	int64_t t157 = 2069207LL;

    t157 = ((x717^(x718%x719))-x720);

    if (t157 != -45LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x721 = -1;
	volatile int8_t x722 = -1;
	int32_t x723 = INT32_MIN;
	int8_t x724 = INT8_MAX;
	volatile int32_t t158 = -1;

    t158 = ((x721^(x722%x723))-x724);

    if (t158 != -127) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x726 = INT32_MAX;
	int8_t x727 = -1;
	static int8_t x728 = -1;

    t159 = ((x725^(x726%x727))-x728);

    if (t159 != 2) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x729 = INT32_MAX;
	volatile int64_t x731 = INT64_MIN;
	uint8_t x732 = UINT8_MAX;
	volatile int64_t t160 = -1423473573125231823LL;

    t160 = ((x729^(x730%x731))-x732);

    if (t160 != 2147483265LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x733 = 753932LLU;
	int64_t x734 = -1LL;
	uint32_t x735 = UINT32_MAX;
	int32_t x736 = -1;
	static uint64_t t161 = 170685098156LLU;

    t161 = ((x733^(x734%x735))-x736);

    if (t161 != 18446744073708797684LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x741 = INT32_MIN;
	uint32_t x742 = UINT32_MAX;
	int64_t x743 = INT64_MAX;
	uint64_t x744 = 154LLU;
	uint64_t t162 = 182056LLU;

    t162 = ((x741^(x742%x743))-x744);

    if (t162 != 18446744071562067813LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x746 = 1U;
	volatile int32_t x747 = 632840;
	static int8_t x748 = -1;
	static volatile int32_t t163 = -573058590;

    t163 = ((x745^(x746%x747))-x748);

    if (t163 != 32767) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x749 = UINT64_MAX;
	uint16_t x750 = 0U;
	volatile int32_t x751 = 6274798;
	static volatile uint64_t t164 = 4933454559934LLU;

    t164 = ((x749^(x750%x751))-x752);

    if (t164 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x755 = 6333;
	int8_t x756 = 19;
	volatile int32_t t165 = -244014342;

    t165 = ((x753^(x754%x755))-x756);

    if (t165 != 1687915) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x758 = 125297LL;
	uint8_t x759 = UINT8_MAX;
	int32_t x760 = -5;

    t166 = ((x757^(x758%x759))-x760);

    if (t166 != 97LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x761 = INT8_MIN;
	uint8_t x762 = 49U;
	volatile int8_t x763 = INT8_MIN;
	int64_t x764 = INT64_MIN;
	int64_t t167 = 1LL;

    t167 = ((x761^(x762%x763))-x764);

    if (t167 != 9223372036854775729LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x766 = UINT32_MAX;
	static volatile int64_t x768 = 16299112LL;
	int64_t t168 = -12LL;

    t168 = ((x765^(x766%x767))-x768);

    if (t168 != -16299099LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x769 = -1;
	int16_t x770 = 42;
	int8_t x771 = -1;
	static int16_t x772 = INT16_MIN;
	volatile int32_t t169 = -153838280;

    t169 = ((x769^(x770%x771))-x772);

    if (t169 != 32767) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x773 = 235470578U;
	volatile uint8_t x775 = 1U;
	int8_t x776 = -17;
	volatile uint32_t t170 = 198276367U;

    t170 = ((x773^(x774%x775))-x776);

    if (t170 != 235470595U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x779 = INT8_MIN;
	int16_t x780 = INT16_MIN;
	int32_t t171 = -524;

    t171 = ((x777^(x778%x779))-x780);

    if (t171 != -2147450880) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint8_t x781 = 1U;
	int64_t x782 = INT64_MIN;
	static int32_t x783 = -15;
	uint64_t x784 = UINT64_MAX;
	uint64_t t172 = 69136LLU;

    t172 = ((x781^(x782%x783))-x784);

    if (t172 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x785 = 26;
	static uint8_t x786 = UINT8_MAX;
	int32_t x787 = -218458169;
	volatile int64_t t173 = 523976541827LL;

    t173 = ((x785^(x786%x787))-x788);

    if (t173 != 230LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x790 = 1;
	volatile int8_t x791 = 6;
	uint8_t x792 = UINT8_MAX;
	volatile int64_t t174 = -129420619315210LL;

    t174 = ((x789^(x790%x791))-x792);

    if (t174 != -939LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x793 = INT32_MIN;
	static int8_t x794 = INT8_MIN;
	int8_t x795 = -14;
	int64_t x796 = -1846128663LL;
	int64_t t175 = 913367023LL;

    t175 = ((x793^(x794%x795))-x796);

    if (t175 != 3993612309LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x797 = INT32_MIN;
	static uint32_t x799 = UINT32_MAX;
	static volatile int8_t x800 = INT8_MAX;
	static volatile uint32_t t176 = 53U;

    t176 = ((x797^(x798%x799))-x800);

    if (t176 != 4294967168U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x801 = INT8_MIN;
	uint16_t x802 = 11448U;
	static int16_t x803 = INT16_MAX;
	static volatile int16_t x804 = INT16_MIN;
	static volatile int32_t t177 = -1;

    t177 = ((x801^(x802%x803))-x804);

    if (t177 != 21304) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x805 = 61;
	static int8_t x807 = -1;
	uint16_t x808 = 1881U;
	uint64_t t178 = 720828764174023LLU;

    t178 = ((x805^(x806%x807))-x808);

    if (t178 != 18446744073709549819LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x809 = 1030768998323012LLU;
	static int64_t x812 = INT64_MAX;
	volatile uint64_t t179 = 508LLU;

    t179 = ((x809^(x810%x811))-x812);

    if (t179 != 9224402805853098821LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x813 = 0U;
	int64_t x814 = 2122253832097LL;
	volatile int16_t x815 = 3151;
	int64_t t180 = -892149521189486LL;

    t180 = ((x813^(x814%x815))-x816);

    if (t180 != 282LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x817 = -1;
	uint8_t x818 = 109U;
	int64_t x819 = 84138446704LL;
	static volatile int8_t x820 = INT8_MIN;

    t181 = ((x817^(x818%x819))-x820);

    if (t181 != 18LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x821 = 10775LLU;
	int16_t x822 = INT16_MIN;
	volatile int8_t x823 = INT8_MAX;
	uint16_t x824 = UINT16_MAX;
	static volatile uint64_t t182 = 6737136048048398992LLU;

    t182 = ((x821^(x822%x823))-x824);

    if (t182 != 18446744073709475306LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x825 = 14355474;
	static int32_t x826 = INT32_MIN;
	int64_t x827 = -829LL;
	int64_t t183 = -13886LL;

    t183 = ((x825^(x826%x827))-x828);

    if (t183 != -14356039LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x829 = -1;
	int16_t x831 = 7847;
	uint8_t x832 = 0U;
	volatile int32_t t184 = -3384;

    t184 = ((x829^(x830%x831))-x832);

    if (t184 != -214) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x837 = UINT32_MAX;
	int8_t x838 = INT8_MIN;
	uint32_t x839 = 18660U;
	volatile uint32_t x840 = 7U;
	static uint32_t t185 = 302859U;

    t185 = ((x837^(x838%x839))-x840);

    if (t185 != 4294953660U) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x841 = 32;
	uint32_t x842 = UINT32_MAX;
	volatile int32_t x843 = INT32_MIN;

    t186 = ((x841^(x842%x843))-x844);

    if (t186 != 2147483636U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x845 = UINT32_MAX;
	int32_t x846 = -1;
	volatile int8_t x847 = 7;
	int16_t x848 = INT16_MAX;
	static uint32_t t187 = 115U;

    t187 = ((x845^(x846%x847))-x848);

    if (t187 != 4294934529U) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x850 = INT16_MIN;
	volatile int64_t x851 = -13051091262422LL;
	static volatile int8_t x852 = INT8_MIN;

    t188 = ((x849^(x850%x851))-x852);

    if (t188 != -32586LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x853 = INT16_MAX;
	int16_t x855 = INT16_MAX;
	int8_t x856 = -1;

    t189 = ((x853^(x854%x855))-x856);

    if (t189 != -32767) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x859 = 90209098253710854LLU;
	volatile uint64_t t190 = 2866552498136868LLU;

    t190 = ((x857^(x858%x859))-x860);

    if (t190 != 18446744073535643578LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x861 = INT64_MIN;
	static int64_t x862 = INT64_MAX;
	volatile uint32_t x863 = 3349U;
	int16_t x864 = INT16_MIN;
	static volatile int64_t t191 = -11507LL;

    t191 = ((x861^(x862%x863))-x864);

    if (t191 != -9223372036854741927LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x865 = UINT16_MAX;
	static int64_t x866 = -23468746704991LL;
	int8_t x867 = INT8_MIN;
	int64_t t192 = -459732LL;

    t192 = ((x865^(x866%x867))-x868);

    if (t192 != -65441LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x869 = 7209U;
	int32_t x871 = INT32_MIN;
	volatile int16_t x872 = 1863;
	volatile int32_t t193 = 0;

    t193 = ((x869^(x870%x871))-x872);

    if (t193 != 56463) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x873 = 407648950U;
	int32_t x874 = 196;
	int32_t x875 = -1;
	volatile uint32_t x876 = 6U;

    t194 = ((x873^(x874%x875))-x876);

    if (t194 != 407648944U) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x877 = INT16_MAX;
	int32_t x878 = -1;
	volatile int64_t x880 = 3806723809106410448LL;
	volatile int64_t t195 = 32813178887LL;

    t195 = ((x877^(x878%x879))-x880);

    if (t195 != -3806723809106443216LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x881 = 192U;
	volatile int8_t x882 = -36;
	volatile int64_t x883 = 7311033536224LL;
	static volatile int64_t x884 = INT64_MIN;
	static int64_t t196 = -1145029858LL;

    t196 = ((x881^(x882%x883))-x884);

    if (t196 != 9223372036854775580LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x885 = -1;
	volatile int32_t x888 = INT32_MAX;
	uint64_t t197 = 25LLU;

    t197 = ((x885^(x886%x887))-x888);

    if (t197 != 18446744071562056739LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x890 = -1;
	int16_t x891 = -1;
	int64_t t198 = 952LL;

    t198 = ((x889^(x890%x891))-x892);

    if (t198 != 8603211LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x897 = INT16_MIN;
	int16_t x899 = INT16_MIN;
	int32_t x900 = INT32_MAX;
	int64_t t199 = -1724896718969486868LL;

    t199 = ((x897^(x898%x899))-x900);

    if (t199 != -2147516406LL) { NG(); } else { ; }
	
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


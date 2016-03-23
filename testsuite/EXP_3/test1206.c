
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

static int16_t x7 = INT16_MIN;
int16_t x9 = INT16_MIN;
int8_t x11 = -14;
uint16_t x24 = 1U;
static int16_t x36 = INT16_MIN;
int32_t t5 = -16580699;
int8_t x67 = -1;
int8_t x69 = 27;
uint64_t x75 = 58143648831639LLU;
int8_t x76 = -12;
volatile int32_t t13 = 94086;
int32_t x106 = -3861;
int16_t x107 = -8098;
uint64_t x134 = 28540561942453306LLU;
uint64_t x142 = 71474801717114LLU;
uint64_t x148 = 61LLU;
uint64_t t22 = 425LLU;
uint32_t x154 = UINT32_MAX;
uint32_t t25 = UINT32_MAX;
volatile int16_t x161 = 0;
volatile uint16_t x163 = 9U;
int8_t x170 = -6;
uint16_t x174 = 18U;
static uint32_t x175 = 28863U;
volatile int64_t t29 = 29604465973547LL;
volatile int16_t x182 = INT16_MIN;
uint64_t x183 = 182LLU;
int32_t x184 = -1;
int16_t x191 = INT16_MIN;
volatile int8_t x197 = -40;
int64_t x199 = INT64_MIN;
int64_t x200 = -208321332LL;
volatile int32_t t34 = -694;
volatile int8_t x225 = INT8_MAX;
uint8_t x234 = 9U;
static int32_t x235 = -494202150;
int64_t x240 = INT64_MIN;
uint16_t x254 = 2U;
int16_t x256 = -52;
int16_t x290 = 2850;
int32_t x300 = -1;
int64_t x313 = -20LL;
uint32_t x329 = 3U;
uint64_t x336 = 8LLU;
int32_t t56 = 7;
static uint8_t x337 = 18U;
uint16_t x356 = 5308U;
static int8_t x381 = -15;
static int32_t t64 = -266;
static int8_t x387 = 21;
int32_t t65 = 8113;
int32_t x391 = INT32_MIN;
int32_t x395 = INT32_MIN;
static volatile uint32_t t67 = UINT32_MAX;
volatile uint64_t x397 = UINT64_MAX;
int16_t x412 = 100;
volatile int64_t t72 = 1765884625545824319LL;
int16_t x442 = -1;
uint16_t x443 = UINT16_MAX;
int16_t x446 = 1;
volatile int16_t x454 = -4737;
int16_t x458 = INT16_MIN;
int64_t x460 = 3348207234LL;
volatile int32_t t77 = -493;
int64_t x482 = 1606290479LL;
volatile int64_t t78 = -147805674986LL;
int32_t x492 = -7831;
uint16_t x494 = UINT16_MAX;
static int32_t t81 = 434142604;
volatile int64_t t83 = 543744453372294LL;
uint8_t x506 = UINT8_MAX;
static uint16_t x508 = 10992U;
uint64_t x511 = 1879347975603077192LLU;
int16_t x516 = -1;
volatile uint32_t t86 = 65317U;
uint64_t x518 = 100982426LLU;
static int32_t x521 = 6448868;
static int16_t x527 = -1;
int8_t x528 = INT8_MIN;
int64_t t89 = 2129237010952352LL;
uint8_t x531 = UINT8_MAX;
uint64_t x539 = UINT64_MAX;
volatile uint32_t x541 = 7321U;
volatile int32_t t94 = 25428;
volatile uint32_t x557 = UINT32_MAX;
int16_t x565 = -1;
int32_t x568 = INT32_MIN;
uint16_t x569 = 1U;
int64_t x570 = -1LL;
uint8_t x572 = 1U;
volatile int32_t x575 = INT32_MIN;
int32_t t98 = -488;
static uint32_t x579 = 1192U;
int64_t x584 = 35LL;
static uint64_t t100 = 193173LLU;
static uint8_t x591 = 3U;
int64_t t102 = 3LL;
int16_t x605 = 1;
volatile uint16_t x606 = 3U;
uint32_t x607 = UINT32_MAX;
static volatile int16_t x609 = -1;
int32_t t104 = 893935603;
volatile int16_t x614 = INT16_MAX;
int32_t x622 = INT32_MIN;
volatile int8_t x623 = INT8_MIN;
uint32_t x638 = 32544U;
volatile int8_t x639 = -28;
int64_t x646 = -1LL;
static volatile int64_t t110 = INT64_MIN;
int8_t x649 = -7;
uint32_t x651 = 50644134U;
int64_t x652 = -181483228946327975LL;
int16_t x657 = INT16_MAX;
uint8_t x664 = 35U;
int8_t x666 = -48;
static volatile uint64_t t116 = 277439421LLU;
volatile int32_t x710 = 1308458;
volatile int16_t x729 = INT16_MAX;
int16_t x733 = -1;
int16_t x736 = INT16_MIN;
int32_t t124 = -611244897;
volatile uint32_t t127 = 7926U;
volatile int16_t x757 = -6;
volatile uint64_t t129 = 1192982221LLU;
int16_t x762 = -128;
int8_t x771 = 4;
uint16_t x775 = 639U;
int16_t x789 = INT16_MIN;
static int32_t x798 = INT32_MIN;
volatile int32_t x800 = INT32_MIN;
int64_t x808 = INT64_MIN;
static int64_t x815 = 7251667408669LL;
uint32_t x816 = 222U;
uint32_t x825 = 3729920U;
uint8_t x826 = 89U;
static int8_t x832 = -15;
int8_t x840 = -4;
uint64_t t146 = 450041306672LLU;
int16_t x849 = INT16_MAX;
int64_t x855 = -6050LL;
uint8_t x862 = 3U;
uint64_t x871 = UINT64_MAX;
uint32_t x873 = 0U;
int8_t x887 = -1;
int32_t x905 = 368105;
int64_t x918 = -2042LL;
static volatile uint32_t x923 = 2591030U;
static volatile uint8_t x927 = 0U;
int32_t x929 = 5250825;
volatile uint32_t t164 = 28U;
uint8_t x948 = UINT8_MAX;
static uint32_t x956 = 6U;
static int8_t x957 = INT8_MIN;
int8_t x958 = INT8_MIN;
int64_t x959 = INT64_MIN;
int64_t x964 = INT64_MIN;
uint64_t x975 = 103012932LLU;
int32_t x976 = INT32_MAX;
uint8_t x983 = 44U;
volatile int32_t t170 = 26437;
static int64_t x987 = 11LL;
static uint32_t x988 = UINT32_MAX;
uint16_t x991 = 0U;
int16_t x993 = -1;
uint16_t x1038 = UINT16_MAX;
volatile int8_t x1039 = -1;
static uint16_t x1040 = UINT16_MAX;
uint32_t x1047 = 253576U;
uint64_t x1051 = UINT64_MAX;
int32_t x1053 = INT32_MAX;
uint16_t x1055 = 591U;
int16_t x1056 = 92;
volatile int32_t x1064 = -1;
uint32_t x1069 = 233575448U;
int64_t x1071 = INT64_MIN;
volatile uint64_t x1074 = UINT64_MAX;
static int16_t x1089 = -115;
int8_t x1090 = -1;
static int32_t x1091 = 118055;
int16_t x1101 = -1;
int16_t x1102 = -349;
int8_t x1104 = INT8_MIN;
uint64_t x1120 = 53301LLU;
uint64_t x1124 = 1038236561991LLU;
uint32_t t196 = 13899766U;
int8_t x1127 = INT8_MIN;
int16_t x1133 = INT16_MIN;
int64_t x1136 = -1LL;


void f0(void) {
    	int32_t x5 = INT32_MIN;
	uint32_t x6 = UINT32_MAX;
	volatile int32_t x8 = -4932761;
	volatile uint32_t t0 = 33396U;

    t0 = ((x5*x6)-(x7!=x8));

    if (t0 != 2147483647U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x10 = UINT32_MAX;
	uint16_t x12 = 16101U;
	uint32_t t1 = 239806807U;

    t1 = ((x9*x10)-(x11!=x12));

    if (t1 != 32767U) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x21 = 1373U;
	volatile uint16_t x22 = 66U;
	uint8_t x23 = 5U;
	volatile int32_t t2 = -6793;

    t2 = ((x21*x22)-(x23!=x24));

    if (t2 != 90617) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x25 = -671440230LL;
	volatile uint64_t x26 = 213179LLU;
	static int8_t x27 = INT8_MIN;
	static int32_t x28 = 775;
	volatile uint64_t t3 = 3362162608LLU;

    t3 = ((x25*x26)-(x27!=x28));

    if (t3 != 18446600936752760445LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x33 = 1;
	int64_t x34 = -1LL;
	volatile int64_t x35 = 16854672558LL;
	static volatile int64_t t4 = 271LL;

    t4 = ((x33*x34)-(x35!=x36));

    if (t4 != -2LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x37 = 44;
	static uint8_t x38 = 27U;
	int64_t x39 = 66141623683756195LL;
	static uint64_t x40 = UINT64_MAX;

    t5 = ((x37*x38)-(x39!=x40));

    if (t5 != 1187) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x45 = 12879211106LLU;
	static int8_t x46 = 0;
	int64_t x47 = 12362773264LL;
	static uint32_t x48 = 99U;
	volatile uint64_t t6 = UINT64_MAX;

    t6 = ((x45*x46)-(x47!=x48));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x53 = 362644556435LLU;
	uint16_t x54 = 171U;
	uint64_t x55 = 8105770LLU;
	static uint32_t x56 = 171935501U;
	static uint64_t t7 = 9743464965LLU;

    t7 = ((x53*x54)-(x55!=x56));

    if (t7 != 62012219150384LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x57 = INT32_MIN;
	static int8_t x58 = 0;
	volatile int64_t x59 = INT64_MIN;
	uint16_t x60 = UINT16_MAX;
	volatile int32_t t8 = -1030181047;

    t8 = ((x57*x58)-(x59!=x60));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x61 = 2;
	int64_t x62 = -1LL;
	int16_t x63 = 2484;
	static int8_t x64 = -1;
	volatile int64_t t9 = -11LL;

    t9 = ((x61*x62)-(x63!=x64));

    if (t9 != -3LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x65 = -1;
	volatile uint16_t x66 = 5996U;
	uint64_t x68 = 1579008209455909397LLU;
	volatile int32_t t10 = 447;

    t10 = ((x65*x66)-(x67!=x68));

    if (t10 != -5997) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x70 = UINT16_MAX;
	int64_t x71 = INT64_MIN;
	int64_t x72 = INT64_MIN;
	static int32_t t11 = 453611561;

    t11 = ((x69*x70)-(x71!=x72));

    if (t11 != 1769445) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x73 = -32;
	int8_t x74 = INT8_MIN;
	static int32_t t12 = 1;

    t12 = ((x73*x74)-(x75!=x76));

    if (t12 != 4095) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x81 = INT8_MIN;
	int8_t x82 = 36;
	int8_t x83 = -1;
	volatile int8_t x84 = -1;

    t13 = ((x81*x82)-(x83!=x84));

    if (t13 != -4608) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x89 = 22319;
	volatile uint64_t x90 = 529299570618644195LLU;
	uint16_t x91 = 27U;
	static int32_t x92 = INT32_MIN;
	uint64_t t14 = 4257LLU;

    t14 = ((x89*x90)-(x91!=x92));

    if (t14 != 7520909463406753964LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x93 = -4949;
	uint16_t x94 = UINT16_MAX;
	uint16_t x95 = UINT16_MAX;
	int64_t x96 = INT64_MIN;
	int32_t t15 = -3639746;

    t15 = ((x93*x94)-(x95!=x96));

    if (t15 != -324332716) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x97 = 0U;
	static volatile int8_t x98 = INT8_MAX;
	static uint32_t x99 = UINT32_MAX;
	volatile int16_t x100 = INT16_MIN;
	static int32_t t16 = 2548;

    t16 = ((x97*x98)-(x99!=x100));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x105 = -1;
	uint8_t x108 = 97U;
	static volatile int32_t t17 = 102687945;

    t17 = ((x105*x106)-(x107!=x108));

    if (t17 != 3860) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x113 = UINT64_MAX;
	uint32_t x114 = 84634U;
	static uint32_t x115 = 9879U;
	int32_t x116 = INT32_MAX;
	uint64_t t18 = 2019355960464700201LLU;

    t18 = ((x113*x114)-(x115!=x116));

    if (t18 != 18446744073709466981LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x133 = UINT64_MAX;
	int16_t x135 = INT16_MIN;
	int64_t x136 = INT64_MIN;
	volatile uint64_t t19 = 133799586369114834LLU;

    t19 = ((x133*x134)-(x135!=x136));

    if (t19 != 18418203511767098309LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x137 = 1U;
	static int64_t x138 = -1LL;
	int8_t x139 = INT8_MIN;
	uint32_t x140 = 2U;
	int64_t t20 = -628352640266LL;

    t20 = ((x137*x138)-(x139!=x140));

    if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x141 = INT8_MIN;
	int16_t x143 = INT16_MAX;
	volatile int32_t x144 = 27502038;
	volatile uint64_t t21 = 61874127738349LLU;

    t21 = ((x141*x142)-(x143!=x144));

    if (t21 != 18437595299089761023LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x145 = 709494893490921908LLU;
	int8_t x146 = INT8_MAX;
	static int32_t x147 = -1;

    t22 = ((x145*x146)-(x147!=x148));

    if (t22 != 16318875178508875851LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x149 = 122U;
	static volatile int16_t x150 = -1;
	uint8_t x151 = 64U;
	uint8_t x152 = 7U;
	volatile int32_t t23 = 156218;

    t23 = ((x149*x150)-(x151!=x152));

    if (t23 != -123) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x153 = 6U;
	static uint32_t x155 = UINT32_MAX;
	int8_t x156 = INT8_MIN;
	uint32_t t24 = 18363513U;

    t24 = ((x153*x154)-(x155!=x156));

    if (t24 != 4294967289U) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint32_t x157 = 1060430996U;
	int32_t x158 = INT32_MIN;
	uint32_t x159 = 54609737U;
	int64_t x160 = INT64_MIN;

    t25 = ((x157*x158)-(x159!=x160));

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x162 = UINT32_MAX;
	static uint32_t x164 = 6173548U;
	uint32_t t26 = UINT32_MAX;

    t26 = ((x161*x162)-(x163!=x164));

    if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x169 = 39U;
	static uint64_t x171 = 54807426245228LLU;
	int16_t x172 = 0;
	int32_t t27 = -123715;

    t27 = ((x169*x170)-(x171!=x172));

    if (t27 != -235) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x173 = INT8_MIN;
	int16_t x176 = INT16_MAX;
	int32_t t28 = -2469451;

    t28 = ((x173*x174)-(x175!=x176));

    if (t28 != -2305) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x177 = UINT8_MAX;
	int64_t x178 = -13857360248687LL;
	uint16_t x179 = 609U;
	static volatile int8_t x180 = INT8_MIN;

    t29 = ((x177*x178)-(x179!=x180));

    if (t29 != -3533626863415186LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x181 = 12U;
	volatile int32_t t30 = 173;

    t30 = ((x181*x182)-(x183!=x184));

    if (t30 != -393217) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x189 = 100U;
	uint32_t x190 = 558U;
	volatile int64_t x192 = INT64_MIN;
	uint32_t t31 = 583797857U;

    t31 = ((x189*x190)-(x191!=x192));

    if (t31 != 55799U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x193 = INT16_MIN;
	static int8_t x194 = INT8_MIN;
	volatile uint16_t x195 = UINT16_MAX;
	static volatile uint64_t x196 = 1LLU;
	int32_t t32 = 1;

    t32 = ((x193*x194)-(x195!=x196));

    if (t32 != 4194303) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x198 = -1LL;
	volatile int64_t t33 = 245958035640924916LL;

    t33 = ((x197*x198)-(x199!=x200));

    if (t33 != 39LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x213 = -1;
	volatile int8_t x214 = INT8_MIN;
	volatile int8_t x215 = INT8_MIN;
	int64_t x216 = -1LL;

    t34 = ((x213*x214)-(x215!=x216));

    if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x221 = 2222U;
	int8_t x222 = INT8_MAX;
	volatile int8_t x223 = -1;
	int16_t x224 = INT16_MIN;
	int32_t t35 = -1557687;

    t35 = ((x221*x222)-(x223!=x224));

    if (t35 != 282193) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x226 = 462019347LLU;
	int32_t x227 = INT32_MAX;
	int16_t x228 = 50;
	volatile uint64_t t36 = 668LLU;

    t36 = ((x225*x226)-(x227!=x228));

    if (t36 != 58676457068LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x233 = 2241;
	static uint64_t x236 = 19550159033563282LLU;
	static int32_t t37 = 10805;

    t37 = ((x233*x234)-(x235!=x236));

    if (t37 != 20168) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x237 = INT32_MAX;
	uint64_t x238 = 678LLU;
	static int64_t x239 = INT64_MIN;
	static uint64_t t38 = 1LLU;

    t38 = ((x237*x238)-(x239!=x240));

    if (t38 != 1455993912666LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x245 = 1;
	int8_t x246 = 1;
	uint32_t x247 = UINT32_MAX;
	uint8_t x248 = 1U;
	volatile int32_t t39 = 1057286;

    t39 = ((x245*x246)-(x247!=x248));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x253 = INT8_MIN;
	volatile uint8_t x255 = 11U;
	static volatile int32_t t40 = -100;

    t40 = ((x253*x254)-(x255!=x256));

    if (t40 != -257) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x257 = -1LL;
	int64_t x258 = -4LL;
	uint16_t x259 = UINT16_MAX;
	static int8_t x260 = -1;
	volatile int64_t t41 = -222856600328089440LL;

    t41 = ((x257*x258)-(x259!=x260));

    if (t41 != 3LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x261 = -1;
	uint8_t x262 = UINT8_MAX;
	volatile int64_t x263 = -1LL;
	int32_t x264 = -1;
	volatile int32_t t42 = 847497;

    t42 = ((x261*x262)-(x263!=x264));

    if (t42 != -255) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int8_t x273 = 0;
	int8_t x274 = -1;
	volatile int16_t x275 = 1;
	uint8_t x276 = 63U;
	int32_t t43 = 7806;

    t43 = ((x273*x274)-(x275!=x276));

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x277 = 2864767U;
	static int64_t x278 = -121014160LL;
	int16_t x279 = -940;
	int16_t x280 = INT16_MAX;
	volatile int64_t t44 = -328855870608313386LL;

    t44 = ((x277*x278)-(x279!=x280));

    if (t44 != -346677372100721LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x281 = 1U;
	uint32_t x282 = 1U;
	static volatile uint64_t x283 = UINT64_MAX;
	static int16_t x284 = 48;
	volatile uint32_t t45 = 594370952U;

    t45 = ((x281*x282)-(x283!=x284));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x289 = 147258LLU;
	volatile int8_t x291 = -1;
	int16_t x292 = -1;
	volatile uint64_t t46 = 1136720848593583LLU;

    t46 = ((x289*x290)-(x291!=x292));

    if (t46 != 419685300LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x293 = 1571519666049031617LLU;
	volatile int16_t x294 = INT16_MIN;
	static int64_t x295 = -4327617368LL;
	int8_t x296 = INT8_MAX;
	uint64_t t47 = 30LLU;

    t47 = ((x293*x294)-(x295!=x296));

    if (t47 != 7753036702400086015LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x297 = INT64_MAX;
	volatile int16_t x298 = -1;
	int8_t x299 = 1;
	volatile int64_t t48 = INT64_MIN;

    t48 = ((x297*x298)-(x299!=x300));

    if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x301 = 27U;
	int8_t x302 = INT8_MAX;
	int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MIN;
	volatile int32_t t49 = -880;

    t49 = ((x301*x302)-(x303!=x304));

    if (t49 != 3428) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int8_t x305 = INT8_MIN;
	uint32_t x306 = 31U;
	uint8_t x307 = UINT8_MAX;
	static int16_t x308 = INT16_MAX;
	volatile uint32_t t50 = 386747350U;

    t50 = ((x305*x306)-(x307!=x308));

    if (t50 != 4294963327U) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x309 = INT8_MIN;
	int8_t x310 = -7;
	volatile uint64_t x311 = UINT64_MAX;
	volatile int16_t x312 = 43;
	volatile int32_t t51 = 2;

    t51 = ((x309*x310)-(x311!=x312));

    if (t51 != 895) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x314 = -2889;
	int16_t x315 = INT16_MIN;
	int64_t x316 = INT64_MIN;
	volatile int64_t t52 = -361LL;

    t52 = ((x313*x314)-(x315!=x316));

    if (t52 != 57779LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint64_t x317 = UINT64_MAX;
	static uint64_t x318 = 9564LLU;
	int8_t x319 = INT8_MIN;
	static int8_t x320 = 3;
	volatile uint64_t t53 = 246446163193585866LLU;

    t53 = ((x317*x318)-(x319!=x320));

    if (t53 != 18446744073709542051LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x325 = 159025U;
	int8_t x326 = INT8_MAX;
	int64_t x327 = -1113362722328171LL;
	uint16_t x328 = UINT16_MAX;
	volatile uint32_t t54 = 802U;

    t54 = ((x325*x326)-(x327!=x328));

    if (t54 != 20196174U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x330 = 829U;
	int8_t x331 = INT8_MIN;
	int64_t x332 = -1LL;
	uint32_t t55 = 3U;

    t55 = ((x329*x330)-(x331!=x332));

    if (t55 != 2486U) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x333 = 1641;
	uint16_t x334 = 6U;
	int64_t x335 = INT64_MIN;

    t56 = ((x333*x334)-(x335!=x336));

    if (t56 != 9845) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x338 = INT8_MIN;
	static int32_t x339 = INT32_MIN;
	int32_t x340 = INT32_MIN;
	int32_t t57 = -26;

    t57 = ((x337*x338)-(x339!=x340));

    if (t57 != -2304) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x341 = INT16_MIN;
	uint32_t x342 = UINT32_MAX;
	int64_t x343 = -1LL;
	static uint16_t x344 = 2437U;
	volatile uint32_t t58 = 14393U;

    t58 = ((x341*x342)-(x343!=x344));

    if (t58 != 32767U) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x349 = UINT32_MAX;
	volatile int64_t x350 = -509304005LL;
	static uint8_t x351 = UINT8_MAX;
	static volatile int32_t x352 = 509417;
	int64_t t59 = -4659903931627784LL;

    t59 = ((x349*x350)-(x351!=x352));

    if (t59 != -2187444044687516476LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int32_t x353 = -207;
	int16_t x354 = INT16_MIN;
	volatile uint8_t x355 = UINT8_MAX;
	volatile int32_t t60 = -659;

    t60 = ((x353*x354)-(x355!=x356));

    if (t60 != 6782975) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x361 = -5918;
	int8_t x362 = INT8_MIN;
	volatile int64_t x363 = INT64_MIN;
	int64_t x364 = 453507731273079092LL;
	int32_t t61 = -19136639;

    t61 = ((x361*x362)-(x363!=x364));

    if (t61 != 757503) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x365 = -937;
	volatile int16_t x366 = -1;
	int8_t x367 = INT8_MIN;
	int16_t x368 = -42;
	volatile int32_t t62 = -25397;

    t62 = ((x365*x366)-(x367!=x368));

    if (t62 != 936) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x377 = INT16_MIN;
	int32_t x378 = -1400;
	int64_t x379 = INT64_MIN;
	volatile uint32_t x380 = UINT32_MAX;
	volatile int32_t t63 = -1;

    t63 = ((x377*x378)-(x379!=x380));

    if (t63 != 45875199) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x382 = INT16_MAX;
	int64_t x383 = INT64_MIN;
	static int16_t x384 = -1;

    t64 = ((x381*x382)-(x383!=x384));

    if (t64 != -491506) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x385 = INT8_MIN;
	int8_t x386 = INT8_MIN;
	int16_t x388 = INT16_MIN;

    t65 = ((x385*x386)-(x387!=x388));

    if (t65 != 16383) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x389 = INT32_MIN;
	uint32_t x390 = 10U;
	int64_t x392 = INT64_MIN;
	volatile uint32_t t66 = UINT32_MAX;

    t66 = ((x389*x390)-(x391!=x392));

    if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x393 = 1010285U;
	uint8_t x394 = 0U;
	static int64_t x396 = 2423382314388215LL;

    t67 = ((x393*x394)-(x395!=x396));

    if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x398 = INT64_MAX;
	int64_t x399 = -1LL;
	static int64_t x400 = 1LL;
	volatile uint64_t t68 = 5619729762313516LLU;

    t68 = ((x397*x398)-(x399!=x400));

    if (t68 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x401 = INT8_MIN;
	int8_t x402 = -1;
	volatile uint32_t x403 = 11573501U;
	int16_t x404 = INT16_MIN;
	int32_t t69 = -2;

    t69 = ((x401*x402)-(x403!=x404));

    if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x409 = -36;
	uint8_t x410 = 15U;
	int8_t x411 = INT8_MAX;
	int32_t t70 = 574444890;

    t70 = ((x409*x410)-(x411!=x412));

    if (t70 != -541) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x421 = 35890150LLU;
	int8_t x422 = INT8_MIN;
	int16_t x423 = 11;
	volatile uint64_t x424 = UINT64_MAX;
	uint64_t t71 = 10993541LLU;

    t71 = ((x421*x422)-(x423!=x424));

    if (t71 != 18446744069115612415LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x429 = INT8_MIN;
	int64_t x430 = -1LL;
	uint32_t x431 = UINT32_MAX;
	int64_t x432 = -264633259LL;

    t72 = ((x429*x430)-(x431!=x432));

    if (t72 != 127LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x441 = 535658U;
	uint64_t x444 = 659473LLU;
	uint32_t t73 = 1621U;

    t73 = ((x441*x442)-(x443!=x444));

    if (t73 != 4294431637U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x445 = -1;
	int16_t x447 = -7618;
	int8_t x448 = -7;
	static volatile int32_t t74 = 55;

    t74 = ((x445*x446)-(x447!=x448));

    if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x449 = -973389944793480LL;
	int32_t x450 = 6877;
	int16_t x451 = INT16_MAX;
	int8_t x452 = -1;
	static int64_t t75 = 31384LL;

    t75 = ((x449*x450)-(x451!=x452));

    if (t75 != -6694002650344761961LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x453 = UINT8_MAX;
	uint32_t x455 = UINT32_MAX;
	volatile int64_t x456 = INT64_MIN;
	volatile int32_t t76 = 102970416;

    t76 = ((x453*x454)-(x455!=x456));

    if (t76 != -1207936) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x457 = -1;
	uint32_t x459 = 18963U;

    t77 = ((x457*x458)-(x459!=x460));

    if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int16_t x481 = INT16_MAX;
	int32_t x483 = -2;
	int16_t x484 = -1;

    t78 = ((x481*x482)-(x483!=x484));

    if (t78 != 52633320125392LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x485 = INT8_MIN;
	uint64_t x486 = UINT64_MAX;
	volatile uint16_t x487 = 121U;
	uint16_t x488 = UINT16_MAX;
	static uint64_t t79 = 120733LLU;

    t79 = ((x485*x486)-(x487!=x488));

    if (t79 != 127LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x489 = -7;
	uint8_t x490 = 0U;
	int8_t x491 = INT8_MAX;
	volatile int32_t t80 = 109586955;

    t80 = ((x489*x490)-(x491!=x492));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x493 = UINT8_MAX;
	int8_t x495 = INT8_MIN;
	int64_t x496 = 31367566529842LL;

    t81 = ((x493*x494)-(x495!=x496));

    if (t81 != 16711424) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x497 = 2U;
	uint32_t x498 = 33U;
	int64_t x499 = INT64_MIN;
	uint64_t x500 = UINT64_MAX;
	volatile uint32_t t82 = 1566976U;

    t82 = ((x497*x498)-(x499!=x500));

    if (t82 != 65U) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x501 = -1LL;
	int64_t x502 = -1LL;
	int64_t x503 = INT64_MIN;
	static volatile uint16_t x504 = UINT16_MAX;

    t83 = ((x501*x502)-(x503!=x504));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x505 = 10U;
	int16_t x507 = -1466;
	static int32_t t84 = 35204823;

    t84 = ((x505*x506)-(x507!=x508));

    if (t84 != 2549) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x509 = INT8_MIN;
	uint8_t x510 = 8U;
	static uint32_t x512 = UINT32_MAX;
	volatile int32_t t85 = 24;

    t85 = ((x509*x510)-(x511!=x512));

    if (t85 != -1025) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x513 = -3511;
	uint32_t x514 = UINT32_MAX;
	int16_t x515 = INT16_MAX;

    t86 = ((x513*x514)-(x515!=x516));

    if (t86 != 3510U) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x517 = 26LLU;
	static int32_t x519 = INT32_MIN;
	int8_t x520 = INT8_MIN;
	volatile uint64_t t87 = 129705903607LLU;

    t87 = ((x517*x518)-(x519!=x520));

    if (t87 != 2625543075LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x522 = 2U;
	int8_t x523 = INT8_MIN;
	static volatile int64_t x524 = INT64_MIN;
	int32_t t88 = 3;

    t88 = ((x521*x522)-(x523!=x524));

    if (t88 != 12897735) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x525 = INT16_MIN;
	int64_t x526 = -19279945133LL;

    t89 = ((x525*x526)-(x527!=x528));

    if (t89 != 631765242118143LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x529 = UINT32_MAX;
	int32_t x530 = -3680;
	uint16_t x532 = 2U;
	volatile uint32_t t90 = 181835181U;

    t90 = ((x529*x530)-(x531!=x532));

    if (t90 != 3679U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x537 = 188531;
	uint32_t x538 = 1U;
	uint64_t x540 = 537753552459LLU;
	uint32_t t91 = 24094870U;

    t91 = ((x537*x538)-(x539!=x540));

    if (t91 != 188530U) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x542 = UINT32_MAX;
	static uint32_t x543 = 3588983U;
	volatile int32_t x544 = 935943971;
	volatile uint32_t t92 = 101U;

    t92 = ((x541*x542)-(x543!=x544));

    if (t92 != 4294959974U) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x549 = INT8_MIN;
	int16_t x550 = -1;
	int64_t x551 = -2LL;
	int8_t x552 = INT8_MIN;
	static volatile int32_t t93 = -406035854;

    t93 = ((x549*x550)-(x551!=x552));

    if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x553 = INT16_MAX;
	uint16_t x554 = 1671U;
	static int16_t x555 = 198;
	volatile uint64_t x556 = 65504011195LLU;

    t94 = ((x553*x554)-(x555!=x556));

    if (t94 != 54753656) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x558 = INT16_MIN;
	int8_t x559 = INT8_MAX;
	static uint16_t x560 = UINT16_MAX;
	volatile uint32_t t95 = 95601U;

    t95 = ((x557*x558)-(x559!=x560));

    if (t95 != 32767U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x566 = -1;
	static volatile int16_t x567 = -1;
	int32_t t96 = -2;

    t96 = ((x565*x566)-(x567!=x568));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x571 = INT8_MAX;
	volatile int64_t t97 = -5097935002889504LL;

    t97 = ((x569*x570)-(x571!=x572));

    if (t97 != -2LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x573 = INT8_MIN;
	int8_t x574 = -1;
	int64_t x576 = 17435142530543LL;

    t98 = ((x573*x574)-(x575!=x576));

    if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x577 = 882964;
	static int16_t x578 = -1977;
	int64_t x580 = INT64_MIN;
	volatile int32_t t99 = 6712509;

    t99 = ((x577*x578)-(x579!=x580));

    if (t99 != -1745619829) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x581 = UINT64_MAX;
	uint16_t x582 = UINT16_MAX;
	int64_t x583 = INT64_MAX;

    t100 = ((x581*x582)-(x583!=x584));

    if (t100 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int64_t x589 = INT64_MAX;
	int8_t x590 = -1;
	int16_t x592 = -3;
	int64_t t101 = INT64_MIN;

    t101 = ((x589*x590)-(x591!=x592));

    if (t101 != INT64_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x601 = INT16_MIN;
	int64_t x602 = -1LL;
	int8_t x603 = INT8_MAX;
	int64_t x604 = -1LL;

    t102 = ((x601*x602)-(x603!=x604));

    if (t102 != 32767LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x608 = 103U;
	volatile int32_t t103 = 181198102;

    t103 = ((x605*x606)-(x607!=x608));

    if (t103 != 2) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x610 = INT16_MAX;
	int32_t x611 = -1;
	int8_t x612 = INT8_MAX;

    t104 = ((x609*x610)-(x611!=x612));

    if (t104 != -32768) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x613 = 7;
	volatile int64_t x615 = INT64_MIN;
	static int8_t x616 = 46;
	int32_t t105 = 1;

    t105 = ((x613*x614)-(x615!=x616));

    if (t105 != 229368) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x617 = -1;
	uint64_t x618 = 115780LLU;
	int32_t x619 = -5;
	int16_t x620 = -1;
	uint64_t t106 = 2174897064844LLU;

    t106 = ((x617*x618)-(x619!=x620));

    if (t106 != 18446744073709435835LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x621 = -2386LL;
	volatile uint32_t x624 = 390617U;
	volatile int64_t t107 = -1063806962582LL;

    t107 = ((x621*x622)-(x623!=x624));

    if (t107 != 5123895984127LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x637 = INT8_MAX;
	int32_t x640 = INT32_MIN;
	uint32_t t108 = 5151282U;

    t108 = ((x637*x638)-(x639!=x640));

    if (t108 != 4133087U) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x641 = INT64_MAX;
	static uint64_t x642 = 0LLU;
	static int32_t x643 = INT32_MAX;
	volatile int16_t x644 = INT16_MIN;
	uint64_t t109 = UINT64_MAX;

    t109 = ((x641*x642)-(x643!=x644));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x645 = INT64_MAX;
	int32_t x647 = -1;
	static int8_t x648 = 9;

    t110 = ((x645*x646)-(x647!=x648));

    if (t110 != INT64_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x650 = 209U;
	int32_t t111 = -2661;

    t111 = ((x649*x650)-(x651!=x652));

    if (t111 != -1464) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x653 = 227U;
	volatile uint16_t x654 = UINT16_MAX;
	int64_t x655 = INT64_MAX;
	uint8_t x656 = 2U;
	int32_t t112 = -30;

    t112 = ((x653*x654)-(x655!=x656));

    if (t112 != 14876444) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x658 = 2U;
	int16_t x659 = INT16_MIN;
	uint16_t x660 = UINT16_MAX;
	volatile int32_t t113 = 211;

    t113 = ((x657*x658)-(x659!=x660));

    if (t113 != 65533) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x661 = INT32_MAX;
	static volatile uint64_t x662 = UINT64_MAX;
	volatile uint64_t x663 = 127250687165LLU;
	static uint64_t t114 = 498216662820808720LLU;

    t114 = ((x661*x662)-(x663!=x664));

    if (t114 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x665 = 1U;
	int8_t x667 = INT8_MAX;
	static int32_t x668 = INT32_MAX;
	volatile int32_t t115 = 0;

    t115 = ((x665*x666)-(x667!=x668));

    if (t115 != -49) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x669 = INT64_MAX;
	uint64_t x670 = UINT64_MAX;
	int32_t x671 = -1;
	volatile uint8_t x672 = UINT8_MAX;

    t116 = ((x669*x670)-(x671!=x672));

    if (t116 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x677 = -1LL;
	static int64_t x678 = 6952606LL;
	uint16_t x679 = 21383U;
	uint16_t x680 = 1824U;
	static int64_t t117 = 100001924LL;

    t117 = ((x677*x678)-(x679!=x680));

    if (t117 != -6952607LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x685 = -14LL;
	static volatile int8_t x686 = INT8_MIN;
	uint8_t x687 = 1U;
	static int32_t x688 = INT32_MIN;
	volatile int64_t t118 = 1834LL;

    t118 = ((x685*x686)-(x687!=x688));

    if (t118 != 1791LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x689 = 124U;
	uint16_t x690 = 0U;
	uint64_t x691 = 417539LLU;
	volatile int32_t x692 = INT32_MIN;
	int32_t t119 = 6963;

    t119 = ((x689*x690)-(x691!=x692));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int32_t x709 = -640;
	static uint8_t x711 = 0U;
	int32_t x712 = INT32_MIN;
	static int32_t t120 = 7;

    t120 = ((x709*x710)-(x711!=x712));

    if (t120 != -837413121) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x713 = UINT8_MAX;
	int8_t x714 = -1;
	uint64_t x715 = 5117896304738LLU;
	static int16_t x716 = 1;
	volatile int32_t t121 = -14802711;

    t121 = ((x713*x714)-(x715!=x716));

    if (t121 != -256) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x725 = INT8_MIN;
	uint32_t x726 = 20U;
	int32_t x727 = -379875864;
	int64_t x728 = INT64_MAX;
	volatile uint32_t t122 = 1U;

    t122 = ((x725*x726)-(x727!=x728));

    if (t122 != 4294964735U) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x730 = -1;
	int16_t x731 = INT16_MIN;
	uint16_t x732 = UINT16_MAX;
	static volatile int32_t t123 = 108;

    t123 = ((x729*x730)-(x731!=x732));

    if (t123 != -32768) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x734 = UINT16_MAX;
	int32_t x735 = -1;

    t124 = ((x733*x734)-(x735!=x736));

    if (t124 != -65536) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x737 = -1;
	int8_t x738 = INT8_MIN;
	int16_t x739 = 2;
	uint8_t x740 = 126U;
	static int32_t t125 = -660614;

    t125 = ((x737*x738)-(x739!=x740));

    if (t125 != 127) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x745 = INT16_MIN;
	static int16_t x746 = 0;
	int16_t x747 = INT16_MAX;
	int8_t x748 = 55;
	volatile int32_t t126 = 17;

    t126 = ((x745*x746)-(x747!=x748));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x749 = INT16_MAX;
	uint32_t x750 = UINT32_MAX;
	int64_t x751 = -1LL;
	int8_t x752 = INT8_MIN;

    t127 = ((x749*x750)-(x751!=x752));

    if (t127 != 4294934528U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x753 = -1;
	int8_t x754 = 2;
	static int32_t x755 = INT32_MIN;
	static uint32_t x756 = 97U;
	int32_t t128 = -8;

    t128 = ((x753*x754)-(x755!=x756));

    if (t128 != -3) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x758 = 8747569248106330829LLU;
	volatile int64_t x759 = -1LL;
	static int8_t x760 = -1;

    t129 = ((x757*x758)-(x759!=x760));

    if (t129 != 2854816732490669874LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x761 = 974760U;
	volatile int16_t x763 = 3412;
	int8_t x764 = INT8_MIN;
	volatile uint32_t t130 = 8U;

    t130 = ((x761*x762)-(x763!=x764));

    if (t130 != 4170198015U) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x769 = -3;
	volatile int16_t x770 = INT16_MIN;
	volatile uint16_t x772 = UINT16_MAX;
	int32_t t131 = -29;

    t131 = ((x769*x770)-(x771!=x772));

    if (t131 != 98303) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x773 = UINT16_MAX;
	int64_t x774 = -340390LL;
	volatile int32_t x776 = 61977;
	static volatile int64_t t132 = -23533782622984LL;

    t132 = ((x773*x774)-(x775!=x776));

    if (t132 != -22307458651LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x777 = 0;
	volatile int64_t x778 = 3993182684956235LL;
	int8_t x779 = -1;
	int16_t x780 = INT16_MIN;
	volatile int64_t t133 = 55212445LL;

    t133 = ((x777*x778)-(x779!=x780));

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x790 = INT8_MIN;
	uint64_t x791 = UINT64_MAX;
	int64_t x792 = -1LL;
	int32_t t134 = -40799965;

    t134 = ((x789*x790)-(x791!=x792));

    if (t134 != 4194304) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x793 = -60;
	int64_t x794 = 109658285236769014LL;
	int8_t x795 = 28;
	static int64_t x796 = INT64_MAX;
	volatile int64_t t135 = 241LL;

    t135 = ((x793*x794)-(x795!=x796));

    if (t135 != -6579497114206140841LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x797 = UINT64_MAX;
	static int16_t x799 = INT16_MAX;
	volatile uint64_t t136 = 4520490625807712681LLU;

    t136 = ((x797*x798)-(x799!=x800));

    if (t136 != 2147483647LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x801 = INT8_MAX;
	volatile uint8_t x802 = 45U;
	int32_t x803 = -1;
	static int64_t x804 = INT64_MIN;
	int32_t t137 = 38828722;

    t137 = ((x801*x802)-(x803!=x804));

    if (t137 != 5714) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x805 = 24806U;
	static uint16_t x806 = UINT16_MAX;
	volatile int64_t x807 = INT64_MAX;
	volatile uint32_t t138 = 34102195U;

    t138 = ((x805*x806)-(x807!=x808));

    if (t138 != 1625661209U) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x809 = INT16_MIN;
	int16_t x810 = INT16_MIN;
	uint64_t x811 = UINT64_MAX;
	uint8_t x812 = UINT8_MAX;
	int32_t t139 = -499;

    t139 = ((x809*x810)-(x811!=x812));

    if (t139 != 1073741823) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x813 = -1;
	int64_t x814 = -1LL;
	int64_t t140 = 685149230LL;

    t140 = ((x813*x814)-(x815!=x816));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x817 = UINT8_MAX;
	int32_t x818 = -1;
	int8_t x819 = -44;
	int64_t x820 = 1560282494506LL;
	int32_t t141 = -1013;

    t141 = ((x817*x818)-(x819!=x820));

    if (t141 != -256) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x821 = 3379U;
	uint32_t x822 = 3U;
	volatile uint32_t x823 = UINT32_MAX;
	volatile int64_t x824 = INT64_MIN;
	static uint32_t t142 = 195U;

    t142 = ((x821*x822)-(x823!=x824));

    if (t142 != 10136U) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x827 = -1;
	int8_t x828 = -1;
	uint32_t t143 = 42469274U;

    t143 = ((x825*x826)-(x827!=x828));

    if (t143 != 331962880U) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x829 = -19;
	int8_t x830 = -3;
	int8_t x831 = INT8_MIN;
	volatile int32_t t144 = 6;

    t144 = ((x829*x830)-(x831!=x832));

    if (t144 != 56) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x833 = -45;
	uint32_t x834 = 784050076U;
	static int64_t x835 = INT64_MIN;
	int16_t x836 = INT16_MIN;
	static uint32_t t145 = 0U;

    t145 = ((x833*x834)-(x835!=x836));

    if (t145 != 3372452243U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x837 = 77813LLU;
	volatile int16_t x838 = -4;
	static uint16_t x839 = 685U;

    t146 = ((x837*x838)-(x839!=x840));

    if (t146 != 18446744073709240363LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x841 = 76LL;
	volatile uint16_t x842 = UINT16_MAX;
	int64_t x843 = 1LL;
	volatile int8_t x844 = -1;
	volatile int64_t t147 = -1878339400049931880LL;

    t147 = ((x841*x842)-(x843!=x844));

    if (t147 != 4980659LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x845 = -13LL;
	int64_t x846 = -3006LL;
	int16_t x847 = -1;
	int64_t x848 = -1LL;
	volatile int64_t t148 = 12961122712572LL;

    t148 = ((x845*x846)-(x847!=x848));

    if (t148 != 39078LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int32_t x850 = -1;
	volatile int16_t x851 = 11;
	int8_t x852 = -2;
	volatile int32_t t149 = 51;

    t149 = ((x849*x850)-(x851!=x852));

    if (t149 != -32768) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x853 = -527089889;
	static uint32_t x854 = UINT32_MAX;
	static int32_t x856 = INT32_MIN;
	volatile uint32_t t150 = 0U;

    t150 = ((x853*x854)-(x855!=x856));

    if (t150 != 527089888U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x857 = 15435733U;
	int32_t x858 = INT32_MIN;
	int64_t x859 = INT64_MIN;
	volatile uint8_t x860 = 112U;
	volatile uint32_t t151 = 9860U;

    t151 = ((x857*x858)-(x859!=x860));

    if (t151 != 2147483647U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x861 = UINT16_MAX;
	int64_t x863 = INT64_MAX;
	int32_t x864 = 2672008;
	volatile int32_t t152 = -1435;

    t152 = ((x861*x862)-(x863!=x864));

    if (t152 != 196604) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x869 = INT8_MIN;
	uint8_t x870 = 1U;
	uint16_t x872 = UINT16_MAX;
	int32_t t153 = 0;

    t153 = ((x869*x870)-(x871!=x872));

    if (t153 != -129) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x874 = 63U;
	static uint64_t x875 = 484150345735326713LLU;
	int32_t x876 = INT32_MAX;
	uint32_t t154 = UINT32_MAX;

    t154 = ((x873*x874)-(x875!=x876));

    if (t154 != UINT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x881 = INT16_MAX;
	volatile int32_t x882 = 12412;
	int16_t x883 = INT16_MIN;
	static int64_t x884 = 711887LL;
	volatile int32_t t155 = 325363;

    t155 = ((x881*x882)-(x883!=x884));

    if (t155 != 406704003) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x885 = -1;
	volatile int8_t x886 = 15;
	static int64_t x888 = -6393947636820665LL;
	int32_t t156 = -177;

    t156 = ((x885*x886)-(x887!=x888));

    if (t156 != -16) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x893 = UINT32_MAX;
	static volatile uint64_t x894 = 223538267967LLU;
	int8_t x895 = INT8_MIN;
	uint32_t x896 = 27940165U;
	volatile uint64_t t157 = 49501148373LLU;

    t157 = ((x893*x894)-(x895!=x896));

    if (t157 != 858858266314455232LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x906 = UINT64_MAX;
	uint16_t x907 = 25085U;
	volatile int32_t x908 = 88580;
	uint64_t t158 = 261040LLU;

    t158 = ((x905*x906)-(x907!=x908));

    if (t158 != 18446744073709183510LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x917 = 19U;
	uint16_t x919 = 22144U;
	int32_t x920 = INT32_MIN;
	volatile int64_t t159 = -3878961LL;

    t159 = ((x917*x918)-(x919!=x920));

    if (t159 != -38799LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x921 = INT64_MIN;
	uint64_t x922 = 1LLU;
	int16_t x924 = INT16_MIN;
	static volatile uint64_t t160 = 12672292LLU;

    t160 = ((x921*x922)-(x923!=x924));

    if (t160 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x925 = 3U;
	uint64_t x926 = 114942365LLU;
	int32_t x928 = INT32_MAX;
	uint64_t t161 = 279423LLU;

    t161 = ((x925*x926)-(x927!=x928));

    if (t161 != 344827094LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x930 = UINT64_MAX;
	static uint32_t x931 = UINT32_MAX;
	volatile uint64_t x932 = 10161735LLU;
	uint64_t t162 = 35896465LLU;

    t162 = ((x929*x930)-(x931!=x932));

    if (t162 != 18446744073704300790LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x933 = 69367274LLU;
	static int8_t x934 = INT8_MIN;
	uint8_t x935 = 0U;
	uint32_t x936 = 485U;
	volatile uint64_t t163 = 1109LLU;

    t163 = ((x933*x934)-(x935!=x936));

    if (t163 != 18446744064830540543LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x937 = INT32_MIN;
	uint32_t x938 = 252643U;
	int8_t x939 = INT8_MAX;
	static int64_t x940 = INT64_MIN;

    t164 = ((x937*x938)-(x939!=x940));

    if (t164 != 2147483647U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x945 = UINT8_MAX;
	int16_t x946 = -1617;
	int16_t x947 = INT16_MIN;
	int32_t t165 = -38291;

    t165 = ((x945*x946)-(x947!=x948));

    if (t165 != -412336) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x953 = 34U;
	uint64_t x954 = 1248748LLU;
	volatile uint16_t x955 = UINT16_MAX;
	static volatile uint64_t t166 = 3411067701518LLU;

    t166 = ((x953*x954)-(x955!=x956));

    if (t166 != 42457431LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x960 = UINT64_MAX;
	static volatile int32_t t167 = 2399;

    t167 = ((x957*x958)-(x959!=x960));

    if (t167 != 16383) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x961 = -5803552364174312LL;
	static int8_t x962 = -1;
	int32_t x963 = 33;
	int64_t t168 = 1034320LL;

    t168 = ((x961*x962)-(x963!=x964));

    if (t168 != 5803552364174311LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x973 = INT8_MAX;
	volatile uint16_t x974 = 174U;
	int32_t t169 = -234152;

    t169 = ((x973*x974)-(x975!=x976));

    if (t169 != 22097) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x981 = INT8_MIN;
	static int8_t x982 = INT8_MIN;
	static uint8_t x984 = UINT8_MAX;

    t170 = ((x981*x982)-(x983!=x984));

    if (t170 != 16383) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x985 = -1;
	uint8_t x986 = UINT8_MAX;
	volatile int32_t t171 = 7;

    t171 = ((x985*x986)-(x987!=x988));

    if (t171 != -256) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x989 = -1;
	volatile int8_t x990 = -3;
	uint64_t x992 = 1915LLU;
	static int32_t t172 = -49;

    t172 = ((x989*x990)-(x991!=x992));

    if (t172 != 2) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x994 = UINT32_MAX;
	int8_t x995 = -1;
	uint16_t x996 = UINT16_MAX;
	static volatile uint32_t t173 = 4U;

    t173 = ((x993*x994)-(x995!=x996));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x1001 = INT8_MAX;
	static int8_t x1002 = -1;
	volatile uint32_t x1003 = 70210010U;
	uint8_t x1004 = 4U;
	volatile int32_t t174 = 280009;

    t174 = ((x1001*x1002)-(x1003!=x1004));

    if (t174 != -128) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x1017 = INT32_MIN;
	uint64_t x1018 = 5807LLU;
	uint64_t x1019 = 1988287548290359LLU;
	volatile int8_t x1020 = 12;
	volatile uint64_t t175 = 11617108LLU;

    t175 = ((x1017*x1018)-(x1019!=x1020));

    if (t175 != 18446731603272007679LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x1025 = 6U;
	int64_t x1026 = 0LL;
	volatile uint8_t x1027 = 13U;
	int32_t x1028 = INT32_MAX;
	volatile int64_t t176 = 82399604625995666LL;

    t176 = ((x1025*x1026)-(x1027!=x1028));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1029 = -1;
	uint32_t x1030 = UINT32_MAX;
	int8_t x1031 = INT8_MIN;
	static int64_t x1032 = INT64_MAX;
	uint32_t t177 = 1U;

    t177 = ((x1029*x1030)-(x1031!=x1032));

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint8_t x1037 = 23U;
	volatile int32_t t178 = 3;

    t178 = ((x1037*x1038)-(x1039!=x1040));

    if (t178 != 1507304) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x1041 = 1821U;
	volatile int16_t x1042 = -1;
	int8_t x1043 = INT8_MAX;
	uint64_t x1044 = UINT64_MAX;
	int32_t t179 = -3;

    t179 = ((x1041*x1042)-(x1043!=x1044));

    if (t179 != -1822) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1045 = INT8_MIN;
	int16_t x1046 = INT16_MIN;
	uint64_t x1048 = 83775LLU;
	int32_t t180 = 323;

    t180 = ((x1045*x1046)-(x1047!=x1048));

    if (t180 != 4194303) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x1049 = UINT64_MAX;
	uint64_t x1050 = UINT64_MAX;
	static volatile int8_t x1052 = -1;
	volatile uint64_t t181 = 66426242659347LLU;

    t181 = ((x1049*x1050)-(x1051!=x1052));

    if (t181 != 1LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1054 = 1U;
	static volatile int32_t t182 = -158140;

    t182 = ((x1053*x1054)-(x1055!=x1056));

    if (t182 != 2147483646) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1057 = -118;
	uint64_t x1058 = UINT64_MAX;
	int64_t x1059 = INT64_MIN;
	int8_t x1060 = -15;
	static uint64_t t183 = 697898784212620LLU;

    t183 = ((x1057*x1058)-(x1059!=x1060));

    if (t183 != 117LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1061 = -23865;
	static uint8_t x1062 = UINT8_MAX;
	int32_t x1063 = INT32_MAX;
	int32_t t184 = 26;

    t184 = ((x1061*x1062)-(x1063!=x1064));

    if (t184 != -6085576) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1065 = INT8_MIN;
	int64_t x1066 = 4751806LL;
	static uint16_t x1067 = UINT16_MAX;
	int64_t x1068 = INT64_MIN;
	int64_t t185 = -2347925604296205094LL;

    t185 = ((x1065*x1066)-(x1067!=x1068));

    if (t185 != -608231169LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x1070 = INT16_MAX;
	int64_t x1072 = 3736759LL;
	uint32_t t186 = 3702U;

    t186 = ((x1069*x1070)-(x1071!=x1072));

    if (t186 != 4229950439U) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1073 = -58;
	int64_t x1075 = INT64_MIN;
	int16_t x1076 = -50;
	static uint64_t t187 = 97239LLU;

    t187 = ((x1073*x1074)-(x1075!=x1076));

    if (t187 != 57LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x1077 = 5U;
	static int32_t x1078 = -6458525;
	int8_t x1079 = INT8_MIN;
	int32_t x1080 = INT32_MIN;
	int32_t t188 = 5297237;

    t188 = ((x1077*x1078)-(x1079!=x1080));

    if (t188 != -32292626) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1081 = 1822392737U;
	uint16_t x1082 = 38U;
	uint8_t x1083 = 69U;
	uint32_t x1084 = 498U;
	volatile uint32_t t189 = 9698U;

    t189 = ((x1081*x1082)-(x1083!=x1084));

    if (t189 != 531447269U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1085 = INT16_MIN;
	static volatile int32_t x1086 = -1;
	uint64_t x1087 = UINT64_MAX;
	uint16_t x1088 = UINT16_MAX;
	volatile int32_t t190 = 272;

    t190 = ((x1085*x1086)-(x1087!=x1088));

    if (t190 != 32767) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1092 = -1536LL;
	volatile int32_t t191 = 8;

    t191 = ((x1089*x1090)-(x1091!=x1092));

    if (t191 != 114) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1097 = INT64_MAX;
	uint64_t x1098 = 6503623588685422LLU;
	static volatile int8_t x1099 = INT8_MIN;
	static volatile int64_t x1100 = INT64_MIN;
	volatile uint64_t t192 = 2008641109338061LLU;

    t192 = ((x1097*x1098)-(x1099!=x1100));

    if (t192 != 18440240450120866193LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x1103 = INT64_MAX;
	volatile int32_t t193 = -120053724;

    t193 = ((x1101*x1102)-(x1103!=x1104));

    if (t193 != 348) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1105 = UINT64_MAX;
	int64_t x1106 = -25913808616LL;
	uint64_t x1107 = UINT64_MAX;
	uint16_t x1108 = 11108U;
	uint64_t t194 = 24LLU;

    t194 = ((x1105*x1106)-(x1107!=x1108));

    if (t194 != 25913808615LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1117 = 3LLU;
	uint64_t x1118 = UINT64_MAX;
	static volatile int64_t x1119 = -1LL;
	uint64_t t195 = 187803555LLU;

    t195 = ((x1117*x1118)-(x1119!=x1120));

    if (t195 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x1121 = UINT32_MAX;
	int16_t x1122 = -1;
	uint32_t x1123 = UINT32_MAX;

    t196 = ((x1121*x1122)-(x1123!=x1124));

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1125 = 1;
	uint16_t x1126 = UINT16_MAX;
	uint32_t x1128 = 1276U;
	static volatile int32_t t197 = -1;

    t197 = ((x1125*x1126)-(x1127!=x1128));

    if (t197 != 65534) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1129 = 2U;
	volatile int16_t x1130 = INT16_MIN;
	int64_t x1131 = INT64_MIN;
	int8_t x1132 = INT8_MAX;
	volatile uint32_t t198 = 9U;

    t198 = ((x1129*x1130)-(x1131!=x1132));

    if (t198 != 4294901759U) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x1134 = INT16_MAX;
	int64_t x1135 = -1LL;
	volatile int32_t t199 = 98;

    t199 = ((x1133*x1134)-(x1135!=x1136));

    if (t199 != -1073709056) { NG(); } else { ; }
	
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


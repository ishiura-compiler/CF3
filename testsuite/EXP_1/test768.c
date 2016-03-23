
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
int32_t x5 = 3;
volatile int32_t x6 = 337555;
volatile int32_t t1 = -47;
static int32_t x10 = 7526;
volatile int64_t t2 = 124125592LL;
int32_t x20 = INT32_MIN;
static uint32_t x31 = UINT32_MAX;
uint8_t x35 = 5U;
volatile uint8_t x36 = 39U;
int32_t x41 = INT32_MAX;
uint16_t x42 = UINT16_MAX;
uint16_t x47 = 3U;
int16_t x51 = 1604;
uint64_t t12 = 92531882LLU;
int64_t x54 = INT64_MIN;
volatile int32_t x55 = -14567540;
static uint64_t x60 = UINT64_MAX;
int16_t x61 = -1014;
uint8_t x62 = UINT8_MAX;
static volatile int8_t x69 = INT8_MIN;
static int64_t t17 = 2678241403LL;
uint32_t x76 = 55849267U;
int64_t x79 = INT64_MIN;
int64_t x80 = 58LL;
volatile int64_t t19 = 1592078169LL;
int64_t x84 = INT64_MAX;
int64_t x86 = INT64_MIN;
int64_t x88 = -851513LL;
int64_t t21 = 39LL;
int64_t t22 = -1243558481133306155LL;
volatile uint32_t x96 = 27U;
int16_t x97 = -9;
static uint64_t x100 = UINT64_MAX;
int32_t x110 = INT32_MIN;
int16_t x111 = -1;
static volatile int64_t t27 = 29391893829074LL;
int16_t x119 = INT16_MAX;
uint8_t x127 = UINT8_MAX;
int8_t x129 = INT8_MIN;
int16_t x140 = INT16_MAX;
volatile uint32_t t34 = 3589U;
int16_t x143 = -1;
static int16_t x144 = 412;
uint16_t x149 = UINT16_MAX;
int64_t x154 = -2LL;
static uint64_t t41 = 288445835824LLU;
volatile uint8_t x170 = 21U;
int64_t x171 = -1LL;
int64_t t42 = 6673181795400LL;
int64_t x182 = INT64_MAX;
int64_t t51 = 5164LL;
int16_t x214 = INT16_MIN;
volatile uint16_t x216 = 3U;
int32_t x218 = 213783701;
uint32_t x221 = UINT32_MAX;
uint64_t x226 = UINT64_MAX;
int16_t x228 = 19;
uint64_t t55 = 130815831LLU;
uint8_t x231 = 1U;
int16_t x234 = INT16_MAX;
uint64_t x239 = 300668911566030739LLU;
uint16_t x245 = 7936U;
int64_t x259 = -1LL;
volatile int8_t x267 = INT8_MIN;
int8_t x268 = -58;
int32_t x275 = INT32_MIN;
volatile uint8_t x276 = UINT8_MAX;
uint16_t x280 = UINT16_MAX;
volatile int32_t t68 = -24;
volatile int32_t x289 = INT32_MAX;
int16_t x290 = INT16_MAX;
static volatile int8_t x292 = INT8_MIN;
int16_t x305 = -5;
uint16_t x307 = UINT16_MAX;
int64_t x323 = INT64_MIN;
int64_t x326 = INT64_MAX;
volatile int8_t x336 = INT8_MIN;
int64_t x337 = INT64_MIN;
uint32_t x340 = 16661U;
static volatile uint64_t t82 = 4080175LLU;
int32_t x341 = 503339985;
uint16_t x345 = 102U;
volatile int64_t t84 = -485LL;
static uint8_t x351 = 14U;
int8_t x352 = INT8_MAX;
int32_t t85 = -75;
uint8_t x357 = 17U;
int64_t x365 = -1LL;
static volatile int64_t x367 = 492529278038252LL;
static int64_t t89 = 5247018LL;
uint32_t x379 = UINT32_MAX;
volatile uint32_t t92 = 14402U;
volatile int64_t x382 = INT64_MAX;
int32_t x383 = INT32_MIN;
int32_t x389 = -810;
static volatile uint64_t x390 = UINT64_MAX;
int64_t x391 = INT64_MIN;
volatile uint64_t t95 = 18545676LLU;
static uint64_t t97 = 861984LLU;
static int16_t x401 = INT16_MAX;
uint64_t x406 = 1694668432620246087LLU;
volatile int8_t x412 = INT8_MIN;
int32_t x422 = INT32_MIN;
uint8_t x435 = UINT8_MAX;
uint32_t x437 = UINT32_MAX;
int64_t x444 = -1LL;
int64_t x456 = INT64_MIN;
static uint32_t x459 = UINT32_MAX;
int16_t x461 = INT16_MIN;
volatile int32_t x463 = 21070;
static int32_t x470 = -14310549;
static int8_t x481 = 49;
static volatile int32_t t116 = -2535384;
int16_t x485 = -1;
volatile int8_t x486 = -1;
int32_t x487 = INT32_MIN;
static int64_t t118 = 41LL;
uint64_t x509 = 22034417803773LLU;
static int32_t x510 = INT32_MIN;
int16_t x511 = -14;
static int16_t x520 = 54;
int8_t x521 = -1;
uint32_t x522 = UINT32_MAX;
int32_t x532 = 797533307;
int8_t x533 = -1;
int16_t x535 = 14;
uint32_t x536 = 3U;
volatile int32_t x541 = -1;
int32_t t129 = 16092;
static uint32_t t130 = 872U;
volatile int32_t x550 = INT32_MIN;
int8_t x551 = 1;
int8_t x556 = 1;
int8_t x564 = -1;
uint16_t x566 = 1U;
int8_t x572 = INT8_MIN;
int64_t x573 = 1LL;
static int16_t x574 = -5327;
uint32_t x590 = UINT32_MAX;
static uint64_t x593 = 12332160952863302LLU;
volatile uint32_t x608 = 3655764U;
volatile uint32_t t144 = 1U;
int32_t x611 = -123297538;
uint8_t x614 = 70U;
volatile int32_t t146 = 1595;
int64_t x617 = -1724393748308LL;
static volatile int64_t t147 = -348899446083LL;
int8_t x621 = INT8_MAX;
static volatile int32_t x622 = 621;
volatile int16_t x629 = -1;
uint16_t x632 = 21U;
volatile int64_t x644 = INT64_MAX;
uint32_t x651 = UINT32_MAX;
int64_t x655 = -986745725743164584LL;
static int8_t x657 = INT8_MIN;
uint64_t x665 = 3295LLU;
uint8_t x668 = 78U;
int32_t x670 = 52455819;
static int16_t x672 = 2;
int32_t x677 = -1;
volatile int32_t t162 = INT32_MAX;
static volatile uint64_t x687 = 368LLU;
uint64_t x689 = UINT64_MAX;
int32_t x696 = INT32_MIN;
static int16_t x697 = INT16_MIN;
int32_t t167 = -1;
int32_t x706 = 124144;
volatile int32_t x711 = -15;
volatile int32_t t171 = INT32_MIN;
uint16_t x720 = 1U;
static volatile int32_t x722 = -5972359;
int64_t x723 = -337445791LL;
int32_t x724 = -1;
volatile int32_t x725 = -1;
volatile int64_t t174 = 261462638590699LL;
uint64_t t175 = 17315200548704742LLU;
int64_t x733 = INT64_MIN;
volatile uint64_t t177 = 65317205LLU;
volatile int16_t x743 = -1;
int64_t x746 = -223954933441473LL;
static volatile int64_t x756 = 23692202LL;
volatile uint64_t t182 = 50867736284268111LLU;
int16_t x761 = INT16_MAX;
int32_t x764 = 516805986;
int8_t x769 = -3;
int32_t x774 = INT32_MAX;
volatile uint64_t t187 = 20694935LLU;
int32_t x781 = INT32_MAX;
uint32_t x792 = 26U;
uint32_t t190 = 192891U;
volatile uint32_t t191 = 29U;
volatile int16_t x800 = INT16_MIN;
int32_t x804 = -1;
int32_t t194 = 65015;
int16_t x818 = INT16_MIN;
volatile uint64_t x819 = 1851659879939548563LLU;
volatile uint64_t t197 = 14LLU;
int64_t x827 = INT64_MAX;
uint8_t x828 = 3U;
uint16_t x829 = 213U;


void f0(void) {
    	int16_t x2 = 224;
	int64_t x3 = -3011962231LL;
	int8_t x4 = INT8_MIN;
	int64_t t0 = 74654897660788LL;

    t0 = (((x1/x2)|x3)&x4);

    if (t0 != -3011962240LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x7 = INT16_MIN;
	uint8_t x8 = 7U;

    t1 = (((x5/x6)|x7)&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = -1;
	static uint16_t x11 = 14862U;
	volatile int64_t x12 = INT64_MIN;

    t2 = (((x9/x10)|x11)&x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int32_t x13 = -47;
	volatile int8_t x14 = INT8_MIN;
	int16_t x15 = -1;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 215077;

    t3 = (((x13/x14)|x15)&x16);

    if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = 185663856LL;
	volatile int64_t x18 = INT64_MAX;
	static int16_t x19 = INT16_MIN;
	int64_t t4 = 1674991LL;

    t4 = (((x17/x18)|x19)&x20);

    if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = 13802936885LL;
	int8_t x22 = INT8_MIN;
	static volatile uint64_t x23 = 12799LLU;
	int16_t x24 = 468;
	uint64_t t5 = 16LLU;

    t5 = (((x21/x22)|x23)&x24);

    if (t5 != 468LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = 1263253;
	int8_t x26 = -9;
	int8_t x27 = INT8_MIN;
	int64_t x28 = -3LL;
	volatile int64_t t6 = -9700978LL;

    t6 = (((x25/x26)|x27)&x28);

    if (t6 != -75LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	volatile uint32_t x30 = 62U;
	volatile uint8_t x32 = 31U;
	volatile uint32_t t7 = 60731247U;

    t7 = (((x29/x30)|x31)&x32);

    if (t7 != 31U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 1752359;
	int8_t x34 = INT8_MIN;
	int32_t t8 = 126524066;

    t8 = (((x33/x34)|x35)&x36);

    if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -1LL;
	int16_t x38 = 6639;
	int8_t x39 = 5;
	int64_t x40 = 245557LL;
	static volatile int64_t t9 = -9358019540305LL;

    t9 = (((x37/x38)|x39)&x40);

    if (t9 != 5LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x43 = 57633600U;
	volatile int64_t x44 = -22786219729507LL;
	volatile int64_t t10 = -69257026LL;

    t10 = (((x41/x42)|x43)&x44);

    if (t10 != 57116928LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x45 = 2U;
	int16_t x46 = INT16_MIN;
	volatile int32_t x48 = INT32_MIN;
	int32_t t11 = 124606658;

    t11 = (((x45/x46)|x47)&x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -1;
	int8_t x50 = INT8_MAX;
	volatile uint64_t x52 = 3LLU;

    t12 = (((x49/x50)|x51)&x52);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int16_t x53 = INT16_MIN;
	uint8_t x56 = 8U;
	int64_t t13 = -428535996534189019LL;

    t13 = (((x53/x54)|x55)&x56);

    if (t13 != 8LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x57 = 13;
	uint8_t x58 = 1U;
	int16_t x59 = -1;
	volatile uint64_t t14 = UINT64_MAX;

    t14 = (((x57/x58)|x59)&x60);

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x63 = INT16_MAX;
	static int16_t x64 = INT16_MIN;
	static volatile int32_t t15 = -445419;

    t15 = (((x61/x62)|x63)&x64);

    if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	static int64_t x66 = -3172326LL;
	int32_t x67 = -1;
	int64_t x68 = INT64_MAX;
	int64_t t16 = INT64_MAX;

    t16 = (((x65/x66)|x67)&x68);

    if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x70 = -1;
	int64_t x71 = 785253LL;
	uint16_t x72 = UINT16_MAX;

    t17 = (((x69/x70)|x71)&x72);

    if (t17 != 64485LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	uint32_t x74 = UINT32_MAX;
	int64_t x75 = INT64_MAX;
	int64_t t18 = -5042533257460LL;

    t18 = (((x73/x74)|x75)&x76);

    if (t18 != 55849267LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = 53303;
	volatile int8_t x78 = INT8_MIN;

    t19 = (((x77/x78)|x79)&x80);

    if (t19 != 32LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x81 = 68;
	int32_t x82 = INT32_MAX;
	int16_t x83 = -1;
	static int64_t t20 = INT64_MAX;

    t20 = (((x81/x82)|x83)&x84);

    if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = UINT16_MAX;
	uint32_t x87 = 8257366U;

    t21 = (((x85/x86)|x87)&x88);

    if (t21 != 7405894LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -673LL;
	uint16_t x90 = 4U;
	uint16_t x91 = 26U;
	volatile int32_t x92 = -7;

    t22 = (((x89/x90)|x91)&x92);

    if (t22 != -168LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x93 = INT32_MIN;
	int16_t x94 = -6;
	uint32_t x95 = UINT32_MAX;
	volatile uint32_t t23 = 475U;

    t23 = (((x93/x94)|x95)&x96);

    if (t23 != 27U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x98 = -1;
	int16_t x99 = -1;
	uint64_t t24 = UINT64_MAX;

    t24 = (((x97/x98)|x99)&x100);

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MIN;
	int8_t x102 = -28;
	uint16_t x103 = 254U;
	static int8_t x104 = -48;
	volatile int32_t t25 = -4065;

    t25 = (((x101/x102)|x103)&x104);

    if (t25 != 1232) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x105 = 30U;
	static uint16_t x106 = 672U;
	int64_t x107 = INT64_MAX;
	int8_t x108 = 0;
	volatile int64_t t26 = 13010078LL;

    t26 = (((x105/x106)|x107)&x108);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	int16_t x112 = INT16_MAX;

    t27 = (((x109/x110)|x111)&x112);

    if (t27 != 32767LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -11935LL;
	int16_t x114 = INT16_MIN;
	uint32_t x115 = 1502302U;
	int64_t x116 = 90319656314LL;
	static int64_t t28 = 60290LL;

    t28 = (((x113/x114)|x115)&x116);

    if (t28 != 1082458LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = 3618U;
	int64_t x118 = INT64_MAX;
	int16_t x120 = INT16_MAX;
	volatile int64_t t29 = 522419576175343597LL;

    t29 = (((x117/x118)|x119)&x120);

    if (t29 != 32767LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x121 = UINT64_MAX;
	volatile int8_t x122 = INT8_MIN;
	static volatile int64_t x123 = INT64_MAX;
	uint64_t x124 = 211527LLU;
	static uint64_t t30 = 13307670612388LLU;

    t30 = (((x121/x122)|x123)&x124);

    if (t30 != 211527LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x125 = 2U;
	uint32_t x126 = 9499U;
	uint8_t x128 = 1U;
	uint32_t t31 = 19U;

    t31 = (((x125/x126)|x127)&x128);

    if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x130 = -1;
	int8_t x131 = INT8_MAX;
	int32_t x132 = INT32_MIN;
	static volatile int32_t t32 = 2793259;

    t32 = (((x129/x130)|x131)&x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = 29;
	int8_t x134 = INT8_MIN;
	int64_t x135 = INT64_MAX;
	int16_t x136 = INT16_MAX;
	volatile int64_t t33 = 7051559055LL;

    t33 = (((x133/x134)|x135)&x136);

    if (t33 != 32767LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x137 = 7952517U;
	volatile uint32_t x138 = 4315U;
	static int16_t x139 = INT16_MIN;

    t34 = (((x137/x138)|x139)&x140);

    if (t34 != 1842U) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -1LL;
	volatile int8_t x142 = 1;
	volatile int64_t t35 = 48841152LL;

    t35 = (((x141/x142)|x143)&x144);

    if (t35 != 412LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = UINT8_MAX;
	int16_t x146 = -1;
	int32_t x147 = INT32_MAX;
	int8_t x148 = INT8_MAX;
	static volatile int32_t t36 = -3073439;

    t36 = (((x145/x146)|x147)&x148);

    if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x150 = -1;
	static uint32_t x151 = UINT32_MAX;
	int8_t x152 = INT8_MIN;
	uint32_t t37 = 11U;

    t37 = (((x149/x150)|x151)&x152);

    if (t37 != 4294967168U) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = 3;
	int8_t x155 = 20;
	int32_t x156 = INT32_MAX;
	int64_t t38 = -621194031087582LL;

    t38 = (((x153/x154)|x155)&x156);

    if (t38 != 2147483647LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x157 = INT8_MIN;
	static int64_t x158 = 319865216614LL;
	static int8_t x159 = INT8_MIN;
	volatile int16_t x160 = INT16_MIN;
	static int64_t t39 = 0LL;

    t39 = (((x157/x158)|x159)&x160);

    if (t39 != -32768LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MIN;
	int8_t x162 = INT8_MAX;
	int16_t x163 = INT16_MAX;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t40 = -2692;

    t40 = (((x161/x162)|x163)&x164);

    if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	int64_t x166 = -7029623LL;
	static uint64_t x167 = 7782783LLU;
	uint8_t x168 = 1U;

    t41 = (((x165/x166)|x167)&x168);

    if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MIN;
	int8_t x172 = 17;

    t42 = (((x169/x170)|x171)&x172);

    if (t42 != 17LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MAX;
	volatile int16_t x174 = INT16_MIN;
	uint32_t x175 = 8U;
	int8_t x176 = 1;
	uint32_t t43 = 447246U;

    t43 = (((x173/x174)|x175)&x176);

    if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x177 = 221998LLU;
	int8_t x178 = -1;
	int8_t x179 = INT8_MAX;
	volatile int64_t x180 = 568LL;
	volatile uint64_t t44 = 3856897LLU;

    t44 = (((x177/x178)|x179)&x180);

    if (t44 != 56LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x181 = 2;
	volatile int32_t x183 = -432039689;
	int16_t x184 = -5;
	static volatile int64_t t45 = -1970621531394557LL;

    t45 = (((x181/x182)|x183)&x184);

    if (t45 != -432039693LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x189 = 93U;
	int32_t x190 = -1;
	uint32_t x191 = 625U;
	uint32_t x192 = UINT32_MAX;
	uint32_t t46 = 2006727095U;

    t46 = (((x189/x190)|x191)&x192);

    if (t46 != 4294967283U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x193 = UINT8_MAX;
	int8_t x194 = INT8_MIN;
	int64_t x195 = INT64_MAX;
	uint16_t x196 = 37U;
	int64_t t47 = 100LL;

    t47 = (((x193/x194)|x195)&x196);

    if (t47 != 37LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x197 = 0U;
	int16_t x198 = INT16_MIN;
	uint8_t x199 = UINT8_MAX;
	uint32_t x200 = 552U;
	static volatile uint32_t t48 = 11739U;

    t48 = (((x197/x198)|x199)&x200);

    if (t48 != 40U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x201 = INT8_MIN;
	int64_t x202 = INT64_MIN;
	uint32_t x203 = 9850U;
	static uint16_t x204 = 1442U;
	volatile int64_t t49 = -493633182LL;

    t49 = (((x201/x202)|x203)&x204);

    if (t49 != 1058LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x205 = 1165U;
	volatile int32_t x206 = INT32_MIN;
	volatile int64_t x207 = INT64_MIN;
	static int32_t x208 = INT32_MAX;
	int64_t t50 = -2179041LL;

    t50 = (((x205/x206)|x207)&x208);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x209 = -19LL;
	volatile int32_t x210 = INT32_MIN;
	volatile int32_t x211 = -16647442;
	int32_t x212 = 35;

    t51 = (((x209/x210)|x211)&x212);

    if (t51 != 34LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x213 = 1494041U;
	int8_t x215 = INT8_MIN;
	volatile uint32_t t52 = 425070U;

    t52 = (((x213/x214)|x215)&x216);

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x217 = 0;
	volatile int8_t x219 = 39;
	int32_t x220 = INT32_MIN;
	int32_t t53 = -76786635;

    t53 = (((x217/x218)|x219)&x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x222 = INT16_MIN;
	static int8_t x223 = -10;
	int32_t x224 = -3193;
	volatile uint32_t t54 = 70627385U;

    t54 = (((x221/x222)|x223)&x224);

    if (t54 != 4294964103U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x225 = 2U;
	volatile int16_t x227 = -3625;

    t55 = (((x225/x226)|x227)&x228);

    if (t55 != 19LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x229 = 1;
	volatile int32_t x230 = -105;
	int32_t x232 = 108501406;
	volatile int32_t t56 = -767922;

    t56 = (((x229/x230)|x231)&x232);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x233 = UINT16_MAX;
	static uint8_t x235 = UINT8_MAX;
	uint16_t x236 = 4U;
	int32_t t57 = -1201;

    t57 = (((x233/x234)|x235)&x236);

    if (t57 != 4) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x237 = -3;
	uint8_t x238 = 1U;
	int8_t x240 = -62;
	static volatile uint64_t t58 = 40156992586LLU;

    t58 = (((x237/x238)|x239)&x240);

    if (t58 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x241 = INT32_MAX;
	uint32_t x242 = 125607853U;
	uint16_t x243 = 2270U;
	int8_t x244 = 0;
	volatile uint32_t t59 = 1459181U;

    t59 = (((x241/x242)|x243)&x244);

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x246 = 14508;
	uint32_t x247 = 48200U;
	uint64_t x248 = UINT64_MAX;
	uint64_t t60 = 4004402849193LLU;

    t60 = (((x245/x246)|x247)&x248);

    if (t60 != 48200LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x249 = -911;
	uint64_t x250 = 186765713132LLU;
	int32_t x251 = -70746;
	static volatile int16_t x252 = INT16_MIN;
	volatile uint64_t t61 = 1646LLU;

    t61 = (((x249/x250)|x251)&x252);

    if (t61 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x257 = INT32_MAX;
	static volatile int8_t x258 = 1;
	uint16_t x260 = 3008U;
	int64_t t62 = 879673562851LL;

    t62 = (((x257/x258)|x259)&x260);

    if (t62 != 3008LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x261 = INT32_MIN;
	int64_t x262 = -36LL;
	static int32_t x263 = -1;
	uint16_t x264 = UINT16_MAX;
	static int64_t t63 = -30804075385LL;

    t63 = (((x261/x262)|x263)&x264);

    if (t63 != 65535LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x265 = INT16_MIN;
	int8_t x266 = -58;
	int32_t t64 = 24727833;

    t64 = (((x265/x266)|x267)&x268);

    if (t64 != -124) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x269 = 1;
	int16_t x270 = INT16_MAX;
	int8_t x271 = INT8_MIN;
	volatile uint64_t x272 = UINT64_MAX;
	volatile uint64_t t65 = 9479LLU;

    t65 = (((x269/x270)|x271)&x272);

    if (t65 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x273 = INT8_MAX;
	int64_t x274 = INT64_MIN;
	volatile int64_t t66 = -639907LL;

    t66 = (((x273/x274)|x275)&x276);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x277 = UINT64_MAX;
	int16_t x278 = INT16_MAX;
	int8_t x279 = INT8_MIN;
	uint64_t t67 = 99380153LLU;

    t67 = (((x277/x278)|x279)&x280);

    if (t67 != 65424LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x281 = 16008U;
	volatile uint8_t x282 = 1U;
	static int16_t x283 = INT16_MAX;
	int8_t x284 = INT8_MIN;

    t68 = (((x281/x282)|x283)&x284);

    if (t68 != 32640) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x285 = INT64_MAX;
	int32_t x286 = INT32_MIN;
	volatile int64_t x287 = INT64_MIN;
	volatile uint8_t x288 = 22U;
	volatile int64_t t69 = 455945LL;

    t69 = (((x285/x286)|x287)&x288);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x291 = 5U;
	static int32_t t70 = -886;

    t70 = (((x289/x290)|x291)&x292);

    if (t70 != 65536) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x293 = INT16_MAX;
	int64_t x294 = INT64_MIN;
	static int8_t x295 = INT8_MIN;
	volatile int16_t x296 = -6788;
	int64_t t71 = 46LL;

    t71 = (((x293/x294)|x295)&x296);

    if (t71 != -6912LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x297 = 231680944LL;
	int32_t x298 = INT32_MIN;
	int16_t x299 = INT16_MAX;
	int32_t x300 = 291413;
	volatile int64_t t72 = -4252007831614LL;

    t72 = (((x297/x298)|x299)&x300);

    if (t72 != 29269LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x301 = 2589;
	volatile uint8_t x302 = UINT8_MAX;
	uint8_t x303 = 17U;
	uint32_t x304 = 982202667U;
	uint32_t t73 = 1U;

    t73 = (((x301/x302)|x303)&x304);

    if (t73 != 11U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x306 = INT8_MIN;
	int32_t x308 = -1;
	static int32_t t74 = 52375170;

    t74 = (((x305/x306)|x307)&x308);

    if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x309 = -104891;
	uint64_t x310 = UINT64_MAX;
	uint8_t x311 = 0U;
	uint64_t x312 = 1133854LLU;
	volatile uint64_t t75 = 311628708494872LLU;

    t75 = (((x309/x310)|x311)&x312);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x313 = 10554534843574178LLU;
	int64_t x314 = INT64_MIN;
	int32_t x315 = -29162288;
	volatile uint8_t x316 = 6U;
	uint64_t t76 = 91242505481LLU;

    t76 = (((x313/x314)|x315)&x316);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x317 = INT32_MIN;
	uint16_t x318 = 456U;
	volatile uint64_t x319 = 3308972979651141LLU;
	static int64_t x320 = INT64_MIN;
	uint64_t t77 = 160168121553921LLU;

    t77 = (((x317/x318)|x319)&x320);

    if (t77 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x321 = INT32_MIN;
	volatile uint64_t x322 = UINT64_MAX;
	static volatile int16_t x324 = INT16_MIN;
	volatile uint64_t t78 = 21858836882604LLU;

    t78 = (((x321/x322)|x323)&x324);

    if (t78 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x325 = INT64_MAX;
	int16_t x327 = 1;
	uint64_t x328 = 138835330352775LLU;
	volatile uint64_t t79 = 24907229842LLU;

    t79 = (((x325/x326)|x327)&x328);

    if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x329 = INT8_MIN;
	uint32_t x330 = 346U;
	uint16_t x331 = 16315U;
	static int16_t x332 = INT16_MAX;
	volatile uint32_t t80 = 27757U;

    t80 = (((x329/x330)|x331)&x332);

    if (t80 != 32703U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x333 = UINT32_MAX;
	volatile uint32_t x334 = 210U;
	uint32_t x335 = UINT32_MAX;
	volatile uint32_t t81 = 21236415U;

    t81 = (((x333/x334)|x335)&x336);

    if (t81 != 4294967168U) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x338 = INT64_MIN;
	uint64_t x339 = 108646616057LLU;

    t82 = (((x337/x338)|x339)&x340);

    if (t82 != 16657LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x342 = -1;
	int64_t x343 = -7889919099LL;
	int16_t x344 = INT16_MIN;
	static int64_t t83 = -5LL;

    t83 = (((x341/x342)|x343)&x344);

    if (t83 != -369131520LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x346 = INT32_MIN;
	volatile int8_t x347 = 32;
	int64_t x348 = INT64_MIN;

    t84 = (((x345/x346)|x347)&x348);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x349 = INT32_MIN;
	uint8_t x350 = 6U;

    t85 = (((x349/x350)|x351)&x352);

    if (t85 != 47) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x353 = -1;
	volatile uint64_t x354 = 13030723273LLU;
	int32_t x355 = -1;
	volatile int16_t x356 = INT16_MIN;
	static uint64_t t86 = 29970328028LLU;

    t86 = (((x353/x354)|x355)&x356);

    if (t86 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x358 = 25U;
	static int32_t x359 = -15191512;
	volatile int16_t x360 = INT16_MIN;
	volatile int32_t t87 = 1188;

    t87 = (((x357/x358)|x359)&x360);

    if (t87 != -15204352) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x361 = UINT32_MAX;
	int8_t x362 = -1;
	volatile uint32_t x363 = 1987262130U;
	static int32_t x364 = INT32_MIN;
	volatile uint32_t t88 = 1570425617U;

    t88 = (((x361/x362)|x363)&x364);

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x366 = INT16_MIN;
	static int32_t x368 = INT32_MIN;

    t89 = (((x365/x366)|x367)&x368);

    if (t89 != 492527522152448LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x369 = UINT64_MAX;
	volatile uint32_t x370 = UINT32_MAX;
	static uint16_t x371 = 62U;
	int64_t x372 = INT64_MIN;
	uint64_t t90 = 192626291726LLU;

    t90 = (((x369/x370)|x371)&x372);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x373 = INT8_MIN;
	volatile int32_t x374 = INT32_MIN;
	uint32_t x375 = UINT32_MAX;
	int16_t x376 = -1;
	volatile uint32_t t91 = UINT32_MAX;

    t91 = (((x373/x374)|x375)&x376);

    if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x377 = -1;
	uint16_t x378 = UINT16_MAX;
	int8_t x380 = INT8_MAX;

    t92 = (((x377/x378)|x379)&x380);

    if (t92 != 127U) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x381 = -5;
	static uint64_t x384 = 5550015LLU;
	uint64_t t93 = 102562LLU;

    t93 = (((x381/x382)|x383)&x384);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x385 = -1LL;
	static uint8_t x386 = 49U;
	static volatile int64_t x387 = 208LL;
	int8_t x388 = INT8_MIN;
	volatile int64_t t94 = -770323161849LL;

    t94 = (((x385/x386)|x387)&x388);

    if (t94 != 128LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x392 = -4;

    t95 = (((x389/x390)|x391)&x392);

    if (t95 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x393 = INT32_MAX;
	volatile int8_t x394 = 1;
	volatile int32_t x395 = 43;
	int16_t x396 = -1;
	static int32_t t96 = INT32_MAX;

    t96 = (((x393/x394)|x395)&x396);

    if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x397 = INT64_MIN;
	static int32_t x398 = INT32_MIN;
	uint64_t x399 = UINT64_MAX;
	volatile int32_t x400 = INT32_MIN;

    t97 = (((x397/x398)|x399)&x400);

    if (t97 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x402 = 30406548U;
	volatile int64_t x403 = 789235402LL;
	int16_t x404 = INT16_MIN;
	volatile int64_t t98 = -2230341LL;

    t98 = (((x401/x402)|x403)&x404);

    if (t98 != 789217280LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x405 = INT64_MIN;
	volatile int32_t x407 = 49712138;
	int64_t x408 = INT64_MAX;
	volatile uint64_t t99 = 230819626442LLU;

    t99 = (((x405/x406)|x407)&x408);

    if (t99 != 49712143LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x409 = -210;
	volatile int8_t x410 = INT8_MAX;
	int16_t x411 = 10;
	volatile int32_t t100 = 23;

    t100 = (((x409/x410)|x411)&x412);

    if (t100 != -128) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x417 = INT16_MIN;
	uint64_t x418 = UINT64_MAX;
	static volatile uint16_t x419 = UINT16_MAX;
	volatile int32_t x420 = 487027253;
	uint64_t t101 = 3239227646500965LLU;

    t101 = (((x417/x418)|x419)&x420);

    if (t101 != 29237LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x421 = 1;
	int64_t x423 = INT64_MIN;
	volatile int64_t x424 = -1LL;
	int64_t t102 = INT64_MIN;

    t102 = (((x421/x422)|x423)&x424);

    if (t102 != INT64_MIN) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x425 = 8098;
	volatile int32_t x426 = -82983310;
	static int16_t x427 = -1;
	int16_t x428 = -1;
	int32_t t103 = -7858536;

    t103 = (((x425/x426)|x427)&x428);

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x429 = -3942;
	int8_t x430 = -19;
	int64_t x431 = INT64_MIN;
	int64_t x432 = 305962257566111LL;
	volatile int64_t t104 = -30127017LL;

    t104 = (((x429/x430)|x431)&x432);

    if (t104 != 143LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x433 = UINT64_MAX;
	int64_t x434 = -18441LL;
	int32_t x436 = INT32_MIN;
	volatile uint64_t t105 = 5752369575980925777LLU;

    t105 = (((x433/x434)|x435)&x436);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x438 = 80077LLU;
	int8_t x439 = 1;
	volatile int8_t x440 = INT8_MIN;
	volatile uint64_t t106 = 3LLU;

    t106 = (((x437/x438)|x439)&x440);

    if (t106 != 53632LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x441 = 109U;
	uint8_t x442 = UINT8_MAX;
	int32_t x443 = -1;
	volatile int64_t t107 = -207495563152084LL;

    t107 = (((x441/x442)|x443)&x444);

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x445 = 1173494U;
	uint16_t x446 = 3608U;
	int16_t x447 = INT16_MIN;
	int32_t x448 = -487360754;
	static uint32_t t108 = 100112090U;

    t108 = (((x445/x446)|x447)&x448);

    if (t108 != 3807576324U) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x449 = 206275132026613088LLU;
	static int16_t x450 = INT16_MIN;
	int32_t x451 = -158984643;
	int64_t x452 = -20337204434620LL;
	uint64_t t109 = 596693947220408LLU;

    t109 = (((x449/x450)|x451)&x452);

    if (t109 != 18446723736502927364LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x453 = -1LL;
	uint8_t x454 = 2U;
	uint32_t x455 = 1886U;
	int64_t t110 = 90LL;

    t110 = (((x453/x454)|x455)&x456);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x457 = UINT64_MAX;
	volatile int32_t x458 = 9;
	volatile int32_t x460 = 3910202;
	uint64_t t111 = 2511LLU;

    t111 = (((x457/x458)|x459)&x460);

    if (t111 != 3910202LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x462 = 22U;
	uint64_t x464 = 796906167LLU;
	uint64_t t112 = 6017984550956782212LLU;

    t112 = (((x461/x462)|x463)&x464);

    if (t112 != 796906023LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x469 = 1124696LL;
	static volatile int16_t x471 = 1;
	int16_t x472 = INT16_MIN;
	int64_t t113 = -5LL;

    t113 = (((x469/x470)|x471)&x472);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x473 = UINT64_MAX;
	int64_t x474 = -1LL;
	int32_t x475 = 998;
	int32_t x476 = -1;
	uint64_t t114 = 3657LLU;

    t114 = (((x473/x474)|x475)&x476);

    if (t114 != 999LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x477 = INT8_MIN;
	int64_t x478 = -77807491751LL;
	static int8_t x479 = INT8_MIN;
	int8_t x480 = INT8_MAX;
	volatile int64_t t115 = 47612008078485946LL;

    t115 = (((x477/x478)|x479)&x480);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x482 = -1;
	int32_t x483 = INT32_MAX;
	uint16_t x484 = UINT16_MAX;

    t116 = (((x481/x482)|x483)&x484);

    if (t116 != 65535) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x488 = UINT64_MAX;
	uint64_t t117 = 7532946034842LLU;

    t117 = (((x485/x486)|x487)&x488);

    if (t117 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x489 = -1;
	int64_t x490 = -26508LL;
	int8_t x491 = INT8_MIN;
	static int16_t x492 = INT16_MIN;

    t118 = (((x489/x490)|x491)&x492);

    if (t118 != -32768LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x497 = INT8_MIN;
	uint32_t x498 = UINT32_MAX;
	int32_t x499 = 1;
	int64_t x500 = INT64_MIN;
	int64_t t119 = 27LL;

    t119 = (((x497/x498)|x499)&x500);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x505 = -1;
	int8_t x506 = INT8_MIN;
	uint32_t x507 = UINT32_MAX;
	int16_t x508 = INT16_MAX;
	uint32_t t120 = 1676U;

    t120 = (((x505/x506)|x507)&x508);

    if (t120 != 32767U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x512 = INT32_MIN;
	volatile uint64_t t121 = 1461183859644196LLU;

    t121 = (((x509/x510)|x511)&x512);

    if (t121 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint8_t x513 = 0U;
	int16_t x514 = INT16_MIN;
	volatile int8_t x515 = -1;
	static volatile int32_t x516 = INT32_MAX;
	volatile int32_t t122 = INT32_MAX;

    t122 = (((x513/x514)|x515)&x516);

    if (t122 != INT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x517 = INT64_MIN;
	volatile uint16_t x518 = UINT16_MAX;
	volatile uint16_t x519 = 3U;
	volatile int64_t t123 = -7747LL;

    t123 = (((x517/x518)|x519)&x520);

    if (t123 != 2LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x523 = 209;
	int16_t x524 = -1;
	uint32_t t124 = 158U;

    t124 = (((x521/x522)|x523)&x524);

    if (t124 != 209U) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x525 = 48U;
	int64_t x526 = INT64_MAX;
	static uint64_t x527 = UINT64_MAX;
	volatile int8_t x528 = INT8_MIN;
	volatile uint64_t t125 = 4075861061229670LLU;

    t125 = (((x525/x526)|x527)&x528);

    if (t125 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x529 = -1LL;
	uint32_t x530 = 531247070U;
	int64_t x531 = INT64_MIN;
	volatile int64_t t126 = 1LL;

    t126 = (((x529/x530)|x531)&x532);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x534 = INT16_MIN;
	uint32_t t127 = 255255U;

    t127 = (((x533/x534)|x535)&x536);

    if (t127 != 2U) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x537 = -1LL;
	int16_t x538 = -791;
	volatile uint8_t x539 = 43U;
	int8_t x540 = 0;
	volatile int64_t t128 = 1366740442877LL;

    t128 = (((x537/x538)|x539)&x540);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x542 = INT16_MIN;
	volatile int8_t x543 = 2;
	volatile uint16_t x544 = 0U;

    t129 = (((x541/x542)|x543)&x544);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x545 = UINT32_MAX;
	static uint32_t x546 = 5U;
	int8_t x547 = INT8_MAX;
	int32_t x548 = 0;

    t130 = (((x545/x546)|x547)&x548);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x549 = -1;
	int8_t x552 = 0;
	volatile int32_t t131 = -58469;

    t131 = (((x549/x550)|x551)&x552);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x553 = -1293784LL;
	static uint16_t x554 = UINT16_MAX;
	int32_t x555 = -1;
	volatile int64_t t132 = 3992629653190LL;

    t132 = (((x553/x554)|x555)&x556);

    if (t132 != 1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x557 = UINT16_MAX;
	volatile uint64_t x558 = UINT64_MAX;
	static int8_t x559 = INT8_MIN;
	int16_t x560 = INT16_MIN;
	volatile uint64_t t133 = 47915741825860LLU;

    t133 = (((x557/x558)|x559)&x560);

    if (t133 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x561 = UINT32_MAX;
	int16_t x562 = INT16_MIN;
	uint16_t x563 = 430U;
	uint32_t t134 = 3U;

    t134 = (((x561/x562)|x563)&x564);

    if (t134 != 431U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x565 = UINT64_MAX;
	int8_t x567 = -1;
	static int32_t x568 = INT32_MIN;
	static volatile uint64_t t135 = 125060667909LLU;

    t135 = (((x565/x566)|x567)&x568);

    if (t135 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x569 = INT8_MIN;
	int64_t x570 = INT64_MIN;
	uint8_t x571 = UINT8_MAX;
	int64_t t136 = 588011915610LL;

    t136 = (((x569/x570)|x571)&x572);

    if (t136 != 128LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x575 = INT16_MIN;
	static int64_t x576 = INT64_MIN;
	static volatile int64_t t137 = INT64_MIN;

    t137 = (((x573/x574)|x575)&x576);

    if (t137 != INT64_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x577 = INT32_MAX;
	uint32_t x578 = 8966745U;
	uint32_t x579 = 12584611U;
	int16_t x580 = 101;
	uint32_t t138 = 12104676U;

    t138 = (((x577/x578)|x579)&x580);

    if (t138 != 101U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x581 = INT8_MIN;
	int16_t x582 = INT16_MIN;
	volatile uint8_t x583 = UINT8_MAX;
	int64_t x584 = INT64_MIN;
	static volatile int64_t t139 = -67511384565LL;

    t139 = (((x581/x582)|x583)&x584);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint16_t x589 = 494U;
	volatile int16_t x591 = -12949;
	int8_t x592 = INT8_MAX;
	uint32_t t140 = 92U;

    t140 = (((x589/x590)|x591)&x592);

    if (t140 != 107U) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x594 = -1LL;
	volatile int64_t x595 = INT64_MIN;
	static uint64_t x596 = 67661464241LLU;
	volatile uint64_t t141 = 531LLU;

    t141 = (((x593/x594)|x595)&x596);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x597 = INT64_MIN;
	uint8_t x598 = 3U;
	static uint32_t x599 = UINT32_MAX;
	volatile int64_t x600 = -1LL;
	int64_t t142 = -218946111LL;

    t142 = (((x597/x598)|x599)&x600);

    if (t142 != -3074457342754947073LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x601 = 19025U;
	int64_t x602 = INT64_MIN;
	uint8_t x603 = 1U;
	int32_t x604 = INT32_MIN;
	volatile int64_t t143 = -32758755LL;

    t143 = (((x601/x602)|x603)&x604);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int8_t x605 = INT8_MIN;
	int32_t x606 = -1;
	volatile int8_t x607 = -1;

    t144 = (((x605/x606)|x607)&x608);

    if (t144 != 3655764U) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x609 = INT64_MIN;
	static int8_t x610 = INT8_MIN;
	static uint16_t x612 = UINT16_MAX;
	int64_t t145 = -739LL;

    t145 = (((x609/x610)|x611)&x612);

    if (t145 != 41214LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x613 = INT8_MIN;
	int32_t x615 = INT32_MIN;
	int32_t x616 = 15615;

    t146 = (((x613/x614)|x615)&x616);

    if (t146 != 15615) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint16_t x618 = UINT16_MAX;
	volatile int64_t x619 = -1LL;
	int8_t x620 = INT8_MIN;

    t147 = (((x617/x618)|x619)&x620);

    if (t147 != -128LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x623 = INT32_MIN;
	int64_t x624 = INT64_MIN;
	static int64_t t148 = INT64_MIN;

    t148 = (((x621/x622)|x623)&x624);

    if (t148 != INT64_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x625 = 9895006U;
	volatile int8_t x626 = 1;
	static int64_t x627 = INT64_MIN;
	uint16_t x628 = UINT16_MAX;
	int64_t t149 = 192928150431LL;

    t149 = (((x625/x626)|x627)&x628);

    if (t149 != 64606LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x630 = 25;
	static volatile uint32_t x631 = 7404225U;
	volatile uint32_t t150 = 666975745U;

    t150 = (((x629/x630)|x631)&x632);

    if (t150 != 1U) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x633 = INT16_MIN;
	int32_t x634 = INT32_MIN;
	int64_t x635 = INT64_MIN;
	static volatile uint16_t x636 = 1947U;
	int64_t t151 = -97419LL;

    t151 = (((x633/x634)|x635)&x636);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x637 = INT64_MIN;
	int64_t x638 = -12LL;
	int32_t x639 = INT32_MIN;
	int8_t x640 = -1;
	volatile int64_t t152 = -386651243081817LL;

    t152 = (((x637/x638)|x639)&x640);

    if (t152 != -1431655766LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x641 = INT8_MAX;
	static int64_t x642 = -1LL;
	static uint8_t x643 = 78U;
	int64_t t153 = 57603923202532745LL;

    t153 = (((x641/x642)|x643)&x644);

    if (t153 != 9223372036854775759LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x645 = INT8_MIN;
	int32_t x646 = -2090;
	static uint32_t x647 = UINT32_MAX;
	static int16_t x648 = INT16_MAX;
	uint32_t t154 = 31381152U;

    t154 = (((x645/x646)|x647)&x648);

    if (t154 != 32767U) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x649 = 0;
	static int64_t x650 = -365997480940227671LL;
	uint8_t x652 = UINT8_MAX;
	int64_t t155 = -83863460582792450LL;

    t155 = (((x649/x650)|x651)&x652);

    if (t155 != 255LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x653 = 776866341579LL;
	int32_t x654 = -5;
	int64_t x656 = INT64_MIN;
	volatile int64_t t156 = INT64_MIN;

    t156 = (((x653/x654)|x655)&x656);

    if (t156 != INT64_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x658 = 2018252181014LLU;
	uint16_t x659 = 159U;
	int16_t x660 = -333;
	volatile uint64_t t157 = 157LLU;

    t157 = (((x657/x658)|x659)&x660);

    if (t157 != 9139891LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x661 = 24926U;
	static int32_t x662 = -2422;
	uint64_t x663 = 303003376287LLU;
	int8_t x664 = INT8_MAX;
	uint64_t t158 = 1113830032854LLU;

    t158 = (((x661/x662)|x663)&x664);

    if (t158 != 127LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x666 = INT32_MAX;
	int32_t x667 = 2077;
	uint64_t t159 = 185629LLU;

    t159 = (((x665/x666)|x667)&x668);

    if (t159 != 12LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x669 = INT64_MAX;
	static uint64_t x671 = 23251122LLU;
	volatile uint64_t t160 = 283502LLU;

    t160 = (((x669/x670)|x671)&x672);

    if (t160 != 2LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x673 = 7U;
	int64_t x674 = -18692466LL;
	int8_t x675 = -25;
	uint64_t x676 = UINT64_MAX;
	volatile uint64_t t161 = 4171693444692621755LLU;

    t161 = (((x673/x674)|x675)&x676);

    if (t161 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x678 = UINT16_MAX;
	int32_t x679 = INT32_MAX;
	int8_t x680 = -1;

    t162 = (((x677/x678)|x679)&x680);

    if (t162 != INT32_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x681 = INT8_MIN;
	volatile uint8_t x682 = 21U;
	uint32_t x683 = 2859U;
	uint32_t x684 = 88U;
	volatile uint32_t t163 = 12615928U;

    t163 = (((x681/x682)|x683)&x684);

    if (t163 != 88U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x685 = 28759U;
	int64_t x686 = INT64_MAX;
	static volatile uint32_t x688 = UINT32_MAX;
	volatile uint64_t t164 = 160430710301723LLU;

    t164 = (((x685/x686)|x687)&x688);

    if (t164 != 368LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x690 = 5103937476995LLU;
	static uint32_t x691 = 1U;
	volatile int16_t x692 = INT16_MIN;
	volatile uint64_t t165 = 282LLU;

    t165 = (((x689/x690)|x691)&x692);

    if (t165 != 3604480LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x693 = UINT8_MAX;
	static uint32_t x694 = UINT32_MAX;
	uint8_t x695 = UINT8_MAX;
	uint32_t t166 = 6980065U;

    t166 = (((x693/x694)|x695)&x696);

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x698 = -1379467;
	static uint16_t x699 = 1U;
	int16_t x700 = INT16_MIN;

    t167 = (((x697/x698)|x699)&x700);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x701 = INT32_MAX;
	static int8_t x702 = INT8_MIN;
	int8_t x703 = 13;
	volatile int64_t x704 = INT64_MIN;
	int64_t t168 = INT64_MIN;

    t168 = (((x701/x702)|x703)&x704);

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x705 = INT16_MIN;
	int32_t x707 = -392970440;
	uint16_t x708 = 241U;
	volatile int32_t t169 = 1;

    t169 = (((x705/x706)|x707)&x708);

    if (t169 != 48) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x709 = INT16_MIN;
	int8_t x710 = -1;
	volatile int64_t x712 = -712653100LL;
	static volatile int64_t t170 = -3070569380879095899LL;

    t170 = (((x709/x710)|x711)&x712);

    if (t170 != -712653104LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x713 = 8;
	int8_t x714 = -5;
	int8_t x715 = 29;
	int32_t x716 = INT32_MIN;

    t171 = (((x713/x714)|x715)&x716);

    if (t171 != INT32_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x717 = 20U;
	volatile uint64_t x718 = 3434579061294449LLU;
	int8_t x719 = -1;
	volatile uint64_t t172 = 309935701917LLU;

    t172 = (((x717/x718)|x719)&x720);

    if (t172 != 1LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x721 = 1065U;
	volatile int64_t t173 = 263412LL;

    t173 = (((x721/x722)|x723)&x724);

    if (t173 != -337445791LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x726 = -1;
	static uint8_t x727 = 120U;
	int64_t x728 = INT64_MIN;

    t174 = (((x725/x726)|x727)&x728);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x729 = INT32_MIN;
	static uint8_t x730 = 46U;
	volatile uint32_t x731 = 4U;
	volatile uint64_t x732 = 1LLU;

    t175 = (((x729/x730)|x731)&x732);

    if (t175 != 1LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x734 = 7656U;
	volatile int32_t x735 = INT32_MIN;
	int64_t x736 = -5LL;
	int64_t t176 = -3LL;

    t176 = (((x733/x734)|x735)&x736);

    if (t176 != -1371068456LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x737 = INT8_MAX;
	static uint32_t x738 = 20U;
	volatile uint32_t x739 = 74859U;
	uint64_t x740 = UINT64_MAX;

    t177 = (((x737/x738)|x739)&x740);

    if (t177 != 74863LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x741 = INT64_MIN;
	static volatile int8_t x742 = INT8_MAX;
	uint32_t x744 = 226284013U;
	int64_t t178 = -29495467800179LL;

    t178 = (((x741/x742)|x743)&x744);

    if (t178 != 226284013LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t x745 = INT32_MAX;
	int16_t x747 = INT16_MAX;
	int8_t x748 = -3;
	static int64_t t179 = -121337224100644972LL;

    t179 = (((x745/x746)|x747)&x748);

    if (t179 != 32765LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x749 = UINT16_MAX;
	static volatile uint32_t x750 = 5U;
	static int16_t x751 = INT16_MAX;
	static int32_t x752 = 338674116;
	static volatile uint32_t t180 = 39633746U;

    t180 = (((x749/x750)|x751)&x752);

    if (t180 != 16836U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x753 = 1256;
	uint64_t x754 = 3312520626LLU;
	uint64_t x755 = 257827LLU;
	volatile uint64_t t181 = 176LLU;

    t181 = (((x753/x754)|x755)&x756);

    if (t181 != 99106LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x757 = INT64_MIN;
	int64_t x758 = INT64_MIN;
	uint64_t x759 = UINT64_MAX;
	volatile uint16_t x760 = 708U;

    t182 = (((x757/x758)|x759)&x760);

    if (t182 != 708LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x762 = UINT8_MAX;
	volatile int8_t x763 = INT8_MIN;
	static volatile int32_t t183 = 342419;

    t183 = (((x761/x762)|x763)&x764);

    if (t183 != 516805888) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x765 = INT64_MIN;
	int32_t x766 = INT32_MIN;
	uint32_t x767 = UINT32_MAX;
	int64_t x768 = 26LL;
	volatile int64_t t184 = 218771304709816449LL;

    t184 = (((x765/x766)|x767)&x768);

    if (t184 != 26LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x770 = UINT32_MAX;
	int64_t x771 = INT64_MAX;
	uint64_t x772 = UINT64_MAX;
	volatile uint64_t t185 = 792LLU;

    t185 = (((x769/x770)|x771)&x772);

    if (t185 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x773 = -17;
	static uint8_t x775 = 76U;
	int8_t x776 = 36;
	volatile int32_t t186 = 2490102;

    t186 = (((x773/x774)|x775)&x776);

    if (t186 != 4) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x777 = 28904328391LLU;
	static volatile int32_t x778 = 54370;
	uint64_t x779 = 94306LLU;
	static int8_t x780 = 56;

    t187 = (((x777/x778)|x779)&x780);

    if (t187 != 32LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x782 = -45;
	int64_t x783 = INT64_MAX;
	uint32_t x784 = 109415U;
	volatile int64_t t188 = 3859LL;

    t188 = (((x781/x782)|x783)&x784);

    if (t188 != 109415LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x785 = UINT8_MAX;
	uint32_t x786 = UINT32_MAX;
	volatile int64_t x787 = INT64_MAX;
	int8_t x788 = -1;
	int64_t t189 = INT64_MAX;

    t189 = (((x785/x786)|x787)&x788);

    if (t189 != INT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x789 = 1022241004U;
	uint32_t x790 = UINT32_MAX;
	static int16_t x791 = INT16_MAX;

    t190 = (((x789/x790)|x791)&x792);

    if (t190 != 26U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x793 = -1;
	uint32_t x794 = 31818051U;
	uint16_t x795 = UINT16_MAX;
	int32_t x796 = INT32_MIN;

    t191 = (((x793/x794)|x795)&x796);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x797 = 954975;
	volatile uint16_t x798 = 444U;
	int16_t x799 = INT16_MIN;
	int32_t t192 = 7929;

    t192 = (((x797/x798)|x799)&x800);

    if (t192 != -32768) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x801 = 123159478U;
	volatile uint16_t x802 = UINT16_MAX;
	static int8_t x803 = -33;
	uint32_t t193 = 7978U;

    t193 = (((x801/x802)|x803)&x804);

    if (t193 != 4294967263U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x805 = INT32_MIN;
	uint16_t x806 = 288U;
	int32_t x807 = INT32_MIN;
	volatile int16_t x808 = -5;

    t194 = (((x805/x806)|x807)&x808);

    if (t194 != -7456544) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x809 = INT16_MIN;
	volatile uint8_t x810 = 9U;
	int16_t x811 = INT16_MIN;
	volatile uint16_t x812 = 21940U;
	int32_t t195 = -13205703;

    t195 = (((x809/x810)|x811)&x812);

    if (t195 != 20864) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x813 = 830U;
	uint8_t x814 = UINT8_MAX;
	volatile int16_t x815 = 10198;
	uint8_t x816 = UINT8_MAX;
	uint32_t t196 = 6U;

    t196 = (((x813/x814)|x815)&x816);

    if (t196 != 215U) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x817 = INT64_MIN;
	uint16_t x820 = 1787U;

    t197 = (((x817/x818)|x819)&x820);

    if (t197 != 1171LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x825 = INT16_MIN;
	volatile int32_t x826 = INT32_MIN;
	volatile int64_t t198 = 15740784LL;

    t198 = (((x825/x826)|x827)&x828);

    if (t198 != 3LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x830 = INT16_MIN;
	static int32_t x831 = INT32_MAX;
	uint32_t x832 = 256U;
	static uint32_t t199 = 70138076U;

    t199 = (((x829/x830)|x831)&x832);

    if (t199 != 256U) { NG(); } else { ; }
	
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


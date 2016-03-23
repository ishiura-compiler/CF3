
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

static int32_t x6 = 1;
volatile int64_t x8 = INT64_MAX;
static int64_t x10 = INT64_MIN;
int16_t x19 = -1;
static uint64_t x20 = 602916422547LLU;
uint8_t x28 = UINT8_MAX;
uint16_t x31 = 549U;
uint8_t x34 = 4U;
int16_t x36 = INT16_MAX;
int32_t t8 = -16728688;
int16_t x38 = -1;
volatile int8_t x39 = INT8_MIN;
uint64_t x40 = 1370755LLU;
volatile uint64_t t9 = 10387570LLU;
int64_t x41 = INT64_MIN;
uint16_t x43 = UINT16_MAX;
int8_t x45 = -12;
uint32_t x49 = UINT32_MAX;
int8_t x53 = INT8_MAX;
volatile int8_t x54 = INT8_MAX;
volatile int64_t t13 = INT64_MAX;
volatile uint64_t x63 = 45273070544542LLU;
volatile int32_t t15 = -739;
int16_t x74 = 2;
int16_t x75 = 742;
volatile int32_t t18 = 1933;
int32_t t19 = -16663554;
int16_t x84 = INT16_MIN;
static int16_t x86 = -1;
static uint16_t x91 = 2U;
int8_t x93 = 0;
volatile uint32_t x94 = 170115017U;
static uint16_t x97 = UINT16_MAX;
int32_t x105 = -24;
uint64_t t26 = 5496717879374LLU;
static int64_t x110 = INT64_MAX;
uint32_t x115 = 4841U;
int32_t t28 = 244;
static int8_t x117 = 1;
uint64_t t29 = UINT64_MAX;
int16_t x122 = INT16_MIN;
uint32_t x131 = 258955U;
volatile int32_t x137 = INT32_MIN;
uint64_t x152 = 63270014LLU;
static volatile int32_t x157 = -1;
volatile int64_t x158 = 29974800LL;
int8_t x162 = INT8_MAX;
volatile int32_t t40 = -63078;
static uint8_t x166 = 32U;
int16_t x167 = 244;
int32_t t41 = -9818;
static uint64_t x173 = 326067566LLU;
uint8_t x183 = 7U;
int8_t x184 = -1;
volatile int32_t t45 = -490;
volatile int32_t x196 = INT32_MAX;
int32_t x202 = INT32_MIN;
static int64_t x205 = -1LL;
int16_t x207 = INT16_MIN;
int32_t x209 = INT32_MIN;
int8_t x210 = -6;
volatile uint16_t x213 = 1138U;
static volatile int32_t x215 = INT32_MIN;
volatile int32_t t53 = -776403;
int32_t t54 = 15005;
static volatile int32_t t55 = 442734;
int16_t x232 = 49;
volatile uint16_t x233 = UINT16_MAX;
uint32_t x234 = 1413884U;
volatile int32_t x241 = INT32_MIN;
int32_t t60 = 378934248;
int16_t x247 = INT16_MIN;
uint16_t x250 = 2U;
static int16_t x254 = INT16_MAX;
uint16_t x265 = 212U;
int32_t x266 = INT32_MIN;
static uint32_t x274 = UINT32_MAX;
int32_t t69 = -8;
int8_t x287 = 7;
uint64_t x288 = 90LLU;
int32_t x296 = -183665;
int8_t x297 = -1;
uint64_t x311 = 28919108LLU;
int32_t x312 = 6777252;
int32_t x316 = INT32_MAX;
int64_t x319 = INT64_MIN;
int32_t x320 = -1;
int32_t x324 = INT32_MIN;
int8_t x328 = INT8_MAX;
volatile int32_t t81 = -438574875;
uint8_t x329 = 1U;
int64_t x337 = INT64_MAX;
uint16_t x340 = UINT16_MAX;
int64_t x352 = -1LL;
int64_t x355 = -15569997502072LL;
static volatile int32_t t89 = 21;
int64_t x364 = -10826LL;
int64_t x368 = INT64_MIN;
uint16_t x372 = 11374U;
uint16_t x373 = 1U;
int8_t x376 = INT8_MIN;
static volatile int32_t t95 = -1;
static uint32_t x387 = 437972346U;
uint64_t x389 = 2888LLU;
int64_t x391 = INT64_MIN;
volatile int32_t t97 = -1;
static volatile int8_t x393 = -1;
int16_t x412 = -1;
int16_t x415 = INT16_MIN;
volatile uint64_t t104 = 90388405974702LLU;
uint32_t x421 = 75U;
int16_t x428 = -1;
volatile int32_t t106 = 390;
static int16_t x432 = INT16_MAX;
int8_t x435 = INT8_MIN;
int64_t x443 = 13533LL;
static int64_t x444 = -1LL;
uint16_t x449 = 976U;
int32_t x459 = -273250898;
int64_t x475 = INT64_MIN;
int32_t t118 = 502710;
int16_t x492 = -1;
volatile int32_t x493 = INT32_MIN;
int16_t x509 = -64;
int16_t x510 = -3743;
int16_t x511 = INT16_MIN;
int64_t x515 = -1LL;
static uint8_t x516 = UINT8_MAX;
int8_t x518 = 21;
int32_t x529 = INT32_MIN;
int64_t x531 = INT64_MIN;
uint16_t x537 = UINT16_MAX;
volatile uint64_t x539 = UINT64_MAX;
int8_t x543 = INT8_MIN;
volatile uint8_t x546 = 60U;
uint8_t x547 = UINT8_MAX;
uint32_t x552 = UINT32_MAX;
int8_t x554 = -1;
static int8_t x560 = INT8_MIN;
int32_t t139 = 7664526;
volatile int32_t t142 = 2429409;
static volatile int32_t t143 = 20000;
int32_t t145 = 22;
int32_t x589 = -1;
static int8_t x591 = -1;
volatile int64_t x595 = -48204LL;
int8_t x596 = 43;
volatile int32_t t148 = -817;
int16_t x599 = INT16_MAX;
uint32_t t149 = 88U;
uint16_t x612 = UINT16_MAX;
uint8_t x616 = 9U;
int16_t x618 = 42;
int32_t t154 = 132;
int32_t x635 = INT32_MIN;
int8_t x639 = -24;
volatile int32_t t159 = -445392;
uint64_t x653 = UINT64_MAX;
int32_t t163 = 754334300;
int64_t x662 = INT64_MAX;
int16_t x663 = INT16_MIN;
volatile int32_t t165 = 529043;
static int32_t x665 = INT32_MAX;
volatile int16_t x667 = INT16_MIN;
uint32_t x672 = 764248848U;
int8_t x683 = 7;
volatile uint32_t x685 = 9U;
int32_t t172 = 44460018;
static uint16_t x696 = 13675U;
static int64_t x701 = 1105225219150LL;
uint64_t x702 = 5LLU;
volatile uint32_t t175 = UINT32_MAX;
int8_t x719 = INT8_MAX;
static uint64_t x728 = 284027947813852678LLU;
uint64_t t181 = 4724677748LLU;
int16_t x733 = INT16_MAX;
int32_t x734 = INT32_MAX;
int32_t t184 = -260959871;
volatile int32_t t185 = 483725223;
int16_t x748 = INT16_MIN;
volatile int32_t x751 = INT32_MIN;
static int8_t x757 = 2;
int32_t t192 = 874;
static int16_t x773 = INT16_MIN;
int64_t x775 = INT64_MIN;
uint8_t x777 = 1U;
volatile int8_t x783 = INT8_MIN;
static volatile int32_t t195 = 0;
int16_t x787 = -1;
static int8_t x788 = INT8_MIN;
int64_t x789 = INT64_MAX;
int64_t x792 = INT64_MAX;
static volatile int32_t x799 = INT32_MIN;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	static uint16_t x2 = 22U;
	int32_t x3 = INT32_MIN;
	uint8_t x4 = 0U;
	int32_t t0 = -108742;

    t0 = ((x1<=(x2&x3))|x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = INT16_MIN;
	uint8_t x7 = UINT8_MAX;
	int64_t t1 = INT64_MAX;

    t1 = ((x5<=(x6&x7))|x8);

    if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -805;
	int8_t x11 = -1;
	static int8_t x12 = 27;
	volatile int32_t t2 = -11114812;

    t2 = ((x9<=(x10&x11))|x12);

    if (t2 != 27) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	int64_t x14 = -1LL;
	int8_t x15 = -12;
	volatile uint16_t x16 = 4U;
	volatile int32_t t3 = 12370481;

    t3 = ((x13<=(x14&x15))|x16);

    if (t3 != 4) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 8076U;
	static int16_t x18 = INT16_MIN;
	uint64_t t4 = 2161961415LLU;

    t4 = ((x17<=(x18&x19))|x20);

    if (t4 != 602916422547LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -36;
	int16_t x22 = INT16_MIN;
	uint16_t x23 = UINT16_MAX;
	uint8_t x24 = 40U;
	int32_t t5 = -13305699;

    t5 = ((x21<=(x22&x23))|x24);

    if (t5 != 41) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = -1;
	int8_t x26 = INT8_MIN;
	int64_t x27 = 494755040LL;
	int32_t t6 = -3;

    t6 = ((x25<=(x26&x27))|x28);

    if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	int64_t x30 = -1LL;
	uint64_t x32 = 15132LLU;
	volatile uint64_t t7 = 54344241773808LLU;

    t7 = ((x29<=(x30&x31))|x32);

    if (t7 != 15133LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x33 = UINT16_MAX;
	int64_t x35 = INT64_MIN;

    t8 = ((x33<=(x34&x35))|x36);

    if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x37 = 3U;

    t9 = ((x37<=(x38&x39))|x40);

    if (t9 != 1370755LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x42 = INT64_MAX;
	volatile int32_t x44 = INT32_MIN;
	int32_t t10 = -131917864;

    t10 = ((x41<=(x42&x43))|x44);

    if (t10 != -2147483647) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x46 = 10U;
	volatile int32_t x47 = -1;
	uint16_t x48 = 1018U;
	int32_t t11 = 14513;

    t11 = ((x45<=(x46&x47))|x48);

    if (t11 != 1019) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = 204672057221757856LL;
	int64_t x51 = -6744005746LL;
	volatile int8_t x52 = INT8_MIN;
	int32_t t12 = 104300;

    t12 = ((x49<=(x50&x51))|x52);

    if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x55 = UINT16_MAX;
	static int64_t x56 = INT64_MAX;

    t13 = ((x53<=(x54&x55))|x56);

    if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x57 = UINT16_MAX;
	static uint32_t x58 = 350U;
	int32_t x59 = INT32_MAX;
	uint64_t x60 = UINT64_MAX;
	uint64_t t14 = UINT64_MAX;

    t14 = ((x57<=(x58&x59))|x60);

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 6353354U;
	int8_t x62 = -1;
	uint8_t x64 = 2U;

    t15 = ((x61<=(x62&x63))|x64);

    if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = -1;
	int16_t x66 = INT16_MIN;
	uint64_t x67 = UINT64_MAX;
	int32_t x68 = INT32_MIN;
	static int32_t t16 = INT32_MIN;

    t16 = ((x65<=(x66&x67))|x68);

    if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x69 = -1;
	int32_t x70 = -1;
	uint16_t x71 = 1U;
	static uint64_t x72 = 55612108719125771LLU;
	uint64_t t17 = 29319830061LLU;

    t17 = ((x69<=(x70&x71))|x72);

    if (t17 != 55612108719125771LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x73 = -1;
	uint8_t x76 = 21U;

    t18 = ((x73<=(x74&x75))|x76);

    if (t18 != 21) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = 1U;
	int16_t x78 = -1;
	int32_t x79 = -333641;
	static int8_t x80 = -1;

    t19 = ((x77<=(x78&x79))|x80);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -2;
	static uint32_t x82 = 0U;
	int8_t x83 = INT8_MAX;
	volatile int32_t t20 = -99240;

    t20 = ((x81<=(x82&x83))|x84);

    if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x85 = INT8_MIN;
	static volatile int16_t x87 = -1;
	static volatile uint32_t x88 = 150411U;
	uint32_t t21 = 4761U;

    t21 = ((x85<=(x86&x87))|x88);

    if (t21 != 150411U) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = 0;
	int64_t x90 = 278159674LL;
	static uint8_t x92 = 127U;
	int32_t t22 = -1814;

    t22 = ((x89<=(x90&x91))|x92);

    if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x95 = INT16_MIN;
	int16_t x96 = INT16_MAX;
	volatile int32_t t23 = -505;

    t23 = ((x93<=(x94&x95))|x96);

    if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x98 = INT8_MAX;
	int8_t x99 = 7;
	uint64_t x100 = 14779378737929201LLU;
	uint64_t t24 = 97021134603046LLU;

    t24 = ((x97<=(x98&x99))|x100);

    if (t24 != 14779378737929201LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	int8_t x102 = INT8_MAX;
	volatile int8_t x103 = -1;
	int64_t x104 = INT64_MIN;
	int64_t t25 = 16673888929976LL;

    t25 = ((x101<=(x102&x103))|x104);

    if (t25 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x106 = INT32_MAX;
	int32_t x107 = INT32_MAX;
	uint64_t x108 = 5481753707009094LLU;

    t26 = ((x105<=(x106&x107))|x108);

    if (t26 != 5481753707009095LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = 142542LLU;
	int16_t x111 = INT16_MIN;
	int64_t x112 = -27809335001717880LL;
	int64_t t27 = -3561557533492181612LL;

    t27 = ((x109<=(x110&x111))|x112);

    if (t27 != -27809335001717879LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = 3035LLU;
	static int64_t x114 = 165684748269LL;
	int32_t x116 = INT32_MIN;

    t28 = ((x113<=(x114&x115))|x116);

    if (t28 != -2147483647) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x118 = -1;
	static volatile int64_t x119 = -1LL;
	uint64_t x120 = UINT64_MAX;

    t29 = ((x117<=(x118&x119))|x120);

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = 5U;
	volatile int32_t x123 = -1;
	int64_t x124 = INT64_MIN;
	volatile int64_t t30 = 38791625125331LL;

    t30 = ((x121<=(x122&x123))|x124);

    if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 410LLU;
	uint8_t x126 = 6U;
	volatile int32_t x127 = -1;
	int8_t x128 = -1;
	static volatile int32_t t31 = -500805766;

    t31 = ((x125<=(x126&x127))|x128);

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x129 = UINT16_MAX;
	uint16_t x130 = 16U;
	int32_t x132 = INT32_MIN;
	int32_t t32 = INT32_MIN;

    t32 = ((x129<=(x130&x131))|x132);

    if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 2393981U;
	static uint16_t x134 = UINT16_MAX;
	int8_t x135 = INT8_MAX;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t33 = 32;

    t33 = ((x133<=(x134&x135))|x136);

    if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x138 = INT64_MIN;
	int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MIN;
	int32_t t34 = 6132763;

    t34 = ((x137<=(x138&x139))|x140);

    if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x141 = -3;
	uint64_t x142 = 47105249305756214LLU;
	int64_t x143 = 12099800LL;
	static uint32_t x144 = 17498U;
	uint32_t t35 = 744U;

    t35 = ((x141<=(x142&x143))|x144);

    if (t35 != 17498U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MAX;
	uint8_t x146 = UINT8_MAX;
	int32_t x147 = 31323948;
	int64_t x148 = INT64_MIN;
	volatile int64_t t36 = INT64_MIN;

    t36 = ((x145<=(x146&x147))|x148);

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x149 = INT64_MAX;
	static int64_t x150 = INT64_MAX;
	int32_t x151 = INT32_MIN;
	uint64_t t37 = 0LLU;

    t37 = ((x149<=(x150&x151))|x152);

    if (t37 != 63270014LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = 101U;
	static uint32_t x154 = 873940U;
	int16_t x155 = INT16_MIN;
	uint64_t x156 = UINT64_MAX;
	uint64_t t38 = UINT64_MAX;

    t38 = ((x153<=(x154&x155))|x156);

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x159 = 200;
	static int32_t x160 = INT32_MIN;
	volatile int32_t t39 = 489;

    t39 = ((x157<=(x158&x159))|x160);

    if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MIN;
	int8_t x163 = -13;
	int8_t x164 = 6;

    t40 = ((x161<=(x162&x163))|x164);

    if (t40 != 7) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x165 = -5215;
	uint16_t x168 = UINT16_MAX;

    t41 = ((x165<=(x166&x167))|x168);

    if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int32_t x169 = INT32_MAX;
	int8_t x170 = 2;
	uint64_t x171 = 6LLU;
	volatile int8_t x172 = INT8_MIN;
	int32_t t42 = -10131;

    t42 = ((x169<=(x170&x171))|x172);

    if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x174 = -1;
	uint16_t x175 = 11156U;
	int8_t x176 = -3;
	volatile int32_t t43 = 126989;

    t43 = ((x173<=(x174&x175))|x176);

    if (t43 != -3) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 5U;
	static uint16_t x178 = UINT16_MAX;
	uint16_t x179 = UINT16_MAX;
	int16_t x180 = INT16_MAX;
	volatile int32_t t44 = 3696;

    t44 = ((x177<=(x178&x179))|x180);

    if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x181 = -31940651;
	uint8_t x182 = 2U;

    t45 = ((x181<=(x182&x183))|x184);

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = UINT64_MAX;
	volatile int64_t x186 = INT64_MIN;
	int64_t x187 = INT64_MAX;
	static volatile int8_t x188 = 0;
	volatile int32_t t46 = -6459703;

    t46 = ((x185<=(x186&x187))|x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = 61U;
	static int16_t x190 = INT16_MIN;
	int8_t x191 = 1;
	int32_t x192 = INT32_MAX;
	volatile int32_t t47 = INT32_MAX;

    t47 = ((x189<=(x190&x191))|x192);

    if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = -5;
	static int16_t x194 = INT16_MAX;
	volatile int64_t x195 = INT64_MIN;
	int32_t t48 = INT32_MAX;

    t48 = ((x193<=(x194&x195))|x196);

    if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = 11;
	int8_t x198 = -14;
	int32_t x199 = INT32_MIN;
	uint16_t x200 = UINT16_MAX;
	static int32_t t49 = -503;

    t49 = ((x197<=(x198&x199))|x200);

    if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x201 = UINT8_MAX;
	uint16_t x203 = 1607U;
	int16_t x204 = -1;
	int32_t t50 = 0;

    t50 = ((x201<=(x202&x203))|x204);

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x206 = 173;
	volatile int16_t x208 = INT16_MIN;
	volatile int32_t t51 = 3;

    t51 = ((x205<=(x206&x207))|x208);

    if (t51 != -32767) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x211 = INT32_MAX;
	uint16_t x212 = 2U;
	static int32_t t52 = 649898616;

    t52 = ((x209<=(x210&x211))|x212);

    if (t52 != 3) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x214 = UINT32_MAX;
	int32_t x216 = -335866;

    t53 = ((x213<=(x214&x215))|x216);

    if (t53 != -335865) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = 9U;
	volatile int64_t x218 = -9851313213767LL;
	static uint64_t x219 = 82617LLU;
	int16_t x220 = INT16_MIN;

    t54 = ((x217<=(x218&x219))|x220);

    if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MAX;
	static int32_t x222 = INT32_MIN;
	int8_t x223 = -1;
	int32_t x224 = -19;

    t55 = ((x221<=(x222&x223))|x224);

    if (t55 != -19) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = 5859070810726124LL;
	int64_t x226 = -60355LL;
	volatile int16_t x227 = INT16_MAX;
	int64_t x228 = INT64_MIN;
	volatile int64_t t56 = INT64_MIN;

    t56 = ((x225<=(x226&x227))|x228);

    if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x229 = UINT8_MAX;
	volatile int8_t x230 = -1;
	int64_t x231 = -1LL;
	volatile int32_t t57 = 3252459;

    t57 = ((x229<=(x230&x231))|x232);

    if (t57 != 49) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x235 = UINT16_MAX;
	volatile uint8_t x236 = 0U;
	int32_t t58 = -3;

    t58 = ((x233<=(x234&x235))|x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = INT64_MIN;
	static int8_t x238 = 0;
	int64_t x239 = INT64_MIN;
	uint32_t x240 = 765839U;
	volatile uint32_t t59 = 18538U;

    t59 = ((x237<=(x238&x239))|x240);

    if (t59 != 765839U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x242 = 404414U;
	uint32_t x243 = 0U;
	int16_t x244 = 0;

    t60 = ((x241<=(x242&x243))|x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 277719546091LLU;
	int16_t x246 = INT16_MIN;
	int64_t x248 = 82970818111142LL;
	int64_t t61 = -90LL;

    t61 = ((x245<=(x246&x247))|x248);

    if (t61 != 82970818111143LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -2;
	int32_t x251 = 1;
	volatile int32_t x252 = INT32_MIN;
	volatile int32_t t62 = -1644845;

    t62 = ((x249<=(x250&x251))|x252);

    if (t62 != -2147483647) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -1;
	uint32_t x255 = 5255851U;
	static int32_t x256 = 15;
	volatile int32_t t63 = 74;

    t63 = ((x253<=(x254&x255))|x256);

    if (t63 != 15) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 302U;
	int64_t x258 = 836480400822LL;
	uint64_t x259 = 474579686LLU;
	uint8_t x260 = UINT8_MAX;
	int32_t t64 = -325;

    t64 = ((x257<=(x258&x259))|x260);

    if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x261 = -15750LL;
	int64_t x262 = INT64_MIN;
	int32_t x263 = INT32_MIN;
	int8_t x264 = -1;
	int32_t t65 = 319;

    t65 = ((x261<=(x262&x263))|x264);

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x267 = 8554;
	static int64_t x268 = INT64_MAX;
	int64_t t66 = INT64_MAX;

    t66 = ((x265<=(x266&x267))|x268);

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int8_t x269 = 1;
	static int16_t x270 = INT16_MIN;
	int64_t x271 = 744LL;
	int32_t x272 = INT32_MIN;
	static volatile int32_t t67 = INT32_MIN;

    t67 = ((x269<=(x270&x271))|x272);

    if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x273 = 3582U;
	volatile int8_t x275 = 8;
	volatile uint32_t x276 = 7854513U;
	static uint32_t t68 = 1U;

    t68 = ((x273<=(x274&x275))|x276);

    if (t68 != 7854513U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = UINT16_MAX;
	volatile uint8_t x278 = 0U;
	int16_t x279 = INT16_MIN;
	volatile uint8_t x280 = 18U;

    t69 = ((x277<=(x278&x279))|x280);

    if (t69 != 18) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = UINT32_MAX;
	volatile uint32_t x282 = 467427U;
	static int32_t x283 = 2;
	int64_t x284 = -15241695964LL;
	volatile int64_t t70 = -12254LL;

    t70 = ((x281<=(x282&x283))|x284);

    if (t70 != -15241695964LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x285 = INT32_MAX;
	static int16_t x286 = 1;
	volatile uint64_t t71 = 48515072311750316LLU;

    t71 = ((x285<=(x286&x287))|x288);

    if (t71 != 90LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = -27;
	static uint32_t x290 = 125479229U;
	uint32_t x291 = 1459U;
	uint64_t x292 = 485679900484631297LLU;
	volatile uint64_t t72 = 22046383942945LLU;

    t72 = ((x289<=(x290&x291))|x292);

    if (t72 != 485679900484631297LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = UINT8_MAX;
	volatile int8_t x294 = INT8_MIN;
	uint64_t x295 = 12135314188617LLU;
	int32_t t73 = -48425679;

    t73 = ((x293<=(x294&x295))|x296);

    if (t73 != -183665) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x298 = INT8_MAX;
	static uint32_t x299 = UINT32_MAX;
	int64_t x300 = 326034LL;
	int64_t t74 = 4024113980482LL;

    t74 = ((x297<=(x298&x299))|x300);

    if (t74 != 326034LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x301 = INT64_MIN;
	static int16_t x302 = -1;
	int8_t x303 = INT8_MIN;
	int32_t x304 = INT32_MIN;
	int32_t t75 = -368;

    t75 = ((x301<=(x302&x303))|x304);

    if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 0U;
	int32_t x306 = INT32_MAX;
	int8_t x307 = INT8_MIN;
	int64_t x308 = INT64_MIN;
	volatile int64_t t76 = 71785LL;

    t76 = ((x305<=(x306&x307))|x308);

    if (t76 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	int32_t x310 = INT32_MAX;
	static volatile int32_t t77 = 2;

    t77 = ((x309<=(x310&x311))|x312);

    if (t77 != 6777252) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x313 = INT16_MIN;
	static uint8_t x314 = UINT8_MAX;
	static int64_t x315 = INT64_MAX;
	volatile int32_t t78 = INT32_MAX;

    t78 = ((x313<=(x314&x315))|x316);

    if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = 12;
	int32_t x318 = -7120423;
	int32_t t79 = 202;

    t79 = ((x317<=(x318&x319))|x320);

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = 27179U;
	int64_t x322 = -86LL;
	volatile uint16_t x323 = UINT16_MAX;
	int32_t t80 = -349;

    t80 = ((x321<=(x322&x323))|x324);

    if (t80 != -2147483647) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = 1U;
	uint8_t x326 = UINT8_MAX;
	volatile uint8_t x327 = 13U;

    t81 = ((x325<=(x326&x327))|x328);

    if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x330 = UINT64_MAX;
	int32_t x331 = INT32_MIN;
	int8_t x332 = INT8_MIN;
	int32_t t82 = -37827;

    t82 = ((x329<=(x330&x331))|x332);

    if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = 15U;
	int32_t x334 = -71;
	uint8_t x335 = 6U;
	uint64_t x336 = UINT64_MAX;
	uint64_t t83 = UINT64_MAX;

    t83 = ((x333<=(x334&x335))|x336);

    if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x338 = -475769195100LL;
	static int16_t x339 = 0;
	static volatile int32_t t84 = -6292953;

    t84 = ((x337<=(x338&x339))|x340);

    if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x341 = UINT32_MAX;
	uint16_t x342 = UINT16_MAX;
	int64_t x343 = 93308896667938LL;
	uint64_t x344 = 38708109LLU;
	uint64_t t85 = 414445381LLU;

    t85 = ((x341<=(x342&x343))|x344);

    if (t85 != 38708109LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x345 = UINT64_MAX;
	static uint32_t x346 = 522141157U;
	uint16_t x347 = 13U;
	uint32_t x348 = 325783U;
	volatile uint32_t t86 = 126U;

    t86 = ((x345<=(x346&x347))|x348);

    if (t86 != 325783U) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x349 = 31U;
	uint32_t x350 = UINT32_MAX;
	int64_t x351 = -1LL;
	int64_t t87 = -60949526339318481LL;

    t87 = ((x349<=(x350&x351))|x352);

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = -1835;
	int16_t x354 = -1;
	volatile int8_t x356 = -1;
	int32_t t88 = 7;

    t88 = ((x353<=(x354&x355))|x356);

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = INT64_MIN;
	volatile uint64_t x358 = UINT64_MAX;
	static int16_t x359 = -1;
	static int8_t x360 = INT8_MAX;

    t89 = ((x357<=(x358&x359))|x360);

    if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x361 = INT8_MAX;
	volatile int8_t x362 = -4;
	uint32_t x363 = 783U;
	static volatile int64_t t90 = -21071088LL;

    t90 = ((x361<=(x362&x363))|x364);

    if (t90 != -10825LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = 1U;
	int16_t x366 = -1;
	uint16_t x367 = 2U;
	int64_t t91 = -62LL;

    t91 = ((x365<=(x366&x367))|x368);

    if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x369 = 161340666690693LL;
	int16_t x370 = INT16_MIN;
	uint64_t x371 = 1593617720389LLU;
	static volatile int32_t t92 = -8103479;

    t92 = ((x369<=(x370&x371))|x372);

    if (t92 != 11374) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x374 = INT32_MIN;
	volatile int32_t x375 = -378140233;
	static int32_t t93 = 364696;

    t93 = ((x373<=(x374&x375))|x376);

    if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x377 = 1078713419059794LL;
	uint32_t x378 = UINT32_MAX;
	int8_t x379 = INT8_MIN;
	uint32_t x380 = UINT32_MAX;
	uint32_t t94 = UINT32_MAX;

    t94 = ((x377<=(x378&x379))|x380);

    if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MIN;
	int64_t x382 = INT64_MAX;
	uint8_t x383 = 1U;
	int8_t x384 = INT8_MIN;

    t95 = ((x381<=(x382&x383))|x384);

    if (t95 != -127) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x385 = -1;
	int8_t x386 = INT8_MIN;
	int8_t x388 = INT8_MAX;
	int32_t t96 = -13;

    t96 = ((x385<=(x386&x387))|x388);

    if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x390 = -1;
	volatile int8_t x392 = INT8_MIN;

    t97 = ((x389<=(x390&x391))|x392);

    if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x394 = INT64_MIN;
	uint64_t x395 = 706709738LLU;
	uint64_t x396 = UINT64_MAX;
	uint64_t t98 = UINT64_MAX;

    t98 = ((x393<=(x394&x395))|x396);

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = 1906U;
	int64_t x398 = -29LL;
	int8_t x399 = INT8_MIN;
	int32_t x400 = INT32_MIN;
	int32_t t99 = INT32_MIN;

    t99 = ((x397<=(x398&x399))|x400);

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -1;
	static int32_t x402 = -33187851;
	volatile uint64_t x403 = 11105279894LLU;
	int32_t x404 = INT32_MAX;
	int32_t t100 = INT32_MAX;

    t100 = ((x401<=(x402&x403))|x404);

    if (t100 != INT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MIN;
	int8_t x406 = INT8_MIN;
	int32_t x407 = -1;
	static int64_t x408 = 314571169745LL;
	int64_t t101 = 1LL;

    t101 = ((x405<=(x406&x407))|x408);

    if (t101 != 314571169745LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x409 = 20904201LLU;
	static int8_t x410 = INT8_MAX;
	int32_t x411 = 45429741;
	volatile int32_t t102 = 15;

    t102 = ((x409<=(x410&x411))|x412);

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MAX;
	uint16_t x414 = 8U;
	volatile int32_t x416 = INT32_MIN;
	static volatile int32_t t103 = INT32_MIN;

    t103 = ((x413<=(x414&x415))|x416);

    if (t103 != INT32_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x417 = UINT8_MAX;
	volatile int8_t x418 = 1;
	int64_t x419 = -1LL;
	uint64_t x420 = 162015793904986LLU;

    t104 = ((x417<=(x418&x419))|x420);

    if (t104 != 162015793904986LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x422 = INT32_MAX;
	static uint16_t x423 = 2265U;
	static int64_t x424 = INT64_MIN;
	volatile int64_t t105 = 118992215588989LL;

    t105 = ((x421<=(x422&x423))|x424);

    if (t105 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = UINT16_MAX;
	int16_t x426 = 0;
	volatile int64_t x427 = INT64_MAX;

    t106 = ((x425<=(x426&x427))|x428);

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -1881237105463LL;
	static int32_t x430 = INT32_MAX;
	int64_t x431 = -1LL;
	int32_t t107 = 130390833;

    t107 = ((x429<=(x430&x431))|x432);

    if (t107 != 32767) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x433 = 1;
	int32_t x434 = -231;
	static int32_t x436 = INT32_MIN;
	int32_t t108 = INT32_MIN;

    t108 = ((x433<=(x434&x435))|x436);

    if (t108 != INT32_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MIN;
	static volatile int16_t x438 = INT16_MAX;
	volatile uint32_t x439 = 0U;
	int16_t x440 = -841;
	int32_t t109 = 1001963;

    t109 = ((x437<=(x438&x439))|x440);

    if (t109 != -841) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = INT32_MIN;
	static int32_t x442 = INT32_MIN;
	int64_t t110 = -474LL;

    t110 = ((x441<=(x442&x443))|x444);

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MAX;
	static volatile int8_t x446 = INT8_MAX;
	volatile int64_t x447 = 206575022178004069LL;
	int64_t x448 = -1LL;
	int64_t t111 = -1763LL;

    t111 = ((x445<=(x446&x447))|x448);

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x450 = INT32_MIN;
	int64_t x451 = -30847LL;
	uint8_t x452 = 3U;
	int32_t t112 = -464;

    t112 = ((x449<=(x450&x451))|x452);

    if (t112 != 3) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = UINT64_MAX;
	volatile uint32_t x454 = 47145121U;
	uint8_t x455 = UINT8_MAX;
	int64_t x456 = 468LL;
	volatile int64_t t113 = 151LL;

    t113 = ((x453<=(x454&x455))|x456);

    if (t113 != 468LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = -1;
	int16_t x458 = INT16_MAX;
	uint16_t x460 = 0U;
	static volatile int32_t t114 = -279638;

    t114 = ((x457<=(x458&x459))|x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 1U;
	int8_t x462 = INT8_MAX;
	volatile int32_t x463 = 285;
	volatile int64_t x464 = INT64_MIN;
	volatile int64_t t115 = 50LL;

    t115 = ((x461<=(x462&x463))|x464);

    if (t115 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = 0;
	static int64_t x466 = INT64_MIN;
	uint16_t x467 = UINT16_MAX;
	static int16_t x468 = -1;
	volatile int32_t t116 = 14;

    t116 = ((x465<=(x466&x467))|x468);

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x469 = INT8_MAX;
	int32_t x470 = 32;
	static int16_t x471 = -1;
	int32_t x472 = -1;
	volatile int32_t t117 = -723018;

    t117 = ((x469<=(x470&x471))|x472);

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x473 = UINT32_MAX;
	int64_t x474 = -1LL;
	int16_t x476 = INT16_MIN;

    t118 = ((x473<=(x474&x475))|x476);

    if (t118 != -32768) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -3LL;
	uint64_t x478 = 613721LLU;
	static int32_t x479 = INT32_MAX;
	uint32_t x480 = UINT32_MAX;
	volatile uint32_t t119 = UINT32_MAX;

    t119 = ((x477<=(x478&x479))|x480);

    if (t119 != UINT32_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = INT16_MIN;
	static int64_t x482 = INT64_MIN;
	int16_t x483 = 3;
	int64_t x484 = INT64_MAX;
	volatile int64_t t120 = INT64_MAX;

    t120 = ((x481<=(x482&x483))|x484);

    if (t120 != INT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 38U;
	int16_t x486 = INT16_MIN;
	static int32_t x487 = INT32_MIN;
	volatile uint64_t x488 = 7935LLU;
	static volatile uint64_t t121 = 336796716013LLU;

    t121 = ((x485<=(x486&x487))|x488);

    if (t121 != 7935LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MAX;
	int16_t x490 = -1;
	int64_t x491 = INT64_MIN;
	static volatile int32_t t122 = -9161;

    t122 = ((x489<=(x490&x491))|x492);

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x494 = 809816787186LLU;
	volatile uint32_t x495 = UINT32_MAX;
	int8_t x496 = -23;
	volatile int32_t t123 = -39;

    t123 = ((x493<=(x494&x495))|x496);

    if (t123 != -23) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int64_t x497 = INT64_MIN;
	volatile uint8_t x498 = 84U;
	uint32_t x499 = UINT32_MAX;
	static int64_t x500 = 102942855353LL;
	volatile int64_t t124 = 2057076822364LL;

    t124 = ((x497<=(x498&x499))|x500);

    if (t124 != 102942855353LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x501 = 2285LL;
	static volatile int16_t x502 = INT16_MIN;
	int8_t x503 = 0;
	uint64_t x504 = 502350784LLU;
	uint64_t t125 = 1549474LLU;

    t125 = ((x501<=(x502&x503))|x504);

    if (t125 != 502350784LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x505 = -1;
	uint16_t x506 = UINT16_MAX;
	static int16_t x507 = -1;
	int16_t x508 = INT16_MAX;
	volatile int32_t t126 = 4688;

    t126 = ((x505<=(x506&x507))|x508);

    if (t126 != 32767) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x512 = UINT32_MAX;
	uint32_t t127 = UINT32_MAX;

    t127 = ((x509<=(x510&x511))|x512);

    if (t127 != UINT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = 20119U;
	uint8_t x514 = 0U;
	volatile int32_t t128 = -115462;

    t128 = ((x513<=(x514&x515))|x516);

    if (t128 != 255) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint64_t x517 = 492591707064337LLU;
	uint16_t x519 = UINT16_MAX;
	int32_t x520 = INT32_MIN;
	volatile int32_t t129 = INT32_MIN;

    t129 = ((x517<=(x518&x519))|x520);

    if (t129 != INT32_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x521 = 3U;
	int32_t x522 = 1;
	int32_t x523 = INT32_MAX;
	int8_t x524 = -6;
	static int32_t t130 = -389;

    t130 = ((x521<=(x522&x523))|x524);

    if (t130 != -6) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x525 = -400733;
	static int64_t x526 = INT64_MAX;
	int32_t x527 = INT32_MIN;
	static int32_t x528 = INT32_MIN;
	int32_t t131 = -3;

    t131 = ((x525<=(x526&x527))|x528);

    if (t131 != -2147483647) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x530 = INT32_MIN;
	int32_t x532 = 858;
	volatile int32_t t132 = 15228311;

    t132 = ((x529<=(x530&x531))|x532);

    if (t132 != 858) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x533 = -176;
	static int8_t x534 = -1;
	int16_t x535 = INT16_MIN;
	static int16_t x536 = 11;
	int32_t t133 = -21;

    t133 = ((x533<=(x534&x535))|x536);

    if (t133 != 11) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x538 = INT8_MAX;
	int8_t x540 = -1;
	volatile int32_t t134 = -30;

    t134 = ((x537<=(x538&x539))|x540);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x541 = 26U;
	int32_t x542 = 120;
	int16_t x544 = -1;
	volatile int32_t t135 = -2358268;

    t135 = ((x541<=(x542&x543))|x544);

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = 83U;
	uint64_t x548 = 0LLU;
	uint64_t t136 = 45416317LLU;

    t136 = ((x545<=(x546&x547))|x548);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = -43;
	static int64_t x550 = -1LL;
	static int8_t x551 = INT8_MAX;
	volatile uint32_t t137 = UINT32_MAX;

    t137 = ((x549<=(x550&x551))|x552);

    if (t137 != UINT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 35905718753337LLU;
	int16_t x555 = INT16_MIN;
	uint64_t x556 = UINT64_MAX;
	static uint64_t t138 = UINT64_MAX;

    t138 = ((x553<=(x554&x555))|x556);

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = UINT8_MAX;
	static int8_t x558 = 56;
	static int16_t x559 = 5564;

    t139 = ((x557<=(x558&x559))|x560);

    if (t139 != -128) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x561 = INT32_MIN;
	volatile uint64_t x562 = 1361368LLU;
	int16_t x563 = -1;
	static volatile uint16_t x564 = UINT16_MAX;
	volatile int32_t t140 = -1;

    t140 = ((x561<=(x562&x563))|x564);

    if (t140 != 65535) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = -30;
	static uint16_t x566 = UINT16_MAX;
	static int8_t x567 = INT8_MAX;
	int16_t x568 = INT16_MAX;
	static int32_t t141 = -8262523;

    t141 = ((x565<=(x566&x567))|x568);

    if (t141 != 32767) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -2113266920074168LL;
	volatile uint32_t x570 = 521858091U;
	static volatile uint32_t x571 = 117032390U;
	int8_t x572 = -2;

    t142 = ((x569<=(x570&x571))|x572);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = 88U;
	int32_t x574 = INT32_MIN;
	static int64_t x575 = -1LL;
	static int8_t x576 = -1;

    t143 = ((x573<=(x574&x575))|x576);

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = 2783133059827911LL;
	uint64_t x578 = 69523419766105LLU;
	uint32_t x579 = 1U;
	static uint16_t x580 = UINT16_MAX;
	volatile int32_t t144 = 16;

    t144 = ((x577<=(x578&x579))|x580);

    if (t144 != 65535) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = INT8_MIN;
	static uint16_t x582 = 83U;
	int16_t x583 = INT16_MIN;
	int16_t x584 = INT16_MIN;

    t145 = ((x581<=(x582&x583))|x584);

    if (t145 != -32767) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x585 = INT32_MIN;
	int64_t x586 = -34073831281682LL;
	uint64_t x587 = 1352353494940941LLU;
	int8_t x588 = -1;
	static int32_t t146 = 41;

    t146 = ((x585<=(x586&x587))|x588);

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int64_t x590 = -1LL;
	int64_t x592 = INT64_MAX;
	int64_t t147 = INT64_MAX;

    t147 = ((x589<=(x590&x591))|x592);

    if (t147 != INT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = 257297U;
	static uint16_t x594 = UINT16_MAX;

    t148 = ((x593<=(x594&x595))|x596);

    if (t148 != 43) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x597 = UINT8_MAX;
	int32_t x598 = -1;
	volatile uint32_t x600 = 219U;

    t149 = ((x597<=(x598&x599))|x600);

    if (t149 != 219U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MIN;
	int16_t x602 = INT16_MIN;
	uint8_t x603 = 5U;
	int32_t x604 = INT32_MIN;
	static int32_t t150 = -209;

    t150 = ((x601<=(x602&x603))|x604);

    if (t150 != -2147483647) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = -1LL;
	static int16_t x606 = -1;
	static int8_t x607 = INT8_MAX;
	uint64_t x608 = 692781690LLU;
	static volatile uint64_t t151 = 142515571431445212LLU;

    t151 = ((x605<=(x606&x607))|x608);

    if (t151 != 692781691LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = 2U;
	int32_t x610 = 1996;
	uint8_t x611 = UINT8_MAX;
	volatile int32_t t152 = -480;

    t152 = ((x609<=(x610&x611))|x612);

    if (t152 != 65535) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MIN;
	uint32_t x614 = UINT32_MAX;
	int64_t x615 = INT64_MIN;
	int32_t t153 = -122;

    t153 = ((x613<=(x614&x615))|x616);

    if (t153 != 9) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = UINT64_MAX;
	int64_t x619 = INT64_MIN;
	uint8_t x620 = 107U;

    t154 = ((x617<=(x618&x619))|x620);

    if (t154 != 107) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x621 = 16786541U;
	int8_t x622 = -1;
	static int32_t x623 = 395;
	volatile int64_t x624 = -7622582LL;
	volatile int64_t t155 = 6458754262LL;

    t155 = ((x621<=(x622&x623))|x624);

    if (t155 != -7622582LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x625 = 23784152228665LLU;
	uint32_t x626 = 423U;
	int32_t x627 = -413499880;
	int32_t x628 = INT32_MAX;
	int32_t t156 = INT32_MAX;

    t156 = ((x625<=(x626&x627))|x628);

    if (t156 != INT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MIN;
	volatile int64_t x630 = INT64_MAX;
	int64_t x631 = INT64_MAX;
	volatile int32_t x632 = -1218;
	volatile int32_t t157 = 1;

    t157 = ((x629<=(x630&x631))|x632);

    if (t157 != -1217) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MAX;
	uint32_t x634 = UINT32_MAX;
	uint32_t x636 = 215307U;
	uint32_t t158 = 442677U;

    t158 = ((x633<=(x634&x635))|x636);

    if (t158 != 215307U) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x637 = 306822742U;
	int64_t x638 = INT64_MAX;
	static int8_t x640 = -1;

    t159 = ((x637<=(x638&x639))|x640);

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MIN;
	int8_t x642 = INT8_MIN;
	uint64_t x643 = UINT64_MAX;
	int32_t x644 = INT32_MAX;
	int32_t t160 = INT32_MAX;

    t160 = ((x641<=(x642&x643))|x644);

    if (t160 != INT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = 1;
	int8_t x646 = 0;
	int8_t x647 = -1;
	uint64_t x648 = 330105581189672627LLU;
	static volatile uint64_t t161 = 2049819LLU;

    t161 = ((x645<=(x646&x647))|x648);

    if (t161 != 330105581189672627LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x649 = 1;
	volatile uint16_t x650 = 1972U;
	volatile int32_t x651 = -202566;
	static uint32_t x652 = 206551U;
	uint32_t t162 = 1U;

    t162 = ((x649<=(x650&x651))|x652);

    if (t162 != 206551U) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x654 = INT64_MAX;
	volatile uint64_t x655 = 1487697LLU;
	uint8_t x656 = 1U;

    t163 = ((x653<=(x654&x655))|x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MIN;
	int8_t x658 = INT8_MIN;
	static volatile int16_t x659 = 253;
	int16_t x660 = 5;
	static volatile int32_t t164 = 346081;

    t164 = ((x657<=(x658&x659))|x660);

    if (t164 != 5) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x661 = -1;
	int16_t x664 = -1;

    t165 = ((x661<=(x662&x663))|x664);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x666 = 212979311U;
	int64_t x668 = -93351745128043177LL;
	volatile int64_t t166 = 339LL;

    t166 = ((x665<=(x666&x667))|x668);

    if (t166 != -93351745128043177LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = 1;
	uint8_t x670 = UINT8_MAX;
	volatile int8_t x671 = 52;
	uint32_t t167 = 4506675U;

    t167 = ((x669<=(x670&x671))|x672);

    if (t167 != 764248849U) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint16_t x673 = UINT16_MAX;
	uint16_t x674 = 1157U;
	uint64_t x675 = 1734559948968418999LLU;
	static int64_t x676 = INT64_MIN;
	static volatile int64_t t168 = INT64_MIN;

    t168 = ((x673<=(x674&x675))|x676);

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x677 = INT64_MIN;
	int32_t x678 = INT32_MAX;
	static int64_t x679 = -1LL;
	int64_t x680 = 0LL;
	static volatile int64_t t169 = 10LL;

    t169 = ((x677<=(x678&x679))|x680);

    if (t169 != 1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = 553;
	static int32_t x682 = 2;
	int32_t x684 = 522845912;
	volatile int32_t t170 = 720;

    t170 = ((x681<=(x682&x683))|x684);

    if (t170 != 522845912) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x686 = -1;
	uint16_t x687 = 1100U;
	int32_t x688 = INT32_MIN;
	int32_t t171 = 15350467;

    t171 = ((x685<=(x686&x687))|x688);

    if (t171 != -2147483647) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MAX;
	int64_t x690 = 7847676290711LL;
	volatile int32_t x691 = INT32_MIN;
	uint16_t x692 = UINT16_MAX;

    t172 = ((x689<=(x690&x691))|x692);

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x693 = 42914428U;
	int64_t x694 = -1LL;
	int32_t x695 = INT32_MIN;
	volatile int32_t t173 = -108992;

    t173 = ((x693<=(x694&x695))|x696);

    if (t173 != 13675) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x697 = UINT32_MAX;
	int8_t x698 = INT8_MAX;
	int64_t x699 = -165LL;
	uint8_t x700 = UINT8_MAX;
	int32_t t174 = -12028524;

    t174 = ((x697<=(x698&x699))|x700);

    if (t174 != 255) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x703 = -1;
	uint32_t x704 = UINT32_MAX;

    t175 = ((x701<=(x702&x703))|x704);

    if (t175 != UINT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = INT64_MAX;
	volatile int64_t x706 = 1333353706743LL;
	static int64_t x707 = INT64_MIN;
	int32_t x708 = INT32_MAX;
	static volatile int32_t t176 = INT32_MAX;

    t176 = ((x705<=(x706&x707))|x708);

    if (t176 != INT32_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x709 = INT64_MAX;
	uint32_t x710 = UINT32_MAX;
	static volatile uint16_t x711 = 75U;
	volatile int16_t x712 = -1;
	static int32_t t177 = -80159;

    t177 = ((x709<=(x710&x711))|x712);

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x713 = 429311U;
	int16_t x714 = -4;
	volatile uint8_t x715 = 3U;
	int64_t x716 = INT64_MIN;
	volatile int64_t t178 = INT64_MIN;

    t178 = ((x713<=(x714&x715))|x716);

    if (t178 != INT64_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x717 = 3;
	uint16_t x718 = 1089U;
	volatile int32_t x720 = INT32_MIN;
	static int32_t t179 = -40110;

    t179 = ((x717<=(x718&x719))|x720);

    if (t179 != -2147483647) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 30423843717419LLU;
	int64_t x722 = -1LL;
	volatile int8_t x723 = INT8_MAX;
	volatile int16_t x724 = INT16_MAX;
	int32_t t180 = -206141;

    t180 = ((x721<=(x722&x723))|x724);

    if (t180 != 32767) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = 442711566410792LL;
	static int32_t x726 = INT32_MIN;
	static uint8_t x727 = 112U;

    t181 = ((x725<=(x726&x727))|x728);

    if (t181 != 284027947813852678LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x729 = UINT64_MAX;
	volatile uint32_t x730 = UINT32_MAX;
	static int32_t x731 = -419;
	int16_t x732 = -1;
	volatile int32_t t182 = 2887285;

    t182 = ((x729<=(x730&x731))|x732);

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x735 = -1LL;
	int32_t x736 = 96719;
	volatile int32_t t183 = -105;

    t183 = ((x733<=(x734&x735))|x736);

    if (t183 != 96719) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x737 = 242U;
	static int16_t x738 = INT16_MIN;
	int32_t x739 = INT32_MAX;
	static uint16_t x740 = 9618U;

    t184 = ((x737<=(x738&x739))|x740);

    if (t184 != 9619) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = UINT64_MAX;
	int32_t x742 = 2175372;
	int8_t x743 = -1;
	int32_t x744 = -1;

    t185 = ((x741<=(x742&x743))|x744);

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	volatile uint8_t x746 = UINT8_MAX;
	static int32_t x747 = 223;
	int32_t t186 = -11;

    t186 = ((x745<=(x746&x747))|x748);

    if (t186 != -32767) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x749 = INT32_MIN;
	uint8_t x750 = 2U;
	volatile int32_t x752 = INT32_MAX;
	int32_t t187 = INT32_MAX;

    t187 = ((x749<=(x750&x751))|x752);

    if (t187 != INT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = 44LL;
	uint64_t x754 = 2291LLU;
	int8_t x755 = 6;
	volatile int8_t x756 = INT8_MAX;
	volatile int32_t t188 = -1563;

    t188 = ((x753<=(x754&x755))|x756);

    if (t188 != 127) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x758 = 1U;
	volatile int8_t x759 = -1;
	static int32_t x760 = -201192173;
	volatile int32_t t189 = 125011;

    t189 = ((x757<=(x758&x759))|x760);

    if (t189 != -201192173) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = 15928285288933LLU;
	int8_t x762 = INT8_MAX;
	static volatile uint8_t x763 = 24U;
	volatile int8_t x764 = INT8_MIN;
	static volatile int32_t t190 = -238785;

    t190 = ((x761<=(x762&x763))|x764);

    if (t190 != -128) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = -1;
	int64_t x766 = -1LL;
	static int16_t x767 = 0;
	uint64_t x768 = 361984066185LLU;
	uint64_t t191 = 13837091LLU;

    t191 = ((x765<=(x766&x767))|x768);

    if (t191 != 361984066185LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x769 = 12;
	static uint16_t x770 = UINT16_MAX;
	volatile int8_t x771 = -1;
	static int8_t x772 = -1;

    t192 = ((x769<=(x770&x771))|x772);

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x774 = -3343561268782553460LL;
	uint32_t x776 = 14U;
	volatile uint32_t t193 = 384408U;

    t193 = ((x773<=(x774&x775))|x776);

    if (t193 != 14U) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x778 = UINT8_MAX;
	static uint32_t x779 = 1404324U;
	int16_t x780 = -2023;
	volatile int32_t t194 = -6805761;

    t194 = ((x777<=(x778&x779))|x780);

    if (t194 != -2023) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x781 = 18U;
	int32_t x782 = -1;
	int32_t x784 = -1;

    t195 = ((x781<=(x782&x783))|x784);

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x785 = INT64_MAX;
	int16_t x786 = INT16_MAX;
	int32_t t196 = -13;

    t196 = ((x785<=(x786&x787))|x788);

    if (t196 != -128) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x790 = 1U;
	uint8_t x791 = UINT8_MAX;
	int64_t t197 = INT64_MAX;

    t197 = ((x789<=(x790&x791))|x792);

    if (t197 != INT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x793 = 3U;
	uint32_t x794 = UINT32_MAX;
	uint16_t x795 = 2082U;
	int64_t x796 = 361269315966LL;
	static int64_t t198 = 32790LL;

    t198 = ((x793<=(x794&x795))|x796);

    if (t198 != 361269315967LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x797 = INT16_MAX;
	uint32_t x798 = 13450U;
	int64_t x800 = INT64_MIN;
	volatile int64_t t199 = INT64_MIN;

    t199 = ((x797<=(x798&x799))|x800);

    if (t199 != INT64_MIN) { NG(); } else { ; }
	
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


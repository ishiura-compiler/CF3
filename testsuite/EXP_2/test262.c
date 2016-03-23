
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

static volatile int32_t x9 = INT32_MIN;
uint64_t x10 = 3870LLU;
int16_t x15 = -11169;
int8_t x18 = -1;
int32_t x25 = -1;
uint64_t x26 = 27LLU;
volatile int32_t t6 = 2222;
static int64_t x34 = -1LL;
int32_t x38 = INT32_MAX;
static int32_t x44 = INT32_MIN;
int8_t x46 = INT8_MAX;
int16_t x50 = INT16_MIN;
int64_t x52 = 936567654694138885LL;
uint32_t x55 = 26U;
int32_t t12 = 7958;
uint16_t x81 = 73U;
int8_t x94 = INT8_MAX;
int16_t x95 = -1;
volatile int8_t x98 = INT8_MAX;
int16_t x100 = INT16_MIN;
volatile int32_t t20 = -93;
int8_t x119 = 0;
uint16_t x135 = UINT16_MAX;
int64_t x146 = INT64_MIN;
static int8_t x153 = INT8_MIN;
int32_t x154 = 14263087;
int64_t x157 = INT64_MIN;
uint8_t x159 = UINT8_MAX;
volatile int32_t t30 = -722;
static int16_t x162 = INT16_MIN;
volatile int32_t t31 = 0;
uint64_t x166 = 1640128475LLU;
int64_t x168 = -1LL;
volatile int32_t t32 = 124741365;
int32_t t33 = -417386;
int16_t x185 = 158;
uint8_t x188 = 4U;
volatile int32_t t36 = -2;
volatile int32_t t37 = 224638174;
int32_t t40 = -3;
int8_t x216 = INT8_MIN;
static int32_t t44 = 31411938;
static volatile int32_t x230 = -1;
volatile uint8_t x232 = 0U;
static int16_t x237 = INT16_MAX;
uint32_t x241 = 111258520U;
int32_t x250 = -2;
int16_t x272 = INT16_MAX;
int32_t t52 = -58;
static uint64_t x279 = 23379932611LLU;
int32_t x280 = -3696432;
int32_t t54 = 11655837;
volatile int16_t x282 = -1;
uint8_t x285 = 0U;
static int32_t x289 = -480435;
int32_t t57 = 4191;
uint32_t x293 = UINT32_MAX;
int32_t t60 = 26315653;
int8_t x306 = -1;
int32_t x309 = INT32_MIN;
int32_t t62 = 67011037;
int32_t x319 = 3656851;
volatile int16_t x332 = -2;
static uint32_t x338 = 62913877U;
uint8_t x339 = 2U;
int8_t x343 = INT8_MIN;
static int8_t x347 = INT8_MAX;
int8_t x349 = INT8_MIN;
uint32_t x358 = 240U;
uint64_t x363 = 145LLU;
int32_t x367 = -1;
static int32_t x369 = INT32_MAX;
static volatile int32_t t78 = -6046;
static volatile int16_t x397 = INT16_MIN;
volatile int8_t x401 = INT8_MIN;
uint8_t x403 = 0U;
uint64_t x406 = 1449217LLU;
int64_t x416 = INT64_MAX;
static int32_t x421 = INT32_MIN;
uint64_t x425 = 39083LLU;
int32_t x426 = INT32_MAX;
int32_t x436 = INT32_MIN;
uint8_t x438 = 0U;
volatile int32_t x439 = -3950;
int8_t x441 = INT8_MIN;
int32_t x448 = -1;
int32_t x450 = 797;
uint32_t x453 = UINT32_MAX;
static int32_t t92 = -25;
static int8_t x467 = 5;
int32_t t95 = 618619;
int8_t x475 = 0;
int32_t t97 = 1247532;
uint64_t x486 = 15LLU;
volatile int16_t x489 = INT16_MAX;
int32_t x491 = INT32_MIN;
static volatile int16_t x492 = -906;
volatile int64_t x509 = -1LL;
volatile int32_t x520 = -5238;
int64_t x525 = INT64_MAX;
static int8_t x526 = INT8_MIN;
int16_t x528 = INT16_MIN;
int16_t x532 = INT16_MIN;
volatile int16_t x543 = -1;
int16_t x544 = INT16_MIN;
volatile int32_t t111 = -3852354;
uint64_t x547 = UINT64_MAX;
uint8_t x548 = 2U;
int64_t x550 = -1LL;
int8_t x557 = INT8_MIN;
static volatile int32_t t117 = -5044;
volatile uint16_t x569 = UINT16_MAX;
uint64_t x571 = 174471556LLU;
uint64_t x572 = 4168310023858772LLU;
int16_t x577 = INT16_MIN;
uint64_t x578 = 5LLU;
static int16_t x580 = INT16_MAX;
volatile int8_t x599 = -30;
static volatile int32_t t125 = 1292;
static volatile int32_t t126 = 117688;
int32_t t127 = 211498;
uint8_t x614 = 56U;
int8_t x616 = -1;
static volatile int32_t t128 = 18323183;
static int8_t x618 = -11;
volatile int32_t t129 = 844;
volatile int16_t x621 = INT16_MIN;
int8_t x627 = 1;
int16_t x628 = INT16_MAX;
static int8_t x630 = INT8_MIN;
static int32_t t132 = 2;
volatile int8_t x639 = INT8_MAX;
static volatile int32_t t136 = 2750;
volatile int64_t x656 = -1LL;
volatile int32_t t138 = -2;
uint8_t x661 = 1U;
int32_t t139 = 13432463;
static int16_t x679 = INT16_MIN;
int8_t x691 = INT8_MIN;
static int32_t t146 = 216196757;
int16_t x702 = INT16_MIN;
volatile int8_t x709 = INT8_MAX;
static int32_t x711 = 1;
int32_t t151 = -260798588;
int64_t x730 = -1LL;
int32_t x731 = INT32_MAX;
volatile int8_t x732 = 0;
volatile int64_t x739 = -6195976LL;
int32_t x743 = 2337;
static uint64_t x746 = UINT64_MAX;
int64_t x747 = 252125228666334LL;
static uint32_t x753 = UINT32_MAX;
volatile int8_t x754 = INT8_MIN;
static volatile int32_t x755 = -1;
static int64_t x756 = -1LL;
uint8_t x772 = 3U;
volatile int32_t t162 = 1768;
static uint8_t x773 = UINT8_MAX;
int16_t x774 = INT16_MIN;
uint16_t x781 = UINT16_MAX;
static uint8_t x789 = UINT8_MAX;
uint32_t x790 = 5U;
int32_t x809 = 1054;
uint32_t x813 = 242557196U;
volatile int32_t x815 = INT32_MIN;
static uint32_t x821 = 123U;
volatile uint64_t x824 = UINT64_MAX;
int64_t x831 = 1054277817891281LL;
static uint8_t x832 = 0U;
int8_t x837 = -58;
static int16_t x840 = -1;
volatile int32_t t175 = -8630;
volatile int32_t t176 = -65;
volatile uint64_t x847 = UINT64_MAX;
int8_t x850 = 2;
volatile int32_t t183 = 6747621;
int32_t t184 = -152767561;
int64_t x888 = -1LL;
volatile int32_t t186 = 1;
volatile int16_t x901 = INT16_MAX;
uint8_t x902 = 127U;
int16_t x905 = INT16_MIN;
int8_t x907 = -1;
int16_t x913 = INT16_MAX;
volatile int32_t t193 = 4962;
static uint16_t x922 = 29U;
int16_t x932 = INT16_MIN;
int8_t x944 = -1;
uint16_t x945 = 2878U;


void f0(void) {
    	int64_t x1 = -1LL;
	int32_t x2 = -18;
	volatile int16_t x3 = -4;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 7536818;

    t0 = ((x1%(x2-x3))<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 11231;
	int16_t x6 = -1171;
	int32_t x7 = 105;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = 155483310;

    t1 = ((x5%(x6-x7))<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint32_t x11 = 41U;
	uint32_t x12 = 909494U;
	int32_t t2 = -2895956;

    t2 = ((x9%(x10-x11))<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -1LL;
	volatile uint64_t x14 = UINT64_MAX;
	uint8_t x16 = 59U;
	int32_t t3 = -3134;

    t3 = ((x13%(x14-x15))<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MIN;
	int8_t x19 = INT8_MIN;
	static int16_t x20 = INT16_MAX;
	volatile int32_t t4 = -3;

    t4 = ((x17%(x18-x19))<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -200;
	uint16_t x22 = UINT16_MAX;
	volatile int16_t x23 = INT16_MAX;
	int32_t x24 = INT32_MIN;
	int32_t t5 = 314576;

    t5 = ((x21%(x22-x23))<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x27 = 55;
	volatile int16_t x28 = 2;

    t6 = ((x25%(x26-x27))<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x33 = -1LL;
	int8_t x35 = 30;
	int32_t x36 = INT32_MIN;
	int32_t t7 = 7031372;

    t7 = ((x33%(x34-x35))<=x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MIN;
	volatile int16_t x39 = INT16_MAX;
	static int64_t x40 = INT64_MIN;
	volatile int32_t t8 = 901;

    t8 = ((x37%(x38-x39))<=x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = 26993U;
	int16_t x42 = INT16_MIN;
	uint64_t x43 = 133345LLU;
	static int32_t t9 = -402576643;

    t9 = ((x41%(x42-x43))<=x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x45 = 122U;
	int32_t x47 = -192581627;
	int64_t x48 = -1LL;
	volatile int32_t t10 = -981826;

    t10 = ((x45%(x46-x47))<=x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x49 = 25567U;
	uint8_t x51 = UINT8_MAX;
	volatile int32_t t11 = -34;

    t11 = ((x49%(x50-x51))<=x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = INT32_MIN;
	volatile int16_t x54 = -31;
	static uint8_t x56 = 4U;

    t12 = ((x53%(x54-x55))<=x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = -8106;
	volatile int64_t x62 = INT64_MIN;
	int16_t x63 = INT16_MIN;
	volatile int8_t x64 = 14;
	volatile int32_t t13 = 7;

    t13 = ((x61%(x62-x63))<=x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x65 = 45572LL;
	volatile int16_t x66 = -4436;
	uint32_t x67 = 19394363U;
	int32_t x68 = 1;
	int32_t t14 = 2;

    t14 = ((x65%(x66-x67))<=x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x73 = -6;
	uint8_t x74 = 0U;
	int8_t x75 = -1;
	volatile uint8_t x76 = 2U;
	volatile int32_t t15 = 416772;

    t15 = ((x73%(x74-x75))<=x76);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x77 = UINT8_MAX;
	static volatile uint32_t x78 = 2U;
	int32_t x79 = -1;
	int16_t x80 = INT16_MIN;
	static volatile int32_t t16 = -6136;

    t16 = ((x77%(x78-x79))<=x80);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x82 = 3U;
	volatile int8_t x83 = -1;
	uint16_t x84 = 22U;
	int32_t t17 = -63;

    t17 = ((x81%(x82-x83))<=x84);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x85 = -1;
	uint64_t x86 = 1158LLU;
	int64_t x87 = INT64_MAX;
	int8_t x88 = -1;
	volatile int32_t t18 = -555;

    t18 = ((x85%(x86-x87))<=x88);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x93 = UINT16_MAX;
	static int16_t x96 = -1;
	static int32_t t19 = 68350068;

    t19 = ((x93%(x94-x95))<=x96);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x97 = 1226489387821022LL;
	int8_t x99 = INT8_MIN;

    t20 = ((x97%(x98-x99))<=x100);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x101 = UINT8_MAX;
	uint64_t x102 = 9200483027707118LLU;
	uint8_t x103 = UINT8_MAX;
	uint16_t x104 = 11936U;
	int32_t t21 = 4;

    t21 = ((x101%(x102-x103))<=x104);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x105 = INT64_MIN;
	volatile int16_t x106 = INT16_MIN;
	uint64_t x107 = UINT64_MAX;
	int16_t x108 = INT16_MIN;
	static int32_t t22 = -1901;

    t22 = ((x105%(x106-x107))<=x108);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x109 = 50U;
	int16_t x110 = 667;
	static int64_t x111 = INT64_MAX;
	int8_t x112 = INT8_MAX;
	int32_t t23 = 346;

    t23 = ((x109%(x110-x111))<=x112);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x117 = UINT8_MAX;
	int16_t x118 = INT16_MIN;
	static int64_t x120 = -1LL;
	static volatile int32_t t24 = -13;

    t24 = ((x117%(x118-x119))<=x120);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x121 = INT64_MIN;
	volatile uint32_t x122 = 66481335U;
	volatile int64_t x123 = -21440LL;
	int8_t x124 = -31;
	int32_t t25 = -9274;

    t25 = ((x121%(x122-x123))<=x124);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x133 = 1U;
	uint8_t x134 = 2U;
	int64_t x136 = -1LL;
	volatile int32_t t26 = -119;

    t26 = ((x133%(x134-x135))<=x136);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x145 = INT16_MAX;
	volatile int64_t x147 = -1LL;
	int32_t x148 = INT32_MIN;
	int32_t t27 = 0;

    t27 = ((x145%(x146-x147))<=x148);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x149 = 392686U;
	volatile uint64_t x150 = 7670511537LLU;
	int64_t x151 = INT64_MAX;
	volatile uint64_t x152 = UINT64_MAX;
	int32_t t28 = 22;

    t28 = ((x149%(x150-x151))<=x152);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x155 = 9;
	int64_t x156 = INT64_MIN;
	volatile int32_t t29 = -51;

    t29 = ((x153%(x154-x155))<=x156);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x158 = 465U;
	int16_t x160 = 26;

    t30 = ((x157%(x158-x159))<=x160);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x161 = INT8_MIN;
	uint16_t x163 = 49U;
	volatile int64_t x164 = -5570138415LL;

    t31 = ((x161%(x162-x163))<=x164);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x165 = INT8_MIN;
	volatile uint16_t x167 = 7141U;

    t32 = ((x165%(x166-x167))<=x168);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x169 = 99U;
	static int8_t x170 = 20;
	static int64_t x171 = -1LL;
	int64_t x172 = INT64_MAX;

    t33 = ((x169%(x170-x171))<=x172);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x173 = -5;
	int8_t x174 = INT8_MIN;
	uint16_t x175 = 0U;
	volatile int32_t x176 = -1;
	volatile int32_t t34 = 133;

    t34 = ((x173%(x174-x175))<=x176);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x177 = 91233070074LLU;
	uint8_t x178 = 28U;
	volatile uint64_t x179 = 6168669LLU;
	uint8_t x180 = 4U;
	volatile int32_t t35 = 108262;

    t35 = ((x177%(x178-x179))<=x180);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x186 = 201U;
	static int8_t x187 = 6;

    t36 = ((x185%(x186-x187))<=x188);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x189 = 8693U;
	uint64_t x190 = 64LLU;
	int8_t x191 = INT8_MAX;
	uint32_t x192 = UINT32_MAX;

    t37 = ((x189%(x190-x191))<=x192);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x193 = 30LL;
	static int32_t x194 = -1;
	int8_t x195 = INT8_MAX;
	static int64_t x196 = -1LL;
	volatile int32_t t38 = 913104;

    t38 = ((x193%(x194-x195))<=x196);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x197 = 0U;
	int8_t x198 = -1;
	volatile int64_t x199 = 1075081441083LL;
	static int8_t x200 = -11;
	volatile int32_t t39 = 482118589;

    t39 = ((x197%(x198-x199))<=x200);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x201 = INT64_MAX;
	static uint32_t x202 = UINT32_MAX;
	uint16_t x203 = 15U;
	uint8_t x204 = UINT8_MAX;

    t40 = ((x201%(x202-x203))<=x204);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x209 = INT16_MAX;
	static int64_t x210 = -1LL;
	int64_t x211 = INT64_MIN;
	int64_t x212 = INT64_MAX;
	int32_t t41 = 616;

    t41 = ((x209%(x210-x211))<=x212);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x213 = -1;
	uint8_t x214 = 2U;
	uint64_t x215 = UINT64_MAX;
	volatile int32_t t42 = 150782014;

    t42 = ((x213%(x214-x215))<=x216);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x217 = INT16_MIN;
	uint8_t x218 = 6U;
	uint64_t x219 = 55LLU;
	int32_t x220 = INT32_MAX;
	static volatile int32_t t43 = 21793;

    t43 = ((x217%(x218-x219))<=x220);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x221 = -1;
	int8_t x222 = 3;
	static uint64_t x223 = 5322480849909LLU;
	static uint32_t x224 = UINT32_MAX;

    t44 = ((x221%(x222-x223))<=x224);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x229 = 32U;
	volatile int32_t x231 = INT32_MAX;
	static volatile int32_t t45 = -127267320;

    t45 = ((x229%(x230-x231))<=x232);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x238 = 5;
	uint8_t x239 = 37U;
	static uint64_t x240 = 52338431LLU;
	int32_t t46 = -64;

    t46 = ((x237%(x238-x239))<=x240);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x242 = -1;
	static int8_t x243 = INT8_MIN;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t47 = 73336384;

    t47 = ((x241%(x242-x243))<=x244);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x245 = 0LL;
	int16_t x246 = -1;
	uint64_t x247 = 3136817252LLU;
	int16_t x248 = -1;
	volatile int32_t t48 = 188;

    t48 = ((x245%(x246-x247))<=x248);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x249 = -10325;
	int8_t x251 = -4;
	int64_t x252 = -1LL;
	int32_t t49 = 67795;

    t49 = ((x249%(x250-x251))<=x252);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x261 = -1;
	uint64_t x262 = 3903LLU;
	volatile int64_t x263 = 182LL;
	static int32_t x264 = 3295;
	volatile int32_t t50 = -6;

    t50 = ((x261%(x262-x263))<=x264);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x265 = 12;
	int64_t x266 = INT64_MIN;
	int32_t x267 = -1;
	volatile int16_t x268 = 1;
	volatile int32_t t51 = -83351;

    t51 = ((x265%(x266-x267))<=x268);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x269 = INT16_MAX;
	static int16_t x270 = INT16_MAX;
	int8_t x271 = INT8_MIN;

    t52 = ((x269%(x270-x271))<=x272);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x273 = -6;
	volatile uint32_t x274 = 5399829U;
	int64_t x275 = -206049427LL;
	static int16_t x276 = 0;
	int32_t t53 = -6965;

    t53 = ((x273%(x274-x275))<=x276);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x277 = 13;
	volatile int16_t x278 = INT16_MIN;

    t54 = ((x277%(x278-x279))<=x280);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x281 = INT8_MAX;
	uint64_t x283 = 835382408608176742LLU;
	static volatile uint64_t x284 = UINT64_MAX;
	int32_t t55 = 9;

    t55 = ((x281%(x282-x283))<=x284);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x286 = 12U;
	static volatile int16_t x287 = INT16_MIN;
	int32_t x288 = -1;
	static int32_t t56 = 2;

    t56 = ((x285%(x286-x287))<=x288);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x290 = -1;
	int32_t x291 = INT32_MIN;
	uint8_t x292 = 31U;

    t57 = ((x289%(x290-x291))<=x292);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x294 = -1;
	int32_t x295 = -577636271;
	uint64_t x296 = UINT64_MAX;
	volatile int32_t t58 = 541;

    t58 = ((x293%(x294-x295))<=x296);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x297 = 198U;
	static int32_t x298 = -24;
	int16_t x299 = 0;
	static int64_t x300 = -1LL;
	int32_t t59 = -6471;

    t59 = ((x297%(x298-x299))<=x300);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x301 = 65097678U;
	int32_t x302 = -1;
	int32_t x303 = INT32_MIN;
	uint32_t x304 = UINT32_MAX;

    t60 = ((x301%(x302-x303))<=x304);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x305 = -1;
	int8_t x307 = 1;
	static uint32_t x308 = 441313392U;
	int32_t t61 = 34095;

    t61 = ((x305%(x306-x307))<=x308);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x310 = 2120415493962931LLU;
	static uint64_t x311 = UINT64_MAX;
	int32_t x312 = -1;

    t62 = ((x309%(x310-x311))<=x312);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x317 = 327615557631593080LL;
	int8_t x318 = INT8_MIN;
	static int16_t x320 = INT16_MIN;
	int32_t t63 = -149747988;

    t63 = ((x317%(x318-x319))<=x320);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x321 = INT32_MIN;
	static int64_t x322 = -5429067734600902LL;
	volatile int32_t x323 = INT32_MAX;
	volatile uint64_t x324 = UINT64_MAX;
	int32_t t64 = -72818;

    t64 = ((x321%(x322-x323))<=x324);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x325 = 2095418527U;
	static int16_t x326 = -1;
	volatile int64_t x327 = INT64_MAX;
	volatile int64_t x328 = -923840491001157LL;
	volatile int32_t t65 = 82;

    t65 = ((x325%(x326-x327))<=x328);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x329 = -519;
	int8_t x330 = INT8_MIN;
	int64_t x331 = -1LL;
	int32_t t66 = -1;

    t66 = ((x329%(x330-x331))<=x332);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x333 = 158810284902LLU;
	int32_t x334 = INT32_MAX;
	uint64_t x335 = UINT64_MAX;
	uint32_t x336 = UINT32_MAX;
	int32_t t67 = 61477;

    t67 = ((x333%(x334-x335))<=x336);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x337 = -1;
	uint16_t x340 = UINT16_MAX;
	volatile int32_t t68 = -69836;

    t68 = ((x337%(x338-x339))<=x340);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x341 = -7658;
	static int16_t x342 = -1;
	int16_t x344 = INT16_MIN;
	int32_t t69 = 50;

    t69 = ((x341%(x342-x343))<=x344);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x345 = 5U;
	volatile uint8_t x346 = 82U;
	static volatile uint16_t x348 = UINT16_MAX;
	int32_t t70 = 500703866;

    t70 = ((x345%(x346-x347))<=x348);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x350 = -40;
	volatile uint32_t x351 = 150879279U;
	int8_t x352 = -2;
	volatile int32_t t71 = -977721;

    t71 = ((x349%(x350-x351))<=x352);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x357 = -2;
	int8_t x359 = -13;
	static uint64_t x360 = 548982LLU;
	volatile int32_t t72 = -61;

    t72 = ((x357%(x358-x359))<=x360);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x361 = UINT8_MAX;
	int8_t x362 = -1;
	volatile uint8_t x364 = UINT8_MAX;
	int32_t t73 = -970535977;

    t73 = ((x361%(x362-x363))<=x364);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x365 = INT8_MAX;
	int32_t x366 = INT32_MIN;
	volatile uint16_t x368 = 2U;
	static volatile int32_t t74 = -1;

    t74 = ((x365%(x366-x367))<=x368);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x370 = 3U;
	volatile int64_t x371 = -1LL;
	static int64_t x372 = 4281629202908LL;
	volatile int32_t t75 = 3373;

    t75 = ((x369%(x370-x371))<=x372);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x377 = 28;
	int64_t x378 = -1LL;
	int16_t x379 = -86;
	static uint32_t x380 = UINT32_MAX;
	volatile int32_t t76 = 327446336;

    t76 = ((x377%(x378-x379))<=x380);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x385 = UINT8_MAX;
	static int32_t x386 = INT32_MAX;
	uint64_t x387 = 12LLU;
	static int64_t x388 = INT64_MIN;
	int32_t t77 = 164;

    t77 = ((x385%(x386-x387))<=x388);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x389 = 90U;
	int8_t x390 = INT8_MIN;
	int32_t x391 = -3901668;
	uint8_t x392 = 43U;

    t78 = ((x389%(x390-x391))<=x392);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x393 = UINT64_MAX;
	volatile uint8_t x394 = 2U;
	uint64_t x395 = 10048LLU;
	uint64_t x396 = 6809577795486185LLU;
	volatile int32_t t79 = -30727;

    t79 = ((x393%(x394-x395))<=x396);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x398 = INT16_MAX;
	int16_t x399 = -1;
	uint8_t x400 = 79U;
	int32_t t80 = -473456637;

    t80 = ((x397%(x398-x399))<=x400);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x402 = INT32_MIN;
	int16_t x404 = INT16_MAX;
	volatile int32_t t81 = 1701960;

    t81 = ((x401%(x402-x403))<=x404);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x405 = 19427463;
	uint16_t x407 = 311U;
	int8_t x408 = INT8_MIN;
	int32_t t82 = -126121;

    t82 = ((x405%(x406-x407))<=x408);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x413 = 2U;
	int16_t x414 = INT16_MAX;
	static uint16_t x415 = 1U;
	int32_t t83 = 462770148;

    t83 = ((x413%(x414-x415))<=x416);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x422 = -7;
	volatile int8_t x423 = INT8_MIN;
	uint32_t x424 = UINT32_MAX;
	static int32_t t84 = -1;

    t84 = ((x421%(x422-x423))<=x424);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x427 = -121LL;
	volatile int8_t x428 = -14;
	volatile int32_t t85 = -53;

    t85 = ((x425%(x426-x427))<=x428);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x429 = 7U;
	static uint64_t x430 = 1690571526833624480LLU;
	int16_t x431 = INT16_MIN;
	int64_t x432 = INT64_MIN;
	volatile int32_t t86 = -960145;

    t86 = ((x429%(x430-x431))<=x432);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x433 = -1;
	static volatile int8_t x434 = INT8_MIN;
	static int32_t x435 = INT32_MIN;
	int32_t t87 = 4553891;

    t87 = ((x433%(x434-x435))<=x436);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x437 = INT64_MIN;
	uint64_t x440 = 256654122844143LLU;
	volatile int32_t t88 = -236;

    t88 = ((x437%(x438-x439))<=x440);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x442 = -359315;
	int16_t x443 = -5;
	uint8_t x444 = 6U;
	static volatile int32_t t89 = 7178487;

    t89 = ((x441%(x442-x443))<=x444);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x445 = -13087492128386LL;
	int8_t x446 = -1;
	uint64_t x447 = 1855725608692064380LLU;
	volatile int32_t t90 = 503;

    t90 = ((x445%(x446-x447))<=x448);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x449 = 15203699;
	volatile int16_t x451 = INT16_MAX;
	uint64_t x452 = UINT64_MAX;
	volatile int32_t t91 = 69392015;

    t91 = ((x449%(x450-x451))<=x452);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x454 = INT64_MAX;
	uint8_t x455 = 72U;
	int16_t x456 = INT16_MAX;

    t92 = ((x453%(x454-x455))<=x456);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x457 = INT8_MAX;
	int8_t x458 = INT8_MAX;
	uint64_t x459 = 13107029499546308LLU;
	int16_t x460 = 1;
	int32_t t93 = 259574978;

    t93 = ((x457%(x458-x459))<=x460);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x461 = -1;
	static volatile int8_t x462 = INT8_MIN;
	uint16_t x463 = 7235U;
	static volatile int8_t x464 = INT8_MIN;
	volatile int32_t t94 = 152742;

    t94 = ((x461%(x462-x463))<=x464);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x465 = 43944834;
	uint32_t x466 = 6U;
	int8_t x468 = 1;

    t95 = ((x465%(x466-x467))<=x468);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x473 = 1U;
	static int64_t x474 = INT64_MIN;
	int8_t x476 = 1;
	static int32_t t96 = -249;

    t96 = ((x473%(x474-x475))<=x476);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x481 = -8LL;
	static int8_t x482 = -24;
	int16_t x483 = INT16_MIN;
	volatile int32_t x484 = INT32_MIN;

    t97 = ((x481%(x482-x483))<=x484);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x485 = -1LL;
	int64_t x487 = -59797145785231LL;
	volatile int32_t x488 = INT32_MIN;
	volatile int32_t t98 = 5093822;

    t98 = ((x485%(x486-x487))<=x488);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x490 = 623218LLU;
	int32_t t99 = -2578;

    t99 = ((x489%(x490-x491))<=x492);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x493 = INT8_MAX;
	uint16_t x494 = 28U;
	int32_t x495 = 109;
	static int32_t x496 = INT32_MAX;
	static volatile int32_t t100 = -252;

    t100 = ((x493%(x494-x495))<=x496);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x497 = 15462U;
	static int64_t x498 = INT64_MIN;
	static int16_t x499 = INT16_MIN;
	uint32_t x500 = UINT32_MAX;
	static volatile int32_t t101 = -17006;

    t101 = ((x497%(x498-x499))<=x500);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x505 = -382;
	int32_t x506 = -39710629;
	uint8_t x507 = 0U;
	uint32_t x508 = 1U;
	volatile int32_t t102 = 0;

    t102 = ((x505%(x506-x507))<=x508);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint8_t x510 = 1U;
	uint16_t x511 = UINT16_MAX;
	uint32_t x512 = UINT32_MAX;
	int32_t t103 = 40061;

    t103 = ((x509%(x510-x511))<=x512);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x513 = INT64_MIN;
	uint64_t x514 = UINT64_MAX;
	int8_t x515 = -3;
	int8_t x516 = INT8_MIN;
	static int32_t t104 = -182;

    t104 = ((x513%(x514-x515))<=x516);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x517 = 0U;
	int8_t x518 = -52;
	static int8_t x519 = INT8_MIN;
	static volatile int32_t t105 = 1523;

    t105 = ((x517%(x518-x519))<=x520);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x521 = 48U;
	static int16_t x522 = INT16_MAX;
	int32_t x523 = -1;
	int32_t x524 = 841;
	int32_t t106 = -1;

    t106 = ((x521%(x522-x523))<=x524);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x527 = -154245723712797LL;
	volatile int32_t t107 = 2561;

    t107 = ((x525%(x526-x527))<=x528);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x529 = 6515846;
	static int8_t x530 = 57;
	int8_t x531 = -51;
	int32_t t108 = 351227;

    t108 = ((x529%(x530-x531))<=x532);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x533 = 0;
	volatile uint64_t x534 = UINT64_MAX;
	int8_t x535 = INT8_MIN;
	int8_t x536 = -13;
	static volatile int32_t t109 = -58302993;

    t109 = ((x533%(x534-x535))<=x536);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int64_t x537 = -1106617LL;
	uint8_t x538 = UINT8_MAX;
	int8_t x539 = 6;
	volatile int16_t x540 = INT16_MIN;
	volatile int32_t t110 = 60525591;

    t110 = ((x537%(x538-x539))<=x540);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x541 = 1U;
	static int32_t x542 = -119660064;

    t111 = ((x541%(x542-x543))<=x544);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int32_t x545 = INT32_MIN;
	uint32_t x546 = 263223116U;
	volatile int32_t t112 = -15;

    t112 = ((x545%(x546-x547))<=x548);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint16_t x549 = UINT16_MAX;
	uint64_t x551 = 14662258017513LLU;
	uint16_t x552 = 6119U;
	int32_t t113 = -70346;

    t113 = ((x549%(x550-x551))<=x552);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x553 = INT8_MIN;
	static volatile uint16_t x554 = 25338U;
	int32_t x555 = INT32_MAX;
	static int64_t x556 = INT64_MIN;
	static volatile int32_t t114 = 225173;

    t114 = ((x553%(x554-x555))<=x556);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x558 = UINT32_MAX;
	uint8_t x559 = 14U;
	int8_t x560 = -1;
	int32_t t115 = 2759;

    t115 = ((x557%(x558-x559))<=x560);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x561 = 1U;
	volatile int64_t x562 = -277689116352036011LL;
	volatile int16_t x563 = -1;
	uint64_t x564 = 6374LLU;
	volatile int32_t t116 = -27818;

    t116 = ((x561%(x562-x563))<=x564);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x565 = 1;
	int8_t x566 = INT8_MAX;
	int64_t x567 = -2021LL;
	static int64_t x568 = -1LL;

    t117 = ((x565%(x566-x567))<=x568);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint64_t x570 = UINT64_MAX;
	int32_t t118 = 201385883;

    t118 = ((x569%(x570-x571))<=x572);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x573 = 21528366;
	static volatile int16_t x574 = -1;
	static int16_t x575 = INT16_MIN;
	volatile uint64_t x576 = 135LLU;
	int32_t t119 = 185;

    t119 = ((x573%(x574-x575))<=x576);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x579 = UINT64_MAX;
	static volatile int32_t t120 = 16494771;

    t120 = ((x577%(x578-x579))<=x580);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x581 = 0;
	volatile int32_t x582 = INT32_MIN;
	uint64_t x583 = UINT64_MAX;
	uint8_t x584 = 33U;
	static volatile int32_t t121 = 267;

    t121 = ((x581%(x582-x583))<=x584);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x585 = -1;
	static volatile int8_t x586 = INT8_MIN;
	uint64_t x587 = 7LLU;
	int8_t x588 = INT8_MAX;
	volatile int32_t t122 = 12871;

    t122 = ((x585%(x586-x587))<=x588);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x589 = 13436U;
	int64_t x590 = INT64_MAX;
	uint16_t x591 = 55U;
	static uint16_t x592 = 2066U;
	static volatile int32_t t123 = 80;

    t123 = ((x589%(x590-x591))<=x592);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x593 = 10U;
	static uint32_t x594 = UINT32_MAX;
	volatile uint64_t x595 = 106281883276LLU;
	volatile int8_t x596 = 0;
	int32_t t124 = 123250;

    t124 = ((x593%(x594-x595))<=x596);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x597 = UINT16_MAX;
	int16_t x598 = INT16_MIN;
	static uint16_t x600 = UINT16_MAX;

    t125 = ((x597%(x598-x599))<=x600);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x601 = 1U;
	int16_t x602 = 1;
	int8_t x603 = INT8_MIN;
	int16_t x604 = -1;

    t126 = ((x601%(x602-x603))<=x604);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x609 = 195008875756LLU;
	int8_t x610 = -1;
	int8_t x611 = -59;
	int64_t x612 = INT64_MAX;

    t127 = ((x609%(x610-x611))<=x612);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x613 = -1LL;
	volatile uint16_t x615 = UINT16_MAX;

    t128 = ((x613%(x614-x615))<=x616);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x617 = INT8_MAX;
	static uint64_t x619 = 0LLU;
	uint64_t x620 = 1096541318078110249LLU;

    t129 = ((x617%(x618-x619))<=x620);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x622 = -6714LL;
	static uint16_t x623 = UINT16_MAX;
	volatile int64_t x624 = INT64_MIN;
	static int32_t t130 = -727616534;

    t130 = ((x621%(x622-x623))<=x624);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x625 = 507U;
	uint64_t x626 = 98446325003895910LLU;
	static volatile int32_t t131 = -6263629;

    t131 = ((x625%(x626-x627))<=x628);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x629 = 61460238U;
	volatile int64_t x631 = INT64_MIN;
	int32_t x632 = INT32_MIN;

    t132 = ((x629%(x630-x631))<=x632);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x633 = INT64_MAX;
	volatile uint8_t x634 = 2U;
	uint32_t x635 = 293U;
	int32_t x636 = -1;
	volatile int32_t t133 = -7;

    t133 = ((x633%(x634-x635))<=x636);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x637 = -1LL;
	volatile uint8_t x638 = 1U;
	uint16_t x640 = 0U;
	volatile int32_t t134 = 2707;

    t134 = ((x637%(x638-x639))<=x640);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x645 = 672058067;
	int64_t x646 = -1LL;
	int64_t x647 = INT64_MIN;
	volatile uint64_t x648 = 84967LLU;
	int32_t t135 = -2;

    t135 = ((x645%(x646-x647))<=x648);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x649 = UINT16_MAX;
	int64_t x650 = 245LL;
	volatile int64_t x651 = 24667593688LL;
	int16_t x652 = INT16_MIN;

    t136 = ((x649%(x650-x651))<=x652);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x653 = 0LLU;
	int8_t x654 = 3;
	volatile int64_t x655 = -705542623LL;
	int32_t t137 = -2369759;

    t137 = ((x653%(x654-x655))<=x656);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x657 = INT32_MAX;
	static uint8_t x658 = 2U;
	static uint8_t x659 = UINT8_MAX;
	volatile uint16_t x660 = 1U;

    t138 = ((x657%(x658-x659))<=x660);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x662 = INT16_MAX;
	static int32_t x663 = -2;
	int8_t x664 = INT8_MIN;

    t139 = ((x661%(x662-x663))<=x664);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x665 = 76;
	volatile uint32_t x666 = 32U;
	volatile int16_t x667 = -1;
	uint8_t x668 = 17U;
	volatile int32_t t140 = -2010212;

    t140 = ((x665%(x666-x667))<=x668);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint16_t x669 = 99U;
	int64_t x670 = 5526948073LL;
	int32_t x671 = 1;
	int8_t x672 = 54;
	volatile int32_t t141 = -2655753;

    t141 = ((x669%(x670-x671))<=x672);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x673 = INT32_MAX;
	uint16_t x674 = 368U;
	volatile int64_t x675 = -89295559LL;
	volatile int32_t x676 = -1;
	volatile int32_t t142 = 0;

    t142 = ((x673%(x674-x675))<=x676);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x677 = UINT64_MAX;
	uint8_t x678 = 30U;
	int32_t x680 = INT32_MIN;
	int32_t t143 = 0;

    t143 = ((x677%(x678-x679))<=x680);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x681 = 7145LLU;
	int16_t x682 = INT16_MIN;
	static int32_t x683 = 1400;
	int32_t x684 = INT32_MIN;
	volatile int32_t t144 = 27;

    t144 = ((x681%(x682-x683))<=x684);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x685 = 140U;
	uint64_t x686 = 254898LLU;
	uint32_t x687 = 109999U;
	int8_t x688 = 5;
	volatile int32_t t145 = -2054477;

    t145 = ((x685%(x686-x687))<=x688);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x689 = INT16_MIN;
	int16_t x690 = INT16_MIN;
	volatile int16_t x692 = -1;

    t146 = ((x689%(x690-x691))<=x692);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x693 = INT64_MIN;
	static volatile uint16_t x694 = 3U;
	int32_t x695 = -181587694;
	static volatile int8_t x696 = 36;
	volatile int32_t t147 = -14;

    t147 = ((x693%(x694-x695))<=x696);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x697 = INT64_MAX;
	int16_t x698 = -381;
	uint8_t x699 = 6U;
	int64_t x700 = -1LL;
	volatile int32_t t148 = 13;

    t148 = ((x697%(x698-x699))<=x700);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x701 = -1;
	volatile int16_t x703 = INT16_MAX;
	int16_t x704 = -434;
	static int32_t t149 = -725138;

    t149 = ((x701%(x702-x703))<=x704);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x705 = -365;
	static volatile uint8_t x706 = 0U;
	volatile int8_t x707 = -1;
	static int16_t x708 = -622;
	int32_t t150 = 262955240;

    t150 = ((x705%(x706-x707))<=x708);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x710 = UINT32_MAX;
	int64_t x712 = INT64_MAX;

    t151 = ((x709%(x710-x711))<=x712);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x713 = 0;
	uint64_t x714 = 7487325LLU;
	volatile uint32_t x715 = UINT32_MAX;
	int8_t x716 = -3;
	int32_t t152 = -331;

    t152 = ((x713%(x714-x715))<=x716);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x717 = 11U;
	int16_t x718 = 396;
	volatile uint32_t x719 = 7974757U;
	static int64_t x720 = -1LL;
	int32_t t153 = -1;

    t153 = ((x717%(x718-x719))<=x720);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x729 = 0;
	volatile int32_t t154 = 2;

    t154 = ((x729%(x730-x731))<=x732);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x733 = -13;
	uint32_t x734 = UINT32_MAX;
	int16_t x735 = INT16_MIN;
	uint16_t x736 = 27517U;
	int32_t t155 = -434;

    t155 = ((x733%(x734-x735))<=x736);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x737 = -1;
	int32_t x738 = 15880502;
	uint64_t x740 = 62581LLU;
	volatile int32_t t156 = -353908;

    t156 = ((x737%(x738-x739))<=x740);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x741 = 7;
	uint64_t x742 = UINT64_MAX;
	static int32_t x744 = -51543;
	volatile int32_t t157 = -91884;

    t157 = ((x741%(x742-x743))<=x744);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x745 = 5563LLU;
	int64_t x748 = 3340408695449LL;
	volatile int32_t t158 = 1;

    t158 = ((x745%(x746-x747))<=x748);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t t159 = -5386421;

    t159 = ((x753%(x754-x755))<=x756);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x757 = -1;
	uint64_t x758 = UINT64_MAX;
	int8_t x759 = 10;
	static int16_t x760 = 244;
	static int32_t t160 = -16;

    t160 = ((x757%(x758-x759))<=x760);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x765 = 1;
	int16_t x766 = INT16_MIN;
	int16_t x767 = 8024;
	int16_t x768 = -1;
	volatile int32_t t161 = -1;

    t161 = ((x765%(x766-x767))<=x768);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x769 = -1263;
	uint64_t x770 = UINT64_MAX;
	volatile uint8_t x771 = 25U;

    t162 = ((x769%(x770-x771))<=x772);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x775 = -5;
	int32_t x776 = INT32_MIN;
	volatile int32_t t163 = -318;

    t163 = ((x773%(x774-x775))<=x776);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x777 = INT32_MIN;
	int16_t x778 = 291;
	static int16_t x779 = -190;
	static int32_t x780 = INT32_MIN;
	static int32_t t164 = -123;

    t164 = ((x777%(x778-x779))<=x780);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x782 = -1LL;
	int64_t x783 = INT64_MAX;
	int8_t x784 = INT8_MIN;
	int32_t t165 = 249850387;

    t165 = ((x781%(x782-x783))<=x784);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x785 = INT64_MIN;
	uint16_t x786 = UINT16_MAX;
	volatile uint8_t x787 = 98U;
	static volatile int8_t x788 = INT8_MIN;
	int32_t t166 = -240;

    t166 = ((x785%(x786-x787))<=x788);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x791 = INT8_MIN;
	static int32_t x792 = -1;
	int32_t t167 = 0;

    t167 = ((x789%(x790-x791))<=x792);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x793 = 14200751U;
	int16_t x794 = INT16_MIN;
	int64_t x795 = INT64_MIN;
	static int64_t x796 = -1LL;
	int32_t t168 = 98;

    t168 = ((x793%(x794-x795))<=x796);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x810 = INT16_MIN;
	uint32_t x811 = 169U;
	volatile uint16_t x812 = UINT16_MAX;
	int32_t t169 = 7;

    t169 = ((x809%(x810-x811))<=x812);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x814 = -15;
	static uint64_t x816 = UINT64_MAX;
	volatile int32_t t170 = 350;

    t170 = ((x813%(x814-x815))<=x816);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x822 = -1;
	int32_t x823 = -4213;
	volatile int32_t t171 = -2196;

    t171 = ((x821%(x822-x823))<=x824);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x825 = -173232221376LL;
	int8_t x826 = -26;
	static volatile int64_t x827 = -1656901128835LL;
	int32_t x828 = -323713624;
	volatile int32_t t172 = -101;

    t172 = ((x825%(x826-x827))<=x828);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint8_t x829 = UINT8_MAX;
	static int32_t x830 = -7086113;
	int32_t t173 = -1;

    t173 = ((x829%(x830-x831))<=x832);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x833 = UINT16_MAX;
	static int64_t x834 = 73LL;
	int16_t x835 = INT16_MAX;
	uint64_t x836 = UINT64_MAX;
	int32_t t174 = -3;

    t174 = ((x833%(x834-x835))<=x836);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x838 = INT16_MIN;
	volatile int64_t x839 = 353423LL;

    t175 = ((x837%(x838-x839))<=x840);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x841 = -7023LL;
	int8_t x842 = INT8_MIN;
	uint64_t x843 = 1566221192LLU;
	int32_t x844 = -1;

    t176 = ((x841%(x842-x843))<=x844);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int16_t x845 = -1;
	static int8_t x846 = 5;
	int16_t x848 = 1457;
	static int32_t t177 = 7820879;

    t177 = ((x845%(x846-x847))<=x848);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x849 = -1;
	volatile uint8_t x851 = 3U;
	volatile int16_t x852 = INT16_MAX;
	volatile int32_t t178 = 5213;

    t178 = ((x849%(x850-x851))<=x852);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x853 = INT64_MIN;
	volatile uint64_t x854 = UINT64_MAX;
	static uint8_t x855 = 6U;
	int8_t x856 = INT8_MIN;
	static volatile int32_t t179 = 102;

    t179 = ((x853%(x854-x855))<=x856);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x857 = 427534U;
	int64_t x858 = -285398788142LL;
	volatile uint64_t x859 = UINT64_MAX;
	uint64_t x860 = 145506541LLU;
	int32_t t180 = 1;

    t180 = ((x857%(x858-x859))<=x860);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x861 = 23U;
	volatile uint16_t x862 = 20380U;
	int16_t x863 = INT16_MIN;
	int8_t x864 = -1;
	static int32_t t181 = 11053;

    t181 = ((x861%(x862-x863))<=x864);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x865 = 18U;
	static uint8_t x866 = 6U;
	static int16_t x867 = INT16_MIN;
	uint16_t x868 = 6U;
	volatile int32_t t182 = -74835322;

    t182 = ((x865%(x866-x867))<=x868);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x873 = INT16_MAX;
	static uint16_t x874 = 15U;
	int64_t x875 = INT64_MAX;
	static uint16_t x876 = UINT16_MAX;

    t183 = ((x873%(x874-x875))<=x876);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x881 = UINT8_MAX;
	int16_t x882 = INT16_MIN;
	int16_t x883 = -1;
	int32_t x884 = 0;

    t184 = ((x881%(x882-x883))<=x884);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x885 = -1;
	static int64_t x886 = -78944LL;
	uint16_t x887 = 32301U;
	int32_t t185 = -4056;

    t185 = ((x885%(x886-x887))<=x888);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x889 = 102U;
	int64_t x890 = -114164156875193LL;
	static int64_t x891 = 38981313LL;
	static int32_t x892 = INT32_MAX;

    t186 = ((x889%(x890-x891))<=x892);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x893 = 6U;
	int32_t x894 = 2;
	uint64_t x895 = 263646690709302LLU;
	static int8_t x896 = -4;
	static volatile int32_t t187 = -150;

    t187 = ((x893%(x894-x895))<=x896);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x897 = -1LL;
	static uint32_t x898 = UINT32_MAX;
	int8_t x899 = INT8_MIN;
	int64_t x900 = INT64_MIN;
	int32_t t188 = 6166049;

    t188 = ((x897%(x898-x899))<=x900);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x903 = -3;
	int64_t x904 = 2377175LL;
	volatile int32_t t189 = -30529;

    t189 = ((x901%(x902-x903))<=x904);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x906 = INT64_MIN;
	uint32_t x908 = UINT32_MAX;
	static int32_t t190 = -214845818;

    t190 = ((x905%(x906-x907))<=x908);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x909 = INT64_MIN;
	int16_t x910 = INT16_MAX;
	uint32_t x911 = UINT32_MAX;
	int64_t x912 = INT64_MIN;
	static int32_t t191 = 5;

    t191 = ((x909%(x910-x911))<=x912);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x914 = 32U;
	volatile uint32_t x915 = 8491353U;
	int32_t x916 = 755142;
	volatile int32_t t192 = -521;

    t192 = ((x913%(x914-x915))<=x916);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x917 = 48U;
	volatile int8_t x918 = INT8_MAX;
	uint16_t x919 = 34U;
	int64_t x920 = 208431277549LL;

    t193 = ((x917%(x918-x919))<=x920);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x921 = 6U;
	static int32_t x923 = INT32_MAX;
	int8_t x924 = -1;
	int32_t t194 = -95;

    t194 = ((x921%(x922-x923))<=x924);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x929 = INT16_MIN;
	volatile int16_t x930 = INT16_MIN;
	uint32_t x931 = UINT32_MAX;
	static int32_t t195 = -212;

    t195 = ((x929%(x930-x931))<=x932);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x933 = INT8_MIN;
	uint32_t x934 = UINT32_MAX;
	uint32_t x935 = 15005U;
	int32_t x936 = INT32_MIN;
	int32_t t196 = -424;

    t196 = ((x933%(x934-x935))<=x936);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x937 = -231LL;
	uint32_t x938 = 3U;
	static volatile int64_t x939 = -3816913351346883893LL;
	static volatile int64_t x940 = INT64_MIN;
	volatile int32_t t197 = 118545491;

    t197 = ((x937%(x938-x939))<=x940);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x941 = 1410990605325702LLU;
	uint16_t x942 = 1874U;
	static int16_t x943 = INT16_MIN;
	int32_t t198 = 382;

    t198 = ((x941%(x942-x943))<=x944);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x946 = -1LL;
	uint16_t x947 = UINT16_MAX;
	uint32_t x948 = 14151515U;
	volatile int32_t t199 = 865519;

    t199 = ((x945%(x946-x947))<=x948);

    if (t199 != 1) { NG(); } else { ; }
	
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


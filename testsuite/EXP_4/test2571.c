
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

static int32_t x2 = INT32_MAX;
volatile int8_t x8 = INT8_MIN;
volatile int32_t t2 = 1;
int8_t x14 = -1;
volatile int64_t x21 = 9907934228562410LL;
uint8_t x23 = 2U;
int32_t t5 = -1;
volatile int16_t x32 = INT16_MAX;
static uint64_t x41 = 0LLU;
int32_t x53 = -1;
int32_t t12 = -1;
int64_t x58 = 1LL;
int64_t x64 = INT64_MAX;
int32_t t14 = -7;
volatile int8_t x72 = -1;
volatile int32_t t18 = -3967067;
int32_t x83 = INT32_MIN;
uint16_t x91 = 0U;
int16_t x92 = INT16_MIN;
int8_t x96 = -2;
static int64_t x99 = -1LL;
volatile int32_t t23 = -55;
static volatile int32_t t25 = 9640730;
int64_t x109 = -1LL;
int64_t x122 = INT64_MIN;
int64_t x125 = INT64_MIN;
static int16_t x127 = -3;
int32_t t30 = 0;
uint32_t x137 = UINT32_MAX;
uint64_t x138 = UINT64_MAX;
int32_t x148 = INT32_MIN;
uint64_t x156 = UINT64_MAX;
static uint16_t x158 = UINT16_MAX;
volatile uint16_t x162 = 4U;
volatile int32_t t37 = -3;
static int8_t x168 = INT8_MAX;
static int32_t t39 = 0;
volatile int32_t t44 = 131529522;
uint64_t x197 = 42793LLU;
static int64_t x198 = -1LL;
int8_t x217 = INT8_MIN;
uint16_t x218 = 707U;
int64_t x226 = -1LL;
int32_t t52 = 15637;
int32_t x239 = INT32_MIN;
int32_t t54 = 2011423;
uint8_t x241 = UINT8_MAX;
int16_t x246 = INT16_MIN;
int8_t x247 = INT8_MAX;
int32_t x256 = -1;
int32_t t58 = -111879;
volatile int32_t t60 = 5901209;
int64_t x268 = INT64_MAX;
volatile int32_t x271 = -14153;
uint8_t x276 = 47U;
int8_t x280 = INT8_MIN;
volatile int32_t t64 = 37522056;
int32_t t65 = 3377;
volatile uint64_t x285 = 183LLU;
int32_t t66 = -427905263;
int32_t x289 = 23;
int64_t x291 = 96879263789213019LL;
static int32_t x292 = INT32_MAX;
int32_t t67 = -4;
static uint32_t x305 = 33515162U;
int8_t x306 = -1;
uint64_t x308 = 60111185383LLU;
static volatile int8_t x315 = 22;
static volatile int32_t t74 = -2867050;
volatile int16_t x321 = INT16_MIN;
int16_t x325 = INT16_MIN;
volatile uint8_t x327 = UINT8_MAX;
volatile int64_t x329 = -6009012204218873LL;
volatile uint16_t x330 = UINT16_MAX;
volatile int32_t x331 = 1985;
int64_t x343 = -1LL;
int32_t x345 = -1;
int32_t x349 = INT32_MIN;
int64_t x350 = 263933029050754LL;
uint64_t x361 = 36706812LLU;
int16_t x362 = -57;
volatile uint8_t x375 = 29U;
int32_t x378 = -1;
uint64_t x380 = UINT64_MAX;
int64_t x381 = 2032525113729263LL;
volatile int32_t t88 = -51372688;
volatile int8_t x390 = -1;
uint16_t x391 = UINT16_MAX;
static uint8_t x392 = 29U;
int16_t x393 = -34;
int64_t x400 = INT64_MIN;
uint32_t x402 = UINT32_MAX;
static volatile int8_t x413 = 46;
int8_t x416 = 22;
int64_t x419 = 3559122451664933LL;
static int8_t x420 = INT8_MIN;
int16_t x425 = -1;
static int8_t x427 = 7;
uint64_t x433 = 84068LLU;
uint32_t x440 = UINT32_MAX;
int16_t x442 = INT16_MAX;
int64_t x463 = INT64_MIN;
int32_t t107 = 54;
static int64_t x465 = INT64_MIN;
int64_t x473 = -7LL;
int64_t x475 = 9LL;
int32_t t110 = 4677;
static uint16_t x477 = 7941U;
static volatile int32_t t111 = 0;
static uint8_t x481 = UINT8_MAX;
volatile uint64_t x484 = 213411LLU;
volatile int32_t t112 = 1032;
uint64_t x485 = 2815960901009LLU;
int8_t x486 = INT8_MIN;
uint8_t x488 = 16U;
int8_t x490 = INT8_MAX;
int64_t x500 = -1LL;
int16_t x503 = -1;
int32_t t117 = -3;
uint32_t x523 = UINT32_MAX;
int16_t x524 = INT16_MIN;
volatile int64_t x527 = INT64_MIN;
static volatile int32_t t121 = -12310;
static int64_t x536 = INT64_MAX;
uint64_t x537 = UINT64_MAX;
int32_t x540 = -1;
uint32_t x545 = 127397U;
static int16_t x546 = -1;
int16_t x551 = INT16_MIN;
static int32_t x552 = 7916562;
volatile uint16_t x555 = 2839U;
int32_t x556 = INT32_MIN;
static volatile int32_t t128 = 46;
uint8_t x576 = 14U;
int16_t x582 = -791;
volatile uint32_t x583 = 79680U;
int8_t x585 = -1;
int8_t x591 = INT8_MAX;
int64_t x592 = -1LL;
uint8_t x594 = 6U;
int32_t x597 = INT32_MIN;
static int8_t x598 = INT8_MIN;
static int32_t t138 = 534476835;
volatile int16_t x607 = INT16_MAX;
static int8_t x608 = INT8_MAX;
int32_t t141 = -192536;
static volatile uint8_t x613 = 95U;
int16_t x616 = INT16_MIN;
int8_t x617 = INT8_MIN;
int64_t x618 = -1LL;
static int8_t x619 = INT8_MIN;
uint32_t x627 = 95968U;
static volatile int32_t t145 = -4;
int32_t t149 = 1;
int32_t t151 = 1;
volatile int16_t x654 = INT16_MIN;
int32_t t152 = 3547;
volatile int32_t t154 = 31548;
volatile uint8_t x667 = 13U;
int32_t t155 = 9726;
static int32_t x671 = -47;
uint8_t x679 = 2U;
int32_t x683 = -5;
int16_t x694 = INT16_MIN;
uint16_t x701 = 11702U;
static int64_t x707 = INT64_MAX;
static volatile uint64_t x714 = UINT64_MAX;
int32_t x723 = INT32_MIN;
volatile int8_t x725 = -15;
uint64_t x727 = 1LLU;
int64_t x728 = -1LL;
volatile int32_t t169 = 15858487;
static uint16_t x737 = UINT16_MAX;
volatile uint64_t x742 = 1385072391LLU;
volatile int32_t t175 = -975879262;
int64_t x755 = INT64_MIN;
int16_t x757 = INT16_MIN;
volatile uint8_t x758 = 16U;
uint32_t x761 = UINT32_MAX;
static volatile int32_t t178 = -7;
volatile int32_t t181 = -7;
int8_t x780 = INT8_MIN;
int32_t t183 = -765;
static int16_t x788 = 10;
int32_t t184 = 6126;
static int16_t x790 = INT16_MIN;
int32_t x792 = INT32_MIN;
int64_t x795 = 60985420444645LL;
int16_t x798 = INT16_MAX;
volatile int16_t x800 = -6;
uint64_t x809 = 82LLU;
int8_t x810 = -1;
uint8_t x814 = 10U;
volatile int8_t x816 = 31;
volatile uint16_t x817 = UINT16_MAX;
uint8_t x818 = 33U;
static uint64_t x822 = 1545182223151LLU;
int64_t x824 = 51246375900LL;
volatile uint64_t x826 = UINT64_MAX;
static uint32_t x827 = 20U;
volatile int32_t t194 = -32;
static int32_t t197 = 83500;
int16_t x845 = 436;


void f0(void) {
    	static int16_t x1 = 5088;
	uint8_t x3 = UINT8_MAX;
	volatile int64_t x4 = -1LL;
	int32_t t0 = 986749;

    t0 = (x1>(x2-(x3^x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = -1;
	uint8_t x6 = 1U;
	static uint16_t x7 = 0U;
	volatile int32_t t1 = 73;

    t1 = (x5>(x6-(x7^x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	int16_t x10 = INT16_MAX;
	uint16_t x11 = UINT16_MAX;
	volatile int64_t x12 = -1LL;

    t2 = (x9>(x10-(x11^x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -45;
	static volatile uint32_t x15 = 70895734U;
	int8_t x16 = -1;
	volatile int32_t t3 = 1;

    t3 = (x13>(x14-(x15^x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x17 = 6U;
	uint16_t x18 = UINT16_MAX;
	uint8_t x19 = 1U;
	volatile int16_t x20 = -1;
	int32_t t4 = 4082048;

    t4 = (x17>(x18-(x19^x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x22 = 1729996U;
	int8_t x24 = -1;

    t5 = (x21>(x22-(x23^x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int64_t x29 = INT64_MAX;
	int8_t x30 = 7;
	int8_t x31 = INT8_MIN;
	int32_t t6 = 63433;

    t6 = (x29>(x30-(x31^x32)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = 626;
	static int8_t x34 = 0;
	int16_t x35 = -1;
	int64_t x36 = 1LL;
	volatile int32_t t7 = 12;

    t7 = (x33>(x34-(x35^x36)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = INT64_MAX;
	uint32_t x38 = 385109U;
	int64_t x39 = -1LL;
	uint64_t x40 = 3105164LLU;
	volatile int32_t t8 = 1814;

    t8 = (x37>(x38-(x39^x40)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x42 = INT8_MIN;
	uint16_t x43 = 2719U;
	static int32_t x44 = INT32_MIN;
	int32_t t9 = -4824041;

    t9 = (x41>(x42-(x43^x44)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x45 = INT64_MAX;
	static int64_t x46 = INT64_MIN;
	static volatile int64_t x47 = 228534709494985LL;
	int32_t x48 = -3;
	int32_t t10 = 3664956;

    t10 = (x45>(x46-(x47^x48)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x49 = 154U;
	int16_t x50 = -1;
	uint64_t x51 = 2511245671370035506LLU;
	int8_t x52 = 1;
	volatile int32_t t11 = 113558;

    t11 = (x49>(x50-(x51^x52)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x54 = UINT64_MAX;
	uint8_t x55 = 32U;
	uint32_t x56 = 48019U;

    t12 = (x53>(x54-(x55^x56)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x57 = 13U;
	uint8_t x59 = UINT8_MAX;
	int32_t x60 = -1;
	volatile int32_t t13 = 3695;

    t13 = (x57>(x58-(x59^x60)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x61 = -1LL;
	static int16_t x62 = 73;
	uint16_t x63 = 29643U;

    t14 = (x61>(x62-(x63^x64)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = INT16_MIN;
	int8_t x66 = -3;
	int16_t x67 = -1;
	volatile int8_t x68 = -1;
	volatile int32_t t15 = -89543036;

    t15 = (x65>(x66-(x67^x68)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x69 = UINT8_MAX;
	static int32_t x70 = INT32_MAX;
	int16_t x71 = -2018;
	int32_t t16 = 138074;

    t16 = (x69>(x70-(x71^x72)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x73 = 360;
	uint32_t x74 = 125061U;
	int8_t x75 = 2;
	int16_t x76 = INT16_MAX;
	int32_t t17 = 240770334;

    t17 = (x73>(x74-(x75^x76)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x77 = INT8_MAX;
	static uint8_t x78 = UINT8_MAX;
	volatile int8_t x79 = -1;
	int16_t x80 = INT16_MIN;

    t18 = (x77>(x78-(x79^x80)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x81 = UINT32_MAX;
	uint16_t x82 = 620U;
	int16_t x84 = INT16_MIN;
	int32_t t19 = 574309;

    t19 = (x81>(x82-(x83^x84)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x85 = INT64_MIN;
	int64_t x86 = 25LL;
	uint32_t x87 = 259186541U;
	int16_t x88 = INT16_MIN;
	int32_t t20 = -1167;

    t20 = (x85>(x86-(x87^x88)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x89 = INT8_MIN;
	volatile uint16_t x90 = 627U;
	int32_t t21 = -1;

    t21 = (x89>(x90-(x91^x92)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x93 = -2125;
	uint16_t x94 = UINT16_MAX;
	int16_t x95 = -1;
	volatile int32_t t22 = 337;

    t22 = (x93>(x94-(x95^x96)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x97 = UINT8_MAX;
	uint32_t x98 = 68300U;
	int16_t x100 = INT16_MAX;

    t23 = (x97>(x98-(x99^x100)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = -1;
	volatile uint32_t x102 = UINT32_MAX;
	int16_t x103 = -1;
	volatile int8_t x104 = 1;
	int32_t t24 = -108445;

    t24 = (x101>(x102-(x103^x104)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x105 = 273936232219LLU;
	volatile uint32_t x106 = 8841260U;
	static volatile int32_t x107 = INT32_MIN;
	int8_t x108 = 0;

    t25 = (x105>(x106-(x107^x108)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x110 = 0U;
	static uint8_t x111 = UINT8_MAX;
	static uint16_t x112 = 17U;
	static volatile int32_t t26 = 1039152125;

    t26 = (x109>(x110-(x111^x112)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x113 = INT64_MIN;
	uint64_t x114 = UINT64_MAX;
	int64_t x115 = INT64_MIN;
	uint8_t x116 = 124U;
	volatile int32_t t27 = 120074965;

    t27 = (x113>(x114-(x115^x116)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x121 = 268U;
	int16_t x123 = 0;
	static int8_t x124 = -26;
	volatile int32_t t28 = 8676;

    t28 = (x121>(x122-(x123^x124)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x126 = INT16_MIN;
	volatile uint16_t x128 = 14U;
	int32_t t29 = -4;

    t29 = (x125>(x126-(x127^x128)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x129 = UINT32_MAX;
	uint8_t x130 = UINT8_MAX;
	int16_t x131 = -1;
	uint64_t x132 = 79075LLU;

    t30 = (x129>(x130-(x131^x132)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x133 = UINT64_MAX;
	int8_t x134 = INT8_MIN;
	int64_t x135 = 20454984152407716LL;
	int64_t x136 = INT64_MAX;
	int32_t t31 = 25632249;

    t31 = (x133>(x134-(x135^x136)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x139 = UINT32_MAX;
	volatile uint16_t x140 = 13U;
	int32_t t32 = -86640208;

    t32 = (x137>(x138-(x139^x140)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x145 = 0U;
	int32_t x146 = INT32_MIN;
	uint64_t x147 = UINT64_MAX;
	int32_t t33 = -3974683;

    t33 = (x145>(x146-(x147^x148)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x149 = 2077U;
	int64_t x150 = -764887658LL;
	static int16_t x151 = INT16_MIN;
	volatile uint64_t x152 = 870116208907235612LLU;
	volatile int32_t t34 = -1;

    t34 = (x149>(x150-(x151^x152)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x153 = UINT16_MAX;
	uint64_t x154 = UINT64_MAX;
	volatile uint32_t x155 = UINT32_MAX;
	volatile int32_t t35 = -557;

    t35 = (x153>(x154-(x155^x156)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x157 = 396258LL;
	int64_t x159 = INT64_MIN;
	int64_t x160 = 272937036192923LL;
	int32_t t36 = -9498888;

    t36 = (x157>(x158-(x159^x160)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x161 = INT8_MIN;
	static volatile int64_t x163 = INT64_MAX;
	uint8_t x164 = 6U;

    t37 = (x161>(x162-(x163^x164)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x165 = -1;
	volatile uint64_t x166 = UINT64_MAX;
	int64_t x167 = INT64_MAX;
	volatile int32_t t38 = 2465869;

    t38 = (x165>(x166-(x167^x168)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x169 = 3U;
	volatile int8_t x170 = INT8_MAX;
	volatile int16_t x171 = -1;
	volatile int16_t x172 = INT16_MAX;

    t39 = (x169>(x170-(x171^x172)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x173 = 1LLU;
	static volatile uint64_t x174 = UINT64_MAX;
	static int32_t x175 = 1891;
	volatile int16_t x176 = INT16_MIN;
	int32_t t40 = 3;

    t40 = (x173>(x174-(x175^x176)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x177 = 1507356406LLU;
	uint32_t x178 = UINT32_MAX;
	int8_t x179 = 11;
	int32_t x180 = INT32_MAX;
	volatile int32_t t41 = 321;

    t41 = (x177>(x178-(x179^x180)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x181 = -6;
	uint8_t x182 = 0U;
	int16_t x183 = -1;
	uint16_t x184 = 0U;
	static volatile int32_t t42 = -1;

    t42 = (x181>(x182-(x183^x184)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x185 = 386;
	static int16_t x186 = INT16_MIN;
	static volatile int32_t x187 = INT32_MIN;
	static int8_t x188 = INT8_MAX;
	volatile int32_t t43 = 5;

    t43 = (x185>(x186-(x187^x188)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x189 = INT8_MIN;
	static int16_t x190 = INT16_MIN;
	uint64_t x191 = 609284215360LLU;
	uint32_t x192 = UINT32_MAX;

    t44 = (x189>(x190-(x191^x192)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x193 = 110U;
	int32_t x194 = 72;
	uint8_t x195 = 73U;
	uint32_t x196 = UINT32_MAX;
	int32_t t45 = 0;

    t45 = (x193>(x194-(x195^x196)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint16_t x199 = UINT16_MAX;
	uint32_t x200 = 27475647U;
	int32_t t46 = 1079676;

    t46 = (x197>(x198-(x199^x200)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x201 = -1;
	int8_t x202 = -1;
	volatile uint16_t x203 = UINT16_MAX;
	uint64_t x204 = 20LLU;
	volatile int32_t t47 = -1041866;

    t47 = (x201>(x202-(x203^x204)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x209 = 1U;
	uint8_t x210 = UINT8_MAX;
	uint16_t x211 = UINT16_MAX;
	uint16_t x212 = 31627U;
	volatile int32_t t48 = -86635223;

    t48 = (x209>(x210-(x211^x212)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x219 = 245LL;
	uint16_t x220 = 2U;
	static volatile int32_t t49 = -199627;

    t49 = (x217>(x218-(x219^x220)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x221 = 6LLU;
	volatile int8_t x222 = -1;
	uint32_t x223 = UINT32_MAX;
	static volatile int16_t x224 = INT16_MIN;
	int32_t t50 = 278727402;

    t50 = (x221>(x222-(x223^x224)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x225 = INT16_MAX;
	int16_t x227 = -1;
	int32_t x228 = -6680521;
	int32_t t51 = -6798;

    t51 = (x225>(x226-(x227^x228)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x229 = 0U;
	uint16_t x230 = UINT16_MAX;
	uint64_t x231 = 314966957428746530LLU;
	int16_t x232 = -1;

    t52 = (x229>(x230-(x231^x232)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x233 = INT32_MIN;
	int64_t x234 = INT64_MIN;
	uint32_t x235 = 122044531U;
	volatile uint64_t x236 = 213554522LLU;
	int32_t t53 = 28040;

    t53 = (x233>(x234-(x235^x236)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int16_t x237 = -1;
	volatile int32_t x238 = -1;
	volatile int64_t x240 = -1LL;

    t54 = (x237>(x238-(x239^x240)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x242 = -1;
	static int64_t x243 = 23355464LL;
	int8_t x244 = -12;
	int32_t t55 = -8615948;

    t55 = (x241>(x242-(x243^x244)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x245 = UINT8_MAX;
	volatile int32_t x248 = INT32_MIN;
	volatile int32_t t56 = 5;

    t56 = (x245>(x246-(x247^x248)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x249 = INT64_MAX;
	uint16_t x250 = 168U;
	uint16_t x251 = 31618U;
	uint64_t x252 = 208932LLU;
	volatile int32_t t57 = -187642;

    t57 = (x249>(x250-(x251^x252)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x253 = -1LL;
	volatile uint64_t x254 = 320LLU;
	int8_t x255 = INT8_MIN;

    t58 = (x253>(x254-(x255^x256)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x257 = 0;
	static uint64_t x258 = 551860625615216682LLU;
	uint32_t x259 = 6947527U;
	volatile int16_t x260 = -1;
	static int32_t t59 = -3203;

    t59 = (x257>(x258-(x259^x260)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x261 = INT8_MAX;
	int16_t x262 = INT16_MAX;
	int8_t x263 = 1;
	int8_t x264 = INT8_MIN;

    t60 = (x261>(x262-(x263^x264)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x265 = INT16_MAX;
	static int8_t x266 = INT8_MIN;
	int64_t x267 = -1LL;
	int32_t t61 = -61;

    t61 = (x265>(x266-(x267^x268)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x269 = INT32_MIN;
	static int32_t x270 = INT32_MIN;
	static uint8_t x272 = 6U;
	static volatile int32_t t62 = -245;

    t62 = (x269>(x270-(x271^x272)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x273 = -4LL;
	volatile uint8_t x274 = UINT8_MAX;
	volatile int16_t x275 = -1;
	int32_t t63 = -122386;

    t63 = (x273>(x274-(x275^x276)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x277 = 27366U;
	volatile int32_t x278 = -1;
	int16_t x279 = INT16_MIN;

    t64 = (x277>(x278-(x279^x280)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x281 = INT32_MIN;
	int8_t x282 = INT8_MIN;
	uint16_t x283 = 92U;
	volatile uint8_t x284 = 5U;

    t65 = (x281>(x282-(x283^x284)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x286 = INT64_MIN;
	uint64_t x287 = 10237755275LLU;
	uint64_t x288 = 190078518010LLU;

    t66 = (x285>(x286-(x287^x288)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x290 = INT16_MIN;

    t67 = (x289>(x290-(x291^x292)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x293 = 1;
	uint64_t x294 = UINT64_MAX;
	int32_t x295 = INT32_MIN;
	int16_t x296 = INT16_MAX;
	static volatile int32_t t68 = -1;

    t68 = (x293>(x294-(x295^x296)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x297 = 8U;
	volatile int16_t x298 = -1;
	int64_t x299 = -1LL;
	static volatile uint64_t x300 = UINT64_MAX;
	static volatile int32_t t69 = -1751853;

    t69 = (x297>(x298-(x299^x300)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x301 = INT32_MIN;
	int32_t x302 = 1266727;
	static int8_t x303 = -1;
	int64_t x304 = 29333077LL;
	volatile int32_t t70 = -162;

    t70 = (x301>(x302-(x303^x304)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x307 = UINT8_MAX;
	volatile int32_t t71 = 251;

    t71 = (x305>(x306-(x307^x308)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x309 = -1;
	int16_t x310 = -1225;
	int32_t x311 = INT32_MIN;
	int32_t x312 = 10;
	volatile int32_t t72 = 15;

    t72 = (x309>(x310-(x311^x312)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x313 = 13U;
	int16_t x314 = INT16_MAX;
	static volatile int32_t x316 = 1046100809;
	volatile int32_t t73 = 167604895;

    t73 = (x313>(x314-(x315^x316)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x317 = INT16_MAX;
	volatile int64_t x318 = INT64_MIN;
	volatile int8_t x319 = INT8_MIN;
	int8_t x320 = INT8_MIN;

    t74 = (x317>(x318-(x319^x320)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x322 = -1;
	volatile int32_t x323 = -1;
	uint32_t x324 = 10427U;
	int32_t t75 = 3662;

    t75 = (x321>(x322-(x323^x324)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x326 = INT64_MAX;
	int32_t x328 = INT32_MAX;
	static int32_t t76 = 229;

    t76 = (x325>(x326-(x327^x328)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x332 = 13827LL;
	volatile int32_t t77 = -89729;

    t77 = (x329>(x330-(x331^x332)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x333 = INT64_MAX;
	static int32_t x334 = -2;
	static int8_t x335 = -1;
	volatile int16_t x336 = INT16_MAX;
	int32_t t78 = -6106960;

    t78 = (x333>(x334-(x335^x336)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x337 = 11977292412448289LLU;
	static uint16_t x338 = 12U;
	volatile uint32_t x339 = UINT32_MAX;
	int8_t x340 = -15;
	volatile int32_t t79 = -712;

    t79 = (x337>(x338-(x339^x340)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x341 = UINT64_MAX;
	volatile int16_t x342 = 2238;
	static int32_t x344 = 461;
	volatile int32_t t80 = -1;

    t80 = (x341>(x342-(x343^x344)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int32_t x346 = INT32_MIN;
	static uint32_t x347 = UINT32_MAX;
	uint64_t x348 = 1458980919014380LLU;
	volatile int32_t t81 = -23712;

    t81 = (x345>(x346-(x347^x348)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x351 = 3U;
	int64_t x352 = INT64_MAX;
	int32_t t82 = -188845245;

    t82 = (x349>(x350-(x351^x352)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x357 = INT32_MIN;
	uint8_t x358 = UINT8_MAX;
	int32_t x359 = -59456;
	int32_t x360 = INT32_MIN;
	volatile int32_t t83 = 0;

    t83 = (x357>(x358-(x359^x360)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x363 = 16997849U;
	static volatile int16_t x364 = 0;
	int32_t t84 = 1;

    t84 = (x361>(x362-(x363^x364)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x365 = 10;
	int16_t x366 = INT16_MIN;
	int64_t x367 = INT64_MIN;
	volatile int32_t x368 = INT32_MIN;
	int32_t t85 = -239895;

    t85 = (x365>(x366-(x367^x368)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x373 = -1;
	uint8_t x374 = 6U;
	static uint64_t x376 = 0LLU;
	volatile int32_t t86 = 6;

    t86 = (x373>(x374-(x375^x376)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x377 = -1743190LL;
	int8_t x379 = INT8_MAX;
	static volatile int32_t t87 = 351022606;

    t87 = (x377>(x378-(x379^x380)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x382 = INT8_MIN;
	int32_t x383 = 603058348;
	int8_t x384 = -1;

    t88 = (x381>(x382-(x383^x384)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x385 = UINT64_MAX;
	int32_t x386 = -1;
	int8_t x387 = -9;
	int8_t x388 = -1;
	volatile int32_t t89 = 3794339;

    t89 = (x385>(x386-(x387^x388)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x389 = INT32_MIN;
	int32_t t90 = -32067;

    t90 = (x389>(x390-(x391^x392)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int64_t x394 = INT64_MAX;
	volatile int32_t x395 = -1;
	static int16_t x396 = -1197;
	int32_t t91 = 1;

    t91 = (x393>(x394-(x395^x396)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int32_t x397 = INT32_MIN;
	uint32_t x398 = 149814579U;
	int8_t x399 = -1;
	static int32_t t92 = -148;

    t92 = (x397>(x398-(x399^x400)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x401 = INT8_MAX;
	int8_t x403 = 40;
	int64_t x404 = -16357LL;
	static int32_t t93 = 9199154;

    t93 = (x401>(x402-(x403^x404)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x405 = -1;
	int16_t x406 = INT16_MIN;
	int8_t x407 = INT8_MIN;
	static volatile uint32_t x408 = 448U;
	int32_t t94 = 33160391;

    t94 = (x405>(x406-(x407^x408)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x409 = INT64_MIN;
	static int16_t x410 = -12126;
	uint8_t x411 = 1U;
	uint8_t x412 = 8U;
	static int32_t t95 = -17553939;

    t95 = (x409>(x410-(x411^x412)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x414 = -1;
	int64_t x415 = INT64_MAX;
	volatile int32_t t96 = 425542;

    t96 = (x413>(x414-(x415^x416)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x417 = INT8_MIN;
	uint64_t x418 = UINT64_MAX;
	static volatile int32_t t97 = 237614;

    t97 = (x417>(x418-(x419^x420)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x421 = 2683U;
	int32_t x422 = -1;
	uint32_t x423 = 821073616U;
	int64_t x424 = INT64_MAX;
	volatile int32_t t98 = 3;

    t98 = (x421>(x422-(x423^x424)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x426 = INT16_MIN;
	int8_t x428 = INT8_MAX;
	volatile int32_t t99 = 73610207;

    t99 = (x425>(x426-(x427^x428)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x434 = UINT8_MAX;
	int16_t x435 = -60;
	int32_t x436 = 4265684;
	static volatile int32_t t100 = 0;

    t100 = (x433>(x434-(x435^x436)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x437 = INT64_MAX;
	volatile uint64_t x438 = UINT64_MAX;
	uint32_t x439 = 4U;
	volatile int32_t t101 = -1139333;

    t101 = (x437>(x438-(x439^x440)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x441 = INT8_MIN;
	static uint16_t x443 = 31644U;
	static volatile int32_t x444 = INT32_MAX;
	volatile int32_t t102 = 3454;

    t102 = (x441>(x442-(x443^x444)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x445 = UINT16_MAX;
	volatile int32_t x446 = 666845;
	volatile uint16_t x447 = UINT16_MAX;
	uint16_t x448 = 45U;
	int32_t t103 = 29;

    t103 = (x445>(x446-(x447^x448)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x449 = 14700826324099LLU;
	int64_t x450 = -1LL;
	int8_t x451 = 17;
	int32_t x452 = -1;
	static volatile int32_t t104 = 51961711;

    t104 = (x449>(x450-(x451^x452)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x453 = INT8_MIN;
	static uint16_t x454 = 4U;
	uint16_t x455 = UINT16_MAX;
	int8_t x456 = INT8_MIN;
	int32_t t105 = 9;

    t105 = (x453>(x454-(x455^x456)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x457 = -31;
	int64_t x458 = -1212331910246708903LL;
	uint8_t x459 = 11U;
	int16_t x460 = 3148;
	volatile int32_t t106 = 97468706;

    t106 = (x457>(x458-(x459^x460)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x461 = UINT8_MAX;
	uint64_t x462 = 58383322402845260LLU;
	uint16_t x464 = UINT16_MAX;

    t107 = (x461>(x462-(x463^x464)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x466 = 0U;
	int16_t x467 = INT16_MIN;
	int64_t x468 = INT64_MIN;
	int32_t t108 = -498;

    t108 = (x465>(x466-(x467^x468)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x469 = -458;
	uint16_t x470 = UINT16_MAX;
	int64_t x471 = INT64_MAX;
	uint8_t x472 = 59U;
	static int32_t t109 = -2370;

    t109 = (x469>(x470-(x471^x472)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x474 = 0U;
	int64_t x476 = INT64_MIN;

    t110 = (x473>(x474-(x475^x476)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x478 = INT8_MIN;
	static volatile uint8_t x479 = UINT8_MAX;
	volatile int64_t x480 = -10407LL;

    t111 = (x477>(x478-(x479^x480)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x482 = INT8_MAX;
	int8_t x483 = INT8_MIN;

    t112 = (x481>(x482-(x483^x484)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x487 = 17LL;
	static int32_t t113 = 11;

    t113 = (x485>(x486-(x487^x488)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x489 = -1;
	static uint64_t x491 = UINT64_MAX;
	uint16_t x492 = 1854U;
	int32_t t114 = -3689;

    t114 = (x489>(x490-(x491^x492)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x497 = INT32_MIN;
	volatile uint64_t x498 = 1229278020571826334LLU;
	int16_t x499 = INT16_MAX;
	int32_t t115 = -1;

    t115 = (x497>(x498-(x499^x500)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x501 = -1;
	uint64_t x502 = UINT64_MAX;
	int64_t x504 = INT64_MIN;
	int32_t t116 = -1060;

    t116 = (x501>(x502-(x503^x504)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x505 = INT32_MAX;
	int8_t x506 = -1;
	volatile uint64_t x507 = 5401310782251834574LLU;
	uint8_t x508 = 50U;

    t117 = (x505>(x506-(x507^x508)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x509 = INT8_MIN;
	volatile uint32_t x510 = 50958649U;
	volatile int16_t x511 = INT16_MIN;
	int64_t x512 = 2LL;
	volatile int32_t t118 = 519306882;

    t118 = (x509>(x510-(x511^x512)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x513 = -1LL;
	uint64_t x514 = 2664719413847LLU;
	uint16_t x515 = 272U;
	volatile uint16_t x516 = 160U;
	static int32_t t119 = 15643;

    t119 = (x513>(x514-(x515^x516)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x521 = 4615988;
	volatile uint32_t x522 = UINT32_MAX;
	int32_t t120 = 7082;

    t120 = (x521>(x522-(x523^x524)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x525 = INT32_MAX;
	volatile int32_t x526 = 214131;
	int8_t x528 = -1;

    t121 = (x525>(x526-(x527^x528)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x529 = -119986019131110897LL;
	int16_t x530 = INT16_MAX;
	int16_t x531 = 0;
	static volatile int32_t x532 = -1;
	int32_t t122 = -810;

    t122 = (x529>(x530-(x531^x532)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x533 = 78155U;
	static volatile int16_t x534 = INT16_MAX;
	int8_t x535 = 0;
	int32_t t123 = -376155;

    t123 = (x533>(x534-(x535^x536)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x538 = 7;
	volatile int16_t x539 = -11766;
	volatile int32_t t124 = -239;

    t124 = (x537>(x538-(x539^x540)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x541 = 1621U;
	volatile uint64_t x542 = UINT64_MAX;
	static uint64_t x543 = 1168818811LLU;
	int64_t x544 = -966022874224160822LL;
	int32_t t125 = -382;

    t125 = (x541>(x542-(x543^x544)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x547 = INT8_MIN;
	uint32_t x548 = 986U;
	volatile int32_t t126 = 0;

    t126 = (x545>(x546-(x547^x548)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int32_t x549 = -16730868;
	volatile uint16_t x550 = 1U;
	volatile int32_t t127 = 22503823;

    t127 = (x549>(x550-(x551^x552)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x553 = UINT16_MAX;
	int8_t x554 = 52;

    t128 = (x553>(x554-(x555^x556)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x557 = INT16_MAX;
	int16_t x558 = 0;
	int16_t x559 = 0;
	static int8_t x560 = 13;
	int32_t t129 = -26845;

    t129 = (x557>(x558-(x559^x560)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x561 = 4800LLU;
	int8_t x562 = INT8_MIN;
	uint64_t x563 = 876393387365308LLU;
	static int32_t x564 = INT32_MAX;
	int32_t t130 = -8939281;

    t130 = (x561>(x562-(x563^x564)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x569 = -4799459265LL;
	static volatile uint8_t x570 = 8U;
	int8_t x571 = -1;
	volatile int16_t x572 = INT16_MIN;
	volatile int32_t t131 = 114967;

    t131 = (x569>(x570-(x571^x572)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x573 = 485U;
	uint8_t x574 = 14U;
	int16_t x575 = INT16_MIN;
	volatile int32_t t132 = 1;

    t132 = (x573>(x574-(x575^x576)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x577 = INT16_MAX;
	int16_t x578 = INT16_MAX;
	static uint64_t x579 = UINT64_MAX;
	int32_t x580 = INT32_MIN;
	volatile int32_t t133 = 1047;

    t133 = (x577>(x578-(x579^x580)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x581 = 228U;
	int16_t x584 = INT16_MIN;
	volatile int32_t t134 = 29671077;

    t134 = (x581>(x582-(x583^x584)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x586 = 1U;
	int16_t x587 = -1;
	int16_t x588 = -1;
	int32_t t135 = -448108267;

    t135 = (x585>(x586-(x587^x588)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x589 = -1;
	uint16_t x590 = 241U;
	int32_t t136 = -407677;

    t136 = (x589>(x590-(x591^x592)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x593 = 62U;
	int16_t x595 = INT16_MIN;
	static int8_t x596 = INT8_MIN;
	int32_t t137 = -10;

    t137 = (x593>(x594-(x595^x596)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x599 = 24208U;
	int8_t x600 = 12;

    t138 = (x597>(x598-(x599^x600)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x601 = 196U;
	int16_t x602 = INT16_MIN;
	static uint64_t x603 = 200LLU;
	int32_t x604 = INT32_MIN;
	volatile int32_t t139 = 14;

    t139 = (x601>(x602-(x603^x604)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int64_t x605 = INT64_MIN;
	uint16_t x606 = UINT16_MAX;
	volatile int32_t t140 = 17;

    t140 = (x605>(x606-(x607^x608)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x609 = INT64_MIN;
	uint64_t x610 = UINT64_MAX;
	volatile int32_t x611 = INT32_MIN;
	static int32_t x612 = INT32_MIN;

    t141 = (x609>(x610-(x611^x612)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x614 = 3;
	int32_t x615 = 206165755;
	int32_t t142 = -12;

    t142 = (x613>(x614-(x615^x616)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x620 = -209;
	volatile int32_t t143 = -18774280;

    t143 = (x617>(x618-(x619^x620)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x621 = INT8_MAX;
	int32_t x622 = INT32_MIN;
	int32_t x623 = INT32_MIN;
	static int16_t x624 = INT16_MAX;
	int32_t t144 = -1191;

    t144 = (x621>(x622-(x623^x624)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x625 = -1;
	int32_t x626 = 697611374;
	uint8_t x628 = 6U;

    t145 = (x625>(x626-(x627^x628)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x629 = 588212250;
	int32_t x630 = -7907801;
	static uint8_t x631 = 74U;
	static int32_t x632 = INT32_MIN;
	int32_t t146 = 47076133;

    t146 = (x629>(x630-(x631^x632)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x633 = -1;
	volatile uint32_t x634 = UINT32_MAX;
	static volatile int64_t x635 = INT64_MAX;
	int32_t x636 = INT32_MAX;
	volatile int32_t t147 = 154;

    t147 = (x633>(x634-(x635^x636)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x637 = -705299;
	uint32_t x638 = UINT32_MAX;
	volatile int8_t x639 = INT8_MIN;
	uint8_t x640 = UINT8_MAX;
	static volatile int32_t t148 = 340521468;

    t148 = (x637>(x638-(x639^x640)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x641 = 1LLU;
	uint32_t x642 = 19364725U;
	int64_t x643 = INT64_MAX;
	int8_t x644 = 0;

    t149 = (x641>(x642-(x643^x644)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x645 = 337286LLU;
	volatile int16_t x646 = INT16_MIN;
	int8_t x647 = INT8_MIN;
	int32_t x648 = 6;
	static volatile int32_t t150 = -7837624;

    t150 = (x645>(x646-(x647^x648)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x649 = INT32_MAX;
	int16_t x650 = -3;
	static uint32_t x651 = 5526U;
	uint32_t x652 = 64U;

    t151 = (x649>(x650-(x651^x652)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x653 = INT32_MAX;
	int16_t x655 = -393;
	int16_t x656 = -1;

    t152 = (x653>(x654-(x655^x656)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x657 = INT32_MIN;
	int32_t x658 = 0;
	int8_t x659 = INT8_MIN;
	uint8_t x660 = UINT8_MAX;
	int32_t t153 = 109537020;

    t153 = (x657>(x658-(x659^x660)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x661 = -87537477316LL;
	int8_t x662 = INT8_MAX;
	static volatile int8_t x663 = INT8_MIN;
	uint16_t x664 = 1478U;

    t154 = (x661>(x662-(x663^x664)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x665 = INT8_MAX;
	int32_t x666 = INT32_MAX;
	int32_t x668 = INT32_MAX;

    t155 = (x665>(x666-(x667^x668)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x669 = -1;
	static uint64_t x670 = UINT64_MAX;
	int64_t x672 = -1LL;
	int32_t t156 = 14;

    t156 = (x669>(x670-(x671^x672)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x673 = -25665LL;
	static volatile uint64_t x674 = 4LLU;
	uint64_t x675 = 16482LLU;
	int8_t x676 = INT8_MIN;
	int32_t t157 = -5923;

    t157 = (x673>(x674-(x675^x676)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x677 = INT64_MIN;
	volatile int8_t x678 = -1;
	volatile uint8_t x680 = 73U;
	int32_t t158 = -13718;

    t158 = (x677>(x678-(x679^x680)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x681 = -1;
	uint64_t x682 = 922687LLU;
	uint8_t x684 = 38U;
	int32_t t159 = 829;

    t159 = (x681>(x682-(x683^x684)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x685 = INT16_MIN;
	int64_t x686 = 417502686087343LL;
	volatile int16_t x687 = INT16_MIN;
	uint16_t x688 = 574U;
	int32_t t160 = 7868;

    t160 = (x685>(x686-(x687^x688)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x689 = UINT8_MAX;
	int16_t x690 = INT16_MAX;
	uint64_t x691 = 73785LLU;
	int64_t x692 = -1LL;
	int32_t t161 = -18027;

    t161 = (x689>(x690-(x691^x692)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x693 = -1;
	int16_t x695 = 0;
	uint16_t x696 = UINT16_MAX;
	volatile int32_t t162 = -24902698;

    t162 = (x693>(x694-(x695^x696)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x697 = UINT8_MAX;
	uint8_t x698 = UINT8_MAX;
	uint16_t x699 = UINT16_MAX;
	static volatile uint32_t x700 = 61567836U;
	volatile int32_t t163 = -1265;

    t163 = (x697>(x698-(x699^x700)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x702 = 2156U;
	volatile int64_t x703 = 3699378935712LL;
	volatile int16_t x704 = INT16_MIN;
	static volatile int32_t t164 = 128205;

    t164 = (x701>(x702-(x703^x704)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int64_t x705 = 135838281499620846LL;
	uint64_t x706 = UINT64_MAX;
	uint16_t x708 = 11U;
	int32_t t165 = -2285117;

    t165 = (x705>(x706-(x707^x708)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x713 = 27111740068LL;
	int16_t x715 = -1;
	static int64_t x716 = INT64_MIN;
	int32_t t166 = -22333;

    t166 = (x713>(x714-(x715^x716)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x717 = 1408U;
	int16_t x718 = INT16_MIN;
	int32_t x719 = -1;
	static uint8_t x720 = 49U;
	volatile int32_t t167 = -31;

    t167 = (x717>(x718-(x719^x720)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x721 = INT8_MAX;
	int16_t x722 = INT16_MIN;
	uint8_t x724 = 116U;
	int32_t t168 = 247631;

    t168 = (x721>(x722-(x723^x724)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x726 = -1LL;

    t169 = (x725>(x726-(x727^x728)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x729 = 1;
	uint16_t x730 = 12370U;
	uint16_t x731 = 117U;
	int16_t x732 = INT16_MIN;
	int32_t t170 = -1;

    t170 = (x729>(x730-(x731^x732)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x733 = -86;
	uint16_t x734 = 2U;
	int8_t x735 = INT8_MAX;
	uint64_t x736 = 0LLU;
	volatile int32_t t171 = 956932315;

    t171 = (x733>(x734-(x735^x736)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x738 = 2;
	uint8_t x739 = 6U;
	int8_t x740 = -3;
	volatile int32_t t172 = 8010;

    t172 = (x737>(x738-(x739^x740)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x741 = INT64_MIN;
	int16_t x743 = 8096;
	int32_t x744 = INT32_MIN;
	static int32_t t173 = 2953;

    t173 = (x741>(x742-(x743^x744)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x745 = 351U;
	int8_t x746 = INT8_MIN;
	int64_t x747 = 1046012214117LL;
	volatile int64_t x748 = INT64_MAX;
	volatile int32_t t174 = -102307611;

    t174 = (x745>(x746-(x747^x748)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x749 = 13U;
	volatile uint32_t x750 = 323U;
	int8_t x751 = -1;
	uint16_t x752 = 1U;

    t175 = (x749>(x750-(x751^x752)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x753 = 62084233;
	int8_t x754 = INT8_MIN;
	int32_t x756 = INT32_MAX;
	int32_t t176 = -34;

    t176 = (x753>(x754-(x755^x756)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x759 = INT8_MIN;
	static int8_t x760 = -1;
	volatile int32_t t177 = -2383065;

    t177 = (x757>(x758-(x759^x760)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x762 = INT8_MIN;
	int16_t x763 = 2521;
	static volatile int16_t x764 = -1;

    t178 = (x761>(x762-(x763^x764)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x765 = -16;
	static uint32_t x766 = 4705U;
	static int16_t x767 = -1;
	static int8_t x768 = INT8_MIN;
	volatile int32_t t179 = 3502162;

    t179 = (x765>(x766-(x767^x768)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x769 = INT32_MIN;
	uint8_t x770 = 91U;
	static int16_t x771 = -3;
	uint64_t x772 = 10548135LLU;
	volatile int32_t t180 = -212085346;

    t180 = (x769>(x770-(x771^x772)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x773 = 102U;
	uint64_t x774 = 2904997121234531LLU;
	static volatile uint16_t x775 = UINT16_MAX;
	uint8_t x776 = 46U;

    t181 = (x773>(x774-(x775^x776)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x777 = UINT32_MAX;
	int8_t x778 = 1;
	uint8_t x779 = 50U;
	volatile int32_t t182 = 0;

    t182 = (x777>(x778-(x779^x780)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x781 = 227866953;
	uint16_t x782 = UINT16_MAX;
	int64_t x783 = -55441090048502401LL;
	uint16_t x784 = 15U;

    t183 = (x781>(x782-(x783^x784)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x785 = INT8_MAX;
	static int16_t x786 = INT16_MIN;
	int64_t x787 = INT64_MIN;

    t184 = (x785>(x786-(x787^x788)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x789 = UINT16_MAX;
	int16_t x791 = INT16_MIN;
	int32_t t185 = 0;

    t185 = (x789>(x790-(x791^x792)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x793 = 544829925806569848LLU;
	volatile int16_t x794 = 0;
	uint32_t x796 = UINT32_MAX;
	static int32_t t186 = 7519399;

    t186 = (x793>(x794-(x795^x796)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x797 = 6727U;
	uint16_t x799 = 2U;
	volatile int32_t t187 = 3757847;

    t187 = (x797>(x798-(x799^x800)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint32_t x801 = 1U;
	int8_t x802 = INT8_MAX;
	static int64_t x803 = INT64_MAX;
	int32_t x804 = INT32_MAX;
	volatile int32_t t188 = 79498;

    t188 = (x801>(x802-(x803^x804)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x805 = INT32_MIN;
	int8_t x806 = 40;
	static volatile uint32_t x807 = 452U;
	uint16_t x808 = UINT16_MAX;
	volatile int32_t t189 = -4078623;

    t189 = (x805>(x806-(x807^x808)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint64_t x811 = 89330LLU;
	volatile uint16_t x812 = 2268U;
	int32_t t190 = 0;

    t190 = (x809>(x810-(x811^x812)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x813 = 6997754U;
	int8_t x815 = INT8_MAX;
	static int32_t t191 = 354151;

    t191 = (x813>(x814-(x815^x816)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x819 = 14U;
	static int16_t x820 = -1;
	volatile int32_t t192 = -326841840;

    t192 = (x817>(x818-(x819^x820)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x821 = 1;
	int32_t x823 = 0;
	volatile int32_t t193 = 86997861;

    t193 = (x821>(x822-(x823^x824)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x825 = -1;
	volatile uint16_t x828 = 96U;

    t194 = (x825>(x826-(x827^x828)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x829 = -12532;
	int32_t x830 = INT32_MIN;
	int16_t x831 = INT16_MIN;
	int16_t x832 = INT16_MAX;
	volatile int32_t t195 = 5;

    t195 = (x829>(x830-(x831^x832)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x833 = -1;
	static int16_t x834 = -12856;
	volatile int64_t x835 = INT64_MAX;
	uint64_t x836 = UINT64_MAX;
	int32_t t196 = -8112;

    t196 = (x833>(x834-(x835^x836)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x837 = -30199672771LL;
	static uint32_t x838 = 12U;
	int16_t x839 = -1;
	int8_t x840 = -2;

    t197 = (x837>(x838-(x839^x840)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x841 = INT8_MAX;
	static uint32_t x842 = 25332U;
	volatile uint64_t x843 = 2LLU;
	uint8_t x844 = 0U;
	volatile int32_t t198 = -133811698;

    t198 = (x841>(x842-(x843^x844)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x846 = -1;
	int8_t x847 = -1;
	static int32_t x848 = -1;
	volatile int32_t t199 = -93;

    t199 = (x845>(x846-(x847^x848)));

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


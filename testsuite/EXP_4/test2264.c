
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

int32_t x2 = 1;
volatile int32_t t0 = 3;
int32_t t1 = -415;
static volatile uint16_t x20 = 91U;
int32_t x22 = -1;
int16_t x24 = -85;
volatile int32_t t5 = -23;
static int64_t x29 = -1LL;
uint64_t x35 = 3LLU;
uint16_t x39 = 23190U;
uint8_t x40 = 3U;
volatile int32_t t9 = 28;
uint16_t x41 = UINT16_MAX;
static int32_t t10 = 433673500;
uint8_t x51 = 20U;
volatile int16_t x52 = INT16_MAX;
uint16_t x55 = 25483U;
int16_t x57 = INT16_MIN;
uint16_t x59 = 91U;
volatile int16_t x63 = -1;
volatile int32_t t15 = 45597401;
int32_t x69 = INT32_MAX;
static int16_t x71 = -1;
int16_t x78 = INT16_MIN;
int32_t x79 = INT32_MAX;
static volatile uint32_t x80 = 33009U;
int16_t x86 = -10110;
uint8_t x87 = 26U;
int32_t t22 = 2454013;
uint64_t x98 = UINT64_MAX;
uint32_t x99 = UINT32_MAX;
static int32_t t24 = 17;
static int32_t t25 = -979956;
volatile uint8_t x105 = 6U;
volatile int32_t t26 = -5028;
volatile int32_t t27 = 610;
int32_t x115 = -1;
uint16_t x116 = UINT16_MAX;
volatile int32_t t29 = -408802508;
static int8_t x121 = -1;
volatile int8_t x123 = INT8_MIN;
uint16_t x124 = 24585U;
static int32_t t30 = 4055;
int8_t x126 = -25;
int16_t x127 = -1;
uint64_t x128 = UINT64_MAX;
int32_t x129 = INT32_MAX;
uint8_t x136 = 0U;
int16_t x140 = -1;
volatile int32_t t34 = 7;
int8_t x141 = 2;
static int8_t x145 = INT8_MAX;
volatile uint8_t x146 = 6U;
static volatile int32_t t36 = -105;
int16_t x149 = -1;
uint16_t x151 = UINT16_MAX;
volatile int8_t x153 = -1;
static uint16_t x155 = UINT16_MAX;
static int32_t t38 = 252088052;
volatile int8_t x157 = -1;
uint8_t x167 = 1U;
int64_t x169 = INT64_MIN;
static int16_t x175 = INT16_MIN;
volatile uint16_t x178 = 6U;
int64_t x179 = -1LL;
int32_t x182 = INT32_MIN;
int64_t x191 = -17712LL;
static int8_t x194 = -7;
volatile int32_t t48 = 14935659;
int8_t x204 = INT8_MIN;
static volatile int32_t t50 = 31730;
static uint16_t x210 = 7U;
static int32_t x216 = INT32_MAX;
uint64_t x217 = UINT64_MAX;
static volatile int16_t x240 = 1;
int32_t t59 = -67929567;
uint32_t x244 = UINT32_MAX;
int32_t t60 = 242044;
volatile int64_t x247 = INT64_MAX;
static int32_t t62 = -3877924;
uint8_t x260 = 13U;
volatile int32_t t66 = -668247222;
static uint64_t x271 = 31446637756LLU;
volatile int32_t x272 = INT32_MAX;
volatile int32_t t67 = -903800865;
uint64_t x284 = 281134528563688LLU;
volatile int8_t x286 = -1;
uint8_t x288 = 1U;
int32_t x290 = INT32_MAX;
int32_t x292 = INT32_MIN;
int16_t x293 = -425;
volatile int32_t t73 = -6514256;
int8_t x302 = -1;
static int16_t x323 = INT16_MIN;
int8_t x328 = -1;
int64_t x336 = -1LL;
static int32_t t83 = -2802;
int32_t x338 = 486166007;
uint8_t x355 = 1U;
static int64_t x356 = 807233198532LL;
int64_t x358 = INT64_MAX;
int8_t x365 = -1;
volatile int32_t t91 = -7938704;
int8_t x371 = -1;
uint32_t x380 = 3303U;
uint32_t x382 = 48U;
static int64_t x386 = -1LL;
static volatile int32_t t97 = 7440629;
volatile int64_t x404 = 386294191355282357LL;
int64_t x407 = -1LL;
static uint64_t x408 = 2829LLU;
uint16_t x412 = 13105U;
uint8_t x414 = 60U;
int8_t x415 = INT8_MIN;
int64_t x417 = -944337659448836293LL;
volatile uint32_t x420 = 37411368U;
volatile int32_t t104 = -392;
int8_t x421 = INT8_MAX;
int16_t x422 = INT16_MIN;
uint8_t x424 = 1U;
volatile int8_t x425 = INT8_MAX;
int32_t x428 = INT32_MAX;
uint32_t x430 = 15718519U;
int64_t x437 = INT64_MIN;
volatile int32_t t109 = 32978;
int32_t x450 = INT32_MIN;
int32_t t112 = 223;
int8_t x453 = INT8_MAX;
uint64_t x456 = 5708137007904848992LLU;
int32_t t113 = -16933;
int16_t x461 = INT16_MIN;
int16_t x468 = -1;
volatile int32_t t116 = 33574179;
uint64_t x470 = UINT64_MAX;
volatile int64_t x475 = INT64_MIN;
volatile int32_t t120 = 5;
static uint64_t x492 = 34LLU;
volatile int64_t x502 = INT64_MIN;
int32_t t125 = -1;
int8_t x505 = 1;
volatile int64_t x509 = -1353128LL;
uint64_t x510 = 9281192750272LLU;
volatile int32_t t128 = 4;
int8_t x520 = INT8_MIN;
volatile int32_t t130 = -30;
volatile int32_t t132 = -39;
uint16_t x533 = 1014U;
int8_t x541 = INT8_MIN;
int64_t x549 = INT64_MIN;
uint32_t x550 = 43463U;
int32_t x551 = 231720521;
int32_t t139 = -14868;
int32_t x564 = INT32_MAX;
uint8_t x567 = UINT8_MAX;
uint32_t x569 = 8U;
int32_t x571 = INT32_MIN;
int32_t x579 = INT32_MAX;
volatile int32_t x581 = INT32_MIN;
uint64_t x583 = UINT64_MAX;
static int32_t x584 = 19570;
int32_t x590 = -1;
volatile int32_t t148 = -5104;
uint8_t x602 = UINT8_MAX;
uint64_t x605 = 10956LLU;
int32_t t151 = 4;
uint32_t x625 = UINT32_MAX;
int64_t x627 = 396447LL;
volatile uint16_t x629 = 12016U;
static int64_t x632 = -147779171632LL;
uint64_t x637 = 7362967LLU;
int16_t x638 = INT16_MIN;
int64_t x657 = INT64_MIN;
int32_t t165 = 13;
int64_t x668 = INT64_MAX;
volatile uint64_t x675 = UINT64_MAX;
int8_t x677 = -4;
uint16_t x682 = 4028U;
volatile uint32_t x690 = 1162720798U;
int64_t x694 = -1LL;
uint8_t x697 = 12U;
volatile int32_t t176 = 6450591;
int64_t x709 = -1LL;
static volatile int8_t x718 = INT8_MAX;
uint16_t x726 = 932U;
uint16_t x728 = UINT16_MAX;
int64_t x732 = -23051517006222737LL;
uint8_t x744 = UINT8_MAX;
volatile int32_t t186 = 105282;
uint16_t x751 = 7U;
volatile int16_t x753 = -1;
uint16_t x754 = 3U;
int8_t x756 = INT8_MIN;
int16_t x762 = -1;
uint16_t x766 = 89U;
uint16_t x769 = 23U;
int32_t t192 = 21301;
volatile int32_t t193 = -475705322;
uint16_t x778 = 0U;
int32_t x780 = INT32_MIN;
int16_t x791 = 0;
int32_t t197 = -142;
uint16_t x794 = 159U;
volatile int64_t x797 = INT64_MAX;


void f0(void) {
    	volatile int32_t x1 = -1;
	int8_t x3 = 25;
	volatile int32_t x4 = INT32_MAX;

    t0 = (x1<=(x2==(x3&x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = -1016716423;
	int64_t x6 = INT64_MIN;
	int8_t x7 = -1;
	int64_t x8 = -1LL;

    t1 = (x5<=(x6==(x7&x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 85U;
	uint8_t x10 = UINT8_MAX;
	int8_t x11 = 22;
	static int32_t x12 = INT32_MIN;
	static volatile int32_t t2 = 138;

    t2 = (x9<=(x10==(x11&x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -156411;
	int64_t x14 = -1LL;
	uint64_t x15 = UINT64_MAX;
	static volatile int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 107800268;

    t3 = (x13<=(x14==(x15&x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -62577LL;
	static volatile int16_t x18 = -11321;
	uint32_t x19 = 13517U;
	int32_t t4 = -42172124;

    t4 = (x17<=(x18==(x19&x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = 316;
	uint16_t x23 = UINT16_MAX;

    t5 = (x21<=(x22==(x23&x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = 1714;
	int8_t x26 = INT8_MIN;
	int32_t x27 = INT32_MIN;
	int32_t x28 = 298358;
	static volatile int32_t t6 = 2011560;

    t6 = (x25<=(x26==(x27&x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x30 = 6U;
	volatile int64_t x31 = INT64_MAX;
	int8_t x32 = INT8_MIN;
	int32_t t7 = 507735242;

    t7 = (x29<=(x30==(x31&x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	int32_t x34 = -796007123;
	uint32_t x36 = 26585176U;
	volatile int32_t t8 = -182473;

    t8 = (x33<=(x34==(x35&x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = INT8_MAX;
	int16_t x38 = -1;

    t9 = (x37<=(x38==(x39&x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x42 = UINT32_MAX;
	uint32_t x43 = 118964063U;
	static int32_t x44 = -2746618;

    t10 = (x41<=(x42==(x43&x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 1U;
	static int64_t x46 = INT64_MAX;
	int8_t x47 = -60;
	static uint64_t x48 = 40121LLU;
	volatile int32_t t11 = -435;

    t11 = (x45<=(x46==(x47&x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -841494518494LL;
	int32_t x50 = INT32_MIN;
	volatile int32_t t12 = 0;

    t12 = (x49<=(x50==(x51&x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -1;
	int32_t x54 = -14;
	volatile int8_t x56 = 1;
	volatile int32_t t13 = 164959647;

    t13 = (x53<=(x54==(x55&x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = INT32_MAX;
	volatile int8_t x60 = -1;
	int32_t t14 = 11;

    t14 = (x57<=(x58==(x59&x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = INT32_MIN;
	static int32_t x62 = INT32_MIN;
	uint16_t x64 = UINT16_MAX;

    t15 = (x61<=(x62==(x63&x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	int16_t x66 = 4355;
	int8_t x67 = -1;
	uint8_t x68 = UINT8_MAX;
	volatile int32_t t16 = -737;

    t16 = (x65<=(x66==(x67&x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x70 = INT8_MIN;
	uint64_t x72 = 7617651118268612LLU;
	volatile int32_t t17 = -2;

    t17 = (x69<=(x70==(x71&x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MIN;
	int32_t x74 = 50087148;
	int32_t x75 = INT32_MIN;
	uint64_t x76 = 861406916441LLU;
	int32_t t18 = -2920072;

    t18 = (x73<=(x74==(x75&x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = UINT64_MAX;
	static int32_t t19 = -53414;

    t19 = (x77<=(x78==(x79&x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 62U;
	volatile int64_t x82 = INT64_MIN;
	volatile int8_t x83 = INT8_MAX;
	int64_t x84 = 86469878528000LL;
	int32_t t20 = 1728111;

    t20 = (x81<=(x82==(x83&x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -1;
	static int32_t x88 = INT32_MIN;
	int32_t t21 = -1;

    t21 = (x85<=(x86==(x87&x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = INT16_MIN;
	volatile int32_t x90 = INT32_MAX;
	int64_t x91 = INT64_MIN;
	int64_t x92 = INT64_MIN;

    t22 = (x89<=(x90==(x91&x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	uint8_t x94 = UINT8_MAX;
	int64_t x95 = -7893LL;
	uint32_t x96 = UINT32_MAX;
	volatile int32_t t23 = 24625782;

    t23 = (x93<=(x94==(x95&x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint8_t x97 = 8U;
	volatile uint32_t x100 = UINT32_MAX;

    t24 = (x97<=(x98==(x99&x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 7U;
	volatile uint8_t x102 = UINT8_MAX;
	static int16_t x103 = -722;
	uint64_t x104 = 52112752LLU;

    t25 = (x101<=(x102==(x103&x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x106 = INT32_MIN;
	static uint8_t x107 = UINT8_MAX;
	static int64_t x108 = INT64_MIN;

    t26 = (x105<=(x106==(x107&x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = -18;
	volatile uint8_t x110 = 3U;
	static int8_t x111 = INT8_MAX;
	int64_t x112 = -2667722LL;

    t27 = (x109<=(x110==(x111&x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -1LL;
	int32_t x114 = -1;
	volatile int32_t t28 = 0;

    t28 = (x113<=(x114==(x115&x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MAX;
	static int16_t x118 = -119;
	uint8_t x119 = UINT8_MAX;
	uint64_t x120 = 690457768LLU;

    t29 = (x117<=(x118==(x119&x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int8_t x122 = -1;

    t30 = (x121<=(x122==(x123&x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x125 = 19U;
	volatile int32_t t31 = 39808;

    t31 = (x125<=(x126==(x127&x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x130 = -38129;
	int64_t x131 = 10557040572LL;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t32 = -42;

    t32 = (x129<=(x130==(x131&x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = -959906910;
	volatile int32_t x134 = -635039049;
	int16_t x135 = INT16_MIN;
	int32_t t33 = -55272;

    t33 = (x133<=(x134==(x135&x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x137 = UINT16_MAX;
	int32_t x138 = INT32_MIN;
	uint32_t x139 = 1524U;

    t34 = (x137<=(x138==(x139&x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x142 = -1;
	static int8_t x143 = 21;
	int32_t x144 = -1245784;
	int32_t t35 = 5;

    t35 = (x141<=(x142==(x143&x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x147 = INT64_MIN;
	volatile uint16_t x148 = 9049U;

    t36 = (x145<=(x146==(x147&x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x150 = 19U;
	static int64_t x152 = -339408564997LL;
	int32_t t37 = 153;

    t37 = (x149<=(x150==(x151&x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x154 = 28U;
	uint8_t x156 = UINT8_MAX;

    t38 = (x153<=(x154==(x155&x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x158 = INT8_MIN;
	int32_t x159 = INT32_MIN;
	int32_t x160 = -1;
	static volatile int32_t t39 = -139722;

    t39 = (x157<=(x158==(x159&x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = -9;
	uint64_t x162 = 18655743LLU;
	volatile int32_t x163 = -1;
	int32_t x164 = INT32_MIN;
	volatile int32_t t40 = -3444966;

    t40 = (x161<=(x162==(x163&x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 2099U;
	uint32_t x166 = 7531482U;
	static int16_t x168 = 48;
	volatile int32_t t41 = 56;

    t41 = (x165<=(x166==(x167&x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x170 = UINT8_MAX;
	uint32_t x171 = 1386648U;
	uint8_t x172 = 113U;
	volatile int32_t t42 = -377;

    t42 = (x169<=(x170==(x171&x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = -26985449287094LL;
	volatile int16_t x174 = -1;
	static uint16_t x176 = 6U;
	volatile int32_t t43 = -76513;

    t43 = (x173<=(x174==(x175&x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MIN;
	int16_t x180 = 57;
	volatile int32_t t44 = 13584;

    t44 = (x177<=(x178==(x179&x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint8_t x181 = UINT8_MAX;
	int32_t x183 = INT32_MIN;
	int64_t x184 = -1LL;
	static volatile int32_t t45 = -16217527;

    t45 = (x181<=(x182==(x183&x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = 14756068744372025LL;
	int64_t x186 = 34385539379334LL;
	uint8_t x187 = UINT8_MAX;
	int16_t x188 = -1;
	static volatile int32_t t46 = 222350;

    t46 = (x185<=(x186==(x187&x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x189 = 116U;
	int32_t x190 = 48961;
	uint32_t x192 = 7501U;
	int32_t t47 = 9867;

    t47 = (x189<=(x190==(x191&x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = -1;
	uint8_t x195 = 1U;
	int64_t x196 = 540187602991968956LL;

    t48 = (x193<=(x194==(x195&x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x197 = INT16_MAX;
	int32_t x198 = INT32_MAX;
	uint16_t x199 = UINT16_MAX;
	uint16_t x200 = 2198U;
	int32_t t49 = 2395;

    t49 = (x197<=(x198==(x199&x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = 1522U;
	volatile uint32_t x202 = 688U;
	uint8_t x203 = 35U;

    t50 = (x201<=(x202==(x203&x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = -4;
	volatile int64_t x206 = INT64_MIN;
	volatile uint8_t x207 = 2U;
	volatile uint64_t x208 = 128064672638400392LLU;
	volatile int32_t t51 = 263124810;

    t51 = (x205<=(x206==(x207&x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x209 = INT8_MIN;
	int32_t x211 = INT32_MAX;
	static int32_t x212 = INT32_MAX;
	static volatile int32_t t52 = 1671;

    t52 = (x209<=(x210==(x211&x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = UINT8_MAX;
	static uint8_t x214 = UINT8_MAX;
	int64_t x215 = INT64_MIN;
	int32_t t53 = -34;

    t53 = (x213<=(x214==(x215&x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x218 = -1;
	uint64_t x219 = UINT64_MAX;
	int64_t x220 = INT64_MAX;
	int32_t t54 = 54004;

    t54 = (x217<=(x218==(x219&x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = -1;
	int16_t x222 = INT16_MIN;
	volatile int32_t x223 = INT32_MIN;
	int16_t x224 = -30;
	volatile int32_t t55 = -108;

    t55 = (x221<=(x222==(x223&x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x225 = -434045LL;
	volatile uint32_t x226 = 1925014454U;
	int16_t x227 = -11723;
	volatile int8_t x228 = -1;
	volatile int32_t t56 = -146;

    t56 = (x225<=(x226==(x227&x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MAX;
	static uint8_t x230 = UINT8_MAX;
	int8_t x231 = 20;
	int64_t x232 = -1LL;
	volatile int32_t t57 = -1024473;

    t57 = (x229<=(x230==(x231&x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x233 = 2970007164376LLU;
	volatile uint64_t x234 = UINT64_MAX;
	int64_t x235 = 2350196848741812357LL;
	static int8_t x236 = -1;
	int32_t t58 = 204679;

    t58 = (x233<=(x234==(x235&x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MIN;
	int32_t x238 = 2083403;
	volatile uint8_t x239 = 1U;

    t59 = (x237<=(x238==(x239&x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = 3001473422539648LL;
	int8_t x242 = INT8_MIN;
	int16_t x243 = INT16_MIN;

    t60 = (x241<=(x242==(x243&x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = INT16_MIN;
	static int8_t x246 = 6;
	static int16_t x248 = INT16_MIN;
	static volatile int32_t t61 = 0;

    t61 = (x245<=(x246==(x247&x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = -1;
	volatile int8_t x250 = -1;
	int32_t x251 = 376121100;
	int64_t x252 = INT64_MIN;

    t62 = (x249<=(x250==(x251&x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = 435U;
	static volatile int8_t x254 = INT8_MAX;
	int64_t x255 = 725LL;
	static int64_t x256 = -1LL;
	volatile int32_t t63 = 2057;

    t63 = (x253<=(x254==(x255&x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MAX;
	int8_t x258 = INT8_MAX;
	int8_t x259 = -1;
	int32_t t64 = 58978075;

    t64 = (x257<=(x258==(x259&x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = UINT32_MAX;
	uint8_t x262 = UINT8_MAX;
	int32_t x263 = -137478;
	uint32_t x264 = 15U;
	static int32_t t65 = 97;

    t65 = (x261<=(x262==(x263&x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = 233356LL;
	volatile int16_t x266 = -4;
	int16_t x267 = INT16_MIN;
	static int8_t x268 = INT8_MIN;

    t66 = (x265<=(x266==(x267&x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MIN;
	static int64_t x270 = INT64_MAX;

    t67 = (x269<=(x270==(x271&x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint32_t x273 = 759589761U;
	volatile int64_t x274 = -2579067747762LL;
	int64_t x275 = INT64_MAX;
	int8_t x276 = INT8_MIN;
	int32_t t68 = 697544;

    t68 = (x273<=(x274==(x275&x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x277 = INT64_MIN;
	int64_t x278 = INT64_MAX;
	volatile int16_t x279 = INT16_MAX;
	volatile int64_t x280 = -6913853441319LL;
	static volatile int32_t t69 = 4648595;

    t69 = (x277<=(x278==(x279&x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x281 = INT8_MIN;
	int32_t x282 = INT32_MAX;
	uint16_t x283 = UINT16_MAX;
	volatile int32_t t70 = 14973;

    t70 = (x281<=(x282==(x283&x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = -1;
	uint32_t x287 = 40U;
	volatile int32_t t71 = -132660370;

    t71 = (x285<=(x286==(x287&x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x289 = UINT8_MAX;
	uint16_t x291 = 1639U;
	static volatile int32_t t72 = -1059937;

    t72 = (x289<=(x290==(x291&x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x294 = 11305U;
	uint32_t x295 = 29U;
	int32_t x296 = 13;

    t73 = (x293<=(x294==(x295&x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x297 = INT64_MAX;
	int32_t x298 = 151;
	uint16_t x299 = 0U;
	volatile int32_t x300 = INT32_MIN;
	volatile int32_t t74 = -6;

    t74 = (x297<=(x298==(x299&x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MIN;
	uint8_t x303 = 81U;
	uint8_t x304 = UINT8_MAX;
	volatile int32_t t75 = 175;

    t75 = (x301<=(x302==(x303&x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x305 = -1029606978837974LL;
	int8_t x306 = -1;
	static int8_t x307 = INT8_MIN;
	uint16_t x308 = 9117U;
	int32_t t76 = -2;

    t76 = (x305<=(x306==(x307&x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = 37764916U;
	uint32_t x310 = UINT32_MAX;
	volatile int8_t x311 = -1;
	static int8_t x312 = INT8_MIN;
	volatile int32_t t77 = -40619;

    t77 = (x309<=(x310==(x311&x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MAX;
	static int64_t x314 = INT64_MAX;
	volatile int32_t x315 = INT32_MIN;
	int8_t x316 = 0;
	volatile int32_t t78 = 162;

    t78 = (x313<=(x314==(x315&x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = 56U;
	int32_t x318 = -15509088;
	int64_t x319 = INT64_MIN;
	int32_t x320 = INT32_MIN;
	int32_t t79 = 370085;

    t79 = (x317<=(x318==(x319&x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = 2746588135804368LLU;
	uint16_t x322 = 8190U;
	static int64_t x324 = -1LL;
	volatile int32_t t80 = 0;

    t80 = (x321<=(x322==(x323&x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MIN;
	int16_t x326 = -1;
	int32_t x327 = INT32_MIN;
	volatile int32_t t81 = -21;

    t81 = (x325<=(x326==(x327&x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x329 = 32373LL;
	int64_t x330 = -1LL;
	static uint16_t x331 = 12938U;
	static int8_t x332 = INT8_MAX;
	volatile int32_t t82 = -218;

    t82 = (x329<=(x330==(x331&x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -7;
	volatile int64_t x334 = INT64_MAX;
	uint32_t x335 = 0U;

    t83 = (x333<=(x334==(x335&x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = 11U;
	static int32_t x339 = -1;
	uint64_t x340 = 13298535272587648LLU;
	static volatile int32_t t84 = -583554;

    t84 = (x337<=(x338==(x339&x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = UINT8_MAX;
	static volatile int8_t x342 = -1;
	int32_t x343 = -1;
	uint8_t x344 = 0U;
	static volatile int32_t t85 = -8708995;

    t85 = (x341<=(x342==(x343&x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MAX;
	static int16_t x346 = INT16_MIN;
	static uint32_t x347 = UINT32_MAX;
	uint32_t x348 = 1044573U;
	volatile int32_t t86 = 117348951;

    t86 = (x345<=(x346==(x347&x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = INT8_MIN;
	int16_t x350 = 3298;
	int8_t x351 = 7;
	static volatile int32_t x352 = INT32_MIN;
	int32_t t87 = 2933283;

    t87 = (x349<=(x350==(x351&x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = INT16_MAX;
	int16_t x354 = INT16_MAX;
	int32_t t88 = -34989866;

    t88 = (x353<=(x354==(x355&x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x357 = 1619312266660680616LLU;
	uint32_t x359 = 0U;
	static int8_t x360 = -9;
	volatile int32_t t89 = -125005253;

    t89 = (x357<=(x358==(x359&x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = UINT32_MAX;
	int8_t x362 = INT8_MIN;
	int32_t x363 = -3766;
	uint32_t x364 = 273981168U;
	static volatile int32_t t90 = -125014;

    t90 = (x361<=(x362==(x363&x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x366 = -7;
	int8_t x367 = INT8_MIN;
	volatile uint8_t x368 = UINT8_MAX;

    t91 = (x365<=(x366==(x367&x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = UINT8_MAX;
	uint64_t x370 = 945432189856LLU;
	int64_t x372 = INT64_MAX;
	int32_t t92 = 207965;

    t92 = (x369<=(x370==(x371&x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = 129655608U;
	static volatile int16_t x374 = INT16_MIN;
	static uint8_t x375 = 1U;
	int64_t x376 = -1084082262129LL;
	volatile int32_t t93 = -3732;

    t93 = (x373<=(x374==(x375&x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = -82296452LL;
	int64_t x378 = 4849977392594LL;
	static int64_t x379 = INT64_MIN;
	volatile int32_t t94 = -1890651;

    t94 = (x377<=(x378==(x379&x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = UINT8_MAX;
	int32_t x383 = INT32_MIN;
	static volatile int32_t x384 = INT32_MIN;
	volatile int32_t t95 = -12;

    t95 = (x381<=(x382==(x383&x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x385 = INT8_MAX;
	int8_t x387 = INT8_MIN;
	int64_t x388 = INT64_MIN;
	int32_t t96 = 118;

    t96 = (x385<=(x386==(x387&x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x389 = INT64_MAX;
	int32_t x390 = 1;
	volatile int64_t x391 = INT64_MIN;
	int32_t x392 = INT32_MIN;

    t97 = (x389<=(x390==(x391&x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x393 = -1;
	int32_t x394 = INT32_MAX;
	volatile int8_t x395 = -1;
	int64_t x396 = INT64_MAX;
	static int32_t t98 = 26046221;

    t98 = (x393<=(x394==(x395&x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = UINT32_MAX;
	int64_t x398 = -1LL;
	static volatile uint64_t x399 = 110LLU;
	volatile int8_t x400 = INT8_MAX;
	volatile int32_t t99 = 446931;

    t99 = (x397<=(x398==(x399&x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x401 = 2286290LL;
	int16_t x402 = INT16_MIN;
	int32_t x403 = -42647034;
	volatile int32_t t100 = 43744831;

    t100 = (x401<=(x402==(x403&x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x405 = 1035576604346LLU;
	static int32_t x406 = INT32_MIN;
	int32_t t101 = -172622350;

    t101 = (x405<=(x406==(x407&x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x409 = 772415729506427768LLU;
	volatile int32_t x410 = 27456762;
	int64_t x411 = INT64_MIN;
	int32_t t102 = 2110731;

    t102 = (x409<=(x410==(x411&x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = INT64_MIN;
	uint32_t x416 = 10U;
	volatile int32_t t103 = 821;

    t103 = (x413<=(x414==(x415&x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x418 = UINT32_MAX;
	uint32_t x419 = UINT32_MAX;

    t104 = (x417<=(x418==(x419&x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x423 = -1;
	static int32_t t105 = -383899;

    t105 = (x421<=(x422==(x423&x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x426 = INT32_MIN;
	static int16_t x427 = INT16_MAX;
	int32_t t106 = 12;

    t106 = (x425<=(x426==(x427&x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MIN;
	uint32_t x431 = 34U;
	uint32_t x432 = 255U;
	static int32_t t107 = 478;

    t107 = (x429<=(x430==(x431&x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int64_t x433 = 52525LL;
	uint8_t x434 = 1U;
	int64_t x435 = INT64_MIN;
	uint64_t x436 = 105LLU;
	static volatile int32_t t108 = 5;

    t108 = (x433<=(x434==(x435&x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x438 = 2562U;
	static int64_t x439 = INT64_MIN;
	static int64_t x440 = INT64_MIN;

    t109 = (x437<=(x438==(x439&x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = 1U;
	int64_t x442 = INT64_MAX;
	volatile uint16_t x443 = UINT16_MAX;
	volatile int32_t x444 = INT32_MAX;
	volatile int32_t t110 = -5760;

    t110 = (x441<=(x442==(x443&x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = 57898786;
	int8_t x446 = INT8_MAX;
	int64_t x447 = -1LL;
	int16_t x448 = INT16_MIN;
	int32_t t111 = 1069325424;

    t111 = (x445<=(x446==(x447&x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = 0U;
	volatile uint16_t x451 = UINT16_MAX;
	static uint8_t x452 = UINT8_MAX;

    t112 = (x449<=(x450==(x451&x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x454 = -1LL;
	uint64_t x455 = UINT64_MAX;

    t113 = (x453<=(x454==(x455&x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MIN;
	uint64_t x458 = 756942937259949058LLU;
	static uint64_t x459 = UINT64_MAX;
	int8_t x460 = -16;
	int32_t t114 = -1514;

    t114 = (x457<=(x458==(x459&x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x462 = -1;
	uint16_t x463 = 175U;
	volatile uint32_t x464 = 1410749U;
	static volatile int32_t t115 = -2658;

    t115 = (x461<=(x462==(x463&x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = 6280701LLU;
	volatile uint64_t x466 = UINT64_MAX;
	int64_t x467 = -1129989955233937722LL;

    t116 = (x465<=(x466==(x467&x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MIN;
	int32_t x471 = INT32_MIN;
	volatile int16_t x472 = -2;
	int32_t t117 = -13066737;

    t117 = (x469<=(x470==(x471&x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint8_t x473 = 37U;
	volatile int8_t x474 = -1;
	int16_t x476 = -1;
	volatile int32_t t118 = 183644;

    t118 = (x473<=(x474==(x475&x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = -329261;
	uint8_t x478 = UINT8_MAX;
	int32_t x479 = INT32_MIN;
	int8_t x480 = 1;
	int32_t t119 = -1;

    t119 = (x477<=(x478==(x479&x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x481 = UINT8_MAX;
	static int32_t x482 = -1;
	int32_t x483 = INT32_MIN;
	uint32_t x484 = UINT32_MAX;

    t120 = (x481<=(x482==(x483&x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MIN;
	uint64_t x486 = 60078451LLU;
	int32_t x487 = -84;
	uint32_t x488 = UINT32_MAX;
	int32_t t121 = -881141168;

    t121 = (x485<=(x486==(x487&x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int16_t x489 = -1;
	int16_t x490 = INT16_MIN;
	int8_t x491 = -1;
	static volatile int32_t t122 = -395722310;

    t122 = (x489<=(x490==(x491&x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = 131705209LL;
	int16_t x494 = -1;
	int8_t x495 = INT8_MIN;
	int64_t x496 = 31167LL;
	int32_t t123 = -25;

    t123 = (x493<=(x494==(x495&x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = -11;
	static int16_t x498 = -3333;
	volatile uint8_t x499 = 37U;
	uint64_t x500 = 464LLU;
	volatile int32_t t124 = -1;

    t124 = (x497<=(x498==(x499&x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = 4006730;
	int8_t x503 = -1;
	int16_t x504 = INT16_MIN;

    t125 = (x501<=(x502==(x503&x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x506 = -618347;
	int8_t x507 = INT8_MAX;
	int32_t x508 = INT32_MIN;
	volatile int32_t t126 = -2852;

    t126 = (x505<=(x506==(x507&x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x511 = UINT64_MAX;
	volatile int32_t x512 = -1;
	volatile int32_t t127 = 235315;

    t127 = (x509<=(x510==(x511&x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MIN;
	static uint8_t x514 = 2U;
	int8_t x515 = INT8_MAX;
	volatile uint16_t x516 = UINT16_MAX;

    t128 = (x513<=(x514==(x515&x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -1LL;
	uint8_t x518 = 27U;
	uint8_t x519 = 4U;
	static int32_t t129 = 13;

    t129 = (x517<=(x518==(x519&x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x521 = 11U;
	int32_t x522 = -1;
	volatile int64_t x523 = -1LL;
	uint64_t x524 = 452434055LLU;

    t130 = (x521<=(x522==(x523&x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x525 = INT64_MIN;
	uint64_t x526 = 1405024LLU;
	static int64_t x527 = INT64_MAX;
	int16_t x528 = INT16_MIN;
	int32_t t131 = 22018;

    t131 = (x525<=(x526==(x527&x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x529 = -1;
	uint8_t x530 = UINT8_MAX;
	uint64_t x531 = UINT64_MAX;
	int16_t x532 = -1;

    t132 = (x529<=(x530==(x531&x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x534 = 24;
	uint8_t x535 = UINT8_MAX;
	uint8_t x536 = UINT8_MAX;
	volatile int32_t t133 = -58323709;

    t133 = (x533<=(x534==(x535&x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 98284837616803848LLU;
	volatile int8_t x538 = INT8_MIN;
	uint32_t x539 = 158125674U;
	int64_t x540 = -35192078305LL;
	volatile int32_t t134 = -691344;

    t134 = (x537<=(x538==(x539&x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x542 = 9U;
	uint8_t x543 = 1U;
	int64_t x544 = INT64_MIN;
	volatile int32_t t135 = 4618354;

    t135 = (x541<=(x542==(x543&x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x545 = INT8_MIN;
	int16_t x546 = INT16_MIN;
	static volatile int16_t x547 = -1;
	volatile uint64_t x548 = UINT64_MAX;
	static int32_t t136 = 1076;

    t136 = (x545<=(x546==(x547&x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x552 = -1;
	static volatile int32_t t137 = 88685426;

    t137 = (x549<=(x550==(x551&x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 185621790U;
	int32_t x554 = -581;
	uint16_t x555 = 121U;
	uint32_t x556 = 1994U;
	static int32_t t138 = -2082160;

    t138 = (x553<=(x554==(x555&x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x557 = INT32_MAX;
	int8_t x558 = -56;
	volatile uint16_t x559 = UINT16_MAX;
	volatile int16_t x560 = -11;

    t139 = (x557<=(x558==(x559&x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x561 = INT8_MAX;
	uint32_t x562 = 1U;
	static int64_t x563 = -1LL;
	static int32_t t140 = 49325;

    t140 = (x561<=(x562==(x563&x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MIN;
	static int64_t x566 = -110LL;
	static volatile int8_t x568 = -1;
	int32_t t141 = -41178879;

    t141 = (x565<=(x566==(x567&x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x570 = -1;
	uint64_t x572 = UINT64_MAX;
	volatile int32_t t142 = 166;

    t142 = (x569<=(x570==(x571&x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = 2U;
	static uint64_t x574 = 6711737LLU;
	uint16_t x575 = UINT16_MAX;
	uint8_t x576 = UINT8_MAX;
	volatile int32_t t143 = 859600;

    t143 = (x573<=(x574==(x575&x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x577 = INT64_MIN;
	static int32_t x578 = -1;
	int64_t x580 = INT64_MIN;
	int32_t t144 = -983525693;

    t144 = (x577<=(x578==(x579&x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x582 = UINT8_MAX;
	volatile int32_t t145 = 529216;

    t145 = (x581<=(x582==(x583&x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint8_t x585 = 4U;
	int32_t x586 = -1;
	volatile int16_t x587 = INT16_MIN;
	volatile int64_t x588 = -33020818LL;
	static int32_t t146 = 67;

    t146 = (x585<=(x586==(x587&x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x589 = -1988552222127LL;
	static int64_t x591 = INT64_MIN;
	static uint64_t x592 = UINT64_MAX;
	int32_t t147 = -123;

    t147 = (x589<=(x590==(x591&x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x593 = INT64_MIN;
	int8_t x594 = INT8_MIN;
	volatile int32_t x595 = INT32_MAX;
	static int64_t x596 = -355987262LL;

    t148 = (x593<=(x594==(x595&x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x597 = 1727346139LLU;
	uint16_t x598 = UINT16_MAX;
	int64_t x599 = INT64_MAX;
	uint16_t x600 = 855U;
	volatile int32_t t149 = -3;

    t149 = (x597<=(x598==(x599&x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MAX;
	volatile int64_t x603 = INT64_MIN;
	uint64_t x604 = UINT64_MAX;
	int32_t t150 = 1;

    t150 = (x601<=(x602==(x603&x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x606 = INT16_MAX;
	uint16_t x607 = UINT16_MAX;
	static int8_t x608 = INT8_MAX;

    t151 = (x605<=(x606==(x607&x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x609 = INT32_MIN;
	volatile int16_t x610 = INT16_MIN;
	static int64_t x611 = 36LL;
	int64_t x612 = -56657LL;
	volatile int32_t t152 = -971510;

    t152 = (x609<=(x610==(x611&x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x613 = 15U;
	uint64_t x614 = 15278164LLU;
	int32_t x615 = 35686;
	uint64_t x616 = 6386949LLU;
	int32_t t153 = -88618;

    t153 = (x613<=(x614==(x615&x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = INT16_MIN;
	uint8_t x618 = 27U;
	static int8_t x619 = 0;
	uint8_t x620 = 7U;
	volatile int32_t t154 = 4571;

    t154 = (x617<=(x618==(x619&x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = 1;
	int64_t x622 = INT64_MIN;
	uint32_t x623 = UINT32_MAX;
	static volatile int32_t x624 = 6;
	volatile int32_t t155 = -118627470;

    t155 = (x621<=(x622==(x623&x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x626 = INT64_MAX;
	int8_t x628 = INT8_MIN;
	static int32_t t156 = 8267279;

    t156 = (x625<=(x626==(x627&x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x630 = UINT8_MAX;
	int32_t x631 = INT32_MIN;
	int32_t t157 = 1275;

    t157 = (x629<=(x630==(x631&x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x633 = 1U;
	volatile int64_t x634 = INT64_MAX;
	int64_t x635 = INT64_MAX;
	static int8_t x636 = INT8_MIN;
	static volatile int32_t t158 = 94;

    t158 = (x633<=(x634==(x635&x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x639 = 88U;
	int32_t x640 = INT32_MIN;
	int32_t t159 = 118834709;

    t159 = (x637<=(x638==(x639&x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MIN;
	static int64_t x642 = INT64_MIN;
	volatile int16_t x643 = 239;
	uint16_t x644 = UINT16_MAX;
	volatile int32_t t160 = -3572;

    t160 = (x641<=(x642==(x643&x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x645 = INT8_MAX;
	static uint32_t x646 = UINT32_MAX;
	int8_t x647 = INT8_MIN;
	int64_t x648 = -172LL;
	volatile int32_t t161 = 3;

    t161 = (x645<=(x646==(x647&x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = 50005U;
	static int32_t x650 = -1;
	static uint8_t x651 = UINT8_MAX;
	int32_t x652 = INT32_MIN;
	int32_t t162 = -998296271;

    t162 = (x649<=(x650==(x651&x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x653 = 70U;
	int16_t x654 = -1;
	int64_t x655 = INT64_MAX;
	volatile int16_t x656 = -149;
	static int32_t t163 = 25326135;

    t163 = (x653<=(x654==(x655&x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x658 = -3;
	volatile uint8_t x659 = UINT8_MAX;
	int16_t x660 = -3482;
	static int32_t t164 = 0;

    t164 = (x657<=(x658==(x659&x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = -15855;
	int64_t x662 = 21942683LL;
	static int16_t x663 = INT16_MAX;
	volatile uint64_t x664 = UINT64_MAX;

    t165 = (x661<=(x662==(x663&x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = 112U;
	static volatile int16_t x666 = -228;
	uint8_t x667 = 59U;
	volatile int32_t t166 = 39973538;

    t166 = (x665<=(x666==(x667&x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -1;
	volatile uint32_t x670 = 6578698U;
	int32_t x671 = INT32_MIN;
	uint16_t x672 = 17874U;
	volatile int32_t t167 = 182734;

    t167 = (x669<=(x670==(x671&x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	int16_t x674 = INT16_MIN;
	int8_t x676 = -46;
	volatile int32_t t168 = 121;

    t168 = (x673<=(x674==(x675&x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x678 = 5397LLU;
	int16_t x679 = -30;
	volatile int16_t x680 = INT16_MAX;
	static int32_t t169 = 3059;

    t169 = (x677<=(x678==(x679&x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = 216400836518LLU;
	static int64_t x683 = -5646479LL;
	int32_t x684 = INT32_MIN;
	volatile int32_t t170 = 1538;

    t170 = (x681<=(x682==(x683&x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MIN;
	static volatile int8_t x686 = INT8_MIN;
	static int32_t x687 = INT32_MAX;
	uint64_t x688 = 80615LLU;
	static int32_t t171 = 0;

    t171 = (x685<=(x686==(x687&x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x689 = -2;
	static int8_t x691 = INT8_MIN;
	int64_t x692 = INT64_MIN;
	static volatile int32_t t172 = 404704;

    t172 = (x689<=(x690==(x691&x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x693 = -1;
	int32_t x695 = 6;
	static uint16_t x696 = UINT16_MAX;
	int32_t t173 = 3;

    t173 = (x693<=(x694==(x695&x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x698 = INT32_MIN;
	static int16_t x699 = 10640;
	int32_t x700 = INT32_MIN;
	volatile int32_t t174 = 4;

    t174 = (x697<=(x698==(x699&x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x701 = 549;
	uint16_t x702 = 0U;
	int32_t x703 = 1382;
	int32_t x704 = INT32_MIN;
	int32_t t175 = -5;

    t175 = (x701<=(x702==(x703&x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x705 = INT16_MIN;
	int16_t x706 = -7;
	int64_t x707 = INT64_MAX;
	int8_t x708 = INT8_MIN;

    t176 = (x705<=(x706==(x707&x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x710 = 3U;
	static int8_t x711 = -1;
	static int8_t x712 = INT8_MIN;
	int32_t t177 = -5;

    t177 = (x709<=(x710==(x711&x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MIN;
	volatile int8_t x714 = -1;
	static uint16_t x715 = 2995U;
	uint8_t x716 = 1U;
	volatile int32_t t178 = -2;

    t178 = (x713<=(x714==(x715&x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = 1;
	uint32_t x719 = 55117U;
	uint64_t x720 = 10357593627LLU;
	volatile int32_t t179 = -3;

    t179 = (x717<=(x718==(x719&x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MIN;
	uint16_t x722 = UINT16_MAX;
	static uint32_t x723 = 52013U;
	int8_t x724 = INT8_MIN;
	int32_t t180 = -468711733;

    t180 = (x721<=(x722==(x723&x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = -24953188LL;
	int64_t x727 = INT64_MIN;
	static volatile int32_t t181 = -69;

    t181 = (x725<=(x726==(x727&x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x729 = 542943679836LLU;
	int32_t x730 = -1;
	int32_t x731 = INT32_MIN;
	int32_t t182 = 0;

    t182 = (x729<=(x730==(x731&x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = UINT32_MAX;
	int16_t x734 = INT16_MAX;
	static volatile uint32_t x735 = 100U;
	volatile int16_t x736 = INT16_MIN;
	int32_t t183 = -2;

    t183 = (x733<=(x734==(x735&x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x737 = 17022U;
	int8_t x738 = -1;
	volatile uint64_t x739 = 16LLU;
	volatile uint32_t x740 = 2U;
	volatile int32_t t184 = -36079;

    t184 = (x737<=(x738==(x739&x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = UINT64_MAX;
	int8_t x742 = -1;
	int8_t x743 = -15;
	volatile int32_t t185 = -650;

    t185 = (x741<=(x742==(x743&x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	int64_t x746 = INT64_MIN;
	int64_t x747 = -163208841LL;
	static int16_t x748 = -1;

    t186 = (x745<=(x746==(x747&x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x749 = INT64_MIN;
	int16_t x750 = -1;
	volatile uint64_t x752 = 64001820129LLU;
	int32_t t187 = 0;

    t187 = (x749<=(x750==(x751&x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x755 = INT16_MIN;
	volatile int32_t t188 = 3678;

    t188 = (x753<=(x754==(x755&x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = UINT32_MAX;
	uint16_t x758 = UINT16_MAX;
	volatile int16_t x759 = 471;
	uint32_t x760 = 1U;
	volatile int32_t t189 = -27671651;

    t189 = (x757<=(x758==(x759&x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = INT16_MIN;
	static int16_t x763 = -1;
	static volatile int16_t x764 = INT16_MIN;
	int32_t t190 = 19101;

    t190 = (x761<=(x762==(x763&x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = -1;
	uint32_t x767 = 260595102U;
	uint16_t x768 = UINT16_MAX;
	int32_t t191 = -10281271;

    t191 = (x765<=(x766==(x767&x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint64_t x770 = UINT64_MAX;
	int16_t x771 = -1;
	uint16_t x772 = UINT16_MAX;

    t192 = (x769<=(x770==(x771&x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x773 = UINT64_MAX;
	int32_t x774 = INT32_MIN;
	int8_t x775 = INT8_MAX;
	static int64_t x776 = INT64_MAX;

    t193 = (x773<=(x774==(x775&x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = 8;
	int64_t x779 = INT64_MAX;
	int32_t t194 = 15557060;

    t194 = (x777<=(x778==(x779&x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MIN;
	int8_t x782 = INT8_MIN;
	int8_t x783 = 0;
	int32_t x784 = -58863;
	volatile int32_t t195 = -1359;

    t195 = (x781<=(x782==(x783&x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = UINT16_MAX;
	static int32_t x786 = INT32_MIN;
	int32_t x787 = -1;
	volatile uint8_t x788 = 89U;
	volatile int32_t t196 = 526944063;

    t196 = (x785<=(x786==(x787&x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MIN;
	uint64_t x790 = 0LLU;
	static uint32_t x792 = UINT32_MAX;

    t197 = (x789<=(x790==(x791&x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = 3;
	static int8_t x795 = -6;
	int16_t x796 = INT16_MIN;
	volatile int32_t t198 = -3004794;

    t198 = (x793<=(x794==(x795&x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x798 = INT8_MAX;
	static uint8_t x799 = UINT8_MAX;
	static int8_t x800 = -1;
	volatile int32_t t199 = -1304;

    t199 = (x797<=(x798==(x799&x800)));

    if (t199 != 0) { NG(); } else { ; }
	
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


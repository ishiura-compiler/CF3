
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

int8_t x4 = INT8_MIN;
static int64_t x13 = INT64_MIN;
static volatile int32_t t3 = -73288232;
int32_t x19 = INT32_MIN;
static int32_t x21 = INT32_MAX;
int8_t x28 = -1;
int16_t x33 = INT16_MIN;
int16_t x37 = INT16_MAX;
uint16_t x44 = 1U;
int8_t x49 = 19;
int32_t t12 = 1;
static volatile uint32_t x56 = 436224681U;
int32_t x58 = INT32_MIN;
static int16_t x60 = INT16_MAX;
int32_t t14 = 1680970;
int16_t x63 = INT16_MIN;
int32_t t15 = -27612;
static volatile int32_t t16 = 4653951;
int64_t x74 = -2340040847LL;
uint64_t x78 = UINT64_MAX;
static uint16_t x82 = 15742U;
int64_t x85 = INT64_MIN;
static uint64_t x87 = 5078781237LLU;
uint8_t x90 = UINT8_MAX;
static int16_t x95 = 12598;
static int32_t t23 = -25356;
int8_t x98 = INT8_MIN;
int64_t x103 = -1LL;
int32_t t26 = -2915759;
static volatile int32_t t27 = -167839607;
int64_t x119 = -1LL;
volatile uint8_t x123 = UINT8_MAX;
static volatile uint16_t x124 = 25091U;
static int32_t x126 = INT32_MIN;
int16_t x129 = -1;
int16_t x132 = 4;
uint32_t x138 = UINT32_MAX;
volatile int32_t t36 = -98235;
static volatile int8_t x149 = -1;
uint32_t x150 = UINT32_MAX;
uint32_t x151 = 967543U;
int32_t t39 = 553;
volatile uint32_t x163 = 559U;
uint8_t x168 = 31U;
volatile int32_t t41 = -7;
uint8_t x174 = 5U;
int32_t x178 = 0;
int32_t t44 = 19;
uint16_t x185 = 1866U;
uint16_t x189 = 18U;
int32_t t47 = -205794;
volatile int64_t x195 = -1LL;
static int64_t x202 = INT64_MAX;
volatile int32_t t51 = -521;
int64_t x209 = -1LL;
int32_t x213 = -1;
static int32_t x218 = INT32_MIN;
int16_t x224 = 1;
volatile int8_t x226 = 3;
int32_t t56 = 1540;
volatile uint8_t x232 = UINT8_MAX;
volatile int64_t x236 = 3174LL;
volatile int32_t t58 = 677;
static int32_t t59 = 916;
uint16_t x262 = 0U;
volatile int32_t t65 = 6;
volatile int16_t x273 = -1;
uint32_t x278 = 3181832U;
volatile int16_t x279 = INT16_MIN;
static int32_t x284 = INT32_MIN;
int64_t x285 = -475220017723251LL;
uint64_t x287 = UINT64_MAX;
int64_t x295 = -1LL;
volatile int32_t x299 = -1;
volatile int32_t t74 = -6878;
int64_t x305 = -34758834735041775LL;
volatile int16_t x308 = INT16_MAX;
int32_t t76 = -57581336;
int64_t x309 = -1LL;
static volatile int32_t t78 = -138346;
int8_t x323 = -1;
int16_t x327 = INT16_MIN;
int32_t x335 = 1070247669;
int64_t x340 = -1LL;
static int8_t x347 = -1;
int32_t x348 = INT32_MIN;
static uint32_t x351 = UINT32_MAX;
int32_t t87 = 4939;
uint64_t x362 = 237788937LLU;
static int16_t x373 = INT16_MIN;
uint32_t x379 = 7248468U;
int64_t x382 = INT64_MIN;
int32_t x386 = INT32_MAX;
int32_t t96 = -1804;
static int8_t x398 = -6;
int32_t x401 = -1;
uint32_t x402 = UINT32_MAX;
int32_t t100 = -4;
volatile int32_t x410 = -10280001;
uint8_t x411 = 15U;
int64_t x413 = INT64_MIN;
int16_t x415 = -1;
uint16_t x418 = 188U;
int8_t x419 = -1;
volatile uint64_t x421 = UINT64_MAX;
int16_t x426 = -1;
volatile int8_t x428 = INT8_MIN;
int32_t t107 = -455871566;
volatile int8_t x439 = INT8_MIN;
int8_t x446 = INT8_MAX;
volatile int32_t x449 = -1;
static int16_t x450 = INT16_MAX;
static int8_t x454 = INT8_MIN;
uint32_t x456 = 7U;
uint64_t x462 = 264192153LLU;
int32_t x465 = INT32_MAX;
static int16_t x476 = INT16_MAX;
int16_t x478 = 1240;
int32_t t119 = 7698;
volatile uint8_t x486 = UINT8_MAX;
int8_t x491 = -2;
volatile int8_t x492 = 1;
int16_t x494 = INT16_MIN;
int32_t t124 = 11625310;
volatile int32_t t125 = -1;
volatile int32_t t130 = 3839;
int8_t x526 = -1;
static uint16_t x529 = 2626U;
volatile int32_t t132 = -4179;
static volatile int16_t x534 = -9698;
int64_t x547 = -1LL;
int32_t x549 = -1;
int8_t x552 = INT8_MIN;
volatile int8_t x553 = INT8_MAX;
int16_t x558 = -4039;
static int16_t x560 = 4901;
static int32_t t139 = 61;
int32_t t141 = -84;
int8_t x569 = -7;
uint32_t x573 = UINT32_MAX;
int64_t x574 = -1LL;
int32_t x579 = -1;
static volatile uint8_t x585 = UINT8_MAX;
uint64_t x587 = 71800761755903514LLU;
uint64_t x590 = UINT64_MAX;
static int32_t x598 = INT32_MAX;
int64_t x604 = -1LL;
int8_t x617 = INT8_MAX;
int64_t x631 = -30642LL;
int16_t x635 = INT16_MAX;
int32_t t158 = 95915040;
static int32_t t159 = -4924;
int8_t x641 = INT8_MIN;
uint32_t x643 = UINT32_MAX;
static int32_t t161 = -341225576;
static int64_t x654 = INT64_MIN;
volatile int8_t x662 = -1;
uint64_t x666 = UINT64_MAX;
int32_t t166 = 7728571;
static volatile int8_t x669 = INT8_MAX;
volatile int32_t t168 = 14;
int16_t x678 = INT16_MIN;
static int16_t x679 = -2207;
volatile int32_t t169 = 33;
int16_t x688 = INT16_MAX;
int16_t x689 = -188;
static int32_t x691 = -1;
volatile uint8_t x693 = 20U;
int16_t x696 = -4;
volatile int32_t t173 = 83;
static volatile int64_t x710 = -55091464377721381LL;
uint64_t x712 = UINT64_MAX;
int32_t x718 = -1;
volatile int32_t x724 = INT32_MIN;
int32_t t180 = -1066;
int8_t x731 = -1;
int16_t x733 = INT16_MAX;
int32_t x740 = -1;
volatile int32_t t185 = 0;
int64_t x748 = 0LL;
int32_t x751 = INT32_MAX;
uint32_t x755 = 284487526U;
volatile int32_t t188 = -756676959;
static volatile uint8_t x759 = 76U;
int32_t x761 = 3;
int8_t x762 = 14;
int8_t x764 = 52;
int32_t x765 = INT32_MIN;
int16_t x767 = 0;
volatile int32_t x768 = 521;
static int32_t x770 = INT32_MIN;
volatile int32_t t192 = -464092630;
uint8_t x774 = 5U;
int32_t x776 = INT32_MIN;
int32_t t193 = 132463247;
int32_t t196 = -14;
int8_t x790 = 6;
int32_t t197 = -514454;


void f0(void) {
    	volatile int32_t x1 = 244103;
	int64_t x2 = INT64_MAX;
	volatile int64_t x3 = -684834LL;
	int32_t t0 = 6480;

    t0 = (x1!=(x2&(x3^x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 5U;
	int8_t x6 = INT8_MAX;
	int16_t x7 = INT16_MAX;
	int64_t x8 = INT64_MIN;
	static volatile int32_t t1 = 2;

    t1 = (x5!=(x6&(x7^x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint16_t x9 = 2U;
	static int32_t x10 = INT32_MIN;
	static uint32_t x11 = 159569U;
	int32_t x12 = 6176;
	volatile int32_t t2 = 873809253;

    t2 = (x9!=(x10&(x11^x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = INT64_MIN;
	static uint8_t x15 = 35U;
	volatile int16_t x16 = INT16_MIN;

    t3 = (x13!=(x14&(x15^x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	uint8_t x18 = UINT8_MAX;
	int8_t x20 = -1;
	volatile int32_t t4 = 5;

    t4 = (x17!=(x18&(x19^x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = INT16_MIN;
	volatile uint32_t x23 = 740166325U;
	static volatile uint16_t x24 = UINT16_MAX;
	int32_t t5 = -815;

    t5 = (x21!=(x22&(x23^x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -3LL;
	int8_t x26 = 3;
	int64_t x27 = 2724137042498372754LL;
	volatile int32_t t6 = 3;

    t6 = (x25!=(x26&(x27^x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	static int32_t x30 = -119136;
	int32_t x31 = INT32_MAX;
	int16_t x32 = INT16_MAX;
	static int32_t t7 = -19158076;

    t7 = (x29!=(x30&(x31^x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x34 = UINT16_MAX;
	uint64_t x35 = 25349386622LLU;
	volatile int64_t x36 = -1LL;
	volatile int32_t t8 = 1;

    t8 = (x33!=(x34&(x35^x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = 48LL;
	static volatile uint64_t x39 = 41416LLU;
	int8_t x40 = INT8_MAX;
	volatile int32_t t9 = -1;

    t9 = (x37!=(x38&(x39^x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = INT16_MIN;
	uint32_t x42 = UINT32_MAX;
	int8_t x43 = -1;
	int32_t t10 = -892086382;

    t10 = (x41!=(x42&(x43^x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = -1LL;
	uint32_t x46 = 229888397U;
	volatile int16_t x47 = INT16_MIN;
	volatile int64_t x48 = INT64_MIN;
	volatile int32_t t11 = 0;

    t11 = (x45!=(x46&(x47^x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x50 = 20907U;
	uint8_t x51 = 123U;
	uint64_t x52 = 56LLU;

    t12 = (x49!=(x50&(x51^x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = UINT64_MAX;
	int16_t x54 = -1;
	int16_t x55 = INT16_MIN;
	int32_t t13 = 1076;

    t13 = (x53!=(x54&(x55^x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint16_t x57 = 478U;
	static uint8_t x59 = UINT8_MAX;

    t14 = (x57!=(x58&(x59^x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x61 = 2U;
	int64_t x62 = 10669284847LL;
	uint8_t x64 = UINT8_MAX;

    t15 = (x61!=(x62&(x63^x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	int8_t x66 = INT8_MAX;
	volatile int16_t x67 = -1;
	int32_t x68 = 1;

    t16 = (x65!=(x66&(x67^x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -57375525234LL;
	static int64_t x70 = INT64_MIN;
	static int64_t x71 = -15714LL;
	uint16_t x72 = UINT16_MAX;
	int32_t t17 = 1556975;

    t17 = (x69!=(x70&(x71^x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 875322364LLU;
	int8_t x75 = INT8_MIN;
	int32_t x76 = -12460883;
	volatile int32_t t18 = 4394265;

    t18 = (x73!=(x74&(x75^x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = INT32_MIN;
	int8_t x79 = INT8_MIN;
	volatile int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 42214;

    t19 = (x77!=(x78&(x79^x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -1;
	int8_t x83 = 45;
	int16_t x84 = INT16_MIN;
	static volatile int32_t t20 = 59051;

    t20 = (x81!=(x82&(x83^x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x86 = INT64_MIN;
	int64_t x88 = INT64_MAX;
	static volatile int32_t t21 = -2;

    t21 = (x85!=(x86&(x87^x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -38594;
	int64_t x91 = -1LL;
	int8_t x92 = INT8_MIN;
	volatile int32_t t22 = -176716144;

    t22 = (x89!=(x90&(x91^x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = 3747589412376847499LL;
	int8_t x94 = 0;
	int8_t x96 = INT8_MAX;

    t23 = (x93!=(x94&(x95^x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x97 = 209LLU;
	int16_t x99 = INT16_MIN;
	int32_t x100 = INT32_MAX;
	static int32_t t24 = 3;

    t24 = (x97!=(x98&(x99^x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	int8_t x102 = INT8_MAX;
	volatile int16_t x104 = INT16_MAX;
	int32_t t25 = -113;

    t25 = (x101!=(x102&(x103^x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 29U;
	static volatile int64_t x106 = INT64_MIN;
	int16_t x107 = 0;
	static int8_t x108 = INT8_MIN;

    t26 = (x105!=(x106&(x107^x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x109 = 14102U;
	static int16_t x110 = 338;
	int64_t x111 = -149284420481LL;
	int64_t x112 = INT64_MIN;

    t27 = (x109!=(x110&(x111^x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MIN;
	volatile uint16_t x114 = UINT16_MAX;
	static int32_t x115 = -1;
	int64_t x116 = INT64_MIN;
	static int32_t t28 = 264093;

    t28 = (x113!=(x114&(x115^x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = 3U;
	uint64_t x118 = UINT64_MAX;
	static int64_t x120 = INT64_MAX;
	int32_t t29 = 1;

    t29 = (x117!=(x118&(x119^x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -1;
	int8_t x122 = -1;
	volatile int32_t t30 = 0;

    t30 = (x121!=(x122&(x123^x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -1;
	static volatile int64_t x127 = INT64_MIN;
	int16_t x128 = INT16_MIN;
	volatile int32_t t31 = -1043;

    t31 = (x125!=(x126&(x127^x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x130 = INT16_MAX;
	uint8_t x131 = UINT8_MAX;
	int32_t t32 = 1607347;

    t32 = (x129!=(x130&(x131^x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 190U;
	int64_t x134 = INT64_MIN;
	int16_t x135 = INT16_MIN;
	static uint64_t x136 = 79272125LLU;
	int32_t t33 = -1206749;

    t33 = (x133!=(x134&(x135^x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	int8_t x139 = -9;
	int16_t x140 = -1;
	static int32_t t34 = 6;

    t34 = (x137!=(x138&(x139^x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x141 = 7862334U;
	volatile uint16_t x142 = 8742U;
	int8_t x143 = 53;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t35 = -11;

    t35 = (x141!=(x142&(x143^x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 10U;
	int8_t x146 = INT8_MIN;
	int32_t x147 = INT32_MAX;
	uint32_t x148 = UINT32_MAX;

    t36 = (x145!=(x146&(x147^x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x152 = 63U;
	int32_t t37 = -1845;

    t37 = (x149!=(x150&(x151^x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x153 = INT8_MIN;
	static int64_t x154 = -1LL;
	static uint64_t x155 = UINT64_MAX;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t38 = 43099;

    t38 = (x153!=(x154&(x155^x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x157 = 9;
	int32_t x158 = 72;
	int32_t x159 = INT32_MIN;
	volatile uint32_t x160 = 1U;

    t39 = (x157!=(x158&(x159^x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	static volatile uint8_t x162 = UINT8_MAX;
	int8_t x164 = INT8_MIN;
	int32_t t40 = -8094558;

    t40 = (x161!=(x162&(x163^x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x165 = -16607779;
	int8_t x166 = INT8_MAX;
	uint32_t x167 = 230429U;

    t41 = (x165!=(x166&(x167^x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = 35U;
	uint64_t x170 = UINT64_MAX;
	int8_t x171 = INT8_MIN;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t42 = -61;

    t42 = (x169!=(x170&(x171^x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = INT16_MIN;
	static int16_t x175 = -1;
	uint16_t x176 = UINT16_MAX;
	static volatile int32_t t43 = 0;

    t43 = (x173!=(x174&(x175^x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MIN;
	int8_t x179 = -1;
	volatile int8_t x180 = -3;

    t44 = (x177!=(x178&(x179^x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 1U;
	int8_t x182 = -1;
	int32_t x183 = -1;
	int8_t x184 = -1;
	volatile int32_t t45 = 177;

    t45 = (x181!=(x182&(x183^x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x186 = INT32_MAX;
	uint8_t x187 = 122U;
	volatile uint32_t x188 = 1674345955U;
	int32_t t46 = 275;

    t46 = (x185!=(x186&(x187^x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x190 = UINT16_MAX;
	int16_t x191 = INT16_MAX;
	int32_t x192 = 728308;

    t47 = (x189!=(x190&(x191^x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = 1;
	int8_t x194 = 2;
	static volatile uint64_t x196 = 31LLU;
	int32_t t48 = -2989;

    t48 = (x193!=(x194&(x195^x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x197 = 2943034546148LL;
	volatile int32_t x198 = 12562537;
	static uint32_t x199 = 418061410U;
	int16_t x200 = INT16_MAX;
	volatile int32_t t49 = 3;

    t49 = (x197!=(x198&(x199^x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MAX;
	int64_t x203 = 2LL;
	static volatile uint32_t x204 = 33U;
	volatile int32_t t50 = 2494;

    t50 = (x201!=(x202&(x203^x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MAX;
	int32_t x206 = INT32_MIN;
	int16_t x207 = INT16_MIN;
	static uint16_t x208 = 422U;

    t51 = (x205!=(x206&(x207^x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x210 = INT8_MAX;
	int16_t x211 = INT16_MIN;
	uint16_t x212 = 1U;
	int32_t t52 = 11822570;

    t52 = (x209!=(x210&(x211^x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x214 = INT8_MIN;
	int64_t x215 = INT64_MIN;
	uint16_t x216 = 11U;
	volatile int32_t t53 = 0;

    t53 = (x213!=(x214&(x215^x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x217 = -2;
	int8_t x219 = INT8_MAX;
	uint32_t x220 = 7398U;
	volatile int32_t t54 = 573636;

    t54 = (x217!=(x218&(x219^x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MAX;
	uint16_t x222 = 0U;
	int64_t x223 = 9LL;
	volatile int32_t t55 = 53615523;

    t55 = (x221!=(x222&(x223^x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = 116419;
	uint64_t x227 = 743259LLU;
	uint64_t x228 = 31LLU;

    t56 = (x225!=(x226&(x227^x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MIN;
	static volatile uint32_t x230 = UINT32_MAX;
	static int32_t x231 = -1;
	volatile int32_t t57 = 1;

    t57 = (x229!=(x230&(x231^x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = UINT32_MAX;
	int8_t x234 = 0;
	uint8_t x235 = 82U;

    t58 = (x233!=(x234&(x235^x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = -1;
	uint16_t x238 = 1U;
	static int8_t x239 = INT8_MIN;
	uint64_t x240 = 31925999365LLU;

    t59 = (x237!=(x238&(x239^x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = 102U;
	int16_t x242 = INT16_MAX;
	static uint16_t x243 = UINT16_MAX;
	static int16_t x244 = -1;
	volatile int32_t t60 = 8;

    t60 = (x241!=(x242&(x243^x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = -21;
	volatile int64_t x246 = 8426844558018810LL;
	int32_t x247 = INT32_MIN;
	uint8_t x248 = 7U;
	volatile int32_t t61 = 1;

    t61 = (x245!=(x246&(x247^x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x249 = INT32_MAX;
	uint16_t x250 = 27922U;
	volatile int64_t x251 = INT64_MIN;
	int8_t x252 = 0;
	int32_t t62 = -9085174;

    t62 = (x249!=(x250&(x251^x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MAX;
	volatile uint16_t x254 = UINT16_MAX;
	int16_t x255 = -1;
	int16_t x256 = -1;
	volatile int32_t t63 = 14;

    t63 = (x253!=(x254&(x255^x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MAX;
	uint16_t x258 = 120U;
	static volatile uint64_t x259 = 88LLU;
	int16_t x260 = INT16_MAX;
	static volatile int32_t t64 = -488788696;

    t64 = (x257!=(x258&(x259^x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = INT8_MAX;
	int64_t x263 = INT64_MAX;
	int32_t x264 = 47723508;

    t65 = (x261!=(x262&(x263^x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 21LLU;
	int8_t x266 = -1;
	int8_t x267 = -10;
	uint32_t x268 = 30490U;
	volatile int32_t t66 = -60275887;

    t66 = (x265!=(x266&(x267^x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x269 = INT64_MIN;
	uint64_t x270 = UINT64_MAX;
	volatile int16_t x271 = INT16_MAX;
	int8_t x272 = INT8_MIN;
	volatile int32_t t67 = 18701304;

    t67 = (x269!=(x270&(x271^x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x274 = 23280454183104LLU;
	int64_t x275 = INT64_MIN;
	uint16_t x276 = 82U;
	static volatile int32_t t68 = -855275;

    t68 = (x273!=(x274&(x275^x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = UINT32_MAX;
	uint8_t x280 = 9U;
	static int32_t t69 = 25216595;

    t69 = (x277!=(x278&(x279^x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = UINT64_MAX;
	int64_t x282 = 7619LL;
	uint16_t x283 = 10U;
	static int32_t t70 = 76830;

    t70 = (x281!=(x282&(x283^x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x286 = INT8_MIN;
	int16_t x288 = INT16_MIN;
	static volatile int32_t t71 = -45;

    t71 = (x285!=(x286&(x287^x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = UINT16_MAX;
	int64_t x290 = -1LL;
	uint16_t x291 = 182U;
	static int32_t x292 = -2757;
	int32_t t72 = 168365887;

    t72 = (x289!=(x290&(x291^x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = 12U;
	volatile uint32_t x294 = 127092078U;
	int32_t x296 = INT32_MAX;
	volatile int32_t t73 = -6832828;

    t73 = (x293!=(x294&(x295^x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = INT32_MAX;
	volatile int16_t x298 = INT16_MIN;
	static volatile int32_t x300 = INT32_MAX;

    t74 = (x297!=(x298&(x299^x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = UINT16_MAX;
	uint8_t x302 = 69U;
	int8_t x303 = 4;
	static volatile uint64_t x304 = 6149741890313318128LLU;
	static int32_t t75 = 29744712;

    t75 = (x301!=(x302&(x303^x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x306 = 10475024;
	static volatile uint32_t x307 = UINT32_MAX;

    t76 = (x305!=(x306&(x307^x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x310 = -2;
	static uint16_t x311 = UINT16_MAX;
	volatile int8_t x312 = -12;
	int32_t t77 = 507146312;

    t77 = (x309!=(x310&(x311^x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = -1;
	int8_t x314 = -34;
	static int16_t x315 = 1;
	uint8_t x316 = UINT8_MAX;

    t78 = (x313!=(x314&(x315^x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 3U;
	uint16_t x318 = 0U;
	volatile uint32_t x319 = 3914315U;
	int64_t x320 = -5814215944LL;
	volatile int32_t t79 = 168449;

    t79 = (x317!=(x318&(x319^x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x321 = 643643U;
	static int32_t x322 = -1;
	volatile uint32_t x324 = UINT32_MAX;
	int32_t t80 = -1646;

    t80 = (x321!=(x322&(x323^x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = INT8_MIN;
	static uint64_t x326 = 850689694415LLU;
	static int32_t x328 = INT32_MIN;
	static volatile int32_t t81 = 3934281;

    t81 = (x325!=(x326&(x327^x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = INT8_MIN;
	volatile uint8_t x330 = UINT8_MAX;
	uint8_t x331 = 10U;
	int32_t x332 = 5;
	volatile int32_t t82 = -1;

    t82 = (x329!=(x330&(x331^x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = UINT16_MAX;
	volatile int32_t x334 = -9;
	volatile int16_t x336 = 20;
	int32_t t83 = -281892061;

    t83 = (x333!=(x334&(x335^x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int32_t x337 = INT32_MIN;
	static volatile int64_t x338 = INT64_MIN;
	int32_t x339 = INT32_MAX;
	volatile int32_t t84 = -71028027;

    t84 = (x337!=(x338&(x339^x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = 22LLU;
	volatile int16_t x342 = INT16_MIN;
	uint32_t x343 = 90122U;
	int32_t x344 = INT32_MIN;
	int32_t t85 = -1;

    t85 = (x341!=(x342&(x343^x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = -1LL;
	uint8_t x346 = UINT8_MAX;
	volatile int32_t t86 = 1635;

    t86 = (x345!=(x346&(x347^x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x349 = 2839;
	static uint16_t x350 = 87U;
	int64_t x352 = 126383111LL;

    t87 = (x349!=(x350&(x351^x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -1;
	static int16_t x354 = INT16_MAX;
	volatile int8_t x355 = -6;
	int16_t x356 = INT16_MIN;
	int32_t t88 = -727;

    t88 = (x353!=(x354&(x355^x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = INT64_MIN;
	int16_t x358 = INT16_MIN;
	int8_t x359 = INT8_MAX;
	int8_t x360 = 0;
	volatile int32_t t89 = -43564609;

    t89 = (x357!=(x358&(x359^x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = INT64_MIN;
	int64_t x363 = INT64_MAX;
	volatile int32_t x364 = 725269927;
	static volatile int32_t t90 = -262178;

    t90 = (x361!=(x362&(x363^x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x365 = 140634944601601LLU;
	int8_t x366 = INT8_MAX;
	uint16_t x367 = 8U;
	int64_t x368 = INT64_MIN;
	volatile int32_t t91 = -1070098359;

    t91 = (x365!=(x366&(x367^x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x369 = 8183637688197354LLU;
	volatile int8_t x370 = 6;
	static int64_t x371 = INT64_MIN;
	static int32_t x372 = -1;
	int32_t t92 = 101;

    t92 = (x369!=(x370&(x371^x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x374 = -1;
	int32_t x375 = INT32_MAX;
	static uint64_t x376 = 2846822LLU;
	volatile int32_t t93 = -3;

    t93 = (x373!=(x374&(x375^x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x377 = -1;
	int32_t x378 = -1;
	int16_t x380 = -1;
	int32_t t94 = 9819758;

    t94 = (x377!=(x378&(x379^x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x381 = 3023;
	static int64_t x383 = INT64_MIN;
	int64_t x384 = INT64_MAX;
	static int32_t t95 = -4876450;

    t95 = (x381!=(x382&(x383^x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x385 = INT64_MIN;
	uint16_t x387 = UINT16_MAX;
	int16_t x388 = INT16_MIN;

    t96 = (x385!=(x386&(x387^x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MIN;
	volatile int32_t x390 = -79917162;
	volatile int16_t x391 = INT16_MIN;
	int32_t x392 = INT32_MIN;
	int32_t t97 = 814119;

    t97 = (x389!=(x390&(x391^x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x393 = INT8_MIN;
	static uint16_t x394 = 3159U;
	int8_t x395 = INT8_MAX;
	int8_t x396 = 0;
	volatile int32_t t98 = -35;

    t98 = (x393!=(x394&(x395^x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = 1;
	int8_t x399 = -1;
	static int16_t x400 = -1;
	volatile int32_t t99 = 1;

    t99 = (x397!=(x398&(x399^x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x403 = 9208125903009409511LLU;
	int16_t x404 = INT16_MAX;

    t100 = (x401!=(x402&(x403^x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MAX;
	static int16_t x406 = 397;
	volatile int16_t x407 = -1;
	int16_t x408 = INT16_MAX;
	int32_t t101 = -11738;

    t101 = (x405!=(x406&(x407^x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = -878;
	int64_t x412 = -21LL;
	static int32_t t102 = -20;

    t102 = (x409!=(x410&(x411^x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x414 = INT32_MIN;
	int8_t x416 = INT8_MIN;
	static int32_t t103 = 7530;

    t103 = (x413!=(x414&(x415^x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x417 = -305392857144LL;
	uint32_t x420 = 10157150U;
	volatile int32_t t104 = 224716;

    t104 = (x417!=(x418&(x419^x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x422 = 2014733LLU;
	int32_t x423 = INT32_MIN;
	int64_t x424 = -140746789458837126LL;
	volatile int32_t t105 = -9857;

    t105 = (x421!=(x422&(x423^x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x425 = 3U;
	static int16_t x427 = -1;
	int32_t t106 = 2874;

    t106 = (x425!=(x426&(x427^x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x429 = INT16_MAX;
	volatile int8_t x430 = INT8_MIN;
	static int32_t x431 = INT32_MIN;
	int8_t x432 = -10;

    t107 = (x429!=(x430&(x431^x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = 4158313;
	volatile uint8_t x434 = 95U;
	int64_t x435 = INT64_MAX;
	static uint16_t x436 = UINT16_MAX;
	volatile int32_t t108 = -119163538;

    t108 = (x433!=(x434&(x435^x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = 28861U;
	uint16_t x438 = UINT16_MAX;
	int16_t x440 = INT16_MAX;
	volatile int32_t t109 = 595082715;

    t109 = (x437!=(x438&(x439^x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x441 = -273;
	uint16_t x442 = UINT16_MAX;
	int32_t x443 = 564153;
	volatile int16_t x444 = INT16_MAX;
	volatile int32_t t110 = 3;

    t110 = (x441!=(x442&(x443^x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = 220982951630LL;
	int64_t x447 = 3748LL;
	static int64_t x448 = INT64_MIN;
	int32_t t111 = 61801895;

    t111 = (x445!=(x446&(x447^x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x451 = -5136;
	int64_t x452 = -182LL;
	int32_t t112 = 15;

    t112 = (x449!=(x450&(x451^x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 7U;
	static int8_t x455 = INT8_MIN;
	volatile int32_t t113 = -10884;

    t113 = (x453!=(x454&(x455^x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = -1;
	static int8_t x458 = 4;
	volatile int8_t x459 = INT8_MIN;
	int8_t x460 = 31;
	int32_t t114 = 875007679;

    t114 = (x457!=(x458&(x459^x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x461 = 2963U;
	int32_t x463 = -222224944;
	int64_t x464 = 341LL;
	volatile int32_t t115 = -1;

    t115 = (x461!=(x462&(x463^x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x466 = INT32_MIN;
	static int64_t x467 = INT64_MAX;
	int8_t x468 = INT8_MIN;
	int32_t t116 = -13;

    t116 = (x465!=(x466&(x467^x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = 9403U;
	volatile uint64_t x470 = 802953429307359240LLU;
	volatile uint8_t x471 = 0U;
	int16_t x472 = INT16_MIN;
	volatile int32_t t117 = -205644;

    t117 = (x469!=(x470&(x471^x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -1;
	static uint8_t x474 = 15U;
	int8_t x475 = -1;
	volatile int32_t t118 = 222967419;

    t118 = (x473!=(x474&(x475^x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = 1472U;
	int16_t x479 = -1;
	uint32_t x480 = UINT32_MAX;

    t119 = (x477!=(x478&(x479^x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x481 = 212935504347LLU;
	int8_t x482 = INT8_MIN;
	int16_t x483 = -986;
	uint64_t x484 = UINT64_MAX;
	volatile int32_t t120 = -5633;

    t120 = (x481!=(x482&(x483^x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = -1LL;
	int8_t x487 = INT8_MIN;
	int16_t x488 = 27;
	volatile int32_t t121 = 3532066;

    t121 = (x485!=(x486&(x487^x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x489 = 4U;
	uint8_t x490 = UINT8_MAX;
	static int32_t t122 = 1;

    t122 = (x489!=(x490&(x491^x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = 1773;
	uint16_t x495 = UINT16_MAX;
	volatile int8_t x496 = INT8_MAX;
	volatile int32_t t123 = 792;

    t123 = (x493!=(x494&(x495^x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x497 = -1LL;
	volatile int32_t x498 = INT32_MIN;
	int16_t x499 = INT16_MAX;
	int32_t x500 = INT32_MAX;

    t124 = (x497!=(x498&(x499^x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = 77;
	uint16_t x502 = 121U;
	volatile int8_t x503 = INT8_MAX;
	static volatile uint8_t x504 = 29U;

    t125 = (x501!=(x502&(x503^x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x505 = -6353479;
	static volatile int64_t x506 = -15367041419LL;
	int32_t x507 = INT32_MIN;
	int8_t x508 = -1;
	static int32_t t126 = 261886;

    t126 = (x505!=(x506&(x507^x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x509 = -1;
	volatile uint32_t x510 = 804666667U;
	int32_t x511 = INT32_MIN;
	int64_t x512 = -2721LL;
	volatile int32_t t127 = 51640432;

    t127 = (x509!=(x510&(x511^x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = -1;
	int16_t x514 = 5477;
	int32_t x515 = INT32_MIN;
	volatile int8_t x516 = INT8_MIN;
	volatile int32_t t128 = -28857;

    t128 = (x513!=(x514&(x515^x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x517 = INT64_MIN;
	uint32_t x518 = 154U;
	static uint8_t x519 = 13U;
	int8_t x520 = -1;
	int32_t t129 = 29;

    t129 = (x517!=(x518&(x519^x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x521 = INT16_MAX;
	uint64_t x522 = 3565341813LLU;
	volatile int32_t x523 = INT32_MIN;
	volatile uint16_t x524 = 9539U;

    t130 = (x521!=(x522&(x523^x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = UINT64_MAX;
	volatile int16_t x527 = -1;
	static volatile int32_t x528 = 234120;
	int32_t t131 = 0;

    t131 = (x525!=(x526&(x527^x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x530 = 576130704;
	int32_t x531 = -14254;
	volatile int32_t x532 = INT32_MAX;

    t132 = (x529!=(x530&(x531^x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x533 = -49;
	static volatile uint64_t x535 = 13LLU;
	int32_t x536 = 236684968;
	int32_t t133 = -52274576;

    t133 = (x533!=(x534&(x535^x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = INT64_MAX;
	volatile int32_t x538 = 42212341;
	int64_t x539 = -189LL;
	static int16_t x540 = 12190;
	volatile int32_t t134 = 14407;

    t134 = (x537!=(x538&(x539^x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x541 = INT32_MIN;
	volatile uint32_t x542 = 198U;
	uint32_t x543 = 43U;
	int16_t x544 = 1;
	volatile int32_t t135 = -127163;

    t135 = (x541!=(x542&(x543^x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = -10;
	static volatile int8_t x546 = -1;
	static int64_t x548 = -28810552987LL;
	volatile int32_t t136 = 2642573;

    t136 = (x545!=(x546&(x547^x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x550 = INT64_MAX;
	uint8_t x551 = UINT8_MAX;
	int32_t t137 = 73855547;

    t137 = (x549!=(x550&(x551^x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x554 = UINT64_MAX;
	int32_t x555 = 64039788;
	volatile int16_t x556 = -1;
	volatile int32_t t138 = -13524890;

    t138 = (x553!=(x554&(x555^x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MIN;
	uint16_t x559 = 2113U;

    t139 = (x557!=(x558&(x559^x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = 59875;
	int8_t x562 = -1;
	uint8_t x563 = UINT8_MAX;
	volatile uint32_t x564 = 39184861U;
	int32_t t140 = 6;

    t140 = (x561!=(x562&(x563^x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x565 = INT64_MIN;
	int16_t x566 = INT16_MAX;
	int8_t x567 = INT8_MIN;
	volatile int64_t x568 = -1LL;

    t141 = (x565!=(x566&(x567^x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x570 = 6U;
	int8_t x571 = INT8_MIN;
	uint16_t x572 = 8U;
	int32_t t142 = 65951680;

    t142 = (x569!=(x570&(x571^x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x575 = 1;
	int32_t x576 = INT32_MAX;
	int32_t t143 = -11748007;

    t143 = (x573!=(x574&(x575^x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	volatile int8_t x578 = INT8_MAX;
	int16_t x580 = 6323;
	static volatile int32_t t144 = -3755;

    t144 = (x577!=(x578&(x579^x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MAX;
	volatile int8_t x582 = 5;
	int8_t x583 = INT8_MIN;
	static uint16_t x584 = UINT16_MAX;
	int32_t t145 = -411749307;

    t145 = (x581!=(x582&(x583^x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x586 = INT8_MAX;
	int32_t x588 = 175977;
	int32_t t146 = 89854;

    t146 = (x585!=(x586&(x587^x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = UINT16_MAX;
	uint32_t x591 = UINT32_MAX;
	volatile int16_t x592 = 1;
	volatile int32_t t147 = 22660739;

    t147 = (x589!=(x590&(x591^x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x593 = INT16_MIN;
	int16_t x594 = -1;
	int64_t x595 = -10LL;
	int32_t x596 = -1809;
	volatile int32_t t148 = -250;

    t148 = (x593!=(x594&(x595^x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = -1;
	volatile int16_t x599 = INT16_MAX;
	uint64_t x600 = 16711752322305LLU;
	int32_t t149 = -56846593;

    t149 = (x597!=(x598&(x599^x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = 4;
	uint16_t x602 = 152U;
	int32_t x603 = -1;
	int32_t t150 = 2776;

    t150 = (x601!=(x602&(x603^x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MIN;
	static volatile int8_t x606 = 2;
	int32_t x607 = INT32_MIN;
	static int16_t x608 = INT16_MAX;
	int32_t t151 = -128913974;

    t151 = (x605!=(x606&(x607^x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x609 = 1;
	int32_t x610 = INT32_MAX;
	volatile int64_t x611 = 38444143LL;
	uint64_t x612 = UINT64_MAX;
	volatile int32_t t152 = 25441562;

    t152 = (x609!=(x610&(x611^x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	static int64_t x614 = 1304400992084277861LL;
	uint16_t x615 = UINT16_MAX;
	static volatile int32_t x616 = INT32_MIN;
	volatile int32_t t153 = -1452602;

    t153 = (x613!=(x614&(x615^x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x618 = -27;
	volatile int64_t x619 = -3LL;
	int8_t x620 = INT8_MIN;
	int32_t t154 = 15214121;

    t154 = (x617!=(x618&(x619^x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MIN;
	uint32_t x622 = 302U;
	volatile int8_t x623 = -1;
	volatile int32_t x624 = INT32_MIN;
	int32_t t155 = 0;

    t155 = (x621!=(x622&(x623^x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = -24;
	uint8_t x626 = UINT8_MAX;
	int64_t x627 = 4019295116173LL;
	volatile uint32_t x628 = 3U;
	int32_t t156 = -948962;

    t156 = (x625!=(x626&(x627^x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x629 = 784U;
	static uint64_t x630 = 1090LLU;
	static int64_t x632 = -88386LL;
	volatile int32_t t157 = -1851681;

    t157 = (x629!=(x630&(x631^x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = 0;
	volatile int16_t x634 = INT16_MIN;
	int32_t x636 = -3;

    t158 = (x633!=(x634&(x635^x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x637 = INT8_MAX;
	int32_t x638 = -444;
	int16_t x639 = -3;
	volatile int16_t x640 = INT16_MIN;

    t159 = (x637!=(x638&(x639^x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x642 = -1;
	int8_t x644 = -17;
	volatile int32_t t160 = -77200;

    t160 = (x641!=(x642&(x643^x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MIN;
	volatile uint32_t x646 = UINT32_MAX;
	int16_t x647 = 3409;
	int32_t x648 = 81441;

    t161 = (x645!=(x646&(x647^x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = UINT16_MAX;
	static int32_t x650 = -1;
	uint16_t x651 = 0U;
	int32_t x652 = INT32_MIN;
	int32_t t162 = 14842;

    t162 = (x649!=(x650&(x651^x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MIN;
	static volatile int64_t x655 = INT64_MIN;
	int64_t x656 = INT64_MAX;
	volatile int32_t t163 = -3322;

    t163 = (x653!=(x654&(x655^x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = UINT64_MAX;
	uint16_t x658 = UINT16_MAX;
	static volatile int16_t x659 = 43;
	volatile int64_t x660 = INT64_MAX;
	int32_t t164 = 301630629;

    t164 = (x657!=(x658&(x659^x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = 6516820U;
	volatile int16_t x663 = 0;
	static uint16_t x664 = UINT16_MAX;
	static int32_t t165 = 116;

    t165 = (x661!=(x662&(x663^x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x665 = 4987U;
	uint16_t x667 = 0U;
	int8_t x668 = 15;

    t166 = (x665!=(x666&(x667^x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x670 = 850U;
	int8_t x671 = INT8_MIN;
	static int16_t x672 = 4352;
	int32_t t167 = 2909;

    t167 = (x669!=(x670&(x671^x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x673 = INT16_MAX;
	static volatile uint16_t x674 = UINT16_MAX;
	int32_t x675 = INT32_MIN;
	static uint64_t x676 = 378708328LLU;

    t168 = (x673!=(x674&(x675^x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MIN;
	int16_t x680 = 17;

    t169 = (x677!=(x678&(x679^x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -249744LL;
	uint8_t x682 = 5U;
	static uint16_t x683 = UINT16_MAX;
	int8_t x684 = INT8_MIN;
	volatile int32_t t170 = 160;

    t170 = (x681!=(x682&(x683^x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x685 = UINT64_MAX;
	int8_t x686 = 4;
	static int16_t x687 = INT16_MIN;
	int32_t t171 = -4;

    t171 = (x685!=(x686&(x687^x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x690 = INT32_MAX;
	int64_t x692 = INT64_MIN;
	static volatile int32_t t172 = -3565;

    t172 = (x689!=(x690&(x691^x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x694 = 37811U;
	volatile int32_t x695 = -1;

    t173 = (x693!=(x694&(x695^x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = -1LL;
	static int16_t x698 = -2960;
	volatile int16_t x699 = -1;
	uint16_t x700 = UINT16_MAX;
	volatile int32_t t174 = -3219;

    t174 = (x697!=(x698&(x699^x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x701 = INT32_MIN;
	static int16_t x702 = INT16_MIN;
	int16_t x703 = INT16_MAX;
	int64_t x704 = -1LL;
	volatile int32_t t175 = 561544419;

    t175 = (x701!=(x702&(x703^x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x705 = INT32_MAX;
	int8_t x706 = INT8_MIN;
	int8_t x707 = -1;
	int16_t x708 = 60;
	static volatile int32_t t176 = 2398;

    t176 = (x705!=(x706&(x707^x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = 951U;
	static int64_t x711 = -916668699LL;
	int32_t t177 = -5;

    t177 = (x709!=(x710&(x711^x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x713 = UINT8_MAX;
	static uint32_t x714 = 4667U;
	int32_t x715 = INT32_MIN;
	volatile int16_t x716 = -286;
	static int32_t t178 = -93;

    t178 = (x713!=(x714&(x715^x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = -1;
	static int8_t x719 = 55;
	uint8_t x720 = 16U;
	volatile int32_t t179 = -34;

    t179 = (x717!=(x718&(x719^x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 93U;
	uint32_t x722 = 3950U;
	uint64_t x723 = UINT64_MAX;

    t180 = (x721!=(x722&(x723^x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MIN;
	static int8_t x726 = -1;
	uint32_t x727 = 362579482U;
	uint32_t x728 = 776694U;
	volatile int32_t t181 = 45903382;

    t181 = (x725!=(x726&(x727^x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x729 = UINT64_MAX;
	int8_t x730 = -1;
	int32_t x732 = INT32_MIN;
	int32_t t182 = -918297;

    t182 = (x729!=(x730&(x731^x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x734 = UINT16_MAX;
	int16_t x735 = INT16_MIN;
	static int64_t x736 = -13119263455LL;
	int32_t t183 = -224109;

    t183 = (x733!=(x734&(x735^x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x737 = INT16_MAX;
	static volatile int16_t x738 = -79;
	volatile int8_t x739 = -1;
	int32_t t184 = 84805362;

    t184 = (x737!=(x738&(x739^x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MAX;
	static uint32_t x742 = 194876069U;
	uint64_t x743 = UINT64_MAX;
	int16_t x744 = INT16_MIN;

    t185 = (x741!=(x742&(x743^x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x745 = 3642U;
	int64_t x746 = -13LL;
	int32_t x747 = INT32_MIN;
	int32_t t186 = 2;

    t186 = (x745!=(x746&(x747^x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = 339416;
	int8_t x750 = INT8_MAX;
	volatile int16_t x752 = 65;
	volatile int32_t t187 = 147625;

    t187 = (x749!=(x750&(x751^x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = INT16_MIN;
	volatile int32_t x754 = INT32_MAX;
	static int32_t x756 = -1;

    t188 = (x753!=(x754&(x755^x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x757 = -1;
	int8_t x758 = INT8_MAX;
	uint16_t x760 = UINT16_MAX;
	int32_t t189 = -33227209;

    t189 = (x757!=(x758&(x759^x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x763 = INT16_MIN;
	volatile int32_t t190 = -8;

    t190 = (x761!=(x762&(x763^x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int64_t x766 = INT64_MAX;
	int32_t t191 = -1;

    t191 = (x765!=(x766&(x767^x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MAX;
	static int16_t x771 = 8364;
	int64_t x772 = INT64_MAX;

    t192 = (x769!=(x770&(x771^x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x773 = INT64_MAX;
	int64_t x775 = 1LL;

    t193 = (x773!=(x774&(x775^x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = 111U;
	int32_t x778 = INT32_MIN;
	volatile uint32_t x779 = UINT32_MAX;
	volatile int16_t x780 = -1;
	volatile int32_t t194 = 1;

    t194 = (x777!=(x778&(x779^x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MAX;
	uint32_t x782 = UINT32_MAX;
	int32_t x783 = INT32_MAX;
	int16_t x784 = INT16_MAX;
	volatile int32_t t195 = -2437124;

    t195 = (x781!=(x782&(x783^x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x785 = INT8_MIN;
	int32_t x786 = 171475;
	uint64_t x787 = UINT64_MAX;
	volatile uint32_t x788 = 80495U;

    t196 = (x785!=(x786&(x787^x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MIN;
	int32_t x791 = 1;
	static int32_t x792 = -71387;

    t197 = (x789!=(x790&(x791^x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int16_t x793 = -231;
	volatile int32_t x794 = INT32_MAX;
	static int8_t x795 = -1;
	uint8_t x796 = 1U;
	int32_t t198 = 5835;

    t198 = (x793!=(x794&(x795^x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = UINT32_MAX;
	volatile int32_t x798 = INT32_MIN;
	int16_t x799 = INT16_MIN;
	int16_t x800 = INT16_MIN;
	int32_t t199 = 1;

    t199 = (x797!=(x798&(x799^x800)));

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


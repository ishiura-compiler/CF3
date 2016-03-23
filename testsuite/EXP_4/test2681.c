
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

static int64_t x2 = INT64_MIN;
static volatile uint8_t x3 = 4U;
volatile int8_t x5 = INT8_MIN;
volatile uint8_t x7 = 117U;
volatile uint16_t x8 = 3058U;
int32_t t1 = 823134254;
int8_t x16 = 0;
int64_t x17 = INT64_MAX;
int32_t x23 = INT32_MAX;
volatile int32_t t5 = 1177;
volatile int8_t x25 = INT8_MAX;
int32_t x31 = -1;
int32_t t10 = -25117;
volatile uint16_t x47 = 98U;
volatile int32_t t12 = -35036677;
int8_t x53 = 0;
volatile uint64_t x57 = 36372267LLU;
int16_t x63 = -2589;
static int64_t x83 = INT64_MIN;
int16_t x89 = -1;
int16_t x95 = -1;
volatile uint32_t x98 = UINT32_MAX;
int64_t x99 = -1LL;
int64_t x101 = INT64_MIN;
int16_t x104 = -1;
uint32_t x107 = 116201U;
int64_t x114 = INT64_MIN;
int64_t x116 = -1LL;
volatile int16_t x117 = -1;
volatile uint32_t x121 = 2475U;
int16_t x124 = -127;
volatile int64_t x127 = INT64_MIN;
static int32_t t31 = 1;
volatile int32_t t32 = -12514895;
uint32_t x142 = 900735U;
static int64_t x144 = 6641998719150LL;
int64_t x146 = 15LL;
static volatile uint16_t x147 = 549U;
int32_t t36 = -3713420;
int16_t x154 = -1;
int8_t x156 = INT8_MAX;
int32_t x165 = 3403;
uint32_t x170 = UINT32_MAX;
int64_t x174 = INT64_MIN;
int32_t x176 = INT32_MIN;
volatile int32_t x177 = 0;
static int16_t x178 = 1042;
int8_t x179 = 1;
volatile int32_t x184 = INT32_MAX;
int16_t x200 = -379;
uint16_t x201 = 28373U;
volatile int16_t x207 = -1;
int64_t x213 = INT64_MIN;
static int8_t x216 = -1;
int16_t x219 = -1;
uint32_t x222 = 219237U;
static int16_t x239 = INT16_MIN;
int32_t t59 = -184692;
uint8_t x248 = UINT8_MAX;
volatile int32_t x250 = -14962957;
uint64_t x254 = UINT64_MAX;
int32_t t64 = -32433;
volatile int32_t x264 = -1;
volatile int64_t x266 = 326663LL;
volatile int32_t t66 = -42055964;
volatile int32_t t67 = 1264291;
uint16_t x283 = UINT16_MAX;
uint16_t x286 = 212U;
int16_t x290 = -1;
volatile int32_t t73 = 9829;
int64_t x303 = -1LL;
volatile int32_t t81 = -3;
volatile int32_t t83 = 1765;
static uint8_t x339 = 1U;
volatile int64_t x344 = -2LL;
static int32_t t85 = -591130036;
int32_t x346 = -10372879;
uint32_t x352 = 451U;
uint16_t x359 = 7U;
int32_t t89 = 1879;
int32_t x371 = INT32_MAX;
int8_t x372 = -1;
int64_t x375 = INT64_MIN;
uint64_t x377 = 15943LLU;
int64_t x378 = 368558533418721LL;
int32_t t94 = -606703;
static int32_t x388 = -1;
volatile int32_t t96 = 9130192;
int16_t x389 = -1;
static int64_t x394 = INT64_MIN;
static uint8_t x402 = UINT8_MAX;
volatile int32_t t100 = 14885315;
volatile int8_t x408 = INT8_MIN;
static uint64_t x411 = UINT64_MAX;
int16_t x419 = INT16_MAX;
int8_t x421 = 1;
int32_t t105 = -379196;
static uint32_t x430 = UINT32_MAX;
int16_t x436 = INT16_MIN;
static int64_t x438 = -65021277LL;
int16_t x441 = INT16_MIN;
int64_t x444 = -1LL;
static int32_t x459 = -183026755;
int32_t x464 = INT32_MIN;
volatile uint16_t x469 = 917U;
static int16_t x475 = 7435;
int64_t x481 = -3300066449882LL;
int32_t t121 = 1584;
uint16_t x489 = 35U;
uint64_t x494 = UINT64_MAX;
uint16_t x496 = 119U;
volatile int64_t x500 = 1221922LL;
uint16_t x503 = 76U;
int32_t t125 = -256647777;
uint64_t x508 = 2883914229557LLU;
uint64_t x519 = 48576828081LLU;
int32_t x520 = INT32_MAX;
int64_t x527 = -1LL;
int64_t x530 = INT64_MIN;
static volatile int32_t t132 = -22312457;
int16_t x540 = -1;
volatile int32_t t135 = 0;
int32_t x552 = INT32_MIN;
volatile int32_t t137 = 1;
static volatile int8_t x553 = -1;
static int16_t x559 = INT16_MIN;
uint16_t x562 = 0U;
int32_t x564 = INT32_MIN;
volatile int16_t x568 = INT16_MAX;
volatile int32_t t141 = 43790870;
volatile uint32_t x572 = UINT32_MAX;
uint32_t x573 = 794U;
int64_t x575 = INT64_MIN;
uint8_t x580 = UINT8_MAX;
volatile int32_t x598 = INT32_MIN;
volatile uint16_t x602 = UINT16_MAX;
uint32_t x606 = 0U;
int32_t x614 = -27523653;
int8_t x615 = -1;
int64_t x625 = -1LL;
static volatile int16_t x626 = 183;
static int32_t t156 = 427771;
static int16_t x631 = INT16_MAX;
uint64_t x637 = 2LLU;
int32_t x638 = INT32_MIN;
static int8_t x640 = -1;
uint32_t x644 = 1094152U;
static int32_t t161 = 1696;
volatile int8_t x651 = -1;
int32_t t162 = -11121589;
int32_t t163 = -263186878;
static volatile uint16_t x659 = UINT16_MAX;
volatile int16_t x665 = -2;
int8_t x667 = -1;
int32_t t167 = 17;
uint64_t x674 = 14117LLU;
int32_t x678 = -9;
uint8_t x688 = UINT8_MAX;
volatile int8_t x696 = -53;
int64_t x701 = -1813225225LL;
static int16_t x703 = INT16_MAX;
static int8_t x706 = INT8_MIN;
volatile int64_t x707 = -10864193138545436LL;
int64_t x711 = 11596999089108755LL;
static uint64_t x713 = 1468641661553668918LLU;
static uint64_t x714 = 453240LLU;
int8_t x719 = INT8_MIN;
uint64_t x722 = 146182351955617LLU;
volatile uint64_t x724 = 208475528295094423LLU;
uint32_t x726 = 123U;
int8_t x727 = INT8_MAX;
uint8_t x740 = 2U;
int64_t x742 = INT64_MIN;
int8_t x745 = INT8_MIN;
volatile int32_t t186 = -55662;
uint32_t x749 = 0U;
uint64_t x755 = 428992484LLU;
volatile int32_t t188 = -6;
int64_t x757 = -1LL;
static int64_t x758 = INT64_MAX;
volatile int32_t t190 = -155;
int64_t x765 = 233526426117497LL;
int16_t x767 = INT16_MIN;
int8_t x770 = -1;
int64_t x771 = INT64_MAX;
static int32_t t192 = 44929540;
static int32_t x790 = -29;
int8_t x791 = INT8_MAX;
int16_t x798 = -33;


void f0(void) {
    	static uint32_t x1 = 736190089U;
	static int8_t x4 = -4;
	volatile int32_t t0 = -3;

    t0 = (x1!=(x2<=(x3^x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MIN;

    t1 = (x5!=(x6<=(x7^x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	int16_t x10 = -1658;
	static int8_t x11 = INT8_MAX;
	int64_t x12 = -1LL;
	int32_t t2 = 123358;

    t2 = (x9!=(x10<=(x11^x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 1;
	static int64_t x14 = -1LL;
	uint8_t x15 = 4U;
	static int32_t t3 = -26615;

    t3 = (x13!=(x14<=(x15^x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = INT64_MIN;
	int32_t x19 = INT32_MIN;
	int64_t x20 = -1LL;
	static volatile int32_t t4 = -3865;

    t4 = (x17!=(x18<=(x19^x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	int16_t x22 = INT16_MIN;
	uint8_t x24 = UINT8_MAX;

    t5 = (x21!=(x22<=(x23^x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int32_t x26 = -1;
	uint32_t x27 = 58342U;
	int16_t x28 = INT16_MIN;
	int32_t t6 = -1694;

    t6 = (x25!=(x26<=(x27^x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	volatile int16_t x30 = INT16_MAX;
	int32_t x32 = 348;
	static int32_t t7 = -1;

    t7 = (x29!=(x30<=(x31^x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x33 = 6U;
	int64_t x34 = 489864LL;
	int16_t x35 = INT16_MIN;
	uint64_t x36 = 16231LLU;
	volatile int32_t t8 = 4630;

    t8 = (x33!=(x34<=(x35^x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x37 = UINT16_MAX;
	static int64_t x38 = 12906265LL;
	static int8_t x39 = INT8_MAX;
	int32_t x40 = -3;
	int32_t t9 = -77091493;

    t9 = (x37!=(x38<=(x39^x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x41 = UINT8_MAX;
	uint16_t x42 = 0U;
	static uint32_t x43 = 584692064U;
	uint32_t x44 = 93990U;

    t10 = (x41!=(x42<=(x43^x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -650;
	volatile int32_t x46 = -1053057162;
	int16_t x48 = -1;
	static volatile int32_t t11 = 553;

    t11 = (x45!=(x46<=(x47^x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	volatile int64_t x50 = INT64_MAX;
	int16_t x51 = INT16_MIN;
	int32_t x52 = INT32_MIN;

    t12 = (x49!=(x50<=(x51^x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x54 = UINT32_MAX;
	int8_t x55 = -1;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = 146;

    t13 = (x53!=(x54<=(x55^x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = 3952;
	int32_t x59 = -635858;
	uint64_t x60 = 28110LLU;
	int32_t t14 = -251;

    t14 = (x57!=(x58<=(x59^x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = UINT32_MAX;
	uint16_t x62 = 233U;
	volatile int8_t x64 = 49;
	static int32_t t15 = 71993196;

    t15 = (x61!=(x62<=(x63^x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = UINT32_MAX;
	static int8_t x66 = INT8_MIN;
	volatile uint64_t x67 = 430081LLU;
	volatile uint32_t x68 = UINT32_MAX;
	volatile int32_t t16 = -266769188;

    t16 = (x65!=(x66<=(x67^x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -1;
	volatile int16_t x70 = INT16_MIN;
	int8_t x71 = -1;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t17 = -248329580;

    t17 = (x69!=(x70<=(x71^x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 27U;
	int16_t x74 = 4509;
	uint8_t x75 = UINT8_MAX;
	uint16_t x76 = UINT16_MAX;
	int32_t t18 = -1;

    t18 = (x73!=(x74<=(x75^x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x77 = 5288433U;
	int8_t x78 = -1;
	static volatile int16_t x79 = INT16_MIN;
	int64_t x80 = INT64_MIN;
	int32_t t19 = -3;

    t19 = (x77!=(x78<=(x79^x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = 119388815LL;
	uint8_t x82 = UINT8_MAX;
	int32_t x84 = 729;
	int32_t t20 = 123864;

    t20 = (x81!=(x82<=(x83^x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x85 = 159975424308833LLU;
	static int32_t x86 = -1;
	static uint16_t x87 = 78U;
	uint64_t x88 = 442LLU;
	static int32_t t21 = -244707;

    t21 = (x85!=(x86<=(x87^x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x90 = UINT64_MAX;
	int64_t x91 = -1LL;
	int8_t x92 = INT8_MIN;
	int32_t t22 = -326127989;

    t22 = (x89!=(x90<=(x91^x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -1;
	int8_t x94 = INT8_MIN;
	volatile int16_t x96 = INT16_MAX;
	int32_t t23 = -1684;

    t23 = (x93!=(x94<=(x95^x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 43U;
	int64_t x100 = INT64_MIN;
	int32_t t24 = 625;

    t24 = (x97!=(x98<=(x99^x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x102 = 3725497581LL;
	int16_t x103 = -1;
	static int32_t t25 = 39;

    t25 = (x101!=(x102<=(x103^x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = 21U;
	volatile int8_t x106 = -60;
	int8_t x108 = -1;
	volatile int32_t t26 = -1331994;

    t26 = (x105!=(x106<=(x107^x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = 14;
	int32_t x110 = 47;
	int8_t x111 = INT8_MIN;
	volatile int64_t x112 = INT64_MIN;
	volatile int32_t t27 = -148630;

    t27 = (x109!=(x110<=(x111^x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x113 = INT64_MIN;
	int32_t x115 = INT32_MIN;
	int32_t t28 = -71;

    t28 = (x113!=(x114<=(x115^x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x118 = 4262610947543955524LLU;
	static int64_t x119 = INT64_MAX;
	int32_t x120 = INT32_MAX;
	int32_t t29 = -295564;

    t29 = (x117!=(x118<=(x119^x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x122 = 62;
	int8_t x123 = 18;
	static int32_t t30 = -236743808;

    t30 = (x121!=(x122<=(x123^x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = UINT8_MAX;
	static volatile int64_t x126 = INT64_MIN;
	volatile int32_t x128 = INT32_MAX;

    t31 = (x125!=(x126<=(x127^x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int64_t x129 = INT64_MIN;
	uint8_t x130 = 1U;
	uint16_t x131 = 7U;
	volatile uint64_t x132 = UINT64_MAX;

    t32 = (x129!=(x130<=(x131^x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = UINT8_MAX;
	static int64_t x134 = INT64_MIN;
	static uint32_t x135 = UINT32_MAX;
	int64_t x136 = INT64_MIN;
	int32_t t33 = 1435;

    t33 = (x133!=(x134<=(x135^x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = UINT32_MAX;
	int8_t x138 = 17;
	int32_t x139 = 0;
	int8_t x140 = INT8_MAX;
	static volatile int32_t t34 = 82045;

    t34 = (x137!=(x138<=(x139^x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	uint8_t x143 = UINT8_MAX;
	volatile int32_t t35 = -13264664;

    t35 = (x141!=(x142<=(x143^x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = -1;
	int64_t x148 = 196895413027712125LL;

    t36 = (x145!=(x146<=(x147^x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = UINT64_MAX;
	uint64_t x150 = 211369LLU;
	volatile int64_t x151 = INT64_MAX;
	int64_t x152 = 163913901871474385LL;
	int32_t t37 = -240;

    t37 = (x149!=(x150<=(x151^x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = -1LL;
	static int64_t x155 = INT64_MAX;
	volatile int32_t t38 = 832533531;

    t38 = (x153!=(x154<=(x155^x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = -1;
	int8_t x158 = INT8_MAX;
	int16_t x159 = INT16_MAX;
	volatile int64_t x160 = INT64_MIN;
	static volatile int32_t t39 = 455967205;

    t39 = (x157!=(x158<=(x159^x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x161 = 16U;
	static uint64_t x162 = 879LLU;
	static int16_t x163 = INT16_MAX;
	static uint64_t x164 = 48508018841020LLU;
	static volatile int32_t t40 = -27470;

    t40 = (x161!=(x162<=(x163^x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x166 = INT32_MAX;
	static volatile uint8_t x167 = UINT8_MAX;
	uint8_t x168 = 31U;
	static int32_t t41 = 2;

    t41 = (x165!=(x166<=(x167^x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = INT32_MIN;
	volatile int8_t x171 = INT8_MIN;
	static int8_t x172 = INT8_MAX;
	volatile int32_t t42 = 120790501;

    t42 = (x169!=(x170<=(x171^x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MIN;
	uint8_t x175 = 50U;
	int32_t t43 = -6179877;

    t43 = (x173!=(x174<=(x175^x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x180 = INT32_MIN;
	volatile int32_t t44 = 0;

    t44 = (x177!=(x178<=(x179^x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 34U;
	static volatile uint16_t x182 = 3563U;
	int64_t x183 = INT64_MIN;
	static volatile int32_t t45 = 872485;

    t45 = (x181!=(x182<=(x183^x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = INT32_MIN;
	int64_t x186 = INT64_MIN;
	uint32_t x187 = 205U;
	int32_t x188 = INT32_MIN;
	volatile int32_t t46 = -1346;

    t46 = (x185!=(x186<=(x187^x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = 6;
	volatile int16_t x190 = -12;
	int64_t x191 = 1881169869950LL;
	int32_t x192 = INT32_MIN;
	static volatile int32_t t47 = 0;

    t47 = (x189!=(x190<=(x191^x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = -2;
	uint32_t x194 = UINT32_MAX;
	static int16_t x195 = INT16_MIN;
	static int8_t x196 = INT8_MIN;
	int32_t t48 = 77304;

    t48 = (x193!=(x194<=(x195^x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	uint8_t x198 = 65U;
	uint64_t x199 = 196732548024401188LLU;
	volatile int32_t t49 = -972152060;

    t49 = (x197!=(x198<=(x199^x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x202 = 5082U;
	int32_t x203 = 8847356;
	static uint8_t x204 = 0U;
	volatile int32_t t50 = 1914497;

    t50 = (x201!=(x202<=(x203^x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = 5U;
	volatile int8_t x206 = -1;
	static volatile uint8_t x208 = UINT8_MAX;
	volatile int32_t t51 = 123630537;

    t51 = (x205!=(x206<=(x207^x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x209 = 1U;
	static uint8_t x210 = 0U;
	int8_t x211 = INT8_MAX;
	static uint8_t x212 = 1U;
	int32_t t52 = -30048382;

    t52 = (x209!=(x210<=(x211^x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x214 = INT16_MAX;
	volatile uint32_t x215 = UINT32_MAX;
	int32_t t53 = 284185;

    t53 = (x213!=(x214<=(x215^x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x217 = 108LLU;
	volatile int16_t x218 = -18;
	uint16_t x220 = 29130U;
	int32_t t54 = 254;

    t54 = (x217!=(x218<=(x219^x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x221 = UINT8_MAX;
	static uint64_t x223 = 917LLU;
	volatile uint8_t x224 = 3U;
	int32_t t55 = -128064;

    t55 = (x221!=(x222<=(x223^x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = 5597948U;
	uint8_t x226 = UINT8_MAX;
	int32_t x227 = -1;
	int8_t x228 = -1;
	volatile int32_t t56 = -73410789;

    t56 = (x225!=(x226<=(x227^x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = 7U;
	static int32_t x230 = -19029169;
	static int16_t x231 = 9205;
	int16_t x232 = INT16_MAX;
	int32_t t57 = 58272;

    t57 = (x229!=(x230<=(x231^x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MIN;
	uint64_t x234 = UINT64_MAX;
	int32_t x235 = -1;
	int8_t x236 = -1;
	int32_t t58 = 74;

    t58 = (x233!=(x234<=(x235^x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = 8112675U;
	int16_t x238 = -11;
	uint64_t x240 = 5470989408769667LLU;

    t59 = (x237!=(x238<=(x239^x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = -131386581;
	uint32_t x242 = 25341U;
	static volatile uint64_t x243 = 2712852LLU;
	uint64_t x244 = UINT64_MAX;
	int32_t t60 = -3960338;

    t60 = (x241!=(x242<=(x243^x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -34425LL;
	int32_t x246 = 24;
	volatile uint32_t x247 = 119U;
	int32_t t61 = 104;

    t61 = (x245!=(x246<=(x247^x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	int64_t x251 = INT64_MIN;
	volatile uint16_t x252 = 81U;
	volatile int32_t t62 = -5987882;

    t62 = (x249!=(x250<=(x251^x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = 54595112LLU;
	static uint8_t x255 = 41U;
	volatile int16_t x256 = 15;
	int32_t t63 = 12;

    t63 = (x253!=(x254<=(x255^x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = 1;
	static int16_t x258 = -1;
	int16_t x259 = 0;
	int8_t x260 = 1;

    t64 = (x257!=(x258<=(x259^x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int64_t x261 = -1072683730106LL;
	static int64_t x262 = -9348LL;
	uint8_t x263 = 1U;
	volatile int32_t t65 = 10837004;

    t65 = (x261!=(x262<=(x263^x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 4412358384416LLU;
	volatile uint16_t x267 = 1604U;
	uint64_t x268 = 1125310413596162714LLU;

    t66 = (x265!=(x266<=(x267^x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = -1LL;
	int8_t x270 = INT8_MIN;
	int64_t x271 = INT64_MAX;
	uint16_t x272 = 330U;

    t67 = (x269!=(x270<=(x271^x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x273 = 1U;
	volatile int16_t x274 = INT16_MIN;
	int64_t x275 = -1LL;
	int64_t x276 = INT64_MIN;
	static volatile int32_t t68 = 799863376;

    t68 = (x273!=(x274<=(x275^x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MAX;
	uint8_t x278 = UINT8_MAX;
	volatile int32_t x279 = -1;
	int32_t x280 = 86359175;
	static int32_t t69 = 17;

    t69 = (x277!=(x278<=(x279^x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x281 = 1172516U;
	volatile int64_t x282 = 208771449834363462LL;
	uint16_t x284 = UINT16_MAX;
	int32_t t70 = -427;

    t70 = (x281!=(x282<=(x283^x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x285 = -23;
	uint32_t x287 = UINT32_MAX;
	uint8_t x288 = 63U;
	int32_t t71 = -1;

    t71 = (x285!=(x286<=(x287^x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x289 = 25173;
	static uint8_t x291 = UINT8_MAX;
	uint64_t x292 = 0LLU;
	int32_t t72 = -132243106;

    t72 = (x289!=(x290<=(x291^x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x293 = 5U;
	int64_t x294 = -1LL;
	static int64_t x295 = -1LL;
	static int32_t x296 = INT32_MIN;

    t73 = (x293!=(x294<=(x295^x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = 1525092LL;
	int64_t x298 = 12071831LL;
	int64_t x299 = -1806334227LL;
	static int32_t x300 = INT32_MIN;
	volatile int32_t t74 = 0;

    t74 = (x297!=(x298<=(x299^x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x301 = 47652U;
	int32_t x302 = INT32_MIN;
	int32_t x304 = -1;
	int32_t t75 = -1607955;

    t75 = (x301!=(x302<=(x303^x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int16_t x305 = -14072;
	static uint64_t x306 = 184426484876650017LLU;
	uint64_t x307 = 314052602200LLU;
	uint32_t x308 = 673U;
	static int32_t t76 = -2;

    t76 = (x305!=(x306<=(x307^x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MAX;
	int16_t x310 = INT16_MIN;
	int64_t x311 = INT64_MIN;
	uint16_t x312 = 1980U;
	volatile int32_t t77 = -3;

    t77 = (x309!=(x310<=(x311^x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MIN;
	static volatile uint32_t x314 = 187U;
	uint64_t x315 = UINT64_MAX;
	uint32_t x316 = UINT32_MAX;
	int32_t t78 = 61978272;

    t78 = (x313!=(x314<=(x315^x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -1;
	volatile uint32_t x318 = 2U;
	static volatile uint16_t x319 = 23U;
	volatile int8_t x320 = INT8_MIN;
	static int32_t t79 = 264947957;

    t79 = (x317!=(x318<=(x319^x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = -1;
	int8_t x322 = INT8_MIN;
	static volatile int8_t x323 = INT8_MAX;
	volatile int32_t x324 = -1;
	static volatile int32_t t80 = 321;

    t80 = (x321!=(x322<=(x323^x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x325 = 59U;
	int8_t x326 = 0;
	volatile uint64_t x327 = UINT64_MAX;
	uint64_t x328 = UINT64_MAX;

    t81 = (x325!=(x326<=(x327^x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x329 = 0;
	volatile uint64_t x330 = 2394228664194058883LLU;
	int32_t x331 = INT32_MIN;
	int32_t x332 = -1;
	int32_t t82 = -501;

    t82 = (x329!=(x330<=(x331^x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = UINT16_MAX;
	uint64_t x334 = UINT64_MAX;
	static uint16_t x335 = UINT16_MAX;
	static int16_t x336 = INT16_MIN;

    t83 = (x333!=(x334<=(x335^x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MAX;
	static uint16_t x338 = 19207U;
	int32_t x340 = 650;
	volatile int32_t t84 = 65;

    t84 = (x337!=(x338<=(x339^x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x341 = -8847254LL;
	volatile int16_t x342 = -4;
	int8_t x343 = 12;

    t85 = (x341!=(x342<=(x343^x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x345 = 22;
	int16_t x347 = 84;
	static uint8_t x348 = 0U;
	int32_t t86 = 833;

    t86 = (x345!=(x346<=(x347^x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = UINT32_MAX;
	int8_t x350 = INT8_MAX;
	static int64_t x351 = -1LL;
	volatile int32_t t87 = -534946802;

    t87 = (x349!=(x350<=(x351^x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = UINT16_MAX;
	uint64_t x354 = 18484LLU;
	uint16_t x355 = UINT16_MAX;
	int32_t x356 = -1;
	volatile int32_t t88 = -129995592;

    t88 = (x353!=(x354<=(x355^x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	volatile uint64_t x358 = 2LLU;
	int8_t x360 = 60;

    t89 = (x357!=(x358<=(x359^x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x361 = INT16_MAX;
	static uint64_t x362 = UINT64_MAX;
	static int64_t x363 = -1LL;
	static uint8_t x364 = 39U;
	volatile int32_t t90 = 510;

    t90 = (x361!=(x362<=(x363^x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x365 = UINT8_MAX;
	volatile int32_t x366 = INT32_MIN;
	int8_t x367 = INT8_MIN;
	static uint16_t x368 = 4434U;
	volatile int32_t t91 = -48;

    t91 = (x365!=(x366<=(x367^x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x369 = -254530;
	uint64_t x370 = 4546LLU;
	volatile int32_t t92 = -1236202;

    t92 = (x369!=(x370<=(x371^x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x373 = INT64_MIN;
	uint16_t x374 = 2U;
	static int8_t x376 = 1;
	static int32_t t93 = -1188822;

    t93 = (x373!=(x374<=(x375^x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x379 = UINT16_MAX;
	uint16_t x380 = 3U;

    t94 = (x377!=(x378<=(x379^x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = -393360LL;
	volatile int32_t x382 = INT32_MIN;
	int16_t x383 = -3;
	int8_t x384 = INT8_MAX;
	int32_t t95 = 293632216;

    t95 = (x381!=(x382<=(x383^x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = 1;
	static volatile int8_t x386 = 26;
	volatile int8_t x387 = -1;

    t96 = (x385!=(x386<=(x387^x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x390 = 51U;
	uint64_t x391 = 13859787876LLU;
	volatile int8_t x392 = -1;
	volatile int32_t t97 = 2;

    t97 = (x389!=(x390<=(x391^x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x393 = -1;
	static int8_t x395 = INT8_MIN;
	int8_t x396 = -1;
	int32_t t98 = -2;

    t98 = (x393!=(x394<=(x395^x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MIN;
	uint32_t x398 = UINT32_MAX;
	uint64_t x399 = 41LLU;
	static int32_t x400 = 0;
	int32_t t99 = -6994355;

    t99 = (x397!=(x398<=(x399^x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x401 = UINT64_MAX;
	uint64_t x403 = UINT64_MAX;
	volatile int8_t x404 = INT8_MIN;

    t100 = (x401!=(x402<=(x403^x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x405 = 713;
	uint64_t x406 = UINT64_MAX;
	int32_t x407 = INT32_MIN;
	volatile int32_t t101 = -324709;

    t101 = (x405!=(x406<=(x407^x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x409 = 3;
	int16_t x410 = -9;
	int16_t x412 = INT16_MAX;
	int32_t t102 = 501200;

    t102 = (x409!=(x410<=(x411^x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = 6;
	uint16_t x414 = 7U;
	int64_t x415 = INT64_MIN;
	volatile uint8_t x416 = 98U;
	int32_t t103 = 92;

    t103 = (x413!=(x414<=(x415^x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int64_t x417 = -1LL;
	uint8_t x418 = 2U;
	static volatile int64_t x420 = -637LL;
	static int32_t t104 = 162031;

    t104 = (x417!=(x418<=(x419^x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int8_t x422 = INT8_MIN;
	static int32_t x423 = INT32_MIN;
	static int16_t x424 = INT16_MIN;

    t105 = (x421!=(x422<=(x423^x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = -12935;
	int16_t x426 = -1;
	int16_t x427 = -1;
	volatile int32_t x428 = -2;
	int32_t t106 = -105;

    t106 = (x425!=(x426<=(x427^x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x429 = 16U;
	volatile int32_t x431 = INT32_MIN;
	int64_t x432 = -1LL;
	volatile int32_t t107 = -62;

    t107 = (x429!=(x430<=(x431^x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x433 = UINT16_MAX;
	volatile int16_t x434 = INT16_MIN;
	int64_t x435 = INT64_MIN;
	volatile int32_t t108 = 160;

    t108 = (x433!=(x434<=(x435^x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint8_t x437 = UINT8_MAX;
	int16_t x439 = -324;
	volatile int8_t x440 = -1;
	volatile int32_t t109 = -1201;

    t109 = (x437!=(x438<=(x439^x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x442 = -1;
	int64_t x443 = -1LL;
	static volatile int32_t t110 = -244798794;

    t110 = (x441!=(x442<=(x443^x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x445 = 5108;
	uint16_t x446 = 0U;
	int8_t x447 = INT8_MIN;
	int8_t x448 = -1;
	volatile int32_t t111 = 1648526;

    t111 = (x445!=(x446<=(x447^x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x449 = 88693LLU;
	volatile int64_t x450 = -6LL;
	uint64_t x451 = 12237112211895881LLU;
	static int16_t x452 = 1;
	volatile int32_t t112 = -14319;

    t112 = (x449!=(x450<=(x451^x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = -43;
	int64_t x454 = INT64_MIN;
	int64_t x455 = INT64_MIN;
	int16_t x456 = -1;
	volatile int32_t t113 = -65461434;

    t113 = (x453!=(x454<=(x455^x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint32_t x457 = UINT32_MAX;
	int32_t x458 = INT32_MIN;
	volatile int32_t x460 = INT32_MAX;
	volatile int32_t t114 = -3094;

    t114 = (x457!=(x458<=(x459^x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -1LL;
	static uint64_t x462 = 1566073679264LLU;
	int16_t x463 = 0;
	static int32_t t115 = 943;

    t115 = (x461!=(x462<=(x463^x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MAX;
	int32_t x466 = -61427;
	int16_t x467 = -1;
	static int16_t x468 = 16070;
	volatile int32_t t116 = 0;

    t116 = (x465!=(x466<=(x467^x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x470 = INT8_MIN;
	volatile int16_t x471 = INT16_MAX;
	uint8_t x472 = 46U;
	int32_t t117 = 1;

    t117 = (x469!=(x470<=(x471^x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x473 = 9U;
	static volatile uint64_t x474 = 21LLU;
	uint8_t x476 = 0U;
	volatile int32_t t118 = -1;

    t118 = (x473!=(x474<=(x475^x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = -1;
	int16_t x478 = -1;
	uint64_t x479 = 310228LLU;
	volatile int16_t x480 = INT16_MIN;
	int32_t t119 = -6098890;

    t119 = (x477!=(x478<=(x479^x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x482 = UINT8_MAX;
	uint8_t x483 = UINT8_MAX;
	uint16_t x484 = 1U;
	volatile int32_t t120 = 41;

    t120 = (x481!=(x482<=(x483^x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x485 = 102U;
	int8_t x486 = -12;
	int64_t x487 = INT64_MIN;
	uint8_t x488 = 34U;

    t121 = (x485!=(x486<=(x487^x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x490 = 0;
	int8_t x491 = 39;
	uint16_t x492 = UINT16_MAX;
	static volatile int32_t t122 = 12;

    t122 = (x489!=(x490<=(x491^x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = UINT32_MAX;
	static int8_t x495 = INT8_MAX;
	volatile int32_t t123 = 6;

    t123 = (x493!=(x494<=(x495^x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x497 = UINT64_MAX;
	int8_t x498 = INT8_MAX;
	int16_t x499 = INT16_MIN;
	volatile int32_t t124 = -124469857;

    t124 = (x497!=(x498<=(x499^x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x501 = 10379LL;
	int16_t x502 = INT16_MIN;
	uint32_t x504 = UINT32_MAX;

    t125 = (x501!=(x502<=(x503^x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = 2U;
	int8_t x506 = 33;
	int16_t x507 = INT16_MAX;
	volatile int32_t t126 = -111231;

    t126 = (x505!=(x506<=(x507^x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = 2443;
	uint64_t x510 = 1051412LLU;
	static volatile int16_t x511 = INT16_MAX;
	uint32_t x512 = 3301U;
	volatile int32_t t127 = -31993;

    t127 = (x509!=(x510<=(x511^x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x513 = INT32_MIN;
	int8_t x514 = INT8_MIN;
	volatile int8_t x515 = -1;
	int16_t x516 = INT16_MAX;
	volatile int32_t t128 = 3229919;

    t128 = (x513!=(x514<=(x515^x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x517 = 15404U;
	int8_t x518 = 46;
	int32_t t129 = 1027373;

    t129 = (x517!=(x518<=(x519^x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = -274297851;
	int64_t x522 = -125593115665LL;
	static uint32_t x523 = 2U;
	static int8_t x524 = INT8_MIN;
	int32_t t130 = 1976;

    t130 = (x521!=(x522<=(x523^x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x525 = 106U;
	int32_t x526 = INT32_MAX;
	int8_t x528 = INT8_MIN;
	static int32_t t131 = 12;

    t131 = (x525!=(x526<=(x527^x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = UINT32_MAX;
	uint32_t x531 = 11U;
	static volatile int8_t x532 = INT8_MIN;

    t132 = (x529!=(x530<=(x531^x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x533 = INT16_MIN;
	int32_t x534 = 273205075;
	volatile uint16_t x535 = 1U;
	volatile int16_t x536 = 0;
	int32_t t133 = -2012656;

    t133 = (x533!=(x534<=(x535^x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = 37U;
	static volatile uint16_t x538 = UINT16_MAX;
	uint64_t x539 = 322138293031539LLU;
	int32_t t134 = -138;

    t134 = (x537!=(x538<=(x539^x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x541 = INT64_MIN;
	static uint32_t x542 = 89194U;
	int16_t x543 = -639;
	static int32_t x544 = INT32_MIN;

    t135 = (x541!=(x542<=(x543^x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x545 = UINT8_MAX;
	static volatile uint16_t x546 = UINT16_MAX;
	volatile int16_t x547 = -1;
	uint16_t x548 = 1112U;
	int32_t t136 = -10836;

    t136 = (x545!=(x546<=(x547^x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MAX;
	volatile int8_t x550 = -1;
	int16_t x551 = 29;

    t137 = (x549!=(x550<=(x551^x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x554 = 1;
	uint32_t x555 = 2082891969U;
	uint8_t x556 = UINT8_MAX;
	int32_t t138 = 177333;

    t138 = (x553!=(x554<=(x555^x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x557 = UINT64_MAX;
	uint8_t x558 = 3U;
	int64_t x560 = -2987183997036396581LL;
	volatile int32_t t139 = 244;

    t139 = (x557!=(x558<=(x559^x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x561 = INT16_MAX;
	uint32_t x563 = 1454U;
	int32_t t140 = 0;

    t140 = (x561!=(x562<=(x563^x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x565 = INT32_MIN;
	int32_t x566 = -1;
	int64_t x567 = INT64_MIN;

    t141 = (x565!=(x566<=(x567^x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = 1U;
	int8_t x570 = INT8_MAX;
	static volatile int16_t x571 = -1;
	volatile int32_t t142 = 828004501;

    t142 = (x569!=(x570<=(x571^x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x574 = 6;
	uint32_t x576 = 3008U;
	volatile int32_t t143 = -6784632;

    t143 = (x573!=(x574<=(x575^x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x577 = UINT32_MAX;
	uint8_t x578 = 6U;
	uint8_t x579 = UINT8_MAX;
	int32_t t144 = -56371;

    t144 = (x577!=(x578<=(x579^x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x581 = -1;
	int8_t x582 = INT8_MIN;
	uint8_t x583 = 108U;
	volatile int16_t x584 = -1;
	static volatile int32_t t145 = 134941;

    t145 = (x581!=(x582<=(x583^x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	uint64_t x586 = 399491735LLU;
	uint8_t x587 = 53U;
	int32_t x588 = -6393;
	int32_t t146 = 15006482;

    t146 = (x585!=(x586<=(x587^x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MAX;
	static volatile int16_t x590 = INT16_MAX;
	static int64_t x591 = INT64_MIN;
	static uint8_t x592 = 2U;
	static volatile int32_t t147 = 205721;

    t147 = (x589!=(x590<=(x591^x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = INT16_MAX;
	int64_t x594 = INT64_MAX;
	volatile uint16_t x595 = 26U;
	volatile uint32_t x596 = 1406U;
	volatile int32_t t148 = -2270673;

    t148 = (x593!=(x594<=(x595^x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = INT16_MIN;
	volatile int16_t x599 = 0;
	uint8_t x600 = 2U;
	int32_t t149 = 778534;

    t149 = (x597!=(x598<=(x599^x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MAX;
	uint64_t x603 = 195967212034LLU;
	uint32_t x604 = UINT32_MAX;
	int32_t t150 = 2;

    t150 = (x601!=(x602<=(x603^x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = -3150;
	static int32_t x607 = INT32_MAX;
	volatile uint64_t x608 = 397978754LLU;
	volatile int32_t t151 = 2839;

    t151 = (x605!=(x606<=(x607^x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	uint32_t x610 = 20U;
	static int64_t x611 = -1LL;
	volatile uint8_t x612 = 122U;
	static volatile int32_t t152 = -405845;

    t152 = (x609!=(x610<=(x611^x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MIN;
	static int8_t x616 = INT8_MAX;
	int32_t t153 = 661668498;

    t153 = (x613!=(x614<=(x615^x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MAX;
	int8_t x618 = INT8_MAX;
	volatile uint64_t x619 = 3LLU;
	volatile int64_t x620 = -93LL;
	volatile int32_t t154 = 99750;

    t154 = (x617!=(x618<=(x619^x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x621 = 106647LLU;
	int32_t x622 = INT32_MIN;
	int32_t x623 = 11260089;
	uint8_t x624 = 11U;
	volatile int32_t t155 = -10121;

    t155 = (x621!=(x622<=(x623^x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x627 = 10225321U;
	static uint32_t x628 = 77122U;

    t156 = (x625!=(x626<=(x627^x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x629 = INT16_MIN;
	volatile int16_t x630 = INT16_MIN;
	int16_t x632 = INT16_MIN;
	volatile int32_t t157 = -467966702;

    t157 = (x629!=(x630<=(x631^x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 118722U;
	uint8_t x634 = 47U;
	volatile int64_t x635 = INT64_MIN;
	int16_t x636 = INT16_MAX;
	int32_t t158 = -3080;

    t158 = (x633!=(x634<=(x635^x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x639 = -60;
	volatile int32_t t159 = -14;

    t159 = (x637!=(x638<=(x639^x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = 27;
	volatile int8_t x642 = INT8_MIN;
	int64_t x643 = INT64_MIN;
	volatile int32_t t160 = 14803230;

    t160 = (x641!=(x642<=(x643^x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x645 = UINT64_MAX;
	int16_t x646 = INT16_MIN;
	int8_t x647 = -2;
	volatile uint8_t x648 = 1U;

    t161 = (x645!=(x646<=(x647^x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = -3;
	int32_t x650 = INT32_MIN;
	volatile int32_t x652 = INT32_MIN;

    t162 = (x649!=(x650<=(x651^x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MIN;
	uint8_t x654 = 45U;
	int8_t x655 = INT8_MAX;
	static int8_t x656 = -1;

    t163 = (x653!=(x654<=(x655^x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = -1011020180;
	int8_t x658 = 62;
	int64_t x660 = INT64_MIN;
	volatile int32_t t164 = -18639233;

    t164 = (x657!=(x658<=(x659^x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x661 = INT32_MIN;
	uint8_t x662 = 0U;
	volatile uint64_t x663 = UINT64_MAX;
	int32_t x664 = 1;
	int32_t t165 = -1;

    t165 = (x661!=(x662<=(x663^x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x666 = 19U;
	uint8_t x668 = UINT8_MAX;
	volatile int32_t t166 = 65370311;

    t166 = (x665!=(x666<=(x667^x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x669 = INT32_MIN;
	uint64_t x670 = 2LLU;
	static uint8_t x671 = 31U;
	static uint16_t x672 = UINT16_MAX;

    t167 = (x669!=(x670<=(x671^x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x673 = INT32_MAX;
	static int64_t x675 = -481091212LL;
	int8_t x676 = -5;
	volatile int32_t t168 = -916;

    t168 = (x673!=(x674<=(x675^x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = 10;
	static uint32_t x679 = 1514U;
	int64_t x680 = -96LL;
	int32_t t169 = 0;

    t169 = (x677!=(x678<=(x679^x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x681 = 2U;
	uint64_t x682 = 12LLU;
	uint8_t x683 = UINT8_MAX;
	uint16_t x684 = UINT16_MAX;
	int32_t t170 = -1016916;

    t170 = (x681!=(x682<=(x683^x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MIN;
	volatile uint32_t x686 = 4U;
	static int8_t x687 = 22;
	int32_t t171 = 7966027;

    t171 = (x685!=(x686<=(x687^x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = 540765LLU;
	int8_t x690 = INT8_MIN;
	int32_t x691 = -1;
	static volatile uint64_t x692 = 435950492235843LLU;
	static volatile int32_t t172 = 93880218;

    t172 = (x689!=(x690<=(x691^x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MIN;
	volatile uint32_t x694 = 1564U;
	int8_t x695 = INT8_MIN;
	int32_t t173 = -163;

    t173 = (x693!=(x694<=(x695^x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MIN;
	static int16_t x698 = 1;
	uint64_t x699 = 307LLU;
	uint8_t x700 = UINT8_MAX;
	static volatile int32_t t174 = -5644;

    t174 = (x697!=(x698<=(x699^x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x702 = -12;
	int16_t x704 = 1;
	volatile int32_t t175 = -1;

    t175 = (x701!=(x702<=(x703^x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 1U;
	uint8_t x708 = 1U;
	int32_t t176 = 45787;

    t176 = (x705!=(x706<=(x707^x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = -89;
	static int16_t x710 = 30;
	uint8_t x712 = 21U;
	int32_t t177 = 516425;

    t177 = (x709!=(x710<=(x711^x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x715 = UINT8_MAX;
	volatile uint64_t x716 = UINT64_MAX;
	int32_t t178 = -611201;

    t178 = (x713!=(x714<=(x715^x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = 1U;
	int64_t x718 = -1LL;
	int32_t x720 = 41505;
	int32_t t179 = -28094195;

    t179 = (x717!=(x718<=(x719^x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x721 = 7U;
	static int16_t x723 = -1;
	volatile int32_t t180 = -2506281;

    t180 = (x721!=(x722<=(x723^x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x725 = 3457263U;
	int32_t x728 = INT32_MIN;
	static volatile int32_t t181 = -9340300;

    t181 = (x725!=(x726<=(x727^x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x729 = INT32_MIN;
	static int16_t x730 = -225;
	int64_t x731 = -20LL;
	int16_t x732 = -1;
	volatile int32_t t182 = -516697;

    t182 = (x729!=(x730<=(x731^x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MIN;
	static int64_t x734 = INT64_MIN;
	int8_t x735 = INT8_MAX;
	static volatile uint32_t x736 = UINT32_MAX;
	volatile int32_t t183 = -114577;

    t183 = (x733!=(x734<=(x735^x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MIN;
	uint8_t x738 = 31U;
	uint32_t x739 = 15935U;
	int32_t t184 = -62637;

    t184 = (x737!=(x738<=(x739^x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MAX;
	static volatile int64_t x743 = -186887LL;
	static volatile int32_t x744 = INT32_MIN;
	volatile int32_t t185 = -1;

    t185 = (x741!=(x742<=(x743^x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x746 = INT8_MAX;
	static int64_t x747 = 240879LL;
	uint16_t x748 = 249U;

    t186 = (x745!=(x746<=(x747^x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x750 = 76U;
	int32_t x751 = INT32_MIN;
	uint16_t x752 = 0U;
	volatile int32_t t187 = 1;

    t187 = (x749!=(x750<=(x751^x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x753 = INT32_MIN;
	int16_t x754 = -4568;
	static int16_t x756 = INT16_MIN;

    t188 = (x753!=(x754<=(x755^x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int32_t x759 = -1;
	static uint8_t x760 = 8U;
	int32_t t189 = -11130539;

    t189 = (x757!=(x758<=(x759^x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = 10U;
	static uint16_t x762 = 69U;
	volatile uint64_t x763 = UINT64_MAX;
	int64_t x764 = INT64_MAX;

    t190 = (x761!=(x762<=(x763^x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x766 = 13U;
	int64_t x768 = INT64_MIN;
	volatile int32_t t191 = 464;

    t191 = (x765!=(x766<=(x767^x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x769 = -51;
	int8_t x772 = INT8_MAX;

    t192 = (x769!=(x770<=(x771^x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MIN;
	int64_t x774 = -1LL;
	volatile uint32_t x775 = UINT32_MAX;
	static int16_t x776 = INT16_MAX;
	static int32_t t193 = 61;

    t193 = (x773!=(x774<=(x775^x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x777 = -1;
	volatile int8_t x778 = 14;
	uint16_t x779 = 23U;
	int64_t x780 = INT64_MIN;
	volatile int32_t t194 = -5082;

    t194 = (x777!=(x778<=(x779^x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x781 = 50735660U;
	volatile int32_t x782 = INT32_MAX;
	int32_t x783 = -1;
	uint32_t x784 = 16536U;
	volatile int32_t t195 = 142;

    t195 = (x781!=(x782<=(x783^x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MAX;
	int64_t x786 = INT64_MAX;
	int16_t x787 = 39;
	int8_t x788 = 47;
	static volatile int32_t t196 = 241;

    t196 = (x785!=(x786<=(x787^x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint64_t x789 = UINT64_MAX;
	volatile int8_t x792 = -1;
	int32_t t197 = -165;

    t197 = (x789!=(x790<=(x791^x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = -1310LL;
	uint32_t x794 = 0U;
	static volatile int64_t x795 = -1LL;
	volatile int8_t x796 = -1;
	int32_t t198 = -46782821;

    t198 = (x793!=(x794<=(x795^x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x797 = UINT8_MAX;
	static uint8_t x799 = UINT8_MAX;
	int16_t x800 = INT16_MIN;
	volatile int32_t t199 = -1256978;

    t199 = (x797!=(x798<=(x799^x800)));

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


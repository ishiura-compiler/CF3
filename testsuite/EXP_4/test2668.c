
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

uint8_t x1 = 21U;
static uint16_t x4 = UINT16_MAX;
int8_t x11 = INT8_MIN;
int8_t x13 = -23;
int8_t x15 = INT8_MIN;
uint32_t x22 = 285U;
int16_t x24 = INT16_MAX;
static int16_t x29 = -1;
static volatile int32_t x32 = INT32_MAX;
int32_t t7 = 49;
static int32_t x35 = INT32_MIN;
int8_t x36 = INT8_MIN;
int16_t x38 = INT16_MIN;
static int16_t x39 = -1;
int32_t x50 = INT32_MIN;
volatile int32_t t13 = -79594831;
int32_t t17 = -63712;
static uint16_t x75 = 0U;
volatile int32_t t18 = -4801203;
int8_t x82 = 5;
uint16_t x86 = 165U;
int16_t x90 = INT16_MIN;
static int32_t x98 = INT32_MIN;
int32_t t25 = -46;
static volatile int16_t x107 = -41;
int32_t t26 = -16058;
int64_t x109 = 278383824666008244LL;
int64_t x120 = INT64_MAX;
int32_t t29 = -2808960;
int8_t x124 = -1;
static int8_t x136 = 7;
volatile int32_t t33 = -507;
int64_t x145 = INT64_MIN;
int64_t x148 = -1LL;
static int8_t x157 = INT8_MAX;
uint64_t x162 = 21325670554976LLU;
uint16_t x169 = 3U;
int32_t t42 = 0;
int8_t x173 = INT8_MIN;
static int64_t x175 = INT64_MIN;
static int8_t x183 = INT8_MIN;
int32_t t46 = 11726435;
int16_t x191 = INT16_MAX;
int64_t x192 = INT64_MIN;
int32_t x199 = 1707008;
volatile int8_t x200 = -1;
volatile int32_t x201 = INT32_MAX;
int32_t t51 = 10880;
static volatile int64_t x217 = INT64_MIN;
static volatile int32_t t54 = -952143890;
int32_t x225 = -1;
int16_t x226 = -48;
int32_t t56 = -23752367;
int8_t x235 = -62;
int64_t x244 = INT64_MAX;
uint8_t x246 = 10U;
static int16_t x248 = -1;
int32_t t62 = -30414;
uint32_t x262 = 1U;
uint16_t x271 = UINT16_MAX;
int16_t x272 = INT16_MIN;
int32_t x273 = INT32_MAX;
static uint64_t x285 = 7618LLU;
int64_t x286 = INT64_MIN;
int64_t x287 = -27859180LL;
static int64_t x289 = INT64_MIN;
static int8_t x291 = 6;
int8_t x292 = INT8_MIN;
volatile uint16_t x294 = UINT16_MAX;
static int32_t x302 = INT32_MIN;
int32_t x304 = INT32_MIN;
int64_t x313 = -1LL;
volatile uint32_t x320 = UINT32_MAX;
volatile int32_t t81 = -476;
static uint16_t x333 = 38U;
uint16_t x334 = 92U;
volatile int32_t t83 = -572889;
uint8_t x340 = 27U;
int32_t t84 = -17;
int32_t t85 = -83;
uint32_t x350 = 2922U;
int16_t x359 = -1;
volatile int32_t t89 = -9780;
static int16_t x365 = INT16_MIN;
int8_t x369 = -1;
int32_t t92 = -13554434;
int32_t t93 = 137;
static uint64_t x384 = 53LLU;
static volatile int16_t x386 = -1;
volatile int16_t x387 = -1;
uint64_t x389 = UINT64_MAX;
int16_t x391 = -1;
volatile int32_t t97 = -74105209;
static int64_t x401 = INT64_MAX;
int32_t x405 = -1;
int32_t x406 = 662849;
static int32_t t101 = 5;
static int64_t x414 = INT64_MIN;
uint16_t x418 = 0U;
static int32_t x419 = INT32_MAX;
static uint8_t x420 = 0U;
uint16_t x442 = 0U;
static uint16_t x446 = 16U;
volatile int32_t x448 = INT32_MIN;
int32_t x449 = -71664;
static int8_t x454 = INT8_MIN;
volatile int8_t x463 = -53;
int8_t x465 = -4;
int32_t t117 = 14078924;
uint64_t x475 = 1LLU;
static uint32_t x483 = 243397U;
uint64_t x485 = 18248436LLU;
volatile int16_t x495 = 1422;
uint8_t x497 = UINT8_MAX;
int64_t x500 = -7619878791LL;
int32_t t124 = -101986;
uint32_t x502 = 60562U;
uint8_t x504 = 10U;
int32_t x505 = -1;
uint64_t x511 = UINT64_MAX;
uint64_t x512 = 477962476LLU;
int32_t x514 = 28237190;
uint8_t x518 = 0U;
uint8_t x522 = UINT8_MAX;
int8_t x528 = INT8_MIN;
volatile int32_t t131 = 24016422;
static uint8_t x529 = 0U;
int32_t x536 = INT32_MIN;
volatile uint32_t x542 = UINT32_MAX;
int32_t t135 = -18760768;
int64_t x545 = 1913LL;
static uint64_t x547 = UINT64_MAX;
uint32_t x558 = 9862U;
int16_t x560 = -1;
int32_t t139 = 7283;
int32_t x561 = -61833502;
int32_t t140 = -1;
uint64_t x565 = 128462LLU;
uint8_t x567 = 14U;
uint32_t x580 = UINT32_MAX;
int32_t x581 = -20029;
static uint64_t x595 = 20300LLU;
uint8_t x597 = 3U;
uint8_t x598 = 4U;
uint8_t x603 = 0U;
volatile int16_t x610 = 0;
static int64_t x616 = 16294LL;
static int16_t x628 = 9871;
static int64_t x639 = -1LL;
static uint32_t x643 = UINT32_MAX;
volatile int8_t x645 = -1;
int16_t x650 = -1;
uint64_t x665 = 175506405136613LLU;
static int32_t x666 = INT32_MAX;
uint32_t x667 = UINT32_MAX;
static int32_t x671 = -1;
int64_t x674 = INT64_MIN;
volatile int32_t x678 = INT32_MAX;
volatile int32_t t173 = -197;
static uint16_t x698 = UINT16_MAX;
volatile int32_t x702 = -237;
uint8_t x703 = UINT8_MAX;
volatile int64_t x704 = INT64_MIN;
int32_t t175 = -1;
int32_t x706 = INT32_MIN;
int64_t x712 = INT64_MAX;
volatile uint64_t x713 = UINT64_MAX;
static int8_t x715 = -1;
uint16_t x717 = 5441U;
volatile uint32_t x728 = 40U;
int16_t x735 = -1;
static volatile int32_t t183 = 1;
volatile int32_t x739 = INT32_MIN;
static volatile int32_t t185 = 6396739;
int8_t x746 = INT8_MIN;
int32_t x751 = 42940;
int32_t t187 = 49;
volatile int8_t x757 = 56;
int8_t x763 = -1;
int32_t t191 = 3471;
uint16_t x774 = 2U;
int8_t x780 = INT8_MAX;
int8_t x790 = INT8_MIN;
int32_t x792 = INT32_MAX;
volatile int32_t t197 = -101115557;
int8_t x796 = 23;
int32_t t198 = 1;


void f0(void) {
    	int64_t x2 = -77817202698258134LL;
	uint8_t x3 = 52U;
	int32_t t0 = 2133052;

    t0 = (x1==(x2>(x3^x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	int64_t x6 = INT64_MAX;
	int8_t x7 = 14;
	int32_t x8 = INT32_MAX;
	volatile int32_t t1 = 0;

    t1 = (x5==(x6>(x7^x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	int32_t x10 = INT32_MIN;
	volatile int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 198911915;

    t2 = (x9==(x10>(x11^x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x14 = -13189LL;
	int8_t x16 = INT8_MAX;
	int32_t t3 = -1430;

    t3 = (x13==(x14>(x15^x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -923;
	int8_t x18 = INT8_MIN;
	static int8_t x19 = INT8_MAX;
	uint64_t x20 = 31305824721645915LLU;
	int32_t t4 = 60913675;

    t4 = (x17==(x18>(x19^x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x21 = UINT8_MAX;
	volatile int32_t x23 = INT32_MAX;
	volatile int32_t t5 = 3600;

    t5 = (x21==(x22>(x23^x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -2;
	int8_t x26 = 0;
	int32_t x27 = -1;
	int8_t x28 = -28;
	static int32_t t6 = -5;

    t6 = (x25==(x26>(x27^x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x30 = INT32_MIN;
	int8_t x31 = INT8_MIN;

    t7 = (x29==(x30>(x31^x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int64_t x33 = -1LL;
	int64_t x34 = -125813LL;
	volatile int32_t t8 = -915874;

    t8 = (x33==(x34>(x35^x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 7;
	static uint32_t x40 = UINT32_MAX;
	static int32_t t9 = 32695361;

    t9 = (x37==(x38>(x39^x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x41 = 30U;
	uint8_t x42 = UINT8_MAX;
	uint32_t x43 = UINT32_MAX;
	int8_t x44 = INT8_MIN;
	static volatile int32_t t10 = -692;

    t10 = (x41==(x42>(x43^x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 9977U;
	static volatile uint32_t x46 = 504629025U;
	int8_t x47 = -1;
	int32_t x48 = -1;
	static int32_t t11 = -23;

    t11 = (x45==(x46>(x47^x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MAX;
	static int32_t x51 = -1;
	volatile int16_t x52 = INT16_MAX;
	volatile int32_t t12 = 11087;

    t12 = (x49==(x50>(x51^x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 336382U;
	volatile int16_t x54 = INT16_MAX;
	volatile uint32_t x55 = 25710U;
	int8_t x56 = INT8_MIN;

    t13 = (x53==(x54>(x55^x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MAX;
	int32_t x58 = INT32_MIN;
	volatile int32_t x59 = INT32_MIN;
	uint64_t x60 = 114846LLU;
	int32_t t14 = 38;

    t14 = (x57==(x58>(x59^x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	volatile int16_t x62 = -1;
	int16_t x63 = -903;
	static int8_t x64 = -5;
	static volatile int32_t t15 = -218;

    t15 = (x61==(x62>(x63^x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = UINT16_MAX;
	int16_t x66 = -244;
	int64_t x67 = INT64_MIN;
	volatile uint64_t x68 = 1057169895474077LLU;
	volatile int32_t t16 = 4059527;

    t16 = (x65==(x66>(x67^x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x69 = 23U;
	int16_t x70 = INT16_MIN;
	uint64_t x71 = 1LLU;
	volatile uint16_t x72 = 10U;

    t17 = (x69==(x70>(x71^x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -1;
	volatile int8_t x74 = INT8_MAX;
	int32_t x76 = -1;

    t18 = (x73==(x74>(x75^x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = UINT64_MAX;
	volatile uint32_t x78 = UINT32_MAX;
	volatile int32_t x79 = -1;
	uint64_t x80 = UINT64_MAX;
	int32_t t19 = 5;

    t19 = (x77==(x78>(x79^x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 4U;
	int32_t x83 = INT32_MAX;
	uint16_t x84 = 3368U;
	volatile int32_t t20 = 203661471;

    t20 = (x81==(x82>(x83^x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x85 = -1;
	int64_t x87 = INT64_MIN;
	int16_t x88 = -1;
	int32_t t21 = -2066156;

    t21 = (x85==(x86>(x87^x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = INT64_MIN;
	volatile int64_t x91 = INT64_MIN;
	int8_t x92 = INT8_MAX;
	int32_t t22 = -2752;

    t22 = (x89==(x90>(x91^x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x93 = -173;
	static int16_t x94 = -1;
	int8_t x95 = INT8_MIN;
	int64_t x96 = INT64_MAX;
	volatile int32_t t23 = 8307644;

    t23 = (x93==(x94>(x95^x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = UINT8_MAX;
	int32_t x99 = 1737404;
	static int8_t x100 = INT8_MAX;
	volatile int32_t t24 = 34295920;

    t24 = (x97==(x98>(x99^x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = UINT16_MAX;
	int8_t x102 = INT8_MAX;
	uint16_t x103 = 81U;
	int32_t x104 = INT32_MIN;

    t25 = (x101==(x102>(x103^x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	volatile int8_t x106 = -1;
	uint16_t x108 = 4707U;

    t26 = (x105==(x106>(x107^x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x110 = INT8_MIN;
	int8_t x111 = -1;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t27 = 1;

    t27 = (x109==(x110>(x111^x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MIN;
	uint64_t x114 = 65585LLU;
	int16_t x115 = INT16_MAX;
	int8_t x116 = -1;
	int32_t t28 = -119113;

    t28 = (x113==(x114>(x115^x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MAX;
	static int32_t x118 = -63246696;
	int64_t x119 = -1220915535690135LL;

    t29 = (x117==(x118>(x119^x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = 3938U;
	int32_t x122 = -1;
	int8_t x123 = INT8_MIN;
	int32_t t30 = -29665;

    t30 = (x121==(x122>(x123^x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 7398007844326LLU;
	static volatile uint32_t x126 = 52046U;
	int64_t x127 = INT64_MIN;
	int16_t x128 = INT16_MIN;
	volatile int32_t t31 = -34367;

    t31 = (x125==(x126>(x127^x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 38436848548984336LLU;
	static int8_t x130 = INT8_MIN;
	static uint32_t x131 = 547132U;
	volatile uint16_t x132 = UINT16_MAX;
	volatile int32_t t32 = -495825;

    t32 = (x129==(x130>(x131^x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	static uint32_t x134 = 258844021U;
	int64_t x135 = INT64_MAX;

    t33 = (x133==(x134>(x135^x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	int8_t x138 = INT8_MIN;
	volatile int8_t x139 = 11;
	volatile int64_t x140 = -923483645637416LL;
	volatile int32_t t34 = 7705816;

    t34 = (x137==(x138>(x139^x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x141 = INT8_MIN;
	volatile int16_t x142 = 63;
	int32_t x143 = INT32_MAX;
	uint8_t x144 = 1U;
	int32_t t35 = -3;

    t35 = (x141==(x142>(x143^x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x146 = -1LL;
	static uint32_t x147 = UINT32_MAX;
	static int32_t t36 = -51240;

    t36 = (x145==(x146>(x147^x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = 168780682029061933LL;
	int64_t x150 = 1571295100931474024LL;
	int16_t x151 = INT16_MIN;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = 937;

    t37 = (x149==(x150>(x151^x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = 2LL;
	uint8_t x154 = 2U;
	int32_t x155 = -1;
	static int64_t x156 = INT64_MIN;
	static volatile int32_t t38 = 248;

    t38 = (x153==(x154>(x155^x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x158 = -59967415LL;
	int64_t x159 = INT64_MAX;
	int8_t x160 = -13;
	static int32_t t39 = -169432672;

    t39 = (x157==(x158>(x159^x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MAX;
	volatile uint16_t x163 = 76U;
	uint8_t x164 = 24U;
	int32_t t40 = -15349;

    t40 = (x161==(x162>(x163^x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = UINT16_MAX;
	static volatile int64_t x166 = INT64_MIN;
	int32_t x167 = 2460;
	uint32_t x168 = UINT32_MAX;
	int32_t t41 = -20;

    t41 = (x165==(x166>(x167^x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x170 = INT32_MAX;
	int64_t x171 = -1LL;
	static uint32_t x172 = 401U;

    t42 = (x169==(x170>(x171^x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x174 = INT32_MIN;
	volatile uint16_t x176 = 1U;
	int32_t t43 = -22;

    t43 = (x173==(x174>(x175^x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = -4;
	uint32_t x178 = 223527U;
	volatile int32_t x179 = -1;
	uint8_t x180 = 29U;
	int32_t t44 = 344;

    t44 = (x177==(x178>(x179^x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = 406488336LLU;
	int32_t x182 = -1;
	int16_t x184 = 0;
	volatile int32_t t45 = 7;

    t45 = (x181==(x182>(x183^x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = 1990873666198254282LLU;
	static int8_t x186 = 17;
	static int64_t x187 = -288060296557370LL;
	uint16_t x188 = UINT16_MAX;

    t46 = (x185==(x186>(x187^x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = 5057970;
	volatile int32_t x190 = INT32_MIN;
	int32_t t47 = 54;

    t47 = (x189==(x190>(x191^x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = -3;
	uint64_t x194 = 1154LLU;
	static uint64_t x195 = UINT64_MAX;
	int8_t x196 = -5;
	static volatile int32_t t48 = -349;

    t48 = (x193==(x194>(x195^x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = -74;
	int16_t x198 = 0;
	volatile int32_t t49 = 13283;

    t49 = (x197==(x198>(x199^x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x202 = -1LL;
	static int8_t x203 = INT8_MIN;
	static uint64_t x204 = 3602370281405LLU;
	int32_t t50 = -102800001;

    t50 = (x201==(x202>(x203^x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = UINT8_MAX;
	static int64_t x206 = -2361478754586LL;
	volatile int64_t x207 = INT64_MIN;
	volatile int8_t x208 = 1;

    t51 = (x205==(x206>(x207^x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x209 = INT32_MIN;
	volatile int64_t x210 = -1LL;
	int32_t x211 = INT32_MIN;
	uint32_t x212 = UINT32_MAX;
	int32_t t52 = -1;

    t52 = (x209==(x210>(x211^x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MIN;
	uint32_t x214 = UINT32_MAX;
	int32_t x215 = INT32_MIN;
	int32_t x216 = INT32_MIN;
	static volatile int32_t t53 = -4142;

    t53 = (x213==(x214>(x215^x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x218 = INT64_MIN;
	int16_t x219 = INT16_MIN;
	int16_t x220 = 5113;

    t54 = (x217==(x218>(x219^x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = -1LL;
	int64_t x222 = INT64_MIN;
	uint64_t x223 = 1243519307561LLU;
	static uint16_t x224 = UINT16_MAX;
	volatile int32_t t55 = 71;

    t55 = (x221==(x222>(x223^x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x227 = 2U;
	static int32_t x228 = -161273783;

    t56 = (x225==(x226>(x227^x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x229 = 0U;
	int64_t x230 = INT64_MAX;
	uint16_t x231 = 142U;
	int32_t x232 = INT32_MIN;
	int32_t t57 = 57;

    t57 = (x229==(x230>(x231^x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x233 = 4U;
	volatile uint16_t x234 = UINT16_MAX;
	static int64_t x236 = -1169511268220LL;
	static volatile int32_t t58 = -4290;

    t58 = (x233==(x234>(x235^x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	static int64_t x238 = 15060481301LL;
	volatile int64_t x239 = INT64_MAX;
	static int64_t x240 = INT64_MIN;
	volatile int32_t t59 = 150;

    t59 = (x237==(x238>(x239^x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = -362346435;
	int16_t x242 = -1;
	int8_t x243 = INT8_MIN;
	volatile int32_t t60 = -221644;

    t60 = (x241==(x242>(x243^x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x245 = UINT16_MAX;
	uint64_t x247 = UINT64_MAX;
	static int32_t t61 = 126054211;

    t61 = (x245==(x246>(x247^x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = -1;
	volatile uint16_t x250 = 7U;
	int16_t x251 = -1;
	static uint16_t x252 = 7645U;

    t62 = (x249==(x250>(x251^x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x253 = INT16_MIN;
	static volatile int64_t x254 = INT64_MIN;
	volatile int16_t x255 = 0;
	uint64_t x256 = 372774LLU;
	int32_t t63 = 836859156;

    t63 = (x253==(x254>(x255^x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x257 = UINT64_MAX;
	volatile uint64_t x258 = UINT64_MAX;
	static volatile int64_t x259 = INT64_MIN;
	static uint8_t x260 = 13U;
	int32_t t64 = 33812563;

    t64 = (x257==(x258>(x259^x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x261 = INT64_MIN;
	int32_t x263 = INT32_MIN;
	static uint8_t x264 = 15U;
	int32_t t65 = 652100;

    t65 = (x261==(x262>(x263^x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x265 = 3U;
	int32_t x266 = INT32_MIN;
	static volatile int16_t x267 = INT16_MAX;
	int64_t x268 = 3071092LL;
	volatile int32_t t66 = 276946539;

    t66 = (x265==(x266>(x267^x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 90U;
	int32_t x270 = INT32_MIN;
	static int32_t t67 = 1;

    t67 = (x269==(x270>(x271^x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x274 = 174996LLU;
	int64_t x275 = INT64_MAX;
	int8_t x276 = -44;
	static volatile int32_t t68 = -58;

    t68 = (x273==(x274>(x275^x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x277 = INT16_MAX;
	volatile int32_t x278 = INT32_MAX;
	uint64_t x279 = 44820LLU;
	int8_t x280 = -1;
	volatile int32_t t69 = -14;

    t69 = (x277==(x278>(x279^x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	volatile int64_t x282 = 8444057757708449LL;
	int16_t x283 = INT16_MIN;
	int8_t x284 = 19;
	static volatile int32_t t70 = -7857;

    t70 = (x281==(x282>(x283^x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint32_t x288 = 166U;
	static volatile int32_t t71 = -34;

    t71 = (x285==(x286>(x287^x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x290 = 0U;
	int32_t t72 = 1761052;

    t72 = (x289==(x290>(x291^x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x293 = INT8_MAX;
	volatile int8_t x295 = INT8_MAX;
	uint8_t x296 = UINT8_MAX;
	volatile int32_t t73 = 1920;

    t73 = (x293==(x294>(x295^x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x297 = INT16_MIN;
	volatile uint64_t x298 = UINT64_MAX;
	uint32_t x299 = UINT32_MAX;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t74 = 63920466;

    t74 = (x297==(x298>(x299^x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x301 = 44167;
	static int16_t x303 = INT16_MIN;
	static int32_t t75 = 64581033;

    t75 = (x301==(x302>(x303^x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MIN;
	uint16_t x306 = UINT16_MAX;
	int64_t x307 = -1LL;
	int32_t x308 = INT32_MAX;
	static int32_t t76 = 81672;

    t76 = (x305==(x306>(x307^x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	int16_t x310 = -3469;
	int64_t x311 = INT64_MIN;
	int8_t x312 = 23;
	volatile int32_t t77 = 387479;

    t77 = (x309==(x310>(x311^x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x314 = -1;
	uint32_t x315 = 858723U;
	int64_t x316 = -1LL;
	static int32_t t78 = -2;

    t78 = (x313==(x314>(x315^x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x317 = -14;
	volatile uint32_t x318 = 129439U;
	volatile uint64_t x319 = 485996126LLU;
	int32_t t79 = 20;

    t79 = (x317==(x318>(x319^x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x321 = INT16_MIN;
	int16_t x322 = -414;
	static uint16_t x323 = UINT16_MAX;
	uint64_t x324 = UINT64_MAX;
	int32_t t80 = 5;

    t80 = (x321==(x322>(x323^x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = 0;
	int8_t x326 = INT8_MIN;
	int64_t x327 = 436LL;
	static int16_t x328 = INT16_MIN;

    t81 = (x325==(x326>(x327^x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = 0;
	volatile int64_t x330 = INT64_MIN;
	int32_t x331 = 284;
	volatile int32_t x332 = 92;
	static volatile int32_t t82 = -132572586;

    t82 = (x329==(x330>(x331^x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x335 = INT64_MIN;
	int32_t x336 = INT32_MAX;

    t83 = (x333==(x334>(x335^x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = -2;
	static volatile uint16_t x338 = UINT16_MAX;
	volatile int32_t x339 = 42;

    t84 = (x337==(x338>(x339^x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x341 = INT8_MIN;
	volatile uint16_t x342 = 88U;
	int32_t x343 = -1;
	static int64_t x344 = -1LL;

    t85 = (x341==(x342>(x343^x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = 24U;
	volatile int8_t x346 = INT8_MIN;
	uint16_t x347 = UINT16_MAX;
	int64_t x348 = -1LL;
	volatile int32_t t86 = 1177;

    t86 = (x345==(x346>(x347^x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = UINT64_MAX;
	uint8_t x351 = UINT8_MAX;
	int8_t x352 = INT8_MIN;
	static int32_t t87 = 6;

    t87 = (x349==(x350>(x351^x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MIN;
	uint8_t x354 = 8U;
	static int8_t x355 = 3;
	uint32_t x356 = 12207137U;
	static volatile int32_t t88 = -45;

    t88 = (x353==(x354>(x355^x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	int32_t x358 = -1;
	int8_t x360 = -46;

    t89 = (x357==(x358>(x359^x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = -1LL;
	int32_t x362 = INT32_MAX;
	static int32_t x363 = 2701;
	int16_t x364 = INT16_MAX;
	static volatile int32_t t90 = 15858;

    t90 = (x361==(x362>(x363^x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x366 = 1U;
	uint8_t x367 = 82U;
	static int64_t x368 = -1LL;
	volatile int32_t t91 = 4;

    t91 = (x365==(x366>(x367^x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x370 = -1;
	int64_t x371 = -49LL;
	volatile int32_t x372 = INT32_MIN;

    t92 = (x369==(x370>(x371^x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x373 = INT64_MIN;
	uint16_t x374 = 54U;
	int16_t x375 = 6;
	uint32_t x376 = 82156449U;

    t93 = (x373==(x374>(x375^x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int32_t x377 = -3101238;
	static int64_t x378 = INT64_MIN;
	int32_t x379 = 1;
	int8_t x380 = INT8_MIN;
	int32_t t94 = 12;

    t94 = (x377==(x378>(x379^x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = 0U;
	int32_t x382 = INT32_MIN;
	uint16_t x383 = 1U;
	volatile int32_t t95 = 540649731;

    t95 = (x381==(x382>(x383^x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x385 = UINT64_MAX;
	uint16_t x388 = 1680U;
	static volatile int32_t t96 = -422670729;

    t96 = (x385==(x386>(x387^x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x390 = INT32_MAX;
	static int8_t x392 = 7;

    t97 = (x389==(x390>(x391^x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x393 = INT32_MIN;
	int32_t x394 = 3797839;
	uint64_t x395 = 6526916130770981LLU;
	uint16_t x396 = 58U;
	volatile int32_t t98 = -8865038;

    t98 = (x393==(x394>(x395^x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MIN;
	int64_t x398 = -1013338544456145LL;
	volatile int16_t x399 = INT16_MAX;
	int64_t x400 = -2215033252919184LL;
	int32_t t99 = 949;

    t99 = (x397==(x398>(x399^x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x402 = INT16_MAX;
	int8_t x403 = 1;
	int32_t x404 = 30172357;
	volatile int32_t t100 = 377394;

    t100 = (x401==(x402>(x403^x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int64_t x407 = INT64_MAX;
	uint8_t x408 = 19U;

    t101 = (x405==(x406>(x407^x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MIN;
	uint32_t x410 = UINT32_MAX;
	int16_t x411 = -1;
	int64_t x412 = INT64_MIN;
	volatile int32_t t102 = 1655;

    t102 = (x409==(x410>(x411^x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MIN;
	uint32_t x415 = 152U;
	int8_t x416 = INT8_MAX;
	int32_t t103 = -601553767;

    t103 = (x413==(x414>(x415^x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MIN;
	volatile int32_t t104 = 12;

    t104 = (x417==(x418>(x419^x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x421 = INT8_MIN;
	static int32_t x422 = INT32_MIN;
	static int32_t x423 = -1;
	uint8_t x424 = 7U;
	volatile int32_t t105 = -3143;

    t105 = (x421==(x422>(x423^x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = UINT8_MAX;
	int16_t x426 = INT16_MIN;
	uint64_t x427 = UINT64_MAX;
	static uint32_t x428 = 130968561U;
	volatile int32_t t106 = -97011257;

    t106 = (x425==(x426>(x427^x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = 9;
	int32_t x430 = 2491;
	uint32_t x431 = UINT32_MAX;
	volatile int8_t x432 = INT8_MIN;
	int32_t t107 = -1;

    t107 = (x429==(x430>(x431^x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = INT64_MAX;
	uint16_t x434 = 5844U;
	uint16_t x435 = UINT16_MAX;
	volatile int8_t x436 = INT8_MIN;
	volatile int32_t t108 = 530412;

    t108 = (x433==(x434>(x435^x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = 510U;
	int8_t x438 = 5;
	static uint16_t x439 = 0U;
	uint32_t x440 = 61760U;
	volatile int32_t t109 = 103548083;

    t109 = (x437==(x438>(x439^x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x441 = 130;
	static int32_t x443 = -1;
	static int32_t x444 = INT32_MIN;
	volatile int32_t t110 = -45665895;

    t110 = (x441==(x442>(x443^x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x445 = INT16_MIN;
	volatile uint8_t x447 = 5U;
	volatile int32_t t111 = -14534226;

    t111 = (x445==(x446>(x447^x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x450 = 19U;
	static int16_t x451 = INT16_MAX;
	uint8_t x452 = 9U;
	int32_t t112 = -55118497;

    t112 = (x449==(x450>(x451^x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x453 = INT32_MIN;
	static int8_t x455 = 8;
	static uint64_t x456 = UINT64_MAX;
	static int32_t t113 = 47380;

    t113 = (x453==(x454>(x455^x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = INT64_MAX;
	int64_t x458 = INT64_MIN;
	volatile int8_t x459 = -13;
	static int16_t x460 = INT16_MIN;
	volatile int32_t t114 = 105350;

    t114 = (x457==(x458>(x459^x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MIN;
	int64_t x462 = 1726LL;
	static uint32_t x464 = 152547923U;
	volatile int32_t t115 = -3742665;

    t115 = (x461==(x462>(x463^x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x466 = UINT16_MAX;
	static volatile int16_t x467 = INT16_MIN;
	static int8_t x468 = -8;
	volatile int32_t t116 = 639294;

    t116 = (x465==(x466>(x467^x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x469 = 15U;
	static uint32_t x470 = 13213410U;
	static int8_t x471 = -1;
	volatile uint64_t x472 = 3431LLU;

    t117 = (x469==(x470>(x471^x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x473 = 109;
	int16_t x474 = -1;
	int16_t x476 = 1;
	static volatile int32_t t118 = -10577260;

    t118 = (x473==(x474>(x475^x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = -517999818;
	int16_t x478 = INT16_MIN;
	volatile int8_t x479 = INT8_MIN;
	int64_t x480 = INT64_MIN;
	int32_t t119 = -229;

    t119 = (x477==(x478>(x479^x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = 0;
	int64_t x482 = -1LL;
	volatile int8_t x484 = INT8_MIN;
	volatile int32_t t120 = 7699974;

    t120 = (x481==(x482>(x483^x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int32_t x486 = INT32_MIN;
	int8_t x487 = INT8_MIN;
	volatile int32_t x488 = INT32_MIN;
	int32_t t121 = 3260673;

    t121 = (x485==(x486>(x487^x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x489 = INT32_MIN;
	uint8_t x490 = 13U;
	uint8_t x491 = UINT8_MAX;
	uint64_t x492 = UINT64_MAX;
	volatile int32_t t122 = 1;

    t122 = (x489==(x490>(x491^x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = 262LL;
	uint8_t x494 = 8U;
	int16_t x496 = -1;
	volatile int32_t t123 = -45;

    t123 = (x493==(x494>(x495^x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x498 = -58770;
	int16_t x499 = INT16_MIN;

    t124 = (x497==(x498>(x499^x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = 1;
	int64_t x503 = -1LL;
	volatile int32_t t125 = 14904755;

    t125 = (x501==(x502>(x503^x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x506 = UINT16_MAX;
	int32_t x507 = INT32_MIN;
	int32_t x508 = 60994645;
	volatile int32_t t126 = -27529165;

    t126 = (x505==(x506>(x507^x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x509 = UINT64_MAX;
	int8_t x510 = 13;
	volatile int32_t t127 = -1;

    t127 = (x509==(x510>(x511^x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = -69892914;
	int8_t x515 = INT8_MIN;
	volatile uint64_t x516 = 1348619734122164654LLU;
	volatile int32_t t128 = 25;

    t128 = (x513==(x514>(x515^x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x517 = INT64_MAX;
	int16_t x519 = 7780;
	volatile int64_t x520 = INT64_MIN;
	int32_t t129 = 31;

    t129 = (x517==(x518>(x519^x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x521 = -77117218983LL;
	uint8_t x523 = 0U;
	static int32_t x524 = INT32_MAX;
	volatile int32_t t130 = 53;

    t130 = (x521==(x522>(x523^x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = UINT8_MAX;
	uint16_t x526 = 84U;
	int64_t x527 = INT64_MIN;

    t131 = (x525==(x526>(x527^x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x530 = 27188LLU;
	uint64_t x531 = UINT64_MAX;
	int64_t x532 = INT64_MIN;
	int32_t t132 = -49509799;

    t132 = (x529==(x530>(x531^x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x533 = 12U;
	uint16_t x534 = 13088U;
	int8_t x535 = INT8_MIN;
	int32_t t133 = 94623275;

    t133 = (x533==(x534>(x535^x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = -174;
	int32_t x538 = INT32_MIN;
	int8_t x539 = INT8_MIN;
	uint8_t x540 = 46U;
	int32_t t134 = 0;

    t134 = (x537==(x538>(x539^x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x541 = 5950670045587384LLU;
	int16_t x543 = -2005;
	static volatile int8_t x544 = 1;

    t135 = (x541==(x542>(x543^x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x546 = 4;
	int32_t x548 = -1;
	static volatile int32_t t136 = -2;

    t136 = (x545==(x546>(x547^x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MAX;
	uint32_t x550 = 1204560239U;
	uint32_t x551 = 829U;
	static int8_t x552 = -1;
	volatile int32_t t137 = -57482;

    t137 = (x549==(x550>(x551^x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x553 = -1;
	static int16_t x554 = -151;
	static uint64_t x555 = 147454365LLU;
	int32_t x556 = -1;
	int32_t t138 = 446170777;

    t138 = (x553==(x554>(x555^x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x557 = -490465650;
	int16_t x559 = -1;

    t139 = (x557==(x558>(x559^x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x562 = UINT32_MAX;
	int32_t x563 = -16531373;
	int64_t x564 = INT64_MIN;

    t140 = (x561==(x562>(x563^x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x566 = INT16_MIN;
	static uint16_t x568 = 20U;
	volatile int32_t t141 = -1;

    t141 = (x565==(x566>(x567^x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = -4;
	int64_t x570 = INT64_MIN;
	uint32_t x571 = UINT32_MAX;
	uint16_t x572 = 2U;
	volatile int32_t t142 = 3634665;

    t142 = (x569==(x570>(x571^x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x573 = INT64_MAX;
	uint64_t x574 = UINT64_MAX;
	int8_t x575 = INT8_MAX;
	int64_t x576 = INT64_MAX;
	volatile int32_t t143 = -281650361;

    t143 = (x573==(x574>(x575^x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = -3;
	int32_t x578 = INT32_MAX;
	volatile int8_t x579 = 0;
	volatile int32_t t144 = -2984307;

    t144 = (x577==(x578>(x579^x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x582 = INT8_MIN;
	uint16_t x583 = UINT16_MAX;
	int32_t x584 = INT32_MIN;
	int32_t t145 = 196541;

    t145 = (x581==(x582>(x583^x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = -1;
	int64_t x586 = INT64_MIN;
	int16_t x587 = INT16_MIN;
	volatile int8_t x588 = INT8_MIN;
	static int32_t t146 = 862664384;

    t146 = (x585==(x586>(x587^x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	static int32_t x590 = -317364;
	volatile uint32_t x591 = 987614464U;
	static int8_t x592 = INT8_MIN;
	volatile int32_t t147 = 5;

    t147 = (x589==(x590>(x591^x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x593 = -1;
	int8_t x594 = INT8_MAX;
	int16_t x596 = INT16_MIN;
	volatile int32_t t148 = -10996340;

    t148 = (x593==(x594>(x595^x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x599 = INT8_MAX;
	int16_t x600 = INT16_MIN;
	volatile int32_t t149 = -107;

    t149 = (x597==(x598>(x599^x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x601 = INT16_MAX;
	static volatile uint64_t x602 = 7134234LLU;
	volatile int8_t x604 = INT8_MIN;
	volatile int32_t t150 = -13092964;

    t150 = (x601==(x602>(x603^x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x605 = -1;
	static int16_t x606 = INT16_MIN;
	uint64_t x607 = UINT64_MAX;
	uint32_t x608 = 136U;
	volatile int32_t t151 = -584841;

    t151 = (x605==(x606>(x607^x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x609 = 2388LLU;
	int16_t x611 = INT16_MIN;
	uint32_t x612 = 13126276U;
	int32_t t152 = 1;

    t152 = (x609==(x610>(x611^x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -1;
	int64_t x614 = INT64_MIN;
	uint64_t x615 = 99527991414437LLU;
	int32_t t153 = -4;

    t153 = (x613==(x614>(x615^x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = 180;
	int32_t x618 = 1;
	static int64_t x619 = INT64_MAX;
	int64_t x620 = -371898589LL;
	static int32_t t154 = -688;

    t154 = (x617==(x618>(x619^x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x621 = INT16_MIN;
	static int64_t x622 = -1LL;
	int32_t x623 = INT32_MIN;
	static uint32_t x624 = 2896U;
	int32_t t155 = 1069920388;

    t155 = (x621==(x622>(x623^x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x625 = 21645834328292LLU;
	uint32_t x626 = UINT32_MAX;
	uint16_t x627 = UINT16_MAX;
	volatile int32_t t156 = -3;

    t156 = (x625==(x626>(x627^x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = -1;
	static int64_t x630 = 173LL;
	static int8_t x631 = 7;
	static int16_t x632 = INT16_MAX;
	static int32_t t157 = 1;

    t157 = (x629==(x630>(x631^x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	int16_t x634 = INT16_MIN;
	int16_t x635 = INT16_MAX;
	int8_t x636 = -1;
	int32_t t158 = 256188793;

    t158 = (x633==(x634>(x635^x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x637 = 3649LLU;
	int32_t x638 = -1;
	int32_t x640 = INT32_MIN;
	static volatile int32_t t159 = 26;

    t159 = (x637==(x638>(x639^x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = 50LLU;
	int32_t x642 = -1;
	volatile int8_t x644 = -1;
	int32_t t160 = -456268;

    t160 = (x641==(x642>(x643^x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x646 = -7;
	int16_t x647 = 34;
	static uint8_t x648 = 13U;
	volatile int32_t t161 = -7441339;

    t161 = (x645==(x646>(x647^x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = 10U;
	int8_t x651 = INT8_MIN;
	static uint32_t x652 = 13U;
	int32_t t162 = 336932471;

    t162 = (x649==(x650>(x651^x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x653 = UINT32_MAX;
	int8_t x654 = 51;
	int32_t x655 = -1;
	volatile int32_t x656 = INT32_MIN;
	volatile int32_t t163 = -2;

    t163 = (x653==(x654>(x655^x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = -1LL;
	static volatile uint16_t x658 = 64U;
	uint16_t x659 = 1U;
	int32_t x660 = INT32_MAX;
	volatile int32_t t164 = -151;

    t164 = (x657==(x658>(x659^x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = 54;
	static uint64_t x662 = 370199925655191501LLU;
	volatile int16_t x663 = -142;
	static int16_t x664 = INT16_MIN;
	int32_t t165 = -192022298;

    t165 = (x661==(x662>(x663^x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x668 = -1;
	int32_t t166 = -124421987;

    t166 = (x665==(x666>(x667^x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 253U;
	volatile int64_t x670 = -51312777626664960LL;
	static uint8_t x672 = 4U;
	static int32_t t167 = 147005631;

    t167 = (x669==(x670>(x671^x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MIN;
	int64_t x675 = 372862160613343897LL;
	uint32_t x676 = UINT32_MAX;
	volatile int32_t t168 = -3792;

    t168 = (x673==(x674>(x675^x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = 25846U;
	int64_t x679 = INT64_MIN;
	int64_t x680 = INT64_MIN;
	volatile int32_t t169 = -972;

    t169 = (x677==(x678>(x679^x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MIN;
	static uint8_t x682 = 0U;
	volatile uint16_t x683 = UINT16_MAX;
	int8_t x684 = INT8_MIN;
	volatile int32_t t170 = -405186620;

    t170 = (x681==(x682>(x683^x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = 1U;
	static uint32_t x686 = UINT32_MAX;
	uint32_t x687 = 13U;
	uint8_t x688 = 5U;
	int32_t t171 = 120;

    t171 = (x685==(x686>(x687^x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x689 = 2U;
	uint8_t x690 = 3U;
	static int16_t x691 = -1;
	static int16_t x692 = INT16_MIN;
	static int32_t t172 = -2701501;

    t172 = (x689==(x690>(x691^x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	static uint16_t x694 = 0U;
	int32_t x695 = INT32_MIN;
	int16_t x696 = INT16_MIN;

    t173 = (x693==(x694>(x695^x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = 171154U;
	uint64_t x699 = UINT64_MAX;
	static int32_t x700 = INT32_MIN;
	volatile int32_t t174 = -3904161;

    t174 = (x697==(x698>(x699^x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = -10;

    t175 = (x701==(x702>(x703^x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 7U;
	int16_t x707 = 483;
	int32_t x708 = -193;
	volatile int32_t t176 = -13069177;

    t176 = (x705==(x706>(x707^x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x709 = 19999U;
	int8_t x710 = 1;
	int32_t x711 = INT32_MIN;
	volatile int32_t t177 = 36;

    t177 = (x709==(x710>(x711^x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x714 = INT64_MAX;
	int32_t x716 = 84737;
	static volatile int32_t t178 = -62;

    t178 = (x713==(x714>(x715^x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x718 = INT32_MIN;
	uint16_t x719 = 5190U;
	volatile uint8_t x720 = 1U;
	static volatile int32_t t179 = -21;

    t179 = (x717==(x718>(x719^x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x721 = -6390;
	int32_t x722 = 4720;
	int8_t x723 = INT8_MIN;
	static int64_t x724 = INT64_MIN;
	int32_t t180 = 31772;

    t180 = (x721==(x722>(x723^x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x725 = UINT32_MAX;
	volatile int16_t x726 = INT16_MAX;
	int16_t x727 = -1;
	int32_t t181 = 28924;

    t181 = (x725==(x726>(x727^x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = INT8_MIN;
	volatile uint32_t x730 = 15U;
	int64_t x731 = 180842925117196LL;
	int8_t x732 = INT8_MIN;
	volatile int32_t t182 = 38;

    t182 = (x729==(x730>(x731^x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x733 = UINT16_MAX;
	static volatile int64_t x734 = INT64_MAX;
	uint16_t x736 = UINT16_MAX;

    t183 = (x733==(x734>(x735^x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x737 = 12U;
	int32_t x738 = -60;
	static volatile int8_t x740 = INT8_MIN;
	volatile int32_t t184 = 2193;

    t184 = (x737==(x738>(x739^x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MAX;
	static volatile int64_t x742 = INT64_MAX;
	static int16_t x743 = -160;
	uint16_t x744 = UINT16_MAX;

    t185 = (x741==(x742>(x743^x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = INT16_MAX;
	static volatile int8_t x747 = 0;
	static uint8_t x748 = 4U;
	int32_t t186 = 75;

    t186 = (x745==(x746>(x747^x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x749 = INT64_MIN;
	static int32_t x750 = -1;
	volatile uint32_t x752 = 5101U;

    t187 = (x749==(x750>(x751^x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x753 = INT32_MIN;
	uint64_t x754 = 22796805997712LLU;
	static int64_t x755 = 227031467041589LL;
	int32_t x756 = INT32_MIN;
	int32_t t188 = 230;

    t188 = (x753==(x754>(x755^x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x758 = 146U;
	uint32_t x759 = 1U;
	static uint32_t x760 = 37U;
	volatile int32_t t189 = -1356200;

    t189 = (x757==(x758>(x759^x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 46U;
	int8_t x762 = INT8_MIN;
	volatile uint64_t x764 = 367384954510LLU;
	volatile int32_t t190 = 133599086;

    t190 = (x761==(x762>(x763^x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x765 = INT64_MIN;
	uint16_t x766 = 30U;
	volatile int64_t x767 = INT64_MAX;
	uint8_t x768 = 61U;

    t191 = (x765==(x766>(x767^x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x769 = -1LL;
	int64_t x770 = -1LL;
	uint32_t x771 = 1939U;
	uint16_t x772 = 917U;
	int32_t t192 = -7;

    t192 = (x769==(x770>(x771^x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x773 = 28750;
	static uint16_t x775 = 5U;
	volatile int8_t x776 = -37;
	volatile int32_t t193 = 3207;

    t193 = (x773==(x774>(x775^x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x777 = INT16_MIN;
	int8_t x778 = INT8_MIN;
	volatile uint64_t x779 = 122LLU;
	volatile int32_t t194 = -1;

    t194 = (x777==(x778>(x779^x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = 136952;
	int64_t x782 = INT64_MAX;
	static int32_t x783 = -1;
	int64_t x784 = 536674LL;
	static volatile int32_t t195 = -55059;

    t195 = (x781==(x782>(x783^x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = INT8_MAX;
	int64_t x786 = -110486LL;
	uint64_t x787 = 9624657640082LLU;
	int8_t x788 = 1;
	static int32_t t196 = -784815;

    t196 = (x785==(x786>(x787^x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x789 = INT8_MIN;
	volatile int8_t x791 = INT8_MIN;

    t197 = (x789==(x790>(x791^x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x793 = 1U;
	int64_t x794 = -1LL;
	int16_t x795 = 7;

    t198 = (x793==(x794>(x795^x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 606027172U;
	uint64_t x798 = UINT64_MAX;
	int16_t x799 = -196;
	uint16_t x800 = 7U;
	static volatile int32_t t199 = 33765;

    t199 = (x797==(x798>(x799^x800)));

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


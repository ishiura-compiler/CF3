
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

int8_t x1 = -1;
volatile int32_t x5 = INT32_MIN;
int64_t x7 = 196236879654574273LL;
volatile int8_t x13 = INT8_MAX;
int32_t x18 = 1;
static int8_t x20 = INT8_MIN;
uint8_t x27 = UINT8_MAX;
volatile int16_t x33 = INT16_MIN;
int64_t x40 = -199120591LL;
int32_t t10 = 3;
int16_t x56 = -1;
int8_t x57 = INT8_MIN;
static volatile int8_t x60 = INT8_MIN;
volatile int32_t t14 = -30689262;
int64_t x63 = INT64_MIN;
static volatile int64_t t15 = -941665LL;
volatile uint16_t x68 = 498U;
static uint64_t x83 = UINT64_MAX;
uint32_t x90 = 5U;
int64_t x95 = -1LL;
int64_t x98 = INT64_MIN;
int64_t t24 = -74300LL;
static int64_t x104 = 252729721814LL;
static int64_t x106 = -1LL;
uint32_t x107 = 3374834U;
int16_t x110 = 2731;
uint8_t x113 = 1U;
volatile int64_t x114 = -1LL;
int16_t x122 = INT16_MIN;
volatile int8_t x124 = 7;
int64_t x126 = -1233877580529LL;
int64_t t31 = 993LL;
int16_t x150 = 8125;
uint64_t x163 = 2589727594412LLU;
volatile int8_t x179 = 0;
int32_t x181 = 2;
static int8_t x194 = INT8_MIN;
int64_t t48 = 86560LL;
int8_t x200 = INT8_MIN;
int32_t t49 = 52;
int16_t x212 = INT16_MAX;
static int32_t t52 = 1;
uint64_t x216 = 107LLU;
static int16_t x222 = 3;
int32_t t55 = -16;
int16_t x231 = INT16_MIN;
uint64_t t58 = 19914499333046LLU;
static int32_t x242 = 7;
int32_t x251 = INT32_MIN;
int32_t x254 = -1;
int16_t x257 = 0;
int8_t x258 = 1;
int8_t x260 = INT8_MIN;
int64_t x279 = INT64_MAX;
int16_t x281 = 2;
volatile int64_t x287 = INT64_MIN;
int8_t x290 = INT8_MIN;
int16_t x293 = INT16_MIN;
static int32_t t74 = 0;
int8_t x302 = 0;
static uint8_t x304 = 0U;
static int32_t x311 = -354;
volatile int16_t x314 = 2;
int8_t x316 = INT8_MIN;
static uint8_t x318 = 102U;
int32_t x324 = -1;
static volatile int32_t t80 = -134702285;
int32_t x325 = INT32_MIN;
static int64_t x335 = INT64_MAX;
int16_t x336 = INT16_MIN;
uint32_t x340 = UINT32_MAX;
volatile int16_t x346 = INT16_MAX;
int8_t x350 = INT8_MAX;
int32_t x353 = -1;
int32_t t88 = 3563917;
uint64_t x357 = UINT64_MAX;
static int8_t x358 = -1;
uint32_t x361 = 305978U;
volatile int32_t t90 = 1;
volatile int32_t t91 = 11192820;
int32_t x371 = INT32_MAX;
int8_t x374 = -1;
int8_t x375 = INT8_MIN;
volatile uint16_t x381 = 112U;
uint8_t x388 = UINT8_MAX;
uint16_t x394 = 10973U;
volatile int64_t t98 = -2021LL;
volatile int16_t x398 = INT16_MIN;
uint64_t t101 = 1487890488729556772LLU;
int8_t x417 = 1;
int32_t t105 = -2603;
volatile uint8_t x435 = UINT8_MAX;
static uint64_t x436 = 2783276LLU;
uint32_t x441 = UINT32_MAX;
int64_t x452 = INT64_MIN;
int16_t x456 = -26;
uint16_t x458 = UINT16_MAX;
uint32_t x461 = UINT32_MAX;
int64_t t115 = 319LL;
uint16_t x465 = 202U;
volatile int64_t x466 = INT64_MAX;
static uint16_t x468 = 1U;
volatile uint32_t t116 = 11211U;
static int16_t x470 = -1;
int32_t t118 = 2523710;
int32_t x477 = -1;
int64_t x478 = -1LL;
static int32_t t119 = -5;
uint8_t x483 = 4U;
static volatile uint64_t x484 = UINT64_MAX;
int8_t x488 = 1;
static volatile int32_t t121 = -213596;
volatile int32_t x489 = -268278;
int8_t x490 = INT8_MAX;
static volatile uint64_t t123 = 2594805445638354LLU;
int32_t t124 = 392;
int64_t t125 = 3LL;
uint32_t t126 = 69023U;
uint32_t t127 = 7407609U;
static uint32_t t128 = 5867494U;
int32_t x519 = 2;
uint64_t t129 = 1652LLU;
static int16_t x521 = INT16_MAX;
uint64_t t130 = 175LLU;
int16_t x527 = INT16_MIN;
int64_t x532 = -1LL;
static int32_t x540 = -1;
int8_t x541 = INT8_MIN;
uint32_t t137 = 18U;
int16_t x561 = INT16_MIN;
int64_t x566 = 11LL;
volatile int32_t t141 = 48;
uint64_t x571 = UINT64_MAX;
int32_t t143 = 116267;
uint64_t x580 = 13161LLU;
uint16_t x581 = UINT16_MAX;
static volatile int32_t t145 = 139;
volatile int16_t x585 = INT16_MIN;
int16_t x588 = INT16_MIN;
volatile int16_t x590 = 0;
int8_t x594 = -1;
uint16_t x597 = UINT16_MAX;
int8_t x598 = INT8_MIN;
volatile int16_t x599 = INT16_MIN;
int32_t x600 = INT32_MIN;
volatile int32_t t149 = 18206;
static volatile int8_t x601 = INT8_MIN;
int64_t x607 = 11800068LL;
static volatile int64_t x608 = 9900832498597948LL;
volatile uint16_t x610 = UINT16_MAX;
uint32_t x619 = UINT32_MAX;
int8_t x623 = INT8_MAX;
int8_t x627 = INT8_MAX;
uint16_t x628 = 47U;
int32_t t156 = 25397;
volatile uint32_t x633 = 381877U;
uint64_t x638 = 2LLU;
int16_t x641 = INT16_MAX;
static int32_t x643 = 1159;
uint64_t t161 = 4979140387983LLU;
int8_t x652 = 54;
static volatile int64_t x654 = 85385802003LL;
static int64_t x655 = -450988LL;
int16_t x660 = INT16_MAX;
volatile int8_t x661 = INT8_MIN;
uint64_t x669 = UINT64_MAX;
int16_t x671 = -2423;
static int8_t x672 = INT8_MAX;
volatile int16_t x674 = INT16_MIN;
int32_t t168 = -3;
int8_t x688 = INT8_MIN;
int32_t x694 = INT32_MAX;
int16_t x696 = 0;
uint8_t x697 = 1U;
uint64_t x699 = 147034565LLU;
int32_t x703 = 3;
static int8_t x705 = INT8_MAX;
int16_t x707 = INT16_MIN;
volatile int32_t x721 = 111032703;
volatile int32_t t181 = 6711909;
int64_t x734 = INT64_MIN;
int16_t x739 = INT16_MAX;
static int32_t t184 = -1998;
int64_t x742 = INT64_MAX;
int16_t x760 = INT16_MIN;
int8_t x766 = -1;
int32_t t192 = -417;
volatile int16_t x774 = INT16_MIN;
int8_t x780 = INT8_MAX;
int64_t x781 = -278094454290280LL;
int32_t x782 = 13413710;
int8_t x783 = INT8_MIN;
uint64_t x792 = 26740018694021218LLU;


void f0(void) {
    	int64_t x2 = -1LL;
	static int64_t x3 = INT64_MIN;
	volatile int64_t x4 = 64093885394646364LL;
	int64_t t0 = 77LL;

    t0 = ((x1==x2)*(x3^x4));

    if (t0 != -9159278151460129444LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x6 = 88U;
	int16_t x8 = INT16_MIN;
	int64_t t1 = 15038529LL;

    t1 = ((x5==x6)*(x7^x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = INT8_MIN;
	int16_t x10 = -1;
	static volatile int32_t x11 = 95500738;
	int64_t x12 = INT64_MAX;
	int64_t t2 = -133336408776709LL;

    t2 = ((x9==x10)*(x11^x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint64_t x14 = 106703480489960574LLU;
	int16_t x15 = INT16_MIN;
	static int64_t x16 = INT64_MAX;
	static volatile int64_t t3 = -6929LL;

    t3 = ((x13==x14)*(x15^x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x17 = 54284681LLU;
	int64_t x19 = INT64_MIN;
	volatile int64_t t4 = 272749662253900LL;

    t4 = ((x17==x18)*(x19^x20));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -54;
	uint8_t x22 = 11U;
	int64_t x23 = INT64_MAX;
	static int8_t x24 = INT8_MAX;
	volatile int64_t t5 = 3131LL;

    t5 = ((x21==x22)*(x23^x24));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 15U;
	volatile uint16_t x26 = UINT16_MAX;
	uint8_t x28 = UINT8_MAX;
	int32_t t6 = -427;

    t6 = ((x25==x26)*(x27^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	static int16_t x30 = INT16_MIN;
	int32_t x31 = -1006651;
	volatile int64_t x32 = -1LL;
	int64_t t7 = -22246LL;

    t7 = ((x29==x30)*(x31^x32));

    if (t7 != 1006650LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x34 = -1LL;
	static uint8_t x35 = 2U;
	volatile int8_t x36 = INT8_MIN;
	int32_t t8 = -1;

    t8 = ((x33==x34)*(x35^x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	static uint8_t x38 = 109U;
	int32_t x39 = INT32_MIN;
	static volatile int64_t t9 = 1250128201574930LL;

    t9 = ((x37==x38)*(x39^x40));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MAX;
	int64_t x42 = INT64_MAX;
	volatile int16_t x43 = INT16_MAX;
	int16_t x44 = -1;

    t10 = ((x41==x42)*(x43^x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x45 = 25U;
	int64_t x46 = -1093441923849LL;
	uint64_t x47 = UINT64_MAX;
	int16_t x48 = INT16_MIN;
	uint64_t t11 = 308393LLU;

    t11 = ((x45==x46)*(x47^x48));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	uint16_t x50 = UINT16_MAX;
	volatile int32_t x51 = INT32_MAX;
	uint32_t x52 = 15712U;
	volatile uint32_t t12 = 202365093U;

    t12 = ((x49==x50)*(x51^x52));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = 5;
	int8_t x54 = -1;
	volatile int32_t x55 = INT32_MIN;
	volatile int32_t t13 = -149456277;

    t13 = ((x53==x54)*(x55^x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int16_t x58 = 0;
	static int16_t x59 = INT16_MAX;

    t14 = ((x57==x58)*(x59^x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	int8_t x62 = INT8_MIN;
	int64_t x64 = INT64_MIN;

    t15 = ((x61==x62)*(x63^x64));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = 3;
	uint8_t x66 = 90U;
	uint64_t x67 = 0LLU;
	static volatile uint64_t t16 = 32907017LLU;

    t16 = ((x65==x66)*(x67^x68));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 3LLU;
	int16_t x70 = INT16_MIN;
	uint16_t x71 = 1U;
	uint32_t x72 = 705508955U;
	uint32_t t17 = 41072U;

    t17 = ((x69==x70)*(x71^x72));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = 549995869222510763LL;
	static uint32_t x74 = UINT32_MAX;
	uint8_t x75 = 12U;
	uint16_t x76 = UINT16_MAX;
	static int32_t t18 = 31008275;

    t18 = ((x73==x74)*(x75^x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 77488090U;
	uint64_t x78 = 3434674559LLU;
	int64_t x79 = -85LL;
	int16_t x80 = -1;
	volatile int64_t t19 = -3LL;

    t19 = ((x77==x78)*(x79^x80));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint16_t x81 = UINT16_MAX;
	int32_t x82 = INT32_MIN;
	uint16_t x84 = 5485U;
	static volatile uint64_t t20 = 4513LLU;

    t20 = ((x81==x82)*(x83^x84));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MAX;
	volatile int16_t x86 = -1;
	static int64_t x87 = INT64_MIN;
	uint16_t x88 = 539U;
	static int64_t t21 = -46865935428LL;

    t21 = ((x85==x86)*(x87^x88));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = UINT64_MAX;
	int8_t x91 = 9;
	uint64_t x92 = UINT64_MAX;
	uint64_t t22 = 3585886596LLU;

    t22 = ((x89==x90)*(x91^x92));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	uint32_t x94 = UINT32_MAX;
	volatile uint8_t x96 = UINT8_MAX;
	volatile int64_t t23 = -33387526012259LL;

    t23 = ((x93==x94)*(x95^x96));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MIN;
	volatile int32_t x99 = INT32_MIN;
	int64_t x100 = INT64_MAX;

    t24 = ((x97==x98)*(x99^x100));

    if (t24 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -165;
	int64_t x102 = -3152893947435LL;
	int8_t x103 = 61;
	static volatile int64_t t25 = -48LL;

    t25 = ((x101==x102)*(x103^x104));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 904U;
	int32_t x108 = -207149;
	static uint32_t t26 = 820431U;

    t26 = ((x105==x106)*(x107^x108));

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x109 = -1;
	static int64_t x111 = INT64_MIN;
	uint8_t x112 = UINT8_MAX;
	static volatile int64_t t27 = -206195144373375735LL;

    t27 = ((x109==x110)*(x111^x112));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x115 = INT64_MIN;
	volatile uint8_t x116 = 97U;
	static int64_t t28 = 1LL;

    t28 = ((x113==x114)*(x115^x116));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	int64_t x118 = INT64_MAX;
	uint32_t x119 = UINT32_MAX;
	int8_t x120 = INT8_MAX;
	uint32_t t29 = 3074U;

    t29 = ((x117==x118)*(x119^x120));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x121 = INT8_MIN;
	int32_t x123 = INT32_MIN;
	volatile int32_t t30 = 1114942;

    t30 = ((x121==x122)*(x123^x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -1;
	volatile int64_t x127 = -1LL;
	int16_t x128 = -1;

    t31 = ((x125==x126)*(x127^x128));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -1LL;
	int64_t x130 = INT64_MAX;
	int16_t x131 = INT16_MAX;
	static volatile int64_t x132 = INT64_MIN;
	static int64_t t32 = -5LL;

    t32 = ((x129==x130)*(x131^x132));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -1;
	int32_t x134 = 1;
	static volatile uint8_t x135 = 12U;
	int32_t x136 = INT32_MAX;
	volatile int32_t t33 = -134641635;

    t33 = ((x133==x134)*(x135^x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x137 = UINT64_MAX;
	int32_t x138 = INT32_MIN;
	uint16_t x139 = 3534U;
	static uint8_t x140 = 1U;
	volatile int32_t t34 = 5393630;

    t34 = ((x137==x138)*(x139^x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x141 = INT16_MIN;
	volatile int8_t x142 = 1;
	static int64_t x143 = -1LL;
	static volatile int8_t x144 = 1;
	int64_t t35 = 586934324LL;

    t35 = ((x141==x142)*(x143^x144));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = 53U;
	int8_t x146 = INT8_MIN;
	int32_t x147 = -2846065;
	uint16_t x148 = 201U;
	int32_t t36 = -19617;

    t36 = ((x145==x146)*(x147^x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = 14U;
	uint64_t x151 = UINT64_MAX;
	int32_t x152 = INT32_MIN;
	volatile uint64_t t37 = 4537598071788857LLU;

    t37 = ((x149==x150)*(x151^x152));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = 206LLU;
	uint32_t x154 = 7265056U;
	static int32_t x155 = INT32_MAX;
	static uint8_t x156 = 44U;
	volatile int32_t t38 = 362447292;

    t38 = ((x153==x154)*(x155^x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x157 = 1090LLU;
	int8_t x158 = INT8_MAX;
	int32_t x159 = 98763;
	static int8_t x160 = -1;
	static int32_t t39 = 791446381;

    t39 = ((x157==x158)*(x159^x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MAX;
	static uint8_t x162 = 21U;
	int32_t x164 = INT32_MIN;
	volatile uint64_t t40 = 226LLU;

    t40 = ((x161==x162)*(x163^x164));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = -1;
	int64_t x166 = 3585455401834716LL;
	volatile uint64_t x167 = 15LLU;
	uint64_t x168 = UINT64_MAX;
	uint64_t t41 = 62711LLU;

    t41 = ((x165==x166)*(x167^x168));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MIN;
	int32_t x170 = -167808;
	uint32_t x171 = 940256420U;
	static int8_t x172 = INT8_MAX;
	uint32_t t42 = 972636863U;

    t42 = ((x169==x170)*(x171^x172));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = INT16_MIN;
	static volatile uint8_t x174 = 5U;
	uint16_t x175 = UINT16_MAX;
	int64_t x176 = INT64_MAX;
	volatile int64_t t43 = 15LL;

    t43 = ((x173==x174)*(x175^x176));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x177 = INT32_MIN;
	int64_t x178 = -1050372557673LL;
	volatile uint8_t x180 = UINT8_MAX;
	volatile int32_t t44 = -30485870;

    t44 = ((x177==x178)*(x179^x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x182 = 89U;
	volatile int32_t x183 = 8;
	int16_t x184 = -233;
	volatile int32_t t45 = -5890357;

    t45 = ((x181==x182)*(x183^x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = -1LL;
	int64_t x186 = INT64_MAX;
	int8_t x187 = -21;
	static uint64_t x188 = 89780LLU;
	volatile uint64_t t46 = 5654439670376LLU;

    t46 = ((x185==x186)*(x187^x188));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x189 = INT32_MIN;
	volatile int32_t x190 = INT32_MAX;
	static uint8_t x191 = 115U;
	int32_t x192 = 0;
	volatile int32_t t47 = -961851;

    t47 = ((x189==x190)*(x191^x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = 1695U;
	int8_t x195 = -1;
	static int64_t x196 = -1LL;

    t48 = ((x193==x194)*(x195^x196));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	volatile int32_t x198 = 2;
	volatile uint16_t x199 = 679U;

    t49 = ((x197==x198)*(x199^x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MAX;
	int64_t x202 = -1LL;
	int64_t x203 = INT64_MAX;
	int16_t x204 = INT16_MIN;
	int64_t t50 = -1224696851144173029LL;

    t50 = ((x201==x202)*(x203^x204));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x205 = UINT8_MAX;
	uint32_t x206 = 15083606U;
	static int8_t x207 = -1;
	static volatile int32_t x208 = -1;
	int32_t t51 = 7057;

    t51 = ((x205==x206)*(x207^x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = -1;
	volatile int16_t x210 = INT16_MIN;
	static volatile int16_t x211 = 5212;

    t52 = ((x209==x210)*(x211^x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	uint16_t x214 = UINT16_MAX;
	volatile int16_t x215 = INT16_MAX;
	static volatile uint64_t t53 = 8226075981885LLU;

    t53 = ((x213==x214)*(x215^x216));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x217 = 18350347077LLU;
	static int32_t x218 = 3;
	static int16_t x219 = INT16_MIN;
	static volatile int16_t x220 = -2506;
	static volatile int32_t t54 = 57;

    t54 = ((x217==x218)*(x219^x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = UINT64_MAX;
	int32_t x223 = INT32_MIN;
	uint8_t x224 = UINT8_MAX;

    t55 = ((x221==x222)*(x223^x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 119U;
	int64_t x226 = 44249660819LL;
	volatile int32_t x227 = INT32_MIN;
	int64_t x228 = INT64_MIN;
	volatile int64_t t56 = -551051971308981199LL;

    t56 = ((x225==x226)*(x227^x228));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x229 = 2U;
	static uint8_t x230 = 1U;
	uint32_t x232 = 17186310U;
	static volatile uint32_t t57 = 14U;

    t57 = ((x229==x230)*(x231^x232));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x233 = -6;
	static uint64_t x234 = UINT64_MAX;
	uint32_t x235 = 542U;
	uint64_t x236 = 11061LLU;

    t58 = ((x233==x234)*(x235^x236));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x237 = 68U;
	static int32_t x238 = INT32_MAX;
	int64_t x239 = INT64_MIN;
	int32_t x240 = 218219476;
	int64_t t59 = -32855517LL;

    t59 = ((x237==x238)*(x239^x240));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = -3;
	int8_t x243 = INT8_MIN;
	volatile int16_t x244 = INT16_MAX;
	volatile int32_t t60 = 20;

    t60 = ((x241==x242)*(x243^x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MIN;
	static int8_t x246 = -3;
	int16_t x247 = INT16_MIN;
	uint64_t x248 = 98LLU;
	uint64_t t61 = 1LLU;

    t61 = ((x245==x246)*(x247^x248));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int32_t x249 = INT32_MAX;
	int64_t x250 = -1LL;
	int8_t x252 = 12;
	int32_t t62 = -323260390;

    t62 = ((x249==x250)*(x251^x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x253 = UINT16_MAX;
	int32_t x255 = -552687534;
	volatile int16_t x256 = 0;
	int32_t t63 = 3820092;

    t63 = ((x253==x254)*(x255^x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int8_t x259 = INT8_MIN;
	int32_t t64 = 10;

    t64 = ((x257==x258)*(x259^x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x261 = -1047;
	static volatile int16_t x262 = -1;
	volatile int32_t x263 = INT32_MIN;
	int32_t x264 = -1;
	volatile int32_t t65 = 77080;

    t65 = ((x261==x262)*(x263^x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x265 = UINT8_MAX;
	uint8_t x266 = 59U;
	static int8_t x267 = -1;
	int8_t x268 = INT8_MAX;
	volatile int32_t t66 = 218;

    t66 = ((x265==x266)*(x267^x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x269 = 252;
	uint64_t x270 = 10483382013LLU;
	uint64_t x271 = 12960839166314LLU;
	int32_t x272 = INT32_MAX;
	volatile uint64_t t67 = 997LLU;

    t67 = ((x269==x270)*(x271^x272));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MIN;
	uint16_t x274 = UINT16_MAX;
	volatile int32_t x275 = 1;
	int16_t x276 = 1614;
	int32_t t68 = -213;

    t68 = ((x273==x274)*(x275^x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x277 = INT64_MIN;
	static uint32_t x278 = 794408U;
	uint8_t x280 = 115U;
	volatile int64_t t69 = 21338646LL;

    t69 = ((x277==x278)*(x279^x280));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x282 = 672069546216LL;
	int16_t x283 = INT16_MIN;
	uint64_t x284 = 21893543679063LLU;
	uint64_t t70 = 194697415877392164LLU;

    t70 = ((x281==x282)*(x283^x284));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = INT16_MAX;
	static uint32_t x286 = UINT32_MAX;
	volatile int64_t x288 = INT64_MIN;
	volatile int64_t t71 = 38938LL;

    t71 = ((x285==x286)*(x287^x288));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	volatile uint64_t x291 = 7244145763810LLU;
	int16_t x292 = 9394;
	uint64_t t72 = 165LLU;

    t72 = ((x289==x290)*(x291^x292));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x294 = INT64_MIN;
	uint64_t x295 = 127613299LLU;
	uint32_t x296 = 1U;
	static volatile uint64_t t73 = 870903241362039514LLU;

    t73 = ((x293==x294)*(x295^x296));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = INT32_MAX;
	int16_t x298 = 0;
	static uint16_t x299 = 10175U;
	int32_t x300 = -27833639;

    t74 = ((x297==x298)*(x299^x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x301 = 131347LLU;
	int16_t x303 = 3;
	volatile int32_t t75 = -652633;

    t75 = ((x301==x302)*(x303^x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MIN;
	int8_t x306 = -1;
	int16_t x307 = INT16_MIN;
	static volatile int64_t x308 = -470736890955858LL;
	volatile int64_t t76 = -82726345964566527LL;

    t76 = ((x305==x306)*(x307^x308));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MAX;
	volatile int8_t x310 = INT8_MIN;
	static uint8_t x312 = 8U;
	volatile int32_t t77 = -13364;

    t77 = ((x309==x310)*(x311^x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = 1101;
	volatile int64_t x315 = INT64_MAX;
	int64_t t78 = -477019019002687LL;

    t78 = ((x313==x314)*(x315^x316));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x317 = UINT64_MAX;
	uint8_t x319 = 6U;
	static int64_t x320 = -1LL;
	int64_t t79 = -2933648964232831901LL;

    t79 = ((x317==x318)*(x319^x320));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = 55;
	int16_t x322 = INT16_MIN;
	static uint8_t x323 = UINT8_MAX;

    t80 = ((x321==x322)*(x323^x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x326 = 7;
	int32_t x327 = 1;
	int16_t x328 = INT16_MIN;
	int32_t t81 = -1383875;

    t81 = ((x325==x326)*(x327^x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x329 = 1;
	uint8_t x330 = 3U;
	uint64_t x331 = 1409051820491644LLU;
	static uint8_t x332 = UINT8_MAX;
	volatile uint64_t t82 = 57819LLU;

    t82 = ((x329==x330)*(x331^x332));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x333 = 3483U;
	uint32_t x334 = UINT32_MAX;
	static int64_t t83 = -12920LL;

    t83 = ((x333==x334)*(x335^x336));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x337 = UINT32_MAX;
	int32_t x338 = -1;
	uint64_t x339 = UINT64_MAX;
	volatile uint64_t t84 = 208810491594LLU;

    t84 = ((x337==x338)*(x339^x340));

    if (t84 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = -1437;
	static int16_t x342 = -1;
	volatile int32_t x343 = 0;
	int32_t x344 = 286702907;
	volatile int32_t t85 = 13803;

    t85 = ((x341==x342)*(x343^x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = INT32_MIN;
	int32_t x347 = INT32_MIN;
	static int64_t x348 = INT64_MAX;
	static volatile int64_t t86 = 11903570LL;

    t86 = ((x345==x346)*(x347^x348));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = INT32_MIN;
	int8_t x351 = 5;
	int32_t x352 = INT32_MAX;
	static volatile int32_t t87 = -46645;

    t87 = ((x349==x350)*(x351^x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x354 = 5U;
	volatile uint16_t x355 = 127U;
	int32_t x356 = INT32_MAX;

    t88 = ((x353==x354)*(x355^x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x359 = INT32_MIN;
	uint64_t x360 = 42062685LLU;
	uint64_t t89 = 5167347147108556LLU;

    t89 = ((x357==x358)*(x359^x360));

    if (t89 != 18446744071604130653LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x362 = INT16_MIN;
	static uint16_t x363 = 14943U;
	int32_t x364 = 97509510;

    t90 = ((x361==x362)*(x363^x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = 2U;
	static int64_t x366 = INT64_MAX;
	int8_t x367 = INT8_MIN;
	static int8_t x368 = INT8_MAX;

    t91 = ((x365==x366)*(x367^x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = 31797U;
	int64_t x370 = 1228379LL;
	static int64_t x372 = INT64_MIN;
	volatile int64_t t92 = -27LL;

    t92 = ((x369==x370)*(x371^x372));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = 417LLU;
	int64_t x376 = 95062627LL;
	int64_t t93 = -23LL;

    t93 = ((x373==x374)*(x375^x376));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x377 = UINT64_MAX;
	int32_t x378 = INT32_MIN;
	volatile int8_t x379 = -1;
	static int32_t x380 = INT32_MAX;
	int32_t t94 = 1939;

    t94 = ((x377==x378)*(x379^x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x382 = -27715841251094682LL;
	volatile uint8_t x383 = 2U;
	uint32_t x384 = UINT32_MAX;
	volatile uint32_t t95 = 7056735U;

    t95 = ((x381==x382)*(x383^x384));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x385 = -1;
	int64_t x386 = 68179368045266LL;
	static volatile uint8_t x387 = 7U;
	volatile int32_t t96 = 0;

    t96 = ((x385==x386)*(x387^x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = 49;
	int16_t x390 = -1;
	int16_t x391 = -6730;
	uint64_t x392 = 31171787LLU;
	static volatile uint64_t t97 = 32944953917LLU;

    t97 = ((x389==x390)*(x391^x392));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x393 = INT16_MIN;
	volatile int64_t x395 = 545518556LL;
	int64_t x396 = -1LL;

    t98 = ((x393==x394)*(x395^x396));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = UINT64_MAX;
	uint32_t x399 = UINT32_MAX;
	int64_t x400 = -1106511306602837120LL;
	int64_t t99 = 1220347290666LL;

    t99 = ((x397==x398)*(x399^x400));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MIN;
	int64_t x402 = 5LL;
	static int32_t x403 = INT32_MIN;
	int16_t x404 = INT16_MAX;
	int32_t t100 = 393322;

    t100 = ((x401==x402)*(x403^x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x405 = INT64_MIN;
	int16_t x406 = INT16_MIN;
	uint64_t x407 = 8131313289293LLU;
	uint32_t x408 = 192U;

    t101 = ((x405==x406)*(x407^x408));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x409 = 6U;
	static int64_t x410 = -10662446LL;
	int16_t x411 = INT16_MAX;
	volatile uint8_t x412 = 3U;
	int32_t t102 = -6122;

    t102 = ((x409==x410)*(x411^x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = INT64_MIN;
	int64_t x414 = -1LL;
	int8_t x415 = INT8_MIN;
	int16_t x416 = INT16_MIN;
	static volatile int32_t t103 = 5990;

    t103 = ((x413==x414)*(x415^x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x418 = 15LLU;
	int16_t x419 = -1;
	int16_t x420 = INT16_MIN;
	static volatile int32_t t104 = -45139;

    t104 = ((x417==x418)*(x419^x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MAX;
	uint8_t x422 = 3U;
	static int16_t x423 = -31;
	volatile int32_t x424 = -13;

    t105 = ((x421==x422)*(x423^x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x425 = -1LL;
	uint32_t x426 = 9U;
	int8_t x427 = 0;
	volatile uint16_t x428 = UINT16_MAX;
	static int32_t t106 = -93;

    t106 = ((x425==x426)*(x427^x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x429 = 1LLU;
	uint16_t x430 = 59U;
	volatile uint8_t x431 = UINT8_MAX;
	volatile uint8_t x432 = 33U;
	int32_t t107 = 363272;

    t107 = ((x429==x430)*(x431^x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -4849165589865LL;
	volatile uint64_t x434 = 12495509LLU;
	uint64_t t108 = 1313790LLU;

    t108 = ((x433==x434)*(x435^x436));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x437 = INT64_MIN;
	int16_t x438 = -62;
	int32_t x439 = 763303094;
	static uint64_t x440 = 17861641872807LLU;
	uint64_t t109 = 90885247762LLU;

    t109 = ((x437==x438)*(x439^x440));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x442 = 638447883;
	uint8_t x443 = UINT8_MAX;
	int16_t x444 = INT16_MIN;
	static int32_t t110 = 966442102;

    t110 = ((x441==x442)*(x443^x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = 476148826LL;
	int16_t x446 = INT16_MAX;
	uint16_t x447 = UINT16_MAX;
	int64_t x448 = INT64_MIN;
	int64_t t111 = -14872LL;

    t111 = ((x445==x446)*(x447^x448));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x449 = 281400194086727LLU;
	uint16_t x450 = 0U;
	volatile int16_t x451 = -1;
	int64_t t112 = -24365641LL;

    t112 = ((x449==x450)*(x451^x452));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MAX;
	int8_t x454 = 14;
	static int16_t x455 = -1;
	int32_t t113 = 4;

    t113 = ((x453==x454)*(x455^x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 48589U;
	static volatile int32_t x459 = INT32_MAX;
	uint32_t x460 = 12U;
	uint32_t t114 = 359U;

    t114 = ((x457==x458)*(x459^x460));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x462 = -6789;
	int64_t x463 = 7061240183LL;
	int8_t x464 = INT8_MIN;

    t115 = ((x461==x462)*(x463^x464));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x467 = UINT32_MAX;

    t116 = ((x465==x466)*(x467^x468));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MIN;
	int8_t x471 = -1;
	int16_t x472 = -84;
	volatile int32_t t117 = 7;

    t117 = ((x469==x470)*(x471^x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x473 = INT32_MIN;
	uint64_t x474 = 695LLU;
	int32_t x475 = INT32_MIN;
	int32_t x476 = INT32_MIN;

    t118 = ((x473==x474)*(x475^x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x479 = UINT16_MAX;
	int8_t x480 = -1;

    t119 = ((x477==x478)*(x479^x480));

    if (t119 != -65536) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MIN;
	uint16_t x482 = UINT16_MAX;
	uint64_t t120 = 3182259LLU;

    t120 = ((x481==x482)*(x483^x484));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MIN;
	int8_t x486 = INT8_MAX;
	static uint8_t x487 = 22U;

    t121 = ((x485==x486)*(x487^x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x491 = -1;
	uint8_t x492 = 2U;
	int32_t t122 = 1384;

    t122 = ((x489==x490)*(x491^x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MIN;
	int16_t x494 = INT16_MAX;
	uint64_t x495 = UINT64_MAX;
	int16_t x496 = 3;

    t123 = ((x493==x494)*(x495^x496));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x497 = 24U;
	static int16_t x498 = 12034;
	int8_t x499 = -52;
	int16_t x500 = 0;

    t124 = ((x497==x498)*(x499^x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = -15971;
	int8_t x502 = 63;
	uint32_t x503 = UINT32_MAX;
	int64_t x504 = INT64_MIN;

    t125 = ((x501==x502)*(x503^x504));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int8_t x505 = -1;
	uint16_t x506 = UINT16_MAX;
	static uint32_t x507 = 1U;
	static volatile int8_t x508 = INT8_MIN;

    t126 = ((x505==x506)*(x507^x508));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = 39;
	uint16_t x510 = 3U;
	static int8_t x511 = 0;
	uint32_t x512 = 46085063U;

    t127 = ((x509==x510)*(x511^x512));

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x513 = -1LL;
	int16_t x514 = INT16_MIN;
	int8_t x515 = INT8_MIN;
	uint32_t x516 = 984904056U;

    t128 = ((x513==x514)*(x515^x516));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x517 = 9902925U;
	uint8_t x518 = UINT8_MAX;
	uint64_t x520 = 3812933838344676925LLU;

    t129 = ((x517==x518)*(x519^x520));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x522 = 3166U;
	uint64_t x523 = 199771920496949901LLU;
	int8_t x524 = -1;

    t130 = ((x521==x522)*(x523^x524));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = UINT16_MAX;
	uint16_t x526 = 0U;
	volatile int32_t x528 = 1901;
	static int32_t t131 = -10386;

    t131 = ((x525==x526)*(x527^x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MIN;
	int16_t x530 = INT16_MAX;
	volatile uint64_t x531 = UINT64_MAX;
	uint64_t t132 = 1638835814763LLU;

    t132 = ((x529==x530)*(x531^x532));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x533 = -4314;
	int64_t x534 = -12091695LL;
	uint16_t x535 = UINT16_MAX;
	int8_t x536 = -1;
	int32_t t133 = 32515226;

    t133 = ((x533==x534)*(x535^x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x537 = INT64_MIN;
	volatile int32_t x538 = INT32_MIN;
	int16_t x539 = -1;
	volatile int32_t t134 = 6231;

    t134 = ((x537==x538)*(x539^x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x542 = 22U;
	static int16_t x543 = INT16_MIN;
	volatile int16_t x544 = 1;
	int32_t t135 = -842442713;

    t135 = ((x541==x542)*(x543^x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = 437085U;
	uint64_t x546 = 305LLU;
	static uint32_t x547 = 468U;
	int16_t x548 = INT16_MIN;
	uint32_t t136 = 79719U;

    t136 = ((x545==x546)*(x547^x548));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MAX;
	volatile int64_t x550 = 3904472878654218LL;
	static volatile uint32_t x551 = 8101145U;
	static uint8_t x552 = 79U;

    t137 = ((x549==x550)*(x551^x552));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MAX;
	uint32_t x554 = UINT32_MAX;
	int8_t x555 = INT8_MIN;
	int16_t x556 = INT16_MIN;
	volatile int32_t t138 = 42;

    t138 = ((x553==x554)*(x555^x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = 48U;
	int32_t x558 = INT32_MAX;
	int64_t x559 = -267661518LL;
	int32_t x560 = INT32_MIN;
	int64_t t139 = -106322366LL;

    t139 = ((x557==x558)*(x559^x560));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x562 = -1;
	static volatile int32_t x563 = INT32_MIN;
	static uint16_t x564 = 74U;
	volatile int32_t t140 = -12673298;

    t140 = ((x561==x562)*(x563^x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x565 = -1LL;
	volatile int8_t x567 = INT8_MIN;
	uint16_t x568 = 2404U;

    t141 = ((x565==x566)*(x567^x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = UINT8_MAX;
	static int64_t x570 = INT64_MIN;
	uint8_t x572 = 2U;
	static volatile uint64_t t142 = 11LLU;

    t142 = ((x569==x570)*(x571^x572));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = 0;
	uint8_t x574 = UINT8_MAX;
	int8_t x575 = INT8_MIN;
	int8_t x576 = INT8_MIN;

    t143 = ((x573==x574)*(x575^x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = 5U;
	int64_t x578 = -1LL;
	static volatile int16_t x579 = INT16_MAX;
	uint64_t t144 = 436146823616297990LLU;

    t144 = ((x577==x578)*(x579^x580));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x582 = -1;
	static int8_t x583 = -1;
	int16_t x584 = INT16_MIN;

    t145 = ((x581==x582)*(x583^x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x586 = INT8_MAX;
	static volatile int64_t x587 = 2599220097583LL;
	volatile int64_t t146 = -1607229319849325LL;

    t146 = ((x585==x586)*(x587^x588));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x589 = -63;
	volatile int64_t x591 = 29180LL;
	volatile uint16_t x592 = UINT16_MAX;
	int64_t t147 = 16214214230105LL;

    t147 = ((x589==x590)*(x591^x592));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x593 = INT8_MAX;
	uint64_t x595 = 12805040360077LLU;
	int16_t x596 = 23;
	volatile uint64_t t148 = 90670909628LLU;

    t148 = ((x593==x594)*(x595^x596));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    

    t149 = ((x597==x598)*(x599^x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x602 = INT16_MAX;
	volatile int32_t x603 = INT32_MAX;
	int16_t x604 = INT16_MAX;
	static int32_t t150 = -24;

    t150 = ((x601==x602)*(x603^x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = -1;
	int32_t x606 = -1;
	static int64_t t151 = -203956796242460LL;

    t151 = ((x605==x606)*(x607^x608));

    if (t151 != 9900832509873720LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	volatile uint8_t x611 = 5U;
	uint8_t x612 = UINT8_MAX;
	int32_t t152 = 1298625;

    t152 = ((x609==x610)*(x611^x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MIN;
	static uint16_t x614 = 3U;
	uint8_t x615 = UINT8_MAX;
	int16_t x616 = 500;
	int32_t t153 = 3825;

    t153 = ((x613==x614)*(x615^x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x617 = -7;
	uint32_t x618 = 174808U;
	int32_t x620 = -29015724;
	volatile uint32_t t154 = 45021U;

    t154 = ((x617==x618)*(x619^x620));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MIN;
	int64_t x622 = INT64_MIN;
	int32_t x624 = INT32_MAX;
	static int32_t t155 = 47;

    t155 = ((x621==x622)*(x623^x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = -402777568;
	int64_t x626 = -14813594684LL;

    t156 = ((x625==x626)*(x627^x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = -3;
	static int32_t x630 = INT32_MAX;
	static uint16_t x631 = 53U;
	static volatile int64_t x632 = INT64_MIN;
	static volatile int64_t t157 = 217308537246LL;

    t157 = ((x629==x630)*(x631^x632));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x634 = UINT16_MAX;
	int64_t x635 = INT64_MAX;
	uint8_t x636 = 6U;
	volatile int64_t t158 = 1042874716LL;

    t158 = ((x633==x634)*(x635^x636));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x637 = 11U;
	uint64_t x639 = 4647498170095557LLU;
	volatile int32_t x640 = INT32_MIN;
	volatile uint64_t t159 = 2140LLU;

    t159 = ((x637==x638)*(x639^x640));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x642 = 14723U;
	static volatile int32_t x644 = INT32_MIN;
	static int32_t t160 = 8597;

    t160 = ((x641==x642)*(x643^x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = 4;
	volatile int32_t x646 = 2066425;
	uint64_t x647 = 1LLU;
	uint8_t x648 = 15U;

    t161 = ((x645==x646)*(x647^x648));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = UINT8_MAX;
	int8_t x650 = INT8_MIN;
	static int16_t x651 = INT16_MIN;
	volatile int32_t t162 = -580997;

    t162 = ((x649==x650)*(x651^x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = -1LL;
	int32_t x656 = -11419;
	int64_t t163 = 7585LL;

    t163 = ((x653==x654)*(x655^x656));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = -1LL;
	uint8_t x658 = 49U;
	static int16_t x659 = -1;
	static volatile int32_t t164 = 6345861;

    t164 = ((x657==x658)*(x659^x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x662 = 1633267330012808594LLU;
	uint64_t x663 = 5885692LLU;
	int16_t x664 = INT16_MAX;
	volatile uint64_t t165 = 10LLU;

    t165 = ((x661==x662)*(x663^x664));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = UINT8_MAX;
	uint32_t x666 = 440635U;
	int32_t x667 = 772;
	static int16_t x668 = INT16_MAX;
	static volatile int32_t t166 = -75;

    t166 = ((x665==x666)*(x667^x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x670 = 22229U;
	volatile int32_t t167 = 62;

    t167 = ((x669==x670)*(x671^x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = -1;
	int16_t x675 = INT16_MAX;
	static int32_t x676 = 2;

    t168 = ((x673==x674)*(x675^x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = -1;
	int16_t x678 = INT16_MIN;
	static volatile int32_t x679 = -9;
	uint32_t x680 = UINT32_MAX;
	uint32_t t169 = 1551592108U;

    t169 = ((x677==x678)*(x679^x680));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MAX;
	int64_t x682 = INT64_MIN;
	int8_t x683 = -6;
	static uint32_t x684 = UINT32_MAX;
	uint32_t t170 = 100358650U;

    t170 = ((x681==x682)*(x683^x684));

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = INT64_MAX;
	uint64_t x686 = 279380LLU;
	int32_t x687 = INT32_MIN;
	static int32_t t171 = -39134484;

    t171 = ((x685==x686)*(x687^x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MAX;
	int32_t x690 = -1;
	static int8_t x691 = 0;
	static uint64_t x692 = UINT64_MAX;
	volatile uint64_t t172 = 2411804382673818LLU;

    t172 = ((x689==x690)*(x691^x692));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = INT16_MAX;
	uint8_t x695 = 7U;
	volatile int32_t t173 = 15185597;

    t173 = ((x693==x694)*(x695^x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x698 = INT8_MAX;
	int64_t x700 = -1LL;
	uint64_t t174 = 12413391290LLU;

    t174 = ((x697==x698)*(x699^x700));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint64_t x701 = 8966604449482812766LLU;
	uint64_t x702 = UINT64_MAX;
	int16_t x704 = INT16_MIN;
	int32_t t175 = 15049839;

    t175 = ((x701==x702)*(x703^x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x706 = INT64_MIN;
	uint16_t x708 = 1U;
	volatile int32_t t176 = -1006;

    t176 = ((x705==x706)*(x707^x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = UINT32_MAX;
	int32_t x710 = 42;
	volatile uint32_t x711 = UINT32_MAX;
	int32_t x712 = INT32_MAX;
	uint32_t t177 = 11U;

    t177 = ((x709==x710)*(x711^x712));

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = 21U;
	int8_t x714 = 0;
	static int8_t x715 = -1;
	int16_t x716 = 117;
	static volatile int32_t t178 = -320731;

    t178 = ((x713==x714)*(x715^x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = 1U;
	int16_t x718 = 0;
	int16_t x719 = INT16_MAX;
	static int64_t x720 = INT64_MIN;
	volatile int64_t t179 = -1058990776060867LL;

    t179 = ((x717==x718)*(x719^x720));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x722 = UINT64_MAX;
	static volatile int16_t x723 = 995;
	uint32_t x724 = 881067U;
	static uint32_t t180 = 210U;

    t180 = ((x721==x722)*(x723^x724));

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x725 = UINT32_MAX;
	int16_t x726 = INT16_MIN;
	int32_t x727 = -1;
	static int32_t x728 = INT32_MAX;

    t181 = ((x725==x726)*(x727^x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 126U;
	static int16_t x730 = -4071;
	uint64_t x731 = 228679922511809LLU;
	int16_t x732 = INT16_MIN;
	uint64_t t182 = 10047809LLU;

    t182 = ((x729==x730)*(x731^x732));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x733 = -810;
	static volatile int64_t x735 = INT64_MIN;
	static int8_t x736 = -1;
	static volatile int64_t t183 = 97209690233544LL;

    t183 = ((x733==x734)*(x735^x736));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = 0U;
	uint8_t x738 = 2U;
	int16_t x740 = 18;

    t184 = ((x737==x738)*(x739^x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint16_t x741 = UINT16_MAX;
	int8_t x743 = INT8_MAX;
	uint64_t x744 = 1711368311858LLU;
	uint64_t t185 = 171239LLU;

    t185 = ((x741==x742)*(x743^x744));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = INT16_MIN;
	int64_t x746 = -1LL;
	static int64_t x747 = INT64_MIN;
	volatile uint16_t x748 = 1856U;
	static volatile int64_t t186 = -7795LL;

    t186 = ((x745==x746)*(x747^x748));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x749 = UINT64_MAX;
	int16_t x750 = -1;
	static int16_t x751 = INT16_MAX;
	int32_t x752 = -254;
	static volatile int32_t t187 = 23382;

    t187 = ((x749==x750)*(x751^x752));

    if (t187 != -32515) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x753 = -1;
	int32_t x754 = INT32_MIN;
	volatile int64_t x755 = 1062514787229238114LL;
	int8_t x756 = INT8_MIN;
	volatile int64_t t188 = 6635734519070416LL;

    t188 = ((x753==x754)*(x755^x756));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x757 = -1;
	uint16_t x758 = 0U;
	volatile uint8_t x759 = UINT8_MAX;
	int32_t t189 = -1365;

    t189 = ((x757==x758)*(x759^x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -11;
	int64_t x762 = -1LL;
	uint8_t x763 = UINT8_MAX;
	int32_t x764 = INT32_MIN;
	int32_t t190 = 140;

    t190 = ((x761==x762)*(x763^x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = INT64_MAX;
	int64_t x767 = INT64_MIN;
	int16_t x768 = 75;
	int64_t t191 = 4272659088674471409LL;

    t191 = ((x765==x766)*(x767^x768));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x769 = -493;
	int16_t x770 = INT16_MAX;
	static int8_t x771 = INT8_MAX;
	volatile uint16_t x772 = 5952U;

    t192 = ((x769==x770)*(x771^x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int8_t x773 = -1;
	static int8_t x775 = -1;
	volatile int8_t x776 = -61;
	volatile int32_t t193 = -11;

    t193 = ((x773==x774)*(x775^x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = 458774551LL;
	int8_t x778 = INT8_MAX;
	uint8_t x779 = UINT8_MAX;
	int32_t t194 = -219;

    t194 = ((x777==x778)*(x779^x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x784 = UINT16_MAX;
	static volatile int32_t t195 = -12389;

    t195 = ((x781==x782)*(x783^x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MAX;
	uint32_t x786 = 445704U;
	int32_t x787 = INT32_MAX;
	uint64_t x788 = 866804LLU;
	uint64_t t196 = 268698930902LLU;

    t196 = ((x785==x786)*(x787^x788));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x789 = -28372;
	volatile uint32_t x790 = 1862796U;
	static uint8_t x791 = UINT8_MAX;
	static volatile uint64_t t197 = 418422823906LLU;

    t197 = ((x789==x790)*(x791^x792));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x793 = 2U;
	uint32_t x794 = 405U;
	uint8_t x795 = 94U;
	int32_t x796 = 32;
	volatile int32_t t198 = 3988;

    t198 = ((x793==x794)*(x795^x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x797 = INT64_MIN;
	int32_t x798 = INT32_MIN;
	int64_t x799 = INT64_MAX;
	int16_t x800 = 156;
	volatile int64_t t199 = 277135438715125325LL;

    t199 = ((x797==x798)*(x799^x800));

    if (t199 != 0LL) { NG(); } else { ; }
	
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


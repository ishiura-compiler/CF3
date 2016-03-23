
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
int8_t x6 = INT8_MIN;
int8_t x7 = -9;
volatile int64_t x8 = INT64_MIN;
int16_t x12 = -4;
int8_t x13 = -51;
uint64_t x14 = UINT64_MAX;
int16_t x15 = 66;
volatile uint16_t x24 = 0U;
volatile int32_t t5 = -39;
int8_t x27 = 14;
int32_t x32 = INT32_MIN;
int16_t x33 = -1;
int32_t t8 = -11;
static int16_t x49 = 348;
int64_t x55 = INT64_MAX;
int32_t x60 = INT32_MIN;
int8_t x65 = INT8_MAX;
uint16_t x66 = UINT16_MAX;
volatile int64_t x67 = INT64_MAX;
uint64_t x76 = UINT64_MAX;
int32_t t18 = -92979;
uint64_t x81 = 92709367LLU;
int64_t x84 = INT64_MIN;
int8_t x100 = INT8_MAX;
uint32_t x101 = UINT32_MAX;
int32_t t25 = 249;
int64_t x106 = INT64_MIN;
volatile int32_t x110 = INT32_MAX;
int32_t x115 = INT32_MIN;
int16_t x119 = 0;
static volatile int32_t t29 = -4;
int64_t x123 = INT64_MIN;
uint64_t x124 = 371349699231646729LLU;
volatile int32_t x125 = 1823444;
uint8_t x126 = 3U;
static volatile int32_t t33 = -118080496;
volatile int32_t t34 = -14266496;
static uint16_t x144 = 7U;
uint32_t x148 = 1U;
uint8_t x150 = 56U;
volatile int64_t x152 = 7323529LL;
static volatile int32_t t37 = 14392;
volatile uint8_t x161 = 9U;
uint16_t x170 = UINT16_MAX;
int32_t x173 = 691194;
static int16_t x190 = INT16_MAX;
int64_t x193 = 847504408221322786LL;
int64_t x194 = INT64_MAX;
uint64_t x195 = 6324303946419138896LLU;
static volatile uint8_t x196 = 68U;
volatile int16_t x203 = -1;
static int64_t x205 = INT64_MIN;
volatile uint32_t x208 = 1807820047U;
static int8_t x210 = INT8_MAX;
uint32_t x216 = UINT32_MAX;
volatile int64_t x224 = 86223LL;
int16_t x228 = 15638;
int32_t t56 = -140687559;
int32_t t59 = 98377;
int64_t x242 = 1LL;
static volatile int8_t x253 = INT8_MAX;
int32_t t63 = 78053620;
uint8_t x260 = 59U;
uint8_t x261 = 2U;
int16_t x263 = INT16_MAX;
static int64_t x275 = INT64_MIN;
uint64_t x278 = UINT64_MAX;
int32_t x285 = INT32_MIN;
static int32_t t71 = -312;
static volatile int8_t x292 = INT8_MAX;
uint16_t x302 = 7967U;
int16_t x305 = 47;
volatile int64_t x315 = INT64_MAX;
uint16_t x320 = 1U;
int8_t x322 = INT8_MIN;
static int8_t x323 = -1;
volatile uint16_t x325 = 6596U;
int32_t x328 = -1;
int32_t x333 = -2407291;
volatile int32_t t86 = -178755;
volatile int32_t t87 = -6837964;
static int64_t x353 = INT64_MIN;
volatile uint32_t x357 = 8655091U;
int16_t x358 = -2609;
uint16_t x359 = UINT16_MAX;
volatile uint32_t x360 = 1140U;
volatile int8_t x362 = 11;
static uint8_t x364 = 6U;
int8_t x365 = INT8_MAX;
uint8_t x373 = UINT8_MAX;
uint32_t x378 = UINT32_MAX;
int32_t t94 = 62;
volatile int32_t x384 = -1;
int16_t x385 = INT16_MAX;
volatile int16_t x389 = -1;
uint32_t x390 = 72766482U;
int32_t x392 = INT32_MIN;
volatile int32_t t97 = 29918;
static volatile int32_t x393 = INT32_MAX;
uint32_t x394 = UINT32_MAX;
static int8_t x395 = -14;
int16_t x396 = INT16_MIN;
volatile int64_t x397 = INT64_MIN;
uint64_t x398 = UINT64_MAX;
uint64_t x403 = 1812LLU;
static int8_t x410 = -1;
static volatile uint8_t x416 = UINT8_MAX;
int32_t x436 = INT32_MAX;
int64_t x439 = 8166559870666611LL;
uint16_t x443 = UINT16_MAX;
static int32_t t113 = 1281922;
int32_t x457 = INT32_MAX;
uint8_t x459 = 27U;
int16_t x460 = -451;
volatile int8_t x462 = -1;
uint16_t x463 = 16U;
static volatile int16_t x470 = 5905;
int32_t t117 = -91230;
volatile uint64_t x473 = 3300107688430990LLU;
int16_t x474 = 2;
int16_t x479 = -1;
int32_t x484 = 5801595;
int32_t t120 = -6;
int16_t x485 = INT16_MIN;
int8_t x490 = -30;
static int8_t x496 = INT8_MIN;
int64_t x499 = -1LL;
static volatile int32_t x508 = 0;
int32_t t126 = 6;
int32_t x515 = INT32_MAX;
uint64_t x518 = UINT64_MAX;
static uint32_t x521 = 2139519381U;
volatile uint64_t x528 = UINT64_MAX;
int8_t x545 = INT8_MIN;
static volatile uint32_t x547 = UINT32_MAX;
volatile int32_t t136 = -199785391;
static int64_t x551 = -18478476905050153LL;
int16_t x552 = INT16_MIN;
uint8_t x554 = 30U;
volatile int32_t t138 = 3185;
static volatile int32_t x564 = INT32_MAX;
int64_t x566 = INT64_MIN;
int32_t t141 = -75;
uint8_t x570 = 19U;
int8_t x573 = INT8_MIN;
int8_t x579 = INT8_MAX;
int64_t x593 = INT64_MIN;
int32_t x614 = INT32_MAX;
uint64_t x616 = 252484084192515LLU;
volatile int32_t t153 = -35990;
int64_t x622 = 46545943342725LL;
uint32_t x623 = 56U;
static uint32_t x632 = 12377499U;
volatile int8_t x642 = INT8_MIN;
static uint8_t x645 = UINT8_MAX;
static int32_t x648 = -256380;
uint8_t x649 = 28U;
int8_t x653 = INT8_MIN;
static volatile int32_t t164 = -3411;
static int64_t x666 = INT64_MAX;
static int64_t x670 = INT64_MAX;
int16_t x676 = -2;
volatile int32_t t169 = 0;
int32_t x689 = -7;
int64_t x692 = INT64_MIN;
int8_t x707 = -3;
int32_t t177 = -4993847;
static int32_t t178 = -629220577;
static volatile int16_t x718 = INT16_MIN;
int64_t x720 = -1LL;
uint32_t x724 = 33513476U;
static uint16_t x742 = UINT16_MAX;
volatile int32_t t185 = 1673254;
int32_t x746 = INT32_MAX;
int16_t x747 = INT16_MIN;
int8_t x755 = INT8_MAX;
int32_t t189 = 85060144;
uint64_t x761 = 208LLU;
int32_t x767 = INT32_MAX;
static int8_t x768 = INT8_MIN;
int32_t t196 = -7180758;
static uint8_t x797 = 1U;
uint64_t x800 = UINT64_MAX;


void f0(void) {
    	static uint32_t x1 = 442523U;
	static int32_t x2 = -1;
	uint8_t x3 = 1U;
	volatile int32_t t0 = -44;

    t0 = ((x1^x2)>(x3!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -628336391253853LL;
	volatile int32_t t1 = 568034;

    t1 = ((x5^x6)>(x7!=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	int64_t x10 = 3638LL;
	static int8_t x11 = INT8_MIN;
	volatile int32_t t2 = -111255;

    t2 = ((x9^x10)>(x11!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x16 = -1LL;
	int32_t t3 = 11760552;

    t3 = ((x13^x14)>(x15!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MAX;
	uint16_t x18 = 1857U;
	volatile int32_t x19 = -1;
	uint16_t x20 = 5127U;
	volatile int32_t t4 = -1;

    t4 = ((x17^x18)>(x19!=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	volatile int32_t x22 = INT32_MAX;
	volatile uint32_t x23 = 1U;

    t5 = ((x21^x22)>(x23!=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int32_t x25 = INT32_MIN;
	uint8_t x26 = 78U;
	int64_t x28 = -1LL;
	volatile int32_t t6 = 7;

    t6 = ((x25^x26)>(x27!=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int64_t x29 = -427751720507LL;
	int64_t x30 = 473807LL;
	int16_t x31 = -415;
	int32_t t7 = 60717804;

    t7 = ((x29^x30)>(x31!=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x34 = INT64_MIN;
	volatile uint32_t x35 = 1292U;
	volatile uint16_t x36 = 56U;

    t8 = ((x33^x34)>(x35!=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -257590685;
	static int8_t x38 = INT8_MIN;
	int8_t x39 = INT8_MAX;
	int32_t x40 = 1;
	volatile int32_t t9 = 541097273;

    t9 = ((x37^x38)>(x39!=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 11U;
	int8_t x42 = -1;
	uint32_t x43 = 9U;
	uint8_t x44 = 10U;
	static volatile int32_t t10 = 405;

    t10 = ((x41^x42)>(x43!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	int16_t x46 = 1;
	uint8_t x47 = 0U;
	int16_t x48 = -11705;
	volatile int32_t t11 = -401736491;

    t11 = ((x45^x46)>(x47!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x50 = 11177U;
	int16_t x51 = INT16_MIN;
	int32_t x52 = -190355967;
	int32_t t12 = 33161414;

    t12 = ((x49^x50)>(x51!=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 1U;
	static uint64_t x54 = UINT64_MAX;
	int64_t x56 = -5841536LL;
	volatile int32_t t13 = 636;

    t13 = ((x53^x54)>(x55!=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = INT16_MAX;
	int64_t x58 = -1LL;
	int32_t x59 = INT32_MAX;
	volatile int32_t t14 = -934483;

    t14 = ((x57^x58)>(x59!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = UINT8_MAX;
	int8_t x62 = -27;
	uint32_t x63 = 2162470U;
	volatile int16_t x64 = -1;
	volatile int32_t t15 = 122135;

    t15 = ((x61^x62)>(x63!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x68 = UINT64_MAX;
	volatile int32_t t16 = 176070777;

    t16 = ((x65^x66)>(x67!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x69 = UINT8_MAX;
	int32_t x70 = 254;
	uint64_t x71 = 4620462166529LLU;
	int16_t x72 = -1;
	int32_t t17 = 96;

    t17 = ((x69^x70)>(x71!=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = 292;
	int64_t x74 = INT64_MAX;
	int16_t x75 = 10511;

    t18 = ((x73^x74)>(x75!=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = 0;
	volatile int64_t x78 = INT64_MIN;
	volatile int8_t x79 = -1;
	int8_t x80 = INT8_MAX;
	int32_t t19 = 1222;

    t19 = ((x77^x78)>(x79!=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x82 = INT64_MAX;
	uint64_t x83 = UINT64_MAX;
	volatile int32_t t20 = 4020483;

    t20 = ((x81^x82)>(x83!=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	static uint64_t x86 = UINT64_MAX;
	volatile uint16_t x87 = 379U;
	int8_t x88 = INT8_MAX;
	int32_t t21 = 920961;

    t21 = ((x85^x86)>(x87!=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 363U;
	int64_t x90 = INT64_MIN;
	int32_t x91 = 112922335;
	int8_t x92 = -54;
	static int32_t t22 = 2070;

    t22 = ((x89^x90)>(x91!=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	int16_t x94 = -2;
	int8_t x95 = -34;
	int32_t x96 = INT32_MIN;
	volatile int32_t t23 = -3576070;

    t23 = ((x93^x94)>(x95!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = -2;
	volatile uint64_t x98 = 284043130366515146LLU;
	static int64_t x99 = INT64_MAX;
	int32_t t24 = -1;

    t24 = ((x97^x98)>(x99!=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x102 = 4000U;
	volatile int32_t x103 = -1796;
	static uint32_t x104 = 2248341U;

    t25 = ((x101^x102)>(x103!=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 14030U;
	uint32_t x107 = 10533309U;
	volatile int8_t x108 = -1;
	volatile int32_t t26 = 1790;

    t26 = ((x105^x106)>(x107!=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -2847317452483030701LL;
	uint64_t x111 = 195LLU;
	uint32_t x112 = 13581U;
	int32_t t27 = -65865;

    t27 = ((x109^x110)>(x111!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = 76846297475244LLU;
	int64_t x114 = -1LL;
	uint8_t x116 = UINT8_MAX;
	int32_t t28 = -12894;

    t28 = ((x113^x114)>(x115!=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = 125LL;
	volatile int32_t x118 = -26;
	static int8_t x120 = INT8_MAX;

    t29 = ((x117^x118)>(x119!=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -1;
	int64_t x122 = INT64_MAX;
	int32_t t30 = -7861893;

    t30 = ((x121^x122)>(x123!=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x127 = INT32_MIN;
	static volatile uint32_t x128 = 3478646U;
	static volatile int32_t t31 = -56;

    t31 = ((x125^x126)>(x127!=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = UINT32_MAX;
	int32_t x130 = INT32_MIN;
	uint32_t x131 = 843049977U;
	int32_t x132 = INT32_MIN;
	volatile int32_t t32 = -250;

    t32 = ((x129^x130)>(x131!=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x133 = 1122923291368391LLU;
	static int32_t x134 = 783;
	volatile int8_t x135 = INT8_MIN;
	uint64_t x136 = 7305034728479LLU;

    t33 = ((x133^x134)>(x135!=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = -6957809666593LL;
	int16_t x138 = INT16_MAX;
	uint64_t x139 = 741969243LLU;
	int16_t x140 = INT16_MAX;

    t34 = ((x137^x138)>(x139!=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x141 = INT16_MIN;
	int8_t x142 = 6;
	static int16_t x143 = INT16_MIN;
	int32_t t35 = -5;

    t35 = ((x141^x142)>(x143!=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x145 = 1;
	volatile int8_t x146 = -1;
	int16_t x147 = -1;
	volatile int32_t t36 = 421611;

    t36 = ((x145^x146)>(x147!=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x149 = 8247596U;
	int16_t x151 = INT16_MIN;

    t37 = ((x149^x150)>(x151!=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int8_t x153 = 3;
	int16_t x154 = -1;
	volatile int16_t x155 = INT16_MAX;
	int32_t x156 = -1;
	volatile int32_t t38 = 67;

    t38 = ((x153^x154)>(x155!=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -1LL;
	static volatile int64_t x158 = -1LL;
	uint8_t x159 = UINT8_MAX;
	static volatile int8_t x160 = 0;
	volatile int32_t t39 = 1162550;

    t39 = ((x157^x158)>(x159!=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x162 = -1;
	int32_t x163 = -1;
	int64_t x164 = 421773406LL;
	volatile int32_t t40 = 2590;

    t40 = ((x161^x162)>(x163!=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = UINT16_MAX;
	static uint8_t x166 = 1U;
	int32_t x167 = -1;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = -38;

    t41 = ((x165^x166)>(x167!=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = -1LL;
	static uint8_t x171 = 1U;
	uint16_t x172 = 0U;
	static int32_t t42 = 5;

    t42 = ((x169^x170)>(x171!=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x174 = -40519279536947LL;
	volatile int16_t x175 = INT16_MAX;
	int8_t x176 = 6;
	volatile int32_t t43 = -747;

    t43 = ((x173^x174)>(x175!=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 64U;
	uint16_t x178 = 0U;
	int8_t x179 = -1;
	int16_t x180 = -1;
	int32_t t44 = -19;

    t44 = ((x177^x178)>(x179!=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = UINT16_MAX;
	volatile int64_t x182 = INT64_MIN;
	static int8_t x183 = -1;
	volatile uint8_t x184 = 31U;
	int32_t t45 = 123;

    t45 = ((x181^x182)>(x183!=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x185 = 42U;
	int16_t x186 = INT16_MIN;
	volatile int64_t x187 = INT64_MIN;
	int8_t x188 = -1;
	int32_t t46 = 1;

    t46 = ((x185^x186)>(x187!=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MIN;
	uint64_t x191 = UINT64_MAX;
	volatile int8_t x192 = INT8_MAX;
	volatile int32_t t47 = 3;

    t47 = ((x189^x190)>(x191!=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t t48 = 31;

    t48 = ((x193^x194)>(x195!=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x197 = UINT64_MAX;
	int16_t x198 = 0;
	uint64_t x199 = 1LLU;
	static uint8_t x200 = 53U;
	int32_t t49 = 2445133;

    t49 = ((x197^x198)>(x199!=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	static int8_t x202 = INT8_MAX;
	int8_t x204 = 3;
	volatile int32_t t50 = -185;

    t50 = ((x201^x202)>(x203!=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x206 = UINT8_MAX;
	int32_t x207 = INT32_MIN;
	volatile int32_t t51 = 26988142;

    t51 = ((x205^x206)>(x207!=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = 0U;
	uint8_t x211 = UINT8_MAX;
	volatile uint64_t x212 = 769920947879155444LLU;
	volatile int32_t t52 = 14024;

    t52 = ((x209^x210)>(x211!=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = UINT32_MAX;
	static int64_t x214 = INT64_MIN;
	volatile int16_t x215 = INT16_MIN;
	volatile int32_t t53 = -198949;

    t53 = ((x213^x214)>(x215!=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x217 = 3278484658LL;
	uint32_t x218 = 373787U;
	static int16_t x219 = -1;
	int8_t x220 = -1;
	volatile int32_t t54 = -217667745;

    t54 = ((x217^x218)>(x219!=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x221 = 2707180795474051507LLU;
	int64_t x222 = -3558LL;
	static int16_t x223 = INT16_MIN;
	volatile int32_t t55 = -5017;

    t55 = ((x221^x222)>(x223!=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MAX;
	static volatile int64_t x226 = -2440LL;
	static uint16_t x227 = 4U;

    t56 = ((x225^x226)>(x227!=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x229 = INT64_MIN;
	volatile int32_t x230 = -7;
	uint16_t x231 = 1803U;
	uint64_t x232 = 3517805195223LLU;
	int32_t t57 = -560;

    t57 = ((x229^x230)>(x231!=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = UINT16_MAX;
	int8_t x234 = INT8_MIN;
	int64_t x235 = INT64_MIN;
	static int8_t x236 = 4;
	static int32_t t58 = -82213343;

    t58 = ((x233^x234)>(x235!=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x237 = -123901;
	int32_t x238 = -106953;
	int16_t x239 = -1;
	int8_t x240 = INT8_MAX;

    t59 = ((x237^x238)>(x239!=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MAX;
	int32_t x243 = -3713874;
	int64_t x244 = INT64_MIN;
	static int32_t t60 = 53;

    t60 = ((x241^x242)>(x243!=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x245 = 7;
	static int32_t x246 = -4055;
	uint8_t x247 = 18U;
	static volatile int32_t x248 = INT32_MIN;
	volatile int32_t t61 = 15003345;

    t61 = ((x245^x246)>(x247!=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MAX;
	int32_t x250 = 245548791;
	static uint16_t x251 = 1U;
	uint64_t x252 = 259640249LLU;
	volatile int32_t t62 = -2007;

    t62 = ((x249^x250)>(x251!=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x254 = -31LL;
	int32_t x255 = INT32_MIN;
	volatile uint64_t x256 = UINT64_MAX;

    t63 = ((x253^x254)>(x255!=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x257 = INT64_MIN;
	uint64_t x258 = UINT64_MAX;
	static int16_t x259 = INT16_MIN;
	int32_t t64 = -1;

    t64 = ((x257^x258)>(x259!=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x262 = -139;
	volatile int32_t x264 = INT32_MIN;
	volatile int32_t t65 = 183439;

    t65 = ((x261^x262)>(x263!=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x265 = INT16_MAX;
	uint64_t x266 = 31272LLU;
	uint16_t x267 = UINT16_MAX;
	int16_t x268 = INT16_MIN;
	int32_t t66 = 33457;

    t66 = ((x265^x266)>(x267!=x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = INT16_MIN;
	int8_t x270 = -1;
	int8_t x271 = INT8_MIN;
	volatile uint8_t x272 = 47U;
	int32_t t67 = -6654655;

    t67 = ((x269^x270)>(x271!=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MIN;
	static int32_t x274 = 669;
	static uint8_t x276 = 3U;
	static volatile int32_t t68 = 21053305;

    t68 = ((x273^x274)>(x275!=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = -7817;
	int16_t x279 = INT16_MIN;
	static volatile int16_t x280 = INT16_MAX;
	volatile int32_t t69 = 28;

    t69 = ((x277^x278)>(x279!=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -5;
	static volatile int8_t x282 = INT8_MIN;
	int64_t x283 = INT64_MAX;
	static int32_t x284 = -4975768;
	volatile int32_t t70 = 496211153;

    t70 = ((x281^x282)>(x283!=x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x286 = INT8_MIN;
	int16_t x287 = INT16_MAX;
	int32_t x288 = INT32_MAX;

    t71 = ((x285^x286)>(x287!=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = -1;
	uint8_t x290 = UINT8_MAX;
	int16_t x291 = -1;
	static int32_t t72 = -27324;

    t72 = ((x289^x290)>(x291!=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x293 = 189640266990577LLU;
	int64_t x294 = -1LL;
	uint16_t x295 = 747U;
	int64_t x296 = INT64_MIN;
	int32_t t73 = -1859;

    t73 = ((x293^x294)>(x295!=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x297 = -1LL;
	int8_t x298 = INT8_MAX;
	static int64_t x299 = INT64_MIN;
	int64_t x300 = -1LL;
	static int32_t t74 = -261;

    t74 = ((x297^x298)>(x299!=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = 4920;
	uint32_t x303 = 118669U;
	uint16_t x304 = 5U;
	static volatile int32_t t75 = -528;

    t75 = ((x301^x302)>(x303!=x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x306 = INT16_MIN;
	uint64_t x307 = UINT64_MAX;
	int64_t x308 = INT64_MIN;
	int32_t t76 = 28;

    t76 = ((x305^x306)>(x307!=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = 4122U;
	int16_t x310 = -1;
	uint32_t x311 = 156120134U;
	int16_t x312 = INT16_MIN;
	int32_t t77 = -28;

    t77 = ((x309^x310)>(x311!=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = 7831U;
	uint16_t x314 = UINT16_MAX;
	int16_t x316 = INT16_MIN;
	int32_t t78 = 0;

    t78 = ((x313^x314)>(x315!=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x317 = 0;
	uint64_t x318 = 28LLU;
	int64_t x319 = -68510577LL;
	volatile int32_t t79 = 58267;

    t79 = ((x317^x318)>(x319!=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MIN;
	uint16_t x324 = 0U;
	static volatile int32_t t80 = 903252;

    t80 = ((x321^x322)>(x323!=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x326 = 862;
	uint8_t x327 = 3U;
	static int32_t t81 = 3553;

    t81 = ((x325^x326)>(x327!=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x329 = -1;
	int64_t x330 = -7494LL;
	static int64_t x331 = INT64_MIN;
	volatile int8_t x332 = -1;
	int32_t t82 = -52074;

    t82 = ((x329^x330)>(x331!=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x334 = UINT16_MAX;
	int8_t x335 = INT8_MIN;
	static volatile int64_t x336 = INT64_MAX;
	static volatile int32_t t83 = 277574;

    t83 = ((x333^x334)>(x335!=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	uint16_t x338 = 5U;
	uint64_t x339 = UINT64_MAX;
	volatile int32_t x340 = INT32_MIN;
	int32_t t84 = 422;

    t84 = ((x337^x338)>(x339!=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = 423999040U;
	static volatile uint16_t x342 = 14U;
	volatile uint8_t x343 = 14U;
	int64_t x344 = -1LL;
	volatile int32_t t85 = 10;

    t85 = ((x341^x342)>(x343!=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = UINT8_MAX;
	volatile int64_t x346 = INT64_MIN;
	volatile int8_t x347 = -1;
	int64_t x348 = -13085887LL;

    t86 = ((x345^x346)>(x347!=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = 155U;
	static volatile uint8_t x350 = 6U;
	static int32_t x351 = -1;
	int32_t x352 = -1;

    t87 = ((x349^x350)>(x351!=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x354 = INT16_MIN;
	volatile uint16_t x355 = 1U;
	uint64_t x356 = UINT64_MAX;
	volatile int32_t t88 = -79248772;

    t88 = ((x353^x354)>(x355!=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int32_t t89 = -832597872;

    t89 = ((x357^x358)>(x359!=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint64_t x361 = UINT64_MAX;
	int64_t x363 = -1LL;
	int32_t t90 = 246124;

    t90 = ((x361^x362)>(x363!=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x366 = INT8_MIN;
	volatile int64_t x367 = INT64_MIN;
	uint32_t x368 = 21U;
	volatile int32_t t91 = 42918025;

    t91 = ((x365^x366)>(x367!=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = -1;
	int8_t x370 = INT8_MIN;
	uint16_t x371 = 1U;
	volatile int8_t x372 = -1;
	static volatile int32_t t92 = 7180;

    t92 = ((x369^x370)>(x371!=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x374 = -1;
	int16_t x375 = INT16_MAX;
	static uint8_t x376 = 3U;
	volatile int32_t t93 = 18362335;

    t93 = ((x373^x374)>(x375!=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x377 = INT64_MIN;
	volatile int64_t x379 = INT64_MAX;
	int64_t x380 = INT64_MIN;

    t94 = ((x377^x378)>(x379!=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	uint64_t x382 = 13157844LLU;
	int32_t x383 = INT32_MAX;
	int32_t t95 = 2500968;

    t95 = ((x381^x382)>(x383!=x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x386 = -1;
	int8_t x387 = -1;
	static volatile int64_t x388 = -1LL;
	static volatile int32_t t96 = 2;

    t96 = ((x385^x386)>(x387!=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x391 = UINT64_MAX;

    t97 = ((x389^x390)>(x391!=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t t98 = 63822;

    t98 = ((x393^x394)>(x395!=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x399 = INT64_MIN;
	volatile int64_t x400 = -1LL;
	volatile int32_t t99 = 65;

    t99 = ((x397^x398)>(x399!=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = 2348;
	uint32_t x402 = 12U;
	int32_t x404 = -1;
	volatile int32_t t100 = -3938083;

    t100 = ((x401^x402)>(x403!=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = 15203564LL;
	int16_t x406 = INT16_MAX;
	int32_t x407 = INT32_MAX;
	volatile int64_t x408 = INT64_MIN;
	static volatile int32_t t101 = 476129;

    t101 = ((x405^x406)>(x407!=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x409 = UINT32_MAX;
	int32_t x411 = 49;
	int32_t x412 = 727488;
	volatile int32_t t102 = -16196;

    t102 = ((x409^x410)>(x411!=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = -1;
	uint64_t x414 = UINT64_MAX;
	uint8_t x415 = 1U;
	int32_t t103 = 24779635;

    t103 = ((x413^x414)>(x415!=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 4037U;
	static uint8_t x418 = UINT8_MAX;
	static int32_t x419 = INT32_MAX;
	volatile int8_t x420 = -1;
	int32_t t104 = 82890785;

    t104 = ((x417^x418)>(x419!=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = INT8_MIN;
	uint64_t x422 = 1983499278LLU;
	int16_t x423 = INT16_MIN;
	volatile int8_t x424 = INT8_MIN;
	volatile int32_t t105 = -1;

    t105 = ((x421^x422)>(x423!=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = 986;
	int16_t x426 = 891;
	uint64_t x427 = 560331587515239LLU;
	int8_t x428 = INT8_MAX;
	static int32_t t106 = -344;

    t106 = ((x425^x426)>(x427!=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -18292449LL;
	int64_t x430 = -61468LL;
	int16_t x431 = INT16_MIN;
	uint8_t x432 = 1U;
	int32_t t107 = -7096730;

    t107 = ((x429^x430)>(x431!=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = INT32_MAX;
	static int16_t x434 = INT16_MIN;
	static uint64_t x435 = 5720345988371LLU;
	volatile int32_t t108 = 1;

    t108 = ((x433^x434)>(x435!=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = 489;
	static volatile int64_t x438 = 2718950898845LL;
	static uint32_t x440 = UINT32_MAX;
	volatile int32_t t109 = 455506024;

    t109 = ((x437^x438)>(x439!=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = 24704U;
	int64_t x442 = INT64_MAX;
	int16_t x444 = 2;
	int32_t t110 = -26337071;

    t110 = ((x441^x442)>(x443!=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int32_t x445 = 0;
	int16_t x446 = 1259;
	int32_t x447 = INT32_MIN;
	volatile uint64_t x448 = 588529LLU;
	volatile int32_t t111 = 4057;

    t111 = ((x445^x446)>(x447!=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MIN;
	uint64_t x450 = 267779962258488LLU;
	int8_t x451 = -36;
	int16_t x452 = 33;
	int32_t t112 = 0;

    t112 = ((x449^x450)>(x451!=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MAX;
	int32_t x454 = INT32_MIN;
	volatile int16_t x455 = -1;
	uint64_t x456 = UINT64_MAX;

    t113 = ((x453^x454)>(x455!=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x458 = INT32_MIN;
	int32_t t114 = -183117858;

    t114 = ((x457^x458)>(x459!=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x461 = 1844LLU;
	int8_t x464 = -12;
	volatile int32_t t115 = 14;

    t115 = ((x461^x462)>(x463!=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = 2U;
	uint8_t x466 = 3U;
	int64_t x467 = -1LL;
	static int8_t x468 = INT8_MIN;
	volatile int32_t t116 = 170;

    t116 = ((x465^x466)>(x467!=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x469 = 119020457273571398LLU;
	int16_t x471 = -14;
	uint8_t x472 = 0U;

    t117 = ((x469^x470)>(x471!=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x475 = 60280060U;
	int32_t x476 = -1;
	int32_t t118 = -716434;

    t118 = ((x473^x474)>(x475!=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MIN;
	static uint32_t x478 = 3U;
	static volatile int8_t x480 = INT8_MAX;
	volatile int32_t t119 = 25262;

    t119 = ((x477^x478)>(x479!=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x481 = INT64_MIN;
	static uint64_t x482 = UINT64_MAX;
	int8_t x483 = 2;

    t120 = ((x481^x482)>(x483!=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x486 = -1;
	int16_t x487 = INT16_MIN;
	static int64_t x488 = INT64_MAX;
	static volatile int32_t t121 = 4195329;

    t121 = ((x485^x486)>(x487!=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = UINT16_MAX;
	int64_t x491 = INT64_MIN;
	volatile int32_t x492 = INT32_MIN;
	static volatile int32_t t122 = -913291;

    t122 = ((x489^x490)>(x491!=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = 0;
	uint8_t x494 = 1U;
	int32_t x495 = INT32_MIN;
	int32_t t123 = -1449426;

    t123 = ((x493^x494)>(x495!=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MIN;
	uint32_t x498 = 2142052594U;
	static int32_t x500 = INT32_MIN;
	int32_t t124 = -55646;

    t124 = ((x497^x498)>(x499!=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MIN;
	int32_t x502 = 0;
	volatile int16_t x503 = -1;
	static uint16_t x504 = 767U;
	volatile int32_t t125 = 113;

    t125 = ((x501^x502)>(x503!=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = 426067LL;
	int64_t x506 = -1LL;
	volatile int8_t x507 = -26;

    t126 = ((x505^x506)>(x507!=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x509 = INT32_MAX;
	int16_t x510 = -1;
	int32_t x511 = -1;
	volatile int32_t x512 = INT32_MIN;
	int32_t t127 = 394421085;

    t127 = ((x509^x510)>(x511!=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = 1906;
	static int64_t x514 = 69LL;
	int32_t x516 = INT32_MAX;
	int32_t t128 = 908030557;

    t128 = ((x513^x514)>(x515!=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MIN;
	uint16_t x519 = UINT16_MAX;
	int64_t x520 = INT64_MIN;
	volatile int32_t t129 = -1;

    t129 = ((x517^x518)>(x519!=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x522 = INT32_MIN;
	uint16_t x523 = 0U;
	uint64_t x524 = 29970782232989LLU;
	int32_t t130 = 41810907;

    t130 = ((x521^x522)>(x523!=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = UINT8_MAX;
	volatile int32_t x526 = -63252;
	uint8_t x527 = UINT8_MAX;
	static volatile int32_t t131 = 5;

    t131 = ((x525^x526)>(x527!=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MIN;
	uint16_t x530 = UINT16_MAX;
	volatile int16_t x531 = 269;
	static uint32_t x532 = 23U;
	static volatile int32_t t132 = 14;

    t132 = ((x529^x530)>(x531!=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x533 = INT64_MIN;
	int8_t x534 = INT8_MIN;
	uint16_t x535 = 1U;
	int8_t x536 = INT8_MIN;
	volatile int32_t t133 = 5;

    t133 = ((x533^x534)>(x535!=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = 46U;
	uint8_t x538 = UINT8_MAX;
	static int16_t x539 = -283;
	int16_t x540 = -1;
	int32_t t134 = -222719;

    t134 = ((x537^x538)>(x539!=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = 16;
	int64_t x542 = INT64_MIN;
	int16_t x543 = -1;
	static uint64_t x544 = 11766LLU;
	volatile int32_t t135 = -26699351;

    t135 = ((x541^x542)>(x543!=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x546 = 11U;
	uint64_t x548 = 2127823850885734723LLU;

    t136 = ((x545^x546)>(x547!=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MAX;
	int32_t x550 = INT32_MAX;
	volatile int32_t t137 = 1127;

    t137 = ((x549^x550)>(x551!=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 1698588431330915867LLU;
	static int32_t x555 = -1;
	static uint16_t x556 = 240U;

    t138 = ((x553^x554)>(x555!=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -22;
	int64_t x558 = -1LL;
	int16_t x559 = INT16_MAX;
	static uint32_t x560 = 1561860458U;
	volatile int32_t t139 = 323;

    t139 = ((x557^x558)>(x559!=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = 3U;
	int16_t x562 = -7080;
	int16_t x563 = 39;
	volatile int32_t t140 = -12;

    t140 = ((x561^x562)>(x563!=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int8_t x565 = -6;
	int64_t x567 = -1LL;
	uint32_t x568 = 3U;

    t141 = ((x565^x566)>(x567!=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = 2U;
	static uint8_t x571 = 105U;
	uint16_t x572 = 0U;
	volatile int32_t t142 = 1;

    t142 = ((x569^x570)>(x571!=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x574 = 0U;
	int32_t x575 = INT32_MIN;
	int8_t x576 = -4;
	volatile int32_t t143 = 3932;

    t143 = ((x573^x574)>(x575!=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x577 = -1LL;
	static int8_t x578 = -1;
	int8_t x580 = -1;
	int32_t t144 = 5671682;

    t144 = ((x577^x578)>(x579!=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = INT16_MIN;
	int16_t x582 = INT16_MAX;
	int8_t x583 = -1;
	uint16_t x584 = 213U;
	int32_t t145 = -3;

    t145 = ((x581^x582)>(x583!=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	uint16_t x586 = 1U;
	int8_t x587 = -1;
	int8_t x588 = INT8_MIN;
	volatile int32_t t146 = -209428930;

    t146 = ((x585^x586)>(x587!=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = UINT16_MAX;
	int64_t x590 = INT64_MAX;
	static volatile int32_t x591 = INT32_MIN;
	volatile uint16_t x592 = 22587U;
	int32_t t147 = -38207328;

    t147 = ((x589^x590)>(x591!=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x594 = 171854869237000LL;
	int32_t x595 = 43;
	uint64_t x596 = UINT64_MAX;
	int32_t t148 = -15706460;

    t148 = ((x593^x594)>(x595!=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x597 = 103U;
	int32_t x598 = INT32_MIN;
	uint32_t x599 = 1186899683U;
	uint16_t x600 = 4683U;
	static int32_t t149 = -211352928;

    t149 = ((x597^x598)>(x599!=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = 1;
	int8_t x602 = -1;
	int32_t x603 = INT32_MIN;
	static uint64_t x604 = UINT64_MAX;
	int32_t t150 = 17808;

    t150 = ((x601^x602)>(x603!=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = 5U;
	volatile int64_t x606 = INT64_MIN;
	int16_t x607 = -1;
	int16_t x608 = INT16_MIN;
	volatile int32_t t151 = 2;

    t151 = ((x605^x606)>(x607!=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x609 = -1LL;
	int64_t x610 = INT64_MIN;
	volatile int64_t x611 = INT64_MAX;
	int16_t x612 = INT16_MIN;
	int32_t t152 = -3619834;

    t152 = ((x609^x610)>(x611!=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x613 = INT32_MIN;
	volatile uint32_t x615 = 5356590U;

    t153 = ((x613^x614)>(x615!=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = UINT16_MAX;
	static int32_t x618 = INT32_MIN;
	static int32_t x619 = -1;
	int16_t x620 = INT16_MIN;
	volatile int32_t t154 = -4420;

    t154 = ((x617^x618)>(x619!=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = INT16_MIN;
	static volatile int32_t x624 = -393;
	volatile int32_t t155 = 40811;

    t155 = ((x621^x622)>(x623!=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = 10492;
	int64_t x626 = 965567976LL;
	int32_t x627 = INT32_MIN;
	static int16_t x628 = -1;
	volatile int32_t t156 = -61;

    t156 = ((x625^x626)>(x627!=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x629 = INT64_MIN;
	int64_t x630 = -1LL;
	int32_t x631 = INT32_MIN;
	volatile int32_t t157 = 11532;

    t157 = ((x629^x630)>(x631!=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x633 = 10LLU;
	uint16_t x634 = 95U;
	uint64_t x635 = UINT64_MAX;
	volatile int8_t x636 = -1;
	volatile int32_t t158 = 13242;

    t158 = ((x633^x634)>(x635!=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = -1;
	volatile int8_t x638 = INT8_MAX;
	int16_t x639 = INT16_MAX;
	volatile uint32_t x640 = UINT32_MAX;
	static volatile int32_t t159 = 7657301;

    t159 = ((x637^x638)>(x639!=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x641 = -812;
	int16_t x643 = -1;
	int64_t x644 = 39174313999428060LL;
	int32_t t160 = 667;

    t160 = ((x641^x642)>(x643!=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x646 = -1;
	int64_t x647 = -1LL;
	int32_t t161 = 6;

    t161 = ((x645^x646)>(x647!=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x650 = 67383156035638884LLU;
	uint8_t x651 = 1U;
	static int16_t x652 = -49;
	int32_t t162 = -6;

    t162 = ((x649^x650)>(x651!=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x654 = 3004411;
	static volatile int32_t x655 = 13;
	int16_t x656 = INT16_MIN;
	int32_t t163 = 926545556;

    t163 = ((x653^x654)>(x655!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x657 = -82111LL;
	int32_t x658 = -1;
	int64_t x659 = 1061805317709085834LL;
	int8_t x660 = INT8_MAX;

    t164 = ((x657^x658)>(x659!=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = INT16_MIN;
	uint16_t x662 = 11U;
	volatile uint8_t x663 = 1U;
	int16_t x664 = INT16_MIN;
	static volatile int32_t t165 = -7776007;

    t165 = ((x661^x662)>(x663!=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = 338214U;
	int8_t x667 = 1;
	int16_t x668 = -1;
	static volatile int32_t t166 = 26431;

    t166 = ((x665^x666)>(x667!=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	int64_t x671 = -1LL;
	uint64_t x672 = UINT64_MAX;
	volatile int32_t t167 = 2;

    t167 = ((x669^x670)>(x671!=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x673 = -1;
	int32_t x674 = 19185;
	uint64_t x675 = 336LLU;
	static volatile int32_t t168 = -2029;

    t168 = ((x673^x674)>(x675!=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x677 = -1537;
	uint64_t x678 = 32920029LLU;
	int32_t x679 = INT32_MIN;
	static int16_t x680 = INT16_MIN;

    t169 = ((x677^x678)>(x679!=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x681 = 76;
	uint32_t x682 = UINT32_MAX;
	uint32_t x683 = 9857937U;
	static int8_t x684 = -1;
	int32_t t170 = 0;

    t170 = ((x681^x682)>(x683!=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x685 = INT32_MAX;
	int64_t x686 = 4159923964569LL;
	uint32_t x687 = 301643316U;
	uint16_t x688 = UINT16_MAX;
	static volatile int32_t t171 = -579224134;

    t171 = ((x685^x686)>(x687!=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x690 = INT32_MIN;
	volatile int64_t x691 = 4334444347618181241LL;
	volatile int32_t t172 = 181545327;

    t172 = ((x689^x690)>(x691!=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x693 = INT8_MAX;
	uint8_t x694 = 0U;
	int16_t x695 = INT16_MIN;
	int16_t x696 = 6;
	static int32_t t173 = -40874873;

    t173 = ((x693^x694)>(x695!=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = UINT8_MAX;
	uint8_t x698 = UINT8_MAX;
	volatile uint16_t x699 = 8076U;
	uint16_t x700 = UINT16_MAX;
	static volatile int32_t t174 = -27913;

    t174 = ((x697^x698)>(x699!=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = UINT8_MAX;
	int32_t x702 = 25;
	volatile int16_t x703 = -1;
	int8_t x704 = INT8_MIN;
	int32_t t175 = 1;

    t175 = ((x701^x702)>(x703!=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = 61;
	static uint16_t x706 = 97U;
	volatile int16_t x708 = INT16_MIN;
	volatile int32_t t176 = -11;

    t176 = ((x705^x706)>(x707!=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = -1;
	volatile int8_t x710 = -45;
	volatile int16_t x711 = -1;
	int64_t x712 = INT64_MIN;

    t177 = ((x709^x710)>(x711!=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = 1U;
	static volatile int64_t x714 = INT64_MAX;
	volatile uint64_t x715 = UINT64_MAX;
	int8_t x716 = -1;

    t178 = ((x713^x714)>(x715!=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x717 = 7793030989LLU;
	volatile int32_t x719 = -5235;
	int32_t t179 = 1;

    t179 = ((x717^x718)>(x719!=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x721 = INT64_MIN;
	volatile int8_t x722 = 33;
	int16_t x723 = -12641;
	static volatile int32_t t180 = 1499;

    t180 = ((x721^x722)>(x723!=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x725 = 5U;
	int8_t x726 = 1;
	static int32_t x727 = -1;
	uint16_t x728 = 18U;
	int32_t t181 = -1253839;

    t181 = ((x725^x726)>(x727!=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x729 = 14U;
	int16_t x730 = INT16_MIN;
	int16_t x731 = 523;
	int32_t x732 = 24;
	volatile int32_t t182 = -15;

    t182 = ((x729^x730)>(x731!=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = -1LL;
	static int32_t x734 = INT32_MAX;
	int64_t x735 = INT64_MAX;
	volatile uint32_t x736 = 3419779U;
	volatile int32_t t183 = -8611297;

    t183 = ((x733^x734)>(x735!=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = 121U;
	int8_t x738 = -28;
	int16_t x739 = -382;
	volatile int32_t x740 = -3762646;
	volatile int32_t t184 = -6;

    t184 = ((x737^x738)>(x739!=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x741 = -1LL;
	int64_t x743 = -66706LL;
	uint32_t x744 = 0U;

    t185 = ((x741^x742)>(x743!=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x745 = 0U;
	volatile int64_t x748 = -1LL;
	int32_t t186 = -1483;

    t186 = ((x745^x746)>(x747!=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MIN;
	int64_t x750 = -1LL;
	int64_t x751 = -1LL;
	volatile int16_t x752 = INT16_MAX;
	volatile int32_t t187 = -922715;

    t187 = ((x749^x750)>(x751!=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x753 = UINT8_MAX;
	static int64_t x754 = 592LL;
	uint16_t x756 = UINT16_MAX;
	int32_t t188 = 157;

    t188 = ((x753^x754)>(x755!=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = UINT8_MAX;
	static int32_t x758 = INT32_MIN;
	int16_t x759 = INT16_MIN;
	int8_t x760 = INT8_MAX;

    t189 = ((x757^x758)>(x759!=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x762 = INT64_MIN;
	int64_t x763 = INT64_MIN;
	uint8_t x764 = UINT8_MAX;
	volatile int32_t t190 = -1;

    t190 = ((x761^x762)>(x763!=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = 7U;
	static int64_t x766 = INT64_MIN;
	int32_t t191 = -192393245;

    t191 = ((x765^x766)>(x767!=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = -2699;
	int64_t x770 = INT64_MAX;
	int8_t x771 = -1;
	volatile int32_t x772 = 1538;
	volatile int32_t t192 = 3521;

    t192 = ((x769^x770)>(x771!=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = 968076997;
	volatile int8_t x774 = 0;
	int8_t x775 = INT8_MIN;
	int32_t x776 = -972757006;
	volatile int32_t t193 = 203019;

    t193 = ((x773^x774)>(x775!=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = 421696LLU;
	int8_t x778 = INT8_MIN;
	int16_t x779 = INT16_MAX;
	volatile int64_t x780 = INT64_MAX;
	int32_t t194 = -1;

    t194 = ((x777^x778)>(x779!=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x781 = 1;
	int64_t x782 = 62572851LL;
	int16_t x783 = -1;
	uint32_t x784 = UINT32_MAX;
	static int32_t t195 = 4209278;

    t195 = ((x781^x782)>(x783!=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MAX;
	int32_t x786 = INT32_MIN;
	int8_t x787 = 0;
	int8_t x788 = 3;

    t196 = ((x785^x786)>(x787!=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = -199002056;
	int64_t x790 = INT64_MIN;
	int16_t x791 = -1;
	uint32_t x792 = 1987U;
	static volatile int32_t t197 = -122422;

    t197 = ((x789^x790)>(x791!=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = -1LL;
	uint64_t x794 = 698466715LLU;
	uint8_t x795 = UINT8_MAX;
	int16_t x796 = 6293;
	int32_t t198 = 9088976;

    t198 = ((x793^x794)>(x795!=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x798 = UINT16_MAX;
	uint64_t x799 = 47LLU;
	int32_t t199 = 5856238;

    t199 = ((x797^x798)>(x799!=x800));

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



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

volatile int32_t t0 = 0;
int8_t x11 = INT8_MIN;
int64_t x12 = INT64_MAX;
int32_t x16 = INT32_MIN;
static volatile int32_t t4 = -101266368;
int64_t x22 = -3LL;
static uint8_t x24 = UINT8_MAX;
volatile int32_t t5 = 0;
volatile int64_t x31 = INT64_MIN;
uint32_t x33 = 879507376U;
volatile int16_t x40 = -4694;
volatile int32_t t9 = 25882781;
uint64_t x47 = UINT64_MAX;
volatile uint8_t x53 = 12U;
uint8_t x59 = 4U;
int8_t x61 = 1;
static int32_t x62 = 105072081;
static int8_t x65 = INT8_MIN;
volatile uint64_t x67 = 39669719546LLU;
volatile int32_t t16 = 140474905;
static volatile int32_t x72 = INT32_MIN;
volatile int64_t x76 = -1LL;
static uint16_t x77 = 1457U;
static volatile int32_t t19 = -57189902;
int64_t x81 = INT64_MIN;
int64_t x82 = INT64_MIN;
static volatile int32_t t20 = -26009200;
int64_t x86 = -1LL;
uint32_t x88 = UINT32_MAX;
static int32_t t21 = -61987;
volatile int8_t x90 = 25;
uint8_t x104 = UINT8_MAX;
int64_t x108 = -1LL;
int16_t x109 = -1;
int64_t x115 = -1LL;
volatile uint8_t x118 = UINT8_MAX;
int64_t x121 = 3LL;
static uint16_t x124 = UINT16_MAX;
int32_t x139 = INT32_MAX;
int8_t x152 = -59;
static int64_t x160 = 10709LL;
volatile int32_t t39 = -2281285;
volatile int32_t t40 = -597;
int8_t x165 = INT8_MIN;
static int32_t x170 = 23128098;
volatile uint8_t x171 = UINT8_MAX;
static int64_t x185 = -1LL;
int16_t x189 = INT16_MIN;
int64_t x191 = -26LL;
static int32_t t49 = 266;
uint32_t x207 = 1387520U;
volatile int32_t x209 = -1;
int16_t x214 = 2419;
static volatile uint8_t x215 = 98U;
static volatile int64_t x232 = -1LL;
int32_t t57 = -1;
int64_t x233 = INT64_MAX;
volatile uint16_t x234 = UINT16_MAX;
uint16_t x235 = 1U;
uint16_t x238 = 0U;
uint8_t x240 = UINT8_MAX;
int8_t x244 = INT8_MIN;
uint32_t x251 = 1U;
int16_t x259 = INT16_MAX;
int64_t x260 = INT64_MIN;
static int32_t t64 = 243239;
int32_t t65 = 22;
uint16_t x270 = 45U;
volatile int32_t t68 = 1;
int8_t x277 = INT8_MAX;
int8_t x278 = INT8_MIN;
int16_t x281 = -1;
int32_t t72 = 60;
static int32_t t73 = 14315;
static int32_t x307 = -8728;
static int64_t x311 = -134598608649795341LL;
volatile int32_t t77 = -6876;
int64_t x313 = -1LL;
int16_t x324 = INT16_MIN;
int16_t x330 = -2747;
static uint16_t x333 = 122U;
int64_t x335 = 81851553081226LL;
int16_t x346 = INT16_MAX;
static int16_t x349 = 61;
static uint16_t x356 = UINT16_MAX;
int32_t t89 = -79;
int8_t x362 = -12;
volatile int16_t x363 = -2;
int8_t x365 = -1;
static int32_t x366 = 113815303;
int16_t x370 = -1;
static int32_t t95 = -117681363;
int8_t x389 = INT8_MIN;
int32_t x390 = INT32_MIN;
int8_t x400 = INT8_MIN;
static int32_t x412 = 1690;
volatile int32_t t102 = 4022053;
int8_t x417 = INT8_MAX;
static volatile int64_t x423 = INT64_MAX;
static volatile int32_t x427 = INT32_MAX;
int8_t x433 = -1;
volatile int32_t t108 = 31726;
int64_t x443 = 1038322916058LL;
uint16_t x461 = 2322U;
volatile uint8_t x469 = UINT8_MAX;
int64_t x473 = INT64_MIN;
static uint32_t x477 = 11611225U;
uint64_t x483 = UINT64_MAX;
uint32_t x488 = 19U;
static int32_t t121 = 270142945;
int64_t x489 = INT64_MIN;
uint16_t x492 = 14U;
volatile int32_t t122 = 3872255;
uint8_t x494 = 3U;
static uint8_t x496 = 6U;
static uint32_t x500 = UINT32_MAX;
volatile int8_t x503 = INT8_MAX;
static volatile uint64_t x510 = UINT64_MAX;
volatile int64_t x512 = INT64_MIN;
uint16_t x514 = 554U;
volatile int64_t x518 = 51975055LL;
volatile int16_t x519 = -1;
static volatile uint64_t x520 = 253964934765555LLU;
uint32_t x524 = 2489542U;
static int16_t x526 = INT16_MIN;
volatile int32_t t131 = -5042;
static int32_t x529 = 0;
volatile int32_t t132 = 2036435;
int32_t x539 = INT32_MAX;
volatile int32_t x541 = 7937;
volatile int8_t x542 = INT8_MAX;
int16_t x550 = INT16_MAX;
int8_t x552 = -1;
int64_t x560 = INT64_MIN;
static int32_t t140 = -3672;
int16_t x565 = 215;
int32_t x569 = -1;
volatile int32_t t142 = -3613598;
uint64_t x573 = 38769LLU;
uint64_t x580 = 400935564280517LLU;
int32_t x584 = 28113;
int32_t t145 = 0;
uint32_t x585 = 87910593U;
volatile int32_t t146 = 131;
uint16_t x596 = UINT16_MAX;
int32_t t149 = 1;
uint32_t x603 = 51137346U;
uint32_t x604 = UINT32_MAX;
volatile int32_t t150 = 24021;
int16_t x605 = 0;
int16_t x609 = INT16_MIN;
int32_t t152 = -5355241;
int8_t x617 = -7;
volatile int8_t x623 = -1;
int16_t x629 = INT16_MIN;
int16_t x645 = INT16_MIN;
uint32_t x646 = 5270U;
int8_t x648 = -1;
static uint8_t x652 = UINT8_MAX;
static uint8_t x653 = 14U;
uint32_t x656 = 425451787U;
int32_t t163 = -1031702164;
uint32_t x665 = UINT32_MAX;
static int8_t x667 = -1;
volatile int8_t x668 = INT8_MIN;
static uint16_t x672 = UINT16_MAX;
int16_t x690 = -2428;
volatile int64_t x691 = INT64_MIN;
volatile int16_t x695 = INT16_MAX;
int8_t x701 = INT8_MIN;
int32_t t175 = -23;
int64_t x707 = -9270532LL;
volatile int32_t x709 = INT32_MIN;
volatile int8_t x720 = INT8_MIN;
volatile int64_t x725 = -1LL;
uint16_t x726 = 4945U;
volatile int32_t x731 = 7911;
int8_t x735 = INT8_MIN;
uint8_t x737 = UINT8_MAX;
static volatile int32_t t186 = -487173880;
static int64_t x750 = INT64_MAX;
static int32_t t187 = 406539500;
int16_t x755 = 1;
int32_t x758 = -1068079802;
int32_t x760 = INT32_MAX;
int8_t x763 = -1;
int32_t t190 = 4;
volatile int16_t x765 = INT16_MAX;
volatile int32_t t192 = -180;
int32_t t193 = -26538;
uint32_t x780 = 917U;
int32_t t194 = 3786;
int32_t x783 = -1;
int32_t t195 = 95;
volatile uint8_t x788 = 62U;
int16_t x791 = INT16_MIN;
int16_t x797 = INT16_MAX;
int8_t x798 = -1;


void f0(void) {
    	int64_t x1 = -12804LL;
	int32_t x2 = INT32_MIN;
	int64_t x3 = INT64_MIN;
	static int64_t x4 = INT64_MAX;

    t0 = ((x1^x2)==(x3==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 5U;
	int64_t x6 = -1LL;
	static int64_t x7 = -2LL;
	uint16_t x8 = 10844U;
	volatile int32_t t1 = -208406467;

    t1 = ((x5^x6)==(x7==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	uint32_t x10 = UINT32_MAX;
	int32_t t2 = 12595;

    t2 = ((x9^x10)==(x11==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -29;
	int64_t x14 = INT64_MIN;
	int16_t x15 = -154;
	volatile int32_t t3 = 13171;

    t3 = ((x13^x14)==(x15==x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	static uint16_t x18 = 275U;
	int64_t x19 = 28448986623967LL;
	int32_t x20 = 54;

    t4 = ((x17^x18)==(x19==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MAX;
	static int32_t x23 = -510;

    t5 = ((x21^x22)==(x23==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = -7564;
	static int64_t x26 = INT64_MIN;
	uint64_t x27 = 13386498976960752LLU;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 33;

    t6 = ((x25^x26)==(x27==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -3569;
	static volatile int64_t x30 = 246802705LL;
	int16_t x32 = -212;
	static volatile int32_t t7 = -463962638;

    t7 = ((x29^x30)==(x31==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = INT8_MIN;
	uint32_t x35 = UINT32_MAX;
	int8_t x36 = -15;
	int32_t t8 = 646787414;

    t8 = ((x33^x34)==(x35==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -1LL;
	uint8_t x38 = 10U;
	uint16_t x39 = UINT16_MAX;

    t9 = ((x37^x38)==(x39==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = 450257781732066092LL;
	int32_t x42 = -64997484;
	volatile uint8_t x43 = 7U;
	int16_t x44 = INT16_MAX;
	static volatile int32_t t10 = 91;

    t10 = ((x41^x42)==(x43==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	uint16_t x46 = UINT16_MAX;
	int64_t x48 = 2616655578592601479LL;
	static volatile int32_t t11 = -225262417;

    t11 = ((x45^x46)==(x47==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	volatile int32_t x50 = -8;
	volatile uint8_t x51 = UINT8_MAX;
	static volatile int64_t x52 = INT64_MAX;
	volatile int32_t t12 = -13;

    t12 = ((x49^x50)==(x51==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x54 = 2U;
	static int64_t x55 = INT64_MIN;
	static int64_t x56 = 0LL;
	int32_t t13 = -73;

    t13 = ((x53^x54)==(x55==x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MIN;
	volatile int64_t x58 = 0LL;
	static int8_t x60 = INT8_MAX;
	static volatile int32_t t14 = 37091;

    t14 = ((x57^x58)==(x59==x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x63 = INT32_MIN;
	int8_t x64 = INT8_MAX;
	volatile int32_t t15 = -2870;

    t15 = ((x61^x62)==(x63==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint8_t x66 = UINT8_MAX;
	int32_t x68 = INT32_MAX;

    t16 = ((x65^x66)==(x67==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 27U;
	static uint32_t x70 = UINT32_MAX;
	uint64_t x71 = 963917490464492LLU;
	int32_t t17 = -603;

    t17 = ((x69^x70)==(x71==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x73 = -1;
	uint64_t x74 = 2343904764LLU;
	static int32_t x75 = -12936245;
	int32_t t18 = -416;

    t18 = ((x73^x74)==(x75==x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x78 = 217943LLU;
	static int8_t x79 = INT8_MIN;
	uint32_t x80 = UINT32_MAX;

    t19 = ((x77^x78)==(x79==x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x83 = INT64_MIN;
	uint16_t x84 = 703U;

    t20 = ((x81^x82)==(x83==x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint32_t x85 = UINT32_MAX;
	int64_t x87 = INT64_MIN;

    t21 = ((x85^x86)==(x87==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x89 = UINT32_MAX;
	int32_t x91 = -409;
	static uint8_t x92 = 7U;
	volatile int32_t t22 = 359927667;

    t22 = ((x89^x90)==(x91==x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = UINT16_MAX;
	static volatile int8_t x94 = INT8_MIN;
	int16_t x95 = 13;
	static int64_t x96 = -1LL;
	int32_t t23 = 137;

    t23 = ((x93^x94)==(x95==x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = INT32_MIN;
	int32_t x98 = 480295;
	int8_t x99 = INT8_MIN;
	static uint64_t x100 = UINT64_MAX;
	volatile int32_t t24 = 13;

    t24 = ((x97^x98)==(x99==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x101 = -10;
	int32_t x102 = INT32_MAX;
	int64_t x103 = -1LL;
	int32_t t25 = 1039130;

    t25 = ((x101^x102)==(x103==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x105 = INT64_MIN;
	uint16_t x106 = 21181U;
	static uint64_t x107 = UINT64_MAX;
	int32_t t26 = -1346101;

    t26 = ((x105^x106)==(x107==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x110 = 328U;
	volatile int32_t x111 = INT32_MIN;
	uint64_t x112 = 15786LLU;
	volatile int32_t t27 = -130632;

    t27 = ((x109^x110)==(x111==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 197130U;
	uint16_t x114 = 2277U;
	int32_t x116 = -1;
	static int32_t t28 = -76;

    t28 = ((x113^x114)==(x115==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -26145593074LL;
	static int8_t x119 = INT8_MIN;
	volatile uint8_t x120 = 3U;
	int32_t t29 = -348681;

    t29 = ((x117^x118)==(x119==x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x122 = 0;
	uint64_t x123 = UINT64_MAX;
	volatile int32_t t30 = 9607268;

    t30 = ((x121^x122)==(x123==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int32_t x125 = -4048;
	static uint32_t x126 = 958856U;
	int64_t x127 = -123630LL;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t31 = -11;

    t31 = ((x125^x126)==(x127==x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = 7U;
	uint16_t x130 = 4U;
	int16_t x131 = INT16_MAX;
	int16_t x132 = 144;
	volatile int32_t t32 = -3367;

    t32 = ((x129^x130)==(x131==x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MAX;
	int32_t x134 = INT32_MIN;
	int16_t x135 = INT16_MIN;
	static int8_t x136 = 3;
	static int32_t t33 = 15613306;

    t33 = ((x133^x134)==(x135==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = INT32_MIN;
	int32_t x138 = 5763400;
	int8_t x140 = INT8_MIN;
	int32_t t34 = -3;

    t34 = ((x137^x138)==(x139==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = 12;
	int8_t x142 = -1;
	int64_t x143 = INT64_MIN;
	int16_t x144 = INT16_MIN;
	int32_t t35 = -3;

    t35 = ((x141^x142)==(x143==x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 0U;
	int64_t x146 = -1LL;
	int8_t x147 = INT8_MIN;
	int8_t x148 = 1;
	int32_t t36 = 48241;

    t36 = ((x145^x146)==(x147==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = 5462695356961278LLU;
	int16_t x150 = INT16_MAX;
	volatile int16_t x151 = 109;
	int32_t t37 = 2;

    t37 = ((x149^x150)==(x151==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = UINT16_MAX;
	int32_t x154 = 79;
	int16_t x155 = INT16_MIN;
	static int32_t x156 = INT32_MAX;
	volatile int32_t t38 = -2195;

    t38 = ((x153^x154)==(x155==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x157 = 480;
	volatile int32_t x158 = INT32_MIN;
	int64_t x159 = INT64_MIN;

    t39 = ((x157^x158)==(x159==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MIN;
	int16_t x162 = INT16_MIN;
	volatile uint64_t x163 = 5938875668419676LLU;
	uint8_t x164 = 0U;

    t40 = ((x161^x162)==(x163==x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x166 = -7418;
	static int16_t x167 = INT16_MIN;
	int64_t x168 = INT64_MIN;
	int32_t t41 = 7957;

    t41 = ((x165^x166)==(x167==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = UINT8_MAX;
	int32_t x172 = INT32_MIN;
	volatile int32_t t42 = 8322797;

    t42 = ((x169^x170)==(x171==x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x173 = UINT64_MAX;
	int8_t x174 = INT8_MIN;
	int16_t x175 = -1;
	uint64_t x176 = 988765922719222952LLU;
	volatile int32_t t43 = 916212;

    t43 = ((x173^x174)==(x175==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x177 = UINT8_MAX;
	int8_t x178 = -2;
	volatile int16_t x179 = INT16_MIN;
	int64_t x180 = -1LL;
	int32_t t44 = -72955;

    t44 = ((x177^x178)==(x179==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = 126U;
	int64_t x182 = INT64_MIN;
	int32_t x183 = INT32_MAX;
	volatile int8_t x184 = 0;
	volatile int32_t t45 = -39862;

    t45 = ((x181^x182)==(x183==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x186 = INT16_MIN;
	int64_t x187 = -292LL;
	static int16_t x188 = INT16_MIN;
	volatile int32_t t46 = 1546978;

    t46 = ((x185^x186)==(x187==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x190 = 385094334;
	uint32_t x192 = 9676736U;
	int32_t t47 = 4206;

    t47 = ((x189^x190)==(x191==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 5U;
	uint16_t x194 = UINT16_MAX;
	volatile uint64_t x195 = 814552759368LLU;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = 502105;

    t48 = ((x193^x194)==(x195==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = 35430LLU;
	int64_t x198 = INT64_MIN;
	int8_t x199 = -1;
	static int32_t x200 = 355316;

    t49 = ((x197^x198)==(x199==x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x201 = -1;
	int16_t x202 = INT16_MAX;
	uint32_t x203 = 31784U;
	int64_t x204 = 440693710820LL;
	static int32_t t50 = 430998874;

    t50 = ((x201^x202)==(x203==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x205 = -1LL;
	uint16_t x206 = 91U;
	volatile uint32_t x208 = 888188489U;
	int32_t t51 = -241;

    t51 = ((x205^x206)==(x207==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x210 = 28;
	int32_t x211 = -1;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = -4837;

    t52 = ((x209^x210)==(x211==x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int32_t x213 = INT32_MAX;
	int8_t x216 = -1;
	static int32_t t53 = 1641826;

    t53 = ((x213^x214)==(x215==x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x217 = INT64_MAX;
	uint32_t x218 = 926U;
	uint64_t x219 = 1039318697098LLU;
	int64_t x220 = 223933236825LL;
	volatile int32_t t54 = -123408547;

    t54 = ((x217^x218)==(x219==x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x221 = 2056775826887381995LLU;
	volatile int16_t x222 = INT16_MIN;
	static volatile int8_t x223 = -1;
	volatile int16_t x224 = -1;
	volatile int32_t t55 = 18;

    t55 = ((x221^x222)==(x223==x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MIN;
	int32_t x226 = INT32_MIN;
	int64_t x227 = -1LL;
	int8_t x228 = INT8_MAX;
	volatile int32_t t56 = 346;

    t56 = ((x225^x226)==(x227==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = 28972091;
	int8_t x230 = -48;
	static volatile uint32_t x231 = UINT32_MAX;

    t57 = ((x229^x230)==(x231==x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x236 = INT8_MAX;
	volatile int32_t t58 = 2706;

    t58 = ((x233^x234)==(x235==x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = UINT32_MAX;
	volatile int64_t x239 = INT64_MAX;
	static volatile int32_t t59 = 15929514;

    t59 = ((x237^x238)==(x239==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x241 = INT32_MAX;
	volatile int32_t x242 = -1;
	int16_t x243 = INT16_MAX;
	int32_t t60 = -69;

    t60 = ((x241^x242)==(x243==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -1LL;
	uint8_t x246 = 2U;
	static uint16_t x247 = UINT16_MAX;
	volatile int8_t x248 = 1;
	volatile int32_t t61 = 5;

    t61 = ((x245^x246)==(x247==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x249 = -26LL;
	int8_t x250 = 35;
	int8_t x252 = 26;
	volatile int32_t t62 = -279;

    t62 = ((x249^x250)==(x251==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MIN;
	int16_t x254 = -2218;
	volatile int64_t x255 = INT64_MIN;
	int8_t x256 = INT8_MAX;
	volatile int32_t t63 = -31;

    t63 = ((x253^x254)==(x255==x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x257 = INT16_MIN;
	int16_t x258 = INT16_MIN;

    t64 = ((x257^x258)==(x259==x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = 17;
	uint16_t x262 = UINT16_MAX;
	volatile uint8_t x263 = 8U;
	int8_t x264 = INT8_MIN;

    t65 = ((x261^x262)==(x263==x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x265 = 31934039518199669LL;
	int8_t x266 = 1;
	int8_t x267 = 1;
	static int64_t x268 = INT64_MIN;
	volatile int32_t t66 = -102222690;

    t66 = ((x265^x266)==(x267==x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x269 = 1U;
	int32_t x271 = -14;
	static volatile uint16_t x272 = 12U;
	static int32_t t67 = 471700;

    t67 = ((x269^x270)==(x271==x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -1024369804558LL;
	int32_t x274 = -1;
	uint16_t x275 = UINT16_MAX;
	static uint8_t x276 = UINT8_MAX;

    t68 = ((x273^x274)==(x275==x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x279 = 10U;
	int32_t x280 = INT32_MAX;
	int32_t t69 = -38077346;

    t69 = ((x277^x278)==(x279==x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x282 = UINT8_MAX;
	static int8_t x283 = INT8_MIN;
	volatile int64_t x284 = INT64_MIN;
	int32_t t70 = 6617;

    t70 = ((x281^x282)==(x283==x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x285 = 0;
	int8_t x286 = 0;
	int8_t x287 = 1;
	volatile uint32_t x288 = 24229U;
	volatile int32_t t71 = 625;

    t71 = ((x285^x286)==(x287==x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x289 = INT8_MAX;
	uint32_t x290 = 14956235U;
	uint16_t x291 = 114U;
	volatile int16_t x292 = -31;

    t72 = ((x289^x290)==(x291==x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MAX;
	static int64_t x294 = INT64_MIN;
	int64_t x295 = INT64_MIN;
	uint64_t x296 = UINT64_MAX;

    t73 = ((x293^x294)==(x295==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x297 = -26;
	static int16_t x298 = INT16_MAX;
	static uint32_t x299 = UINT32_MAX;
	int32_t x300 = INT32_MIN;
	int32_t t74 = -97516349;

    t74 = ((x297^x298)==(x299==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = 110U;
	static int64_t x302 = INT64_MIN;
	static int64_t x303 = INT64_MAX;
	int8_t x304 = -1;
	int32_t t75 = -97881195;

    t75 = ((x301^x302)==(x303==x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = 11652;
	uint16_t x306 = 11937U;
	static int32_t x308 = 343495;
	volatile int32_t t76 = -37728967;

    t76 = ((x305^x306)==(x307==x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = 52;
	int8_t x310 = -3;
	volatile uint8_t x312 = 2U;

    t77 = ((x309^x310)==(x311==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x314 = 2463LLU;
	volatile uint8_t x315 = 0U;
	static uint64_t x316 = 2652294LLU;
	volatile int32_t t78 = -14172;

    t78 = ((x313^x314)==(x315==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = -7938489;
	volatile uint32_t x318 = UINT32_MAX;
	int64_t x319 = INT64_MIN;
	int8_t x320 = 9;
	int32_t t79 = 25674324;

    t79 = ((x317^x318)==(x319==x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x321 = INT8_MIN;
	volatile uint16_t x322 = 7197U;
	int16_t x323 = 17;
	int32_t t80 = -1080229;

    t80 = ((x321^x322)==(x323==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -1;
	int16_t x326 = 1873;
	int32_t x327 = -1;
	static volatile int8_t x328 = 23;
	int32_t t81 = 2;

    t81 = ((x325^x326)==(x327==x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MIN;
	int16_t x331 = INT16_MIN;
	uint32_t x332 = 10152703U;
	int32_t t82 = 34040273;

    t82 = ((x329^x330)==(x331==x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x334 = 385U;
	static int32_t x336 = -101;
	volatile int32_t t83 = -23351501;

    t83 = ((x333^x334)==(x335==x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -373383792;
	int16_t x338 = 4;
	int8_t x339 = -1;
	volatile uint8_t x340 = UINT8_MAX;
	int32_t t84 = 270121;

    t84 = ((x337^x338)==(x339==x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	static int64_t x342 = INT64_MIN;
	uint32_t x343 = 325U;
	int8_t x344 = INT8_MIN;
	static volatile int32_t t85 = 22255;

    t85 = ((x341^x342)==(x343==x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x345 = 1034U;
	int32_t x347 = -1;
	int64_t x348 = INT64_MAX;
	int32_t t86 = -326;

    t86 = ((x345^x346)==(x347==x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x350 = 2;
	int16_t x351 = -1;
	uint32_t x352 = UINT32_MAX;
	volatile int32_t t87 = 208754788;

    t87 = ((x349^x350)==(x351==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x353 = 0U;
	uint16_t x354 = UINT16_MAX;
	static int16_t x355 = INT16_MIN;
	volatile int32_t t88 = 2;

    t88 = ((x353^x354)==(x355==x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MAX;
	uint8_t x358 = UINT8_MAX;
	static int32_t x359 = -1;
	int32_t x360 = INT32_MIN;

    t89 = ((x357^x358)==(x359==x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x361 = 11U;
	volatile uint64_t x364 = 64306225908077LLU;
	int32_t t90 = 98576101;

    t90 = ((x361^x362)==(x363==x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x367 = -804;
	static uint64_t x368 = UINT64_MAX;
	static int32_t t91 = -5;

    t91 = ((x365^x366)==(x367==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = 13U;
	int32_t x371 = INT32_MIN;
	volatile int32_t x372 = 269;
	int32_t t92 = -1;

    t92 = ((x369^x370)==(x371==x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = INT32_MIN;
	volatile int32_t x374 = -1;
	uint8_t x375 = 3U;
	int16_t x376 = INT16_MIN;
	volatile int32_t t93 = 2190;

    t93 = ((x373^x374)==(x375==x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x377 = UINT32_MAX;
	int64_t x378 = INT64_MAX;
	volatile uint8_t x379 = UINT8_MAX;
	uint8_t x380 = 34U;
	int32_t t94 = -2;

    t94 = ((x377^x378)==(x379==x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x381 = 1U;
	uint16_t x382 = UINT16_MAX;
	uint64_t x383 = 17494LLU;
	uint32_t x384 = UINT32_MAX;

    t95 = ((x381^x382)==(x383==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x385 = INT64_MIN;
	int16_t x386 = -178;
	uint32_t x387 = 1705233336U;
	int32_t x388 = INT32_MAX;
	volatile int32_t t96 = 1992482;

    t96 = ((x385^x386)==(x387==x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x391 = INT8_MAX;
	static volatile uint8_t x392 = UINT8_MAX;
	static int32_t t97 = 6438;

    t97 = ((x389^x390)==(x391==x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = 1021810180738LL;
	static int16_t x394 = INT16_MIN;
	uint64_t x395 = 94797LLU;
	volatile uint64_t x396 = UINT64_MAX;
	static int32_t t98 = -126583;

    t98 = ((x393^x394)==(x395==x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x397 = INT64_MAX;
	static int64_t x398 = -1LL;
	volatile uint64_t x399 = 7LLU;
	static volatile int32_t t99 = -25173757;

    t99 = ((x397^x398)==(x399==x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MIN;
	uint16_t x402 = 103U;
	volatile int64_t x403 = INT64_MIN;
	int8_t x404 = -6;
	int32_t t100 = 2;

    t100 = ((x401^x402)==(x403==x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = 2024;
	int64_t x406 = INT64_MIN;
	int8_t x407 = -1;
	int8_t x408 = INT8_MAX;
	static volatile int32_t t101 = 12315;

    t101 = ((x405^x406)==(x407==x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = 1;
	static volatile int8_t x410 = INT8_MAX;
	uint32_t x411 = 2970394U;

    t102 = ((x409^x410)==(x411==x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = UINT32_MAX;
	int8_t x414 = -1;
	int64_t x415 = INT64_MIN;
	int64_t x416 = -3959709431LL;
	volatile int32_t t103 = -22;

    t103 = ((x413^x414)==(x415==x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x418 = 126205U;
	volatile int32_t x419 = -1;
	volatile int32_t x420 = INT32_MIN;
	volatile int32_t t104 = 5773;

    t104 = ((x417^x418)==(x419==x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int8_t x421 = -1;
	volatile int64_t x422 = INT64_MAX;
	static int64_t x424 = 677076409798LL;
	int32_t t105 = -117;

    t105 = ((x421^x422)==(x423==x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int16_t x425 = 11;
	int16_t x426 = INT16_MIN;
	uint16_t x428 = 27813U;
	int32_t t106 = 10746021;

    t106 = ((x425^x426)==(x427==x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x429 = INT8_MIN;
	int16_t x430 = -13;
	volatile int16_t x431 = -1;
	int64_t x432 = -1LL;
	int32_t t107 = -1335041;

    t107 = ((x429^x430)==(x431==x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x434 = -1;
	volatile int16_t x435 = -84;
	uint64_t x436 = 2451901016203LLU;

    t108 = ((x433^x434)==(x435==x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x437 = INT32_MIN;
	uint16_t x438 = UINT16_MAX;
	static uint8_t x439 = UINT8_MAX;
	int16_t x440 = -2046;
	volatile int32_t t109 = -21751471;

    t109 = ((x437^x438)==(x439==x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -1;
	uint16_t x442 = 23272U;
	static uint8_t x444 = 72U;
	int32_t t110 = 1219953;

    t110 = ((x441^x442)==(x443==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MIN;
	volatile int16_t x446 = INT16_MIN;
	uint64_t x447 = 9140500997337965458LLU;
	int16_t x448 = -1;
	int32_t t111 = 33099761;

    t111 = ((x445^x446)==(x447==x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 60U;
	uint32_t x450 = 96U;
	uint64_t x451 = 43711444277841155LLU;
	static int64_t x452 = INT64_MAX;
	int32_t t112 = -394570658;

    t112 = ((x449^x450)==(x451==x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x453 = INT32_MIN;
	int16_t x454 = INT16_MIN;
	uint32_t x455 = 949788U;
	static volatile int64_t x456 = INT64_MIN;
	volatile int32_t t113 = -50675343;

    t113 = ((x453^x454)==(x455==x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = 253U;
	int8_t x458 = -1;
	uint64_t x459 = UINT64_MAX;
	uint8_t x460 = UINT8_MAX;
	int32_t t114 = -31024;

    t114 = ((x457^x458)==(x459==x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x462 = UINT32_MAX;
	uint8_t x463 = 72U;
	static int32_t x464 = INT32_MIN;
	volatile int32_t t115 = 1;

    t115 = ((x461^x462)==(x463==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = UINT64_MAX;
	int16_t x466 = -849;
	int64_t x467 = -1LL;
	static volatile int8_t x468 = INT8_MIN;
	int32_t t116 = -100293;

    t116 = ((x465^x466)==(x467==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x470 = 414832;
	int64_t x471 = -4021043857LL;
	int32_t x472 = INT32_MIN;
	static volatile int32_t t117 = -121210;

    t117 = ((x469^x470)==(x471==x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x474 = INT64_MAX;
	static int8_t x475 = -9;
	int8_t x476 = INT8_MAX;
	int32_t t118 = -2553164;

    t118 = ((x473^x474)==(x475==x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x478 = INT64_MIN;
	int16_t x479 = -1;
	static int64_t x480 = -3163760684LL;
	static volatile int32_t t119 = 21;

    t119 = ((x477^x478)==(x479==x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MAX;
	int8_t x482 = INT8_MIN;
	uint32_t x484 = 0U;
	int32_t t120 = -1144469;

    t120 = ((x481^x482)==(x483==x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = INT32_MIN;
	int16_t x486 = 3447;
	int8_t x487 = INT8_MAX;

    t121 = ((x485^x486)==(x487==x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x490 = 13;
	int8_t x491 = INT8_MIN;

    t122 = ((x489^x490)==(x491==x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = UINT32_MAX;
	int64_t x495 = 488448847674937LL;
	volatile int32_t t123 = 3849951;

    t123 = ((x493^x494)==(x495==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MIN;
	static int32_t x498 = -1;
	volatile int8_t x499 = INT8_MIN;
	int32_t t124 = -3;

    t124 = ((x497^x498)==(x499==x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MIN;
	volatile int16_t x502 = INT16_MIN;
	uint64_t x504 = 2239LLU;
	static volatile int32_t t125 = 21203;

    t125 = ((x501^x502)==(x503==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = 270141786444LLU;
	int32_t x506 = INT32_MIN;
	static int16_t x507 = INT16_MAX;
	volatile uint16_t x508 = 4U;
	int32_t t126 = -131397218;

    t126 = ((x505^x506)==(x507==x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x509 = UINT32_MAX;
	volatile int32_t x511 = INT32_MIN;
	int32_t t127 = 130;

    t127 = ((x509^x510)==(x511==x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x513 = 1;
	static uint16_t x515 = 728U;
	int16_t x516 = 9;
	int32_t t128 = 1359;

    t128 = ((x513^x514)==(x515==x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	static volatile int32_t t129 = 128206204;

    t129 = ((x517^x518)==(x519==x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x521 = UINT16_MAX;
	int16_t x522 = INT16_MIN;
	int32_t x523 = -1;
	volatile int32_t t130 = -1;

    t130 = ((x521^x522)==(x523==x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = -29109150LL;
	int8_t x527 = INT8_MIN;
	int8_t x528 = 2;

    t131 = ((x525^x526)==(x527==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x530 = UINT32_MAX;
	uint8_t x531 = UINT8_MAX;
	static int16_t x532 = 6;

    t132 = ((x529^x530)==(x531==x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MIN;
	uint8_t x534 = UINT8_MAX;
	static int8_t x535 = INT8_MAX;
	volatile int16_t x536 = INT16_MIN;
	int32_t t133 = 0;

    t133 = ((x533^x534)==(x535==x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x537 = -6093;
	static int8_t x538 = 0;
	uint8_t x540 = 0U;
	volatile int32_t t134 = 0;

    t134 = ((x537^x538)==(x539==x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x543 = 0;
	uint8_t x544 = UINT8_MAX;
	static int32_t t135 = 86136;

    t135 = ((x541^x542)==(x543==x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = -1;
	int16_t x546 = INT16_MIN;
	uint64_t x547 = 38LLU;
	uint8_t x548 = UINT8_MAX;
	int32_t t136 = -12779;

    t136 = ((x545^x546)==(x547==x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MIN;
	int16_t x551 = 1;
	volatile int32_t t137 = -3772373;

    t137 = ((x549^x550)==(x551==x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x553 = INT8_MIN;
	static uint16_t x554 = 2607U;
	static int16_t x555 = -31;
	int64_t x556 = INT64_MIN;
	static int32_t t138 = 211927;

    t138 = ((x553^x554)==(x555==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x557 = 82650U;
	static int16_t x558 = -587;
	uint64_t x559 = 8169688883LLU;
	int32_t t139 = 9;

    t139 = ((x557^x558)==(x559==x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = 87U;
	volatile uint32_t x562 = UINT32_MAX;
	int32_t x563 = INT32_MAX;
	int16_t x564 = INT16_MIN;

    t140 = ((x561^x562)==(x563==x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x566 = 0;
	int16_t x567 = INT16_MIN;
	int64_t x568 = INT64_MIN;
	int32_t t141 = -1628;

    t141 = ((x565^x566)==(x567==x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x570 = INT16_MIN;
	static int32_t x571 = -1;
	static volatile int32_t x572 = INT32_MIN;

    t142 = ((x569^x570)==(x571==x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x574 = INT64_MIN;
	volatile uint16_t x575 = 0U;
	int16_t x576 = INT16_MIN;
	int32_t t143 = 679272;

    t143 = ((x573^x574)==(x575==x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x577 = INT16_MIN;
	volatile int32_t x578 = 20;
	uint16_t x579 = UINT16_MAX;
	int32_t t144 = -66849145;

    t144 = ((x577^x578)==(x579==x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = UINT32_MAX;
	uint32_t x582 = 3460U;
	uint32_t x583 = 4589U;

    t145 = ((x581^x582)==(x583==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x586 = UINT64_MAX;
	uint8_t x587 = UINT8_MAX;
	int32_t x588 = -419302;

    t146 = ((x585^x586)==(x587==x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = 0;
	int64_t x590 = INT64_MIN;
	uint16_t x591 = 17U;
	int16_t x592 = -1;
	int32_t t147 = -415117178;

    t147 = ((x589^x590)==(x591==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = 10U;
	int8_t x594 = INT8_MIN;
	volatile int64_t x595 = -1LL;
	volatile int32_t t148 = 1037488337;

    t148 = ((x593^x594)==(x595==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x597 = 4U;
	volatile int8_t x598 = -1;
	int16_t x599 = -1;
	volatile int32_t x600 = 0;

    t149 = ((x597^x598)==(x599==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = 1472;
	int8_t x602 = INT8_MIN;

    t150 = ((x601^x602)==(x603==x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x606 = UINT32_MAX;
	volatile uint8_t x607 = 12U;
	volatile uint16_t x608 = 10230U;
	static int32_t t151 = 56614;

    t151 = ((x605^x606)==(x607==x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x610 = -1LL;
	volatile uint8_t x611 = UINT8_MAX;
	uint64_t x612 = UINT64_MAX;

    t152 = ((x609^x610)==(x611==x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = -1;
	volatile uint16_t x614 = UINT16_MAX;
	uint16_t x615 = 11U;
	int64_t x616 = 21271902019LL;
	volatile int32_t t153 = 1;

    t153 = ((x613^x614)==(x615==x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x618 = 738261;
	int16_t x619 = INT16_MIN;
	int32_t x620 = -5451;
	int32_t t154 = -336;

    t154 = ((x617^x618)==(x619==x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x621 = 46895678;
	uint32_t x622 = 235182610U;
	uint32_t x624 = UINT32_MAX;
	int32_t t155 = -1135844;

    t155 = ((x621^x622)==(x623==x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x625 = 19;
	volatile int64_t x626 = INT64_MIN;
	int16_t x627 = -393;
	uint32_t x628 = 192U;
	volatile int32_t t156 = 50482;

    t156 = ((x625^x626)==(x627==x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x630 = 2U;
	int8_t x631 = INT8_MIN;
	int64_t x632 = INT64_MIN;
	static int32_t t157 = 200665;

    t157 = ((x629^x630)==(x631==x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x633 = 9868889202797LLU;
	volatile int64_t x634 = -1LL;
	static volatile int64_t x635 = -1LL;
	int8_t x636 = -3;
	volatile int32_t t158 = 0;

    t158 = ((x633^x634)==(x635==x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x637 = -935840575;
	int16_t x638 = -1;
	int32_t x639 = INT32_MAX;
	static uint8_t x640 = UINT8_MAX;
	volatile int32_t t159 = -871728497;

    t159 = ((x637^x638)==(x639==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x641 = -1;
	volatile uint16_t x642 = 2731U;
	uint8_t x643 = UINT8_MAX;
	uint16_t x644 = 73U;
	static int32_t t160 = -50;

    t160 = ((x641^x642)==(x643==x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x647 = INT64_MAX;
	static volatile int32_t t161 = 72604;

    t161 = ((x645^x646)==(x647==x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x649 = UINT32_MAX;
	static volatile uint16_t x650 = 179U;
	uint32_t x651 = UINT32_MAX;
	volatile int32_t t162 = 3;

    t162 = ((x649^x650)==(x651==x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x654 = -1;
	int16_t x655 = INT16_MAX;

    t163 = ((x653^x654)==(x655==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x657 = -6316;
	int8_t x658 = INT8_MIN;
	int16_t x659 = INT16_MIN;
	int32_t x660 = INT32_MIN;
	int32_t t164 = 3137;

    t164 = ((x657^x658)==(x659==x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x661 = -1;
	int64_t x662 = 2260548873633596586LL;
	int16_t x663 = -56;
	uint32_t x664 = 284U;
	int32_t t165 = 116360146;

    t165 = ((x661^x662)==(x663==x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x666 = 2;
	int32_t t166 = 0;

    t166 = ((x665^x666)==(x667==x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -1LL;
	int32_t x670 = INT32_MIN;
	volatile uint8_t x671 = UINT8_MAX;
	volatile int32_t t167 = 1061657755;

    t167 = ((x669^x670)==(x671==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = UINT8_MAX;
	uint32_t x674 = UINT32_MAX;
	int64_t x675 = INT64_MIN;
	static uint64_t x676 = UINT64_MAX;
	int32_t t168 = -780434;

    t168 = ((x673^x674)==(x675==x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MAX;
	static int32_t x678 = 2873;
	volatile int16_t x679 = INT16_MIN;
	int32_t x680 = INT32_MIN;
	volatile int32_t t169 = -163213550;

    t169 = ((x677^x678)==(x679==x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -1LL;
	uint64_t x682 = UINT64_MAX;
	int64_t x683 = 22210713906063331LL;
	uint8_t x684 = UINT8_MAX;
	int32_t t170 = 2740;

    t170 = ((x681^x682)==(x683==x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = INT64_MIN;
	int8_t x686 = INT8_MIN;
	static volatile uint32_t x687 = 1908514U;
	int16_t x688 = INT16_MIN;
	static int32_t t171 = -3;

    t171 = ((x685^x686)==(x687==x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x689 = 5951LLU;
	uint16_t x692 = 4891U;
	int32_t t172 = -789412743;

    t172 = ((x689^x690)==(x691==x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MAX;
	int16_t x694 = -974;
	uint64_t x696 = 53257LLU;
	static int32_t t173 = 15825810;

    t173 = ((x693^x694)==(x695==x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = 15007353LLU;
	int32_t x698 = 0;
	int8_t x699 = INT8_MIN;
	int16_t x700 = 406;
	volatile int32_t t174 = -3;

    t174 = ((x697^x698)==(x699==x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x702 = -7;
	int32_t x703 = INT32_MAX;
	int32_t x704 = 48;

    t175 = ((x701^x702)==(x703==x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MIN;
	int64_t x706 = INT64_MIN;
	int32_t x708 = INT32_MIN;
	int32_t t176 = 37259913;

    t176 = ((x705^x706)==(x707==x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x710 = INT32_MIN;
	int32_t x711 = -1;
	static uint16_t x712 = 567U;
	int32_t t177 = 2;

    t177 = ((x709^x710)==(x711==x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = 5;
	volatile uint64_t x714 = 462LLU;
	uint16_t x715 = UINT16_MAX;
	static int16_t x716 = INT16_MAX;
	static volatile int32_t t178 = -1;

    t178 = ((x713^x714)==(x715==x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x717 = UINT16_MAX;
	volatile int16_t x718 = -1;
	static volatile int16_t x719 = INT16_MAX;
	volatile int32_t t179 = 278047457;

    t179 = ((x717^x718)==(x719==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MAX;
	int64_t x722 = -1LL;
	int16_t x723 = 5504;
	int32_t x724 = -1;
	volatile int32_t t180 = 14;

    t180 = ((x721^x722)==(x723==x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x727 = 7U;
	volatile uint8_t x728 = 1U;
	int32_t t181 = 11828;

    t181 = ((x725^x726)==(x727==x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = 64U;
	int64_t x730 = INT64_MAX;
	int64_t x732 = 2305744269409LL;
	int32_t t182 = -39954583;

    t182 = ((x729^x730)==(x731==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x733 = 193077505264800655LLU;
	uint8_t x734 = 7U;
	uint16_t x736 = 2U;
	volatile int32_t t183 = 709743988;

    t183 = ((x733^x734)==(x735==x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x738 = 160786;
	int8_t x739 = INT8_MAX;
	static int32_t x740 = -10;
	volatile int32_t t184 = 427391;

    t184 = ((x737^x738)==(x739==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MIN;
	int64_t x742 = INT64_MIN;
	static uint16_t x743 = UINT16_MAX;
	int32_t x744 = INT32_MIN;
	int32_t t185 = -54842;

    t185 = ((x741^x742)==(x743==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = 8U;
	int8_t x746 = INT8_MAX;
	static int16_t x747 = INT16_MIN;
	int16_t x748 = INT16_MIN;

    t186 = ((x745^x746)==(x747==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = UINT64_MAX;
	uint64_t x751 = 130318106LLU;
	int16_t x752 = INT16_MAX;

    t187 = ((x749^x750)==(x751==x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MIN;
	int8_t x754 = INT8_MAX;
	uint32_t x756 = 31U;
	volatile int32_t t188 = 67649;

    t188 = ((x753^x754)==(x755==x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	uint16_t x759 = 539U;
	static int32_t t189 = 1;

    t189 = ((x757^x758)==(x759==x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x761 = 37U;
	int16_t x762 = INT16_MIN;
	static uint16_t x764 = 2U;

    t190 = ((x761^x762)==(x763==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x766 = -1;
	volatile int8_t x767 = INT8_MIN;
	uint32_t x768 = UINT32_MAX;
	int32_t t191 = 2612;

    t191 = ((x765^x766)==(x767==x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MIN;
	static int8_t x770 = INT8_MIN;
	static uint8_t x771 = 4U;
	int16_t x772 = 97;

    t192 = ((x769^x770)==(x771==x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = 2LLU;
	volatile int8_t x774 = INT8_MIN;
	static int32_t x775 = -192297;
	static int64_t x776 = -1LL;

    t193 = ((x773^x774)==(x775==x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 1093U;
	int64_t x778 = 227LL;
	static int8_t x779 = -14;

    t194 = ((x777^x778)==(x779==x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x781 = INT8_MIN;
	volatile int16_t x782 = INT16_MAX;
	int32_t x784 = INT32_MIN;

    t195 = ((x781^x782)==(x783==x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = 6U;
	uint8_t x786 = 4U;
	uint16_t x787 = 2881U;
	int32_t t196 = 472791583;

    t196 = ((x785^x786)==(x787==x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x789 = -8591;
	volatile int8_t x790 = -3;
	int16_t x792 = INT16_MIN;
	volatile int32_t t197 = 0;

    t197 = ((x789^x790)==(x791==x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MAX;
	int8_t x794 = -3;
	volatile int32_t x795 = 120;
	volatile int8_t x796 = -1;
	volatile int32_t t198 = 593;

    t198 = ((x793^x794)==(x795==x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x799 = -1;
	uint8_t x800 = UINT8_MAX;
	int32_t t199 = -2;

    t199 = ((x797^x798)==(x799==x800));

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


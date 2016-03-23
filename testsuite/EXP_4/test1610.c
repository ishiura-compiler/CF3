
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

int16_t x3 = -1;
int16_t x7 = INT16_MAX;
int64_t x8 = -1LL;
int64_t x25 = INT64_MIN;
uint32_t x27 = 804777991U;
volatile int32_t x31 = INT32_MIN;
volatile int16_t x36 = -1;
int64_t x37 = INT64_MIN;
volatile uint16_t x38 = 1214U;
int64_t x40 = INT64_MIN;
uint64_t x49 = 1LLU;
volatile uint32_t x53 = 244616U;
static int16_t x58 = INT16_MAX;
int64_t t15 = INT64_MIN;
static int64_t x65 = INT64_MIN;
volatile uint64_t t16 = 242586852LLU;
uint64_t t17 = 19900782377679LLU;
int32_t x73 = -3262033;
volatile int64_t x84 = -1LL;
volatile int32_t t20 = 140755;
static volatile int64_t x91 = 2035501264LL;
int16_t x98 = 150;
int8_t x111 = -1;
volatile uint64_t x112 = UINT64_MAX;
volatile int64_t t28 = 1053835LL;
uint64_t x119 = UINT64_MAX;
int64_t x120 = INT64_MIN;
static uint64_t x123 = UINT64_MAX;
int32_t t30 = INT32_MAX;
static uint16_t x134 = 9U;
volatile int64_t t33 = -1LL;
int32_t t35 = -13;
static int64_t t37 = INT64_MAX;
volatile int16_t x169 = 1;
uint64_t x170 = 6143785714329527LLU;
int8_t x172 = 1;
int8_t x176 = -3;
int32_t t44 = 20;
static int32_t t45 = INT32_MAX;
static uint8_t x188 = 79U;
int32_t t46 = -7;
int16_t x190 = 876;
volatile uint64_t x191 = 23LLU;
uint64_t x204 = 414306LLU;
int8_t x208 = INT8_MAX;
static volatile uint64_t x209 = 1LLU;
int32_t x213 = INT32_MIN;
volatile uint64_t x214 = UINT64_MAX;
volatile uint64_t t53 = 23088039093947LLU;
uint8_t x221 = UINT8_MAX;
static int8_t x224 = INT8_MIN;
int64_t t55 = 3080605731522442723LL;
int32_t x239 = -3895;
int32_t x240 = INT32_MAX;
int64_t x241 = INT64_MIN;
uint32_t x259 = 129460852U;
int32_t x260 = INT32_MIN;
uint32_t t64 = UINT32_MAX;
int16_t x269 = -1;
volatile int16_t x275 = -2;
int32_t x276 = 6074219;
int64_t x280 = -1LL;
uint16_t x282 = 3U;
int32_t x284 = INT32_MIN;
volatile int16_t x286 = -1;
volatile uint32_t x287 = 24650718U;
int64_t t71 = INT64_MAX;
int16_t x298 = INT16_MIN;
uint32_t t74 = 179504935U;
uint8_t x307 = 44U;
volatile uint64_t t78 = UINT64_MAX;
volatile uint16_t x328 = UINT16_MAX;
volatile int64_t x331 = INT64_MAX;
int64_t t82 = -3825342844LL;
int16_t x343 = INT16_MAX;
volatile int32_t t85 = -703871;
int64_t t86 = INT64_MIN;
volatile uint64_t x352 = 2878434766622991LLU;
int32_t x355 = -116119969;
static int64_t x357 = -1LL;
static uint16_t x369 = UINT16_MAX;
uint64_t x373 = 7344936030LLU;
uint8_t x374 = 0U;
int8_t x378 = -3;
volatile uint32_t x379 = 962U;
volatile int32_t t94 = -3578985;
int64_t x381 = INT64_MIN;
volatile int8_t x384 = -1;
int64_t x387 = INT64_MIN;
static uint64_t t96 = 55246299LLU;
int16_t x392 = INT16_MAX;
uint32_t x393 = 2034496577U;
uint32_t t98 = 117323U;
volatile int32_t t99 = 1536103;
int64_t x403 = INT64_MAX;
int32_t t100 = -38;
volatile uint32_t x409 = 107917477U;
volatile int16_t x414 = INT16_MIN;
int32_t t104 = -6609105;
int8_t x422 = 50;
int64_t x424 = -1LL;
volatile int32_t t105 = 1;
static volatile int64_t t107 = -95LL;
uint8_t x434 = 27U;
uint16_t x444 = UINT16_MAX;
int64_t t110 = 30695654442LL;
int16_t x447 = -1;
static volatile uint32_t t111 = 3U;
static int8_t x451 = 1;
int32_t x452 = 56445;
static int32_t t112 = 146;
static int64_t x454 = -1LL;
volatile uint16_t x458 = 122U;
int16_t x465 = INT16_MIN;
int16_t x468 = 8046;
int64_t x471 = -560705027989306LL;
int32_t t120 = -467611;
int64_t x485 = 41925886LL;
volatile int16_t x492 = -1;
static volatile int16_t x496 = INT16_MIN;
uint64_t t123 = 25550690093038780LLU;
int32_t t124 = 4667;
static int8_t x506 = INT8_MIN;
volatile int64_t x510 = -1LL;
static int8_t x520 = INT8_MAX;
int32_t t130 = 2;
uint16_t x529 = 2U;
int16_t x530 = INT16_MIN;
int16_t x532 = 2627;
volatile uint16_t x535 = UINT16_MAX;
uint8_t x545 = 9U;
uint32_t x546 = UINT32_MAX;
int64_t x548 = INT64_MAX;
uint16_t x550 = UINT16_MAX;
int8_t x552 = -1;
volatile int16_t x553 = -1;
uint8_t x560 = UINT8_MAX;
int32_t t139 = INT32_MAX;
int32_t x562 = INT32_MIN;
int64_t x564 = 27LL;
int64_t x582 = INT64_MAX;
uint32_t x583 = UINT32_MAX;
uint64_t t145 = 14138LLU;
static int64_t x590 = 1866LL;
uint64_t x591 = UINT64_MAX;
int16_t x592 = -191;
int64_t x600 = INT64_MIN;
volatile uint64_t t151 = 370LLU;
int32_t x616 = -1;
int64_t x623 = INT64_MAX;
static volatile int16_t x627 = -94;
volatile int64_t t156 = -1514250190811923947LL;
int8_t x633 = -1;
static int16_t x643 = INT16_MAX;
uint64_t t160 = 55289873LLU;
int64_t x646 = -391LL;
int32_t x647 = INT32_MIN;
int16_t x650 = INT16_MAX;
uint16_t x652 = 1U;
static volatile int32_t t162 = -739959741;
static int16_t x659 = INT16_MIN;
int64_t x662 = INT64_MIN;
volatile uint16_t x666 = 3843U;
int8_t x672 = INT8_MAX;
volatile uint32_t x676 = 1679613U;
int32_t x688 = INT32_MIN;
volatile uint32_t x698 = UINT32_MAX;
static int8_t x702 = INT8_MIN;
volatile uint64_t x703 = UINT64_MAX;
uint64_t x706 = 43LLU;
static volatile int16_t x708 = INT16_MIN;
int64_t x715 = -63LL;
static int16_t x716 = -1;
volatile uint64_t t178 = UINT64_MAX;
uint16_t x719 = UINT16_MAX;
int8_t x728 = -26;
volatile int32_t t181 = 2;
int32_t x730 = INT32_MIN;
volatile uint64_t x740 = 5789622LLU;
static int64_t x742 = INT64_MIN;
int64_t t187 = 841484983605792172LL;
int16_t x759 = INT16_MIN;
int16_t x760 = -1;
int16_t x765 = INT16_MIN;
int16_t x776 = INT16_MAX;
static uint32_t x783 = UINT32_MAX;
int32_t x784 = -31;
int64_t x789 = INT64_MIN;
int16_t x791 = -1;
static int8_t x793 = INT8_MIN;
uint64_t t199 = 3049LLU;


void f0(void) {
    	volatile uint32_t x1 = UINT32_MAX;
	uint32_t x2 = UINT32_MAX;
	int64_t x4 = INT64_MIN;
	volatile uint32_t t0 = 28U;

    t0 = (x1^(x2*(x3>x4)));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 13U;
	uint64_t x6 = 1821558196944731296LLU;
	uint64_t t1 = 3871LLU;

    t1 = (x5^(x6*(x7>x8)));

    if (t1 != 1821558196944731309LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	int8_t x10 = 1;
	int32_t x11 = -1710286;
	int64_t x12 = -3865474LL;
	volatile int32_t t2 = 98;

    t2 = (x9^(x10*(x11>x12)));

    if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 19U;
	volatile uint16_t x14 = 29415U;
	uint32_t x15 = 129U;
	uint32_t x16 = 1052483U;
	static int32_t t3 = 50;

    t3 = (x13^(x14*(x15>x16)));

    if (t3 != 19) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 1U;
	static uint64_t x18 = UINT64_MAX;
	int8_t x19 = -4;
	uint64_t x20 = 261985LLU;
	uint64_t t4 = 97263755LLU;

    t4 = (x17^(x18*(x19>x20)));

    if (t4 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x21 = 281LLU;
	int64_t x22 = -1930839600344LL;
	int16_t x23 = INT16_MAX;
	static volatile int16_t x24 = INT16_MIN;
	static volatile uint64_t t5 = 110247588LLU;

    t5 = (x21^(x22*(x23>x24)));

    if (t5 != 18446742142869951025LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x26 = UINT64_MAX;
	int32_t x28 = INT32_MIN;
	uint64_t t6 = 16230LLU;

    t6 = (x25^(x26*(x27>x28)));

    if (t6 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = INT8_MAX;
	static int8_t x30 = -49;
	volatile int16_t x32 = INT16_MIN;
	int32_t t7 = 2;

    t7 = (x29^(x30*(x31>x32)));

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 48U;
	uint8_t x34 = UINT8_MAX;
	uint64_t x35 = 4794507LLU;
	int32_t t8 = -1773160;

    t8 = (x33^(x34*(x35>x36)));

    if (t8 != 48) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x39 = 2U;
	volatile int64_t t9 = -18LL;

    t9 = (x37^(x38*(x39>x40)));

    if (t9 != -9223372036854774594LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 18;
	static volatile int32_t x42 = 197;
	int32_t x43 = -1;
	static int8_t x44 = -1;
	volatile int32_t t10 = 9085398;

    t10 = (x41^(x42*(x43>x44)));

    if (t10 != 18) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = UINT16_MAX;
	int64_t x46 = INT64_MAX;
	int32_t x47 = INT32_MIN;
	int32_t x48 = INT32_MAX;
	int64_t t11 = -23509203LL;

    t11 = (x45^(x46*(x47>x48)));

    if (t11 != 65535LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x50 = INT32_MIN;
	volatile int8_t x51 = INT8_MIN;
	static uint64_t x52 = UINT64_MAX;
	uint64_t t12 = 8358109616765LLU;

    t12 = (x49^(x50*(x51>x52)));

    if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x54 = 9844;
	volatile int8_t x55 = -1;
	int8_t x56 = -1;
	uint32_t t13 = 14256U;

    t13 = (x53^(x54*(x55>x56)));

    if (t13 != 244616U) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x57 = 334767LLU;
	uint8_t x59 = 11U;
	volatile int64_t x60 = INT64_MAX;
	uint64_t t14 = 7217091130LLU;

    t14 = (x57^(x58*(x59>x60)));

    if (t14 != 334767LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	static volatile int16_t x62 = INT16_MAX;
	int32_t x63 = INT32_MIN;
	static int32_t x64 = 172431;

    t15 = (x61^(x62*(x63>x64)));

    if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x66 = 4LLU;
	uint16_t x67 = UINT16_MAX;
	uint8_t x68 = 41U;

    t16 = (x65^(x66*(x67>x68)));

    if (t16 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x69 = 32160U;
	uint64_t x70 = 246461LLU;
	int16_t x71 = 10;
	uint16_t x72 = 32U;

    t17 = (x69^(x70*(x71>x72)));

    if (t17 != 32160LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = INT32_MIN;
	uint32_t x75 = 102U;
	volatile int8_t x76 = INT8_MIN;
	int32_t t18 = 326399942;

    t18 = (x73^(x74*(x75>x76)));

    if (t18 != -3262033) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = 2606777;
	int8_t x78 = INT8_MIN;
	int16_t x79 = INT16_MIN;
	uint16_t x80 = 217U;
	volatile int32_t t19 = 19944;

    t19 = (x77^(x78*(x79>x80)));

    if (t19 != 2606777) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = UINT8_MAX;
	volatile int8_t x82 = 33;
	int32_t x83 = -125644182;

    t20 = (x81^(x82*(x83>x84)));

    if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -1;
	static int16_t x86 = INT16_MIN;
	int32_t x87 = INT32_MIN;
	uint16_t x88 = 33U;
	static volatile int32_t t21 = 0;

    t21 = (x85^(x86*(x87>x88)));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -1;
	int8_t x90 = INT8_MIN;
	int16_t x92 = INT16_MAX;
	int32_t t22 = -995;

    t22 = (x89^(x90*(x91>x92)));

    if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	uint64_t x94 = UINT64_MAX;
	static int16_t x95 = INT16_MAX;
	int8_t x96 = INT8_MAX;
	volatile uint64_t t23 = 3LLU;

    t23 = (x93^(x94*(x95>x96)));

    if (t23 != 32767LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 68U;
	static int16_t x99 = 1;
	int16_t x100 = -8;
	volatile int32_t t24 = -123966718;

    t24 = (x97^(x98*(x99>x100)));

    if (t24 != 210) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x101 = INT16_MIN;
	uint8_t x102 = 23U;
	uint8_t x103 = 94U;
	static int64_t x104 = -91316177536LL;
	volatile int32_t t25 = 67610323;

    t25 = (x101^(x102*(x103>x104)));

    if (t25 != -32745) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x105 = INT16_MIN;
	static volatile uint8_t x106 = 7U;
	int64_t x107 = INT64_MIN;
	volatile int16_t x108 = 1;
	static volatile int32_t t26 = 0;

    t26 = (x105^(x106*(x107>x108)));

    if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = 115LLU;
	static volatile int16_t x110 = INT16_MAX;
	volatile uint64_t t27 = 8487570157294LLU;

    t27 = (x109^(x110*(x111>x112)));

    if (t27 != 115LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = UINT8_MAX;
	volatile int64_t x114 = INT64_MIN;
	int64_t x115 = INT64_MIN;
	int16_t x116 = INT16_MIN;

    t28 = (x113^(x114*(x115>x116)));

    if (t28 != 255LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	uint16_t x118 = 474U;
	volatile int32_t t29 = -5670;

    t29 = (x117^(x118*(x119>x120)));

    if (t29 != -422) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -1;
	int32_t x122 = INT32_MIN;
	uint64_t x124 = 747382671LLU;

    t30 = (x121^(x122*(x123>x124)));

    if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -73475;
	static volatile uint64_t x126 = 72025140977268891LLU;
	int64_t x127 = INT64_MIN;
	uint16_t x128 = UINT16_MAX;
	static uint64_t t31 = 1724LLU;

    t31 = (x125^(x126*(x127>x128)));

    if (t31 != 18446744073709478141LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MIN;
	int64_t x130 = -8939156363492716LL;
	int32_t x131 = INT32_MIN;
	int64_t x132 = 12LL;
	volatile int64_t t32 = -346LL;

    t32 = (x129^(x130*(x131>x132)));

    if (t32 != -2147483648LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MAX;
	int64_t x135 = INT64_MAX;
	static uint32_t x136 = 926014365U;

    t33 = (x133^(x134*(x135>x136)));

    if (t33 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	static int32_t x138 = INT32_MAX;
	static int16_t x139 = -1;
	static int8_t x140 = INT8_MAX;
	int64_t t34 = INT64_MIN;

    t34 = (x137^(x138*(x139>x140)));

    if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x141 = INT8_MAX;
	volatile int16_t x142 = 109;
	volatile uint8_t x143 = 55U;
	static int64_t x144 = -15276124LL;

    t35 = (x141^(x142*(x143>x144)));

    if (t35 != 18) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint32_t x145 = 19833903U;
	static uint16_t x146 = UINT16_MAX;
	volatile int64_t x147 = INT64_MIN;
	uint8_t x148 = 65U;
	volatile uint32_t t36 = 26U;

    t36 = (x145^(x146*(x147>x148)));

    if (t36 != 19833903U) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x149 = INT64_MIN;
	volatile int16_t x150 = -1;
	volatile int8_t x151 = 1;
	volatile int32_t x152 = -744;

    t37 = (x149^(x150*(x151>x152)));

    if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = -74645;
	uint32_t x154 = 436602U;
	int64_t x155 = -1LL;
	int64_t x156 = -84LL;
	volatile uint32_t t38 = 15U;

    t38 = (x153^(x154*(x155>x156)));

    if (t38 != 4294472977U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	volatile uint64_t x158 = 215778708539368LLU;
	int8_t x159 = -6;
	static uint64_t x160 = UINT64_MAX;
	uint64_t t39 = 2624LLU;

    t39 = (x157^(x158*(x159>x160)));

    if (t39 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MIN;
	int8_t x162 = -7;
	int64_t x163 = INT64_MIN;
	int32_t x164 = 578932180;
	volatile int32_t t40 = INT32_MIN;

    t40 = (x161^(x162*(x163>x164)));

    if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	uint16_t x166 = 6252U;
	int32_t x167 = INT32_MIN;
	uint64_t x168 = 82244289796992LLU;
	volatile int64_t t41 = -8504775699293221LL;

    t41 = (x165^(x166*(x167>x168)));

    if (t41 != -9223372036854769556LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x171 = UINT64_MAX;
	volatile uint64_t t42 = 946587066439183LLU;

    t42 = (x169^(x170*(x171>x172)));

    if (t42 != 6143785714329526LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = -50;
	uint16_t x174 = UINT16_MAX;
	int64_t x175 = 2669290538LL;
	volatile int32_t t43 = -184;

    t43 = (x173^(x174*(x175>x176)));

    if (t43 != -65487) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = 151;
	int8_t x178 = -1;
	uint64_t x179 = 966708095858153LLU;
	uint8_t x180 = 1U;

    t44 = (x177^(x178*(x179>x180)));

    if (t44 != -152) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MAX;
	int8_t x182 = -1;
	uint16_t x183 = UINT16_MAX;
	static int64_t x184 = 37594982976427LL;

    t45 = (x181^(x182*(x183>x184)));

    if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = 0;
	int32_t x186 = -1;
	static uint16_t x187 = UINT16_MAX;

    t46 = (x185^(x186*(x187>x188)));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -25LL;
	volatile int16_t x192 = -3822;
	int64_t t47 = 205863720274899707LL;

    t47 = (x189^(x190*(x191>x192)));

    if (t47 != -25LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 15U;
	int64_t x194 = 342LL;
	int64_t x195 = INT64_MIN;
	int32_t x196 = INT32_MIN;
	int64_t t48 = -801829620579240LL;

    t48 = (x193^(x194*(x195>x196)));

    if (t48 != 15LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MIN;
	int64_t x198 = INT64_MIN;
	volatile uint8_t x199 = 1U;
	static volatile uint64_t x200 = UINT64_MAX;
	int64_t t49 = INT64_MIN;

    t49 = (x197^(x198*(x199>x200)));

    if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = UINT64_MAX;
	uint32_t x202 = 1681U;
	uint8_t x203 = 5U;
	volatile uint64_t t50 = UINT64_MAX;

    t50 = (x201^(x202*(x203>x204)));

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = 0;
	static int64_t x206 = -1LL;
	uint64_t x207 = 947286801LLU;
	int64_t t51 = -3366615242753LL;

    t51 = (x205^(x206*(x207>x208)));

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x210 = 327U;
	uint32_t x211 = UINT32_MAX;
	int32_t x212 = -708;
	static volatile uint64_t t52 = 13LLU;

    t52 = (x209^(x210*(x211>x212)));

    if (t52 != 326LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x215 = INT16_MAX;
	volatile int8_t x216 = 32;

    t53 = (x213^(x214*(x215>x216)));

    if (t53 != 2147483647LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MIN;
	int64_t x218 = 13406353LL;
	int16_t x219 = 2;
	static int8_t x220 = -1;
	volatile int64_t t54 = 0LL;

    t54 = (x217^(x218*(x219>x220)));

    if (t54 != -13406447LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x222 = -1LL;
	volatile uint32_t x223 = UINT32_MAX;

    t55 = (x221^(x222*(x223>x224)));

    if (t55 != -256LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -1;
	uint64_t x226 = 26785982760561LLU;
	static int32_t x227 = INT32_MAX;
	volatile int8_t x228 = 13;
	uint64_t t56 = 270LLU;

    t56 = (x225^(x226*(x227>x228)));

    if (t56 != 18446717287726791054LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x229 = UINT8_MAX;
	uint16_t x230 = UINT16_MAX;
	int32_t x231 = INT32_MIN;
	volatile uint16_t x232 = UINT16_MAX;
	volatile int32_t t57 = 5895;

    t57 = (x229^(x230*(x231>x232)));

    if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = -1LL;
	int8_t x234 = INT8_MIN;
	volatile int64_t x235 = -1LL;
	static volatile uint8_t x236 = UINT8_MAX;
	static volatile int64_t t58 = -11154461217636LL;

    t58 = (x233^(x234*(x235>x236)));

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -258801528730874894LL;
	volatile int32_t x238 = INT32_MAX;
	int64_t t59 = 332878LL;

    t59 = (x237^(x238*(x239>x240)));

    if (t59 != -258801528730874894LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x242 = INT32_MIN;
	int8_t x243 = -2;
	static int32_t x244 = INT32_MIN;
	volatile int64_t t60 = -31328384395468827LL;

    t60 = (x241^(x242*(x243>x244)));

    if (t60 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = UINT8_MAX;
	static volatile int64_t x246 = INT64_MIN;
	volatile int64_t x247 = INT64_MIN;
	static uint16_t x248 = 379U;
	volatile int64_t t61 = -758LL;

    t61 = (x245^(x246*(x247>x248)));

    if (t61 != 255LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	int8_t x250 = INT8_MIN;
	int32_t x251 = INT32_MIN;
	static uint32_t x252 = UINT32_MAX;
	int32_t t62 = -469886031;

    t62 = (x249^(x250*(x251>x252)));

    if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = 964586U;
	volatile int64_t x254 = INT64_MAX;
	uint32_t x255 = 4203U;
	int8_t x256 = INT8_MAX;
	static int64_t t63 = 2695180686566LL;

    t63 = (x253^(x254*(x255>x256)));

    if (t63 != 9223372036853811221LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = UINT32_MAX;
	static int8_t x258 = 1;

    t64 = (x257^(x258*(x259>x260)));

    if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = INT8_MIN;
	volatile int16_t x262 = INT16_MIN;
	int8_t x263 = INT8_MIN;
	int8_t x264 = INT8_MIN;
	int32_t t65 = -23770017;

    t65 = (x261^(x262*(x263>x264)));

    if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MAX;
	int8_t x266 = INT8_MIN;
	int8_t x267 = INT8_MIN;
	uint32_t x268 = 102370U;
	int32_t t66 = 1308;

    t66 = (x265^(x266*(x267>x268)));

    if (t66 != -2147483521) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x270 = -1LL;
	volatile int64_t x271 = -1LL;
	int32_t x272 = 13141736;
	volatile int64_t t67 = 8228755583LL;

    t67 = (x269^(x270*(x271>x272)));

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = 1;
	int8_t x274 = INT8_MIN;
	static volatile int32_t t68 = 316890943;

    t68 = (x273^(x274*(x275>x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = 12U;
	uint8_t x278 = 43U;
	uint16_t x279 = 116U;
	int32_t t69 = 817912;

    t69 = (x277^(x278*(x279>x280)));

    if (t69 != 39) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -199013715512026629LL;
	int32_t x283 = -253770989;
	int64_t t70 = 5563LL;

    t70 = (x281^(x282*(x283>x284)));

    if (t70 != -199013715512026632LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MIN;
	uint16_t x288 = UINT16_MAX;

    t71 = (x285^(x286*(x287>x288)));

    if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = -1;
	int64_t x290 = 1466LL;
	static int32_t x291 = INT32_MIN;
	int16_t x292 = INT16_MIN;
	volatile int64_t t72 = 19LL;

    t72 = (x289^(x290*(x291>x292)));

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 0U;
	int16_t x294 = 7;
	uint64_t x295 = 2LLU;
	static int16_t x296 = 58;
	int32_t t73 = -179552538;

    t73 = (x293^(x294*(x295>x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint32_t x297 = UINT32_MAX;
	int64_t x299 = INT64_MAX;
	static volatile int32_t x300 = 83;

    t74 = (x297^(x298*(x299>x300)));

    if (t74 != 32767U) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = -15;
	volatile int64_t x302 = -1LL;
	int32_t x303 = INT32_MAX;
	uint8_t x304 = 19U;
	int64_t t75 = -7LL;

    t75 = (x301^(x302*(x303>x304)));

    if (t75 != 14LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x305 = UINT64_MAX;
	volatile uint32_t x306 = UINT32_MAX;
	int16_t x308 = -1;
	uint64_t t76 = 94752284100538307LLU;

    t76 = (x305^(x306*(x307>x308)));

    if (t76 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = 37LLU;
	uint64_t x310 = 145585234212822628LLU;
	int8_t x311 = -53;
	uint8_t x312 = 0U;
	uint64_t t77 = 7843LLU;

    t77 = (x309^(x310*(x311>x312)));

    if (t77 != 37LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x313 = UINT64_MAX;
	static int16_t x314 = INT16_MIN;
	static int16_t x315 = -2661;
	int8_t x316 = INT8_MIN;

    t78 = (x313^(x314*(x315>x316)));

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MAX;
	int64_t x319 = 1021539LL;
	uint8_t x320 = 11U;
	int32_t t79 = 689557;

    t79 = (x317^(x318*(x319>x320)));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x321 = UINT64_MAX;
	int8_t x322 = INT8_MIN;
	uint16_t x323 = 3U;
	volatile int8_t x324 = -59;
	uint64_t t80 = 5698LLU;

    t80 = (x321^(x322*(x323>x324)));

    if (t80 != 127LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x325 = -60867LL;
	int8_t x326 = -1;
	int64_t x327 = -1LL;
	static int64_t t81 = -51050554LL;

    t81 = (x325^(x326*(x327>x328)));

    if (t81 != -60867LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x329 = INT64_MIN;
	int16_t x330 = 15609;
	int32_t x332 = 6334;

    t82 = (x329^(x330*(x331>x332)));

    if (t82 != -9223372036854760199LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x333 = INT32_MAX;
	int32_t x334 = INT32_MIN;
	uint8_t x335 = UINT8_MAX;
	int8_t x336 = INT8_MIN;
	volatile int32_t t83 = -68688;

    t83 = (x333^(x334*(x335>x336)));

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x337 = INT8_MIN;
	uint16_t x338 = 0U;
	int32_t x339 = -1070157902;
	int32_t x340 = 1;
	int32_t t84 = -5;

    t84 = (x337^(x338*(x339>x340)));

    if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -7;
	volatile int32_t x342 = INT32_MIN;
	static uint8_t x344 = 3U;

    t85 = (x341^(x342*(x343>x344)));

    if (t85 != 2147483641) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x345 = INT64_MIN;
	int16_t x346 = INT16_MIN;
	volatile int32_t x347 = 8;
	uint8_t x348 = 61U;

    t86 = (x345^(x346*(x347>x348)));

    if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x349 = INT32_MAX;
	static int16_t x350 = -1691;
	volatile int32_t x351 = -416;
	int32_t t87 = 321174232;

    t87 = (x349^(x350*(x351>x352)));

    if (t87 != -2147481958) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x353 = INT64_MIN;
	static int32_t x354 = 407;
	int64_t x356 = -514997431000774LL;
	volatile int64_t t88 = -812333364505465LL;

    t88 = (x353^(x354*(x355>x356)));

    if (t88 != -9223372036854775401LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x358 = 285823321222LLU;
	int8_t x359 = -4;
	int16_t x360 = 0;
	static volatile uint64_t t89 = UINT64_MAX;

    t89 = (x357^(x358*(x359>x360)));

    if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x361 = INT16_MAX;
	int16_t x362 = INT16_MIN;
	int16_t x363 = -274;
	int64_t x364 = 216617828778LL;
	int32_t t90 = 1878511;

    t90 = (x361^(x362*(x363>x364)));

    if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -1LL;
	volatile uint8_t x366 = UINT8_MAX;
	static volatile uint32_t x367 = 8U;
	uint16_t x368 = UINT16_MAX;
	static volatile int64_t t91 = -136723538963LL;

    t91 = (x365^(x366*(x367>x368)));

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x370 = -10;
	int32_t x371 = 140;
	int8_t x372 = INT8_MAX;
	int32_t t92 = -517130;

    t92 = (x369^(x370*(x371>x372)));

    if (t92 != -65527) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x375 = INT64_MIN;
	uint8_t x376 = UINT8_MAX;
	volatile uint64_t t93 = 1428141484438LLU;

    t93 = (x373^(x374*(x375>x376)));

    if (t93 != 7344936030LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = -15;
	int64_t x380 = 2161LL;

    t94 = (x377^(x378*(x379>x380)));

    if (t94 != -15) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x382 = -2;
	int64_t x383 = INT64_MIN;
	int64_t t95 = INT64_MIN;

    t95 = (x381^(x382*(x383>x384)));

    if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x385 = -52;
	volatile uint64_t x386 = 1945584795642LLU;
	int64_t x388 = INT64_MAX;

    t96 = (x385^(x386*(x387>x388)));

    if (t96 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MAX;
	int64_t x390 = -2181778614008LL;
	static int8_t x391 = 52;
	volatile int64_t t97 = -56248595000LL;

    t97 = (x389^(x390*(x391>x392)));

    if (t97 != 2147483647LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x394 = 932U;
	int32_t x395 = INT32_MIN;
	volatile int16_t x396 = INT16_MIN;

    t98 = (x393^(x394*(x395>x396)));

    if (t98 != 2034496577U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x397 = UINT16_MAX;
	int16_t x398 = INT16_MAX;
	static uint32_t x399 = 209519U;
	uint8_t x400 = 31U;

    t99 = (x397^(x398*(x399>x400)));

    if (t99 != 32768) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MAX;
	int32_t x402 = INT32_MIN;
	int64_t x404 = -10944762730LL;

    t100 = (x401^(x402*(x403>x404)));

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 125U;
	uint16_t x406 = UINT16_MAX;
	uint16_t x407 = 199U;
	uint64_t x408 = 560247162144712LLU;
	int32_t t101 = 2698;

    t101 = (x405^(x406*(x407>x408)));

    if (t101 != 125) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x410 = INT8_MIN;
	int8_t x411 = INT8_MIN;
	int32_t x412 = 29233;
	static uint32_t t102 = 172U;

    t102 = (x409^(x410*(x411>x412)));

    if (t102 != 107917477U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x413 = 0;
	int64_t x415 = INT64_MIN;
	volatile int8_t x416 = INT8_MAX;
	int32_t t103 = 52;

    t103 = (x413^(x414*(x415>x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x417 = INT16_MIN;
	uint8_t x418 = 9U;
	volatile int32_t x419 = -1;
	uint64_t x420 = UINT64_MAX;

    t104 = (x417^(x418*(x419>x420)));

    if (t104 != -32768) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = UINT8_MAX;
	volatile uint64_t x423 = 244569843793265LLU;

    t105 = (x421^(x422*(x423>x424)));

    if (t105 != 255) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MAX;
	int8_t x426 = INT8_MAX;
	int8_t x427 = INT8_MIN;
	static uint16_t x428 = 5172U;
	static int32_t t106 = 6460546;

    t106 = (x425^(x426*(x427>x428)));

    if (t106 != 127) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x429 = -1LL;
	volatile int64_t x430 = INT64_MIN;
	uint16_t x431 = UINT16_MAX;
	uint16_t x432 = UINT16_MAX;

    t107 = (x429^(x430*(x431>x432)));

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = 502U;
	volatile int8_t x435 = INT8_MAX;
	uint16_t x436 = 1U;
	static uint32_t t108 = 19328U;

    t108 = (x433^(x434*(x435>x436)));

    if (t108 != 493U) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x437 = INT32_MIN;
	static int8_t x438 = -1;
	int32_t x439 = -1;
	static volatile int64_t x440 = -730LL;
	static int32_t t109 = INT32_MAX;

    t109 = (x437^(x438*(x439>x440)));

    if (t109 != INT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = -1LL;
	volatile int32_t x442 = 3356;
	volatile int16_t x443 = INT16_MIN;

    t110 = (x441^(x442*(x443>x444)));

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x445 = -2;
	uint32_t x446 = 1536503511U;
	uint8_t x448 = UINT8_MAX;

    t111 = (x445^(x446*(x447>x448)));

    if (t111 != 4294967294U) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MIN;
	volatile int16_t x450 = 0;

    t112 = (x449^(x450*(x451>x452)));

    if (t112 != -32768) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MAX;
	int64_t x455 = -1LL;
	int64_t x456 = -265599693601LL;
	int64_t t113 = -4049517864937852LL;

    t113 = (x453^(x454*(x455>x456)));

    if (t113 != -32768LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = 1U;
	static int8_t x459 = INT8_MAX;
	int8_t x460 = INT8_MAX;
	volatile int32_t t114 = -623;

    t114 = (x457^(x458*(x459>x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x461 = 96U;
	volatile int64_t x462 = -4803220827672333LL;
	static uint32_t x463 = 30U;
	int8_t x464 = 0;
	static int64_t t115 = 1831449LL;

    t115 = (x461^(x462*(x463>x464)));

    if (t115 != -4803220827672429LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x466 = 1;
	int16_t x467 = -1;
	volatile int32_t t116 = -1277;

    t116 = (x465^(x466*(x467>x468)));

    if (t116 != -32768) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x469 = UINT16_MAX;
	int64_t x470 = INT64_MAX;
	volatile int8_t x472 = -1;
	int64_t t117 = 77128280096LL;

    t117 = (x469^(x470*(x471>x472)));

    if (t117 != 65535LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x473 = UINT32_MAX;
	static int8_t x474 = -4;
	static uint32_t x475 = 116U;
	uint8_t x476 = UINT8_MAX;
	static uint32_t t118 = UINT32_MAX;

    t118 = (x473^(x474*(x475>x476)));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x477 = -42632406LL;
	int32_t x478 = INT32_MAX;
	static uint32_t x479 = UINT32_MAX;
	volatile uint32_t x480 = UINT32_MAX;
	static int64_t t119 = 14167631LL;

    t119 = (x477^(x478*(x479>x480)));

    if (t119 != -42632406LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x481 = INT16_MAX;
	int8_t x482 = INT8_MIN;
	static int32_t x483 = -1643702;
	uint16_t x484 = 248U;

    t120 = (x481^(x482*(x483>x484)));

    if (t120 != 32767) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x486 = INT16_MAX;
	int32_t x487 = -1;
	static int32_t x488 = 330228;
	static int64_t t121 = -935LL;

    t121 = (x485^(x486*(x487>x488)));

    if (t121 != 41925886LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x489 = INT32_MIN;
	int8_t x490 = INT8_MIN;
	int8_t x491 = INT8_MIN;
	int32_t t122 = INT32_MIN;

    t122 = (x489^(x490*(x491>x492)));

    if (t122 != INT32_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = 2172049293253852651LLU;
	uint16_t x494 = 3978U;
	static int64_t x495 = 62279678384462LL;

    t123 = (x493^(x494*(x495>x496)));

    if (t123 != 2172049293253849697LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = 0;
	uint8_t x498 = 14U;
	uint64_t x499 = UINT64_MAX;
	volatile uint32_t x500 = UINT32_MAX;

    t124 = (x497^(x498*(x499>x500)));

    if (t124 != 14) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x501 = 148927U;
	int64_t x502 = INT64_MIN;
	int8_t x503 = -1;
	int32_t x504 = INT32_MAX;
	volatile int64_t t125 = 8752101206072LL;

    t125 = (x501^(x502*(x503>x504)));

    if (t125 != 148927LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x505 = 26802U;
	uint64_t x507 = 235771486LLU;
	static uint64_t x508 = UINT64_MAX;
	uint32_t t126 = 77693361U;

    t126 = (x505^(x506*(x507>x508)));

    if (t126 != 26802U) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = -1LL;
	uint16_t x511 = 5606U;
	static int16_t x512 = INT16_MIN;
	int64_t t127 = 242843LL;

    t127 = (x509^(x510*(x511>x512)));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x513 = INT8_MAX;
	static int64_t x514 = INT64_MIN;
	uint32_t x515 = 56733U;
	uint8_t x516 = 3U;
	static volatile int64_t t128 = -815398348567165595LL;

    t128 = (x513^(x514*(x515>x516)));

    if (t128 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = UINT16_MAX;
	static volatile int16_t x518 = 5;
	static volatile int8_t x519 = INT8_MAX;
	static int32_t t129 = 99539992;

    t129 = (x517^(x518*(x519>x520)));

    if (t129 != 65535) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x521 = 86U;
	int16_t x522 = 0;
	uint32_t x523 = 1070601286U;
	volatile int32_t x524 = -1;

    t130 = (x521^(x522*(x523>x524)));

    if (t130 != 86) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x525 = 1;
	uint32_t x526 = UINT32_MAX;
	int8_t x527 = INT8_MIN;
	int8_t x528 = INT8_MIN;
	static volatile uint32_t t131 = 1U;

    t131 = (x525^(x526*(x527>x528)));

    if (t131 != 1U) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x531 = INT8_MIN;
	static volatile int32_t t132 = -273;

    t132 = (x529^(x530*(x531>x532)));

    if (t132 != 2) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x533 = -2;
	int16_t x534 = INT16_MAX;
	int64_t x536 = INT64_MIN;
	int32_t t133 = -18321442;

    t133 = (x533^(x534*(x535>x536)));

    if (t133 != -32767) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = 11U;
	int64_t x538 = 1815LL;
	volatile int64_t x539 = INT64_MIN;
	int8_t x540 = -1;
	static int64_t t134 = 149LL;

    t134 = (x537^(x538*(x539>x540)));

    if (t134 != 11LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x541 = INT16_MAX;
	uint16_t x542 = 8028U;
	static int32_t x543 = -7;
	uint32_t x544 = UINT32_MAX;
	int32_t t135 = -110;

    t135 = (x541^(x542*(x543>x544)));

    if (t135 != 32767) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x547 = UINT64_MAX;
	volatile uint32_t t136 = 292381518U;

    t136 = (x545^(x546*(x547>x548)));

    if (t136 != 4294967286U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MAX;
	uint16_t x551 = 96U;
	static int64_t t137 = 7452517832997LL;

    t137 = (x549^(x550*(x551>x552)));

    if (t137 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x554 = INT16_MAX;
	uint64_t x555 = 52469898LLU;
	int64_t x556 = -1LL;
	int32_t t138 = 242569704;

    t138 = (x553^(x554*(x555>x556)));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MAX;
	uint8_t x558 = 1U;
	int16_t x559 = INT16_MIN;

    t139 = (x557^(x558*(x559>x560)));

    if (t139 != INT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = 0U;
	static uint32_t x563 = UINT32_MAX;
	volatile uint32_t t140 = 26U;

    t140 = (x561^(x562*(x563>x564)));

    if (t140 != 2147483648U) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x565 = 38U;
	uint16_t x566 = UINT16_MAX;
	static int64_t x567 = INT64_MIN;
	int8_t x568 = INT8_MAX;
	int32_t t141 = -6;

    t141 = (x565^(x566*(x567>x568)));

    if (t141 != 38) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = INT16_MIN;
	uint16_t x570 = 1839U;
	int8_t x571 = INT8_MIN;
	int16_t x572 = INT16_MIN;
	int32_t t142 = -345;

    t142 = (x569^(x570*(x571>x572)));

    if (t142 != -30929) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x573 = 14U;
	volatile int16_t x574 = INT16_MAX;
	volatile int64_t x575 = 84067108LL;
	volatile int32_t x576 = INT32_MAX;
	int32_t t143 = -1;

    t143 = (x573^(x574*(x575>x576)));

    if (t143 != 14) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = 10U;
	uint64_t x578 = 60LLU;
	int16_t x579 = -189;
	uint32_t x580 = UINT32_MAX;
	volatile uint64_t t144 = 4274232654LLU;

    t144 = (x577^(x578*(x579>x580)));

    if (t144 != 10LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = 6809128743LLU;
	volatile int16_t x584 = INT16_MAX;

    t145 = (x581^(x582*(x583>x584)));

    if (t145 != 9223372030045647064LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	int32_t x586 = -138;
	int64_t x587 = INT64_MIN;
	static int64_t x588 = -350240LL;
	volatile int32_t t146 = -168502;

    t146 = (x585^(x586*(x587>x588)));

    if (t146 != -32768) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = 1;
	volatile int64_t t147 = -38683395215619LL;

    t147 = (x589^(x590*(x591>x592)));

    if (t147 != 1867LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x593 = UINT16_MAX;
	static volatile uint16_t x594 = 5086U;
	int16_t x595 = -1;
	static int64_t x596 = INT64_MIN;
	volatile int32_t t148 = -421;

    t148 = (x593^(x594*(x595>x596)));

    if (t148 != 60449) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x597 = 59U;
	static int32_t x598 = -1;
	int16_t x599 = 56;
	volatile uint32_t t149 = 617877522U;

    t149 = (x597^(x598*(x599>x600)));

    if (t149 != 4294967236U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x601 = INT32_MAX;
	int16_t x602 = INT16_MIN;
	volatile uint8_t x603 = UINT8_MAX;
	uint8_t x604 = 2U;
	int32_t t150 = -85918952;

    t150 = (x601^(x602*(x603>x604)));

    if (t150 != -2147450881) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = -1LL;
	volatile uint64_t x606 = 215752501088283LLU;
	static volatile int8_t x607 = -1;
	int64_t x608 = INT64_MIN;

    t151 = (x605^(x606*(x607>x608)));

    if (t151 != 18446528321208463332LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = 1980;
	int32_t x610 = -1;
	volatile int8_t x611 = INT8_MAX;
	int64_t x612 = INT64_MAX;
	volatile int32_t t152 = -27;

    t152 = (x609^(x610*(x611>x612)));

    if (t152 != 1980) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x613 = 21U;
	int16_t x614 = INT16_MIN;
	int32_t x615 = 13728886;
	volatile uint32_t t153 = 22240480U;

    t153 = (x613^(x614*(x615>x616)));

    if (t153 != 4294934549U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MIN;
	int8_t x618 = INT8_MAX;
	int32_t x619 = 15483091;
	int32_t x620 = -1;
	static int32_t t154 = 235044;

    t154 = (x617^(x618*(x619>x620)));

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = -1;
	uint16_t x622 = 27007U;
	volatile int64_t x624 = INT64_MIN;
	static volatile int32_t t155 = 27295;

    t155 = (x621^(x622*(x623>x624)));

    if (t155 != -27008) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x625 = -1LL;
	int64_t x626 = INT64_MIN;
	static volatile int32_t x628 = INT32_MAX;

    t156 = (x625^(x626*(x627>x628)));

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 123U;
	int16_t x630 = -1;
	volatile int64_t x631 = -1LL;
	uint32_t x632 = 64484701U;
	int32_t t157 = 26;

    t157 = (x629^(x630*(x631>x632)));

    if (t157 != 123) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x634 = UINT32_MAX;
	static int16_t x635 = -1;
	uint16_t x636 = UINT16_MAX;
	uint32_t t158 = UINT32_MAX;

    t158 = (x633^(x634*(x635>x636)));

    if (t158 != UINT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x637 = 31U;
	int32_t x638 = INT32_MIN;
	int8_t x639 = INT8_MAX;
	int32_t x640 = INT32_MIN;
	int32_t t159 = 1137050;

    t159 = (x637^(x638*(x639>x640)));

    if (t159 != -2147483617) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x641 = UINT64_MAX;
	int16_t x642 = -1;
	static int8_t x644 = -1;

    t160 = (x641^(x642*(x643>x644)));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = 7LL;
	volatile uint16_t x648 = 4441U;
	volatile int64_t t161 = 71998153551022056LL;

    t161 = (x645^(x646*(x647>x648)));

    if (t161 != 7LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint16_t x649 = UINT16_MAX;
	uint8_t x651 = 0U;

    t162 = (x649^(x650*(x651>x652)));

    if (t162 != 65535) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = -1;
	int64_t x654 = INT64_MAX;
	static int64_t x655 = INT64_MAX;
	int32_t x656 = INT32_MIN;
	int64_t t163 = INT64_MIN;

    t163 = (x653^(x654*(x655>x656)));

    if (t163 != INT64_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x657 = INT32_MIN;
	int16_t x658 = INT16_MIN;
	int16_t x660 = 1241;
	volatile int32_t t164 = INT32_MIN;

    t164 = (x657^(x658*(x659>x660)));

    if (t164 != INT32_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x661 = -1;
	int64_t x663 = -24278765462423LL;
	int16_t x664 = INT16_MIN;
	static int64_t t165 = -2LL;

    t165 = (x661^(x662*(x663>x664)));

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x665 = INT16_MIN;
	int16_t x667 = 279;
	static int32_t x668 = INT32_MIN;
	volatile int32_t t166 = 60075;

    t166 = (x665^(x666*(x667>x668)));

    if (t166 != -28925) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = 1;
	volatile int8_t x670 = INT8_MIN;
	int8_t x671 = 43;
	volatile int32_t t167 = -633240;

    t167 = (x669^(x670*(x671>x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x673 = UINT64_MAX;
	int32_t x674 = INT32_MIN;
	int16_t x675 = INT16_MAX;
	uint64_t t168 = UINT64_MAX;

    t168 = (x673^(x674*(x675>x676)));

    if (t168 != UINT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x677 = 2054518LLU;
	static int64_t x678 = INT64_MAX;
	volatile uint8_t x679 = 23U;
	static uint16_t x680 = 0U;
	uint64_t t169 = 1LLU;

    t169 = (x677^(x678*(x679>x680)));

    if (t169 != 9223372036852721289LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MIN;
	static uint32_t x682 = 256877U;
	uint8_t x683 = UINT8_MAX;
	int16_t x684 = -1;
	static uint32_t t170 = 1425618U;

    t170 = (x681^(x682*(x683>x684)));

    if (t170 != 4294710509U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = 11U;
	uint16_t x686 = UINT16_MAX;
	int8_t x687 = INT8_MAX;
	volatile int32_t t171 = 56073170;

    t171 = (x685^(x686*(x687>x688)));

    if (t171 != 65524) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int64_t x689 = INT64_MIN;
	static volatile int8_t x690 = -1;
	volatile int16_t x691 = -1;
	static int8_t x692 = INT8_MAX;
	int64_t t172 = INT64_MIN;

    t172 = (x689^(x690*(x691>x692)));

    if (t172 != INT64_MIN) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = 11985217333LLU;
	int32_t x694 = -1;
	uint16_t x695 = UINT16_MAX;
	int32_t x696 = INT32_MAX;
	volatile uint64_t t173 = 1879342313234570223LLU;

    t173 = (x693^(x694*(x695>x696)));

    if (t173 != 11985217333LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -112;
	volatile uint64_t x699 = 185808631494531LLU;
	int64_t x700 = 54100142263083503LL;
	uint32_t t174 = 50U;

    t174 = (x697^(x698*(x699>x700)));

    if (t174 != 4294967184U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = 7;
	int64_t x704 = INT64_MAX;
	int32_t t175 = -45671;

    t175 = (x701^(x702*(x703>x704)));

    if (t175 != -121) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x705 = 385660354302245475LLU;
	static volatile int32_t x707 = INT32_MIN;
	static uint64_t t176 = 195431984339LLU;

    t176 = (x705^(x706*(x707>x708)));

    if (t176 != 385660354302245475LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x709 = UINT32_MAX;
	uint32_t x710 = 56115U;
	uint64_t x711 = 36LLU;
	int8_t x712 = INT8_MAX;
	volatile uint32_t t177 = UINT32_MAX;

    t177 = (x709^(x710*(x711>x712)));

    if (t177 != UINT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x713 = UINT64_MAX;
	int64_t x714 = 15935598LL;

    t178 = (x713^(x714*(x715>x716)));

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint32_t x717 = 18534U;
	int16_t x718 = 9943;
	volatile int8_t x720 = INT8_MAX;
	static uint32_t t179 = 3U;

    t179 = (x717^(x718*(x719>x720)));

    if (t179 != 28337U) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MIN;
	int8_t x722 = -2;
	static uint32_t x723 = 963U;
	volatile int64_t x724 = INT64_MIN;
	int32_t t180 = 128181275;

    t180 = (x721^(x722*(x723>x724)));

    if (t180 != 2147483646) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 0U;
	int8_t x726 = -1;
	static uint64_t x727 = 2006478417958667LLU;

    t181 = (x725^(x726*(x727>x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = 2;
	int8_t x731 = -20;
	int16_t x732 = INT16_MAX;
	volatile int32_t t182 = 1806088;

    t182 = (x729^(x730*(x731>x732)));

    if (t182 != 2) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MAX;
	int16_t x734 = INT16_MAX;
	uint16_t x735 = 24232U;
	int16_t x736 = -1;
	int32_t t183 = -67623056;

    t183 = (x733^(x734*(x735>x736)));

    if (t183 != 2147450880) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = -13;
	volatile int32_t x738 = -116312735;
	uint64_t x739 = UINT64_MAX;
	volatile int32_t t184 = -30713;

    t184 = (x737^(x738*(x739>x740)));

    if (t184 != 116312722) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MIN;
	int64_t x743 = 300444181269LL;
	int8_t x744 = -1;
	static int64_t t185 = 509221965LL;

    t185 = (x741^(x742*(x743>x744)));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = UINT32_MAX;
	static int8_t x746 = INT8_MIN;
	int64_t x747 = INT64_MIN;
	volatile int8_t x748 = -1;
	static volatile uint32_t t186 = UINT32_MAX;

    t186 = (x745^(x746*(x747>x748)));

    if (t186 != UINT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = UINT16_MAX;
	volatile int64_t x750 = -27373LL;
	int32_t x751 = INT32_MIN;
	uint64_t x752 = UINT64_MAX;

    t187 = (x749^(x750*(x751>x752)));

    if (t187 != 65535LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x753 = INT8_MIN;
	static uint64_t x754 = 7994595800041LLU;
	volatile uint16_t x755 = UINT16_MAX;
	int64_t x756 = INT64_MIN;
	volatile uint64_t t188 = 464932722031819699LLU;

    t188 = (x753^(x754*(x755>x756)));

    if (t188 != 18446736079113751657LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MIN;
	uint16_t x758 = 5248U;
	volatile int32_t t189 = -57500;

    t189 = (x757^(x758*(x759>x760)));

    if (t189 != -32768) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MIN;
	volatile int8_t x762 = INT8_MAX;
	static volatile int16_t x763 = -379;
	int64_t x764 = INT64_MIN;
	volatile int32_t t190 = -109;

    t190 = (x761^(x762*(x763>x764)));

    if (t190 != -2147483521) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x766 = INT8_MIN;
	int16_t x767 = INT16_MIN;
	int16_t x768 = INT16_MIN;
	volatile int32_t t191 = -46956;

    t191 = (x765^(x766*(x767>x768)));

    if (t191 != -32768) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = 0U;
	int32_t x770 = 119;
	int16_t x771 = -1;
	int32_t x772 = -1;
	int32_t t192 = 1641;

    t192 = (x769^(x770*(x771>x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int16_t x773 = -1;
	int32_t x774 = INT32_MIN;
	volatile int64_t x775 = 111003351291222030LL;
	int32_t t193 = INT32_MAX;

    t193 = (x773^(x774*(x775>x776)));

    if (t193 != INT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x777 = UINT16_MAX;
	static uint64_t x778 = 15545870042530LLU;
	int16_t x779 = INT16_MIN;
	int16_t x780 = 1;
	volatile uint64_t t194 = 2210231420000LLU;

    t194 = (x777^(x778*(x779>x780)));

    if (t194 != 65535LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = UINT8_MAX;
	int8_t x782 = -1;
	volatile int32_t t195 = -169262;

    t195 = (x781^(x782*(x783>x784)));

    if (t195 != -256) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x785 = INT32_MAX;
	static volatile int16_t x786 = 1679;
	int32_t x787 = INT32_MAX;
	volatile int64_t x788 = 223889265448LL;
	int32_t t196 = INT32_MAX;

    t196 = (x785^(x786*(x787>x788)));

    if (t196 != INT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x790 = INT64_MIN;
	uint64_t x792 = 16333929943307LLU;
	volatile int64_t t197 = 2166473636647680502LL;

    t197 = (x789^(x790*(x791>x792)));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x794 = 1427788U;
	int16_t x795 = INT16_MAX;
	uint32_t x796 = 26615314U;
	static uint32_t t198 = 1656U;

    t198 = (x793^(x794*(x795>x796)));

    if (t198 != 4294967168U) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x797 = 11655752LLU;
	uint8_t x798 = 12U;
	int32_t x799 = -1;
	uint8_t x800 = 3U;

    t199 = (x797^(x798*(x799>x800)));

    if (t199 != 11655752LLU) { NG(); } else { ; }
	
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


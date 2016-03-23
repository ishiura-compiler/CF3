
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

uint8_t x3 = UINT8_MAX;
uint16_t x5 = 193U;
int32_t t1 = 11596;
int32_t t2 = 6644510;
static uint16_t x13 = 2U;
int32_t t4 = -6;
int8_t x23 = INT8_MIN;
int16_t x27 = -1;
static uint8_t x28 = 6U;
uint32_t x31 = 13931036U;
int32_t t7 = 44852034;
int32_t t8 = 0;
static uint8_t x39 = UINT8_MAX;
static int64_t x41 = -1LL;
int16_t x42 = 81;
static int32_t t11 = -116842312;
int16_t x60 = INT16_MIN;
uint16_t x68 = UINT16_MAX;
int32_t x69 = INT32_MIN;
volatile int8_t x72 = INT8_MIN;
int32_t t17 = 151257477;
int64_t x76 = -1LL;
int32_t t18 = 175;
int32_t t19 = 4908;
static int8_t x81 = INT8_MIN;
static volatile int32_t t20 = -1204411;
int8_t x85 = INT8_MAX;
int64_t x88 = -1LL;
int8_t x89 = INT8_MIN;
int32_t x90 = -1;
static volatile int16_t x93 = -2108;
static volatile int32_t t24 = -26900886;
volatile int32_t t26 = 888888;
static int32_t x110 = 230;
uint8_t x115 = 83U;
int16_t x117 = 2;
int8_t x122 = INT8_MIN;
volatile int8_t x128 = INT8_MIN;
int16_t x132 = INT16_MAX;
volatile int32_t t32 = -2;
volatile int16_t x135 = -1;
int8_t x139 = -1;
int32_t x144 = INT32_MIN;
int8_t x145 = INT8_MAX;
int64_t x146 = INT64_MIN;
uint8_t x148 = 22U;
int16_t x150 = INT16_MIN;
int16_t x155 = INT16_MIN;
volatile int32_t t38 = 2;
static uint32_t x160 = 32U;
volatile int32_t x164 = INT32_MAX;
int16_t x168 = -1;
int8_t x172 = INT8_MIN;
int8_t x177 = -2;
int64_t x178 = 1600008LL;
uint32_t x181 = UINT32_MAX;
int64_t x186 = -1LL;
uint8_t x188 = 119U;
volatile int16_t x201 = INT16_MIN;
int32_t x202 = -1;
static int32_t t50 = 160429115;
uint32_t x208 = UINT32_MAX;
int32_t t51 = 89247;
uint64_t x213 = UINT64_MAX;
static volatile int16_t x220 = -1;
static int16_t x222 = -12773;
int32_t x225 = INT32_MIN;
int32_t x229 = INT32_MIN;
int8_t x230 = -3;
static uint64_t x233 = 493009783LLU;
int64_t x239 = -883064371028LL;
int64_t x241 = -1LL;
volatile int32_t t60 = -6;
uint32_t x248 = 839375U;
int64_t x250 = 14LL;
int32_t t63 = 548;
int64_t x262 = 27727979LL;
volatile int8_t x263 = 5;
uint64_t x267 = 164202739976795310LLU;
volatile uint8_t x271 = UINT8_MAX;
uint32_t x276 = 94931U;
int32_t x288 = INT32_MIN;
uint16_t x289 = 2U;
uint32_t x300 = 667696U;
static int32_t t75 = 31230;
static uint64_t x305 = UINT64_MAX;
volatile int8_t x309 = INT8_MIN;
int16_t x314 = INT16_MAX;
uint8_t x324 = 3U;
static int32_t x330 = 277075;
int32_t x331 = INT32_MIN;
volatile int32_t t82 = 48;
uint8_t x333 = 24U;
volatile int32_t t84 = 2364462;
uint8_t x345 = 17U;
volatile int32_t t87 = 1757;
volatile int8_t x358 = 1;
volatile uint32_t x360 = 1515910419U;
int32_t x361 = -8453448;
int8_t x367 = INT8_MIN;
uint64_t x368 = 178LLU;
volatile int32_t t92 = 176966915;
volatile int16_t x373 = INT16_MIN;
static int64_t x374 = -1LL;
int16_t x377 = INT16_MIN;
static int32_t x382 = -1;
int16_t x388 = -1271;
int32_t x405 = -1;
static int16_t x409 = INT16_MIN;
uint8_t x417 = 5U;
uint8_t x428 = 1U;
int64_t x435 = INT64_MIN;
volatile int32_t t109 = 1231754;
static int16_t x442 = INT16_MIN;
volatile int16_t x448 = INT16_MIN;
static volatile uint16_t x449 = 7U;
volatile int64_t x451 = -12618LL;
volatile uint16_t x458 = 4U;
int64_t x464 = -1LL;
int32_t x467 = -26857470;
volatile int32_t t116 = 1;
int8_t x481 = -3;
static uint8_t x485 = UINT8_MAX;
uint32_t x490 = 371821472U;
int8_t x493 = INT8_MAX;
int32_t x500 = INT32_MIN;
int32_t x504 = 411;
volatile uint8_t x510 = UINT8_MAX;
int32_t x513 = 2973210;
static volatile int64_t x514 = -346304783212LL;
volatile uint8_t x524 = UINT8_MAX;
int32_t x526 = INT32_MIN;
volatile uint16_t x529 = UINT16_MAX;
int32_t x534 = INT32_MIN;
volatile int32_t x535 = INT32_MIN;
int64_t x538 = INT64_MIN;
int64_t x545 = -307361136074643LL;
volatile int8_t x546 = INT8_MIN;
int16_t x550 = -1;
volatile int32_t t137 = 11;
volatile int32_t t138 = 10;
int16_t x558 = 39;
int32_t t139 = -5;
int16_t x563 = INT16_MIN;
int16_t x564 = 1844;
volatile int32_t t140 = 1792;
volatile int32_t x566 = 6814;
int8_t x567 = INT8_MAX;
uint64_t x570 = UINT64_MAX;
int32_t t143 = 48403274;
int64_t x585 = INT64_MIN;
uint16_t x587 = 296U;
int16_t x589 = INT16_MIN;
uint64_t x591 = UINT64_MAX;
int8_t x595 = INT8_MIN;
static uint8_t x598 = UINT8_MAX;
static volatile int16_t x603 = INT16_MIN;
int32_t t151 = -666775117;
volatile int32_t x610 = INT32_MIN;
int8_t x617 = INT8_MIN;
static int16_t x620 = INT16_MIN;
int32_t x621 = 12559545;
int32_t x627 = -1;
int32_t t156 = -121099716;
uint32_t x629 = 27590337U;
static int8_t x630 = -1;
static volatile int32_t t157 = 2832874;
int32_t x638 = INT32_MIN;
volatile int64_t x645 = -78455LL;
volatile int32_t t161 = 7;
uint64_t x649 = 7289241758568LLU;
uint8_t x650 = 7U;
uint64_t x655 = UINT64_MAX;
static int16_t x656 = INT16_MAX;
int8_t x658 = INT8_MAX;
volatile int32_t t164 = -73880;
uint16_t x663 = 12U;
static int32_t t166 = -42850;
volatile uint16_t x669 = 894U;
int16_t x671 = INT16_MIN;
static int32_t x672 = 28571;
int32_t t167 = 254094826;
static int8_t x676 = INT8_MIN;
static volatile uint8_t x677 = UINT8_MAX;
int32_t t169 = -32155805;
int32_t t170 = -330;
int16_t x688 = -11818;
int64_t x691 = INT64_MAX;
int32_t t172 = 234019379;
uint16_t x694 = 182U;
volatile int16_t x697 = -2503;
int16_t x698 = -1;
volatile int32_t t174 = -62195364;
int16_t x703 = INT16_MIN;
volatile int64_t x704 = INT64_MIN;
uint64_t x706 = 0LLU;
int32_t t178 = -85883308;
volatile uint64_t x720 = 1004741632LLU;
int32_t t179 = -17808;
int8_t x721 = INT8_MAX;
uint8_t x725 = 53U;
volatile int64_t x727 = -8432124285263LL;
uint16_t x733 = 7093U;
int64_t x734 = 806LL;
int16_t x737 = 1565;
uint32_t x738 = 403550U;
volatile int32_t t185 = -1;
int32_t x749 = INT32_MIN;
uint16_t x752 = 28U;
int64_t x755 = -940640926LL;
volatile int32_t t189 = 3715559;
int32_t x765 = 2161032;
static int32_t x769 = -1;
static int64_t x770 = INT64_MAX;
int64_t x776 = INT64_MAX;
volatile uint8_t x779 = 43U;
volatile uint64_t x781 = 22488273922181661LLU;
volatile int32_t t196 = -83;
int64_t x793 = INT64_MIN;
static volatile uint64_t x795 = UINT64_MAX;
static volatile uint64_t x798 = UINT64_MAX;


void f0(void) {
    	static uint8_t x1 = UINT8_MAX;
	int16_t x2 = -1;
	uint16_t x4 = UINT16_MAX;
	static int32_t t0 = 2775;

    t0 = ((x1>x2)!=(x3^x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = INT16_MIN;
	int16_t x7 = INT16_MAX;
	int8_t x8 = -9;

    t1 = ((x5>x6)!=(x7^x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = -2;
	static int16_t x10 = -280;
	int32_t x11 = INT32_MAX;
	volatile int32_t x12 = INT32_MAX;

    t2 = ((x9>x10)!=(x11^x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x14 = UINT32_MAX;
	int8_t x15 = 12;
	static int16_t x16 = -1;
	volatile int32_t t3 = 15512072;

    t3 = ((x13>x14)!=(x15^x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MAX;
	int64_t x18 = -1LL;
	int32_t x19 = INT32_MAX;
	static int64_t x20 = -1470691LL;

    t4 = ((x17>x18)!=(x19^x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	volatile int16_t x22 = -1;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 123;

    t5 = ((x21>x22)!=(x23^x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	int8_t x26 = 1;
	int32_t t6 = -231040;

    t6 = ((x25>x26)!=(x27^x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 1;
	volatile uint8_t x30 = UINT8_MAX;
	uint8_t x32 = 3U;

    t7 = ((x29>x30)!=(x31^x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 1138350548670LLU;
	int64_t x34 = INT64_MIN;
	uint64_t x35 = 62687555554LLU;
	int32_t x36 = -1;

    t8 = ((x33>x34)!=(x35^x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = 2624;
	int64_t x38 = INT64_MIN;
	int32_t x40 = 15914887;
	int32_t t9 = -9618723;

    t9 = ((x37>x38)!=(x39^x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x43 = UINT8_MAX;
	volatile int8_t x44 = -1;
	int32_t t10 = 3;

    t10 = ((x41>x42)!=(x43^x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x45 = UINT8_MAX;
	int32_t x46 = INT32_MAX;
	uint32_t x47 = 1U;
	volatile int64_t x48 = INT64_MIN;

    t11 = ((x45>x46)!=(x47^x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x49 = 341U;
	volatile int64_t x50 = INT64_MIN;
	uint8_t x51 = 1U;
	uint64_t x52 = 2384376900LLU;
	int32_t t12 = -1570;

    t12 = ((x49>x50)!=(x51^x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x53 = 551329LLU;
	uint32_t x54 = UINT32_MAX;
	uint8_t x55 = 1U;
	int32_t x56 = -1;
	int32_t t13 = 965226836;

    t13 = ((x53>x54)!=(x55^x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x57 = -1;
	volatile uint16_t x58 = UINT16_MAX;
	volatile uint32_t x59 = 986131111U;
	volatile int32_t t14 = 248044;

    t14 = ((x57>x58)!=(x59^x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x61 = 7886U;
	int16_t x62 = INT16_MIN;
	uint32_t x63 = 1986U;
	int8_t x64 = 3;
	int32_t t15 = -86;

    t15 = ((x61>x62)!=(x63^x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = -581;
	static uint32_t x66 = 361096834U;
	volatile int64_t x67 = 3019856895315135LL;
	volatile int32_t t16 = 1851891;

    t16 = ((x65>x66)!=(x67^x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x70 = 14439LLU;
	volatile int64_t x71 = -754118793751361902LL;

    t17 = ((x69>x70)!=(x71^x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x73 = -29;
	uint8_t x74 = UINT8_MAX;
	static uint32_t x75 = UINT32_MAX;

    t18 = ((x73>x74)!=(x75^x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 8169LLU;
	int32_t x78 = 575182;
	uint64_t x79 = 15LLU;
	int32_t x80 = INT32_MIN;

    t19 = ((x77>x78)!=(x79^x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x82 = UINT64_MAX;
	volatile int32_t x83 = INT32_MAX;
	uint32_t x84 = 1678351U;

    t20 = ((x81>x82)!=(x83^x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x86 = -6;
	int8_t x87 = INT8_MIN;
	volatile int32_t t21 = 25;

    t21 = ((x85>x86)!=(x87^x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x91 = 29;
	static int64_t x92 = INT64_MIN;
	volatile int32_t t22 = -2164;

    t22 = ((x89>x90)!=(x91^x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x94 = -8016;
	volatile uint8_t x95 = 10U;
	int16_t x96 = -1;
	volatile int32_t t23 = 1459;

    t23 = ((x93>x94)!=(x95^x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x97 = 1;
	int32_t x98 = INT32_MIN;
	volatile uint16_t x99 = 3U;
	volatile int64_t x100 = INT64_MIN;

    t24 = ((x97>x98)!=(x99^x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 19650U;
	uint64_t x102 = 4184773531LLU;
	static int32_t x103 = INT32_MIN;
	uint32_t x104 = 120211U;
	int32_t t25 = -5952954;

    t25 = ((x101>x102)!=(x103^x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	int8_t x106 = INT8_MIN;
	int32_t x107 = -25768;
	static uint16_t x108 = UINT16_MAX;

    t26 = ((x105>x106)!=(x107^x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	static uint8_t x111 = 0U;
	uint64_t x112 = UINT64_MAX;
	int32_t t27 = 1331;

    t27 = ((x109>x110)!=(x111^x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = UINT8_MAX;
	uint8_t x114 = 0U;
	int64_t x116 = INT64_MIN;
	static int32_t t28 = 1478;

    t28 = ((x113>x114)!=(x115^x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x118 = -10081269LL;
	int16_t x119 = -37;
	static int16_t x120 = -1;
	static int32_t t29 = 433690392;

    t29 = ((x117>x118)!=(x119^x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = 21;
	int32_t x123 = -110382;
	int32_t x124 = INT32_MIN;
	static int32_t t30 = -254560440;

    t30 = ((x121>x122)!=(x123^x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MAX;
	int16_t x126 = INT16_MAX;
	int16_t x127 = INT16_MIN;
	int32_t t31 = 62793541;

    t31 = ((x125>x126)!=(x127^x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = 0U;
	volatile int16_t x130 = -398;
	int16_t x131 = INT16_MIN;

    t32 = ((x129>x130)!=(x131^x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 19U;
	int64_t x134 = INT64_MIN;
	static uint64_t x136 = 9152LLU;
	static int32_t t33 = 404909954;

    t33 = ((x133>x134)!=(x135^x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = 1902;
	static uint16_t x138 = UINT16_MAX;
	uint32_t x140 = 125758U;
	int32_t t34 = 1;

    t34 = ((x137>x138)!=(x139^x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint8_t x141 = 87U;
	int64_t x142 = INT64_MIN;
	volatile int16_t x143 = INT16_MIN;
	static int32_t t35 = 324871620;

    t35 = ((x141>x142)!=(x143^x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x147 = 4LLU;
	static int32_t t36 = 28508;

    t36 = ((x145>x146)!=(x147^x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	uint64_t x151 = 9260443649234LLU;
	static int32_t x152 = -1;
	volatile int32_t t37 = -4;

    t37 = ((x149>x150)!=(x151^x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x153 = INT64_MIN;
	int16_t x154 = INT16_MAX;
	uint8_t x156 = 0U;

    t38 = ((x153>x154)!=(x155^x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x157 = UINT32_MAX;
	uint64_t x158 = 385466677LLU;
	static uint64_t x159 = 154635812696678LLU;
	int32_t t39 = -315;

    t39 = ((x157>x158)!=(x159^x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = -1LL;
	int16_t x162 = INT16_MIN;
	volatile uint16_t x163 = UINT16_MAX;
	volatile int32_t t40 = 510419003;

    t40 = ((x161>x162)!=(x163^x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x165 = INT8_MIN;
	int16_t x166 = -1;
	uint16_t x167 = 2U;
	int32_t t41 = -25716;

    t41 = ((x165>x166)!=(x167^x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = 15;
	int32_t x170 = INT32_MIN;
	int16_t x171 = -1;
	int32_t t42 = -178519;

    t42 = ((x169>x170)!=(x171^x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MAX;
	volatile int16_t x174 = -1528;
	int64_t x175 = -1LL;
	uint16_t x176 = UINT16_MAX;
	volatile int32_t t43 = -4190983;

    t43 = ((x173>x174)!=(x175^x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x179 = INT16_MAX;
	int8_t x180 = 24;
	int32_t t44 = -923472;

    t44 = ((x177>x178)!=(x179^x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x182 = 157559LLU;
	volatile int8_t x183 = INT8_MAX;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t45 = 143;

    t45 = ((x181>x182)!=(x183^x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MAX;
	int32_t x187 = 1623;
	volatile int32_t t46 = -93854640;

    t46 = ((x185>x186)!=(x187^x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint64_t x189 = 292804604LLU;
	static uint64_t x190 = 11LLU;
	uint64_t x191 = UINT64_MAX;
	int16_t x192 = INT16_MIN;
	volatile int32_t t47 = -985;

    t47 = ((x189>x190)!=(x191^x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 4U;
	volatile uint8_t x194 = 1U;
	int16_t x195 = INT16_MAX;
	int32_t x196 = -1;
	int32_t t48 = -258360600;

    t48 = ((x193>x194)!=(x195^x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MIN;
	uint64_t x198 = UINT64_MAX;
	uint8_t x199 = UINT8_MAX;
	uint32_t x200 = 2U;
	volatile int32_t t49 = 16765999;

    t49 = ((x197>x198)!=(x199^x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x203 = 7415443LLU;
	int16_t x204 = -1;

    t50 = ((x201>x202)!=(x203^x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MAX;
	int32_t x206 = INT32_MIN;
	int8_t x207 = INT8_MIN;

    t51 = ((x205>x206)!=(x207^x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x209 = INT32_MAX;
	int64_t x210 = INT64_MAX;
	static uint32_t x211 = UINT32_MAX;
	int32_t x212 = -6506;
	int32_t t52 = 1;

    t52 = ((x209>x210)!=(x211^x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x214 = 97U;
	uint16_t x215 = 5953U;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t53 = 469713;

    t53 = ((x213>x214)!=(x215^x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MIN;
	int64_t x218 = INT64_MAX;
	int32_t x219 = -1;
	int32_t t54 = 14;

    t54 = ((x217>x218)!=(x219^x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = UINT16_MAX;
	volatile int8_t x223 = -1;
	static volatile int32_t x224 = INT32_MIN;
	static int32_t t55 = 22;

    t55 = ((x221>x222)!=(x223^x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x226 = UINT16_MAX;
	int16_t x227 = INT16_MAX;
	int8_t x228 = 7;
	int32_t t56 = 335763268;

    t56 = ((x225>x226)!=(x227^x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x231 = -1;
	int32_t x232 = INT32_MIN;
	int32_t t57 = -249608155;

    t57 = ((x229>x230)!=(x231^x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x234 = -1LL;
	uint8_t x235 = UINT8_MAX;
	int16_t x236 = INT16_MIN;
	static int32_t t58 = 5660;

    t58 = ((x233>x234)!=(x235^x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -1LL;
	static uint16_t x238 = 11U;
	static volatile uint32_t x240 = UINT32_MAX;
	int32_t t59 = -148;

    t59 = ((x237>x238)!=(x239^x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x242 = INT64_MIN;
	int64_t x243 = 124695LL;
	int32_t x244 = -27656;

    t60 = ((x241>x242)!=(x243^x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x245 = INT64_MAX;
	int64_t x246 = 16065826543LL;
	uint8_t x247 = 7U;
	static volatile int32_t t61 = -1;

    t61 = ((x245>x246)!=(x247^x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x249 = -1;
	int16_t x251 = INT16_MIN;
	static volatile int64_t x252 = INT64_MIN;
	int32_t t62 = 417;

    t62 = ((x249>x250)!=(x251^x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x253 = 1805075U;
	uint64_t x254 = 537418098233LLU;
	uint16_t x255 = 1978U;
	int32_t x256 = INT32_MAX;

    t63 = ((x253>x254)!=(x255^x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = -7;
	uint32_t x258 = 914808U;
	static int64_t x259 = -1161351644051277LL;
	uint64_t x260 = 1048382062140394285LLU;
	int32_t t64 = 0;

    t64 = ((x257>x258)!=(x259^x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = -1;
	volatile int32_t x264 = -1;
	int32_t t65 = -25;

    t65 = ((x261>x262)!=(x263^x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	int16_t x266 = INT16_MIN;
	static int8_t x268 = 40;
	volatile int32_t t66 = -292061502;

    t66 = ((x265>x266)!=(x267^x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x269 = INT32_MAX;
	uint16_t x270 = 21U;
	int64_t x272 = INT64_MAX;
	int32_t t67 = -76498;

    t67 = ((x269>x270)!=(x271^x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = 24204145LL;
	int16_t x274 = -3781;
	volatile int32_t x275 = 12999758;
	int32_t t68 = -10199;

    t68 = ((x273>x274)!=(x275^x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x277 = 1417826253LLU;
	uint16_t x278 = UINT16_MAX;
	uint32_t x279 = 2344U;
	static int64_t x280 = INT64_MIN;
	volatile int32_t t69 = 0;

    t69 = ((x277>x278)!=(x279^x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -1LL;
	int16_t x282 = INT16_MAX;
	volatile int16_t x283 = -1;
	static uint64_t x284 = 75147LLU;
	volatile int32_t t70 = 8009;

    t70 = ((x281>x282)!=(x283^x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = -1;
	int32_t x286 = INT32_MIN;
	static volatile int16_t x287 = INT16_MIN;
	static int32_t t71 = 26587058;

    t71 = ((x285>x286)!=(x287^x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x290 = INT32_MAX;
	static int64_t x291 = -118339LL;
	static int8_t x292 = -8;
	int32_t t72 = -335161;

    t72 = ((x289>x290)!=(x291^x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x293 = INT16_MIN;
	uint32_t x294 = 6143U;
	int32_t x295 = INT32_MIN;
	volatile uint32_t x296 = 618228370U;
	volatile int32_t t73 = -7708;

    t73 = ((x293>x294)!=(x295^x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = INT32_MIN;
	uint32_t x298 = UINT32_MAX;
	static int64_t x299 = 1976705674457266LL;
	int32_t t74 = 8163423;

    t74 = ((x297>x298)!=(x299^x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = -1;
	int16_t x302 = INT16_MIN;
	int64_t x303 = INT64_MIN;
	static int8_t x304 = 3;

    t75 = ((x301>x302)!=(x303^x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x306 = INT16_MIN;
	uint32_t x307 = UINT32_MAX;
	uint8_t x308 = UINT8_MAX;
	int32_t t76 = 6;

    t76 = ((x305>x306)!=(x307^x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x310 = UINT64_MAX;
	int16_t x311 = INT16_MAX;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t77 = -331313432;

    t77 = ((x309>x310)!=(x311^x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x313 = -8322717936LL;
	uint64_t x315 = 4848814LLU;
	int32_t x316 = -281;
	static volatile int32_t t78 = -12;

    t78 = ((x313>x314)!=(x315^x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x317 = 3543789;
	static volatile int16_t x318 = 74;
	int8_t x319 = INT8_MIN;
	int64_t x320 = INT64_MIN;
	int32_t t79 = 15;

    t79 = ((x317>x318)!=(x319^x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x321 = 29U;
	volatile int16_t x322 = INT16_MIN;
	uint64_t x323 = 95LLU;
	int32_t t80 = 3;

    t80 = ((x321>x322)!=(x323^x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = 200353278LLU;
	int64_t x326 = INT64_MIN;
	uint16_t x327 = 81U;
	int32_t x328 = 1525;
	volatile int32_t t81 = -29;

    t81 = ((x325>x326)!=(x327^x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = 0;
	int8_t x332 = -6;

    t82 = ((x329>x330)!=(x331^x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x334 = 1710LLU;
	uint8_t x335 = 78U;
	int16_t x336 = -16372;
	volatile int32_t t83 = -21049;

    t83 = ((x333>x334)!=(x335^x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MAX;
	static uint32_t x338 = 6481U;
	static volatile uint8_t x339 = UINT8_MAX;
	int8_t x340 = -1;

    t84 = ((x337>x338)!=(x339^x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x341 = 29U;
	volatile int32_t x342 = INT32_MIN;
	uint64_t x343 = 14290LLU;
	volatile int64_t x344 = -7LL;
	static volatile int32_t t85 = 1;

    t85 = ((x341>x342)!=(x343^x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x346 = INT32_MIN;
	static int8_t x347 = INT8_MIN;
	static uint16_t x348 = 15672U;
	volatile int32_t t86 = -216;

    t86 = ((x345>x346)!=(x347^x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x349 = INT8_MIN;
	uint32_t x350 = UINT32_MAX;
	int16_t x351 = INT16_MIN;
	uint16_t x352 = 22934U;

    t87 = ((x349>x350)!=(x351^x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = INT16_MIN;
	int32_t x354 = INT32_MIN;
	static int8_t x355 = INT8_MIN;
	volatile uint16_t x356 = 33U;
	static int32_t t88 = 84;

    t88 = ((x353>x354)!=(x355^x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = 6;
	static volatile uint64_t x359 = 448472422019LLU;
	int32_t t89 = 5;

    t89 = ((x357>x358)!=(x359^x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x362 = -1;
	uint32_t x363 = 5080931U;
	static int32_t x364 = INT32_MAX;
	volatile int32_t t90 = -8712;

    t90 = ((x361>x362)!=(x363^x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = 1767123790U;
	int64_t x366 = -1LL;
	volatile int32_t t91 = 231338;

    t91 = ((x365>x366)!=(x367^x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = -3;
	static int16_t x370 = INT16_MIN;
	uint16_t x371 = 0U;
	int8_t x372 = -1;

    t92 = ((x369>x370)!=(x371^x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x375 = -55;
	int8_t x376 = -1;
	int32_t t93 = 42666729;

    t93 = ((x373>x374)!=(x375^x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x378 = 4;
	volatile uint64_t x379 = 1952438588043413LLU;
	int64_t x380 = -11630266957195LL;
	volatile int32_t t94 = -38;

    t94 = ((x377>x378)!=(x379^x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = 5;
	uint16_t x383 = 1950U;
	uint8_t x384 = 2U;
	volatile int32_t t95 = 3941;

    t95 = ((x381>x382)!=(x383^x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = -1;
	int64_t x386 = INT64_MAX;
	int32_t x387 = 16056033;
	int32_t t96 = 437434;

    t96 = ((x385>x386)!=(x387^x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = 0U;
	uint32_t x390 = 22U;
	int64_t x391 = INT64_MIN;
	int8_t x392 = INT8_MIN;
	volatile int32_t t97 = -127;

    t97 = ((x389>x390)!=(x391^x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x393 = UINT16_MAX;
	int64_t x394 = INT64_MIN;
	uint16_t x395 = 1766U;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t98 = 0;

    t98 = ((x393>x394)!=(x395^x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = UINT32_MAX;
	int16_t x398 = INT16_MAX;
	int8_t x399 = 7;
	int32_t x400 = INT32_MIN;
	int32_t t99 = -242;

    t99 = ((x397>x398)!=(x399^x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = 2U;
	int8_t x402 = 59;
	uint8_t x403 = UINT8_MAX;
	int64_t x404 = 91770318LL;
	int32_t t100 = 58886340;

    t100 = ((x401>x402)!=(x403^x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x406 = 5U;
	uint64_t x407 = 3946431956310736116LLU;
	volatile int8_t x408 = 7;
	volatile int32_t t101 = 3;

    t101 = ((x405>x406)!=(x407^x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x410 = UINT16_MAX;
	static int16_t x411 = 0;
	uint64_t x412 = 1599698LLU;
	int32_t t102 = -59;

    t102 = ((x409>x410)!=(x411^x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x413 = 3682;
	volatile int64_t x414 = INT64_MIN;
	static int8_t x415 = -1;
	uint64_t x416 = UINT64_MAX;
	volatile int32_t t103 = -919;

    t103 = ((x413>x414)!=(x415^x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x418 = UINT8_MAX;
	static volatile uint16_t x419 = 16697U;
	int8_t x420 = INT8_MIN;
	static int32_t t104 = -407004;

    t104 = ((x417>x418)!=(x419^x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x421 = INT64_MIN;
	int8_t x422 = INT8_MAX;
	uint16_t x423 = UINT16_MAX;
	int32_t x424 = INT32_MIN;
	int32_t t105 = -955304548;

    t105 = ((x421>x422)!=(x423^x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x425 = -1;
	static uint64_t x426 = 12181LLU;
	uint32_t x427 = 6U;
	volatile int32_t t106 = 9712777;

    t106 = ((x425>x426)!=(x427^x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MIN;
	uint16_t x430 = 380U;
	uint64_t x431 = 668616406LLU;
	static volatile int16_t x432 = INT16_MIN;
	volatile int32_t t107 = -1726;

    t107 = ((x429>x430)!=(x431^x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 0U;
	volatile int8_t x434 = 53;
	volatile int32_t x436 = -281086280;
	int32_t t108 = -73310;

    t108 = ((x433>x434)!=(x435^x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x437 = -1;
	uint8_t x438 = 0U;
	uint64_t x439 = UINT64_MAX;
	int32_t x440 = INT32_MIN;

    t109 = ((x437>x438)!=(x439^x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = -2959;
	int16_t x443 = INT16_MAX;
	uint32_t x444 = UINT32_MAX;
	static volatile int32_t t110 = 26877;

    t110 = ((x441>x442)!=(x443^x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = -1;
	int64_t x446 = -1LL;
	int8_t x447 = INT8_MIN;
	volatile int32_t t111 = -1;

    t111 = ((x445>x446)!=(x447^x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x450 = INT64_MIN;
	int64_t x452 = -1LL;
	volatile int32_t t112 = -68;

    t112 = ((x449>x450)!=(x451^x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MIN;
	uint8_t x454 = UINT8_MAX;
	static int8_t x455 = INT8_MIN;
	int64_t x456 = INT64_MIN;
	static int32_t t113 = -78825548;

    t113 = ((x453>x454)!=(x455^x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x457 = 0;
	int64_t x459 = INT64_MAX;
	static volatile int16_t x460 = -1;
	static volatile int32_t t114 = -504;

    t114 = ((x457>x458)!=(x459^x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = INT64_MIN;
	volatile int64_t x462 = 1888679711LL;
	uint16_t x463 = UINT16_MAX;
	int32_t t115 = 1;

    t115 = ((x461>x462)!=(x463^x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x465 = 4489750944956LL;
	int32_t x466 = -1;
	static int64_t x468 = -264863612565928312LL;

    t116 = ((x465>x466)!=(x467^x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x469 = 14464340U;
	uint32_t x470 = 802530605U;
	static int8_t x471 = INT8_MIN;
	uint16_t x472 = 0U;
	volatile int32_t t117 = -164764;

    t117 = ((x469>x470)!=(x471^x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x473 = -29;
	int16_t x474 = 1;
	volatile int32_t x475 = 79836;
	volatile int64_t x476 = 3670LL;
	int32_t t118 = -3;

    t118 = ((x473>x474)!=(x475^x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x477 = -1;
	uint8_t x478 = 110U;
	static uint32_t x479 = UINT32_MAX;
	static int16_t x480 = 1575;
	volatile int32_t t119 = -50442069;

    t119 = ((x477>x478)!=(x479^x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x482 = 6757832759314LLU;
	int64_t x483 = -1LL;
	static int64_t x484 = INT64_MAX;
	int32_t t120 = -211180;

    t120 = ((x481>x482)!=(x483^x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x486 = INT16_MIN;
	int64_t x487 = -13724000688292298LL;
	static volatile int16_t x488 = INT16_MAX;
	static int32_t t121 = 329599231;

    t121 = ((x485>x486)!=(x487^x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MAX;
	static int32_t x491 = 1210;
	volatile uint64_t x492 = 1128396330458931LLU;
	volatile int32_t t122 = 266411;

    t122 = ((x489>x490)!=(x491^x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x494 = 49U;
	int64_t x495 = -1LL;
	uint64_t x496 = 1052LLU;
	volatile int32_t t123 = -183931376;

    t123 = ((x493>x494)!=(x495^x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MAX;
	int64_t x498 = INT64_MIN;
	int64_t x499 = 31515375309LL;
	static int32_t t124 = -3205718;

    t124 = ((x497>x498)!=(x499^x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x501 = INT32_MIN;
	static uint16_t x502 = 1U;
	int64_t x503 = INT64_MAX;
	volatile int32_t t125 = -57716;

    t125 = ((x501>x502)!=(x503^x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	uint64_t x506 = UINT64_MAX;
	static int16_t x507 = INT16_MIN;
	int8_t x508 = INT8_MIN;
	volatile int32_t t126 = 18;

    t126 = ((x505>x506)!=(x507^x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = -264682866841295906LL;
	volatile int8_t x511 = INT8_MIN;
	uint32_t x512 = 3U;
	volatile int32_t t127 = -37104;

    t127 = ((x509>x510)!=(x511^x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x515 = INT64_MAX;
	uint64_t x516 = 8349537650LLU;
	static int32_t t128 = -8;

    t128 = ((x513>x514)!=(x515^x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -2334013545LL;
	uint16_t x518 = 28016U;
	int16_t x519 = INT16_MIN;
	volatile int64_t x520 = INT64_MIN;
	int32_t t129 = -8051480;

    t129 = ((x517>x518)!=(x519^x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x521 = UINT64_MAX;
	volatile uint16_t x522 = UINT16_MAX;
	static volatile int32_t x523 = 34774701;
	int32_t t130 = 5;

    t130 = ((x521>x522)!=(x523^x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int32_t x525 = INT32_MAX;
	int64_t x527 = 2509706983033LL;
	volatile uint64_t x528 = UINT64_MAX;
	volatile int32_t t131 = 45734;

    t131 = ((x525>x526)!=(x527^x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x530 = 54170610U;
	int8_t x531 = -7;
	static volatile int64_t x532 = INT64_MIN;
	int32_t t132 = -49435;

    t132 = ((x529>x530)!=(x531^x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = 1872833LLU;
	int32_t x536 = 3;
	volatile int32_t t133 = 23;

    t133 = ((x533>x534)!=(x535^x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x537 = 126574087178LLU;
	uint8_t x539 = 36U;
	uint8_t x540 = 8U;
	int32_t t134 = 53;

    t134 = ((x537>x538)!=(x539^x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x541 = 1U;
	int64_t x542 = INT64_MIN;
	int32_t x543 = INT32_MIN;
	uint16_t x544 = 1339U;
	int32_t t135 = 202527321;

    t135 = ((x541>x542)!=(x543^x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x547 = UINT16_MAX;
	static volatile int32_t x548 = -983705;
	int32_t t136 = 3007177;

    t136 = ((x545>x546)!=(x547^x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 0U;
	static uint32_t x551 = UINT32_MAX;
	uint16_t x552 = UINT16_MAX;

    t137 = ((x549>x550)!=(x551^x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = -1;
	int32_t x554 = INT32_MIN;
	int16_t x555 = INT16_MAX;
	uint64_t x556 = 2059570LLU;

    t138 = ((x553>x554)!=(x555^x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x557 = -1;
	int16_t x559 = -1;
	int16_t x560 = -1;

    t139 = ((x557>x558)!=(x559^x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = INT8_MIN;
	static volatile int16_t x562 = INT16_MIN;

    t140 = ((x561>x562)!=(x563^x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = -363;
	int8_t x568 = INT8_MIN;
	volatile int32_t t141 = 6969;

    t141 = ((x565>x566)!=(x567^x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MIN;
	volatile int32_t x571 = -28094727;
	static int16_t x572 = INT16_MAX;
	volatile int32_t t142 = -46539805;

    t142 = ((x569>x570)!=(x571^x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	int64_t x574 = 147186978837LL;
	uint64_t x575 = 62113024544307361LLU;
	int8_t x576 = INT8_MAX;

    t143 = ((x573>x574)!=(x575^x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MIN;
	static volatile uint16_t x578 = UINT16_MAX;
	volatile uint16_t x579 = 1867U;
	int16_t x580 = INT16_MIN;
	int32_t t144 = -62775747;

    t144 = ((x577>x578)!=(x579^x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = UINT32_MAX;
	static volatile int32_t x582 = -1;
	int32_t x583 = 145;
	volatile uint16_t x584 = UINT16_MAX;
	int32_t t145 = 76815;

    t145 = ((x581>x582)!=(x583^x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x586 = -1;
	int64_t x588 = INT64_MAX;
	volatile int32_t t146 = 944345860;

    t146 = ((x585>x586)!=(x587^x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int64_t x590 = INT64_MAX;
	int16_t x592 = INT16_MAX;
	volatile int32_t t147 = -4640047;

    t147 = ((x589>x590)!=(x591^x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = -1361;
	static int32_t x594 = -1;
	int16_t x596 = INT16_MIN;
	volatile int32_t t148 = 13;

    t148 = ((x593>x594)!=(x595^x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x597 = 0U;
	int8_t x599 = 0;
	int64_t x600 = 206LL;
	volatile int32_t t149 = -757682057;

    t149 = ((x597>x598)!=(x599^x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = 37489620517204LL;
	int8_t x602 = INT8_MIN;
	int64_t x604 = INT64_MAX;
	static int32_t t150 = 184637612;

    t150 = ((x601>x602)!=(x603^x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x605 = 74U;
	uint32_t x606 = 1U;
	int64_t x607 = -498476006219613890LL;
	static volatile int8_t x608 = -1;

    t151 = ((x605>x606)!=(x607^x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = -2385LL;
	uint64_t x611 = 5592LLU;
	int8_t x612 = INT8_MAX;
	volatile int32_t t152 = -786733437;

    t152 = ((x609>x610)!=(x611^x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = INT16_MIN;
	static int32_t x614 = INT32_MAX;
	uint64_t x615 = UINT64_MAX;
	volatile int64_t x616 = 203672927209LL;
	volatile int32_t t153 = 108;

    t153 = ((x613>x614)!=(x615^x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x618 = 138079;
	int32_t x619 = -1;
	int32_t t154 = 1;

    t154 = ((x617>x618)!=(x619^x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x622 = -20;
	volatile int32_t x623 = INT32_MIN;
	int32_t x624 = INT32_MIN;
	volatile int32_t t155 = -1049145775;

    t155 = ((x621>x622)!=(x623^x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = UINT16_MAX;
	static volatile int64_t x626 = -1LL;
	int64_t x628 = INT64_MAX;

    t156 = ((x625>x626)!=(x627^x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x631 = 722U;
	uint16_t x632 = 11U;

    t157 = ((x629>x630)!=(x631^x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = -1LL;
	volatile int64_t x634 = 314820177LL;
	volatile int64_t x635 = -3387775LL;
	int8_t x636 = 5;
	volatile int32_t t158 = 221817;

    t158 = ((x633>x634)!=(x635^x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int64_t x637 = INT64_MAX;
	int8_t x639 = -1;
	static int8_t x640 = 56;
	static volatile int32_t t159 = 1931251;

    t159 = ((x637>x638)!=(x639^x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x641 = 6LLU;
	int64_t x642 = INT64_MIN;
	int32_t x643 = INT32_MAX;
	int8_t x644 = 2;
	int32_t t160 = 6;

    t160 = ((x641>x642)!=(x643^x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x646 = 5089LL;
	int16_t x647 = INT16_MIN;
	volatile uint8_t x648 = 7U;

    t161 = ((x645>x646)!=(x647^x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x651 = INT16_MIN;
	int64_t x652 = -12732836092LL;
	static volatile int32_t t162 = -1;

    t162 = ((x649>x650)!=(x651^x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	uint32_t x654 = 97991366U;
	int32_t t163 = 74;

    t163 = ((x653>x654)!=(x655^x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MAX;
	static volatile int16_t x659 = 13523;
	static uint32_t x660 = 160007U;

    t164 = ((x657>x658)!=(x659^x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x661 = UINT16_MAX;
	int32_t x662 = INT32_MAX;
	int64_t x664 = 29145LL;
	volatile int32_t t165 = 3152443;

    t165 = ((x661>x662)!=(x663^x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	int64_t x666 = -2868833086394LL;
	volatile int16_t x667 = INT16_MIN;
	int64_t x668 = INT64_MIN;

    t166 = ((x665>x666)!=(x667^x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x670 = INT32_MIN;

    t167 = ((x669>x670)!=(x671^x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MAX;
	static int8_t x674 = INT8_MIN;
	int32_t x675 = -29808267;
	static int32_t t168 = -865091;

    t168 = ((x673>x674)!=(x675^x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x678 = 2U;
	uint64_t x679 = UINT64_MAX;
	static volatile int8_t x680 = INT8_MIN;

    t169 = ((x677>x678)!=(x679^x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = 2;
	int32_t x682 = INT32_MAX;
	int32_t x683 = -44;
	static int64_t x684 = INT64_MIN;

    t170 = ((x681>x682)!=(x683^x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x685 = 10437;
	uint16_t x686 = UINT16_MAX;
	int64_t x687 = -996457996780803464LL;
	int32_t t171 = 1257;

    t171 = ((x685>x686)!=(x687^x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x689 = 1;
	int8_t x690 = INT8_MIN;
	int8_t x692 = -1;

    t172 = ((x689>x690)!=(x691^x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = 38U;
	volatile int16_t x695 = INT16_MIN;
	uint32_t x696 = UINT32_MAX;
	volatile int32_t t173 = 668667928;

    t173 = ((x693>x694)!=(x695^x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x699 = -3693LL;
	int32_t x700 = INT32_MIN;

    t174 = ((x697>x698)!=(x699^x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	int16_t x702 = -237;
	volatile int32_t t175 = -229169;

    t175 = ((x701>x702)!=(x703^x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MAX;
	int64_t x707 = -3920779291LL;
	int32_t x708 = INT32_MAX;
	int32_t t176 = -1;

    t176 = ((x705>x706)!=(x707^x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x709 = UINT8_MAX;
	int32_t x710 = INT32_MIN;
	static uint8_t x711 = 0U;
	int8_t x712 = INT8_MIN;
	volatile int32_t t177 = -27328475;

    t177 = ((x709>x710)!=(x711^x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MAX;
	uint64_t x714 = 29610453779469LLU;
	int8_t x715 = INT8_MAX;
	int8_t x716 = -55;

    t178 = ((x713>x714)!=(x715^x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x717 = 3035647679231LLU;
	volatile int16_t x718 = 1059;
	int8_t x719 = INT8_MIN;

    t179 = ((x717>x718)!=(x719^x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x722 = 4U;
	volatile int64_t x723 = -1LL;
	volatile uint64_t x724 = UINT64_MAX;
	int32_t t180 = -2;

    t180 = ((x721>x722)!=(x723^x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x726 = -1;
	volatile uint8_t x728 = 57U;
	volatile int32_t t181 = -510133140;

    t181 = ((x725>x726)!=(x727^x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = 2U;
	static int64_t x730 = -36490898603LL;
	int16_t x731 = INT16_MIN;
	volatile int16_t x732 = INT16_MAX;
	static int32_t t182 = 40;

    t182 = ((x729>x730)!=(x731^x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x735 = INT32_MIN;
	uint8_t x736 = UINT8_MAX;
	volatile int32_t t183 = -1178081;

    t183 = ((x733>x734)!=(x735^x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x739 = 41LLU;
	volatile uint64_t x740 = 34LLU;
	int32_t t184 = -16477390;

    t184 = ((x737>x738)!=(x739^x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = -1;
	static uint64_t x742 = 332133672479897LLU;
	static int32_t x743 = INT32_MAX;
	int32_t x744 = INT32_MAX;

    t185 = ((x741>x742)!=(x743^x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = -1;
	uint16_t x746 = 1U;
	int32_t x747 = 1;
	static int64_t x748 = -342894751LL;
	int32_t t186 = -16;

    t186 = ((x745>x746)!=(x747^x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x750 = INT8_MIN;
	uint16_t x751 = 39U;
	int32_t t187 = 667;

    t187 = ((x749>x750)!=(x751^x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = 328;
	int64_t x754 = -1LL;
	static int8_t x756 = INT8_MIN;
	int32_t t188 = -884264;

    t188 = ((x753>x754)!=(x755^x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MIN;
	uint16_t x758 = 25U;
	int64_t x759 = INT64_MIN;
	int32_t x760 = -1;

    t189 = ((x757>x758)!=(x759^x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x761 = INT8_MAX;
	uint8_t x762 = 17U;
	int8_t x763 = -10;
	int32_t x764 = INT32_MAX;
	volatile int32_t t190 = 5;

    t190 = ((x761>x762)!=(x763^x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x766 = 701;
	int32_t x767 = 32747;
	static uint32_t x768 = 1297U;
	volatile int32_t t191 = 251119939;

    t191 = ((x765>x766)!=(x767^x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x771 = 25980U;
	uint8_t x772 = UINT8_MAX;
	int32_t t192 = 294;

    t192 = ((x769>x770)!=(x771^x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = -1LL;
	static uint64_t x774 = UINT64_MAX;
	volatile int64_t x775 = -1LL;
	static volatile int32_t t193 = 521957890;

    t193 = ((x773>x774)!=(x775^x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = INT64_MIN;
	static uint32_t x778 = UINT32_MAX;
	uint64_t x780 = UINT64_MAX;
	static int32_t t194 = -2035021;

    t194 = ((x777>x778)!=(x779^x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x782 = UINT16_MAX;
	int64_t x783 = INT64_MAX;
	static int16_t x784 = INT16_MIN;
	volatile int32_t t195 = -160935;

    t195 = ((x781>x782)!=(x783^x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MAX;
	uint16_t x786 = 6U;
	volatile int32_t x787 = -1;
	uint32_t x788 = 5746U;

    t196 = ((x785>x786)!=(x787^x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -1;
	static int32_t x790 = 1089435;
	int32_t x791 = 5644;
	static uint8_t x792 = 1U;
	volatile int32_t t197 = -1;

    t197 = ((x789>x790)!=(x791^x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x794 = INT8_MIN;
	volatile int8_t x796 = -18;
	int32_t t198 = 46;

    t198 = ((x793>x794)!=(x795^x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = INT16_MIN;
	int32_t x799 = -1864;
	int8_t x800 = 8;
	volatile int32_t t199 = -120644;

    t199 = ((x797>x798)!=(x799^x800));

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


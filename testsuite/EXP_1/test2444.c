
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

int16_t x1 = INT16_MIN;
int64_t x4 = INT64_MIN;
volatile int32_t x14 = INT32_MIN;
int32_t t4 = 0;
int32_t t5 = -846694;
int8_t x30 = INT8_MIN;
volatile int8_t x37 = INT8_MIN;
static volatile int8_t x40 = INT8_MAX;
uint64_t x46 = 9622798LLU;
static int64_t x51 = INT64_MIN;
uint8_t x54 = 8U;
static volatile int32_t t17 = -125199;
uint64_t x73 = UINT64_MAX;
static volatile int32_t x92 = 91560;
int32_t t23 = -2;
uint16_t x110 = 63U;
volatile int32_t x115 = -15609795;
int32_t t28 = 0;
uint32_t x118 = 12802402U;
uint32_t x119 = UINT32_MAX;
int32_t t30 = -57743189;
static int16_t x126 = 49;
int16_t x131 = -1;
static int16_t x132 = INT16_MIN;
volatile int32_t t32 = -813;
int32_t x134 = INT32_MIN;
int32_t x138 = INT32_MIN;
int64_t x145 = INT64_MAX;
int32_t x146 = -1;
static int16_t x151 = INT16_MIN;
uint64_t x153 = 8939389691237319LLU;
uint16_t x157 = UINT16_MAX;
uint16_t x158 = UINT16_MAX;
int16_t x162 = INT16_MAX;
int16_t x168 = -845;
int32_t t41 = 119588;
volatile int16_t x171 = 13;
uint8_t x172 = 22U;
int32_t x173 = INT32_MIN;
uint64_t x181 = 635763682125LLU;
int32_t x189 = INT32_MIN;
volatile int32_t x198 = -1;
int32_t t49 = -915459854;
uint32_t x201 = 10678373U;
volatile int32_t x203 = 28784841;
static int16_t x210 = -1813;
uint32_t x215 = UINT32_MAX;
static volatile int8_t x217 = -52;
static int64_t x221 = INT64_MIN;
static uint32_t x222 = 184U;
static uint8_t x229 = UINT8_MAX;
static volatile uint8_t x230 = 6U;
uint64_t x233 = UINT64_MAX;
static int32_t x234 = -1;
uint16_t x245 = 19U;
uint32_t x260 = 642021748U;
volatile uint8_t x262 = 6U;
int8_t x273 = -1;
static uint8_t x279 = 55U;
static int16_t x285 = -4704;
static uint16_t x289 = 2625U;
volatile uint8_t x292 = 8U;
uint32_t x298 = 65145980U;
int32_t t74 = 1;
volatile uint8_t x304 = UINT8_MAX;
int16_t x306 = INT16_MAX;
volatile int16_t x311 = -1;
static int64_t x322 = 17208LL;
volatile uint8_t x338 = 1U;
uint64_t x348 = UINT64_MAX;
int32_t t86 = -463;
int8_t x351 = -1;
static uint8_t x354 = 6U;
volatile int16_t x359 = INT16_MAX;
static int64_t x362 = INT64_MAX;
int32_t x367 = 3;
uint64_t x368 = UINT64_MAX;
volatile int16_t x369 = INT16_MAX;
volatile int8_t x376 = INT8_MIN;
static uint32_t x381 = 4502874U;
int8_t x394 = 4;
static int64_t x401 = 5LL;
int32_t x403 = -1;
int64_t x405 = INT64_MIN;
static volatile int32_t x407 = INT32_MIN;
int8_t x408 = -24;
volatile int32_t t101 = 363;
volatile int32_t t102 = -17;
int64_t x415 = -24608533468320803LL;
uint8_t x416 = 18U;
uint64_t x424 = 3913433948514409LLU;
int32_t t105 = -107969146;
uint64_t x429 = 30740LLU;
int32_t x431 = INT32_MAX;
int16_t x432 = -1;
uint16_t x434 = 3502U;
int16_t x439 = -5;
int64_t x440 = -1LL;
volatile int32_t t109 = 1542;
int32_t t112 = 656;
int8_t x455 = 0;
static volatile int8_t x457 = -1;
volatile int32_t t116 = 695016;
int64_t x473 = INT64_MIN;
uint64_t x480 = UINT64_MAX;
static uint64_t x484 = 1005352059041LLU;
uint16_t x490 = 1U;
int32_t t122 = -125446;
int8_t x497 = -1;
static uint8_t x505 = 30U;
int16_t x520 = -26;
int16_t x524 = INT16_MIN;
uint32_t x527 = 470521U;
volatile int32_t t131 = 22660;
static int64_t x533 = INT64_MIN;
uint16_t x534 = 92U;
int32_t t133 = 73506;
uint64_t x539 = UINT64_MAX;
static uint16_t x540 = 254U;
uint64_t x542 = 10424327855894573LLU;
volatile uint64_t x544 = UINT64_MAX;
int64_t x551 = -274502542LL;
int8_t x553 = INT8_MIN;
uint32_t x559 = 81U;
static int32_t t140 = -1380;
uint32_t x566 = 55650U;
volatile int32_t x568 = INT32_MIN;
volatile int32_t t141 = 62305;
int64_t x571 = INT64_MIN;
static uint16_t x583 = 1387U;
int16_t x585 = 10061;
int64_t x586 = INT64_MIN;
static volatile int16_t x595 = INT16_MAX;
volatile int64_t x596 = INT64_MIN;
volatile int8_t x599 = INT8_MAX;
int32_t t150 = 30401013;
volatile int32_t t151 = -116326057;
uint8_t x610 = UINT8_MAX;
int32_t t152 = -33590826;
volatile int64_t x616 = -244306554LL;
int32_t t154 = -56;
static int8_t x623 = -1;
volatile uint32_t x625 = UINT32_MAX;
int32_t t157 = 631932;
int16_t x636 = INT16_MIN;
volatile int32_t x639 = -1;
uint64_t x643 = 1094282429947520712LLU;
volatile int32_t t160 = 51084;
uint32_t x645 = UINT32_MAX;
uint32_t x646 = UINT32_MAX;
volatile int16_t x647 = INT16_MIN;
int32_t t161 = 149296;
volatile uint8_t x649 = UINT8_MAX;
uint8_t x652 = 3U;
int32_t x667 = INT32_MIN;
volatile int16_t x668 = 0;
int32_t t167 = 17107;
int32_t t168 = 4473914;
uint8_t x679 = UINT8_MAX;
int32_t x681 = INT32_MAX;
int16_t x689 = INT16_MIN;
static int16_t x691 = 2167;
int32_t t172 = -279;
int32_t t173 = 381;
int8_t x697 = INT8_MAX;
volatile int16_t x698 = INT16_MAX;
int16_t x706 = 37;
int64_t x709 = INT64_MIN;
static int32_t t177 = 2780;
int8_t x714 = -6;
uint16_t x722 = 0U;
static int16_t x731 = -7893;
volatile int8_t x737 = 1;
static volatile uint8_t x748 = 20U;
int16_t x752 = INT16_MAX;
int8_t x759 = INT8_MAX;
uint64_t x762 = 66449199674358282LLU;
volatile int16_t x764 = INT16_MIN;
int64_t x770 = 32443711603020LL;
int32_t t192 = 1497;
int16_t x773 = INT16_MAX;
int32_t x784 = INT32_MIN;
static int32_t x794 = -1;
uint8_t x796 = 8U;
static uint16_t x797 = 10990U;


void f0(void) {
    	uint8_t x2 = 24U;
	int16_t x3 = -1;
	int32_t t0 = 127759;

    t0 = (((x1|x2)!=x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = INT32_MIN;
	volatile int16_t x6 = INT16_MIN;
	volatile int64_t x7 = INT64_MIN;
	int64_t x8 = -1LL;
	volatile int32_t t1 = 32122;

    t1 = (((x5|x6)!=x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = 0;
	int64_t x10 = -1LL;
	int64_t x11 = INT64_MAX;
	int16_t x12 = INT16_MIN;
	int32_t t2 = 67158847;

    t2 = (((x9|x10)!=x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -164561564735118014LL;
	volatile int64_t x15 = 8222479380278432LL;
	static uint32_t x16 = 11U;
	static int32_t t3 = -487992;

    t3 = (((x13|x14)!=x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = 0;
	volatile uint64_t x18 = UINT64_MAX;
	volatile uint32_t x19 = 0U;
	uint64_t x20 = 428765377526LLU;

    t4 = (((x17|x18)!=x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -105535LL;
	uint32_t x22 = 807875U;
	static int32_t x23 = -2826726;
	volatile uint64_t x24 = UINT64_MAX;

    t5 = (((x21|x22)!=x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x25 = UINT8_MAX;
	static int16_t x26 = -338;
	int8_t x27 = 1;
	uint8_t x28 = 9U;
	int32_t t6 = 22924513;

    t6 = (((x25|x26)!=x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 3032U;
	int8_t x31 = INT8_MAX;
	volatile uint32_t x32 = 15405157U;
	int32_t t7 = 114847200;

    t7 = (((x29|x30)!=x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 17614U;
	int8_t x34 = INT8_MAX;
	uint32_t x35 = 148114952U;
	int16_t x36 = 5;
	int32_t t8 = 0;

    t8 = (((x33|x34)!=x35)==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x38 = 3U;
	volatile int8_t x39 = -1;
	static int32_t t9 = -1;

    t9 = (((x37|x38)!=x39)==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = UINT64_MAX;
	static uint64_t x42 = UINT64_MAX;
	int16_t x43 = INT16_MAX;
	static int8_t x44 = 2;
	static int32_t t10 = -328;

    t10 = (((x41|x42)!=x43)==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = INT64_MIN;
	int16_t x47 = INT16_MIN;
	uint64_t x48 = 7783237574993386044LLU;
	volatile int32_t t11 = 0;

    t11 = (((x45|x46)!=x47)==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int16_t x49 = INT16_MIN;
	static int16_t x50 = -1;
	volatile int16_t x52 = INT16_MAX;
	volatile int32_t t12 = 572;

    t12 = (((x49|x50)!=x51)==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 99LLU;
	int16_t x55 = 1;
	static int64_t x56 = INT64_MIN;
	volatile int32_t t13 = 0;

    t13 = (((x53|x54)!=x55)==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 1;
	volatile int16_t x58 = -1;
	static int64_t x59 = -1LL;
	volatile int8_t x60 = 56;
	volatile int32_t t14 = -3;

    t14 = (((x57|x58)!=x59)==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 46287333783882156LLU;
	int32_t x62 = 1507041;
	int16_t x63 = 1920;
	static int32_t x64 = -1;
	int32_t t15 = 126122;

    t15 = (((x61|x62)!=x63)==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x65 = UINT8_MAX;
	int32_t x66 = -1;
	int8_t x67 = -1;
	int8_t x68 = 1;
	static volatile int32_t t16 = -39;

    t16 = (((x65|x66)!=x67)==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x69 = INT32_MIN;
	uint16_t x70 = 131U;
	volatile int32_t x71 = -1;
	static int16_t x72 = INT16_MIN;

    t17 = (((x69|x70)!=x71)==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = INT32_MAX;
	uint64_t x75 = 131358900856LLU;
	volatile uint64_t x76 = UINT64_MAX;
	int32_t t18 = 84917778;

    t18 = (((x73|x74)!=x75)==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 3715325777678252LLU;
	int32_t x78 = -375653998;
	volatile int8_t x79 = -1;
	uint16_t x80 = 123U;
	volatile int32_t t19 = -1;

    t19 = (((x77|x78)!=x79)==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 4113496U;
	static int64_t x82 = -16LL;
	volatile uint32_t x83 = 13292U;
	int16_t x84 = INT16_MAX;
	volatile int32_t t20 = 0;

    t20 = (((x81|x82)!=x83)==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 142LLU;
	int8_t x86 = INT8_MAX;
	int8_t x87 = 1;
	uint64_t x88 = 70804133060561LLU;
	int32_t t21 = 17;

    t21 = (((x85|x86)!=x87)==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = INT16_MAX;
	int32_t x90 = -1;
	volatile int64_t x91 = -3694171LL;
	static int32_t t22 = 22;

    t22 = (((x89|x90)!=x91)==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -1;
	volatile int32_t x94 = INT32_MAX;
	int8_t x95 = INT8_MAX;
	int16_t x96 = -22;

    t23 = (((x93|x94)!=x95)==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MAX;
	uint32_t x98 = UINT32_MAX;
	uint64_t x99 = 50010LLU;
	int8_t x100 = INT8_MIN;
	int32_t t24 = -94;

    t24 = (((x97|x98)!=x99)==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x101 = UINT16_MAX;
	int64_t x102 = -1LL;
	int8_t x103 = INT8_MAX;
	int16_t x104 = INT16_MIN;
	static int32_t t25 = -9719748;

    t25 = (((x101|x102)!=x103)==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = UINT64_MAX;
	int8_t x106 = 6;
	static volatile int64_t x107 = INT64_MAX;
	int32_t x108 = -1;
	volatile int32_t t26 = 3845;

    t26 = (((x105|x106)!=x107)==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 10U;
	static uint8_t x111 = 6U;
	volatile int64_t x112 = INT64_MAX;
	int32_t t27 = 7566;

    t27 = (((x109|x110)!=x111)==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x113 = 6;
	int32_t x114 = 10133;
	volatile int32_t x116 = INT32_MAX;

    t28 = (((x113|x114)!=x115)==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = -1;
	uint16_t x120 = 19833U;
	int32_t t29 = 1;

    t29 = (((x117|x118)!=x119)==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	int8_t x122 = 11;
	uint64_t x123 = 75075459796859LLU;
	int32_t x124 = INT32_MIN;

    t30 = (((x121|x122)!=x123)==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = 2;
	int64_t x127 = INT64_MIN;
	int8_t x128 = INT8_MIN;
	int32_t t31 = -1;

    t31 = (((x125|x126)!=x127)==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = UINT64_MAX;
	int64_t x130 = INT64_MIN;

    t32 = (((x129|x130)!=x131)==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x133 = INT64_MIN;
	static int16_t x135 = INT16_MAX;
	static int16_t x136 = INT16_MAX;
	int32_t t33 = -2687916;

    t33 = (((x133|x134)!=x135)==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = -1LL;
	int8_t x139 = -1;
	int64_t x140 = -1LL;
	int32_t t34 = -7924;

    t34 = (((x137|x138)!=x139)==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x141 = 89556U;
	volatile int64_t x142 = INT64_MIN;
	volatile uint64_t x143 = 35473774334371LLU;
	static volatile int8_t x144 = -2;
	int32_t t35 = 64154048;

    t35 = (((x141|x142)!=x143)==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x147 = INT32_MIN;
	static int16_t x148 = INT16_MAX;
	volatile int32_t t36 = -1691490;

    t36 = (((x145|x146)!=x147)==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = 392U;
	int16_t x150 = -569;
	uint16_t x152 = UINT16_MAX;
	volatile int32_t t37 = 0;

    t37 = (((x149|x150)!=x151)==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x154 = -6421;
	uint16_t x155 = 11385U;
	uint64_t x156 = 62468911776LLU;
	volatile int32_t t38 = 233;

    t38 = (((x153|x154)!=x155)==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x159 = INT64_MIN;
	uint64_t x160 = UINT64_MAX;
	volatile int32_t t39 = -5426;

    t39 = (((x157|x158)!=x159)==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x161 = -1;
	uint64_t x163 = 6546879LLU;
	int32_t x164 = INT32_MAX;
	volatile int32_t t40 = 1;

    t40 = (((x161|x162)!=x163)==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -122LL;
	int8_t x166 = 15;
	int64_t x167 = INT64_MIN;

    t41 = (((x165|x166)!=x167)==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x169 = 958U;
	volatile int8_t x170 = INT8_MIN;
	static volatile int32_t t42 = -183822;

    t42 = (((x169|x170)!=x171)==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x174 = 1U;
	static int64_t x175 = 1876LL;
	int8_t x176 = -10;
	int32_t t43 = 124898946;

    t43 = (((x173|x174)!=x175)==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MIN;
	volatile int8_t x178 = INT8_MIN;
	volatile int32_t x179 = -1;
	int64_t x180 = INT64_MIN;
	volatile int32_t t44 = -991726950;

    t44 = (((x177|x178)!=x179)==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x182 = INT32_MIN;
	int64_t x183 = INT64_MIN;
	volatile uint16_t x184 = 751U;
	int32_t t45 = 418529822;

    t45 = (((x181|x182)!=x183)==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = 3;
	int64_t x186 = INT64_MIN;
	static int8_t x187 = 0;
	volatile int32_t x188 = INT32_MIN;
	volatile int32_t t46 = -7;

    t46 = (((x185|x186)!=x187)==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x190 = -1;
	static int32_t x191 = INT32_MIN;
	int8_t x192 = 1;
	volatile int32_t t47 = 157417589;

    t47 = (((x189|x190)!=x191)==x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MAX;
	uint16_t x194 = UINT16_MAX;
	uint64_t x195 = 108130LLU;
	int16_t x196 = -1;
	volatile int32_t t48 = -84839;

    t48 = (((x193|x194)!=x195)==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	int32_t x199 = INT32_MIN;
	int8_t x200 = INT8_MIN;

    t49 = (((x197|x198)!=x199)==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x202 = UINT8_MAX;
	int16_t x204 = 4097;
	volatile int32_t t50 = -993671906;

    t50 = (((x201|x202)!=x203)==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MAX;
	int32_t x206 = INT32_MIN;
	int64_t x207 = INT64_MAX;
	int32_t x208 = -7587;
	volatile int32_t t51 = 1;

    t51 = (((x205|x206)!=x207)==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = INT16_MIN;
	int8_t x211 = INT8_MAX;
	int64_t x212 = 3LL;
	int32_t t52 = 87782;

    t52 = (((x209|x210)!=x211)==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	uint64_t x214 = 155LLU;
	int64_t x216 = -1LL;
	static volatile int32_t t53 = 1;

    t53 = (((x213|x214)!=x215)==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x218 = INT32_MAX;
	int16_t x219 = 3147;
	uint16_t x220 = UINT16_MAX;
	int32_t t54 = -185414691;

    t54 = (((x217|x218)!=x219)==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x223 = -1LL;
	uint16_t x224 = 689U;
	int32_t t55 = 935403;

    t55 = (((x221|x222)!=x223)==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = -1;
	static int32_t x226 = -7349;
	volatile int8_t x227 = -1;
	int8_t x228 = -1;
	int32_t t56 = -9;

    t56 = (((x225|x226)!=x227)==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x231 = -1;
	int8_t x232 = 28;
	volatile int32_t t57 = 670840255;

    t57 = (((x229|x230)!=x231)==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x235 = 7720834322592330LLU;
	uint16_t x236 = 3U;
	static volatile int32_t t58 = 3;

    t58 = (((x233|x234)!=x235)==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	volatile uint64_t x238 = 867305LLU;
	uint16_t x239 = 41U;
	volatile int8_t x240 = INT8_MAX;
	int32_t t59 = -5463774;

    t59 = (((x237|x238)!=x239)==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -1;
	uint64_t x242 = 0LLU;
	uint64_t x243 = 298668654869027LLU;
	int64_t x244 = 906740582262571443LL;
	static volatile int32_t t60 = 31501083;

    t60 = (((x241|x242)!=x243)==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x246 = INT64_MIN;
	uint32_t x247 = 2074346870U;
	int32_t x248 = 880;
	volatile int32_t t61 = 172548;

    t61 = (((x245|x246)!=x247)==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x249 = -1878;
	int16_t x250 = -1;
	int8_t x251 = INT8_MAX;
	uint64_t x252 = 177587229053121LLU;
	volatile int32_t t62 = -27;

    t62 = (((x249|x250)!=x251)==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x253 = 296LL;
	uint64_t x254 = UINT64_MAX;
	int8_t x255 = INT8_MIN;
	int64_t x256 = INT64_MAX;
	volatile int32_t t63 = 130179980;

    t63 = (((x253|x254)!=x255)==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MIN;
	static uint8_t x258 = 104U;
	static volatile int64_t x259 = -28384975556036LL;
	volatile int32_t t64 = -125262507;

    t64 = (((x257|x258)!=x259)==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x261 = -1LL;
	uint8_t x263 = UINT8_MAX;
	int8_t x264 = INT8_MIN;
	volatile int32_t t65 = -1;

    t65 = (((x261|x262)!=x263)==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MAX;
	volatile int8_t x266 = INT8_MIN;
	int32_t x267 = 2478;
	uint64_t x268 = 1155162LLU;
	volatile int32_t t66 = -122;

    t66 = (((x265|x266)!=x267)==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MIN;
	static volatile uint32_t x270 = UINT32_MAX;
	volatile int16_t x271 = -1;
	uint32_t x272 = UINT32_MAX;
	volatile int32_t t67 = -1;

    t67 = (((x269|x270)!=x271)==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x274 = INT16_MIN;
	static int64_t x275 = INT64_MIN;
	int8_t x276 = INT8_MIN;
	volatile int32_t t68 = -1;

    t68 = (((x273|x274)!=x275)==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x277 = INT64_MIN;
	uint8_t x278 = UINT8_MAX;
	int16_t x280 = INT16_MIN;
	int32_t t69 = -852534984;

    t69 = (((x277|x278)!=x279)==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x281 = -1LL;
	uint16_t x282 = 1U;
	uint16_t x283 = UINT16_MAX;
	volatile int8_t x284 = INT8_MIN;
	int32_t t70 = -3;

    t70 = (((x281|x282)!=x283)==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x286 = -1;
	static int8_t x287 = 10;
	uint8_t x288 = 2U;
	int32_t t71 = -15756298;

    t71 = (((x285|x286)!=x287)==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x290 = UINT16_MAX;
	int32_t x291 = INT32_MIN;
	int32_t t72 = 61112;

    t72 = (((x289|x290)!=x291)==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x293 = INT64_MIN;
	int32_t x294 = INT32_MIN;
	int32_t x295 = INT32_MIN;
	int64_t x296 = INT64_MIN;
	volatile int32_t t73 = 48009353;

    t73 = (((x293|x294)!=x295)==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x297 = 19178749537LL;
	uint64_t x299 = 3156437436334293LLU;
	int32_t x300 = 1;

    t74 = (((x297|x298)!=x299)==x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x301 = 27535U;
	int8_t x302 = INT8_MIN;
	static volatile uint8_t x303 = 35U;
	volatile int32_t t75 = 0;

    t75 = (((x301|x302)!=x303)==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MIN;
	int32_t x307 = INT32_MAX;
	uint16_t x308 = 210U;
	int32_t t76 = -738;

    t76 = (((x305|x306)!=x307)==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x309 = UINT32_MAX;
	uint32_t x310 = 34791186U;
	static int16_t x312 = INT16_MIN;
	int32_t t77 = -20;

    t77 = (((x309|x310)!=x311)==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = INT8_MIN;
	int64_t x314 = INT64_MIN;
	int8_t x315 = INT8_MIN;
	int32_t x316 = -1;
	int32_t t78 = 23298697;

    t78 = (((x313|x314)!=x315)==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = 10990;
	uint8_t x318 = 0U;
	static int32_t x319 = INT32_MIN;
	uint16_t x320 = 12U;
	int32_t t79 = 589;

    t79 = (((x317|x318)!=x319)==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 62864284U;
	uint16_t x323 = UINT16_MAX;
	static volatile int16_t x324 = 1519;
	volatile int32_t t80 = -33;

    t80 = (((x321|x322)!=x323)==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x325 = 0U;
	uint32_t x326 = 6U;
	static volatile int64_t x327 = -1905114595LL;
	int32_t x328 = -1;
	static int32_t t81 = -14247056;

    t81 = (((x325|x326)!=x327)==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MAX;
	int64_t x330 = 14233055044168LL;
	static int16_t x331 = INT16_MIN;
	volatile int32_t x332 = INT32_MAX;
	volatile int32_t t82 = -913;

    t82 = (((x329|x330)!=x331)==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x333 = -1;
	int64_t x334 = INT64_MAX;
	uint8_t x335 = UINT8_MAX;
	static int64_t x336 = INT64_MAX;
	int32_t t83 = 524724786;

    t83 = (((x333|x334)!=x335)==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x337 = 15331U;
	int8_t x339 = -1;
	int16_t x340 = INT16_MIN;
	volatile int32_t t84 = -417174;

    t84 = (((x337|x338)!=x339)==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MAX;
	static volatile uint16_t x342 = UINT16_MAX;
	int8_t x343 = INT8_MAX;
	static uint32_t x344 = 2U;
	volatile int32_t t85 = 1432;

    t85 = (((x341|x342)!=x343)==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = -1LL;
	int32_t x346 = -10;
	int16_t x347 = INT16_MIN;

    t86 = (((x345|x346)!=x347)==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = 5952539;
	uint16_t x350 = UINT16_MAX;
	int32_t x352 = -1;
	volatile int32_t t87 = 2;

    t87 = (((x349|x350)!=x351)==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x353 = -1205;
	int16_t x355 = 6;
	volatile int16_t x356 = INT16_MIN;
	static int32_t t88 = 3;

    t88 = (((x353|x354)!=x355)==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x357 = 15LL;
	static volatile int16_t x358 = INT16_MIN;
	uint32_t x360 = 389364028U;
	volatile int32_t t89 = 24312168;

    t89 = (((x357|x358)!=x359)==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x361 = UINT8_MAX;
	volatile int64_t x363 = 7350889253290LL;
	uint64_t x364 = 199858708LLU;
	int32_t t90 = 24190843;

    t90 = (((x361|x362)!=x363)==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = 0;
	uint16_t x366 = 2534U;
	static int32_t t91 = -12750;

    t91 = (((x365|x366)!=x367)==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x370 = -1;
	volatile int32_t x371 = INT32_MAX;
	int32_t x372 = 0;
	int32_t t92 = 47067297;

    t92 = (((x369|x370)!=x371)==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x373 = 16U;
	uint8_t x374 = UINT8_MAX;
	static int16_t x375 = -6;
	int32_t t93 = -671573399;

    t93 = (((x373|x374)!=x375)==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x377 = INT64_MAX;
	int32_t x378 = -1;
	int16_t x379 = INT16_MAX;
	int64_t x380 = 1817961638825191LL;
	int32_t t94 = 0;

    t94 = (((x377|x378)!=x379)==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x382 = 181587641205032469LL;
	int8_t x383 = INT8_MIN;
	uint32_t x384 = 22U;
	volatile int32_t t95 = -84910137;

    t95 = (((x381|x382)!=x383)==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x385 = -1;
	int8_t x386 = INT8_MIN;
	int32_t x387 = INT32_MIN;
	uint64_t x388 = 253LLU;
	int32_t t96 = -2;

    t96 = (((x385|x386)!=x387)==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = INT64_MIN;
	static uint16_t x390 = UINT16_MAX;
	uint64_t x391 = 907LLU;
	static uint32_t x392 = UINT32_MAX;
	int32_t t97 = -219;

    t97 = (((x389|x390)!=x391)==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MAX;
	static uint16_t x395 = UINT16_MAX;
	volatile int32_t x396 = INT32_MAX;
	volatile int32_t t98 = 8904901;

    t98 = (((x393|x394)!=x395)==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = -1;
	volatile uint32_t x398 = 2965494U;
	int16_t x399 = INT16_MIN;
	uint16_t x400 = 1478U;
	volatile int32_t t99 = -91;

    t99 = (((x397|x398)!=x399)==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x402 = 0U;
	static int8_t x404 = INT8_MIN;
	int32_t t100 = 203565;

    t100 = (((x401|x402)!=x403)==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x406 = -1LL;

    t101 = (((x405|x406)!=x407)==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x409 = 64600641LLU;
	volatile int8_t x410 = INT8_MIN;
	volatile int32_t x411 = -1;
	int64_t x412 = INT64_MAX;

    t102 = (((x409|x410)!=x411)==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x413 = INT8_MIN;
	int16_t x414 = 81;
	volatile int32_t t103 = -258761;

    t103 = (((x413|x414)!=x415)==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x417 = 89U;
	volatile int8_t x418 = INT8_MIN;
	volatile uint16_t x419 = 119U;
	uint8_t x420 = 1U;
	int32_t t104 = 433;

    t104 = (((x417|x418)!=x419)==x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = -1;
	uint32_t x422 = 1899300520U;
	volatile int64_t x423 = INT64_MAX;

    t105 = (((x421|x422)!=x423)==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 3627690U;
	uint32_t x426 = UINT32_MAX;
	int8_t x427 = 0;
	uint8_t x428 = 8U;
	static int32_t t106 = -336980532;

    t106 = (((x425|x426)!=x427)==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x430 = INT8_MIN;
	int32_t t107 = -1;

    t107 = (((x429|x430)!=x431)==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = UINT64_MAX;
	int16_t x435 = 0;
	static uint64_t x436 = UINT64_MAX;
	static volatile int32_t t108 = -4;

    t108 = (((x433|x434)!=x435)==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x437 = 420U;
	static volatile int64_t x438 = INT64_MIN;

    t109 = (((x437|x438)!=x439)==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MIN;
	volatile uint64_t x442 = 81485593669990LLU;
	int64_t x443 = INT64_MAX;
	static int16_t x444 = -1;
	int32_t t110 = -6673;

    t110 = (((x441|x442)!=x443)==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = UINT8_MAX;
	static uint32_t x446 = 86806U;
	volatile uint16_t x447 = UINT16_MAX;
	int32_t x448 = -1;
	volatile int32_t t111 = 66;

    t111 = (((x445|x446)!=x447)==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x449 = 174810U;
	volatile int32_t x450 = INT32_MIN;
	static int8_t x451 = -32;
	int64_t x452 = 202619742LL;

    t112 = (((x449|x450)!=x451)==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = -1;
	int8_t x454 = 32;
	uint8_t x456 = 0U;
	static volatile int32_t t113 = 2191638;

    t113 = (((x453|x454)!=x455)==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x458 = -1;
	int32_t x459 = INT32_MIN;
	static int8_t x460 = INT8_MIN;
	int32_t t114 = -1;

    t114 = (((x457|x458)!=x459)==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x461 = INT64_MAX;
	static int16_t x462 = INT16_MIN;
	uint16_t x463 = UINT16_MAX;
	uint64_t x464 = 114016983973LLU;
	static volatile int32_t t115 = 1;

    t115 = (((x461|x462)!=x463)==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x465 = INT8_MIN;
	static int16_t x466 = INT16_MIN;
	int8_t x467 = INT8_MAX;
	static int8_t x468 = INT8_MAX;

    t116 = (((x465|x466)!=x467)==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -883;
	static uint8_t x470 = UINT8_MAX;
	static int64_t x471 = INT64_MAX;
	int32_t x472 = INT32_MIN;
	int32_t t117 = -125490345;

    t117 = (((x469|x470)!=x471)==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x474 = -25301LL;
	volatile uint16_t x475 = 1425U;
	static int32_t x476 = -1;
	int32_t t118 = -9233164;

    t118 = (((x473|x474)!=x475)==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MAX;
	int16_t x478 = INT16_MIN;
	uint32_t x479 = 99783324U;
	volatile int32_t t119 = 80246;

    t119 = (((x477|x478)!=x479)==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x481 = 523;
	uint8_t x482 = 0U;
	int8_t x483 = INT8_MIN;
	int32_t t120 = 18263969;

    t120 = (((x481|x482)!=x483)==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MAX;
	volatile int32_t x486 = -494888;
	static int64_t x487 = -2073200742400881779LL;
	volatile int64_t x488 = INT64_MIN;
	volatile int32_t t121 = 760;

    t121 = (((x485|x486)!=x487)==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 24212U;
	uint8_t x491 = 3U;
	static int32_t x492 = INT32_MIN;

    t122 = (((x489|x490)!=x491)==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	int32_t x494 = -24926326;
	uint32_t x495 = UINT32_MAX;
	int64_t x496 = 65510812363476526LL;
	volatile int32_t t123 = -459237947;

    t123 = (((x493|x494)!=x495)==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x498 = INT32_MIN;
	int32_t x499 = -1;
	static int8_t x500 = INT8_MIN;
	int32_t t124 = 1;

    t124 = (((x497|x498)!=x499)==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x501 = INT64_MIN;
	int64_t x502 = 2LL;
	static volatile uint16_t x503 = 0U;
	int64_t x504 = INT64_MIN;
	int32_t t125 = 6467426;

    t125 = (((x501|x502)!=x503)==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x506 = 5780U;
	int16_t x507 = INT16_MIN;
	volatile int32_t x508 = INT32_MAX;
	int32_t t126 = -3188567;

    t126 = (((x505|x506)!=x507)==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x509 = UINT8_MAX;
	int32_t x510 = INT32_MAX;
	static uint64_t x511 = 3244LLU;
	static volatile int64_t x512 = INT64_MIN;
	int32_t t127 = -182378093;

    t127 = (((x509|x510)!=x511)==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MIN;
	int16_t x514 = 494;
	int64_t x515 = INT64_MAX;
	volatile uint16_t x516 = 0U;
	volatile int32_t t128 = -123;

    t128 = (((x513|x514)!=x515)==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x517 = UINT16_MAX;
	uint64_t x518 = 31914590415316LLU;
	int16_t x519 = INT16_MAX;
	int32_t t129 = -33308308;

    t129 = (((x517|x518)!=x519)==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x521 = INT16_MIN;
	static uint32_t x522 = 1174804558U;
	static int32_t x523 = INT32_MAX;
	static int32_t t130 = 10844;

    t130 = (((x521|x522)!=x523)==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x525 = -1;
	uint16_t x526 = UINT16_MAX;
	static int8_t x528 = -1;

    t131 = (((x525|x526)!=x527)==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = UINT8_MAX;
	static int32_t x530 = INT32_MIN;
	int64_t x531 = -39LL;
	uint16_t x532 = 46U;
	int32_t t132 = 55;

    t132 = (((x529|x530)!=x531)==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x535 = 0;
	int64_t x536 = INT64_MAX;

    t133 = (((x533|x534)!=x535)==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = 2387U;
	int8_t x538 = INT8_MIN;
	volatile int32_t t134 = -3;

    t134 = (((x537|x538)!=x539)==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x541 = 1410772;
	int16_t x543 = -1;
	static volatile int32_t t135 = -30;

    t135 = (((x541|x542)!=x543)==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = 2;
	volatile int8_t x546 = -57;
	uint16_t x547 = 1U;
	static int32_t x548 = INT32_MIN;
	static volatile int32_t t136 = -360357;

    t136 = (((x545|x546)!=x547)==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = -1LL;
	volatile uint32_t x550 = 6U;
	int32_t x552 = 1890455;
	volatile int32_t t137 = -603750;

    t137 = (((x549|x550)!=x551)==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x554 = 111U;
	int16_t x555 = 0;
	int64_t x556 = 16572000238419945LL;
	static int32_t t138 = -1;

    t138 = (((x553|x554)!=x555)==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -26083950339LL;
	int16_t x558 = 61;
	int64_t x560 = -208LL;
	volatile int32_t t139 = -115204;

    t139 = (((x557|x558)!=x559)==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MIN;
	static int16_t x562 = 0;
	int16_t x563 = INT16_MIN;
	int8_t x564 = INT8_MAX;

    t140 = (((x561|x562)!=x563)==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int64_t x565 = INT64_MIN;
	int16_t x567 = -6;

    t141 = (((x565|x566)!=x567)==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = UINT8_MAX;
	volatile uint8_t x570 = UINT8_MAX;
	static uint32_t x572 = 13078U;
	volatile int32_t t142 = -1181077;

    t142 = (((x569|x570)!=x571)==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = -1;
	uint16_t x574 = 84U;
	int16_t x575 = -1;
	int64_t x576 = 32903942256197LL;
	int32_t t143 = 1;

    t143 = (((x573|x574)!=x575)==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x577 = 299702177U;
	int64_t x578 = 107932181043217865LL;
	static volatile int8_t x579 = INT8_MIN;
	int8_t x580 = INT8_MAX;
	int32_t t144 = 67;

    t144 = (((x577|x578)!=x579)==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = 680952LL;
	static uint16_t x582 = UINT16_MAX;
	int8_t x584 = 1;
	volatile int32_t t145 = -94;

    t145 = (((x581|x582)!=x583)==x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x587 = INT32_MIN;
	int64_t x588 = INT64_MAX;
	int32_t t146 = 80288;

    t146 = (((x585|x586)!=x587)==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x589 = INT16_MAX;
	int32_t x590 = INT32_MIN;
	int32_t x591 = 4816076;
	int64_t x592 = INT64_MIN;
	volatile int32_t t147 = 6106;

    t147 = (((x589|x590)!=x591)==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x593 = -56;
	volatile uint32_t x594 = UINT32_MAX;
	volatile int32_t t148 = -123;

    t148 = (((x593|x594)!=x595)==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = -1;
	int16_t x598 = INT16_MIN;
	volatile int16_t x600 = 0;
	static volatile int32_t t149 = 3523;

    t149 = (((x597|x598)!=x599)==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = 5U;
	volatile int32_t x602 = 1;
	uint16_t x603 = 24U;
	static int8_t x604 = INT8_MAX;

    t150 = (((x601|x602)!=x603)==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x605 = UINT8_MAX;
	int16_t x606 = INT16_MAX;
	uint8_t x607 = UINT8_MAX;
	int16_t x608 = -20;

    t151 = (((x605|x606)!=x607)==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MAX;
	int16_t x611 = INT16_MIN;
	volatile int8_t x612 = -1;

    t152 = (((x609|x610)!=x611)==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = INT16_MIN;
	uint8_t x614 = 0U;
	static uint64_t x615 = 0LLU;
	int32_t t153 = -2;

    t153 = (((x613|x614)!=x615)==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x617 = UINT16_MAX;
	static int64_t x618 = -1LL;
	uint8_t x619 = 1U;
	int64_t x620 = -1LL;

    t154 = (((x617|x618)!=x619)==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = 6540866LLU;
	volatile uint32_t x622 = 1995853U;
	volatile int16_t x624 = INT16_MIN;
	int32_t t155 = -41630;

    t155 = (((x621|x622)!=x623)==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int8_t x626 = INT8_MIN;
	int16_t x627 = INT16_MAX;
	static int32_t x628 = -22;
	volatile int32_t t156 = -1;

    t156 = (((x625|x626)!=x627)==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x629 = INT16_MIN;
	int8_t x630 = -9;
	int32_t x631 = INT32_MAX;
	int16_t x632 = -3;

    t157 = (((x629|x630)!=x631)==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MAX;
	uint8_t x634 = 1U;
	uint32_t x635 = UINT32_MAX;
	static int32_t t158 = 5397212;

    t158 = (((x633|x634)!=x635)==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MIN;
	int16_t x638 = 510;
	static int16_t x640 = INT16_MIN;
	int32_t t159 = -67585554;

    t159 = (((x637|x638)!=x639)==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = UINT32_MAX;
	uint8_t x642 = 9U;
	static uint8_t x644 = UINT8_MAX;

    t160 = (((x641|x642)!=x643)==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x648 = -1;

    t161 = (((x645|x646)!=x647)==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x650 = INT16_MIN;
	int32_t x651 = INT32_MAX;
	int32_t t162 = 57127;

    t162 = (((x649|x650)!=x651)==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x653 = INT8_MAX;
	static uint32_t x654 = 8033955U;
	int8_t x655 = INT8_MIN;
	uint32_t x656 = 121U;
	static volatile int32_t t163 = 27439;

    t163 = (((x653|x654)!=x655)==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x657 = INT64_MAX;
	static volatile int16_t x658 = -1;
	int64_t x659 = INT64_MIN;
	volatile int32_t x660 = INT32_MIN;
	volatile int32_t t164 = 1337;

    t164 = (((x657|x658)!=x659)==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	static volatile uint64_t x662 = 28666177617381LLU;
	int32_t x663 = INT32_MIN;
	int32_t x664 = -122300759;
	int32_t t165 = -43244356;

    t165 = (((x661|x662)!=x663)==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x665 = UINT32_MAX;
	int16_t x666 = INT16_MAX;
	static volatile int32_t t166 = 526;

    t166 = (((x665|x666)!=x667)==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x669 = 130789721U;
	static int8_t x670 = INT8_MIN;
	static int8_t x671 = INT8_MAX;
	uint16_t x672 = 130U;

    t167 = (((x669|x670)!=x671)==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x673 = 3U;
	int8_t x674 = INT8_MIN;
	int8_t x675 = INT8_MIN;
	int8_t x676 = INT8_MIN;

    t168 = (((x673|x674)!=x675)==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x677 = UINT64_MAX;
	uint32_t x678 = 508221831U;
	int8_t x680 = INT8_MIN;
	int32_t t169 = 31323;

    t169 = (((x677|x678)!=x679)==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x682 = INT64_MIN;
	volatile uint16_t x683 = 3183U;
	static int16_t x684 = 1;
	int32_t t170 = 1018820;

    t170 = (((x681|x682)!=x683)==x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = -6;
	static int16_t x686 = INT16_MIN;
	int8_t x687 = INT8_MIN;
	int64_t x688 = -1LL;
	volatile int32_t t171 = -1862635;

    t171 = (((x685|x686)!=x687)==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x690 = -1195LL;
	uint8_t x692 = 6U;

    t172 = (((x689|x690)!=x691)==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x693 = INT64_MAX;
	uint16_t x694 = 25U;
	int32_t x695 = -23;
	int32_t x696 = 360;

    t173 = (((x693|x694)!=x695)==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x699 = 9105173LL;
	uint32_t x700 = 31U;
	volatile int32_t t174 = 234;

    t174 = (((x697|x698)!=x699)==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x701 = -1;
	static int64_t x702 = INT64_MIN;
	static int8_t x703 = INT8_MAX;
	int16_t x704 = INT16_MAX;
	volatile int32_t t175 = -4575910;

    t175 = (((x701|x702)!=x703)==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MIN;
	int8_t x707 = INT8_MIN;
	static int8_t x708 = INT8_MIN;
	volatile int32_t t176 = -518392;

    t176 = (((x705|x706)!=x707)==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x710 = -1;
	int32_t x711 = -9;
	int64_t x712 = -1LL;

    t177 = (((x709|x710)!=x711)==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = 0;
	uint8_t x715 = UINT8_MAX;
	int64_t x716 = INT64_MIN;
	int32_t t178 = -24626;

    t178 = (((x713|x714)!=x715)==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x717 = 11977U;
	int8_t x718 = 3;
	uint16_t x719 = 11U;
	int8_t x720 = INT8_MAX;
	volatile int32_t t179 = 951;

    t179 = (((x717|x718)!=x719)==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x721 = 868968488872LLU;
	uint8_t x723 = 0U;
	int64_t x724 = 1LL;
	volatile int32_t t180 = -64340291;

    t180 = (((x721|x722)!=x723)==x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x725 = 108758410LLU;
	int16_t x726 = -1;
	int8_t x727 = -1;
	int8_t x728 = INT8_MIN;
	int32_t t181 = 210;

    t181 = (((x725|x726)!=x727)==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x729 = UINT64_MAX;
	int8_t x730 = INT8_MIN;
	uint64_t x732 = 0LLU;
	static volatile int32_t t182 = 201;

    t182 = (((x729|x730)!=x731)==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MIN;
	int8_t x734 = INT8_MAX;
	int8_t x735 = -44;
	int16_t x736 = INT16_MIN;
	int32_t t183 = 0;

    t183 = (((x733|x734)!=x735)==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x738 = INT16_MIN;
	uint64_t x739 = 1592274729LLU;
	uint16_t x740 = UINT16_MAX;
	volatile int32_t t184 = -7299;

    t184 = (((x737|x738)!=x739)==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MAX;
	volatile int16_t x742 = -1;
	int32_t x743 = -1;
	int8_t x744 = 36;
	volatile int32_t t185 = -10220276;

    t185 = (((x741|x742)!=x743)==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = INT16_MAX;
	int64_t x746 = INT64_MIN;
	volatile int8_t x747 = INT8_MIN;
	static volatile int32_t t186 = 8229757;

    t186 = (((x745|x746)!=x747)==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = UINT8_MAX;
	int16_t x750 = -1;
	uint32_t x751 = 23U;
	volatile int32_t t187 = -398;

    t187 = (((x749|x750)!=x751)==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = INT64_MAX;
	static uint8_t x754 = 3U;
	int8_t x755 = INT8_MAX;
	int16_t x756 = INT16_MIN;
	int32_t t188 = -8806;

    t188 = (((x753|x754)!=x755)==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MAX;
	int64_t x758 = 211LL;
	uint32_t x760 = UINT32_MAX;
	int32_t t189 = 1046648;

    t189 = (((x757|x758)!=x759)==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = UINT64_MAX;
	volatile int16_t x763 = INT16_MIN;
	volatile int32_t t190 = -1;

    t190 = (((x761|x762)!=x763)==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x765 = UINT16_MAX;
	volatile uint16_t x766 = 5558U;
	int32_t x767 = INT32_MIN;
	static int64_t x768 = -1LL;
	volatile int32_t t191 = 6;

    t191 = (((x765|x766)!=x767)==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x769 = INT8_MAX;
	uint16_t x771 = 0U;
	static volatile int8_t x772 = 1;

    t192 = (((x769|x770)!=x771)==x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x774 = 2298807848026407LLU;
	int8_t x775 = INT8_MIN;
	int8_t x776 = -20;
	int32_t t193 = -1698869;

    t193 = (((x773|x774)!=x775)==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = 1;
	int16_t x778 = 153;
	uint32_t x779 = UINT32_MAX;
	static int64_t x780 = INT64_MAX;
	volatile int32_t t194 = 524611849;

    t194 = (((x777|x778)!=x779)==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = -41439904314655LL;
	static int16_t x782 = -1;
	int32_t x783 = INT32_MIN;
	volatile int32_t t195 = 553696;

    t195 = (((x781|x782)!=x783)==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x785 = INT16_MAX;
	static int64_t x786 = INT64_MIN;
	static int64_t x787 = INT64_MAX;
	static uint32_t x788 = 1663400069U;
	static int32_t t196 = -428;

    t196 = (((x785|x786)!=x787)==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x789 = INT8_MIN;
	int64_t x790 = -21749727LL;
	int32_t x791 = INT32_MIN;
	volatile int8_t x792 = INT8_MAX;
	volatile int32_t t197 = -9;

    t197 = (((x789|x790)!=x791)==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = 0;
	int16_t x795 = INT16_MIN;
	volatile int32_t t198 = -32507108;

    t198 = (((x793|x794)!=x795)==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x798 = INT32_MIN;
	static uint32_t x799 = 575734417U;
	volatile int16_t x800 = INT16_MIN;
	volatile int32_t t199 = -87059;

    t199 = (((x797|x798)!=x799)==x800);

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


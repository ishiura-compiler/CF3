
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

int8_t x1 = INT8_MIN;
static volatile uint16_t x2 = 22U;
int32_t x5 = INT32_MIN;
uint16_t x7 = UINT16_MAX;
int32_t x13 = INT32_MIN;
uint8_t x15 = 3U;
static int16_t x18 = 131;
int16_t x19 = 5;
uint8_t x20 = 49U;
volatile int16_t x21 = INT16_MIN;
int32_t x24 = INT32_MAX;
volatile uint32_t x31 = UINT32_MAX;
int16_t x38 = INT16_MAX;
int64_t x44 = -1LL;
volatile int64_t t9 = 1LL;
int32_t x45 = INT32_MIN;
uint8_t x46 = UINT8_MAX;
int64_t x47 = -1LL;
int8_t x54 = INT8_MIN;
volatile int32_t t12 = -913;
static int64_t x61 = INT64_MIN;
int64_t x65 = -9160454493LL;
int8_t x68 = INT8_MAX;
static uint32_t x70 = 39786U;
static int32_t x83 = INT32_MIN;
volatile int8_t x91 = -5;
static int16_t x105 = 31;
int16_t x108 = -821;
static volatile int64_t x114 = -1LL;
int8_t x117 = INT8_MIN;
volatile uint32_t x118 = 360700537U;
int32_t t27 = 38;
uint64_t x135 = 1LLU;
uint64_t x141 = UINT64_MAX;
uint64_t t33 = 944483LLU;
static uint8_t x151 = UINT8_MAX;
static volatile int64_t x157 = INT64_MIN;
static uint16_t x158 = UINT16_MAX;
uint32_t t38 = 318655U;
uint64_t x165 = 180581334024LLU;
uint8_t x167 = 86U;
uint64_t x172 = 116401LLU;
uint32_t x177 = UINT32_MAX;
int32_t t43 = 313489986;
volatile uint8_t x186 = 0U;
static volatile int64_t t44 = -1573924LL;
static int16_t x192 = -1;
uint64_t x200 = UINT64_MAX;
int8_t x201 = -55;
static int16_t x202 = 0;
uint16_t x203 = UINT16_MAX;
uint64_t x228 = 28358547LLU;
int32_t t56 = 4;
volatile int64_t x240 = -1LL;
int64_t t57 = 847LL;
uint64_t x244 = 152377992LLU;
volatile uint64_t t59 = 1LLU;
static int8_t x250 = INT8_MIN;
static volatile int64_t t60 = 34077LL;
uint32_t x255 = 1U;
static int32_t t61 = -5187;
int32_t x262 = -1;
volatile int8_t x263 = INT8_MAX;
int32_t x280 = INT32_MAX;
volatile int32_t t68 = -3607;
int32_t x288 = INT32_MIN;
volatile int16_t x293 = INT16_MIN;
int64_t x297 = -42LL;
volatile int16_t x298 = INT16_MAX;
volatile int16_t x299 = -1;
int16_t x300 = INT16_MAX;
int8_t x305 = INT8_MAX;
int8_t x308 = INT8_MAX;
int64_t x314 = -1086LL;
int8_t x315 = INT8_MIN;
static int64_t t77 = 15620558LL;
uint64_t x321 = 224100906697341LLU;
static volatile int8_t x323 = INT8_MIN;
static int16_t x325 = INT16_MIN;
volatile int8_t x332 = INT8_MAX;
uint32_t x341 = 169273373U;
static volatile int32_t x347 = INT32_MIN;
int16_t x348 = -1;
volatile uint64_t x349 = UINT64_MAX;
static uint64_t x351 = 28556252634LLU;
static volatile int16_t x352 = -2;
int32_t t85 = -1;
int32_t x353 = -48;
int64_t x359 = INT64_MIN;
uint16_t x367 = 24804U;
int32_t t90 = 2;
int64_t x375 = INT64_MIN;
uint16_t x380 = UINT16_MAX;
uint32_t x381 = 7U;
int8_t x383 = INT8_MIN;
int64_t x384 = -1LL;
volatile int32_t x390 = INT32_MAX;
int64_t x392 = -40223604548338LL;
volatile int16_t x395 = -1;
uint8_t x398 = 0U;
volatile int32_t t99 = -1;
volatile uint64_t x416 = 50945631304056LLU;
volatile int16_t x421 = 3;
volatile uint64_t x427 = 692606LLU;
uint16_t x433 = UINT16_MAX;
int32_t x438 = INT32_MAX;
int8_t x445 = INT8_MAX;
int16_t x450 = INT16_MAX;
int64_t t110 = 1916918303LL;
int64_t x454 = INT64_MAX;
int32_t x455 = INT32_MIN;
static int64_t x457 = -1LL;
uint32_t x464 = 388U;
uint16_t x480 = 1U;
volatile int32_t t118 = -6;
uint16_t x490 = 2U;
int8_t x508 = -1;
static uint64_t x511 = 4LLU;
volatile int32_t t123 = -197;
static int8_t x515 = INT8_MAX;
int8_t x518 = INT8_MIN;
uint16_t x529 = 210U;
int64_t x534 = -33373644LL;
static int16_t x536 = INT16_MAX;
volatile int16_t x540 = -239;
static int16_t x545 = INT16_MIN;
static volatile int32_t t132 = -4;
volatile int32_t t133 = 587984;
uint64_t t134 = 17779321626655370LLU;
int8_t x557 = -1;
int16_t x558 = -1;
volatile int32_t t135 = 62;
int32_t x562 = INT32_MIN;
int16_t x577 = INT16_MIN;
static uint8_t x579 = 3U;
uint64_t x580 = 22236397146LLU;
int16_t x581 = INT16_MAX;
static uint64_t x583 = 229205902LLU;
int32_t x585 = -62319;
int64_t x596 = -1LL;
static int64_t x597 = INT64_MAX;
int32_t t145 = 2;
volatile uint8_t x604 = 12U;
static int32_t t146 = 640;
volatile int8_t x605 = INT8_MAX;
volatile uint64_t t147 = 1286487388833LLU;
uint16_t x612 = UINT16_MAX;
int32_t x613 = -30;
static uint8_t x620 = UINT8_MAX;
volatile int32_t t153 = -3;
uint64_t x640 = UINT64_MAX;
int8_t x644 = -1;
static volatile int64_t x649 = -1307248024271558649LL;
static int16_t x660 = 1224;
int8_t x667 = INT8_MIN;
int32_t x668 = -7472471;
uint8_t x669 = 0U;
int32_t t163 = 18440411;
static volatile uint32_t x678 = UINT32_MAX;
int64_t x679 = -14240721LL;
int64_t x681 = INT64_MAX;
static int16_t x686 = -247;
int32_t t167 = 218;
int16_t x693 = -1;
uint32_t x694 = 934U;
static int8_t x695 = INT8_MIN;
static int64_t t168 = 1LL;
int16_t x701 = INT16_MAX;
uint64_t x704 = 783117LLU;
uint16_t x709 = UINT16_MAX;
uint32_t x710 = UINT32_MAX;
int8_t x711 = INT8_MIN;
int16_t x714 = 4;
uint64_t x719 = 21554054LLU;
int8_t x720 = -1;
int32_t t174 = -1;
uint8_t x722 = 73U;
uint16_t x726 = 92U;
int64_t x727 = 41791590750LL;
int32_t x729 = INT32_MIN;
static int8_t x730 = -1;
volatile int32_t t177 = 7;
static int64_t x735 = 7933LL;
volatile int32_t x736 = INT32_MAX;
int64_t x737 = -1LL;
static int64_t t179 = 1595665394LL;
int8_t x743 = INT8_MIN;
volatile int16_t x747 = -1;
static uint64_t x749 = 2805115553057902LLU;
uint8_t x750 = UINT8_MAX;
static uint64_t x754 = UINT64_MAX;
volatile int32_t t183 = -8006;
int32_t x758 = -182070;
uint32_t x763 = 113648765U;
int16_t x768 = INT16_MIN;
static int32_t x777 = INT32_MIN;
static volatile int32_t t189 = 6;
volatile uint16_t x792 = 21236U;
int32_t x799 = INT32_MAX;
int8_t x800 = INT8_MAX;
uint8_t x801 = UINT8_MAX;
uint8_t x802 = 43U;
volatile int8_t x803 = INT8_MIN;
static volatile int32_t x806 = INT32_MIN;
int16_t x807 = INT16_MIN;
static int8_t x811 = -1;
uint8_t x812 = UINT8_MAX;
int32_t t196 = 3483183;


void f0(void) {
    	static volatile uint64_t x3 = 58141LLU;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = -10185;

    t0 = ((x1==(x2/x3))*x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = -242838;
	volatile uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = 231100;

    t1 = ((x5==(x6/x7))*x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x9 = UINT64_MAX;
	int64_t x10 = -1LL;
	static uint8_t x11 = 2U;
	uint16_t x12 = 351U;
	static int32_t t2 = 917118700;

    t2 = ((x9==(x10/x11))*x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = -1;
	volatile int32_t x16 = -1;
	int32_t t3 = 0;

    t3 = ((x13==(x14/x15))*x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	int32_t t4 = -460095538;

    t4 = ((x17==(x18/x19))*x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x22 = UINT32_MAX;
	static uint16_t x23 = UINT16_MAX;
	int32_t t5 = 247444;

    t5 = ((x21==(x22/x23))*x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint16_t x29 = 3233U;
	int32_t x30 = -1;
	volatile int32_t x32 = 1984580;
	volatile int32_t t6 = -13;

    t6 = ((x29==(x30/x31))*x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = -1;
	uint16_t x34 = 5U;
	volatile uint16_t x35 = UINT16_MAX;
	uint16_t x36 = UINT16_MAX;
	int32_t t7 = 74345295;

    t7 = ((x33==(x34/x35))*x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = 5172LLU;
	volatile int16_t x39 = -139;
	uint8_t x40 = 2U;
	int32_t t8 = 1115925;

    t8 = ((x37==(x38/x39))*x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x41 = 7669U;
	int32_t x42 = -1;
	int8_t x43 = -1;

    t9 = ((x41==(x42/x43))*x44);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x48 = INT32_MIN;
	static volatile int32_t t10 = -16955;

    t10 = ((x45==(x46/x47))*x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x49 = 50U;
	uint16_t x50 = UINT16_MAX;
	volatile uint8_t x51 = 2U;
	static int8_t x52 = INT8_MAX;
	volatile int32_t t11 = -38;

    t11 = ((x49==(x50/x51))*x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x53 = 86U;
	static uint64_t x55 = 126519389083LLU;
	static int32_t x56 = INT32_MIN;

    t12 = ((x53==(x54/x55))*x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x62 = 46U;
	uint32_t x63 = 254837U;
	int32_t x64 = INT32_MIN;
	volatile int32_t t13 = 56160;

    t13 = ((x61==(x62/x63))*x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x66 = INT32_MAX;
	uint64_t x67 = UINT64_MAX;
	volatile int32_t t14 = 56;

    t14 = ((x65==(x66/x67))*x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x69 = 322U;
	static int64_t x71 = INT64_MAX;
	static uint32_t x72 = 109267514U;
	static uint32_t t15 = 13U;

    t15 = ((x69==(x70/x71))*x72);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x73 = INT8_MIN;
	int64_t x74 = 44958340LL;
	static uint32_t x75 = UINT32_MAX;
	static int64_t x76 = INT64_MAX;
	int64_t t16 = 2045961730772370LL;

    t16 = ((x73==(x74/x75))*x76);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x77 = INT64_MIN;
	uint16_t x78 = 2U;
	int16_t x79 = -1;
	int16_t x80 = INT16_MAX;
	volatile int32_t t17 = -4083634;

    t17 = ((x77==(x78/x79))*x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x81 = -1;
	volatile uint16_t x82 = 845U;
	int8_t x84 = INT8_MIN;
	int32_t t18 = -1819;

    t18 = ((x81==(x82/x83))*x84);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = INT16_MIN;
	volatile int32_t x86 = INT32_MIN;
	int8_t x87 = INT8_MIN;
	volatile int32_t x88 = INT32_MIN;
	int32_t t19 = -267690;

    t19 = ((x85==(x86/x87))*x88);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x89 = 56;
	uint32_t x90 = 13U;
	static int64_t x92 = INT64_MIN;
	volatile int64_t t20 = -130982799320155LL;

    t20 = ((x89==(x90/x91))*x92);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x93 = -2;
	int32_t x94 = 743986;
	volatile int16_t x95 = 1;
	int64_t x96 = 134LL;
	static int64_t t21 = -1083986065781480864LL;

    t21 = ((x93==(x94/x95))*x96);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x97 = INT64_MIN;
	volatile int32_t x98 = INT32_MIN;
	uint32_t x99 = 230074U;
	int64_t x100 = -1LL;
	volatile int64_t t22 = -7LL;

    t22 = ((x97==(x98/x99))*x100);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x101 = -3848380;
	volatile int32_t x102 = INT32_MIN;
	int32_t x103 = INT32_MIN;
	int16_t x104 = INT16_MIN;
	int32_t t23 = -428066892;

    t23 = ((x101==(x102/x103))*x104);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x106 = UINT8_MAX;
	static int8_t x107 = INT8_MAX;
	int32_t t24 = -999890486;

    t24 = ((x105==(x106/x107))*x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x109 = INT64_MIN;
	int64_t x110 = INT64_MIN;
	int8_t x111 = INT8_MIN;
	int16_t x112 = -1;
	int32_t t25 = 68323404;

    t25 = ((x109==(x110/x111))*x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x113 = -1;
	volatile int32_t x115 = INT32_MIN;
	uint64_t x116 = UINT64_MAX;
	volatile uint64_t t26 = 58LLU;

    t26 = ((x113==(x114/x115))*x116);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x119 = INT32_MIN;
	volatile int32_t x120 = INT32_MAX;

    t27 = ((x117==(x118/x119))*x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x121 = -2909806643368541LL;
	static int16_t x122 = 432;
	uint8_t x123 = 3U;
	int8_t x124 = INT8_MAX;
	int32_t t28 = -62290;

    t28 = ((x121==(x122/x123))*x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x125 = -1LL;
	int16_t x126 = -1;
	static volatile int32_t x127 = -1;
	int64_t x128 = INT64_MAX;
	volatile int64_t t29 = 9076613868LL;

    t29 = ((x125==(x126/x127))*x128);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x129 = 1352U;
	int32_t x130 = INT32_MIN;
	int64_t x131 = INT64_MIN;
	volatile int16_t x132 = -1;
	volatile int32_t t30 = 1015;

    t30 = ((x129==(x130/x131))*x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x133 = INT64_MAX;
	uint32_t x134 = 25986281U;
	static volatile int64_t x136 = -1LL;
	int64_t t31 = 2898961588LL;

    t31 = ((x133==(x134/x135))*x136);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x137 = UINT16_MAX;
	int32_t x138 = 756;
	uint16_t x139 = 33U;
	static int32_t x140 = INT32_MIN;
	volatile int32_t t32 = -251700287;

    t32 = ((x137==(x138/x139))*x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x142 = -1;
	int16_t x143 = INT16_MIN;
	static volatile uint64_t x144 = UINT64_MAX;

    t33 = ((x141==(x142/x143))*x144);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = INT8_MIN;
	int16_t x146 = INT16_MIN;
	uint8_t x147 = 5U;
	static uint8_t x148 = 52U;
	int32_t t34 = 308;

    t34 = ((x145==(x146/x147))*x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x149 = INT64_MAX;
	static volatile int32_t x150 = INT32_MAX;
	uint16_t x152 = 45U;
	volatile int32_t t35 = 2460798;

    t35 = ((x149==(x150/x151))*x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x153 = INT16_MIN;
	uint8_t x154 = 3U;
	uint64_t x155 = UINT64_MAX;
	int16_t x156 = INT16_MAX;
	volatile int32_t t36 = 29427543;

    t36 = ((x153==(x154/x155))*x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x159 = INT8_MIN;
	static int16_t x160 = -1;
	volatile int32_t t37 = -234296444;

    t37 = ((x157==(x158/x159))*x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int8_t x161 = INT8_MAX;
	static uint8_t x162 = 24U;
	int16_t x163 = 1511;
	uint32_t x164 = 86110U;

    t38 = ((x161==(x162/x163))*x164);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x166 = INT8_MIN;
	int16_t x168 = INT16_MAX;
	volatile int32_t t39 = 2;

    t39 = ((x165==(x166/x167))*x168);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x169 = UINT16_MAX;
	static int8_t x170 = 2;
	static uint8_t x171 = 15U;
	uint64_t t40 = 2850477702187904712LLU;

    t40 = ((x169==(x170/x171))*x172);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x173 = INT16_MIN;
	static int8_t x174 = INT8_MAX;
	int8_t x175 = 7;
	int8_t x176 = INT8_MAX;
	int32_t t41 = -1;

    t41 = ((x173==(x174/x175))*x176);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x178 = 1U;
	uint64_t x179 = 31LLU;
	volatile int8_t x180 = INT8_MAX;
	static int32_t t42 = -107763;

    t42 = ((x177==(x178/x179))*x180);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x181 = 2235604261375235514LLU;
	uint8_t x182 = 64U;
	int32_t x183 = INT32_MIN;
	volatile int8_t x184 = INT8_MAX;

    t43 = ((x181==(x182/x183))*x184);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x185 = 10U;
	uint64_t x187 = 531LLU;
	int64_t x188 = INT64_MIN;

    t44 = ((x185==(x186/x187))*x188);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x189 = -1;
	uint8_t x190 = 3U;
	volatile int64_t x191 = INT64_MIN;
	volatile int32_t t45 = -8381;

    t45 = ((x189==(x190/x191))*x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x193 = 16239;
	volatile int32_t x194 = INT32_MAX;
	uint8_t x195 = 2U;
	static volatile int8_t x196 = 1;
	volatile int32_t t46 = 1;

    t46 = ((x193==(x194/x195))*x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x197 = UINT32_MAX;
	uint64_t x198 = UINT64_MAX;
	int16_t x199 = -1;
	static uint64_t t47 = 558LLU;

    t47 = ((x197==(x198/x199))*x200);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x204 = 0U;
	int32_t t48 = -96491;

    t48 = ((x201==(x202/x203))*x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x205 = INT32_MIN;
	int8_t x206 = -18;
	int32_t x207 = -1;
	static int16_t x208 = INT16_MIN;
	volatile int32_t t49 = 25133;

    t49 = ((x205==(x206/x207))*x208);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x209 = UINT32_MAX;
	static int8_t x210 = -4;
	int8_t x211 = INT8_MIN;
	volatile int64_t x212 = INT64_MAX;
	volatile int64_t t50 = 2003883LL;

    t50 = ((x209==(x210/x211))*x212);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x213 = 1U;
	int16_t x214 = INT16_MIN;
	int32_t x215 = 30158837;
	uint64_t x216 = 165661690LLU;
	uint64_t t51 = 1483123366LLU;

    t51 = ((x213==(x214/x215))*x216);

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x217 = -1LL;
	uint64_t x218 = 67671959346016025LLU;
	int64_t x219 = INT64_MIN;
	int64_t x220 = 0LL;
	int64_t t52 = -4524018896999LL;

    t52 = ((x217==(x218/x219))*x220);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x221 = INT32_MIN;
	volatile uint8_t x222 = UINT8_MAX;
	uint32_t x223 = UINT32_MAX;
	volatile int16_t x224 = INT16_MIN;
	volatile int32_t t53 = -455;

    t53 = ((x221==(x222/x223))*x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x225 = 4;
	volatile uint64_t x226 = 0LLU;
	uint32_t x227 = 7880624U;
	uint64_t t54 = 5302207LLU;

    t54 = ((x225==(x226/x227))*x228);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x229 = -1;
	uint8_t x230 = 0U;
	int32_t x231 = -1;
	int64_t x232 = -1259694248146279LL;
	int64_t t55 = -143741581307232LL;

    t55 = ((x229==(x230/x231))*x232);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x233 = UINT8_MAX;
	int32_t x234 = 732138;
	int32_t x235 = -1;
	uint16_t x236 = 6369U;

    t56 = ((x233==(x234/x235))*x236);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x237 = -1;
	volatile uint16_t x238 = 2U;
	static int16_t x239 = INT16_MAX;

    t57 = ((x237==(x238/x239))*x240);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint16_t x241 = 66U;
	static volatile int16_t x242 = INT16_MIN;
	int64_t x243 = 7443448LL;
	static volatile uint64_t t58 = 20596626LLU;

    t58 = ((x241==(x242/x243))*x244);

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x245 = UINT64_MAX;
	volatile int64_t x246 = -18LL;
	uint16_t x247 = UINT16_MAX;
	uint64_t x248 = UINT64_MAX;

    t59 = ((x245==(x246/x247))*x248);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x249 = UINT32_MAX;
	static uint64_t x251 = UINT64_MAX;
	static int64_t x252 = 1LL;

    t60 = ((x249==(x250/x251))*x252);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x253 = 1077U;
	int32_t x254 = INT32_MAX;
	int16_t x256 = -1;

    t61 = ((x253==(x254/x255))*x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x257 = 40U;
	static uint64_t x258 = 438LLU;
	uint64_t x259 = 5633818448889944858LLU;
	uint32_t x260 = UINT32_MAX;
	static uint32_t t62 = 130682U;

    t62 = ((x257==(x258/x259))*x260);

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x261 = -1;
	uint16_t x264 = 5341U;
	volatile int32_t t63 = -127;

    t63 = ((x261==(x262/x263))*x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x265 = INT16_MIN;
	int64_t x266 = INT64_MIN;
	volatile uint64_t x267 = 2547915605128LLU;
	int64_t x268 = INT64_MIN;
	int64_t t64 = -101848LL;

    t64 = ((x265==(x266/x267))*x268);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x269 = 0;
	int8_t x270 = INT8_MIN;
	uint32_t x271 = 86444109U;
	volatile int64_t x272 = -1LL;
	int64_t t65 = -2055714661954245088LL;

    t65 = ((x269==(x270/x271))*x272);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x273 = 424U;
	static int32_t x274 = INT32_MIN;
	static volatile int16_t x275 = 305;
	int16_t x276 = INT16_MIN;
	volatile int32_t t66 = 12693362;

    t66 = ((x273==(x274/x275))*x276);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x277 = UINT64_MAX;
	uint16_t x278 = 26416U;
	int16_t x279 = -33;
	volatile int32_t t67 = 8;

    t67 = ((x277==(x278/x279))*x280);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x281 = 7;
	int32_t x282 = INT32_MIN;
	static int32_t x283 = INT32_MIN;
	uint16_t x284 = 24U;

    t68 = ((x281==(x282/x283))*x284);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x285 = INT64_MAX;
	volatile uint64_t x286 = 35627LLU;
	int8_t x287 = INT8_MIN;
	volatile int32_t t69 = -7109244;

    t69 = ((x285==(x286/x287))*x288);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x289 = 6U;
	int16_t x290 = 6322;
	volatile int8_t x291 = 2;
	int8_t x292 = -1;
	int32_t t70 = -9135880;

    t70 = ((x289==(x290/x291))*x292);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x294 = 26;
	uint8_t x295 = 112U;
	int16_t x296 = INT16_MIN;
	int32_t t71 = -3;

    t71 = ((x293==(x294/x295))*x296);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t t72 = -1000006;

    t72 = ((x297==(x298/x299))*x300);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x301 = INT64_MAX;
	volatile int16_t x302 = INT16_MIN;
	uint64_t x303 = 197456844652LLU;
	uint8_t x304 = 99U;
	static volatile int32_t t73 = -113803;

    t73 = ((x301==(x302/x303))*x304);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x306 = 132739U;
	uint16_t x307 = 24201U;
	volatile int32_t t74 = -1;

    t74 = ((x305==(x306/x307))*x308);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x309 = 2617;
	int64_t x310 = INT64_MAX;
	int16_t x311 = INT16_MAX;
	uint32_t x312 = 95524U;
	uint32_t t75 = 158996U;

    t75 = ((x309==(x310/x311))*x312);

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x313 = -1;
	int16_t x316 = -1;
	int32_t t76 = -106;

    t76 = ((x313==(x314/x315))*x316);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x317 = UINT32_MAX;
	uint32_t x318 = 27886U;
	uint64_t x319 = UINT64_MAX;
	static int64_t x320 = INT64_MAX;

    t77 = ((x317==(x318/x319))*x320);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x322 = INT32_MIN;
	volatile int32_t x324 = -1;
	volatile int32_t t78 = 129311;

    t78 = ((x321==(x322/x323))*x324);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x326 = UINT8_MAX;
	static uint64_t x327 = UINT64_MAX;
	int16_t x328 = INT16_MIN;
	volatile int32_t t79 = -74;

    t79 = ((x325==(x326/x327))*x328);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x329 = UINT16_MAX;
	volatile int8_t x330 = 0;
	int16_t x331 = 15;
	volatile int32_t t80 = -11108;

    t80 = ((x329==(x330/x331))*x332);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x333 = -1;
	uint64_t x334 = 1676920LLU;
	static int16_t x335 = -1;
	static volatile uint16_t x336 = 0U;
	volatile int32_t t81 = 2010104;

    t81 = ((x333==(x334/x335))*x336);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x337 = INT16_MAX;
	uint64_t x338 = 7833448LLU;
	int16_t x339 = INT16_MAX;
	uint32_t x340 = 1455U;
	uint32_t t82 = 113414U;

    t82 = ((x337==(x338/x339))*x340);

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x342 = 92U;
	uint64_t x343 = 499LLU;
	uint16_t x344 = 41U;
	static volatile int32_t t83 = -37;

    t83 = ((x341==(x342/x343))*x344);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x345 = 359937431U;
	static int16_t x346 = 6930;
	int32_t t84 = 249320295;

    t84 = ((x345==(x346/x347))*x348);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x350 = INT16_MIN;

    t85 = ((x349==(x350/x351))*x352);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x354 = 14708819305LL;
	static int8_t x355 = INT8_MAX;
	int8_t x356 = INT8_MIN;
	int32_t t86 = 114423443;

    t86 = ((x353==(x354/x355))*x356);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x357 = 1505U;
	uint8_t x358 = 90U;
	uint8_t x360 = 100U;
	int32_t t87 = 328567733;

    t87 = ((x357==(x358/x359))*x360);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x361 = INT32_MAX;
	static uint32_t x362 = UINT32_MAX;
	int64_t x363 = -7LL;
	volatile uint8_t x364 = 5U;
	static volatile int32_t t88 = 545282;

    t88 = ((x361==(x362/x363))*x364);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x365 = INT64_MAX;
	int16_t x366 = INT16_MIN;
	int32_t x368 = -21;
	int32_t t89 = -1;

    t89 = ((x365==(x366/x367))*x368);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x369 = 526187712;
	int32_t x370 = INT32_MIN;
	static volatile int64_t x371 = INT64_MIN;
	static int16_t x372 = -1;

    t90 = ((x369==(x370/x371))*x372);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x373 = INT32_MIN;
	volatile uint16_t x374 = 734U;
	static volatile uint16_t x376 = 1390U;
	static int32_t t91 = 132406311;

    t91 = ((x373==(x374/x375))*x376);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x377 = UINT8_MAX;
	uint32_t x378 = 0U;
	volatile int8_t x379 = -57;
	volatile int32_t t92 = 503318;

    t92 = ((x377==(x378/x379))*x380);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x382 = -23;
	int64_t t93 = 2803906786LL;

    t93 = ((x381==(x382/x383))*x384);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x385 = 12U;
	volatile int16_t x386 = INT16_MAX;
	int32_t x387 = INT32_MIN;
	uint64_t x388 = 1906944816877745LLU;
	uint64_t t94 = 1598968LLU;

    t94 = ((x385==(x386/x387))*x388);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x389 = INT64_MIN;
	static int64_t x391 = -9666090LL;
	int64_t t95 = 1829570263597935548LL;

    t95 = ((x389==(x390/x391))*x392);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x393 = INT32_MIN;
	volatile uint8_t x394 = 3U;
	volatile int8_t x396 = INT8_MIN;
	volatile int32_t t96 = 12660;

    t96 = ((x393==(x394/x395))*x396);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x397 = INT8_MIN;
	int8_t x399 = INT8_MIN;
	static int32_t x400 = -1;
	static int32_t t97 = 1961955;

    t97 = ((x397==(x398/x399))*x400);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x401 = 1;
	volatile uint16_t x402 = 177U;
	int64_t x403 = INT64_MAX;
	int8_t x404 = INT8_MAX;
	volatile int32_t t98 = -165762756;

    t98 = ((x401==(x402/x403))*x404);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x405 = -1;
	static uint32_t x406 = 7U;
	int32_t x407 = -1;
	volatile uint16_t x408 = 1U;

    t99 = ((x405==(x406/x407))*x408);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x409 = 448201202613634LLU;
	int16_t x410 = 13903;
	int32_t x411 = -1;
	int8_t x412 = INT8_MAX;
	volatile int32_t t100 = -1;

    t100 = ((x409==(x410/x411))*x412);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x413 = -1LL;
	volatile int16_t x414 = -1;
	static int16_t x415 = INT16_MIN;
	volatile uint64_t t101 = 164091786145097LLU;

    t101 = ((x413==(x414/x415))*x416);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x417 = INT32_MAX;
	int8_t x418 = INT8_MAX;
	int16_t x419 = INT16_MIN;
	int64_t x420 = INT64_MIN;
	int64_t t102 = -3430654006374867LL;

    t102 = ((x417==(x418/x419))*x420);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x422 = 309;
	static int64_t x423 = INT64_MAX;
	volatile int64_t x424 = 138LL;
	volatile int64_t t103 = 343529LL;

    t103 = ((x421==(x422/x423))*x424);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x425 = 8570827959547LLU;
	int32_t x426 = -1;
	volatile int64_t x428 = INT64_MIN;
	int64_t t104 = 170394723365170LL;

    t104 = ((x425==(x426/x427))*x428);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x429 = 254U;
	uint64_t x430 = 26335199105LLU;
	uint32_t x431 = 1257371952U;
	int32_t x432 = INT32_MAX;
	volatile int32_t t105 = -751330337;

    t105 = ((x429==(x430/x431))*x432);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x434 = -17;
	uint8_t x435 = UINT8_MAX;
	int8_t x436 = 0;
	volatile int32_t t106 = -7841;

    t106 = ((x433==(x434/x435))*x436);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x437 = 2708920U;
	uint32_t x439 = 215917759U;
	volatile uint16_t x440 = 3574U;
	volatile int32_t t107 = -239;

    t107 = ((x437==(x438/x439))*x440);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x441 = 49U;
	volatile int64_t x442 = INT64_MIN;
	uint8_t x443 = UINT8_MAX;
	volatile uint32_t x444 = 2U;
	uint32_t t108 = 29772526U;

    t108 = ((x441==(x442/x443))*x444);

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x446 = 1;
	volatile int8_t x447 = 17;
	int16_t x448 = INT16_MAX;
	int32_t t109 = 55723366;

    t109 = ((x445==(x446/x447))*x448);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x449 = -1;
	int16_t x451 = INT16_MIN;
	static int64_t x452 = 232LL;

    t110 = ((x449==(x450/x451))*x452);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x453 = 2;
	volatile uint32_t x456 = 0U;
	static volatile uint32_t t111 = 161U;

    t111 = ((x453==(x454/x455))*x456);

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int32_t x458 = INT32_MAX;
	int16_t x459 = 327;
	static int32_t x460 = INT32_MAX;
	volatile int32_t t112 = 1226;

    t112 = ((x457==(x458/x459))*x460);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x461 = 0;
	static int32_t x462 = -1;
	uint64_t x463 = 1218281761271233LLU;
	volatile uint32_t t113 = 7176U;

    t113 = ((x461==(x462/x463))*x464);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x465 = 61LLU;
	uint64_t x466 = UINT64_MAX;
	int16_t x467 = INT16_MIN;
	int32_t x468 = 0;
	int32_t t114 = -39;

    t114 = ((x465==(x466/x467))*x468);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x469 = 86U;
	uint16_t x470 = 83U;
	static uint8_t x471 = UINT8_MAX;
	static int8_t x472 = INT8_MIN;
	volatile int32_t t115 = 12553661;

    t115 = ((x469==(x470/x471))*x472);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x473 = INT32_MIN;
	volatile uint32_t x474 = 672922092U;
	static int64_t x475 = INT64_MIN;
	uint16_t x476 = 3831U;
	volatile int32_t t116 = -654;

    t116 = ((x473==(x474/x475))*x476);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x477 = 57286;
	volatile int8_t x478 = 57;
	int16_t x479 = INT16_MIN;
	int32_t t117 = -2253183;

    t117 = ((x477==(x478/x479))*x480);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x481 = 648;
	uint8_t x482 = 5U;
	static volatile int64_t x483 = -1LL;
	volatile int32_t x484 = -17870796;

    t118 = ((x481==(x482/x483))*x484);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x489 = INT64_MIN;
	int8_t x491 = -2;
	volatile int64_t x492 = -1LL;
	int64_t t119 = 2377601LL;

    t119 = ((x489==(x490/x491))*x492);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x493 = UINT64_MAX;
	static uint16_t x494 = UINT16_MAX;
	volatile int8_t x495 = INT8_MIN;
	int16_t x496 = -72;
	static volatile int32_t t120 = -28020;

    t120 = ((x493==(x494/x495))*x496);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x501 = -1LL;
	static volatile uint8_t x502 = 6U;
	int16_t x503 = INT16_MIN;
	static int32_t x504 = INT32_MIN;
	static int32_t t121 = -16;

    t121 = ((x501==(x502/x503))*x504);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x505 = 499796905;
	int32_t x506 = INT32_MIN;
	int16_t x507 = INT16_MIN;
	int32_t t122 = -4694315;

    t122 = ((x505==(x506/x507))*x508);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x509 = 26;
	int16_t x510 = INT16_MIN;
	int32_t x512 = 76;

    t123 = ((x509==(x510/x511))*x512);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x513 = 6070LLU;
	int32_t x514 = INT32_MAX;
	volatile int8_t x516 = -1;
	static volatile int32_t t124 = 188423733;

    t124 = ((x513==(x514/x515))*x516);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x517 = INT16_MIN;
	static volatile uint16_t x519 = 3U;
	static uint16_t x520 = 10092U;
	static volatile int32_t t125 = 25019;

    t125 = ((x517==(x518/x519))*x520);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x521 = 3;
	static int64_t x522 = INT64_MIN;
	volatile uint64_t x523 = UINT64_MAX;
	volatile int32_t x524 = INT32_MIN;
	int32_t t126 = 1;

    t126 = ((x521==(x522/x523))*x524);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x525 = INT16_MIN;
	uint16_t x526 = UINT16_MAX;
	volatile int8_t x527 = INT8_MIN;
	static int32_t x528 = -1;
	int32_t t127 = 1;

    t127 = ((x525==(x526/x527))*x528);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x530 = INT32_MIN;
	int32_t x531 = -1072650;
	uint8_t x532 = 16U;
	int32_t t128 = -14295157;

    t128 = ((x529==(x530/x531))*x532);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x533 = INT8_MIN;
	int64_t x535 = 9462234235424833LL;
	volatile int32_t t129 = -2905656;

    t129 = ((x533==(x534/x535))*x536);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x537 = UINT32_MAX;
	uint16_t x538 = 51U;
	uint64_t x539 = UINT64_MAX;
	volatile int32_t t130 = -1;

    t130 = ((x537==(x538/x539))*x540);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x541 = 3;
	uint16_t x542 = UINT16_MAX;
	int64_t x543 = INT64_MIN;
	uint16_t x544 = UINT16_MAX;
	static int32_t t131 = 1050230670;

    t131 = ((x541==(x542/x543))*x544);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x546 = -36729997;
	int64_t x547 = INT64_MIN;
	int16_t x548 = -1;

    t132 = ((x545==(x546/x547))*x548);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x549 = 4U;
	uint64_t x550 = 11021653478719303LLU;
	int64_t x551 = INT64_MAX;
	volatile uint16_t x552 = UINT16_MAX;

    t133 = ((x549==(x550/x551))*x552);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x553 = 729045675;
	int8_t x554 = INT8_MIN;
	int16_t x555 = INT16_MAX;
	uint64_t x556 = 655LLU;

    t134 = ((x553==(x554/x555))*x556);

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x559 = INT32_MIN;
	int8_t x560 = -1;

    t135 = ((x557==(x558/x559))*x560);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x561 = 6459U;
	static uint32_t x563 = 11721U;
	uint32_t x564 = UINT32_MAX;
	volatile uint32_t t136 = 2261U;

    t136 = ((x561==(x562/x563))*x564);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x565 = INT64_MIN;
	int8_t x566 = INT8_MIN;
	uint32_t x567 = 2613432U;
	uint32_t x568 = 17817107U;
	uint32_t t137 = 3026170U;

    t137 = ((x565==(x566/x567))*x568);

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x569 = UINT16_MAX;
	int64_t x570 = INT64_MAX;
	uint8_t x571 = 20U;
	int16_t x572 = 13;
	int32_t t138 = -1839876;

    t138 = ((x569==(x570/x571))*x572);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x573 = -1;
	static volatile uint64_t x574 = 896440168835521852LLU;
	static uint8_t x575 = UINT8_MAX;
	static uint16_t x576 = 20U;
	volatile int32_t t139 = 60914;

    t139 = ((x573==(x574/x575))*x576);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x578 = INT8_MIN;
	static uint64_t t140 = 583526LLU;

    t140 = ((x577==(x578/x579))*x580);

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x582 = INT64_MIN;
	static int32_t x584 = -91131;
	volatile int32_t t141 = 799727859;

    t141 = ((x581==(x582/x583))*x584);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x586 = INT64_MAX;
	volatile int8_t x587 = INT8_MAX;
	uint16_t x588 = 1U;
	volatile int32_t t142 = -18646;

    t142 = ((x585==(x586/x587))*x588);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x589 = UINT16_MAX;
	uint16_t x590 = UINT16_MAX;
	int64_t x591 = INT64_MIN;
	static int8_t x592 = -12;
	int32_t t143 = 100;

    t143 = ((x589==(x590/x591))*x592);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x593 = 90542934351799720LL;
	static int32_t x594 = -18576;
	int32_t x595 = INT32_MAX;
	static int64_t t144 = -529091647876LL;

    t144 = ((x593==(x594/x595))*x596);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x598 = INT8_MAX;
	static int32_t x599 = -737914;
	int16_t x600 = INT16_MIN;

    t145 = ((x597==(x598/x599))*x600);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x601 = INT64_MIN;
	volatile uint16_t x602 = 103U;
	static int32_t x603 = -1;

    t146 = ((x601==(x602/x603))*x604);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x606 = INT8_MAX;
	static int8_t x607 = INT8_MIN;
	uint64_t x608 = 91958800665LLU;

    t147 = ((x605==(x606/x607))*x608);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x609 = 7411U;
	uint8_t x610 = UINT8_MAX;
	volatile int64_t x611 = INT64_MIN;
	int32_t t148 = -4794;

    t148 = ((x609==(x610/x611))*x612);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x614 = UINT8_MAX;
	volatile int32_t x615 = INT32_MIN;
	volatile uint16_t x616 = UINT16_MAX;
	int32_t t149 = 283;

    t149 = ((x613==(x614/x615))*x616);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x617 = 1;
	int16_t x618 = INT16_MAX;
	volatile uint32_t x619 = 39U;
	int32_t t150 = -12735165;

    t150 = ((x617==(x618/x619))*x620);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x621 = UINT8_MAX;
	int64_t x622 = INT64_MIN;
	volatile uint32_t x623 = UINT32_MAX;
	int32_t x624 = INT32_MIN;
	volatile int32_t t151 = -43138;

    t151 = ((x621==(x622/x623))*x624);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x625 = 3;
	int8_t x626 = INT8_MIN;
	static volatile int8_t x627 = INT8_MIN;
	volatile uint32_t x628 = 635630768U;
	volatile uint32_t t152 = 0U;

    t152 = ((x625==(x626/x627))*x628);

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x629 = 78;
	static uint64_t x630 = 349LLU;
	static uint32_t x631 = UINT32_MAX;
	static int16_t x632 = -1;

    t153 = ((x629==(x630/x631))*x632);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x633 = INT16_MIN;
	uint32_t x634 = 23U;
	uint32_t x635 = UINT32_MAX;
	int8_t x636 = INT8_MAX;
	int32_t t154 = 289;

    t154 = ((x633==(x634/x635))*x636);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x637 = -2104;
	uint64_t x638 = UINT64_MAX;
	int32_t x639 = 1;
	volatile uint64_t t155 = 81748LLU;

    t155 = ((x637==(x638/x639))*x640);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x641 = UINT16_MAX;
	int16_t x642 = INT16_MIN;
	int8_t x643 = -2;
	int32_t t156 = 8;

    t156 = ((x641==(x642/x643))*x644);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x645 = 583630820596751LLU;
	volatile int16_t x646 = -1;
	int8_t x647 = INT8_MIN;
	int16_t x648 = INT16_MAX;
	volatile int32_t t157 = -54322222;

    t157 = ((x645==(x646/x647))*x648);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x650 = UINT64_MAX;
	int64_t x651 = INT64_MAX;
	int64_t x652 = -1LL;
	int64_t t158 = 56242287331LL;

    t158 = ((x649==(x650/x651))*x652);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x653 = INT32_MIN;
	static uint8_t x654 = 0U;
	volatile uint16_t x655 = UINT16_MAX;
	int64_t x656 = -4868975087626LL;
	volatile int64_t t159 = 6734884393LL;

    t159 = ((x653==(x654/x655))*x656);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x657 = -7238;
	int32_t x658 = -7478;
	uint64_t x659 = 60513962488464201LLU;
	static volatile int32_t t160 = 184;

    t160 = ((x657==(x658/x659))*x660);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x661 = -1;
	uint32_t x662 = UINT32_MAX;
	int8_t x663 = INT8_MIN;
	volatile uint64_t x664 = 85989123LLU;
	static volatile uint64_t t161 = 100508LLU;

    t161 = ((x661==(x662/x663))*x664);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x665 = -3;
	static uint8_t x666 = 45U;
	int32_t t162 = -113467418;

    t162 = ((x665==(x666/x667))*x668);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x670 = 1;
	uint16_t x671 = UINT16_MAX;
	uint8_t x672 = 11U;

    t163 = ((x669==(x670/x671))*x672);

    if (t163 != 11) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x677 = 22481471380LLU;
	uint64_t x680 = 1488LLU;
	uint64_t t164 = 60621525743080LLU;

    t164 = ((x677==(x678/x679))*x680);

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x682 = UINT64_MAX;
	int16_t x683 = -496;
	int16_t x684 = -1;
	int32_t t165 = 13483;

    t165 = ((x681==(x682/x683))*x684);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x685 = INT16_MIN;
	int16_t x687 = 1;
	static int16_t x688 = -170;
	volatile int32_t t166 = 1;

    t166 = ((x685==(x686/x687))*x688);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x689 = -1;
	volatile uint32_t x690 = 163918U;
	int16_t x691 = 43;
	int32_t x692 = INT32_MIN;

    t167 = ((x689==(x690/x691))*x692);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int64_t x696 = INT64_MIN;

    t168 = ((x693==(x694/x695))*x696);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x697 = -41508720145105LL;
	static int32_t x698 = 369485374;
	uint64_t x699 = 78LLU;
	uint64_t x700 = 29528961LLU;
	volatile uint64_t t169 = 108392570817328537LLU;

    t169 = ((x697==(x698/x699))*x700);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x702 = -1;
	uint16_t x703 = UINT16_MAX;
	uint64_t t170 = 39LLU;

    t170 = ((x701==(x702/x703))*x704);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint32_t x705 = 65621994U;
	int8_t x706 = 56;
	static int32_t x707 = INT32_MAX;
	static int32_t x708 = 3;
	volatile int32_t t171 = -7164224;

    t171 = ((x705==(x706/x707))*x708);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x712 = 149U;
	volatile int32_t t172 = -635;

    t172 = ((x709==(x710/x711))*x712);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x713 = 0;
	static uint32_t x715 = 60U;
	volatile int8_t x716 = -1;
	volatile int32_t t173 = -267526190;

    t173 = ((x713==(x714/x715))*x716);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x717 = INT64_MIN;
	uint8_t x718 = 20U;

    t174 = ((x717==(x718/x719))*x720);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x721 = INT8_MIN;
	uint8_t x723 = 8U;
	int16_t x724 = INT16_MIN;
	volatile int32_t t175 = -2112;

    t175 = ((x721==(x722/x723))*x724);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x725 = INT16_MAX;
	static int16_t x728 = INT16_MIN;
	static volatile int32_t t176 = -174868473;

    t176 = ((x725==(x726/x727))*x728);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x731 = UINT16_MAX;
	uint16_t x732 = 5203U;

    t177 = ((x729==(x730/x731))*x732);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x733 = 63U;
	int16_t x734 = INT16_MAX;
	int32_t t178 = -209466;

    t178 = ((x733==(x734/x735))*x736);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x738 = -1;
	uint8_t x739 = UINT8_MAX;
	int64_t x740 = INT64_MIN;

    t179 = ((x737==(x738/x739))*x740);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x741 = 0U;
	static volatile int32_t x742 = INT32_MIN;
	int64_t x744 = INT64_MAX;
	static int64_t t180 = 118LL;

    t180 = ((x741==(x742/x743))*x744);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x745 = INT16_MIN;
	volatile int64_t x746 = -1LL;
	volatile int16_t x748 = 90;
	volatile int32_t t181 = -46;

    t181 = ((x745==(x746/x747))*x748);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x751 = -1;
	uint32_t x752 = 65U;
	volatile uint32_t t182 = 169U;

    t182 = ((x749==(x750/x751))*x752);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x753 = UINT32_MAX;
	int32_t x755 = INT32_MIN;
	uint16_t x756 = UINT16_MAX;

    t183 = ((x753==(x754/x755))*x756);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x757 = -1;
	uint32_t x759 = UINT32_MAX;
	int8_t x760 = INT8_MIN;
	volatile int32_t t184 = 319853804;

    t184 = ((x757==(x758/x759))*x760);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x761 = 8U;
	int64_t x762 = INT64_MAX;
	int64_t x764 = INT64_MIN;
	int64_t t185 = -2013323536243LL;

    t185 = ((x761==(x762/x763))*x764);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x765 = INT8_MAX;
	uint32_t x766 = UINT32_MAX;
	int16_t x767 = INT16_MIN;
	int32_t t186 = 20887;

    t186 = ((x765==(x766/x767))*x768);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x769 = INT64_MAX;
	uint64_t x770 = UINT64_MAX;
	int8_t x771 = INT8_MAX;
	volatile int8_t x772 = -1;
	volatile int32_t t187 = 14895723;

    t187 = ((x769==(x770/x771))*x772);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x773 = 41U;
	int64_t x774 = INT64_MAX;
	volatile uint64_t x775 = UINT64_MAX;
	volatile uint32_t x776 = 965686546U;
	uint32_t t188 = 3U;

    t188 = ((x773==(x774/x775))*x776);

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x778 = -5339865405399LL;
	int32_t x779 = INT32_MIN;
	int8_t x780 = -1;

    t189 = ((x777==(x778/x779))*x780);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x785 = -2;
	static uint16_t x786 = UINT16_MAX;
	int32_t x787 = -1;
	int32_t x788 = -123012;
	volatile int32_t t190 = -905;

    t190 = ((x785==(x786/x787))*x788);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x789 = 4078U;
	static int32_t x790 = -1;
	int32_t x791 = INT32_MIN;
	static int32_t t191 = 649049;

    t191 = ((x789==(x790/x791))*x792);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x793 = INT16_MAX;
	static uint16_t x794 = 2012U;
	int32_t x795 = INT32_MAX;
	volatile int64_t x796 = 0LL;
	static volatile int64_t t192 = -15565791073726336LL;

    t192 = ((x793==(x794/x795))*x796);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x797 = UINT16_MAX;
	int32_t x798 = 2828;
	volatile int32_t t193 = 26;

    t193 = ((x797==(x798/x799))*x800);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x804 = 156904U;
	volatile uint32_t t194 = 929U;

    t194 = ((x801==(x802/x803))*x804);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x805 = 385412311LLU;
	int64_t x808 = -457LL;
	static volatile int64_t t195 = 818102203LL;

    t195 = ((x805==(x806/x807))*x808);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x809 = INT64_MIN;
	uint32_t x810 = UINT32_MAX;

    t196 = ((x809==(x810/x811))*x812);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x813 = INT8_MIN;
	int16_t x814 = -118;
	int64_t x815 = INT64_MIN;
	int8_t x816 = -1;
	int32_t t197 = -445142982;

    t197 = ((x813==(x814/x815))*x816);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x817 = 4486685U;
	volatile int32_t x818 = -1;
	static int64_t x819 = INT64_MIN;
	static int64_t x820 = INT64_MAX;
	volatile int64_t t198 = 2752657LL;

    t198 = ((x817==(x818/x819))*x820);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x821 = 146U;
	int64_t x822 = INT64_MIN;
	uint16_t x823 = 4U;
	int64_t x824 = INT64_MAX;
	static int64_t t199 = 941343961LL;

    t199 = ((x821==(x822/x823))*x824);

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


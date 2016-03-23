
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

volatile int32_t t0 = 1;
int32_t t2 = 230;
volatile int32_t t4 = -6;
int16_t x25 = INT16_MAX;
volatile int8_t x26 = INT8_MIN;
int8_t x28 = -41;
uint8_t x38 = 8U;
volatile int32_t t7 = -23740232;
uint64_t x44 = 3756LLU;
int32_t x51 = 7340;
int16_t x57 = -1;
uint16_t x60 = UINT16_MAX;
int8_t x63 = INT8_MAX;
static int64_t x64 = -1LL;
int16_t x68 = INT16_MIN;
static uint16_t x70 = UINT16_MAX;
int32_t x77 = -1;
static uint8_t x78 = UINT8_MAX;
volatile uint64_t x91 = UINT64_MAX;
int8_t x92 = INT8_MIN;
uint8_t x94 = 0U;
int32_t t19 = -30276;
static int64_t x103 = INT64_MIN;
static volatile int32_t t22 = 986517;
uint32_t x121 = UINT32_MAX;
volatile int32_t x156 = -1;
uint8_t x160 = 0U;
static int16_t x174 = INT16_MAX;
volatile uint16_t x176 = 58U;
int16_t x182 = 1980;
static int8_t x184 = INT8_MIN;
int32_t t35 = 16;
static volatile int8_t x209 = 0;
static volatile int16_t x217 = -1;
int32_t t38 = -695283686;
int8_t x231 = 3;
int64_t x240 = -13598966LL;
uint64_t x244 = UINT64_MAX;
static int32_t t42 = 225437374;
int8_t x253 = INT8_MAX;
int32_t t44 = 116906;
volatile uint16_t x258 = 18U;
volatile int16_t x260 = INT16_MAX;
int64_t x281 = -1LL;
static uint32_t x282 = UINT32_MAX;
static int32_t x283 = -1;
int8_t x286 = INT8_MIN;
static uint8_t x287 = 0U;
int16_t x297 = 1255;
int64_t x298 = 24576LL;
int8_t x316 = -1;
volatile int32_t t54 = 6790;
uint16_t x327 = 15229U;
int16_t x328 = -115;
volatile int64_t x335 = INT64_MAX;
volatile uint32_t x345 = UINT32_MAX;
volatile int32_t x348 = -975;
volatile int32_t x353 = INT32_MIN;
static uint16_t x356 = UINT16_MAX;
uint32_t x359 = 492U;
uint16_t x366 = UINT16_MAX;
uint8_t x368 = UINT8_MAX;
static int64_t x370 = -510791LL;
volatile int16_t x377 = 0;
uint8_t x381 = 59U;
int32_t x386 = -1;
volatile int16_t x390 = INT16_MAX;
int16_t x397 = INT16_MIN;
int32_t t69 = 0;
int8_t x427 = INT8_MAX;
volatile int16_t x428 = -1917;
int32_t t72 = -295994;
int64_t x431 = 209306653LL;
volatile uint8_t x439 = 110U;
int64_t x446 = INT64_MIN;
int32_t t78 = 219;
int32_t t79 = -597968;
int8_t x474 = 3;
uint16_t x489 = 4U;
uint64_t x510 = 46928707592817908LLU;
static int16_t x515 = INT16_MAX;
uint64_t x527 = 470629LLU;
int8_t x529 = INT8_MIN;
int32_t x530 = INT32_MIN;
uint64_t x549 = 1784874860359LLU;
int64_t x552 = -23844466464LL;
uint64_t x557 = 921848LLU;
static uint16_t x563 = 3U;
int8_t x568 = INT8_MIN;
static volatile int32_t t105 = 69940;
volatile int8_t x600 = INT8_MAX;
volatile int32_t x605 = 32;
int16_t x611 = INT16_MIN;
int8_t x612 = 0;
int8_t x632 = -28;
uint16_t x640 = 39U;
volatile int32_t t114 = 764674133;
volatile int16_t x648 = INT16_MIN;
int32_t t115 = 17;
int32_t x649 = INT32_MIN;
uint32_t x651 = 483U;
volatile int32_t t116 = 6;
int32_t x655 = 28081;
int16_t x660 = -41;
volatile uint16_t x663 = UINT16_MAX;
uint32_t x668 = UINT32_MAX;
int64_t x677 = INT64_MAX;
static int64_t x680 = 1397798409467191968LL;
int64_t x681 = INT64_MIN;
int32_t t124 = 67594357;
int64_t x685 = INT64_MIN;
uint8_t x689 = 7U;
volatile int16_t x691 = -1895;
volatile int32_t t126 = 45;
volatile uint32_t x699 = UINT32_MAX;
int16_t x700 = INT16_MIN;
int32_t t128 = 67547;
int16_t x707 = 0;
static int32_t t131 = 1030;
int16_t x725 = INT16_MAX;
volatile int16_t x728 = 169;
int32_t x730 = INT32_MIN;
uint16_t x735 = UINT16_MAX;
static volatile int16_t x739 = -292;
uint32_t x751 = 7122006U;
uint32_t x753 = 127048U;
static volatile int32_t x754 = INT32_MIN;
static volatile uint8_t x756 = 37U;
int32_t t137 = 895819842;
uint16_t x757 = UINT16_MAX;
uint8_t x758 = 0U;
volatile uint16_t x760 = UINT16_MAX;
int32_t x782 = INT32_MAX;
static uint8_t x784 = UINT8_MAX;
static uint32_t x788 = 842170793U;
int32_t t142 = -157;
volatile int32_t t143 = 16074;
int16_t x806 = -436;
uint16_t x807 = 7U;
static int32_t t144 = 65328;
int32_t x816 = 1517;
int32_t t147 = -1;
int16_t x826 = 55;
int32_t x832 = INT32_MIN;
static uint64_t x839 = 79686LLU;
int32_t x849 = -1;
static int16_t x857 = 0;
int16_t x876 = 82;
uint8_t x881 = 110U;
int32_t x882 = INT32_MIN;
static uint32_t x885 = 1U;
volatile int32_t t161 = 17890135;
int16_t x892 = -1;
static int8_t x893 = INT8_MIN;
volatile int64_t x896 = -1LL;
volatile int32_t t164 = 54882;
volatile int32_t t165 = 1;
uint32_t x910 = UINT32_MAX;
uint32_t x913 = 61454964U;
int8_t x917 = 21;
int64_t x929 = 5928LL;
static int16_t x931 = 125;
int8_t x934 = INT8_MAX;
uint16_t x935 = 6925U;
static int32_t t173 = 11624678;
int32_t t174 = 94648008;
int32_t t176 = -1357;
volatile int32_t x964 = INT32_MIN;
volatile int32_t x965 = INT32_MAX;
static uint8_t x966 = UINT8_MAX;
int16_t x969 = INT16_MIN;
int16_t x974 = INT16_MIN;
static volatile uint8_t x978 = 10U;
int8_t x984 = -1;
volatile int32_t t182 = 960296;
uint16_t x989 = 58U;
int16_t x990 = -1;
int32_t x994 = INT32_MIN;
int8_t x995 = INT8_MIN;
static int8_t x997 = INT8_MIN;
static uint16_t x1000 = 1U;
int32_t x1004 = INT32_MIN;
int32_t t186 = 400655;
uint8_t x1005 = 103U;
static uint16_t x1006 = 231U;
int32_t t187 = 5399;
static int32_t t188 = -92;
int64_t x1029 = -1LL;
int8_t x1032 = 6;
volatile int16_t x1037 = 1;
int16_t x1060 = INT16_MIN;
int8_t x1067 = INT8_MIN;


void f0(void) {
    	uint32_t x1 = 7U;
	volatile int64_t x2 = 9562295035LL;
	int16_t x3 = -11283;
	uint32_t x4 = 63U;

    t0 = ((x1|x2)!=(x3*x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x9 = INT32_MIN;
	uint64_t x10 = 107LLU;
	uint32_t x11 = 45U;
	uint64_t x12 = UINT64_MAX;
	static int32_t t1 = -3;

    t1 = ((x9|x10)!=(x11*x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x13 = INT32_MIN;
	volatile uint64_t x14 = UINT64_MAX;
	volatile uint16_t x15 = UINT16_MAX;
	int16_t x16 = INT16_MIN;

    t2 = ((x13|x14)!=(x15*x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x17 = -1;
	int8_t x18 = INT8_MIN;
	uint16_t x19 = 807U;
	static uint8_t x20 = 55U;
	volatile int32_t t3 = 197;

    t3 = ((x17|x18)!=(x19*x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x21 = INT16_MAX;
	int8_t x22 = INT8_MIN;
	int16_t x23 = 3177;
	volatile int8_t x24 = -1;

    t4 = ((x21|x22)!=(x23*x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x27 = 149;
	volatile int32_t t5 = -2;

    t5 = ((x25|x26)!=(x27*x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x33 = -8;
	uint16_t x34 = 2113U;
	static volatile uint64_t x35 = 29211346764014918LLU;
	uint16_t x36 = UINT16_MAX;
	static volatile int32_t t6 = 15838336;

    t6 = ((x33|x34)!=(x35*x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x37 = 84U;
	static volatile int16_t x39 = INT16_MAX;
	volatile uint32_t x40 = 442U;

    t7 = ((x37|x38)!=(x39*x40));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = -1;
	int32_t x42 = INT32_MAX;
	static uint64_t x43 = UINT64_MAX;
	int32_t t8 = 4655;

    t8 = ((x41|x42)!=(x43*x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = INT32_MIN;
	uint16_t x46 = 26U;
	volatile int64_t x47 = -1LL;
	static uint64_t x48 = 0LLU;
	volatile int32_t t9 = -210633995;

    t9 = ((x45|x46)!=(x47*x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x49 = 36U;
	int64_t x50 = -1LL;
	volatile uint8_t x52 = 1U;
	volatile int32_t t10 = -436;

    t10 = ((x49|x50)!=(x51*x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x53 = INT64_MIN;
	volatile int8_t x54 = INT8_MIN;
	int8_t x55 = INT8_MIN;
	uint32_t x56 = 989036684U;
	volatile int32_t t11 = -13493555;

    t11 = ((x53|x54)!=(x55*x56));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x58 = 0U;
	int8_t x59 = INT8_MIN;
	volatile int32_t t12 = -896;

    t12 = ((x57|x58)!=(x59*x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x61 = 44U;
	int8_t x62 = -1;
	volatile int32_t t13 = 1;

    t13 = ((x61|x62)!=(x63*x64));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x65 = 210189LLU;
	int32_t x66 = INT32_MAX;
	volatile int32_t x67 = -1;
	static int32_t t14 = 482447;

    t14 = ((x65|x66)!=(x67*x68));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x69 = INT16_MIN;
	static int16_t x71 = -6;
	static int64_t x72 = 549693952LL;
	int32_t t15 = 29;

    t15 = ((x69|x70)!=(x71*x72));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x79 = 152U;
	volatile uint64_t x80 = UINT64_MAX;
	int32_t t16 = 30138663;

    t16 = ((x77|x78)!=(x79*x80));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x85 = 40U;
	uint8_t x86 = UINT8_MAX;
	volatile int64_t x87 = 66844675310LL;
	volatile uint8_t x88 = 3U;
	static volatile int32_t t17 = -13495584;

    t17 = ((x85|x86)!=(x87*x88));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x89 = INT8_MAX;
	int32_t x90 = INT32_MAX;
	static int32_t t18 = -1932;

    t18 = ((x89|x90)!=(x91*x92));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x93 = UINT32_MAX;
	uint32_t x95 = 1U;
	uint64_t x96 = UINT64_MAX;

    t19 = ((x93|x94)!=(x95*x96));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x101 = 1844U;
	uint16_t x102 = 241U;
	uint64_t x104 = 6586969200160968312LLU;
	static volatile int32_t t20 = 92;

    t20 = ((x101|x102)!=(x103*x104));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x109 = 0U;
	int8_t x110 = 1;
	static volatile uint16_t x111 = UINT16_MAX;
	volatile uint8_t x112 = 2U;
	int32_t t21 = 5;

    t21 = ((x109|x110)!=(x111*x112));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x113 = 36;
	static uint16_t x114 = UINT16_MAX;
	uint32_t x115 = 521059U;
	volatile int32_t x116 = INT32_MAX;

    t22 = ((x113|x114)!=(x115*x116));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x117 = 39756U;
	volatile int32_t x118 = -60;
	int16_t x119 = -1;
	int8_t x120 = INT8_MIN;
	int32_t t23 = -86297220;

    t23 = ((x117|x118)!=(x119*x120));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x122 = 884U;
	volatile uint16_t x123 = UINT16_MAX;
	int64_t x124 = -1LL;
	volatile int32_t t24 = -127218;

    t24 = ((x121|x122)!=(x123*x124));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x137 = UINT16_MAX;
	uint32_t x138 = 15U;
	int64_t x139 = -26542729LL;
	volatile uint32_t x140 = 822U;
	static int32_t t25 = 1;

    t25 = ((x137|x138)!=(x139*x140));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x141 = -598;
	volatile int64_t x142 = INT64_MIN;
	int16_t x143 = INT16_MIN;
	static uint32_t x144 = UINT32_MAX;
	volatile int32_t t26 = 483720;

    t26 = ((x141|x142)!=(x143*x144));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x153 = INT64_MIN;
	int32_t x154 = INT32_MIN;
	static uint16_t x155 = 407U;
	int32_t t27 = -95053;

    t27 = ((x153|x154)!=(x155*x156));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x157 = 5LLU;
	static volatile uint64_t x158 = 5192LLU;
	uint64_t x159 = 31453153LLU;
	static int32_t t28 = 603211000;

    t28 = ((x157|x158)!=(x159*x160));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x161 = 0U;
	int64_t x162 = 3934468LL;
	int16_t x163 = INT16_MIN;
	static int16_t x164 = -1;
	int32_t t29 = -2726109;

    t29 = ((x161|x162)!=(x163*x164));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x173 = UINT16_MAX;
	int64_t x175 = 4055431319LL;
	int32_t t30 = -239324;

    t30 = ((x173|x174)!=(x175*x176));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x177 = -1;
	static volatile int64_t x178 = -1LL;
	int8_t x179 = -13;
	int8_t x180 = -1;
	int32_t t31 = 285011134;

    t31 = ((x177|x178)!=(x179*x180));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x181 = -258;
	static uint32_t x183 = 711759875U;
	int32_t t32 = 3;

    t32 = ((x181|x182)!=(x183*x184));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x185 = INT16_MAX;
	int8_t x186 = 1;
	volatile uint8_t x187 = 7U;
	volatile uint64_t x188 = UINT64_MAX;
	volatile int32_t t33 = -30;

    t33 = ((x185|x186)!=(x187*x188));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x193 = INT32_MAX;
	int32_t x194 = -1;
	volatile int16_t x195 = INT16_MIN;
	static volatile int64_t x196 = -1456414227830LL;
	int32_t t34 = -98;

    t34 = ((x193|x194)!=(x195*x196));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x201 = -1;
	static int64_t x202 = INT64_MIN;
	volatile uint32_t x203 = 271381U;
	int32_t x204 = -65172366;

    t35 = ((x201|x202)!=(x203*x204));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x210 = UINT32_MAX;
	uint16_t x211 = 53U;
	volatile uint32_t x212 = 28U;
	volatile int32_t t36 = -1820497;

    t36 = ((x209|x210)!=(x211*x212));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x213 = INT64_MAX;
	int32_t x214 = -353;
	uint16_t x215 = 5U;
	volatile uint16_t x216 = 4U;
	volatile int32_t t37 = -575299799;

    t37 = ((x213|x214)!=(x215*x216));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x218 = 6316;
	int8_t x219 = INT8_MAX;
	uint16_t x220 = UINT16_MAX;

    t38 = ((x217|x218)!=(x219*x220));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x221 = 236691667U;
	uint64_t x222 = UINT64_MAX;
	static volatile int16_t x223 = INT16_MIN;
	int32_t x224 = -1;
	volatile int32_t t39 = 345803;

    t39 = ((x221|x222)!=(x223*x224));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x229 = 6324;
	uint32_t x230 = UINT32_MAX;
	int16_t x232 = -2484;
	static volatile int32_t t40 = 117641669;

    t40 = ((x229|x230)!=(x231*x232));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x237 = -1;
	int8_t x238 = 26;
	static volatile int8_t x239 = INT8_MIN;
	int32_t t41 = -24888777;

    t41 = ((x237|x238)!=(x239*x240));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x241 = 11031;
	static int16_t x242 = -1;
	static int8_t x243 = 43;

    t42 = ((x241|x242)!=(x243*x244));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x249 = 52092U;
	static int32_t x250 = INT32_MIN;
	uint32_t x251 = UINT32_MAX;
	int32_t x252 = INT32_MIN;
	int32_t t43 = -46411630;

    t43 = ((x249|x250)!=(x251*x252));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x254 = INT64_MIN;
	volatile int16_t x255 = -1;
	int8_t x256 = INT8_MAX;

    t44 = ((x253|x254)!=(x255*x256));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x257 = 6597791392731262505LLU;
	int32_t x259 = 1;
	volatile int32_t t45 = -5530119;

    t45 = ((x257|x258)!=(x259*x260));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x265 = 7413U;
	int16_t x266 = -1;
	uint64_t x267 = 192724LLU;
	uint64_t x268 = 1069961797299LLU;
	static volatile int32_t t46 = -7495;

    t46 = ((x265|x266)!=(x267*x268));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x273 = INT8_MIN;
	uint32_t x274 = 222776525U;
	int8_t x275 = 0;
	int32_t x276 = -444757160;
	static int32_t t47 = 3150;

    t47 = ((x273|x274)!=(x275*x276));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x284 = INT16_MIN;
	static int32_t t48 = -377;

    t48 = ((x281|x282)!=(x283*x284));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x285 = -1;
	volatile int16_t x288 = -1;
	static int32_t t49 = -314505;

    t49 = ((x285|x286)!=(x287*x288));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x299 = UINT16_MAX;
	int64_t x300 = 1370042LL;
	int32_t t50 = 0;

    t50 = ((x297|x298)!=(x299*x300));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x301 = UINT8_MAX;
	uint64_t x302 = 1056565LLU;
	uint64_t x303 = UINT64_MAX;
	int16_t x304 = INT16_MAX;
	int32_t t51 = 15;

    t51 = ((x301|x302)!=(x303*x304));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x305 = -1;
	uint64_t x306 = UINT64_MAX;
	uint8_t x307 = 14U;
	uint64_t x308 = 9582005966106LLU;
	int32_t t52 = -1574451;

    t52 = ((x305|x306)!=(x307*x308));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x313 = INT32_MIN;
	uint32_t x314 = UINT32_MAX;
	uint16_t x315 = UINT16_MAX;
	volatile int32_t t53 = 2071328;

    t53 = ((x313|x314)!=(x315*x316));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x317 = 11U;
	volatile int8_t x318 = INT8_MIN;
	uint32_t x319 = UINT32_MAX;
	uint32_t x320 = 53U;

    t54 = ((x317|x318)!=(x319*x320));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x321 = INT16_MAX;
	static int8_t x322 = -1;
	volatile int8_t x323 = -1;
	int16_t x324 = 54;
	static volatile int32_t t55 = -5399;

    t55 = ((x321|x322)!=(x323*x324));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x325 = 43;
	static uint8_t x326 = UINT8_MAX;
	volatile int32_t t56 = 2028;

    t56 = ((x325|x326)!=(x327*x328));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x329 = -6323;
	uint8_t x330 = 1U;
	uint8_t x331 = 10U;
	int32_t x332 = -10;
	static volatile int32_t t57 = -5137;

    t57 = ((x329|x330)!=(x331*x332));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x333 = INT32_MAX;
	static int32_t x334 = 10696767;
	int8_t x336 = -1;
	int32_t t58 = -9;

    t58 = ((x333|x334)!=(x335*x336));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x346 = 96U;
	static uint64_t x347 = 4905LLU;
	static volatile int32_t t59 = -3353171;

    t59 = ((x345|x346)!=(x347*x348));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x354 = 14014U;
	volatile uint32_t x355 = 142528431U;
	volatile int32_t t60 = -35337;

    t60 = ((x353|x354)!=(x355*x356));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x357 = -1;
	int32_t x358 = INT32_MAX;
	uint32_t x360 = 6680U;
	volatile int32_t t61 = -557880;

    t61 = ((x357|x358)!=(x359*x360));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x361 = 2944286238299970067LL;
	volatile uint8_t x362 = 5U;
	static int32_t x363 = 14681594;
	static int8_t x364 = -1;
	static volatile int32_t t62 = -317744;

    t62 = ((x361|x362)!=(x363*x364));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x365 = INT16_MIN;
	uint32_t x367 = UINT32_MAX;
	static volatile int32_t t63 = 16487449;

    t63 = ((x365|x366)!=(x367*x368));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x369 = -1;
	int8_t x371 = -1;
	uint16_t x372 = 233U;
	int32_t t64 = 211899562;

    t64 = ((x369|x370)!=(x371*x372));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x378 = UINT16_MAX;
	uint32_t x379 = 4033U;
	int32_t x380 = INT32_MIN;
	volatile int32_t t65 = 261138;

    t65 = ((x377|x378)!=(x379*x380));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int64_t x382 = -1LL;
	volatile int16_t x383 = -1;
	int32_t x384 = INT32_MAX;
	static int32_t t66 = 253758;

    t66 = ((x381|x382)!=(x383*x384));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x385 = 179944LLU;
	uint32_t x387 = 12704U;
	volatile uint16_t x388 = 34U;
	volatile int32_t t67 = -13664009;

    t67 = ((x385|x386)!=(x387*x388));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int32_t x389 = INT32_MIN;
	volatile int32_t x391 = INT32_MIN;
	uint32_t x392 = 297701U;
	int32_t t68 = 870;

    t68 = ((x389|x390)!=(x391*x392));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x398 = -11713LL;
	static int8_t x399 = 4;
	int32_t x400 = -25022403;

    t69 = ((x397|x398)!=(x399*x400));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x409 = INT16_MIN;
	int64_t x410 = -1LL;
	static uint32_t x411 = UINT32_MAX;
	int16_t x412 = -1;
	volatile int32_t t70 = 227;

    t70 = ((x409|x410)!=(x411*x412));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x417 = INT8_MAX;
	int64_t x418 = INT64_MAX;
	uint32_t x419 = 3663859U;
	static volatile int16_t x420 = INT16_MAX;
	int32_t t71 = 0;

    t71 = ((x417|x418)!=(x419*x420));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x425 = INT16_MIN;
	uint64_t x426 = 21515400LLU;

    t72 = ((x425|x426)!=(x427*x428));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x429 = -1LL;
	volatile uint8_t x430 = UINT8_MAX;
	static volatile uint64_t x432 = 6989068LLU;
	static volatile int32_t t73 = 6375330;

    t73 = ((x429|x430)!=(x431*x432));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x437 = INT32_MAX;
	int16_t x438 = INT16_MIN;
	int16_t x440 = 239;
	int32_t t74 = -1;

    t74 = ((x437|x438)!=(x439*x440));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x445 = -1547;
	uint8_t x447 = 0U;
	int8_t x448 = 24;
	int32_t t75 = 8265;

    t75 = ((x445|x446)!=(x447*x448));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x449 = 5879U;
	int8_t x450 = INT8_MIN;
	int16_t x451 = 1;
	uint64_t x452 = 1711LLU;
	int32_t t76 = -25;

    t76 = ((x449|x450)!=(x451*x452));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x453 = -253074LL;
	static volatile int64_t x454 = -1LL;
	uint32_t x455 = 51U;
	int16_t x456 = INT16_MAX;
	int32_t t77 = -25213779;

    t77 = ((x453|x454)!=(x455*x456));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x457 = INT16_MIN;
	static int8_t x458 = INT8_MAX;
	volatile int16_t x459 = INT16_MIN;
	static uint32_t x460 = UINT32_MAX;

    t78 = ((x457|x458)!=(x459*x460));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x461 = 228914770824362LLU;
	int64_t x462 = INT64_MAX;
	volatile int64_t x463 = -278649LL;
	static int64_t x464 = 13291004707780LL;

    t79 = ((x461|x462)!=(x463*x464));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x465 = -1;
	int64_t x466 = -851524548920103287LL;
	volatile int32_t x467 = INT32_MAX;
	uint32_t x468 = UINT32_MAX;
	volatile int32_t t80 = -15400393;

    t80 = ((x465|x466)!=(x467*x468));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x473 = -1LL;
	static int32_t x475 = -1;
	volatile int16_t x476 = 7658;
	volatile int32_t t81 = -1;

    t81 = ((x473|x474)!=(x475*x476));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x477 = INT8_MAX;
	static int32_t x478 = INT32_MAX;
	volatile int8_t x479 = INT8_MAX;
	int64_t x480 = 7591LL;
	int32_t t82 = -18;

    t82 = ((x477|x478)!=(x479*x480));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x481 = INT32_MIN;
	int16_t x482 = INT16_MAX;
	volatile int8_t x483 = 0;
	static volatile int32_t x484 = -1;
	volatile int32_t t83 = -14;

    t83 = ((x481|x482)!=(x483*x484));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x485 = UINT64_MAX;
	uint16_t x486 = 2209U;
	int8_t x487 = INT8_MAX;
	static int64_t x488 = -470871249128LL;
	static volatile int32_t t84 = -6280;

    t84 = ((x485|x486)!=(x487*x488));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x490 = 3;
	uint64_t x491 = UINT64_MAX;
	uint8_t x492 = 0U;
	static volatile int32_t t85 = 260;

    t85 = ((x489|x490)!=(x491*x492));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x497 = 3265;
	volatile int32_t x498 = INT32_MIN;
	int64_t x499 = 36161346LL;
	uint16_t x500 = 11U;
	static int32_t t86 = -6103249;

    t86 = ((x497|x498)!=(x499*x500));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x501 = -9;
	int32_t x502 = -1;
	volatile int32_t x503 = 4;
	static uint8_t x504 = 87U;
	volatile int32_t t87 = 424;

    t87 = ((x501|x502)!=(x503*x504));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x509 = -87865904LL;
	int64_t x511 = -1179433LL;
	uint16_t x512 = 0U;
	int32_t t88 = 0;

    t88 = ((x509|x510)!=(x511*x512));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x513 = INT64_MIN;
	uint8_t x514 = 0U;
	int8_t x516 = -25;
	volatile int32_t t89 = -1656;

    t89 = ((x513|x514)!=(x515*x516));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int64_t x517 = -32LL;
	int64_t x518 = 723665868104191275LL;
	static int32_t x519 = INT32_MIN;
	int64_t x520 = -1LL;
	int32_t t90 = -7;

    t90 = ((x517|x518)!=(x519*x520));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x525 = UINT32_MAX;
	static int64_t x526 = 63LL;
	int8_t x528 = INT8_MAX;
	static volatile int32_t t91 = 0;

    t91 = ((x525|x526)!=(x527*x528));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x531 = INT16_MIN;
	int64_t x532 = -1LL;
	int32_t t92 = -99156530;

    t92 = ((x529|x530)!=(x531*x532));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x537 = UINT64_MAX;
	uint16_t x538 = UINT16_MAX;
	uint64_t x539 = 1003453071615LLU;
	static volatile uint8_t x540 = 69U;
	volatile int32_t t93 = -84;

    t93 = ((x537|x538)!=(x539*x540));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x545 = INT16_MIN;
	uint8_t x546 = 44U;
	volatile int16_t x547 = -1;
	static int16_t x548 = -1;
	volatile int32_t t94 = -35877062;

    t94 = ((x545|x546)!=(x547*x548));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x550 = UINT64_MAX;
	volatile uint64_t x551 = 31LLU;
	int32_t t95 = -216537;

    t95 = ((x549|x550)!=(x551*x552));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x553 = -1LL;
	static int8_t x554 = -1;
	static int16_t x555 = INT16_MIN;
	uint16_t x556 = UINT16_MAX;
	volatile int32_t t96 = 2817;

    t96 = ((x553|x554)!=(x555*x556));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x558 = 223247331U;
	int64_t x559 = -348858LL;
	uint32_t x560 = 590U;
	static volatile int32_t t97 = -838859;

    t97 = ((x557|x558)!=(x559*x560));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x561 = -1;
	static volatile uint16_t x562 = 2U;
	uint32_t x564 = UINT32_MAX;
	volatile int32_t t98 = -420902;

    t98 = ((x561|x562)!=(x563*x564));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x565 = UINT8_MAX;
	int64_t x566 = 1683225LL;
	static uint32_t x567 = 0U;
	volatile int32_t t99 = -130043471;

    t99 = ((x565|x566)!=(x567*x568));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x573 = 1;
	int32_t x574 = -1;
	int8_t x575 = INT8_MIN;
	volatile uint32_t x576 = 27U;
	int32_t t100 = -6;

    t100 = ((x573|x574)!=(x575*x576));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x577 = 129576391386LL;
	volatile int32_t x578 = INT32_MIN;
	int64_t x579 = 1145576604271679LL;
	volatile int32_t x580 = -150;
	volatile int32_t t101 = -845;

    t101 = ((x577|x578)!=(x579*x580));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x581 = -1;
	uint16_t x582 = UINT16_MAX;
	static int64_t x583 = -1LL;
	volatile uint8_t x584 = 3U;
	volatile int32_t t102 = -644;

    t102 = ((x581|x582)!=(x583*x584));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x585 = UINT8_MAX;
	uint32_t x586 = 681959U;
	int8_t x587 = INT8_MAX;
	int16_t x588 = INT16_MAX;
	volatile int32_t t103 = 10482403;

    t103 = ((x585|x586)!=(x587*x588));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x589 = 10813U;
	int32_t x590 = INT32_MAX;
	uint32_t x591 = UINT32_MAX;
	static volatile int32_t x592 = INT32_MIN;
	static int32_t t104 = 22106;

    t104 = ((x589|x590)!=(x591*x592));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x593 = -1;
	uint32_t x594 = UINT32_MAX;
	uint16_t x595 = UINT16_MAX;
	static int8_t x596 = INT8_MAX;

    t105 = ((x593|x594)!=(x595*x596));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x597 = -4648;
	volatile int8_t x598 = INT8_MIN;
	uint32_t x599 = UINT32_MAX;
	int32_t t106 = -480;

    t106 = ((x597|x598)!=(x599*x600));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x601 = UINT8_MAX;
	int64_t x602 = -10136513387281LL;
	int8_t x603 = INT8_MIN;
	int16_t x604 = INT16_MIN;
	int32_t t107 = -703261296;

    t107 = ((x601|x602)!=(x603*x604));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x606 = 2U;
	int16_t x607 = -1;
	static int32_t x608 = INT32_MAX;
	volatile int32_t t108 = -24737608;

    t108 = ((x605|x606)!=(x607*x608));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int32_t x609 = -1;
	volatile int64_t x610 = -1LL;
	int32_t t109 = 3984;

    t109 = ((x609|x610)!=(x611*x612));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x613 = -44417;
	int8_t x614 = -1;
	static uint64_t x615 = UINT64_MAX;
	int64_t x616 = -1LL;
	volatile int32_t t110 = -14238172;

    t110 = ((x613|x614)!=(x615*x616));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x621 = 2448LL;
	uint32_t x622 = UINT32_MAX;
	uint32_t x623 = 70U;
	int64_t x624 = 2202946853916222LL;
	static int32_t t111 = -10989488;

    t111 = ((x621|x622)!=(x623*x624));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x629 = 1;
	int16_t x630 = INT16_MIN;
	int8_t x631 = INT8_MIN;
	int32_t t112 = -55670527;

    t112 = ((x629|x630)!=(x631*x632));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x637 = 1U;
	uint64_t x638 = 90717779090731LLU;
	int8_t x639 = INT8_MIN;
	volatile int32_t t113 = 22785633;

    t113 = ((x637|x638)!=(x639*x640));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x641 = UINT16_MAX;
	static uint8_t x642 = 20U;
	int16_t x643 = 1;
	uint32_t x644 = 1538U;

    t114 = ((x641|x642)!=(x643*x644));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x645 = -1328800290LL;
	uint16_t x646 = 1U;
	uint64_t x647 = UINT64_MAX;

    t115 = ((x645|x646)!=(x647*x648));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x650 = INT8_MIN;
	int32_t x652 = INT32_MAX;

    t116 = ((x649|x650)!=(x651*x652));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x653 = INT32_MAX;
	uint64_t x654 = UINT64_MAX;
	uint32_t x656 = 0U;
	volatile int32_t t117 = 244;

    t117 = ((x653|x654)!=(x655*x656));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x657 = INT32_MAX;
	uint64_t x658 = 2325331LLU;
	int16_t x659 = -1;
	int32_t t118 = -16385388;

    t118 = ((x657|x658)!=(x659*x660));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x661 = INT8_MIN;
	uint64_t x662 = UINT64_MAX;
	uint64_t x664 = 3877238LLU;
	int32_t t119 = 0;

    t119 = ((x661|x662)!=(x663*x664));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x665 = 0U;
	static int32_t x666 = INT32_MAX;
	uint8_t x667 = UINT8_MAX;
	volatile int32_t t120 = 1;

    t120 = ((x665|x666)!=(x667*x668));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x669 = 5LLU;
	static int64_t x670 = INT64_MIN;
	int64_t x671 = 1LL;
	int64_t x672 = INT64_MIN;
	volatile int32_t t121 = -12098487;

    t121 = ((x669|x670)!=(x671*x672));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x673 = -92;
	int32_t x674 = INT32_MAX;
	volatile uint16_t x675 = 2158U;
	volatile int16_t x676 = INT16_MIN;
	static int32_t t122 = -2171;

    t122 = ((x673|x674)!=(x675*x676));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x678 = 1859;
	uint64_t x679 = 278LLU;
	volatile int32_t t123 = -1781534;

    t123 = ((x677|x678)!=(x679*x680));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x682 = 1061U;
	volatile int16_t x683 = -63;
	int8_t x684 = INT8_MAX;

    t124 = ((x681|x682)!=(x683*x684));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x686 = INT64_MAX;
	int64_t x687 = 243LL;
	uint8_t x688 = UINT8_MAX;
	volatile int32_t t125 = 1474356;

    t125 = ((x685|x686)!=(x687*x688));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x690 = INT64_MIN;
	uint64_t x692 = 30936219996867LLU;

    t126 = ((x689|x690)!=(x691*x692));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x693 = INT8_MAX;
	volatile uint16_t x694 = 19642U;
	uint64_t x695 = 1161566655LLU;
	int32_t x696 = -1;
	static volatile int32_t t127 = 46849893;

    t127 = ((x693|x694)!=(x695*x696));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x697 = 3;
	volatile int64_t x698 = INT64_MIN;

    t128 = ((x697|x698)!=(x699*x700));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x705 = 125689953;
	static uint16_t x706 = 2U;
	int16_t x708 = -1;
	int32_t t129 = -59392902;

    t129 = ((x705|x706)!=(x707*x708));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x709 = 252U;
	int64_t x710 = INT64_MIN;
	static uint64_t x711 = UINT64_MAX;
	int32_t x712 = INT32_MAX;
	volatile int32_t t130 = -212780770;

    t130 = ((x709|x710)!=(x711*x712));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x713 = INT32_MIN;
	static volatile uint64_t x714 = UINT64_MAX;
	int8_t x715 = -1;
	int8_t x716 = -1;

    t131 = ((x713|x714)!=(x715*x716));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x726 = 45U;
	uint8_t x727 = UINT8_MAX;
	int32_t t132 = -6;

    t132 = ((x725|x726)!=(x727*x728));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x729 = UINT8_MAX;
	volatile int8_t x731 = 54;
	static uint32_t x732 = 458186U;
	volatile int32_t t133 = -721;

    t133 = ((x729|x730)!=(x731*x732));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x733 = INT16_MIN;
	uint32_t x734 = 50876597U;
	int16_t x736 = INT16_MIN;
	int32_t t134 = 886864;

    t134 = ((x733|x734)!=(x735*x736));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x737 = 57;
	static volatile uint8_t x738 = 1U;
	uint16_t x740 = UINT16_MAX;
	static volatile int32_t t135 = 905829761;

    t135 = ((x737|x738)!=(x739*x740));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x749 = UINT16_MAX;
	int8_t x750 = 27;
	uint64_t x752 = 31615367361LLU;
	int32_t t136 = 152253;

    t136 = ((x749|x750)!=(x751*x752));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x755 = 1810;

    t137 = ((x753|x754)!=(x755*x756));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int32_t x759 = -7737;
	volatile int32_t t138 = 672;

    t138 = ((x757|x758)!=(x759*x760));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x769 = INT8_MAX;
	volatile int16_t x770 = -425;
	uint32_t x771 = 5439U;
	int16_t x772 = INT16_MIN;
	static int32_t t139 = 5859;

    t139 = ((x769|x770)!=(x771*x772));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x777 = -5;
	static int8_t x778 = INT8_MIN;
	int64_t x779 = 2959778262LL;
	int8_t x780 = INT8_MAX;
	static volatile int32_t t140 = 249777983;

    t140 = ((x777|x778)!=(x779*x780));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x781 = 110;
	static uint64_t x783 = 12LLU;
	volatile int32_t t141 = -5553;

    t141 = ((x781|x782)!=(x783*x784));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x785 = -9;
	int32_t x786 = 3578;
	uint32_t x787 = UINT32_MAX;

    t142 = ((x785|x786)!=(x787*x788));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int32_t x789 = -1;
	static int64_t x790 = INT64_MIN;
	static uint32_t x791 = 255689U;
	int32_t x792 = INT32_MIN;

    t143 = ((x789|x790)!=(x791*x792));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x805 = 119U;
	static int8_t x808 = INT8_MIN;

    t144 = ((x805|x806)!=(x807*x808));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x809 = 1457157065632167LLU;
	int64_t x810 = INT64_MAX;
	int8_t x811 = INT8_MIN;
	uint8_t x812 = 96U;
	static volatile int32_t t145 = -36;

    t145 = ((x809|x810)!=(x811*x812));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x813 = 19261971621973LLU;
	int32_t x814 = -1;
	int8_t x815 = INT8_MAX;
	int32_t t146 = 167;

    t146 = ((x813|x814)!=(x815*x816));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x817 = 394524LL;
	int8_t x818 = -1;
	volatile int64_t x819 = 463308LL;
	int8_t x820 = INT8_MIN;

    t147 = ((x817|x818)!=(x819*x820));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x821 = -1;
	int64_t x822 = -1LL;
	int8_t x823 = INT8_MIN;
	uint8_t x824 = 1U;
	static volatile int32_t t148 = -289;

    t148 = ((x821|x822)!=(x823*x824));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x825 = -712490337270220LL;
	int16_t x827 = INT16_MAX;
	int16_t x828 = INT16_MAX;
	static volatile int32_t t149 = 10262;

    t149 = ((x825|x826)!=(x827*x828));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x829 = INT8_MAX;
	static volatile uint8_t x830 = UINT8_MAX;
	uint64_t x831 = 612431734LLU;
	volatile int32_t t150 = 2808;

    t150 = ((x829|x830)!=(x831*x832));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x837 = INT64_MIN;
	volatile int64_t x838 = -1LL;
	uint64_t x840 = UINT64_MAX;
	int32_t t151 = 7;

    t151 = ((x837|x838)!=(x839*x840));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x841 = 0;
	int16_t x842 = INT16_MAX;
	static volatile uint8_t x843 = UINT8_MAX;
	uint8_t x844 = 4U;
	volatile int32_t t152 = 51;

    t152 = ((x841|x842)!=(x843*x844));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x845 = -1;
	int32_t x846 = INT32_MIN;
	volatile int32_t x847 = 3817104;
	volatile int32_t x848 = -1;
	volatile int32_t t153 = 55;

    t153 = ((x845|x846)!=(x847*x848));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x850 = -517033118891319126LL;
	uint8_t x851 = 0U;
	int32_t x852 = 7550266;
	volatile int32_t t154 = -15;

    t154 = ((x849|x850)!=(x851*x852));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x853 = INT64_MIN;
	int16_t x854 = INT16_MIN;
	int64_t x855 = 3421653962067LL;
	static int16_t x856 = -1;
	int32_t t155 = -241;

    t155 = ((x853|x854)!=(x855*x856));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x858 = -9102399987915LL;
	volatile int16_t x859 = INT16_MIN;
	static int64_t x860 = 33197124039718LL;
	volatile int32_t t156 = 3958;

    t156 = ((x857|x858)!=(x859*x860));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x861 = UINT64_MAX;
	volatile uint8_t x862 = 7U;
	int64_t x863 = -11908814469LL;
	static int8_t x864 = INT8_MAX;
	int32_t t157 = 216470237;

    t157 = ((x861|x862)!=(x863*x864));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x873 = 37050U;
	volatile int64_t x874 = -135862LL;
	int16_t x875 = 1;
	static volatile int32_t t158 = -363;

    t158 = ((x873|x874)!=(x875*x876));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x877 = 0LL;
	int32_t x878 = INT32_MAX;
	volatile uint32_t x879 = UINT32_MAX;
	int32_t x880 = INT32_MAX;
	volatile int32_t t159 = 1840;

    t159 = ((x877|x878)!=(x879*x880));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int64_t x883 = -1LL;
	static int8_t x884 = 0;
	static int32_t t160 = -73804;

    t160 = ((x881|x882)!=(x883*x884));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x886 = -529766LL;
	int16_t x887 = INT16_MIN;
	volatile uint8_t x888 = UINT8_MAX;

    t161 = ((x885|x886)!=(x887*x888));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x889 = 15112313U;
	int64_t x890 = INT64_MIN;
	volatile int8_t x891 = INT8_MIN;
	int32_t t162 = 59259;

    t162 = ((x889|x890)!=(x891*x892));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x894 = INT32_MIN;
	static int64_t x895 = 1LL;
	static int32_t t163 = 145;

    t163 = ((x893|x894)!=(x895*x896));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x897 = 6U;
	volatile uint16_t x898 = UINT16_MAX;
	int32_t x899 = -20219;
	int64_t x900 = -32851068LL;

    t164 = ((x897|x898)!=(x899*x900));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x905 = 5U;
	static volatile int8_t x906 = INT8_MAX;
	volatile uint32_t x907 = 18354352U;
	uint8_t x908 = UINT8_MAX;

    t165 = ((x905|x906)!=(x907*x908));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x909 = INT64_MIN;
	uint32_t x911 = 28067U;
	int8_t x912 = -8;
	volatile int32_t t166 = 1747490;

    t166 = ((x909|x910)!=(x911*x912));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x914 = -56522835273447LL;
	int16_t x915 = 4;
	static int32_t x916 = -35346;
	volatile int32_t t167 = 36;

    t167 = ((x913|x914)!=(x915*x916));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x918 = -1;
	int8_t x919 = INT8_MAX;
	uint32_t x920 = 2300U;
	int32_t t168 = -753127892;

    t168 = ((x917|x918)!=(x919*x920));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x921 = -7541493;
	int16_t x922 = 1968;
	uint64_t x923 = 2374622272LLU;
	static int64_t x924 = 2289385LL;
	static volatile int32_t t169 = -51858780;

    t169 = ((x921|x922)!=(x923*x924));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x930 = 1165868520822638LL;
	int32_t x932 = -1;
	volatile int32_t t170 = -106841185;

    t170 = ((x929|x930)!=(x931*x932));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x933 = -1;
	uint32_t x936 = UINT32_MAX;
	static int32_t t171 = 35196247;

    t171 = ((x933|x934)!=(x935*x936));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x937 = 80512U;
	static volatile int8_t x938 = INT8_MIN;
	static int16_t x939 = INT16_MAX;
	int64_t x940 = -1LL;
	int32_t t172 = 0;

    t172 = ((x937|x938)!=(x939*x940));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x941 = INT32_MAX;
	uint32_t x942 = 11009U;
	uint32_t x943 = UINT32_MAX;
	uint32_t x944 = 1308441U;

    t173 = ((x941|x942)!=(x943*x944));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x945 = INT64_MIN;
	static int8_t x946 = 1;
	int64_t x947 = INT64_MIN;
	uint64_t x948 = UINT64_MAX;

    t174 = ((x945|x946)!=(x947*x948));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x949 = -1LL;
	int16_t x950 = INT16_MIN;
	static volatile int32_t x951 = -185;
	volatile int32_t x952 = -1;
	volatile int32_t t175 = -306770;

    t175 = ((x949|x950)!=(x951*x952));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x953 = -126960;
	volatile int64_t x954 = 16502964LL;
	uint16_t x955 = 7U;
	uint16_t x956 = UINT16_MAX;

    t176 = ((x953|x954)!=(x955*x956));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x961 = -1972495999143773LL;
	volatile int32_t x962 = INT32_MIN;
	uint8_t x963 = 1U;
	volatile int32_t t177 = -25;

    t177 = ((x961|x962)!=(x963*x964));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x967 = INT8_MAX;
	volatile uint64_t x968 = 22527524945LLU;
	int32_t t178 = 130227;

    t178 = ((x965|x966)!=(x967*x968));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x970 = INT16_MIN;
	uint16_t x971 = 6475U;
	int64_t x972 = 26845255LL;
	int32_t t179 = 11;

    t179 = ((x969|x970)!=(x971*x972));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x973 = 12U;
	int8_t x975 = -5;
	uint32_t x976 = UINT32_MAX;
	int32_t t180 = 55295868;

    t180 = ((x973|x974)!=(x975*x976));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x977 = INT16_MIN;
	int32_t x979 = -1;
	static int16_t x980 = INT16_MIN;
	volatile int32_t t181 = -36;

    t181 = ((x977|x978)!=(x979*x980));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x981 = UINT8_MAX;
	uint8_t x982 = 41U;
	uint64_t x983 = 273271026246719648LLU;

    t182 = ((x981|x982)!=(x983*x984));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x991 = -1;
	uint8_t x992 = 3U;
	int32_t t183 = -12390;

    t183 = ((x989|x990)!=(x991*x992));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x993 = 1194;
	int8_t x996 = INT8_MIN;
	volatile int32_t t184 = 1448;

    t184 = ((x993|x994)!=(x995*x996));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x998 = INT32_MIN;
	int16_t x999 = 4;
	int32_t t185 = 227;

    t185 = ((x997|x998)!=(x999*x1000));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x1001 = 1778757890855457849LL;
	uint32_t x1002 = UINT32_MAX;
	int64_t x1003 = -1LL;

    t186 = ((x1001|x1002)!=(x1003*x1004));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x1007 = 0U;
	volatile int32_t x1008 = INT32_MAX;

    t187 = ((x1005|x1006)!=(x1007*x1008));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int16_t x1009 = -1;
	static uint8_t x1010 = 2U;
	static uint16_t x1011 = 446U;
	int32_t x1012 = -1;

    t188 = ((x1009|x1010)!=(x1011*x1012));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x1013 = 102U;
	uint16_t x1014 = 5U;
	static int32_t x1015 = -2548656;
	uint64_t x1016 = 7516612182966LLU;
	int32_t t189 = -125230;

    t189 = ((x1013|x1014)!=(x1015*x1016));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1017 = 6771U;
	uint64_t x1018 = 5714029956270LLU;
	uint8_t x1019 = 1U;
	static int32_t x1020 = INT32_MIN;
	volatile int32_t t190 = 2001048;

    t190 = ((x1017|x1018)!=(x1019*x1020));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint8_t x1025 = UINT8_MAX;
	uint32_t x1026 = 1875843U;
	int16_t x1027 = -1;
	volatile int32_t x1028 = -1;
	volatile int32_t t191 = -130872;

    t191 = ((x1025|x1026)!=(x1027*x1028));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x1030 = 65U;
	int8_t x1031 = -1;
	int32_t t192 = -80;

    t192 = ((x1029|x1030)!=(x1031*x1032));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1033 = INT8_MIN;
	volatile int64_t x1034 = -5194418491154LL;
	int32_t x1035 = -1854;
	int32_t x1036 = -1;
	volatile int32_t t193 = 4419198;

    t193 = ((x1033|x1034)!=(x1035*x1036));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x1038 = UINT8_MAX;
	volatile uint8_t x1039 = 91U;
	uint16_t x1040 = 1U;
	volatile int32_t t194 = -13635479;

    t194 = ((x1037|x1038)!=(x1039*x1040));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1045 = 15698U;
	int16_t x1046 = -1;
	static int8_t x1047 = -1;
	int32_t x1048 = 47993;
	volatile int32_t t195 = -36173;

    t195 = ((x1045|x1046)!=(x1047*x1048));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x1053 = 12217U;
	uint32_t x1054 = 12925542U;
	static int8_t x1055 = INT8_MIN;
	int8_t x1056 = INT8_MIN;
	volatile int32_t t196 = -1664330;

    t196 = ((x1053|x1054)!=(x1055*x1056));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1057 = -12;
	volatile int64_t x1058 = INT64_MIN;
	uint16_t x1059 = UINT16_MAX;
	int32_t t197 = -19610;

    t197 = ((x1057|x1058)!=(x1059*x1060));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1061 = -1;
	int64_t x1062 = -500864010552LL;
	int8_t x1063 = 1;
	int64_t x1064 = INT64_MIN;
	static int32_t t198 = -9;

    t198 = ((x1061|x1062)!=(x1063*x1064));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1065 = INT8_MAX;
	static uint64_t x1066 = 5LLU;
	uint8_t x1068 = 1U;
	volatile int32_t t199 = 9700;

    t199 = ((x1065|x1066)!=(x1067*x1068));

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


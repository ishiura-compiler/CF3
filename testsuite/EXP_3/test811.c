
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

static int64_t x1 = 15553LL;
int32_t x2 = -1;
static uint16_t x8 = UINT16_MAX;
static int8_t x19 = INT8_MIN;
int32_t x20 = INT32_MAX;
int16_t x23 = INT16_MIN;
int32_t t4 = 110;
static int8_t x26 = INT8_MIN;
int8_t x28 = INT8_MIN;
static int8_t x29 = INT8_MIN;
static int32_t x38 = -1;
uint64_t x42 = 4884364293001974212LLU;
int8_t x46 = 30;
int8_t x48 = INT8_MIN;
volatile int64_t x53 = -127LL;
int32_t x63 = -10255759;
volatile int8_t x65 = -3;
uint8_t x78 = 46U;
int64_t x87 = INT64_MAX;
volatile int64_t t19 = -9835297646722531LL;
int64_t t22 = 36LL;
int16_t x116 = INT16_MAX;
static volatile int32_t t25 = 2;
volatile int64_t x128 = 94538507LL;
static int64_t t27 = -1958793758511423LL;
volatile uint8_t x129 = 91U;
volatile uint32_t x136 = 267577434U;
static volatile int32_t x140 = 1010736;
uint16_t x141 = 45U;
int64_t t32 = -26196LL;
static uint8_t x161 = 3U;
uint64_t x163 = 15764LLU;
volatile int64_t t35 = 0LL;
static int8_t x176 = INT8_MIN;
static int64_t x186 = -1LL;
int32_t x189 = 4151335;
int64_t x195 = INT64_MIN;
volatile int64_t t40 = -109719309389860389LL;
int64_t x197 = -1018276933LL;
int64_t t41 = -4728885LL;
int32_t x207 = INT32_MIN;
int64_t t43 = 7471228101819246LL;
uint16_t x209 = 82U;
volatile uint64_t t44 = 4456194192449LLU;
uint64_t x216 = 564363278703598317LLU;
volatile uint64_t t45 = 15921LLU;
uint16_t x219 = 2U;
volatile int16_t x220 = -1;
int8_t x226 = -1;
int8_t x234 = INT8_MAX;
int64_t t50 = -173410374400405174LL;
int32_t t52 = -4680261;
static uint8_t x259 = UINT8_MAX;
uint8_t x260 = 11U;
static volatile int32_t x264 = -16915;
int64_t x276 = 63891320344597LL;
volatile int64_t t56 = -1LL;
static uint32_t x284 = 528042U;
int32_t x295 = -78302;
volatile int64_t t60 = 19993687364264LL;
int8_t x297 = -1;
volatile int32_t t61 = 6267;
uint8_t x302 = 0U;
static volatile int64_t t64 = INT64_MAX;
static uint16_t x313 = 1U;
int32_t x318 = 0;
int16_t x323 = INT16_MIN;
volatile uint64_t x329 = UINT64_MAX;
int8_t x332 = INT8_MIN;
int64_t x339 = 559757431LL;
volatile int16_t x340 = INT16_MAX;
uint32_t x346 = UINT32_MAX;
static volatile int64_t t73 = 6642776839LL;
int32_t x357 = -1;
uint8_t x358 = 31U;
static int32_t x366 = INT32_MAX;
static volatile int64_t t77 = 28LL;
int16_t x369 = INT16_MIN;
int8_t x372 = -1;
volatile uint64_t t78 = 5359LLU;
static int64_t x373 = -1LL;
static uint64_t x376 = 1160669348LLU;
uint8_t x383 = 3U;
uint8_t x386 = UINT8_MAX;
volatile int64_t t82 = 4729999737103195LL;
volatile int16_t x398 = 1956;
static int64_t x402 = INT64_MIN;
volatile int32_t t85 = 709;
int8_t x413 = -1;
int16_t x415 = INT16_MIN;
uint16_t x420 = 1U;
static volatile uint64_t t88 = 4736469563741LLU;
uint32_t x422 = UINT32_MAX;
static volatile uint8_t x425 = 0U;
int64_t x426 = INT64_MAX;
volatile int8_t x432 = INT8_MIN;
static uint16_t x440 = 494U;
volatile int32_t x448 = -1;
int32_t x450 = -1;
int32_t x455 = INT32_MAX;
int32_t t97 = INT32_MAX;
uint16_t x460 = 443U;
uint64_t x462 = UINT64_MAX;
int16_t x470 = -10;
int32_t x484 = INT32_MIN;
static int8_t x485 = INT8_MIN;
int16_t x493 = -3152;
uint8_t x495 = UINT8_MAX;
static uint32_t t105 = 25U;
static volatile int64_t x513 = -1LL;
static int32_t x516 = INT32_MAX;
static uint16_t x529 = 403U;
volatile int64_t x541 = -50398651940269345LL;
uint8_t x559 = UINT8_MAX;
uint64_t x561 = 1064845085LLU;
uint8_t x566 = 53U;
volatile uint8_t x567 = 125U;
static volatile int32_t x571 = 1135;
uint32_t t119 = 92565U;
uint32_t x582 = UINT32_MAX;
uint32_t x592 = UINT32_MAX;
volatile uint64_t x593 = UINT64_MAX;
volatile uint64_t t124 = UINT64_MAX;
uint8_t x615 = 0U;
uint64_t t128 = 7039799302LLU;
int64_t x630 = -1LL;
volatile uint64_t x646 = 154798120LLU;
int64_t x648 = 523101538661653LL;
volatile int64_t x649 = 3421100942914444187LL;
uint64_t x666 = 28714171873149LLU;
static uint8_t x673 = 96U;
uint8_t x674 = UINT8_MAX;
static uint32_t x678 = 611016U;
uint16_t x679 = 7U;
volatile int32_t x684 = -1468115;
static uint16_t x704 = UINT16_MAX;
static int64_t x708 = -1LL;
int8_t x728 = -1;
int32_t x729 = -1851;
uint16_t x744 = 457U;
uint16_t x748 = UINT16_MAX;
static int16_t x756 = -1;
static volatile int16_t x758 = INT16_MIN;
static uint64_t x763 = 827LLU;
int16_t x764 = INT16_MIN;
int64_t x772 = INT64_MIN;
static uint16_t x783 = 0U;
uint16_t x788 = 7889U;
int16_t x789 = -309;
uint32_t x809 = 30985313U;
volatile uint32_t t171 = 23U;
int8_t x814 = 6;
volatile int16_t x829 = 51;
int32_t x834 = 838;
int64_t t176 = -66573924LL;
volatile int64_t t178 = 78650447370452509LL;
int16_t x847 = INT16_MAX;
int32_t x850 = 595979;
static volatile int64_t t180 = 1885225LL;
static volatile uint64_t t181 = 24801751LLU;
int16_t x862 = -701;
uint8_t x870 = 1U;
uint32_t x871 = UINT32_MAX;
uint32_t x872 = 1U;
uint64_t x883 = 6995424765652909679LLU;
static int8_t x886 = INT8_MIN;
int32_t x893 = 716884466;
uint16_t x901 = 1U;
static volatile int64_t t192 = -986114LL;
uint8_t x915 = 32U;
int32_t t194 = -947;
volatile int16_t x937 = -6653;
int8_t x940 = INT8_MIN;


void f0(void) {
    	int16_t x3 = -1;
	static int16_t x4 = INT16_MIN;
	volatile int64_t t0 = 30LL;

    t0 = ((x1-x2)|(x3%x4));

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	static int8_t x6 = 2;
	static int8_t x7 = INT8_MAX;
	uint32_t t1 = UINT32_MAX;

    t1 = ((x5-x6)|(x7%x8));

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	int32_t x10 = 79;
	uint64_t x11 = 32540885044052LLU;
	uint8_t x12 = UINT8_MAX;
	volatile uint64_t t2 = 6448567317455539LLU;

    t2 = ((x9-x10)|(x11%x12));

    if (t2 != 62LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = INT8_MIN;
	int32_t x18 = INT32_MIN;
	int32_t t3 = 103463;

    t3 = ((x17-x18)|(x19%x20));

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x21 = INT16_MIN;
	uint16_t x22 = 11U;
	static volatile int32_t x24 = INT32_MIN;

    t4 = ((x21-x22)|(x23%x24));

    if (t4 != -11) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = -1;
	uint64_t x27 = 5694794828492694948LLU;
	uint64_t t5 = 3191816173LLU;

    t5 = ((x25-x26)|(x27%x28));

    if (t5 != 5694794828492695039LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x30 = 8U;
	int16_t x31 = -1;
	int32_t x32 = 3;
	static volatile int32_t t6 = 1286;

    t6 = ((x29-x30)|(x31%x32));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x37 = INT8_MIN;
	uint16_t x39 = 108U;
	uint8_t x40 = 49U;
	volatile int32_t t7 = -52828;

    t7 = ((x37-x38)|(x39%x40));

    if (t7 != -117) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = 182;
	uint16_t x43 = 5U;
	int16_t x44 = INT16_MIN;
	volatile uint64_t t8 = 1127LLU;

    t8 = ((x41-x42)|(x43%x44));

    if (t8 != 13562379780707577591LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x45 = 56U;
	uint32_t x47 = 3123930U;
	volatile uint32_t t9 = 41U;

    t9 = ((x45-x46)|(x47%x48));

    if (t9 != 3123930U) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = INT32_MIN;
	uint64_t x50 = 3539256904706991LLU;
	int8_t x51 = -1;
	volatile int8_t x52 = 42;
	volatile uint64_t t10 = UINT64_MAX;

    t10 = ((x49-x50)|(x51%x52));

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t x54 = 2245228;
	int8_t x55 = 0;
	uint8_t x56 = 1U;
	volatile int64_t t11 = -933268704LL;

    t11 = ((x53-x54)|(x55%x56));

    if (t11 != -2245355LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x57 = UINT16_MAX;
	volatile int32_t x58 = -2959793;
	uint64_t x59 = 3773260LLU;
	uint64_t x60 = 66577175LLU;
	uint64_t t12 = 8218147LLU;

    t12 = ((x57-x58)|(x59%x60));

    if (t12 != 4176892LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x61 = INT8_MIN;
	int16_t x62 = INT16_MIN;
	uint64_t x64 = 2388827161LLU;
	static volatile uint64_t t13 = 11382707660815LLU;

    t13 = ((x61-x62)|(x63%x64));

    if (t13 != 1661140918LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x66 = INT8_MIN;
	volatile uint16_t x67 = 623U;
	int8_t x68 = INT8_MIN;
	int32_t t14 = 1;

    t14 = ((x65-x66)|(x67%x68));

    if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x69 = 51128991U;
	int32_t x70 = -2619472;
	uint64_t x71 = 340384467LLU;
	int32_t x72 = -1;
	uint64_t t15 = 355924325663LLU;

    t15 = ((x69-x70)|(x71%x72));

    if (t15 != 394132223LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x73 = 108880273256LLU;
	static uint64_t x74 = 332497511LLU;
	volatile int8_t x75 = INT8_MIN;
	int64_t x76 = INT64_MAX;
	volatile uint64_t t16 = 13286899077778LLU;

    t16 = ((x73-x74)|(x75%x76));

    if (t16 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x77 = 1098U;
	static uint8_t x79 = 3U;
	volatile int32_t x80 = INT32_MIN;
	static volatile uint32_t t17 = 31U;

    t17 = ((x77-x78)|(x79%x80));

    if (t17 != 1055U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x81 = INT64_MAX;
	int16_t x82 = INT16_MAX;
	uint16_t x83 = 30U;
	int64_t x84 = -69LL;
	int64_t t18 = -55783215441LL;

    t18 = ((x81-x82)|(x83%x84));

    if (t18 != 9223372036854743070LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x85 = -40302LL;
	int8_t x86 = -1;
	int8_t x88 = -1;

    t19 = ((x85-x86)|(x87%x88));

    if (t19 != -40301LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x89 = INT16_MIN;
	volatile uint16_t x90 = UINT16_MAX;
	uint32_t x91 = UINT32_MAX;
	int8_t x92 = 1;
	volatile uint32_t t20 = 66514U;

    t20 = ((x89-x90)|(x91%x92));

    if (t20 != 4294868993U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x97 = INT32_MAX;
	static int8_t x98 = INT8_MAX;
	uint64_t x99 = 11095677LLU;
	int8_t x100 = INT8_MIN;
	static volatile uint64_t t21 = 256113346245201670LLU;

    t21 = ((x97-x98)|(x99%x100));

    if (t21 != 2147483645LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x101 = 101246928;
	uint8_t x102 = UINT8_MAX;
	uint8_t x103 = 6U;
	volatile int64_t x104 = -1LL;

    t22 = ((x101-x102)|(x103%x104));

    if (t22 != 101246673LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x105 = -473489;
	int8_t x106 = INT8_MAX;
	volatile uint32_t x107 = 64376563U;
	int32_t x108 = -1;
	volatile uint32_t t23 = 816101U;

    t23 = ((x105-x106)|(x107%x108));

    if (t23 != 4294889459U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x109 = INT64_MAX;
	uint8_t x110 = 3U;
	int64_t x111 = 42605LL;
	int32_t x112 = INT32_MIN;
	static int64_t t24 = -992LL;

    t24 = ((x109-x110)|(x111%x112));

    if (t24 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x113 = 4832;
	uint16_t x114 = UINT16_MAX;
	uint16_t x115 = 741U;

    t25 = ((x113-x114)|(x115%x116));

    if (t25 != -60699) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x117 = INT64_MIN;
	volatile uint64_t x118 = 1632808981LLU;
	volatile int64_t x119 = INT64_MIN;
	volatile int32_t x120 = -358420829;
	uint64_t t26 = 324LLU;

    t26 = ((x117-x118)|(x119%x120));

    if (t26 != 18446744073692766187LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x125 = 83U;
	int16_t x126 = INT16_MIN;
	int64_t x127 = INT64_MAX;

    t27 = ((x125-x126)|(x127%x128));

    if (t27 != 68588255LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x130 = 530U;
	int16_t x131 = -1;
	uint16_t x132 = UINT16_MAX;
	static volatile int32_t t28 = -1293274;

    t28 = ((x129-x130)|(x131%x132));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x133 = UINT32_MAX;
	uint16_t x134 = 13703U;
	static int64_t x135 = INT64_MAX;
	volatile int64_t t29 = -314873LL;

    t29 = ((x133-x134)|(x135%x136));

    if (t29 != 4294967035LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x137 = 20U;
	static uint16_t x138 = 52U;
	volatile uint64_t x139 = UINT64_MAX;
	uint64_t t30 = 2467118672429314LLU;

    t30 = ((x137-x138)|(x139%x140));

    if (t30 != 4294967295LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x142 = 2009U;
	static int16_t x143 = 323;
	volatile uint16_t x144 = 1842U;
	int32_t t31 = 43216600;

    t31 = ((x141-x142)|(x143%x144));

    if (t31 != -1705) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x145 = -1;
	int8_t x146 = INT8_MIN;
	volatile uint32_t x147 = UINT32_MAX;
	int64_t x148 = INT64_MIN;

    t32 = ((x145-x146)|(x147%x148));

    if (t32 != 4294967295LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x153 = INT32_MIN;
	int64_t x154 = 2967LL;
	int32_t x155 = INT32_MIN;
	int32_t x156 = INT32_MIN;
	int64_t t33 = -408983505913LL;

    t33 = ((x153-x154)|(x155%x156));

    if (t33 != -2147486615LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x162 = -1585LL;
	static volatile uint8_t x164 = 29U;
	volatile uint64_t t34 = 1464474251282LLU;

    t34 = ((x161-x162)|(x163%x164));

    if (t34 != 1589LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x165 = -1;
	static volatile int8_t x166 = INT8_MAX;
	volatile int64_t x167 = INT64_MIN;
	static volatile uint8_t x168 = 3U;

    t35 = ((x165-x166)|(x167%x168));

    if (t35 != -2LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x173 = INT16_MIN;
	int32_t x174 = INT32_MIN;
	static int32_t x175 = INT32_MIN;
	int32_t t36 = 1066304470;

    t36 = ((x173-x174)|(x175%x176));

    if (t36 != 2147450880) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x177 = -1LL;
	uint8_t x178 = 8U;
	volatile int8_t x179 = INT8_MIN;
	uint32_t x180 = 246U;
	int64_t t37 = 103280634LL;

    t37 = ((x177-x178)|(x179%x180));

    if (t37 != -9LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x185 = 2223LLU;
	int64_t x187 = INT64_MIN;
	static volatile int64_t x188 = INT64_MIN;
	volatile uint64_t t38 = 908259208007812288LLU;

    t38 = ((x185-x186)|(x187%x188));

    if (t38 != 2224LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x190 = INT16_MIN;
	int64_t x191 = INT64_MIN;
	int16_t x192 = -1;
	volatile int64_t t39 = -42LL;

    t39 = ((x189-x190)|(x191%x192));

    if (t39 != 4184103LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x193 = -1;
	int64_t x194 = -131560013LL;
	int64_t x196 = 378LL;

    t40 = ((x193-x194)|(x195%x196));

    if (t40 != -130LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x198 = 26;
	int32_t x199 = INT32_MIN;
	volatile int8_t x200 = -38;

    t41 = ((x197-x198)|(x199%x200));

    if (t41 != -21LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x201 = INT16_MIN;
	int32_t x202 = 68;
	volatile int64_t x203 = -28796LL;
	uint16_t x204 = 3U;
	static int64_t t42 = 89433414LL;

    t42 = ((x201-x202)|(x203%x204));

    if (t42 != -2LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x205 = 11LL;
	int8_t x206 = 1;
	uint8_t x208 = UINT8_MAX;

    t43 = ((x205-x206)|(x207%x208));

    if (t43 != -118LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x210 = 578957LLU;
	int8_t x211 = INT8_MAX;
	volatile uint64_t x212 = 5LLU;

    t44 = ((x209-x210)|(x211%x212));

    if (t44 != 18446744073708972743LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x213 = 57889U;
	int32_t x214 = INT32_MIN;
	int64_t x215 = INT64_MIN;

    t45 = ((x213-x214)|(x215%x216));

    if (t45 != 193559579744727857LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x217 = INT8_MIN;
	int16_t x218 = -1;
	static volatile int32_t t46 = -27;

    t46 = ((x217-x218)|(x219%x220));

    if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x225 = INT32_MIN;
	uint16_t x227 = 1U;
	int64_t x228 = INT64_MIN;
	int64_t t47 = -158668040917343711LL;

    t47 = ((x225-x226)|(x227%x228));

    if (t47 != -2147483647LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x229 = INT16_MIN;
	int64_t x230 = -1LL;
	int16_t x231 = 4;
	static volatile uint16_t x232 = 3485U;
	int64_t t48 = 20560937614912LL;

    t48 = ((x229-x230)|(x231%x232));

    if (t48 != -32763LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x233 = -1;
	uint64_t x235 = 1527170815600LLU;
	static uint8_t x236 = 50U;
	static volatile uint64_t t49 = 15LLU;

    t49 = ((x233-x234)|(x235%x236));

    if (t49 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x237 = 3U;
	int64_t x238 = INT64_MAX;
	uint8_t x239 = 2U;
	int8_t x240 = -1;

    t50 = ((x237-x238)|(x239%x240));

    if (t50 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x245 = 37U;
	int8_t x246 = 1;
	int16_t x247 = INT16_MIN;
	static int8_t x248 = INT8_MIN;
	int32_t t51 = -7;

    t51 = ((x245-x246)|(x247%x248));

    if (t51 != 36) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x249 = INT8_MIN;
	int32_t x250 = -1;
	int32_t x251 = INT32_MIN;
	int8_t x252 = INT8_MAX;

    t52 = ((x249-x250)|(x251%x252));

    if (t52 != -7) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x253 = INT16_MIN;
	volatile uint32_t x254 = UINT32_MAX;
	static volatile int16_t x255 = INT16_MIN;
	int8_t x256 = 15;
	volatile uint32_t t53 = 507443423U;

    t53 = ((x253-x254)|(x255%x256));

    if (t53 != 4294967289U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x257 = INT16_MIN;
	uint32_t x258 = 337978U;
	uint32_t t54 = 19869548U;

    t54 = ((x257-x258)|(x259%x260));

    if (t54 != 4294596550U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x261 = -1LL;
	int16_t x262 = INT16_MAX;
	int16_t x263 = -109;
	volatile int64_t t55 = 652910862LL;

    t55 = ((x261-x262)|(x263%x264));

    if (t55 != -109LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x273 = INT64_MIN;
	static int16_t x274 = INT16_MIN;
	static int16_t x275 = -1;

    t56 = ((x273-x274)|(x275%x276));

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x281 = 1362;
	static int64_t x282 = -536773261871451LL;
	volatile int32_t x283 = -196;
	static volatile int64_t t57 = 5LL;

    t57 = ((x281-x282)|(x283%x284));

    if (t57 != 536773262274287LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x285 = INT64_MAX;
	static int32_t x286 = INT32_MAX;
	static volatile int32_t x287 = INT32_MIN;
	int32_t x288 = INT32_MIN;
	int64_t t58 = 62LL;

    t58 = ((x285-x286)|(x287%x288));

    if (t58 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x289 = INT32_MIN;
	uint64_t x290 = 4096394566635436LLU;
	int8_t x291 = INT8_MAX;
	volatile uint16_t x292 = UINT16_MAX;
	static volatile uint64_t t59 = 27613616138674545LLU;

    t59 = ((x289-x290)|(x291%x292));

    if (t59 != 18442647676995432575LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x293 = 347;
	int8_t x294 = INT8_MIN;
	static int64_t x296 = INT64_MIN;

    t60 = ((x293-x294)|(x295%x296));

    if (t60 != -77829LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x298 = 1586;
	int8_t x299 = INT8_MIN;
	int32_t x300 = INT32_MAX;

    t61 = ((x297-x298)|(x299%x300));

    if (t61 != -51) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x301 = 10U;
	uint16_t x303 = UINT16_MAX;
	int64_t x304 = 144744684562185619LL;
	static volatile int64_t t62 = 7459576045777LL;

    t62 = ((x301-x302)|(x303%x304));

    if (t62 != 65535LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x305 = INT64_MIN;
	volatile int64_t x306 = -1LL;
	uint16_t x307 = 9U;
	uint32_t x308 = 23470U;
	int64_t t63 = 110445063LL;

    t63 = ((x305-x306)|(x307%x308));

    if (t63 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x309 = INT64_MAX;
	int16_t x310 = INT16_MAX;
	uint16_t x311 = UINT16_MAX;
	int64_t x312 = INT64_MIN;

    t64 = ((x309-x310)|(x311%x312));

    if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x314 = -1;
	uint8_t x315 = 114U;
	volatile int8_t x316 = -3;
	volatile int32_t t65 = 13125;

    t65 = ((x313-x314)|(x315%x316));

    if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x317 = INT32_MIN;
	static int8_t x319 = 36;
	volatile int8_t x320 = -23;
	static int32_t t66 = -6;

    t66 = ((x317-x318)|(x319%x320));

    if (t66 != -2147483635) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x321 = UINT32_MAX;
	int8_t x322 = INT8_MIN;
	uint64_t x324 = UINT64_MAX;
	uint64_t t67 = 9840879410716LLU;

    t67 = ((x321-x322)|(x323%x324));

    if (t67 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x325 = -1;
	static uint8_t x326 = UINT8_MAX;
	static int8_t x327 = 21;
	int16_t x328 = INT16_MIN;
	volatile int32_t t68 = 14;

    t68 = ((x325-x326)|(x327%x328));

    if (t68 != -235) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x330 = INT32_MAX;
	int16_t x331 = INT16_MIN;
	uint64_t t69 = 142647231288767003LLU;

    t69 = ((x329-x330)|(x331%x332));

    if (t69 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x333 = 957173716798LLU;
	uint64_t x334 = 163LLU;
	uint16_t x335 = 14U;
	uint8_t x336 = 3U;
	volatile uint64_t t70 = 1424LLU;

    t70 = ((x333-x334)|(x335%x336));

    if (t70 != 957173716635LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x337 = INT16_MIN;
	int8_t x338 = INT8_MAX;
	static int64_t t71 = -1915935990691LL;

    t71 = ((x337-x338)|(x339%x340));

    if (t71 != -32847LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x341 = INT16_MIN;
	static int64_t x342 = INT64_MIN;
	int64_t x343 = INT64_MIN;
	int16_t x344 = INT16_MIN;
	volatile int64_t t72 = -265576913324538LL;

    t72 = ((x341-x342)|(x343%x344));

    if (t72 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x345 = 6079396LL;
	int64_t x347 = -1LL;
	int8_t x348 = 26;

    t73 = ((x345-x346)|(x347%x348));

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x349 = INT16_MIN;
	int32_t x350 = -1;
	uint32_t x351 = 0U;
	static int64_t x352 = -1LL;
	int64_t t74 = -185148468LL;

    t74 = ((x349-x350)|(x351%x352));

    if (t74 != -32767LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x359 = -36968LL;
	uint16_t x360 = 277U;
	int64_t t75 = -557757681265831599LL;

    t75 = ((x357-x358)|(x359%x360));

    if (t75 != -31LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x361 = 98;
	static int32_t x362 = -1;
	uint8_t x363 = 2U;
	int16_t x364 = -13051;
	volatile int32_t t76 = -3;

    t76 = ((x361-x362)|(x363%x364));

    if (t76 != 99) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x365 = -1;
	int16_t x367 = INT16_MIN;
	volatile int64_t x368 = -1984055475394343281LL;

    t77 = ((x365-x366)|(x367%x368));

    if (t77 != -32768LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x370 = 615349678745LLU;
	volatile int16_t x371 = INT16_MAX;

    t78 = ((x369-x370)|(x371%x372));

    if (t78 != 18446743458359840103LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x374 = INT64_MIN;
	int8_t x375 = 1;
	volatile uint64_t t79 = 8717186084192LLU;

    t79 = ((x373-x374)|(x375%x376));

    if (t79 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x381 = -38355714815990889LL;
	static int16_t x382 = INT16_MIN;
	int8_t x384 = 59;
	int64_t t80 = 81050106282079403LL;

    t80 = ((x381-x382)|(x383%x384));

    if (t80 != -38355714815958121LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x385 = 1936U;
	int8_t x387 = -3;
	static volatile uint64_t x388 = UINT64_MAX;
	uint64_t t81 = 8584763443LLU;

    t81 = ((x385-x386)|(x387%x388));

    if (t81 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x393 = 4974647656343LL;
	int32_t x394 = -1;
	int16_t x395 = -4;
	static int8_t x396 = -52;

    t82 = ((x393-x394)|(x395%x396));

    if (t82 != -4LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x397 = INT16_MAX;
	volatile uint16_t x399 = 0U;
	uint64_t x400 = UINT64_MAX;
	static volatile uint64_t t83 = 64154322206LLU;

    t83 = ((x397-x398)|(x399%x400));

    if (t83 != 30811LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x401 = -1;
	int8_t x403 = INT8_MIN;
	int16_t x404 = 1;
	int64_t t84 = INT64_MAX;

    t84 = ((x401-x402)|(x403%x404));

    if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x405 = -7;
	volatile uint8_t x406 = 4U;
	int8_t x407 = INT8_MIN;
	int8_t x408 = INT8_MIN;

    t85 = ((x405-x406)|(x407%x408));

    if (t85 != -11) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x409 = INT8_MIN;
	uint16_t x410 = 717U;
	int8_t x411 = INT8_MIN;
	int16_t x412 = -1;
	volatile int32_t t86 = 0;

    t86 = ((x409-x410)|(x411%x412));

    if (t86 != -845) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x414 = INT8_MAX;
	uint64_t x416 = 312LLU;
	volatile uint64_t t87 = 247889LLU;

    t87 = ((x413-x414)|(x415%x416));

    if (t87 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x417 = INT32_MIN;
	uint32_t x418 = 3U;
	volatile uint64_t x419 = 8202252505743903LLU;

    t88 = ((x417-x418)|(x419%x420));

    if (t88 != 2147483645LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x421 = INT16_MIN;
	uint16_t x423 = 41U;
	int64_t x424 = -2977634522880LL;
	int64_t t89 = -113LL;

    t89 = ((x421-x422)|(x423%x424));

    if (t89 != 4294934569LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x427 = INT16_MIN;
	int8_t x428 = INT8_MIN;
	volatile int64_t t90 = 1235561052008478009LL;

    t90 = ((x425-x426)|(x427%x428));

    if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x429 = INT8_MIN;
	uint32_t x430 = 749748869U;
	static int16_t x431 = -1;
	volatile uint32_t t91 = UINT32_MAX;

    t91 = ((x429-x430)|(x431%x432));

    if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x433 = INT32_MIN;
	static uint32_t x434 = 31U;
	int8_t x435 = 0;
	static int8_t x436 = INT8_MIN;
	volatile uint32_t t92 = 539682U;

    t92 = ((x433-x434)|(x435%x436));

    if (t92 != 2147483617U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x437 = 0U;
	int64_t x438 = -240451992740723LL;
	uint8_t x439 = 0U;
	volatile int64_t t93 = 4463LL;

    t93 = ((x437-x438)|(x439%x440));

    if (t93 != 240451992740723LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x441 = -200266;
	static uint64_t x442 = 0LLU;
	int64_t x443 = INT64_MIN;
	int16_t x444 = INT16_MIN;
	uint64_t t94 = 6719283849LLU;

    t94 = ((x441-x442)|(x443%x444));

    if (t94 != 18446744073709351350LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x445 = UINT32_MAX;
	static uint32_t x446 = 398255U;
	uint16_t x447 = 56U;
	static uint32_t t95 = 4U;

    t95 = ((x445-x446)|(x447%x448));

    if (t95 != 4294569040U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x449 = 46U;
	volatile int64_t x451 = INT64_MIN;
	int32_t x452 = INT32_MIN;
	volatile int64_t t96 = 4240406LL;

    t96 = ((x449-x450)|(x451%x452));

    if (t96 != 47LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x453 = INT32_MAX;
	uint8_t x454 = 0U;
	int8_t x456 = -17;

    t97 = ((x453-x454)|(x455%x456));

    if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x457 = INT16_MIN;
	uint8_t x458 = UINT8_MAX;
	volatile int8_t x459 = INT8_MAX;
	int32_t t98 = -510178103;

    t98 = ((x457-x458)|(x459%x460));

    if (t98 != -32897) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x461 = 39740925U;
	int64_t x463 = 635710676316218LL;
	static uint8_t x464 = UINT8_MAX;
	static volatile uint64_t t99 = 47526566041786930LLU;

    t99 = ((x461-x462)|(x463%x464));

    if (t99 != 39740927LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x465 = 0U;
	int32_t x466 = -1;
	int32_t x467 = 3;
	static int16_t x468 = INT16_MAX;
	static int32_t t100 = 488763016;

    t100 = ((x465-x466)|(x467%x468));

    if (t100 != 3) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x469 = 10144LLU;
	volatile int32_t x471 = INT32_MIN;
	volatile int16_t x472 = -1;
	uint64_t t101 = 3848581LLU;

    t101 = ((x469-x470)|(x471%x472));

    if (t101 != 10154LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x481 = 38668961483434LLU;
	int8_t x482 = INT8_MIN;
	volatile int64_t x483 = INT64_MIN;
	uint64_t t102 = 0LLU;

    t102 = ((x481-x482)|(x483%x484));

    if (t102 != 38668961483562LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x486 = UINT64_MAX;
	uint32_t x487 = 61035141U;
	static uint8_t x488 = UINT8_MAX;
	uint64_t t103 = UINT64_MAX;

    t103 = ((x485-x486)|(x487%x488));

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x494 = INT32_MIN;
	static uint8_t x496 = UINT8_MAX;
	int32_t t104 = 2261;

    t104 = ((x493-x494)|(x495%x496));

    if (t104 != 2147480496) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x501 = 30;
	int32_t x502 = -2326368;
	uint32_t x503 = 112U;
	int8_t x504 = -1;

    t105 = ((x501-x502)|(x503%x504));

    if (t105 != 2326398U) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x505 = INT32_MIN;
	static int8_t x506 = INT8_MIN;
	int32_t x507 = INT32_MAX;
	static int64_t x508 = -1LL;
	volatile int64_t t106 = -853LL;

    t106 = ((x505-x506)|(x507%x508));

    if (t106 != -2147483520LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x509 = 64;
	static volatile uint16_t x510 = UINT16_MAX;
	volatile int32_t x511 = INT32_MAX;
	static int8_t x512 = -1;
	volatile int32_t t107 = -315;

    t107 = ((x509-x510)|(x511%x512));

    if (t107 != -65471) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x514 = 22;
	uint64_t x515 = UINT64_MAX;
	volatile uint64_t t108 = 62625899606LLU;

    t108 = ((x513-x514)|(x515%x516));

    if (t108 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x517 = 242313494U;
	static int8_t x518 = 15;
	static int16_t x519 = -45;
	volatile int32_t x520 = 1;
	uint32_t t109 = 6313U;

    t109 = ((x517-x518)|(x519%x520));

    if (t109 != 242313479U) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int16_t x525 = -1;
	volatile int8_t x526 = 13;
	uint8_t x527 = UINT8_MAX;
	uint8_t x528 = 2U;
	int32_t t110 = 1121117;

    t110 = ((x525-x526)|(x527%x528));

    if (t110 != -13) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x530 = INT16_MIN;
	static uint32_t x531 = 43076913U;
	volatile uint32_t x532 = 1739254U;
	uint32_t t111 = 1462335686U;

    t111 = ((x529-x530)|(x531%x532));

    if (t111 != 1367987U) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x537 = INT64_MIN;
	int8_t x538 = INT8_MIN;
	uint16_t x539 = 1645U;
	int16_t x540 = INT16_MIN;
	volatile int64_t t112 = -2079865247923LL;

    t112 = ((x537-x538)|(x539%x540));

    if (t112 != -9223372036854774035LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x542 = 1LL;
	uint16_t x543 = 5U;
	int64_t x544 = 86414794885117626LL;
	int64_t t113 = 108LL;

    t113 = ((x541-x542)|(x543%x544));

    if (t113 != -50398651940269345LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x549 = INT8_MIN;
	int64_t x550 = INT64_MIN;
	volatile uint32_t x551 = 12840131U;
	int32_t x552 = -122564;
	int64_t t114 = -7364LL;

    t114 = ((x549-x550)|(x551%x552));

    if (t114 != 9223372036854775747LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x553 = -1;
	static int8_t x554 = 35;
	uint32_t x555 = UINT32_MAX;
	int64_t x556 = INT64_MIN;
	volatile int64_t t115 = 1131355658302693LL;

    t115 = ((x553-x554)|(x555%x556));

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x557 = UINT64_MAX;
	int64_t x558 = INT64_MIN;
	int16_t x560 = 847;
	volatile uint64_t t116 = 2031336LLU;

    t116 = ((x557-x558)|(x559%x560));

    if (t116 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x562 = 2118U;
	volatile uint16_t x563 = 37U;
	static int32_t x564 = 6997007;
	volatile uint64_t t117 = 1262496962730607LLU;

    t117 = ((x561-x562)|(x563%x564));

    if (t117 != 1064842999LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x565 = -6157LL;
	int16_t x568 = -1;
	int64_t t118 = 180246LL;

    t118 = ((x565-x566)|(x567%x568));

    if (t118 != -6210LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x569 = 462U;
	volatile uint16_t x570 = 969U;
	uint32_t x572 = 4U;

    t119 = ((x569-x570)|(x571%x572));

    if (t119 != 4294966791U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x573 = 184656595U;
	static uint64_t x574 = 83656507634LLU;
	uint16_t x575 = UINT16_MAX;
	int32_t x576 = INT32_MAX;
	static volatile uint64_t t120 = 1703292155304320LLU;

    t120 = ((x573-x574)|(x575%x576));

    if (t120 != 18446743990237724671LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x581 = INT8_MIN;
	uint16_t x583 = 4U;
	int64_t x584 = INT64_MIN;
	volatile int64_t t121 = -3265LL;

    t121 = ((x581-x582)|(x583%x584));

    if (t121 != 4294967173LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x585 = 322879LLU;
	static int16_t x586 = INT16_MAX;
	int8_t x587 = -1;
	static uint64_t x588 = 6731LLU;
	static uint64_t t122 = 165182483633LLU;

    t122 = ((x585-x586)|(x587%x588));

    if (t122 != 294232LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x589 = 328U;
	volatile uint16_t x590 = 20565U;
	static volatile int8_t x591 = -1;
	static volatile uint32_t t123 = 35606361U;

    t123 = ((x589-x590)|(x591%x592));

    if (t123 != 4294947059U) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x594 = -890850930;
	int16_t x595 = -1;
	uint16_t x596 = 89U;

    t124 = ((x593-x594)|(x595%x596));

    if (t124 != UINT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint64_t x597 = 36LLU;
	int16_t x598 = INT16_MAX;
	static uint8_t x599 = UINT8_MAX;
	volatile int16_t x600 = INT16_MIN;
	volatile uint64_t t125 = 3231284831653798561LLU;

    t125 = ((x597-x598)|(x599%x600));

    if (t125 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x601 = INT16_MAX;
	uint8_t x602 = 29U;
	static volatile int64_t x603 = -35312326754477LL;
	int8_t x604 = INT8_MAX;
	volatile int64_t t126 = -409LL;

    t126 = ((x601-x602)|(x603%x604));

    if (t126 != -17LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x605 = INT16_MIN;
	int16_t x606 = INT16_MAX;
	int16_t x607 = INT16_MIN;
	uint32_t x608 = 3278928U;
	static uint32_t t127 = 1229384477U;

    t127 = ((x605-x606)|(x607%x608));

    if (t127 != 4294967025U) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x613 = 26;
	volatile uint64_t x614 = 2242301114536175118LLU;
	int32_t x616 = INT32_MAX;

    t128 = ((x613-x614)|(x615%x616));

    if (t128 != 16204442959173376524LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x617 = UINT64_MAX;
	volatile int8_t x618 = -1;
	int16_t x619 = 249;
	uint64_t x620 = 76058LLU;
	uint64_t t129 = 6103596LLU;

    t129 = ((x617-x618)|(x619%x620));

    if (t129 != 249LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x621 = UINT64_MAX;
	int8_t x622 = INT8_MIN;
	uint64_t x623 = 2048252LLU;
	volatile uint16_t x624 = UINT16_MAX;
	volatile uint64_t t130 = 199534285767836612LLU;

    t130 = ((x621-x622)|(x623%x624));

    if (t130 != 16767LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x625 = -1;
	int64_t x626 = INT64_MIN;
	uint32_t x627 = 2U;
	uint64_t x628 = 837715400490LLU;
	volatile uint64_t t131 = 0LLU;

    t131 = ((x625-x626)|(x627%x628));

    if (t131 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x629 = UINT8_MAX;
	uint16_t x631 = UINT16_MAX;
	static uint64_t x632 = UINT64_MAX;
	volatile uint64_t t132 = 1504475LLU;

    t132 = ((x629-x630)|(x631%x632));

    if (t132 != 65535LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x633 = INT16_MIN;
	int64_t x634 = INT64_MIN;
	int32_t x635 = INT32_MIN;
	int64_t x636 = INT64_MIN;
	int64_t t133 = -651249873374027832LL;

    t133 = ((x633-x634)|(x635%x636));

    if (t133 != -32768LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x637 = 107;
	int32_t x638 = -1;
	int16_t x639 = 56;
	int64_t x640 = -9787426796LL;
	int64_t t134 = 19167065LL;

    t134 = ((x637-x638)|(x639%x640));

    if (t134 != 124LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x641 = INT8_MAX;
	volatile uint16_t x642 = UINT16_MAX;
	uint8_t x643 = 123U;
	int32_t x644 = 38241008;
	int32_t t135 = -1821;

    t135 = ((x641-x642)|(x643%x644));

    if (t135 != -65285) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x645 = INT8_MAX;
	volatile int16_t x647 = INT16_MAX;
	volatile uint64_t t136 = 2380602846099049LLU;

    t136 = ((x645-x646)|(x647%x648));

    if (t136 != 18446744073554755583LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x650 = 0U;
	volatile int16_t x651 = -1;
	int8_t x652 = INT8_MIN;
	int64_t t137 = 5005861434955721LL;

    t137 = ((x649-x650)|(x651%x652));

    if (t137 != -1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int64_t x657 = INT64_MIN;
	static int8_t x658 = INT8_MIN;
	volatile uint32_t x659 = UINT32_MAX;
	int64_t x660 = INT64_MIN;
	volatile int64_t t138 = 24204LL;

    t138 = ((x657-x658)|(x659%x660));

    if (t138 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x661 = 56U;
	static uint64_t x662 = 1146LLU;
	static int16_t x663 = INT16_MIN;
	int16_t x664 = 93;
	uint64_t t139 = 358661LLU;

    t139 = ((x661-x662)|(x663%x664));

    if (t139 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x665 = INT16_MIN;
	static int16_t x667 = INT16_MIN;
	static int32_t x668 = INT32_MAX;
	uint64_t t140 = 9LLU;

    t140 = ((x665-x666)|(x667%x668));

    if (t140 != 18446744073709537411LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x675 = 1264U;
	uint32_t x676 = UINT32_MAX;
	volatile uint32_t t141 = 561093829U;

    t141 = ((x673-x674)|(x675%x676));

    if (t141 != 4294967281U) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x677 = -1974LL;
	int64_t x680 = INT64_MIN;
	int64_t t142 = 222375045765730085LL;

    t142 = ((x677-x678)|(x679%x680));

    if (t142 != -612985LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x681 = -4161247838529803LL;
	int16_t x682 = -1;
	int32_t x683 = INT32_MIN;
	static int64_t t143 = -442457399001028LL;

    t143 = ((x681-x682)|(x683%x684));

    if (t143 != -1097738LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x689 = UINT8_MAX;
	int8_t x690 = INT8_MIN;
	uint64_t x691 = 329106LLU;
	uint64_t x692 = 179252LLU;
	static uint64_t t144 = 2579LLU;

    t144 = ((x689-x690)|(x691%x692));

    if (t144 != 149887LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x693 = INT16_MIN;
	volatile int32_t x694 = -1;
	static volatile int16_t x695 = -27;
	int32_t x696 = 806713;
	volatile int32_t t145 = 544524711;

    t145 = ((x693-x694)|(x695%x696));

    if (t145 != -27) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x697 = -867709LL;
	volatile int64_t x698 = INT64_MIN;
	uint32_t x699 = 7009499U;
	uint8_t x700 = UINT8_MAX;
	static volatile int64_t t146 = 2LL;

    t146 = ((x697-x698)|(x699%x700));

    if (t146 != 9223372036853908155LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x701 = INT32_MAX;
	uint8_t x702 = 14U;
	int32_t x703 = INT32_MIN;
	int32_t t147 = 234355;

    t147 = ((x701-x702)|(x703%x704));

    if (t147 != -15) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x705 = 339U;
	int64_t x706 = -1LL;
	static volatile int32_t x707 = INT32_MAX;
	volatile int64_t t148 = 785LL;

    t148 = ((x705-x706)|(x707%x708));

    if (t148 != 340LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x709 = INT8_MIN;
	int64_t x710 = -1LL;
	volatile int32_t x711 = INT32_MIN;
	int32_t x712 = INT32_MAX;
	int64_t t149 = 682LL;

    t149 = ((x709-x710)|(x711%x712));

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int16_t x713 = -833;
	static int32_t x714 = -1;
	static int32_t x715 = INT32_MAX;
	int32_t x716 = INT32_MAX;
	int32_t t150 = 177;

    t150 = ((x713-x714)|(x715%x716));

    if (t150 != -832) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x717 = 819935U;
	volatile uint32_t x718 = UINT32_MAX;
	int16_t x719 = -1;
	int8_t x720 = INT8_MIN;
	static volatile uint32_t t151 = UINT32_MAX;

    t151 = ((x717-x718)|(x719%x720));

    if (t151 != UINT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x725 = INT8_MIN;
	int16_t x726 = -5958;
	volatile int32_t x727 = INT32_MAX;
	static int32_t t152 = -30;

    t152 = ((x725-x726)|(x727%x728));

    if (t152 != 5830) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x730 = 16271521;
	int64_t x731 = INT64_MIN;
	int16_t x732 = -1;
	int64_t t153 = -16203LL;

    t153 = ((x729-x730)|(x731%x732));

    if (t153 != -16273372LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x733 = -1;
	int8_t x734 = INT8_MAX;
	int32_t x735 = 345;
	int32_t x736 = -1;
	int32_t t154 = -53941;

    t154 = ((x733-x734)|(x735%x736));

    if (t154 != -128) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x737 = -1;
	int32_t x738 = -1;
	int64_t x739 = INT64_MAX;
	int16_t x740 = INT16_MAX;
	int64_t t155 = -52919377563566LL;

    t155 = ((x737-x738)|(x739%x740));

    if (t155 != 7LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x741 = INT64_MIN;
	uint64_t x742 = 1867LLU;
	volatile int32_t x743 = INT32_MIN;
	uint64_t t156 = 195641461455241688LLU;

    t156 = ((x741-x742)|(x743%x744));

    if (t156 != 18446744073709551349LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x745 = INT16_MIN;
	int8_t x746 = INT8_MIN;
	uint16_t x747 = 26280U;
	static volatile int32_t t157 = 1;

    t157 = ((x745-x746)|(x747%x748));

    if (t157 != -6488) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x749 = 4460832U;
	int64_t x750 = -2331780501LL;
	volatile uint32_t x751 = 888377U;
	static uint8_t x752 = 3U;
	int64_t t158 = -22742096266485498LL;

    t158 = ((x749-x750)|(x751%x752));

    if (t158 != 2336241335LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x753 = INT16_MAX;
	volatile int8_t x754 = INT8_MAX;
	int8_t x755 = INT8_MIN;
	int32_t t159 = -94707482;

    t159 = ((x753-x754)|(x755%x756));

    if (t159 != 32640) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x757 = 9540LLU;
	static int64_t x759 = -128442722244931585LL;
	static int16_t x760 = -86;
	volatile uint64_t t160 = 1285938143297621242LLU;

    t160 = ((x757-x758)|(x759%x760));

    if (t160 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x761 = UINT8_MAX;
	int8_t x762 = INT8_MIN;
	uint64_t t161 = 24LLU;

    t161 = ((x761-x762)|(x763%x764));

    if (t161 != 895LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x769 = 3168U;
	int8_t x770 = INT8_MAX;
	volatile uint8_t x771 = UINT8_MAX;
	static volatile int64_t t162 = 3416LL;

    t162 = ((x769-x770)|(x771%x772));

    if (t162 != 3071LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x773 = 264078921466672LLU;
	static int64_t x774 = 129435414225LL;
	int16_t x775 = -1;
	uint64_t x776 = UINT64_MAX;
	uint64_t t163 = 28912445762130LLU;

    t163 = ((x773-x774)|(x775%x776));

    if (t163 != 263949486052447LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x777 = 103715459LL;
	static uint16_t x778 = 2967U;
	int8_t x779 = 60;
	uint16_t x780 = 39U;
	int64_t t164 = 879326474311LL;

    t164 = ((x777-x778)|(x779%x780));

    if (t164 != 103712509LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint64_t x781 = 1705986837LLU;
	static int32_t x782 = 23189332;
	volatile int8_t x784 = -46;
	volatile uint64_t t165 = 976552796LLU;

    t165 = ((x781-x782)|(x783%x784));

    if (t165 != 1682797505LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x785 = UINT64_MAX;
	int8_t x786 = INT8_MIN;
	int32_t x787 = INT32_MIN;
	volatile uint64_t t166 = 75LLU;

    t166 = ((x785-x786)|(x787%x788));

    if (t166 != 18446744073709548543LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x790 = -1LL;
	int8_t x791 = -1;
	int16_t x792 = INT16_MAX;
	int64_t t167 = 683354823325880213LL;

    t167 = ((x789-x790)|(x791%x792));

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x793 = INT32_MIN;
	static int16_t x794 = -1514;
	uint16_t x795 = 23462U;
	uint16_t x796 = 410U;
	int32_t t168 = -475973544;

    t168 = ((x793-x794)|(x795%x796));

    if (t168 != -2147482114) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x797 = INT16_MIN;
	uint64_t x798 = 78824466268LLU;
	uint8_t x799 = UINT8_MAX;
	static uint32_t x800 = 183503211U;
	static volatile uint64_t t169 = 3382362399646521LLU;

    t169 = ((x797-x798)|(x799%x800));

    if (t169 != 18446743994885052671LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x801 = -1;
	uint16_t x802 = 82U;
	static volatile uint16_t x803 = 43U;
	uint8_t x804 = 35U;
	volatile int32_t t170 = 7358;

    t170 = ((x801-x802)|(x803%x804));

    if (t170 != -83) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x810 = UINT32_MAX;
	int16_t x811 = INT16_MIN;
	int32_t x812 = INT32_MAX;

    t171 = ((x809-x810)|(x811%x812));

    if (t171 != 4294954082U) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x813 = 32U;
	int32_t x815 = -1;
	int8_t x816 = -1;
	static volatile int32_t t172 = -107;

    t172 = ((x813-x814)|(x815%x816));

    if (t172 != 26) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x817 = 1LLU;
	int16_t x818 = 0;
	int16_t x819 = INT16_MIN;
	int16_t x820 = 26;
	uint64_t t173 = 118175309189LLU;

    t173 = ((x817-x818)|(x819%x820));

    if (t173 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x821 = -1LL;
	volatile int32_t x822 = INT32_MIN;
	int64_t x823 = -1LL;
	volatile int32_t x824 = INT32_MAX;
	volatile int64_t t174 = 34275306431972487LL;

    t174 = ((x821-x822)|(x823%x824));

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x830 = INT16_MIN;
	static int8_t x831 = -3;
	int32_t x832 = -65990685;
	int32_t t175 = -48;

    t175 = ((x829-x830)|(x831%x832));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x833 = 30U;
	int32_t x835 = -1;
	int64_t x836 = -1LL;

    t176 = ((x833-x834)|(x835%x836));

    if (t176 != -808LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x837 = -1;
	int8_t x838 = -1;
	volatile int64_t x839 = INT64_MIN;
	volatile int16_t x840 = INT16_MAX;
	static volatile int64_t t177 = 64LL;

    t177 = ((x837-x838)|(x839%x840));

    if (t177 != -8LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x841 = 50U;
	static volatile int64_t x842 = INT64_MAX;
	volatile int16_t x843 = INT16_MAX;
	volatile uint16_t x844 = 60U;

    t178 = ((x841-x842)|(x843%x844));

    if (t178 != -9223372036854775753LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x845 = 12254U;
	int16_t x846 = 0;
	static uint8_t x848 = UINT8_MAX;
	volatile int32_t t179 = -27837;

    t179 = ((x845-x846)|(x847%x848));

    if (t179 != 12287) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x849 = INT64_MAX;
	static int64_t x851 = INT64_MIN;
	int32_t x852 = INT32_MAX;

    t180 = ((x849-x850)|(x851%x852));

    if (t180 != -2LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x853 = 229803U;
	volatile int16_t x854 = 1;
	int8_t x855 = 1;
	static uint64_t x856 = 7LLU;

    t181 = ((x853-x854)|(x855%x856));

    if (t181 != 229803LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x857 = INT64_MIN;
	uint64_t x858 = 64884783455513110LLU;
	int32_t x859 = -6;
	static int16_t x860 = -1;
	volatile uint64_t t182 = 163LLU;

    t182 = ((x857-x858)|(x859%x860));

    if (t182 != 9158487253399262698LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x861 = 8;
	int32_t x863 = INT32_MAX;
	int16_t x864 = -253;
	static volatile int32_t t183 = 1893515;

    t183 = ((x861-x862)|(x863%x864));

    if (t183 != 743) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x865 = -1;
	static uint32_t x866 = 422U;
	uint8_t x867 = 99U;
	uint64_t x868 = 236254375483126LLU;
	static uint64_t t184 = 40468855896LLU;

    t184 = ((x865-x866)|(x867%x868));

    if (t184 != 4294966907LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x869 = 666LLU;
	uint64_t t185 = 26121073579374687LLU;

    t185 = ((x869-x870)|(x871%x872));

    if (t185 != 665LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x873 = 41247689848766LLU;
	int32_t x874 = INT32_MIN;
	volatile uint8_t x875 = 0U;
	uint16_t x876 = UINT16_MAX;
	uint64_t t186 = 19625695LLU;

    t186 = ((x873-x874)|(x875%x876));

    if (t186 != 41249837332414LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x877 = 2739762U;
	uint32_t x878 = 1330U;
	int16_t x879 = 19;
	uint8_t x880 = 1U;
	static volatile uint32_t t187 = 30011543U;

    t187 = ((x877-x878)|(x879%x880));

    if (t187 != 2738432U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x881 = INT16_MAX;
	static uint64_t x882 = 5578485153818LLU;
	volatile int8_t x884 = INT8_MAX;
	uint64_t t188 = 131346615188399614LLU;

    t188 = ((x881-x882)|(x883%x884));

    if (t188 != 18446738495224430583LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint16_t x885 = UINT16_MAX;
	static int64_t x887 = -96842584LL;
	int32_t x888 = 11660648;
	volatile int64_t t189 = -2379288928621809058LL;

    t189 = ((x885-x886)|(x887%x888));

    if (t189 != -3557377LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x894 = 11844;
	int8_t x895 = -1;
	volatile int8_t x896 = -54;
	static int32_t t190 = 38379190;

    t190 = ((x893-x894)|(x895%x896));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x902 = 11056;
	volatile int8_t x903 = INT8_MAX;
	int64_t x904 = -16742923LL;
	int64_t t191 = -4065LL;

    t191 = ((x901-x902)|(x903%x904));

    if (t191 != -11009LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x905 = 184U;
	int32_t x906 = INT32_MIN;
	uint32_t x907 = 168U;
	static int64_t x908 = INT64_MIN;

    t192 = ((x905-x906)|(x907%x908));

    if (t192 != 2147483832LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x913 = INT32_MAX;
	static uint32_t x914 = 20230206U;
	int8_t x916 = INT8_MAX;
	volatile uint32_t t193 = 1669U;

    t193 = ((x913-x914)|(x915%x916));

    if (t193 != 2127253473U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x917 = UINT8_MAX;
	volatile uint8_t x918 = 14U;
	volatile int16_t x919 = -1;
	static volatile int32_t x920 = INT32_MAX;

    t194 = ((x917-x918)|(x919%x920));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint32_t x921 = UINT32_MAX;
	int16_t x922 = -1;
	int8_t x923 = 1;
	int16_t x924 = -1;
	volatile uint32_t t195 = 4764U;

    t195 = ((x921-x922)|(x923%x924));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int16_t x925 = INT16_MIN;
	int16_t x926 = 426;
	volatile uint64_t x927 = 22901967LLU;
	static uint8_t x928 = UINT8_MAX;
	uint64_t t196 = 25375808LLU;

    t196 = ((x925-x926)|(x927%x928));

    if (t196 != 18446744073709518582LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x929 = -1;
	int16_t x930 = INT16_MIN;
	uint32_t x931 = 704377428U;
	volatile uint8_t x932 = 35U;
	volatile uint32_t t197 = 171745U;

    t197 = ((x929-x930)|(x931%x932));

    if (t197 != 32767U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x933 = INT32_MAX;
	int8_t x934 = INT8_MAX;
	int32_t x935 = INT32_MIN;
	uint32_t x936 = UINT32_MAX;
	uint32_t t198 = 9659U;

    t198 = ((x933-x934)|(x935%x936));

    if (t198 != 4294967168U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x938 = -1;
	int32_t x939 = -1;
	int32_t t199 = -42151151;

    t199 = ((x937-x938)|(x939%x940));

    if (t199 != -1) { NG(); } else { ; }
	
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



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

uint64_t x4 = UINT64_MAX;
int8_t x11 = INT8_MIN;
volatile int32_t x21 = 322657;
static volatile uint64_t x23 = UINT64_MAX;
static uint16_t x33 = 1U;
volatile int16_t x34 = INT16_MIN;
int64_t x36 = 12072LL;
int64_t x37 = INT64_MIN;
uint16_t x41 = UINT16_MAX;
int32_t x50 = 0;
static uint32_t x51 = 1U;
int32_t x52 = INT32_MIN;
volatile uint32_t t10 = 0U;
static uint16_t x54 = UINT16_MAX;
uint8_t x58 = 40U;
int8_t x61 = 52;
int64_t x65 = 104388041LL;
int32_t x70 = INT32_MIN;
uint16_t x78 = UINT16_MAX;
int16_t x86 = -195;
static volatile int8_t x95 = INT8_MIN;
uint8_t x108 = 15U;
int32_t x110 = -1;
int8_t x111 = -1;
uint16_t x126 = UINT16_MAX;
int16_t x130 = INT16_MIN;
int8_t x131 = INT8_MIN;
uint32_t x147 = UINT32_MAX;
int8_t x151 = INT8_MIN;
volatile int32_t t29 = 21558;
int64_t x154 = INT64_MIN;
int64_t x158 = INT64_MIN;
int8_t x160 = INT8_MIN;
int64_t t32 = -7694551575002LL;
int16_t x167 = 65;
volatile uint16_t x168 = UINT16_MAX;
static int64_t x189 = INT64_MIN;
volatile int16_t x190 = 818;
uint8_t x195 = UINT8_MAX;
volatile int16_t x203 = 3563;
int64_t t41 = 216773LL;
uint32_t x220 = 31198U;
static uint16_t x223 = 1U;
uint32_t t44 = 26265992U;
uint64_t x226 = UINT64_MAX;
uint16_t x227 = UINT16_MAX;
static uint8_t x237 = UINT8_MAX;
volatile int16_t x246 = 8;
volatile uint16_t x247 = 3914U;
int64_t t48 = 2289215967LL;
static int8_t x250 = INT8_MIN;
int16_t x265 = 141;
static int32_t x282 = -59;
int16_t x286 = -4249;
static uint32_t x287 = 8149U;
static int64_t x305 = INT64_MIN;
uint64_t x317 = 1301LLU;
static uint64_t x330 = UINT64_MAX;
int16_t x331 = 1;
volatile uint64_t t65 = 0LLU;
int64_t x350 = INT64_MAX;
uint32_t x353 = UINT32_MAX;
int16_t x354 = INT16_MAX;
uint64_t x359 = 5707941066232027667LLU;
uint32_t x371 = UINT32_MAX;
int16_t x380 = -1;
int8_t x386 = INT8_MIN;
uint64_t t77 = 13400490LLU;
int8_t x399 = INT8_MAX;
volatile int32_t t78 = -3843534;
static uint64_t x401 = 1020808414634LLU;
int32_t x402 = INT32_MAX;
volatile int64_t x409 = -1LL;
int16_t x412 = -1;
uint16_t x420 = 179U;
uint32_t x432 = 1207497U;
int32_t t85 = -2;
volatile int64_t t87 = -3905203950285364LL;
int16_t x456 = 0;
volatile uint32_t x458 = UINT32_MAX;
int8_t x467 = -6;
static int64_t t91 = -183LL;
volatile int16_t x470 = INT16_MIN;
int8_t x483 = 3;
int64_t x493 = INT64_MAX;
static volatile int32_t x494 = -1020;
volatile uint64_t x501 = 1033044461LLU;
static int64_t t100 = -14405946LL;
int32_t x509 = INT32_MAX;
static volatile uint8_t x511 = 1U;
static int8_t x519 = 1;
int64_t x522 = INT64_MIN;
static volatile uint32_t t105 = 21947104U;
volatile uint32_t x539 = 768524U;
uint32_t t109 = 244663982U;
int8_t x550 = -1;
int64_t x563 = -10899499LL;
int8_t x567 = 1;
volatile uint32_t t113 = 6605499U;
int8_t x572 = 10;
static volatile uint64_t t114 = 2708488641LLU;
uint64_t t116 = 500003167LLU;
int8_t x585 = 2;
uint32_t x587 = 55U;
uint16_t x591 = 22U;
uint8_t x596 = 0U;
int16_t x602 = 1700;
static uint64_t x606 = 350447645LLU;
volatile int16_t x608 = INT16_MIN;
uint16_t x614 = 3U;
volatile int64_t x625 = 5235263697168LL;
static volatile int64_t t124 = -140LL;
uint8_t x639 = UINT8_MAX;
uint64_t x640 = 3109105100LLU;
volatile uint64_t t126 = 0LLU;
uint64_t x643 = UINT64_MAX;
int64_t x645 = -2883469449LL;
int32_t x654 = -7906425;
volatile int64_t t130 = 1007868955020LL;
uint8_t x660 = 1U;
static int64_t x663 = -1LL;
uint64_t x673 = 111489495175LLU;
static int16_t x682 = INT16_MIN;
static volatile uint8_t x683 = 5U;
volatile int64_t t134 = 538559299LL;
uint16_t x695 = UINT16_MAX;
int64_t t138 = 2206962410LL;
int64_t t139 = -391LL;
volatile int32_t t141 = -7461041;
int16_t x715 = -1;
int16_t x717 = -1465;
volatile int64_t x726 = 40773907138092465LL;
uint64_t x734 = 3376803LLU;
static uint64_t x737 = 16LLU;
volatile uint32_t x746 = 9129656U;
volatile int32_t x757 = INT32_MIN;
int64_t x758 = INT64_MAX;
uint64_t x759 = 109817608011LLU;
static int32_t x762 = -1;
int64_t x775 = -1LL;
static volatile int64_t t153 = -1389503986706779958LL;
int32_t x782 = INT32_MIN;
uint8_t x797 = 7U;
int32_t x799 = 11745;
static int8_t x802 = -1;
int16_t x807 = -44;
int16_t x830 = -1;
int64_t x833 = -1LL;
uint8_t x837 = 39U;
int64_t x855 = 15908412LL;
int32_t x857 = -444674787;
uint8_t x868 = 13U;
int64_t t171 = 47LL;
int32_t x877 = INT32_MIN;
volatile int8_t x878 = INT8_MAX;
int16_t x881 = INT16_MAX;
int64_t x883 = -1LL;
static int64_t x888 = -1LL;
static int64_t x896 = -1LL;
volatile int64_t t176 = 0LL;
int32_t x906 = -14;
int8_t x908 = -1;
int32_t t178 = -12;
uint16_t x910 = 149U;
int8_t x912 = 0;
int64_t x917 = -1LL;
static int16_t x935 = -10565;
int32_t x940 = -18284;
uint32_t x945 = UINT32_MAX;
volatile int32_t x946 = INT32_MIN;
uint8_t x947 = UINT8_MAX;
uint32_t x953 = 236650U;
int8_t x954 = INT8_MIN;
int64_t t189 = 6659LL;
uint64_t x969 = UINT64_MAX;
int16_t x972 = 2;
int32_t x982 = INT32_MAX;
volatile uint32_t x987 = 52414983U;
static int16_t x988 = INT16_MAX;
uint16_t x989 = UINT16_MAX;
int32_t x992 = 35426;
static uint64_t t195 = 62619LLU;
static int64_t x1007 = -1LL;
int8_t x1008 = -3;
static int16_t x1014 = 3998;
volatile int8_t x1018 = INT8_MIN;
int8_t x1020 = 11;
volatile int32_t t199 = 3732086;


void f0(void) {
    	static volatile int8_t x1 = INT8_MIN;
	static uint8_t x2 = 55U;
	int64_t x3 = INT64_MIN;
	uint64_t t0 = 1687787155869592991LLU;

    t0 = ((x1|x2)&(x3*x4));

    if (t0 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x9 = 508180U;
	static volatile int16_t x10 = INT16_MIN;
	volatile uint64_t x12 = UINT64_MAX;
	uint64_t t1 = 1716224987LLU;

    t1 = ((x9|x10)&(x11*x12));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -159;
	uint64_t x14 = 1672025LLU;
	static uint32_t x15 = UINT32_MAX;
	static volatile int8_t x16 = -1;
	uint64_t t2 = 19096LLU;

    t2 = ((x13|x14)&(x15*x16));

    if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = INT64_MIN;
	uint64_t x18 = UINT64_MAX;
	uint16_t x19 = UINT16_MAX;
	int8_t x20 = INT8_MAX;
	static volatile uint64_t t3 = 27691894LLU;

    t3 = ((x17|x18)&(x19*x20));

    if (t3 != 8322945LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x22 = UINT64_MAX;
	volatile uint32_t x24 = UINT32_MAX;
	volatile uint64_t t4 = 287305174159281LLU;

    t4 = ((x21|x22)&(x23*x24));

    if (t4 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x29 = INT8_MAX;
	int64_t x30 = 1640LL;
	int8_t x31 = 15;
	static volatile int64_t x32 = -1LL;
	volatile int64_t t5 = 57LL;

    t5 = ((x29|x30)&(x31*x32));

    if (t5 != 1649LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x35 = 0LL;
	static int64_t t6 = -1338121111036410266LL;

    t6 = ((x33|x34)&(x35*x36));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x38 = UINT64_MAX;
	volatile uint64_t x39 = UINT64_MAX;
	int16_t x40 = INT16_MIN;
	uint64_t t7 = 61LLU;

    t7 = ((x37|x38)&(x39*x40));

    if (t7 != 32768LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x42 = -426;
	volatile int8_t x43 = INT8_MIN;
	uint32_t x44 = 1U;
	volatile uint32_t t8 = 24133U;

    t8 = ((x41|x42)&(x43*x44));

    if (t8 != 4294967168U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x45 = 250969313;
	int16_t x46 = INT16_MAX;
	int64_t x47 = -1LL;
	int16_t x48 = -1;
	int64_t t9 = -68849466682155300LL;

    t9 = ((x45|x46)&(x47*x48));

    if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = INT32_MIN;

    t10 = ((x49|x50)&(x51*x52));

    if (t10 != 2147483648U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x53 = -1;
	static int32_t x55 = 24784;
	int16_t x56 = INT16_MIN;
	int32_t t11 = 642964;

    t11 = ((x53|x54)&(x55*x56));

    if (t11 != -812122112) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x57 = INT16_MIN;
	uint32_t x59 = 666U;
	static int64_t x60 = -256038LL;
	volatile int64_t t12 = -18363577821482LL;

    t12 = ((x57|x58)&(x59*x60));

    if (t12 != -170524640LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x62 = -45;
	int16_t x63 = -1;
	int64_t x64 = INT64_MAX;
	int64_t t13 = -8767385216LL;

    t13 = ((x61|x62)&(x63*x64));

    if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x66 = -10597530LL;
	int8_t x67 = 0;
	int16_t x68 = INT16_MIN;
	volatile int64_t t14 = 4LL;

    t14 = ((x65|x66)&(x67*x68));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x69 = 0;
	int16_t x71 = INT16_MIN;
	int8_t x72 = -1;
	volatile int32_t t15 = 1971960;

    t15 = ((x69|x70)&(x71*x72));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x77 = INT16_MIN;
	uint8_t x79 = UINT8_MAX;
	volatile uint8_t x80 = UINT8_MAX;
	volatile int32_t t16 = 22863170;

    t16 = ((x77|x78)&(x79*x80));

    if (t16 != 65025) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x81 = INT16_MAX;
	volatile uint16_t x82 = 1U;
	uint32_t x83 = UINT32_MAX;
	static volatile uint64_t x84 = UINT64_MAX;
	uint64_t t17 = 785497751952458LLU;

    t17 = ((x81|x82)&(x83*x84));

    if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint16_t x85 = UINT16_MAX;
	int64_t x87 = 365180178552187LL;
	uint8_t x88 = 98U;
	int64_t t18 = 14621LL;

    t18 = ((x85|x86)&(x87*x88));

    if (t18 != 35787657498114326LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x89 = INT8_MAX;
	int64_t x90 = 0LL;
	int32_t x91 = -1;
	int16_t x92 = 496;
	int64_t t19 = 511907611236LL;

    t19 = ((x89|x90)&(x91*x92));

    if (t19 != 16LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x93 = INT64_MIN;
	int16_t x94 = INT16_MAX;
	uint32_t x96 = UINT32_MAX;
	int64_t t20 = -1913851563LL;

    t20 = ((x93|x94)&(x95*x96));

    if (t20 != 128LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x105 = 1359885U;
	static int16_t x106 = INT16_MIN;
	int8_t x107 = INT8_MIN;
	volatile uint32_t t21 = 468049U;

    t21 = ((x105|x106)&(x107*x108));

    if (t21 != 4294950912U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x109 = 31U;
	static int16_t x112 = INT16_MIN;
	int32_t t22 = 62236;

    t22 = ((x109|x110)&(x111*x112));

    if (t22 != 32768) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x113 = INT64_MAX;
	int64_t x114 = INT64_MIN;
	int8_t x115 = INT8_MIN;
	volatile uint64_t x116 = 245187084260LLU;
	uint64_t t23 = 8328023448778LLU;

    t23 = ((x113|x114)&(x115*x116));

    if (t23 != 18446712689762766336LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x125 = 215U;
	int16_t x127 = INT16_MIN;
	int8_t x128 = -1;
	volatile uint32_t t24 = 925427U;

    t24 = ((x125|x126)&(x127*x128));

    if (t24 != 32768U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x129 = UINT8_MAX;
	uint32_t x132 = UINT32_MAX;
	volatile uint32_t t25 = 1614657403U;

    t25 = ((x129|x130)&(x131*x132));

    if (t25 != 128U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x137 = 0;
	static int8_t x138 = INT8_MIN;
	int8_t x139 = INT8_MIN;
	int32_t x140 = -1;
	int32_t t26 = -149992197;

    t26 = ((x137|x138)&(x139*x140));

    if (t26 != 128) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x141 = UINT8_MAX;
	int16_t x142 = 3;
	int32_t x143 = -1;
	int32_t x144 = 8;
	volatile int32_t t27 = 4172;

    t27 = ((x141|x142)&(x143*x144));

    if (t27 != 248) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x145 = 32LLU;
	int8_t x146 = 0;
	static int8_t x148 = -1;
	volatile uint64_t t28 = 13111209762LLU;

    t28 = ((x145|x146)&(x147*x148));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x149 = -13;
	int8_t x150 = -1;
	uint8_t x152 = UINT8_MAX;

    t29 = ((x149|x150)&(x151*x152));

    if (t29 != -32640) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x153 = -1;
	static int16_t x155 = INT16_MAX;
	uint16_t x156 = 26U;
	volatile int64_t t30 = -834500131596LL;

    t30 = ((x153|x154)&(x155*x156));

    if (t30 != 851942LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x157 = 40339U;
	uint32_t x159 = UINT32_MAX;
	static volatile int64_t t31 = -196133127329218LL;

    t31 = ((x157|x158)&(x159*x160));

    if (t31 != 128LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x161 = 0LL;
	uint32_t x162 = UINT32_MAX;
	int32_t x163 = 2;
	volatile uint32_t x164 = UINT32_MAX;

    t32 = ((x161|x162)&(x163*x164));

    if (t32 != 4294967294LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x165 = -3399325LL;
	int8_t x166 = -1;
	volatile int64_t t33 = -74320LL;

    t33 = ((x165|x166)&(x167*x168));

    if (t33 != 4259775LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x173 = INT32_MIN;
	int32_t x174 = INT32_MAX;
	uint64_t x175 = UINT64_MAX;
	int16_t x176 = INT16_MIN;
	uint64_t t34 = 6205LLU;

    t34 = ((x173|x174)&(x175*x176));

    if (t34 != 32768LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x181 = -3;
	uint8_t x182 = 9U;
	volatile int32_t x183 = INT32_MAX;
	int64_t x184 = 1092LL;
	volatile int64_t t35 = -2175009928086129LL;

    t35 = ((x181|x182)&(x183*x184));

    if (t35 != 2345052142524LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x191 = UINT64_MAX;
	uint32_t x192 = 213U;
	uint64_t t36 = 384LLU;

    t36 = ((x189|x190)&(x191*x192));

    if (t36 != 9223372036854776610LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x193 = 16U;
	int32_t x194 = -1;
	static uint16_t x196 = UINT16_MAX;
	int32_t t37 = 1;

    t37 = ((x193|x194)&(x195*x196));

    if (t37 != 16711425) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x197 = INT64_MIN;
	int16_t x198 = -1;
	uint16_t x199 = 15U;
	static int16_t x200 = INT16_MIN;
	volatile int64_t t38 = -2517982LL;

    t38 = ((x197|x198)&(x199*x200));

    if (t38 != -491520LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x201 = UINT32_MAX;
	int8_t x202 = INT8_MIN;
	volatile int64_t x204 = 505902200LL;
	static int64_t t39 = -45154406388LL;

    t39 = ((x201|x202)&(x203*x204));

    if (t39 != 2938241576LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x205 = -24;
	volatile uint64_t x206 = 463572391245680931LLU;
	int8_t x207 = INT8_MIN;
	volatile int32_t x208 = -1;
	volatile uint64_t t40 = 302426585857077LLU;

    t40 = ((x205|x206)&(x207*x208));

    if (t40 != 128LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x209 = 868LL;
	static int8_t x210 = INT8_MIN;
	uint16_t x211 = 25U;
	int64_t x212 = 3302052891389LL;

    t41 = ((x209|x210)&(x211*x212));

    if (t41 != 82551322284708LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x213 = 395616852694LL;
	uint64_t x214 = 694041318LLU;
	static int16_t x215 = 18;
	int32_t x216 = -16646769;
	uint64_t t42 = 1762059860030LLU;

    t42 = ((x213|x214)&(x215*x216));

    if (t42 != 395875323910LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x217 = -1;
	volatile uint32_t x218 = UINT32_MAX;
	int32_t x219 = INT32_MAX;
	static uint32_t t43 = 82044U;

    t43 = ((x217|x218)&(x219*x220));

    if (t43 != 4294936098U) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint32_t x221 = UINT32_MAX;
	int8_t x222 = -1;
	int32_t x224 = INT32_MIN;

    t44 = ((x221|x222)&(x223*x224));

    if (t44 != 2147483648U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x225 = 367U;
	static int8_t x228 = -1;
	uint64_t t45 = 2349074LLU;

    t45 = ((x225|x226)&(x227*x228));

    if (t45 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x229 = 3490458709911LLU;
	int64_t x230 = 292375811235098002LL;
	static volatile uint8_t x231 = 1U;
	int16_t x232 = INT16_MIN;
	uint64_t t46 = 60417LLU;

    t46 = ((x229|x230)&(x231*x232));

    if (t46 != 292377102645035008LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x238 = 1U;
	static uint8_t x239 = UINT8_MAX;
	int16_t x240 = INT16_MIN;
	volatile int32_t t47 = -2;

    t47 = ((x237|x238)&(x239*x240));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x245 = -25;
	static volatile int64_t x248 = -1LL;

    t48 = ((x245|x246)&(x247*x248));

    if (t48 != -3930LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x249 = -51;
	volatile int16_t x251 = -2911;
	int32_t x252 = -1;
	int32_t t49 = 188137;

    t49 = ((x249|x250)&(x251*x252));

    if (t49 != 2893) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x253 = 21906140U;
	static int16_t x254 = INT16_MIN;
	volatile uint32_t x255 = 22795855U;
	volatile int32_t x256 = -1;
	volatile uint32_t t50 = 7503544U;

    t50 = ((x253|x254)&(x255*x256));

    if (t50 != 4272160912U) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x261 = INT16_MAX;
	int16_t x262 = -1;
	volatile int8_t x263 = -1;
	int64_t x264 = 1LL;
	static int64_t t51 = -6091237LL;

    t51 = ((x261|x262)&(x263*x264));

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x266 = INT8_MIN;
	static volatile int16_t x267 = -6;
	static int8_t x268 = -1;
	volatile int32_t t52 = 14;

    t52 = ((x265|x266)&(x267*x268));

    if (t52 != 4) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x273 = 517255830825024LLU;
	int32_t x274 = INT32_MIN;
	int8_t x275 = -1;
	int32_t x276 = 996809;
	static uint64_t t53 = 1015158957284963LLU;

    t53 = ((x273|x274)&(x275*x276));

    if (t53 != 18446744071595673600LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x277 = 2134;
	uint64_t x278 = 0LLU;
	volatile int8_t x279 = -1;
	uint64_t x280 = 14701146814LLU;
	volatile uint64_t t54 = 2938704921985510764LLU;

    t54 = ((x277|x278)&(x279*x280));

    if (t54 != 2114LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x281 = 0LLU;
	static int8_t x283 = -14;
	uint32_t x284 = 91578148U;
	uint64_t t55 = 181487LLU;

    t55 = ((x281|x282)&(x283*x284));

    if (t55 != 3012873216LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x285 = INT64_MIN;
	int32_t x288 = 401383;
	int64_t t56 = 177444926568LL;

    t56 = ((x285|x286)&(x287*x288));

    if (t56 != 3270870051LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x293 = 13U;
	uint16_t x294 = UINT16_MAX;
	uint16_t x295 = UINT16_MAX;
	int16_t x296 = -1;
	static int32_t t57 = -81917849;

    t57 = ((x293|x294)&(x295*x296));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x297 = INT8_MAX;
	uint32_t x298 = UINT32_MAX;
	uint8_t x299 = 122U;
	volatile int16_t x300 = INT16_MIN;
	volatile uint32_t t58 = 535534U;

    t58 = ((x297|x298)&(x299*x300));

    if (t58 != 4290969600U) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x301 = 35;
	static int16_t x302 = 778;
	static int64_t x303 = -678LL;
	static uint64_t x304 = UINT64_MAX;
	uint64_t t59 = 0LLU;

    t59 = ((x301|x302)&(x303*x304));

    if (t59 != 546LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x306 = 26U;
	volatile uint16_t x307 = UINT16_MAX;
	int16_t x308 = -1;
	static int64_t t60 = INT64_MIN;

    t60 = ((x305|x306)&(x307*x308));

    if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x318 = INT8_MAX;
	int16_t x319 = 1161;
	static uint8_t x320 = 51U;
	uint64_t t61 = 14760138LLU;

    t61 = ((x317|x318)&(x319*x320));

    if (t61 != 1355LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x321 = INT64_MAX;
	int64_t x322 = INT64_MIN;
	int32_t x323 = -1;
	volatile int8_t x324 = INT8_MAX;
	static volatile int64_t t62 = 23LL;

    t62 = ((x321|x322)&(x323*x324));

    if (t62 != -127LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x325 = -1;
	uint16_t x326 = 0U;
	int32_t x327 = -15;
	int64_t x328 = -1LL;
	int64_t t63 = 2633332965660728LL;

    t63 = ((x325|x326)&(x327*x328));

    if (t63 != 15LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint8_t x329 = 115U;
	static int8_t x332 = -1;
	volatile uint64_t t64 = UINT64_MAX;

    t64 = ((x329|x330)&(x331*x332));

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x333 = -1;
	volatile uint64_t x334 = 986255720230LLU;
	int32_t x335 = -74660;
	int8_t x336 = 16;

    t65 = ((x333|x334)&(x335*x336));

    if (t65 != 18446744073708357056LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x341 = UINT8_MAX;
	volatile int32_t x342 = 890;
	int8_t x343 = -6;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t66 = -121;

    t66 = ((x341|x342)&(x343*x344));

    if (t66 != 518) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x345 = 1;
	static int16_t x346 = INT16_MIN;
	int16_t x347 = INT16_MAX;
	static uint16_t x348 = UINT16_MAX;
	int32_t t67 = 439239;

    t67 = ((x345|x346)&(x347*x348));

    if (t67 != 2147385345) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x349 = 633;
	uint32_t x351 = UINT32_MAX;
	static int16_t x352 = INT16_MIN;
	int64_t t68 = -1042037953LL;

    t68 = ((x349|x350)&(x351*x352));

    if (t68 != 32768LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x355 = 1U;
	int8_t x356 = -7;
	uint32_t t69 = 0U;

    t69 = ((x353|x354)&(x355*x356));

    if (t69 != 4294967289U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x357 = INT8_MIN;
	int8_t x358 = INT8_MIN;
	volatile int64_t x360 = INT64_MIN;
	static volatile uint64_t t70 = 0LLU;

    t70 = ((x357|x358)&(x359*x360));

    if (t70 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x365 = -53236401;
	int32_t x366 = 7405290;
	int16_t x367 = INT16_MIN;
	uint32_t x368 = UINT32_MAX;
	volatile uint32_t t71 = 13290U;

    t71 = ((x365|x366)&(x367*x368));

    if (t71 != 32768U) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x369 = -1LL;
	uint8_t x370 = 113U;
	int16_t x372 = INT16_MAX;
	int64_t t72 = -799559414545271791LL;

    t72 = ((x369|x370)&(x371*x372));

    if (t72 != 4294934529LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x373 = -1LL;
	int32_t x374 = -19654;
	volatile int32_t x375 = INT32_MIN;
	uint8_t x376 = 1U;
	volatile int64_t t73 = -335686854473LL;

    t73 = ((x373|x374)&(x375*x376));

    if (t73 != -2147483648LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x377 = INT16_MIN;
	volatile int8_t x378 = 0;
	volatile int16_t x379 = 1;
	static int32_t t74 = -235;

    t74 = ((x377|x378)&(x379*x380));

    if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x385 = INT64_MIN;
	volatile int16_t x387 = -1;
	int32_t x388 = -69052;
	int64_t t75 = 2197212907787459673LL;

    t75 = ((x385|x386)&(x387*x388));

    if (t75 != 68992LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x389 = UINT32_MAX;
	uint64_t x390 = 1LLU;
	int64_t x391 = -377550429LL;
	int32_t x392 = INT32_MAX;
	volatile uint64_t t76 = 59731LLU;

    t76 = ((x389|x390)&(x391*x392));

    if (t76 != 2525034077LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x393 = 298964801021LLU;
	int8_t x394 = INT8_MAX;
	int8_t x395 = -1;
	int16_t x396 = 1;

    t77 = ((x393|x394)&(x395*x396));

    if (t77 != 298964801023LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x397 = 100U;
	uint8_t x398 = 2U;
	static int8_t x400 = INT8_MIN;

    t78 = ((x397|x398)&(x399*x400));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x403 = INT8_MAX;
	int64_t x404 = -3082780167817LL;
	uint64_t t79 = 4125023006389510LLU;

    t79 = ((x401|x402)&(x403*x404));

    if (t79 != 1003979868681LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x410 = INT32_MIN;
	int16_t x411 = -1;
	volatile int64_t t80 = 30235242041921776LL;

    t80 = ((x409|x410)&(x411*x412));

    if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x413 = INT16_MIN;
	uint16_t x414 = UINT16_MAX;
	int8_t x415 = INT8_MIN;
	uint16_t x416 = 15149U;
	volatile int32_t t81 = 1;

    t81 = ((x413|x414)&(x415*x416));

    if (t81 != -1939072) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x417 = -1LL;
	uint64_t x418 = UINT64_MAX;
	int16_t x419 = 1;
	volatile uint64_t t82 = 442856399LLU;

    t82 = ((x417|x418)&(x419*x420));

    if (t82 != 179LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x425 = INT8_MAX;
	volatile int8_t x426 = -1;
	volatile int8_t x427 = INT8_MIN;
	int64_t x428 = -1LL;
	volatile int64_t t83 = 280LL;

    t83 = ((x425|x426)&(x427*x428));

    if (t83 != 128LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x429 = -117;
	static int8_t x430 = -5;
	int64_t x431 = 4930321LL;
	static int64_t t84 = -48692434LL;

    t84 = ((x429|x430)&(x431*x432));

    if (t84 != 5953347816537LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x433 = -1;
	int32_t x434 = -1;
	uint8_t x435 = UINT8_MAX;
	uint8_t x436 = 9U;

    t85 = ((x433|x434)&(x435*x436));

    if (t85 != 2295) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x437 = -1;
	static volatile int32_t x438 = -24;
	static int8_t x439 = INT8_MAX;
	static int16_t x440 = INT16_MIN;
	int32_t t86 = -282667017;

    t86 = ((x437|x438)&(x439*x440));

    if (t86 != -4161536) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x441 = INT32_MIN;
	uint32_t x442 = UINT32_MAX;
	int64_t x443 = 88949142LL;
	int32_t x444 = INT32_MAX;

    t87 = ((x441|x442)&(x443*x444));

    if (t87 != 4206018154LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x449 = UINT32_MAX;
	static uint8_t x450 = 2U;
	static uint8_t x451 = 28U;
	int16_t x452 = INT16_MIN;
	uint32_t t88 = 284818U;

    t88 = ((x449|x450)&(x451*x452));

    if (t88 != 4294049792U) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x453 = 3922588466LL;
	int8_t x454 = INT8_MAX;
	static int16_t x455 = INT16_MAX;
	volatile int64_t t89 = 32048594912LL;

    t89 = ((x453|x454)&(x455*x456));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x457 = 1028622142U;
	volatile uint32_t x459 = 250255U;
	uint32_t x460 = UINT32_MAX;
	volatile uint32_t t90 = 2721077U;

    t90 = ((x457|x458)&(x459*x460));

    if (t90 != 4294717041U) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x465 = -7;
	volatile int64_t x466 = INT64_MIN;
	volatile uint8_t x468 = UINT8_MAX;

    t91 = ((x465|x466)&(x467*x468));

    if (t91 != -1536LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x469 = INT16_MIN;
	int16_t x471 = -1;
	volatile uint8_t x472 = 30U;
	int32_t t92 = -710874197;

    t92 = ((x469|x470)&(x471*x472));

    if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int32_t x473 = INT32_MIN;
	static uint8_t x474 = 1U;
	int16_t x475 = -1;
	volatile int8_t x476 = INT8_MAX;
	volatile int32_t t93 = -68721392;

    t93 = ((x473|x474)&(x475*x476));

    if (t93 != -2147483647) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x477 = 29637905LL;
	static volatile int32_t x478 = -1;
	int64_t x479 = -190LL;
	uint64_t x480 = 2444101869319LLU;
	static volatile uint64_t t94 = 12219929857LLU;

    t94 = ((x477|x478)&(x479*x480));

    if (t94 != 18446279694354381006LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x481 = -1;
	int32_t x482 = 98740593;
	int8_t x484 = 0;
	static int32_t t95 = -40;

    t95 = ((x481|x482)&(x483*x484));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x485 = 28U;
	static int32_t x486 = -106665;
	int16_t x487 = INT16_MIN;
	int32_t x488 = -1;
	int32_t t96 = -1995;

    t96 = ((x485|x486)&(x487*x488));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x489 = 96U;
	volatile int32_t x490 = 33;
	int32_t x491 = INT32_MAX;
	uint8_t x492 = 0U;
	static volatile int32_t t97 = -78472;

    t97 = ((x489|x490)&(x491*x492));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x495 = INT64_MAX;
	int8_t x496 = -1;
	int64_t t98 = -69LL;

    t98 = ((x493|x494)&(x495*x496));

    if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x502 = 2U;
	uint64_t x503 = 4138234LLU;
	static int64_t x504 = -1LL;
	volatile uint64_t t99 = 1828129209LLU;

    t99 = ((x501|x502)&(x503*x504));

    if (t99 != 1031799046LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x505 = 0U;
	static int64_t x506 = INT64_MIN;
	volatile int16_t x507 = 1444;
	volatile int16_t x508 = INT16_MAX;

    t100 = ((x505|x506)&(x507*x508));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x510 = UINT8_MAX;
	uint16_t x512 = 1035U;
	volatile int32_t t101 = 466;

    t101 = ((x509|x510)&(x511*x512));

    if (t101 != 1035) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x513 = -1;
	uint64_t x514 = 0LLU;
	volatile uint16_t x515 = 23206U;
	int8_t x516 = INT8_MIN;
	uint64_t t102 = 16673791561717132LLU;

    t102 = ((x513|x514)&(x515*x516));

    if (t102 != 18446744073706581248LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x517 = INT8_MIN;
	static int8_t x518 = -24;
	uint8_t x520 = 0U;
	volatile int32_t t103 = 112;

    t103 = ((x517|x518)&(x519*x520));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x521 = -1;
	volatile int16_t x523 = -1;
	uint8_t x524 = UINT8_MAX;
	int64_t t104 = -538395232555LL;

    t104 = ((x521|x522)&(x523*x524));

    if (t104 != -255LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x525 = INT8_MIN;
	int32_t x526 = -1;
	int8_t x527 = INT8_MIN;
	uint32_t x528 = 132599611U;

    t105 = ((x525|x526)&(x527*x528));

    if (t105 != 207118976U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x529 = -4;
	uint8_t x530 = 6U;
	int8_t x531 = -1;
	int16_t x532 = INT16_MAX;
	static int32_t t106 = -2984;

    t106 = ((x529|x530)&(x531*x532));

    if (t106 != -32768) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x533 = INT32_MAX;
	uint8_t x534 = 30U;
	uint32_t x535 = 74561U;
	int8_t x536 = INT8_MAX;
	static volatile uint32_t t107 = 1827U;

    t107 = ((x533|x534)&(x535*x536));

    if (t107 != 9469247U) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x537 = INT64_MIN;
	int16_t x538 = 5;
	volatile int8_t x540 = INT8_MIN;
	volatile int64_t t108 = 7917560651LL;

    t108 = ((x537|x538)&(x539*x540));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x541 = 680U;
	uint32_t x542 = 26U;
	volatile int16_t x543 = -1;
	int16_t x544 = INT16_MIN;

    t109 = ((x541|x542)&(x543*x544));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x549 = INT16_MIN;
	uint32_t x551 = 493805784U;
	static uint64_t x552 = UINT64_MAX;
	uint64_t t110 = 22LLU;

    t110 = ((x549|x550)&(x551*x552));

    if (t110 != 18446744073215745832LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x557 = 367845206;
	int64_t x558 = 3160LL;
	int32_t x559 = INT32_MIN;
	volatile int32_t x560 = 1;
	int64_t t111 = 130456185LL;

    t111 = ((x557|x558)&(x559*x560));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint8_t x561 = 3U;
	uint32_t x562 = UINT32_MAX;
	static int8_t x564 = INT8_MIN;
	volatile int64_t t112 = 5754LL;

    t112 = ((x561|x562)&(x563*x564));

    if (t112 != 1395135872LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x565 = -83172;
	volatile uint32_t x566 = UINT32_MAX;
	int32_t x568 = INT32_MAX;

    t113 = ((x565|x566)&(x567*x568));

    if (t113 != 2147483647U) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x569 = INT64_MAX;
	uint64_t x570 = UINT64_MAX;
	int8_t x571 = INT8_MAX;

    t114 = ((x569|x570)&(x571*x572));

    if (t114 != 1270LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x573 = INT8_MIN;
	static uint32_t x574 = UINT32_MAX;
	uint64_t x575 = UINT64_MAX;
	static int16_t x576 = -1;
	static volatile uint64_t t115 = 215LLU;

    t115 = ((x573|x574)&(x575*x576));

    if (t115 != 1LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x581 = 29U;
	uint64_t x582 = 24359273LLU;
	uint16_t x583 = 954U;
	uint16_t x584 = UINT16_MAX;

    t116 = ((x581|x582)&(x583*x584));

    if (t116 != 20033604LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x586 = -1;
	int8_t x588 = -1;
	volatile uint32_t t117 = 607760390U;

    t117 = ((x585|x586)&(x587*x588));

    if (t117 != 4294967241U) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x589 = -15;
	int16_t x590 = INT16_MIN;
	volatile int8_t x592 = INT8_MAX;
	volatile int32_t t118 = 0;

    t118 = ((x589|x590)&(x591*x592));

    if (t118 != 2784) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x593 = INT32_MIN;
	static int64_t x594 = INT64_MIN;
	uint64_t x595 = 20692LLU;
	uint64_t t119 = 8904773572794LLU;

    t119 = ((x593|x594)&(x595*x596));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x601 = INT16_MIN;
	int64_t x603 = -1LL;
	volatile uint8_t x604 = 28U;
	int64_t t120 = -283941LL;

    t120 = ((x601|x602)&(x603*x604));

    if (t120 != -31068LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x605 = INT32_MIN;
	volatile int8_t x607 = INT8_MIN;
	uint64_t t121 = 9511690800350478LLU;

    t121 = ((x605|x606)&(x607*x608));

    if (t121 != 4194304LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x609 = -480650124;
	static uint16_t x610 = UINT16_MAX;
	static int16_t x611 = 3751;
	uint16_t x612 = 357U;
	volatile int32_t t122 = 49546151;

    t122 = ((x609|x610)&(x611*x612));

    if (t122 != 1076963) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x613 = UINT64_MAX;
	static int8_t x615 = INT8_MAX;
	int32_t x616 = -401107;
	volatile uint64_t t123 = 124186LLU;

    t123 = ((x613|x614)&(x615*x616));

    if (t123 != 18446744073658611027LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x626 = INT64_MIN;
	int8_t x627 = INT8_MAX;
	int16_t x628 = -1;

    t124 = ((x625|x626)&(x627*x628));

    if (t124 != -9223366801591078656LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x629 = 11U;
	uint32_t x630 = UINT32_MAX;
	uint32_t x631 = 1030018U;
	uint32_t x632 = 305350U;
	static volatile uint32_t t125 = 30374037U;

    t125 = ((x629|x630)&(x631*x632));

    if (t125 != 983383692U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x637 = -1;
	int16_t x638 = 3;

    t126 = ((x637|x638)&(x639*x640));

    if (t126 != 792821800500LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x641 = INT16_MIN;
	int32_t x642 = -1;
	static int16_t x644 = -4;
	static uint64_t t127 = 88LLU;

    t127 = ((x641|x642)&(x643*x644));

    if (t127 != 4LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x646 = -27;
	int64_t x647 = -1LL;
	volatile uint64_t x648 = 3127126864845LLU;
	volatile uint64_t t128 = 17956822LLU;

    t128 = ((x645|x646)&(x647*x648));

    if (t128 != 18446740946582686771LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x649 = 25U;
	volatile int32_t x650 = -78353385;
	int16_t x651 = INT16_MIN;
	int32_t x652 = -1;
	volatile int32_t t129 = 4074;

    t129 = ((x649|x650)&(x651*x652));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x653 = 17;
	int64_t x655 = 6LL;
	uint8_t x656 = 71U;

    t130 = ((x653|x654)&(x655*x656));

    if (t130 != 386LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x657 = -1LL;
	int64_t x658 = INT64_MAX;
	static int64_t x659 = 1594686220200586648LL;
	int64_t t131 = 50738754LL;

    t131 = ((x657|x658)&(x659*x660));

    if (t131 != 1594686220200586648LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x661 = INT16_MAX;
	int64_t x662 = -23LL;
	static int32_t x664 = INT32_MIN;
	volatile int64_t t132 = -228221947237LL;

    t132 = ((x661|x662)&(x663*x664));

    if (t132 != 2147483648LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x674 = 22;
	static volatile int8_t x675 = INT8_MIN;
	int32_t x676 = 3716;
	volatile uint64_t t133 = 90230423LLU;

    t133 = ((x673|x674)&(x675*x676));

    if (t133 != 111489363968LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x681 = INT64_MIN;
	static int32_t x684 = -212;

    t134 = ((x681|x682)&(x683*x684));

    if (t134 != -32768LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int32_t x685 = INT32_MIN;
	uint64_t x686 = UINT64_MAX;
	static int16_t x687 = 331;
	uint64_t x688 = 670406673LLU;
	uint64_t t135 = 2316116173602837511LLU;

    t135 = ((x685|x686)&(x687*x688));

    if (t135 != 221904608763LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x689 = -44991;
	volatile uint32_t x690 = UINT32_MAX;
	uint8_t x691 = 0U;
	int64_t x692 = -114074149250488986LL;
	volatile int64_t t136 = -200069811075067LL;

    t136 = ((x689|x690)&(x691*x692));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x693 = INT32_MIN;
	int64_t x694 = INT64_MIN;
	volatile int8_t x696 = INT8_MIN;
	int64_t t137 = -1544600237779812983LL;

    t137 = ((x693|x694)&(x695*x696));

    if (t137 != -2147483648LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x697 = 495896U;
	volatile int16_t x698 = INT16_MIN;
	volatile uint8_t x699 = 3U;
	int64_t x700 = -223997090099702980LL;

    t138 = ((x697|x698)&(x699*x700));

    if (t138 != 27791632LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x701 = INT64_MIN;
	static int8_t x702 = -1;
	uint8_t x703 = 42U;
	int8_t x704 = 0;

    t139 = ((x701|x702)&(x703*x704));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x705 = UINT16_MAX;
	volatile int32_t x706 = INT32_MAX;
	uint64_t x707 = UINT64_MAX;
	uint64_t x708 = 53914444LLU;
	volatile uint64_t t140 = 6721002534916038108LLU;

    t140 = ((x705|x706)&(x707*x708));

    if (t140 != 2093569204LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x709 = -12;
	volatile int32_t x710 = 158777;
	static int8_t x711 = INT8_MIN;
	uint8_t x712 = 4U;

    t141 = ((x709|x710)&(x711*x712));

    if (t141 != -512) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x713 = 1;
	static uint16_t x714 = 4994U;
	static int32_t x716 = -1;
	int32_t t142 = 1;

    t142 = ((x713|x714)&(x715*x716));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x718 = UINT16_MAX;
	int8_t x719 = INT8_MAX;
	static uint64_t x720 = UINT64_MAX;
	volatile uint64_t t143 = 402890665356380986LLU;

    t143 = ((x717|x718)&(x719*x720));

    if (t143 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x721 = 263548681998498LLU;
	int32_t x722 = INT32_MAX;
	static uint8_t x723 = 42U;
	uint8_t x724 = 5U;
	uint64_t t144 = 40371380LLU;

    t144 = ((x721|x722)&(x723*x724));

    if (t144 != 210LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x725 = INT8_MIN;
	int8_t x727 = INT8_MIN;
	static uint64_t x728 = UINT64_MAX;
	static volatile uint64_t t145 = 138781268LLU;

    t145 = ((x725|x726)&(x727*x728));

    if (t145 != 128LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x733 = INT16_MIN;
	static volatile uint8_t x735 = 40U;
	uint32_t x736 = 31217666U;
	static uint64_t t146 = 342649773LLU;

    t146 = ((x733|x734)&(x735*x736));

    if (t146 != 1248690176LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x738 = INT8_MIN;
	volatile int16_t x739 = -1;
	int16_t x740 = INT16_MIN;
	uint64_t t147 = 41994534776350141LLU;

    t147 = ((x737|x738)&(x739*x740));

    if (t147 != 32768LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x745 = 2U;
	uint64_t x747 = 135349127051918074LLU;
	int64_t x748 = -1LL;
	volatile uint64_t t148 = 26621LLU;

    t148 = ((x745|x746)&(x747*x748));

    if (t148 != 607234LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x753 = 3LL;
	int64_t x754 = INT64_MAX;
	volatile int16_t x755 = -1;
	uint32_t x756 = 1037468002U;
	int64_t t149 = 122757009786LL;

    t149 = ((x753|x754)&(x755*x756));

    if (t149 != 3257499294LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x760 = -43115929LL;
	static volatile uint64_t t150 = 1309336475LLU;

    t150 = ((x757|x758)&(x759*x760));

    if (t150 != 13711855883757444397LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x761 = -1;
	uint32_t x763 = 25681U;
	int16_t x764 = -55;
	volatile uint32_t t151 = 6260977U;

    t151 = ((x761|x762)&(x763*x764));

    if (t151 != 4293554841U) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint16_t x765 = 15U;
	static uint16_t x766 = UINT16_MAX;
	int32_t x767 = 397312;
	int16_t x768 = -12;
	int32_t t152 = 9636;

    t152 = ((x765|x766)&(x767*x768));

    if (t152 != 16384) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x773 = 5;
	static int32_t x774 = INT32_MAX;
	volatile int16_t x776 = INT16_MIN;

    t153 = ((x773|x774)&(x775*x776));

    if (t153 != 32768LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x781 = INT64_MAX;
	int8_t x783 = INT8_MIN;
	int16_t x784 = -60;
	volatile int64_t t154 = 18LL;

    t154 = ((x781|x782)&(x783*x784));

    if (t154 != 7680LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x785 = 3U;
	int8_t x786 = 1;
	int16_t x787 = INT16_MIN;
	uint64_t x788 = UINT64_MAX;
	uint64_t t155 = 2LLU;

    t155 = ((x785|x786)&(x787*x788));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x789 = -45;
	volatile int32_t x790 = INT32_MAX;
	static volatile int32_t x791 = INT32_MAX;
	uint32_t x792 = 472925U;
	volatile uint32_t t156 = 211U;

    t156 = ((x789|x790)&(x791*x792));

    if (t156 != 2147010723U) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x793 = INT16_MIN;
	uint64_t x794 = 3123449386883311548LLU;
	static uint64_t x795 = UINT64_MAX;
	volatile uint16_t x796 = 11U;
	volatile uint64_t t157 = 15239305121626LLU;

    t157 = ((x793|x794)&(x795*x796));

    if (t157 != 18446744073709545396LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x798 = 0U;
	static volatile int8_t x800 = -1;
	int32_t t158 = 14;

    t158 = ((x797|x798)&(x799*x800));

    if (t158 != 7) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x801 = INT32_MIN;
	int16_t x803 = 250;
	static volatile uint64_t x804 = 2459088533975LLU;
	volatile uint64_t t159 = 28711LLU;

    t159 = ((x801|x802)&(x803*x804));

    if (t159 != 614772133493750LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x805 = UINT64_MAX;
	int16_t x806 = 18;
	uint8_t x808 = 98U;
	static uint64_t t160 = 2893018288LLU;

    t160 = ((x805|x806)&(x807*x808));

    if (t160 != 18446744073709547304LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x809 = INT32_MIN;
	uint64_t x810 = UINT64_MAX;
	int32_t x811 = 4960;
	static int64_t x812 = 1LL;
	volatile uint64_t t161 = 505658711581375204LLU;

    t161 = ((x809|x810)&(x811*x812));

    if (t161 != 4960LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x817 = 7U;
	int64_t x818 = INT64_MAX;
	volatile int8_t x819 = -1;
	int64_t x820 = INT64_MAX;
	int64_t t162 = 5449736LL;

    t162 = ((x817|x818)&(x819*x820));

    if (t162 != 1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x825 = INT32_MAX;
	int16_t x826 = -1;
	int64_t x827 = -42130495990733561LL;
	uint8_t x828 = 36U;
	volatile int64_t t163 = 301075780533948LL;

    t163 = ((x825|x826)&(x827*x828));

    if (t163 != -1516697855666408196LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x829 = INT64_MAX;
	static int16_t x831 = INT16_MAX;
	uint16_t x832 = 4U;
	int64_t t164 = 879096531077132LL;

    t164 = ((x829|x830)&(x831*x832));

    if (t164 != 131068LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x834 = 12LLU;
	int8_t x835 = -4;
	int8_t x836 = -13;
	uint64_t t165 = 6110637LLU;

    t165 = ((x833|x834)&(x835*x836));

    if (t165 != 52LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x838 = INT8_MAX;
	uint64_t x839 = UINT64_MAX;
	volatile int8_t x840 = 12;
	uint64_t t166 = 26947LLU;

    t166 = ((x837|x838)&(x839*x840));

    if (t166 != 116LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x841 = 13U;
	int32_t x842 = 1266345;
	static volatile int32_t x843 = 63;
	int8_t x844 = INT8_MIN;
	volatile int32_t t167 = 1;

    t167 = ((x841|x842)&(x843*x844));

    if (t167 != 1261696) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x853 = 39U;
	int64_t x854 = INT64_MAX;
	static uint32_t x856 = 15U;
	volatile int64_t t168 = 4056648963717594LL;

    t168 = ((x853|x854)&(x855*x856));

    if (t168 != 238626180LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x858 = UINT8_MAX;
	static int8_t x859 = 11;
	uint16_t x860 = 11U;
	int32_t t169 = 1655;

    t169 = ((x857|x858)&(x859*x860));

    if (t169 != 121) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x861 = 17;
	int8_t x862 = -1;
	uint8_t x863 = 5U;
	int16_t x864 = INT16_MIN;
	int32_t t170 = -6906;

    t170 = ((x861|x862)&(x863*x864));

    if (t170 != -163840) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x865 = INT64_MIN;
	int16_t x866 = INT16_MAX;
	int8_t x867 = -1;

    t171 = ((x865|x866)&(x867*x868));

    if (t171 != -9223372036854743053LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x873 = -6640109579LL;
	int8_t x874 = INT8_MIN;
	uint16_t x875 = UINT16_MAX;
	int16_t x876 = INT16_MAX;
	volatile int64_t t172 = 79418468LL;

    t172 = ((x873|x874)&(x875*x876));

    if (t172 != 2147385345LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x879 = UINT64_MAX;
	uint32_t x880 = 1U;
	volatile uint64_t t173 = 131272964395LLU;

    t173 = ((x877|x878)&(x879*x880));

    if (t173 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x882 = INT8_MIN;
	int8_t x884 = 10;
	static int64_t t174 = 81577666217198LL;

    t174 = ((x881|x882)&(x883*x884));

    if (t174 != -10LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x885 = 25;
	int16_t x886 = INT16_MIN;
	uint64_t x887 = 3187843150430189831LLU;
	static volatile uint64_t t175 = 4456311754650LLU;

    t175 = ((x885|x886)&(x887*x888));

    if (t175 != 15258900923279343641LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x893 = INT16_MAX;
	static int64_t x894 = -8411007297LL;
	static int32_t x895 = INT32_MIN;

    t176 = ((x893|x894)&(x895*x896));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x901 = -6935;
	int8_t x902 = 17;
	volatile uint32_t x903 = 213014U;
	int16_t x904 = -1;
	uint32_t t177 = 43716U;

    t177 = ((x901|x902)&(x903*x904));

    if (t177 != 4294747368U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x905 = INT16_MIN;
	int32_t x907 = 21;

    t178 = ((x905|x906)&(x907*x908));

    if (t178 != -30) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x909 = INT32_MIN;
	uint32_t x911 = UINT32_MAX;
	static volatile uint32_t t179 = 48U;

    t179 = ((x909|x910)&(x911*x912));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x913 = UINT8_MAX;
	int8_t x914 = 19;
	int32_t x915 = -1;
	int8_t x916 = -1;
	int32_t t180 = -274;

    t180 = ((x913|x914)&(x915*x916));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x918 = 2372978;
	uint64_t x919 = UINT64_MAX;
	int32_t x920 = INT32_MAX;
	volatile uint64_t t181 = 13146657908LLU;

    t181 = ((x917|x918)&(x919*x920));

    if (t181 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x921 = -1;
	static int8_t x922 = INT8_MIN;
	int8_t x923 = -1;
	int16_t x924 = INT16_MIN;
	static volatile int32_t t182 = -236003;

    t182 = ((x921|x922)&(x923*x924));

    if (t182 != 32768) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x929 = UINT16_MAX;
	int32_t x930 = 2024;
	volatile int8_t x931 = -1;
	static int64_t x932 = -1LL;
	int64_t t183 = -765LL;

    t183 = ((x929|x930)&(x931*x932));

    if (t183 != 1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x933 = UINT32_MAX;
	int16_t x934 = -1;
	int64_t x936 = -1LL;
	static int64_t t184 = 0LL;

    t184 = ((x933|x934)&(x935*x936));

    if (t184 != 10565LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x937 = 7902U;
	int32_t x938 = INT32_MAX;
	uint64_t x939 = UINT64_MAX;
	volatile uint64_t t185 = 483984564574079LLU;

    t185 = ((x937|x938)&(x939*x940));

    if (t185 != 18284LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x948 = UINT32_MAX;
	uint32_t t186 = 667U;

    t186 = ((x945|x946)&(x947*x948));

    if (t186 != 4294967041U) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x949 = INT8_MAX;
	int64_t x950 = INT64_MAX;
	volatile int16_t x951 = 1;
	static int64_t x952 = -1LL;
	volatile int64_t t187 = INT64_MAX;

    t187 = ((x949|x950)&(x951*x952));

    if (t187 != INT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x955 = UINT32_MAX;
	static volatile int32_t x956 = 394326565;
	volatile uint32_t t188 = 5034U;

    t188 = ((x953|x954)&(x955*x956));

    if (t188 != 3900640714U) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x957 = INT64_MIN;
	volatile int8_t x958 = 30;
	int16_t x959 = -1;
	static uint16_t x960 = 630U;

    t189 = ((x957|x958)&(x959*x960));

    if (t189 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x961 = -1;
	uint16_t x962 = 968U;
	uint32_t x963 = UINT32_MAX;
	volatile uint16_t x964 = 1U;
	uint32_t t190 = UINT32_MAX;

    t190 = ((x961|x962)&(x963*x964));

    if (t190 != UINT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x970 = 258502856342969470LLU;
	int8_t x971 = -1;
	volatile uint64_t t191 = 674602LLU;

    t191 = ((x969|x970)&(x971*x972));

    if (t191 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x981 = 417LL;
	int32_t x983 = -1;
	uint16_t x984 = 27218U;
	int64_t t192 = -457754824288412473LL;

    t192 = ((x981|x982)&(x983*x984));

    if (t192 != 2147456430LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x985 = INT8_MIN;
	int32_t x986 = INT32_MIN;
	static uint32_t t193 = 4U;

    t193 = ((x985|x986)&(x987*x988));

    if (t193 != 3789796736U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x990 = UINT16_MAX;
	static int8_t x991 = -1;
	int32_t t194 = -1632619;

    t194 = ((x989|x990)&(x991*x992));

    if (t194 != 30110) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x997 = INT64_MAX;
	uint64_t x998 = UINT64_MAX;
	int16_t x999 = -1;
	int64_t x1000 = 212320297LL;

    t195 = ((x997|x998)&(x999*x1000));

    if (t195 != 18446744073497231319LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1001 = INT64_MIN;
	int64_t x1002 = 3057776538630648LL;
	uint8_t x1003 = 8U;
	static volatile int16_t x1004 = INT16_MIN;
	int64_t t196 = -1LL;

    t196 = ((x1001|x1002)&(x1003*x1004));

    if (t196 != -9220314260316356608LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x1005 = 4U;
	int8_t x1006 = INT8_MIN;
	volatile int64_t t197 = -405525014172LL;

    t197 = ((x1005|x1006)&(x1007*x1008));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x1013 = -1LL;
	static int64_t x1015 = -1LL;
	volatile int16_t x1016 = INT16_MIN;
	int64_t t198 = 2726768155546800436LL;

    t198 = ((x1013|x1014)&(x1015*x1016));

    if (t198 != 32768LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1017 = INT32_MIN;
	int8_t x1019 = INT8_MIN;

    t199 = ((x1017|x1018)&(x1019*x1020));

    if (t199 != -1408) { NG(); } else { ; }
	
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


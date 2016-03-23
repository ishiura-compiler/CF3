
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

static int64_t x2 = INT64_MAX;
static uint64_t t0 = 1793LLU;
int64_t x10 = -1LL;
int8_t x12 = 0;
uint64_t x21 = UINT64_MAX;
int32_t x23 = 853035537;
uint64_t t5 = 45033864244LLU;
static volatile int64_t x47 = -1LL;
int32_t x48 = 170;
int8_t x49 = -1;
int64_t x61 = -3733633630LL;
volatile int64_t t10 = 967077222785858LL;
int32_t x74 = -49;
uint64_t x75 = 39866832965LLU;
static volatile uint64_t x78 = UINT64_MAX;
int64_t x82 = 5622LL;
static int8_t x89 = -1;
uint8_t x91 = UINT8_MAX;
volatile int16_t x94 = INT16_MIN;
uint16_t x104 = UINT16_MAX;
volatile int64_t x111 = 162160989480509595LL;
int16_t x112 = INT16_MIN;
uint32_t x136 = 1626572U;
int32_t t26 = 267157;
int16_t x149 = 2950;
int8_t x152 = INT8_MIN;
int16_t x154 = INT16_MIN;
static int16_t x157 = INT16_MIN;
int8_t x158 = 51;
volatile uint64_t t29 = 10017593057380911LLU;
int32_t x165 = -131;
uint32_t x170 = 13788945U;
uint32_t t31 = 901U;
static int64_t x175 = -7864LL;
int64_t x183 = 614LL;
int32_t x185 = -1;
int16_t x200 = INT16_MIN;
volatile uint8_t x203 = 6U;
volatile int16_t x206 = -1;
volatile int16_t x208 = -86;
uint32_t x209 = UINT32_MAX;
int16_t x210 = 7725;
int16_t x212 = -1;
static volatile uint32_t t38 = 11820U;
uint64_t t41 = 2540LLU;
volatile uint8_t x233 = 69U;
int16_t x238 = -1;
static int16_t x247 = INT16_MIN;
static uint64_t x249 = 5071LLU;
int8_t x251 = INT8_MIN;
volatile uint32_t x253 = 760684U;
int8_t x259 = INT8_MAX;
int64_t x267 = -10593923046LL;
int32_t x269 = INT32_MIN;
static uint64_t x272 = 190746LLU;
uint16_t x281 = UINT16_MAX;
uint64_t x284 = 700322LLU;
uint64_t t56 = 42LLU;
int32_t x309 = INT32_MAX;
volatile int64_t t59 = -481034834257LL;
int32_t x330 = 6908;
uint8_t x345 = UINT8_MAX;
int8_t x348 = 0;
int16_t x351 = 64;
int64_t x355 = INT64_MIN;
volatile uint32_t x356 = UINT32_MAX;
int8_t x359 = -29;
uint64_t x365 = 18360LLU;
uint32_t x374 = UINT32_MAX;
int32_t x376 = -1;
uint32_t x383 = UINT32_MAX;
uint32_t t69 = 336405U;
int32_t t70 = -4008453;
int64_t x405 = -1LL;
uint32_t x414 = UINT32_MAX;
volatile int32_t x419 = -1;
volatile int32_t x428 = INT32_MIN;
volatile int32_t x429 = INT32_MIN;
static int8_t x430 = 0;
uint64_t x432 = 0LLU;
int8_t x437 = INT8_MIN;
volatile int8_t x439 = -1;
volatile uint32_t x444 = 4U;
uint32_t t80 = 23194U;
uint64_t t82 = 35203291492610489LLU;
int8_t x459 = 60;
int32_t x468 = -80701;
int16_t x469 = INT16_MAX;
int64_t x470 = 2310728104LL;
int32_t x471 = -11905;
uint8_t x473 = 1U;
int32_t x478 = -1;
int8_t x479 = 1;
uint64_t x496 = 4576685LLU;
volatile uint64_t t88 = 15132651355689958LLU;
static volatile int16_t x497 = -1;
volatile int64_t x499 = INT64_MIN;
uint16_t x500 = 133U;
volatile int64_t t89 = 59362532548712LL;
int8_t x505 = INT8_MAX;
int8_t x506 = -41;
volatile uint32_t t93 = 41555U;
int8_t x521 = INT8_MAX;
uint8_t x522 = 1U;
int32_t x523 = 39;
int64_t t95 = 927785965LL;
int32_t x534 = INT32_MAX;
int16_t x542 = -1;
static volatile int32_t t97 = -6821;
int16_t x553 = -238;
volatile uint64_t t98 = 24LLU;
int32_t x562 = -1;
uint64_t x564 = UINT64_MAX;
int16_t x566 = -1;
static int32_t x568 = INT32_MIN;
static int32_t x570 = INT32_MIN;
uint16_t x572 = 0U;
static volatile uint8_t x574 = UINT8_MAX;
static int8_t x593 = INT8_MIN;
static volatile int32_t x595 = INT32_MIN;
volatile int64_t t104 = -3823049407921561LL;
int16_t x599 = INT16_MIN;
volatile int32_t t105 = 1;
static int32_t x602 = INT32_MIN;
static volatile int64_t t106 = 140307446262LL;
volatile uint32_t x606 = UINT32_MAX;
static uint8_t x608 = 94U;
uint16_t x616 = 2U;
volatile int8_t x618 = 60;
volatile int64_t t110 = -11373LL;
int8_t x630 = -2;
int8_t x632 = INT8_MAX;
static int16_t x635 = INT16_MIN;
static uint32_t x636 = 39128U;
int8_t x642 = 1;
volatile uint64_t t116 = 457201340LLU;
int16_t x658 = INT16_MIN;
uint32_t t117 = 19279U;
volatile int32_t x664 = INT32_MAX;
volatile int64_t t118 = 5479308085078660LL;
volatile int64_t x676 = 14479LL;
int32_t x677 = INT32_MIN;
static volatile int64_t x683 = 115937750556843286LL;
uint64_t t123 = 59948968089LLU;
uint8_t x685 = 10U;
int8_t x686 = INT8_MIN;
static int32_t x688 = 32531;
volatile int8_t x692 = INT8_MAX;
uint64_t x693 = 1046353LLU;
uint64_t t126 = 46063282200LLU;
int64_t x698 = 161014LL;
static volatile uint16_t x700 = UINT16_MAX;
int8_t x701 = -43;
int32_t x707 = INT32_MIN;
int8_t x711 = -41;
static int8_t x716 = 1;
static int32_t t132 = -358;
int16_t x721 = 422;
static uint8_t x722 = 47U;
uint16_t x724 = UINT16_MAX;
volatile int32_t t133 = 10857180;
int16_t x726 = -140;
static uint32_t x737 = UINT32_MAX;
static volatile int64_t x739 = INT64_MIN;
int64_t x742 = INT64_MIN;
int8_t x751 = INT8_MIN;
int32_t x752 = INT32_MIN;
int16_t x754 = INT16_MIN;
uint8_t x755 = 44U;
int64_t x759 = -1LL;
int64_t t142 = 3914158935LL;
uint32_t x761 = 4245U;
volatile int64_t t145 = -1996LL;
uint16_t x773 = UINT16_MAX;
int16_t x776 = INT16_MIN;
volatile int64_t t147 = -19996LL;
int64_t x788 = INT64_MIN;
uint16_t x798 = UINT16_MAX;
volatile int16_t x801 = INT16_MIN;
uint64_t t150 = 3649002LLU;
uint32_t x813 = 123955339U;
static uint32_t x819 = UINT32_MAX;
uint32_t t153 = 282284104U;
uint8_t x834 = 47U;
int64_t t156 = -10056335740180LL;
uint64_t x839 = 737056143749LLU;
uint32_t x845 = UINT32_MAX;
volatile int64_t x849 = INT64_MAX;
int8_t x852 = INT8_MAX;
static volatile uint32_t x858 = 183542U;
static int8_t x871 = 2;
volatile uint16_t x883 = 4U;
int32_t x911 = INT32_MAX;
int64_t x921 = -1LL;
volatile int64_t x923 = INT64_MIN;
static int8_t x924 = 1;
int32_t x936 = INT32_MIN;
static volatile uint64_t t174 = 25319715950LLU;
int64_t x943 = 15LL;
static volatile int32_t x944 = 978443820;
static uint64_t x955 = UINT64_MAX;
static uint32_t t180 = 58064U;
static int16_t x969 = -1;
volatile int32_t t181 = 128313398;
uint8_t x976 = UINT8_MAX;
uint64_t x977 = 1LLU;
static uint64_t t183 = 894438720784125537LLU;
static uint64_t x984 = UINT64_MAX;
static int64_t x988 = INT64_MIN;
volatile int64_t x989 = 3334806663LL;
uint16_t x1003 = UINT16_MAX;
static uint64_t x1015 = 258027999530073LLU;
int16_t x1026 = INT16_MIN;
uint64_t x1033 = 709959139551LLU;
static volatile int32_t t193 = -63048;
volatile int32_t x1056 = -1;
volatile uint64_t t196 = 11469916174772011LLU;
static int32_t x1066 = INT32_MAX;


void f0(void) {
    	int16_t x1 = -1;
	volatile int16_t x3 = INT16_MIN;
	uint64_t x4 = 706LLU;

    t0 = ((x1*x2)%(x3^x4));

    if (t0 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = -1;
	int16_t x6 = 1432;
	uint16_t x7 = 32041U;
	static int64_t x8 = INT64_MIN;
	int64_t t1 = 1595965LL;

    t1 = ((x5*x6)%(x7^x8));

    if (t1 != -1432LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x9 = UINT64_MAX;
	volatile int16_t x11 = -58;
	uint64_t t2 = 2221259968164914938LLU;

    t2 = ((x9*x10)%(x11^x12));

    if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x17 = INT8_MIN;
	int64_t x18 = -9194784LL;
	int64_t x19 = INT64_MIN;
	static int32_t x20 = INT32_MAX;
	int64_t t3 = -1209LL;

    t3 = ((x17*x18)%(x19^x20));

    if (t3 != 1176932352LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x22 = INT16_MIN;
	uint64_t x24 = 12286085LLU;
	volatile uint64_t t4 = 253760710781LLU;

    t4 = ((x21*x22)%(x23^x24));

    if (t4 != 32768LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x41 = -1LL;
	uint64_t x42 = UINT64_MAX;
	uint8_t x43 = UINT8_MAX;
	static int32_t x44 = INT32_MAX;

    t5 = ((x41*x42)%(x43^x44));

    if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x45 = INT16_MIN;
	int32_t x46 = 75;
	volatile int64_t t6 = 739LL;

    t6 = ((x45*x46)%(x47^x48));

    if (t6 != -159LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x50 = 410125838639661236LLU;
	int64_t x51 = INT64_MIN;
	int32_t x52 = INT32_MIN;
	uint64_t t7 = 290336456LLU;

    t7 = ((x49*x50)%(x51^x52));

    if (t7 != 8813246200362598220LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x53 = -15253688LL;
	uint64_t x54 = UINT64_MAX;
	volatile int16_t x55 = INT16_MIN;
	int16_t x56 = INT16_MAX;
	uint64_t t8 = 53433057065075LLU;

    t8 = ((x53*x54)%(x55^x56));

    if (t8 != 15253688LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x62 = 3835740936360844LLU;
	int8_t x63 = 1;
	volatile int16_t x64 = -16;
	uint64_t t9 = 3491394LLU;

    t9 = ((x61*x62)%(x63^x64));

    if (t9 != 7532868389390359192LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x65 = INT16_MIN;
	int8_t x66 = -1;
	int64_t x67 = -5LL;
	int16_t x68 = 1760;

    t10 = ((x65*x66)%(x67^x68));

    if (t10 != 998LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x73 = INT8_MIN;
	static uint64_t x76 = UINT64_MAX;
	volatile uint64_t t11 = 6142564596294821438LLU;

    t11 = ((x73*x74)%(x75^x76));

    if (t11 != 6272LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x77 = 1943012505800440228LLU;
	int8_t x79 = 3;
	int8_t x80 = INT8_MIN;
	volatile uint64_t t12 = 93597LLU;

    t12 = ((x77*x78)%(x79^x80));

    if (t12 != 16503731567909111388LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x81 = INT8_MAX;
	volatile int32_t x83 = INT32_MIN;
	int32_t x84 = INT32_MAX;
	volatile int64_t t13 = -72627431821785LL;

    t13 = ((x81*x82)%(x83^x84));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x85 = 7831727377972431LLU;
	int8_t x86 = INT8_MIN;
	uint64_t x87 = 2340835146LLU;
	int32_t x88 = INT32_MIN;
	uint64_t t14 = 22LLU;

    t14 = ((x85*x86)%(x87^x88));

    if (t14 != 17444282969329080448LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x90 = -16146;
	int32_t x92 = INT32_MIN;
	volatile int32_t t15 = -40173518;

    t15 = ((x89*x90)%(x91^x92));

    if (t15 != 16146) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x93 = -2;
	volatile int32_t x95 = INT32_MAX;
	static int8_t x96 = INT8_MIN;
	int32_t t16 = -20;

    t16 = ((x93*x94)%(x95^x96));

    if (t16 != 65536) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x101 = 35633362LLU;
	int32_t x102 = INT32_MAX;
	volatile int16_t x103 = INT16_MIN;
	volatile uint64_t t17 = 444625LLU;

    t17 = ((x101*x102)%(x103^x104));

    if (t17 != 76522062182631214LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x105 = -69055688;
	int32_t x106 = -1;
	uint16_t x107 = 4U;
	volatile int32_t x108 = INT32_MIN;
	volatile int32_t t18 = 63990140;

    t18 = ((x105*x106)%(x107^x108));

    if (t18 != 69055688) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x109 = INT16_MIN;
	volatile int8_t x110 = -39;
	static volatile int64_t t19 = 10225888076370LL;

    t19 = ((x109*x110)%(x111^x112));

    if (t19 != 1277952LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x117 = INT8_MIN;
	uint16_t x118 = 4U;
	static uint8_t x119 = UINT8_MAX;
	static int8_t x120 = 3;
	volatile int32_t t20 = -16713030;

    t20 = ((x117*x118)%(x119^x120));

    if (t20 != -8) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int8_t x125 = INT8_MIN;
	uint64_t x126 = UINT64_MAX;
	int32_t x127 = -1;
	int64_t x128 = 408196774661LL;
	uint64_t t21 = 3983LLU;

    t21 = ((x125*x126)%(x127^x128));

    if (t21 != 128LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x129 = INT32_MIN;
	uint64_t x130 = 60530LLU;
	uint8_t x131 = UINT8_MAX;
	uint32_t x132 = 8U;
	volatile uint64_t t22 = 398946838382347LLU;

    t22 = ((x129*x130)%(x131^x132));

    if (t22 != 124LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x133 = INT32_MAX;
	static volatile uint32_t x134 = 298866032U;
	int32_t x135 = 1048270;
	volatile uint32_t t23 = 782066U;

    t23 = ((x133*x134)%(x135^x136));

    if (t23 != 179204U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x137 = -1;
	uint32_t x138 = 83977203U;
	uint8_t x139 = UINT8_MAX;
	int16_t x140 = -3376;
	uint32_t t24 = 113124U;

    t24 = ((x137*x138)%(x139^x140));

    if (t24 != 4210990093U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x141 = 1194U;
	uint32_t x142 = 947551U;
	uint16_t x143 = 112U;
	int32_t x144 = -2;
	static uint32_t t25 = 850U;

    t25 = ((x141*x142)%(x143^x144));

    if (t25 != 1131375894U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x145 = -5;
	static int16_t x146 = INT16_MAX;
	int32_t x147 = INT32_MIN;
	int16_t x148 = INT16_MIN;

    t26 = ((x145*x146)%(x147^x148));

    if (t26 != -163835) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x150 = UINT64_MAX;
	int32_t x151 = -1;
	volatile uint64_t t27 = 91364136LLU;

    t27 = ((x149*x150)%(x151^x152));

    if (t27 != 100LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x153 = INT8_MIN;
	volatile uint32_t x155 = 12U;
	uint8_t x156 = UINT8_MAX;
	volatile uint32_t t28 = 23130444U;

    t28 = ((x153*x154)%(x155^x156));

    if (t28 != 124U) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x159 = -9083093;
	static uint64_t x160 = UINT64_MAX;

    t29 = ((x157*x158)%(x159^x160));

    if (t29 != 8728748LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x166 = 13U;
	volatile uint32_t x167 = UINT32_MAX;
	uint8_t x168 = UINT8_MAX;
	uint32_t t30 = 58U;

    t30 = ((x165*x166)%(x167^x168));

    if (t30 != 4294965593U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x169 = INT8_MIN;
	static int32_t x171 = INT32_MIN;
	uint8_t x172 = 59U;

    t31 = ((x169*x170)%(x171^x172));

    if (t31 != 382498629U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x173 = INT16_MIN;
	uint16_t x174 = UINT16_MAX;
	uint16_t x176 = UINT16_MAX;
	volatile int64_t t32 = 38327223901123LL;

    t32 = ((x173*x174)%(x175^x176));

    if (t32 != -54398LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x181 = INT8_MIN;
	static uint8_t x182 = UINT8_MAX;
	uint16_t x184 = 13384U;
	static volatile int64_t t33 = -11027LL;

    t33 = ((x181*x182)%(x183^x184));

    if (t33 != -4900LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x186 = INT8_MIN;
	uint32_t x187 = 55U;
	static int16_t x188 = -1;
	uint32_t t34 = 44174178U;

    t34 = ((x185*x186)%(x187^x188));

    if (t34 != 128U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x197 = 655270144;
	volatile int16_t x198 = 1;
	volatile int8_t x199 = 6;
	volatile int32_t t35 = -1682153;

    t35 = ((x197*x198)%(x199^x200));

    if (t35 != 30144) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int16_t x201 = 0;
	int32_t x202 = -1;
	int8_t x204 = INT8_MIN;
	int32_t t36 = 71;

    t36 = ((x201*x202)%(x203^x204));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x205 = -1;
	volatile int8_t x207 = INT8_MIN;
	int32_t t37 = -976;

    t37 = ((x205*x206)%(x207^x208));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x211 = -54;

    t38 = ((x209*x210)%(x211^x212));

    if (t38 != 2U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x213 = 4LL;
	int32_t x214 = INT32_MAX;
	int32_t x215 = -1;
	static int8_t x216 = -55;
	volatile int64_t t39 = 100LL;

    t39 = ((x213*x214)%(x215^x216));

    if (t39 != 40LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x217 = INT32_MIN;
	uint64_t x218 = UINT64_MAX;
	volatile uint64_t x219 = UINT64_MAX;
	static volatile uint16_t x220 = 4U;
	uint64_t t40 = 16408945LLU;

    t40 = ((x217*x218)%(x219^x220));

    if (t40 != 2147483648LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x225 = 10461U;
	uint64_t x226 = UINT64_MAX;
	int64_t x227 = INT64_MIN;
	int64_t x228 = -78000992163LL;

    t41 = ((x225*x226)%(x227^x228));

    if (t41 != 156001973865LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x234 = -1LL;
	uint16_t x235 = 13U;
	int64_t x236 = INT64_MIN;
	static int64_t t42 = -49303325814556LL;

    t42 = ((x233*x234)%(x235^x236));

    if (t42 != -69LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x237 = 24193321691581LLU;
	volatile int8_t x239 = INT8_MIN;
	uint8_t x240 = 5U;
	volatile uint64_t t43 = 7316456452LLU;

    t43 = ((x237*x238)%(x239^x240));

    if (t43 != 18446719880387860035LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x245 = -1;
	volatile uint16_t x246 = 5U;
	static int32_t x248 = INT32_MIN;
	int32_t t44 = 7525;

    t44 = ((x245*x246)%(x247^x248));

    if (t44 != -5) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x250 = 1707LLU;
	uint64_t x252 = 2391356LLU;
	static volatile uint64_t t45 = 56304108321331LLU;

    t45 = ((x249*x250)%(x251^x252));

    if (t45 != 8656197LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x254 = UINT16_MAX;
	int64_t x255 = 318094522LL;
	uint64_t x256 = 1023LLU;
	static volatile uint64_t t46 = 23394292513LLU;

    t46 = ((x253*x254)%(x255^x256));

    if (t46 != 62024300LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int8_t x257 = INT8_MIN;
	int16_t x258 = INT16_MIN;
	int8_t x260 = INT8_MIN;
	int32_t t47 = -1;

    t47 = ((x257*x258)%(x259^x260));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x261 = -1LL;
	static int8_t x262 = -29;
	int32_t x263 = INT32_MAX;
	static int32_t x264 = INT32_MIN;
	int64_t t48 = 66274630163LL;

    t48 = ((x261*x262)%(x263^x264));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x265 = -1;
	volatile int16_t x266 = INT16_MIN;
	int32_t x268 = -71203712;
	static int64_t t49 = -7LL;

    t49 = ((x265*x266)%(x267^x268));

    if (t49 != 32768LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x270 = 9313946U;
	int64_t x271 = INT64_MAX;
	static volatile uint64_t t50 = 14386LLU;

    t50 = ((x269*x270)%(x271^x272));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x273 = -1;
	static int8_t x274 = 0;
	int32_t x275 = INT32_MIN;
	int32_t x276 = -1;
	volatile int32_t t51 = -30790056;

    t51 = ((x273*x274)%(x275^x276));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint16_t x277 = 28U;
	uint32_t x278 = UINT32_MAX;
	static volatile uint64_t x279 = UINT64_MAX;
	volatile int16_t x280 = -3056;
	static uint64_t t52 = 589613086302162920LLU;

    t52 = ((x277*x278)%(x279^x280));

    if (t52 != 813LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x282 = UINT8_MAX;
	uint8_t x283 = UINT8_MAX;
	volatile uint64_t t53 = 884277448679LLU;

    t53 = ((x281*x282)%(x283^x284));

    if (t53 != 605606LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint32_t x289 = 8U;
	volatile uint64_t x290 = 548698433598713LLU;
	static int64_t x291 = INT64_MIN;
	static uint16_t x292 = 6U;
	static uint64_t t54 = 7LLU;

    t54 = ((x289*x290)%(x291^x292));

    if (t54 != 4389587468789704LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x301 = 75U;
	int16_t x302 = INT16_MAX;
	static uint64_t x303 = UINT64_MAX;
	volatile int16_t x304 = 1093;
	volatile uint64_t t55 = 42672560149132700LLU;

    t55 = ((x301*x302)%(x303^x304));

    if (t55 != 2457525LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x305 = 12170896845841109LLU;
	static int32_t x306 = -97479;
	int16_t x307 = INT16_MAX;
	int16_t x308 = 14;

    t56 = ((x305*x306)%(x307^x308));

    if (t56 != 9924LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x310 = 0LLU;
	volatile int8_t x311 = INT8_MIN;
	uint16_t x312 = UINT16_MAX;
	volatile uint64_t t57 = 17000978403LLU;

    t57 = ((x309*x310)%(x311^x312));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x317 = -1;
	uint16_t x318 = 4U;
	uint8_t x319 = 12U;
	uint16_t x320 = 0U;
	int32_t t58 = -23;

    t58 = ((x317*x318)%(x319^x320));

    if (t58 != -4) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x321 = UINT8_MAX;
	int64_t x322 = -1LL;
	uint32_t x323 = 262692043U;
	static int8_t x324 = INT8_MAX;

    t59 = ((x321*x322)%(x323^x324));

    if (t59 != -255LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x325 = INT16_MAX;
	static int8_t x326 = INT8_MIN;
	uint64_t x327 = 57021603062LLU;
	static volatile int16_t x328 = -100;
	uint64_t t60 = 10001578LLU;

    t60 = ((x325*x326)%(x327^x328));

    if (t60 != 57017408790LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x329 = 819U;
	uint8_t x331 = UINT8_MAX;
	int32_t x332 = INT32_MIN;
	volatile uint32_t t61 = 38677U;

    t61 = ((x329*x330)%(x331^x332));

    if (t61 != 5657652U) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int64_t x341 = -1LL;
	volatile uint32_t x342 = 24U;
	int32_t x343 = -1;
	static uint16_t x344 = 17602U;
	int64_t t62 = 1509239979231863LL;

    t62 = ((x341*x342)%(x343^x344));

    if (t62 != -24LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x346 = 7580U;
	uint16_t x347 = 129U;
	static volatile int32_t t63 = -64939115;

    t63 = ((x345*x346)%(x347^x348));

    if (t63 != 93) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x349 = -4968LL;
	volatile int8_t x350 = INT8_MIN;
	static int8_t x352 = INT8_MIN;
	int64_t t64 = 165047120LL;

    t64 = ((x349*x350)%(x351^x352));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x353 = UINT64_MAX;
	int16_t x354 = -2;
	volatile uint64_t t65 = 5766949435394539LLU;

    t65 = ((x353*x354)%(x355^x356));

    if (t65 != 2LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint8_t x357 = 53U;
	int8_t x358 = -55;
	int16_t x360 = -20;
	volatile int32_t t66 = 252993849;

    t66 = ((x357*x358)%(x359^x360));

    if (t66 != -5) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x366 = -4;
	int16_t x367 = INT16_MIN;
	uint16_t x368 = UINT16_MAX;
	uint64_t t67 = 779488246606993LLU;

    t67 = ((x365*x366)%(x367^x368));

    if (t67 != 18446744073709478176LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x373 = 62LLU;
	static int32_t x375 = INT32_MIN;
	uint64_t t68 = 181395625820LLU;

    t68 = ((x373*x374)%(x375^x376));

    if (t68 != 62LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x381 = UINT16_MAX;
	uint16_t x382 = 18931U;
	int8_t x384 = INT8_MIN;

    t69 = ((x381*x382)%(x383^x384));

    if (t69 != 24U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x385 = INT16_MAX;
	int8_t x386 = INT8_MIN;
	uint16_t x387 = 802U;
	static volatile int8_t x388 = INT8_MIN;

    t70 = ((x385*x386)%(x387^x388));

    if (t70 != -546) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x389 = UINT64_MAX;
	uint8_t x390 = 3U;
	int16_t x391 = INT16_MIN;
	int32_t x392 = INT32_MIN;
	volatile uint64_t t71 = 3016371990469076661LLU;

    t71 = ((x389*x390)%(x391^x392));

    if (t71 != 65533LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x406 = INT16_MIN;
	int8_t x407 = 4;
	uint16_t x408 = 22268U;
	int64_t t72 = -1LL;

    t72 = ((x405*x406)%(x407^x408));

    if (t72 != 10504LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x409 = INT16_MAX;
	volatile int16_t x410 = -424;
	int32_t x411 = -1;
	uint16_t x412 = 0U;
	static int32_t t73 = -7;

    t73 = ((x409*x410)%(x411^x412));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x413 = INT8_MAX;
	int32_t x415 = 43890989;
	uint8_t x416 = 3U;
	uint32_t t74 = 10U;

    t74 = ((x413*x414)%(x415^x416));

    if (t74 != 37541139U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x417 = 14153710U;
	static int8_t x418 = INT8_MIN;
	int16_t x420 = 0;
	static uint32_t t75 = 117466334U;

    t75 = ((x417*x418)%(x419^x420));

    if (t75 != 2483292416U) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x421 = INT32_MIN;
	uint32_t x422 = 1U;
	int16_t x423 = -2980;
	uint8_t x424 = 3U;
	static uint32_t t76 = 5374U;

    t76 = ((x421*x422)%(x423^x424));

    if (t76 != 2147483648U) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x425 = -1;
	int16_t x426 = INT16_MIN;
	int8_t x427 = INT8_MIN;
	volatile int32_t t77 = -3810490;

    t77 = ((x425*x426)%(x427^x428));

    if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x431 = 11689U;
	volatile uint64_t t78 = 28LLU;

    t78 = ((x429*x430)%(x431^x432));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x438 = -1;
	int32_t x440 = INT32_MIN;
	volatile int32_t t79 = 1;

    t79 = ((x437*x438)%(x439^x440));

    if (t79 != 128) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x441 = -1;
	volatile uint8_t x442 = UINT8_MAX;
	int32_t x443 = -1;

    t80 = ((x441*x442)%(x443^x444));

    if (t80 != 4294967041U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x445 = UINT64_MAX;
	int64_t x446 = -166425LL;
	int64_t x447 = 7606896302292835LL;
	uint16_t x448 = 14U;
	static uint64_t t81 = 1845917801879907LLU;

    t81 = ((x445*x446)%(x447^x448));

    if (t81 != 166425LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x449 = 115U;
	uint64_t x450 = 3554872LLU;
	int16_t x451 = -5;
	uint16_t x452 = 7U;

    t82 = ((x449*x450)%(x451^x452));

    if (t82 != 408810280LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x457 = INT8_MAX;
	volatile uint8_t x458 = 90U;
	int64_t x460 = -1LL;
	volatile int64_t t83 = 61627313600LL;

    t83 = ((x457*x458)%(x459^x460));

    if (t83 != 23LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x465 = 63665877619861LLU;
	volatile uint8_t x466 = UINT8_MAX;
	static int16_t x467 = INT16_MIN;
	uint64_t t84 = 2LLU;

    t84 = ((x465*x466)%(x467^x468));

    if (t84 != 25659LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x472 = 30713345354561LLU;
	uint64_t t85 = 3158591LLU;

    t85 = ((x469*x470)%(x471^x472));

    if (t85 != 75715627783768LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x474 = -1;
	uint32_t x475 = 117664U;
	volatile uint64_t x476 = UINT64_MAX;
	static volatile uint64_t t86 = 542LLU;

    t86 = ((x473*x474)%(x475^x476));

    if (t86 != 117664LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x477 = INT16_MIN;
	volatile uint16_t x480 = UINT16_MAX;
	volatile int32_t t87 = 35854512;

    t87 = ((x477*x478)%(x479^x480));

    if (t87 != 32768) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x493 = INT8_MAX;
	static volatile int8_t x494 = INT8_MIN;
	int32_t x495 = INT32_MIN;

    t88 = ((x493*x494)%(x495^x496));

    if (t88 != 2142890707LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x498 = -1;

    t89 = ((x497*x498)%(x499^x500));

    if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x507 = INT32_MIN;
	volatile int64_t x508 = INT64_MAX;
	volatile int64_t t90 = -138522203877LL;

    t90 = ((x505*x506)%(x507^x508));

    if (t90 != -5207LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x509 = 1892U;
	int64_t x510 = -1LL;
	volatile int8_t x511 = INT8_MIN;
	volatile int8_t x512 = -1;
	int64_t t91 = -72043102LL;

    t91 = ((x509*x510)%(x511^x512));

    if (t91 != -114LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x513 = UINT8_MAX;
	int8_t x514 = -14;
	volatile uint32_t x515 = UINT32_MAX;
	uint8_t x516 = UINT8_MAX;
	uint32_t t92 = 68108U;

    t92 = ((x513*x514)%(x515^x516));

    if (t92 != 4294963726U) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x517 = INT16_MIN;
	int8_t x518 = INT8_MAX;
	volatile uint32_t x519 = 43069U;
	int8_t x520 = INT8_MIN;

    t93 = ((x517*x518)%(x519^x520));

    if (t93 != 4290805760U) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x524 = 1442LL;
	int64_t t94 = 1315711168494726752LL;

    t94 = ((x521*x522)%(x523^x524));

    if (t94 != 127LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x529 = INT8_MAX;
	static volatile int8_t x530 = INT8_MAX;
	int64_t x531 = -516832235625694011LL;
	int64_t x532 = -1LL;

    t95 = ((x529*x530)%(x531^x532));

    if (t95 != 16129LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x533 = 40U;
	int8_t x535 = INT8_MIN;
	static int8_t x536 = 0;
	uint32_t t96 = 313624U;

    t96 = ((x533*x534)%(x535^x536));

    if (t96 != 88U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x541 = 83U;
	uint16_t x543 = 0U;
	int16_t x544 = -1551;

    t97 = ((x541*x542)%(x543^x544));

    if (t97 != -83) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x554 = INT8_MIN;
	uint64_t x555 = 844154384741LLU;
	static volatile uint32_t x556 = 43582891U;

    t98 = ((x553*x554)%(x555^x556));

    if (t98 != 30464LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x561 = -4885;
	int16_t x563 = INT16_MAX;
	uint64_t t99 = 1LLU;

    t99 = ((x561*x562)%(x563^x564));

    if (t99 != 4885LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x565 = 1887505294611LLU;
	static int32_t x567 = 1540945;
	static volatile uint64_t t100 = 730374LLU;

    t100 = ((x565*x566)%(x567^x568));

    if (t100 != 18446742186204257005LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x569 = 0;
	uint64_t x571 = UINT64_MAX;
	uint64_t t101 = 46951668659470452LLU;

    t101 = ((x569*x570)%(x571^x572));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x573 = 1;
	volatile int32_t x575 = -199638;
	volatile int64_t x576 = INT64_MIN;
	volatile int64_t t102 = -6502LL;

    t102 = ((x573*x574)%(x575^x576));

    if (t102 != 255LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x589 = 2;
	int8_t x590 = INT8_MIN;
	int64_t x591 = -31940159LL;
	int64_t x592 = INT64_MIN;
	int64_t t103 = -961278038498LL;

    t103 = ((x589*x590)%(x591^x592));

    if (t103 != -256LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x594 = INT16_MAX;
	int64_t x596 = -1LL;

    t104 = ((x593*x594)%(x595^x596));

    if (t104 != -4194176LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x597 = INT8_MIN;
	static uint16_t x598 = 23956U;
	int32_t x600 = INT32_MIN;

    t105 = ((x597*x598)%(x599^x600));

    if (t105 != -3066368) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x601 = 30940U;
	int64_t x603 = 208221668786191LL;
	int16_t x604 = INT16_MIN;

    t106 = ((x601*x602)%(x603^x604));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x605 = UINT8_MAX;
	int64_t x607 = INT64_MIN;
	int64_t t107 = -26877513LL;

    t107 = ((x605*x606)%(x607^x608));

    if (t107 != 4294967041LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x613 = 4294U;
	int64_t x614 = -33206077189668LL;
	int16_t x615 = INT16_MIN;
	volatile int64_t t108 = -506534925797LL;

    t108 = ((x613*x614)%(x615^x616));

    if (t108 != -9006LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x617 = UINT16_MAX;
	int64_t x619 = -1LL;
	uint8_t x620 = UINT8_MAX;
	int64_t t109 = -13628608LL;

    t109 = ((x617*x618)%(x619^x620));

    if (t109 != 196LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x621 = 122U;
	int16_t x622 = INT16_MIN;
	uint32_t x623 = 35U;
	int64_t x624 = -8557545636399678LL;

    t110 = ((x621*x622)%(x623^x624));

    if (t110 != 4290969600LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x625 = -13;
	int16_t x626 = 269;
	int8_t x627 = INT8_MAX;
	int32_t x628 = -210;
	volatile int32_t t111 = 1674408;

    t111 = ((x625*x626)%(x627^x628));

    if (t111 != -172) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x629 = -53;
	int8_t x631 = INT8_MIN;
	int32_t t112 = -42356627;

    t112 = ((x629*x630)%(x631^x632));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x633 = INT16_MIN;
	uint64_t x634 = 93059958081428465LLU;
	uint64_t t113 = 208921334398LLU;

    t113 = ((x633*x634)%(x635^x636));

    if (t113 != 3084594456LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x637 = UINT64_MAX;
	static int64_t x638 = -1LL;
	uint32_t x639 = 331345898U;
	uint64_t x640 = UINT64_MAX;
	uint64_t t114 = 4145924263LLU;

    t114 = ((x637*x638)%(x639^x640));

    if (t114 != 1LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x641 = 7U;
	static volatile uint64_t x643 = UINT64_MAX;
	volatile int64_t x644 = INT64_MAX;
	static uint64_t t115 = 1339157LLU;

    t115 = ((x641*x642)%(x643^x644));

    if (t115 != 7LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x645 = 45437;
	uint64_t x646 = 754629837521608LLU;
	uint8_t x647 = UINT8_MAX;
	uint32_t x648 = 28U;

    t116 = ((x645*x646)%(x647^x648));

    if (t116 != 211LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x657 = 989972U;
	int32_t x659 = 357779672;
	int16_t x660 = INT16_MIN;

    t117 = ((x657*x658)%(x659^x660));

    if (t117 != 1920335872U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x661 = UINT8_MAX;
	int8_t x662 = INT8_MIN;
	int64_t x663 = INT64_MAX;

    t118 = ((x661*x662)%(x663^x664));

    if (t118 != -32640LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x665 = 2U;
	uint8_t x666 = 3U;
	int64_t x667 = 1327351936285LL;
	int64_t x668 = -700LL;
	static int64_t t119 = -5938095721LL;

    t119 = ((x665*x666)%(x667^x668));

    if (t119 != 6LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x669 = -690;
	int32_t x670 = -1;
	volatile uint16_t x671 = UINT16_MAX;
	int8_t x672 = -3;
	volatile int32_t t120 = -95576;

    t120 = ((x669*x670)%(x671^x672));

    if (t120 != 690) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x673 = INT32_MAX;
	uint64_t x674 = 28298808317LLU;
	uint16_t x675 = UINT16_MAX;
	uint64_t t121 = 198654545568814998LLU;

    t121 = ((x673*x674)%(x675^x676));

    if (t121 != 49203LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x678 = 9LLU;
	int8_t x679 = INT8_MIN;
	int16_t x680 = 0;
	uint64_t t122 = 267469346LLU;

    t122 = ((x677*x678)%(x679^x680));

    if (t122 != 18446744054382198784LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x681 = 2841LLU;
	volatile uint32_t x682 = 4384233U;
	int64_t x684 = 3673412555LL;

    t123 = ((x681*x682)%(x683^x684));

    if (t123 != 12455605953LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x687 = -17;
	volatile int32_t t124 = -846011004;

    t124 = ((x685*x686)%(x687^x688));

    if (t124 != -1280) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x689 = UINT8_MAX;
	int8_t x690 = INT8_MIN;
	uint16_t x691 = 0U;
	int32_t t125 = -128530;

    t125 = ((x689*x690)%(x691^x692));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x694 = INT32_MIN;
	int16_t x695 = 0;
	uint32_t x696 = UINT32_MAX;

    t126 = ((x693*x694)%(x695^x696));

    if (t126 != 2146960472LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x697 = INT8_MIN;
	uint32_t x699 = 20655382U;
	int64_t t127 = -652LL;

    t127 = ((x697*x698)%(x699^x700));

    if (t127 != -20609792LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x702 = 4603U;
	int8_t x703 = INT8_MIN;
	static volatile int16_t x704 = INT16_MIN;
	static int32_t t128 = 103;

    t128 = ((x701*x702)%(x703^x704));

    if (t128 != -2089) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x705 = INT8_MAX;
	static int8_t x706 = INT8_MIN;
	int8_t x708 = INT8_MIN;
	volatile int32_t t129 = 3570296;

    t129 = ((x705*x706)%(x707^x708));

    if (t129 != -16256) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x709 = 589;
	uint16_t x710 = 14981U;
	static int64_t x712 = INT64_MIN;
	volatile int64_t t130 = 11LL;

    t130 = ((x709*x710)%(x711^x712));

    if (t130 != 8823809LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x713 = -1;
	uint8_t x714 = 7U;
	uint16_t x715 = 2284U;
	volatile int32_t t131 = -30244;

    t131 = ((x713*x714)%(x715^x716));

    if (t131 != -7) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x717 = -1;
	int32_t x718 = -157290;
	uint16_t x719 = 1025U;
	static int16_t x720 = 0;

    t132 = ((x717*x718)%(x719^x720));

    if (t132 != 465) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x723 = INT8_MIN;

    t133 = ((x721*x722)%(x723^x724));

    if (t133 != 19834) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int8_t x725 = 1;
	uint16_t x727 = 802U;
	int32_t x728 = INT32_MIN;
	static int32_t t134 = 4;

    t134 = ((x725*x726)%(x727^x728));

    if (t134 != -140) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x729 = UINT64_MAX;
	int8_t x730 = INT8_MIN;
	int32_t x731 = 749664570;
	static uint32_t x732 = UINT32_MAX;
	uint64_t t135 = 32261397447489777LLU;

    t135 = ((x729*x730)%(x731^x732));

    if (t135 != 128LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x733 = 1281U;
	volatile int32_t x734 = INT32_MIN;
	uint8_t x735 = 0U;
	static volatile uint8_t x736 = 28U;
	static uint32_t t136 = 0U;

    t136 = ((x733*x734)%(x735^x736));

    if (t136 != 16U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x738 = INT8_MIN;
	uint32_t x740 = 3U;
	volatile int64_t t137 = 4044601635156214616LL;

    t137 = ((x737*x738)%(x739^x740));

    if (t137 != 128LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x741 = 107205833814539664LLU;
	int32_t x743 = -22078;
	uint32_t x744 = 73203501U;
	uint64_t t138 = 821947684097LLU;

    t138 = ((x741*x742)%(x743^x744));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x745 = 0;
	volatile int8_t x746 = INT8_MIN;
	int8_t x747 = INT8_MIN;
	static int16_t x748 = 14;
	int32_t t139 = 82;

    t139 = ((x745*x746)%(x747^x748));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x749 = 6U;
	int8_t x750 = -1;
	static volatile int32_t t140 = 1186;

    t140 = ((x749*x750)%(x751^x752));

    if (t140 != -6) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x753 = -1;
	int32_t x756 = -4272412;
	static volatile int32_t t141 = -1344583;

    t141 = ((x753*x754)%(x755^x756));

    if (t141 != 32768) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint32_t x757 = 123365U;
	int16_t x758 = -361;
	uint8_t x760 = 0U;

    t142 = ((x757*x758)%(x759^x760));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x762 = UINT32_MAX;
	volatile int16_t x763 = -7423;
	static uint16_t x764 = 3511U;
	volatile uint32_t t143 = 25U;

    t143 = ((x761*x762)%(x763^x764));

    if (t143 != 181U) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x765 = INT8_MIN;
	int16_t x766 = -2;
	static int8_t x767 = -1;
	uint16_t x768 = 15388U;
	int32_t t144 = 0;

    t144 = ((x765*x766)%(x767^x768));

    if (t144 != 256) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x769 = -1LL;
	int64_t x770 = -46136973393LL;
	int64_t x771 = INT64_MAX;
	static int64_t x772 = 70051704489237LL;

    t145 = ((x769*x770)%(x771^x772));

    if (t145 != 46136973393LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint64_t x774 = UINT64_MAX;
	uint64_t x775 = UINT64_MAX;
	uint64_t t146 = 16118243130046LLU;

    t146 = ((x773*x774)%(x775^x776));

    if (t146 != 15LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x781 = INT32_MAX;
	int64_t x782 = -1LL;
	int32_t x783 = INT32_MAX;
	int8_t x784 = -1;

    t147 = ((x781*x782)%(x783^x784));

    if (t147 != -2147483647LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x785 = -1;
	uint32_t x786 = UINT32_MAX;
	int16_t x787 = INT16_MAX;
	static int64_t t148 = 1311645077896103LL;

    t148 = ((x785*x786)%(x787^x788));

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x797 = UINT8_MAX;
	int64_t x799 = -1LL;
	int8_t x800 = INT8_MAX;
	static volatile int64_t t149 = 796LL;

    t149 = ((x797*x798)%(x799^x800));

    if (t149 != 1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x802 = UINT64_MAX;
	volatile uint16_t x803 = UINT16_MAX;
	uint64_t x804 = 575943LLU;

    t150 = ((x801*x802)%(x803^x804));

    if (t150 != 32768LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x809 = UINT32_MAX;
	int16_t x810 = -1;
	static uint32_t x811 = 101388963U;
	static int32_t x812 = INT32_MIN;
	volatile uint32_t t151 = 7188U;

    t151 = ((x809*x810)%(x811^x812));

    if (t151 != 1U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x814 = INT8_MIN;
	volatile int8_t x815 = INT8_MAX;
	int8_t x816 = INT8_MIN;
	uint32_t t152 = 69966U;

    t152 = ((x813*x814)%(x815^x816));

    if (t152 != 1313585792U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x817 = UINT8_MAX;
	uint16_t x818 = 15298U;
	int8_t x820 = INT8_MAX;

    t153 = ((x817*x818)%(x819^x820));

    if (t153 != 3900990U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x825 = INT16_MIN;
	uint64_t x826 = 534081957LLU;
	volatile int8_t x827 = INT8_MIN;
	int16_t x828 = -1;
	volatile uint64_t t154 = 499LLU;

    t154 = ((x825*x826)%(x827^x828));

    if (t154 != 68LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x829 = INT8_MIN;
	static int64_t x830 = 64LL;
	int64_t x831 = INT64_MIN;
	static int8_t x832 = -58;
	static int64_t t155 = 194535573609850LL;

    t155 = ((x829*x830)%(x831^x832));

    if (t155 != -8192LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x833 = 1790612603LL;
	uint16_t x835 = 14840U;
	volatile int16_t x836 = INT16_MAX;

    t156 = ((x833*x834)%(x835^x836));

    if (t156 != 6812LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x837 = -1;
	volatile int16_t x838 = 78;
	static volatile int8_t x840 = INT8_MIN;
	static volatile uint64_t t157 = 16247988692LLU;

    t157 = ((x837*x838)%(x839^x840));

    if (t157 != 737056143789LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x841 = -2;
	uint16_t x842 = 461U;
	static int32_t x843 = 543822913;
	int64_t x844 = -916742679LL;
	int64_t t158 = -44448649389LL;

    t158 = ((x841*x842)%(x843^x844));

    if (t158 != -922LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x846 = INT32_MAX;
	volatile int64_t x847 = INT64_MIN;
	int32_t x848 = -1;
	static volatile int64_t t159 = 211261732209LL;

    t159 = ((x845*x846)%(x847^x848));

    if (t159 != 2147483649LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x850 = -1LL;
	int32_t x851 = 1290;
	static int64_t t160 = -378503751447316897LL;

    t160 = ((x849*x850)%(x851^x852));

    if (t160 != -381LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x857 = 2;
	static uint32_t x859 = 8102U;
	volatile uint8_t x860 = 7U;
	volatile uint32_t t161 = 7592496U;

    t161 = ((x857*x858)%(x859^x860));

    if (t161 != 2719U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x861 = INT16_MIN;
	int8_t x862 = -18;
	volatile int64_t x863 = INT64_MAX;
	uint64_t x864 = UINT64_MAX;
	volatile uint64_t t162 = 1527544870701806LLU;

    t162 = ((x861*x862)%(x863^x864));

    if (t162 != 589824LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x865 = INT32_MAX;
	uint32_t x866 = 754478U;
	uint64_t x867 = UINT64_MAX;
	volatile int16_t x868 = INT16_MAX;
	uint64_t t163 = 57958089823LLU;

    t163 = ((x865*x866)%(x867^x868));

    if (t163 != 4294212818LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x869 = -2;
	volatile uint16_t x870 = UINT16_MAX;
	uint16_t x872 = 26U;
	volatile int32_t t164 = 75280339;

    t164 = ((x869*x870)%(x871^x872));

    if (t164 != -6) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x873 = -1;
	uint8_t x874 = 25U;
	volatile int16_t x875 = -7;
	static int8_t x876 = 3;
	int32_t t165 = -828;

    t165 = ((x873*x874)%(x875^x876));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x881 = 585195210027LL;
	uint16_t x882 = 3U;
	int16_t x884 = INT16_MIN;
	int64_t t166 = 1814769662727257LL;

    t166 = ((x881*x882)%(x883^x884));

    if (t166 != 15913LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x893 = INT16_MIN;
	volatile uint16_t x894 = UINT16_MAX;
	volatile int16_t x895 = INT16_MAX;
	int8_t x896 = -1;
	int32_t t167 = -18553389;

    t167 = ((x893*x894)%(x895^x896));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x897 = -19942898LL;
	int16_t x898 = INT16_MIN;
	volatile int32_t x899 = 104761508;
	uint16_t x900 = 10U;
	volatile int64_t t168 = -28233LL;

    t168 = ((x897*x898)%(x899^x900));

    if (t168 != 91293898LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x905 = INT16_MIN;
	static int16_t x906 = INT16_MIN;
	static uint64_t x907 = UINT64_MAX;
	static int8_t x908 = INT8_MAX;
	uint64_t t169 = 80024710LLU;

    t169 = ((x905*x906)%(x907^x908));

    if (t169 != 1073741824LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x909 = UINT64_MAX;
	uint16_t x910 = UINT16_MAX;
	volatile int32_t x912 = 107155;
	uint64_t t170 = 1722LLU;

    t170 = ((x909*x910)%(x911^x912));

    if (t170 != 834661477LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x913 = INT8_MIN;
	int16_t x914 = INT16_MIN;
	int32_t x915 = INT32_MIN;
	int16_t x916 = INT16_MAX;
	volatile int32_t t171 = -14;

    t171 = ((x913*x914)%(x915^x916));

    if (t171 != 4194304) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x917 = 24LLU;
	uint64_t x918 = UINT64_MAX;
	int64_t x919 = -1LL;
	volatile int8_t x920 = INT8_MIN;
	volatile uint64_t t172 = 0LLU;

    t172 = ((x917*x918)%(x919^x920));

    if (t172 != 105LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x922 = INT8_MIN;
	int64_t t173 = 358405LL;

    t173 = ((x921*x922)%(x923^x924));

    if (t173 != 128LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x933 = 7986323922600177LLU;
	int16_t x934 = INT16_MAX;
	int32_t x935 = -1;

    t174 = ((x933*x934)%(x935^x936));

    if (t174 != 1330442365LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x937 = INT8_MAX;
	volatile uint8_t x938 = UINT8_MAX;
	uint64_t x939 = 36111743520088826LLU;
	static volatile int16_t x940 = INT16_MAX;
	volatile uint64_t t175 = 1379544781LLU;

    t175 = ((x937*x938)%(x939^x940));

    if (t175 != 32385LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x941 = UINT32_MAX;
	int8_t x942 = INT8_MIN;
	static int64_t t176 = 34523771222759LL;

    t176 = ((x941*x942)%(x943^x944));

    if (t176 != 128LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x945 = 19U;
	int64_t x946 = 146354LL;
	int8_t x947 = INT8_MIN;
	int8_t x948 = -6;
	volatile int64_t t177 = 111425LL;

    t177 = ((x945*x946)%(x947^x948));

    if (t177 != 102LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x949 = -1;
	uint64_t x950 = 2211354038936714LLU;
	static uint32_t x951 = UINT32_MAX;
	int64_t x952 = -1LL;
	static volatile uint64_t t178 = 1LLU;

    t178 = ((x949*x950)%(x951^x952));

    if (t178 != 18444532719670614902LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x953 = UINT8_MAX;
	int8_t x954 = INT8_MIN;
	uint8_t x956 = 31U;
	uint64_t t179 = 1204LLU;

    t179 = ((x953*x954)%(x955^x956));

    if (t179 != 18446744073709518976LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x965 = 1;
	uint32_t x966 = 8U;
	volatile uint32_t x967 = 103U;
	static uint16_t x968 = UINT16_MAX;

    t180 = ((x965*x966)%(x967^x968));

    if (t180 != 8U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x970 = UINT16_MAX;
	int8_t x971 = INT8_MIN;
	int8_t x972 = -1;

    t181 = ((x969*x970)%(x971^x972));

    if (t181 != -3) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x973 = UINT16_MAX;
	int16_t x974 = -1;
	int16_t x975 = INT16_MIN;
	int32_t t182 = 1417950;

    t182 = ((x973*x974)%(x975^x976));

    if (t182 != -509) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x978 = INT32_MIN;
	uint64_t x979 = 1348338337162688529LLU;
	static int16_t x980 = -1272;

    t183 = ((x977*x978)%(x979^x980));

    if (t183 != 1348338335015206119LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x981 = -1LL;
	static int8_t x982 = -1;
	volatile int32_t x983 = INT32_MIN;
	uint64_t t184 = 46994780LLU;

    t184 = ((x981*x982)%(x983^x984));

    if (t184 != 1LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x985 = 2U;
	int16_t x986 = 6819;
	volatile uint64_t x987 = 6957605912LLU;
	static volatile uint64_t t185 = 78621931LLU;

    t185 = ((x985*x986)%(x987^x988));

    if (t185 != 13638LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x990 = INT32_MIN;
	static int64_t x991 = -5LL;
	uint64_t x992 = 1179LLU;
	uint64_t t186 = 51264398467617668LLU;

    t186 = ((x989*x990)%(x991^x992));

    if (t186 != 11285301295675604992LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1001 = INT8_MIN;
	uint8_t x1002 = 1U;
	static uint64_t x1004 = 1518486582LLU;
	static volatile uint64_t t187 = 11LLU;

    t187 = ((x1001*x1002)%(x1003^x1004));

    if (t187 != 487056287LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1013 = 59U;
	static uint64_t x1014 = 547337LLU;
	int32_t x1016 = INT32_MAX;
	uint64_t t188 = 2135LLU;

    t188 = ((x1013*x1014)%(x1015^x1016));

    if (t188 != 32292883LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1017 = 1319;
	static volatile int16_t x1018 = 0;
	static volatile int16_t x1019 = 13;
	static int32_t x1020 = INT32_MIN;
	volatile int32_t t189 = -12;

    t189 = ((x1017*x1018)%(x1019^x1020));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1021 = -913018989260LL;
	uint32_t x1022 = 1U;
	int32_t x1023 = 733394532;
	int8_t x1024 = -1;
	static volatile int64_t t190 = -3692LL;

    t190 = ((x1021*x1022)%(x1023^x1024));

    if (t190 != -676190208LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1025 = -6;
	int64_t x1027 = -1294906898120LL;
	int32_t x1028 = INT32_MIN;
	int64_t t191 = 207LL;

    t191 = ((x1025*x1026)%(x1027^x1028));

    if (t191 != 196608LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1034 = INT8_MAX;
	int16_t x1035 = -1;
	static volatile int8_t x1036 = 36;
	uint64_t t192 = 1686993403875LLU;

    t192 = ((x1033*x1034)%(x1035^x1036));

    if (t192 != 90164810722977LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1037 = -1;
	uint16_t x1038 = 29729U;
	int8_t x1039 = INT8_MIN;
	int16_t x1040 = INT16_MAX;

    t193 = ((x1037*x1038)%(x1039^x1040));

    if (t193 != -29729) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1045 = -1;
	uint64_t x1046 = 14893LLU;
	volatile uint64_t x1047 = 3033544391791LLU;
	uint64_t x1048 = 5733LLU;
	uint64_t t194 = 99148357918131607LLU;

    t194 = ((x1045*x1046)%(x1047^x1048));

    if (t194 != 305870474201LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1049 = 288265330040LL;
	volatile int16_t x1050 = INT16_MIN;
	volatile int16_t x1051 = INT16_MIN;
	static volatile uint32_t x1052 = UINT32_MAX;
	int64_t t195 = -4075LL;

    t195 = ((x1049*x1050)%(x1051^x1052));

    if (t195 != -6764LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1053 = UINT64_MAX;
	uint64_t x1054 = 2198418644317239370LLU;
	int16_t x1055 = INT16_MIN;

    t196 = ((x1053*x1054)%(x1055^x1056));

    if (t196 != 14081LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x1065 = 0U;
	int8_t x1067 = INT8_MAX;
	int32_t x1068 = 126;
	static volatile uint32_t t197 = 696181U;

    t197 = ((x1065*x1066)%(x1067^x1068));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1069 = 24U;
	uint32_t x1070 = UINT32_MAX;
	int32_t x1071 = -5;
	int32_t x1072 = 1;
	uint32_t t198 = 7398616U;

    t198 = ((x1069*x1070)%(x1071^x1072));

    if (t198 != 4294967272U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1073 = 52766LLU;
	uint32_t x1074 = UINT32_MAX;
	int32_t x1075 = INT32_MIN;
	volatile uint16_t x1076 = UINT16_MAX;
	static volatile uint64_t t199 = 186LLU;

    t199 = ((x1073*x1074)%(x1075^x1076));

    if (t199 != 226628244287970LLU) { NG(); } else { ; }
	
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


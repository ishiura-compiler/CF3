
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

static int32_t x3 = 0;
static int64_t x4 = -168887440135LL;
static int16_t x13 = -1;
int8_t x23 = INT8_MIN;
volatile uint64_t x24 = 96600531272LLU;
uint64_t t4 = 68129LLU;
int32_t x29 = INT32_MAX;
uint16_t x30 = 1813U;
uint64_t x40 = 1974007000151532674LLU;
uint16_t x51 = UINT16_MAX;
int8_t x56 = -1;
static int16_t x68 = 0;
int64_t x84 = INT64_MIN;
int16_t x89 = INT16_MIN;
int64_t x95 = 1581281865585245LL;
volatile int32_t t19 = 57930;
uint8_t x105 = UINT8_MAX;
int16_t x115 = INT16_MAX;
volatile int8_t x128 = INT8_MAX;
int64_t x140 = INT64_MIN;
uint64_t t27 = 438LLU;
volatile uint64_t x143 = 540LLU;
int64_t x145 = 4778518LL;
int32_t t29 = -71771;
uint32_t x156 = 6607597U;
int16_t x171 = 45;
uint16_t x172 = UINT16_MAX;
int32_t t36 = 2;
uint16_t x177 = 40U;
int64_t t37 = -1LL;
uint64_t x181 = UINT64_MAX;
int64_t x187 = 90LL;
int16_t x192 = 484;
volatile uint64_t t40 = 1619055LLU;
uint16_t x196 = 7387U;
uint32_t x197 = UINT32_MAX;
int16_t x202 = INT16_MIN;
volatile int64_t t43 = 46382118612651LL;
int64_t t44 = -126894467546LL;
volatile int64_t x216 = -1LL;
uint64_t t46 = 120234989253622LLU;
static int32_t x220 = INT32_MAX;
int16_t x226 = INT16_MIN;
int8_t x232 = -9;
int16_t x234 = INT16_MIN;
static int8_t x238 = 4;
static int32_t x242 = 7908720;
static int64_t x243 = INT64_MIN;
uint16_t x245 = UINT16_MAX;
static uint8_t x246 = 30U;
static int64_t x247 = 1772193LL;
int64_t t53 = 8318939373LL;
static int8_t x250 = INT8_MAX;
static volatile int16_t x255 = INT16_MAX;
static int16_t x257 = INT16_MAX;
int16_t x262 = INT16_MIN;
uint32_t x269 = 3796U;
int16_t x270 = -1;
volatile int64_t t59 = -1372706263216564LL;
int32_t x293 = INT32_MIN;
int64_t x294 = -1LL;
static int64_t t63 = 24LL;
int8_t x300 = 0;
uint32_t x306 = UINT32_MAX;
volatile int16_t x307 = -9572;
static volatile int64_t t66 = -56955268LL;
int8_t x310 = INT8_MIN;
volatile int32_t x311 = 824;
volatile int64_t x315 = -1LL;
int16_t x316 = INT16_MAX;
int16_t x320 = -1;
int32_t t70 = 4;
static uint64_t x340 = 1066LLU;
int32_t x350 = INT32_MAX;
volatile int16_t x355 = INT16_MIN;
int8_t x364 = 0;
volatile uint64_t t79 = 6631553601613150LLU;
uint64_t x374 = UINT64_MAX;
int64_t t80 = -52471754303170LL;
int8_t x382 = -1;
static uint8_t x383 = 54U;
int64_t x393 = 51LL;
int32_t x394 = INT32_MIN;
volatile uint64_t t86 = 147973182024581LLU;
uint8_t x407 = 0U;
int16_t x408 = -1;
int64_t x414 = -1LL;
int16_t x424 = INT16_MAX;
volatile int64_t x429 = 2LL;
volatile int64_t x437 = -112LL;
volatile uint16_t x440 = 420U;
uint32_t x451 = UINT32_MAX;
static int64_t x452 = -8793943556505LL;
uint32_t x454 = UINT32_MAX;
int64_t x457 = INT64_MAX;
volatile int8_t x464 = -1;
volatile int32_t t101 = -7;
static int32_t x466 = -1;
volatile int32_t t102 = 2116828;
int8_t x470 = INT8_MAX;
static int64_t x472 = -68366226LL;
int32_t x480 = -36212691;
static volatile int32_t x495 = INT32_MIN;
volatile uint16_t x515 = 8832U;
volatile int64_t t112 = -335LL;
static volatile int32_t t115 = 246915995;
volatile uint32_t x531 = 13837361U;
volatile uint32_t t116 = 16762595U;
volatile int32_t x534 = -1;
int8_t x540 = INT8_MIN;
int32_t x545 = INT32_MIN;
int16_t x554 = INT16_MIN;
uint64_t t121 = 132688595033731LLU;
uint64_t x557 = UINT64_MAX;
int16_t x558 = INT16_MIN;
volatile int16_t x560 = -1;
uint8_t x562 = 3U;
volatile int32_t x565 = 46784;
uint32_t x566 = 8618U;
uint32_t x572 = 6U;
volatile int64_t x574 = INT64_MIN;
uint64_t x583 = 81429144744247268LLU;
uint8_t x591 = UINT8_MAX;
volatile int32_t t130 = 10438;
static int32_t x602 = INT32_MIN;
int16_t x603 = -1;
int8_t x604 = INT8_MIN;
int16_t x605 = -46;
static volatile uint8_t x613 = 2U;
volatile int8_t x615 = -16;
uint16_t x617 = 3256U;
int8_t x618 = -1;
static uint64_t x622 = 16751633860LLU;
uint8_t x627 = 0U;
int64_t x629 = INT64_MIN;
volatile int32_t t139 = -705053;
uint32_t x633 = UINT32_MAX;
int8_t x635 = 10;
volatile int64_t x642 = INT64_MAX;
int32_t x645 = INT32_MIN;
int8_t x649 = -2;
int32_t t143 = -723516706;
volatile int64_t x669 = -1LL;
uint8_t x671 = 4U;
int16_t x672 = INT16_MAX;
volatile uint16_t x674 = 10U;
int32_t x677 = INT32_MIN;
int16_t x679 = INT16_MIN;
int16_t x687 = INT16_MIN;
static int8_t x691 = 1;
uint64_t x694 = UINT64_MAX;
static uint32_t t150 = 695U;
volatile int32_t x699 = -1;
uint64_t x700 = 0LLU;
int32_t x702 = INT32_MAX;
int16_t x703 = -1;
int8_t x707 = 44;
volatile uint64_t x709 = 1363LLU;
static int64_t t154 = 5520LL;
int32_t x714 = INT32_MIN;
int16_t x721 = INT16_MIN;
volatile int16_t x726 = 24;
uint64_t x736 = 124612580089546477LLU;
int8_t x737 = INT8_MIN;
static int8_t x739 = INT8_MAX;
int64_t x741 = 12129961LL;
static volatile int16_t x743 = INT16_MAX;
volatile uint64_t t163 = 7114316613391777LLU;
int32_t x756 = INT32_MIN;
int8_t x761 = INT8_MAX;
static int16_t x768 = 118;
volatile int64_t t168 = -49185063513LL;
uint32_t x776 = 1004654284U;
int16_t x782 = -1;
static uint16_t x784 = 48U;
static int64_t x797 = -1LL;
int64_t x813 = INT64_MIN;
static int32_t x819 = INT32_MIN;
int64_t x826 = INT64_MAX;
uint64_t x832 = 11224843432LLU;
uint64_t t183 = 1846LLU;
int32_t x834 = INT32_MAX;
int64_t x838 = 235118181200854LL;
uint32_t x839 = UINT32_MAX;
uint32_t t185 = 1936U;
int8_t x841 = INT8_MIN;
int16_t x844 = -1;
volatile uint64_t x845 = 816243003711305612LLU;
uint32_t t188 = 102115U;
int32_t x854 = 389799357;
int16_t x855 = -1;
int16_t x856 = INT16_MIN;
static volatile int64_t x857 = INT64_MAX;
volatile uint32_t t190 = 311618U;
static int16_t x862 = INT16_MIN;
uint64_t x875 = 1107759745LLU;
int16_t x882 = -68;
int64_t x886 = INT64_MIN;
int16_t x889 = -1;
int64_t x890 = INT64_MIN;
static int32_t x893 = INT32_MIN;
volatile uint32_t x897 = UINT32_MAX;


void f0(void) {
    	uint16_t x1 = 211U;
	int8_t x2 = INT8_MIN;
	int64_t t0 = 287778528LL;

    t0 = ((x1!=x2)*(x3-x4));

    if (t0 != 168887440135LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x9 = -1LL;
	int64_t x10 = 541702489400120476LL;
	static int16_t x11 = 4;
	uint64_t x12 = 1476472909192134LLU;
	uint64_t t1 = 1886LLU;

    t1 = ((x9!=x10)*(x11-x12));

    if (t1 != 18445267600800359486LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x14 = -1LL;
	int8_t x15 = INT8_MIN;
	int64_t x16 = -182398027LL;
	static volatile int64_t t2 = -2567664817994375061LL;

    t2 = ((x13!=x14)*(x15-x16));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = INT16_MAX;
	uint16_t x18 = 1593U;
	int16_t x19 = INT16_MIN;
	int8_t x20 = INT8_MAX;
	int32_t t3 = 102398;

    t3 = ((x17!=x18)*(x19-x20));

    if (t3 != -32895) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x21 = 119U;
	uint8_t x22 = 29U;

    t4 = ((x21!=x22)*(x23-x24));

    if (t4 != 18446743977109020216LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MAX;
	int8_t x26 = INT8_MIN;
	volatile int64_t x27 = -1957649429LL;
	static uint8_t x28 = 2U;
	volatile int64_t t5 = 726877067220LL;

    t5 = ((x25!=x26)*(x27-x28));

    if (t5 != -1957649431LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x31 = INT16_MAX;
	int16_t x32 = 1;
	volatile int32_t t6 = -198341;

    t6 = ((x29!=x30)*(x31-x32));

    if (t6 != 32766) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = INT16_MAX;
	uint8_t x34 = 77U;
	int32_t x35 = 106337;
	uint64_t x36 = 23329258LLU;
	static volatile uint64_t t7 = 11476309749099LLU;

    t7 = ((x33!=x34)*(x35-x36));

    if (t7 != 18446744073686328695LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = INT64_MAX;
	int8_t x38 = -1;
	volatile int32_t x39 = INT32_MIN;
	volatile uint64_t t8 = 24LLU;

    t8 = ((x37!=x38)*(x39-x40));

    if (t8 != 16472737071410535294LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = -1LL;
	int32_t x42 = 23138;
	int32_t x43 = INT32_MAX;
	uint16_t x44 = 290U;
	volatile int32_t t9 = 3802815;

    t9 = ((x41!=x42)*(x43-x44));

    if (t9 != 2147483357) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x45 = 85265908928816691LLU;
	uint8_t x46 = 43U;
	int8_t x47 = 3;
	uint64_t x48 = UINT64_MAX;
	volatile uint64_t t10 = 103697LLU;

    t10 = ((x45!=x46)*(x47-x48));

    if (t10 != 4LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = 1;
	static int32_t x50 = -1;
	static volatile int16_t x52 = -114;
	int32_t t11 = 1893;

    t11 = ((x49!=x50)*(x51-x52));

    if (t11 != 65649) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = INT64_MIN;
	int8_t x54 = INT8_MIN;
	int16_t x55 = -25;
	static volatile int32_t t12 = 913988416;

    t12 = ((x53!=x54)*(x55-x56));

    if (t12 != -24) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x61 = -1LL;
	int32_t x62 = INT32_MIN;
	int8_t x63 = -1;
	uint16_t x64 = 96U;
	volatile int32_t t13 = 6408721;

    t13 = ((x61!=x62)*(x63-x64));

    if (t13 != -97) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x65 = UINT64_MAX;
	static uint64_t x66 = UINT64_MAX;
	int32_t x67 = INT32_MIN;
	volatile int32_t t14 = -302560;

    t14 = ((x65!=x66)*(x67-x68));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x81 = -24;
	volatile int8_t x82 = INT8_MAX;
	int32_t x83 = INT32_MIN;
	volatile int64_t t15 = -3095477LL;

    t15 = ((x81!=x82)*(x83-x84));

    if (t15 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x85 = INT64_MAX;
	static volatile int64_t x86 = INT64_MIN;
	int64_t x87 = -34LL;
	uint16_t x88 = 5U;
	static volatile int64_t t16 = -4489412875078LL;

    t16 = ((x85!=x86)*(x87-x88));

    if (t16 != -39LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x90 = INT64_MAX;
	int8_t x91 = 34;
	volatile uint64_t x92 = 97212155077LLU;
	uint64_t t17 = 237LLU;

    t17 = ((x89!=x90)*(x91-x92));

    if (t17 != 18446743976497396573LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x93 = 12148632;
	uint32_t x94 = 2U;
	static int32_t x96 = -1;
	volatile int64_t t18 = -3235533362594134LL;

    t18 = ((x93!=x94)*(x95-x96));

    if (t18 != 1581281865585246LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x97 = 3;
	static volatile uint16_t x98 = UINT16_MAX;
	int16_t x99 = -1;
	uint16_t x100 = UINT16_MAX;

    t19 = ((x97!=x98)*(x99-x100));

    if (t19 != -65536) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x101 = INT32_MIN;
	volatile int8_t x102 = INT8_MAX;
	uint64_t x103 = UINT64_MAX;
	int16_t x104 = 6;
	static volatile uint64_t t20 = 1348896613807LLU;

    t20 = ((x101!=x102)*(x103-x104));

    if (t20 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x106 = 7U;
	volatile uint16_t x107 = 0U;
	int64_t x108 = -1LL;
	static int64_t t21 = -1022651478171773755LL;

    t21 = ((x105!=x106)*(x107-x108));

    if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x113 = INT16_MIN;
	int16_t x114 = -1;
	uint64_t x116 = UINT64_MAX;
	static volatile uint64_t t22 = 44615LLU;

    t22 = ((x113!=x114)*(x115-x116));

    if (t22 != 32768LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x117 = 38LLU;
	uint8_t x118 = UINT8_MAX;
	uint16_t x119 = 2444U;
	int16_t x120 = INT16_MIN;
	volatile int32_t t23 = 544627174;

    t23 = ((x117!=x118)*(x119-x120));

    if (t23 != 35212) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x121 = 1;
	int64_t x122 = -1LL;
	int8_t x123 = INT8_MAX;
	static uint32_t x124 = 2065900U;
	uint32_t t24 = 844579112U;

    t24 = ((x121!=x122)*(x123-x124));

    if (t24 != 4292901523U) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x125 = INT64_MAX;
	uint8_t x126 = 30U;
	volatile int32_t x127 = -62340;
	int32_t t25 = -900;

    t25 = ((x125!=x126)*(x127-x128));

    if (t25 != -62467) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x129 = 6518898LLU;
	int64_t x130 = 44319547LL;
	volatile uint8_t x131 = UINT8_MAX;
	uint32_t x132 = 1458U;
	uint32_t t26 = 74894U;

    t26 = ((x129!=x130)*(x131-x132));

    if (t26 != 4294966093U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x137 = -2;
	static int32_t x138 = INT32_MIN;
	uint64_t x139 = 11LLU;

    t27 = ((x137!=x138)*(x139-x140));

    if (t27 != 9223372036854775819LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x141 = INT16_MIN;
	static int8_t x142 = INT8_MIN;
	volatile uint8_t x144 = 30U;
	static uint64_t t28 = 1079230596498LLU;

    t28 = ((x141!=x142)*(x143-x144));

    if (t28 != 510LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x146 = 3430;
	uint16_t x147 = UINT16_MAX;
	int8_t x148 = INT8_MIN;

    t29 = ((x145!=x146)*(x147-x148));

    if (t29 != 65663) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x149 = INT16_MIN;
	volatile uint32_t x150 = 14439965U;
	volatile int64_t x151 = INT64_MIN;
	int32_t x152 = INT32_MIN;
	int64_t t30 = 1798418076437160LL;

    t30 = ((x149!=x150)*(x151-x152));

    if (t30 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x153 = 2497;
	int8_t x154 = 6;
	static int8_t x155 = INT8_MIN;
	uint32_t t31 = 1U;

    t31 = ((x153!=x154)*(x155-x156));

    if (t31 != 4288359571U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x157 = -2644550;
	volatile uint32_t x158 = 93593850U;
	uint32_t x159 = 3U;
	int32_t x160 = -1;
	volatile uint32_t t32 = 7562U;

    t32 = ((x157!=x158)*(x159-x160));

    if (t32 != 4U) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x161 = INT64_MIN;
	static uint64_t x162 = 25288LLU;
	uint64_t x163 = 6395358677612929LLU;
	int16_t x164 = 178;
	volatile uint64_t t33 = 335LLU;

    t33 = ((x161!=x162)*(x163-x164));

    if (t33 != 6395358677612751LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x165 = -1;
	int64_t x166 = INT64_MIN;
	uint16_t x167 = 3U;
	volatile uint16_t x168 = 7U;
	volatile int32_t t34 = -2816993;

    t34 = ((x165!=x166)*(x167-x168));

    if (t34 != -4) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x169 = UINT8_MAX;
	int16_t x170 = 257;
	static int32_t t35 = 2;

    t35 = ((x169!=x170)*(x171-x172));

    if (t35 != -65490) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x173 = -177;
	int32_t x174 = -1;
	int8_t x175 = -40;
	uint8_t x176 = 1U;

    t36 = ((x173!=x174)*(x175-x176));

    if (t36 != -41) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x178 = UINT16_MAX;
	int64_t x179 = -7578634532668LL;
	uint32_t x180 = 287U;

    t37 = ((x177!=x178)*(x179-x180));

    if (t37 != -7578634532955LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x182 = 1881463908164351585LL;
	static uint64_t x183 = UINT64_MAX;
	int32_t x184 = INT32_MIN;
	uint64_t t38 = 34190LLU;

    t38 = ((x181!=x182)*(x183-x184));

    if (t38 != 2147483647LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x185 = INT64_MAX;
	static int8_t x186 = INT8_MIN;
	volatile int8_t x188 = INT8_MAX;
	int64_t t39 = -372768625899LL;

    t39 = ((x185!=x186)*(x187-x188));

    if (t39 != -37LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x189 = UINT32_MAX;
	int32_t x190 = INT32_MIN;
	uint64_t x191 = 972196867414934842LLU;

    t40 = ((x189!=x190)*(x191-x192));

    if (t40 != 972196867414934358LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x193 = INT16_MIN;
	uint16_t x194 = 1988U;
	int8_t x195 = INT8_MIN;
	static int32_t t41 = -54116;

    t41 = ((x193!=x194)*(x195-x196));

    if (t41 != -7515) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x198 = INT16_MIN;
	uint8_t x199 = 113U;
	static int16_t x200 = INT16_MIN;
	volatile int32_t t42 = 12304;

    t42 = ((x197!=x198)*(x199-x200));

    if (t42 != 32881) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x201 = INT64_MAX;
	uint8_t x203 = UINT8_MAX;
	int64_t x204 = -1LL;

    t43 = ((x201!=x202)*(x203-x204));

    if (t43 != 256LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x205 = 19;
	int16_t x206 = 701;
	int64_t x207 = -888450693804036070LL;
	static int8_t x208 = INT8_MIN;

    t44 = ((x205!=x206)*(x207-x208));

    if (t44 != -888450693804035942LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x209 = UINT8_MAX;
	int32_t x210 = -41447;
	volatile int16_t x211 = -1;
	uint8_t x212 = UINT8_MAX;
	volatile int32_t t45 = -119765553;

    t45 = ((x209!=x210)*(x211-x212));

    if (t45 != -256) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int16_t x213 = INT16_MIN;
	volatile uint8_t x214 = 53U;
	uint64_t x215 = 1260491LLU;

    t46 = ((x213!=x214)*(x215-x216));

    if (t46 != 1260492LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x217 = 14;
	volatile uint8_t x218 = 3U;
	int64_t x219 = -1LL;
	int64_t t47 = 1LL;

    t47 = ((x217!=x218)*(x219-x220));

    if (t47 != -2147483648LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x225 = INT8_MIN;
	static int16_t x227 = 1426;
	static int8_t x228 = INT8_MAX;
	int32_t t48 = -4612;

    t48 = ((x225!=x226)*(x227-x228));

    if (t48 != 1299) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x229 = UINT8_MAX;
	static int64_t x230 = 40390LL;
	int64_t x231 = 1659LL;
	volatile int64_t t49 = -3LL;

    t49 = ((x229!=x230)*(x231-x232));

    if (t49 != 1668LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x233 = INT16_MIN;
	int32_t x235 = 16113;
	uint64_t x236 = UINT64_MAX;
	static uint64_t t50 = 3554512139638527LLU;

    t50 = ((x233!=x234)*(x235-x236));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x237 = INT16_MIN;
	int8_t x239 = 15;
	volatile int8_t x240 = -1;
	volatile int32_t t51 = 1689;

    t51 = ((x237!=x238)*(x239-x240));

    if (t51 != 16) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x241 = INT64_MIN;
	volatile int8_t x244 = INT8_MIN;
	volatile int64_t t52 = 1410162832121LL;

    t52 = ((x241!=x242)*(x243-x244));

    if (t52 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x248 = 29U;

    t53 = ((x245!=x246)*(x247-x248));

    if (t53 != 1772164LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x249 = 3;
	static int32_t x251 = 3;
	int32_t x252 = -26;
	volatile int32_t t54 = -610049;

    t54 = ((x249!=x250)*(x251-x252));

    if (t54 != 29) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x253 = -1394;
	uint32_t x254 = UINT32_MAX;
	uint32_t x256 = 122640007U;
	uint32_t t55 = 535U;

    t55 = ((x253!=x254)*(x255-x256));

    if (t55 != 4172360056U) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x258 = 395477LL;
	volatile int16_t x259 = INT16_MIN;
	static int64_t x260 = 0LL;
	volatile int64_t t56 = 126993LL;

    t56 = ((x257!=x258)*(x259-x260));

    if (t56 != -32768LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x261 = UINT32_MAX;
	uint8_t x263 = 1U;
	uint64_t x264 = UINT64_MAX;
	volatile uint64_t t57 = 1282350604LLU;

    t57 = ((x261!=x262)*(x263-x264));

    if (t57 != 2LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x265 = INT16_MIN;
	static volatile int32_t x266 = INT32_MIN;
	int64_t x267 = 10558LL;
	volatile int64_t x268 = -15280LL;
	volatile int64_t t58 = 17625432235174LL;

    t58 = ((x265!=x266)*(x267-x268));

    if (t58 != 25838LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x271 = -1684751734LL;
	int16_t x272 = 1140;

    t59 = ((x269!=x270)*(x271-x272));

    if (t59 != -1684752874LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x281 = UINT8_MAX;
	volatile uint32_t x282 = 84609919U;
	int8_t x283 = -1;
	uint16_t x284 = 5029U;
	volatile int32_t t60 = 1244;

    t60 = ((x281!=x282)*(x283-x284));

    if (t60 != -5030) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x285 = 4LLU;
	int64_t x286 = 235092035LL;
	volatile int16_t x287 = INT16_MIN;
	int32_t x288 = 1713;
	int32_t t61 = 5439;

    t61 = ((x285!=x286)*(x287-x288));

    if (t61 != -34481) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x289 = INT64_MIN;
	static int8_t x290 = INT8_MIN;
	int64_t x291 = INT64_MAX;
	int64_t x292 = 27617745970LL;
	static int64_t t62 = -162862632524LL;

    t62 = ((x289!=x290)*(x291-x292));

    if (t62 != 9223372009237029837LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x295 = INT64_MAX;
	int32_t x296 = 8;

    t63 = ((x293!=x294)*(x295-x296));

    if (t63 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x297 = INT64_MIN;
	int16_t x298 = 1;
	uint32_t x299 = 81U;
	volatile uint32_t t64 = 11541055U;

    t64 = ((x297!=x298)*(x299-x300));

    if (t64 != 81U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x301 = 48U;
	int8_t x302 = -1;
	volatile uint32_t x303 = 141U;
	static int64_t x304 = -15305LL;
	int64_t t65 = -40934066LL;

    t65 = ((x301!=x302)*(x303-x304));

    if (t65 != 15446LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x305 = INT64_MAX;
	static int64_t x308 = 211292869920386752LL;

    t66 = ((x305!=x306)*(x307-x308));

    if (t66 != -211292869920396324LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x309 = -1;
	volatile int16_t x312 = INT16_MIN;
	volatile int32_t t67 = -2930605;

    t67 = ((x309!=x310)*(x311-x312));

    if (t67 != 33592) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x313 = -9;
	volatile uint64_t x314 = 494663251LLU;
	int64_t t68 = 4044574826LL;

    t68 = ((x313!=x314)*(x315-x316));

    if (t68 != -32768LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x317 = -1;
	int64_t x318 = -7360758706482235LL;
	uint8_t x319 = 0U;
	static int32_t t69 = 43;

    t69 = ((x317!=x318)*(x319-x320));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x321 = INT16_MAX;
	static volatile int16_t x322 = INT16_MIN;
	uint8_t x323 = 99U;
	int16_t x324 = INT16_MAX;

    t70 = ((x321!=x322)*(x323-x324));

    if (t70 != -32668) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x329 = UINT16_MAX;
	int32_t x330 = INT32_MIN;
	volatile int16_t x331 = INT16_MIN;
	volatile uint8_t x332 = 30U;
	volatile int32_t t71 = 750028778;

    t71 = ((x329!=x330)*(x331-x332));

    if (t71 != -32798) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x333 = 194;
	int64_t x334 = -1LL;
	volatile uint16_t x335 = 0U;
	int8_t x336 = INT8_MIN;
	volatile int32_t t72 = -19;

    t72 = ((x333!=x334)*(x335-x336));

    if (t72 != 128) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x337 = INT32_MIN;
	uint16_t x338 = UINT16_MAX;
	volatile uint32_t x339 = 0U;
	volatile uint64_t t73 = 90LLU;

    t73 = ((x337!=x338)*(x339-x340));

    if (t73 != 18446744073709550550LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x345 = INT32_MIN;
	volatile uint64_t x346 = 778LLU;
	int32_t x347 = INT32_MAX;
	uint8_t x348 = 0U;
	int32_t t74 = INT32_MAX;

    t74 = ((x345!=x346)*(x347-x348));

    if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x349 = 8148014;
	int32_t x351 = INT32_MIN;
	static int16_t x352 = INT16_MIN;
	volatile int32_t t75 = 1;

    t75 = ((x349!=x350)*(x351-x352));

    if (t75 != -2147450880) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x353 = 5752;
	int16_t x354 = INT16_MIN;
	int16_t x356 = 4;
	volatile int32_t t76 = 235782;

    t76 = ((x353!=x354)*(x355-x356));

    if (t76 != -32772) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x361 = -33657215;
	uint64_t x362 = 13LLU;
	uint16_t x363 = 333U;
	static int32_t t77 = 30970373;

    t77 = ((x361!=x362)*(x363-x364));

    if (t77 != 333) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x365 = INT16_MIN;
	static int16_t x366 = -128;
	uint32_t x367 = 1883584U;
	static int8_t x368 = 7;
	uint32_t t78 = 0U;

    t78 = ((x365!=x366)*(x367-x368));

    if (t78 != 1883577U) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x369 = -3847;
	int16_t x370 = INT16_MAX;
	int16_t x371 = INT16_MIN;
	uint64_t x372 = 2092235322490LLU;

    t79 = ((x369!=x370)*(x371-x372));

    if (t79 != 18446741981474196358LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x373 = INT16_MAX;
	static volatile int64_t x375 = -1LL;
	static int8_t x376 = INT8_MIN;

    t80 = ((x373!=x374)*(x375-x376));

    if (t80 != 127LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x377 = 230LL;
	int16_t x378 = -1;
	static int16_t x379 = -38;
	int16_t x380 = INT16_MIN;
	static int32_t t81 = -7;

    t81 = ((x377!=x378)*(x379-x380));

    if (t81 != 32730) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x381 = 110;
	static int16_t x384 = -982;
	volatile int32_t t82 = -634940;

    t82 = ((x381!=x382)*(x383-x384));

    if (t82 != 1036) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x385 = INT32_MIN;
	static volatile int8_t x386 = -1;
	volatile int64_t x387 = INT64_MAX;
	volatile int16_t x388 = INT16_MAX;
	volatile int64_t t83 = -7437LL;

    t83 = ((x385!=x386)*(x387-x388));

    if (t83 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x389 = INT32_MIN;
	static volatile int8_t x390 = 13;
	static uint16_t x391 = 8328U;
	uint32_t x392 = 23095154U;
	static uint32_t t84 = 67376U;

    t84 = ((x389!=x390)*(x391-x392));

    if (t84 != 4271880470U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x395 = INT8_MIN;
	static uint32_t x396 = 42605U;
	uint32_t t85 = 14021304U;

    t85 = ((x393!=x394)*(x395-x396));

    if (t85 != 4294924563U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x397 = -255073771304LL;
	static int32_t x398 = -1;
	int8_t x399 = -1;
	uint64_t x400 = 4045299757825LLU;

    t86 = ((x397!=x398)*(x399-x400));

    if (t86 != 18446740028409793790LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x401 = 61060LL;
	int64_t x402 = -1LL;
	static uint16_t x403 = UINT16_MAX;
	int32_t x404 = INT32_MAX;
	static volatile int32_t t87 = -274976;

    t87 = ((x401!=x402)*(x403-x404));

    if (t87 != -2147418112) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x405 = INT8_MAX;
	int8_t x406 = -1;
	int32_t t88 = -1804;

    t88 = ((x405!=x406)*(x407-x408));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x413 = INT64_MAX;
	uint64_t x415 = UINT64_MAX;
	int32_t x416 = INT32_MAX;
	uint64_t t89 = 573836028LLU;

    t89 = ((x413!=x414)*(x415-x416));

    if (t89 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x417 = -1;
	int16_t x418 = INT16_MIN;
	volatile uint32_t x419 = UINT32_MAX;
	int16_t x420 = INT16_MIN;
	volatile uint32_t t90 = 1U;

    t90 = ((x417!=x418)*(x419-x420));

    if (t90 != 32767U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x421 = -1LL;
	uint16_t x422 = 1518U;
	static int16_t x423 = 18;
	static int32_t t91 = 3304687;

    t91 = ((x421!=x422)*(x423-x424));

    if (t91 != -32749) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x425 = 204207978292475LLU;
	int32_t x426 = INT32_MAX;
	int32_t x427 = INT32_MIN;
	int16_t x428 = INT16_MIN;
	int32_t t92 = -60474;

    t92 = ((x425!=x426)*(x427-x428));

    if (t92 != -2147450880) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x430 = INT8_MIN;
	static int8_t x431 = 14;
	volatile uint32_t x432 = 48647U;
	uint32_t t93 = 116235U;

    t93 = ((x429!=x430)*(x431-x432));

    if (t93 != 4294918663U) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x433 = INT64_MIN;
	uint32_t x434 = UINT32_MAX;
	int8_t x435 = INT8_MAX;
	int16_t x436 = INT16_MIN;
	int32_t t94 = -18132;

    t94 = ((x433!=x434)*(x435-x436));

    if (t94 != 32895) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x438 = -1LL;
	uint64_t x439 = 91409360297LLU;
	uint64_t t95 = 4415LLU;

    t95 = ((x437!=x438)*(x439-x440));

    if (t95 != 91409359877LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x441 = INT16_MIN;
	int16_t x442 = -1;
	volatile int64_t x443 = -8196516408LL;
	uint32_t x444 = 177378177U;
	volatile int64_t t96 = -450331LL;

    t96 = ((x441!=x442)*(x443-x444));

    if (t96 != -8373894585LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x445 = UINT64_MAX;
	int16_t x446 = -1;
	static volatile int32_t x447 = INT32_MIN;
	int32_t x448 = -1;
	volatile int32_t t97 = -3462;

    t97 = ((x445!=x446)*(x447-x448));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x449 = INT16_MIN;
	volatile int8_t x450 = -1;
	volatile int64_t t98 = -363664LL;

    t98 = ((x449!=x450)*(x451-x452));

    if (t98 != 8798238523800LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x453 = -241;
	static uint8_t x455 = 3U;
	int64_t x456 = INT64_MAX;
	int64_t t99 = 1093LL;

    t99 = ((x453!=x454)*(x455-x456));

    if (t99 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x458 = INT16_MIN;
	uint8_t x459 = UINT8_MAX;
	static volatile int16_t x460 = INT16_MAX;
	int32_t t100 = -711;

    t100 = ((x457!=x458)*(x459-x460));

    if (t100 != -32512) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x461 = UINT16_MAX;
	uint16_t x462 = 421U;
	int8_t x463 = -3;

    t101 = ((x461!=x462)*(x463-x464));

    if (t101 != -2) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x465 = -1LL;
	volatile uint16_t x467 = UINT16_MAX;
	int16_t x468 = INT16_MIN;

    t102 = ((x465!=x466)*(x467-x468));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x469 = 17LL;
	int16_t x471 = INT16_MIN;
	int64_t t103 = -36619748LL;

    t103 = ((x469!=x470)*(x471-x472));

    if (t103 != 68333458LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x477 = INT64_MIN;
	static uint64_t x478 = 183LLU;
	int32_t x479 = 6875690;
	int32_t t104 = -5195516;

    t104 = ((x477!=x478)*(x479-x480));

    if (t104 != 43088381) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x481 = INT8_MIN;
	uint16_t x482 = 17647U;
	uint8_t x483 = 1U;
	volatile uint8_t x484 = 11U;
	static int32_t t105 = -20;

    t105 = ((x481!=x482)*(x483-x484));

    if (t105 != -10) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x489 = -323LL;
	int32_t x490 = -54;
	int64_t x491 = INT64_MIN;
	int16_t x492 = -1;
	static volatile int64_t t106 = 51820LL;

    t106 = ((x489!=x490)*(x491-x492));

    if (t106 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int8_t x493 = INT8_MAX;
	static int8_t x494 = -8;
	uint64_t x496 = UINT64_MAX;
	uint64_t t107 = 3445267380032683951LLU;

    t107 = ((x493!=x494)*(x495-x496));

    if (t107 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x497 = 14;
	uint8_t x498 = 13U;
	uint32_t x499 = 3315144U;
	int32_t x500 = INT32_MIN;
	volatile uint32_t t108 = 253205984U;

    t108 = ((x497!=x498)*(x499-x500));

    if (t108 != 2150798792U) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x501 = INT64_MAX;
	int16_t x502 = INT16_MAX;
	uint8_t x503 = UINT8_MAX;
	static int8_t x504 = INT8_MIN;
	static int32_t t109 = -120204;

    t109 = ((x501!=x502)*(x503-x504));

    if (t109 != 383) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x505 = -5155119544907LL;
	static volatile int64_t x506 = 9262099490065308LL;
	int64_t x507 = INT64_MAX;
	static volatile uint8_t x508 = UINT8_MAX;
	volatile int64_t t110 = -10705927402002480LL;

    t110 = ((x505!=x506)*(x507-x508));

    if (t110 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x509 = INT8_MIN;
	volatile uint64_t x510 = 469073337608339LLU;
	volatile int32_t x511 = -1;
	int64_t x512 = 512121296091LL;
	static volatile int64_t t111 = 550397LL;

    t111 = ((x509!=x510)*(x511-x512));

    if (t111 != -512121296092LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x513 = INT32_MIN;
	uint16_t x514 = 470U;
	int64_t x516 = -4431444436594549147LL;

    t112 = ((x513!=x514)*(x515-x516));

    if (t112 != 4431444436594557979LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x517 = 6441009;
	int8_t x518 = -1;
	static int64_t x519 = 791281LL;
	volatile int32_t x520 = INT32_MIN;
	int64_t t113 = -8611006977797LL;

    t113 = ((x517!=x518)*(x519-x520));

    if (t113 != 2148274929LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x521 = 2275U;
	uint16_t x522 = UINT16_MAX;
	int32_t x523 = -225;
	int16_t x524 = -1;
	int32_t t114 = -39709761;

    t114 = ((x521!=x522)*(x523-x524));

    if (t114 != -224) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x525 = INT8_MIN;
	static int32_t x526 = INT32_MIN;
	static volatile uint8_t x527 = 1U;
	static volatile int16_t x528 = INT16_MAX;

    t115 = ((x525!=x526)*(x527-x528));

    if (t115 != -32766) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x529 = INT64_MIN;
	int8_t x530 = INT8_MIN;
	static uint32_t x532 = 1171U;

    t116 = ((x529!=x530)*(x531-x532));

    if (t116 != 13836190U) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x533 = -281871439LL;
	int32_t x535 = -1;
	int16_t x536 = INT16_MAX;
	volatile int32_t t117 = 130;

    t117 = ((x533!=x534)*(x535-x536));

    if (t117 != -32768) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x537 = INT64_MIN;
	static uint64_t x538 = 31457665198LLU;
	uint8_t x539 = 1U;
	static volatile int32_t t118 = 287;

    t118 = ((x537!=x538)*(x539-x540));

    if (t118 != 129) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x541 = UINT64_MAX;
	uint16_t x542 = UINT16_MAX;
	uint64_t x543 = 1LLU;
	volatile uint8_t x544 = 8U;
	volatile uint64_t t119 = 1589731574263007570LLU;

    t119 = ((x541!=x542)*(x543-x544));

    if (t119 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x546 = -1;
	static int8_t x547 = INT8_MAX;
	volatile uint16_t x548 = UINT16_MAX;
	volatile int32_t t120 = -530428;

    t120 = ((x545!=x546)*(x547-x548));

    if (t120 != -65408) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x553 = 220LL;
	static volatile int16_t x555 = -6830;
	uint64_t x556 = 838584380592320385LLU;

    t121 = ((x553!=x554)*(x555-x556));

    if (t121 != 17608159693117224401LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x559 = 47465240U;
	static volatile uint32_t t122 = 120380747U;

    t122 = ((x557!=x558)*(x559-x560));

    if (t122 != 47465241U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x561 = 14180U;
	static int16_t x563 = INT16_MIN;
	int32_t x564 = INT32_MIN;
	volatile int32_t t123 = -5;

    t123 = ((x561!=x562)*(x563-x564));

    if (t123 != 2147450880) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x567 = 11;
	uint64_t x568 = 2015LLU;
	volatile uint64_t t124 = 1180421825LLU;

    t124 = ((x565!=x566)*(x567-x568));

    if (t124 != 18446744073709549612LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x569 = UINT8_MAX;
	uint64_t x570 = UINT64_MAX;
	int8_t x571 = INT8_MIN;
	static volatile uint32_t t125 = 58U;

    t125 = ((x569!=x570)*(x571-x572));

    if (t125 != 4294967162U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x573 = -1734;
	int16_t x575 = INT16_MAX;
	uint8_t x576 = 15U;
	int32_t t126 = 6;

    t126 = ((x573!=x574)*(x575-x576));

    if (t126 != 32752) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x577 = INT64_MAX;
	static int16_t x578 = INT16_MIN;
	uint32_t x579 = UINT32_MAX;
	uint32_t x580 = UINT32_MAX;
	uint32_t t127 = 3211U;

    t127 = ((x577!=x578)*(x579-x580));

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x581 = INT8_MIN;
	uint16_t x582 = 31U;
	static int8_t x584 = -59;
	volatile uint64_t t128 = 26187320214282400LLU;

    t128 = ((x581!=x582)*(x583-x584));

    if (t128 != 81429144744247327LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x585 = UINT32_MAX;
	static int16_t x586 = -226;
	int16_t x587 = INT16_MAX;
	int8_t x588 = INT8_MAX;
	volatile int32_t t129 = 41916;

    t129 = ((x585!=x586)*(x587-x588));

    if (t129 != 32640) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x589 = INT8_MIN;
	int8_t x590 = INT8_MAX;
	int8_t x592 = INT8_MIN;

    t130 = ((x589!=x590)*(x591-x592));

    if (t130 != 383) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x597 = INT64_MIN;
	int8_t x598 = -60;
	static volatile int64_t x599 = 0LL;
	uint32_t x600 = 5790577U;
	volatile int64_t t131 = -14348LL;

    t131 = ((x597!=x598)*(x599-x600));

    if (t131 != -5790577LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x601 = 2942LLU;
	static volatile int32_t t132 = 1978159;

    t132 = ((x601!=x602)*(x603-x604));

    if (t132 != 127) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x606 = INT32_MIN;
	int16_t x607 = -58;
	static int8_t x608 = 0;
	int32_t t133 = 80986;

    t133 = ((x605!=x606)*(x607-x608));

    if (t133 != -58) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x609 = INT16_MIN;
	volatile uint16_t x610 = UINT16_MAX;
	int8_t x611 = INT8_MIN;
	volatile int16_t x612 = -1;
	volatile int32_t t134 = -792789;

    t134 = ((x609!=x610)*(x611-x612));

    if (t134 != -127) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x614 = INT32_MIN;
	volatile int32_t x616 = -1;
	int32_t t135 = -14422;

    t135 = ((x613!=x614)*(x615-x616));

    if (t135 != -15) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x619 = INT8_MIN;
	uint64_t x620 = 111363614LLU;
	volatile uint64_t t136 = 915480559864LLU;

    t136 = ((x617!=x618)*(x619-x620));

    if (t136 != 18446744073598187874LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x621 = INT8_MAX;
	volatile uint16_t x623 = 113U;
	uint32_t x624 = 68U;
	static uint32_t t137 = 31090779U;

    t137 = ((x621!=x622)*(x623-x624));

    if (t137 != 45U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x625 = 30U;
	int16_t x626 = -1;
	static volatile uint16_t x628 = 7U;
	volatile int32_t t138 = 12944;

    t138 = ((x625!=x626)*(x627-x628));

    if (t138 != -7) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x630 = 1;
	int8_t x631 = INT8_MAX;
	int32_t x632 = -1148;

    t139 = ((x629!=x630)*(x631-x632));

    if (t139 != 1275) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x634 = -1;
	static volatile int16_t x636 = INT16_MIN;
	volatile int32_t t140 = -5;

    t140 = ((x633!=x634)*(x635-x636));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x641 = INT16_MAX;
	int32_t x643 = 5214557;
	static uint8_t x644 = 106U;
	volatile int32_t t141 = -7;

    t141 = ((x641!=x642)*(x643-x644));

    if (t141 != 5214451) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x646 = -1;
	static int16_t x647 = 125;
	volatile int16_t x648 = INT16_MAX;
	int32_t t142 = -1;

    t142 = ((x645!=x646)*(x647-x648));

    if (t142 != -32642) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x650 = 16U;
	int16_t x651 = INT16_MAX;
	int16_t x652 = INT16_MIN;

    t143 = ((x649!=x650)*(x651-x652));

    if (t143 != 65535) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x665 = INT16_MIN;
	volatile uint64_t x666 = 8LLU;
	int32_t x667 = 11403;
	static volatile uint16_t x668 = UINT16_MAX;
	volatile int32_t t144 = -51439786;

    t144 = ((x665!=x666)*(x667-x668));

    if (t144 != -54132) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x670 = 0;
	int32_t t145 = -160813516;

    t145 = ((x669!=x670)*(x671-x672));

    if (t145 != -32763) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x673 = INT8_MIN;
	static uint16_t x675 = UINT16_MAX;
	int16_t x676 = 246;
	volatile int32_t t146 = 56244;

    t146 = ((x673!=x674)*(x675-x676));

    if (t146 != 65289) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x678 = UINT16_MAX;
	int16_t x680 = INT16_MIN;
	volatile int32_t t147 = -265986;

    t147 = ((x677!=x678)*(x679-x680));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x685 = INT64_MAX;
	volatile int8_t x686 = 1;
	uint32_t x688 = 77359961U;
	uint32_t t148 = 781897U;

    t148 = ((x685!=x686)*(x687-x688));

    if (t148 != 4217574567U) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int32_t x689 = 3;
	uint8_t x690 = 1U;
	uint32_t x692 = UINT32_MAX;
	volatile uint32_t t149 = 1533U;

    t149 = ((x689!=x690)*(x691-x692));

    if (t149 != 2U) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x693 = 3647;
	int32_t x695 = INT32_MAX;
	volatile uint32_t x696 = 559666U;

    t150 = ((x693!=x694)*(x695-x696));

    if (t150 != 2146923981U) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x697 = 242LLU;
	int64_t x698 = -182207463LL;
	uint64_t t151 = UINT64_MAX;

    t151 = ((x697!=x698)*(x699-x700));

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x701 = -1;
	int32_t x704 = -1;
	int32_t t152 = -14340746;

    t152 = ((x701!=x702)*(x703-x704));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x705 = -1926107;
	int64_t x706 = -283789571568543LL;
	static volatile int64_t x708 = 425842871LL;
	int64_t t153 = -180946474822870671LL;

    t153 = ((x705!=x706)*(x707-x708));

    if (t153 != -425842827LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x710 = 44LL;
	volatile int16_t x711 = -5277;
	int64_t x712 = 183LL;

    t154 = ((x709!=x710)*(x711-x712));

    if (t154 != -5460LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x713 = INT16_MIN;
	volatile int8_t x715 = INT8_MIN;
	int8_t x716 = INT8_MIN;
	int32_t t155 = 119314;

    t155 = ((x713!=x714)*(x715-x716));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x717 = INT8_MIN;
	int32_t x718 = INT32_MAX;
	uint64_t x719 = UINT64_MAX;
	volatile int8_t x720 = 3;
	volatile uint64_t t156 = 5LLU;

    t156 = ((x717!=x718)*(x719-x720));

    if (t156 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x722 = -12;
	static int32_t x723 = -1;
	volatile int16_t x724 = INT16_MIN;
	static int32_t t157 = 1153983;

    t157 = ((x721!=x722)*(x723-x724));

    if (t157 != 32767) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int64_t x725 = -1LL;
	int16_t x727 = 5;
	uint16_t x728 = UINT16_MAX;
	volatile int32_t t158 = 14;

    t158 = ((x725!=x726)*(x727-x728));

    if (t158 != -65530) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x729 = -1;
	int32_t x730 = INT32_MIN;
	int8_t x731 = INT8_MIN;
	uint32_t x732 = UINT32_MAX;
	static volatile uint32_t t159 = 85U;

    t159 = ((x729!=x730)*(x731-x732));

    if (t159 != 4294967169U) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x733 = INT64_MIN;
	static uint64_t x734 = 1837LLU;
	volatile int32_t x735 = 4657465;
	uint64_t t160 = 9725662514589LLU;

    t160 = ((x733!=x734)*(x735-x736));

    if (t160 != 18322131493624662604LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x738 = -33;
	int32_t x740 = 2842994;
	volatile int32_t t161 = 1;

    t161 = ((x737!=x738)*(x739-x740));

    if (t161 != -2842867) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int8_t x742 = INT8_MAX;
	int8_t x744 = 31;
	static int32_t t162 = 31863550;

    t162 = ((x741!=x742)*(x743-x744));

    if (t162 != 32736) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x745 = 42U;
	uint8_t x746 = 0U;
	int64_t x747 = -1LL;
	uint64_t x748 = 507853848381LLU;

    t163 = ((x745!=x746)*(x747-x748));

    if (t163 != 18446743565855703234LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x749 = 108;
	static uint64_t x750 = 28666796364LLU;
	uint8_t x751 = 1U;
	uint16_t x752 = 3867U;
	volatile int32_t t164 = -948;

    t164 = ((x749!=x750)*(x751-x752));

    if (t164 != -3866) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x753 = 627050624;
	volatile uint16_t x754 = 1765U;
	volatile int8_t x755 = INT8_MIN;
	int32_t t165 = -14277343;

    t165 = ((x753!=x754)*(x755-x756));

    if (t165 != 2147483520) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x757 = INT8_MAX;
	static int16_t x758 = 49;
	static int16_t x759 = -8035;
	volatile int8_t x760 = INT8_MAX;
	int32_t t166 = -1096585;

    t166 = ((x757!=x758)*(x759-x760));

    if (t166 != -8162) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint8_t x762 = 17U;
	volatile int8_t x763 = -1;
	int32_t x764 = 9836;
	static int32_t t167 = -4322514;

    t167 = ((x761!=x762)*(x763-x764));

    if (t167 != -9837) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x765 = INT16_MAX;
	volatile int32_t x766 = -1;
	int64_t x767 = -1LL;

    t168 = ((x765!=x766)*(x767-x768));

    if (t168 != -119LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x769 = INT32_MIN;
	volatile uint64_t x770 = UINT64_MAX;
	uint8_t x771 = 100U;
	int32_t x772 = -1;
	volatile int32_t t169 = 61262585;

    t169 = ((x769!=x770)*(x771-x772));

    if (t169 != 101) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int8_t x773 = -1;
	volatile uint16_t x774 = 21760U;
	uint32_t x775 = UINT32_MAX;
	static uint32_t t170 = 1059120160U;

    t170 = ((x773!=x774)*(x775-x776));

    if (t170 != 3290313011U) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x777 = UINT16_MAX;
	uint32_t x778 = UINT32_MAX;
	int16_t x779 = -499;
	int8_t x780 = INT8_MIN;
	volatile int32_t t171 = -56895;

    t171 = ((x777!=x778)*(x779-x780));

    if (t171 != -371) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x781 = 1U;
	int8_t x783 = 47;
	int32_t t172 = 0;

    t172 = ((x781!=x782)*(x783-x784));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x785 = 6920751462LLU;
	int8_t x786 = INT8_MAX;
	uint64_t x787 = UINT64_MAX;
	static int64_t x788 = INT64_MAX;
	uint64_t t173 = 1243503824039LLU;

    t173 = ((x785!=x786)*(x787-x788));

    if (t173 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x789 = INT8_MAX;
	uint16_t x790 = UINT16_MAX;
	int16_t x791 = -1;
	volatile int16_t x792 = INT16_MIN;
	static int32_t t174 = 0;

    t174 = ((x789!=x790)*(x791-x792));

    if (t174 != 32767) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x798 = 8309052;
	int8_t x799 = INT8_MAX;
	volatile uint16_t x800 = 7900U;
	int32_t t175 = -34;

    t175 = ((x797!=x798)*(x799-x800));

    if (t175 != -7773) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x801 = 8902742LL;
	uint16_t x802 = 11455U;
	int64_t x803 = -1LL;
	volatile int64_t x804 = INT64_MIN;
	volatile int64_t t176 = INT64_MAX;

    t176 = ((x801!=x802)*(x803-x804));

    if (t176 != INT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x805 = INT64_MAX;
	int8_t x806 = INT8_MIN;
	uint64_t x807 = UINT64_MAX;
	volatile uint32_t x808 = 713580U;
	volatile uint64_t t177 = 1820836998907896952LLU;

    t177 = ((x805!=x806)*(x807-x808));

    if (t177 != 18446744073708838035LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x809 = INT8_MIN;
	uint16_t x810 = UINT16_MAX;
	volatile int32_t x811 = INT32_MAX;
	int16_t x812 = 48;
	int32_t t178 = -80172;

    t178 = ((x809!=x810)*(x811-x812));

    if (t178 != 2147483599) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x814 = -2;
	static int8_t x815 = 2;
	uint8_t x816 = UINT8_MAX;
	int32_t t179 = -20050;

    t179 = ((x813!=x814)*(x815-x816));

    if (t179 != -253) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x817 = 2;
	volatile int8_t x818 = INT8_MIN;
	int64_t x820 = INT64_MIN;
	int64_t t180 = -57623362606LL;

    t180 = ((x817!=x818)*(x819-x820));

    if (t180 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x821 = INT16_MIN;
	volatile int64_t x822 = 955209118691317LL;
	static uint16_t x823 = UINT16_MAX;
	int8_t x824 = INT8_MAX;
	volatile int32_t t181 = 4;

    t181 = ((x821!=x822)*(x823-x824));

    if (t181 != 65408) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x825 = 2038532494U;
	static int64_t x827 = 18295409467LL;
	int8_t x828 = INT8_MIN;
	volatile int64_t t182 = -10LL;

    t182 = ((x825!=x826)*(x827-x828));

    if (t182 != 18295409595LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x829 = -1;
	int16_t x830 = INT16_MIN;
	volatile uint64_t x831 = UINT64_MAX;

    t183 = ((x829!=x830)*(x831-x832));

    if (t183 != 18446744062484708183LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x833 = INT32_MIN;
	static int8_t x835 = -1;
	static int8_t x836 = INT8_MIN;
	int32_t t184 = -14;

    t184 = ((x833!=x834)*(x835-x836));

    if (t184 != 127) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x837 = INT64_MIN;
	int8_t x840 = -1;

    t185 = ((x837!=x838)*(x839-x840));

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x842 = -1LL;
	static uint16_t x843 = 2U;
	volatile int32_t t186 = 60;

    t186 = ((x841!=x842)*(x843-x844));

    if (t186 != 3) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x846 = 3320LLU;
	static uint16_t x847 = UINT16_MAX;
	volatile int16_t x848 = INT16_MAX;
	volatile int32_t t187 = -1075;

    t187 = ((x845!=x846)*(x847-x848));

    if (t187 != 32768) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x849 = 54330LL;
	uint16_t x850 = 22U;
	static volatile uint32_t x851 = 116U;
	int32_t x852 = INT32_MIN;

    t188 = ((x849!=x850)*(x851-x852));

    if (t188 != 2147483764U) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x853 = INT32_MAX;
	int32_t t189 = 10;

    t189 = ((x853!=x854)*(x855-x856));

    if (t189 != 32767) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x858 = 6457075180599789473LLU;
	int16_t x859 = -1;
	uint32_t x860 = UINT32_MAX;

    t190 = ((x857!=x858)*(x859-x860));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x861 = UINT8_MAX;
	static volatile uint64_t x863 = 88LLU;
	uint64_t x864 = 3886175LLU;
	volatile uint64_t t191 = 20LLU;

    t191 = ((x861!=x862)*(x863-x864));

    if (t191 != 18446744073705665529LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x865 = 0U;
	int32_t x866 = -1;
	static int64_t x867 = 0LL;
	volatile int64_t x868 = INT64_MAX;
	volatile int64_t t192 = -8LL;

    t192 = ((x865!=x866)*(x867-x868));

    if (t192 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x869 = INT32_MIN;
	int16_t x870 = -1;
	static int32_t x871 = -24343;
	static int16_t x872 = 4;
	volatile int32_t t193 = 7102;

    t193 = ((x869!=x870)*(x871-x872));

    if (t193 != -24347) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x873 = INT16_MAX;
	int16_t x874 = 0;
	uint16_t x876 = 6459U;
	static uint64_t t194 = 45860149LLU;

    t194 = ((x873!=x874)*(x875-x876));

    if (t194 != 1107753286LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x881 = 14U;
	int64_t x883 = -1LL;
	volatile int16_t x884 = INT16_MIN;
	volatile int64_t t195 = -202080LL;

    t195 = ((x881!=x882)*(x883-x884));

    if (t195 != 32767LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x885 = -1;
	volatile int64_t x887 = INT64_MIN;
	int16_t x888 = 0;
	volatile int64_t t196 = INT64_MIN;

    t196 = ((x885!=x886)*(x887-x888));

    if (t196 != INT64_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x891 = -25679;
	volatile uint64_t x892 = 66460682LLU;
	uint64_t t197 = 11LLU;

    t197 = ((x889!=x890)*(x891-x892));

    if (t197 != 18446744073643065255LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x894 = 1;
	int8_t x895 = INT8_MIN;
	uint64_t x896 = UINT64_MAX;
	volatile uint64_t t198 = 4929810025974113836LLU;

    t198 = ((x893!=x894)*(x895-x896));

    if (t198 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x898 = INT64_MIN;
	int8_t x899 = INT8_MIN;
	int16_t x900 = -1;
	static int32_t t199 = 389135913;

    t199 = ((x897!=x898)*(x899-x900));

    if (t199 != -127) { NG(); } else { ; }
	
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


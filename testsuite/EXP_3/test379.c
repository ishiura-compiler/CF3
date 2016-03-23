
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

int32_t x6 = -1;
static int8_t x7 = INT8_MIN;
int16_t x12 = INT16_MAX;
static int16_t x15 = INT16_MAX;
uint8_t x18 = 12U;
static uint16_t x19 = 25U;
int32_t t6 = -746566;
volatile uint8_t x29 = 1U;
uint8_t x32 = 3U;
volatile int64_t t8 = -2003425847LL;
volatile int8_t x37 = -2;
int16_t x47 = INT16_MIN;
int64_t x52 = -111673248LL;
uint32_t x55 = 436046775U;
int16_t x60 = 3;
int64_t x70 = INT64_MIN;
int32_t x72 = -1;
uint32_t t19 = 36882705U;
static volatile int8_t x83 = INT8_MAX;
int32_t x84 = INT32_MAX;
int8_t x87 = INT8_MIN;
static int32_t x91 = -25272;
int64_t t22 = 139LL;
uint64_t t23 = 170256560345LLU;
static int16_t x97 = -1;
static volatile int64_t x100 = -1LL;
static volatile uint64_t x101 = 711622079487519603LLU;
int8_t x115 = 0;
static int64_t x116 = -1488LL;
static int64_t x121 = INT64_MIN;
int8_t x129 = INT8_MIN;
int16_t x131 = -1;
volatile int32_t t31 = -96;
uint32_t x136 = 11791U;
uint32_t t34 = 50U;
int8_t x154 = 0;
int16_t x155 = -351;
uint64_t x157 = 508078766554LLU;
int64_t x171 = INT64_MAX;
int8_t x176 = -1;
uint64_t t39 = 782144465849LLU;
volatile int16_t x181 = -1;
int32_t x190 = INT32_MIN;
uint16_t x193 = 169U;
int16_t x205 = 0;
volatile uint8_t x207 = 10U;
int32_t x216 = -1;
int32_t x221 = INT32_MIN;
static uint32_t x223 = 68013U;
uint16_t x224 = UINT16_MAX;
static int32_t x229 = INT32_MIN;
static int32_t x230 = 67;
volatile uint64_t t49 = 7728450LLU;
int32_t x237 = -2764;
static int8_t x240 = -1;
volatile int16_t x242 = 107;
int32_t t53 = 1701;
int16_t x260 = INT16_MIN;
volatile uint32_t x265 = UINT32_MAX;
int16_t x277 = INT16_MAX;
static volatile uint8_t x279 = 13U;
uint32_t x283 = 47U;
volatile int16_t x285 = -154;
int64_t t60 = -67309604442607604LL;
int8_t x294 = -2;
volatile int64_t x296 = 218262669211LL;
int8_t x300 = INT8_MIN;
volatile int64_t x306 = 151489467314734LL;
static int16_t x309 = INT16_MIN;
int16_t x310 = -1;
volatile int16_t x312 = INT16_MAX;
int32_t x314 = INT32_MAX;
volatile int16_t x326 = INT16_MIN;
static volatile uint16_t x327 = UINT16_MAX;
volatile int64_t t73 = 18412724175LL;
int8_t x345 = -1;
volatile int32_t x357 = -1;
int64_t x359 = -1229613567348186625LL;
int64_t t75 = 99640272157467954LL;
int8_t x371 = -17;
uint16_t x379 = 1U;
int16_t x380 = INT16_MAX;
int32_t x383 = -1;
volatile int8_t x391 = 3;
uint64_t x398 = 3305959698807459LLU;
int32_t t85 = 14;
uint32_t x418 = 153930583U;
int32_t t88 = 0;
int32_t x441 = -1;
volatile uint64_t t90 = 244575923688849LLU;
volatile int8_t x447 = -1;
volatile int8_t x461 = INT8_MAX;
int64_t x481 = INT64_MAX;
volatile uint64_t x491 = 392LLU;
int16_t x492 = 436;
uint64_t x499 = 5874413559LLU;
int32_t x500 = -1;
int16_t x502 = 232;
volatile int32_t t100 = 60203;
volatile int64_t t101 = INT64_MAX;
int64_t x523 = -1LL;
static int64_t x533 = -808404281LL;
uint32_t x535 = 5967216U;
int8_t x538 = INT8_MIN;
uint64_t x539 = 543023848524606191LLU;
int16_t x542 = INT16_MIN;
int32_t x543 = -1;
int64_t t107 = 416380LL;
int8_t x555 = 0;
int16_t x556 = INT16_MIN;
int64_t t110 = -26553893934692LL;
int8_t x560 = 34;
uint16_t x565 = 95U;
static volatile int16_t x566 = INT16_MAX;
static int32_t x591 = INT32_MIN;
int32_t x592 = -1796664;
int32_t x597 = 1437869;
int32_t x599 = 77374;
int8_t x605 = INT8_MIN;
static int64_t x608 = 31805LL;
volatile int64_t t120 = -661047462LL;
volatile uint32_t x615 = UINT32_MAX;
static int16_t x618 = INT16_MIN;
int32_t t122 = -1082;
static uint8_t x621 = UINT8_MAX;
int8_t x624 = 1;
static int8_t x634 = 50;
int16_t x643 = INT16_MIN;
static int16_t x644 = 0;
int8_t x651 = INT8_MIN;
int16_t x653 = -1;
volatile uint64_t t131 = 57129744110285LLU;
int8_t x665 = -28;
static int32_t x667 = -43;
volatile int32_t t133 = -105305;
int16_t x672 = INT16_MIN;
volatile uint64_t t136 = 3883434LLU;
static volatile int32_t t137 = 9845;
uint32_t x688 = 14556916U;
uint8_t x707 = 1U;
volatile int32_t x719 = 16954;
int32_t x721 = -1;
static uint16_t x726 = 10U;
int64_t t147 = -1476872304747LL;
int32_t x743 = INT32_MIN;
uint64_t x744 = 977285054220873576LLU;
uint8_t x753 = 6U;
volatile int64_t x760 = INT64_MIN;
int64_t t154 = -23822271520652LL;
static volatile int64_t t156 = -1573207LL;
volatile uint32_t x793 = UINT32_MAX;
static int64_t t158 = -751126LL;
static int32_t x797 = -14;
uint16_t x798 = 2U;
int32_t x799 = INT32_MIN;
static int64_t x807 = -1LL;
volatile int32_t x811 = INT32_MAX;
volatile int64_t t163 = INT64_MIN;
uint8_t x824 = 17U;
static uint32_t t164 = 46982U;
int16_t x826 = -1;
volatile int32_t t166 = 245;
uint8_t x835 = UINT8_MAX;
static volatile int8_t x837 = INT8_MIN;
static uint32_t x851 = 473946U;
uint16_t x853 = 1U;
volatile int8_t x854 = -1;
int16_t x855 = INT16_MIN;
int64_t t172 = 20LL;
int32_t x858 = 2876800;
int8_t x870 = -1;
volatile uint64_t t175 = 4005LLU;
int16_t x874 = -2601;
static volatile uint64_t t176 = 2038420LLU;
volatile uint64_t t178 = 742844LLU;
uint64_t t179 = 53LLU;
uint16_t x892 = UINT16_MAX;
static uint32_t x917 = 5U;
uint8_t x918 = 2U;
int8_t x922 = INT8_MIN;
uint32_t x924 = UINT32_MAX;
uint16_t x926 = 227U;
static uint64_t x930 = 383325721200LLU;
int16_t x932 = 1;
uint64_t x935 = UINT64_MAX;
static volatile uint64_t x959 = 3910358LLU;
volatile uint8_t x964 = 7U;
uint64_t t196 = 199LLU;
uint64_t t197 = 2734893118052LLU;
volatile uint16_t x972 = 1U;


void f0(void) {
    	int16_t x1 = -58;
	int8_t x2 = 0;
	static volatile uint32_t x3 = 15U;
	int16_t x4 = INT16_MIN;
	uint32_t t0 = 71099U;

    t0 = ((x1^x2)+(x3-x4));

    if (t0 != 32725U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	int32_t x8 = -1;
	int32_t t1 = -1;

    t1 = ((x5^x6)+(x7-x8));

    if (t1 != 2147483520) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = 46U;
	int16_t x10 = INT16_MIN;
	volatile int64_t x11 = -1LL;
	volatile int64_t t2 = 12142176LL;

    t2 = ((x9^x10)+(x11-x12));

    if (t2 != -65490LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = -1;
	int64_t x14 = 501208409LL;
	uint16_t x16 = 7882U;
	int64_t t3 = 5913LL;

    t3 = ((x13^x14)+(x15-x16));

    if (t3 != -501183525LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint64_t x17 = 29078LLU;
	int64_t x20 = -1LL;
	uint64_t t4 = 2061285428089LLU;

    t4 = ((x17^x18)+(x19-x20));

    if (t4 != 29108LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	int64_t x22 = 3LL;
	int8_t x23 = 1;
	uint16_t x24 = UINT16_MAX;
	int64_t t5 = -294240LL;

    t5 = ((x21^x22)+(x23-x24));

    if (t5 != -2LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = INT16_MAX;
	static int32_t x26 = INT32_MAX;
	volatile int16_t x27 = -1;
	int32_t x28 = INT32_MAX;

    t6 = ((x25^x26)+(x27-x28));

    if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint16_t x30 = UINT16_MAX;
	int64_t x31 = 1744239922378914LL;
	int64_t t7 = -14LL;

    t7 = ((x29^x30)+(x31-x32));

    if (t7 != 1744239922444445LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -1LL;
	static int32_t x34 = 202;
	uint32_t x35 = UINT32_MAX;
	int32_t x36 = INT32_MIN;

    t8 = ((x33^x34)+(x35-x36));

    if (t8 != 2147483444LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = INT8_MIN;
	int8_t x39 = INT8_MIN;
	int8_t x40 = INT8_MIN;
	static volatile int32_t t9 = 25379;

    t9 = ((x37^x38)+(x39-x40));

    if (t9 != 126) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = INT16_MIN;
	uint8_t x42 = 0U;
	uint64_t x43 = 971LLU;
	volatile int16_t x44 = -6775;
	uint64_t t10 = 57LLU;

    t10 = ((x41^x42)+(x43-x44));

    if (t10 != 18446744073709526594LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = 9;
	int16_t x46 = 4;
	int32_t x48 = -1;
	int32_t t11 = 58578;

    t11 = ((x45^x46)+(x47-x48));

    if (t11 != -32754) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -3756LL;
	uint16_t x50 = 4U;
	volatile uint8_t x51 = 1U;
	volatile int64_t t12 = 134867126LL;

    t12 = ((x49^x50)+(x51-x52));

    if (t12 != 111669489LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	volatile uint8_t x54 = UINT8_MAX;
	uint64_t x56 = 1790221175589747LLU;
	volatile uint64_t t13 = 114708LLU;

    t13 = ((x53^x54)+(x55-x56));

    if (t13 != 18444953850822525251LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MAX;
	uint64_t x58 = 74073LLU;
	int8_t x59 = 7;
	uint64_t t14 = 13790533LLU;

    t14 = ((x57^x58)+(x59-x60));

    if (t14 != 89770LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 1817426U;
	int32_t x62 = -513387666;
	static uint64_t x63 = 317511937758264LLU;
	int32_t x64 = 31;
	volatile uint64_t t15 = 296LLU;

    t15 = ((x61^x62)+(x63-x64));

    if (t15 != 317515720883285LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 16U;
	static uint32_t x66 = 173U;
	int32_t x67 = 240724;
	volatile uint32_t x68 = 1115254658U;
	static uint32_t t16 = 1U;

    t16 = ((x65^x66)+(x67-x68));

    if (t16 != 3179953551U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x69 = 2014262LLU;
	uint8_t x71 = 70U;
	static uint64_t t17 = 10440691LLU;

    t17 = ((x69^x70)+(x71-x72));

    if (t17 != 9223372036856790141LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = -1;
	int32_t x74 = -3105153;
	static int16_t x75 = 0;
	int8_t x76 = INT8_MIN;
	int32_t t18 = -1476672;

    t18 = ((x73^x74)+(x75-x76));

    if (t18 != 3105280) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MAX;
	uint16_t x78 = 900U;
	static uint32_t x79 = UINT32_MAX;
	volatile int32_t x80 = INT32_MIN;

    t19 = ((x77^x78)+(x79-x80));

    if (t19 != 2147484666U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = UINT32_MAX;
	volatile int32_t x82 = -1;
	volatile uint32_t t20 = 910217U;

    t20 = ((x81^x82)+(x83-x84));

    if (t20 != 2147483776U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 0LLU;
	int8_t x86 = INT8_MAX;
	int16_t x88 = INT16_MIN;
	uint64_t t21 = 191474502574434876LLU;

    t21 = ((x85^x86)+(x87-x88));

    if (t21 != 32767LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MAX;
	static int32_t x90 = INT32_MAX;
	int64_t x92 = -1219779748LL;

    t22 = ((x89^x90)+(x91-x92));

    if (t22 != 3367237996LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = UINT32_MAX;
	int8_t x94 = INT8_MIN;
	int32_t x95 = INT32_MIN;
	uint64_t x96 = 12136LLU;

    t23 = ((x93^x94)+(x95-x96));

    if (t23 != 18446744071562055959LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x98 = UINT16_MAX;
	volatile uint32_t x99 = 16U;
	volatile int64_t t24 = 8LL;

    t24 = ((x97^x98)+(x99-x100));

    if (t24 != -65519LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x102 = -556436470329603207LL;
	int16_t x103 = INT16_MIN;
	int16_t x104 = 2316;
	volatile uint64_t t25 = 106594LLU;

    t25 = ((x101^x102)+(x103-x104));

    if (t25 != 17412907893518407422LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x105 = UINT16_MAX;
	uint32_t x106 = UINT32_MAX;
	int64_t x107 = -1LL;
	uint16_t x108 = UINT16_MAX;
	static volatile int64_t t26 = -1LL;

    t26 = ((x105^x106)+(x107-x108));

    if (t26 != 4294836224LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -1;
	int32_t x110 = 113297;
	int32_t x111 = -9;
	static uint16_t x112 = UINT16_MAX;
	static int32_t t27 = 13812362;

    t27 = ((x109^x110)+(x111-x112));

    if (t27 != -178842) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x113 = INT16_MIN;
	int8_t x114 = INT8_MAX;
	volatile int64_t t28 = 1240224585831061LL;

    t28 = ((x113^x114)+(x115-x116));

    if (t28 != -31153LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x117 = -697691154487LL;
	int16_t x118 = -14;
	uint32_t x119 = 808989114U;
	int32_t x120 = INT32_MAX;
	volatile int64_t t29 = -16245315478028480LL;

    t29 = ((x117^x118)+(x119-x120));

    if (t29 != 700647627254LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x122 = UINT32_MAX;
	static volatile uint16_t x123 = 38U;
	static int32_t x124 = -12166;
	static int64_t t30 = 3762883061LL;

    t30 = ((x121^x122)+(x123-x124));

    if (t30 != -9223372032559796309LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x130 = UINT16_MAX;
	int16_t x132 = 511;

    t31 = ((x129^x130)+(x131-x132));

    if (t31 != -65921) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int8_t x133 = 8;
	static volatile uint32_t x134 = 259438406U;
	volatile int32_t x135 = INT32_MAX;
	uint32_t t32 = 20U;

    t32 = ((x133^x134)+(x135-x136));

    if (t32 != 2406910270U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x141 = 1U;
	uint16_t x142 = 147U;
	uint8_t x143 = 26U;
	uint16_t x144 = 2U;
	int32_t t33 = -345089870;

    t33 = ((x141^x142)+(x143-x144));

    if (t33 != 170) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x145 = INT32_MIN;
	uint8_t x146 = 4U;
	static volatile uint32_t x147 = UINT32_MAX;
	uint16_t x148 = UINT16_MAX;

    t34 = ((x145^x146)+(x147-x148));

    if (t34 != 2147418116U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x153 = 11U;
	int64_t x156 = INT64_MIN;
	int64_t t35 = -335LL;

    t35 = ((x153^x154)+(x155-x156));

    if (t35 != 9223372036854775468LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x158 = INT32_MAX;
	int32_t x159 = -1;
	int16_t x160 = 922;
	uint64_t t36 = 1016299LLU;

    t36 = ((x157^x158)+(x159-x160));

    if (t36 != 507680998026LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x169 = 1;
	int16_t x170 = -12;
	uint32_t x172 = UINT32_MAX;
	volatile int64_t t37 = -227456337243286LL;

    t37 = ((x169^x170)+(x171-x172));

    if (t37 != 9223372032559808501LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x173 = 139296989LL;
	int16_t x174 = INT16_MIN;
	uint64_t x175 = 3385399LLU;
	static volatile uint64_t t38 = 13635383797411LLU;

    t38 = ((x173^x174)+(x175-x176));

    if (t38 != 18446744073573607701LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x177 = 0U;
	int8_t x178 = INT8_MAX;
	int16_t x179 = 5;
	static volatile uint64_t x180 = 2LLU;

    t39 = ((x177^x178)+(x179-x180));

    if (t39 != 130LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x182 = 155580473287633236LLU;
	static volatile int64_t x183 = -1LL;
	uint64_t x184 = 446LLU;
	volatile uint64_t t40 = 3832528898LLU;

    t40 = ((x181^x182)+(x183-x184));

    if (t40 != 18291163600421917932LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x185 = INT64_MIN;
	int16_t x186 = -4209;
	int8_t x187 = -6;
	volatile int8_t x188 = INT8_MAX;
	static int64_t t41 = -77222415363536LL;

    t41 = ((x185^x186)+(x187-x188));

    if (t41 != 9223372036854771466LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x189 = 25U;
	int16_t x191 = -122;
	int8_t x192 = -13;
	volatile uint32_t t42 = 695321148U;

    t42 = ((x189^x190)+(x191-x192));

    if (t42 != 2147483564U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x194 = INT8_MIN;
	int8_t x195 = INT8_MAX;
	static uint32_t x196 = 247228U;
	uint32_t t43 = 1727U;

    t43 = ((x193^x194)+(x195-x196));

    if (t43 != 4294719980U) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int32_t x197 = -1;
	uint32_t x198 = 12203130U;
	uint8_t x199 = 0U;
	int64_t x200 = -1LL;
	int64_t t44 = 2LL;

    t44 = ((x197^x198)+(x199-x200));

    if (t44 != 4282764166LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x206 = 102U;
	volatile int8_t x208 = -1;
	volatile int32_t t45 = 971;

    t45 = ((x205^x206)+(x207-x208));

    if (t45 != 113) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x209 = 39LLU;
	int8_t x210 = INT8_MIN;
	int32_t x211 = -45;
	uint64_t x212 = 204229LLU;
	uint64_t t46 = 61990712591LLU;

    t46 = ((x209^x210)+(x211-x212));

    if (t46 != 18446744073709347253LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x213 = INT8_MIN;
	int16_t x214 = 7390;
	static int16_t x215 = -1;
	volatile int32_t t47 = -100;

    t47 = ((x213^x214)+(x215-x216));

    if (t47 != -7330) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x222 = 0;
	uint32_t t48 = 13381096U;

    t48 = ((x221^x222)+(x223-x224));

    if (t48 != 2147486126U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x231 = 174946U;
	uint64_t x232 = UINT64_MAX;

    t49 = ((x229^x230)+(x231-x232));

    if (t49 != 18446744071562242982LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x233 = -1;
	int8_t x234 = INT8_MAX;
	volatile int32_t x235 = INT32_MIN;
	volatile int64_t x236 = INT64_MIN;
	volatile int64_t t50 = 167939349295075811LL;

    t50 = ((x233^x234)+(x235-x236));

    if (t50 != 9223372034707292032LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x238 = 525267667748LLU;
	int8_t x239 = -22;
	volatile uint64_t t51 = 7787104664731159LLU;

    t51 = ((x237^x238)+(x239-x240));

    if (t51 != 18446743548441886203LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x241 = -48;
	int32_t x243 = -4;
	static int8_t x244 = -1;
	int32_t t52 = -5364;

    t52 = ((x241^x242)+(x243-x244));

    if (t52 != -72) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x249 = -10254;
	static int32_t x250 = INT32_MIN;
	int8_t x251 = -2;
	int8_t x252 = -20;

    t53 = ((x249^x250)+(x251-x252));

    if (t53 != 2147473412) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x253 = -369014284LL;
	uint64_t x254 = UINT64_MAX;
	int8_t x255 = INT8_MAX;
	uint32_t x256 = UINT32_MAX;
	volatile uint64_t t54 = 23009923LLU;

    t54 = ((x253^x254)+(x255-x256));

    if (t54 != 369014411LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x257 = 1;
	static volatile int16_t x258 = -1;
	int16_t x259 = -1;
	volatile int32_t t55 = 227;

    t55 = ((x257^x258)+(x259-x260));

    if (t55 != 32765) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x266 = INT8_MIN;
	uint64_t x267 = 6LLU;
	uint16_t x268 = 1U;
	static uint64_t t56 = 249140718838LLU;

    t56 = ((x265^x266)+(x267-x268));

    if (t56 != 132LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x273 = -1LL;
	static int32_t x274 = INT32_MIN;
	volatile uint32_t x275 = 501087328U;
	int32_t x276 = 3806410;
	int64_t t57 = -161973888188701LL;

    t57 = ((x273^x274)+(x275-x276));

    if (t57 != 2644764565LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x278 = -1;
	uint64_t x280 = 10LLU;
	volatile uint64_t t58 = 3192855536885536LLU;

    t58 = ((x277^x278)+(x279-x280));

    if (t58 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x281 = INT16_MIN;
	int16_t x282 = INT16_MIN;
	int32_t x284 = INT32_MAX;
	volatile uint32_t t59 = 4643U;

    t59 = ((x281^x282)+(x283-x284));

    if (t59 != 2147483696U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x286 = INT16_MAX;
	int32_t x287 = -1;
	static volatile int64_t x288 = 11317065573868LL;

    t60 = ((x285^x286)+(x287-x288));

    if (t60 != -11317065606484LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x289 = 8092U;
	int16_t x290 = 1944;
	int8_t x291 = INT8_MAX;
	int8_t x292 = -1;
	volatile int32_t t61 = 60820;

    t61 = ((x289^x290)+(x291-x292));

    if (t61 != 6276) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x293 = -1;
	volatile uint8_t x295 = 25U;
	static volatile int64_t t62 = 169436142LL;

    t62 = ((x293^x294)+(x295-x296));

    if (t62 != -218262669185LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x297 = 3U;
	uint8_t x298 = UINT8_MAX;
	static uint64_t x299 = UINT64_MAX;
	uint64_t t63 = 101718044644571LLU;

    t63 = ((x297^x298)+(x299-x300));

    if (t63 != 379LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x301 = 21526916U;
	static volatile int16_t x302 = -1;
	int32_t x303 = -40666724;
	int32_t x304 = INT32_MIN;
	uint32_t t64 = 34419U;

    t64 = ((x301^x302)+(x303-x304));

    if (t64 != 2085290007U) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x305 = -1;
	int64_t x307 = -1LL;
	int16_t x308 = -75;
	int64_t t65 = 1535933446966666122LL;

    t65 = ((x305^x306)+(x307-x308));

    if (t65 != -151489467314661LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int16_t x311 = -1;
	volatile int32_t t66 = -3496;

    t66 = ((x309^x310)+(x311-x312));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x313 = 50U;
	static int8_t x315 = INT8_MAX;
	static int8_t x316 = INT8_MAX;
	volatile int32_t t67 = 14687739;

    t67 = ((x313^x314)+(x315-x316));

    if (t67 != 2147483597) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x317 = 7;
	static uint32_t x318 = 138U;
	static uint8_t x319 = 5U;
	static volatile uint8_t x320 = UINT8_MAX;
	static uint32_t t68 = 509U;

    t68 = ((x317^x318)+(x319-x320));

    if (t68 != 4294967187U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x321 = INT64_MAX;
	uint32_t x322 = 611695U;
	uint32_t x323 = 123U;
	int64_t x324 = -1LL;
	int64_t t69 = -11385460037LL;

    t69 = ((x321^x322)+(x323-x324));

    if (t69 != 9223372036854164236LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x325 = 26U;
	int8_t x328 = -1;
	volatile int32_t t70 = 4080346;

    t70 = ((x325^x326)+(x327-x328));

    if (t70 != 32794) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x333 = 1697802U;
	int32_t x334 = -1;
	uint32_t x335 = 458954958U;
	uint64_t x336 = 1322708747419121168LLU;
	uint64_t t71 = 19767503141679657LLU;

    t71 = ((x333^x334)+(x335-x336));

    if (t71 != 17124035331042654899LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x337 = -15514892;
	int32_t x338 = -408;
	int8_t x339 = 3;
	uint8_t x340 = 60U;
	volatile int32_t t72 = 369893;

    t72 = ((x337^x338)+(x339-x340));

    if (t72 != 15514723) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x341 = 271LL;
	static int8_t x342 = 47;
	volatile int64_t x343 = -25048682573LL;
	volatile int16_t x344 = INT16_MIN;

    t73 = ((x341^x342)+(x343-x344));

    if (t73 != -25048649517LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x346 = -1;
	volatile int64_t x347 = -65130217888LL;
	static uint32_t x348 = 2375302U;
	int64_t t74 = 525124LL;

    t74 = ((x345^x346)+(x347-x348));

    if (t74 != -65132593190LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x358 = 69U;
	uint8_t x360 = UINT8_MAX;

    t75 = ((x357^x358)+(x359-x360));

    if (t75 != -1229613567348186950LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x365 = -1;
	int64_t x366 = INT64_MIN;
	uint8_t x367 = 6U;
	int32_t x368 = 5883;
	volatile int64_t t76 = 0LL;

    t76 = ((x365^x366)+(x367-x368));

    if (t76 != 9223372036854769930LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x369 = INT8_MIN;
	int16_t x370 = INT16_MIN;
	volatile int64_t x372 = 459365LL;
	int64_t t77 = -82114LL;

    t77 = ((x369^x370)+(x371-x372));

    if (t77 != -426742LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x373 = INT16_MIN;
	volatile int16_t x374 = -1;
	static volatile int64_t x375 = 5896761374712344LL;
	int16_t x376 = INT16_MAX;
	int64_t t78 = -774933143595LL;

    t78 = ((x373^x374)+(x375-x376));

    if (t78 != 5896761374712344LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x377 = INT32_MAX;
	static uint32_t x378 = UINT32_MAX;
	volatile uint32_t t79 = 119434U;

    t79 = ((x377^x378)+(x379-x380));

    if (t79 != 2147450882U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x381 = INT16_MIN;
	int32_t x382 = INT32_MIN;
	uint64_t x384 = UINT64_MAX;
	volatile uint64_t t80 = 7771702932526406017LLU;

    t80 = ((x381^x382)+(x383-x384));

    if (t80 != 2147450880LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x385 = -9665738345132LL;
	int8_t x386 = INT8_MAX;
	int16_t x387 = INT16_MAX;
	static uint8_t x388 = 1U;
	int64_t t81 = -308408LL;

    t81 = ((x385^x386)+(x387-x388));

    if (t81 != -9665738312407LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x389 = 546438440U;
	int16_t x390 = INT16_MIN;
	int16_t x392 = INT16_MAX;
	static uint32_t t82 = 7958974U;

    t82 = ((x389^x390)+(x391-x392));

    if (t82 != 3748527404U) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x397 = INT8_MAX;
	int8_t x399 = -1;
	static int8_t x400 = 4;
	static uint64_t t83 = 41LLU;

    t83 = ((x397^x398)+(x399-x400));

    if (t83 != 3305959698807511LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x401 = INT8_MAX;
	uint16_t x402 = UINT16_MAX;
	int64_t x403 = INT64_MIN;
	uint64_t x404 = UINT64_MAX;
	volatile uint64_t t84 = 106533775307LLU;

    t84 = ((x401^x402)+(x403-x404));

    if (t84 != 9223372036854841217LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x405 = -1;
	int8_t x406 = -1;
	volatile int16_t x407 = 3890;
	int16_t x408 = -1;

    t85 = ((x405^x406)+(x407-x408));

    if (t85 != 3891) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x413 = 76696606LLU;
	int64_t x414 = -250269640159491LL;
	uint64_t x415 = UINT64_MAX;
	volatile uint8_t x416 = 73U;
	volatile uint64_t t86 = 281LLU;

    t86 = ((x413^x414)+(x415-x416));

    if (t86 != 18446493804011864729LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x417 = -1;
	volatile int32_t x419 = -205459245;
	int16_t x420 = -348;
	uint32_t t87 = 917342U;

    t87 = ((x417^x418)+(x419-x420));

    if (t87 != 3935577815U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x421 = INT8_MAX;
	int32_t x422 = INT32_MIN;
	int8_t x423 = INT8_MIN;
	static int16_t x424 = INT16_MIN;

    t88 = ((x421^x422)+(x423-x424));

    if (t88 != -2147450881) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x429 = 0;
	int32_t x430 = INT32_MIN;
	uint16_t x431 = UINT16_MAX;
	volatile int16_t x432 = -68;
	static int32_t t89 = 1;

    t89 = ((x429^x430)+(x431-x432));

    if (t89 != -2147418045) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x442 = 10963LLU;
	int16_t x443 = -1;
	int32_t x444 = 40060944;

    t90 = ((x441^x442)+(x443-x444));

    if (t90 != 18446744073669479707LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x445 = 24;
	int16_t x446 = 44;
	static uint8_t x448 = UINT8_MAX;
	volatile int32_t t91 = 461;

    t91 = ((x445^x446)+(x447-x448));

    if (t91 != -204) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x462 = 3U;
	int32_t x463 = 369;
	int64_t x464 = -1LL;
	int64_t t92 = 26LL;

    t92 = ((x461^x462)+(x463-x464));

    if (t92 != 494LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x473 = INT32_MAX;
	volatile int16_t x474 = INT16_MAX;
	uint32_t x475 = 1624807U;
	uint16_t x476 = UINT16_MAX;
	static uint32_t t93 = 2092U;

    t93 = ((x473^x474)+(x475-x476));

    if (t93 != 2149010152U) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x477 = -280;
	volatile uint16_t x478 = UINT16_MAX;
	volatile int8_t x479 = -1;
	uint32_t x480 = 164877U;
	uint32_t t94 = 1158369852U;

    t94 = ((x477^x478)+(x479-x480));

    if (t94 != 4294737161U) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x482 = 91U;
	static int64_t x483 = -1LL;
	int64_t x484 = -1LL;
	static volatile int64_t t95 = 2642601947422383217LL;

    t95 = ((x481^x482)+(x483-x484));

    if (t95 != 9223372036854775716LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x485 = UINT16_MAX;
	uint8_t x486 = UINT8_MAX;
	static int8_t x487 = INT8_MIN;
	int16_t x488 = 3388;
	volatile int32_t t96 = 40243452;

    t96 = ((x485^x486)+(x487-x488));

    if (t96 != 61764) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x489 = -776415202966LL;
	int64_t x490 = INT64_MIN;
	volatile uint64_t t97 = 190740860889581LLU;

    t97 = ((x489^x490)+(x491-x492));

    if (t97 != 9223371260439572798LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x497 = UINT64_MAX;
	static int64_t x498 = 13889LL;
	uint64_t t98 = 29415189887196065LLU;

    t98 = ((x497^x498)+(x499-x500));

    if (t98 != 5874399670LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x501 = 4482872;
	int8_t x503 = INT8_MIN;
	volatile int64_t x504 = 8LL;
	volatile int64_t t99 = 7210371LL;

    t99 = ((x501^x502)+(x503-x504));

    if (t99 != 4482888LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x509 = -1;
	static int8_t x510 = -1;
	int16_t x511 = INT16_MIN;
	int32_t x512 = INT32_MIN;

    t100 = ((x509^x510)+(x511-x512));

    if (t100 != 2147450880) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x517 = -1;
	int8_t x518 = INT8_MIN;
	volatile int8_t x519 = INT8_MIN;
	volatile int64_t x520 = INT64_MIN;

    t101 = ((x517^x518)+(x519-x520));

    if (t101 != INT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x521 = INT16_MIN;
	int32_t x522 = 112;
	volatile uint16_t x524 = 7254U;
	static volatile int64_t t102 = -108429039722LL;

    t102 = ((x521^x522)+(x523-x524));

    if (t102 != -39911LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x525 = UINT8_MAX;
	uint8_t x526 = UINT8_MAX;
	int64_t x527 = INT64_MAX;
	static volatile uint64_t x528 = 166LLU;
	volatile uint64_t t103 = 32458365LLU;

    t103 = ((x525^x526)+(x527-x528));

    if (t103 != 9223372036854775641LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x529 = INT32_MIN;
	int16_t x530 = INT16_MAX;
	int8_t x531 = INT8_MIN;
	volatile uint32_t x532 = UINT32_MAX;
	uint32_t t104 = 865U;

    t104 = ((x529^x530)+(x531-x532));

    if (t104 != 2147516288U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x534 = INT16_MIN;
	uint64_t x536 = 1600LLU;
	uint64_t t105 = 73234133LLU;

    t105 = ((x533^x534)+(x535-x536));

    if (t105 != 814367223LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x537 = 129U;
	int32_t x540 = -1;
	static uint64_t t106 = 8409318256LLU;

    t106 = ((x537^x538)+(x539-x540));

    if (t106 != 543023848524605937LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x541 = -1LL;
	int64_t x544 = 50235701LL;

    t107 = ((x541^x542)+(x543-x544));

    if (t107 != -50202935LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x545 = UINT32_MAX;
	int16_t x546 = -966;
	int16_t x547 = INT16_MAX;
	int32_t x548 = INT32_MAX;
	volatile uint32_t t108 = 500719U;

    t108 = ((x545^x546)+(x547-x548));

    if (t108 != 2147517381U) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x549 = 7U;
	int8_t x550 = -1;
	static int8_t x551 = 17;
	uint64_t x552 = 275013017423902LLU;
	uint64_t t109 = 245862761697567LLU;

    t109 = ((x549^x550)+(x551-x552));

    if (t109 != 18446469060692127723LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x553 = 354U;
	static int64_t x554 = INT64_MIN;

    t110 = ((x553^x554)+(x555-x556));

    if (t110 != -9223372036854742686LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x557 = INT64_MIN;
	uint32_t x558 = UINT32_MAX;
	static uint64_t x559 = 854073467585693137LLU;
	volatile uint64_t t111 = 13LLU;

    t111 = ((x557^x558)+(x559-x560));

    if (t111 != 10077445508735436206LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x561 = 1907888097LL;
	uint32_t x562 = 122U;
	int32_t x563 = -994;
	uint64_t x564 = 455019LLU;
	uint64_t t112 = 4533986010618540375LLU;

    t112 = ((x561^x562)+(x563-x564));

    if (t112 != 1907432014LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x567 = -1;
	int64_t x568 = INT64_MAX;
	int64_t t113 = 5102567296847LL;

    t113 = ((x565^x566)+(x567-x568));

    if (t113 != -9223372036854743136LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x577 = UINT16_MAX;
	volatile uint32_t x578 = UINT32_MAX;
	uint16_t x579 = UINT16_MAX;
	static int8_t x580 = -1;
	volatile uint32_t t114 = 102880687U;

    t114 = ((x577^x578)+(x579-x580));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x581 = INT32_MIN;
	static int8_t x582 = INT8_MAX;
	uint64_t x583 = UINT64_MAX;
	int8_t x584 = INT8_MAX;
	static volatile uint64_t t115 = 12LLU;

    t115 = ((x581^x582)+(x583-x584));

    if (t115 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x589 = -882087967;
	int32_t x590 = INT32_MIN;
	static volatile int32_t t116 = 11;

    t116 = ((x589^x590)+(x591-x592));

    if (t116 != -880291303) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x593 = -1;
	int32_t x594 = INT32_MIN;
	int8_t x595 = -1;
	uint64_t x596 = 2875LLU;
	uint64_t t117 = 708939959334LLU;

    t117 = ((x593^x594)+(x595-x596));

    if (t117 != 2147480771LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x598 = 0;
	int16_t x600 = -1;
	volatile int32_t t118 = -5107;

    t118 = ((x597^x598)+(x599-x600));

    if (t118 != 1515244) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x606 = 20640U;
	int32_t x607 = -110581034;
	int64_t t119 = -18138223897LL;

    t119 = ((x605^x606)+(x607-x608));

    if (t119 != -110633543LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x609 = 12223U;
	int8_t x610 = 0;
	uint8_t x611 = 2U;
	volatile int64_t x612 = INT64_MAX;

    t120 = ((x609^x610)+(x611-x612));

    if (t120 != -9223372036854763582LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x613 = -1;
	static int8_t x614 = -4;
	uint32_t x616 = UINT32_MAX;
	uint32_t t121 = 242U;

    t121 = ((x613^x614)+(x615-x616));

    if (t121 != 3U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x617 = 10657U;
	static volatile uint16_t x619 = 689U;
	int32_t x620 = -1;

    t122 = ((x617^x618)+(x619-x620));

    if (t122 != -21421) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x622 = INT16_MAX;
	volatile int16_t x623 = INT16_MAX;
	volatile int32_t t123 = -88021685;

    t123 = ((x621^x622)+(x623-x624));

    if (t123 != 65278) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x625 = INT32_MIN;
	static uint16_t x626 = 76U;
	volatile uint16_t x627 = 360U;
	static uint64_t x628 = 125LLU;
	volatile uint64_t t124 = 53766441303672LLU;

    t124 = ((x625^x626)+(x627-x628));

    if (t124 != 18446744071562068279LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x629 = 2U;
	uint16_t x630 = 269U;
	volatile int16_t x631 = INT16_MIN;
	static int8_t x632 = 1;
	int32_t t125 = -293813380;

    t125 = ((x629^x630)+(x631-x632));

    if (t125 != -32498) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x633 = 2999765LL;
	volatile uint32_t x635 = 11219985U;
	int8_t x636 = -4;
	volatile int64_t t126 = 25044464950552491LL;

    t126 = ((x633^x634)+(x635-x636));

    if (t126 != 14219772LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x637 = INT64_MIN;
	int32_t x638 = INT32_MAX;
	uint16_t x639 = 8341U;
	uint8_t x640 = 2U;
	int64_t t127 = -250960345LL;

    t127 = ((x637^x638)+(x639-x640));

    if (t127 != -9223372034707283822LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x641 = -3;
	volatile int8_t x642 = INT8_MAX;
	volatile int32_t t128 = 23643;

    t128 = ((x641^x642)+(x643-x644));

    if (t128 != -32894) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x649 = UINT64_MAX;
	uint16_t x650 = 3U;
	int32_t x652 = INT32_MIN;
	volatile uint64_t t129 = 107LLU;

    t129 = ((x649^x650)+(x651-x652));

    if (t129 != 2147483516LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x654 = 1004638102LLU;
	uint16_t x655 = 2U;
	int32_t x656 = 0;
	uint64_t t130 = 2649835861LLU;

    t130 = ((x653^x654)+(x655-x656));

    if (t130 != 18446744072704913515LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x657 = INT8_MAX;
	uint64_t x658 = 0LLU;
	static volatile int32_t x659 = -254;
	static volatile int64_t x660 = INT64_MIN;

    t131 = ((x657^x658)+(x659-x660));

    if (t131 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x661 = UINT8_MAX;
	int64_t x662 = INT64_MIN;
	int64_t x663 = -1LL;
	int16_t x664 = -1;
	int64_t t132 = 9LL;

    t132 = ((x661^x662)+(x663-x664));

    if (t132 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x666 = INT16_MIN;
	int16_t x668 = INT16_MIN;

    t133 = ((x665^x666)+(x667-x668));

    if (t133 != 65465) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x669 = INT32_MIN;
	int32_t x670 = INT32_MAX;
	int64_t x671 = -10735274587772726LL;
	static int64_t t134 = 24162285718674LL;

    t134 = ((x669^x670)+(x671-x672));

    if (t134 != -10735274587739959LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x673 = 44U;
	volatile uint32_t x674 = 591859U;
	static int32_t x675 = -1;
	static int64_t x676 = -100921904269227211LL;
	static int64_t t135 = -1LL;

    t135 = ((x673^x674)+(x675-x676));

    if (t135 != 100921904269819049LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x677 = -1;
	volatile uint8_t x678 = 7U;
	int8_t x679 = -7;
	static uint64_t x680 = UINT64_MAX;

    t136 = ((x677^x678)+(x679-x680));

    if (t136 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x681 = INT8_MIN;
	int8_t x682 = INT8_MAX;
	uint8_t x683 = 1U;
	static int8_t x684 = 7;

    t137 = ((x681^x682)+(x683-x684));

    if (t137 != -7) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x685 = 3U;
	int16_t x686 = INT16_MIN;
	uint32_t x687 = 309U;
	uint32_t t138 = 1599250U;

    t138 = ((x685^x686)+(x687-x688));

    if (t138 != 4280377924U) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x697 = INT16_MIN;
	uint64_t x698 = 845523055190729093LLU;
	static int32_t x699 = -29421;
	volatile int8_t x700 = -46;
	volatile uint64_t t139 = 804LLU;

    t139 = ((x697^x698)+(x699-x700));

    if (t139 != 17601221018518810310LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x701 = 35765;
	uint64_t x702 = 27041330105LLU;
	uint32_t x703 = UINT32_MAX;
	int16_t x704 = -7;
	volatile uint64_t t140 = 47877569275491539LLU;

    t140 = ((x701^x702)+(x703-x704));

    if (t140 != 27041298450LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x705 = 3U;
	volatile uint32_t x706 = 396U;
	volatile int16_t x708 = INT16_MIN;
	volatile uint32_t t141 = 130278U;

    t141 = ((x705^x706)+(x707-x708));

    if (t141 != 33168U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x713 = INT8_MIN;
	int16_t x714 = -1;
	volatile int32_t x715 = 7;
	uint16_t x716 = UINT16_MAX;
	int32_t t142 = -3;

    t142 = ((x713^x714)+(x715-x716));

    if (t142 != -65401) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x717 = 53;
	uint32_t x718 = 59124U;
	int32_t x720 = -866053;
	uint32_t t143 = 2573U;

    t143 = ((x717^x718)+(x719-x720));

    if (t143 != 942080U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x722 = UINT32_MAX;
	static int32_t x723 = INT32_MIN;
	static int32_t x724 = INT32_MIN;
	uint32_t t144 = 633043307U;

    t144 = ((x721^x722)+(x723-x724));

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x725 = INT8_MAX;
	volatile int16_t x727 = 781;
	int16_t x728 = -1;
	int32_t t145 = 23207015;

    t145 = ((x725^x726)+(x727-x728));

    if (t145 != 899) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x729 = 22U;
	int32_t x730 = INT32_MAX;
	uint64_t x731 = 145362472688LLU;
	uint64_t x732 = 58776334822657302LLU;
	static volatile uint64_t t146 = 42154997718958LLU;

    t146 = ((x729^x730)+(x731-x732));

    if (t146 != 18387967886396850627LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x733 = -129331544329059200LL;
	volatile int8_t x734 = INT8_MAX;
	int8_t x735 = INT8_MAX;
	uint16_t x736 = UINT16_MAX;

    t147 = ((x733^x734)+(x735-x736));

    if (t147 != -129331544329124481LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x741 = 7962115LLU;
	int32_t x742 = -96;
	uint64_t t148 = 17116089038843626LLU;

    t148 = ((x741^x742)+(x743-x744));

    if (t148 != 17469459017333232187LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x745 = 33U;
	volatile int32_t x746 = INT32_MAX;
	uint32_t x747 = UINT32_MAX;
	int16_t x748 = -1;
	uint32_t t149 = 218U;

    t149 = ((x745^x746)+(x747-x748));

    if (t149 != 2147483614U) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x749 = -1LL;
	int64_t x750 = INT64_MAX;
	volatile int16_t x751 = INT16_MIN;
	int16_t x752 = INT16_MIN;
	int64_t t150 = INT64_MIN;

    t150 = ((x749^x750)+(x751-x752));

    if (t150 != INT64_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x754 = 8U;
	uint8_t x755 = UINT8_MAX;
	int16_t x756 = -1;
	uint32_t t151 = 7502062U;

    t151 = ((x753^x754)+(x755-x756));

    if (t151 != 270U) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x757 = INT16_MAX;
	static int8_t x758 = INT8_MIN;
	volatile int16_t x759 = INT16_MIN;
	int64_t t152 = -26796214478555306LL;

    t152 = ((x757^x758)+(x759-x760));

    if (t152 != 9223372036854710399LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x761 = 6U;
	int8_t x762 = -1;
	int8_t x763 = 31;
	static volatile uint32_t x764 = 2033U;
	static uint32_t t153 = 499630U;

    t153 = ((x761^x762)+(x763-x764));

    if (t153 != 4294965287U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x765 = 557463U;
	int64_t x766 = -1LL;
	int64_t x767 = 2015613277056LL;
	int32_t x768 = INT32_MIN;

    t154 = ((x765^x766)+(x767-x768));

    if (t154 != 2017760203240LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x773 = INT8_MIN;
	int8_t x774 = INT8_MIN;
	static volatile int16_t x775 = INT16_MAX;
	volatile int8_t x776 = INT8_MIN;
	int32_t t155 = -14915505;

    t155 = ((x773^x774)+(x775-x776));

    if (t155 != 32895) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x781 = INT8_MIN;
	int64_t x782 = INT64_MAX;
	int16_t x783 = 1;
	uint32_t x784 = UINT32_MAX;

    t156 = ((x781^x782)+(x783-x784));

    if (t156 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x789 = -1;
	static uint8_t x790 = 5U;
	int16_t x791 = -1;
	static int8_t x792 = -1;
	static volatile int32_t t157 = 255;

    t157 = ((x789^x790)+(x791-x792));

    if (t157 != -6) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x794 = -1LL;
	uint16_t x795 = 69U;
	static uint8_t x796 = 21U;

    t158 = ((x793^x794)+(x795-x796));

    if (t158 != -4294967248LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x800 = INT64_MIN;
	volatile int64_t t159 = 7666LL;

    t159 = ((x797^x798)+(x799-x800));

    if (t159 != 9223372034707292144LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint16_t x805 = 701U;
	static volatile int16_t x806 = 1385;
	int64_t x808 = INT64_MAX;
	volatile int64_t t160 = -13325350994887860LL;

    t160 = ((x805^x806)+(x807-x808));

    if (t160 != -9223372036854773804LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x809 = UINT8_MAX;
	static int16_t x810 = -1;
	uint32_t x812 = UINT32_MAX;
	volatile uint32_t t161 = 2U;

    t161 = ((x809^x810)+(x811-x812));

    if (t161 != 2147483392U) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x813 = 8181;
	uint16_t x814 = 1506U;
	static int64_t x815 = 1464806286737538LL;
	volatile int32_t x816 = INT32_MAX;
	int64_t t162 = -260LL;

    t162 = ((x813^x814)+(x815-x816));

    if (t162 != 1464804139260570LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x817 = INT64_MAX;
	static int16_t x818 = -1;
	volatile int32_t x819 = -1;
	int64_t x820 = -1LL;

    t163 = ((x817^x818)+(x819-x820));

    if (t163 != INT64_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x821 = 141884897U;
	static uint32_t x822 = UINT32_MAX;
	volatile uint32_t x823 = UINT32_MAX;

    t164 = ((x821^x822)+(x823-x824));

    if (t164 != 4153082380U) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x825 = INT32_MAX;
	uint64_t x827 = 4306651375657LLU;
	int32_t x828 = 918;
	static volatile uint64_t t165 = 65344764895147LLU;

    t165 = ((x825^x826)+(x827-x828));

    if (t165 != 4304503891091LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x829 = UINT8_MAX;
	int16_t x830 = INT16_MIN;
	uint8_t x831 = UINT8_MAX;
	static int32_t x832 = -1;

    t166 = ((x829^x830)+(x831-x832));

    if (t166 != -32257) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x833 = UINT16_MAX;
	uint64_t x834 = UINT64_MAX;
	int8_t x836 = INT8_MIN;
	volatile uint64_t t167 = 14LLU;

    t167 = ((x833^x834)+(x835-x836));

    if (t167 != 18446744073709486463LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x838 = 46;
	uint8_t x839 = UINT8_MAX;
	volatile int8_t x840 = -1;
	int32_t t168 = 128219575;

    t168 = ((x837^x838)+(x839-x840));

    if (t168 != 174) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x841 = 13871277188224233LL;
	volatile int8_t x842 = INT8_MIN;
	volatile int8_t x843 = 0;
	volatile int16_t x844 = INT16_MIN;
	volatile int64_t t169 = 20397LL;

    t169 = ((x841^x842)+(x843-x844));

    if (t169 != -13871277188191383LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x845 = INT8_MIN;
	int16_t x846 = INT16_MIN;
	int16_t x847 = INT16_MIN;
	static int64_t x848 = 812618782330206LL;
	static int64_t t170 = 0LL;

    t170 = ((x845^x846)+(x847-x848));

    if (t170 != -812618782330334LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x849 = 10;
	static uint32_t x850 = 136763U;
	uint16_t x852 = UINT16_MAX;
	uint32_t t171 = 2560U;

    t171 = ((x849^x850)+(x851-x852));

    if (t171 != 545164U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x856 = INT64_MIN;

    t172 = ((x853^x854)+(x855-x856));

    if (t172 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x857 = 3523661LLU;
	static int16_t x859 = INT16_MIN;
	uint16_t x860 = 5U;
	uint64_t t173 = 4260371267LLU;

    t173 = ((x857^x858)+(x859-x860));

    if (t173 != 1941960LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x865 = INT8_MIN;
	int32_t x866 = -1;
	static volatile uint32_t x867 = UINT32_MAX;
	uint32_t x868 = 178730188U;
	uint32_t t174 = 1162379U;

    t174 = ((x865^x866)+(x867-x868));

    if (t174 != 4116237234U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x869 = 27028247LLU;
	volatile int8_t x871 = INT8_MAX;
	uint16_t x872 = UINT16_MAX;

    t175 = ((x869^x870)+(x871-x872));

    if (t175 != 18446744073682457960LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x873 = 7;
	uint64_t x875 = UINT64_MAX;
	uint32_t x876 = 725450062U;

    t176 = ((x873^x874)+(x875-x876));

    if (t176 != 18446744072984098945LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x877 = UINT16_MAX;
	static int8_t x878 = -1;
	uint64_t x879 = 53577450350505607LLU;
	int32_t x880 = INT32_MAX;
	volatile uint64_t t177 = 475417LLU;

    t177 = ((x877^x878)+(x879-x880));

    if (t177 != 53577448202956424LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x881 = INT16_MIN;
	int16_t x882 = INT16_MIN;
	uint64_t x883 = UINT64_MAX;
	int16_t x884 = INT16_MIN;

    t178 = ((x881^x882)+(x883-x884));

    if (t178 != 32767LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x885 = INT64_MAX;
	int16_t x886 = -21;
	volatile uint64_t x887 = 7LLU;
	uint64_t x888 = 141466LLU;

    t179 = ((x885^x886)+(x887-x888));

    if (t179 != 9223372036854634369LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x889 = 27019136U;
	static int32_t x890 = 842;
	static int64_t x891 = 52528LL;
	int64_t t180 = -332309544576301298LL;

    t180 = ((x889^x890)+(x891-x892));

    if (t180 != 27005435LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x893 = INT16_MIN;
	uint64_t x894 = 938269LLU;
	int8_t x895 = INT8_MIN;
	int64_t x896 = -129279574407753097LL;
	volatile uint64_t t181 = 46241460LLU;

    t181 = ((x893^x894)+(x895-x896));

    if (t181 != 129279574406823462LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x897 = 2790U;
	int16_t x898 = -1;
	int16_t x899 = INT16_MIN;
	static int16_t x900 = -5;
	volatile int32_t t182 = -92250;

    t182 = ((x897^x898)+(x899-x900));

    if (t182 != -35554) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x901 = UINT16_MAX;
	int64_t x902 = INT64_MAX;
	static uint16_t x903 = 5U;
	uint64_t x904 = UINT64_MAX;
	volatile uint64_t t183 = 10796967477087049LLU;

    t183 = ((x901^x902)+(x903-x904));

    if (t183 != 9223372036854710278LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x905 = UINT16_MAX;
	int8_t x906 = 5;
	uint8_t x907 = 1U;
	volatile int8_t x908 = -1;
	int32_t t184 = -80;

    t184 = ((x905^x906)+(x907-x908));

    if (t184 != 65532) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x909 = -1LL;
	uint64_t x910 = UINT64_MAX;
	static uint16_t x911 = 110U;
	volatile int16_t x912 = INT16_MIN;
	static volatile uint64_t t185 = 24230LLU;

    t185 = ((x909^x910)+(x911-x912));

    if (t185 != 32878LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x913 = INT64_MIN;
	uint32_t x914 = 279473019U;
	static int16_t x915 = 60;
	int8_t x916 = 1;
	int64_t t186 = 174776167724601LL;

    t186 = ((x913^x914)+(x915-x916));

    if (t186 != -9223372036575302730LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x919 = INT16_MIN;
	static int32_t x920 = -1;
	uint32_t t187 = 9189462U;

    t187 = ((x917^x918)+(x919-x920));

    if (t187 != 4294934536U) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x921 = INT32_MIN;
	uint64_t x923 = 1407841925132274350LLU;
	volatile uint64_t t188 = 18657520117LLU;

    t188 = ((x921^x922)+(x923-x924));

    if (t188 != 1407841922984790575LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x925 = 1;
	static uint16_t x927 = 1875U;
	static int64_t x928 = -1LL;
	volatile int64_t t189 = -74377693649321LL;

    t189 = ((x925^x926)+(x927-x928));

    if (t189 != 2102LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x929 = -1;
	int8_t x931 = INT8_MAX;
	volatile uint64_t t190 = 122326793LLU;

    t190 = ((x929^x930)+(x931-x932));

    if (t190 != 18446743690383830541LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x933 = INT64_MAX;
	int64_t x934 = INT64_MAX;
	int8_t x936 = INT8_MIN;
	uint64_t t191 = 82837LLU;

    t191 = ((x933^x934)+(x935-x936));

    if (t191 != 127LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x937 = -2;
	int8_t x938 = INT8_MIN;
	uint64_t x939 = 6LLU;
	volatile int8_t x940 = INT8_MIN;
	static volatile uint64_t t192 = 456035653725LLU;

    t192 = ((x937^x938)+(x939-x940));

    if (t192 != 260LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x941 = -117943118789630843LL;
	volatile uint32_t x942 = 940898415U;
	int32_t x943 = -4;
	volatile int8_t x944 = INT8_MIN;
	int64_t t193 = 258381798025630LL;

    t193 = ((x941^x942)+(x943-x944));

    if (t193 != -117943119730483866LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x953 = UINT64_MAX;
	static int16_t x954 = -1;
	volatile uint64_t x955 = 1243943LLU;
	static volatile int32_t x956 = 1;
	volatile uint64_t t194 = 10164711321834LLU;

    t194 = ((x953^x954)+(x955-x956));

    if (t194 != 1243942LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x957 = UINT32_MAX;
	uint8_t x958 = UINT8_MAX;
	int8_t x960 = INT8_MAX;
	static uint64_t t195 = 15415310128108LLU;

    t195 = ((x957^x958)+(x959-x960));

    if (t195 != 4298877271LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x961 = 1209270LLU;
	uint64_t x962 = 42664636LLU;
	int16_t x963 = INT16_MIN;

    t196 = ((x961^x962)+(x963-x964));

    if (t196 != 43577603LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x965 = 124U;
	int8_t x966 = INT8_MIN;
	int8_t x967 = INT8_MIN;
	uint64_t x968 = 1909013500582LLU;

    t197 = ((x965^x966)+(x967-x968));

    if (t197 != 18446742164696050902LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x969 = UINT32_MAX;
	uint16_t x970 = UINT16_MAX;
	int8_t x971 = INT8_MIN;
	uint32_t t198 = 1346033742U;

    t198 = ((x969^x970)+(x971-x972));

    if (t198 != 4294901631U) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x973 = 8U;
	int16_t x974 = INT16_MIN;
	static int16_t x975 = -1;
	volatile int64_t x976 = -1LL;
	volatile int64_t t199 = 60LL;

    t199 = ((x973^x974)+(x975-x976));

    if (t199 != -32760LL) { NG(); } else { ; }
	
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


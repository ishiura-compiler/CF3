
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

int32_t x4 = INT32_MAX;
int64_t x15 = 3688490439LL;
uint8_t x17 = 2U;
uint8_t x26 = UINT8_MAX;
uint32_t x28 = UINT32_MAX;
volatile int8_t x33 = INT8_MIN;
volatile int8_t x45 = INT8_MIN;
int8_t x46 = INT8_MIN;
static uint8_t x52 = 29U;
int16_t x53 = -1;
volatile int16_t x56 = 770;
static int64_t x58 = -30445874439628LL;
static uint32_t x59 = 130206U;
uint64_t x64 = UINT64_MAX;
int16_t x66 = -189;
int16_t x67 = INT16_MIN;
int64_t x71 = 6301132LL;
static int16_t x72 = 0;
static volatile uint16_t x79 = 927U;
volatile int32_t t19 = 51289;
static volatile uint64_t t22 = 5728LLU;
static uint8_t x94 = UINT8_MAX;
int8_t x97 = -2;
static int64_t t24 = -306895067446723LL;
int32_t t32 = INT32_MIN;
volatile uint16_t x133 = UINT16_MAX;
static int64_t x136 = INT64_MIN;
volatile uint64_t t33 = 1186LLU;
static int32_t x140 = -3254325;
static int16_t x157 = -484;
uint16_t x158 = 59U;
int32_t x159 = -196202;
volatile int16_t x165 = -1;
uint8_t x168 = 31U;
uint32_t t45 = 85U;
int64_t x188 = INT64_MAX;
volatile int64_t t47 = -19103LL;
uint8_t x197 = 9U;
volatile int32_t x200 = 82;
volatile uint64_t x209 = 31520714876726261LLU;
int8_t x212 = 0;
uint64_t x217 = UINT64_MAX;
int8_t x220 = -58;
volatile int64_t x230 = 4741481416744723LL;
uint64_t x238 = 10793778LLU;
volatile uint64_t x242 = UINT64_MAX;
volatile int32_t x248 = -1;
volatile int64_t x252 = INT64_MAX;
int64_t x254 = INT64_MAX;
volatile int16_t x255 = -1;
static volatile uint64_t t65 = 269911858LLU;
int64_t x265 = INT64_MIN;
int32_t x276 = -1;
int64_t x279 = 28368LL;
uint32_t x286 = 507617351U;
volatile int32_t t73 = 53434;
int8_t x300 = INT8_MIN;
int64_t x301 = INT64_MIN;
uint16_t x302 = 4U;
int64_t t75 = 1820640771780LL;
volatile int64_t t76 = -6504809705LL;
int32_t x311 = 30;
volatile int16_t x316 = INT16_MAX;
int8_t x319 = 1;
static int8_t x321 = INT8_MIN;
uint32_t x325 = UINT32_MAX;
uint32_t x326 = UINT32_MAX;
volatile int32_t t83 = 459;
static volatile int32_t t84 = 3324;
uint16_t x341 = 953U;
uint64_t x347 = UINT64_MAX;
static volatile uint64_t x349 = 15990123071LLU;
int64_t x356 = INT64_MAX;
volatile int64_t t90 = -44643LL;
volatile int16_t x371 = INT16_MIN;
volatile int64_t t92 = 12803616148LL;
volatile int16_t x390 = 443;
int32_t x391 = -30517;
static int64_t x393 = 344691313590LL;
volatile int64_t t98 = 132348165202LL;
volatile int64_t t99 = INT64_MIN;
int64_t t100 = 7838241948009787LL;
int16_t x407 = -1;
volatile int8_t x412 = -1;
int32_t x416 = -1;
int8_t x420 = -1;
int32_t x421 = -14947880;
volatile int8_t x424 = INT8_MIN;
int8_t x426 = INT8_MIN;
volatile uint64_t t107 = 9LLU;
volatile uint16_t x436 = UINT16_MAX;
int32_t x437 = -55916;
volatile int32_t x438 = -760869262;
int64_t x439 = INT64_MIN;
int32_t x443 = -1;
static int8_t x447 = INT8_MAX;
static int32_t x448 = -1;
volatile uint16_t x449 = 243U;
uint32_t x456 = UINT32_MAX;
int32_t x457 = INT32_MAX;
int16_t x462 = INT16_MIN;
int32_t x464 = INT32_MAX;
int8_t x467 = INT8_MIN;
int64_t x479 = 2223568958323LL;
static volatile int8_t x483 = 1;
uint64_t x487 = UINT64_MAX;
volatile uint16_t x489 = 1U;
int32_t x492 = 423054;
int8_t x494 = 1;
volatile int64_t x496 = -17309LL;
uint8_t x499 = UINT8_MAX;
static volatile uint32_t t124 = 934783U;
int8_t x504 = -39;
static int32_t t128 = 494970055;
int32_t x519 = INT32_MAX;
int64_t x523 = 89737508280420LL;
int64_t x524 = 151282944405130LL;
volatile uint8_t x526 = 26U;
volatile int32_t t131 = 7;
int16_t x533 = 1;
int64_t x546 = INT64_MIN;
int16_t x548 = INT16_MAX;
volatile int64_t t136 = 836454LL;
int32_t x556 = -38475;
static int8_t x557 = INT8_MIN;
static volatile uint64_t t140 = 67230492LLU;
volatile int64_t t144 = 28LL;
int16_t x581 = INT16_MAX;
uint64_t x584 = UINT64_MAX;
uint16_t x586 = 833U;
static int16_t x591 = -10;
int64_t x593 = INT64_MAX;
int64_t x595 = 3216LL;
static int64_t t148 = -47086LL;
int16_t x598 = 82;
static uint8_t x602 = 7U;
int64_t x611 = -1LL;
volatile int8_t x621 = INT8_MIN;
static volatile int16_t x622 = INT16_MIN;
static volatile int64_t t155 = -71056942LL;
uint16_t x628 = UINT16_MAX;
static int16_t x632 = INT16_MIN;
uint32_t x636 = 345091U;
volatile int64_t t158 = -15183LL;
int8_t x639 = INT8_MIN;
uint16_t x642 = 220U;
uint8_t x643 = 27U;
int8_t x655 = INT8_MIN;
static volatile int32_t t164 = -161922;
uint32_t x662 = 262826U;
int16_t x664 = -1;
static uint32_t t165 = 25764U;
static volatile uint64_t x668 = UINT64_MAX;
int32_t x669 = INT32_MIN;
volatile int16_t x670 = 13;
static int32_t x673 = -1111970;
static uint8_t x680 = UINT8_MAX;
static uint16_t x681 = 0U;
volatile int32_t x684 = INT32_MIN;
static volatile uint64_t t170 = 7089LLU;
int16_t x685 = INT16_MIN;
uint32_t x688 = 10368U;
volatile int16_t x690 = -2;
int32_t x691 = INT32_MIN;
uint64_t x693 = 8772792453775824LLU;
static int8_t x694 = -1;
volatile uint64_t t173 = 63545272024734097LLU;
int64_t x698 = 5537549LL;
int16_t x702 = -1;
int32_t x708 = -1;
uint32_t t176 = 236465676U;
volatile int8_t x709 = INT8_MIN;
uint8_t x710 = 9U;
uint16_t x712 = 85U;
static uint8_t x714 = 5U;
int32_t x716 = -1;
int8_t x717 = INT8_MAX;
int8_t x718 = INT8_MIN;
uint32_t x727 = 11U;
volatile int64_t t181 = -38062617LL;
uint16_t x731 = 264U;
int8_t x738 = INT8_MIN;
int64_t t184 = -92055217754456809LL;
static int8_t x743 = -1;
int16_t x748 = 568;
uint64_t x753 = 233469071234656LLU;
int32_t x755 = INT32_MIN;
uint64_t t189 = 34270508979311LLU;
int8_t x761 = INT8_MIN;
int8_t x767 = INT8_MIN;
uint32_t t192 = 228459303U;
uint16_t x776 = 1150U;
int8_t x781 = -1;
volatile int16_t x789 = INT16_MIN;
int64_t x796 = 12993738LL;
int32_t x797 = INT32_MAX;
int64_t x800 = -599684863049LL;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int8_t x2 = INT8_MIN;
	int64_t x3 = 63687510LL;
	volatile int64_t t0 = 816LL;

    t0 = ((x1^x2)&(x3&x4));

    if (t0 != 63687424LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	uint64_t x6 = UINT64_MAX;
	uint8_t x7 = 0U;
	static uint16_t x8 = 1U;
	uint64_t t1 = 16LLU;

    t1 = ((x5^x6)&(x7&x8));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 65U;
	uint32_t x10 = 9U;
	static uint16_t x11 = 7330U;
	uint64_t x12 = 783042715995969LLU;
	volatile uint64_t t2 = 448LLU;

    t2 = ((x9^x10)&(x11&x12));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x13 = 205U;
	int8_t x14 = INT8_MAX;
	uint8_t x16 = 2U;
	volatile int64_t t3 = -575680782LL;

    t3 = ((x13^x14)&(x15&x16));

    if (t3 != 2LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x18 = INT16_MIN;
	int64_t x19 = INT64_MIN;
	uint8_t x20 = 81U;
	int64_t t4 = 940LL;

    t4 = ((x17^x18)&(x19&x20));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = UINT32_MAX;
	volatile int16_t x22 = -1;
	uint32_t x23 = 16300410U;
	static int32_t x24 = -3912;
	uint32_t t5 = 221253910U;

    t5 = ((x21^x22)&(x23&x24));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = 47;
	uint64_t x27 = 1955LLU;
	volatile uint64_t t6 = 2LLU;

    t6 = ((x25^x26)&(x27&x28));

    if (t6 != 128LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 4U;
	static uint8_t x30 = 32U;
	volatile uint64_t x31 = 7571932LLU;
	static volatile int32_t x32 = INT32_MAX;
	volatile uint64_t t7 = 1LLU;

    t7 = ((x29^x30)&(x31&x32));

    if (t7 != 4LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = INT8_MAX;
	volatile int64_t x35 = 236906281098015933LL;
	int64_t x36 = 1739423697417334582LL;
	int64_t t8 = 154071095635661209LL;

    t8 = ((x33^x34)&(x35&x36));

    if (t8 != 466197365974068LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 1U;
	volatile int8_t x38 = -1;
	uint8_t x39 = UINT8_MAX;
	int8_t x40 = INT8_MAX;
	int32_t t9 = -1;

    t9 = ((x37^x38)&(x39&x40));

    if (t9 != 126) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 9923U;
	uint32_t x42 = 104385430U;
	uint16_t x43 = 36U;
	int16_t x44 = INT16_MIN;
	volatile uint32_t t10 = 11041U;

    t10 = ((x41^x42)&(x43&x44));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x47 = 1U;
	int8_t x48 = INT8_MIN;
	static volatile int32_t t11 = -8446;

    t11 = ((x45^x46)&(x47&x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x49 = INT8_MIN;
	static uint16_t x50 = UINT16_MAX;
	int16_t x51 = 100;
	volatile int32_t t12 = -407184883;

    t12 = ((x49^x50)&(x51&x52));

    if (t12 != 4) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x54 = INT8_MAX;
	uint8_t x55 = 32U;
	volatile int32_t t13 = -1;

    t13 = ((x53^x54)&(x55&x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint64_t x57 = UINT64_MAX;
	uint16_t x60 = 0U;
	uint64_t t14 = 366721821044LLU;

    t14 = ((x57^x58)&(x59&x60));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = -4LL;
	uint32_t x62 = UINT32_MAX;
	volatile int16_t x63 = INT16_MIN;
	uint64_t t15 = 686146LLU;

    t15 = ((x61^x62)&(x63&x64));

    if (t15 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 1216706U;
	volatile uint64_t x68 = 7229656LLU;
	uint64_t t16 = 428570690778LLU;

    t16 = ((x65^x66)&(x67&x68));

    if (t16 != 7077888LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int8_t x69 = 6;
	int32_t x70 = 11283;
	volatile int64_t t17 = -1397LL;

    t17 = ((x69^x70)&(x71&x72));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x73 = 15666LLU;
	static int32_t x74 = 2;
	volatile int64_t x75 = -152233733879496LL;
	volatile uint32_t x76 = 50U;
	volatile uint64_t t18 = 563228LLU;

    t18 = ((x73^x74)&(x75&x76));

    if (t18 != 48LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	volatile int32_t x78 = -1;
	volatile int16_t x80 = -1;

    t19 = ((x77^x78)&(x79&x80));

    if (t19 != 927) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = UINT32_MAX;
	int8_t x82 = 1;
	volatile uint16_t x83 = 541U;
	int64_t x84 = INT64_MIN;
	volatile int64_t t20 = 1511089036448468LL;

    t20 = ((x81^x82)&(x83&x84));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = 1LL;
	static volatile uint16_t x86 = 4U;
	int32_t x87 = -1;
	volatile int64_t x88 = INT64_MAX;
	int64_t t21 = -1005040459385113521LL;

    t21 = ((x85^x86)&(x87&x88));

    if (t21 != 5LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 2U;
	static int64_t x90 = -84463430360929LL;
	static uint64_t x91 = UINT64_MAX;
	int16_t x92 = -1;

    t22 = ((x89^x90)&(x91&x92));

    if (t22 != 18446659610279190685LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -1LL;
	static int16_t x95 = -1;
	int64_t x96 = INT64_MIN;
	volatile int64_t t23 = INT64_MIN;

    t23 = ((x93^x94)&(x95&x96));

    if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x98 = 243U;
	static int32_t x99 = -1;
	int64_t x100 = 13454005850480LL;

    t24 = ((x97^x98)&(x99&x100));

    if (t24 != 13454005850368LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x101 = -1LL;
	int8_t x102 = -1;
	volatile int32_t x103 = INT32_MIN;
	int64_t x104 = -26387958510348325LL;
	int64_t t25 = 14LL;

    t25 = ((x101^x102)&(x103&x104));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MAX;
	static int32_t x106 = INT32_MIN;
	int8_t x107 = 7;
	uint64_t x108 = 14336297995LLU;
	uint64_t t26 = 2501912522158LLU;

    t26 = ((x105^x106)&(x107&x108));

    if (t26 != 3LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MAX;
	int64_t x110 = -1LL;
	int64_t x111 = -1LL;
	uint8_t x112 = 3U;
	volatile int64_t t27 = -1429927637134592LL;

    t27 = ((x109^x110)&(x111&x112));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = 290802562LL;
	static int16_t x114 = -1;
	int32_t x115 = INT32_MIN;
	int64_t x116 = -1LL;
	volatile int64_t t28 = 1LL;

    t28 = ((x113^x114)&(x115&x116));

    if (t28 != -2147483648LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x117 = 1;
	int32_t x118 = 1;
	static uint16_t x119 = 1U;
	uint32_t x120 = UINT32_MAX;
	uint32_t t29 = 3U;

    t29 = ((x117^x118)&(x119&x120));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = 176;
	volatile int32_t x122 = 8520514;
	volatile int32_t x123 = INT32_MIN;
	int64_t x124 = 35696979977859LL;
	int64_t t30 = 4224LL;

    t30 = ((x121^x122)&(x123&x124));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x125 = INT16_MIN;
	static int64_t x126 = -1LL;
	static int16_t x127 = -1;
	int16_t x128 = -32;
	volatile int64_t t31 = -21587106511466902LL;

    t31 = ((x125^x126)&(x127&x128));

    if (t31 != 32736LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x129 = INT32_MIN;
	volatile int16_t x130 = INT16_MAX;
	int16_t x131 = INT16_MIN;
	int16_t x132 = INT16_MIN;

    t32 = ((x129^x130)&(x131&x132));

    if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x134 = INT8_MIN;
	static uint64_t x135 = 1150126564950750850LLU;

    t33 = ((x133^x134)&(x135&x136));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 169U;
	static int16_t x138 = INT16_MIN;
	uint32_t x139 = UINT32_MAX;
	uint32_t t34 = 363603089U;

    t34 = ((x137^x138)&(x139&x140));

    if (t34 != 4291690633U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x141 = 74LLU;
	int16_t x142 = -13;
	static int8_t x143 = -1;
	int64_t x144 = -1LL;
	uint64_t t35 = 517731774LLU;

    t35 = ((x141^x142)&(x143&x144));

    if (t35 != 18446744073709551545LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	int16_t x146 = -10758;
	int32_t x147 = INT32_MIN;
	int16_t x148 = INT16_MIN;
	int32_t t36 = 235;

    t36 = ((x145^x146)&(x147&x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = UINT16_MAX;
	int64_t x150 = 1645307LL;
	static int8_t x151 = 0;
	int16_t x152 = 298;
	volatile int64_t t37 = 2549729828LL;

    t37 = ((x149^x150)&(x151&x152));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = UINT32_MAX;
	volatile uint8_t x154 = 29U;
	static int32_t x155 = -1;
	volatile uint16_t x156 = 197U;
	uint32_t t38 = 96717781U;

    t38 = ((x153^x154)&(x155&x156));

    if (t38 != 192U) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x160 = -1LL;
	static int64_t t39 = -221650018LL;

    t39 = ((x157^x158)&(x159&x160));

    if (t39 != -196602LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = 4U;
	int8_t x162 = INT8_MIN;
	int32_t x163 = INT32_MIN;
	int16_t x164 = INT16_MIN;
	int32_t t40 = INT32_MIN;

    t40 = ((x161^x162)&(x163&x164));

    if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x166 = -2092;
	volatile int8_t x167 = -1;
	volatile int32_t t41 = 0;

    t41 = ((x165^x166)&(x167&x168));

    if (t41 != 11) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x169 = 1555U;
	volatile int8_t x170 = INT8_MAX;
	int16_t x171 = INT16_MAX;
	static uint8_t x172 = UINT8_MAX;
	volatile int32_t t42 = 3;

    t42 = ((x169^x170)&(x171&x172));

    if (t42 != 108) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MIN;
	int16_t x174 = -1276;
	int8_t x175 = INT8_MIN;
	int8_t x176 = INT8_MAX;
	volatile int32_t t43 = 415034;

    t43 = ((x173^x174)&(x175&x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MAX;
	int16_t x178 = INT16_MIN;
	int16_t x179 = -1;
	int16_t x180 = 0;
	volatile int64_t t44 = 1173435343453865274LL;

    t44 = ((x177^x178)&(x179&x180));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = -562;
	volatile uint8_t x182 = UINT8_MAX;
	uint32_t x183 = 3905316U;
	int32_t x184 = -1;

    t45 = ((x181^x182)&(x183&x184));

    if (t45 != 3904800U) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x185 = 378485963U;
	volatile int64_t x186 = -1LL;
	static uint16_t x187 = UINT16_MAX;
	static volatile int64_t t46 = -457430830LL;

    t46 = ((x185^x186)&(x187&x188));

    if (t46 != 49972LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MAX;
	static int64_t x190 = -410115268647532544LL;
	static volatile int8_t x191 = -1;
	int32_t x192 = INT32_MAX;

    t47 = ((x189^x190)&(x191&x192));

    if (t47 != 2025011199LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 1U;
	int64_t x194 = INT64_MIN;
	volatile int32_t x195 = INT32_MIN;
	int32_t x196 = -97293458;
	static int64_t t48 = INT64_MIN;

    t48 = ((x193^x194)&(x195&x196));

    if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x198 = -1;
	int8_t x199 = INT8_MIN;
	volatile int32_t t49 = -1186325;

    t49 = ((x197^x198)&(x199&x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = UINT8_MAX;
	uint16_t x202 = UINT16_MAX;
	uint16_t x203 = 0U;
	int16_t x204 = -1;
	int32_t t50 = 40079095;

    t50 = ((x201^x202)&(x203&x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = -118916004691253LL;
	volatile int8_t x206 = -9;
	uint32_t x207 = UINT32_MAX;
	static int64_t x208 = INT64_MAX;
	volatile int64_t t51 = -7249617LL;

    t51 = ((x205^x206)&(x207&x208));

    if (t51 != 1245166908LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x210 = -1;
	volatile uint32_t x211 = 1532427U;
	static uint64_t t52 = 1112468902779243LLU;

    t52 = ((x209^x210)&(x211&x212));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x213 = 3;
	volatile int64_t x214 = INT64_MAX;
	int16_t x215 = INT16_MIN;
	volatile int32_t x216 = -38;
	static volatile int64_t t53 = 223644421LL;

    t53 = ((x213^x214)&(x215&x216));

    if (t53 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint8_t x218 = 48U;
	int64_t x219 = -1LL;
	volatile uint64_t t54 = 18821647867LLU;

    t54 = ((x217^x218)&(x219&x220));

    if (t54 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x221 = -1LL;
	static int16_t x222 = INT16_MAX;
	volatile int32_t x223 = INT32_MIN;
	int8_t x224 = INT8_MIN;
	volatile int64_t t55 = -4033609LL;

    t55 = ((x221^x222)&(x223&x224));

    if (t55 != -2147483648LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int16_t x225 = INT16_MAX;
	int8_t x226 = -1;
	volatile int8_t x227 = INT8_MIN;
	int16_t x228 = INT16_MIN;
	int32_t t56 = -410030;

    t56 = ((x225^x226)&(x227&x228));

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MAX;
	volatile int32_t x231 = INT32_MIN;
	static volatile int8_t x232 = -1;
	int64_t t57 = 240764526666696LL;

    t57 = ((x229^x230)&(x231&x232));

    if (t57 != 4741480686026752LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	static int32_t x234 = -58549778;
	int8_t x235 = -1;
	int32_t x236 = INT32_MIN;
	volatile int64_t t58 = -65050320610656LL;

    t58 = ((x233^x234)&(x235&x236));

    if (t58 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x237 = -18570;
	static int8_t x239 = 2;
	static int32_t x240 = -3308296;
	volatile uint64_t t59 = 4044LLU;

    t59 = ((x237^x238)&(x239&x240));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x241 = -12;
	static uint32_t x243 = 3U;
	volatile int64_t x244 = 2330949269561054207LL;
	static volatile uint64_t t60 = 897094004923923LLU;

    t60 = ((x241^x242)&(x243&x244));

    if (t60 != 3LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = INT32_MIN;
	volatile uint16_t x246 = 9359U;
	int32_t x247 = INT32_MAX;
	int32_t t61 = 114436;

    t61 = ((x245^x246)&(x247&x248));

    if (t61 != 9359) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = -8345891;
	int16_t x250 = -425;
	int64_t x251 = -916266213LL;
	int64_t t62 = -1LL;

    t62 = ((x249^x250)&(x251&x252));

    if (t62 != 6438922LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x253 = INT16_MIN;
	int16_t x256 = -1;
	static int64_t t63 = -485956690LL;

    t63 = ((x253^x254)&(x255&x256));

    if (t63 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x257 = -1;
	uint32_t x258 = 605576910U;
	uint64_t x259 = 23420864479608LLU;
	int8_t x260 = INT8_MIN;
	uint64_t t64 = 10133LLU;

    t64 = ((x257^x258)&(x259&x260));

    if (t64 != 407273728LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x261 = -1;
	int64_t x262 = 427378767987LL;
	volatile uint32_t x263 = 441536U;
	static uint64_t x264 = UINT64_MAX;

    t65 = ((x261^x262)&(x263&x264));

    if (t65 != 296064LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x266 = 9U;
	static volatile uint8_t x267 = 3U;
	volatile uint8_t x268 = 110U;
	int64_t t66 = -2009958406107LL;

    t66 = ((x265^x266)&(x267&x268));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = UINT16_MAX;
	int32_t x270 = INT32_MIN;
	volatile int64_t x271 = 5696716778288LL;
	int8_t x272 = INT8_MIN;
	int64_t t67 = -1097217249781161629LL;

    t67 = ((x269^x270)&(x271&x272));

    if (t67 != 5695126678272LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = 389612944951892334LLU;
	uint32_t x274 = 261U;
	uint8_t x275 = UINT8_MAX;
	uint64_t t68 = 239582536666498501LLU;

    t68 = ((x273^x274)&(x275&x276));

    if (t68 != 107LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x277 = INT16_MAX;
	int16_t x278 = -325;
	int32_t x280 = 17904;
	int64_t t69 = 3901599584411LL;

    t69 = ((x277^x278)&(x279&x280));

    if (t69 != 64LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = UINT16_MAX;
	volatile int16_t x282 = INT16_MIN;
	int8_t x283 = -4;
	int64_t x284 = INT64_MIN;
	volatile int64_t t70 = INT64_MIN;

    t70 = ((x281^x282)&(x283&x284));

    if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x285 = INT16_MIN;
	volatile int32_t x287 = INT32_MIN;
	uint16_t x288 = UINT16_MAX;
	uint32_t t71 = 19483521U;

    t71 = ((x285^x286)&(x287&x288));

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	static volatile int8_t x290 = -1;
	int16_t x291 = -1;
	int16_t x292 = -1;
	volatile int32_t t72 = INT32_MAX;

    t72 = ((x289^x290)&(x291&x292));

    if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MAX;
	uint8_t x294 = 7U;
	int8_t x295 = INT8_MAX;
	volatile uint16_t x296 = 24U;

    t73 = ((x293^x294)&(x295&x296));

    if (t73 != 24) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x297 = 3147U;
	int16_t x298 = -128;
	int64_t x299 = INT64_MIN;
	int64_t t74 = INT64_MIN;

    t74 = ((x297^x298)&(x299&x300));

    if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x303 = INT32_MAX;
	int16_t x304 = INT16_MIN;

    t75 = ((x301^x302)&(x303&x304));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int32_t x305 = -258224822;
	int64_t x306 = 504005836249403743LL;
	int16_t x307 = -293;
	uint8_t x308 = 4U;

    t76 = ((x305^x306)&(x307&x308));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x309 = UINT16_MAX;
	static volatile uint8_t x310 = UINT8_MAX;
	int32_t x312 = 12768;
	int32_t t77 = 938;

    t77 = ((x309^x310)&(x311&x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x313 = 0U;
	uint32_t x314 = 759281U;
	static int8_t x315 = INT8_MIN;
	volatile uint32_t t78 = 1307041U;

    t78 = ((x313^x314)&(x315&x316));

    if (t78 != 5504U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x317 = INT8_MIN;
	int64_t x318 = INT64_MIN;
	int8_t x320 = -1;
	volatile int64_t t79 = 219871845675LL;

    t79 = ((x317^x318)&(x319&x320));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x322 = INT16_MAX;
	uint64_t x323 = UINT64_MAX;
	volatile uint16_t x324 = 58U;
	static volatile uint64_t t80 = 0LLU;

    t80 = ((x321^x322)&(x323&x324));

    if (t80 != 58LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x327 = 47698259481189838LL;
	static uint64_t x328 = 13542573LLU;
	volatile uint64_t t81 = 1LLU;

    t81 = ((x325^x326)&(x327&x328));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = 179836249LL;
	int64_t x330 = -141856393364659430LL;
	volatile int32_t x331 = INT32_MAX;
	int32_t x332 = 27443;
	static int64_t t82 = -634352139374LL;

    t82 = ((x329^x330)&(x331&x332));

    if (t82 != 8707LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = UINT16_MAX;
	int32_t x334 = INT32_MAX;
	static volatile int8_t x335 = INT8_MIN;
	int32_t x336 = -1;

    t83 = ((x333^x334)&(x335&x336));

    if (t83 != 2147418112) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x337 = INT8_MIN;
	int8_t x338 = 0;
	volatile uint16_t x339 = 98U;
	int16_t x340 = INT16_MAX;

    t84 = ((x337^x338)&(x339&x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x342 = -1;
	int8_t x343 = INT8_MIN;
	static int32_t x344 = INT32_MIN;
	int32_t t85 = INT32_MIN;

    t85 = ((x341^x342)&(x343&x344));

    if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = 2;
	int8_t x346 = -14;
	int64_t x348 = -451034342LL;
	uint64_t t86 = 4233697LLU;

    t86 = ((x345^x346)&(x347&x348));

    if (t86 != 18446744073258517264LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x350 = 126U;
	uint16_t x351 = UINT16_MAX;
	int16_t x352 = 3;
	static uint64_t t87 = 32938752814110LLU;

    t87 = ((x349^x350)&(x351&x352));

    if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x353 = -9831;
	static uint64_t x354 = 244984558454LLU;
	int16_t x355 = -1;
	volatile uint64_t t88 = 519297391368600LLU;

    t88 = ((x353^x354)&(x355&x356));

    if (t88 != 9223371791870225135LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = 0;
	static int64_t x358 = INT64_MIN;
	int16_t x359 = 6;
	int16_t x360 = INT16_MIN;
	volatile int64_t t89 = 37784625LL;

    t89 = ((x357^x358)&(x359&x360));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = -1345853332192357084LL;
	uint16_t x362 = UINT16_MAX;
	int64_t x363 = 10696LL;
	int64_t x364 = -1LL;

    t90 = ((x361^x362)&(x363&x364));

    if (t90 != 10440LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = 117U;
	static uint32_t x366 = UINT32_MAX;
	volatile int32_t x367 = INT32_MAX;
	volatile int16_t x368 = -1;
	uint32_t t91 = 500554126U;

    t91 = ((x365^x366)&(x367&x368));

    if (t91 != 2147483530U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x369 = INT16_MIN;
	int64_t x370 = -1LL;
	volatile int32_t x372 = -1;

    t92 = ((x369^x370)&(x371&x372));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = 174318;
	uint32_t x374 = UINT32_MAX;
	uint16_t x375 = UINT16_MAX;
	static uint16_t x376 = 9383U;
	volatile uint32_t t93 = 3U;

    t93 = ((x373^x374)&(x375&x376));

    if (t93 != 1025U) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = -10468730;
	static int32_t x378 = -1;
	static int8_t x379 = INT8_MAX;
	int8_t x380 = INT8_MIN;
	int32_t t94 = 92595;

    t94 = ((x377^x378)&(x379&x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	uint64_t x382 = 115286311140LLU;
	static int64_t x383 = INT64_MIN;
	volatile uint8_t x384 = 79U;
	uint64_t t95 = 396189LLU;

    t95 = ((x381^x382)&(x383&x384));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x385 = INT16_MAX;
	static uint32_t x386 = 3U;
	uint8_t x387 = 13U;
	volatile uint64_t x388 = 3073315939568452099LLU;
	uint64_t t96 = 50130928LLU;

    t96 = ((x385^x386)&(x387&x388));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x389 = INT32_MIN;
	volatile int32_t x392 = INT32_MAX;
	volatile int32_t t97 = 235249778;

    t97 = ((x389^x390)&(x391&x392));

    if (t97 != 139) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x394 = INT64_MIN;
	int32_t x395 = -1;
	volatile int32_t x396 = INT32_MIN;

    t98 = ((x393^x394)&(x395&x396));

    if (t98 != -9223371693257392128LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x397 = -1;
	static uint8_t x398 = 4U;
	static int16_t x399 = INT16_MIN;
	int64_t x400 = INT64_MIN;

    t99 = ((x397^x398)&(x399&x400));

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = 5272514;
	int32_t x402 = 63;
	int64_t x403 = INT64_MIN;
	volatile int8_t x404 = INT8_MIN;

    t100 = ((x401^x402)&(x403&x404));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = -12770790;
	uint32_t x406 = 28436584U;
	uint64_t x408 = 48676340LLU;
	uint64_t t101 = 4078LLU;

    t101 = ((x405^x406)&(x407&x408));

    if (t101 != 42240112LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint8_t x409 = 15U;
	static uint64_t x410 = UINT64_MAX;
	int64_t x411 = -79280412LL;
	volatile uint64_t t102 = 13150LLU;

    t102 = ((x409^x410)&(x411&x412));

    if (t102 != 18446744073630271200LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x413 = UINT32_MAX;
	volatile int32_t x414 = INT32_MAX;
	static volatile int64_t x415 = INT64_MIN;
	volatile int64_t t103 = 61424LL;

    t103 = ((x413^x414)&(x415&x416));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 3235808U;
	int16_t x418 = INT16_MAX;
	uint8_t x419 = 7U;
	uint32_t t104 = 8U;

    t104 = ((x417^x418)&(x419&x420));

    if (t104 != 7U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x422 = 3U;
	int16_t x423 = INT16_MIN;
	int32_t t105 = 1;

    t105 = ((x421^x422)&(x423&x424));

    if (t105 != -14974976) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint32_t x425 = 226168U;
	uint64_t x427 = 6569062783858307352LLU;
	int8_t x428 = -18;
	volatile uint64_t t106 = 4207675514698883948LLU;

    t106 = ((x425^x426)&(x427&x428));

    if (t106 != 723288072LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = 1U;
	int16_t x430 = 56;
	uint64_t x431 = 86438644998208LLU;
	uint8_t x432 = 1U;

    t107 = ((x429^x430)&(x431&x432));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x433 = INT16_MIN;
	int8_t x434 = INT8_MAX;
	volatile uint32_t x435 = UINT32_MAX;
	volatile uint32_t t108 = 252110U;

    t108 = ((x433^x434)&(x435&x436));

    if (t108 != 32895U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x440 = 5774402226574951LLU;
	volatile uint64_t t109 = 231LLU;

    t109 = ((x437^x438)&(x439&x440));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x441 = 1;
	static int16_t x442 = -1;
	uint8_t x444 = 4U;
	volatile int32_t t110 = -86;

    t110 = ((x441^x442)&(x443&x444));

    if (t110 != 4) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = 50;
	uint64_t x446 = 745502748LLU;
	volatile uint64_t t111 = 22LLU;

    t111 = ((x445^x446)&(x447&x448));

    if (t111 != 46LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x450 = 0U;
	int8_t x451 = INT8_MIN;
	uint32_t x452 = UINT32_MAX;
	volatile uint32_t t112 = 168914U;

    t112 = ((x449^x450)&(x451&x452));

    if (t112 != 128U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x453 = 9U;
	int16_t x454 = INT16_MIN;
	static int64_t x455 = INT64_MIN;
	volatile int64_t t113 = 3319LL;

    t113 = ((x453^x454)&(x455&x456));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x458 = INT64_MIN;
	int8_t x459 = -1;
	int32_t x460 = -1;
	volatile int64_t t114 = -65669123380348LL;

    t114 = ((x457^x458)&(x459&x460));

    if (t114 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MIN;
	static uint32_t x463 = 54492094U;
	volatile uint32_t t115 = 259U;

    t115 = ((x461^x462)&(x463&x464));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -11;
	volatile int64_t x466 = -2391334574017781442LL;
	int32_t x468 = INT32_MAX;
	static volatile int64_t t116 = -12LL;

    t116 = ((x465^x466)&(x467&x468));

    if (t116 != 259038848LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x469 = UINT8_MAX;
	volatile uint64_t x470 = 349344LLU;
	static int8_t x471 = INT8_MIN;
	uint64_t x472 = UINT64_MAX;
	volatile uint64_t t117 = 66899639637938LLU;

    t117 = ((x469^x470)&(x471&x472));

    if (t117 != 349184LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x473 = -1;
	int8_t x474 = -1;
	uint64_t x475 = 69LLU;
	int32_t x476 = -407;
	uint64_t t118 = 98175290532950LLU;

    t118 = ((x473^x474)&(x475&x476));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = INT16_MIN;
	int32_t x478 = 3437;
	int8_t x480 = 1;
	int64_t t119 = 2133039707LL;

    t119 = ((x477^x478)&(x479&x480));

    if (t119 != 1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = INT16_MAX;
	int32_t x482 = -6979841;
	uint64_t x484 = 4412934523820037LLU;
	volatile uint64_t t120 = 3LLU;

    t120 = ((x481^x482)&(x483&x484));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = UINT32_MAX;
	uint16_t x486 = 435U;
	volatile int16_t x488 = -1;
	static uint64_t t121 = 612LLU;

    t121 = ((x485^x486)&(x487&x488));

    if (t121 != 4294966860LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x490 = 175U;
	int64_t x491 = 55813268LL;
	int64_t t122 = 268522221542397109LL;

    t122 = ((x489^x490)&(x491&x492));

    if (t122 != 132LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = 83U;
	volatile uint64_t x495 = UINT64_MAX;
	volatile uint64_t t123 = 266240792925951LLU;

    t123 = ((x493^x494)&(x495&x496));

    if (t123 != 66LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = UINT32_MAX;
	int32_t x498 = INT32_MIN;
	int16_t x500 = -4811;

    t124 = ((x497^x498)&(x499&x500));

    if (t124 != 53U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = 31U;
	volatile int16_t x502 = 1;
	int8_t x503 = INT8_MAX;
	static volatile uint32_t t125 = 73980521U;

    t125 = ((x501^x502)&(x503&x504));

    if (t125 != 24U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MAX;
	uint8_t x506 = 1U;
	static uint64_t x507 = UINT64_MAX;
	uint64_t x508 = 8188401779390380755LLU;
	volatile uint64_t t126 = 51LLU;

    t126 = ((x505^x506)&(x507&x508));

    if (t126 != 1253931730LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x509 = 6LLU;
	uint16_t x510 = 0U;
	int64_t x511 = INT64_MIN;
	int64_t x512 = INT64_MIN;
	volatile uint64_t t127 = 7692740844798312080LLU;

    t127 = ((x509^x510)&(x511&x512));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MAX;
	int8_t x514 = INT8_MIN;
	int32_t x515 = INT32_MAX;
	int16_t x516 = INT16_MIN;

    t128 = ((x513^x514)&(x515&x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MAX;
	uint8_t x518 = UINT8_MAX;
	int32_t x520 = INT32_MAX;
	int32_t t129 = -12824806;

    t129 = ((x517^x518)&(x519&x520));

    if (t129 != 128) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x521 = 10145618269LL;
	volatile int32_t x522 = INT32_MAX;
	static volatile int64_t t130 = 130627LL;

    t130 = ((x521^x522)&(x523&x524));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = 7U;
	int16_t x527 = INT16_MIN;
	int8_t x528 = INT8_MAX;

    t131 = ((x525^x526)&(x527&x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x529 = INT64_MAX;
	static volatile int16_t x530 = INT16_MIN;
	uint32_t x531 = UINT32_MAX;
	static int64_t x532 = -381659286128147778LL;
	static int64_t t132 = -626461854057LL;

    t132 = ((x529^x530)&(x531&x532));

    if (t132 != 17086LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x534 = INT64_MAX;
	volatile int64_t x535 = INT64_MIN;
	int64_t x536 = INT64_MIN;
	volatile int64_t t133 = 39144018LL;

    t133 = ((x533^x534)&(x535&x536));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = 1008;
	uint16_t x538 = 0U;
	static int32_t x539 = -105;
	int16_t x540 = -1;
	volatile int32_t t134 = -71666718;

    t134 = ((x537^x538)&(x539&x540));

    if (t134 != 912) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MIN;
	int8_t x542 = INT8_MIN;
	volatile int64_t x543 = INT64_MIN;
	volatile int64_t x544 = INT64_MIN;
	volatile int64_t t135 = 258814575415145783LL;

    t135 = ((x541^x542)&(x543&x544));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x545 = INT8_MAX;
	volatile int64_t x547 = INT64_MIN;

    t136 = ((x545^x546)&(x547&x548));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MIN;
	static volatile uint32_t x550 = 33U;
	volatile uint16_t x551 = UINT16_MAX;
	uint8_t x552 = UINT8_MAX;
	volatile uint32_t t137 = 503083058U;

    t137 = ((x549^x550)&(x551&x552));

    if (t137 != 161U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = 13U;
	int16_t x554 = INT16_MIN;
	int8_t x555 = -1;
	static int32_t t138 = -5;

    t138 = ((x553^x554)&(x555&x556));

    if (t138 != -65531) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x558 = INT32_MIN;
	uint8_t x559 = 8U;
	int8_t x560 = -14;
	volatile int32_t t139 = -64031976;

    t139 = ((x557^x558)&(x559&x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x561 = INT64_MIN;
	volatile int16_t x562 = INT16_MIN;
	static uint64_t x563 = 259587450263887LLU;
	int64_t x564 = INT64_MIN;

    t140 = ((x561^x562)&(x563&x564));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = 987720;
	uint16_t x566 = 1U;
	uint32_t x567 = 1959442517U;
	uint16_t x568 = 10U;
	volatile uint32_t t141 = 14U;

    t141 = ((x565^x566)&(x567&x568));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x569 = -1;
	static uint32_t x570 = 401U;
	int16_t x571 = INT16_MIN;
	uint8_t x572 = UINT8_MAX;
	volatile uint32_t t142 = 55920U;

    t142 = ((x569^x570)&(x571&x572));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MAX;
	volatile int32_t x574 = INT32_MIN;
	int16_t x575 = INT16_MIN;
	volatile int8_t x576 = 0;
	volatile int32_t t143 = -8740;

    t143 = ((x573^x574)&(x575&x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MIN;
	volatile uint32_t x578 = 1562555000U;
	int32_t x579 = -1;
	uint16_t x580 = UINT16_MAX;

    t144 = ((x577^x578)&(x579&x580));

    if (t144 != 45688LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x582 = INT16_MAX;
	uint8_t x583 = 99U;
	volatile uint64_t t145 = 6LLU;

    t145 = ((x581^x582)&(x583&x584));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MIN;
	int16_t x587 = 0;
	int16_t x588 = -669;
	volatile int32_t t146 = 23897;

    t146 = ((x585^x586)&(x587&x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -1;
	uint8_t x590 = UINT8_MAX;
	volatile int64_t x592 = 4505LL;
	static volatile int64_t t147 = -56370234513LL;

    t147 = ((x589^x590)&(x591&x592));

    if (t147 != 4352LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x594 = 369434;
	volatile int16_t x596 = -33;

    t148 = ((x593^x594)&(x595&x596));

    if (t148 != 3200LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x597 = UINT32_MAX;
	int64_t x599 = -1LL;
	uint16_t x600 = 21U;
	volatile int64_t t149 = 115LL;

    t149 = ((x597^x598)&(x599&x600));

    if (t149 != 5LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 54733141U;
	static uint8_t x603 = 12U;
	int16_t x604 = -4;
	volatile uint32_t t150 = 6913253U;

    t150 = ((x601^x602)&(x603&x604));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = -4;
	int8_t x606 = INT8_MIN;
	static uint8_t x607 = 18U;
	int16_t x608 = 0;
	int32_t t151 = 53790;

    t151 = ((x605^x606)&(x607&x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = 0U;
	int64_t x610 = INT64_MAX;
	int64_t x612 = -467852598462LL;
	static volatile int64_t t152 = -7560837LL;

    t152 = ((x609^x610)&(x611&x612));

    if (t152 != 9223371569002177346LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MIN;
	int32_t x614 = INT32_MIN;
	int64_t x615 = INT64_MIN;
	int16_t x616 = -162;
	static volatile int64_t t153 = -7833245188373LL;

    t153 = ((x613^x614)&(x615&x616));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = -1;
	volatile uint64_t x618 = 1058878497165054006LLU;
	uint8_t x619 = UINT8_MAX;
	int16_t x620 = -1;
	uint64_t t154 = 60697267310866LLU;

    t154 = ((x617^x618)&(x619&x620));

    if (t154 != 201LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x623 = 3263U;
	volatile int64_t x624 = -1LL;

    t155 = ((x621^x622)&(x623&x624));

    if (t155 != 3200LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = 851870U;
	int16_t x626 = -1;
	int16_t x627 = INT16_MIN;
	uint32_t t156 = 41190915U;

    t156 = ((x625^x626)&(x627&x628));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 0U;
	int16_t x630 = INT16_MIN;
	int16_t x631 = INT16_MAX;
	int32_t t157 = -20913;

    t157 = ((x629^x630)&(x631&x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	static int64_t x634 = 62403143362693311LL;
	int8_t x635 = INT8_MIN;

    t158 = ((x633^x634)&(x635&x636));

    if (t158 != 344064LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MAX;
	uint64_t x638 = UINT64_MAX;
	int32_t x640 = INT32_MAX;
	volatile uint64_t t159 = 86334629782LLU;

    t159 = ((x637^x638)&(x639&x640));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x641 = INT64_MAX;
	int64_t x644 = INT64_MIN;
	volatile int64_t t160 = 539537572258LL;

    t160 = ((x641^x642)&(x643&x644));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x645 = UINT32_MAX;
	int8_t x646 = -1;
	int64_t x647 = INT64_MIN;
	uint16_t x648 = 6U;
	int64_t t161 = 24781900428LL;

    t161 = ((x645^x646)&(x647&x648));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x649 = 159U;
	volatile int64_t x650 = INT64_MIN;
	static int8_t x651 = 63;
	uint64_t x652 = UINT64_MAX;
	uint64_t t162 = 5977580894LLU;

    t162 = ((x649^x650)&(x651&x652));

    if (t162 != 31LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = 48U;
	static int16_t x654 = -2;
	volatile int32_t x656 = -514909;
	volatile int32_t t163 = -8;

    t163 = ((x653^x654)&(x655&x656));

    if (t163 != -514944) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = UINT16_MAX;
	uint8_t x658 = 3U;
	static volatile int8_t x659 = INT8_MIN;
	int8_t x660 = INT8_MAX;

    t164 = ((x657^x658)&(x659&x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = 1017;
	uint8_t x663 = 1U;

    t165 = ((x661^x662)&(x663&x664));

    if (t165 != 1U) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -1LL;
	int8_t x666 = -11;
	uint32_t x667 = UINT32_MAX;
	uint64_t t166 = 150548843972727737LLU;

    t166 = ((x665^x666)&(x667&x668));

    if (t166 != 10LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x671 = INT32_MIN;
	int16_t x672 = INT16_MAX;
	int32_t t167 = 946174933;

    t167 = ((x669^x670)&(x671&x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x674 = INT8_MAX;
	uint32_t x675 = 97U;
	int16_t x676 = INT16_MIN;
	static volatile uint32_t t168 = 1U;

    t168 = ((x673^x674)&(x675&x676));

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MAX;
	uint32_t x678 = UINT32_MAX;
	int16_t x679 = 3;
	uint32_t t169 = 1847874128U;

    t169 = ((x677^x678)&(x679&x680));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x682 = UINT64_MAX;
	volatile int32_t x683 = -1;

    t170 = ((x681^x682)&(x683&x684));

    if (t170 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x686 = INT16_MIN;
	int8_t x687 = 0;
	static uint32_t t171 = 6U;

    t171 = ((x685^x686)&(x687&x688));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x689 = INT8_MAX;
	uint8_t x692 = 12U;
	int32_t t172 = 780;

    t172 = ((x689^x690)&(x691&x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x695 = INT32_MIN;
	static volatile int64_t x696 = -8042LL;

    t173 = ((x693^x694)&(x695&x696));

    if (t173 != 18437971280884924416LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x697 = -858266152;
	static int64_t x699 = INT64_MIN;
	uint8_t x700 = UINT8_MAX;
	volatile int64_t t174 = -97404172298404598LL;

    t174 = ((x697^x698)&(x699&x700));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x701 = -28;
	volatile uint32_t x703 = 28968478U;
	volatile uint32_t x704 = 4665351U;
	uint32_t t175 = 1U;

    t175 = ((x701^x702)&(x703&x704));

    if (t175 != 2U) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	static int16_t x706 = INT16_MAX;
	uint32_t x707 = 402537U;

    t176 = ((x705^x706)&(x707&x708));

    if (t176 != 402537U) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x711 = 23U;
	int32_t t177 = 13418032;

    t177 = ((x709^x710)&(x711&x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x713 = 1594;
	int32_t x715 = 0;
	int32_t t178 = -168217414;

    t178 = ((x713^x714)&(x715&x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x719 = UINT32_MAX;
	int8_t x720 = 5;
	volatile uint32_t t179 = 624251U;

    t179 = ((x717^x718)&(x719&x720));

    if (t179 != 5U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = 0U;
	uint8_t x722 = UINT8_MAX;
	volatile int32_t x723 = INT32_MAX;
	static volatile int64_t x724 = -1LL;
	int64_t t180 = 1509022868890LL;

    t180 = ((x721^x722)&(x723&x724));

    if (t180 != 255LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	int8_t x726 = INT8_MAX;
	int64_t x728 = -1LL;

    t181 = ((x725^x726)&(x727&x728));

    if (t181 != 11LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 8U;
	int8_t x730 = INT8_MIN;
	int64_t x732 = 22240668458485901LL;
	volatile int64_t t182 = -548989847352052LL;

    t182 = ((x729^x730)&(x731&x732));

    if (t182 != 8LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MIN;
	int32_t x734 = 85;
	volatile uint32_t x735 = UINT32_MAX;
	volatile int32_t x736 = -60;
	uint32_t t183 = 11451U;

    t183 = ((x733^x734)&(x735&x736));

    if (t183 != 4294934596U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x737 = 64;
	int64_t x739 = INT64_MAX;
	int32_t x740 = -1;

    t184 = ((x737^x738)&(x739&x740));

    if (t184 != 9223372036854775744LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -1;
	volatile uint8_t x742 = 0U;
	int16_t x744 = INT16_MAX;
	static int32_t t185 = 31618107;

    t185 = ((x741^x742)&(x743&x744));

    if (t185 != 32767) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = -1;
	static int8_t x746 = INT8_MIN;
	volatile int64_t x747 = INT64_MIN;
	volatile int64_t t186 = 0LL;

    t186 = ((x745^x746)&(x747&x748));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MIN;
	static int64_t x750 = -13630485228864425LL;
	int64_t x751 = -1LL;
	int64_t x752 = -27LL;
	volatile int64_t t187 = 584518913812032459LL;

    t187 = ((x749^x750)&(x751&x752));

    if (t187 != 9209741551625911365LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x754 = INT16_MIN;
	int8_t x756 = INT8_MIN;
	static volatile uint64_t t188 = 2874650369513LLU;

    t188 = ((x753^x754)&(x755&x756));

    if (t188 != 18446510603582308352LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x757 = INT8_MAX;
	uint16_t x758 = 111U;
	uint64_t x759 = UINT64_MAX;
	uint64_t x760 = 1889223461LLU;

    t189 = ((x757^x758)&(x759&x760));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x762 = -64;
	static int8_t x763 = -3;
	int8_t x764 = INT8_MIN;
	int32_t t190 = 243735;

    t190 = ((x761^x762)&(x763&x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = 35024681U;
	static int8_t x766 = 3;
	uint64_t x768 = 0LLU;
	uint64_t t191 = 12540341LLU;

    t191 = ((x765^x766)&(x767&x768));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = 6U;
	volatile int8_t x770 = 0;
	uint32_t x771 = 174U;
	static int32_t x772 = -1;

    t192 = ((x769^x770)&(x771&x772));

    if (t192 != 6U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x773 = UINT16_MAX;
	int64_t x774 = INT64_MIN;
	int64_t x775 = INT64_MAX;
	volatile int64_t t193 = 1357962LL;

    t193 = ((x773^x774)&(x775&x776));

    if (t193 != 1150LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = 7516886938LLU;
	int16_t x778 = INT16_MIN;
	int32_t x779 = -2883;
	uint32_t x780 = 366U;
	uint64_t t194 = 956269LLU;

    t194 = ((x777^x778)&(x779&x780));

    if (t194 != 8LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x782 = 3085;
	int16_t x783 = -12;
	int64_t x784 = 43566216700831162LL;
	volatile int64_t t195 = -1153LL;

    t195 = ((x781^x782)&(x783&x784));

    if (t195 != 43566216700830128LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x785 = -1;
	uint16_t x786 = UINT16_MAX;
	int16_t x787 = INT16_MIN;
	int16_t x788 = INT16_MIN;
	volatile int32_t t196 = 1683;

    t196 = ((x785^x786)&(x787&x788));

    if (t196 != -65536) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x790 = INT8_MAX;
	volatile uint32_t x791 = UINT32_MAX;
	uint64_t x792 = 19130318LLU;
	uint64_t t197 = 238LLU;

    t197 = ((x789^x790)&(x791&x792));

    if (t197 != 19103822LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = 27717574LL;
	volatile int16_t x794 = 16125;
	static volatile uint16_t x795 = 2U;
	volatile int64_t t198 = 1011627369LL;

    t198 = ((x793^x794)&(x795&x796));

    if (t198 != 2LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x798 = 4U;
	static int32_t x799 = INT32_MIN;
	int64_t t199 = -21LL;

    t199 = ((x797^x798)&(x799&x800));

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


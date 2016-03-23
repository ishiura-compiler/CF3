
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

uint32_t x10 = 219U;
int8_t x13 = INT8_MIN;
int32_t x14 = INT32_MIN;
static int32_t x19 = INT32_MAX;
uint64_t x27 = UINT64_MAX;
int64_t x45 = -1LL;
int8_t x50 = INT8_MIN;
uint8_t x53 = 35U;
volatile int32_t x60 = INT32_MIN;
int32_t x66 = INT32_MAX;
volatile int64_t t13 = 138949668797735LL;
int16_t x70 = INT16_MAX;
int16_t x71 = 15;
int64_t t15 = -103659015LL;
uint16_t x84 = UINT16_MAX;
uint8_t x86 = 52U;
int64_t x97 = INT64_MAX;
int64_t x99 = INT64_MIN;
int8_t x102 = 14;
int32_t x103 = -23904;
static uint32_t x113 = 198726U;
volatile uint32_t t23 = 21U;
int64_t t24 = -136283067443550443LL;
int64_t x123 = -1LL;
int64_t x127 = INT64_MIN;
static uint64_t t27 = 3963209626290885LLU;
int64_t x134 = INT64_MAX;
volatile uint32_t x137 = 46244849U;
int16_t x147 = -1;
static volatile int16_t x148 = INT16_MIN;
uint16_t x149 = UINT16_MAX;
volatile int64_t t33 = 3265715LL;
uint64_t x157 = 142908941581845563LLU;
volatile uint64_t t35 = 56300184147LLU;
static volatile int64_t x165 = INT64_MIN;
int64_t x166 = INT64_MIN;
volatile int64_t t36 = 754293416LL;
volatile int64_t x186 = -2LL;
volatile int8_t x194 = INT8_MIN;
uint16_t x204 = UINT16_MAX;
int64_t x220 = 3LL;
static uint8_t x222 = 4U;
static volatile int16_t x229 = -3752;
static int32_t x232 = INT32_MIN;
int64_t x233 = -2458893335018699LL;
int64_t t51 = -187LL;
static uint32_t x240 = 94652042U;
uint64_t x243 = 16464118LLU;
volatile uint64_t t54 = 130LLU;
int64_t x250 = -1LL;
static int32_t x251 = INT32_MAX;
int8_t x272 = INT8_MAX;
volatile int8_t x281 = -1;
int32_t x283 = INT32_MAX;
int32_t x284 = INT32_MIN;
volatile uint64_t t64 = 1247692747LLU;
uint64_t x295 = 5141532755052459462LLU;
volatile int32_t x296 = INT32_MIN;
int32_t x297 = -1;
volatile int16_t x300 = 3;
volatile int8_t x305 = INT8_MAX;
volatile uint16_t x308 = 28581U;
static int16_t x312 = -447;
int64_t t70 = 851253399994LL;
volatile int32_t x326 = INT32_MIN;
volatile int32_t x329 = 213933;
int32_t t74 = -898960;
int32_t x333 = 128887881;
int8_t x334 = -1;
int64_t x341 = -1296625331232702LL;
uint64_t x342 = 25618580254LLU;
uint64_t x347 = 53337LLU;
uint32_t x354 = 7815U;
uint64_t t81 = 226086LLU;
int8_t x361 = -1;
int8_t x363 = INT8_MAX;
volatile uint32_t t82 = 14U;
int8_t x370 = INT8_MIN;
int32_t t84 = -423866649;
volatile int32_t t86 = -7740;
int16_t x393 = INT16_MIN;
int8_t x402 = INT8_MIN;
uint64_t x409 = 2968LLU;
volatile uint64_t t90 = 6436484LLU;
int16_t x427 = INT16_MIN;
int64_t t94 = -705268986014295656LL;
uint32_t x448 = 2644U;
uint64_t t99 = 14447934307LLU;
int8_t x459 = 25;
int32_t x460 = INT32_MAX;
volatile uint8_t x464 = 1U;
int32_t x467 = INT32_MIN;
static volatile int64_t t108 = -3797282047LL;
volatile int64_t t110 = -111644204139459LL;
static int8_t x501 = -1;
uint16_t x502 = UINT16_MAX;
uint8_t x505 = 0U;
uint16_t x507 = 33U;
uint32_t x513 = 693906U;
static uint8_t x515 = 0U;
static volatile int64_t t115 = -937546675LL;
int8_t x522 = -4;
uint64_t x532 = 6310406LLU;
uint32_t x543 = 10U;
uint64_t x553 = UINT64_MAX;
int64_t x554 = INT64_MIN;
uint16_t x556 = UINT16_MAX;
uint8_t x561 = UINT8_MAX;
int8_t x563 = -1;
uint64_t x564 = UINT64_MAX;
int32_t x565 = 15;
volatile uint32_t x575 = UINT32_MAX;
int8_t x576 = INT8_MIN;
static int64_t x584 = INT64_MAX;
volatile int64_t t133 = INT64_MIN;
volatile int32_t t135 = 498441951;
uint32_t x607 = UINT32_MAX;
int16_t x610 = INT16_MIN;
int32_t x612 = -1;
int8_t x615 = INT8_MIN;
int32_t t139 = -348978;
static int32_t x621 = INT32_MAX;
int32_t x633 = 1734;
uint32_t x634 = 16937U;
uint16_t x642 = UINT16_MAX;
uint64_t x648 = 59LLU;
int32_t x650 = -1;
int64_t x652 = INT64_MAX;
uint8_t x653 = UINT8_MAX;
int32_t x656 = INT32_MAX;
int16_t x657 = INT16_MIN;
int32_t x659 = INT32_MIN;
static int64_t t148 = 6056418668521LL;
int64_t x663 = 0LL;
volatile int64_t t149 = -1098809291481LL;
static uint8_t x666 = UINT8_MAX;
static uint32_t x669 = UINT32_MAX;
int8_t x671 = 4;
uint32_t t151 = 1002U;
int16_t x675 = INT16_MIN;
uint32_t t152 = 2760U;
uint64_t t155 = 66781395LLU;
uint32_t x689 = 5220117U;
int32_t x691 = -1;
static volatile int32_t x693 = -1;
int64_t x697 = 4373697639157LL;
uint32_t x700 = UINT32_MAX;
uint64_t x702 = UINT64_MAX;
volatile uint64_t t159 = 1LLU;
static int32_t x713 = -207624351;
int64_t x715 = -25LL;
int32_t x716 = 83614;
int32_t x719 = INT32_MAX;
int8_t x721 = INT8_MAX;
int32_t x725 = INT32_MIN;
volatile uint64_t t163 = 107831189422583LLU;
uint64_t x730 = UINT64_MAX;
int8_t x735 = INT8_MAX;
int8_t x736 = INT8_MIN;
int64_t x755 = 15246179018127762LL;
uint64_t t169 = 572322214387288192LLU;
static int8_t x757 = INT8_MIN;
static int64_t x760 = INT64_MAX;
static int32_t x764 = INT32_MIN;
uint32_t t171 = 2269U;
static int64_t x765 = -20625211LL;
int32_t x776 = INT32_MAX;
static int64_t x777 = INT64_MIN;
int64_t x778 = -4234312282LL;
uint8_t x779 = 34U;
int64_t x782 = 450859650LL;
volatile uint32_t x785 = 16989813U;
uint16_t x788 = 1139U;
uint32_t t177 = 1U;
static int64_t x789 = -1LL;
int8_t x790 = -1;
volatile int16_t x795 = -4098;
volatile int32_t t180 = -1656;
int32_t t183 = -51825986;
int64_t t184 = -880832097LL;
int8_t x817 = INT8_MIN;
static int8_t x818 = INT8_MAX;
int64_t x820 = 1LL;
int64_t x832 = -155013LL;
static int8_t x840 = -1;
uint64_t x843 = 122LLU;
volatile uint64_t t190 = 52683830746LLU;
volatile uint64_t x882 = UINT64_MAX;
int64_t x885 = -10326240079318LL;
int64_t t196 = 116011651225558LL;
int64_t x896 = INT64_MIN;
static int32_t x900 = -1;
int64_t x902 = INT64_MIN;


void f0(void) {
    	static int8_t x1 = INT8_MIN;
	uint64_t x2 = UINT64_MAX;
	int32_t x3 = INT32_MIN;
	int8_t x4 = -24;
	static volatile uint64_t t0 = 33382340053LLU;

    t0 = ((x1^x2)-(x3^x4));

    if (t0 != 18446744071562068119LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = -3630;
	int16_t x11 = -1;
	static int32_t x12 = -1;
	uint32_t t1 = 4406U;

    t1 = ((x9^x10)-(x11^x12));

    if (t1 != 4294963465U) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x15 = INT64_MAX;
	static int64_t x16 = 6575040804776935LL;
	volatile int64_t t2 = 1215821775695LL;

    t2 = ((x13^x14)-(x15^x16));

    if (t2 != -9216796993902515352LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = 21LLU;
	volatile uint64_t x18 = 8973581909043591LLU;
	int32_t x20 = 428667843;
	volatile uint64_t t3 = 135386730119118269LLU;

    t3 = ((x17^x18)-(x19^x20));

    if (t3 != 8973580190227798LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = -16218;
	uint64_t x22 = 538671174LLU;
	int32_t x23 = INT32_MAX;
	static int32_t x24 = 406672;
	uint64_t t4 = 4670403850914749LLU;

    t4 = ((x21^x22)-(x23^x24));

    if (t4 != 18446744071023816049LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = 72;
	static int32_t x26 = 164;
	volatile int16_t x28 = -6;
	uint64_t t5 = 224LLU;

    t5 = ((x25^x26)-(x27^x28));

    if (t5 != 231LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint64_t x29 = 1786277LLU;
	volatile int16_t x30 = INT16_MIN;
	int32_t x31 = 66270533;
	uint8_t x32 = 0U;
	uint64_t t6 = 1142148LLU;

    t6 = ((x29^x30)-(x31^x32));

    if (t6 != 18446744073641495648LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x33 = -11LL;
	static int8_t x34 = INT8_MIN;
	uint8_t x35 = UINT8_MAX;
	volatile uint8_t x36 = UINT8_MAX;
	int64_t t7 = 88818536LL;

    t7 = ((x33^x34)-(x35^x36));

    if (t7 != 117LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x46 = -2752;
	uint16_t x47 = UINT16_MAX;
	volatile uint64_t x48 = UINT64_MAX;
	static volatile uint64_t t8 = 1090838LLU;

    t8 = ((x45^x46)-(x47^x48));

    if (t8 != 68287LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x49 = INT16_MIN;
	int16_t x51 = -1;
	int8_t x52 = INT8_MAX;
	int32_t t9 = 8230920;

    t9 = ((x49^x50)-(x51^x52));

    if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x54 = INT8_MIN;
	int16_t x55 = 0;
	static int64_t x56 = -1LL;
	volatile int64_t t10 = -15455816683LL;

    t10 = ((x53^x54)-(x55^x56));

    if (t10 != -92LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = -344;
	uint32_t x58 = UINT32_MAX;
	uint8_t x59 = 1U;
	uint32_t t11 = 11U;

    t11 = ((x57^x58)-(x59^x60));

    if (t11 != 2147483990U) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x61 = UINT64_MAX;
	int64_t x62 = -1LL;
	int16_t x63 = -2;
	int16_t x64 = INT16_MIN;
	volatile uint64_t t12 = 127487258456LLU;

    t12 = ((x61^x62)-(x63^x64));

    if (t12 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x65 = INT64_MIN;
	int8_t x67 = INT8_MAX;
	uint8_t x68 = UINT8_MAX;

    t13 = ((x65^x66)-(x67^x68));

    if (t13 != -9223372034707292289LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x69 = 15225014494131LLU;
	volatile uint8_t x72 = UINT8_MAX;
	uint64_t t14 = 821060758LLU;

    t14 = ((x69^x70)-(x71^x72));

    if (t14 != 15225014508380LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x73 = INT64_MIN;
	static uint16_t x74 = 0U;
	int64_t x75 = -1LL;
	uint32_t x76 = 1825217U;

    t15 = ((x73^x74)-(x75^x76));

    if (t15 != -9223372036852950590LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x77 = 1482953LLU;
	int64_t x78 = -1LL;
	int64_t x79 = -1LL;
	int32_t x80 = INT32_MIN;
	volatile uint64_t t16 = 1180340172471LLU;

    t16 = ((x77^x78)-(x79^x80));

    if (t16 != 18446744071560585015LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x81 = 91945566866LLU;
	static uint64_t x82 = 33681362926260LLU;
	int8_t x83 = INT8_MIN;
	static uint64_t t17 = 1434601LLU;

    t17 = ((x81^x82)-(x83^x84));

    if (t17 != 33773035927463LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x85 = INT32_MAX;
	int32_t x87 = -66830230;
	uint32_t x88 = 788U;
	uint32_t t18 = 124450U;

    t18 = ((x85^x86)-(x87^x88));

    if (t18 != 2214313037U) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x89 = UINT32_MAX;
	int8_t x90 = -1;
	int8_t x91 = -1;
	int16_t x92 = INT16_MIN;
	volatile uint32_t t19 = 5952195U;

    t19 = ((x89^x90)-(x91^x92));

    if (t19 != 4294934529U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x93 = UINT64_MAX;
	int16_t x94 = -1;
	int8_t x95 = INT8_MIN;
	static volatile uint64_t x96 = 16834LLU;
	volatile uint64_t t20 = 33LLU;

    t20 = ((x93^x94)-(x95^x96));

    if (t20 != 16830LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x98 = -33;
	int64_t x100 = INT64_MIN;
	volatile int64_t t21 = 4531651385866163LL;

    t21 = ((x97^x98)-(x99^x100));

    if (t21 != -9223372036854775776LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x101 = INT64_MIN;
	int16_t x104 = 1893;
	int64_t t22 = -40LL;

    t22 = ((x101^x102)-(x103^x104));

    if (t22 != -9223372036854752695LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x114 = -3930;
	static uint8_t x115 = 1U;
	static uint16_t x116 = UINT16_MAX;

    t23 = ((x113^x114)-(x115^x116));

    if (t23 != 4294703330U) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x117 = -26;
	int64_t x118 = -1LL;
	int16_t x119 = -1;
	int16_t x120 = INT16_MIN;

    t24 = ((x117^x118)-(x119^x120));

    if (t24 != -32742LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x121 = -1;
	int32_t x122 = INT32_MIN;
	int64_t x124 = -1LL;
	volatile int64_t t25 = -27998187050LL;

    t25 = ((x121^x122)-(x123^x124));

    if (t25 != 2147483647LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x125 = 72702U;
	int8_t x126 = 1;
	static int8_t x128 = -47;
	static volatile int64_t t26 = 172LL;

    t26 = ((x125^x126)-(x127^x128));

    if (t26 != -9223372036854703058LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x129 = INT64_MIN;
	int32_t x130 = INT32_MAX;
	uint64_t x131 = 2956LLU;
	uint8_t x132 = UINT8_MAX;

    t27 = ((x129^x130)-(x131^x132));

    if (t27 != 9223372039002256524LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x133 = INT8_MAX;
	int8_t x135 = INT8_MIN;
	static int16_t x136 = -1;
	int64_t t28 = 37527LL;

    t28 = ((x133^x134)-(x135^x136));

    if (t28 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x138 = -1LL;
	uint32_t x139 = 812993U;
	uint8_t x140 = 3U;
	int64_t t29 = -7907395343LL;

    t29 = ((x137^x138)-(x139^x140));

    if (t29 != -47057844LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x141 = UINT8_MAX;
	uint64_t x142 = UINT64_MAX;
	uint8_t x143 = 0U;
	static int64_t x144 = -1LL;
	uint64_t t30 = 4095549671303119733LLU;

    t30 = ((x141^x142)-(x143^x144));

    if (t30 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x145 = UINT16_MAX;
	int16_t x146 = INT16_MAX;
	int32_t t31 = 1084;

    t31 = ((x145^x146)-(x147^x148));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x150 = UINT32_MAX;
	static int32_t x151 = -1;
	static uint32_t x152 = 51452U;
	volatile uint32_t t32 = 518U;

    t32 = ((x149^x150)-(x151^x152));

    if (t32 != 4294953213U) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int64_t x153 = INT64_MIN;
	uint32_t x154 = UINT32_MAX;
	static uint16_t x155 = 3U;
	volatile int32_t x156 = INT32_MIN;

    t33 = ((x153^x154)-(x155^x156));

    if (t33 != -9223372030412324868LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x158 = -1;
	int64_t x159 = INT64_MAX;
	static uint8_t x160 = 13U;
	uint64_t t34 = 95LLU;

    t34 = ((x157^x158)-(x159^x160));

    if (t34 != 9080463095272930258LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x161 = -1;
	uint8_t x162 = UINT8_MAX;
	uint64_t x163 = 17292975418790LLU;
	int8_t x164 = INT8_MIN;

    t35 = ((x161^x162)-(x163^x164));

    if (t35 != 17292975418586LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x167 = INT8_MAX;
	volatile int32_t x168 = INT32_MAX;

    t36 = ((x165^x166)-(x167^x168));

    if (t36 != -2147483520LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x169 = UINT32_MAX;
	int32_t x170 = -1;
	uint32_t x171 = UINT32_MAX;
	static int32_t x172 = -284;
	uint32_t t37 = 422028931U;

    t37 = ((x169^x170)-(x171^x172));

    if (t37 != 4294967013U) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x173 = 24242LLU;
	int8_t x174 = INT8_MAX;
	uint8_t x175 = UINT8_MAX;
	int64_t x176 = 1640768313649365LL;
	static volatile uint64_t t38 = 1984845494474698565LLU;

    t38 = ((x173^x174)-(x175^x176));

    if (t38 != 18445103305395926691LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x177 = INT32_MIN;
	volatile int16_t x178 = INT16_MIN;
	int32_t x179 = -1;
	int8_t x180 = INT8_MAX;
	int32_t t39 = -74986126;

    t39 = ((x177^x178)-(x179^x180));

    if (t39 != 2147451008) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x181 = -1;
	int32_t x182 = INT32_MAX;
	static int64_t x183 = INT64_MIN;
	static int16_t x184 = INT16_MAX;
	int64_t t40 = -3162988782LL;

    t40 = ((x181^x182)-(x183^x184));

    if (t40 != 9223372034707259393LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x185 = INT16_MAX;
	volatile uint16_t x187 = 2U;
	int8_t x188 = INT8_MIN;
	int64_t t41 = 68207957568297LL;

    t41 = ((x185^x186)-(x187^x188));

    if (t41 != -32641LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x189 = INT64_MIN;
	int16_t x190 = 0;
	volatile uint64_t x191 = 1905LLU;
	uint16_t x192 = 203U;
	uint64_t t42 = 5528619740265664305LLU;

    t42 = ((x189^x190)-(x191^x192));

    if (t42 != 9223372036854773830LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x193 = 4586936;
	uint16_t x195 = 348U;
	uint8_t x196 = UINT8_MAX;
	volatile int32_t t43 = 19;

    t43 = ((x193^x194)-(x195^x196));

    if (t43 != -4587371) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x197 = INT8_MAX;
	int16_t x198 = -1;
	int32_t x199 = -300387143;
	uint8_t x200 = UINT8_MAX;
	volatile int32_t t44 = 49121;

    t44 = ((x197^x198)-(x199^x200));

    if (t44 != 300387130) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x201 = 21403U;
	static int64_t x202 = -1112625187578LL;
	volatile int16_t x203 = INT16_MAX;
	int64_t t45 = -9799079580LL;

    t45 = ((x201^x202)-(x203^x204));

    if (t45 != -1112625240419LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x205 = 13U;
	int64_t x206 = 2684389574036252LL;
	uint16_t x207 = 6U;
	static volatile int32_t x208 = -351042823;
	int64_t t46 = 57592002827381364LL;

    t46 = ((x205^x206)-(x207^x208));

    if (t46 != 2684389925079058LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x209 = INT8_MIN;
	int16_t x210 = -11;
	int8_t x211 = -1;
	volatile int64_t x212 = INT64_MIN;
	volatile int64_t t47 = -137480695484260095LL;

    t47 = ((x209^x210)-(x211^x212));

    if (t47 != -9223372036854775690LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x217 = 7013;
	static int16_t x218 = -589;
	static uint64_t x219 = UINT64_MAX;
	volatile uint64_t t48 = 104115243LLU;

    t48 = ((x217^x218)-(x219^x220));

    if (t48 != 18446744073709545178LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x221 = -1LL;
	volatile int8_t x223 = INT8_MIN;
	int16_t x224 = INT16_MAX;
	volatile int64_t t49 = -1692143729723416LL;

    t49 = ((x221^x222)-(x223^x224));

    if (t49 != 32636LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x230 = -1;
	volatile int16_t x231 = INT16_MIN;
	volatile int32_t t50 = 37;

    t50 = ((x229^x230)-(x231^x232));

    if (t50 != -2147447129) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x234 = -5738;
	static uint8_t x235 = 0U;
	uint8_t x236 = UINT8_MAX;

    t51 = ((x233^x234)-(x235^x236));

    if (t51 != 2458893335013796LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x237 = 30847U;
	volatile int16_t x238 = 30;
	uint32_t x239 = 234U;
	uint32_t t52 = 8017U;

    t52 = ((x237^x238)-(x239^x240));

    if (t52 != 4200346113U) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int64_t x241 = -1LL;
	volatile int32_t x242 = -502;
	static volatile int8_t x244 = 0;
	static volatile uint64_t t53 = 121085839857876LLU;

    t53 = ((x241^x242)-(x243^x244));

    if (t53 != 18446744073693087999LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x245 = UINT64_MAX;
	uint8_t x246 = UINT8_MAX;
	int32_t x247 = 1;
	int8_t x248 = -29;

    t54 = ((x245^x246)-(x247^x248));

    if (t54 != 18446744073709551390LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x249 = UINT8_MAX;
	static int16_t x252 = 5391;
	int64_t t55 = 403997568788165LL;

    t55 = ((x249^x250)-(x251^x252));

    if (t55 != -2147478512LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x253 = INT32_MIN;
	uint64_t x254 = UINT64_MAX;
	int16_t x255 = INT16_MAX;
	uint16_t x256 = 74U;
	uint64_t t56 = 7712412735781838666LLU;

    t56 = ((x253^x254)-(x255^x256));

    if (t56 != 2147450954LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x257 = 311876392LLU;
	int64_t x258 = INT64_MIN;
	static volatile uint32_t x259 = 769045U;
	uint64_t x260 = 1716231051720LLU;
	uint64_t t57 = 4873LLU;

    t57 = ((x257^x258)-(x259^x260));

    if (t57 != 9223370320935302475LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x261 = INT8_MIN;
	static volatile int64_t x262 = -31382190LL;
	int8_t x263 = -14;
	int8_t x264 = -1;
	static volatile int64_t t58 = 967903LL;

    t58 = ((x261^x262)-(x263^x264));

    if (t58 != 31382213LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x265 = 5U;
	static int32_t x266 = 27;
	uint16_t x267 = 5015U;
	uint32_t x268 = 133517581U;
	uint32_t t59 = 4749U;

    t59 = ((x265^x266)-(x267^x268));

    if (t59 != 4161453444U) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x269 = -4014;
	int8_t x270 = INT8_MIN;
	uint32_t x271 = 15090U;
	volatile uint32_t t60 = 846U;

    t60 = ((x269^x270)-(x271^x272));

    if (t60 != 4294956357U) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x277 = INT64_MIN;
	volatile int64_t x278 = 1066059LL;
	volatile int64_t x279 = 129854509LL;
	int8_t x280 = -18;
	volatile int64_t t61 = -313693624643132839LL;

    t61 = ((x277^x278)-(x279^x280));

    if (t61 != -9223372036723855224LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x282 = -1;
	volatile int32_t t62 = -1;

    t62 = ((x281^x282)-(x283^x284));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x285 = -1;
	static int32_t x286 = INT32_MIN;
	uint64_t x287 = 42457836511525323LLU;
	int64_t x288 = INT64_MAX;
	uint64_t t63 = 39LLU;

    t63 = ((x285^x286)-(x287^x288));

    if (t63 != 9265829875513784779LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x289 = INT64_MIN;
	int16_t x290 = 242;
	uint64_t x291 = UINT64_MAX;
	static int32_t x292 = INT32_MAX;

    t64 = ((x289^x290)-(x291^x292));

    if (t64 != 9223372039002259698LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x293 = -1;
	uint64_t x294 = UINT64_MAX;
	uint64_t t65 = 27536799791LLU;

    t65 = ((x293^x294)-(x295^x296));

    if (t65 != 5141532755255888442LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x298 = INT64_MIN;
	int32_t x299 = 1000717;
	static volatile int64_t t66 = -2365536204LL;

    t66 = ((x297^x298)-(x299^x300));

    if (t66 != 9223372036853775089LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x301 = -1;
	uint32_t x302 = 19811928U;
	int32_t x303 = INT32_MAX;
	volatile uint32_t x304 = UINT32_MAX;
	volatile uint32_t t67 = 0U;

    t67 = ((x301^x302)-(x303^x304));

    if (t67 != 2127671719U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x306 = 6U;
	volatile uint64_t x307 = UINT64_MAX;
	static volatile uint64_t t68 = 11455855925883LLU;

    t68 = ((x305^x306)-(x307^x308));

    if (t68 != 28703LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x309 = -545807848612073LL;
	volatile int32_t x310 = 200411;
	volatile uint32_t x311 = 126U;
	int64_t t69 = 17453178859255901LL;

    t69 = ((x309^x310)-(x311^x312));

    if (t69 != -545812143516787LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x313 = INT64_MAX;
	int64_t x314 = -62484LL;
	int8_t x315 = -1;
	int32_t x316 = INT32_MAX;

    t70 = ((x313^x314)-(x315^x316));

    if (t70 != -9223372034707229677LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x317 = INT16_MIN;
	int64_t x318 = -1LL;
	int32_t x319 = INT32_MIN;
	static uint64_t x320 = 79846LLU;
	uint64_t t71 = 585475685805LLU;

    t71 = ((x317^x318)-(x319^x320));

    if (t71 != 2147436569LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x321 = INT64_MAX;
	int32_t x322 = INT32_MIN;
	uint8_t x323 = 31U;
	uint64_t x324 = 4145650611653906076LLU;
	static volatile uint64_t t72 = 1692738847368140LLU;

    t72 = ((x321^x322)-(x323^x324));

    if (t72 != 5077721427348353404LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x325 = INT8_MAX;
	uint8_t x327 = 29U;
	int8_t x328 = 0;
	int32_t t73 = 0;

    t73 = ((x325^x326)-(x327^x328));

    if (t73 != -2147483550) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x330 = -1;
	volatile int8_t x331 = -12;
	uint16_t x332 = 10884U;

    t74 = ((x329^x330)-(x331^x332));

    if (t74 != -203038) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x335 = INT32_MIN;
	static volatile int32_t x336 = INT32_MIN;
	static int32_t t75 = -112;

    t75 = ((x333^x334)-(x335^x336));

    if (t75 != -128887882) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x337 = 69U;
	static int16_t x338 = INT16_MIN;
	int64_t x339 = INT64_MIN;
	static uint32_t x340 = 4U;
	int64_t t76 = -34673798714LL;

    t76 = ((x337^x338)-(x339^x340));

    if (t76 != 9223372036854743105LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x343 = -1LL;
	volatile uint16_t x344 = UINT16_MAX;
	volatile uint64_t t77 = 6LLU;

    t77 = ((x341^x342)-(x343^x344));

    if (t77 != 18445447457799545692LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x345 = 734191727060066742LLU;
	int32_t x346 = INT32_MAX;
	static int8_t x348 = INT8_MIN;
	uint64_t t78 = 3568LLU;

    t78 = ((x345^x346)-(x347^x348));

    if (t78 != 734191725971418736LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x349 = UINT8_MAX;
	int64_t x350 = -221960LL;
	uint32_t x351 = 1201201409U;
	int32_t x352 = INT32_MIN;
	static volatile int64_t t79 = 6LL;

    t79 = ((x349^x350)-(x351^x352));

    if (t79 != -3348907258LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x353 = -1;
	int32_t x355 = -1;
	static int32_t x356 = INT32_MAX;
	volatile uint32_t t80 = 1513U;

    t80 = ((x353^x354)-(x355^x356));

    if (t80 != 2147475832U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x357 = 498LLU;
	uint16_t x358 = UINT16_MAX;
	static int8_t x359 = INT8_MIN;
	uint16_t x360 = 6U;

    t81 = ((x357^x358)-(x359^x360));

    if (t81 != 65159LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x362 = 5U;
	uint32_t x364 = 36U;

    t82 = ((x361^x362)-(x363^x364));

    if (t82 != 4294967199U) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x369 = INT32_MAX;
	int32_t x371 = -1;
	static int32_t x372 = 2;
	int32_t t83 = 353914;

    t83 = ((x369^x370)-(x371^x372));

    if (t83 != -2147483518) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x373 = INT32_MIN;
	uint16_t x374 = 17U;
	int8_t x375 = 1;
	int8_t x376 = -1;

    t84 = ((x373^x374)-(x375^x376));

    if (t84 != -2147483629) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x381 = -1193;
	int16_t x382 = -1;
	volatile int8_t x383 = 35;
	int16_t x384 = INT16_MIN;
	int32_t t85 = 62603;

    t85 = ((x381^x382)-(x383^x384));

    if (t85 != 33925) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x389 = 5U;
	int32_t x390 = INT32_MAX;
	int8_t x391 = -1;
	static int32_t x392 = -112;

    t86 = ((x389^x390)-(x391^x392));

    if (t86 != 2147483531) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x394 = 1;
	int16_t x395 = 7552;
	int64_t x396 = INT64_MIN;
	volatile int64_t t87 = 7443LL;

    t87 = ((x393^x394)-(x395^x396));

    if (t87 != 9223372036854735489LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x397 = 123281899;
	uint64_t x398 = UINT64_MAX;
	static volatile int16_t x399 = INT16_MAX;
	volatile int8_t x400 = 7;
	uint64_t t88 = 479075761583LLU;

    t88 = ((x397^x398)-(x399^x400));

    if (t88 != 18446744073586236956LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x401 = INT8_MIN;
	volatile int32_t x403 = INT32_MAX;
	int32_t x404 = INT32_MAX;
	int32_t t89 = 105707630;

    t89 = ((x401^x402)-(x403^x404));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x410 = UINT64_MAX;
	int16_t x411 = -6;
	volatile int32_t x412 = INT32_MIN;

    t90 = ((x409^x410)-(x411^x412));

    if (t90 != 18446744071562065005LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x413 = INT64_MAX;
	int32_t x414 = -82;
	uint8_t x415 = 12U;
	int16_t x416 = -1;
	volatile int64_t t91 = -10780LL;

    t91 = ((x413^x414)-(x415^x416));

    if (t91 != -9223372036854775714LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x417 = -1;
	int32_t x418 = INT32_MAX;
	uint8_t x419 = UINT8_MAX;
	int16_t x420 = INT16_MIN;
	static volatile int32_t t92 = -1;

    t92 = ((x417^x418)-(x419^x420));

    if (t92 != -2147451135) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x421 = -1;
	uint64_t x422 = UINT64_MAX;
	int8_t x423 = INT8_MIN;
	uint16_t x424 = 226U;
	volatile uint64_t t93 = 9794218260783721LLU;

    t93 = ((x421^x422)-(x423^x424));

    if (t93 != 158LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x425 = -13;
	int64_t x426 = 33LL;
	int16_t x428 = INT16_MAX;

    t94 = ((x425^x426)-(x427^x428));

    if (t94 != -45LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x429 = 470;
	uint16_t x430 = UINT16_MAX;
	static int16_t x431 = -1;
	uint64_t x432 = 83024LLU;
	volatile uint64_t t95 = 5238439687LLU;

    t95 = ((x429^x430)-(x431^x432));

    if (t95 != 148090LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x433 = INT16_MIN;
	int16_t x434 = INT16_MIN;
	static volatile uint32_t x435 = 568326817U;
	int64_t x436 = -6674352057038LL;
	static int64_t t96 = -84260100697LL;

    t96 = ((x433^x434)-(x435^x436));

    if (t96 != 6673837969517LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x437 = INT8_MAX;
	static uint64_t x438 = 199LLU;
	int8_t x439 = 38;
	volatile uint16_t x440 = 0U;
	uint64_t t97 = 2169519565LLU;

    t97 = ((x437^x438)-(x439^x440));

    if (t97 != 146LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x441 = UINT32_MAX;
	int8_t x442 = INT8_MIN;
	static uint16_t x443 = 8181U;
	int32_t x444 = INT32_MIN;
	static volatile uint32_t t98 = 491U;

    t98 = ((x441^x442)-(x443^x444));

    if (t98 != 2147475594U) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x445 = INT32_MIN;
	uint64_t x446 = 0LLU;
	uint8_t x447 = 1U;

    t99 = ((x445^x446)-(x447^x448));

    if (t99 != 18446744071562065323LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x453 = -4051;
	int64_t x454 = -1LL;
	volatile int32_t x455 = 6;
	static int16_t x456 = 2;
	static volatile int64_t t100 = -833713LL;

    t100 = ((x453^x454)-(x455^x456));

    if (t100 != 4046LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x457 = UINT64_MAX;
	int64_t x458 = INT64_MIN;
	static volatile uint64_t t101 = 379219112940LLU;

    t101 = ((x457^x458)-(x459^x460));

    if (t101 != 9223372034707292185LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x461 = UINT8_MAX;
	uint32_t x462 = 1U;
	volatile int8_t x463 = 1;
	uint32_t t102 = 2089669324U;

    t102 = ((x461^x462)-(x463^x464));

    if (t102 != 254U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x465 = 54;
	volatile int8_t x466 = 3;
	uint32_t x468 = 254U;
	volatile uint32_t t103 = 222130029U;

    t103 = ((x465^x466)-(x467^x468));

    if (t103 != 2147483447U) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x469 = 255LL;
	uint32_t x470 = UINT32_MAX;
	int64_t x471 = INT64_MIN;
	uint64_t x472 = UINT64_MAX;
	volatile uint64_t t104 = 82935393113272LLU;

    t104 = ((x469^x470)-(x471^x472));

    if (t104 != 9223372041149742849LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x473 = 19U;
	static int8_t x474 = 2;
	static uint8_t x475 = UINT8_MAX;
	int32_t x476 = -1;
	volatile int32_t t105 = 421898991;

    t105 = ((x473^x474)-(x475^x476));

    if (t105 != 273) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x477 = INT64_MIN;
	uint8_t x478 = UINT8_MAX;
	static int64_t x479 = -1LL;
	static uint8_t x480 = 3U;
	static int64_t t106 = 54618LL;

    t106 = ((x477^x478)-(x479^x480));

    if (t106 != -9223372036854775549LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x481 = UINT16_MAX;
	int16_t x482 = 1;
	static volatile uint8_t x483 = 93U;
	static volatile uint32_t x484 = 0U;
	uint32_t t107 = 1U;

    t107 = ((x481^x482)-(x483^x484));

    if (t107 != 65441U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x485 = 115478;
	static volatile int64_t x486 = 263763216139157715LL;
	int64_t x487 = 4012LL;
	int64_t x488 = -1LL;

    t108 = ((x485^x486)-(x487^x488));

    if (t108 != 263763216139277170LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x489 = INT64_MIN;
	static int16_t x490 = INT16_MAX;
	uint64_t x491 = 7054LLU;
	int32_t x492 = INT32_MIN;
	uint64_t t109 = 252483867LLU;

    t109 = ((x489^x490)-(x491^x492));

    if (t109 != 9223372039002285169LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x493 = 0LL;
	uint32_t x494 = UINT32_MAX;
	static uint16_t x495 = 2U;
	volatile int64_t x496 = INT64_MAX;

    t110 = ((x493^x494)-(x495^x496));

    if (t110 != -9223372032559808510LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x497 = 29;
	volatile int8_t x498 = INT8_MAX;
	int64_t x499 = 7169607573335LL;
	int8_t x500 = INT8_MAX;
	int64_t t111 = 1206534578LL;

    t111 = ((x497^x498)-(x499^x500));

    if (t111 != -7169607573190LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x503 = INT32_MIN;
	int8_t x504 = INT8_MAX;
	volatile int32_t t112 = 4532;

    t112 = ((x501^x502)-(x503^x504));

    if (t112 != 2147417985) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x506 = -1;
	volatile int8_t x508 = 48;
	volatile int32_t t113 = -25660;

    t113 = ((x505^x506)-(x507^x508));

    if (t113 != -18) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x509 = -6;
	static uint8_t x510 = 100U;
	int8_t x511 = INT8_MAX;
	int32_t x512 = 523904322;
	volatile int32_t t114 = -127995;

    t114 = ((x509^x510)-(x511^x512));

    if (t114 != -523904415) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x514 = INT64_MIN;
	static int16_t x516 = INT16_MIN;

    t115 = ((x513^x514)-(x515^x516));

    if (t115 != -9223372036854049134LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x517 = 5849U;
	static uint8_t x518 = 14U;
	static uint64_t x519 = UINT64_MAX;
	static int64_t x520 = 27305138623639076LL;
	volatile uint64_t t116 = 8650582525337290279LLU;

    t116 = ((x517^x518)-(x519^x520));

    if (t116 != 27305138623644924LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x521 = 852107301U;
	int8_t x523 = 14;
	volatile int8_t x524 = INT8_MAX;
	uint32_t t117 = 447323U;

    t117 = ((x521^x522)-(x523^x524));

    if (t117 != 3442859880U) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x525 = -4874;
	int32_t x526 = INT32_MIN;
	uint16_t x527 = 245U;
	int16_t x528 = 87;
	volatile int32_t t118 = -3;

    t118 = ((x525^x526)-(x527^x528));

    if (t118 != 2147478612) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x529 = -5;
	static int64_t x530 = -733436748LL;
	int16_t x531 = INT16_MAX;
	volatile uint64_t t119 = 541122LLU;

    t119 = ((x529^x530)-(x531^x532));

    if (t119 != 727131478LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x533 = 28;
	static int8_t x534 = INT8_MAX;
	int8_t x535 = INT8_MAX;
	uint16_t x536 = 3U;
	volatile int32_t t120 = 5663;

    t120 = ((x533^x534)-(x535^x536));

    if (t120 != -25) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x541 = UINT32_MAX;
	int16_t x542 = -1;
	int16_t x544 = 15535;
	uint32_t t121 = 6U;

    t121 = ((x541^x542)-(x543^x544));

    if (t121 != 4294951771U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x545 = -1;
	volatile int32_t x546 = -1;
	static volatile uint32_t x547 = UINT32_MAX;
	uint16_t x548 = 36U;
	volatile uint32_t t122 = 501084U;

    t122 = ((x545^x546)-(x547^x548));

    if (t122 != 37U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x549 = -1;
	static uint16_t x550 = 413U;
	int32_t x551 = INT32_MAX;
	volatile int32_t x552 = -12481;
	int32_t t123 = -833039;

    t123 = ((x549^x550)-(x551^x552));

    if (t123 != 2147470754) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x555 = -1LL;
	uint64_t t124 = 51944399938LLU;

    t124 = ((x553^x554)-(x555^x556));

    if (t124 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x557 = 106431513U;
	static int16_t x558 = 56;
	uint8_t x559 = 63U;
	int16_t x560 = 95;
	volatile uint32_t t125 = 162407902U;

    t125 = ((x557^x558)-(x559^x560));

    if (t125 != 106431425U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x562 = -1;
	static volatile uint64_t t126 = 4825976LLU;

    t126 = ((x561^x562)-(x563^x564));

    if (t126 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x566 = 87981LLU;
	int8_t x567 = -1;
	uint32_t x568 = UINT32_MAX;
	volatile uint64_t t127 = 1830579LLU;

    t127 = ((x565^x566)-(x567^x568));

    if (t127 != 87970LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x569 = INT32_MIN;
	uint64_t x570 = 2025LLU;
	int8_t x571 = 1;
	int8_t x572 = 23;
	static volatile uint64_t t128 = 172947790341LLU;

    t128 = ((x569^x570)-(x571^x572));

    if (t128 != 18446744071562069971LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x573 = 1215419243U;
	int64_t x574 = INT64_MIN;
	volatile int64_t t129 = 11652693044698847LL;

    t129 = ((x573^x574)-(x575^x576));

    if (t129 != -9223372035639356692LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x577 = 8128U;
	static uint16_t x578 = 0U;
	int32_t x579 = INT32_MIN;
	int16_t x580 = INT16_MIN;
	int32_t t130 = -433;

    t130 = ((x577^x578)-(x579^x580));

    if (t130 != -2147442752) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x581 = INT32_MIN;
	volatile int32_t x582 = INT32_MAX;
	uint16_t x583 = 800U;
	volatile int64_t t131 = -14576593LL;

    t131 = ((x581^x582)-(x583^x584));

    if (t131 != -9223372036854775008LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x585 = INT32_MIN;
	static int16_t x586 = -10989;
	int8_t x587 = INT8_MIN;
	int8_t x588 = -1;
	volatile int32_t t132 = -554575;

    t132 = ((x585^x586)-(x587^x588));

    if (t132 != 2147472532) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x589 = INT16_MAX;
	int16_t x590 = -1;
	int64_t x591 = INT64_MIN;
	int16_t x592 = INT16_MIN;

    t133 = ((x589^x590)-(x591^x592));

    if (t133 != INT64_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x593 = INT8_MIN;
	volatile int8_t x594 = -1;
	int8_t x595 = INT8_MIN;
	int32_t x596 = INT32_MIN;
	int32_t t134 = 11;

    t134 = ((x593^x594)-(x595^x596));

    if (t134 != -2147483393) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x601 = 9U;
	static int8_t x602 = INT8_MAX;
	static int8_t x603 = -1;
	int8_t x604 = -1;

    t135 = ((x601^x602)-(x603^x604));

    if (t135 != 118) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x605 = 22970U;
	static int8_t x606 = INT8_MIN;
	uint8_t x608 = 63U;
	volatile uint32_t t136 = 6U;

    t136 = ((x605^x606)-(x607^x608));

    if (t136 != 4294944378U) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x609 = 0U;
	uint32_t x611 = UINT32_MAX;
	uint32_t t137 = 293764556U;

    t137 = ((x609^x610)-(x611^x612));

    if (t137 != 4294934528U) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x613 = -1;
	uint8_t x614 = 22U;
	volatile int8_t x616 = INT8_MIN;
	static int32_t t138 = -2061297;

    t138 = ((x613^x614)-(x615^x616));

    if (t138 != -23) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x617 = INT16_MIN;
	volatile int8_t x618 = 27;
	int16_t x619 = 100;
	static uint16_t x620 = UINT16_MAX;

    t139 = ((x617^x618)-(x619^x620));

    if (t139 != -98176) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x622 = 1623166960454LLU;
	uint8_t x623 = 6U;
	uint16_t x624 = 1844U;
	uint64_t t140 = 124069905051LLU;

    t140 = ((x621^x622)-(x623^x624));

    if (t140 != 1621680829831LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x629 = 1;
	static int64_t x630 = INT64_MAX;
	uint32_t x631 = 40642U;
	int32_t x632 = INT32_MIN;
	static int64_t t141 = 4311443120555745LL;

    t141 = ((x629^x630)-(x631^x632));

    if (t141 != 9223372034707251516LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x635 = INT32_MIN;
	static int64_t x636 = 1505869879630LL;
	int64_t t142 = -2LL;

    t142 = ((x633^x634)-(x635^x636));

    if (t142 != 1507049696161LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x637 = 3U;
	uint8_t x638 = UINT8_MAX;
	uint32_t x639 = 34086980U;
	uint64_t x640 = 3LLU;
	static volatile uint64_t t143 = 25051257679586LLU;

    t143 = ((x637^x638)-(x639^x640));

    if (t143 != 18446744073675464885LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x641 = 41;
	uint16_t x643 = 10047U;
	int16_t x644 = INT16_MAX;
	volatile int32_t t144 = -4;

    t144 = ((x641^x642)-(x643^x644));

    if (t144 != 42774) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x645 = INT16_MIN;
	int64_t x646 = -1LL;
	int16_t x647 = INT16_MAX;
	volatile uint64_t t145 = 162924301820352154LLU;

    t145 = ((x645^x646)-(x647^x648));

    if (t145 != 59LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x649 = UINT64_MAX;
	static int32_t x651 = -14564758;
	volatile uint64_t t146 = 101382LLU;

    t146 = ((x649^x650)-(x651^x652));

    if (t146 != 9223372036840211051LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x654 = INT64_MAX;
	int64_t x655 = 125114LL;
	int64_t t147 = 3308LL;

    t147 = ((x653^x654)-(x655^x656));

    if (t147 != 9223372034707417019LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int32_t x658 = -1;
	int64_t x660 = -1LL;

    t148 = ((x657^x658)-(x659^x660));

    if (t148 != -2147450880LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x661 = INT32_MAX;
	int8_t x662 = INT8_MAX;
	static volatile uint32_t x664 = 65318314U;

    t149 = ((x661^x662)-(x663^x664));

    if (t149 != 2082165206LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x665 = INT32_MIN;
	int32_t x667 = INT32_MIN;
	static int8_t x668 = 7;
	static int32_t t150 = 490;

    t150 = ((x665^x666)-(x667^x668));

    if (t150 != 248) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x670 = INT16_MAX;
	int8_t x672 = -1;

    t151 = ((x669^x670)-(x671^x672));

    if (t151 != 4294934533U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x673 = UINT32_MAX;
	volatile int16_t x674 = 444;
	int8_t x676 = 1;

    t152 = ((x673^x674)-(x675^x676));

    if (t152 != 32322U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x677 = -11;
	static uint64_t x678 = UINT64_MAX;
	uint64_t x679 = UINT64_MAX;
	static int16_t x680 = INT16_MIN;
	static volatile uint64_t t153 = 7272536607207LLU;

    t153 = ((x677^x678)-(x679^x680));

    if (t153 != 18446744073709518859LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x681 = 24873LL;
	static int32_t x682 = INT32_MAX;
	static uint64_t x683 = UINT64_MAX;
	int64_t x684 = INT64_MIN;
	uint64_t t154 = 1452LLU;

    t154 = ((x681^x682)-(x683^x684));

    if (t154 != 9223372039002234583LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x685 = 0LLU;
	volatile int32_t x686 = INT32_MIN;
	int8_t x687 = INT8_MIN;
	static volatile uint32_t x688 = 57368309U;

    t155 = ((x685^x686)-(x687^x688));

    if (t155 != 18446744067324468875LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x690 = 18124018LLU;
	static volatile uint8_t x692 = UINT8_MAX;
	uint64_t t156 = 366689991114447LLU;

    t156 = ((x689^x690)-(x691^x692));

    if (t156 != 22752487LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x694 = INT8_MIN;
	int64_t x695 = -281228873558292807LL;
	uint8_t x696 = 1U;
	volatile int64_t t157 = -8114812055LL;

    t157 = ((x693^x694)-(x695^x696));

    if (t157 != 281228873558292935LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint32_t x698 = 3U;
	volatile int8_t x699 = INT8_MIN;
	static volatile int64_t t158 = 12276243232490LL;

    t158 = ((x697^x698)-(x699^x700));

    if (t158 != 4373697639031LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x701 = 930711013;
	volatile int64_t x703 = INT64_MAX;
	static uint16_t x704 = UINT16_MAX;

    t159 = ((x701^x702)-(x703^x704));

    if (t159 != 9223372035924130330LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x714 = 6U;
	int64_t t160 = -71514673880172LL;

    t160 = ((x713^x714)-(x715^x716));

    if (t160 != -207540754LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x717 = UINT32_MAX;
	static int32_t x718 = INT32_MIN;
	int32_t x720 = -215097792;
	static volatile uint32_t t161 = 26692282U;

    t161 = ((x717^x718)-(x719^x720));

    if (t161 != 4079869504U) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x722 = INT32_MAX;
	uint32_t x723 = UINT32_MAX;
	static int64_t x724 = -8169851309LL;
	volatile int64_t t162 = -1188403590676548302LL;

    t162 = ((x721^x722)-(x723^x724));

    if (t162 != 6862534100LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x726 = 1100075223113950LLU;
	int64_t x727 = -1LL;
	int16_t x728 = 77;

    t163 = ((x725^x726)-(x727^x728));

    if (t163 != 18445643998248198444LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x729 = INT16_MIN;
	volatile uint32_t x731 = 17816U;
	int32_t x732 = -1;
	static volatile uint64_t t164 = 805LLU;

    t164 = ((x729^x730)-(x731^x732));

    if (t164 != 18446744069414634904LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x733 = INT8_MIN;
	volatile int8_t x734 = INT8_MAX;
	volatile int32_t t165 = 14394;

    t165 = ((x733^x734)-(x735^x736));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x737 = INT16_MAX;
	int64_t x738 = -1LL;
	int32_t x739 = -1;
	volatile int8_t x740 = -1;
	volatile int64_t t166 = -30019993667418LL;

    t166 = ((x737^x738)-(x739^x740));

    if (t166 != -32768LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x745 = INT8_MAX;
	int8_t x746 = -1;
	int64_t x747 = INT64_MIN;
	uint32_t x748 = UINT32_MAX;
	volatile int64_t t167 = 49587334LL;

    t167 = ((x745^x746)-(x747^x748));

    if (t167 != 9223372032559808385LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x749 = INT32_MIN;
	volatile int64_t x750 = INT64_MIN;
	uint8_t x751 = UINT8_MAX;
	volatile uint64_t x752 = 10561806651344LLU;
	uint64_t t168 = 247660033769349486LLU;

    t168 = ((x749^x750)-(x751^x752));

    if (t168 != 9223361472900640977LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x753 = INT64_MIN;
	volatile uint32_t x754 = UINT32_MAX;
	uint64_t x756 = 16418176300648LLU;

    t169 = ((x753^x754)-(x755^x756));

    if (t169 != 9208131989463478277LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x758 = -11;
	int16_t x759 = INT16_MIN;
	volatile int64_t t170 = -10327LL;

    t170 = ((x757^x758)-(x759^x760));

    if (t170 != 9223372036854743158LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x761 = 13;
	int8_t x762 = INT8_MIN;
	uint32_t x763 = 5U;

    t171 = ((x761^x762)-(x763^x764));

    if (t171 != 2147483528U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x766 = -15412;
	uint8_t x767 = 36U;
	static uint16_t x768 = 1562U;
	static volatile int64_t t172 = 31641561534181LL;

    t172 = ((x765^x766)-(x767^x768));

    if (t172 != 20612299LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x769 = 0;
	int8_t x770 = INT8_MIN;
	static volatile int64_t x771 = INT64_MIN;
	static volatile int32_t x772 = INT32_MAX;
	static int64_t t173 = -6103959323LL;

    t173 = ((x769^x770)-(x771^x772));

    if (t173 != 9223372034707292033LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x773 = -1;
	int8_t x774 = 3;
	int16_t x775 = 1525;
	static volatile int32_t t174 = 7;

    t174 = ((x773^x774)-(x775^x776));

    if (t174 != -2147482126) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x780 = INT16_MIN;
	int64_t t175 = -3706104602021LL;

    t175 = ((x777^x778)-(x779^x780));

    if (t175 != 9223372032620496260LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x781 = 17218194LL;
	uint32_t x783 = 225U;
	int32_t x784 = -1;
	static int64_t t176 = -59LL;

    t176 = ((x781^x782)-(x783^x784));

    if (t176 != -3827750670LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x786 = 277;
	uint32_t x787 = 9U;

    t177 = ((x785^x786)-(x787^x788));

    if (t177 != 16988902U) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x791 = INT32_MIN;
	uint32_t x792 = 490U;
	volatile int64_t t178 = 58211079301LL;

    t178 = ((x789^x790)-(x791^x792));

    if (t178 != -2147484138LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x793 = -1;
	int64_t x794 = -158193628938089758LL;
	int32_t x796 = INT32_MIN;
	int64_t t179 = 4832LL;

    t179 = ((x793^x794)-(x795^x796));

    if (t179 != 158193626790610207LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x797 = -44119081;
	int8_t x798 = INT8_MIN;
	static uint16_t x799 = UINT16_MAX;
	uint16_t x800 = 16U;

    t180 = ((x797^x798)-(x799^x800));

    if (t180 != 44053608) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x801 = 312U;
	int32_t x802 = INT32_MIN;
	int64_t x803 = -1LL;
	static uint16_t x804 = UINT16_MAX;
	volatile int64_t t181 = 99450LL;

    t181 = ((x801^x802)-(x803^x804));

    if (t181 != -2147417800LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x805 = -1;
	int8_t x806 = INT8_MAX;
	int8_t x807 = INT8_MAX;
	int64_t x808 = INT64_MIN;
	int64_t t182 = -232068796719133LL;

    t182 = ((x805^x806)-(x807^x808));

    if (t182 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x809 = -1;
	int8_t x810 = INT8_MIN;
	volatile int8_t x811 = INT8_MIN;
	static int16_t x812 = -4677;

    t183 = ((x809^x810)-(x811^x812));

    if (t183 != -4540) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x813 = 133066319100732LL;
	volatile int8_t x814 = INT8_MIN;
	int64_t x815 = -1LL;
	static int32_t x816 = 152;

    t184 = ((x813^x814)-(x815^x816));

    if (t184 != -133066319100587LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x819 = 11U;
	static int64_t t185 = -1105240014162LL;

    t185 = ((x817^x818)-(x819^x820));

    if (t185 != -11LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x821 = UINT8_MAX;
	volatile int16_t x822 = -1;
	uint64_t x823 = 472443500251LLU;
	int16_t x824 = -1;
	uint64_t t186 = 317750LLU;

    t186 = ((x821^x822)-(x823^x824));

    if (t186 != 472443499996LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x829 = -520226755893LL;
	int64_t x830 = -1LL;
	int16_t x831 = 3;
	volatile int64_t t187 = -89670110LL;

    t187 = ((x829^x830)-(x831^x832));

    if (t187 != 520226910908LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x833 = -2081LL;
	static uint32_t x834 = UINT32_MAX;
	int16_t x835 = 23;
	static volatile int8_t x836 = INT8_MIN;
	static int64_t t188 = -3627530LL;

    t188 = ((x833^x834)-(x835^x836));

    if (t188 != -4294965111LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x837 = 1760843288386247497LLU;
	int32_t x838 = INT32_MIN;
	int64_t x839 = INT64_MIN;
	uint64_t t189 = 2059LLU;

    t189 = ((x837^x838)-(x839^x840));

    if (t189 != 7462528748112616266LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x841 = 14;
	int8_t x842 = -62;
	int16_t x844 = 176;

    t190 = ((x841^x842)-(x843^x844));

    if (t190 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x849 = -2;
	volatile int8_t x850 = 56;
	int32_t x851 = 117615037;
	int32_t x852 = INT32_MAX;
	static volatile int32_t t191 = 37;

    t191 = ((x849^x850)-(x851^x852));

    if (t191 != -2029868668) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x865 = 44;
	volatile int32_t x866 = INT32_MIN;
	static int16_t x867 = INT16_MIN;
	volatile uint16_t x868 = 5424U;
	volatile int32_t t192 = -1401;

    t192 = ((x865^x866)-(x867^x868));

    if (t192 != -2147456260) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x869 = INT64_MIN;
	int64_t x870 = 1208535725351095255LL;
	int64_t x871 = INT64_MIN;
	int8_t x872 = 5;
	int64_t t193 = -437893LL;

    t193 = ((x869^x870)-(x871^x872));

    if (t193 != 1208535725351095250LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x873 = -207;
	int64_t x874 = INT64_MIN;
	uint16_t x875 = 5U;
	int8_t x876 = INT8_MIN;
	static int64_t t194 = -6818000LL;

    t194 = ((x873^x874)-(x875^x876));

    if (t194 != 9223372036854775724LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x881 = -1LL;
	static int8_t x883 = INT8_MIN;
	uint16_t x884 = 514U;
	uint64_t t195 = 14950835312LLU;

    t195 = ((x881^x882)-(x883^x884));

    if (t195 != 638LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x886 = -1;
	uint16_t x887 = UINT16_MAX;
	int32_t x888 = INT32_MIN;

    t196 = ((x885^x886)-(x887^x888));

    if (t196 != 10328387497430LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x893 = INT8_MIN;
	uint64_t x894 = UINT64_MAX;
	static int8_t x895 = 1;
	volatile uint64_t t197 = 60LLU;

    t197 = ((x893^x894)-(x895^x896));

    if (t197 != 9223372036854775934LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x897 = INT8_MIN;
	static int8_t x898 = -60;
	uint64_t x899 = 1134674282068LLU;
	uint64_t t198 = 101822LLU;

    t198 = ((x897^x898)-(x899^x900));

    if (t198 != 1134674282137LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int16_t x901 = INT16_MIN;
	static volatile int16_t x903 = -9732;
	int32_t x904 = INT32_MIN;
	volatile int64_t t199 = 0LL;

    t199 = ((x901^x902)-(x903^x904));

    if (t199 != 9223372034707269124LL) { NG(); } else { ; }
	
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


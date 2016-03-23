
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

int16_t x5 = INT16_MIN;
volatile int32_t x13 = INT32_MIN;
int16_t x15 = -1;
int8_t x17 = -3;
int16_t x21 = INT16_MIN;
volatile uint64_t t6 = 12913379LLU;
static uint16_t x37 = 11505U;
static int32_t x40 = INT32_MIN;
uint8_t x43 = 0U;
int32_t x46 = 194377;
int8_t x51 = INT8_MIN;
static int16_t x52 = -7;
uint64_t t10 = 7196LLU;
volatile int32_t x54 = INT32_MIN;
int16_t x61 = INT16_MIN;
int8_t x65 = -3;
volatile int8_t x66 = -22;
int64_t x67 = INT64_MIN;
volatile int64_t t14 = 126090010334707LL;
static int16_t x71 = 0;
int8_t x80 = INT8_MIN;
static uint8_t x98 = 32U;
int8_t x99 = 0;
volatile uint64_t t21 = 11886960735LLU;
uint64_t t22 = 28952888729LLU;
int32_t x109 = INT32_MIN;
static int16_t x111 = INT16_MIN;
int8_t x115 = -1;
static volatile uint16_t x117 = 0U;
static int16_t x125 = INT16_MAX;
uint32_t x126 = 3375014U;
int64_t x128 = INT64_MIN;
uint32_t x131 = 45U;
int64_t t29 = -37072594LL;
uint32_t x135 = UINT32_MAX;
int64_t x137 = INT64_MAX;
static volatile int64_t x139 = INT64_MIN;
static volatile int64_t x161 = -1LL;
static volatile int16_t x176 = -1;
volatile int32_t x180 = -1;
uint32_t x181 = 34U;
static volatile int64_t x183 = 1694332328732340LL;
uint32_t x185 = UINT32_MAX;
uint64_t x188 = UINT64_MAX;
int64_t x192 = 11944908LL;
static volatile int64_t t43 = 1566443006921859LL;
int32_t x194 = -9;
volatile uint64_t t45 = 3790707840292792984LLU;
int64_t x202 = INT64_MAX;
uint64_t x212 = 30581726LLU;
uint16_t x213 = 13U;
static int64_t x216 = -1LL;
int8_t x226 = INT8_MIN;
int16_t x243 = 53;
int32_t x248 = -1;
int64_t t54 = -27LL;
static uint8_t x254 = 60U;
int64_t x263 = INT64_MAX;
uint8_t x292 = 0U;
int64_t x296 = -1LL;
int64_t x301 = INT64_MIN;
uint8_t x310 = 0U;
uint32_t x325 = 31231469U;
static volatile int32_t x329 = INT32_MIN;
volatile int32_t x335 = INT32_MIN;
int64_t t73 = 14664041873513625LL;
int64_t x343 = -229405796734715LL;
volatile int64_t t74 = -21310LL;
volatile int32_t x349 = -1;
static int64_t x351 = -1LL;
int16_t x354 = 731;
uint16_t x366 = 619U;
static uint64_t x375 = UINT64_MAX;
volatile int64_t x379 = 135657519737102924LL;
int64_t x382 = -423LL;
int16_t x386 = -1;
int8_t x387 = INT8_MIN;
int8_t x388 = INT8_MIN;
int32_t t84 = -129403;
int64_t t85 = 18575LL;
int16_t x399 = INT16_MIN;
int8_t x404 = 26;
static uint16_t x406 = 3686U;
int16_t x407 = -1;
volatile int32_t t89 = 4448271;
int16_t x414 = INT16_MAX;
volatile int16_t x415 = -1;
uint8_t x427 = 0U;
volatile int16_t x429 = 10;
volatile uint64_t t95 = 443215791104064361LLU;
static volatile uint64_t t96 = 0LLU;
volatile int8_t x444 = INT8_MIN;
volatile uint64_t t97 = 90637491189123501LLU;
uint8_t x445 = UINT8_MAX;
int64_t t98 = 10201830147381LL;
static volatile int16_t x451 = INT16_MIN;
int16_t x456 = 1;
volatile int64_t t101 = 629461652517LL;
int8_t x461 = INT8_MAX;
volatile int16_t x462 = INT16_MIN;
static int8_t x477 = INT8_MAX;
static int32_t x487 = INT32_MIN;
uint64_t x489 = 3795939997460357831LLU;
static volatile int64_t x491 = INT64_MAX;
int32_t x495 = INT32_MIN;
int32_t x496 = INT32_MIN;
int32_t x509 = INT32_MIN;
static uint8_t x514 = UINT8_MAX;
volatile uint16_t x518 = 867U;
static volatile uint64_t t114 = 92909LLU;
uint32_t x530 = UINT32_MAX;
int16_t x554 = INT16_MIN;
int16_t x555 = INT16_MIN;
int8_t x556 = INT8_MIN;
int32_t t122 = -4;
uint16_t x566 = 180U;
int8_t x568 = -1;
int8_t x571 = INT8_MIN;
int64_t x574 = INT64_MAX;
uint16_t x585 = 13U;
volatile int32_t t129 = 1;
uint16_t x592 = 1786U;
uint8_t x596 = UINT8_MAX;
static int8_t x599 = INT8_MAX;
volatile int16_t x612 = INT16_MIN;
int64_t x615 = INT64_MIN;
uint16_t x622 = 2883U;
static int16_t x623 = INT16_MIN;
int8_t x626 = 9;
int64_t x642 = INT64_MIN;
uint64_t x644 = 56968913599506655LLU;
uint32_t x645 = 1173349303U;
volatile uint64_t t144 = 3921247484474070972LLU;
int32_t t145 = -650;
uint64_t t146 = 52755261814526LLU;
static uint64_t x676 = 3290767528LLU;
int32_t x678 = 130243224;
int64_t t149 = 8739820456LL;
volatile uint64_t x701 = 208267267LLU;
int64_t x717 = 994397467661399LL;
uint32_t x719 = 25U;
uint16_t x720 = UINT16_MAX;
volatile int64_t x731 = INT64_MAX;
volatile uint8_t x737 = 2U;
static volatile int8_t x750 = -1;
static volatile int64_t x751 = -1LL;
static uint16_t x753 = UINT16_MAX;
uint8_t x756 = 3U;
static int64_t t163 = 105534LL;
int32_t t164 = -119;
int16_t x770 = INT16_MIN;
volatile int32_t x771 = 1971062;
uint8_t x777 = 0U;
int32_t x779 = INT32_MAX;
uint64_t t168 = 30402604898864LLU;
volatile int32_t t169 = 6458471;
volatile uint32_t t170 = 14U;
volatile int32_t x797 = INT32_MAX;
int32_t x798 = INT32_MIN;
volatile uint64_t t172 = 22LLU;
int8_t x801 = INT8_MAX;
int32_t x804 = 168;
volatile int32_t t174 = -1;
int8_t x818 = INT8_MIN;
static uint8_t x819 = UINT8_MAX;
static int32_t x825 = INT32_MIN;
static int32_t x826 = INT32_MAX;
static int64_t x834 = INT64_MIN;
int32_t x842 = 3379;
volatile uint64_t x844 = 756LLU;
volatile uint8_t x847 = 39U;
static uint16_t x849 = UINT16_MAX;
uint64_t x858 = 494567LLU;
static volatile uint64_t t185 = 5691414LLU;
uint8_t x862 = 3U;
static int8_t x865 = INT8_MIN;
static uint64_t x866 = 617096LLU;
volatile uint64_t x874 = 0LLU;
static int16_t x875 = 178;
uint32_t x881 = 0U;
int64_t x886 = -361419LL;
uint32_t x894 = 69U;
volatile int64_t t192 = -6147076900624342LL;
int8_t x897 = 0;
int64_t t193 = 1159876714148383LL;
volatile int32_t x906 = 27629;
int16_t x911 = INT16_MIN;
static volatile uint64_t t196 = 254751291LLU;
static int64_t x923 = 53140964LL;


void f0(void) {
    	static int8_t x1 = 4;
	static uint32_t x2 = UINT32_MAX;
	int32_t x3 = -848414954;
	volatile uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 422239LLU;

    t0 = (x1^(x2|(x3-x4)));

    if (t0 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = -1;
	int32_t x7 = -2769;
	static uint64_t x8 = 124676580LLU;
	uint64_t t1 = 354976732725561319LLU;

    t1 = (x5^(x6|(x7-x8)));

    if (t1 != 32767LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	static int32_t x10 = INT32_MIN;
	int32_t x11 = 385;
	uint32_t x12 = 2056963865U;
	static volatile int64_t t2 = -3152207324LL;

    t2 = (x9^(x10|(x11-x12)));

    if (t2 != 9223372034616771991LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = INT64_MIN;
	static uint32_t x16 = 21502256U;
	volatile int64_t t3 = 2414054266833LL;

    t3 = (x13^(x14|(x15-x16)));

    if (t3 != 9223372034685789903LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x18 = UINT8_MAX;
	volatile uint16_t x19 = UINT16_MAX;
	uint64_t x20 = 166419LLU;
	static volatile uint64_t t4 = 275LLU;

    t4 = (x17^(x18|(x19-x20)));

    if (t4 != 100866LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x22 = 760U;
	static int32_t x23 = INT32_MIN;
	static int64_t x24 = INT64_MIN;
	int64_t t5 = 11640073796100934LL;

    t5 = (x21^(x22|(x23-x24)));

    if (t5 != -9223372034707324168LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x33 = UINT64_MAX;
	int8_t x34 = INT8_MIN;
	static uint16_t x35 = 16U;
	uint16_t x36 = 47U;

    t6 = (x33^(x34|(x35-x36)));

    if (t6 != 30LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x38 = 124U;
	uint32_t x39 = 973U;
	volatile uint32_t t7 = 647760U;

    t7 = (x37^(x38|(x39-x40)));

    if (t7 != 2147495692U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x41 = 68U;
	int64_t x42 = INT64_MIN;
	int32_t x44 = 1600228;
	static volatile int64_t t8 = 337LL;

    t8 = (x41^(x42|(x43-x44)));

    if (t8 != -1600168LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x45 = 8929U;
	int16_t x47 = INT16_MIN;
	volatile uint32_t x48 = UINT32_MAX;
	volatile uint32_t t9 = 16615609U;

    t9 = (x45^(x46|(x47-x48)));

    if (t9 != 4294956456U) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = INT32_MIN;
	uint64_t x50 = 93901229799295LLU;

    t10 = (x49^(x50|(x51-x52)));

    if (t10 != 2147483647LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = 27;
	int16_t x55 = 24;
	uint8_t x56 = 15U;
	volatile int32_t t11 = 18;

    t11 = (x53^(x54|(x55-x56)));

    if (t11 != -2147483630) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x57 = -1;
	uint16_t x58 = UINT16_MAX;
	int16_t x59 = INT16_MIN;
	int64_t x60 = -1LL;
	static volatile int64_t t12 = 127804204923174LL;

    t12 = (x57^(x58|(x59-x60)));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x62 = INT64_MIN;
	static int16_t x63 = INT16_MAX;
	int8_t x64 = -3;
	int64_t t13 = -77LL;

    t13 = (x61^(x62|(x63-x64)));

    if (t13 != 9223372036854710274LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x68 = INT64_MIN;

    t14 = (x65^(x66|(x67-x68)));

    if (t14 != 23LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x69 = -1;
	int64_t x70 = INT64_MIN;
	uint8_t x72 = 47U;
	int64_t t15 = -181LL;

    t15 = (x69^(x70|(x71-x72)));

    if (t15 != 46LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x73 = 1U;
	uint64_t x74 = 66446980001135LLU;
	static int64_t x75 = 75LL;
	int16_t x76 = -192;
	static uint64_t t16 = 7047967104802059LLU;

    t16 = (x73^(x74|(x75-x76)));

    if (t16 != 66446980001134LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x77 = 526794041225LL;
	int16_t x78 = -1;
	int64_t x79 = -1LL;
	volatile int64_t t17 = 3227735521595LL;

    t17 = (x77^(x78|(x79-x80)));

    if (t17 != -526794041226LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x81 = 0LLU;
	int8_t x82 = -1;
	uint16_t x83 = UINT16_MAX;
	volatile int8_t x84 = 18;
	static volatile uint64_t t18 = UINT64_MAX;

    t18 = (x81^(x82|(x83-x84)));

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x85 = 1U;
	int16_t x86 = -1;
	uint16_t x87 = 30667U;
	static volatile int8_t x88 = -1;
	int32_t t19 = 244278;

    t19 = (x85^(x86|(x87-x88)));

    if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x93 = -1;
	uint8_t x94 = 3U;
	int64_t x95 = -17321763439015LL;
	int32_t x96 = INT32_MIN;
	int64_t t20 = 42LL;

    t20 = (x93^(x94|(x95-x96)));

    if (t20 != 17319615955364LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x97 = 7340620LLU;
	int32_t x100 = INT32_MAX;

    t21 = (x97^(x98|(x99-x100)));

    if (t21 != 18446744071569408621LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x101 = INT8_MIN;
	volatile uint32_t x102 = 7895784U;
	volatile int16_t x103 = INT16_MAX;
	uint64_t x104 = 6129765203788LLU;

    t22 = (x101^(x102|(x103-x104)));

    if (t22 != 6129757291899LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x105 = 58272239588LL;
	volatile int8_t x106 = INT8_MIN;
	volatile int16_t x107 = -30;
	static volatile int16_t x108 = INT16_MIN;
	int64_t t23 = -44666LL;

    t23 = (x105^(x106|(x107-x108)));

    if (t23 != -58272239610LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x110 = -1LL;
	uint16_t x112 = UINT16_MAX;
	int64_t t24 = -33098822338681798LL;

    t24 = (x109^(x110|(x111-x112)));

    if (t24 != 2147483647LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x113 = -18LL;
	uint16_t x114 = 0U;
	int8_t x116 = INT8_MIN;
	volatile int64_t t25 = 6LL;

    t25 = (x113^(x114|(x115-x116)));

    if (t25 != -111LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x118 = -1;
	volatile int64_t x119 = -2394485LL;
	uint64_t x120 = UINT64_MAX;
	volatile uint64_t t26 = UINT64_MAX;

    t26 = (x117^(x118|(x119-x120)));

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x121 = -1LL;
	static int64_t x122 = -1LL;
	int16_t x123 = -28;
	int16_t x124 = 552;
	static volatile int64_t t27 = -62LL;

    t27 = (x121^(x122|(x123-x124)));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x127 = INT8_MIN;
	volatile int64_t t28 = -2340164787194637LL;

    t28 = (x125^(x126|(x127-x128)));

    if (t28 != 9223372036854743129LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x129 = 121U;
	int16_t x130 = -1110;
	static int64_t x132 = -1LL;

    t29 = (x129^(x130|(x131-x132)));

    if (t29 != -1065LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x133 = 0;
	int8_t x134 = INT8_MAX;
	int32_t x136 = INT32_MIN;
	uint32_t t30 = 474201606U;

    t30 = (x133^(x134|(x135-x136)));

    if (t30 != 2147483647U) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int8_t x138 = 2;
	static uint64_t x140 = 2634500662LLU;
	volatile uint64_t t31 = 0LLU;

    t31 = (x137^(x138|(x139-x140)));

    if (t31 != 2634500661LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x141 = -1;
	int32_t x142 = 1283;
	int64_t x143 = 29330181984034147LL;
	static int32_t x144 = INT32_MIN;
	volatile int64_t t32 = -1446584594499LL;

    t32 = (x141^(x142|(x143-x144)));

    if (t32 != -29330184131517796LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x145 = INT64_MIN;
	uint8_t x146 = 15U;
	int16_t x147 = INT16_MIN;
	int32_t x148 = -1;
	int64_t t33 = -1LL;

    t33 = (x145^(x146|(x147-x148)));

    if (t33 != 9223372036854743055LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x149 = INT32_MIN;
	int64_t x150 = -1LL;
	int16_t x151 = INT16_MAX;
	int32_t x152 = -1;
	volatile int64_t t34 = -23214LL;

    t34 = (x149^(x150|(x151-x152)));

    if (t34 != 2147483647LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x153 = -1;
	volatile uint64_t x154 = 517098537725LLU;
	static int32_t x155 = -1;
	volatile uint8_t x156 = UINT8_MAX;
	static volatile uint64_t t35 = 1LLU;

    t35 = (x153^(x154|(x155-x156)));

    if (t35 != 2LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x157 = INT32_MIN;
	int16_t x158 = INT16_MIN;
	int32_t x159 = INT32_MIN;
	volatile int8_t x160 = INT8_MIN;
	volatile int32_t t36 = -8;

    t36 = (x157^(x158|(x159-x160)));

    if (t36 != 2147451008) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x162 = INT16_MIN;
	static int64_t x163 = 428771171440342083LL;
	volatile uint32_t x164 = UINT32_MAX;
	volatile int64_t t37 = -28466LL;

    t37 = (x161^(x162|(x163-x164)));

    if (t37 != 19387LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = -1;
	int32_t x166 = INT32_MIN;
	volatile int16_t x167 = -20;
	static uint32_t x168 = 19U;
	volatile uint32_t t38 = 847217557U;

    t38 = (x165^(x166|(x167-x168)));

    if (t38 != 38U) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x173 = -9;
	volatile int8_t x174 = 0;
	volatile uint64_t x175 = 29514386009704LLU;
	uint64_t t39 = 1867741LLU;

    t39 = (x173^(x174|(x175-x176)));

    if (t39 != 18446714559323541918LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x177 = INT16_MIN;
	static int32_t x178 = INT32_MIN;
	uint16_t x179 = UINT16_MAX;
	static volatile int32_t t40 = -1;

    t40 = (x177^(x178|(x179-x180)));

    if (t40 != 2147385344) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x182 = UINT8_MAX;
	int8_t x184 = INT8_MIN;
	volatile int64_t t41 = 1700691LL;

    t41 = (x181^(x182|(x183-x184)));

    if (t41 != 1694332328732637LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x186 = -44527606LL;
	static int16_t x187 = INT16_MAX;
	uint64_t t42 = 30886447622699579LLU;

    t42 = (x185^(x186|(x187-x188)));

    if (t42 != 18446744069459111925LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x189 = INT32_MIN;
	uint32_t x190 = UINT32_MAX;
	int32_t x191 = 114323814;

    t43 = (x189^(x190|(x191-x192)));

    if (t43 != -2147483649LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x193 = UINT16_MAX;
	int16_t x195 = 4283;
	static uint8_t x196 = 33U;
	volatile int32_t t44 = 29468;

    t44 = (x193^(x194|(x195-x196)));

    if (t44 != -65536) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x197 = INT64_MAX;
	uint32_t x198 = 37U;
	uint64_t x199 = 56677214843LLU;
	static uint64_t x200 = 4474213LLU;

    t45 = (x197^(x198|(x199-x200)));

    if (t45 != 9223371980182035144LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x201 = 0U;
	volatile int16_t x203 = 1;
	int32_t x204 = -1;
	int64_t t46 = INT64_MAX;

    t46 = (x201^(x202|(x203-x204)));

    if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x205 = -10;
	int16_t x206 = INT16_MIN;
	int32_t x207 = 211;
	static int16_t x208 = INT16_MIN;
	volatile int32_t t47 = 200093824;

    t47 = (x205^(x206|(x207-x208)));

    if (t47 != 32549) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x209 = -1;
	int8_t x210 = -24;
	int16_t x211 = INT16_MIN;
	static volatile uint64_t t48 = 30644343451LLU;

    t48 = (x209^(x210|(x211-x212)));

    if (t48 != 21LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x214 = 1499449806U;
	volatile int32_t x215 = -1;
	static int64_t t49 = 417084418395469741LL;

    t49 = (x213^(x214|(x215-x216)));

    if (t49 != 1499449795LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x221 = INT64_MIN;
	volatile int64_t x222 = INT64_MAX;
	int8_t x223 = 6;
	int32_t x224 = 1;
	volatile int64_t t50 = 110LL;

    t50 = (x221^(x222|(x223-x224)));

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x225 = 25U;
	int32_t x227 = INT32_MIN;
	volatile int32_t x228 = INT32_MIN;
	volatile int32_t t51 = -1;

    t51 = (x225^(x226|(x227-x228)));

    if (t51 != -103) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x229 = UINT32_MAX;
	uint32_t x230 = 892931188U;
	static int16_t x231 = 3;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t52 = 1LLU;

    t52 = (x229^(x230|(x231-x232)));

    if (t52 != 3402036107LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x241 = 428U;
	int16_t x242 = INT16_MIN;
	int64_t x244 = -1LL;
	int64_t t53 = -4LL;

    t53 = (x241^(x242|(x243-x244)));

    if (t53 != -32358LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x245 = INT8_MAX;
	uint16_t x246 = 31U;
	volatile int64_t x247 = -8101992LL;

    t54 = (x245^(x246|(x247-x248)));

    if (t54 != -8101920LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x249 = 24643059009LLU;
	int16_t x250 = INT16_MIN;
	int64_t x251 = 45447764699504167LL;
	int64_t x252 = -1LL;
	uint64_t t55 = 1428388346337824447LLU;

    t55 = (x249^(x250|(x251-x252)));

    if (t55 != 18446744049066500969LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x253 = UINT8_MAX;
	uint32_t x255 = 5748U;
	volatile int32_t x256 = 18717888;
	uint32_t t56 = 2U;

    t56 = (x253^(x254|(x255-x256)));

    if (t56 != 4276255043U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x257 = INT16_MAX;
	static int32_t x258 = -860;
	int16_t x259 = -17;
	int8_t x260 = -1;
	static volatile int32_t t57 = -1466;

    t57 = (x257^(x258|(x259-x260)));

    if (t57 != -32757) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x261 = INT32_MIN;
	uint32_t x262 = 5910U;
	int8_t x264 = INT8_MAX;
	volatile int64_t t58 = -248900867543LL;

    t58 = (x261^(x262|(x263-x264)));

    if (t58 != -9223372034707292266LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x265 = INT64_MIN;
	uint16_t x266 = UINT16_MAX;
	static int16_t x267 = 1701;
	int16_t x268 = -1;
	int64_t t59 = -69147338LL;

    t59 = (x265^(x266|(x267-x268)));

    if (t59 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x269 = INT32_MIN;
	int32_t x270 = -1;
	int16_t x271 = INT16_MIN;
	volatile int8_t x272 = INT8_MAX;
	volatile int32_t t60 = INT32_MAX;

    t60 = (x269^(x270|(x271-x272)));

    if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x277 = -1;
	volatile uint64_t x278 = UINT64_MAX;
	static int32_t x279 = -429734195;
	int32_t x280 = -1;
	volatile uint64_t t61 = 770423945107LLU;

    t61 = (x277^(x278|(x279-x280)));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x281 = INT16_MIN;
	volatile uint8_t x282 = 21U;
	uint16_t x283 = UINT16_MAX;
	int64_t x284 = INT64_MAX;
	int64_t t62 = -12LL;

    t62 = (x281^(x282|(x283-x284)));

    if (t62 != 9223372036854677525LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x285 = -1;
	int64_t x286 = INT64_MAX;
	int64_t x287 = -1LL;
	int32_t x288 = 49300368;
	int64_t t63 = -666492205LL;

    t63 = (x285^(x286|(x287-x288)));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x289 = 97258725354114LLU;
	int32_t x290 = -156;
	int8_t x291 = -1;
	volatile uint64_t t64 = 20LLU;

    t64 = (x289^(x290|(x291-x292)));

    if (t64 != 18446646814984197501LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x293 = INT32_MAX;
	int32_t x294 = INT32_MIN;
	int8_t x295 = -1;
	int64_t t65 = 2442088LL;

    t65 = (x293^(x294|(x295-x296)));

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x297 = INT16_MIN;
	int16_t x298 = 0;
	static uint8_t x299 = 0U;
	static int64_t x300 = INT64_MAX;
	int64_t t66 = 3040918LL;

    t66 = (x297^(x298|(x299-x300)));

    if (t66 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int16_t x302 = -1;
	int8_t x303 = -1;
	volatile uint32_t x304 = 240433U;
	int64_t t67 = 2LL;

    t67 = (x301^(x302|(x303-x304)));

    if (t67 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x309 = 897339439U;
	int64_t x311 = 109LL;
	int32_t x312 = 281638374;
	volatile int64_t t68 = -2311389LL;

    t68 = (x309^(x310|(x311-x312)));

    if (t68 != -632628568LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x321 = -1LL;
	int64_t x322 = INT64_MAX;
	int32_t x323 = 6686133;
	static int64_t x324 = 241259552LL;
	static volatile int64_t t69 = -165185933167876286LL;

    t69 = (x321^(x322|(x323-x324)));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x326 = INT32_MIN;
	int8_t x327 = 0;
	volatile int32_t x328 = -7071166;
	static uint32_t t70 = 7006691U;

    t70 = (x325^(x326|(x327-x328)));

    if (t70 != 2176280659U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x330 = UINT16_MAX;
	uint64_t x331 = 27758013621529067LLU;
	int64_t x332 = -727816378495271LL;
	uint64_t t71 = 3261521593166775150LLU;

    t71 = (x329^(x330|(x331-x332)));

    if (t71 != 18418258242712436735LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x333 = INT32_MIN;
	volatile int32_t x334 = INT32_MIN;
	static uint64_t x336 = 6LLU;
	uint64_t t72 = 2346038036006284LLU;

    t72 = (x333^(x334|(x335-x336)));

    if (t72 != 2147483642LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x337 = -4;
	volatile uint32_t x338 = 1U;
	int32_t x339 = INT32_MAX;
	int64_t x340 = 1803883817920496LL;

    t73 = (x337^(x338|(x339-x340)));

    if (t73 != 1803881670436851LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x341 = -1;
	int16_t x342 = -1;
	static uint8_t x344 = 10U;

    t74 = (x341^(x342|(x343-x344)));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x345 = INT16_MIN;
	int32_t x346 = INT32_MIN;
	static volatile int32_t x347 = INT32_MIN;
	int32_t x348 = -1;
	volatile int32_t t75 = 21996536;

    t75 = (x345^(x346|(x347-x348)));

    if (t75 != 2147450881) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x350 = -1;
	static uint16_t x352 = UINT16_MAX;
	static volatile int64_t t76 = 2298519056LL;

    t76 = (x349^(x350|(x351-x352)));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int16_t x353 = INT16_MIN;
	static int16_t x355 = -14949;
	static uint8_t x356 = 1U;
	int32_t t77 = -398233832;

    t77 = (x353^(x354|(x355-x356)));

    if (t77 != 18395) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x357 = INT16_MAX;
	uint8_t x358 = 13U;
	int32_t x359 = -4767470;
	int64_t x360 = INT64_MIN;
	int64_t t78 = -719766030LL;

    t78 = (x357^(x358|(x359-x360)));

    if (t78 != 9223372036850007776LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x365 = UINT64_MAX;
	int64_t x367 = -918612902LL;
	uint8_t x368 = 1U;
	uint64_t t79 = 2829249877480707480LLU;

    t79 = (x365^(x366|(x367-x368)));

    if (t79 != 918612356LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x369 = INT32_MIN;
	int8_t x370 = -1;
	volatile int8_t x371 = INT8_MIN;
	volatile int64_t x372 = -1LL;
	volatile int64_t t80 = 824635636659LL;

    t80 = (x369^(x370|(x371-x372)));

    if (t80 != 2147483647LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x373 = INT8_MIN;
	int8_t x374 = INT8_MIN;
	int8_t x376 = -1;
	static uint64_t t81 = 8670049060007LLU;

    t81 = (x373^(x374|(x375-x376)));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x377 = 2022U;
	int8_t x378 = INT8_MIN;
	int64_t x380 = -69016906273LL;
	int64_t t82 = -475841505429696LL;

    t82 = (x377^(x378|(x379-x380)));

    if (t82 != -2037LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x381 = INT32_MIN;
	int16_t x383 = -1993;
	int8_t x384 = INT8_MAX;
	int64_t t83 = -169906913LL;

    t83 = (x381^(x382|(x383-x384)));

    if (t83 != 2147483641LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x385 = 1;

    t84 = (x385^(x386|(x387-x388)));

    if (t84 != -2) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x389 = 13037656650LL;
	int16_t x390 = INT16_MIN;
	uint8_t x391 = 0U;
	int16_t x392 = INT16_MAX;

    t85 = (x389^(x390|(x391-x392)));

    if (t85 != -13037643189LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x393 = INT8_MAX;
	static int32_t x394 = -1;
	int8_t x395 = 1;
	int64_t x396 = INT64_MAX;
	static int64_t t86 = 277401168902640284LL;

    t86 = (x393^(x394|(x395-x396)));

    if (t86 != -128LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x397 = INT64_MIN;
	int8_t x398 = INT8_MIN;
	int8_t x400 = INT8_MIN;
	static int64_t t87 = -5877LL;

    t87 = (x397^(x398|(x399-x400)));

    if (t87 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x401 = UINT8_MAX;
	volatile int8_t x402 = INT8_MIN;
	static uint8_t x403 = 1U;
	int32_t t88 = -7117;

    t88 = (x401^(x402|(x403-x404)));

    if (t88 != -232) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x405 = INT8_MAX;
	uint8_t x408 = 1U;

    t89 = (x405^(x406|(x407-x408)));

    if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x409 = 116U;
	int16_t x410 = INT16_MIN;
	uint32_t x411 = 6468103U;
	int64_t x412 = -1LL;
	volatile int64_t t90 = 1976616017LL;

    t90 = (x409^(x410|(x411-x412)));

    if (t90 != -19844LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x413 = INT16_MAX;
	int8_t x416 = INT8_MIN;
	static volatile int32_t t91 = 4150;

    t91 = (x413^(x414|(x415-x416)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x417 = INT64_MAX;
	int32_t x418 = -1;
	uint16_t x419 = UINT16_MAX;
	uint64_t x420 = UINT64_MAX;
	volatile uint64_t t92 = 3843989339345801LLU;

    t92 = (x417^(x418|(x419-x420)));

    if (t92 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x421 = INT16_MIN;
	static volatile int64_t x422 = 803993425243869201LL;
	volatile uint32_t x423 = 16026932U;
	int8_t x424 = INT8_MIN;
	int64_t t93 = 575147961LL;

    t93 = (x421^(x422|(x423-x424)));

    if (t93 != -803993425253622347LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x425 = -2;
	int16_t x426 = INT16_MIN;
	volatile uint8_t x428 = UINT8_MAX;
	volatile int32_t t94 = 3999089;

    t94 = (x425^(x426|(x427-x428)));

    if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x430 = 486U;
	int16_t x431 = -1;
	uint64_t x432 = 32941988909911352LLU;

    t95 = (x429^(x430|(x431-x432)));

    if (t95 != 18413802084799640557LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x433 = 1;
	int16_t x434 = INT16_MIN;
	int16_t x435 = INT16_MIN;
	uint64_t x436 = 57100478706877LLU;

    t96 = (x433^(x434|(x435-x436)));

    if (t96 != 18446744073709521730LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x441 = UINT16_MAX;
	volatile int32_t x442 = INT32_MIN;
	uint64_t x443 = UINT64_MAX;

    t97 = (x441^(x442|(x443-x444)));

    if (t97 != 18446744071562133376LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x446 = 30763188550449405LL;
	volatile int32_t x447 = 45990;
	int32_t x448 = -1;

    t98 = (x445^(x446|(x447-x448)));

    if (t98 != 30763188550482688LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x449 = INT32_MIN;
	int16_t x450 = 13;
	int8_t x452 = 9;
	int32_t t99 = -707907586;

    t99 = (x449^(x450|(x451-x452)));

    if (t99 != 2147450879) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x453 = INT32_MIN;
	uint8_t x454 = 18U;
	uint8_t x455 = 1U;
	int32_t t100 = -1;

    t100 = (x453^(x454|(x455-x456)));

    if (t100 != -2147483630) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x457 = -5921LL;
	int16_t x458 = INT16_MAX;
	int32_t x459 = 334;
	int8_t x460 = 3;

    t101 = (x457^(x458|(x459-x460)));

    if (t101 != -26848LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x463 = UINT32_MAX;
	volatile int32_t x464 = INT32_MIN;
	volatile uint32_t t102 = 8U;

    t102 = (x461^(x462|(x463-x464)));

    if (t102 != 4294967168U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x469 = -30;
	uint64_t x470 = UINT64_MAX;
	static uint8_t x471 = 4U;
	int16_t x472 = INT16_MAX;
	volatile uint64_t t103 = 130080397440257LLU;

    t103 = (x469^(x470|(x471-x472)));

    if (t103 != 29LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x473 = 145009542970LLU;
	volatile int16_t x474 = INT16_MAX;
	static int16_t x475 = INT16_MIN;
	uint8_t x476 = 49U;
	static volatile uint64_t t104 = 118221288291250264LLU;

    t104 = (x473^(x474|(x475-x476)));

    if (t104 != 18446743928699975877LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x478 = INT32_MIN;
	uint32_t x479 = 7315683U;
	int8_t x480 = INT8_MIN;
	volatile uint32_t t105 = 512567U;

    t105 = (x477^(x478|(x479-x480)));

    if (t105 != 2154799388U) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x481 = -1;
	int16_t x482 = INT16_MIN;
	uint8_t x483 = UINT8_MAX;
	int8_t x484 = INT8_MIN;
	volatile int32_t t106 = -9550;

    t106 = (x481^(x482|(x483-x484)));

    if (t106 != 32384) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x485 = 1047U;
	static uint8_t x486 = 1U;
	int64_t x488 = -1LL;
	volatile int64_t t107 = 2258363398977854699LL;

    t107 = (x485^(x486|(x487-x488)));

    if (t107 != -2147482602LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint8_t x490 = 11U;
	int16_t x492 = INT16_MAX;
	static uint64_t t108 = 845534412805LLU;

    t108 = (x489^(x490|(x491-x492)));

    if (t108 != 5427432039394435788LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x493 = 24;
	int64_t x494 = INT64_MIN;
	volatile int64_t t109 = -638527982520LL;

    t109 = (x493^(x494|(x495-x496)));

    if (t109 != -9223372036854775784LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x501 = -1LL;
	uint16_t x502 = 2306U;
	int16_t x503 = 31;
	static int8_t x504 = INT8_MIN;
	int64_t t110 = -30LL;

    t110 = (x501^(x502|(x503-x504)));

    if (t110 != -2464LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x505 = -1;
	static uint64_t x506 = 47460011LLU;
	static uint8_t x507 = UINT8_MAX;
	uint32_t x508 = 40878U;
	volatile uint64_t t111 = 551LLU;

    t111 = (x505^(x506|(x507-x508)));

    if (t111 != 18446744069414621188LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x510 = INT32_MIN;
	static volatile int8_t x511 = INT8_MAX;
	int8_t x512 = -1;
	volatile int32_t t112 = -25253;

    t112 = (x509^(x510|(x511-x512)));

    if (t112 != 128) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x513 = 2;
	uint8_t x515 = UINT8_MAX;
	int16_t x516 = -12;
	static volatile int32_t t113 = -353130539;

    t113 = (x513^(x514|(x515-x516)));

    if (t113 != 509) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x517 = 961287;
	volatile uint64_t x519 = 1423832378LLU;
	uint64_t x520 = 1049422123LLU;

    t114 = (x517^(x518|(x519-x520)));

    if (t114 != 375366760LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x521 = 3U;
	uint32_t x522 = UINT32_MAX;
	int16_t x523 = 224;
	int32_t x524 = -1;
	uint32_t t115 = 8745335U;

    t115 = (x521^(x522|(x523-x524)));

    if (t115 != 4294967292U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x525 = UINT16_MAX;
	int8_t x526 = -1;
	int8_t x527 = 0;
	int8_t x528 = INT8_MIN;
	int32_t t116 = 3076;

    t116 = (x525^(x526|(x527-x528)));

    if (t116 != -65536) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x529 = -90;
	int8_t x531 = INT8_MAX;
	static uint64_t x532 = UINT64_MAX;
	uint64_t t117 = 172228899097097LLU;

    t117 = (x529^(x530|(x531-x532)));

    if (t117 != 18446744069414584409LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x533 = -1LL;
	int16_t x534 = -17;
	volatile int64_t x535 = 281137565LL;
	int8_t x536 = INT8_MIN;
	volatile int64_t t118 = -1011246732LL;

    t118 = (x533^(x534|(x535-x536)));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x537 = INT32_MAX;
	int8_t x538 = INT8_MIN;
	static uint8_t x539 = UINT8_MAX;
	uint16_t x540 = UINT16_MAX;
	volatile int32_t t119 = -48965;

    t119 = (x537^(x538|(x539-x540)));

    if (t119 != -2147483521) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x541 = INT64_MAX;
	volatile int16_t x542 = 0;
	uint8_t x543 = 7U;
	int32_t x544 = INT32_MAX;
	static int64_t t120 = 15LL;

    t120 = (x541^(x542|(x543-x544)));

    if (t120 != -9223372034707292169LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x545 = 37U;
	int8_t x546 = INT8_MAX;
	uint64_t x547 = UINT64_MAX;
	uint16_t x548 = 741U;
	volatile uint64_t t121 = 22801364297527072LLU;

    t121 = (x545^(x546|(x547-x548)));

    if (t121 != 18446744073709550938LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x553 = INT8_MIN;

    t122 = (x553^(x554|(x555-x556)));

    if (t122 != 32512) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x557 = INT16_MIN;
	static volatile int16_t x558 = INT16_MAX;
	int32_t x559 = INT32_MIN;
	int64_t x560 = -1LL;
	static volatile int64_t t123 = -808983685964530156LL;

    t123 = (x557^(x558|(x559-x560)));

    if (t123 != 2147483647LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x561 = INT16_MIN;
	static int16_t x562 = 126;
	static int32_t x563 = -190516895;
	uint16_t x564 = UINT16_MAX;
	volatile int32_t t124 = 152;

    t124 = (x561^(x562|(x563-x564)));

    if (t124 != 190607742) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x565 = -1;
	volatile uint32_t x567 = 6938U;
	uint32_t t125 = 21437U;

    t125 = (x565^(x566|(x567-x568)));

    if (t125 != 4294960192U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x569 = 1U;
	int16_t x570 = INT16_MAX;
	int16_t x572 = -4;
	int32_t t126 = 18040545;

    t126 = (x569^(x570|(x571-x572)));

    if (t126 != -2) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x573 = INT16_MAX;
	volatile int32_t x575 = INT32_MIN;
	int64_t x576 = -40794309LL;
	volatile int64_t t127 = 12419304222LL;

    t127 = (x573^(x574|(x575-x576)));

    if (t127 != -32768LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x577 = -1;
	int8_t x578 = -7;
	int64_t x579 = INT64_MIN;
	static int32_t x580 = INT32_MIN;
	static volatile int64_t t128 = 7LL;

    t128 = (x577^(x578|(x579-x580)));

    if (t128 != 6LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x586 = 3U;
	uint8_t x587 = UINT8_MAX;
	uint16_t x588 = 60U;

    t129 = (x585^(x586|(x587-x588)));

    if (t129 != 206) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x589 = INT32_MAX;
	int16_t x590 = -1;
	uint16_t x591 = 1U;
	volatile int32_t t130 = INT32_MIN;

    t130 = (x589^(x590|(x591-x592)));

    if (t130 != INT32_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x593 = -43;
	int64_t x594 = 1825430LL;
	volatile int8_t x595 = INT8_MIN;
	int64_t t131 = -11615057552LL;

    t131 = (x593^(x594|(x595-x596)));

    if (t131 != 322LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x597 = -1;
	uint64_t x598 = UINT64_MAX;
	uint64_t x600 = UINT64_MAX;
	volatile uint64_t t132 = 24443LLU;

    t132 = (x597^(x598|(x599-x600)));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x601 = 133LLU;
	int64_t x602 = INT64_MAX;
	int32_t x603 = -1;
	uint32_t x604 = 137932571U;
	static volatile uint64_t t133 = 114737LLU;

    t133 = (x601^(x602|(x603-x604)));

    if (t133 != 9223372036854775674LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x609 = -36614;
	static uint64_t x610 = 168800LLU;
	static volatile int8_t x611 = INT8_MIN;
	volatile uint64_t t134 = 678451LLU;

    t134 = (x609^(x610|(x611-x612)));

    if (t134 != 18446744073709391642LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x613 = 156311U;
	volatile int64_t x614 = INT64_MIN;
	static int64_t x616 = INT64_MIN;
	volatile int64_t t135 = -10143LL;

    t135 = (x613^(x614|(x615-x616)));

    if (t135 != -9223372036854619497LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x621 = UINT8_MAX;
	int8_t x624 = INT8_MAX;
	int32_t t136 = 609;

    t136 = (x621^(x622|(x623-x624)));

    if (t136 != -32964) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x625 = -11393;
	uint16_t x627 = 1390U;
	int16_t x628 = -901;
	volatile int32_t t137 = 787805984;

    t137 = (x625^(x626|(x627-x628)));

    if (t137 != -9340) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x633 = 26;
	volatile uint16_t x634 = 3U;
	int8_t x635 = -1;
	int8_t x636 = INT8_MAX;
	int32_t t138 = 8153;

    t138 = (x633^(x634|(x635-x636)));

    if (t138 != -103) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x637 = INT32_MAX;
	uint32_t x638 = UINT32_MAX;
	uint64_t x639 = 4402966802274277044LLU;
	int32_t x640 = INT32_MIN;
	volatile uint64_t t139 = 2040667736345642LLU;

    t139 = (x637^(x638|(x639-x640)));

    if (t139 != 4402966806310944768LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x641 = UINT64_MAX;
	int16_t x643 = INT16_MAX;
	uint64_t t140 = 166LLU;

    t140 = (x641^(x642|(x643-x644)));

    if (t140 != 56968913599473887LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x646 = UINT32_MAX;
	uint64_t x647 = UINT64_MAX;
	uint8_t x648 = 40U;
	uint64_t t141 = 1604896762089192LLU;

    t141 = (x645^(x646|(x647-x648)));

    if (t141 != 18446744072536202312LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x649 = INT64_MAX;
	uint16_t x650 = UINT16_MAX;
	uint64_t x651 = 502917654LLU;
	uint32_t x652 = UINT32_MAX;
	volatile uint64_t t142 = 365727LLU;

    t142 = (x649^(x650|(x651-x652)));

    if (t142 != 9223372040646819840LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int8_t x653 = INT8_MIN;
	volatile uint32_t x654 = UINT32_MAX;
	uint8_t x655 = 3U;
	int32_t x656 = 116788453;
	uint32_t t143 = 40U;

    t143 = (x653^(x654|(x655-x656)));

    if (t143 != 127U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x657 = -1;
	int16_t x658 = 3759;
	int8_t x659 = -1;
	uint64_t x660 = UINT64_MAX;

    t144 = (x657^(x658|(x659-x660)));

    if (t144 != 18446744073709547856LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x661 = -1;
	static int16_t x662 = INT16_MIN;
	int16_t x663 = INT16_MAX;
	int8_t x664 = INT8_MIN;

    t145 = (x661^(x662|(x663-x664)));

    if (t145 != 32640) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x665 = 3837LLU;
	static int8_t x666 = INT8_MAX;
	volatile int16_t x667 = -1;
	int16_t x668 = INT16_MIN;

    t146 = (x665^(x666|(x667-x668)));

    if (t146 != 28930LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x673 = INT8_MIN;
	volatile uint16_t x674 = UINT16_MAX;
	uint32_t x675 = 4166506U;
	volatile uint64_t t147 = 46388LLU;

    t147 = (x673^(x674|(x675-x676)));

    if (t147 != 3286564991LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x677 = INT64_MIN;
	volatile int64_t x679 = INT64_MAX;
	uint8_t x680 = 2U;
	int64_t t148 = -189384LL;

    t148 = (x677^(x678|(x679-x680)));

    if (t148 != -3LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x685 = INT32_MAX;
	static int64_t x686 = 1LL;
	int8_t x687 = INT8_MIN;
	int64_t x688 = INT64_MIN;

    t149 = (x685^(x686|(x687-x688)));

    if (t149 != 9223372034707292286LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x689 = 57959004LLU;
	uint16_t x690 = 9U;
	uint32_t x691 = 701795U;
	static volatile uint32_t x692 = UINT32_MAX;
	static volatile uint64_t t150 = 8849755259530505656LLU;

    t150 = (x689^(x690|(x691-x692)));

    if (t150 != 58644273LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x693 = INT32_MIN;
	int64_t x694 = INT64_MAX;
	uint32_t x695 = 119U;
	int8_t x696 = INT8_MAX;
	volatile int64_t t151 = -72133736478137414LL;

    t151 = (x693^(x694|(x695-x696)));

    if (t151 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x697 = 2;
	int16_t x698 = INT16_MIN;
	uint8_t x699 = 31U;
	int64_t x700 = -1LL;
	volatile int64_t t152 = -58449481LL;

    t152 = (x697^(x698|(x699-x700)));

    if (t152 != -32734LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x702 = 3;
	int64_t x703 = -2195137527993323LL;
	uint64_t x704 = 53333563LLU;
	volatile uint64_t t153 = 63LLU;

    t153 = (x701^(x702|(x703-x704)));

    if (t153 != 18444548936196863448LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x709 = INT16_MIN;
	uint16_t x710 = 32U;
	volatile int16_t x711 = INT16_MAX;
	int16_t x712 = -1;
	volatile int32_t t154 = -88756333;

    t154 = (x709^(x710|(x711-x712)));

    if (t154 != -65504) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x718 = UINT32_MAX;
	int64_t t155 = -80949610LL;

    t155 = (x717^(x718|(x719-x720)));

    if (t155 != 994400023653288LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x721 = 27;
	volatile int64_t x722 = INT64_MAX;
	int32_t x723 = -873588;
	volatile uint16_t x724 = 20362U;
	static int64_t t156 = -2569946036077LL;

    t156 = (x721^(x722|(x723-x724)));

    if (t156 != -28LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x729 = -1LL;
	volatile int64_t x730 = INT64_MAX;
	static uint16_t x732 = 102U;
	int64_t t157 = INT64_MIN;

    t157 = (x729^(x730|(x731-x732)));

    if (t157 != INT64_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x733 = INT8_MAX;
	int64_t x734 = INT64_MIN;
	int8_t x735 = INT8_MAX;
	volatile int8_t x736 = -54;
	volatile int64_t t158 = 112168536575710378LL;

    t158 = (x733^(x734|(x735-x736)));

    if (t158 != -9223372036854775606LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x738 = 3676LLU;
	static uint16_t x739 = UINT16_MAX;
	volatile int64_t x740 = -2757933703LL;
	volatile uint64_t t159 = 18300473830669407LLU;

    t159 = (x737^(x738|(x739-x740)));

    if (t159 != 2758000348LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x745 = INT32_MIN;
	static int64_t x746 = -1LL;
	int16_t x747 = 14;
	int64_t x748 = -155771LL;
	volatile int64_t t160 = -1313186LL;

    t160 = (x745^(x746|(x747-x748)));

    if (t160 != 2147483647LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int32_t x749 = INT32_MAX;
	int8_t x752 = -1;
	volatile int64_t t161 = 1355310103752801LL;

    t161 = (x749^(x750|(x751-x752)));

    if (t161 != -2147483648LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x754 = -1;
	volatile int16_t x755 = INT16_MIN;
	int32_t t162 = 666;

    t162 = (x753^(x754|(x755-x756)));

    if (t162 != -65536) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x757 = 36U;
	int32_t x758 = -1;
	int64_t x759 = 5LL;
	static uint8_t x760 = UINT8_MAX;

    t163 = (x757^(x758|(x759-x760)));

    if (t163 != -37LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x761 = 1443;
	static volatile uint16_t x762 = 140U;
	static uint16_t x763 = UINT16_MAX;
	static int16_t x764 = INT16_MAX;

    t164 = (x761^(x762|(x763-x764)));

    if (t164 != 34095) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x769 = 44U;
	int32_t x772 = INT32_MAX;
	volatile uint32_t t165 = 5814327U;

    t165 = (x769^(x770|(x771-x772)));

    if (t165 != 4294939483U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x773 = 119547034341LLU;
	static int16_t x774 = -1;
	static int64_t x775 = -49010592715651LL;
	int8_t x776 = INT8_MIN;
	static uint64_t t166 = 242198003996LLU;

    t166 = (x773^(x774|(x775-x776)));

    if (t166 != 18446743954162517274LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x778 = 1409;
	static uint32_t x780 = UINT32_MAX;
	volatile uint32_t t167 = 1549454U;

    t167 = (x777^(x778|(x779-x780)));

    if (t167 != 2147485057U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x781 = 596190453LLU;
	static uint64_t x782 = 510443445LLU;
	int8_t x783 = -1;
	uint64_t x784 = UINT64_MAX;

    t168 = (x781^(x782|(x783-x784)));

    if (t168 != 1038457664LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x785 = INT16_MIN;
	static volatile uint8_t x786 = UINT8_MAX;
	volatile uint16_t x787 = UINT16_MAX;
	volatile uint16_t x788 = UINT16_MAX;

    t169 = (x785^(x786|(x787-x788)));

    if (t169 != -32513) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x789 = INT8_MIN;
	int8_t x790 = -1;
	int8_t x791 = INT8_MIN;
	uint32_t x792 = 10U;

    t170 = (x789^(x790|(x791-x792)));

    if (t170 != 127U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x793 = INT8_MAX;
	volatile int64_t x794 = INT64_MIN;
	int16_t x795 = -4055;
	uint64_t x796 = 753812LLU;
	volatile uint64_t t171 = 127LLU;

    t171 = (x793^(x794|(x795-x796)));

    if (t171 != 18446744073708793834LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x799 = UINT64_MAX;
	int32_t x800 = INT32_MIN;

    t172 = (x797^(x798|(x799-x800)));

    if (t172 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x802 = 333;
	static int16_t x803 = -1;
	int32_t t173 = 117486476;

    t173 = (x801^(x802|(x803-x804)));

    if (t173 != -224) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x805 = -1;
	uint16_t x806 = UINT16_MAX;
	int32_t x807 = 0;
	int16_t x808 = -1979;

    t174 = (x805^(x806|(x807-x808)));

    if (t174 != -65536) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x809 = INT8_MIN;
	int8_t x810 = INT8_MAX;
	static int64_t x811 = INT64_MAX;
	volatile uint8_t x812 = UINT8_MAX;
	volatile int64_t t175 = -26855012904685790LL;

    t175 = (x809^(x810|(x811-x812)));

    if (t175 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x813 = 230390487LLU;
	int32_t x814 = -1;
	uint16_t x815 = UINT16_MAX;
	static int8_t x816 = INT8_MAX;
	static uint64_t t176 = 24965LLU;

    t176 = (x813^(x814|(x815-x816)));

    if (t176 != 18446744073479161128LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x817 = 443U;
	int16_t x820 = -1;
	int32_t t177 = 2959;

    t177 = (x817^(x818|(x819-x820)));

    if (t177 != -453) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x821 = INT8_MIN;
	int16_t x822 = INT16_MIN;
	uint16_t x823 = 41U;
	int64_t x824 = 1021232246873006LL;
	int64_t t178 = 1135738933LL;

    t178 = (x821^(x822|(x823-x824)));

    if (t178 != 23547LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x827 = INT16_MAX;
	uint32_t x828 = UINT32_MAX;
	uint32_t t179 = UINT32_MAX;

    t179 = (x825^(x826|(x827-x828)));

    if (t179 != UINT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x833 = 5955345LLU;
	int8_t x835 = -6;
	static int16_t x836 = 2;
	static volatile uint64_t t180 = 126892LLU;

    t180 = (x833^(x834|(x835-x836)));

    if (t180 != 18446744073703596265LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x837 = INT32_MIN;
	int8_t x838 = -1;
	int16_t x839 = -1;
	uint16_t x840 = 7U;
	static int32_t t181 = INT32_MAX;

    t181 = (x837^(x838|(x839-x840)));

    if (t181 != INT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x841 = 31;
	uint16_t x843 = 7520U;
	volatile uint64_t t182 = 2131496831628986713LLU;

    t182 = (x841^(x842|(x843-x844)));

    if (t182 != 8032LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x845 = INT32_MAX;
	uint8_t x846 = 124U;
	int16_t x848 = INT16_MIN;
	volatile int32_t t183 = 3433533;

    t183 = (x845^(x846|(x847-x848)));

    if (t183 != 2147450752) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x850 = -1;
	static volatile int32_t x851 = -31260;
	int8_t x852 = INT8_MAX;
	int32_t t184 = 10;

    t184 = (x849^(x850|(x851-x852)));

    if (t184 != -65536) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x857 = -1743LL;
	int8_t x859 = -45;
	int8_t x860 = INT8_MIN;

    t185 = (x857^(x858|(x859-x860)));

    if (t185 != 18446744073709056710LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x861 = 546LLU;
	int32_t x863 = INT32_MIN;
	uint32_t x864 = 43294U;
	volatile uint64_t t186 = 583589998280LLU;

    t186 = (x861^(x862|(x863-x864)));

    if (t186 != 2147439809LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x867 = 0;
	uint8_t x868 = 17U;
	volatile uint64_t t187 = 28249607844483497LLU;

    t187 = (x865^(x866|(x867-x868)));

    if (t187 != 111LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x873 = INT8_MIN;
	volatile uint8_t x876 = 126U;
	volatile uint64_t t188 = 235860842223858LLU;

    t188 = (x873^(x874|(x875-x876)));

    if (t188 != 18446744073709551540LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x882 = 54;
	uint8_t x883 = 58U;
	int8_t x884 = INT8_MAX;
	uint32_t t189 = 84U;

    t189 = (x881^(x882|(x883-x884)));

    if (t189 != 4294967231U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x885 = 1959387668733695LLU;
	static uint64_t x887 = 47288312458106355LLU;
	int32_t x888 = INT32_MAX;
	uint64_t t190 = 361776178LLU;

    t190 = (x885^(x886|(x887-x888)));

    if (t190 != 18444784686040818442LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x889 = 10809255U;
	volatile uint16_t x890 = 65U;
	int32_t x891 = -1;
	uint64_t x892 = 42990LLU;
	static uint64_t t191 = 67562LLU;

    t191 = (x889^(x890|(x891-x892)));

    if (t191 != 18446744073698785270LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x893 = INT64_MIN;
	int32_t x895 = -1;
	volatile int32_t x896 = INT32_MIN;

    t192 = (x893^(x894|(x895-x896)));

    if (t192 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x898 = -26669961635157LL;
	volatile int32_t x899 = -96649364;
	volatile int16_t x900 = INT16_MIN;

    t193 = (x897^(x898|(x899-x900)));

    if (t193 != -92422161LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x901 = INT32_MIN;
	int8_t x902 = -1;
	int64_t x903 = -1LL;
	volatile int8_t x904 = -1;
	int64_t t194 = 415926110243LL;

    t194 = (x901^(x902|(x903-x904)));

    if (t194 != 2147483647LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x905 = INT64_MAX;
	int16_t x907 = -28;
	uint8_t x908 = 4U;
	static volatile int64_t t195 = 38320725LL;

    t195 = (x905^(x906|(x907-x908)));

    if (t195 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x909 = UINT8_MAX;
	static uint64_t x910 = UINT64_MAX;
	uint16_t x912 = 15091U;

    t196 = (x909^(x910|(x911-x912)));

    if (t196 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x913 = 1;
	static volatile int64_t x914 = -169676584894814LL;
	volatile int16_t x915 = 4223;
	uint32_t x916 = UINT32_MAX;
	volatile int64_t t197 = 1272242LL;

    t197 = (x913^(x914|(x915-x916)));

    if (t197 != -169676584894813LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x917 = INT16_MIN;
	volatile int8_t x918 = 15;
	uint64_t x919 = UINT64_MAX;
	volatile int32_t x920 = INT32_MIN;
	static volatile uint64_t t198 = 7405855327LLU;

    t198 = (x917^(x918|(x919-x920)));

    if (t198 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x921 = 3U;
	int16_t x922 = -1;
	uint32_t x924 = 6679U;
	int64_t t199 = -40000329396685976LL;

    t199 = (x921^(x922|(x923-x924)));

    if (t199 != -4LL) { NG(); } else { ; }
	
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



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

int32_t x12 = -1;
int32_t t2 = 70;
volatile uint64_t x20 = UINT64_MAX;
uint32_t t5 = 399821U;
int64_t x40 = INT64_MIN;
static int64_t x42 = -1LL;
volatile int32_t x43 = INT32_MIN;
uint32_t x49 = UINT32_MAX;
uint32_t t10 = 469535371U;
static uint64_t t11 = 16141664LLU;
static int8_t x59 = INT8_MAX;
volatile int64_t x65 = -272LL;
int64_t x70 = INT64_MIN;
volatile int64_t t14 = -3697100LL;
static volatile uint32_t x73 = 280U;
volatile int64_t x77 = INT64_MIN;
static int32_t x84 = -318;
static volatile int8_t x94 = INT8_MAX;
uint8_t x98 = 0U;
volatile int16_t x106 = INT16_MAX;
static int64_t t21 = -33572014838877899LL;
volatile int8_t x117 = INT8_MAX;
int8_t x118 = INT8_MIN;
int32_t t22 = 110425489;
int8_t x128 = INT8_MIN;
int32_t x131 = -1;
volatile int16_t x132 = 854;
static uint64_t t24 = 52LLU;
volatile int32_t x134 = INT32_MAX;
int8_t x135 = -15;
volatile uint32_t t28 = 453U;
volatile int8_t x153 = INT8_MIN;
uint64_t x161 = 113217356093LLU;
int8_t x173 = INT8_MIN;
volatile int64_t t35 = 66913918067LL;
static uint32_t t37 = 5422U;
int8_t x189 = INT8_MIN;
volatile uint64_t x192 = UINT64_MAX;
volatile int64_t x205 = -1LL;
int16_t x207 = INT16_MIN;
int8_t x208 = 9;
volatile int64_t t42 = -30LL;
static volatile int16_t x214 = -1;
int64_t t43 = 159274785LL;
static int32_t x232 = INT32_MIN;
uint8_t x235 = 2U;
volatile uint8_t x237 = UINT8_MAX;
volatile uint64_t t49 = 153854971861LLU;
uint16_t x260 = 0U;
volatile int8_t x270 = INT8_MIN;
volatile uint32_t x281 = 41U;
static int32_t x284 = -1951;
volatile uint8_t x289 = 107U;
volatile uint16_t x294 = 29867U;
int8_t x296 = INT8_MAX;
static int16_t x303 = INT16_MAX;
uint64_t t60 = 71108790578137LLU;
int32_t x315 = INT32_MAX;
volatile int16_t x322 = INT16_MIN;
static int64_t x331 = 55829LL;
int32_t x337 = INT32_MIN;
uint8_t x339 = 0U;
uint64_t t66 = 28936585524355LLU;
static int8_t x342 = INT8_MIN;
int8_t x343 = -1;
uint16_t x344 = 4U;
int16_t x357 = INT16_MAX;
int32_t x358 = -248567420;
static int64_t x359 = -194844532208LL;
volatile int64_t x366 = INT64_MIN;
int64_t x367 = INT64_MIN;
int32_t x374 = INT32_MAX;
uint64_t t73 = 440LLU;
uint64_t t75 = 142564680343LLU;
uint32_t x390 = 1648893U;
volatile uint64_t t77 = 482930988948LLU;
volatile uint8_t x404 = 0U;
volatile uint16_t x419 = 7U;
uint64_t t82 = 51204495717534691LLU;
int32_t t84 = -430;
int8_t x450 = INT8_MAX;
static volatile uint64_t t86 = 13264LLU;
uint64_t x470 = UINT64_MAX;
volatile int16_t x474 = INT16_MAX;
static volatile int32_t x478 = INT32_MIN;
int64_t x495 = 9430575036167LL;
uint64_t x523 = UINT64_MAX;
static uint32_t x528 = 7U;
uint64_t t95 = 4002737608902LLU;
uint32_t x533 = 2303U;
static uint64_t t97 = 6683319997LLU;
int32_t x545 = 15174;
static volatile uint16_t x547 = 27304U;
int64_t x548 = -3232LL;
int32_t x551 = INT32_MIN;
volatile int8_t x559 = 1;
static volatile uint64_t t101 = 15163989LLU;
volatile int64_t x568 = 1380721548LL;
uint64_t x594 = 16066790499967LLU;
volatile int64_t t108 = 11074781LL;
int64_t x609 = INT64_MAX;
uint64_t x613 = 83LLU;
int64_t x616 = 349236710101LL;
static uint64_t t111 = 11886LLU;
volatile int64_t x632 = INT64_MIN;
int16_t x635 = INT16_MIN;
int8_t x639 = -1;
volatile int16_t x649 = INT16_MAX;
volatile int32_t x652 = 113;
int32_t x655 = -1;
int64_t x656 = INT64_MIN;
static uint8_t x658 = UINT8_MAX;
static int16_t x661 = -1;
uint16_t x662 = 4325U;
uint16_t x666 = 683U;
int8_t x668 = INT8_MIN;
int8_t x684 = INT8_MIN;
volatile int16_t x687 = 1;
int16_t x698 = INT16_MIN;
uint8_t x706 = 5U;
static int8_t x707 = 0;
uint8_t x747 = UINT8_MAX;
int16_t x748 = INT16_MIN;
static volatile int16_t x755 = INT16_MAX;
int64_t x768 = -17177LL;
volatile uint64_t t137 = 1LLU;
volatile int64_t t138 = 125940066619LL;
int32_t x781 = -1;
volatile int64_t x784 = 965239082LL;
volatile uint64_t t141 = 191LLU;
uint64_t t143 = 13113736635475LLU;
volatile int64_t t144 = 126082785517047LL;
static uint32_t x811 = UINT32_MAX;
int32_t x817 = 4;
int64_t t146 = 2290729703LL;
uint64_t x825 = 53LLU;
uint32_t x827 = UINT32_MAX;
static int16_t x828 = -1;
int64_t x836 = -2822095LL;
int8_t x840 = INT8_MIN;
int8_t x849 = INT8_MIN;
volatile uint64_t t153 = 2539LLU;
int64_t x853 = -1LL;
int64_t x854 = INT64_MAX;
int64_t t154 = -1308LL;
int64_t x858 = -41910752991LL;
static volatile int32_t x859 = INT32_MAX;
static uint8_t x870 = 6U;
static uint16_t x871 = 1U;
volatile int64_t t158 = -83258731664180LL;
volatile int8_t x881 = -1;
static volatile uint32_t t160 = 131206947U;
int16_t x908 = 5;
uint64_t t162 = 448673260323LLU;
int32_t x912 = INT32_MIN;
volatile uint64_t x939 = 380901583856877LLU;
int64_t x948 = -1LL;
static volatile int64_t t169 = 1858573LL;
int64_t x962 = INT64_MAX;
volatile uint32_t x966 = UINT32_MAX;
volatile int32_t x978 = -20660172;
static int32_t x984 = -1538655;
static int64_t t177 = 91157810808LL;
uint8_t x993 = 2U;
static int64_t x994 = -1LL;
static uint8_t x996 = 2U;
uint64_t x1001 = 3110972761320442982LLU;
volatile int32_t x1002 = INT32_MIN;
uint64_t x1030 = 6616975752LLU;
int64_t x1032 = INT64_MIN;
int8_t x1035 = -11;
int16_t x1036 = INT16_MAX;
uint32_t x1040 = 3U;
volatile uint64_t t186 = 271439LLU;
int64_t x1054 = -867343217LL;
uint16_t x1060 = 20U;
int64_t t190 = -124978334LL;
volatile int32_t x1069 = -17158;
uint8_t x1072 = 87U;
int32_t t193 = 0;
volatile uint16_t x1073 = 4629U;
uint32_t x1077 = 17540U;
int8_t x1085 = INT8_MAX;
static int16_t x1086 = -1;
uint8_t x1088 = 7U;


void f0(void) {
    	volatile uint64_t x1 = UINT64_MAX;
	int8_t x2 = -1;
	int32_t x3 = -3420214;
	int32_t x4 = 0;
	static uint64_t t0 = 456131193LLU;

    t0 = (x1*(x2^(x3^x4)));

    if (t0 != 18446744073706131403LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	uint32_t x6 = 1122388899U;
	int32_t x7 = -1493901;
	int64_t x8 = -1LL;
	volatile int64_t t1 = 181497LL;

    t1 = (x5*(x6^(x7^x8)));

    if (t1 != 4823496139142561745LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	volatile int8_t x10 = INT8_MIN;
	volatile uint16_t x11 = UINT16_MAX;

    t2 = (x9*(x10^(x11^x12)));

    if (t2 != -65408) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	static volatile int64_t x14 = INT64_MIN;
	static volatile uint64_t x15 = 16260967595567446LLU;
	int64_t x16 = INT64_MIN;
	uint64_t t3 = 126350LLU;

    t3 = (x13*(x14^(x15^x16)));

    if (t3 != 16365340221476918528LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x17 = 25U;
	static volatile int64_t x18 = -178738LL;
	uint64_t x19 = UINT64_MAX;
	volatile uint64_t t4 = 8711125994358655566LLU;

    t4 = (x17*(x18^(x19^x20)));

    if (t4 != 18446744073705083166LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x21 = 8U;
	int8_t x22 = 0;
	int32_t x23 = INT32_MIN;
	static uint32_t x24 = 0U;

    t5 = (x21*(x22^(x23^x24)));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x29 = -1;
	int64_t x30 = -1LL;
	int8_t x31 = INT8_MIN;
	int8_t x32 = INT8_MAX;
	volatile int64_t t6 = 220044864496LL;

    t6 = (x29*(x30^(x31^x32)));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x37 = 92983896007213583LLU;
	static int8_t x38 = 0;
	int16_t x39 = INT16_MAX;
	volatile uint64_t t7 = 213237LLU;

    t7 = (x37*(x38^(x39^x40)));

    if (t7 != 12313920343146233329LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x41 = INT8_MAX;
	static int32_t x44 = INT32_MIN;
	volatile int64_t t8 = 1977LL;

    t8 = (x41*(x42^(x43^x44)));

    if (t8 != -127LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x45 = UINT8_MAX;
	int32_t x46 = INT32_MAX;
	uint64_t x47 = 173412287414614385LLU;
	static volatile uint64_t x48 = 30612387722807772LLU;
	uint64_t t9 = 254262LLU;

    t9 = (x45*(x46^(x47^x48)));

    if (t9 != 202503288888246958LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x50 = 2;
	uint8_t x51 = 7U;
	volatile uint16_t x52 = 2244U;

    t10 = (x49*(x50^(x51^x52)));

    if (t10 != 4294965055U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x53 = UINT16_MAX;
	uint64_t x54 = 10888582LLU;
	int8_t x55 = 11;
	volatile uint32_t x56 = UINT32_MAX;

    t11 = (x53*(x54^(x55^x56)));

    if (t11 != 280757097997710LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x57 = INT16_MAX;
	static int32_t x58 = INT32_MIN;
	uint32_t x60 = UINT32_MAX;
	static volatile uint32_t t12 = 26904U;

    t12 = (x57*(x58^(x59^x60)));

    if (t12 != 2143289472U) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x66 = INT16_MAX;
	volatile uint32_t x67 = 487U;
	uint8_t x68 = 0U;
	static int64_t t13 = -56857453364283514LL;

    t13 = (x65*(x66^(x67^x68)));

    if (t13 != -8780160LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x69 = 15U;
	int8_t x71 = INT8_MIN;
	static volatile int64_t x72 = INT64_MIN;

    t14 = (x69*(x70^(x71^x72)));

    if (t14 != -1920LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x74 = INT8_MIN;
	int32_t x75 = INT32_MIN;
	int8_t x76 = INT8_MAX;
	volatile uint32_t t15 = 428120U;

    t15 = (x73*(x74^(x75^x76)));

    if (t15 != 4294967016U) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x78 = -1;
	uint64_t x79 = UINT64_MAX;
	int8_t x80 = -8;
	volatile uint64_t t16 = 71LLU;

    t16 = (x77*(x78^(x79^x80)));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x81 = INT8_MAX;
	uint32_t x82 = 779U;
	volatile int8_t x83 = INT8_MIN;
	uint32_t t17 = 257702U;

    t17 = (x81*(x82^(x83^x84)));

    if (t17 != 74295U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x93 = -1;
	static int8_t x95 = INT8_MAX;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t18 = 91;

    t18 = (x93*(x94^(x95^x96)));

    if (t18 != -65535) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x97 = -22771267533109620LL;
	volatile int32_t x99 = -1;
	volatile uint16_t x100 = 92U;
	int64_t t19 = 11569525262LL;

    t19 = (x97*(x98^(x99^x100)));

    if (t19 != 2117727880579194660LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x105 = -1;
	static int16_t x107 = -1;
	static volatile uint16_t x108 = 0U;
	volatile int32_t t20 = -4;

    t20 = (x105*(x106^(x107^x108)));

    if (t20 != 32768) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x113 = -1LL;
	uint32_t x114 = UINT32_MAX;
	int64_t x115 = 1161147978LL;
	volatile int64_t x116 = -1LL;

    t21 = (x113*(x114^(x115^x116)));

    if (t21 != 3133819318LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x119 = -28;
	int32_t x120 = 22;

    t22 = (x117*(x118^(x119^x120)));

    if (t22 != 14478) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x125 = UINT64_MAX;
	int8_t x126 = INT8_MIN;
	uint64_t x127 = UINT64_MAX;
	volatile uint64_t t23 = 112163LLU;

    t23 = (x125*(x126^(x127^x128)));

    if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x129 = 857648LLU;
	volatile int32_t x130 = INT32_MIN;

    t24 = (x129*(x130^(x131^x132)));

    if (t24 != 1841784322450864LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x133 = INT32_MIN;
	static uint64_t x136 = UINT64_MAX;
	volatile uint64_t t25 = 191362759LLU;

    t25 = (x133*(x134^(x135^x136)));

    if (t25 != 13835058087494418432LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x137 = UINT64_MAX;
	static int64_t x138 = INT64_MIN;
	static uint8_t x139 = UINT8_MAX;
	int64_t x140 = 18000900LL;
	uint64_t t26 = 311201699669LLU;

    t26 = (x137*(x138^(x139^x140)));

    if (t26 != 9223372036836774661LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x141 = 1065LL;
	volatile int8_t x142 = -1;
	uint8_t x143 = UINT8_MAX;
	uint32_t x144 = 45621U;
	static int64_t t27 = -209461290627792LL;

    t27 = (x141*(x142^(x143^x144)));

    if (t27 != 4574091424125LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x145 = INT32_MAX;
	uint32_t x146 = 575377553U;
	uint8_t x147 = 2U;
	int32_t x148 = INT32_MIN;

    t28 = (x145*(x146^(x147^x148)));

    if (t28 != 3719589741U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x149 = -74;
	volatile int16_t x150 = INT16_MIN;
	int64_t x151 = -1LL;
	int8_t x152 = INT8_MAX;
	volatile int64_t t29 = -5562LL;

    t29 = (x149*(x150^(x151^x152)));

    if (t29 != -2415360LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x154 = 16941728573691505LLU;
	int32_t x155 = INT32_MIN;
	static int16_t x156 = -10;
	uint64_t t30 = 10LLU;

    t30 = (x153*(x154^(x155^x156)));

    if (t30 != 16278202616629640320LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x157 = INT64_MIN;
	int8_t x158 = -1;
	int16_t x159 = -1;
	uint64_t x160 = 164376374094766506LLU;
	uint64_t t31 = 0LLU;

    t31 = (x157*(x158^(x159^x160)));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x162 = -15;
	uint32_t x163 = UINT32_MAX;
	static volatile uint64_t x164 = 447729114LLU;
	uint64_t t32 = 17069316LLU;

    t32 = (x161*(x162^(x163^x164)));

    if (t32 != 7147721863645159300LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x165 = 4169412LL;
	volatile int16_t x166 = INT16_MIN;
	volatile int8_t x167 = INT8_MIN;
	uint32_t x168 = 1U;
	volatile int64_t t33 = 554875461LL;

    t33 = (x165*(x166^(x167^x168)));

    if (t33 != 136093777092LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x169 = UINT8_MAX;
	static volatile int64_t x170 = -975700LL;
	int64_t x171 = -584943350801LL;
	volatile uint64_t x172 = 685568918LLU;
	volatile uint64_t t34 = 2638719340471LLU;

    t34 = (x169*(x170^(x171^x172)));

    if (t34 != 149058645635115LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x174 = INT8_MIN;
	volatile int64_t x175 = -1LL;
	uint16_t x176 = 31860U;

    t35 = (x173*(x174^(x175^x176)));

    if (t35 != -4064640LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x177 = 226U;
	int64_t x178 = -1LL;
	int16_t x179 = 1;
	static int16_t x180 = INT16_MIN;
	int64_t t36 = 10214268LL;

    t36 = (x177*(x178^(x179^x180)));

    if (t36 != 7405116LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x185 = INT32_MAX;
	volatile uint8_t x186 = 0U;
	uint32_t x187 = 34498469U;
	uint32_t x188 = UINT32_MAX;

    t37 = (x185*(x186^(x187^x188)));

    if (t37 != 34498470U) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x190 = -5;
	int8_t x191 = INT8_MIN;
	uint64_t t38 = 3340LLU;

    t38 = (x189*(x190^(x191^x192)));

    if (t38 != 15872LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x197 = 0U;
	int32_t x198 = INT32_MIN;
	uint16_t x199 = 1U;
	static volatile int64_t x200 = -1LL;
	int64_t t39 = 54LL;

    t39 = (x197*(x198^(x199^x200)));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x201 = UINT16_MAX;
	int8_t x202 = 11;
	uint64_t x203 = 544632526LLU;
	uint64_t x204 = UINT64_MAX;
	uint64_t t40 = 3474044663500548670LLU;

    t40 = (x201*(x202^(x203^x204)));

    if (t40 != 18446708381217484486LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x206 = -951468616;
	int64_t t41 = -6167725515813LL;

    t41 = (x205*(x206^(x207^x208)));

    if (t41 != -951467441LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x209 = 1U;
	int16_t x210 = INT16_MAX;
	int8_t x211 = INT8_MIN;
	static int64_t x212 = -1LL;

    t42 = (x209*(x210^(x211^x212)));

    if (t42 != 32640LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x213 = -6681LL;
	volatile int8_t x215 = -13;
	uint8_t x216 = 5U;

    t43 = (x213*(x214^(x215^x216)));

    if (t43 != -60129LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x217 = INT32_MIN;
	volatile int8_t x218 = -1;
	uint64_t x219 = 2145991533460LLU;
	int16_t x220 = -1;
	volatile uint64_t t44 = 2533LLU;

    t44 = (x217*(x218^(x219^x220)));

    if (t44 != 3204291575593041920LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x221 = UINT32_MAX;
	int8_t x222 = INT8_MIN;
	uint64_t x223 = 248891644LLU;
	uint32_t x224 = 3530U;
	static uint64_t t45 = 101239014654001LLU;

    t45 = (x221*(x222^(x223^x224)));

    if (t45 != 17377766665769829706LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x225 = INT8_MIN;
	volatile int16_t x226 = 122;
	static int64_t x227 = 175LL;
	int16_t x228 = INT16_MAX;
	int64_t t46 = 1089LL;

    t46 = (x225*(x226^(x227^x228)));

    if (t46 != -4166912LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x229 = -14675498LL;
	uint32_t x230 = UINT32_MAX;
	int16_t x231 = -1;
	volatile int64_t t47 = 2151806322LL;

    t47 = (x229*(x230^(x231^x232)));

    if (t47 != -31515391981256704LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x233 = 25U;
	int32_t x234 = INT32_MIN;
	int64_t x236 = -1LL;
	volatile int64_t t48 = -1LL;

    t48 = (x233*(x234^(x235^x236)));

    if (t48 != 53687091125LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x238 = 34U;
	static int64_t x239 = INT64_MAX;
	volatile uint64_t x240 = UINT64_MAX;

    t49 = (x237*(x238^(x239^x240)));

    if (t49 != 9223372036854784478LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x245 = 45U;
	uint64_t x246 = UINT64_MAX;
	int8_t x247 = INT8_MIN;
	int32_t x248 = INT32_MAX;
	uint64_t t50 = 1011LLU;

    t50 = (x245*(x246^(x247^x248)));

    if (t50 != 96636758400LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x257 = INT8_MIN;
	int16_t x258 = INT16_MAX;
	int16_t x259 = -1;
	volatile int32_t t51 = -258;

    t51 = (x257*(x258^(x259^x260)));

    if (t51 != 4194304) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x265 = 12105U;
	uint8_t x266 = UINT8_MAX;
	static uint8_t x267 = 54U;
	int8_t x268 = INT8_MIN;
	volatile int32_t t52 = 7099;

    t52 = (x265*(x266^(x267^x268)));

    if (t52 != -2215215) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x269 = INT32_MIN;
	uint32_t x271 = 7U;
	int16_t x272 = INT16_MIN;
	static uint32_t t53 = 193U;

    t53 = (x269*(x270^(x271^x272)));

    if (t53 != 2147483648U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x273 = UINT64_MAX;
	int64_t x274 = INT64_MAX;
	int32_t x275 = INT32_MIN;
	static int16_t x276 = INT16_MAX;
	volatile uint64_t t54 = 109374103LLU;

    t54 = (x273*(x274^(x275^x276)));

    if (t54 != 9223372034707324928LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x282 = 7U;
	volatile uint64_t x283 = 20477598219494979LLU;
	uint64_t t55 = 266LLU;

    t55 = (x281*(x282^(x283^x284)));

    if (t55 != 17607162546710303725LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x285 = 13092;
	static uint64_t x286 = UINT64_MAX;
	uint16_t x287 = 744U;
	volatile int32_t x288 = -4630;
	uint64_t t56 = 748281421644144LLU;

    t56 = (x285*(x286^(x287^x288)));

    if (t56 != 56937108LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x290 = UINT16_MAX;
	int8_t x291 = INT8_MAX;
	volatile uint16_t x292 = 24547U;
	int32_t t57 = 3;

    t57 = (x289*(x290^(x291^x292)));

    if (t57 != 4393313) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x293 = UINT64_MAX;
	static volatile int16_t x295 = 4;
	static volatile uint64_t t58 = 1061653727607189LLU;

    t58 = (x293*(x294^(x295^x296)));

    if (t58 != 18446744073709521712LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x297 = -678;
	volatile uint32_t x298 = 13070U;
	volatile uint32_t x299 = UINT32_MAX;
	static int16_t x300 = -501;
	uint32_t t59 = 34591058U;

    t59 = (x297*(x298^(x299^x300)));

    if (t59 != 4286119396U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x301 = UINT64_MAX;
	volatile uint8_t x302 = 58U;
	uint32_t x304 = UINT32_MAX;

    t60 = (x301*(x302^(x303^x304)));

    if (t60 != 18446744069414617030LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x309 = -93420469783989LL;
	int32_t x310 = INT32_MIN;
	static int8_t x311 = INT8_MIN;
	uint64_t x312 = 658189958348094LLU;
	uint64_t t61 = 3503LLU;

    t61 = (x309*(x310^(x311^x312)));

    if (t61 != 4466894210534402474LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x313 = INT8_MIN;
	int32_t x314 = INT32_MIN;
	uint64_t x316 = 723010019903LLU;
	static uint64_t t62 = 19173707LLU;

    t62 = (x313*(x314^(x315^x316)));

    if (t62 != 92545282547712LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x321 = UINT16_MAX;
	int8_t x323 = INT8_MIN;
	int16_t x324 = -1;
	int32_t t63 = 47;

    t63 = (x321*(x322^(x323^x324)));

    if (t63 != -2139127935) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x325 = UINT64_MAX;
	int8_t x326 = INT8_MIN;
	int16_t x327 = -2270;
	volatile int8_t x328 = INT8_MAX;
	volatile uint64_t t64 = 319162669930LLU;

    t64 = (x325*(x326^(x327^x328)));

    if (t64 != 18446744073709549347LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x329 = INT32_MAX;
	static volatile uint16_t x330 = 1342U;
	volatile uint64_t x332 = 14722703467772024LLU;
	uint64_t t65 = 87935878487LLU;

    t65 = (x329*(x330^(x331^x332)));

    if (t65 != 4825050033557297325LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x338 = 5LLU;
	int16_t x340 = INT16_MAX;

    t66 = (x337*(x338^(x339^x340)));

    if (t66 != 18446673717850275840LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x341 = INT16_MAX;
	volatile int32_t t67 = 2;

    t67 = (x341*(x342^(x343^x344)));

    if (t67 != 4030341) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x345 = INT8_MIN;
	uint8_t x346 = 112U;
	int16_t x347 = 22;
	int16_t x348 = -209;
	int32_t t68 = 63759322;

    t68 = (x345*(x346^(x347^x348)));

    if (t68 != 23424) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x349 = INT8_MIN;
	int32_t x350 = 12;
	static int8_t x351 = -6;
	uint8_t x352 = 30U;
	int32_t t69 = 2028;

    t69 = (x349*(x350^(x351^x352)));

    if (t69 != 3072) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x360 = UINT8_MAX;
	int64_t t70 = 333018805456LL;

    t70 = (x357*(x358^(x359^x360)));

    if (t70 != 6378869628220565LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x365 = INT16_MIN;
	int8_t x368 = INT8_MIN;
	volatile int64_t t71 = -3LL;

    t71 = (x365*(x366^(x367^x368)));

    if (t71 != 4194304LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x369 = 491200179528LLU;
	volatile int64_t x370 = -1LL;
	volatile uint8_t x371 = 16U;
	int8_t x372 = INT8_MIN;
	uint64_t t72 = 34655371255572834LLU;

    t72 = (x369*(x370^(x371^x372)));

    if (t72 != 54523219927608LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x373 = -24;
	static uint64_t x375 = UINT64_MAX;
	int8_t x376 = INT8_MIN;

    t73 = (x373*(x374^(x375^x376)));

    if (t73 != 18446744022169947136LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x377 = -1;
	int32_t x378 = INT32_MIN;
	int32_t x379 = -1;
	int64_t x380 = 102336505LL;
	int64_t t74 = -1181LL;

    t74 = (x377*(x378^(x379^x380)));

    if (t74 != -2045147142LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x385 = 35788712837371057LLU;
	volatile int8_t x386 = INT8_MIN;
	uint8_t x387 = 83U;
	volatile uint32_t x388 = UINT32_MAX;

    t75 = (x385*(x386^(x387^x388)));

    if (t75 != 1574703364844326508LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x389 = INT8_MAX;
	int8_t x391 = INT8_MIN;
	uint16_t x392 = 7U;
	uint32_t t76 = 64U;

    t76 = (x389*(x390^(x391^x392)));

    if (t76 != 4085572998U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x393 = 3537LLU;
	int8_t x394 = 10;
	int16_t x395 = -1;
	static int32_t x396 = -1;

    t77 = (x393*(x394^(x395^x396)));

    if (t77 != 35370LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x401 = -7;
	uint8_t x402 = UINT8_MAX;
	int64_t x403 = -1LL;
	volatile int64_t t78 = 4307LL;

    t78 = (x401*(x402^(x403^x404)));

    if (t78 != 1792LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x405 = 6;
	int64_t x406 = -37236671912350LL;
	int16_t x407 = -9;
	static uint16_t x408 = 2730U;
	int64_t t79 = -3287997245803987LL;

    t79 = (x405*(x406^(x407^x408)));

    if (t79 != 223420031464314LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x413 = INT32_MIN;
	uint64_t x414 = 2903LLU;
	int64_t x415 = 14LL;
	volatile int32_t x416 = 30;
	uint64_t t80 = 460129782016LLU;

    t80 = (x413*(x414^(x415^x416)));

    if (t80 != 18446737873924259840LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x417 = 0;
	static uint8_t x418 = 126U;
	uint64_t x420 = UINT64_MAX;
	static uint64_t t81 = 268165784572LLU;

    t81 = (x417*(x418^(x419^x420)));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x429 = INT8_MIN;
	uint64_t x430 = UINT64_MAX;
	int8_t x431 = INT8_MAX;
	int64_t x432 = -1LL;

    t82 = (x429*(x430^(x431^x432)));

    if (t82 != 18446744073709535360LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x437 = 61586LLU;
	uint64_t x438 = 29791599497689LLU;
	uint16_t x439 = UINT16_MAX;
	volatile uint16_t x440 = UINT16_MAX;
	uint64_t t83 = 8465344119524LLU;

    t83 = (x437*(x438^(x439^x440)));

    if (t83 != 1834745446664674754LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x441 = 12603U;
	int8_t x442 = INT8_MIN;
	uint16_t x443 = UINT16_MAX;
	static int16_t x444 = -1;

    t84 = (x441*(x442^(x443^x444)));

    if (t84 != 824337024) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x449 = 1300;
	static uint16_t x451 = UINT16_MAX;
	uint8_t x452 = 4U;
	static int32_t t85 = 29678;

    t85 = (x449*(x450^(x451^x452)));

    if (t85 != 85035600) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x465 = -688;
	uint64_t x466 = 65490568064LLU;
	uint16_t x467 = 99U;
	static int8_t x468 = INT8_MIN;

    t86 = (x465*(x466^(x467^x468)));

    if (t86 != 45057510847984LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x469 = -1;
	static volatile uint64_t x471 = UINT64_MAX;
	int8_t x472 = 19;
	volatile uint64_t t87 = 70073349LLU;

    t87 = (x469*(x470^(x471^x472)));

    if (t87 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x473 = 0;
	static volatile int32_t x475 = INT32_MIN;
	int8_t x476 = -1;
	int32_t t88 = -980843;

    t88 = (x473*(x474^(x475^x476)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x477 = -1;
	uint8_t x479 = UINT8_MAX;
	uint8_t x480 = 7U;
	int32_t t89 = -1167;

    t89 = (x477*(x478^(x479^x480)));

    if (t89 != 2147483400) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x485 = INT32_MIN;
	int16_t x486 = INT16_MAX;
	static volatile uint32_t x487 = 1305316481U;
	int32_t x488 = -2495071;
	uint32_t t90 = 784872616U;

    t90 = (x485*(x486^(x487^x488)));

    if (t90 != 2147483648U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x493 = INT8_MIN;
	volatile uint16_t x494 = 0U;
	static uint64_t x496 = 21402811079843426LLU;
	uint64_t t91 = 448924LLU;

    t91 = (x493*(x494^(x495^x496)));

    if (t91 != 15708389479306448256LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x497 = -1;
	static int8_t x498 = -1;
	int32_t x499 = INT32_MIN;
	static uint16_t x500 = 9344U;
	int32_t t92 = 2;

    t92 = (x497*(x498^(x499^x500)));

    if (t92 != -2147474303) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x501 = 18306764173396LLU;
	static volatile uint64_t x502 = UINT64_MAX;
	volatile uint16_t x503 = UINT16_MAX;
	int32_t x504 = -1;
	volatile uint64_t t93 = 3253774LLU;

    t93 = (x501*(x502^(x503^x504)));

    if (t93 != 1199733790103506860LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x521 = 7U;
	int32_t x522 = -18;
	int32_t x524 = INT32_MIN;
	static volatile uint64_t t94 = 288497LLU;

    t94 = (x521*(x522^(x523^x524)));

    if (t94 != 18446744058677166199LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x525 = INT8_MIN;
	static int32_t x526 = INT32_MIN;
	uint64_t x527 = 2066509LLU;

    t95 = (x525*(x526^(x527^x528)));

    if (t95 != 274613394176LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x534 = 887U;
	int64_t x535 = -425198893047LL;
	volatile int16_t x536 = -130;
	int64_t t96 = 380500660134339LL;

    t96 = (x533*(x534^(x535^x536)));

    if (t96 != 979233048349696LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x537 = 323181735154466LLU;
	int32_t x538 = INT32_MIN;
	int16_t x539 = -1;
	static uint64_t x540 = 6065605936950008LLU;

    t97 = (x537*(x538^(x539^x540)));

    if (t97 != 15268913430489223150LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x546 = 6469U;
	static volatile int64_t t98 = 270116710712LL;

    t98 = (x545*(x546^(x547^x548)));

    if (t98 != -495082098LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x549 = 14U;
	uint32_t x550 = 1216U;
	uint8_t x552 = 5U;
	volatile uint32_t t99 = 279U;

    t99 = (x549*(x550^(x551^x552)));

    if (t99 != 17094U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x553 = -61;
	int8_t x554 = -1;
	int64_t x555 = -1LL;
	int32_t x556 = INT32_MIN;
	volatile int64_t t100 = -42533715211381LL;

    t100 = (x553*(x554^(x555^x556)));

    if (t100 != 130996502528LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x557 = INT8_MIN;
	uint64_t x558 = UINT64_MAX;
	uint32_t x560 = 526696U;

    t101 = (x557*(x558^(x559^x560)));

    if (t101 != 67417344LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x565 = 1;
	static int16_t x566 = -1;
	int32_t x567 = -1;
	volatile int64_t t102 = -17692101503LL;

    t102 = (x565*(x566^(x567^x568)));

    if (t102 != 1380721548LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x569 = 40902421746980LLU;
	uint16_t x570 = UINT16_MAX;
	int8_t x571 = INT8_MIN;
	volatile int32_t x572 = -29;
	uint64_t t103 = 31LLU;

    t103 = (x569*(x570^(x571^x572)));

    if (t103 != 2676490869435383280LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x577 = 0U;
	static int16_t x578 = INT16_MIN;
	int32_t x579 = -1;
	uint16_t x580 = 527U;
	static volatile int32_t t104 = 555205526;

    t104 = (x577*(x578^(x579^x580)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x581 = 0LLU;
	uint64_t x582 = UINT64_MAX;
	int16_t x583 = INT16_MAX;
	uint16_t x584 = 3U;
	volatile uint64_t t105 = 450785LLU;

    t105 = (x581*(x582^(x583^x584)));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x593 = -1;
	static uint64_t x595 = 65178170416193965LLU;
	uint32_t x596 = 423117U;
	volatile uint64_t t106 = 39417101598393685LLU;

    t106 = (x593*(x594^(x595^x596)));

    if (t106 != 18381580763161873633LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x597 = UINT32_MAX;
	volatile int32_t x598 = 62;
	volatile uint16_t x599 = 258U;
	int8_t x600 = INT8_MIN;
	static uint32_t t107 = 7593U;

    t107 = (x597*(x598^(x599^x600)));

    if (t107 != 324U) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int16_t x605 = -1;
	int64_t x606 = INT64_MIN;
	int64_t x607 = -1LL;
	int64_t x608 = INT64_MAX;

    t108 = (x605*(x606^(x607^x608)));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x610 = UINT8_MAX;
	uint64_t x611 = 7256337534183902223LLU;
	int64_t x612 = INT64_MIN;
	uint64_t t109 = 16485527931262695LLU;

    t109 = (x609*(x610^(x611^x612)));

    if (t109 != 1967034502670873360LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x614 = INT8_MIN;
	uint32_t x615 = UINT32_MAX;
	uint64_t t110 = 262646946363LLU;

    t110 = (x613*(x614^(x615^x616)));

    if (t110 != 18446714953743938846LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x625 = UINT16_MAX;
	uint8_t x626 = 11U;
	uint64_t x627 = 15445806782243004LLU;
	static int64_t x628 = INT64_MIN;

    t111 = (x625*(x626^(x627^x628)));

    if (t111 != 6893395457124376393LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int16_t x629 = -1;
	int64_t x630 = -1835684LL;
	int32_t x631 = 2720;
	static volatile int64_t t112 = -1207710236100218LL;

    t112 = (x629*(x630^(x631^x632)));

    if (t112 != -9223372036852938748LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x633 = 0U;
	int32_t x634 = INT32_MAX;
	volatile int32_t x636 = INT32_MIN;
	uint32_t t113 = 1U;

    t113 = (x633*(x634^(x635^x636)));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x637 = 1991303013723895280LLU;
	int32_t x638 = INT32_MIN;
	int16_t x640 = 24;
	volatile uint64_t t114 = 4475081538659021660LLU;

    t114 = (x637*(x638^(x639^x640)));

    if (t114 != 9202963400748923792LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x645 = 1LL;
	int32_t x646 = -3;
	volatile int64_t x647 = 993850LL;
	static int64_t x648 = INT64_MIN;
	volatile int64_t t115 = -1371825760025003LL;

    t115 = (x645*(x646^(x647^x648)));

    if (t115 != 9223372036853781959LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x650 = 591U;
	static volatile uint32_t x651 = 7216U;
	volatile uint32_t t116 = 344U;

    t116 = (x649*(x650^(x651^x652)));

    if (t116 != 252109298U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x653 = 8244340U;
	volatile int64_t x654 = INT64_MAX;
	volatile int64_t t117 = -38057391LL;

    t117 = (x653*(x654^(x655^x656)));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x657 = 4187U;
	int64_t x659 = -349LL;
	int32_t x660 = INT32_MAX;
	volatile int64_t t118 = 7000LL;

    t118 = (x657*(x658^(x659^x660)));

    if (t118 != -8991512279823LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x663 = INT16_MIN;
	volatile int64_t x664 = INT64_MAX;
	int64_t t119 = 159199776399736040LL;

    t119 = (x661*(x662^(x663^x664)));

    if (t119 != 9223372036854747366LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x665 = UINT8_MAX;
	int16_t x667 = INT16_MAX;
	volatile int32_t t120 = 1;

    t120 = (x665*(x666^(x667^x668)));

    if (t120 != -8171220) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x673 = UINT8_MAX;
	int8_t x674 = 6;
	static volatile int32_t x675 = 0;
	static uint16_t x676 = 7U;
	int32_t t121 = -2;

    t121 = (x673*(x674^(x675^x676)));

    if (t121 != 255) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x677 = INT64_MIN;
	uint64_t x678 = 12628LLU;
	int16_t x679 = -71;
	uint64_t x680 = 100402809LLU;
	uint64_t t122 = 2LLU;

    t122 = (x677*(x678^(x679^x680)));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x681 = INT8_MIN;
	int8_t x682 = INT8_MIN;
	uint16_t x683 = UINT16_MAX;
	static volatile int32_t t123 = -192;

    t123 = (x681*(x682^(x683^x684)));

    if (t123 != -8388480) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x685 = 50928U;
	uint32_t x686 = 2U;
	int8_t x688 = INT8_MAX;
	uint32_t t124 = 1171U;

    t124 = (x685*(x686^(x687^x688)));

    if (t124 != 6315072U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x693 = UINT8_MAX;
	static uint64_t x694 = 1685877810105LLU;
	static int32_t x695 = 10967;
	static int8_t x696 = -21;
	static volatile uint64_t t125 = 23925327989324957LLU;

    t125 = (x693*(x694^(x695^x696)));

    if (t125 != 18446314174869687931LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x697 = UINT64_MAX;
	int32_t x699 = INT32_MIN;
	int32_t x700 = 0;
	static uint64_t t126 = 1535LLU;

    t126 = (x697*(x698^(x699^x700)));

    if (t126 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x701 = -1;
	int64_t x702 = INT64_MAX;
	int16_t x703 = INT16_MIN;
	int8_t x704 = -43;
	int64_t t127 = -3128220LL;

    t127 = (x701*(x702^(x703^x704)));

    if (t127 != -9223372036854743082LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int16_t x705 = -27;
	int8_t x708 = 0;
	int32_t t128 = -13;

    t128 = (x705*(x706^(x707^x708)));

    if (t128 != -135) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x709 = 762222;
	volatile uint64_t x710 = 7064LLU;
	int16_t x711 = INT16_MIN;
	int64_t x712 = INT64_MIN;
	uint64_t t129 = 6111LLU;

    t129 = (x709*(x710^(x711^x712)));

    if (t129 != 18446744054117397328LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x721 = INT32_MIN;
	static volatile uint16_t x722 = UINT16_MAX;
	uint32_t x723 = 11U;
	int16_t x724 = INT16_MIN;
	volatile uint32_t t130 = 97U;

    t130 = (x721*(x722^(x723^x724)));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x725 = 45U;
	int8_t x726 = 1;
	int32_t x727 = INT32_MIN;
	int8_t x728 = 19;
	volatile uint32_t t131 = 2010379U;

    t131 = (x725*(x726^(x727^x728)));

    if (t131 != 2147484458U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x733 = INT64_MAX;
	int32_t x734 = 2410;
	int8_t x735 = -1;
	volatile uint64_t x736 = UINT64_MAX;
	uint64_t t132 = 801309551LLU;

    t132 = (x733*(x734^(x735^x736)));

    if (t132 != 18446744073709549206LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x741 = 1355U;
	uint16_t x742 = 114U;
	static uint64_t x743 = UINT64_MAX;
	int32_t x744 = INT32_MIN;
	static volatile uint64_t t133 = 8009363176921994849LLU;

    t133 = (x741*(x742^(x743^x744)));

    if (t133 != 2909840187215LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x745 = -1;
	volatile int8_t x746 = 1;
	int32_t t134 = 0;

    t134 = (x745*(x746^(x747^x748)));

    if (t134 != 32514) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x753 = INT8_MAX;
	int16_t x754 = INT16_MIN;
	int16_t x756 = INT16_MIN;
	int32_t t135 = 12;

    t135 = (x753*(x754^(x755^x756)));

    if (t135 != 4161409) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x761 = 1;
	uint64_t x762 = 235113211193431134LLU;
	static int8_t x763 = INT8_MIN;
	volatile int16_t x764 = -3596;
	uint64_t t136 = 8400733030809316743LLU;

    t136 = (x761*(x762^(x763^x764)));

    if (t136 != 235113211193432618LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x765 = UINT32_MAX;
	volatile int16_t x766 = 76;
	volatile uint64_t x767 = UINT64_MAX;

    t137 = (x765*(x766^(x767^x768)));

    if (t137 != 74028056296620LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x769 = -6;
	volatile uint16_t x770 = UINT16_MAX;
	static int64_t x771 = -13023405997LL;
	static int32_t x772 = INT32_MIN;

    t138 = (x769*(x770^(x771^x772)));

    if (t138 != -89363213832LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x773 = 271454448798444LLU;
	int16_t x774 = 2;
	uint8_t x775 = 0U;
	int16_t x776 = INT16_MIN;
	volatile uint64_t t139 = 223LLU;

    t139 = (x773*(x774^(x775^x776)));

    if (t139 != 9552267604379735512LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x777 = 1516U;
	uint64_t x778 = UINT64_MAX;
	int64_t x779 = INT64_MIN;
	volatile int32_t x780 = INT32_MAX;
	volatile uint64_t t140 = 110736966850904204LLU;

    t140 = (x777*(x778^(x779^x780)));

    if (t140 != 18446740818124341248LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x782 = INT64_MIN;
	volatile uint64_t x783 = 1707324272LLU;

    t141 = (x781*(x782^(x783^x784)));

    if (t141 != 9223372035306302886LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x785 = INT8_MIN;
	int64_t x786 = INT64_MIN;
	uint64_t x787 = UINT64_MAX;
	volatile int8_t x788 = -1;
	volatile uint64_t t142 = 45888344179LLU;

    t142 = (x785*(x786^(x787^x788)));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x789 = 461LLU;
	uint8_t x790 = UINT8_MAX;
	uint64_t x791 = UINT64_MAX;
	static int32_t x792 = 173;

    t143 = (x789*(x790^(x791^x792)));

    if (t143 != 18446744073709513353LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x797 = 300785816LL;
	uint32_t x798 = 411109650U;
	uint32_t x799 = 4550U;
	volatile int8_t x800 = 0;

    t144 = (x797*(x798^(x799^x800)));

    if (t144 != 123657164910706144LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x809 = 1U;
	static int64_t x810 = -32548427070918LL;
	volatile int16_t x812 = INT16_MIN;
	volatile int64_t t145 = 371470LL;

    t145 = (x809*(x810^(x811^x812)));

    if (t145 != -32548427039291LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x818 = 53113LL;
	static uint16_t x819 = 2210U;
	int32_t x820 = -1;

    t146 = (x817*(x818^(x819^x820)));

    if (t146 != -204656LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x821 = 113;
	static int8_t x822 = INT8_MIN;
	volatile uint64_t x823 = 10041049LLU;
	int8_t x824 = INT8_MIN;
	volatile uint64_t t147 = 238LLU;

    t147 = (x821*(x822^(x823^x824)));

    if (t147 != 1134638537LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x826 = -7595489LL;
	uint64_t t148 = 130LLU;

    t148 = (x825*(x826^(x827^x828)));

    if (t148 != 18446744073306990699LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint32_t x833 = 18U;
	int16_t x834 = INT16_MAX;
	uint64_t x835 = 1765172797578123LLU;
	volatile uint64_t t149 = 13359861900513LLU;

    t149 = (x833*(x834^(x835^x836)));

    if (t149 != 18414970963304410330LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x837 = -65969937LL;
	int8_t x838 = -1;
	int32_t x839 = INT32_MAX;
	int64_t t150 = -12284626919LL;

    t150 = (x837*(x838^(x839^x840)));

    if (t150 != -141669352522938240LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x841 = UINT64_MAX;
	uint64_t x842 = 22795748279967LLU;
	int8_t x843 = 1;
	int64_t x844 = INT64_MIN;
	volatile uint64_t t151 = 1894983113534840565LLU;

    t151 = (x841*(x842^(x843^x844)));

    if (t151 != 9223349241106495842LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x845 = 5967863;
	uint8_t x846 = UINT8_MAX;
	uint64_t x847 = UINT64_MAX;
	uint16_t x848 = 6U;
	volatile uint64_t t152 = 17061167LLU;

    t152 = (x845*(x846^(x847^x848)));

    if (t152 != 18446744072217585866LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x850 = 552566LLU;
	uint64_t x851 = 12136704974LLU;
	uint16_t x852 = 2179U;

    t153 = (x849*(x850^(x851^x852)));

    if (t153 != 18446742520147305088LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x855 = -1;
	static uint16_t x856 = 664U;

    t154 = (x853*(x854^(x855^x856)));

    if (t154 != 9223372036854775144LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x857 = INT16_MAX;
	int8_t x860 = INT8_MIN;
	int64_t t155 = -12454543877LL;

    t155 = (x857*(x858^(x859^x860)));

    if (t155 != 1371007629809314LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x861 = 20;
	static uint8_t x862 = UINT8_MAX;
	static int8_t x863 = INT8_MIN;
	uint32_t x864 = 471931767U;
	volatile uint32_t t156 = 362U;

    t156 = (x861*(x862^(x863^x864)));

    if (t156 != 3446263968U) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x865 = 13LLU;
	uint16_t x866 = 326U;
	int8_t x867 = INT8_MIN;
	int32_t x868 = INT32_MAX;
	uint64_t t157 = 8578896995LLU;

    t157 = (x865*(x866^(x867^x868)));

    if (t157 != 18446744045792268261LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x869 = INT16_MIN;
	static int64_t x872 = 1193904811LL;

    t158 = (x869*(x870^(x871^x872)));

    if (t158 != -39121872879616LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x882 = INT16_MIN;
	int16_t x883 = INT16_MAX;
	volatile uint8_t x884 = 0U;
	volatile int32_t t159 = -14;

    t159 = (x881*(x882^(x883^x884)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x893 = UINT32_MAX;
	int32_t x894 = INT32_MIN;
	int32_t x895 = -1;
	uint16_t x896 = 2U;

    t160 = (x893*(x894^(x895^x896)));

    if (t160 != 2147483651U) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x901 = 0;
	int64_t x902 = INT64_MAX;
	volatile int32_t x903 = 1520;
	static int64_t x904 = 5685491121550LL;
	volatile int64_t t161 = 249209425LL;

    t161 = (x901*(x902^(x903^x904)));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x905 = 3052U;
	volatile uint64_t x906 = UINT64_MAX;
	volatile int32_t x907 = -116450048;

    t162 = (x905*(x906^(x907^x908)));

    if (t162 != 355405528184LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x909 = 170603656726LLU;
	int64_t x910 = INT64_MIN;
	static int16_t x911 = -21;
	static volatile uint64_t t163 = 78382LLU;

    t163 = (x909*(x910^(x911^x912)));

    if (t163 != 15880422124931944498LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x913 = -10526;
	int8_t x914 = INT8_MAX;
	int16_t x915 = 1825;
	int16_t x916 = INT16_MAX;
	static int32_t t164 = -4755;

    t164 = (x913*(x914^(x915^x916)));

    if (t164 != -325053406) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x925 = 254840LLU;
	int16_t x926 = 2206;
	uint16_t x927 = UINT16_MAX;
	int16_t x928 = INT16_MIN;
	uint64_t t165 = 29LLU;

    t165 = (x925*(x926^(x927^x928)));

    if (t165 != 18446744064796522616LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x933 = 51U;
	static int8_t x934 = INT8_MIN;
	int8_t x935 = 1;
	int8_t x936 = -1;
	volatile int32_t t166 = 71650233;

    t166 = (x933*(x934^(x935^x936)));

    if (t166 != 6426) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x937 = INT16_MIN;
	int8_t x938 = INT8_MAX;
	uint32_t x940 = 7015329U;
	volatile uint64_t t167 = 0LLU;

    t167 = (x937*(x938^(x939^x940)));

    if (t167 != 5965360782675181568LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x941 = -96377;
	int64_t x942 = INT64_MAX;
	static uint64_t x943 = 6884997520369LLU;
	int32_t x944 = 70217068;
	static volatile uint64_t t168 = 252519847067LLU;

    t168 = (x941*(x942^(x943^x944)));

    if (t168 != 9886934156035842222LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x945 = -1;
	volatile uint16_t x946 = UINT16_MAX;
	int32_t x947 = 222;

    t169 = (x945*(x946^(x947^x948)));

    if (t169 != 65314LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x949 = INT8_MIN;
	volatile uint64_t x950 = 3LLU;
	int32_t x951 = INT32_MAX;
	uint8_t x952 = 1U;
	volatile uint64_t t170 = 3705735133839LLU;

    t170 = (x949*(x950^(x951^x952)));

    if (t170 != 18446743798831645056LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x953 = UINT16_MAX;
	static uint16_t x954 = 3692U;
	int16_t x955 = -1;
	uint64_t x956 = 25756120438LLU;
	uint64_t t171 = 3435607867391281LLU;

    t171 = (x953*(x954^(x955^x956)));

    if (t171 != 18445056146261949211LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x961 = UINT64_MAX;
	int8_t x963 = INT8_MIN;
	int8_t x964 = INT8_MAX;
	static uint64_t t172 = 145835LLU;

    t172 = (x961*(x962^(x963^x964)));

    if (t172 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x965 = 270565297484459LLU;
	static int16_t x967 = INT16_MAX;
	volatile int8_t x968 = 15;
	uint64_t t173 = 1LLU;

    t173 = (x965*(x966^(x967^x968)));

    if (t173 != 7599379740760717317LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x973 = INT16_MIN;
	volatile uint16_t x974 = 95U;
	int16_t x975 = INT16_MIN;
	uint64_t x976 = 3673780LLU;
	volatile uint64_t t174 = 746970LLU;

    t174 = (x973*(x974^(x975^x976)));

    if (t174 != 121207685120LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x977 = -1;
	static volatile int64_t x979 = -600680891461LL;
	uint64_t x980 = 126243097LLU;
	uint64_t t175 = 477503LLU;

    t175 = (x977*(x978^(x979^x980)));

    if (t175 != 18446743472986494314LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x981 = INT32_MAX;
	int64_t x982 = -1LL;
	int8_t x983 = INT8_MIN;
	volatile int64_t t176 = -13LL;

    t176 = (x981*(x982^(x983^x984)));

    if (t176 != -3304105454372318LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x985 = -108;
	uint32_t x986 = UINT32_MAX;
	int64_t x987 = -1LL;
	int16_t x988 = INT16_MIN;

    t177 = (x985*(x986^(x987^x988)));

    if (t177 != -463852929024LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x989 = 2031;
	int64_t x990 = INT64_MIN;
	uint64_t x991 = 24005818LLU;
	int8_t x992 = -1;
	static volatile uint64_t t178 = 388339720046524470LLU;

    t178 = (x989*(x990^(x991^x992)));

    if (t178 != 9223371988098957419LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x995 = 4U;
	int64_t t179 = 44025707783710007LL;

    t179 = (x993*(x994^(x995^x996)));

    if (t179 != -14LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x997 = 6;
	static uint32_t x998 = 22016576U;
	static uint64_t x999 = 52627153LLU;
	int32_t x1000 = INT32_MIN;
	volatile uint64_t t180 = 94096518LLU;

    t180 = (x997*(x998^(x999^x1000)));

    if (t180 != 18446744061068819302LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1003 = 461;
	uint8_t x1004 = 1U;
	static volatile uint64_t t181 = 3742234LLU;

    t181 = (x1001*(x1002^(x1003^x1004)));

    if (t181 != 6886010361312659272LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1013 = 1LLU;
	volatile int32_t x1014 = -20159;
	int32_t x1015 = INT32_MAX;
	int16_t x1016 = INT16_MIN;
	volatile uint64_t t182 = 5440156058LLU;

    t182 = (x1013*(x1014^(x1015^x1016)));

    if (t182 != 2147471038LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1021 = INT8_MIN;
	static int64_t x1022 = -1LL;
	static int16_t x1023 = -7;
	int8_t x1024 = 9;
	static int64_t t183 = -177039696777LL;

    t183 = (x1021*(x1022^(x1023^x1024)));

    if (t183 != -1920LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1029 = 6312017973949169285LLU;
	uint8_t x1031 = 41U;
	volatile uint64_t t184 = 52091637421950100LLU;

    t184 = (x1029*(x1030^(x1031^x1032)));

    if (t184 != 1685832282896842405LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x1033 = -1;
	int64_t x1034 = -6690248832LL;
	volatile int64_t t185 = 276912711553LL;

    t185 = (x1033*(x1034^(x1035^x1036)));

    if (t185 != -6690269066LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x1037 = 90U;
	static uint64_t x1038 = UINT64_MAX;
	int32_t x1039 = -19;

    t186 = (x1037*(x1038^(x1039^x1040)));

    if (t186 != 18446743687162496506LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1045 = 1167U;
	int16_t x1046 = -1;
	static uint64_t x1047 = UINT64_MAX;
	int32_t x1048 = INT32_MAX;
	uint64_t t187 = 3793780317989LLU;

    t187 = (x1045*(x1046^(x1047^x1048)));

    if (t187 != 2506113416049LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1049 = -1LL;
	int64_t x1050 = -1LL;
	int16_t x1051 = INT16_MIN;
	static int32_t x1052 = INT32_MIN;
	static volatile int64_t t188 = 8563644265052129LL;

    t188 = (x1049*(x1050^(x1051^x1052)));

    if (t188 != 2147450881LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1053 = INT16_MAX;
	int8_t x1055 = 0;
	static uint16_t x1056 = 3070U;
	int64_t t189 = -462622LL;

    t189 = (x1053*(x1054^(x1055^x1056)));

    if (t189 != -28420143902577LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int16_t x1057 = 2;
	int64_t x1058 = INT64_MIN;
	static int64_t x1059 = INT64_MIN;

    t190 = (x1057*(x1058^(x1059^x1060)));

    if (t190 != 40LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x1061 = INT8_MIN;
	int32_t x1062 = -1;
	int16_t x1063 = 477;
	int64_t x1064 = 213482691520645LL;
	int64_t t191 = 2146539256427LL;

    t191 = (x1061*(x1062^(x1063^x1064)));

    if (t191 != 27325784514669696LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1065 = 9331581598LLU;
	static volatile uint64_t x1066 = UINT64_MAX;
	static uint8_t x1067 = 29U;
	volatile int32_t x1068 = -404197484;
	uint64_t t192 = 5181204789751LLU;

    t192 = (x1065*(x1066^(x1067^x1068)));

    if (t192 != 3771801896968115412LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1070 = -1;
	int16_t x1071 = INT16_MAX;

    t193 = (x1069*(x1070^(x1071^x1072)));

    if (t193 != 560740598) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1074 = -1;
	int8_t x1075 = INT8_MIN;
	int64_t x1076 = -1LL;
	volatile int64_t t194 = -154LL;

    t194 = (x1073*(x1074^(x1075^x1076)));

    if (t194 != -592512LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1078 = -1LL;
	static int16_t x1079 = INT16_MAX;
	int64_t x1080 = -1LL;
	int64_t t195 = 28184483021LL;

    t195 = (x1077*(x1078^(x1079^x1080)));

    if (t195 != 574733180LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int8_t x1087 = INT8_MIN;
	static volatile int32_t t196 = 33784;

    t196 = (x1085*(x1086^(x1087^x1088)));

    if (t196 != 15240) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x1089 = INT16_MIN;
	int32_t x1090 = 2623;
	static volatile int8_t x1091 = INT8_MAX;
	int16_t x1092 = -330;
	int32_t t197 = 0;

    t197 = (x1089*(x1090^(x1091^x1092)));

    if (t197 != 92602368) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1093 = 6;
	int8_t x1094 = 0;
	uint32_t x1095 = 364643107U;
	int8_t x1096 = -1;
	volatile uint32_t t198 = 238U;

    t198 = (x1093*(x1094^(x1095^x1096)));

    if (t198 != 2107108648U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1097 = 5;
	int8_t x1098 = 21;
	int8_t x1099 = -7;
	volatile uint8_t x1100 = UINT8_MAX;
	static volatile int32_t t199 = 311818923;

    t199 = (x1097*(x1098^(x1099^x1100)));

    if (t199 != -1185) { NG(); } else { ; }
	
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



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

static uint32_t t0 = 28U;
int8_t x15 = -2;
int64_t x22 = 1956840LL;
int64_t x51 = INT64_MIN;
int64_t x53 = INT64_MIN;
volatile uint32_t t14 = 914U;
uint64_t x86 = 182203780LLU;
int16_t x91 = -3;
int32_t x92 = INT32_MAX;
volatile int32_t t18 = 15017;
uint32_t x106 = 29009U;
int32_t x107 = 59588;
static uint32_t x114 = 34754U;
int64_t x115 = INT64_MIN;
uint32_t x118 = 7U;
volatile uint32_t t23 = 2U;
uint8_t x141 = UINT8_MAX;
int16_t x143 = INT16_MIN;
int32_t x147 = 176083599;
volatile uint16_t x151 = 31U;
volatile int32_t t30 = -433590;
static volatile int64_t x164 = -245LL;
static int32_t x167 = -101;
volatile int8_t x168 = -1;
volatile int32_t t33 = -474;
uint8_t x173 = 3U;
volatile int32_t t34 = 41657303;
int8_t x182 = INT8_MIN;
volatile int32_t t36 = -753295;
int8_t x189 = -1;
static int64_t x192 = INT64_MIN;
static uint32_t x193 = 806575U;
int64_t x195 = -354824226327837102LL;
uint32_t t38 = 63U;
static volatile uint64_t x198 = UINT64_MAX;
int32_t t40 = 458471465;
volatile uint64_t t43 = 2147LLU;
volatile uint16_t x231 = UINT16_MAX;
static uint32_t t45 = 410594001U;
int16_t x257 = INT16_MIN;
uint16_t x259 = UINT16_MAX;
volatile uint8_t x260 = UINT8_MAX;
int32_t x261 = -1;
int8_t x267 = 26;
volatile uint64_t t49 = 3663004426589LLU;
int32_t x294 = INT32_MIN;
volatile int64_t x295 = -1LL;
static volatile int32_t t53 = -8;
int8_t x306 = INT8_MAX;
volatile int32_t t54 = 4;
static int16_t x315 = -442;
volatile int16_t x316 = -7056;
static int8_t x321 = INT8_MIN;
static uint64_t x334 = 168346792010262515LLU;
uint64_t t61 = 29LLU;
int32_t x343 = INT32_MAX;
volatile int64_t x344 = -1LL;
volatile int64_t t62 = -126LL;
uint8_t x345 = UINT8_MAX;
static uint64_t x347 = 369427713483886LLU;
uint16_t x368 = UINT16_MAX;
int32_t t66 = 59;
int16_t x372 = INT16_MIN;
uint64_t x373 = 23354704763LLU;
int64_t x391 = 972093375897LL;
int64_t t71 = -18487873LL;
uint32_t x395 = 408U;
static int64_t x396 = INT64_MIN;
volatile int32_t t72 = 12749608;
int64_t x401 = -1LL;
uint64_t x405 = 165242746192295LLU;
int16_t x407 = -91;
volatile uint64_t t74 = 38490513841LLU;
uint64_t x411 = 12LLU;
volatile int32_t x419 = INT32_MIN;
int16_t x425 = INT16_MIN;
static uint8_t x430 = 64U;
int16_t x433 = 0;
volatile uint32_t x439 = 195U;
int32_t x444 = 2110685;
uint16_t x454 = 11930U;
int32_t x455 = INT32_MIN;
int16_t x458 = INT16_MIN;
int32_t x472 = -1;
int16_t x508 = -769;
uint32_t x511 = UINT32_MAX;
volatile int32_t t95 = 1270;
volatile uint64_t x525 = 975704500799LLU;
volatile uint64_t t97 = 93LLU;
volatile int64_t t98 = -1549LL;
uint8_t x533 = 20U;
int8_t x547 = -1;
uint32_t x562 = 1286U;
uint32_t t103 = 97273379U;
uint32_t x566 = 149210U;
static uint32_t x575 = 11105109U;
int16_t x584 = -1939;
int32_t t107 = -247106;
uint8_t x591 = 50U;
int64_t x605 = INT64_MAX;
int16_t x607 = INT16_MAX;
uint32_t x620 = 1U;
volatile int32_t t112 = -185809;
int64_t x628 = -66356958459305371LL;
int32_t t114 = 29;
static int32_t x629 = 1723;
int64_t x634 = -1LL;
int8_t x638 = INT8_MAX;
volatile uint16_t x642 = UINT16_MAX;
int64_t t119 = INT64_MAX;
uint16_t x649 = 110U;
uint64_t x654 = 59160145LLU;
uint64_t x656 = 764037884819LLU;
int32_t x664 = -4927959;
int8_t x665 = INT8_MIN;
static uint32_t t127 = 1U;
volatile uint8_t x694 = 61U;
volatile int32_t x700 = 54050399;
int8_t x705 = -19;
volatile uint32_t t131 = 1434U;
uint64_t t132 = 41960364777597LLU;
static int8_t x725 = INT8_MIN;
int16_t x726 = INT16_MIN;
uint32_t x732 = 6U;
uint8_t x743 = 0U;
volatile int16_t x748 = INT16_MIN;
uint16_t x754 = 43U;
static volatile uint16_t x764 = UINT16_MAX;
int32_t x770 = -1;
volatile uint64_t t144 = 5545318871423359LLU;
int32_t x784 = INT32_MIN;
uint8_t x789 = 0U;
int8_t x792 = INT8_MAX;
uint32_t x793 = 1U;
int16_t x806 = -2;
int64_t x808 = INT64_MIN;
volatile uint64_t x809 = UINT64_MAX;
uint64_t x820 = 570295LLU;
static int64_t x827 = -1LL;
int8_t x838 = 0;
static volatile int32_t t155 = -7;
int8_t x846 = INT8_MAX;
int8_t x847 = INT8_MIN;
volatile int16_t x857 = INT16_MIN;
volatile int64_t x859 = INT64_MAX;
uint32_t t159 = 106U;
volatile int32_t x861 = INT32_MIN;
uint64_t x862 = 22390LLU;
uint8_t x863 = 12U;
int8_t x864 = INT8_MAX;
volatile int32_t t161 = 45;
uint32_t x881 = UINT32_MAX;
static int16_t x883 = 3;
uint16_t x884 = UINT16_MAX;
int32_t x885 = -1;
uint32_t x889 = 46U;
int64_t x893 = 1LL;
int16_t x902 = -1;
volatile int32_t t166 = -27140653;
int64_t x905 = -1LL;
volatile int16_t x906 = 42;
volatile int64_t t167 = -3185271513330160251LL;
int16_t x912 = -1;
static int32_t t168 = 49444528;
int64_t t169 = -32762LL;
int32_t x918 = -1;
static int64_t x925 = INT64_MAX;
volatile int8_t x936 = -1;
uint16_t x939 = 8505U;
int32_t t174 = -9480;
uint16_t x948 = 3U;
static int8_t x951 = INT8_MIN;
int32_t x955 = -6;
static int64_t x956 = -701LL;
static volatile uint64_t t179 = 56996345264392406LLU;
int32_t t180 = -2765;
int64_t x971 = 96797254309LL;
uint32_t x976 = 53363U;
uint16_t x978 = 10U;
volatile int16_t x979 = 0;
int8_t x980 = 1;
volatile int32_t x996 = INT32_MAX;
uint64_t t186 = 231018LLU;
int16_t x1001 = INT16_MIN;
uint8_t x1003 = 0U;
volatile uint16_t x1007 = UINT16_MAX;
uint32_t x1013 = 31376U;
uint32_t t189 = 16551941U;
volatile uint32_t x1017 = UINT32_MAX;
uint8_t x1027 = UINT8_MAX;
static volatile uint16_t x1028 = 144U;
uint8_t x1031 = 1U;
int32_t x1041 = 7;
volatile uint8_t x1043 = 0U;
int32_t x1047 = -235067906;
uint16_t x1049 = 5U;
uint16_t x1061 = 2064U;
volatile int8_t x1062 = 1;
volatile int32_t t198 = -83649;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	uint32_t x2 = UINT32_MAX;
	int64_t x3 = INT64_MIN;
	int64_t x4 = INT64_MAX;

    t0 = (x1*(x2+(x3!=x4)));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = -56;
	static uint16_t x10 = 368U;
	volatile int16_t x11 = INT16_MAX;
	int32_t x12 = -15;
	int32_t t1 = 8125977;

    t1 = (x9*(x10+(x11!=x12)));

    if (t1 != -20664) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -1;
	int64_t x14 = 613362887322LL;
	int16_t x16 = INT16_MIN;
	static int64_t t2 = -249707LL;

    t2 = (x13*(x14+(x15!=x16)));

    if (t2 != -613362887323LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x21 = 8754647LLU;
	volatile int32_t x23 = 689528116;
	uint32_t x24 = 14340U;
	static uint64_t t3 = 2051084967388692453LLU;

    t3 = (x21*(x22+(x23!=x24)));

    if (t3 != 17131452190127LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x25 = 26997U;
	uint32_t x26 = UINT32_MAX;
	uint64_t x27 = UINT64_MAX;
	volatile uint8_t x28 = 13U;
	volatile uint32_t t4 = 1418413U;

    t4 = (x25*(x26+(x27!=x28)));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x37 = 220607046968LLU;
	int32_t x38 = -1;
	int16_t x39 = -371;
	volatile uint8_t x40 = 6U;
	uint64_t t5 = 1192893394LLU;

    t5 = (x37*(x38+(x39!=x40)));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x41 = UINT32_MAX;
	int8_t x42 = -1;
	volatile int32_t x43 = 283356;
	int32_t x44 = -12709101;
	volatile uint32_t t6 = 99052U;

    t6 = (x41*(x42+(x43!=x44)));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x45 = 0;
	int32_t x46 = INT32_MIN;
	uint64_t x47 = 6581769055772LLU;
	int8_t x48 = -1;
	int32_t t7 = -7937272;

    t7 = (x45*(x46+(x47!=x48)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x49 = -1;
	int16_t x50 = INT16_MIN;
	int8_t x52 = -1;
	volatile int32_t t8 = -6301;

    t8 = (x49*(x50+(x51!=x52)));

    if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x54 = -1LL;
	int64_t x55 = -1LL;
	int16_t x56 = INT16_MAX;
	int64_t t9 = 103010453791008LL;

    t9 = (x53*(x54+(x55!=x56)));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x57 = UINT8_MAX;
	volatile uint64_t x58 = 30099947060264LLU;
	uint16_t x59 = 9346U;
	int16_t x60 = 63;
	uint64_t t10 = 5595392953LLU;

    t10 = (x57*(x58+(x59!=x60)));

    if (t10 != 7675486500367575LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x61 = 60U;
	static volatile int32_t x62 = -1;
	volatile uint8_t x63 = UINT8_MAX;
	static volatile int16_t x64 = 174;
	int32_t t11 = -2090991;

    t11 = (x61*(x62+(x63!=x64)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x65 = INT8_MAX;
	int16_t x66 = INT16_MIN;
	uint32_t x67 = 8U;
	int16_t x68 = -1;
	volatile int32_t t12 = 25532;

    t12 = (x65*(x66+(x67!=x68)));

    if (t12 != -4161409) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x69 = 345328;
	uint32_t x70 = 2530039U;
	uint16_t x71 = UINT16_MAX;
	static int8_t x72 = INT8_MAX;
	uint32_t t13 = 412U;

    t13 = (x69*(x70+(x71!=x72)));

    if (t13 != 1815292032U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x73 = -1;
	uint32_t x74 = 519352121U;
	volatile uint64_t x75 = 21744LLU;
	int8_t x76 = INT8_MAX;

    t14 = (x73*(x74+(x75!=x76)));

    if (t14 != 3775615174U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x81 = 1U;
	static int8_t x82 = 0;
	static volatile uint8_t x83 = UINT8_MAX;
	int64_t x84 = INT64_MIN;
	volatile int32_t t15 = -851084250;

    t15 = (x81*(x82+(x83!=x84)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x85 = 5739U;
	volatile int32_t x87 = -1;
	volatile int8_t x88 = -1;
	volatile uint64_t t16 = 2086138855LLU;

    t16 = (x85*(x86+(x87!=x88)));

    if (t16 != 1045667493420LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x89 = 4815U;
	static uint32_t x90 = 7420583U;
	volatile uint32_t t17 = 524U;

    t17 = (x89*(x90+(x91!=x92)));

    if (t17 != 1370373592U) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x93 = -2566582;
	static int8_t x94 = -1;
	uint8_t x95 = 32U;
	int8_t x96 = INT8_MIN;

    t18 = (x93*(x94+(x95!=x96)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x101 = 136035882603382LLU;
	static uint16_t x102 = 714U;
	int8_t x103 = INT8_MAX;
	int8_t x104 = INT8_MIN;
	uint64_t t19 = 11677360LLU;

    t19 = (x101*(x102+(x103!=x104)));

    if (t19 != 97265656061418130LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x105 = 9513U;
	int32_t x108 = INT32_MIN;
	volatile uint32_t t20 = 47410U;

    t20 = (x105*(x106+(x107!=x108)));

    if (t20 != 275972130U) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint16_t x109 = UINT16_MAX;
	uint16_t x110 = 5908U;
	int16_t x111 = INT16_MIN;
	static volatile int16_t x112 = -1;
	int32_t t21 = 109876;

    t21 = (x109*(x110+(x111!=x112)));

    if (t21 != 387246315) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x113 = 0U;
	static uint64_t x116 = 5717069223574009763LLU;
	uint32_t t22 = 1591088U;

    t22 = (x113*(x114+(x115!=x116)));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x117 = INT16_MIN;
	static volatile int16_t x119 = -44;
	static volatile int8_t x120 = -1;

    t23 = (x117*(x118+(x119!=x120)));

    if (t23 != 4294705152U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x121 = 26U;
	int16_t x122 = 951;
	int8_t x123 = INT8_MIN;
	volatile int16_t x124 = 18;
	static volatile int32_t t24 = 3;

    t24 = (x121*(x122+(x123!=x124)));

    if (t24 != 24752) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x125 = INT16_MAX;
	int64_t x126 = -5708LL;
	uint32_t x127 = 458410109U;
	int64_t x128 = 974072930518007LL;
	static volatile int64_t t25 = -6016LL;

    t25 = (x125*(x126+(x127!=x128)));

    if (t25 != -187001269LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x129 = INT8_MIN;
	static int8_t x130 = INT8_MIN;
	int64_t x131 = INT64_MIN;
	static uint32_t x132 = UINT32_MAX;
	int32_t t26 = 92;

    t26 = (x129*(x130+(x131!=x132)));

    if (t26 != 16256) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x142 = INT8_MAX;
	static int32_t x144 = 2865;
	static int32_t t27 = 563406299;

    t27 = (x141*(x142+(x143!=x144)));

    if (t27 != 32640) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x145 = -1;
	int8_t x146 = INT8_MIN;
	static int32_t x148 = 50;
	int32_t t28 = -2;

    t28 = (x145*(x146+(x147!=x148)));

    if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x149 = INT32_MIN;
	static volatile uint64_t x150 = 52072931861LLU;
	int8_t x152 = INT8_MIN;
	uint64_t t29 = 2520912904414261LLU;

    t29 = (x149*(x150+(x151!=x152)));

    if (t29 != 17301438838903668736LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x153 = INT16_MIN;
	volatile uint16_t x154 = 1539U;
	uint8_t x155 = UINT8_MAX;
	int32_t x156 = INT32_MAX;

    t30 = (x153*(x154+(x155!=x156)));

    if (t30 != -50462720) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x157 = 811U;
	volatile uint32_t x158 = UINT32_MAX;
	int16_t x159 = -1;
	int64_t x160 = 20959581502631LL;
	uint32_t t31 = 2397U;

    t31 = (x157*(x158+(x159!=x160)));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x161 = 72;
	int16_t x162 = -17;
	static volatile int8_t x163 = 0;
	int32_t t32 = 4010301;

    t32 = (x161*(x162+(x163!=x164)));

    if (t32 != -1152) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x165 = -1;
	volatile int16_t x166 = INT16_MAX;

    t33 = (x165*(x166+(x167!=x168)));

    if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x174 = -1;
	int32_t x175 = INT32_MIN;
	int64_t x176 = -3LL;

    t34 = (x173*(x174+(x175!=x176)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x177 = 308631145U;
	int32_t x178 = INT32_MIN;
	int32_t x179 = 1440249;
	int8_t x180 = -1;
	volatile uint32_t t35 = 2095U;

    t35 = (x177*(x178+(x179!=x180)));

    if (t35 != 2456114793U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x181 = 4U;
	volatile uint8_t x183 = UINT8_MAX;
	int16_t x184 = INT16_MIN;

    t36 = (x181*(x182+(x183!=x184)));

    if (t36 != -508) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x190 = -12;
	volatile uint64_t x191 = 123LLU;
	volatile int32_t t37 = -863500;

    t37 = (x189*(x190+(x191!=x192)));

    if (t37 != 11) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x194 = INT16_MAX;
	uint64_t x196 = UINT64_MAX;

    t38 = (x193*(x194+(x195!=x196)));

    if (t38 != 660045824U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x197 = 7869U;
	int32_t x199 = -1;
	volatile int32_t x200 = INT32_MIN;
	volatile uint64_t t39 = 132497781505214LLU;

    t39 = (x197*(x198+(x199!=x200)));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x205 = -91;
	int16_t x206 = -1;
	uint16_t x207 = 5U;
	volatile uint8_t x208 = 1U;

    t40 = (x205*(x206+(x207!=x208)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x209 = INT8_MIN;
	volatile uint64_t x210 = UINT64_MAX;
	uint8_t x211 = 97U;
	int64_t x212 = INT64_MIN;
	uint64_t t41 = 35313472954LLU;

    t41 = (x209*(x210+(x211!=x212)));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x221 = 94U;
	uint16_t x222 = 3U;
	uint16_t x223 = 3054U;
	volatile int8_t x224 = 1;
	int32_t t42 = 9950;

    t42 = (x221*(x222+(x223!=x224)));

    if (t42 != 376) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint64_t x225 = 434173509793836540LLU;
	int64_t x226 = -1LL;
	int64_t x227 = -1LL;
	uint64_t x228 = UINT64_MAX;

    t43 = (x225*(x226+(x227!=x228)));

    if (t43 != 18012570563915715076LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x229 = 4U;
	uint64_t x230 = UINT64_MAX;
	uint8_t x232 = 0U;
	volatile uint64_t t44 = 1562426LLU;

    t44 = (x229*(x230+(x231!=x232)));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x253 = UINT32_MAX;
	uint16_t x254 = 15547U;
	volatile int8_t x255 = 25;
	int16_t x256 = -1;

    t45 = (x253*(x254+(x255!=x256)));

    if (t45 != 4294951748U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x258 = 65239397LLU;
	uint64_t t46 = 4LLU;

    t46 = (x257*(x258+(x259!=x260)));

    if (t46 != 18446741935944957952LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x262 = INT64_MIN;
	int64_t x263 = INT64_MIN;
	int32_t x264 = 1036388136;
	int64_t t47 = INT64_MAX;

    t47 = (x261*(x262+(x263!=x264)));

    if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int16_t x265 = 1;
	int8_t x266 = -1;
	static int64_t x268 = INT64_MIN;
	volatile int32_t t48 = 1;

    t48 = (x265*(x266+(x267!=x268)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x277 = INT16_MAX;
	uint64_t x278 = 8040747941792079LLU;
	int16_t x279 = -1;
	int8_t x280 = INT8_MIN;

    t49 = (x277*(x278+(x279!=x280)));

    if (t49 != 5216770776767362736LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x281 = -3;
	volatile int64_t x282 = -1LL;
	int16_t x283 = 1973;
	uint32_t x284 = 0U;
	volatile int64_t t50 = -189879600859110LL;

    t50 = (x281*(x282+(x283!=x284)));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x285 = -1;
	static volatile int8_t x286 = INT8_MAX;
	uint32_t x287 = UINT32_MAX;
	uint32_t x288 = UINT32_MAX;
	int32_t t51 = 3858769;

    t51 = (x285*(x286+(x287!=x288)));

    if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x293 = -1;
	volatile int16_t x296 = -81;
	int32_t t52 = INT32_MAX;

    t52 = (x293*(x294+(x295!=x296)));

    if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x297 = INT16_MIN;
	static uint16_t x298 = 2U;
	static int64_t x299 = 187901681661431133LL;
	volatile int32_t x300 = -1;

    t53 = (x297*(x298+(x299!=x300)));

    if (t53 != -98304) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x305 = 26;
	static uint8_t x307 = UINT8_MAX;
	int8_t x308 = INT8_MAX;

    t54 = (x305*(x306+(x307!=x308)));

    if (t54 != 3328) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x309 = INT32_MIN;
	uint32_t x310 = 5900U;
	uint32_t x311 = UINT32_MAX;
	int32_t x312 = 1;
	uint32_t t55 = 1U;

    t55 = (x309*(x310+(x311!=x312)));

    if (t55 != 2147483648U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x313 = 25U;
	volatile uint32_t x314 = 2U;
	uint32_t t56 = 43036205U;

    t56 = (x313*(x314+(x315!=x316)));

    if (t56 != 75U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x317 = 10352946804167LLU;
	int32_t x318 = 128015;
	uint64_t x319 = 16080LLU;
	int16_t x320 = -1;
	static uint64_t t57 = 2295101345353683128LLU;

    t57 = (x317*(x318+(x319!=x320)));

    if (t57 != 1325342838082242672LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x322 = 5370695U;
	int32_t x323 = 146;
	static uint8_t x324 = 94U;
	volatile uint32_t t58 = 15732902U;

    t58 = (x321*(x322+(x323!=x324)));

    if (t58 != 3607518208U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x325 = 51770816963LLU;
	int64_t x326 = INT64_MIN;
	int64_t x327 = INT64_MIN;
	int32_t x328 = 30;
	volatile uint64_t t59 = 45204146054LLU;

    t59 = (x325*(x326+(x327!=x328)));

    if (t59 != 9223372088625592771LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x329 = -1LL;
	static int32_t x330 = INT32_MIN;
	int16_t x331 = -1;
	int16_t x332 = INT16_MIN;
	static int64_t t60 = -22527140804882LL;

    t60 = (x329*(x330+(x331!=x332)));

    if (t60 != 2147483647LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x333 = 8;
	int8_t x335 = INT8_MAX;
	static int8_t x336 = 22;

    t61 = (x333*(x334+(x335!=x336)));

    if (t61 != 1346774336082100128LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x341 = INT32_MIN;
	int64_t x342 = -1LL;

    t62 = (x341*(x342+(x343!=x344)));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint8_t x346 = 3U;
	int32_t x348 = INT32_MIN;
	volatile int32_t t63 = -2956;

    t63 = (x345*(x346+(x347!=x348)));

    if (t63 != 1020) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x353 = 465U;
	uint16_t x354 = UINT16_MAX;
	static volatile uint8_t x355 = 33U;
	static volatile int16_t x356 = INT16_MIN;
	int32_t t64 = 412;

    t64 = (x353*(x354+(x355!=x356)));

    if (t64 != 30474240) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x357 = 966050U;
	int32_t x358 = INT32_MIN;
	static int32_t x359 = INT32_MIN;
	static uint8_t x360 = UINT8_MAX;
	uint32_t t65 = 110351872U;

    t65 = (x357*(x358+(x359!=x360)));

    if (t65 != 966050U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x365 = 2885U;
	int16_t x366 = INT16_MAX;
	uint8_t x367 = 28U;

    t66 = (x365*(x366+(x367!=x368)));

    if (t66 != 94535680) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x369 = 25477U;
	volatile int16_t x370 = INT16_MIN;
	static volatile uint64_t x371 = UINT64_MAX;
	static volatile uint32_t t67 = 379399U;

    t67 = (x369*(x370+(x371!=x372)));

    if (t67 != 3460162437U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x374 = -1;
	int32_t x375 = -73;
	int32_t x376 = INT32_MIN;
	static volatile uint64_t t68 = 498306257067LLU;

    t68 = (x373*(x374+(x375!=x376)));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x377 = -20LL;
	int32_t x378 = -1;
	static int64_t x379 = 1967LL;
	int8_t x380 = INT8_MIN;
	volatile int64_t t69 = 103254970LL;

    t69 = (x377*(x378+(x379!=x380)));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x385 = INT64_MAX;
	static int16_t x386 = -1;
	int32_t x387 = INT32_MIN;
	static volatile int32_t x388 = 2027890;
	static volatile int64_t t70 = 646889047LL;

    t70 = (x385*(x386+(x387!=x388)));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x389 = -1029LL;
	int16_t x390 = INT16_MIN;
	int16_t x392 = INT16_MIN;

    t71 = (x389*(x390+(x391!=x392)));

    if (t71 != 33717243LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int16_t x393 = -1;
	int32_t x394 = -1;

    t72 = (x393*(x394+(x395!=x396)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x402 = UINT64_MAX;
	volatile int16_t x403 = INT16_MIN;
	static int32_t x404 = INT32_MAX;
	volatile uint64_t t73 = 1302341280349431723LLU;

    t73 = (x401*(x402+(x403!=x404)));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x406 = -46;
	volatile int64_t x408 = -923438LL;

    t74 = (x405*(x406+(x407!=x408)));

    if (t74 != 18439308150130898341LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x409 = 3327U;
	int16_t x410 = -1;
	int64_t x412 = -765846LL;
	static uint32_t t75 = 6025053U;

    t75 = (x409*(x410+(x411!=x412)));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x413 = -10;
	static int32_t x414 = 25;
	volatile int32_t x415 = 3250315;
	int64_t x416 = -638010195824537LL;
	volatile int32_t t76 = -361;

    t76 = (x413*(x414+(x415!=x416)));

    if (t76 != -260) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x417 = 49LLU;
	uint32_t x418 = 45254U;
	int32_t x420 = INT32_MAX;
	volatile uint64_t t77 = 4816LLU;

    t77 = (x417*(x418+(x419!=x420)));

    if (t77 != 2217495LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x421 = INT8_MAX;
	static uint64_t x422 = 88732125940799727LLU;
	static volatile uint32_t x423 = UINT32_MAX;
	int8_t x424 = INT8_MIN;
	uint64_t t78 = 0LLU;

    t78 = (x421*(x422+(x423!=x424)));

    if (t78 != 11268979994481565456LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x426 = UINT8_MAX;
	volatile int8_t x427 = 0;
	uint16_t x428 = UINT16_MAX;
	volatile int32_t t79 = 4068962;

    t79 = (x425*(x426+(x427!=x428)));

    if (t79 != -8388608) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x429 = UINT32_MAX;
	int8_t x431 = INT8_MAX;
	uint8_t x432 = 1U;
	static volatile uint32_t t80 = 5U;

    t80 = (x429*(x430+(x431!=x432)));

    if (t80 != 4294967231U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x434 = -236493135LL;
	int8_t x435 = INT8_MIN;
	int16_t x436 = 5;
	volatile int64_t t81 = 38241455314LL;

    t81 = (x433*(x434+(x435!=x436)));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x437 = 8176044303671219129LLU;
	volatile int8_t x438 = 21;
	int64_t x440 = INT64_MAX;
	uint64_t t82 = 17LLU;

    t82 = (x437*(x438+(x439!=x440)));

    if (t82 != 13852278017380856294LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x441 = 23;
	volatile int8_t x442 = INT8_MIN;
	uint64_t x443 = 12686463645LLU;
	int32_t t83 = 66160141;

    t83 = (x441*(x442+(x443!=x444)));

    if (t83 != -2921) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x453 = -1;
	static uint64_t x456 = 45086259353625LLU;
	int32_t t84 = -2254200;

    t84 = (x453*(x454+(x455!=x456)));

    if (t84 != -11931) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x457 = 11095U;
	int32_t x459 = -1;
	int64_t x460 = -1LL;
	volatile int32_t t85 = 1;

    t85 = (x457*(x458+(x459!=x460)));

    if (t85 != -363560960) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x461 = -1;
	volatile uint8_t x462 = UINT8_MAX;
	uint64_t x463 = 6485447095355827LLU;
	uint64_t x464 = UINT64_MAX;
	static int32_t t86 = 243;

    t86 = (x461*(x462+(x463!=x464)));

    if (t86 != -256) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x469 = 1;
	volatile int32_t x470 = -1;
	volatile uint64_t x471 = UINT64_MAX;
	int32_t t87 = 1655696;

    t87 = (x469*(x470+(x471!=x472)));

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x473 = UINT64_MAX;
	uint32_t x474 = UINT32_MAX;
	static int8_t x475 = 0;
	volatile uint32_t x476 = 1117U;
	static uint64_t t88 = 3409980692146377224LLU;

    t88 = (x473*(x474+(x475!=x476)));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x477 = -1;
	int16_t x478 = INT16_MIN;
	volatile int8_t x479 = -1;
	static int64_t x480 = -1LL;
	volatile int32_t t89 = -2250;

    t89 = (x477*(x478+(x479!=x480)));

    if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x481 = -14;
	int16_t x482 = 3681;
	static int8_t x483 = -19;
	static uint64_t x484 = 13157915720000LLU;
	volatile int32_t t90 = -1177674;

    t90 = (x481*(x482+(x483!=x484)));

    if (t90 != -51548) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x485 = 2LLU;
	static int32_t x486 = INT32_MIN;
	volatile int64_t x487 = -1LL;
	volatile int8_t x488 = INT8_MIN;
	static uint64_t t91 = 15LLU;

    t91 = (x485*(x486+(x487!=x488)));

    if (t91 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x493 = INT8_MIN;
	int8_t x494 = -1;
	volatile int32_t x495 = INT32_MAX;
	static volatile int8_t x496 = INT8_MAX;
	int32_t t92 = 0;

    t92 = (x493*(x494+(x495!=x496)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x497 = 2U;
	int32_t x498 = 235972;
	int16_t x499 = -19;
	int32_t x500 = INT32_MAX;
	uint32_t t93 = 6815U;

    t93 = (x497*(x498+(x499!=x500)));

    if (t93 != 471946U) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x505 = 2745353LL;
	volatile int32_t x506 = INT32_MIN;
	static volatile int8_t x507 = 1;
	static volatile int64_t t94 = 22493782145LL;

    t94 = (x505*(x506+(x507!=x508)));

    if (t94 != -5895600672742391LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x509 = 127U;
	static volatile int8_t x510 = -1;
	int8_t x512 = INT8_MAX;

    t95 = (x509*(x510+(x511!=x512)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x517 = UINT64_MAX;
	uint16_t x518 = 57U;
	int32_t x519 = -1;
	static volatile int32_t x520 = 1856;
	uint64_t t96 = 21474685191355069LLU;

    t96 = (x517*(x518+(x519!=x520)));

    if (t96 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x526 = UINT16_MAX;
	int32_t x527 = -13916815;
	volatile uint64_t x528 = 358407764LLU;

    t97 = (x525*(x526+(x527!=x528)));

    if (t97 != 63943770164363264LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x529 = 103971475482LL;
	static uint16_t x530 = 6966U;
	uint16_t x531 = 21U;
	int16_t x532 = -1589;

    t98 = (x529*(x530+(x531!=x532)));

    if (t98 != 724369269683094LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x534 = -1;
	int64_t x535 = 44391LL;
	static volatile uint32_t x536 = 66982U;
	volatile int32_t t99 = -18918;

    t99 = (x533*(x534+(x535!=x536)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x545 = -1;
	uint64_t x546 = 888026233329449LLU;
	int64_t x548 = INT64_MIN;
	volatile uint64_t t100 = 35236LLU;

    t100 = (x545*(x546+(x547!=x548)));

    if (t100 != 18445856047476222166LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x549 = 452933U;
	int32_t x550 = 4189181;
	int32_t x551 = 21001;
	uint16_t x552 = 1U;
	volatile uint32_t t101 = 53719U;

    t101 = (x549*(x550+(x551!=x552)));

    if (t101 != 3338193270U) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x557 = 54;
	volatile int16_t x558 = INT16_MIN;
	uint16_t x559 = 3414U;
	int64_t x560 = 125528510LL;
	volatile int32_t t102 = 1375567;

    t102 = (x557*(x558+(x559!=x560)));

    if (t102 != -1769418) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x561 = -1;
	uint32_t x563 = 168992U;
	volatile uint8_t x564 = 8U;

    t103 = (x561*(x562+(x563!=x564)));

    if (t103 != 4294966009U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x565 = UINT64_MAX;
	static int16_t x567 = INT16_MAX;
	volatile int16_t x568 = INT16_MIN;
	static uint64_t t104 = 2355491LLU;

    t104 = (x565*(x566+(x567!=x568)));

    if (t104 != 18446744073709402405LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x569 = -3;
	static int8_t x570 = 7;
	int8_t x571 = 8;
	int64_t x572 = -2879LL;
	int32_t t105 = 8143948;

    t105 = (x569*(x570+(x571!=x572)));

    if (t105 != -24) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x573 = 11561832LLU;
	int16_t x574 = INT16_MAX;
	int16_t x576 = INT16_MIN;
	uint64_t t106 = 0LLU;

    t106 = (x573*(x574+(x575!=x576)));

    if (t106 != 378858110976LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x581 = 8U;
	volatile int8_t x582 = 28;
	static volatile int16_t x583 = 646;

    t107 = (x581*(x582+(x583!=x584)));

    if (t107 != 232) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x589 = INT8_MIN;
	uint16_t x590 = UINT16_MAX;
	volatile int16_t x592 = -1;
	int32_t t108 = 219;

    t108 = (x589*(x590+(x591!=x592)));

    if (t108 != -8388608) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x601 = UINT16_MAX;
	int8_t x602 = INT8_MIN;
	int8_t x603 = INT8_MIN;
	volatile uint8_t x604 = 73U;
	volatile int32_t t109 = 177265;

    t109 = (x601*(x602+(x603!=x604)));

    if (t109 != -8322945) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x606 = -1;
	static int64_t x608 = INT64_MIN;
	int64_t t110 = 0LL;

    t110 = (x605*(x606+(x607!=x608)));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x613 = INT64_MIN;
	volatile int16_t x614 = -1;
	int16_t x615 = INT16_MIN;
	uint8_t x616 = 10U;
	volatile int64_t t111 = 1030586153LL;

    t111 = (x613*(x614+(x615!=x616)));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x617 = 16468U;
	static int8_t x618 = 1;
	volatile int64_t x619 = -544756433164570LL;

    t112 = (x617*(x618+(x619!=x620)));

    if (t112 != 32936) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x621 = 3U;
	volatile int8_t x622 = INT8_MIN;
	static uint8_t x623 = 27U;
	static int64_t x624 = INT64_MIN;
	int32_t t113 = 117620619;

    t113 = (x621*(x622+(x623!=x624)));

    if (t113 != -381) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x625 = 21U;
	volatile int16_t x626 = -26;
	int64_t x627 = INT64_MAX;

    t114 = (x625*(x626+(x627!=x628)));

    if (t114 != -525) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int8_t x630 = -1;
	int16_t x631 = -1;
	int32_t x632 = INT32_MIN;
	int32_t t115 = 370125;

    t115 = (x629*(x630+(x631!=x632)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x633 = INT8_MIN;
	uint32_t x635 = 61U;
	uint32_t x636 = UINT32_MAX;
	int64_t t116 = 110317199LL;

    t116 = (x633*(x634+(x635!=x636)));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x637 = UINT32_MAX;
	volatile int8_t x639 = -1;
	uint16_t x640 = 3U;
	uint32_t t117 = 76334U;

    t117 = (x637*(x638+(x639!=x640)));

    if (t117 != 4294967168U) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x641 = -1;
	static uint16_t x643 = UINT16_MAX;
	static int64_t x644 = INT64_MIN;
	volatile int32_t t118 = -6966;

    t118 = (x641*(x642+(x643!=x644)));

    if (t118 != -65536) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x645 = -1;
	int64_t x646 = INT64_MIN;
	int16_t x647 = INT16_MIN;
	volatile int32_t x648 = 16403043;

    t119 = (x645*(x646+(x647!=x648)));

    if (t119 != INT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x650 = 5;
	static int16_t x651 = -12053;
	uint64_t x652 = UINT64_MAX;
	int32_t t120 = -505110;

    t120 = (x649*(x650+(x651!=x652)));

    if (t120 != 660) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x653 = -1;
	uint64_t x655 = 3LLU;
	static volatile uint64_t t121 = 1653529298395546LLU;

    t121 = (x653*(x654+(x655!=x656)));

    if (t121 != 18446744073650391470LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x657 = UINT64_MAX;
	volatile uint16_t x658 = 468U;
	static volatile int64_t x659 = INT64_MAX;
	int16_t x660 = -1575;
	volatile uint64_t t122 = 117387308440LLU;

    t122 = (x657*(x658+(x659!=x660)));

    if (t122 != 18446744073709551147LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int8_t x661 = INT8_MIN;
	volatile uint16_t x662 = 1U;
	int64_t x663 = -1LL;
	int32_t t123 = 183;

    t123 = (x661*(x662+(x663!=x664)));

    if (t123 != -256) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x666 = 74891U;
	int8_t x667 = INT8_MAX;
	int16_t x668 = 10;
	static volatile uint32_t t124 = 11876U;

    t124 = (x665*(x666+(x667!=x668)));

    if (t124 != 4285381120U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x673 = 1U;
	int8_t x674 = INT8_MIN;
	int8_t x675 = -39;
	static uint64_t x676 = UINT64_MAX;
	static volatile uint32_t t125 = 15U;

    t125 = (x673*(x674+(x675!=x676)));

    if (t125 != 4294967169U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x677 = -1;
	int32_t x678 = INT32_MIN;
	uint64_t x679 = 6836156LLU;
	volatile int16_t x680 = INT16_MIN;
	static int32_t t126 = INT32_MAX;

    t126 = (x677*(x678+(x679!=x680)));

    if (t126 != INT32_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x689 = 45474U;
	int16_t x690 = -1;
	static int8_t x691 = -55;
	uint64_t x692 = UINT64_MAX;

    t127 = (x689*(x690+(x691!=x692)));

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x693 = 63;
	volatile int16_t x695 = 0;
	int32_t x696 = INT32_MIN;
	int32_t t128 = 29095;

    t128 = (x693*(x694+(x695!=x696)));

    if (t128 != 3906) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x697 = 1U;
	volatile int8_t x698 = -1;
	int32_t x699 = INT32_MIN;
	int32_t t129 = 1196;

    t129 = (x697*(x698+(x699!=x700)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x701 = 331056402U;
	int8_t x702 = INT8_MIN;
	int8_t x703 = -28;
	int8_t x704 = INT8_MIN;
	static volatile uint32_t t130 = 39U;

    t130 = (x701*(x702+(x703!=x704)));

    if (t130 != 905509906U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x706 = 473U;
	int16_t x707 = INT16_MIN;
	volatile uint64_t x708 = 6297372LLU;

    t131 = (x705*(x706+(x707!=x708)));

    if (t131 != 4294958290U) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x713 = -1;
	uint64_t x714 = 13227927LLU;
	uint64_t x715 = 86944332623757263LLU;
	int32_t x716 = INT32_MIN;

    t132 = (x713*(x714+(x715!=x716)));

    if (t132 != 18446744073696323688LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x717 = INT8_MIN;
	volatile int16_t x718 = 0;
	int32_t x719 = -1;
	uint32_t x720 = UINT32_MAX;
	int32_t t133 = -30184;

    t133 = (x717*(x718+(x719!=x720)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x727 = -1;
	uint32_t x728 = 1064U;
	volatile int32_t t134 = -8171710;

    t134 = (x725*(x726+(x727!=x728)));

    if (t134 != 4194176) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x729 = UINT32_MAX;
	static int32_t x730 = -1;
	static int32_t x731 = INT32_MIN;
	static volatile uint32_t t135 = 8110023U;

    t135 = (x729*(x730+(x731!=x732)));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x733 = INT8_MIN;
	uint16_t x734 = UINT16_MAX;
	int32_t x735 = INT32_MAX;
	int16_t x736 = INT16_MIN;
	volatile int32_t t136 = -26;

    t136 = (x733*(x734+(x735!=x736)));

    if (t136 != -8388608) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x741 = 0;
	int16_t x742 = -1;
	volatile uint16_t x744 = 108U;
	volatile int32_t t137 = 15;

    t137 = (x741*(x742+(x743!=x744)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int8_t x745 = 1;
	uint16_t x746 = UINT16_MAX;
	uint32_t x747 = 1796283U;
	int32_t t138 = -97;

    t138 = (x745*(x746+(x747!=x748)));

    if (t138 != 65536) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x753 = UINT16_MAX;
	uint32_t x755 = 20476888U;
	volatile uint64_t x756 = 65171LLU;
	volatile int32_t t139 = 124;

    t139 = (x753*(x754+(x755!=x756)));

    if (t139 != 2883540) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x761 = INT64_MIN;
	volatile int16_t x762 = -1;
	static int32_t x763 = -5680;
	static volatile int64_t t140 = 32703225419590LL;

    t140 = (x761*(x762+(x763!=x764)));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x765 = 1000494582;
	uint32_t x766 = UINT32_MAX;
	int64_t x767 = -28704010509620LL;
	int32_t x768 = 1533;
	volatile uint32_t t141 = 1101741576U;

    t141 = (x765*(x766+(x767!=x768)));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x769 = 818;
	volatile int64_t x771 = 51494072695530110LL;
	uint32_t x772 = UINT32_MAX;
	volatile int32_t t142 = 447;

    t142 = (x769*(x770+(x771!=x772)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x773 = INT8_MIN;
	int32_t x774 = 4;
	volatile uint8_t x775 = 112U;
	static int64_t x776 = 4862LL;
	int32_t t143 = 1;

    t143 = (x773*(x774+(x775!=x776)));

    if (t143 != -640) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x777 = 266688414U;
	volatile uint64_t x778 = 76997285605LLU;
	int8_t x779 = -41;
	int64_t x780 = -1LL;

    t144 = (x777*(x778+(x779!=x780)));

    if (t144 != 2087539906859617268LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x781 = 0U;
	static uint64_t x782 = 1LLU;
	int64_t x783 = INT64_MIN;
	uint64_t t145 = 119137LLU;

    t145 = (x781*(x782+(x783!=x784)));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x790 = -1LL;
	static volatile int8_t x791 = INT8_MIN;
	int64_t t146 = 43341245256588493LL;

    t146 = (x789*(x790+(x791!=x792)));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x794 = UINT16_MAX;
	int8_t x795 = INT8_MAX;
	int32_t x796 = -1;
	uint32_t t147 = 11551U;

    t147 = (x793*(x794+(x795!=x796)));

    if (t147 != 65536U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x797 = 8008679LLU;
	uint32_t x798 = UINT32_MAX;
	volatile uint64_t x799 = UINT64_MAX;
	int64_t x800 = INT64_MIN;
	volatile uint64_t t148 = 3761214431LLU;

    t148 = (x797*(x798+(x799!=x800)));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x805 = UINT32_MAX;
	int8_t x807 = -1;
	volatile uint32_t t149 = 1598361U;

    t149 = (x805*(x806+(x807!=x808)));

    if (t149 != 1U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x810 = -1LL;
	int16_t x811 = -443;
	static int64_t x812 = -1LL;
	uint64_t t150 = 151519657056LLU;

    t150 = (x809*(x810+(x811!=x812)));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x817 = 12127U;
	static int16_t x818 = INT16_MAX;
	static volatile int32_t x819 = -1;
	volatile int32_t t151 = 197029152;

    t151 = (x817*(x818+(x819!=x820)));

    if (t151 != 397377536) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x825 = -1;
	volatile int16_t x826 = INT16_MAX;
	int8_t x828 = INT8_MIN;
	int32_t t152 = -28;

    t152 = (x825*(x826+(x827!=x828)));

    if (t152 != -32768) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x833 = -1;
	volatile int8_t x834 = INT8_MIN;
	int32_t x835 = -1;
	int16_t x836 = INT16_MIN;
	volatile int32_t t153 = 1260;

    t153 = (x833*(x834+(x835!=x836)));

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x837 = UINT64_MAX;
	int32_t x839 = INT32_MAX;
	volatile int16_t x840 = -1;
	static uint64_t t154 = UINT64_MAX;

    t154 = (x837*(x838+(x839!=x840)));

    if (t154 != UINT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x841 = 100U;
	int8_t x842 = INT8_MAX;
	int16_t x843 = INT16_MAX;
	int16_t x844 = INT16_MIN;

    t155 = (x841*(x842+(x843!=x844)));

    if (t155 != 12800) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x845 = INT16_MIN;
	int64_t x848 = INT64_MIN;
	int32_t t156 = 359239;

    t156 = (x845*(x846+(x847!=x848)));

    if (t156 != -4194304) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x849 = 1;
	volatile int16_t x850 = INT16_MIN;
	static int32_t x851 = -1066185957;
	volatile int32_t x852 = -151352;
	int32_t t157 = -5;

    t157 = (x849*(x850+(x851!=x852)));

    if (t157 != -32767) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x853 = 245581;
	int8_t x854 = INT8_MIN;
	uint64_t x855 = 1LLU;
	uint64_t x856 = 2129901091LLU;
	int32_t t158 = 29;

    t158 = (x853*(x854+(x855!=x856)));

    if (t158 != -31188787) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x858 = 449018747U;
	volatile int16_t x860 = -1;

    t159 = (x857*(x858+(x859!=x860)));

    if (t159 != 1111621632U) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t t160 = 122519176187917658LLU;

    t160 = (x861*(x862+(x863!=x864)));

    if (t160 != 18446695989403189248LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x869 = INT16_MIN;
	int16_t x870 = INT16_MIN;
	volatile uint64_t x871 = 3510207LLU;
	static volatile int64_t x872 = INT64_MAX;

    t161 = (x869*(x870+(x871!=x872)));

    if (t161 != 1073709056) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x882 = -1;
	uint32_t t162 = 189U;

    t162 = (x881*(x882+(x883!=x884)));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x886 = UINT16_MAX;
	int32_t x887 = INT32_MAX;
	int16_t x888 = 91;
	int32_t t163 = -563367;

    t163 = (x885*(x886+(x887!=x888)));

    if (t163 != -65536) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x890 = INT8_MAX;
	uint16_t x891 = 21U;
	int32_t x892 = 0;
	volatile uint32_t t164 = 25761U;

    t164 = (x889*(x890+(x891!=x892)));

    if (t164 != 5888U) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x894 = -1;
	int32_t x895 = 112;
	int64_t x896 = -1LL;
	int64_t t165 = -6982440LL;

    t165 = (x893*(x894+(x895!=x896)));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x901 = INT16_MAX;
	uint16_t x903 = UINT16_MAX;
	uint16_t x904 = 1860U;

    t166 = (x901*(x902+(x903!=x904)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x907 = 386563;
	uint32_t x908 = UINT32_MAX;

    t167 = (x905*(x906+(x907!=x908)));

    if (t167 != -43LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x909 = INT32_MAX;
	volatile int32_t x910 = -1;
	static volatile uint8_t x911 = 1U;

    t168 = (x909*(x910+(x911!=x912)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x913 = 4U;
	volatile int64_t x914 = 2290289416975LL;
	int16_t x915 = -1;
	int64_t x916 = INT64_MIN;

    t169 = (x913*(x914+(x915!=x916)));

    if (t169 != 9161157667904LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x917 = 79157U;
	int16_t x919 = -1;
	int8_t x920 = -32;
	uint32_t t170 = 571563U;

    t170 = (x917*(x918+(x919!=x920)));

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x926 = -1;
	int16_t x927 = -7;
	volatile int32_t x928 = 56808662;
	int64_t t171 = -34907545096719587LL;

    t171 = (x925*(x926+(x927!=x928)));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x929 = 1;
	static int8_t x930 = INT8_MIN;
	int32_t x931 = INT32_MIN;
	volatile int32_t x932 = 7608;
	int32_t t172 = 0;

    t172 = (x929*(x930+(x931!=x932)));

    if (t172 != -127) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x933 = 0LL;
	static int64_t x934 = INT64_MIN;
	int64_t x935 = -1LL;
	int64_t t173 = 187413410318102LL;

    t173 = (x933*(x934+(x935!=x936)));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int32_t x937 = INT32_MIN;
	int16_t x938 = -1;
	volatile uint64_t x940 = 12172936287698956LLU;

    t174 = (x937*(x938+(x939!=x940)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x941 = INT16_MIN;
	uint32_t x942 = UINT32_MAX;
	static uint64_t x943 = UINT64_MAX;
	uint8_t x944 = UINT8_MAX;
	volatile uint32_t t175 = 26834052U;

    t175 = (x941*(x942+(x943!=x944)));

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x945 = 723209LLU;
	uint64_t x946 = UINT64_MAX;
	int32_t x947 = -35747;
	uint64_t t176 = 9100746LLU;

    t176 = (x945*(x946+(x947!=x948)));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x949 = 0U;
	int64_t x950 = INT64_MIN;
	static uint8_t x952 = 0U;
	volatile int64_t t177 = -14533848LL;

    t177 = (x949*(x950+(x951!=x952)));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x953 = 1736;
	int16_t x954 = INT16_MIN;
	volatile int32_t t178 = -31167;

    t178 = (x953*(x954+(x955!=x956)));

    if (t178 != -56883512) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x957 = 1060LLU;
	int8_t x958 = -1;
	static volatile int64_t x959 = -1LL;
	static uint8_t x960 = 3U;

    t179 = (x957*(x958+(x959!=x960)));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x961 = 3U;
	int8_t x962 = INT8_MIN;
	int16_t x963 = -5908;
	volatile int16_t x964 = INT16_MAX;

    t180 = (x961*(x962+(x963!=x964)));

    if (t180 != -381) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x969 = INT8_MAX;
	static int16_t x970 = -2597;
	uint8_t x972 = UINT8_MAX;
	int32_t t181 = -24;

    t181 = (x969*(x970+(x971!=x972)));

    if (t181 != -329692) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x973 = INT32_MIN;
	uint64_t x974 = UINT64_MAX;
	int64_t x975 = 423427225946LL;
	uint64_t t182 = 50590780LLU;

    t182 = (x973*(x974+(x975!=x976)));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x977 = INT8_MAX;
	int32_t t183 = -19997;

    t183 = (x977*(x978+(x979!=x980)));

    if (t183 != 1397) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x985 = 534324U;
	int16_t x986 = -1;
	int32_t x987 = -3969;
	int8_t x988 = INT8_MIN;
	volatile uint32_t t184 = 275579137U;

    t184 = (x985*(x986+(x987!=x988)));

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x989 = -1LL;
	int16_t x990 = -7;
	volatile uint16_t x991 = 14126U;
	volatile int64_t x992 = -1LL;
	int64_t t185 = 6LL;

    t185 = (x989*(x990+(x991!=x992)));

    if (t185 != 6LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x993 = 88318LLU;
	static int16_t x994 = -1;
	static volatile int8_t x995 = 6;

    t186 = (x993*(x994+(x995!=x996)));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x1002 = UINT32_MAX;
	uint16_t x1004 = 291U;
	volatile uint32_t t187 = 492U;

    t187 = (x1001*(x1002+(x1003!=x1004)));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1005 = INT8_MIN;
	static int8_t x1006 = -1;
	int32_t x1008 = INT32_MIN;
	volatile int32_t t188 = -87;

    t188 = (x1005*(x1006+(x1007!=x1008)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1014 = 10U;
	int32_t x1015 = -1;
	int16_t x1016 = 218;

    t189 = (x1013*(x1014+(x1015!=x1016)));

    if (t189 != 345136U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1018 = 7U;
	uint16_t x1019 = 4U;
	static int8_t x1020 = 6;
	uint32_t t190 = 81243930U;

    t190 = (x1017*(x1018+(x1019!=x1020)));

    if (t190 != 4294967288U) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1025 = INT16_MIN;
	int8_t x1026 = -1;
	volatile int32_t t191 = -1;

    t191 = (x1025*(x1026+(x1027!=x1028)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x1029 = INT8_MIN;
	int64_t x1030 = -109837714LL;
	int32_t x1032 = INT32_MIN;
	static volatile int64_t t192 = -209732124LL;

    t192 = (x1029*(x1030+(x1031!=x1032)));

    if (t192 != 14059227264LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x1037 = UINT32_MAX;
	static uint32_t x1038 = UINT32_MAX;
	uint32_t x1039 = 26636U;
	int64_t x1040 = INT64_MAX;
	volatile uint32_t t193 = 3652368U;

    t193 = (x1037*(x1038+(x1039!=x1040)));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1042 = INT16_MIN;
	uint16_t x1044 = 6166U;
	volatile int32_t t194 = -32913202;

    t194 = (x1041*(x1042+(x1043!=x1044)));

    if (t194 != -229369) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x1045 = 7995424105033305LLU;
	int8_t x1046 = -1;
	int64_t x1048 = INT64_MAX;
	volatile uint64_t t195 = 5379441104245LLU;

    t195 = (x1045*(x1046+(x1047!=x1048)));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1050 = UINT8_MAX;
	int16_t x1051 = -6;
	int32_t x1052 = INT32_MIN;
	volatile int32_t t196 = 378;

    t196 = (x1049*(x1050+(x1051!=x1052)));

    if (t196 != 1280) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x1057 = -1;
	int16_t x1058 = -3;
	static uint64_t x1059 = UINT64_MAX;
	int8_t x1060 = INT8_MIN;
	int32_t t197 = -14307;

    t197 = (x1057*(x1058+(x1059!=x1060)));

    if (t197 != 2) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1063 = 49LL;
	uint32_t x1064 = UINT32_MAX;

    t198 = (x1061*(x1062+(x1063!=x1064)));

    if (t198 != 4128) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x1065 = UINT8_MAX;
	uint16_t x1066 = UINT16_MAX;
	volatile uint64_t x1067 = 203LLU;
	uint64_t x1068 = 231777460078931144LLU;
	volatile int32_t t199 = 3332484;

    t199 = (x1065*(x1066+(x1067!=x1068)));

    if (t199 != 16711680) { NG(); } else { ; }
	
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


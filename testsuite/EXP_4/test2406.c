
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

int32_t x2 = -1;
static volatile int64_t x3 = INT64_MIN;
static int32_t x8 = -1;
int8_t x14 = 3;
int8_t x17 = -1;
volatile int32_t x22 = -1;
int16_t x30 = -1;
volatile int32_t x36 = -1;
uint8_t x41 = UINT8_MAX;
uint8_t x43 = 31U;
uint64_t x47 = UINT64_MAX;
int16_t x48 = -1;
volatile int32_t t15 = 7015782;
static int8_t x67 = -8;
static int8_t x71 = 1;
volatile int16_t x77 = INT16_MIN;
int8_t x79 = INT8_MIN;
volatile uint32_t t19 = 1351U;
int32_t x84 = INT32_MIN;
static volatile int32_t t20 = 1;
uint16_t x88 = 3U;
int8_t x108 = 0;
static int32_t t26 = -166015;
int32_t x118 = -1;
static int64_t x119 = INT64_MAX;
int64_t t28 = -15061314353LL;
static int64_t x121 = INT64_MIN;
int64_t x132 = -1LL;
int32_t x133 = -105879;
int8_t x139 = INT8_MIN;
int32_t x142 = INT32_MIN;
int8_t x147 = INT8_MIN;
int16_t x153 = 151;
static uint64_t x155 = 2954843810177033LLU;
uint32_t x163 = 1429214U;
int64_t x166 = INT64_MIN;
volatile int8_t x167 = 10;
volatile int32_t t41 = 6983073;
int16_t x176 = -1497;
int64_t t44 = 576LL;
int8_t x190 = -20;
int64_t x195 = -270344410119LL;
static volatile uint16_t x196 = 0U;
static int8_t x199 = INT8_MAX;
static int8_t x201 = -21;
static volatile int16_t x206 = -7;
static uint8_t x210 = 0U;
int64_t t53 = 0LL;
uint8_t x222 = 49U;
static volatile int32_t t54 = 13213;
int64_t x238 = INT64_MAX;
int16_t x243 = INT16_MIN;
int16_t x244 = INT16_MAX;
int32_t t58 = -1;
int64_t x251 = INT64_MIN;
volatile uint64_t x254 = UINT64_MAX;
volatile uint64_t t61 = 214862365501LLU;
static int64_t x257 = 1584751139LL;
volatile int32_t x261 = INT32_MIN;
volatile uint32_t x266 = 98924U;
int32_t x268 = 8135;
int8_t x272 = INT8_MIN;
uint64_t t69 = 8691541515618057LLU;
volatile uint32_t x292 = UINT32_MAX;
volatile int16_t x294 = -3752;
int32_t x300 = INT32_MAX;
int8_t x304 = -1;
static uint32_t x305 = 7762855U;
static volatile int16_t x306 = 480;
volatile int8_t x308 = INT8_MAX;
volatile uint64_t t75 = 46054518559995LLU;
static volatile int32_t x317 = INT32_MIN;
int8_t x319 = INT8_MIN;
int32_t x320 = INT32_MIN;
static int64_t t78 = -663612499835196LL;
int64_t x328 = -1LL;
volatile int64_t t79 = 892162LL;
static uint32_t x334 = 180136309U;
static volatile uint32_t x335 = UINT32_MAX;
volatile int8_t x339 = 6;
uint16_t x346 = UINT16_MAX;
static int8_t x358 = INT8_MIN;
static uint64_t x365 = UINT64_MAX;
int8_t x370 = INT8_MIN;
static int64_t x372 = INT64_MIN;
uint8_t x373 = UINT8_MAX;
volatile int64_t x383 = 6LL;
int64_t t93 = -3689LL;
int64_t x386 = INT64_MIN;
int16_t x388 = INT16_MIN;
volatile uint64_t t95 = 273482557055LLU;
static int32_t x393 = -87455;
int8_t x395 = -1;
static int64_t t96 = -1072LL;
int16_t x397 = -12839;
int8_t x400 = INT8_MIN;
volatile int64_t t97 = -849977448027LL;
uint64_t x401 = UINT64_MAX;
int32_t x408 = INT32_MIN;
volatile uint64_t t99 = 15419357791945497LLU;
volatile int8_t x412 = 7;
int32_t t101 = 169701794;
uint16_t x417 = 2U;
static int64_t x424 = -1LL;
volatile uint64_t t107 = 14LLU;
int8_t x441 = -1;
volatile uint16_t x443 = UINT16_MAX;
uint64_t t109 = 250233514037092124LLU;
int64_t x454 = INT64_MAX;
static uint8_t x483 = UINT8_MAX;
int32_t x487 = 20633659;
volatile uint32_t t118 = 965422U;
int32_t t119 = -225792;
int16_t x496 = INT16_MAX;
volatile int64_t x497 = 6197943399LL;
static int64_t x498 = INT64_MIN;
int8_t x503 = INT8_MIN;
static int16_t x509 = INT16_MAX;
uint8_t x512 = 14U;
static volatile uint16_t x519 = UINT16_MAX;
uint8_t x530 = 3U;
volatile uint8_t x540 = 1U;
uint64_t x542 = 134076394803LLU;
static int32_t x552 = -514;
volatile int64_t t134 = -2895889LL;
volatile uint16_t x557 = 2171U;
int64_t x560 = INT64_MIN;
uint8_t x563 = 1U;
uint8_t x564 = 18U;
uint8_t x565 = 0U;
volatile int16_t x566 = INT16_MIN;
int64_t x567 = INT64_MIN;
uint8_t x568 = UINT8_MAX;
int64_t x571 = INT64_MIN;
int8_t x577 = INT8_MIN;
volatile int16_t x585 = INT16_MIN;
int8_t x594 = INT8_MIN;
uint8_t x604 = 27U;
volatile int8_t x605 = INT8_MIN;
int16_t x608 = INT16_MIN;
int32_t t147 = 8;
int64_t t148 = -6825LL;
static uint64_t x618 = UINT64_MAX;
volatile int8_t x620 = INT8_MAX;
static uint8_t x624 = 1U;
volatile int64_t t151 = INT64_MIN;
static int16_t x647 = -12134;
volatile int32_t x648 = INT32_MIN;
int16_t x653 = INT16_MAX;
int64_t x656 = 4238LL;
int64_t x660 = -2379504106241849LL;
volatile int64_t t160 = 1257109437710LL;
uint64_t x669 = 5042490079097LLU;
static int32_t x672 = INT32_MIN;
volatile uint8_t x674 = 72U;
uint64_t x676 = 2709369284339LLU;
volatile uint64_t t164 = 66323351LLU;
int8_t x677 = INT8_MIN;
static int64_t x680 = INT64_MIN;
int8_t x695 = 1;
int32_t x700 = INT32_MIN;
int64_t x701 = INT64_MAX;
uint32_t x704 = 126U;
volatile int64_t t170 = -4510328896358230571LL;
volatile int64_t x707 = 8276062150LL;
int8_t x708 = INT8_MIN;
int16_t x709 = INT16_MIN;
int64_t x717 = 14671368LL;
volatile int64_t x718 = INT64_MIN;
int8_t x722 = -1;
uint64_t x725 = 10986LLU;
uint8_t x727 = UINT8_MAX;
static int64_t x732 = 26043LL;
volatile uint64_t t177 = 6225471945006LLU;
uint16_t x745 = 7U;
static int32_t t181 = -55;
uint8_t x753 = UINT8_MAX;
int64_t x763 = INT64_MAX;
int8_t x767 = -1;
static volatile int16_t x769 = INT16_MIN;
int32_t x778 = 1;
static int8_t x785 = -1;
static int32_t x787 = -22054820;
int32_t x792 = INT32_MIN;
int64_t t192 = -9036726538LL;
uint8_t x796 = 12U;
static uint8_t x799 = 7U;
int32_t x807 = INT32_MIN;
static volatile int8_t x809 = INT8_MIN;
int8_t x812 = 1;
int8_t x815 = INT8_MIN;


void f0(void) {
    	static volatile int8_t x1 = 3;
	static volatile uint16_t x4 = 2U;
	int64_t t0 = -63490827678LL;

    t0 = (x1&(x2/(x3|x4)));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = 1;
	volatile uint64_t x6 = 3361301LLU;
	uint64_t x7 = 304LLU;
	static uint64_t t1 = 195667LLU;

    t1 = (x5&(x6/(x7|x8)));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x9 = 4U;
	int32_t x10 = 0;
	volatile uint8_t x11 = 112U;
	int32_t x12 = 81;
	volatile int32_t t2 = 0;

    t2 = (x9&(x10/(x11|x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 1LLU;
	static volatile uint16_t x15 = 1U;
	uint64_t x16 = 380449540096LLU;
	static uint64_t t3 = 3911370155954LLU;

    t3 = (x13&(x14/(x15|x16)));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = 52;
	volatile int8_t x19 = -3;
	int8_t x20 = -17;
	int32_t t4 = 0;

    t4 = (x17&(x18/(x19|x20)));

    if (t4 != -52) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x21 = 3993;
	uint32_t x23 = 425U;
	int16_t x24 = -3;
	volatile uint32_t t5 = 11U;

    t5 = (x21&(x22/(x23|x24)));

    if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = INT8_MIN;
	static int64_t x26 = 239172044523LL;
	int64_t x27 = -128223003782LL;
	int64_t x28 = 2LL;
	static int64_t t6 = 13248347LL;

    t6 = (x25&(x26/(x27|x28)));

    if (t6 != -128LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 3;
	static uint32_t x31 = UINT32_MAX;
	volatile int64_t x32 = -76477371608972LL;
	static int64_t t7 = -7644669517LL;

    t7 = (x29&(x30/(x31|x32)));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -1LL;
	static uint8_t x34 = 22U;
	uint32_t x35 = 103965U;
	int64_t t8 = -232784LL;

    t8 = (x33&(x34/(x35|x36)));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = UINT16_MAX;
	int64_t x38 = INT64_MIN;
	volatile uint8_t x39 = UINT8_MAX;
	volatile int16_t x40 = INT16_MAX;
	static int64_t t9 = -13708994973452806LL;

    t9 = (x37&(x38/(x39|x40)));

    if (t9 != 65528LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x42 = UINT16_MAX;
	int8_t x44 = INT8_MAX;
	static int32_t t10 = -480094;

    t10 = (x41&(x42/(x43|x44)));

    if (t10 != 4) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -1;
	volatile int8_t x46 = INT8_MAX;
	volatile uint64_t t11 = 7753LLU;

    t11 = (x45&(x46/(x47|x48)));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	int16_t x50 = -188;
	uint32_t x51 = 2058827U;
	uint32_t x52 = 10U;
	volatile uint32_t t12 = 1858949U;

    t12 = (x49&(x50/(x51|x52)));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = INT16_MAX;
	volatile int16_t x54 = 0;
	int32_t x55 = INT32_MIN;
	volatile int16_t x56 = -778;
	volatile int32_t t13 = -5;

    t13 = (x53&(x54/(x55|x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = UINT8_MAX;
	int8_t x58 = -1;
	uint64_t x59 = UINT64_MAX;
	static int64_t x60 = INT64_MIN;
	uint64_t t14 = 3713386091767475158LLU;

    t14 = (x57&(x58/(x59|x60)));

    if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = 41;
	static int8_t x62 = -1;
	int8_t x63 = INT8_MAX;
	uint8_t x64 = 1U;

    t15 = (x61&(x62/(x63|x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = -1382;
	uint64_t x66 = UINT64_MAX;
	int64_t x68 = INT64_MIN;
	uint64_t t16 = 2LLU;

    t16 = (x65&(x66/(x67|x68)));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MAX;
	int8_t x70 = -2;
	int64_t x72 = INT64_MIN;
	int64_t t17 = 58131LL;

    t17 = (x69&(x70/(x71|x72)));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	int64_t x74 = INT64_MIN;
	uint32_t x75 = 18710030U;
	static int8_t x76 = -1;
	int64_t t18 = -375099432009LL;

    t18 = (x73&(x74/(x75|x76)));

    if (t18 != -2147483648LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x78 = 338U;
	int16_t x80 = INT16_MIN;

    t19 = (x77&(x78/(x79|x80)));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x81 = INT8_MIN;
	int32_t x82 = 86498;
	uint16_t x83 = UINT16_MAX;

    t20 = (x81&(x82/(x83|x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	uint64_t x86 = 506LLU;
	int64_t x87 = INT64_MIN;
	volatile uint64_t t21 = 1156284008467889900LLU;

    t21 = (x85&(x86/(x87|x88)));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 317U;
	int32_t x90 = -1;
	uint8_t x91 = 6U;
	volatile uint8_t x92 = 47U;
	int32_t t22 = -6382;

    t22 = (x89&(x90/(x91|x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x93 = 10U;
	int8_t x94 = INT8_MAX;
	volatile int16_t x95 = -1;
	int8_t x96 = -2;
	uint32_t t23 = 6U;

    t23 = (x93&(x94/(x95|x96)));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = INT16_MAX;
	volatile uint32_t x102 = UINT32_MAX;
	volatile int16_t x103 = INT16_MIN;
	int32_t x104 = INT32_MIN;
	volatile uint32_t t24 = 479883215U;

    t24 = (x101&(x102/(x103|x104)));

    if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x105 = 4U;
	uint64_t x106 = 72506LLU;
	int32_t x107 = -1;
	volatile uint64_t t25 = 3976LLU;

    t25 = (x105&(x106/(x107|x108)));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x109 = 1;
	int8_t x110 = -1;
	volatile uint8_t x111 = 0U;
	uint8_t x112 = 8U;

    t26 = (x109&(x110/(x111|x112)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = INT16_MIN;
	int16_t x114 = INT16_MAX;
	uint32_t x115 = 1113226051U;
	static int32_t x116 = INT32_MIN;
	volatile uint32_t t27 = 185542836U;

    t27 = (x113&(x114/(x115|x116)));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x117 = 1U;
	int8_t x120 = -1;

    t28 = (x117&(x118/(x119|x120)));

    if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x122 = UINT16_MAX;
	static int64_t x123 = INT64_MAX;
	int32_t x124 = -1;
	volatile int64_t t29 = INT64_MIN;

    t29 = (x121&(x122/(x123|x124)));

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = INT32_MIN;
	uint64_t x126 = 1128199634765LLU;
	int8_t x127 = INT8_MIN;
	int32_t x128 = -1;
	uint64_t t30 = 195711LLU;

    t30 = (x125&(x126/(x127|x128)));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x129 = 2289838128882LLU;
	int8_t x130 = 0;
	uint8_t x131 = 0U;
	volatile uint64_t t31 = 8523LLU;

    t31 = (x129&(x130/(x131|x132)));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x134 = INT32_MIN;
	uint64_t x135 = 566847809179LLU;
	int32_t x136 = -5960073;
	volatile uint64_t t32 = 1811747003958878LLU;

    t32 = (x133&(x134/(x135|x136)));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x137 = -1LL;
	uint16_t x138 = 166U;
	uint8_t x140 = 1U;
	static int64_t t33 = -713833697570113588LL;

    t33 = (x137&(x138/(x139|x140)));

    if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x141 = 34104568LLU;
	uint32_t x143 = 11760U;
	int64_t x144 = INT64_MIN;
	static uint64_t t34 = 20971750590125LLU;

    t34 = (x141&(x142/(x143|x144)));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x145 = 1003769971212231408LL;
	static int64_t x146 = INT64_MIN;
	static int8_t x148 = 9;
	int64_t t35 = -2393LL;

    t35 = (x145&(x146/(x147|x148)));

    if (t35 != 72646932577386512LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x149 = 2970939450148692120LLU;
	volatile int64_t x150 = -1LL;
	static int16_t x151 = INT16_MIN;
	static uint32_t x152 = 877350U;
	volatile uint64_t t36 = 52093728787LLU;

    t36 = (x149&(x150/(x151|x152)));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x154 = 3U;
	uint32_t x156 = UINT32_MAX;
	volatile uint64_t t37 = 3LLU;

    t37 = (x153&(x154/(x155|x156)));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x157 = 34;
	static volatile uint32_t x158 = 0U;
	static volatile uint32_t x159 = UINT32_MAX;
	int64_t x160 = INT64_MIN;
	volatile int64_t t38 = 236200606284LL;

    t38 = (x157&(x158/(x159|x160)));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x161 = INT32_MAX;
	int16_t x162 = -237;
	uint16_t x164 = UINT16_MAX;
	static uint32_t t39 = 1052422108U;

    t39 = (x161&(x162/(x163|x164)));

    if (t39 != 2978U) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = 10;
	uint64_t x168 = 1699908LLU;
	volatile uint64_t t40 = 120144579390057666LLU;

    t40 = (x165&(x166/(x167|x168)));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x169 = INT32_MAX;
	int16_t x170 = -1150;
	int8_t x171 = INT8_MAX;
	int8_t x172 = INT8_MIN;

    t41 = (x169&(x170/(x171|x172)));

    if (t41 != 1150) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x173 = 14418167427LLU;
	int16_t x174 = -303;
	int64_t x175 = -1LL;
	volatile uint64_t t42 = 9047592864589705255LLU;

    t42 = (x173&(x174/(x175|x176)));

    if (t42 != 3LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x177 = INT8_MAX;
	int16_t x178 = -1;
	int32_t x179 = INT32_MAX;
	uint16_t x180 = UINT16_MAX;
	int32_t t43 = 784;

    t43 = (x177&(x178/(x179|x180)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x181 = INT16_MIN;
	int64_t x182 = 2170102798697LL;
	static int64_t x183 = -1LL;
	int64_t x184 = INT64_MIN;

    t44 = (x181&(x182/(x183|x184)));

    if (t44 != -2170102808576LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x185 = INT8_MIN;
	uint16_t x186 = UINT16_MAX;
	static int32_t x187 = INT32_MIN;
	volatile int16_t x188 = 13;
	int32_t t45 = -88431820;

    t45 = (x185&(x186/(x187|x188)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x189 = 5;
	int64_t x191 = 835526LL;
	uint32_t x192 = UINT32_MAX;
	volatile int64_t t46 = 2261406603034289793LL;

    t46 = (x189&(x190/(x191|x192)));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x193 = INT8_MIN;
	uint32_t x194 = UINT32_MAX;
	int64_t t47 = 542408LL;

    t47 = (x193&(x194/(x195|x196)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x197 = INT32_MIN;
	static volatile int32_t x198 = INT32_MIN;
	int32_t x200 = 9217;
	static volatile int32_t t48 = INT32_MIN;

    t48 = (x197&(x198/(x199|x200)));

    if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x202 = 1036908U;
	uint8_t x203 = UINT8_MAX;
	static int8_t x204 = -1;
	static volatile uint32_t t49 = 11545U;

    t49 = (x201&(x202/(x203|x204)));

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x205 = 0;
	int64_t x207 = INT64_MIN;
	uint64_t x208 = 128178960LLU;
	volatile uint64_t t50 = 1249389782555095245LLU;

    t50 = (x205&(x206/(x207|x208)));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x209 = 6LLU;
	static int32_t x211 = INT32_MIN;
	volatile uint16_t x212 = 16U;
	static uint64_t t51 = 56906448067511713LLU;

    t51 = (x209&(x210/(x211|x212)));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x213 = INT8_MIN;
	uint32_t x214 = 425077526U;
	static uint8_t x215 = 48U;
	int64_t x216 = INT64_MAX;
	int64_t t52 = 200LL;

    t52 = (x213&(x214/(x215|x216)));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x217 = INT64_MAX;
	int16_t x218 = INT16_MIN;
	int32_t x219 = INT32_MIN;
	static volatile int16_t x220 = INT16_MAX;

    t53 = (x217&(x218/(x219|x220)));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x221 = 3U;
	static int8_t x223 = INT8_MIN;
	uint16_t x224 = UINT16_MAX;

    t54 = (x221&(x222/(x223|x224)));

    if (t54 != 3) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x225 = 7;
	int16_t x226 = INT16_MIN;
	volatile uint16_t x227 = 49U;
	static int8_t x228 = INT8_MAX;
	int32_t t55 = -156433725;

    t55 = (x225&(x226/(x227|x228)));

    if (t55 != 6) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x229 = UINT16_MAX;
	int64_t x230 = INT64_MAX;
	uint32_t x231 = UINT32_MAX;
	uint64_t x232 = 464LLU;
	volatile uint64_t t56 = 9LLU;

    t56 = (x229&(x230/(x231|x232)));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x237 = 1LLU;
	volatile int32_t x239 = INT32_MIN;
	int32_t x240 = INT32_MIN;
	uint64_t t57 = 54139368099121LLU;

    t57 = (x237&(x238/(x239|x240)));

    if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x241 = -5;
	uint16_t x242 = UINT16_MAX;

    t58 = (x241&(x242/(x243|x244)));

    if (t58 != -65535) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x245 = 2U;
	uint32_t x246 = 2163487U;
	uint16_t x247 = UINT16_MAX;
	static int8_t x248 = -1;
	volatile uint32_t t59 = 303977U;

    t59 = (x245&(x246/(x247|x248)));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x249 = INT8_MIN;
	volatile uint16_t x250 = 28151U;
	uint32_t x252 = UINT32_MAX;
	volatile int64_t t60 = 8878855482041777LL;

    t60 = (x249&(x250/(x251|x252)));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x253 = INT16_MAX;
	volatile uint64_t x255 = UINT64_MAX;
	int64_t x256 = -2902170022LL;

    t61 = (x253&(x254/(x255|x256)));

    if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x258 = INT64_MAX;
	uint64_t x259 = 1206411988087868LLU;
	int32_t x260 = INT32_MAX;
	uint64_t t62 = 16823518LLU;

    t62 = (x257&(x258/(x259|x260)));

    if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x262 = 3055U;
	int64_t x263 = -1979757007292LL;
	static int16_t x264 = INT16_MIN;
	int64_t t63 = 39457472224341350LL;

    t63 = (x261&(x262/(x263|x264)));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x265 = UINT8_MAX;
	int16_t x267 = -1;
	volatile uint32_t t64 = 4249457U;

    t64 = (x265&(x266/(x267|x268)));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x269 = UINT8_MAX;
	int8_t x270 = INT8_MAX;
	int64_t x271 = INT64_MAX;
	volatile int64_t t65 = 388152890LL;

    t65 = (x269&(x270/(x271|x272)));

    if (t65 != 129LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x273 = 2;
	uint16_t x274 = 548U;
	int64_t x275 = -278312756521068157LL;
	volatile uint16_t x276 = 1U;
	static volatile int64_t t66 = 0LL;

    t66 = (x273&(x274/(x275|x276)));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x277 = INT16_MIN;
	int64_t x278 = INT64_MIN;
	int64_t x279 = INT64_MIN;
	int64_t x280 = INT64_MIN;
	int64_t t67 = 566LL;

    t67 = (x277&(x278/(x279|x280)));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x281 = -128651821477758763LL;
	int16_t x282 = INT16_MIN;
	int32_t x283 = INT32_MIN;
	int32_t x284 = 36412;
	int64_t t68 = -281143848496LL;

    t68 = (x281&(x282/(x283|x284)));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x285 = UINT64_MAX;
	uint64_t x286 = 100898LLU;
	static uint16_t x287 = 8106U;
	int64_t x288 = INT64_MAX;

    t69 = (x285&(x286/(x287|x288)));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x289 = -1;
	static volatile int8_t x290 = 0;
	int8_t x291 = -34;
	uint32_t t70 = 8U;

    t70 = (x289&(x290/(x291|x292)));

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x293 = 3;
	int32_t x295 = 209572467;
	static int8_t x296 = INT8_MIN;
	int32_t t71 = 7;

    t71 = (x293&(x294/(x295|x296)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x297 = 2U;
	uint64_t x298 = 43840LLU;
	static int8_t x299 = INT8_MAX;
	uint64_t t72 = 195860LLU;

    t72 = (x297&(x298/(x299|x300)));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x301 = UINT32_MAX;
	uint16_t x302 = 12U;
	static uint16_t x303 = 25U;
	uint32_t t73 = 231774U;

    t73 = (x301&(x302/(x303|x304)));

    if (t73 != 4294967284U) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x307 = INT8_MIN;
	uint32_t t74 = 2334991U;

    t74 = (x305&(x306/(x307|x308)));

    if (t74 != 7762464U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x309 = INT16_MIN;
	static volatile uint64_t x310 = 365096069740342LLU;
	int64_t x311 = INT64_MAX;
	uint32_t x312 = UINT32_MAX;

    t75 = (x309&(x310/(x311|x312)));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x313 = INT64_MIN;
	volatile uint64_t x314 = 865LLU;
	static volatile uint16_t x315 = UINT16_MAX;
	int32_t x316 = -129035;
	uint64_t t76 = 1698111LLU;

    t76 = (x313&(x314/(x315|x316)));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x318 = -81883810417LL;
	int64_t t77 = -150LL;

    t77 = (x317&(x318/(x319|x320)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x321 = -554LL;
	uint32_t x322 = 461992144U;
	uint8_t x323 = UINT8_MAX;
	int16_t x324 = 6831;

    t78 = (x321&(x322/(x323|x324)));

    if (t78 != 66816LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x325 = 592;
	int16_t x326 = 0;
	static int16_t x327 = -1;

    t79 = (x325&(x326/(x327|x328)));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x329 = UINT64_MAX;
	int32_t x330 = INT32_MIN;
	int16_t x331 = INT16_MIN;
	volatile int8_t x332 = INT8_MIN;
	static volatile uint64_t t80 = 4322203791LLU;

    t80 = (x329&(x330/(x331|x332)));

    if (t80 != 16777216LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x333 = UINT16_MAX;
	int8_t x336 = -1;
	volatile uint32_t t81 = 765272U;

    t81 = (x333&(x334/(x335|x336)));

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x337 = UINT64_MAX;
	int32_t x338 = -1871748;
	int64_t x340 = INT64_MAX;
	uint64_t t82 = 137930973743650LLU;

    t82 = (x337&(x338/(x339|x340)));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x341 = 1;
	uint16_t x342 = 21U;
	uint16_t x343 = 8007U;
	static int64_t x344 = INT64_MIN;
	int64_t t83 = -7721939LL;

    t83 = (x341&(x342/(x343|x344)));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x345 = INT16_MIN;
	int64_t x347 = INT64_MIN;
	int64_t x348 = -1LL;
	int64_t t84 = -49960328LL;

    t84 = (x345&(x346/(x347|x348)));

    if (t84 != -65536LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x349 = UINT16_MAX;
	uint32_t x350 = 1320762793U;
	int8_t x351 = INT8_MAX;
	int64_t x352 = 199103353284660LL;
	int64_t t85 = 2571920094483778395LL;

    t85 = (x349&(x350/(x351|x352)));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x353 = INT16_MIN;
	uint64_t x354 = 90036LLU;
	uint64_t x355 = 3924392861821552141LLU;
	uint64_t x356 = UINT64_MAX;
	static volatile uint64_t t86 = 984021162491926102LLU;

    t86 = (x353&(x354/(x355|x356)));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x357 = -1LL;
	uint8_t x359 = UINT8_MAX;
	int16_t x360 = INT16_MIN;
	volatile int64_t t87 = 1768786983LL;

    t87 = (x357&(x358/(x359|x360)));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x361 = -1LL;
	uint8_t x362 = 12U;
	static int64_t x363 = INT64_MAX;
	static uint32_t x364 = UINT32_MAX;
	int64_t t88 = -13227138471564LL;

    t88 = (x361&(x362/(x363|x364)));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x366 = 555257275237316218LLU;
	uint8_t x367 = UINT8_MAX;
	int8_t x368 = INT8_MIN;
	volatile uint64_t t89 = 589315639137LLU;

    t89 = (x365&(x366/(x367|x368)));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x369 = 61U;
	int16_t x371 = -5127;
	int64_t t90 = 9025467888LL;

    t90 = (x369&(x370/(x371|x372)));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x374 = 2091LLU;
	int64_t x375 = -1554LL;
	int16_t x376 = -1;
	volatile uint64_t t91 = 20970228035323108LLU;

    t91 = (x373&(x374/(x375|x376)));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x377 = 1077294792319370LLU;
	int32_t x378 = INT32_MAX;
	int16_t x379 = 1;
	int32_t x380 = INT32_MIN;
	volatile uint64_t t92 = 42243347331375504LLU;

    t92 = (x377&(x378/(x379|x380)));

    if (t92 != 1077294792319370LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x381 = 181;
	int64_t x382 = INT64_MAX;
	int8_t x384 = -1;

    t93 = (x381&(x382/(x383|x384)));

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x385 = -10949655051537914LL;
	int8_t x387 = 12;
	volatile int64_t t94 = 1602LL;

    t94 = (x385&(x386/(x387|x388)));

    if (t94 != 281578055938564LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x389 = INT8_MAX;
	uint64_t x390 = UINT64_MAX;
	int16_t x391 = INT16_MIN;
	volatile int64_t x392 = 90131367843652235LL;

    t95 = (x389&(x390/(x391|x392)));

    if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x394 = INT16_MAX;
	int64_t x396 = -65079195630057LL;

    t96 = (x393&(x394/(x395|x396)));

    if (t96 != -98303LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x398 = INT64_MIN;
	static int64_t x399 = -9935400823LL;

    t97 = (x397&(x398/(x399|x400)));

    if (t97 != 77507328040796433LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x402 = -1;
	uint64_t x403 = UINT64_MAX;
	static int16_t x404 = INT16_MAX;
	uint64_t t98 = 439769166754215001LLU;

    t98 = (x401&(x402/(x403|x404)));

    if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x405 = 73934784920488LLU;
	int16_t x406 = INT16_MIN;
	int16_t x407 = -228;

    t99 = (x405&(x406/(x407|x408)));

    if (t99 != 136LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x409 = -3910;
	volatile uint8_t x410 = 15U;
	volatile int32_t x411 = -1;
	volatile int32_t t100 = 34453684;

    t100 = (x409&(x410/(x411|x412)));

    if (t100 != -3920) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x413 = INT8_MIN;
	static volatile int16_t x414 = -1;
	volatile int32_t x415 = INT32_MIN;
	static volatile uint16_t x416 = UINT16_MAX;

    t101 = (x413&(x414/(x415|x416)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x418 = 3276493226351LLU;
	static uint64_t x419 = 24LLU;
	static uint64_t x420 = 1865347702105026LLU;
	volatile uint64_t t102 = 83132363505LLU;

    t102 = (x417&(x418/(x419|x420)));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x421 = -21;
	int16_t x422 = 29;
	int64_t x423 = INT64_MIN;
	volatile int64_t t103 = -113892760627666251LL;

    t103 = (x421&(x422/(x423|x424)));

    if (t103 != -29LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int32_t x425 = INT32_MAX;
	int16_t x426 = -1;
	int32_t x427 = 1021931;
	int64_t x428 = INT64_MIN;
	static int64_t t104 = 281933751589212LL;

    t104 = (x425&(x426/(x427|x428)));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x429 = INT8_MIN;
	int16_t x430 = -1025;
	uint16_t x431 = 14U;
	volatile uint16_t x432 = UINT16_MAX;
	volatile int32_t t105 = -6;

    t105 = (x429&(x430/(x431|x432)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x433 = -1;
	static uint16_t x434 = UINT16_MAX;
	int64_t x435 = INT64_MAX;
	int8_t x436 = 0;
	volatile int64_t t106 = -2047LL;

    t106 = (x433&(x434/(x435|x436)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x437 = INT8_MAX;
	uint64_t x438 = UINT64_MAX;
	uint32_t x439 = 1037269U;
	uint8_t x440 = 2U;

    t107 = (x437&(x438/(x439|x440)));

    if (t107 != 55LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x442 = 0U;
	uint32_t x444 = 2685121U;
	volatile uint32_t t108 = 15541310U;

    t108 = (x441&(x442/(x443|x444)));

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x445 = INT8_MIN;
	int16_t x446 = INT16_MIN;
	volatile int8_t x447 = -1;
	uint64_t x448 = 0LLU;

    t109 = (x445&(x446/(x447|x448)));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x449 = 148477393;
	int8_t x450 = -2;
	volatile uint8_t x451 = 53U;
	static volatile int32_t x452 = -1;
	static int32_t t110 = -31929;

    t110 = (x449&(x450/(x451|x452)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x453 = UINT16_MAX;
	static uint32_t x455 = 25846U;
	uint16_t x456 = 14760U;
	volatile int64_t t111 = 194756542313LL;

    t111 = (x453&(x454/(x455|x456)));

    if (t111 != 60175LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x457 = UINT32_MAX;
	volatile uint64_t x458 = 370724LLU;
	int64_t x459 = -1LL;
	int64_t x460 = INT64_MIN;
	uint64_t t112 = 1749232LLU;

    t112 = (x457&(x458/(x459|x460)));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x461 = INT16_MIN;
	int32_t x462 = INT32_MAX;
	int16_t x463 = -1;
	int32_t x464 = INT32_MAX;
	volatile int32_t t113 = INT32_MIN;

    t113 = (x461&(x462/(x463|x464)));

    if (t113 != INT32_MIN) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x465 = INT16_MAX;
	uint32_t x466 = 297270467U;
	volatile int64_t x467 = INT64_MAX;
	volatile int16_t x468 = INT16_MAX;
	volatile int64_t t114 = 16445733038LL;

    t114 = (x465&(x466/(x467|x468)));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x469 = INT8_MIN;
	uint32_t x470 = 100U;
	int8_t x471 = INT8_MIN;
	uint16_t x472 = 6U;
	uint32_t t115 = 29739537U;

    t115 = (x469&(x470/(x471|x472)));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x477 = 6;
	int64_t x478 = INT64_MIN;
	uint64_t x479 = UINT64_MAX;
	int64_t x480 = 80030618415717LL;
	uint64_t t116 = 4430235457LLU;

    t116 = (x477&(x478/(x479|x480)));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x481 = -1;
	int64_t x482 = INT64_MIN;
	volatile int32_t x484 = -16222;
	int64_t t117 = -21511LL;

    t117 = (x481&(x482/(x483|x484)));

    if (t117 != 571850209985416LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x485 = -1;
	int32_t x486 = -1;
	uint32_t x488 = 117U;

    t118 = (x485&(x486/(x487|x488)));

    if (t118 != 208U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x489 = UINT8_MAX;
	static uint8_t x490 = 37U;
	volatile uint16_t x491 = UINT16_MAX;
	volatile int8_t x492 = -1;

    t119 = (x489&(x490/(x491|x492)));

    if (t119 != 219) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x493 = INT64_MAX;
	int8_t x494 = 4;
	static int8_t x495 = 19;
	int64_t t120 = -485652436LL;

    t120 = (x493&(x494/(x495|x496)));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint16_t x499 = 0U;
	volatile int32_t x500 = INT32_MIN;
	int64_t t121 = 9716326LL;

    t121 = (x497&(x498/(x499|x500)));

    if (t121 != 4294967296LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x501 = UINT8_MAX;
	uint32_t x502 = 58441426U;
	int32_t x504 = -1;
	uint32_t t122 = 248561880U;

    t122 = (x501&(x502/(x503|x504)));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x505 = UINT16_MAX;
	static int8_t x506 = INT8_MIN;
	volatile int64_t x507 = INT64_MAX;
	int64_t x508 = -136642463LL;
	volatile int64_t t123 = -270046LL;

    t123 = (x505&(x506/(x507|x508)));

    if (t123 != 128LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x510 = -1LL;
	uint8_t x511 = UINT8_MAX;
	static int64_t t124 = -40440213488LL;

    t124 = (x509&(x510/(x511|x512)));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x513 = 4U;
	uint16_t x514 = UINT16_MAX;
	volatile uint8_t x515 = UINT8_MAX;
	static int8_t x516 = -1;
	int32_t t125 = -3;

    t125 = (x513&(x514/(x515|x516)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x517 = -928;
	uint8_t x518 = UINT8_MAX;
	int16_t x520 = -104;
	int32_t t126 = 1;

    t126 = (x517&(x518/(x519|x520)));

    if (t126 != -1024) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int64_t x525 = INT64_MIN;
	volatile uint32_t x526 = 487610U;
	int32_t x527 = -4;
	static int16_t x528 = INT16_MAX;
	static int64_t t127 = 449781488438LL;

    t127 = (x525&(x526/(x527|x528)));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x529 = -1;
	int64_t x531 = INT64_MIN;
	static int32_t x532 = 306044;
	int64_t t128 = 10LL;

    t128 = (x529&(x530/(x531|x532)));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x533 = UINT32_MAX;
	uint32_t x534 = 836U;
	static int8_t x535 = INT8_MIN;
	uint64_t x536 = 2082444998LLU;
	uint64_t t129 = 3958682699959LLU;

    t129 = (x533&(x534/(x535|x536)));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x537 = 0U;
	int32_t x538 = -1;
	uint64_t x539 = 5LLU;
	uint64_t t130 = 47LLU;

    t130 = (x537&(x538/(x539|x540)));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x541 = UINT32_MAX;
	static uint64_t x543 = UINT64_MAX;
	int64_t x544 = INT64_MIN;
	uint64_t t131 = 5245916586LLU;

    t131 = (x541&(x542/(x543|x544)));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x545 = UINT16_MAX;
	int16_t x546 = INT16_MAX;
	static int32_t x547 = -1;
	static int32_t x548 = 207813292;
	volatile int32_t t132 = -28857913;

    t132 = (x545&(x546/(x547|x548)));

    if (t132 != 32769) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x549 = -1;
	uint64_t x550 = 840992154LLU;
	volatile uint16_t x551 = 2942U;
	volatile uint64_t t133 = 1451772LLU;

    t133 = (x549&(x550/(x551|x552)));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x553 = UINT32_MAX;
	int8_t x554 = -1;
	int64_t x555 = 46141782LL;
	volatile int32_t x556 = -1;

    t134 = (x553&(x554/(x555|x556)));

    if (t134 != 1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x558 = 0U;
	int16_t x559 = 6;
	static volatile int64_t t135 = 2LL;

    t135 = (x557&(x558/(x559|x560)));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x561 = 1;
	int8_t x562 = INT8_MIN;
	volatile int32_t t136 = 7;

    t136 = (x561&(x562/(x563|x564)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t t137 = -63156948764LL;

    t137 = (x565&(x566/(x567|x568)));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x569 = -1;
	static int32_t x570 = -24002491;
	volatile uint32_t x572 = UINT32_MAX;
	static int64_t t138 = -34109433207LL;

    t138 = (x569&(x570/(x571|x572)));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x573 = INT64_MAX;
	int64_t x574 = 727634228974347822LL;
	volatile int16_t x575 = -1;
	volatile int64_t x576 = 3730LL;
	int64_t t139 = 197464222200266721LL;

    t139 = (x573&(x574/(x575|x576)));

    if (t139 != 8495737807880427986LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x578 = INT8_MIN;
	int64_t x579 = -1LL;
	static volatile int8_t x580 = 1;
	volatile int64_t t140 = 253LL;

    t140 = (x577&(x578/(x579|x580)));

    if (t140 != 128LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x581 = INT8_MAX;
	static volatile int64_t x582 = 541679602098832147LL;
	int32_t x583 = 70;
	int32_t x584 = -91908;
	int64_t t141 = 825505LL;

    t141 = (x581&(x582/(x583|x584)));

    if (t141 != 22LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x586 = INT16_MIN;
	uint64_t x587 = 3144043737677778212LLU;
	int32_t x588 = -1;
	static uint64_t t142 = 7634637633777LLU;

    t142 = (x585&(x586/(x587|x588)));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x589 = 60LL;
	int64_t x590 = INT64_MIN;
	uint8_t x591 = UINT8_MAX;
	static volatile int64_t x592 = INT64_MAX;
	int64_t t143 = -36LL;

    t143 = (x589&(x590/(x591|x592)));

    if (t143 != 60LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x593 = -1;
	static int64_t x595 = -1LL;
	static volatile uint16_t x596 = UINT16_MAX;
	static int64_t t144 = -11226110506LL;

    t144 = (x593&(x594/(x595|x596)));

    if (t144 != 128LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x597 = -1;
	int16_t x598 = -1;
	volatile int64_t x599 = 9888LL;
	uint64_t x600 = 1018869114021383LLU;
	volatile uint64_t t145 = 22921508280760894LLU;

    t145 = (x597&(x598/(x599|x600)));

    if (t145 != 18105LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x601 = -2672;
	uint64_t x602 = 1787508136882LLU;
	volatile uint32_t x603 = 620566112U;
	static uint64_t t146 = 18690279436249790LLU;

    t146 = (x601&(x602/(x603|x604)));

    if (t146 != 256LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x606 = -1;
	static uint8_t x607 = UINT8_MAX;

    t147 = (x605&(x606/(x607|x608)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x609 = -1LL;
	int16_t x610 = INT16_MIN;
	int16_t x611 = -1;
	int16_t x612 = 9;

    t148 = (x609&(x610/(x611|x612)));

    if (t148 != 32768LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x613 = 10417U;
	static volatile uint64_t x614 = 2389LLU;
	int64_t x615 = INT64_MAX;
	int8_t x616 = INT8_MAX;
	uint64_t t149 = 1738816655244929LLU;

    t149 = (x613&(x614/(x615|x616)));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x617 = UINT32_MAX;
	static int8_t x619 = 41;
	uint64_t t150 = 24997LLU;

    t150 = (x617&(x618/(x619|x620)));

    if (t150 != 541098242LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int64_t x621 = INT64_MIN;
	uint8_t x622 = 14U;
	int16_t x623 = -1;

    t151 = (x621&(x622/(x623|x624)));

    if (t151 != INT64_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x625 = 746141482106LLU;
	static volatile int64_t x626 = -1LL;
	int8_t x627 = 1;
	static int8_t x628 = -1;
	uint64_t t152 = 304040984053230LLU;

    t152 = (x625&(x626/(x627|x628)));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x629 = -20;
	int16_t x630 = INT16_MIN;
	uint16_t x631 = UINT16_MAX;
	static int16_t x632 = -1;
	static int32_t t153 = -54273;

    t153 = (x629&(x630/(x631|x632)));

    if (t153 != 32768) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x633 = INT32_MIN;
	int8_t x634 = INT8_MAX;
	volatile int32_t x635 = INT32_MIN;
	static uint16_t x636 = 12622U;
	volatile int32_t t154 = -615149;

    t154 = (x633&(x634/(x635|x636)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x637 = INT8_MIN;
	int64_t x638 = INT64_MIN;
	int8_t x639 = 1;
	int32_t x640 = INT32_MIN;
	volatile int64_t t155 = -819937936457LL;

    t155 = (x637&(x638/(x639|x640)));

    if (t155 != 4294967296LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x641 = UINT16_MAX;
	int16_t x642 = INT16_MIN;
	uint32_t x643 = 18460670U;
	volatile int64_t x644 = INT64_MIN;
	int64_t t156 = 3664751660355771LL;

    t156 = (x641&(x642/(x643|x644)));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x645 = INT8_MIN;
	volatile int64_t x646 = -1LL;
	static volatile int64_t t157 = -1327LL;

    t157 = (x645&(x646/(x647|x648)));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x649 = 8;
	static int64_t x650 = INT64_MIN;
	static uint8_t x651 = 0U;
	uint64_t x652 = 3900124LLU;
	static volatile uint64_t t158 = 2283LLU;

    t158 = (x649&(x650/(x651|x652)));

    if (t158 != 8LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x654 = INT8_MIN;
	int16_t x655 = INT16_MAX;
	volatile int64_t t159 = -31137604526480LL;

    t159 = (x653&(x654/(x655|x656)));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x657 = INT32_MIN;
	int16_t x658 = INT16_MIN;
	uint32_t x659 = 1U;

    t160 = (x657&(x658/(x659|x660)));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x661 = INT8_MIN;
	volatile int16_t x662 = INT16_MIN;
	uint16_t x663 = UINT16_MAX;
	static int32_t x664 = INT32_MIN;
	static int32_t t161 = 1;

    t161 = (x661&(x662/(x663|x664)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x665 = INT8_MIN;
	uint32_t x666 = UINT32_MAX;
	static int64_t x667 = -14034297980LL;
	int32_t x668 = INT32_MIN;
	int64_t t162 = -555105275564820LL;

    t162 = (x665&(x666/(x667|x668)));

    if (t162 != -128LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x670 = -6;
	uint16_t x671 = UINT16_MAX;
	static volatile uint64_t t163 = 11203026940LLU;

    t163 = (x669&(x670/(x671|x672)));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x673 = 251818LLU;
	uint64_t x675 = UINT64_MAX;

    t164 = (x673&(x674/(x675|x676)));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x678 = INT64_MAX;
	int32_t x679 = -1;
	static volatile int64_t t165 = INT64_MIN;

    t165 = (x677&(x678/(x679|x680)));

    if (t165 != INT64_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x681 = 4780U;
	int16_t x682 = INT16_MIN;
	volatile uint16_t x683 = 14U;
	uint64_t x684 = 1811346628051550LLU;
	static uint64_t t166 = 330747733857505LLU;

    t166 = (x681&(x682/(x683|x684)));

    if (t166 != 644LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int64_t x685 = INT64_MIN;
	volatile int16_t x686 = INT16_MIN;
	int32_t x687 = INT32_MIN;
	static volatile uint8_t x688 = 16U;
	static volatile int64_t t167 = -199LL;

    t167 = (x685&(x686/(x687|x688)));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x693 = 0;
	volatile uint32_t x694 = 105278U;
	int32_t x696 = INT32_MIN;
	volatile uint32_t t168 = 435513636U;

    t168 = (x693&(x694/(x695|x696)));

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x697 = 63877214224LL;
	uint16_t x698 = 12005U;
	int64_t x699 = -21000LL;
	int64_t t169 = -105957321LL;

    t169 = (x697&(x698/(x699|x700)));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x702 = INT64_MIN;
	int16_t x703 = INT16_MAX;

    t170 = (x701&(x702/(x703|x704)));

    if (t170 != 9223090553287868408LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x705 = INT16_MIN;
	int8_t x706 = 56;
	int64_t t171 = -15089682672925457LL;

    t171 = (x705&(x706/(x707|x708)));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x710 = UINT64_MAX;
	int16_t x711 = -1;
	int16_t x712 = -1;
	volatile uint64_t t172 = 499393790915574508LLU;

    t172 = (x709&(x710/(x711|x712)));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x713 = UINT32_MAX;
	int64_t x714 = INT64_MIN;
	volatile uint16_t x715 = 9U;
	int8_t x716 = INT8_MAX;
	volatile int64_t t173 = 39185LL;

    t173 = (x713&(x714/(x715|x716)));

    if (t173 != 4024418175LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x719 = 7845LLU;
	volatile int16_t x720 = INT16_MAX;
	volatile uint64_t t174 = 14304308279888070LLU;

    t174 = (x717&(x718/(x719|x720)));

    if (t174 != 262152LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x721 = 16333;
	int8_t x723 = 1;
	volatile int8_t x724 = INT8_MIN;
	volatile int32_t t175 = 1335;

    t175 = (x721&(x722/(x723|x724)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x726 = UINT64_MAX;
	uint16_t x728 = 220U;
	static volatile uint64_t t176 = 5365805233LLU;

    t176 = (x725&(x726/(x727|x728)));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x729 = INT8_MAX;
	int32_t x730 = INT32_MIN;
	static volatile uint64_t x731 = 6900736556LLU;

    t177 = (x729&(x730/(x731|x732)));

    if (t177 != 64LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x733 = INT8_MIN;
	int8_t x734 = 3;
	uint32_t x735 = 3335U;
	int16_t x736 = INT16_MIN;
	volatile uint32_t t178 = 125U;

    t178 = (x733&(x734/(x735|x736)));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x737 = 792086486088LLU;
	int64_t x738 = -1LL;
	static uint32_t x739 = 83875U;
	uint32_t x740 = 23179U;
	static uint64_t t179 = 17971111489919832LLU;

    t179 = (x737&(x738/(x739|x740)));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x741 = -1937158125935LL;
	uint16_t x742 = 48U;
	uint64_t x743 = 216LLU;
	uint64_t x744 = UINT64_MAX;
	uint64_t t180 = 18108916986575LLU;

    t180 = (x741&(x742/(x743|x744)));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x746 = 740;
	int16_t x747 = -1;
	volatile uint16_t x748 = 3U;

    t181 = (x745&(x746/(x747|x748)));

    if (t181 != 4) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x749 = UINT32_MAX;
	uint8_t x750 = 7U;
	volatile uint16_t x751 = 22183U;
	static int32_t x752 = -1;
	uint32_t t182 = 129020904U;

    t182 = (x749&(x750/(x751|x752)));

    if (t182 != 4294967289U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x754 = -1;
	volatile int8_t x755 = -3;
	int16_t x756 = INT16_MIN;
	volatile int32_t t183 = 1;

    t183 = (x753&(x754/(x755|x756)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x757 = UINT32_MAX;
	uint16_t x758 = 1U;
	int8_t x759 = INT8_MIN;
	static volatile uint16_t x760 = UINT16_MAX;
	uint32_t t184 = UINT32_MAX;

    t184 = (x757&(x758/(x759|x760)));

    if (t184 != UINT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x761 = 3679;
	uint64_t x762 = UINT64_MAX;
	static volatile int64_t x764 = -72968904505793218LL;
	volatile uint64_t t185 = 13035LLU;

    t185 = (x761&(x762/(x763|x764)));

    if (t185 != 1LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x765 = -1;
	static int8_t x766 = -1;
	uint16_t x768 = 361U;
	int32_t t186 = -48;

    t186 = (x765&(x766/(x767|x768)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x770 = -1LL;
	uint8_t x771 = UINT8_MAX;
	uint8_t x772 = UINT8_MAX;
	volatile int64_t t187 = -2985843126LL;

    t187 = (x769&(x770/(x771|x772)));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x773 = UINT8_MAX;
	int64_t x774 = INT64_MAX;
	volatile int64_t x775 = -126194066628LL;
	int64_t x776 = -887614314034133LL;
	volatile int64_t t188 = -1150063827760457LL;

    t188 = (x773&(x774/(x775|x776)));

    if (t188 != 158LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x777 = 7441905840889091205LLU;
	int64_t x779 = -1073540187548LL;
	volatile int64_t x780 = -69120963718391946LL;
	volatile uint64_t t189 = 233936LLU;

    t189 = (x777&(x778/(x779|x780)));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x781 = -73706LL;
	static int64_t x782 = -1LL;
	volatile int64_t x783 = INT64_MIN;
	int32_t x784 = -82389;
	int64_t t190 = 123237606172659LL;

    t190 = (x781&(x782/(x783|x784)));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x786 = -3;
	int16_t x788 = INT16_MAX;
	static int32_t t191 = -27031;

    t191 = (x785&(x786/(x787|x788)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x789 = 1;
	static uint16_t x790 = 27U;
	static int64_t x791 = 997507319014LL;

    t192 = (x789&(x790/(x791|x792)));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x793 = -1;
	static int16_t x794 = INT16_MIN;
	static int8_t x795 = 0;
	volatile int32_t t193 = 517;

    t193 = (x793&(x794/(x795|x796)));

    if (t193 != -2730) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x797 = -1LL;
	volatile uint16_t x798 = UINT16_MAX;
	int32_t x800 = INT32_MIN;
	int64_t t194 = 15930955303002LL;

    t194 = (x797&(x798/(x799|x800)));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x801 = 7455U;
	uint64_t x802 = UINT64_MAX;
	volatile int64_t x803 = -767487LL;
	int16_t x804 = INT16_MIN;
	static volatile uint64_t t195 = 63799784488LLU;

    t195 = (x801&(x802/(x803|x804)));

    if (t195 != 1LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x805 = 1;
	volatile int16_t x806 = 828;
	int32_t x808 = -1;
	int32_t t196 = -83342;

    t196 = (x805&(x806/(x807|x808)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x810 = INT8_MIN;
	static volatile int64_t x811 = INT64_MIN;
	volatile int64_t t197 = -133415844LL;

    t197 = (x809&(x810/(x811|x812)));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x813 = -1;
	int8_t x814 = INT8_MAX;
	static int32_t x816 = 234507;
	volatile int32_t t198 = 141036384;

    t198 = (x813&(x814/(x815|x816)));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x817 = INT8_MAX;
	int32_t x818 = INT32_MAX;
	uint32_t x819 = UINT32_MAX;
	volatile uint64_t x820 = 32790658679047452LLU;
	volatile uint64_t t199 = 7080469482LLU;

    t199 = (x817&(x818/(x819|x820)));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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


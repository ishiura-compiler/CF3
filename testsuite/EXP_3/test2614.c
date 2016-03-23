
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

int32_t x5 = INT32_MIN;
int64_t x6 = 228939LL;
volatile int64_t x9 = -1LL;
int64_t x12 = 20282699LL;
int16_t x17 = 133;
int16_t x19 = 17;
int64_t x22 = 1LL;
int32_t x26 = 7982268;
int32_t x30 = 295118;
int32_t x36 = -17754;
int32_t t10 = -1;
int32_t x45 = -1;
volatile uint64_t x47 = 506427LLU;
int8_t x55 = INT8_MIN;
int32_t t13 = -9218;
static int32_t x58 = INT32_MIN;
uint32_t x59 = 2656340U;
int32_t x64 = -1;
int32_t t15 = -5378983;
int16_t x65 = -1;
uint64_t x70 = 3440486089000LLU;
static volatile int32_t t17 = 9769382;
uint32_t x79 = 29U;
int16_t x81 = -1;
int32_t x84 = 148;
int8_t x86 = INT8_MAX;
int16_t x93 = -1080;
int8_t x97 = INT8_MAX;
volatile uint16_t x103 = 115U;
uint16_t x113 = UINT16_MAX;
int16_t x116 = INT16_MIN;
volatile int32_t t27 = -10;
int16_t x118 = INT16_MAX;
uint16_t x125 = 13U;
static int8_t x129 = -47;
uint8_t x130 = UINT8_MAX;
static int64_t x137 = 352116166201LL;
int32_t x138 = -1;
int64_t x139 = 16684128958127443LL;
int32_t t33 = 107997;
int8_t x142 = -1;
static volatile int32_t t35 = 92257;
volatile int8_t x155 = INT8_MAX;
uint64_t x156 = 7723188325684226LLU;
int8_t x163 = 1;
int8_t x164 = -1;
static volatile int8_t x166 = 21;
volatile int32_t t40 = -2;
static uint64_t x179 = UINT64_MAX;
static int32_t x187 = INT32_MIN;
uint8_t x191 = UINT8_MAX;
static int32_t t46 = -1977;
volatile int64_t x198 = -58238436022LL;
uint8_t x200 = 125U;
volatile int32_t t47 = -1;
int8_t x201 = INT8_MIN;
volatile uint64_t x204 = UINT64_MAX;
static int32_t x205 = -6;
static int32_t t49 = 21;
static int8_t x209 = INT8_MIN;
static int8_t x213 = INT8_MAX;
int16_t x218 = -1;
int32_t t52 = 1;
uint16_t x221 = 6708U;
int16_t x223 = INT16_MAX;
int32_t x228 = INT32_MIN;
uint32_t x230 = 4U;
static volatile int8_t x234 = -1;
static volatile uint32_t x235 = 7809044U;
int32_t x245 = INT32_MIN;
int8_t x248 = INT8_MAX;
static volatile int32_t t60 = -202;
int64_t x257 = INT64_MIN;
int64_t x263 = 3008564199738LL;
uint8_t x280 = 3U;
volatile int64_t x281 = INT64_MIN;
int32_t t67 = 259544820;
static int8_t x287 = -1;
static int32_t t69 = 38;
int16_t x295 = -1;
int32_t x296 = INT32_MIN;
int8_t x298 = INT8_MAX;
int64_t x305 = INT64_MAX;
volatile int64_t x307 = INT64_MIN;
static uint16_t x308 = 0U;
int32_t x311 = -1;
int16_t x314 = -5;
static int32_t x316 = INT32_MIN;
int32_t x325 = -31;
static int64_t x326 = -1LL;
static int16_t x328 = 5618;
volatile int32_t x331 = INT32_MIN;
uint64_t x332 = 40055LLU;
int16_t x333 = INT16_MIN;
int8_t x335 = -1;
static volatile int32_t t80 = 8486;
uint8_t x341 = 21U;
uint8_t x351 = 6U;
static volatile int32_t t85 = 29776;
uint8_t x361 = UINT8_MAX;
int32_t t87 = 48796017;
volatile int64_t x365 = -1LL;
int8_t x371 = INT8_MIN;
int64_t x379 = INT64_MIN;
volatile int8_t x383 = INT8_MIN;
uint32_t x384 = 220609U;
int16_t x385 = 8832;
static int32_t x387 = -1;
static int64_t x398 = 761579LL;
uint32_t x399 = 41173U;
uint64_t x401 = 6767739745363542291LLU;
static volatile uint8_t x402 = 6U;
static uint32_t x404 = UINT32_MAX;
int64_t x407 = -1LL;
static volatile uint8_t x408 = UINT8_MAX;
static int64_t x411 = 25101LL;
int16_t x413 = INT16_MIN;
uint32_t x419 = 4197U;
int64_t x422 = -1LL;
uint64_t x425 = 2473548084899785792LLU;
static int64_t x426 = 36LL;
uint64_t x430 = UINT64_MAX;
int32_t x436 = INT32_MIN;
int32_t t105 = 1870072;
volatile int16_t x441 = 1;
static int32_t x443 = -1;
uint16_t x448 = 5U;
volatile int32_t t109 = 865670;
volatile int8_t x458 = -5;
int8_t x460 = -1;
volatile uint32_t x462 = UINT32_MAX;
int32_t t112 = 3;
static int32_t t113 = -17208761;
uint8_t x471 = 2U;
uint8_t x479 = UINT8_MAX;
static int32_t x480 = INT32_MAX;
int8_t x493 = INT8_MAX;
uint16_t x494 = UINT16_MAX;
int32_t x495 = -208773;
volatile int8_t x499 = 4;
volatile int64_t x509 = INT64_MIN;
volatile int32_t x520 = INT32_MIN;
int32_t t125 = 666590900;
static int16_t x523 = -1;
volatile int16_t x534 = -28;
static int32_t x544 = INT32_MAX;
uint16_t x549 = 308U;
volatile int32_t t133 = -1;
uint64_t x555 = 73865LLU;
volatile int32_t t135 = 21;
volatile uint64_t x568 = UINT64_MAX;
int16_t x570 = -1;
static uint32_t x571 = UINT32_MAX;
static volatile int32_t t140 = 1397177;
static int16_t x589 = -54;
static uint8_t x590 = 3U;
static volatile int32_t t143 = -11387592;
int64_t x594 = -206873778558952LL;
int32_t t145 = 0;
int8_t x602 = INT8_MIN;
int32_t t146 = 0;
volatile uint32_t x616 = 218850237U;
int32_t t150 = -1;
uint64_t x622 = UINT64_MAX;
int32_t x625 = 373;
uint64_t x636 = UINT64_MAX;
uint32_t x645 = 255U;
int32_t t159 = -741146;
uint64_t x657 = UINT64_MAX;
static int32_t x658 = INT32_MIN;
uint32_t x667 = 1893683U;
uint64_t x670 = UINT64_MAX;
static volatile int8_t x671 = -1;
uint8_t x673 = UINT8_MAX;
int8_t x674 = -1;
int64_t x680 = INT64_MIN;
uint32_t x692 = UINT32_MAX;
volatile int32_t t169 = 17000934;
int16_t x697 = INT16_MAX;
static int16_t x698 = INT16_MIN;
int32_t t170 = 4744796;
uint16_t x702 = 3U;
uint8_t x708 = UINT8_MAX;
int32_t t174 = 807911302;
int16_t x721 = INT16_MIN;
int32_t x723 = 567042324;
volatile int32_t t177 = 415982087;
volatile int8_t x735 = -1;
uint32_t x740 = UINT32_MAX;
static int8_t x741 = INT8_MIN;
uint64_t x743 = UINT64_MAX;
uint8_t x744 = 7U;
volatile int32_t t183 = 2;
volatile uint64_t x756 = 250703338947467LLU;
uint64_t x757 = 1LLU;
volatile int32_t t185 = -1;
int16_t x762 = -1;
int64_t x763 = INT64_MIN;
volatile uint32_t x765 = 16U;
int64_t x770 = INT64_MIN;
uint64_t x773 = 878436476634LLU;
uint8_t x774 = 107U;
volatile int16_t x776 = -1;
volatile int16_t x777 = INT16_MAX;
int32_t x778 = INT32_MAX;
uint32_t x783 = 802834400U;
static int8_t x791 = -4;
static int32_t x795 = INT32_MAX;
static int32_t t194 = 14319;
uint16_t x799 = 692U;
volatile int32_t t197 = -3479;
int64_t x811 = -28616192233LL;
volatile int32_t t198 = 21588;
int64_t x814 = INT64_MAX;


void f0(void) {
    	static int32_t x1 = INT32_MIN;
	volatile uint32_t x2 = UINT32_MAX;
	int16_t x3 = INT16_MIN;
	volatile uint8_t x4 = 0U;
	static volatile int32_t t0 = 7411;

    t0 = ((x1%x2)<=(x3^x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x7 = UINT32_MAX;
	uint32_t x8 = 9U;
	int32_t t1 = 483;

    t1 = ((x5%x6)<=(x7^x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x10 = 242U;
	uint16_t x11 = 3U;
	volatile int32_t t2 = 3;

    t2 = ((x9%x10)<=(x11^x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	uint8_t x14 = UINT8_MAX;
	static uint32_t x15 = 3U;
	uint32_t x16 = 8004373U;
	int32_t t3 = -8243010;

    t3 = ((x13%x14)<=(x15^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x18 = 237U;
	static int64_t x20 = 386LL;
	int32_t t4 = -16574;

    t4 = ((x17%x18)<=(x19^x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = -1;
	uint16_t x23 = UINT16_MAX;
	uint64_t x24 = 1176377842329LLU;
	int32_t t5 = -383916;

    t5 = ((x21%x22)<=(x23^x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x25 = UINT8_MAX;
	uint32_t x27 = 294457U;
	uint16_t x28 = 11207U;
	int32_t t6 = 1;

    t6 = ((x25%x26)<=(x27^x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	volatile int16_t x31 = INT16_MIN;
	uint8_t x32 = 1U;
	static int32_t t7 = -2285464;

    t7 = ((x29%x30)<=(x31^x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	static int8_t x34 = -1;
	volatile int16_t x35 = -1;
	volatile int32_t t8 = -41930;

    t8 = ((x33%x34)<=(x35^x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = INT16_MAX;
	int32_t x38 = INT32_MIN;
	int32_t x39 = INT32_MIN;
	static int8_t x40 = 26;
	volatile int32_t t9 = -250;

    t9 = ((x37%x38)<=(x39^x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x41 = UINT64_MAX;
	static uint16_t x42 = 3U;
	uint8_t x43 = 0U;
	int64_t x44 = INT64_MIN;

    t10 = ((x41%x42)<=(x43^x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x46 = 77U;
	int16_t x48 = 157;
	int32_t t11 = -1148449;

    t11 = ((x45%x46)<=(x47^x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x49 = 12U;
	uint64_t x50 = UINT64_MAX;
	static int64_t x51 = INT64_MIN;
	static uint16_t x52 = UINT16_MAX;
	static volatile int32_t t12 = 62013;

    t12 = ((x49%x50)<=(x51^x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = 1;
	int8_t x54 = -54;
	uint8_t x56 = 0U;

    t13 = ((x53%x54)<=(x55^x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 10U;
	int8_t x60 = -1;
	volatile int32_t t14 = -249719;

    t14 = ((x57%x58)<=(x59^x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 3128264U;
	static uint64_t x62 = UINT64_MAX;
	int8_t x63 = 1;

    t15 = ((x61%x62)<=(x63^x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x66 = 64718297829449LLU;
	int32_t x67 = -2115844;
	uint8_t x68 = UINT8_MAX;
	volatile int32_t t16 = 26993199;

    t16 = ((x65%x66)<=(x67^x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -1LL;
	volatile int32_t x71 = -1;
	int64_t x72 = 1353327454LL;

    t17 = ((x69%x70)<=(x71^x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = UINT32_MAX;
	volatile uint16_t x74 = UINT16_MAX;
	int64_t x75 = INT64_MIN;
	volatile int32_t x76 = -347878240;
	int32_t t18 = 75630677;

    t18 = ((x73%x74)<=(x75^x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = -1993866;
	int32_t x78 = INT32_MIN;
	int64_t x80 = INT64_MAX;
	volatile int32_t t19 = 47321;

    t19 = ((x77%x78)<=(x79^x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x82 = INT8_MAX;
	int16_t x83 = 743;
	volatile int32_t t20 = 11396;

    t20 = ((x81%x82)<=(x83^x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x85 = 121U;
	uint32_t x87 = UINT32_MAX;
	int32_t x88 = INT32_MIN;
	static int32_t t21 = 1355985;

    t21 = ((x85%x86)<=(x87^x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x94 = UINT64_MAX;
	int16_t x95 = INT16_MIN;
	int16_t x96 = INT16_MAX;
	static volatile int32_t t22 = -492078655;

    t22 = ((x93%x94)<=(x95^x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int64_t x98 = -1LL;
	int64_t x99 = -1LL;
	int64_t x100 = INT64_MAX;
	volatile int32_t t23 = 342589803;

    t23 = ((x97%x98)<=(x99^x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x101 = UINT32_MAX;
	uint16_t x102 = 75U;
	static volatile int32_t x104 = INT32_MIN;
	volatile int32_t t24 = 4490499;

    t24 = ((x101%x102)<=(x103^x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x105 = -83;
	uint16_t x106 = 486U;
	int32_t x107 = INT32_MIN;
	static int8_t x108 = INT8_MIN;
	volatile int32_t t25 = 710225;

    t25 = ((x105%x106)<=(x107^x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = 1;
	static volatile int32_t x110 = 7705469;
	int8_t x111 = INT8_MAX;
	int64_t x112 = INT64_MIN;
	static volatile int32_t t26 = 432;

    t26 = ((x109%x110)<=(x111^x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x114 = INT64_MIN;
	uint8_t x115 = UINT8_MAX;

    t27 = ((x113%x114)<=(x115^x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x117 = 3LLU;
	int16_t x119 = 56;
	static int64_t x120 = INT64_MAX;
	int32_t t28 = 0;

    t28 = ((x117%x118)<=(x119^x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x121 = INT16_MAX;
	int32_t x122 = INT32_MIN;
	int16_t x123 = INT16_MIN;
	static int8_t x124 = INT8_MIN;
	int32_t t29 = -76;

    t29 = ((x121%x122)<=(x123^x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x126 = INT32_MIN;
	volatile int32_t x127 = INT32_MAX;
	int8_t x128 = -1;
	volatile int32_t t30 = 46181745;

    t30 = ((x125%x126)<=(x127^x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x131 = INT8_MIN;
	int8_t x132 = INT8_MAX;
	volatile int32_t t31 = 0;

    t31 = ((x129%x130)<=(x131^x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x133 = UINT8_MAX;
	uint16_t x134 = 811U;
	uint64_t x135 = 1117LLU;
	int8_t x136 = -1;
	int32_t t32 = -1;

    t32 = ((x133%x134)<=(x135^x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x140 = 241U;

    t33 = ((x137%x138)<=(x139^x140));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x141 = 52LL;
	uint8_t x143 = 9U;
	static volatile int32_t x144 = INT32_MIN;
	volatile int32_t t34 = 1020;

    t34 = ((x141%x142)<=(x143^x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x145 = UINT32_MAX;
	int32_t x146 = INT32_MIN;
	int16_t x147 = -2;
	uint32_t x148 = 84213U;

    t35 = ((x145%x146)<=(x147^x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x149 = INT8_MIN;
	int64_t x150 = INT64_MIN;
	static uint32_t x151 = 30292350U;
	volatile int16_t x152 = 2059;
	int32_t t36 = 10;

    t36 = ((x149%x150)<=(x151^x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = -1790527419384845492LL;
	int64_t x154 = 20683760010155983LL;
	volatile int32_t t37 = -57441482;

    t37 = ((x153%x154)<=(x155^x156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x161 = 3975991492601637512LLU;
	static volatile int64_t x162 = -1LL;
	volatile int32_t t38 = -12;

    t38 = ((x161%x162)<=(x163^x164));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x165 = INT32_MIN;
	uint32_t x167 = UINT32_MAX;
	static int8_t x168 = INT8_MAX;
	volatile int32_t t39 = -169138539;

    t39 = ((x165%x166)<=(x167^x168));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x169 = -8764;
	uint8_t x170 = 29U;
	uint8_t x171 = UINT8_MAX;
	uint16_t x172 = UINT16_MAX;

    t40 = ((x169%x170)<=(x171^x172));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x173 = UINT64_MAX;
	uint32_t x174 = UINT32_MAX;
	uint8_t x175 = UINT8_MAX;
	uint32_t x176 = 12202U;
	int32_t t41 = -1;

    t41 = ((x173%x174)<=(x175^x176));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x177 = INT8_MIN;
	int16_t x178 = -2677;
	static uint16_t x180 = 4840U;
	volatile int32_t t42 = -13896;

    t42 = ((x177%x178)<=(x179^x180));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x181 = -1;
	int64_t x182 = -1LL;
	static int16_t x183 = INT16_MIN;
	int8_t x184 = -1;
	int32_t t43 = -55;

    t43 = ((x181%x182)<=(x183^x184));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x185 = INT8_MAX;
	uint32_t x186 = 5191U;
	volatile int16_t x188 = INT16_MAX;
	int32_t t44 = -66885438;

    t44 = ((x185%x186)<=(x187^x188));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x189 = -46922104;
	int32_t x190 = INT32_MIN;
	static int32_t x192 = INT32_MIN;
	int32_t t45 = -503;

    t45 = ((x189%x190)<=(x191^x192));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x193 = UINT64_MAX;
	volatile int8_t x194 = -25;
	int8_t x195 = -1;
	static volatile uint64_t x196 = 68772LLU;

    t46 = ((x193%x194)<=(x195^x196));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x197 = INT64_MAX;
	volatile uint32_t x199 = 4U;

    t47 = ((x197%x198)<=(x199^x200));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x202 = 1U;
	int16_t x203 = -1;
	int32_t t48 = -14;

    t48 = ((x201%x202)<=(x203^x204));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x206 = INT64_MAX;
	static int64_t x207 = INT64_MAX;
	static int16_t x208 = -1;

    t49 = ((x205%x206)<=(x207^x208));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x210 = INT16_MIN;
	int32_t x211 = INT32_MIN;
	int64_t x212 = -1LL;
	volatile int32_t t50 = 0;

    t50 = ((x209%x210)<=(x211^x212));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x214 = -17LL;
	static uint16_t x215 = 3374U;
	static uint64_t x216 = UINT64_MAX;
	int32_t t51 = -4457;

    t51 = ((x213%x214)<=(x215^x216));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x217 = 3055806398LLU;
	volatile uint32_t x219 = 105206U;
	int32_t x220 = 55292;

    t52 = ((x217%x218)<=(x219^x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x222 = 1185U;
	int32_t x224 = 52518;
	int32_t t53 = 89;

    t53 = ((x221%x222)<=(x223^x224));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x225 = UINT8_MAX;
	int8_t x226 = INT8_MIN;
	int8_t x227 = -12;
	static volatile int32_t t54 = -1;

    t54 = ((x225%x226)<=(x227^x228));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x229 = INT64_MIN;
	int64_t x231 = INT64_MIN;
	int32_t x232 = 2519300;
	int32_t t55 = 66343;

    t55 = ((x229%x230)<=(x231^x232));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x233 = 0U;
	int64_t x236 = INT64_MIN;
	volatile int32_t t56 = -62550;

    t56 = ((x233%x234)<=(x235^x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x237 = 1973265363U;
	int64_t x238 = INT64_MIN;
	int16_t x239 = INT16_MIN;
	int32_t x240 = -1;
	static volatile int32_t t57 = 357;

    t57 = ((x237%x238)<=(x239^x240));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x246 = INT16_MIN;
	static volatile int8_t x247 = -1;
	int32_t t58 = -13;

    t58 = ((x245%x246)<=(x247^x248));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x249 = INT64_MIN;
	volatile int64_t x250 = -1LL;
	int8_t x251 = INT8_MIN;
	uint16_t x252 = 27734U;
	volatile int32_t t59 = -3964660;

    t59 = ((x249%x250)<=(x251^x252));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x253 = 2676U;
	uint64_t x254 = UINT64_MAX;
	uint16_t x255 = UINT16_MAX;
	uint16_t x256 = 15326U;

    t60 = ((x253%x254)<=(x255^x256));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x258 = -37;
	int32_t x259 = -2;
	static volatile uint16_t x260 = UINT16_MAX;
	int32_t t61 = -279627862;

    t61 = ((x257%x258)<=(x259^x260));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x261 = 27621;
	uint32_t x262 = UINT32_MAX;
	int64_t x264 = INT64_MIN;
	int32_t t62 = -57789;

    t62 = ((x261%x262)<=(x263^x264));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x265 = 27U;
	int32_t x266 = INT32_MIN;
	int16_t x267 = 1687;
	int32_t x268 = INT32_MIN;
	int32_t t63 = -101987;

    t63 = ((x265%x266)<=(x267^x268));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x269 = 3253881619830690LL;
	static int8_t x270 = INT8_MAX;
	uint16_t x271 = 1348U;
	int64_t x272 = INT64_MIN;
	volatile int32_t t64 = 3;

    t64 = ((x269%x270)<=(x271^x272));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x273 = 353U;
	static uint32_t x274 = UINT32_MAX;
	int64_t x275 = -2489851082562314LL;
	int16_t x276 = INT16_MIN;
	static volatile int32_t t65 = 3;

    t65 = ((x273%x274)<=(x275^x276));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x277 = 0U;
	int16_t x278 = -8263;
	static int16_t x279 = INT16_MAX;
	int32_t t66 = -4514;

    t66 = ((x277%x278)<=(x279^x280));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x282 = UINT32_MAX;
	uint32_t x283 = UINT32_MAX;
	int64_t x284 = -167285683137977LL;

    t67 = ((x281%x282)<=(x283^x284));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x285 = -1;
	int16_t x286 = INT16_MIN;
	static uint32_t x288 = 7048748U;
	int32_t t68 = 7260;

    t68 = ((x285%x286)<=(x287^x288));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x289 = -1;
	static uint64_t x290 = 102683687982188086LLU;
	static int16_t x291 = INT16_MAX;
	uint16_t x292 = 855U;

    t69 = ((x289%x290)<=(x291^x292));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x293 = 0U;
	uint32_t x294 = UINT32_MAX;
	int32_t t70 = 0;

    t70 = ((x293%x294)<=(x295^x296));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x297 = INT16_MAX;
	volatile int16_t x299 = INT16_MIN;
	volatile uint8_t x300 = 36U;
	int32_t t71 = -599;

    t71 = ((x297%x298)<=(x299^x300));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x301 = 20;
	uint16_t x302 = UINT16_MAX;
	int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MIN;
	static volatile int32_t t72 = -3652;

    t72 = ((x301%x302)<=(x303^x304));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x306 = 7362424;
	int32_t t73 = 11182291;

    t73 = ((x305%x306)<=(x307^x308));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x309 = 1805LL;
	static volatile uint64_t x310 = 12488386LLU;
	int32_t x312 = INT32_MAX;
	volatile int32_t t74 = 2460;

    t74 = ((x309%x310)<=(x311^x312));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x313 = UINT32_MAX;
	uint32_t x315 = 0U;
	int32_t t75 = -2;

    t75 = ((x313%x314)<=(x315^x316));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x317 = -32384591LL;
	int64_t x318 = -24699933448LL;
	int16_t x319 = INT16_MIN;
	volatile uint8_t x320 = 111U;
	int32_t t76 = -1;

    t76 = ((x317%x318)<=(x319^x320));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x321 = 23198917542603259LL;
	volatile int64_t x322 = INT64_MAX;
	static uint16_t x323 = UINT16_MAX;
	int32_t x324 = -660130;
	static int32_t t77 = 9488364;

    t77 = ((x321%x322)<=(x323^x324));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x327 = INT8_MAX;
	static int32_t t78 = 66061;

    t78 = ((x325%x326)<=(x327^x328));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x329 = -1;
	int32_t x330 = -278;
	int32_t t79 = 1;

    t79 = ((x329%x330)<=(x331^x332));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x334 = INT64_MAX;
	static int8_t x336 = INT8_MIN;

    t80 = ((x333%x334)<=(x335^x336));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint16_t x337 = UINT16_MAX;
	volatile uint16_t x338 = UINT16_MAX;
	static volatile int8_t x339 = INT8_MAX;
	uint64_t x340 = 9817540059660846LLU;
	volatile int32_t t81 = 2;

    t81 = ((x337%x338)<=(x339^x340));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x342 = -50163942;
	int32_t x343 = 24394;
	int32_t x344 = 440;
	volatile int32_t t82 = 1066;

    t82 = ((x341%x342)<=(x343^x344));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x345 = -1;
	int16_t x346 = 139;
	uint32_t x347 = 0U;
	uint64_t x348 = UINT64_MAX;
	static int32_t t83 = 69;

    t83 = ((x345%x346)<=(x347^x348));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x349 = UINT32_MAX;
	int16_t x350 = -13;
	uint8_t x352 = 13U;
	int32_t t84 = -22782623;

    t84 = ((x349%x350)<=(x351^x352));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x353 = 1532U;
	int8_t x354 = INT8_MAX;
	uint8_t x355 = 9U;
	volatile uint32_t x356 = UINT32_MAX;

    t85 = ((x353%x354)<=(x355^x356));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x357 = UINT32_MAX;
	uint64_t x358 = 817448LLU;
	int16_t x359 = INT16_MIN;
	static int32_t x360 = 56756273;
	volatile int32_t t86 = -48;

    t86 = ((x357%x358)<=(x359^x360));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x362 = 1693LL;
	int32_t x363 = 1;
	int16_t x364 = -59;

    t87 = ((x361%x362)<=(x363^x364));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x366 = 1;
	int32_t x367 = INT32_MAX;
	uint8_t x368 = 5U;
	volatile int32_t t88 = -9680189;

    t88 = ((x365%x366)<=(x367^x368));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x369 = INT16_MAX;
	uint64_t x370 = 67LLU;
	static int8_t x372 = 1;
	volatile int32_t t89 = -3804;

    t89 = ((x369%x370)<=(x371^x372));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x373 = -132109488877977LL;
	int32_t x374 = 900;
	int16_t x375 = INT16_MAX;
	volatile int64_t x376 = -95133260763526LL;
	int32_t t90 = 10289240;

    t90 = ((x373%x374)<=(x375^x376));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x377 = UINT32_MAX;
	volatile int8_t x378 = INT8_MAX;
	volatile int16_t x380 = INT16_MAX;
	volatile int32_t t91 = 572818396;

    t91 = ((x377%x378)<=(x379^x380));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x381 = INT16_MAX;
	volatile int32_t x382 = -1;
	static int32_t t92 = -9085;

    t92 = ((x381%x382)<=(x383^x384));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x386 = -1;
	int64_t x388 = INT64_MIN;
	int32_t t93 = 88;

    t93 = ((x385%x386)<=(x387^x388));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x389 = INT64_MIN;
	static int32_t x390 = -8461;
	volatile int8_t x391 = INT8_MIN;
	uint32_t x392 = 18U;
	volatile int32_t t94 = 12839149;

    t94 = ((x389%x390)<=(x391^x392));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x393 = 5U;
	static volatile int64_t x394 = INT64_MAX;
	int32_t x395 = INT32_MIN;
	static int16_t x396 = 15753;
	volatile int32_t t95 = 14055910;

    t95 = ((x393%x394)<=(x395^x396));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x397 = INT8_MIN;
	uint16_t x400 = 26434U;
	static volatile int32_t t96 = -762626542;

    t96 = ((x397%x398)<=(x399^x400));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x403 = INT32_MAX;
	int32_t t97 = 1;

    t97 = ((x401%x402)<=(x403^x404));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x405 = INT32_MAX;
	static int16_t x406 = 7;
	volatile int32_t t98 = -148593;

    t98 = ((x405%x406)<=(x407^x408));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x409 = INT8_MIN;
	int8_t x410 = INT8_MAX;
	int8_t x412 = INT8_MIN;
	int32_t t99 = -33238260;

    t99 = ((x409%x410)<=(x411^x412));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x414 = INT32_MIN;
	uint64_t x415 = 398060LLU;
	volatile int16_t x416 = INT16_MAX;
	int32_t t100 = -94712;

    t100 = ((x413%x414)<=(x415^x416));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x417 = INT32_MAX;
	uint8_t x418 = UINT8_MAX;
	uint8_t x420 = UINT8_MAX;
	volatile int32_t t101 = 19196217;

    t101 = ((x417%x418)<=(x419^x420));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x421 = INT64_MAX;
	uint8_t x423 = 4U;
	uint16_t x424 = 14U;
	volatile int32_t t102 = -64;

    t102 = ((x421%x422)<=(x423^x424));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x427 = -90LL;
	int8_t x428 = INT8_MIN;
	int32_t t103 = -385442;

    t103 = ((x425%x426)<=(x427^x428));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x429 = 49202310414LLU;
	static int16_t x431 = -1;
	uint8_t x432 = UINT8_MAX;
	volatile int32_t t104 = -15;

    t104 = ((x429%x430)<=(x431^x432));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x433 = INT32_MIN;
	int16_t x434 = INT16_MIN;
	uint16_t x435 = 2064U;

    t105 = ((x433%x434)<=(x435^x436));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x437 = UINT64_MAX;
	int64_t x438 = -1765804304660023663LL;
	volatile int8_t x439 = -50;
	volatile int64_t x440 = INT64_MAX;
	int32_t t106 = -126645;

    t106 = ((x437%x438)<=(x439^x440));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x442 = INT8_MIN;
	int8_t x444 = -1;
	volatile int32_t t107 = -62;

    t107 = ((x441%x442)<=(x443^x444));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x445 = 199;
	static volatile int32_t x446 = 6441;
	int8_t x447 = INT8_MAX;
	static int32_t t108 = 40688586;

    t108 = ((x445%x446)<=(x447^x448));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x449 = INT8_MAX;
	volatile uint16_t x450 = UINT16_MAX;
	uint32_t x451 = UINT32_MAX;
	int32_t x452 = INT32_MIN;

    t109 = ((x449%x450)<=(x451^x452));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x453 = 1U;
	int8_t x454 = INT8_MIN;
	uint16_t x455 = 50U;
	uint32_t x456 = 309403394U;
	volatile int32_t t110 = 3412;

    t110 = ((x453%x454)<=(x455^x456));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x457 = -1;
	static int16_t x459 = -104;
	int32_t t111 = -307573;

    t111 = ((x457%x458)<=(x459^x460));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x461 = UINT8_MAX;
	int32_t x463 = INT32_MIN;
	uint8_t x464 = 3U;

    t112 = ((x461%x462)<=(x463^x464));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x465 = INT16_MIN;
	static int8_t x466 = INT8_MIN;
	volatile uint8_t x467 = 2U;
	uint64_t x468 = 2166LLU;

    t113 = ((x465%x466)<=(x467^x468));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x469 = 3;
	int8_t x470 = -1;
	static uint8_t x472 = 38U;
	volatile int32_t t114 = 19469;

    t114 = ((x469%x470)<=(x471^x472));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x473 = -501010124;
	static volatile int64_t x474 = INT64_MIN;
	static int16_t x475 = -1;
	int16_t x476 = -1;
	volatile int32_t t115 = 217844;

    t115 = ((x473%x474)<=(x475^x476));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x477 = INT8_MIN;
	int8_t x478 = INT8_MAX;
	volatile int32_t t116 = 13;

    t116 = ((x477%x478)<=(x479^x480));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x481 = 156790LL;
	uint32_t x482 = UINT32_MAX;
	static int16_t x483 = INT16_MIN;
	int8_t x484 = INT8_MIN;
	volatile int32_t t117 = -3776358;

    t117 = ((x481%x482)<=(x483^x484));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x485 = -1LL;
	int16_t x486 = INT16_MIN;
	volatile uint16_t x487 = 121U;
	int32_t x488 = -1;
	int32_t t118 = 2;

    t118 = ((x485%x486)<=(x487^x488));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x489 = 46231682LLU;
	volatile uint64_t x490 = 1769256155LLU;
	uint64_t x491 = 4073840435566159LLU;
	int16_t x492 = INT16_MIN;
	static volatile int32_t t119 = 8153581;

    t119 = ((x489%x490)<=(x491^x492));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x496 = INT8_MIN;
	int32_t t120 = -3267338;

    t120 = ((x493%x494)<=(x495^x496));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x497 = 0LLU;
	uint16_t x498 = UINT16_MAX;
	int32_t x500 = INT32_MIN;
	static int32_t t121 = 70;

    t121 = ((x497%x498)<=(x499^x500));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x501 = -12;
	static int32_t x502 = INT32_MIN;
	uint64_t x503 = UINT64_MAX;
	int32_t x504 = -441521;
	volatile int32_t t122 = -714610;

    t122 = ((x501%x502)<=(x503^x504));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x505 = UINT16_MAX;
	uint16_t x506 = 1110U;
	uint64_t x507 = UINT64_MAX;
	int64_t x508 = INT64_MAX;
	volatile int32_t t123 = 3118;

    t123 = ((x505%x506)<=(x507^x508));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x510 = INT64_MIN;
	static int32_t x511 = -52782436;
	int32_t x512 = INT32_MIN;
	volatile int32_t t124 = 1769;

    t124 = ((x509%x510)<=(x511^x512));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x517 = 2U;
	int64_t x518 = INT64_MIN;
	uint32_t x519 = 793975106U;

    t125 = ((x517%x518)<=(x519^x520));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x521 = -1;
	int8_t x522 = -6;
	static int64_t x524 = -554491825886818LL;
	int32_t t126 = 1466;

    t126 = ((x521%x522)<=(x523^x524));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x525 = INT32_MIN;
	int64_t x526 = INT64_MAX;
	int16_t x527 = INT16_MIN;
	static uint16_t x528 = 48U;
	int32_t t127 = -7094;

    t127 = ((x525%x526)<=(x527^x528));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x529 = UINT64_MAX;
	uint16_t x530 = UINT16_MAX;
	int64_t x531 = INT64_MAX;
	volatile int32_t x532 = -1;
	static volatile int32_t t128 = 637209;

    t128 = ((x529%x530)<=(x531^x532));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x533 = -14014;
	int64_t x535 = -151504202329466366LL;
	int64_t x536 = INT64_MAX;
	int32_t t129 = -95826803;

    t129 = ((x533%x534)<=(x535^x536));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x537 = INT64_MIN;
	static int64_t x538 = INT64_MAX;
	int16_t x539 = INT16_MAX;
	volatile uint32_t x540 = UINT32_MAX;
	int32_t t130 = -1;

    t130 = ((x537%x538)<=(x539^x540));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x541 = INT32_MAX;
	int64_t x542 = -1LL;
	int64_t x543 = 60764290878814171LL;
	int32_t t131 = 58179;

    t131 = ((x541%x542)<=(x543^x544));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x545 = INT8_MIN;
	int16_t x546 = -1;
	int8_t x547 = -4;
	volatile int64_t x548 = -1LL;
	static volatile int32_t t132 = -4;

    t132 = ((x545%x546)<=(x547^x548));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x550 = INT8_MIN;
	int8_t x551 = -1;
	static volatile int16_t x552 = 2;

    t133 = ((x549%x550)<=(x551^x552));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x553 = 2U;
	int16_t x554 = INT16_MIN;
	uint8_t x556 = UINT8_MAX;
	volatile int32_t t134 = 186587906;

    t134 = ((x553%x554)<=(x555^x556));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x557 = INT16_MAX;
	int8_t x558 = 2;
	int32_t x559 = INT32_MIN;
	volatile int16_t x560 = -1;

    t135 = ((x557%x558)<=(x559^x560));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x561 = 18;
	uint16_t x562 = UINT16_MAX;
	uint32_t x563 = UINT32_MAX;
	volatile int64_t x564 = INT64_MIN;
	volatile int32_t t136 = 3459;

    t136 = ((x561%x562)<=(x563^x564));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x565 = INT32_MIN;
	int32_t x566 = INT32_MIN;
	int32_t x567 = -1;
	int32_t t137 = 18749467;

    t137 = ((x565%x566)<=(x567^x568));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x569 = 14983U;
	int16_t x572 = -1;
	int32_t t138 = -6752;

    t138 = ((x569%x570)<=(x571^x572));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x573 = -1;
	uint32_t x574 = 186595U;
	int32_t x575 = INT32_MIN;
	static uint64_t x576 = UINT64_MAX;
	int32_t t139 = 912903678;

    t139 = ((x573%x574)<=(x575^x576));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x577 = INT8_MAX;
	volatile int8_t x578 = 1;
	int64_t x579 = INT64_MAX;
	static int8_t x580 = -39;

    t140 = ((x577%x578)<=(x579^x580));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x581 = INT64_MAX;
	int64_t x582 = -58973LL;
	int64_t x583 = -1LL;
	static volatile int8_t x584 = 6;
	volatile int32_t t141 = 1;

    t141 = ((x581%x582)<=(x583^x584));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x585 = UINT8_MAX;
	int64_t x586 = INT64_MAX;
	uint64_t x587 = 1268299LLU;
	volatile int8_t x588 = -63;
	volatile int32_t t142 = 1;

    t142 = ((x585%x586)<=(x587^x588));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x591 = INT16_MIN;
	static int32_t x592 = 560745;

    t143 = ((x589%x590)<=(x591^x592));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x593 = INT32_MIN;
	static int32_t x595 = -1;
	uint64_t x596 = 5332755316532233LLU;
	int32_t t144 = 131031;

    t144 = ((x593%x594)<=(x595^x596));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x597 = 0U;
	int8_t x598 = -1;
	volatile uint16_t x599 = UINT16_MAX;
	volatile int32_t x600 = -1;

    t145 = ((x597%x598)<=(x599^x600));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x601 = INT64_MIN;
	uint32_t x603 = 368609U;
	int32_t x604 = 74901;

    t146 = ((x601%x602)<=(x603^x604));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x605 = INT16_MAX;
	volatile int8_t x606 = INT8_MAX;
	volatile int8_t x607 = -1;
	volatile uint32_t x608 = UINT32_MAX;
	static volatile int32_t t147 = -52198;

    t147 = ((x605%x606)<=(x607^x608));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x609 = INT32_MIN;
	uint8_t x610 = 3U;
	static int32_t x611 = 1;
	int32_t x612 = 338304;
	volatile int32_t t148 = 959905241;

    t148 = ((x609%x610)<=(x611^x612));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x613 = INT64_MAX;
	int64_t x614 = INT64_MIN;
	uint64_t x615 = UINT64_MAX;
	int32_t t149 = -6392;

    t149 = ((x613%x614)<=(x615^x616));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x617 = INT16_MIN;
	int64_t x618 = INT64_MIN;
	uint64_t x619 = UINT64_MAX;
	int32_t x620 = INT32_MIN;

    t150 = ((x617%x618)<=(x619^x620));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x621 = 0U;
	int32_t x623 = -1;
	static uint32_t x624 = UINT32_MAX;
	volatile int32_t t151 = 2600;

    t151 = ((x621%x622)<=(x623^x624));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x626 = -26;
	static uint8_t x627 = 3U;
	static int32_t x628 = 271963;
	int32_t t152 = 53373691;

    t152 = ((x625%x626)<=(x627^x628));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x629 = 9970LLU;
	int64_t x630 = INT64_MIN;
	uint64_t x631 = 41521922127763293LLU;
	volatile int16_t x632 = INT16_MIN;
	volatile int32_t t153 = 6497;

    t153 = ((x629%x630)<=(x631^x632));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x633 = 592LLU;
	int32_t x634 = INT32_MIN;
	static uint8_t x635 = UINT8_MAX;
	int32_t t154 = 3281;

    t154 = ((x633%x634)<=(x635^x636));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x637 = UINT32_MAX;
	int64_t x638 = INT64_MIN;
	int64_t x639 = -1LL;
	int32_t x640 = INT32_MAX;
	static volatile int32_t t155 = 481689;

    t155 = ((x637%x638)<=(x639^x640));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x641 = UINT8_MAX;
	static int32_t x642 = INT32_MAX;
	static int64_t x643 = INT64_MAX;
	volatile int8_t x644 = INT8_MIN;
	volatile int32_t t156 = -8;

    t156 = ((x641%x642)<=(x643^x644));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x646 = INT8_MIN;
	static int8_t x647 = -1;
	uint16_t x648 = 31U;
	int32_t t157 = 392;

    t157 = ((x645%x646)<=(x647^x648));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x649 = 47U;
	uint64_t x650 = UINT64_MAX;
	uint64_t x651 = 101818649LLU;
	int64_t x652 = INT64_MIN;
	int32_t t158 = 329755;

    t158 = ((x649%x650)<=(x651^x652));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x653 = 97U;
	static uint16_t x654 = 455U;
	static int64_t x655 = INT64_MIN;
	static int8_t x656 = INT8_MIN;

    t159 = ((x653%x654)<=(x655^x656));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x659 = UINT64_MAX;
	uint64_t x660 = 671463311LLU;
	int32_t t160 = 7293510;

    t160 = ((x657%x658)<=(x659^x660));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x661 = 1LLU;
	int32_t x662 = INT32_MIN;
	static int16_t x663 = INT16_MIN;
	static int64_t x664 = INT64_MIN;
	int32_t t161 = -392469;

    t161 = ((x661%x662)<=(x663^x664));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x665 = UINT16_MAX;
	uint8_t x666 = 37U;
	int8_t x668 = -1;
	volatile int32_t t162 = -1849;

    t162 = ((x665%x666)<=(x667^x668));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x669 = 152U;
	static int64_t x672 = INT64_MAX;
	int32_t t163 = -128;

    t163 = ((x669%x670)<=(x671^x672));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x675 = 6;
	int64_t x676 = INT64_MIN;
	volatile int32_t t164 = 6;

    t164 = ((x673%x674)<=(x675^x676));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x677 = 6377386660619407LL;
	int32_t x678 = -1;
	int8_t x679 = INT8_MIN;
	int32_t t165 = -2;

    t165 = ((x677%x678)<=(x679^x680));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x681 = 11315U;
	int64_t x682 = INT64_MAX;
	volatile int16_t x683 = 958;
	uint64_t x684 = 12453136535088819LLU;
	volatile int32_t t166 = 924957;

    t166 = ((x681%x682)<=(x683^x684));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x685 = UINT64_MAX;
	int64_t x686 = INT64_MIN;
	int64_t x687 = 30636LL;
	int16_t x688 = -410;
	static volatile int32_t t167 = 4044718;

    t167 = ((x685%x686)<=(x687^x688));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x689 = 72U;
	uint32_t x690 = 51002U;
	uint64_t x691 = 151735529558261929LLU;
	int32_t t168 = -59;

    t168 = ((x689%x690)<=(x691^x692));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x693 = 0U;
	volatile int32_t x694 = INT32_MAX;
	uint8_t x695 = 1U;
	int64_t x696 = INT64_MIN;

    t169 = ((x693%x694)<=(x695^x696));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x699 = UINT16_MAX;
	int32_t x700 = INT32_MIN;

    t170 = ((x697%x698)<=(x699^x700));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x701 = INT16_MIN;
	uint8_t x703 = 0U;
	int64_t x704 = -3921787668217916209LL;
	static volatile int32_t t171 = 10982644;

    t171 = ((x701%x702)<=(x703^x704));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x705 = -11;
	volatile uint16_t x706 = 4U;
	int32_t x707 = -1;
	int32_t t172 = 156583;

    t172 = ((x705%x706)<=(x707^x708));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x709 = -1;
	volatile uint16_t x710 = 141U;
	int64_t x711 = 1830356186881487LL;
	int8_t x712 = -14;
	static int32_t t173 = -5603;

    t173 = ((x709%x710)<=(x711^x712));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x713 = UINT64_MAX;
	int8_t x714 = INT8_MIN;
	int32_t x715 = INT32_MIN;
	static int8_t x716 = -1;

    t174 = ((x713%x714)<=(x715^x716));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x717 = 1U;
	volatile uint64_t x718 = 345444360479509271LLU;
	uint16_t x719 = 59U;
	static int32_t x720 = 89278;
	static int32_t t175 = -16;

    t175 = ((x717%x718)<=(x719^x720));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x722 = -1;
	int16_t x724 = INT16_MIN;
	volatile int32_t t176 = 303965;

    t176 = ((x721%x722)<=(x723^x724));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x725 = INT8_MIN;
	static int64_t x726 = -2774342515841788LL;
	int64_t x727 = 878560334208925LL;
	int32_t x728 = -8115;

    t177 = ((x725%x726)<=(x727^x728));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x729 = INT8_MIN;
	volatile uint32_t x730 = 10U;
	static volatile int16_t x731 = 42;
	static int32_t x732 = -5300913;
	int32_t t178 = 20236;

    t178 = ((x729%x730)<=(x731^x732));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x733 = UINT16_MAX;
	int16_t x734 = INT16_MAX;
	int64_t x736 = INT64_MIN;
	volatile int32_t t179 = 253;

    t179 = ((x733%x734)<=(x735^x736));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x737 = 28U;
	uint8_t x738 = UINT8_MAX;
	int8_t x739 = INT8_MIN;
	volatile int32_t t180 = 283571063;

    t180 = ((x737%x738)<=(x739^x740));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x742 = INT64_MIN;
	int32_t t181 = -333;

    t181 = ((x741%x742)<=(x743^x744));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x745 = -1;
	volatile int32_t x746 = INT32_MAX;
	int8_t x747 = 1;
	volatile int16_t x748 = INT16_MIN;
	int32_t t182 = 12;

    t182 = ((x745%x746)<=(x747^x748));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x749 = INT64_MAX;
	uint64_t x750 = UINT64_MAX;
	volatile int32_t x751 = INT32_MIN;
	volatile int32_t x752 = INT32_MIN;

    t183 = ((x749%x750)<=(x751^x752));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x753 = INT16_MIN;
	static int8_t x754 = 42;
	int8_t x755 = -6;
	volatile int32_t t184 = -113607;

    t184 = ((x753%x754)<=(x755^x756));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x758 = 14U;
	static int64_t x759 = INT64_MIN;
	int16_t x760 = -1;

    t185 = ((x757%x758)<=(x759^x760));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x761 = -3;
	volatile int64_t x764 = INT64_MIN;
	static int32_t t186 = 6499;

    t186 = ((x761%x762)<=(x763^x764));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x766 = 3677U;
	static int16_t x767 = -2130;
	int8_t x768 = 3;
	static volatile int32_t t187 = -443;

    t187 = ((x765%x766)<=(x767^x768));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x769 = 3259U;
	uint32_t x771 = 0U;
	uint16_t x772 = 1985U;
	static int32_t t188 = -5;

    t188 = ((x769%x770)<=(x771^x772));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x775 = -1LL;
	volatile int32_t t189 = 68;

    t189 = ((x773%x774)<=(x775^x776));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x779 = 81U;
	int8_t x780 = INT8_MIN;
	int32_t t190 = 41;

    t190 = ((x777%x778)<=(x779^x780));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x781 = INT32_MAX;
	static int32_t x782 = INT32_MAX;
	static volatile int8_t x784 = -1;
	int32_t t191 = 456856112;

    t191 = ((x781%x782)<=(x783^x784));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x785 = INT8_MIN;
	int16_t x786 = INT16_MIN;
	int8_t x787 = 7;
	int16_t x788 = INT16_MAX;
	volatile int32_t t192 = 26189;

    t192 = ((x785%x786)<=(x787^x788));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x789 = INT64_MAX;
	uint64_t x790 = 182239831247370LLU;
	int16_t x792 = INT16_MIN;
	static int32_t t193 = 2;

    t193 = ((x789%x790)<=(x791^x792));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x793 = 11190230442LL;
	uint64_t x794 = 48LLU;
	uint16_t x796 = 0U;

    t194 = ((x793%x794)<=(x795^x796));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x797 = UINT32_MAX;
	uint16_t x798 = UINT16_MAX;
	int64_t x800 = 5281091751LL;
	static volatile int32_t t195 = -334639705;

    t195 = ((x797%x798)<=(x799^x800));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x801 = INT64_MAX;
	static uint8_t x802 = 2U;
	static int8_t x803 = INT8_MIN;
	volatile int64_t x804 = 158770989022784LL;
	volatile int32_t t196 = -1802787;

    t196 = ((x801%x802)<=(x803^x804));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x805 = INT64_MIN;
	static int64_t x806 = INT64_MIN;
	static volatile int8_t x807 = -1;
	int64_t x808 = INT64_MAX;

    t197 = ((x805%x806)<=(x807^x808));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x809 = -1386;
	volatile int8_t x810 = -1;
	static int32_t x812 = INT32_MAX;

    t198 = ((x809%x810)<=(x811^x812));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x813 = INT16_MIN;
	static uint32_t x815 = 119954908U;
	volatile int32_t x816 = -2;
	static volatile int32_t t199 = -265;

    t199 = ((x813%x814)<=(x815^x816));

    if (t199 != 1) { NG(); } else { ; }
	
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



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

static int64_t x8 = INT64_MIN;
int64_t x19 = -24500700740LL;
int16_t x21 = -1;
uint8_t x25 = UINT8_MAX;
uint16_t x26 = 244U;
volatile int64_t x36 = -4738749256661LL;
static int16_t x39 = -1;
int8_t x50 = INT8_MIN;
static int64_t x52 = -1LL;
int16_t x53 = -22;
uint32_t x54 = UINT32_MAX;
volatile int8_t x55 = INT8_MAX;
int64_t x74 = -2LL;
volatile uint8_t x81 = 27U;
static uint32_t x90 = UINT32_MAX;
uint64_t x94 = 8265750622016511LLU;
volatile uint16_t x106 = UINT16_MAX;
int16_t x119 = -2425;
int8_t x127 = -1;
int64_t x134 = -1LL;
uint8_t x136 = 6U;
static int8_t x142 = INT8_MIN;
int16_t x143 = -1;
int32_t t26 = -5043;
int32_t x150 = INT32_MIN;
int16_t x151 = 3004;
uint64_t t28 = 298322420233626LLU;
int8_t x155 = INT8_MIN;
uint32_t x156 = 15617836U;
int32_t x164 = 7505;
volatile int8_t x168 = -1;
static int8_t x169 = INT8_MIN;
uint32_t x174 = 22U;
uint8_t x175 = 0U;
uint32_t t34 = 46U;
volatile uint16_t x178 = UINT16_MAX;
int64_t t37 = -104403389976LL;
int32_t x189 = INT32_MAX;
int32_t x192 = INT32_MIN;
volatile int32_t t38 = -16207;
uint32_t x193 = UINT32_MAX;
uint16_t x203 = 53U;
uint16_t x204 = 484U;
volatile uint32_t x208 = UINT32_MAX;
uint32_t x212 = UINT32_MAX;
volatile int64_t t43 = 8075164LL;
uint64_t t47 = UINT64_MAX;
volatile int32_t x230 = INT32_MIN;
volatile int64_t x232 = INT64_MIN;
uint64_t x234 = 55864390LLU;
volatile int32_t t50 = 23437;
int64_t x246 = 24700428LL;
volatile int32_t t52 = INT32_MAX;
uint64_t x253 = UINT64_MAX;
uint64_t t53 = 14048049199579LLU;
static uint8_t x262 = 83U;
int16_t x264 = -1;
volatile uint64_t t55 = 225478516486056831LLU;
static int32_t x274 = 3174536;
static volatile int8_t x275 = INT8_MIN;
static int64_t t58 = -836642444030LL;
static volatile uint32_t x291 = 18U;
uint8_t x292 = UINT8_MAX;
volatile uint32_t x296 = 1944U;
uint32_t x297 = UINT32_MAX;
uint64_t t63 = 498681803LLU;
volatile int8_t x307 = -1;
uint64_t t64 = 29335788356607359LLU;
int32_t t65 = -227036936;
uint8_t x323 = 14U;
static volatile uint8_t x338 = 28U;
int8_t x348 = 0;
volatile int64_t x352 = -1LL;
static uint64_t x353 = UINT64_MAX;
volatile int64_t x357 = -110LL;
volatile int32_t x360 = -1;
volatile int64_t t75 = 241447622354042070LL;
int16_t x365 = INT16_MIN;
int64_t x367 = INT64_MIN;
static int32_t x376 = 51;
uint32_t x377 = 679U;
volatile int16_t x379 = INT16_MIN;
volatile int8_t x383 = INT8_MAX;
volatile int32_t t81 = 55129;
volatile int32_t t82 = -1;
volatile int64_t x395 = INT64_MIN;
volatile uint64_t t85 = 1580800456LLU;
uint16_t x402 = 693U;
int8_t x403 = INT8_MIN;
int16_t x413 = INT16_MAX;
int16_t x414 = 113;
volatile int64_t x424 = INT64_MIN;
uint8_t x429 = UINT8_MAX;
volatile int8_t x430 = -1;
int32_t x432 = -1;
int64_t x434 = INT64_MIN;
int32_t x441 = INT32_MIN;
int32_t x447 = INT32_MIN;
volatile int64_t t96 = INT64_MIN;
uint16_t x455 = UINT16_MAX;
uint64_t t100 = 222954496270194LLU;
static uint32_t x469 = UINT32_MAX;
uint32_t x470 = 198647U;
volatile int64_t x471 = INT64_MIN;
int16_t x476 = INT16_MAX;
static int64_t x488 = 273158147523LL;
int64_t t107 = -17424345383905LL;
int16_t x505 = -1;
volatile int32_t x507 = -1;
static volatile int32_t t111 = 8077554;
int32_t x515 = -862;
volatile int64_t t113 = 7712783227948313LL;
uint64_t x529 = 101514377348790LLU;
static uint8_t x532 = 1U;
uint64_t x536 = UINT64_MAX;
uint64_t x538 = 2867193895076377893LLU;
int8_t x542 = INT8_MIN;
volatile int32_t x546 = INT32_MIN;
static volatile int64_t x548 = INT64_MIN;
int8_t x553 = -1;
volatile int64_t x554 = 18959183LL;
int8_t x561 = INT8_MIN;
int64_t x569 = -1LL;
int8_t x572 = INT8_MAX;
uint16_t x575 = 8395U;
static uint32_t x576 = UINT32_MAX;
uint32_t t124 = 710U;
uint16_t x577 = 1U;
volatile int64_t t125 = -17556786292224LL;
int8_t x587 = -1;
static volatile uint64_t t127 = 117148LLU;
int64_t x589 = -1LL;
int16_t x593 = INT16_MIN;
static uint8_t x595 = 5U;
volatile int32_t t129 = -1822;
int32_t x598 = -1;
static int16_t x600 = INT16_MAX;
uint8_t x601 = 68U;
int16_t x607 = INT16_MIN;
static int8_t x610 = 1;
static int8_t x613 = INT8_MIN;
volatile int32_t x614 = -373;
volatile int16_t x621 = INT16_MAX;
uint8_t x623 = UINT8_MAX;
uint64_t t136 = 2LLU;
int8_t x628 = -1;
static uint64_t t137 = UINT64_MAX;
uint16_t x637 = UINT16_MAX;
int64_t t146 = -1384256078071191LL;
int16_t x691 = 9;
volatile uint32_t x692 = 405517U;
uint16_t x698 = 107U;
int64_t x699 = -1LL;
volatile uint64_t t151 = 30LLU;
int64_t t152 = -1325703560281622LL;
int64_t x705 = -1LL;
int64_t x712 = INT64_MAX;
volatile int16_t x714 = -984;
volatile int8_t x720 = 9;
uint32_t x721 = UINT32_MAX;
static int64_t x739 = INT64_MAX;
volatile int64_t t161 = -27220306185084215LL;
int8_t x741 = INT8_MIN;
static uint64_t t162 = 77698923231837LLU;
int16_t x748 = -1;
int32_t t163 = -167;
int8_t x753 = INT8_MAX;
volatile uint16_t x763 = 855U;
volatile int64_t t168 = 269630742768828LL;
int8_t x779 = INT8_MIN;
static int64_t t169 = -1LL;
volatile int32_t x784 = -170213526;
volatile int16_t x791 = INT16_MIN;
int8_t x804 = INT8_MIN;
uint64_t x813 = UINT64_MAX;
uint32_t t179 = 77U;
volatile int32_t x825 = -57510462;
volatile uint8_t x833 = 14U;
int64_t x845 = INT64_MIN;
int32_t x851 = -1;
volatile uint64_t x860 = UINT64_MAX;
uint16_t x866 = 2894U;
volatile int8_t x873 = -61;
static int64_t x874 = -6LL;
volatile int32_t x877 = -1;
int64_t x888 = INT64_MIN;
int16_t x893 = -1;
uint64_t t197 = 222196LLU;
volatile uint64_t x902 = UINT64_MAX;
volatile int8_t x903 = INT8_MIN;
uint32_t x904 = 4581643U;


void f0(void) {
    	uint64_t x1 = 9545125685782LLU;
	volatile int16_t x2 = 374;
	volatile int8_t x3 = INT8_MIN;
	volatile int8_t x4 = INT8_MIN;
	volatile uint64_t t0 = 5230LLU;

    t0 = ((x1-x2)|(x3&x4));

    if (t0 != 18446744073709551520LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	static int64_t x6 = -21749201LL;
	int16_t x7 = INT16_MIN;
	int64_t t1 = 356585551949817231LL;

    t1 = ((x5-x6)|(x7&x8));

    if (t1 != -9223372036833026608LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x13 = 1417;
	static volatile uint16_t x14 = 1546U;
	volatile int64_t x15 = -3355996147790809LL;
	static uint64_t x16 = UINT64_MAX;
	volatile uint64_t t2 = 90LLU;

    t2 = ((x13-x14)|(x15&x16));

    if (t2 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = INT64_MAX;
	uint8_t x18 = 46U;
	volatile int8_t x20 = INT8_MAX;
	static volatile int64_t t3 = -1LL;

    t3 = ((x17-x18)|(x19&x20));

    if (t3 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x22 = UINT8_MAX;
	uint64_t x23 = 10119LLU;
	int8_t x24 = -2;
	volatile uint64_t t4 = 1LLU;

    t4 = ((x21-x22)|(x23&x24));

    if (t4 != 18446744073709551494LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x27 = 4;
	int8_t x28 = INT8_MIN;
	static int32_t t5 = 4756;

    t5 = ((x25-x26)|(x27&x28));

    if (t5 != 11) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x33 = INT32_MAX;
	int32_t x34 = INT32_MAX;
	volatile int8_t x35 = INT8_MIN;
	volatile int64_t t6 = 21LL;

    t6 = ((x33-x34)|(x35&x36));

    if (t6 != -4738749256704LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x37 = 11776362U;
	volatile uint8_t x38 = 0U;
	static uint32_t x40 = 64543U;
	volatile uint32_t t7 = 447446863U;

    t7 = ((x37-x38)|(x39&x40));

    if (t7 != 11795839U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x41 = 1408746420512847LLU;
	int64_t x42 = 63441061075LL;
	int32_t x43 = INT32_MAX;
	static int16_t x44 = INT16_MIN;
	volatile uint64_t t8 = 733322493299791787LLU;

    t8 = ((x41-x42)|(x43&x44));

    if (t8 != 1408684848571260LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x45 = 8753065883258023662LLU;
	int8_t x46 = INT8_MIN;
	int64_t x47 = -1LL;
	int16_t x48 = INT16_MIN;
	volatile uint64_t t9 = 277576438863119600LLU;

    t9 = ((x45-x46)|(x47&x48));

    if (t9 != 18446744073709547374LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x49 = UINT64_MAX;
	uint32_t x51 = 9547U;
	static volatile uint64_t t10 = 26885151125646596LLU;

    t10 = ((x49-x50)|(x51&x52));

    if (t10 != 9599LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x56 = 6LLU;
	volatile uint64_t t11 = 523030454150420LLU;

    t11 = ((x53-x54)|(x55&x56));

    if (t11 != 4294967279LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x61 = 245U;
	uint32_t x62 = 284604863U;
	int16_t x63 = -1;
	int64_t x64 = INT64_MIN;
	volatile int64_t t12 = 2677829071LL;

    t12 = ((x61-x62)|(x63&x64));

    if (t12 != -9223372032844413130LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x69 = -1;
	static uint16_t x70 = 2U;
	int16_t x71 = 2;
	int32_t x72 = INT32_MIN;
	int32_t t13 = -323007386;

    t13 = ((x69-x70)|(x71&x72));

    if (t13 != -3) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x73 = INT32_MAX;
	static volatile uint8_t x75 = 54U;
	static volatile uint64_t x76 = 1029393827LLU;
	volatile uint64_t t14 = 4016390723525522LLU;

    t14 = ((x73-x74)|(x75&x76));

    if (t14 != 2147483683LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t x82 = INT32_MAX;
	int8_t x83 = 0;
	int16_t x84 = INT16_MIN;
	volatile int32_t t15 = -11020608;

    t15 = ((x81-x82)|(x83&x84));

    if (t15 != -2147483620) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x85 = -19;
	uint8_t x86 = 13U;
	uint8_t x87 = UINT8_MAX;
	uint64_t x88 = 1765LLU;
	uint64_t t16 = 4849037LLU;

    t16 = ((x85-x86)|(x87&x88));

    if (t16 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x89 = 2;
	int64_t x91 = -521889254996LL;
	volatile int8_t x92 = -1;
	static volatile int64_t t17 = 137LL;

    t17 = ((x89-x90)|(x91&x92));

    if (t17 != -521889254993LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x93 = INT32_MIN;
	static uint64_t x95 = UINT64_MAX;
	uint64_t x96 = UINT64_MAX;
	uint64_t t18 = UINT64_MAX;

    t18 = ((x93-x94)|(x95&x96));

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x97 = UINT64_MAX;
	static volatile uint32_t x98 = UINT32_MAX;
	uint16_t x99 = 28U;
	int64_t x100 = INT64_MIN;
	static uint64_t t19 = 6550644363LLU;

    t19 = ((x97-x98)|(x99&x100));

    if (t19 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x105 = INT16_MAX;
	uint16_t x107 = UINT16_MAX;
	volatile uint64_t x108 = 342186823039LLU;
	volatile uint64_t t20 = 1449777LLU;

    t20 = ((x105-x106)|(x107&x108));

    if (t20 != 18446744073709522303LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x113 = INT32_MIN;
	uint64_t x114 = 1656731032285856407LLU;
	uint32_t x115 = 209U;
	volatile uint64_t x116 = UINT64_MAX;
	uint64_t t21 = 8LLU;

    t21 = ((x113-x114)|(x115&x116));

    if (t21 != 16790013039276211705LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x117 = UINT64_MAX;
	int16_t x118 = -396;
	uint32_t x120 = 11134015U;
	static uint64_t t22 = 35357393872LLU;

    t22 = ((x117-x118)|(x119&x120));

    if (t22 != 11134351LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x125 = -1LL;
	int64_t x126 = -3441522895672337LL;
	static int64_t x128 = -1LL;
	int64_t t23 = 15LL;

    t23 = ((x125-x126)|(x127&x128));

    if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x133 = 3U;
	volatile uint16_t x135 = 194U;
	int64_t t24 = -30292602LL;

    t24 = ((x133-x134)|(x135&x136));

    if (t24 != 6LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x137 = UINT16_MAX;
	uint8_t x138 = 57U;
	int64_t x139 = INT64_MIN;
	int32_t x140 = INT32_MIN;
	int64_t t25 = -7LL;

    t25 = ((x137-x138)|(x139&x140));

    if (t25 != -9223372036854710330LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x141 = INT32_MIN;
	int8_t x144 = 0;

    t26 = ((x141-x142)|(x143&x144));

    if (t26 != -2147483520) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x145 = 0U;
	static uint64_t x146 = UINT64_MAX;
	int16_t x147 = INT16_MIN;
	static uint8_t x148 = UINT8_MAX;
	uint64_t t27 = 0LLU;

    t27 = ((x145-x146)|(x147&x148));

    if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x149 = 413482683163LLU;
	uint16_t x152 = 0U;

    t28 = ((x149-x150)|(x151&x152));

    if (t28 != 415630166811LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x153 = 4815U;
	uint16_t x154 = 25U;
	uint32_t t29 = 212090U;

    t29 = ((x153-x154)|(x155&x156));

    if (t29 != 15622070U) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x157 = INT8_MAX;
	int8_t x158 = INT8_MIN;
	int64_t x159 = INT64_MAX;
	int32_t x160 = INT32_MIN;
	volatile int64_t t30 = 13342413LL;

    t30 = ((x157-x158)|(x159&x160));

    if (t30 != 9223372034707292415LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x161 = INT32_MIN;
	int64_t x162 = -1LL;
	volatile uint8_t x163 = 0U;
	int64_t t31 = -108404028LL;

    t31 = ((x161-x162)|(x163&x164));

    if (t31 != -2147483647LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x165 = INT16_MAX;
	uint8_t x166 = 22U;
	uint8_t x167 = 11U;
	volatile int32_t t32 = 108687650;

    t32 = ((x165-x166)|(x167&x168));

    if (t32 != 32747) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x170 = -1;
	uint16_t x171 = 724U;
	uint32_t x172 = 184403383U;
	static volatile uint32_t t33 = 5033325U;

    t33 = ((x169-x170)|(x171&x172));

    if (t33 != 4294967189U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x173 = -1;
	static int32_t x176 = INT32_MIN;

    t34 = ((x173-x174)|(x175&x176));

    if (t34 != 4294967273U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x177 = INT16_MIN;
	int16_t x179 = -1;
	int16_t x180 = -57;
	int32_t t35 = 4068;

    t35 = ((x177-x178)|(x179&x180));

    if (t35 != -57) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x181 = INT16_MAX;
	int32_t x182 = INT32_MAX;
	int64_t x183 = INT64_MAX;
	uint16_t x184 = 9U;
	int64_t t36 = -1352386047LL;

    t36 = ((x181-x182)|(x183&x184));

    if (t36 != -2147450871LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x185 = INT8_MIN;
	uint8_t x186 = 35U;
	int64_t x187 = -1LL;
	int8_t x188 = INT8_MAX;

    t37 = ((x185-x186)|(x187&x188));

    if (t37 != -129LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x190 = INT8_MAX;
	int8_t x191 = -1;

    t38 = ((x189-x190)|(x191&x192));

    if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x194 = -236;
	int16_t x195 = 13;
	int64_t x196 = INT64_MAX;
	volatile int64_t t39 = -60LL;

    t39 = ((x193-x194)|(x195&x196));

    if (t39 != 239LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x197 = INT16_MIN;
	volatile int32_t x198 = 0;
	int16_t x199 = -1;
	uint32_t x200 = 239282250U;
	uint32_t t40 = 82U;

    t40 = ((x197-x198)|(x199&x200));

    if (t40 != 4294944842U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x201 = UINT8_MAX;
	int8_t x202 = -22;
	volatile int32_t t41 = 91714340;

    t41 = ((x201-x202)|(x203&x204));

    if (t41 != 309) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x205 = 23499U;
	static uint16_t x206 = 239U;
	uint64_t x207 = 272150261060LLU;
	uint64_t t42 = 7911517827076LLU;

    t42 = ((x205-x206)|(x207&x208));

    if (t42 != 1567326172LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x209 = 92874;
	int64_t x210 = 3000070581697526374LL;
	uint32_t x211 = 28312U;

    t43 = ((x209-x210)|(x211&x212));

    if (t43 != -3000070581697413380LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x213 = 4303;
	int8_t x214 = 7;
	volatile int16_t x215 = INT16_MAX;
	int32_t x216 = -5079;
	int32_t t44 = 9313041;

    t44 = ((x213-x214)|(x215&x216));

    if (t44 != 31977) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x217 = 5343671U;
	int16_t x218 = INT16_MAX;
	uint8_t x219 = 108U;
	int64_t x220 = INT64_MIN;
	int64_t t45 = 34017LL;

    t45 = ((x217-x218)|(x219&x220));

    if (t45 != 5310904LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x221 = -236196LL;
	int64_t x222 = INT64_MIN;
	volatile int8_t x223 = INT8_MIN;
	volatile int32_t x224 = INT32_MIN;
	int64_t t46 = 22590979879LL;

    t46 = ((x221-x222)|(x223&x224));

    if (t46 != -236196LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x225 = -1;
	volatile uint8_t x226 = 2U;
	static uint64_t x227 = 1690612949509330106LLU;
	uint64_t x228 = 1087363775754LLU;

    t47 = ((x225-x226)|(x227&x228));

    if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x229 = UINT64_MAX;
	static int32_t x231 = INT32_MIN;
	volatile uint64_t t48 = 679410LLU;

    t48 = ((x229-x230)|(x231&x232));

    if (t48 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x233 = -1LL;
	int64_t x235 = -240689148839817107LL;
	int16_t x236 = -1;
	volatile uint64_t t49 = 1275LLU;

    t49 = ((x233-x234)|(x235&x236));

    if (t49 != 18446744073688552445LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x241 = 62U;
	static int8_t x242 = INT8_MAX;
	static int32_t x243 = INT32_MIN;
	int8_t x244 = INT8_MIN;

    t50 = ((x241-x242)|(x243&x244));

    if (t50 != -65) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x245 = UINT8_MAX;
	uint16_t x247 = 22086U;
	int64_t x248 = -1LL;
	static int64_t t51 = -3313676LL;

    t51 = ((x245-x246)|(x247&x248));

    if (t51 != -24682761LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x249 = 13;
	int16_t x250 = -2396;
	int32_t x251 = INT32_MAX;
	int8_t x252 = -1;

    t52 = ((x249-x250)|(x251&x252));

    if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x254 = -15;
	static int16_t x255 = -1;
	int8_t x256 = INT8_MAX;

    t53 = ((x253-x254)|(x255&x256));

    if (t53 != 127LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int32_t x261 = -1;
	int8_t x263 = INT8_MIN;
	int32_t t54 = -331468139;

    t54 = ((x261-x262)|(x263&x264));

    if (t54 != -84) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x265 = INT64_MAX;
	static int32_t x266 = 12;
	static volatile int32_t x267 = 84576179;
	volatile uint64_t x268 = 13451372839979LLU;

    t55 = ((x265-x266)|(x267&x268));

    if (t55 != 9223372036854775795LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x269 = 233612U;
	int16_t x270 = 7;
	uint8_t x271 = UINT8_MAX;
	volatile uint32_t x272 = 22016548U;
	volatile uint32_t t56 = 105229U;

    t56 = ((x269-x270)|(x271&x272));

    if (t56 != 233637U) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x273 = -1;
	static int8_t x276 = 0;
	volatile int32_t t57 = -481;

    t57 = ((x273-x274)|(x275&x276));

    if (t57 != -3174537) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x277 = -1LL;
	static int8_t x278 = 0;
	int16_t x279 = INT16_MIN;
	static uint8_t x280 = 2U;

    t58 = ((x277-x278)|(x279&x280));

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x285 = 708;
	int16_t x286 = INT16_MIN;
	static int32_t x287 = INT32_MAX;
	volatile uint64_t x288 = 7LLU;
	static uint64_t t59 = 33622649813284LLU;

    t59 = ((x285-x286)|(x287&x288));

    if (t59 != 33479LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x289 = INT16_MIN;
	int32_t x290 = INT32_MIN;
	static uint32_t t60 = 1U;

    t60 = ((x289-x290)|(x291&x292));

    if (t60 != 2147450898U) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x293 = 60938;
	uint8_t x294 = 7U;
	int8_t x295 = INT8_MIN;
	uint32_t t61 = 107963275U;

    t61 = ((x293-x294)|(x295&x296));

    if (t61 != 61315U) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x298 = UINT8_MAX;
	int16_t x299 = INT16_MAX;
	int8_t x300 = INT8_MIN;
	uint32_t t62 = 857140779U;

    t62 = ((x297-x298)|(x299&x300));

    if (t62 != 4294967168U) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x301 = UINT64_MAX;
	uint8_t x302 = 31U;
	int16_t x303 = INT16_MIN;
	int32_t x304 = INT32_MIN;

    t63 = ((x301-x302)|(x303&x304));

    if (t63 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x305 = 18;
	uint64_t x306 = 2705LLU;
	uint16_t x308 = 3928U;

    t64 = ((x305-x306)|(x307&x308));

    if (t64 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x309 = INT8_MIN;
	int8_t x310 = INT8_MIN;
	int16_t x311 = INT16_MIN;
	int16_t x312 = -1;

    t65 = ((x309-x310)|(x311&x312));

    if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x313 = -10;
	volatile int8_t x314 = INT8_MIN;
	int16_t x315 = 5291;
	volatile int64_t x316 = -6973163LL;
	static int64_t t66 = -712092750607361LL;

    t66 = ((x313-x314)|(x315&x316));

    if (t66 != 4215LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x317 = 1743U;
	int16_t x318 = INT16_MIN;
	static volatile int64_t x319 = INT64_MIN;
	uint16_t x320 = 52U;
	volatile int64_t t67 = -22542089581LL;

    t67 = ((x317-x318)|(x319&x320));

    if (t67 != 34511LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x321 = -4084;
	int16_t x322 = INT16_MAX;
	int16_t x324 = INT16_MIN;
	static int32_t t68 = 2679174;

    t68 = ((x321-x322)|(x323&x324));

    if (t68 != -36851) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x329 = -5;
	uint8_t x330 = 119U;
	int64_t x331 = INT64_MIN;
	int64_t x332 = 1LL;
	volatile int64_t t69 = -8LL;

    t69 = ((x329-x330)|(x331&x332));

    if (t69 != -124LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x337 = -1;
	uint16_t x339 = UINT16_MAX;
	static uint64_t x340 = 39664900584617LLU;
	volatile uint64_t t70 = 46538868052298LLU;

    t70 = ((x337-x338)|(x339&x340));

    if (t70 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x341 = INT32_MIN;
	uint32_t x342 = UINT32_MAX;
	static uint64_t x343 = 116177637331429602LLU;
	uint8_t x344 = UINT8_MAX;
	uint64_t t71 = 15LLU;

    t71 = ((x341-x342)|(x343&x344));

    if (t71 != 2147483875LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x345 = 22U;
	int8_t x346 = INT8_MIN;
	volatile uint8_t x347 = 0U;
	volatile int32_t t72 = 15;

    t72 = ((x345-x346)|(x347&x348));

    if (t72 != 150) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x349 = INT32_MAX;
	int32_t x350 = INT32_MAX;
	static int16_t x351 = -1;
	int64_t t73 = -382827LL;

    t73 = ((x349-x350)|(x351&x352));

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x354 = INT16_MAX;
	uint16_t x355 = UINT16_MAX;
	int8_t x356 = -1;
	volatile uint64_t t74 = UINT64_MAX;

    t74 = ((x353-x354)|(x355&x356));

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x358 = INT8_MAX;
	static int8_t x359 = INT8_MAX;

    t75 = ((x357-x358)|(x359&x360));

    if (t75 != -129LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x361 = INT16_MIN;
	uint64_t x362 = 2118598208LLU;
	static int32_t x363 = INT32_MIN;
	static int32_t x364 = INT32_MAX;
	uint64_t t76 = 960474LLU;

    t76 = ((x361-x362)|(x363&x364));

    if (t76 != 18446744071590920640LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x366 = INT64_MIN;
	uint32_t x368 = 3025U;
	volatile int64_t t77 = -95356628020LL;

    t77 = ((x365-x366)|(x367&x368));

    if (t77 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x369 = 60U;
	volatile int32_t x370 = -1;
	int64_t x371 = -395796029LL;
	int64_t x372 = INT64_MIN;
	static volatile int64_t t78 = 9005LL;

    t78 = ((x369-x370)|(x371&x372));

    if (t78 != -9223372036854775747LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x373 = 1986558250656LLU;
	uint8_t x374 = 3U;
	int16_t x375 = INT16_MAX;
	volatile uint64_t t79 = 108231461410695LLU;

    t79 = ((x373-x374)|(x375&x376));

    if (t79 != 1986558250687LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint8_t x378 = 26U;
	int32_t x380 = INT32_MAX;
	volatile uint32_t t80 = 4U;

    t80 = ((x377-x378)|(x379&x380));

    if (t80 != 2147451533U) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x381 = -8;
	static int16_t x382 = 92;
	static int8_t x384 = -1;

    t81 = ((x381-x382)|(x383&x384));

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x385 = 20U;
	uint16_t x386 = UINT16_MAX;
	volatile uint16_t x387 = 2U;
	uint8_t x388 = UINT8_MAX;

    t82 = ((x385-x386)|(x387&x388));

    if (t82 != -65513) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x389 = 893516764U;
	uint8_t x390 = 2U;
	static uint8_t x391 = 11U;
	int64_t x392 = INT64_MAX;
	int64_t t83 = 358256921LL;

    t83 = ((x389-x390)|(x391&x392));

    if (t83 != 893516763LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x393 = -1;
	int32_t x394 = INT32_MIN;
	static uint32_t x396 = UINT32_MAX;
	static volatile int64_t t84 = 133267521074814LL;

    t84 = ((x393-x394)|(x395&x396));

    if (t84 != 2147483647LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x397 = UINT16_MAX;
	uint32_t x398 = UINT32_MAX;
	uint64_t x399 = 1212104LLU;
	int32_t x400 = -53687;

    t85 = ((x397-x398)|(x399&x400));

    if (t85 != 1257032LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x401 = INT16_MAX;
	static volatile int16_t x404 = INT16_MIN;
	int32_t t86 = -91;

    t86 = ((x401-x402)|(x403&x404));

    if (t86 != -694) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x405 = 34519166U;
	uint32_t x406 = 11151U;
	volatile int32_t x407 = INT32_MIN;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t87 = 148140368LLU;

    t87 = ((x405-x406)|(x407&x408));

    if (t87 != 18446744071596575983LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x409 = 9U;
	static int8_t x410 = -3;
	uint8_t x411 = 13U;
	int8_t x412 = INT8_MIN;
	volatile uint32_t t88 = 7U;

    t88 = ((x409-x410)|(x411&x412));

    if (t88 != 12U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x415 = INT16_MIN;
	static int64_t x416 = -1LL;
	static int64_t t89 = -11687299326LL;

    t89 = ((x413-x414)|(x415&x416));

    if (t89 != -114LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x417 = INT8_MIN;
	uint16_t x418 = UINT16_MAX;
	uint8_t x419 = 5U;
	volatile int16_t x420 = 20;
	volatile int32_t t90 = 793849496;

    t90 = ((x417-x418)|(x419&x420));

    if (t90 != -65659) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x421 = 111U;
	int32_t x422 = 2;
	static int64_t x423 = INT64_MIN;
	volatile int64_t t91 = -1131497979898LL;

    t91 = ((x421-x422)|(x423&x424));

    if (t91 != -9223372036854775699LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x425 = -1;
	static int8_t x426 = INT8_MAX;
	static int64_t x427 = INT64_MIN;
	uint64_t x428 = 7LLU;
	volatile uint64_t t92 = 841LLU;

    t92 = ((x425-x426)|(x427&x428));

    if (t92 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x431 = 227349673U;
	uint32_t t93 = 107U;

    t93 = ((x429-x430)|(x431&x432));

    if (t93 != 227349929U) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x433 = 27229916LLU;
	int8_t x435 = -1;
	int32_t x436 = INT32_MIN;
	static uint64_t t94 = 152589338425487595LLU;

    t94 = ((x433-x434)|(x435&x436));

    if (t94 != 18446744071589297884LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x442 = INT64_MIN;
	int16_t x443 = -1;
	uint16_t x444 = 293U;
	static int64_t t95 = 877605651354327LL;

    t95 = ((x441-x442)|(x443&x444));

    if (t95 != 9223372034707292453LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x445 = -1;
	volatile int16_t x446 = -1;
	int64_t x448 = INT64_MIN;

    t96 = ((x445-x446)|(x447&x448));

    if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x449 = INT16_MIN;
	uint32_t x450 = 84U;
	volatile int16_t x451 = INT16_MAX;
	static volatile uint64_t x452 = 87981519LLU;
	uint64_t t97 = 8077336329LLU;

    t97 = ((x449-x450)|(x451&x452));

    if (t97 != 4294934511LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x453 = 34934207550118289LLU;
	volatile uint8_t x454 = UINT8_MAX;
	volatile uint64_t x456 = UINT64_MAX;
	volatile uint64_t t98 = 1325962732407404497LLU;

    t98 = ((x453-x454)|(x455&x456));

    if (t98 != 34934207550128127LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x457 = 15U;
	uint16_t x458 = 2U;
	volatile int64_t x459 = INT64_MIN;
	uint64_t x460 = UINT64_MAX;
	uint64_t t99 = 29329945294277LLU;

    t99 = ((x457-x458)|(x459&x460));

    if (t99 != 9223372036854775821LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x461 = UINT32_MAX;
	int16_t x462 = 3287;
	uint64_t x463 = UINT64_MAX;
	uint32_t x464 = UINT32_MAX;

    t100 = ((x461-x462)|(x463&x464));

    if (t100 != 4294967295LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x465 = 48U;
	static uint16_t x466 = 4174U;
	uint16_t x467 = 110U;
	static int16_t x468 = -1;
	volatile int32_t t101 = -78792;

    t101 = ((x465-x466)|(x467&x468));

    if (t101 != -4114) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x472 = INT8_MIN;
	volatile int64_t t102 = 6LL;

    t102 = ((x469-x470)|(x471&x472));

    if (t102 != -9223372032560007160LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x473 = INT64_MIN;
	uint64_t x474 = UINT64_MAX;
	int16_t x475 = 1813;
	static uint64_t t103 = 327LLU;

    t103 = ((x473-x474)|(x475&x476));

    if (t103 != 9223372036854777621LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x477 = INT16_MIN;
	volatile int32_t x478 = INT32_MIN;
	int8_t x479 = INT8_MIN;
	int32_t x480 = -3;
	int32_t t104 = -1887;

    t104 = ((x477-x478)|(x479&x480));

    if (t104 != -128) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x481 = 2U;
	static volatile uint32_t x482 = 13336U;
	uint64_t x483 = 1859450742736LLU;
	uint32_t x484 = UINT32_MAX;
	volatile uint64_t t105 = 615997220803LLU;

    t105 = ((x481-x482)|(x483&x484));

    if (t105 != 4294963194LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint8_t x485 = 40U;
	volatile int64_t x486 = -1LL;
	uint64_t x487 = UINT64_MAX;
	volatile uint64_t t106 = 129442LLU;

    t106 = ((x485-x486)|(x487&x488));

    if (t106 != 273158147563LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x489 = -1LL;
	int32_t x490 = INT32_MIN;
	int64_t x491 = INT64_MIN;
	static int16_t x492 = INT16_MIN;

    t107 = ((x489-x490)|(x491&x492));

    if (t107 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x493 = 114U;
	volatile uint32_t x494 = UINT32_MAX;
	static int32_t x495 = -1;
	uint32_t x496 = 132U;
	static uint32_t t108 = 1472399U;

    t108 = ((x493-x494)|(x495&x496));

    if (t108 != 247U) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x497 = 8369;
	volatile int32_t x498 = -128746;
	int64_t x499 = -75202LL;
	uint16_t x500 = 6517U;
	int64_t t109 = 1411064534890603LL;

    t109 = ((x497-x498)|(x499&x500));

    if (t109 != 139199LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x501 = INT8_MIN;
	uint16_t x502 = 1U;
	int64_t x503 = INT64_MIN;
	int16_t x504 = 215;
	int64_t t110 = -2830413LL;

    t110 = ((x501-x502)|(x503&x504));

    if (t110 != -129LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x506 = -83570434;
	int32_t x508 = 7803;

    t111 = ((x505-x506)|(x507&x508));

    if (t111 != 83574651) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x509 = 5600U;
	int64_t x510 = -1LL;
	volatile int64_t x511 = INT64_MIN;
	int64_t x512 = -909933819336LL;
	int64_t t112 = -122632464857370LL;

    t112 = ((x509-x510)|(x511&x512));

    if (t112 != -9223372036854770207LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int8_t x513 = -1;
	int64_t x514 = 458711LL;
	static int32_t x516 = -1;

    t113 = ((x513-x514)|(x515&x516));

    if (t113 != -854LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x517 = INT64_MAX;
	int64_t x518 = INT64_MAX;
	int64_t x519 = INT64_MIN;
	uint64_t x520 = 4845LLU;
	uint64_t t114 = 24423LLU;

    t114 = ((x517-x518)|(x519&x520));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x530 = -9516995;
	static int8_t x531 = INT8_MAX;
	uint64_t t115 = 1591377LLU;

    t115 = ((x529-x530)|(x531&x532));

    if (t115 != 101514386865785LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x533 = -67;
	uint64_t x534 = UINT64_MAX;
	int8_t x535 = 1;
	uint64_t t116 = 785519LLU;

    t116 = ((x533-x534)|(x535&x536));

    if (t116 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x537 = 1413U;
	int64_t x539 = 12222LL;
	volatile int16_t x540 = INT16_MIN;
	static volatile uint64_t t117 = 6593831837528643LLU;

    t117 = ((x537-x538)|(x539&x540));

    if (t117 != 15579550178633175136LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x541 = 716035;
	volatile int8_t x543 = -5;
	uint32_t x544 = 1053914594U;
	uint32_t t118 = 29U;

    t118 = ((x541-x542)|(x543&x544));

    if (t118 != 1054604771U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x545 = UINT64_MAX;
	static int32_t x547 = INT32_MIN;
	uint64_t t119 = 1093785974LLU;

    t119 = ((x545-x546)|(x547&x548));

    if (t119 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x549 = 11564941U;
	int16_t x550 = INT16_MIN;
	static int8_t x551 = -1;
	static uint8_t x552 = UINT8_MAX;
	static volatile uint32_t t120 = 74432526U;

    t120 = ((x549-x550)|(x551&x552));

    if (t120 != 11597823U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x555 = -1;
	int8_t x556 = -1;
	volatile int64_t t121 = -188107015164248724LL;

    t121 = ((x553-x554)|(x555&x556));

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x562 = INT16_MIN;
	volatile uint16_t x563 = 15U;
	uint16_t x564 = 0U;
	int32_t t122 = -989795301;

    t122 = ((x561-x562)|(x563&x564));

    if (t122 != 32640) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x570 = INT8_MAX;
	int8_t x571 = INT8_MIN;
	int64_t t123 = -1025371576LL;

    t123 = ((x569-x570)|(x571&x572));

    if (t123 != -128LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x573 = 783;
	volatile int8_t x574 = 1;

    t124 = ((x573-x574)|(x575&x576));

    if (t124 != 9167U) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x578 = INT16_MAX;
	volatile int64_t x579 = -21132715LL;
	static int32_t x580 = INT32_MAX;

    t125 = ((x577-x578)|(x579&x580));

    if (t125 != -30121LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x581 = -977141639;
	uint16_t x582 = UINT16_MAX;
	volatile int8_t x583 = INT8_MIN;
	uint8_t x584 = 105U;
	volatile int32_t t126 = 0;

    t126 = ((x581-x582)|(x583&x584));

    if (t126 != -977207174) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x585 = -1;
	int8_t x586 = -1;
	volatile uint64_t x588 = 2056234644LLU;

    t127 = ((x585-x586)|(x587&x588));

    if (t127 != 2056234644LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x590 = INT8_MIN;
	int8_t x591 = INT8_MAX;
	int64_t x592 = INT64_MIN;
	int64_t t128 = 1072596946354104LL;

    t128 = ((x589-x590)|(x591&x592));

    if (t128 != 127LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x594 = 36U;
	static volatile uint16_t x596 = 5672U;

    t129 = ((x593-x594)|(x595&x596));

    if (t129 != -32804) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x597 = INT32_MIN;
	int8_t x599 = -12;
	static volatile int32_t t130 = -853763465;

    t130 = ((x597-x598)|(x599&x600));

    if (t130 != -2147450891) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x602 = INT64_MAX;
	volatile int16_t x603 = -1;
	uint16_t x604 = UINT16_MAX;
	int64_t t131 = 9LL;

    t131 = ((x601-x602)|(x603&x604));

    if (t131 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x605 = 2U;
	int16_t x606 = INT16_MAX;
	int64_t x608 = INT64_MIN;
	int64_t t132 = 528392052LL;

    t132 = ((x605-x606)|(x607&x608));

    if (t132 != -32765LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x609 = INT8_MAX;
	static int32_t x611 = -409324;
	static uint16_t x612 = UINT16_MAX;
	volatile int32_t t133 = -527674;

    t133 = ((x609-x610)|(x611&x612));

    if (t133 != 49534) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x615 = UINT32_MAX;
	int64_t x616 = INT64_MAX;
	volatile int64_t t134 = 19LL;

    t134 = ((x613-x614)|(x615&x616));

    if (t134 != 4294967295LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x617 = 27136399447172675LLU;
	volatile int8_t x618 = INT8_MAX;
	uint8_t x619 = UINT8_MAX;
	uint32_t x620 = 6U;
	uint64_t t135 = 34731211451154924LLU;

    t135 = ((x617-x618)|(x619&x620));

    if (t135 != 27136399447172550LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x622 = INT8_MIN;
	uint64_t x624 = 275776065506655035LLU;

    t136 = ((x621-x622)|(x623&x624));

    if (t136 != 32895LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x625 = 3529176490LLU;
	uint64_t x626 = 1054436992LLU;
	static uint64_t x627 = UINT64_MAX;

    t137 = ((x625-x626)|(x627&x628));

    if (t137 != UINT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x638 = 94U;
	int64_t x639 = INT64_MIN;
	int16_t x640 = 69;
	static int64_t t138 = 348LL;

    t138 = ((x637-x638)|(x639&x640));

    if (t138 != 65441LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x641 = 317LLU;
	int32_t x642 = INT32_MAX;
	static volatile uint8_t x643 = 60U;
	volatile int16_t x644 = INT16_MIN;
	volatile uint64_t t139 = 3137324081LLU;

    t139 = ((x641-x642)|(x643&x644));

    if (t139 != 18446744071562068286LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x645 = 14U;
	uint16_t x646 = 3U;
	uint64_t x647 = 234768LLU;
	uint8_t x648 = 9U;
	uint64_t t140 = 39981862154059717LLU;

    t140 = ((x645-x646)|(x647&x648));

    if (t140 != 11LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x649 = INT8_MIN;
	uint64_t x650 = UINT64_MAX;
	uint32_t x651 = 44701835U;
	uint32_t x652 = 5U;
	static uint64_t t141 = 494939104395147405LLU;

    t141 = ((x649-x650)|(x651&x652));

    if (t141 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x657 = 6830713606861LLU;
	uint16_t x658 = UINT16_MAX;
	static uint32_t x659 = UINT32_MAX;
	int8_t x660 = INT8_MAX;
	static volatile uint64_t t142 = 17252937871498988LLU;

    t142 = ((x657-x658)|(x659&x660));

    if (t142 != 6830713541375LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x665 = 41421746506629LL;
	int32_t x666 = INT32_MIN;
	int16_t x667 = -1;
	int16_t x668 = -1;
	int64_t t143 = -23978336LL;

    t143 = ((x665-x666)|(x667&x668));

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x669 = INT8_MIN;
	volatile uint16_t x670 = 192U;
	volatile uint8_t x671 = 55U;
	uint64_t x672 = 64132214281227952LLU;
	uint64_t t144 = 1652803802251773LLU;

    t144 = ((x669-x670)|(x671&x672));

    if (t144 != 18446744073709551344LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x673 = INT8_MIN;
	static volatile uint8_t x674 = UINT8_MAX;
	volatile uint8_t x675 = 27U;
	int64_t x676 = INT64_MIN;
	int64_t t145 = 1015311LL;

    t145 = ((x673-x674)|(x675&x676));

    if (t145 != -383LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x677 = 1555LL;
	volatile int8_t x678 = -17;
	volatile uint32_t x679 = 2U;
	volatile uint16_t x680 = UINT16_MAX;

    t146 = ((x677-x678)|(x679&x680));

    if (t146 != 1574LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x681 = -2602;
	int32_t x682 = INT32_MIN;
	int16_t x683 = INT16_MIN;
	int32_t x684 = INT32_MAX;
	volatile int32_t t147 = -121257;

    t147 = ((x681-x682)|(x683&x684));

    if (t147 != 2147481046) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x685 = 17709398797LL;
	uint16_t x686 = 2U;
	int64_t x687 = INT64_MAX;
	static int64_t x688 = 266543337LL;
	int64_t t148 = 4745935814212178LL;

    t148 = ((x685-x686)|(x687&x688));

    if (t148 != 17715690475LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x689 = 14LLU;
	int16_t x690 = 0;
	volatile uint64_t t149 = 1103LLU;

    t149 = ((x689-x690)|(x691&x692));

    if (t149 != 15LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x693 = INT16_MIN;
	volatile int8_t x694 = INT8_MIN;
	int8_t x695 = -7;
	int8_t x696 = -10;
	static int32_t t150 = -3868065;

    t150 = ((x693-x694)|(x695&x696));

    if (t150 != -16) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x697 = 147LLU;
	int8_t x700 = INT8_MIN;

    t151 = ((x697-x698)|(x699&x700));

    if (t151 != 18446744073709551528LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x701 = INT64_MAX;
	uint8_t x702 = 1U;
	int8_t x703 = 40;
	uint8_t x704 = 10U;

    t152 = ((x701-x702)|(x703&x704));

    if (t152 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x706 = -1LL;
	volatile int16_t x707 = -1;
	uint64_t x708 = 525396951969306LLU;
	volatile uint64_t t153 = 398905698470637LLU;

    t153 = ((x705-x706)|(x707&x708));

    if (t153 != 525396951969306LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x709 = INT8_MAX;
	int16_t x710 = INT16_MAX;
	int8_t x711 = 1;
	static int64_t t154 = -131349444278057543LL;

    t154 = ((x709-x710)|(x711&x712));

    if (t154 != -32639LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x713 = INT32_MIN;
	volatile int8_t x715 = INT8_MAX;
	static int16_t x716 = INT16_MIN;
	static volatile int32_t t155 = 50;

    t155 = ((x713-x714)|(x715&x716));

    if (t155 != -2147482664) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x717 = 2884;
	uint8_t x718 = 7U;
	int8_t x719 = 7;
	int32_t t156 = 9651037;

    t156 = ((x717-x718)|(x719&x720));

    if (t156 != 2877) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x722 = INT32_MIN;
	int16_t x723 = INT16_MIN;
	int64_t x724 = INT64_MIN;
	volatile int64_t t157 = 66260973414LL;

    t157 = ((x721-x722)|(x723&x724));

    if (t157 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x725 = 12U;
	volatile uint64_t x726 = 1987059LLU;
	int64_t x727 = -4507525007871569004LL;
	static int32_t x728 = 68;
	volatile uint64_t t158 = 261LLU;

    t158 = ((x725-x726)|(x727&x728));

    if (t158 != 18446744073707564573LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x729 = -4;
	static uint64_t x730 = 32236177LLU;
	uint16_t x731 = UINT16_MAX;
	uint64_t x732 = UINT64_MAX;
	uint64_t t159 = 12861792947832478LLU;

    t159 = ((x729-x730)|(x731&x732));

    if (t159 != 18446744073677373439LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int64_t x733 = -5LL;
	uint32_t x734 = 243U;
	uint32_t x735 = UINT32_MAX;
	static int16_t x736 = INT16_MAX;
	int64_t t160 = -20820367468435207LL;

    t160 = ((x733-x734)|(x735&x736));

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int64_t x737 = -1LL;
	int16_t x738 = INT16_MIN;
	static uint16_t x740 = 365U;

    t161 = ((x737-x738)|(x739&x740));

    if (t161 != 32767LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x742 = UINT64_MAX;
	int16_t x743 = -1;
	uint64_t x744 = 360632174273483LLU;

    t162 = ((x741-x742)|(x743&x744));

    if (t162 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x745 = 0;
	int16_t x746 = INT16_MIN;
	int8_t x747 = INT8_MIN;

    t163 = ((x745-x746)|(x747&x748));

    if (t163 != -128) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x749 = -16617672787216LL;
	int16_t x750 = INT16_MAX;
	int16_t x751 = INT16_MAX;
	static int32_t x752 = INT32_MAX;
	int64_t t164 = -343629878871LL;

    t164 = ((x749-x750)|(x751&x752));

    if (t164 != -16617672802305LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x754 = INT8_MIN;
	uint32_t x755 = 106U;
	static int16_t x756 = INT16_MAX;
	uint32_t t165 = 164055304U;

    t165 = ((x753-x754)|(x755&x756));

    if (t165 != 255U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x761 = 29;
	int8_t x762 = 12;
	int16_t x764 = -1020;
	int32_t t166 = 3;

    t166 = ((x761-x762)|(x763&x764));

    if (t166 != 21) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x765 = INT8_MIN;
	volatile int16_t x766 = 247;
	uint32_t x767 = 333U;
	int32_t x768 = INT32_MIN;
	uint32_t t167 = 1105U;

    t167 = ((x765-x766)|(x767&x768));

    if (t167 != 4294966921U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x773 = INT16_MAX;
	static int64_t x774 = -1LL;
	uint8_t x775 = 0U;
	uint8_t x776 = 6U;

    t168 = ((x773-x774)|(x775&x776));

    if (t168 != 32768LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x777 = 101247U;
	int32_t x778 = -112;
	int64_t x780 = -1LL;

    t169 = ((x777-x778)|(x779&x780));

    if (t169 != -17LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x781 = 9LL;
	static int8_t x782 = -14;
	static int32_t x783 = 3809687;
	static volatile int64_t t170 = 176788506LL;

    t170 = ((x781-x782)|(x783&x784));

    if (t170 != 1712407LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x789 = -1;
	volatile uint32_t x790 = 156976310U;
	volatile int16_t x792 = INT16_MIN;
	static volatile uint32_t t171 = 31860191U;

    t171 = ((x789-x790)|(x791&x792));

    if (t171 != 4294949705U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x793 = UINT16_MAX;
	volatile uint32_t x794 = 823U;
	int32_t x795 = INT32_MIN;
	static uint16_t x796 = 6107U;
	uint32_t t172 = 82927U;

    t172 = ((x793-x794)|(x795&x796));

    if (t172 != 64712U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x797 = UINT8_MAX;
	uint32_t x798 = UINT32_MAX;
	volatile int8_t x799 = INT8_MIN;
	volatile int8_t x800 = -15;
	volatile uint32_t t173 = 143889U;

    t173 = ((x797-x798)|(x799&x800));

    if (t173 != 4294967168U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x801 = 6U;
	int8_t x802 = -2;
	volatile int64_t x803 = -1LL;
	volatile int64_t t174 = 11430779LL;

    t174 = ((x801-x802)|(x803&x804));

    if (t174 != -120LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x805 = INT16_MIN;
	int32_t x806 = INT32_MIN;
	int16_t x807 = 30;
	static uint16_t x808 = UINT16_MAX;
	volatile int32_t t175 = -1040315;

    t175 = ((x805-x806)|(x807&x808));

    if (t175 != 2147450910) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x809 = -2035;
	volatile int64_t x810 = INT64_MIN;
	int32_t x811 = INT32_MIN;
	uint32_t x812 = 4449907U;
	volatile int64_t t176 = 1144LL;

    t176 = ((x809-x810)|(x811&x812));

    if (t176 != 9223372036854773773LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x814 = 233857096LLU;
	int32_t x815 = INT32_MIN;
	static int8_t x816 = INT8_MIN;
	static uint64_t t177 = 53LLU;

    t177 = ((x813-x814)|(x815&x816));

    if (t177 != 18446744073475694519LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x817 = UINT8_MAX;
	static volatile int8_t x818 = INT8_MAX;
	volatile uint64_t x819 = 9470843735LLU;
	int32_t x820 = INT32_MIN;
	volatile uint64_t t178 = 14354105LLU;

    t178 = ((x817-x818)|(x819&x820));

    if (t178 != 8589934720LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x821 = UINT32_MAX;
	int8_t x822 = -1;
	volatile int8_t x823 = INT8_MAX;
	int32_t x824 = INT32_MAX;

    t179 = ((x821-x822)|(x823&x824));

    if (t179 != 127U) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int16_t x826 = 3;
	int16_t x827 = -1;
	uint16_t x828 = 2171U;
	int32_t t180 = 10981;

    t180 = ((x825-x826)|(x827&x828));

    if (t180 != -57508353) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x829 = -111766;
	uint64_t x830 = 1532982029943055027LLU;
	int16_t x831 = 4681;
	volatile uint16_t x832 = 12U;
	uint64_t t181 = 430500545LLU;

    t181 = ((x829-x830)|(x831&x832));

    if (t181 != 16913762043766384831LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x834 = -61379555855380LL;
	int32_t x835 = -653179719;
	static uint64_t x836 = UINT64_MAX;
	uint64_t t182 = 44575769169685040LLU;

    t182 = ((x833-x834)|(x835&x836));

    if (t182 != 18446744073099267259LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x837 = 9;
	volatile int8_t x838 = INT8_MIN;
	volatile int32_t x839 = INT32_MIN;
	int16_t x840 = INT16_MIN;
	volatile int32_t t183 = 688;

    t183 = ((x837-x838)|(x839&x840));

    if (t183 != -2147483511) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x841 = -1;
	uint32_t x842 = 13U;
	int32_t x843 = 478770;
	int8_t x844 = INT8_MAX;
	uint32_t t184 = 710U;

    t184 = ((x841-x842)|(x843&x844));

    if (t184 != 4294967282U) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x846 = INT8_MIN;
	volatile uint8_t x847 = 10U;
	int64_t x848 = INT64_MIN;
	int64_t t185 = -5LL;

    t185 = ((x845-x846)|(x847&x848));

    if (t185 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x849 = 751574682U;
	static volatile uint64_t x850 = UINT64_MAX;
	int16_t x852 = INT16_MIN;
	uint64_t t186 = 29326210829133LLU;

    t186 = ((x849-x850)|(x851&x852));

    if (t186 != 18446744073709526683LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x853 = 368U;
	int32_t x854 = INT32_MIN;
	int64_t x855 = -1LL;
	static volatile uint8_t x856 = 19U;
	static volatile int64_t t187 = -21LL;

    t187 = ((x853-x854)|(x855&x856));

    if (t187 != 2147484019LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x857 = 69378237LL;
	int8_t x858 = -3;
	uint16_t x859 = UINT16_MAX;
	volatile uint64_t t188 = 1011318063LLU;

    t188 = ((x857-x858)|(x859&x860));

    if (t188 != 69402623LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x861 = INT16_MIN;
	volatile int64_t x862 = INT64_MIN;
	static volatile uint16_t x863 = 5717U;
	static int8_t x864 = INT8_MIN;
	volatile int64_t t189 = -280LL;

    t189 = ((x861-x862)|(x863&x864));

    if (t189 != 9223372036854748672LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x865 = INT8_MIN;
	volatile int16_t x867 = -1;
	uint16_t x868 = 0U;
	int32_t t190 = -389043657;

    t190 = ((x865-x866)|(x867&x868));

    if (t190 != -3022) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x869 = -1;
	int16_t x870 = -1;
	int16_t x871 = -1;
	volatile uint64_t x872 = UINT64_MAX;
	uint64_t t191 = UINT64_MAX;

    t191 = ((x869-x870)|(x871&x872));

    if (t191 != UINT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x875 = INT32_MIN;
	int8_t x876 = INT8_MIN;
	int64_t t192 = -1308293395182936LL;

    t192 = ((x873-x874)|(x875&x876));

    if (t192 != -55LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x878 = INT32_MAX;
	int8_t x879 = INT8_MIN;
	int64_t x880 = INT64_MIN;
	static volatile int64_t t193 = 56265910LL;

    t193 = ((x877-x878)|(x879&x880));

    if (t193 != -2147483648LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x881 = INT8_MAX;
	int8_t x882 = INT8_MAX;
	uint64_t x883 = 40485467LLU;
	int64_t x884 = -3110214988081LL;
	volatile uint64_t t194 = 35037157LLU;

    t194 = ((x881-x882)|(x883&x884));

    if (t194 != 2720331LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x885 = 9;
	int64_t x886 = -1471350353441963LL;
	volatile uint16_t x887 = UINT16_MAX;
	int64_t t195 = 18024504LL;

    t195 = ((x885-x886)|(x887&x888));

    if (t195 != 1471350353441972LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x894 = INT16_MIN;
	int8_t x895 = 8;
	uint64_t x896 = 7039961039LLU;
	uint64_t t196 = 418009740LLU;

    t196 = ((x893-x894)|(x895&x896));

    if (t196 != 32767LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x897 = -1;
	uint16_t x898 = 643U;
	static volatile int32_t x899 = INT32_MIN;
	uint64_t x900 = UINT64_MAX;

    t197 = ((x897-x898)|(x899&x900));

    if (t197 != 18446744073709550972LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x901 = UINT8_MAX;
	uint64_t t198 = 1LLU;

    t198 = ((x901-x902)|(x903&x904));

    if (t198 != 4581632LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x905 = INT8_MIN;
	volatile uint32_t x906 = 49U;
	int32_t x907 = -99;
	static volatile uint64_t x908 = 176438293980LLU;
	volatile uint64_t t199 = 3433133722LLU;

    t199 = ((x905-x906)|(x907&x908));

    if (t199 != 180388626399LLU) { NG(); } else { ; }
	
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


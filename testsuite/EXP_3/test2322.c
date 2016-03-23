
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

static int8_t x3 = INT8_MIN;
volatile int64_t x4 = INT64_MAX;
int32_t x5 = -3;
int32_t t1 = 216250;
int8_t x14 = -20;
int32_t x16 = 1;
static volatile uint64_t t4 = 14637LLU;
int64_t x23 = -1LL;
int8_t x24 = INT8_MIN;
static int16_t x31 = INT16_MAX;
volatile int32_t t7 = 2035112;
int16_t x35 = -5038;
int8_t x38 = INT8_MIN;
int16_t x58 = INT16_MIN;
uint16_t x63 = 30701U;
static volatile int32_t x66 = -1;
volatile int8_t x67 = -1;
int32_t x68 = 384782557;
volatile int64_t x70 = 0LL;
static int32_t x71 = 32754;
uint32_t x72 = UINT32_MAX;
int64_t x73 = INT64_MIN;
static uint16_t x75 = UINT16_MAX;
int32_t x78 = 3;
static uint32_t x79 = 3U;
int16_t x81 = 5183;
static uint16_t x83 = 1446U;
int64_t t21 = -69572621058439LL;
static int32_t x90 = INT32_MAX;
volatile uint32_t t22 = 1234213210U;
volatile int8_t x94 = INT8_MIN;
static int16_t x95 = INT16_MIN;
uint16_t x100 = 42U;
volatile uint64_t t25 = 58LLU;
static uint16_t x108 = 444U;
int16_t x112 = -1;
volatile int64_t x113 = INT64_MIN;
int64_t t28 = 10905120LL;
volatile int32_t x123 = INT32_MIN;
int64_t x131 = INT64_MIN;
static volatile int64_t t33 = -1921162798371222LL;
uint16_t x138 = UINT16_MAX;
int8_t x142 = INT8_MIN;
volatile int32_t x143 = INT32_MIN;
static uint32_t x154 = 17343812U;
volatile int64_t t38 = -6748LL;
uint64_t x159 = 65743516231LLU;
static volatile int64_t t40 = -4655584075848LL;
int64_t x165 = 56LL;
static int64_t t42 = 69LL;
volatile int8_t x185 = INT8_MIN;
int32_t x186 = INT32_MIN;
int8_t x188 = -1;
int8_t x190 = INT8_MIN;
uint16_t x193 = 14940U;
int64_t t48 = -55379748664190017LL;
volatile int64_t t49 = -6592002273LL;
int16_t x205 = 2;
static uint32_t x208 = 688922U;
uint32_t x209 = 1740U;
int64_t x212 = INT64_MIN;
int64_t t52 = 51LL;
uint32_t x215 = 0U;
volatile int32_t x219 = -1;
volatile int64_t t54 = 17500LL;
static int16_t x223 = INT16_MIN;
uint32_t t56 = 26U;
uint32_t x232 = 2304U;
int8_t x238 = INT8_MIN;
volatile int16_t x239 = -6;
int8_t x242 = INT8_MAX;
int16_t x243 = INT16_MIN;
uint16_t x252 = UINT16_MAX;
int16_t x262 = INT16_MAX;
volatile int64_t t68 = 2662362571LL;
int16_t x282 = -1;
static int64_t x284 = INT64_MAX;
volatile int64_t t70 = 5016821LL;
uint32_t x285 = 225U;
uint64_t x287 = 377015LLU;
int8_t x292 = INT8_MIN;
volatile int8_t x298 = INT8_MIN;
int16_t x299 = INT16_MAX;
uint16_t x305 = 350U;
volatile int64_t t78 = -3669675750869850473LL;
int16_t x319 = INT16_MIN;
int64_t t79 = 38LL;
static uint64_t x325 = 14935388380102LLU;
int32_t x332 = INT32_MAX;
static uint32_t t82 = 18044004U;
uint32_t x334 = 0U;
uint64_t x337 = 684879LLU;
volatile int8_t x339 = INT8_MAX;
volatile int32_t t88 = 2163;
uint8_t x357 = 27U;
volatile uint32_t x364 = 58391223U;
int32_t x371 = INT32_MIN;
int32_t x376 = -12073316;
volatile int32_t t93 = 199452;
uint16_t x379 = 7497U;
int8_t x385 = INT8_MIN;
int64_t t97 = -208653086908459LL;
uint64_t x400 = 143829654102022LLU;
static volatile int16_t x401 = 316;
volatile int64_t t105 = -2LL;
int64_t t106 = -4LL;
volatile int64_t x433 = 34LL;
int64_t x435 = 15036640298LL;
int32_t x437 = INT32_MIN;
uint16_t x439 = UINT16_MAX;
volatile int64_t t110 = -47LL;
int64_t x447 = INT64_MIN;
uint64_t t112 = 0LLU;
volatile int32_t x459 = 14501;
uint32_t x466 = 28075330U;
uint64_t x468 = UINT64_MAX;
volatile uint32_t x471 = 189246U;
int64_t x477 = INT64_MIN;
int64_t x488 = -1LL;
int64_t x492 = INT64_MIN;
int64_t x494 = INT64_MIN;
int32_t x495 = INT32_MIN;
int8_t x497 = INT8_MIN;
int32_t x498 = INT32_MAX;
int8_t x500 = INT8_MAX;
uint8_t x502 = 125U;
volatile int64_t x505 = INT64_MIN;
int8_t x515 = -1;
uint8_t x520 = UINT8_MAX;
uint32_t t131 = 1682570792U;
volatile uint64_t x531 = UINT64_MAX;
uint8_t x533 = UINT8_MAX;
uint16_t x534 = 19U;
static uint32_t x536 = UINT32_MAX;
static int16_t x539 = INT16_MAX;
int8_t x550 = INT8_MAX;
static uint64_t x552 = 109497517189453656LLU;
static int64_t x556 = -1LL;
int8_t x557 = -1;
uint64_t x560 = 174928168516454LLU;
uint64_t t139 = 151081172LLU;
int16_t x570 = INT16_MIN;
static int32_t x576 = INT32_MIN;
static uint32_t x590 = 6899815U;
uint8_t x591 = 26U;
uint8_t x603 = UINT8_MAX;
int32_t x605 = INT32_MIN;
int32_t x607 = INT32_MAX;
uint64_t x608 = 23772706LLU;
int64_t x609 = INT64_MIN;
uint16_t x619 = 4U;
static volatile int64_t t154 = -414548LL;
int8_t x624 = -1;
int64_t x629 = INT64_MIN;
uint32_t x630 = 113258U;
static uint8_t x634 = 111U;
volatile uint32_t x638 = 2355U;
int8_t x639 = 3;
uint8_t x650 = 0U;
int32_t x652 = INT32_MIN;
int64_t t163 = 868263050936161846LL;
static int32_t x666 = INT32_MAX;
uint64_t x668 = 398257650613219742LLU;
int32_t x677 = -1;
uint64_t x683 = 1LLU;
int32_t x687 = INT32_MIN;
int64_t t172 = 15951926224LL;
uint16_t x696 = 18U;
int16_t x701 = INT16_MAX;
uint8_t x704 = 2U;
int32_t x707 = INT32_MAX;
static volatile uint16_t x708 = UINT16_MAX;
uint8_t x716 = 1U;
static volatile int16_t x718 = -1;
uint64_t x719 = UINT64_MAX;
static int32_t x720 = INT32_MIN;
int8_t x726 = INT8_MIN;
volatile int64_t x734 = -1LL;
volatile int16_t x738 = -505;
volatile int32_t x740 = INT32_MAX;
static uint64_t x744 = 736356086310049LLU;
uint64_t t186 = 18LLU;
int32_t x754 = 1;
volatile int16_t x755 = INT16_MIN;
int8_t x761 = -3;
int64_t x763 = INT64_MAX;
uint64_t x764 = 74514LLU;
uint16_t x766 = 8U;
static int16_t x775 = INT16_MIN;
uint16_t x779 = 4U;
int32_t x780 = INT32_MIN;
static int32_t t194 = 0;
int16_t x782 = INT16_MIN;
int16_t x790 = INT16_MIN;
int16_t x792 = INT16_MIN;


void f0(void) {
    	int8_t x1 = -1;
	uint8_t x2 = UINT8_MAX;
	volatile int64_t t0 = 42133134466628443LL;

    t0 = ((x1&x2)&(x3&x4));

    if (t0 != 128LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x6 = 13U;
	int16_t x7 = INT16_MIN;
	uint8_t x8 = 4U;

    t1 = ((x5&x6)&(x7&x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = 30U;
	static uint64_t x10 = UINT64_MAX;
	volatile int8_t x11 = INT8_MAX;
	uint32_t x12 = UINT32_MAX;
	volatile uint64_t t2 = 1073LLU;

    t2 = ((x9&x10)&(x11&x12));

    if (t2 != 30LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x13 = 14U;
	static int8_t x15 = INT8_MIN;
	volatile uint32_t t3 = 928580834U;

    t3 = ((x13&x14)&(x15&x16));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = INT64_MAX;
	int16_t x18 = -1;
	static uint64_t x19 = 1449LLU;
	int8_t x20 = INT8_MIN;

    t4 = ((x17&x18)&(x19&x20));

    if (t4 != 1408LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = UINT32_MAX;
	int32_t x22 = INT32_MIN;
	volatile int64_t t5 = 51555LL;

    t5 = ((x21&x22)&(x23&x24));

    if (t5 != 2147483648LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x25 = 14035U;
	int8_t x26 = -1;
	int8_t x27 = -1;
	int64_t x28 = -1LL;
	int64_t t6 = -661466082LL;

    t6 = ((x25&x26)&(x27&x28));

    if (t6 != 14035LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = -1;
	volatile int16_t x30 = 1405;
	int32_t x32 = -110;

    t7 = ((x29&x30)&(x31&x32));

    if (t7 != 1296) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -1LL;
	int32_t x34 = 38500965;
	static volatile int32_t x36 = -1;
	static int64_t t8 = -1137240LL;

    t8 = ((x33&x34)&(x35&x36));

    if (t8 != 38496320LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	static volatile int8_t x39 = -1;
	static volatile int32_t x40 = INT32_MAX;
	static int32_t t9 = -1;

    t9 = ((x37&x38)&(x39&x40));

    if (t9 != 2147450880) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	int32_t x42 = INT32_MIN;
	int64_t x43 = 8270530LL;
	static uint64_t x44 = 1204153326LLU;
	static volatile uint64_t t10 = 2356LLU;

    t10 = ((x41&x42)&(x43&x44));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	uint8_t x46 = 2U;
	int32_t x47 = -1;
	int32_t x48 = 92;
	volatile int32_t t11 = 1;

    t11 = ((x45&x46)&(x47&x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 1767214U;
	volatile int32_t x50 = INT32_MIN;
	static int8_t x51 = -1;
	volatile uint32_t x52 = 2U;
	volatile uint32_t t12 = 405827699U;

    t12 = ((x49&x50)&(x51&x52));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = INT8_MIN;
	int32_t x54 = 9;
	int16_t x55 = 61;
	uint16_t x56 = UINT16_MAX;
	static volatile int32_t t13 = 11;

    t13 = ((x53&x54)&(x55&x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	int16_t x59 = 470;
	volatile int8_t x60 = -29;
	static int64_t t14 = 3LL;

    t14 = ((x57&x58)&(x59&x60));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	uint32_t x62 = 5147U;
	uint64_t x64 = 187646480LLU;
	volatile uint64_t t15 = 27LLU;

    t15 = ((x61&x62)&(x63&x64));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = -2606425129LL;
	static int64_t t16 = 716347LL;

    t16 = ((x65&x66)&(x67&x68));

    if (t16 != 77926613LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x69 = INT32_MIN;
	int64_t t17 = 1881892834483LL;

    t17 = ((x69&x70)&(x71&x72));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x74 = INT8_MIN;
	volatile uint8_t x76 = UINT8_MAX;
	volatile int64_t t18 = 632LL;

    t18 = ((x73&x74)&(x75&x76));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int64_t x77 = INT64_MAX;
	volatile uint64_t x80 = 2511429504497150087LLU;
	volatile uint64_t t19 = 5972544530655231LLU;

    t19 = ((x77&x78)&(x79&x80));

    if (t19 != 3LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x82 = INT16_MIN;
	int64_t x84 = -23553530578554LL;
	volatile int64_t t20 = 102538704589072498LL;

    t20 = ((x81&x82)&(x83&x84));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x85 = 97839U;
	uint32_t x86 = 59U;
	int64_t x87 = -1LL;
	int16_t x88 = 6;

    t21 = ((x85&x86)&(x87&x88));

    if (t21 != 2LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MAX;
	int32_t x91 = -1;
	uint32_t x92 = 32381U;

    t22 = ((x89&x90)&(x91&x92));

    if (t22 != 125U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = 338;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t23 = 0;

    t23 = ((x93&x94)&(x95&x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = UINT8_MAX;
	int64_t x98 = INT64_MAX;
	static volatile uint8_t x99 = 12U;
	volatile int64_t t24 = 2757755101833164LL;

    t24 = ((x97&x98)&(x99&x100));

    if (t24 != 8LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x101 = 5910772179118544LLU;
	volatile int8_t x102 = -1;
	static int8_t x103 = 5;
	uint16_t x104 = UINT16_MAX;

    t25 = ((x101&x102)&(x103&x104));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = -58;
	volatile uint64_t x106 = 29507171185LLU;
	int8_t x107 = INT8_MIN;
	volatile uint64_t t26 = 101984872LLU;

    t26 = ((x105&x106)&(x107&x108));

    if (t26 != 256LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 13U;
	int32_t x110 = 127773255;
	volatile int16_t x111 = INT16_MIN;
	int32_t t27 = -124;

    t27 = ((x109&x110)&(x111&x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x114 = INT16_MIN;
	int32_t x115 = INT32_MIN;
	static volatile int32_t x116 = 0;

    t28 = ((x113&x114)&(x115&x116));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x117 = 389104764289LLU;
	int16_t x118 = INT16_MIN;
	uint32_t x119 = 13U;
	static int16_t x120 = -1695;
	static volatile uint64_t t29 = 0LLU;

    t29 = ((x117&x118)&(x119&x120));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x121 = -26;
	uint8_t x122 = 57U;
	uint32_t x124 = UINT32_MAX;
	uint32_t t30 = 9075830U;

    t30 = ((x121&x122)&(x123&x124));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int8_t x125 = INT8_MIN;
	volatile int8_t x126 = INT8_MIN;
	static int64_t x127 = -1LL;
	int8_t x128 = 3;
	int64_t t31 = 790275902379LL;

    t31 = ((x125&x126)&(x127&x128));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x129 = 369957131LLU;
	static int32_t x130 = -1;
	int64_t x132 = 2230623LL;
	uint64_t t32 = 87790416659133980LLU;

    t32 = ((x129&x130)&(x131&x132));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 0U;
	uint32_t x134 = UINT32_MAX;
	static int64_t x135 = -1478061LL;
	int16_t x136 = 5277;

    t33 = ((x133&x134)&(x135&x136));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x137 = -1;
	int64_t x139 = INT64_MIN;
	uint8_t x140 = UINT8_MAX;
	volatile int64_t t34 = 3867034100419LL;

    t34 = ((x137&x138)&(x139&x140));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = 24U;
	int32_t x144 = INT32_MIN;
	static int32_t t35 = 14;

    t35 = ((x141&x142)&(x143&x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = UINT32_MAX;
	int16_t x146 = INT16_MIN;
	uint16_t x147 = 372U;
	int64_t x148 = -1LL;
	volatile int64_t t36 = 258LL;

    t36 = ((x145&x146)&(x147&x148));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = 942852791LLU;
	uint16_t x150 = 4U;
	int16_t x151 = INT16_MIN;
	int8_t x152 = 34;
	volatile uint64_t t37 = 413LLU;

    t37 = ((x149&x150)&(x151&x152));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MAX;
	uint8_t x155 = 101U;
	static volatile int64_t x156 = 2822211855474549148LL;

    t38 = ((x153&x154)&(x155&x156));

    if (t38 != 4LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = -661;
	static uint64_t x158 = UINT64_MAX;
	static uint8_t x160 = 3U;
	static volatile uint64_t t39 = 45999788953085820LLU;

    t39 = ((x157&x158)&(x159&x160));

    if (t39 != 3LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MAX;
	int64_t x162 = -1LL;
	int8_t x163 = 1;
	static volatile uint32_t x164 = 1301U;

    t40 = ((x161&x162)&(x163&x164));

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x166 = UINT16_MAX;
	int16_t x167 = INT16_MIN;
	static int32_t x168 = 0;
	volatile int64_t t41 = 231556687LL;

    t41 = ((x165&x166)&(x167&x168));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x169 = 14774933LL;
	static uint8_t x170 = 0U;
	int16_t x171 = INT16_MIN;
	volatile uint32_t x172 = 193264026U;

    t42 = ((x169&x170)&(x171&x172));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 0U;
	uint64_t x174 = 94834LLU;
	uint32_t x175 = 1U;
	volatile int64_t x176 = INT64_MIN;
	volatile uint64_t t43 = 60373368407694LLU;

    t43 = ((x173&x174)&(x175&x176));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x177 = 5125LLU;
	static int32_t x178 = INT32_MIN;
	static volatile uint8_t x179 = 19U;
	static int8_t x180 = 14;
	static uint64_t t44 = 568LLU;

    t44 = ((x177&x178)&(x179&x180));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = -1;
	volatile uint16_t x182 = UINT16_MAX;
	int64_t x183 = -1LL;
	int32_t x184 = INT32_MIN;
	volatile int64_t t45 = -149592746418428LL;

    t45 = ((x181&x182)&(x183&x184));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x187 = INT8_MIN;
	int32_t t46 = INT32_MIN;

    t46 = ((x185&x186)&(x187&x188));

    if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MAX;
	int8_t x191 = INT8_MAX;
	volatile int64_t x192 = INT64_MIN;
	int64_t t47 = 7446922LL;

    t47 = ((x189&x190)&(x191&x192));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x194 = 24236U;
	int64_t x195 = -1LL;
	uint32_t x196 = 10248006U;

    t48 = ((x193&x194)&(x195&x196));

    if (t48 != 6660LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x197 = -1;
	volatile int16_t x198 = INT16_MIN;
	int64_t x199 = INT64_MAX;
	int16_t x200 = -1;

    t49 = ((x197&x198)&(x199&x200));

    if (t49 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x201 = 384U;
	int16_t x202 = INT16_MIN;
	uint16_t x203 = 3313U;
	static volatile int8_t x204 = INT8_MIN;
	int32_t t50 = 26;

    t50 = ((x201&x202)&(x203&x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x206 = 3891331198262LLU;
	int32_t x207 = INT32_MIN;
	static uint64_t t51 = 28LLU;

    t51 = ((x205&x206)&(x207&x208));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x210 = 12;
	uint16_t x211 = UINT16_MAX;

    t52 = ((x209&x210)&(x211&x212));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int8_t x213 = INT8_MIN;
	uint16_t x214 = UINT16_MAX;
	static volatile int16_t x216 = -1;
	volatile uint32_t t53 = 1906U;

    t53 = ((x213&x214)&(x215&x216));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x217 = INT64_MIN;
	static int64_t x218 = -1LL;
	int32_t x220 = 57;

    t54 = ((x217&x218)&(x219&x220));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x221 = INT16_MAX;
	int32_t x222 = -1;
	int32_t x224 = INT32_MAX;
	volatile int32_t t55 = -5107099;

    t55 = ((x221&x222)&(x223&x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 29U;
	int8_t x226 = 1;
	uint32_t x227 = 76674U;
	uint8_t x228 = 99U;

    t56 = ((x225&x226)&(x227&x228));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x229 = 3U;
	volatile int32_t x230 = INT32_MIN;
	int64_t x231 = INT64_MIN;
	int64_t t57 = 963LL;

    t57 = ((x229&x230)&(x231&x232));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x233 = 40U;
	int16_t x234 = INT16_MAX;
	uint64_t x235 = 1482818288466669073LLU;
	int8_t x236 = INT8_MIN;
	volatile uint64_t t58 = 2390190302483728241LLU;

    t58 = ((x233&x234)&(x235&x236));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = UINT8_MAX;
	int64_t x240 = INT64_MIN;
	int64_t t59 = 226769499842683LL;

    t59 = ((x237&x238)&(x239&x240));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x241 = -191;
	int16_t x244 = -507;
	int32_t t60 = -1;

    t60 = ((x241&x242)&(x243&x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x245 = INT8_MAX;
	int16_t x246 = INT16_MIN;
	static int8_t x247 = -1;
	static int32_t x248 = 161047823;
	volatile int32_t t61 = -125235;

    t61 = ((x245&x246)&(x247&x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = UINT32_MAX;
	uint64_t x250 = 8670216149722LLU;
	static int16_t x251 = INT16_MIN;
	static uint64_t t62 = 3955615LLU;

    t62 = ((x249&x250)&(x251&x252));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = UINT8_MAX;
	int16_t x254 = -2;
	uint16_t x255 = 5U;
	int8_t x256 = INT8_MAX;
	static volatile int32_t t63 = 205340;

    t63 = ((x253&x254)&(x255&x256));

    if (t63 != 4) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MAX;
	uint8_t x258 = 0U;
	int32_t x259 = -1;
	volatile uint16_t x260 = UINT16_MAX;
	int64_t t64 = -23497LL;

    t64 = ((x257&x258)&(x259&x260));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = 10U;
	static int16_t x263 = -2489;
	uint64_t x264 = 1269492913268LLU;
	volatile uint64_t t65 = 3731238068307LLU;

    t65 = ((x261&x262)&(x263&x264));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = UINT32_MAX;
	int8_t x266 = INT8_MAX;
	int64_t x267 = INT64_MIN;
	volatile uint32_t x268 = 197U;
	int64_t t66 = 2063657210LL;

    t66 = ((x265&x266)&(x267&x268));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = 4810484;
	volatile int8_t x270 = -1;
	int32_t x271 = INT32_MIN;
	volatile int32_t x272 = -1;
	int32_t t67 = -36693;

    t67 = ((x269&x270)&(x271&x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint32_t x273 = UINT32_MAX;
	int64_t x274 = -1LL;
	static int8_t x275 = INT8_MIN;
	uint32_t x276 = 4U;

    t68 = ((x273&x274)&(x275&x276));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = UINT16_MAX;
	static int16_t x278 = 0;
	uint32_t x279 = 14304723U;
	uint16_t x280 = 38U;
	static uint32_t t69 = 121934U;

    t69 = ((x277&x278)&(x279&x280));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = 0;
	uint32_t x283 = 15U;

    t70 = ((x281&x282)&(x283&x284));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x286 = INT32_MIN;
	int8_t x288 = INT8_MAX;
	volatile uint64_t t71 = 8578744143382LLU;

    t71 = ((x285&x286)&(x287&x288));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x289 = -384844;
	uint16_t x290 = UINT16_MAX;
	static int8_t x291 = -1;
	volatile int32_t t72 = -387222;

    t72 = ((x289&x290)&(x291&x292));

    if (t72 != 8320) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	static uint64_t x294 = 25041435746606LLU;
	int16_t x295 = INT16_MIN;
	static int64_t x296 = -1LL;
	uint64_t t73 = 0LLU;

    t73 = ((x293&x294)&(x295&x296));

    if (t73 != 25039659335680LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MIN;
	uint16_t x300 = UINT16_MAX;
	static int32_t t74 = -9005;

    t74 = ((x297&x298)&(x299&x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x301 = INT16_MIN;
	volatile int16_t x302 = -11183;
	int16_t x303 = INT16_MIN;
	uint32_t x304 = UINT32_MAX;
	volatile uint32_t t75 = 3111U;

    t75 = ((x301&x302)&(x303&x304));

    if (t75 != 4294934528U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x306 = -1;
	int8_t x307 = 11;
	uint64_t x308 = 6LLU;
	volatile uint64_t t76 = 134864LLU;

    t76 = ((x305&x306)&(x307&x308));

    if (t76 != 2LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x309 = UINT64_MAX;
	int64_t x310 = 118409122054LL;
	static volatile uint8_t x311 = UINT8_MAX;
	static int32_t x312 = INT32_MAX;
	volatile uint64_t t77 = 109LLU;

    t77 = ((x309&x310)&(x311&x312));

    if (t77 != 6LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = 5;
	static int64_t x314 = INT64_MIN;
	int16_t x315 = INT16_MIN;
	int64_t x316 = INT64_MAX;

    t78 = ((x313&x314)&(x315&x316));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x317 = INT64_MIN;
	int16_t x318 = INT16_MAX;
	volatile int16_t x320 = 2418;

    t79 = ((x317&x318)&(x319&x320));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = INT32_MIN;
	volatile int64_t x322 = INT64_MIN;
	int8_t x323 = -1;
	int32_t x324 = INT32_MIN;
	volatile int64_t t80 = INT64_MIN;

    t80 = ((x321&x322)&(x323&x324));

    if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x326 = INT8_MIN;
	volatile int8_t x327 = -1;
	uint64_t x328 = UINT64_MAX;
	static uint64_t t81 = 62LLU;

    t81 = ((x325&x326)&(x327&x328));

    if (t81 != 14935388380032LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x329 = 64808853;
	static volatile uint32_t x330 = UINT32_MAX;
	uint32_t x331 = 12262U;

    t82 = ((x329&x330)&(x331&x332));

    if (t82 != 10116U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -1;
	uint16_t x335 = UINT16_MAX;
	volatile int64_t x336 = -1LL;
	volatile int64_t t83 = 13648043771LL;

    t83 = ((x333&x334)&(x335&x336));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x338 = UINT32_MAX;
	uint64_t x340 = 2LLU;
	volatile uint64_t t84 = 12LLU;

    t84 = ((x337&x338)&(x339&x340));

    if (t84 != 2LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	static uint64_t x342 = 2LLU;
	int64_t x343 = -296938363LL;
	int8_t x344 = INT8_MIN;
	volatile uint64_t t85 = 2605916859838066486LLU;

    t85 = ((x341&x342)&(x343&x344));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x345 = 180;
	volatile int16_t x346 = INT16_MIN;
	static uint64_t x347 = 5LLU;
	uint32_t x348 = 406U;
	uint64_t t86 = 62694650072221861LLU;

    t86 = ((x345&x346)&(x347&x348));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = 0U;
	static int64_t x350 = INT64_MIN;
	static uint32_t x351 = 10126168U;
	int16_t x352 = INT16_MAX;
	int64_t t87 = -1200178499730LL;

    t87 = ((x349&x350)&(x351&x352));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = INT16_MIN;
	int32_t x354 = -122766;
	static int32_t x355 = INT32_MAX;
	int16_t x356 = INT16_MIN;

    t88 = ((x353&x354)&(x355&x356));

    if (t88 != 2147352576) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x358 = 3;
	uint8_t x359 = 0U;
	int64_t x360 = -163745787072222LL;
	volatile int64_t t89 = 1173895925791201LL;

    t89 = ((x357&x358)&(x359&x360));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x361 = -2055970310158588LL;
	int32_t x362 = INT32_MAX;
	int64_t x363 = INT64_MIN;
	volatile int64_t t90 = 1714LL;

    t90 = ((x361&x362)&(x363&x364));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = -1;
	int16_t x366 = INT16_MIN;
	static uint16_t x367 = 7U;
	static int16_t x368 = INT16_MIN;
	static volatile int32_t t91 = -2931;

    t91 = ((x365&x366)&(x367&x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = -1;
	int64_t x370 = INT64_MIN;
	uint16_t x372 = UINT16_MAX;
	volatile int64_t t92 = 26823355650LL;

    t92 = ((x369&x370)&(x371&x372));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MAX;
	uint16_t x374 = 237U;
	uint8_t x375 = UINT8_MAX;

    t93 = ((x373&x374)&(x375&x376));

    if (t93 != 12) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x377 = 874;
	volatile int64_t x378 = -1551LL;
	int16_t x380 = INT16_MIN;
	volatile int64_t t94 = -4LL;

    t94 = ((x377&x378)&(x379&x380));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	uint8_t x382 = UINT8_MAX;
	int64_t x383 = -1LL;
	int8_t x384 = -1;
	volatile int64_t t95 = -15940958143192351LL;

    t95 = ((x381&x382)&(x383&x384));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x386 = INT64_MIN;
	int8_t x387 = INT8_MIN;
	int32_t x388 = -2954;
	static int64_t t96 = INT64_MIN;

    t96 = ((x385&x386)&(x387&x388));

    if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x389 = INT16_MAX;
	int16_t x390 = INT16_MAX;
	int8_t x391 = -1;
	static int64_t x392 = 1742757LL;

    t97 = ((x389&x390)&(x391&x392));

    if (t97 != 6053LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int64_t x393 = INT64_MIN;
	uint64_t x394 = 429745LLU;
	static uint64_t x395 = 5396627505LLU;
	static uint8_t x396 = 30U;
	static volatile uint64_t t98 = 439965929751203LLU;

    t98 = ((x393&x394)&(x395&x396));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = 5064507U;
	int32_t x398 = -1;
	static uint8_t x399 = 22U;
	volatile uint64_t t99 = 751508108163219234LLU;

    t99 = ((x397&x398)&(x399&x400));

    if (t99 != 2LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x402 = UINT32_MAX;
	uint64_t x403 = UINT64_MAX;
	int16_t x404 = INT16_MIN;
	uint64_t t100 = 25635315701321734LLU;

    t100 = ((x401&x402)&(x403&x404));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = -1233;
	int16_t x406 = INT16_MIN;
	uint64_t x407 = 713242954LLU;
	static int16_t x408 = INT16_MAX;
	static volatile uint64_t t101 = 156911511LLU;

    t101 = ((x405&x406)&(x407&x408));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MAX;
	int16_t x410 = INT16_MAX;
	static uint8_t x411 = 8U;
	static uint32_t x412 = 9195632U;
	volatile uint32_t t102 = 451U;

    t102 = ((x409&x410)&(x411&x412));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x413 = INT32_MIN;
	int16_t x414 = INT16_MIN;
	int64_t x415 = 272614LL;
	int32_t x416 = -1;
	volatile int64_t t103 = -8939681444LL;

    t103 = ((x413&x414)&(x415&x416));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x417 = -15981087155751LL;
	int32_t x418 = 22952;
	int8_t x419 = -61;
	uint16_t x420 = 2514U;
	volatile int64_t t104 = -4021550971839701LL;

    t104 = ((x417&x418)&(x419&x420));

    if (t104 != 2432LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x421 = INT64_MIN;
	int8_t x422 = INT8_MIN;
	uint16_t x423 = 56U;
	int64_t x424 = -1LL;

    t105 = ((x421&x422)&(x423&x424));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x425 = INT64_MAX;
	int64_t x426 = INT64_MIN;
	int16_t x427 = INT16_MAX;
	static int16_t x428 = 0;

    t106 = ((x425&x426)&(x427&x428));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x429 = INT8_MIN;
	uint8_t x430 = UINT8_MAX;
	int8_t x431 = 1;
	static volatile uint64_t x432 = 328255750003926LLU;
	volatile uint64_t t107 = 970027308692628638LLU;

    t107 = ((x429&x430)&(x431&x432));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x434 = 90400508895689214LLU;
	volatile int16_t x436 = INT16_MIN;
	uint64_t t108 = 8369473840423726562LLU;

    t108 = ((x433&x434)&(x435&x436));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x438 = -1;
	int32_t x440 = INT32_MAX;
	int32_t t109 = -240;

    t109 = ((x437&x438)&(x439&x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x441 = INT32_MIN;
	uint16_t x442 = 0U;
	uint32_t x443 = 14641864U;
	static int64_t x444 = INT64_MIN;

    t110 = ((x441&x442)&(x443&x444));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x445 = INT16_MAX;
	uint16_t x446 = UINT16_MAX;
	int64_t x448 = INT64_MIN;
	volatile int64_t t111 = 11045427827LL;

    t111 = ((x445&x446)&(x447&x448));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x449 = 28U;
	static uint64_t x450 = 1450927138LLU;
	int8_t x451 = INT8_MIN;
	int64_t x452 = 0LL;

    t112 = ((x449&x450)&(x451&x452));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = 1;
	volatile int64_t x454 = INT64_MIN;
	volatile int32_t x455 = INT32_MAX;
	uint64_t x456 = UINT64_MAX;
	uint64_t t113 = 6251232LLU;

    t113 = ((x453&x454)&(x455&x456));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 2483386LLU;
	static int64_t x458 = INT64_MIN;
	int16_t x460 = -1;
	uint64_t t114 = 2057108160761LLU;

    t114 = ((x457&x458)&(x459&x460));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x461 = 86U;
	volatile int32_t x462 = 500372506;
	uint64_t x463 = 229001722421405LLU;
	int8_t x464 = -1;
	static uint64_t t115 = 786LLU;

    t115 = ((x461&x462)&(x463&x464));

    if (t115 != 16LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -1;
	volatile int64_t x467 = -1LL;
	volatile uint64_t t116 = 1652143LLU;

    t116 = ((x465&x466)&(x467&x468));

    if (t116 != 28075330LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 29365U;
	int32_t x470 = -1;
	int16_t x472 = -1;
	volatile uint32_t t117 = 13081199U;

    t117 = ((x469&x470)&(x471&x472));

    if (t117 != 25140U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = UINT64_MAX;
	static int16_t x474 = -1;
	volatile int8_t x475 = INT8_MAX;
	int32_t x476 = -1;
	volatile uint64_t t118 = 153721351048503LLU;

    t118 = ((x473&x474)&(x475&x476));

    if (t118 != 127LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x478 = 506489032374LL;
	volatile int8_t x479 = INT8_MIN;
	uint32_t x480 = 7393447U;
	int64_t t119 = 1283LL;

    t119 = ((x477&x478)&(x479&x480));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = INT16_MIN;
	static int32_t x482 = INT32_MIN;
	int32_t x483 = INT32_MIN;
	uint16_t x484 = UINT16_MAX;
	int32_t t120 = -1;

    t120 = ((x481&x482)&(x483&x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -167454905;
	volatile int64_t x486 = INT64_MAX;
	int8_t x487 = -1;
	static int64_t t121 = 5291575914850697LL;

    t121 = ((x485&x486)&(x487&x488));

    if (t121 != 9223372036687320903LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 3306U;
	int8_t x490 = -2;
	int16_t x491 = 0;
	int64_t t122 = 920LL;

    t122 = ((x489&x490)&(x491&x492));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x493 = -61667256;
	int8_t x496 = INT8_MIN;
	static volatile int64_t t123 = INT64_MIN;

    t123 = ((x493&x494)&(x495&x496));

    if (t123 != INT64_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x499 = UINT32_MAX;
	uint32_t t124 = 1074567U;

    t124 = ((x497&x498)&(x499&x500));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = -1;
	int16_t x503 = INT16_MIN;
	int32_t x504 = INT32_MAX;
	int32_t t125 = -238;

    t125 = ((x501&x502)&(x503&x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x506 = INT64_MIN;
	static int32_t x507 = INT32_MIN;
	volatile int8_t x508 = -1;
	volatile int64_t t126 = INT64_MIN;

    t126 = ((x505&x506)&(x507&x508));

    if (t126 != INT64_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MIN;
	int8_t x510 = 11;
	uint8_t x511 = 0U;
	int8_t x512 = 38;
	volatile int64_t t127 = -4493228731615762484LL;

    t127 = ((x509&x510)&(x511&x512));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = -246;
	int64_t x514 = INT64_MAX;
	static volatile uint64_t x516 = 133LLU;
	volatile uint64_t t128 = 20LLU;

    t128 = ((x513&x514)&(x515&x516));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = 0LLU;
	volatile int8_t x518 = INT8_MIN;
	int8_t x519 = INT8_MIN;
	volatile uint64_t t129 = 4411018544332LLU;

    t129 = ((x517&x518)&(x519&x520));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int32_t x521 = INT32_MAX;
	int8_t x522 = INT8_MIN;
	int32_t x523 = -1;
	static volatile uint16_t x524 = 2U;
	int32_t t130 = -2575153;

    t130 = ((x521&x522)&(x523&x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x525 = INT32_MIN;
	static int16_t x526 = 1;
	volatile int32_t x527 = INT32_MAX;
	volatile uint32_t x528 = 817U;

    t131 = ((x525&x526)&(x527&x528));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = UINT8_MAX;
	int8_t x530 = -1;
	uint16_t x532 = 1322U;
	static uint64_t t132 = 5LLU;

    t132 = ((x529&x530)&(x531&x532));

    if (t132 != 42LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x535 = 49;
	uint32_t t133 = 18U;

    t133 = ((x533&x534)&(x535&x536));

    if (t133 != 17U) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = -1;
	static int16_t x538 = INT16_MIN;
	static int16_t x540 = 1;
	static int32_t t134 = 401065;

    t134 = ((x537&x538)&(x539&x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x541 = 2023;
	uint8_t x542 = 43U;
	int16_t x543 = INT16_MIN;
	static int32_t x544 = INT32_MIN;
	volatile int32_t t135 = 46840;

    t135 = ((x541&x542)&(x543&x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MAX;
	static int32_t x546 = -1;
	int8_t x547 = INT8_MAX;
	int64_t x548 = -176678570844LL;
	static volatile int64_t t136 = 1440653762033LL;

    t136 = ((x545&x546)&(x547&x548));

    if (t136 != 36LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = 0;
	int64_t x551 = 11831304LL;
	uint64_t t137 = 19894493557LLU;

    t137 = ((x549&x550)&(x551&x552));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = 376;
	static uint8_t x554 = 0U;
	int64_t x555 = INT64_MIN;
	static volatile int64_t t138 = 10593421LL;

    t138 = ((x553&x554)&(x555&x556));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x558 = 14721542LLU;
	static uint16_t x559 = UINT16_MAX;

    t139 = ((x557&x558)&(x559&x560));

    if (t139 != 8710LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MAX;
	volatile int16_t x562 = -1;
	int16_t x563 = 3;
	int64_t x564 = -1LL;
	static int64_t t140 = 3012799LL;

    t140 = ((x561&x562)&(x563&x564));

    if (t140 != 3LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x565 = 479U;
	static volatile int64_t x566 = INT64_MIN;
	static uint64_t x567 = 3523250076LLU;
	int64_t x568 = -9316621LL;
	static uint64_t t141 = 62053059822847850LLU;

    t141 = ((x565&x566)&(x567&x568));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = UINT32_MAX;
	static uint16_t x571 = 500U;
	volatile int16_t x572 = 187;
	volatile uint32_t t142 = 93311U;

    t142 = ((x569&x570)&(x571&x572));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = -1558;
	int64_t x574 = 424136885693451LL;
	static uint8_t x575 = UINT8_MAX;
	volatile int64_t t143 = -16421660LL;

    t143 = ((x573&x574)&(x575&x576));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MIN;
	uint64_t x578 = 2343983262LLU;
	int32_t x579 = INT32_MIN;
	uint64_t x580 = 21011796761628LLU;
	static volatile uint64_t t144 = 59494825847243991LLU;

    t144 = ((x577&x578)&(x579&x580));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x581 = 1U;
	uint32_t x582 = 392788U;
	int8_t x583 = INT8_MAX;
	static uint16_t x584 = 13U;
	uint32_t t145 = 16734417U;

    t145 = ((x581&x582)&(x583&x584));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = UINT64_MAX;
	int64_t x586 = INT64_MAX;
	volatile uint16_t x587 = 2545U;
	static int32_t x588 = -1;
	volatile uint64_t t146 = 35236410759051118LLU;

    t146 = ((x585&x586)&(x587&x588));

    if (t146 != 2545LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x589 = 2133;
	uint8_t x592 = 1U;
	volatile uint32_t t147 = 3877U;

    t147 = ((x589&x590)&(x591&x592));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint32_t x593 = 79U;
	volatile int8_t x594 = -29;
	int8_t x595 = INT8_MIN;
	static uint8_t x596 = UINT8_MAX;
	static volatile uint32_t t148 = 13453U;

    t148 = ((x593&x594)&(x595&x596));

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x597 = 632436872024LLU;
	static int32_t x598 = -1;
	uint32_t x599 = 48U;
	int16_t x600 = INT16_MIN;
	uint64_t t149 = 0LLU;

    t149 = ((x597&x598)&(x599&x600));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MIN;
	uint64_t x602 = UINT64_MAX;
	uint8_t x604 = 6U;
	static volatile uint64_t t150 = 2103246536977LLU;

    t150 = ((x601&x602)&(x603&x604));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x606 = -1;
	uint64_t t151 = 294823157933946523LLU;

    t151 = ((x605&x606)&(x607&x608));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x610 = INT8_MIN;
	static uint16_t x611 = 1U;
	static volatile int32_t x612 = -1;
	volatile int64_t t152 = -1LL;

    t152 = ((x609&x610)&(x611&x612));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	int8_t x614 = -1;
	int8_t x615 = INT8_MIN;
	volatile int32_t x616 = -1;
	static int32_t t153 = 4;

    t153 = ((x613&x614)&(x615&x616));

    if (t153 != -128) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x617 = INT64_MIN;
	static int32_t x618 = INT32_MIN;
	uint32_t x620 = 95U;

    t154 = ((x617&x618)&(x619&x620));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x621 = 1U;
	volatile uint64_t x622 = 233LLU;
	static int64_t x623 = -6728371LL;
	uint64_t t155 = 41516733115LLU;

    t155 = ((x621&x622)&(x623&x624));

    if (t155 != 1LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x625 = UINT8_MAX;
	static int64_t x626 = 85331862120742729LL;
	int64_t x627 = -1LL;
	uint8_t x628 = 0U;
	int64_t t156 = 290499LL;

    t156 = ((x625&x626)&(x627&x628));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x631 = 1U;
	static int64_t x632 = INT64_MIN;
	volatile int64_t t157 = -1571LL;

    t157 = ((x629&x630)&(x631&x632));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	uint32_t x635 = 101790U;
	int32_t x636 = INT32_MIN;
	static uint32_t t158 = 15U;

    t158 = ((x633&x634)&(x635&x636));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = 1U;
	int64_t x640 = INT64_MIN;
	volatile int64_t t159 = 298561313LL;

    t159 = ((x637&x638)&(x639&x640));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = UINT64_MAX;
	uint64_t x642 = 33671254LLU;
	int64_t x643 = 6312LL;
	int64_t x644 = INT64_MAX;
	static volatile uint64_t t160 = 60062404LLU;

    t160 = ((x641&x642)&(x643&x644));

    if (t160 != 2048LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint8_t x645 = 24U;
	static uint32_t x646 = 255532532U;
	static uint8_t x647 = 6U;
	int64_t x648 = -1LL;
	int64_t t161 = 3LL;

    t161 = ((x645&x646)&(x647&x648));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int32_t x649 = INT32_MIN;
	int8_t x651 = INT8_MAX;
	volatile int32_t t162 = -14910;

    t162 = ((x649&x650)&(x651&x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x653 = INT64_MIN;
	uint16_t x654 = 1003U;
	int16_t x655 = -1;
	static volatile int64_t x656 = -1LL;

    t163 = ((x653&x654)&(x655&x656));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = 2358;
	static int8_t x658 = 0;
	uint32_t x659 = 15436423U;
	volatile int32_t x660 = INT32_MIN;
	volatile uint32_t t164 = 13272U;

    t164 = ((x657&x658)&(x659&x660));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = -1;
	static uint64_t x662 = 1957214202699074716LLU;
	uint16_t x663 = UINT16_MAX;
	int64_t x664 = 22548022892LL;
	static uint64_t t165 = 35342988LLU;

    t165 = ((x661&x662)&(x663&x664));

    if (t165 != 1036LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x665 = -1;
	int16_t x667 = -1;
	volatile uint64_t t166 = 1166781330LLU;

    t166 = ((x665&x666)&(x667&x668));

    if (t166 != 568455582LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -1;
	static uint8_t x670 = 119U;
	int16_t x671 = 14;
	uint16_t x672 = 27U;
	int32_t t167 = -81242713;

    t167 = ((x669&x670)&(x671&x672));

    if (t167 != 2) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x673 = 1098U;
	int64_t x674 = 13551LL;
	int8_t x675 = 1;
	int8_t x676 = -1;
	volatile int64_t t168 = -8916355033020944LL;

    t168 = ((x673&x674)&(x675&x676));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x678 = UINT8_MAX;
	volatile int8_t x679 = 16;
	uint64_t x680 = 209517LLU;
	uint64_t t169 = 723840401895604LLU;

    t169 = ((x677&x678)&(x679&x680));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x681 = INT64_MIN;
	int32_t x682 = 2760;
	int64_t x684 = INT64_MAX;
	volatile uint64_t t170 = 43746203LLU;

    t170 = ((x681&x682)&(x683&x684));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MIN;
	int16_t x686 = INT16_MAX;
	int64_t x688 = INT64_MAX;
	volatile int64_t t171 = 149890111778146709LL;

    t171 = ((x685&x686)&(x687&x688));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x689 = -1;
	uint16_t x690 = 1U;
	volatile int64_t x691 = INT64_MAX;
	int16_t x692 = -1;

    t172 = ((x689&x690)&(x691&x692));

    if (t172 != 1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = 1U;
	volatile uint8_t x694 = 1U;
	volatile uint16_t x695 = 5467U;
	int32_t t173 = 656629272;

    t173 = ((x693&x694)&(x695&x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	int8_t x698 = -1;
	int32_t x699 = INT32_MIN;
	uint64_t x700 = UINT64_MAX;
	static volatile uint64_t t174 = 0LLU;

    t174 = ((x697&x698)&(x699&x700));

    if (t174 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x702 = 57681588LLU;
	volatile uint32_t x703 = 22U;
	uint64_t t175 = 5061155274175355264LLU;

    t175 = ((x701&x702)&(x703&x704));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = -1LL;
	static uint32_t x706 = UINT32_MAX;
	volatile int64_t t176 = 933875160745023LL;

    t176 = ((x705&x706)&(x707&x708));

    if (t176 != 65535LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MIN;
	uint16_t x710 = 3U;
	static volatile int16_t x711 = 227;
	int16_t x712 = 1647;
	volatile int64_t t177 = -157321828LL;

    t177 = ((x709&x710)&(x711&x712));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MIN;
	int8_t x714 = -26;
	static int64_t x715 = -6839264LL;
	int64_t t178 = -1244314LL;

    t178 = ((x713&x714)&(x715&x716));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x717 = INT64_MIN;
	volatile uint64_t t179 = 5LLU;

    t179 = ((x717&x718)&(x719&x720));

    if (t179 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x721 = 5U;
	int8_t x722 = INT8_MIN;
	uint64_t x723 = 1LLU;
	volatile int64_t x724 = 136271847648LL;
	volatile uint64_t t180 = 1021313976600929797LLU;

    t180 = ((x721&x722)&(x723&x724));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	static volatile int16_t x727 = -1;
	int16_t x728 = INT16_MIN;
	volatile int32_t t181 = -10050;

    t181 = ((x725&x726)&(x727&x728));

    if (t181 != -32768) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = INT16_MIN;
	int16_t x730 = INT16_MIN;
	int8_t x731 = -1;
	volatile int32_t x732 = -4156;
	static volatile int32_t t182 = -30340025;

    t182 = ((x729&x730)&(x731&x732));

    if (t182 != -32768) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int32_t x733 = INT32_MIN;
	uint64_t x735 = UINT64_MAX;
	static int8_t x736 = -1;
	uint64_t t183 = 29984378812LLU;

    t183 = ((x733&x734)&(x735&x736));

    if (t183 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = -1;
	int64_t x739 = 6139059LL;
	int64_t t184 = -11731030691786LL;

    t184 = ((x737&x738)&(x739&x740));

    if (t184 != 6138883LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MIN;
	volatile int32_t x742 = INT32_MIN;
	uint8_t x743 = UINT8_MAX;
	static volatile uint64_t t185 = 10874898302059LLU;

    t185 = ((x741&x742)&(x743&x744));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 270477287396711LLU;
	int32_t x746 = INT32_MIN;
	volatile uint32_t x747 = 1U;
	static int32_t x748 = INT32_MAX;

    t186 = ((x745&x746)&(x747&x748));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x749 = -228769;
	static uint32_t x750 = 24652944U;
	static int16_t x751 = INT16_MAX;
	int32_t x752 = -1;
	uint32_t t187 = 420690U;

    t187 = ((x749&x750)&(x751&x752));

    if (t187 != 16U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x753 = 74682560169548LL;
	int8_t x756 = INT8_MIN;
	int64_t t188 = -1534LL;

    t188 = ((x753&x754)&(x755&x756));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = 56U;
	int64_t x758 = INT64_MAX;
	int16_t x759 = -1;
	int64_t x760 = 519842LL;
	int64_t t189 = -1LL;

    t189 = ((x757&x758)&(x759&x760));

    if (t189 != 32LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x762 = -3412;
	volatile uint64_t t190 = 1489336426694760308LLU;

    t190 = ((x761&x762)&(x763&x764));

    if (t190 != 74240LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MIN;
	int64_t x767 = INT64_MAX;
	uint16_t x768 = 7U;
	int64_t t191 = 1LL;

    t191 = ((x765&x766)&(x767&x768));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = 2120U;
	int8_t x770 = INT8_MIN;
	int64_t x771 = INT64_MIN;
	uint64_t x772 = 225944299597017377LLU;
	static volatile uint64_t t192 = 1791767916223683LLU;

    t192 = ((x769&x770)&(x771&x772));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = -2509122663LL;
	int64_t x774 = INT64_MIN;
	int8_t x776 = INT8_MIN;
	int64_t t193 = INT64_MIN;

    t193 = ((x773&x774)&(x775&x776));

    if (t193 != INT64_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = INT16_MAX;
	volatile int32_t x778 = INT32_MAX;

    t194 = ((x777&x778)&(x779&x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x781 = 1703387585258783715LLU;
	uint32_t x783 = 9344553U;
	int64_t x784 = INT64_MAX;
	static volatile uint64_t t195 = 136392394663LLU;

    t195 = ((x781&x782)&(x783&x784));

    if (t195 != 524288LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = 3U;
	static uint32_t x786 = 0U;
	uint8_t x787 = 2U;
	volatile int64_t x788 = -26858761107067LL;
	int64_t t196 = 0LL;

    t196 = ((x785&x786)&(x787&x788));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = -237511;
	uint32_t x791 = 3519U;
	uint32_t t197 = 14U;

    t197 = ((x789&x790)&(x791&x792));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = 760308LL;
	int32_t x794 = -1;
	int16_t x795 = -1;
	int64_t x796 = 65852LL;
	int64_t t198 = 14758LL;

    t198 = ((x793&x794)&(x795&x796));

    if (t198 != 65844LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x797 = INT16_MIN;
	uint8_t x798 = 1U;
	int16_t x799 = INT16_MIN;
	volatile uint16_t x800 = 2U;
	int32_t t199 = -5104;

    t199 = ((x797&x798)&(x799&x800));

    if (t199 != 0) { NG(); } else { ; }
	
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


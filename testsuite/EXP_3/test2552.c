
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

int8_t x2 = -1;
uint8_t x11 = 1U;
int16_t x12 = INT16_MIN;
uint32_t x14 = 1161409U;
static int8_t x22 = -19;
int64_t x24 = -1LL;
int64_t t3 = -16443749LL;
int64_t x28 = INT64_MAX;
static volatile uint64_t x34 = 21LLU;
int32_t x36 = -1;
int64_t x40 = 3LL;
uint16_t x42 = 1087U;
uint8_t x46 = 15U;
volatile int64_t x47 = 22LL;
volatile uint64_t t8 = 506LLU;
int64_t x49 = INT64_MIN;
uint32_t x50 = 8418505U;
int64_t x52 = 512767805139LL;
uint32_t x58 = UINT32_MAX;
volatile uint32_t t11 = 134782U;
int8_t x63 = -1;
int64_t x64 = 12413098023381LL;
volatile int64_t t12 = 145277LL;
static int32_t x70 = INT32_MIN;
uint16_t x79 = 34U;
int64_t t16 = 4051297021874910467LL;
static int8_t x90 = 1;
int8_t x91 = INT8_MAX;
static volatile uint64_t x92 = UINT64_MAX;
int64_t x103 = INT64_MIN;
uint64_t t25 = 1791LLU;
int8_t x132 = INT8_MAX;
volatile int32_t x136 = INT32_MIN;
static int16_t x140 = INT16_MIN;
uint16_t x146 = 414U;
uint8_t x153 = UINT8_MAX;
int16_t x155 = INT16_MAX;
static volatile uint8_t x156 = UINT8_MAX;
volatile uint16_t x158 = 81U;
int32_t x163 = INT32_MIN;
int16_t x177 = -1;
uint32_t x180 = UINT32_MAX;
int32_t x181 = INT32_MIN;
uint8_t x189 = 13U;
int8_t x196 = INT8_MIN;
static int32_t x200 = INT32_MAX;
int64_t x201 = -1LL;
uint64_t x224 = UINT64_MAX;
int16_t x225 = -2;
int16_t x228 = INT16_MIN;
int64_t x230 = 71910554768339LL;
volatile int64_t t47 = 14163866859577LL;
volatile uint32_t x242 = 1733955442U;
uint16_t x250 = UINT16_MAX;
int32_t x256 = INT32_MAX;
int8_t x257 = INT8_MAX;
static int8_t x259 = -2;
uint32_t t54 = 1972826059U;
int8_t x265 = -1;
int16_t x266 = INT16_MAX;
static uint32_t x267 = 20258547U;
int64_t x270 = INT64_MAX;
static int64_t x273 = -1LL;
int64_t x283 = INT64_MIN;
int32_t x284 = INT32_MIN;
volatile uint64_t x290 = UINT64_MAX;
int8_t x296 = 24;
int32_t t61 = -14325;
uint32_t t63 = 1866U;
int16_t x307 = INT16_MIN;
static int32_t x312 = -1;
static uint16_t x315 = 212U;
int16_t x327 = 3;
static uint32_t x328 = 2713144U;
volatile int64_t t68 = 15933015882LL;
static volatile int32_t t69 = 12627;
int16_t x337 = INT16_MIN;
int16_t x340 = -1;
uint64_t t71 = 16082431739838160LLU;
uint8_t x347 = 20U;
volatile uint16_t x349 = UINT16_MAX;
int64_t x350 = -1257183962112140LL;
int32_t x362 = INT32_MAX;
int64_t x367 = INT64_MIN;
volatile uint64_t t77 = 35275081198LLU;
static volatile uint64_t x380 = 34392104963089922LLU;
volatile int16_t x382 = INT16_MAX;
uint32_t t81 = 377529U;
int16_t x387 = -1;
static volatile uint32_t x389 = 625659U;
uint32_t x398 = 0U;
static uint64_t x402 = 839LLU;
static volatile uint32_t x403 = 0U;
uint64_t x434 = 9700481LLU;
static int64_t x441 = -1LL;
int8_t x446 = INT8_MIN;
volatile int8_t x449 = INT8_MIN;
static int64_t x450 = INT64_MAX;
uint32_t x454 = 653194453U;
volatile int8_t x456 = INT8_MAX;
int32_t x463 = -5;
static uint64_t x465 = 40LLU;
static uint64_t t100 = 432LLU;
uint8_t x478 = 103U;
int32_t x481 = 42382;
volatile uint16_t x486 = 453U;
int16_t x491 = 5761;
int32_t x493 = -1;
uint32_t x498 = 2861U;
static volatile uint32_t t108 = 238U;
int8_t x504 = INT8_MAX;
uint64_t x505 = 15015LLU;
volatile int64_t t112 = 671218922LL;
volatile int16_t x533 = INT16_MAX;
int8_t x535 = -11;
volatile int32_t t114 = -504372;
static volatile int64_t t115 = -7491514LL;
static uint16_t x544 = UINT16_MAX;
int64_t t116 = 64310255023LL;
int16_t x550 = INT16_MAX;
int32_t x552 = -214620493;
static int64_t t117 = 37469195105773LL;
int32_t x555 = -2211;
uint16_t x559 = 2862U;
uint32_t x561 = UINT32_MAX;
int32_t x562 = -886996337;
int8_t x564 = INT8_MIN;
static uint64_t t122 = 26317566596910181LLU;
int16_t x573 = INT16_MIN;
uint16_t x580 = 8U;
static int8_t x581 = INT8_MAX;
int8_t x582 = INT8_MIN;
volatile uint32_t t125 = 142U;
int32_t x588 = INT32_MIN;
volatile int64_t x592 = INT64_MAX;
static int64_t x603 = INT64_MAX;
volatile int32_t x604 = -246;
uint32_t x608 = 2U;
volatile uint32_t t131 = 1220736088U;
uint32_t x610 = UINT32_MAX;
static uint32_t x616 = 1U;
int32_t x626 = INT32_MAX;
static uint16_t x628 = UINT16_MAX;
static uint8_t x633 = 26U;
volatile int32_t x635 = INT32_MAX;
uint32_t x636 = UINT32_MAX;
volatile uint32_t t136 = 395U;
volatile uint8_t x640 = 73U;
static uint64_t x642 = UINT64_MAX;
uint64_t x643 = 1481LLU;
uint64_t x647 = 28304553286LLU;
int8_t x650 = INT8_MIN;
static int8_t x654 = -2;
volatile uint64_t t141 = 1749847797048080658LLU;
volatile uint32_t x657 = 1743U;
volatile uint64_t t142 = 156919036906529680LLU;
int16_t x661 = 2236;
static volatile int8_t x663 = INT8_MAX;
static int32_t t143 = -397795934;
int64_t x668 = INT64_MIN;
int16_t x670 = INT16_MIN;
static int32_t x677 = INT32_MIN;
static volatile uint64_t t146 = 834305LLU;
static int32_t x687 = -1;
int8_t x690 = 12;
static int32_t x691 = INT32_MAX;
int64_t x692 = -1LL;
uint64_t x697 = UINT64_MAX;
int64_t x700 = -262658199992LL;
int64_t x712 = INT64_MAX;
static volatile uint64_t t155 = 213004LLU;
static int8_t x726 = -7;
static int32_t x727 = -1;
static int32_t t157 = 19386244;
uint64_t x729 = 46420526708220LLU;
static volatile uint64_t t158 = 38019644045LLU;
int64_t x738 = -2726LL;
uint8_t x739 = 39U;
static uint32_t x748 = 14923756U;
int8_t x754 = INT8_MIN;
int32_t x755 = INT32_MIN;
uint16_t x761 = 6U;
static uint16_t x764 = 2U;
volatile uint64_t t163 = 12LLU;
uint32_t t164 = 522919965U;
int32_t x775 = INT32_MIN;
uint8_t x776 = 0U;
volatile int32_t t166 = -3;
int64_t x781 = INT64_MIN;
int16_t x788 = INT16_MAX;
uint32_t x801 = 3U;
int64_t x804 = 1917LL;
int64_t t172 = 29244730429LL;
int64_t x818 = -541171335LL;
int8_t x831 = INT8_MIN;
uint32_t x861 = 1733621497U;
int8_t x862 = 3;
static uint16_t x865 = UINT16_MAX;
int16_t x871 = -1;
uint32_t t182 = 1628640688U;
int32_t x877 = -619627;
static int64_t x878 = INT64_MAX;
static uint8_t x881 = UINT8_MAX;
uint64_t x884 = 33672572154284471LLU;
uint64_t t185 = 5403LLU;
static int8_t x885 = 1;
int8_t x890 = -1;
int8_t x901 = -1;
int32_t x907 = INT32_MAX;
volatile int64_t x915 = -1LL;
int64_t x918 = -1LL;
volatile uint64_t x919 = 204009644983817LLU;
static int8_t x922 = 4;
uint8_t x924 = 57U;
static int8_t x929 = -12;
int16_t x931 = INT16_MAX;
uint8_t x932 = UINT8_MAX;
int32_t x939 = INT32_MIN;
volatile int64_t t198 = 31698554859471594LL;
volatile int64_t t199 = -64466655LL;


void f0(void) {
    	int32_t x1 = 595;
	static uint64_t x3 = 194945691188847098LLU;
	int16_t x4 = INT16_MIN;
	static uint64_t t0 = 190322077717LLU;

    t0 = ((x1+x2)/(x3^x4));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x9 = 1LLU;
	static volatile uint64_t x10 = 3883987019LLU;
	volatile uint64_t t1 = 1812183LLU;

    t1 = ((x9+x10)/(x11^x12));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -5449;
	int64_t x15 = -3089264532229710650LL;
	static uint32_t x16 = 53922U;
	volatile int64_t t2 = -2920LL;

    t2 = ((x13+x14)/(x15^x16));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x21 = INT16_MIN;
	uint8_t x23 = 1U;

    t3 = ((x21+x22)/(x23^x24));

    if (t3 != 16393LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x25 = INT8_MAX;
	static volatile int8_t x26 = 6;
	int8_t x27 = 1;
	int64_t t4 = -10896740LL;

    t4 = ((x25+x26)/(x27^x28));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x33 = 1532161865899LLU;
	int16_t x35 = 1983;
	volatile uint64_t t5 = 784593443LLU;

    t5 = ((x33+x34)/(x35^x36));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x37 = 51U;
	static volatile int32_t x38 = -13;
	uint64_t x39 = UINT64_MAX;
	volatile uint64_t t6 = 105737771079588525LLU;

    t6 = ((x37+x38)/(x39^x40));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x41 = INT8_MIN;
	uint32_t x43 = 14U;
	volatile int8_t x44 = -1;
	volatile uint32_t t7 = 13349184U;

    t7 = ((x41+x42)/(x43^x44));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x45 = 3LLU;
	int8_t x48 = INT8_MAX;

    t8 = ((x45+x46)/(x47^x48));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x51 = 32LLU;
	volatile uint64_t t9 = 104401503103655480LLU;

    t9 = ((x49+x50)/(x51^x52));

    if (t9 != 17987424LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x53 = INT8_MAX;
	int32_t x54 = -910711;
	uint64_t x55 = 2711LLU;
	static int32_t x56 = INT32_MIN;
	uint64_t t10 = 5169855476957248819LLU;

    t10 = ((x53+x54)/(x55^x56));

    if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x57 = INT16_MIN;
	static int16_t x59 = INT16_MIN;
	uint32_t x60 = 603U;

    t11 = ((x57+x58)/(x59^x60));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x61 = -1;
	int32_t x62 = 128892076;

    t12 = ((x61+x62)/(x63^x64));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x65 = -52;
	static int8_t x66 = -7;
	int64_t x67 = 20685486810330LL;
	volatile uint64_t x68 = UINT64_MAX;
	uint64_t t13 = 368285360951LLU;

    t13 = ((x65+x66)/(x67^x68));

    if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x69 = 1;
	static volatile uint32_t x71 = 3642U;
	static volatile int8_t x72 = -29;
	volatile uint32_t t14 = 5990U;

    t14 = ((x69+x70)/(x71^x72));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x73 = INT8_MIN;
	static uint8_t x74 = 0U;
	int64_t x75 = -1LL;
	int64_t x76 = INT64_MAX;
	static volatile int64_t t15 = -60LL;

    t15 = ((x73+x74)/(x75^x76));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x77 = INT64_MIN;
	volatile int8_t x78 = INT8_MAX;
	int64_t x80 = -457717967471243926LL;

    t16 = ((x77+x78)/(x79^x80));

    if (t16 != 20LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x81 = -108;
	volatile uint16_t x82 = 1727U;
	int32_t x83 = INT32_MIN;
	volatile int64_t x84 = INT64_MIN;
	volatile int64_t t17 = 3188272342507LL;

    t17 = ((x81+x82)/(x83^x84));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x85 = -1;
	uint32_t x86 = UINT32_MAX;
	int32_t x87 = INT32_MIN;
	volatile int32_t x88 = INT32_MAX;
	uint32_t t18 = 1195319U;

    t18 = ((x85+x86)/(x87^x88));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x89 = INT16_MIN;
	uint64_t t19 = 751573112264LLU;

    t19 = ((x89+x90)/(x91^x92));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x93 = 15U;
	int8_t x94 = INT8_MIN;
	int64_t x95 = 3084297466LL;
	static volatile int64_t x96 = -1002492098386LL;
	static int64_t t20 = 1LL;

    t20 = ((x93+x94)/(x95^x96));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x101 = INT64_MIN;
	int8_t x102 = 23;
	static uint64_t x104 = 500211LLU;
	volatile uint64_t t21 = 229372977162243LLU;

    t21 = ((x101+x102)/(x103^x104));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x105 = INT16_MAX;
	static int16_t x106 = INT16_MIN;
	uint32_t x107 = UINT32_MAX;
	volatile uint64_t x108 = UINT64_MAX;
	static volatile uint64_t t22 = 577218858225LLU;

    t22 = ((x105+x106)/(x107^x108));

    if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x117 = -1;
	int16_t x118 = -1;
	volatile uint64_t x119 = UINT64_MAX;
	static int16_t x120 = INT16_MAX;
	uint64_t t23 = 11169LLU;

    t23 = ((x117+x118)/(x119^x120));

    if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x121 = INT32_MIN;
	int32_t x122 = INT32_MAX;
	int32_t x123 = INT32_MAX;
	uint64_t x124 = 33176279628694563LLU;
	uint64_t t24 = 6824059653150773LLU;

    t24 = ((x121+x122)/(x123^x124));

    if (t24 != 556LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint64_t x125 = 1599461LLU;
	static uint16_t x126 = 7984U;
	int8_t x127 = -8;
	static int16_t x128 = -225;

    t25 = ((x125+x126)/(x127^x128));

    if (t25 != 6958LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x129 = -223;
	int16_t x130 = INT16_MIN;
	uint16_t x131 = UINT16_MAX;
	int32_t t26 = 147;

    t26 = ((x129+x130)/(x131^x132));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x133 = 1608;
	uint64_t x134 = 3803242264759LLU;
	int16_t x135 = -1;
	static volatile uint64_t t27 = 70607988958472231LLU;

    t27 = ((x133+x134)/(x135^x136));

    if (t27 != 1771LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x137 = -29;
	volatile int32_t x138 = 5885;
	uint32_t x139 = 9981084U;
	static uint32_t t28 = 369208571U;

    t28 = ((x137+x138)/(x139^x140));

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x141 = 12U;
	volatile uint8_t x142 = 2U;
	int8_t x143 = -1;
	static int64_t x144 = INT64_MIN;
	int64_t t29 = 22LL;

    t29 = ((x141+x142)/(x143^x144));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x145 = 19;
	int16_t x147 = -1;
	static int16_t x148 = INT16_MAX;
	int32_t t30 = -23597;

    t30 = ((x145+x146)/(x147^x148));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x149 = 104524005599LLU;
	int64_t x150 = INT64_MIN;
	int32_t x151 = INT32_MIN;
	int8_t x152 = -37;
	uint64_t t31 = 27LLU;

    t31 = ((x149+x150)/(x151^x152));

    if (t31 != 4294967418LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x154 = INT8_MAX;
	volatile int32_t t32 = -334506781;

    t32 = ((x153+x154)/(x155^x156));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x157 = 15580U;
	uint32_t x159 = 21696U;
	int32_t x160 = -7990673;
	uint32_t t33 = 17U;

    t33 = ((x157+x158)/(x159^x160));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x161 = INT8_MAX;
	static int8_t x162 = -1;
	int8_t x164 = INT8_MIN;
	volatile int32_t t34 = -1;

    t34 = ((x161+x162)/(x163^x164));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x169 = INT8_MIN;
	int16_t x170 = INT16_MIN;
	uint64_t x171 = 6LLU;
	int64_t x172 = INT64_MIN;
	volatile uint64_t t35 = 5383924695200912LLU;

    t35 = ((x169+x170)/(x171^x172));

    if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x178 = INT16_MAX;
	int32_t x179 = INT32_MAX;
	uint32_t t36 = 4561105U;

    t36 = ((x177+x178)/(x179^x180));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x182 = UINT8_MAX;
	int8_t x183 = INT8_MIN;
	int16_t x184 = INT16_MIN;
	static volatile int32_t t37 = -34;

    t37 = ((x181+x182)/(x183^x184));

    if (t37 != -65792) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x185 = 2863926835LLU;
	volatile uint32_t x186 = 1176684993U;
	volatile uint32_t x187 = 621U;
	uint8_t x188 = UINT8_MAX;
	volatile uint64_t t38 = 10876LLU;

    t38 = ((x185+x186)/(x187^x188));

    if (t38 != 6140747LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x190 = 1853689572U;
	int16_t x191 = 0;
	uint16_t x192 = UINT16_MAX;
	static volatile uint32_t t39 = 116U;

    t39 = ((x189+x190)/(x191^x192));

    if (t39 != 28285U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x193 = 7U;
	static int32_t x194 = 31468;
	volatile uint64_t x195 = 5122LLU;
	volatile uint64_t t40 = 2436164869797761LLU;

    t40 = ((x193+x194)/(x195^x196));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int8_t x197 = -1;
	int64_t x198 = INT64_MAX;
	volatile int8_t x199 = -38;
	int64_t t41 = 14788LL;

    t41 = ((x197+x198)/(x199^x200));

    if (t41 != -4294967370LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int8_t x202 = INT8_MIN;
	uint16_t x203 = 480U;
	int16_t x204 = 0;
	volatile int64_t t42 = -12461968911LL;

    t42 = ((x201+x202)/(x203^x204));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x205 = INT16_MIN;
	uint32_t x206 = 7U;
	static int32_t x207 = INT32_MAX;
	static volatile int8_t x208 = INT8_MAX;
	static volatile uint32_t t43 = 65U;

    t43 = ((x205+x206)/(x207^x208));

    if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x213 = INT8_MIN;
	int32_t x214 = 456212707;
	int32_t x215 = -1;
	volatile int64_t x216 = INT64_MIN;
	volatile int64_t t44 = 278362896828696LL;

    t44 = ((x213+x214)/(x215^x216));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x221 = INT8_MAX;
	uint16_t x222 = 34U;
	static int16_t x223 = INT16_MIN;
	volatile uint64_t t45 = 9327923LLU;

    t45 = ((x221+x222)/(x223^x224));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x226 = -1LL;
	uint32_t x227 = 6883U;
	int64_t t46 = 2LL;

    t46 = ((x225+x226)/(x227^x228));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x229 = INT8_MAX;
	uint16_t x231 = UINT16_MAX;
	volatile int16_t x232 = INT16_MIN;

    t47 = ((x229+x230)/(x231^x232));

    if (t47 != -2194469003LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x233 = INT64_MAX;
	volatile int8_t x234 = 0;
	volatile uint8_t x235 = 3U;
	int16_t x236 = 124;
	static int64_t t48 = -29LL;

    t48 = ((x233+x234)/(x235^x236));

    if (t48 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x237 = 3;
	int16_t x238 = INT16_MIN;
	int32_t x239 = INT32_MIN;
	static uint64_t x240 = 1LLU;
	uint64_t t49 = 1970431516419516649LLU;

    t49 = ((x237+x238)/(x239^x240));

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x241 = 14U;
	static volatile uint8_t x243 = 0U;
	static int8_t x244 = -1;
	static volatile uint32_t t50 = 3U;

    t50 = ((x241+x242)/(x243^x244));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x245 = -1;
	int64_t x246 = -1LL;
	int32_t x247 = -6;
	uint32_t x248 = UINT32_MAX;
	static volatile int64_t t51 = -63323LL;

    t51 = ((x245+x246)/(x247^x248));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x249 = UINT32_MAX;
	int64_t x251 = INT64_MIN;
	int16_t x252 = INT16_MAX;
	volatile int64_t t52 = 4475831727835LL;

    t52 = ((x249+x250)/(x251^x252));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x253 = 6909U;
	volatile int8_t x254 = INT8_MIN;
	uint64_t x255 = 1147LLU;
	uint64_t t53 = 6192793213LLU;

    t53 = ((x253+x254)/(x255^x256));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x258 = UINT32_MAX;
	volatile int16_t x260 = 1;

    t54 = ((x257+x258)/(x259^x260));

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x268 = INT32_MIN;
	volatile uint32_t t55 = 256689U;

    t55 = ((x265+x266)/(x267^x268));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x269 = -5;
	uint32_t x271 = 238U;
	volatile uint8_t x272 = 2U;
	static volatile int64_t t56 = 230180199101457828LL;

    t56 = ((x269+x270)/(x271^x272));

    if (t56 != 39082084901927016LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x274 = -1;
	int16_t x275 = -1;
	volatile int32_t x276 = INT32_MIN;
	int64_t t57 = -46878778956534165LL;

    t57 = ((x273+x274)/(x275^x276));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x281 = 197176186945LL;
	static int8_t x282 = INT8_MIN;
	static int64_t t58 = -260866439LL;

    t58 = ((x281+x282)/(x283^x284));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x285 = INT8_MIN;
	volatile int8_t x286 = -1;
	uint64_t x287 = UINT64_MAX;
	volatile uint32_t x288 = 1038U;
	static uint64_t t59 = 218351544324300361LLU;

    t59 = ((x285+x286)/(x287^x288));

    if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x289 = INT32_MAX;
	int8_t x291 = INT8_MIN;
	int64_t x292 = INT64_MAX;
	uint64_t t60 = 803042271317227894LLU;

    t60 = ((x289+x290)/(x291^x292));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x293 = 1;
	int16_t x294 = 0;
	int32_t x295 = INT32_MAX;

    t61 = ((x293+x294)/(x295^x296));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x297 = 1126851338258878179LLU;
	volatile uint32_t x298 = 87924U;
	volatile int32_t x299 = -1;
	int16_t x300 = INT16_MAX;
	uint64_t t62 = 1135797393154LLU;

    t62 = ((x297+x298)/(x299^x300));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x301 = 3210766U;
	int8_t x302 = 0;
	uint32_t x303 = 0U;
	static volatile int16_t x304 = INT16_MIN;

    t63 = ((x301+x302)/(x303^x304));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x305 = 23854U;
	int8_t x306 = INT8_MAX;
	int16_t x308 = -50;
	int32_t t64 = -208;

    t64 = ((x305+x306)/(x307^x308));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x309 = INT32_MAX;
	uint64_t x310 = 29570320235689563LLU;
	uint8_t x311 = UINT8_MAX;
	uint64_t t65 = 47143029303626814LLU;

    t65 = ((x309+x310)/(x311^x312));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int16_t x313 = -1;
	int32_t x314 = 1554373;
	volatile uint16_t x316 = 1605U;
	volatile int32_t t66 = 76;

    t66 = ((x313+x314)/(x315^x316));

    if (t66 != 924) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x317 = INT32_MIN;
	static volatile uint64_t x318 = 95992690LLU;
	volatile int64_t x319 = -1LL;
	int32_t x320 = INT32_MIN;
	volatile uint64_t t67 = 279LLU;

    t67 = ((x317+x318)/(x319^x320));

    if (t67 != 8589934595LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x325 = UINT16_MAX;
	static int64_t x326 = -399561273653336783LL;

    t68 = ((x325+x326)/(x327^x328));

    if (t68 != -147268568069LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x329 = 0U;
	int32_t x330 = INT32_MAX;
	int16_t x331 = 1144;
	int8_t x332 = INT8_MIN;

    t69 = ((x329+x330)/(x331^x332));

    if (t69 != -2080895) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x333 = -1;
	volatile uint64_t x334 = 14742167859279066LLU;
	volatile int64_t x335 = -1LL;
	uint64_t x336 = 735LLU;
	uint64_t t70 = 30829586LLU;

    t70 = ((x333+x334)/(x335^x336));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x338 = UINT8_MAX;
	static uint64_t x339 = 2LLU;

    t71 = ((x337+x338)/(x339^x340));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x345 = 290059097518447121LLU;
	int8_t x346 = 4;
	int16_t x348 = INT16_MIN;
	volatile uint64_t t72 = 303802861497LLU;

    t72 = ((x345+x346)/(x347^x348));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x351 = INT16_MAX;
	static int16_t x352 = -5606;
	int64_t t73 = 119711327958LL;

    t73 = ((x349+x350)/(x351^x352));

    if (t73 != 46282957038LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x353 = -1;
	static volatile int64_t x354 = 7661514836LL;
	static int8_t x355 = 0;
	int32_t x356 = -59547362;
	int64_t t74 = -310008470454216688LL;

    t74 = ((x353+x354)/(x355^x356));

    if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int32_t x357 = -300358890;
	volatile uint16_t x358 = 0U;
	int8_t x359 = INT8_MAX;
	static int64_t x360 = INT64_MIN;
	volatile int64_t t75 = 205224188625028LL;

    t75 = ((x357+x358)/(x359^x360));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x361 = 0;
	uint16_t x363 = UINT16_MAX;
	volatile uint8_t x364 = 5U;
	int32_t t76 = -1618220;

    t76 = ((x361+x362)/(x363^x364));

    if (t76 != 32771) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x365 = UINT64_MAX;
	int32_t x366 = INT32_MIN;
	int16_t x368 = INT16_MIN;

    t77 = ((x365+x366)/(x367^x368));

    if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x369 = UINT8_MAX;
	int16_t x370 = INT16_MAX;
	uint16_t x371 = 6U;
	int16_t x372 = -1;
	volatile int32_t t78 = 1842270;

    t78 = ((x369+x370)/(x371^x372));

    if (t78 != -4717) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x373 = 728U;
	int32_t x374 = 8759126;
	volatile uint8_t x375 = 1U;
	int32_t x376 = 16223455;
	int32_t t79 = -381548499;

    t79 = ((x373+x374)/(x375^x376));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int8_t x377 = -9;
	static volatile int64_t x378 = -257944127278547LL;
	static int8_t x379 = INT8_MIN;
	static uint64_t t80 = 126099025635LLU;

    t80 = ((x377+x378)/(x379^x380));

    if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x381 = INT32_MIN;
	uint32_t x383 = 673933U;
	volatile int32_t x384 = 8373981;

    t81 = ((x381+x382)/(x383^x384));

    if (t81 != 278U) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x385 = 3;
	volatile int16_t x386 = INT16_MIN;
	volatile uint8_t x388 = 2U;
	int32_t t82 = 976;

    t82 = ((x385+x386)/(x387^x388));

    if (t82 != 10921) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x390 = UINT64_MAX;
	uint16_t x391 = 26U;
	volatile uint32_t x392 = 23413019U;
	static uint64_t t83 = 28437172999125LLU;

    t83 = ((x389+x390)/(x391^x392));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x393 = 10605244U;
	int16_t x394 = -3;
	int8_t x395 = 7;
	int16_t x396 = -1;
	volatile uint32_t t84 = 41384U;

    t84 = ((x393+x394)/(x395^x396));

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x397 = UINT32_MAX;
	int8_t x399 = INT8_MIN;
	static int64_t x400 = -1LL;
	static volatile int64_t t85 = 110117285353931487LL;

    t85 = ((x397+x398)/(x399^x400));

    if (t85 != 33818640LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x401 = 1;
	int16_t x404 = INT16_MIN;
	volatile uint64_t t86 = 8353006LLU;

    t86 = ((x401+x402)/(x403^x404));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x409 = -1;
	int64_t x410 = 1143862042634931164LL;
	int32_t x411 = -2783770;
	uint32_t x412 = 786228U;
	int64_t t87 = 12599672895LL;

    t87 = ((x409+x410)/(x411^x412));

    if (t87 != 266462425LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x413 = INT16_MIN;
	volatile int8_t x414 = -1;
	uint16_t x415 = UINT16_MAX;
	volatile int16_t x416 = INT16_MAX;
	static volatile int32_t t88 = 140;

    t88 = ((x413+x414)/(x415^x416));

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x417 = INT32_MIN;
	int32_t x418 = INT32_MAX;
	int64_t x419 = -64833647821189LL;
	int64_t x420 = -1LL;
	volatile int64_t t89 = -1477775470954054060LL;

    t89 = ((x417+x418)/(x419^x420));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x421 = -1;
	uint64_t x422 = UINT64_MAX;
	uint8_t x423 = 0U;
	uint8_t x424 = 1U;
	static uint64_t t90 = 1061820687821LLU;

    t90 = ((x421+x422)/(x423^x424));

    if (t90 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x429 = INT32_MAX;
	uint32_t x430 = 473675U;
	static volatile int64_t x431 = -1LL;
	int32_t x432 = -507;
	volatile int64_t t91 = -55071707348LL;

    t91 = ((x429+x430)/(x431^x432));

    if (t91 != 4244974LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int16_t x433 = -2061;
	volatile int16_t x435 = INT16_MAX;
	static volatile int16_t x436 = 0;
	uint64_t t92 = 5164936147166668081LLU;

    t92 = ((x433+x434)/(x435^x436));

    if (t92 != 295LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x437 = 36644929939LL;
	uint64_t x438 = 64277LLU;
	uint64_t x439 = 38LLU;
	volatile int32_t x440 = INT32_MAX;
	static volatile uint64_t t93 = 3936627LLU;

    t93 = ((x437+x438)/(x439^x440));

    if (t93 != 17LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x442 = 232600154401LL;
	int8_t x443 = 1;
	int32_t x444 = -2072284;
	volatile int64_t t94 = 1LL;

    t94 = ((x441+x442)/(x443^x444));

    if (t94 != -112243LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x445 = INT16_MIN;
	volatile int16_t x447 = INT16_MAX;
	static uint16_t x448 = UINT16_MAX;
	volatile int32_t t95 = 1537992;

    t95 = ((x445+x446)/(x447^x448));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x451 = -1;
	uint8_t x452 = UINT8_MAX;
	volatile int64_t t96 = 3LL;

    t96 = ((x449+x450)/(x451^x452));

    if (t96 != -36028797018963967LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x453 = UINT64_MAX;
	uint32_t x455 = 257U;
	volatile uint64_t t97 = 12442718LLU;

    t97 = ((x453+x454)/(x455^x456));

    if (t97 != 1709933LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x457 = 11937;
	volatile int32_t x458 = INT32_MIN;
	volatile int64_t x459 = -91824764441544687LL;
	static int16_t x460 = -1;
	int64_t t98 = -54496589815LL;

    t98 = ((x457+x458)/(x459^x460));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x461 = 173352732091LLU;
	uint8_t x462 = 4U;
	int16_t x464 = -1;
	volatile uint64_t t99 = 12122LLU;

    t99 = ((x461+x462)/(x463^x464));

    if (t99 != 43338183023LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x466 = -1;
	volatile uint64_t x467 = 367LLU;
	volatile uint64_t x468 = 4993199556LLU;

    t100 = ((x465+x466)/(x467^x468));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x469 = INT8_MIN;
	int32_t x470 = -1;
	int64_t x471 = INT64_MAX;
	int64_t x472 = INT64_MIN;
	static volatile int64_t t101 = -153777446LL;

    t101 = ((x469+x470)/(x471^x472));

    if (t101 != 129LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x473 = -1;
	int64_t x474 = INT64_MAX;
	static int8_t x475 = INT8_MIN;
	static int64_t x476 = INT64_MAX;
	int64_t t102 = -294916366167355LL;

    t102 = ((x473+x474)/(x475^x476));

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x477 = 1;
	int64_t x479 = INT64_MAX;
	int8_t x480 = INT8_MAX;
	volatile int64_t t103 = -4767579184LL;

    t103 = ((x477+x478)/(x479^x480));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x482 = 88037103;
	static uint16_t x483 = 41U;
	int32_t x484 = INT32_MIN;
	volatile int32_t t104 = -11194563;

    t104 = ((x481+x482)/(x483^x484));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x485 = -1;
	int8_t x487 = -1;
	volatile uint8_t x488 = 47U;
	int32_t t105 = 225337734;

    t105 = ((x485+x486)/(x487^x488));

    if (t105 != -9) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x489 = INT16_MAX;
	uint16_t x490 = 0U;
	uint8_t x492 = 88U;
	volatile int32_t t106 = 131693141;

    t106 = ((x489+x490)/(x491^x492));

    if (t106 != 5) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x494 = 17;
	int8_t x495 = INT8_MIN;
	static int8_t x496 = 0;
	static int32_t t107 = 63322487;

    t107 = ((x493+x494)/(x495^x496));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x497 = -1;
	static volatile int8_t x499 = 4;
	static int16_t x500 = INT16_MAX;

    t108 = ((x497+x498)/(x499^x500));

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x501 = 13U;
	uint8_t x502 = UINT8_MAX;
	int32_t x503 = 42;
	int32_t t109 = 29;

    t109 = ((x501+x502)/(x503^x504));

    if (t109 != 3) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x506 = -1;
	uint8_t x507 = UINT8_MAX;
	volatile int8_t x508 = INT8_MIN;
	volatile uint64_t t110 = 305364LLU;

    t110 = ((x505+x506)/(x507^x508));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x513 = 1U;
	volatile uint32_t x514 = UINT32_MAX;
	int64_t x515 = INT64_MAX;
	uint16_t x516 = 67U;
	int64_t t111 = -1478LL;

    t111 = ((x513+x514)/(x515^x516));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x517 = INT64_MIN;
	uint32_t x518 = 15604460U;
	volatile uint16_t x519 = 8U;
	int8_t x520 = INT8_MAX;

    t112 = ((x517+x518)/(x519^x520));

    if (t112 != -77507328040665305LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x521 = -47;
	static uint64_t x522 = UINT64_MAX;
	static volatile int64_t x523 = INT64_MIN;
	volatile int16_t x524 = INT16_MIN;
	volatile uint64_t t113 = 4257551225LLU;

    t113 = ((x521+x522)/(x523^x524));

    if (t113 != 2LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x534 = INT16_MAX;
	volatile int8_t x536 = INT8_MIN;

    t114 = ((x533+x534)/(x535^x536));

    if (t114 != 560) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x537 = -6LL;
	int32_t x538 = -1;
	volatile int8_t x539 = INT8_MAX;
	static int32_t x540 = INT32_MIN;

    t115 = ((x537+x538)/(x539^x540));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int16_t x541 = -1;
	static volatile uint8_t x542 = UINT8_MAX;
	int64_t x543 = -1LL;

    t116 = ((x541+x542)/(x543^x544));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x549 = -2853025950LL;
	int16_t x551 = INT16_MIN;

    t117 = ((x549+x550)/(x551^x552));

    if (t117 != -13LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x553 = -13;
	static volatile int8_t x554 = 7;
	uint32_t x556 = 154U;
	volatile uint32_t t118 = 913053U;

    t118 = ((x553+x554)/(x555^x556));

    if (t118 != 1U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x557 = 29U;
	int16_t x558 = INT16_MAX;
	int16_t x560 = 95;
	static uint32_t t119 = 474050U;

    t119 = ((x557+x558)/(x559^x560));

    if (t119 != 11U) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x563 = -17;
	uint32_t t120 = 202261U;

    t120 = ((x561+x562)/(x563^x564));

    if (t120 != 30702441U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x565 = UINT16_MAX;
	static int32_t x566 = INT32_MIN;
	int16_t x567 = INT16_MAX;
	int32_t x568 = 1300978;
	int32_t t121 = 7;

    t121 = ((x565+x566)/(x567^x568));

    if (t121 != -1667) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x569 = -351138;
	uint64_t x570 = 1829015346624052LLU;
	int32_t x571 = INT32_MAX;
	int32_t x572 = 1589;

    t122 = ((x569+x570)/(x571^x572));

    if (t122 != 851702LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x574 = 0U;
	uint8_t x575 = 0U;
	int16_t x576 = INT16_MIN;
	volatile int32_t t123 = -2;

    t123 = ((x573+x574)/(x575^x576));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x577 = 0;
	int64_t x578 = -4559586611632LL;
	int64_t x579 = INT64_MIN;
	static volatile int64_t t124 = 29310042948473LL;

    t124 = ((x577+x578)/(x579^x580));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x583 = 3U;
	static volatile uint16_t x584 = UINT16_MAX;

    t125 = ((x581+x582)/(x583^x584));

    if (t125 != 65540U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x585 = 0;
	uint8_t x586 = 2U;
	int32_t x587 = -1;
	int32_t t126 = -502438674;

    t126 = ((x585+x586)/(x587^x588));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x589 = -70167;
	int16_t x590 = INT16_MIN;
	int32_t x591 = 26338299;
	int64_t t127 = -125615412315LL;

    t127 = ((x589+x590)/(x591^x592));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x593 = 491463218;
	volatile int16_t x594 = 3;
	volatile uint16_t x595 = UINT16_MAX;
	volatile int8_t x596 = INT8_MAX;
	volatile int32_t t128 = 171149;

    t128 = ((x593+x594)/(x595^x596));

    if (t128 != 7513) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x597 = 1395918LL;
	int8_t x598 = 3;
	uint32_t x599 = 0U;
	uint16_t x600 = 200U;
	int64_t t129 = 12889623LL;

    t129 = ((x597+x598)/(x599^x600));

    if (t129 != 6979LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x601 = -2;
	volatile int64_t x602 = -19533297983753LL;
	int64_t t130 = 6811LL;

    t130 = ((x601+x602)/(x603^x604));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x605 = -2;
	static uint16_t x606 = 1U;
	static uint8_t x607 = UINT8_MAX;

    t131 = ((x605+x606)/(x607^x608));

    if (t131 != 16976155U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x609 = 8U;
	int16_t x611 = INT16_MIN;
	int16_t x612 = -1;
	uint32_t t132 = 16U;

    t132 = ((x609+x610)/(x611^x612));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x613 = INT8_MAX;
	int64_t x614 = -656574851897LL;
	int16_t x615 = INT16_MIN;
	volatile int64_t t133 = 3662721LL;

    t133 = ((x613+x614)/(x615^x616));

    if (t133 != -152LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x621 = -11710542086644605LL;
	int8_t x622 = INT8_MAX;
	uint32_t x623 = 3968464U;
	static int32_t x624 = INT32_MAX;
	int64_t t134 = -3253215796173339LL;

    t134 = ((x621+x622)/(x623^x624));

    if (t134 != -5463241LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x625 = 6160294LLU;
	int16_t x627 = INT16_MAX;
	static uint64_t t135 = 0LLU;

    t135 = ((x625+x626)/(x627^x628));

    if (t135 != 65723LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x634 = INT8_MIN;

    t136 = ((x633+x634)/(x635^x636));

    if (t136 != 1U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x637 = 25U;
	uint32_t x638 = 7U;
	int32_t x639 = -1;
	uint32_t t137 = 14400500U;

    t137 = ((x637+x638)/(x639^x640));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x641 = 0U;
	volatile int64_t x644 = -1LL;
	uint64_t t138 = 10269488LLU;

    t138 = ((x641+x642)/(x643^x644));

    if (t138 != 1LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x645 = -1;
	uint64_t x646 = 89703165609036640LLU;
	uint64_t x648 = 690248148LLU;
	volatile uint64_t t139 = 256LLU;

    t139 = ((x645+x646)/(x647^x648));

    if (t139 != 3097408LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x649 = -3;
	volatile uint8_t x651 = UINT8_MAX;
	int8_t x652 = -1;
	volatile int32_t t140 = -1016209956;

    t140 = ((x649+x650)/(x651^x652));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x653 = 1097369455296LLU;
	int32_t x655 = INT32_MAX;
	volatile int16_t x656 = -1;

    t141 = ((x653+x654)/(x655^x656));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x658 = INT16_MIN;
	volatile uint64_t x659 = 7062865LLU;
	int16_t x660 = -1;

    t142 = ((x657+x658)/(x659^x660));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x662 = INT16_MAX;
	int16_t x664 = 209;

    t143 = ((x661+x662)/(x663^x664));

    if (t143 != 201) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x665 = -1;
	volatile int16_t x666 = INT16_MAX;
	volatile int32_t x667 = 880859580;
	int64_t t144 = -1976LL;

    t144 = ((x665+x666)/(x667^x668));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x669 = INT32_MAX;
	uint64_t x671 = UINT64_MAX;
	volatile int8_t x672 = INT8_MAX;
	uint64_t t145 = 2335925838LLU;

    t145 = ((x669+x670)/(x671^x672));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x678 = 7545U;
	uint64_t x679 = 90127076409653710LLU;
	volatile int8_t x680 = 5;

    t146 = ((x677+x678)/(x679^x680));

    if (t146 != 204LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x681 = 11467LLU;
	volatile int16_t x682 = -16;
	int32_t x683 = -5;
	int8_t x684 = -14;
	volatile uint64_t t147 = 14048906411630608LLU;

    t147 = ((x681+x682)/(x683^x684));

    if (t147 != 1272LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x685 = -146446306479074545LL;
	uint8_t x686 = 11U;
	uint32_t x688 = 37U;
	int64_t t148 = 104465040332201277LL;

    t148 = ((x685+x686)/(x687^x688));

    if (t148 != -34097188LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x689 = INT32_MIN;
	int64_t t149 = -2906254LL;

    t149 = ((x689+x690)/(x691^x692));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x693 = 36U;
	uint64_t x694 = 1828974348470878LLU;
	uint16_t x695 = 24409U;
	int16_t x696 = -63;
	static volatile uint64_t t150 = 185237079820LLU;

    t150 = ((x693+x694)/(x695^x696));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x698 = 77U;
	static int8_t x699 = -1;
	volatile uint64_t t151 = 3897426LLU;

    t151 = ((x697+x698)/(x699^x700));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x701 = INT8_MIN;
	int8_t x702 = INT8_MIN;
	uint64_t x703 = UINT64_MAX;
	volatile int16_t x704 = INT16_MAX;
	volatile uint64_t t152 = 4290551073LLU;

    t152 = ((x701+x702)/(x703^x704));

    if (t152 != 1LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x709 = INT16_MIN;
	int8_t x710 = -1;
	static int64_t x711 = INT64_MIN;
	int64_t t153 = -84096LL;

    t153 = ((x709+x710)/(x711^x712));

    if (t153 != 32769LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x713 = UINT16_MAX;
	uint8_t x714 = 2U;
	int64_t x715 = INT64_MIN;
	volatile int64_t x716 = INT64_MAX;
	static int64_t t154 = -1000527LL;

    t154 = ((x713+x714)/(x715^x716));

    if (t154 != -65537LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x717 = -1LL;
	volatile int8_t x718 = INT8_MAX;
	uint64_t x719 = 608LLU;
	int32_t x720 = INT32_MAX;

    t155 = ((x717+x718)/(x719^x720));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x721 = INT32_MIN;
	uint16_t x722 = UINT16_MAX;
	int8_t x723 = INT8_MIN;
	volatile uint8_t x724 = 7U;
	int32_t t156 = 72941790;

    t156 = ((x721+x722)/(x723^x724));

    if (t156 != 17747257) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x725 = -1;
	static uint16_t x728 = 325U;

    t157 = ((x725+x726)/(x727^x728));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x730 = UINT64_MAX;
	int64_t x731 = -3LL;
	int64_t x732 = 14LL;

    t158 = ((x729+x730)/(x731^x732));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x733 = -695825474491108LL;
	int32_t x734 = -1;
	int64_t x735 = INT64_MIN;
	volatile int64_t x736 = 174771609020LL;
	int64_t t159 = 812955752941466LL;

    t159 = ((x733+x734)/(x735^x736));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x737 = -60;
	static uint16_t x740 = 982U;
	static int64_t t160 = 5699221989LL;

    t160 = ((x737+x738)/(x739^x740));

    if (t160 != -2LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x745 = 15U;
	int64_t x746 = 3070278845556912LL;
	int16_t x747 = INT16_MIN;
	volatile int64_t t161 = 5263795397510839LL;

    t161 = ((x745+x746)/(x747^x748));

    if (t161 != 717348LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x753 = -1LL;
	uint16_t x756 = 3U;
	volatile int64_t t162 = -4548027996940LL;

    t162 = ((x753+x754)/(x755^x756));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x762 = 7408742611202LLU;
	int16_t x763 = INT16_MAX;

    t163 = ((x761+x762)/(x763^x764));

    if (t163 != 226117583LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x765 = -1;
	uint8_t x766 = UINT8_MAX;
	uint32_t x767 = UINT32_MAX;
	volatile int32_t x768 = INT32_MAX;

    t164 = ((x765+x766)/(x767^x768));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x773 = 0U;
	int16_t x774 = -93;
	int32_t t165 = -96668871;

    t165 = ((x773+x774)/(x775^x776));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x777 = INT8_MAX;
	volatile int8_t x778 = -1;
	int32_t x779 = -1;
	int8_t x780 = -9;

    t166 = ((x777+x778)/(x779^x780));

    if (t166 != 15) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x782 = UINT8_MAX;
	uint16_t x783 = 8306U;
	int32_t x784 = 85;
	int64_t t167 = 454280588116LL;

    t167 = ((x781+x782)/(x783^x784));

    if (t167 != -1120565184893059LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x785 = INT8_MIN;
	static int64_t x786 = -404769653494719200LL;
	int16_t x787 = 17;
	static volatile int64_t t168 = 864LL;

    t168 = ((x785+x786)/(x787^x788));

    if (t168 != -12359378732663LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x789 = 20U;
	static uint32_t x790 = UINT32_MAX;
	int8_t x791 = INT8_MIN;
	int16_t x792 = INT16_MIN;
	static volatile uint32_t t169 = 9024U;

    t169 = ((x789+x790)/(x791^x792));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int16_t x797 = -7205;
	int8_t x798 = INT8_MIN;
	volatile uint32_t x799 = 30813788U;
	uint16_t x800 = UINT16_MAX;
	volatile uint32_t t170 = 423U;

    t170 = ((x797+x798)/(x799^x800));

    if (t170 != 139U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x802 = INT8_MAX;
	int16_t x803 = 15;
	volatile int64_t t171 = 114016033LL;

    t171 = ((x801+x802)/(x803^x804));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x809 = -1LL;
	int16_t x810 = -1;
	uint8_t x811 = 114U;
	volatile int8_t x812 = INT8_MAX;

    t172 = ((x809+x810)/(x811^x812));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x813 = INT8_MIN;
	int8_t x814 = -56;
	static volatile uint16_t x815 = UINT16_MAX;
	int8_t x816 = INT8_MIN;
	volatile int32_t t173 = 11592;

    t173 = ((x813+x814)/(x815^x816));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x817 = INT64_MAX;
	uint16_t x819 = 0U;
	static uint32_t x820 = 248U;
	int64_t t174 = 320159506LL;

    t174 = ((x817+x818)/(x819^x820));

    if (t174 != 37191016275458082LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x829 = INT16_MIN;
	uint32_t x830 = 9540678U;
	int16_t x832 = INT16_MIN;
	static uint32_t t175 = 8999410U;

    t175 = ((x829+x830)/(x831^x832));

    if (t175 != 291U) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x837 = 7U;
	static int16_t x838 = 0;
	static int64_t x839 = INT64_MIN;
	int64_t x840 = -1LL;
	volatile int64_t t176 = -710398077561654LL;

    t176 = ((x837+x838)/(x839^x840));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x845 = 1795202269LLU;
	int32_t x846 = INT32_MIN;
	int32_t x847 = INT32_MIN;
	int16_t x848 = -3;
	volatile uint64_t t177 = 7122031546LLU;

    t177 = ((x845+x846)/(x847^x848));

    if (t177 != 8589934603LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x849 = INT64_MIN;
	static int16_t x850 = 1;
	volatile int16_t x851 = INT16_MIN;
	int64_t x852 = INT64_MIN;
	volatile int64_t t178 = -5704313184876702LL;

    t178 = ((x849+x850)/(x851^x852));

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x853 = INT64_MIN;
	static uint64_t x854 = 1020954874510521LLU;
	int16_t x855 = -1;
	int32_t x856 = -8;
	static uint64_t t179 = 362260907LLU;

    t179 = ((x853+x854)/(x855^x856));

    if (t179 != 1317770427389898047LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x863 = -1;
	int8_t x864 = INT8_MIN;
	volatile uint32_t t180 = 6037U;

    t180 = ((x861+x862)/(x863^x864));

    if (t180 != 13650562U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x866 = INT16_MAX;
	int8_t x867 = INT8_MIN;
	int64_t x868 = INT64_MIN;
	int64_t t181 = 71306137LL;

    t181 = ((x865+x866)/(x867^x868));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x869 = -34309;
	uint32_t x870 = UINT32_MAX;
	uint32_t x872 = 61U;

    t182 = ((x869+x870)/(x871^x872));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x873 = 80383;
	volatile uint32_t x874 = 108U;
	uint8_t x875 = 1U;
	int16_t x876 = 837;
	uint32_t t183 = 0U;

    t183 = ((x873+x874)/(x875^x876));

    if (t183 != 96U) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x879 = INT32_MIN;
	int64_t x880 = 165500102948LL;
	volatile int64_t t184 = 44956001295198LL;

    t184 = ((x877+x878)/(x879^x880));

    if (t184 != -55111015LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x882 = 3U;
	int64_t x883 = INT64_MIN;

    t185 = ((x881+x882)/(x883^x884));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x886 = 1;
	volatile int16_t x887 = INT16_MIN;
	uint8_t x888 = UINT8_MAX;
	int32_t t186 = 242698;

    t186 = ((x885+x886)/(x887^x888));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x889 = -52502885;
	uint16_t x891 = UINT16_MAX;
	static int32_t x892 = INT32_MAX;
	volatile int32_t t187 = -33017283;

    t187 = ((x889+x890)/(x891^x892));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x893 = INT64_MIN;
	int16_t x894 = 13;
	int32_t x895 = INT32_MIN;
	uint32_t x896 = UINT32_MAX;
	int64_t t188 = 2833782LL;

    t188 = ((x893+x894)/(x895^x896));

    if (t188 != -4294967297LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x897 = INT32_MIN;
	int16_t x898 = 3958;
	static volatile int16_t x899 = -7;
	int32_t x900 = INT32_MAX;
	volatile int32_t t189 = -6;

    t189 = ((x897+x898)/(x899^x900));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x902 = 3;
	int32_t x903 = INT32_MAX;
	volatile int16_t x904 = 11;
	static int32_t t190 = 764096262;

    t190 = ((x901+x902)/(x903^x904));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x905 = 1;
	int64_t x906 = INT64_MIN;
	int32_t x908 = INT32_MIN;
	int64_t t191 = INT64_MAX;

    t191 = ((x905+x906)/(x907^x908));

    if (t191 != INT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x909 = 1U;
	uint8_t x910 = UINT8_MAX;
	uint32_t x911 = 1620486U;
	int16_t x912 = INT16_MAX;
	uint32_t t192 = 15U;

    t192 = ((x909+x910)/(x911^x912));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x913 = 1U;
	static uint16_t x914 = 6U;
	uint32_t x916 = 24U;
	int64_t t193 = -21239LL;

    t193 = ((x913+x914)/(x915^x916));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x917 = -1;
	volatile uint8_t x920 = 30U;
	volatile uint64_t t194 = 1872269690056124LLU;

    t194 = ((x917+x918)/(x919^x920));

    if (t194 != 90420LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x921 = INT16_MIN;
	volatile uint8_t x923 = 91U;
	int32_t t195 = 47269674;

    t195 = ((x921+x922)/(x923^x924));

    if (t195 != -334) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x930 = INT16_MAX;
	int32_t t196 = 1;

    t196 = ((x929+x930)/(x931^x932));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int16_t x933 = -1;
	int16_t x934 = 176;
	int8_t x935 = INT8_MIN;
	volatile uint16_t x936 = UINT16_MAX;
	static int32_t t197 = 0;

    t197 = ((x933+x934)/(x935^x936));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x937 = -316636LL;
	static int8_t x938 = -5;
	uint32_t x940 = 34U;

    t198 = ((x937+x938)/(x939^x940));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x941 = INT8_MIN;
	int8_t x942 = INT8_MIN;
	int64_t x943 = -15340866LL;
	uint16_t x944 = UINT16_MAX;

    t199 = ((x941+x942)/(x943^x944));

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


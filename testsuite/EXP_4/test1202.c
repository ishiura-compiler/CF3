
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

static int32_t x4 = INT32_MAX;
static int8_t x8 = -1;
int64_t x18 = -34252131212554LL;
static int64_t x19 = 148681844836826033LL;
int64_t t4 = -204121LL;
volatile int32_t t5 = 534;
int32_t x29 = INT32_MAX;
int64_t x32 = INT64_MAX;
static int16_t x36 = -24;
int16_t x43 = -1;
static int32_t x44 = INT32_MIN;
volatile uint8_t x50 = UINT8_MAX;
int16_t x55 = 1;
uint16_t x58 = 1017U;
volatile int16_t x61 = -1;
static int16_t x64 = INT16_MIN;
int64_t x66 = INT64_MAX;
int32_t x67 = INT32_MAX;
int8_t x74 = -1;
int16_t x81 = 6719;
volatile int8_t x82 = INT8_MIN;
int32_t t18 = -1736;
int8_t x96 = -9;
volatile int16_t x98 = -1;
static volatile uint16_t x99 = 0U;
int8_t x100 = INT8_MIN;
int64_t x103 = INT64_MIN;
int32_t t21 = 327104;
uint64_t x106 = 336364913248LLU;
int16_t x107 = INT16_MIN;
int32_t x112 = -1;
static volatile int32_t t23 = 23;
int64_t x118 = 31433819309937LL;
int16_t x122 = -1;
int16_t x124 = -70;
static volatile int32_t x130 = -1;
int32_t t27 = -599;
static int8_t x134 = 11;
int64_t x135 = 1747843215LL;
int64_t x136 = INT64_MAX;
int32_t x137 = INT32_MIN;
int32_t t29 = 6235643;
static volatile int8_t x141 = -1;
int8_t x143 = INT8_MIN;
static uint64_t x144 = 1679992655931754193LLU;
uint64_t x154 = 180531090LLU;
volatile int64_t t35 = -2128203863859175894LL;
int32_t x165 = 6;
int16_t x167 = INT16_MIN;
uint16_t x169 = 13U;
uint16_t x170 = 54U;
static int64_t x171 = INT64_MIN;
uint16_t x172 = 2U;
static volatile uint16_t x173 = UINT16_MAX;
int8_t x186 = 60;
static int32_t x187 = 400436;
uint8_t x190 = 1U;
static volatile int32_t t41 = 56346;
uint8_t x196 = 87U;
static int64_t x197 = -1LL;
int64_t x203 = INT64_MIN;
int64_t x204 = INT64_MAX;
uint32_t t46 = 41U;
int8_t x219 = -1;
volatile int32_t t49 = 452186;
static int32_t x236 = INT32_MIN;
volatile uint32_t x237 = UINT32_MAX;
uint16_t x241 = 4770U;
volatile int16_t x244 = INT16_MIN;
int8_t x251 = 1;
volatile int32_t t56 = 1125244;
uint16_t x265 = UINT16_MAX;
uint64_t x268 = 27330LLU;
static int8_t x272 = INT8_MIN;
int8_t x278 = INT8_MIN;
volatile int64_t t60 = 91772079914367512LL;
static volatile uint32_t x283 = 4740U;
volatile int64_t t61 = -626LL;
int32_t t62 = 20227;
uint64_t x297 = 128411120LLU;
static uint64_t x300 = 8068LLU;
int64_t x304 = -1LL;
static int8_t x309 = INT8_MAX;
int64_t t68 = -1251LL;
uint16_t x318 = 143U;
uint32_t x320 = 0U;
int32_t t73 = 0;
int16_t x341 = INT16_MIN;
uint32_t x347 = 15U;
int16_t x348 = -1;
static uint32_t x351 = 8U;
volatile int8_t x354 = INT8_MAX;
uint8_t x357 = UINT8_MAX;
static volatile uint64_t t79 = 371727953164LLU;
volatile uint16_t x366 = UINT16_MAX;
int32_t x376 = 23;
int8_t x379 = INT8_MIN;
int64_t x380 = -1LL;
int32_t t83 = 6;
volatile int64_t x382 = -1LL;
volatile uint16_t x383 = UINT16_MAX;
int64_t t84 = -167260LL;
int64_t x388 = -1LL;
volatile int64_t x391 = INT64_MAX;
volatile uint16_t x394 = 191U;
uint32_t x397 = 74502681U;
static volatile uint32_t t88 = 1012909U;
static volatile int8_t x402 = 1;
int64_t x403 = INT64_MIN;
uint64_t x405 = UINT64_MAX;
int8_t x406 = INT8_MAX;
uint16_t x414 = 0U;
int8_t x416 = INT8_MIN;
volatile int32_t t93 = -141546900;
volatile uint32_t x423 = 124817518U;
int8_t x427 = INT8_MIN;
uint16_t x429 = 2035U;
static volatile int32_t t96 = -38188;
int64_t x433 = INT64_MIN;
int64_t x436 = INT64_MAX;
int64_t t98 = 256163451199909LL;
int32_t x445 = INT32_MIN;
static volatile uint64_t t100 = 1850641008324LLU;
volatile uint16_t x449 = 196U;
int8_t x451 = INT8_MIN;
uint64_t x457 = UINT64_MAX;
volatile int64_t x463 = -1LL;
int16_t x466 = INT16_MIN;
int16_t x468 = -19;
int64_t x474 = 128254LL;
static uint8_t x477 = UINT8_MAX;
uint64_t x495 = UINT64_MAX;
int32_t x498 = -1;
volatile int32_t t112 = 542308;
static volatile int64_t x504 = INT64_MAX;
uint32_t x505 = UINT32_MAX;
uint16_t x509 = UINT16_MAX;
volatile int32_t t115 = 491564232;
int32_t x513 = INT32_MIN;
int32_t x515 = INT32_MIN;
int8_t x516 = INT8_MIN;
static uint64_t x518 = UINT64_MAX;
volatile uint8_t x519 = 22U;
static int8_t x527 = INT8_MIN;
volatile int64_t x532 = INT64_MIN;
int16_t x535 = INT16_MIN;
static int32_t t122 = 12755;
uint16_t x543 = 181U;
static int8_t x544 = INT8_MIN;
volatile uint64_t t123 = 3951785920361LLU;
int8_t x550 = 3;
uint8_t x552 = 108U;
int32_t t124 = 21380228;
int64_t x555 = INT64_MIN;
uint8_t x560 = 53U;
volatile int32_t t126 = 24;
static int64_t x565 = INT64_MAX;
volatile int32_t x578 = 2;
int16_t x583 = INT16_MIN;
uint8_t x586 = 0U;
volatile uint32_t x593 = 58U;
volatile uint64_t x594 = UINT64_MAX;
int16_t x596 = -1;
static volatile uint64_t t133 = 20989314459878LLU;
uint64_t x606 = 1127LLU;
int64_t x608 = INT64_MAX;
int8_t x612 = 0;
static uint32_t x624 = 156U;
int32_t x628 = -1;
volatile int64_t x633 = -1LL;
int64_t x640 = INT64_MAX;
volatile int16_t x643 = INT16_MIN;
int16_t x651 = -1;
int64_t t144 = 1749485044057LL;
volatile int32_t t145 = 5624952;
uint64_t x672 = 3472LLU;
static int64_t t148 = INT64_MIN;
static int8_t x678 = INT8_MAX;
int16_t x684 = -1;
uint16_t x685 = 3U;
volatile int16_t x687 = -18;
volatile int8_t x697 = -1;
uint64_t x698 = 22583050184LLU;
uint64_t t154 = 193782885556LLU;
uint64_t t155 = 31LLU;
uint32_t x710 = 180U;
uint8_t x712 = UINT8_MAX;
int64_t x713 = INT64_MIN;
volatile int64_t x715 = -1LL;
int32_t x724 = -19869389;
int32_t x738 = INT32_MAX;
int16_t x741 = -500;
uint8_t x746 = 2U;
int64_t t165 = -435476LL;
int64_t x749 = -16LL;
int64_t x752 = INT64_MIN;
int8_t x760 = -1;
uint32_t x767 = UINT32_MAX;
int32_t t169 = 1659113;
static uint8_t x777 = UINT8_MAX;
uint16_t x783 = 2U;
volatile int64_t t173 = 2877025224628LL;
int8_t x806 = 6;
volatile uint64_t x808 = 211LLU;
int32_t t184 = -1;
volatile int16_t x834 = INT16_MIN;
volatile int32_t t186 = 35196;
uint32_t x841 = 58046U;
static int16_t x842 = -578;
uint16_t x843 = 193U;
uint32_t x844 = UINT32_MAX;
volatile int8_t x853 = INT8_MIN;
int8_t x856 = 2;
uint32_t t191 = 17U;
uint16_t x858 = 60U;
volatile int32_t t193 = -1;
static uint8_t x865 = 15U;
uint64_t x867 = UINT64_MAX;
int32_t t194 = 502629;
static int64_t x869 = INT64_MAX;
static int16_t x882 = -7234;
volatile uint64_t x884 = UINT64_MAX;
int16_t x888 = INT16_MIN;
int32_t x891 = INT32_MAX;


void f0(void) {
    	int16_t x1 = -1;
	volatile int16_t x2 = -1;
	uint64_t x3 = 15527403940689LLU;
	int32_t t0 = 89663;

    t0 = (x1&(x2-(x3!=x4)));

    if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 9U;
	uint64_t x6 = UINT64_MAX;
	static int64_t x7 = INT64_MIN;
	volatile uint64_t t1 = 220972LLU;

    t1 = (x5&(x6-(x7!=x8)));

    if (t1 != 8LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 8995U;
	volatile int8_t x10 = -1;
	int16_t x11 = -1;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 8303417;

    t2 = (x9&(x10-(x11!=x12)));

    if (t2 != 8994) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = -1009091949627644LL;
	volatile int8_t x14 = -6;
	volatile int16_t x15 = INT16_MIN;
	int64_t x16 = -713361262108994LL;
	static int64_t t3 = 66040LL;

    t3 = (x13&(x14-(x15!=x16)));

    if (t3 != -1009091949627648LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 1U;
	int32_t x20 = INT32_MIN;

    t4 = (x17&(x18-(x19!=x20)));

    if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = INT8_MIN;
	uint8_t x26 = 2U;
	volatile int8_t x27 = INT8_MIN;
	int16_t x28 = 1;

    t5 = (x25&(x26-(x27!=x28)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x30 = 36767;
	volatile int8_t x31 = INT8_MIN;
	static volatile int32_t t6 = 862;

    t6 = (x29&(x30-(x31!=x32)));

    if (t6 != 36766) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x33 = INT16_MAX;
	int64_t x34 = -11690999667009LL;
	int16_t x35 = INT16_MIN;
	volatile int64_t t7 = -638633LL;

    t7 = (x33&(x34-(x35!=x36)));

    if (t7 != 9918LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x41 = 22824527208845LLU;
	int64_t x42 = -1LL;
	uint64_t t8 = 18LLU;

    t8 = (x41&(x42-(x43!=x44)));

    if (t8 != 22824527208844LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x49 = -4;
	static int64_t x51 = -215LL;
	int16_t x52 = INT16_MAX;
	static int32_t t9 = -6771;

    t9 = (x49&(x50-(x51!=x52)));

    if (t9 != 252) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x53 = UINT64_MAX;
	uint8_t x54 = UINT8_MAX;
	int64_t x56 = -1LL;
	volatile uint64_t t10 = 1297861206184848789LLU;

    t10 = (x53&(x54-(x55!=x56)));

    if (t10 != 254LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = INT16_MIN;
	uint16_t x59 = 317U;
	static uint8_t x60 = 5U;
	volatile int32_t t11 = 752;

    t11 = (x57&(x58-(x59!=x60)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x62 = UINT64_MAX;
	int64_t x63 = INT64_MIN;
	static uint64_t t12 = 4086078065036707LLU;

    t12 = (x61&(x62-(x63!=x64)));

    if (t12 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x65 = 1119LLU;
	uint16_t x68 = 17475U;
	static volatile uint64_t t13 = 606945967LLU;

    t13 = (x65&(x66-(x67!=x68)));

    if (t13 != 1118LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x69 = 1039165688U;
	volatile uint16_t x70 = UINT16_MAX;
	uint32_t x71 = 365U;
	int8_t x72 = -1;
	uint32_t t14 = 146914U;

    t14 = (x69&(x70-(x71!=x72)));

    if (t14 != 26872U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x73 = INT32_MIN;
	uint8_t x75 = 25U;
	int16_t x76 = 10;
	volatile int32_t t15 = INT32_MIN;

    t15 = (x73&(x74-(x75!=x76)));

    if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x77 = 15067U;
	int8_t x78 = 0;
	uint64_t x79 = 1194597LLU;
	static uint64_t x80 = UINT64_MAX;
	int32_t t16 = -59046;

    t16 = (x77&(x78-(x79!=x80)));

    if (t16 != 15067) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x83 = 5U;
	int32_t x84 = -257280193;
	volatile int32_t t17 = 852766472;

    t17 = (x81&(x82-(x83!=x84)));

    if (t17 != 6719) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x85 = INT16_MIN;
	static volatile int32_t x86 = INT32_MAX;
	static int8_t x87 = INT8_MIN;
	static int64_t x88 = -70258082914870681LL;

    t18 = (x85&(x86-(x87!=x88)));

    if (t18 != 2147450880) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x93 = INT8_MAX;
	int32_t x94 = -1;
	uint16_t x95 = UINT16_MAX;
	int32_t t19 = 4513;

    t19 = (x93&(x94-(x95!=x96)));

    if (t19 != 126) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x97 = INT8_MIN;
	int32_t t20 = -302;

    t20 = (x97&(x98-(x99!=x100)));

    if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x101 = -5571;
	volatile int16_t x102 = -1;
	int32_t x104 = -1;

    t21 = (x101&(x102-(x103!=x104)));

    if (t21 != -5572) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x105 = INT8_MIN;
	static volatile uint64_t x108 = 1285226490975210LLU;
	volatile uint64_t t22 = 191526713LLU;

    t22 = (x105&(x106-(x107!=x108)));

    if (t22 != 336364913152LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x109 = 7;
	int8_t x110 = INT8_MIN;
	static int32_t x111 = INT32_MIN;

    t23 = (x109&(x110-(x111!=x112)));

    if (t23 != 7) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x113 = -22;
	static uint8_t x114 = 2U;
	volatile int16_t x115 = INT16_MIN;
	uint64_t x116 = 89433LLU;
	int32_t t24 = 31235209;

    t24 = (x113&(x114-(x115!=x116)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x117 = 1U;
	static uint32_t x119 = 8354706U;
	volatile uint32_t x120 = 12042941U;
	volatile int64_t t25 = -164567915923360LL;

    t25 = (x117&(x118-(x119!=x120)));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x121 = 41434804LL;
	int64_t x123 = -281934485085447098LL;
	int64_t t26 = -67476056LL;

    t26 = (x121&(x122-(x123!=x124)));

    if (t26 != 41434804LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x129 = INT8_MAX;
	static int16_t x131 = INT16_MIN;
	uint32_t x132 = UINT32_MAX;

    t27 = (x129&(x130-(x131!=x132)));

    if (t27 != 126) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x133 = INT8_MIN;
	volatile int32_t t28 = 173;

    t28 = (x133&(x134-(x135!=x136)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x138 = 5U;
	int8_t x139 = INT8_MAX;
	static int16_t x140 = INT16_MIN;

    t29 = (x137&(x138-(x139!=x140)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x142 = 1823129LLU;
	uint64_t t30 = 9062203280344LLU;

    t30 = (x141&(x142-(x143!=x144)));

    if (t30 != 1823128LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x145 = 512639379246159626LLU;
	static int32_t x146 = INT32_MAX;
	int16_t x147 = INT16_MAX;
	int64_t x148 = -3062220949626845335LL;
	volatile uint64_t t31 = 47452283555663LLU;

    t31 = (x145&(x146-(x147!=x148)));

    if (t31 != 567809802LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x149 = INT16_MAX;
	int16_t x150 = 1837;
	volatile int32_t x151 = INT32_MAX;
	int32_t x152 = INT32_MAX;
	int32_t t32 = -10769;

    t32 = (x149&(x150-(x151!=x152)));

    if (t32 != 1837) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x153 = INT16_MIN;
	uint32_t x155 = UINT32_MAX;
	volatile int32_t x156 = INT32_MAX;
	uint64_t t33 = 2LLU;

    t33 = (x153&(x154-(x155!=x156)));

    if (t33 != 180518912LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x157 = INT32_MIN;
	static uint32_t x158 = 316633526U;
	int64_t x159 = 954301218LL;
	int16_t x160 = 0;
	volatile uint32_t t34 = 278504288U;

    t34 = (x157&(x158-(x159!=x160)));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x161 = 1285473LL;
	int8_t x162 = INT8_MIN;
	volatile uint32_t x163 = 3U;
	static int16_t x164 = INT16_MIN;

    t35 = (x161&(x162-(x163!=x164)));

    if (t35 != 1285473LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x166 = 4U;
	uint32_t x168 = UINT32_MAX;
	int32_t t36 = 3046;

    t36 = (x165&(x166-(x167!=x168)));

    if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int32_t t37 = 613;

    t37 = (x169&(x170-(x171!=x172)));

    if (t37 != 5) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x174 = 210054U;
	int64_t x175 = INT64_MAX;
	volatile uint64_t x176 = 52887660112709058LLU;
	uint32_t t38 = 142800814U;

    t38 = (x173&(x174-(x175!=x176)));

    if (t38 != 13445U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x181 = 25U;
	uint16_t x182 = 19530U;
	int32_t x183 = INT32_MIN;
	int32_t x184 = INT32_MIN;
	volatile int32_t t39 = 481;

    t39 = (x181&(x182-(x183!=x184)));

    if (t39 != 8) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x185 = INT32_MIN;
	static int32_t x188 = INT32_MAX;
	static int32_t t40 = -704407389;

    t40 = (x185&(x186-(x187!=x188)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x189 = INT32_MAX;
	static volatile uint8_t x191 = UINT8_MAX;
	volatile int64_t x192 = INT64_MAX;

    t41 = (x189&(x190-(x191!=x192)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x193 = INT16_MIN;
	int8_t x194 = INT8_MAX;
	uint64_t x195 = 202976699LLU;
	int32_t t42 = 62601477;

    t42 = (x193&(x194-(x195!=x196)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x198 = 0;
	uint8_t x199 = 81U;
	int32_t x200 = INT32_MIN;
	volatile int64_t t43 = 2049209554909LL;

    t43 = (x197&(x198-(x199!=x200)));

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x201 = UINT16_MAX;
	int8_t x202 = -1;
	volatile int32_t t44 = 5017;

    t44 = (x201&(x202-(x203!=x204)));

    if (t44 != 65534) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x205 = INT64_MAX;
	uint16_t x206 = 5909U;
	int64_t x207 = INT64_MIN;
	volatile int8_t x208 = -59;
	int64_t t45 = -120929LL;

    t45 = (x205&(x206-(x207!=x208)));

    if (t45 != 5908LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x209 = 1948U;
	uint16_t x210 = UINT16_MAX;
	int8_t x211 = 3;
	int64_t x212 = INT64_MIN;

    t46 = (x209&(x210-(x211!=x212)));

    if (t46 != 1948U) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x217 = INT64_MIN;
	int16_t x218 = INT16_MIN;
	uint32_t x220 = 35U;
	static volatile int64_t t47 = INT64_MIN;

    t47 = (x217&(x218-(x219!=x220)));

    if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x221 = -9834779286673LL;
	int32_t x222 = -5867;
	int16_t x223 = INT16_MIN;
	int64_t x224 = -1237403LL;
	int64_t t48 = -12097323112LL;

    t48 = (x221&(x222-(x223!=x224)));

    if (t48 != -9834779287292LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x225 = 20597U;
	int16_t x226 = INT16_MIN;
	int32_t x227 = INT32_MIN;
	volatile int32_t x228 = INT32_MIN;

    t49 = (x225&(x226-(x227!=x228)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x233 = 17777749U;
	int16_t x234 = 221;
	static volatile int16_t x235 = INT16_MAX;
	volatile uint32_t t50 = 135227182U;

    t50 = (x233&(x234-(x235!=x236)));

    if (t50 != 84U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x238 = 1U;
	int16_t x239 = -1409;
	int16_t x240 = INT16_MIN;
	uint32_t t51 = 542U;

    t51 = (x237&(x238-(x239!=x240)));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int16_t x242 = INT16_MIN;
	volatile int8_t x243 = -1;
	static int32_t t52 = 24271;

    t52 = (x241&(x242-(x243!=x244)));

    if (t52 != 4770) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x245 = -1;
	int16_t x246 = INT16_MIN;
	int64_t x247 = INT64_MIN;
	volatile int32_t x248 = INT32_MIN;
	volatile int32_t t53 = -5;

    t53 = (x245&(x246-(x247!=x248)));

    if (t53 != -32769) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x249 = -1;
	static int32_t x250 = INT32_MAX;
	int32_t x252 = INT32_MAX;
	volatile int32_t t54 = 0;

    t54 = (x249&(x250-(x251!=x252)));

    if (t54 != 2147483646) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x253 = -1;
	int8_t x254 = INT8_MIN;
	static int8_t x255 = -1;
	int8_t x256 = INT8_MIN;
	int32_t t55 = -90;

    t55 = (x253&(x254-(x255!=x256)));

    if (t55 != -129) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x261 = -76351468;
	int32_t x262 = -931;
	static int32_t x263 = -1;
	int64_t x264 = INT64_MAX;

    t56 = (x261&(x262-(x263!=x264)));

    if (t56 != -76351468) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x266 = INT16_MIN;
	int64_t x267 = 15575402862642933LL;
	volatile int32_t t57 = 6285;

    t57 = (x265&(x266-(x267!=x268)));

    if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x269 = INT8_MAX;
	int64_t x270 = 7139LL;
	int32_t x271 = INT32_MIN;
	int64_t t58 = -1LL;

    t58 = (x269&(x270-(x271!=x272)));

    if (t58 != 98LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x273 = INT64_MAX;
	int8_t x274 = INT8_MAX;
	uint8_t x275 = 1U;
	volatile int64_t x276 = -1LL;
	int64_t t59 = -17438170883502560LL;

    t59 = (x273&(x274-(x275!=x276)));

    if (t59 != 126LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x277 = 6314734293368LL;
	int16_t x279 = -1;
	int8_t x280 = INT8_MIN;

    t60 = (x277&(x278-(x279!=x280)));

    if (t60 != 6314734293368LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x281 = INT64_MIN;
	int32_t x282 = 28294;
	int8_t x284 = -1;

    t61 = (x281&(x282-(x283!=x284)));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x285 = INT32_MAX;
	int32_t x286 = 45;
	int8_t x287 = -35;
	static uint32_t x288 = UINT32_MAX;

    t62 = (x285&(x286-(x287!=x288)));

    if (t62 != 44) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x289 = -67;
	int16_t x290 = 5;
	static int64_t x291 = INT64_MAX;
	volatile int32_t x292 = INT32_MIN;
	static int32_t t63 = -3418829;

    t63 = (x289&(x290-(x291!=x292)));

    if (t63 != 4) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x293 = UINT8_MAX;
	volatile uint16_t x294 = 172U;
	int64_t x295 = INT64_MAX;
	uint32_t x296 = 1175131U;
	int32_t t64 = 11129346;

    t64 = (x293&(x294-(x295!=x296)));

    if (t64 != 171) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x298 = -1;
	static uint8_t x299 = 99U;
	volatile uint64_t t65 = 2561LLU;

    t65 = (x297&(x298-(x299!=x300)));

    if (t65 != 128411120LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x301 = 486;
	int16_t x302 = INT16_MIN;
	volatile int8_t x303 = -4;
	static int32_t t66 = 213750222;

    t66 = (x301&(x302-(x303!=x304)));

    if (t66 != 486) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x310 = INT16_MIN;
	uint32_t x311 = 492741U;
	int32_t x312 = -1653;
	int32_t t67 = -872088;

    t67 = (x309&(x310-(x311!=x312)));

    if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x313 = 6298;
	int64_t x314 = -1LL;
	int64_t x315 = INT64_MIN;
	uint32_t x316 = UINT32_MAX;

    t68 = (x313&(x314-(x315!=x316)));

    if (t68 != 6298LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x317 = INT16_MIN;
	volatile int16_t x319 = 1;
	volatile int32_t t69 = 1;

    t69 = (x317&(x318-(x319!=x320)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x321 = UINT32_MAX;
	int8_t x322 = -1;
	uint32_t x323 = 1399843731U;
	volatile uint32_t x324 = UINT32_MAX;
	uint32_t t70 = 2U;

    t70 = (x321&(x322-(x323!=x324)));

    if (t70 != 4294967294U) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x329 = INT32_MAX;
	int16_t x330 = INT16_MIN;
	int32_t x331 = INT32_MIN;
	int8_t x332 = -1;
	volatile int32_t t71 = -4;

    t71 = (x329&(x330-(x331!=x332)));

    if (t71 != 2147450879) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x333 = -1;
	int16_t x334 = -50;
	int32_t x335 = INT32_MIN;
	volatile int32_t x336 = INT32_MAX;
	volatile int32_t t72 = 304830597;

    t72 = (x333&(x334-(x335!=x336)));

    if (t72 != -51) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x337 = INT32_MAX;
	int8_t x338 = INT8_MIN;
	uint16_t x339 = 1U;
	uint64_t x340 = 8411093511473LLU;

    t73 = (x337&(x338-(x339!=x340)));

    if (t73 != 2147483519) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x342 = INT8_MAX;
	static int32_t x343 = -3799621;
	static int16_t x344 = -1;
	int32_t t74 = -847;

    t74 = (x341&(x342-(x343!=x344)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x345 = -1;
	static int8_t x346 = INT8_MIN;
	volatile int32_t t75 = 30879;

    t75 = (x345&(x346-(x347!=x348)));

    if (t75 != -129) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x349 = -1LL;
	int64_t x350 = -1LL;
	volatile int64_t x352 = INT64_MIN;
	static volatile int64_t t76 = 47LL;

    t76 = (x349&(x350-(x351!=x352)));

    if (t76 != -2LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x353 = -1;
	int64_t x355 = 6649LL;
	int64_t x356 = INT64_MAX;
	volatile int32_t t77 = 9439576;

    t77 = (x353&(x354-(x355!=x356)));

    if (t77 != 126) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x358 = 64270001U;
	int8_t x359 = 2;
	volatile uint32_t x360 = UINT32_MAX;
	volatile uint32_t t78 = 914219348U;

    t78 = (x357&(x358-(x359!=x360)));

    if (t78 != 176U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x361 = UINT64_MAX;
	uint8_t x362 = 56U;
	volatile int32_t x363 = INT32_MAX;
	int8_t x364 = -3;

    t79 = (x361&(x362-(x363!=x364)));

    if (t79 != 55LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x365 = 1;
	volatile uint8_t x367 = 0U;
	static volatile uint16_t x368 = 3229U;
	volatile int32_t t80 = -123;

    t80 = (x365&(x366-(x367!=x368)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x369 = UINT16_MAX;
	static volatile int8_t x370 = 1;
	static volatile int32_t x371 = -1;
	int64_t x372 = INT64_MAX;
	int32_t t81 = 0;

    t81 = (x369&(x370-(x371!=x372)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int32_t x373 = INT32_MIN;
	volatile int16_t x374 = -1;
	int64_t x375 = INT64_MIN;
	int32_t t82 = INT32_MIN;

    t82 = (x373&(x374-(x375!=x376)));

    if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x377 = UINT8_MAX;
	int32_t x378 = -1;

    t83 = (x377&(x378-(x379!=x380)));

    if (t83 != 254) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x381 = 10;
	int64_t x384 = 1LL;

    t84 = (x381&(x382-(x383!=x384)));

    if (t84 != 10LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint64_t x385 = 154LLU;
	static volatile int64_t x386 = 51458181LL;
	volatile uint64_t x387 = 4764LLU;
	uint64_t t85 = 1661472LLU;

    t85 = (x385&(x386-(x387!=x388)));

    if (t85 != 128LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x389 = 63;
	int8_t x390 = INT8_MIN;
	static volatile int16_t x392 = INT16_MIN;
	volatile int32_t t86 = 2562637;

    t86 = (x389&(x390-(x391!=x392)));

    if (t86 != 63) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x393 = 2021791014302LLU;
	int16_t x395 = INT16_MAX;
	int8_t x396 = -22;
	volatile uint64_t t87 = 0LLU;

    t87 = (x393&(x394-(x395!=x396)));

    if (t87 != 158LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x398 = 43U;
	volatile int16_t x399 = -3;
	static int16_t x400 = 1;

    t88 = (x397&(x398-(x399!=x400)));

    if (t88 != 8U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x401 = 5643U;
	volatile uint32_t x404 = UINT32_MAX;
	static int32_t t89 = -1944;

    t89 = (x401&(x402-(x403!=x404)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x407 = INT64_MIN;
	int64_t x408 = 11LL;
	uint64_t t90 = 599424991846945724LLU;

    t90 = (x405&(x406-(x407!=x408)));

    if (t90 != 126LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x409 = -1;
	static int8_t x410 = -1;
	int8_t x411 = -7;
	uint16_t x412 = 462U;
	volatile int32_t t91 = 4769;

    t91 = (x409&(x410-(x411!=x412)));

    if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x413 = INT16_MIN;
	int8_t x415 = INT8_MAX;
	static volatile int32_t t92 = -304362193;

    t92 = (x413&(x414-(x415!=x416)));

    if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x417 = INT8_MAX;
	uint16_t x418 = UINT16_MAX;
	int16_t x419 = -108;
	int32_t x420 = INT32_MAX;

    t93 = (x417&(x418-(x419!=x420)));

    if (t93 != 126) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x421 = INT64_MAX;
	uint8_t x422 = 121U;
	uint16_t x424 = UINT16_MAX;
	int64_t t94 = -1LL;

    t94 = (x421&(x422-(x423!=x424)));

    if (t94 != 120LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x425 = 8246950086LL;
	int8_t x426 = INT8_MIN;
	uint16_t x428 = UINT16_MAX;
	volatile int64_t t95 = -433807LL;

    t95 = (x425&(x426-(x427!=x428)));

    if (t95 != 8246949958LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x430 = 2;
	int32_t x431 = INT32_MIN;
	uint16_t x432 = UINT16_MAX;

    t96 = (x429&(x430-(x431!=x432)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x434 = 5948836999826003LLU;
	int16_t x435 = INT16_MAX;
	volatile uint64_t t97 = 1877072306655LLU;

    t97 = (x433&(x434-(x435!=x436)));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x437 = -30484264135256LL;
	int8_t x438 = 6;
	int32_t x439 = INT32_MAX;
	uint16_t x440 = UINT16_MAX;

    t98 = (x437&(x438-(x439!=x440)));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x441 = 16596982U;
	static volatile uint16_t x442 = 7404U;
	uint8_t x443 = 9U;
	int32_t x444 = INT32_MIN;
	volatile uint32_t t99 = 100U;

    t99 = (x441&(x442-(x443!=x444)));

    if (t99 != 7394U) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint64_t x446 = UINT64_MAX;
	int16_t x447 = 0;
	volatile int16_t x448 = 11902;

    t100 = (x445&(x446-(x447!=x448)));

    if (t100 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x450 = 57U;
	volatile uint64_t x452 = 80LLU;
	int32_t t101 = -2167491;

    t101 = (x449&(x450-(x451!=x452)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x453 = -4477;
	int16_t x454 = 0;
	volatile int64_t x455 = INT64_MIN;
	volatile int16_t x456 = INT16_MAX;
	int32_t t102 = -48965;

    t102 = (x453&(x454-(x455!=x456)));

    if (t102 != -4477) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x458 = -3885347780059267LL;
	int64_t x459 = -1LL;
	int8_t x460 = -1;
	uint64_t t103 = 665345139376632LLU;

    t103 = (x457&(x458-(x459!=x460)));

    if (t103 != 18442858725929492349LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x461 = UINT64_MAX;
	int32_t x462 = 7806;
	int32_t x464 = -20;
	volatile uint64_t t104 = 3530430435667582270LLU;

    t104 = (x461&(x462-(x463!=x464)));

    if (t104 != 7805LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x465 = -1;
	int8_t x467 = INT8_MIN;
	volatile int32_t t105 = -52257;

    t105 = (x465&(x466-(x467!=x468)));

    if (t105 != -32769) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x469 = -2309;
	uint64_t x470 = 48541710508LLU;
	int32_t x471 = -221529980;
	static int64_t x472 = -1LL;
	volatile uint64_t t106 = 11547154493801208LLU;

    t106 = (x469&(x470-(x471!=x472)));

    if (t106 != 48541708459LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x473 = -2;
	volatile int32_t x475 = 2959198;
	uint64_t x476 = UINT64_MAX;
	static int64_t t107 = -1LL;

    t107 = (x473&(x474-(x475!=x476)));

    if (t107 != 128252LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x478 = -1;
	int8_t x479 = -1;
	uint8_t x480 = 0U;
	int32_t t108 = -275;

    t108 = (x477&(x478-(x479!=x480)));

    if (t108 != 254) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x485 = INT64_MIN;
	volatile uint64_t x486 = UINT64_MAX;
	static volatile uint16_t x487 = 3636U;
	int32_t x488 = -1;
	uint64_t t109 = 3175422478056296072LLU;

    t109 = (x485&(x486-(x487!=x488)));

    if (t109 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x489 = UINT32_MAX;
	int16_t x490 = INT16_MIN;
	int32_t x491 = INT32_MAX;
	volatile int64_t x492 = INT64_MIN;
	volatile uint32_t t110 = 249U;

    t110 = (x489&(x490-(x491!=x492)));

    if (t110 != 4294934527U) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x493 = INT64_MIN;
	static volatile int8_t x494 = INT8_MAX;
	int32_t x496 = INT32_MAX;
	int64_t t111 = 7287LL;

    t111 = (x493&(x494-(x495!=x496)));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x497 = INT8_MIN;
	volatile int32_t x499 = -1;
	uint32_t x500 = 1U;

    t112 = (x497&(x498-(x499!=x500)));

    if (t112 != -128) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x501 = -3;
	int8_t x502 = INT8_MAX;
	uint8_t x503 = UINT8_MAX;
	int32_t t113 = -10488959;

    t113 = (x501&(x502-(x503!=x504)));

    if (t113 != 124) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x506 = INT16_MIN;
	static int64_t x507 = -1LL;
	static int64_t x508 = INT64_MAX;
	static volatile uint32_t t114 = 61407328U;

    t114 = (x505&(x506-(x507!=x508)));

    if (t114 != 4294934527U) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x510 = -3080095;
	static int8_t x511 = INT8_MIN;
	uint8_t x512 = 0U;

    t115 = (x509&(x510-(x511!=x512)));

    if (t115 != 96) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x514 = -1LL;
	volatile int64_t t116 = -360839790556006760LL;

    t116 = (x513&(x514-(x515!=x516)));

    if (t116 != -2147483648LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x517 = 23;
	int32_t x520 = -146717650;
	volatile uint64_t t117 = 13648926617723LLU;

    t117 = (x517&(x518-(x519!=x520)));

    if (t117 != 22LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x521 = INT16_MAX;
	int16_t x522 = INT16_MIN;
	uint32_t x523 = 63U;
	static uint16_t x524 = UINT16_MAX;
	int32_t t118 = -49;

    t118 = (x521&(x522-(x523!=x524)));

    if (t118 != 32767) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x525 = INT32_MIN;
	int64_t x526 = -9LL;
	int32_t x528 = 910624389;
	volatile int64_t t119 = 1862707593995688LL;

    t119 = (x525&(x526-(x527!=x528)));

    if (t119 != -2147483648LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x529 = UINT32_MAX;
	uint32_t x530 = UINT32_MAX;
	static int16_t x531 = -1;
	static uint32_t t120 = 6U;

    t120 = (x529&(x530-(x531!=x532)));

    if (t120 != 4294967294U) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x533 = -1;
	int64_t x534 = -1LL;
	int16_t x536 = -1;
	volatile int64_t t121 = 91LL;

    t121 = (x533&(x534-(x535!=x536)));

    if (t121 != -2LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x537 = 273U;
	uint16_t x538 = 263U;
	static int32_t x539 = INT32_MAX;
	static int16_t x540 = 419;

    t122 = (x537&(x538-(x539!=x540)));

    if (t122 != 256) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x541 = 294878932410105125LLU;
	int8_t x542 = -45;

    t123 = (x541&(x542-(x543!=x544)));

    if (t123 != 294878932410105088LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x549 = 0;
	static volatile int64_t x551 = -591100727953LL;

    t124 = (x549&(x550-(x551!=x552)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x553 = INT8_MIN;
	int16_t x554 = INT16_MAX;
	volatile uint16_t x556 = UINT16_MAX;
	volatile int32_t t125 = 4;

    t125 = (x553&(x554-(x555!=x556)));

    if (t125 != 32640) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x557 = 105U;
	int16_t x558 = -1;
	int16_t x559 = INT16_MIN;

    t126 = (x557&(x558-(x559!=x560)));

    if (t126 != 104) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x566 = INT16_MIN;
	static uint8_t x567 = 74U;
	uint64_t x568 = UINT64_MAX;
	static int64_t t127 = 1096782291447318664LL;

    t127 = (x565&(x566-(x567!=x568)));

    if (t127 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int64_t x569 = 9249994LL;
	int8_t x570 = -1;
	static volatile int16_t x571 = INT16_MIN;
	uint16_t x572 = UINT16_MAX;
	volatile int64_t t128 = -46242LL;

    t128 = (x569&(x570-(x571!=x572)));

    if (t128 != 9249994LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x577 = -1;
	volatile int32_t x579 = INT32_MAX;
	int8_t x580 = 24;
	static volatile int32_t t129 = -77;

    t129 = (x577&(x578-(x579!=x580)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x581 = 3546139133749993LLU;
	static int8_t x582 = -1;
	uint8_t x584 = 101U;
	volatile uint64_t t130 = 22387359392545LLU;

    t130 = (x581&(x582-(x583!=x584)));

    if (t130 != 3546139133749992LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x585 = -1;
	int8_t x587 = INT8_MIN;
	int32_t x588 = INT32_MIN;
	volatile int32_t t131 = 63028572;

    t131 = (x585&(x586-(x587!=x588)));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x589 = INT64_MIN;
	static int16_t x590 = INT16_MIN;
	int16_t x591 = INT16_MIN;
	volatile uint32_t x592 = 8U;
	static volatile int64_t t132 = INT64_MIN;

    t132 = (x589&(x590-(x591!=x592)));

    if (t132 != INT64_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x595 = INT32_MIN;

    t133 = (x593&(x594-(x595!=x596)));

    if (t133 != 58LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x605 = INT8_MIN;
	static int64_t x607 = INT64_MAX;
	static uint64_t t134 = 1LLU;

    t134 = (x605&(x606-(x607!=x608)));

    if (t134 != 1024LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x609 = -7810LL;
	static int16_t x610 = -47;
	int8_t x611 = INT8_MAX;
	static int64_t t135 = -1536989219813375LL;

    t135 = (x609&(x610-(x611!=x612)));

    if (t135 != -7856LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint64_t x613 = UINT64_MAX;
	uint8_t x614 = 25U;
	int16_t x615 = INT16_MAX;
	int8_t x616 = INT8_MIN;
	uint64_t t136 = 119996045096486LLU;

    t136 = (x613&(x614-(x615!=x616)));

    if (t136 != 24LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x617 = 70U;
	uint8_t x618 = 9U;
	int16_t x619 = -173;
	int16_t x620 = -6361;
	volatile int32_t t137 = -17728914;

    t137 = (x617&(x618-(x619!=x620)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x621 = INT16_MIN;
	volatile int8_t x622 = INT8_MIN;
	int64_t x623 = -1LL;
	static int32_t t138 = 108;

    t138 = (x621&(x622-(x623!=x624)));

    if (t138 != -32768) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x625 = 26U;
	volatile int16_t x626 = -1;
	int32_t x627 = -1;
	int32_t t139 = -280412761;

    t139 = (x625&(x626-(x627!=x628)));

    if (t139 != 26) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x629 = INT8_MIN;
	volatile int8_t x630 = INT8_MAX;
	int64_t x631 = INT64_MAX;
	volatile uint8_t x632 = 0U;
	int32_t t140 = 154565;

    t140 = (x629&(x630-(x631!=x632)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x634 = 0;
	volatile int32_t x635 = -156;
	int64_t x636 = 419467LL;
	volatile int64_t t141 = 0LL;

    t141 = (x633&(x634-(x635!=x636)));

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x637 = INT32_MIN;
	uint32_t x638 = 3637259U;
	int8_t x639 = 2;
	volatile uint32_t t142 = 28395727U;

    t142 = (x637&(x638-(x639!=x640)));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x641 = UINT64_MAX;
	static uint32_t x642 = UINT32_MAX;
	int8_t x644 = INT8_MAX;
	volatile uint64_t t143 = 3LLU;

    t143 = (x641&(x642-(x643!=x644)));

    if (t143 != 4294967294LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x649 = -217841222233LL;
	uint8_t x650 = 37U;
	static int16_t x652 = 3;

    t144 = (x649&(x650-(x651!=x652)));

    if (t144 != 36LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x653 = 0U;
	volatile uint8_t x654 = 1U;
	uint32_t x655 = 148U;
	int64_t x656 = -1LL;

    t145 = (x653&(x654-(x655!=x656)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x661 = INT8_MIN;
	uint8_t x662 = 47U;
	int64_t x663 = -1LL;
	static volatile int32_t x664 = 2842;
	volatile int32_t t146 = -102954;

    t146 = (x661&(x662-(x663!=x664)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x665 = -55LL;
	int16_t x666 = -1;
	int8_t x667 = 0;
	volatile uint32_t x668 = 2359U;
	int64_t t147 = 0LL;

    t147 = (x665&(x666-(x667!=x668)));

    if (t147 != -56LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x669 = INT64_MIN;
	int8_t x670 = -1;
	uint32_t x671 = 1540412U;

    t148 = (x669&(x670-(x671!=x672)));

    if (t148 != INT64_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x673 = INT32_MIN;
	uint32_t x674 = 1161161U;
	volatile int64_t x675 = -1LL;
	volatile int64_t x676 = INT64_MAX;
	volatile uint32_t t149 = 16838U;

    t149 = (x673&(x674-(x675!=x676)));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x677 = 27U;
	volatile int8_t x679 = -1;
	int8_t x680 = INT8_MIN;
	uint32_t t150 = 59879U;

    t150 = (x677&(x678-(x679!=x680)));

    if (t150 != 26U) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int32_t x681 = INT32_MAX;
	int16_t x682 = 3176;
	int64_t x683 = 247972222LL;
	int32_t t151 = 2628047;

    t151 = (x681&(x682-(x683!=x684)));

    if (t151 != 3175) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x686 = -1;
	int32_t x688 = -1;
	volatile int32_t t152 = 676460;

    t152 = (x685&(x686-(x687!=x688)));

    if (t152 != 2) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x693 = INT16_MAX;
	uint16_t x694 = UINT16_MAX;
	uint8_t x695 = UINT8_MAX;
	int32_t x696 = -1;
	int32_t t153 = -349529961;

    t153 = (x693&(x694-(x695!=x696)));

    if (t153 != 32766) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x699 = -1;
	volatile int8_t x700 = -1;

    t154 = (x697&(x698-(x699!=x700)));

    if (t154 != 22583050184LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x705 = 54722940U;
	static uint64_t x706 = UINT64_MAX;
	int32_t x707 = -15;
	static int8_t x708 = 60;

    t155 = (x705&(x706-(x707!=x708)));

    if (t155 != 54722940LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x709 = UINT32_MAX;
	volatile int16_t x711 = -1;
	volatile uint32_t t156 = 155267U;

    t156 = (x709&(x710-(x711!=x712)));

    if (t156 != 179U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x714 = INT16_MIN;
	int16_t x716 = -1;
	volatile int64_t t157 = INT64_MIN;

    t157 = (x713&(x714-(x715!=x716)));

    if (t157 != INT64_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x717 = 6U;
	int8_t x718 = INT8_MAX;
	uint8_t x719 = UINT8_MAX;
	uint16_t x720 = 1U;
	int32_t t158 = -269;

    t158 = (x717&(x718-(x719!=x720)));

    if (t158 != 6) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x721 = UINT16_MAX;
	int8_t x722 = INT8_MIN;
	int64_t x723 = 3615LL;
	static int32_t t159 = -19;

    t159 = (x721&(x722-(x723!=x724)));

    if (t159 != 65407) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x725 = -46446LL;
	volatile int8_t x726 = -1;
	int8_t x727 = -1;
	static volatile int16_t x728 = -1;
	volatile int64_t t160 = -1LL;

    t160 = (x725&(x726-(x727!=x728)));

    if (t160 != -46446LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x729 = UINT64_MAX;
	int8_t x730 = -1;
	int32_t x731 = INT32_MAX;
	int64_t x732 = INT64_MAX;
	uint64_t t161 = 61010222971LLU;

    t161 = (x729&(x730-(x731!=x732)));

    if (t161 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x733 = INT8_MIN;
	volatile uint8_t x734 = 15U;
	uint64_t x735 = 2160175550980LLU;
	int64_t x736 = INT64_MIN;
	static int32_t t162 = 85;

    t162 = (x733&(x734-(x735!=x736)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x737 = 4272059454LLU;
	volatile int16_t x739 = INT16_MIN;
	int64_t x740 = -1958382033546LL;
	uint64_t t163 = 6796692LLU;

    t163 = (x737&(x738-(x739!=x740)));

    if (t163 != 2124575806LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x742 = UINT16_MAX;
	static uint8_t x743 = 0U;
	int8_t x744 = 27;
	int32_t t164 = -1;

    t164 = (x741&(x742-(x743!=x744)));

    if (t164 != 65036) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x745 = 1987588LL;
	int16_t x747 = -1;
	int32_t x748 = INT32_MAX;

    t165 = (x745&(x746-(x747!=x748)));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x750 = INT32_MAX;
	volatile int8_t x751 = INT8_MAX;
	volatile int64_t t166 = -2292197LL;

    t166 = (x749&(x750-(x751!=x752)));

    if (t166 != 2147483632LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x753 = 32;
	int64_t x754 = INT64_MAX;
	int32_t x755 = INT32_MIN;
	static int32_t x756 = INT32_MIN;
	volatile int64_t t167 = -11890656272634LL;

    t167 = (x753&(x754-(x755!=x756)));

    if (t167 != 32LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x757 = INT32_MAX;
	uint8_t x758 = 4U;
	int32_t x759 = -160465535;
	int32_t t168 = 1;

    t168 = (x757&(x758-(x759!=x760)));

    if (t168 != 3) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x765 = 12;
	int8_t x766 = INT8_MIN;
	int64_t x768 = -1LL;

    t169 = (x765&(x766-(x767!=x768)));

    if (t169 != 12) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x769 = INT64_MAX;
	int64_t x770 = -1LL;
	int64_t x771 = -3839LL;
	static int8_t x772 = 0;
	volatile int64_t t170 = 1LL;

    t170 = (x769&(x770-(x771!=x772)));

    if (t170 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x773 = 13864;
	int8_t x774 = INT8_MAX;
	int8_t x775 = INT8_MIN;
	int8_t x776 = INT8_MIN;
	int32_t t171 = 111;

    t171 = (x773&(x774-(x775!=x776)));

    if (t171 != 40) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x778 = 965808U;
	int32_t x779 = -1;
	uint32_t x780 = 10509652U;
	volatile uint32_t t172 = 1981466216U;

    t172 = (x777&(x778-(x779!=x780)));

    if (t172 != 175U) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x781 = INT16_MIN;
	int64_t x782 = -97LL;
	static int64_t x784 = INT64_MIN;

    t173 = (x781&(x782-(x783!=x784)));

    if (t173 != -32768LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x785 = UINT16_MAX;
	volatile uint32_t x786 = 232019709U;
	int8_t x787 = INT8_MIN;
	int64_t x788 = 5557LL;
	uint32_t t174 = 64U;

    t174 = (x785&(x786-(x787!=x788)));

    if (t174 != 22268U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x789 = INT16_MIN;
	int32_t x790 = 6151891;
	int16_t x791 = INT16_MIN;
	static uint64_t x792 = 41705430LLU;
	int32_t t175 = 2724;

    t175 = (x789&(x790-(x791!=x792)));

    if (t175 != 6127616) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x793 = INT64_MIN;
	uint32_t x794 = 8214U;
	volatile int16_t x795 = -1;
	int64_t x796 = INT64_MAX;
	volatile int64_t t176 = 31988813LL;

    t176 = (x793&(x794-(x795!=x796)));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x797 = 11U;
	static uint64_t x798 = 364886LLU;
	volatile int8_t x799 = INT8_MIN;
	uint8_t x800 = 3U;
	uint64_t t177 = 4029577118537521094LLU;

    t177 = (x797&(x798-(x799!=x800)));

    if (t177 != 1LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x801 = 11U;
	int32_t x802 = -622046;
	volatile int16_t x803 = INT16_MIN;
	int8_t x804 = INT8_MAX;
	int32_t t178 = 2067;

    t178 = (x801&(x802-(x803!=x804)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x805 = -1LL;
	uint32_t x807 = UINT32_MAX;
	int64_t t179 = -13019833368LL;

    t179 = (x805&(x806-(x807!=x808)));

    if (t179 != 5LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x809 = INT32_MIN;
	int8_t x810 = -1;
	uint8_t x811 = 5U;
	uint64_t x812 = 1072029863887LLU;
	int32_t t180 = INT32_MIN;

    t180 = (x809&(x810-(x811!=x812)));

    if (t180 != INT32_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x813 = 251U;
	int16_t x814 = INT16_MIN;
	int64_t x815 = INT64_MAX;
	int32_t x816 = 3464;
	static int32_t t181 = -12831;

    t181 = (x813&(x814-(x815!=x816)));

    if (t181 != 251) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int32_t x817 = INT32_MAX;
	int16_t x818 = -1;
	volatile uint32_t x819 = 3149336U;
	uint16_t x820 = 9875U;
	int32_t t182 = -898183697;

    t182 = (x817&(x818-(x819!=x820)));

    if (t182 != 2147483646) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x821 = -2;
	volatile int16_t x822 = INT16_MIN;
	int16_t x823 = -372;
	static uint16_t x824 = UINT16_MAX;
	static volatile int32_t t183 = -999;

    t183 = (x821&(x822-(x823!=x824)));

    if (t183 != -32770) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x825 = -1;
	int8_t x826 = INT8_MIN;
	volatile int8_t x827 = INT8_MIN;
	static int16_t x828 = -2;

    t184 = (x825&(x826-(x827!=x828)));

    if (t184 != -129) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x829 = INT32_MAX;
	int16_t x830 = INT16_MAX;
	uint16_t x831 = 1U;
	uint64_t x832 = 23766545644392LLU;
	static volatile int32_t t185 = -539452495;

    t185 = (x829&(x830-(x831!=x832)));

    if (t185 != 32766) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x833 = 57U;
	static int8_t x835 = -1;
	uint64_t x836 = UINT64_MAX;

    t186 = (x833&(x834-(x835!=x836)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x837 = -1LL;
	uint64_t x838 = 1168436575LLU;
	int32_t x839 = INT32_MIN;
	int32_t x840 = -377227350;
	static uint64_t t187 = 76245192554343844LLU;

    t187 = (x837&(x838-(x839!=x840)));

    if (t187 != 1168436574LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t t188 = 27U;

    t188 = (x841&(x842-(x843!=x844)));

    if (t188 != 57532U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x845 = UINT16_MAX;
	uint64_t x846 = 112889959131LLU;
	static int16_t x847 = INT16_MAX;
	int64_t x848 = INT64_MIN;
	volatile uint64_t t189 = 51633595485172LLU;

    t189 = (x845&(x846-(x847!=x848)));

    if (t189 != 4826LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x849 = -27085543;
	static uint64_t x850 = UINT64_MAX;
	uint32_t x851 = UINT32_MAX;
	uint32_t x852 = 804985521U;
	uint64_t t190 = 261544LLU;

    t190 = (x849&(x850-(x851!=x852)));

    if (t190 != 18446744073682466072LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x854 = 13068849U;
	static int32_t x855 = -28941;

    t191 = (x853&(x854-(x855!=x856)));

    if (t191 != 13068800U) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint8_t x857 = 1U;
	int8_t x859 = INT8_MAX;
	int16_t x860 = INT16_MIN;
	int32_t t192 = 258541;

    t192 = (x857&(x858-(x859!=x860)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x861 = 1;
	uint16_t x862 = 8792U;
	volatile uint16_t x863 = UINT16_MAX;
	int64_t x864 = -1451377699365103791LL;

    t193 = (x861&(x862-(x863!=x864)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x866 = 1U;
	int8_t x868 = -1;

    t194 = (x865&(x866-(x867!=x868)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x870 = INT32_MAX;
	int16_t x871 = INT16_MAX;
	int16_t x872 = -1;
	int64_t t195 = -7682LL;

    t195 = (x869&(x870-(x871!=x872)));

    if (t195 != 2147483646LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x873 = INT32_MIN;
	int32_t x874 = 7027406;
	static int64_t x875 = INT64_MAX;
	uint32_t x876 = UINT32_MAX;
	static volatile int32_t t196 = -12453910;

    t196 = (x873&(x874-(x875!=x876)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x881 = 339628848LLU;
	int64_t x883 = INT64_MAX;
	volatile uint64_t t197 = 149436LLU;

    t197 = (x881&(x882-(x883!=x884)));

    if (t197 != 339624752LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x885 = INT16_MIN;
	int32_t x886 = INT32_MAX;
	int16_t x887 = -14;
	int32_t t198 = -367111142;

    t198 = (x885&(x886-(x887!=x888)));

    if (t198 != 2147450880) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x889 = INT8_MIN;
	uint16_t x890 = 23U;
	volatile int16_t x892 = -1;
	volatile int32_t t199 = 132;

    t199 = (x889&(x890-(x891!=x892)));

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


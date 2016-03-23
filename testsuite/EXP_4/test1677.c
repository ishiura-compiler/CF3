
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

static volatile int8_t x10 = -43;
uint64_t x22 = 12299711078768LLU;
static volatile uint32_t x23 = UINT32_MAX;
volatile uint32_t t1 = 285398U;
int8_t x26 = INT8_MIN;
uint8_t x30 = 53U;
volatile uint32_t t5 = UINT32_MAX;
uint16_t x65 = 241U;
volatile int32_t t7 = 2624505;
uint8_t x100 = UINT8_MAX;
int32_t t13 = -6449040;
int32_t x114 = INT32_MIN;
int32_t t16 = -14741;
int32_t x140 = -85131683;
volatile uint64_t t18 = 65162195LLU;
static volatile int32_t x150 = INT32_MAX;
int32_t x152 = -1;
int64_t x154 = INT64_MIN;
int16_t x159 = INT16_MAX;
uint32_t x167 = 1U;
volatile int16_t x177 = INT16_MAX;
uint16_t x197 = UINT16_MAX;
static uint32_t x205 = UINT32_MAX;
uint8_t x213 = 41U;
uint32_t x223 = 54U;
int64_t x244 = INT64_MAX;
volatile int32_t t30 = -52548957;
volatile int8_t x250 = -1;
uint32_t x254 = UINT32_MAX;
volatile uint32_t x271 = 117711U;
int64_t x273 = INT64_MAX;
int16_t x276 = INT16_MIN;
uint32_t x277 = UINT32_MAX;
int16_t x283 = 1;
volatile int8_t x284 = INT8_MAX;
int64_t x287 = -1LL;
static int64_t x292 = INT64_MAX;
int16_t x300 = INT16_MIN;
uint8_t x314 = UINT8_MAX;
static int64_t x336 = -15683LL;
uint64_t x360 = 29LLU;
uint64_t x363 = 27399605484470LLU;
volatile uint64_t t44 = 2435891749348LLU;
int32_t x366 = -1;
volatile uint64_t t46 = 13LLU;
static int32_t t48 = 220469;
static int64_t x417 = INT64_MAX;
static int32_t t52 = 7609;
uint32_t x438 = 9528605U;
int64_t x439 = -1LL;
uint16_t x445 = 3876U;
int8_t x448 = INT8_MIN;
volatile int32_t t54 = 0;
static volatile uint8_t x469 = UINT8_MAX;
uint32_t x470 = 2U;
uint64_t x490 = UINT64_MAX;
static int8_t x491 = 24;
int16_t x492 = INT16_MAX;
uint64_t x493 = 2389LLU;
volatile uint32_t x517 = UINT32_MAX;
uint8_t x540 = 11U;
int32_t t63 = 13;
uint64_t t65 = 2605969LLU;
int32_t x550 = 196;
volatile uint64_t x569 = 4177780525041464006LLU;
volatile int32_t t69 = 361551;
uint32_t t71 = 14374753U;
uint64_t x587 = 251076298837934138LLU;
int64_t x605 = 718720724081LL;
uint32_t x611 = 679U;
volatile uint32_t t76 = 29151693U;
uint32_t x619 = UINT32_MAX;
int32_t t77 = -137510;
uint64_t x631 = 213258547177896LLU;
int16_t x668 = 2;
int8_t x683 = 0;
static int8_t x684 = INT8_MIN;
uint16_t x693 = 1U;
volatile uint16_t x701 = UINT16_MAX;
static int16_t x702 = -1;
int16_t x704 = -2189;
uint16_t x708 = 2049U;
volatile int32_t t87 = 80;
static uint8_t x725 = 0U;
volatile int32_t x726 = -984913051;
int8_t x727 = INT8_MIN;
int8_t x729 = 1;
int32_t x731 = -1;
static uint64_t x736 = UINT64_MAX;
volatile int64_t x740 = -1LL;
uint16_t x791 = UINT16_MAX;
uint8_t x797 = 13U;
volatile int32_t t96 = 93452;
volatile int8_t x807 = 5;
int8_t x808 = -1;
int32_t x825 = 873937490;
static uint64_t t101 = 3575466541106877LLU;
uint16_t x841 = 32156U;
volatile int64_t x842 = 396192807858LL;
int32_t t103 = -15710;
volatile int32_t x864 = 2023847;
int8_t x870 = INT8_MAX;
uint16_t x872 = UINT16_MAX;
int64_t x897 = 196433824489LL;
int16_t x905 = 346;
uint64_t x910 = 191609293LLU;
uint64_t x934 = 62686LLU;
uint16_t x949 = 1U;
int16_t x951 = INT16_MIN;
volatile int32_t t111 = 4;
volatile int8_t x958 = INT8_MAX;
uint8_t x959 = UINT8_MAX;
int8_t x960 = -1;
volatile int64_t x964 = 945LL;
static uint16_t x965 = 19U;
int32_t t114 = -171;
static int32_t x980 = INT32_MIN;
static int32_t t116 = -2360;
uint32_t t117 = UINT32_MAX;
int32_t x997 = INT32_MAX;
int64_t x1000 = INT64_MIN;
static int8_t x1001 = INT8_MAX;
int32_t x1003 = -1;
volatile uint16_t x1011 = 0U;
static int32_t x1014 = -227291;
int64_t x1019 = INT64_MIN;
volatile int16_t x1046 = INT16_MAX;
uint64_t x1048 = 32962208LLU;
int64_t t126 = INT64_MAX;
static int8_t x1070 = INT8_MIN;
int32_t x1089 = 1;
int16_t x1091 = -1;
static int16_t x1092 = 108;
int16_t x1099 = 3;
int64_t x1100 = -1LL;
volatile uint64_t t130 = 7647LLU;
static uint32_t x1109 = UINT32_MAX;
int64_t x1122 = -18264880059LL;
int64_t x1135 = -525142400513LL;
static int64_t x1136 = INT64_MIN;
volatile int64_t x1144 = -1LL;
volatile int32_t t137 = 297;
uint32_t t138 = UINT32_MAX;
int64_t x1154 = INT64_MIN;
int64_t x1155 = INT64_MAX;
int32_t x1179 = INT32_MAX;
static volatile int8_t x1184 = INT8_MIN;
static int32_t x1185 = INT32_MAX;
int32_t x1188 = 6611;
volatile int32_t t144 = INT32_MAX;
volatile int64_t x1194 = -1LL;
int8_t x1202 = -1;
int32_t t146 = 5126890;
static int8_t x1213 = INT8_MAX;
uint32_t x1238 = 268386781U;
int16_t x1251 = INT16_MAX;
volatile int32_t t153 = -3823;
uint8_t x1272 = 93U;
uint32_t x1273 = 1033888U;
uint16_t x1276 = UINT16_MAX;
int64_t x1284 = INT64_MIN;
uint8_t x1286 = 0U;
static int16_t x1288 = -1;
volatile int32_t t159 = 7876;
int32_t x1310 = INT32_MIN;
volatile uint32_t x1312 = 1345U;
uint64_t x1328 = 10222492245225LLU;
volatile int64_t t164 = INT64_MAX;
int8_t x1341 = 0;
volatile int16_t x1345 = INT16_MAX;
volatile uint32_t x1347 = UINT32_MAX;
volatile int32_t t166 = 289162806;
volatile uint8_t x1376 = UINT8_MAX;
int64_t x1378 = INT64_MIN;
static int64_t x1380 = 9195316620187LL;
int16_t x1382 = -1;
volatile uint64_t t172 = 4LLU;
int8_t x1391 = INT8_MIN;
int32_t t174 = 2;
static volatile uint8_t x1408 = 0U;
volatile uint64_t t175 = 3984539597LLU;
static uint8_t x1413 = 7U;
volatile int64_t x1415 = -1LL;
volatile int8_t x1419 = -1;
volatile int64_t t178 = 413553LL;
int32_t t179 = INT32_MAX;
int16_t x1426 = -1;
int8_t x1438 = -1;
uint8_t x1452 = 114U;
static volatile int16_t x1460 = -1;
int64_t x1462 = INT64_MIN;
static uint8_t x1489 = 1U;
uint16_t x1500 = UINT16_MAX;
int32_t x1525 = 3;
int32_t t190 = 189077;
volatile int32_t t191 = -975;
uint64_t x1539 = 2011567693LLU;
int32_t x1554 = INT32_MAX;
int32_t t194 = 684397542;
uint16_t x1561 = 7U;
uint16_t x1563 = 3321U;
int8_t x1578 = INT8_MAX;
volatile int64_t t196 = INT64_MAX;
static int32_t t197 = -640;


void f0(void) {
    	uint64_t x9 = 68264648LLU;
	int32_t x11 = INT32_MIN;
	int8_t x12 = -33;
	uint64_t t0 = 3676150242700579120LLU;

    t0 = (x9>>(x10==(x11>x12)));

    if (t0 != 68264648LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x21 = 3301556U;
	uint32_t x24 = 30913682U;

    t1 = (x21>>(x22==(x23>x24)));

    if (t1 != 3301556U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x25 = 7076;
	uint16_t x27 = 14U;
	uint64_t x28 = 2224LLU;
	static int32_t t2 = -5548;

    t2 = (x25>>(x26==(x27>x28)));

    if (t2 != 7076) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x29 = 3;
	int16_t x31 = -1;
	int16_t x32 = INT16_MIN;
	volatile int32_t t3 = 8303747;

    t3 = (x29>>(x30==(x31>x32)));

    if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x53 = 1340LLU;
	int32_t x54 = -1;
	uint64_t x55 = UINT64_MAX;
	uint32_t x56 = UINT32_MAX;
	volatile uint64_t t4 = 7LLU;

    t4 = (x53>>(x54==(x55>x56)));

    if (t4 != 1340LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x57 = UINT32_MAX;
	uint32_t x58 = UINT32_MAX;
	uint64_t x59 = UINT64_MAX;
	uint8_t x60 = 2U;

    t5 = (x57>>(x58==(x59>x60)));

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint16_t x66 = UINT16_MAX;
	int32_t x67 = -952435;
	int8_t x68 = INT8_MIN;
	volatile int32_t t6 = 40;

    t6 = (x65>>(x66==(x67>x68)));

    if (t6 != 241) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x69 = UINT8_MAX;
	int32_t x70 = -1;
	int16_t x71 = INT16_MAX;
	int8_t x72 = -1;

    t7 = (x69>>(x70==(x71>x72)));

    if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x77 = UINT16_MAX;
	volatile int32_t x78 = INT32_MAX;
	int64_t x79 = INT64_MAX;
	volatile int32_t x80 = -1;
	static int32_t t8 = -1396258;

    t8 = (x77>>(x78==(x79>x80)));

    if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x81 = UINT32_MAX;
	uint8_t x82 = 18U;
	volatile int16_t x83 = -4373;
	int64_t x84 = -2437LL;
	volatile uint32_t t9 = UINT32_MAX;

    t9 = (x81>>(x82==(x83>x84)));

    if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int32_t x85 = INT32_MAX;
	volatile int64_t x86 = INT64_MIN;
	int64_t x87 = INT64_MIN;
	static int16_t x88 = INT16_MIN;
	static int32_t t10 = INT32_MAX;

    t10 = (x85>>(x86==(x87>x88)));

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x97 = 7360U;
	int8_t x98 = INT8_MIN;
	volatile uint32_t x99 = 10U;
	int32_t t11 = 24354931;

    t11 = (x97>>(x98==(x99>x100)));

    if (t11 != 7360) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x101 = UINT64_MAX;
	uint8_t x102 = 0U;
	int8_t x103 = -31;
	static int16_t x104 = -1;
	static uint64_t t12 = 33385330978440686LLU;

    t12 = (x101>>(x102==(x103>x104)));

    if (t12 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x109 = UINT8_MAX;
	uint8_t x110 = 3U;
	static int32_t x111 = 13095;
	uint64_t x112 = 43598705793425LLU;

    t13 = (x109>>(x110==(x111>x112)));

    if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x113 = INT64_MAX;
	static uint16_t x115 = 14046U;
	volatile int8_t x116 = INT8_MAX;
	int64_t t14 = INT64_MAX;

    t14 = (x113>>(x114==(x115>x116)));

    if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x117 = 15695U;
	int64_t x118 = INT64_MIN;
	uint8_t x119 = 3U;
	static int16_t x120 = INT16_MIN;
	uint32_t t15 = 738U;

    t15 = (x117>>(x118==(x119>x120)));

    if (t15 != 15695U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x125 = UINT16_MAX;
	int32_t x126 = INT32_MAX;
	static int16_t x127 = -121;
	int16_t x128 = INT16_MAX;

    t16 = (x125>>(x126==(x127>x128)));

    if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x129 = 0U;
	uint8_t x130 = UINT8_MAX;
	int64_t x131 = -49LL;
	uint64_t x132 = UINT64_MAX;
	volatile int32_t t17 = -529278;

    t17 = (x129>>(x130==(x131>x132)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x137 = 6454533434857LLU;
	int16_t x138 = INT16_MAX;
	int32_t x139 = INT32_MIN;

    t18 = (x137>>(x138==(x139>x140)));

    if (t18 != 6454533434857LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x141 = 3917658529158069335LL;
	int64_t x142 = INT64_MIN;
	int64_t x143 = -136676123LL;
	volatile uint32_t x144 = UINT32_MAX;
	volatile int64_t t19 = 313678807199LL;

    t19 = (x141>>(x142==(x143>x144)));

    if (t19 != 3917658529158069335LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x149 = UINT16_MAX;
	int16_t x151 = -1;
	static volatile int32_t t20 = -3383860;

    t20 = (x149>>(x150==(x151>x152)));

    if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x153 = UINT32_MAX;
	int64_t x155 = -1LL;
	int8_t x156 = INT8_MIN;
	volatile uint32_t t21 = UINT32_MAX;

    t21 = (x153>>(x154==(x155>x156)));

    if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x157 = 0;
	uint32_t x158 = UINT32_MAX;
	int8_t x160 = INT8_MIN;
	volatile int32_t t22 = -27299742;

    t22 = (x157>>(x158==(x159>x160)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x165 = INT8_MAX;
	int32_t x166 = -1;
	int32_t x168 = 21287157;
	int32_t t23 = 18321;

    t23 = (x165>>(x166==(x167>x168)));

    if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x178 = INT32_MAX;
	uint8_t x179 = 4U;
	int64_t x180 = INT64_MIN;
	static volatile int32_t t24 = 0;

    t24 = (x177>>(x178==(x179>x180)));

    if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x185 = 1;
	int16_t x186 = INT16_MIN;
	int64_t x187 = INT64_MAX;
	int8_t x188 = INT8_MIN;
	volatile int32_t t25 = -252;

    t25 = (x185>>(x186==(x187>x188)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x198 = -1;
	int64_t x199 = 10280421514339LL;
	int32_t x200 = INT32_MAX;
	volatile int32_t t26 = -250791699;

    t26 = (x197>>(x198==(x199>x200)));

    if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x206 = -1;
	static int64_t x207 = INT64_MIN;
	int8_t x208 = 0;
	volatile uint32_t t27 = UINT32_MAX;

    t27 = (x205>>(x206==(x207>x208)));

    if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x214 = INT8_MIN;
	int32_t x215 = INT32_MIN;
	int32_t x216 = 0;
	volatile int32_t t28 = 322330997;

    t28 = (x213>>(x214==(x215>x216)));

    if (t28 != 41) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x221 = INT64_MAX;
	uint32_t x222 = 180894101U;
	volatile int16_t x224 = INT16_MIN;
	volatile int64_t t29 = INT64_MAX;

    t29 = (x221>>(x222==(x223>x224)));

    if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x241 = UINT8_MAX;
	int32_t x242 = INT32_MAX;
	int16_t x243 = INT16_MIN;

    t30 = (x241>>(x242==(x243>x244)));

    if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x249 = 3U;
	uint16_t x251 = 88U;
	int32_t x252 = INT32_MIN;
	int32_t t31 = 34048;

    t31 = (x249>>(x250==(x251>x252)));

    if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x253 = 1566926;
	uint64_t x255 = 265079690582241LLU;
	int32_t x256 = -1;
	int32_t t32 = -430779842;

    t32 = (x253>>(x254==(x255>x256)));

    if (t32 != 1566926) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x269 = 389980799156LLU;
	static int64_t x270 = 1254149755640621LL;
	uint64_t x272 = 11213494505LLU;
	volatile uint64_t t33 = 13212LLU;

    t33 = (x269>>(x270==(x271>x272)));

    if (t33 != 389980799156LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x274 = INT64_MIN;
	static int64_t x275 = INT64_MIN;
	int64_t t34 = INT64_MAX;

    t34 = (x273>>(x274==(x275>x276)));

    if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x278 = UINT64_MAX;
	uint16_t x279 = 23958U;
	int64_t x280 = 512007580LL;
	static uint32_t t35 = UINT32_MAX;

    t35 = (x277>>(x278==(x279>x280)));

    if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x281 = 15U;
	int8_t x282 = -1;
	uint32_t t36 = 24458301U;

    t36 = (x281>>(x282==(x283>x284)));

    if (t36 != 15U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x285 = 23U;
	volatile int16_t x286 = 66;
	volatile uint8_t x288 = UINT8_MAX;
	int32_t t37 = 8167069;

    t37 = (x285>>(x286==(x287>x288)));

    if (t37 != 23) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x289 = 16979U;
	int32_t x290 = INT32_MIN;
	uint8_t x291 = UINT8_MAX;
	volatile int32_t t38 = -4037363;

    t38 = (x289>>(x290==(x291>x292)));

    if (t38 != 16979) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x297 = 31U;
	volatile uint16_t x298 = UINT16_MAX;
	volatile int64_t x299 = 50373805572091LL;
	volatile int32_t t39 = 128871433;

    t39 = (x297>>(x298==(x299>x300)));

    if (t39 != 31) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x313 = 394;
	uint8_t x315 = 3U;
	uint32_t x316 = 45472758U;
	volatile int32_t t40 = -1;

    t40 = (x313>>(x314==(x315>x316)));

    if (t40 != 394) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x321 = 376652113812LLU;
	static uint32_t x322 = 83U;
	volatile uint8_t x323 = 19U;
	int64_t x324 = INT64_MIN;
	uint64_t t41 = 15757055LLU;

    t41 = (x321>>(x322==(x323>x324)));

    if (t41 != 376652113812LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x333 = 11U;
	uint8_t x334 = UINT8_MAX;
	static uint8_t x335 = 8U;
	volatile int32_t t42 = 1556509;

    t42 = (x333>>(x334==(x335>x336)));

    if (t42 != 11) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x357 = 4;
	int32_t x358 = INT32_MIN;
	static int32_t x359 = INT32_MIN;
	int32_t t43 = -10643;

    t43 = (x357>>(x358==(x359>x360)));

    if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x361 = 95916816664728337LLU;
	int16_t x362 = INT16_MIN;
	uint64_t x364 = 28331599052258LLU;

    t44 = (x361>>(x362==(x363>x364)));

    if (t44 != 95916816664728337LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x365 = INT16_MAX;
	volatile int8_t x367 = -3;
	static int64_t x368 = INT64_MIN;
	volatile int32_t t45 = 55;

    t45 = (x365>>(x366==(x367>x368)));

    if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x373 = 2654168288LLU;
	int32_t x374 = -65529;
	static volatile int16_t x375 = INT16_MIN;
	uint64_t x376 = 140392599293LLU;

    t46 = (x373>>(x374==(x375>x376)));

    if (t46 != 2654168288LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x381 = UINT16_MAX;
	int32_t x382 = -1;
	volatile int64_t x383 = INT64_MIN;
	uint16_t x384 = 58U;
	int32_t t47 = -675;

    t47 = (x381>>(x382==(x383>x384)));

    if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x393 = 1U;
	int32_t x394 = -374655;
	int8_t x395 = INT8_MIN;
	volatile int8_t x396 = -3;

    t48 = (x393>>(x394==(x395>x396)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x397 = UINT32_MAX;
	int16_t x398 = 0;
	uint16_t x399 = 2U;
	uint64_t x400 = 1108842381071LLU;
	uint32_t t49 = 2U;

    t49 = (x397>>(x398==(x399>x400)));

    if (t49 != 2147483647U) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x418 = -24111955;
	int8_t x419 = INT8_MIN;
	uint16_t x420 = UINT16_MAX;
	volatile int64_t t50 = INT64_MAX;

    t50 = (x417>>(x418==(x419>x420)));

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x425 = UINT32_MAX;
	volatile uint8_t x426 = 34U;
	static volatile int32_t x427 = 40;
	int64_t x428 = -450849LL;
	uint32_t t51 = UINT32_MAX;

    t51 = (x425>>(x426==(x427>x428)));

    if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x433 = 7U;
	static volatile int32_t x434 = INT32_MIN;
	static uint16_t x435 = 150U;
	uint32_t x436 = UINT32_MAX;

    t52 = (x433>>(x434==(x435>x436)));

    if (t52 != 7) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x437 = 1415836U;
	int8_t x440 = INT8_MIN;
	static volatile uint32_t t53 = 8444123U;

    t53 = (x437>>(x438==(x439>x440)));

    if (t53 != 1415836U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x446 = INT16_MAX;
	static int16_t x447 = 196;

    t54 = (x445>>(x446==(x447>x448)));

    if (t54 != 3876) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x449 = 3U;
	volatile uint64_t x450 = 833LLU;
	uint64_t x451 = UINT64_MAX;
	int16_t x452 = -1;
	volatile int32_t t55 = 235338;

    t55 = (x449>>(x450==(x451>x452)));

    if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x471 = UINT16_MAX;
	volatile uint16_t x472 = UINT16_MAX;
	static int32_t t56 = 19;

    t56 = (x469>>(x470==(x471>x472)));

    if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x489 = 65846522LLU;
	uint64_t t57 = 594187870369LLU;

    t57 = (x489>>(x490==(x491>x492)));

    if (t57 != 65846522LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x494 = -1LL;
	uint32_t x495 = UINT32_MAX;
	int64_t x496 = INT64_MIN;
	volatile uint64_t t58 = 72913394079015487LLU;

    t58 = (x493>>(x494==(x495>x496)));

    if (t58 != 2389LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x505 = INT16_MAX;
	int16_t x506 = -1;
	uint8_t x507 = 60U;
	int16_t x508 = -281;
	static volatile int32_t t59 = 2546;

    t59 = (x505>>(x506==(x507>x508)));

    if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x513 = UINT8_MAX;
	volatile int8_t x514 = INT8_MIN;
	uint32_t x515 = 463436260U;
	int32_t x516 = INT32_MAX;
	volatile int32_t t60 = 0;

    t60 = (x513>>(x514==(x515>x516)));

    if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x518 = 9979664LLU;
	int64_t x519 = INT64_MIN;
	volatile uint32_t x520 = 307U;
	static volatile uint32_t t61 = UINT32_MAX;

    t61 = (x517>>(x518==(x519>x520)));

    if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x521 = 148389421U;
	volatile uint32_t x522 = 5758U;
	int32_t x523 = -2;
	static int8_t x524 = 0;
	volatile uint32_t t62 = 188333312U;

    t62 = (x521>>(x522==(x523>x524)));

    if (t62 != 148389421U) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x537 = 6;
	int8_t x538 = -5;
	volatile uint16_t x539 = 19U;

    t63 = (x537>>(x538==(x539>x540)));

    if (t63 != 6) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x541 = 15280U;
	int8_t x542 = INT8_MAX;
	volatile uint32_t x543 = 27755U;
	volatile int8_t x544 = INT8_MIN;
	uint32_t t64 = 0U;

    t64 = (x541>>(x542==(x543>x544)));

    if (t64 != 15280U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x545 = 13185757LLU;
	uint64_t x546 = UINT64_MAX;
	uint64_t x547 = 30819LLU;
	static int16_t x548 = -841;

    t65 = (x545>>(x546==(x547>x548)));

    if (t65 != 13185757LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x549 = INT64_MAX;
	static int64_t x551 = INT64_MAX;
	uint32_t x552 = 1561499U;
	static volatile int64_t t66 = INT64_MAX;

    t66 = (x549>>(x550==(x551>x552)));

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x561 = 16;
	static int32_t x562 = -1;
	int16_t x563 = -1;
	int32_t x564 = -110;
	int32_t t67 = -30;

    t67 = (x561>>(x562==(x563>x564)));

    if (t67 != 16) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x570 = 29U;
	static int64_t x571 = -1LL;
	static uint8_t x572 = 1U;
	volatile uint64_t t68 = 639783395361LLU;

    t68 = (x569>>(x570==(x571>x572)));

    if (t68 != 4177780525041464006LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x573 = 10453799;
	int8_t x574 = 27;
	static int64_t x575 = INT64_MAX;
	int8_t x576 = 1;

    t69 = (x573>>(x574==(x575>x576)));

    if (t69 != 10453799) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x577 = INT32_MAX;
	int64_t x578 = -1LL;
	uint16_t x579 = 52U;
	uint8_t x580 = 15U;
	volatile int32_t t70 = INT32_MAX;

    t70 = (x577>>(x578==(x579>x580)));

    if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x581 = 6016U;
	volatile uint64_t x582 = 294122021LLU;
	uint16_t x583 = 6256U;
	int32_t x584 = 1;

    t71 = (x581>>(x582==(x583>x584)));

    if (t71 != 6016U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x585 = 0U;
	volatile int16_t x586 = -1;
	static int8_t x588 = 1;
	volatile int32_t t72 = -26232;

    t72 = (x585>>(x586==(x587>x588)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x601 = 22;
	int8_t x602 = 15;
	uint8_t x603 = UINT8_MAX;
	static uint8_t x604 = UINT8_MAX;
	volatile int32_t t73 = -130;

    t73 = (x601>>(x602==(x603>x604)));

    if (t73 != 22) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x606 = 546U;
	volatile uint16_t x607 = UINT16_MAX;
	int64_t x608 = INT64_MAX;
	static volatile int64_t t74 = -518326264688LL;

    t74 = (x605>>(x606==(x607>x608)));

    if (t74 != 718720724081LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x609 = 1U;
	uint32_t x610 = 1782U;
	uint32_t x612 = UINT32_MAX;
	int32_t t75 = -16;

    t75 = (x609>>(x610==(x611>x612)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x613 = 15U;
	static int64_t x614 = -11725142548714330LL;
	static int32_t x615 = 23003;
	static uint32_t x616 = UINT32_MAX;

    t76 = (x613>>(x614==(x615>x616)));

    if (t76 != 15U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x617 = 1U;
	int16_t x618 = INT16_MAX;
	volatile uint8_t x620 = UINT8_MAX;

    t77 = (x617>>(x618==(x619>x620)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x629 = 1;
	uint64_t x630 = 92279179LLU;
	int16_t x632 = INT16_MAX;
	volatile int32_t t78 = -241997;

    t78 = (x629>>(x630==(x631>x632)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x633 = UINT32_MAX;
	int8_t x634 = INT8_MAX;
	volatile int64_t x635 = INT64_MIN;
	static int16_t x636 = INT16_MIN;
	uint32_t t79 = UINT32_MAX;

    t79 = (x633>>(x634==(x635>x636)));

    if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x661 = UINT8_MAX;
	static int32_t x662 = 1;
	int8_t x663 = INT8_MIN;
	uint8_t x664 = UINT8_MAX;
	volatile int32_t t80 = 12817713;

    t80 = (x661>>(x662==(x663>x664)));

    if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x665 = UINT32_MAX;
	int32_t x666 = INT32_MIN;
	int8_t x667 = INT8_MIN;
	uint32_t t81 = UINT32_MAX;

    t81 = (x665>>(x666==(x667>x668)));

    if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x673 = UINT8_MAX;
	int32_t x674 = INT32_MAX;
	int8_t x675 = INT8_MIN;
	static int8_t x676 = -1;
	volatile int32_t t82 = -76206938;

    t82 = (x673>>(x674==(x675>x676)));

    if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x681 = 204;
	uint64_t x682 = UINT64_MAX;
	int32_t t83 = -5;

    t83 = (x681>>(x682==(x683>x684)));

    if (t83 != 204) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x694 = INT64_MIN;
	uint64_t x695 = 702283291352727253LLU;
	static uint64_t x696 = 19755906LLU;
	int32_t t84 = 7383;

    t84 = (x693>>(x694==(x695>x696)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x703 = INT64_MIN;
	int32_t t85 = -1124;

    t85 = (x701>>(x702==(x703>x704)));

    if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x705 = 89;
	volatile int64_t x706 = INT64_MAX;
	static volatile int32_t x707 = INT32_MAX;
	int32_t t86 = 775;

    t86 = (x705>>(x706==(x707>x708)));

    if (t86 != 89) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x721 = 16U;
	uint64_t x722 = 37875951531LLU;
	uint16_t x723 = UINT16_MAX;
	volatile int64_t x724 = INT64_MAX;

    t87 = (x721>>(x722==(x723>x724)));

    if (t87 != 16) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x728 = 112810U;
	int32_t t88 = -10;

    t88 = (x725>>(x726==(x727>x728)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x730 = INT16_MIN;
	uint32_t x732 = 97U;
	static volatile int32_t t89 = -1103;

    t89 = (x729>>(x730==(x731>x732)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x733 = 202U;
	int32_t x734 = INT32_MIN;
	int16_t x735 = -1;
	volatile int32_t t90 = 432406395;

    t90 = (x733>>(x734==(x735>x736)));

    if (t90 != 202) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x737 = UINT64_MAX;
	uint32_t x738 = 296438U;
	int32_t x739 = INT32_MIN;
	uint64_t t91 = UINT64_MAX;

    t91 = (x737>>(x738==(x739>x740)));

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x749 = 4U;
	volatile int32_t x750 = INT32_MIN;
	int64_t x751 = INT64_MIN;
	int64_t x752 = INT64_MAX;
	static volatile uint32_t t92 = 5217U;

    t92 = (x749>>(x750==(x751>x752)));

    if (t92 != 4U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x757 = 1U;
	int16_t x758 = INT16_MIN;
	int8_t x759 = -2;
	static uint8_t x760 = UINT8_MAX;
	int32_t t93 = 61;

    t93 = (x757>>(x758==(x759>x760)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int8_t x765 = 2;
	uint32_t x766 = 80U;
	int32_t x767 = INT32_MIN;
	uint32_t x768 = UINT32_MAX;
	int32_t t94 = 12430;

    t94 = (x765>>(x766==(x767>x768)));

    if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x789 = UINT16_MAX;
	static volatile uint16_t x790 = 5202U;
	static int64_t x792 = INT64_MIN;
	int32_t t95 = -34;

    t95 = (x789>>(x790==(x791>x792)));

    if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x798 = 13U;
	int8_t x799 = INT8_MAX;
	volatile int16_t x800 = INT16_MAX;

    t96 = (x797>>(x798==(x799>x800)));

    if (t96 != 13) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x805 = UINT16_MAX;
	uint32_t x806 = 11757097U;
	int32_t t97 = -14;

    t97 = (x805>>(x806==(x807>x808)));

    if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x817 = 173U;
	int32_t x818 = -31470539;
	int8_t x819 = INT8_MIN;
	static volatile int8_t x820 = -3;
	uint32_t t98 = 3495920U;

    t98 = (x817>>(x818==(x819>x820)));

    if (t98 != 173U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x821 = 2099944414767985LLU;
	volatile int8_t x822 = INT8_MAX;
	volatile int32_t x823 = 6552;
	int16_t x824 = -1;
	uint64_t t99 = 2467919147138LLU;

    t99 = (x821>>(x822==(x823>x824)));

    if (t99 != 2099944414767985LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x826 = INT32_MAX;
	int8_t x827 = INT8_MIN;
	int8_t x828 = INT8_MIN;
	int32_t t100 = 258766551;

    t100 = (x825>>(x826==(x827>x828)));

    if (t100 != 873937490) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x829 = 128451646730LLU;
	int8_t x830 = -1;
	static volatile uint32_t x831 = UINT32_MAX;
	int8_t x832 = INT8_MIN;

    t101 = (x829>>(x830==(x831>x832)));

    if (t101 != 128451646730LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x833 = INT64_MAX;
	static int8_t x834 = -1;
	uint64_t x835 = 17082423606LLU;
	uint32_t x836 = 540207U;
	int64_t t102 = INT64_MAX;

    t102 = (x833>>(x834==(x835>x836)));

    if (t102 != INT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x843 = 32;
	int16_t x844 = 120;

    t103 = (x841>>(x842==(x843>x844)));

    if (t103 != 32156) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x861 = INT64_MAX;
	int8_t x862 = INT8_MAX;
	static int8_t x863 = -4;
	volatile int64_t t104 = INT64_MAX;

    t104 = (x861>>(x862==(x863>x864)));

    if (t104 != INT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x869 = INT32_MAX;
	volatile int32_t x871 = -1;
	volatile int32_t t105 = INT32_MAX;

    t105 = (x869>>(x870==(x871>x872)));

    if (t105 != INT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x885 = UINT64_MAX;
	volatile uint16_t x886 = UINT16_MAX;
	int32_t x887 = INT32_MIN;
	int8_t x888 = INT8_MIN;
	volatile uint64_t t106 = UINT64_MAX;

    t106 = (x885>>(x886==(x887>x888)));

    if (t106 != UINT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x898 = -1;
	uint8_t x899 = 5U;
	static uint64_t x900 = 38568624873463LLU;
	static int64_t t107 = 82721806388233824LL;

    t107 = (x897>>(x898==(x899>x900)));

    if (t107 != 196433824489LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x906 = UINT64_MAX;
	int64_t x907 = INT64_MIN;
	static uint8_t x908 = 13U;
	int32_t t108 = 3294;

    t108 = (x905>>(x906==(x907>x908)));

    if (t108 != 346) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x909 = 1LLU;
	int32_t x911 = INT32_MAX;
	static volatile uint8_t x912 = UINT8_MAX;
	volatile uint64_t t109 = 4609958506LLU;

    t109 = (x909>>(x910==(x911>x912)));

    if (t109 != 1LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x933 = INT8_MAX;
	int16_t x935 = INT16_MAX;
	volatile int8_t x936 = INT8_MAX;
	int32_t t110 = 73029;

    t110 = (x933>>(x934==(x935>x936)));

    if (t110 != 127) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x950 = -390288199;
	int32_t x952 = -223039570;

    t111 = (x949>>(x950==(x951>x952)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x957 = 5912351U;
	volatile uint32_t t112 = 11156U;

    t112 = (x957>>(x958==(x959>x960)));

    if (t112 != 5912351U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x961 = 36U;
	uint8_t x962 = 3U;
	int64_t x963 = -118655843365LL;
	int32_t t113 = -158;

    t113 = (x961>>(x962==(x963>x964)));

    if (t113 != 36) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x966 = 0LLU;
	int64_t x967 = INT64_MIN;
	uint32_t x968 = 0U;

    t114 = (x965>>(x966==(x967>x968)));

    if (t114 != 9) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint64_t x973 = 18219LLU;
	static int8_t x974 = 19;
	int8_t x975 = 45;
	static uint64_t x976 = 43097LLU;
	uint64_t t115 = 2250249076442040LLU;

    t115 = (x973>>(x974==(x975>x976)));

    if (t115 != 18219LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x977 = 24;
	uint64_t x978 = 4490518922LLU;
	volatile int32_t x979 = 41;

    t116 = (x977>>(x978==(x979>x980)));

    if (t116 != 24) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x985 = UINT32_MAX;
	uint32_t x986 = 15U;
	int16_t x987 = -15830;
	uint32_t x988 = 25219850U;

    t117 = (x985>>(x986==(x987>x988)));

    if (t117 != UINT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint16_t x998 = 2U;
	static int8_t x999 = INT8_MIN;
	static int32_t t118 = INT32_MAX;

    t118 = (x997>>(x998==(x999>x1000)));

    if (t118 != INT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x1002 = UINT64_MAX;
	volatile int64_t x1004 = INT64_MIN;
	int32_t t119 = -8775;

    t119 = (x1001>>(x1002==(x1003>x1004)));

    if (t119 != 127) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x1009 = INT32_MAX;
	static uint16_t x1010 = 1U;
	static int64_t x1012 = -98931873395884600LL;
	int32_t t120 = 337295;

    t120 = (x1009>>(x1010==(x1011>x1012)));

    if (t120 != 1073741823) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x1013 = 2073960155310LLU;
	int16_t x1015 = INT16_MAX;
	volatile int32_t x1016 = 44617;
	static volatile uint64_t t121 = 140583613662LLU;

    t121 = (x1013>>(x1014==(x1015>x1016)));

    if (t121 != 2073960155310LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x1017 = 1243U;
	int32_t x1018 = INT32_MAX;
	int8_t x1020 = INT8_MIN;
	int32_t t122 = 878;

    t122 = (x1017>>(x1018==(x1019>x1020)));

    if (t122 != 1243) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x1025 = 2U;
	static int8_t x1026 = 55;
	int8_t x1027 = 1;
	int8_t x1028 = -1;
	volatile int32_t t123 = 4379244;

    t123 = (x1025>>(x1026==(x1027>x1028)));

    if (t123 != 2) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x1037 = UINT16_MAX;
	int16_t x1038 = -30;
	uint32_t x1039 = 454764U;
	int8_t x1040 = -60;
	volatile int32_t t124 = -3807;

    t124 = (x1037>>(x1038==(x1039>x1040)));

    if (t124 != 65535) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x1045 = 2403;
	uint16_t x1047 = 7U;
	int32_t t125 = -16094;

    t125 = (x1045>>(x1046==(x1047>x1048)));

    if (t125 != 2403) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x1049 = INT64_MAX;
	uint16_t x1050 = 110U;
	volatile int8_t x1051 = -1;
	int32_t x1052 = 937818;

    t126 = (x1049>>(x1050==(x1051>x1052)));

    if (t126 != INT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x1061 = 179041235;
	volatile int16_t x1062 = -6;
	volatile int64_t x1063 = INT64_MIN;
	int16_t x1064 = INT16_MIN;
	volatile int32_t t127 = 38167;

    t127 = (x1061>>(x1062==(x1063>x1064)));

    if (t127 != 179041235) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x1069 = 12003;
	volatile int32_t x1071 = INT32_MIN;
	int16_t x1072 = INT16_MIN;
	static int32_t t128 = -28262104;

    t128 = (x1069>>(x1070==(x1071>x1072)));

    if (t128 != 12003) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x1090 = 3222;
	int32_t t129 = -104125357;

    t129 = (x1089>>(x1090==(x1091>x1092)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x1097 = 3318530LLU;
	int64_t x1098 = INT64_MIN;

    t130 = (x1097>>(x1098==(x1099>x1100)));

    if (t130 != 3318530LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x1110 = UINT32_MAX;
	uint8_t x1111 = 58U;
	volatile uint8_t x1112 = 1U;
	volatile uint32_t t131 = UINT32_MAX;

    t131 = (x1109>>(x1110==(x1111>x1112)));

    if (t131 != UINT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x1121 = 725;
	uint32_t x1123 = UINT32_MAX;
	int32_t x1124 = INT32_MIN;
	volatile int32_t t132 = -50;

    t132 = (x1121>>(x1122==(x1123>x1124)));

    if (t132 != 725) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x1125 = UINT16_MAX;
	volatile int16_t x1126 = 1;
	volatile uint32_t x1127 = 4372584U;
	uint16_t x1128 = 24116U;
	int32_t t133 = 27;

    t133 = (x1125>>(x1126==(x1127>x1128)));

    if (t133 != 32767) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x1129 = UINT8_MAX;
	int64_t x1130 = -651762867371191LL;
	int8_t x1131 = INT8_MAX;
	static int16_t x1132 = INT16_MIN;
	int32_t t134 = 213;

    t134 = (x1129>>(x1130==(x1131>x1132)));

    if (t134 != 255) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x1133 = 0;
	int64_t x1134 = -1LL;
	static volatile int32_t t135 = -245;

    t135 = (x1133>>(x1134==(x1135>x1136)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x1137 = INT32_MAX;
	int32_t x1138 = 8;
	int32_t x1139 = INT32_MIN;
	uint16_t x1140 = UINT16_MAX;
	volatile int32_t t136 = INT32_MAX;

    t136 = (x1137>>(x1138==(x1139>x1140)));

    if (t136 != INT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x1141 = 29;
	volatile int64_t x1142 = INT64_MIN;
	int32_t x1143 = -1;

    t137 = (x1141>>(x1142==(x1143>x1144)));

    if (t137 != 29) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x1149 = UINT32_MAX;
	int64_t x1150 = 19379963829989LL;
	uint8_t x1151 = UINT8_MAX;
	volatile int8_t x1152 = INT8_MAX;

    t138 = (x1149>>(x1150==(x1151>x1152)));

    if (t138 != UINT32_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x1153 = UINT64_MAX;
	int16_t x1156 = INT16_MIN;
	static volatile uint64_t t139 = UINT64_MAX;

    t139 = (x1153>>(x1154==(x1155>x1156)));

    if (t139 != UINT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x1157 = UINT8_MAX;
	volatile int16_t x1158 = 2109;
	static uint16_t x1159 = 1U;
	static int64_t x1160 = INT64_MIN;
	volatile int32_t t140 = 1;

    t140 = (x1157>>(x1158==(x1159>x1160)));

    if (t140 != 255) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x1165 = 14926;
	int8_t x1166 = -1;
	uint8_t x1167 = 25U;
	uint64_t x1168 = UINT64_MAX;
	volatile int32_t t141 = 62583405;

    t141 = (x1165>>(x1166==(x1167>x1168)));

    if (t141 != 14926) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x1177 = 459022332211294286LLU;
	int8_t x1178 = 42;
	int8_t x1180 = INT8_MIN;
	uint64_t t142 = 114691LLU;

    t142 = (x1177>>(x1178==(x1179>x1180)));

    if (t142 != 459022332211294286LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x1181 = 12248U;
	static uint64_t x1182 = 294LLU;
	int64_t x1183 = -55LL;
	volatile int32_t t143 = 3234;

    t143 = (x1181>>(x1182==(x1183>x1184)));

    if (t143 != 12248) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x1186 = INT64_MAX;
	static uint8_t x1187 = 61U;

    t144 = (x1185>>(x1186==(x1187>x1188)));

    if (t144 != INT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x1193 = INT64_MAX;
	uint64_t x1195 = 10479459LLU;
	uint8_t x1196 = UINT8_MAX;
	int64_t t145 = INT64_MAX;

    t145 = (x1193>>(x1194==(x1195>x1196)));

    if (t145 != INT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x1201 = 6U;
	uint32_t x1203 = 324859U;
	volatile int16_t x1204 = 5;

    t146 = (x1201>>(x1202==(x1203>x1204)));

    if (t146 != 6) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x1214 = INT32_MIN;
	uint64_t x1215 = 376LLU;
	static uint8_t x1216 = 1U;
	int32_t t147 = 9907;

    t147 = (x1213>>(x1214==(x1215>x1216)));

    if (t147 != 127) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x1221 = UINT16_MAX;
	int32_t x1222 = -1;
	uint8_t x1223 = 39U;
	int8_t x1224 = -1;
	volatile int32_t t148 = -3;

    t148 = (x1221>>(x1222==(x1223>x1224)));

    if (t148 != 65535) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x1237 = 7624;
	uint64_t x1239 = 2807LLU;
	volatile int8_t x1240 = -1;
	static int32_t t149 = 31160466;

    t149 = (x1237>>(x1238==(x1239>x1240)));

    if (t149 != 7624) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x1241 = UINT64_MAX;
	int64_t x1242 = 330LL;
	volatile uint8_t x1243 = 2U;
	int32_t x1244 = INT32_MIN;
	volatile uint64_t t150 = UINT64_MAX;

    t150 = (x1241>>(x1242==(x1243>x1244)));

    if (t150 != UINT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x1245 = UINT16_MAX;
	int16_t x1246 = INT16_MIN;
	int32_t x1247 = INT32_MIN;
	uint64_t x1248 = UINT64_MAX;
	volatile int32_t t151 = 61;

    t151 = (x1245>>(x1246==(x1247>x1248)));

    if (t151 != 65535) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x1249 = UINT8_MAX;
	volatile int64_t x1250 = INT64_MAX;
	int64_t x1252 = 19080880232LL;
	volatile int32_t t152 = 2365;

    t152 = (x1249>>(x1250==(x1251>x1252)));

    if (t152 != 255) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x1253 = 1U;
	uint8_t x1254 = 30U;
	int64_t x1255 = 1315268LL;
	int16_t x1256 = INT16_MIN;

    t153 = (x1253>>(x1254==(x1255>x1256)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x1257 = 43LLU;
	int64_t x1258 = 169660841701472737LL;
	volatile uint8_t x1259 = 0U;
	int8_t x1260 = 1;
	static volatile uint64_t t154 = 17070898081104377LLU;

    t154 = (x1257>>(x1258==(x1259>x1260)));

    if (t154 != 43LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x1269 = 410305951702387LLU;
	int8_t x1270 = -1;
	static uint16_t x1271 = 830U;
	static volatile uint64_t t155 = 1608LLU;

    t155 = (x1269>>(x1270==(x1271>x1272)));

    if (t155 != 410305951702387LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x1274 = INT64_MIN;
	int16_t x1275 = INT16_MIN;
	uint32_t t156 = 532U;

    t156 = (x1273>>(x1274==(x1275>x1276)));

    if (t156 != 1033888U) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x1277 = 0;
	static volatile int8_t x1278 = INT8_MIN;
	uint32_t x1279 = 3764U;
	int8_t x1280 = INT8_MIN;
	int32_t t157 = 29787;

    t157 = (x1277>>(x1278==(x1279>x1280)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x1281 = INT8_MAX;
	int16_t x1282 = -1;
	int64_t x1283 = -747648734907LL;
	volatile int32_t t158 = 6628;

    t158 = (x1281>>(x1282==(x1283>x1284)));

    if (t158 != 127) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x1285 = UINT8_MAX;
	uint8_t x1287 = 98U;

    t159 = (x1285>>(x1286==(x1287>x1288)));

    if (t159 != 255) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x1309 = INT64_MAX;
	int64_t x1311 = INT64_MIN;
	int64_t t160 = INT64_MAX;

    t160 = (x1309>>(x1310==(x1311>x1312)));

    if (t160 != INT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x1317 = UINT64_MAX;
	uint8_t x1318 = 122U;
	static int16_t x1319 = 6;
	uint32_t x1320 = 301U;
	uint64_t t161 = UINT64_MAX;

    t161 = (x1317>>(x1318==(x1319>x1320)));

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x1325 = 3654134551389429062LLU;
	static uint16_t x1326 = UINT16_MAX;
	int64_t x1327 = -11750854LL;
	uint64_t t162 = 3602721879LLU;

    t162 = (x1325>>(x1326==(x1327>x1328)));

    if (t162 != 3654134551389429062LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x1333 = UINT8_MAX;
	static volatile int32_t x1334 = INT32_MIN;
	volatile int8_t x1335 = 1;
	volatile int8_t x1336 = -1;
	int32_t t163 = -190;

    t163 = (x1333>>(x1334==(x1335>x1336)));

    if (t163 != 255) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x1337 = INT64_MAX;
	uint16_t x1338 = 4U;
	static uint32_t x1339 = UINT32_MAX;
	static int64_t x1340 = INT64_MIN;

    t164 = (x1337>>(x1338==(x1339>x1340)));

    if (t164 != INT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x1342 = INT64_MIN;
	int64_t x1343 = 1LL;
	static int8_t x1344 = INT8_MIN;
	volatile int32_t t165 = 6;

    t165 = (x1341>>(x1342==(x1343>x1344)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x1346 = INT64_MAX;
	int64_t x1348 = -1LL;

    t166 = (x1345>>(x1346==(x1347>x1348)));

    if (t166 != 32767) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x1349 = INT64_MAX;
	static uint64_t x1350 = 1LLU;
	static int16_t x1351 = 1884;
	int8_t x1352 = -2;
	volatile int64_t t167 = -892843036868455LL;

    t167 = (x1349>>(x1350==(x1351>x1352)));

    if (t167 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x1353 = 48585182881LLU;
	int32_t x1354 = -652;
	static uint32_t x1355 = 6U;
	uint64_t x1356 = UINT64_MAX;
	volatile uint64_t t168 = 30959LLU;

    t168 = (x1353>>(x1354==(x1355>x1356)));

    if (t168 != 48585182881LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x1357 = UINT64_MAX;
	static int64_t x1358 = -1LL;
	volatile int16_t x1359 = 29;
	int8_t x1360 = INT8_MIN;
	uint64_t t169 = UINT64_MAX;

    t169 = (x1357>>(x1358==(x1359>x1360)));

    if (t169 != UINT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1373 = UINT32_MAX;
	int8_t x1374 = INT8_MIN;
	static volatile int64_t x1375 = INT64_MIN;
	uint32_t t170 = UINT32_MAX;

    t170 = (x1373>>(x1374==(x1375>x1376)));

    if (t170 != UINT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x1377 = UINT8_MAX;
	static uint64_t x1379 = 4048LLU;
	int32_t t171 = 1108;

    t171 = (x1377>>(x1378==(x1379>x1380)));

    if (t171 != 255) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x1381 = 7617017969950112LLU;
	int16_t x1383 = -3393;
	int64_t x1384 = INT64_MIN;

    t172 = (x1381>>(x1382==(x1383>x1384)));

    if (t172 != 7617017969950112LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1389 = 201;
	static int64_t x1390 = -79051655220812LL;
	int8_t x1392 = -2;
	int32_t t173 = -820;

    t173 = (x1389>>(x1390==(x1391>x1392)));

    if (t173 != 201) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1397 = 8954;
	int8_t x1398 = 2;
	volatile int32_t x1399 = INT32_MAX;
	volatile uint8_t x1400 = 0U;

    t174 = (x1397>>(x1398==(x1399>x1400)));

    if (t174 != 8954) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1405 = 868864683161LLU;
	int8_t x1406 = INT8_MIN;
	int8_t x1407 = -5;

    t175 = (x1405>>(x1406==(x1407>x1408)));

    if (t175 != 868864683161LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x1409 = 401U;
	static uint8_t x1410 = 12U;
	int8_t x1411 = INT8_MIN;
	static int64_t x1412 = INT64_MAX;
	static int32_t t176 = 39;

    t176 = (x1409>>(x1410==(x1411>x1412)));

    if (t176 != 401) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x1414 = 2LLU;
	volatile int16_t x1416 = INT16_MIN;
	volatile int32_t t177 = 785547970;

    t177 = (x1413>>(x1414==(x1415>x1416)));

    if (t177 != 7) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x1417 = 3595124LL;
	int64_t x1418 = -1LL;
	volatile uint8_t x1420 = UINT8_MAX;

    t178 = (x1417>>(x1418==(x1419>x1420)));

    if (t178 != 3595124LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1421 = INT32_MAX;
	volatile uint16_t x1422 = UINT16_MAX;
	volatile uint64_t x1423 = 101051052004535LLU;
	volatile int32_t x1424 = 27219422;

    t179 = (x1421>>(x1422==(x1423>x1424)));

    if (t179 != INT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x1425 = 2229138U;
	static volatile int64_t x1427 = INT64_MIN;
	volatile uint64_t x1428 = 1370812509LLU;
	uint32_t t180 = 378U;

    t180 = (x1425>>(x1426==(x1427>x1428)));

    if (t180 != 2229138U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x1437 = 11216U;
	uint16_t x1439 = UINT16_MAX;
	volatile int8_t x1440 = INT8_MIN;
	static volatile int32_t t181 = 29480986;

    t181 = (x1437>>(x1438==(x1439>x1440)));

    if (t181 != 11216) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1441 = 2LLU;
	uint64_t x1442 = UINT64_MAX;
	volatile int64_t x1443 = INT64_MAX;
	int32_t x1444 = -1;
	static volatile uint64_t t182 = 381458869176332LLU;

    t182 = (x1441>>(x1442==(x1443>x1444)));

    if (t182 != 2LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1449 = INT8_MAX;
	volatile int64_t x1450 = INT64_MIN;
	int16_t x1451 = 0;
	volatile int32_t t183 = 1381875;

    t183 = (x1449>>(x1450==(x1451>x1452)));

    if (t183 != 127) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1457 = INT32_MAX;
	int16_t x1458 = -1;
	int8_t x1459 = INT8_MIN;
	int32_t t184 = INT32_MAX;

    t184 = (x1457>>(x1458==(x1459>x1460)));

    if (t184 != INT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x1461 = 98U;
	static volatile int64_t x1463 = INT64_MIN;
	int64_t x1464 = INT64_MIN;
	volatile int32_t t185 = -2668;

    t185 = (x1461>>(x1462==(x1463>x1464)));

    if (t185 != 98) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x1469 = UINT8_MAX;
	int8_t x1470 = INT8_MIN;
	uint8_t x1471 = UINT8_MAX;
	volatile int16_t x1472 = INT16_MIN;
	int32_t t186 = -246234886;

    t186 = (x1469>>(x1470==(x1471>x1472)));

    if (t186 != 255) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x1490 = INT8_MIN;
	volatile uint64_t x1491 = 275279482445384LLU;
	uint32_t x1492 = UINT32_MAX;
	static int32_t t187 = -302713203;

    t187 = (x1489>>(x1490==(x1491>x1492)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1497 = 2630U;
	static int64_t x1498 = INT64_MIN;
	uint64_t x1499 = 3244735533634255LLU;
	static volatile int32_t t188 = -874766;

    t188 = (x1497>>(x1498==(x1499>x1500)));

    if (t188 != 2630) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1509 = 5U;
	int64_t x1510 = 1205927LL;
	int64_t x1511 = -10719230LL;
	int32_t x1512 = -95665;
	volatile int32_t t189 = -220406691;

    t189 = (x1509>>(x1510==(x1511>x1512)));

    if (t189 != 5) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x1526 = INT32_MAX;
	int16_t x1527 = INT16_MAX;
	uint64_t x1528 = 110556785537LLU;

    t190 = (x1525>>(x1526==(x1527>x1528)));

    if (t190 != 3) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1529 = 59;
	int8_t x1530 = INT8_MIN;
	static int8_t x1531 = INT8_MIN;
	int16_t x1532 = -2;

    t191 = (x1529>>(x1530==(x1531>x1532)));

    if (t191 != 59) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x1537 = 28042U;
	static int8_t x1538 = INT8_MAX;
	int64_t x1540 = 53818227501030LL;
	static int32_t t192 = 1049199096;

    t192 = (x1537>>(x1538==(x1539>x1540)));

    if (t192 != 28042) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x1545 = 282241495913994557LL;
	static int32_t x1546 = -1;
	uint16_t x1547 = 2685U;
	int64_t x1548 = INT64_MIN;
	static volatile int64_t t193 = 144193213042LL;

    t193 = (x1545>>(x1546==(x1547>x1548)));

    if (t193 != 282241495913994557LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x1553 = INT8_MAX;
	static uint64_t x1555 = 264334455997LLU;
	uint32_t x1556 = 8U;

    t194 = (x1553>>(x1554==(x1555>x1556)));

    if (t194 != 127) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1562 = 0U;
	int64_t x1564 = INT64_MIN;
	static volatile int32_t t195 = 77676390;

    t195 = (x1561>>(x1562==(x1563>x1564)));

    if (t195 != 7) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int64_t x1577 = INT64_MAX;
	volatile int32_t x1579 = INT32_MIN;
	static int32_t x1580 = 1953304;

    t196 = (x1577>>(x1578==(x1579>x1580)));

    if (t196 != INT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x1589 = 14645U;
	int16_t x1590 = 100;
	int32_t x1591 = INT32_MIN;
	uint8_t x1592 = UINT8_MAX;

    t197 = (x1589>>(x1590==(x1591>x1592)));

    if (t197 != 14645) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1593 = 1658;
	int64_t x1594 = -1LL;
	int8_t x1595 = INT8_MIN;
	uint64_t x1596 = 220143LLU;
	int32_t t198 = -12764580;

    t198 = (x1593>>(x1594==(x1595>x1596)));

    if (t198 != 1658) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1597 = 87U;
	int16_t x1598 = -1;
	volatile int32_t x1599 = -1;
	static int16_t x1600 = INT16_MAX;
	volatile int32_t t199 = 0;

    t199 = (x1597>>(x1598==(x1599>x1600)));

    if (t199 != 87) { NG(); } else { ; }
	
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


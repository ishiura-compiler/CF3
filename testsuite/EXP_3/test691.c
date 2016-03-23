
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

int16_t x1 = INT16_MIN;
int16_t x3 = -1;
uint8_t x16 = 2U;
uint64_t x49 = 353LLU;
uint16_t x51 = UINT16_MAX;
int16_t x54 = INT16_MAX;
volatile int32_t t7 = 0;
int8_t x87 = -12;
volatile uint32_t x93 = 5U;
static int32_t x105 = INT32_MIN;
int8_t x108 = -1;
int64_t x110 = INT64_MIN;
int8_t x111 = -1;
volatile int8_t x112 = -1;
uint32_t x113 = UINT32_MAX;
int64_t x115 = INT64_MAX;
uint8_t x116 = 11U;
static volatile int64_t t13 = 18298618LL;
static uint64_t x121 = 20628LLU;
int64_t x125 = -10LL;
uint32_t x126 = UINT32_MAX;
int16_t x128 = 7395;
uint16_t x132 = 2U;
volatile uint32_t t16 = 3102U;
uint64_t t17 = 393LLU;
int32_t x138 = INT32_MIN;
int32_t t18 = 12146;
uint64_t t21 = 140230892LLU;
static uint8_t x174 = 6U;
int32_t x176 = INT32_MIN;
uint16_t x177 = 235U;
static volatile int32_t x179 = -205140;
volatile int32_t t24 = -493410;
volatile uint64_t x199 = UINT64_MAX;
uint64_t x201 = 137109412379LLU;
int16_t x222 = INT16_MIN;
volatile uint8_t x224 = 59U;
uint16_t x270 = 356U;
int64_t x271 = 10100970089LL;
int8_t x276 = INT8_MIN;
static volatile uint64_t t34 = 5206998093921LLU;
volatile int32_t x299 = INT32_MAX;
uint16_t x304 = 2U;
uint16_t x313 = 0U;
volatile int64_t x314 = -1LL;
int64_t x318 = INT64_MAX;
uint64_t x328 = UINT64_MAX;
static volatile int64_t t40 = 9859211400LL;
int32_t x333 = INT32_MAX;
uint16_t x335 = 4U;
int16_t x336 = 2;
static int32_t t41 = -7;
int64_t x344 = -1LL;
static volatile int16_t x354 = INT16_MAX;
static int64_t t44 = 274568228207716LL;
int16_t x358 = 10;
static int32_t x371 = INT32_MIN;
int32_t x381 = -1;
static int32_t x394 = INT32_MIN;
volatile uint16_t x395 = UINT16_MAX;
volatile int16_t x396 = -5;
int32_t t50 = 151;
volatile uint64_t x424 = 813257230326288614LLU;
int64_t x432 = -1LL;
static int64_t t53 = -3953077440830365422LL;
uint64_t x434 = 3533734LLU;
uint16_t x449 = 43U;
uint64_t x455 = UINT64_MAX;
int8_t x456 = 22;
static int32_t x478 = INT32_MIN;
volatile int64_t x479 = INT64_MAX;
uint32_t x482 = UINT32_MAX;
int16_t x490 = -342;
uint8_t x501 = 0U;
int32_t x512 = 141703;
int16_t x513 = INT16_MIN;
static volatile int8_t x514 = -13;
int16_t x516 = 95;
uint8_t x519 = 3U;
uint32_t x521 = 1281365U;
int16_t x522 = -1;
static uint64_t t67 = 25LLU;
static int32_t t69 = 17;
static volatile int64_t t71 = 0LL;
volatile uint16_t x567 = 185U;
uint16_t x582 = UINT16_MAX;
int16_t x587 = INT16_MIN;
int16_t x591 = 1;
volatile int32_t t79 = 347;
uint64_t t80 = 8955LLU;
uint64_t x638 = UINT64_MAX;
volatile int64_t t81 = -1451136958631919847LL;
uint32_t x643 = UINT32_MAX;
int8_t x652 = -1;
int32_t x677 = -1;
uint16_t x696 = 3427U;
int16_t x702 = 178;
volatile uint32_t x703 = UINT32_MAX;
int8_t x704 = 10;
static int64_t x710 = INT64_MIN;
int64_t x711 = INT64_MAX;
int32_t x712 = INT32_MIN;
volatile int8_t x725 = INT8_MIN;
int8_t x731 = INT8_MAX;
volatile uint8_t x732 = 108U;
uint8_t x744 = 45U;
int64_t t96 = 39676189LL;
uint64_t x749 = UINT64_MAX;
uint32_t x763 = UINT32_MAX;
volatile uint32_t t99 = 443564U;
static volatile uint8_t x793 = UINT8_MAX;
volatile uint8_t x801 = 0U;
static volatile int8_t x802 = -1;
static uint8_t x806 = UINT8_MAX;
int64_t x815 = 45953580884LL;
int16_t x841 = INT16_MAX;
uint64_t t110 = 26LLU;
volatile uint32_t x857 = UINT32_MAX;
uint16_t x858 = 6U;
uint64_t x876 = 24593LLU;
int64_t x887 = INT64_MIN;
uint8_t x903 = 46U;
int32_t t117 = 448343;
int16_t x913 = INT16_MIN;
int16_t x914 = -1;
static int8_t x930 = INT8_MIN;
int16_t x942 = -1;
int16_t x944 = INT16_MAX;
int64_t x993 = INT64_MAX;
uint64_t x996 = 380062243969373156LLU;
static int64_t x1017 = -386LL;
int16_t x1041 = -1;
static volatile int32_t x1045 = 124270;
volatile int8_t x1057 = -1;
volatile uint16_t x1060 = 6U;
static int16_t x1083 = -1;
uint64_t x1084 = 812289234980918LLU;
volatile int32_t x1101 = 0;
int64_t t141 = -1013334LL;
uint32_t x1133 = 196528694U;
int64_t x1136 = INT64_MAX;
int64_t x1139 = INT64_MIN;
volatile uint64_t x1148 = 3122157LLU;
uint64_t t145 = 19986001LLU;
int32_t x1157 = -1;
uint32_t t146 = 12U;
static uint64_t x1161 = UINT64_MAX;
int32_t x1162 = INT32_MIN;
int16_t x1164 = -1;
uint64_t x1165 = 127421226530LLU;
static int16_t x1166 = -7;
uint64_t x1167 = UINT64_MAX;
volatile uint64_t t148 = 7914562LLU;
volatile int32_t x1173 = 928;
int64_t x1180 = -1LL;
volatile int64_t t151 = -6556439LL;
uint64_t x1181 = 1092352299526LLU;
int8_t x1204 = INT8_MIN;
uint16_t x1214 = UINT16_MAX;
static uint32_t x1216 = 3197583U;
uint32_t x1245 = 4623U;
int64_t x1251 = INT64_MIN;
static int64_t t160 = 1634832215384LL;
int8_t x1264 = INT8_MIN;
static int32_t x1274 = 0;
int8_t x1276 = INT8_MAX;
static uint8_t x1278 = 74U;
static uint16_t x1293 = 537U;
int8_t x1297 = -19;
int32_t t165 = 451043937;
uint64_t x1310 = 2027420531LLU;
int32_t x1311 = 908243309;
int8_t x1317 = INT8_MAX;
volatile int64_t t169 = -3LL;
int64_t x1335 = 358875775LL;
int32_t t171 = -12;
int16_t x1345 = -331;
volatile uint32_t x1348 = UINT32_MAX;
int16_t x1385 = -1;
static int16_t x1388 = INT16_MIN;
volatile int32_t t176 = 7;
int8_t x1389 = INT8_MAX;
static int64_t x1392 = INT64_MIN;
uint8_t x1400 = UINT8_MAX;
int8_t x1453 = -1;
volatile uint32_t t182 = 23147U;
int16_t x1459 = INT16_MIN;
int32_t t183 = -44;
static uint16_t x1473 = UINT16_MAX;
uint8_t x1476 = UINT8_MAX;
static int32_t t185 = -9234;
static int8_t x1524 = 42;
int32_t x1527 = INT32_MIN;
int32_t x1530 = INT32_MIN;
volatile int32_t t192 = 13417887;
uint64_t x1547 = 29458429407838609LLU;
int8_t x1550 = -2;
volatile int32_t t195 = -2999;
static int64_t x1569 = -1LL;


void f0(void) {
    	uint64_t x2 = 3092LLU;
	int32_t x4 = -1;
	int32_t t0 = 0;

    t0 = ((x1==x2)%(x3/x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	int64_t x6 = -1LL;
	static int8_t x7 = INT8_MIN;
	uint8_t x8 = 1U;
	int32_t t1 = -291993;

    t1 = ((x5==x6)%(x7/x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -1;
	volatile uint8_t x14 = UINT8_MAX;
	static uint8_t x15 = UINT8_MAX;
	volatile int32_t t2 = 4;

    t2 = ((x13==x14)%(x15/x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint32_t x33 = 3013766U;
	static int8_t x34 = -1;
	static volatile uint64_t x35 = UINT64_MAX;
	uint32_t x36 = 176U;
	static uint64_t t3 = 934917648754609087LLU;

    t3 = ((x33==x34)%(x35/x36));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x50 = INT8_MAX;
	uint8_t x52 = UINT8_MAX;
	int32_t t4 = 330526;

    t4 = ((x49==x50)%(x51/x52));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x53 = UINT64_MAX;
	static volatile int8_t x55 = INT8_MAX;
	volatile int32_t x56 = -1;
	static volatile int32_t t5 = 1;

    t5 = ((x53==x54)%(x55/x56));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x69 = -46;
	int64_t x70 = 168280869174LL;
	int16_t x71 = -13486;
	static uint64_t x72 = 472670832575541LLU;
	volatile uint64_t t6 = 2962610LLU;

    t6 = ((x69==x70)%(x71/x72));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x77 = -120;
	volatile int16_t x78 = INT16_MAX;
	volatile int16_t x79 = INT16_MAX;
	static int16_t x80 = 9025;

    t7 = ((x77==x78)%(x79/x80));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x85 = -60;
	int8_t x86 = 1;
	volatile uint64_t x88 = 2984311836LLU;
	volatile uint64_t t8 = 47519374LLU;

    t8 = ((x85==x86)%(x87/x88));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x89 = -1141;
	volatile uint32_t x90 = 54U;
	int16_t x91 = INT16_MIN;
	int8_t x92 = INT8_MIN;
	int32_t t9 = 585499415;

    t9 = ((x89==x90)%(x91/x92));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x94 = INT64_MIN;
	uint16_t x95 = UINT16_MAX;
	static int8_t x96 = INT8_MIN;
	int32_t t10 = -30948;

    t10 = ((x93==x94)%(x95/x96));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x106 = INT64_MAX;
	int64_t x107 = -160922955638LL;
	volatile int64_t t11 = 44978080383LL;

    t11 = ((x105==x106)%(x107/x108));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x109 = UINT32_MAX;
	int32_t t12 = -99114;

    t12 = ((x109==x110)%(x111/x112));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x114 = 15;

    t13 = ((x113==x114)%(x115/x116));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x122 = INT8_MIN;
	int64_t x123 = INT64_MIN;
	int8_t x124 = INT8_MIN;
	int64_t t14 = -7947457422110830LL;

    t14 = ((x121==x122)%(x123/x124));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x127 = UINT32_MAX;
	volatile uint32_t t15 = 0U;

    t15 = ((x125==x126)%(x127/x128));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x129 = INT32_MIN;
	volatile int32_t x130 = -242135;
	uint32_t x131 = 27441U;

    t16 = ((x129==x130)%(x131/x132));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x133 = 1U;
	uint32_t x134 = UINT32_MAX;
	uint64_t x135 = UINT64_MAX;
	int8_t x136 = -1;

    t17 = ((x133==x134)%(x135/x136));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x137 = INT8_MIN;
	uint8_t x139 = 78U;
	int8_t x140 = -1;

    t18 = ((x137==x138)%(x139/x140));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x149 = 7;
	volatile int16_t x150 = -125;
	volatile int32_t x151 = -1;
	static volatile int64_t x152 = -1LL;
	volatile int64_t t19 = 1LL;

    t19 = ((x149==x150)%(x151/x152));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x165 = UINT64_MAX;
	uint64_t x166 = 1135750827577961LLU;
	int32_t x167 = INT32_MIN;
	uint64_t x168 = 19872854092030LLU;
	static uint64_t t20 = 2066083642317LLU;

    t20 = ((x165==x166)%(x167/x168));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x169 = INT64_MIN;
	uint8_t x170 = UINT8_MAX;
	int8_t x171 = INT8_MIN;
	uint64_t x172 = 1987675LLU;

    t21 = ((x169==x170)%(x171/x172));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x173 = 31U;
	uint64_t x175 = UINT64_MAX;
	volatile uint64_t t22 = 49628LLU;

    t22 = ((x173==x174)%(x175/x176));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x178 = -154;
	int64_t x180 = -1LL;
	static volatile int64_t t23 = -11840057562910852LL;

    t23 = ((x177==x178)%(x179/x180));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x189 = 5U;
	uint8_t x190 = 1U;
	uint8_t x191 = UINT8_MAX;
	volatile int16_t x192 = 11;

    t24 = ((x189==x190)%(x191/x192));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint8_t x197 = UINT8_MAX;
	uint32_t x198 = 113U;
	volatile int64_t x200 = -1LL;
	volatile uint64_t t25 = 154220790LLU;

    t25 = ((x197==x198)%(x199/x200));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x202 = INT64_MIN;
	int16_t x203 = INT16_MAX;
	int32_t x204 = -1;
	volatile int32_t t26 = -295762460;

    t26 = ((x201==x202)%(x203/x204));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x213 = INT16_MAX;
	volatile uint8_t x214 = 4U;
	int64_t x215 = -81125226019LL;
	int32_t x216 = INT32_MIN;
	static int64_t t27 = 1LL;

    t27 = ((x213==x214)%(x215/x216));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x217 = 7LLU;
	volatile int64_t x218 = INT64_MIN;
	uint64_t x219 = UINT64_MAX;
	int32_t x220 = INT32_MIN;
	uint64_t t28 = 5178LLU;

    t28 = ((x217==x218)%(x219/x220));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x221 = 25169723507LLU;
	uint32_t x223 = 258356775U;
	uint32_t t29 = 413934369U;

    t29 = ((x221==x222)%(x223/x224));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x237 = 1;
	static uint32_t x238 = 15U;
	int8_t x239 = -1;
	int8_t x240 = -1;
	int32_t t30 = 13856230;

    t30 = ((x237==x238)%(x239/x240));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x269 = INT16_MIN;
	int16_t x272 = INT16_MAX;
	volatile int64_t t31 = 0LL;

    t31 = ((x269==x270)%(x271/x272));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x273 = -86LL;
	int8_t x274 = INT8_MIN;
	static int8_t x275 = INT8_MIN;
	static int32_t t32 = 723;

    t32 = ((x273==x274)%(x275/x276));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x277 = 123LL;
	volatile int8_t x278 = 2;
	volatile int32_t x279 = -3653;
	uint16_t x280 = 457U;
	volatile int32_t t33 = -10936004;

    t33 = ((x277==x278)%(x279/x280));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x289 = INT16_MIN;
	volatile int64_t x290 = -83361932727721LL;
	volatile uint64_t x291 = 253700470461LLU;
	volatile int32_t x292 = 7;

    t34 = ((x289==x290)%(x291/x292));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x297 = UINT32_MAX;
	static int8_t x298 = -1;
	int16_t x300 = -2400;
	volatile int32_t t35 = -422610;

    t35 = ((x297==x298)%(x299/x300));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x301 = INT64_MIN;
	int64_t x302 = -7LL;
	int32_t x303 = INT32_MIN;
	static int32_t t36 = -1;

    t36 = ((x301==x302)%(x303/x304));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x315 = 379U;
	uint8_t x316 = 101U;
	static volatile int32_t t37 = -167;

    t37 = ((x313==x314)%(x315/x316));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x317 = UINT64_MAX;
	static int64_t x319 = INT64_MIN;
	int16_t x320 = INT16_MIN;
	static volatile int64_t t38 = -9708287339LL;

    t38 = ((x317==x318)%(x319/x320));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int64_t x325 = INT64_MAX;
	static uint8_t x326 = UINT8_MAX;
	int32_t x327 = -1;
	volatile uint64_t t39 = 30943005LLU;

    t39 = ((x325==x326)%(x327/x328));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x329 = UINT8_MAX;
	int64_t x330 = -1LL;
	int64_t x331 = 136705981355654563LL;
	int32_t x332 = INT32_MAX;

    t40 = ((x329==x330)%(x331/x332));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x334 = UINT32_MAX;

    t41 = ((x333==x334)%(x335/x336));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x341 = INT16_MIN;
	uint8_t x342 = 5U;
	static int64_t x343 = INT64_MAX;
	int64_t t42 = 1021113745LL;

    t42 = ((x341==x342)%(x343/x344));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x345 = UINT32_MAX;
	int16_t x346 = 11326;
	int32_t x347 = INT32_MIN;
	int16_t x348 = INT16_MAX;
	int32_t t43 = 206246;

    t43 = ((x345==x346)%(x347/x348));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x353 = 1;
	int64_t x355 = INT64_MIN;
	int32_t x356 = 28813;

    t44 = ((x353==x354)%(x355/x356));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x357 = -1LL;
	uint64_t x359 = UINT64_MAX;
	uint16_t x360 = 11581U;
	uint64_t t45 = 66897769802LLU;

    t45 = ((x357==x358)%(x359/x360));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x369 = -1;
	uint32_t x370 = 1734686U;
	uint16_t x372 = 6193U;
	int32_t t46 = 473;

    t46 = ((x369==x370)%(x371/x372));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x377 = -1LL;
	volatile int8_t x378 = 9;
	uint64_t x379 = UINT64_MAX;
	uint16_t x380 = 9004U;
	volatile uint64_t t47 = 221462139992788LLU;

    t47 = ((x377==x378)%(x379/x380));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x382 = -1;
	volatile uint16_t x383 = 8496U;
	int32_t x384 = 1;
	int32_t t48 = -1498;

    t48 = ((x381==x382)%(x383/x384));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x389 = 2021;
	uint64_t x390 = 37385597450LLU;
	int16_t x391 = INT16_MIN;
	static int8_t x392 = INT8_MIN;
	volatile int32_t t49 = 248024;

    t49 = ((x389==x390)%(x391/x392));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x393 = -1LL;

    t50 = ((x393==x394)%(x395/x396));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x413 = INT64_MIN;
	uint16_t x414 = UINT16_MAX;
	int64_t x415 = INT64_MAX;
	int32_t x416 = INT32_MIN;
	volatile int64_t t51 = 2189918332935156004LL;

    t51 = ((x413==x414)%(x415/x416));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x421 = 10U;
	static int32_t x422 = 11937002;
	int32_t x423 = -1;
	volatile uint64_t t52 = 1LLU;

    t52 = ((x421==x422)%(x423/x424));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x429 = INT8_MIN;
	static int8_t x430 = INT8_MIN;
	static uint16_t x431 = UINT16_MAX;

    t53 = ((x429==x430)%(x431/x432));

    if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x433 = UINT32_MAX;
	int64_t x435 = 2330085717072LL;
	int32_t x436 = INT32_MAX;
	int64_t t54 = 60476523LL;

    t54 = ((x433==x434)%(x435/x436));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x445 = 5862U;
	int32_t x446 = -1;
	int32_t x447 = INT32_MIN;
	volatile int16_t x448 = INT16_MIN;
	int32_t t55 = 3516767;

    t55 = ((x445==x446)%(x447/x448));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int8_t x450 = 1;
	int64_t x451 = INT64_MAX;
	int32_t x452 = INT32_MAX;
	int64_t t56 = -28160946LL;

    t56 = ((x449==x450)%(x451/x452));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x453 = 1;
	int32_t x454 = INT32_MIN;
	volatile uint64_t t57 = 880724196547343LLU;

    t57 = ((x453==x454)%(x455/x456));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x473 = -29;
	int32_t x474 = -3132853;
	volatile int16_t x475 = INT16_MIN;
	int16_t x476 = -1;
	static int32_t t58 = -4801116;

    t58 = ((x473==x474)%(x475/x476));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x477 = INT16_MAX;
	int16_t x480 = INT16_MIN;
	static volatile int64_t t59 = -1637698LL;

    t59 = ((x477==x478)%(x479/x480));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x481 = -124603667LL;
	int16_t x483 = -1;
	uint64_t x484 = 15069054292219LLU;
	uint64_t t60 = 68LLU;

    t60 = ((x481==x482)%(x483/x484));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x489 = 62U;
	int8_t x491 = 23;
	volatile int16_t x492 = -1;
	int32_t t61 = 27;

    t61 = ((x489==x490)%(x491/x492));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x502 = INT8_MIN;
	int8_t x503 = -1;
	int32_t x504 = -1;
	int32_t t62 = -392;

    t62 = ((x501==x502)%(x503/x504));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x505 = 5;
	uint64_t x506 = UINT64_MAX;
	static int8_t x507 = INT8_MIN;
	volatile uint32_t x508 = 587879757U;
	static volatile uint32_t t63 = 15U;

    t63 = ((x505==x506)%(x507/x508));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x509 = -179878420;
	volatile int16_t x510 = -1;
	static int64_t x511 = -4767325167LL;
	int64_t t64 = -7829152087LL;

    t64 = ((x509==x510)%(x511/x512));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x515 = 98U;
	static volatile int32_t t65 = -199039328;

    t65 = ((x513==x514)%(x515/x516));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x517 = UINT16_MAX;
	uint64_t x518 = 14200362511686310LLU;
	static int8_t x520 = -1;
	int32_t t66 = 1328;

    t66 = ((x517==x518)%(x519/x520));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x523 = UINT64_MAX;
	uint16_t x524 = UINT16_MAX;

    t67 = ((x521==x522)%(x523/x524));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x525 = INT32_MIN;
	static volatile uint8_t x526 = UINT8_MAX;
	uint64_t x527 = 16655592LLU;
	static volatile uint8_t x528 = UINT8_MAX;
	static uint64_t t68 = 734626174LLU;

    t68 = ((x525==x526)%(x527/x528));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x529 = 294914398;
	int16_t x530 = INT16_MAX;
	int32_t x531 = 6445005;
	int8_t x532 = INT8_MIN;

    t69 = ((x529==x530)%(x531/x532));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x541 = UINT8_MAX;
	uint64_t x542 = UINT64_MAX;
	int64_t x543 = -1LL;
	static volatile int8_t x544 = -1;
	int64_t t70 = -3708505369453477LL;

    t70 = ((x541==x542)%(x543/x544));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x545 = UINT64_MAX;
	volatile int8_t x546 = -1;
	int64_t x547 = INT64_MIN;
	uint16_t x548 = UINT16_MAX;

    t71 = ((x545==x546)%(x547/x548));

    if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x553 = -1;
	uint8_t x554 = UINT8_MAX;
	static int8_t x555 = INT8_MIN;
	uint16_t x556 = 59U;
	static volatile int32_t t72 = -3193345;

    t72 = ((x553==x554)%(x555/x556));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x565 = INT64_MIN;
	int32_t x566 = -1;
	int16_t x568 = -1;
	static volatile int32_t t73 = -1646;

    t73 = ((x565==x566)%(x567/x568));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x569 = -925LL;
	int64_t x570 = INT64_MIN;
	volatile uint16_t x571 = 84U;
	int32_t x572 = -1;
	volatile int32_t t74 = -105497844;

    t74 = ((x569==x570)%(x571/x572));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x577 = INT8_MAX;
	int8_t x578 = 0;
	int64_t x579 = INT64_MIN;
	static volatile uint64_t x580 = 2LLU;
	volatile uint64_t t75 = 105010792625515600LLU;

    t75 = ((x577==x578)%(x579/x580));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x581 = INT64_MAX;
	volatile int64_t x583 = INT64_MIN;
	int16_t x584 = INT16_MIN;
	int64_t t76 = -444967LL;

    t76 = ((x581==x582)%(x583/x584));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint16_t x585 = UINT16_MAX;
	uint32_t x586 = UINT32_MAX;
	int16_t x588 = 505;
	int32_t t77 = 7652264;

    t77 = ((x585==x586)%(x587/x588));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x589 = -1LL;
	static uint8_t x590 = 30U;
	int8_t x592 = -1;
	volatile int32_t t78 = -102;

    t78 = ((x589==x590)%(x591/x592));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x609 = 2U;
	int8_t x610 = INT8_MAX;
	uint8_t x611 = UINT8_MAX;
	uint16_t x612 = 11U;

    t79 = ((x609==x610)%(x611/x612));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x613 = INT16_MIN;
	uint8_t x614 = 10U;
	volatile int16_t x615 = -1;
	uint64_t x616 = 140375243833374245LLU;

    t80 = ((x613==x614)%(x615/x616));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x637 = 0U;
	static volatile int64_t x639 = INT64_MAX;
	int64_t x640 = 3215095387241495LL;

    t81 = ((x637==x638)%(x639/x640));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x641 = -263161753;
	uint32_t x642 = 29241366U;
	int16_t x644 = -6;
	uint32_t t82 = 184775U;

    t82 = ((x641==x642)%(x643/x644));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x649 = UINT64_MAX;
	static int32_t x650 = -1;
	volatile int32_t x651 = -1;
	volatile int32_t t83 = -1;

    t83 = ((x649==x650)%(x651/x652));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x653 = -5580;
	int8_t x654 = INT8_MAX;
	int32_t x655 = INT32_MAX;
	uint32_t x656 = 47728407U;
	volatile uint32_t t84 = 334U;

    t84 = ((x653==x654)%(x655/x656));

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x665 = -642299096704392LL;
	volatile uint32_t x666 = 2745044U;
	int16_t x667 = INT16_MIN;
	int64_t x668 = -1LL;
	volatile int64_t t85 = 45020394879519443LL;

    t85 = ((x665==x666)%(x667/x668));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x673 = INT64_MIN;
	int64_t x674 = -1LL;
	int8_t x675 = -1;
	uint64_t x676 = 6771530023LLU;
	static uint64_t t86 = 622LLU;

    t86 = ((x673==x674)%(x675/x676));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x678 = INT8_MIN;
	volatile int64_t x679 = 1069060178362LL;
	int64_t x680 = 473292884048LL;
	volatile int64_t t87 = -76333465407327LL;

    t87 = ((x677==x678)%(x679/x680));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x693 = INT16_MIN;
	static int64_t x694 = -113LL;
	uint64_t x695 = 116156758968678223LLU;
	volatile uint64_t t88 = 550163685438054158LLU;

    t88 = ((x693==x694)%(x695/x696));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x697 = INT16_MIN;
	volatile int8_t x698 = -5;
	static volatile uint64_t x699 = 8455748930044LLU;
	int16_t x700 = INT16_MAX;
	uint64_t t89 = 3LLU;

    t89 = ((x697==x698)%(x699/x700));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x701 = INT32_MAX;
	uint32_t t90 = 339460367U;

    t90 = ((x701==x702)%(x703/x704));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x705 = INT64_MAX;
	int8_t x706 = INT8_MAX;
	int64_t x707 = INT64_MIN;
	volatile int32_t x708 = INT32_MAX;
	static int64_t t91 = 1173609LL;

    t91 = ((x705==x706)%(x707/x708));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x709 = 1332U;
	int64_t t92 = 1780063LL;

    t92 = ((x709==x710)%(x711/x712));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x726 = INT64_MIN;
	uint64_t x727 = UINT64_MAX;
	static uint32_t x728 = 52308U;
	volatile uint64_t t93 = 26LLU;

    t93 = ((x725==x726)%(x727/x728));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x729 = 274U;
	uint64_t x730 = 1349494612645LLU;
	int32_t t94 = -1778505;

    t94 = ((x729==x730)%(x731/x732));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x733 = INT64_MIN;
	int16_t x734 = 1;
	int64_t x735 = INT64_MIN;
	static int16_t x736 = INT16_MAX;
	int64_t t95 = -24256773845LL;

    t95 = ((x733==x734)%(x735/x736));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x741 = -1192299;
	int16_t x742 = 5;
	int64_t x743 = INT64_MIN;

    t96 = ((x741==x742)%(x743/x744));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x750 = 213938558191944LLU;
	int8_t x751 = INT8_MIN;
	static uint32_t x752 = 32463894U;
	uint32_t t97 = 0U;

    t97 = ((x749==x750)%(x751/x752));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x753 = INT16_MAX;
	int8_t x754 = 10;
	uint16_t x755 = 14U;
	int8_t x756 = 4;
	static int32_t t98 = 1;

    t98 = ((x753==x754)%(x755/x756));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x761 = INT64_MIN;
	uint8_t x762 = 1U;
	int32_t x764 = -2;

    t99 = ((x761==x762)%(x763/x764));

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x769 = INT16_MIN;
	uint16_t x770 = UINT16_MAX;
	volatile uint8_t x771 = UINT8_MAX;
	uint32_t x772 = 7U;
	static uint32_t t100 = 1U;

    t100 = ((x769==x770)%(x771/x772));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x785 = 11U;
	int64_t x786 = -1LL;
	int32_t x787 = 29558102;
	int8_t x788 = INT8_MAX;
	volatile int32_t t101 = 64860;

    t101 = ((x785==x786)%(x787/x788));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x789 = INT8_MIN;
	int8_t x790 = -10;
	int16_t x791 = INT16_MIN;
	int8_t x792 = INT8_MIN;
	volatile int32_t t102 = 29685;

    t102 = ((x789==x790)%(x791/x792));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x794 = UINT64_MAX;
	uint16_t x795 = UINT16_MAX;
	int32_t x796 = -688;
	volatile int32_t t103 = -883619899;

    t103 = ((x793==x794)%(x795/x796));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x803 = 16123;
	int8_t x804 = -1;
	volatile int32_t t104 = 32142318;

    t104 = ((x801==x802)%(x803/x804));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x805 = -154597;
	int16_t x807 = -1;
	volatile uint32_t x808 = 440941U;
	volatile uint32_t t105 = 1557921U;

    t105 = ((x805==x806)%(x807/x808));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x813 = INT16_MIN;
	int32_t x814 = INT32_MAX;
	int16_t x816 = INT16_MIN;
	int64_t t106 = 88115267243LL;

    t106 = ((x813==x814)%(x815/x816));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x821 = INT8_MIN;
	uint64_t x822 = UINT64_MAX;
	volatile int8_t x823 = INT8_MIN;
	static int64_t x824 = -1LL;
	static volatile int64_t t107 = -16801984703LL;

    t107 = ((x821==x822)%(x823/x824));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x825 = -44;
	int16_t x826 = INT16_MIN;
	uint8_t x827 = 20U;
	int64_t x828 = -1LL;
	int64_t t108 = 3210307719838592LL;

    t108 = ((x825==x826)%(x827/x828));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x837 = 75369662U;
	int8_t x838 = INT8_MIN;
	int64_t x839 = INT64_MIN;
	int32_t x840 = 10751246;
	volatile int64_t t109 = 113994809LL;

    t109 = ((x837==x838)%(x839/x840));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x842 = 12;
	int16_t x843 = INT16_MIN;
	volatile uint64_t x844 = 491LLU;

    t110 = ((x841==x842)%(x843/x844));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x859 = 234613000U;
	uint32_t x860 = 21U;
	volatile uint32_t t111 = 55447697U;

    t111 = ((x857==x858)%(x859/x860));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x865 = INT32_MIN;
	static uint32_t x866 = 1U;
	volatile int8_t x867 = INT8_MIN;
	int8_t x868 = INT8_MIN;
	static volatile int32_t t112 = -836280;

    t112 = ((x865==x866)%(x867/x868));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x873 = INT64_MIN;
	int64_t x874 = INT64_MAX;
	volatile int32_t x875 = INT32_MIN;
	uint64_t t113 = 236LLU;

    t113 = ((x873==x874)%(x875/x876));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x885 = INT32_MIN;
	int64_t x886 = 8699555LL;
	volatile int8_t x888 = INT8_MAX;
	volatile int64_t t114 = 1LL;

    t114 = ((x885==x886)%(x887/x888));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x889 = INT32_MIN;
	int8_t x890 = -1;
	int16_t x891 = -5;
	static uint32_t x892 = 90U;
	uint32_t t115 = 0U;

    t115 = ((x889==x890)%(x891/x892));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x897 = INT64_MAX;
	volatile int64_t x898 = INT64_MIN;
	volatile int32_t x899 = INT32_MIN;
	int32_t x900 = INT32_MIN;
	volatile int32_t t116 = 695;

    t116 = ((x897==x898)%(x899/x900));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x901 = -18;
	uint8_t x902 = UINT8_MAX;
	int16_t x904 = 7;

    t117 = ((x901==x902)%(x903/x904));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x909 = INT64_MIN;
	uint64_t x910 = 832127LLU;
	int16_t x911 = INT16_MIN;
	int8_t x912 = -44;
	static int32_t t118 = 1;

    t118 = ((x909==x910)%(x911/x912));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x915 = INT8_MAX;
	int8_t x916 = -1;
	volatile int32_t t119 = 5029;

    t119 = ((x913==x914)%(x915/x916));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x917 = -1LL;
	static int16_t x918 = -1;
	static int16_t x919 = INT16_MAX;
	uint8_t x920 = 56U;
	int32_t t120 = -3440618;

    t120 = ((x917==x918)%(x919/x920));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x929 = UINT8_MAX;
	uint64_t x931 = 356556987LLU;
	static int8_t x932 = INT8_MAX;
	static volatile uint64_t t121 = 577665088867242LLU;

    t121 = ((x929==x930)%(x931/x932));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x933 = UINT8_MAX;
	uint64_t x934 = 51052900405443LLU;
	int16_t x935 = INT16_MIN;
	static int16_t x936 = -6454;
	volatile int32_t t122 = -6463;

    t122 = ((x933==x934)%(x935/x936));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x937 = INT32_MIN;
	int16_t x938 = INT16_MIN;
	static int64_t x939 = INT64_MIN;
	int64_t x940 = INT64_MIN;
	int64_t t123 = -236570249LL;

    t123 = ((x937==x938)%(x939/x940));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x941 = INT8_MIN;
	volatile uint64_t x943 = 1593686036312LLU;
	volatile uint64_t t124 = 36LLU;

    t124 = ((x941==x942)%(x943/x944));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x953 = 1U;
	int16_t x954 = INT16_MIN;
	int32_t x955 = INT32_MAX;
	int16_t x956 = INT16_MIN;
	volatile int32_t t125 = 14715;

    t125 = ((x953==x954)%(x955/x956));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x957 = UINT16_MAX;
	uint16_t x958 = 5U;
	int16_t x959 = -1;
	int64_t x960 = -1LL;
	int64_t t126 = -174LL;

    t126 = ((x957==x958)%(x959/x960));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x994 = UINT64_MAX;
	int32_t x995 = -1233;
	uint64_t t127 = 457563843475LLU;

    t127 = ((x993==x994)%(x995/x996));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x997 = UINT32_MAX;
	uint64_t x998 = 42210701LLU;
	uint64_t x999 = UINT64_MAX;
	int32_t x1000 = INT32_MIN;
	volatile uint64_t t128 = 8204835LLU;

    t128 = ((x997==x998)%(x999/x1000));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x1009 = 20;
	int16_t x1010 = -947;
	int32_t x1011 = INT32_MIN;
	int8_t x1012 = 31;
	volatile int32_t t129 = -1;

    t129 = ((x1009==x1010)%(x1011/x1012));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x1018 = -5411;
	int16_t x1019 = 11929;
	int8_t x1020 = INT8_MIN;
	int32_t t130 = -122;

    t130 = ((x1017==x1018)%(x1019/x1020));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x1029 = UINT64_MAX;
	static int32_t x1030 = INT32_MIN;
	int64_t x1031 = INT64_MIN;
	volatile uint64_t x1032 = 6486605186958251LLU;
	uint64_t t131 = 3663191985567514123LLU;

    t131 = ((x1029==x1030)%(x1031/x1032));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x1037 = 77U;
	volatile uint16_t x1038 = 6U;
	int32_t x1039 = INT32_MAX;
	static volatile int16_t x1040 = INT16_MIN;
	static int32_t t132 = 299;

    t132 = ((x1037==x1038)%(x1039/x1040));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x1042 = 0U;
	static int32_t x1043 = 1514;
	volatile int8_t x1044 = INT8_MAX;
	volatile int32_t t133 = -360647;

    t133 = ((x1041==x1042)%(x1043/x1044));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x1046 = -3LL;
	uint32_t x1047 = 901496834U;
	int8_t x1048 = INT8_MAX;
	volatile uint32_t t134 = 7U;

    t134 = ((x1045==x1046)%(x1047/x1048));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x1049 = INT16_MIN;
	static int64_t x1050 = INT64_MAX;
	static int64_t x1051 = INT64_MIN;
	volatile uint16_t x1052 = 141U;
	volatile int64_t t135 = -1625640661LL;

    t135 = ((x1049==x1050)%(x1051/x1052));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x1058 = INT16_MIN;
	uint32_t x1059 = 294U;
	uint32_t t136 = 1U;

    t136 = ((x1057==x1058)%(x1059/x1060));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x1077 = INT32_MAX;
	int8_t x1078 = -23;
	int16_t x1079 = -1;
	uint64_t x1080 = UINT64_MAX;
	static uint64_t t137 = 58058691LLU;

    t137 = ((x1077==x1078)%(x1079/x1080));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x1081 = 314;
	volatile int16_t x1082 = INT16_MIN;
	uint64_t t138 = 1307393LLU;

    t138 = ((x1081==x1082)%(x1083/x1084));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x1093 = 7812;
	int8_t x1094 = INT8_MAX;
	int8_t x1095 = 51;
	static int8_t x1096 = -1;
	volatile int32_t t139 = 10137;

    t139 = ((x1093==x1094)%(x1095/x1096));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x1102 = 470U;
	volatile int8_t x1103 = INT8_MIN;
	static int8_t x1104 = INT8_MAX;
	volatile int32_t t140 = -177259345;

    t140 = ((x1101==x1102)%(x1103/x1104));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x1117 = UINT64_MAX;
	uint8_t x1118 = 8U;
	int16_t x1119 = INT16_MAX;
	int64_t x1120 = 128LL;

    t141 = ((x1117==x1118)%(x1119/x1120));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x1125 = INT16_MAX;
	int64_t x1126 = -1LL;
	uint8_t x1127 = 1U;
	int64_t x1128 = -1LL;
	int64_t t142 = -360LL;

    t142 = ((x1125==x1126)%(x1127/x1128));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x1134 = UINT8_MAX;
	int64_t x1135 = INT64_MAX;
	int64_t t143 = -13LL;

    t143 = ((x1133==x1134)%(x1135/x1136));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1137 = INT8_MAX;
	uint32_t x1138 = 252U;
	uint8_t x1140 = 30U;
	volatile int64_t t144 = 20669131LL;

    t144 = ((x1137==x1138)%(x1139/x1140));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1145 = -1;
	uint16_t x1146 = 12U;
	int16_t x1147 = -29;

    t145 = ((x1145==x1146)%(x1147/x1148));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x1158 = 1U;
	int16_t x1159 = INT16_MIN;
	volatile uint32_t x1160 = 50765U;

    t146 = ((x1157==x1158)%(x1159/x1160));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x1163 = INT16_MIN;
	static volatile int32_t t147 = -84933;

    t147 = ((x1161==x1162)%(x1163/x1164));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x1168 = INT16_MIN;

    t148 = ((x1165==x1166)%(x1167/x1168));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1169 = INT16_MAX;
	static int8_t x1170 = -7;
	static uint64_t x1171 = UINT64_MAX;
	uint16_t x1172 = 1001U;
	volatile uint64_t t149 = 128940260455037150LLU;

    t149 = ((x1169==x1170)%(x1171/x1172));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1174 = INT64_MAX;
	volatile uint32_t x1175 = UINT32_MAX;
	uint8_t x1176 = 1U;
	volatile uint32_t t150 = 396011454U;

    t150 = ((x1173==x1174)%(x1175/x1176));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x1177 = -1;
	volatile int16_t x1178 = -1;
	volatile int16_t x1179 = -1;

    t151 = ((x1177==x1178)%(x1179/x1180));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x1182 = INT64_MIN;
	int64_t x1183 = INT64_MAX;
	uint64_t x1184 = 26LLU;
	static uint64_t t152 = 553607821823931900LLU;

    t152 = ((x1181==x1182)%(x1183/x1184));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x1197 = INT8_MIN;
	volatile int32_t x1198 = INT32_MIN;
	static volatile int8_t x1199 = INT8_MIN;
	int32_t x1200 = -1;
	volatile int32_t t153 = 209400;

    t153 = ((x1197==x1198)%(x1199/x1200));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x1201 = INT32_MIN;
	volatile int64_t x1202 = INT64_MIN;
	static uint64_t x1203 = UINT64_MAX;
	uint64_t t154 = 180LLU;

    t154 = ((x1201==x1202)%(x1203/x1204));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x1213 = 2U;
	volatile int32_t x1215 = -7;
	uint32_t t155 = 166259401U;

    t155 = ((x1213==x1214)%(x1215/x1216));

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x1217 = INT64_MIN;
	uint64_t x1218 = 13010415376LLU;
	static uint64_t x1219 = 11361692LLU;
	uint8_t x1220 = 15U;
	static volatile uint64_t t156 = 26227413745927237LLU;

    t156 = ((x1217==x1218)%(x1219/x1220));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x1221 = 192U;
	static int64_t x1222 = INT64_MAX;
	int64_t x1223 = INT64_MIN;
	int8_t x1224 = INT8_MIN;
	int64_t t157 = 1465103LL;

    t157 = ((x1221==x1222)%(x1223/x1224));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1241 = -21897994LL;
	uint8_t x1242 = UINT8_MAX;
	volatile int32_t x1243 = INT32_MIN;
	uint16_t x1244 = UINT16_MAX;
	volatile int32_t t158 = 81431;

    t158 = ((x1241==x1242)%(x1243/x1244));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x1246 = INT16_MIN;
	volatile uint8_t x1247 = UINT8_MAX;
	volatile uint8_t x1248 = UINT8_MAX;
	int32_t t159 = 271311433;

    t159 = ((x1245==x1246)%(x1247/x1248));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1249 = INT32_MIN;
	uint32_t x1250 = 135U;
	int16_t x1252 = INT16_MIN;

    t160 = ((x1249==x1250)%(x1251/x1252));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x1261 = INT32_MIN;
	int32_t x1262 = INT32_MIN;
	int32_t x1263 = -367;
	int32_t t161 = 56598;

    t161 = ((x1261==x1262)%(x1263/x1264));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x1273 = -1;
	uint32_t x1275 = UINT32_MAX;
	static uint32_t t162 = 430465806U;

    t162 = ((x1273==x1274)%(x1275/x1276));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x1277 = -1;
	uint64_t x1279 = 366235640420122520LLU;
	volatile int16_t x1280 = INT16_MAX;
	static volatile uint64_t t163 = 8LLU;

    t163 = ((x1277==x1278)%(x1279/x1280));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x1294 = 1;
	int64_t x1295 = INT64_MIN;
	static int32_t x1296 = INT32_MAX;
	int64_t t164 = -138307946282LL;

    t164 = ((x1293==x1294)%(x1295/x1296));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x1298 = 2073LL;
	volatile int32_t x1299 = INT32_MIN;
	int32_t x1300 = INT32_MAX;

    t165 = ((x1297==x1298)%(x1299/x1300));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x1301 = UINT32_MAX;
	volatile int32_t x1302 = -1;
	static int16_t x1303 = INT16_MAX;
	static volatile int64_t x1304 = -1LL;
	volatile int64_t t166 = 75715082101LL;

    t166 = ((x1301==x1302)%(x1303/x1304));

    if (t166 != 1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x1309 = INT16_MIN;
	uint32_t x1312 = 130817U;
	static volatile uint32_t t167 = 454019164U;

    t167 = ((x1309==x1310)%(x1311/x1312));

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1318 = INT16_MIN;
	static uint64_t x1319 = 22LLU;
	uint8_t x1320 = 4U;
	uint64_t t168 = 7730471581200526710LLU;

    t168 = ((x1317==x1318)%(x1319/x1320));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x1325 = UINT16_MAX;
	int32_t x1326 = INT32_MIN;
	static volatile int64_t x1327 = INT64_MIN;
	static volatile int64_t x1328 = 112371374285272LL;

    t169 = ((x1325==x1326)%(x1327/x1328));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1333 = -1;
	volatile int8_t x1334 = INT8_MIN;
	volatile int64_t x1336 = 40LL;
	volatile int64_t t170 = -2661LL;

    t170 = ((x1333==x1334)%(x1335/x1336));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1337 = INT8_MAX;
	uint8_t x1338 = 0U;
	volatile uint8_t x1339 = UINT8_MAX;
	volatile int8_t x1340 = -1;

    t171 = ((x1337==x1338)%(x1339/x1340));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x1346 = INT8_MAX;
	volatile uint64_t x1347 = 3089499361667897LLU;
	volatile uint64_t t172 = 3754459100209LLU;

    t172 = ((x1345==x1346)%(x1347/x1348));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x1353 = 83U;
	uint16_t x1354 = 21291U;
	volatile int16_t x1355 = INT16_MIN;
	uint64_t x1356 = 6872LLU;
	static uint64_t t173 = 12533398537722941LLU;

    t173 = ((x1353==x1354)%(x1355/x1356));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1365 = 4U;
	static volatile int64_t x1366 = INT64_MIN;
	uint8_t x1367 = 5U;
	int16_t x1368 = -1;
	int32_t t174 = -1976;

    t174 = ((x1365==x1366)%(x1367/x1368));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x1373 = INT32_MIN;
	int64_t x1374 = INT64_MIN;
	uint32_t x1375 = UINT32_MAX;
	volatile int8_t x1376 = INT8_MIN;
	volatile uint32_t t175 = 31U;

    t175 = ((x1373==x1374)%(x1375/x1376));

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1386 = INT32_MIN;
	int32_t x1387 = INT32_MIN;

    t176 = ((x1385==x1386)%(x1387/x1388));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1390 = -1;
	static uint64_t x1391 = UINT64_MAX;
	uint64_t t177 = 26892LLU;

    t177 = ((x1389==x1390)%(x1391/x1392));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x1393 = UINT32_MAX;
	int8_t x1394 = -1;
	int64_t x1395 = INT64_MIN;
	volatile int8_t x1396 = 1;
	int64_t t178 = 235598669LL;

    t178 = ((x1393==x1394)%(x1395/x1396));

    if (t178 != 1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1397 = UINT8_MAX;
	int32_t x1398 = INT32_MAX;
	uint32_t x1399 = 764074U;
	volatile uint32_t t179 = 1316830U;

    t179 = ((x1397==x1398)%(x1399/x1400));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x1401 = UINT16_MAX;
	int16_t x1402 = INT16_MIN;
	static uint16_t x1403 = UINT16_MAX;
	int8_t x1404 = 2;
	static volatile int32_t t180 = -1463314;

    t180 = ((x1401==x1402)%(x1403/x1404));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1433 = 14U;
	static volatile uint32_t x1434 = 324572988U;
	uint16_t x1435 = UINT16_MAX;
	int8_t x1436 = -1;
	static volatile int32_t t181 = 656034007;

    t181 = ((x1433==x1434)%(x1435/x1436));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x1454 = 2797196LLU;
	static uint32_t x1455 = 16061714U;
	static uint16_t x1456 = 4U;

    t182 = ((x1453==x1454)%(x1455/x1456));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x1457 = 57U;
	uint64_t x1458 = 491249847LLU;
	int16_t x1460 = -1;

    t183 = ((x1457==x1458)%(x1459/x1460));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1474 = INT8_MIN;
	uint32_t x1475 = UINT32_MAX;
	volatile uint32_t t184 = 98U;

    t184 = ((x1473==x1474)%(x1475/x1476));

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x1477 = INT16_MIN;
	int16_t x1478 = INT16_MIN;
	int32_t x1479 = INT32_MIN;
	uint8_t x1480 = UINT8_MAX;

    t185 = ((x1477==x1478)%(x1479/x1480));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1481 = UINT64_MAX;
	volatile uint8_t x1482 = 89U;
	static int16_t x1483 = INT16_MIN;
	int8_t x1484 = INT8_MIN;
	volatile int32_t t186 = 2964;

    t186 = ((x1481==x1482)%(x1483/x1484));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1493 = 1;
	volatile int16_t x1494 = 3925;
	int64_t x1495 = -1LL;
	int16_t x1496 = -1;
	int64_t t187 = 23979574LL;

    t187 = ((x1493==x1494)%(x1495/x1496));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x1501 = 48U;
	int64_t x1502 = INT64_MIN;
	uint16_t x1503 = UINT16_MAX;
	static int8_t x1504 = INT8_MIN;
	volatile int32_t t188 = 466;

    t188 = ((x1501==x1502)%(x1503/x1504));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x1521 = -1;
	int32_t x1522 = INT32_MAX;
	uint16_t x1523 = UINT16_MAX;
	volatile int32_t t189 = -155322;

    t189 = ((x1521==x1522)%(x1523/x1524));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1525 = INT8_MIN;
	int64_t x1526 = INT64_MIN;
	static uint16_t x1528 = 35U;
	int32_t t190 = 8738447;

    t190 = ((x1525==x1526)%(x1527/x1528));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1529 = 70U;
	static volatile uint64_t x1531 = 50LLU;
	uint64_t x1532 = 32LLU;
	volatile uint64_t t191 = 15803LLU;

    t191 = ((x1529==x1530)%(x1531/x1532));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1537 = INT16_MIN;
	int16_t x1538 = 1629;
	int32_t x1539 = INT32_MAX;
	uint16_t x1540 = 31U;

    t192 = ((x1537==x1538)%(x1539/x1540));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1541 = 10U;
	int8_t x1542 = INT8_MAX;
	static uint16_t x1543 = UINT16_MAX;
	uint8_t x1544 = 7U;
	volatile int32_t t193 = -1644;

    t193 = ((x1541==x1542)%(x1543/x1544));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x1545 = 584;
	static int32_t x1546 = -1;
	uint32_t x1548 = 81688583U;
	uint64_t t194 = 42516997LLU;

    t194 = ((x1545==x1546)%(x1547/x1548));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x1549 = -1LL;
	int8_t x1551 = INT8_MAX;
	int16_t x1552 = 27;

    t195 = ((x1549==x1550)%(x1551/x1552));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1557 = -3;
	volatile uint16_t x1558 = 7U;
	volatile uint8_t x1559 = UINT8_MAX;
	int8_t x1560 = INT8_MIN;
	int32_t t196 = 1250;

    t196 = ((x1557==x1558)%(x1559/x1560));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x1565 = 38126270U;
	uint8_t x1566 = 6U;
	volatile int32_t x1567 = INT32_MAX;
	static int16_t x1568 = INT16_MAX;
	volatile int32_t t197 = 813850129;

    t197 = ((x1565==x1566)%(x1567/x1568));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x1570 = -1LL;
	int32_t x1571 = -8324713;
	int32_t x1572 = 5365353;
	static volatile int32_t t198 = -8005;

    t198 = ((x1569==x1570)%(x1571/x1572));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1573 = UINT32_MAX;
	int64_t x1574 = 29022399973547248LL;
	int64_t x1575 = INT64_MAX;
	int16_t x1576 = 1;
	int64_t t199 = 3073640LL;

    t199 = ((x1573==x1574)%(x1575/x1576));

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


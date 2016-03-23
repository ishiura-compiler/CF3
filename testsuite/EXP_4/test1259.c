
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

static uint32_t x1 = UINT32_MAX;
int8_t x4 = INT8_MIN;
volatile uint32_t x52 = UINT32_MAX;
static int64_t x69 = -56188805LL;
volatile uint8_t x71 = UINT8_MAX;
uint8_t x92 = 1U;
volatile int16_t x96 = INT16_MIN;
static volatile uint64_t t12 = 117325777814LLU;
static volatile int32_t t14 = 61654;
uint16_t x141 = 1U;
static int64_t x167 = 221LL;
int8_t x172 = INT8_MIN;
int8_t x174 = 3;
uint64_t x195 = UINT64_MAX;
int64_t x207 = INT64_MAX;
int64_t x234 = 16227347509417LL;
uint16_t x236 = 3306U;
int64_t x237 = 15380326154880LL;
uint8_t x262 = 1U;
volatile int16_t x263 = INT16_MIN;
uint8_t x264 = UINT8_MAX;
static int32_t x269 = -58;
uint8_t x272 = 3U;
uint8_t x276 = 110U;
int8_t x279 = INT8_MIN;
volatile int64_t t29 = -64389825141287LL;
volatile uint16_t x284 = 158U;
uint8_t x297 = 3U;
static uint64_t x298 = 536056629398025LLU;
uint8_t x303 = 63U;
int32_t x304 = INT32_MIN;
static volatile uint64_t t32 = 49LLU;
volatile int32_t t33 = -595565336;
uint64_t x322 = 0LLU;
uint32_t x330 = 10U;
int32_t x349 = INT32_MIN;
uint64_t t37 = 436LLU;
uint16_t x377 = 10443U;
static int32_t x397 = INT32_MIN;
uint16_t x414 = 8U;
int64_t x421 = 727641588873356227LL;
uint16_t x431 = 29628U;
volatile uint16_t x434 = UINT16_MAX;
volatile int32_t t45 = 2;
int16_t x465 = INT16_MIN;
uint32_t x467 = 131U;
int16_t x472 = INT16_MAX;
int16_t x483 = -1;
volatile uint64_t x490 = 1746044134606521LLU;
volatile int32_t t54 = -896314898;
int16_t x505 = INT16_MAX;
int32_t x522 = 88982;
int32_t t57 = 18;
int8_t x533 = 4;
uint32_t x540 = 728U;
static int32_t x559 = 31937;
uint16_t x568 = 512U;
uint8_t x570 = UINT8_MAX;
volatile int64_t x579 = -291921710840LL;
int64_t t66 = INT64_MAX;
uint64_t x622 = 109705LLU;
volatile uint64_t t71 = 180841210990037LLU;
volatile uint8_t x635 = 102U;
volatile int64_t t72 = -395053884398LL;
uint32_t x686 = 1493U;
int16_t x687 = 257;
static int8_t x712 = -1;
uint64_t x713 = 2762LLU;
uint8_t x714 = 52U;
int8_t x717 = -1;
int32_t x724 = INT32_MIN;
volatile uint16_t x726 = 11970U;
int8_t x739 = 3;
int32_t t88 = -1496;
int8_t x750 = 1;
static uint64_t x755 = UINT64_MAX;
volatile int32_t t91 = 400;
int8_t x767 = INT8_MIN;
static uint8_t x768 = 0U;
int32_t x777 = -30075279;
int32_t x778 = 4194;
uint16_t x783 = 281U;
volatile int32_t x786 = 69943691;
int8_t x794 = 1;
volatile int16_t x799 = INT16_MAX;
static volatile int32_t t99 = -17753169;
int32_t x807 = INT32_MAX;
uint64_t x814 = 10598068957LLU;
uint8_t x834 = 18U;
uint8_t x835 = 103U;
int64_t x836 = 749632596961LL;
static uint64_t t104 = 0LLU;
uint64_t x885 = 1800776LLU;
uint32_t x905 = 3U;
int32_t x907 = -1;
volatile uint32_t t110 = 137497000U;
int16_t x933 = INT16_MIN;
int16_t x957 = 3;
static uint64_t t114 = 587105620377LLU;
int32_t x992 = INT32_MAX;
uint16_t x994 = 3608U;
uint32_t x996 = 14U;
volatile uint64_t t121 = 31231134LLU;
static volatile int64_t x1072 = 139774410901424839LL;
uint8_t x1082 = UINT8_MAX;
volatile int16_t x1114 = 13;
int32_t x1119 = INT32_MAX;
static volatile uint8_t x1122 = 3U;
int8_t x1126 = 1;
int32_t t129 = 902235323;
volatile int32_t t130 = -862;
volatile int64_t t131 = INT64_MIN;
uint8_t x1166 = 94U;
static uint32_t x1167 = 89062U;
static volatile uint16_t x1182 = 1U;
volatile int8_t x1184 = INT8_MIN;
volatile uint64_t t136 = 69106707988888LLU;
int64_t x1191 = 0LL;
uint8_t x1198 = 3U;
int32_t x1203 = 2734;
uint32_t t139 = 325U;
static uint64_t x1209 = 164567LLU;
int8_t x1211 = INT8_MIN;
volatile uint64_t t140 = 52757LLU;
int64_t x1213 = INT64_MIN;
volatile int16_t x1214 = 0;
static int16_t x1242 = INT16_MAX;
int8_t x1247 = -5;
int16_t x1292 = 13214;
volatile uint64_t t152 = 159766465333964013LLU;
int8_t x1311 = INT8_MAX;
static int32_t x1319 = -1;
static volatile int32_t t154 = INT32_MAX;
static uint8_t x1323 = 56U;
volatile int32_t t155 = 0;
uint8_t x1334 = UINT8_MAX;
uint64_t x1338 = 455066LLU;
uint64_t t158 = 393LLU;
int64_t t159 = INT64_MAX;
volatile uint32_t t160 = 0U;
int16_t x1349 = INT16_MAX;
volatile int8_t x1355 = 17;
volatile uint64_t t164 = UINT64_MAX;
static int32_t x1375 = -46943;
static int64_t x1376 = 1264282LL;
uint32_t x1402 = UINT32_MAX;
int32_t x1409 = INT32_MIN;
uint64_t x1429 = 2213273606228LLU;
uint64_t x1437 = 4386317079LLU;
static int16_t x1449 = INT16_MIN;
volatile int8_t x1454 = INT8_MAX;
static uint8_t x1462 = 25U;
int64_t x1469 = -978550129LL;
static int16_t x1474 = INT16_MAX;
volatile int16_t x1500 = 5;
volatile uint8_t x1522 = 14U;
volatile uint32_t t178 = 17679330U;
uint8_t x1526 = 6U;
uint32_t x1548 = UINT32_MAX;
int8_t x1578 = 1;
volatile uint64_t t185 = 91456513LLU;
int64_t t188 = 4LL;
volatile int8_t x1628 = INT8_MIN;
volatile int64_t t189 = 113625994LL;
uint8_t x1630 = 15U;
int32_t x1636 = 6;
uint64_t x1641 = 7523176381LLU;
volatile int16_t x1643 = -1;
uint8_t x1646 = 69U;
int64_t x1668 = -1LL;
int32_t x1669 = -5425;
int64_t x1671 = -1LL;
static uint16_t x1672 = 0U;
volatile uint64_t x1678 = 5LLU;
static volatile uint16_t x1680 = UINT16_MAX;
uint32_t x1694 = 361823670U;
int8_t x1695 = INT8_MIN;
static volatile uint32_t t198 = 2037675U;
uint64_t x1697 = 23247LLU;
volatile int8_t x1698 = 61;
static volatile uint64_t t199 = 457953137932LLU;


void f0(void) {
    	int8_t x2 = INT8_MAX;
	static volatile int8_t x3 = -1;
	static uint32_t t0 = UINT32_MAX;

    t0 = (x1|(x2<<(x3!=x4)));

    if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	uint16_t x6 = 5001U;
	uint16_t x7 = 538U;
	static int64_t x8 = -8919LL;
	int64_t t1 = 1LL;

    t1 = (x5|(x6<<(x7!=x8)));

    if (t1 != -9223372036854765806LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int64_t x25 = -1LL;
	int8_t x26 = INT8_MAX;
	static int32_t x27 = INT32_MIN;
	uint32_t x28 = UINT32_MAX;
	int64_t t2 = -13046LL;

    t2 = (x25|(x26<<(x27!=x28)));

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x45 = INT64_MAX;
	volatile uint64_t x46 = 131781584979867LLU;
	int32_t x47 = INT32_MIN;
	static int8_t x48 = INT8_MAX;
	static uint64_t t3 = 3672038429LLU;

    t3 = (x45|(x46<<(x47!=x48)));

    if (t3 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint16_t x49 = UINT16_MAX;
	uint8_t x50 = 69U;
	static uint64_t x51 = 374933523330758LLU;
	volatile int32_t t4 = -900076858;

    t4 = (x49|(x50<<(x51!=x52)));

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x61 = UINT8_MAX;
	volatile uint8_t x62 = UINT8_MAX;
	volatile int8_t x63 = INT8_MIN;
	static int16_t x64 = 3;
	static volatile int32_t t5 = 71826452;

    t5 = (x61|(x62<<(x63!=x64)));

    if (t5 != 511) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x70 = 0;
	static uint32_t x72 = 235785231U;
	volatile int64_t t6 = 101134LL;

    t6 = (x69|(x70<<(x71!=x72)));

    if (t6 != -56188805LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x73 = -9824080LL;
	int16_t x74 = INT16_MAX;
	uint16_t x75 = UINT16_MAX;
	uint64_t x76 = 55917006540047301LLU;
	volatile int64_t t7 = 50133LL;

    t7 = (x73|(x74<<(x75!=x76)));

    if (t7 != -9764866LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x81 = INT64_MIN;
	uint32_t x82 = 61654515U;
	static volatile int16_t x83 = INT16_MIN;
	int8_t x84 = -57;
	static int64_t t8 = -2344216151675990810LL;

    t8 = (x81|(x82<<(x83!=x84)));

    if (t8 != -9223372036731466778LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x89 = INT8_MIN;
	static uint16_t x90 = UINT16_MAX;
	static volatile uint32_t x91 = UINT32_MAX;
	volatile int32_t t9 = 132434;

    t9 = (x89|(x90<<(x91!=x92)));

    if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x93 = INT16_MAX;
	static uint64_t x94 = 59540887512295LLU;
	uint8_t x95 = 52U;
	uint64_t t10 = 238251794574860778LLU;

    t10 = (x93|(x94<<(x95!=x96)));

    if (t10 != 119081775038463LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x97 = 54;
	int16_t x98 = 3171;
	uint32_t x99 = 3548U;
	int8_t x100 = INT8_MAX;
	int32_t t11 = 284855;

    t11 = (x97|(x98<<(x99!=x100)));

    if (t11 != 6390) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x117 = -6;
	uint64_t x118 = 2776900745581905971LLU;
	uint64_t x119 = UINT64_MAX;
	static volatile uint16_t x120 = 1U;

    t12 = (x117|(x118<<(x119!=x120)));

    if (t12 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x129 = INT32_MIN;
	int32_t x130 = 644685;
	uint32_t x131 = 54U;
	uint32_t x132 = 6U;
	volatile int32_t t13 = 1;

    t13 = (x129|(x130<<(x131!=x132)));

    if (t13 != -2146194278) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x137 = 8;
	static uint8_t x138 = UINT8_MAX;
	uint32_t x139 = 37U;
	static int32_t x140 = 15769425;

    t14 = (x137|(x138<<(x139!=x140)));

    if (t14 != 510) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x142 = UINT64_MAX;
	volatile uint64_t x143 = 1060711927869527LLU;
	int8_t x144 = INT8_MIN;
	uint64_t t15 = UINT64_MAX;

    t15 = (x141|(x142<<(x143!=x144)));

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x161 = 95U;
	uint16_t x162 = 1823U;
	volatile uint32_t x163 = 752066425U;
	static uint8_t x164 = UINT8_MAX;
	volatile int32_t t16 = 693043;

    t16 = (x161|(x162<<(x163!=x164)));

    if (t16 != 3711) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x165 = UINT32_MAX;
	int64_t x166 = 0LL;
	int8_t x168 = -30;
	int64_t t17 = -12LL;

    t17 = (x165|(x166<<(x167!=x168)));

    if (t17 != 4294967295LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x169 = 161;
	static int16_t x170 = 13;
	int64_t x171 = -1LL;
	static volatile int32_t t18 = -480894846;

    t18 = (x169|(x170<<(x171!=x172)));

    if (t18 != 187) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x173 = UINT16_MAX;
	uint64_t x175 = UINT64_MAX;
	static uint8_t x176 = 24U;
	static volatile int32_t t19 = -36956590;

    t19 = (x173|(x174<<(x175!=x176)));

    if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x193 = 0;
	int8_t x194 = 0;
	static int64_t x196 = INT64_MAX;
	volatile int32_t t20 = 2;

    t20 = (x193|(x194<<(x195!=x196)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x205 = INT8_MIN;
	int64_t x206 = 180402570646LL;
	static volatile int32_t x208 = INT32_MIN;
	int64_t t21 = -42170LL;

    t21 = (x205|(x206<<(x207!=x208)));

    if (t21 != -84LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x225 = -43837;
	uint16_t x226 = UINT16_MAX;
	volatile int64_t x227 = -619163916LL;
	volatile uint32_t x228 = 0U;
	static volatile int32_t t22 = 2;

    t22 = (x225|(x226<<(x227!=x228)));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x233 = 14512;
	uint64_t x235 = 26LLU;
	int64_t t23 = -415041414LL;

    t23 = (x233|(x234<<(x235!=x236)));

    if (t23 != 32454695025138LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x238 = 104819262U;
	int32_t x239 = -107982;
	uint16_t x240 = 0U;
	static int64_t t24 = 9121LL;

    t24 = (x237|(x238<<(x239!=x240)));

    if (t24 != 15380529469180LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x245 = -2;
	uint16_t x246 = 10U;
	int64_t x247 = INT64_MIN;
	int8_t x248 = INT8_MIN;
	int32_t t25 = -127;

    t25 = (x245|(x246<<(x247!=x248)));

    if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x261 = 6457712U;
	uint32_t t26 = 11318554U;

    t26 = (x261|(x262<<(x263!=x264)));

    if (t26 != 6457714U) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x270 = 8675881003127LL;
	uint16_t x271 = UINT16_MAX;
	int64_t t27 = -29094304096LL;

    t27 = (x269|(x270<<(x271!=x272)));

    if (t27 != -18LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x273 = INT8_MAX;
	static int8_t x274 = INT8_MAX;
	uint32_t x275 = UINT32_MAX;
	static int32_t t28 = 1158;

    t28 = (x273|(x274<<(x275!=x276)));

    if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x277 = INT64_MIN;
	uint32_t x278 = 327250704U;
	int16_t x280 = INT16_MIN;

    t29 = (x277|(x278<<(x279!=x280)));

    if (t29 != -9223372036200274400LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x281 = UINT16_MAX;
	int8_t x282 = INT8_MAX;
	volatile uint32_t x283 = UINT32_MAX;
	volatile int32_t t30 = -1;

    t30 = (x281|(x282<<(x283!=x284)));

    if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x299 = -1LL;
	uint8_t x300 = 114U;
	uint64_t t31 = 145494506118LLU;

    t31 = (x297|(x298<<(x299!=x300)));

    if (t31 != 1072113258796051LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x301 = 138LLU;
	uint32_t x302 = 136267399U;

    t32 = (x301|(x302<<(x303!=x304)));

    if (t32 != 272534926LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x309 = INT8_MIN;
	int16_t x310 = 3;
	volatile uint8_t x311 = 24U;
	int64_t x312 = -37725679026873493LL;

    t33 = (x309|(x310<<(x311!=x312)));

    if (t33 != -122) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x321 = UINT16_MAX;
	int64_t x323 = -1534704671883722LL;
	int64_t x324 = 1561275LL;
	static uint64_t t34 = 2319115LLU;

    t34 = (x321|(x322<<(x323!=x324)));

    if (t34 != 65535LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x329 = 3;
	int32_t x331 = -2302013;
	int16_t x332 = INT16_MIN;
	volatile uint32_t t35 = 2U;

    t35 = (x329|(x330<<(x331!=x332)));

    if (t35 != 23U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x350 = 1;
	uint64_t x351 = 0LLU;
	int8_t x352 = 0;
	volatile int32_t t36 = -396;

    t36 = (x349|(x350<<(x351!=x352)));

    if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x357 = 1573U;
	uint64_t x358 = 2304477701234160592LLU;
	int8_t x359 = INT8_MIN;
	volatile uint8_t x360 = 113U;

    t37 = (x357|(x358<<(x359!=x360)));

    if (t37 != 4608955402468321189LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x378 = 68U;
	uint32_t x379 = 65134U;
	static uint16_t x380 = UINT16_MAX;
	int32_t t38 = 1;

    t38 = (x377|(x378<<(x379!=x380)));

    if (t38 != 10443) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x389 = INT16_MAX;
	static uint64_t x390 = 20052289720LLU;
	uint16_t x391 = 94U;
	uint32_t x392 = 62768838U;
	volatile uint64_t t39 = 6271405190199534248LLU;

    t39 = (x389|(x390<<(x391!=x392)));

    if (t39 != 40104591359LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x398 = 1U;
	static volatile uint32_t x399 = UINT32_MAX;
	volatile int8_t x400 = INT8_MAX;
	int32_t t40 = 7848123;

    t40 = (x397|(x398<<(x399!=x400)));

    if (t40 != -2147483646) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x413 = -1;
	int64_t x415 = INT64_MIN;
	uint64_t x416 = 64LLU;
	volatile int32_t t41 = -990;

    t41 = (x413|(x414<<(x415!=x416)));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x417 = UINT8_MAX;
	uint32_t x418 = 0U;
	int16_t x419 = 2;
	int16_t x420 = -95;
	volatile uint32_t t42 = 955880U;

    t42 = (x417|(x418<<(x419!=x420)));

    if (t42 != 255U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x422 = 4263;
	int32_t x423 = 293141694;
	int32_t x424 = INT32_MIN;
	int64_t t43 = 320898435907LL;

    t43 = (x421|(x422<<(x423!=x424)));

    if (t43 != 727641588873356239LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x429 = UINT32_MAX;
	uint64_t x430 = 8747385981238587084LLU;
	volatile int32_t x432 = INT32_MIN;
	static uint64_t t44 = 927986588501LLU;

    t44 = (x429|(x430<<(x431!=x432)));

    if (t44 != 17494771964189868031LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x433 = INT16_MIN;
	static volatile int64_t x435 = -1791703LL;
	static int8_t x436 = INT8_MIN;

    t45 = (x433|(x434<<(x435!=x436)));

    if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x457 = 28198U;
	int16_t x458 = INT16_MAX;
	int16_t x459 = INT16_MIN;
	int16_t x460 = INT16_MIN;
	volatile uint32_t t46 = 1092898U;

    t46 = (x457|(x458<<(x459!=x460)));

    if (t46 != 32767U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x466 = 1166623LL;
	uint16_t x468 = 236U;
	int64_t t47 = 1034231226925012LL;

    t47 = (x465|(x466<<(x467!=x468)));

    if (t47 != -26050LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x469 = 910U;
	static uint64_t x470 = 13861055LLU;
	volatile int8_t x471 = -3;
	volatile uint64_t t48 = 678372034LLU;

    t48 = (x469|(x470<<(x471!=x472)));

    if (t48 != 27722750LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x481 = -33;
	uint8_t x482 = 1U;
	static int64_t x484 = -1LL;
	int32_t t49 = 3;

    t49 = (x481|(x482<<(x483!=x484)));

    if (t49 != -33) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x485 = INT32_MIN;
	uint8_t x486 = 0U;
	uint32_t x487 = 3296914U;
	static uint32_t x488 = 15972865U;
	static int32_t t50 = INT32_MIN;

    t50 = (x485|(x486<<(x487!=x488)));

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x489 = INT8_MIN;
	volatile int64_t x491 = -3376252352258LL;
	int32_t x492 = INT32_MIN;
	uint64_t t51 = 43702LLU;

    t51 = (x489|(x490<<(x491!=x492)));

    if (t51 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x493 = -12;
	uint8_t x494 = 30U;
	int32_t x495 = 11747325;
	uint32_t x496 = UINT32_MAX;
	int32_t t52 = -302;

    t52 = (x493|(x494<<(x495!=x496)));

    if (t52 != -4) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x497 = 2U;
	uint64_t x498 = UINT64_MAX;
	int32_t x499 = -1;
	uint8_t x500 = UINT8_MAX;
	uint64_t t53 = 5LLU;

    t53 = (x497|(x498<<(x499!=x500)));

    if (t53 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x501 = INT8_MIN;
	int16_t x502 = 92;
	uint16_t x503 = UINT16_MAX;
	static int64_t x504 = -2918493LL;

    t54 = (x501|(x502<<(x503!=x504)));

    if (t54 != -72) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x506 = 46LLU;
	int64_t x507 = INT64_MIN;
	uint32_t x508 = 109516081U;
	static volatile uint64_t t55 = 941335017623517LLU;

    t55 = (x505|(x506<<(x507!=x508)));

    if (t55 != 32767LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x517 = UINT16_MAX;
	static uint64_t x518 = 684LLU;
	volatile int64_t x519 = -470928851753562LL;
	volatile uint16_t x520 = UINT16_MAX;
	static uint64_t t56 = 26LLU;

    t56 = (x517|(x518<<(x519!=x520)));

    if (t56 != 65535LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x521 = INT32_MIN;
	static int16_t x523 = INT16_MAX;
	static int32_t x524 = INT32_MIN;

    t57 = (x521|(x522<<(x523!=x524)));

    if (t57 != -2147305684) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x534 = 6657109252LL;
	static uint16_t x535 = UINT16_MAX;
	static int16_t x536 = INT16_MIN;
	int64_t t58 = -13422LL;

    t58 = (x533|(x534<<(x535!=x536)));

    if (t58 != 13314218508LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x537 = 8041345152278LL;
	uint64_t x538 = UINT64_MAX;
	volatile uint16_t x539 = 14U;
	volatile uint64_t t59 = 269386048LLU;

    t59 = (x537|(x538<<(x539!=x540)));

    if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x541 = 378LL;
	uint64_t x542 = 251257835254832LLU;
	uint16_t x543 = 24384U;
	static int8_t x544 = -56;
	static uint64_t t60 = 88575523601173012LLU;

    t60 = (x541|(x542<<(x543!=x544)));

    if (t60 != 502515670509946LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x553 = INT8_MAX;
	static uint32_t x554 = 269U;
	uint16_t x555 = UINT16_MAX;
	static int16_t x556 = 537;
	uint32_t t61 = 3U;

    t61 = (x553|(x554<<(x555!=x556)));

    if (t61 != 639U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x557 = INT32_MAX;
	uint64_t x558 = 7106949LLU;
	static uint16_t x560 = UINT16_MAX;
	volatile uint64_t t62 = 15893421LLU;

    t62 = (x557|(x558<<(x559!=x560)));

    if (t62 != 2147483647LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x561 = -154;
	int8_t x562 = 1;
	int64_t x563 = -129501088547919LL;
	static int16_t x564 = -9;
	static volatile int32_t t63 = -374;

    t63 = (x561|(x562<<(x563!=x564)));

    if (t63 != -154) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int8_t x565 = -1;
	static uint16_t x566 = 32485U;
	volatile int8_t x567 = INT8_MIN;
	static int32_t t64 = -11040024;

    t64 = (x565|(x566<<(x567!=x568)));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x569 = 3U;
	uint64_t x571 = 18457980825LLU;
	int16_t x572 = INT16_MAX;
	int32_t t65 = 48543;

    t65 = (x569|(x570<<(x571!=x572)));

    if (t65 != 511) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x577 = INT64_MAX;
	uint32_t x578 = 13U;
	static int16_t x580 = -1;

    t66 = (x577|(x578<<(x579!=x580)));

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x581 = INT64_MIN;
	int32_t x582 = INT32_MAX;
	int8_t x583 = INT8_MIN;
	int8_t x584 = INT8_MIN;
	volatile int64_t t67 = 229LL;

    t67 = (x581|(x582<<(x583!=x584)));

    if (t67 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x585 = 1833U;
	uint16_t x586 = UINT16_MAX;
	int64_t x587 = INT64_MIN;
	int16_t x588 = -1;
	int32_t t68 = -54845;

    t68 = (x585|(x586<<(x587!=x588)));

    if (t68 != 131071) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x589 = 12;
	int32_t x590 = 3739472;
	uint8_t x591 = 44U;
	uint16_t x592 = 1143U;
	static volatile int32_t t69 = -679172623;

    t69 = (x589|(x590<<(x591!=x592)));

    if (t69 != 7478956) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x593 = -1LL;
	uint32_t x594 = 0U;
	volatile int32_t x595 = -1;
	int8_t x596 = 0;
	static int64_t t70 = -360661879250512LL;

    t70 = (x593|(x594<<(x595!=x596)));

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x621 = 0;
	volatile uint64_t x623 = UINT64_MAX;
	static uint32_t x624 = 1746U;

    t71 = (x621|(x622<<(x623!=x624)));

    if (t71 != 219410LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x633 = 8028LL;
	int8_t x634 = INT8_MAX;
	int64_t x636 = INT64_MIN;

    t72 = (x633|(x634<<(x635!=x636)));

    if (t72 != 8190LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x641 = 20961U;
	uint8_t x642 = UINT8_MAX;
	uint16_t x643 = 5U;
	uint32_t x644 = UINT32_MAX;
	int32_t t73 = -739468;

    t73 = (x641|(x642<<(x643!=x644)));

    if (t73 != 20991) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x649 = INT32_MAX;
	int8_t x650 = INT8_MAX;
	static uint32_t x651 = 14U;
	int64_t x652 = INT64_MAX;
	volatile int32_t t74 = INT32_MAX;

    t74 = (x649|(x650<<(x651!=x652)));

    if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x653 = INT8_MIN;
	uint64_t x654 = UINT64_MAX;
	volatile uint16_t x655 = 1U;
	int64_t x656 = INT64_MIN;
	static uint64_t t75 = 6922LLU;

    t75 = (x653|(x654<<(x655!=x656)));

    if (t75 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x665 = 1491863649474114LL;
	volatile uint32_t x666 = UINT32_MAX;
	uint16_t x667 = 13803U;
	uint8_t x668 = 77U;
	int64_t t76 = 1LL;

    t76 = (x665|(x666<<(x667!=x668)));

    if (t76 != 1491865480200190LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x669 = 52U;
	volatile int64_t x670 = 4794560995001325LL;
	static uint32_t x671 = 27070U;
	int8_t x672 = 4;
	int64_t t77 = 173071LL;

    t77 = (x669|(x670<<(x671!=x672)));

    if (t77 != 9589121990002686LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x677 = -1LL;
	uint64_t x678 = 84906LLU;
	int32_t x679 = -402261077;
	static int64_t x680 = -1LL;
	volatile uint64_t t78 = UINT64_MAX;

    t78 = (x677|(x678<<(x679!=x680)));

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x685 = INT16_MIN;
	uint8_t x688 = 13U;
	volatile uint32_t t79 = 2242U;

    t79 = (x685|(x686<<(x687!=x688)));

    if (t79 != 4294937514U) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x697 = INT32_MIN;
	static uint32_t x698 = 5198408U;
	static uint32_t x699 = UINT32_MAX;
	int16_t x700 = 1834;
	static volatile uint32_t t80 = 14142392U;

    t80 = (x697|(x698<<(x699!=x700)));

    if (t80 != 2157880464U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x701 = -13;
	uint64_t x702 = UINT64_MAX;
	int8_t x703 = 3;
	int64_t x704 = INT64_MIN;
	volatile uint64_t t81 = UINT64_MAX;

    t81 = (x701|(x702<<(x703!=x704)));

    if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x709 = -1;
	int32_t x710 = 82;
	int16_t x711 = 1;
	static volatile int32_t t82 = 644943;

    t82 = (x709|(x710<<(x711!=x712)));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x715 = 3U;
	uint32_t x716 = 25777U;
	uint64_t t83 = 3989032862326252LLU;

    t83 = (x713|(x714<<(x715!=x716)));

    if (t83 != 2794LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x718 = 9;
	int32_t x719 = -1;
	uint8_t x720 = 0U;
	static int32_t t84 = 1933;

    t84 = (x717|(x718<<(x719!=x720)));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x721 = UINT32_MAX;
	static int16_t x722 = INT16_MAX;
	int64_t x723 = INT64_MIN;
	static uint32_t t85 = UINT32_MAX;

    t85 = (x721|(x722<<(x723!=x724)));

    if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x725 = INT64_MIN;
	int32_t x727 = 2;
	static uint64_t x728 = 526645724678063104LLU;
	static int64_t t86 = -1086404532302LL;

    t86 = (x725|(x726<<(x727!=x728)));

    if (t86 != -9223372036854751868LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x733 = UINT32_MAX;
	volatile int64_t x734 = 28776810598738592LL;
	int32_t x735 = -1;
	int16_t x736 = 20;
	volatile int64_t t87 = 61090592213638486LL;

    t87 = (x733|(x734<<(x735!=x736)));

    if (t87 != 57553622623322111LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x737 = 189U;
	int8_t x738 = 2;
	static int8_t x740 = INT8_MIN;

    t88 = (x737|(x738<<(x739!=x740)));

    if (t88 != 189) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x741 = INT64_MIN;
	uint32_t x742 = UINT32_MAX;
	int64_t x743 = -31330012609059LL;
	static int8_t x744 = INT8_MIN;
	volatile int64_t t89 = 92046601559452414LL;

    t89 = (x741|(x742<<(x743!=x744)));

    if (t89 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x749 = -529;
	int8_t x751 = INT8_MAX;
	int64_t x752 = 3850433337LL;
	volatile int32_t t90 = -2;

    t90 = (x749|(x750<<(x751!=x752)));

    if (t90 != -529) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x753 = INT16_MAX;
	static uint8_t x754 = 15U;
	static uint32_t x756 = UINT32_MAX;

    t91 = (x753|(x754<<(x755!=x756)));

    if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x757 = -1;
	volatile int16_t x758 = INT16_MAX;
	uint8_t x759 = 59U;
	int16_t x760 = INT16_MIN;
	int32_t t92 = 30135036;

    t92 = (x757|(x758<<(x759!=x760)));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x761 = 35346615136393LLU;
	uint16_t x762 = UINT16_MAX;
	int8_t x763 = INT8_MAX;
	int8_t x764 = -1;
	static uint64_t t93 = 1022LLU;

    t93 = (x761|(x762<<(x763!=x764)));

    if (t93 != 35346615238655LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x765 = INT32_MAX;
	uint8_t x766 = 7U;
	int32_t t94 = INT32_MAX;

    t94 = (x765|(x766<<(x767!=x768)));

    if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x779 = -1LL;
	int8_t x780 = 0;
	int32_t t95 = 126068414;

    t95 = (x777|(x778<<(x779!=x780)));

    if (t95 != -30066955) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x781 = INT8_MIN;
	static int8_t x782 = 1;
	int32_t x784 = -72;
	volatile int32_t t96 = -275009410;

    t96 = (x781|(x782<<(x783!=x784)));

    if (t96 != -126) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x785 = 4296479594765LLU;
	int32_t x787 = INT32_MIN;
	uint32_t x788 = UINT32_MAX;
	uint64_t t97 = 2983LLU;

    t97 = (x785|(x786<<(x787!=x788)));

    if (t97 != 4296485100319LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x793 = 0;
	int8_t x795 = INT8_MAX;
	static volatile int64_t x796 = INT64_MIN;
	static volatile int32_t t98 = -1;

    t98 = (x793|(x794<<(x795!=x796)));

    if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x797 = -1;
	static uint8_t x798 = 43U;
	uint64_t x800 = 25555931654919LLU;

    t99 = (x797|(x798<<(x799!=x800)));

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x805 = -2393;
	static uint64_t x806 = UINT64_MAX;
	uint8_t x808 = 81U;
	uint64_t t100 = UINT64_MAX;

    t100 = (x805|(x806<<(x807!=x808)));

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x813 = INT32_MIN;
	static volatile int64_t x815 = INT64_MIN;
	uint16_t x816 = 1905U;
	uint64_t t101 = 5417085447087LLU;

    t101 = (x813|(x814<<(x815!=x816)));

    if (t101 != 18446744073430853050LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x821 = 13U;
	uint16_t x822 = 18388U;
	uint64_t x823 = 121228224273237LLU;
	static int64_t x824 = 727LL;
	int32_t t102 = -2;

    t102 = (x821|(x822<<(x823!=x824)));

    if (t102 != 36781) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x833 = INT8_MIN;
	static volatile int32_t t103 = -123433;

    t103 = (x833|(x834<<(x835!=x836)));

    if (t103 != -92) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x841 = 11U;
	uint64_t x842 = 593315968038LLU;
	int16_t x843 = 1685;
	volatile int16_t x844 = -1;

    t104 = (x841|(x842<<(x843!=x844)));

    if (t104 != 1186631936079LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x853 = UINT16_MAX;
	uint32_t x854 = 2U;
	int64_t x855 = INT64_MAX;
	int64_t x856 = INT64_MIN;
	uint32_t t105 = 101U;

    t105 = (x853|(x854<<(x855!=x856)));

    if (t105 != 65535U) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x881 = 1291022077LL;
	uint32_t x882 = UINT32_MAX;
	int8_t x883 = INT8_MIN;
	int32_t x884 = 1;
	int64_t t106 = 44831061LL;

    t106 = (x881|(x882<<(x883!=x884)));

    if (t106 != 4294967295LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x886 = INT16_MAX;
	uint32_t x887 = UINT32_MAX;
	int8_t x888 = INT8_MAX;
	uint64_t t107 = 35339565795500557LLU;

    t107 = (x885|(x886<<(x887!=x888)));

    if (t107 != 1835006LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x906 = INT32_MAX;
	int16_t x908 = -1;
	uint32_t t108 = 102U;

    t108 = (x905|(x906<<(x907!=x908)));

    if (t108 != 2147483647U) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x917 = INT32_MAX;
	uint64_t x918 = UINT64_MAX;
	static int64_t x919 = -6069LL;
	volatile int32_t x920 = 41;
	uint64_t t109 = UINT64_MAX;

    t109 = (x917|(x918<<(x919!=x920)));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x921 = 0U;
	uint16_t x922 = 0U;
	uint8_t x923 = 5U;
	int64_t x924 = 4155222096056847LL;

    t110 = (x921|(x922<<(x923!=x924)));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x934 = 174705335;
	int32_t x935 = 52698916;
	static int32_t x936 = -1;
	volatile int32_t t111 = 1;

    t111 = (x933|(x934<<(x935!=x936)));

    if (t111 != -27282) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x937 = INT16_MAX;
	int32_t x938 = 194660;
	int16_t x939 = INT16_MAX;
	volatile int64_t x940 = -85LL;
	int32_t t112 = 4262654;

    t112 = (x937|(x938<<(x939!=x940)));

    if (t112 != 393215) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x958 = UINT8_MAX;
	int32_t x959 = INT32_MAX;
	uint8_t x960 = 8U;
	int32_t t113 = 304990;

    t113 = (x957|(x958<<(x959!=x960)));

    if (t113 != 511) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x977 = 30797U;
	static uint64_t x978 = 42946692408670LLU;
	int64_t x979 = INT64_MIN;
	static int16_t x980 = -7;

    t114 = (x977|(x978<<(x979!=x980)));

    if (t114 != 85893384829693LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int8_t x985 = INT8_MAX;
	uint8_t x986 = 20U;
	uint8_t x987 = UINT8_MAX;
	int64_t x988 = -222055651697649290LL;
	int32_t t115 = -24132;

    t115 = (x985|(x986<<(x987!=x988)));

    if (t115 != 127) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x989 = 417U;
	static uint8_t x990 = 4U;
	static int16_t x991 = 6281;
	uint32_t t116 = 3U;

    t116 = (x989|(x990<<(x991!=x992)));

    if (t116 != 425U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x993 = -1;
	int8_t x995 = INT8_MAX;
	int32_t t117 = 2;

    t117 = (x993|(x994<<(x995!=x996)));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x1021 = 84026983806132459LLU;
	uint16_t x1022 = 13U;
	uint64_t x1023 = UINT64_MAX;
	volatile uint64_t x1024 = UINT64_MAX;
	static volatile uint64_t t118 = 360256LLU;

    t118 = (x1021|(x1022<<(x1023!=x1024)));

    if (t118 != 84026983806132463LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x1033 = INT32_MIN;
	static int8_t x1034 = INT8_MAX;
	int32_t x1035 = -167157651;
	int32_t x1036 = INT32_MIN;
	static int32_t t119 = 14;

    t119 = (x1033|(x1034<<(x1035!=x1036)));

    if (t119 != -2147483394) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint16_t x1037 = 5U;
	uint64_t x1038 = 789375725317LLU;
	int16_t x1039 = 16140;
	static uint16_t x1040 = 1U;
	volatile uint64_t t120 = 6003LLU;

    t120 = (x1037|(x1038<<(x1039!=x1040)));

    if (t120 != 1578751450639LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x1053 = 30LLU;
	uint16_t x1054 = 427U;
	int8_t x1055 = -1;
	int32_t x1056 = -1;

    t121 = (x1053|(x1054<<(x1055!=x1056)));

    if (t121 != 447LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x1069 = INT16_MIN;
	uint64_t x1070 = 7LLU;
	static volatile int32_t x1071 = INT32_MAX;
	volatile uint64_t t122 = 9065209LLU;

    t122 = (x1069|(x1070<<(x1071!=x1072)));

    if (t122 != 18446744073709518862LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x1081 = 11250496957LLU;
	volatile int16_t x1083 = INT16_MIN;
	int16_t x1084 = INT16_MAX;
	static volatile uint64_t t123 = 0LLU;

    t123 = (x1081|(x1082<<(x1083!=x1084)));

    if (t123 != 11250497023LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x1101 = -8634453192643LL;
	int8_t x1102 = 31;
	static volatile int32_t x1103 = 1;
	uint64_t x1104 = 9589887917LLU;
	int64_t t124 = -447656LL;

    t124 = (x1101|(x1102<<(x1103!=x1104)));

    if (t124 != -8634453192641LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x1109 = INT32_MIN;
	static volatile int16_t x1110 = 7;
	uint16_t x1111 = UINT16_MAX;
	uint16_t x1112 = 16U;
	static int32_t t125 = -692;

    t125 = (x1109|(x1110<<(x1111!=x1112)));

    if (t125 != -2147483634) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x1113 = -1LL;
	int8_t x1115 = INT8_MAX;
	int16_t x1116 = INT16_MIN;
	int64_t t126 = 43317187LL;

    t126 = (x1113|(x1114<<(x1115!=x1116)));

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x1117 = -18;
	volatile int8_t x1118 = 38;
	int32_t x1120 = -1;
	volatile int32_t t127 = -1373084;

    t127 = (x1117|(x1118<<(x1119!=x1120)));

    if (t127 != -18) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x1121 = 1247987153607974LL;
	volatile uint64_t x1123 = 151385LLU;
	static int64_t x1124 = INT64_MAX;
	volatile int64_t t128 = 2538004126836254555LL;

    t128 = (x1121|(x1122<<(x1123!=x1124)));

    if (t128 != 1247987153607974LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x1125 = 11U;
	static volatile int32_t x1127 = INT32_MAX;
	uint8_t x1128 = UINT8_MAX;

    t129 = (x1125|(x1126<<(x1127!=x1128)));

    if (t129 != 11) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x1133 = INT16_MIN;
	int8_t x1134 = INT8_MAX;
	int16_t x1135 = -1;
	int32_t x1136 = 250156;

    t130 = (x1133|(x1134<<(x1135!=x1136)));

    if (t130 != -32514) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x1149 = INT64_MIN;
	int32_t x1150 = 0;
	uint8_t x1151 = UINT8_MAX;
	uint64_t x1152 = 63139745LLU;

    t131 = (x1149|(x1150<<(x1151!=x1152)));

    if (t131 != INT64_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x1157 = -14;
	int8_t x1158 = INT8_MAX;
	uint8_t x1159 = UINT8_MAX;
	uint16_t x1160 = 87U;
	int32_t t132 = 202;

    t132 = (x1157|(x1158<<(x1159!=x1160)));

    if (t132 != -2) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x1165 = INT32_MIN;
	uint64_t x1168 = 342928698279207630LLU;
	volatile int32_t t133 = -4953029;

    t133 = (x1165|(x1166<<(x1167!=x1168)));

    if (t133 != -2147483460) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x1177 = -1;
	uint32_t x1178 = UINT32_MAX;
	int64_t x1179 = -1LL;
	int16_t x1180 = INT16_MIN;
	volatile uint32_t t134 = UINT32_MAX;

    t134 = (x1177|(x1178<<(x1179!=x1180)));

    if (t134 != UINT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x1181 = 5;
	static int64_t x1183 = INT64_MIN;
	volatile int32_t t135 = -118;

    t135 = (x1181|(x1182<<(x1183!=x1184)));

    if (t135 != 7) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x1185 = 7014U;
	uint64_t x1186 = 14542252471LLU;
	int64_t x1187 = 125295791706812531LL;
	volatile int8_t x1188 = 10;

    t136 = (x1185|(x1186<<(x1187!=x1188)));

    if (t136 != 29084506990LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x1189 = 36700430U;
	uint8_t x1190 = UINT8_MAX;
	int16_t x1192 = -1;
	static uint32_t t137 = 109724U;

    t137 = (x1189|(x1190<<(x1191!=x1192)));

    if (t137 != 36700670U) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x1197 = -1;
	int64_t x1199 = 2293728LL;
	volatile uint16_t x1200 = UINT16_MAX;
	volatile int32_t t138 = 318795;

    t138 = (x1197|(x1198<<(x1199!=x1200)));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x1201 = INT32_MIN;
	uint32_t x1202 = 465468U;
	static int16_t x1204 = INT16_MIN;

    t139 = (x1201|(x1202<<(x1203!=x1204)));

    if (t139 != 2148414584U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x1210 = 1555;
	static int16_t x1212 = -1;

    t140 = (x1209|(x1210<<(x1211!=x1212)));

    if (t140 != 167671LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x1215 = INT32_MIN;
	int8_t x1216 = INT8_MIN;
	volatile int64_t t141 = INT64_MIN;

    t141 = (x1213|(x1214<<(x1215!=x1216)));

    if (t141 != INT64_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x1217 = INT16_MAX;
	static volatile uint32_t x1218 = 99884U;
	static volatile int32_t x1219 = 123631;
	volatile int64_t x1220 = INT64_MAX;
	static uint32_t t142 = 1U;

    t142 = (x1217|(x1218<<(x1219!=x1220)));

    if (t142 != 229375U) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x1221 = INT8_MIN;
	static uint16_t x1222 = 544U;
	int8_t x1223 = -61;
	static int16_t x1224 = INT16_MIN;
	static int32_t t143 = 7024985;

    t143 = (x1221|(x1222<<(x1223!=x1224)));

    if (t143 != -64) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x1241 = 1653517;
	int8_t x1243 = 16;
	static uint8_t x1244 = 24U;
	int32_t t144 = -7397;

    t144 = (x1241|(x1242<<(x1243!=x1244)));

    if (t144 != 1703935) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x1245 = INT16_MIN;
	static volatile int8_t x1246 = INT8_MAX;
	uint8_t x1248 = 1U;
	volatile int32_t t145 = -677296;

    t145 = (x1245|(x1246<<(x1247!=x1248)));

    if (t145 != -32514) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x1257 = INT64_MIN;
	uint32_t x1258 = UINT32_MAX;
	static int64_t x1259 = -1LL;
	uint16_t x1260 = 348U;
	volatile int64_t t146 = -516949561LL;

    t146 = (x1257|(x1258<<(x1259!=x1260)));

    if (t146 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x1269 = -1;
	uint64_t x1270 = UINT64_MAX;
	int8_t x1271 = INT8_MIN;
	volatile int16_t x1272 = INT16_MAX;
	uint64_t t147 = UINT64_MAX;

    t147 = (x1269|(x1270<<(x1271!=x1272)));

    if (t147 != UINT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x1281 = 55U;
	uint16_t x1282 = 162U;
	uint8_t x1283 = 2U;
	static int8_t x1284 = 15;
	int32_t t148 = 53518;

    t148 = (x1281|(x1282<<(x1283!=x1284)));

    if (t148 != 375) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x1285 = INT32_MIN;
	uint8_t x1286 = UINT8_MAX;
	uint64_t x1287 = UINT64_MAX;
	int64_t x1288 = INT64_MAX;
	static volatile int32_t t149 = 525517124;

    t149 = (x1285|(x1286<<(x1287!=x1288)));

    if (t149 != -2147483138) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x1289 = UINT8_MAX;
	uint16_t x1290 = 5500U;
	volatile uint32_t x1291 = UINT32_MAX;
	int32_t t150 = 429;

    t150 = (x1289|(x1290<<(x1291!=x1292)));

    if (t150 != 11007) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x1293 = 0U;
	static uint16_t x1294 = 20U;
	static uint16_t x1295 = 27U;
	static uint64_t x1296 = 108343LLU;
	static volatile int32_t t151 = -154780500;

    t151 = (x1293|(x1294<<(x1295!=x1296)));

    if (t151 != 40) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x1301 = 70164158502949147LLU;
	uint16_t x1302 = 0U;
	uint16_t x1303 = 2U;
	volatile int64_t x1304 = -1LL;

    t152 = (x1301|(x1302<<(x1303!=x1304)));

    if (t152 != 70164158502949147LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x1309 = 54726868;
	int16_t x1310 = 5;
	uint8_t x1312 = 61U;
	volatile int32_t t153 = 161301;

    t153 = (x1309|(x1310<<(x1311!=x1312)));

    if (t153 != 54726878) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1317 = INT32_MAX;
	int8_t x1318 = INT8_MAX;
	uint8_t x1320 = 0U;

    t154 = (x1317|(x1318<<(x1319!=x1320)));

    if (t154 != INT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x1321 = 1;
	uint16_t x1322 = 19U;
	int32_t x1324 = -1531463;

    t155 = (x1321|(x1322<<(x1323!=x1324)));

    if (t155 != 39) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x1325 = -155LL;
	uint16_t x1326 = 44U;
	int32_t x1327 = -1;
	static uint16_t x1328 = 8475U;
	int64_t t156 = 24492532735812629LL;

    t156 = (x1325|(x1326<<(x1327!=x1328)));

    if (t156 != -131LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x1333 = 3;
	int64_t x1335 = INT64_MAX;
	int32_t x1336 = INT32_MIN;
	int32_t t157 = 5962847;

    t157 = (x1333|(x1334<<(x1335!=x1336)));

    if (t157 != 511) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1337 = 313132456619LL;
	int8_t x1339 = 8;
	static int64_t x1340 = -1LL;

    t158 = (x1337|(x1338<<(x1339!=x1340)));

    if (t158 != 313133104063LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x1341 = INT64_MAX;
	int32_t x1342 = 14551;
	static int32_t x1343 = INT32_MIN;
	int8_t x1344 = INT8_MAX;

    t159 = (x1341|(x1342<<(x1343!=x1344)));

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x1345 = INT8_MIN;
	uint32_t x1346 = 0U;
	int16_t x1347 = INT16_MIN;
	uint8_t x1348 = 1U;

    t160 = (x1345|(x1346<<(x1347!=x1348)));

    if (t160 != 4294967168U) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1350 = 42;
	static uint8_t x1351 = 3U;
	int64_t x1352 = -1LL;
	volatile int32_t t161 = 3762;

    t161 = (x1349|(x1350<<(x1351!=x1352)));

    if (t161 != 32767) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x1353 = -1;
	uint8_t x1354 = 2U;
	volatile uint16_t x1356 = UINT16_MAX;
	int32_t t162 = 231415;

    t162 = (x1353|(x1354<<(x1355!=x1356)));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x1357 = INT16_MIN;
	uint16_t x1358 = 116U;
	int16_t x1359 = 1;
	volatile int16_t x1360 = INT16_MAX;
	volatile int32_t t163 = 168084;

    t163 = (x1357|(x1358<<(x1359!=x1360)));

    if (t163 != -32536) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x1361 = -1;
	static volatile uint64_t x1362 = 2727LLU;
	static int32_t x1363 = -1;
	volatile int8_t x1364 = -1;

    t164 = (x1361|(x1362<<(x1363!=x1364)));

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x1373 = 1LLU;
	uint64_t x1374 = 142050898083523LLU;
	uint64_t t165 = 10027LLU;

    t165 = (x1373|(x1374<<(x1375!=x1376)));

    if (t165 != 284101796167047LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1401 = INT16_MIN;
	volatile int32_t x1403 = INT32_MIN;
	uint64_t x1404 = UINT64_MAX;
	uint32_t t166 = 94723U;

    t166 = (x1401|(x1402<<(x1403!=x1404)));

    if (t166 != 4294967294U) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x1410 = 12;
	int8_t x1411 = -1;
	int64_t x1412 = INT64_MIN;
	static int32_t t167 = -43349;

    t167 = (x1409|(x1410<<(x1411!=x1412)));

    if (t167 != -2147483624) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x1430 = 6;
	int16_t x1431 = INT16_MIN;
	int16_t x1432 = 3;
	uint64_t t168 = 5546236082689097LLU;

    t168 = (x1429|(x1430<<(x1431!=x1432)));

    if (t168 != 2213273606236LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1438 = INT16_MAX;
	uint64_t x1439 = UINT64_MAX;
	int16_t x1440 = -1;
	volatile uint64_t t169 = 1122LLU;

    t169 = (x1437|(x1438<<(x1439!=x1440)));

    if (t169 != 4386324479LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1450 = 173U;
	volatile int32_t x1451 = -1;
	static volatile int32_t x1452 = INT32_MIN;
	volatile int32_t t170 = -13989;

    t170 = (x1449|(x1450<<(x1451!=x1452)));

    if (t170 != -32422) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1453 = INT16_MIN;
	static int64_t x1455 = INT64_MIN;
	volatile int32_t x1456 = -1;
	int32_t t171 = -2;

    t171 = (x1453|(x1454<<(x1455!=x1456)));

    if (t171 != -32514) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1461 = -98;
	int64_t x1463 = -1LL;
	static int8_t x1464 = -1;
	int32_t t172 = 61857012;

    t172 = (x1461|(x1462<<(x1463!=x1464)));

    if (t172 != -97) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1470 = 6522;
	int32_t x1471 = -11089;
	static uint64_t x1472 = 3024514710431879LLU;
	volatile int64_t t173 = 99115237541LL;

    t173 = (x1469|(x1470<<(x1471!=x1472)));

    if (t173 != -978537729LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x1473 = -274;
	volatile int64_t x1475 = -30LL;
	uint16_t x1476 = UINT16_MAX;
	volatile int32_t t174 = -9;

    t174 = (x1473|(x1474<<(x1475!=x1476)));

    if (t174 != -2) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x1497 = INT64_MIN;
	uint64_t x1498 = UINT64_MAX;
	static int64_t x1499 = -580699506054708206LL;
	uint64_t t175 = 251662240479496LLU;

    t175 = (x1497|(x1498<<(x1499!=x1500)));

    if (t175 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x1501 = UINT32_MAX;
	static uint16_t x1502 = UINT16_MAX;
	int32_t x1503 = -46646508;
	int32_t x1504 = -1559664;
	uint32_t t176 = UINT32_MAX;

    t176 = (x1501|(x1502<<(x1503!=x1504)));

    if (t176 != UINT32_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x1509 = INT64_MAX;
	static uint16_t x1510 = 1015U;
	int32_t x1511 = INT32_MAX;
	static volatile int8_t x1512 = 11;
	int64_t t177 = INT64_MAX;

    t177 = (x1509|(x1510<<(x1511!=x1512)));

    if (t177 != INT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x1521 = 31241U;
	uint16_t x1523 = 0U;
	volatile int32_t x1524 = 5;

    t178 = (x1521|(x1522<<(x1523!=x1524)));

    if (t178 != 31261U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1525 = UINT8_MAX;
	uint8_t x1527 = UINT8_MAX;
	int32_t x1528 = 285;
	volatile int32_t t179 = 1105528;

    t179 = (x1525|(x1526<<(x1527!=x1528)));

    if (t179 != 255) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1541 = INT8_MIN;
	uint8_t x1542 = 89U;
	static volatile uint16_t x1543 = UINT16_MAX;
	static int8_t x1544 = 21;
	volatile int32_t t180 = 129582275;

    t180 = (x1541|(x1542<<(x1543!=x1544)));

    if (t180 != -78) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x1545 = 1416U;
	static uint16_t x1546 = 0U;
	static int64_t x1547 = INT64_MIN;
	volatile int32_t t181 = -332;

    t181 = (x1545|(x1546<<(x1547!=x1548)));

    if (t181 != 1416) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x1553 = -19;
	uint32_t x1554 = UINT32_MAX;
	int64_t x1555 = -1LL;
	volatile int32_t x1556 = -1;
	uint32_t t182 = UINT32_MAX;

    t182 = (x1553|(x1554<<(x1555!=x1556)));

    if (t182 != UINT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1565 = INT16_MIN;
	uint16_t x1566 = 1422U;
	int16_t x1567 = INT16_MAX;
	int64_t x1568 = INT64_MIN;
	static volatile int32_t t183 = 7833;

    t183 = (x1565|(x1566<<(x1567!=x1568)));

    if (t183 != -29924) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1577 = INT32_MAX;
	int16_t x1579 = -1;
	static uint32_t x1580 = 122U;
	int32_t t184 = INT32_MAX;

    t184 = (x1577|(x1578<<(x1579!=x1580)));

    if (t184 != INT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x1601 = 129141U;
	uint64_t x1602 = 19LLU;
	volatile int32_t x1603 = 241313;
	volatile int64_t x1604 = INT64_MIN;

    t185 = (x1601|(x1602<<(x1603!=x1604)));

    if (t185 != 129143LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x1605 = INT8_MIN;
	volatile uint64_t x1606 = 3541766LLU;
	uint8_t x1607 = 1U;
	int8_t x1608 = 1;
	volatile uint64_t t186 = 969842LLU;

    t186 = (x1605|(x1606<<(x1607!=x1608)));

    if (t186 != 18446744073709551494LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1609 = INT16_MIN;
	volatile uint16_t x1610 = 13053U;
	int8_t x1611 = 6;
	uint8_t x1612 = UINT8_MAX;
	volatile int32_t t187 = -17;

    t187 = (x1609|(x1610<<(x1611!=x1612)));

    if (t187 != -6662) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1621 = 1322LL;
	int16_t x1622 = INT16_MAX;
	static int16_t x1623 = -1;
	int32_t x1624 = -1;

    t188 = (x1621|(x1622<<(x1623!=x1624)));

    if (t188 != 32767LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1625 = UINT8_MAX;
	int64_t x1626 = 564788406LL;
	volatile uint32_t x1627 = 1728U;

    t189 = (x1625|(x1626<<(x1627!=x1628)));

    if (t189 != 1129576959LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1629 = 46U;
	int32_t x1631 = 416673;
	int16_t x1632 = INT16_MIN;
	int32_t t190 = -7202813;

    t190 = (x1629|(x1630<<(x1631!=x1632)));

    if (t190 != 62) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1633 = 1071;
	int16_t x1634 = INT16_MAX;
	uint8_t x1635 = 72U;
	static volatile int32_t t191 = 123488;

    t191 = (x1633|(x1634<<(x1635!=x1636)));

    if (t191 != 65535) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1642 = INT8_MAX;
	int16_t x1644 = INT16_MIN;
	volatile uint64_t t192 = 78LLU;

    t192 = (x1641|(x1642<<(x1643!=x1644)));

    if (t192 != 7523176447LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1645 = 1U;
	int8_t x1647 = INT8_MIN;
	int64_t x1648 = -1LL;
	volatile int32_t t193 = -563;

    t193 = (x1645|(x1646<<(x1647!=x1648)));

    if (t193 != 139) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1661 = 351045LL;
	volatile uint8_t x1662 = UINT8_MAX;
	uint64_t x1663 = UINT64_MAX;
	volatile int32_t x1664 = -1;
	int64_t t194 = -34495837817LL;

    t194 = (x1661|(x1662<<(x1663!=x1664)));

    if (t194 != 351231LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1665 = 12U;
	static uint64_t x1666 = 4012108807600LLU;
	uint64_t x1667 = 20329752744264963LLU;
	uint64_t t195 = 101860452601502675LLU;

    t195 = (x1665|(x1666<<(x1667!=x1668)));

    if (t195 != 8024217615212LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint16_t x1670 = UINT16_MAX;
	volatile int32_t t196 = 343645;

    t196 = (x1669|(x1670<<(x1671!=x1672)));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1677 = INT8_MIN;
	static int8_t x1679 = -1;
	uint64_t t197 = 162951LLU;

    t197 = (x1677|(x1678<<(x1679!=x1680)));

    if (t197 != 18446744073709551498LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1693 = -579215;
	uint8_t x1696 = 24U;

    t198 = (x1693|(x1694<<(x1695!=x1696)));

    if (t198 != 4294441853U) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1699 = 10630613LL;
	static volatile int64_t x1700 = 467388728LL;

    t199 = (x1697|(x1698<<(x1699!=x1700)));

    if (t199 != 23295LLU) { NG(); } else { ; }
	
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


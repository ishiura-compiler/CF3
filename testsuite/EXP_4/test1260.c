
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

int32_t t0 = -3;
int8_t x13 = -3;
uint8_t x18 = 0U;
static uint8_t x22 = UINT8_MAX;
volatile uint32_t x23 = UINT32_MAX;
volatile int64_t x24 = INT64_MAX;
static volatile uint32_t x30 = 1539020U;
uint32_t t4 = 218565U;
volatile int8_t x33 = INT8_MIN;
uint32_t x35 = UINT32_MAX;
int64_t x38 = 2148440556LL;
int64_t t6 = 14509835236LL;
uint64_t x50 = 17801LLU;
int16_t x56 = -15283;
uint32_t t8 = 419059897U;
int32_t x57 = INT32_MIN;
static uint64_t x58 = UINT64_MAX;
volatile int32_t x61 = 6075;
int8_t x72 = INT8_MIN;
uint32_t x98 = UINT32_MAX;
int64_t x103 = 25LL;
int64_t t14 = 13377508512338LL;
int8_t x140 = INT8_MIN;
int16_t x153 = 13;
int64_t x155 = INT64_MIN;
uint8_t x180 = 17U;
int32_t x187 = INT32_MAX;
int8_t x193 = -9;
uint8_t x194 = UINT8_MAX;
volatile int32_t x196 = 40762158;
uint64_t x217 = 44395458734203631LLU;
int8_t x219 = 4;
int32_t x229 = INT32_MIN;
uint8_t x230 = 38U;
uint64_t x238 = 29LLU;
volatile int64_t x245 = -1LL;
static int8_t x255 = INT8_MAX;
uint16_t x274 = UINT16_MAX;
uint8_t x279 = 23U;
uint8_t x280 = UINT8_MAX;
static int32_t t35 = 3203951;
uint16_t x288 = 40U;
uint64_t x290 = 105414670LLU;
int8_t x315 = INT8_MIN;
static volatile int16_t x321 = INT16_MAX;
int8_t x322 = 6;
static uint64_t x334 = 5LLU;
int32_t x336 = INT32_MIN;
static uint8_t x342 = UINT8_MAX;
int16_t x343 = -2440;
volatile int16_t x344 = 5;
int16_t x345 = -1;
uint16_t x350 = 338U;
static uint32_t x360 = 10U;
int32_t t48 = -28308536;
uint8_t x386 = 2U;
volatile uint64_t t53 = 41151909504410LLU;
volatile uint64_t t54 = 1518314LLU;
uint8_t x418 = 0U;
static uint16_t x426 = UINT16_MAX;
int64_t t57 = 2212609LL;
static int32_t t58 = 20;
int32_t t59 = -2;
int64_t x476 = INT64_MAX;
int8_t x479 = -1;
uint16_t x480 = UINT16_MAX;
uint32_t x483 = 187U;
int64_t x487 = -333958843LL;
static uint64_t t65 = 13190036LLU;
int32_t x490 = 109169439;
int32_t t66 = 102;
uint8_t x503 = 10U;
int32_t x504 = INT32_MIN;
int16_t x509 = INT16_MIN;
volatile uint32_t t70 = 122047763U;
volatile uint32_t t71 = 1U;
volatile uint8_t x538 = 3U;
static volatile int32_t x545 = INT32_MAX;
uint32_t x546 = 517023531U;
int64_t t75 = 24249833954882100LL;
int32_t t78 = 4;
int16_t x589 = INT16_MIN;
uint64_t x591 = 819773788LLU;
static volatile int64_t t82 = 502766157504LL;
uint32_t x611 = UINT32_MAX;
volatile uint64_t t84 = 90761952533045LLU;
static int32_t x644 = -1;
uint16_t x651 = 1U;
static int16_t x703 = -1;
uint32_t x706 = 53028U;
uint16_t x722 = 28497U;
int8_t x723 = INT8_MIN;
volatile uint64_t x729 = 108964999834LLU;
int8_t x737 = -1;
uint32_t x738 = 8065425U;
uint8_t x741 = 32U;
volatile int16_t x760 = -1;
static volatile uint8_t x761 = UINT8_MAX;
int16_t x764 = INT16_MAX;
uint32_t x766 = 612366U;
static int32_t x780 = INT32_MAX;
volatile int8_t x782 = INT8_MAX;
int64_t t110 = -74166LL;
volatile uint32_t t111 = 1792393U;
uint64_t x797 = 1LLU;
uint8_t x799 = 58U;
volatile uint32_t x843 = 2983769U;
int32_t x861 = INT32_MAX;
static volatile uint32_t x862 = UINT32_MAX;
uint8_t x864 = UINT8_MAX;
int8_t x865 = INT8_MAX;
volatile int64_t x866 = INT64_MAX;
int32_t t121 = 1520;
volatile uint64_t x889 = 9179286LLU;
int16_t x901 = INT16_MIN;
static int64_t x905 = INT64_MIN;
volatile int16_t x906 = 1;
uint8_t x909 = 20U;
volatile int16_t x912 = INT16_MAX;
int32_t t128 = -1;
int64_t x921 = INT64_MIN;
uint16_t x922 = 25U;
int64_t x932 = -1LL;
static int8_t x938 = 1;
volatile int32_t x940 = INT32_MIN;
uint16_t x944 = 20U;
uint64_t t132 = 17153925629LLU;
int32_t x949 = INT32_MIN;
static volatile uint32_t x952 = UINT32_MAX;
int32_t t133 = 95860576;
static volatile int64_t x968 = INT64_MIN;
static uint32_t x994 = 40U;
volatile int16_t x997 = 80;
int8_t x999 = INT8_MIN;
uint32_t t139 = 190664488U;
uint16_t x1027 = 4U;
int8_t x1090 = INT8_MAX;
int64_t x1103 = INT64_MIN;
int32_t x1113 = INT32_MAX;
int16_t x1115 = INT16_MIN;
static int32_t t149 = 11;
int8_t x1119 = -22;
int8_t x1146 = INT8_MAX;
uint32_t x1154 = 645U;
volatile int16_t x1155 = -2;
uint32_t t155 = 69729U;
uint64_t x1173 = UINT64_MAX;
uint32_t x1181 = UINT32_MAX;
int32_t x1187 = 258;
int32_t x1199 = INT32_MIN;
int32_t t161 = 1819820;
uint32_t x1201 = 17U;
volatile int32_t t164 = 31371;
static int8_t x1225 = 3;
int16_t x1249 = INT16_MIN;
uint16_t x1262 = UINT16_MAX;
static int8_t x1287 = -1;
int64_t x1288 = 4LL;
volatile uint8_t x1290 = UINT8_MAX;
uint64_t x1295 = 2600645LLU;
static volatile uint64_t x1305 = 2121130985730840350LLU;
volatile int16_t x1315 = -1;
int32_t t177 = 0;
uint64_t x1338 = 19825LLU;
int32_t x1341 = INT32_MIN;
int64_t x1348 = -1LL;
int8_t x1349 = -1;
int32_t x1350 = 3822;
volatile uint32_t x1352 = 718357U;
int64_t x1367 = -1LL;
volatile uint64_t t185 = 84123613LLU;
uint8_t x1373 = UINT8_MAX;
int8_t x1384 = 1;
volatile int32_t t191 = 36;
volatile int8_t x1413 = -1;
uint8_t x1417 = 6U;
int16_t x1420 = 7996;
volatile uint64_t x1442 = 145570LLU;
static int8_t x1451 = INT8_MIN;
static volatile int8_t x1458 = 14;
int8_t x1460 = 1;
static int64_t t198 = -386462307316LL;
int32_t x1461 = INT32_MIN;
volatile int64_t x1462 = 266216945995LL;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	uint16_t x2 = UINT16_MAX;
	int64_t x3 = INT64_MAX;
	int64_t x4 = INT64_MAX;

    t0 = (x1^(x2<<(x3!=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x14 = 5U;
	int32_t x15 = 2;
	int16_t x16 = INT16_MIN;
	int32_t t1 = -4865;

    t1 = (x13^(x14<<(x15!=x16)));

    if (t1 != -9) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x17 = INT8_MIN;
	int64_t x19 = INT64_MIN;
	int16_t x20 = INT16_MIN;
	static volatile int32_t t2 = 2902597;

    t2 = (x17^(x18<<(x19!=x20)));

    if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x21 = INT16_MIN;
	int32_t t3 = -370399;

    t3 = (x21^(x22<<(x23!=x24)));

    if (t3 != -32258) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x29 = INT16_MIN;
	static int32_t x31 = -1;
	int16_t x32 = INT16_MAX;

    t4 = (x29^(x30<<(x31!=x32)));

    if (t4 != 4291917720U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x34 = 2285U;
	uint8_t x36 = 17U;
	volatile uint32_t t5 = 1924702902U;

    t5 = (x33^(x34<<(x35!=x36)));

    if (t5 != 4294962778U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x37 = INT8_MAX;
	static int8_t x39 = INT8_MAX;
	uint16_t x40 = 17U;

    t6 = (x37^(x38<<(x39!=x40)));

    if (t6 != 4296881063LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x49 = 400445057;
	static int8_t x51 = -53;
	uint16_t x52 = UINT16_MAX;
	volatile uint64_t t7 = 706459572574628LLU;

    t7 = (x49^(x50<<(x51!=x52)));

    if (t7 != 400475539LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x53 = UINT16_MAX;
	uint32_t x54 = UINT32_MAX;
	int32_t x55 = -461;

    t8 = (x53^(x54<<(x55!=x56)));

    if (t8 != 4294901761U) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x59 = 940626;
	int16_t x60 = -2;
	uint64_t t9 = 348LLU;

    t9 = (x57^(x58<<(x59!=x60)));

    if (t9 != 2147483646LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x62 = UINT64_MAX;
	int32_t x63 = INT32_MIN;
	int64_t x64 = 354440511829LL;
	static uint64_t t10 = 4379281921214577LLU;

    t10 = (x61^(x62<<(x63!=x64)));

    if (t10 != 18446744073709545541LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x69 = INT16_MAX;
	uint32_t x70 = UINT32_MAX;
	int64_t x71 = INT64_MIN;
	static uint32_t t11 = 3U;

    t11 = (x69^(x70<<(x71!=x72)));

    if (t11 != 4294934529U) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x97 = -1;
	volatile int8_t x99 = 30;
	int32_t x100 = INT32_MIN;
	static uint32_t t12 = 188U;

    t12 = (x97^(x98<<(x99!=x100)));

    if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x101 = -469105211163548796LL;
	uint8_t x102 = UINT8_MAX;
	int32_t x104 = 16952;
	int64_t t13 = 128298LL;

    t13 = (x101^(x102<<(x103!=x104)));

    if (t13 != -469105211163549062LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x105 = INT64_MAX;
	int8_t x106 = 10;
	int64_t x107 = 467722596345433LL;
	int8_t x108 = -1;

    t14 = (x105^(x106<<(x107!=x108)));

    if (t14 != 9223372036854775787LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x117 = INT32_MIN;
	uint32_t x118 = UINT32_MAX;
	uint32_t x119 = 1492U;
	int32_t x120 = -1;
	uint32_t t15 = 58U;

    t15 = (x117^(x118<<(x119!=x120)));

    if (t15 != 2147483646U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x137 = INT64_MAX;
	uint8_t x138 = UINT8_MAX;
	static uint16_t x139 = 4924U;
	volatile int64_t t16 = 182856646963LL;

    t16 = (x137^(x138<<(x139!=x140)));

    if (t16 != 9223372036854775297LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x149 = INT8_MIN;
	uint32_t x150 = UINT32_MAX;
	int64_t x151 = -140LL;
	static int64_t x152 = 2LL;
	static volatile uint32_t t17 = 34360841U;

    t17 = (x149^(x150<<(x151!=x152)));

    if (t17 != 126U) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x154 = 144317025391338LL;
	uint8_t x156 = 2U;
	volatile int64_t t18 = 1024053322352LL;

    t18 = (x153^(x154<<(x155!=x156)));

    if (t18 != 288634050782681LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x161 = 3309521U;
	int16_t x162 = INT16_MAX;
	uint8_t x163 = 5U;
	uint8_t x164 = UINT8_MAX;
	uint32_t t19 = 7350U;

    t19 = (x161^(x162<<(x163!=x164)));

    if (t19 != 3309615U) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x169 = 722181947LL;
	uint8_t x170 = 49U;
	int64_t x171 = -1LL;
	uint8_t x172 = UINT8_MAX;
	int64_t t20 = 15633906449LL;

    t20 = (x169^(x170<<(x171!=x172)));

    if (t20 != 722181977LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int32_t x177 = INT32_MIN;
	volatile uint8_t x178 = 6U;
	int64_t x179 = INT64_MAX;
	static int32_t t21 = -73237;

    t21 = (x177^(x178<<(x179!=x180)));

    if (t21 != -2147483636) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x185 = 25527558U;
	static volatile int64_t x186 = 9611056591559296LL;
	uint32_t x188 = 1295224448U;
	volatile int64_t t22 = -7LL;

    t22 = (x185^(x186<<(x187!=x188)));

    if (t22 != 19222113208053766LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x195 = 1U;
	volatile int32_t t23 = 96371005;

    t23 = (x193^(x194<<(x195!=x196)));

    if (t23 != -503) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint16_t x197 = 0U;
	int64_t x198 = 4351664LL;
	volatile int64_t x199 = -1LL;
	volatile uint64_t x200 = 3068009502894129261LLU;
	int64_t t24 = 609096063866336LL;

    t24 = (x197^(x198<<(x199!=x200)));

    if (t24 != 8703328LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x201 = -1;
	volatile int16_t x202 = INT16_MAX;
	uint8_t x203 = 3U;
	static int64_t x204 = -1LL;
	volatile int32_t t25 = 0;

    t25 = (x201^(x202<<(x203!=x204)));

    if (t25 != -65535) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x218 = INT8_MAX;
	int32_t x220 = INT32_MIN;
	static uint64_t t26 = 2119899776LLU;

    t26 = (x217^(x218<<(x219!=x220)));

    if (t26 != 44395458734203409LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x231 = 43219935243234119LL;
	int32_t x232 = INT32_MIN;
	volatile int32_t t27 = -79897696;

    t27 = (x229^(x230<<(x231!=x232)));

    if (t27 != -2147483572) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x237 = 7558585U;
	static int16_t x239 = -1;
	volatile int16_t x240 = -1;
	uint64_t t28 = 18225941190724386LLU;

    t28 = (x237^(x238<<(x239!=x240)));

    if (t28 != 7558564LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x241 = -64944;
	int8_t x242 = 11;
	int32_t x243 = -10088579;
	uint16_t x244 = 13994U;
	volatile int32_t t29 = 16;

    t29 = (x241^(x242<<(x243!=x244)));

    if (t29 != -64954) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint32_t x246 = UINT32_MAX;
	int64_t x247 = INT64_MIN;
	uint32_t x248 = 51U;
	volatile int64_t t30 = 57032487LL;

    t30 = (x245^(x246<<(x247!=x248)));

    if (t30 != -4294967295LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x249 = INT64_MAX;
	int32_t x250 = 46403196;
	int8_t x251 = INT8_MIN;
	volatile int8_t x252 = INT8_MIN;
	volatile int64_t t31 = 756LL;

    t31 = (x249^(x250<<(x251!=x252)));

    if (t31 != 9223372036808372611LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x253 = -1;
	uint32_t x254 = 22628U;
	int32_t x256 = INT32_MAX;
	static volatile uint32_t t32 = 1269U;

    t32 = (x253^(x254<<(x255!=x256)));

    if (t32 != 4294922039U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x269 = UINT32_MAX;
	int16_t x270 = 0;
	int16_t x271 = 1;
	uint8_t x272 = 1U;
	volatile uint32_t t33 = UINT32_MAX;

    t33 = (x269^(x270<<(x271!=x272)));

    if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x273 = 16398295491LLU;
	static uint64_t x275 = 190441LLU;
	volatile uint8_t x276 = 3U;
	volatile uint64_t t34 = 16LLU;

    t34 = (x273^(x274<<(x275!=x276)));

    if (t34 != 16398409277LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x277 = -63;
	volatile uint16_t x278 = 1U;

    t35 = (x277^(x278<<(x279!=x280)));

    if (t35 != -61) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x285 = -3726924LL;
	volatile uint32_t x286 = 5U;
	volatile int64_t x287 = INT64_MIN;
	int64_t t36 = -1741931621LL;

    t36 = (x285^(x286<<(x287!=x288)));

    if (t36 != -3726914LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x289 = INT8_MIN;
	static volatile uint32_t x291 = UINT32_MAX;
	int16_t x292 = -8910;
	volatile uint64_t t37 = 223593041477LLU;

    t37 = (x289^(x290<<(x291!=x292)));

    if (t37 != 18446744073498722204LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x293 = INT16_MAX;
	int32_t x294 = 62567;
	int16_t x295 = INT16_MIN;
	uint16_t x296 = UINT16_MAX;
	static volatile int32_t t38 = 27811678;

    t38 = (x293^(x294<<(x295!=x296)));

    if (t38 != 104241) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x309 = 12U;
	uint16_t x310 = 65U;
	static volatile uint16_t x311 = 0U;
	uint16_t x312 = 2972U;
	volatile int32_t t39 = -543;

    t39 = (x309^(x310<<(x311!=x312)));

    if (t39 != 142) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x313 = INT16_MAX;
	int16_t x314 = 68;
	uint16_t x316 = 5063U;
	static int32_t t40 = 89221;

    t40 = (x313^(x314<<(x315!=x316)));

    if (t40 != 32631) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x323 = INT64_MAX;
	int8_t x324 = INT8_MIN;
	static volatile int32_t t41 = 2551791;

    t41 = (x321^(x322<<(x323!=x324)));

    if (t41 != 32755) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x329 = INT64_MIN;
	int8_t x330 = INT8_MAX;
	volatile int8_t x331 = 0;
	volatile int32_t x332 = INT32_MIN;
	volatile int64_t t42 = -32985773LL;

    t42 = (x329^(x330<<(x331!=x332)));

    if (t42 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x333 = 341240;
	uint32_t x335 = 435365U;
	uint64_t t43 = 16263492327941932LLU;

    t43 = (x333^(x334<<(x335!=x336)));

    if (t43 != 341234LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x337 = 13174;
	volatile int32_t x338 = 46586;
	static int64_t x339 = INT64_MIN;
	int16_t x340 = -1;
	volatile int32_t t44 = -2;

    t44 = (x337^(x338<<(x339!=x340)));

    if (t44 != 88194) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x341 = 2U;
	volatile int32_t t45 = 880;

    t45 = (x341^(x342<<(x343!=x344)));

    if (t45 != 508) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x346 = 212U;
	int32_t x347 = -1;
	int32_t x348 = INT32_MIN;
	uint32_t t46 = 22151764U;

    t46 = (x345^(x346<<(x347!=x348)));

    if (t46 != 4294966871U) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x349 = INT32_MIN;
	int32_t x351 = -6;
	volatile uint64_t x352 = 14358762651874636LLU;
	volatile int32_t t47 = 51;

    t47 = (x349^(x350<<(x351!=x352)));

    if (t47 != -2147482972) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x357 = 21U;
	static int16_t x358 = 12565;
	int16_t x359 = -14;

    t48 = (x357^(x358<<(x359!=x360)));

    if (t48 != 25151) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x369 = INT32_MAX;
	uint8_t x370 = 58U;
	int32_t x371 = -1;
	static uint32_t x372 = 955U;
	volatile int32_t t49 = -2074;

    t49 = (x369^(x370<<(x371!=x372)));

    if (t49 != 2147483531) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x373 = 0U;
	uint16_t x374 = 1038U;
	volatile uint16_t x375 = UINT16_MAX;
	uint8_t x376 = 0U;
	uint32_t t50 = 17370U;

    t50 = (x373^(x374<<(x375!=x376)));

    if (t50 != 2076U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x385 = INT64_MIN;
	volatile int8_t x387 = 6;
	static int32_t x388 = -1;
	volatile int64_t t51 = -1304834862855421686LL;

    t51 = (x385^(x386<<(x387!=x388)));

    if (t51 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x393 = UINT8_MAX;
	int16_t x394 = 909;
	volatile uint8_t x395 = 3U;
	int32_t x396 = INT32_MIN;
	int32_t t52 = 1018;

    t52 = (x393^(x394<<(x395!=x396)));

    if (t52 != 2021) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x397 = -1;
	static uint64_t x398 = 31069955162LLU;
	int8_t x399 = 24;
	int8_t x400 = INT8_MIN;

    t53 = (x397^(x398<<(x399!=x400)));

    if (t53 != 18446744011569641291LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x405 = UINT64_MAX;
	int16_t x406 = INT16_MAX;
	int32_t x407 = INT32_MIN;
	int64_t x408 = INT64_MIN;

    t54 = (x405^(x406<<(x407!=x408)));

    if (t54 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x417 = 113U;
	uint16_t x419 = 25992U;
	volatile int8_t x420 = INT8_MIN;
	int32_t t55 = 12;

    t55 = (x417^(x418<<(x419!=x420)));

    if (t55 != 113) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x421 = 120U;
	volatile uint8_t x422 = 9U;
	uint8_t x423 = 26U;
	int8_t x424 = INT8_MIN;
	volatile int32_t t56 = -6;

    t56 = (x421^(x422<<(x423!=x424)));

    if (t56 != 106) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x425 = -1LL;
	int8_t x427 = 45;
	uint64_t x428 = UINT64_MAX;

    t57 = (x425^(x426<<(x427!=x428)));

    if (t57 != -131071LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x437 = 17302U;
	uint8_t x438 = 72U;
	static int64_t x439 = -2757LL;
	static uint8_t x440 = UINT8_MAX;

    t58 = (x437^(x438<<(x439!=x440)));

    if (t58 != 17158) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x441 = 4;
	uint16_t x442 = 455U;
	int32_t x443 = 7;
	int64_t x444 = INT64_MIN;

    t59 = (x441^(x442<<(x443!=x444)));

    if (t59 != 906) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x445 = INT8_MIN;
	uint64_t x446 = 149695LLU;
	int32_t x447 = -1;
	int64_t x448 = -1LL;
	uint64_t t60 = 241158LLU;

    t60 = (x445^(x446<<(x447!=x448)));

    if (t60 != 18446744073709401919LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x469 = 121;
	uint64_t x470 = 23LLU;
	int64_t x471 = 160335334453522LL;
	static uint8_t x472 = 59U;
	volatile uint64_t t61 = 90634579LLU;

    t61 = (x469^(x470<<(x471!=x472)));

    if (t61 != 87LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x473 = 936661117LLU;
	uint32_t x474 = 31133321U;
	static int8_t x475 = INT8_MIN;
	volatile uint64_t t62 = 1LLU;

    t62 = (x473^(x474<<(x475!=x476)));

    if (t62 != 878857583LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x477 = INT8_MIN;
	uint64_t x478 = 655744260896569879LLU;
	uint64_t t63 = 12365LLU;

    t63 = (x477^(x478<<(x479!=x480)));

    if (t63 != 17135255551916411822LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x481 = INT32_MAX;
	int8_t x482 = 0;
	static int16_t x484 = INT16_MIN;
	volatile int32_t t64 = INT32_MAX;

    t64 = (x481^(x482<<(x483!=x484)));

    if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x485 = 2821056132LLU;
	uint16_t x486 = 68U;
	uint32_t x488 = 31729147U;

    t65 = (x485^(x486<<(x487!=x488)));

    if (t65 != 2821056012LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x489 = 0;
	int16_t x491 = -1;
	int16_t x492 = 46;

    t66 = (x489^(x490<<(x491!=x492)));

    if (t66 != 218338878) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x501 = INT64_MIN;
	int16_t x502 = INT16_MAX;
	static volatile int64_t t67 = 498235838014450080LL;

    t67 = (x501^(x502<<(x503!=x504)));

    if (t67 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x510 = UINT16_MAX;
	static int16_t x511 = INT16_MAX;
	uint64_t x512 = 131450687LLU;
	volatile int32_t t68 = -14;

    t68 = (x509^(x510<<(x511!=x512)));

    if (t68 != -98306) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x525 = INT8_MIN;
	int16_t x526 = INT16_MAX;
	uint64_t x527 = 396820169166568LLU;
	uint64_t x528 = 31936505101LLU;
	volatile int32_t t69 = 18;

    t69 = (x525^(x526<<(x527!=x528)));

    if (t69 != -65410) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x529 = INT16_MAX;
	static uint32_t x530 = 0U;
	int64_t x531 = INT64_MIN;
	uint8_t x532 = 1U;

    t70 = (x529^(x530<<(x531!=x532)));

    if (t70 != 32767U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x533 = -1;
	uint32_t x534 = 368447U;
	static int16_t x535 = 505;
	int16_t x536 = INT16_MAX;

    t71 = (x533^(x534<<(x535!=x536)));

    if (t71 != 4294230401U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x537 = INT8_MIN;
	int16_t x539 = 2313;
	static volatile uint64_t x540 = 836501266007508400LLU;
	volatile int32_t t72 = -8626568;

    t72 = (x537^(x538<<(x539!=x540)));

    if (t72 != -122) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x541 = 0;
	static uint32_t x542 = 3900800U;
	static int8_t x543 = INT8_MAX;
	int64_t x544 = INT64_MIN;
	uint32_t t73 = 2917U;

    t73 = (x541^(x542<<(x543!=x544)));

    if (t73 != 7801600U) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x547 = INT64_MAX;
	volatile int8_t x548 = -1;
	volatile uint32_t t74 = 836214U;

    t74 = (x545^(x546<<(x547!=x548)));

    if (t74 != 1113436585U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x549 = INT64_MIN;
	uint32_t x550 = 32697657U;
	static uint16_t x551 = 34U;
	volatile int16_t x552 = -3;

    t75 = (x549^(x550<<(x551!=x552)));

    if (t75 != -9223372036789380494LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x553 = -52117;
	volatile uint8_t x554 = UINT8_MAX;
	int16_t x555 = 3;
	static int16_t x556 = INT16_MIN;
	volatile int32_t t76 = -175489829;

    t76 = (x553^(x554<<(x555!=x556)));

    if (t76 != -51819) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x561 = INT8_MIN;
	volatile uint64_t x562 = UINT64_MAX;
	int32_t x563 = -142;
	int64_t x564 = INT64_MAX;
	volatile uint64_t t77 = 2688706784LLU;

    t77 = (x561^(x562<<(x563!=x564)));

    if (t77 != 126LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x565 = -1;
	uint8_t x566 = 1U;
	volatile int8_t x567 = INT8_MIN;
	uint16_t x568 = 0U;

    t78 = (x565^(x566<<(x567!=x568)));

    if (t78 != -3) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x569 = -1;
	uint64_t x570 = 51514695LLU;
	int16_t x571 = -1;
	int32_t x572 = INT32_MIN;
	volatile uint64_t t79 = 422046467871156357LLU;

    t79 = (x569^(x570<<(x571!=x572)));

    if (t79 != 18446744073606522225LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x581 = INT8_MIN;
	volatile uint16_t x582 = 721U;
	int32_t x583 = INT32_MIN;
	volatile uint8_t x584 = UINT8_MAX;
	int32_t t80 = -40426660;

    t80 = (x581^(x582<<(x583!=x584)));

    if (t80 != -1502) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x590 = 325690127U;
	static int16_t x592 = INT16_MIN;
	uint32_t t81 = 380303U;

    t81 = (x589^(x590<<(x591!=x592)));

    if (t81 != 3643590174U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x605 = -1;
	int64_t x606 = 11LL;
	int16_t x607 = INT16_MIN;
	volatile int16_t x608 = 7;

    t82 = (x605^(x606<<(x607!=x608)));

    if (t82 != -23LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x609 = 149LLU;
	uint16_t x610 = 112U;
	int8_t x612 = INT8_MAX;
	uint64_t t83 = 65LLU;

    t83 = (x609^(x610<<(x611!=x612)));

    if (t83 != 117LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x613 = -18831320165067378LL;
	uint64_t x614 = 3218018LLU;
	static int64_t x615 = 55688LL;
	uint64_t x616 = 14357200129766LLU;

    t84 = (x613^(x614<<(x615!=x616)));

    if (t84 != 18427912753538326858LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x617 = INT64_MIN;
	volatile int64_t x618 = 30442LL;
	volatile int32_t x619 = -1;
	int64_t x620 = INT64_MAX;
	static volatile int64_t t85 = 8631390531262LL;

    t85 = (x617^(x618<<(x619!=x620)));

    if (t85 != -9223372036854714924LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x621 = 0;
	uint64_t x622 = 1061449LLU;
	int8_t x623 = 1;
	int32_t x624 = -1;
	uint64_t t86 = 206986885687LLU;

    t86 = (x621^(x622<<(x623!=x624)));

    if (t86 != 2122898LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x641 = 65817920U;
	int16_t x642 = INT16_MAX;
	volatile int8_t x643 = -13;
	static uint32_t t87 = 985666271U;

    t87 = (x641^(x642<<(x643!=x644)));

    if (t87 != 65843902U) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x649 = 0;
	static int16_t x650 = INT16_MAX;
	int32_t x652 = -694714888;
	volatile int32_t t88 = -1;

    t88 = (x649^(x650<<(x651!=x652)));

    if (t88 != 65534) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x653 = INT16_MAX;
	uint8_t x654 = UINT8_MAX;
	int64_t x655 = 1439525867988322861LL;
	int8_t x656 = INT8_MIN;
	int32_t t89 = -56172733;

    t89 = (x653^(x654<<(x655!=x656)));

    if (t89 != 32257) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x657 = INT16_MIN;
	uint32_t x658 = 299U;
	int16_t x659 = INT16_MAX;
	static volatile uint32_t x660 = UINT32_MAX;
	uint32_t t90 = 166583268U;

    t90 = (x657^(x658<<(x659!=x660)));

    if (t90 != 4294935126U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x669 = 214733444U;
	int8_t x670 = 6;
	static uint8_t x671 = 28U;
	volatile uint8_t x672 = 0U;
	uint32_t t91 = 2088354782U;

    t91 = (x669^(x670<<(x671!=x672)));

    if (t91 != 214733448U) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x673 = 0;
	uint32_t x674 = 109154U;
	uint64_t x675 = UINT64_MAX;
	int16_t x676 = 115;
	uint32_t t92 = 1U;

    t92 = (x673^(x674<<(x675!=x676)));

    if (t92 != 218308U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x685 = 9LLU;
	uint8_t x686 = 6U;
	int16_t x687 = -1;
	static volatile int32_t x688 = INT32_MAX;
	uint64_t t93 = 7LLU;

    t93 = (x685^(x686<<(x687!=x688)));

    if (t93 != 5LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x701 = -1;
	uint16_t x702 = 28U;
	int64_t x704 = INT64_MAX;
	volatile int32_t t94 = 22185;

    t94 = (x701^(x702<<(x703!=x704)));

    if (t94 != -57) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x705 = -1;
	volatile uint8_t x707 = 64U;
	int64_t x708 = -1LL;
	uint32_t t95 = 1056396061U;

    t95 = (x705^(x706<<(x707!=x708)));

    if (t95 != 4294861239U) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x713 = INT8_MIN;
	uint8_t x714 = 1U;
	static int64_t x715 = -1LL;
	volatile uint16_t x716 = UINT16_MAX;
	volatile int32_t t96 = -1495;

    t96 = (x713^(x714<<(x715!=x716)));

    if (t96 != -126) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x721 = UINT32_MAX;
	uint32_t x724 = 9U;
	static uint32_t t97 = 899604501U;

    t97 = (x721^(x722<<(x723!=x724)));

    if (t97 != 4294910301U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x730 = 7756U;
	int32_t x731 = 39;
	uint64_t x732 = UINT64_MAX;
	volatile uint64_t t98 = 30515561132LLU;

    t98 = (x729^(x730<<(x731!=x732)));

    if (t98 != 108964990466LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x733 = INT16_MIN;
	uint64_t x734 = 1664945480629156LLU;
	static int8_t x735 = 2;
	uint32_t x736 = 3700U;
	volatile uint64_t t99 = 2407LLU;

    t99 = (x733^(x734<<(x735!=x736)));

    if (t99 != 18443414182748321608LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x739 = -856407361;
	static volatile int16_t x740 = 2090;
	volatile uint32_t t100 = 165413U;

    t100 = (x737^(x738<<(x739!=x740)));

    if (t100 != 4278836445U) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint8_t x742 = 19U;
	static uint16_t x743 = UINT16_MAX;
	int64_t x744 = 1356887649546LL;
	static volatile int32_t t101 = -28;

    t101 = (x741^(x742<<(x743!=x744)));

    if (t101 != 6) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint64_t x749 = 863815517768621LLU;
	volatile uint32_t x750 = 6703U;
	int8_t x751 = INT8_MIN;
	uint64_t x752 = UINT64_MAX;
	static volatile uint64_t t102 = 20288225LLU;

    t102 = (x749^(x750<<(x751!=x752)));

    if (t102 != 863815517782003LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x753 = 1U;
	uint16_t x754 = UINT16_MAX;
	int32_t x755 = INT32_MIN;
	static volatile uint8_t x756 = UINT8_MAX;
	int32_t t103 = -62332;

    t103 = (x753^(x754<<(x755!=x756)));

    if (t103 != 131071) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x757 = 1443194552LL;
	uint32_t x758 = UINT32_MAX;
	int8_t x759 = INT8_MAX;
	volatile int64_t t104 = -170656486LL;

    t104 = (x757^(x758<<(x759!=x760)));

    if (t104 != 2851772742LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x762 = INT8_MAX;
	int64_t x763 = INT64_MAX;
	volatile int32_t t105 = 0;

    t105 = (x761^(x762<<(x763!=x764)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x765 = 18;
	uint64_t x767 = UINT64_MAX;
	static int32_t x768 = INT32_MAX;
	static volatile uint32_t t106 = 11861U;

    t106 = (x765^(x766<<(x767!=x768)));

    if (t106 != 1224718U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x769 = UINT32_MAX;
	uint8_t x770 = 1U;
	int32_t x771 = -17;
	int16_t x772 = -1;
	volatile uint32_t t107 = 134786409U;

    t107 = (x769^(x770<<(x771!=x772)));

    if (t107 != 4294967293U) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x773 = INT8_MAX;
	volatile uint8_t x774 = UINT8_MAX;
	int8_t x775 = -1;
	static uint32_t x776 = UINT32_MAX;
	static volatile int32_t t108 = -474324951;

    t108 = (x773^(x774<<(x775!=x776)));

    if (t108 != 128) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x777 = -5029;
	static volatile int32_t x778 = 772602659;
	int8_t x779 = -29;
	static int32_t t109 = -103658955;

    t109 = (x777^(x778<<(x779!=x780)));

    if (t109 != -1545201123) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x781 = 27244575LL;
	int64_t x783 = 1042LL;
	static volatile int8_t x784 = INT8_MIN;

    t110 = (x781^(x782<<(x783!=x784)));

    if (t110 != 27244769LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x785 = -1;
	uint32_t x786 = 3U;
	uint64_t x787 = UINT64_MAX;
	int32_t x788 = 27372610;

    t111 = (x785^(x786<<(x787!=x788)));

    if (t111 != 4294967289U) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x798 = 1U;
	static volatile uint8_t x800 = UINT8_MAX;
	volatile uint64_t t112 = 88750LLU;

    t112 = (x797^(x798<<(x799!=x800)));

    if (t112 != 3LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint32_t x801 = UINT32_MAX;
	uint64_t x802 = UINT64_MAX;
	static int8_t x803 = -1;
	uint32_t x804 = UINT32_MAX;
	volatile uint64_t t113 = 157315097969360LLU;

    t113 = (x801^(x802<<(x803!=x804)));

    if (t113 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x805 = 1034U;
	volatile uint32_t x806 = UINT32_MAX;
	int8_t x807 = -1;
	int16_t x808 = INT16_MIN;
	volatile uint32_t t114 = 1876979U;

    t114 = (x805^(x806<<(x807!=x808)));

    if (t114 != 4294966260U) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x837 = -467341;
	volatile uint8_t x838 = UINT8_MAX;
	volatile int16_t x839 = INT16_MIN;
	int32_t x840 = -371861;
	volatile int32_t t115 = 1748949;

    t115 = (x837^(x838<<(x839!=x840)));

    if (t115 != -467059) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x841 = INT64_MAX;
	uint8_t x842 = 0U;
	uint8_t x844 = UINT8_MAX;
	int64_t t116 = INT64_MAX;

    t116 = (x841^(x842<<(x843!=x844)));

    if (t116 != INT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x845 = 541633656382429283LLU;
	volatile uint64_t x846 = 541734221129089460LLU;
	int64_t x847 = 2225866390798774442LL;
	int64_t x848 = -1LL;
	volatile uint64_t t117 = 77LLU;

    t117 = (x845^(x846<<(x847!=x848)));

    if (t117 != 616153388844260107LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x857 = 36U;
	static uint8_t x858 = 42U;
	static uint64_t x859 = UINT64_MAX;
	volatile uint8_t x860 = 13U;
	int32_t t118 = 0;

    t118 = (x857^(x858<<(x859!=x860)));

    if (t118 != 112) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x863 = 1U;
	volatile uint32_t t119 = 27053866U;

    t119 = (x861^(x862<<(x863!=x864)));

    if (t119 != 2147483649U) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x867 = -1;
	volatile int64_t x868 = -1LL;
	int64_t t120 = -130312691164LL;

    t120 = (x865^(x866<<(x867!=x868)));

    if (t120 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x877 = -54;
	volatile int8_t x878 = 1;
	int32_t x879 = INT32_MIN;
	uint64_t x880 = 14782LLU;

    t121 = (x877^(x878<<(x879!=x880)));

    if (t121 != -56) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x885 = 11177U;
	static uint8_t x886 = 89U;
	int16_t x887 = INT16_MAX;
	int64_t x888 = INT64_MAX;
	int32_t t122 = -414875084;

    t122 = (x885^(x886<<(x887!=x888)));

    if (t122 != 11035) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x890 = UINT64_MAX;
	int32_t x891 = -2146191;
	int16_t x892 = INT16_MIN;
	static volatile uint64_t t123 = 1286006914894052810LLU;

    t123 = (x889^(x890<<(x891!=x892)));

    if (t123 != 18446744073700372328LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x897 = -1LL;
	volatile uint8_t x898 = 3U;
	volatile uint16_t x899 = UINT16_MAX;
	int8_t x900 = -1;
	int64_t t124 = 96967933272052LL;

    t124 = (x897^(x898<<(x899!=x900)));

    if (t124 != -7LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x902 = 1U;
	static volatile uint64_t x903 = 887LLU;
	static uint16_t x904 = UINT16_MAX;
	static volatile int32_t t125 = 186077795;

    t125 = (x901^(x902<<(x903!=x904)));

    if (t125 != -32766) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x907 = UINT8_MAX;
	int8_t x908 = -1;
	volatile int64_t t126 = -77LL;

    t126 = (x905^(x906<<(x907!=x908)));

    if (t126 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x910 = 2324;
	int16_t x911 = INT16_MAX;
	int32_t t127 = 509;

    t127 = (x909^(x910<<(x911!=x912)));

    if (t127 != 2304) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x917 = -1;
	uint8_t x918 = 5U;
	uint32_t x919 = 152007881U;
	int64_t x920 = INT64_MAX;

    t128 = (x917^(x918<<(x919!=x920)));

    if (t128 != -11) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x923 = INT8_MAX;
	int32_t x924 = -1;
	volatile int64_t t129 = -448627379317163LL;

    t129 = (x921^(x922<<(x923!=x924)));

    if (t129 != -9223372036854775758LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x929 = -1;
	uint64_t x930 = 523138LLU;
	int32_t x931 = INT32_MIN;
	static uint64_t t130 = 458691830031553LLU;

    t130 = (x929^(x930<<(x931!=x932)));

    if (t130 != 18446744073708505339LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x937 = 1;
	int32_t x939 = INT32_MIN;
	volatile int32_t t131 = -14;

    t131 = (x937^(x938<<(x939!=x940)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x941 = 324LLU;
	int16_t x942 = INT16_MAX;
	uint32_t x943 = 1893531U;

    t132 = (x941^(x942<<(x943!=x944)));

    if (t132 != 65210LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x950 = 2;
	uint8_t x951 = UINT8_MAX;

    t133 = (x949^(x950<<(x951!=x952)));

    if (t133 != -2147483644) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x957 = INT16_MIN;
	int8_t x958 = 0;
	volatile int16_t x959 = 1;
	uint32_t x960 = 298U;
	volatile int32_t t134 = -2;

    t134 = (x957^(x958<<(x959!=x960)));

    if (t134 != -32768) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x965 = UINT32_MAX;
	volatile int16_t x966 = 2228;
	uint8_t x967 = UINT8_MAX;
	uint32_t t135 = 60U;

    t135 = (x965^(x966<<(x967!=x968)));

    if (t135 != 4294962839U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x973 = 6LLU;
	uint16_t x974 = 12U;
	int32_t x975 = INT32_MIN;
	int16_t x976 = -5042;
	volatile uint64_t t136 = 3148151094088LLU;

    t136 = (x973^(x974<<(x975!=x976)));

    if (t136 != 30LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x993 = -13;
	int64_t x995 = -1447640244814LL;
	uint32_t x996 = UINT32_MAX;
	volatile uint32_t t137 = 14340025U;

    t137 = (x993^(x994<<(x995!=x996)));

    if (t137 != 4294967203U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x998 = 582721222LLU;
	int32_t x1000 = INT32_MIN;
	uint64_t t138 = 0LLU;

    t138 = (x997^(x998<<(x999!=x1000)));

    if (t138 != 1165442524LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x1021 = 12230U;
	static uint32_t x1022 = 4421953U;
	int8_t x1023 = INT8_MIN;
	volatile uint8_t x1024 = 9U;

    t139 = (x1021^(x1022<<(x1023!=x1024)));

    if (t139 != 8838468U) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x1025 = INT16_MIN;
	int32_t x1026 = 602;
	int16_t x1028 = INT16_MIN;
	volatile int32_t t140 = -10;

    t140 = (x1025^(x1026<<(x1027!=x1028)));

    if (t140 != -31564) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x1029 = UINT64_MAX;
	int16_t x1030 = INT16_MAX;
	int32_t x1031 = -32547845;
	static int32_t x1032 = 4067524;
	volatile uint64_t t141 = 141LLU;

    t141 = (x1029^(x1030<<(x1031!=x1032)));

    if (t141 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x1061 = INT64_MIN;
	uint64_t x1062 = 81800176939150LLU;
	int16_t x1063 = 31;
	static int16_t x1064 = -4896;
	uint64_t t142 = 134887931261363LLU;

    t142 = (x1061^(x1062<<(x1063!=x1064)));

    if (t142 != 9223535637208654108LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x1073 = INT8_MAX;
	uint16_t x1074 = UINT16_MAX;
	volatile int32_t x1075 = INT32_MIN;
	int32_t x1076 = INT32_MIN;
	volatile int32_t t143 = -528231572;

    t143 = (x1073^(x1074<<(x1075!=x1076)));

    if (t143 != 65408) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x1081 = -1812060LL;
	static uint64_t x1082 = 111LLU;
	uint16_t x1083 = UINT16_MAX;
	int16_t x1084 = INT16_MIN;
	uint64_t t144 = 29LLU;

    t144 = (x1081^(x1082<<(x1083!=x1084)));

    if (t144 != 18446744073707739514LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x1089 = 10U;
	int16_t x1091 = -1;
	int16_t x1092 = -468;
	volatile int32_t t145 = -12;

    t145 = (x1089^(x1090<<(x1091!=x1092)));

    if (t145 != 244) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x1097 = INT64_MIN;
	volatile int32_t x1098 = 390489;
	int8_t x1099 = INT8_MAX;
	static uint16_t x1100 = UINT16_MAX;
	volatile int64_t t146 = -382LL;

    t146 = (x1097^(x1098<<(x1099!=x1100)));

    if (t146 != -9223372036853994830LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1101 = INT8_MIN;
	volatile int8_t x1102 = INT8_MAX;
	static volatile uint32_t x1104 = 1215929887U;
	volatile int32_t t147 = -1;

    t147 = (x1101^(x1102<<(x1103!=x1104)));

    if (t147 != -130) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x1105 = 7352U;
	uint32_t x1106 = 1343U;
	int32_t x1107 = -1693;
	static volatile uint8_t x1108 = 13U;
	volatile uint32_t t148 = 5524U;

    t148 = (x1105^(x1106<<(x1107!=x1108)));

    if (t148 != 5830U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x1114 = 63U;
	uint8_t x1116 = UINT8_MAX;

    t149 = (x1113^(x1114<<(x1115!=x1116)));

    if (t149 != 2147483521) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1117 = INT64_MIN;
	int64_t x1118 = 1201039752LL;
	uint64_t x1120 = UINT64_MAX;
	int64_t t150 = -3573598262959577LL;

    t150 = (x1117^(x1118<<(x1119!=x1120)));

    if (t150 != -9223372034452696304LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x1125 = -71;
	int64_t x1126 = 2740LL;
	static volatile int8_t x1127 = INT8_MAX;
	int32_t x1128 = 6;
	volatile int64_t t151 = 127LL;

    t151 = (x1125^(x1126<<(x1127!=x1128)));

    if (t151 != -5423LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x1141 = INT64_MAX;
	static uint16_t x1142 = 557U;
	int8_t x1143 = INT8_MAX;
	int32_t x1144 = -2;
	volatile int64_t t152 = 351519747675069028LL;

    t152 = (x1141^(x1142<<(x1143!=x1144)));

    if (t152 != 9223372036854774693LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x1145 = -1;
	static uint16_t x1147 = 0U;
	int16_t x1148 = INT16_MIN;
	int32_t t153 = 0;

    t153 = (x1145^(x1146<<(x1147!=x1148)));

    if (t153 != -255) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x1149 = 32930093U;
	int32_t x1150 = 577197;
	static uint64_t x1151 = UINT64_MAX;
	static int8_t x1152 = INT8_MIN;
	volatile uint32_t t154 = 14800U;

    t154 = (x1149^(x1150<<(x1151!=x1152)));

    if (t154 != 31974519U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x1153 = INT16_MIN;
	int64_t x1156 = -1LL;

    t155 = (x1153^(x1154<<(x1155!=x1156)));

    if (t155 != 4294935818U) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x1165 = 44;
	uint32_t x1166 = 4U;
	volatile int16_t x1167 = INT16_MIN;
	int16_t x1168 = 3;
	volatile uint32_t t156 = 444067388U;

    t156 = (x1165^(x1166<<(x1167!=x1168)));

    if (t156 != 36U) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x1174 = 78406U;
	int64_t x1175 = 14465809LL;
	int16_t x1176 = INT16_MAX;
	static uint64_t t157 = 895580370LLU;

    t157 = (x1173^(x1174<<(x1175!=x1176)));

    if (t157 != 18446744073709394803LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1182 = 76;
	static uint32_t x1183 = 92528U;
	volatile int8_t x1184 = INT8_MIN;
	volatile uint32_t t158 = 1690822229U;

    t158 = (x1181^(x1182<<(x1183!=x1184)));

    if (t158 != 4294967143U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1185 = 260850818550177846LLU;
	uint8_t x1186 = 45U;
	volatile uint16_t x1188 = 150U;
	uint64_t t159 = 59202653250039667LLU;

    t159 = (x1185^(x1186<<(x1187!=x1188)));

    if (t159 != 260850818550177900LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1193 = 10966;
	uint32_t x1194 = 6938U;
	volatile uint32_t x1195 = UINT32_MAX;
	int8_t x1196 = 1;
	uint32_t t160 = 72555928U;

    t160 = (x1193^(x1194<<(x1195!=x1196)));

    if (t160 != 7394U) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x1197 = INT8_MIN;
	int8_t x1198 = INT8_MAX;
	uint64_t x1200 = UINT64_MAX;

    t161 = (x1197^(x1198<<(x1199!=x1200)));

    if (t161 != -130) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x1202 = 1LL;
	uint64_t x1203 = UINT64_MAX;
	int16_t x1204 = -1;
	int64_t t162 = -1651LL;

    t162 = (x1201^(x1202<<(x1203!=x1204)));

    if (t162 != 16LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1213 = 31063807LL;
	uint64_t x1214 = UINT64_MAX;
	volatile int32_t x1215 = -1;
	uint64_t x1216 = 414669922467LLU;
	volatile uint64_t t163 = 73LLU;

    t163 = (x1213^(x1214<<(x1215!=x1216)));

    if (t163 != 18446744073678487809LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x1221 = UINT8_MAX;
	volatile int16_t x1222 = 158;
	int64_t x1223 = INT64_MIN;
	volatile uint64_t x1224 = UINT64_MAX;

    t164 = (x1221^(x1222<<(x1223!=x1224)));

    if (t164 != 451) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x1226 = 43826679U;
	uint16_t x1227 = 637U;
	volatile uint64_t x1228 = UINT64_MAX;
	static uint32_t t165 = 243898170U;

    t165 = (x1225^(x1226<<(x1227!=x1228)));

    if (t165 != 87653357U) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int64_t x1233 = 6164LL;
	volatile int16_t x1234 = 12;
	uint64_t x1235 = UINT64_MAX;
	uint16_t x1236 = UINT16_MAX;
	volatile int64_t t166 = -107466848LL;

    t166 = (x1233^(x1234<<(x1235!=x1236)));

    if (t166 != 6156LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x1237 = 28LLU;
	uint32_t x1238 = 1256U;
	uint32_t x1239 = 85U;
	static int16_t x1240 = INT16_MAX;
	volatile uint64_t t167 = 97536470LLU;

    t167 = (x1237^(x1238<<(x1239!=x1240)));

    if (t167 != 2508LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x1241 = 16788728765274714LL;
	uint32_t x1242 = UINT32_MAX;
	static int64_t x1243 = INT64_MAX;
	volatile int32_t x1244 = INT32_MIN;
	volatile int64_t t168 = -5LL;

    t168 = (x1241^(x1242<<(x1243!=x1244)));

    if (t168 != 16788728554399140LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x1250 = INT8_MAX;
	uint64_t x1251 = 3989577171329LLU;
	int32_t x1252 = 23182;
	static volatile int32_t t169 = 20;

    t169 = (x1249^(x1250<<(x1251!=x1252)));

    if (t169 != -32514) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int8_t x1261 = INT8_MIN;
	int64_t x1263 = 336996LL;
	uint64_t x1264 = 13603351306LLU;
	volatile int32_t t170 = 3;

    t170 = (x1261^(x1262<<(x1263!=x1264)));

    if (t170 != -130946) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x1273 = 65483LLU;
	volatile int32_t x1274 = 355739;
	volatile uint8_t x1275 = 1U;
	static uint16_t x1276 = 29U;
	volatile uint64_t t171 = 8781750LLU;

    t171 = (x1273^(x1274<<(x1275!=x1276)));

    if (t171 != 664829LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1277 = -1;
	static uint64_t x1278 = 27016342282111076LLU;
	int32_t x1279 = INT32_MIN;
	int16_t x1280 = 0;
	static volatile uint64_t t172 = 26287496526312LLU;

    t172 = (x1277^(x1278<<(x1279!=x1280)));

    if (t172 != 18392711389145329463LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x1285 = INT64_MIN;
	static uint64_t x1286 = 59155909LLU;
	uint64_t t173 = 3366482968LLU;

    t173 = (x1285^(x1286<<(x1287!=x1288)));

    if (t173 != 9223372036973087626LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x1289 = -997805049320343126LL;
	int16_t x1291 = -1;
	uint16_t x1292 = 15620U;
	int64_t t174 = -425825179LL;

    t174 = (x1289^(x1290<<(x1291!=x1292)));

    if (t174 != -997805049320343468LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1293 = INT8_MAX;
	uint64_t x1294 = 1727031860LLU;
	int16_t x1296 = -1;
	uint64_t t175 = 379736234349LLU;

    t175 = (x1293^(x1294<<(x1295!=x1296)));

    if (t175 != 3454063639LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1306 = INT8_MAX;
	uint64_t x1307 = UINT64_MAX;
	volatile int8_t x1308 = 1;
	uint64_t t176 = 10161168734526LLU;

    t176 = (x1305^(x1306<<(x1307!=x1308)));

    if (t176 != 2121130985730840544LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x1313 = UINT8_MAX;
	int8_t x1314 = 26;
	static int32_t x1316 = 1;

    t177 = (x1313^(x1314<<(x1315!=x1316)));

    if (t177 != 203) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x1321 = INT64_MAX;
	int8_t x1322 = INT8_MAX;
	volatile int16_t x1323 = 11;
	uint8_t x1324 = UINT8_MAX;
	volatile int64_t t178 = 11249711793539475LL;

    t178 = (x1321^(x1322<<(x1323!=x1324)));

    if (t178 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1325 = -1;
	uint64_t x1326 = 67661262LLU;
	uint64_t x1327 = 94LLU;
	int16_t x1328 = INT16_MIN;
	volatile uint64_t t179 = 7046492384394512LLU;

    t179 = (x1325^(x1326<<(x1327!=x1328)));

    if (t179 != 18446744073574229091LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x1333 = UINT8_MAX;
	uint8_t x1334 = UINT8_MAX;
	int8_t x1335 = 0;
	int32_t x1336 = INT32_MAX;
	static int32_t t180 = -2;

    t180 = (x1333^(x1334<<(x1335!=x1336)));

    if (t180 != 257) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x1337 = 103600219U;
	int16_t x1339 = INT16_MIN;
	int16_t x1340 = 7153;
	volatile uint64_t t181 = 44402960584040907LLU;

    t181 = (x1337^(x1338<<(x1339!=x1340)));

    if (t181 != 103566009LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1342 = 298699559155LLU;
	uint16_t x1343 = 12319U;
	static volatile uint16_t x1344 = 192U;
	uint64_t t182 = 93248503625052284LLU;

    t182 = (x1341^(x1342<<(x1343!=x1344)));

    if (t182 != 18446743474960277990LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1345 = -1;
	uint32_t x1346 = UINT32_MAX;
	int32_t x1347 = -2;
	volatile uint32_t t183 = 2821U;

    t183 = (x1345^(x1346<<(x1347!=x1348)));

    if (t183 != 1U) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1351 = -518476661166593532LL;
	int32_t t184 = -41861;

    t184 = (x1349^(x1350<<(x1351!=x1352)));

    if (t184 != -7645) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x1365 = 240U;
	volatile uint64_t x1366 = 1LLU;
	int32_t x1368 = INT32_MAX;

    t185 = (x1365^(x1366<<(x1367!=x1368)));

    if (t185 != 242LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1374 = UINT32_MAX;
	static int16_t x1375 = INT16_MAX;
	volatile int32_t x1376 = INT32_MAX;
	volatile uint32_t t186 = 1058842596U;

    t186 = (x1373^(x1374<<(x1375!=x1376)));

    if (t186 != 4294967041U) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1381 = -978;
	uint32_t x1382 = 11U;
	int64_t x1383 = -1686474651648528LL;
	volatile uint32_t t187 = 506430U;

    t187 = (x1381^(x1382<<(x1383!=x1384)));

    if (t187 != 4294966328U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x1389 = 27;
	uint64_t x1390 = 5790740151023LLU;
	volatile uint64_t x1391 = 516322153574515LLU;
	volatile int64_t x1392 = -5LL;
	uint64_t t188 = 1627480LLU;

    t188 = (x1389^(x1390<<(x1391!=x1392)));

    if (t188 != 11581480302021LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1397 = -1;
	uint8_t x1398 = UINT8_MAX;
	uint16_t x1399 = 0U;
	int32_t x1400 = INT32_MIN;
	int32_t t189 = 963885;

    t189 = (x1397^(x1398<<(x1399!=x1400)));

    if (t189 != -511) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1401 = INT32_MIN;
	uint8_t x1402 = UINT8_MAX;
	volatile uint16_t x1403 = 505U;
	static int8_t x1404 = -1;
	int32_t t190 = 56750;

    t190 = (x1401^(x1402<<(x1403!=x1404)));

    if (t190 != -2147483138) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1405 = -4306;
	int8_t x1406 = INT8_MAX;
	volatile int8_t x1407 = INT8_MIN;
	int32_t x1408 = -3;

    t191 = (x1405^(x1406<<(x1407!=x1408)));

    if (t191 != -4144) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x1414 = UINT64_MAX;
	volatile int64_t x1415 = -3LL;
	uint64_t x1416 = 338025432332209864LLU;
	volatile uint64_t t192 = 166205048LLU;

    t192 = (x1413^(x1414<<(x1415!=x1416)));

    if (t192 != 1LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x1418 = UINT8_MAX;
	static int8_t x1419 = INT8_MIN;
	int32_t t193 = 163803640;

    t193 = (x1417^(x1418<<(x1419!=x1420)));

    if (t193 != 504) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1429 = INT64_MAX;
	uint64_t x1430 = 25756128LLU;
	int32_t x1431 = 190;
	volatile int8_t x1432 = INT8_MIN;
	volatile uint64_t t194 = 1679396204585013687LLU;

    t194 = (x1429^(x1430<<(x1431!=x1432)));

    if (t194 != 9223372036803263551LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1433 = 62U;
	int16_t x1434 = INT16_MAX;
	int64_t x1435 = -1LL;
	static int32_t x1436 = INT32_MIN;
	static volatile int32_t t195 = -7737;

    t195 = (x1433^(x1434<<(x1435!=x1436)));

    if (t195 != 65472) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1441 = 43480550910996803LLU;
	static volatile int32_t x1443 = -10;
	uint8_t x1444 = 0U;
	volatile uint64_t t196 = 61607872265LLU;

    t196 = (x1441^(x1442<<(x1443!=x1444)));

    if (t196 != 43480550911262727LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x1449 = INT32_MIN;
	int8_t x1450 = 19;
	uint64_t x1452 = 266073214LLU;
	static int32_t t197 = -10;

    t197 = (x1449^(x1450<<(x1451!=x1452)));

    if (t197 != -2147483610) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x1457 = -141491896403LL;
	uint64_t x1459 = 5094600082298LLU;

    t198 = (x1457^(x1458<<(x1459!=x1460)));

    if (t198 != -141491896399LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x1463 = 278;
	int8_t x1464 = -1;
	int64_t t199 = -630802903780302LL;

    t199 = (x1461^(x1462<<(x1463!=x1464)));

    if (t199 != -530570513770LL) { NG(); } else { ; }
	
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


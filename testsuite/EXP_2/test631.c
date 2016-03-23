
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

int32_t x5 = -1;
int16_t x9 = INT16_MIN;
uint16_t x12 = 22U;
int8_t x13 = INT8_MIN;
uint64_t x15 = 315LLU;
uint8_t x36 = 6U;
int16_t x61 = 87;
int32_t x70 = INT32_MIN;
int64_t t7 = -9230829478725095LL;
int16_t x88 = -1;
uint64_t x89 = 26661722217756LLU;
volatile int16_t x94 = INT16_MIN;
volatile int64_t x97 = 1LL;
static uint16_t x101 = 19U;
int64_t x114 = INT64_MIN;
uint16_t x117 = 1254U;
uint64_t x126 = UINT64_MAX;
static uint64_t x145 = 628314692839564464LLU;
int32_t x148 = -202;
volatile uint64_t t19 = 57LLU;
volatile int8_t x180 = INT8_MAX;
static int8_t x187 = 1;
uint8_t x193 = 8U;
int64_t t24 = 27346882504LL;
int8_t x204 = INT8_MAX;
int32_t t25 = 970;
int64_t x205 = INT64_MIN;
int64_t x206 = INT64_MAX;
volatile uint32_t x207 = UINT32_MAX;
uint8_t x209 = UINT8_MAX;
int16_t x212 = 0;
volatile int64_t t27 = 531328217LL;
volatile uint8_t x223 = 13U;
volatile uint16_t x228 = 401U;
static volatile uint64_t t30 = 415920LLU;
static int8_t x241 = -1;
uint64_t x242 = UINT64_MAX;
uint64_t x281 = UINT64_MAX;
uint16_t x283 = 5U;
uint16_t x288 = UINT16_MAX;
static int64_t x290 = INT64_MIN;
static volatile int32_t x291 = INT32_MIN;
int16_t x301 = INT16_MIN;
static uint32_t x312 = UINT32_MAX;
int16_t x317 = INT16_MAX;
static uint16_t x320 = UINT16_MAX;
uint32_t t46 = 5U;
static uint32_t x351 = UINT32_MAX;
uint64_t x354 = 1552322331470LLU;
int16_t x356 = INT16_MIN;
int64_t x378 = INT64_MAX;
static int16_t x395 = INT16_MIN;
volatile int64_t t53 = -116063LL;
int64_t x420 = -2839151548LL;
static int64_t t54 = -16124170815121545LL;
uint16_t x429 = 90U;
static uint16_t x430 = 1753U;
uint64_t x486 = UINT64_MAX;
uint64_t x487 = UINT64_MAX;
static int16_t x491 = 1;
int64_t x506 = INT64_MIN;
static int16_t x514 = INT16_MAX;
int32_t x515 = -3;
static int16_t x526 = INT16_MAX;
int8_t x540 = INT8_MIN;
volatile uint64_t t63 = 20255567LLU;
uint8_t x545 = 24U;
int32_t x553 = INT32_MIN;
int16_t x559 = -1;
volatile int64_t t66 = 17479815LL;
static int32_t x565 = -1;
static int64_t x567 = -1LL;
int64_t x569 = -7245LL;
uint32_t x578 = 32899250U;
int16_t x590 = -1;
int64_t t72 = 767LL;
static int16_t x613 = -12;
static int64_t x615 = -1LL;
static int16_t x619 = -15857;
static uint8_t x629 = 2U;
static volatile uint32_t t75 = 465432858U;
volatile uint8_t x635 = UINT8_MAX;
static int64_t x654 = 56986470960487LL;
int64_t x682 = 2091518157563675431LL;
int16_t x699 = 1;
static int16_t x700 = INT16_MIN;
static uint32_t x706 = UINT32_MAX;
int16_t x707 = -2377;
volatile int32_t x716 = INT32_MAX;
uint64_t x726 = UINT64_MAX;
int16_t x727 = INT16_MIN;
int64_t x757 = 3953429190LL;
uint64_t x775 = 617430LLU;
uint64_t t89 = UINT64_MAX;
int32_t x781 = INT32_MAX;
int64_t t91 = -2594590LL;
int64_t x805 = INT64_MIN;
uint8_t x809 = 13U;
int16_t x846 = -1;
static uint16_t x851 = 66U;
int64_t x856 = 1463898LL;
int64_t x866 = INT64_MAX;
int32_t x893 = INT32_MIN;
uint16_t x896 = 292U;
uint8_t x897 = UINT8_MAX;
int64_t x898 = INT64_MIN;
int16_t x918 = INT16_MIN;
uint64_t x922 = 734717741808808489LLU;
static int32_t x923 = INT32_MAX;
int8_t x945 = -25;
uint32_t x953 = UINT32_MAX;
int64_t x961 = 7184LL;
uint64_t t109 = 2LLU;
volatile uint64_t x985 = 122188654845515LLU;
int8_t x994 = -1;
volatile uint64_t x995 = UINT64_MAX;
uint64_t t111 = 12LLU;
int16_t x1011 = INT16_MIN;
int64_t x1014 = -197162431068716839LL;
static int32_t x1017 = -1;
volatile int32_t x1022 = -1;
uint32_t x1040 = UINT32_MAX;
int32_t x1050 = INT32_MIN;
volatile int64_t x1052 = -23530576LL;
uint32_t x1054 = 95719300U;
int8_t x1059 = -1;
uint8_t x1067 = 1U;
int32_t x1068 = -1;
uint64_t t121 = 121LLU;
int64_t x1073 = -1LL;
int64_t x1074 = -1LL;
static uint32_t t123 = 9594252U;
static volatile int32_t x1094 = INT32_MIN;
uint64_t t124 = 3728719214LLU;
volatile int64_t x1109 = INT64_MAX;
uint32_t x1111 = 88052873U;
int64_t x1113 = INT64_MAX;
int8_t x1115 = -7;
int64_t x1122 = -1LL;
static volatile int64_t t129 = 53077540341678LL;
int8_t x1152 = INT8_MIN;
static uint64_t t133 = 127809743LLU;
int32_t x1172 = -1;
int16_t x1173 = -3;
static int32_t x1176 = INT32_MIN;
int64_t x1194 = 4250930695788287361LL;
uint16_t x1195 = 173U;
uint64_t x1203 = UINT64_MAX;
volatile int32_t x1216 = -1;
volatile uint32_t x1267 = 145718392U;
volatile int64_t t145 = 245867317807743713LL;
uint16_t x1276 = 5U;
int8_t x1285 = INT8_MIN;
volatile int64_t t147 = 0LL;
int64_t x1293 = INT64_MIN;
int16_t x1299 = INT16_MIN;
int32_t t151 = -183225;
int64_t t154 = 253127937969LL;
static volatile uint32_t x1337 = UINT32_MAX;
uint16_t x1339 = UINT16_MAX;
uint32_t x1342 = 231334687U;
int64_t x1349 = INT64_MIN;
uint64_t x1374 = UINT64_MAX;
int64_t t160 = 17815520116LL;
int16_t x1390 = -7178;
uint16_t x1393 = 98U;
static int16_t x1395 = INT16_MAX;
static uint32_t x1396 = 940956599U;
int32_t x1402 = INT32_MIN;
uint8_t x1403 = UINT8_MAX;
int16_t x1420 = -51;
volatile int64_t t165 = -4111367864146893212LL;
volatile uint16_t x1440 = 3590U;
volatile uint8_t x1453 = 0U;
volatile int64_t t170 = -16140346972329LL;
int16_t x1477 = -1;
volatile int16_t x1490 = -460;
int32_t x1492 = INT32_MIN;
int32_t t173 = INT32_MIN;
static int8_t x1497 = INT8_MIN;
int16_t x1498 = INT16_MIN;
int16_t x1501 = -207;
static int64_t x1502 = 32918817388LL;
uint8_t x1503 = 14U;
volatile int16_t x1531 = INT16_MIN;
int8_t x1533 = INT8_MIN;
int32_t x1538 = INT32_MIN;
int8_t x1540 = -1;
volatile uint32_t t179 = 7U;
int32_t x1546 = -1;
int64_t x1547 = 1LL;
uint8_t x1585 = 71U;
volatile int64_t x1592 = -183111190832664LL;
int16_t x1602 = INT16_MIN;
static uint8_t x1604 = UINT8_MAX;
int64_t t186 = 25696405589299807LL;
int16_t x1608 = 0;
int64_t x1619 = -559LL;
volatile int64_t x1620 = 179541627LL;
int32_t x1626 = -1;
static uint64_t x1636 = 31007692602LLU;
uint64_t x1646 = 1023691074561LLU;
uint8_t x1647 = 42U;
static int16_t x1653 = INT16_MIN;
int32_t x1661 = -196964467;
int8_t x1663 = -1;
int16_t x1666 = INT16_MIN;
int16_t x1669 = INT16_MAX;
static int32_t t196 = 1;
static volatile uint16_t x1695 = 2U;
static int16_t x1696 = 1;


void f0(void) {
    	volatile uint8_t x1 = UINT8_MAX;
	int16_t x2 = -2;
	volatile int8_t x3 = -1;
	uint16_t x4 = 15114U;
	volatile int32_t t0 = 1228604;

    t0 = ((x1/(x2/x3))+x4);

    if (t0 != 15241) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MIN;
	int8_t x7 = INT8_MAX;
	static int8_t x8 = -3;
	static int64_t t1 = 7269LL;

    t1 = ((x5/(x6/x7))+x8);

    if (t1 != -3LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = INT16_MAX;
	int32_t x11 = -1;
	volatile int32_t t2 = 48169443;

    t2 = ((x9/(x10/x11))+x12);

    if (t2 != 23) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = INT64_MAX;
	volatile int64_t x16 = -1LL;
	uint64_t t3 = 2076982LLU;

    t3 = ((x13/(x14/x15))+x16);

    if (t3 != 628LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x33 = INT32_MAX;
	int32_t x34 = -84806;
	static int16_t x35 = INT16_MIN;
	volatile int32_t t4 = -9;

    t4 = ((x33/(x34/x35))+x36);

    if (t4 != 1073741829) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x53 = INT32_MIN;
	int32_t x54 = INT32_MAX;
	uint32_t x55 = 10979497U;
	volatile int8_t x56 = INT8_MAX;
	static volatile uint32_t t5 = 871U;

    t5 = ((x53/(x54/x55))+x56);

    if (t5 != 11012863U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x62 = INT16_MAX;
	volatile uint16_t x63 = 684U;
	uint8_t x64 = 1U;
	volatile int32_t t6 = 163;

    t6 = ((x61/(x62/x63))+x64);

    if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x69 = -1;
	int64_t x71 = -1LL;
	static uint16_t x72 = UINT16_MAX;

    t7 = ((x69/(x70/x71))+x72);

    if (t7 != 65535LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x85 = 329357713LLU;
	volatile uint32_t x86 = UINT32_MAX;
	int16_t x87 = -55;
	static volatile uint64_t t8 = 177LLU;

    t8 = ((x85/(x86/x87))+x88);

    if (t8 != 329357712LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x90 = INT32_MIN;
	int8_t x91 = INT8_MIN;
	uint64_t x92 = 150574LLU;
	static uint64_t t9 = 85459LLU;

    t9 = ((x89/(x90/x91))+x92);

    if (t9 != 1739736LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x93 = UINT8_MAX;
	int16_t x95 = -1;
	uint16_t x96 = 243U;
	static volatile int32_t t10 = 1018;

    t10 = ((x93/(x94/x95))+x96);

    if (t10 != 243) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x98 = INT64_MAX;
	int32_t x99 = INT32_MIN;
	int16_t x100 = -6;
	volatile int64_t t11 = -1150760891702727LL;

    t11 = ((x97/(x98/x99))+x100);

    if (t11 != -6LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x102 = INT16_MAX;
	uint8_t x103 = 5U;
	uint16_t x104 = 3U;
	int32_t t12 = -11317;

    t12 = ((x101/(x102/x103))+x104);

    if (t12 != 3) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x109 = 478180033607615LL;
	volatile uint64_t x110 = UINT64_MAX;
	static volatile int16_t x111 = INT16_MIN;
	int64_t x112 = 36635789786579LL;
	uint64_t t13 = 2811943696026LLU;

    t13 = ((x109/(x110/x111))+x112);

    if (t13 != 514815823394194LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x113 = -1LL;
	int16_t x115 = 29;
	volatile int8_t x116 = INT8_MIN;
	static volatile int64_t t14 = -15672054874413260LL;

    t14 = ((x113/(x114/x115))+x116);

    if (t14 != -128LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x118 = UINT32_MAX;
	int64_t x119 = -1LL;
	uint64_t x120 = 476586641LLU;
	volatile uint64_t t15 = 6573979873575667083LLU;

    t15 = ((x117/(x118/x119))+x120);

    if (t15 != 476586641LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x121 = 82672172LLU;
	int8_t x122 = INT8_MIN;
	volatile int8_t x123 = -1;
	uint64_t x124 = UINT64_MAX;
	uint64_t t16 = 30501763685804LLU;

    t16 = ((x121/(x122/x123))+x124);

    if (t16 != 645875LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x125 = INT64_MIN;
	static int64_t x127 = INT64_MIN;
	uint8_t x128 = UINT8_MAX;
	uint64_t t17 = 49981352LLU;

    t17 = ((x125/(x126/x127))+x128);

    if (t17 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x133 = 7U;
	int16_t x134 = INT16_MIN;
	volatile uint64_t x135 = 2LLU;
	int64_t x136 = INT64_MAX;
	volatile uint64_t t18 = 737538417733LLU;

    t18 = ((x133/(x134/x135))+x136);

    if (t18 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x146 = UINT32_MAX;
	int64_t x147 = -192429LL;

    t19 = ((x145/(x146/x147))+x148);

    if (t19 != 18446744073709551414LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x153 = 13LLU;
	volatile uint64_t x154 = 32688135LLU;
	int8_t x155 = 1;
	volatile int16_t x156 = INT16_MIN;
	static uint64_t t20 = 368LLU;

    t20 = ((x153/(x154/x155))+x156);

    if (t20 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x177 = INT16_MIN;
	int32_t x178 = INT32_MIN;
	uint64_t x179 = 1661859040958LLU;
	uint64_t t21 = 3279676148994LLU;

    t21 = ((x177/(x178/x179))+x180);

    if (t21 != 1661859103988LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x185 = INT32_MIN;
	volatile int64_t x186 = INT64_MAX;
	int8_t x188 = INT8_MAX;
	int64_t t22 = 19611392LL;

    t22 = ((x185/(x186/x187))+x188);

    if (t22 != 127LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x194 = INT32_MIN;
	uint64_t x195 = 215082291523187113LLU;
	static volatile int16_t x196 = -228;
	volatile uint64_t t23 = 52483766LLU;

    t23 = ((x193/(x194/x195))+x196);

    if (t23 != 18446744073709551388LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x197 = -2;
	static volatile int64_t x198 = INT64_MAX;
	int8_t x199 = INT8_MAX;
	int16_t x200 = INT16_MAX;

    t24 = ((x197/(x198/x199))+x200);

    if (t24 != 32767LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x201 = INT16_MIN;
	uint8_t x202 = 21U;
	int16_t x203 = -1;

    t25 = ((x201/(x202/x203))+x204);

    if (t25 != 1687) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x208 = 101436878LL;
	int64_t t26 = 13962LL;

    t26 = ((x205/(x206/x207))+x208);

    if (t26 != -4193530418LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x210 = INT64_MIN;
	int32_t x211 = INT32_MIN;

    t27 = ((x209/(x210/x211))+x212);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x221 = INT64_MIN;
	uint16_t x222 = 355U;
	volatile int16_t x224 = INT16_MIN;
	int64_t t28 = -241943735539224169LL;

    t28 = ((x221/(x222/x223))+x224);

    if (t28 != -341606371735394834LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x225 = 0;
	int8_t x226 = INT8_MIN;
	volatile uint8_t x227 = 126U;
	int32_t t29 = 105;

    t29 = ((x225/(x226/x227))+x228);

    if (t29 != 401) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x233 = INT16_MIN;
	uint64_t x234 = UINT64_MAX;
	uint64_t x235 = 3148640935118LLU;
	int8_t x236 = INT8_MIN;

    t30 = ((x233/(x234/x235))+x236);

    if (t30 != 3148641436839LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x237 = INT16_MIN;
	uint32_t x238 = 225U;
	volatile uint16_t x239 = 14U;
	int16_t x240 = INT16_MAX;
	uint32_t t31 = 19276U;

    t31 = ((x237/(x238/x239))+x240);

    if (t31 != 268466175U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x243 = 13581U;
	volatile int64_t x244 = INT64_MAX;
	uint64_t t32 = 91413100051724669LLU;

    t32 = ((x241/(x242/x243))+x244);

    if (t32 != 9223372036854789388LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x245 = UINT64_MAX;
	uint8_t x246 = 52U;
	static uint32_t x247 = 51U;
	int8_t x248 = INT8_MIN;
	static uint64_t t33 = 29439466225093LLU;

    t33 = ((x245/(x246/x247))+x248);

    if (t33 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x253 = -1;
	volatile int16_t x254 = -1;
	uint32_t x255 = 6474U;
	int32_t x256 = INT32_MIN;
	static uint32_t t34 = 6U;

    t34 = ((x253/(x254/x255))+x256);

    if (t34 != 2147490122U) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint32_t x257 = UINT32_MAX;
	int16_t x258 = -947;
	volatile int8_t x259 = INT8_MAX;
	static int16_t x260 = INT16_MAX;
	uint32_t t35 = 594U;

    t35 = ((x257/(x258/x259))+x260);

    if (t35 != 32768U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x261 = UINT16_MAX;
	int32_t x262 = INT32_MIN;
	uint8_t x263 = UINT8_MAX;
	int32_t x264 = INT32_MAX;
	static int32_t t36 = INT32_MAX;

    t36 = ((x261/(x262/x263))+x264);

    if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x277 = 75874778;
	int16_t x278 = 10118;
	volatile uint8_t x279 = 23U;
	volatile int16_t x280 = INT16_MIN;
	int32_t t37 = 8280389;

    t37 = ((x277/(x278/x279))+x280);

    if (t37 != 140067) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x282 = INT32_MIN;
	static int16_t x284 = 1666;
	volatile uint64_t t38 = 0LLU;

    t38 = ((x281/(x282/x283))+x284);

    if (t38 != 1667LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x285 = INT16_MIN;
	int16_t x286 = INT16_MIN;
	uint32_t x287 = 1232599U;
	volatile uint32_t t39 = 18201040U;

    t39 = ((x285/(x286/x287))+x288);

    if (t39 != 1298294U) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x289 = 1U;
	uint64_t x292 = 35849545850LLU;
	uint64_t t40 = 30369LLU;

    t40 = ((x289/(x290/x291))+x292);

    if (t40 != 35849545850LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x293 = INT32_MAX;
	int32_t x294 = -1;
	uint32_t x295 = 7U;
	static int32_t x296 = -1;
	static uint32_t t41 = 18995U;

    t41 = ((x293/(x294/x295))+x296);

    if (t41 != 2U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x297 = INT32_MIN;
	static uint64_t x298 = UINT64_MAX;
	static int16_t x299 = INT16_MIN;
	static int8_t x300 = INT8_MIN;
	volatile uint64_t t42 = 3633901688LLU;

    t42 = ((x297/(x298/x299))+x300);

    if (t42 != 18446744071562067840LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x302 = INT32_MAX;
	int8_t x303 = INT8_MIN;
	int32_t x304 = INT32_MAX;
	int32_t t43 = INT32_MAX;

    t43 = ((x301/(x302/x303))+x304);

    if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x305 = UINT8_MAX;
	int64_t x306 = -1LL;
	static int16_t x307 = -1;
	volatile int32_t x308 = -187981756;
	int64_t t44 = -34258559LL;

    t44 = ((x305/(x306/x307))+x308);

    if (t44 != -187981501LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x309 = UINT16_MAX;
	static int32_t x310 = -29458352;
	int32_t x311 = -1;
	uint32_t t45 = UINT32_MAX;

    t45 = ((x309/(x310/x311))+x312);

    if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x318 = 795244U;
	int16_t x319 = 19;

    t46 = ((x317/(x318/x319))+x320);

    if (t46 != 65535U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x349 = 45105714980LLU;
	int8_t x350 = -1;
	int16_t x352 = INT16_MIN;
	uint64_t t47 = 95149049326LLU;

    t47 = ((x349/(x350/x351))+x352);

    if (t47 != 45105682212LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x353 = -1;
	static uint16_t x355 = UINT16_MAX;
	uint64_t t48 = 121852574LLU;

    t48 = ((x353/(x354/x355))+x356);

    if (t48 != 778773403107LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint32_t x369 = 1688233U;
	volatile int64_t x370 = INT64_MAX;
	volatile uint16_t x371 = UINT16_MAX;
	int64_t x372 = -1196065185921538877LL;
	static int64_t t49 = 3986LL;

    t49 = ((x369/(x370/x371))+x372);

    if (t49 != -1196065185921538877LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x373 = 5;
	uint64_t x374 = 152403978336226453LLU;
	volatile int8_t x375 = INT8_MAX;
	int64_t x376 = INT64_MIN;
	volatile uint64_t t50 = 2605LLU;

    t50 = ((x373/(x374/x375))+x376);

    if (t50 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x377 = -53;
	static int8_t x379 = INT8_MAX;
	volatile int32_t x380 = INT32_MAX;
	volatile int64_t t51 = 3431LL;

    t51 = ((x377/(x378/x379))+x380);

    if (t51 != 2147483647LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x389 = 95U;
	int32_t x390 = 1423785;
	static int32_t x391 = -926;
	static int8_t x392 = INT8_MAX;
	int32_t t52 = -47837468;

    t52 = ((x389/(x390/x391))+x392);

    if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x393 = -14675394LL;
	int64_t x394 = INT64_MIN;
	uint16_t x396 = 4213U;

    t53 = ((x393/(x394/x395))+x396);

    if (t53 != 4213LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x417 = INT8_MIN;
	int64_t x418 = INT64_MIN;
	static volatile int16_t x419 = 14989;

    t54 = ((x417/(x418/x419))+x420);

    if (t54 != -2839151548LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x431 = -1;
	int8_t x432 = INT8_MAX;
	int32_t t55 = 118811;

    t55 = ((x429/(x430/x431))+x432);

    if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x433 = INT16_MAX;
	int64_t x434 = INT64_MAX;
	int8_t x435 = INT8_MAX;
	int32_t x436 = INT32_MIN;
	static int64_t t56 = -129LL;

    t56 = ((x433/(x434/x435))+x436);

    if (t56 != -2147483648LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x445 = -24791LL;
	volatile uint16_t x446 = UINT16_MAX;
	volatile int64_t x447 = -1LL;
	uint8_t x448 = 5U;
	volatile int64_t t57 = 566671133769LL;

    t57 = ((x445/(x446/x447))+x448);

    if (t57 != 5LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x485 = 42395LLU;
	int64_t x488 = -4370749404572678386LL;
	static uint64_t t58 = 2142607700676663928LLU;

    t58 = ((x485/(x486/x487))+x488);

    if (t58 != 14075994669136915625LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x489 = -59;
	volatile int16_t x490 = INT16_MIN;
	static volatile int8_t x492 = INT8_MAX;
	int32_t t59 = 493776;

    t59 = ((x489/(x490/x491))+x492);

    if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x505 = 2508281469405958117LLU;
	static uint32_t x507 = 72419864U;
	uint8_t x508 = 0U;
	uint64_t t60 = 178149LLU;

    t60 = ((x505/(x506/x507))+x508);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x513 = 2U;
	int64_t x516 = INT64_MAX;
	int64_t t61 = INT64_MAX;

    t61 = ((x513/(x514/x515))+x516);

    if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x525 = INT16_MAX;
	uint64_t x527 = 199LLU;
	static volatile uint16_t x528 = UINT16_MAX;
	uint64_t t62 = 3435694747LLU;

    t62 = ((x525/(x526/x527))+x528);

    if (t62 != 65734LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x537 = 24U;
	static uint64_t x538 = UINT64_MAX;
	int64_t x539 = -3845468199LL;

    t63 = ((x537/(x538/x539))+x540);

    if (t63 != 18446744073709551512LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x546 = INT16_MIN;
	static int8_t x547 = INT8_MIN;
	int8_t x548 = 0;
	int32_t t64 = 30;

    t64 = ((x545/(x546/x547))+x548);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x554 = UINT32_MAX;
	int32_t x555 = 9648797;
	volatile uint32_t x556 = UINT32_MAX;
	uint32_t t65 = 4U;

    t65 = ((x553/(x554/x555))+x556);

    if (t65 != 4825804U) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x557 = 500U;
	int16_t x558 = INT16_MIN;
	volatile int64_t x560 = 20908997219411LL;

    t66 = ((x557/(x558/x559))+x560);

    if (t66 != 20908997219411LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x566 = INT32_MIN;
	volatile int32_t x568 = INT32_MIN;
	int64_t t67 = -1946482411689673LL;

    t67 = ((x565/(x566/x567))+x568);

    if (t67 != -2147483648LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x570 = UINT8_MAX;
	static int16_t x571 = 1;
	int64_t x572 = INT64_MAX;
	static int64_t t68 = 13640408431256LL;

    t68 = ((x569/(x570/x571))+x572);

    if (t68 != 9223372036854775779LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x577 = INT64_MIN;
	volatile uint16_t x579 = UINT16_MAX;
	int32_t x580 = INT32_MAX;
	volatile int64_t t69 = -27719938LL;

    t69 = ((x577/(x578/x579))+x580);

    if (t69 != -18373248921948177LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x581 = 191573;
	int8_t x582 = INT8_MAX;
	uint8_t x583 = 15U;
	int8_t x584 = INT8_MIN;
	static volatile int32_t t70 = 88975;

    t70 = ((x581/(x582/x583))+x584);

    if (t70 != 23818) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x589 = 952LL;
	int16_t x591 = -1;
	volatile int16_t x592 = -275;
	int64_t t71 = -9153144452524528LL;

    t71 = ((x589/(x590/x591))+x592);

    if (t71 != 677LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x593 = 8U;
	int64_t x594 = INT64_MAX;
	volatile uint8_t x595 = 14U;
	int32_t x596 = INT32_MAX;

    t72 = ((x593/(x594/x595))+x596);

    if (t72 != 2147483647LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x614 = INT8_MIN;
	int16_t x616 = INT16_MIN;
	volatile int64_t t73 = -31885LL;

    t73 = ((x613/(x614/x615))+x616);

    if (t73 != -32768LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x617 = 4997U;
	int32_t x618 = INT32_MIN;
	int8_t x620 = INT8_MIN;
	static int32_t t74 = 3;

    t74 = ((x617/(x618/x619))+x620);

    if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x630 = 27855593U;
	static volatile uint32_t x631 = 31586U;
	volatile uint16_t x632 = 104U;

    t75 = ((x629/(x630/x631))+x632);

    if (t75 != 104U) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x633 = INT8_MIN;
	int32_t x634 = -24395507;
	int64_t x636 = 3423254796499713LL;
	volatile int64_t t76 = 41358LL;

    t76 = ((x633/(x634/x635))+x636);

    if (t76 != 3423254796499713LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x641 = 372351U;
	volatile uint32_t x642 = UINT32_MAX;
	int8_t x643 = 28;
	static uint32_t x644 = UINT32_MAX;
	uint32_t t77 = UINT32_MAX;

    t77 = ((x641/(x642/x643))+x644);

    if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x653 = -1LL;
	volatile int8_t x655 = -32;
	int64_t x656 = -259970819LL;
	int64_t t78 = -6467LL;

    t78 = ((x653/(x654/x655))+x656);

    if (t78 != -259970819LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x665 = -1;
	volatile int16_t x666 = -1429;
	uint32_t x667 = 16550U;
	static uint16_t x668 = 2046U;
	volatile uint32_t t79 = 3489U;

    t79 = ((x665/(x666/x667))+x668);

    if (t79 != 18596U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x681 = UINT64_MAX;
	volatile int32_t x683 = INT32_MIN;
	int8_t x684 = INT8_MAX;
	volatile uint64_t t80 = 23128474552579LLU;

    t80 = ((x681/(x682/x683))+x684);

    if (t80 != 128LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x693 = 0;
	uint64_t x694 = 121650037810LLU;
	int32_t x695 = INT32_MAX;
	static uint64_t x696 = 282LLU;
	static volatile uint64_t t81 = 953446666803LLU;

    t81 = ((x693/(x694/x695))+x696);

    if (t81 != 282LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x697 = INT16_MAX;
	int32_t x698 = -1;
	volatile int32_t t82 = -971;

    t82 = ((x697/(x698/x699))+x700);

    if (t82 != -65535) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x705 = INT64_MIN;
	uint16_t x708 = 2U;
	int64_t t83 = 2292LL;

    t83 = ((x705/(x706/x707))+x708);

    if (t83 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x713 = 0;
	volatile uint16_t x714 = UINT16_MAX;
	static uint8_t x715 = UINT8_MAX;
	int32_t t84 = INT32_MAX;

    t84 = ((x713/(x714/x715))+x716);

    if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x725 = 38U;
	static int16_t x728 = INT16_MIN;
	uint64_t t85 = 3488LLU;

    t85 = ((x725/(x726/x727))+x728);

    if (t85 != 18446744073709518886LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x745 = 358U;
	static int64_t x746 = INT64_MIN;
	volatile int16_t x747 = INT16_MIN;
	int64_t x748 = INT64_MIN;
	int64_t t86 = INT64_MIN;

    t86 = ((x745/(x746/x747))+x748);

    if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x758 = INT16_MAX;
	int64_t x759 = -1LL;
	uint8_t x760 = 7U;
	volatile int64_t t87 = -12605387529939613LL;

    t87 = ((x757/(x758/x759))+x760);

    if (t87 != -120645LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x773 = -11;
	volatile uint64_t x774 = 1081149453336670372LLU;
	int16_t x776 = INT16_MIN;
	volatile uint64_t t88 = 61168819LLU;

    t88 = ((x773/(x774/x775))+x776);

    if (t88 != 10501920LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x777 = -1LL;
	volatile uint8_t x778 = 42U;
	static int64_t x779 = -1LL;
	uint64_t x780 = UINT64_MAX;

    t89 = ((x777/(x778/x779))+x780);

    if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x782 = 8726473526910LLU;
	static int8_t x783 = INT8_MAX;
	uint64_t x784 = 523514579LLU;
	volatile uint64_t t90 = 4939768764174282LLU;

    t90 = ((x781/(x782/x783))+x784);

    if (t90 != 523514579LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x785 = INT64_MIN;
	static int16_t x786 = INT16_MIN;
	int32_t x787 = 112;
	int32_t x788 = -1;

    t91 = ((x785/(x786/x787))+x788);

    if (t91 != 31586890537173888LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x793 = INT8_MAX;
	int16_t x794 = -31;
	uint64_t x795 = 7950957459108973LLU;
	static uint64_t x796 = UINT64_MAX;
	volatile uint64_t t92 = UINT64_MAX;

    t92 = ((x793/(x794/x795))+x796);

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x806 = INT64_MIN;
	static int8_t x807 = -12;
	static volatile uint8_t x808 = 7U;
	static volatile int64_t t93 = 783LL;

    t93 = ((x805/(x806/x807))+x808);

    if (t93 != -5LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x810 = 2341626768LL;
	int8_t x811 = INT8_MAX;
	int64_t x812 = 0LL;
	int64_t t94 = 631190316421364LL;

    t94 = ((x809/(x810/x811))+x812);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x837 = 37U;
	static volatile uint64_t x838 = 47987125823LLU;
	uint8_t x839 = 11U;
	volatile int64_t x840 = INT64_MIN;
	uint64_t t95 = 11309661091LLU;

    t95 = ((x837/(x838/x839))+x840);

    if (t95 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x845 = -1;
	uint64_t x847 = UINT64_MAX;
	static int32_t x848 = -393170639;
	static volatile uint64_t t96 = 123206LLU;

    t96 = ((x845/(x846/x847))+x848);

    if (t96 != 18446744073316380976LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x849 = 766474;
	int64_t x850 = INT64_MIN;
	volatile uint16_t x852 = 12184U;
	volatile int64_t t97 = 427414666944752LL;

    t97 = ((x849/(x850/x851))+x852);

    if (t97 != 12184LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x853 = 1U;
	volatile int64_t x854 = INT64_MAX;
	int32_t x855 = -1;
	int64_t t98 = -13286994894LL;

    t98 = ((x853/(x854/x855))+x856);

    if (t98 != 1463898LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x865 = INT32_MAX;
	int8_t x867 = INT8_MIN;
	int64_t x868 = INT64_MIN;
	volatile int64_t t99 = INT64_MIN;

    t99 = ((x865/(x866/x867))+x868);

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x881 = INT8_MIN;
	static volatile int16_t x882 = INT16_MIN;
	uint8_t x883 = UINT8_MAX;
	int64_t x884 = -212215192376623LL;
	volatile int64_t t100 = 710655410947LL;

    t100 = ((x881/(x882/x883))+x884);

    if (t100 != -212215192376622LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x894 = INT8_MIN;
	uint32_t x895 = 117U;
	static volatile uint32_t t101 = 1779U;

    t101 = ((x893/(x894/x895))+x896);

    if (t101 != 350U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x899 = 3U;
	static int32_t x900 = INT32_MIN;
	static int64_t t102 = -37421LL;

    t102 = ((x897/(x898/x899))+x900);

    if (t102 != -2147483648LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x917 = INT32_MAX;
	uint16_t x919 = 2U;
	uint8_t x920 = 1U;
	volatile int32_t t103 = -5770273;

    t103 = ((x917/(x918/x919))+x920);

    if (t103 != -131070) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x921 = UINT32_MAX;
	int8_t x924 = INT8_MIN;
	uint64_t t104 = 15LLU;

    t104 = ((x921/(x922/x923))+x924);

    if (t104 != 18446744073709551500LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x933 = INT16_MIN;
	int64_t x934 = INT64_MAX;
	int8_t x935 = 25;
	int8_t x936 = INT8_MIN;
	static int64_t t105 = -29113482LL;

    t105 = ((x933/(x934/x935))+x936);

    if (t105 != -128LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x946 = INT8_MIN;
	volatile int8_t x947 = INT8_MIN;
	volatile int64_t x948 = -1LL;
	static volatile int64_t t106 = 11091LL;

    t106 = ((x945/(x946/x947))+x948);

    if (t106 != -26LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x954 = 10614225;
	volatile int8_t x955 = INT8_MIN;
	volatile int16_t x956 = INT16_MIN;
	volatile uint32_t t107 = 41U;

    t107 = ((x953/(x954/x955))+x956);

    if (t107 != 4294934529U) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x962 = -5LL;
	static int8_t x963 = -1;
	static int32_t x964 = INT32_MIN;
	static int64_t t108 = 28467201713LL;

    t108 = ((x961/(x962/x963))+x964);

    if (t108 != -2147482212LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x973 = INT32_MAX;
	uint64_t x974 = 5464493LLU;
	uint16_t x975 = 5U;
	int32_t x976 = -1;

    t109 = ((x973/(x974/x975))+x976);

    if (t109 != 1963LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x986 = 261647127306150LL;
	uint16_t x987 = 1U;
	int8_t x988 = 0;
	volatile uint64_t t110 = 97480391LLU;

    t110 = ((x985/(x986/x987))+x988);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x993 = 2;
	volatile int64_t x996 = INT64_MIN;

    t111 = ((x993/(x994/x995))+x996);

    if (t111 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x1005 = INT32_MAX;
	int64_t x1006 = INT64_MAX;
	uint64_t x1007 = 16606178329678718LLU;
	volatile uint16_t x1008 = UINT16_MAX;
	static volatile uint64_t t112 = 830LLU;

    t112 = ((x1005/(x1006/x1007))+x1008);

    if (t112 != 3934874LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x1009 = 125397700386585185LL;
	int32_t x1010 = INT32_MIN;
	uint32_t x1012 = 1585092U;
	volatile int64_t t113 = 7665146474428615LL;

    t113 = ((x1009/(x1010/x1011))+x1012);

    if (t113 != 1913418644213LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint16_t x1013 = UINT16_MAX;
	uint16_t x1015 = 469U;
	volatile int64_t x1016 = 3698764845210885LL;
	volatile int64_t t114 = 0LL;

    t114 = ((x1013/(x1014/x1015))+x1016);

    if (t114 != 3698764845210885LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x1018 = INT32_MIN;
	volatile uint16_t x1019 = 2U;
	int32_t x1020 = INT32_MAX;
	volatile int32_t t115 = INT32_MAX;

    t115 = ((x1017/(x1018/x1019))+x1020);

    if (t115 != INT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x1021 = 25U;
	uint32_t x1023 = 48U;
	int8_t x1024 = -1;
	volatile uint32_t t116 = UINT32_MAX;

    t116 = ((x1021/(x1022/x1023))+x1024);

    if (t116 != UINT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x1037 = 7827;
	static uint32_t x1038 = 842150U;
	int8_t x1039 = INT8_MAX;
	uint32_t t117 = 15445U;

    t117 = ((x1037/(x1038/x1039))+x1040);

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x1049 = INT64_MIN;
	int16_t x1051 = INT16_MIN;
	int64_t t118 = -17524530411257LL;

    t118 = ((x1049/(x1050/x1051))+x1052);

    if (t118 != -140737511885904LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x1053 = INT16_MIN;
	uint16_t x1055 = 25312U;
	static int8_t x1056 = INT8_MIN;
	volatile uint32_t t119 = 17781103U;

    t119 = ((x1053/(x1054/x1055))+x1056);

    if (t119 != 1135797U) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x1057 = INT8_MIN;
	static int8_t x1058 = -1;
	int8_t x1060 = INT8_MAX;
	int32_t t120 = -2;

    t120 = ((x1057/(x1058/x1059))+x1060);

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x1065 = 22333929511223426LLU;
	int64_t x1066 = 7792054043024LL;

    t121 = ((x1065/(x1066/x1067))+x1068);

    if (t121 != 2865LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x1075 = -1LL;
	int64_t x1076 = -1LL;
	int64_t t122 = 1230856004367609LL;

    t122 = ((x1073/(x1074/x1075))+x1076);

    if (t122 != -2LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x1081 = 28242U;
	uint32_t x1082 = 506053596U;
	uint8_t x1083 = 1U;
	int32_t x1084 = INT32_MAX;

    t123 = ((x1081/(x1082/x1083))+x1084);

    if (t123 != 2147483647U) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x1093 = INT64_MAX;
	uint64_t x1095 = 3699165840115309LLU;
	int8_t x1096 = 0;

    t124 = ((x1093/(x1094/x1095))+x1096);

    if (t124 != 1849853998566942LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x1110 = UINT32_MAX;
	uint8_t x1112 = 0U;
	int64_t t125 = 3509419002885069542LL;

    t125 = ((x1109/(x1110/x1111))+x1112);

    if (t125 != 192153584101141162LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x1114 = INT8_MAX;
	static uint8_t x1116 = 17U;
	int64_t t126 = 8857646374950491LL;

    t126 = ((x1113/(x1114/x1115))+x1116);

    if (t126 != -512409557603043083LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int8_t x1121 = INT8_MIN;
	uint64_t x1123 = 1719557573590LLU;
	int32_t x1124 = INT32_MAX;
	volatile uint64_t t127 = 57597LLU;

    t127 = ((x1121/(x1122/x1123))+x1124);

    if (t127 != 1721705155272LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x1125 = INT32_MAX;
	int32_t x1126 = INT32_MIN;
	static int16_t x1127 = INT16_MIN;
	static int64_t x1128 = INT64_MIN;
	volatile int64_t t128 = 4454711472675238618LL;

    t128 = ((x1125/(x1126/x1127))+x1128);

    if (t128 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x1141 = 98;
	static int64_t x1142 = INT64_MIN;
	int16_t x1143 = -517;
	volatile uint8_t x1144 = 0U;

    t129 = ((x1141/(x1142/x1143))+x1144);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x1145 = 1U;
	int32_t x1146 = INT32_MAX;
	uint8_t x1147 = UINT8_MAX;
	int16_t x1148 = INT16_MAX;
	volatile int32_t t130 = -1;

    t130 = ((x1145/(x1146/x1147))+x1148);

    if (t130 != 32767) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x1149 = 161581809U;
	int32_t x1150 = INT32_MIN;
	int32_t x1151 = INT32_MIN;
	volatile uint32_t t131 = 1509727U;

    t131 = ((x1149/(x1150/x1151))+x1152);

    if (t131 != 161581681U) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x1153 = -6790;
	uint64_t x1154 = UINT64_MAX;
	int8_t x1155 = 4;
	static volatile int8_t x1156 = -1;
	volatile uint64_t t132 = 135442221967971LLU;

    t132 = ((x1153/(x1154/x1155))+x1156);

    if (t132 != 2LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int64_t x1161 = -1LL;
	static uint64_t x1162 = 1417821285411LLU;
	int8_t x1163 = INT8_MAX;
	static volatile int16_t x1164 = -40;

    t133 = ((x1161/(x1162/x1163))+x1164);

    if (t133 != 1652349604LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x1169 = 4361U;
	int32_t x1170 = INT32_MIN;
	uint16_t x1171 = 83U;
	uint32_t t134 = UINT32_MAX;

    t134 = ((x1169/(x1170/x1171))+x1172);

    if (t134 != UINT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int64_t x1174 = INT64_MAX;
	static int32_t x1175 = -1;
	volatile int64_t t135 = 494415694494LL;

    t135 = ((x1173/(x1174/x1175))+x1176);

    if (t135 != -2147483648LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x1181 = 63636618841440LLU;
	int32_t x1182 = INT32_MIN;
	volatile int16_t x1183 = INT16_MAX;
	volatile uint32_t x1184 = 126366118U;
	volatile uint64_t t136 = 102274LLU;

    t136 = ((x1181/(x1182/x1183))+x1184);

    if (t136 != 126366118LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x1189 = -1;
	uint64_t x1190 = 34868782871LLU;
	uint32_t x1191 = UINT32_MAX;
	static uint32_t x1192 = 1793107994U;
	volatile uint64_t t137 = 1092LLU;

    t137 = ((x1189/(x1190/x1191))+x1192);

    if (t137 != 2305843011006801945LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x1193 = INT16_MIN;
	uint16_t x1196 = 0U;
	int64_t t138 = 183LL;

    t138 = ((x1193/(x1194/x1195))+x1196);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x1201 = -1LL;
	static volatile int16_t x1202 = -1;
	volatile int32_t x1204 = -1;
	uint64_t t139 = 466LLU;

    t139 = ((x1201/(x1202/x1203))+x1204);

    if (t139 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x1205 = 1755U;
	volatile int16_t x1206 = INT16_MIN;
	int16_t x1207 = -1;
	int32_t x1208 = -1;
	volatile int32_t t140 = -2590332;

    t140 = ((x1205/(x1206/x1207))+x1208);

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x1213 = INT64_MIN;
	uint8_t x1214 = 3U;
	int8_t x1215 = -1;
	volatile int64_t t141 = 195301LL;

    t141 = ((x1213/(x1214/x1215))+x1216);

    if (t141 != 3074457345618258601LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x1241 = -53;
	int64_t x1242 = 436994003715008387LL;
	uint64_t x1243 = 131LLU;
	int16_t x1244 = INT16_MAX;
	volatile uint64_t t142 = 117488592038616976LLU;

    t142 = ((x1241/(x1242/x1243))+x1244);

    if (t142 != 38296LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x1249 = 23;
	volatile uint16_t x1250 = 12219U;
	int8_t x1251 = 15;
	int32_t x1252 = INT32_MIN;
	volatile int32_t t143 = INT32_MIN;

    t143 = ((x1249/(x1250/x1251))+x1252);

    if (t143 != INT32_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x1265 = -9346318;
	int16_t x1266 = -1;
	static volatile int16_t x1268 = -290;
	volatile uint32_t t144 = 1562U;

    t144 = ((x1265/(x1266/x1267))+x1268);

    if (t144 != 147779743U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x1269 = INT16_MIN;
	int64_t x1270 = INT64_MIN;
	static int8_t x1271 = INT8_MIN;
	volatile uint16_t x1272 = 2U;

    t145 = ((x1269/(x1270/x1271))+x1272);

    if (t145 != 2LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x1273 = 4617U;
	uint64_t x1274 = UINT64_MAX;
	volatile int16_t x1275 = INT16_MIN;
	uint64_t t146 = 3008947886475268567LLU;

    t146 = ((x1273/(x1274/x1275))+x1276);

    if (t146 != 4622LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x1286 = INT16_MAX;
	uint8_t x1287 = 2U;
	int64_t x1288 = -1LL;

    t147 = ((x1285/(x1286/x1287))+x1288);

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x1289 = 1430LLU;
	int64_t x1290 = INT64_MIN;
	uint8_t x1291 = UINT8_MAX;
	volatile uint16_t x1292 = UINT16_MAX;
	uint64_t t148 = 48761660187714923LLU;

    t148 = ((x1289/(x1290/x1291))+x1292);

    if (t148 != 65535LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x1294 = 23U;
	static int64_t x1295 = -1LL;
	int64_t x1296 = -1LL;
	int64_t t149 = -19705328732215663LL;

    t149 = ((x1293/(x1294/x1295))+x1296);

    if (t149 != 401016175515425034LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x1297 = 12;
	int16_t x1298 = INT16_MIN;
	int8_t x1300 = 2;
	static volatile int32_t t150 = 21;

    t150 = ((x1297/(x1298/x1299))+x1300);

    if (t150 != 14) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x1305 = -1;
	static uint8_t x1306 = UINT8_MAX;
	uint16_t x1307 = 23U;
	int8_t x1308 = -1;

    t151 = ((x1305/(x1306/x1307))+x1308);

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x1309 = INT32_MIN;
	int64_t x1310 = INT64_MIN;
	uint8_t x1311 = 1U;
	static uint64_t x1312 = 29274271LLU;
	static uint64_t t152 = 66484722089LLU;

    t152 = ((x1309/(x1310/x1311))+x1312);

    if (t152 != 29274271LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x1325 = UINT8_MAX;
	int16_t x1326 = INT16_MIN;
	static int8_t x1327 = INT8_MAX;
	uint16_t x1328 = 8287U;
	int32_t t153 = 535641;

    t153 = ((x1325/(x1326/x1327))+x1328);

    if (t153 != 8287) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x1329 = 11;
	static int32_t x1330 = INT32_MAX;
	static int16_t x1331 = INT16_MIN;
	int64_t x1332 = -1LL;

    t154 = ((x1329/(x1330/x1331))+x1332);

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x1333 = UINT64_MAX;
	int64_t x1334 = -5221523336LL;
	static volatile uint64_t x1335 = 490LLU;
	static int16_t x1336 = INT16_MAX;
	uint64_t t155 = 260256264609LLU;

    t155 = ((x1333/(x1334/x1335))+x1336);

    if (t155 != 33257LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1338 = INT32_MIN;
	uint8_t x1340 = UINT8_MAX;
	volatile uint32_t t156 = 3585199U;

    t156 = ((x1337/(x1338/x1339))+x1340);

    if (t156 != 256U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x1341 = -12;
	uint8_t x1343 = 8U;
	int32_t x1344 = 14;
	volatile uint32_t t157 = 10504U;

    t157 = ((x1341/(x1342/x1343))+x1344);

    if (t157 != 162U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x1350 = INT64_MAX;
	uint64_t x1351 = 691723373871LLU;
	int16_t x1352 = -1;
	uint64_t t158 = 5068231833074491LLU;

    t158 = ((x1349/(x1350/x1351))+x1352);

    if (t158 != 691723400760LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x1373 = UINT8_MAX;
	int32_t x1375 = INT32_MIN;
	uint16_t x1376 = UINT16_MAX;
	volatile uint64_t t159 = 7LLU;

    t159 = ((x1373/(x1374/x1375))+x1376);

    if (t159 != 65790LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1385 = INT8_MIN;
	int64_t x1386 = INT64_MAX;
	volatile int8_t x1387 = INT8_MIN;
	uint8_t x1388 = 0U;

    t160 = ((x1385/(x1386/x1387))+x1388);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x1389 = 101U;
	uint64_t x1391 = 72LLU;
	int64_t x1392 = INT64_MAX;
	volatile uint64_t t161 = 327157630479LLU;

    t161 = ((x1389/(x1390/x1391))+x1392);

    if (t161 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x1394 = INT16_MAX;
	static uint32_t t162 = 641U;

    t162 = ((x1393/(x1394/x1395))+x1396);

    if (t162 != 940956697U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1401 = INT8_MIN;
	volatile int64_t x1404 = 373433374152430999LL;
	volatile int64_t t163 = 5602406773435LL;

    t163 = ((x1401/(x1402/x1403))+x1404);

    if (t163 != 373433374152430999LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x1409 = 10U;
	static volatile int32_t x1410 = -51187735;
	static volatile uint32_t x1411 = 2085254506U;
	volatile uint64_t x1412 = 502478384LLU;
	volatile uint64_t t164 = 939091801031LLU;

    t164 = ((x1409/(x1410/x1411))+x1412);

    if (t164 != 502478389LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x1417 = 19367U;
	volatile int64_t x1418 = INT64_MAX;
	volatile uint16_t x1419 = 4948U;

    t165 = ((x1417/(x1418/x1419))+x1420);

    if (t165 != -51LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x1425 = INT32_MIN;
	volatile uint32_t x1426 = UINT32_MAX;
	uint8_t x1427 = UINT8_MAX;
	int8_t x1428 = INT8_MIN;
	static uint32_t t166 = UINT32_MAX;

    t166 = ((x1425/(x1426/x1427))+x1428);

    if (t166 != UINT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x1437 = 1016U;
	uint64_t x1438 = UINT64_MAX;
	static int16_t x1439 = -1;
	volatile uint64_t t167 = 13652764330LLU;

    t167 = ((x1437/(x1438/x1439))+x1440);

    if (t167 != 4606LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x1445 = 34U;
	int32_t x1446 = -989623224;
	int32_t x1447 = -5;
	int16_t x1448 = INT16_MIN;
	uint32_t t168 = 63U;

    t168 = ((x1445/(x1446/x1447))+x1448);

    if (t168 != 4294934528U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x1454 = 391339538881LLU;
	volatile uint8_t x1455 = 13U;
	volatile uint16_t x1456 = 1777U;
	uint64_t t169 = 39968LLU;

    t169 = ((x1453/(x1454/x1455))+x1456);

    if (t169 != 1777LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1457 = 4U;
	int64_t x1458 = INT64_MIN;
	int16_t x1459 = 52;
	static int8_t x1460 = INT8_MIN;

    t170 = ((x1457/(x1458/x1459))+x1460);

    if (t170 != -128LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x1478 = 257U;
	static uint16_t x1479 = 2U;
	int16_t x1480 = INT16_MIN;
	volatile int32_t t171 = -9432;

    t171 = ((x1477/(x1478/x1479))+x1480);

    if (t171 != -32768) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int16_t x1485 = INT16_MIN;
	static volatile uint64_t x1486 = UINT64_MAX;
	uint64_t x1487 = 4442048681584739LLU;
	int32_t x1488 = -1;
	static volatile uint64_t t172 = 610358698532797LLU;

    t172 = ((x1485/(x1486/x1487))+x1488);

    if (t172 != 4442857435864526LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x1489 = -1;
	int8_t x1491 = -1;

    t173 = ((x1489/(x1490/x1491))+x1492);

    if (t173 != INT32_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x1499 = UINT8_MAX;
	int32_t x1500 = -982;
	int32_t t174 = 7776489;

    t174 = ((x1497/(x1498/x1499))+x1500);

    if (t174 != -981) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x1504 = INT32_MIN;
	volatile int64_t t175 = -15407LL;

    t175 = ((x1501/(x1502/x1503))+x1504);

    if (t175 != -2147483648LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int8_t x1513 = -1;
	static uint16_t x1514 = 233U;
	int8_t x1515 = INT8_MIN;
	volatile int64_t x1516 = INT64_MIN;
	volatile int64_t t176 = -15931LL;

    t176 = ((x1513/(x1514/x1515))+x1516);

    if (t176 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1529 = 15559;
	int32_t x1530 = -9563552;
	volatile uint8_t x1532 = UINT8_MAX;
	volatile int32_t t177 = 0;

    t177 = ((x1529/(x1530/x1531))+x1532);

    if (t177 != 308) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint32_t x1534 = 44130180U;
	uint32_t x1535 = 164759U;
	int16_t x1536 = -1;
	uint32_t t178 = 17110748U;

    t178 = ((x1533/(x1534/x1535))+x1536);

    if (t178 != 16086018U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x1537 = 2803U;
	volatile uint32_t x1539 = 6259538U;

    t179 = ((x1537/(x1538/x1539))+x1540);

    if (t179 != 7U) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1541 = INT16_MIN;
	static uint16_t x1542 = UINT16_MAX;
	int8_t x1543 = -1;
	volatile int8_t x1544 = -1;
	static volatile int32_t t180 = -5;

    t180 = ((x1541/(x1542/x1543))+x1544);

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1545 = INT16_MIN;
	static int64_t x1548 = 185LL;
	volatile int64_t t181 = -13582822605863LL;

    t181 = ((x1545/(x1546/x1547))+x1548);

    if (t181 != 32953LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x1561 = 56;
	int64_t x1562 = INT64_MIN;
	int64_t x1563 = INT64_MIN;
	volatile uint16_t x1564 = UINT16_MAX;
	volatile int64_t t182 = -912676216522665LL;

    t182 = ((x1561/(x1562/x1563))+x1564);

    if (t182 != 65591LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1586 = INT32_MAX;
	static int8_t x1587 = -24;
	static uint8_t x1588 = UINT8_MAX;
	int32_t t183 = -38381347;

    t183 = ((x1585/(x1586/x1587))+x1588);

    if (t183 != 255) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1589 = INT32_MAX;
	uint32_t x1590 = UINT32_MAX;
	static int16_t x1591 = -1;
	int64_t t184 = -736LL;

    t184 = ((x1589/(x1590/x1591))+x1592);

    if (t184 != -183109043349017LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x1593 = 0U;
	volatile uint8_t x1594 = 3U;
	int64_t x1595 = -1LL;
	static uint64_t x1596 = 7837185958953218626LLU;
	volatile uint64_t t185 = 7584614411456LLU;

    t185 = ((x1593/(x1594/x1595))+x1596);

    if (t185 != 7837185958953218626LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x1601 = 2968625388LL;
	uint32_t x1603 = 67981450U;

    t186 = ((x1601/(x1602/x1603))+x1604);

    if (t186 != 47121292LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1605 = -1;
	volatile int16_t x1606 = -733;
	int16_t x1607 = -1;
	static int32_t t187 = -15;

    t187 = ((x1605/(x1606/x1607))+x1608);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x1617 = 6U;
	volatile uint32_t x1618 = 2672855U;
	int64_t t188 = 170992LL;

    t188 = ((x1617/(x1618/x1619))+x1620);

    if (t188 != 179541627LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1621 = 40U;
	volatile int64_t x1622 = INT64_MAX;
	int8_t x1623 = INT8_MIN;
	uint64_t x1624 = 4048LLU;
	uint64_t t189 = 21992038458488LLU;

    t189 = ((x1621/(x1622/x1623))+x1624);

    if (t189 != 4048LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1625 = UINT32_MAX;
	uint64_t x1627 = 50205024081546729LLU;
	static uint32_t x1628 = 1443618131U;
	static uint64_t t190 = 15712LLU;

    t190 = ((x1625/(x1626/x1627))+x1628);

    if (t190 != 1455321039LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1633 = INT8_MIN;
	static int32_t x1634 = INT32_MAX;
	uint16_t x1635 = UINT16_MAX;
	uint64_t t191 = 6671581281811291822LLU;

    t191 = ((x1633/(x1634/x1635))+x1636);

    if (t191 != 31007692602LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint32_t x1645 = UINT32_MAX;
	int8_t x1648 = INT8_MAX;
	volatile uint64_t t192 = 50255357456031047LLU;

    t192 = ((x1645/(x1646/x1647))+x1648);

    if (t192 != 127LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x1654 = 21466753U;
	int16_t x1655 = INT16_MAX;
	uint64_t x1656 = UINT64_MAX;
	uint64_t t193 = 497080327899323LLU;

    t193 = ((x1653/(x1654/x1655))+x1656);

    if (t193 != 6557150LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1662 = INT32_MAX;
	int8_t x1664 = INT8_MIN;
	volatile int32_t t194 = -3948783;

    t194 = ((x1661/(x1662/x1663))+x1664);

    if (t194 != -128) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1665 = 46U;
	static int16_t x1667 = -1;
	static volatile int32_t x1668 = INT32_MIN;
	int32_t t195 = INT32_MIN;

    t195 = ((x1665/(x1666/x1667))+x1668);

    if (t195 != INT32_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x1670 = INT16_MIN;
	volatile int8_t x1671 = -1;
	int32_t x1672 = 355663;

    t196 = ((x1669/(x1670/x1671))+x1672);

    if (t196 != 355663) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1673 = 9;
	static int64_t x1674 = INT64_MAX;
	static int8_t x1675 = 2;
	volatile int8_t x1676 = INT8_MIN;
	int64_t t197 = -210069070725809323LL;

    t197 = ((x1673/(x1674/x1675))+x1676);

    if (t197 != -128LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1689 = -13;
	static uint32_t x1690 = UINT32_MAX;
	int64_t x1691 = 402LL;
	int8_t x1692 = INT8_MAX;
	int64_t t198 = -36976LL;

    t198 = ((x1689/(x1690/x1691))+x1692);

    if (t198 != 127LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1693 = INT32_MIN;
	static int32_t x1694 = -1015532;
	int32_t t199 = -171;

    t199 = ((x1693/(x1694/x1695))+x1696);

    if (t199 != 4230) { NG(); } else { ; }
	
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



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

static volatile uint16_t x3 = UINT16_MAX;
volatile uint16_t x11 = 40U;
static int8_t x12 = -1;
volatile uint16_t x24 = 13140U;
uint32_t t2 = 99U;
volatile uint64_t t3 = 1494LLU;
int32_t x58 = INT32_MIN;
int16_t x67 = INT16_MIN;
volatile int32_t x73 = -54;
static int64_t t8 = 1701LL;
int16_t x92 = INT16_MIN;
volatile uint32_t t9 = 1596705232U;
int8_t x108 = INT8_MIN;
volatile uint32_t t11 = 65304U;
volatile int16_t x119 = INT16_MIN;
int8_t x130 = INT8_MAX;
volatile int32_t t13 = 5;
uint16_t x137 = UINT16_MAX;
int32_t x187 = 146341;
int8_t x201 = -8;
int32_t t18 = -74404758;
int16_t x214 = -1;
int8_t x222 = INT8_MIN;
int16_t x229 = INT16_MIN;
uint64_t x231 = 6201LLU;
static volatile uint64_t t24 = 47657793902481245LLU;
uint64_t t29 = 29982655646189LLU;
uint64_t x268 = 1350707251LLU;
static int32_t x271 = -1;
uint8_t x272 = 13U;
volatile int64_t t31 = -35510203659LL;
int16_t x279 = -173;
uint64_t t34 = 983161255407027020LLU;
static int16_t x315 = INT16_MIN;
uint32_t x332 = 550342238U;
static volatile int64_t t39 = 24LL;
int16_t x351 = INT16_MIN;
static uint8_t x369 = 19U;
int8_t x371 = 1;
int8_t x372 = INT8_MIN;
uint32_t x378 = UINT32_MAX;
int64_t x408 = INT64_MAX;
int8_t x413 = -1;
volatile int16_t x415 = -14326;
volatile int64_t x426 = INT64_MIN;
uint64_t x443 = 12047LLU;
int8_t x460 = INT8_MIN;
static int8_t x499 = INT8_MAX;
int64_t x502 = -1LL;
static volatile int64_t t57 = 239911712041241243LL;
static volatile int32_t x532 = -1;
volatile uint64_t t58 = 327699LLU;
static volatile int32_t t59 = -233402;
static int8_t x538 = INT8_MIN;
int32_t x539 = -9;
uint64_t t60 = 47881595340576362LLU;
int64_t x541 = INT64_MIN;
uint16_t x542 = 2319U;
uint32_t x547 = 435223858U;
static int8_t x549 = 1;
static int64_t x554 = INT64_MIN;
int32_t x557 = -351234;
uint32_t x558 = 905308U;
uint64_t x569 = UINT64_MAX;
int64_t x573 = 61472641987412LL;
int16_t x582 = -1;
static volatile uint16_t x584 = UINT16_MAX;
uint8_t x593 = UINT8_MAX;
static int16_t x595 = INT16_MIN;
volatile int64_t x596 = INT64_MAX;
static volatile int32_t x606 = INT32_MIN;
static volatile uint32_t t70 = 7624675U;
int8_t x611 = INT8_MAX;
static int64_t x615 = INT64_MIN;
uint64_t x630 = UINT64_MAX;
uint64_t t74 = 1444785412478LLU;
uint16_t x648 = 690U;
volatile uint32_t x650 = 387071292U;
volatile int32_t t77 = 0;
uint64_t x663 = 5092LLU;
static uint64_t x664 = 248LLU;
uint32_t x666 = UINT32_MAX;
int16_t x670 = -1;
static volatile uint64_t x692 = 43496416763LLU;
volatile uint64_t x702 = 965526263726LLU;
static volatile int8_t x704 = -45;
int8_t x713 = 1;
int32_t x751 = -1;
static int8_t x756 = INT8_MIN;
uint64_t t90 = 4027942089944LLU;
uint16_t x769 = 95U;
uint64_t x770 = UINT64_MAX;
int16_t x774 = -1145;
uint8_t x776 = 1U;
static int64_t x784 = -1LL;
int16_t x808 = 0;
volatile int64_t x813 = -16381LL;
int32_t x816 = INT32_MAX;
int64_t t96 = 417772336664042LL;
static int32_t x848 = 95701;
int8_t x855 = INT8_MIN;
static int64_t x856 = -411246136997515LL;
static volatile int16_t x860 = -75;
static volatile int64_t t99 = 8375687524857LL;
volatile int16_t x865 = INT16_MAX;
int16_t x875 = INT16_MIN;
int16_t x876 = INT16_MIN;
volatile int32_t t102 = 0;
volatile int32_t x877 = -1;
volatile uint64_t t103 = 5945840916860744LLU;
int64_t x894 = -1955788914631051LL;
int16_t x896 = INT16_MAX;
volatile uint32_t t105 = 6U;
int32_t x901 = 3;
uint32_t x905 = UINT32_MAX;
int16_t x921 = INT16_MIN;
volatile int8_t x960 = INT8_MIN;
volatile int64_t t111 = -22577737059521624LL;
volatile uint64_t x993 = 17215817LLU;
volatile int32_t x994 = INT32_MIN;
uint8_t x995 = 54U;
int32_t x1002 = -1;
uint32_t x1003 = UINT32_MAX;
int8_t x1015 = INT8_MIN;
int32_t x1016 = INT32_MIN;
uint64_t x1020 = UINT64_MAX;
static uint32_t t120 = 508447386U;
volatile int64_t x1039 = -1LL;
uint16_t x1062 = UINT16_MAX;
volatile int64_t t125 = 386936LL;
uint64_t t126 = 1LLU;
static volatile int64_t t127 = -75067255229699LL;
int64_t x1090 = INT64_MIN;
int16_t x1111 = -5;
uint8_t x1112 = 15U;
static int8_t x1147 = INT8_MAX;
int64_t t135 = -1610900LL;
int8_t x1149 = INT8_MIN;
static int8_t x1152 = INT8_MIN;
volatile int64_t t137 = -109975LL;
int16_t x1161 = -1;
uint64_t t138 = 990LLU;
int64_t x1177 = -1LL;
static uint8_t x1180 = 1U;
static int16_t x1202 = -171;
uint8_t x1204 = 51U;
static int8_t x1210 = 8;
volatile int64_t t144 = 407LL;
int16_t x1216 = 7;
uint64_t x1223 = 173796702271650LLU;
int16_t x1241 = INT16_MIN;
uint8_t x1244 = UINT8_MAX;
volatile uint32_t t147 = 69680U;
static int64_t x1249 = 1247657115876477LL;
volatile int16_t x1258 = INT16_MIN;
volatile int32_t x1260 = INT32_MIN;
uint32_t x1263 = 296479U;
int64_t x1264 = INT64_MAX;
int8_t x1268 = -1;
int64_t x1270 = -1LL;
uint16_t x1271 = 1U;
uint32_t x1272 = 210551U;
int16_t x1275 = INT16_MIN;
volatile int64_t x1310 = INT64_MAX;
volatile int64_t x1312 = -1LL;
uint64_t x1314 = UINT64_MAX;
static uint8_t x1317 = 77U;
volatile int32_t x1319 = INT32_MAX;
uint64_t t159 = 2579LLU;
uint32_t x1329 = UINT32_MAX;
static int16_t x1331 = INT16_MAX;
static int8_t x1332 = INT8_MIN;
uint64_t t160 = 101934420824LLU;
int64_t x1341 = INT64_MIN;
volatile int32_t t163 = 243308909;
volatile uint8_t x1359 = 3U;
volatile uint64_t t165 = 472066790810LLU;
volatile uint8_t x1382 = 22U;
volatile int32_t x1393 = -1;
uint8_t x1397 = 73U;
uint8_t x1399 = UINT8_MAX;
volatile uint64_t t168 = 7514797986982752499LLU;
int16_t x1406 = -1;
volatile int8_t x1420 = INT8_MIN;
uint32_t x1427 = UINT32_MAX;
volatile int32_t x1428 = 9116;
int8_t x1437 = -1;
static int32_t x1447 = -1;
volatile uint32_t t177 = 58U;
volatile int64_t x1479 = -1LL;
uint8_t x1490 = 54U;
int64_t x1493 = -1LL;
int32_t x1496 = INT32_MIN;
int32_t x1526 = -699026672;
int32_t x1530 = -1;
static uint8_t x1532 = 77U;
int16_t x1534 = INT16_MIN;
int16_t x1539 = -1456;
volatile int16_t x1540 = -196;
uint8_t x1545 = 0U;
volatile uint16_t x1557 = UINT16_MAX;
uint32_t x1558 = 13445U;
uint8_t x1636 = 1U;
uint32_t x1641 = 804U;
uint64_t x1660 = 762114LLU;
static uint16_t x1664 = UINT16_MAX;
static int64_t x1675 = -1LL;
int64_t t198 = 0LL;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int64_t x2 = INT64_MAX;
	int32_t x4 = INT32_MIN;
	volatile int64_t t0 = 52LL;

    t0 = ((x1/(x2/x3))-x4);

    if (t0 != 2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x9 = UINT8_MAX;
	int32_t x10 = INT32_MIN;
	volatile int32_t t1 = -68387;

    t1 = ((x9/(x10/x11))-x12);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x21 = INT32_MIN;
	uint32_t x22 = UINT32_MAX;
	static int16_t x23 = INT16_MIN;

    t2 = ((x21/(x22/x23))-x24);

    if (t2 != 2147470508U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x25 = INT16_MIN;
	int64_t x26 = INT64_MIN;
	uint64_t x27 = 3728967305LLU;
	volatile int32_t x28 = -153;

    t3 = ((x25/(x26/x27))-x28);

    if (t3 != 7457934763LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x57 = INT64_MIN;
	static uint8_t x59 = 1U;
	volatile int16_t x60 = -3;
	volatile int64_t t4 = 41242074364LL;

    t4 = ((x57/(x58/x59))-x60);

    if (t4 != 4294967299LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x65 = INT8_MIN;
	volatile int32_t x66 = INT32_MAX;
	static uint32_t x68 = UINT32_MAX;
	static volatile uint32_t t5 = 186U;

    t5 = ((x65/(x66/x67))-x68);

    if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x69 = INT8_MAX;
	volatile int16_t x70 = 2069;
	volatile int16_t x71 = -21;
	static uint32_t x72 = 4049010U;
	uint32_t t6 = 296U;

    t6 = ((x69/(x70/x71))-x72);

    if (t6 != 4290918285U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x74 = -1724;
	volatile int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MIN;
	volatile int32_t t7 = -842;

    t7 = ((x73/(x74/x75))-x76);

    if (t7 != 32764) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x77 = INT64_MAX;
	int64_t x78 = -467LL;
	uint16_t x79 = 50U;
	static int32_t x80 = INT32_MAX;

    t8 = ((x77/(x78/x79))-x80);

    if (t8 != -1024819117353569847LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x89 = -1;
	volatile uint8_t x90 = 55U;
	uint32_t x91 = 13U;

    t9 = ((x89/(x90/x91))-x92);

    if (t9 != 1073774591U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x105 = INT16_MAX;
	static int32_t x106 = -1;
	int16_t x107 = -1;
	volatile int32_t t10 = -23;

    t10 = ((x105/(x106/x107))-x108);

    if (t10 != 32895) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x109 = 68365U;
	int32_t x110 = INT32_MAX;
	int32_t x111 = -1;
	static int16_t x112 = -81;

    t11 = ((x109/(x110/x111))-x112);

    if (t11 != 81U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x117 = 3U;
	int32_t x118 = -213984698;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t12 = 8685637;

    t12 = ((x117/(x118/x119))-x120);

    if (t12 != -255) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint16_t x129 = 3U;
	int16_t x131 = 1;
	int16_t x132 = INT16_MIN;

    t13 = ((x129/(x130/x131))-x132);

    if (t13 != 32768) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x138 = -1;
	int16_t x139 = -1;
	volatile int32_t x140 = -49391;
	static volatile int32_t t14 = 346;

    t14 = ((x137/(x138/x139))-x140);

    if (t14 != 114926) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x157 = -384;
	int8_t x158 = INT8_MIN;
	int8_t x159 = INT8_MIN;
	uint8_t x160 = 0U;
	volatile int32_t t15 = 685;

    t15 = ((x157/(x158/x159))-x160);

    if (t15 != -384) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x165 = 67U;
	static int32_t x166 = -30485765;
	int32_t x167 = -16786160;
	uint16_t x168 = 12699U;
	volatile int32_t t16 = -1200;

    t16 = ((x165/(x166/x167))-x168);

    if (t16 != -12632) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x185 = INT8_MIN;
	static uint32_t x186 = UINT32_MAX;
	static volatile int16_t x188 = INT16_MAX;
	volatile uint32_t t17 = 46934U;

    t17 = ((x185/(x186/x187))-x188);

    if (t17 != 113574U) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x202 = -7;
	int32_t x203 = 1;
	int16_t x204 = INT16_MIN;

    t18 = ((x201/(x202/x203))-x204);

    if (t18 != 32769) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x209 = INT8_MIN;
	static uint32_t x210 = UINT32_MAX;
	uint16_t x211 = 1321U;
	volatile int8_t x212 = -13;
	static uint32_t t19 = 1494U;

    t19 = ((x209/(x210/x211))-x212);

    if (t19 != 1334U) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint8_t x213 = UINT8_MAX;
	uint64_t x215 = 1330386805916LLU;
	int16_t x216 = INT16_MIN;
	uint64_t t20 = 296168461403744703LLU;

    t20 = ((x213/(x214/x215))-x216);

    if (t20 != 32768LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x217 = 10;
	volatile uint16_t x218 = UINT16_MAX;
	static int16_t x219 = 160;
	int16_t x220 = -1;
	volatile int32_t t21 = 3;

    t21 = ((x217/(x218/x219))-x220);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x221 = 6010954694910LLU;
	int16_t x223 = -15;
	static int8_t x224 = 1;
	volatile uint64_t t22 = 5694702LLU;

    t22 = ((x221/(x222/x223))-x224);

    if (t22 != 751369336862LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x225 = INT64_MAX;
	volatile uint16_t x226 = 22U;
	int64_t x227 = -1LL;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t23 = 1LLU;

    t23 = ((x225/(x226/x227))-x228);

    if (t23 != 18027499890216152717LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x230 = -860;
	uint8_t x232 = UINT8_MAX;

    t24 = ((x229/(x230/x231))-x232);

    if (t24 != 5945LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x233 = INT8_MIN;
	static volatile int64_t x234 = INT64_MIN;
	volatile int32_t x235 = INT32_MIN;
	int16_t x236 = -1;
	int64_t t25 = 7LL;

    t25 = ((x233/(x234/x235))-x236);

    if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x237 = INT16_MIN;
	volatile int8_t x238 = INT8_MIN;
	int8_t x239 = -27;
	static uint8_t x240 = 5U;
	volatile int32_t t26 = 2622;

    t26 = ((x237/(x238/x239))-x240);

    if (t26 != -8197) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x245 = INT8_MIN;
	int8_t x246 = INT8_MIN;
	uint8_t x247 = 3U;
	uint16_t x248 = 112U;
	volatile int32_t t27 = 28315;

    t27 = ((x245/(x246/x247))-x248);

    if (t27 != -109) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x257 = INT8_MIN;
	int8_t x258 = -14;
	static int8_t x259 = -1;
	int64_t x260 = -441621769992LL;
	volatile int64_t t28 = 157LL;

    t28 = ((x257/(x258/x259))-x260);

    if (t28 != 441621769983LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x261 = -37;
	uint64_t x262 = UINT64_MAX;
	int16_t x263 = 3353;
	int16_t x264 = INT16_MAX;

    t29 = ((x261/(x262/x263))-x264);

    if (t29 != 18446744073709522202LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x265 = -1;
	int16_t x266 = 1;
	int32_t x267 = -1;
	uint64_t t30 = 3081678013162588LLU;

    t30 = ((x265/(x266/x267))-x268);

    if (t30 != 18446744072358844366LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x269 = -1LL;
	int64_t x270 = -541329844LL;

    t31 = ((x269/(x270/x271))-x272);

    if (t31 != -13LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x277 = INT8_MAX;
	static volatile uint32_t x278 = UINT32_MAX;
	int8_t x280 = INT8_MIN;
	uint32_t t32 = 909U;

    t32 = ((x277/(x278/x279))-x280);

    if (t32 != 255U) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x285 = UINT8_MAX;
	volatile int8_t x286 = -1;
	static uint64_t x287 = 62142954985608LLU;
	static int32_t x288 = INT32_MIN;
	volatile uint64_t t33 = 739548897079419LLU;

    t33 = ((x285/(x286/x287))-x288);

    if (t33 != 2147483648LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x297 = INT64_MIN;
	int32_t x298 = INT32_MIN;
	static int32_t x299 = -65;
	uint64_t x300 = UINT64_MAX;

    t34 = ((x297/(x298/x299))-x300);

    if (t34 != 18446743794536669187LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x309 = -184;
	int16_t x310 = INT16_MIN;
	volatile int32_t x311 = -483;
	int32_t x312 = INT32_MIN;
	int32_t t35 = 1420809;

    t35 = ((x309/(x310/x311))-x312);

    if (t35 != 2147483646) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x313 = UINT32_MAX;
	int32_t x314 = INT32_MIN;
	uint32_t x316 = UINT32_MAX;
	volatile uint32_t t36 = 2U;

    t36 = ((x313/(x314/x315))-x316);

    if (t36 != 65536U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x329 = 494LLU;
	int32_t x330 = 1017;
	uint16_t x331 = 2U;
	volatile uint64_t t37 = 77031LLU;

    t37 = ((x329/(x330/x331))-x332);

    if (t37 != 18446744073159209378LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x337 = -1;
	uint64_t x338 = 1436048LLU;
	uint16_t x339 = 22U;
	uint16_t x340 = UINT16_MAX;
	uint64_t t38 = 160LLU;

    t38 = ((x337/(x338/x339))-x340);

    if (t38 != 282604774786772LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x345 = INT16_MIN;
	int64_t x346 = -50949099LL;
	volatile int8_t x347 = 39;
	static volatile uint8_t x348 = 0U;

    t39 = ((x345/(x346/x347))-x348);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x349 = -1;
	volatile int32_t x350 = 30296751;
	static int8_t x352 = -1;
	int32_t t40 = 8;

    t40 = ((x349/(x350/x351))-x352);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x370 = -1;
	int32_t t41 = 10869;

    t41 = ((x369/(x370/x371))-x372);

    if (t41 != 109) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x377 = INT16_MAX;
	int8_t x379 = INT8_MIN;
	int64_t x380 = INT64_MAX;
	int64_t t42 = 1114596024359771812LL;

    t42 = ((x377/(x378/x379))-x380);

    if (t42 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x385 = -12;
	int64_t x386 = -115935LL;
	uint8_t x387 = UINT8_MAX;
	int64_t x388 = 70LL;
	volatile int64_t t43 = 15891414390LL;

    t43 = ((x385/(x386/x387))-x388);

    if (t43 != -70LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x389 = 192LL;
	int64_t x390 = INT64_MIN;
	static uint16_t x391 = UINT16_MAX;
	volatile uint64_t x392 = 69061700586779859LLU;
	uint64_t t44 = 648048812008123LLU;

    t44 = ((x389/(x390/x391))-x392);

    if (t44 != 18377682373122771757LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x405 = INT32_MIN;
	int16_t x406 = INT16_MIN;
	volatile int8_t x407 = 1;
	int64_t t45 = 107LL;

    t45 = ((x405/(x406/x407))-x408);

    if (t45 != -9223372036854710271LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x414 = INT64_MIN;
	volatile uint32_t x416 = 20875045U;
	volatile int64_t t46 = -1758169777112545356LL;

    t46 = ((x413/(x414/x415))-x416);

    if (t46 != -20875045LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x425 = -1442936660198LL;
	uint16_t x427 = 2U;
	int64_t x428 = -1LL;
	volatile int64_t t47 = 2485801837191449171LL;

    t47 = ((x425/(x426/x427))-x428);

    if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x433 = INT16_MAX;
	int64_t x434 = 15899735833LL;
	static int32_t x435 = -1;
	int32_t x436 = -44;
	static int64_t t48 = -3119748885820LL;

    t48 = ((x433/(x434/x435))-x436);

    if (t48 != 44LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x437 = -1472;
	uint16_t x438 = UINT16_MAX;
	uint16_t x439 = 2U;
	int16_t x440 = INT16_MIN;
	int32_t t49 = 61390445;

    t49 = ((x437/(x438/x439))-x440);

    if (t49 != 32768) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x441 = INT8_MAX;
	static int64_t x442 = INT64_MAX;
	uint64_t x444 = 17614LLU;
	static volatile uint64_t t50 = 821435687LLU;

    t50 = ((x441/(x442/x443))-x444);

    if (t50 != 18446744073709534002LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x445 = 24079;
	uint32_t x446 = UINT32_MAX;
	volatile int16_t x447 = -494;
	int64_t x448 = INT64_MAX;
	int64_t t51 = 21207638LL;

    t51 = ((x445/(x446/x447))-x448);

    if (t51 != -9223372036854751728LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x457 = INT8_MAX;
	uint16_t x458 = UINT16_MAX;
	volatile uint16_t x459 = 8866U;
	int32_t t52 = -83918;

    t52 = ((x457/(x458/x459))-x460);

    if (t52 != 146) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x481 = INT8_MAX;
	static int64_t x482 = INT64_MIN;
	int8_t x483 = INT8_MIN;
	uint64_t x484 = 1708LLU;
	uint64_t t53 = 13179119452097LLU;

    t53 = ((x481/(x482/x483))-x484);

    if (t53 != 18446744073709549908LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x497 = 9;
	uint64_t x498 = 62624528812797LLU;
	int16_t x500 = 115;
	static uint64_t t54 = 26227LLU;

    t54 = ((x497/(x498/x499))-x500);

    if (t54 != 18446744073709551501LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x501 = -5;
	volatile int64_t x503 = -1LL;
	volatile int8_t x504 = INT8_MIN;
	int64_t t55 = 1494LL;

    t55 = ((x501/(x502/x503))-x504);

    if (t55 != 123LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x509 = 1643280U;
	volatile int8_t x510 = INT8_MIN;
	uint32_t x511 = 58447681U;
	int16_t x512 = INT16_MAX;
	uint32_t t56 = 2U;

    t56 = ((x509/(x510/x511))-x512);

    if (t56 != 4294957039U) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x525 = INT64_MAX;
	int64_t x526 = 13104084065LL;
	uint8_t x527 = 92U;
	static int16_t x528 = -1;

    t57 = ((x525/(x526/x527))-x528);

    if (t57 != 64754638731LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x529 = -968103LL;
	static uint64_t x530 = UINT64_MAX;
	volatile int32_t x531 = INT32_MIN;

    t58 = ((x529/(x530/x531))-x532);

    if (t58 != 18446744073708583514LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x533 = 1U;
	static int32_t x534 = -90237;
	int16_t x535 = -113;
	static int16_t x536 = INT16_MIN;

    t59 = ((x533/(x534/x535))-x536);

    if (t59 != 32768) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x537 = UINT64_MAX;
	int8_t x540 = INT8_MIN;

    t60 = ((x537/(x538/x539))-x540);

    if (t60 != 1317624576693539529LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x543 = 146;
	uint8_t x544 = 36U;
	int64_t t61 = 217153842LL;

    t61 = ((x541/(x542/x543))-x544);

    if (t61 != -614891469123651756LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x545 = INT8_MIN;
	int8_t x546 = -1;
	volatile int8_t x548 = -1;
	uint32_t t62 = 0U;

    t62 = ((x545/(x546/x547))-x548);

    if (t62 != 477218575U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x550 = UINT64_MAX;
	int8_t x551 = INT8_MAX;
	static int16_t x552 = -1;
	uint64_t t63 = 31794433994911LLU;

    t63 = ((x549/(x550/x551))-x552);

    if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x553 = INT64_MIN;
	int64_t x555 = INT64_MIN;
	int16_t x556 = INT16_MIN;
	volatile int64_t t64 = 355975106552901329LL;

    t64 = ((x553/(x554/x555))-x556);

    if (t64 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x559 = INT8_MAX;
	uint32_t x560 = 25220567U;
	uint32_t t65 = 2U;

    t65 = ((x557/(x558/x559))-x560);

    if (t65 != 4270349228U) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x570 = -3097;
	uint32_t x571 = 41U;
	int64_t x572 = -1LL;
	static volatile uint64_t t66 = 45375005182604618LLU;

    t66 = ((x569/(x570/x571))-x572);

    if (t66 != 176093786729LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x574 = INT16_MAX;
	volatile int32_t x575 = -1;
	volatile uint64_t x576 = 204386820LLU;
	volatile uint64_t t67 = 176449484LLU;

    t67 = ((x573/(x574/x575))-x576);

    if (t67 != 18446744071629111389LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x581 = INT8_MIN;
	static uint32_t x583 = 875U;
	volatile uint32_t t68 = 253632278U;

    t68 = ((x581/(x582/x583))-x584);

    if (t68 != 4294902635U) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x594 = INT64_MAX;
	volatile int64_t t69 = -1840864445113263LL;

    t69 = ((x593/(x594/x595))-x596);

    if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x605 = INT32_MAX;
	uint32_t x607 = 6U;
	static uint16_t x608 = UINT16_MAX;

    t70 = ((x605/(x606/x607))-x608);

    if (t70 != 4294901767U) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x609 = -571898433;
	int64_t x610 = -399956952605254472LL;
	int8_t x612 = -1;
	volatile int64_t t71 = 3627446853962734LL;

    t71 = ((x609/(x610/x611))-x612);

    if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x613 = -127;
	int64_t x614 = INT64_MIN;
	static uint8_t x616 = UINT8_MAX;
	static int64_t t72 = -14887589793109323LL;

    t72 = ((x613/(x614/x615))-x616);

    if (t72 != -382LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x629 = -5254855;
	volatile int16_t x631 = INT16_MAX;
	int8_t x632 = 0;
	static uint64_t t73 = 36363855304LLU;

    t73 = ((x629/(x630/x631))-x632);

    if (t73 != 32766LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x641 = 754718372280328LLU;
	uint32_t x642 = UINT32_MAX;
	volatile int8_t x643 = INT8_MAX;
	int64_t x644 = INT64_MIN;

    t74 = ((x641/(x642/x643))-x644);

    if (t74 != 9223372036877092446LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x645 = -22665936LL;
	int32_t x646 = INT32_MAX;
	uint8_t x647 = 52U;
	int64_t t75 = 1478183466172796957LL;

    t75 = ((x645/(x646/x647))-x648);

    if (t75 != -690LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x649 = -1;
	uint8_t x651 = 19U;
	uint32_t x652 = 3648934U;
	volatile uint32_t t76 = 193171529U;

    t76 = ((x649/(x650/x651))-x652);

    if (t76 != 4291318572U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x653 = INT8_MIN;
	static int16_t x654 = INT16_MIN;
	uint8_t x655 = 42U;
	volatile int16_t x656 = -7345;

    t77 = ((x653/(x654/x655))-x656);

    if (t77 != 7345) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x657 = -1LL;
	int32_t x658 = -17650610;
	static int32_t x659 = -1;
	int8_t x660 = INT8_MAX;
	int64_t t78 = 1710314707882464853LL;

    t78 = ((x657/(x658/x659))-x660);

    if (t78 != -127LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x661 = -12264108249208997LL;
	volatile int64_t x662 = INT64_MIN;
	uint64_t t79 = 519711LLU;

    t79 = ((x661/(x662/x663))-x664);

    if (t79 != 9929LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x665 = -1;
	static int8_t x667 = -13;
	int16_t x668 = INT16_MAX;
	volatile uint32_t t80 = 136752U;

    t80 = ((x665/(x666/x667))-x668);

    if (t80 != 4294934528U) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x669 = 386350U;
	uint64_t x671 = UINT64_MAX;
	uint64_t x672 = UINT64_MAX;
	static volatile uint64_t t81 = 32047083753280LLU;

    t81 = ((x669/(x670/x671))-x672);

    if (t81 != 386351LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x685 = UINT16_MAX;
	static volatile uint16_t x686 = 214U;
	uint32_t x687 = 53U;
	int8_t x688 = INT8_MIN;
	uint32_t t82 = 349548481U;

    t82 = ((x685/(x686/x687))-x688);

    if (t82 != 16511U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x689 = INT32_MIN;
	int64_t x690 = INT64_MIN;
	int16_t x691 = -3397;
	volatile uint64_t t83 = 278LLU;

    t83 = ((x689/(x690/x691))-x692);

    if (t83 != 18446744030213134853LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x697 = INT32_MIN;
	int16_t x698 = INT16_MIN;
	volatile int8_t x699 = -1;
	int16_t x700 = INT16_MAX;
	volatile int32_t t84 = -26;

    t84 = ((x697/(x698/x699))-x700);

    if (t84 != -98303) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x701 = -1;
	volatile uint16_t x703 = UINT16_MAX;
	volatile uint64_t t85 = 53044311142LLU;

    t85 = ((x701/(x702/x703))-x704);

    if (t85 != 1252070970159LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x714 = -1;
	int16_t x715 = -1;
	int8_t x716 = INT8_MIN;
	volatile int32_t t86 = 102911388;

    t86 = ((x713/(x714/x715))-x716);

    if (t86 != 129) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x737 = INT32_MAX;
	int8_t x738 = INT8_MIN;
	uint32_t x739 = 1U;
	volatile int32_t x740 = 14413;
	static uint32_t t87 = 0U;

    t87 = ((x737/(x738/x739))-x740);

    if (t87 != 4294952883U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x749 = UINT8_MAX;
	static int64_t x750 = -1LL;
	int64_t x752 = -1LL;
	volatile int64_t t88 = 8747770465907377LL;

    t88 = ((x749/(x750/x751))-x752);

    if (t88 != 256LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x753 = -19804251265566LL;
	static int32_t x754 = -61;
	volatile int8_t x755 = -1;
	volatile int64_t t89 = -37826627LL;

    t89 = ((x753/(x754/x755))-x756);

    if (t89 != -324659856684LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x761 = -1LL;
	volatile int64_t x762 = -89233LL;
	static uint8_t x763 = UINT8_MAX;
	uint64_t x764 = UINT64_MAX;

    t90 = ((x761/(x762/x763))-x764);

    if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x771 = -1;
	int8_t x772 = INT8_MIN;
	static volatile uint64_t t91 = 8069571LLU;

    t91 = ((x769/(x770/x771))-x772);

    if (t91 != 223LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x773 = -1LL;
	static int64_t x775 = -1LL;
	static int64_t t92 = 5985145LL;

    t92 = ((x773/(x774/x775))-x776);

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x781 = INT32_MIN;
	int32_t x782 = INT32_MAX;
	uint32_t x783 = 8866036U;
	volatile int64_t t93 = 197LL;

    t93 = ((x781/(x782/x783))-x784);

    if (t93 != 8873900LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x785 = UINT32_MAX;
	static volatile int64_t x786 = 956429058643784LL;
	int64_t x787 = 11565795LL;
	uint8_t x788 = 6U;
	int64_t t94 = -144458LL;

    t94 = ((x785/(x786/x787))-x788);

    if (t94 != 45LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x805 = UINT64_MAX;
	uint32_t x806 = UINT32_MAX;
	uint16_t x807 = 15U;
	uint64_t t95 = 237360LLU;

    t95 = ((x805/(x806/x807))-x808);

    if (t95 != 64424509455LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x814 = INT8_MAX;
	uint8_t x815 = 27U;

    t96 = ((x813/(x814/x815))-x816);

    if (t96 != -2147487742LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x845 = INT32_MIN;
	volatile uint8_t x846 = UINT8_MAX;
	static int16_t x847 = -2;
	int32_t t97 = -7;

    t97 = ((x845/(x846/x847))-x848);

    if (t97 != 16813619) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x853 = INT16_MIN;
	volatile int16_t x854 = INT16_MIN;
	static int64_t t98 = -15172LL;

    t98 = ((x853/(x854/x855))-x856);

    if (t98 != 411246136997387LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x857 = INT8_MIN;
	int64_t x858 = -1LL;
	int32_t x859 = -1;

    t99 = ((x857/(x858/x859))-x860);

    if (t99 != -53LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x861 = 6768940;
	static volatile int32_t x862 = INT32_MAX;
	volatile uint8_t x863 = UINT8_MAX;
	volatile int16_t x864 = -1;
	volatile int32_t t100 = 50594058;

    t100 = ((x861/(x862/x863))-x864);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x866 = UINT64_MAX;
	volatile int64_t x867 = INT64_MIN;
	int8_t x868 = INT8_MIN;
	uint64_t t101 = 153954722LLU;

    t101 = ((x865/(x866/x867))-x868);

    if (t101 != 32895LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x873 = 1;
	int16_t x874 = INT16_MIN;

    t102 = ((x873/(x874/x875))-x876);

    if (t102 != 32769) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x878 = INT32_MAX;
	int16_t x879 = -1254;
	volatile uint64_t x880 = 449231LLU;

    t103 = ((x877/(x878/x879))-x880);

    if (t103 != 18446744073709102385LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x893 = -1;
	uint16_t x895 = 354U;
	int64_t t104 = -673146529164736471LL;

    t104 = ((x893/(x894/x895))-x896);

    if (t104 != -32767LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x897 = UINT8_MAX;
	uint32_t x898 = 1042265780U;
	uint16_t x899 = UINT16_MAX;
	int16_t x900 = INT16_MAX;

    t105 = ((x897/(x898/x899))-x900);

    if (t105 != 4294934529U) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x902 = -3106084;
	volatile int8_t x903 = INT8_MAX;
	int32_t x904 = INT32_MAX;
	static volatile int32_t t106 = 447663681;

    t106 = ((x901/(x902/x903))-x904);

    if (t106 != -2147483647) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x906 = 2799138U;
	uint16_t x907 = 11U;
	volatile int64_t x908 = 88LL;
	int64_t t107 = -205LL;

    t107 = ((x905/(x906/x907))-x908);

    if (t107 != 16790LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x922 = -1295895;
	static uint32_t x923 = 37U;
	volatile int32_t x924 = INT32_MIN;
	volatile uint32_t t108 = 766145635U;

    t108 = ((x921/(x922/x923))-x924);

    if (t108 != 2147483685U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x925 = 4101849241140729LLU;
	uint64_t x926 = 119969376533LLU;
	int8_t x927 = INT8_MAX;
	int64_t x928 = INT64_MIN;
	volatile uint64_t t109 = 2221705179LLU;

    t109 = ((x925/(x926/x927))-x928);

    if (t109 != 9223372036859118039LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x937 = INT32_MIN;
	volatile int8_t x938 = INT8_MIN;
	uint16_t x939 = 7U;
	int16_t x940 = 1;
	int32_t t110 = 111;

    t110 = ((x937/(x938/x939))-x940);

    if (t110 != 119304646) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x957 = INT32_MAX;
	int64_t x958 = INT64_MIN;
	volatile uint32_t x959 = 500251021U;

    t111 = ((x957/(x958/x959))-x960);

    if (t111 != 128LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x969 = 70995203315864358LLU;
	int32_t x970 = -75459;
	volatile int64_t x971 = 34201LL;
	int16_t x972 = INT16_MAX;
	uint64_t t112 = 6721816LLU;

    t112 = ((x969/(x970/x971))-x972);

    if (t112 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x989 = 50U;
	static int8_t x990 = INT8_MIN;
	int8_t x991 = -9;
	int16_t x992 = INT16_MIN;
	int32_t t113 = -654171694;

    t113 = ((x989/(x990/x991))-x992);

    if (t113 != 32771) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x996 = 6501;
	static uint64_t t114 = 125955987LLU;

    t114 = ((x993/(x994/x995))-x996);

    if (t114 != 18446744073709545115LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x997 = INT32_MIN;
	uint8_t x998 = 1U;
	int64_t x999 = -1LL;
	uint8_t x1000 = UINT8_MAX;
	int64_t t115 = -1737747688232108637LL;

    t115 = ((x997/(x998/x999))-x1000);

    if (t115 != 2147483393LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x1001 = 253470779LLU;
	int16_t x1004 = INT16_MIN;
	uint64_t t116 = 11145625675LLU;

    t116 = ((x1001/(x1002/x1003))-x1004);

    if (t116 != 253503547LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x1005 = 893137360;
	static int64_t x1006 = -44475541LL;
	static volatile int8_t x1007 = INT8_MAX;
	static int64_t x1008 = INT64_MIN;
	static int64_t t117 = -52759531993LL;

    t117 = ((x1005/(x1006/x1007))-x1008);

    if (t117 != 9223372036854773258LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x1013 = INT8_MIN;
	volatile int64_t x1014 = INT64_MIN;
	int64_t t118 = 120321935990LL;

    t118 = ((x1013/(x1014/x1015))-x1016);

    if (t118 != 2147483648LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x1017 = 5510U;
	static int64_t x1018 = 70860218864602LL;
	int32_t x1019 = -1;
	volatile uint64_t t119 = 2760202630089136435LLU;

    t119 = ((x1017/(x1018/x1019))-x1020);

    if (t119 != 1LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x1025 = UINT16_MAX;
	uint32_t x1026 = UINT32_MAX;
	static uint32_t x1027 = 164401U;
	int8_t x1028 = INT8_MIN;

    t120 = ((x1025/(x1026/x1027))-x1028);

    if (t120 != 130U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x1037 = 1431U;
	int32_t x1038 = INT32_MIN;
	int32_t x1040 = INT32_MAX;
	int64_t t121 = 7574703152686142LL;

    t121 = ((x1037/(x1038/x1039))-x1040);

    if (t121 != -2147483647LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x1045 = -1;
	int16_t x1046 = INT16_MIN;
	static int8_t x1047 = INT8_MAX;
	int32_t x1048 = -2343;
	static int32_t t122 = 350209430;

    t122 = ((x1045/(x1046/x1047))-x1048);

    if (t122 != 2343) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint8_t x1053 = 51U;
	int64_t x1054 = INT64_MAX;
	int8_t x1055 = INT8_MIN;
	static int8_t x1056 = INT8_MIN;
	volatile int64_t t123 = 4551543380741LL;

    t123 = ((x1053/(x1054/x1055))-x1056);

    if (t123 != 128LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x1057 = UINT16_MAX;
	uint32_t x1058 = 1128U;
	volatile uint16_t x1059 = 23U;
	static uint64_t x1060 = 1946LLU;
	static volatile uint64_t t124 = 1769618LLU;

    t124 = ((x1057/(x1058/x1059))-x1060);

    if (t124 != 18446744073709551007LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x1061 = INT16_MIN;
	int8_t x1063 = INT8_MAX;
	volatile int64_t x1064 = -1LL;

    t125 = ((x1061/(x1062/x1063))-x1064);

    if (t125 != -62LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x1065 = 47;
	int32_t x1066 = -1;
	uint32_t x1067 = 1395879U;
	uint64_t x1068 = 11LLU;

    t126 = ((x1065/(x1066/x1067))-x1068);

    if (t126 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x1069 = -1;
	int64_t x1070 = INT64_MAX;
	int16_t x1071 = -882;
	int32_t x1072 = -822053542;

    t127 = ((x1069/(x1070/x1071))-x1072);

    if (t127 != 822053542LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x1073 = -10279;
	static int32_t x1074 = -2753018;
	static int16_t x1075 = INT16_MIN;
	uint8_t x1076 = 0U;
	int32_t t128 = -125926;

    t128 = ((x1073/(x1074/x1075))-x1076);

    if (t128 != -122) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x1077 = INT32_MIN;
	int32_t x1078 = 29582185;
	int8_t x1079 = -1;
	int16_t x1080 = -1;
	volatile int32_t t129 = -81595332;

    t129 = ((x1077/(x1078/x1079))-x1080);

    if (t129 != 73) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x1089 = 3434960LL;
	volatile int64_t x1091 = 464123LL;
	int32_t x1092 = -1;
	int64_t t130 = 44461839861417LL;

    t130 = ((x1089/(x1090/x1091))-x1092);

    if (t130 != 1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x1093 = -190;
	int64_t x1094 = -1LL;
	int16_t x1095 = -1;
	static volatile int16_t x1096 = -1;
	static int64_t t131 = 1225320807012581092LL;

    t131 = ((x1093/(x1094/x1095))-x1096);

    if (t131 != -189LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x1109 = -5;
	volatile int64_t x1110 = -479952240895194738LL;
	static volatile int64_t t132 = 8116LL;

    t132 = ((x1109/(x1110/x1111))-x1112);

    if (t132 != -15LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x1121 = 64U;
	int8_t x1122 = INT8_MIN;
	int32_t x1123 = 41;
	int32_t x1124 = INT32_MIN;
	volatile int32_t t133 = 56;

    t133 = ((x1121/(x1122/x1123))-x1124);

    if (t133 != 2147483627) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x1125 = INT32_MAX;
	int32_t x1126 = -1;
	uint64_t x1127 = UINT64_MAX;
	int32_t x1128 = INT32_MIN;
	uint64_t t134 = 1036112981833LLU;

    t134 = ((x1125/(x1126/x1127))-x1128);

    if (t134 != 4294967295LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x1145 = -1LL;
	int32_t x1146 = 379;
	int32_t x1148 = 33321435;

    t135 = ((x1145/(x1146/x1147))-x1148);

    if (t135 != -33321435LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x1150 = INT64_MIN;
	static int32_t x1151 = INT32_MIN;
	int64_t t136 = 8806976786011LL;

    t136 = ((x1149/(x1150/x1151))-x1152);

    if (t136 != 128LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x1157 = 1;
	int64_t x1158 = INT64_MIN;
	int8_t x1159 = -18;
	int8_t x1160 = -1;

    t137 = ((x1157/(x1158/x1159))-x1160);

    if (t137 != 1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x1162 = UINT64_MAX;
	int8_t x1163 = INT8_MIN;
	int16_t x1164 = -6334;

    t138 = ((x1161/(x1162/x1163))-x1164);

    if (t138 != 6333LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x1169 = INT8_MIN;
	static int16_t x1170 = -1;
	uint64_t x1171 = 483883583965LLU;
	uint64_t x1172 = UINT64_MAX;
	volatile uint64_t t139 = 638LLU;

    t139 = ((x1169/(x1170/x1171))-x1172);

    if (t139 != 483883585278LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x1178 = -1;
	volatile uint64_t x1179 = 8085756837LLU;
	uint64_t t140 = 28664158070811LLU;

    t140 = ((x1177/(x1178/x1179))-x1180);

    if (t140 != 8085756839LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x1185 = -8044;
	uint32_t x1186 = UINT32_MAX;
	uint16_t x1187 = 3U;
	int32_t x1188 = INT32_MAX;
	volatile uint32_t t141 = 1960U;

    t141 = ((x1185/(x1186/x1187))-x1188);

    if (t141 != 2147483651U) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x1189 = INT32_MIN;
	static int32_t x1190 = INT32_MAX;
	volatile int32_t x1191 = 713;
	volatile uint32_t x1192 = 1620U;
	volatile uint32_t t142 = 461U;

    t142 = ((x1189/(x1190/x1191))-x1192);

    if (t142 != 4294964963U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x1201 = 222296U;
	uint32_t x1203 = 85273U;
	volatile uint32_t t143 = 1712510680U;

    t143 = ((x1201/(x1202/x1203))-x1204);

    if (t143 != 4294967249U) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x1209 = INT64_MIN;
	int16_t x1211 = -1;
	int16_t x1212 = INT16_MAX;

    t144 = ((x1209/(x1210/x1211))-x1212);

    if (t144 != 1152921504606814209LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x1213 = 3928581;
	int16_t x1214 = INT16_MIN;
	volatile int8_t x1215 = INT8_MAX;
	int32_t t145 = 88742295;

    t145 = ((x1213/(x1214/x1215))-x1216);

    if (t145 != -15234) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x1221 = 3127U;
	int64_t x1222 = INT64_MIN;
	int8_t x1224 = 7;
	uint64_t t146 = 122752LLU;

    t146 = ((x1221/(x1222/x1223))-x1224);

    if (t146 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x1242 = INT8_MIN;
	uint32_t x1243 = 7U;

    t147 = ((x1241/(x1242/x1243))-x1244);

    if (t147 != 4294967047U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x1250 = UINT16_MAX;
	int64_t x1251 = -1LL;
	static uint32_t x1252 = UINT32_MAX;
	static volatile int64_t t148 = 19472762LL;

    t148 = ((x1249/(x1250/x1251))-x1252);

    if (t148 != -23332994545LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x1257 = 0LLU;
	uint64_t x1259 = 66555546285722553LLU;
	volatile uint64_t t149 = 360944804258701LLU;

    t149 = ((x1257/(x1258/x1259))-x1260);

    if (t149 != 2147483648LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x1261 = INT32_MIN;
	uint64_t x1262 = 963219624159273LLU;
	uint64_t t150 = 20333613LLU;

    t150 = ((x1261/(x1262/x1263))-x1264);

    if (t150 != 9223372042532683628LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x1265 = 6;
	static uint64_t x1266 = UINT64_MAX;
	volatile int8_t x1267 = INT8_MAX;
	static uint64_t t151 = 13182591317528LLU;

    t151 = ((x1265/(x1266/x1267))-x1268);

    if (t151 != 1LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x1269 = -1LL;
	int64_t t152 = -280240977788LL;

    t152 = ((x1269/(x1270/x1271))-x1272);

    if (t152 != -210550LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x1273 = -1;
	int64_t x1274 = INT64_MIN;
	int16_t x1276 = INT16_MIN;
	volatile int64_t t153 = -82319LL;

    t153 = ((x1273/(x1274/x1275))-x1276);

    if (t153 != 32768LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x1293 = 21U;
	volatile int32_t x1294 = INT32_MIN;
	int32_t x1295 = INT32_MIN;
	static uint16_t x1296 = 484U;
	volatile uint32_t t154 = 38639611U;

    t154 = ((x1293/(x1294/x1295))-x1296);

    if (t154 != 4294966833U) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x1297 = -1;
	int16_t x1298 = INT16_MAX;
	uint16_t x1299 = 1841U;
	uint32_t x1300 = 2626128U;
	uint32_t t155 = 1192U;

    t155 = ((x1297/(x1298/x1299))-x1300);

    if (t155 != 4292341168U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1301 = UINT16_MAX;
	uint32_t x1302 = UINT32_MAX;
	int64_t x1303 = -1LL;
	volatile int32_t x1304 = -158287953;
	static volatile int64_t t156 = 40873679089206244LL;

    t156 = ((x1301/(x1302/x1303))-x1304);

    if (t156 != 158287953LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x1309 = INT16_MIN;
	uint8_t x1311 = UINT8_MAX;
	volatile int64_t t157 = 95LL;

    t157 = ((x1309/(x1310/x1311))-x1312);

    if (t157 != 1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x1313 = UINT64_MAX;
	int64_t x1315 = -1LL;
	int16_t x1316 = INT16_MAX;
	volatile uint64_t t158 = 30068LLU;

    t158 = ((x1313/(x1314/x1315))-x1316);

    if (t158 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x1318 = UINT32_MAX;
	volatile uint64_t x1320 = 26918991189388852LLU;

    t159 = ((x1317/(x1318/x1319))-x1320);

    if (t159 != 18419825082520162802LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x1330 = UINT64_MAX;

    t160 = ((x1329/(x1330/x1331))-x1332);

    if (t160 != 128LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x1337 = INT32_MIN;
	volatile int32_t x1338 = INT32_MIN;
	static uint8_t x1339 = 1U;
	volatile int32_t x1340 = 0;
	volatile int32_t t161 = 1;

    t161 = ((x1337/(x1338/x1339))-x1340);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x1342 = -1;
	uint64_t x1343 = UINT64_MAX;
	uint16_t x1344 = 70U;
	static uint64_t t162 = 110322719707705LLU;

    t162 = ((x1341/(x1342/x1343))-x1344);

    if (t162 != 9223372036854775738LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1345 = INT32_MIN;
	int8_t x1346 = INT8_MIN;
	uint8_t x1347 = 7U;
	static int8_t x1348 = 25;

    t163 = ((x1345/(x1346/x1347))-x1348);

    if (t163 != 119304622) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x1357 = -7769;
	int8_t x1358 = INT8_MIN;
	uint32_t x1360 = UINT32_MAX;
	uint32_t t164 = 3U;

    t164 = ((x1357/(x1358/x1359))-x1360);

    if (t164 != 185U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x1377 = 0U;
	int8_t x1378 = -1;
	volatile uint64_t x1379 = UINT64_MAX;
	int64_t x1380 = INT64_MIN;

    t165 = ((x1377/(x1378/x1379))-x1380);

    if (t165 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x1381 = INT16_MIN;
	volatile uint8_t x1383 = 8U;
	int64_t x1384 = -3533378LL;
	int64_t t166 = -4197721995561856693LL;

    t166 = ((x1381/(x1382/x1383))-x1384);

    if (t166 != 3516994LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x1394 = -178;
	uint32_t x1395 = 33604U;
	volatile uint16_t x1396 = 21507U;
	uint32_t t167 = 1U;

    t167 = ((x1393/(x1394/x1395))-x1396);

    if (t167 != 12097U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x1398 = 1442090LL;
	volatile uint64_t x1400 = 74037864728LLU;

    t168 = ((x1397/(x1398/x1399))-x1400);

    if (t168 != 18446743999671686888LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x1405 = -1;
	int8_t x1407 = -1;
	static int32_t x1408 = 8575;
	static int32_t t169 = 46;

    t169 = ((x1405/(x1406/x1407))-x1408);

    if (t169 != -8576) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1413 = 57U;
	int32_t x1414 = 14168817;
	int64_t x1415 = -1LL;
	int64_t x1416 = INT64_MAX;
	volatile int64_t t170 = -247224LL;

    t170 = ((x1413/(x1414/x1415))-x1416);

    if (t170 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x1417 = 16204131550LL;
	static int64_t x1418 = INT64_MIN;
	volatile uint32_t x1419 = UINT32_MAX;
	volatile int64_t t171 = 3695544823651271391LL;

    t171 = ((x1417/(x1418/x1419))-x1420);

    if (t171 != 121LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int8_t x1425 = INT8_MIN;
	int64_t x1426 = INT64_MAX;
	int64_t t172 = -774018165271508LL;

    t172 = ((x1425/(x1426/x1427))-x1428);

    if (t172 != -9116LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x1429 = 1492U;
	uint16_t x1430 = UINT16_MAX;
	static uint16_t x1431 = 9U;
	uint8_t x1432 = 42U;
	int32_t t173 = 103266;

    t173 = ((x1429/(x1430/x1431))-x1432);

    if (t173 != -42) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x1438 = -415476157;
	static int64_t x1439 = -1263980LL;
	uint32_t x1440 = 9568U;
	int64_t t174 = 7LL;

    t174 = ((x1437/(x1438/x1439))-x1440);

    if (t174 != -9568LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x1445 = -12;
	int64_t x1446 = -8571269867LL;
	int8_t x1448 = INT8_MIN;
	static volatile int64_t t175 = 106655335090741515LL;

    t175 = ((x1445/(x1446/x1447))-x1448);

    if (t175 != 128LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x1453 = 18U;
	int16_t x1454 = INT16_MIN;
	uint16_t x1455 = 4011U;
	volatile uint64_t x1456 = 358257931LLU;
	uint64_t t176 = 67450LLU;

    t176 = ((x1453/(x1454/x1455))-x1456);

    if (t176 != 18446744073351293683LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1461 = UINT32_MAX;
	int8_t x1462 = INT8_MAX;
	static uint16_t x1463 = 29U;
	int8_t x1464 = 48;

    t177 = ((x1461/(x1462/x1463))-x1464);

    if (t177 != 1073741775U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1477 = 3597LLU;
	uint16_t x1478 = 1011U;
	volatile int32_t x1480 = INT32_MAX;
	volatile uint64_t t178 = 56222344LLU;

    t178 = ((x1477/(x1478/x1479))-x1480);

    if (t178 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1489 = 29U;
	volatile int32_t x1491 = -1;
	int16_t x1492 = -1;
	volatile int32_t t179 = 14217;

    t179 = ((x1489/(x1490/x1491))-x1492);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x1494 = UINT8_MAX;
	int8_t x1495 = INT8_MAX;
	int64_t t180 = 20169661444LL;

    t180 = ((x1493/(x1494/x1495))-x1496);

    if (t180 != 2147483648LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1517 = INT16_MIN;
	volatile int8_t x1518 = INT8_MAX;
	int16_t x1519 = -1;
	int32_t x1520 = 1063151190;
	static int32_t t181 = 87178425;

    t181 = ((x1517/(x1518/x1519))-x1520);

    if (t181 != -1063150932) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1525 = -864727594811050LL;
	volatile uint8_t x1527 = 3U;
	uint32_t x1528 = 12061U;
	static volatile int64_t t182 = 57505089LL;

    t182 = ((x1525/(x1526/x1527))-x1528);

    if (t182 != 3699074LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x1529 = -1;
	int8_t x1531 = -1;
	int32_t t183 = 2617;

    t183 = ((x1529/(x1530/x1531))-x1532);

    if (t183 != -78) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x1533 = INT16_MIN;
	uint8_t x1535 = UINT8_MAX;
	volatile uint8_t x1536 = 0U;
	volatile int32_t t184 = -12;

    t184 = ((x1533/(x1534/x1535))-x1536);

    if (t184 != 256) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x1537 = -1LL;
	int16_t x1538 = INT16_MAX;
	int64_t t185 = -9911632LL;

    t185 = ((x1537/(x1538/x1539))-x1540);

    if (t185 != 196LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1546 = -2;
	volatile uint32_t x1547 = 170136836U;
	volatile int64_t x1548 = -26LL;
	int64_t t186 = -8428229771853LL;

    t186 = ((x1545/(x1546/x1547))-x1548);

    if (t186 != 26LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1549 = 225LLU;
	int16_t x1550 = -1;
	static int16_t x1551 = -1;
	uint32_t x1552 = 276617066U;
	uint64_t t187 = 5259362861625LLU;

    t187 = ((x1549/(x1550/x1551))-x1552);

    if (t187 != 18446744073432934775LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1553 = UINT32_MAX;
	volatile uint64_t x1554 = 1306834785819LLU;
	static int32_t x1555 = INT32_MAX;
	int32_t x1556 = -1862;
	volatile uint64_t t188 = 91996670371LLU;

    t188 = ((x1553/(x1554/x1555))-x1556);

    if (t188 != 7065952LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1559 = 25U;
	volatile int8_t x1560 = INT8_MAX;
	volatile uint32_t t189 = 967486U;

    t189 = ((x1557/(x1558/x1559))-x1560);

    if (t189 != 4294967291U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x1569 = INT8_MIN;
	volatile int64_t x1570 = INT64_MAX;
	static volatile int16_t x1571 = 2677;
	uint8_t x1572 = UINT8_MAX;
	int64_t t190 = -2615992333971LL;

    t190 = ((x1569/(x1570/x1571))-x1572);

    if (t190 != -255LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x1605 = 47;
	int32_t x1606 = INT32_MIN;
	int64_t x1607 = -1LL;
	uint64_t x1608 = 1LLU;
	volatile uint64_t t191 = UINT64_MAX;

    t191 = ((x1605/(x1606/x1607))-x1608);

    if (t191 != UINT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1609 = INT8_MIN;
	int8_t x1610 = INT8_MAX;
	static int8_t x1611 = INT8_MAX;
	volatile uint32_t x1612 = UINT32_MAX;
	volatile uint32_t t192 = 106U;

    t192 = ((x1609/(x1610/x1611))-x1612);

    if (t192 != 4294967169U) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x1633 = 15U;
	int64_t x1634 = INT64_MIN;
	uint8_t x1635 = UINT8_MAX;
	volatile int64_t t193 = 2090365931694043LL;

    t193 = ((x1633/(x1634/x1635))-x1636);

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x1642 = 10369U;
	int8_t x1643 = INT8_MIN;
	uint32_t x1644 = 3U;
	volatile uint32_t t194 = 42444U;

    t194 = ((x1641/(x1642/x1643))-x1644);

    if (t194 != 4294967293U) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1657 = -1;
	volatile int8_t x1658 = INT8_MIN;
	int8_t x1659 = INT8_MAX;
	uint64_t t195 = 6157049254LLU;

    t195 = ((x1657/(x1658/x1659))-x1660);

    if (t195 != 18446744073708789503LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1661 = 1;
	static volatile int8_t x1662 = 2;
	int32_t x1663 = -2;
	static int32_t t196 = 8257853;

    t196 = ((x1661/(x1662/x1663))-x1664);

    if (t196 != -65536) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint32_t x1673 = 0U;
	int8_t x1674 = 38;
	int32_t x1676 = -728;
	int64_t t197 = 733508025137LL;

    t197 = ((x1673/(x1674/x1675))-x1676);

    if (t197 != 728LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int64_t x1681 = INT64_MIN;
	int8_t x1682 = INT8_MAX;
	int32_t x1683 = -1;
	int16_t x1684 = -1;

    t198 = ((x1681/(x1682/x1683))-x1684);

    if (t198 != 72624976668147842LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1689 = 0;
	int16_t x1690 = -1;
	volatile int8_t x1691 = -1;
	int16_t x1692 = -1334;
	int32_t t199 = -12178132;

    t199 = ((x1689/(x1690/x1691))-x1692);

    if (t199 != 1334) { NG(); } else { ; }
	
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


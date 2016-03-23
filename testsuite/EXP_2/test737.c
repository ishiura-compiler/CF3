
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
int16_t x16 = -11;
int64_t x31 = -1LL;
volatile uint8_t x32 = UINT8_MAX;
static volatile int32_t t2 = -1827931;
uint64_t x38 = UINT64_MAX;
int64_t x39 = -16080LL;
volatile int32_t t3 = 154532;
int16_t x50 = INT16_MAX;
int64_t x79 = INT64_MAX;
int64_t x80 = -7LL;
volatile int32_t x82 = INT32_MIN;
static int32_t x84 = INT32_MIN;
volatile int32_t t8 = -49419;
volatile int32_t t9 = 24186;
static int16_t x122 = 6;
static int32_t t10 = -3;
int16_t x143 = INT16_MIN;
uint64_t x153 = 13037783285LLU;
volatile int32_t t14 = -70;
volatile uint64_t x188 = 533081720860LLU;
int8_t x199 = INT8_MIN;
volatile int32_t t17 = -893519;
static volatile int64_t x211 = INT64_MIN;
int16_t x234 = 0;
int16_t x240 = INT16_MAX;
static volatile int16_t x246 = INT16_MIN;
int32_t x254 = -15217;
int32_t x256 = INT32_MAX;
int32_t t24 = 0;
volatile int32_t t25 = 3;
int16_t x327 = INT16_MIN;
int64_t x328 = -200710739348LL;
volatile int32_t t28 = 51;
int32_t x375 = INT32_MAX;
int16_t x376 = INT16_MAX;
int64_t x381 = INT64_MAX;
int8_t x415 = INT8_MIN;
static volatile int8_t x421 = 17;
static uint64_t x460 = 3060LLU;
static volatile int8_t x464 = -1;
int8_t x499 = INT8_MIN;
int32_t t37 = -204249959;
volatile uint16_t x509 = 1U;
static volatile int32_t t39 = -13570;
static volatile uint8_t x533 = 113U;
int8_t x557 = 0;
volatile int8_t x558 = -3;
static int8_t x564 = 14;
int32_t t45 = 538297495;
volatile uint32_t x589 = 5U;
static int16_t x592 = INT16_MAX;
int32_t x619 = INT32_MIN;
volatile int16_t x623 = INT16_MIN;
int8_t x642 = -1;
int32_t x656 = INT32_MAX;
volatile uint32_t x658 = 3U;
volatile uint32_t x659 = UINT32_MAX;
static volatile uint64_t x685 = UINT64_MAX;
int32_t x706 = 0;
volatile int32_t t58 = 49420;
int64_t x753 = 3399213052108LL;
int32_t t60 = 91;
uint32_t x764 = 19796538U;
uint8_t x766 = UINT8_MAX;
uint16_t x767 = UINT16_MAX;
volatile int16_t x768 = INT16_MAX;
int32_t t62 = 4736;
int32_t t63 = 11684;
int32_t x775 = 261820229;
int32_t x783 = INT32_MIN;
int16_t x784 = INT16_MIN;
static int8_t x787 = INT8_MAX;
uint32_t x791 = UINT32_MAX;
volatile int32_t t67 = 116201;
uint64_t x821 = UINT64_MAX;
volatile uint16_t x853 = 1U;
int64_t x856 = INT64_MIN;
int32_t x899 = INT32_MIN;
volatile int32_t t73 = 6541;
volatile int32_t t75 = 0;
static volatile uint32_t x940 = 43547U;
int64_t x952 = 36LL;
uint64_t x977 = 2104241667LLU;
int32_t x980 = INT32_MAX;
static int32_t t82 = 14146;
static int8_t x986 = -1;
int32_t x993 = INT32_MAX;
static uint64_t x997 = 4301232787495295313LLU;
static volatile int8_t x998 = INT8_MIN;
uint32_t x1001 = 111734U;
static int32_t x1004 = INT32_MIN;
uint32_t x1006 = UINT32_MAX;
int32_t t87 = -102376;
int32_t t88 = 0;
static volatile int8_t x1013 = 9;
int32_t t91 = 26624;
uint16_t x1050 = 10U;
int8_t x1052 = -1;
int32_t t92 = 0;
uint8_t x1082 = UINT8_MAX;
volatile int32_t x1088 = INT32_MIN;
int8_t x1092 = INT8_MAX;
volatile int32_t x1114 = 30;
int16_t x1120 = INT16_MAX;
int32_t t98 = -236907018;
volatile int16_t x1130 = -1;
uint32_t x1145 = 52U;
volatile int32_t t101 = -30563;
static uint16_t x1149 = 13896U;
uint64_t x1159 = UINT64_MAX;
static int64_t x1160 = INT64_MAX;
static volatile int64_t x1183 = INT64_MAX;
int32_t x1193 = INT32_MAX;
int16_t x1195 = INT16_MAX;
uint16_t x1210 = 11U;
static uint64_t x1211 = 29210LLU;
volatile int32_t x1212 = -1;
volatile uint32_t x1230 = 111726152U;
uint16_t x1239 = UINT16_MAX;
volatile int32_t t110 = 1;
static uint8_t x1269 = 10U;
int64_t x1272 = -1LL;
int32_t t113 = -26735;
volatile uint16_t x1299 = 21U;
volatile int64_t x1300 = INT64_MIN;
int32_t t117 = 3602869;
static int16_t x1325 = INT16_MAX;
volatile uint64_t x1336 = 697498LLU;
uint16_t x1357 = 5292U;
int16_t x1366 = 467;
int8_t x1374 = 2;
volatile uint64_t x1381 = 8282561788851384074LLU;
uint64_t x1382 = 1331517236822942589LLU;
uint32_t x1393 = UINT32_MAX;
volatile int32_t t126 = -3638;
int32_t t128 = 98;
uint64_t x1431 = 698475340286233298LLU;
uint8_t x1432 = 57U;
static volatile int8_t x1438 = INT8_MAX;
uint32_t x1439 = 37533731U;
volatile int32_t t130 = 56;
int32_t t131 = 1741;
static volatile uint8_t x1475 = UINT8_MAX;
uint8_t x1494 = 13U;
uint64_t x1506 = 1958LLU;
volatile uint64_t x1538 = UINT64_MAX;
int16_t x1539 = INT16_MIN;
int32_t x1540 = INT32_MAX;
uint8_t x1549 = 1U;
static int32_t t138 = -289;
volatile int8_t x1565 = INT8_MAX;
static uint32_t x1567 = 348047U;
uint64_t x1575 = 4699998284068LLU;
int32_t x1577 = INT32_MAX;
static uint8_t x1578 = 1U;
int32_t x1621 = INT32_MAX;
uint8_t x1655 = 32U;
static volatile uint64_t x1684 = 14369LLU;
int64_t x1692 = -1LL;
int32_t t150 = 1214317;
int8_t x1788 = -1;
volatile uint8_t x1790 = UINT8_MAX;
volatile int8_t x1814 = -1;
int16_t x1815 = INT16_MAX;
static int64_t x1816 = -3103988694LL;
volatile int32_t t154 = -893;
int16_t x1831 = INT16_MIN;
int16_t x1832 = 12287;
static volatile int32_t t155 = 591251531;
volatile uint64_t x1866 = 227108397LLU;
int64_t x1867 = INT64_MIN;
int32_t t159 = -481;
int8_t x1871 = -1;
uint32_t x1872 = 5202U;
int64_t x1890 = -1LL;
uint64_t x1899 = 26333230LLU;
volatile int32_t t163 = -4506;
uint32_t x1927 = 106059817U;
int16_t x1946 = -70;
uint32_t x1947 = UINT32_MAX;
int8_t x1979 = -20;
int32_t x2051 = -1;
int8_t x2061 = 0;
int32_t x2067 = 119;
static int64_t x2099 = INT64_MIN;
static uint32_t x2126 = UINT32_MAX;
static int32_t t178 = -6660596;
uint8_t x2145 = 1U;
volatile int32_t x2148 = -1;
int32_t x2177 = 414539;
uint32_t x2185 = 1838606U;
static int8_t x2188 = -1;
static volatile int8_t x2236 = INT8_MIN;
static volatile int16_t x2237 = INT16_MAX;
uint16_t x2242 = 417U;
int16_t x2243 = -14334;
static volatile int16_t x2270 = INT16_MIN;
int16_t x2272 = INT16_MIN;
int32_t t188 = 14205280;
volatile int32_t x2304 = 1356393;
int16_t x2319 = -1;
static int64_t x2363 = -149504550071591LL;
uint32_t x2367 = UINT32_MAX;
static int32_t x2381 = INT32_MAX;
uint16_t x2382 = UINT16_MAX;
static uint16_t x2384 = 7342U;
volatile int32_t t198 = -3;
int32_t x2387 = INT32_MAX;


void f0(void) {
    	static int16_t x1 = 0;
	static int8_t x2 = -1;
	static int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 157;

    t0 = ((x1>>(x2/x3))>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x13 = UINT32_MAX;
	int16_t x14 = -1;
	int64_t x15 = INT64_MAX;
	int32_t t1 = -2;

    t1 = ((x13>>(x14/x15))>x16);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x29 = 3550LLU;
	volatile int64_t x30 = -1LL;

    t2 = ((x29>>(x30/x31))>x32);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x37 = 259238U;
	int8_t x40 = INT8_MIN;

    t3 = ((x37>>(x38/x39))>x40);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x49 = INT8_MAX;
	uint64_t x51 = 56486191309LLU;
	uint8_t x52 = 69U;
	int32_t t4 = -11800;

    t4 = ((x49>>(x50/x51))>x52);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x57 = 250654870;
	uint16_t x58 = 180U;
	uint64_t x59 = 56541LLU;
	int8_t x60 = INT8_MIN;
	volatile int32_t t5 = -1600;

    t5 = ((x57>>(x58/x59))>x60);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x73 = 179941838;
	int8_t x74 = 0;
	int32_t x75 = INT32_MAX;
	volatile uint16_t x76 = 1U;
	static int32_t t6 = -1563;

    t6 = ((x73>>(x74/x75))>x76);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x77 = 3561U;
	int32_t x78 = 6;
	static int32_t t7 = -2;

    t7 = ((x77>>(x78/x79))>x80);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x81 = INT8_MAX;
	int64_t x83 = INT64_MIN;

    t8 = ((x81>>(x82/x83))>x84);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x93 = 1U;
	int64_t x94 = -1LL;
	uint64_t x95 = UINT64_MAX;
	int64_t x96 = -1LL;

    t9 = ((x93>>(x94/x95))>x96);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x121 = 140068114739270780LLU;
	int64_t x123 = INT64_MIN;
	uint32_t x124 = 71U;

    t10 = ((x121>>(x122/x123))>x124);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x125 = 12289U;
	int64_t x126 = INT64_MIN;
	int64_t x127 = INT64_MIN;
	volatile uint64_t x128 = UINT64_MAX;
	int32_t t11 = 302796;

    t11 = ((x125>>(x126/x127))>x128);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x133 = 12U;
	static int64_t x134 = 4008842LL;
	uint64_t x135 = 3667106966704857579LLU;
	static volatile int8_t x136 = INT8_MIN;
	volatile int32_t t12 = -1109532;

    t12 = ((x133>>(x134/x135))>x136);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x141 = INT16_MAX;
	static int64_t x142 = 445LL;
	int64_t x144 = -1LL;
	static volatile int32_t t13 = 255514;

    t13 = ((x141>>(x142/x143))>x144);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x154 = -1;
	int32_t x155 = INT32_MAX;
	int64_t x156 = -1LL;

    t14 = ((x153>>(x154/x155))>x156);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x181 = UINT8_MAX;
	static int32_t x182 = -1;
	volatile int16_t x183 = -1;
	int64_t x184 = INT64_MIN;
	volatile int32_t t15 = -2338;

    t15 = ((x181>>(x182/x183))>x184);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x185 = UINT32_MAX;
	volatile int64_t x186 = -61372973748LL;
	int64_t x187 = INT64_MAX;
	volatile int32_t t16 = 27743195;

    t16 = ((x185>>(x186/x187))>x188);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x197 = UINT16_MAX;
	uint64_t x198 = UINT64_MAX;
	uint64_t x200 = 192285LLU;

    t17 = ((x197>>(x198/x199))>x200);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x205 = UINT32_MAX;
	int8_t x206 = INT8_MIN;
	uint32_t x207 = UINT32_MAX;
	volatile int32_t x208 = -264;
	static volatile int32_t t18 = -136;

    t18 = ((x205>>(x206/x207))>x208);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x209 = INT64_MAX;
	uint16_t x210 = 64U;
	volatile int32_t x212 = -54;
	static int32_t t19 = 11416569;

    t19 = ((x209>>(x210/x211))>x212);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x225 = 15U;
	volatile uint64_t x226 = 5LLU;
	uint8_t x227 = 5U;
	int16_t x228 = INT16_MAX;
	static int32_t t20 = 394329252;

    t20 = ((x225>>(x226/x227))>x228);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x233 = INT16_MAX;
	volatile uint16_t x235 = UINT16_MAX;
	int64_t x236 = INT64_MIN;
	int32_t t21 = 8840807;

    t21 = ((x233>>(x234/x235))>x236);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x237 = 6826257741507080755LLU;
	int32_t x238 = -1402144;
	int64_t x239 = 87250744LL;
	int32_t t22 = -99;

    t22 = ((x237>>(x238/x239))>x240);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x245 = 1519115236013LL;
	int32_t x247 = INT32_MIN;
	static int32_t x248 = -1;
	volatile int32_t t23 = -6;

    t23 = ((x245>>(x246/x247))>x248);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x253 = 8335U;
	uint32_t x255 = UINT32_MAX;

    t24 = ((x253>>(x254/x255))>x256);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x297 = INT8_MAX;
	int64_t x298 = -1LL;
	int32_t x299 = INT32_MIN;
	int8_t x300 = -1;

    t25 = ((x297>>(x298/x299))>x300);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x313 = 3U;
	static int32_t x314 = -1;
	volatile int16_t x315 = INT16_MIN;
	static int16_t x316 = INT16_MIN;
	int32_t t26 = 1;

    t26 = ((x313>>(x314/x315))>x316);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x325 = 2424LLU;
	uint64_t x326 = 242785195401573646LLU;
	int32_t t27 = 739511212;

    t27 = ((x325>>(x326/x327))>x328);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x341 = 30LLU;
	int8_t x342 = -1;
	static volatile int16_t x343 = INT16_MIN;
	int32_t x344 = INT32_MIN;

    t28 = ((x341>>(x342/x343))>x344);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint32_t x357 = UINT32_MAX;
	volatile int8_t x358 = INT8_MIN;
	uint8_t x359 = UINT8_MAX;
	static int32_t x360 = INT32_MAX;
	int32_t t29 = -233523186;

    t29 = ((x357>>(x358/x359))>x360);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x373 = INT32_MAX;
	uint32_t x374 = UINT32_MAX;
	volatile int32_t t30 = 4559;

    t30 = ((x373>>(x374/x375))>x376);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x382 = 4;
	uint64_t x383 = 4277LLU;
	uint16_t x384 = 5U;
	volatile int32_t t31 = -53418;

    t31 = ((x381>>(x382/x383))>x384);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x397 = 6U;
	uint8_t x398 = 0U;
	uint8_t x399 = 1U;
	uint16_t x400 = 47U;
	int32_t t32 = -2297;

    t32 = ((x397>>(x398/x399))>x400);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x413 = 1298;
	int8_t x414 = -2;
	uint32_t x416 = 291413976U;
	int32_t t33 = -591925703;

    t33 = ((x413>>(x414/x415))>x416);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x422 = 141;
	static int16_t x423 = INT16_MIN;
	int16_t x424 = 21;
	volatile int32_t t34 = 18;

    t34 = ((x421>>(x422/x423))>x424);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x457 = INT8_MAX;
	int8_t x458 = -21;
	static int8_t x459 = INT8_MIN;
	static int32_t t35 = 7;

    t35 = ((x457>>(x458/x459))>x460);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x461 = 13;
	static int16_t x462 = INT16_MIN;
	int64_t x463 = -20542686497099LL;
	int32_t t36 = 20;

    t36 = ((x461>>(x462/x463))>x464);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x497 = INT32_MAX;
	uint32_t x498 = 1466670339U;
	uint16_t x500 = 91U;

    t37 = ((x497>>(x498/x499))>x500);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x505 = 514U;
	int16_t x506 = -2;
	int32_t x507 = 1642235;
	int64_t x508 = INT64_MIN;
	volatile int32_t t38 = -23;

    t38 = ((x505>>(x506/x507))>x508);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x510 = UINT64_MAX;
	static int64_t x511 = INT64_MAX;
	uint16_t x512 = 465U;

    t39 = ((x509>>(x510/x511))>x512);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x521 = UINT8_MAX;
	uint8_t x522 = 39U;
	static int8_t x523 = INT8_MAX;
	int32_t x524 = -1;
	int32_t t40 = 1040986365;

    t40 = ((x521>>(x522/x523))>x524);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x534 = 2;
	uint16_t x535 = 9U;
	int64_t x536 = INT64_MIN;
	static int32_t t41 = 16096;

    t41 = ((x533>>(x534/x535))>x536);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x549 = UINT32_MAX;
	uint64_t x550 = UINT64_MAX;
	int64_t x551 = INT64_MIN;
	static int64_t x552 = INT64_MAX;
	static int32_t t42 = -3;

    t42 = ((x549>>(x550/x551))>x552);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x559 = -8;
	uint16_t x560 = 15U;
	int32_t t43 = 55713342;

    t43 = ((x557>>(x558/x559))>x560);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x561 = 259919061U;
	int32_t x562 = INT32_MAX;
	static int32_t x563 = INT32_MIN;
	static int32_t t44 = 3;

    t44 = ((x561>>(x562/x563))>x564);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int32_t x577 = INT32_MAX;
	int16_t x578 = 63;
	int32_t x579 = INT32_MIN;
	int8_t x580 = -1;

    t45 = ((x577>>(x578/x579))>x580);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x590 = INT16_MAX;
	int32_t x591 = INT32_MIN;
	volatile int32_t t46 = 2849220;

    t46 = ((x589>>(x590/x591))>x592);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x605 = 790;
	int8_t x606 = INT8_MAX;
	uint32_t x607 = 7U;
	int32_t x608 = -1;
	int32_t t47 = -52498;

    t47 = ((x605>>(x606/x607))>x608);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x613 = 1U;
	int8_t x614 = INT8_MIN;
	int64_t x615 = 2490070606386LL;
	int16_t x616 = 174;
	int32_t t48 = 942221376;

    t48 = ((x613>>(x614/x615))>x616);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x617 = UINT8_MAX;
	int16_t x618 = INT16_MIN;
	static volatile int8_t x620 = 24;
	int32_t t49 = -7286;

    t49 = ((x617>>(x618/x619))>x620);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x621 = UINT64_MAX;
	volatile int8_t x622 = -1;
	int8_t x624 = INT8_MAX;
	volatile int32_t t50 = -694;

    t50 = ((x621>>(x622/x623))>x624);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x641 = UINT64_MAX;
	int32_t x643 = INT32_MAX;
	static int32_t x644 = INT32_MIN;
	volatile int32_t t51 = -128867473;

    t51 = ((x641>>(x642/x643))>x644);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x653 = 2;
	static int32_t x654 = INT32_MAX;
	uint64_t x655 = UINT64_MAX;
	volatile int32_t t52 = -556;

    t52 = ((x653>>(x654/x655))>x656);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x657 = 325736819;
	int16_t x660 = 230;
	int32_t t53 = -27;

    t53 = ((x657>>(x658/x659))>x660);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x686 = -22LL;
	int32_t x687 = 3122258;
	uint64_t x688 = UINT64_MAX;
	volatile int32_t t54 = 14;

    t54 = ((x685>>(x686/x687))>x688);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x697 = 5969381588809LLU;
	volatile int64_t x698 = -1LL;
	int64_t x699 = INT64_MAX;
	int64_t x700 = 125LL;
	static volatile int32_t t55 = -839;

    t55 = ((x697>>(x698/x699))>x700);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x705 = 57U;
	static int32_t x707 = -1;
	int64_t x708 = INT64_MIN;
	volatile int32_t t56 = -274;

    t56 = ((x705>>(x706/x707))>x708);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x709 = UINT64_MAX;
	int8_t x710 = 23;
	static uint8_t x711 = 1U;
	int64_t x712 = INT64_MIN;
	volatile int32_t t57 = 1691341;

    t57 = ((x709>>(x710/x711))>x712);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x721 = 35661U;
	uint8_t x722 = 17U;
	int8_t x723 = INT8_MIN;
	uint16_t x724 = 0U;

    t58 = ((x721>>(x722/x723))>x724);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x754 = 245093276LLU;
	int8_t x755 = -1;
	uint32_t x756 = UINT32_MAX;
	int32_t t59 = 6;

    t59 = ((x753>>(x754/x755))>x756);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x757 = 84U;
	int8_t x758 = 4;
	volatile int16_t x759 = INT16_MIN;
	int8_t x760 = 2;

    t60 = ((x757>>(x758/x759))>x760);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x761 = 376LLU;
	uint64_t x762 = 27LLU;
	int32_t x763 = 480530;
	volatile int32_t t61 = -552452;

    t61 = ((x761>>(x762/x763))>x764);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x765 = 9U;

    t62 = ((x765>>(x766/x767))>x768);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x769 = 1U;
	int8_t x770 = INT8_MAX;
	static uint32_t x771 = 32735U;
	uint32_t x772 = 365530U;

    t63 = ((x769>>(x770/x771))>x772);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x773 = 2;
	static int8_t x774 = -3;
	uint64_t x776 = 203786897529423LLU;
	volatile int32_t t64 = 840698;

    t64 = ((x773>>(x774/x775))>x776);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x781 = UINT8_MAX;
	volatile int64_t x782 = -10LL;
	static volatile int32_t t65 = 929174790;

    t65 = ((x781>>(x782/x783))>x784);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x785 = 11652885596726935LL;
	int16_t x786 = 63;
	uint32_t x788 = 200338U;
	int32_t t66 = 1631;

    t66 = ((x785>>(x786/x787))>x788);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x789 = 1;
	uint32_t x790 = 6413U;
	static int16_t x792 = INT16_MAX;

    t67 = ((x789>>(x790/x791))>x792);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x817 = INT8_MAX;
	uint64_t x818 = 26166LLU;
	static int64_t x819 = INT64_MIN;
	int16_t x820 = -1;
	volatile int32_t t68 = -8;

    t68 = ((x817>>(x818/x819))>x820);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x822 = 217U;
	static volatile int16_t x823 = INT16_MIN;
	static int64_t x824 = INT64_MAX;
	int32_t t69 = 68269311;

    t69 = ((x821>>(x822/x823))>x824);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x825 = 1U;
	int64_t x826 = 5LL;
	static int16_t x827 = INT16_MIN;
	int16_t x828 = 6165;
	volatile int32_t t70 = -477420;

    t70 = ((x825>>(x826/x827))>x828);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x854 = INT8_MIN;
	int64_t x855 = -23517866851768320LL;
	volatile int32_t t71 = -68862056;

    t71 = ((x853>>(x854/x855))>x856);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x893 = 8018;
	uint16_t x894 = 64U;
	int16_t x895 = INT16_MIN;
	int64_t x896 = -1LL;
	volatile int32_t t72 = 89442;

    t72 = ((x893>>(x894/x895))>x896);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x897 = UINT8_MAX;
	static uint16_t x898 = 92U;
	int64_t x900 = -1LL;

    t73 = ((x897>>(x898/x899))>x900);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x909 = INT64_MAX;
	int8_t x910 = INT8_MAX;
	static int16_t x911 = INT16_MIN;
	static int32_t x912 = INT32_MAX;
	static volatile int32_t t74 = 1;

    t74 = ((x909>>(x910/x911))>x912);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x913 = UINT16_MAX;
	static volatile int8_t x914 = INT8_MIN;
	static int8_t x915 = INT8_MIN;
	static uint32_t x916 = UINT32_MAX;

    t75 = ((x913>>(x914/x915))>x916);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x917 = UINT32_MAX;
	uint8_t x918 = UINT8_MAX;
	uint16_t x919 = 779U;
	static volatile int64_t x920 = INT64_MIN;
	volatile int32_t t76 = 22510;

    t76 = ((x917>>(x918/x919))>x920);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x929 = INT8_MAX;
	volatile int16_t x930 = INT16_MIN;
	int64_t x931 = INT64_MIN;
	int8_t x932 = -1;
	static int32_t t77 = -907143619;

    t77 = ((x929>>(x930/x931))>x932);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x937 = UINT8_MAX;
	int32_t x938 = INT32_MIN;
	volatile uint32_t x939 = 742600375U;
	int32_t t78 = -14806;

    t78 = ((x937>>(x938/x939))>x940);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x949 = 206844500;
	int8_t x950 = INT8_MAX;
	uint32_t x951 = UINT32_MAX;
	static int32_t t79 = -988745936;

    t79 = ((x949>>(x950/x951))>x952);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x953 = 13U;
	int8_t x954 = 10;
	uint64_t x955 = 11768LLU;
	uint64_t x956 = UINT64_MAX;
	static int32_t t80 = 1705583;

    t80 = ((x953>>(x954/x955))>x956);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x961 = 1967505U;
	volatile uint16_t x962 = 2U;
	static int16_t x963 = INT16_MAX;
	int32_t x964 = INT32_MIN;
	int32_t t81 = -140753;

    t81 = ((x961>>(x962/x963))>x964);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x978 = 25;
	uint64_t x979 = 1LLU;

    t82 = ((x977>>(x978/x979))>x980);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x985 = 0U;
	int64_t x987 = 12774737LL;
	int8_t x988 = INT8_MIN;
	volatile int32_t t83 = 0;

    t83 = ((x985>>(x986/x987))>x988);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x994 = 11U;
	volatile uint8_t x995 = 44U;
	static int64_t x996 = INT64_MIN;
	int32_t t84 = 118;

    t84 = ((x993>>(x994/x995))>x996);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int64_t x999 = INT64_MAX;
	static int32_t x1000 = INT32_MAX;
	static volatile int32_t t85 = -296;

    t85 = ((x997>>(x998/x999))>x1000);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x1002 = 2424LLU;
	int64_t x1003 = 589042819LL;
	int32_t t86 = 500259;

    t86 = ((x1001>>(x1002/x1003))>x1004);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x1005 = INT16_MAX;
	int64_t x1007 = INT64_MIN;
	int16_t x1008 = -1;

    t87 = ((x1005>>(x1006/x1007))>x1008);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x1009 = 1750355LLU;
	int32_t x1010 = INT32_MIN;
	int32_t x1011 = INT32_MIN;
	uint8_t x1012 = 7U;

    t88 = ((x1009>>(x1010/x1011))>x1012);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x1014 = INT64_MAX;
	static int64_t x1015 = INT64_MAX;
	int32_t x1016 = INT32_MIN;
	volatile int32_t t89 = 43362256;

    t89 = ((x1013>>(x1014/x1015))>x1016);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x1025 = 135U;
	uint32_t x1026 = UINT32_MAX;
	int32_t x1027 = -4;
	static volatile int32_t x1028 = -18248165;
	static volatile int32_t t90 = 522;

    t90 = ((x1025>>(x1026/x1027))>x1028);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x1033 = 0;
	int32_t x1034 = -1;
	volatile int16_t x1035 = INT16_MIN;
	uint16_t x1036 = UINT16_MAX;

    t91 = ((x1033>>(x1034/x1035))>x1036);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x1049 = UINT8_MAX;
	uint8_t x1051 = 25U;

    t92 = ((x1049>>(x1050/x1051))>x1052);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x1069 = 11645698097592LLU;
	static int16_t x1070 = INT16_MIN;
	uint64_t x1071 = UINT64_MAX;
	static volatile uint64_t x1072 = UINT64_MAX;
	static volatile int32_t t93 = 6;

    t93 = ((x1069>>(x1070/x1071))>x1072);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x1081 = UINT8_MAX;
	uint64_t x1083 = 13010941679LLU;
	int32_t x1084 = INT32_MIN;
	volatile int32_t t94 = -25;

    t94 = ((x1081>>(x1082/x1083))>x1084);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x1085 = UINT8_MAX;
	int32_t x1086 = -120223;
	uint32_t x1087 = UINT32_MAX;
	static volatile int32_t t95 = -3006;

    t95 = ((x1085>>(x1086/x1087))>x1088);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x1089 = 50U;
	volatile uint16_t x1090 = 133U;
	uint32_t x1091 = 663258202U;
	static volatile int32_t t96 = -1166;

    t96 = ((x1089>>(x1090/x1091))>x1092);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x1113 = 7342363LLU;
	uint16_t x1115 = 414U;
	uint8_t x1116 = 83U;
	volatile int32_t t97 = 104;

    t97 = ((x1113>>(x1114/x1115))>x1116);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x1117 = 3U;
	static volatile int64_t x1118 = -118LL;
	uint32_t x1119 = UINT32_MAX;

    t98 = ((x1117>>(x1118/x1119))>x1120);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x1121 = 99748U;
	int8_t x1122 = 46;
	static int64_t x1123 = INT64_MAX;
	int16_t x1124 = -1;
	int32_t t99 = 101;

    t99 = ((x1121>>(x1122/x1123))>x1124);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x1129 = UINT64_MAX;
	static int8_t x1131 = 2;
	int16_t x1132 = -1;
	int32_t t100 = 174578;

    t100 = ((x1129>>(x1130/x1131))>x1132);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x1146 = INT16_MAX;
	int32_t x1147 = 1461;
	uint32_t x1148 = 28U;

    t101 = ((x1145>>(x1146/x1147))>x1148);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x1150 = 337LL;
	static int64_t x1151 = -1629136291165LL;
	volatile int8_t x1152 = INT8_MAX;
	static volatile int32_t t102 = -77;

    t102 = ((x1149>>(x1150/x1151))>x1152);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x1157 = 5U;
	int64_t x1158 = -1LL;
	int32_t t103 = 1019578;

    t103 = ((x1157>>(x1158/x1159))>x1160);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x1181 = UINT64_MAX;
	int64_t x1182 = INT64_MAX;
	int16_t x1184 = INT16_MAX;
	int32_t t104 = 1872770;

    t104 = ((x1181>>(x1182/x1183))>x1184);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x1189 = INT8_MAX;
	int32_t x1190 = -1;
	int8_t x1191 = INT8_MIN;
	static uint32_t x1192 = 441554933U;
	int32_t t105 = 176;

    t105 = ((x1189>>(x1190/x1191))>x1192);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x1194 = -9;
	int64_t x1196 = 17LL;
	volatile int32_t t106 = -1811081;

    t106 = ((x1193>>(x1194/x1195))>x1196);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x1201 = UINT8_MAX;
	int32_t x1202 = -1;
	static uint64_t x1203 = UINT64_MAX;
	volatile int64_t x1204 = INT64_MIN;
	volatile int32_t t107 = -1;

    t107 = ((x1201>>(x1202/x1203))>x1204);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x1209 = 51U;
	static int32_t t108 = -13;

    t108 = ((x1209>>(x1210/x1211))>x1212);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x1229 = 0;
	static uint64_t x1231 = UINT64_MAX;
	int16_t x1232 = INT16_MAX;
	static int32_t t109 = -152161;

    t109 = ((x1229>>(x1230/x1231))>x1232);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x1237 = UINT32_MAX;
	int8_t x1238 = INT8_MIN;
	uint8_t x1240 = UINT8_MAX;

    t110 = ((x1237>>(x1238/x1239))>x1240);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x1257 = INT8_MAX;
	static int32_t x1258 = INT32_MIN;
	static volatile int32_t x1259 = INT32_MIN;
	volatile int16_t x1260 = INT16_MIN;
	int32_t t111 = 1415;

    t111 = ((x1257>>(x1258/x1259))>x1260);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x1270 = 25U;
	int8_t x1271 = INT8_MIN;
	int32_t t112 = 14244449;

    t112 = ((x1269>>(x1270/x1271))>x1272);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x1281 = 1365334U;
	volatile uint16_t x1282 = 0U;
	volatile int16_t x1283 = -1;
	uint32_t x1284 = UINT32_MAX;

    t113 = ((x1281>>(x1282/x1283))>x1284);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x1285 = 31042486077104609LLU;
	static int16_t x1286 = INT16_MIN;
	static int32_t x1287 = -14226;
	uint8_t x1288 = 2U;
	int32_t t114 = -63;

    t114 = ((x1285>>(x1286/x1287))>x1288);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x1293 = UINT64_MAX;
	static volatile int16_t x1294 = INT16_MIN;
	static int32_t x1295 = -34382;
	static int64_t x1296 = -6LL;
	static volatile int32_t t115 = -32283;

    t115 = ((x1293>>(x1294/x1295))>x1296);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x1297 = UINT32_MAX;
	volatile int64_t x1298 = -1LL;
	volatile int32_t t116 = 1345;

    t116 = ((x1297>>(x1298/x1299))>x1300);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x1301 = 2658U;
	uint64_t x1302 = 1914LLU;
	int32_t x1303 = INT32_MIN;
	uint64_t x1304 = UINT64_MAX;

    t117 = ((x1301>>(x1302/x1303))>x1304);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x1326 = 0;
	uint32_t x1327 = UINT32_MAX;
	int32_t x1328 = INT32_MAX;
	volatile int32_t t118 = 6402;

    t118 = ((x1325>>(x1326/x1327))>x1328);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x1333 = INT64_MAX;
	int32_t x1334 = -1;
	volatile int8_t x1335 = INT8_MAX;
	int32_t t119 = 526684;

    t119 = ((x1333>>(x1334/x1335))>x1336);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x1341 = UINT8_MAX;
	volatile uint64_t x1342 = 4163899908261781LLU;
	int64_t x1343 = INT64_MIN;
	int32_t x1344 = -5;
	int32_t t120 = 41742275;

    t120 = ((x1341>>(x1342/x1343))>x1344);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x1358 = 76U;
	uint32_t x1359 = UINT32_MAX;
	uint16_t x1360 = UINT16_MAX;
	int32_t t121 = 5193522;

    t121 = ((x1357>>(x1358/x1359))>x1360);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x1365 = UINT64_MAX;
	int32_t x1367 = INT32_MIN;
	int32_t x1368 = INT32_MIN;
	volatile int32_t t122 = -36028007;

    t122 = ((x1365>>(x1366/x1367))>x1368);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x1373 = UINT8_MAX;
	uint16_t x1375 = UINT16_MAX;
	uint32_t x1376 = 31232U;
	static int32_t t123 = 9689793;

    t123 = ((x1373>>(x1374/x1375))>x1376);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x1383 = -1;
	uint16_t x1384 = 2U;
	static volatile int32_t t124 = 29;

    t124 = ((x1381>>(x1382/x1383))>x1384);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int16_t x1389 = 6;
	int8_t x1390 = 0;
	static int64_t x1391 = INT64_MIN;
	static int64_t x1392 = 238585190674LL;
	int32_t t125 = 987;

    t125 = ((x1389>>(x1390/x1391))>x1392);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x1394 = 12U;
	static int64_t x1395 = INT64_MIN;
	static int32_t x1396 = INT32_MIN;

    t126 = ((x1393>>(x1394/x1395))>x1396);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x1405 = 1U;
	uint16_t x1406 = 163U;
	uint16_t x1407 = UINT16_MAX;
	uint64_t x1408 = 59356909877936LLU;
	volatile int32_t t127 = 127130;

    t127 = ((x1405>>(x1406/x1407))>x1408);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x1413 = 15U;
	static int8_t x1414 = 4;
	int16_t x1415 = 2;
	volatile int64_t x1416 = INT64_MAX;

    t128 = ((x1413>>(x1414/x1415))>x1416);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x1429 = 2U;
	static uint16_t x1430 = UINT16_MAX;
	static volatile int32_t t129 = 42155;

    t129 = ((x1429>>(x1430/x1431))>x1432);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x1437 = INT64_MAX;
	int16_t x1440 = INT16_MIN;

    t130 = ((x1437>>(x1438/x1439))>x1440);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x1445 = 17449993;
	int32_t x1446 = 169;
	volatile int32_t x1447 = INT32_MAX;
	uint64_t x1448 = UINT64_MAX;

    t131 = ((x1445>>(x1446/x1447))>x1448);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x1473 = 5871075817LLU;
	volatile int32_t x1474 = -31;
	volatile int8_t x1476 = INT8_MIN;
	int32_t t132 = -1298302;

    t132 = ((x1473>>(x1474/x1475))>x1476);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x1485 = 30LLU;
	static int16_t x1486 = -1;
	int16_t x1487 = -1;
	volatile int64_t x1488 = -12657098931LL;
	volatile int32_t t133 = 1991536;

    t133 = ((x1485>>(x1486/x1487))>x1488);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint32_t x1493 = 38U;
	uint16_t x1495 = 8299U;
	int32_t x1496 = INT32_MAX;
	static volatile int32_t t134 = -624527;

    t134 = ((x1493>>(x1494/x1495))>x1496);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x1505 = INT32_MAX;
	int8_t x1507 = INT8_MIN;
	uint8_t x1508 = UINT8_MAX;
	static int32_t t135 = -5462;

    t135 = ((x1505>>(x1506/x1507))>x1508);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x1509 = 327U;
	static volatile int8_t x1510 = INT8_MAX;
	uint8_t x1511 = UINT8_MAX;
	int32_t x1512 = INT32_MIN;
	volatile int32_t t136 = -19409576;

    t136 = ((x1509>>(x1510/x1511))>x1512);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x1537 = 1;
	volatile int32_t t137 = 32444444;

    t137 = ((x1537>>(x1538/x1539))>x1540);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x1550 = -1;
	int16_t x1551 = INT16_MIN;
	uint64_t x1552 = UINT64_MAX;

    t138 = ((x1549>>(x1550/x1551))>x1552);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x1561 = 5532899169LL;
	static int32_t x1562 = 3081;
	uint16_t x1563 = UINT16_MAX;
	int32_t x1564 = -1;
	int32_t t139 = 10067;

    t139 = ((x1561>>(x1562/x1563))>x1564);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int32_t x1566 = 40528;
	volatile int64_t x1568 = -1LL;
	volatile int32_t t140 = 650691;

    t140 = ((x1565>>(x1566/x1567))>x1568);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x1573 = 857733436798626LLU;
	static uint8_t x1574 = 51U;
	volatile int8_t x1576 = INT8_MAX;
	int32_t t141 = -29435;

    t141 = ((x1573>>(x1574/x1575))>x1576);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x1579 = INT64_MIN;
	int8_t x1580 = INT8_MIN;
	volatile int32_t t142 = -38;

    t142 = ((x1577>>(x1578/x1579))>x1580);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x1617 = INT64_MAX;
	static int32_t x1618 = -1;
	int32_t x1619 = INT32_MAX;
	static int64_t x1620 = -1LL;
	volatile int32_t t143 = 1;

    t143 = ((x1617>>(x1618/x1619))>x1620);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x1622 = 134183279U;
	int64_t x1623 = INT64_MAX;
	static volatile uint64_t x1624 = 83112LLU;
	volatile int32_t t144 = 110042583;

    t144 = ((x1621>>(x1622/x1623))>x1624);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x1653 = 738275LLU;
	static uint32_t x1654 = 269U;
	int16_t x1656 = -1;
	volatile int32_t t145 = 8618;

    t145 = ((x1653>>(x1654/x1655))>x1656);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x1681 = UINT64_MAX;
	static int64_t x1682 = 11437888LL;
	static int32_t x1683 = INT32_MAX;
	volatile int32_t t146 = 8122898;

    t146 = ((x1681>>(x1682/x1683))>x1684);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1689 = INT32_MAX;
	int32_t x1690 = 1;
	uint8_t x1691 = UINT8_MAX;
	int32_t t147 = -995831;

    t147 = ((x1689>>(x1690/x1691))>x1692);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x1733 = 1U;
	volatile int64_t x1734 = INT64_MAX;
	static int64_t x1735 = INT64_MIN;
	int16_t x1736 = INT16_MIN;
	static int32_t t148 = -6999794;

    t148 = ((x1733>>(x1734/x1735))>x1736);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x1741 = 127U;
	int32_t x1742 = INT32_MIN;
	uint32_t x1743 = UINT32_MAX;
	static volatile int64_t x1744 = -401373488133373LL;
	volatile int32_t t149 = 3968;

    t149 = ((x1741>>(x1742/x1743))>x1744);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x1773 = INT16_MAX;
	uint16_t x1774 = UINT16_MAX;
	static uint32_t x1775 = 11984U;
	uint64_t x1776 = 47495LLU;

    t150 = ((x1773>>(x1774/x1775))>x1776);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x1785 = UINT64_MAX;
	volatile uint16_t x1786 = 453U;
	uint64_t x1787 = 3282183345865021264LLU;
	int32_t t151 = 472870;

    t151 = ((x1785>>(x1786/x1787))>x1788);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x1789 = INT8_MAX;
	uint64_t x1791 = 580186297LLU;
	int8_t x1792 = INT8_MIN;
	volatile int32_t t152 = 3379;

    t152 = ((x1789>>(x1790/x1791))>x1792);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x1793 = 4;
	uint32_t x1794 = 21509U;
	int32_t x1795 = -308577;
	uint8_t x1796 = 7U;
	static volatile int32_t t153 = -136911;

    t153 = ((x1793>>(x1794/x1795))>x1796);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x1813 = UINT32_MAX;

    t154 = ((x1813>>(x1814/x1815))>x1816);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x1829 = 539105280721201873LLU;
	int8_t x1830 = -1;

    t155 = ((x1829>>(x1830/x1831))>x1832);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x1833 = INT16_MAX;
	uint64_t x1834 = 14LLU;
	volatile uint16_t x1835 = 120U;
	uint64_t x1836 = 15059217516LLU;
	volatile int32_t t156 = -342719946;

    t156 = ((x1833>>(x1834/x1835))>x1836);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x1845 = INT32_MAX;
	int64_t x1846 = -1LL;
	volatile int8_t x1847 = -1;
	uint64_t x1848 = 20927436615309LLU;
	int32_t t157 = 10441088;

    t157 = ((x1845>>(x1846/x1847))>x1848);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1849 = INT64_MAX;
	static uint32_t x1850 = 2901837U;
	int32_t x1851 = INT32_MIN;
	int64_t x1852 = INT64_MIN;
	int32_t t158 = 3;

    t158 = ((x1849>>(x1850/x1851))>x1852);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x1865 = UINT32_MAX;
	int16_t x1868 = -1;

    t159 = ((x1865>>(x1866/x1867))>x1868);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x1869 = 0U;
	int16_t x1870 = -1;
	static int32_t t160 = 541728519;

    t160 = ((x1869>>(x1870/x1871))>x1872);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1881 = 6;
	uint8_t x1882 = 19U;
	int32_t x1883 = INT32_MIN;
	static int64_t x1884 = 63LL;
	int32_t t161 = 455537718;

    t161 = ((x1881>>(x1882/x1883))>x1884);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x1889 = UINT64_MAX;
	int32_t x1891 = 1896;
	int16_t x1892 = -1;
	static volatile int32_t t162 = -186547617;

    t162 = ((x1889>>(x1890/x1891))>x1892);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x1897 = INT64_MAX;
	int16_t x1898 = 4179;
	volatile int16_t x1900 = -1;

    t163 = ((x1897>>(x1898/x1899))>x1900);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x1925 = UINT16_MAX;
	int32_t x1926 = INT32_MAX;
	uint32_t x1928 = 1341507U;
	volatile int32_t t164 = 112970393;

    t164 = ((x1925>>(x1926/x1927))>x1928);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x1945 = 2576083320926246418LLU;
	uint64_t x1948 = UINT64_MAX;
	int32_t t165 = -26;

    t165 = ((x1945>>(x1946/x1947))>x1948);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x1977 = 29U;
	uint8_t x1978 = 0U;
	int64_t x1980 = INT64_MIN;
	volatile int32_t t166 = 61666;

    t166 = ((x1977>>(x1978/x1979))>x1980);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x2025 = UINT64_MAX;
	volatile uint32_t x2026 = 4U;
	uint16_t x2027 = 10U;
	static int64_t x2028 = 9513LL;
	int32_t t167 = -72;

    t167 = ((x2025>>(x2026/x2027))>x2028);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x2033 = INT8_MAX;
	uint32_t x2034 = 52419710U;
	int8_t x2035 = -1;
	static int8_t x2036 = INT8_MAX;
	static volatile int32_t t168 = -47129;

    t168 = ((x2033>>(x2034/x2035))>x2036);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x2041 = UINT32_MAX;
	static int32_t x2042 = 7;
	uint8_t x2043 = 10U;
	int16_t x2044 = INT16_MIN;
	int32_t t169 = -11706;

    t169 = ((x2041>>(x2042/x2043))>x2044);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x2049 = UINT32_MAX;
	static uint64_t x2050 = 0LLU;
	int16_t x2052 = -16380;
	volatile int32_t t170 = 15758;

    t170 = ((x2049>>(x2050/x2051))>x2052);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x2062 = 8505U;
	volatile int16_t x2063 = INT16_MIN;
	int32_t x2064 = 247272132;
	int32_t t171 = 3563;

    t171 = ((x2061>>(x2062/x2063))>x2064);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x2065 = UINT16_MAX;
	int16_t x2066 = -1;
	int32_t x2068 = -1;
	volatile int32_t t172 = -8964636;

    t172 = ((x2065>>(x2066/x2067))>x2068);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x2069 = INT64_MAX;
	int8_t x2070 = -27;
	int32_t x2071 = INT32_MIN;
	uint32_t x2072 = UINT32_MAX;
	int32_t t173 = 15713;

    t173 = ((x2069>>(x2070/x2071))>x2072);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x2077 = 52LLU;
	static uint64_t x2078 = 40324003446LLU;
	int16_t x2079 = -573;
	uint64_t x2080 = UINT64_MAX;
	int32_t t174 = -33898;

    t174 = ((x2077>>(x2078/x2079))>x2080);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x2093 = 26;
	int32_t x2094 = 0;
	int32_t x2095 = -310720;
	static volatile int64_t x2096 = -15149LL;
	int32_t t175 = -36410459;

    t175 = ((x2093>>(x2094/x2095))>x2096);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x2097 = INT16_MAX;
	static int64_t x2098 = -7LL;
	volatile int16_t x2100 = INT16_MIN;
	int32_t t176 = 0;

    t176 = ((x2097>>(x2098/x2099))>x2100);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x2109 = 12;
	uint64_t x2110 = UINT64_MAX;
	int32_t x2111 = -1;
	int64_t x2112 = 45003602LL;
	volatile int32_t t177 = 1;

    t177 = ((x2109>>(x2110/x2111))>x2112);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x2125 = INT64_MAX;
	static int32_t x2127 = -2;
	int64_t x2128 = INT64_MAX;

    t178 = ((x2125>>(x2126/x2127))>x2128);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x2133 = UINT8_MAX;
	uint64_t x2134 = 14302LLU;
	uint32_t x2135 = 870598365U;
	uint64_t x2136 = 48414292835022LLU;
	int32_t t179 = 1960691;

    t179 = ((x2133>>(x2134/x2135))>x2136);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x2146 = 16258041409383LLU;
	int64_t x2147 = INT64_MIN;
	volatile int32_t t180 = 26;

    t180 = ((x2145>>(x2146/x2147))>x2148);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x2178 = -1;
	static volatile uint16_t x2179 = 24U;
	static int16_t x2180 = 2364;
	static volatile int32_t t181 = -1692;

    t181 = ((x2177>>(x2178/x2179))>x2180);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x2186 = INT8_MAX;
	static int64_t x2187 = INT64_MIN;
	int32_t t182 = 11888622;

    t182 = ((x2185>>(x2186/x2187))>x2188);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x2197 = INT8_MAX;
	static uint32_t x2198 = 472258522U;
	volatile int16_t x2199 = INT16_MIN;
	int8_t x2200 = INT8_MIN;
	int32_t t183 = 33877;

    t183 = ((x2197>>(x2198/x2199))>x2200);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x2233 = 7789226574092LLU;
	uint8_t x2234 = 14U;
	int16_t x2235 = INT16_MAX;
	int32_t t184 = -6022227;

    t184 = ((x2233>>(x2234/x2235))>x2236);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x2238 = 3U;
	int64_t x2239 = -55687LL;
	volatile int32_t x2240 = -372;
	volatile int32_t t185 = 241012;

    t185 = ((x2237>>(x2238/x2239))>x2240);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x2241 = INT32_MAX;
	uint16_t x2244 = UINT16_MAX;
	volatile int32_t t186 = -1;

    t186 = ((x2241>>(x2242/x2243))>x2244);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x2265 = UINT32_MAX;
	uint32_t x2266 = 19U;
	int8_t x2267 = INT8_MIN;
	int64_t x2268 = 333322917720362137LL;
	volatile int32_t t187 = 478218513;

    t187 = ((x2265>>(x2266/x2267))>x2268);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x2269 = 32U;
	int64_t x2271 = INT64_MIN;

    t188 = ((x2269>>(x2270/x2271))>x2272);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x2285 = UINT32_MAX;
	volatile uint8_t x2286 = 12U;
	int32_t x2287 = INT32_MIN;
	volatile int8_t x2288 = INT8_MAX;
	int32_t t189 = -21;

    t189 = ((x2285>>(x2286/x2287))>x2288);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x2301 = 73U;
	int32_t x2302 = 1601;
	int16_t x2303 = INT16_MAX;
	static int32_t t190 = 7;

    t190 = ((x2301>>(x2302/x2303))>x2304);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int16_t x2313 = INT16_MAX;
	int32_t x2314 = -1;
	volatile uint64_t x2315 = UINT64_MAX;
	int32_t x2316 = INT32_MIN;
	volatile int32_t t191 = -6105;

    t191 = ((x2313>>(x2314/x2315))>x2316);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x2317 = 8358302583383LLU;
	int8_t x2318 = -1;
	int8_t x2320 = INT8_MAX;
	volatile int32_t t192 = 63;

    t192 = ((x2317>>(x2318/x2319))>x2320);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x2321 = 16288;
	uint64_t x2322 = 2193974319763510470LLU;
	int16_t x2323 = INT16_MIN;
	volatile int8_t x2324 = INT8_MIN;
	int32_t t193 = -114944;

    t193 = ((x2321>>(x2322/x2323))>x2324);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x2345 = INT32_MAX;
	uint32_t x2346 = 127825U;
	int32_t x2347 = -15;
	int32_t x2348 = INT32_MIN;
	volatile int32_t t194 = 196672;

    t194 = ((x2345>>(x2346/x2347))>x2348);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x2361 = 333LLU;
	uint8_t x2362 = 6U;
	int64_t x2364 = INT64_MIN;
	static int32_t t195 = 1330;

    t195 = ((x2361>>(x2362/x2363))>x2364);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x2365 = 11490U;
	int64_t x2366 = -47117851LL;
	int64_t x2368 = -1LL;
	static int32_t t196 = 44;

    t196 = ((x2365>>(x2366/x2367))>x2368);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x2373 = 28;
	uint32_t x2374 = 500U;
	static volatile int16_t x2375 = INT16_MAX;
	volatile uint16_t x2376 = 2502U;
	int32_t t197 = 6;

    t197 = ((x2373>>(x2374/x2375))>x2376);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x2383 = INT16_MAX;

    t198 = ((x2381>>(x2382/x2383))>x2384);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x2385 = INT8_MAX;
	int64_t x2386 = -1LL;
	int8_t x2388 = INT8_MIN;
	int32_t t199 = -1;

    t199 = ((x2385>>(x2386/x2387))>x2388);

    if (t199 != 1) { NG(); } else { ; }
	
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


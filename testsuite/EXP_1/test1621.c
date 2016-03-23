
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

volatile int64_t x42 = INT64_MIN;
int8_t x44 = 0;
int32_t t0 = 429999;
int64_t x122 = INT64_MAX;
volatile uint32_t t1 = 1421U;
uint16_t x148 = 3U;
int16_t x149 = -1792;
volatile uint64_t x273 = UINT64_MAX;
volatile int32_t t6 = -67;
int16_t x330 = -1;
int32_t x331 = INT32_MIN;
static volatile int32_t t8 = 205742;
static int64_t x374 = 2009794335250153LL;
uint8_t x434 = 0U;
int32_t x435 = -1;
int32_t x442 = -27;
volatile int32_t t14 = -234345534;
static volatile int8_t x450 = 27;
int32_t x451 = -5062;
static int64_t x595 = 660LL;
static volatile int8_t x596 = 0;
uint64_t x645 = 89LLU;
static int16_t x673 = INT16_MIN;
int8_t x803 = INT8_MIN;
static int32_t x804 = 1;
static volatile int32_t t21 = -659960;
static uint64_t x870 = UINT64_MAX;
int8_t x911 = INT8_MIN;
uint8_t x944 = 17U;
int8_t x1050 = INT8_MIN;
uint32_t x1095 = UINT32_MAX;
uint16_t x1096 = 3U;
uint16_t x1192 = 1U;
uint16_t x1227 = 2U;
uint8_t x1228 = 0U;
int32_t t30 = 56244303;
static int32_t x1239 = 615574656;
int8_t x1300 = 0;
int16_t x1321 = INT16_MIN;
volatile int64_t t37 = 690274793809205658LL;
int32_t t39 = -124;
uint32_t x1530 = 464830223U;
static volatile int8_t x1538 = -1;
int32_t t41 = 3726075;
static int32_t x1693 = INT32_MIN;
int8_t x1702 = -5;
static int32_t x1703 = -130;
static int32_t t48 = 1458;
static uint8_t x1844 = 3U;
uint8_t x1857 = 1U;
uint16_t x1946 = 1954U;
static volatile int64_t t56 = -514968LL;
int32_t x2159 = -81884;
int8_t x2185 = -29;
static uint32_t t60 = 4544875U;
int16_t x2263 = INT16_MAX;
uint16_t x2334 = 2784U;
static uint32_t x2343 = 410351U;
volatile int64_t t65 = 2020753LL;
static int64_t x2429 = INT64_MAX;
static int32_t t67 = 28761;
uint16_t x2499 = 7U;
int32_t x2500 = 12;
uint64_t x2514 = UINT64_MAX;
static uint16_t x2516 = 31U;
int32_t x2526 = -1;
int64_t x2533 = 12314119635459LL;
static int64_t x2561 = INT64_MAX;
uint8_t x2564 = 21U;
volatile int8_t x2593 = -1;
uint8_t x2606 = 5U;
volatile uint64_t t74 = 790775748LLU;
static int8_t x2649 = INT8_MIN;
int32_t t75 = -8835;
static uint32_t x2725 = 232340U;
static int16_t x2773 = 7;
int8_t x2837 = INT8_MIN;
uint32_t x2838 = UINT32_MAX;
uint8_t x2856 = 0U;
int32_t t82 = -1643764;
int8_t x2889 = INT8_MIN;
int64_t x2890 = INT64_MAX;
int32_t t85 = 2678898;
int8_t x2951 = 20;
uint8_t x2952 = 0U;
static int32_t t87 = -126839940;
static int16_t x3103 = 12;
uint64_t x3115 = 20019425783746550LLU;
uint32_t x3255 = 1U;
int16_t x3256 = 2;
uint32_t t95 = 2816096U;
static uint32_t x3353 = UINT32_MAX;
int16_t x3354 = 1;
uint16_t x3396 = 14U;
volatile int64_t t99 = -14535695LL;
volatile uint64_t x3523 = 1341930861278659LLU;
volatile uint16_t x3557 = UINT16_MAX;
volatile int32_t x3631 = 86495;
uint8_t x3632 = 0U;
int64_t x3799 = INT64_MIN;
int32_t x3813 = 43;
uint32_t x3815 = UINT32_MAX;
int16_t x3995 = INT16_MIN;
uint8_t x3996 = 13U;
static uint8_t x4062 = 111U;
uint8_t x4169 = 42U;
int8_t x4170 = INT8_MIN;
static int16_t x4171 = INT16_MIN;
int32_t x4182 = -31235225;
static uint8_t x4265 = UINT8_MAX;
uint8_t x4268 = 5U;
volatile int8_t x4310 = INT8_MAX;
int64_t x4311 = -28184289LL;
static volatile int16_t x4312 = 62;
volatile int8_t x4343 = INT8_MAX;
int8_t x4344 = 1;
volatile int8_t x4406 = 1;
int16_t x4407 = INT16_MIN;
int8_t x4411 = -3;
uint64_t x4451 = UINT64_MAX;
static uint32_t x4452 = 26U;
int8_t x4647 = INT8_MAX;
uint32_t x4648 = 1U;
int8_t x4725 = INT8_MIN;
int32_t x4726 = -1;
static volatile uint32_t x4727 = 199U;
uint32_t t132 = 1359012U;
uint16_t x4817 = UINT16_MAX;
uint16_t x4820 = 9U;
uint32_t t134 = 237752U;
uint16_t x4859 = 690U;
volatile int32_t t135 = -2;
int64_t x4875 = 8880LL;
int64_t x4899 = -50564446711LL;
uint8_t x4900 = 3U;
int64_t t137 = -79717099LL;
uint8_t x4916 = 0U;
volatile int64_t x4982 = INT64_MAX;
static volatile uint8_t x4988 = 1U;
static volatile uint16_t x5130 = 8U;
uint8_t x5132 = 11U;
volatile int16_t x5177 = INT16_MAX;
uint64_t x5178 = 15800779886143315LLU;
static int64_t x5179 = INT64_MAX;
int16_t x5226 = INT16_MIN;
int16_t x5227 = 1;
static volatile int8_t x5253 = INT8_MIN;
uint16_t x5254 = 15U;
volatile uint64_t t149 = 4065796218LLU;
int32_t x5313 = 228963692;
int32_t t154 = -121171;
uint16_t x5493 = 54U;
uint16_t x5498 = 6458U;
int64_t x5499 = INT64_MAX;
int8_t x5531 = -49;
int16_t x5532 = 1;
int16_t x5572 = 1;
volatile uint64_t x5589 = UINT64_MAX;
int64_t x5590 = -1LL;
int64_t x5601 = 780LL;
uint8_t x5606 = UINT8_MAX;
int8_t x5607 = INT8_MIN;
int16_t x5789 = INT16_MIN;
uint64_t x5807 = UINT64_MAX;
uint8_t x5826 = 28U;
int16_t x5835 = INT16_MAX;
volatile uint32_t x5871 = UINT32_MAX;
int8_t x5974 = INT8_MIN;
uint8_t x5976 = 2U;
uint8_t x6036 = 6U;
volatile int16_t x6095 = INT16_MAX;
uint8_t x6164 = 7U;
int64_t x6245 = INT64_MIN;
int32_t t181 = 6;
uint32_t x6325 = 217192588U;
uint16_t x6329 = 1594U;
static int32_t x6345 = 20402883;
static uint8_t x6346 = 42U;
uint8_t x6582 = 0U;
int32_t t189 = 15645;
int8_t x6627 = INT8_MIN;
uint16_t x6694 = 86U;
uint8_t x6722 = 70U;
int8_t x6731 = 1;
uint32_t x6781 = UINT32_MAX;
int64_t x7023 = INT64_MIN;
static int64_t x7027 = INT64_MAX;


void f0(void) {
    	uint64_t x41 = 2LLU;
	int16_t x43 = INT16_MAX;

    t0 = (((x41>x42)/x43)>>x44);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x121 = 109;
	uint32_t x123 = 34U;
	volatile uint8_t x124 = 25U;

    t1 = (((x121>x122)/x123)>>x124);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x133 = -3975;
	int16_t x134 = INT16_MIN;
	uint64_t x135 = UINT64_MAX;
	uint16_t x136 = 1U;
	volatile uint64_t t2 = 155805614757944655LLU;

    t2 = (((x133>x134)/x135)>>x136);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x145 = UINT8_MAX;
	uint64_t x146 = 37935890853072053LLU;
	volatile int32_t x147 = INT32_MAX;
	int32_t t3 = 1;

    t3 = (((x145>x146)/x147)>>x148);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x150 = 0U;
	int64_t x151 = INT64_MAX;
	uint8_t x152 = 40U;
	int64_t t4 = 556789573972563130LL;

    t4 = (((x149>x150)/x151)>>x152);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x229 = 91U;
	int64_t x230 = INT64_MIN;
	static volatile int16_t x231 = INT16_MAX;
	uint32_t x232 = 3U;
	volatile int32_t t5 = 528799901;

    t5 = (((x229>x230)/x231)>>x232);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x274 = INT8_MIN;
	uint16_t x275 = 5U;
	static int64_t x276 = 6LL;

    t6 = (((x273>x274)/x275)>>x276);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x309 = 2055284;
	static int8_t x310 = INT8_MIN;
	int8_t x311 = INT8_MAX;
	static uint16_t x312 = 1U;
	int32_t t7 = -3104;

    t7 = (((x309>x310)/x311)>>x312);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x329 = UINT32_MAX;
	static uint8_t x332 = 5U;

    t8 = (((x329>x330)/x331)>>x332);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x341 = 6U;
	uint16_t x342 = 2221U;
	uint64_t x343 = UINT64_MAX;
	int8_t x344 = 6;
	static volatile uint64_t t9 = 18LLU;

    t9 = (((x341>x342)/x343)>>x344);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x353 = -1535882LL;
	int16_t x354 = -7495;
	int64_t x355 = INT64_MIN;
	uint16_t x356 = 0U;
	static volatile int64_t t10 = -860375475734LL;

    t10 = (((x353>x354)/x355)>>x356);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x373 = UINT16_MAX;
	int64_t x375 = 172222611LL;
	uint8_t x376 = 0U;
	int64_t t11 = 548945270784862LL;

    t11 = (((x373>x374)/x375)>>x376);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x413 = -1;
	int8_t x414 = 1;
	volatile int16_t x415 = 295;
	volatile uint16_t x416 = 7U;
	volatile int32_t t12 = 6723649;

    t12 = (((x413>x414)/x415)>>x416);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x433 = INT8_MIN;
	uint8_t x436 = 3U;
	int32_t t13 = 0;

    t13 = (((x433>x434)/x435)>>x436);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x441 = UINT64_MAX;
	volatile int8_t x443 = -5;
	volatile int8_t x444 = 0;

    t14 = (((x441>x442)/x443)>>x444);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x449 = 97180505906LLU;
	int16_t x452 = 1;
	int32_t t15 = 3576960;

    t15 = (((x449>x450)/x451)>>x452);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x593 = INT16_MIN;
	int32_t x594 = INT32_MIN;
	volatile int64_t t16 = 51849835157LL;

    t16 = (((x593>x594)/x595)>>x596);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x637 = 1;
	int64_t x638 = 121062LL;
	static int64_t x639 = 68065951181129LL;
	int16_t x640 = 2;
	int64_t t17 = 2028LL;

    t17 = (((x637>x638)/x639)>>x640);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x646 = -1;
	int32_t x647 = INT32_MIN;
	volatile uint32_t x648 = 4U;
	volatile int32_t t18 = 88207101;

    t18 = (((x645>x646)/x647)>>x648);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x674 = 5U;
	int16_t x675 = 456;
	uint8_t x676 = 1U;
	static volatile int32_t t19 = 3;

    t19 = (((x673>x674)/x675)>>x676);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x689 = -3444;
	int8_t x690 = -1;
	uint8_t x691 = 9U;
	static uint32_t x692 = 1U;
	int32_t t20 = 6;

    t20 = (((x689>x690)/x691)>>x692);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint16_t x801 = 404U;
	int8_t x802 = INT8_MAX;

    t21 = (((x801>x802)/x803)>>x804);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x865 = INT32_MAX;
	int16_t x866 = -3585;
	int32_t x867 = INT32_MIN;
	uint64_t x868 = 2LLU;
	int32_t t22 = 147392;

    t22 = (((x865>x866)/x867)>>x868);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int8_t x869 = -3;
	int64_t x871 = -1LL;
	static uint32_t x872 = 7U;
	volatile int64_t t23 = 87255293091657LL;

    t23 = (((x869>x870)/x871)>>x872);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x909 = 7U;
	int64_t x910 = -1LL;
	static volatile uint8_t x912 = 26U;
	volatile int32_t t24 = 44173358;

    t24 = (((x909>x910)/x911)>>x912);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x941 = 3306;
	int16_t x942 = -4;
	uint8_t x943 = 66U;
	int32_t t25 = -150201744;

    t25 = (((x941>x942)/x943)>>x944);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x1049 = 44;
	uint32_t x1051 = 1001791U;
	uint8_t x1052 = 0U;
	volatile uint32_t t26 = 278U;

    t26 = (((x1049>x1050)/x1051)>>x1052);

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x1093 = 123023546U;
	uint16_t x1094 = 38U;
	volatile uint32_t t27 = 2443U;

    t27 = (((x1093>x1094)/x1095)>>x1096);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x1137 = INT16_MIN;
	int8_t x1138 = INT8_MIN;
	static int8_t x1139 = INT8_MIN;
	uint16_t x1140 = 2U;
	static int32_t t28 = 1;

    t28 = (((x1137>x1138)/x1139)>>x1140);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x1189 = -8161481943232LL;
	uint8_t x1190 = 47U;
	volatile int8_t x1191 = -1;
	volatile int32_t t29 = 807545;

    t29 = (((x1189>x1190)/x1191)>>x1192);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x1225 = UINT32_MAX;
	volatile int32_t x1226 = 1;

    t30 = (((x1225>x1226)/x1227)>>x1228);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x1237 = 59U;
	volatile int64_t x1238 = INT64_MAX;
	int8_t x1240 = 1;
	int32_t t31 = -12;

    t31 = (((x1237>x1238)/x1239)>>x1240);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x1297 = 328LL;
	int8_t x1298 = -1;
	volatile uint16_t x1299 = 1U;
	int32_t t32 = -2;

    t32 = (((x1297>x1298)/x1299)>>x1300);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x1322 = -1LL;
	volatile int32_t x1323 = -163;
	volatile int64_t x1324 = 0LL;
	static int32_t t33 = 97;

    t33 = (((x1321>x1322)/x1323)>>x1324);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x1353 = INT8_MIN;
	static int16_t x1354 = INT16_MAX;
	uint64_t x1355 = UINT64_MAX;
	static volatile int32_t x1356 = 0;
	volatile uint64_t t34 = 1LLU;

    t34 = (((x1353>x1354)/x1355)>>x1356);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x1377 = -19615LL;
	int32_t x1378 = -1;
	int16_t x1379 = INT16_MIN;
	uint8_t x1380 = 1U;
	int32_t t35 = 15629646;

    t35 = (((x1377>x1378)/x1379)>>x1380);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x1393 = INT64_MIN;
	int8_t x1394 = -10;
	uint16_t x1395 = UINT16_MAX;
	uint16_t x1396 = 1U;
	int32_t t36 = -12536;

    t36 = (((x1393>x1394)/x1395)>>x1396);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x1457 = 2LL;
	int16_t x1458 = -21;
	static int64_t x1459 = INT64_MAX;
	int8_t x1460 = 7;

    t37 = (((x1457>x1458)/x1459)>>x1460);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x1489 = 1U;
	volatile int16_t x1490 = -1;
	uint32_t x1491 = 252U;
	uint8_t x1492 = 29U;
	uint32_t t38 = 1998576979U;

    t38 = (((x1489>x1490)/x1491)>>x1492);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x1517 = -1LL;
	uint32_t x1518 = 94346U;
	static volatile int16_t x1519 = INT16_MIN;
	int8_t x1520 = 24;

    t39 = (((x1517>x1518)/x1519)>>x1520);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x1529 = -28;
	int32_t x1531 = INT32_MIN;
	static int8_t x1532 = 12;
	int32_t t40 = -44931310;

    t40 = (((x1529>x1530)/x1531)>>x1532);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x1537 = INT8_MIN;
	int32_t x1539 = INT32_MIN;
	int32_t x1540 = 4;

    t41 = (((x1537>x1538)/x1539)>>x1540);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x1605 = 9U;
	uint64_t x1606 = 3670204719988064259LLU;
	static int32_t x1607 = INT32_MIN;
	int8_t x1608 = 14;
	int32_t t42 = 0;

    t42 = (((x1605>x1606)/x1607)>>x1608);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x1641 = 192;
	int32_t x1642 = 1;
	uint16_t x1643 = 3561U;
	static int8_t x1644 = 30;
	int32_t t43 = -263105;

    t43 = (((x1641>x1642)/x1643)>>x1644);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x1661 = -1;
	int64_t x1662 = -1LL;
	int32_t x1663 = INT32_MIN;
	int8_t x1664 = 4;
	volatile int32_t t44 = -195783470;

    t44 = (((x1661>x1662)/x1663)>>x1664);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x1673 = 0;
	uint8_t x1674 = UINT8_MAX;
	int32_t x1675 = -1;
	static uint16_t x1676 = 10U;
	int32_t t45 = 6641010;

    t45 = (((x1673>x1674)/x1675)>>x1676);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int16_t x1694 = -1;
	uint8_t x1695 = 50U;
	volatile int16_t x1696 = 1;
	volatile int32_t t46 = 0;

    t46 = (((x1693>x1694)/x1695)>>x1696);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x1701 = INT8_MAX;
	static uint32_t x1704 = 24U;
	static volatile int32_t t47 = 731285;

    t47 = (((x1701>x1702)/x1703)>>x1704);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x1781 = 1;
	int16_t x1782 = -223;
	volatile int32_t x1783 = INT32_MAX;
	int64_t x1784 = 1LL;

    t48 = (((x1781>x1782)/x1783)>>x1784);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x1785 = 2916431634249LLU;
	static volatile int32_t x1786 = INT32_MAX;
	static int64_t x1787 = INT64_MAX;
	uint32_t x1788 = 8U;
	int64_t t49 = 12188061478LL;

    t49 = (((x1785>x1786)/x1787)>>x1788);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x1841 = -3831029;
	int64_t x1842 = INT64_MIN;
	static volatile int64_t x1843 = INT64_MIN;
	int64_t t50 = -4LL;

    t50 = (((x1841>x1842)/x1843)>>x1844);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x1858 = 481233LL;
	uint32_t x1859 = 9921U;
	int16_t x1860 = 7;
	volatile uint32_t t51 = 49214U;

    t51 = (((x1857>x1858)/x1859)>>x1860);

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x1929 = -1;
	volatile int16_t x1930 = -1;
	uint16_t x1931 = 6851U;
	int8_t x1932 = 2;
	static int32_t t52 = -190;

    t52 = (((x1929>x1930)/x1931)>>x1932);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x1945 = -1;
	volatile uint32_t x1947 = UINT32_MAX;
	static uint16_t x1948 = 23U;
	volatile uint32_t t53 = 6U;

    t53 = (((x1945>x1946)/x1947)>>x1948);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x2053 = INT64_MIN;
	static uint16_t x2054 = 23U;
	uint32_t x2055 = 8594798U;
	int16_t x2056 = 10;
	uint32_t t54 = 493547U;

    t54 = (((x2053>x2054)/x2055)>>x2056);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x2065 = UINT8_MAX;
	uint32_t x2066 = UINT32_MAX;
	int8_t x2067 = INT8_MAX;
	uint16_t x2068 = 21U;
	volatile int32_t t55 = -9;

    t55 = (((x2065>x2066)/x2067)>>x2068);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x2081 = UINT64_MAX;
	uint8_t x2082 = 0U;
	int64_t x2083 = 190171103809LL;
	uint16_t x2084 = 7U;

    t56 = (((x2081>x2082)/x2083)>>x2084);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x2133 = INT16_MAX;
	uint16_t x2134 = 1374U;
	int32_t x2135 = INT32_MIN;
	static uint8_t x2136 = 7U;
	static int32_t t57 = 3;

    t57 = (((x2133>x2134)/x2135)>>x2136);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x2157 = 23450918;
	int16_t x2158 = INT16_MIN;
	uint8_t x2160 = 5U;
	int32_t t58 = 29365;

    t58 = (((x2157>x2158)/x2159)>>x2160);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x2186 = -1086;
	static int8_t x2187 = INT8_MAX;
	uint16_t x2188 = 15U;
	int32_t t59 = 1;

    t59 = (((x2185>x2186)/x2187)>>x2188);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x2217 = INT64_MIN;
	volatile uint16_t x2218 = UINT16_MAX;
	volatile uint32_t x2219 = UINT32_MAX;
	uint8_t x2220 = 7U;

    t60 = (((x2217>x2218)/x2219)>>x2220);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x2261 = -1;
	volatile int8_t x2262 = 26;
	uint16_t x2264 = 6U;
	static volatile int32_t t61 = -39;

    t61 = (((x2261>x2262)/x2263)>>x2264);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x2325 = INT8_MIN;
	uint8_t x2326 = 83U;
	uint16_t x2327 = UINT16_MAX;
	volatile int16_t x2328 = 0;
	int32_t t62 = 45255220;

    t62 = (((x2325>x2326)/x2327)>>x2328);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x2333 = INT16_MIN;
	int32_t x2335 = -1313;
	uint8_t x2336 = 4U;
	volatile int32_t t63 = 165;

    t63 = (((x2333>x2334)/x2335)>>x2336);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x2341 = INT16_MIN;
	int32_t x2342 = -7;
	uint32_t x2344 = 3U;
	static volatile uint32_t t64 = 680U;

    t64 = (((x2341>x2342)/x2343)>>x2344);

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x2417 = 48U;
	static int8_t x2418 = -3;
	int64_t x2419 = INT64_MIN;
	volatile int8_t x2420 = 6;

    t65 = (((x2417>x2418)/x2419)>>x2420);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x2430 = 4154752602000755LLU;
	uint32_t x2431 = 195452266U;
	uint32_t x2432 = 13U;
	volatile uint32_t t66 = 8631977U;

    t66 = (((x2429>x2430)/x2431)>>x2432);

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x2465 = INT8_MIN;
	int32_t x2466 = INT32_MIN;
	int16_t x2467 = INT16_MIN;
	int32_t x2468 = 5;

    t67 = (((x2465>x2466)/x2467)>>x2468);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x2497 = -396087276;
	uint16_t x2498 = UINT16_MAX;
	volatile int32_t t68 = 40642;

    t68 = (((x2497>x2498)/x2499)>>x2500);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x2513 = UINT8_MAX;
	uint64_t x2515 = 1019LLU;
	uint64_t t69 = 51340794LLU;

    t69 = (((x2513>x2514)/x2515)>>x2516);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x2525 = UINT64_MAX;
	static int32_t x2527 = INT32_MAX;
	uint16_t x2528 = 5U;
	int32_t t70 = 85783027;

    t70 = (((x2525>x2526)/x2527)>>x2528);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x2534 = 3860;
	int32_t x2535 = INT32_MIN;
	static uint16_t x2536 = 5U;
	volatile int32_t t71 = -1968;

    t71 = (((x2533>x2534)/x2535)>>x2536);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x2562 = 0;
	static int32_t x2563 = -2;
	volatile int32_t t72 = -3521898;

    t72 = (((x2561>x2562)/x2563)>>x2564);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x2594 = UINT32_MAX;
	static int16_t x2595 = 66;
	volatile uint32_t x2596 = 10U;
	int32_t t73 = 627;

    t73 = (((x2593>x2594)/x2595)>>x2596);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x2605 = INT8_MIN;
	uint64_t x2607 = 124949538990140LLU;
	uint16_t x2608 = 0U;

    t74 = (((x2605>x2606)/x2607)>>x2608);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x2650 = 53U;
	uint8_t x2651 = 1U;
	volatile int32_t x2652 = 11;

    t75 = (((x2649>x2650)/x2651)>>x2652);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x2701 = 6LLU;
	int32_t x2702 = -17340;
	int64_t x2703 = -1LL;
	uint8_t x2704 = 3U;
	int64_t t76 = -6LL;

    t76 = (((x2701>x2702)/x2703)>>x2704);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x2726 = INT32_MIN;
	static int32_t x2727 = INT32_MIN;
	volatile uint16_t x2728 = 20U;
	int32_t t77 = 1852;

    t77 = (((x2725>x2726)/x2727)>>x2728);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x2774 = INT8_MIN;
	uint16_t x2775 = UINT16_MAX;
	static uint8_t x2776 = 12U;
	int32_t t78 = -18576644;

    t78 = (((x2773>x2774)/x2775)>>x2776);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x2797 = 4829737U;
	int64_t x2798 = INT64_MIN;
	static int8_t x2799 = INT8_MAX;
	volatile int16_t x2800 = 1;
	volatile int32_t t79 = -7;

    t79 = (((x2797>x2798)/x2799)>>x2800);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x2839 = INT16_MIN;
	int32_t x2840 = 1;
	int32_t t80 = -12668808;

    t80 = (((x2837>x2838)/x2839)>>x2840);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x2849 = -3;
	uint64_t x2850 = 87807LLU;
	int16_t x2851 = INT16_MIN;
	volatile uint8_t x2852 = 1U;
	volatile int32_t t81 = 2;

    t81 = (((x2849>x2850)/x2851)>>x2852);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x2853 = -1;
	static int32_t x2854 = 1799;
	int8_t x2855 = INT8_MIN;

    t82 = (((x2853>x2854)/x2855)>>x2856);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int64_t x2861 = -1LL;
	int64_t x2862 = -1LL;
	int64_t x2863 = 1451700274911LL;
	int8_t x2864 = 32;
	int64_t t83 = -101415835070210485LL;

    t83 = (((x2861>x2862)/x2863)>>x2864);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int32_t x2891 = 354274636;
	int8_t x2892 = 6;
	int32_t t84 = -96;

    t84 = (((x2889>x2890)/x2891)>>x2892);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x2909 = 361694872579361LLU;
	static volatile int8_t x2910 = 3;
	int32_t x2911 = INT32_MIN;
	volatile int16_t x2912 = 26;

    t85 = (((x2909>x2910)/x2911)>>x2912);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x2933 = 69922LLU;
	uint64_t x2934 = 24399294590264LLU;
	static volatile uint64_t x2935 = UINT64_MAX;
	int32_t x2936 = 26;
	uint64_t t86 = 17017688LLU;

    t86 = (((x2933>x2934)/x2935)>>x2936);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x2949 = UINT32_MAX;
	volatile int8_t x2950 = INT8_MIN;

    t87 = (((x2949>x2950)/x2951)>>x2952);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x3001 = -345;
	static volatile uint8_t x3002 = UINT8_MAX;
	volatile int16_t x3003 = INT16_MIN;
	static uint8_t x3004 = 13U;
	static volatile int32_t t88 = -38;

    t88 = (((x3001>x3002)/x3003)>>x3004);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x3025 = -15;
	uint16_t x3026 = UINT16_MAX;
	int16_t x3027 = -1;
	uint32_t x3028 = 18U;
	static volatile int32_t t89 = -1;

    t89 = (((x3025>x3026)/x3027)>>x3028);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x3101 = 78U;
	uint64_t x3102 = 4133585LLU;
	static int8_t x3104 = 0;
	static volatile int32_t t90 = 3;

    t90 = (((x3101>x3102)/x3103)>>x3104);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint16_t x3113 = UINT16_MAX;
	uint8_t x3114 = 1U;
	int64_t x3116 = 1LL;
	uint64_t t91 = 45682919LLU;

    t91 = (((x3113>x3114)/x3115)>>x3116);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x3153 = UINT16_MAX;
	uint8_t x3154 = 1U;
	int32_t x3155 = -39;
	uint8_t x3156 = 2U;
	volatile int32_t t92 = 203;

    t92 = (((x3153>x3154)/x3155)>>x3156);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x3169 = INT16_MAX;
	volatile int16_t x3170 = INT16_MAX;
	int64_t x3171 = 1LL;
	uint32_t x3172 = 14U;
	int64_t t93 = -220870100437LL;

    t93 = (((x3169>x3170)/x3171)>>x3172);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x3205 = -1728;
	int16_t x3206 = INT16_MAX;
	uint16_t x3207 = UINT16_MAX;
	uint16_t x3208 = 3U;
	static int32_t t94 = -2829981;

    t94 = (((x3205>x3206)/x3207)>>x3208);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x3253 = 3;
	static uint32_t x3254 = UINT32_MAX;

    t95 = (((x3253>x3254)/x3255)>>x3256);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x3273 = INT64_MIN;
	uint16_t x3274 = 5U;
	int64_t x3275 = INT64_MIN;
	volatile uint8_t x3276 = 0U;
	volatile int64_t t96 = -17099169017LL;

    t96 = (((x3273>x3274)/x3275)>>x3276);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x3355 = INT64_MAX;
	static volatile int8_t x3356 = 1;
	volatile int64_t t97 = 39880839557538603LL;

    t97 = (((x3353>x3354)/x3355)>>x3356);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x3393 = 1;
	int64_t x3394 = INT64_MAX;
	static int32_t x3395 = 1012542469;
	volatile int32_t t98 = -3045;

    t98 = (((x3393>x3394)/x3395)>>x3396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x3405 = INT32_MAX;
	volatile uint64_t x3406 = UINT64_MAX;
	int64_t x3407 = -27726665020LL;
	volatile int16_t x3408 = 1;

    t99 = (((x3405>x3406)/x3407)>>x3408);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x3517 = 199810377654577LLU;
	volatile uint8_t x3518 = 3U;
	static int8_t x3519 = INT8_MIN;
	static uint16_t x3520 = 0U;
	int32_t t100 = 7;

    t100 = (((x3517>x3518)/x3519)>>x3520);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x3521 = 12632352643733243LLU;
	static int8_t x3522 = INT8_MIN;
	uint8_t x3524 = 39U;
	volatile uint64_t t101 = 1110LLU;

    t101 = (((x3521>x3522)/x3523)>>x3524);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x3541 = -1;
	volatile int32_t x3542 = -1;
	volatile int64_t x3543 = INT64_MIN;
	int8_t x3544 = 0;
	static volatile int64_t t102 = -3829648607099LL;

    t102 = (((x3541>x3542)/x3543)>>x3544);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x3558 = INT8_MAX;
	uint32_t x3559 = 21091012U;
	int8_t x3560 = 0;
	volatile uint32_t t103 = 0U;

    t103 = (((x3557>x3558)/x3559)>>x3560);

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x3565 = INT32_MIN;
	int16_t x3566 = -3871;
	volatile uint32_t x3567 = 672231088U;
	volatile uint8_t x3568 = 4U;
	uint32_t t104 = 672U;

    t104 = (((x3565>x3566)/x3567)>>x3568);

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x3629 = INT16_MIN;
	uint64_t x3630 = 8561LLU;
	int32_t t105 = 89;

    t105 = (((x3629>x3630)/x3631)>>x3632);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x3653 = -17968885381548166LL;
	volatile int8_t x3654 = INT8_MAX;
	uint8_t x3655 = UINT8_MAX;
	volatile uint16_t x3656 = 14U;
	volatile int32_t t106 = 37;

    t106 = (((x3653>x3654)/x3655)>>x3656);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x3745 = INT16_MIN;
	static uint64_t x3746 = UINT64_MAX;
	static volatile int32_t x3747 = INT32_MIN;
	static int16_t x3748 = 1;
	int32_t t107 = 61832;

    t107 = (((x3745>x3746)/x3747)>>x3748);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x3797 = INT32_MAX;
	int8_t x3798 = INT8_MAX;
	uint8_t x3800 = 61U;
	volatile int64_t t108 = -1189163819621LL;

    t108 = (((x3797>x3798)/x3799)>>x3800);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x3814 = INT16_MAX;
	int16_t x3816 = 1;
	uint32_t t109 = 2U;

    t109 = (((x3813>x3814)/x3815)>>x3816);

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x3841 = INT64_MIN;
	uint8_t x3842 = 76U;
	int16_t x3843 = -1;
	uint16_t x3844 = 6U;
	int32_t t110 = -123981125;

    t110 = (((x3841>x3842)/x3843)>>x3844);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x3889 = -1;
	int32_t x3890 = INT32_MIN;
	static int64_t x3891 = INT64_MIN;
	int64_t x3892 = 10LL;
	int64_t t111 = -56384758600055937LL;

    t111 = (((x3889>x3890)/x3891)>>x3892);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x3925 = 197552514234949924LLU;
	volatile int8_t x3926 = INT8_MAX;
	int64_t x3927 = INT64_MIN;
	int32_t x3928 = 13;
	static volatile int64_t t112 = 1LL;

    t112 = (((x3925>x3926)/x3927)>>x3928);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x3993 = 62U;
	uint8_t x3994 = 44U;
	int32_t t113 = -13315452;

    t113 = (((x3993>x3994)/x3995)>>x3996);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x4021 = 17;
	static int64_t x4022 = INT64_MIN;
	uint64_t x4023 = UINT64_MAX;
	static uint16_t x4024 = 0U;
	volatile uint64_t t114 = 1LLU;

    t114 = (((x4021>x4022)/x4023)>>x4024);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x4037 = INT8_MIN;
	int64_t x4038 = 15606319865688LL;
	int8_t x4039 = INT8_MIN;
	volatile int16_t x4040 = 0;
	int32_t t115 = -4360734;

    t115 = (((x4037>x4038)/x4039)>>x4040);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x4061 = INT16_MIN;
	static uint16_t x4063 = 613U;
	static int8_t x4064 = 0;
	volatile int32_t t116 = -14909;

    t116 = (((x4061>x4062)/x4063)>>x4064);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x4121 = INT16_MIN;
	int8_t x4122 = INT8_MAX;
	int32_t x4123 = 1;
	int8_t x4124 = 1;
	int32_t t117 = -1;

    t117 = (((x4121>x4122)/x4123)>>x4124);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x4157 = INT32_MAX;
	int8_t x4158 = 27;
	volatile uint16_t x4159 = 2U;
	static uint32_t x4160 = 11U;
	int32_t t118 = -624;

    t118 = (((x4157>x4158)/x4159)>>x4160);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x4161 = 12425U;
	int8_t x4162 = INT8_MIN;
	int64_t x4163 = -1LL;
	volatile uint32_t x4164 = 1U;
	volatile int64_t t119 = 440086307114387347LL;

    t119 = (((x4161>x4162)/x4163)>>x4164);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x4172 = 5U;
	int32_t t120 = -598037029;

    t120 = (((x4169>x4170)/x4171)>>x4172);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x4181 = INT64_MIN;
	volatile int64_t x4183 = -176LL;
	volatile uint8_t x4184 = 5U;
	volatile int64_t t121 = -76626279962LL;

    t121 = (((x4181>x4182)/x4183)>>x4184);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x4266 = INT32_MIN;
	volatile int64_t x4267 = INT64_MIN;
	static int64_t t122 = -3670LL;

    t122 = (((x4265>x4266)/x4267)>>x4268);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x4309 = 13U;
	int64_t t123 = -1726003358635LL;

    t123 = (((x4309>x4310)/x4311)>>x4312);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x4341 = INT32_MAX;
	static int8_t x4342 = INT8_MAX;
	volatile int32_t t124 = -1;

    t124 = (((x4341>x4342)/x4343)>>x4344);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x4405 = -236416;
	uint8_t x4408 = 1U;
	static int32_t t125 = 2522390;

    t125 = (((x4405>x4406)/x4407)>>x4408);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x4409 = INT16_MIN;
	int64_t x4410 = -1LL;
	uint8_t x4412 = 9U;
	volatile int32_t t126 = 82;

    t126 = (((x4409>x4410)/x4411)>>x4412);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x4449 = INT64_MAX;
	volatile int16_t x4450 = -1;
	uint64_t t127 = 464327425880LLU;

    t127 = (((x4449>x4450)/x4451)>>x4452);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x4477 = INT64_MIN;
	int64_t x4478 = -1LL;
	int16_t x4479 = INT16_MIN;
	volatile int8_t x4480 = 1;
	int32_t t128 = 55;

    t128 = (((x4477>x4478)/x4479)>>x4480);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x4497 = 1U;
	static volatile uint64_t x4498 = 135854715LLU;
	static volatile int8_t x4499 = INT8_MIN;
	static volatile int32_t x4500 = 5;
	volatile int32_t t129 = -126756607;

    t129 = (((x4497>x4498)/x4499)>>x4500);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x4525 = 9838LLU;
	uint32_t x4526 = 1961095U;
	int64_t x4527 = -1LL;
	uint32_t x4528 = 1U;
	volatile int64_t t130 = -365LL;

    t130 = (((x4525>x4526)/x4527)>>x4528);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x4645 = 161070739802LLU;
	volatile int64_t x4646 = -14645203171981LL;
	int32_t t131 = -993968;

    t131 = (((x4645>x4646)/x4647)>>x4648);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x4728 = 14U;

    t132 = (((x4725>x4726)/x4727)>>x4728);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x4733 = INT16_MIN;
	static volatile int64_t x4734 = 497770391466947LL;
	volatile int64_t x4735 = -1LL;
	uint8_t x4736 = 1U;
	volatile int64_t t133 = 67LL;

    t133 = (((x4733>x4734)/x4735)>>x4736);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x4818 = 178U;
	static uint32_t x4819 = UINT32_MAX;

    t134 = (((x4817>x4818)/x4819)>>x4820);

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x4857 = -515178657872LL;
	volatile int8_t x4858 = -1;
	static int16_t x4860 = 1;

    t135 = (((x4857>x4858)/x4859)>>x4860);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x4873 = INT64_MIN;
	int16_t x4874 = 1;
	uint8_t x4876 = 1U;
	static volatile int64_t t136 = -163301872LL;

    t136 = (((x4873>x4874)/x4875)>>x4876);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x4897 = INT32_MIN;
	int32_t x4898 = INT32_MAX;

    t137 = (((x4897>x4898)/x4899)>>x4900);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x4901 = -1;
	int16_t x4902 = INT16_MIN;
	uint64_t x4903 = UINT64_MAX;
	int8_t x4904 = 1;
	volatile uint64_t t138 = 1152353LLU;

    t138 = (((x4901>x4902)/x4903)>>x4904);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x4913 = INT8_MAX;
	volatile int64_t x4914 = -1LL;
	static int64_t x4915 = 46403932856LL;
	int64_t t139 = -2732951LL;

    t139 = (((x4913>x4914)/x4915)>>x4916);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint32_t x4981 = 4722U;
	uint32_t x4983 = 23U;
	int16_t x4984 = 2;
	static uint32_t t140 = 673U;

    t140 = (((x4981>x4982)/x4983)>>x4984);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x4985 = -1;
	static int64_t x4986 = INT64_MAX;
	int64_t x4987 = -1LL;
	volatile int64_t t141 = -9LL;

    t141 = (((x4985>x4986)/x4987)>>x4988);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x5021 = -119115254894LL;
	int8_t x5022 = INT8_MAX;
	int64_t x5023 = -1LL;
	volatile int16_t x5024 = 3;
	int64_t t142 = -9598LL;

    t142 = (((x5021>x5022)/x5023)>>x5024);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x5069 = INT64_MIN;
	volatile uint32_t x5070 = 830165401U;
	uint64_t x5071 = 409211LLU;
	uint8_t x5072 = 0U;
	uint64_t t143 = 0LLU;

    t143 = (((x5069>x5070)/x5071)>>x5072);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x5113 = INT8_MIN;
	static volatile uint64_t x5114 = 385378126297226512LLU;
	static uint64_t x5115 = UINT64_MAX;
	volatile uint8_t x5116 = 0U;
	volatile uint64_t t144 = 197575066173974LLU;

    t144 = (((x5113>x5114)/x5115)>>x5116);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x5129 = -11608327547628255LL;
	static int16_t x5131 = 1;
	volatile int32_t t145 = -13;

    t145 = (((x5129>x5130)/x5131)>>x5132);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x5180 = 3U;
	volatile int64_t t146 = 118LL;

    t146 = (((x5177>x5178)/x5179)>>x5180);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x5181 = -1;
	uint32_t x5182 = 810U;
	uint8_t x5183 = 9U;
	uint8_t x5184 = 23U;
	volatile int32_t t147 = -299521;

    t147 = (((x5181>x5182)/x5183)>>x5184);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int16_t x5225 = INT16_MAX;
	static uint16_t x5228 = 0U;
	volatile int32_t t148 = -12240021;

    t148 = (((x5225>x5226)/x5227)>>x5228);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x5255 = 6576501LLU;
	int32_t x5256 = 11;

    t149 = (((x5253>x5254)/x5255)>>x5256);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x5314 = -2136819491LL;
	int16_t x5315 = INT16_MIN;
	uint32_t x5316 = 1U;
	int32_t t150 = -502539699;

    t150 = (((x5313>x5314)/x5315)>>x5316);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x5405 = INT32_MIN;
	int16_t x5406 = INT16_MIN;
	uint64_t x5407 = 5LLU;
	static int8_t x5408 = 0;
	uint64_t t151 = 44826944897077LLU;

    t151 = (((x5405>x5406)/x5407)>>x5408);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x5417 = UINT32_MAX;
	volatile uint64_t x5418 = UINT64_MAX;
	int64_t x5419 = -1LL;
	uint8_t x5420 = 57U;
	volatile int64_t t152 = 66903039LL;

    t152 = (((x5417>x5418)/x5419)>>x5420);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint64_t x5437 = 40119268014LLU;
	volatile int16_t x5438 = INT16_MIN;
	int32_t x5439 = -360276;
	volatile uint32_t x5440 = 4U;
	int32_t t153 = -15320;

    t153 = (((x5437>x5438)/x5439)>>x5440);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x5457 = 33U;
	uint32_t x5458 = UINT32_MAX;
	int16_t x5459 = INT16_MAX;
	static uint8_t x5460 = 4U;

    t154 = (((x5457>x5458)/x5459)>>x5460);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x5494 = INT32_MAX;
	int64_t x5495 = -15096496LL;
	uint16_t x5496 = 7U;
	volatile int64_t t155 = -16935419109964502LL;

    t155 = (((x5493>x5494)/x5495)>>x5496);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint16_t x5497 = UINT16_MAX;
	uint32_t x5500 = 0U;
	int64_t t156 = -16525826674552623LL;

    t156 = (((x5497>x5498)/x5499)>>x5500);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x5529 = INT8_MAX;
	int32_t x5530 = INT32_MIN;
	static volatile int32_t t157 = 110234649;

    t157 = (((x5529>x5530)/x5531)>>x5532);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x5569 = -18;
	static volatile int8_t x5570 = -3;
	volatile int32_t x5571 = INT32_MAX;
	int32_t t158 = 5146595;

    t158 = (((x5569>x5570)/x5571)>>x5572);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x5591 = UINT16_MAX;
	int16_t x5592 = 0;
	volatile int32_t t159 = 30833;

    t159 = (((x5589>x5590)/x5591)>>x5592);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x5602 = INT16_MAX;
	int32_t x5603 = INT32_MIN;
	int16_t x5604 = 1;
	volatile int32_t t160 = -101660651;

    t160 = (((x5601>x5602)/x5603)>>x5604);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x5605 = INT8_MIN;
	volatile uint8_t x5608 = 0U;
	volatile int32_t t161 = 63253130;

    t161 = (((x5605>x5606)/x5607)>>x5608);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x5733 = 26121LL;
	int64_t x5734 = INT64_MIN;
	int64_t x5735 = INT64_MIN;
	static int8_t x5736 = 5;
	int64_t t162 = 11228832678066729LL;

    t162 = (((x5733>x5734)/x5735)>>x5736);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x5790 = INT64_MAX;
	static volatile int8_t x5791 = INT8_MAX;
	int16_t x5792 = 1;
	static int32_t t163 = -3386;

    t163 = (((x5789>x5790)/x5791)>>x5792);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x5805 = INT64_MAX;
	uint16_t x5806 = 16392U;
	static int8_t x5808 = 61;
	uint64_t t164 = 13489107172LLU;

    t164 = (((x5805>x5806)/x5807)>>x5808);

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x5825 = UINT64_MAX;
	uint64_t x5827 = 232521571LLU;
	int16_t x5828 = 14;
	uint64_t t165 = 4271451607343432LLU;

    t165 = (((x5825>x5826)/x5827)>>x5828);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x5833 = INT8_MAX;
	static volatile uint32_t x5834 = 23649U;
	int8_t x5836 = 29;
	volatile int32_t t166 = 25976;

    t166 = (((x5833>x5834)/x5835)>>x5836);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x5853 = INT32_MIN;
	int32_t x5854 = INT32_MAX;
	int8_t x5855 = INT8_MIN;
	static uint8_t x5856 = 1U;
	volatile int32_t t167 = 54;

    t167 = (((x5853>x5854)/x5855)>>x5856);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x5869 = INT32_MIN;
	volatile int16_t x5870 = -1;
	int64_t x5872 = 25LL;
	volatile uint32_t t168 = 443995089U;

    t168 = (((x5869>x5870)/x5871)>>x5872);

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x5873 = INT32_MAX;
	volatile int16_t x5874 = 25;
	int32_t x5875 = 102;
	int8_t x5876 = 3;
	int32_t t169 = 416;

    t169 = (((x5873>x5874)/x5875)>>x5876);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x5945 = 15098U;
	int64_t x5946 = 191449518737LL;
	int64_t x5947 = INT64_MIN;
	int8_t x5948 = 0;
	volatile int64_t t170 = -122LL;

    t170 = (((x5945>x5946)/x5947)>>x5948);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x5973 = 663610LL;
	int64_t x5975 = -247790556LL;
	volatile int64_t t171 = -642350318LL;

    t171 = (((x5973>x5974)/x5975)>>x5976);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x6033 = UINT8_MAX;
	uint16_t x6034 = 0U;
	uint32_t x6035 = 363U;
	static uint32_t t172 = 81242281U;

    t172 = (((x6033>x6034)/x6035)>>x6036);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x6093 = -4;
	uint8_t x6094 = UINT8_MAX;
	uint8_t x6096 = 6U;
	int32_t t173 = 528635687;

    t173 = (((x6093>x6094)/x6095)>>x6096);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x6121 = INT8_MIN;
	volatile int16_t x6122 = INT16_MIN;
	volatile int16_t x6123 = INT16_MIN;
	static int16_t x6124 = 6;
	int32_t t174 = 6604964;

    t174 = (((x6121>x6122)/x6123)>>x6124);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x6149 = 408;
	volatile uint64_t x6150 = 415400851372351462LLU;
	volatile int8_t x6151 = INT8_MIN;
	static uint8_t x6152 = 6U;
	static volatile int32_t t175 = 401;

    t175 = (((x6149>x6150)/x6151)>>x6152);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x6161 = 5;
	volatile int64_t x6162 = INT64_MIN;
	static int32_t x6163 = -110;
	int32_t t176 = 91614;

    t176 = (((x6161>x6162)/x6163)>>x6164);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x6209 = INT16_MAX;
	volatile int8_t x6210 = INT8_MIN;
	uint16_t x6211 = 1671U;
	static int8_t x6212 = 17;
	int32_t t177 = -6816307;

    t177 = (((x6209>x6210)/x6211)>>x6212);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x6246 = INT64_MIN;
	uint16_t x6247 = 360U;
	volatile uint8_t x6248 = 1U;
	int32_t t178 = 189228138;

    t178 = (((x6245>x6246)/x6247)>>x6248);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x6269 = -1;
	int16_t x6270 = -14110;
	static int64_t x6271 = 68420263001LL;
	volatile int8_t x6272 = 3;
	int64_t t179 = -1034268542471LL;

    t179 = (((x6269>x6270)/x6271)>>x6272);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x6305 = 346403LLU;
	static int32_t x6306 = INT32_MAX;
	int8_t x6307 = INT8_MIN;
	uint32_t x6308 = 2U;
	volatile int32_t t180 = 184;

    t180 = (((x6305>x6306)/x6307)>>x6308);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x6317 = -56995;
	static int8_t x6318 = INT8_MIN;
	int16_t x6319 = INT16_MIN;
	int8_t x6320 = 6;

    t181 = (((x6317>x6318)/x6319)>>x6320);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x6326 = -58126538277LL;
	uint8_t x6327 = UINT8_MAX;
	uint8_t x6328 = 4U;
	static volatile int32_t t182 = 4803918;

    t182 = (((x6325>x6326)/x6327)>>x6328);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x6330 = INT8_MIN;
	uint8_t x6331 = UINT8_MAX;
	uint16_t x6332 = 3U;
	static int32_t t183 = 100;

    t183 = (((x6329>x6330)/x6331)>>x6332);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x6347 = INT16_MIN;
	uint32_t x6348 = 1U;
	int32_t t184 = -190930234;

    t184 = (((x6345>x6346)/x6347)>>x6348);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x6353 = 959665U;
	int32_t x6354 = -975677;
	volatile uint32_t x6355 = 16U;
	uint8_t x6356 = 2U;
	static uint32_t t185 = 2U;

    t185 = (((x6353>x6354)/x6355)>>x6356);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x6481 = 3U;
	volatile uint8_t x6482 = 9U;
	int32_t x6483 = 1;
	int8_t x6484 = 0;
	int32_t t186 = -7;

    t186 = (((x6481>x6482)/x6483)>>x6484);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x6569 = 0U;
	volatile int32_t x6570 = -70;
	int64_t x6571 = -31071839443731LL;
	volatile int64_t x6572 = 22LL;
	volatile int64_t t187 = -403707509LL;

    t187 = (((x6569>x6570)/x6571)>>x6572);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x6577 = INT32_MIN;
	uint64_t x6578 = 4426LLU;
	int32_t x6579 = 177;
	int16_t x6580 = 5;
	volatile int32_t t188 = -32364;

    t188 = (((x6577>x6578)/x6579)>>x6580);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x6581 = -1;
	uint16_t x6583 = 2U;
	int8_t x6584 = 0;

    t189 = (((x6581>x6582)/x6583)>>x6584);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x6625 = 564704580LLU;
	uint16_t x6626 = UINT16_MAX;
	volatile uint8_t x6628 = 26U;
	static volatile int32_t t190 = -1064598751;

    t190 = (((x6625>x6626)/x6627)>>x6628);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x6693 = 4303689165467913459LL;
	volatile uint64_t x6695 = UINT64_MAX;
	static int64_t x6696 = 54LL;
	volatile uint64_t t191 = 690689005LLU;

    t191 = (((x6693>x6694)/x6695)>>x6696);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x6717 = -1;
	int16_t x6718 = INT16_MIN;
	uint32_t x6719 = 45510U;
	uint32_t x6720 = 16U;
	uint32_t t192 = 1572654U;

    t192 = (((x6717>x6718)/x6719)>>x6720);

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x6721 = INT32_MAX;
	static uint32_t x6723 = UINT32_MAX;
	static uint16_t x6724 = 1U;
	volatile uint32_t t193 = 2641U;

    t193 = (((x6721>x6722)/x6723)>>x6724);

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x6729 = INT8_MAX;
	volatile int8_t x6730 = -7;
	int32_t x6732 = 6;
	volatile int32_t t194 = -285545;

    t194 = (((x6729>x6730)/x6731)>>x6732);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x6782 = -1LL;
	int64_t x6783 = INT64_MAX;
	volatile int8_t x6784 = 26;
	volatile int64_t t195 = 5573433099LL;

    t195 = (((x6781>x6782)/x6783)>>x6784);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x6853 = 1U;
	int64_t x6854 = -1LL;
	int64_t x6855 = INT64_MIN;
	int8_t x6856 = 5;
	int64_t t196 = 63541LL;

    t196 = (((x6853>x6854)/x6855)>>x6856);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x7013 = -1;
	int32_t x7014 = -1;
	static int16_t x7015 = INT16_MIN;
	int8_t x7016 = 10;
	int32_t t197 = -1557370;

    t197 = (((x7013>x7014)/x7015)>>x7016);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x7021 = UINT32_MAX;
	int64_t x7022 = -3861689486397359LL;
	static uint8_t x7024 = 6U;
	volatile int64_t t198 = -98272868187374LL;

    t198 = (((x7021>x7022)/x7023)>>x7024);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x7025 = -587825;
	volatile int8_t x7026 = 31;
	volatile uint8_t x7028 = 31U;
	int64_t t199 = 1406LL;

    t199 = (((x7025>x7026)/x7027)>>x7028);

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


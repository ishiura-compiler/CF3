
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

int64_t x5 = INT64_MAX;
uint32_t x15 = UINT32_MAX;
int32_t t1 = 265;
static int32_t t2 = 48537913;
static volatile int32_t x28 = INT32_MIN;
int16_t x51 = 1;
int32_t t5 = -126465671;
int32_t t6 = 112650631;
int64_t x66 = 13LL;
uint16_t x68 = 537U;
volatile int32_t t8 = 31315;
volatile int32_t t9 = -765;
volatile uint8_t x85 = 4U;
int32_t t10 = 76879125;
static int16_t x101 = 901;
int32_t x102 = -2296560;
volatile int32_t x104 = -64;
volatile uint8_t x109 = 0U;
int8_t x133 = INT8_MIN;
int16_t x145 = -3730;
int64_t x163 = INT64_MAX;
int32_t x203 = 13301;
int32_t t23 = 198;
static int64_t x222 = 16420431898828829LL;
int16_t x242 = -7;
static int32_t t27 = -14211;
int8_t x278 = -1;
int32_t x286 = 50;
int64_t x287 = 25LL;
int32_t t30 = 60846;
int8_t x291 = -3;
int8_t x296 = -1;
int64_t x298 = -1LL;
int8_t x313 = INT8_MAX;
static int16_t x316 = INT16_MIN;
static volatile int32_t x319 = -1;
volatile int32_t t37 = 130424;
int32_t x341 = -1;
int16_t x344 = -11;
static uint64_t x353 = UINT64_MAX;
int32_t t39 = -14110;
int32_t t40 = -14322275;
static int64_t x364 = -277657LL;
int32_t t43 = -1;
int64_t x429 = INT64_MIN;
int32_t t45 = -5909627;
static int32_t t47 = -3;
static int64_t x445 = -1LL;
int32_t x446 = -1;
int32_t t49 = 391;
uint16_t x472 = 5U;
int8_t x476 = -1;
volatile int64_t x501 = -136475884170LL;
int32_t x503 = -1;
volatile int32_t t55 = -5999;
static int32_t t58 = 0;
uint32_t x558 = 216188U;
static uint32_t x578 = 529410647U;
static uint32_t x587 = UINT32_MAX;
int32_t x590 = INT32_MIN;
static int16_t x592 = INT16_MIN;
volatile int32_t t63 = -3033;
uint32_t x601 = 3558U;
static volatile int32_t x602 = INT32_MIN;
static volatile uint16_t x603 = UINT16_MAX;
uint32_t x612 = 25148844U;
volatile uint32_t x615 = 9303U;
int64_t x616 = INT64_MIN;
static int16_t x621 = INT16_MAX;
int64_t x624 = INT64_MIN;
int32_t x627 = INT32_MAX;
static int64_t x664 = -2781353345712566LL;
uint8_t x668 = 0U;
uint16_t x676 = 727U;
int32_t x696 = INT32_MIN;
int32_t t79 = -890;
int64_t x740 = -53898728321886474LL;
static int8_t x747 = INT8_MAX;
int32_t t83 = -12511;
uint8_t x795 = UINT8_MAX;
int8_t x802 = INT8_MIN;
static int16_t x803 = -1;
int32_t t87 = -77699;
uint32_t x811 = 1393359448U;
volatile uint32_t x823 = UINT32_MAX;
int32_t t89 = -1;
static int64_t x838 = INT64_MIN;
volatile int32_t x843 = INT32_MAX;
uint32_t x851 = UINT32_MAX;
int32_t t93 = 1;
int32_t x859 = INT32_MAX;
uint32_t x860 = 272819U;
int16_t x864 = -24;
int64_t x882 = -1LL;
volatile int64_t x895 = -1LL;
int64_t x902 = -1LL;
uint64_t x930 = 5952LLU;
int8_t x948 = -8;
volatile int32_t x974 = 7391022;
static uint32_t x981 = 16216030U;
volatile uint16_t x1005 = 1U;
static int64_t x1009 = -99463042LL;
volatile int32_t t110 = 0;
uint64_t x1014 = 3397839941LLU;
static volatile int32_t t113 = -24509;
int8_t x1029 = -1;
uint64_t x1030 = 8626779044491LLU;
static int8_t x1031 = 0;
int32_t t115 = 219560326;
int64_t x1037 = INT64_MIN;
volatile int8_t x1039 = INT8_MAX;
int32_t t117 = 0;
volatile int16_t x1048 = -3397;
uint16_t x1049 = 5U;
static int32_t x1070 = INT32_MIN;
uint32_t x1078 = UINT32_MAX;
volatile int32_t t124 = 3305;
uint16_t x1095 = 1U;
int32_t t125 = -77474664;
static int8_t x1100 = -5;
static int16_t x1114 = -845;
int64_t x1118 = INT64_MAX;
int16_t x1125 = -1;
int64_t x1128 = INT64_MIN;
volatile uint16_t x1131 = 33U;
volatile int32_t t131 = 9228;
int64_t x1134 = -1LL;
uint64_t x1135 = 2314576403282158577LLU;
uint16_t x1140 = UINT16_MAX;
int16_t x1145 = -1;
static int32_t t135 = -240;
int64_t x1175 = -1LL;
uint64_t x1176 = 1LLU;
int32_t x1179 = INT32_MAX;
static int8_t x1201 = INT8_MAX;
static int64_t x1202 = -1LL;
static volatile int32_t t139 = -1547;
volatile int32_t t140 = -55876;
int8_t x1216 = 60;
int32_t x1218 = INT32_MIN;
uint8_t x1230 = 42U;
uint8_t x1232 = 20U;
volatile int32_t t144 = -2011;
int32_t x1251 = INT32_MAX;
volatile int16_t x1261 = 449;
volatile uint32_t x1266 = UINT32_MAX;
static uint16_t x1267 = 9789U;
uint16_t x1273 = 43U;
uint8_t x1276 = 37U;
static int64_t x1279 = 47135325358LL;
int32_t t152 = -271;
int8_t x1284 = INT8_MIN;
int64_t x1311 = INT64_MAX;
int32_t t157 = 62;
volatile int32_t x1322 = -1;
int8_t x1323 = 2;
int8_t x1343 = INT8_MAX;
int32_t x1344 = -134;
int16_t x1351 = INT16_MIN;
int32_t x1355 = INT32_MAX;
int32_t t163 = 88394;
int32_t x1411 = -1;
uint16_t x1413 = 39U;
int32_t x1414 = INT32_MIN;
static int32_t x1418 = INT32_MIN;
volatile uint32_t x1419 = 1699U;
int32_t x1420 = 0;
int8_t x1456 = 2;
int8_t x1457 = INT8_MAX;
volatile uint8_t x1460 = 13U;
static int32_t t171 = -90895618;
static int32_t x1475 = INT32_MAX;
uint32_t x1477 = 1U;
volatile int16_t x1483 = INT16_MIN;
int32_t t175 = 238;
int32_t t176 = 0;
volatile int16_t x1506 = INT16_MAX;
int32_t x1507 = INT32_MAX;
static volatile uint32_t x1508 = 1717841215U;
int16_t x1517 = -133;
uint64_t x1520 = 31530577949LLU;
uint8_t x1539 = 68U;
int32_t t181 = -489455495;
static volatile int32_t t182 = -408;
uint64_t x1550 = UINT64_MAX;
int32_t x1558 = INT32_MAX;
int8_t x1578 = INT8_MIN;
static int16_t x1586 = -1;
volatile int32_t t188 = 90;
uint16_t x1599 = 278U;
int32_t x1600 = -911582788;
int16_t x1606 = -1;
static uint16_t x1614 = UINT16_MAX;
static uint64_t x1617 = 32LLU;
uint32_t x1618 = UINT32_MAX;
uint8_t x1619 = UINT8_MAX;
int8_t x1630 = INT8_MAX;
uint8_t x1632 = UINT8_MAX;
int64_t x1636 = 389LL;
int16_t x1643 = INT16_MAX;


void f0(void) {
    	int8_t x6 = -1;
	uint16_t x7 = 2757U;
	static volatile int64_t x8 = INT64_MIN;
	int32_t t0 = -52808513;

    t0 = ((x5>x6)/(x7>x8));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x13 = -25372;
	static volatile int32_t x14 = INT32_MAX;
	int32_t x16 = INT32_MAX;

    t1 = ((x13>x14)/(x15>x16));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x17 = INT64_MIN;
	volatile uint8_t x18 = 6U;
	uint16_t x19 = 56U;
	int8_t x20 = -8;

    t2 = ((x17>x18)/(x19>x20));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x25 = -1;
	int8_t x26 = INT8_MIN;
	int64_t x27 = -1LL;
	static volatile int32_t t3 = 284;

    t3 = ((x25>x26)/(x27>x28));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x33 = UINT8_MAX;
	static uint8_t x34 = 19U;
	uint8_t x35 = 3U;
	static int8_t x36 = INT8_MIN;
	int32_t t4 = 1;

    t4 = ((x33>x34)/(x35>x36));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x49 = -1;
	volatile int64_t x50 = INT64_MIN;
	static int64_t x52 = INT64_MIN;

    t5 = ((x49>x50)/(x51>x52));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x53 = INT16_MIN;
	int8_t x54 = 0;
	static uint8_t x55 = 124U;
	int32_t x56 = -720586;

    t6 = ((x53>x54)/(x55>x56));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x57 = 125U;
	volatile int64_t x58 = -1LL;
	uint32_t x59 = 109276U;
	static uint8_t x60 = 14U;
	volatile int32_t t7 = 89340167;

    t7 = ((x57>x58)/(x59>x60));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x65 = 0;
	static volatile uint16_t x67 = 4568U;

    t8 = ((x65>x66)/(x67>x68));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x81 = 3471;
	volatile int8_t x82 = -1;
	static int32_t x83 = INT32_MIN;
	uint32_t x84 = 2006291U;

    t9 = ((x81>x82)/(x83>x84));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int32_t x86 = INT32_MAX;
	volatile int16_t x87 = 15;
	volatile int32_t x88 = INT32_MIN;

    t10 = ((x85>x86)/(x87>x88));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x89 = -1LL;
	volatile int32_t x90 = INT32_MAX;
	int8_t x91 = INT8_MAX;
	int32_t x92 = INT32_MIN;
	int32_t t11 = -437;

    t11 = ((x89>x90)/(x91>x92));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x103 = 1132145034LL;
	static volatile int32_t t12 = -1;

    t12 = ((x101>x102)/(x103>x104));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x105 = 2U;
	uint32_t x106 = 803255740U;
	uint8_t x107 = 41U;
	int8_t x108 = INT8_MIN;
	volatile int32_t t13 = -1739457;

    t13 = ((x105>x106)/(x107>x108));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x110 = 2361U;
	int64_t x111 = 14503438927LL;
	uint32_t x112 = UINT32_MAX;
	int32_t t14 = -89;

    t14 = ((x109>x110)/(x111>x112));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x134 = 1063550LL;
	int16_t x135 = -2;
	int16_t x136 = -930;
	volatile int32_t t15 = 4727457;

    t15 = ((x133>x134)/(x135>x136));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x146 = 1U;
	int16_t x147 = INT16_MIN;
	static uint32_t x148 = 1062555977U;
	volatile int32_t t16 = 418288329;

    t16 = ((x145>x146)/(x147>x148));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x161 = INT64_MIN;
	uint8_t x162 = 3U;
	int16_t x164 = INT16_MIN;
	volatile int32_t t17 = 265883446;

    t17 = ((x161>x162)/(x163>x164));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x165 = INT16_MIN;
	int16_t x166 = INT16_MAX;
	volatile int64_t x167 = INT64_MAX;
	static int8_t x168 = -1;
	volatile int32_t t18 = -1866914;

    t18 = ((x165>x166)/(x167>x168));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x193 = 880634LL;
	int8_t x194 = INT8_MAX;
	int8_t x195 = INT8_MIN;
	uint64_t x196 = 566233852743LLU;
	volatile int32_t t19 = 1;

    t19 = ((x193>x194)/(x195>x196));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x197 = 8894734483497LL;
	int32_t x198 = 1;
	int16_t x199 = INT16_MAX;
	uint32_t x200 = 0U;
	volatile int32_t t20 = 217203249;

    t20 = ((x197>x198)/(x199>x200));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x201 = 3180340U;
	static int8_t x202 = INT8_MAX;
	volatile int8_t x204 = -1;
	int32_t t21 = 13007;

    t21 = ((x201>x202)/(x203>x204));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x213 = 9LLU;
	int32_t x214 = -2;
	static uint16_t x215 = UINT16_MAX;
	static volatile int64_t x216 = INT64_MIN;
	volatile int32_t t22 = 22;

    t22 = ((x213>x214)/(x215>x216));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x217 = -1;
	static uint8_t x218 = 0U;
	int64_t x219 = INT64_MAX;
	int64_t x220 = -38025094LL;

    t23 = ((x217>x218)/(x219>x220));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x221 = INT32_MAX;
	static uint16_t x223 = UINT16_MAX;
	int64_t x224 = INT64_MIN;
	volatile int32_t t24 = 3;

    t24 = ((x221>x222)/(x223>x224));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x229 = 3U;
	uint8_t x230 = 21U;
	int64_t x231 = 433764734630022LL;
	uint8_t x232 = 0U;
	int32_t t25 = 889397335;

    t25 = ((x229>x230)/(x231>x232));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int64_t x241 = INT64_MAX;
	volatile int16_t x243 = -1;
	uint32_t x244 = 83614U;
	int32_t t26 = 167322;

    t26 = ((x241>x242)/(x243>x244));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x261 = INT16_MIN;
	static int32_t x262 = INT32_MIN;
	uint8_t x263 = UINT8_MAX;
	int64_t x264 = -17765LL;

    t27 = ((x261>x262)/(x263>x264));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x277 = UINT32_MAX;
	uint32_t x279 = UINT32_MAX;
	static int32_t x280 = -833;
	int32_t t28 = 598617844;

    t28 = ((x277>x278)/(x279>x280));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x281 = 22453U;
	int32_t x282 = INT32_MAX;
	static int64_t x283 = 4293157790LL;
	int16_t x284 = INT16_MIN;
	int32_t t29 = 29;

    t29 = ((x281>x282)/(x283>x284));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x285 = -1;
	int64_t x288 = -1LL;

    t30 = ((x285>x286)/(x287>x288));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x289 = 5353;
	volatile uint16_t x290 = UINT16_MAX;
	int32_t x292 = INT32_MIN;
	volatile int32_t t31 = -3212498;

    t31 = ((x289>x290)/(x291>x292));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x293 = 7U;
	static volatile uint16_t x294 = 25872U;
	static int64_t x295 = INT64_MAX;
	int32_t t32 = -250442;

    t32 = ((x293>x294)/(x295>x296));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x297 = INT8_MIN;
	int32_t x299 = INT32_MAX;
	volatile int32_t x300 = INT32_MIN;
	int32_t t33 = 41401530;

    t33 = ((x297>x298)/(x299>x300));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x314 = INT16_MIN;
	uint32_t x315 = UINT32_MAX;
	int32_t t34 = 6;

    t34 = ((x313>x314)/(x315>x316));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x317 = 24489U;
	volatile int8_t x318 = INT8_MIN;
	int16_t x320 = INT16_MIN;
	static volatile int32_t t35 = -326115573;

    t35 = ((x317>x318)/(x319>x320));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x325 = 5LLU;
	uint16_t x326 = UINT16_MAX;
	int64_t x327 = INT64_MAX;
	uint64_t x328 = 3666827152135222913LLU;
	volatile int32_t t36 = 0;

    t36 = ((x325>x326)/(x327>x328));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x329 = 484U;
	volatile uint64_t x330 = UINT64_MAX;
	int16_t x331 = -1;
	volatile int64_t x332 = INT64_MIN;

    t37 = ((x329>x330)/(x331>x332));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x342 = 1755633U;
	uint16_t x343 = 12514U;
	int32_t t38 = -225235;

    t38 = ((x341>x342)/(x343>x344));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x354 = INT64_MAX;
	static int32_t x355 = INT32_MAX;
	volatile uint8_t x356 = 4U;

    t39 = ((x353>x354)/(x355>x356));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x357 = INT8_MIN;
	int64_t x358 = INT64_MIN;
	static uint64_t x359 = 1076019LLU;
	uint8_t x360 = UINT8_MAX;

    t40 = ((x357>x358)/(x359>x360));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x361 = 1U;
	int64_t x362 = INT64_MAX;
	uint64_t x363 = UINT64_MAX;
	volatile int32_t t41 = -233;

    t41 = ((x361>x362)/(x363>x364));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x373 = 5658;
	uint8_t x374 = 0U;
	int32_t x375 = INT32_MIN;
	uint32_t x376 = 1548074176U;
	volatile int32_t t42 = -37385272;

    t42 = ((x373>x374)/(x375>x376));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x393 = 1U;
	uint16_t x394 = 1761U;
	volatile int64_t x395 = INT64_MAX;
	int64_t x396 = INT64_MIN;

    t43 = ((x393>x394)/(x395>x396));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x409 = INT64_MIN;
	static uint16_t x410 = 4781U;
	int8_t x411 = 1;
	int32_t x412 = INT32_MIN;
	static int32_t t44 = 3867284;

    t44 = ((x409>x410)/(x411>x412));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x430 = INT64_MIN;
	volatile int32_t x431 = INT32_MAX;
	static volatile int8_t x432 = INT8_MAX;

    t45 = ((x429>x430)/(x431>x432));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x433 = UINT32_MAX;
	uint16_t x434 = 6367U;
	int32_t x435 = INT32_MAX;
	int64_t x436 = INT64_MIN;
	int32_t t46 = 132486;

    t46 = ((x433>x434)/(x435>x436));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x437 = UINT8_MAX;
	volatile int8_t x438 = -6;
	static volatile int64_t x439 = INT64_MIN;
	static uint64_t x440 = 301030908435950813LLU;

    t47 = ((x437>x438)/(x439>x440));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x447 = 1457620U;
	int64_t x448 = -11LL;
	volatile int32_t t48 = -13;

    t48 = ((x445>x446)/(x447>x448));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x453 = INT32_MAX;
	int8_t x454 = INT8_MAX;
	static int64_t x455 = INT64_MAX;
	uint32_t x456 = 57439663U;

    t49 = ((x453>x454)/(x455>x456));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x469 = INT64_MIN;
	static int32_t x470 = INT32_MAX;
	static int16_t x471 = 270;
	int32_t t50 = -13498720;

    t50 = ((x469>x470)/(x471>x472));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x473 = -1LL;
	static volatile int32_t x474 = INT32_MIN;
	uint16_t x475 = UINT16_MAX;
	volatile int32_t t51 = -153;

    t51 = ((x473>x474)/(x475>x476));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x477 = INT8_MIN;
	static int32_t x478 = INT32_MIN;
	uint32_t x479 = 4126072U;
	uint32_t x480 = 15U;
	static int32_t t52 = 232160768;

    t52 = ((x477>x478)/(x479>x480));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x489 = 166;
	volatile int16_t x490 = INT16_MAX;
	static int16_t x491 = INT16_MIN;
	uint64_t x492 = 17160390497305LLU;
	int32_t t53 = -24159637;

    t53 = ((x489>x490)/(x491>x492));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x502 = 1;
	int8_t x504 = INT8_MIN;
	static volatile int32_t t54 = 59218;

    t54 = ((x501>x502)/(x503>x504));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x513 = UINT64_MAX;
	static int64_t x514 = -47036486LL;
	static int32_t x515 = -1;
	volatile uint64_t x516 = 0LLU;

    t55 = ((x513>x514)/(x515>x516));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x529 = INT64_MIN;
	static uint8_t x530 = 35U;
	int16_t x531 = -18;
	uint32_t x532 = 1U;
	static int32_t t56 = 13259062;

    t56 = ((x529>x530)/(x531>x532));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x537 = INT8_MAX;
	uint64_t x538 = 6503200442137LLU;
	int64_t x539 = -15387LL;
	static volatile int32_t x540 = -24171534;
	int32_t t57 = -783255;

    t57 = ((x537>x538)/(x539>x540));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x549 = -167911;
	uint64_t x550 = UINT64_MAX;
	uint16_t x551 = UINT16_MAX;
	volatile int8_t x552 = 1;

    t58 = ((x549>x550)/(x551>x552));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x557 = 123569304667LLU;
	uint64_t x559 = UINT64_MAX;
	static uint8_t x560 = 9U;
	volatile int32_t t59 = 269356;

    t59 = ((x557>x558)/(x559>x560));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x577 = INT64_MIN;
	uint8_t x579 = UINT8_MAX;
	static int64_t x580 = -1043722946LL;
	volatile int32_t t60 = 45388286;

    t60 = ((x577>x578)/(x579>x580));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x585 = 203;
	static volatile uint16_t x586 = 1U;
	volatile int32_t x588 = INT32_MIN;
	static int32_t t61 = -1479316;

    t61 = ((x585>x586)/(x587>x588));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x589 = INT16_MIN;
	int32_t x591 = -1;
	static int32_t t62 = -4234801;

    t62 = ((x589>x590)/(x591>x592));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x597 = 106081512LL;
	int16_t x598 = INT16_MIN;
	volatile int32_t x599 = 1920258;
	int64_t x600 = INT64_MIN;

    t63 = ((x597>x598)/(x599>x600));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x604 = 6;
	static volatile int32_t t64 = 297514;

    t64 = ((x601>x602)/(x603>x604));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x609 = -1;
	volatile uint8_t x610 = 4U;
	volatile int16_t x611 = -1;
	volatile int32_t t65 = 6892173;

    t65 = ((x609>x610)/(x611>x612));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x613 = INT64_MAX;
	int32_t x614 = INT32_MIN;
	int32_t t66 = 1770;

    t66 = ((x613>x614)/(x615>x616));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x622 = INT8_MAX;
	int64_t x623 = -10627062LL;
	static int32_t t67 = -157647;

    t67 = ((x621>x622)/(x623>x624));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x625 = INT16_MIN;
	int32_t x626 = INT32_MIN;
	int32_t x628 = INT32_MIN;
	int32_t t68 = -470;

    t68 = ((x625>x626)/(x627>x628));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x629 = INT16_MIN;
	volatile int32_t x630 = INT32_MIN;
	static uint64_t x631 = 3087417986083369LLU;
	static uint32_t x632 = UINT32_MAX;
	volatile int32_t t69 = 2044;

    t69 = ((x629>x630)/(x631>x632));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x649 = UINT64_MAX;
	int64_t x650 = -1LL;
	int32_t x651 = -1;
	uint64_t x652 = 5524224225145LLU;
	int32_t t70 = -791;

    t70 = ((x649>x650)/(x651>x652));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x661 = 0U;
	static int64_t x662 = INT64_MAX;
	static int8_t x663 = INT8_MAX;
	int32_t t71 = -50185;

    t71 = ((x661>x662)/(x663>x664));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x665 = UINT32_MAX;
	int32_t x666 = INT32_MIN;
	uint8_t x667 = 29U;
	int32_t t72 = -10543604;

    t72 = ((x665>x666)/(x667>x668));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint64_t x673 = 203357LLU;
	uint16_t x674 = 15U;
	uint64_t x675 = UINT64_MAX;
	int32_t t73 = -264828622;

    t73 = ((x673>x674)/(x675>x676));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x689 = INT8_MAX;
	int64_t x690 = INT64_MAX;
	uint8_t x691 = UINT8_MAX;
	volatile int8_t x692 = -1;
	int32_t t74 = -4;

    t74 = ((x689>x690)/(x691>x692));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x693 = -5756;
	volatile int64_t x694 = INT64_MIN;
	static int16_t x695 = INT16_MIN;
	static int32_t t75 = 2942394;

    t75 = ((x693>x694)/(x695>x696));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x697 = -14994;
	int64_t x698 = INT64_MIN;
	int64_t x699 = INT64_MAX;
	int8_t x700 = -1;
	volatile int32_t t76 = 465;

    t76 = ((x697>x698)/(x699>x700));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x701 = INT64_MAX;
	int8_t x702 = -62;
	int8_t x703 = -1;
	int8_t x704 = -63;
	int32_t t77 = -2;

    t77 = ((x701>x702)/(x703>x704));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x721 = 104U;
	int16_t x722 = -58;
	uint64_t x723 = 80219459LLU;
	volatile uint64_t x724 = 1001357LLU;
	volatile int32_t t78 = -77;

    t78 = ((x721>x722)/(x723>x724));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x725 = -1LL;
	int32_t x726 = -207222;
	volatile int64_t x727 = 24358283583465LL;
	int32_t x728 = INT32_MIN;

    t79 = ((x725>x726)/(x727>x728));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x737 = INT32_MIN;
	uint64_t x738 = UINT64_MAX;
	volatile uint8_t x739 = 24U;
	int32_t t80 = 14387;

    t80 = ((x737>x738)/(x739>x740));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x745 = 61373U;
	static int8_t x746 = INT8_MAX;
	int16_t x748 = -10140;
	volatile int32_t t81 = 7;

    t81 = ((x745>x746)/(x747>x748));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x765 = UINT8_MAX;
	int16_t x766 = INT16_MAX;
	static int32_t x767 = INT32_MIN;
	volatile uint32_t x768 = 22U;
	volatile int32_t t82 = 8061;

    t82 = ((x765>x766)/(x767>x768));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x769 = 44LLU;
	volatile int32_t x770 = INT32_MAX;
	int64_t x771 = INT64_MAX;
	int32_t x772 = INT32_MIN;

    t83 = ((x769>x770)/(x771>x772));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x773 = INT16_MIN;
	uint64_t x774 = 130996066LLU;
	int8_t x775 = 10;
	uint8_t x776 = 7U;
	int32_t t84 = 132803010;

    t84 = ((x773>x774)/(x775>x776));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x789 = INT8_MIN;
	uint16_t x790 = 4U;
	int64_t x791 = -1LL;
	int16_t x792 = -4;
	volatile int32_t t85 = 21;

    t85 = ((x789>x790)/(x791>x792));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x793 = 496U;
	int64_t x794 = INT64_MIN;
	static int8_t x796 = INT8_MAX;
	int32_t t86 = -250188961;

    t86 = ((x793>x794)/(x795>x796));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x801 = 466;
	volatile uint64_t x804 = 40726106076LLU;

    t87 = ((x801>x802)/(x803>x804));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x809 = 307U;
	int16_t x810 = -4;
	volatile uint8_t x812 = 0U;
	int32_t t88 = 15963;

    t88 = ((x809>x810)/(x811>x812));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x821 = -1;
	volatile int8_t x822 = INT8_MIN;
	uint16_t x824 = UINT16_MAX;

    t89 = ((x821>x822)/(x823>x824));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x837 = INT16_MIN;
	int16_t x839 = 18;
	int64_t x840 = INT64_MIN;
	static volatile int32_t t90 = 46;

    t90 = ((x837>x838)/(x839>x840));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x841 = 277;
	static int64_t x842 = -108227LL;
	int16_t x844 = -14285;
	int32_t t91 = 4;

    t91 = ((x841>x842)/(x843>x844));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x849 = 109U;
	int8_t x850 = INT8_MIN;
	uint8_t x852 = 51U;
	int32_t t92 = 109;

    t92 = ((x849>x850)/(x851>x852));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x853 = -420124;
	int8_t x854 = INT8_MIN;
	int64_t x855 = INT64_MAX;
	volatile int16_t x856 = INT16_MIN;

    t93 = ((x853>x854)/(x855>x856));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x857 = -1;
	volatile int32_t x858 = INT32_MAX;
	int32_t t94 = 4210;

    t94 = ((x857>x858)/(x859>x860));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint8_t x861 = 3U;
	int32_t x862 = 810;
	int8_t x863 = -1;
	static int32_t t95 = -963131720;

    t95 = ((x861>x862)/(x863>x864));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x881 = UINT16_MAX;
	int32_t x883 = -1;
	static uint32_t x884 = 439U;
	int32_t t96 = 399;

    t96 = ((x881>x882)/(x883>x884));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x893 = INT32_MIN;
	int64_t x894 = 46698329179801LL;
	int8_t x896 = INT8_MIN;
	int32_t t97 = -15;

    t97 = ((x893>x894)/(x895>x896));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x901 = 1U;
	uint8_t x903 = UINT8_MAX;
	uint32_t x904 = 140U;
	volatile int32_t t98 = -67627686;

    t98 = ((x901>x902)/(x903>x904));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x921 = -25;
	int8_t x922 = -20;
	static uint32_t x923 = 20152136U;
	uint16_t x924 = 5U;
	volatile int32_t t99 = -7992334;

    t99 = ((x921>x922)/(x923>x924));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x929 = 61;
	static int64_t x931 = -2788519769708LL;
	uint64_t x932 = 54356945242LLU;
	volatile int32_t t100 = -75228153;

    t100 = ((x929>x930)/(x931>x932));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x937 = 133423341;
	int32_t x938 = -700;
	volatile uint64_t x939 = UINT64_MAX;
	int8_t x940 = INT8_MAX;
	static int32_t t101 = -120390399;

    t101 = ((x937>x938)/(x939>x940));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x945 = -198;
	static int64_t x946 = 78051200636821598LL;
	int8_t x947 = -1;
	volatile int32_t t102 = -461507542;

    t102 = ((x945>x946)/(x947>x948));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x957 = UINT64_MAX;
	uint64_t x958 = 562LLU;
	int16_t x959 = -9427;
	int32_t x960 = -255394802;
	volatile int32_t t103 = 185251;

    t103 = ((x957>x958)/(x959>x960));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x973 = INT32_MIN;
	static uint8_t x975 = UINT8_MAX;
	int16_t x976 = INT16_MIN;
	volatile int32_t t104 = -1483028;

    t104 = ((x973>x974)/(x975>x976));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x982 = INT8_MIN;
	int64_t x983 = 55103LL;
	int64_t x984 = 3815LL;
	volatile int32_t t105 = -3104004;

    t105 = ((x981>x982)/(x983>x984));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x985 = UINT64_MAX;
	int64_t x986 = -4579849231599389718LL;
	int16_t x987 = 22;
	int16_t x988 = INT16_MIN;
	int32_t t106 = -424;

    t106 = ((x985>x986)/(x987>x988));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x997 = UINT16_MAX;
	int8_t x998 = INT8_MIN;
	static int16_t x999 = -213;
	static int64_t x1000 = INT64_MIN;
	static volatile int32_t t107 = -19640838;

    t107 = ((x997>x998)/(x999>x1000));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x1001 = INT16_MIN;
	int16_t x1002 = 1179;
	uint64_t x1003 = 12840LLU;
	static volatile uint16_t x1004 = 101U;
	volatile int32_t t108 = -6;

    t108 = ((x1001>x1002)/(x1003>x1004));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x1006 = -1;
	static int64_t x1007 = INT64_MAX;
	volatile int16_t x1008 = INT16_MIN;
	volatile int32_t t109 = -2996;

    t109 = ((x1005>x1006)/(x1007>x1008));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x1010 = 3468LLU;
	uint64_t x1011 = 559LLU;
	uint64_t x1012 = 20LLU;

    t110 = ((x1009>x1010)/(x1011>x1012));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x1013 = INT8_MIN;
	static int64_t x1015 = INT64_MAX;
	volatile uint16_t x1016 = UINT16_MAX;
	volatile int32_t t111 = 47462160;

    t111 = ((x1013>x1014)/(x1015>x1016));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x1017 = INT16_MIN;
	static volatile int32_t x1018 = INT32_MIN;
	volatile int16_t x1019 = INT16_MAX;
	int16_t x1020 = 1;
	volatile int32_t t112 = 3;

    t112 = ((x1017>x1018)/(x1019>x1020));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x1021 = 16;
	volatile uint8_t x1022 = 1U;
	uint32_t x1023 = UINT32_MAX;
	int16_t x1024 = -1112;

    t113 = ((x1021>x1022)/(x1023>x1024));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x1025 = -1LL;
	int8_t x1026 = 1;
	volatile int64_t x1027 = INT64_MAX;
	uint64_t x1028 = 245698LLU;
	static int32_t t114 = 78171;

    t114 = ((x1025>x1026)/(x1027>x1028));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x1032 = INT8_MIN;

    t115 = ((x1029>x1030)/(x1031>x1032));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x1038 = UINT16_MAX;
	int32_t x1040 = -1;
	volatile int32_t t116 = 230;

    t116 = ((x1037>x1038)/(x1039>x1040));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x1041 = -1;
	volatile int8_t x1042 = -11;
	int8_t x1043 = 7;
	int16_t x1044 = -1;

    t117 = ((x1041>x1042)/(x1043>x1044));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x1045 = UINT32_MAX;
	volatile int16_t x1046 = 1;
	volatile int8_t x1047 = 7;
	static int32_t t118 = 13;

    t118 = ((x1045>x1046)/(x1047>x1048));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x1050 = INT64_MIN;
	int32_t x1051 = INT32_MAX;
	int8_t x1052 = -1;
	int32_t t119 = -2;

    t119 = ((x1049>x1050)/(x1051>x1052));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x1065 = INT8_MAX;
	int64_t x1066 = -1351038892LL;
	int16_t x1067 = INT16_MAX;
	int16_t x1068 = 135;
	static int32_t t120 = 8;

    t120 = ((x1065>x1066)/(x1067>x1068));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x1069 = INT16_MIN;
	int8_t x1071 = 0;
	volatile int32_t x1072 = INT32_MIN;
	volatile int32_t t121 = -667;

    t121 = ((x1069>x1070)/(x1071>x1072));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x1073 = INT64_MIN;
	int16_t x1074 = -6;
	int16_t x1075 = INT16_MIN;
	volatile uint64_t x1076 = 19LLU;
	int32_t t122 = 1;

    t122 = ((x1073>x1074)/(x1075>x1076));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x1077 = UINT64_MAX;
	uint32_t x1079 = 126678U;
	int64_t x1080 = INT64_MIN;
	int32_t t123 = 0;

    t123 = ((x1077>x1078)/(x1079>x1080));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x1081 = 30553U;
	int8_t x1082 = INT8_MAX;
	uint16_t x1083 = 1U;
	int32_t x1084 = INT32_MIN;

    t124 = ((x1081>x1082)/(x1083>x1084));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x1093 = 445287116249768771LLU;
	uint64_t x1094 = 265491541922380042LLU;
	int32_t x1096 = INT32_MIN;

    t125 = ((x1093>x1094)/(x1095>x1096));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x1097 = 6U;
	uint32_t x1098 = UINT32_MAX;
	volatile int16_t x1099 = -1;
	int32_t t126 = -14312;

    t126 = ((x1097>x1098)/(x1099>x1100));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x1101 = -1LL;
	uint32_t x1102 = 3513U;
	static volatile int8_t x1103 = -17;
	volatile uint64_t x1104 = 1032754142544LLU;
	volatile int32_t t127 = -1021579;

    t127 = ((x1101>x1102)/(x1103>x1104));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x1113 = 2263U;
	int64_t x1115 = INT64_MAX;
	volatile uint64_t x1116 = 3686900117952108LLU;
	int32_t t128 = -7018;

    t128 = ((x1113>x1114)/(x1115>x1116));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x1117 = INT32_MIN;
	uint8_t x1119 = 73U;
	volatile int16_t x1120 = -1;
	int32_t t129 = 4737228;

    t129 = ((x1117>x1118)/(x1119>x1120));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x1126 = 48U;
	static int64_t x1127 = INT64_MAX;
	volatile int32_t t130 = 419321;

    t130 = ((x1125>x1126)/(x1127>x1128));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x1129 = 2805245LLU;
	uint8_t x1130 = 1U;
	volatile uint8_t x1132 = 6U;

    t131 = ((x1129>x1130)/(x1131>x1132));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x1133 = 1288684414233819971LL;
	uint64_t x1136 = 9484369447215LLU;
	int32_t t132 = -27901;

    t132 = ((x1133>x1134)/(x1135>x1136));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x1137 = 0U;
	static volatile uint32_t x1138 = UINT32_MAX;
	uint64_t x1139 = UINT64_MAX;
	int32_t t133 = -9410;

    t133 = ((x1137>x1138)/(x1139>x1140));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x1146 = INT16_MAX;
	uint8_t x1147 = UINT8_MAX;
	int64_t x1148 = INT64_MIN;
	volatile int32_t t134 = -1;

    t134 = ((x1145>x1146)/(x1147>x1148));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x1149 = -10LL;
	static uint64_t x1150 = 68142910681051LLU;
	uint8_t x1151 = 63U;
	int8_t x1152 = INT8_MIN;

    t135 = ((x1149>x1150)/(x1151>x1152));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x1157 = UINT16_MAX;
	uint8_t x1158 = UINT8_MAX;
	volatile int16_t x1159 = INT16_MIN;
	uint64_t x1160 = 5248936913LLU;
	static volatile int32_t t136 = -93775169;

    t136 = ((x1157>x1158)/(x1159>x1160));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x1173 = 6;
	int64_t x1174 = -60LL;
	int32_t t137 = -1210;

    t137 = ((x1173>x1174)/(x1175>x1176));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x1177 = -1LL;
	int16_t x1178 = INT16_MIN;
	int64_t x1180 = INT64_MIN;
	int32_t t138 = -361;

    t138 = ((x1177>x1178)/(x1179>x1180));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x1203 = 7874663;
	int16_t x1204 = INT16_MAX;

    t139 = ((x1201>x1202)/(x1203>x1204));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x1205 = INT32_MIN;
	uint8_t x1206 = 7U;
	int64_t x1207 = 23690042964LL;
	int16_t x1208 = INT16_MIN;

    t140 = ((x1205>x1206)/(x1207>x1208));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x1213 = -2961;
	int32_t x1214 = -10704;
	int32_t x1215 = INT32_MAX;
	int32_t t141 = 2002141;

    t141 = ((x1213>x1214)/(x1215>x1216));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x1217 = UINT64_MAX;
	static uint16_t x1219 = 0U;
	static int32_t x1220 = -12575;
	int32_t t142 = 11;

    t142 = ((x1217>x1218)/(x1219>x1220));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x1221 = UINT64_MAX;
	uint32_t x1222 = 1577U;
	uint32_t x1223 = UINT32_MAX;
	int8_t x1224 = 1;
	static volatile int32_t t143 = 7065;

    t143 = ((x1221>x1222)/(x1223>x1224));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1229 = -1;
	int64_t x1231 = 1908LL;

    t144 = ((x1229>x1230)/(x1231>x1232));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x1233 = INT64_MIN;
	int16_t x1234 = INT16_MIN;
	uint8_t x1235 = 12U;
	int64_t x1236 = INT64_MIN;
	int32_t t145 = -44057;

    t145 = ((x1233>x1234)/(x1235>x1236));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x1237 = 20520006;
	volatile int32_t x1238 = -71;
	uint16_t x1239 = 211U;
	int8_t x1240 = INT8_MAX;
	static volatile int32_t t146 = 0;

    t146 = ((x1237>x1238)/(x1239>x1240));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x1249 = UINT32_MAX;
	int32_t x1250 = INT32_MIN;
	int16_t x1252 = INT16_MIN;
	int32_t t147 = -1;

    t147 = ((x1249>x1250)/(x1251>x1252));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x1253 = 1874;
	uint8_t x1254 = 99U;
	int64_t x1255 = 7877880404LL;
	static int16_t x1256 = INT16_MIN;
	int32_t t148 = -2548;

    t148 = ((x1253>x1254)/(x1255>x1256));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1262 = INT16_MAX;
	int32_t x1263 = -9;
	static int64_t x1264 = -69583451794851LL;
	int32_t t149 = 559844611;

    t149 = ((x1261>x1262)/(x1263>x1264));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x1265 = UINT64_MAX;
	int8_t x1268 = 4;
	volatile int32_t t150 = 164;

    t150 = ((x1265>x1266)/(x1267>x1268));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x1274 = -32130;
	volatile uint16_t x1275 = UINT16_MAX;
	volatile int32_t t151 = 991628528;

    t151 = ((x1273>x1274)/(x1275>x1276));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x1277 = 12U;
	volatile int64_t x1278 = 3699775884LL;
	volatile int16_t x1280 = -1;

    t152 = ((x1277>x1278)/(x1279>x1280));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x1281 = 58U;
	int64_t x1282 = 671141962821873LL;
	uint16_t x1283 = 88U;
	volatile int32_t t153 = -8002059;

    t153 = ((x1281>x1282)/(x1283>x1284));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x1285 = 3421722258LLU;
	int32_t x1286 = 112632471;
	uint64_t x1287 = UINT64_MAX;
	volatile int64_t x1288 = 25092647802LL;
	static int32_t t154 = 4;

    t154 = ((x1285>x1286)/(x1287>x1288));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x1297 = 12931LLU;
	int64_t x1298 = 11758802728327895LL;
	volatile uint8_t x1299 = 1U;
	static int64_t x1300 = INT64_MIN;
	volatile int32_t t155 = -12024922;

    t155 = ((x1297>x1298)/(x1299>x1300));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x1305 = 28424U;
	static int8_t x1306 = 18;
	uint64_t x1307 = 1898781LLU;
	uint16_t x1308 = UINT16_MAX;
	int32_t t156 = 5212508;

    t156 = ((x1305>x1306)/(x1307>x1308));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x1309 = -1;
	volatile int8_t x1310 = -1;
	uint32_t x1312 = 61U;

    t157 = ((x1309>x1310)/(x1311>x1312));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x1321 = 102U;
	volatile int64_t x1324 = INT64_MIN;
	volatile int32_t t158 = 237;

    t158 = ((x1321>x1322)/(x1323>x1324));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x1341 = -1;
	int32_t x1342 = -1;
	int32_t t159 = 123499;

    t159 = ((x1341>x1342)/(x1343>x1344));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x1345 = 1288864782234LL;
	static uint8_t x1346 = 24U;
	volatile uint32_t x1347 = UINT32_MAX;
	int8_t x1348 = INT8_MIN;
	int32_t t160 = 1;

    t160 = ((x1345>x1346)/(x1347>x1348));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x1349 = 2;
	uint32_t x1350 = 175903288U;
	uint32_t x1352 = 29745591U;
	static int32_t t161 = -60230932;

    t161 = ((x1349>x1350)/(x1351>x1352));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x1353 = -6160720536695LL;
	volatile uint64_t x1354 = UINT64_MAX;
	static int64_t x1356 = 19LL;
	volatile int32_t t162 = 42842;

    t162 = ((x1353>x1354)/(x1355>x1356));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1381 = -1;
	int8_t x1382 = -1;
	static int8_t x1383 = INT8_MAX;
	int64_t x1384 = -17161743024474LL;

    t163 = ((x1381>x1382)/(x1383>x1384));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x1397 = UINT8_MAX;
	int32_t x1398 = 100701;
	uint64_t x1399 = UINT64_MAX;
	static int64_t x1400 = 7726816242858LL;
	volatile int32_t t164 = -1799091;

    t164 = ((x1397>x1398)/(x1399>x1400));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x1401 = 19U;
	int64_t x1402 = -203916036LL;
	uint32_t x1403 = 81948394U;
	volatile int64_t x1404 = -1LL;
	int32_t t165 = -112;

    t165 = ((x1401>x1402)/(x1403>x1404));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x1409 = INT32_MAX;
	uint32_t x1410 = 100497967U;
	int64_t x1412 = INT64_MIN;
	volatile int32_t t166 = 1;

    t166 = ((x1409>x1410)/(x1411>x1412));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x1415 = INT16_MAX;
	static uint8_t x1416 = UINT8_MAX;
	volatile int32_t t167 = 487;

    t167 = ((x1413>x1414)/(x1415>x1416));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x1417 = 6124776LLU;
	volatile int32_t t168 = 387;

    t168 = ((x1417>x1418)/(x1419>x1420));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x1453 = INT16_MIN;
	volatile uint64_t x1454 = UINT64_MAX;
	uint8_t x1455 = 4U;
	volatile int32_t t169 = 19;

    t169 = ((x1453>x1454)/(x1455>x1456));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x1458 = INT16_MIN;
	volatile int16_t x1459 = INT16_MAX;
	volatile int32_t t170 = 37413298;

    t170 = ((x1457>x1458)/(x1459>x1460));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x1469 = INT8_MIN;
	int32_t x1470 = -1;
	volatile uint64_t x1471 = UINT64_MAX;
	int16_t x1472 = INT16_MIN;

    t171 = ((x1469>x1470)/(x1471>x1472));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1473 = -2561202;
	uint16_t x1474 = 335U;
	uint32_t x1476 = 11813U;
	int32_t t172 = 1033980379;

    t172 = ((x1473>x1474)/(x1475>x1476));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1478 = INT8_MIN;
	int16_t x1479 = 286;
	static int8_t x1480 = 0;
	int32_t t173 = -26;

    t173 = ((x1477>x1478)/(x1479>x1480));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x1481 = -2134334002LL;
	volatile int16_t x1482 = -22;
	int64_t x1484 = INT64_MIN;
	volatile int32_t t174 = -205571;

    t174 = ((x1481>x1482)/(x1483>x1484));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1485 = 12927U;
	static int8_t x1486 = INT8_MIN;
	static uint8_t x1487 = 12U;
	static int64_t x1488 = 0LL;

    t175 = ((x1485>x1486)/(x1487>x1488));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x1493 = -1;
	int16_t x1494 = 4109;
	uint64_t x1495 = 933680701LLU;
	uint32_t x1496 = 361487U;

    t176 = ((x1493>x1494)/(x1495>x1496));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x1505 = -1;
	static int32_t t177 = 218307;

    t177 = ((x1505>x1506)/(x1507>x1508));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1518 = 5018615LL;
	static int16_t x1519 = INT16_MIN;
	volatile int32_t t178 = -231983641;

    t178 = ((x1517>x1518)/(x1519>x1520));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1525 = INT32_MAX;
	uint8_t x1526 = 109U;
	static int8_t x1527 = INT8_MIN;
	int32_t x1528 = INT32_MIN;
	static int32_t t179 = -1;

    t179 = ((x1525>x1526)/(x1527>x1528));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x1529 = 81LLU;
	int32_t x1530 = 14561;
	static uint64_t x1531 = 107580356003533118LLU;
	int32_t x1532 = 3771;
	int32_t t180 = -13625039;

    t180 = ((x1529>x1530)/(x1531>x1532));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x1537 = UINT16_MAX;
	volatile uint64_t x1538 = 545218818839167LLU;
	int64_t x1540 = INT64_MIN;

    t181 = ((x1537>x1538)/(x1539>x1540));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int16_t x1545 = INT16_MIN;
	int32_t x1546 = -1;
	int8_t x1547 = INT8_MIN;
	volatile int32_t x1548 = -973943;

    t182 = ((x1545>x1546)/(x1547>x1548));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x1549 = 16350U;
	int8_t x1551 = INT8_MAX;
	static int16_t x1552 = -1;
	volatile int32_t t183 = 1718023;

    t183 = ((x1549>x1550)/(x1551>x1552));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1553 = 3U;
	int16_t x1554 = -1;
	volatile int64_t x1555 = INT64_MAX;
	static volatile uint32_t x1556 = UINT32_MAX;
	volatile int32_t t184 = 1754;

    t184 = ((x1553>x1554)/(x1555>x1556));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x1557 = INT64_MAX;
	int32_t x1559 = INT32_MAX;
	static volatile int64_t x1560 = INT64_MIN;
	volatile int32_t t185 = -258869;

    t185 = ((x1557>x1558)/(x1559>x1560));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1577 = INT32_MIN;
	int64_t x1579 = INT64_MAX;
	int64_t x1580 = 104269033350LL;
	volatile int32_t t186 = 0;

    t186 = ((x1577>x1578)/(x1579>x1580));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x1581 = 6LLU;
	int32_t x1582 = -1;
	uint32_t x1583 = 929116U;
	int16_t x1584 = INT16_MAX;
	volatile int32_t t187 = 1715555;

    t187 = ((x1581>x1582)/(x1583>x1584));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x1585 = 2563U;
	int8_t x1587 = INT8_MAX;
	int16_t x1588 = -1;

    t188 = ((x1585>x1586)/(x1587>x1588));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x1589 = INT8_MIN;
	int32_t x1590 = 1876363;
	int16_t x1591 = INT16_MAX;
	int8_t x1592 = 6;
	volatile int32_t t189 = -250752468;

    t189 = ((x1589>x1590)/(x1591>x1592));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1597 = 7LLU;
	static int8_t x1598 = INT8_MAX;
	volatile int32_t t190 = 4025138;

    t190 = ((x1597>x1598)/(x1599>x1600));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1601 = 3334U;
	int8_t x1602 = 45;
	int16_t x1603 = INT16_MAX;
	static uint16_t x1604 = 30U;
	static volatile int32_t t191 = 160;

    t191 = ((x1601>x1602)/(x1603>x1604));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1605 = -1;
	static int32_t x1607 = INT32_MIN;
	uint64_t x1608 = 9048LLU;
	int32_t t192 = 11326;

    t192 = ((x1605>x1606)/(x1607>x1608));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int32_t x1609 = INT32_MIN;
	int8_t x1610 = -1;
	int8_t x1611 = INT8_MAX;
	static volatile int8_t x1612 = -1;
	int32_t t193 = -12205429;

    t193 = ((x1609>x1610)/(x1611>x1612));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x1613 = 7425U;
	volatile int8_t x1615 = -1;
	int64_t x1616 = INT64_MIN;
	volatile int32_t t194 = 1;

    t194 = ((x1613>x1614)/(x1615>x1616));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1620 = -1;
	volatile int32_t t195 = -2606636;

    t195 = ((x1617>x1618)/(x1619>x1620));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x1629 = -1;
	volatile uint32_t x1631 = 28668504U;
	int32_t t196 = -13015;

    t196 = ((x1629>x1630)/(x1631>x1632));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1633 = 25U;
	int64_t x1634 = -4LL;
	uint64_t x1635 = 11041446595LLU;
	int32_t t197 = -3122364;

    t197 = ((x1633>x1634)/(x1635>x1636));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x1641 = -7;
	int64_t x1642 = 12061LL;
	volatile int32_t x1644 = INT32_MIN;
	volatile int32_t t198 = 125;

    t198 = ((x1641>x1642)/(x1643>x1644));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1645 = 2105041674202LLU;
	int8_t x1646 = INT8_MIN;
	int16_t x1647 = 0;
	static int64_t x1648 = -1LL;
	volatile int32_t t199 = 3123;

    t199 = ((x1645>x1646)/(x1647>x1648));

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


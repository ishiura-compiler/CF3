
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

uint32_t x4 = 5282807U;
int32_t x16 = 178;
int32_t x20 = INT32_MIN;
int8_t x26 = 21;
int8_t x30 = INT8_MIN;
int16_t x31 = 510;
uint8_t x49 = 1U;
uint32_t x52 = 8U;
volatile int64_t x56 = INT64_MAX;
uint64_t t8 = 1LLU;
uint64_t t9 = 49749375046035611LLU;
volatile int64_t x108 = 1LL;
static volatile int32_t x118 = INT32_MIN;
int8_t x142 = INT8_MIN;
int16_t x145 = 0;
volatile uint8_t x146 = 63U;
int8_t x158 = 0;
int32_t t15 = -1;
int8_t x181 = 11;
uint8_t x182 = 32U;
uint8_t x187 = UINT8_MAX;
int32_t x188 = -1;
uint8_t x205 = 98U;
static int64_t x207 = INT64_MIN;
uint32_t x271 = 955595464U;
volatile int32_t x279 = INT32_MAX;
int32_t x303 = INT32_MAX;
uint64_t x318 = 1356LLU;
uint16_t x329 = UINT16_MAX;
int8_t x331 = -1;
volatile int32_t t30 = -951260;
int8_t x351 = INT8_MIN;
volatile uint32_t x352 = 4U;
int64_t t36 = 1196784068299628565LL;
static int32_t t37 = -176;
int32_t x443 = -1;
int64_t x444 = INT64_MIN;
static volatile int64_t x457 = 29047278LL;
int64_t x460 = -1LL;
int64_t x474 = INT64_MIN;
volatile uint64_t t41 = 254453419966225LLU;
int16_t x517 = INT16_MAX;
uint32_t t45 = 1316326216U;
volatile int16_t x532 = 1542;
volatile uint64_t x541 = 306772805075LLU;
int16_t x544 = INT16_MAX;
static uint8_t x581 = 2U;
uint16_t x585 = 86U;
int64_t x595 = INT64_MAX;
uint16_t x596 = 15U;
static uint16_t x602 = 27U;
uint32_t x604 = 20967U;
volatile uint64_t t51 = 1541838288486090LLU;
static int16_t x605 = INT16_MAX;
volatile int8_t x664 = INT8_MAX;
uint16_t x680 = 2985U;
int32_t x686 = 12;
uint8_t x687 = UINT8_MAX;
uint64_t t58 = 294859134958613LLU;
int64_t x698 = -1LL;
uint64_t x702 = 2661449918LLU;
static int8_t x703 = INT8_MIN;
volatile int32_t t60 = -276518998;
volatile uint64_t x706 = 2076479398LLU;
uint64_t x721 = 103LLU;
static uint64_t t62 = 3570715795408LLU;
static volatile int8_t x744 = 3;
int8_t x764 = INT8_MAX;
static volatile int32_t t65 = -21028846;
volatile uint8_t x817 = UINT8_MAX;
int32_t x820 = 16259996;
volatile int8_t x825 = 2;
int32_t x828 = INT32_MIN;
int16_t x846 = 5;
volatile int32_t t71 = 21158;
static int16_t x849 = 4;
volatile int32_t x859 = -5;
int32_t t73 = -3686532;
volatile uint32_t x874 = 122U;
uint32_t x906 = 3U;
uint8_t x907 = UINT8_MAX;
static volatile uint32_t t76 = 248U;
volatile uint64_t t77 = 7955236413163LLU;
int16_t x931 = 138;
volatile int64_t x940 = INT64_MIN;
volatile int64_t t79 = -1029356978081LL;
static volatile int8_t x947 = -1;
int16_t x948 = INT16_MAX;
int32_t t80 = -10;
uint32_t x955 = 165816314U;
volatile uint16_t x987 = 7073U;
uint64_t t84 = 33LLU;
uint32_t x1057 = UINT32_MAX;
volatile int64_t x1077 = INT64_MAX;
int64_t x1079 = -24666305407956LL;
int64_t t89 = INT64_MAX;
int64_t x1091 = INT64_MIN;
int8_t x1116 = 1;
uint16_t x1119 = 161U;
volatile int16_t x1158 = -3721;
volatile uint16_t x1165 = 2U;
volatile int64_t x1167 = INT64_MIN;
uint16_t x1195 = UINT16_MAX;
uint64_t t100 = 91830639004300038LLU;
int32_t x1229 = INT32_MAX;
volatile int64_t t101 = 16212168365528LL;
int32_t x1255 = INT32_MIN;
int32_t x1256 = -52225;
static int32_t x1259 = INT32_MIN;
int32_t t105 = -31864;
int64_t x1287 = INT64_MIN;
static uint8_t x1295 = 16U;
int8_t x1316 = -1;
int8_t x1360 = INT8_MIN;
volatile int32_t t109 = -39020;
static int64_t x1377 = 13066425790473LL;
int64_t x1387 = -3263835249LL;
volatile uint64_t t111 = 1014LLU;
volatile int64_t x1397 = 175604LL;
int16_t x1404 = INT16_MIN;
int32_t x1468 = 162145469;
static int32_t t120 = -7201;
int8_t x1477 = 1;
volatile uint8_t x1478 = 1U;
int16_t x1480 = -1;
static int32_t x1492 = INT32_MAX;
int8_t x1504 = -1;
int16_t x1523 = INT16_MIN;
volatile uint16_t x1524 = UINT16_MAX;
int32_t x1527 = -28357;
uint32_t x1569 = 983U;
int16_t x1588 = -4751;
static int8_t x1594 = 15;
uint32_t t130 = 13U;
static int64_t x1673 = INT64_MAX;
uint64_t x1677 = 38027715389LLU;
int64_t x1732 = INT64_MAX;
uint32_t t138 = 23U;
volatile int32_t t139 = 245180;
int32_t x1761 = 922139;
uint8_t x1762 = 3U;
uint64_t x1774 = UINT64_MAX;
uint8_t x1801 = UINT8_MAX;
static int32_t t143 = -10622116;
volatile int32_t t144 = -4;
uint16_t x1836 = 5055U;
volatile uint64_t t146 = 25032041LLU;
static int64_t x1886 = INT64_MAX;
int16_t x1888 = -1;
volatile int64_t t149 = 870733355018LL;
int64_t x1899 = INT64_MIN;
volatile int8_t x1906 = 1;
int32_t x1908 = INT32_MIN;
volatile int32_t t151 = 120118771;
int32_t x1924 = -1;
volatile uint64_t t152 = 15327082067586LLU;
int32_t t153 = 6083;
volatile uint16_t x1937 = UINT16_MAX;
int32_t x1938 = -1;
int16_t x1952 = -1;
int8_t x1956 = 3;
int8_t x2001 = 1;
uint64_t x2004 = 25112078139959LLU;
int32_t t162 = -30;
int64_t t166 = -17115706LL;
int32_t x2063 = INT32_MIN;
volatile uint64_t x2072 = 84691157071579775LLU;
uint8_t x2077 = UINT8_MAX;
volatile int64_t x2079 = INT64_MIN;
int64_t x2091 = INT64_MIN;
volatile int32_t t170 = -8907;
int16_t x2094 = -1;
static int8_t x2096 = INT8_MIN;
int64_t x2099 = INT64_MIN;
uint64_t x2100 = UINT64_MAX;
uint64_t t172 = 5238043213174LLU;
static uint32_t x2114 = 76U;
volatile uint32_t x2115 = 476U;
volatile int64_t t173 = -1464548LL;
int32_t t176 = 6;
int32_t t180 = 2024594;
int8_t x2227 = -1;
int16_t x2236 = 1826;
volatile int8_t x2241 = 0;
uint16_t x2244 = UINT16_MAX;
int16_t x2252 = -1;
volatile int16_t x2287 = -1;
int8_t x2306 = INT8_MIN;
static int32_t t187 = 14499;
volatile uint64_t x2322 = 16021LLU;
int32_t t189 = -31190;
int32_t x2340 = INT32_MAX;
uint8_t x2373 = 31U;
static int16_t x2406 = INT16_MAX;
int64_t x2407 = 47011LL;
volatile int8_t x2408 = INT8_MIN;
static uint16_t x2417 = 5486U;
volatile int16_t x2420 = INT16_MAX;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	static int32_t x2 = -1;
	volatile int32_t x3 = 8561442;
	volatile uint32_t t0 = 58357U;

    t0 = ((x1>>(x2/x3))%x4);

    if (t0 != 255U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x13 = 995059;
	int8_t x14 = 0;
	int8_t x15 = 22;
	volatile int32_t t1 = -3651;

    t1 = ((x13>>(x14/x15))%x16);

    if (t1 != 39) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x17 = 0U;
	int64_t x18 = 5LL;
	uint8_t x19 = UINT8_MAX;
	int32_t t2 = 221;

    t2 = ((x17>>(x18/x19))%x20);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x25 = 7829U;
	static int8_t x27 = INT8_MIN;
	int32_t x28 = INT32_MIN;
	static int32_t t3 = 14;

    t3 = ((x25>>(x26/x27))%x28);

    if (t3 != 7829) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x29 = UINT32_MAX;
	static int16_t x32 = INT16_MIN;
	uint32_t t4 = 2140008817U;

    t4 = ((x29>>(x30/x31))%x32);

    if (t4 != 32767U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x45 = UINT32_MAX;
	int16_t x46 = -1;
	int16_t x47 = 182;
	int32_t x48 = -1;
	uint32_t t5 = 4845302U;

    t5 = ((x45>>(x46/x47))%x48);

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x50 = 1U;
	int32_t x51 = 2097258;
	volatile uint32_t t6 = 226837U;

    t6 = ((x49>>(x50/x51))%x52);

    if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x53 = 125770913LL;
	int8_t x54 = INT8_MIN;
	uint16_t x55 = UINT16_MAX;
	static volatile int64_t t7 = 3LL;

    t7 = ((x53>>(x54/x55))%x56);

    if (t7 != 125770913LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x57 = INT64_MAX;
	int8_t x58 = INT8_MAX;
	int16_t x59 = INT16_MIN;
	uint64_t x60 = 225698692LLU;

    t8 = ((x57>>(x58/x59))%x60);

    if (t8 != 178097555LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x93 = UINT64_MAX;
	uint8_t x94 = UINT8_MAX;
	int16_t x95 = INT16_MIN;
	uint8_t x96 = UINT8_MAX;

    t9 = ((x93>>(x94/x95))%x96);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x105 = 0U;
	static volatile int32_t x106 = -1;
	int64_t x107 = INT64_MAX;
	volatile int64_t t10 = 4274028928303LL;

    t10 = ((x105>>(x106/x107))%x108);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x117 = INT32_MAX;
	int32_t x119 = INT32_MIN;
	int32_t x120 = INT32_MAX;
	volatile int32_t t11 = -344885;

    t11 = ((x117>>(x118/x119))%x120);

    if (t11 != 1073741823) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x141 = 15LLU;
	volatile uint32_t x143 = UINT32_MAX;
	int32_t x144 = -1007641379;
	uint64_t t12 = 5265912640405372LLU;

    t12 = ((x141>>(x142/x143))%x144);

    if (t12 != 15LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x147 = 628683982LL;
	static int64_t x148 = 2597717LL;
	volatile int64_t t13 = -3577632289916008592LL;

    t13 = ((x145>>(x146/x147))%x148);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x149 = UINT32_MAX;
	int8_t x150 = -1;
	int8_t x151 = INT8_MAX;
	static uint32_t x152 = 144086U;
	volatile uint32_t t14 = 367196U;

    t14 = ((x149>>(x150/x151))%x152);

    if (t14 != 51807U) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x157 = 628126;
	static uint16_t x159 = 130U;
	static volatile int16_t x160 = INT16_MIN;

    t15 = ((x157>>(x158/x159))%x160);

    if (t15 != 5534) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x165 = UINT32_MAX;
	int64_t x166 = 0LL;
	uint8_t x167 = UINT8_MAX;
	volatile int64_t x168 = INT64_MAX;
	static int64_t t16 = 1LL;

    t16 = ((x165>>(x166/x167))%x168);

    if (t16 != 4294967295LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x169 = UINT16_MAX;
	int64_t x170 = INT64_MIN;
	uint64_t x171 = UINT64_MAX;
	uint32_t x172 = 2U;
	uint32_t t17 = 20819U;

    t17 = ((x169>>(x170/x171))%x172);

    if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x173 = 9U;
	static uint64_t x174 = 734LLU;
	uint64_t x175 = 453LLU;
	int16_t x176 = -1;
	volatile int32_t t18 = -2;

    t18 = ((x173>>(x174/x175))%x176);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x183 = 481U;
	int16_t x184 = -1;
	volatile int32_t t19 = -112583734;

    t19 = ((x181>>(x182/x183))%x184);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x185 = 760338509U;
	uint16_t x186 = 139U;
	uint32_t t20 = 1225768807U;

    t20 = ((x185>>(x186/x187))%x188);

    if (t20 != 760338509U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x197 = UINT64_MAX;
	uint64_t x198 = UINT64_MAX;
	int16_t x199 = -5647;
	volatile int32_t x200 = INT32_MAX;
	uint64_t t21 = 23815451LLU;

    t21 = ((x197>>(x198/x199))%x200);

    if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x201 = 2;
	volatile uint16_t x202 = 15U;
	static uint64_t x203 = UINT64_MAX;
	int8_t x204 = -1;
	volatile int32_t t22 = 0;

    t22 = ((x201>>(x202/x203))%x204);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x206 = 57251863092973995LLU;
	int8_t x208 = 1;
	volatile int32_t t23 = -4452483;

    t23 = ((x205>>(x206/x207))%x208);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x221 = 1U;
	int16_t x222 = 87;
	volatile uint32_t x223 = 1949232052U;
	volatile int8_t x224 = INT8_MAX;
	int32_t t24 = 20538838;

    t24 = ((x221>>(x222/x223))%x224);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x261 = UINT16_MAX;
	volatile int32_t x262 = INT32_MIN;
	volatile uint32_t x263 = UINT32_MAX;
	int32_t x264 = INT32_MIN;
	int32_t t25 = -176;

    t25 = ((x261>>(x262/x263))%x264);

    if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x269 = 275375907163330733LL;
	uint32_t x270 = UINT32_MAX;
	static int8_t x272 = 15;
	static int64_t t26 = -18392652145LL;

    t26 = ((x269>>(x270/x271))%x272);

    if (t26 != 10LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x277 = INT8_MAX;
	int16_t x278 = 7193;
	volatile int16_t x280 = INT16_MIN;
	static int32_t t27 = -135073640;

    t27 = ((x277>>(x278/x279))%x280);

    if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x301 = INT64_MAX;
	uint16_t x302 = 894U;
	uint32_t x304 = UINT32_MAX;
	int64_t t28 = 134LL;

    t28 = ((x301>>(x302/x303))%x304);

    if (t28 != 2147483647LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x317 = 130127940LL;
	int32_t x319 = INT32_MAX;
	int8_t x320 = INT8_MIN;
	volatile int64_t t29 = -3630191054014LL;

    t29 = ((x317>>(x318/x319))%x320);

    if (t29 != 68LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x330 = -1LL;
	int8_t x332 = INT8_MIN;

    t30 = ((x329>>(x330/x331))%x332);

    if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x333 = INT8_MAX;
	int8_t x334 = -55;
	uint64_t x335 = 4296814015639949827LLU;
	volatile int64_t x336 = INT64_MIN;
	int64_t t31 = -1216748538110106451LL;

    t31 = ((x333>>(x334/x335))%x336);

    if (t31 != 7LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x349 = 23010U;
	volatile int32_t x350 = -1;
	volatile uint32_t t32 = 153633602U;

    t32 = ((x349>>(x350/x351))%x352);

    if (t32 != 2U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x353 = 8550708327LLU;
	uint32_t x354 = 2491218U;
	int32_t x355 = -1;
	static int64_t x356 = INT64_MAX;
	volatile uint64_t t33 = 7341586750495023568LLU;

    t33 = ((x353>>(x354/x355))%x356);

    if (t33 != 8550708327LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x365 = 16U;
	int8_t x366 = -4;
	volatile int32_t x367 = INT32_MIN;
	volatile int16_t x368 = 12595;
	int32_t t34 = -39741725;

    t34 = ((x365>>(x366/x367))%x368);

    if (t34 != 16) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x377 = 5U;
	int64_t x378 = -1LL;
	static volatile uint8_t x379 = 28U;
	uint8_t x380 = 1U;
	volatile int32_t t35 = -1;

    t35 = ((x377>>(x378/x379))%x380);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x389 = INT64_MAX;
	int64_t x390 = INT64_MIN;
	volatile uint64_t x391 = UINT64_MAX;
	uint16_t x392 = UINT16_MAX;

    t36 = ((x389>>(x390/x391))%x392);

    if (t36 != 32767LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x413 = 4U;
	int8_t x414 = INT8_MIN;
	static uint8_t x415 = UINT8_MAX;
	static int32_t x416 = INT32_MIN;

    t37 = ((x413>>(x414/x415))%x416);

    if (t37 != 4) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x421 = 91U;
	int8_t x422 = INT8_MAX;
	uint64_t x423 = UINT64_MAX;
	int64_t x424 = -1LL;
	volatile int64_t t38 = 24LL;

    t38 = ((x421>>(x422/x423))%x424);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x441 = UINT64_MAX;
	static int16_t x442 = 0;
	uint64_t t39 = 463604555LLU;

    t39 = ((x441>>(x442/x443))%x444);

    if (t39 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x458 = 5LLU;
	volatile int8_t x459 = INT8_MIN;
	static volatile int64_t t40 = -13280227LL;

    t40 = ((x457>>(x458/x459))%x460);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x473 = 190U;
	uint64_t x475 = UINT64_MAX;
	uint64_t x476 = UINT64_MAX;

    t41 = ((x473>>(x474/x475))%x476);

    if (t41 != 190LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x481 = 0;
	int16_t x482 = 47;
	volatile int64_t x483 = INT64_MIN;
	uint64_t x484 = 29104LLU;
	uint64_t t42 = 350255LLU;

    t42 = ((x481>>(x482/x483))%x484);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x497 = 55U;
	uint32_t x498 = 60U;
	int64_t x499 = INT64_MIN;
	int16_t x500 = INT16_MIN;
	int32_t t43 = 40422;

    t43 = ((x497>>(x498/x499))%x500);

    if (t43 != 55) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x518 = UINT32_MAX;
	int64_t x519 = INT64_MIN;
	int64_t x520 = INT64_MIN;
	int64_t t44 = 4LL;

    t44 = ((x517>>(x518/x519))%x520);

    if (t44 != 32767LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint16_t x525 = 1862U;
	int64_t x526 = -1LL;
	volatile int16_t x527 = -1;
	uint32_t x528 = UINT32_MAX;

    t45 = ((x525>>(x526/x527))%x528);

    if (t45 != 931U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x529 = UINT32_MAX;
	uint8_t x530 = UINT8_MAX;
	static uint64_t x531 = UINT64_MAX;
	uint32_t t46 = 2242U;

    t46 = ((x529>>(x530/x531))%x532);

    if (t46 != 771U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x542 = 11LLU;
	volatile int8_t x543 = -56;
	volatile uint64_t t47 = 1991525020556742246LLU;

    t47 = ((x541>>(x542/x543))%x544);

    if (t47 != 24859LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x582 = 19U;
	int64_t x583 = 27698550297126LL;
	volatile int16_t x584 = INT16_MIN;
	int32_t t48 = 140;

    t48 = ((x581>>(x582/x583))%x584);

    if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x586 = -5;
	volatile uint8_t x587 = 58U;
	uint32_t x588 = UINT32_MAX;
	volatile uint32_t t49 = 817U;

    t49 = ((x585>>(x586/x587))%x588);

    if (t49 != 86U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x593 = 737;
	volatile uint64_t x594 = UINT64_MAX;
	volatile int32_t t50 = 1014394057;

    t50 = ((x593>>(x594/x595))%x596);

    if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x601 = UINT64_MAX;
	int64_t x603 = INT64_MAX;

    t51 = ((x601>>(x602/x603))%x604);

    if (t51 != 13479LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x606 = -22846;
	int32_t x607 = INT32_MIN;
	int16_t x608 = -1;
	int32_t t52 = 10;

    t52 = ((x605>>(x606/x607))%x608);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x649 = INT64_MAX;
	int8_t x650 = INT8_MAX;
	static uint64_t x651 = 121004177222255LLU;
	uint8_t x652 = 3U;
	volatile int64_t t53 = -394248LL;

    t53 = ((x649>>(x650/x651))%x652);

    if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x661 = INT64_MAX;
	int32_t x662 = -1;
	uint16_t x663 = 17931U;
	int64_t t54 = -186917LL;

    t54 = ((x661>>(x662/x663))%x664);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x665 = UINT64_MAX;
	static uint32_t x666 = 460582U;
	volatile int32_t x667 = -1;
	int8_t x668 = INT8_MIN;
	uint64_t t55 = 163273998LLU;

    t55 = ((x665>>(x666/x667))%x668);

    if (t55 != 127LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int64_t x669 = INT64_MAX;
	int32_t x670 = INT32_MIN;
	int32_t x671 = INT32_MIN;
	int64_t x672 = 319544159436439LL;
	volatile int64_t t56 = 500631LL;

    t56 = ((x669>>(x670/x671))%x672);

    if (t56 != 24709440700255LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x677 = 915U;
	int16_t x678 = -1;
	static int8_t x679 = INT8_MIN;
	uint32_t t57 = 17226U;

    t57 = ((x677>>(x678/x679))%x680);

    if (t57 != 915U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x685 = UINT64_MAX;
	uint32_t x688 = 13567U;

    t58 = ((x685>>(x686/x687))%x688);

    if (t58 != 2867LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x697 = 93121740LL;
	int32_t x699 = INT32_MIN;
	int32_t x700 = INT32_MIN;
	static volatile int64_t t59 = 20113042897554819LL;

    t59 = ((x697>>(x698/x699))%x700);

    if (t59 != 93121740LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x701 = 32U;
	int32_t x704 = 16605799;

    t60 = ((x701>>(x702/x703))%x704);

    if (t60 != 32) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x705 = INT16_MAX;
	int32_t x707 = INT32_MAX;
	static volatile int32_t x708 = INT32_MIN;
	int32_t t61 = -878;

    t61 = ((x705>>(x706/x707))%x708);

    if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x722 = -10;
	static volatile int16_t x723 = -1;
	volatile int8_t x724 = INT8_MIN;

    t62 = ((x721>>(x722/x723))%x724);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x729 = UINT32_MAX;
	int8_t x730 = INT8_MIN;
	int32_t x731 = INT32_MAX;
	uint16_t x732 = UINT16_MAX;
	volatile uint32_t t63 = 56966241U;

    t63 = ((x729>>(x730/x731))%x732);

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x741 = UINT32_MAX;
	static int64_t x742 = -11LL;
	static volatile int32_t x743 = INT32_MAX;
	uint32_t t64 = 18U;

    t64 = ((x741>>(x742/x743))%x744);

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x761 = INT8_MAX;
	static int16_t x762 = -1;
	int64_t x763 = INT64_MIN;

    t65 = ((x761>>(x762/x763))%x764);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x765 = 2;
	volatile int16_t x766 = INT16_MAX;
	int32_t x767 = INT32_MAX;
	int64_t x768 = -94LL;
	int64_t t66 = -22882LL;

    t66 = ((x765>>(x766/x767))%x768);

    if (t66 != 2LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x769 = 795201711U;
	int8_t x770 = 0;
	uint16_t x771 = 11U;
	volatile int32_t x772 = -331911738;
	uint32_t t67 = 116749109U;

    t67 = ((x769>>(x770/x771))%x772);

    if (t67 != 795201711U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x789 = 1392589709U;
	static int8_t x790 = INT8_MAX;
	int64_t x791 = -954187042164870LL;
	static volatile uint32_t x792 = 7922U;
	volatile uint32_t t68 = 1U;

    t68 = ((x789>>(x790/x791))%x792);

    if (t68 != 5095U) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x818 = -2844002;
	int32_t x819 = INT32_MIN;
	int32_t t69 = -222;

    t69 = ((x817>>(x818/x819))%x820);

    if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x826 = -1;
	uint16_t x827 = UINT16_MAX;
	volatile int32_t t70 = -9;

    t70 = ((x825>>(x826/x827))%x828);

    if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x845 = 1;
	volatile int16_t x847 = INT16_MAX;
	static uint8_t x848 = 3U;

    t71 = ((x845>>(x846/x847))%x848);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint64_t x850 = UINT64_MAX;
	int8_t x851 = -21;
	int16_t x852 = -56;
	int32_t t72 = 85;

    t72 = ((x849>>(x850/x851))%x852);

    if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x857 = 10;
	int8_t x858 = INT8_MIN;
	static int8_t x860 = -1;

    t73 = ((x857>>(x858/x859))%x860);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x873 = 22515554LLU;
	int32_t x875 = -1;
	uint8_t x876 = 39U;
	uint64_t t74 = 1785767608246530LLU;

    t74 = ((x873>>(x874/x875))%x876);

    if (t74 != 35LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x905 = INT64_MAX;
	static uint16_t x908 = UINT16_MAX;
	int64_t t75 = 111576458877LL;

    t75 = ((x905>>(x906/x907))%x908);

    if (t75 != 32767LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x921 = UINT32_MAX;
	int8_t x922 = INT8_MIN;
	int32_t x923 = INT32_MIN;
	static int8_t x924 = -5;

    t76 = ((x921>>(x922/x923))%x924);

    if (t76 != 4U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x925 = 30LLU;
	uint8_t x926 = 10U;
	int32_t x927 = INT32_MIN;
	static int16_t x928 = -1;

    t77 = ((x925>>(x926/x927))%x928);

    if (t77 != 30LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x929 = INT32_MAX;
	static uint8_t x930 = UINT8_MAX;
	volatile uint32_t x932 = UINT32_MAX;
	volatile uint32_t t78 = 70U;

    t78 = ((x929>>(x930/x931))%x932);

    if (t78 != 1073741823U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x937 = UINT8_MAX;
	int32_t x938 = -1;
	static uint16_t x939 = 2U;

    t79 = ((x937>>(x938/x939))%x940);

    if (t79 != 255LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x945 = 9;
	int8_t x946 = -3;

    t80 = ((x945>>(x946/x947))%x948);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x953 = UINT16_MAX;
	uint32_t x954 = UINT32_MAX;
	volatile int64_t x956 = INT64_MAX;
	volatile int64_t t81 = 9032LL;

    t81 = ((x953>>(x954/x955))%x956);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x957 = UINT8_MAX;
	volatile uint64_t x958 = 35983390LLU;
	static int16_t x959 = -1;
	int32_t x960 = INT32_MIN;
	int32_t t82 = 334530;

    t82 = ((x957>>(x958/x959))%x960);

    if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x981 = 4LL;
	uint32_t x982 = UINT32_MAX;
	int8_t x983 = -1;
	volatile int8_t x984 = INT8_MAX;
	int64_t t83 = 182368618560782LL;

    t83 = ((x981>>(x982/x983))%x984);

    if (t83 != 2LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x985 = 33948688207196972LL;
	volatile int8_t x986 = 0;
	uint64_t x988 = UINT64_MAX;

    t84 = ((x985>>(x986/x987))%x988);

    if (t84 != 33948688207196972LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x1041 = INT8_MAX;
	uint8_t x1042 = UINT8_MAX;
	int64_t x1043 = 48637014577780LL;
	int32_t x1044 = INT32_MAX;
	int32_t t85 = -30690;

    t85 = ((x1041>>(x1042/x1043))%x1044);

    if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x1045 = 76U;
	static int16_t x1046 = 0;
	uint64_t x1047 = 1LLU;
	int16_t x1048 = INT16_MIN;
	static int32_t t86 = -27;

    t86 = ((x1045>>(x1046/x1047))%x1048);

    if (t86 != 76) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x1058 = 132628LLU;
	volatile int16_t x1059 = -7;
	int8_t x1060 = INT8_MIN;
	volatile uint32_t t87 = 138U;

    t87 = ((x1057>>(x1058/x1059))%x1060);

    if (t87 != 127U) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x1069 = INT32_MAX;
	int16_t x1070 = INT16_MIN;
	int32_t x1071 = INT32_MIN;
	uint32_t x1072 = 1U;
	uint32_t t88 = 0U;

    t88 = ((x1069>>(x1070/x1071))%x1072);

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int32_t x1078 = INT32_MIN;
	static int64_t x1080 = INT64_MIN;

    t89 = ((x1077>>(x1078/x1079))%x1080);

    if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint64_t x1089 = 3LLU;
	int64_t x1090 = INT64_MIN;
	int32_t x1092 = INT32_MIN;
	static volatile uint64_t t90 = 47LLU;

    t90 = ((x1089>>(x1090/x1091))%x1092);

    if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x1113 = 1407864LLU;
	uint16_t x1114 = 1U;
	uint8_t x1115 = UINT8_MAX;
	static uint64_t t91 = 3927647099632LLU;

    t91 = ((x1113>>(x1114/x1115))%x1116);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x1117 = 58U;
	int8_t x1118 = INT8_MIN;
	int8_t x1120 = INT8_MAX;
	volatile int32_t t92 = -30819;

    t92 = ((x1117>>(x1118/x1119))%x1120);

    if (t92 != 58) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x1137 = 15U;
	int64_t x1138 = -1LL;
	volatile int8_t x1139 = -1;
	int32_t x1140 = 7;
	uint32_t t93 = 3003138U;

    t93 = ((x1137>>(x1138/x1139))%x1140);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x1141 = 3242497;
	static uint8_t x1142 = 11U;
	uint32_t x1143 = UINT32_MAX;
	uint64_t x1144 = 14343LLU;
	volatile uint64_t t94 = 820LLU;

    t94 = ((x1141>>(x1142/x1143))%x1144);

    if (t94 != 979LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x1157 = 13U;
	int64_t x1159 = 71353799135785LL;
	int32_t x1160 = -1069476357;
	int32_t t95 = -13182;

    t95 = ((x1157>>(x1158/x1159))%x1160);

    if (t95 != 13) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x1166 = -1;
	int64_t x1168 = INT64_MIN;
	volatile int64_t t96 = -1LL;

    t96 = ((x1165>>(x1166/x1167))%x1168);

    if (t96 != 2LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x1181 = INT64_MAX;
	volatile uint8_t x1182 = UINT8_MAX;
	int16_t x1183 = -2782;
	static int8_t x1184 = -7;
	static int64_t t97 = -46984341565252142LL;

    t97 = ((x1181>>(x1182/x1183))%x1184);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x1193 = UINT64_MAX;
	uint8_t x1194 = 19U;
	static int16_t x1196 = INT16_MIN;
	volatile uint64_t t98 = 5682534094000732LLU;

    t98 = ((x1193>>(x1194/x1195))%x1196);

    if (t98 != 32767LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x1201 = 14U;
	int8_t x1202 = -1;
	int32_t x1203 = -98653262;
	volatile int32_t x1204 = 1;
	int32_t t99 = 43;

    t99 = ((x1201>>(x1202/x1203))%x1204);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x1221 = UINT32_MAX;
	int32_t x1222 = -1;
	int8_t x1223 = -1;
	volatile uint64_t x1224 = 99059162LLU;

    t100 = ((x1221>>(x1222/x1223))%x1224);

    if (t100 != 67241245LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int8_t x1230 = INT8_MIN;
	static int32_t x1231 = 2785;
	int64_t x1232 = 268486LL;

    t101 = ((x1229>>(x1230/x1231))%x1232);

    if (t101 != 132619LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x1237 = UINT32_MAX;
	static int64_t x1238 = 44086865LL;
	volatile uint32_t x1239 = UINT32_MAX;
	static int8_t x1240 = 9;
	uint32_t t102 = 3348846U;

    t102 = ((x1237>>(x1238/x1239))%x1240);

    if (t102 != 3U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x1241 = 1742;
	int8_t x1242 = -3;
	uint16_t x1243 = 1075U;
	int32_t x1244 = INT32_MAX;
	volatile int32_t t103 = 114;

    t103 = ((x1241>>(x1242/x1243))%x1244);

    if (t103 != 1742) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x1253 = UINT8_MAX;
	int8_t x1254 = -1;
	static int32_t t104 = -30;

    t104 = ((x1253>>(x1254/x1255))%x1256);

    if (t104 != 255) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x1257 = UINT16_MAX;
	volatile int32_t x1258 = -53;
	static int16_t x1260 = INT16_MIN;

    t105 = ((x1257>>(x1258/x1259))%x1260);

    if (t105 != 32767) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x1285 = 43634986198239221LLU;
	static int8_t x1286 = -4;
	int16_t x1288 = INT16_MAX;
	volatile uint64_t t106 = 26674086LLU;

    t106 = ((x1285>>(x1286/x1287))%x1288);

    if (t106 != 31796LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x1293 = 519U;
	int8_t x1294 = 0;
	static int8_t x1296 = -1;
	volatile int32_t t107 = -18398410;

    t107 = ((x1293>>(x1294/x1295))%x1296);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x1313 = UINT32_MAX;
	volatile uint16_t x1314 = 168U;
	int8_t x1315 = INT8_MAX;
	uint32_t t108 = 154U;

    t108 = ((x1313>>(x1314/x1315))%x1316);

    if (t108 != 2147483647U) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x1357 = 409U;
	int8_t x1358 = INT8_MIN;
	volatile uint8_t x1359 = UINT8_MAX;

    t109 = ((x1357>>(x1358/x1359))%x1360);

    if (t109 != 25) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x1378 = 7496U;
	int64_t x1379 = -14467052LL;
	uint64_t x1380 = 142779LLU;
	volatile uint64_t t110 = 30642440062806LLU;

    t110 = ((x1377>>(x1378/x1379))%x1380);

    if (t110 != 37092LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x1385 = 8292291084LLU;
	volatile uint64_t x1386 = 7369295LLU;
	volatile uint64_t x1388 = 1387888LLU;

    t111 = ((x1385>>(x1386/x1387))%x1388);

    if (t111 != 1048172LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x1393 = 3U;
	uint8_t x1394 = 3U;
	static uint16_t x1395 = 12334U;
	int8_t x1396 = INT8_MAX;
	volatile int32_t t112 = 507;

    t112 = ((x1393>>(x1394/x1395))%x1396);

    if (t112 != 3) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x1398 = -88504LL;
	uint32_t x1399 = UINT32_MAX;
	uint16_t x1400 = UINT16_MAX;
	volatile int64_t t113 = -1062173612801570124LL;

    t113 = ((x1397>>(x1398/x1399))%x1400);

    if (t113 != 44534LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x1401 = UINT64_MAX;
	static volatile uint64_t x1402 = 15102894581651852LLU;
	int8_t x1403 = -15;
	volatile uint64_t t114 = 89948456718731LLU;

    t114 = ((x1401>>(x1402/x1403))%x1404);

    if (t114 != 32767LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x1405 = INT32_MAX;
	int64_t x1406 = 1021269857682533LL;
	int64_t x1407 = INT64_MIN;
	static int8_t x1408 = -15;
	volatile int32_t t115 = 0;

    t115 = ((x1405>>(x1406/x1407))%x1408);

    if (t115 != 7) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x1409 = INT32_MAX;
	volatile int32_t x1410 = INT32_MIN;
	int32_t x1411 = INT32_MIN;
	volatile int32_t x1412 = INT32_MIN;
	volatile int32_t t116 = -1;

    t116 = ((x1409>>(x1410/x1411))%x1412);

    if (t116 != 1073741823) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x1417 = 19259307720LLU;
	int32_t x1418 = -1;
	int32_t x1419 = INT32_MIN;
	int64_t x1420 = INT64_MAX;
	volatile uint64_t t117 = 287LLU;

    t117 = ((x1417>>(x1418/x1419))%x1420);

    if (t117 != 19259307720LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x1425 = UINT8_MAX;
	int16_t x1426 = -1;
	static volatile int64_t x1427 = INT64_MIN;
	int32_t x1428 = INT32_MAX;
	volatile int32_t t118 = -15217277;

    t118 = ((x1425>>(x1426/x1427))%x1428);

    if (t118 != 255) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x1461 = UINT32_MAX;
	int16_t x1462 = INT16_MAX;
	int16_t x1463 = INT16_MIN;
	uint8_t x1464 = UINT8_MAX;
	static uint32_t t119 = 1139665689U;

    t119 = ((x1461>>(x1462/x1463))%x1464);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x1465 = 1U;
	uint16_t x1466 = UINT16_MAX;
	static uint32_t x1467 = 232842910U;

    t120 = ((x1465>>(x1466/x1467))%x1468);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x1479 = INT16_MIN;
	volatile int32_t t121 = 63;

    t121 = ((x1477>>(x1478/x1479))%x1480);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x1489 = INT64_MAX;
	static int64_t x1490 = -1LL;
	int64_t x1491 = INT64_MIN;
	static volatile int64_t t122 = -38349LL;

    t122 = ((x1489>>(x1490/x1491))%x1492);

    if (t122 != 1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int32_t x1501 = INT32_MAX;
	int16_t x1502 = INT16_MAX;
	volatile int64_t x1503 = -52898554LL;
	static int32_t t123 = 478773444;

    t123 = ((x1501>>(x1502/x1503))%x1504);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x1521 = 265597055U;
	volatile uint8_t x1522 = 6U;
	static uint32_t t124 = 1537533U;

    t124 = ((x1521>>(x1522/x1523))%x1524);

    if (t124 != 49235U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x1525 = 41U;
	static uint64_t x1526 = 1270358653931428425LLU;
	volatile int16_t x1528 = 587;
	static volatile int32_t t125 = 525733275;

    t125 = ((x1525>>(x1526/x1527))%x1528);

    if (t125 != 41) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x1545 = 0;
	int32_t x1546 = -1;
	int8_t x1547 = INT8_MAX;
	static int8_t x1548 = -1;
	int32_t t126 = 320;

    t126 = ((x1545>>(x1546/x1547))%x1548);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x1570 = 376188402LLU;
	int16_t x1571 = -1;
	int8_t x1572 = INT8_MAX;
	static uint32_t t127 = 1950122U;

    t127 = ((x1569>>(x1570/x1571))%x1572);

    if (t127 != 94U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x1585 = INT8_MAX;
	int16_t x1586 = 21;
	volatile int8_t x1587 = INT8_MIN;
	volatile int32_t t128 = -57895;

    t128 = ((x1585>>(x1586/x1587))%x1588);

    if (t128 != 127) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x1593 = 48;
	volatile int16_t x1595 = 4413;
	uint32_t x1596 = UINT32_MAX;
	uint32_t t129 = 642013U;

    t129 = ((x1593>>(x1594/x1595))%x1596);

    if (t129 != 48U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x1621 = 2585U;
	uint64_t x1622 = UINT64_MAX;
	static uint64_t x1623 = 2616519568282689318LLU;
	volatile int16_t x1624 = INT16_MIN;

    t130 = ((x1621>>(x1622/x1623))%x1624);

    if (t130 != 20U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x1649 = INT8_MAX;
	uint8_t x1650 = UINT8_MAX;
	uint64_t x1651 = 91059LLU;
	volatile uint16_t x1652 = 155U;
	int32_t t131 = 1;

    t131 = ((x1649>>(x1650/x1651))%x1652);

    if (t131 != 127) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x1661 = 21;
	int8_t x1662 = INT8_MIN;
	int16_t x1663 = INT16_MAX;
	volatile int64_t x1664 = -2246747377585007LL;
	volatile int64_t t132 = 7266699LL;

    t132 = ((x1661>>(x1662/x1663))%x1664);

    if (t132 != 21LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x1674 = INT8_MIN;
	int8_t x1675 = INT8_MIN;
	int8_t x1676 = INT8_MIN;
	int64_t t133 = 3LL;

    t133 = ((x1673>>(x1674/x1675))%x1676);

    if (t133 != 127LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x1678 = 175155742370482LLU;
	uint64_t x1679 = UINT64_MAX;
	volatile uint32_t x1680 = 34U;
	uint64_t t134 = 42034782284LLU;

    t134 = ((x1677>>(x1678/x1679))%x1680);

    if (t134 != 11LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x1685 = UINT8_MAX;
	static int8_t x1686 = INT8_MIN;
	uint16_t x1687 = 2423U;
	static volatile int32_t x1688 = INT32_MIN;
	int32_t t135 = 49;

    t135 = ((x1685>>(x1686/x1687))%x1688);

    if (t135 != 255) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x1725 = 105U;
	volatile int32_t x1726 = INT32_MAX;
	uint64_t x1727 = UINT64_MAX;
	volatile uint64_t x1728 = UINT64_MAX;
	volatile uint64_t t136 = 300LLU;

    t136 = ((x1725>>(x1726/x1727))%x1728);

    if (t136 != 105LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int16_t x1729 = INT16_MAX;
	int16_t x1730 = 1;
	static int32_t x1731 = 40643743;
	static volatile int64_t t137 = 32845509557LL;

    t137 = ((x1729>>(x1730/x1731))%x1732);

    if (t137 != 32767LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x1737 = 151716169U;
	int8_t x1738 = -3;
	static int16_t x1739 = INT16_MIN;
	volatile int32_t x1740 = INT32_MAX;

    t138 = ((x1737>>(x1738/x1739))%x1740);

    if (t138 != 151716169U) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x1753 = INT32_MAX;
	uint8_t x1754 = 30U;
	volatile int16_t x1755 = INT16_MIN;
	uint16_t x1756 = 1020U;

    t139 = ((x1753>>(x1754/x1755))%x1756);

    if (t139 != 127) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x1763 = 1381473842U;
	static uint8_t x1764 = UINT8_MAX;
	volatile int32_t t140 = 1902437;

    t140 = ((x1761>>(x1762/x1763))%x1764);

    if (t140 != 59) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x1773 = 43U;
	int64_t x1775 = INT64_MAX;
	int8_t x1776 = -57;
	volatile int32_t t141 = -8007656;

    t141 = ((x1773>>(x1774/x1775))%x1776);

    if (t141 != 10) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x1802 = UINT64_MAX;
	int32_t x1803 = -1;
	int32_t x1804 = INT32_MAX;
	volatile int32_t t142 = -5;

    t142 = ((x1801>>(x1802/x1803))%x1804);

    if (t142 != 127) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x1809 = 7U;
	static int32_t x1810 = -1;
	static uint8_t x1811 = 13U;
	uint8_t x1812 = UINT8_MAX;

    t143 = ((x1809>>(x1810/x1811))%x1812);

    if (t143 != 7) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x1817 = 9U;
	int64_t x1818 = INT64_MAX;
	int64_t x1819 = INT64_MIN;
	int8_t x1820 = INT8_MIN;

    t144 = ((x1817>>(x1818/x1819))%x1820);

    if (t144 != 9) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x1833 = 21U;
	int64_t x1834 = 0LL;
	static uint16_t x1835 = 61U;
	int32_t t145 = -2;

    t145 = ((x1833>>(x1834/x1835))%x1836);

    if (t145 != 21) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x1873 = 2441685627670LLU;
	int16_t x1874 = INT16_MIN;
	int32_t x1875 = -413401173;
	int64_t x1876 = INT64_MIN;

    t146 = ((x1873>>(x1874/x1875))%x1876);

    if (t146 != 2441685627670LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x1885 = 382000622251906LLU;
	uint64_t x1887 = UINT64_MAX;
	volatile uint64_t t147 = 782097279388520663LLU;

    t147 = ((x1885>>(x1886/x1887))%x1888);

    if (t147 != 382000622251906LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x1889 = 34579822294845LLU;
	static volatile int16_t x1890 = -35;
	uint8_t x1891 = UINT8_MAX;
	int8_t x1892 = INT8_MIN;
	uint64_t t148 = 4998058223545LLU;

    t148 = ((x1889>>(x1890/x1891))%x1892);

    if (t148 != 34579822294845LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1893 = INT64_MAX;
	int8_t x1894 = INT8_MAX;
	int32_t x1895 = -82397;
	int16_t x1896 = -1169;

    t149 = ((x1893>>(x1894/x1895))%x1896);

    if (t149 != 441LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x1897 = 14U;
	int64_t x1898 = INT64_MIN;
	int32_t x1900 = -1;
	volatile int32_t t150 = -418535;

    t150 = ((x1897>>(x1898/x1899))%x1900);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1905 = INT8_MAX;
	volatile int16_t x1907 = -71;

    t151 = ((x1905>>(x1906/x1907))%x1908);

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x1921 = UINT64_MAX;
	int16_t x1922 = INT16_MAX;
	int64_t x1923 = INT64_MIN;

    t152 = ((x1921>>(x1922/x1923))%x1924);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x1925 = UINT8_MAX;
	uint64_t x1926 = UINT64_MAX;
	volatile int32_t x1927 = -41340;
	int32_t x1928 = INT32_MAX;

    t153 = ((x1925>>(x1926/x1927))%x1928);

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x1939 = 3U;
	static int16_t x1940 = 1367;
	int32_t t154 = 13;

    t154 = ((x1937>>(x1938/x1939))%x1940);

    if (t154 != 1286) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x1941 = UINT32_MAX;
	uint32_t x1942 = 37872U;
	int8_t x1943 = -3;
	int16_t x1944 = -1;
	volatile uint32_t t155 = 1U;

    t155 = ((x1941>>(x1942/x1943))%x1944);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1945 = 471U;
	static uint64_t x1946 = 16133LLU;
	uint16_t x1947 = UINT16_MAX;
	int16_t x1948 = INT16_MIN;
	static int32_t t156 = -13795285;

    t156 = ((x1945>>(x1946/x1947))%x1948);

    if (t156 != 471) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x1949 = 696414LL;
	uint64_t x1950 = 11900707088096LLU;
	static volatile int8_t x1951 = -1;
	int64_t t157 = 1LL;

    t157 = ((x1949>>(x1950/x1951))%x1952);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x1953 = 3109413533794LLU;
	int8_t x1954 = -1;
	static int16_t x1955 = INT16_MIN;
	static volatile uint64_t t158 = 125781981330016561LLU;

    t158 = ((x1953>>(x1954/x1955))%x1956);

    if (t158 != 1LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1973 = 28942453947429975LLU;
	int16_t x1974 = INT16_MAX;
	static uint64_t x1975 = UINT64_MAX;
	volatile uint16_t x1976 = 786U;
	volatile uint64_t t159 = 987364781454LLU;

    t159 = ((x1973>>(x1974/x1975))%x1976);

    if (t159 != 357LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x1997 = 89252422U;
	uint8_t x1998 = 89U;
	volatile int16_t x1999 = INT16_MAX;
	int16_t x2000 = -1;
	uint32_t t160 = 2038307456U;

    t160 = ((x1997>>(x1998/x1999))%x2000);

    if (t160 != 89252422U) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x2002 = -29;
	int8_t x2003 = -1;
	uint64_t t161 = 2173886LLU;

    t161 = ((x2001>>(x2002/x2003))%x2004);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x2005 = INT8_MAX;
	static int8_t x2006 = -13;
	uint8_t x2007 = UINT8_MAX;
	static int16_t x2008 = -1417;

    t162 = ((x2005>>(x2006/x2007))%x2008);

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x2025 = 28048404U;
	int16_t x2026 = INT16_MIN;
	int64_t x2027 = INT64_MIN;
	static uint64_t x2028 = 173965029321150LLU;
	uint64_t t163 = 91332LLU;

    t163 = ((x2025>>(x2026/x2027))%x2028);

    if (t163 != 28048404LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x2041 = 1U;
	int8_t x2042 = 0;
	int8_t x2043 = -1;
	uint64_t x2044 = 12701994LLU;
	uint64_t t164 = 128LLU;

    t164 = ((x2041>>(x2042/x2043))%x2044);

    if (t164 != 1LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x2045 = UINT8_MAX;
	static int32_t x2046 = -1225;
	int16_t x2047 = INT16_MAX;
	volatile int8_t x2048 = -1;
	int32_t t165 = 15;

    t165 = ((x2045>>(x2046/x2047))%x2048);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x2049 = 149712;
	int64_t x2050 = -1LL;
	int32_t x2051 = INT32_MIN;
	volatile int64_t x2052 = INT64_MAX;

    t166 = ((x2049>>(x2050/x2051))%x2052);

    if (t166 != 149712LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x2061 = 189182829133880LL;
	int8_t x2062 = INT8_MAX;
	int64_t x2064 = 3629LL;
	volatile int64_t t167 = -572761386453565508LL;

    t167 = ((x2061>>(x2062/x2063))%x2064);

    if (t167 != 3008LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x2069 = 103716133;
	static volatile int64_t x2070 = -1LL;
	uint64_t x2071 = UINT64_MAX;
	static volatile uint64_t t168 = 260175LLU;

    t168 = ((x2069>>(x2070/x2071))%x2072);

    if (t168 != 51858066LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x2078 = -1;
	static int32_t x2080 = 1363;
	int32_t t169 = -2;

    t169 = ((x2077>>(x2078/x2079))%x2080);

    if (t169 != 255) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x2089 = 1U;
	int8_t x2090 = -1;
	volatile int16_t x2092 = INT16_MIN;

    t170 = ((x2089>>(x2090/x2091))%x2092);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x2093 = 336LLU;
	int8_t x2095 = INT8_MIN;
	volatile uint64_t t171 = 26LLU;

    t171 = ((x2093>>(x2094/x2095))%x2096);

    if (t171 != 336LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x2097 = 25993741075163195LL;
	int16_t x2098 = INT16_MAX;

    t172 = ((x2097>>(x2098/x2099))%x2100);

    if (t172 != 25993741075163195LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x2113 = 12;
	int64_t x2116 = INT64_MIN;

    t173 = ((x2113>>(x2114/x2115))%x2116);

    if (t173 != 12LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x2133 = UINT8_MAX;
	static volatile uint64_t x2134 = UINT64_MAX;
	int64_t x2135 = -1LL;
	volatile int8_t x2136 = INT8_MIN;
	static volatile int32_t t174 = 8439;

    t174 = ((x2133>>(x2134/x2135))%x2136);

    if (t174 != 127) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x2145 = UINT32_MAX;
	volatile int16_t x2146 = -6;
	int32_t x2147 = INT32_MIN;
	volatile int32_t x2148 = -34;
	static volatile uint32_t t175 = 78221U;

    t175 = ((x2145>>(x2146/x2147))%x2148);

    if (t175 != 33U) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x2149 = 65;
	int8_t x2150 = INT8_MIN;
	uint32_t x2151 = UINT32_MAX;
	volatile int16_t x2152 = -9359;

    t176 = ((x2149>>(x2150/x2151))%x2152);

    if (t176 != 65) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x2173 = 7359659152LLU;
	uint16_t x2174 = UINT16_MAX;
	volatile uint32_t x2175 = 1298537643U;
	static int16_t x2176 = INT16_MIN;
	uint64_t t177 = 178750LLU;

    t177 = ((x2173>>(x2174/x2175))%x2176);

    if (t177 != 7359659152LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x2177 = 0U;
	uint8_t x2178 = UINT8_MAX;
	volatile int16_t x2179 = INT16_MIN;
	volatile int8_t x2180 = INT8_MIN;
	int32_t t178 = 436538;

    t178 = ((x2177>>(x2178/x2179))%x2180);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x2189 = 5178091LL;
	int16_t x2190 = -1;
	int8_t x2191 = -19;
	volatile int64_t x2192 = INT64_MIN;
	volatile int64_t t179 = 1092LL;

    t179 = ((x2189>>(x2190/x2191))%x2192);

    if (t179 != 5178091LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int8_t x2209 = 0;
	static volatile int32_t x2210 = 0;
	int32_t x2211 = -26822936;
	static int16_t x2212 = INT16_MIN;

    t180 = ((x2209>>(x2210/x2211))%x2212);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x2225 = 3;
	static int8_t x2226 = -1;
	int32_t x2228 = -1;
	static int32_t t181 = -283;

    t181 = ((x2225>>(x2226/x2227))%x2228);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x2233 = 3;
	int32_t x2234 = -1013;
	static int16_t x2235 = INT16_MIN;
	volatile int32_t t182 = 0;

    t182 = ((x2233>>(x2234/x2235))%x2236);

    if (t182 != 3) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint32_t x2242 = UINT32_MAX;
	volatile int32_t x2243 = -1;
	volatile int32_t t183 = -366396344;

    t183 = ((x2241>>(x2242/x2243))%x2244);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x2249 = UINT32_MAX;
	static int8_t x2250 = 17;
	static uint16_t x2251 = 4U;
	uint32_t t184 = 34600U;

    t184 = ((x2249>>(x2250/x2251))%x2252);

    if (t184 != 268435455U) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x2277 = INT16_MAX;
	uint16_t x2278 = 17009U;
	volatile int32_t x2279 = -63973;
	static int16_t x2280 = INT16_MIN;
	static volatile int32_t t185 = 120704;

    t185 = ((x2277>>(x2278/x2279))%x2280);

    if (t185 != 32767) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x2285 = 132363347549LLU;
	volatile uint32_t x2286 = 24286755U;
	volatile int64_t x2288 = INT64_MAX;
	volatile uint64_t t186 = 347126418226163LLU;

    t186 = ((x2285>>(x2286/x2287))%x2288);

    if (t186 != 132363347549LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x2305 = UINT8_MAX;
	static volatile int32_t x2307 = INT32_MAX;
	volatile int8_t x2308 = -1;

    t187 = ((x2305>>(x2306/x2307))%x2308);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x2321 = 490111U;
	uint64_t x2323 = UINT64_MAX;
	uint16_t x2324 = 70U;
	volatile uint32_t t188 = 426131576U;

    t188 = ((x2321>>(x2322/x2323))%x2324);

    if (t188 != 41U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x2329 = 7U;
	int16_t x2330 = -1517;
	int64_t x2331 = 3096808530901782LL;
	int16_t x2332 = INT16_MIN;

    t189 = ((x2329>>(x2330/x2331))%x2332);

    if (t189 != 7) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x2333 = INT32_MAX;
	uint16_t x2334 = 1380U;
	static uint32_t x2335 = 338U;
	volatile int32_t x2336 = -1;
	int32_t t190 = 17;

    t190 = ((x2333>>(x2334/x2335))%x2336);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x2337 = 783593;
	volatile int8_t x2338 = -1;
	uint64_t x2339 = UINT64_MAX;
	volatile int32_t t191 = 374;

    t191 = ((x2337>>(x2338/x2339))%x2340);

    if (t191 != 391796) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x2341 = 16;
	uint64_t x2342 = UINT64_MAX;
	int8_t x2343 = -1;
	uint64_t x2344 = 115258327268LLU;
	static uint64_t t192 = 520037101660LLU;

    t192 = ((x2341>>(x2342/x2343))%x2344);

    if (t192 != 8LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x2349 = 410U;
	int32_t x2350 = 0;
	static uint8_t x2351 = 3U;
	static int16_t x2352 = INT16_MAX;
	volatile int32_t t193 = -2423;

    t193 = ((x2349>>(x2350/x2351))%x2352);

    if (t193 != 410) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x2369 = INT8_MAX;
	static volatile int16_t x2370 = INT16_MIN;
	volatile int32_t x2371 = INT32_MAX;
	int32_t x2372 = -1;
	volatile int32_t t194 = 435;

    t194 = ((x2369>>(x2370/x2371))%x2372);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x2374 = 1840516984762901082LLU;
	int8_t x2375 = INT8_MIN;
	volatile int8_t x2376 = 60;
	int32_t t195 = 452659477;

    t195 = ((x2373>>(x2374/x2375))%x2376);

    if (t195 != 31) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x2401 = 0U;
	static int32_t x2402 = -1;
	int8_t x2403 = 43;
	int16_t x2404 = 1;
	volatile uint32_t t196 = 3U;

    t196 = ((x2401>>(x2402/x2403))%x2404);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x2405 = INT64_MAX;
	volatile int64_t t197 = -122522279425858LL;

    t197 = ((x2405>>(x2406/x2407))%x2408);

    if (t197 != 127LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x2409 = 5105;
	static int64_t x2410 = 1250884LL;
	static int32_t x2411 = INT32_MIN;
	int64_t x2412 = -1LL;
	static volatile int64_t t198 = 1308982685247LL;

    t198 = ((x2409>>(x2410/x2411))%x2412);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x2418 = UINT8_MAX;
	int64_t x2419 = INT64_MIN;
	volatile int32_t t199 = 95;

    t199 = ((x2417>>(x2418/x2419))%x2420);

    if (t199 != 5486) { NG(); } else { ; }
	
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


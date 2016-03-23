
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

static volatile int8_t x30 = -1;
int16_t x31 = 8400;
int8_t x40 = INT8_MIN;
volatile int64_t x53 = -1LL;
static int32_t x55 = -1;
volatile int64_t t3 = 447467481431632158LL;
int64_t t4 = -1LL;
int16_t x101 = INT16_MIN;
uint8_t x110 = 66U;
static volatile int64_t x112 = -1LL;
volatile int32_t t9 = -4415;
int8_t x141 = INT8_MIN;
volatile int32_t t11 = -97073523;
volatile uint32_t t12 = 66U;
volatile uint32_t x149 = UINT32_MAX;
static uint64_t x161 = 778469065051140425LLU;
volatile uint64_t x162 = 262274402LLU;
int64_t x163 = INT64_MAX;
volatile uint64_t t14 = 3707763016LLU;
int32_t x171 = -1197256;
static int16_t x181 = 29;
int32_t t18 = 18928;
int64_t t20 = -4140439LL;
static uint64_t x211 = UINT64_MAX;
uint16_t x216 = 30U;
static volatile int32_t x219 = INT32_MIN;
uint8_t x222 = 3U;
uint8_t x223 = UINT8_MAX;
volatile int32_t t25 = -10379291;
int8_t x226 = INT8_MIN;
volatile uint16_t x228 = 2829U;
volatile int32_t x243 = INT32_MIN;
volatile uint64_t t30 = 121613829309LLU;
int32_t t32 = -317699;
int64_t x291 = INT64_MAX;
uint16_t x302 = 418U;
static uint64_t x314 = 14613949139LLU;
volatile uint64_t t36 = 7LLU;
int8_t x326 = INT8_MAX;
static int8_t x328 = 3;
static int16_t x334 = 10367;
int64_t x339 = INT64_MAX;
volatile int32_t x346 = -5;
static volatile uint64_t x355 = 4524020772LLU;
volatile int64_t x363 = INT64_MIN;
int8_t x366 = -50;
volatile int32_t x378 = INT32_MIN;
int16_t x379 = -1;
int8_t x381 = -1;
static int64_t t48 = -6LL;
volatile int32_t t49 = -30;
int16_t x399 = INT16_MIN;
uint8_t x400 = 2U;
volatile int64_t t50 = 340693453418497848LL;
volatile int8_t x404 = INT8_MIN;
volatile int64_t t51 = -4697680734600LL;
static int32_t x405 = -1;
uint32_t t52 = UINT32_MAX;
volatile int32_t x413 = -1;
static int16_t x415 = INT16_MAX;
uint8_t x416 = UINT8_MAX;
volatile uint8_t x418 = 5U;
volatile uint64_t t56 = 3030315162573LLU;
static uint8_t x473 = 0U;
uint64_t x474 = 934476635LLU;
volatile uint8_t x500 = 59U;
int16_t x501 = -1;
volatile uint16_t x502 = 1U;
int32_t x503 = 389856;
int32_t t62 = -182410077;
uint32_t x509 = 55269220U;
static uint32_t x525 = UINT32_MAX;
static int8_t x546 = -25;
static int32_t x547 = INT32_MIN;
int32_t x585 = INT32_MIN;
int32_t x586 = INT32_MIN;
int64_t x609 = INT64_MIN;
int16_t x614 = 255;
int64_t x615 = INT64_MAX;
int64_t t75 = 3312801817819862165LL;
static int16_t x620 = -1;
static int8_t x646 = 12;
static int32_t t79 = -492851;
uint8_t x669 = 64U;
int64_t x694 = INT64_MAX;
int8_t x695 = 14;
int8_t x696 = -6;
static volatile int64_t x697 = INT64_MAX;
static int64_t x699 = INT64_MAX;
static int64_t x709 = INT64_MIN;
static uint32_t x710 = 18U;
uint8_t x760 = 2U;
int8_t x767 = -1;
static volatile uint32_t t94 = 10931U;
int64_t t95 = -4020320009LL;
uint16_t x806 = 149U;
int32_t t96 = 2;
uint64_t x818 = 777709LLU;
static int64_t x819 = INT64_MAX;
static volatile int8_t x828 = INT8_MIN;
uint32_t x838 = 178003671U;
int64_t x851 = INT64_MAX;
uint8_t x853 = UINT8_MAX;
int16_t x856 = INT16_MAX;
static uint8_t x859 = 7U;
int8_t x869 = 0;
int32_t x872 = INT32_MIN;
int32_t x877 = -31247;
int8_t x879 = -1;
int64_t x912 = -1LL;
static volatile int64_t t107 = -114752715LL;
int16_t x919 = INT16_MIN;
int64_t t110 = -1512590309445316LL;
volatile uint64_t t113 = 308753555422927LLU;
uint16_t x997 = UINT16_MAX;
volatile int16_t x998 = INT16_MIN;
int32_t x1013 = INT32_MAX;
int32_t x1015 = INT32_MIN;
uint16_t x1017 = UINT16_MAX;
static uint16_t x1020 = 14280U;
int8_t x1026 = INT8_MIN;
volatile int32_t x1053 = -1;
static int16_t x1081 = -1;
uint16_t x1082 = 41U;
int64_t x1117 = -2648147LL;
volatile int64_t x1118 = -643566302521876LL;
volatile int64_t t129 = 50198805590060LL;
volatile uint64_t t130 = 179919LLU;
int64_t x1139 = -126360955799171069LL;
static int16_t x1144 = -1;
static int8_t x1149 = INT8_MIN;
static int64_t t135 = 273990604069358708LL;
uint32_t x1153 = 25427U;
volatile uint64_t x1155 = 56261882923705924LLU;
int64_t x1167 = 60968092244488LL;
static volatile int64_t x1169 = INT64_MIN;
int32_t x1172 = 28;
int32_t x1179 = INT32_MIN;
static uint32_t x1180 = 35866U;
uint8_t x1195 = 8U;
int16_t x1198 = -1;
uint64_t x1259 = UINT64_MAX;
int16_t x1271 = 1495;
uint16_t x1280 = UINT16_MAX;
int64_t x1285 = 128765LL;
uint8_t x1288 = 33U;
uint8_t x1300 = UINT8_MAX;
int8_t x1303 = INT8_MIN;
int8_t x1304 = -1;
volatile int32_t t148 = INT32_MIN;
int32_t x1308 = -1;
volatile int64_t t149 = -804235LL;
volatile int32_t x1322 = -23386795;
volatile uint8_t x1325 = 2U;
static int64_t x1328 = INT64_MIN;
volatile int32_t x1335 = 4832;
int32_t x1337 = 22672;
int16_t x1339 = 2305;
int8_t x1357 = -1;
int32_t x1358 = -1;
int64_t x1373 = INT64_MAX;
int16_t x1374 = INT16_MAX;
int64_t x1381 = INT64_MAX;
int16_t x1383 = INT16_MIN;
int32_t x1407 = INT32_MAX;
int16_t x1408 = INT16_MAX;
uint32_t t160 = 749090267U;
int8_t x1410 = INT8_MAX;
static int8_t x1414 = INT8_MIN;
int8_t x1455 = INT8_MIN;
volatile int32_t x1467 = 56475;
int64_t x1469 = INT64_MIN;
uint16_t x1491 = UINT16_MAX;
int16_t x1492 = INT16_MAX;
int64_t x1495 = INT64_MAX;
int32_t x1506 = INT32_MIN;
volatile uint64_t t172 = 470968253612782013LLU;
static volatile int64_t x1541 = INT64_MIN;
int8_t x1545 = 1;
int16_t x1549 = INT16_MAX;
uint64_t t176 = UINT64_MAX;
int8_t x1560 = INT8_MIN;
volatile uint32_t x1563 = UINT32_MAX;
static volatile uint32_t t178 = 1552U;
uint64_t x1569 = 1431179354265LLU;
uint32_t x1570 = 25U;
volatile uint64_t t179 = 33552245792435904LLU;
volatile int64_t x1587 = INT64_MAX;
static uint64_t x1588 = 77630LLU;
int8_t x1678 = INT8_MIN;
uint8_t x1679 = UINT8_MAX;
volatile uint64_t t190 = 1686LLU;
int64_t x1697 = -1535LL;
volatile int32_t x1700 = INT32_MIN;
int8_t x1710 = INT8_MAX;
int32_t x1711 = -1;
int16_t x1751 = INT16_MIN;
int16_t x1783 = INT16_MAX;
volatile uint64_t t198 = 1172327878LLU;
int8_t x1789 = 0;
static uint32_t x1791 = UINT32_MAX;
volatile uint32_t t199 = 15221596U;


void f0(void) {
    	int8_t x25 = 7;
	static int8_t x26 = 1;
	int32_t x27 = INT32_MIN;
	uint64_t x28 = 20863LLU;
	static volatile uint64_t t0 = 33340245883LLU;

    t0 = (x25-(x26/(x27/x28)));

    if (t0 != 7LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x29 = UINT16_MAX;
	volatile uint32_t x32 = 5U;
	uint32_t t1 = 0U;

    t1 = (x29-(x30/(x31/x32)));

    if (t1 != 4292476303U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x37 = 5;
	uint32_t x38 = 44U;
	volatile int8_t x39 = INT8_MIN;
	volatile uint32_t t2 = 1701U;

    t2 = (x37-(x38/(x39/x40)));

    if (t2 != 4294967257U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x54 = INT8_MIN;
	uint32_t x56 = 99776993U;

    t3 = (x53-(x54/(x55/x56)));

    if (t3 != -99882958LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x61 = 117404105378LL;
	int8_t x62 = INT8_MAX;
	static uint32_t x63 = UINT32_MAX;
	volatile int8_t x64 = -1;

    t4 = (x61-(x62/(x63/x64)));

    if (t4 != 117404105251LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x97 = INT32_MIN;
	int8_t x98 = 26;
	volatile int64_t x99 = INT64_MIN;
	static int16_t x100 = INT16_MAX;
	volatile int64_t t5 = -3107720LL;

    t5 = (x97-(x98/(x99/x100)));

    if (t5 != -2147483648LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x102 = 1041418LLU;
	int64_t x103 = INT64_MIN;
	int16_t x104 = -320;
	volatile uint64_t t6 = 858452360042812253LLU;

    t6 = (x101-(x102/(x103/x104)));

    if (t6 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x105 = INT8_MIN;
	static int16_t x106 = INT16_MAX;
	int8_t x107 = -3;
	uint32_t x108 = 4086139U;
	volatile uint32_t t7 = 2546U;

    t7 = (x105-(x106/(x107/x108)));

    if (t7 != 4294967137U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x109 = 60U;
	volatile int32_t x111 = INT32_MAX;
	static volatile int64_t t8 = 6299230979838LL;

    t8 = (x109-(x110/(x111/x112)));

    if (t8 != 60LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x117 = -395;
	int16_t x118 = INT16_MAX;
	static int32_t x119 = INT32_MAX;
	int8_t x120 = -1;

    t9 = (x117-(x118/(x119/x120)));

    if (t9 != -395) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x125 = INT32_MAX;
	int16_t x126 = -1;
	volatile int64_t x127 = INT64_MAX;
	int16_t x128 = -1;
	volatile int64_t t10 = 7895813294192LL;

    t10 = (x125-(x126/(x127/x128)));

    if (t10 != 2147483647LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x142 = INT32_MIN;
	int32_t x143 = INT32_MIN;
	int8_t x144 = INT8_MIN;

    t11 = (x141-(x142/(x143/x144)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x145 = 186807U;
	int8_t x146 = INT8_MAX;
	int16_t x147 = INT16_MIN;
	int16_t x148 = INT16_MIN;

    t12 = (x145-(x146/(x147/x148)));

    if (t12 != 186680U) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x150 = -1;
	volatile int64_t x151 = INT64_MAX;
	static int16_t x152 = -1;
	static volatile int64_t t13 = 9944757274LL;

    t13 = (x149-(x150/(x151/x152)));

    if (t13 != 4294967295LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x164 = INT16_MIN;

    t14 = (x161-(x162/(x163/x164)));

    if (t14 != 778469065051140425LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x165 = INT32_MIN;
	static int32_t x166 = INT32_MAX;
	int64_t x167 = INT64_MIN;
	static int16_t x168 = INT16_MIN;
	volatile int64_t t15 = -117707100LL;

    t15 = (x165-(x166/(x167/x168)));

    if (t15 != -2147483648LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x169 = INT8_MAX;
	int16_t x170 = 0;
	int8_t x172 = 55;
	static volatile int32_t t16 = -185615;

    t16 = (x169-(x170/(x171/x172)));

    if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x173 = 2360260LLU;
	static int8_t x174 = INT8_MIN;
	int16_t x175 = -1;
	volatile int8_t x176 = 1;
	volatile uint64_t t17 = 73702983747LLU;

    t17 = (x173-(x174/(x175/x176)));

    if (t17 != 2360132LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x182 = INT16_MAX;
	int16_t x183 = 3503;
	uint16_t x184 = 1362U;

    t18 = (x181-(x182/(x183/x184)));

    if (t18 != -16354) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x185 = 229392587LLU;
	uint32_t x186 = UINT32_MAX;
	int32_t x187 = INT32_MIN;
	uint8_t x188 = 1U;
	uint64_t t19 = 19338817335206LLU;

    t19 = (x185-(x186/(x187/x188)));

    if (t19 != 229392586LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x189 = 417652766U;
	static int64_t x190 = INT64_MIN;
	uint8_t x191 = UINT8_MAX;
	int16_t x192 = -3;

    t20 = (x189-(x190/(x191/x192)));

    if (t20 != -108510258839462243LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x197 = -27421146;
	int64_t x198 = 1162LL;
	int32_t x199 = 3414568;
	int16_t x200 = 1;
	int64_t t21 = 78851658838LL;

    t21 = (x197-(x198/(x199/x200)));

    if (t21 != -27421146LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x209 = INT32_MAX;
	int64_t x210 = 367173067346LL;
	volatile int16_t x212 = -1;
	uint64_t t22 = 1950619LLU;

    t22 = (x209-(x210/(x211/x212)));

    if (t22 != 18446743708683967917LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x213 = INT32_MIN;
	int32_t x214 = INT32_MIN;
	volatile uint8_t x215 = UINT8_MAX;
	int32_t t23 = -198;

    t23 = (x213-(x214/(x215/x216)));

    if (t23 != -1879048192) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x217 = UINT32_MAX;
	int32_t x218 = INT32_MAX;
	static volatile int32_t x220 = INT32_MIN;
	static volatile uint32_t t24 = 191952U;

    t24 = (x217-(x218/(x219/x220)));

    if (t24 != 2147483648U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x221 = -1;
	int32_t x224 = -1;

    t25 = (x221-(x222/(x223/x224)));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x225 = 1U;
	volatile int16_t x227 = INT16_MIN;
	int32_t t26 = -52;

    t26 = (x225-(x226/(x227/x228)));

    if (t26 != -10) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x237 = INT32_MIN;
	uint16_t x238 = UINT16_MAX;
	volatile int16_t x239 = -1;
	int64_t x240 = -1LL;
	int64_t t27 = 3442200619457251207LL;

    t27 = (x237-(x238/(x239/x240)));

    if (t27 != -2147549183LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x241 = INT64_MIN;
	static uint32_t x242 = 3354U;
	int16_t x244 = -2025;
	volatile int64_t t28 = INT64_MIN;

    t28 = (x241-(x242/(x243/x244)));

    if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x245 = -9;
	uint16_t x246 = 16003U;
	static int32_t x247 = 2478;
	static volatile int32_t x248 = 30;
	int32_t t29 = -1;

    t29 = (x245-(x246/(x247/x248)));

    if (t29 != -204) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x249 = 64U;
	uint8_t x250 = 0U;
	static int16_t x251 = INT16_MIN;
	uint64_t x252 = 632293103055LLU;

    t30 = (x249-(x250/(x251/x252)));

    if (t30 != 64LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint32_t x265 = 134542924U;
	uint32_t x266 = UINT32_MAX;
	uint16_t x267 = 382U;
	int8_t x268 = 1;
	volatile uint32_t t31 = 6687U;

    t31 = (x265-(x266/(x267/x268)));

    if (t31 != 123299555U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x269 = 3;
	int32_t x270 = INT32_MAX;
	int8_t x271 = -3;
	int8_t x272 = -1;

    t32 = (x269-(x270/(x271/x272)));

    if (t32 != -715827879) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x289 = 9U;
	volatile int8_t x290 = 0;
	int8_t x292 = INT8_MIN;
	volatile int64_t t33 = -3LL;

    t33 = (x289-(x290/(x291/x292)));

    if (t33 != 9LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x297 = UINT8_MAX;
	int8_t x298 = INT8_MIN;
	int16_t x299 = INT16_MIN;
	static uint32_t x300 = 125713214U;
	volatile uint32_t t34 = 7U;

    t34 = (x297-(x298/(x299/x300)));

    if (t34 != 4168644988U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x301 = -1;
	static int16_t x303 = INT16_MIN;
	uint64_t x304 = 4531884628912692022LLU;
	volatile uint64_t t35 = 3200LLU;

    t35 = (x301-(x302/(x303/x304)));

    if (t35 != 18446744073709551511LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x313 = 0;
	int16_t x315 = INT16_MIN;
	uint64_t x316 = 3804792586912LLU;

    t36 = (x313-(x314/(x315/x316)));

    if (t36 != 18446744073709548602LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x325 = INT64_MAX;
	int8_t x327 = 36;
	volatile int64_t t37 = -19215442475LL;

    t37 = (x325-(x326/(x327/x328)));

    if (t37 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x329 = INT32_MIN;
	int16_t x330 = -1;
	int8_t x331 = INT8_MIN;
	int32_t x332 = -1;
	volatile int32_t t38 = INT32_MIN;

    t38 = (x329-(x330/(x331/x332)));

    if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x333 = -1LL;
	static int64_t x335 = INT64_MIN;
	int64_t x336 = 1003327469841LL;
	volatile int64_t t39 = 32107827519LL;

    t39 = (x333-(x334/(x335/x336)));

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x337 = 1676324U;
	static uint64_t x338 = UINT64_MAX;
	uint16_t x340 = 10801U;
	volatile uint64_t t40 = 8907984LLU;

    t40 = (x337-(x338/(x339/x340)));

    if (t40 != 1654722LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x345 = INT8_MIN;
	int32_t x347 = INT32_MAX;
	volatile int8_t x348 = INT8_MAX;
	volatile int32_t t41 = -11112;

    t41 = (x345-(x346/(x347/x348)));

    if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x353 = 8331826677058LL;
	uint32_t x354 = 1005757417U;
	static int32_t x356 = INT32_MAX;
	uint64_t t42 = 104404549550980LLU;

    t42 = (x353-(x354/(x355/x356)));

    if (t42 != 8331323798350LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x361 = INT64_MIN;
	int64_t x362 = -1LL;
	volatile int32_t x364 = INT32_MIN;
	int64_t t43 = INT64_MIN;

    t43 = (x361-(x362/(x363/x364)));

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x365 = -1;
	static volatile int8_t x367 = INT8_MIN;
	int8_t x368 = INT8_MIN;
	int32_t t44 = -35886;

    t44 = (x365-(x366/(x367/x368)));

    if (t44 != 49) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x369 = INT16_MIN;
	int32_t x370 = INT32_MIN;
	static int64_t x371 = INT64_MIN;
	volatile int64_t x372 = INT64_MAX;
	volatile int64_t t45 = -329130LL;

    t45 = (x369-(x370/(x371/x372)));

    if (t45 != -2147516416LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x373 = UINT32_MAX;
	int8_t x374 = INT8_MIN;
	static int64_t x375 = INT64_MIN;
	uint8_t x376 = UINT8_MAX;
	int64_t t46 = -1446LL;

    t46 = (x373-(x374/(x375/x376)));

    if (t46 != 4294967295LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x377 = -31;
	static int64_t x380 = -1LL;
	static int64_t t47 = -25217LL;

    t47 = (x377-(x378/(x379/x380)));

    if (t47 != 2147483617LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x382 = -1;
	volatile int64_t x383 = INT64_MIN;
	int8_t x384 = INT8_MAX;

    t48 = (x381-(x382/(x383/x384)));

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x393 = -1;
	int16_t x394 = INT16_MIN;
	volatile uint16_t x395 = UINT16_MAX;
	uint16_t x396 = UINT16_MAX;

    t49 = (x393-(x394/(x395/x396)));

    if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x397 = 49659952725796595LL;
	uint32_t x398 = 2240U;

    t50 = (x397-(x398/(x399/x400)));

    if (t50 != 49659952725796595LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x401 = -1;
	static int64_t x402 = INT64_MIN;
	uint16_t x403 = UINT16_MAX;

    t51 = (x401-(x402/(x403/x404)));

    if (t51 != -18049651735527938LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x406 = 1;
	uint32_t x407 = 644761514U;
	uint8_t x408 = 13U;

    t52 = (x405-(x406/(x407/x408)));

    if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x414 = 5;
	static volatile int32_t t53 = -1850;

    t53 = (x413-(x414/(x415/x416)));

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x417 = INT32_MIN;
	uint8_t x419 = UINT8_MAX;
	static uint16_t x420 = 11U;
	int32_t t54 = INT32_MIN;

    t54 = (x417-(x418/(x419/x420)));

    if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x425 = -1;
	volatile uint8_t x426 = 1U;
	uint16_t x427 = 9879U;
	int16_t x428 = -6875;
	volatile int32_t t55 = -2296;

    t55 = (x425-(x426/(x427/x428)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x437 = INT8_MAX;
	int16_t x438 = -1;
	uint64_t x439 = UINT64_MAX;
	volatile int32_t x440 = INT32_MIN;

    t56 = (x437-(x438/(x439/x440)));

    if (t56 != 128LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x445 = INT8_MIN;
	int32_t x446 = 73542989;
	uint8_t x447 = 3U;
	int64_t x448 = -1LL;
	int64_t t57 = -512376754LL;

    t57 = (x445-(x446/(x447/x448)));

    if (t57 != 24514201LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x457 = UINT16_MAX;
	static volatile int64_t x458 = 1024663606590387023LL;
	static uint64_t x459 = UINT64_MAX;
	int16_t x460 = -1;
	volatile uint64_t t58 = 19396401032LLU;

    t58 = (x457-(x458/(x459/x460)));

    if (t58 != 17422080467119230128LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x475 = UINT64_MAX;
	volatile int64_t x476 = INT64_MIN;
	uint64_t t59 = 572413164LLU;

    t59 = (x473-(x474/(x475/x476)));

    if (t59 != 18446744072775074981LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x493 = -1243644620623329268LL;
	int64_t x494 = INT64_MAX;
	uint64_t x495 = 98508826LLU;
	volatile int8_t x496 = INT8_MAX;
	uint64_t t60 = 32LLU;

    t60 = (x493-(x494/(x495/x496)));

    if (t60 != 17203087562087541413LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x497 = 457931U;
	static volatile uint8_t x498 = UINT8_MAX;
	volatile int8_t x499 = INT8_MIN;
	uint32_t t61 = 233983171U;

    t61 = (x497-(x498/(x499/x500)));

    if (t61 != 458058U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x504 = INT16_MIN;

    t62 = (x501-(x502/(x503/x504)));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x505 = INT8_MIN;
	uint16_t x506 = UINT16_MAX;
	static int8_t x507 = -26;
	volatile uint32_t x508 = 12U;
	uint32_t t63 = 240172U;

    t63 = (x505-(x506/(x507/x508)));

    if (t63 != 4294967168U) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x510 = INT64_MIN;
	volatile int16_t x511 = INT16_MIN;
	static int32_t x512 = 318;
	int64_t t64 = -54880737963LL;

    t64 = (x509-(x510/(x511/x512)));

    if (t64 != -89547301273417923LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x517 = 6U;
	uint64_t x518 = 5336299710905LLU;
	static uint16_t x519 = UINT16_MAX;
	int8_t x520 = -1;
	uint64_t t65 = 10743LLU;

    t65 = (x517-(x518/(x519/x520)));

    if (t65 != 6LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x526 = 52;
	int8_t x527 = INT8_MIN;
	int8_t x528 = INT8_MAX;
	volatile uint32_t t66 = 15982U;

    t66 = (x525-(x526/(x527/x528)));

    if (t66 != 51U) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x529 = -196;
	uint64_t x530 = 22218219194033638LLU;
	static int64_t x531 = INT64_MAX;
	int32_t x532 = INT32_MIN;
	volatile uint64_t t67 = 8799150433134LLU;

    t67 = (x529-(x530/(x531/x532)));

    if (t67 != 18446744073709551420LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x545 = 3U;
	int8_t x548 = INT8_MIN;
	int32_t t68 = -11635884;

    t68 = (x545-(x546/(x547/x548)));

    if (t68 != 3) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x549 = -11;
	static int8_t x550 = -1;
	volatile int64_t x551 = INT64_MIN;
	int64_t x552 = 1267739LL;
	int64_t t69 = 6068135LL;

    t69 = (x549-(x550/(x551/x552)));

    if (t69 != -11LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x569 = INT32_MIN;
	volatile int64_t x570 = INT64_MIN;
	volatile int32_t x571 = INT32_MIN;
	uint64_t x572 = 22745662667003944LLU;
	volatile uint64_t t70 = 142467263167796451LLU;

    t70 = (x569-(x570/(x571/x572)));

    if (t70 != 18435371233045600921LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x577 = 42677572364LLU;
	uint16_t x578 = 27U;
	int32_t x579 = 145583;
	uint64_t x580 = 5028LLU;
	static uint64_t t71 = 3767771290LLU;

    t71 = (x577-(x578/(x579/x580)));

    if (t71 != 42677572364LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x587 = INT64_MAX;
	uint32_t x588 = 854174U;
	int64_t t72 = 481700074063700581LL;

    t72 = (x585-(x586/(x587/x588)));

    if (t72 != -2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x589 = -1LL;
	int32_t x590 = -1;
	int32_t x591 = INT32_MIN;
	uint16_t x592 = 69U;
	static volatile int64_t t73 = -61811993455140865LL;

    t73 = (x589-(x590/(x591/x592)));

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x610 = INT32_MIN;
	static int64_t x611 = INT64_MAX;
	uint64_t x612 = 220801376183LLU;
	volatile uint64_t t74 = 14126295212985LLU;

    t74 = (x609-(x610/(x611/x612)));

    if (t74 != 9223371595252013680LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x613 = INT8_MIN;
	uint8_t x616 = UINT8_MAX;

    t75 = (x613-(x614/(x615/x616)));

    if (t75 != -128LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x617 = INT16_MIN;
	uint32_t x618 = UINT32_MAX;
	uint16_t x619 = 227U;
	volatile uint32_t t76 = 956U;

    t76 = (x617-(x618/(x619/x620)));

    if (t76 != 4294934527U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x629 = INT64_MAX;
	uint8_t x630 = 5U;
	volatile int16_t x631 = INT16_MIN;
	static uint32_t x632 = 434U;
	volatile int64_t t77 = INT64_MAX;

    t77 = (x629-(x630/(x631/x632)));

    if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x645 = 1219;
	uint16_t x647 = 7926U;
	int8_t x648 = INT8_MAX;
	int32_t t78 = -6768;

    t78 = (x645-(x646/(x647/x648)));

    if (t78 != 1219) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x653 = -1;
	uint16_t x654 = 6U;
	uint8_t x655 = UINT8_MAX;
	int8_t x656 = 48;

    t79 = (x653-(x654/(x655/x656)));

    if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x670 = -1;
	int16_t x671 = INT16_MIN;
	int16_t x672 = -1;
	int32_t t80 = -5170;

    t80 = (x669-(x670/(x671/x672)));

    if (t80 != 64) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int64_t x681 = 149623587LL;
	uint8_t x682 = 4U;
	int8_t x683 = INT8_MAX;
	uint8_t x684 = 6U;
	static int64_t t81 = -1025LL;

    t81 = (x681-(x682/(x683/x684)));

    if (t81 != 149623587LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x685 = UINT64_MAX;
	int32_t x686 = -1;
	int32_t x687 = INT32_MIN;
	int32_t x688 = INT32_MIN;
	volatile uint64_t t82 = 935LLU;

    t82 = (x685-(x686/(x687/x688)));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x693 = 1U;
	int64_t t83 = 3008153539061LL;

    t83 = (x693-(x694/(x695/x696)));

    if (t83 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x698 = -772;
	int32_t x700 = INT32_MIN;
	int64_t t84 = INT64_MAX;

    t84 = (x697-(x698/(x699/x700)));

    if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x711 = 397U;
	volatile int8_t x712 = INT8_MIN;
	static int64_t t85 = INT64_MIN;

    t85 = (x709-(x710/(x711/x712)));

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x717 = INT8_MIN;
	static uint32_t x718 = 18U;
	static uint16_t x719 = 2417U;
	uint8_t x720 = 1U;
	uint32_t t86 = 1424254U;

    t86 = (x717-(x718/(x719/x720)));

    if (t86 != 4294967168U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x733 = 70445906656187LLU;
	volatile int32_t x734 = INT32_MIN;
	static int8_t x735 = 38;
	uint8_t x736 = 1U;
	uint64_t t87 = 389443229804LLU;

    t87 = (x733-(x734/(x735/x736)));

    if (t87 != 70445963168914LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint64_t x741 = UINT64_MAX;
	int32_t x742 = INT32_MIN;
	volatile int64_t x743 = INT64_MIN;
	int64_t x744 = INT64_MAX;
	uint64_t t88 = 36012641363LLU;

    t88 = (x741-(x742/(x743/x744)));

    if (t88 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x753 = INT32_MIN;
	int16_t x754 = INT16_MAX;
	volatile uint32_t x755 = UINT32_MAX;
	int32_t x756 = -1;
	uint32_t t89 = 2U;

    t89 = (x753-(x754/(x755/x756)));

    if (t89 != 2147450881U) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x757 = -1LL;
	int16_t x758 = INT16_MIN;
	int8_t x759 = INT8_MAX;
	int64_t t90 = -949819979026912414LL;

    t90 = (x757-(x758/(x759/x760)));

    if (t90 != 519LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x761 = INT64_MAX;
	int8_t x762 = INT8_MIN;
	static int32_t x763 = INT32_MAX;
	volatile int16_t x764 = INT16_MIN;
	static volatile int64_t t91 = INT64_MAX;

    t91 = (x761-(x762/(x763/x764)));

    if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x765 = -1;
	volatile uint8_t x766 = 3U;
	volatile uint64_t x768 = 369LLU;
	uint64_t t92 = UINT64_MAX;

    t92 = (x765-(x766/(x767/x768)));

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x773 = 0U;
	uint8_t x774 = UINT8_MAX;
	static int32_t x775 = INT32_MIN;
	int16_t x776 = INT16_MIN;
	volatile uint32_t t93 = 51695U;

    t93 = (x773-(x774/(x775/x776)));

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x777 = 0;
	volatile uint32_t x778 = 5434U;
	int32_t x779 = INT32_MIN;
	uint8_t x780 = UINT8_MAX;

    t94 = (x777-(x778/(x779/x780)));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x793 = INT8_MAX;
	uint32_t x794 = UINT32_MAX;
	int64_t x795 = INT64_MIN;
	int32_t x796 = INT32_MAX;

    t95 = (x793-(x794/(x795/x796)));

    if (t95 != 127LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x805 = INT16_MIN;
	volatile int32_t x807 = 178748804;
	int16_t x808 = INT16_MAX;

    t96 = (x805-(x806/(x807/x808)));

    if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x817 = INT32_MAX;
	int16_t x820 = -1;
	static volatile uint64_t t97 = 7208502828267LLU;

    t97 = (x817-(x818/(x819/x820)));

    if (t97 != 2147483647LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x825 = 11U;
	int64_t x826 = -3808LL;
	int16_t x827 = INT16_MIN;
	int64_t t98 = -78287440LL;

    t98 = (x825-(x826/(x827/x828)));

    if (t98 != 25LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x833 = INT8_MAX;
	int32_t x834 = 68357;
	int64_t x835 = INT64_MAX;
	uint64_t x836 = 447003LLU;
	uint64_t t99 = 44873LLU;

    t99 = (x833-(x834/(x835/x836)));

    if (t99 != 127LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x837 = -1LL;
	int8_t x839 = INT8_MIN;
	uint32_t x840 = 7U;
	static int64_t t100 = 1516761863265597654LL;

    t100 = (x837-(x838/(x839/x840)));

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x849 = 213383LL;
	int32_t x850 = INT32_MIN;
	uint64_t x852 = 690796833LLU;
	volatile uint64_t t101 = 4466LLU;

    t101 = (x849-(x850/(x851/x852)));

    if (t101 != 18446744072328171334LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x854 = INT16_MAX;
	int64_t x855 = INT64_MIN;
	int64_t t102 = -600403429826073LL;

    t102 = (x853-(x854/(x855/x856)));

    if (t102 != 255LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x857 = UINT64_MAX;
	static int64_t x858 = -1LL;
	int16_t x860 = -1;
	volatile uint64_t t103 = UINT64_MAX;

    t103 = (x857-(x858/(x859/x860)));

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x870 = 807;
	int64_t x871 = INT64_MIN;
	int64_t t104 = -38LL;

    t104 = (x869-(x870/(x871/x872)));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x873 = -1;
	volatile int32_t x874 = INT32_MIN;
	static int64_t x875 = 822087566991417LL;
	volatile int32_t x876 = 599805136;
	static int64_t t105 = 29LL;

    t105 = (x873-(x874/(x875/x876)));

    if (t105 != 1565LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x878 = INT16_MIN;
	uint32_t x880 = UINT32_MAX;
	uint32_t t106 = 3540U;

    t106 = (x877-(x878/(x879/x880)));

    if (t106 != 1521U) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint8_t x909 = UINT8_MAX;
	volatile int16_t x910 = INT16_MIN;
	int8_t x911 = 49;

    t107 = (x909-(x910/(x911/x912)));

    if (t107 != -413LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x917 = UINT32_MAX;
	int16_t x918 = 1115;
	uint16_t x920 = 856U;
	volatile uint32_t t108 = 14U;

    t108 = (x917-(x918/(x919/x920)));

    if (t108 != 28U) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x925 = INT16_MAX;
	uint8_t x926 = UINT8_MAX;
	static int16_t x927 = 97;
	int8_t x928 = 12;
	int32_t t109 = 225416272;

    t109 = (x925-(x926/(x927/x928)));

    if (t109 != 32736) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x929 = INT32_MAX;
	int32_t x930 = 520659;
	uint32_t x931 = 503U;
	static int64_t x932 = -1LL;

    t110 = (x929-(x930/(x931/x932)));

    if (t110 != 2147484682LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x937 = INT32_MIN;
	uint16_t x938 = 463U;
	volatile uint16_t x939 = UINT16_MAX;
	volatile uint8_t x940 = 1U;
	volatile int32_t t111 = INT32_MIN;

    t111 = (x937-(x938/(x939/x940)));

    if (t111 != INT32_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x941 = INT32_MAX;
	int64_t x942 = -1LL;
	int32_t x943 = -1;
	uint64_t x944 = UINT64_MAX;
	static uint64_t t112 = 265LLU;

    t112 = (x941-(x942/(x943/x944)));

    if (t112 != 2147483648LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x945 = 17;
	static uint64_t x946 = 4014518682852452543LLU;
	int8_t x947 = INT8_MAX;
	uint32_t x948 = 53U;

    t113 = (x945-(x946/(x947/x948)));

    if (t113 != 16439484732283325362LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x953 = 14U;
	int64_t x954 = -1LL;
	volatile int32_t x955 = INT32_MIN;
	int8_t x956 = INT8_MAX;
	static volatile int64_t t114 = 1423184728318938751LL;

    t114 = (x953-(x954/(x955/x956)));

    if (t114 != 14LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x957 = 799332141LLU;
	uint8_t x958 = 17U;
	volatile int8_t x959 = INT8_MIN;
	static uint8_t x960 = 7U;
	uint64_t t115 = 780667502LLU;

    t115 = (x957-(x958/(x959/x960)));

    if (t115 != 799332141LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int8_t x977 = 3;
	uint64_t x978 = 53027061488940041LLU;
	volatile int32_t x979 = INT32_MIN;
	uint64_t x980 = 23899456LLU;
	uint64_t t116 = 30097851LLU;

    t116 = (x977-(x978/(x979/x980)));

    if (t116 != 18446744073709482918LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x985 = INT32_MIN;
	static uint16_t x986 = 3U;
	int8_t x987 = -3;
	int64_t x988 = -1LL;
	volatile int64_t t117 = -132067462835218463LL;

    t117 = (x985-(x986/(x987/x988)));

    if (t117 != -2147483649LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x989 = -518402LL;
	uint32_t x990 = 2437U;
	volatile int32_t x991 = -2020;
	static volatile int8_t x992 = INT8_MAX;
	static volatile int64_t t118 = -16LL;

    t118 = (x989-(x990/(x991/x992)));

    if (t118 != -518402LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x999 = INT16_MIN;
	int64_t x1000 = -1LL;
	volatile int64_t t119 = -5647907851571LL;

    t119 = (x997-(x998/(x999/x1000)));

    if (t119 != 65536LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x1014 = 61;
	uint16_t x1016 = UINT16_MAX;
	static volatile int32_t t120 = INT32_MAX;

    t120 = (x1013-(x1014/(x1015/x1016)));

    if (t120 != INT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x1018 = INT16_MAX;
	uint64_t x1019 = 16381204903LLU;
	uint64_t t121 = 104956690162380LLU;

    t121 = (x1017-(x1018/(x1019/x1020)));

    if (t121 != 65535LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x1021 = INT32_MIN;
	volatile int8_t x1022 = INT8_MAX;
	static int64_t x1023 = -1LL;
	static int8_t x1024 = -1;
	static int64_t t122 = -437676LL;

    t122 = (x1021-(x1022/(x1023/x1024)));

    if (t122 != -2147483775LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x1025 = 312LLU;
	int16_t x1027 = -1;
	int64_t x1028 = -1LL;
	static uint64_t t123 = 1LLU;

    t123 = (x1025-(x1026/(x1027/x1028)));

    if (t123 != 440LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x1054 = INT8_MIN;
	int8_t x1055 = 4;
	static int64_t x1056 = -1LL;
	volatile int64_t t124 = 183259464LL;

    t124 = (x1053-(x1054/(x1055/x1056)));

    if (t124 != -33LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x1083 = UINT8_MAX;
	int32_t x1084 = -1;
	int32_t t125 = 670443;

    t125 = (x1081-(x1082/(x1083/x1084)));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x1089 = 41129450352LL;
	int16_t x1090 = -1;
	int64_t x1091 = INT64_MAX;
	volatile int8_t x1092 = -1;
	int64_t t126 = -7393670448210545LL;

    t126 = (x1089-(x1090/(x1091/x1092)));

    if (t126 != 41129450352LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x1097 = 529U;
	int16_t x1098 = -7;
	uint64_t x1099 = UINT64_MAX;
	uint64_t x1100 = UINT64_MAX;
	volatile uint64_t t127 = 7120985957063526LLU;

    t127 = (x1097-(x1098/(x1099/x1100)));

    if (t127 != 536LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x1101 = -1;
	uint16_t x1102 = 436U;
	volatile int16_t x1103 = 6520;
	static int8_t x1104 = INT8_MAX;
	volatile int32_t t128 = 0;

    t128 = (x1101-(x1102/(x1103/x1104)));

    if (t128 != -9) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x1119 = -18;
	volatile uint8_t x1120 = 1U;

    t129 = (x1117-(x1118/(x1119/x1120)));

    if (t129 != -35753686121584LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int32_t x1121 = INT32_MIN;
	int64_t x1122 = -5458683200LL;
	int32_t x1123 = INT32_MAX;
	uint64_t x1124 = 9045LLU;

    t130 = (x1121-(x1122/(x1123/x1124)));

    if (t130 != 18446666375543719834LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x1125 = INT8_MAX;
	int8_t x1126 = -1;
	volatile int64_t x1127 = -1LL;
	int32_t x1128 = -1;
	int64_t t131 = -2352173354283041130LL;

    t131 = (x1125-(x1126/(x1127/x1128)));

    if (t131 != 128LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x1133 = -4LL;
	int64_t x1134 = 28916716925LL;
	int64_t x1135 = INT64_MAX;
	int16_t x1136 = -4654;
	int64_t t132 = -254167491718868297LL;

    t132 = (x1133-(x1134/(x1135/x1136)));

    if (t132 != -4LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int64_t x1137 = INT64_MIN;
	static uint16_t x1138 = 58U;
	uint16_t x1140 = 876U;
	volatile int64_t t133 = INT64_MIN;

    t133 = (x1137-(x1138/(x1139/x1140)));

    if (t133 != INT64_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x1141 = INT16_MAX;
	static int64_t x1142 = 64386LL;
	int8_t x1143 = INT8_MAX;
	volatile int64_t t134 = -28325716082797LL;

    t134 = (x1141-(x1142/(x1143/x1144)));

    if (t134 != 33273LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x1150 = -565404;
	static int64_t x1151 = INT64_MAX;
	int16_t x1152 = INT16_MAX;

    t135 = (x1149-(x1150/(x1151/x1152)));

    if (t135 != -128LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x1154 = -13170;
	static uint16_t x1156 = 18U;
	volatile uint64_t t136 = 219LLU;

    t136 = (x1153-(x1154/(x1155/x1156)));

    if (t136 != 19526LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x1165 = UINT16_MAX;
	int8_t x1166 = INT8_MAX;
	static volatile int64_t x1168 = -28LL;
	volatile int64_t t137 = 13723230610LL;

    t137 = (x1165-(x1166/(x1167/x1168)));

    if (t137 != 65535LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x1170 = INT64_MIN;
	static volatile uint32_t x1171 = 628U;
	int64_t t138 = -141193284349LL;

    t138 = (x1169-(x1170/(x1171/x1172)));

    if (t138 != -8804127853361376908LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x1177 = INT64_MAX;
	volatile int16_t x1178 = -1;
	static volatile int64_t t139 = 797586LL;

    t139 = (x1177-(x1178/(x1179/x1180)));

    if (t139 != 9223372036854704075LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x1193 = INT16_MIN;
	uint64_t x1194 = UINT64_MAX;
	static int16_t x1196 = 1;
	volatile uint64_t t140 = 1974212783144634227LLU;

    t140 = (x1193-(x1194/(x1195/x1196)));

    if (t140 != 16140901064495824897LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x1197 = 0;
	int16_t x1199 = INT16_MIN;
	int16_t x1200 = -1;
	volatile int32_t t141 = 0;

    t141 = (x1197-(x1198/(x1199/x1200)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x1221 = UINT64_MAX;
	static uint32_t x1222 = 484U;
	volatile int32_t x1223 = INT32_MIN;
	static int8_t x1224 = INT8_MIN;
	uint64_t t142 = UINT64_MAX;

    t142 = (x1221-(x1222/(x1223/x1224)));

    if (t142 != UINT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x1257 = INT8_MAX;
	int32_t x1258 = -2043;
	volatile int16_t x1260 = INT16_MIN;
	uint64_t t143 = 7021032418LLU;

    t143 = (x1257-(x1258/(x1259/x1260)));

    if (t143 != 2170LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x1269 = INT16_MAX;
	static uint64_t x1270 = 667547060LLU;
	int16_t x1272 = -1;
	uint64_t t144 = 3394190428711712LLU;

    t144 = (x1269-(x1270/(x1271/x1272)));

    if (t144 != 32767LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x1277 = -1LL;
	int16_t x1278 = -28;
	static uint16_t x1279 = UINT16_MAX;
	int64_t t145 = -1848323928LL;

    t145 = (x1277-(x1278/(x1279/x1280)));

    if (t145 != 27LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x1286 = 374U;
	int16_t x1287 = 5002;
	int64_t t146 = -2250065133200154LL;

    t146 = (x1285-(x1286/(x1287/x1288)));

    if (t146 != 128763LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1297 = -29;
	static int64_t x1298 = INT64_MAX;
	uint32_t x1299 = UINT32_MAX;
	int64_t t147 = 0LL;

    t147 = (x1297-(x1298/(x1299/x1300)));

    if (t147 != -547608330396LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x1301 = INT32_MIN;
	int32_t x1302 = 0;

    t148 = (x1301-(x1302/(x1303/x1304)));

    if (t148 != INT32_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x1305 = INT32_MAX;
	uint32_t x1306 = 564361734U;
	int64_t x1307 = -1LL;

    t149 = (x1305-(x1306/(x1307/x1308)));

    if (t149 != 1583121913LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x1321 = INT8_MIN;
	uint16_t x1323 = 15U;
	uint8_t x1324 = 6U;
	static int32_t t150 = 845280981;

    t150 = (x1321-(x1322/(x1323/x1324)));

    if (t150 != 11693269) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x1326 = 404U;
	int64_t x1327 = INT64_MIN;
	volatile int64_t t151 = 0LL;

    t151 = (x1325-(x1326/(x1327/x1328)));

    if (t151 != -402LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x1333 = UINT8_MAX;
	volatile uint32_t x1334 = 74558375U;
	volatile int8_t x1336 = INT8_MIN;
	uint32_t t152 = 247019379U;

    t152 = (x1333-(x1334/(x1335/x1336)));

    if (t152 != 255U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x1338 = -98;
	static uint8_t x1340 = 3U;
	static int32_t t153 = 1030401829;

    t153 = (x1337-(x1338/(x1339/x1340)));

    if (t153 != 22672) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x1345 = INT64_MIN;
	static int8_t x1346 = INT8_MIN;
	int64_t x1347 = -182LL;
	int8_t x1348 = INT8_MIN;
	int64_t t154 = 1355703455736LL;

    t154 = (x1345-(x1346/(x1347/x1348)));

    if (t154 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x1359 = INT64_MIN;
	uint8_t x1360 = 7U;
	static int64_t t155 = 25209885804093LL;

    t155 = (x1357-(x1358/(x1359/x1360)));

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x1375 = INT64_MAX;
	static volatile uint8_t x1376 = 112U;
	int64_t t156 = INT64_MAX;

    t156 = (x1373-(x1374/(x1375/x1376)));

    if (t156 != INT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x1382 = 5003700460858875LLU;
	int32_t x1384 = -1;
	uint64_t t157 = 4322361462LLU;

    t157 = (x1381-(x1382/(x1383/x1384)));

    if (t157 != 9223371884153956079LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x1389 = -857206893907LL;
	static int8_t x1390 = 43;
	volatile int64_t x1391 = INT64_MIN;
	int32_t x1392 = INT32_MIN;
	int64_t t158 = -52018898LL;

    t158 = (x1389-(x1390/(x1391/x1392)));

    if (t158 != -857206893907LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x1397 = UINT32_MAX;
	int8_t x1398 = -1;
	static uint32_t x1399 = 899970U;
	uint32_t x1400 = 3U;
	uint32_t t159 = 92U;

    t159 = (x1397-(x1398/(x1399/x1400)));

    if (t159 != 4294952978U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x1405 = 25U;
	uint32_t x1406 = UINT32_MAX;

    t160 = (x1405-(x1406/(x1407/x1408)));

    if (t160 != 4294901787U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x1409 = INT16_MAX;
	uint32_t x1411 = 104267224U;
	static int64_t x1412 = -424LL;
	volatile int64_t t161 = -34966793LL;

    t161 = (x1409-(x1410/(x1411/x1412)));

    if (t161 != 32767LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x1413 = 7760;
	int8_t x1415 = INT8_MIN;
	static int16_t x1416 = -1;
	int32_t t162 = -475;

    t162 = (x1413-(x1414/(x1415/x1416)));

    if (t162 != 7761) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1445 = INT64_MIN;
	uint32_t x1446 = 5U;
	uint32_t x1447 = UINT32_MAX;
	uint16_t x1448 = 3U;
	static int64_t t163 = INT64_MIN;

    t163 = (x1445-(x1446/(x1447/x1448)));

    if (t163 != INT64_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x1453 = INT8_MIN;
	uint32_t x1454 = 34U;
	int8_t x1456 = INT8_MIN;
	volatile uint32_t t164 = 5907449U;

    t164 = (x1453-(x1454/(x1455/x1456)));

    if (t164 != 4294967134U) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x1461 = INT32_MIN;
	static volatile int32_t x1462 = INT32_MAX;
	int32_t x1463 = INT32_MIN;
	int64_t x1464 = -960115680LL;
	static volatile int64_t t165 = -835294LL;

    t165 = (x1461-(x1462/(x1463/x1464)));

    if (t165 != -3221225471LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1465 = 472;
	volatile int32_t x1466 = INT32_MAX;
	static volatile int8_t x1468 = INT8_MAX;
	static int32_t t166 = 5629452;

    t166 = (x1465-(x1466/(x1467/x1468)));

    if (t166 != -4836202) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x1470 = 0U;
	int64_t x1471 = INT64_MIN;
	static int32_t x1472 = INT32_MAX;
	int64_t t167 = INT64_MIN;

    t167 = (x1469-(x1470/(x1471/x1472)));

    if (t167 != INT64_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x1481 = UINT8_MAX;
	uint32_t x1482 = UINT32_MAX;
	volatile int16_t x1483 = INT16_MAX;
	volatile uint8_t x1484 = 26U;
	uint32_t t168 = 2U;

    t168 = (x1481-(x1482/(x1483/x1484)));

    if (t168 != 4291558847U) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1489 = -1;
	int16_t x1490 = -1772;
	int32_t t169 = -1;

    t169 = (x1489-(x1490/(x1491/x1492)));

    if (t169 != 885) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int32_t x1493 = -1;
	int32_t x1494 = 0;
	int32_t x1496 = INT32_MAX;
	static volatile int64_t t170 = -431LL;

    t170 = (x1493-(x1494/(x1495/x1496)));

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1505 = INT16_MIN;
	volatile int64_t x1507 = INT64_MIN;
	volatile int8_t x1508 = 3;
	int64_t t171 = -32484263186115678LL;

    t171 = (x1505-(x1506/(x1507/x1508)));

    if (t171 != -32768LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x1525 = -1LL;
	uint32_t x1526 = 22699137U;
	volatile int32_t x1527 = -1;
	static uint64_t x1528 = UINT64_MAX;

    t172 = (x1525-(x1526/(x1527/x1528)));

    if (t172 != 18446744073686852478LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1542 = INT32_MIN;
	int32_t x1543 = 6400;
	volatile int16_t x1544 = 17;
	volatile int64_t t173 = -5740326591446137LL;

    t173 = (x1541-(x1542/(x1543/x1544)));

    if (t173 != -9223372036849064416LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int8_t x1546 = 0;
	static int64_t x1547 = INT64_MIN;
	int32_t x1548 = INT32_MIN;
	int64_t t174 = -10LL;

    t174 = (x1545-(x1546/(x1547/x1548)));

    if (t174 != 1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1550 = 147;
	int64_t x1551 = INT64_MAX;
	static int16_t x1552 = -116;
	volatile int64_t t175 = 3888349LL;

    t175 = (x1549-(x1550/(x1551/x1552)));

    if (t175 != 32767LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x1553 = UINT64_MAX;
	uint32_t x1554 = 55U;
	static volatile uint16_t x1555 = UINT16_MAX;
	static int8_t x1556 = INT8_MIN;

    t176 = (x1553-(x1554/(x1555/x1556)));

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1557 = INT8_MIN;
	uint64_t x1558 = 1880153925LLU;
	int8_t x1559 = INT8_MIN;
	static uint64_t t177 = 7965013239LLU;

    t177 = (x1557-(x1558/(x1559/x1560)));

    if (t177 != 18446744071829397563LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1561 = INT16_MAX;
	uint16_t x1562 = 8U;
	volatile uint32_t x1564 = 1561867U;

    t178 = (x1561-(x1562/(x1563/x1564)));

    if (t178 != 32767U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1571 = 3U;
	int64_t x1572 = 2LL;

    t179 = (x1569-(x1570/(x1571/x1572)));

    if (t179 != 1431179354240LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1581 = INT16_MAX;
	static int32_t x1582 = -42916471;
	volatile uint32_t x1583 = UINT32_MAX;
	int8_t x1584 = -1;
	static volatile uint32_t t180 = 488U;

    t180 = (x1581-(x1582/(x1583/x1584)));

    if (t180 != 42949238U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x1585 = UINT64_MAX;
	int8_t x1586 = INT8_MAX;
	volatile uint64_t t181 = UINT64_MAX;

    t181 = (x1585-(x1586/(x1587/x1588)));

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x1589 = -1;
	volatile int16_t x1590 = INT16_MIN;
	static uint64_t x1591 = UINT64_MAX;
	uint32_t x1592 = UINT32_MAX;
	uint64_t t182 = 616650LLU;

    t182 = (x1589-(x1590/(x1591/x1592)));

    if (t182 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x1609 = INT64_MAX;
	volatile uint8_t x1610 = 1U;
	int32_t x1611 = INT32_MIN;
	uint8_t x1612 = 1U;
	volatile int64_t t183 = INT64_MAX;

    t183 = (x1609-(x1610/(x1611/x1612)));

    if (t183 != INT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1621 = 1;
	volatile int32_t x1622 = INT32_MIN;
	uint64_t x1623 = 188853115911716LLU;
	uint64_t x1624 = 32696563905LLU;
	volatile uint64_t t184 = 6629992060091927290LLU;

    t184 = (x1621-(x1622/(x1623/x1624)));

    if (t184 != 18443549832311878532LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x1641 = -1;
	int64_t x1642 = INT64_MIN;
	static int8_t x1643 = -20;
	uint16_t x1644 = 7U;
	int64_t t185 = -9568971959273LL;

    t185 = (x1641-(x1642/(x1643/x1644)));

    if (t185 != -4611686018427387905LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x1657 = UINT8_MAX;
	int16_t x1658 = INT16_MAX;
	int16_t x1659 = INT16_MAX;
	int8_t x1660 = -1;
	int32_t t186 = -308360714;

    t186 = (x1657-(x1658/(x1659/x1660)));

    if (t186 != 256) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1665 = -1;
	static int16_t x1666 = 1;
	static uint32_t x1667 = UINT32_MAX;
	int32_t x1668 = 472;
	uint32_t t187 = UINT32_MAX;

    t187 = (x1665-(x1666/(x1667/x1668)));

    if (t187 != UINT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1677 = INT16_MAX;
	int8_t x1680 = INT8_MAX;
	int32_t t188 = -10745;

    t188 = (x1677-(x1678/(x1679/x1680)));

    if (t188 != 32831) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x1685 = INT64_MAX;
	int32_t x1686 = -1;
	int32_t x1687 = INT32_MAX;
	int8_t x1688 = INT8_MAX;
	volatile int64_t t189 = INT64_MAX;

    t189 = (x1685-(x1686/(x1687/x1688)));

    if (t189 != INT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1689 = 32592U;
	int32_t x1690 = INT32_MIN;
	volatile int16_t x1691 = -1;
	static uint64_t x1692 = 827499591415LLU;

    t190 = (x1689-(x1690/(x1691/x1692)));

    if (t190 != 18446743246209960953LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1698 = -1;
	static int64_t x1699 = INT64_MIN;
	volatile int64_t t191 = -2830047132954846422LL;

    t191 = (x1697-(x1698/(x1699/x1700)));

    if (t191 != -1535LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x1709 = INT16_MIN;
	uint64_t x1712 = UINT64_MAX;
	volatile uint64_t t192 = 2462124LLU;

    t192 = (x1709-(x1710/(x1711/x1712)));

    if (t192 != 18446744073709518721LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1717 = -1;
	static int64_t x1718 = 690LL;
	volatile int64_t x1719 = INT64_MIN;
	static int16_t x1720 = INT16_MAX;
	volatile int64_t t193 = 10588785333789LL;

    t193 = (x1717-(x1718/(x1719/x1720)));

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x1725 = 5;
	int8_t x1726 = 8;
	volatile int64_t x1727 = -1LL;
	uint64_t x1728 = 16041118506783460LLU;
	volatile uint64_t t194 = 33998178517LLU;

    t194 = (x1725-(x1726/(x1727/x1728)));

    if (t194 != 5LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x1749 = -1;
	static uint8_t x1750 = 3U;
	volatile int8_t x1752 = -45;
	int32_t t195 = -21;

    t195 = (x1749-(x1750/(x1751/x1752)));

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1769 = 14;
	static uint64_t x1770 = 150LLU;
	uint16_t x1771 = 3U;
	int32_t x1772 = -1;
	volatile uint64_t t196 = 5258LLU;

    t196 = (x1769-(x1770/(x1771/x1772)));

    if (t196 != 14LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x1777 = 0LL;
	volatile int16_t x1778 = INT16_MAX;
	int16_t x1779 = INT16_MAX;
	uint16_t x1780 = 12U;
	int64_t t197 = 1LL;

    t197 = (x1777-(x1778/(x1779/x1780)));

    if (t197 != -12LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1781 = -18166;
	static uint64_t x1782 = 4048LLU;
	static int8_t x1784 = INT8_MIN;

    t198 = (x1781-(x1782/(x1783/x1784)));

    if (t198 != 18446744073709533450LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1790 = 631U;
	static uint32_t x1792 = 21746U;

    t199 = (x1789-(x1790/(x1791/x1792)));

    if (t199 != 0U) { NG(); } else { ; }
	
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


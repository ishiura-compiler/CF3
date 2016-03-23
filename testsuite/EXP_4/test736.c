
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

int8_t x9 = 2;
uint8_t x26 = 7U;
volatile int8_t x27 = INT8_MIN;
uint8_t x43 = 28U;
int64_t x65 = INT64_MIN;
uint16_t x67 = 0U;
volatile int16_t x124 = INT16_MIN;
uint16_t x137 = UINT16_MAX;
int32_t x138 = 205822417;
int32_t x153 = 27166514;
static int8_t x156 = -7;
volatile int64_t x185 = INT64_MAX;
static int32_t t15 = 1;
int16_t x215 = 0;
volatile uint32_t x222 = 73612357U;
volatile int32_t t17 = 455213;
static uint8_t x245 = 10U;
volatile int16_t x250 = INT16_MAX;
static int8_t x251 = INT8_MAX;
static uint8_t x263 = 7U;
static int8_t x283 = -8;
static uint32_t x289 = 611086U;
volatile int32_t t24 = 4633608;
volatile int32_t t25 = 1;
uint8_t x306 = UINT8_MAX;
static volatile uint64_t x314 = 1155LLU;
volatile uint64_t x320 = 41322839189000LLU;
int64_t x321 = 1887792951374LL;
volatile int32_t t35 = -284225003;
static int8_t x429 = INT8_MIN;
volatile int32_t t38 = 5155;
int16_t x462 = 1286;
static uint8_t x478 = 5U;
int16_t x489 = -39;
volatile int32_t t44 = -5899514;
int8_t x493 = INT8_MIN;
int32_t t45 = 0;
int32_t t46 = 3;
volatile uint8_t x545 = UINT8_MAX;
uint32_t x555 = 499673338U;
static int32_t x571 = -1;
volatile int32_t t53 = 120256900;
int16_t x613 = INT16_MAX;
int8_t x617 = -7;
static uint64_t x619 = UINT64_MAX;
volatile int8_t x629 = INT8_MIN;
int16_t x630 = 635;
int32_t t60 = -1;
int8_t x687 = 19;
static int8_t x701 = -26;
int64_t x710 = INT64_MAX;
uint64_t x730 = 2988961791LLU;
uint16_t x779 = UINT16_MAX;
volatile int32_t t67 = 7;
int32_t x831 = -18318;
uint32_t x839 = 2U;
uint16_t x842 = 1546U;
static int64_t x889 = -1LL;
int32_t t75 = 0;
int16_t x902 = 1324;
static int32_t t76 = -1204;
static int64_t x911 = -1LL;
volatile int32_t t79 = 1;
int16_t x917 = 1210;
uint8_t x923 = 19U;
volatile int32_t x924 = 48;
uint8_t x986 = 60U;
static int64_t x987 = -1LL;
static volatile int32_t t84 = -1004678;
static uint64_t x1022 = 286287LLU;
static int16_t x1031 = INT16_MIN;
int8_t x1039 = -2;
uint8_t x1040 = 43U;
uint32_t x1048 = 280723U;
volatile int32_t t91 = 4536;
static uint32_t x1112 = UINT32_MAX;
uint64_t x1118 = 3LLU;
int32_t x1119 = -1;
uint8_t x1139 = 11U;
static int32_t x1140 = INT32_MIN;
static uint16_t x1173 = 14U;
int32_t x1192 = INT32_MIN;
int32_t t99 = 1972;
volatile int64_t x1193 = -25015681LL;
int8_t x1209 = -1;
int16_t x1211 = 10334;
volatile int32_t t101 = 10977212;
int32_t x1215 = -1;
volatile uint64_t x1247 = 71868660147LLU;
volatile int32_t t105 = 179;
uint64_t x1268 = UINT64_MAX;
int32_t t107 = 1870784;
volatile int32_t t109 = -29;
volatile int8_t x1281 = -1;
uint64_t x1332 = UINT64_MAX;
volatile int32_t t111 = 424;
int8_t x1383 = 17;
int64_t x1449 = INT64_MIN;
static uint64_t x1450 = UINT64_MAX;
static int64_t x1453 = -1LL;
uint64_t x1454 = UINT64_MAX;
uint32_t x1455 = UINT32_MAX;
volatile int32_t t117 = -7;
uint8_t x1461 = 1U;
volatile int8_t x1477 = -8;
int32_t x1478 = INT32_MAX;
int64_t x1480 = INT64_MIN;
int64_t x1536 = INT64_MAX;
int16_t x1540 = INT16_MIN;
uint64_t x1541 = 62455189917LLU;
volatile uint8_t x1544 = UINT8_MAX;
int16_t x1572 = INT16_MIN;
int8_t x1578 = 0;
int32_t x1580 = INT32_MAX;
volatile int32_t t127 = -31286;
static uint64_t x1642 = UINT64_MAX;
uint64_t x1653 = UINT64_MAX;
int32_t x1673 = INT32_MIN;
volatile int32_t t136 = -2621146;
int16_t x1721 = INT16_MIN;
volatile uint16_t x1724 = 5056U;
uint32_t x1725 = 4U;
int32_t x1746 = 991146;
volatile uint64_t x1756 = UINT64_MAX;
int8_t x1775 = INT8_MAX;
static int32_t x1826 = 72371;
uint64_t x1830 = UINT64_MAX;
int32_t t147 = 5;
int16_t x1849 = INT16_MAX;
uint8_t x1864 = UINT8_MAX;
static uint32_t x1869 = 329240U;
int32_t t151 = -61250859;
static int32_t x1873 = 1437;
int64_t x1883 = -1LL;
int32_t t154 = 80133;
int16_t x1911 = -1;
uint16_t x1930 = UINT16_MAX;
volatile int32_t t156 = 50;
static int32_t x1950 = 1288852;
uint32_t x1951 = 186U;
static volatile int16_t x1955 = 3679;
int32_t x1971 = -36609;
volatile int32_t x1972 = INT32_MAX;
static volatile uint32_t x1983 = 4166U;
volatile uint16_t x2007 = 5U;
static int8_t x2024 = -14;
volatile int16_t x2036 = INT16_MAX;
static int32_t x2043 = -6;
uint16_t x2062 = UINT16_MAX;
int16_t x2085 = -1;
volatile int32_t x2088 = INT32_MAX;
volatile int8_t x2102 = INT8_MAX;
int16_t x2104 = -43;
uint8_t x2111 = UINT8_MAX;
volatile uint32_t x2113 = 23408U;
volatile int8_t x2114 = INT8_MAX;
uint8_t x2115 = 2U;
int8_t x2141 = 1;
volatile int8_t x2142 = 10;
uint16_t x2143 = UINT16_MAX;
static uint8_t x2163 = 99U;
static volatile uint32_t x2164 = UINT32_MAX;
static uint16_t x2175 = 2U;
int32_t x2182 = 43313943;
int64_t x2206 = 35429210133003LL;
uint8_t x2208 = 19U;
volatile int8_t x2217 = 1;
static volatile int8_t x2242 = INT8_MAX;
static volatile int32_t t184 = -223819812;
static int32_t x2255 = -1;
volatile int32_t t189 = 1;
int8_t x2335 = INT8_MIN;
int32_t x2375 = 44;
volatile int64_t x2376 = INT64_MIN;
static volatile int32_t t193 = -2;
uint32_t x2378 = 1U;
volatile int32_t t194 = -1551075;
volatile uint16_t x2384 = 3784U;
volatile int32_t t195 = 683026;
volatile int32_t t197 = 16480038;


void f0(void) {
    	static int8_t x1 = 30;
	int16_t x2 = 11;
	int8_t x3 = -1;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 729056324;

    t0 = (x1==(x2>>(x3/x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x10 = 6960;
	static uint16_t x11 = 437U;
	uint64_t x12 = UINT64_MAX;
	int32_t t1 = -469;

    t1 = (x9==(x10>>(x11/x12)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x21 = UINT16_MAX;
	int64_t x22 = INT64_MAX;
	int32_t x23 = INT32_MIN;
	int64_t x24 = INT64_MIN;
	static volatile int32_t t2 = 6237582;

    t2 = (x21==(x22>>(x23/x24)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x25 = 207139694;
	int32_t x28 = 152334446;
	int32_t t3 = 0;

    t3 = (x25==(x26>>(x27/x28)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x41 = 192;
	volatile int16_t x42 = INT16_MAX;
	int64_t x44 = INT64_MIN;
	static volatile int32_t t4 = 198677;

    t4 = (x41==(x42>>(x43/x44)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x66 = INT16_MAX;
	uint32_t x68 = 1176U;
	int32_t t5 = 40;

    t5 = (x65==(x66>>(x67/x68)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x93 = UINT8_MAX;
	uint32_t x94 = 5683899U;
	uint32_t x95 = 417574625U;
	int32_t x96 = -1;
	static volatile int32_t t6 = 251897971;

    t6 = (x93==(x94>>(x95/x96)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x97 = INT8_MIN;
	uint8_t x98 = UINT8_MAX;
	uint32_t x99 = 45876784U;
	int16_t x100 = INT16_MIN;
	int32_t t7 = -109;

    t7 = (x97==(x98>>(x99/x100)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x101 = INT64_MIN;
	uint16_t x102 = 3U;
	int8_t x103 = 29;
	static uint32_t x104 = 13U;
	int32_t t8 = -5861;

    t8 = (x101==(x102>>(x103/x104)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x109 = INT32_MAX;
	int64_t x110 = 850647014LL;
	uint64_t x111 = 246898186104LLU;
	volatile uint32_t x112 = UINT32_MAX;
	int32_t t9 = -116357639;

    t9 = (x109==(x110>>(x111/x112)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x117 = 66094439206575LLU;
	int64_t x118 = INT64_MAX;
	volatile int32_t x119 = -1;
	static volatile uint16_t x120 = 24956U;
	int32_t t10 = -261003317;

    t10 = (x117==(x118>>(x119/x120)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x121 = 3U;
	int8_t x122 = INT8_MAX;
	static int32_t x123 = 3;
	static volatile int32_t t11 = -3746;

    t11 = (x121==(x122>>(x123/x124)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x139 = INT8_MAX;
	int16_t x140 = -15840;
	int32_t t12 = -120804;

    t12 = (x137==(x138>>(x139/x140)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x154 = 7U;
	uint64_t x155 = UINT64_MAX;
	int32_t t13 = 1;

    t13 = (x153==(x154>>(x155/x156)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x186 = 16;
	uint8_t x187 = 2U;
	int8_t x188 = INT8_MAX;
	volatile int32_t t14 = -479239868;

    t14 = (x185==(x186>>(x187/x188)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x193 = 45088U;
	uint64_t x194 = 312172994LLU;
	int8_t x195 = -1;
	static int8_t x196 = INT8_MIN;

    t15 = (x193==(x194>>(x195/x196)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x213 = INT8_MIN;
	int64_t x214 = INT64_MAX;
	volatile int16_t x216 = 304;
	volatile int32_t t16 = -35;

    t16 = (x213==(x214>>(x215/x216)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x221 = -1;
	int16_t x223 = 24;
	int32_t x224 = INT32_MIN;

    t17 = (x221==(x222>>(x223/x224)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x246 = UINT32_MAX;
	int16_t x247 = INT16_MIN;
	int16_t x248 = INT16_MIN;
	static volatile int32_t t18 = -103220903;

    t18 = (x245==(x246>>(x247/x248)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x249 = 2U;
	static int64_t x252 = 923228LL;
	int32_t t19 = -15323;

    t19 = (x249==(x250>>(x251/x252)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x253 = UINT8_MAX;
	volatile uint8_t x254 = 0U;
	int16_t x255 = -1;
	volatile int8_t x256 = INT8_MAX;
	int32_t t20 = 3;

    t20 = (x253==(x254>>(x255/x256)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x261 = UINT32_MAX;
	int32_t x262 = 37;
	static int16_t x264 = 1;
	volatile int32_t t21 = -387776767;

    t21 = (x261==(x262>>(x263/x264)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x269 = INT32_MIN;
	int64_t x270 = 277183978LL;
	int16_t x271 = 7;
	int64_t x272 = 9LL;
	int32_t t22 = 41343796;

    t22 = (x269==(x270>>(x271/x272)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x281 = 2U;
	int32_t x282 = 8;
	int64_t x284 = 866569788993LL;
	volatile int32_t t23 = 1;

    t23 = (x281==(x282>>(x283/x284)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x290 = INT32_MAX;
	uint64_t x291 = 19721713995LLU;
	int32_t x292 = INT32_MAX;

    t24 = (x289==(x290>>(x291/x292)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x293 = INT16_MIN;
	uint64_t x294 = 698LLU;
	uint64_t x295 = 660858482LLU;
	static volatile int32_t x296 = -1;

    t25 = (x293==(x294>>(x295/x296)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x305 = 578U;
	uint64_t x307 = 113LLU;
	int32_t x308 = INT32_MIN;
	int32_t t26 = -1998932;

    t26 = (x305==(x306>>(x307/x308)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x313 = -3;
	static uint64_t x315 = 29583LLU;
	static uint32_t x316 = UINT32_MAX;
	static int32_t t27 = -894482590;

    t27 = (x313==(x314>>(x315/x316)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x317 = 2LLU;
	uint64_t x318 = UINT64_MAX;
	uint8_t x319 = 5U;
	volatile int32_t t28 = 46;

    t28 = (x317==(x318>>(x319/x320)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x322 = 0;
	int32_t x323 = -1;
	uint16_t x324 = UINT16_MAX;
	int32_t t29 = 13826001;

    t29 = (x321==(x322>>(x323/x324)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x337 = INT32_MIN;
	volatile uint64_t x338 = UINT64_MAX;
	int8_t x339 = -1;
	uint16_t x340 = 550U;
	int32_t t30 = 0;

    t30 = (x337==(x338>>(x339/x340)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x341 = -2072035LL;
	volatile uint32_t x342 = UINT32_MAX;
	int8_t x343 = INT8_MAX;
	uint64_t x344 = 74390264421485242LLU;
	volatile int32_t t31 = -958487;

    t31 = (x341==(x342>>(x343/x344)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x349 = INT8_MIN;
	int8_t x350 = 14;
	int8_t x351 = -1;
	int16_t x352 = 1789;
	static volatile int32_t t32 = -3;

    t32 = (x349==(x350>>(x351/x352)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x381 = INT16_MIN;
	volatile uint8_t x382 = UINT8_MAX;
	int32_t x383 = INT32_MIN;
	int32_t x384 = INT32_MIN;
	int32_t t33 = 97;

    t33 = (x381==(x382>>(x383/x384)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x385 = 370181540847341673LLU;
	int32_t x386 = INT32_MAX;
	int8_t x387 = INT8_MAX;
	static int8_t x388 = INT8_MAX;
	volatile int32_t t34 = 3577;

    t34 = (x385==(x386>>(x387/x388)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x409 = 26596336992447970LL;
	volatile uint8_t x410 = UINT8_MAX;
	int64_t x411 = -1LL;
	volatile int16_t x412 = INT16_MIN;

    t35 = (x409==(x410>>(x411/x412)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x413 = INT16_MAX;
	uint32_t x414 = 1U;
	uint64_t x415 = 119LLU;
	int64_t x416 = -1LL;
	volatile int32_t t36 = -15706171;

    t36 = (x413==(x414>>(x415/x416)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x430 = INT64_MAX;
	int32_t x431 = -1;
	int32_t x432 = -56930;
	int32_t t37 = -1;

    t37 = (x429==(x430>>(x431/x432)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x449 = INT16_MIN;
	uint16_t x450 = 46U;
	int16_t x451 = 13;
	uint16_t x452 = 111U;

    t38 = (x449==(x450>>(x451/x452)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x457 = INT64_MIN;
	uint8_t x458 = UINT8_MAX;
	static uint8_t x459 = 1U;
	uint32_t x460 = 59161916U;
	static volatile int32_t t39 = -4;

    t39 = (x457==(x458>>(x459/x460)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x461 = 3724;
	int32_t x463 = INT32_MAX;
	static int32_t x464 = INT32_MIN;
	int32_t t40 = -397248938;

    t40 = (x461==(x462>>(x463/x464)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x473 = 15488259;
	int64_t x474 = INT64_MAX;
	static int16_t x475 = INT16_MAX;
	static int32_t x476 = INT32_MIN;
	static volatile int32_t t41 = 614249;

    t41 = (x473==(x474>>(x475/x476)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x477 = 110U;
	int16_t x479 = INT16_MIN;
	uint32_t x480 = UINT32_MAX;
	volatile int32_t t42 = -32962502;

    t42 = (x477==(x478>>(x479/x480)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x485 = INT16_MIN;
	uint32_t x486 = 708U;
	int32_t x487 = 554;
	static uint64_t x488 = UINT64_MAX;
	volatile int32_t t43 = 1231;

    t43 = (x485==(x486>>(x487/x488)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x490 = 1;
	static int8_t x491 = -1;
	uint32_t x492 = UINT32_MAX;

    t44 = (x489==(x490>>(x491/x492)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x494 = INT16_MAX;
	uint8_t x495 = UINT8_MAX;
	volatile uint64_t x496 = 33LLU;

    t45 = (x493==(x494>>(x495/x496)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x521 = INT16_MAX;
	volatile int64_t x522 = 101263448339347LL;
	int64_t x523 = -8263LL;
	int32_t x524 = INT32_MIN;

    t46 = (x521==(x522>>(x523/x524)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x546 = 2825425693950772905LL;
	volatile int8_t x547 = 5;
	static int16_t x548 = INT16_MIN;
	volatile int32_t t47 = -41;

    t47 = (x545==(x546>>(x547/x548)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x553 = INT16_MIN;
	uint32_t x554 = 7031135U;
	int32_t x556 = INT32_MIN;
	int32_t t48 = -6417938;

    t48 = (x553==(x554>>(x555/x556)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x557 = INT8_MIN;
	volatile uint32_t x558 = UINT32_MAX;
	int16_t x559 = 0;
	int8_t x560 = -1;
	int32_t t49 = 1951576;

    t49 = (x557==(x558>>(x559/x560)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x565 = UINT32_MAX;
	int32_t x566 = 1;
	uint32_t x567 = 13140U;
	volatile uint32_t x568 = 416U;
	volatile int32_t t50 = 6;

    t50 = (x565==(x566>>(x567/x568)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x569 = INT8_MAX;
	int16_t x570 = INT16_MAX;
	uint8_t x572 = 11U;
	static int32_t t51 = 17333;

    t51 = (x569==(x570>>(x571/x572)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x593 = UINT8_MAX;
	static volatile uint32_t x594 = 3U;
	uint8_t x595 = 11U;
	uint8_t x596 = UINT8_MAX;
	static volatile int32_t t52 = 17;

    t52 = (x593==(x594>>(x595/x596)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x605 = INT64_MAX;
	int8_t x606 = 0;
	static int64_t x607 = -1LL;
	static uint16_t x608 = 92U;

    t53 = (x605==(x606>>(x607/x608)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x614 = 15071;
	int32_t x615 = -1;
	uint32_t x616 = 1019272641U;
	volatile int32_t t54 = 1;

    t54 = (x613==(x614>>(x615/x616)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x618 = 12427;
	int8_t x620 = INT8_MIN;
	volatile int32_t t55 = -395;

    t55 = (x617==(x618>>(x619/x620)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x625 = 3783U;
	int8_t x626 = INT8_MAX;
	int8_t x627 = 18;
	volatile uint64_t x628 = 14411851700653334LLU;
	int32_t t56 = 726641;

    t56 = (x625==(x626>>(x627/x628)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x631 = 25;
	int16_t x632 = -152;
	static volatile int32_t t57 = -3264330;

    t57 = (x629==(x630>>(x631/x632)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x641 = UINT32_MAX;
	uint16_t x642 = 3U;
	volatile uint8_t x643 = 15U;
	int16_t x644 = 9734;
	int32_t t58 = -10757;

    t58 = (x641==(x642>>(x643/x644)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x649 = INT64_MIN;
	int16_t x650 = 3;
	uint8_t x651 = 5U;
	uint32_t x652 = 257U;
	int32_t t59 = -5956478;

    t59 = (x649==(x650>>(x651/x652)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x657 = INT32_MIN;
	static int16_t x658 = 952;
	int16_t x659 = -1;
	uint16_t x660 = UINT16_MAX;

    t60 = (x657==(x658>>(x659/x660)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x685 = INT64_MIN;
	volatile int64_t x686 = INT64_MAX;
	uint64_t x688 = 56796104850LLU;
	static volatile int32_t t61 = 126886412;

    t61 = (x685==(x686>>(x687/x688)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x702 = 8009LLU;
	int64_t x703 = -1LL;
	int32_t x704 = INT32_MAX;
	volatile int32_t t62 = -47713;

    t62 = (x701==(x702>>(x703/x704)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x709 = UINT16_MAX;
	int32_t x711 = -1;
	int32_t x712 = INT32_MIN;
	static volatile int32_t t63 = 0;

    t63 = (x709==(x710>>(x711/x712)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x729 = -1;
	static int16_t x731 = INT16_MIN;
	int64_t x732 = INT64_MIN;
	volatile int32_t t64 = 1431694;

    t64 = (x729==(x730>>(x731/x732)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x757 = INT16_MAX;
	int64_t x758 = 6586908487166LL;
	static uint8_t x759 = 61U;
	volatile int64_t x760 = INT64_MAX;
	volatile int32_t t65 = 12132;

    t65 = (x757==(x758>>(x759/x760)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x777 = INT8_MIN;
	uint32_t x778 = 56946632U;
	uint32_t x780 = UINT32_MAX;
	volatile int32_t t66 = -1;

    t66 = (x777==(x778>>(x779/x780)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x781 = INT32_MIN;
	uint64_t x782 = 7931LLU;
	int64_t x783 = 3564LL;
	static uint16_t x784 = 3257U;

    t67 = (x781==(x782>>(x783/x784)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x805 = 12U;
	int32_t x806 = INT32_MAX;
	int16_t x807 = INT16_MIN;
	int64_t x808 = INT64_MIN;
	int32_t t68 = -287005;

    t68 = (x805==(x806>>(x807/x808)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x829 = 3U;
	uint32_t x830 = 1U;
	uint64_t x832 = UINT64_MAX;
	volatile int32_t t69 = -1212122;

    t69 = (x829==(x830>>(x831/x832)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x837 = 3U;
	int64_t x838 = 53809009315458LL;
	int16_t x840 = INT16_MIN;
	static int32_t t70 = 525855733;

    t70 = (x837==(x838>>(x839/x840)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x841 = UINT8_MAX;
	static volatile int8_t x843 = -1;
	int16_t x844 = INT16_MAX;
	volatile int32_t t71 = -52814;

    t71 = (x841==(x842>>(x843/x844)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x853 = -27531534642LL;
	int64_t x854 = INT64_MAX;
	uint8_t x855 = UINT8_MAX;
	static uint16_t x856 = UINT16_MAX;
	int32_t t72 = -157;

    t72 = (x853==(x854>>(x855/x856)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x877 = INT8_MIN;
	uint8_t x878 = UINT8_MAX;
	uint64_t x879 = 39964LLU;
	uint16_t x880 = UINT16_MAX;
	static int32_t t73 = -4621;

    t73 = (x877==(x878>>(x879/x880)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x890 = UINT16_MAX;
	int8_t x891 = INT8_MIN;
	static int64_t x892 = INT64_MIN;
	static volatile int32_t t74 = -42283360;

    t74 = (x889==(x890>>(x891/x892)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x893 = 16164823U;
	int8_t x894 = 3;
	volatile uint64_t x895 = 9524LLU;
	uint16_t x896 = 15390U;

    t75 = (x893==(x894>>(x895/x896)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x901 = -1;
	int64_t x903 = -1LL;
	uint64_t x904 = UINT64_MAX;

    t76 = (x901==(x902>>(x903/x904)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x905 = UINT64_MAX;
	uint32_t x906 = 4713130U;
	static uint64_t x907 = UINT64_MAX;
	int8_t x908 = -1;
	volatile int32_t t77 = -1767770;

    t77 = (x905==(x906>>(x907/x908)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x909 = -1LL;
	static uint64_t x910 = 12376505LLU;
	int16_t x912 = -1;
	int32_t t78 = -5765781;

    t78 = (x909==(x910>>(x911/x912)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint16_t x913 = 2750U;
	volatile uint8_t x914 = UINT8_MAX;
	static uint64_t x915 = 243953935LLU;
	uint64_t x916 = 10498312247772LLU;

    t79 = (x913==(x914>>(x915/x916)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x918 = UINT64_MAX;
	int8_t x919 = -6;
	int64_t x920 = INT64_MAX;
	volatile int32_t t80 = -16863;

    t80 = (x917==(x918>>(x919/x920)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x921 = 13654727U;
	static volatile int64_t x922 = INT64_MAX;
	int32_t t81 = -248;

    t81 = (x921==(x922>>(x923/x924)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x937 = INT32_MIN;
	uint8_t x938 = 119U;
	uint16_t x939 = 357U;
	uint64_t x940 = 26543193643795LLU;
	int32_t t82 = 2445;

    t82 = (x937==(x938>>(x939/x940)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x965 = UINT16_MAX;
	int32_t x966 = INT32_MAX;
	int16_t x967 = INT16_MIN;
	int64_t x968 = INT64_MIN;
	volatile int32_t t83 = 89051942;

    t83 = (x965==(x966>>(x967/x968)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x985 = 384LLU;
	static uint64_t x988 = UINT64_MAX;

    t84 = (x985==(x986>>(x987/x988)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x993 = INT64_MIN;
	uint32_t x994 = UINT32_MAX;
	uint16_t x995 = 13U;
	uint16_t x996 = 41U;
	volatile int32_t t85 = -680;

    t85 = (x993==(x994>>(x995/x996)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x1021 = 15U;
	static uint32_t x1023 = 437U;
	int64_t x1024 = -2326013985LL;
	volatile int32_t t86 = 264636236;

    t86 = (x1021==(x1022>>(x1023/x1024)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x1029 = INT8_MIN;
	int32_t x1030 = INT32_MAX;
	static int64_t x1032 = INT64_MAX;
	volatile int32_t t87 = 4804;

    t87 = (x1029==(x1030>>(x1031/x1032)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x1037 = INT16_MIN;
	volatile int8_t x1038 = INT8_MAX;
	int32_t t88 = 43451374;

    t88 = (x1037==(x1038>>(x1039/x1040)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x1045 = INT8_MAX;
	volatile uint8_t x1046 = UINT8_MAX;
	uint16_t x1047 = 1812U;
	volatile int32_t t89 = -5754072;

    t89 = (x1045==(x1046>>(x1047/x1048)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x1053 = -1;
	uint16_t x1054 = UINT16_MAX;
	uint64_t x1055 = 31162082861LLU;
	uint64_t x1056 = 418897584339549LLU;
	static int32_t t90 = 22;

    t90 = (x1053==(x1054>>(x1055/x1056)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x1093 = UINT16_MAX;
	uint32_t x1094 = 951U;
	volatile int64_t x1095 = -1LL;
	uint32_t x1096 = 2U;

    t91 = (x1093==(x1094>>(x1095/x1096)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x1109 = 4930321562790186LLU;
	int16_t x1110 = 935;
	int16_t x1111 = -1;
	int32_t t92 = -15;

    t92 = (x1109==(x1110>>(x1111/x1112)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x1117 = INT32_MIN;
	int64_t x1120 = INT64_MIN;
	int32_t t93 = -793191;

    t93 = (x1117==(x1118>>(x1119/x1120)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x1137 = -415685LL;
	static uint32_t x1138 = UINT32_MAX;
	int32_t t94 = 32;

    t94 = (x1137==(x1138>>(x1139/x1140)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x1153 = -2;
	int16_t x1154 = INT16_MAX;
	int8_t x1155 = -1;
	volatile int64_t x1156 = INT64_MIN;
	volatile int32_t t95 = 179;

    t95 = (x1153==(x1154>>(x1155/x1156)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x1174 = UINT64_MAX;
	static uint8_t x1175 = 5U;
	int32_t x1176 = 568452299;
	int32_t t96 = -1;

    t96 = (x1173==(x1174>>(x1175/x1176)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x1177 = 8856;
	int16_t x1178 = INT16_MAX;
	int8_t x1179 = -1;
	int32_t x1180 = INT32_MAX;
	static int32_t t97 = 840068770;

    t97 = (x1177==(x1178>>(x1179/x1180)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x1185 = 0U;
	int32_t x1186 = INT32_MAX;
	int16_t x1187 = 177;
	volatile uint64_t x1188 = 7LLU;
	int32_t t98 = -188;

    t98 = (x1185==(x1186>>(x1187/x1188)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x1189 = 4U;
	uint64_t x1190 = 6560840LLU;
	static int8_t x1191 = -1;

    t99 = (x1189==(x1190>>(x1191/x1192)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x1194 = 7;
	uint32_t x1195 = 182010U;
	int32_t x1196 = -2935;
	int32_t t100 = 124;

    t100 = (x1193==(x1194>>(x1195/x1196)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x1210 = 40U;
	static uint64_t x1212 = 122087862583LLU;

    t101 = (x1209==(x1210>>(x1211/x1212)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x1213 = 515005734481435LL;
	volatile uint32_t x1214 = 2622U;
	int32_t x1216 = INT32_MAX;
	static int32_t t102 = 1;

    t102 = (x1213==(x1214>>(x1215/x1216)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x1217 = UINT64_MAX;
	static uint8_t x1218 = 0U;
	int8_t x1219 = INT8_MIN;
	int32_t x1220 = INT32_MIN;
	volatile int32_t t103 = 29829963;

    t103 = (x1217==(x1218>>(x1219/x1220)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x1241 = UINT32_MAX;
	static int32_t x1242 = 17;
	int32_t x1243 = -1;
	static uint16_t x1244 = 2U;
	static int32_t t104 = 372;

    t104 = (x1241==(x1242>>(x1243/x1244)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x1245 = INT64_MIN;
	int8_t x1246 = 22;
	volatile int8_t x1248 = -1;

    t105 = (x1245==(x1246>>(x1247/x1248)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x1253 = 478U;
	int16_t x1254 = INT16_MAX;
	uint32_t x1255 = 0U;
	static int16_t x1256 = INT16_MIN;
	volatile int32_t t106 = -29;

    t106 = (x1253==(x1254>>(x1255/x1256)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x1265 = INT8_MIN;
	uint64_t x1266 = UINT64_MAX;
	int8_t x1267 = -1;

    t107 = (x1265==(x1266>>(x1267/x1268)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x1269 = 7314164;
	int64_t x1270 = 17414771537993656LL;
	int32_t x1271 = INT32_MIN;
	int32_t x1272 = INT32_MIN;
	volatile int32_t t108 = -955;

    t108 = (x1269==(x1270>>(x1271/x1272)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x1273 = UINT8_MAX;
	uint16_t x1274 = 11988U;
	uint8_t x1275 = 0U;
	static uint8_t x1276 = 21U;

    t109 = (x1273==(x1274>>(x1275/x1276)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x1282 = 0;
	int32_t x1283 = -1;
	int64_t x1284 = INT64_MIN;
	int32_t t110 = -4;

    t110 = (x1281==(x1282>>(x1283/x1284)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x1329 = 1;
	volatile int64_t x1330 = 98054618057311LL;
	int32_t x1331 = -1;

    t111 = (x1329==(x1330>>(x1331/x1332)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x1381 = INT32_MAX;
	volatile int16_t x1382 = INT16_MAX;
	static volatile uint32_t x1384 = UINT32_MAX;
	static volatile int32_t t112 = -7;

    t112 = (x1381==(x1382>>(x1383/x1384)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x1393 = 5;
	uint8_t x1394 = 1U;
	volatile uint32_t x1395 = 22U;
	int16_t x1396 = INT16_MIN;
	volatile int32_t t113 = 4;

    t113 = (x1393==(x1394>>(x1395/x1396)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x1397 = INT8_MAX;
	uint64_t x1398 = 3792297LLU;
	static volatile int16_t x1399 = 195;
	int16_t x1400 = INT16_MAX;
	int32_t t114 = 55246;

    t114 = (x1397==(x1398>>(x1399/x1400)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x1437 = INT8_MIN;
	uint64_t x1438 = UINT64_MAX;
	uint16_t x1439 = UINT16_MAX;
	uint32_t x1440 = 3548U;
	volatile int32_t t115 = -10;

    t115 = (x1437==(x1438>>(x1439/x1440)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x1451 = INT8_MIN;
	uint16_t x1452 = UINT16_MAX;
	volatile int32_t t116 = -1;

    t116 = (x1449==(x1450>>(x1451/x1452)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x1456 = -1;

    t117 = (x1453==(x1454>>(x1455/x1456)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x1462 = INT8_MAX;
	int16_t x1463 = -1;
	int16_t x1464 = 1855;
	volatile int32_t t118 = 353993947;

    t118 = (x1461==(x1462>>(x1463/x1464)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x1465 = 5;
	uint8_t x1466 = UINT8_MAX;
	uint16_t x1467 = UINT16_MAX;
	volatile int16_t x1468 = INT16_MAX;
	static int32_t t119 = 0;

    t119 = (x1465==(x1466>>(x1467/x1468)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x1469 = INT32_MAX;
	uint8_t x1470 = 113U;
	volatile uint32_t x1471 = 31216702U;
	int32_t x1472 = INT32_MIN;
	int32_t t120 = -86365;

    t120 = (x1469==(x1470>>(x1471/x1472)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x1479 = INT32_MAX;
	volatile int32_t t121 = -213361;

    t121 = (x1477==(x1478>>(x1479/x1480)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x1509 = -15;
	volatile uint32_t x1510 = 3U;
	volatile uint16_t x1511 = 1U;
	int8_t x1512 = INT8_MIN;
	int32_t t122 = 10;

    t122 = (x1509==(x1510>>(x1511/x1512)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x1533 = INT64_MIN;
	volatile int64_t x1534 = INT64_MAX;
	int64_t x1535 = -1LL;
	volatile int32_t t123 = -4;

    t123 = (x1533==(x1534>>(x1535/x1536)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x1537 = UINT64_MAX;
	int64_t x1538 = 3117094965439LL;
	volatile int8_t x1539 = -1;
	volatile int32_t t124 = -744869753;

    t124 = (x1537==(x1538>>(x1539/x1540)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x1542 = 1;
	uint8_t x1543 = UINT8_MAX;
	volatile int32_t t125 = -1;

    t125 = (x1541==(x1542>>(x1543/x1544)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x1569 = -10;
	volatile uint32_t x1570 = 886959U;
	int64_t x1571 = -1LL;
	static int32_t t126 = -2;

    t126 = (x1569==(x1570>>(x1571/x1572)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x1577 = 556826LLU;
	int8_t x1579 = -1;

    t127 = (x1577==(x1578>>(x1579/x1580)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x1617 = -1;
	static int16_t x1618 = INT16_MAX;
	int8_t x1619 = INT8_MAX;
	int64_t x1620 = -37504027339LL;
	int32_t t128 = 15831253;

    t128 = (x1617==(x1618>>(x1619/x1620)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x1633 = 140;
	int32_t x1634 = INT32_MAX;
	static int16_t x1635 = -350;
	int64_t x1636 = INT64_MAX;
	int32_t t129 = 23963;

    t129 = (x1633==(x1634>>(x1635/x1636)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x1641 = INT32_MAX;
	static uint64_t x1643 = 10LLU;
	int8_t x1644 = INT8_MAX;
	int32_t t130 = 296;

    t130 = (x1641==(x1642>>(x1643/x1644)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x1654 = 3814;
	uint8_t x1655 = UINT8_MAX;
	int8_t x1656 = INT8_MAX;
	int32_t t131 = -1;

    t131 = (x1653==(x1654>>(x1655/x1656)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x1661 = INT32_MIN;
	volatile uint64_t x1662 = 233453731256LLU;
	static volatile int16_t x1663 = 141;
	int32_t x1664 = INT32_MIN;
	volatile int32_t t132 = -24;

    t132 = (x1661==(x1662>>(x1663/x1664)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x1674 = 1613481U;
	uint16_t x1675 = 7U;
	static int8_t x1676 = INT8_MIN;
	volatile int32_t t133 = 793094;

    t133 = (x1673==(x1674>>(x1675/x1676)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x1709 = UINT64_MAX;
	uint8_t x1710 = UINT8_MAX;
	int8_t x1711 = INT8_MAX;
	int64_t x1712 = INT64_MIN;
	int32_t t134 = 2376321;

    t134 = (x1709==(x1710>>(x1711/x1712)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x1713 = INT8_MAX;
	int32_t x1714 = 527010;
	int32_t x1715 = INT32_MAX;
	uint64_t x1716 = 965211579517LLU;
	volatile int32_t t135 = -856642645;

    t135 = (x1713==(x1714>>(x1715/x1716)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x1717 = UINT16_MAX;
	uint32_t x1718 = UINT32_MAX;
	volatile int64_t x1719 = -1LL;
	uint8_t x1720 = UINT8_MAX;

    t136 = (x1717==(x1718>>(x1719/x1720)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x1722 = INT16_MAX;
	int8_t x1723 = 3;
	int32_t t137 = -7564;

    t137 = (x1721==(x1722>>(x1723/x1724)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x1726 = 73117U;
	volatile int16_t x1727 = -1;
	int32_t x1728 = INT32_MIN;
	volatile int32_t t138 = -395401;

    t138 = (x1725==(x1726>>(x1727/x1728)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x1733 = INT32_MIN;
	static uint64_t x1734 = UINT64_MAX;
	uint16_t x1735 = 5U;
	int32_t x1736 = -95158;
	int32_t t139 = -10;

    t139 = (x1733==(x1734>>(x1735/x1736)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x1745 = -1;
	int64_t x1747 = -1LL;
	int8_t x1748 = INT8_MIN;
	int32_t t140 = -12;

    t140 = (x1745==(x1746>>(x1747/x1748)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int64_t x1753 = 477949LL;
	uint32_t x1754 = 18562U;
	volatile int64_t x1755 = INT64_MAX;
	volatile int32_t t141 = -5992;

    t141 = (x1753==(x1754>>(x1755/x1756)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x1773 = 40U;
	uint64_t x1774 = 7LLU;
	int64_t x1776 = INT64_MAX;
	volatile int32_t t142 = 299;

    t142 = (x1773==(x1774>>(x1775/x1776)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x1777 = -1;
	volatile uint32_t x1778 = UINT32_MAX;
	volatile int16_t x1779 = INT16_MAX;
	int64_t x1780 = -30865684189093LL;
	int32_t t143 = 1463440;

    t143 = (x1777==(x1778>>(x1779/x1780)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x1789 = UINT8_MAX;
	volatile int64_t x1790 = 10929875394LL;
	volatile int16_t x1791 = -1;
	int8_t x1792 = -1;
	int32_t t144 = 81;

    t144 = (x1789==(x1790>>(x1791/x1792)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x1825 = -281;
	int8_t x1827 = INT8_MAX;
	static int8_t x1828 = INT8_MIN;
	int32_t t145 = -16442;

    t145 = (x1825==(x1826>>(x1827/x1828)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x1829 = INT64_MAX;
	volatile uint64_t x1831 = UINT64_MAX;
	static int8_t x1832 = INT8_MIN;
	static volatile int32_t t146 = -11089223;

    t146 = (x1829==(x1830>>(x1831/x1832)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1837 = INT32_MAX;
	static int64_t x1838 = 26119LL;
	int8_t x1839 = INT8_MIN;
	static int64_t x1840 = -100803LL;

    t147 = (x1837==(x1838>>(x1839/x1840)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x1850 = 66759668LLU;
	int64_t x1851 = -1LL;
	int8_t x1852 = -1;
	int32_t t148 = 15;

    t148 = (x1849==(x1850>>(x1851/x1852)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1857 = INT16_MIN;
	static uint8_t x1858 = 42U;
	int8_t x1859 = 0;
	int8_t x1860 = -1;
	int32_t t149 = 134171510;

    t149 = (x1857==(x1858>>(x1859/x1860)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x1861 = INT8_MAX;
	uint8_t x1862 = 42U;
	int16_t x1863 = 22;
	volatile int32_t t150 = 967578;

    t150 = (x1861==(x1862>>(x1863/x1864)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x1870 = UINT64_MAX;
	int8_t x1871 = 1;
	static int32_t x1872 = INT32_MIN;

    t151 = (x1869==(x1870>>(x1871/x1872)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x1874 = 3;
	int32_t x1875 = 211383;
	int64_t x1876 = INT64_MAX;
	static int32_t t152 = -1;

    t152 = (x1873==(x1874>>(x1875/x1876)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x1881 = 77U;
	uint32_t x1882 = 3U;
	volatile int32_t x1884 = INT32_MAX;
	volatile int32_t t153 = -3839;

    t153 = (x1881==(x1882>>(x1883/x1884)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1885 = 329;
	uint64_t x1886 = 2304831981733048LLU;
	uint16_t x1887 = 29U;
	int32_t x1888 = INT32_MIN;

    t154 = (x1885==(x1886>>(x1887/x1888)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x1909 = -1;
	volatile int16_t x1910 = 2;
	int32_t x1912 = -232897244;
	int32_t t155 = 9934161;

    t155 = (x1909==(x1910>>(x1911/x1912)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x1929 = 137159433422163396LLU;
	int16_t x1931 = -1;
	int16_t x1932 = INT16_MIN;

    t156 = (x1929==(x1930>>(x1931/x1932)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x1949 = UINT8_MAX;
	int64_t x1952 = INT64_MIN;
	static int32_t t157 = -70;

    t157 = (x1949==(x1950>>(x1951/x1952)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1953 = INT16_MIN;
	static volatile int8_t x1954 = 0;
	int16_t x1956 = INT16_MIN;
	int32_t t158 = 69647691;

    t158 = (x1953==(x1954>>(x1955/x1956)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x1969 = INT32_MAX;
	uint32_t x1970 = 1U;
	volatile int32_t t159 = 11087032;

    t159 = (x1969==(x1970>>(x1971/x1972)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x1981 = 19U;
	static int64_t x1982 = 21LL;
	uint32_t x1984 = 225U;
	volatile int32_t t160 = 21117712;

    t160 = (x1981==(x1982>>(x1983/x1984)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x1985 = 221112391082920535LLU;
	volatile uint8_t x1986 = UINT8_MAX;
	uint64_t x1987 = UINT64_MAX;
	int32_t x1988 = -1;
	static volatile int32_t t161 = 262;

    t161 = (x1985==(x1986>>(x1987/x1988)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x2005 = 118;
	uint64_t x2006 = 3006190733LLU;
	static uint8_t x2008 = UINT8_MAX;
	int32_t t162 = -1;

    t162 = (x2005==(x2006>>(x2007/x2008)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x2013 = 1U;
	volatile int64_t x2014 = 1LL;
	uint32_t x2015 = 1024544907U;
	int8_t x2016 = INT8_MIN;
	volatile int32_t t163 = 478142193;

    t163 = (x2013==(x2014>>(x2015/x2016)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x2021 = INT32_MIN;
	uint64_t x2022 = UINT64_MAX;
	volatile uint32_t x2023 = 1U;
	int32_t t164 = -25;

    t164 = (x2021==(x2022>>(x2023/x2024)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x2033 = 0U;
	uint16_t x2034 = 248U;
	static volatile uint8_t x2035 = 19U;
	int32_t t165 = 488953;

    t165 = (x2033==(x2034>>(x2035/x2036)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x2041 = -1;
	uint16_t x2042 = 1U;
	volatile int32_t x2044 = -2455;
	static int32_t t166 = 6;

    t166 = (x2041==(x2042>>(x2043/x2044)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x2061 = 37578306792LLU;
	int8_t x2063 = INT8_MIN;
	int8_t x2064 = INT8_MIN;
	int32_t t167 = -23714;

    t167 = (x2061==(x2062>>(x2063/x2064)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x2086 = 65U;
	uint16_t x2087 = 1376U;
	int32_t t168 = -225;

    t168 = (x2085==(x2086>>(x2087/x2088)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x2101 = INT32_MAX;
	static uint16_t x2103 = 5U;
	static int32_t t169 = -1;

    t169 = (x2101==(x2102>>(x2103/x2104)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x2109 = -59638308;
	static volatile uint8_t x2110 = 1U;
	static int8_t x2112 = 61;
	int32_t t170 = 105;

    t170 = (x2109==(x2110>>(x2111/x2112)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x2116 = 2U;
	static volatile int32_t t171 = 395517202;

    t171 = (x2113==(x2114>>(x2115/x2116)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x2125 = 26111U;
	static volatile uint16_t x2126 = UINT16_MAX;
	uint64_t x2127 = UINT64_MAX;
	int8_t x2128 = INT8_MIN;
	volatile int32_t t172 = -4;

    t172 = (x2125==(x2126>>(x2127/x2128)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x2137 = -1LL;
	int8_t x2138 = INT8_MAX;
	int64_t x2139 = -1LL;
	int64_t x2140 = INT64_MIN;
	static volatile int32_t t173 = -386;

    t173 = (x2137==(x2138>>(x2139/x2140)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x2144 = INT64_MAX;
	int32_t t174 = -26;

    t174 = (x2141==(x2142>>(x2143/x2144)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x2161 = -1;
	int64_t x2162 = INT64_MAX;
	volatile int32_t t175 = -1;

    t175 = (x2161==(x2162>>(x2163/x2164)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x2173 = INT32_MAX;
	static volatile uint8_t x2174 = 50U;
	static int32_t x2176 = 149;
	static int32_t t176 = 185158130;

    t176 = (x2173==(x2174>>(x2175/x2176)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x2181 = 129348U;
	static int32_t x2183 = INT32_MIN;
	int64_t x2184 = INT64_MIN;
	volatile int32_t t177 = 0;

    t177 = (x2181==(x2182>>(x2183/x2184)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x2185 = 92844;
	uint16_t x2186 = 17U;
	int16_t x2187 = 6946;
	uint8_t x2188 = UINT8_MAX;
	volatile int32_t t178 = 25267;

    t178 = (x2185==(x2186>>(x2187/x2188)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x2197 = INT8_MIN;
	static int8_t x2198 = INT8_MAX;
	int16_t x2199 = -2290;
	volatile int32_t x2200 = INT32_MIN;
	static int32_t t179 = -48;

    t179 = (x2197==(x2198>>(x2199/x2200)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x2205 = 46998LLU;
	int16_t x2207 = 937;
	int32_t t180 = -504;

    t180 = (x2205==(x2206>>(x2207/x2208)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x2218 = UINT64_MAX;
	uint64_t x2219 = 1LLU;
	static uint64_t x2220 = 6LLU;
	int32_t t181 = 2;

    t181 = (x2217==(x2218>>(x2219/x2220)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x2237 = INT16_MAX;
	uint32_t x2238 = 11656728U;
	volatile int8_t x2239 = 3;
	volatile uint32_t x2240 = 13971U;
	volatile int32_t t182 = -64960852;

    t182 = (x2237==(x2238>>(x2239/x2240)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x2241 = 81780U;
	static volatile int32_t x2243 = INT32_MIN;
	volatile int64_t x2244 = INT64_MAX;
	int32_t t183 = -37573386;

    t183 = (x2241==(x2242>>(x2243/x2244)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x2245 = INT16_MIN;
	uint16_t x2246 = 1U;
	uint32_t x2247 = 3418U;
	volatile int32_t x2248 = INT32_MAX;

    t184 = (x2245==(x2246>>(x2247/x2248)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x2253 = 1058324U;
	volatile uint8_t x2254 = 6U;
	uint16_t x2256 = UINT16_MAX;
	static volatile int32_t t185 = 7397083;

    t185 = (x2253==(x2254>>(x2255/x2256)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x2277 = INT8_MIN;
	volatile uint32_t x2278 = UINT32_MAX;
	volatile int16_t x2279 = INT16_MAX;
	uint32_t x2280 = UINT32_MAX;
	static int32_t t186 = 45;

    t186 = (x2277==(x2278>>(x2279/x2280)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x2301 = 1U;
	uint8_t x2302 = UINT8_MAX;
	volatile uint16_t x2303 = 1U;
	uint8_t x2304 = 6U;
	int32_t t187 = 6;

    t187 = (x2301==(x2302>>(x2303/x2304)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x2321 = INT8_MIN;
	uint8_t x2322 = 12U;
	uint32_t x2323 = UINT32_MAX;
	int64_t x2324 = INT64_MAX;
	int32_t t188 = 2664611;

    t188 = (x2321==(x2322>>(x2323/x2324)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x2329 = INT8_MIN;
	int32_t x2330 = 1;
	volatile int64_t x2331 = INT64_MIN;
	uint64_t x2332 = UINT64_MAX;

    t189 = (x2329==(x2330>>(x2331/x2332)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x2333 = INT16_MIN;
	uint64_t x2334 = 6006LLU;
	static int32_t x2336 = INT32_MAX;
	volatile int32_t t190 = -102;

    t190 = (x2333==(x2334>>(x2335/x2336)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x2337 = INT32_MIN;
	volatile int64_t x2338 = 226921LL;
	int8_t x2339 = 1;
	int32_t x2340 = INT32_MAX;
	int32_t t191 = 398304972;

    t191 = (x2337==(x2338>>(x2339/x2340)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x2361 = -1;
	int16_t x2362 = 1;
	uint16_t x2363 = 6726U;
	int32_t x2364 = INT32_MIN;
	int32_t t192 = 26;

    t192 = (x2361==(x2362>>(x2363/x2364)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x2373 = INT64_MIN;
	int16_t x2374 = INT16_MAX;

    t193 = (x2373==(x2374>>(x2375/x2376)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x2377 = INT64_MIN;
	int8_t x2379 = INT8_MIN;
	uint16_t x2380 = 2261U;

    t194 = (x2377==(x2378>>(x2379/x2380)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x2381 = 979738;
	int32_t x2382 = INT32_MAX;
	int8_t x2383 = INT8_MIN;

    t195 = (x2381==(x2382>>(x2383/x2384)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x2393 = 1U;
	volatile uint8_t x2394 = 1U;
	int8_t x2395 = -1;
	int64_t x2396 = INT64_MAX;
	volatile int32_t t196 = 53675663;

    t196 = (x2393==(x2394>>(x2395/x2396)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x2397 = -1LL;
	uint64_t x2398 = 24883380164LLU;
	int16_t x2399 = -1;
	int8_t x2400 = INT8_MAX;

    t197 = (x2397==(x2398>>(x2399/x2400)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int8_t x2405 = -36;
	static int32_t x2406 = 55440;
	volatile int16_t x2407 = -155;
	int64_t x2408 = 225LL;
	volatile int32_t t198 = 31518;

    t198 = (x2405==(x2406>>(x2407/x2408)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x2413 = UINT64_MAX;
	uint16_t x2414 = 39U;
	int64_t x2415 = -1LL;
	int16_t x2416 = -1;
	volatile int32_t t199 = 15473000;

    t199 = (x2413==(x2414>>(x2415/x2416)));

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


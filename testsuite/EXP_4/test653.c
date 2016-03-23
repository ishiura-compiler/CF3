
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

uint8_t x21 = UINT8_MAX;
int16_t x23 = INT16_MIN;
uint16_t x41 = UINT16_MAX;
int8_t x65 = INT8_MIN;
int8_t x76 = INT8_MIN;
uint8_t x82 = UINT8_MAX;
int32_t x83 = -1789179;
static volatile int64_t x88 = 246LL;
int8_t x96 = 12;
int32_t x101 = INT32_MIN;
static int8_t x133 = -1;
volatile int32_t t14 = -512;
static int16_t x140 = INT16_MIN;
volatile int16_t x190 = INT16_MAX;
static volatile uint16_t x191 = 179U;
int32_t t20 = -83888929;
volatile uint8_t x197 = UINT8_MAX;
static volatile int32_t t21 = -6;
int32_t t22 = 71114;
static int8_t x217 = INT8_MIN;
uint64_t x219 = 1158683065221541060LLU;
static int16_t x223 = -1;
int8_t x226 = INT8_MAX;
static uint64_t x227 = UINT64_MAX;
volatile int32_t t25 = -100;
volatile int32_t x235 = 390805;
volatile uint16_t x239 = UINT16_MAX;
uint8_t x253 = 4U;
uint32_t x258 = UINT32_MAX;
int8_t x260 = INT8_MIN;
int64_t x266 = 168LL;
uint8_t x275 = 5U;
int16_t x277 = 17;
uint16_t x278 = 1345U;
int64_t x291 = INT64_MIN;
static int8_t x308 = -1;
int32_t t38 = 7;
static uint8_t x324 = 3U;
volatile int8_t x345 = 63;
volatile int32_t t44 = 3673;
volatile int8_t x367 = INT8_MAX;
int64_t x389 = INT64_MAX;
volatile uint32_t x398 = UINT32_MAX;
int32_t x401 = -2724;
static int64_t x414 = 6872753413359LL;
int64_t x422 = INT64_MAX;
int32_t x438 = INT32_MIN;
int16_t x440 = INT16_MAX;
volatile int32_t t52 = 1218054;
int16_t x443 = INT16_MIN;
volatile int32_t t53 = -194;
int32_t x471 = INT32_MIN;
int64_t x480 = -230271LL;
volatile int32_t t58 = 101731;
int16_t x490 = INT16_MAX;
int8_t x495 = 5;
volatile int32_t t60 = -5223;
volatile uint32_t x512 = 1065371157U;
volatile int32_t x519 = INT32_MAX;
int32_t t64 = -9065;
uint32_t x540 = 14604U;
static volatile int64_t x543 = INT64_MAX;
uint8_t x545 = 1U;
static int8_t x546 = INT8_MIN;
volatile int32_t x548 = INT32_MAX;
static int64_t x550 = -14LL;
uint32_t x551 = UINT32_MAX;
int32_t x554 = INT32_MIN;
static volatile int32_t t69 = 10365648;
static int8_t x561 = INT8_MIN;
int64_t x564 = -1LL;
int32_t t70 = -1595211;
volatile int8_t x593 = 1;
static int16_t x595 = -87;
static uint64_t x602 = 861517775813LLU;
int32_t t75 = 61;
volatile int32_t t77 = -3;
int8_t x648 = INT8_MAX;
volatile uint64_t x654 = 11586LLU;
static uint8_t x656 = UINT8_MAX;
static volatile int32_t t81 = -6913400;
static int32_t t82 = 44;
volatile int16_t x685 = INT16_MIN;
uint8_t x690 = 1U;
static int16_t x692 = INT16_MIN;
static int32_t t84 = -105448974;
volatile int32_t t85 = 395;
uint32_t x718 = 529449375U;
int16_t x719 = INT16_MIN;
volatile int64_t x738 = INT64_MAX;
int8_t x744 = 1;
int32_t t90 = -5;
static int32_t t91 = -2;
int16_t x773 = INT16_MAX;
static volatile uint8_t x781 = 74U;
int16_t x782 = INT16_MIN;
int16_t x803 = INT16_MIN;
volatile int16_t x805 = 1720;
int32_t x821 = -1;
uint8_t x829 = 14U;
volatile int32_t t102 = -362711;
int16_t x913 = 2;
static int32_t x915 = INT32_MAX;
int8_t x919 = -1;
uint64_t x920 = 242LLU;
volatile uint16_t x945 = 75U;
static int64_t x947 = -1LL;
uint32_t x949 = 1U;
static volatile int16_t x965 = -1;
volatile int16_t x966 = -1;
int8_t x971 = INT8_MAX;
int8_t x987 = INT8_MAX;
uint64_t x995 = UINT64_MAX;
uint32_t x1016 = UINT32_MAX;
static int16_t x1021 = INT16_MIN;
uint32_t x1024 = 1U;
volatile int8_t x1028 = -52;
int32_t t124 = -64456;
int16_t x1047 = INT16_MIN;
int32_t t125 = 24076;
static int32_t t126 = 1845;
int32_t x1062 = -1;
int8_t x1073 = -1;
static int8_t x1074 = INT8_MIN;
volatile int32_t x1075 = INT32_MIN;
volatile int16_t x1078 = 232;
int16_t x1086 = -3092;
uint64_t x1094 = UINT64_MAX;
uint32_t x1096 = 2932U;
uint16_t x1099 = UINT16_MAX;
volatile int32_t t136 = 4048;
uint16_t x1135 = 288U;
volatile int32_t t138 = 0;
int8_t x1164 = -14;
volatile int32_t x1167 = INT32_MAX;
int16_t x1172 = -1;
int64_t x1182 = 1146732361067353LL;
int8_t x1187 = INT8_MIN;
volatile int32_t t146 = -77;
int8_t x1208 = INT8_MIN;
volatile int64_t x1218 = INT64_MIN;
static int16_t x1220 = INT16_MIN;
int16_t x1233 = -124;
int32_t x1257 = -1;
uint16_t x1266 = 1U;
static uint16_t x1282 = 6U;
uint16_t x1287 = 159U;
int16_t x1294 = INT16_MAX;
volatile uint8_t x1301 = UINT8_MAX;
int16_t x1306 = -496;
static int32_t x1307 = INT32_MIN;
volatile int32_t t161 = -46146021;
static uint64_t x1354 = UINT64_MAX;
int32_t t164 = -45934296;
volatile int16_t x1377 = -1;
int32_t x1386 = INT32_MAX;
int64_t x1422 = -3205LL;
int32_t t171 = -11336300;
int64_t x1427 = 85LL;
int16_t x1431 = INT16_MIN;
int32_t t173 = 53019;
volatile int32_t x1435 = INT32_MAX;
int32_t t174 = -990438997;
int32_t t175 = -50894839;
int8_t x1453 = INT8_MAX;
uint64_t x1455 = 64002085311LLU;
int8_t x1467 = INT8_MIN;
int32_t t179 = 193633530;
int32_t x1469 = INT32_MAX;
int16_t x1471 = 6282;
int32_t t180 = -1;
volatile int32_t x1502 = 48312;
int16_t x1504 = INT16_MAX;
int32_t x1507 = 606475748;
volatile int16_t x1508 = -7;
volatile uint64_t x1512 = 3LLU;
uint8_t x1517 = 0U;
int16_t x1521 = 782;
int8_t x1524 = -26;
volatile int32_t t186 = 43433;
int8_t x1527 = 3;
volatile int8_t x1548 = INT8_MIN;
static int8_t x1573 = 55;
int32_t t194 = -8068271;
volatile int32_t t195 = 471;
volatile uint64_t x1602 = 6297749LLU;
static volatile int32_t x1603 = -1;
uint16_t x1612 = 4U;
static int64_t x1634 = -1LL;
volatile int32_t t199 = 876;


void f0(void) {
    	static uint8_t x17 = UINT8_MAX;
	int16_t x18 = INT16_MIN;
	int16_t x19 = INT16_MIN;
	volatile int8_t x20 = 42;
	static int32_t t0 = -371771240;

    t0 = (x17>(x18%(x19/x20)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x22 = -3070LL;
	int16_t x24 = -1;
	volatile int32_t t1 = 875;

    t1 = (x21>(x22%(x23/x24)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x25 = INT64_MIN;
	int32_t x26 = INT32_MIN;
	int8_t x27 = INT8_MIN;
	uint32_t x28 = 733601U;
	static volatile int32_t t2 = -849;

    t2 = (x25>(x26%(x27/x28)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x37 = INT64_MIN;
	uint16_t x38 = 25U;
	int16_t x39 = -1;
	uint64_t x40 = UINT64_MAX;
	volatile int32_t t3 = 2;

    t3 = (x37>(x38%(x39/x40)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x42 = INT32_MIN;
	uint8_t x43 = 101U;
	uint32_t x44 = 15U;
	static volatile int32_t t4 = -547933;

    t4 = (x41>(x42%(x43/x44)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x66 = 3095239526256658027LLU;
	int32_t x67 = -1;
	static uint32_t x68 = UINT32_MAX;
	int32_t t5 = -3812;

    t5 = (x65>(x66%(x67/x68)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x69 = 0U;
	int32_t x70 = INT32_MIN;
	int8_t x71 = -1;
	int32_t x72 = -1;
	volatile int32_t t6 = 7956;

    t6 = (x69>(x70%(x71/x72)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x73 = INT32_MIN;
	int64_t x74 = INT64_MIN;
	int32_t x75 = INT32_MAX;
	int32_t t7 = 1;

    t7 = (x73>(x74%(x75/x76)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x81 = INT32_MIN;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t8 = -72;

    t8 = (x81>(x82%(x83/x84)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x85 = INT16_MIN;
	int8_t x86 = INT8_MAX;
	static int16_t x87 = INT16_MIN;
	int32_t t9 = -44;

    t9 = (x85>(x86%(x87/x88)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x89 = 475;
	int8_t x90 = -1;
	uint32_t x91 = UINT32_MAX;
	uint32_t x92 = UINT32_MAX;
	static volatile int32_t t10 = 546;

    t10 = (x89>(x90%(x91/x92)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x93 = 18;
	uint64_t x94 = UINT64_MAX;
	int32_t x95 = INT32_MAX;
	volatile int32_t t11 = -7677;

    t11 = (x93>(x94%(x95/x96)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x102 = UINT32_MAX;
	int32_t x103 = INT32_MIN;
	int16_t x104 = -2812;
	int32_t t12 = 142;

    t12 = (x101>(x102%(x103/x104)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x109 = -1;
	volatile int16_t x110 = 2;
	volatile int16_t x111 = INT16_MIN;
	static int16_t x112 = -1;
	volatile int32_t t13 = -30896354;

    t13 = (x109>(x110%(x111/x112)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x134 = 123U;
	static int16_t x135 = INT16_MIN;
	static int16_t x136 = INT16_MAX;

    t14 = (x133>(x134%(x135/x136)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x137 = UINT16_MAX;
	int32_t x138 = INT32_MAX;
	static uint64_t x139 = UINT64_MAX;
	int32_t t15 = -820479;

    t15 = (x137>(x138%(x139/x140)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x149 = INT32_MAX;
	int32_t x150 = 174296;
	volatile int32_t x151 = INT32_MIN;
	int8_t x152 = 59;
	static int32_t t16 = 95779;

    t16 = (x149>(x150%(x151/x152)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x169 = 4;
	uint64_t x170 = UINT64_MAX;
	volatile int16_t x171 = INT16_MIN;
	volatile int8_t x172 = 3;
	static int32_t t17 = -1;

    t17 = (x169>(x170%(x171/x172)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x181 = 1;
	int32_t x182 = -1;
	int64_t x183 = INT64_MAX;
	int32_t x184 = INT32_MAX;
	int32_t t18 = -31;

    t18 = (x181>(x182%(x183/x184)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x189 = INT16_MIN;
	volatile int8_t x192 = 6;
	int32_t t19 = 11303;

    t19 = (x189>(x190%(x191/x192)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x193 = UINT16_MAX;
	static int64_t x194 = 35LL;
	int32_t x195 = -1;
	static uint32_t x196 = 6737662U;

    t20 = (x193>(x194%(x195/x196)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x198 = 3U;
	uint64_t x199 = 2499919LLU;
	uint8_t x200 = UINT8_MAX;

    t21 = (x197>(x198%(x199/x200)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x213 = INT16_MIN;
	uint8_t x214 = 0U;
	uint32_t x215 = 435568U;
	uint64_t x216 = 839LLU;

    t22 = (x213>(x214%(x215/x216)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x218 = INT8_MIN;
	uint8_t x220 = 3U;
	int32_t t23 = -432808;

    t23 = (x217>(x218%(x219/x220)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x221 = -841593679LL;
	int16_t x222 = 3;
	uint64_t x224 = UINT64_MAX;
	volatile int32_t t24 = -717718;

    t24 = (x221>(x222%(x223/x224)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x225 = -1;
	volatile int8_t x228 = -1;

    t25 = (x225>(x226%(x227/x228)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x233 = INT8_MAX;
	static uint16_t x234 = 53U;
	static uint8_t x236 = 11U;
	int32_t t26 = 444165;

    t26 = (x233>(x234%(x235/x236)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x237 = INT8_MIN;
	static volatile uint8_t x238 = UINT8_MAX;
	int32_t x240 = -14951;
	volatile int32_t t27 = 31;

    t27 = (x237>(x238%(x239/x240)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x254 = -1;
	int64_t x255 = -4333112145549925LL;
	int16_t x256 = -1;
	static int32_t t28 = 423457196;

    t28 = (x253>(x254%(x255/x256)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x257 = INT8_MIN;
	int32_t x259 = -9441;
	static volatile int32_t t29 = 534213745;

    t29 = (x257>(x258%(x259/x260)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x261 = 55U;
	volatile uint16_t x262 = UINT16_MAX;
	uint32_t x263 = UINT32_MAX;
	uint16_t x264 = 2297U;
	int32_t t30 = -5;

    t30 = (x261>(x262%(x263/x264)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x265 = 13U;
	int8_t x267 = -1;
	static uint32_t x268 = 1504117U;
	volatile int32_t t31 = 33816137;

    t31 = (x265>(x266%(x267/x268)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x273 = 11;
	uint16_t x274 = UINT16_MAX;
	int32_t x276 = -1;
	volatile int32_t t32 = 111;

    t32 = (x273>(x274%(x275/x276)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x279 = INT64_MIN;
	int64_t x280 = -2LL;
	int32_t t33 = -100810484;

    t33 = (x277>(x278%(x279/x280)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x281 = INT64_MIN;
	uint8_t x282 = 7U;
	uint8_t x283 = UINT8_MAX;
	volatile int8_t x284 = -1;
	int32_t t34 = -12;

    t34 = (x281>(x282%(x283/x284)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x289 = -121166184824LL;
	volatile int8_t x290 = INT8_MIN;
	static int16_t x292 = 6;
	int32_t t35 = -47;

    t35 = (x289>(x290%(x291/x292)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x293 = 325;
	int16_t x294 = -1;
	volatile int8_t x295 = -1;
	uint64_t x296 = 234206LLU;
	int32_t t36 = -86833416;

    t36 = (x293>(x294%(x295/x296)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x297 = 91;
	static uint32_t x298 = 8090U;
	uint16_t x299 = 1102U;
	static uint8_t x300 = 88U;
	volatile int32_t t37 = 944802;

    t37 = (x297>(x298%(x299/x300)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x305 = INT8_MAX;
	uint64_t x306 = 1LLU;
	int16_t x307 = INT16_MIN;

    t38 = (x305>(x306%(x307/x308)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x313 = INT32_MAX;
	static int16_t x314 = -5;
	uint64_t x315 = 3287LLU;
	volatile uint8_t x316 = UINT8_MAX;
	int32_t t39 = -14880;

    t39 = (x313>(x314%(x315/x316)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x321 = 1510460U;
	int32_t x322 = -1;
	int16_t x323 = INT16_MIN;
	volatile int32_t t40 = 0;

    t40 = (x321>(x322%(x323/x324)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x333 = 458;
	int32_t x334 = -1879379;
	uint8_t x335 = UINT8_MAX;
	volatile int16_t x336 = 45;
	int32_t t41 = -3;

    t41 = (x333>(x334%(x335/x336)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x341 = UINT16_MAX;
	volatile int64_t x342 = INT64_MAX;
	static int8_t x343 = INT8_MIN;
	int16_t x344 = -1;
	int32_t t42 = 10602;

    t42 = (x341>(x342%(x343/x344)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x346 = INT32_MIN;
	volatile int32_t x347 = -208457525;
	static int16_t x348 = INT16_MIN;
	volatile int32_t t43 = 78868;

    t43 = (x345>(x346%(x347/x348)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x361 = INT8_MIN;
	int32_t x362 = INT32_MIN;
	static int8_t x363 = INT8_MAX;
	int16_t x364 = 1;

    t44 = (x361>(x362%(x363/x364)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x365 = INT16_MIN;
	int16_t x366 = INT16_MIN;
	uint8_t x368 = 14U;
	volatile int32_t t45 = -601725657;

    t45 = (x365>(x366%(x367/x368)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x377 = 15240392U;
	uint64_t x378 = 33461388362867115LLU;
	int16_t x379 = 26;
	static int64_t x380 = -1LL;
	volatile int32_t t46 = -8;

    t46 = (x377>(x378%(x379/x380)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x390 = -1;
	static int16_t x391 = -9869;
	int64_t x392 = -1585LL;
	int32_t t47 = -6501;

    t47 = (x389>(x390%(x391/x392)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x397 = 14752U;
	static int16_t x399 = -1;
	int32_t x400 = -1;
	volatile int32_t t48 = -13036;

    t48 = (x397>(x398%(x399/x400)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x402 = UINT32_MAX;
	int64_t x403 = -8542523238828501LL;
	int32_t x404 = INT32_MIN;
	volatile int32_t t49 = -743809607;

    t49 = (x401>(x402%(x403/x404)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x413 = INT64_MIN;
	int32_t x415 = INT32_MIN;
	volatile int8_t x416 = INT8_MAX;
	int32_t t50 = -59099;

    t50 = (x413>(x414%(x415/x416)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x421 = 9;
	uint32_t x423 = UINT32_MAX;
	int16_t x424 = -14;
	volatile int32_t t51 = 1094112;

    t51 = (x421>(x422%(x423/x424)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x437 = -42099;
	int16_t x439 = INT16_MIN;

    t52 = (x437>(x438%(x439/x440)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x441 = 2329365LLU;
	static int64_t x442 = INT64_MAX;
	int16_t x444 = INT16_MIN;

    t53 = (x441>(x442%(x443/x444)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x453 = UINT32_MAX;
	volatile uint64_t x454 = UINT64_MAX;
	volatile int32_t x455 = INT32_MIN;
	volatile uint16_t x456 = 4065U;
	volatile int32_t t54 = -4;

    t54 = (x453>(x454%(x455/x456)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x461 = INT64_MAX;
	volatile uint64_t x462 = 280139067LLU;
	int64_t x463 = INT64_MIN;
	static int16_t x464 = INT16_MIN;
	int32_t t55 = -108195936;

    t55 = (x461>(x462%(x463/x464)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x469 = 4U;
	uint8_t x470 = 0U;
	volatile int64_t x472 = 967875369LL;
	volatile int32_t t56 = -437517;

    t56 = (x469>(x470%(x471/x472)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x473 = INT32_MIN;
	uint8_t x474 = UINT8_MAX;
	static uint16_t x475 = UINT16_MAX;
	static int16_t x476 = INT16_MIN;
	volatile int32_t t57 = 353;

    t57 = (x473>(x474%(x475/x476)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x477 = -34;
	volatile int64_t x478 = 963801541LL;
	static int64_t x479 = INT64_MIN;

    t58 = (x477>(x478%(x479/x480)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x489 = -1;
	int64_t x491 = 10886171281LL;
	static uint32_t x492 = UINT32_MAX;
	volatile int32_t t59 = 0;

    t59 = (x489>(x490%(x491/x492)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x493 = -1423367;
	static uint32_t x494 = 3U;
	int8_t x496 = -1;

    t60 = (x493>(x494%(x495/x496)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x501 = 12U;
	volatile int64_t x502 = INT64_MIN;
	uint64_t x503 = UINT64_MAX;
	uint32_t x504 = 63044U;
	volatile int32_t t61 = 6298187;

    t61 = (x501>(x502%(x503/x504)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x509 = INT8_MIN;
	static int16_t x510 = INT16_MIN;
	int16_t x511 = INT16_MIN;
	int32_t t62 = -46251609;

    t62 = (x509>(x510%(x511/x512)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x517 = 492;
	static int64_t x518 = -1LL;
	int16_t x520 = 247;
	int32_t t63 = 343655974;

    t63 = (x517>(x518%(x519/x520)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint32_t x521 = 2916U;
	int64_t x522 = -1LL;
	static volatile uint8_t x523 = 13U;
	static int8_t x524 = -1;

    t64 = (x521>(x522%(x523/x524)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x537 = 157LLU;
	volatile uint32_t x538 = 17U;
	uint16_t x539 = UINT16_MAX;
	volatile int32_t t65 = 9;

    t65 = (x537>(x538%(x539/x540)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x541 = INT32_MIN;
	int64_t x542 = INT64_MIN;
	uint32_t x544 = 28926U;
	int32_t t66 = 21373;

    t66 = (x541>(x542%(x543/x544)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x547 = UINT32_MAX;
	volatile int32_t t67 = 115084;

    t67 = (x545>(x546%(x547/x548)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x549 = INT64_MAX;
	static int16_t x552 = -1;
	volatile int32_t t68 = 277727924;

    t68 = (x549>(x550%(x551/x552)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x553 = -1;
	static int8_t x555 = -1;
	uint64_t x556 = UINT64_MAX;

    t69 = (x553>(x554%(x555/x556)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x562 = 110213928LL;
	int8_t x563 = -1;

    t70 = (x561>(x562%(x563/x564)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x573 = UINT8_MAX;
	uint64_t x574 = 1316096894LLU;
	int16_t x575 = INT16_MIN;
	int16_t x576 = INT16_MAX;
	volatile int32_t t71 = -215;

    t71 = (x573>(x574%(x575/x576)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x581 = INT32_MIN;
	uint64_t x582 = 269564156262246377LLU;
	int64_t x583 = -516693437310LL;
	int32_t x584 = INT32_MAX;
	volatile int32_t t72 = 197019;

    t72 = (x581>(x582%(x583/x584)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x594 = 1U;
	static int32_t x596 = -1;
	static int32_t t73 = -203;

    t73 = (x593>(x594%(x595/x596)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x601 = UINT16_MAX;
	int64_t x603 = INT64_MIN;
	uint32_t x604 = 353U;
	volatile int32_t t74 = 3277;

    t74 = (x601>(x602%(x603/x604)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x609 = 1LL;
	int64_t x610 = INT64_MAX;
	volatile int64_t x611 = INT64_MIN;
	uint16_t x612 = UINT16_MAX;

    t75 = (x609>(x610%(x611/x612)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x613 = INT64_MIN;
	static int32_t x614 = INT32_MIN;
	static uint64_t x615 = UINT64_MAX;
	int16_t x616 = INT16_MIN;
	int32_t t76 = -222956;

    t76 = (x613>(x614%(x615/x616)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x621 = 2486;
	static int64_t x622 = -1LL;
	int16_t x623 = INT16_MAX;
	volatile int8_t x624 = 27;

    t77 = (x621>(x622%(x623/x624)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x625 = INT8_MIN;
	int32_t x626 = INT32_MIN;
	int64_t x627 = INT64_MAX;
	uint16_t x628 = 131U;
	volatile int32_t t78 = -2084;

    t78 = (x625>(x626%(x627/x628)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x645 = UINT8_MAX;
	int8_t x646 = -1;
	int64_t x647 = INT64_MAX;
	int32_t t79 = 2;

    t79 = (x645>(x646%(x647/x648)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x653 = INT8_MAX;
	uint32_t x655 = UINT32_MAX;
	int32_t t80 = -3844;

    t80 = (x653>(x654%(x655/x656)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x657 = INT64_MIN;
	int32_t x658 = INT32_MAX;
	volatile int64_t x659 = 20199213620LL;
	uint16_t x660 = 11409U;

    t81 = (x657>(x658%(x659/x660)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x661 = -1;
	static int8_t x662 = -49;
	uint32_t x663 = UINT32_MAX;
	int32_t x664 = -1;

    t82 = (x661>(x662%(x663/x664)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x686 = 14U;
	int8_t x687 = INT8_MIN;
	int32_t x688 = 16;
	int32_t t83 = 201246369;

    t83 = (x685>(x686%(x687/x688)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x689 = 4;
	static volatile int64_t x691 = -1553246861472LL;

    t84 = (x689>(x690%(x691/x692)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x701 = INT64_MIN;
	volatile int32_t x702 = -1816170;
	int8_t x703 = -7;
	static uint32_t x704 = 3606974U;

    t85 = (x701>(x702%(x703/x704)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x717 = INT64_MIN;
	uint64_t x720 = 10671745LLU;
	int32_t t86 = -2741;

    t86 = (x717>(x718%(x719/x720)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x733 = 347328642541347764LLU;
	static int8_t x734 = -1;
	volatile int16_t x735 = -70;
	int16_t x736 = 12;
	static volatile int32_t t87 = 14203806;

    t87 = (x733>(x734%(x735/x736)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x737 = 162746685LLU;
	uint8_t x739 = 5U;
	uint16_t x740 = 1U;
	volatile int32_t t88 = 28814217;

    t88 = (x737>(x738%(x739/x740)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x741 = -1LL;
	static int8_t x742 = INT8_MIN;
	static volatile int8_t x743 = INT8_MAX;
	volatile int32_t t89 = -550373307;

    t89 = (x741>(x742%(x743/x744)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x761 = 0;
	int32_t x762 = INT32_MAX;
	int16_t x763 = INT16_MIN;
	int64_t x764 = 17LL;

    t90 = (x761>(x762%(x763/x764)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x765 = UINT32_MAX;
	static int8_t x766 = -1;
	int8_t x767 = INT8_MIN;
	static int16_t x768 = -4;

    t91 = (x765>(x766%(x767/x768)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x774 = INT32_MAX;
	static int32_t x775 = -21410;
	int32_t x776 = -365;
	int32_t t92 = 4;

    t92 = (x773>(x774%(x775/x776)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x783 = -1;
	volatile int32_t x784 = -1;
	static volatile int32_t t93 = 219;

    t93 = (x781>(x782%(x783/x784)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x785 = -1;
	volatile int8_t x786 = -1;
	static uint8_t x787 = 20U;
	int16_t x788 = -1;
	static volatile int32_t t94 = -1;

    t94 = (x785>(x786%(x787/x788)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x801 = -1;
	uint8_t x802 = 1U;
	int8_t x804 = -1;
	static volatile int32_t t95 = 21792994;

    t95 = (x801>(x802%(x803/x804)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x806 = INT8_MIN;
	int32_t x807 = INT32_MIN;
	static uint8_t x808 = 1U;
	volatile int32_t t96 = 965512888;

    t96 = (x805>(x806%(x807/x808)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x809 = -7;
	int8_t x810 = INT8_MAX;
	uint64_t x811 = UINT64_MAX;
	uint32_t x812 = 13121998U;
	int32_t t97 = -641908;

    t97 = (x809>(x810%(x811/x812)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x822 = INT64_MAX;
	int32_t x823 = -13678359;
	volatile int16_t x824 = INT16_MAX;
	static int32_t t98 = -1427;

    t98 = (x821>(x822%(x823/x824)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x825 = INT64_MAX;
	static uint64_t x826 = 203719184LLU;
	static int64_t x827 = INT64_MAX;
	uint64_t x828 = 35LLU;
	int32_t t99 = -139441227;

    t99 = (x825>(x826%(x827/x828)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x830 = INT8_MIN;
	int32_t x831 = INT32_MIN;
	static volatile uint16_t x832 = 116U;
	int32_t t100 = -49875;

    t100 = (x829>(x830%(x831/x832)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x833 = 1472U;
	uint32_t x834 = 13U;
	static int16_t x835 = INT16_MAX;
	static int8_t x836 = INT8_MIN;
	int32_t t101 = 40711576;

    t101 = (x833>(x834%(x835/x836)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x861 = -1;
	volatile int16_t x862 = INT16_MIN;
	volatile uint32_t x863 = 3576397U;
	uint8_t x864 = UINT8_MAX;

    t102 = (x861>(x862%(x863/x864)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x869 = -13;
	static uint8_t x870 = 1U;
	int64_t x871 = INT64_MIN;
	int64_t x872 = INT64_MIN;
	int32_t t103 = 17;

    t103 = (x869>(x870%(x871/x872)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x893 = -1;
	static int64_t x894 = -1LL;
	int8_t x895 = INT8_MIN;
	int32_t x896 = -1;
	volatile int32_t t104 = -224460375;

    t104 = (x893>(x894%(x895/x896)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x909 = -1LL;
	int32_t x910 = 1;
	int32_t x911 = INT32_MIN;
	int64_t x912 = -2103LL;
	static volatile int32_t t105 = 41;

    t105 = (x909>(x910%(x911/x912)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x914 = INT16_MIN;
	int32_t x916 = -1017935923;
	int32_t t106 = 1;

    t106 = (x913>(x914%(x915/x916)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x917 = -6709;
	volatile int32_t x918 = 62455;
	static int32_t t107 = 2009;

    t107 = (x917>(x918%(x919/x920)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x929 = -1;
	int32_t x930 = INT32_MIN;
	volatile uint32_t x931 = 120678U;
	static int16_t x932 = 5;
	volatile int32_t t108 = 5843772;

    t108 = (x929>(x930%(x931/x932)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x937 = INT16_MIN;
	int64_t x938 = -1LL;
	int16_t x939 = INT16_MAX;
	uint16_t x940 = 3080U;
	int32_t t109 = 13681398;

    t109 = (x937>(x938%(x939/x940)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x941 = 16466461641962LLU;
	static int32_t x942 = INT32_MAX;
	static volatile uint64_t x943 = UINT64_MAX;
	int16_t x944 = INT16_MAX;
	volatile int32_t t110 = 43;

    t110 = (x941>(x942%(x943/x944)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x946 = INT16_MIN;
	int8_t x948 = -1;
	static int32_t t111 = -612974;

    t111 = (x945>(x946%(x947/x948)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint8_t x950 = UINT8_MAX;
	uint16_t x951 = UINT16_MAX;
	int64_t x952 = -1LL;
	int32_t t112 = 149458166;

    t112 = (x949>(x950%(x951/x952)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x957 = INT16_MIN;
	uint64_t x958 = UINT64_MAX;
	uint16_t x959 = 3U;
	int8_t x960 = -1;
	volatile int32_t t113 = 5;

    t113 = (x957>(x958%(x959/x960)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x961 = -1;
	int32_t x962 = -1;
	uint16_t x963 = 1279U;
	static uint16_t x964 = 13U;
	volatile int32_t t114 = -4099903;

    t114 = (x961>(x962%(x963/x964)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x967 = 242184176;
	static volatile int16_t x968 = INT16_MIN;
	volatile int32_t t115 = -759695;

    t115 = (x965>(x966%(x967/x968)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x969 = -1LL;
	static uint16_t x970 = 939U;
	static int16_t x972 = -1;
	static volatile int32_t t116 = 270;

    t116 = (x969>(x970%(x971/x972)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x977 = -5378630950264LL;
	int16_t x978 = 0;
	static int64_t x979 = INT64_MIN;
	uint8_t x980 = 3U;
	int32_t t117 = 173963;

    t117 = (x977>(x978%(x979/x980)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x985 = INT8_MIN;
	int64_t x986 = 610714LL;
	int16_t x988 = 2;
	volatile int32_t t118 = 14;

    t118 = (x985>(x986%(x987/x988)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x993 = INT16_MIN;
	int64_t x994 = 220LL;
	static volatile int8_t x996 = INT8_MIN;
	int32_t t119 = -3676351;

    t119 = (x993>(x994%(x995/x996)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x1005 = -1;
	uint32_t x1006 = 1U;
	static uint16_t x1007 = UINT16_MAX;
	volatile int8_t x1008 = INT8_MIN;
	volatile int32_t t120 = 11;

    t120 = (x1005>(x1006%(x1007/x1008)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x1013 = 1;
	static uint64_t x1014 = 6027686280119545148LLU;
	uint64_t x1015 = UINT64_MAX;
	volatile int32_t t121 = 681;

    t121 = (x1013>(x1014%(x1015/x1016)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x1017 = INT32_MIN;
	uint32_t x1018 = UINT32_MAX;
	volatile int16_t x1019 = INT16_MIN;
	uint32_t x1020 = 14559U;
	int32_t t122 = 743;

    t122 = (x1017>(x1018%(x1019/x1020)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x1022 = INT64_MIN;
	static int8_t x1023 = INT8_MIN;
	volatile int32_t t123 = -1;

    t123 = (x1021>(x1022%(x1023/x1024)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x1025 = UINT32_MAX;
	int64_t x1026 = INT64_MAX;
	int16_t x1027 = INT16_MAX;

    t124 = (x1025>(x1026%(x1027/x1028)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x1045 = 8U;
	int16_t x1046 = INT16_MIN;
	int16_t x1048 = INT16_MIN;

    t125 = (x1045>(x1046%(x1047/x1048)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x1049 = INT8_MIN;
	static int64_t x1050 = -1LL;
	volatile int64_t x1051 = INT64_MIN;
	static uint32_t x1052 = UINT32_MAX;

    t126 = (x1049>(x1050%(x1051/x1052)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x1061 = 2U;
	int16_t x1063 = -1;
	volatile int64_t x1064 = -1LL;
	static int32_t t127 = -156864;

    t127 = (x1061>(x1062%(x1063/x1064)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x1065 = INT16_MIN;
	int64_t x1066 = -1LL;
	int32_t x1067 = INT32_MIN;
	volatile int16_t x1068 = INT16_MIN;
	volatile int32_t t128 = 690185;

    t128 = (x1065>(x1066%(x1067/x1068)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x1076 = 8;
	int32_t t129 = 52328056;

    t129 = (x1073>(x1074%(x1075/x1076)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x1077 = -7;
	static uint16_t x1079 = 7646U;
	static int8_t x1080 = INT8_MAX;
	static int32_t t130 = 37;

    t130 = (x1077>(x1078%(x1079/x1080)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x1081 = INT64_MIN;
	volatile int8_t x1082 = INT8_MIN;
	volatile uint8_t x1083 = 5U;
	volatile int16_t x1084 = -1;
	int32_t t131 = -228197;

    t131 = (x1081>(x1082%(x1083/x1084)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x1085 = INT16_MAX;
	uint8_t x1087 = 96U;
	volatile int8_t x1088 = -1;
	static volatile int32_t t132 = 493;

    t132 = (x1085>(x1086%(x1087/x1088)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x1089 = 169U;
	volatile uint16_t x1090 = UINT16_MAX;
	volatile int32_t x1091 = INT32_MIN;
	volatile uint32_t x1092 = 21296U;
	int32_t t133 = 113568958;

    t133 = (x1089>(x1090%(x1091/x1092)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x1093 = UINT16_MAX;
	static int64_t x1095 = -44899LL;
	static int32_t t134 = -1;

    t134 = (x1093>(x1094%(x1095/x1096)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x1097 = INT16_MIN;
	int16_t x1098 = INT16_MIN;
	static uint64_t x1100 = 661LLU;
	volatile int32_t t135 = 2046882;

    t135 = (x1097>(x1098%(x1099/x1100)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x1117 = 540552U;
	int32_t x1118 = 7;
	volatile uint32_t x1119 = UINT32_MAX;
	static int8_t x1120 = INT8_MIN;

    t136 = (x1117>(x1118%(x1119/x1120)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x1133 = INT64_MIN;
	int64_t x1134 = INT64_MIN;
	int32_t x1136 = -1;
	static int32_t t137 = 411331;

    t137 = (x1133>(x1134%(x1135/x1136)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x1137 = 174391135;
	uint64_t x1138 = UINT64_MAX;
	int64_t x1139 = INT64_MIN;
	static uint32_t x1140 = 114921229U;

    t138 = (x1137>(x1138%(x1139/x1140)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x1141 = INT16_MIN;
	volatile int8_t x1142 = INT8_MAX;
	int16_t x1143 = -3315;
	uint32_t x1144 = 215269U;
	volatile int32_t t139 = -3247;

    t139 = (x1141>(x1142%(x1143/x1144)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x1149 = UINT8_MAX;
	int16_t x1150 = 361;
	int16_t x1151 = INT16_MIN;
	static int64_t x1152 = -1LL;
	volatile int32_t t140 = 410422355;

    t140 = (x1149>(x1150%(x1151/x1152)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x1161 = INT64_MIN;
	static int64_t x1162 = 56464629058LL;
	uint8_t x1163 = UINT8_MAX;
	volatile int32_t t141 = -11;

    t141 = (x1161>(x1162%(x1163/x1164)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int32_t x1165 = INT32_MAX;
	int16_t x1166 = -59;
	int32_t x1168 = -112;
	int32_t t142 = -2686;

    t142 = (x1165>(x1166%(x1167/x1168)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x1169 = -3;
	int16_t x1170 = INT16_MIN;
	static int8_t x1171 = INT8_MIN;
	static int32_t t143 = -6261227;

    t143 = (x1169>(x1170%(x1171/x1172)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x1177 = INT32_MIN;
	volatile int16_t x1178 = -1032;
	volatile int32_t x1179 = INT32_MIN;
	int32_t x1180 = INT32_MIN;
	static volatile int32_t t144 = -5;

    t144 = (x1177>(x1178%(x1179/x1180)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x1181 = INT16_MIN;
	static int16_t x1183 = INT16_MAX;
	int8_t x1184 = INT8_MIN;
	volatile int32_t t145 = -11761776;

    t145 = (x1181>(x1182%(x1183/x1184)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x1185 = INT8_MIN;
	uint32_t x1186 = UINT32_MAX;
	int64_t x1188 = -1LL;

    t146 = (x1185>(x1186%(x1187/x1188)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x1193 = 1U;
	static volatile int8_t x1194 = INT8_MAX;
	static volatile int32_t x1195 = -22;
	volatile int16_t x1196 = -1;
	int32_t t147 = 22738976;

    t147 = (x1193>(x1194%(x1195/x1196)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x1201 = -1;
	uint16_t x1202 = UINT16_MAX;
	volatile int8_t x1203 = -1;
	uint64_t x1204 = UINT64_MAX;
	int32_t t148 = 60192481;

    t148 = (x1201>(x1202%(x1203/x1204)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x1205 = 0;
	volatile uint8_t x1206 = 76U;
	volatile int32_t x1207 = INT32_MIN;
	volatile int32_t t149 = 3802064;

    t149 = (x1205>(x1206%(x1207/x1208)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1217 = INT64_MAX;
	int64_t x1219 = INT64_MIN;
	int32_t t150 = -5640148;

    t150 = (x1217>(x1218%(x1219/x1220)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x1229 = 61302;
	uint16_t x1230 = UINT16_MAX;
	volatile int64_t x1231 = INT64_MAX;
	static int8_t x1232 = INT8_MIN;
	int32_t t151 = -6005876;

    t151 = (x1229>(x1230%(x1231/x1232)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x1234 = -54;
	static int8_t x1235 = INT8_MIN;
	static uint16_t x1236 = 5U;
	int32_t t152 = -81;

    t152 = (x1233>(x1234%(x1235/x1236)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x1258 = 748455U;
	uint32_t x1259 = UINT32_MAX;
	uint8_t x1260 = UINT8_MAX;
	static volatile int32_t t153 = 31440;

    t153 = (x1257>(x1258%(x1259/x1260)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1261 = INT16_MAX;
	static volatile int16_t x1262 = INT16_MAX;
	int64_t x1263 = -1LL;
	int32_t x1264 = -1;
	static int32_t t154 = -110;

    t154 = (x1261>(x1262%(x1263/x1264)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x1265 = -1;
	int64_t x1267 = 49317543448353700LL;
	int32_t x1268 = INT32_MAX;
	volatile int32_t t155 = 808630023;

    t155 = (x1265>(x1266%(x1267/x1268)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x1281 = 15390U;
	int64_t x1283 = INT64_MAX;
	int16_t x1284 = -133;
	int32_t t156 = -817651237;

    t156 = (x1281>(x1282%(x1283/x1284)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x1285 = INT16_MIN;
	int32_t x1286 = 498;
	int16_t x1288 = 10;
	volatile int32_t t157 = -408798;

    t157 = (x1285>(x1286%(x1287/x1288)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x1293 = 4288;
	int16_t x1295 = INT16_MIN;
	int8_t x1296 = INT8_MAX;
	int32_t t158 = -11380;

    t158 = (x1293>(x1294%(x1295/x1296)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x1302 = 3U;
	static int16_t x1303 = -55;
	uint32_t x1304 = 153797U;
	int32_t t159 = 11;

    t159 = (x1301>(x1302%(x1303/x1304)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x1305 = UINT8_MAX;
	int32_t x1308 = INT32_MAX;
	int32_t t160 = 21;

    t160 = (x1305>(x1306%(x1307/x1308)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x1309 = 0U;
	uint64_t x1310 = 46886866928118378LLU;
	uint32_t x1311 = 772825U;
	volatile uint16_t x1312 = UINT16_MAX;

    t161 = (x1309>(x1310%(x1311/x1312)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x1317 = 1410;
	volatile uint32_t x1318 = 22973U;
	uint64_t x1319 = UINT64_MAX;
	int64_t x1320 = INT64_MAX;
	int32_t t162 = -1;

    t162 = (x1317>(x1318%(x1319/x1320)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1325 = 1;
	static int32_t x1326 = -1;
	uint8_t x1327 = 15U;
	int8_t x1328 = -1;
	static volatile int32_t t163 = -15874676;

    t163 = (x1325>(x1326%(x1327/x1328)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x1353 = INT64_MIN;
	uint64_t x1355 = 14655322LLU;
	uint8_t x1356 = 4U;

    t164 = (x1353>(x1354%(x1355/x1356)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x1357 = INT8_MAX;
	volatile int64_t x1358 = 846595539002LL;
	uint64_t x1359 = UINT64_MAX;
	static uint16_t x1360 = UINT16_MAX;
	volatile int32_t t165 = -1;

    t165 = (x1357>(x1358%(x1359/x1360)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1361 = 4;
	int8_t x1362 = INT8_MIN;
	int64_t x1363 = INT64_MAX;
	volatile int8_t x1364 = INT8_MAX;
	int32_t t166 = 330815;

    t166 = (x1361>(x1362%(x1363/x1364)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x1369 = 17U;
	volatile int64_t x1370 = -1LL;
	uint8_t x1371 = UINT8_MAX;
	volatile int8_t x1372 = -3;
	static int32_t t167 = 180923579;

    t167 = (x1369>(x1370%(x1371/x1372)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x1373 = 6U;
	volatile int64_t x1374 = -1LL;
	uint32_t x1375 = UINT32_MAX;
	static volatile int64_t x1376 = 2259402LL;
	volatile int32_t t168 = -1373777;

    t168 = (x1373>(x1374%(x1375/x1376)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x1378 = UINT16_MAX;
	int16_t x1379 = -1;
	int16_t x1380 = -1;
	volatile int32_t t169 = -172875075;

    t169 = (x1377>(x1378%(x1379/x1380)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x1385 = INT16_MIN;
	uint32_t x1387 = UINT32_MAX;
	uint16_t x1388 = 3220U;
	volatile int32_t t170 = 235781342;

    t170 = (x1385>(x1386%(x1387/x1388)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x1421 = 0;
	int64_t x1423 = INT64_MIN;
	int64_t x1424 = INT64_MAX;

    t171 = (x1421>(x1422%(x1423/x1424)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x1425 = 13U;
	int8_t x1426 = INT8_MAX;
	static int64_t x1428 = -1LL;
	static volatile int32_t t172 = -18859985;

    t172 = (x1425>(x1426%(x1427/x1428)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1429 = -1;
	uint16_t x1430 = 20459U;
	uint64_t x1432 = 246153LLU;

    t173 = (x1429>(x1430%(x1431/x1432)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x1433 = 7U;
	uint64_t x1434 = UINT64_MAX;
	int16_t x1436 = 909;

    t174 = (x1433>(x1434%(x1435/x1436)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1441 = 14932586879878LLU;
	int64_t x1442 = INT64_MIN;
	int8_t x1443 = -1;
	uint32_t x1444 = 2503119U;

    t175 = (x1441>(x1442%(x1443/x1444)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1449 = INT64_MIN;
	int32_t x1450 = -1;
	volatile int8_t x1451 = -1;
	uint64_t x1452 = 460296102837974183LLU;
	int32_t t176 = 18451;

    t176 = (x1449>(x1450%(x1451/x1452)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x1454 = UINT8_MAX;
	int16_t x1456 = 1273;
	static int32_t t177 = 11;

    t177 = (x1453>(x1454%(x1455/x1456)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x1457 = 319235U;
	int16_t x1458 = INT16_MIN;
	volatile int16_t x1459 = INT16_MIN;
	int16_t x1460 = 1;
	int32_t t178 = -44;

    t178 = (x1457>(x1458%(x1459/x1460)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x1465 = 810787858418LLU;
	static int32_t x1466 = 39733127;
	uint8_t x1468 = 3U;

    t179 = (x1465>(x1466%(x1467/x1468)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1470 = INT32_MIN;
	volatile uint32_t x1472 = 41U;

    t180 = (x1469>(x1470%(x1471/x1472)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x1501 = 3U;
	static volatile int64_t x1503 = INT64_MIN;
	int32_t t181 = 32030;

    t181 = (x1501>(x1502%(x1503/x1504)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1505 = INT8_MIN;
	int32_t x1506 = INT32_MIN;
	static int32_t t182 = -4;

    t182 = (x1505>(x1506%(x1507/x1508)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1509 = 1;
	uint8_t x1510 = 116U;
	static int8_t x1511 = -1;
	volatile int32_t t183 = -11138228;

    t183 = (x1509>(x1510%(x1511/x1512)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1513 = 819;
	int16_t x1514 = INT16_MAX;
	int64_t x1515 = 21329530469955977LL;
	volatile uint8_t x1516 = 120U;
	volatile int32_t t184 = 46949;

    t184 = (x1513>(x1514%(x1515/x1516)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1518 = INT16_MIN;
	int64_t x1519 = INT64_MIN;
	volatile int64_t x1520 = INT64_MIN;
	volatile int32_t t185 = 69;

    t185 = (x1517>(x1518%(x1519/x1520)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1522 = 15856478217857LL;
	static volatile int64_t x1523 = INT64_MAX;

    t186 = (x1521>(x1522%(x1523/x1524)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1525 = INT64_MIN;
	int8_t x1526 = -1;
	int8_t x1528 = -1;
	volatile int32_t t187 = -513007;

    t187 = (x1525>(x1526%(x1527/x1528)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x1529 = 6100U;
	int16_t x1530 = 211;
	static int64_t x1531 = -74LL;
	int64_t x1532 = -1LL;
	volatile int32_t t188 = 1;

    t188 = (x1529>(x1530%(x1531/x1532)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1537 = -1;
	int32_t x1538 = INT32_MAX;
	int16_t x1539 = INT16_MAX;
	int16_t x1540 = -742;
	volatile int32_t t189 = 13;

    t189 = (x1537>(x1538%(x1539/x1540)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1541 = 3193290LLU;
	volatile int8_t x1542 = -1;
	static volatile int8_t x1543 = -1;
	volatile uint32_t x1544 = 141581U;
	int32_t t190 = 288;

    t190 = (x1541>(x1542%(x1543/x1544)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1545 = 69;
	int64_t x1546 = INT64_MIN;
	int16_t x1547 = INT16_MIN;
	int32_t t191 = -1;

    t191 = (x1545>(x1546%(x1547/x1548)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1557 = 1U;
	uint16_t x1558 = UINT16_MAX;
	int64_t x1559 = 17097872222508136LL;
	int32_t x1560 = 8190434;
	int32_t t192 = -23200;

    t192 = (x1557>(x1558%(x1559/x1560)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1569 = INT64_MIN;
	uint64_t x1570 = 0LLU;
	int32_t x1571 = -1;
	int8_t x1572 = -1;
	int32_t t193 = 0;

    t193 = (x1569>(x1570%(x1571/x1572)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1574 = 1;
	int64_t x1575 = -1LL;
	volatile uint64_t x1576 = 26194161LLU;

    t194 = (x1573>(x1574%(x1575/x1576)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1577 = UINT64_MAX;
	static int64_t x1578 = -7271394343LL;
	int32_t x1579 = INT32_MIN;
	static uint16_t x1580 = UINT16_MAX;

    t195 = (x1577>(x1578%(x1579/x1580)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1593 = -5;
	int8_t x1594 = 0;
	int16_t x1595 = INT16_MIN;
	uint16_t x1596 = 1761U;
	static volatile int32_t t196 = 17944;

    t196 = (x1593>(x1594%(x1595/x1596)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x1601 = 7LLU;
	int64_t x1604 = -1LL;
	volatile int32_t t197 = 4;

    t197 = (x1601>(x1602%(x1603/x1604)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x1609 = INT16_MIN;
	uint8_t x1610 = UINT8_MAX;
	int32_t x1611 = -2824;
	volatile int32_t t198 = -275435;

    t198 = (x1609>(x1610%(x1611/x1612)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x1633 = 3078184450537408124LLU;
	int16_t x1635 = -3184;
	int16_t x1636 = 1;

    t199 = (x1633>(x1634%(x1635/x1636)));

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



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

int8_t x1 = INT8_MAX;
uint16_t x4 = 3U;
volatile int32_t t0 = -2;
volatile int32_t t1 = -237;
static int16_t x38 = INT16_MAX;
static volatile int32_t x46 = -1;
int8_t x48 = INT8_MIN;
volatile int32_t t3 = INT32_MAX;
volatile int64_t x77 = INT64_MAX;
volatile uint16_t x79 = UINT16_MAX;
int16_t x80 = -1;
int8_t x88 = 11;
int8_t x91 = INT8_MIN;
int32_t t8 = -613145890;
int64_t x96 = INT64_MAX;
uint32_t x109 = 111382345U;
volatile int64_t x111 = 46LL;
int16_t x112 = INT16_MAX;
int32_t x121 = 18064;
static uint16_t x141 = UINT16_MAX;
uint8_t x147 = 11U;
uint8_t x153 = 0U;
static int16_t x155 = -1;
int32_t t17 = -247908367;
int8_t x226 = -1;
uint16_t x229 = UINT16_MAX;
static int8_t x230 = -1;
int32_t x233 = INT32_MAX;
int32_t t21 = INT32_MAX;
volatile int64_t x238 = INT64_MAX;
int64_t x239 = 415170885LL;
int64_t x252 = INT64_MAX;
int64_t x259 = INT64_MAX;
volatile int32_t t24 = 15466;
volatile int32_t x268 = -1;
static volatile int64_t x270 = -348425LL;
int8_t x271 = -1;
int32_t t26 = -14598174;
static int16_t x275 = INT16_MIN;
uint64_t x277 = 5785274691454541852LLU;
volatile uint32_t x279 = 6812992U;
int32_t x280 = -15;
uint64_t x291 = 0LLU;
uint8_t x321 = UINT8_MAX;
static uint32_t x345 = 126U;
volatile int64_t x346 = INT64_MIN;
volatile int32_t x370 = INT32_MIN;
int32_t t37 = INT32_MAX;
uint32_t x397 = UINT32_MAX;
int32_t x398 = INT32_MIN;
uint16_t x400 = 49U;
static volatile uint32_t t39 = UINT32_MAX;
volatile int32_t t41 = -411854360;
int16_t x428 = INT16_MIN;
static int64_t x429 = 908177622149LL;
int16_t x432 = -1;
int64_t t44 = 347101869LL;
volatile int16_t x434 = INT16_MIN;
volatile int64_t x435 = -247055LL;
static int8_t x442 = INT8_MAX;
static volatile int8_t x443 = INT8_MIN;
int64_t x453 = INT64_MAX;
uint64_t x470 = 1934280536292109069LLU;
volatile uint16_t x480 = UINT16_MAX;
volatile int8_t x497 = INT8_MAX;
static int64_t x500 = INT64_MAX;
int8_t x520 = -3;
volatile int32_t t56 = -125059698;
volatile int8_t x564 = 40;
static volatile int32_t x582 = 2529;
static volatile uint32_t x583 = UINT32_MAX;
uint16_t x584 = UINT16_MAX;
uint64_t x590 = 116893811LLU;
static uint8_t x591 = 3U;
int64_t x602 = INT64_MAX;
uint16_t x615 = 392U;
static uint32_t x625 = UINT32_MAX;
static volatile int8_t x638 = INT8_MAX;
uint16_t x644 = 2U;
volatile int32_t x646 = -67065912;
uint8_t x652 = 21U;
uint16_t x673 = 0U;
int16_t x675 = INT16_MIN;
int64_t x676 = -118872072891388LL;
volatile int32_t t73 = INT32_MAX;
int32_t x681 = 7695;
static volatile int16_t x696 = INT16_MIN;
int32_t x700 = -1;
volatile int32_t t76 = -225802;
volatile uint8_t x702 = 21U;
static volatile int32_t t78 = -727836598;
static uint8_t x721 = 30U;
volatile int32_t x722 = INT32_MAX;
uint16_t x741 = 22948U;
uint16_t x742 = 6U;
int32_t x743 = 3;
static uint64_t x745 = UINT64_MAX;
static int8_t x775 = INT8_MIN;
uint32_t t88 = UINT32_MAX;
static uint32_t x825 = UINT32_MAX;
volatile uint64_t x849 = 16LLU;
volatile uint64_t x869 = UINT64_MAX;
uint16_t x870 = UINT16_MAX;
static volatile int32_t x872 = -2740;
uint32_t x877 = 97985U;
int16_t x878 = INT16_MAX;
uint16_t x891 = 1U;
int64_t x911 = INT64_MIN;
static int8_t x918 = -56;
static volatile int32_t x959 = -1;
volatile int32_t t99 = -3929815;
int16_t x963 = -6376;
uint32_t x969 = 23041590U;
volatile uint8_t x970 = UINT8_MAX;
int64_t x978 = INT64_MAX;
int64_t x979 = 1LL;
int8_t x980 = 10;
uint64_t x993 = 332147418LLU;
volatile int16_t x1002 = 251;
volatile int8_t x1004 = INT8_MIN;
uint64_t x1015 = 4117561842621929LLU;
volatile int32_t t108 = -852607789;
uint64_t x1073 = UINT64_MAX;
int8_t x1079 = -3;
int8_t x1101 = INT8_MAX;
int16_t x1112 = -1;
static volatile int8_t x1120 = -1;
static int32_t t117 = -960531;
int32_t x1142 = -24665562;
volatile uint32_t x1145 = UINT32_MAX;
static volatile int32_t t121 = 5;
int8_t x1167 = INT8_MAX;
volatile uint64_t x1169 = 31078052868LLU;
volatile int16_t x1191 = INT16_MIN;
uint16_t x1198 = 5U;
int32_t t125 = 17;
static uint64_t x1209 = UINT64_MAX;
volatile uint32_t x1211 = 7614063U;
uint8_t x1221 = 29U;
int64_t x1222 = INT64_MIN;
int16_t x1224 = 883;
uint16_t x1231 = 105U;
uint16_t x1245 = UINT16_MAX;
uint8_t x1269 = 22U;
int32_t t134 = -253483394;
int8_t x1278 = 3;
int32_t t135 = 483508;
int8_t x1294 = INT8_MIN;
volatile int64_t x1298 = 879743LL;
int64_t x1299 = -1LL;
uint32_t x1320 = 11457599U;
static volatile int32_t x1338 = -1;
static volatile int32_t t140 = 500937;
uint32_t x1342 = 49970921U;
uint64_t t141 = 50LLU;
int8_t x1354 = INT8_MIN;
int16_t x1363 = INT16_MIN;
static volatile int32_t t143 = -17198304;
uint16_t x1373 = 1059U;
int32_t x1374 = -1;
int8_t x1375 = INT8_MIN;
uint64_t t145 = 20423215LLU;
static volatile int8_t x1396 = -15;
int64_t x1402 = INT64_MAX;
static int32_t x1403 = -1;
volatile int32_t t147 = -86987460;
volatile uint8_t x1435 = 102U;
static uint16_t x1467 = 5U;
int32_t x1546 = INT32_MAX;
int16_t x1551 = -1;
uint8_t x1553 = UINT8_MAX;
uint16_t x1582 = 97U;
static int64_t x1601 = INT64_MAX;
int64_t x1618 = INT64_MIN;
static volatile int16_t x1631 = INT16_MIN;
volatile int16_t x1704 = INT16_MAX;
int8_t x1736 = -1;
volatile int32_t t178 = -31612;
uint16_t x1747 = UINT16_MAX;
int8_t x1786 = INT8_MAX;
volatile int16_t x1802 = 13;
static volatile uint32_t x1803 = 1665217U;
int32_t x1806 = -1;
uint64_t x1828 = 219387291154968567LLU;
uint32_t x1844 = 973U;
volatile uint64_t x1853 = 790925104LLU;
uint32_t x1855 = UINT32_MAX;
volatile uint64_t t192 = UINT64_MAX;
static int16_t x1902 = INT16_MAX;
uint64_t t195 = UINT64_MAX;
int32_t x1911 = -248515;
int8_t x1913 = INT8_MAX;
int32_t x1922 = INT32_MAX;
uint8_t x1923 = UINT8_MAX;


void f0(void) {
    	int32_t x2 = 1887322;
	volatile uint32_t x3 = 9684U;

    t0 = (x1<<(x2==(x3*x4)));

    if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x25 = INT8_MAX;
	uint8_t x26 = UINT8_MAX;
	uint8_t x27 = UINT8_MAX;
	volatile uint64_t x28 = 87873933LLU;

    t1 = (x25<<(x26==(x27*x28)));

    if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint64_t x37 = UINT64_MAX;
	int16_t x39 = INT16_MIN;
	int8_t x40 = -1;
	static uint64_t t2 = UINT64_MAX;

    t2 = (x37<<(x38==(x39*x40)));

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x45 = INT32_MAX;
	uint64_t x47 = 10188206441422LLU;

    t3 = (x45<<(x46==(x47*x48)));

    if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x53 = 1;
	uint16_t x54 = UINT16_MAX;
	static int16_t x55 = -351;
	volatile int32_t x56 = -3580891;
	int32_t t4 = -425550;

    t4 = (x53<<(x54==(x55*x56)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x78 = -1;
	int64_t t5 = INT64_MAX;

    t5 = (x77<<(x78==(x79*x80)));

    if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x81 = UINT64_MAX;
	int16_t x82 = -1;
	static int32_t x83 = 29622;
	static int64_t x84 = 5845856LL;
	volatile uint64_t t6 = UINT64_MAX;

    t6 = (x81<<(x82==(x83*x84)));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x85 = 7719U;
	static int8_t x86 = -1;
	volatile int8_t x87 = INT8_MAX;
	volatile uint32_t t7 = 2772629U;

    t7 = (x85<<(x86==(x87*x88)));

    if (t7 != 7719U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x89 = INT8_MAX;
	int16_t x90 = -89;
	int8_t x92 = 0;

    t8 = (x89<<(x90==(x91*x92)));

    if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x93 = 1;
	static int16_t x94 = -1;
	static volatile uint64_t x95 = UINT64_MAX;
	static volatile int32_t t9 = 5775;

    t9 = (x93<<(x94==(x95*x96)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x101 = 10160U;
	static uint8_t x102 = 1U;
	int32_t x103 = 11375322;
	int16_t x104 = 0;
	volatile int32_t t10 = -126;

    t10 = (x101<<(x102==(x103*x104)));

    if (t10 != 10160) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x105 = INT16_MAX;
	static int16_t x106 = INT16_MAX;
	uint16_t x107 = UINT16_MAX;
	static uint8_t x108 = 8U;
	static volatile int32_t t11 = -67;

    t11 = (x105<<(x106==(x107*x108)));

    if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x110 = INT64_MAX;
	volatile uint32_t t12 = 185U;

    t12 = (x109<<(x110==(x111*x112)));

    if (t12 != 111382345U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x122 = UINT64_MAX;
	int16_t x123 = 802;
	uint32_t x124 = 1041403176U;
	int32_t t13 = -241207;

    t13 = (x121<<(x122==(x123*x124)));

    if (t13 != 18064) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x142 = 1U;
	uint8_t x143 = 64U;
	volatile int32_t x144 = 651;
	volatile int32_t t14 = 0;

    t14 = (x141<<(x142==(x143*x144)));

    if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x145 = 0;
	int16_t x146 = INT16_MAX;
	int32_t x148 = -55978;
	volatile int32_t t15 = 1;

    t15 = (x145<<(x146==(x147*x148)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x149 = 1U;
	static volatile int8_t x150 = -1;
	volatile uint8_t x151 = 1U;
	int8_t x152 = INT8_MIN;
	static volatile int32_t t16 = -114699;

    t16 = (x149<<(x150==(x151*x152)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x154 = INT8_MAX;
	static int8_t x156 = 0;

    t17 = (x153<<(x154==(x155*x156)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x205 = UINT64_MAX;
	uint16_t x206 = 19U;
	static int8_t x207 = INT8_MIN;
	volatile int8_t x208 = INT8_MAX;
	static uint64_t t18 = UINT64_MAX;

    t18 = (x205<<(x206==(x207*x208)));

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x225 = UINT64_MAX;
	uint32_t x227 = 114753469U;
	int8_t x228 = -25;
	volatile uint64_t t19 = UINT64_MAX;

    t19 = (x225<<(x226==(x227*x228)));

    if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x231 = -1LL;
	int64_t x232 = INT64_MAX;
	volatile int32_t t20 = -35611294;

    t20 = (x229<<(x230==(x231*x232)));

    if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x234 = INT64_MAX;
	uint8_t x235 = 17U;
	int32_t x236 = -1;

    t21 = (x233<<(x234==(x235*x236)));

    if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x237 = 173U;
	volatile int8_t x240 = INT8_MIN;
	int32_t t22 = 1;

    t22 = (x237<<(x238==(x239*x240)));

    if (t22 != 173) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x249 = 5U;
	int16_t x250 = 3;
	static int32_t x251 = 0;
	int32_t t23 = -2;

    t23 = (x249<<(x250==(x251*x252)));

    if (t23 != 5) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x257 = 2484U;
	volatile uint64_t x258 = UINT64_MAX;
	int64_t x260 = -1LL;

    t24 = (x257<<(x258==(x259*x260)));

    if (t24 != 2484) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x265 = 1851U;
	uint32_t x266 = 70476U;
	int32_t x267 = -32;
	volatile int32_t t25 = 1;

    t25 = (x265<<(x266==(x267*x268)));

    if (t25 != 1851) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x269 = INT8_MAX;
	int8_t x272 = INT8_MAX;

    t26 = (x269<<(x270==(x271*x272)));

    if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x273 = UINT64_MAX;
	int8_t x274 = 3;
	int64_t x276 = -18LL;
	volatile uint64_t t27 = UINT64_MAX;

    t27 = (x273<<(x274==(x275*x276)));

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x278 = -3;
	volatile uint64_t t28 = 6530LLU;

    t28 = (x277<<(x278==(x279*x280)));

    if (t28 != 5785274691454541852LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x281 = 4066117U;
	int32_t x282 = 11004;
	static volatile int64_t x283 = -1LL;
	static volatile int16_t x284 = INT16_MIN;
	uint32_t t29 = 11U;

    t29 = (x281<<(x282==(x283*x284)));

    if (t29 != 4066117U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x289 = 27601497LLU;
	uint8_t x290 = 5U;
	static uint64_t x292 = 224726847LLU;
	volatile uint64_t t30 = 143365436LLU;

    t30 = (x289<<(x290==(x291*x292)));

    if (t30 != 27601497LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x297 = 3112U;
	int32_t x298 = -5754;
	int64_t x299 = -1LL;
	static uint64_t x300 = 2226496999356670729LLU;
	uint32_t t31 = 105U;

    t31 = (x297<<(x298==(x299*x300)));

    if (t31 != 3112U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x309 = 1;
	int32_t x310 = 38606;
	int8_t x311 = INT8_MAX;
	uint64_t x312 = 4670516654177LLU;
	volatile int32_t t32 = -31917711;

    t32 = (x309<<(x310==(x311*x312)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x313 = 360635985433203LL;
	int16_t x314 = INT16_MAX;
	int8_t x315 = INT8_MAX;
	uint16_t x316 = 69U;
	int64_t t33 = -2046LL;

    t33 = (x313<<(x314==(x315*x316)));

    if (t33 != 360635985433203LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x322 = UINT8_MAX;
	int32_t x323 = -1;
	volatile int16_t x324 = INT16_MIN;
	static volatile int32_t t34 = -14256;

    t34 = (x321<<(x322==(x323*x324)));

    if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x333 = INT64_MAX;
	volatile uint16_t x334 = 5616U;
	uint64_t x335 = UINT64_MAX;
	static int64_t x336 = -1LL;
	volatile int64_t t35 = INT64_MAX;

    t35 = (x333<<(x334==(x335*x336)));

    if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x347 = 9172U;
	int16_t x348 = 790;
	uint32_t t36 = 1571693U;

    t36 = (x345<<(x346==(x347*x348)));

    if (t36 != 126U) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x369 = INT32_MAX;
	int64_t x371 = 1733773974250930LL;
	volatile int8_t x372 = INT8_MAX;

    t37 = (x369<<(x370==(x371*x372)));

    if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x381 = UINT8_MAX;
	int8_t x382 = INT8_MIN;
	int64_t x383 = 416761959LL;
	int8_t x384 = 4;
	volatile int32_t t38 = 517603;

    t38 = (x381<<(x382==(x383*x384)));

    if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x399 = -1;

    t39 = (x397<<(x398==(x399*x400)));

    if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x401 = INT8_MAX;
	static int16_t x402 = INT16_MAX;
	int8_t x403 = -63;
	static int64_t x404 = -1LL;
	static int32_t t40 = 2112;

    t40 = (x401<<(x402==(x403*x404)));

    if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x413 = UINT16_MAX;
	uint16_t x414 = 36U;
	static int8_t x415 = INT8_MIN;
	int8_t x416 = INT8_MAX;

    t41 = (x413<<(x414==(x415*x416)));

    if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x417 = 13U;
	static int16_t x418 = 14;
	int16_t x419 = 114;
	int8_t x420 = 0;
	int32_t t42 = -1;

    t42 = (x417<<(x418==(x419*x420)));

    if (t42 != 13) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x425 = 46952944515LLU;
	static volatile int16_t x426 = INT16_MIN;
	int16_t x427 = INT16_MIN;
	volatile uint64_t t43 = 823113869LLU;

    t43 = (x425<<(x426==(x427*x428)));

    if (t43 != 46952944515LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x430 = INT16_MIN;
	int8_t x431 = -1;

    t44 = (x429<<(x430==(x431*x432)));

    if (t44 != 908177622149LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x433 = 64579U;
	volatile int16_t x436 = INT16_MIN;
	uint32_t t45 = 66758U;

    t45 = (x433<<(x434==(x435*x436)));

    if (t45 != 64579U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x441 = 35U;
	uint64_t x444 = UINT64_MAX;
	uint32_t t46 = 81U;

    t46 = (x441<<(x442==(x443*x444)));

    if (t46 != 35U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x445 = UINT64_MAX;
	int8_t x446 = -1;
	static int32_t x447 = INT32_MIN;
	static int64_t x448 = -1LL;
	volatile uint64_t t47 = UINT64_MAX;

    t47 = (x445<<(x446==(x447*x448)));

    if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x454 = 1843621;
	int8_t x455 = INT8_MAX;
	static uint32_t x456 = 5517990U;
	static volatile int64_t t48 = INT64_MAX;

    t48 = (x453<<(x454==(x455*x456)));

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x465 = 16750063461923244LLU;
	static int8_t x466 = -52;
	int64_t x467 = INT64_MIN;
	volatile uint64_t x468 = 127300311170338LLU;
	uint64_t t49 = 2742165590862LLU;

    t49 = (x465<<(x466==(x467*x468)));

    if (t49 != 16750063461923244LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x469 = UINT16_MAX;
	uint16_t x471 = UINT16_MAX;
	uint64_t x472 = 28402725009100653LLU;
	volatile int32_t t50 = 63180063;

    t50 = (x469<<(x470==(x471*x472)));

    if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x477 = INT64_MAX;
	static int16_t x478 = INT16_MIN;
	int8_t x479 = INT8_MIN;
	volatile int64_t t51 = INT64_MAX;

    t51 = (x477<<(x478==(x479*x480)));

    if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x498 = INT64_MAX;
	static int8_t x499 = 1;
	int32_t t52 = -497234973;

    t52 = (x497<<(x498==(x499*x500)));

    if (t52 != 254) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x501 = 0;
	int8_t x502 = 4;
	int64_t x503 = 43LL;
	int16_t x504 = INT16_MIN;
	int32_t t53 = 5;

    t53 = (x501<<(x502==(x503*x504)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x513 = UINT16_MAX;
	int32_t x514 = INT32_MIN;
	int8_t x515 = 0;
	int32_t x516 = 73601325;
	volatile int32_t t54 = 172;

    t54 = (x513<<(x514==(x515*x516)));

    if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x517 = INT16_MAX;
	int32_t x518 = -27755;
	int32_t x519 = 105363380;
	static volatile int32_t t55 = 700696;

    t55 = (x517<<(x518==(x519*x520)));

    if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x537 = 817U;
	static int32_t x538 = -1;
	volatile uint64_t x539 = 27097LLU;
	static uint64_t x540 = UINT64_MAX;

    t56 = (x537<<(x538==(x539*x540)));

    if (t56 != 817) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x549 = 5844U;
	uint16_t x550 = 3188U;
	int16_t x551 = 1;
	int8_t x552 = -1;
	volatile int32_t t57 = 509652418;

    t57 = (x549<<(x550==(x551*x552)));

    if (t57 != 5844) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x561 = 3396U;
	int16_t x562 = 54;
	int16_t x563 = -1899;
	volatile int32_t t58 = 1;

    t58 = (x561<<(x562==(x563*x564)));

    if (t58 != 3396) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x581 = 4U;
	int32_t t59 = 21798153;

    t59 = (x581<<(x582==(x583*x584)));

    if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x589 = UINT8_MAX;
	uint8_t x592 = 13U;
	volatile int32_t t60 = -19885268;

    t60 = (x589<<(x590==(x591*x592)));

    if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x597 = 394230092U;
	uint64_t x598 = UINT64_MAX;
	int8_t x599 = -20;
	int8_t x600 = 1;
	uint32_t t61 = 396638302U;

    t61 = (x597<<(x598==(x599*x600)));

    if (t61 != 394230092U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x601 = UINT64_MAX;
	int32_t x603 = -1;
	int8_t x604 = INT8_MAX;
	static volatile uint64_t t62 = UINT64_MAX;

    t62 = (x601<<(x602==(x603*x604)));

    if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x605 = 117U;
	int8_t x606 = INT8_MAX;
	static volatile uint64_t x607 = 64319LLU;
	static int32_t x608 = -1;
	int32_t t63 = -150098;

    t63 = (x605<<(x606==(x607*x608)));

    if (t63 != 117) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x613 = UINT8_MAX;
	static volatile uint8_t x614 = UINT8_MAX;
	uint8_t x616 = 11U;
	volatile int32_t t64 = 35423;

    t64 = (x613<<(x614==(x615*x616)));

    if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x621 = UINT16_MAX;
	int64_t x622 = -40596785411LL;
	uint16_t x623 = 183U;
	uint8_t x624 = UINT8_MAX;
	static volatile int32_t t65 = 1855104;

    t65 = (x621<<(x622==(x623*x624)));

    if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x626 = INT64_MAX;
	uint16_t x627 = 1U;
	volatile int64_t x628 = INT64_MIN;
	static volatile uint32_t t66 = UINT32_MAX;

    t66 = (x625<<(x626==(x627*x628)));

    if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x629 = 126U;
	uint16_t x630 = UINT16_MAX;
	volatile uint16_t x631 = 22140U;
	int16_t x632 = -87;
	static volatile int32_t t67 = 6;

    t67 = (x629<<(x630==(x631*x632)));

    if (t67 != 126) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x637 = INT64_MAX;
	static int8_t x639 = INT8_MIN;
	int32_t x640 = -1;
	int64_t t68 = INT64_MAX;

    t68 = (x637<<(x638==(x639*x640)));

    if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x641 = UINT8_MAX;
	int8_t x642 = INT8_MAX;
	static uint16_t x643 = 26U;
	int32_t t69 = -844386;

    t69 = (x641<<(x642==(x643*x644)));

    if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x645 = INT8_MAX;
	int16_t x647 = INT16_MAX;
	uint32_t x648 = 45U;
	volatile int32_t t70 = -16;

    t70 = (x645<<(x646==(x647*x648)));

    if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x649 = 295146U;
	uint8_t x650 = 7U;
	volatile int8_t x651 = INT8_MAX;
	volatile uint32_t t71 = 29397217U;

    t71 = (x649<<(x650==(x651*x652)));

    if (t71 != 295146U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x674 = UINT16_MAX;
	int32_t t72 = -169739;

    t72 = (x673<<(x674==(x675*x676)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x677 = INT32_MAX;
	volatile uint16_t x678 = UINT16_MAX;
	static uint8_t x679 = 13U;
	int8_t x680 = INT8_MIN;

    t73 = (x677<<(x678==(x679*x680)));

    if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x682 = INT8_MIN;
	static int16_t x683 = INT16_MIN;
	volatile uint32_t x684 = 2889U;
	int32_t t74 = -13;

    t74 = (x681<<(x682==(x683*x684)));

    if (t74 != 7695) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x693 = UINT64_MAX;
	volatile int16_t x694 = INT16_MAX;
	volatile int8_t x695 = INT8_MIN;
	volatile uint64_t t75 = UINT64_MAX;

    t75 = (x693<<(x694==(x695*x696)));

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x697 = UINT16_MAX;
	uint16_t x698 = UINT16_MAX;
	static int64_t x699 = -1LL;

    t76 = (x697<<(x698==(x699*x700)));

    if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x701 = 7;
	int32_t x703 = -1;
	volatile int8_t x704 = 1;
	int32_t t77 = -8681454;

    t77 = (x701<<(x702==(x703*x704)));

    if (t77 != 7) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x713 = UINT8_MAX;
	volatile int8_t x714 = 0;
	static uint32_t x715 = 69230988U;
	volatile int8_t x716 = -1;

    t78 = (x713<<(x714==(x715*x716)));

    if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x723 = UINT8_MAX;
	static volatile uint16_t x724 = 187U;
	volatile int32_t t79 = -8;

    t79 = (x721<<(x722==(x723*x724)));

    if (t79 != 30) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint16_t x733 = 0U;
	volatile int16_t x734 = 8;
	uint16_t x735 = 165U;
	static int64_t x736 = 46LL;
	int32_t t80 = 1;

    t80 = (x733<<(x734==(x735*x736)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x744 = -3LL;
	volatile int32_t t81 = 40284564;

    t81 = (x741<<(x742==(x743*x744)));

    if (t81 != 22948) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x746 = INT64_MAX;
	volatile uint8_t x747 = UINT8_MAX;
	int16_t x748 = -1;
	static volatile uint64_t t82 = UINT64_MAX;

    t82 = (x745<<(x746==(x747*x748)));

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x757 = UINT16_MAX;
	static int64_t x758 = INT64_MAX;
	static uint64_t x759 = UINT64_MAX;
	int32_t x760 = 932882626;
	static int32_t t83 = -65145;

    t83 = (x757<<(x758==(x759*x760)));

    if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x773 = 3133U;
	volatile uint16_t x774 = UINT16_MAX;
	volatile uint32_t x776 = UINT32_MAX;
	int32_t t84 = -6243430;

    t84 = (x773<<(x774==(x775*x776)));

    if (t84 != 3133) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x781 = 8440LLU;
	uint8_t x782 = 27U;
	int8_t x783 = 15;
	volatile int8_t x784 = -1;
	uint64_t t85 = 186909199493LLU;

    t85 = (x781<<(x782==(x783*x784)));

    if (t85 != 8440LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x809 = 124;
	uint16_t x810 = 7U;
	int64_t x811 = INT64_MAX;
	static uint64_t x812 = 473503408LLU;
	int32_t t86 = 2862790;

    t86 = (x809<<(x810==(x811*x812)));

    if (t86 != 124) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x813 = INT16_MAX;
	int32_t x814 = INT32_MIN;
	static uint64_t x815 = UINT64_MAX;
	static int16_t x816 = -1;
	int32_t t87 = -1;

    t87 = (x813<<(x814==(x815*x816)));

    if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x817 = UINT32_MAX;
	uint64_t x818 = UINT64_MAX;
	static uint8_t x819 = 0U;
	volatile uint32_t x820 = UINT32_MAX;

    t88 = (x817<<(x818==(x819*x820)));

    if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x826 = INT8_MIN;
	uint64_t x827 = 8557390077519270654LLU;
	static volatile int32_t x828 = INT32_MIN;
	static uint32_t t89 = UINT32_MAX;

    t89 = (x825<<(x826==(x827*x828)));

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x833 = 27802657;
	uint8_t x834 = 1U;
	static int32_t x835 = -1;
	uint8_t x836 = UINT8_MAX;
	int32_t t90 = 4437993;

    t90 = (x833<<(x834==(x835*x836)));

    if (t90 != 27802657) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x850 = INT64_MIN;
	uint16_t x851 = 887U;
	uint8_t x852 = 9U;
	static volatile uint64_t t91 = 302137839LLU;

    t91 = (x849<<(x850==(x851*x852)));

    if (t91 != 16LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x871 = -1;
	uint64_t t92 = UINT64_MAX;

    t92 = (x869<<(x870==(x871*x872)));

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x879 = 877U;
	int8_t x880 = INT8_MIN;
	volatile uint32_t t93 = 275U;

    t93 = (x877<<(x878==(x879*x880)));

    if (t93 != 97985U) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x889 = 6;
	uint8_t x890 = 82U;
	uint32_t x892 = UINT32_MAX;
	int32_t t94 = 16805;

    t94 = (x889<<(x890==(x891*x892)));

    if (t94 != 6) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x905 = INT32_MAX;
	int16_t x906 = -1871;
	int16_t x907 = -1;
	uint16_t x908 = UINT16_MAX;
	volatile int32_t t95 = INT32_MAX;

    t95 = (x905<<(x906==(x907*x908)));

    if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x909 = 2U;
	static int8_t x910 = -1;
	static uint64_t x912 = UINT64_MAX;
	volatile int32_t t96 = 1;

    t96 = (x909<<(x910==(x911*x912)));

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x917 = INT16_MAX;
	int16_t x919 = -1;
	int16_t x920 = -1;
	int32_t t97 = 207611;

    t97 = (x917<<(x918==(x919*x920)));

    if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x945 = UINT8_MAX;
	volatile uint16_t x946 = 32086U;
	int8_t x947 = INT8_MIN;
	int32_t x948 = -1;
	volatile int32_t t98 = 8429;

    t98 = (x945<<(x946==(x947*x948)));

    if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x957 = UINT8_MAX;
	int32_t x958 = -1;
	volatile uint64_t x960 = UINT64_MAX;

    t99 = (x957<<(x958==(x959*x960)));

    if (t99 != 255) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x961 = 22;
	int16_t x962 = INT16_MIN;
	uint64_t x964 = 1975033381LLU;
	static int32_t t100 = 26638;

    t100 = (x961<<(x962==(x963*x964)));

    if (t100 != 22) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x971 = 0U;
	volatile uint64_t x972 = 2146132427752390660LLU;
	uint32_t t101 = 4786106U;

    t101 = (x969<<(x970==(x971*x972)));

    if (t101 != 23041590U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x973 = 3U;
	int32_t x974 = INT32_MAX;
	uint8_t x975 = UINT8_MAX;
	volatile uint8_t x976 = UINT8_MAX;
	int32_t t102 = -10652237;

    t102 = (x973<<(x974==(x975*x976)));

    if (t102 != 3) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x977 = UINT32_MAX;
	volatile uint32_t t103 = UINT32_MAX;

    t103 = (x977<<(x978==(x979*x980)));

    if (t103 != UINT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x994 = 194U;
	uint8_t x995 = 0U;
	int8_t x996 = -1;
	uint64_t t104 = 773748442287885LLU;

    t104 = (x993<<(x994==(x995*x996)));

    if (t104 != 332147418LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x1001 = 1U;
	volatile int8_t x1003 = INT8_MAX;
	int32_t t105 = -1;

    t105 = (x1001<<(x1002==(x1003*x1004)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x1005 = 0;
	volatile int8_t x1006 = -1;
	static int32_t x1007 = -43095;
	volatile int64_t x1008 = -2LL;
	volatile int32_t t106 = -1648;

    t106 = (x1005<<(x1006==(x1007*x1008)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x1013 = 1U;
	int32_t x1014 = INT32_MIN;
	static uint16_t x1016 = 0U;
	volatile int32_t t107 = 5875;

    t107 = (x1013<<(x1014==(x1015*x1016)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x1021 = UINT8_MAX;
	int16_t x1022 = INT16_MAX;
	uint8_t x1023 = 0U;
	int32_t x1024 = -883240;

    t108 = (x1021<<(x1022==(x1023*x1024)));

    if (t108 != 255) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x1049 = UINT8_MAX;
	static int64_t x1050 = -1802839136285795294LL;
	int32_t x1051 = -1;
	uint32_t x1052 = 260166U;
	int32_t t109 = -119100426;

    t109 = (x1049<<(x1050==(x1051*x1052)));

    if (t109 != 255) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x1069 = 95U;
	static int8_t x1070 = INT8_MAX;
	static uint8_t x1071 = 79U;
	uint16_t x1072 = 211U;
	static volatile int32_t t110 = 883197;

    t110 = (x1069<<(x1070==(x1071*x1072)));

    if (t110 != 95) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x1074 = -50024237487LL;
	uint32_t x1075 = UINT32_MAX;
	static int16_t x1076 = INT16_MIN;
	volatile uint64_t t111 = UINT64_MAX;

    t111 = (x1073<<(x1074==(x1075*x1076)));

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x1077 = INT64_MAX;
	static uint32_t x1078 = 657269U;
	int32_t x1080 = 0;
	volatile int64_t t112 = INT64_MAX;

    t112 = (x1077<<(x1078==(x1079*x1080)));

    if (t112 != INT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x1089 = UINT16_MAX;
	uint64_t x1090 = 55007738247LLU;
	int64_t x1091 = 1225LL;
	int32_t x1092 = 92;
	int32_t t113 = 1345294;

    t113 = (x1089<<(x1090==(x1091*x1092)));

    if (t113 != 65535) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x1102 = INT32_MAX;
	int32_t x1103 = -1;
	int64_t x1104 = 167441267LL;
	volatile int32_t t114 = -13658295;

    t114 = (x1101<<(x1102==(x1103*x1104)));

    if (t114 != 127) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x1109 = 883;
	volatile uint64_t x1110 = 11547222776LLU;
	volatile int16_t x1111 = INT16_MAX;
	volatile int32_t t115 = -102888;

    t115 = (x1109<<(x1110==(x1111*x1112)));

    if (t115 != 883) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x1113 = 12U;
	uint16_t x1114 = 2066U;
	static int32_t x1115 = -1;
	uint8_t x1116 = 3U;
	int32_t t116 = 1321157;

    t116 = (x1113<<(x1114==(x1115*x1116)));

    if (t116 != 12) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x1117 = 14U;
	int8_t x1118 = INT8_MAX;
	int8_t x1119 = -1;

    t117 = (x1117<<(x1118==(x1119*x1120)));

    if (t117 != 14) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x1121 = INT8_MAX;
	volatile uint32_t x1122 = 2127422023U;
	static uint16_t x1123 = UINT16_MAX;
	static uint32_t x1124 = 37127U;
	int32_t t118 = -151;

    t118 = (x1121<<(x1122==(x1123*x1124)));

    if (t118 != 127) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint64_t x1141 = UINT64_MAX;
	int64_t x1143 = -263083LL;
	uint8_t x1144 = 11U;
	volatile uint64_t t119 = UINT64_MAX;

    t119 = (x1141<<(x1142==(x1143*x1144)));

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x1146 = INT16_MIN;
	int16_t x1147 = INT16_MAX;
	volatile uint64_t x1148 = UINT64_MAX;
	volatile uint32_t t120 = UINT32_MAX;

    t120 = (x1145<<(x1146==(x1147*x1148)));

    if (t120 != UINT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x1153 = UINT16_MAX;
	int64_t x1154 = -84913LL;
	uint64_t x1155 = 93383LLU;
	volatile uint32_t x1156 = 1U;

    t121 = (x1153<<(x1154==(x1155*x1156)));

    if (t121 != 65535) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x1165 = 2;
	int32_t x1166 = INT32_MIN;
	static int32_t x1168 = 23;
	int32_t t122 = 1829;

    t122 = (x1165<<(x1166==(x1167*x1168)));

    if (t122 != 2) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x1170 = INT32_MAX;
	int8_t x1171 = INT8_MAX;
	int64_t x1172 = -3520344LL;
	volatile uint64_t t123 = 464630365LLU;

    t123 = (x1169<<(x1170==(x1171*x1172)));

    if (t123 != 31078052868LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x1189 = 0;
	int32_t x1190 = INT32_MIN;
	static uint16_t x1192 = 15659U;
	volatile int32_t t124 = 140949;

    t124 = (x1189<<(x1190==(x1191*x1192)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x1197 = UINT16_MAX;
	int64_t x1199 = -6064102LL;
	int32_t x1200 = 11221;

    t125 = (x1197<<(x1198==(x1199*x1200)));

    if (t125 != 65535) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x1201 = 1472U;
	volatile int8_t x1202 = 29;
	int8_t x1203 = INT8_MIN;
	volatile int16_t x1204 = INT16_MIN;
	volatile int32_t t126 = 54;

    t126 = (x1201<<(x1202==(x1203*x1204)));

    if (t126 != 1472) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x1210 = INT32_MIN;
	uint16_t x1212 = 130U;
	static uint64_t t127 = UINT64_MAX;

    t127 = (x1209<<(x1210==(x1211*x1212)));

    if (t127 != UINT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x1223 = 149889868957LLU;
	volatile int32_t t128 = 183398;

    t128 = (x1221<<(x1222==(x1223*x1224)));

    if (t128 != 29) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x1229 = INT8_MAX;
	int16_t x1230 = -1;
	int16_t x1232 = INT16_MIN;
	volatile int32_t t129 = -301427622;

    t129 = (x1229<<(x1230==(x1231*x1232)));

    if (t129 != 127) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x1237 = UINT32_MAX;
	volatile int16_t x1238 = -1;
	uint16_t x1239 = 9U;
	uint16_t x1240 = UINT16_MAX;
	uint32_t t130 = UINT32_MAX;

    t130 = (x1237<<(x1238==(x1239*x1240)));

    if (t130 != UINT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x1241 = 3U;
	uint64_t x1242 = 922962032601396058LLU;
	static int64_t x1243 = 225196LL;
	int8_t x1244 = INT8_MIN;
	static volatile int32_t t131 = 115530041;

    t131 = (x1241<<(x1242==(x1243*x1244)));

    if (t131 != 3) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x1246 = 11;
	int32_t x1247 = INT32_MAX;
	static int64_t x1248 = -154689042LL;
	int32_t t132 = 482;

    t132 = (x1245<<(x1246==(x1247*x1248)));

    if (t132 != 65535) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x1261 = 23U;
	static int16_t x1262 = INT16_MIN;
	static int32_t x1263 = 10;
	volatile uint8_t x1264 = 19U;
	volatile int32_t t133 = 8;

    t133 = (x1261<<(x1262==(x1263*x1264)));

    if (t133 != 23) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x1270 = INT64_MIN;
	static volatile uint64_t x1271 = UINT64_MAX;
	int32_t x1272 = INT32_MIN;

    t134 = (x1269<<(x1270==(x1271*x1272)));

    if (t134 != 22) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x1277 = 1;
	static int64_t x1279 = 87LL;
	int32_t x1280 = INT32_MAX;

    t135 = (x1277<<(x1278==(x1279*x1280)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x1293 = INT8_MAX;
	uint16_t x1295 = 173U;
	uint32_t x1296 = 46776U;
	volatile int32_t t136 = 4;

    t136 = (x1293<<(x1294==(x1295*x1296)));

    if (t136 != 127) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x1297 = 41U;
	static volatile int16_t x1300 = -1;
	volatile uint32_t t137 = 23344663U;

    t137 = (x1297<<(x1298==(x1299*x1300)));

    if (t137 != 41U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x1301 = 104575643366989604LLU;
	static int64_t x1302 = -5187754463496LL;
	static uint64_t x1303 = 16800038169869603LLU;
	uint16_t x1304 = 15532U;
	uint64_t t138 = 1LLU;

    t138 = (x1301<<(x1302==(x1303*x1304)));

    if (t138 != 104575643366989604LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x1317 = INT32_MAX;
	volatile int32_t x1318 = INT32_MAX;
	static volatile int8_t x1319 = INT8_MIN;
	int32_t t139 = INT32_MAX;

    t139 = (x1317<<(x1318==(x1319*x1320)));

    if (t139 != INT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x1337 = 1U;
	int8_t x1339 = INT8_MAX;
	int16_t x1340 = 243;

    t140 = (x1337<<(x1338==(x1339*x1340)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x1341 = 3077LLU;
	int32_t x1343 = 1;
	int8_t x1344 = INT8_MIN;

    t141 = (x1341<<(x1342==(x1343*x1344)));

    if (t141 != 3077LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x1353 = INT64_MAX;
	int32_t x1355 = INT32_MIN;
	uint32_t x1356 = UINT32_MAX;
	volatile int64_t t142 = INT64_MAX;

    t142 = (x1353<<(x1354==(x1355*x1356)));

    if (t142 != INT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x1361 = UINT8_MAX;
	volatile int64_t x1362 = INT64_MIN;
	uint64_t x1364 = UINT64_MAX;

    t143 = (x1361<<(x1362==(x1363*x1364)));

    if (t143 != 255) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int8_t x1376 = -1;
	volatile int32_t t144 = -9;

    t144 = (x1373<<(x1374==(x1375*x1376)));

    if (t144 != 1059) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x1389 = 0LLU;
	volatile int64_t x1390 = -132061135954928028LL;
	uint32_t x1391 = 5123281U;
	int16_t x1392 = INT16_MIN;

    t145 = (x1389<<(x1390==(x1391*x1392)));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x1393 = 2U;
	uint16_t x1394 = UINT16_MAX;
	volatile uint16_t x1395 = 38U;
	volatile uint32_t t146 = 232U;

    t146 = (x1393<<(x1394==(x1395*x1396)));

    if (t146 != 2U) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x1401 = UINT16_MAX;
	uint64_t x1404 = 6133034976LLU;

    t147 = (x1401<<(x1402==(x1403*x1404)));

    if (t147 != 65535) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x1421 = INT16_MAX;
	static int8_t x1422 = INT8_MAX;
	int32_t x1423 = INT32_MIN;
	uint32_t x1424 = 1697377U;
	volatile int32_t t148 = -37130341;

    t148 = (x1421<<(x1422==(x1423*x1424)));

    if (t148 != 32767) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x1433 = 26;
	static int64_t x1434 = 2LL;
	uint32_t x1436 = 3194U;
	volatile int32_t t149 = -69781;

    t149 = (x1433<<(x1434==(x1435*x1436)));

    if (t149 != 26) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1449 = INT64_MAX;
	volatile int16_t x1450 = -1;
	int32_t x1451 = 5;
	static volatile int16_t x1452 = 130;
	int64_t t150 = INT64_MAX;

    t150 = (x1449<<(x1450==(x1451*x1452)));

    if (t150 != INT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1465 = INT8_MAX;
	static volatile int32_t x1466 = -191507880;
	int16_t x1468 = 2863;
	int32_t t151 = 936991708;

    t151 = (x1465<<(x1466==(x1467*x1468)));

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x1485 = INT64_MAX;
	uint64_t x1486 = 63088357780046LLU;
	int64_t x1487 = -1LL;
	static int16_t x1488 = INT16_MIN;
	int64_t t152 = INT64_MAX;

    t152 = (x1485<<(x1486==(x1487*x1488)));

    if (t152 != INT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x1489 = UINT8_MAX;
	static int64_t x1490 = -1605901374LL;
	int16_t x1491 = INT16_MAX;
	int8_t x1492 = -1;
	volatile int32_t t153 = 15344;

    t153 = (x1489<<(x1490==(x1491*x1492)));

    if (t153 != 255) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x1497 = 20325U;
	volatile uint32_t x1498 = 6U;
	int32_t x1499 = INT32_MAX;
	static volatile uint64_t x1500 = UINT64_MAX;
	volatile int32_t t154 = 1471306;

    t154 = (x1497<<(x1498==(x1499*x1500)));

    if (t154 != 20325) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x1509 = INT16_MAX;
	int8_t x1510 = -1;
	int64_t x1511 = INT64_MAX;
	int16_t x1512 = -1;
	int32_t t155 = -82732;

    t155 = (x1509<<(x1510==(x1511*x1512)));

    if (t155 != 32767) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x1513 = 28019LLU;
	int64_t x1514 = INT64_MAX;
	volatile int32_t x1515 = INT32_MIN;
	static int8_t x1516 = 0;
	volatile uint64_t t156 = 813033LLU;

    t156 = (x1513<<(x1514==(x1515*x1516)));

    if (t156 != 28019LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x1517 = 14471848LLU;
	int64_t x1518 = -95241418954153547LL;
	uint16_t x1519 = 4387U;
	uint32_t x1520 = 214U;
	static uint64_t t157 = 1299LLU;

    t157 = (x1517<<(x1518==(x1519*x1520)));

    if (t157 != 14471848LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x1525 = UINT32_MAX;
	static volatile int64_t x1526 = INT64_MIN;
	uint8_t x1527 = UINT8_MAX;
	uint8_t x1528 = 7U;
	uint32_t t158 = UINT32_MAX;

    t158 = (x1525<<(x1526==(x1527*x1528)));

    if (t158 != UINT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x1537 = 289187816U;
	volatile int8_t x1538 = INT8_MAX;
	uint64_t x1539 = 265560LLU;
	int16_t x1540 = -2;
	volatile uint32_t t159 = 1962888U;

    t159 = (x1537<<(x1538==(x1539*x1540)));

    if (t159 != 289187816U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x1545 = 1574U;
	int64_t x1547 = -1LL;
	uint16_t x1548 = 3U;
	volatile uint32_t t160 = 3840446U;

    t160 = (x1545<<(x1546==(x1547*x1548)));

    if (t160 != 1574U) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1549 = 2862877875607149LL;
	int16_t x1550 = INT16_MAX;
	volatile uint16_t x1552 = UINT16_MAX;
	int64_t t161 = -194752570LL;

    t161 = (x1549<<(x1550==(x1551*x1552)));

    if (t161 != 2862877875607149LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x1554 = 340U;
	static uint64_t x1555 = 714LLU;
	int64_t x1556 = INT64_MIN;
	int32_t t162 = -475127729;

    t162 = (x1553<<(x1554==(x1555*x1556)));

    if (t162 != 255) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x1581 = 745U;
	uint64_t x1583 = 122685903931818813LLU;
	int8_t x1584 = INT8_MIN;
	int32_t t163 = 1628376;

    t163 = (x1581<<(x1582==(x1583*x1584)));

    if (t163 != 745) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x1593 = 1;
	static int8_t x1594 = INT8_MAX;
	int8_t x1595 = INT8_MAX;
	volatile int32_t x1596 = -1;
	int32_t t164 = -166;

    t164 = (x1593<<(x1594==(x1595*x1596)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x1597 = UINT8_MAX;
	int64_t x1598 = 32276LL;
	uint8_t x1599 = 5U;
	uint16_t x1600 = 12U;
	volatile int32_t t165 = -1028594;

    t165 = (x1597<<(x1598==(x1599*x1600)));

    if (t165 != 255) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1602 = -1;
	int8_t x1603 = INT8_MIN;
	int32_t x1604 = -1;
	volatile int64_t t166 = INT64_MAX;

    t166 = (x1601<<(x1602==(x1603*x1604)));

    if (t166 != INT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x1617 = 57;
	volatile uint64_t x1619 = UINT64_MAX;
	int32_t x1620 = 0;
	int32_t t167 = 602;

    t167 = (x1617<<(x1618==(x1619*x1620)));

    if (t167 != 57) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x1621 = INT32_MAX;
	volatile int16_t x1622 = -1;
	static uint16_t x1623 = 6626U;
	volatile int32_t x1624 = 15032;
	volatile int32_t t168 = INT32_MAX;

    t168 = (x1621<<(x1622==(x1623*x1624)));

    if (t168 != INT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x1625 = 58611450;
	int16_t x1626 = -1;
	int16_t x1627 = INT16_MAX;
	static int64_t x1628 = 94424LL;
	int32_t t169 = 64202;

    t169 = (x1625<<(x1626==(x1627*x1628)));

    if (t169 != 58611450) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x1629 = 146586720LLU;
	int64_t x1630 = INT64_MIN;
	int64_t x1632 = -11816332LL;
	static volatile uint64_t t170 = 296429537529907LLU;

    t170 = (x1629<<(x1630==(x1631*x1632)));

    if (t170 != 146586720LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1637 = INT16_MAX;
	int64_t x1638 = -2272LL;
	uint32_t x1639 = 3444683U;
	static int8_t x1640 = -1;
	int32_t t171 = 1484;

    t171 = (x1637<<(x1638==(x1639*x1640)));

    if (t171 != 32767) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x1641 = 535301103242757LLU;
	int64_t x1642 = 3959099857528LL;
	volatile int8_t x1643 = INT8_MAX;
	int8_t x1644 = 1;
	uint64_t t172 = 188151201831587LLU;

    t172 = (x1641<<(x1642==(x1643*x1644)));

    if (t172 != 535301103242757LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1661 = 3;
	volatile int16_t x1662 = -1;
	int32_t x1663 = -1;
	static volatile uint16_t x1664 = 14899U;
	int32_t t173 = -855;

    t173 = (x1661<<(x1662==(x1663*x1664)));

    if (t173 != 3) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x1701 = 159880LL;
	static volatile uint8_t x1702 = 2U;
	int8_t x1703 = 3;
	int64_t t174 = -237959991LL;

    t174 = (x1701<<(x1702==(x1703*x1704)));

    if (t174 != 159880LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint16_t x1705 = 1229U;
	int16_t x1706 = INT16_MAX;
	uint32_t x1707 = UINT32_MAX;
	int64_t x1708 = 394LL;
	volatile int32_t t175 = -19;

    t175 = (x1705<<(x1706==(x1707*x1708)));

    if (t175 != 1229) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x1717 = 29U;
	static int64_t x1718 = -5423348599990LL;
	static int16_t x1719 = INT16_MIN;
	int16_t x1720 = -1;
	int32_t t176 = -11720245;

    t176 = (x1717<<(x1718==(x1719*x1720)));

    if (t176 != 29) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x1733 = 10LLU;
	uint8_t x1734 = 1U;
	volatile int16_t x1735 = INT16_MIN;
	static volatile uint64_t t177 = 359819651806481025LLU;

    t177 = (x1733<<(x1734==(x1735*x1736)));

    if (t177 != 10LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1737 = UINT16_MAX;
	volatile uint16_t x1738 = 2616U;
	int8_t x1739 = -1;
	volatile uint32_t x1740 = UINT32_MAX;

    t178 = (x1737<<(x1738==(x1739*x1740)));

    if (t178 != 65535) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x1745 = 482U;
	volatile uint8_t x1746 = UINT8_MAX;
	volatile int64_t x1748 = 4045LL;
	volatile int32_t t179 = -5537025;

    t179 = (x1745<<(x1746==(x1747*x1748)));

    if (t179 != 482) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x1749 = 1U;
	int32_t x1750 = INT32_MIN;
	static int16_t x1751 = -3;
	static uint8_t x1752 = 0U;
	static int32_t t180 = -2825;

    t180 = (x1749<<(x1750==(x1751*x1752)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1769 = INT16_MAX;
	int64_t x1770 = 21379LL;
	int32_t x1771 = -8;
	int16_t x1772 = INT16_MIN;
	volatile int32_t t181 = -13909;

    t181 = (x1769<<(x1770==(x1771*x1772)));

    if (t181 != 32767) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x1773 = 164LLU;
	volatile int64_t x1774 = INT64_MIN;
	uint64_t x1775 = 7146847849641LLU;
	static uint16_t x1776 = UINT16_MAX;
	volatile uint64_t t182 = 3787641237950063LLU;

    t182 = (x1773<<(x1774==(x1775*x1776)));

    if (t182 != 164LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x1785 = 27912684409212LLU;
	static int32_t x1787 = 83;
	uint8_t x1788 = 3U;
	uint64_t t183 = 1214388094873470181LLU;

    t183 = (x1785<<(x1786==(x1787*x1788)));

    if (t183 != 27912684409212LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1789 = UINT16_MAX;
	int32_t x1790 = 5062;
	static int32_t x1791 = INT32_MAX;
	uint64_t x1792 = 1866858998981LLU;
	volatile int32_t t184 = -4060213;

    t184 = (x1789<<(x1790==(x1791*x1792)));

    if (t184 != 65535) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x1801 = UINT16_MAX;
	int32_t x1804 = INT32_MIN;
	int32_t t185 = 35261;

    t185 = (x1801<<(x1802==(x1803*x1804)));

    if (t185 != 65535) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x1805 = INT16_MAX;
	uint64_t x1807 = UINT64_MAX;
	int32_t x1808 = -1;
	int32_t t186 = 135660092;

    t186 = (x1805<<(x1806==(x1807*x1808)));

    if (t186 != 32767) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x1825 = 1479U;
	int64_t x1826 = 643057186049916613LL;
	int64_t x1827 = -1LL;
	int32_t t187 = 9772502;

    t187 = (x1825<<(x1826==(x1827*x1828)));

    if (t187 != 1479) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1837 = INT64_MAX;
	static int32_t x1838 = INT32_MIN;
	volatile int8_t x1839 = 1;
	int32_t x1840 = INT32_MAX;
	static volatile int64_t t188 = INT64_MAX;

    t188 = (x1837<<(x1838==(x1839*x1840)));

    if (t188 != INT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1841 = 5927289792578799LL;
	int32_t x1842 = INT32_MAX;
	volatile int8_t x1843 = -1;
	volatile int64_t t189 = -454079371421LL;

    t189 = (x1841<<(x1842==(x1843*x1844)));

    if (t189 != 5927289792578799LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int32_t x1854 = INT32_MAX;
	volatile int8_t x1856 = 1;
	volatile uint64_t t190 = 4500756497233561703LLU;

    t190 = (x1853<<(x1854==(x1855*x1856)));

    if (t190 != 790925104LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1873 = 0U;
	static int8_t x1874 = INT8_MIN;
	volatile uint16_t x1875 = 194U;
	int16_t x1876 = -294;
	int32_t t191 = 84499;

    t191 = (x1873<<(x1874==(x1875*x1876)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1885 = UINT64_MAX;
	int64_t x1886 = 16957044436LL;
	int64_t x1887 = -1LL;
	uint8_t x1888 = 15U;

    t192 = (x1885<<(x1886==(x1887*x1888)));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x1889 = 7U;
	uint8_t x1890 = 13U;
	volatile int64_t x1891 = 0LL;
	static uint64_t x1892 = 16LLU;
	volatile int32_t t193 = -17;

    t193 = (x1889<<(x1890==(x1891*x1892)));

    if (t193 != 7) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x1901 = INT32_MAX;
	uint8_t x1903 = 78U;
	int8_t x1904 = 18;
	static volatile int32_t t194 = INT32_MAX;

    t194 = (x1901<<(x1902==(x1903*x1904)));

    if (t194 != INT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1905 = UINT64_MAX;
	int8_t x1906 = -1;
	int16_t x1907 = INT16_MAX;
	uint64_t x1908 = 9213695759202665LLU;

    t195 = (x1905<<(x1906==(x1907*x1908)));

    if (t195 != UINT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1909 = 4U;
	static int32_t x1910 = INT32_MIN;
	static volatile int16_t x1912 = -2761;
	volatile int32_t t196 = 3381920;

    t196 = (x1909<<(x1910==(x1911*x1912)));

    if (t196 != 4) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1914 = -14654;
	uint8_t x1915 = UINT8_MAX;
	int32_t x1916 = -2;
	static int32_t t197 = 14600965;

    t197 = (x1913<<(x1914==(x1915*x1916)));

    if (t197 != 127) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1917 = 1023LLU;
	int16_t x1918 = -1;
	volatile int8_t x1919 = 53;
	volatile int16_t x1920 = INT16_MAX;
	static uint64_t t198 = 1236259LLU;

    t198 = (x1917<<(x1918==(x1919*x1920)));

    if (t198 != 1023LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x1921 = 271;
	uint16_t x1924 = 558U;
	volatile int32_t t199 = 21;

    t199 = (x1921<<(x1922==(x1923*x1924)));

    if (t199 != 271) { NG(); } else { ; }
	
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


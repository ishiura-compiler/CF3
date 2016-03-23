
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

static int16_t x1 = INT16_MIN;
int32_t x2 = -1456;
int8_t x11 = 8;
int32_t x12 = INT32_MIN;
int32_t t2 = -2973;
int16_t x17 = 3647;
uint64_t x19 = 189308971540LLU;
int8_t x22 = INT8_MIN;
int64_t x23 = INT64_MAX;
static uint32_t x27 = UINT32_MAX;
static int16_t x28 = -1;
int32_t t8 = -35;
static volatile int8_t x45 = 1;
static volatile uint16_t x52 = UINT16_MAX;
volatile int32_t t10 = -1;
int8_t x60 = INT8_MIN;
uint16_t x81 = UINT16_MAX;
int64_t x83 = 4LL;
uint16_t x121 = 1188U;
uint8_t x122 = 1U;
uint16_t x123 = UINT16_MAX;
volatile int8_t x136 = INT8_MAX;
int16_t x144 = INT16_MIN;
int16_t x145 = -113;
int8_t x146 = INT8_MIN;
volatile int32_t t27 = 18;
int32_t x177 = INT32_MAX;
int8_t x185 = 56;
int32_t t32 = 1698756;
uint16_t x194 = UINT16_MAX;
static int32_t x195 = 97437;
int8_t x215 = -1;
int64_t x216 = -1LL;
volatile int32_t t37 = -30837583;
static volatile int32_t t38 = -48391;
int8_t x221 = INT8_MAX;
int64_t x249 = INT64_MAX;
int32_t x250 = INT32_MIN;
volatile uint32_t x253 = 145U;
int32_t t44 = 621262;
uint16_t x275 = 875U;
uint32_t x277 = UINT32_MAX;
static volatile int32_t t47 = -19;
uint16_t x281 = 2U;
static int8_t x282 = INT8_MIN;
uint8_t x287 = 32U;
int32_t x288 = INT32_MIN;
static int8_t x293 = -2;
int8_t x301 = 1;
volatile int16_t x306 = INT16_MIN;
int32_t x316 = 6;
uint64_t x328 = UINT64_MAX;
int32_t x333 = INT32_MIN;
int32_t x335 = INT32_MIN;
int32_t t58 = -82299;
static int16_t x349 = 9;
volatile int32_t x353 = INT32_MIN;
static uint8_t x364 = 23U;
int16_t x369 = 9719;
volatile int64_t x375 = -1593964007LL;
static int8_t x384 = INT8_MAX;
volatile int8_t x389 = -1;
int64_t x390 = INT64_MIN;
uint64_t x392 = 4750LLU;
static uint16_t x393 = 708U;
int64_t x394 = 427LL;
volatile uint64_t x397 = 122870237LLU;
int32_t x398 = -1;
int64_t x401 = INT64_MAX;
int32_t x416 = -1;
volatile int32_t t72 = -394432971;
int16_t x426 = INT16_MIN;
int32_t x428 = INT32_MIN;
static uint64_t x430 = 42153LLU;
static int8_t x433 = 5;
int32_t t76 = 363;
int64_t x442 = INT64_MAX;
static uint64_t x445 = UINT64_MAX;
static int16_t x447 = -2;
static int32_t x448 = 1;
int8_t x451 = -63;
volatile int32_t t79 = 85534;
int8_t x455 = -1;
volatile int32_t x460 = -1;
volatile int32_t t81 = -1914;
uint16_t x462 = 30967U;
static volatile int32_t x463 = -1;
volatile int32_t t82 = 682;
int32_t x470 = INT32_MIN;
uint16_t x473 = 0U;
static int64_t x475 = -1LL;
static int32_t x476 = INT32_MIN;
int32_t t84 = -20;
static volatile uint16_t x480 = UINT16_MAX;
uint32_t x487 = UINT32_MAX;
static int16_t x502 = INT16_MIN;
int8_t x509 = -1;
int32_t t90 = -1;
uint32_t x521 = UINT32_MAX;
static int32_t x522 = 33730;
static uint32_t x524 = UINT32_MAX;
volatile int32_t t93 = -11389;
int64_t x540 = -1LL;
int16_t x543 = -63;
int32_t x546 = INT32_MAX;
int32_t t98 = -31217;
volatile int32_t t100 = -3;
uint32_t x564 = UINT32_MAX;
int32_t x570 = -14788025;
int8_t x572 = INT8_MIN;
int32_t t103 = 227;
uint64_t x576 = UINT64_MAX;
static uint16_t x583 = 241U;
int16_t x585 = INT16_MIN;
int64_t x595 = INT64_MIN;
int64_t x596 = INT64_MAX;
uint8_t x597 = 1U;
static int32_t t109 = -239880404;
uint32_t x608 = 44000U;
int64_t x625 = INT64_MIN;
volatile uint64_t x635 = UINT64_MAX;
static int16_t x636 = INT16_MAX;
int32_t t116 = -14602;
volatile uint64_t x649 = 174609995175914LLU;
uint8_t x650 = 70U;
volatile uint16_t x652 = 3U;
int64_t x663 = INT64_MIN;
volatile uint8_t x664 = 11U;
int32_t t122 = 947410;
int32_t x681 = INT32_MAX;
int32_t x694 = -10;
static volatile int32_t x711 = -32;
int16_t x712 = INT16_MIN;
int32_t t128 = -8051;
int32_t x718 = -1;
int32_t t129 = 9;
int8_t x722 = INT8_MAX;
int16_t x724 = 281;
int64_t x733 = 401LL;
volatile int32_t x749 = INT32_MAX;
int32_t x752 = 2;
volatile int32_t t136 = 9;
int32_t x766 = -2287650;
uint32_t x772 = UINT32_MAX;
int64_t x775 = -1LL;
volatile int32_t x781 = INT32_MIN;
volatile uint16_t x782 = UINT16_MAX;
volatile int8_t x786 = INT8_MAX;
volatile int64_t x788 = 17090191625098LL;
int32_t x801 = INT32_MAX;
int32_t x803 = INT32_MIN;
volatile int32_t t144 = 10965;
volatile int16_t x812 = INT16_MIN;
int32_t t145 = -13;
static int32_t x820 = INT32_MIN;
volatile int32_t t146 = 89240;
volatile int64_t x826 = INT64_MAX;
int8_t x836 = INT8_MIN;
int8_t x870 = INT8_MIN;
uint8_t x874 = 1U;
int8_t x876 = INT8_MIN;
int64_t x892 = INT64_MIN;
static int32_t x895 = INT32_MAX;
int64_t x896 = INT64_MIN;
int32_t t160 = 19257;
uint8_t x901 = 5U;
static int32_t x907 = -1;
int32_t t163 = -2016;
uint16_t x913 = 30623U;
int32_t t164 = -330;
volatile int8_t x917 = INT8_MIN;
static volatile int32_t t167 = -102;
volatile int8_t x944 = 3;
volatile int64_t x948 = INT64_MIN;
int8_t x959 = -1;
volatile uint8_t x963 = 1U;
int32_t x967 = -1;
uint8_t x969 = 1U;
static volatile int64_t x991 = INT64_MIN;
static int8_t x993 = -1;
int16_t x995 = INT16_MAX;
volatile int32_t t179 = -221922;
uint64_t x997 = UINT64_MAX;
volatile int32_t t180 = -1789;
int16_t x1007 = INT16_MAX;
int32_t x1010 = INT32_MAX;
int32_t t184 = -210;
volatile int64_t x1028 = -4LL;
static int32_t t189 = -1;
int16_t x1048 = INT16_MAX;
static uint8_t x1053 = 0U;
uint64_t x1056 = UINT64_MAX;
volatile int32_t t191 = 306692099;
int32_t t192 = -112730694;
static int32_t x1078 = INT32_MIN;
volatile int32_t t194 = 5;
int8_t x1084 = INT8_MIN;
int32_t t196 = -32644919;
int64_t x1089 = INT64_MAX;
int32_t t197 = -1688190;
volatile uint8_t x1096 = 4U;
int32_t x1103 = -3458;
static volatile uint32_t x1104 = 61310U;


void f0(void) {
    	volatile uint32_t x3 = UINT32_MAX;
	static uint32_t x4 = 6458773U;
	volatile int32_t t0 = 45094070;

    t0 = ((x1/(x2&x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int32_t x6 = 6058;
	volatile uint32_t x7 = 7584U;
	int8_t x8 = INT8_MIN;
	static int32_t t1 = 3666394;

    t1 = ((x5/(x6&x7))>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	static int32_t x10 = -27655;

    t2 = ((x9/(x10&x11))>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = 901443964LL;
	volatile uint64_t x14 = 60853LLU;
	volatile uint16_t x15 = 351U;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = -18;

    t3 = ((x13/(x14&x15))>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = -180441953094718LL;
	int32_t x20 = INT32_MIN;
	int32_t t4 = 10975;

    t4 = ((x17/(x18&x19))>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = -1;
	static uint16_t x24 = 13U;
	volatile int32_t t5 = 881300;

    t5 = ((x21/(x22&x23))>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 205553670LLU;
	volatile uint8_t x26 = 3U;
	int32_t t6 = 207702910;

    t6 = ((x25/(x26&x27))>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = INT16_MIN;
	uint64_t x34 = UINT64_MAX;
	uint32_t x35 = UINT32_MAX;
	uint32_t x36 = 1U;
	volatile int32_t t7 = 7109385;

    t7 = ((x33/(x34&x35))>x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x37 = 54U;
	static int8_t x38 = INT8_MAX;
	int32_t x39 = -95265;
	volatile uint16_t x40 = 1899U;

    t8 = ((x37/(x38&x39))>x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x46 = INT32_MIN;
	int64_t x47 = INT64_MAX;
	uint64_t x48 = 21477337200817LLU;
	volatile int32_t t9 = 258;

    t9 = ((x45/(x46&x47))>x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x49 = -1;
	int16_t x50 = -6539;
	int16_t x51 = 7;

    t10 = ((x49/(x50&x51))>x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x53 = -1;
	int64_t x54 = INT64_MIN;
	volatile int8_t x55 = -27;
	static uint8_t x56 = 1U;
	volatile int32_t t11 = 5212;

    t11 = ((x53/(x54&x55))>x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x57 = INT8_MIN;
	int32_t x58 = -1;
	int16_t x59 = -16;
	volatile int32_t t12 = 7;

    t12 = ((x57/(x58&x59))>x60);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x73 = INT32_MIN;
	int64_t x74 = INT64_MAX;
	int16_t x75 = INT16_MIN;
	int8_t x76 = 0;
	volatile int32_t t13 = 51108161;

    t13 = ((x73/(x74&x75))>x76);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x77 = UINT64_MAX;
	static uint16_t x78 = 4594U;
	int32_t x79 = -15982;
	int8_t x80 = INT8_MAX;
	volatile int32_t t14 = -21057715;

    t14 = ((x77/(x78&x79))>x80);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x82 = -1;
	volatile uint16_t x84 = 46U;
	int32_t t15 = 205;

    t15 = ((x81/(x82&x83))>x84);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x93 = UINT8_MAX;
	int8_t x94 = INT8_MIN;
	int32_t x95 = -226681632;
	uint64_t x96 = 14908649320645LLU;
	volatile int32_t t16 = 800601;

    t16 = ((x93/(x94&x95))>x96);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x97 = INT16_MAX;
	static uint64_t x98 = UINT64_MAX;
	static int64_t x99 = -1LL;
	volatile int16_t x100 = -1;
	int32_t t17 = 44;

    t17 = ((x97/(x98&x99))>x100);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x101 = INT8_MIN;
	int8_t x102 = INT8_MAX;
	volatile uint64_t x103 = 1196764420482LLU;
	static int32_t x104 = INT32_MAX;
	static volatile int32_t t18 = 1;

    t18 = ((x101/(x102&x103))>x104);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x113 = 590U;
	uint8_t x114 = 5U;
	int8_t x115 = -7;
	uint32_t x116 = 15341037U;
	static volatile int32_t t19 = 263724552;

    t19 = ((x113/(x114&x115))>x116);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x124 = 40;
	volatile int32_t t20 = 54467563;

    t20 = ((x121/(x122&x123))>x124);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x129 = 62U;
	int32_t x130 = -1;
	uint8_t x131 = 1U;
	volatile uint16_t x132 = 238U;
	static int32_t t21 = 786496597;

    t21 = ((x129/(x130&x131))>x132);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x133 = 14079435809972LLU;
	static int64_t x134 = 496132474866148880LL;
	int16_t x135 = -1519;
	int32_t t22 = -638742594;

    t22 = ((x133/(x134&x135))>x136);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x141 = 29807U;
	int16_t x142 = INT16_MIN;
	uint16_t x143 = UINT16_MAX;
	volatile int32_t t23 = -1603166;

    t23 = ((x141/(x142&x143))>x144);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x147 = INT64_MIN;
	int8_t x148 = INT8_MIN;
	static volatile int32_t t24 = 108767424;

    t24 = ((x145/(x146&x147))>x148);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint8_t x149 = UINT8_MAX;
	int16_t x150 = -1;
	int8_t x151 = INT8_MIN;
	int64_t x152 = INT64_MAX;
	static int32_t t25 = -44991;

    t25 = ((x149/(x150&x151))>x152);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x153 = 21U;
	static uint32_t x154 = 1907928969U;
	uint64_t x155 = UINT64_MAX;
	int32_t x156 = -1;
	volatile int32_t t26 = -438;

    t26 = ((x153/(x154&x155))>x156);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x161 = -1;
	int64_t x162 = INT64_MIN;
	static int8_t x163 = INT8_MIN;
	int64_t x164 = INT64_MAX;

    t27 = ((x161/(x162&x163))>x164);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x165 = 56LLU;
	uint16_t x166 = 11135U;
	uint32_t x167 = 24433U;
	static int8_t x168 = INT8_MIN;
	volatile int32_t t28 = 2668442;

    t28 = ((x165/(x166&x167))>x168);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x169 = 45U;
	int32_t x170 = INT32_MAX;
	int8_t x171 = -15;
	static int8_t x172 = -1;
	int32_t t29 = -1;

    t29 = ((x169/(x170&x171))>x172);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x178 = INT16_MIN;
	int64_t x179 = 7546280LL;
	int64_t x180 = INT64_MIN;
	int32_t t30 = 49574;

    t30 = ((x177/(x178&x179))>x180);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x181 = INT32_MIN;
	static int64_t x182 = 125LL;
	int32_t x183 = -1;
	static int64_t x184 = 244896889713LL;
	int32_t t31 = 453600824;

    t31 = ((x181/(x182&x183))>x184);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x186 = -1;
	uint8_t x187 = UINT8_MAX;
	static uint8_t x188 = 0U;

    t32 = ((x185/(x186&x187))>x188);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x193 = 7;
	int8_t x196 = INT8_MIN;
	volatile int32_t t33 = 0;

    t33 = ((x193/(x194&x195))>x196);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x197 = 2193U;
	static int16_t x198 = 7;
	uint32_t x199 = 60450721U;
	int16_t x200 = -4310;
	volatile int32_t t34 = 350873;

    t34 = ((x197/(x198&x199))>x200);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x205 = 6795950007209LLU;
	static int16_t x206 = 6012;
	uint16_t x207 = UINT16_MAX;
	uint8_t x208 = 24U;
	static volatile int32_t t35 = -670;

    t35 = ((x205/(x206&x207))>x208);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x209 = INT8_MAX;
	uint16_t x210 = UINT16_MAX;
	uint32_t x211 = 162U;
	int8_t x212 = -35;
	volatile int32_t t36 = 419913;

    t36 = ((x209/(x210&x211))>x212);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x213 = 70120039092473LLU;
	volatile uint32_t x214 = UINT32_MAX;

    t37 = ((x213/(x214&x215))>x216);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x217 = 260458286986LLU;
	int16_t x218 = INT16_MIN;
	uint16_t x219 = UINT16_MAX;
	uint64_t x220 = 34668687845295937LLU;

    t38 = ((x217/(x218&x219))>x220);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x222 = 1U;
	static int16_t x223 = 247;
	uint64_t x224 = 330761LLU;
	volatile int32_t t39 = 23360606;

    t39 = ((x221/(x222&x223))>x224);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x237 = INT32_MAX;
	uint64_t x238 = UINT64_MAX;
	int32_t x239 = INT32_MAX;
	volatile int32_t x240 = INT32_MAX;
	volatile int32_t t40 = 5928932;

    t40 = ((x237/(x238&x239))>x240);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x241 = INT16_MAX;
	static volatile uint16_t x242 = 7U;
	volatile int16_t x243 = 9;
	static int8_t x244 = INT8_MAX;
	int32_t t41 = -534079;

    t41 = ((x241/(x242&x243))>x244);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x245 = -1567;
	int16_t x246 = INT16_MIN;
	uint32_t x247 = UINT32_MAX;
	uint64_t x248 = UINT64_MAX;
	static volatile int32_t t42 = 7;

    t42 = ((x245/(x246&x247))>x248);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x251 = -40;
	int32_t x252 = 502868;
	static int32_t t43 = 729;

    t43 = ((x249/(x250&x251))>x252);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x254 = INT32_MIN;
	int32_t x255 = -3719842;
	static int8_t x256 = INT8_MIN;

    t44 = ((x253/(x254&x255))>x256);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x257 = -1;
	uint64_t x258 = 712792604686047LLU;
	static int16_t x259 = INT16_MAX;
	int16_t x260 = INT16_MAX;
	int32_t t45 = 2671450;

    t45 = ((x257/(x258&x259))>x260);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x273 = 22U;
	static uint64_t x274 = UINT64_MAX;
	int64_t x276 = INT64_MIN;
	int32_t t46 = -22325870;

    t46 = ((x273/(x274&x275))>x276);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x278 = 88688916448210827LLU;
	uint64_t x279 = 26965943LLU;
	int64_t x280 = -1LL;

    t47 = ((x277/(x278&x279))>x280);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x283 = -5;
	int32_t x284 = -1;
	int32_t t48 = 6660347;

    t48 = ((x281/(x282&x283))>x284);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x285 = 87142LL;
	static int16_t x286 = INT16_MAX;
	int32_t t49 = -505;

    t49 = ((x285/(x286&x287))>x288);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x289 = INT32_MIN;
	static volatile int8_t x290 = -1;
	uint64_t x291 = 3087343486184LLU;
	int32_t x292 = 14716979;
	static int32_t t50 = 147392847;

    t50 = ((x289/(x290&x291))>x292);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x294 = -1;
	volatile int32_t x295 = INT32_MIN;
	uint8_t x296 = 62U;
	volatile int32_t t51 = 1609286;

    t51 = ((x293/(x294&x295))>x296);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x297 = 466344327;
	volatile int16_t x298 = INT16_MAX;
	uint16_t x299 = 1539U;
	int32_t x300 = INT32_MAX;
	int32_t t52 = 4778891;

    t52 = ((x297/(x298&x299))>x300);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x302 = UINT64_MAX;
	uint16_t x303 = 766U;
	int64_t x304 = INT64_MIN;
	int32_t t53 = 36797890;

    t53 = ((x301/(x302&x303))>x304);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x305 = INT8_MAX;
	int64_t x307 = INT64_MAX;
	int8_t x308 = INT8_MIN;
	volatile int32_t t54 = -2584;

    t54 = ((x305/(x306&x307))>x308);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x313 = UINT32_MAX;
	volatile int16_t x314 = -5320;
	uint8_t x315 = UINT8_MAX;
	volatile int32_t t55 = 1;

    t55 = ((x313/(x314&x315))>x316);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x325 = INT32_MAX;
	uint8_t x326 = UINT8_MAX;
	int16_t x327 = 7290;
	static volatile int32_t t56 = -421;

    t56 = ((x325/(x326&x327))>x328);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x329 = UINT8_MAX;
	static int32_t x330 = -1;
	uint32_t x331 = 78395185U;
	uint8_t x332 = 85U;
	volatile int32_t t57 = 9;

    t57 = ((x329/(x330&x331))>x332);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x334 = INT8_MIN;
	uint8_t x336 = UINT8_MAX;

    t58 = ((x333/(x334&x335))>x336);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x337 = -94LL;
	uint32_t x338 = 14136689U;
	uint64_t x339 = 328LLU;
	uint64_t x340 = 187LLU;
	int32_t t59 = 12;

    t59 = ((x337/(x338&x339))>x340);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x345 = -1LL;
	volatile uint64_t x346 = UINT64_MAX;
	uint64_t x347 = UINT64_MAX;
	static int64_t x348 = -1LL;
	int32_t t60 = 1;

    t60 = ((x345/(x346&x347))>x348);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x350 = 3989715468LL;
	int8_t x351 = -1;
	static int64_t x352 = 8LL;
	int32_t t61 = 1869;

    t61 = ((x349/(x350&x351))>x352);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x354 = 3797U;
	int32_t x355 = -7157;
	static uint8_t x356 = 1U;
	volatile int32_t t62 = 1999;

    t62 = ((x353/(x354&x355))>x356);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x361 = UINT8_MAX;
	uint8_t x362 = UINT8_MAX;
	int8_t x363 = -51;
	static volatile int32_t t63 = -18739;

    t63 = ((x361/(x362&x363))>x364);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x370 = -1LL;
	uint32_t x371 = 204U;
	int8_t x372 = 0;
	volatile int32_t t64 = 0;

    t64 = ((x369/(x370&x371))>x372);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t x373 = INT32_MIN;
	volatile uint32_t x374 = 63U;
	static uint32_t x376 = UINT32_MAX;
	volatile int32_t t65 = 0;

    t65 = ((x373/(x374&x375))>x376);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x381 = INT64_MIN;
	uint16_t x382 = UINT16_MAX;
	int64_t x383 = -3698405LL;
	volatile int32_t t66 = -110786;

    t66 = ((x381/(x382&x383))>x384);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x391 = -1;
	int32_t t67 = -4881451;

    t67 = ((x389/(x390&x391))>x392);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x395 = 5059287LLU;
	int8_t x396 = -1;
	volatile int32_t t68 = 338;

    t68 = ((x393/(x394&x395))>x396);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x399 = INT16_MAX;
	int8_t x400 = INT8_MAX;
	int32_t t69 = 1966844;

    t69 = ((x397/(x398&x399))>x400);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint64_t x402 = 38489871736498LLU;
	int8_t x403 = INT8_MAX;
	static int64_t x404 = -1LL;
	static volatile int32_t t70 = 1;

    t70 = ((x401/(x402&x403))>x404);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x405 = INT64_MIN;
	int32_t x406 = 955389049;
	volatile uint16_t x407 = 5U;
	uint16_t x408 = 15654U;
	volatile int32_t t71 = -234518;

    t71 = ((x405/(x406&x407))>x408);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x413 = 1089659431LLU;
	int16_t x414 = -1;
	int32_t x415 = INT32_MAX;

    t72 = ((x413/(x414&x415))>x416);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x421 = 37LL;
	uint16_t x422 = UINT16_MAX;
	static uint8_t x423 = 9U;
	static int32_t x424 = INT32_MAX;
	volatile int32_t t73 = 45594109;

    t73 = ((x421/(x422&x423))>x424);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x425 = -1767470;
	uint64_t x427 = UINT64_MAX;
	int32_t t74 = -385003984;

    t74 = ((x425/(x426&x427))>x428);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x429 = -13350;
	volatile int8_t x431 = 1;
	int32_t x432 = INT32_MIN;
	int32_t t75 = -2931;

    t75 = ((x429/(x430&x431))>x432);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x434 = 40426;
	uint16_t x435 = 627U;
	int8_t x436 = 14;

    t76 = ((x433/(x434&x435))>x436);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x441 = INT32_MAX;
	int32_t x443 = INT32_MIN;
	uint16_t x444 = 766U;
	int32_t t77 = 9;

    t77 = ((x441/(x442&x443))>x444);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x446 = 62U;
	volatile int32_t t78 = -502;

    t78 = ((x445/(x446&x447))>x448);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x449 = 4U;
	static volatile uint16_t x450 = 164U;
	uint64_t x452 = UINT64_MAX;

    t79 = ((x449/(x450&x451))>x452);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x453 = INT32_MAX;
	int16_t x454 = -6;
	static int32_t x456 = 4;
	volatile int32_t t80 = -11046444;

    t80 = ((x453/(x454&x455))>x456);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x457 = UINT16_MAX;
	int8_t x458 = -1;
	volatile int16_t x459 = INT16_MIN;

    t81 = ((x457/(x458&x459))>x460);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x461 = 1943115274LL;
	static volatile int32_t x464 = INT32_MIN;

    t82 = ((x461/(x462&x463))>x464);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x469 = INT8_MIN;
	int64_t x471 = INT64_MIN;
	int8_t x472 = 0;
	static volatile int32_t t83 = -1;

    t83 = ((x469/(x470&x471))>x472);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x474 = -4938381;

    t84 = ((x473/(x474&x475))>x476);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x477 = -1;
	int32_t x478 = INT32_MIN;
	int32_t x479 = -8939336;
	int32_t t85 = 12829114;

    t85 = ((x477/(x478&x479))>x480);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x485 = INT64_MIN;
	int32_t x486 = INT32_MIN;
	uint8_t x488 = UINT8_MAX;
	int32_t t86 = -7726;

    t86 = ((x485/(x486&x487))>x488);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x489 = 420716;
	int32_t x490 = 1085;
	uint64_t x491 = 59LLU;
	uint32_t x492 = 2U;
	volatile int32_t t87 = 2842;

    t87 = ((x489/(x490&x491))>x492);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x501 = 8U;
	uint16_t x503 = UINT16_MAX;
	int64_t x504 = INT64_MIN;
	volatile int32_t t88 = 781510784;

    t88 = ((x501/(x502&x503))>x504);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x505 = 2174974080410336LLU;
	volatile int64_t x506 = -1LL;
	int32_t x507 = INT32_MIN;
	volatile int64_t x508 = INT64_MAX;
	int32_t t89 = 6;

    t89 = ((x505/(x506&x507))>x508);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x510 = 7804481288883167721LLU;
	int16_t x511 = -1;
	static int64_t x512 = 5778007LL;

    t90 = ((x509/(x510&x511))>x512);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x513 = 23174734982LL;
	int64_t x514 = -1LL;
	int32_t x515 = 33896378;
	uint16_t x516 = 1U;
	int32_t t91 = -19;

    t91 = ((x513/(x514&x515))>x516);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x517 = 709484U;
	int8_t x518 = -1;
	uint32_t x519 = UINT32_MAX;
	uint32_t x520 = 5734992U;
	volatile int32_t t92 = 393104;

    t92 = ((x517/(x518&x519))>x520);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x523 = UINT8_MAX;

    t93 = ((x521/(x522&x523))>x524);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int64_t x525 = -1LL;
	int16_t x526 = 48;
	int16_t x527 = -1;
	static volatile uint8_t x528 = 2U;
	int32_t t94 = 1;

    t94 = ((x525/(x526&x527))>x528);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x529 = INT32_MIN;
	volatile uint16_t x530 = UINT16_MAX;
	int16_t x531 = INT16_MIN;
	int32_t x532 = -26;
	int32_t t95 = -6380;

    t95 = ((x529/(x530&x531))>x532);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x537 = 2080;
	static volatile int32_t x538 = INT32_MIN;
	int8_t x539 = -1;
	int32_t t96 = 2;

    t96 = ((x537/(x538&x539))>x540);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x541 = -1LL;
	int64_t x542 = -1LL;
	volatile int32_t x544 = INT32_MAX;
	int32_t t97 = 9505;

    t97 = ((x541/(x542&x543))>x544);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x545 = UINT16_MAX;
	int64_t x547 = 5489904LL;
	int32_t x548 = -1;

    t98 = ((x545/(x546&x547))>x548);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x549 = 1955171309U;
	int16_t x550 = 1;
	uint32_t x551 = UINT32_MAX;
	uint8_t x552 = UINT8_MAX;
	int32_t t99 = 182979;

    t99 = ((x549/(x550&x551))>x552);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x557 = UINT64_MAX;
	volatile int64_t x558 = INT64_MAX;
	int16_t x559 = INT16_MIN;
	static int32_t x560 = INT32_MIN;

    t100 = ((x557/(x558&x559))>x560);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x561 = UINT32_MAX;
	int64_t x562 = 644345139LL;
	volatile uint32_t x563 = 435517U;
	volatile int32_t t101 = -1019;

    t101 = ((x561/(x562&x563))>x564);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x565 = UINT64_MAX;
	uint16_t x566 = 7U;
	int64_t x567 = 11LL;
	volatile int64_t x568 = -50052913237758LL;
	int32_t t102 = 21772577;

    t102 = ((x565/(x566&x567))>x568);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x569 = UINT16_MAX;
	int8_t x571 = 1;

    t103 = ((x569/(x570&x571))>x572);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x573 = UINT64_MAX;
	volatile int32_t x574 = 50139731;
	static uint64_t x575 = 40511LLU;
	int32_t t104 = -20;

    t104 = ((x573/(x574&x575))>x576);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x577 = 115LLU;
	static uint8_t x578 = UINT8_MAX;
	uint64_t x579 = 2986622291130276LLU;
	volatile int8_t x580 = INT8_MIN;
	volatile int32_t t105 = -443631;

    t105 = ((x577/(x578&x579))>x580);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x581 = INT64_MAX;
	int32_t x582 = -1;
	volatile int32_t x584 = INT32_MIN;
	volatile int32_t t106 = -1257;

    t106 = ((x581/(x582&x583))>x584);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x586 = 1038560372LLU;
	uint16_t x587 = 10616U;
	volatile int16_t x588 = -1;
	volatile int32_t t107 = -11;

    t107 = ((x585/(x586&x587))>x588);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x593 = 474;
	int64_t x594 = INT64_MIN;
	int32_t t108 = -129;

    t108 = ((x593/(x594&x595))>x596);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x598 = 107U;
	uint32_t x599 = UINT32_MAX;
	int32_t x600 = INT32_MAX;

    t109 = ((x597/(x598&x599))>x600);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x605 = 153U;
	volatile uint16_t x606 = 121U;
	uint64_t x607 = 19929373LLU;
	int32_t t110 = 192;

    t110 = ((x605/(x606&x607))>x608);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x609 = 1U;
	uint8_t x610 = 1U;
	int32_t x611 = INT32_MAX;
	volatile uint8_t x612 = 0U;
	volatile int32_t t111 = 761618808;

    t111 = ((x609/(x610&x611))>x612);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x613 = INT16_MAX;
	static int32_t x614 = INT32_MAX;
	int16_t x615 = INT16_MIN;
	int8_t x616 = INT8_MIN;
	volatile int32_t t112 = 3;

    t112 = ((x613/(x614&x615))>x616);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x617 = 3U;
	int64_t x618 = -1LL;
	uint8_t x619 = UINT8_MAX;
	uint8_t x620 = 13U;
	volatile int32_t t113 = -2126038;

    t113 = ((x617/(x618&x619))>x620);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x626 = 21U;
	uint16_t x627 = 14U;
	static int32_t x628 = INT32_MIN;
	int32_t t114 = 4711;

    t114 = ((x625/(x626&x627))>x628);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x633 = -465713LL;
	volatile int16_t x634 = -46;
	int32_t t115 = 516885;

    t115 = ((x633/(x634&x635))>x636);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x641 = 69U;
	int32_t x642 = INT32_MIN;
	int8_t x643 = INT8_MIN;
	volatile uint16_t x644 = 5342U;

    t116 = ((x641/(x642&x643))>x644);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x645 = 4360U;
	uint64_t x646 = 797800049587480101LLU;
	volatile int32_t x647 = 34;
	int64_t x648 = INT64_MIN;
	volatile int32_t t117 = -2;

    t117 = ((x645/(x646&x647))>x648);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x651 = UINT8_MAX;
	static volatile int32_t t118 = 6;

    t118 = ((x649/(x650&x651))>x652);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x661 = INT64_MIN;
	int8_t x662 = -1;
	int32_t t119 = -7;

    t119 = ((x661/(x662&x663))>x664);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x665 = INT64_MAX;
	int16_t x666 = INT16_MIN;
	uint32_t x667 = 517836U;
	int64_t x668 = INT64_MIN;
	static volatile int32_t t120 = 5;

    t120 = ((x665/(x666&x667))>x668);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x673 = -4467;
	int16_t x674 = -1;
	int64_t x675 = -115514LL;
	volatile int16_t x676 = -963;
	int32_t t121 = 24;

    t121 = ((x673/(x674&x675))>x676);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x677 = 2045;
	int32_t x678 = INT32_MAX;
	int8_t x679 = 3;
	int32_t x680 = INT32_MIN;

    t122 = ((x677/(x678&x679))>x680);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x682 = UINT64_MAX;
	volatile int64_t x683 = 5610LL;
	volatile int64_t x684 = -26435886020LL;
	volatile int32_t t123 = 941;

    t123 = ((x681/(x682&x683))>x684);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x685 = 928840U;
	static int8_t x686 = INT8_MIN;
	uint16_t x687 = UINT16_MAX;
	int8_t x688 = -1;
	volatile int32_t t124 = -4;

    t124 = ((x685/(x686&x687))>x688);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x693 = 1509206584U;
	volatile int32_t x695 = INT32_MAX;
	int64_t x696 = INT64_MAX;
	volatile int32_t t125 = 1721551;

    t125 = ((x693/(x694&x695))>x696);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x697 = 46453482101162016LLU;
	int8_t x698 = -1;
	int8_t x699 = INT8_MIN;
	int8_t x700 = 6;
	volatile int32_t t126 = -451;

    t126 = ((x697/(x698&x699))>x700);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x705 = -1;
	int8_t x706 = -1;
	int16_t x707 = INT16_MAX;
	int32_t x708 = INT32_MIN;
	static volatile int32_t t127 = 16665;

    t127 = ((x705/(x706&x707))>x708);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x709 = INT32_MAX;
	volatile int32_t x710 = INT32_MIN;

    t128 = ((x709/(x710&x711))>x712);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x717 = INT64_MAX;
	int8_t x719 = INT8_MIN;
	volatile int16_t x720 = 70;

    t129 = ((x717/(x718&x719))>x720);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x721 = 13375169U;
	int64_t x723 = 245386LL;
	static int32_t t130 = 62173816;

    t130 = ((x721/(x722&x723))>x724);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x734 = INT16_MIN;
	volatile int64_t x735 = -223322LL;
	uint32_t x736 = 4976U;
	static volatile int32_t t131 = 52131;

    t131 = ((x733/(x734&x735))>x736);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x741 = -8652110;
	static uint16_t x742 = 1U;
	static volatile int16_t x743 = -1;
	int32_t x744 = INT32_MAX;
	static volatile int32_t t132 = 3816;

    t132 = ((x741/(x742&x743))>x744);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x745 = -1;
	int8_t x746 = INT8_MIN;
	static volatile int64_t x747 = -14042933LL;
	int16_t x748 = -1;
	static volatile int32_t t133 = 15399583;

    t133 = ((x745/(x746&x747))>x748);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x750 = INT16_MAX;
	volatile int32_t x751 = INT32_MAX;
	volatile int32_t t134 = 304;

    t134 = ((x749/(x750&x751))>x752);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x753 = -8487821825745LL;
	static int16_t x754 = -1;
	int32_t x755 = -27855883;
	int8_t x756 = -1;
	volatile int32_t t135 = -4575;

    t135 = ((x753/(x754&x755))>x756);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x757 = -26;
	int8_t x758 = -1;
	int64_t x759 = -1LL;
	volatile uint8_t x760 = UINT8_MAX;

    t136 = ((x757/(x758&x759))>x760);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x765 = -5030;
	volatile int64_t x767 = INT64_MIN;
	uint64_t x768 = UINT64_MAX;
	int32_t t137 = -13;

    t137 = ((x765/(x766&x767))>x768);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x769 = INT16_MAX;
	volatile uint32_t x770 = UINT32_MAX;
	int16_t x771 = INT16_MIN;
	volatile int32_t t138 = -2728424;

    t138 = ((x769/(x770&x771))>x772);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x773 = INT8_MIN;
	int32_t x774 = INT32_MAX;
	int32_t x776 = INT32_MIN;
	volatile int32_t t139 = 4022;

    t139 = ((x773/(x774&x775))>x776);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x783 = INT8_MIN;
	volatile int8_t x784 = 0;
	volatile int32_t t140 = -21987;

    t140 = ((x781/(x782&x783))>x784);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x785 = 1908U;
	uint64_t x787 = 1013756366742658022LLU;
	int32_t t141 = 484358;

    t141 = ((x785/(x786&x787))>x788);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x793 = INT64_MIN;
	static uint16_t x794 = UINT16_MAX;
	int16_t x795 = INT16_MIN;
	uint32_t x796 = 3U;
	volatile int32_t t142 = -55;

    t142 = ((x793/(x794&x795))>x796);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x797 = INT64_MAX;
	uint64_t x798 = UINT64_MAX;
	int8_t x799 = 8;
	static volatile int64_t x800 = INT64_MIN;
	static int32_t t143 = 401802;

    t143 = ((x797/(x798&x799))>x800);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x802 = -4211096474LL;
	uint64_t x804 = 134268044325LLU;

    t144 = ((x801/(x802&x803))>x804);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x809 = -1395970278928781LL;
	volatile int16_t x810 = 2527;
	uint16_t x811 = UINT16_MAX;

    t145 = ((x809/(x810&x811))>x812);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x817 = -1;
	volatile int8_t x818 = 12;
	volatile int8_t x819 = -4;

    t146 = ((x817/(x818&x819))>x820);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x821 = -36LL;
	int64_t x822 = -1LL;
	int8_t x823 = INT8_MAX;
	int16_t x824 = -1;
	volatile int32_t t147 = 68;

    t147 = ((x821/(x822&x823))>x824);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x825 = 13697U;
	int64_t x827 = -23690844LL;
	int16_t x828 = INT16_MAX;
	static int32_t t148 = -119954653;

    t148 = ((x825/(x826&x827))>x828);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x833 = INT32_MIN;
	int32_t x834 = INT32_MIN;
	int32_t x835 = -8571;
	volatile int32_t t149 = -36;

    t149 = ((x833/(x834&x835))>x836);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x837 = INT8_MIN;
	static int64_t x838 = INT64_MIN;
	int8_t x839 = -7;
	int64_t x840 = -1LL;
	static volatile int32_t t150 = -4368;

    t150 = ((x837/(x838&x839))>x840);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x845 = 3;
	int32_t x846 = 89;
	static uint64_t x847 = UINT64_MAX;
	int64_t x848 = INT64_MAX;
	static int32_t t151 = 31532;

    t151 = ((x845/(x846&x847))>x848);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x853 = INT16_MIN;
	volatile int8_t x854 = INT8_MAX;
	static uint64_t x855 = UINT64_MAX;
	uint8_t x856 = 1U;
	volatile int32_t t152 = 56062795;

    t152 = ((x853/(x854&x855))>x856);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x861 = INT32_MIN;
	uint16_t x862 = UINT16_MAX;
	int16_t x863 = -2;
	volatile int16_t x864 = INT16_MIN;
	volatile int32_t t153 = -230335;

    t153 = ((x861/(x862&x863))>x864);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x869 = -3547673247843LL;
	int64_t x871 = INT64_MAX;
	static int32_t x872 = INT32_MIN;
	int32_t t154 = -59257490;

    t154 = ((x869/(x870&x871))>x872);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x873 = 1LL;
	volatile int32_t x875 = -1;
	int32_t t155 = 9836576;

    t155 = ((x873/(x874&x875))>x876);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int16_t x877 = INT16_MIN;
	int8_t x878 = -1;
	uint16_t x879 = 125U;
	uint16_t x880 = 12515U;
	int32_t t156 = 5264;

    t156 = ((x877/(x878&x879))>x880);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x881 = 0;
	int16_t x882 = -1;
	int8_t x883 = INT8_MAX;
	static int8_t x884 = -1;
	int32_t t157 = -1;

    t157 = ((x881/(x882&x883))>x884);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x889 = 7U;
	int32_t x890 = INT32_MIN;
	static int8_t x891 = -11;
	volatile int32_t t158 = -89;

    t158 = ((x889/(x890&x891))>x892);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x893 = 32;
	volatile int64_t x894 = 27LL;
	volatile int32_t t159 = -2324886;

    t159 = ((x893/(x894&x895))>x896);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x897 = 2267U;
	int8_t x898 = INT8_MAX;
	static int32_t x899 = 314858520;
	int16_t x900 = 0;

    t160 = ((x897/(x898&x899))>x900);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x902 = INT64_MAX;
	int32_t x903 = INT32_MIN;
	int8_t x904 = INT8_MAX;
	volatile int32_t t161 = -30397782;

    t161 = ((x901/(x902&x903))>x904);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x905 = INT64_MIN;
	uint32_t x906 = 102730145U;
	int32_t x908 = INT32_MAX;
	volatile int32_t t162 = -83371640;

    t162 = ((x905/(x906&x907))>x908);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x909 = 1756U;
	int16_t x910 = 2658;
	int8_t x911 = -1;
	static int32_t x912 = -1;

    t163 = ((x909/(x910&x911))>x912);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x914 = UINT32_MAX;
	uint8_t x915 = UINT8_MAX;
	int16_t x916 = INT16_MIN;

    t164 = ((x913/(x914&x915))>x916);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x918 = INT16_MIN;
	uint16_t x919 = UINT16_MAX;
	volatile uint64_t x920 = 80146189223987LLU;
	int32_t t165 = 112561427;

    t165 = ((x917/(x918&x919))>x920);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x925 = UINT8_MAX;
	int8_t x926 = -31;
	static uint8_t x927 = UINT8_MAX;
	static volatile int64_t x928 = INT64_MIN;
	static int32_t t166 = 2599397;

    t166 = ((x925/(x926&x927))>x928);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x929 = UINT16_MAX;
	static int32_t x930 = INT32_MIN;
	int8_t x931 = INT8_MIN;
	int8_t x932 = -31;

    t167 = ((x929/(x930&x931))>x932);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x933 = INT16_MIN;
	uint32_t x934 = UINT32_MAX;
	uint32_t x935 = 608697U;
	uint64_t x936 = 254895205LLU;
	static int32_t t168 = 3;

    t168 = ((x933/(x934&x935))>x936);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x941 = 393;
	uint16_t x942 = UINT16_MAX;
	uint16_t x943 = 23622U;
	static volatile int32_t t169 = -264008835;

    t169 = ((x941/(x942&x943))>x944);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x945 = INT16_MIN;
	static uint8_t x946 = 1U;
	int16_t x947 = 205;
	int32_t t170 = -9186;

    t170 = ((x945/(x946&x947))>x948);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x949 = INT32_MAX;
	volatile int16_t x950 = -159;
	int64_t x951 = -1LL;
	static volatile int8_t x952 = INT8_MAX;
	int32_t t171 = -1542;

    t171 = ((x949/(x950&x951))>x952);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x957 = UINT64_MAX;
	int32_t x958 = -1;
	volatile int8_t x960 = INT8_MIN;
	int32_t t172 = 170475;

    t172 = ((x957/(x958&x959))>x960);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x961 = INT64_MAX;
	int32_t x962 = INT32_MAX;
	volatile int8_t x964 = -1;
	volatile int32_t t173 = 171008160;

    t173 = ((x961/(x962&x963))>x964);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x965 = INT16_MIN;
	int8_t x966 = 61;
	volatile int64_t x968 = -600004898LL;
	volatile int32_t t174 = 7;

    t174 = ((x965/(x966&x967))>x968);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint64_t x970 = 7492858LLU;
	int8_t x971 = INT8_MAX;
	static int32_t x972 = 1;
	int32_t t175 = 93539687;

    t175 = ((x969/(x970&x971))>x972);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x977 = INT8_MAX;
	volatile int8_t x978 = INT8_MIN;
	int16_t x979 = -249;
	volatile uint8_t x980 = 66U;
	volatile int32_t t176 = -486014075;

    t176 = ((x977/(x978&x979))>x980);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x981 = INT32_MIN;
	volatile int16_t x982 = INT16_MAX;
	uint16_t x983 = UINT16_MAX;
	int64_t x984 = -1LL;
	static volatile int32_t t177 = 0;

    t177 = ((x981/(x982&x983))>x984);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x989 = -4055LL;
	int64_t x990 = INT64_MIN;
	static volatile int64_t x992 = 0LL;
	int32_t t178 = -53091211;

    t178 = ((x989/(x990&x991))>x992);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint32_t x994 = 7704U;
	static uint16_t x996 = 28U;

    t179 = ((x993/(x994&x995))>x996);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x998 = -1LL;
	int16_t x999 = -5;
	static uint32_t x1000 = UINT32_MAX;

    t180 = ((x997/(x998&x999))>x1000);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1001 = INT32_MIN;
	int32_t x1002 = INT32_MIN;
	int64_t x1003 = INT64_MIN;
	int32_t x1004 = INT32_MIN;
	volatile int32_t t181 = -214;

    t181 = ((x1001/(x1002&x1003))>x1004);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int64_t x1005 = INT64_MIN;
	int16_t x1006 = 3;
	uint32_t x1008 = UINT32_MAX;
	volatile int32_t t182 = 125;

    t182 = ((x1005/(x1006&x1007))>x1008);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1009 = INT16_MIN;
	uint16_t x1011 = UINT16_MAX;
	static int64_t x1012 = -1LL;
	static int32_t t183 = 168814;

    t183 = ((x1009/(x1010&x1011))>x1012);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1013 = 0;
	static uint32_t x1014 = UINT32_MAX;
	int32_t x1015 = INT32_MIN;
	int16_t x1016 = 2;

    t184 = ((x1013/(x1014&x1015))>x1016);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1017 = INT16_MIN;
	int32_t x1018 = -538121860;
	int8_t x1019 = INT8_MAX;
	int16_t x1020 = INT16_MIN;
	int32_t t185 = -4;

    t185 = ((x1017/(x1018&x1019))>x1020);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1021 = INT32_MAX;
	static uint32_t x1022 = UINT32_MAX;
	static int64_t x1023 = -1LL;
	static volatile int32_t x1024 = INT32_MAX;
	int32_t t186 = 152607383;

    t186 = ((x1021/(x1022&x1023))>x1024);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1025 = INT8_MIN;
	static volatile int64_t x1026 = -1LL;
	int8_t x1027 = 40;
	int32_t t187 = 185636486;

    t187 = ((x1025/(x1026&x1027))>x1028);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1033 = -415204;
	volatile int16_t x1034 = INT16_MIN;
	int32_t x1035 = -1;
	int64_t x1036 = 41LL;
	static volatile int32_t t188 = 31;

    t188 = ((x1033/(x1034&x1035))>x1036);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1037 = INT32_MIN;
	int32_t x1038 = INT32_MAX;
	int32_t x1039 = INT32_MAX;
	static int64_t x1040 = INT64_MIN;

    t189 = ((x1037/(x1038&x1039))>x1040);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1045 = INT32_MIN;
	int64_t x1046 = -1LL;
	int64_t x1047 = INT64_MIN;
	volatile int32_t t190 = 0;

    t190 = ((x1045/(x1046&x1047))>x1048);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1054 = INT32_MAX;
	uint8_t x1055 = 26U;

    t191 = ((x1053/(x1054&x1055))>x1056);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x1065 = 233646U;
	int16_t x1066 = -1;
	int32_t x1067 = 1816;
	uint16_t x1068 = 28286U;

    t192 = ((x1065/(x1066&x1067))>x1068);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1073 = 0;
	int32_t x1074 = INT32_MIN;
	int32_t x1075 = -1179069;
	int8_t x1076 = INT8_MAX;
	volatile int32_t t193 = -7987230;

    t193 = ((x1073/(x1074&x1075))>x1076);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1077 = 189682639U;
	int64_t x1079 = -1LL;
	uint64_t x1080 = 0LLU;

    t194 = ((x1077/(x1078&x1079))>x1080);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1081 = 13U;
	int8_t x1082 = INT8_MAX;
	uint8_t x1083 = 3U;
	volatile int32_t t195 = -102051;

    t195 = ((x1081/(x1082&x1083))>x1084);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1085 = 74318402879714412LL;
	int32_t x1086 = -53993;
	int64_t x1087 = INT64_MIN;
	int64_t x1088 = INT64_MIN;

    t196 = ((x1085/(x1086&x1087))>x1088);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x1090 = 257256045081429LLU;
	volatile int8_t x1091 = -7;
	int16_t x1092 = INT16_MIN;

    t197 = ((x1089/(x1090&x1091))>x1092);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1093 = INT64_MAX;
	int32_t x1094 = INT32_MAX;
	int16_t x1095 = 13595;
	volatile int32_t t198 = -3;

    t198 = ((x1093/(x1094&x1095))>x1096);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1101 = INT16_MIN;
	int8_t x1102 = INT8_MIN;
	volatile int32_t t199 = -14238;

    t199 = ((x1101/(x1102&x1103))>x1104);

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


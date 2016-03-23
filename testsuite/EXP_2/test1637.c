
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

static uint64_t x11 = 120LLU;
static uint8_t x12 = 2U;
uint16_t x26 = UINT16_MAX;
int32_t x31 = -58139;
int16_t x42 = -1;
volatile int64_t t7 = -42021826LL;
uint8_t x92 = 1U;
static int32_t t12 = 60;
static volatile int64_t x101 = -1LL;
int8_t x106 = 1;
int32_t x115 = -1;
static int32_t x122 = 85427;
static int8_t x124 = -6;
uint64_t x127 = 410475833LLU;
int32_t x128 = INT32_MAX;
int32_t t20 = -1;
volatile uint8_t x173 = 46U;
int16_t x175 = INT16_MAX;
int8_t x178 = 2;
volatile uint32_t x189 = 1U;
volatile int32_t x193 = 6390;
static volatile int8_t x194 = INT8_MIN;
int32_t t25 = 24303;
int32_t x218 = 6625;
volatile int32_t x226 = 1571;
volatile uint8_t x228 = 7U;
volatile int16_t x237 = INT16_MAX;
int16_t x273 = INT16_MIN;
static int32_t t33 = -548;
volatile uint16_t x314 = 8177U;
static int64_t x323 = INT64_MIN;
static volatile int64_t x330 = 988708483851185LL;
static int64_t t36 = INT64_MIN;
int16_t x333 = -1;
volatile int32_t x335 = INT32_MIN;
int8_t x366 = -35;
int32_t t41 = -164873;
int64_t x375 = INT64_MIN;
int16_t x376 = 8969;
int32_t t42 = -29639874;
int32_t x378 = 0;
static int8_t x389 = 1;
int16_t x392 = 1306;
volatile uint8_t x393 = 4U;
static uint32_t x395 = UINT32_MAX;
uint16_t x399 = 3U;
volatile int16_t x419 = 0;
int8_t x420 = INT8_MAX;
int16_t x429 = -1;
static uint16_t x438 = 5U;
volatile int32_t t53 = 794766841;
uint8_t x461 = UINT8_MAX;
static int8_t x462 = INT8_MIN;
volatile int16_t x472 = INT16_MIN;
int64_t x477 = INT64_MIN;
static int16_t x506 = INT16_MAX;
int16_t x507 = INT16_MIN;
int32_t x513 = INT32_MAX;
volatile int32_t t60 = -33473;
int8_t x521 = -17;
int32_t x522 = 4;
volatile uint8_t x524 = 9U;
int64_t x527 = INT64_MIN;
static volatile int8_t x558 = INT8_MIN;
static int64_t x559 = INT64_MIN;
uint16_t x560 = 239U;
volatile uint64_t t64 = 312786429599LLU;
static int64_t x566 = INT64_MAX;
int8_t x579 = INT8_MIN;
int8_t x587 = INT8_MIN;
volatile int32_t t68 = 135;
int8_t x589 = -5;
volatile int16_t x609 = -29;
volatile int32_t x611 = INT32_MIN;
volatile int64_t x616 = INT64_MAX;
int8_t x622 = -1;
static int64_t x629 = INT64_MIN;
volatile int32_t x632 = -7049432;
volatile int64_t x648 = 199097LL;
static uint16_t x650 = UINT16_MAX;
static volatile int64_t t79 = -1LL;
static uint32_t x696 = 677909U;
int64_t x714 = 1478639695494LL;
volatile int32_t t87 = -8144;
volatile int64_t x722 = INT64_MAX;
int8_t x723 = -23;
volatile int32_t t89 = -1;
uint8_t x737 = 49U;
int8_t x739 = INT8_MIN;
volatile uint64_t t90 = 19828LLU;
uint8_t x753 = 2U;
int16_t x756 = INT16_MIN;
volatile uint64_t x776 = 264956146LLU;
int16_t x783 = INT16_MIN;
static uint16_t x789 = 10522U;
static volatile int16_t x796 = 16;
static int16_t x797 = INT16_MAX;
int64_t t97 = 3LL;
int8_t x803 = INT8_MAX;
int32_t x809 = INT32_MIN;
int32_t t99 = -13218850;
uint16_t x832 = 1U;
uint8_t x845 = 6U;
static volatile int32_t t103 = INT32_MAX;
uint8_t x853 = 2U;
int32_t x865 = INT32_MIN;
int32_t x898 = INT32_MIN;
int32_t x902 = INT32_MAX;
uint32_t x917 = UINT32_MAX;
static int16_t x969 = INT16_MIN;
int16_t x1006 = INT16_MIN;
uint64_t x1012 = UINT64_MAX;
volatile int32_t x1019 = INT32_MIN;
int16_t x1025 = INT16_MIN;
uint32_t x1029 = 286354513U;
volatile uint64_t t126 = 2640530LLU;
static volatile int32_t t127 = -7;
static volatile uint8_t x1038 = UINT8_MAX;
int8_t x1039 = 22;
uint64_t x1040 = 922819929794LLU;
volatile uint64_t t128 = 754LLU;
static int16_t x1045 = INT16_MAX;
int32_t x1061 = -41857;
int8_t x1063 = -1;
uint32_t x1064 = 25397U;
static volatile int32_t t131 = -99;
int8_t x1104 = -1;
int32_t x1120 = -1;
static volatile int32_t t134 = 100983364;
static int16_t x1122 = INT16_MIN;
int64_t x1127 = INT64_MIN;
uint16_t x1138 = 0U;
static int64_t t138 = INT64_MIN;
uint8_t x1172 = 121U;
int16_t x1196 = -1;
volatile uint64_t x1202 = 142224LLU;
static int16_t x1210 = INT16_MIN;
uint32_t x1211 = 15788410U;
static int64_t x1219 = INT64_MIN;
static int32_t x1232 = INT32_MIN;
uint16_t x1234 = 30958U;
uint8_t x1241 = UINT8_MAX;
static int32_t x1251 = -768;
volatile uint32_t t150 = UINT32_MAX;
int64_t x1260 = 1928049LL;
uint32_t x1281 = 35116061U;
int16_t x1294 = -15;
uint32_t x1301 = 263696402U;
volatile uint32_t x1303 = 6077U;
static volatile uint64_t x1311 = 65251869954024209LLU;
int8_t x1312 = 0;
int32_t x1337 = INT32_MAX;
volatile uint64_t x1338 = UINT64_MAX;
static int16_t x1369 = INT16_MIN;
static uint32_t x1380 = 31U;
uint32_t t163 = 13534732U;
volatile int64_t x1383 = 4LL;
static int32_t t164 = 1;
static int8_t x1389 = 1;
int64_t x1390 = 44804411623040676LL;
static int64_t x1392 = 730876LL;
uint32_t x1430 = 223U;
volatile int32_t t170 = -7212538;
int64_t x1449 = 9024896LL;
volatile int16_t x1451 = INT16_MIN;
uint64_t x1461 = UINT64_MAX;
int16_t x1463 = INT16_MIN;
uint64_t x1464 = 117468214LLU;
int16_t x1482 = 1880;
volatile uint32_t t178 = 103509U;
static volatile int16_t x1489 = -1;
uint8_t x1491 = 23U;
uint8_t x1492 = 0U;
static int32_t t179 = -1923143;
uint8_t x1494 = 62U;
uint32_t x1521 = 2870475U;
volatile int32_t t187 = 24888176;
uint32_t x1550 = 2542U;
uint16_t x1572 = UINT16_MAX;
volatile int16_t x1588 = -1;
static int8_t x1601 = INT8_MIN;
uint32_t x1603 = 471U;
static uint64_t t198 = 1411LLU;
static uint16_t x1623 = 4U;


void f0(void) {
    	int32_t x1 = -1;
	uint8_t x2 = 14U;
	uint32_t x3 = 8U;
	volatile uint16_t x4 = 19443U;
	int32_t t0 = -1;

    t0 = ((x1%(x2>x3))|x4);

    if (t0 != 19443) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x9 = -168554LL;
	static uint64_t x10 = 13524LLU;
	volatile int64_t t1 = 164120284320942902LL;

    t1 = ((x9%(x10>x11))|x12);

    if (t1 != 2LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x17 = -1;
	static int8_t x18 = 6;
	uint16_t x19 = 0U;
	int64_t x20 = INT64_MAX;
	int64_t t2 = INT64_MAX;

    t2 = ((x17%(x18>x19))|x20);

    if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x21 = INT32_MIN;
	static uint8_t x22 = UINT8_MAX;
	int32_t x23 = INT32_MIN;
	uint16_t x24 = 39U;
	volatile int32_t t3 = -2;

    t3 = ((x21%(x22>x23))|x24);

    if (t3 != 39) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = INT16_MAX;
	static int64_t x27 = INT64_MIN;
	int8_t x28 = INT8_MAX;
	int32_t t4 = 232423261;

    t4 = ((x25%(x26>x27))|x28);

    if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x29 = INT8_MAX;
	static volatile int8_t x30 = INT8_MAX;
	static int32_t x32 = -4085820;
	volatile int32_t t5 = 600492;

    t5 = ((x29%(x30>x31))|x32);

    if (t5 != -4085820) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x41 = 1899LL;
	int16_t x43 = INT16_MIN;
	static int64_t x44 = 76372872241276LL;
	volatile int64_t t6 = -4190LL;

    t6 = ((x41%(x42>x43))|x44);

    if (t6 != 76372872241276LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x69 = INT64_MIN;
	int8_t x70 = -1;
	int64_t x71 = INT64_MIN;
	int8_t x72 = 6;

    t7 = ((x69%(x70>x71))|x72);

    if (t7 != 6LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x73 = UINT64_MAX;
	int8_t x74 = INT8_MAX;
	int8_t x75 = INT8_MIN;
	int64_t x76 = INT64_MAX;
	static volatile uint64_t t8 = 247LLU;

    t8 = ((x73%(x74>x75))|x76);

    if (t8 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x77 = 29085447746037926LL;
	static int64_t x78 = INT64_MIN;
	uint64_t x79 = 29576LLU;
	uint64_t x80 = 53287600750LLU;
	static volatile uint64_t t9 = 2LLU;

    t9 = ((x77%(x78>x79))|x80);

    if (t9 != 53287600750LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x89 = -3;
	int16_t x90 = -1;
	int32_t x91 = -418;
	int32_t t10 = 78;

    t10 = ((x89%(x90>x91))|x92);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x93 = INT16_MIN;
	volatile int8_t x94 = -1;
	uint32_t x95 = 5716U;
	static uint32_t x96 = 3U;
	uint32_t t11 = 15U;

    t11 = ((x93%(x94>x95))|x96);

    if (t11 != 3U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x97 = UINT8_MAX;
	uint64_t x98 = UINT64_MAX;
	int8_t x99 = INT8_MAX;
	volatile int16_t x100 = INT16_MIN;

    t12 = ((x97%(x98>x99))|x100);

    if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x102 = 9;
	uint16_t x103 = 2U;
	int64_t x104 = 90832626095707LL;
	int64_t t13 = -1467442024842LL;

    t13 = ((x101%(x102>x103))|x104);

    if (t13 != 90832626095707LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x105 = -1;
	static int64_t x107 = INT64_MIN;
	uint32_t x108 = 555524U;
	volatile uint32_t t14 = 454380949U;

    t14 = ((x105%(x106>x107))|x108);

    if (t14 != 555524U) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x113 = UINT8_MAX;
	uint8_t x114 = UINT8_MAX;
	int16_t x116 = 16;
	volatile int32_t t15 = -611;

    t15 = ((x113%(x114>x115))|x116);

    if (t15 != 16) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x121 = INT16_MIN;
	volatile int32_t x123 = INT32_MIN;
	volatile int32_t t16 = -39172354;

    t16 = ((x121%(x122>x123))|x124);

    if (t16 != -6) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x125 = -7;
	static volatile int8_t x126 = INT8_MIN;
	int32_t t17 = INT32_MAX;

    t17 = ((x125%(x126>x127))|x128);

    if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x141 = INT64_MAX;
	uint16_t x142 = 120U;
	int16_t x143 = 1;
	int32_t x144 = INT32_MAX;
	int64_t t18 = 194887866219195LL;

    t18 = ((x141%(x142>x143))|x144);

    if (t18 != 2147483647LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x145 = -29;
	uint8_t x146 = 0U;
	static int64_t x147 = INT64_MIN;
	static int64_t x148 = INT64_MAX;
	static int64_t t19 = INT64_MAX;

    t19 = ((x145%(x146>x147))|x148);

    if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x149 = UINT16_MAX;
	int64_t x150 = INT64_MAX;
	volatile uint16_t x151 = 9U;
	uint8_t x152 = UINT8_MAX;

    t20 = ((x149%(x150>x151))|x152);

    if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x169 = 3686297U;
	static uint16_t x170 = UINT16_MAX;
	volatile int16_t x171 = 208;
	int32_t x172 = 29891051;
	uint32_t t21 = 1775680337U;

    t21 = ((x169%(x170>x171))|x172);

    if (t21 != 29891051U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x174 = 104879876023593365LLU;
	static volatile int64_t x176 = INT64_MAX;
	static int64_t t22 = INT64_MAX;

    t22 = ((x173%(x174>x175))|x176);

    if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x177 = INT32_MIN;
	int64_t x179 = -5355445125222LL;
	int16_t x180 = 1;
	static volatile int32_t t23 = 229415717;

    t23 = ((x177%(x178>x179))|x180);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x190 = INT64_MAX;
	uint32_t x191 = 755530350U;
	volatile int16_t x192 = INT16_MIN;
	volatile uint32_t t24 = 2725U;

    t24 = ((x189%(x190>x191))|x192);

    if (t24 != 4294934528U) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x195 = INT32_MIN;
	volatile int32_t x196 = -1;

    t25 = ((x193%(x194>x195))|x196);

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x217 = -9668247LL;
	volatile int8_t x219 = -3;
	volatile int16_t x220 = -1;
	static volatile int64_t t26 = 42801858LL;

    t26 = ((x217%(x218>x219))|x220);

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x225 = -193096098998LL;
	int32_t x227 = -94;
	int64_t t27 = 539750LL;

    t27 = ((x225%(x226>x227))|x228);

    if (t27 != 7LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x229 = -1;
	int16_t x230 = INT16_MAX;
	int32_t x231 = INT32_MIN;
	volatile int64_t x232 = INT64_MAX;
	int64_t t28 = INT64_MAX;

    t28 = ((x229%(x230>x231))|x232);

    if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x238 = -1;
	int8_t x239 = INT8_MIN;
	volatile int8_t x240 = 1;
	int32_t t29 = -548833548;

    t29 = ((x237%(x238>x239))|x240);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x245 = 4;
	uint16_t x246 = 226U;
	static uint8_t x247 = 3U;
	static int8_t x248 = -35;
	int32_t t30 = -254903;

    t30 = ((x245%(x246>x247))|x248);

    if (t30 != -35) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x249 = -1;
	uint8_t x250 = 18U;
	volatile int64_t x251 = -22359374620966896LL;
	int64_t x252 = -58LL;
	static volatile int64_t t31 = -241637503316LL;

    t31 = ((x249%(x250>x251))|x252);

    if (t31 != -58LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x261 = INT8_MIN;
	int8_t x262 = 0;
	int64_t x263 = -439LL;
	volatile int64_t x264 = INT64_MAX;
	volatile int64_t t32 = INT64_MAX;

    t32 = ((x261%(x262>x263))|x264);

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x274 = 880760;
	int64_t x275 = INT64_MIN;
	static int16_t x276 = INT16_MAX;

    t33 = ((x273%(x274>x275))|x276);

    if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x313 = INT8_MIN;
	static int16_t x315 = -1393;
	int16_t x316 = -1;
	volatile int32_t t34 = -44;

    t34 = ((x313%(x314>x315))|x316);

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x321 = -1LL;
	int8_t x322 = INT8_MIN;
	int64_t x324 = INT64_MIN;
	volatile int64_t t35 = INT64_MIN;

    t35 = ((x321%(x322>x323))|x324);

    if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x329 = UINT16_MAX;
	int32_t x331 = 24013;
	static int64_t x332 = INT64_MIN;

    t36 = ((x329%(x330>x331))|x332);

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x334 = INT16_MIN;
	static int8_t x336 = 1;
	int32_t t37 = 14419;

    t37 = ((x333%(x334>x335))|x336);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x341 = UINT64_MAX;
	int32_t x342 = 58424147;
	volatile int32_t x343 = -8;
	volatile uint32_t x344 = 718756715U;
	uint64_t t38 = 1237961889669215896LLU;

    t38 = ((x341%(x342>x343))|x344);

    if (t38 != 718756715LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x361 = UINT16_MAX;
	static int64_t x362 = -1LL;
	int8_t x363 = INT8_MIN;
	int64_t x364 = INT64_MAX;
	static volatile int64_t t39 = INT64_MAX;

    t39 = ((x361%(x362>x363))|x364);

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x365 = -1;
	static int32_t x367 = -170754863;
	volatile int16_t x368 = INT16_MIN;
	int32_t t40 = -103;

    t40 = ((x365%(x366>x367))|x368);

    if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x369 = INT32_MAX;
	int16_t x370 = -1;
	int32_t x371 = INT32_MIN;
	int16_t x372 = -1;

    t41 = ((x369%(x370>x371))|x372);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x373 = -2741;
	uint64_t x374 = UINT64_MAX;

    t42 = ((x373%(x374>x375))|x376);

    if (t42 != 8969) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x377 = -1;
	int16_t x379 = -1;
	int64_t x380 = -1LL;
	static volatile int64_t t43 = 28264722552078560LL;

    t43 = ((x377%(x378>x379))|x380);

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x381 = UINT8_MAX;
	static int32_t x382 = INT32_MAX;
	uint32_t x383 = 2U;
	volatile int16_t x384 = -1721;
	static int32_t t44 = 56;

    t44 = ((x381%(x382>x383))|x384);

    if (t44 != -1721) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x390 = 6035U;
	static int8_t x391 = 11;
	int32_t t45 = -1057754402;

    t45 = ((x389%(x390>x391))|x392);

    if (t45 != 1306) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint64_t x394 = 108463458175339LLU;
	uint16_t x396 = 4454U;
	int32_t t46 = 35321;

    t46 = ((x393%(x394>x395))|x396);

    if (t46 != 4454) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x397 = -1;
	uint32_t x398 = 103295U;
	uint16_t x400 = 2044U;
	int32_t t47 = 1113327;

    t47 = ((x397%(x398>x399))|x400);

    if (t47 != 2044) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x401 = UINT8_MAX;
	static int8_t x402 = INT8_MAX;
	volatile uint16_t x403 = 2U;
	int32_t x404 = 26;
	volatile int32_t t48 = 1;

    t48 = ((x401%(x402>x403))|x404);

    if (t48 != 26) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x413 = 19U;
	uint8_t x414 = 1U;
	int8_t x415 = -1;
	static int16_t x416 = -94;
	volatile int32_t t49 = 13654725;

    t49 = ((x413%(x414>x415))|x416);

    if (t49 != -94) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x417 = 30LL;
	int64_t x418 = INT64_MAX;
	int64_t t50 = 5847127760LL;

    t50 = ((x417%(x418>x419))|x420);

    if (t50 != 127LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int32_t x430 = INT32_MIN;
	static int64_t x431 = INT64_MIN;
	int64_t x432 = 138LL;
	int64_t t51 = 17961LL;

    t51 = ((x429%(x430>x431))|x432);

    if (t51 != 138LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x437 = INT64_MAX;
	int64_t x439 = -3924LL;
	static int16_t x440 = 723;
	int64_t t52 = -2LL;

    t52 = ((x437%(x438>x439))|x440);

    if (t52 != 723LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x445 = 0;
	static volatile int32_t x446 = -1;
	uint64_t x447 = 14177291LLU;
	static int32_t x448 = 1;

    t53 = ((x445%(x446>x447))|x448);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x463 = INT64_MIN;
	uint64_t x464 = 38865LLU;
	uint64_t t54 = 43161284413512933LLU;

    t54 = ((x461%(x462>x463))|x464);

    if (t54 != 38865LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x469 = INT32_MIN;
	int64_t x470 = INT64_MAX;
	static uint16_t x471 = UINT16_MAX;
	volatile int32_t t55 = 13;

    t55 = ((x469%(x470>x471))|x472);

    if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x478 = 23234U;
	int64_t x479 = -1LL;
	volatile int8_t x480 = INT8_MIN;
	static volatile int64_t t56 = 341044081191660099LL;

    t56 = ((x477%(x478>x479))|x480);

    if (t56 != -128LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x497 = INT64_MAX;
	volatile uint32_t x498 = UINT32_MAX;
	int32_t x499 = 10388093;
	int16_t x500 = INT16_MAX;
	int64_t t57 = 20962LL;

    t57 = ((x497%(x498>x499))|x500);

    if (t57 != 32767LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x501 = 362U;
	volatile uint32_t x502 = UINT32_MAX;
	int64_t x503 = 9LL;
	uint64_t x504 = 913625847107357661LLU;
	uint64_t t58 = 957433600665LLU;

    t58 = ((x501%(x502>x503))|x504);

    if (t58 != 913625847107357661LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x505 = INT64_MAX;
	uint8_t x508 = 7U;
	volatile int64_t t59 = 256580LL;

    t59 = ((x505%(x506>x507))|x508);

    if (t59 != 7LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x514 = -1;
	uint32_t x515 = 644647U;
	uint8_t x516 = 31U;

    t60 = ((x513%(x514>x515))|x516);

    if (t60 != 31) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int8_t x523 = 1;
	volatile int32_t t61 = -384514;

    t61 = ((x521%(x522>x523))|x524);

    if (t61 != 9) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x525 = UINT32_MAX;
	int16_t x526 = INT16_MIN;
	uint32_t x528 = 1U;
	volatile uint32_t t62 = 69U;

    t62 = ((x525%(x526>x527))|x528);

    if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x557 = 3U;
	static int32_t t63 = 14607;

    t63 = ((x557%(x558>x559))|x560);

    if (t63 != 239) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x561 = 394251LLU;
	int64_t x562 = INT64_MAX;
	volatile int8_t x563 = 1;
	uint64_t x564 = 1693929176178321LLU;

    t64 = ((x561%(x562>x563))|x564);

    if (t64 != 1693929176178321LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x565 = -1;
	int16_t x567 = -1;
	volatile int32_t x568 = INT32_MAX;
	int32_t t65 = INT32_MAX;

    t65 = ((x565%(x566>x567))|x568);

    if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x569 = 2U;
	volatile int64_t x570 = 275630970194932655LL;
	static int64_t x571 = 36778954859011331LL;
	int64_t x572 = INT64_MIN;
	int64_t t66 = INT64_MIN;

    t66 = ((x569%(x570>x571))|x572);

    if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x577 = INT32_MIN;
	volatile int32_t x578 = 2945994;
	int8_t x580 = -2;
	volatile int32_t t67 = -1714529;

    t67 = ((x577%(x578>x579))|x580);

    if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x585 = -3844;
	int8_t x586 = INT8_MAX;
	uint16_t x588 = 0U;

    t68 = ((x585%(x586>x587))|x588);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x590 = 10U;
	int16_t x591 = -1;
	int32_t x592 = -3;
	volatile int32_t t69 = -24072107;

    t69 = ((x589%(x590>x591))|x592);

    if (t69 != -3) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x593 = 28U;
	int64_t x594 = INT64_MAX;
	int8_t x595 = INT8_MAX;
	int32_t x596 = INT32_MIN;
	volatile int32_t t70 = INT32_MIN;

    t70 = ((x593%(x594>x595))|x596);

    if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x610 = 6U;
	uint8_t x612 = 7U;
	static volatile int32_t t71 = 3031;

    t71 = ((x609%(x610>x611))|x612);

    if (t71 != 7) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x613 = INT32_MIN;
	static int32_t x614 = INT32_MIN;
	uint32_t x615 = 6070785U;
	volatile int64_t t72 = INT64_MAX;

    t72 = ((x613%(x614>x615))|x616);

    if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x617 = 1807504315179940LL;
	int32_t x618 = INT32_MAX;
	uint16_t x619 = 4U;
	static int8_t x620 = INT8_MAX;
	volatile int64_t t73 = -172511LL;

    t73 = ((x617%(x618>x619))|x620);

    if (t73 != 127LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x621 = INT16_MIN;
	int32_t x623 = -2;
	int64_t x624 = 805275464770435LL;
	volatile int64_t t74 = -8308843412043LL;

    t74 = ((x621%(x622>x623))|x624);

    if (t74 != 805275464770435LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int32_t x630 = 3337052;
	int16_t x631 = INT16_MIN;
	volatile int64_t t75 = 129864972416303LL;

    t75 = ((x629%(x630>x631))|x632);

    if (t75 != -7049432LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x641 = UINT32_MAX;
	volatile int16_t x642 = INT16_MAX;
	int32_t x643 = INT32_MIN;
	int16_t x644 = -15;
	uint32_t t76 = 398267U;

    t76 = ((x641%(x642>x643))|x644);

    if (t76 != 4294967281U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x645 = UINT64_MAX;
	int8_t x646 = INT8_MIN;
	int16_t x647 = INT16_MIN;
	uint64_t t77 = 45608329280144227LLU;

    t77 = ((x645%(x646>x647))|x648);

    if (t77 != 199097LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint32_t x649 = 75024U;
	int64_t x651 = INT64_MIN;
	int8_t x652 = INT8_MIN;
	uint32_t t78 = 97U;

    t78 = ((x649%(x650>x651))|x652);

    if (t78 != 4294967168U) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x653 = INT32_MAX;
	static uint16_t x654 = 1361U;
	uint64_t x655 = 2LLU;
	volatile int64_t x656 = 3361959LL;

    t79 = ((x653%(x654>x655))|x656);

    if (t79 != 3361959LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x657 = -206;
	int16_t x658 = 3;
	int64_t x659 = INT64_MIN;
	volatile int16_t x660 = INT16_MAX;
	static int32_t t80 = 0;

    t80 = ((x657%(x658>x659))|x660);

    if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x665 = 7U;
	uint16_t x666 = UINT16_MAX;
	static int16_t x667 = INT16_MIN;
	static int8_t x668 = -1;
	volatile int32_t t81 = 82459769;

    t81 = ((x665%(x666>x667))|x668);

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x669 = INT8_MIN;
	volatile int8_t x670 = -1;
	int64_t x671 = INT64_MIN;
	uint16_t x672 = 394U;
	static volatile int32_t t82 = 6345468;

    t82 = ((x669%(x670>x671))|x672);

    if (t82 != 394) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x681 = UINT16_MAX;
	int8_t x682 = -1;
	int64_t x683 = -2060LL;
	int64_t x684 = INT64_MAX;
	volatile int64_t t83 = INT64_MAX;

    t83 = ((x681%(x682>x683))|x684);

    if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x689 = 6981116616019641629LLU;
	static int16_t x690 = INT16_MIN;
	int64_t x691 = INT64_MIN;
	int32_t x692 = INT32_MIN;
	uint64_t t84 = 471764509292LLU;

    t84 = ((x689%(x690>x691))|x692);

    if (t84 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x693 = -1;
	int32_t x694 = 40;
	int16_t x695 = INT16_MIN;
	volatile uint32_t t85 = 33U;

    t85 = ((x693%(x694>x695))|x696);

    if (t85 != 677909U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x709 = 120721241LL;
	uint8_t x710 = UINT8_MAX;
	int32_t x711 = -290831404;
	static int64_t x712 = -1LL;
	static int64_t t86 = 187325439940LL;

    t86 = ((x709%(x710>x711))|x712);

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x713 = -1;
	uint64_t x715 = 22651LLU;
	static int16_t x716 = INT16_MAX;

    t87 = ((x713%(x714>x715))|x716);

    if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x721 = UINT32_MAX;
	volatile uint64_t x724 = 13397846738423204LLU;
	volatile uint64_t t88 = 437473405288645LLU;

    t88 = ((x721%(x722>x723))|x724);

    if (t88 != 13397846738423204LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x725 = INT16_MAX;
	uint64_t x726 = 81532926476670510LLU;
	static volatile int32_t x727 = 1050468984;
	volatile int16_t x728 = 78;

    t89 = ((x725%(x726>x727))|x728);

    if (t89 != 78) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x738 = UINT8_MAX;
	uint64_t x740 = 7684613186LLU;

    t90 = ((x737%(x738>x739))|x740);

    if (t90 != 7684613186LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x754 = UINT16_MAX;
	int32_t x755 = 2217;
	volatile int32_t t91 = 22;

    t91 = ((x753%(x754>x755))|x756);

    if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x773 = UINT16_MAX;
	int16_t x774 = -1;
	uint32_t x775 = 413060U;
	volatile uint64_t t92 = 44525419LLU;

    t92 = ((x773%(x774>x775))|x776);

    if (t92 != 264956146LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x777 = -3;
	volatile uint16_t x778 = 14142U;
	volatile int32_t x779 = INT32_MIN;
	static int16_t x780 = INT16_MAX;
	volatile int32_t t93 = 60;

    t93 = ((x777%(x778>x779))|x780);

    if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x781 = INT8_MIN;
	int64_t x782 = 5251661LL;
	volatile int64_t x784 = INT64_MAX;
	int64_t t94 = INT64_MAX;

    t94 = ((x781%(x782>x783))|x784);

    if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x790 = UINT16_MAX;
	int16_t x791 = INT16_MIN;
	static int64_t x792 = INT64_MIN;
	volatile int64_t t95 = INT64_MIN;

    t95 = ((x789%(x790>x791))|x792);

    if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x793 = -1;
	volatile uint64_t x794 = UINT64_MAX;
	volatile int16_t x795 = 3;
	volatile int32_t t96 = -7;

    t96 = ((x793%(x794>x795))|x796);

    if (t96 != 16) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x798 = 83U;
	int64_t x799 = -1LL;
	int64_t x800 = -8346505042414LL;

    t97 = ((x797%(x798>x799))|x800);

    if (t97 != -8346505042414LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x801 = UINT32_MAX;
	int16_t x802 = 5996;
	uint64_t x804 = 3877597732502LLU;
	uint64_t t98 = 3426LLU;

    t98 = ((x801%(x802>x803))|x804);

    if (t98 != 3877597732502LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x810 = INT8_MAX;
	volatile uint32_t x811 = 46U;
	int32_t x812 = 129843;

    t99 = ((x809%(x810>x811))|x812);

    if (t99 != 129843) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int32_t x817 = -1;
	uint32_t x818 = 775195U;
	int8_t x819 = INT8_MAX;
	int32_t x820 = INT32_MAX;
	int32_t t100 = INT32_MAX;

    t100 = ((x817%(x818>x819))|x820);

    if (t100 != INT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x821 = 0;
	int64_t x822 = INT64_MAX;
	static int32_t x823 = 469440;
	int64_t x824 = -32714216069725LL;
	int64_t t101 = 633716LL;

    t101 = ((x821%(x822>x823))|x824);

    if (t101 != -32714216069725LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x829 = INT16_MIN;
	int16_t x830 = INT16_MAX;
	static int8_t x831 = -1;
	volatile int32_t t102 = 591;

    t102 = ((x829%(x830>x831))|x832);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x846 = 0U;
	int64_t x847 = -1LL;
	static volatile int32_t x848 = INT32_MAX;

    t103 = ((x845%(x846>x847))|x848);

    if (t103 != INT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x854 = -1;
	uint64_t x855 = 122918LLU;
	uint32_t x856 = UINT32_MAX;
	static volatile uint32_t t104 = UINT32_MAX;

    t104 = ((x853%(x854>x855))|x856);

    if (t104 != UINT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x866 = INT32_MAX;
	volatile uint16_t x867 = 3U;
	int32_t x868 = 4;
	int32_t t105 = 14985353;

    t105 = ((x865%(x866>x867))|x868);

    if (t105 != 4) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x877 = INT8_MIN;
	int64_t x878 = 2026722789828283LL;
	int64_t x879 = INT64_MIN;
	static volatile int8_t x880 = -1;
	static int32_t t106 = 5370;

    t106 = ((x877%(x878>x879))|x880);

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x893 = 0U;
	static uint32_t x894 = 24U;
	int64_t x895 = -8994026729LL;
	volatile uint8_t x896 = 0U;
	uint32_t t107 = 228663U;

    t107 = ((x893%(x894>x895))|x896);

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x897 = INT8_MIN;
	uint64_t x899 = 820167449400825LLU;
	static volatile int32_t x900 = -1;
	volatile int32_t t108 = -51309;

    t108 = ((x897%(x898>x899))|x900);

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x901 = 7U;
	static int64_t x903 = -1LL;
	uint32_t x904 = 5597765U;
	uint32_t t109 = 17U;

    t109 = ((x901%(x902>x903))|x904);

    if (t109 != 5597765U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x909 = INT64_MIN;
	volatile int16_t x910 = 683;
	uint8_t x911 = 3U;
	int64_t x912 = INT64_MAX;
	int64_t t110 = INT64_MAX;

    t110 = ((x909%(x910>x911))|x912);

    if (t110 != INT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x913 = 21;
	volatile uint64_t x914 = UINT64_MAX;
	uint8_t x915 = 45U;
	int32_t x916 = INT32_MIN;
	int32_t t111 = INT32_MIN;

    t111 = ((x913%(x914>x915))|x916);

    if (t111 != INT32_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x918 = UINT8_MAX;
	int64_t x919 = INT64_MIN;
	volatile int64_t x920 = -1LL;
	volatile int64_t t112 = 9722820127457LL;

    t112 = ((x917%(x918>x919))|x920);

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x929 = 2U;
	volatile uint16_t x930 = UINT16_MAX;
	uint8_t x931 = 0U;
	volatile int8_t x932 = 1;
	volatile int32_t t113 = 5197793;

    t113 = ((x929%(x930>x931))|x932);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x933 = -1LL;
	volatile int8_t x934 = INT8_MIN;
	volatile uint32_t x935 = 499749U;
	int32_t x936 = -1339;
	static int64_t t114 = -537530901LL;

    t114 = ((x933%(x934>x935))|x936);

    if (t114 != -1339LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x941 = 3850U;
	int8_t x942 = 63;
	int64_t x943 = -1059742087491LL;
	volatile uint64_t x944 = 180766LLU;
	uint64_t t115 = 385654173336598730LLU;

    t115 = ((x941%(x942>x943))|x944);

    if (t115 != 180766LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x953 = 13389542437685729LLU;
	volatile int8_t x954 = INT8_MIN;
	int64_t x955 = INT64_MIN;
	int8_t x956 = INT8_MIN;
	uint64_t t116 = 58LLU;

    t116 = ((x953%(x954>x955))|x956);

    if (t116 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x957 = -1;
	int32_t x958 = INT32_MAX;
	volatile uint16_t x959 = 8U;
	int16_t x960 = 9;
	int32_t t117 = 3053;

    t117 = ((x957%(x958>x959))|x960);

    if (t117 != 9) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x970 = INT64_MAX;
	uint32_t x971 = 4744920U;
	int64_t x972 = -7393993052546LL;
	int64_t t118 = -197576643734LL;

    t118 = ((x969%(x970>x971))|x972);

    if (t118 != -7393993052546LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x973 = 7480059372LLU;
	int64_t x974 = INT64_MAX;
	volatile uint64_t x975 = 1396544337523634046LLU;
	int16_t x976 = -1;
	volatile uint64_t t119 = UINT64_MAX;

    t119 = ((x973%(x974>x975))|x976);

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x1005 = UINT32_MAX;
	uint32_t x1007 = 4U;
	int16_t x1008 = INT16_MIN;
	volatile uint32_t t120 = 33U;

    t120 = ((x1005%(x1006>x1007))|x1008);

    if (t120 != 4294934528U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x1009 = -1;
	int8_t x1010 = -3;
	static uint64_t x1011 = 1507LLU;
	uint64_t t121 = UINT64_MAX;

    t121 = ((x1009%(x1010>x1011))|x1012);

    if (t121 != UINT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x1013 = INT8_MIN;
	int8_t x1014 = 1;
	static volatile int64_t x1015 = -1LL;
	static uint8_t x1016 = 3U;
	static volatile int32_t t122 = -13;

    t122 = ((x1013%(x1014>x1015))|x1016);

    if (t122 != 3) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x1017 = UINT32_MAX;
	volatile int64_t x1018 = 46074623LL;
	int16_t x1020 = -1;
	uint32_t t123 = UINT32_MAX;

    t123 = ((x1017%(x1018>x1019))|x1020);

    if (t123 != UINT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x1021 = -1;
	volatile int64_t x1022 = 274776LL;
	volatile int64_t x1023 = -1LL;
	int64_t x1024 = -1LL;
	static volatile int64_t t124 = 2243585LL;

    t124 = ((x1021%(x1022>x1023))|x1024);

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x1026 = -16;
	static int64_t x1027 = INT64_MIN;
	int64_t x1028 = INT64_MIN;
	int64_t t125 = INT64_MIN;

    t125 = ((x1025%(x1026>x1027))|x1028);

    if (t125 != INT64_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x1030 = 58;
	static volatile uint8_t x1031 = 2U;
	volatile uint64_t x1032 = 10661LLU;

    t126 = ((x1029%(x1030>x1031))|x1032);

    if (t126 != 10661LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int8_t x1033 = INT8_MIN;
	int64_t x1034 = -1LL;
	int32_t x1035 = INT32_MIN;
	uint8_t x1036 = UINT8_MAX;

    t127 = ((x1033%(x1034>x1035))|x1036);

    if (t127 != 255) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x1037 = UINT16_MAX;

    t128 = ((x1037%(x1038>x1039))|x1040);

    if (t128 != 922819929794LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x1046 = -26;
	static int8_t x1047 = INT8_MIN;
	uint16_t x1048 = 2011U;
	int32_t t129 = 31122;

    t129 = ((x1045%(x1046>x1047))|x1048);

    if (t129 != 2011) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x1062 = 4;
	volatile uint32_t t130 = 9573U;

    t130 = ((x1061%(x1062>x1063))|x1064);

    if (t130 != 25397U) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x1073 = INT16_MIN;
	uint8_t x1074 = 116U;
	int16_t x1075 = 0;
	uint8_t x1076 = UINT8_MAX;

    t131 = ((x1073%(x1074>x1075))|x1076);

    if (t131 != 255) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x1081 = INT16_MIN;
	int16_t x1082 = 767;
	uint8_t x1083 = 29U;
	uint16_t x1084 = UINT16_MAX;
	volatile int32_t t132 = 152978007;

    t132 = ((x1081%(x1082>x1083))|x1084);

    if (t132 != 65535) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x1101 = -1;
	volatile int8_t x1102 = -1;
	int64_t x1103 = INT64_MIN;
	static volatile int32_t t133 = 62;

    t133 = ((x1101%(x1102>x1103))|x1104);

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x1117 = UINT16_MAX;
	uint8_t x1118 = UINT8_MAX;
	uint8_t x1119 = 28U;

    t134 = ((x1117%(x1118>x1119))|x1120);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x1121 = 15U;
	int32_t x1123 = INT32_MIN;
	int16_t x1124 = INT16_MAX;
	volatile int32_t t135 = -3;

    t135 = ((x1121%(x1122>x1123))|x1124);

    if (t135 != 32767) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x1125 = UINT64_MAX;
	int32_t x1126 = 5331921;
	int64_t x1128 = -1LL;
	uint64_t t136 = UINT64_MAX;

    t136 = ((x1125%(x1126>x1127))|x1128);

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x1137 = -47;
	int64_t x1139 = INT64_MIN;
	int8_t x1140 = INT8_MAX;
	static int32_t t137 = -512059;

    t137 = ((x1137%(x1138>x1139))|x1140);

    if (t137 != 127) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x1149 = INT16_MIN;
	volatile int32_t x1150 = 169;
	volatile int64_t x1151 = INT64_MIN;
	int64_t x1152 = INT64_MIN;

    t138 = ((x1149%(x1150>x1151))|x1152);

    if (t138 != INT64_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x1153 = INT32_MIN;
	static uint16_t x1154 = UINT16_MAX;
	static int8_t x1155 = INT8_MIN;
	volatile int64_t x1156 = INT64_MIN;
	int64_t t139 = INT64_MIN;

    t139 = ((x1153%(x1154>x1155))|x1156);

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x1169 = INT16_MIN;
	int64_t x1170 = -1LL;
	volatile int16_t x1171 = -12;
	volatile int32_t t140 = -1262853;

    t140 = ((x1169%(x1170>x1171))|x1172);

    if (t140 != 121) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x1181 = 1462;
	uint16_t x1182 = 766U;
	uint8_t x1183 = UINT8_MAX;
	uint64_t x1184 = UINT64_MAX;
	volatile uint64_t t141 = UINT64_MAX;

    t141 = ((x1181%(x1182>x1183))|x1184);

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x1193 = -1;
	int8_t x1194 = -3;
	int64_t x1195 = INT64_MIN;
	volatile int32_t t142 = -5425590;

    t142 = ((x1193%(x1194>x1195))|x1196);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint64_t x1197 = UINT64_MAX;
	uint32_t x1198 = UINT32_MAX;
	static int16_t x1199 = INT16_MIN;
	static int32_t x1200 = INT32_MIN;
	uint64_t t143 = 6210727LLU;

    t143 = ((x1197%(x1198>x1199))|x1200);

    if (t143 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x1201 = INT8_MIN;
	int16_t x1203 = 1;
	int16_t x1204 = 2700;
	int32_t t144 = -90;

    t144 = ((x1201%(x1202>x1203))|x1204);

    if (t144 != 2700) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x1209 = INT32_MAX;
	int32_t x1212 = 82582938;
	volatile int32_t t145 = 15131697;

    t145 = ((x1209%(x1210>x1211))|x1212);

    if (t145 != 82582938) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x1217 = INT32_MIN;
	int32_t x1218 = -468719424;
	static uint64_t x1220 = 252429158848250121LLU;
	volatile uint64_t t146 = 1259754037294LLU;

    t146 = ((x1217%(x1218>x1219))|x1220);

    if (t146 != 252429158848250121LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x1229 = INT64_MIN;
	int8_t x1230 = INT8_MAX;
	uint16_t x1231 = 3U;
	volatile int64_t t147 = 243085463772906848LL;

    t147 = ((x1229%(x1230>x1231))|x1232);

    if (t147 != -2147483648LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x1233 = 17688944734688349LLU;
	int16_t x1235 = -1;
	int16_t x1236 = -1;
	static uint64_t t148 = UINT64_MAX;

    t148 = ((x1233%(x1234>x1235))|x1236);

    if (t148 != UINT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1242 = -18;
	int8_t x1243 = -21;
	int64_t x1244 = INT64_MAX;
	int64_t t149 = INT64_MAX;

    t149 = ((x1241%(x1242>x1243))|x1244);

    if (t149 != INT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1249 = INT16_MAX;
	int32_t x1250 = 56893717;
	static volatile uint32_t x1252 = UINT32_MAX;

    t150 = ((x1249%(x1250>x1251))|x1252);

    if (t150 != UINT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x1257 = 59U;
	static int16_t x1258 = INT16_MAX;
	static volatile int32_t x1259 = -515071020;
	int64_t t151 = -3854334655642084764LL;

    t151 = ((x1257%(x1258>x1259))|x1260);

    if (t151 != 1928049LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x1261 = -13335;
	int64_t x1262 = -5774LL;
	int32_t x1263 = INT32_MIN;
	volatile int16_t x1264 = -1;
	int32_t t152 = -1509374;

    t152 = ((x1261%(x1262>x1263))|x1264);

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x1282 = -1LL;
	volatile int64_t x1283 = INT64_MIN;
	int16_t x1284 = -480;
	volatile uint32_t t153 = 7803055U;

    t153 = ((x1281%(x1282>x1283))|x1284);

    if (t153 != 4294966816U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x1293 = 0U;
	static int8_t x1295 = INT8_MIN;
	volatile int64_t x1296 = INT64_MAX;
	int64_t t154 = INT64_MAX;

    t154 = ((x1293%(x1294>x1295))|x1296);

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x1297 = UINT64_MAX;
	int64_t x1298 = INT64_MAX;
	uint8_t x1299 = 1U;
	int32_t x1300 = INT32_MAX;
	volatile uint64_t t155 = 7359868353795023190LLU;

    t155 = ((x1297%(x1298>x1299))|x1300);

    if (t155 != 2147483647LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1302 = -198;
	int8_t x1304 = -1;
	volatile uint32_t t156 = UINT32_MAX;

    t156 = ((x1301%(x1302>x1303))|x1304);

    if (t156 != UINT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x1309 = -1;
	int32_t x1310 = INT32_MIN;
	volatile int32_t t157 = -1;

    t157 = ((x1309%(x1310>x1311))|x1312);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x1313 = UINT32_MAX;
	volatile int64_t x1314 = 21LL;
	int8_t x1315 = -1;
	uint32_t x1316 = 4U;
	volatile uint32_t t158 = 16362U;

    t158 = ((x1313%(x1314>x1315))|x1316);

    if (t158 != 4U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x1321 = 74228U;
	int64_t x1322 = -1LL;
	uint64_t x1323 = 184LLU;
	uint64_t x1324 = 0LLU;
	volatile uint64_t t159 = 31473030579724236LLU;

    t159 = ((x1321%(x1322>x1323))|x1324);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x1339 = -121;
	int32_t x1340 = -8362;
	int32_t t160 = -9716;

    t160 = ((x1337%(x1338>x1339))|x1340);

    if (t160 != -8362) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x1345 = 48U;
	static volatile int8_t x1346 = INT8_MIN;
	int32_t x1347 = INT32_MIN;
	int8_t x1348 = -1;
	int32_t t161 = -266968256;

    t161 = ((x1345%(x1346>x1347))|x1348);

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x1370 = INT32_MAX;
	static int32_t x1371 = -3660;
	uint8_t x1372 = 0U;
	int32_t t162 = 2905143;

    t162 = ((x1369%(x1370>x1371))|x1372);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x1377 = UINT32_MAX;
	uint32_t x1378 = 123309776U;
	volatile uint32_t x1379 = 24U;

    t163 = ((x1377%(x1378>x1379))|x1380);

    if (t163 != 31U) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1381 = INT16_MIN;
	int8_t x1382 = INT8_MAX;
	int16_t x1384 = INT16_MAX;

    t164 = ((x1381%(x1382>x1383))|x1384);

    if (t164 != 32767) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1391 = INT32_MIN;
	int64_t t165 = -4163079656LL;

    t165 = ((x1389%(x1390>x1391))|x1392);

    if (t165 != 730876LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x1393 = 496040548440LL;
	int32_t x1394 = 150;
	int32_t x1395 = INT32_MIN;
	int64_t x1396 = INT64_MIN;
	int64_t t166 = INT64_MIN;

    t166 = ((x1393%(x1394>x1395))|x1396);

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x1409 = UINT32_MAX;
	int16_t x1410 = INT16_MIN;
	uint32_t x1411 = 351627U;
	uint16_t x1412 = 56U;
	volatile uint32_t t167 = 0U;

    t167 = ((x1409%(x1410>x1411))|x1412);

    if (t167 != 56U) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1417 = INT8_MIN;
	int8_t x1418 = 1;
	int32_t x1419 = -1;
	static int16_t x1420 = INT16_MIN;
	int32_t t168 = 11226788;

    t168 = ((x1417%(x1418>x1419))|x1420);

    if (t168 != -32768) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x1421 = 10487154LLU;
	static int64_t x1422 = 7754913657530185LL;
	static int32_t x1423 = INT32_MIN;
	int32_t x1424 = -54;
	volatile uint64_t t169 = 25694070073823LLU;

    t169 = ((x1421%(x1422>x1423))|x1424);

    if (t169 != 18446744073709551562LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1429 = INT16_MAX;
	uint8_t x1431 = 1U;
	int16_t x1432 = -1;

    t170 = ((x1429%(x1430>x1431))|x1432);

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x1445 = 391026227424227785LL;
	uint32_t x1446 = UINT32_MAX;
	int16_t x1447 = INT16_MAX;
	volatile uint8_t x1448 = 4U;
	volatile int64_t t171 = 109296952LL;

    t171 = ((x1445%(x1446>x1447))|x1448);

    if (t171 != 4LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x1450 = 1U;
	static volatile uint8_t x1452 = 9U;
	int64_t t172 = -2740979551925450570LL;

    t172 = ((x1449%(x1450>x1451))|x1452);

    if (t172 != 9LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1453 = 6U;
	int8_t x1454 = INT8_MAX;
	int16_t x1455 = -111;
	static volatile int32_t x1456 = INT32_MIN;
	volatile int32_t t173 = INT32_MIN;

    t173 = ((x1453%(x1454>x1455))|x1456);

    if (t173 != INT32_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x1457 = INT32_MIN;
	uint32_t x1458 = 250958U;
	int64_t x1459 = INT64_MIN;
	uint64_t x1460 = UINT64_MAX;
	uint64_t t174 = UINT64_MAX;

    t174 = ((x1457%(x1458>x1459))|x1460);

    if (t174 != UINT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1462 = INT8_MIN;
	static uint64_t t175 = 2LLU;

    t175 = ((x1461%(x1462>x1463))|x1464);

    if (t175 != 117468214LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1465 = 12090LL;
	uint8_t x1466 = UINT8_MAX;
	static volatile int64_t x1467 = -59199386924673LL;
	volatile int16_t x1468 = INT16_MIN;
	int64_t t176 = 85844573LL;

    t176 = ((x1465%(x1466>x1467))|x1468);

    if (t176 != -32768LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x1477 = INT32_MAX;
	uint32_t x1478 = UINT32_MAX;
	int8_t x1479 = INT8_MAX;
	int32_t x1480 = 2;
	static volatile int32_t t177 = 1;

    t177 = ((x1477%(x1478>x1479))|x1480);

    if (t177 != 2) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1481 = INT8_MAX;
	static int64_t x1483 = INT64_MIN;
	uint32_t x1484 = 152890U;

    t178 = ((x1481%(x1482>x1483))|x1484);

    if (t178 != 152890U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1490 = 6342665LLU;

    t179 = ((x1489%(x1490>x1491))|x1492);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1493 = INT32_MIN;
	int8_t x1495 = -20;
	uint8_t x1496 = UINT8_MAX;
	static volatile int32_t t180 = 2326728;

    t180 = ((x1493%(x1494>x1495))|x1496);

    if (t180 != 255) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x1497 = INT8_MIN;
	int32_t x1498 = 97475;
	static int16_t x1499 = INT16_MAX;
	static volatile int8_t x1500 = INT8_MIN;
	int32_t t181 = -2143;

    t181 = ((x1497%(x1498>x1499))|x1500);

    if (t181 != -128) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x1501 = 3334896;
	uint32_t x1502 = UINT32_MAX;
	int32_t x1503 = INT32_MIN;
	uint64_t x1504 = UINT64_MAX;
	static uint64_t t182 = UINT64_MAX;

    t182 = ((x1501%(x1502>x1503))|x1504);

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1509 = 3LLU;
	int32_t x1510 = -1;
	uint32_t x1511 = 42U;
	int32_t x1512 = INT32_MAX;
	volatile uint64_t t183 = 752605LLU;

    t183 = ((x1509%(x1510>x1511))|x1512);

    if (t183 != 2147483647LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x1513 = -5;
	int64_t x1514 = 27LL;
	uint8_t x1515 = 4U;
	int8_t x1516 = INT8_MIN;
	int32_t t184 = -6523958;

    t184 = ((x1513%(x1514>x1515))|x1516);

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x1522 = INT64_MAX;
	static uint64_t x1523 = 244944902LLU;
	uint16_t x1524 = UINT16_MAX;
	volatile uint32_t t185 = 42465U;

    t185 = ((x1521%(x1522>x1523))|x1524);

    if (t185 != 65535U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1533 = -1LL;
	int32_t x1534 = INT32_MAX;
	int64_t x1535 = INT64_MIN;
	volatile int64_t x1536 = -542084896659182LL;
	volatile int64_t t186 = -123881359LL;

    t186 = ((x1533%(x1534>x1535))|x1536);

    if (t186 != -542084896659182LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint16_t x1537 = 0U;
	int32_t x1538 = 2;
	int64_t x1539 = -1LL;
	volatile uint16_t x1540 = UINT16_MAX;

    t187 = ((x1537%(x1538>x1539))|x1540);

    if (t187 != 65535) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1545 = 47;
	static uint8_t x1546 = 61U;
	int32_t x1547 = -1;
	volatile int16_t x1548 = INT16_MIN;
	static volatile int32_t t188 = -24959163;

    t188 = ((x1545%(x1546>x1547))|x1548);

    if (t188 != -32768) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x1549 = 0U;
	int8_t x1551 = INT8_MAX;
	int32_t x1552 = INT32_MIN;
	int32_t t189 = INT32_MIN;

    t189 = ((x1549%(x1550>x1551))|x1552);

    if (t189 != INT32_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x1553 = 24U;
	int16_t x1554 = -1974;
	int16_t x1555 = INT16_MIN;
	int32_t x1556 = INT32_MIN;
	int32_t t190 = INT32_MIN;

    t190 = ((x1553%(x1554>x1555))|x1556);

    if (t190 != INT32_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1561 = INT64_MIN;
	volatile int16_t x1562 = -30;
	int16_t x1563 = INT16_MIN;
	uint32_t x1564 = UINT32_MAX;
	int64_t t191 = -752825746109408260LL;

    t191 = ((x1561%(x1562>x1563))|x1564);

    if (t191 != 4294967295LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1569 = 209914704853294001LLU;
	uint32_t x1570 = UINT32_MAX;
	int32_t x1571 = 495;
	uint64_t t192 = 3719596282793547339LLU;

    t192 = ((x1569%(x1570>x1571))|x1572);

    if (t192 != 65535LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1577 = INT16_MIN;
	uint64_t x1578 = 33620247269901734LLU;
	int16_t x1579 = 211;
	int8_t x1580 = 0;
	static int32_t t193 = 184307;

    t193 = ((x1577%(x1578>x1579))|x1580);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1585 = 1254661991U;
	int64_t x1586 = INT64_MAX;
	int8_t x1587 = INT8_MIN;
	volatile uint32_t t194 = UINT32_MAX;

    t194 = ((x1585%(x1586>x1587))|x1588);

    if (t194 != UINT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x1593 = INT8_MIN;
	volatile int16_t x1594 = -1;
	int8_t x1595 = INT8_MIN;
	int64_t x1596 = INT64_MIN;
	volatile int64_t t195 = INT64_MIN;

    t195 = ((x1593%(x1594>x1595))|x1596);

    if (t195 != INT64_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1597 = UINT16_MAX;
	int64_t x1598 = 803766635602LL;
	volatile int64_t x1599 = 801951993LL;
	int8_t x1600 = -11;
	static volatile int32_t t196 = 7;

    t196 = ((x1597%(x1598>x1599))|x1600);

    if (t196 != -11) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int32_t x1602 = -1;
	volatile uint32_t x1604 = 5U;
	uint32_t t197 = 0U;

    t197 = ((x1601%(x1602>x1603))|x1604);

    if (t197 != 5U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1617 = UINT64_MAX;
	uint32_t x1618 = 426750U;
	static volatile int64_t x1619 = -1LL;
	int64_t x1620 = INT64_MAX;

    t198 = ((x1617%(x1618>x1619))|x1620);

    if (t198 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1621 = 276;
	static uint64_t x1622 = 1564069722LLU;
	volatile uint32_t x1624 = 18995098U;
	volatile uint32_t t199 = 553U;

    t199 = ((x1621%(x1622>x1623))|x1624);

    if (t199 != 18995098U) { NG(); } else { ; }
	
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


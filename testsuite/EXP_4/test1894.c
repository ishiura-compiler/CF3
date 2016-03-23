
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

int32_t x10 = INT32_MIN;
volatile int32_t x11 = INT32_MIN;
int64_t t0 = INT64_MIN;
int16_t x33 = 16;
int16_t x49 = INT16_MAX;
int8_t x51 = -1;
static int32_t t2 = 680213;
static volatile int32_t x72 = INT32_MIN;
int32_t t7 = -7557;
int8_t x99 = INT8_MIN;
int64_t x100 = -3745055053LL;
int32_t x110 = -1;
int16_t x115 = INT16_MAX;
int32_t t11 = 3;
int64_t x163 = INT64_MAX;
static int16_t x164 = INT16_MIN;
volatile int8_t x172 = 20;
uint32_t x173 = 83988697U;
volatile uint8_t x189 = UINT8_MAX;
volatile int32_t x190 = INT32_MIN;
static uint32_t x195 = 18361U;
static int32_t x196 = -12923640;
int32_t x202 = INT32_MIN;
static int32_t x206 = INT32_MIN;
int64_t t25 = -296193870LL;
static uint8_t x233 = 1U;
volatile int8_t x274 = -1;
int64_t t30 = INT64_MIN;
int64_t x281 = -1LL;
int16_t x284 = -795;
int8_t x290 = -1;
int8_t x298 = INT8_MIN;
int8_t x305 = INT8_MIN;
int64_t x307 = 0LL;
uint8_t x309 = 63U;
static int64_t x314 = INT64_MIN;
static int64_t x315 = INT64_MIN;
static int16_t x325 = INT16_MIN;
volatile uint32_t x328 = 973598U;
int64_t x349 = INT64_MAX;
volatile int8_t x362 = 0;
uint32_t x364 = UINT32_MAX;
int64_t x383 = INT64_MIN;
int8_t x384 = 19;
int16_t x440 = -1;
int8_t x477 = -1;
volatile int8_t x485 = INT8_MIN;
uint32_t x488 = 1169381771U;
volatile int32_t t54 = 0;
static uint16_t x520 = UINT16_MAX;
volatile int8_t x526 = 0;
static int8_t x528 = -10;
static int64_t x556 = INT64_MIN;
int16_t x573 = INT16_MIN;
static int64_t x576 = -117194LL;
volatile uint32_t x587 = UINT32_MAX;
volatile int32_t t62 = -1;
volatile uint32_t x596 = 56215U;
volatile int32_t t68 = -62;
volatile int32_t t70 = 4324;
int64_t x646 = INT64_MIN;
uint32_t x647 = 15U;
volatile int32_t x650 = INT32_MIN;
volatile uint16_t x664 = 399U;
int32_t t74 = -1970147;
int16_t x680 = INT16_MAX;
int16_t x682 = -238;
int32_t x700 = INT32_MIN;
static int8_t x707 = INT8_MIN;
int64_t x713 = -1LL;
int16_t x735 = -1;
int8_t x741 = 1;
int32_t x742 = INT32_MIN;
int8_t x744 = INT8_MAX;
int32_t t84 = -438;
uint64_t x755 = 32638LLU;
volatile int32_t t86 = -51465;
int64_t x773 = -1LL;
int64_t t88 = -3650506187328810106LL;
uint16_t x784 = 2U;
uint16_t x791 = 2448U;
volatile int8_t x804 = INT8_MIN;
static int64_t x809 = INT64_MIN;
uint64_t t95 = UINT64_MAX;
volatile uint64_t t98 = 2886836421448656123LLU;
int16_t x854 = 0;
volatile int64_t x855 = INT64_MIN;
uint8_t x857 = 4U;
static int32_t t100 = 6532;
int32_t t101 = -155550288;
uint8_t x865 = 6U;
volatile int8_t x867 = INT8_MAX;
int32_t t102 = -1;
static uint64_t x877 = 79402718702619LLU;
volatile uint64_t t103 = 15LLU;
volatile int64_t x887 = -2879516187LL;
int8_t x888 = INT8_MIN;
volatile uint64_t x892 = 1857445819LLU;
volatile int32_t t105 = 1;
static int8_t x894 = 0;
uint8_t x909 = UINT8_MAX;
int16_t x928 = -1;
uint16_t x932 = 753U;
uint64_t x936 = UINT64_MAX;
volatile int64_t t111 = INT64_MIN;
uint8_t x956 = 28U;
volatile int32_t t115 = INT32_MIN;
static int64_t x1012 = INT64_MAX;
volatile int16_t x1013 = 3;
static int32_t t118 = -279;
int16_t x1047 = INT16_MIN;
static volatile int32_t t122 = -9;
uint16_t x1052 = 1U;
volatile int64_t x1058 = -1LL;
int32_t t124 = 18;
static volatile uint32_t x1065 = 12938U;
int64_t x1066 = -1LL;
int32_t x1071 = 1787;
int16_t x1074 = 0;
int32_t x1075 = 6210964;
uint64_t x1089 = 4056LLU;
int8_t x1090 = INT8_MIN;
volatile int32_t x1125 = INT32_MAX;
int8_t x1146 = -1;
volatile uint32_t x1159 = 7U;
volatile int32_t t138 = -232731;
volatile uint32_t x1179 = 24387U;
int32_t x1180 = INT32_MAX;
static volatile int64_t x1223 = INT64_MIN;
int16_t x1226 = INT16_MIN;
int8_t x1241 = INT8_MAX;
volatile int8_t x1247 = INT8_MIN;
volatile int32_t t148 = 7701778;
uint64_t x1255 = 82944538473863LLU;
int8_t x1261 = -1;
uint16_t x1265 = 104U;
static int64_t x1301 = INT64_MIN;
int8_t x1305 = INT8_MAX;
int64_t x1306 = -1LL;
int32_t x1321 = -1;
int32_t x1322 = -73;
int8_t x1323 = INT8_MAX;
int64_t x1325 = -2181348279294LL;
int8_t x1327 = -35;
volatile int16_t x1333 = INT16_MIN;
static int32_t t158 = -449622;
static volatile int8_t x1342 = -1;
int32_t x1344 = INT32_MAX;
int64_t x1350 = INT64_MIN;
int64_t x1364 = 26161511281LL;
volatile int32_t t166 = -5421;
int16_t x1398 = INT16_MIN;
volatile int32_t t167 = 4;
uint8_t x1408 = 97U;
volatile int32_t t168 = 478395;
static volatile int8_t x1430 = INT8_MIN;
int32_t x1433 = 7774;
int64_t x1453 = -1LL;
uint32_t x1463 = 85867225U;
uint8_t x1473 = 35U;
int32_t x1480 = INT32_MIN;
uint32_t x1487 = UINT32_MAX;
int64_t t177 = -93789794356LL;
static int32_t x1499 = -1;
static uint32_t t179 = UINT32_MAX;
int8_t x1515 = INT8_MAX;
static int64_t x1525 = 151282745181LL;
int32_t x1530 = INT32_MIN;
static int8_t x1538 = INT8_MIN;
int64_t x1540 = -1LL;
int8_t x1551 = INT8_MAX;
int64_t x1552 = INT64_MIN;
static int16_t x1584 = INT16_MIN;
volatile int32_t x1589 = INT32_MAX;
uint8_t x1591 = 29U;
volatile int32_t t189 = INT32_MAX;
volatile uint64_t x1599 = 11LLU;
volatile int32_t t190 = -29;
static int32_t x1609 = INT32_MIN;
int32_t t191 = INT32_MIN;
volatile int8_t x1613 = INT8_MIN;
volatile int32_t t192 = -144469;
uint64_t x1629 = 12168214LLU;
int32_t x1630 = INT32_MIN;
volatile int16_t x1631 = INT16_MAX;
volatile int32_t x1648 = INT32_MIN;
int8_t x1653 = -15;
uint32_t x1655 = 88171724U;
int8_t x1660 = INT8_MIN;
volatile int8_t x1664 = 44;


void f0(void) {
    	static volatile int64_t x9 = INT64_MIN;
	static volatile uint32_t x12 = UINT32_MAX;

    t0 = (x9/(x10<=(x11<=x12)));

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x34 = -2;
	uint16_t x35 = 62U;
	static volatile int32_t x36 = -1;
	int32_t t1 = -10403;

    t1 = (x33/(x34<=(x35<=x36)));

    if (t1 != 16) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x50 = -3;
	static int16_t x52 = INT16_MIN;

    t2 = (x49/(x50<=(x51<=x52)));

    if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x61 = INT32_MIN;
	uint32_t x62 = 0U;
	int16_t x63 = 39;
	static int16_t x64 = INT16_MIN;
	int32_t t3 = INT32_MIN;

    t3 = (x61/(x62<=(x63<=x64)));

    if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x69 = 3277443293888LLU;
	int64_t x70 = -16474175679LL;
	static int64_t x71 = INT64_MIN;
	uint64_t t4 = 179671188620654076LLU;

    t4 = (x69/(x70<=(x71<=x72)));

    if (t4 != 3277443293888LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x73 = INT32_MIN;
	int64_t x74 = -40LL;
	int32_t x75 = INT32_MIN;
	static int8_t x76 = -1;
	int32_t t5 = INT32_MIN;

    t5 = (x73/(x74<=(x75<=x76)));

    if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x77 = 1186U;
	uint16_t x78 = 0U;
	int32_t x79 = 24954057;
	int32_t x80 = INT32_MIN;
	volatile int32_t t6 = 955;

    t6 = (x77/(x78<=(x79<=x80)));

    if (t6 != 1186) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x89 = 659610554;
	int8_t x90 = INT8_MIN;
	static volatile int32_t x91 = INT32_MIN;
	int64_t x92 = INT64_MIN;

    t7 = (x89/(x90<=(x91<=x92)));

    if (t7 != 659610554) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x97 = 865492964527LLU;
	int16_t x98 = -5811;
	uint64_t t8 = 1374243165528798LLU;

    t8 = (x97/(x98<=(x99<=x100)));

    if (t8 != 865492964527LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x105 = INT64_MIN;
	int16_t x106 = INT16_MIN;
	int64_t x107 = -220LL;
	int64_t x108 = 615874676189084875LL;
	int64_t t9 = INT64_MIN;

    t9 = (x105/(x106<=(x107<=x108)));

    if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x109 = -1;
	int16_t x111 = INT16_MAX;
	int64_t x112 = -92981LL;
	int32_t t10 = -14;

    t10 = (x109/(x110<=(x111<=x112)));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x113 = INT16_MIN;
	int64_t x114 = -1LL;
	int16_t x116 = INT16_MIN;

    t11 = (x113/(x114<=(x115<=x116)));

    if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x125 = INT8_MAX;
	int64_t x126 = -1LL;
	int16_t x127 = INT16_MAX;
	int64_t x128 = INT64_MIN;
	static int32_t t12 = 288168;

    t12 = (x125/(x126<=(x127<=x128)));

    if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x129 = -1;
	static volatile int64_t x130 = INT64_MIN;
	volatile int8_t x131 = INT8_MAX;
	int16_t x132 = INT16_MAX;
	volatile int32_t t13 = -182999;

    t13 = (x129/(x130<=(x131<=x132)));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x157 = 3188U;
	int16_t x158 = -1;
	int8_t x159 = INT8_MIN;
	int8_t x160 = 0;
	static int32_t t14 = 27726295;

    t14 = (x157/(x158<=(x159<=x160)));

    if (t14 != 3188) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x161 = INT32_MIN;
	static int16_t x162 = -1;
	static int32_t t15 = INT32_MIN;

    t15 = (x161/(x162<=(x163<=x164)));

    if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x169 = INT32_MAX;
	int8_t x170 = INT8_MIN;
	int64_t x171 = INT64_MAX;
	int32_t t16 = INT32_MAX;

    t16 = (x169/(x170<=(x171<=x172)));

    if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x174 = -1LL;
	static uint16_t x175 = UINT16_MAX;
	uint64_t x176 = 73690860LLU;
	static uint32_t t17 = 41U;

    t17 = (x173/(x174<=(x175<=x176)));

    if (t17 != 83988697U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x177 = UINT8_MAX;
	int64_t x178 = INT64_MIN;
	volatile uint8_t x179 = 0U;
	int32_t x180 = INT32_MAX;
	int32_t t18 = 6;

    t18 = (x177/(x178<=(x179<=x180)));

    if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x191 = 230049026392736LLU;
	static volatile int32_t x192 = -7844;
	int32_t t19 = 16;

    t19 = (x189/(x190<=(x191<=x192)));

    if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x193 = -1;
	volatile int16_t x194 = INT16_MIN;
	volatile int32_t t20 = -150;

    t20 = (x193/(x194<=(x195<=x196)));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x201 = 1U;
	int32_t x203 = INT32_MIN;
	int8_t x204 = INT8_MIN;
	volatile int32_t t21 = 1019957;

    t21 = (x201/(x202<=(x203<=x204)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x205 = UINT8_MAX;
	static int8_t x207 = -1;
	int32_t x208 = INT32_MIN;
	int32_t t22 = -131;

    t22 = (x205/(x206<=(x207<=x208)));

    if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x209 = 1031556U;
	int32_t x210 = -847647;
	static int64_t x211 = INT64_MIN;
	volatile int64_t x212 = -1LL;
	uint32_t t23 = 36099726U;

    t23 = (x209/(x210<=(x211<=x212)));

    if (t23 != 1031556U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x213 = -2;
	static volatile int64_t x214 = -2043149985810LL;
	int8_t x215 = -1;
	uint32_t x216 = 0U;
	volatile int32_t t24 = 0;

    t24 = (x213/(x214<=(x215<=x216)));

    if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x221 = -1LL;
	int8_t x222 = -1;
	uint8_t x223 = 5U;
	int16_t x224 = -2045;

    t25 = (x221/(x222<=(x223<=x224)));

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x234 = INT8_MIN;
	static uint64_t x235 = 21013LLU;
	int32_t x236 = INT32_MAX;
	int32_t t26 = 3383;

    t26 = (x233/(x234<=(x235<=x236)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x241 = UINT64_MAX;
	static int16_t x242 = INT16_MIN;
	int8_t x243 = 1;
	int16_t x244 = INT16_MAX;
	static volatile uint64_t t27 = UINT64_MAX;

    t27 = (x241/(x242<=(x243<=x244)));

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x257 = INT8_MIN;
	volatile int8_t x258 = INT8_MIN;
	uint32_t x259 = 7560U;
	int64_t x260 = -1LL;
	volatile int32_t t28 = 177;

    t28 = (x257/(x258<=(x259<=x260)));

    if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x269 = INT32_MIN;
	int64_t x270 = INT64_MIN;
	int64_t x271 = INT64_MAX;
	int32_t x272 = -10;
	volatile int32_t t29 = INT32_MIN;

    t29 = (x269/(x270<=(x271<=x272)));

    if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x273 = INT64_MIN;
	int8_t x275 = INT8_MAX;
	volatile int8_t x276 = INT8_MAX;

    t30 = (x273/(x274<=(x275<=x276)));

    if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x282 = INT64_MIN;
	int64_t x283 = -8487060302876972LL;
	volatile int64_t t31 = -54954LL;

    t31 = (x281/(x282<=(x283<=x284)));

    if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x289 = -28;
	int16_t x291 = -1;
	int32_t x292 = INT32_MAX;
	volatile int32_t t32 = 7434;

    t32 = (x289/(x290<=(x291<=x292)));

    if (t32 != -28) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x297 = 55;
	int64_t x299 = -485LL;
	int16_t x300 = 2;
	int32_t t33 = 237;

    t33 = (x297/(x298<=(x299<=x300)));

    if (t33 != 55) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x306 = -1846;
	int32_t x308 = INT32_MAX;
	volatile int32_t t34 = 176292;

    t34 = (x305/(x306<=(x307<=x308)));

    if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x310 = -1;
	int32_t x311 = 30823;
	static volatile uint64_t x312 = UINT64_MAX;
	volatile int32_t t35 = 4262;

    t35 = (x309/(x310<=(x311<=x312)));

    if (t35 != 63) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x313 = INT32_MAX;
	int32_t x316 = INT32_MIN;
	static int32_t t36 = INT32_MAX;

    t36 = (x313/(x314<=(x315<=x316)));

    if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x317 = INT16_MAX;
	int64_t x318 = INT64_MIN;
	static uint64_t x319 = 8065731141LLU;
	uint64_t x320 = 484416566LLU;
	volatile int32_t t37 = -805;

    t37 = (x317/(x318<=(x319<=x320)));

    if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x326 = INT32_MIN;
	uint64_t x327 = 1LLU;
	volatile int32_t t38 = -1;

    t38 = (x325/(x326<=(x327<=x328)));

    if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x337 = INT16_MAX;
	int16_t x338 = INT16_MIN;
	static uint32_t x339 = 9107775U;
	static uint8_t x340 = UINT8_MAX;
	int32_t t39 = -10358841;

    t39 = (x337/(x338<=(x339<=x340)));

    if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x350 = INT32_MIN;
	int16_t x351 = 9043;
	int8_t x352 = INT8_MAX;
	int64_t t40 = INT64_MAX;

    t40 = (x349/(x350<=(x351<=x352)));

    if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x361 = INT16_MIN;
	volatile int32_t x363 = INT32_MIN;
	static volatile int32_t t41 = 309;

    t41 = (x361/(x362<=(x363<=x364)));

    if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x369 = -1;
	int64_t x370 = INT64_MIN;
	volatile int8_t x371 = INT8_MAX;
	int16_t x372 = INT16_MAX;
	volatile int32_t t42 = -55956040;

    t42 = (x369/(x370<=(x371<=x372)));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x381 = INT32_MIN;
	int8_t x382 = -1;
	volatile int32_t t43 = INT32_MIN;

    t43 = (x381/(x382<=(x383<=x384)));

    if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x385 = INT8_MIN;
	int64_t x386 = INT64_MIN;
	static uint8_t x387 = 2U;
	volatile int8_t x388 = -1;
	int32_t t44 = 1;

    t44 = (x385/(x386<=(x387<=x388)));

    if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x401 = -30997699;
	static volatile int16_t x402 = INT16_MIN;
	volatile int16_t x403 = INT16_MAX;
	int16_t x404 = INT16_MIN;
	static volatile int32_t t45 = -1;

    t45 = (x401/(x402<=(x403<=x404)));

    if (t45 != -30997699) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x405 = 66682305U;
	int64_t x406 = INT64_MIN;
	uint32_t x407 = 1114U;
	int16_t x408 = INT16_MIN;
	uint32_t t46 = 6599040U;

    t46 = (x405/(x406<=(x407<=x408)));

    if (t46 != 66682305U) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x417 = UINT16_MAX;
	static int32_t x418 = 1;
	int32_t x419 = INT32_MIN;
	static uint16_t x420 = 15U;
	volatile int32_t t47 = 232511;

    t47 = (x417/(x418<=(x419<=x420)));

    if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x433 = -1;
	int64_t x434 = INT64_MIN;
	int64_t x435 = -1LL;
	int8_t x436 = INT8_MIN;
	int32_t t48 = -85058;

    t48 = (x433/(x434<=(x435<=x436)));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x437 = 43642U;
	int64_t x438 = -1LL;
	int32_t x439 = 4137448;
	volatile uint32_t t49 = 36858U;

    t49 = (x437/(x438<=(x439<=x440)));

    if (t49 != 43642U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x441 = 5688U;
	int16_t x442 = -1;
	static int8_t x443 = INT8_MIN;
	int32_t x444 = INT32_MIN;
	int32_t t50 = -9;

    t50 = (x441/(x442<=(x443<=x444)));

    if (t50 != 5688) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x457 = -1;
	int32_t x458 = INT32_MIN;
	int8_t x459 = 54;
	volatile uint64_t x460 = 76530639568432LLU;
	volatile int32_t t51 = 240802;

    t51 = (x457/(x458<=(x459<=x460)));

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x478 = -36440821LL;
	int32_t x479 = INT32_MIN;
	int8_t x480 = INT8_MIN;
	volatile int32_t t52 = 82336399;

    t52 = (x477/(x478<=(x479<=x480)));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x486 = INT8_MIN;
	uint8_t x487 = UINT8_MAX;
	int32_t t53 = 22;

    t53 = (x485/(x486<=(x487<=x488)));

    if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x493 = 0;
	int16_t x494 = -1;
	uint64_t x495 = 4295001937945068LLU;
	uint64_t x496 = 364051086124298LLU;

    t54 = (x493/(x494<=(x495<=x496)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x505 = -14;
	int64_t x506 = -1LL;
	int8_t x507 = -1;
	volatile int64_t x508 = -113236039841539LL;
	int32_t t55 = 35;

    t55 = (x505/(x506<=(x507<=x508)));

    if (t55 != -14) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x517 = 3U;
	int32_t x518 = -1;
	static uint16_t x519 = UINT16_MAX;
	volatile int32_t t56 = 77;

    t56 = (x517/(x518<=(x519<=x520)));

    if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x525 = 1U;
	static uint32_t x527 = 201502U;
	int32_t t57 = 493245;

    t57 = (x525/(x526<=(x527<=x528)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x537 = INT8_MIN;
	int16_t x538 = -6;
	int16_t x539 = INT16_MIN;
	int8_t x540 = 5;
	volatile int32_t t58 = 3808014;

    t58 = (x537/(x538<=(x539<=x540)));

    if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x553 = INT8_MIN;
	int32_t x554 = -101;
	volatile uint8_t x555 = UINT8_MAX;
	static volatile int32_t t59 = 121;

    t59 = (x553/(x554<=(x555<=x556)));

    if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x561 = INT16_MIN;
	int32_t x562 = -1;
	static int32_t x563 = INT32_MIN;
	int64_t x564 = INT64_MAX;
	int32_t t60 = 13564;

    t60 = (x561/(x562<=(x563<=x564)));

    if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x574 = -1;
	volatile uint16_t x575 = UINT16_MAX;
	int32_t t61 = 420125;

    t61 = (x573/(x574<=(x575<=x576)));

    if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x585 = 34U;
	int8_t x586 = 1;
	int32_t x588 = -1;

    t62 = (x585/(x586<=(x587<=x588)));

    if (t62 != 34) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x593 = 58659265995687LLU;
	int64_t x594 = -1LL;
	int32_t x595 = -1;
	volatile uint64_t t63 = 84586966147365200LLU;

    t63 = (x593/(x594<=(x595<=x596)));

    if (t63 != 58659265995687LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x597 = UINT64_MAX;
	int8_t x598 = -1;
	static volatile int8_t x599 = -57;
	volatile int64_t x600 = INT64_MIN;
	static volatile uint64_t t64 = UINT64_MAX;

    t64 = (x597/(x598<=(x599<=x600)));

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x601 = -1LL;
	int32_t x602 = -1;
	int32_t x603 = INT32_MAX;
	int16_t x604 = 5;
	static int64_t t65 = -42057436008373920LL;

    t65 = (x601/(x602<=(x603<=x604)));

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x617 = 246627486080249987LLU;
	static int64_t x618 = INT64_MIN;
	int16_t x619 = INT16_MAX;
	volatile int8_t x620 = INT8_MIN;
	static volatile uint64_t t66 = 14914073709956902LLU;

    t66 = (x617/(x618<=(x619<=x620)));

    if (t66 != 246627486080249987LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x621 = -1;
	uint8_t x622 = 0U;
	uint8_t x623 = UINT8_MAX;
	int32_t x624 = INT32_MIN;
	volatile int32_t t67 = 222443029;

    t67 = (x621/(x622<=(x623<=x624)));

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x625 = -1;
	static int8_t x626 = 0;
	volatile uint16_t x627 = UINT16_MAX;
	int16_t x628 = -1;

    t68 = (x625/(x626<=(x627<=x628)));

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x637 = 7U;
	int32_t x638 = -1;
	int16_t x639 = INT16_MIN;
	uint8_t x640 = 4U;
	int32_t t69 = 0;

    t69 = (x637/(x638<=(x639<=x640)));

    if (t69 != 7) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x641 = -1;
	static int8_t x642 = -1;
	volatile int32_t x643 = -10189;
	int8_t x644 = -12;

    t70 = (x641/(x642<=(x643<=x644)));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x645 = INT32_MIN;
	static int64_t x648 = -1LL;
	int32_t t71 = INT32_MIN;

    t71 = (x645/(x646<=(x647<=x648)));

    if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x649 = INT8_MAX;
	static int64_t x651 = INT64_MAX;
	int16_t x652 = INT16_MIN;
	volatile int32_t t72 = -510958;

    t72 = (x649/(x650<=(x651<=x652)));

    if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x661 = INT32_MIN;
	static uint8_t x662 = 0U;
	int8_t x663 = -1;
	static volatile int32_t t73 = INT32_MIN;

    t73 = (x661/(x662<=(x663<=x664)));

    if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x665 = UINT16_MAX;
	int32_t x666 = -3443;
	static volatile int64_t x667 = -1LL;
	uint8_t x668 = 7U;

    t74 = (x665/(x666<=(x667<=x668)));

    if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x677 = 0;
	int16_t x678 = INT16_MIN;
	int16_t x679 = INT16_MAX;
	volatile int32_t t75 = 134220233;

    t75 = (x677/(x678<=(x679<=x680)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x681 = INT8_MIN;
	volatile uint64_t x683 = UINT64_MAX;
	uint64_t x684 = 137LLU;
	int32_t t76 = 246386801;

    t76 = (x681/(x682<=(x683<=x684)));

    if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x685 = -1LL;
	int64_t x686 = -15779245741561575LL;
	int16_t x687 = -1;
	uint8_t x688 = 11U;
	volatile int64_t t77 = 154433450LL;

    t77 = (x685/(x686<=(x687<=x688)));

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x697 = INT64_MIN;
	int16_t x698 = -1;
	static int64_t x699 = -1LL;
	volatile int64_t t78 = INT64_MIN;

    t78 = (x697/(x698<=(x699<=x700)));

    if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x705 = UINT32_MAX;
	int32_t x706 = -1;
	uint32_t x708 = 11U;
	volatile uint32_t t79 = UINT32_MAX;

    t79 = (x705/(x706<=(x707<=x708)));

    if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x709 = 296;
	static int32_t x710 = -1;
	int8_t x711 = INT8_MAX;
	static int64_t x712 = INT64_MIN;
	volatile int32_t t80 = -10807805;

    t80 = (x709/(x710<=(x711<=x712)));

    if (t80 != 296) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x714 = -1;
	volatile uint32_t x715 = 135043U;
	static int8_t x716 = -25;
	int64_t t81 = -80559LL;

    t81 = (x713/(x714<=(x715<=x716)));

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x729 = 479U;
	uint8_t x730 = 0U;
	int32_t x731 = INT32_MAX;
	int16_t x732 = -1;
	volatile int32_t t82 = 3303573;

    t82 = (x729/(x730<=(x731<=x732)));

    if (t82 != 479) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x733 = 4;
	int8_t x734 = -1;
	int16_t x736 = INT16_MIN;
	volatile int32_t t83 = 27;

    t83 = (x733/(x734<=(x735<=x736)));

    if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x743 = -1;

    t84 = (x741/(x742<=(x743<=x744)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x749 = 7U;
	int16_t x750 = INT16_MIN;
	int8_t x751 = INT8_MIN;
	int64_t x752 = 7559LL;
	volatile uint32_t t85 = 3168414U;

    t85 = (x749/(x750<=(x751<=x752)));

    if (t85 != 7U) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x753 = INT8_MAX;
	int64_t x754 = -1LL;
	int64_t x756 = -1LL;

    t86 = (x753/(x754<=(x755<=x756)));

    if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x761 = INT64_MIN;
	static int16_t x762 = INT16_MIN;
	int16_t x763 = -1;
	volatile int8_t x764 = 0;
	int64_t t87 = INT64_MIN;

    t87 = (x761/(x762<=(x763<=x764)));

    if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x774 = INT64_MIN;
	int32_t x775 = INT32_MAX;
	static int32_t x776 = -1;

    t88 = (x773/(x774<=(x775<=x776)));

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x781 = INT64_MIN;
	int32_t x782 = INT32_MIN;
	uint16_t x783 = 6U;
	int64_t t89 = INT64_MIN;

    t89 = (x781/(x782<=(x783<=x784)));

    if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x785 = 6613886397793794LLU;
	int32_t x786 = -1;
	int16_t x787 = -1;
	int16_t x788 = -1;
	volatile uint64_t t90 = 433939LLU;

    t90 = (x785/(x786<=(x787<=x788)));

    if (t90 != 6613886397793794LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x789 = 39346U;
	int16_t x790 = INT16_MIN;
	volatile uint64_t x792 = UINT64_MAX;
	static volatile uint32_t t91 = 1U;

    t91 = (x789/(x790<=(x791<=x792)));

    if (t91 != 39346U) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x801 = -1LL;
	volatile int32_t x802 = -1;
	int8_t x803 = INT8_MIN;
	int64_t t92 = 130LL;

    t92 = (x801/(x802<=(x803<=x804)));

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x810 = INT32_MIN;
	int16_t x811 = INT16_MIN;
	static int16_t x812 = INT16_MIN;
	volatile int64_t t93 = INT64_MIN;

    t93 = (x809/(x810<=(x811<=x812)));

    if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint64_t x813 = 841711776LLU;
	int64_t x814 = INT64_MIN;
	static int8_t x815 = INT8_MIN;
	int8_t x816 = INT8_MIN;
	static uint64_t t94 = 13530LLU;

    t94 = (x813/(x814<=(x815<=x816)));

    if (t94 != 841711776LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x825 = UINT64_MAX;
	static int32_t x826 = -1;
	volatile int8_t x827 = 0;
	static volatile uint16_t x828 = 129U;

    t95 = (x825/(x826<=(x827<=x828)));

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x837 = 12011741234LL;
	volatile int8_t x838 = -1;
	static int16_t x839 = INT16_MIN;
	volatile int16_t x840 = -1;
	static int64_t t96 = -679413380LL;

    t96 = (x837/(x838<=(x839<=x840)));

    if (t96 != 12011741234LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x845 = -1;
	int64_t x846 = INT64_MIN;
	volatile uint8_t x847 = 1U;
	uint64_t x848 = 227LLU;
	volatile int32_t t97 = 17556491;

    t97 = (x845/(x846<=(x847<=x848)));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint64_t x849 = 3070LLU;
	int16_t x850 = INT16_MIN;
	int64_t x851 = INT64_MIN;
	uint32_t x852 = 441909132U;

    t98 = (x849/(x850<=(x851<=x852)));

    if (t98 != 3070LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x853 = -488;
	int16_t x856 = 10;
	volatile int32_t t99 = -168791;

    t99 = (x853/(x854<=(x855<=x856)));

    if (t99 != -488) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x858 = INT64_MIN;
	int16_t x859 = 24;
	static int16_t x860 = INT16_MAX;

    t100 = (x857/(x858<=(x859<=x860)));

    if (t100 != 4) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x861 = -3;
	volatile int64_t x862 = INT64_MIN;
	uint64_t x863 = 471LLU;
	volatile int64_t x864 = INT64_MAX;

    t101 = (x861/(x862<=(x863<=x864)));

    if (t101 != -3) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x866 = -1;
	int16_t x868 = INT16_MAX;

    t102 = (x865/(x866<=(x867<=x868)));

    if (t102 != 6) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x878 = INT16_MIN;
	uint16_t x879 = 6U;
	int64_t x880 = 0LL;

    t103 = (x877/(x878<=(x879<=x880)));

    if (t103 != 79402718702619LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x885 = -1;
	static int16_t x886 = 1;
	volatile int32_t t104 = -400790;

    t104 = (x885/(x886<=(x887<=x888)));

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x889 = -1;
	volatile int32_t x890 = INT32_MIN;
	int32_t x891 = -1;

    t105 = (x889/(x890<=(x891<=x892)));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x893 = 955U;
	int32_t x895 = INT32_MAX;
	uint8_t x896 = UINT8_MAX;
	volatile uint32_t t106 = 2006843839U;

    t106 = (x893/(x894<=(x895<=x896)));

    if (t106 != 955U) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x910 = -38;
	static int32_t x911 = 1;
	int32_t x912 = INT32_MIN;
	volatile int32_t t107 = -1914391;

    t107 = (x909/(x910<=(x911<=x912)));

    if (t107 != 255) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x917 = 7U;
	static uint64_t x918 = 1LLU;
	int16_t x919 = -1;
	int8_t x920 = -1;
	static int32_t t108 = 134;

    t108 = (x917/(x918<=(x919<=x920)));

    if (t108 != 7) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x925 = INT8_MIN;
	int64_t x926 = -696138180578LL;
	int32_t x927 = -570089;
	volatile int32_t t109 = 1538;

    t109 = (x925/(x926<=(x927<=x928)));

    if (t109 != -128) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x929 = INT64_MAX;
	static int16_t x930 = INT16_MIN;
	int8_t x931 = -2;
	static int64_t t110 = INT64_MAX;

    t110 = (x929/(x930<=(x931<=x932)));

    if (t110 != INT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x933 = INT64_MIN;
	static int64_t x934 = -20LL;
	static int64_t x935 = 5908952926822629LL;

    t111 = (x933/(x934<=(x935<=x936)));

    if (t111 != INT64_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x949 = INT16_MAX;
	int64_t x950 = -1LL;
	int16_t x951 = INT16_MIN;
	int64_t x952 = INT64_MIN;
	volatile int32_t t112 = -883864374;

    t112 = (x949/(x950<=(x951<=x952)));

    if (t112 != 32767) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x953 = -1;
	int8_t x954 = INT8_MIN;
	uint64_t x955 = 51593560428011LLU;
	int32_t t113 = 154369;

    t113 = (x953/(x954<=(x955<=x956)));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x973 = INT8_MAX;
	static int16_t x974 = INT16_MIN;
	int32_t x975 = INT32_MIN;
	int16_t x976 = -13141;
	volatile int32_t t114 = 19;

    t114 = (x973/(x974<=(x975<=x976)));

    if (t114 != 127) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x981 = INT32_MIN;
	int8_t x982 = INT8_MIN;
	int64_t x983 = INT64_MAX;
	uint64_t x984 = UINT64_MAX;

    t115 = (x981/(x982<=(x983<=x984)));

    if (t115 != INT32_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int32_t x985 = INT32_MIN;
	volatile int64_t x986 = -1LL;
	int32_t x987 = INT32_MIN;
	uint32_t x988 = 84713U;
	static volatile int32_t t116 = INT32_MIN;

    t116 = (x985/(x986<=(x987<=x988)));

    if (t116 != INT32_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x1009 = INT16_MIN;
	int16_t x1010 = 1;
	uint32_t x1011 = 15077U;
	int32_t t117 = -101898473;

    t117 = (x1009/(x1010<=(x1011<=x1012)));

    if (t117 != -32768) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x1014 = INT32_MIN;
	static uint8_t x1015 = 1U;
	int64_t x1016 = 808512179625618LL;

    t118 = (x1013/(x1014<=(x1015<=x1016)));

    if (t118 != 3) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x1017 = 9628345870LLU;
	int32_t x1018 = -1;
	int64_t x1019 = 420092023809074940LL;
	uint16_t x1020 = UINT16_MAX;
	uint64_t t119 = 52910379LLU;

    t119 = (x1017/(x1018<=(x1019<=x1020)));

    if (t119 != 9628345870LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x1021 = -1;
	int16_t x1022 = -1;
	volatile int8_t x1023 = INT8_MIN;
	int8_t x1024 = 51;
	volatile int32_t t120 = -63;

    t120 = (x1021/(x1022<=(x1023<=x1024)));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x1025 = INT8_MIN;
	int32_t x1026 = -91;
	int8_t x1027 = INT8_MAX;
	int64_t x1028 = 9168608517185817LL;
	volatile int32_t t121 = 352621264;

    t121 = (x1025/(x1026<=(x1027<=x1028)));

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x1045 = UINT8_MAX;
	static int64_t x1046 = INT64_MIN;
	volatile int64_t x1048 = INT64_MAX;

    t122 = (x1045/(x1046<=(x1047<=x1048)));

    if (t122 != 255) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x1049 = INT8_MAX;
	int64_t x1050 = -104LL;
	volatile int16_t x1051 = -1;
	volatile int32_t t123 = -17;

    t123 = (x1049/(x1050<=(x1051<=x1052)));

    if (t123 != 127) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x1057 = 45;
	static int64_t x1059 = -25770092775879645LL;
	uint32_t x1060 = 186467U;

    t124 = (x1057/(x1058<=(x1059<=x1060)));

    if (t124 != 45) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x1061 = -41;
	int16_t x1062 = INT16_MIN;
	int16_t x1063 = INT16_MIN;
	int16_t x1064 = -1;
	int32_t t125 = -109;

    t125 = (x1061/(x1062<=(x1063<=x1064)));

    if (t125 != -41) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x1067 = UINT8_MAX;
	int16_t x1068 = -1;
	uint32_t t126 = 63422946U;

    t126 = (x1065/(x1066<=(x1067<=x1068)));

    if (t126 != 12938U) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint64_t x1069 = 1LLU;
	static int64_t x1070 = -1791400LL;
	uint32_t x1072 = 12211U;
	uint64_t t127 = 0LLU;

    t127 = (x1069/(x1070<=(x1071<=x1072)));

    if (t127 != 1LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x1073 = -1;
	uint64_t x1076 = 119921756LLU;
	static int32_t t128 = -4;

    t128 = (x1073/(x1074<=(x1075<=x1076)));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x1081 = 101U;
	uint32_t x1082 = 1U;
	static uint32_t x1083 = 4U;
	int16_t x1084 = -1;
	volatile int32_t t129 = 7;

    t129 = (x1081/(x1082<=(x1083<=x1084)));

    if (t129 != 101) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x1091 = INT8_MAX;
	int16_t x1092 = INT16_MAX;
	volatile uint64_t t130 = 110759LLU;

    t130 = (x1089/(x1090<=(x1091<=x1092)));

    if (t130 != 4056LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x1093 = UINT64_MAX;
	int16_t x1094 = INT16_MIN;
	int32_t x1095 = -57;
	volatile int64_t x1096 = INT64_MIN;
	volatile uint64_t t131 = UINT64_MAX;

    t131 = (x1093/(x1094<=(x1095<=x1096)));

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x1101 = UINT32_MAX;
	static int8_t x1102 = INT8_MIN;
	static int8_t x1103 = INT8_MIN;
	int32_t x1104 = -1;
	uint32_t t132 = UINT32_MAX;

    t132 = (x1101/(x1102<=(x1103<=x1104)));

    if (t132 != UINT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int16_t x1126 = INT16_MIN;
	volatile int64_t x1127 = 1734906LL;
	volatile int64_t x1128 = INT64_MAX;
	volatile int32_t t133 = INT32_MAX;

    t133 = (x1125/(x1126<=(x1127<=x1128)));

    if (t133 != INT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x1133 = -2;
	static volatile int16_t x1134 = INT16_MIN;
	int16_t x1135 = 185;
	int32_t x1136 = INT32_MIN;
	int32_t t134 = -1691362;

    t134 = (x1133/(x1134<=(x1135<=x1136)));

    if (t134 != -2) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x1137 = INT64_MAX;
	static int16_t x1138 = -13;
	uint16_t x1139 = 5U;
	int64_t x1140 = INT64_MAX;
	volatile int64_t t135 = INT64_MAX;

    t135 = (x1137/(x1138<=(x1139<=x1140)));

    if (t135 != INT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x1141 = 3976638U;
	int16_t x1142 = -1;
	int16_t x1143 = INT16_MAX;
	uint8_t x1144 = 3U;
	static volatile uint32_t t136 = 868089528U;

    t136 = (x1141/(x1142<=(x1143<=x1144)));

    if (t136 != 3976638U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x1145 = 468U;
	int32_t x1147 = INT32_MIN;
	int64_t x1148 = INT64_MIN;
	int32_t t137 = 97561;

    t137 = (x1145/(x1146<=(x1147<=x1148)));

    if (t137 != 468) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x1157 = INT8_MIN;
	static int64_t x1158 = -1LL;
	int8_t x1160 = 34;

    t138 = (x1157/(x1158<=(x1159<=x1160)));

    if (t138 != -128) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x1169 = 16U;
	int64_t x1170 = INT64_MIN;
	static int16_t x1171 = 4;
	uint8_t x1172 = 43U;
	int32_t t139 = 391758468;

    t139 = (x1169/(x1170<=(x1171<=x1172)));

    if (t139 != 16) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x1173 = INT32_MIN;
	int64_t x1174 = INT64_MIN;
	static int64_t x1175 = -1LL;
	static int64_t x1176 = INT64_MAX;
	int32_t t140 = INT32_MIN;

    t140 = (x1173/(x1174<=(x1175<=x1176)));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x1177 = UINT32_MAX;
	int64_t x1178 = -318LL;
	uint32_t t141 = UINT32_MAX;

    t141 = (x1177/(x1178<=(x1179<=x1180)));

    if (t141 != UINT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x1205 = UINT32_MAX;
	int64_t x1206 = 1LL;
	int64_t x1207 = INT64_MIN;
	int8_t x1208 = -3;
	uint32_t t142 = UINT32_MAX;

    t142 = (x1205/(x1206<=(x1207<=x1208)));

    if (t142 != UINT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x1209 = UINT64_MAX;
	int64_t x1210 = INT64_MIN;
	static uint8_t x1211 = 1U;
	int8_t x1212 = -1;
	static uint64_t t143 = UINT64_MAX;

    t143 = (x1209/(x1210<=(x1211<=x1212)));

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x1217 = UINT64_MAX;
	int8_t x1218 = INT8_MIN;
	uint32_t x1219 = 239U;
	int8_t x1220 = INT8_MIN;
	volatile uint64_t t144 = UINT64_MAX;

    t144 = (x1217/(x1218<=(x1219<=x1220)));

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x1221 = INT64_MIN;
	int8_t x1222 = INT8_MIN;
	static uint32_t x1224 = 281918U;
	volatile int64_t t145 = INT64_MIN;

    t145 = (x1221/(x1222<=(x1223<=x1224)));

    if (t145 != INT64_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x1225 = 2;
	int16_t x1227 = INT16_MIN;
	static int32_t x1228 = INT32_MIN;
	volatile int32_t t146 = 1;

    t146 = (x1225/(x1226<=(x1227<=x1228)));

    if (t146 != 2) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x1242 = -1;
	volatile int8_t x1243 = INT8_MIN;
	int32_t x1244 = INT32_MAX;
	volatile int32_t t147 = 226644;

    t147 = (x1241/(x1242<=(x1243<=x1244)));

    if (t147 != 127) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x1245 = 684U;
	int64_t x1246 = INT64_MIN;
	static int64_t x1248 = INT64_MIN;

    t148 = (x1245/(x1246<=(x1247<=x1248)));

    if (t148 != 684) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x1253 = 15U;
	static int32_t x1254 = INT32_MIN;
	int16_t x1256 = -10921;
	volatile int32_t t149 = -42574813;

    t149 = (x1253/(x1254<=(x1255<=x1256)));

    if (t149 != 15) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x1262 = 1U;
	int8_t x1263 = INT8_MIN;
	static uint8_t x1264 = 2U;
	int32_t t150 = 54887;

    t150 = (x1261/(x1262<=(x1263<=x1264)));

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x1266 = -1;
	uint8_t x1267 = 2U;
	static int16_t x1268 = INT16_MIN;
	int32_t t151 = -1;

    t151 = (x1265/(x1266<=(x1267<=x1268)));

    if (t151 != 104) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x1289 = 11U;
	int8_t x1290 = -12;
	uint8_t x1291 = UINT8_MAX;
	uint32_t x1292 = UINT32_MAX;
	volatile uint32_t t152 = 21012U;

    t152 = (x1289/(x1290<=(x1291<=x1292)));

    if (t152 != 11U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x1302 = -1;
	static int16_t x1303 = -1;
	int32_t x1304 = INT32_MIN;
	volatile int64_t t153 = INT64_MIN;

    t153 = (x1301/(x1302<=(x1303<=x1304)));

    if (t153 != INT64_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x1307 = 81902LLU;
	int8_t x1308 = 6;
	int32_t t154 = 6;

    t154 = (x1305/(x1306<=(x1307<=x1308)));

    if (t154 != 127) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x1317 = UINT16_MAX;
	int64_t x1318 = INT64_MIN;
	int64_t x1319 = -1LL;
	uint32_t x1320 = 120096598U;
	int32_t t155 = 1;

    t155 = (x1317/(x1318<=(x1319<=x1320)));

    if (t155 != 65535) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint64_t x1324 = UINT64_MAX;
	volatile int32_t t156 = 0;

    t156 = (x1321/(x1322<=(x1323<=x1324)));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x1326 = -60LL;
	int16_t x1328 = INT16_MAX;
	volatile int64_t t157 = 11860LL;

    t157 = (x1325/(x1326<=(x1327<=x1328)));

    if (t157 != -2181348279294LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x1334 = INT32_MIN;
	volatile uint16_t x1335 = UINT16_MAX;
	uint8_t x1336 = UINT8_MAX;

    t158 = (x1333/(x1334<=(x1335<=x1336)));

    if (t158 != -32768) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x1341 = -1;
	int32_t x1343 = -801;
	static volatile int32_t t159 = -316;

    t159 = (x1341/(x1342<=(x1343<=x1344)));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1349 = -1;
	int16_t x1351 = INT16_MIN;
	volatile int32_t x1352 = 172;
	static volatile int32_t t160 = 4854;

    t160 = (x1349/(x1350<=(x1351<=x1352)));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x1353 = -5710;
	static int16_t x1354 = -1;
	static int64_t x1355 = -1LL;
	static int16_t x1356 = -3;
	volatile int32_t t161 = 2048;

    t161 = (x1353/(x1354<=(x1355<=x1356)));

    if (t161 != -5710) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1361 = 0U;
	int8_t x1362 = -13;
	uint64_t x1363 = 2108098555877601LLU;
	volatile int32_t t162 = -96;

    t162 = (x1361/(x1362<=(x1363<=x1364)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1369 = -1;
	static int8_t x1370 = 1;
	uint8_t x1371 = UINT8_MAX;
	int32_t x1372 = INT32_MAX;
	volatile int32_t t163 = 10264559;

    t163 = (x1369/(x1370<=(x1371<=x1372)));

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x1373 = UINT64_MAX;
	int8_t x1374 = INT8_MIN;
	uint8_t x1375 = UINT8_MAX;
	static uint32_t x1376 = UINT32_MAX;
	volatile uint64_t t164 = UINT64_MAX;

    t164 = (x1373/(x1374<=(x1375<=x1376)));

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x1381 = 120U;
	volatile int16_t x1382 = -1636;
	int64_t x1383 = 36699361408LL;
	int8_t x1384 = INT8_MAX;
	volatile int32_t t165 = -26986196;

    t165 = (x1381/(x1382<=(x1383<=x1384)));

    if (t165 != 120) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x1393 = 118U;
	int8_t x1394 = -1;
	static int32_t x1395 = -1;
	volatile int32_t x1396 = INT32_MIN;

    t166 = (x1393/(x1394<=(x1395<=x1396)));

    if (t166 != 118) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x1397 = 0U;
	static int64_t x1399 = INT64_MIN;
	volatile uint32_t x1400 = 516961470U;

    t167 = (x1397/(x1398<=(x1399<=x1400)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x1405 = 3U;
	volatile int8_t x1406 = INT8_MIN;
	int8_t x1407 = INT8_MIN;

    t168 = (x1405/(x1406<=(x1407<=x1408)));

    if (t168 != 3) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x1413 = 498U;
	static int32_t x1414 = -1;
	volatile int32_t x1415 = INT32_MIN;
	uint64_t x1416 = 400511LLU;
	int32_t t169 = 33787231;

    t169 = (x1413/(x1414<=(x1415<=x1416)));

    if (t169 != 498) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1429 = 21385313U;
	static int16_t x1431 = -15856;
	int32_t x1432 = INT32_MAX;
	uint32_t t170 = 231763U;

    t170 = (x1429/(x1430<=(x1431<=x1432)));

    if (t170 != 21385313U) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1434 = INT16_MIN;
	uint8_t x1435 = UINT8_MAX;
	int16_t x1436 = INT16_MAX;
	volatile int32_t t171 = -53262823;

    t171 = (x1433/(x1434<=(x1435<=x1436)));

    if (t171 != 7774) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1454 = -29155;
	uint16_t x1455 = 41U;
	int16_t x1456 = -1;
	int64_t t172 = -2440776065LL;

    t172 = (x1453/(x1454<=(x1455<=x1456)));

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1461 = -1137;
	static int32_t x1462 = -1;
	int16_t x1464 = 1;
	int32_t t173 = 22;

    t173 = (x1461/(x1462<=(x1463<=x1464)));

    if (t173 != -1137) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1469 = INT8_MIN;
	int16_t x1470 = INT16_MIN;
	volatile uint32_t x1471 = 32504641U;
	static uint64_t x1472 = UINT64_MAX;
	int32_t t174 = -5482;

    t174 = (x1469/(x1470<=(x1471<=x1472)));

    if (t174 != -128) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x1474 = -1;
	static volatile int64_t x1475 = INT64_MIN;
	static int16_t x1476 = -1;
	volatile int32_t t175 = 648;

    t175 = (x1473/(x1474<=(x1475<=x1476)));

    if (t175 != 35) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1477 = -1;
	int64_t x1478 = -3707433LL;
	int8_t x1479 = -1;
	static int32_t t176 = 17573836;

    t176 = (x1477/(x1478<=(x1479<=x1480)));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x1485 = -37190LL;
	volatile int8_t x1486 = -5;
	uint8_t x1488 = 72U;

    t177 = (x1485/(x1486<=(x1487<=x1488)));

    if (t177 != -37190LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x1497 = INT32_MIN;
	static volatile int32_t x1498 = -1;
	uint32_t x1500 = 7397380U;
	int32_t t178 = INT32_MIN;

    t178 = (x1497/(x1498<=(x1499<=x1500)));

    if (t178 != INT32_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1501 = UINT32_MAX;
	int32_t x1502 = INT32_MIN;
	int32_t x1503 = INT32_MIN;
	int8_t x1504 = 59;

    t179 = (x1501/(x1502<=(x1503<=x1504)));

    if (t179 != UINT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x1513 = UINT64_MAX;
	int16_t x1514 = INT16_MIN;
	int32_t x1516 = INT32_MAX;
	uint64_t t180 = UINT64_MAX;

    t180 = (x1513/(x1514<=(x1515<=x1516)));

    if (t180 != UINT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x1526 = -1LL;
	int8_t x1527 = -3;
	int16_t x1528 = -2204;
	volatile int64_t t181 = 110665846676064LL;

    t181 = (x1525/(x1526<=(x1527<=x1528)));

    if (t181 != 151282745181LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1529 = 1;
	static int64_t x1531 = INT64_MIN;
	uint16_t x1532 = 23U;
	static int32_t t182 = -22256064;

    t182 = (x1529/(x1530<=(x1531<=x1532)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1537 = INT8_MIN;
	int16_t x1539 = -1;
	int32_t t183 = 428;

    t183 = (x1537/(x1538<=(x1539<=x1540)));

    if (t183 != -128) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1541 = -1LL;
	volatile int16_t x1542 = -1;
	int8_t x1543 = 0;
	uint16_t x1544 = 6U;
	volatile int64_t t184 = -88LL;

    t184 = (x1541/(x1542<=(x1543<=x1544)));

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1549 = INT32_MIN;
	volatile int16_t x1550 = INT16_MIN;
	int32_t t185 = INT32_MIN;

    t185 = (x1549/(x1550<=(x1551<=x1552)));

    if (t185 != INT32_MIN) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1569 = -1;
	int8_t x1570 = INT8_MIN;
	uint8_t x1571 = UINT8_MAX;
	volatile uint64_t x1572 = 205259274LLU;
	volatile int32_t t186 = 498936;

    t186 = (x1569/(x1570<=(x1571<=x1572)));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1577 = INT64_MAX;
	int8_t x1578 = INT8_MIN;
	static volatile uint32_t x1579 = 5678U;
	volatile int64_t x1580 = -17647139107903LL;
	int64_t t187 = INT64_MAX;

    t187 = (x1577/(x1578<=(x1579<=x1580)));

    if (t187 != INT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x1581 = INT32_MAX;
	int64_t x1582 = -1LL;
	int8_t x1583 = -1;
	volatile int32_t t188 = INT32_MAX;

    t188 = (x1581/(x1582<=(x1583<=x1584)));

    if (t188 != INT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1590 = -1;
	static volatile int16_t x1592 = 1;

    t189 = (x1589/(x1590<=(x1591<=x1592)));

    if (t189 != INT32_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1597 = UINT8_MAX;
	int32_t x1598 = -1;
	static int16_t x1600 = INT16_MAX;

    t190 = (x1597/(x1598<=(x1599<=x1600)));

    if (t190 != 255) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1610 = -1;
	static uint32_t x1611 = UINT32_MAX;
	int32_t x1612 = 468594;

    t191 = (x1609/(x1610<=(x1611<=x1612)));

    if (t191 != INT32_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int8_t x1614 = INT8_MIN;
	int32_t x1615 = -69608816;
	int16_t x1616 = -1;

    t192 = (x1613/(x1614<=(x1615<=x1616)));

    if (t192 != -128) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x1625 = INT32_MIN;
	int64_t x1626 = INT64_MIN;
	int8_t x1627 = -1;
	volatile int32_t x1628 = INT32_MAX;
	static volatile int32_t t193 = INT32_MIN;

    t193 = (x1625/(x1626<=(x1627<=x1628)));

    if (t193 != INT32_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1632 = INT8_MIN;
	volatile uint64_t t194 = 1154009LLU;

    t194 = (x1629/(x1630<=(x1631<=x1632)));

    if (t194 != 12168214LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1633 = INT16_MIN;
	int8_t x1634 = 1;
	volatile int64_t x1635 = -167LL;
	volatile uint16_t x1636 = UINT16_MAX;
	int32_t t195 = 1086;

    t195 = (x1633/(x1634<=(x1635<=x1636)));

    if (t195 != -32768) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1645 = INT64_MIN;
	uint32_t x1646 = 1U;
	static uint32_t x1647 = 6U;
	volatile int64_t t196 = INT64_MIN;

    t196 = (x1645/(x1646<=(x1647<=x1648)));

    if (t196 != INT64_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x1654 = INT64_MIN;
	volatile uint64_t x1656 = UINT64_MAX;
	volatile int32_t t197 = 575487562;

    t197 = (x1653/(x1654<=(x1655<=x1656)));

    if (t197 != -15) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1657 = -1;
	int8_t x1658 = INT8_MIN;
	int8_t x1659 = INT8_MIN;
	int32_t t198 = -64512782;

    t198 = (x1657/(x1658<=(x1659<=x1660)));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1661 = INT32_MIN;
	volatile int64_t x1662 = -1LL;
	static volatile uint64_t x1663 = 99LLU;
	static volatile int32_t t199 = INT32_MIN;

    t199 = (x1661/(x1662<=(x1663<=x1664)));

    if (t199 != INT32_MIN) { NG(); } else { ; }
	
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


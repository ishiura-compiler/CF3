
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

int8_t x2 = -38;
int32_t x5 = INT32_MAX;
volatile int32_t x7 = 1667;
int8_t x10 = INT8_MAX;
volatile int32_t t2 = -7261;
uint32_t x30 = 664U;
int32_t x32 = INT32_MIN;
int64_t x41 = INT64_MAX;
static uint64_t x48 = 8657LLU;
int8_t x53 = INT8_MIN;
static int8_t x62 = INT8_MIN;
static int8_t x91 = -1;
static int32_t t13 = -518;
static volatile uint32_t x97 = 3579U;
static uint32_t t15 = 38068U;
int16_t x103 = 27;
volatile int64_t x106 = INT64_MAX;
static uint32_t x110 = UINT32_MAX;
int8_t x111 = INT8_MIN;
volatile int32_t t18 = -505821;
uint32_t x118 = 6464731U;
uint16_t x119 = 88U;
uint32_t t20 = 1109U;
int64_t x130 = INT64_MAX;
static uint32_t x132 = UINT32_MAX;
uint32_t x175 = 105184556U;
int32_t t26 = 2263932;
static volatile int8_t x179 = INT8_MAX;
int64_t x183 = 1LL;
int8_t x211 = INT8_MIN;
volatile int32_t t30 = -63137;
volatile uint32_t x217 = UINT32_MAX;
uint32_t t31 = 5567659U;
int32_t t33 = 331085;
int32_t x246 = 1934855;
uint8_t x256 = 15U;
int16_t x279 = -1;
static uint32_t x280 = UINT32_MAX;
int8_t x282 = INT8_MAX;
static int8_t x286 = 1;
int8_t x290 = -24;
static uint64_t x301 = 3433134170491LLU;
int16_t x302 = 12147;
volatile int16_t x306 = 4012;
static int32_t x307 = -1;
int8_t x309 = INT8_MAX;
uint8_t x310 = 40U;
int8_t x311 = -1;
int32_t x312 = INT32_MIN;
static volatile int64_t x313 = -1LL;
int32_t t48 = -5762281;
int32_t x322 = INT32_MAX;
int32_t x339 = INT32_MIN;
volatile uint16_t x340 = UINT16_MAX;
uint64_t x346 = UINT64_MAX;
int32_t t52 = -33099775;
uint32_t x351 = UINT32_MAX;
static uint64_t x356 = 30707LLU;
uint32_t x362 = 25076625U;
uint64_t x406 = 3518177187958171LLU;
int16_t x408 = -3282;
uint64_t x412 = UINT64_MAX;
static volatile int32_t x424 = INT32_MIN;
volatile int32_t t64 = -953808;
uint64_t x426 = UINT64_MAX;
static int32_t x427 = 200096;
uint16_t x431 = 38U;
uint8_t x447 = 103U;
volatile uint8_t x458 = 70U;
static int64_t x490 = INT64_MIN;
int8_t x508 = INT8_MAX;
int64_t x511 = 27747452030054LL;
uint64_t x512 = 10021270254342LLU;
uint32_t x516 = 1915U;
static int64_t x522 = 42514339LL;
int32_t t81 = -2873107;
volatile uint16_t x533 = 83U;
uint8_t x539 = UINT8_MAX;
uint32_t x540 = UINT32_MAX;
volatile int32_t t85 = 534;
static int8_t x552 = INT8_MIN;
uint64_t t86 = 7954635898813934148LLU;
uint32_t x558 = UINT32_MAX;
int64_t x572 = INT64_MIN;
int8_t x573 = -1;
uint32_t x582 = 1841494U;
static uint64_t x584 = 4479792501736690LLU;
int16_t x589 = INT16_MAX;
static uint16_t x590 = 3U;
volatile int8_t x592 = -1;
int64_t x602 = 39005468030242LL;
static int64_t x603 = -13863LL;
volatile int32_t t96 = -431796972;
static volatile int16_t x626 = INT16_MAX;
int8_t x635 = -25;
volatile uint32_t x639 = UINT32_MAX;
uint32_t x645 = 156149655U;
static volatile int16_t x652 = INT16_MAX;
static int32_t x667 = INT32_MIN;
uint64_t x682 = 718952754346LLU;
uint64_t x694 = 5921996921LLU;
volatile int64_t x699 = INT64_MAX;
volatile uint32_t t111 = 6867U;
uint32_t t112 = 265154788U;
volatile int32_t x710 = INT32_MAX;
int64_t x712 = INT64_MIN;
int64_t x718 = INT64_MAX;
int32_t x721 = -1;
uint8_t x722 = UINT8_MAX;
volatile int16_t x737 = INT16_MIN;
int8_t x738 = -1;
uint64_t x740 = 168170717290776LLU;
static int64_t t120 = -7LL;
static volatile int8_t x765 = -1;
int32_t x768 = 349473422;
static uint64_t x784 = 388764LLU;
volatile uint64_t t124 = 1174LLU;
uint16_t x799 = UINT16_MAX;
static int32_t x800 = -44939445;
int8_t x801 = INT8_MIN;
int8_t x803 = 1;
uint16_t x804 = 455U;
static volatile int64_t t129 = 45654174727927182LL;
volatile int32_t t130 = 1026;
int16_t x842 = 0;
int64_t x843 = INT64_MAX;
volatile int32_t x848 = INT32_MIN;
volatile int32_t t132 = -2606579;
int16_t x849 = 1;
int16_t x862 = 46;
volatile uint32_t x873 = 913791049U;
uint16_t x876 = 8U;
uint32_t t136 = 4573492U;
int32_t x894 = -306;
int64_t x908 = -9081504006632LL;
int32_t x910 = -23056;
uint16_t x913 = 3498U;
uint64_t x950 = UINT64_MAX;
int32_t x952 = -1701440;
int16_t x968 = INT16_MIN;
volatile uint16_t x970 = 15729U;
int32_t t148 = 0;
static volatile uint16_t x998 = 6U;
static volatile int8_t x1003 = 0;
static volatile int32_t t150 = -22987;
volatile int32_t t154 = -388393179;
int16_t x1065 = -1;
static volatile int32_t t157 = 963512;
int8_t x1071 = 3;
int64_t x1082 = -1LL;
static int32_t x1083 = INT32_MIN;
static int8_t x1084 = INT8_MAX;
volatile uint64_t x1086 = 382810252536585792LLU;
static int16_t x1088 = -1;
volatile int64_t t161 = -366908833047485739LL;
int16_t x1106 = INT16_MIN;
volatile uint64_t x1108 = 1361998032635493303LLU;
volatile int8_t x1109 = INT8_MAX;
static int32_t x1116 = INT32_MIN;
int32_t t164 = 2629;
volatile uint16_t x1119 = 1U;
static int32_t x1125 = INT32_MIN;
uint32_t x1126 = 152U;
uint32_t x1128 = UINT32_MAX;
volatile int32_t t166 = 27305;
static int32_t x1142 = INT32_MAX;
uint8_t x1144 = 8U;
int64_t x1176 = -1LL;
static uint64_t x1186 = UINT64_MAX;
static volatile int32_t t172 = -219;
static int8_t x1197 = INT8_MIN;
int8_t x1199 = INT8_MIN;
int32_t t174 = 46;
uint64_t t176 = 566LLU;
int16_t x1233 = -1;
static int8_t x1239 = -1;
int64_t x1240 = INT64_MIN;
volatile uint32_t x1245 = UINT32_MAX;
int32_t x1249 = INT32_MIN;
volatile int16_t x1253 = INT16_MAX;
volatile uint64_t x1254 = UINT64_MAX;
int8_t x1256 = -15;
static int32_t x1258 = INT32_MAX;
uint16_t x1272 = UINT16_MAX;
int32_t t185 = 1;
int8_t x1286 = INT8_MAX;
int16_t x1289 = INT16_MAX;
int8_t x1290 = 5;
static int32_t x1305 = INT32_MAX;
uint64_t t191 = 1701284474LLU;
int16_t x1335 = INT16_MIN;
uint8_t x1343 = UINT8_MAX;
int16_t x1346 = 8;
static int8_t x1351 = -17;
volatile int32_t t197 = 5630;
static int8_t x1369 = INT8_MIN;
int8_t x1371 = INT8_MIN;
uint64_t x1372 = 200069055360706348LLU;
int32_t t198 = 10990635;


void f0(void) {
    	int16_t x1 = 0;
	uint64_t x3 = UINT64_MAX;
	uint16_t x4 = 27U;
	int32_t t0 = -193;

    t0 = (x1%(x2>(x3/x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x6 = 1U;
	int64_t x8 = INT64_MIN;
	int32_t t1 = 51;

    t1 = (x5%(x6>(x7/x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 856;
	uint16_t x11 = 3U;
	uint8_t x12 = 32U;

    t2 = (x9%(x10>(x11/x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -1;
	uint8_t x14 = 48U;
	int64_t x15 = INT64_MIN;
	uint16_t x16 = 45U;
	volatile int32_t t3 = -2513898;

    t3 = (x13%(x14>(x15/x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 34543407U;
	static uint64_t x18 = UINT64_MAX;
	volatile uint64_t x19 = 17569227786662103LLU;
	static int8_t x20 = INT8_MIN;
	volatile uint32_t t4 = 18354638U;

    t4 = (x17%(x18>(x19/x20)));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x29 = 612852006U;
	uint8_t x31 = 0U;
	volatile uint32_t t5 = 40388088U;

    t5 = (x29%(x30>(x31/x32)));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x37 = INT64_MAX;
	static uint8_t x38 = 0U;
	int64_t x39 = INT64_MAX;
	static volatile int16_t x40 = -2018;
	volatile int64_t t6 = -6734399LL;

    t6 = (x37%(x38>(x39/x40)));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x42 = 1339537311U;
	static int64_t x43 = INT64_MAX;
	volatile uint64_t x44 = UINT64_MAX;
	volatile int64_t t7 = -1283806558377329828LL;

    t7 = (x41%(x42>(x43/x44)));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x45 = INT16_MIN;
	int64_t x46 = INT64_MAX;
	volatile int16_t x47 = INT16_MIN;
	int32_t t8 = 136;

    t8 = (x45%(x46>(x47/x48)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x54 = 45413179101LLU;
	uint16_t x55 = 0U;
	int32_t x56 = INT32_MIN;
	volatile int32_t t9 = 2;

    t9 = (x53%(x54>(x55/x56)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x61 = 47U;
	uint8_t x63 = 24U;
	volatile uint64_t x64 = 1351913LLU;
	static int32_t t10 = 121;

    t10 = (x61%(x62>(x63/x64)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x69 = INT32_MIN;
	static uint32_t x70 = 2019323251U;
	int32_t x71 = -9;
	static uint64_t x72 = 22116382796319608LLU;
	static volatile int32_t t11 = -54851;

    t11 = (x69%(x70>(x71/x72)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x85 = 17103945420571996LLU;
	uint8_t x86 = 4U;
	static int64_t x87 = INT64_MIN;
	static uint32_t x88 = UINT32_MAX;
	uint64_t t12 = 90LLU;

    t12 = (x85%(x86>(x87/x88)));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x89 = INT32_MIN;
	int8_t x90 = INT8_MAX;
	int32_t x92 = INT32_MIN;

    t13 = (x89%(x90>(x91/x92)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x93 = UINT32_MAX;
	uint16_t x94 = 4U;
	uint8_t x95 = UINT8_MAX;
	int8_t x96 = -1;
	uint32_t t14 = 661U;

    t14 = (x93%(x94>(x95/x96)));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x98 = 1;
	int8_t x99 = -1;
	int8_t x100 = -13;

    t15 = (x97%(x98>(x99/x100)));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x101 = INT64_MAX;
	uint8_t x102 = UINT8_MAX;
	int32_t x104 = INT32_MIN;
	int64_t t16 = 8162465851180LL;

    t16 = (x101%(x102>(x103/x104)));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x105 = 70170208937499296LLU;
	int64_t x107 = INT64_MAX;
	int64_t x108 = INT64_MIN;
	static uint64_t t17 = 10780888329462389LLU;

    t17 = (x105%(x106>(x107/x108)));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x109 = INT32_MIN;
	static int32_t x112 = INT32_MIN;

    t18 = (x109%(x110>(x111/x112)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x117 = INT64_MAX;
	int64_t x120 = -3379893126517662LL;
	int64_t t19 = -5817441147645LL;

    t19 = (x117%(x118>(x119/x120)));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x121 = UINT32_MAX;
	static int64_t x122 = 3405540719958LL;
	static int64_t x123 = INT64_MIN;
	volatile int8_t x124 = 12;

    t20 = (x121%(x122>(x123/x124)));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x125 = INT16_MIN;
	int32_t x126 = -1;
	uint8_t x127 = 0U;
	volatile uint64_t x128 = 1338497687828LLU;
	static volatile int32_t t21 = -50;

    t21 = (x125%(x126>(x127/x128)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x129 = UINT64_MAX;
	static uint8_t x131 = 60U;
	uint64_t t22 = 100469037765LLU;

    t22 = (x129%(x130>(x131/x132)));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x133 = UINT8_MAX;
	static int16_t x134 = INT16_MAX;
	int8_t x135 = 0;
	static int64_t x136 = INT64_MIN;
	static volatile int32_t t23 = -19742634;

    t23 = (x133%(x134>(x135/x136)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x157 = INT8_MIN;
	uint64_t x158 = UINT64_MAX;
	int64_t x159 = INT64_MIN;
	int64_t x160 = INT64_MIN;
	volatile int32_t t24 = 107;

    t24 = (x157%(x158>(x159/x160)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint32_t x165 = UINT32_MAX;
	volatile uint16_t x166 = 415U;
	uint8_t x167 = 11U;
	volatile int32_t x168 = INT32_MAX;
	uint32_t t25 = 393952U;

    t25 = (x165%(x166>(x167/x168)));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x173 = 178U;
	uint64_t x174 = UINT64_MAX;
	uint16_t x176 = 54U;

    t26 = (x173%(x174>(x175/x176)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x177 = INT8_MIN;
	volatile int16_t x178 = INT16_MAX;
	static int64_t x180 = 214975LL;
	volatile int32_t t27 = 451;

    t27 = (x177%(x178>(x179/x180)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x181 = 12U;
	volatile uint32_t x182 = 482U;
	static int32_t x184 = INT32_MIN;
	int32_t t28 = 1;

    t28 = (x181%(x182>(x183/x184)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x209 = UINT16_MAX;
	uint16_t x210 = 1U;
	static int64_t x212 = INT64_MIN;
	volatile int32_t t29 = -179733205;

    t29 = (x209%(x210>(x211/x212)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x213 = -1;
	static int64_t x214 = INT64_MIN;
	uint16_t x215 = UINT16_MAX;
	uint64_t x216 = 4069290714183LLU;

    t30 = (x213%(x214>(x215/x216)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x218 = 2932U;
	int16_t x219 = INT16_MAX;
	static volatile int16_t x220 = INT16_MAX;

    t31 = (x217%(x218>(x219/x220)));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int8_t x221 = INT8_MIN;
	volatile uint64_t x222 = 42369743860561530LLU;
	static int16_t x223 = 920;
	int8_t x224 = 13;
	volatile int32_t t32 = -34023;

    t32 = (x221%(x222>(x223/x224)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x225 = INT32_MAX;
	volatile int64_t x226 = 97665238LL;
	int64_t x227 = INT64_MIN;
	static uint8_t x228 = UINT8_MAX;

    t33 = (x225%(x226>(x227/x228)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x241 = INT64_MAX;
	static int64_t x242 = 2454652815792203LL;
	volatile int32_t x243 = 0;
	int32_t x244 = INT32_MIN;
	volatile int64_t t34 = -172251LL;

    t34 = (x241%(x242>(x243/x244)));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x245 = UINT16_MAX;
	static int32_t x247 = -1;
	int32_t x248 = 1;
	int32_t t35 = -47;

    t35 = (x245%(x246>(x247/x248)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x253 = INT64_MIN;
	uint8_t x254 = UINT8_MAX;
	int64_t x255 = -14071012240620067LL;
	int64_t t36 = 12645104475LL;

    t36 = (x253%(x254>(x255/x256)));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x269 = UINT64_MAX;
	uint8_t x270 = 1U;
	int32_t x271 = INT32_MIN;
	static int32_t x272 = 3056;
	static volatile uint64_t t37 = 34996110928490LLU;

    t37 = (x269%(x270>(x271/x272)));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x273 = INT64_MIN;
	volatile int8_t x274 = INT8_MIN;
	static uint32_t x275 = 542U;
	int64_t x276 = -1LL;
	int64_t t38 = 6LL;

    t38 = (x273%(x274>(x275/x276)));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x277 = INT32_MIN;
	int16_t x278 = INT16_MAX;
	volatile int32_t t39 = 566;

    t39 = (x277%(x278>(x279/x280)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x281 = UINT64_MAX;
	volatile uint8_t x283 = 59U;
	static int64_t x284 = INT64_MIN;
	static volatile uint64_t t40 = 1306207631494196LLU;

    t40 = (x281%(x282>(x283/x284)));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x285 = INT64_MIN;
	uint16_t x287 = 82U;
	int64_t x288 = INT64_MIN;
	static volatile int64_t t41 = -456562939764511LL;

    t41 = (x285%(x286>(x287/x288)));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x289 = INT64_MAX;
	volatile uint64_t x291 = 1639587982831LLU;
	int8_t x292 = INT8_MIN;
	volatile int64_t t42 = -1LL;

    t42 = (x289%(x290>(x291/x292)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x297 = UINT8_MAX;
	int8_t x298 = 30;
	int8_t x299 = 56;
	static uint16_t x300 = UINT16_MAX;
	int32_t t43 = 176934;

    t43 = (x297%(x298>(x299/x300)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x303 = 35637349LL;
	uint64_t x304 = 5587664603414LLU;
	volatile uint64_t t44 = 2178036429475426020LLU;

    t44 = (x301%(x302>(x303/x304)));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x305 = 6;
	volatile int8_t x308 = -18;
	int32_t t45 = -76384962;

    t45 = (x305%(x306>(x307/x308)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t t46 = 1;

    t46 = (x309%(x310>(x311/x312)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x314 = INT32_MAX;
	uint64_t x315 = 3686554561093770LLU;
	int16_t x316 = INT16_MIN;
	volatile int64_t t47 = 7LL;

    t47 = (x313%(x314>(x315/x316)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x317 = UINT8_MAX;
	uint8_t x318 = 15U;
	volatile int64_t x319 = 57120246924495378LL;
	volatile uint64_t x320 = UINT64_MAX;

    t48 = (x317%(x318>(x319/x320)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x321 = 311;
	int8_t x323 = INT8_MIN;
	int8_t x324 = -1;
	int32_t t49 = 277717;

    t49 = (x321%(x322>(x323/x324)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x337 = 1;
	int8_t x338 = -1;
	int32_t t50 = 178513624;

    t50 = (x337%(x338>(x339/x340)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x341 = INT16_MAX;
	static int32_t x342 = INT32_MIN;
	volatile uint32_t x343 = 756U;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t51 = -71;

    t51 = (x341%(x342>(x343/x344)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x345 = -1;
	uint32_t x347 = UINT32_MAX;
	uint8_t x348 = UINT8_MAX;

    t52 = (x345%(x346>(x347/x348)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x349 = 10U;
	static int32_t x350 = INT32_MAX;
	int32_t x352 = INT32_MIN;
	volatile uint32_t t53 = 672U;

    t53 = (x349%(x350>(x351/x352)));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x353 = 66545228886822961LLU;
	int8_t x354 = -1;
	static uint32_t x355 = UINT32_MAX;
	uint64_t t54 = 20703LLU;

    t54 = (x353%(x354>(x355/x356)));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x357 = 573;
	int64_t x358 = INT64_MAX;
	static int16_t x359 = -6747;
	uint16_t x360 = 5U;
	int32_t t55 = 340176;

    t55 = (x357%(x358>(x359/x360)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x361 = -1LL;
	volatile int8_t x363 = 4;
	static uint8_t x364 = 47U;
	volatile int64_t t56 = -3892968623079924551LL;

    t56 = (x361%(x362>(x363/x364)));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x365 = -1LL;
	volatile int64_t x366 = -1LL;
	int32_t x367 = INT32_MAX;
	int8_t x368 = -20;
	volatile int64_t t57 = -41LL;

    t57 = (x365%(x366>(x367/x368)));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x385 = INT64_MIN;
	uint64_t x386 = 80617825532780LLU;
	uint16_t x387 = 0U;
	int8_t x388 = 53;
	volatile int64_t t58 = -493172338279932129LL;

    t58 = (x385%(x386>(x387/x388)));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x389 = 3U;
	static uint64_t x390 = 476969LLU;
	uint64_t x391 = 245LLU;
	volatile int16_t x392 = -2;
	int32_t t59 = -1880824;

    t59 = (x389%(x390>(x391/x392)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x401 = UINT16_MAX;
	int64_t x402 = -1LL;
	int32_t x403 = -28173853;
	uint16_t x404 = 3U;
	volatile int32_t t60 = 394;

    t60 = (x401%(x402>(x403/x404)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x405 = 154U;
	int32_t x407 = -6;
	uint32_t t61 = 59790755U;

    t61 = (x405%(x406>(x407/x408)));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int64_t x409 = INT64_MIN;
	static int32_t x410 = -386159110;
	volatile int16_t x411 = INT16_MAX;
	volatile int64_t t62 = 2176241712467556LL;

    t62 = (x409%(x410>(x411/x412)));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x417 = UINT64_MAX;
	uint64_t x418 = UINT64_MAX;
	static int64_t x419 = INT64_MAX;
	int64_t x420 = -1LL;
	volatile uint64_t t63 = 706665192722204660LLU;

    t63 = (x417%(x418>(x419/x420)));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x421 = INT8_MIN;
	volatile int16_t x422 = INT16_MAX;
	static int8_t x423 = INT8_MIN;

    t64 = (x421%(x422>(x423/x424)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x425 = 0;
	uint16_t x428 = UINT16_MAX;
	static volatile int32_t t65 = 4093412;

    t65 = (x425%(x426>(x427/x428)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x429 = -1;
	static uint64_t x430 = 4457458378407483189LLU;
	static int8_t x432 = INT8_MIN;
	static int32_t t66 = 252877072;

    t66 = (x429%(x430>(x431/x432)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x445 = 1155;
	int32_t x446 = -8;
	static uint32_t x448 = 7762269U;
	int32_t t67 = -1;

    t67 = (x445%(x446>(x447/x448)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x449 = -1;
	uint16_t x450 = 4U;
	uint8_t x451 = UINT8_MAX;
	uint16_t x452 = 73U;
	int32_t t68 = 14452;

    t68 = (x449%(x450>(x451/x452)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x457 = 121U;
	volatile uint8_t x459 = UINT8_MAX;
	int16_t x460 = INT16_MIN;
	volatile int32_t t69 = 140308220;

    t69 = (x457%(x458>(x459/x460)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x461 = -82;
	int32_t x462 = INT32_MAX;
	int8_t x463 = INT8_MIN;
	int8_t x464 = 1;
	int32_t t70 = 123284703;

    t70 = (x461%(x462>(x463/x464)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x477 = -2;
	volatile uint32_t x478 = 475196U;
	static int16_t x479 = -1;
	volatile int8_t x480 = 44;
	volatile int32_t t71 = -378691;

    t71 = (x477%(x478>(x479/x480)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x485 = INT8_MIN;
	int32_t x486 = 872;
	static int8_t x487 = 0;
	volatile int8_t x488 = INT8_MIN;
	static volatile int32_t t72 = 1237510;

    t72 = (x485%(x486>(x487/x488)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x489 = 42887969944840LL;
	uint64_t x491 = UINT64_MAX;
	volatile int8_t x492 = -1;
	volatile int64_t t73 = -3634896062166277LL;

    t73 = (x489%(x490>(x491/x492)));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x493 = 0;
	int16_t x494 = -1;
	uint16_t x495 = UINT16_MAX;
	int32_t x496 = -1;
	int32_t t74 = 92438391;

    t74 = (x493%(x494>(x495/x496)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x505 = INT64_MAX;
	volatile int64_t x506 = INT64_MAX;
	int64_t x507 = INT64_MIN;
	volatile int64_t t75 = -230262639143349556LL;

    t75 = (x505%(x506>(x507/x508)));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x509 = -1;
	int64_t x510 = -1LL;
	int32_t t76 = -1;

    t76 = (x509%(x510>(x511/x512)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x513 = 39U;
	int32_t x514 = 27;
	uint16_t x515 = 9U;
	volatile uint32_t t77 = 202238U;

    t77 = (x513%(x514>(x515/x516)));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x517 = -1;
	uint32_t x518 = 24547352U;
	static int32_t x519 = 1011269;
	static uint64_t x520 = UINT64_MAX;
	volatile int32_t t78 = 218631;

    t78 = (x517%(x518>(x519/x520)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x521 = -1;
	uint8_t x523 = 60U;
	uint32_t x524 = UINT32_MAX;
	int32_t t79 = 1;

    t79 = (x521%(x522>(x523/x524)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x525 = UINT64_MAX;
	static int64_t x526 = INT64_MIN;
	int16_t x527 = -1;
	volatile uint64_t x528 = 20433012LLU;
	volatile uint64_t t80 = 7035540391756LLU;

    t80 = (x525%(x526>(x527/x528)));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x529 = INT16_MIN;
	int16_t x530 = 2624;
	int64_t x531 = INT64_MAX;
	uint64_t x532 = UINT64_MAX;

    t81 = (x529%(x530>(x531/x532)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x534 = UINT8_MAX;
	uint8_t x535 = 12U;
	static int64_t x536 = INT64_MIN;
	volatile int32_t t82 = -14;

    t82 = (x533%(x534>(x535/x536)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x537 = -15538;
	volatile uint64_t x538 = 1355863573LLU;
	int32_t t83 = -1;

    t83 = (x537%(x538>(x539/x540)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x541 = -1;
	static uint32_t x542 = UINT32_MAX;
	int8_t x543 = INT8_MIN;
	static int32_t x544 = -1704;
	int32_t t84 = 348141105;

    t84 = (x541%(x542>(x543/x544)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x545 = UINT16_MAX;
	static uint8_t x546 = 21U;
	volatile int16_t x547 = 4893;
	volatile int16_t x548 = -1;

    t85 = (x545%(x546>(x547/x548)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x549 = 236223LLU;
	volatile int64_t x550 = -1LL;
	static uint16_t x551 = 32492U;

    t86 = (x549%(x550>(x551/x552)));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x553 = -1LL;
	int16_t x554 = -1;
	volatile uint16_t x555 = 13317U;
	int8_t x556 = INT8_MIN;
	volatile int64_t t87 = 3752146719LL;

    t87 = (x553%(x554>(x555/x556)));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x557 = INT16_MIN;
	int8_t x559 = INT8_MAX;
	int16_t x560 = -15;
	int32_t t88 = -303914423;

    t88 = (x557%(x558>(x559/x560)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x565 = 17;
	uint16_t x566 = 165U;
	int32_t x567 = INT32_MIN;
	int64_t x568 = INT64_MAX;
	volatile int32_t t89 = -66841;

    t89 = (x565%(x566>(x567/x568)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x569 = -1;
	uint16_t x570 = 154U;
	uint16_t x571 = 61U;
	static volatile int32_t t90 = -45342553;

    t90 = (x569%(x570>(x571/x572)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x574 = -1;
	volatile int32_t x575 = INT32_MIN;
	volatile int16_t x576 = 46;
	static volatile int32_t t91 = -1;

    t91 = (x573%(x574>(x575/x576)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x581 = -1;
	static int8_t x583 = INT8_MIN;
	int32_t t92 = 0;

    t92 = (x581%(x582>(x583/x584)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x591 = -1LL;
	static int32_t t93 = -7206;

    t93 = (x589%(x590>(x591/x592)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x601 = -1LL;
	int32_t x604 = INT32_MAX;
	int64_t t94 = -44463624LL;

    t94 = (x601%(x602>(x603/x604)));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x609 = UINT8_MAX;
	uint64_t x610 = 45568LLU;
	uint64_t x611 = 144714203126LLU;
	int16_t x612 = INT16_MIN;
	volatile int32_t t95 = -2;

    t95 = (x609%(x610>(x611/x612)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x613 = INT8_MIN;
	int16_t x614 = 63;
	static volatile int16_t x615 = -2646;
	int32_t x616 = INT32_MIN;

    t96 = (x613%(x614>(x615/x616)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x617 = 115U;
	int16_t x618 = 5850;
	static int8_t x619 = INT8_MIN;
	int16_t x620 = INT16_MIN;
	volatile int32_t t97 = -255264;

    t97 = (x617%(x618>(x619/x620)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x625 = INT16_MIN;
	int64_t x627 = INT64_MIN;
	uint8_t x628 = 27U;
	volatile int32_t t98 = 1;

    t98 = (x625%(x626>(x627/x628)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x629 = -1LL;
	int32_t x630 = INT32_MIN;
	int8_t x631 = 1;
	uint32_t x632 = UINT32_MAX;
	static volatile int64_t t99 = -3100LL;

    t99 = (x629%(x630>(x631/x632)));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x633 = INT16_MIN;
	int32_t x634 = INT32_MAX;
	uint8_t x636 = 92U;
	int32_t t100 = 461425;

    t100 = (x633%(x634>(x635/x636)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x637 = -75;
	int16_t x638 = INT16_MIN;
	uint32_t x640 = 44561U;
	static int32_t t101 = -828;

    t101 = (x637%(x638>(x639/x640)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x641 = 364813U;
	uint16_t x642 = 13U;
	uint16_t x643 = 6065U;
	static int32_t x644 = INT32_MAX;
	volatile uint32_t t102 = 14835571U;

    t102 = (x641%(x642>(x643/x644)));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x646 = UINT8_MAX;
	static volatile int32_t x647 = INT32_MIN;
	uint8_t x648 = 2U;
	static volatile uint32_t t103 = 1183677718U;

    t103 = (x645%(x646>(x647/x648)));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x649 = 0;
	int8_t x650 = INT8_MAX;
	uint64_t x651 = 146LLU;
	volatile int32_t t104 = -105590;

    t104 = (x649%(x650>(x651/x652)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x653 = 22U;
	int32_t x654 = INT32_MAX;
	uint16_t x655 = 5854U;
	static int64_t x656 = -549012482690982998LL;
	static volatile int32_t t105 = -102387;

    t105 = (x653%(x654>(x655/x656)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x657 = 24451U;
	uint16_t x658 = UINT16_MAX;
	int16_t x659 = 207;
	static uint32_t x660 = UINT32_MAX;
	volatile int32_t t106 = -1222;

    t106 = (x657%(x658>(x659/x660)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x665 = 163659459U;
	int8_t x666 = INT8_MAX;
	static uint16_t x668 = 6826U;
	volatile uint32_t t107 = 440105U;

    t107 = (x665%(x666>(x667/x668)));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x669 = -1;
	static int64_t x670 = INT64_MIN;
	uint64_t x671 = 18LLU;
	uint64_t x672 = 6870LLU;
	int32_t t108 = 6;

    t108 = (x669%(x670>(x671/x672)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x681 = -362;
	int32_t x683 = INT32_MIN;
	volatile int32_t x684 = INT32_MIN;
	static int32_t t109 = 47722;

    t109 = (x681%(x682>(x683/x684)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x693 = -7313983984876704LL;
	volatile uint64_t x695 = 1652801952LLU;
	int16_t x696 = INT16_MIN;
	volatile int64_t t110 = -29373LL;

    t110 = (x693%(x694>(x695/x696)));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x697 = 1730U;
	volatile uint32_t x698 = UINT32_MAX;
	int16_t x700 = INT16_MIN;

    t111 = (x697%(x698>(x699/x700)));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x705 = 1044150U;
	volatile int16_t x706 = 4;
	int16_t x707 = 1;
	volatile uint16_t x708 = 29U;

    t112 = (x705%(x706>(x707/x708)));

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x709 = INT32_MAX;
	int8_t x711 = -1;
	int32_t t113 = -1874;

    t113 = (x709%(x710>(x711/x712)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x717 = INT16_MAX;
	int64_t x719 = -14LL;
	int32_t x720 = -1;
	volatile int32_t t114 = -4;

    t114 = (x717%(x718>(x719/x720)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x723 = INT32_MIN;
	static int64_t x724 = 219186250816302LL;
	int32_t t115 = -7878;

    t115 = (x721%(x722>(x723/x724)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x729 = UINT32_MAX;
	int32_t x730 = 86;
	int32_t x731 = INT32_MIN;
	uint8_t x732 = 121U;
	static uint32_t t116 = 12U;

    t116 = (x729%(x730>(x731/x732)));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x733 = 391U;
	int64_t x734 = -1LL;
	int32_t x735 = 198353242;
	int8_t x736 = INT8_MIN;
	int32_t t117 = 32262964;

    t117 = (x733%(x734>(x735/x736)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x739 = UINT16_MAX;
	int32_t t118 = -77581231;

    t118 = (x737%(x738>(x739/x740)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x741 = INT8_MIN;
	uint16_t x742 = 13300U;
	volatile uint32_t x743 = UINT32_MAX;
	int16_t x744 = -1;
	volatile int32_t t119 = -93;

    t119 = (x741%(x742>(x743/x744)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x757 = -1LL;
	uint32_t x758 = 13U;
	int16_t x759 = INT16_MIN;
	int16_t x760 = INT16_MIN;

    t120 = (x757%(x758>(x759/x760)));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x761 = INT8_MAX;
	static int16_t x762 = INT16_MIN;
	volatile int16_t x763 = INT16_MIN;
	volatile uint32_t x764 = 57079548U;
	volatile int32_t t121 = 71;

    t121 = (x761%(x762>(x763/x764)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x766 = 44U;
	uint32_t x767 = 860930717U;
	volatile int32_t t122 = 0;

    t122 = (x765%(x766>(x767/x768)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int64_t x777 = -29068173LL;
	static int64_t x778 = 3998757649156595918LL;
	int16_t x779 = INT16_MAX;
	static uint32_t x780 = 1266318U;
	static int64_t t123 = -3115797508922123290LL;

    t123 = (x777%(x778>(x779/x780)));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x781 = UINT64_MAX;
	int16_t x782 = INT16_MIN;
	uint64_t x783 = UINT64_MAX;

    t124 = (x781%(x782>(x783/x784)));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x797 = -1;
	static uint8_t x798 = 74U;
	int32_t t125 = 711;

    t125 = (x797%(x798>(x799/x800)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x802 = UINT32_MAX;
	int32_t t126 = -3093;

    t126 = (x801%(x802>(x803/x804)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x809 = INT16_MAX;
	volatile uint8_t x810 = 2U;
	uint8_t x811 = 1U;
	static int64_t x812 = INT64_MAX;
	volatile int32_t t127 = 9778038;

    t127 = (x809%(x810>(x811/x812)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x813 = INT64_MAX;
	uint64_t x814 = UINT64_MAX;
	uint32_t x815 = 1918U;
	int64_t x816 = INT64_MIN;
	volatile int64_t t128 = -2LL;

    t128 = (x813%(x814>(x815/x816)));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x821 = INT64_MIN;
	static int8_t x822 = -1;
	int8_t x823 = INT8_MIN;
	int16_t x824 = 1;

    t129 = (x821%(x822>(x823/x824)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x829 = INT32_MAX;
	int8_t x830 = INT8_MIN;
	static volatile uint64_t x831 = UINT64_MAX;
	static int64_t x832 = -1LL;

    t130 = (x829%(x830>(x831/x832)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x841 = 23U;
	static volatile int16_t x844 = -1;
	volatile int32_t t131 = -7216;

    t131 = (x841%(x842>(x843/x844)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x845 = -1;
	volatile int8_t x846 = INT8_MAX;
	int32_t x847 = -858;

    t132 = (x845%(x846>(x847/x848)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x850 = UINT16_MAX;
	static int16_t x851 = -1;
	int32_t x852 = -15939013;
	int32_t t133 = 7430603;

    t133 = (x849%(x850>(x851/x852)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x853 = UINT64_MAX;
	int16_t x854 = 1;
	uint32_t x855 = 329U;
	int64_t x856 = -1LL;
	volatile uint64_t t134 = 5361953324LLU;

    t134 = (x853%(x854>(x855/x856)));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x861 = 0LLU;
	int8_t x863 = -2;
	int32_t x864 = -465;
	volatile uint64_t t135 = 2706794LLU;

    t135 = (x861%(x862>(x863/x864)));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x874 = INT32_MAX;
	int32_t x875 = INT32_MAX;

    t136 = (x873%(x874>(x875/x876)));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x881 = INT16_MIN;
	uint16_t x882 = UINT16_MAX;
	volatile int16_t x883 = -1;
	int16_t x884 = -23;
	static int32_t t137 = 21743975;

    t137 = (x881%(x882>(x883/x884)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x893 = 1;
	static int16_t x895 = INT16_MAX;
	int16_t x896 = -19;
	int32_t t138 = -23;

    t138 = (x893%(x894>(x895/x896)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x897 = INT8_MAX;
	uint16_t x898 = UINT16_MAX;
	static int16_t x899 = -1;
	static int32_t x900 = -1356;
	volatile int32_t t139 = 1;

    t139 = (x897%(x898>(x899/x900)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x905 = UINT16_MAX;
	uint64_t x906 = 472996569090013LLU;
	uint32_t x907 = 11511878U;
	int32_t t140 = -860458;

    t140 = (x905%(x906>(x907/x908)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x909 = INT16_MAX;
	static int32_t x911 = INT32_MAX;
	volatile int32_t x912 = -40;
	volatile int32_t t141 = -13;

    t141 = (x909%(x910>(x911/x912)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x914 = -1;
	volatile int16_t x915 = INT16_MAX;
	int32_t x916 = -313;
	static volatile int32_t t142 = 965949975;

    t142 = (x913%(x914>(x915/x916)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x945 = UINT16_MAX;
	static volatile uint32_t x946 = 56149430U;
	int32_t x947 = INT32_MAX;
	int16_t x948 = INT16_MAX;
	static int32_t t143 = -14371;

    t143 = (x945%(x946>(x947/x948)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x949 = -253818727366477LL;
	int64_t x951 = INT64_MIN;
	int64_t t144 = 67813624221LL;

    t144 = (x949%(x950>(x951/x952)));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x953 = 38767350U;
	static volatile uint64_t x954 = 15439001LLU;
	int16_t x955 = -1;
	volatile int8_t x956 = INT8_MIN;
	uint32_t t145 = 298559370U;

    t145 = (x953%(x954>(x955/x956)));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x965 = INT32_MAX;
	static uint8_t x966 = UINT8_MAX;
	static uint16_t x967 = 146U;
	volatile int32_t t146 = 317609813;

    t146 = (x965%(x966>(x967/x968)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x969 = 57;
	int16_t x971 = INT16_MAX;
	uint8_t x972 = 118U;
	volatile int32_t t147 = -124;

    t147 = (x969%(x970>(x971/x972)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int8_t x981 = -1;
	volatile int32_t x982 = INT32_MIN;
	static int16_t x983 = INT16_MIN;
	uint32_t x984 = UINT32_MAX;

    t148 = (x981%(x982>(x983/x984)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint32_t x997 = UINT32_MAX;
	int32_t x999 = 228972;
	static int8_t x1000 = INT8_MIN;
	static volatile uint32_t t149 = 358U;

    t149 = (x997%(x998>(x999/x1000)));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x1001 = -46307226;
	volatile int64_t x1002 = -1LL;
	uint64_t x1004 = 34626647565LLU;

    t150 = (x1001%(x1002>(x1003/x1004)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x1005 = 6U;
	uint64_t x1006 = UINT64_MAX;
	static int8_t x1007 = INT8_MAX;
	int64_t x1008 = INT64_MIN;
	int32_t t151 = 6170605;

    t151 = (x1005%(x1006>(x1007/x1008)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x1009 = INT16_MAX;
	int8_t x1010 = INT8_MIN;
	volatile int64_t x1011 = INT64_MIN;
	uint32_t x1012 = 52491027U;
	static volatile int32_t t152 = 881968;

    t152 = (x1009%(x1010>(x1011/x1012)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x1025 = 9;
	uint32_t x1026 = 12075436U;
	int16_t x1027 = -1;
	int32_t x1028 = -1;
	volatile int32_t t153 = -6;

    t153 = (x1025%(x1026>(x1027/x1028)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1033 = -1;
	uint8_t x1034 = UINT8_MAX;
	int16_t x1035 = -1;
	int32_t x1036 = 195;

    t154 = (x1033%(x1034>(x1035/x1036)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x1057 = -664;
	static int16_t x1058 = INT16_MIN;
	static volatile uint16_t x1059 = UINT16_MAX;
	uint64_t x1060 = 2601LLU;
	int32_t t155 = 137;

    t155 = (x1057%(x1058>(x1059/x1060)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x1061 = -8;
	int32_t x1062 = INT32_MIN;
	static volatile uint32_t x1063 = UINT32_MAX;
	static volatile int32_t x1064 = INT32_MAX;
	int32_t t156 = -65;

    t156 = (x1061%(x1062>(x1063/x1064)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x1066 = 59323803618047LLU;
	uint32_t x1067 = UINT32_MAX;
	int64_t x1068 = INT64_MAX;

    t157 = (x1065%(x1066>(x1067/x1068)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1069 = -1;
	static volatile int32_t x1070 = INT32_MAX;
	int16_t x1072 = INT16_MIN;
	int32_t t158 = 102855;

    t158 = (x1069%(x1070>(x1071/x1072)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x1081 = INT8_MAX;
	static volatile int32_t t159 = -52947380;

    t159 = (x1081%(x1082>(x1083/x1084)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1085 = INT8_MIN;
	volatile int32_t x1087 = -1;
	volatile int32_t t160 = -159369;

    t160 = (x1085%(x1086>(x1087/x1088)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x1101 = -1LL;
	static volatile int32_t x1102 = 526;
	int8_t x1103 = -1;
	static uint16_t x1104 = UINT16_MAX;

    t161 = (x1101%(x1102>(x1103/x1104)));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x1105 = 12;
	volatile int64_t x1107 = 1989LL;
	volatile int32_t t162 = -1191323;

    t162 = (x1105%(x1106>(x1107/x1108)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x1110 = 80344667LLU;
	int64_t x1111 = -1LL;
	int8_t x1112 = -2;
	volatile int32_t t163 = 511284630;

    t163 = (x1109%(x1110>(x1111/x1112)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x1113 = UINT16_MAX;
	static int32_t x1114 = INT32_MAX;
	int64_t x1115 = -1LL;

    t164 = (x1113%(x1114>(x1115/x1116)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x1117 = 225;
	static int32_t x1118 = INT32_MIN;
	static uint32_t x1120 = 2U;
	int32_t t165 = -60171603;

    t165 = (x1117%(x1118>(x1119/x1120)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x1127 = -1;

    t166 = (x1125%(x1126>(x1127/x1128)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x1141 = -1LL;
	int16_t x1143 = INT16_MIN;
	static volatile int64_t t167 = 27695433790LL;

    t167 = (x1141%(x1142>(x1143/x1144)));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x1145 = INT8_MAX;
	volatile int16_t x1146 = 1;
	int64_t x1147 = -1LL;
	static uint16_t x1148 = 59U;
	static volatile int32_t t168 = -3562;

    t168 = (x1145%(x1146>(x1147/x1148)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x1149 = 86708490;
	volatile int64_t x1150 = 550LL;
	static volatile int32_t x1151 = INT32_MAX;
	int8_t x1152 = -1;
	volatile int32_t t169 = 16272688;

    t169 = (x1149%(x1150>(x1151/x1152)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x1173 = UINT64_MAX;
	static uint8_t x1174 = UINT8_MAX;
	uint8_t x1175 = UINT8_MAX;
	volatile uint64_t t170 = 279018536939919571LLU;

    t170 = (x1173%(x1174>(x1175/x1176)));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x1181 = 17258U;
	static int32_t x1182 = INT32_MIN;
	uint32_t x1183 = 15709739U;
	volatile uint64_t x1184 = UINT64_MAX;
	uint32_t t171 = 78U;

    t171 = (x1181%(x1182>(x1183/x1184)));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x1185 = UINT16_MAX;
	int32_t x1187 = 28;
	uint16_t x1188 = 2U;

    t172 = (x1185%(x1186>(x1187/x1188)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x1189 = -1;
	uint64_t x1190 = UINT64_MAX;
	int32_t x1191 = INT32_MIN;
	static volatile uint64_t x1192 = 200651LLU;
	int32_t t173 = 158;

    t173 = (x1189%(x1190>(x1191/x1192)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x1198 = 954844968140741888LL;
	uint32_t x1200 = 2121410412U;

    t174 = (x1197%(x1198>(x1199/x1200)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x1221 = 38U;
	int8_t x1222 = -1;
	int32_t x1223 = INT32_MIN;
	int16_t x1224 = INT16_MAX;
	int32_t t175 = 230877;

    t175 = (x1221%(x1222>(x1223/x1224)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x1225 = 591819535611LLU;
	int8_t x1226 = INT8_MAX;
	static int16_t x1227 = INT16_MIN;
	uint8_t x1228 = UINT8_MAX;

    t176 = (x1225%(x1226>(x1227/x1228)));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x1234 = -817818202219LL;
	int32_t x1235 = INT32_MIN;
	uint64_t x1236 = 1718704931LLU;
	int32_t t177 = 121100514;

    t177 = (x1233%(x1234>(x1235/x1236)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x1237 = 409U;
	int16_t x1238 = 2374;
	volatile uint32_t t178 = 3849221U;

    t178 = (x1237%(x1238>(x1239/x1240)));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1246 = 42U;
	int32_t x1247 = -1;
	uint64_t x1248 = UINT64_MAX;
	volatile uint32_t t179 = 13156U;

    t179 = (x1245%(x1246>(x1247/x1248)));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x1250 = UINT64_MAX;
	volatile int64_t x1251 = -1LL;
	int8_t x1252 = -1;
	int32_t t180 = -235351069;

    t180 = (x1249%(x1250>(x1251/x1252)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1255 = -1;
	volatile int32_t t181 = -58199463;

    t181 = (x1253%(x1254>(x1255/x1256)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1257 = INT8_MIN;
	int16_t x1259 = -1;
	volatile int32_t x1260 = INT32_MIN;
	static int32_t t182 = -1122;

    t182 = (x1257%(x1258>(x1259/x1260)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1261 = INT16_MAX;
	int8_t x1262 = 18;
	volatile int64_t x1263 = INT64_MAX;
	int8_t x1264 = -24;
	static int32_t t183 = -2148520;

    t183 = (x1261%(x1262>(x1263/x1264)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x1265 = -14;
	uint64_t x1266 = 914LLU;
	uint32_t x1267 = 3U;
	uint8_t x1268 = UINT8_MAX;
	static volatile int32_t t184 = -125;

    t184 = (x1265%(x1266>(x1267/x1268)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1269 = UINT16_MAX;
	int16_t x1270 = INT16_MIN;
	uint32_t x1271 = UINT32_MAX;

    t185 = (x1269%(x1270>(x1271/x1272)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1273 = INT32_MIN;
	int32_t x1274 = 36;
	static volatile uint8_t x1275 = UINT8_MAX;
	int8_t x1276 = INT8_MAX;
	volatile int32_t t186 = 3596;

    t186 = (x1273%(x1274>(x1275/x1276)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1285 = INT16_MIN;
	int64_t x1287 = 1734396262161440LL;
	uint64_t x1288 = UINT64_MAX;
	int32_t t187 = 97715217;

    t187 = (x1285%(x1286>(x1287/x1288)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x1291 = -19LL;
	static int64_t x1292 = INT64_MIN;
	int32_t t188 = 1676;

    t188 = (x1289%(x1290>(x1291/x1292)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x1306 = INT32_MAX;
	int64_t x1307 = 21672233424LL;
	int32_t x1308 = INT32_MAX;
	volatile int32_t t189 = 41900300;

    t189 = (x1305%(x1306>(x1307/x1308)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1309 = 5;
	uint64_t x1310 = 3059629585147LLU;
	int16_t x1311 = INT16_MAX;
	volatile int64_t x1312 = INT64_MIN;
	volatile int32_t t190 = -21148239;

    t190 = (x1309%(x1310>(x1311/x1312)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1321 = UINT64_MAX;
	volatile uint64_t x1322 = 53789123817LLU;
	uint32_t x1323 = UINT32_MAX;
	uint8_t x1324 = 93U;

    t191 = (x1321%(x1322>(x1323/x1324)));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1325 = -1;
	volatile int32_t x1326 = -1214;
	uint32_t x1327 = UINT32_MAX;
	int64_t x1328 = -1LL;
	volatile int32_t t192 = 5060;

    t192 = (x1325%(x1326>(x1327/x1328)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1333 = 56827930LLU;
	int16_t x1334 = INT16_MIN;
	uint64_t x1336 = 3LLU;
	volatile uint64_t t193 = 1531LLU;

    t193 = (x1333%(x1334>(x1335/x1336)));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1341 = INT64_MIN;
	uint16_t x1342 = 380U;
	static int16_t x1344 = -406;
	volatile int64_t t194 = -1112926707305894315LL;

    t194 = (x1341%(x1342>(x1343/x1344)));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1345 = INT64_MIN;
	int16_t x1347 = INT16_MAX;
	uint64_t x1348 = UINT64_MAX;
	static volatile int64_t t195 = 3418089LL;

    t195 = (x1345%(x1346>(x1347/x1348)));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x1349 = INT16_MIN;
	volatile uint8_t x1350 = UINT8_MAX;
	int32_t x1352 = 691517;
	int32_t t196 = -5;

    t196 = (x1349%(x1350>(x1351/x1352)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int16_t x1361 = 6;
	uint16_t x1362 = 206U;
	volatile int32_t x1363 = -1;
	uint16_t x1364 = 1U;

    t197 = (x1361%(x1362>(x1363/x1364)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1370 = INT32_MAX;

    t198 = (x1369%(x1370>(x1371/x1372)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1385 = INT32_MIN;
	uint8_t x1386 = UINT8_MAX;
	volatile int8_t x1387 = -1;
	int8_t x1388 = INT8_MIN;
	int32_t t199 = -13;

    t199 = (x1385%(x1386>(x1387/x1388)));

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


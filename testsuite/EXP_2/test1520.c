
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

volatile uint64_t x13 = UINT64_MAX;
static int32_t x19 = INT32_MIN;
int16_t x25 = 29;
int8_t x26 = -1;
int16_t x27 = -109;
static uint32_t x32 = 0U;
static uint16_t x37 = 21764U;
volatile uint64_t x38 = UINT64_MAX;
int8_t x44 = -1;
int32_t x51 = INT32_MAX;
volatile int32_t x52 = INT32_MAX;
volatile int32_t t10 = 3;
uint8_t x65 = UINT8_MAX;
static int64_t x66 = INT64_MIN;
int8_t x81 = 1;
volatile int32_t t16 = -5763;
int8_t x86 = INT8_MIN;
static int16_t x87 = INT16_MIN;
static int32_t t17 = 20;
volatile uint8_t x109 = 1U;
uint32_t x111 = 33U;
int64_t x116 = -1LL;
uint64_t x117 = 35633307228LLU;
static volatile int64_t x123 = INT64_MAX;
int8_t x130 = 3;
uint16_t x131 = UINT16_MAX;
uint32_t x137 = 58U;
uint16_t x153 = UINT16_MAX;
int64_t x161 = INT64_MAX;
static int32_t t30 = -15;
volatile int8_t x178 = 7;
volatile uint32_t x180 = 17398479U;
volatile uint32_t x181 = UINT32_MAX;
volatile uint8_t x183 = UINT8_MAX;
int8_t x184 = 1;
volatile int32_t t33 = 8656663;
int32_t t34 = 15722334;
uint8_t x189 = 1U;
uint64_t x190 = 391349820384282LLU;
uint8_t x193 = 25U;
uint8_t x194 = 1U;
int16_t x196 = INT16_MAX;
static int32_t x210 = INT32_MAX;
uint8_t x213 = UINT8_MAX;
int32_t x215 = INT32_MAX;
static uint32_t x219 = 384176U;
int64_t x220 = INT64_MAX;
int32_t x221 = INT32_MAX;
int32_t t41 = -814;
uint64_t x233 = 1LLU;
volatile int32_t x247 = INT32_MAX;
int8_t x248 = 14;
int32_t t43 = -321508;
static int32_t x250 = 1308503;
static int64_t x252 = INT64_MIN;
static int32_t t44 = -154164;
int32_t t45 = -3294177;
volatile int64_t x268 = -16014802LL;
volatile uint16_t x281 = 1850U;
static uint64_t x297 = 3177LLU;
int8_t x298 = -1;
uint16_t x300 = 292U;
int8_t x310 = INT8_MAX;
int64_t x323 = INT64_MIN;
int32_t t52 = 47568;
static uint16_t x327 = 22901U;
int64_t x366 = INT64_MIN;
int8_t x368 = INT8_MAX;
static int64_t x369 = 776LL;
int8_t x371 = INT8_MAX;
uint16_t x372 = 6423U;
static uint32_t x376 = UINT32_MAX;
int64_t x378 = 14854699LL;
uint16_t x382 = UINT16_MAX;
int32_t t60 = 31;
uint8_t x387 = UINT8_MAX;
static uint16_t x390 = UINT16_MAX;
volatile int32_t t62 = 16518778;
uint16_t x401 = UINT16_MAX;
int32_t x402 = INT32_MIN;
volatile int8_t x404 = -1;
static int32_t t65 = -102192747;
static uint16_t x431 = UINT16_MAX;
int32_t t66 = -18;
volatile uint64_t x433 = 50243555LLU;
uint8_t x436 = 4U;
volatile int32_t t67 = -971295103;
uint8_t x438 = 44U;
int8_t x448 = -2;
volatile int8_t x457 = INT8_MAX;
uint8_t x465 = 15U;
uint8_t x467 = 1U;
static uint8_t x468 = 0U;
volatile uint8_t x473 = UINT8_MAX;
int8_t x475 = -1;
uint8_t x476 = 55U;
volatile int32_t t77 = -4713;
uint64_t x499 = 12354153691LLU;
int16_t x500 = -1;
volatile int32_t x510 = INT32_MAX;
uint8_t x515 = 29U;
static int8_t x520 = -1;
uint64_t x528 = 1396325769837480639LLU;
int16_t x534 = 807;
volatile uint16_t x536 = 10903U;
volatile int16_t x556 = INT16_MIN;
volatile uint32_t x569 = UINT32_MAX;
static volatile int8_t x572 = 27;
int16_t x576 = 222;
uint32_t x588 = 288U;
static int32_t t91 = 494655;
volatile int32_t x590 = INT32_MIN;
int32_t x591 = 470;
uint16_t x592 = UINT16_MAX;
volatile int8_t x594 = 21;
volatile int32_t x595 = -360077433;
int32_t x596 = 204;
int32_t x599 = INT32_MAX;
int32_t t94 = -658;
static volatile uint8_t x602 = 1U;
static int32_t t95 = -699988795;
int64_t x610 = 15710LL;
int32_t t97 = -673340200;
static int8_t x619 = INT8_MAX;
volatile int32_t t99 = 38;
volatile int16_t x627 = -1;
volatile int32_t t100 = -432;
uint8_t x633 = 55U;
int32_t t103 = -111753;
int16_t x679 = INT16_MIN;
int32_t t106 = 109192992;
static uint16_t x685 = 11U;
static volatile uint32_t x688 = UINT32_MAX;
static int32_t x693 = 911;
volatile int16_t x695 = -203;
volatile uint16_t x702 = 1192U;
uint16_t x725 = 4822U;
int32_t x737 = INT32_MAX;
static uint8_t x763 = UINT8_MAX;
int64_t x764 = 735227787956453LL;
static int16_t x765 = 0;
int32_t x769 = INT32_MAX;
static int64_t x775 = 414549493LL;
volatile int32_t t118 = -15340872;
static int32_t x790 = INT32_MIN;
int16_t x793 = INT16_MAX;
static uint8_t x798 = 4U;
volatile int8_t x800 = -22;
static uint32_t x807 = 6964U;
int32_t x808 = 1;
static int16_t x839 = 17;
uint16_t x859 = 1U;
volatile int32_t t130 = -2;
int32_t t131 = -25708;
uint32_t x871 = UINT32_MAX;
int32_t x872 = INT32_MIN;
volatile int32_t t132 = 0;
static int8_t x874 = INT8_MIN;
int16_t x875 = INT16_MAX;
int8_t x887 = 4;
volatile int32_t t134 = 21965;
static uint8_t x889 = 1U;
volatile int64_t x892 = INT64_MIN;
int32_t t135 = 442915645;
volatile uint64_t x901 = 2687404199LLU;
int64_t x919 = -27160066934587231LL;
int32_t x921 = 0;
static int8_t x924 = INT8_MIN;
volatile int16_t x935 = INT16_MIN;
int32_t t140 = -4;
int32_t x946 = INT32_MIN;
volatile int32_t x964 = INT32_MIN;
uint64_t x974 = UINT64_MAX;
static volatile uint32_t x981 = 2U;
volatile int32_t x989 = INT32_MAX;
int64_t x990 = 37353027812LL;
int32_t x999 = INT32_MIN;
int8_t x1040 = INT8_MIN;
int32_t t151 = -44;
int16_t x1053 = INT16_MAX;
int32_t x1054 = INT32_MIN;
static uint32_t x1055 = 13U;
int32_t t154 = 114741;
volatile int32_t t155 = 480199894;
volatile int16_t x1073 = INT16_MAX;
uint16_t x1074 = UINT16_MAX;
uint32_t x1080 = 13U;
int16_t x1101 = INT16_MAX;
volatile int32_t t161 = -335;
uint16_t x1109 = 0U;
uint16_t x1112 = 4826U;
int32_t t162 = 464;
uint32_t x1121 = 21U;
int8_t x1122 = -1;
int32_t t164 = 3500636;
volatile int64_t x1167 = INT64_MIN;
uint8_t x1180 = 14U;
uint32_t x1183 = UINT32_MAX;
volatile int32_t t169 = 115380;
uint16_t x1205 = UINT16_MAX;
int16_t x1213 = INT16_MAX;
uint8_t x1215 = 12U;
static uint32_t x1222 = UINT32_MAX;
int32_t t174 = 60761;
int8_t x1260 = INT8_MIN;
uint64_t x1280 = UINT64_MAX;
uint64_t x1299 = UINT64_MAX;
int32_t x1301 = INT32_MAX;
int32_t x1307 = -1;
volatile int8_t x1322 = 1;
volatile uint16_t x1324 = UINT16_MAX;
volatile int32_t t185 = 52272;
static int8_t x1338 = -1;
uint8_t x1342 = 48U;
static int32_t t188 = 1;
int16_t x1356 = -3;
static uint16_t x1361 = 1650U;
int8_t x1363 = -28;
volatile uint16_t x1365 = 3U;
uint16_t x1366 = UINT16_MAX;
uint32_t x1373 = 362125U;
int32_t t193 = 1073443290;
int8_t x1382 = -60;
volatile int32_t t194 = -1;
uint8_t x1386 = UINT8_MAX;
int8_t x1397 = INT8_MAX;
int16_t x1399 = -11823;
int8_t x1403 = -1;
uint64_t x1405 = 546963LLU;
static volatile int32_t t198 = 181;
int32_t t199 = -77210201;


void f0(void) {
    	int8_t x9 = 0;
	int32_t x10 = INT32_MIN;
	uint32_t x11 = 509079128U;
	int16_t x12 = INT16_MAX;
	int32_t t0 = 1039284069;

    t0 = ((x9>>(x10==x11))==x12);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x14 = INT8_MAX;
	int8_t x15 = -1;
	uint32_t x16 = 1305U;
	static volatile int32_t t1 = 2721499;

    t1 = ((x13>>(x14==x15))==x16);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x17 = UINT32_MAX;
	volatile int16_t x18 = INT16_MIN;
	uint32_t x20 = UINT32_MAX;
	volatile int32_t t2 = 1657804;

    t2 = ((x17>>(x18==x19))==x20);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x21 = 2LLU;
	volatile uint64_t x22 = UINT64_MAX;
	int32_t x23 = INT32_MIN;
	int8_t x24 = -36;
	volatile int32_t t3 = 353123;

    t3 = ((x21>>(x22==x23))==x24);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x28 = -4;
	int32_t t4 = -1011378192;

    t4 = ((x25>>(x26==x27))==x28);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x29 = 4;
	int16_t x30 = 85;
	static uint32_t x31 = UINT32_MAX;
	int32_t t5 = -1;

    t5 = ((x29>>(x30==x31))==x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x33 = 215U;
	static volatile int32_t x34 = -6657401;
	volatile int32_t x35 = INT32_MIN;
	int16_t x36 = 6;
	volatile int32_t t6 = 19316376;

    t6 = ((x33>>(x34==x35))==x36);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x39 = INT8_MIN;
	uint64_t x40 = 80509174599LLU;
	volatile int32_t t7 = 110;

    t7 = ((x37>>(x38==x39))==x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x41 = 59U;
	uint16_t x42 = UINT16_MAX;
	int8_t x43 = INT8_MAX;
	volatile int32_t t8 = 8302527;

    t8 = ((x41>>(x42==x43))==x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x45 = INT64_MAX;
	volatile int32_t x46 = 3;
	static int8_t x47 = INT8_MIN;
	volatile int32_t x48 = 260855204;
	int32_t t9 = 15;

    t9 = ((x45>>(x46==x47))==x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x49 = UINT64_MAX;
	int32_t x50 = -51414094;

    t10 = ((x49>>(x50==x51))==x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x53 = UINT32_MAX;
	volatile uint8_t x54 = 9U;
	volatile int64_t x55 = 214703040233096135LL;
	int16_t x56 = -10;
	int32_t t11 = 99237;

    t11 = ((x53>>(x54==x55))==x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x61 = INT64_MAX;
	int8_t x62 = 0;
	static int8_t x63 = INT8_MAX;
	static uint8_t x64 = 14U;
	int32_t t12 = -13;

    t12 = ((x61>>(x62==x63))==x64);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x67 = -7360700;
	uint8_t x68 = UINT8_MAX;
	static volatile int32_t t13 = 22;

    t13 = ((x65>>(x66==x67))==x68);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x69 = 559U;
	int8_t x70 = 61;
	int64_t x71 = -92LL;
	int8_t x72 = 11;
	volatile int32_t t14 = 1998;

    t14 = ((x69>>(x70==x71))==x72);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x73 = 32447677;
	int64_t x74 = INT64_MIN;
	int32_t x75 = INT32_MAX;
	int8_t x76 = -1;
	int32_t t15 = -303254807;

    t15 = ((x73>>(x74==x75))==x76);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x82 = -20;
	volatile int64_t x83 = -1LL;
	int64_t x84 = INT64_MAX;

    t16 = ((x81>>(x82==x83))==x84);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x85 = INT16_MAX;
	int16_t x88 = 98;

    t17 = ((x85>>(x86==x87))==x88);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x89 = 24098;
	uint64_t x90 = UINT64_MAX;
	volatile int32_t x91 = -1;
	int8_t x92 = INT8_MIN;
	volatile int32_t t18 = -6409148;

    t18 = ((x89>>(x90==x91))==x92);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x101 = INT64_MAX;
	uint64_t x102 = 217995542956LLU;
	uint16_t x103 = 95U;
	volatile int8_t x104 = INT8_MIN;
	int32_t t19 = 1;

    t19 = ((x101>>(x102==x103))==x104);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x105 = 3987772U;
	int16_t x106 = INT16_MAX;
	int32_t x107 = -369;
	static volatile int32_t x108 = INT32_MIN;
	static volatile int32_t t20 = 8682;

    t20 = ((x105>>(x106==x107))==x108);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x110 = 1083432LLU;
	static int8_t x112 = -10;
	int32_t t21 = -5006;

    t21 = ((x109>>(x110==x111))==x112);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x113 = 25735449018259204LLU;
	uint16_t x114 = 63U;
	int32_t x115 = INT32_MIN;
	static volatile int32_t t22 = 0;

    t22 = ((x113>>(x114==x115))==x116);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x118 = 50927372680672779LLU;
	int8_t x119 = -1;
	static int64_t x120 = INT64_MIN;
	static volatile int32_t t23 = 1;

    t23 = ((x117>>(x118==x119))==x120);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x121 = 42;
	uint8_t x122 = 2U;
	int64_t x124 = -1282344210560LL;
	int32_t t24 = -15299;

    t24 = ((x121>>(x122==x123))==x124);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x129 = 134U;
	int8_t x132 = 8;
	volatile int32_t t25 = -68;

    t25 = ((x129>>(x130==x131))==x132);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x138 = 13;
	int8_t x139 = 5;
	volatile int16_t x140 = -1;
	volatile int32_t t26 = 0;

    t26 = ((x137>>(x138==x139))==x140);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x149 = 0U;
	volatile int8_t x150 = 4;
	uint16_t x151 = 710U;
	static int32_t x152 = INT32_MAX;
	volatile int32_t t27 = -14989;

    t27 = ((x149>>(x150==x151))==x152);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x154 = UINT16_MAX;
	int8_t x155 = -1;
	int32_t x156 = INT32_MAX;
	volatile int32_t t28 = 15068336;

    t28 = ((x153>>(x154==x155))==x156);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x157 = 237749LLU;
	static int32_t x158 = INT32_MAX;
	uint32_t x159 = 25U;
	int64_t x160 = 64322089572LL;
	volatile int32_t t29 = -123418842;

    t29 = ((x157>>(x158==x159))==x160);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x162 = 141545LLU;
	int16_t x163 = -1;
	int32_t x164 = INT32_MIN;

    t30 = ((x161>>(x162==x163))==x164);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x165 = INT32_MAX;
	static uint32_t x166 = 573U;
	volatile uint16_t x167 = UINT16_MAX;
	volatile uint16_t x168 = 235U;
	volatile int32_t t31 = -12955;

    t31 = ((x165>>(x166==x167))==x168);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x177 = 12U;
	int32_t x179 = -1;
	static volatile int32_t t32 = 1;

    t32 = ((x177>>(x178==x179))==x180);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x182 = 0;

    t33 = ((x181>>(x182==x183))==x184);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x185 = 904205;
	static volatile int16_t x186 = 7;
	uint8_t x187 = 2U;
	volatile int16_t x188 = 1;

    t34 = ((x185>>(x186==x187))==x188);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x191 = 17930133446242409LLU;
	uint8_t x192 = 0U;
	volatile int32_t t35 = 282577773;

    t35 = ((x189>>(x190==x191))==x192);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x195 = INT64_MIN;
	int32_t t36 = -1944237;

    t36 = ((x193>>(x194==x195))==x196);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x205 = 925029803U;
	int16_t x206 = -9;
	int8_t x207 = INT8_MIN;
	volatile int32_t x208 = INT32_MIN;
	volatile int32_t t37 = 422858001;

    t37 = ((x205>>(x206==x207))==x208);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x209 = UINT32_MAX;
	int16_t x211 = INT16_MAX;
	int32_t x212 = 987372748;
	volatile int32_t t38 = -64;

    t38 = ((x209>>(x210==x211))==x212);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x214 = 35;
	int64_t x216 = 307LL;
	int32_t t39 = 46549916;

    t39 = ((x213>>(x214==x215))==x216);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x217 = 38U;
	uint8_t x218 = 14U;
	volatile int32_t t40 = -132;

    t40 = ((x217>>(x218==x219))==x220);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x222 = INT64_MAX;
	uint32_t x223 = 1269U;
	uint16_t x224 = 28U;

    t41 = ((x221>>(x222==x223))==x224);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x234 = 363;
	volatile uint8_t x235 = 28U;
	uint16_t x236 = 0U;
	int32_t t42 = 2945402;

    t42 = ((x233>>(x234==x235))==x236);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x245 = 5U;
	static int8_t x246 = INT8_MIN;

    t43 = ((x245>>(x246==x247))==x248);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x249 = 2U;
	static int8_t x251 = 5;

    t44 = ((x249>>(x250==x251))==x252);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x253 = 5627362025LLU;
	static int32_t x254 = INT32_MIN;
	int8_t x255 = INT8_MAX;
	int8_t x256 = INT8_MIN;

    t45 = ((x253>>(x254==x255))==x256);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x257 = UINT64_MAX;
	int32_t x258 = -1;
	volatile int16_t x259 = -18;
	int8_t x260 = 1;
	static int32_t t46 = 29;

    t46 = ((x257>>(x258==x259))==x260);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x265 = 107220958321864613LLU;
	volatile int32_t x266 = INT32_MIN;
	volatile int64_t x267 = -275317202213169797LL;
	volatile int32_t t47 = 533;

    t47 = ((x265>>(x266==x267))==x268);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x277 = 441132785592570LLU;
	int64_t x278 = INT64_MIN;
	int32_t x279 = 41927369;
	int16_t x280 = -1;
	int32_t t48 = 14;

    t48 = ((x277>>(x278==x279))==x280);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x282 = 255943440;
	uint8_t x283 = UINT8_MAX;
	volatile int64_t x284 = INT64_MIN;
	volatile int32_t t49 = -5082;

    t49 = ((x281>>(x282==x283))==x284);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x299 = -22292081468LL;
	volatile int32_t t50 = -2000530;

    t50 = ((x297>>(x298==x299))==x300);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x309 = INT32_MAX;
	volatile int16_t x311 = INT16_MIN;
	static int16_t x312 = 3579;
	int32_t t51 = 24;

    t51 = ((x309>>(x310==x311))==x312);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint8_t x321 = 0U;
	int16_t x322 = -1;
	static uint32_t x324 = 98U;

    t52 = ((x321>>(x322==x323))==x324);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x325 = 48U;
	static uint32_t x326 = UINT32_MAX;
	static int8_t x328 = -1;
	volatile int32_t t53 = 169;

    t53 = ((x325>>(x326==x327))==x328);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x337 = 12U;
	volatile uint8_t x338 = 13U;
	int64_t x339 = INT64_MAX;
	static int8_t x340 = INT8_MAX;
	volatile int32_t t54 = 1;

    t54 = ((x337>>(x338==x339))==x340);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x341 = 10U;
	static uint32_t x342 = 0U;
	int16_t x343 = INT16_MIN;
	int16_t x344 = INT16_MIN;
	int32_t t55 = -259448;

    t55 = ((x341>>(x342==x343))==x344);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x365 = INT32_MAX;
	int32_t x367 = 126621094;
	static int32_t t56 = 223;

    t56 = ((x365>>(x366==x367))==x368);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x370 = INT8_MIN;
	static int32_t t57 = -7;

    t57 = ((x369>>(x370==x371))==x372);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x373 = 76075188725896616LL;
	int64_t x374 = INT64_MAX;
	uint8_t x375 = 3U;
	int32_t t58 = 2752;

    t58 = ((x373>>(x374==x375))==x376);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x377 = 3667329U;
	int64_t x379 = -51038341095390LL;
	static uint32_t x380 = 2989U;
	int32_t t59 = 15;

    t59 = ((x377>>(x378==x379))==x380);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x381 = UINT32_MAX;
	uint16_t x383 = 6099U;
	uint32_t x384 = UINT32_MAX;

    t60 = ((x381>>(x382==x383))==x384);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x385 = INT16_MAX;
	int32_t x386 = INT32_MIN;
	int64_t x388 = -6859714354LL;
	static int32_t t61 = -200;

    t61 = ((x385>>(x386==x387))==x388);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x389 = 3;
	static int8_t x391 = INT8_MIN;
	int8_t x392 = 28;

    t62 = ((x389>>(x390==x391))==x392);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x393 = 101667050U;
	volatile uint32_t x394 = 672U;
	uint8_t x395 = UINT8_MAX;
	uint32_t x396 = 6550U;
	volatile int32_t t63 = 471010075;

    t63 = ((x393>>(x394==x395))==x396);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x397 = 3455;
	static uint8_t x398 = 3U;
	static int8_t x399 = INT8_MIN;
	uint16_t x400 = 0U;
	static volatile int32_t t64 = 7520037;

    t64 = ((x397>>(x398==x399))==x400);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x403 = 1;

    t65 = ((x401>>(x402==x403))==x404);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x429 = 231542U;
	static volatile int32_t x430 = -196677;
	int32_t x432 = INT32_MIN;

    t66 = ((x429>>(x430==x431))==x432);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x434 = -1LL;
	int8_t x435 = 6;

    t67 = ((x433>>(x434==x435))==x436);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x437 = 37U;
	int16_t x439 = INT16_MIN;
	volatile uint64_t x440 = UINT64_MAX;
	static int32_t t68 = -93302526;

    t68 = ((x437>>(x438==x439))==x440);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x441 = 1;
	static volatile int64_t x442 = INT64_MIN;
	int32_t x443 = -1;
	int32_t x444 = -1;
	static int32_t t69 = 12;

    t69 = ((x441>>(x442==x443))==x444);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x445 = 705048;
	volatile int8_t x446 = -1;
	int32_t x447 = 240188;
	int32_t t70 = 13676;

    t70 = ((x445>>(x446==x447))==x448);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x458 = INT16_MIN;
	static int64_t x459 = 1513486LL;
	uint64_t x460 = 103LLU;
	int32_t t71 = 1243069;

    t71 = ((x457>>(x458==x459))==x460);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x461 = 121U;
	int8_t x462 = INT8_MIN;
	volatile int32_t x463 = INT32_MAX;
	uint8_t x464 = 28U;
	volatile int32_t t72 = 1;

    t72 = ((x461>>(x462==x463))==x464);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x466 = INT64_MAX;
	volatile int32_t t73 = 37993036;

    t73 = ((x465>>(x466==x467))==x468);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x469 = 607;
	volatile int64_t x470 = INT64_MAX;
	int32_t x471 = INT32_MIN;
	static uint32_t x472 = 0U;
	static int32_t t74 = 13815142;

    t74 = ((x469>>(x470==x471))==x472);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x474 = 0;
	volatile int32_t t75 = 698706;

    t75 = ((x473>>(x474==x475))==x476);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x477 = 1LLU;
	volatile int32_t x478 = -1;
	int64_t x479 = INT64_MIN;
	uint8_t x480 = 0U;
	static volatile int32_t t76 = 6203;

    t76 = ((x477>>(x478==x479))==x480);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x481 = 1;
	int32_t x482 = 161;
	uint8_t x483 = 3U;
	static int16_t x484 = 721;

    t77 = ((x481>>(x482==x483))==x484);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x493 = 738;
	uint64_t x494 = 280598864532908LLU;
	int32_t x495 = INT32_MAX;
	int8_t x496 = -1;
	int32_t t78 = -2150;

    t78 = ((x493>>(x494==x495))==x496);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x497 = 3489687429781441743LLU;
	int64_t x498 = INT64_MIN;
	static int32_t t79 = -457;

    t79 = ((x497>>(x498==x499))==x500);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x505 = INT64_MAX;
	volatile uint16_t x506 = 5173U;
	volatile int32_t x507 = -1;
	volatile uint32_t x508 = 1285607U;
	int32_t t80 = -11453;

    t80 = ((x505>>(x506==x507))==x508);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int8_t x509 = INT8_MAX;
	int64_t x511 = -1LL;
	int64_t x512 = -1602876189803LL;
	volatile int32_t t81 = -215;

    t81 = ((x509>>(x510==x511))==x512);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x513 = INT32_MAX;
	uint16_t x514 = 18415U;
	uint16_t x516 = 0U;
	volatile int32_t t82 = 26455102;

    t82 = ((x513>>(x514==x515))==x516);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x517 = 19U;
	volatile int32_t x518 = INT32_MAX;
	volatile uint64_t x519 = 23497LLU;
	volatile int32_t t83 = 2;

    t83 = ((x517>>(x518==x519))==x520);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x525 = INT32_MAX;
	int16_t x526 = -7215;
	int32_t x527 = INT32_MAX;
	volatile int32_t t84 = 2420674;

    t84 = ((x525>>(x526==x527))==x528);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x533 = 454LL;
	int32_t x535 = INT32_MAX;
	volatile int32_t t85 = 2;

    t85 = ((x533>>(x534==x535))==x536);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x553 = 68553U;
	int32_t x554 = INT32_MIN;
	int8_t x555 = INT8_MIN;
	volatile int32_t t86 = -17;

    t86 = ((x553>>(x554==x555))==x556);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x561 = 3LL;
	volatile int64_t x562 = -4199143980065LL;
	int32_t x563 = -1;
	volatile uint16_t x564 = 42U;
	volatile int32_t t87 = 1;

    t87 = ((x561>>(x562==x563))==x564);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x565 = UINT32_MAX;
	int32_t x566 = INT32_MIN;
	int64_t x567 = INT64_MAX;
	int32_t x568 = INT32_MAX;
	int32_t t88 = -2022;

    t88 = ((x565>>(x566==x567))==x568);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x570 = -1;
	volatile int32_t x571 = INT32_MIN;
	volatile int32_t t89 = 38;

    t89 = ((x569>>(x570==x571))==x572);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x573 = 73264799U;
	int64_t x574 = INT64_MIN;
	uint16_t x575 = UINT16_MAX;
	static volatile int32_t t90 = -967328069;

    t90 = ((x573>>(x574==x575))==x576);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x585 = UINT32_MAX;
	int32_t x586 = INT32_MAX;
	int16_t x587 = INT16_MIN;

    t91 = ((x585>>(x586==x587))==x588);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x589 = 1U;
	volatile int32_t t92 = 934276476;

    t92 = ((x589>>(x590==x591))==x592);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x593 = 691549804045LLU;
	int32_t t93 = -225;

    t93 = ((x593>>(x594==x595))==x596);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x597 = 4467955013142183LL;
	volatile int16_t x598 = -4876;
	uint64_t x600 = 2LLU;

    t94 = ((x597>>(x598==x599))==x600);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x601 = INT32_MAX;
	int8_t x603 = INT8_MIN;
	uint16_t x604 = 26U;

    t95 = ((x601>>(x602==x603))==x604);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x605 = 8344477549444006LLU;
	static int16_t x606 = INT16_MIN;
	int64_t x607 = 1435951473202LL;
	uint8_t x608 = UINT8_MAX;
	int32_t t96 = -81486295;

    t96 = ((x605>>(x606==x607))==x608);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x609 = INT64_MAX;
	int16_t x611 = INT16_MIN;
	volatile int32_t x612 = INT32_MIN;

    t97 = ((x609>>(x610==x611))==x612);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x613 = 1832777LLU;
	int8_t x614 = INT8_MAX;
	uint64_t x615 = UINT64_MAX;
	int64_t x616 = -4314LL;
	static int32_t t98 = 3;

    t98 = ((x613>>(x614==x615))==x616);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x617 = 112;
	int16_t x618 = INT16_MIN;
	volatile int32_t x620 = INT32_MIN;

    t99 = ((x617>>(x618==x619))==x620);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x625 = 20U;
	int16_t x626 = -1;
	uint8_t x628 = 0U;

    t100 = ((x625>>(x626==x627))==x628);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x634 = INT8_MIN;
	int16_t x635 = INT16_MAX;
	static uint8_t x636 = 105U;
	static int32_t t101 = 242;

    t101 = ((x633>>(x634==x635))==x636);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x637 = 28321;
	volatile int8_t x638 = INT8_MAX;
	volatile uint64_t x639 = 130478655LLU;
	volatile int16_t x640 = 1622;
	int32_t t102 = 234;

    t102 = ((x637>>(x638==x639))==x640);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x641 = 15828329U;
	uint8_t x642 = 43U;
	int16_t x643 = -1;
	uint32_t x644 = UINT32_MAX;

    t103 = ((x641>>(x642==x643))==x644);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x649 = UINT8_MAX;
	int32_t x650 = 677739431;
	int32_t x651 = -3092760;
	int8_t x652 = INT8_MIN;
	volatile int32_t t104 = 24187;

    t104 = ((x649>>(x650==x651))==x652);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x677 = 3U;
	uint16_t x678 = 65U;
	static int8_t x680 = -13;
	static volatile int32_t t105 = -358394;

    t105 = ((x677>>(x678==x679))==x680);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x681 = 2400706LLU;
	uint64_t x682 = 103165978077192LLU;
	int16_t x683 = INT16_MIN;
	int16_t x684 = -1;

    t106 = ((x681>>(x682==x683))==x684);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x686 = UINT64_MAX;
	static volatile int16_t x687 = INT16_MAX;
	int32_t t107 = -387;

    t107 = ((x685>>(x686==x687))==x688);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x689 = 102;
	volatile uint8_t x690 = 8U;
	static volatile uint16_t x691 = 30U;
	volatile int32_t x692 = -1;
	int32_t t108 = 33177127;

    t108 = ((x689>>(x690==x691))==x692);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x694 = INT16_MAX;
	volatile uint32_t x696 = UINT32_MAX;
	volatile int32_t t109 = 50;

    t109 = ((x693>>(x694==x695))==x696);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x701 = 5326740U;
	static volatile int32_t x703 = 3728382;
	uint16_t x704 = 100U;
	volatile int32_t t110 = -873;

    t110 = ((x701>>(x702==x703))==x704);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x709 = 4467618486246080LLU;
	int64_t x710 = INT64_MAX;
	static int32_t x711 = INT32_MIN;
	uint8_t x712 = UINT8_MAX;
	volatile int32_t t111 = -40;

    t111 = ((x709>>(x710==x711))==x712);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x726 = 802244489U;
	int16_t x727 = -1;
	volatile int16_t x728 = INT16_MIN;
	int32_t t112 = -6723;

    t112 = ((x725>>(x726==x727))==x728);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x738 = 1;
	int8_t x739 = -9;
	uint64_t x740 = UINT64_MAX;
	int32_t t113 = 7;

    t113 = ((x737>>(x738==x739))==x740);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x741 = 5319786U;
	int8_t x742 = 0;
	uint8_t x743 = 56U;
	int32_t x744 = INT32_MIN;
	int32_t t114 = -27655106;

    t114 = ((x741>>(x742==x743))==x744);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x761 = 192U;
	static int16_t x762 = -1;
	int32_t t115 = -2;

    t115 = ((x761>>(x762==x763))==x764);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x766 = 353U;
	int16_t x767 = -1;
	volatile uint64_t x768 = 1581302267LLU;
	int32_t t116 = -3;

    t116 = ((x765>>(x766==x767))==x768);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x770 = INT8_MIN;
	int8_t x771 = INT8_MIN;
	int64_t x772 = INT64_MIN;
	static volatile int32_t t117 = 43875289;

    t117 = ((x769>>(x770==x771))==x772);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x773 = UINT32_MAX;
	volatile int16_t x774 = 6;
	uint64_t x776 = 50LLU;

    t118 = ((x773>>(x774==x775))==x776);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x777 = 125U;
	static uint32_t x778 = 38835U;
	int16_t x779 = 0;
	static int16_t x780 = -1;
	int32_t t119 = 0;

    t119 = ((x777>>(x778==x779))==x780);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x781 = 5720663426328358323LLU;
	volatile int64_t x782 = -1LL;
	int64_t x783 = -1LL;
	int64_t x784 = -1LL;
	int32_t t120 = -11;

    t120 = ((x781>>(x782==x783))==x784);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x785 = UINT8_MAX;
	int64_t x786 = INT64_MIN;
	volatile int64_t x787 = INT64_MAX;
	volatile uint64_t x788 = UINT64_MAX;
	int32_t t121 = 3;

    t121 = ((x785>>(x786==x787))==x788);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x789 = INT32_MAX;
	int64_t x791 = 7278799LL;
	static volatile int16_t x792 = 3787;
	volatile int32_t t122 = -8;

    t122 = ((x789>>(x790==x791))==x792);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x794 = 853087419;
	int8_t x795 = 1;
	static uint16_t x796 = 4028U;
	volatile int32_t t123 = -368235;

    t123 = ((x793>>(x794==x795))==x796);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x797 = 22151349135486LLU;
	int8_t x799 = 1;
	static volatile int32_t t124 = -52;

    t124 = ((x797>>(x798==x799))==x800);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x805 = 1534402U;
	static int64_t x806 = INT64_MIN;
	static int32_t t125 = -920248;

    t125 = ((x805>>(x806==x807))==x808);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x821 = 8;
	int32_t x822 = -1;
	int8_t x823 = INT8_MIN;
	static volatile uint8_t x824 = 18U;
	int32_t t126 = 1;

    t126 = ((x821>>(x822==x823))==x824);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x825 = INT8_MAX;
	static volatile uint64_t x826 = 4389LLU;
	volatile uint64_t x827 = 62LLU;
	int32_t x828 = INT32_MIN;
	static volatile int32_t t127 = -1937;

    t127 = ((x825>>(x826==x827))==x828);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x837 = 3748;
	volatile uint32_t x838 = 400649U;
	int16_t x840 = 0;
	int32_t t128 = -1;

    t128 = ((x837>>(x838==x839))==x840);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x849 = UINT16_MAX;
	int16_t x850 = INT16_MAX;
	uint32_t x851 = 39598087U;
	uint32_t x852 = 89694U;
	static int32_t t129 = 0;

    t129 = ((x849>>(x850==x851))==x852);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x857 = INT16_MAX;
	static int8_t x858 = INT8_MIN;
	int16_t x860 = INT16_MIN;

    t130 = ((x857>>(x858==x859))==x860);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x861 = 3;
	int8_t x862 = -2;
	uint8_t x863 = UINT8_MAX;
	static int64_t x864 = 4641259389LL;

    t131 = ((x861>>(x862==x863))==x864);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x869 = UINT64_MAX;
	int16_t x870 = -1662;

    t132 = ((x869>>(x870==x871))==x872);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x873 = INT32_MAX;
	int16_t x876 = INT16_MIN;
	volatile int32_t t133 = 2;

    t133 = ((x873>>(x874==x875))==x876);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x885 = 856U;
	int64_t x886 = INT64_MIN;
	uint64_t x888 = 4816LLU;

    t134 = ((x885>>(x886==x887))==x888);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x890 = -22;
	int8_t x891 = 31;

    t135 = ((x889>>(x890==x891))==x892);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x902 = INT64_MIN;
	int64_t x903 = -1LL;
	int8_t x904 = -7;
	static int32_t t136 = 48556525;

    t136 = ((x901>>(x902==x903))==x904);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x909 = 3U;
	uint32_t x910 = 7137578U;
	uint32_t x911 = UINT32_MAX;
	int8_t x912 = 23;
	int32_t t137 = 0;

    t137 = ((x909>>(x910==x911))==x912);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x917 = 0U;
	volatile uint32_t x918 = 107U;
	uint32_t x920 = UINT32_MAX;
	volatile int32_t t138 = 8515;

    t138 = ((x917>>(x918==x919))==x920);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x922 = INT8_MIN;
	int32_t x923 = INT32_MAX;
	volatile int32_t t139 = -1;

    t139 = ((x921>>(x922==x923))==x924);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x933 = 125839;
	volatile uint64_t x934 = 72467104013921421LLU;
	int64_t x936 = INT64_MAX;

    t140 = ((x933>>(x934==x935))==x936);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x937 = INT16_MAX;
	uint32_t x938 = UINT32_MAX;
	int32_t x939 = INT32_MAX;
	int16_t x940 = -3;
	static int32_t t141 = -2047494;

    t141 = ((x937>>(x938==x939))==x940);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x945 = UINT16_MAX;
	int8_t x947 = INT8_MAX;
	volatile uint16_t x948 = 3362U;
	static volatile int32_t t142 = -14593048;

    t142 = ((x945>>(x946==x947))==x948);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x961 = UINT16_MAX;
	int16_t x962 = -1;
	int8_t x963 = -1;
	int32_t t143 = 0;

    t143 = ((x961>>(x962==x963))==x964);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x969 = 6235U;
	static volatile int32_t x970 = INT32_MAX;
	volatile int8_t x971 = -1;
	int16_t x972 = INT16_MIN;
	int32_t t144 = -3712;

    t144 = ((x969>>(x970==x971))==x972);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x973 = 3425U;
	static int8_t x975 = INT8_MAX;
	volatile int64_t x976 = INT64_MAX;
	int32_t t145 = -29239;

    t145 = ((x973>>(x974==x975))==x976);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x982 = UINT16_MAX;
	int32_t x983 = INT32_MIN;
	int32_t x984 = -60820;
	volatile int32_t t146 = 4510;

    t146 = ((x981>>(x982==x983))==x984);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x991 = -15;
	int64_t x992 = -1LL;
	static int32_t t147 = 418911;

    t147 = ((x989>>(x990==x991))==x992);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x993 = UINT8_MAX;
	int64_t x994 = -617833931856551LL;
	int8_t x995 = INT8_MIN;
	int64_t x996 = INT64_MIN;
	volatile int32_t t148 = 665228629;

    t148 = ((x993>>(x994==x995))==x996);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x997 = INT64_MAX;
	int8_t x998 = -7;
	int16_t x1000 = -2;
	volatile int32_t t149 = 28182530;

    t149 = ((x997>>(x998==x999))==x1000);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x1017 = 10112160LLU;
	volatile int32_t x1018 = -1;
	uint8_t x1019 = UINT8_MAX;
	int32_t x1020 = -50;
	static int32_t t150 = -270027574;

    t150 = ((x1017>>(x1018==x1019))==x1020);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x1037 = 283U;
	volatile int32_t x1038 = INT32_MIN;
	uint8_t x1039 = UINT8_MAX;

    t151 = ((x1037>>(x1038==x1039))==x1040);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x1049 = 657988;
	int32_t x1050 = INT32_MIN;
	static volatile int16_t x1051 = INT16_MIN;
	int8_t x1052 = 1;
	int32_t t152 = 47674;

    t152 = ((x1049>>(x1050==x1051))==x1052);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x1056 = 0U;
	static int32_t t153 = -6599;

    t153 = ((x1053>>(x1054==x1055))==x1056);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1057 = 124;
	uint64_t x1058 = 98590LLU;
	int8_t x1059 = INT8_MIN;
	uint32_t x1060 = UINT32_MAX;

    t154 = ((x1057>>(x1058==x1059))==x1060);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x1065 = 18U;
	uint64_t x1066 = UINT64_MAX;
	int32_t x1067 = -1;
	int32_t x1068 = INT32_MIN;

    t155 = ((x1065>>(x1066==x1067))==x1068);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x1069 = UINT32_MAX;
	int16_t x1070 = 97;
	volatile int16_t x1071 = INT16_MIN;
	int32_t x1072 = INT32_MIN;
	volatile int32_t t156 = 1;

    t156 = ((x1069>>(x1070==x1071))==x1072);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x1075 = INT32_MIN;
	volatile uint8_t x1076 = 1U;
	int32_t t157 = 347521;

    t157 = ((x1073>>(x1074==x1075))==x1076);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1077 = 2;
	int64_t x1078 = INT64_MIN;
	static int16_t x1079 = INT16_MIN;
	volatile int32_t t158 = -31246438;

    t158 = ((x1077>>(x1078==x1079))==x1080);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x1085 = 7U;
	uint64_t x1086 = 2165804297LLU;
	int64_t x1087 = -1LL;
	volatile int64_t x1088 = -1LL;
	int32_t t159 = -6;

    t159 = ((x1085>>(x1086==x1087))==x1088);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x1102 = 7967;
	static int32_t x1103 = -66004490;
	volatile int16_t x1104 = -1;
	static volatile int32_t t160 = 31;

    t160 = ((x1101>>(x1102==x1103))==x1104);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x1105 = 48U;
	uint64_t x1106 = 1202580784769765LLU;
	uint8_t x1107 = 8U;
	uint8_t x1108 = 0U;

    t161 = ((x1105>>(x1106==x1107))==x1108);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x1110 = 16U;
	static int64_t x1111 = -1LL;

    t162 = ((x1109>>(x1110==x1111))==x1112);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x1123 = 0U;
	int16_t x1124 = INT16_MIN;
	volatile int32_t t163 = -76;

    t163 = ((x1121>>(x1122==x1123))==x1124);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x1149 = 3U;
	static int32_t x1150 = INT32_MAX;
	uint16_t x1151 = UINT16_MAX;
	int16_t x1152 = 369;

    t164 = ((x1149>>(x1150==x1151))==x1152);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x1161 = 396390721505488LL;
	static int8_t x1162 = -1;
	uint64_t x1163 = 32762750527095LLU;
	static int64_t x1164 = INT64_MIN;
	int32_t t165 = 25745392;

    t165 = ((x1161>>(x1162==x1163))==x1164);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x1165 = 38U;
	uint64_t x1166 = UINT64_MAX;
	int16_t x1168 = INT16_MIN;
	int32_t t166 = 345;

    t166 = ((x1165>>(x1166==x1167))==x1168);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x1177 = 1;
	static volatile int32_t x1178 = INT32_MIN;
	int32_t x1179 = -1;
	volatile int32_t t167 = 1834;

    t167 = ((x1177>>(x1178==x1179))==x1180);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1181 = INT32_MAX;
	static uint64_t x1182 = UINT64_MAX;
	int16_t x1184 = 467;
	volatile int32_t t168 = 30;

    t168 = ((x1181>>(x1182==x1183))==x1184);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1189 = 0;
	int16_t x1190 = INT16_MIN;
	volatile int16_t x1191 = -1;
	int16_t x1192 = 6836;

    t169 = ((x1189>>(x1190==x1191))==x1192);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1197 = 16840U;
	int8_t x1198 = -1;
	int16_t x1199 = -1;
	static int32_t x1200 = INT32_MIN;
	volatile int32_t t170 = -16339;

    t170 = ((x1197>>(x1198==x1199))==x1200);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x1206 = INT16_MIN;
	int16_t x1207 = -1;
	int64_t x1208 = 47612397LL;
	volatile int32_t t171 = -19458;

    t171 = ((x1205>>(x1206==x1207))==x1208);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x1214 = -1;
	static volatile int8_t x1216 = INT8_MIN;
	int32_t t172 = 15538;

    t172 = ((x1213>>(x1214==x1215))==x1216);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint16_t x1221 = 14732U;
	volatile int8_t x1223 = INT8_MIN;
	int32_t x1224 = 2826;
	volatile int32_t t173 = 0;

    t173 = ((x1221>>(x1222==x1223))==x1224);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1229 = 272;
	int64_t x1230 = INT64_MAX;
	static int64_t x1231 = INT64_MIN;
	int8_t x1232 = INT8_MIN;

    t174 = ((x1229>>(x1230==x1231))==x1232);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1233 = INT8_MAX;
	uint64_t x1234 = 204643560480305LLU;
	volatile int16_t x1235 = -26;
	uint8_t x1236 = 31U;
	static volatile int32_t t175 = 91397;

    t175 = ((x1233>>(x1234==x1235))==x1236);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x1249 = 0;
	int32_t x1250 = INT32_MIN;
	int32_t x1251 = -798098958;
	int16_t x1252 = -1;
	int32_t t176 = 99;

    t176 = ((x1249>>(x1250==x1251))==x1252);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x1257 = 1;
	int64_t x1258 = INT64_MIN;
	volatile int8_t x1259 = -21;
	static volatile int32_t t177 = -4439738;

    t177 = ((x1257>>(x1258==x1259))==x1260);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x1277 = UINT32_MAX;
	int16_t x1278 = 125;
	static int8_t x1279 = 56;
	static volatile int32_t t178 = 1;

    t178 = ((x1277>>(x1278==x1279))==x1280);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1285 = 2U;
	static volatile int8_t x1286 = -1;
	int16_t x1287 = -737;
	static int32_t x1288 = -1;
	int32_t t179 = -144;

    t179 = ((x1285>>(x1286==x1287))==x1288);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x1297 = 2295U;
	int32_t x1298 = -1;
	uint32_t x1300 = UINT32_MAX;
	volatile int32_t t180 = -1919;

    t180 = ((x1297>>(x1298==x1299))==x1300);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x1302 = INT32_MIN;
	static uint32_t x1303 = 0U;
	volatile int16_t x1304 = -1;
	int32_t t181 = 38;

    t181 = ((x1301>>(x1302==x1303))==x1304);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1305 = 181U;
	uint16_t x1306 = 186U;
	uint8_t x1308 = UINT8_MAX;
	volatile int32_t t182 = 10961;

    t182 = ((x1305>>(x1306==x1307))==x1308);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1309 = INT8_MAX;
	static volatile uint64_t x1310 = 19LLU;
	static int64_t x1311 = INT64_MAX;
	int64_t x1312 = INT64_MAX;
	volatile int32_t t183 = 324463;

    t183 = ((x1309>>(x1310==x1311))==x1312);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x1321 = 7U;
	uint32_t x1323 = UINT32_MAX;
	static volatile int32_t t184 = 662;

    t184 = ((x1321>>(x1322==x1323))==x1324);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1329 = UINT64_MAX;
	static uint8_t x1330 = 6U;
	uint64_t x1331 = 2910115072136613405LLU;
	int8_t x1332 = -1;

    t185 = ((x1329>>(x1330==x1331))==x1332);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x1337 = 1;
	int32_t x1339 = INT32_MIN;
	uint8_t x1340 = 14U;
	static int32_t t186 = -5976403;

    t186 = ((x1337>>(x1338==x1339))==x1340);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1341 = 1;
	uint16_t x1343 = UINT16_MAX;
	int32_t x1344 = 19312;
	volatile int32_t t187 = -329;

    t187 = ((x1341>>(x1342==x1343))==x1344);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1345 = 750566757LLU;
	volatile int8_t x1346 = INT8_MIN;
	static uint8_t x1347 = UINT8_MAX;
	int64_t x1348 = INT64_MIN;

    t188 = ((x1345>>(x1346==x1347))==x1348);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1353 = INT16_MAX;
	int16_t x1354 = INT16_MIN;
	uint32_t x1355 = 6098U;
	int32_t t189 = -1859;

    t189 = ((x1353>>(x1354==x1355))==x1356);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1357 = 76580375U;
	int64_t x1358 = -1LL;
	int32_t x1359 = INT32_MIN;
	static int8_t x1360 = -61;
	int32_t t190 = 1887;

    t190 = ((x1357>>(x1358==x1359))==x1360);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1362 = INT64_MIN;
	static int16_t x1364 = INT16_MIN;
	int32_t t191 = 41;

    t191 = ((x1361>>(x1362==x1363))==x1364);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1367 = 0U;
	int32_t x1368 = -7111081;
	static int32_t t192 = -425;

    t192 = ((x1365>>(x1366==x1367))==x1368);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x1374 = -1;
	int16_t x1375 = -1;
	int32_t x1376 = INT32_MIN;

    t193 = ((x1373>>(x1374==x1375))==x1376);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1381 = 62LLU;
	uint8_t x1383 = 60U;
	uint16_t x1384 = UINT16_MAX;

    t194 = ((x1381>>(x1382==x1383))==x1384);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1385 = 7053365U;
	volatile int16_t x1387 = 45;
	volatile int8_t x1388 = INT8_MAX;
	int32_t t195 = 13;

    t195 = ((x1385>>(x1386==x1387))==x1388);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1398 = 3LLU;
	int32_t x1400 = -1;
	int32_t t196 = 107;

    t196 = ((x1397>>(x1398==x1399))==x1400);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x1401 = 2U;
	volatile int64_t x1402 = INT64_MIN;
	uint32_t x1404 = 2315U;
	int32_t t197 = 73472;

    t197 = ((x1401>>(x1402==x1403))==x1404);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1406 = -460740939563LL;
	int16_t x1407 = INT16_MIN;
	uint32_t x1408 = 379772U;

    t198 = ((x1405>>(x1406==x1407))==x1408);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1409 = 0;
	static int64_t x1410 = INT64_MAX;
	volatile uint16_t x1411 = UINT16_MAX;
	static int64_t x1412 = INT64_MIN;

    t199 = ((x1409>>(x1410==x1411))==x1412);

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


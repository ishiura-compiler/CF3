
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

static uint32_t x8 = UINT32_MAX;
static int32_t x14 = INT32_MAX;
static int16_t x29 = 0;
static int16_t x31 = 10;
uint16_t x33 = 2U;
volatile uint16_t x45 = UINT16_MAX;
volatile uint64_t t7 = 261434121601792LLU;
static volatile uint8_t x66 = 40U;
int16_t x76 = -1;
volatile uint8_t x80 = UINT8_MAX;
uint16_t x107 = UINT16_MAX;
static int64_t t13 = -7667LL;
uint64_t x115 = 7103293547491629480LLU;
int64_t x116 = -3440910LL;
volatile uint8_t x137 = UINT8_MAX;
uint16_t x139 = 110U;
int16_t x145 = -3305;
int32_t t20 = -82648;
static int64_t x149 = INT64_MIN;
uint16_t x152 = 18488U;
int64_t x160 = 8416253776665LL;
volatile int32_t t23 = 6;
static int16_t x165 = 15;
uint16_t x168 = UINT16_MAX;
static int8_t x202 = INT8_MAX;
int64_t x209 = INT64_MIN;
uint64_t x213 = 3700608462527LLU;
static uint8_t x214 = 6U;
uint8_t x224 = 75U;
int8_t x225 = INT8_MAX;
static int16_t x227 = 1;
int32_t x231 = -507953;
volatile int64_t x234 = INT64_MAX;
volatile uint16_t x236 = 1993U;
int32_t t35 = 225;
static uint8_t x239 = UINT8_MAX;
volatile int32_t t38 = 856;
int64_t x259 = -886544502757587LL;
uint16_t x260 = 11U;
uint64_t x273 = UINT64_MAX;
int8_t x275 = INT8_MIN;
volatile int32_t x281 = INT32_MAX;
volatile int32_t t42 = -42692;
int64_t x295 = INT64_MIN;
volatile int8_t x296 = -1;
uint32_t x301 = UINT32_MAX;
int64_t x303 = INT64_MIN;
uint8_t x304 = 32U;
int64_t x308 = INT64_MIN;
static int32_t x317 = INT32_MAX;
volatile int32_t t46 = 0;
uint8_t x330 = 11U;
int32_t t47 = 521045;
static volatile int32_t t48 = -607;
uint8_t x355 = 9U;
int32_t t50 = -2711906;
int32_t x366 = INT32_MAX;
static uint8_t x378 = 30U;
uint64_t x380 = 13768LLU;
volatile int64_t t53 = 92505729557943LL;
int32_t x382 = 76793534;
static int16_t x388 = INT16_MIN;
uint16_t x391 = 48U;
volatile int32_t t58 = -12;
volatile int32_t t60 = 165;
int16_t x441 = -1;
static int8_t x443 = -10;
int16_t x444 = -1;
volatile int64_t t64 = -178LL;
uint32_t x466 = 30104921U;
int8_t x473 = INT8_MIN;
int32_t t66 = -577456103;
int64_t x481 = 10193455088276LL;
static int16_t x485 = INT16_MAX;
int8_t x486 = 21;
uint64_t x501 = 334324784358595LLU;
volatile uint64_t t69 = 0LLU;
uint32_t x519 = UINT32_MAX;
uint64_t x531 = 1433429703230316LLU;
int32_t x549 = -1;
uint64_t x550 = UINT64_MAX;
int64_t x552 = -1LL;
int8_t x555 = INT8_MAX;
volatile uint32_t x564 = UINT32_MAX;
int8_t x583 = -1;
int64_t x601 = 223224295310634LL;
int64_t t83 = 41933965LL;
uint32_t x607 = 1247573264U;
uint8_t x618 = UINT8_MAX;
static int8_t x634 = INT8_MAX;
static volatile int32_t x635 = -1;
int16_t x665 = INT16_MIN;
static volatile uint8_t x668 = 28U;
static int32_t x669 = INT32_MIN;
uint32_t x689 = 27002231U;
volatile uint32_t t95 = 1U;
int64_t x702 = 7170394616431LL;
int16_t x703 = INT16_MAX;
int32_t t97 = 0;
static uint64_t x706 = UINT64_MAX;
static int32_t t100 = -1660;
static int16_t x720 = INT16_MIN;
static int16_t x731 = INT16_MIN;
int32_t t102 = 4956742;
static int16_t x752 = INT16_MIN;
int64_t x753 = INT64_MIN;
volatile int64_t x755 = 0LL;
int32_t x756 = INT32_MIN;
int8_t x765 = -1;
uint16_t x766 = 94U;
volatile uint64_t x785 = UINT64_MAX;
uint8_t x787 = 8U;
volatile uint64_t t110 = 846LLU;
int16_t x791 = INT16_MIN;
int64_t x792 = 14171LL;
uint8_t x797 = 27U;
int16_t x806 = 298;
int64_t x807 = INT64_MIN;
static int8_t x812 = INT8_MIN;
int64_t x825 = INT64_MIN;
static int16_t x829 = INT16_MAX;
int32_t t118 = 12737851;
static uint16_t x850 = UINT16_MAX;
static int16_t x857 = INT16_MIN;
static uint64_t x860 = 173480513615LLU;
volatile int32_t t121 = 5124;
uint32_t x877 = UINT32_MAX;
static uint64_t x881 = UINT64_MAX;
int8_t x889 = -1;
uint8_t x891 = 5U;
int16_t x894 = INT16_MAX;
int32_t t128 = -228905358;
uint16_t x918 = 4032U;
int64_t x919 = INT64_MIN;
volatile int32_t t129 = 485154;
volatile uint64_t x926 = 2LLU;
static volatile uint32_t x940 = 20263655U;
int16_t x963 = INT16_MIN;
uint64_t x964 = 32888049620LLU;
volatile int32_t t136 = -15991256;
volatile uint64_t x975 = 417942797476711LLU;
volatile uint16_t x976 = 1566U;
uint32_t x981 = 50499U;
volatile uint64_t x983 = 2649667285LLU;
int16_t x990 = 6;
uint32_t x1003 = 496934291U;
int64_t t142 = -2801306062601LL;
int16_t x1009 = -39;
int16_t x1010 = 6;
static int64_t x1011 = INT64_MIN;
volatile int32_t t145 = -7136493;
volatile int32_t x1032 = -67032175;
uint64_t x1037 = 518830451730LLU;
int8_t x1039 = -5;
int8_t x1043 = INT8_MIN;
static int32_t t153 = -3306;
volatile uint32_t x1090 = 7U;
volatile int16_t x1103 = INT16_MIN;
static int32_t t156 = -1;
uint64_t t157 = 1LLU;
uint16_t x1126 = 1U;
volatile uint16_t x1136 = 26U;
int8_t x1138 = 3;
static volatile int16_t x1141 = -1;
static int32_t t163 = -117;
uint64_t t164 = 30794929889LLU;
int8_t x1197 = INT8_MIN;
static uint32_t x1200 = 36856376U;
int32_t x1209 = INT32_MAX;
uint64_t x1210 = UINT64_MAX;
int16_t x1212 = INT16_MIN;
int32_t t172 = -30410312;
static uint8_t x1237 = 2U;
volatile int32_t t173 = 2489;
static volatile int32_t t174 = -6018845;
uint64_t x1246 = 12LLU;
static int64_t x1270 = INT64_MAX;
static int32_t t180 = -5;
uint32_t x1293 = UINT32_MAX;
uint8_t x1302 = 32U;
volatile int8_t x1323 = INT8_MIN;
int32_t t184 = 107518;
volatile int32_t t185 = 446830835;
int64_t x1340 = -1LL;
int32_t x1349 = -258342372;
volatile int32_t t187 = 2050032;
int16_t x1359 = INT16_MIN;
int32_t x1363 = INT32_MIN;
static int64_t x1364 = -1LL;
int8_t x1370 = 8;
int64_t t191 = -3LL;
static int16_t x1389 = INT16_MAX;
uint8_t x1392 = 0U;
volatile int32_t x1411 = -1;
volatile int8_t x1412 = INT8_MIN;
volatile int32_t t198 = 16287;


void f0(void) {
    	volatile int8_t x5 = INT8_MIN;
	int64_t x6 = 5773LL;
	volatile uint32_t x7 = UINT32_MAX;
	static volatile int32_t t0 = -277562082;

    t0 = (x5%(x6>(x7<=x8)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x13 = 1;
	int8_t x15 = INT8_MIN;
	volatile int64_t x16 = INT64_MIN;
	volatile int32_t t1 = 12;

    t1 = (x13%(x14>(x15<=x16)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x25 = -1LL;
	uint32_t x26 = UINT32_MAX;
	int32_t x27 = 558;
	static int64_t x28 = INT64_MAX;
	static volatile int64_t t2 = 361101151017444LL;

    t2 = (x25%(x26>(x27<=x28)));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x30 = INT8_MAX;
	volatile int16_t x32 = INT16_MIN;
	volatile int32_t t3 = -109;

    t3 = (x29%(x30>(x31<=x32)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x34 = 175194LL;
	static uint32_t x35 = 985U;
	uint8_t x36 = 5U;
	volatile int32_t t4 = -8110;

    t4 = (x33%(x34>(x35<=x36)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x37 = 231;
	uint64_t x38 = UINT64_MAX;
	int8_t x39 = 20;
	static volatile uint8_t x40 = UINT8_MAX;
	volatile int32_t t5 = -2933;

    t5 = (x37%(x38>(x39<=x40)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x46 = UINT32_MAX;
	int32_t x47 = INT32_MIN;
	volatile int32_t x48 = -2098906;
	static volatile int32_t t6 = -1214882;

    t6 = (x45%(x46>(x47<=x48)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x57 = UINT64_MAX;
	uint64_t x58 = 1588800509120299910LLU;
	int8_t x59 = 1;
	int16_t x60 = INT16_MAX;

    t7 = (x57%(x58>(x59<=x60)));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x65 = INT64_MAX;
	uint64_t x67 = 16344487358377357LLU;
	int32_t x68 = INT32_MIN;
	int64_t t8 = -2136211661854830870LL;

    t8 = (x65%(x66>(x67<=x68)));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x73 = -22;
	int16_t x74 = INT16_MAX;
	static int32_t x75 = -1;
	volatile int32_t t9 = -2020723;

    t9 = (x73%(x74>(x75<=x76)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x77 = -1;
	uint16_t x78 = UINT16_MAX;
	uint32_t x79 = 425577363U;
	int32_t t10 = -54996106;

    t10 = (x77%(x78>(x79<=x80)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x89 = 7U;
	uint16_t x90 = 727U;
	volatile int32_t x91 = -193962919;
	int16_t x92 = INT16_MIN;
	int32_t t11 = 62070;

    t11 = (x89%(x90>(x91<=x92)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x93 = -1;
	uint8_t x94 = UINT8_MAX;
	static int8_t x95 = 13;
	int8_t x96 = INT8_MIN;
	static int32_t t12 = -1;

    t12 = (x93%(x94>(x95<=x96)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x105 = INT64_MIN;
	static uint64_t x106 = 98LLU;
	uint32_t x108 = 0U;

    t13 = (x105%(x106>(x107<=x108)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x113 = INT8_MIN;
	static int16_t x114 = 22;
	int32_t t14 = 2;

    t14 = (x113%(x114>(x115<=x116)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x125 = INT64_MAX;
	uint16_t x126 = UINT16_MAX;
	int8_t x127 = 1;
	int8_t x128 = 18;
	static volatile int64_t t15 = 6454550609LL;

    t15 = (x125%(x126>(x127<=x128)));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int64_t x129 = -15000LL;
	static uint32_t x130 = UINT32_MAX;
	uint8_t x131 = 13U;
	static uint8_t x132 = 6U;
	volatile int64_t t16 = -218622489418LL;

    t16 = (x129%(x130>(x131<=x132)));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint8_t x133 = UINT8_MAX;
	volatile uint8_t x134 = 86U;
	int16_t x135 = -1;
	int32_t x136 = INT32_MIN;
	static volatile int32_t t17 = 494;

    t17 = (x133%(x134>(x135<=x136)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x138 = UINT32_MAX;
	uint64_t x140 = 1257579132031LLU;
	int32_t t18 = -6961717;

    t18 = (x137%(x138>(x139<=x140)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x141 = -112282;
	static uint16_t x142 = UINT16_MAX;
	int8_t x143 = -19;
	static int32_t x144 = INT32_MIN;
	int32_t t19 = 67573556;

    t19 = (x141%(x142>(x143<=x144)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x146 = 20957723LL;
	int16_t x147 = INT16_MIN;
	int64_t x148 = -1LL;

    t20 = (x145%(x146>(x147<=x148)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x150 = 16U;
	int16_t x151 = -1;
	int64_t t21 = -62308324LL;

    t21 = (x149%(x150>(x151<=x152)));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x153 = -1;
	uint16_t x154 = 7259U;
	volatile uint32_t x155 = 589204707U;
	uint8_t x156 = UINT8_MAX;
	int32_t t22 = 13;

    t22 = (x153%(x154>(x155<=x156)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x157 = -1;
	static uint8_t x158 = 36U;
	uint32_t x159 = 0U;

    t23 = (x157%(x158>(x159<=x160)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x166 = 1537633851548LLU;
	int64_t x167 = -464399447LL;
	volatile int32_t t24 = 0;

    t24 = (x165%(x166>(x167<=x168)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x169 = -30;
	int32_t x170 = INT32_MAX;
	int32_t x171 = -1;
	static int64_t x172 = 4441580731148315LL;
	static volatile int32_t t25 = 500811192;

    t25 = (x169%(x170>(x171<=x172)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x189 = 117508;
	uint8_t x190 = 44U;
	static int64_t x191 = INT64_MIN;
	static uint32_t x192 = 99784686U;
	int32_t t26 = -873556;

    t26 = (x189%(x190>(x191<=x192)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x201 = -3588934246845LL;
	uint32_t x203 = UINT32_MAX;
	int8_t x204 = -1;
	volatile int64_t t27 = -6485837746LL;

    t27 = (x201%(x202>(x203<=x204)));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x205 = INT32_MIN;
	volatile int16_t x206 = 3197;
	uint64_t x207 = UINT64_MAX;
	uint16_t x208 = 414U;
	int32_t t28 = 219926881;

    t28 = (x205%(x206>(x207<=x208)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x210 = UINT64_MAX;
	volatile uint32_t x211 = 940698U;
	uint16_t x212 = UINT16_MAX;
	volatile int64_t t29 = 3466571489374067472LL;

    t29 = (x209%(x210>(x211<=x212)));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x215 = INT16_MIN;
	int16_t x216 = -4385;
	static volatile uint64_t t30 = 702535315851576LLU;

    t30 = (x213%(x214>(x215<=x216)));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x217 = 29308968794LLU;
	uint64_t x218 = 3987744728LLU;
	int32_t x219 = -1;
	static int8_t x220 = -56;
	uint64_t t31 = 44LLU;

    t31 = (x217%(x218>(x219<=x220)));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x221 = 15129132589LL;
	int32_t x222 = 24974082;
	int8_t x223 = 0;
	static int64_t t32 = -53743541812653248LL;

    t32 = (x221%(x222>(x223<=x224)));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x226 = 6734197U;
	int64_t x228 = INT64_MAX;
	volatile int32_t t33 = -104943628;

    t33 = (x225%(x226>(x227<=x228)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int8_t x229 = INT8_MIN;
	static int8_t x230 = INT8_MAX;
	uint64_t x232 = UINT64_MAX;
	static int32_t t34 = -993116465;

    t34 = (x229%(x230>(x231<=x232)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x233 = INT8_MAX;
	int32_t x235 = -88;

    t35 = (x233%(x234>(x235<=x236)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x237 = INT64_MAX;
	int8_t x238 = 8;
	int32_t x240 = INT32_MIN;
	volatile int64_t t36 = 50LL;

    t36 = (x237%(x238>(x239<=x240)));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x241 = INT16_MIN;
	volatile int16_t x242 = 1;
	volatile int16_t x243 = INT16_MAX;
	volatile int8_t x244 = -7;
	volatile int32_t t37 = 502938725;

    t37 = (x241%(x242>(x243<=x244)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x245 = 1U;
	uint16_t x246 = 10U;
	int8_t x247 = INT8_MIN;
	static int8_t x248 = INT8_MAX;

    t38 = (x245%(x246>(x247<=x248)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x257 = 104U;
	uint16_t x258 = 650U;
	volatile int32_t t39 = -13238187;

    t39 = (x257%(x258>(x259<=x260)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x274 = 451U;
	int64_t x276 = 3848526LL;
	uint64_t t40 = 5420LLU;

    t40 = (x273%(x274>(x275<=x276)));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x277 = 17;
	volatile uint64_t x278 = 16491739515LLU;
	volatile int8_t x279 = INT8_MAX;
	int8_t x280 = INT8_MIN;
	static volatile int32_t t41 = 102853;

    t41 = (x277%(x278>(x279<=x280)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x282 = INT64_MAX;
	uint32_t x283 = UINT32_MAX;
	int16_t x284 = INT16_MIN;

    t42 = (x281%(x282>(x283<=x284)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x293 = INT16_MIN;
	volatile uint32_t x294 = 997957791U;
	volatile int32_t t43 = 129523;

    t43 = (x293%(x294>(x295<=x296)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x302 = UINT16_MAX;
	volatile uint32_t t44 = 52590029U;

    t44 = (x301%(x302>(x303<=x304)));

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x305 = INT16_MAX;
	static volatile int16_t x306 = INT16_MAX;
	static uint32_t x307 = 1U;
	volatile int32_t t45 = -14796;

    t45 = (x305%(x306>(x307<=x308)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x318 = INT32_MAX;
	uint16_t x319 = UINT16_MAX;
	volatile int16_t x320 = INT16_MIN;

    t46 = (x317%(x318>(x319<=x320)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x329 = -3624;
	int8_t x331 = INT8_MAX;
	int8_t x332 = INT8_MIN;

    t47 = (x329%(x330>(x331<=x332)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x333 = -79;
	uint32_t x334 = 34949439U;
	int32_t x335 = -122;
	uint64_t x336 = UINT64_MAX;

    t48 = (x333%(x334>(x335<=x336)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x337 = UINT16_MAX;
	volatile uint32_t x338 = 110223858U;
	static uint16_t x339 = 1272U;
	int32_t x340 = INT32_MIN;
	static int32_t t49 = -697024026;

    t49 = (x337%(x338>(x339<=x340)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x353 = INT8_MIN;
	static uint16_t x354 = 227U;
	int64_t x356 = INT64_MAX;

    t50 = (x353%(x354>(x355<=x356)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x365 = 13LLU;
	int16_t x367 = INT16_MIN;
	uint32_t x368 = 11014149U;
	static uint64_t t51 = 28954483616976LLU;

    t51 = (x365%(x366>(x367<=x368)));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x373 = 4440438LLU;
	int64_t x374 = INT64_MAX;
	int8_t x375 = -1;
	uint64_t x376 = UINT64_MAX;
	uint64_t t52 = 587554915379059LLU;

    t52 = (x373%(x374>(x375<=x376)));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x377 = 5789953903764346LL;
	volatile uint64_t x379 = 3550069041698109599LLU;

    t53 = (x377%(x378>(x379<=x380)));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x381 = INT16_MIN;
	static int8_t x383 = -1;
	uint32_t x384 = UINT32_MAX;
	int32_t t54 = 204558889;

    t54 = (x381%(x382>(x383<=x384)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x385 = 418LLU;
	volatile uint64_t x386 = UINT64_MAX;
	static int32_t x387 = INT32_MAX;
	uint64_t t55 = 1LLU;

    t55 = (x385%(x386>(x387<=x388)));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x389 = INT16_MIN;
	uint32_t x390 = 16U;
	int64_t x392 = -179596454LL;
	volatile int32_t t56 = 80525030;

    t56 = (x389%(x390>(x391<=x392)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x401 = 5159LL;
	uint8_t x402 = 108U;
	int16_t x403 = INT16_MIN;
	volatile uint16_t x404 = 812U;
	int64_t t57 = 12498576LL;

    t57 = (x401%(x402>(x403<=x404)));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x405 = -385;
	static uint64_t x406 = UINT64_MAX;
	int64_t x407 = INT64_MAX;
	int16_t x408 = 5162;

    t58 = (x405%(x406>(x407<=x408)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x409 = 1806;
	static int64_t x410 = INT64_MAX;
	int64_t x411 = INT64_MIN;
	int64_t x412 = INT64_MAX;
	volatile int32_t t59 = 111807;

    t59 = (x409%(x410>(x411<=x412)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x413 = INT16_MIN;
	uint16_t x414 = UINT16_MAX;
	int8_t x415 = INT8_MAX;
	volatile int16_t x416 = INT16_MIN;

    t60 = (x413%(x414>(x415<=x416)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x425 = 5738U;
	static int64_t x426 = INT64_MAX;
	volatile int64_t x427 = INT64_MIN;
	static int32_t x428 = INT32_MIN;
	uint32_t t61 = 394063158U;

    t61 = (x425%(x426>(x427<=x428)));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x442 = INT32_MAX;
	static int32_t t62 = -2793;

    t62 = (x441%(x442>(x443<=x444)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x445 = 1U;
	volatile uint16_t x446 = 5267U;
	uint32_t x447 = 153U;
	uint64_t x448 = UINT64_MAX;
	int32_t t63 = -584;

    t63 = (x445%(x446>(x447<=x448)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x457 = INT64_MIN;
	uint32_t x458 = 127382528U;
	uint8_t x459 = 8U;
	volatile int32_t x460 = INT32_MAX;

    t64 = (x457%(x458>(x459<=x460)));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x465 = INT64_MIN;
	volatile int64_t x467 = -1LL;
	volatile int16_t x468 = 1;
	int64_t t65 = -1181404953LL;

    t65 = (x465%(x466>(x467<=x468)));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x474 = 72U;
	uint8_t x475 = 83U;
	int16_t x476 = INT16_MAX;

    t66 = (x473%(x474>(x475<=x476)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x482 = UINT32_MAX;
	int16_t x483 = INT16_MIN;
	int16_t x484 = -1;
	int64_t t67 = 5046LL;

    t67 = (x481%(x482>(x483<=x484)));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x487 = -1LL;
	int16_t x488 = -4482;
	static volatile int32_t t68 = -781864967;

    t68 = (x485%(x486>(x487<=x488)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x502 = INT8_MAX;
	int64_t x503 = -174758664LL;
	int8_t x504 = INT8_MIN;

    t69 = (x501%(x502>(x503<=x504)));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x517 = -1;
	volatile uint16_t x518 = 6U;
	int16_t x520 = INT16_MIN;
	int32_t t70 = 10856713;

    t70 = (x517%(x518>(x519<=x520)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x521 = INT32_MIN;
	static int64_t x522 = 4856152154502LL;
	int8_t x523 = 0;
	int8_t x524 = -1;
	volatile int32_t t71 = 10;

    t71 = (x521%(x522>(x523<=x524)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x529 = 45U;
	static uint32_t x530 = 660U;
	uint16_t x532 = 23371U;
	static int32_t t72 = 64;

    t72 = (x529%(x530>(x531<=x532)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x533 = 301LL;
	uint32_t x534 = UINT32_MAX;
	uint32_t x535 = 2126803482U;
	int16_t x536 = INT16_MIN;
	static int64_t t73 = -608LL;

    t73 = (x533%(x534>(x535<=x536)));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x545 = INT32_MAX;
	int64_t x546 = INT64_MAX;
	static int32_t x547 = -57154264;
	static volatile uint8_t x548 = 3U;
	static volatile int32_t t74 = 3576435;

    t74 = (x545%(x546>(x547<=x548)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x551 = UINT32_MAX;
	int32_t t75 = 8387513;

    t75 = (x549%(x550>(x551<=x552)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x553 = UINT64_MAX;
	static uint32_t x554 = 878693120U;
	static volatile int16_t x556 = 4;
	static uint64_t t76 = 13108612631986939LLU;

    t76 = (x553%(x554>(x555<=x556)));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x557 = -1LL;
	int64_t x558 = INT64_MAX;
	uint16_t x559 = 3488U;
	uint16_t x560 = 9U;
	volatile int64_t t77 = -10018268766919489LL;

    t77 = (x557%(x558>(x559<=x560)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x561 = 0;
	uint32_t x562 = 72620706U;
	static uint8_t x563 = UINT8_MAX;
	int32_t t78 = 225;

    t78 = (x561%(x562>(x563<=x564)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x565 = INT32_MIN;
	volatile int64_t x566 = INT64_MAX;
	int64_t x567 = INT64_MIN;
	uint32_t x568 = 399293U;
	volatile int32_t t79 = -5372032;

    t79 = (x565%(x566>(x567<=x568)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x577 = UINT32_MAX;
	int64_t x578 = 2422359330897215LL;
	int64_t x579 = 12984032215482LL;
	uint32_t x580 = 1367975016U;
	volatile uint32_t t80 = 7935874U;

    t80 = (x577%(x578>(x579<=x580)));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x581 = INT8_MIN;
	static uint64_t x582 = 137480144338329LLU;
	int8_t x584 = -53;
	static volatile int32_t t81 = 3;

    t81 = (x581%(x582>(x583<=x584)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x589 = INT16_MIN;
	int32_t x590 = 92329615;
	volatile int32_t x591 = INT32_MIN;
	uint64_t x592 = 93552LLU;
	volatile int32_t t82 = -1;

    t82 = (x589%(x590>(x591<=x592)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x602 = INT32_MAX;
	volatile uint64_t x603 = 905472048LLU;
	int32_t x604 = -18031;

    t83 = (x601%(x602>(x603<=x604)));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x605 = 10;
	int32_t x606 = 1;
	static int8_t x608 = 1;
	static volatile int32_t t84 = 104143094;

    t84 = (x605%(x606>(x607<=x608)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x617 = INT32_MIN;
	volatile uint64_t x619 = 5572968LLU;
	uint32_t x620 = UINT32_MAX;
	static volatile int32_t t85 = -1;

    t85 = (x617%(x618>(x619<=x620)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x621 = -1LL;
	int64_t x622 = 15256920301482535LL;
	static int64_t x623 = INT64_MIN;
	uint8_t x624 = UINT8_MAX;
	volatile int64_t t86 = -4313LL;

    t86 = (x621%(x622>(x623<=x624)));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x625 = INT8_MIN;
	uint8_t x626 = UINT8_MAX;
	static volatile int8_t x627 = -1;
	int64_t x628 = 30383721362LL;
	static int32_t t87 = -2588;

    t87 = (x625%(x626>(x627<=x628)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x629 = 0U;
	uint16_t x630 = 923U;
	uint32_t x631 = 6124U;
	static uint64_t x632 = 2319650610859473261LLU;
	int32_t t88 = -14568840;

    t88 = (x629%(x630>(x631<=x632)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x633 = INT64_MIN;
	int32_t x636 = INT32_MIN;
	int64_t t89 = -12880819574LL;

    t89 = (x633%(x634>(x635<=x636)));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x645 = -13;
	int16_t x646 = 15639;
	int32_t x647 = INT32_MIN;
	static int64_t x648 = INT64_MAX;
	volatile int32_t t90 = 2676318;

    t90 = (x645%(x646>(x647<=x648)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x666 = 287059U;
	uint64_t x667 = 855LLU;
	int32_t t91 = -293348121;

    t91 = (x665%(x666>(x667<=x668)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x670 = 3;
	uint16_t x671 = 19U;
	volatile uint32_t x672 = 191840947U;
	int32_t t92 = -3;

    t92 = (x669%(x670>(x671<=x672)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x673 = 77U;
	uint16_t x674 = UINT16_MAX;
	uint16_t x675 = UINT16_MAX;
	static int16_t x676 = -123;
	int32_t t93 = -41;

    t93 = (x673%(x674>(x675<=x676)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x677 = -29;
	uint32_t x678 = UINT32_MAX;
	static uint64_t x679 = 5892893LLU;
	int32_t x680 = INT32_MIN;
	int32_t t94 = 128798074;

    t94 = (x677%(x678>(x679<=x680)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x690 = 44U;
	int32_t x691 = -6348380;
	int16_t x692 = INT16_MIN;

    t95 = (x689%(x690>(x691<=x692)));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x693 = 7677090530078LL;
	uint16_t x694 = 1260U;
	static uint64_t x695 = 59672460326LLU;
	uint64_t x696 = 62428210850354206LLU;
	volatile int64_t t96 = -6054544LL;

    t96 = (x693%(x694>(x695<=x696)));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int16_t x701 = -1;
	volatile int32_t x704 = INT32_MIN;

    t97 = (x701%(x702>(x703<=x704)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x705 = UINT8_MAX;
	static int16_t x707 = INT16_MIN;
	volatile uint32_t x708 = 23U;
	static volatile int32_t t98 = -1;

    t98 = (x705%(x706>(x707<=x708)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x709 = INT16_MIN;
	uint64_t x710 = 2731LLU;
	int16_t x711 = INT16_MAX;
	static int64_t x712 = 121289307029LL;
	int32_t t99 = 2264;

    t99 = (x709%(x710>(x711<=x712)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x713 = -1;
	int8_t x714 = INT8_MAX;
	int32_t x715 = -62;
	int32_t x716 = 1516947;

    t100 = (x713%(x714>(x715<=x716)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x717 = -16875722138486272LL;
	volatile uint8_t x718 = 44U;
	int64_t x719 = INT64_MIN;
	int64_t t101 = -40346461LL;

    t101 = (x717%(x718>(x719<=x720)));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x729 = -1;
	volatile int8_t x730 = 20;
	int16_t x732 = -1;

    t102 = (x729%(x730>(x731<=x732)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x733 = 12654977098LLU;
	uint64_t x734 = 345444LLU;
	volatile int64_t x735 = INT64_MIN;
	uint8_t x736 = UINT8_MAX;
	uint64_t t103 = 376841616579928LLU;

    t103 = (x733%(x734>(x735<=x736)));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x741 = 3134U;
	static uint64_t x742 = 27013153433551439LLU;
	uint64_t x743 = 326736746653277184LLU;
	uint8_t x744 = 12U;
	uint32_t t104 = 91796074U;

    t104 = (x741%(x742>(x743<=x744)));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x749 = -6;
	int16_t x750 = 11980;
	static uint8_t x751 = UINT8_MAX;
	volatile int32_t t105 = 32397;

    t105 = (x749%(x750>(x751<=x752)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x754 = 19U;
	volatile int64_t t106 = -54641011060181270LL;

    t106 = (x753%(x754>(x755<=x756)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x767 = INT16_MIN;
	uint8_t x768 = 4U;
	volatile int32_t t107 = -2737243;

    t107 = (x765%(x766>(x767<=x768)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x773 = UINT32_MAX;
	volatile uint32_t x774 = UINT32_MAX;
	volatile int32_t x775 = INT32_MIN;
	static int64_t x776 = 2920625LL;
	volatile uint32_t t108 = 218336258U;

    t108 = (x773%(x774>(x775<=x776)));

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x781 = 17876LLU;
	uint16_t x782 = UINT16_MAX;
	volatile uint32_t x783 = 4579U;
	static int16_t x784 = -10;
	static uint64_t t109 = 357003284864LLU;

    t109 = (x781%(x782>(x783<=x784)));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x786 = UINT32_MAX;
	uint32_t x788 = 116871454U;

    t110 = (x785%(x786>(x787<=x788)));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x789 = INT16_MIN;
	uint32_t x790 = 697394701U;
	volatile int32_t t111 = 473;

    t111 = (x789%(x790>(x791<=x792)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint8_t x798 = UINT8_MAX;
	int64_t x799 = 9LL;
	uint16_t x800 = UINT16_MAX;
	volatile int32_t t112 = -25;

    t112 = (x797%(x798>(x799<=x800)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x805 = INT8_MAX;
	int16_t x808 = -10117;
	volatile int32_t t113 = -236704441;

    t113 = (x805%(x806>(x807<=x808)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x809 = 3U;
	int8_t x810 = 25;
	static volatile int64_t x811 = -1LL;
	int32_t t114 = 122;

    t114 = (x809%(x810>(x811<=x812)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x817 = 57721984968361LL;
	volatile int16_t x818 = INT16_MAX;
	int8_t x819 = INT8_MIN;
	int32_t x820 = 180;
	static volatile int64_t t115 = -4575651467184059325LL;

    t115 = (x817%(x818>(x819<=x820)));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x821 = 231;
	int64_t x822 = 70LL;
	static int8_t x823 = -1;
	uint32_t x824 = 4487U;
	static volatile int32_t t116 = 6;

    t116 = (x821%(x822>(x823<=x824)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x826 = 30766999LL;
	int16_t x827 = INT16_MAX;
	static uint32_t x828 = 218079381U;
	volatile int64_t t117 = 25659284655668LL;

    t117 = (x825%(x826>(x827<=x828)));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x830 = UINT32_MAX;
	int8_t x831 = INT8_MIN;
	static int16_t x832 = 2039;

    t118 = (x829%(x830>(x831<=x832)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x849 = UINT64_MAX;
	uint8_t x851 = 54U;
	static int16_t x852 = -909;
	uint64_t t119 = 22631910483LLU;

    t119 = (x849%(x850>(x851<=x852)));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x853 = INT32_MIN;
	uint64_t x854 = 182LLU;
	static int8_t x855 = -63;
	int32_t x856 = 30;
	volatile int32_t t120 = 282987;

    t120 = (x853%(x854>(x855<=x856)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x858 = 142LLU;
	int16_t x859 = INT16_MIN;

    t121 = (x857%(x858>(x859<=x860)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x865 = 163U;
	uint16_t x866 = 120U;
	uint64_t x867 = 1084440685LLU;
	static int64_t x868 = INT64_MAX;
	volatile int32_t t122 = -8;

    t122 = (x865%(x866>(x867<=x868)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x869 = 64821160;
	volatile uint8_t x870 = UINT8_MAX;
	int32_t x871 = -39589;
	int64_t x872 = INT64_MIN;
	volatile int32_t t123 = 120;

    t123 = (x869%(x870>(x871<=x872)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x878 = 2;
	int16_t x879 = -1;
	uint16_t x880 = 10U;
	uint32_t t124 = 5095U;

    t124 = (x877%(x878>(x879<=x880)));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x882 = UINT16_MAX;
	volatile int32_t x883 = -713;
	int8_t x884 = INT8_MAX;
	uint64_t t125 = 82211388556614LLU;

    t125 = (x881%(x882>(x883<=x884)));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x890 = INT32_MAX;
	int32_t x892 = INT32_MIN;
	int32_t t126 = 248232;

    t126 = (x889%(x890>(x891<=x892)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x893 = -3845LL;
	uint32_t x895 = UINT32_MAX;
	int32_t x896 = INT32_MIN;
	volatile int64_t t127 = -382LL;

    t127 = (x893%(x894>(x895<=x896)));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x901 = INT32_MIN;
	uint16_t x902 = 1916U;
	int16_t x903 = INT16_MAX;
	int8_t x904 = -32;

    t128 = (x901%(x902>(x903<=x904)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x917 = INT32_MIN;
	volatile uint8_t x920 = UINT8_MAX;

    t129 = (x917%(x918>(x919<=x920)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x921 = 6;
	int32_t x922 = INT32_MAX;
	static volatile int16_t x923 = 725;
	uint64_t x924 = UINT64_MAX;
	volatile int32_t t130 = -20363;

    t130 = (x921%(x922>(x923<=x924)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x925 = -1;
	uint8_t x927 = UINT8_MAX;
	volatile uint32_t x928 = 11180081U;
	volatile int32_t t131 = -257845637;

    t131 = (x925%(x926>(x927<=x928)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x929 = -1;
	uint8_t x930 = 31U;
	int32_t x931 = -1;
	int64_t x932 = -226473348772815245LL;
	int32_t t132 = -761975;

    t132 = (x929%(x930>(x931<=x932)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x933 = 12LLU;
	uint16_t x934 = UINT16_MAX;
	volatile uint8_t x935 = 3U;
	int16_t x936 = 10932;
	uint64_t t133 = 466498451045LLU;

    t133 = (x933%(x934>(x935<=x936)));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x937 = -1;
	static volatile int8_t x938 = 52;
	uint64_t x939 = 1006883953127431681LLU;
	volatile int32_t t134 = 4917;

    t134 = (x937%(x938>(x939<=x940)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x953 = -519719;
	int32_t x954 = INT32_MAX;
	uint16_t x955 = UINT16_MAX;
	uint8_t x956 = 1U;
	volatile int32_t t135 = -14;

    t135 = (x953%(x954>(x955<=x956)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x961 = INT32_MIN;
	static int32_t x962 = 381942318;

    t136 = (x961%(x962>(x963<=x964)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x973 = -1;
	uint16_t x974 = UINT16_MAX;
	int32_t t137 = -3058;

    t137 = (x973%(x974>(x975<=x976)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x977 = -21;
	static int16_t x978 = INT16_MAX;
	static uint8_t x979 = 42U;
	int16_t x980 = INT16_MIN;
	volatile int32_t t138 = 523233;

    t138 = (x977%(x978>(x979<=x980)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x982 = 3U;
	uint8_t x984 = 125U;
	volatile uint32_t t139 = 29137U;

    t139 = (x981%(x982>(x983<=x984)));

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x989 = 929092105104LL;
	uint8_t x991 = 5U;
	uint64_t x992 = UINT64_MAX;
	volatile int64_t t140 = 504LL;

    t140 = (x989%(x990>(x991<=x992)));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x1001 = -1;
	int64_t x1002 = INT64_MAX;
	uint32_t x1004 = UINT32_MAX;
	volatile int32_t t141 = 16;

    t141 = (x1001%(x1002>(x1003<=x1004)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x1005 = INT64_MIN;
	int32_t x1006 = 155858;
	volatile int32_t x1007 = INT32_MIN;
	int64_t x1008 = INT64_MAX;

    t142 = (x1005%(x1006>(x1007<=x1008)));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x1012 = UINT64_MAX;
	volatile int32_t t143 = -1;

    t143 = (x1009%(x1010>(x1011<=x1012)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x1013 = -1;
	int64_t x1014 = 3567LL;
	int64_t x1015 = INT64_MIN;
	static int32_t x1016 = INT32_MIN;
	static int32_t t144 = -15416245;

    t144 = (x1013%(x1014>(x1015<=x1016)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x1017 = 1;
	static int32_t x1018 = INT32_MAX;
	static int64_t x1019 = INT64_MIN;
	int64_t x1020 = INT64_MIN;

    t145 = (x1017%(x1018>(x1019<=x1020)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x1029 = INT32_MIN;
	static uint32_t x1030 = UINT32_MAX;
	uint16_t x1031 = UINT16_MAX;
	volatile int32_t t146 = -5302;

    t146 = (x1029%(x1030>(x1031<=x1032)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1033 = INT8_MIN;
	uint16_t x1034 = UINT16_MAX;
	int16_t x1035 = -11260;
	int64_t x1036 = -37826340991826LL;
	int32_t t147 = 358335;

    t147 = (x1033%(x1034>(x1035<=x1036)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x1038 = UINT8_MAX;
	static int32_t x1040 = -22447;
	static volatile uint64_t t148 = 31287334LLU;

    t148 = (x1037%(x1038>(x1039<=x1040)));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x1041 = -2335;
	static uint16_t x1042 = 14U;
	int8_t x1044 = -1;
	volatile int32_t t149 = 984;

    t149 = (x1041%(x1042>(x1043<=x1044)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x1045 = 2U;
	static uint32_t x1046 = UINT32_MAX;
	volatile int32_t x1047 = INT32_MAX;
	int32_t x1048 = -1;
	int32_t t150 = -196;

    t150 = (x1045%(x1046>(x1047<=x1048)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x1057 = -1;
	volatile int64_t x1058 = 877256LL;
	int64_t x1059 = INT64_MIN;
	volatile uint64_t x1060 = 581205051LLU;
	volatile int32_t t151 = -22994895;

    t151 = (x1057%(x1058>(x1059<=x1060)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x1077 = -1LL;
	uint8_t x1078 = UINT8_MAX;
	volatile int8_t x1079 = -1;
	uint8_t x1080 = UINT8_MAX;
	volatile int64_t t152 = 1LL;

    t152 = (x1077%(x1078>(x1079<=x1080)));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x1081 = INT8_MIN;
	int32_t x1082 = 46138171;
	int64_t x1083 = -32501696810LL;
	volatile uint64_t x1084 = UINT64_MAX;

    t153 = (x1081%(x1082>(x1083<=x1084)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x1085 = -1;
	int16_t x1086 = 2304;
	uint8_t x1087 = UINT8_MAX;
	volatile uint32_t x1088 = 33U;
	int32_t t154 = -172;

    t154 = (x1085%(x1086>(x1087<=x1088)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x1089 = -15020;
	int32_t x1091 = -1;
	volatile uint16_t x1092 = 0U;
	volatile int32_t t155 = -4;

    t155 = (x1089%(x1090>(x1091<=x1092)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1101 = UINT16_MAX;
	int64_t x1102 = 14828087152LL;
	int64_t x1104 = INT64_MIN;

    t156 = (x1101%(x1102>(x1103<=x1104)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x1121 = UINT64_MAX;
	uint8_t x1122 = 3U;
	uint8_t x1123 = 0U;
	volatile uint64_t x1124 = 29919740370LLU;

    t157 = (x1121%(x1122>(x1123<=x1124)));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x1125 = INT8_MIN;
	int16_t x1127 = INT16_MAX;
	int8_t x1128 = INT8_MAX;
	volatile int32_t t158 = 10;

    t158 = (x1125%(x1126>(x1127<=x1128)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int16_t x1129 = 25;
	uint8_t x1130 = 3U;
	uint16_t x1131 = 898U;
	int16_t x1132 = INT16_MAX;
	static volatile int32_t t159 = 87;

    t159 = (x1129%(x1130>(x1131<=x1132)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1133 = 0;
	volatile uint32_t x1134 = 6643895U;
	int32_t x1135 = INT32_MIN;
	volatile int32_t t160 = 286;

    t160 = (x1133%(x1134>(x1135<=x1136)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x1137 = 80U;
	uint8_t x1139 = 15U;
	static int8_t x1140 = INT8_MIN;
	int32_t t161 = -4718;

    t161 = (x1137%(x1138>(x1139<=x1140)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x1142 = INT64_MAX;
	int8_t x1143 = -1;
	int16_t x1144 = INT16_MIN;
	volatile int32_t t162 = -105;

    t162 = (x1141%(x1142>(x1143<=x1144)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x1145 = 12U;
	int16_t x1146 = INT16_MAX;
	int64_t x1147 = INT64_MAX;
	int8_t x1148 = INT8_MIN;

    t163 = (x1145%(x1146>(x1147<=x1148)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x1161 = 7296325885LLU;
	int32_t x1162 = 2607;
	volatile uint64_t x1163 = 436318704437LLU;
	int64_t x1164 = -1LL;

    t164 = (x1161%(x1162>(x1163<=x1164)));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x1177 = INT16_MIN;
	uint8_t x1178 = UINT8_MAX;
	int16_t x1179 = -3;
	int64_t x1180 = INT64_MAX;
	static volatile int32_t t165 = -5358;

    t165 = (x1177%(x1178>(x1179<=x1180)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1181 = INT64_MAX;
	static uint32_t x1182 = 30127196U;
	int32_t x1183 = INT32_MIN;
	static int16_t x1184 = -310;
	int64_t t166 = -4529983063665963221LL;

    t166 = (x1181%(x1182>(x1183<=x1184)));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x1198 = 1U;
	volatile int64_t x1199 = 109411601765957LL;
	static int32_t t167 = -5995;

    t167 = (x1197%(x1198>(x1199<=x1200)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x1201 = 0;
	volatile uint16_t x1202 = 5625U;
	int64_t x1203 = -2456977611236118LL;
	volatile int8_t x1204 = -1;
	volatile int32_t t168 = -3408385;

    t168 = (x1201%(x1202>(x1203<=x1204)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x1205 = UINT16_MAX;
	static volatile uint8_t x1206 = UINT8_MAX;
	int16_t x1207 = -1;
	int64_t x1208 = 4796831782LL;
	static int32_t t169 = 81964387;

    t169 = (x1205%(x1206>(x1207<=x1208)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1211 = INT8_MIN;
	volatile int32_t t170 = 4124;

    t170 = (x1209%(x1210>(x1211<=x1212)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1217 = -1;
	static volatile int8_t x1218 = 5;
	int16_t x1219 = -401;
	uint16_t x1220 = 3U;
	volatile int32_t t171 = -392839;

    t171 = (x1217%(x1218>(x1219<=x1220)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1225 = -1;
	volatile uint64_t x1226 = 1607949652957133398LLU;
	uint64_t x1227 = 17LLU;
	int16_t x1228 = INT16_MIN;

    t172 = (x1225%(x1226>(x1227<=x1228)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x1238 = INT64_MAX;
	int64_t x1239 = INT64_MIN;
	static int8_t x1240 = INT8_MIN;

    t173 = (x1237%(x1238>(x1239<=x1240)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1241 = INT16_MAX;
	uint64_t x1242 = 1875426LLU;
	int64_t x1243 = -1LL;
	volatile int64_t x1244 = INT64_MAX;

    t174 = (x1241%(x1242>(x1243<=x1244)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x1245 = 105710802LLU;
	int32_t x1247 = INT32_MIN;
	int32_t x1248 = INT32_MAX;
	uint64_t t175 = 238210780214LLU;

    t175 = (x1245%(x1246>(x1247<=x1248)));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x1249 = INT32_MIN;
	int8_t x1250 = 43;
	static int8_t x1251 = INT8_MIN;
	static int32_t x1252 = -2458667;
	static volatile int32_t t176 = 420921;

    t176 = (x1249%(x1250>(x1251<=x1252)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x1253 = INT64_MIN;
	uint32_t x1254 = 1430298611U;
	int32_t x1255 = 506;
	int32_t x1256 = INT32_MIN;
	volatile int64_t t177 = 425451780LL;

    t177 = (x1253%(x1254>(x1255<=x1256)));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1269 = UINT8_MAX;
	int64_t x1271 = -822278798978LL;
	uint16_t x1272 = 1422U;
	int32_t t178 = -68384;

    t178 = (x1269%(x1270>(x1271<=x1272)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1273 = -1;
	int64_t x1274 = 89076499237082LL;
	static int32_t x1275 = INT32_MIN;
	uint16_t x1276 = UINT16_MAX;
	int32_t t179 = 59048;

    t179 = (x1273%(x1274>(x1275<=x1276)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1289 = INT8_MIN;
	volatile uint8_t x1290 = 7U;
	int8_t x1291 = -1;
	static volatile int32_t x1292 = 176371;

    t180 = (x1289%(x1290>(x1291<=x1292)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1294 = INT32_MAX;
	volatile uint16_t x1295 = UINT16_MAX;
	int8_t x1296 = INT8_MIN;
	uint32_t t181 = 13977994U;

    t181 = (x1293%(x1294>(x1295<=x1296)));

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1301 = -34712832237536LL;
	uint64_t x1303 = UINT64_MAX;
	int32_t x1304 = INT32_MAX;
	int64_t t182 = 215897539352813715LL;

    t182 = (x1301%(x1302>(x1303<=x1304)));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x1321 = UINT8_MAX;
	static int64_t x1322 = INT64_MAX;
	int16_t x1324 = -5;
	volatile int32_t t183 = 0;

    t183 = (x1321%(x1322>(x1323<=x1324)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1325 = 21811U;
	static uint32_t x1326 = UINT32_MAX;
	static uint16_t x1327 = UINT16_MAX;
	int8_t x1328 = 1;

    t184 = (x1325%(x1326>(x1327<=x1328)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x1329 = INT16_MIN;
	uint32_t x1330 = 7U;
	static int32_t x1331 = INT32_MIN;
	int32_t x1332 = -2141;

    t185 = (x1329%(x1330>(x1331<=x1332)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1337 = -1LL;
	volatile int16_t x1338 = INT16_MAX;
	uint32_t x1339 = 1U;
	static volatile int64_t t186 = 459936805090888LL;

    t186 = (x1337%(x1338>(x1339<=x1340)));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1350 = 3U;
	uint8_t x1351 = 117U;
	int64_t x1352 = 23886684248085LL;

    t187 = (x1349%(x1350>(x1351<=x1352)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x1353 = 0LL;
	uint8_t x1354 = 2U;
	uint64_t x1355 = UINT64_MAX;
	volatile int64_t x1356 = INT64_MIN;
	volatile int64_t t188 = -178238790350LL;

    t188 = (x1353%(x1354>(x1355<=x1356)));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1357 = UINT64_MAX;
	static int8_t x1358 = INT8_MAX;
	static int8_t x1360 = INT8_MAX;
	uint64_t t189 = 454536LLU;

    t189 = (x1357%(x1358>(x1359<=x1360)));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1361 = -1;
	int16_t x1362 = 3;
	volatile int32_t t190 = 1486;

    t190 = (x1361%(x1362>(x1363<=x1364)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1369 = INT64_MIN;
	int8_t x1371 = 1;
	static int16_t x1372 = 18;

    t191 = (x1369%(x1370>(x1371<=x1372)));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1373 = UINT8_MAX;
	uint16_t x1374 = 1294U;
	static int32_t x1375 = INT32_MAX;
	int8_t x1376 = -1;
	volatile int32_t t192 = -969952;

    t192 = (x1373%(x1374>(x1375<=x1376)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1385 = UINT16_MAX;
	static int64_t x1386 = INT64_MAX;
	uint64_t x1387 = 8290056426LLU;
	static volatile uint8_t x1388 = UINT8_MAX;
	int32_t t193 = -1777579;

    t193 = (x1385%(x1386>(x1387<=x1388)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x1390 = UINT16_MAX;
	static volatile int8_t x1391 = 5;
	int32_t t194 = -566;

    t194 = (x1389%(x1390>(x1391<=x1392)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1393 = INT32_MIN;
	int32_t x1394 = INT32_MAX;
	uint8_t x1395 = 1U;
	static int8_t x1396 = 1;
	int32_t t195 = 1;

    t195 = (x1393%(x1394>(x1395<=x1396)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x1401 = -1;
	int32_t x1402 = 23;
	volatile int64_t x1403 = INT64_MIN;
	static volatile int64_t x1404 = INT64_MAX;
	int32_t t196 = -1647686;

    t196 = (x1401%(x1402>(x1403<=x1404)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1405 = 7U;
	uint32_t x1406 = UINT32_MAX;
	static volatile int16_t x1407 = INT16_MAX;
	uint32_t x1408 = 898282U;
	volatile int32_t t197 = -170699977;

    t197 = (x1405%(x1406>(x1407<=x1408)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1409 = 31U;
	uint16_t x1410 = 7U;

    t198 = (x1409%(x1410>(x1411<=x1412)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1417 = 0U;
	uint8_t x1418 = UINT8_MAX;
	int32_t x1419 = -1;
	int8_t x1420 = INT8_MAX;
	static int32_t t199 = -247533655;

    t199 = (x1417%(x1418>(x1419<=x1420)));

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


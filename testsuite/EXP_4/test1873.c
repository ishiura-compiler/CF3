
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

int64_t x2 = INT64_MIN;
uint8_t x3 = UINT8_MAX;
volatile int64_t t1 = -32324244301039LL;
int32_t t3 = 9831;
volatile int16_t x42 = -1;
int32_t x47 = INT32_MAX;
uint16_t x49 = 3275U;
int16_t x78 = -1;
int32_t x95 = -3245;
int64_t x96 = INT64_MAX;
uint64_t x99 = 44443LLU;
volatile int32_t t12 = -213198;
int8_t x117 = 0;
int32_t x122 = -1;
volatile uint64_t t19 = 156857900947LLU;
uint32_t x153 = 8333342U;
int8_t x170 = -1;
volatile uint32_t t22 = UINT32_MAX;
uint8_t x190 = 37U;
int8_t x191 = 1;
int32_t t24 = -376644;
static volatile uint64_t x197 = UINT64_MAX;
static volatile uint64_t t26 = UINT64_MAX;
int8_t x205 = 2;
volatile uint16_t x212 = UINT16_MAX;
volatile int32_t t28 = 193134660;
int32_t x229 = 7;
int32_t x236 = -1;
uint64_t t33 = 4712855LLU;
static uint64_t x245 = 99401338060LLU;
int64_t x247 = -1LL;
volatile int8_t x248 = -1;
static int64_t x282 = 5741556LL;
uint64_t t41 = UINT64_MAX;
int8_t x287 = 2;
int8_t x289 = 50;
int8_t x290 = -14;
int16_t x291 = -1;
volatile int32_t t43 = 180696670;
volatile int64_t x296 = -1LL;
static volatile int16_t x300 = INT16_MIN;
int64_t x314 = 2710218953386897002LL;
uint16_t x316 = 323U;
volatile uint64_t x319 = UINT64_MAX;
volatile int64_t x349 = INT64_MAX;
volatile int16_t x351 = -7;
static int32_t x370 = INT32_MIN;
static uint64_t x379 = 1601543054569912LLU;
volatile uint8_t x392 = 53U;
static int64_t x395 = INT64_MIN;
uint8_t x404 = 12U;
int32_t x410 = INT32_MAX;
int32_t x413 = INT32_MAX;
int16_t x415 = 17;
int16_t x416 = INT16_MAX;
uint32_t x455 = UINT32_MAX;
static int8_t x480 = 7;
int32_t x488 = INT32_MAX;
int8_t x505 = 48;
int8_t x515 = 1;
volatile int32_t x516 = -1;
int64_t x517 = INT64_MAX;
uint8_t x518 = UINT8_MAX;
int32_t x527 = INT32_MIN;
int32_t t74 = -30031;
int8_t x558 = -15;
volatile int32_t t75 = -2;
volatile int32_t t76 = -31361;
static int16_t x583 = -1;
volatile int32_t t80 = -521050;
uint8_t x594 = UINT8_MAX;
uint32_t x611 = 1190603U;
static volatile int32_t t83 = -739953266;
int64_t x624 = INT64_MIN;
volatile int32_t t84 = -963;
int64_t x634 = -1LL;
static uint8_t x635 = 1U;
uint16_t x641 = 6395U;
volatile int32_t x642 = INT32_MAX;
uint32_t x645 = UINT32_MAX;
int8_t x654 = INT8_MAX;
int32_t x661 = 25;
int32_t x663 = -3018505;
volatile uint32_t x681 = UINT32_MAX;
uint16_t x684 = 15617U;
static volatile uint32_t t92 = UINT32_MAX;
int64_t x687 = INT64_MAX;
int8_t x699 = INT8_MIN;
static int64_t t95 = -2114209948LL;
uint8_t x703 = UINT8_MAX;
static uint32_t x704 = UINT32_MAX;
volatile int64_t x720 = INT64_MAX;
int64_t t97 = 50909LL;
static volatile uint64_t t99 = 116845204444816325LLU;
static volatile uint16_t x761 = 286U;
static int32_t t105 = 9123;
int32_t x780 = INT32_MAX;
uint64_t x803 = UINT64_MAX;
int32_t x806 = -1;
uint32_t x813 = 37623U;
uint32_t x829 = 64540323U;
static int8_t x834 = -1;
static volatile uint16_t x846 = 3U;
int32_t x851 = INT32_MAX;
uint8_t x869 = UINT8_MAX;
static volatile uint64_t x870 = 547219811122LLU;
int64_t x873 = 4190305628817285LL;
int64_t x874 = INT64_MAX;
int32_t t123 = 185408563;
volatile uint8_t x900 = UINT8_MAX;
static int16_t x903 = INT16_MAX;
uint16_t x925 = 14U;
int8_t x931 = INT8_MIN;
static int16_t x950 = -1;
static int32_t x952 = INT32_MIN;
static int32_t t133 = -813325;
uint8_t x958 = 78U;
uint64_t x961 = UINT64_MAX;
uint32_t x966 = 624U;
volatile int16_t x974 = INT16_MIN;
int64_t x996 = -6301194566954LL;
static volatile uint32_t t140 = 500667U;
int32_t t141 = 2225338;
int32_t t142 = -329737655;
uint64_t x1008 = UINT64_MAX;
static volatile int32_t t144 = -11;
uint16_t x1013 = UINT16_MAX;
volatile int8_t x1017 = 1;
int32_t x1020 = INT32_MIN;
int16_t x1025 = 3766;
uint16_t x1029 = 2855U;
static int64_t x1035 = INT64_MIN;
int16_t x1039 = INT16_MAX;
int64_t x1043 = 35LL;
volatile uint64_t t151 = 846814995LLU;
int8_t x1058 = 5;
volatile int8_t x1059 = INT8_MIN;
static int32_t x1060 = 84488;
int8_t x1081 = 0;
volatile int8_t x1082 = INT8_MAX;
int8_t x1085 = INT8_MAX;
uint32_t x1101 = UINT32_MAX;
int16_t x1106 = -1;
uint64_t x1114 = 213263LLU;
int32_t t163 = 997038;
int8_t x1148 = -1;
static int8_t x1154 = -10;
static volatile int64_t x1157 = 128164511328873LL;
static int32_t x1160 = INT32_MIN;
static int16_t x1164 = INT16_MIN;
static int32_t t171 = -38703;
static int16_t x1172 = 476;
int32_t x1186 = INT32_MIN;
static int8_t x1191 = -1;
int32_t t174 = 291;
static uint32_t t176 = 223890U;
int32_t t180 = -1295;
int32_t x1239 = -1;
static int16_t x1240 = -2;
uint16_t x1243 = 2U;
volatile int64_t x1269 = INT64_MAX;
int64_t x1300 = INT64_MIN;
uint16_t x1319 = UINT16_MAX;
int32_t t191 = 6196;
uint8_t x1346 = 1U;
static volatile int8_t x1357 = INT8_MAX;
static int32_t x1376 = -1;
volatile uint32_t x1377 = UINT32_MAX;
uint32_t t199 = UINT32_MAX;


void f0(void) {
    	uint16_t x1 = 1063U;
	int32_t x4 = INT32_MIN;
	int32_t t0 = -9300;

    t0 = (x1>>(x2==(x3<=x4)));

    if (t0 != 1063) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 571344628136796447LL;
	uint16_t x6 = UINT16_MAX;
	int64_t x7 = INT64_MIN;
	int32_t x8 = -1;

    t1 = (x5>>(x6==(x7<=x8)));

    if (t1 != 571344628136796447LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = 0;
	volatile int64_t x14 = 249784972683892259LL;
	volatile int16_t x15 = INT16_MIN;
	static uint8_t x16 = UINT8_MAX;
	volatile int32_t t2 = -3;

    t2 = (x13>>(x14==(x15<=x16)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = 0;
	int8_t x18 = -1;
	uint64_t x19 = 51766189517LLU;
	uint64_t x20 = 1984139502459559161LLU;

    t3 = (x17>>(x18==(x19<=x20)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x29 = INT16_MAX;
	int8_t x30 = INT8_MIN;
	volatile uint32_t x31 = 3261U;
	static int8_t x32 = -1;
	volatile int32_t t4 = 163873406;

    t4 = (x29>>(x30==(x31<=x32)));

    if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x33 = 10;
	uint32_t x34 = UINT32_MAX;
	volatile uint32_t x35 = UINT32_MAX;
	volatile uint64_t x36 = 118254204677863615LLU;
	int32_t t5 = -47936;

    t5 = (x33>>(x34==(x35<=x36)));

    if (t5 != 10) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int64_t x41 = 1919153765LL;
	uint8_t x43 = 34U;
	int64_t x44 = INT64_MIN;
	int64_t t6 = 132476540790437LL;

    t6 = (x41>>(x42==(x43<=x44)));

    if (t6 != 1919153765LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x45 = 3;
	static int64_t x46 = -1LL;
	static int64_t x48 = 20185372682LL;
	volatile int32_t t7 = 0;

    t7 = (x45>>(x46==(x47<=x48)));

    if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x50 = 15;
	uint16_t x51 = 43U;
	int64_t x52 = 73LL;
	int32_t t8 = 0;

    t8 = (x49>>(x50==(x51<=x52)));

    if (t8 != 3275) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x65 = 0;
	int8_t x66 = INT8_MAX;
	static uint64_t x67 = UINT64_MAX;
	int64_t x68 = INT64_MIN;
	volatile int32_t t9 = -13156053;

    t9 = (x65>>(x66==(x67<=x68)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x77 = 571U;
	static int64_t x79 = -1LL;
	volatile int64_t x80 = INT64_MIN;
	int32_t t10 = -2556;

    t10 = (x77>>(x78==(x79<=x80)));

    if (t10 != 571) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x93 = 82U;
	volatile uint64_t x94 = 257493953247LLU;
	static uint32_t t11 = 3074496U;

    t11 = (x93>>(x94==(x95<=x96)));

    if (t11 != 82U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x97 = 1;
	uint32_t x98 = 349946356U;
	volatile int16_t x100 = -14;

    t12 = (x97>>(x98==(x99<=x100)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x101 = INT64_MAX;
	uint64_t x102 = 2350128843578844LLU;
	int32_t x103 = INT32_MIN;
	static int16_t x104 = -223;
	volatile int64_t t13 = INT64_MAX;

    t13 = (x101>>(x102==(x103<=x104)));

    if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x105 = UINT8_MAX;
	volatile int64_t x106 = -12952603139896LL;
	int32_t x107 = INT32_MIN;
	int16_t x108 = -5;
	volatile int32_t t14 = 322;

    t14 = (x105>>(x106==(x107<=x108)));

    if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x118 = 52;
	uint16_t x119 = 28U;
	uint16_t x120 = 2U;
	int32_t t15 = 7863057;

    t15 = (x117>>(x118==(x119<=x120)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x121 = 53U;
	int32_t x123 = INT32_MAX;
	int64_t x124 = INT64_MAX;
	uint32_t t16 = 1843346960U;

    t16 = (x121>>(x122==(x123<=x124)));

    if (t16 != 53U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x125 = 111U;
	static uint16_t x126 = 78U;
	int32_t x127 = -1;
	uint32_t x128 = 193339226U;
	volatile int32_t t17 = -1;

    t17 = (x125>>(x126==(x127<=x128)));

    if (t17 != 111) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x141 = 11236U;
	volatile uint16_t x142 = 720U;
	volatile int8_t x143 = INT8_MAX;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t18 = -38555141;

    t18 = (x141>>(x142==(x143<=x144)));

    if (t18 != 11236) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x145 = 89140LLU;
	uint8_t x146 = 102U;
	int32_t x147 = INT32_MAX;
	uint64_t x148 = 1846884940004173LLU;

    t19 = (x145>>(x146==(x147<=x148)));

    if (t19 != 89140LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x154 = INT32_MIN;
	int16_t x155 = INT16_MIN;
	int8_t x156 = -1;
	uint32_t t20 = 76140918U;

    t20 = (x153>>(x154==(x155<=x156)));

    if (t20 != 8333342U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x165 = 3;
	uint16_t x166 = 55U;
	static volatile int32_t x167 = INT32_MIN;
	volatile int16_t x168 = INT16_MAX;
	volatile int32_t t21 = 172681;

    t21 = (x165>>(x166==(x167<=x168)));

    if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x169 = UINT32_MAX;
	int8_t x171 = INT8_MIN;
	uint64_t x172 = 35662800353569375LLU;

    t22 = (x169>>(x170==(x171<=x172)));

    if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x185 = 621;
	static int8_t x186 = -6;
	int16_t x187 = -1;
	static int16_t x188 = -534;
	int32_t t23 = -2919;

    t23 = (x185>>(x186==(x187<=x188)));

    if (t23 != 621) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x189 = 3U;
	static int32_t x192 = INT32_MIN;

    t24 = (x189>>(x190==(x191<=x192)));

    if (t24 != 3) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x193 = 17U;
	uint8_t x194 = UINT8_MAX;
	int32_t x195 = -1;
	static int16_t x196 = INT16_MIN;
	volatile int32_t t25 = 191483228;

    t25 = (x193>>(x194==(x195<=x196)));

    if (t25 != 17) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x198 = 730;
	volatile int16_t x199 = INT16_MIN;
	uint64_t x200 = 114845360797095663LLU;

    t26 = (x197>>(x198==(x199<=x200)));

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x206 = 418644588967LLU;
	int64_t x207 = -1917438526166LL;
	static volatile int8_t x208 = INT8_MAX;
	static volatile int32_t t27 = -437516;

    t27 = (x205>>(x206==(x207<=x208)));

    if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x209 = UINT8_MAX;
	int8_t x210 = INT8_MIN;
	volatile uint16_t x211 = 9340U;

    t28 = (x209>>(x210==(x211<=x212)));

    if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint16_t x213 = 17127U;
	int32_t x214 = -63638294;
	int16_t x215 = 741;
	int32_t x216 = INT32_MAX;
	int32_t t29 = 205;

    t29 = (x213>>(x214==(x215<=x216)));

    if (t29 != 17127) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x217 = 1849U;
	int32_t x218 = -193516;
	uint64_t x219 = 109480251419935820LLU;
	int64_t x220 = -133439224LL;
	volatile int32_t t30 = -149106;

    t30 = (x217>>(x218==(x219<=x220)));

    if (t30 != 1849) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x221 = INT32_MAX;
	volatile uint64_t x222 = UINT64_MAX;
	uint32_t x223 = 14U;
	int16_t x224 = -1;
	volatile int32_t t31 = INT32_MAX;

    t31 = (x221>>(x222==(x223<=x224)));

    if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x230 = INT64_MIN;
	int16_t x231 = INT16_MIN;
	volatile int32_t x232 = -2;
	int32_t t32 = -2330;

    t32 = (x229>>(x230==(x231<=x232)));

    if (t32 != 7) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x233 = 8089088LLU;
	int32_t x234 = INT32_MIN;
	int32_t x235 = INT32_MIN;

    t33 = (x233>>(x234==(x235<=x236)));

    if (t33 != 8089088LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x241 = UINT32_MAX;
	uint8_t x242 = 0U;
	int64_t x243 = INT64_MIN;
	uint16_t x244 = 126U;
	uint32_t t34 = UINT32_MAX;

    t34 = (x241>>(x242==(x243<=x244)));

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x246 = INT32_MAX;
	uint64_t t35 = 272212065769406880LLU;

    t35 = (x245>>(x246==(x247<=x248)));

    if (t35 != 99401338060LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x249 = INT64_MAX;
	static int16_t x250 = INT16_MIN;
	int64_t x251 = 55LL;
	volatile uint64_t x252 = 585730053784984LLU;
	static volatile int64_t t36 = INT64_MAX;

    t36 = (x249>>(x250==(x251<=x252)));

    if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x253 = INT64_MAX;
	int16_t x254 = -1;
	int64_t x255 = -1LL;
	static volatile int64_t x256 = INT64_MIN;
	volatile int64_t t37 = INT64_MAX;

    t37 = (x253>>(x254==(x255<=x256)));

    if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint16_t x257 = UINT16_MAX;
	static int16_t x258 = INT16_MAX;
	int8_t x259 = INT8_MIN;
	uint32_t x260 = UINT32_MAX;
	int32_t t38 = -1;

    t38 = (x257>>(x258==(x259<=x260)));

    if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x269 = 175742347;
	int8_t x270 = INT8_MIN;
	int64_t x271 = INT64_MIN;
	volatile uint32_t x272 = 25107U;
	volatile int32_t t39 = -873249;

    t39 = (x269>>(x270==(x271<=x272)));

    if (t39 != 175742347) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x273 = 8405919066040LLU;
	int16_t x274 = INT16_MIN;
	static int32_t x275 = -9058;
	uint8_t x276 = UINT8_MAX;
	volatile uint64_t t40 = 309850231384560725LLU;

    t40 = (x273>>(x274==(x275<=x276)));

    if (t40 != 8405919066040LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x281 = UINT64_MAX;
	volatile int32_t x283 = INT32_MIN;
	int8_t x284 = INT8_MIN;

    t41 = (x281>>(x282==(x283<=x284)));

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x285 = INT16_MAX;
	uint64_t x286 = UINT64_MAX;
	volatile int32_t x288 = -143707;
	volatile int32_t t42 = 17466669;

    t42 = (x285>>(x286==(x287<=x288)));

    if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x292 = 8;

    t43 = (x289>>(x290==(x291<=x292)));

    if (t43 != 50) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x293 = 0U;
	static volatile uint32_t x294 = 267U;
	uint8_t x295 = UINT8_MAX;
	int32_t t44 = 115154;

    t44 = (x293>>(x294==(x295<=x296)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x297 = 18U;
	uint8_t x298 = 3U;
	static int64_t x299 = -1LL;
	volatile uint32_t t45 = 1564108U;

    t45 = (x297>>(x298==(x299<=x300)));

    if (t45 != 18U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x301 = 125U;
	int8_t x302 = INT8_MAX;
	static int16_t x303 = INT16_MIN;
	int8_t x304 = -4;
	uint32_t t46 = 32620U;

    t46 = (x301>>(x302==(x303<=x304)));

    if (t46 != 125U) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x309 = UINT64_MAX;
	int16_t x310 = -1;
	volatile int8_t x311 = -1;
	int32_t x312 = INT32_MIN;
	volatile uint64_t t47 = UINT64_MAX;

    t47 = (x309>>(x310==(x311<=x312)));

    if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x313 = 218U;
	uint32_t x315 = 6236151U;
	static int32_t t48 = -6257;

    t48 = (x313>>(x314==(x315<=x316)));

    if (t48 != 218) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x317 = 1;
	volatile int16_t x318 = INT16_MIN;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t49 = 971;

    t49 = (x317>>(x318==(x319<=x320)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x350 = INT32_MAX;
	int8_t x352 = -2;
	static int64_t t50 = INT64_MAX;

    t50 = (x349>>(x350==(x351<=x352)));

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x361 = INT64_MAX;
	int64_t x362 = -519306155729LL;
	int8_t x363 = -3;
	int64_t x364 = INT64_MAX;
	int64_t t51 = INT64_MAX;

    t51 = (x361>>(x362==(x363<=x364)));

    if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint8_t x365 = 0U;
	int8_t x366 = 9;
	int8_t x367 = INT8_MIN;
	uint8_t x368 = 3U;
	volatile int32_t t52 = -100461396;

    t52 = (x365>>(x366==(x367<=x368)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x369 = UINT16_MAX;
	static int16_t x371 = -1675;
	uint8_t x372 = 56U;
	volatile int32_t t53 = 75;

    t53 = (x369>>(x370==(x371<=x372)));

    if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x373 = UINT16_MAX;
	static volatile uint16_t x374 = 0U;
	volatile int32_t x375 = -23568;
	int8_t x376 = 0;
	int32_t t54 = 5;

    t54 = (x373>>(x374==(x375<=x376)));

    if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x377 = INT64_MAX;
	static int64_t x378 = INT64_MAX;
	uint32_t x380 = 7957207U;
	volatile int64_t t55 = INT64_MAX;

    t55 = (x377>>(x378==(x379<=x380)));

    if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x389 = 1;
	volatile uint8_t x390 = 27U;
	int8_t x391 = -4;
	int32_t t56 = -36403;

    t56 = (x389>>(x390==(x391<=x392)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x393 = 41357719979962914LL;
	int32_t x394 = INT32_MIN;
	int8_t x396 = INT8_MAX;
	volatile int64_t t57 = 118LL;

    t57 = (x393>>(x394==(x395<=x396)));

    if (t57 != 41357719979962914LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x401 = 20;
	uint32_t x402 = 95939606U;
	int64_t x403 = INT64_MIN;
	int32_t t58 = 7092;

    t58 = (x401>>(x402==(x403<=x404)));

    if (t58 != 20) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x409 = 22944866U;
	int8_t x411 = INT8_MAX;
	uint8_t x412 = 3U;
	uint32_t t59 = 1U;

    t59 = (x409>>(x410==(x411<=x412)));

    if (t59 != 22944866U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x414 = -1;
	int32_t t60 = INT32_MAX;

    t60 = (x413>>(x414==(x415<=x416)));

    if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x421 = INT64_MAX;
	volatile int64_t x422 = 2LL;
	static volatile int16_t x423 = INT16_MIN;
	int8_t x424 = INT8_MAX;
	int64_t t61 = INT64_MAX;

    t61 = (x421>>(x422==(x423<=x424)));

    if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x433 = 91;
	volatile int32_t x434 = INT32_MIN;
	int16_t x435 = INT16_MAX;
	uint64_t x436 = 13905840531907LLU;
	int32_t t62 = 78199068;

    t62 = (x433>>(x434==(x435<=x436)));

    if (t62 != 91) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x453 = 12974;
	int64_t x454 = INT64_MIN;
	int64_t x456 = INT64_MIN;
	static volatile int32_t t63 = -24;

    t63 = (x453>>(x454==(x455<=x456)));

    if (t63 != 12974) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x461 = 0;
	uint64_t x462 = UINT64_MAX;
	int8_t x463 = INT8_MIN;
	int32_t x464 = 86;
	int32_t t64 = 86;

    t64 = (x461>>(x462==(x463<=x464)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x469 = UINT8_MAX;
	int16_t x470 = INT16_MIN;
	volatile uint32_t x471 = UINT32_MAX;
	static int64_t x472 = INT64_MIN;
	volatile int32_t t65 = -189335;

    t65 = (x469>>(x470==(x471<=x472)));

    if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x477 = 357167U;
	int64_t x478 = -664LL;
	int16_t x479 = 236;
	volatile uint32_t t66 = 102U;

    t66 = (x477>>(x478==(x479<=x480)));

    if (t66 != 357167U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x485 = 1U;
	int16_t x486 = INT16_MAX;
	int16_t x487 = -1;
	static int32_t t67 = 15201157;

    t67 = (x485>>(x486==(x487<=x488)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x489 = UINT8_MAX;
	int64_t x490 = -1LL;
	uint16_t x491 = 7694U;
	int32_t x492 = -1;
	volatile int32_t t68 = -1;

    t68 = (x489>>(x490==(x491<=x492)));

    if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x506 = 241;
	uint8_t x507 = 4U;
	int64_t x508 = -5628LL;
	volatile int32_t t69 = 46110;

    t69 = (x505>>(x506==(x507<=x508)));

    if (t69 != 48) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x513 = 39935512U;
	uint16_t x514 = 9U;
	volatile uint32_t t70 = 775313U;

    t70 = (x513>>(x514==(x515<=x516)));

    if (t70 != 39935512U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x519 = -691;
	static uint32_t x520 = 114U;
	volatile int64_t t71 = INT64_MAX;

    t71 = (x517>>(x518==(x519<=x520)));

    if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x525 = 0;
	volatile uint8_t x526 = UINT8_MAX;
	volatile int64_t x528 = INT64_MIN;
	volatile int32_t t72 = 2258124;

    t72 = (x525>>(x526==(x527<=x528)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x533 = 2U;
	static uint8_t x534 = UINT8_MAX;
	volatile int8_t x535 = 49;
	static int8_t x536 = -6;
	static volatile int32_t t73 = 191;

    t73 = (x533>>(x534==(x535<=x536)));

    if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x537 = INT8_MAX;
	volatile uint64_t x538 = 9093LLU;
	static int8_t x539 = INT8_MIN;
	int32_t x540 = INT32_MAX;

    t74 = (x537>>(x538==(x539<=x540)));

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint8_t x557 = 1U;
	volatile int64_t x559 = 24319458241413LL;
	int32_t x560 = INT32_MAX;

    t75 = (x557>>(x558==(x559<=x560)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x569 = 3514U;
	int32_t x570 = INT32_MAX;
	uint8_t x571 = UINT8_MAX;
	int64_t x572 = INT64_MIN;

    t76 = (x569>>(x570==(x571<=x572)));

    if (t76 != 3514) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x577 = 1145U;
	int32_t x578 = INT32_MIN;
	uint8_t x579 = UINT8_MAX;
	uint32_t x580 = UINT32_MAX;
	int32_t t77 = 496;

    t77 = (x577>>(x578==(x579<=x580)));

    if (t77 != 1145) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x581 = INT16_MAX;
	uint32_t x582 = UINT32_MAX;
	uint16_t x584 = UINT16_MAX;
	int32_t t78 = 20229360;

    t78 = (x581>>(x582==(x583<=x584)));

    if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x585 = INT64_MAX;
	volatile int16_t x586 = -1;
	volatile int32_t x587 = INT32_MAX;
	int16_t x588 = -1565;
	static int64_t t79 = INT64_MAX;

    t79 = (x585>>(x586==(x587<=x588)));

    if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x589 = UINT8_MAX;
	int16_t x590 = INT16_MIN;
	uint32_t x591 = 9098152U;
	int8_t x592 = 0;

    t80 = (x589>>(x590==(x591<=x592)));

    if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x593 = 1U;
	volatile int32_t x595 = INT32_MAX;
	int32_t x596 = INT32_MAX;
	volatile int32_t t81 = 11;

    t81 = (x593>>(x594==(x595<=x596)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x601 = UINT32_MAX;
	volatile int8_t x602 = INT8_MIN;
	int64_t x603 = INT64_MIN;
	uint32_t x604 = 95319815U;
	uint32_t t82 = UINT32_MAX;

    t82 = (x601>>(x602==(x603<=x604)));

    if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x609 = 7U;
	volatile uint8_t x610 = 1U;
	volatile uint32_t x612 = 33930951U;

    t83 = (x609>>(x610==(x611<=x612)));

    if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x621 = 3U;
	uint64_t x622 = 15464262924241LLU;
	uint16_t x623 = UINT16_MAX;

    t84 = (x621>>(x622==(x623<=x624)));

    if (t84 != 3) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x633 = 1;
	uint8_t x636 = 29U;
	int32_t t85 = -41340;

    t85 = (x633>>(x634==(x635<=x636)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x643 = UINT64_MAX;
	int8_t x644 = INT8_MIN;
	int32_t t86 = -44;

    t86 = (x641>>(x642==(x643<=x644)));

    if (t86 != 6395) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x646 = UINT8_MAX;
	static uint32_t x647 = 1112U;
	int8_t x648 = INT8_MIN;
	uint32_t t87 = UINT32_MAX;

    t87 = (x645>>(x646==(x647<=x648)));

    if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x649 = 0U;
	int64_t x650 = -1LL;
	int64_t x651 = -15261626LL;
	int8_t x652 = INT8_MAX;
	volatile int32_t t88 = -594;

    t88 = (x649>>(x650==(x651<=x652)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x653 = 6300U;
	int64_t x655 = INT64_MIN;
	int32_t x656 = INT32_MAX;
	volatile int32_t t89 = 32671;

    t89 = (x653>>(x654==(x655<=x656)));

    if (t89 != 6300) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x657 = 1457845621U;
	int16_t x658 = 20;
	uint8_t x659 = UINT8_MAX;
	static int8_t x660 = INT8_MAX;
	volatile uint32_t t90 = 21103U;

    t90 = (x657>>(x658==(x659<=x660)));

    if (t90 != 1457845621U) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x662 = UINT32_MAX;
	volatile uint16_t x664 = UINT16_MAX;
	int32_t t91 = 10828993;

    t91 = (x661>>(x662==(x663<=x664)));

    if (t91 != 25) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x682 = 61U;
	volatile uint8_t x683 = 5U;

    t92 = (x681>>(x682==(x683<=x684)));

    if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x685 = 2155827183968LL;
	int32_t x686 = INT32_MIN;
	int32_t x688 = -22;
	int64_t t93 = -225968964708937LL;

    t93 = (x685>>(x686==(x687<=x688)));

    if (t93 != 2155827183968LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x689 = 28U;
	volatile int8_t x690 = 15;
	uint8_t x691 = 10U;
	static uint8_t x692 = UINT8_MAX;
	volatile int32_t t94 = -4687409;

    t94 = (x689>>(x690==(x691<=x692)));

    if (t94 != 28) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int64_t x697 = 42015189286LL;
	int16_t x698 = -3;
	int32_t x700 = INT32_MIN;

    t95 = (x697>>(x698==(x699<=x700)));

    if (t95 != 42015189286LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x701 = 36771217U;
	int32_t x702 = INT32_MIN;
	volatile uint32_t t96 = 995397208U;

    t96 = (x701>>(x702==(x703<=x704)));

    if (t96 != 36771217U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x717 = INT64_MAX;
	static uint16_t x718 = 1U;
	static volatile uint32_t x719 = 5U;

    t97 = (x717>>(x718==(x719<=x720)));

    if (t97 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x725 = 1647LL;
	uint64_t x726 = UINT64_MAX;
	int16_t x727 = 7;
	int32_t x728 = INT32_MAX;
	volatile int64_t t98 = 214524596LL;

    t98 = (x725>>(x726==(x727<=x728)));

    if (t98 != 1647LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x729 = 11597986401LLU;
	int16_t x730 = INT16_MIN;
	volatile int64_t x731 = -117251967917LL;
	int16_t x732 = INT16_MAX;

    t99 = (x729>>(x730==(x731<=x732)));

    if (t99 != 11597986401LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int16_t x737 = INT16_MAX;
	static int32_t x738 = INT32_MAX;
	uint8_t x739 = UINT8_MAX;
	static uint64_t x740 = 8463957680116LLU;
	volatile int32_t t100 = -6964;

    t100 = (x737>>(x738==(x739<=x740)));

    if (t100 != 32767) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x753 = UINT32_MAX;
	int64_t x754 = INT64_MIN;
	int16_t x755 = INT16_MIN;
	static int16_t x756 = INT16_MIN;
	volatile uint32_t t101 = UINT32_MAX;

    t101 = (x753>>(x754==(x755<=x756)));

    if (t101 != UINT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x757 = UINT32_MAX;
	static int8_t x758 = -1;
	volatile int32_t x759 = INT32_MAX;
	static int32_t x760 = 53;
	volatile uint32_t t102 = UINT32_MAX;

    t102 = (x757>>(x758==(x759<=x760)));

    if (t102 != UINT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x762 = INT32_MIN;
	static uint32_t x763 = UINT32_MAX;
	uint8_t x764 = 62U;
	volatile int32_t t103 = -797682;

    t103 = (x761>>(x762==(x763<=x764)));

    if (t103 != 286) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x765 = 1828U;
	static int8_t x766 = INT8_MIN;
	uint64_t x767 = UINT64_MAX;
	static volatile int16_t x768 = INT16_MIN;
	int32_t t104 = -470077689;

    t104 = (x765>>(x766==(x767<=x768)));

    if (t104 != 1828) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x769 = INT8_MAX;
	uint16_t x770 = 4550U;
	int64_t x771 = INT64_MIN;
	uint16_t x772 = 29U;

    t105 = (x769>>(x770==(x771<=x772)));

    if (t105 != 127) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x777 = 709U;
	uint64_t x778 = 0LLU;
	uint32_t x779 = 175U;
	int32_t t106 = 206792201;

    t106 = (x777>>(x778==(x779<=x780)));

    if (t106 != 709) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x781 = 204229895178566LL;
	int64_t x782 = INT64_MAX;
	uint8_t x783 = UINT8_MAX;
	int8_t x784 = -2;
	int64_t t107 = 1921522095642LL;

    t107 = (x781>>(x782==(x783<=x784)));

    if (t107 != 204229895178566LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x789 = INT64_MAX;
	int8_t x790 = INT8_MAX;
	static int64_t x791 = -15985901LL;
	int16_t x792 = INT16_MIN;
	int64_t t108 = INT64_MAX;

    t108 = (x789>>(x790==(x791<=x792)));

    if (t108 != INT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x793 = INT8_MAX;
	int8_t x794 = -2;
	int8_t x795 = -8;
	uint64_t x796 = UINT64_MAX;
	volatile int32_t t109 = -103647;

    t109 = (x793>>(x794==(x795<=x796)));

    if (t109 != 127) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x801 = UINT64_MAX;
	static int8_t x802 = -7;
	int8_t x804 = -1;
	static uint64_t t110 = UINT64_MAX;

    t110 = (x801>>(x802==(x803<=x804)));

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x805 = UINT16_MAX;
	int32_t x807 = 29;
	uint8_t x808 = 19U;
	static int32_t t111 = 877946;

    t111 = (x805>>(x806==(x807<=x808)));

    if (t111 != 65535) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x809 = 587U;
	int32_t x810 = 0;
	uint32_t x811 = UINT32_MAX;
	volatile int64_t x812 = INT64_MIN;
	volatile int32_t t112 = -21055;

    t112 = (x809>>(x810==(x811<=x812)));

    if (t112 != 293) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x814 = 1;
	volatile int64_t x815 = INT64_MAX;
	uint32_t x816 = 481434U;
	volatile uint32_t t113 = 0U;

    t113 = (x813>>(x814==(x815<=x816)));

    if (t113 != 37623U) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x817 = 135930U;
	int8_t x818 = INT8_MIN;
	int64_t x819 = -233738LL;
	int64_t x820 = INT64_MIN;
	static uint32_t t114 = 3U;

    t114 = (x817>>(x818==(x819<=x820)));

    if (t114 != 135930U) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x830 = UINT64_MAX;
	static volatile int32_t x831 = 17837;
	uint32_t x832 = 15013U;
	uint32_t t115 = 2823850U;

    t115 = (x829>>(x830==(x831<=x832)));

    if (t115 != 64540323U) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x833 = 30;
	int8_t x835 = INT8_MIN;
	static int16_t x836 = 2;
	static int32_t t116 = -22626;

    t116 = (x833>>(x834==(x835<=x836)));

    if (t116 != 30) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x845 = INT8_MAX;
	volatile int32_t x847 = 61560297;
	uint64_t x848 = UINT64_MAX;
	static volatile int32_t t117 = -154663562;

    t117 = (x845>>(x846==(x847<=x848)));

    if (t117 != 127) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x849 = 16627U;
	static uint8_t x850 = 31U;
	uint8_t x852 = 19U;
	uint32_t t118 = 7645776U;

    t118 = (x849>>(x850==(x851<=x852)));

    if (t118 != 16627U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x857 = UINT64_MAX;
	uint16_t x858 = 11603U;
	static uint8_t x859 = 13U;
	uint64_t x860 = 20209396320813LLU;
	uint64_t t119 = UINT64_MAX;

    t119 = (x857>>(x858==(x859<=x860)));

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x871 = -1;
	uint8_t x872 = 109U;
	static int32_t t120 = -55953214;

    t120 = (x869>>(x870==(x871<=x872)));

    if (t120 != 255) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x875 = INT64_MAX;
	static uint32_t x876 = 12U;
	int64_t t121 = 1LL;

    t121 = (x873>>(x874==(x875<=x876)));

    if (t121 != 4190305628817285LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x877 = 1U;
	int64_t x878 = -489758829447LL;
	volatile int8_t x879 = INT8_MAX;
	static int64_t x880 = INT64_MIN;
	volatile int32_t t122 = 35083;

    t122 = (x877>>(x878==(x879<=x880)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x881 = 46;
	volatile uint64_t x882 = 521174925836LLU;
	volatile int8_t x883 = INT8_MIN;
	int16_t x884 = INT16_MAX;

    t123 = (x881>>(x882==(x883<=x884)));

    if (t123 != 46) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x897 = INT64_MAX;
	uint8_t x898 = 4U;
	volatile uint16_t x899 = 514U;
	volatile int64_t t124 = INT64_MAX;

    t124 = (x897>>(x898==(x899<=x900)));

    if (t124 != INT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x901 = UINT8_MAX;
	int32_t x902 = INT32_MAX;
	static volatile int16_t x904 = -1;
	int32_t t125 = -560;

    t125 = (x901>>(x902==(x903<=x904)));

    if (t125 != 255) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x909 = 29U;
	static uint8_t x910 = 0U;
	uint8_t x911 = 2U;
	static int64_t x912 = -1LL;
	static int32_t t126 = -53607836;

    t126 = (x909>>(x910==(x911<=x912)));

    if (t126 != 14) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x917 = 1;
	volatile int32_t x918 = -146628;
	volatile uint32_t x919 = 20965994U;
	static int8_t x920 = INT8_MIN;
	static volatile int32_t t127 = 14470368;

    t127 = (x917>>(x918==(x919<=x920)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x921 = 6584910512473010LLU;
	volatile int32_t x922 = INT32_MIN;
	int8_t x923 = -17;
	int16_t x924 = -1;
	volatile uint64_t t128 = 993440LLU;

    t128 = (x921>>(x922==(x923<=x924)));

    if (t128 != 6584910512473010LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x926 = -1;
	int16_t x927 = INT16_MAX;
	int16_t x928 = -11129;
	static volatile int32_t t129 = -23;

    t129 = (x925>>(x926==(x927<=x928)));

    if (t129 != 14) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x929 = UINT8_MAX;
	volatile int32_t x930 = INT32_MAX;
	int8_t x932 = INT8_MIN;
	volatile int32_t t130 = 179;

    t130 = (x929>>(x930==(x931<=x932)));

    if (t130 != 255) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x933 = INT8_MAX;
	volatile uint64_t x934 = 35809002456204LLU;
	volatile int8_t x935 = INT8_MIN;
	static volatile int16_t x936 = 81;
	volatile int32_t t131 = 3641;

    t131 = (x933>>(x934==(x935<=x936)));

    if (t131 != 127) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x949 = 1;
	int16_t x951 = INT16_MIN;
	volatile int32_t t132 = -7537335;

    t132 = (x949>>(x950==(x951<=x952)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x953 = 10U;
	int64_t x954 = INT64_MIN;
	int8_t x955 = 44;
	volatile int8_t x956 = INT8_MAX;

    t133 = (x953>>(x954==(x955<=x956)));

    if (t133 != 10) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x957 = UINT8_MAX;
	int32_t x959 = INT32_MIN;
	uint32_t x960 = 768U;
	volatile int32_t t134 = -690;

    t134 = (x957>>(x958==(x959<=x960)));

    if (t134 != 255) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x962 = 0;
	volatile int64_t x963 = INT64_MAX;
	int16_t x964 = INT16_MIN;
	uint64_t t135 = 13603175868886991LLU;

    t135 = (x961>>(x962==(x963<=x964)));

    if (t135 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x965 = UINT32_MAX;
	uint64_t x967 = UINT64_MAX;
	int16_t x968 = -1;
	volatile uint32_t t136 = UINT32_MAX;

    t136 = (x965>>(x966==(x967<=x968)));

    if (t136 != UINT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x973 = 4570173U;
	volatile int32_t x975 = INT32_MIN;
	int32_t x976 = -255;
	uint32_t t137 = 642U;

    t137 = (x973>>(x974==(x975<=x976)));

    if (t137 != 4570173U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x977 = UINT32_MAX;
	uint8_t x978 = 2U;
	volatile uint32_t x979 = UINT32_MAX;
	uint8_t x980 = 4U;
	volatile uint32_t t138 = UINT32_MAX;

    t138 = (x977>>(x978==(x979<=x980)));

    if (t138 != UINT32_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x989 = UINT32_MAX;
	uint32_t x990 = 34585716U;
	int64_t x991 = INT64_MAX;
	int64_t x992 = INT64_MIN;
	uint32_t t139 = UINT32_MAX;

    t139 = (x989>>(x990==(x991<=x992)));

    if (t139 != UINT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x993 = 7U;
	uint8_t x994 = UINT8_MAX;
	uint8_t x995 = 42U;

    t140 = (x993>>(x994==(x995<=x996)));

    if (t140 != 7U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x997 = INT8_MAX;
	int16_t x998 = INT16_MAX;
	uint32_t x999 = 5488U;
	static volatile uint16_t x1000 = 14327U;

    t141 = (x997>>(x998==(x999<=x1000)));

    if (t141 != 127) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x1001 = INT8_MAX;
	volatile int8_t x1002 = INT8_MAX;
	int64_t x1003 = INT64_MAX;
	int64_t x1004 = INT64_MIN;

    t142 = (x1001>>(x1002==(x1003<=x1004)));

    if (t142 != 127) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x1005 = UINT16_MAX;
	int8_t x1006 = -1;
	int64_t x1007 = -7787612LL;
	int32_t t143 = -2;

    t143 = (x1005>>(x1006==(x1007<=x1008)));

    if (t143 != 65535) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x1009 = INT16_MAX;
	volatile int32_t x1010 = INT32_MIN;
	int64_t x1011 = 58586810962161298LL;
	int16_t x1012 = -43;

    t144 = (x1009>>(x1010==(x1011<=x1012)));

    if (t144 != 32767) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x1014 = 14358LLU;
	static int32_t x1015 = -374;
	uint32_t x1016 = 5151U;
	static volatile int32_t t145 = 693618142;

    t145 = (x1013>>(x1014==(x1015<=x1016)));

    if (t145 != 65535) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x1018 = INT64_MIN;
	int8_t x1019 = INT8_MAX;
	int32_t t146 = -715;

    t146 = (x1017>>(x1018==(x1019<=x1020)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x1026 = 815283253U;
	int8_t x1027 = INT8_MIN;
	static volatile int32_t x1028 = 297761278;
	volatile int32_t t147 = 3352;

    t147 = (x1025>>(x1026==(x1027<=x1028)));

    if (t147 != 3766) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x1030 = UINT16_MAX;
	int16_t x1031 = INT16_MAX;
	static volatile uint32_t x1032 = 964551229U;
	volatile int32_t t148 = -912807975;

    t148 = (x1029>>(x1030==(x1031<=x1032)));

    if (t148 != 2855) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1033 = 2;
	static uint64_t x1034 = 766LLU;
	int8_t x1036 = INT8_MIN;
	volatile int32_t t149 = 165377;

    t149 = (x1033>>(x1034==(x1035<=x1036)));

    if (t149 != 2) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x1037 = UINT16_MAX;
	int32_t x1038 = INT32_MIN;
	static int64_t x1040 = 3903432898388721182LL;
	volatile int32_t t150 = 0;

    t150 = (x1037>>(x1038==(x1039<=x1040)));

    if (t150 != 65535) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x1041 = 66857995LLU;
	uint16_t x1042 = 25U;
	uint8_t x1044 = UINT8_MAX;

    t151 = (x1041>>(x1042==(x1043<=x1044)));

    if (t151 != 66857995LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint8_t x1057 = UINT8_MAX;
	int32_t t152 = 12333;

    t152 = (x1057>>(x1058==(x1059<=x1060)));

    if (t152 != 255) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x1065 = 1127U;
	int16_t x1066 = INT16_MIN;
	static int16_t x1067 = INT16_MIN;
	int64_t x1068 = INT64_MIN;
	int32_t t153 = -4;

    t153 = (x1065>>(x1066==(x1067<=x1068)));

    if (t153 != 1127) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x1069 = INT64_MAX;
	static int8_t x1070 = INT8_MIN;
	uint8_t x1071 = 15U;
	static volatile int64_t x1072 = 469199LL;
	volatile int64_t t154 = INT64_MAX;

    t154 = (x1069>>(x1070==(x1071<=x1072)));

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x1073 = 12U;
	uint16_t x1074 = 62U;
	uint8_t x1075 = UINT8_MAX;
	static int16_t x1076 = -1;
	volatile uint32_t t155 = 2208U;

    t155 = (x1073>>(x1074==(x1075<=x1076)));

    if (t155 != 12U) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x1077 = UINT16_MAX;
	int16_t x1078 = -2607;
	volatile uint16_t x1079 = 10U;
	int16_t x1080 = -1;
	static volatile int32_t t156 = -87005;

    t156 = (x1077>>(x1078==(x1079<=x1080)));

    if (t156 != 65535) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x1083 = -1;
	int32_t x1084 = -9;
	volatile int32_t t157 = -59172;

    t157 = (x1081>>(x1082==(x1083<=x1084)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x1086 = 1U;
	int32_t x1087 = -1;
	int8_t x1088 = 2;
	static volatile int32_t t158 = 1;

    t158 = (x1085>>(x1086==(x1087<=x1088)));

    if (t158 != 63) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x1089 = 3;
	int16_t x1090 = -11;
	int8_t x1091 = -16;
	uint32_t x1092 = 307348U;
	int32_t t159 = 158462431;

    t159 = (x1089>>(x1090==(x1091<=x1092)));

    if (t159 != 3) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x1093 = UINT8_MAX;
	volatile uint32_t x1094 = 7696U;
	int16_t x1095 = INT16_MAX;
	volatile int32_t x1096 = INT32_MAX;
	int32_t t160 = -17085567;

    t160 = (x1093>>(x1094==(x1095<=x1096)));

    if (t160 != 255) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x1102 = INT16_MIN;
	volatile int8_t x1103 = 27;
	uint32_t x1104 = 1159442U;
	volatile uint32_t t161 = UINT32_MAX;

    t161 = (x1101>>(x1102==(x1103<=x1104)));

    if (t161 != UINT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x1105 = 1355U;
	uint16_t x1107 = UINT16_MAX;
	int64_t x1108 = INT64_MAX;
	volatile uint32_t t162 = 51304040U;

    t162 = (x1105>>(x1106==(x1107<=x1108)));

    if (t162 != 1355U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x1113 = 1U;
	uint8_t x1115 = UINT8_MAX;
	int64_t x1116 = INT64_MAX;

    t163 = (x1113>>(x1114==(x1115<=x1116)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x1117 = 3452903252797LL;
	static uint16_t x1118 = UINT16_MAX;
	volatile uint64_t x1119 = 49541435496LLU;
	uint32_t x1120 = 1245U;
	volatile int64_t t164 = -1LL;

    t164 = (x1117>>(x1118==(x1119<=x1120)));

    if (t164 != 3452903252797LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x1137 = 26U;
	int8_t x1138 = INT8_MIN;
	static int32_t x1139 = INT32_MIN;
	uint64_t x1140 = UINT64_MAX;
	volatile int32_t t165 = 2043;

    t165 = (x1137>>(x1138==(x1139<=x1140)));

    if (t165 != 26) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x1145 = INT32_MAX;
	int8_t x1146 = -1;
	uint8_t x1147 = UINT8_MAX;
	volatile int32_t t166 = INT32_MAX;

    t166 = (x1145>>(x1146==(x1147<=x1148)));

    if (t166 != INT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1149 = INT32_MAX;
	int16_t x1150 = INT16_MAX;
	uint8_t x1151 = 19U;
	uint64_t x1152 = UINT64_MAX;
	int32_t t167 = INT32_MAX;

    t167 = (x1149>>(x1150==(x1151<=x1152)));

    if (t167 != INT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x1153 = INT16_MAX;
	int32_t x1155 = INT32_MAX;
	static int8_t x1156 = INT8_MIN;
	int32_t t168 = -437544;

    t168 = (x1153>>(x1154==(x1155<=x1156)));

    if (t168 != 32767) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1158 = INT32_MIN;
	volatile int32_t x1159 = INT32_MAX;
	volatile int64_t t169 = -533434050209LL;

    t169 = (x1157>>(x1158==(x1159<=x1160)));

    if (t169 != 128164511328873LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1161 = 3134;
	int16_t x1162 = -1;
	static int8_t x1163 = INT8_MIN;
	int32_t t170 = 3;

    t170 = (x1161>>(x1162==(x1163<=x1164)));

    if (t170 != 3134) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x1165 = 1941U;
	uint16_t x1166 = 4049U;
	volatile uint8_t x1167 = UINT8_MAX;
	uint8_t x1168 = 7U;

    t171 = (x1165>>(x1166==(x1167<=x1168)));

    if (t171 != 1941) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1169 = INT32_MAX;
	static int32_t x1170 = INT32_MIN;
	volatile uint8_t x1171 = 1U;
	volatile int32_t t172 = INT32_MAX;

    t172 = (x1169>>(x1170==(x1171<=x1172)));

    if (t172 != INT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1185 = INT32_MAX;
	int32_t x1187 = INT32_MIN;
	int8_t x1188 = INT8_MIN;
	volatile int32_t t173 = INT32_MAX;

    t173 = (x1185>>(x1186==(x1187<=x1188)));

    if (t173 != INT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x1189 = 31331992;
	uint16_t x1190 = 661U;
	int64_t x1192 = -1LL;

    t174 = (x1189>>(x1190==(x1191<=x1192)));

    if (t174 != 31331992) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x1193 = INT8_MAX;
	volatile int64_t x1194 = -342784070423882800LL;
	int64_t x1195 = -8122604509LL;
	int8_t x1196 = -18;
	int32_t t175 = 7556693;

    t175 = (x1193>>(x1194==(x1195<=x1196)));

    if (t175 != 127) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x1201 = 49898U;
	uint64_t x1202 = 185LLU;
	int32_t x1203 = INT32_MIN;
	volatile int8_t x1204 = -11;

    t176 = (x1201>>(x1202==(x1203<=x1204)));

    if (t176 != 49898U) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1205 = 2235;
	int8_t x1206 = INT8_MIN;
	int8_t x1207 = -1;
	uint8_t x1208 = UINT8_MAX;
	int32_t t177 = 131477492;

    t177 = (x1205>>(x1206==(x1207<=x1208)));

    if (t177 != 2235) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x1213 = UINT32_MAX;
	int32_t x1214 = -1;
	volatile int64_t x1215 = INT64_MIN;
	volatile uint32_t x1216 = 29U;
	uint32_t t178 = UINT32_MAX;

    t178 = (x1213>>(x1214==(x1215<=x1216)));

    if (t178 != UINT32_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x1217 = INT16_MAX;
	volatile int64_t x1218 = INT64_MIN;
	int64_t x1219 = INT64_MIN;
	volatile int16_t x1220 = INT16_MIN;
	int32_t t179 = -3;

    t179 = (x1217>>(x1218==(x1219<=x1220)));

    if (t179 != 32767) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x1229 = UINT16_MAX;
	int8_t x1230 = INT8_MIN;
	uint16_t x1231 = 4075U;
	int16_t x1232 = INT16_MAX;

    t180 = (x1229>>(x1230==(x1231<=x1232)));

    if (t180 != 65535) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x1233 = 24U;
	static uint16_t x1234 = 1U;
	static uint32_t x1235 = UINT32_MAX;
	volatile int64_t x1236 = INT64_MAX;
	volatile int32_t t181 = 0;

    t181 = (x1233>>(x1234==(x1235<=x1236)));

    if (t181 != 12) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1237 = 0;
	int64_t x1238 = INT64_MIN;
	volatile int32_t t182 = 149671313;

    t182 = (x1237>>(x1238==(x1239<=x1240)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1241 = INT32_MAX;
	int8_t x1242 = INT8_MIN;
	volatile uint64_t x1244 = 1870075201115558951LLU;
	static volatile int32_t t183 = INT32_MAX;

    t183 = (x1241>>(x1242==(x1243<=x1244)));

    if (t183 != INT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1270 = 0U;
	uint32_t x1271 = UINT32_MAX;
	volatile int64_t x1272 = INT64_MAX;
	static int64_t t184 = INT64_MAX;

    t184 = (x1269>>(x1270==(x1271<=x1272)));

    if (t184 != INT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x1277 = UINT32_MAX;
	static int16_t x1278 = -2335;
	int8_t x1279 = INT8_MIN;
	static volatile int64_t x1280 = 2537218288345683477LL;
	volatile uint32_t t185 = UINT32_MAX;

    t185 = (x1277>>(x1278==(x1279<=x1280)));

    if (t185 != UINT32_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x1281 = 1380560U;
	uint32_t x1282 = 17870751U;
	static int32_t x1283 = -91195839;
	int16_t x1284 = INT16_MAX;
	volatile uint32_t t186 = 17U;

    t186 = (x1281>>(x1282==(x1283<=x1284)));

    if (t186 != 1380560U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1289 = 0U;
	int16_t x1290 = INT16_MIN;
	int32_t x1291 = -176964;
	int8_t x1292 = INT8_MAX;
	volatile int32_t t187 = 247642543;

    t187 = (x1289>>(x1290==(x1291<=x1292)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x1293 = UINT8_MAX;
	int32_t x1294 = INT32_MAX;
	int64_t x1295 = INT64_MIN;
	volatile uint64_t x1296 = 559LLU;
	volatile int32_t t188 = 42615;

    t188 = (x1293>>(x1294==(x1295<=x1296)));

    if (t188 != 255) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1297 = 1928LLU;
	volatile int64_t x1298 = 706959490629163LL;
	int16_t x1299 = INT16_MIN;
	uint64_t t189 = 230971563LLU;

    t189 = (x1297>>(x1298==(x1299<=x1300)));

    if (t189 != 1928LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1305 = 2061642LLU;
	int8_t x1306 = -1;
	int32_t x1307 = INT32_MAX;
	int64_t x1308 = INT64_MIN;
	volatile uint64_t t190 = 1LLU;

    t190 = (x1305>>(x1306==(x1307<=x1308)));

    if (t190 != 2061642LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1317 = 5297641;
	int16_t x1318 = 3091;
	static int8_t x1320 = INT8_MIN;

    t191 = (x1317>>(x1318==(x1319<=x1320)));

    if (t191 != 5297641) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1321 = 48077U;
	int8_t x1322 = -1;
	int8_t x1323 = INT8_MAX;
	int8_t x1324 = INT8_MIN;
	static volatile uint32_t t192 = 22095514U;

    t192 = (x1321>>(x1322==(x1323<=x1324)));

    if (t192 != 48077U) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1337 = INT64_MAX;
	int32_t x1338 = INT32_MIN;
	int16_t x1339 = INT16_MIN;
	uint32_t x1340 = UINT32_MAX;
	static volatile int64_t t193 = INT64_MAX;

    t193 = (x1337>>(x1338==(x1339<=x1340)));

    if (t193 != INT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x1345 = 1724U;
	static int8_t x1347 = 0;
	int8_t x1348 = INT8_MIN;
	int32_t t194 = 197240;

    t194 = (x1345>>(x1346==(x1347<=x1348)));

    if (t194 != 1724) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1353 = 260U;
	static uint32_t x1354 = 12U;
	int32_t x1355 = INT32_MAX;
	uint8_t x1356 = UINT8_MAX;
	volatile int32_t t195 = 502;

    t195 = (x1353>>(x1354==(x1355<=x1356)));

    if (t195 != 260) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1358 = 16129U;
	static int8_t x1359 = INT8_MIN;
	volatile uint16_t x1360 = UINT16_MAX;
	int32_t t196 = -36;

    t196 = (x1357>>(x1358==(x1359<=x1360)));

    if (t196 != 127) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1365 = 7U;
	uint16_t x1366 = 94U;
	uint8_t x1367 = UINT8_MAX;
	uint32_t x1368 = 41U;
	int32_t t197 = -476542558;

    t197 = (x1365>>(x1366==(x1367<=x1368)));

    if (t197 != 7) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1373 = 22;
	int32_t x1374 = INT32_MIN;
	uint64_t x1375 = 768LLU;
	static volatile int32_t t198 = 14918976;

    t198 = (x1373>>(x1374==(x1375<=x1376)));

    if (t198 != 22) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x1378 = UINT32_MAX;
	uint8_t x1379 = 30U;
	static int64_t x1380 = INT64_MIN;

    t199 = (x1377>>(x1378==(x1379<=x1380)));

    if (t199 != UINT32_MAX) { NG(); } else { ; }
	
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


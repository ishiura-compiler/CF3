
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

volatile int16_t x1 = 9;
volatile int16_t x11 = INT16_MIN;
int8_t x20 = INT8_MIN;
volatile int8_t x33 = 1;
volatile int8_t x36 = INT8_MIN;
static int32_t x64 = -240304738;
static int32_t x87 = INT32_MIN;
static volatile int8_t x88 = INT8_MIN;
static uint8_t x103 = 2U;
uint64_t x105 = 1640698275950LLU;
int16_t x119 = 6;
static int16_t x134 = INT16_MAX;
int16_t x135 = 0;
int64_t t10 = -10392570164LL;
int32_t t13 = -5;
uint64_t x171 = UINT64_MAX;
uint64_t x172 = UINT64_MAX;
int16_t x191 = 1;
volatile uint32_t t16 = 404233564U;
volatile int16_t x205 = INT16_MIN;
static int32_t x208 = -41;
volatile int32_t t18 = -7311;
uint8_t x236 = 0U;
static volatile uint8_t x238 = 1U;
int8_t x251 = -56;
int16_t x252 = -1;
int32_t x255 = -1;
int64_t x263 = -1LL;
uint8_t x268 = 55U;
int16_t x275 = INT16_MAX;
volatile uint32_t x278 = 319265U;
static uint64_t x279 = UINT64_MAX;
uint64_t x326 = 114751LLU;
int32_t t34 = 5;
int32_t x369 = -306779;
volatile uint64_t t36 = 16648509651LLU;
int32_t t40 = 37477980;
int8_t x394 = 1;
static uint32_t x395 = 120073308U;
volatile int64_t t45 = -2LL;
uint64_t x434 = 2782839585285LLU;
static volatile uint16_t x435 = UINT16_MAX;
volatile uint64_t t46 = 1603LLU;
int16_t x449 = -1;
int64_t x485 = INT64_MIN;
int32_t x486 = INT32_MAX;
volatile int64_t t51 = -16815LL;
static int32_t t54 = 471;
int8_t x501 = INT8_MIN;
int64_t x503 = -1LL;
uint16_t x505 = UINT16_MAX;
uint32_t x508 = UINT32_MAX;
int32_t t57 = -149;
int64_t x518 = INT64_MAX;
int32_t x521 = 147;
uint8_t x524 = 1U;
volatile int32_t x535 = INT32_MAX;
uint16_t x540 = 1770U;
int32_t t63 = 21128;
uint64_t x554 = UINT64_MAX;
int64_t x555 = INT64_MIN;
static uint32_t x556 = 181789611U;
volatile uint16_t x603 = 20527U;
int64_t x607 = INT64_MIN;
volatile int64_t x608 = -1LL;
volatile uint16_t x656 = 0U;
static volatile uint32_t x671 = 6014U;
volatile uint64_t x702 = UINT64_MAX;
volatile uint64_t t77 = 4289457420223LLU;
volatile uint64_t t78 = 3147LLU;
int8_t x722 = INT8_MAX;
uint8_t x724 = 72U;
uint32_t t80 = 134057749U;
volatile uint16_t x740 = 69U;
volatile int32_t t81 = -164820462;
static int8_t x742 = 1;
int32_t x743 = -64899176;
int32_t x760 = INT32_MIN;
volatile uint64_t t85 = 1420833006918148903LLU;
uint8_t x777 = 2U;
uint8_t x782 = 62U;
uint64_t x799 = 313478854210013LLU;
int32_t x800 = 1268;
int8_t x810 = 1;
int16_t x818 = INT16_MAX;
int64_t x831 = INT64_MIN;
static int64_t t94 = 701LL;
uint64_t x849 = 404918LLU;
int16_t x861 = INT16_MIN;
uint32_t x882 = 20987488U;
int8_t x904 = 2;
int32_t t100 = 66940784;
uint16_t x914 = UINT16_MAX;
static volatile int16_t x916 = -5;
int8_t x918 = 2;
static int32_t x933 = -80183;
int8_t x946 = 0;
volatile int16_t x949 = -392;
static volatile int32_t x950 = INT32_MAX;
int32_t t106 = 14247;
uint64_t x973 = UINT64_MAX;
static volatile uint64_t t110 = 10155060LLU;
volatile uint32_t t111 = 2382U;
static volatile uint32_t x1018 = UINT32_MAX;
uint64_t x1030 = 6153331LLU;
static volatile uint64_t t115 = 15183858LLU;
int8_t x1033 = INT8_MIN;
uint64_t x1034 = UINT64_MAX;
uint8_t x1036 = 7U;
int16_t x1059 = INT16_MAX;
volatile int16_t x1067 = -1;
uint64_t t121 = 10741LLU;
uint64_t x1069 = 8LLU;
static volatile int16_t x1070 = INT16_MAX;
static int16_t x1071 = INT16_MAX;
static int32_t x1072 = INT32_MIN;
static volatile uint64_t t122 = 253326909828997958LLU;
int8_t x1095 = -1;
static int64_t x1096 = INT64_MIN;
uint64_t x1097 = UINT64_MAX;
volatile int32_t t128 = 5372;
volatile uint32_t x1143 = 107315320U;
static volatile uint32_t t133 = 43897367U;
int16_t x1173 = 21;
static volatile uint64_t x1174 = UINT64_MAX;
int16_t x1176 = INT16_MAX;
volatile uint16_t x1181 = UINT16_MAX;
volatile uint16_t x1191 = 27621U;
uint16_t x1193 = UINT16_MAX;
volatile int32_t t141 = -23;
volatile uint8_t x1241 = UINT8_MAX;
int8_t x1243 = INT8_MIN;
static volatile int32_t t145 = 74565;
int64_t x1253 = -15249512LL;
volatile uint64_t t147 = 27886LLU;
volatile uint64_t t148 = 412422519993321LLU;
volatile int32_t x1286 = INT32_MAX;
int16_t x1289 = -1;
static uint8_t x1290 = 27U;
volatile int32_t x1291 = -1;
int8_t x1308 = INT8_MAX;
uint64_t t153 = 247839942944LLU;
int8_t x1317 = 5;
uint8_t x1320 = UINT8_MAX;
uint64_t x1326 = 1086554190014811LLU;
int8_t x1348 = INT8_MIN;
volatile int64_t x1366 = 911378626LL;
int8_t x1384 = INT8_MIN;
int16_t x1435 = 46;
volatile uint64_t t167 = 808295550798315LLU;
static int16_t x1482 = 8863;
uint16_t x1483 = 2489U;
static int32_t t169 = -21;
uint64_t t170 = 2955032476402LLU;
static int16_t x1501 = 0;
uint8_t x1502 = 8U;
volatile int32_t t172 = 310;
static uint32_t x1505 = UINT32_MAX;
int32_t x1507 = INT32_MAX;
static int16_t x1521 = -6;
uint32_t x1538 = 1785115034U;
int8_t x1546 = 16;
volatile uint8_t x1547 = 1U;
volatile int32_t t179 = 1543;
int32_t x1550 = 656157875;
volatile int8_t x1562 = 0;
volatile uint16_t x1585 = UINT16_MAX;
volatile int32_t x1589 = -1;
static int64_t x1592 = INT64_MAX;
static int64_t x1596 = -44817079LL;
uint64_t x1598 = 2572LLU;
int16_t x1599 = 1260;
uint64_t t188 = 402599578682344LLU;
uint32_t x1621 = 2411026U;
int64_t x1631 = -1LL;
volatile int16_t x1638 = 8;
static int16_t x1665 = INT16_MAX;
static int32_t t195 = -728457878;
static int32_t x1682 = 414;
static int32_t t198 = 199577321;
uint16_t x1694 = 5118U;
int64_t t199 = -1947LL;


void f0(void) {
    	int64_t x2 = 2544425162479LL;
	uint16_t x3 = 246U;
	uint32_t x4 = 302826757U;
	int64_t t0 = -3LL;

    t0 = (x1+(x2<<(x3<=x4)));

    if (t0 != 5088850324967LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = 50;
	uint64_t x10 = UINT64_MAX;
	volatile int64_t x12 = INT64_MIN;
	static uint64_t t1 = 1LLU;

    t1 = (x9+(x10<<(x11<=x12)));

    if (t1 != 49LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x17 = 743144807737LL;
	int8_t x18 = 1;
	volatile uint32_t x19 = 4094595U;
	int64_t t2 = 48280025895LL;

    t2 = (x17+(x18<<(x19<=x20)));

    if (t2 != 743144807739LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x25 = -1;
	int32_t x26 = INT32_MAX;
	int8_t x27 = INT8_MIN;
	int64_t x28 = INT64_MIN;
	volatile int32_t t3 = -1374609;

    t3 = (x25+(x26<<(x27<=x28)));

    if (t3 != 2147483646) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x34 = 16035U;
	uint64_t x35 = UINT64_MAX;
	int32_t t4 = -1;

    t4 = (x33+(x34<<(x35<=x36)));

    if (t4 != 16036) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x61 = 1357225865491565192LLU;
	static volatile uint32_t x62 = UINT32_MAX;
	uint8_t x63 = 6U;
	volatile uint64_t t5 = 444998524186LLU;

    t5 = (x61+(x62<<(x63<=x64)));

    if (t5 != 1357225869786532487LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x85 = 245729U;
	uint16_t x86 = 1617U;
	uint32_t t6 = 1073066301U;

    t6 = (x85+(x86<<(x87<=x88)));

    if (t6 != 248963U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x101 = UINT8_MAX;
	int64_t x102 = 2LL;
	int32_t x104 = INT32_MIN;
	volatile int64_t t7 = 489360LL;

    t7 = (x101+(x102<<(x103<=x104)));

    if (t7 != 257LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x106 = 1102731LLU;
	int32_t x107 = INT32_MAX;
	static int16_t x108 = INT16_MIN;
	uint64_t t8 = 452LLU;

    t8 = (x105+(x106<<(x107<=x108)));

    if (t8 != 1640699378681LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x117 = -1;
	uint8_t x118 = 11U;
	int8_t x120 = INT8_MIN;
	int32_t t9 = -1;

    t9 = (x117+(x118<<(x119<=x120)));

    if (t9 != 10) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x133 = INT64_MIN;
	int32_t x136 = INT32_MAX;

    t10 = (x133+(x134<<(x135<=x136)));

    if (t10 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x137 = 252401LLU;
	volatile uint64_t x138 = 3123156918014227LLU;
	static int8_t x139 = 0;
	int64_t x140 = -505923053624926623LL;
	static uint64_t t11 = 18509452961LLU;

    t11 = (x137+(x138<<(x139<=x140)));

    if (t11 != 3123156918266628LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x153 = INT64_MIN;
	int64_t x154 = 12599176077590725LL;
	static volatile uint64_t x155 = 6278088529LLU;
	int8_t x156 = INT8_MAX;
	static volatile int64_t t12 = 164LL;

    t12 = (x153+(x154<<(x155<=x156)));

    if (t12 != -9210772860777185083LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x157 = UINT16_MAX;
	volatile uint8_t x158 = 72U;
	static int64_t x159 = -369LL;
	volatile int32_t x160 = -1444743;

    t13 = (x157+(x158<<(x159<=x160)));

    if (t13 != 65607) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x169 = -1;
	static int8_t x170 = 1;
	static int32_t t14 = 30;

    t14 = (x169+(x170<<(x171<=x172)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x181 = UINT64_MAX;
	volatile uint16_t x182 = UINT16_MAX;
	int8_t x183 = INT8_MAX;
	int32_t x184 = INT32_MIN;
	uint64_t t15 = 29883975LLU;

    t15 = (x181+(x182<<(x183<=x184)));

    if (t15 != 65534LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x189 = UINT32_MAX;
	int8_t x190 = 3;
	uint8_t x192 = 53U;

    t16 = (x189+(x190<<(x191<=x192)));

    if (t16 != 5U) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x206 = 94810624446882239LL;
	int16_t x207 = 1;
	volatile int64_t t17 = 1LL;

    t17 = (x205+(x206<<(x207<=x208)));

    if (t17 != 94810624446849471LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x221 = -1;
	static volatile uint8_t x222 = UINT8_MAX;
	static uint64_t x223 = 3940357523174LLU;
	int64_t x224 = -33452662155660LL;

    t18 = (x221+(x222<<(x223<=x224)));

    if (t18 != 509) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x233 = -1;
	int16_t x234 = 125;
	static int8_t x235 = INT8_MAX;
	static volatile int32_t t19 = -20;

    t19 = (x233+(x234<<(x235<=x236)));

    if (t19 != 124) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x237 = INT64_MIN;
	int16_t x239 = 304;
	int32_t x240 = -7943;
	volatile int64_t t20 = 4LL;

    t20 = (x237+(x238<<(x239<=x240)));

    if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x241 = UINT32_MAX;
	uint8_t x242 = UINT8_MAX;
	uint8_t x243 = 9U;
	static int16_t x244 = INT16_MIN;
	uint32_t t21 = 376605086U;

    t21 = (x241+(x242<<(x243<=x244)));

    if (t21 != 254U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x249 = 3;
	int8_t x250 = 4;
	int32_t t22 = 39755;

    t22 = (x249+(x250<<(x251<=x252)));

    if (t22 != 11) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x253 = INT16_MAX;
	int8_t x254 = INT8_MAX;
	int32_t x256 = -190547062;
	volatile int32_t t23 = 65015264;

    t23 = (x253+(x254<<(x255<=x256)));

    if (t23 != 32894) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x257 = -1;
	int8_t x258 = INT8_MAX;
	volatile int32_t x259 = INT32_MAX;
	int8_t x260 = 1;
	static int32_t t24 = 35995;

    t24 = (x257+(x258<<(x259<=x260)));

    if (t24 != 126) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x261 = 1U;
	static int8_t x262 = INT8_MAX;
	int8_t x264 = -1;
	static volatile int32_t t25 = 11486800;

    t25 = (x261+(x262<<(x263<=x264)));

    if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x265 = INT32_MIN;
	uint16_t x266 = 42U;
	int16_t x267 = -1;
	static volatile int32_t t26 = 815535;

    t26 = (x265+(x266<<(x267<=x268)));

    if (t26 != -2147483564) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x269 = -1;
	int16_t x270 = 516;
	static int64_t x271 = -1LL;
	int8_t x272 = -16;
	int32_t t27 = -41817;

    t27 = (x269+(x270<<(x271<=x272)));

    if (t27 != 515) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x273 = 143;
	int16_t x274 = 16168;
	static int8_t x276 = -1;
	static int32_t t28 = 17076745;

    t28 = (x273+(x274<<(x275<=x276)));

    if (t28 != 16311) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint16_t x277 = 2844U;
	static int64_t x280 = -1LL;
	volatile uint32_t t29 = 6112U;

    t29 = (x277+(x278<<(x279<=x280)));

    if (t29 != 641374U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x313 = INT32_MAX;
	int64_t x314 = 7325999269028898LL;
	int32_t x315 = -4089;
	uint8_t x316 = 12U;
	volatile int64_t t30 = -2565LL;

    t30 = (x313+(x314<<(x315<=x316)));

    if (t30 != 14652000685541443LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x321 = 3U;
	int32_t x322 = 1008;
	int16_t x323 = -15;
	static int64_t x324 = INT64_MAX;
	volatile int32_t t31 = 1;

    t31 = (x321+(x322<<(x323<=x324)));

    if (t31 != 2019) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x325 = INT64_MIN;
	uint32_t x327 = UINT32_MAX;
	int64_t x328 = INT64_MIN;
	static volatile uint64_t t32 = 3776642LLU;

    t32 = (x325+(x326<<(x327<=x328)));

    if (t32 != 9223372036854890559LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x329 = -1;
	int64_t x330 = INT64_MAX;
	static uint32_t x331 = UINT32_MAX;
	int8_t x332 = INT8_MIN;
	volatile int64_t t33 = 7LL;

    t33 = (x329+(x330<<(x331<=x332)));

    if (t33 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x349 = 2U;
	uint8_t x350 = 1U;
	uint64_t x351 = UINT64_MAX;
	static int8_t x352 = INT8_MAX;

    t34 = (x349+(x350<<(x351<=x352)));

    if (t34 != 3) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x353 = -1LL;
	static uint16_t x354 = 5450U;
	int32_t x355 = -5544170;
	uint32_t x356 = 77699820U;
	static int64_t t35 = -200280777562027LL;

    t35 = (x353+(x354<<(x355<=x356)));

    if (t35 != 5449LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x370 = UINT64_MAX;
	static volatile int64_t x371 = 93759448807956346LL;
	int8_t x372 = INT8_MIN;

    t36 = (x369+(x370<<(x371<=x372)));

    if (t36 != 18446744073709244836LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x373 = INT32_MIN;
	static uint64_t x374 = 3442889023465899870LLU;
	int32_t x375 = -1869;
	int32_t x376 = INT32_MIN;
	volatile uint64_t t37 = 18554LLU;

    t37 = (x373+(x374<<(x375<=x376)));

    if (t37 != 3442889021318416222LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x377 = INT8_MAX;
	uint32_t x378 = 103610U;
	volatile int64_t x379 = -1LL;
	uint32_t x380 = 854194461U;
	uint32_t t38 = 472932724U;

    t38 = (x377+(x378<<(x379<=x380)));

    if (t38 != 207347U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x385 = 11298498993LLU;
	volatile uint64_t x386 = 27865746893160LLU;
	int32_t x387 = -16427;
	int32_t x388 = 3107;
	uint64_t t39 = 24941694503LLU;

    t39 = (x385+(x386<<(x387<=x388)));

    if (t39 != 55742792285313LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x389 = 108U;
	int16_t x390 = 2;
	int16_t x391 = -2824;
	int16_t x392 = 0;

    t40 = (x389+(x390<<(x391<=x392)));

    if (t40 != 112) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x393 = 151278647U;
	int64_t x396 = -1LL;
	volatile uint32_t t41 = 0U;

    t41 = (x393+(x394<<(x395<=x396)));

    if (t41 != 151278648U) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint64_t x401 = 9765135LLU;
	volatile int64_t x402 = 2LL;
	int32_t x403 = -17200;
	uint32_t x404 = 913222U;
	static uint64_t t42 = 36355132218183LLU;

    t42 = (x401+(x402<<(x403<=x404)));

    if (t42 != 9765137LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x405 = INT64_MIN;
	volatile int64_t x406 = 2307271275LL;
	int16_t x407 = INT16_MIN;
	int8_t x408 = INT8_MIN;
	static volatile int64_t t43 = 10LL;

    t43 = (x405+(x406<<(x407<=x408)));

    if (t43 != -9223372032240233258LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x421 = 1019112U;
	uint32_t x422 = 11702U;
	uint64_t x423 = 8128573LLU;
	volatile int64_t x424 = INT64_MIN;
	uint32_t t44 = 52729U;

    t44 = (x421+(x422<<(x423<=x424)));

    if (t44 != 1042516U) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x425 = -1;
	volatile int64_t x426 = INT64_MAX;
	int8_t x427 = -1;
	uint32_t x428 = 1215884U;

    t45 = (x425+(x426<<(x427<=x428)));

    if (t45 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x433 = INT16_MIN;
	int32_t x436 = INT32_MAX;

    t46 = (x433+(x434<<(x435<=x436)));

    if (t46 != 5565679137802LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x445 = INT16_MAX;
	static int8_t x446 = INT8_MAX;
	uint8_t x447 = UINT8_MAX;
	static int8_t x448 = -1;
	volatile int32_t t47 = -70758808;

    t47 = (x445+(x446<<(x447<=x448)));

    if (t47 != 32894) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x450 = 7U;
	volatile int16_t x451 = -45;
	uint64_t x452 = 36771415787771LLU;
	volatile uint32_t t48 = 47343U;

    t48 = (x449+(x450<<(x451<=x452)));

    if (t48 != 6U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x453 = 65734337U;
	uint16_t x454 = UINT16_MAX;
	uint8_t x455 = 2U;
	volatile int16_t x456 = INT16_MIN;
	uint32_t t49 = 1972005U;

    t49 = (x453+(x454<<(x455<=x456)));

    if (t49 != 65799872U) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x457 = INT16_MIN;
	static volatile uint8_t x458 = 2U;
	int8_t x459 = INT8_MIN;
	volatile uint32_t x460 = UINT32_MAX;
	static int32_t t50 = -7670687;

    t50 = (x457+(x458<<(x459<=x460)));

    if (t50 != -32764) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x487 = UINT16_MAX;
	int16_t x488 = -1;

    t51 = (x485+(x486<<(x487<=x488)));

    if (t51 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x489 = 8361087U;
	static volatile uint64_t x490 = UINT64_MAX;
	uint64_t x491 = UINT64_MAX;
	uint64_t x492 = 2LLU;
	volatile uint64_t t52 = 2418137671936817LLU;

    t52 = (x489+(x490<<(x491<=x492)));

    if (t52 != 8361086LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x493 = INT16_MIN;
	static int64_t x494 = 56712LL;
	uint32_t x495 = 1U;
	volatile uint64_t x496 = 11LLU;
	int64_t t53 = -341242LL;

    t53 = (x493+(x494<<(x495<=x496)));

    if (t53 != 80656LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x497 = INT8_MIN;
	int8_t x498 = 11;
	uint32_t x499 = UINT32_MAX;
	volatile int64_t x500 = 51573258278964LL;

    t54 = (x497+(x498<<(x499<=x500)));

    if (t54 != -106) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x502 = 6836;
	volatile int32_t x504 = -1;
	volatile int32_t t55 = -1067604422;

    t55 = (x501+(x502<<(x503<=x504)));

    if (t55 != 13544) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x506 = UINT64_MAX;
	uint8_t x507 = 9U;
	volatile uint64_t t56 = 1810LLU;

    t56 = (x505+(x506<<(x507<=x508)));

    if (t56 != 65533LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x509 = INT8_MAX;
	uint8_t x510 = 1U;
	int16_t x511 = INT16_MIN;
	uint8_t x512 = 54U;

    t57 = (x509+(x510<<(x511<=x512)));

    if (t57 != 129) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x513 = UINT64_MAX;
	uint32_t x514 = UINT32_MAX;
	int8_t x515 = -8;
	static uint32_t x516 = UINT32_MAX;
	uint64_t t58 = 25418LLU;

    t58 = (x513+(x514<<(x515<=x516)));

    if (t58 != 4294967293LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x517 = INT8_MIN;
	int64_t x519 = 210696427644LL;
	uint32_t x520 = 16U;
	static volatile int64_t t59 = -10384794LL;

    t59 = (x517+(x518<<(x519<=x520)));

    if (t59 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x522 = 33285979637775LLU;
	static int64_t x523 = INT64_MIN;
	static uint64_t t60 = 76437642080LLU;

    t60 = (x521+(x522<<(x523<=x524)));

    if (t60 != 66571959275697LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x529 = INT32_MIN;
	int32_t x530 = 1;
	volatile int64_t x531 = 1103844726LL;
	static volatile int64_t x532 = -1LL;
	static int32_t t61 = -32329;

    t61 = (x529+(x530<<(x531<=x532)));

    if (t61 != -2147483647) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x533 = -1LL;
	static uint8_t x534 = 1U;
	static uint8_t x536 = 20U;
	int64_t t62 = -60469790527204LL;

    t62 = (x533+(x534<<(x535<=x536)));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x537 = 17;
	int16_t x538 = INT16_MAX;
	static int8_t x539 = INT8_MIN;

    t63 = (x537+(x538<<(x539<=x540)));

    if (t63 != 65551) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x553 = 14U;
	volatile uint64_t t64 = 5470130036417730542LLU;

    t64 = (x553+(x554<<(x555<=x556)));

    if (t64 != 12LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x557 = -257;
	volatile uint16_t x558 = 1U;
	volatile uint16_t x559 = 1U;
	uint16_t x560 = 0U;
	int32_t t65 = -15722;

    t65 = (x557+(x558<<(x559<=x560)));

    if (t65 != -256) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x565 = -36;
	uint64_t x566 = 205976138333997LLU;
	uint32_t x567 = 443618U;
	volatile int32_t x568 = -1;
	static uint64_t t66 = 1417LLU;

    t66 = (x565+(x566<<(x567<=x568)));

    if (t66 != 411952276667958LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x593 = 45U;
	static int32_t x594 = 221109;
	uint8_t x595 = 1U;
	volatile uint64_t x596 = UINT64_MAX;
	static int32_t t67 = -4298;

    t67 = (x593+(x594<<(x595<=x596)));

    if (t67 != 442263) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x601 = 1160104LL;
	static uint16_t x602 = UINT16_MAX;
	static int64_t x604 = INT64_MIN;
	int64_t t68 = -20LL;

    t68 = (x601+(x602<<(x603<=x604)));

    if (t68 != 1225639LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x605 = INT64_MIN;
	volatile uint8_t x606 = 1U;
	volatile int64_t t69 = 427386144822951LL;

    t69 = (x605+(x606<<(x607<=x608)));

    if (t69 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x625 = 25347669831396LLU;
	uint64_t x626 = UINT64_MAX;
	volatile uint16_t x627 = 248U;
	uint16_t x628 = 10U;
	volatile uint64_t t70 = 242434752830454LLU;

    t70 = (x625+(x626<<(x627<=x628)));

    if (t70 != 25347669831395LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x641 = INT32_MIN;
	int32_t x642 = 692626160;
	int16_t x643 = -3;
	int32_t x644 = INT32_MIN;
	static volatile int32_t t71 = 7;

    t71 = (x641+(x642<<(x643<=x644)));

    if (t71 != -1454857488) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x653 = INT8_MIN;
	uint64_t x654 = UINT64_MAX;
	uint32_t x655 = 10532U;
	static volatile uint64_t t72 = 13405162363013LLU;

    t72 = (x653+(x654<<(x655<=x656)));

    if (t72 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x661 = 125U;
	int64_t x662 = 53596745LL;
	uint64_t x663 = 11007926LLU;
	volatile int8_t x664 = -2;
	int64_t t73 = -434554801LL;

    t73 = (x661+(x662<<(x663<=x664)));

    if (t73 != 107193615LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x669 = 4092274LLU;
	uint64_t x670 = 8031906195619LLU;
	int64_t x672 = -3688693996279LL;
	uint64_t t74 = 94275061LLU;

    t74 = (x669+(x670<<(x671<=x672)));

    if (t74 != 8031910287893LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x677 = -1;
	int8_t x678 = 3;
	volatile int32_t x679 = INT32_MAX;
	uint8_t x680 = 18U;
	volatile int32_t t75 = -22554834;

    t75 = (x677+(x678<<(x679<=x680)));

    if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint16_t x681 = 875U;
	volatile int16_t x682 = INT16_MAX;
	int64_t x683 = INT64_MAX;
	int16_t x684 = INT16_MAX;
	int32_t t76 = 17911873;

    t76 = (x681+(x682<<(x683<=x684)));

    if (t76 != 33642) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x701 = INT32_MIN;
	uint8_t x703 = UINT8_MAX;
	uint32_t x704 = UINT32_MAX;

    t77 = (x701+(x702<<(x703<=x704)));

    if (t77 != 18446744071562067966LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x709 = UINT32_MAX;
	uint64_t x710 = UINT64_MAX;
	int8_t x711 = INT8_MIN;
	uint64_t x712 = 44944840668LLU;

    t78 = (x709+(x710<<(x711<=x712)));

    if (t78 != 4294967294LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x721 = 3388863LL;
	int8_t x723 = INT8_MIN;
	volatile int64_t t79 = 11034267436999LL;

    t79 = (x721+(x722<<(x723<=x724)));

    if (t79 != 3389117LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x729 = 635383056U;
	int16_t x730 = 0;
	int16_t x731 = INT16_MIN;
	static int16_t x732 = INT16_MIN;

    t80 = (x729+(x730<<(x731<=x732)));

    if (t80 != 635383056U) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x737 = 31U;
	int8_t x738 = 1;
	int64_t x739 = INT64_MAX;

    t81 = (x737+(x738<<(x739<=x740)));

    if (t81 != 32) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint8_t x741 = 5U;
	uint16_t x744 = 47U;
	volatile int32_t t82 = 129180;

    t82 = (x741+(x742<<(x743<=x744)));

    if (t82 != 7) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x757 = -1950573466241376476LL;
	int8_t x758 = 5;
	static int8_t x759 = INT8_MIN;
	volatile int64_t t83 = 43556LL;

    t83 = (x757+(x758<<(x759<=x760)));

    if (t83 != -1950573466241376471LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x765 = UINT32_MAX;
	uint16_t x766 = 253U;
	int16_t x767 = -6;
	uint64_t x768 = UINT64_MAX;
	volatile uint32_t t84 = 1014882023U;

    t84 = (x765+(x766<<(x767<=x768)));

    if (t84 != 505U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x769 = 0;
	static uint64_t x770 = 12412112750284225LLU;
	volatile int16_t x771 = INT16_MIN;
	int64_t x772 = INT64_MAX;

    t85 = (x769+(x770<<(x771<=x772)));

    if (t85 != 24824225500568450LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x778 = UINT8_MAX;
	static uint64_t x779 = UINT64_MAX;
	int8_t x780 = INT8_MIN;
	volatile int32_t t86 = -16233308;

    t86 = (x777+(x778<<(x779<=x780)));

    if (t86 != 257) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x781 = 687415964LLU;
	static volatile int16_t x783 = -1;
	int16_t x784 = INT16_MAX;
	volatile uint64_t t87 = 1351LLU;

    t87 = (x781+(x782<<(x783<=x784)));

    if (t87 != 687416088LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x797 = INT64_MAX;
	volatile uint64_t x798 = 111918718714562LLU;
	uint64_t t88 = 9507106LLU;

    t88 = (x797+(x798<<(x799<=x800)));

    if (t88 != 9223483955573490369LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x809 = INT64_MIN;
	uint32_t x811 = UINT32_MAX;
	int8_t x812 = INT8_MIN;
	int64_t t89 = 287995948816LL;

    t89 = (x809+(x810<<(x811<=x812)));

    if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x813 = UINT8_MAX;
	uint64_t x814 = UINT64_MAX;
	uint8_t x815 = UINT8_MAX;
	int32_t x816 = INT32_MIN;
	volatile uint64_t t90 = 342801426124757168LLU;

    t90 = (x813+(x814<<(x815<=x816)));

    if (t90 != 254LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int64_t x817 = INT64_MIN;
	int32_t x819 = INT32_MIN;
	int16_t x820 = INT16_MIN;
	volatile int64_t t91 = 1993LL;

    t91 = (x817+(x818<<(x819<=x820)));

    if (t91 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x821 = -817;
	volatile int8_t x822 = 1;
	uint32_t x823 = 6138U;
	uint64_t x824 = 3453825899859890562LLU;
	int32_t t92 = -3136;

    t92 = (x821+(x822<<(x823<=x824)));

    if (t92 != -815) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x829 = 3226U;
	volatile int64_t x830 = 28LL;
	uint32_t x832 = 4109559U;
	volatile int64_t t93 = 297LL;

    t93 = (x829+(x830<<(x831<=x832)));

    if (t93 != 3282LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x841 = INT64_MIN;
	uint32_t x842 = 15U;
	int8_t x843 = INT8_MIN;
	int32_t x844 = INT32_MIN;

    t94 = (x841+(x842<<(x843<=x844)));

    if (t94 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x850 = 10371386U;
	volatile int32_t x851 = INT32_MIN;
	static int16_t x852 = INT16_MIN;
	static volatile uint64_t t95 = 30628141258652LLU;

    t95 = (x849+(x850<<(x851<=x852)));

    if (t95 != 21147690LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x862 = 0U;
	static int32_t x863 = -9046;
	static volatile uint32_t x864 = 16U;
	volatile int32_t t96 = 67096945;

    t96 = (x861+(x862<<(x863<=x864)));

    if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x881 = -1LL;
	int64_t x883 = 15875LL;
	volatile uint8_t x884 = 20U;
	int64_t t97 = -58057044242LL;

    t97 = (x881+(x882<<(x883<=x884)));

    if (t97 != 20987487LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x885 = -1;
	static int8_t x886 = INT8_MAX;
	uint16_t x887 = 720U;
	int32_t x888 = -82880;
	int32_t t98 = 214;

    t98 = (x885+(x886<<(x887<=x888)));

    if (t98 != 126) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int8_t x893 = 0;
	int16_t x894 = 231;
	volatile uint8_t x895 = 3U;
	int8_t x896 = INT8_MIN;
	volatile int32_t t99 = -32327512;

    t99 = (x893+(x894<<(x895<=x896)));

    if (t99 != 231) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x901 = UINT8_MAX;
	uint16_t x902 = 1579U;
	int16_t x903 = INT16_MIN;

    t100 = (x901+(x902<<(x903<=x904)));

    if (t100 != 3413) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x913 = -1;
	uint16_t x915 = 6U;
	volatile int32_t t101 = -114450;

    t101 = (x913+(x914<<(x915<=x916)));

    if (t101 != 65534) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x917 = 5;
	volatile uint32_t x919 = 29482U;
	volatile int64_t x920 = -62578426961LL;
	int32_t t102 = 13985;

    t102 = (x917+(x918<<(x919<=x920)));

    if (t102 != 7) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x921 = 5797566258LL;
	uint32_t x922 = UINT32_MAX;
	int64_t x923 = -26373005756058LL;
	uint64_t x924 = UINT64_MAX;
	static int64_t t103 = -1235163187420LL;

    t103 = (x921+(x922<<(x923<=x924)));

    if (t103 != 10092533552LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x934 = 42975U;
	uint16_t x935 = 0U;
	uint16_t x936 = 3U;
	uint32_t t104 = 10131U;

    t104 = (x933+(x934<<(x935<=x936)));

    if (t104 != 5767U) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x945 = -403325877;
	int8_t x947 = INT8_MIN;
	int64_t x948 = INT64_MAX;
	static volatile int32_t t105 = 7860229;

    t105 = (x945+(x946<<(x947<=x948)));

    if (t105 != -403325877) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x951 = INT64_MAX;
	static int16_t x952 = INT16_MAX;

    t106 = (x949+(x950<<(x951<=x952)));

    if (t106 != 2147483255) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x953 = -150;
	int16_t x954 = 14;
	int32_t x955 = -30;
	int16_t x956 = -1;
	int32_t t107 = -5752;

    t107 = (x953+(x954<<(x955<=x956)));

    if (t107 != -122) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x961 = -1208LL;
	volatile uint32_t x962 = 396623U;
	uint32_t x963 = 32U;
	uint8_t x964 = 30U;
	static int64_t t108 = 3100074LL;

    t108 = (x961+(x962<<(x963<=x964)));

    if (t108 != 395415LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x969 = 1;
	static int16_t x970 = INT16_MAX;
	static volatile int16_t x971 = INT16_MIN;
	static uint32_t x972 = 138U;
	int32_t t109 = -12116174;

    t109 = (x969+(x970<<(x971<=x972)));

    if (t109 != 32768) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x974 = 94398279LL;
	int16_t x975 = -3;
	static int64_t x976 = INT64_MIN;

    t110 = (x973+(x974<<(x975<=x976)));

    if (t110 != 94398278LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x977 = 1390;
	uint32_t x978 = 1038527U;
	static int16_t x979 = -3;
	uint32_t x980 = UINT32_MAX;

    t111 = (x977+(x978<<(x979<=x980)));

    if (t111 != 2078444U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x981 = UINT64_MAX;
	static uint64_t x982 = UINT64_MAX;
	int8_t x983 = INT8_MAX;
	volatile int64_t x984 = INT64_MIN;
	static uint64_t t112 = 3432553069792LLU;

    t112 = (x981+(x982<<(x983<=x984)));

    if (t112 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x989 = 22U;
	uint8_t x990 = 0U;
	int64_t x991 = -35993123417873093LL;
	uint16_t x992 = UINT16_MAX;
	volatile int32_t t113 = -103581681;

    t113 = (x989+(x990<<(x991<=x992)));

    if (t113 != 22) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x1017 = -73943718706LL;
	uint16_t x1019 = 11U;
	int32_t x1020 = 1;
	int64_t t114 = 847LL;

    t114 = (x1017+(x1018<<(x1019<=x1020)));

    if (t114 != -69648751411LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x1029 = 125U;
	static int64_t x1031 = INT64_MIN;
	static int64_t x1032 = INT64_MAX;

    t115 = (x1029+(x1030<<(x1031<=x1032)));

    if (t115 != 12306787LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x1035 = INT64_MIN;
	volatile uint64_t t116 = 31875643726949528LLU;

    t116 = (x1033+(x1034<<(x1035<=x1036)));

    if (t116 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x1037 = -61;
	int8_t x1038 = 0;
	int8_t x1039 = 38;
	volatile int32_t x1040 = -1;
	int32_t t117 = -21707;

    t117 = (x1037+(x1038<<(x1039<=x1040)));

    if (t117 != -61) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x1041 = 220;
	static int8_t x1042 = INT8_MAX;
	volatile int32_t x1043 = -9;
	int16_t x1044 = -1;
	volatile int32_t t118 = -497339;

    t118 = (x1041+(x1042<<(x1043<=x1044)));

    if (t118 != 474) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x1053 = INT64_MIN;
	static uint16_t x1054 = 31U;
	uint32_t x1055 = UINT32_MAX;
	static uint8_t x1056 = 2U;
	int64_t t119 = -47LL;

    t119 = (x1053+(x1054<<(x1055<=x1056)));

    if (t119 != -9223372036854775777LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x1057 = 3;
	uint32_t x1058 = 23U;
	int16_t x1060 = -1;
	volatile uint32_t t120 = 15173301U;

    t120 = (x1057+(x1058<<(x1059<=x1060)));

    if (t120 != 26U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x1065 = 1797591723LLU;
	volatile int64_t x1066 = 6039LL;
	static int32_t x1068 = -1;

    t121 = (x1065+(x1066<<(x1067<=x1068)));

    if (t121 != 1797603801LLU) { NG(); } else { ; }
	
}

void f122(void) {
    

    t122 = (x1069+(x1070<<(x1071<=x1072)));

    if (t122 != 32775LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x1073 = INT32_MIN;
	static uint32_t x1074 = UINT32_MAX;
	int8_t x1075 = 1;
	uint32_t x1076 = 3U;
	uint32_t t123 = 14699901U;

    t123 = (x1073+(x1074<<(x1075<=x1076)));

    if (t123 != 2147483646U) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x1081 = INT64_MIN;
	uint8_t x1082 = 0U;
	int64_t x1083 = INT64_MIN;
	static int16_t x1084 = -1;
	volatile int64_t t124 = INT64_MIN;

    t124 = (x1081+(x1082<<(x1083<=x1084)));

    if (t124 != INT64_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x1093 = -1;
	int64_t x1094 = 15857LL;
	int64_t t125 = -24021LL;

    t125 = (x1093+(x1094<<(x1095<=x1096)));

    if (t125 != 15856LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x1098 = 389744646242562512LL;
	int32_t x1099 = -1;
	int8_t x1100 = INT8_MIN;
	volatile uint64_t t126 = 29778LLU;

    t126 = (x1097+(x1098<<(x1099<=x1100)));

    if (t126 != 389744646242562511LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x1113 = INT16_MIN;
	uint16_t x1114 = UINT16_MAX;
	static int8_t x1115 = INT8_MIN;
	int64_t x1116 = INT64_MIN;
	volatile int32_t t127 = -39499;

    t127 = (x1113+(x1114<<(x1115<=x1116)));

    if (t127 != 32767) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x1129 = INT32_MIN;
	volatile uint8_t x1130 = UINT8_MAX;
	int32_t x1131 = INT32_MIN;
	uint32_t x1132 = 37008U;

    t128 = (x1129+(x1130<<(x1131<=x1132)));

    if (t128 != -2147483393) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x1141 = -24;
	int32_t x1142 = INT32_MAX;
	static int64_t x1144 = -5079896632LL;
	volatile int32_t t129 = 227957;

    t129 = (x1141+(x1142<<(x1143<=x1144)));

    if (t129 != 2147483623) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x1145 = 27;
	uint32_t x1146 = UINT32_MAX;
	int32_t x1147 = INT32_MAX;
	static int16_t x1148 = -1;
	volatile uint32_t t130 = 428319U;

    t130 = (x1145+(x1146<<(x1147<=x1148)));

    if (t130 != 26U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x1153 = 1248U;
	uint16_t x1154 = 2U;
	uint64_t x1155 = UINT64_MAX;
	int64_t x1156 = 3205350LL;
	static volatile uint32_t t131 = 9633U;

    t131 = (x1153+(x1154<<(x1155<=x1156)));

    if (t131 != 1250U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x1157 = 1U;
	uint8_t x1158 = 0U;
	uint32_t x1159 = 0U;
	volatile int16_t x1160 = INT16_MIN;
	volatile int32_t t132 = -241;

    t132 = (x1157+(x1158<<(x1159<=x1160)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x1161 = -1;
	uint32_t x1162 = UINT32_MAX;
	int8_t x1163 = -1;
	int64_t x1164 = INT64_MAX;

    t133 = (x1161+(x1162<<(x1163<=x1164)));

    if (t133 != 4294967293U) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x1175 = -33855760229LL;
	uint64_t t134 = 108LLU;

    t134 = (x1173+(x1174<<(x1175<=x1176)));

    if (t134 != 19LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x1182 = 0U;
	int64_t x1183 = INT64_MAX;
	int64_t x1184 = INT64_MAX;
	int32_t t135 = -12;

    t135 = (x1181+(x1182<<(x1183<=x1184)));

    if (t135 != 65535) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x1185 = -1LL;
	static volatile uint64_t x1186 = 23714102104181LLU;
	int8_t x1187 = -3;
	int16_t x1188 = INT16_MIN;
	static volatile uint64_t t136 = 1LLU;

    t136 = (x1185+(x1186<<(x1187<=x1188)));

    if (t136 != 23714102104180LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x1189 = INT8_MIN;
	uint16_t x1190 = 11130U;
	uint16_t x1192 = 7529U;
	volatile int32_t t137 = -406;

    t137 = (x1189+(x1190<<(x1191<=x1192)));

    if (t137 != 11002) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x1194 = 75U;
	static int16_t x1195 = -13;
	uint64_t x1196 = 50965986716264LLU;
	volatile int32_t t138 = -22733;

    t138 = (x1193+(x1194<<(x1195<=x1196)));

    if (t138 != 65610) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x1197 = 0U;
	uint16_t x1198 = UINT16_MAX;
	int8_t x1199 = INT8_MIN;
	uint16_t x1200 = UINT16_MAX;
	volatile int32_t t139 = 66029232;

    t139 = (x1197+(x1198<<(x1199<=x1200)));

    if (t139 != 131070) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x1205 = -7133;
	uint64_t x1206 = UINT64_MAX;
	uint32_t x1207 = 16184U;
	static int8_t x1208 = 0;
	volatile uint64_t t140 = 1576840599758LLU;

    t140 = (x1205+(x1206<<(x1207<=x1208)));

    if (t140 != 18446744073709544482LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x1213 = 0U;
	uint16_t x1214 = UINT16_MAX;
	static volatile int16_t x1215 = -3873;
	int64_t x1216 = INT64_MAX;

    t141 = (x1213+(x1214<<(x1215<=x1216)));

    if (t141 != 131070) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x1225 = -4;
	uint8_t x1226 = 37U;
	volatile int64_t x1227 = -1LL;
	static uint16_t x1228 = UINT16_MAX;
	static int32_t t142 = -1437;

    t142 = (x1225+(x1226<<(x1227<=x1228)));

    if (t142 != 70) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x1229 = 37991;
	int64_t x1230 = 5696850LL;
	volatile uint32_t x1231 = 158976962U;
	int16_t x1232 = 2;
	int64_t t143 = -34619371491961628LL;

    t143 = (x1229+(x1230<<(x1231<=x1232)));

    if (t143 != 5734841LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x1237 = 2961U;
	uint32_t x1238 = UINT32_MAX;
	static int8_t x1239 = -1;
	int32_t x1240 = 1;
	static uint32_t t144 = 426U;

    t144 = (x1237+(x1238<<(x1239<=x1240)));

    if (t144 != 2959U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x1242 = UINT16_MAX;
	int8_t x1244 = -1;

    t145 = (x1241+(x1242<<(x1243<=x1244)));

    if (t145 != 131325) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x1249 = 772342LL;
	uint16_t x1250 = UINT16_MAX;
	int64_t x1251 = INT64_MIN;
	int64_t x1252 = -8272345LL;
	volatile int64_t t146 = 0LL;

    t146 = (x1249+(x1250<<(x1251<=x1252)));

    if (t146 != 903412LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x1254 = 56355163LLU;
	volatile int16_t x1255 = -2;
	uint8_t x1256 = 1U;

    t147 = (x1253+(x1254<<(x1255<=x1256)));

    if (t147 != 97460814LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x1257 = UINT64_MAX;
	static uint32_t x1258 = 57U;
	static int8_t x1259 = 1;
	int32_t x1260 = INT32_MIN;

    t148 = (x1257+(x1258<<(x1259<=x1260)));

    if (t148 != 56LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x1285 = INT32_MIN;
	uint16_t x1287 = 293U;
	uint64_t x1288 = 47LLU;
	volatile int32_t t149 = 289;

    t149 = (x1285+(x1286<<(x1287<=x1288)));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x1292 = -1;
	static int32_t t150 = 27328849;

    t150 = (x1289+(x1290<<(x1291<=x1292)));

    if (t150 != 53) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x1305 = 12LLU;
	static int16_t x1306 = 248;
	volatile int32_t x1307 = INT32_MIN;
	uint64_t t151 = 102LLU;

    t151 = (x1305+(x1306<<(x1307<=x1308)));

    if (t151 != 508LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x1309 = 3661506U;
	volatile uint64_t x1310 = 84LLU;
	uint8_t x1311 = UINT8_MAX;
	int32_t x1312 = -1;
	static volatile uint64_t t152 = 1813753106LLU;

    t152 = (x1309+(x1310<<(x1311<=x1312)));

    if (t152 != 3661590LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x1313 = -16730;
	volatile uint64_t x1314 = UINT64_MAX;
	int64_t x1315 = INT64_MAX;
	static volatile int32_t x1316 = 1676698;

    t153 = (x1313+(x1314<<(x1315<=x1316)));

    if (t153 != 18446744073709534885LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x1318 = 44U;
	uint64_t x1319 = 991576LLU;
	int32_t t154 = -6688421;

    t154 = (x1317+(x1318<<(x1319<=x1320)));

    if (t154 != 49) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x1325 = 1LLU;
	int32_t x1327 = -1;
	static int32_t x1328 = -1;
	static volatile uint64_t t155 = 1082464291LLU;

    t155 = (x1325+(x1326<<(x1327<=x1328)));

    if (t155 != 2173108380029623LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1333 = UINT16_MAX;
	static uint8_t x1334 = 8U;
	int64_t x1335 = -57535984916349318LL;
	int64_t x1336 = 0LL;
	static int32_t t156 = 1;

    t156 = (x1333+(x1334<<(x1335<=x1336)));

    if (t156 != 65551) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1337 = -1;
	volatile uint64_t x1338 = 341LLU;
	int64_t x1339 = -69LL;
	int32_t x1340 = 83759;
	uint64_t t157 = 2234138844002287LLU;

    t157 = (x1337+(x1338<<(x1339<=x1340)));

    if (t157 != 681LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1345 = INT64_MIN;
	uint8_t x1346 = 15U;
	volatile int64_t x1347 = 39601007LL;
	volatile int64_t t158 = 586487966837231LL;

    t158 = (x1345+(x1346<<(x1347<=x1348)));

    if (t158 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x1365 = -1609;
	volatile int64_t x1367 = INT64_MIN;
	int8_t x1368 = INT8_MAX;
	int64_t t159 = -835546888507LL;

    t159 = (x1365+(x1366<<(x1367<=x1368)));

    if (t159 != 1822755643LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1381 = INT16_MAX;
	int16_t x1382 = INT16_MAX;
	int8_t x1383 = INT8_MAX;
	int32_t t160 = 3800665;

    t160 = (x1381+(x1382<<(x1383<=x1384)));

    if (t160 != 65534) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x1393 = -3;
	int8_t x1394 = INT8_MAX;
	int8_t x1395 = -1;
	uint8_t x1396 = UINT8_MAX;
	volatile int32_t t161 = -105;

    t161 = (x1393+(x1394<<(x1395<=x1396)));

    if (t161 != 251) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x1397 = 650922025;
	int8_t x1398 = 1;
	static int16_t x1399 = 2;
	volatile int8_t x1400 = INT8_MIN;
	int32_t t162 = 1891844;

    t162 = (x1397+(x1398<<(x1399<=x1400)));

    if (t162 != 650922026) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1401 = -1;
	static volatile uint32_t x1402 = 65190U;
	int8_t x1403 = -1;
	int64_t x1404 = INT64_MAX;
	uint32_t t163 = 0U;

    t163 = (x1401+(x1402<<(x1403<=x1404)));

    if (t163 != 130379U) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x1409 = UINT16_MAX;
	int16_t x1410 = 441;
	int32_t x1411 = INT32_MIN;
	int16_t x1412 = -29;
	int32_t t164 = -6622;

    t164 = (x1409+(x1410<<(x1411<=x1412)));

    if (t164 != 66417) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x1425 = INT16_MAX;
	uint8_t x1426 = 8U;
	volatile int16_t x1427 = 5;
	static int8_t x1428 = 20;
	int32_t t165 = -30575;

    t165 = (x1425+(x1426<<(x1427<=x1428)));

    if (t165 != 32783) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x1429 = INT32_MAX;
	uint64_t x1430 = UINT64_MAX;
	int64_t x1431 = -10828319LL;
	uint16_t x1432 = 2U;
	static uint64_t t166 = 56757028001702LLU;

    t166 = (x1429+(x1430<<(x1431<=x1432)));

    if (t166 != 2147483645LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x1433 = 26LLU;
	int8_t x1434 = INT8_MAX;
	int16_t x1436 = INT16_MIN;

    t167 = (x1433+(x1434<<(x1435<=x1436)));

    if (t167 != 153LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1465 = INT64_MIN;
	uint16_t x1466 = UINT16_MAX;
	int64_t x1467 = INT64_MAX;
	uint16_t x1468 = 12902U;
	int64_t t168 = -6861540714173LL;

    t168 = (x1465+(x1466<<(x1467<=x1468)));

    if (t168 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x1481 = 0U;
	uint32_t x1484 = 769841203U;

    t169 = (x1481+(x1482<<(x1483<=x1484)));

    if (t169 != 17726) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x1489 = -10;
	static uint64_t x1490 = 29868LLU;
	static int64_t x1491 = INT64_MAX;
	int8_t x1492 = -1;

    t170 = (x1489+(x1490<<(x1491<=x1492)));

    if (t170 != 29858LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1497 = 0;
	static uint16_t x1498 = 984U;
	int16_t x1499 = -1;
	int16_t x1500 = 1;
	volatile int32_t t171 = 16416596;

    t171 = (x1497+(x1498<<(x1499<=x1500)));

    if (t171 != 1968) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1503 = INT64_MIN;
	int16_t x1504 = INT16_MIN;

    t172 = (x1501+(x1502<<(x1503<=x1504)));

    if (t172 != 16) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1506 = INT32_MAX;
	volatile uint16_t x1508 = 118U;
	uint32_t t173 = 1145227008U;

    t173 = (x1505+(x1506<<(x1507<=x1508)));

    if (t173 != 2147483646U) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x1509 = UINT8_MAX;
	static int16_t x1510 = INT16_MAX;
	static int8_t x1511 = 52;
	int64_t x1512 = INT64_MIN;
	int32_t t174 = 87;

    t174 = (x1509+(x1510<<(x1511<=x1512)));

    if (t174 != 33022) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1513 = 42;
	volatile int8_t x1514 = INT8_MAX;
	int8_t x1515 = -1;
	uint8_t x1516 = 6U;
	static volatile int32_t t175 = 7621576;

    t175 = (x1513+(x1514<<(x1515<=x1516)));

    if (t175 != 296) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x1522 = 1622345356088971LLU;
	volatile int64_t x1523 = INT64_MIN;
	volatile int64_t x1524 = INT64_MIN;
	uint64_t t176 = 80812546239299LLU;

    t176 = (x1521+(x1522<<(x1523<=x1524)));

    if (t176 != 3244690712177936LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1525 = 5;
	static int16_t x1526 = INT16_MAX;
	uint16_t x1527 = 13U;
	uint8_t x1528 = 39U;
	int32_t t177 = 1154730;

    t177 = (x1525+(x1526<<(x1527<=x1528)));

    if (t177 != 65539) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1537 = INT64_MIN;
	uint32_t x1539 = 15555U;
	uint32_t x1540 = 2U;
	int64_t t178 = -14655817727157LL;

    t178 = (x1537+(x1538<<(x1539<=x1540)));

    if (t178 != -9223372035069660774LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1545 = INT32_MIN;
	int8_t x1548 = 6;

    t179 = (x1545+(x1546<<(x1547<=x1548)));

    if (t179 != -2147483616) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1549 = -3;
	uint16_t x1551 = 13U;
	int64_t x1552 = -1421954730LL;
	volatile int32_t t180 = 167783956;

    t180 = (x1549+(x1550<<(x1551<=x1552)));

    if (t180 != 656157872) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int32_t x1561 = -1;
	int8_t x1563 = -1;
	int64_t x1564 = INT64_MAX;
	volatile int32_t t181 = 32793162;

    t181 = (x1561+(x1562<<(x1563<=x1564)));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1565 = -1;
	uint32_t x1566 = UINT32_MAX;
	int8_t x1567 = INT8_MAX;
	uint8_t x1568 = 14U;
	volatile uint32_t t182 = 38U;

    t182 = (x1565+(x1566<<(x1567<=x1568)));

    if (t182 != 4294967294U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1569 = UINT64_MAX;
	static volatile int8_t x1570 = 29;
	volatile int64_t x1571 = INT64_MAX;
	int8_t x1572 = 0;
	volatile uint64_t t183 = 306753683102LLU;

    t183 = (x1569+(x1570<<(x1571<=x1572)));

    if (t183 != 28LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x1577 = INT64_MIN;
	uint8_t x1578 = 105U;
	int16_t x1579 = INT16_MIN;
	int64_t x1580 = -1LL;
	int64_t t184 = 30LL;

    t184 = (x1577+(x1578<<(x1579<=x1580)));

    if (t184 != -9223372036854775598LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1586 = INT8_MAX;
	uint64_t x1587 = 104350852887LLU;
	static uint16_t x1588 = 125U;
	volatile int32_t t185 = -1548496;

    t185 = (x1585+(x1586<<(x1587<=x1588)));

    if (t185 != 65662) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x1590 = 818U;
	uint16_t x1591 = 2267U;
	volatile uint32_t t186 = 783U;

    t186 = (x1589+(x1590<<(x1591<=x1592)));

    if (t186 != 1635U) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1593 = INT16_MIN;
	uint16_t x1594 = UINT16_MAX;
	uint8_t x1595 = UINT8_MAX;
	static int32_t t187 = -174;

    t187 = (x1593+(x1594<<(x1595<=x1596)));

    if (t187 != 32767) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1597 = -1;
	int8_t x1600 = INT8_MAX;

    t188 = (x1597+(x1598<<(x1599<=x1600)));

    if (t188 != 2571LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x1601 = INT32_MAX;
	uint64_t x1602 = 124405LLU;
	int64_t x1603 = INT64_MAX;
	int16_t x1604 = -1;
	uint64_t t189 = 11965637690LLU;

    t189 = (x1601+(x1602<<(x1603<=x1604)));

    if (t189 != 2147608052LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1622 = 2534;
	uint32_t x1623 = 26680U;
	static volatile int8_t x1624 = -1;
	volatile uint32_t t190 = 74845129U;

    t190 = (x1621+(x1622<<(x1623<=x1624)));

    if (t190 != 2416094U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1629 = 3694U;
	static int8_t x1630 = 1;
	static volatile uint16_t x1632 = 3U;
	static volatile uint32_t t191 = 5U;

    t191 = (x1629+(x1630<<(x1631<=x1632)));

    if (t191 != 3696U) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1637 = 1887435389127LL;
	volatile uint64_t x1639 = UINT64_MAX;
	uint32_t x1640 = 14521U;
	volatile int64_t t192 = -49116626276482297LL;

    t192 = (x1637+(x1638<<(x1639<=x1640)));

    if (t192 != 1887435389135LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1649 = INT8_MAX;
	uint8_t x1650 = 0U;
	int32_t x1651 = -759984;
	int16_t x1652 = -1;
	volatile int32_t t193 = 27178;

    t193 = (x1649+(x1650<<(x1651<=x1652)));

    if (t193 != 127) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x1661 = INT64_MIN;
	uint64_t x1662 = 15328084046252LLU;
	int64_t x1663 = -1LL;
	int16_t x1664 = -1;
	uint64_t t194 = 215673756LLU;

    t194 = (x1661+(x1662<<(x1663<=x1664)));

    if (t194 != 9223402693022868312LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int16_t x1666 = 10;
	int64_t x1667 = -2563940LL;
	static int64_t x1668 = -1LL;

    t195 = (x1665+(x1666<<(x1667<=x1668)));

    if (t195 != 32787) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x1669 = 500U;
	static uint32_t x1670 = 235U;
	volatile uint64_t x1671 = 722216586506LLU;
	static uint8_t x1672 = 10U;
	volatile uint32_t t196 = 1948527U;

    t196 = (x1669+(x1670<<(x1671<=x1672)));

    if (t196 != 735U) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x1681 = INT64_MIN;
	int32_t x1683 = INT32_MIN;
	volatile uint8_t x1684 = 52U;
	volatile int64_t t197 = 6824333832860LL;

    t197 = (x1681+(x1682<<(x1683<=x1684)));

    if (t197 != -9223372036854774980LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x1685 = -1;
	int16_t x1686 = 584;
	static volatile int8_t x1687 = INT8_MIN;
	int16_t x1688 = INT16_MAX;

    t198 = (x1685+(x1686<<(x1687<=x1688)));

    if (t198 != 1167) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1693 = -1LL;
	int64_t x1695 = INT64_MIN;
	int64_t x1696 = INT64_MIN;

    t199 = (x1693+(x1694<<(x1695<=x1696)));

    if (t199 != 10235LL) { NG(); } else { ; }
	
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


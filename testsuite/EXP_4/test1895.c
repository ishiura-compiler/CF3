
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

static uint32_t x5 = UINT32_MAX;
volatile uint8_t x8 = 0U;
volatile int16_t x15 = 1;
static int32_t t1 = 515842404;
static volatile int64_t x31 = INT64_MAX;
static uint64_t x40 = UINT64_MAX;
int16_t x50 = -1860;
int32_t t6 = 748503543;
int16_t x82 = INT16_MIN;
static int32_t x84 = -6;
static uint64_t x89 = 33649724570LLU;
volatile uint32_t t13 = 807176U;
int8_t x132 = INT8_MIN;
int16_t x174 = -1;
volatile int8_t x181 = INT8_MIN;
int64_t x218 = INT64_MIN;
static int32_t x219 = INT32_MAX;
static volatile uint8_t x223 = 12U;
int8_t x242 = -1;
int8_t x255 = -1;
int64_t x256 = -2323711414LL;
volatile int64_t t28 = 1680LL;
static uint64_t x268 = 7LLU;
int64_t x282 = -1LL;
volatile uint8_t x310 = 1U;
int8_t x311 = -1;
int32_t t34 = 163;
volatile int64_t x343 = 122936606616LL;
static int16_t x347 = 0;
volatile int32_t t38 = 1038159155;
int8_t x353 = 0;
static uint64_t x355 = UINT64_MAX;
volatile int32_t t39 = 1013944663;
int8_t x357 = -1;
int16_t x358 = -1;
volatile int32_t x368 = INT32_MAX;
static volatile int32_t t42 = 821158355;
int16_t x379 = INT16_MAX;
volatile int32_t t44 = 12;
int32_t x419 = 544;
int8_t x421 = INT8_MIN;
int32_t x427 = INT32_MIN;
int8_t x434 = -14;
int8_t x446 = 0;
int32_t x447 = INT32_MIN;
int16_t x450 = -24;
volatile int16_t x466 = -762;
int32_t x467 = INT32_MAX;
static uint8_t x472 = 0U;
int64_t x478 = INT64_MIN;
uint32_t t56 = 12883U;
int8_t x517 = INT8_MIN;
int32_t x518 = -1;
static volatile int8_t x534 = -3;
static int32_t t61 = 3737308;
volatile int8_t x547 = INT8_MIN;
volatile uint32_t t62 = 7953U;
int64_t x558 = -1LL;
int32_t x560 = INT32_MAX;
static int32_t t63 = 124334;
uint64_t x561 = UINT64_MAX;
volatile uint64_t t64 = 507LLU;
int32_t x570 = -228;
volatile int16_t x571 = 7079;
volatile uint16_t x577 = 12234U;
volatile int16_t x582 = INT16_MIN;
volatile int32_t x602 = -35193;
int16_t x627 = 1;
volatile int16_t x637 = INT16_MIN;
uint32_t x639 = UINT32_MAX;
int32_t x640 = INT32_MAX;
volatile int64_t x643 = 587626871778592423LL;
int32_t x644 = 19403;
static volatile int32_t t75 = -878;
int32_t x650 = INT32_MIN;
uint16_t x655 = 6173U;
static volatile uint64_t t77 = 63340022926LLU;
uint16_t x659 = 5407U;
int64_t x665 = -1LL;
int16_t x676 = INT16_MAX;
int8_t x696 = 1;
volatile int32_t x701 = -570;
volatile int64_t t84 = -3389375697157LL;
int16_t x738 = -1;
volatile int8_t x750 = INT8_MIN;
int32_t t87 = 1;
uint16_t x761 = 20U;
volatile int8_t x763 = 4;
int32_t t89 = 126;
int16_t x791 = INT16_MIN;
int32_t x796 = 144400061;
int8_t x818 = INT8_MIN;
static volatile uint64_t x820 = UINT64_MAX;
int16_t x821 = INT16_MAX;
int16_t x823 = -29;
int32_t x842 = INT32_MIN;
int16_t x866 = -120;
int32_t x869 = -1;
static int64_t x875 = -1226282445722731967LL;
int16_t x877 = 15136;
static int64_t t102 = -41620847865LL;
uint64_t x892 = UINT64_MAX;
volatile int32_t t104 = -5462721;
int32_t x913 = INT32_MIN;
int8_t x914 = -15;
int32_t t106 = -578;
int32_t x917 = -1;
uint16_t x919 = 490U;
int32_t t107 = 181538;
volatile int16_t x934 = INT16_MIN;
int64_t x939 = INT64_MIN;
uint64_t x950 = 0LLU;
static uint32_t x953 = 184U;
uint64_t x971 = UINT64_MAX;
int16_t x975 = INT16_MIN;
int32_t x979 = INT32_MAX;
static int64_t t115 = 4156LL;
uint64_t x988 = 537307469367LLU;
int32_t x994 = -2333760;
int64_t x997 = 1036258722506LL;
int16_t x1000 = -1;
int64_t x1021 = -1LL;
uint32_t t125 = 36U;
int16_t x1059 = INT16_MAX;
volatile int32_t t126 = 254944;
int8_t x1069 = -3;
int8_t x1077 = -37;
volatile int32_t t128 = -15462;
int16_t x1082 = -195;
int32_t t129 = -86374;
int32_t t130 = 107783;
uint16_t x1095 = 157U;
static uint32_t x1103 = 3959321U;
static uint8_t x1127 = UINT8_MAX;
int32_t x1130 = -1;
static int16_t x1133 = INT16_MIN;
volatile int8_t x1149 = 4;
volatile int32_t x1151 = INT32_MIN;
uint32_t x1152 = UINT32_MAX;
static int8_t x1160 = INT8_MAX;
static uint8_t x1172 = 8U;
volatile int64_t x1187 = INT64_MIN;
int16_t x1193 = INT16_MAX;
static uint32_t x1201 = 0U;
int8_t x1204 = 44;
uint8_t x1224 = UINT8_MAX;
int64_t x1227 = INT64_MAX;
volatile int64_t t148 = -1739438618LL;
int32_t x1231 = -2549;
static volatile int32_t t150 = 438887;
static uint16_t x1277 = UINT16_MAX;
int32_t x1278 = -12607;
volatile int32_t x1281 = INT32_MAX;
volatile int32_t t152 = 29;
uint8_t x1297 = UINT8_MAX;
int32_t x1300 = -1;
uint8_t x1301 = UINT8_MAX;
static uint64_t x1303 = 3804062105LLU;
int16_t x1313 = INT16_MIN;
int32_t t157 = 221693;
volatile uint16_t x1344 = 112U;
int8_t x1353 = INT8_MIN;
volatile int32_t t161 = -23;
int16_t x1363 = -1;
int64_t x1364 = INT64_MAX;
static int64_t t163 = -9382098662364873LL;
int8_t x1370 = -1;
volatile uint32_t x1387 = 110558U;
int32_t t166 = 3;
int32_t x1423 = -1;
int8_t x1426 = INT8_MIN;
static uint64_t x1427 = 345328372227593LLU;
int32_t t172 = -6;
int8_t x1457 = INT8_MIN;
int32_t x1458 = -54797245;
volatile int32_t t173 = -15;
int32_t t174 = 1524886;
volatile uint32_t x1467 = 2473800U;
volatile int32_t x1468 = -1;
int64_t x1470 = INT64_MIN;
static int16_t x1473 = -1;
uint32_t x1475 = 91U;
volatile int32_t t177 = -7;
static int64_t x1484 = -243200620963251LL;
int8_t x1494 = 1;
uint8_t x1499 = 88U;
static uint64_t x1508 = 32756LLU;
int64_t x1519 = 1LL;
uint64_t x1523 = 169005LLU;
int16_t x1542 = INT16_MIN;
int16_t x1543 = INT16_MIN;
int32_t x1553 = -1;
int64_t x1554 = INT64_MIN;
static int16_t x1569 = -1;
uint64_t x1584 = 56259515573209LLU;
uint32_t t193 = 11796U;
int32_t t194 = 32;
int16_t x1609 = 3;
static int32_t x1611 = 12;
int8_t x1625 = 15;
int64_t x1626 = INT64_MIN;
int8_t x1630 = -1;
uint8_t x1637 = UINT8_MAX;
int8_t x1638 = -1;
uint32_t x1639 = UINT32_MAX;
int32_t x1640 = INT32_MIN;
volatile int32_t t198 = -175;
int32_t t199 = -431;


void f0(void) {
    	volatile int16_t x6 = INT16_MIN;
	int32_t x7 = -6931055;
	uint32_t t0 = 2925U;

    t0 = (x5%(x6<=(x7<=x8)));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x13 = INT8_MIN;
	int32_t x14 = -185630;
	volatile uint64_t x16 = UINT64_MAX;

    t1 = (x13%(x14<=(x15<=x16)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x25 = 12700607417825966LLU;
	int16_t x26 = -2;
	int8_t x27 = -1;
	int8_t x28 = INT8_MIN;
	volatile uint64_t t2 = 20796565LLU;

    t2 = (x25%(x26<=(x27<=x28)));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x29 = -1;
	int8_t x30 = -1;
	static volatile uint64_t x32 = 677LLU;
	static volatile int32_t t3 = -856332;

    t3 = (x29%(x30<=(x31<=x32)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x37 = INT16_MIN;
	int8_t x38 = -2;
	int8_t x39 = INT8_MAX;
	volatile int32_t t4 = -172928928;

    t4 = (x37%(x38<=(x39<=x40)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x45 = 1768U;
	volatile int32_t x46 = -3;
	volatile int16_t x47 = INT16_MAX;
	int64_t x48 = INT64_MIN;
	uint32_t t5 = 207806748U;

    t5 = (x45%(x46<=(x47<=x48)));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x49 = 7929U;
	int8_t x51 = INT8_MIN;
	uint8_t x52 = 11U;

    t6 = (x49%(x50<=(x51<=x52)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x61 = 3725097790699980959LLU;
	int8_t x62 = INT8_MIN;
	int8_t x63 = INT8_MIN;
	uint32_t x64 = 67017629U;
	uint64_t t7 = 1596395524847655172LLU;

    t7 = (x61%(x62<=(x63<=x64)));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x77 = 3;
	int16_t x78 = -27;
	static int16_t x79 = -1;
	int8_t x80 = -1;
	volatile int32_t t8 = 2;

    t8 = (x77%(x78<=(x79<=x80)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x81 = INT8_MIN;
	int32_t x83 = INT32_MIN;
	volatile int32_t t9 = 207707;

    t9 = (x81%(x82<=(x83<=x84)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x90 = INT16_MIN;
	int32_t x91 = INT32_MAX;
	int16_t x92 = INT16_MIN;
	volatile uint64_t t10 = 14825004325379LLU;

    t10 = (x89%(x90<=(x91<=x92)));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x105 = UINT8_MAX;
	int16_t x106 = -1;
	static int64_t x107 = INT64_MIN;
	uint32_t x108 = UINT32_MAX;
	int32_t t11 = 10634367;

    t11 = (x105%(x106<=(x107<=x108)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x121 = -1;
	static int32_t x122 = INT32_MIN;
	int8_t x123 = -48;
	uint8_t x124 = 98U;
	int32_t t12 = -297;

    t12 = (x121%(x122<=(x123<=x124)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x125 = UINT32_MAX;
	int8_t x126 = INT8_MIN;
	static int8_t x127 = INT8_MIN;
	int8_t x128 = -1;

    t13 = (x125%(x126<=(x127<=x128)));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x129 = 15332293U;
	int16_t x130 = INT16_MIN;
	uint32_t x131 = 2240U;
	volatile uint32_t t14 = 105535U;

    t14 = (x129%(x130<=(x131<=x132)));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x145 = 10U;
	volatile int8_t x146 = -1;
	static uint16_t x147 = 5U;
	int8_t x148 = INT8_MIN;
	static volatile int32_t t15 = 478;

    t15 = (x145%(x146<=(x147<=x148)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x149 = -99;
	int64_t x150 = INT64_MIN;
	int8_t x151 = INT8_MAX;
	uint64_t x152 = 285086LLU;
	volatile int32_t t16 = -106038;

    t16 = (x149%(x150<=(x151<=x152)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x157 = INT16_MIN;
	static int32_t x158 = -243999652;
	static volatile int32_t x159 = -4126650;
	uint16_t x160 = 138U;
	int32_t t17 = -15769;

    t17 = (x157%(x158<=(x159<=x160)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x169 = -3;
	int16_t x170 = INT16_MIN;
	volatile int64_t x171 = -6LL;
	int8_t x172 = 1;
	volatile int32_t t18 = 214019261;

    t18 = (x169%(x170<=(x171<=x172)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x173 = 60U;
	uint32_t x175 = 12U;
	volatile int32_t x176 = INT32_MIN;
	uint32_t t19 = 88U;

    t19 = (x173%(x174<=(x175<=x176)));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x177 = 5;
	int32_t x178 = -1;
	int64_t x179 = INT64_MAX;
	uint32_t x180 = 4528U;
	volatile int32_t t20 = -1;

    t20 = (x177%(x178<=(x179<=x180)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x182 = -2;
	uint8_t x183 = UINT8_MAX;
	volatile int8_t x184 = INT8_MIN;
	int32_t t21 = 847901;

    t21 = (x181%(x182<=(x183<=x184)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x201 = INT64_MIN;
	int8_t x202 = INT8_MIN;
	int16_t x203 = 1684;
	int8_t x204 = INT8_MIN;
	int64_t t22 = -14801LL;

    t22 = (x201%(x202<=(x203<=x204)));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int8_t x205 = -1;
	int64_t x206 = -1LL;
	int32_t x207 = 12889646;
	int64_t x208 = INT64_MIN;
	int32_t t23 = 152;

    t23 = (x205%(x206<=(x207<=x208)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x217 = -1;
	uint32_t x220 = UINT32_MAX;
	volatile int32_t t24 = -689314;

    t24 = (x217%(x218<=(x219<=x220)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x221 = INT8_MIN;
	volatile int8_t x222 = -2;
	int32_t x224 = INT32_MAX;
	volatile int32_t t25 = -7;

    t25 = (x221%(x222<=(x223<=x224)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x225 = 3;
	int64_t x226 = INT64_MIN;
	volatile int8_t x227 = 2;
	static volatile uint16_t x228 = 967U;
	int32_t t26 = -2403;

    t26 = (x225%(x226<=(x227<=x228)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x241 = 30;
	volatile uint32_t x243 = 1482045698U;
	int16_t x244 = -246;
	volatile int32_t t27 = -81928578;

    t27 = (x241%(x242<=(x243<=x244)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x253 = -1LL;
	int32_t x254 = INT32_MIN;

    t28 = (x253%(x254<=(x255<=x256)));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x265 = -1LL;
	int32_t x266 = INT32_MIN;
	int8_t x267 = INT8_MAX;
	volatile int64_t t29 = 403797LL;

    t29 = (x265%(x266<=(x267<=x268)));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x273 = 22;
	volatile int8_t x274 = 1;
	int64_t x275 = -62586238LL;
	volatile uint16_t x276 = 569U;
	int32_t t30 = 180125;

    t30 = (x273%(x274<=(x275<=x276)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x281 = -1;
	uint64_t x283 = UINT64_MAX;
	int8_t x284 = -1;
	volatile int32_t t31 = 18104774;

    t31 = (x281%(x282<=(x283<=x284)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x285 = 1U;
	int16_t x286 = INT16_MIN;
	uint32_t x287 = 411911U;
	volatile int8_t x288 = INT8_MIN;
	volatile int32_t t32 = -46021;

    t32 = (x285%(x286<=(x287<=x288)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x289 = 958616725840LLU;
	uint16_t x290 = 0U;
	static int32_t x291 = INT32_MAX;
	int64_t x292 = -93LL;
	static uint64_t t33 = 24381944058257LLU;

    t33 = (x289%(x290<=(x291<=x292)));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x309 = -1;
	int16_t x312 = -1;

    t34 = (x309%(x310<=(x311<=x312)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x321 = INT8_MIN;
	int8_t x322 = INT8_MIN;
	uint16_t x323 = 1U;
	int8_t x324 = INT8_MIN;
	int32_t t35 = -3;

    t35 = (x321%(x322<=(x323<=x324)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x337 = UINT8_MAX;
	int16_t x338 = INT16_MIN;
	static int32_t x339 = -1;
	static volatile uint16_t x340 = 5854U;
	volatile int32_t t36 = 4;

    t36 = (x337%(x338<=(x339<=x340)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x341 = -1;
	static int16_t x342 = -1;
	int64_t x344 = INT64_MIN;
	volatile int32_t t37 = 37647561;

    t37 = (x341%(x342<=(x343<=x344)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x345 = INT16_MIN;
	volatile int64_t x346 = INT64_MIN;
	int8_t x348 = 39;

    t38 = (x345%(x346<=(x347<=x348)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x354 = INT32_MIN;
	uint16_t x356 = 10869U;

    t39 = (x353%(x354<=(x355<=x356)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x359 = 144;
	uint8_t x360 = UINT8_MAX;
	int32_t t40 = -1632;

    t40 = (x357%(x358<=(x359<=x360)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x365 = INT8_MIN;
	int16_t x366 = -1;
	static uint16_t x367 = UINT16_MAX;
	volatile int32_t t41 = -222067907;

    t41 = (x365%(x366<=(x367<=x368)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x369 = -36;
	volatile int8_t x370 = -1;
	static int32_t x371 = INT32_MIN;
	volatile uint8_t x372 = 0U;

    t42 = (x369%(x370<=(x371<=x372)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x377 = INT8_MAX;
	int32_t x378 = INT32_MIN;
	int32_t x380 = 1;
	static int32_t t43 = 25464;

    t43 = (x377%(x378<=(x379<=x380)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x405 = INT16_MIN;
	int32_t x406 = INT32_MIN;
	static uint32_t x407 = 1635U;
	int32_t x408 = -1;

    t44 = (x405%(x406<=(x407<=x408)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x417 = INT32_MIN;
	int8_t x418 = INT8_MIN;
	uint32_t x420 = UINT32_MAX;
	int32_t t45 = 1;

    t45 = (x417%(x418<=(x419<=x420)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x422 = INT16_MIN;
	uint8_t x423 = 1U;
	uint16_t x424 = UINT16_MAX;
	int32_t t46 = 2;

    t46 = (x421%(x422<=(x423<=x424)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x425 = INT32_MIN;
	int32_t x426 = -1;
	int16_t x428 = INT16_MAX;
	volatile int32_t t47 = -2788504;

    t47 = (x425%(x426<=(x427<=x428)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x433 = 0;
	uint8_t x435 = UINT8_MAX;
	int8_t x436 = -1;
	int32_t t48 = 52;

    t48 = (x433%(x434<=(x435<=x436)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x445 = INT16_MAX;
	int32_t x448 = INT32_MIN;
	static int32_t t49 = 7782;

    t49 = (x445%(x446<=(x447<=x448)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x449 = 14;
	static volatile int8_t x451 = INT8_MAX;
	int8_t x452 = 1;
	volatile int32_t t50 = -227214626;

    t50 = (x449%(x450<=(x451<=x452)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x457 = INT32_MAX;
	volatile int64_t x458 = -1LL;
	static volatile uint64_t x459 = UINT64_MAX;
	volatile uint32_t x460 = 565968986U;
	int32_t t51 = 508254578;

    t51 = (x457%(x458<=(x459<=x460)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x465 = -1;
	uint8_t x468 = 27U;
	int32_t t52 = -8515;

    t52 = (x465%(x466<=(x467<=x468)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x469 = -1;
	int64_t x470 = -1LL;
	int32_t x471 = INT32_MIN;
	static volatile int32_t t53 = 117490702;

    t53 = (x469%(x470<=(x471<=x472)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x477 = 11058U;
	uint8_t x479 = 8U;
	static int32_t x480 = -1;
	int32_t t54 = -31;

    t54 = (x477%(x478<=(x479<=x480)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x505 = INT64_MIN;
	volatile int64_t x506 = -1LL;
	int64_t x507 = 3318LL;
	static volatile int64_t x508 = INT64_MIN;
	volatile int64_t t55 = 511410617587459357LL;

    t55 = (x505%(x506<=(x507<=x508)));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x509 = UINT32_MAX;
	int32_t x510 = INT32_MIN;
	int16_t x511 = INT16_MAX;
	uint16_t x512 = UINT16_MAX;

    t56 = (x509%(x510<=(x511<=x512)));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x513 = INT16_MIN;
	int8_t x514 = -51;
	int16_t x515 = 339;
	int16_t x516 = INT16_MIN;
	static volatile int32_t t57 = 1;

    t57 = (x513%(x514<=(x515<=x516)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x519 = INT32_MAX;
	static int32_t x520 = INT32_MIN;
	volatile int32_t t58 = -1039;

    t58 = (x517%(x518<=(x519<=x520)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x521 = INT8_MIN;
	static int32_t x522 = -1;
	volatile int8_t x523 = INT8_MIN;
	volatile int64_t x524 = 2036682LL;
	volatile int32_t t59 = 60636363;

    t59 = (x521%(x522<=(x523<=x524)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x533 = UINT32_MAX;
	static uint32_t x535 = 2820227U;
	uint64_t x536 = UINT64_MAX;
	uint32_t t60 = 35U;

    t60 = (x533%(x534<=(x535<=x536)));

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x541 = UINT16_MAX;
	volatile int8_t x542 = -1;
	int32_t x543 = INT32_MIN;
	static int16_t x544 = INT16_MIN;

    t61 = (x541%(x542<=(x543<=x544)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x545 = UINT32_MAX;
	int16_t x546 = INT16_MIN;
	volatile int64_t x548 = 252315LL;

    t62 = (x545%(x546<=(x547<=x548)));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x557 = INT32_MIN;
	static int8_t x559 = INT8_MAX;

    t63 = (x557%(x558<=(x559<=x560)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x562 = -1;
	uint64_t x563 = 4168LLU;
	static int32_t x564 = INT32_MIN;

    t64 = (x561%(x562<=(x563<=x564)));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x569 = 4;
	int16_t x572 = INT16_MIN;
	int32_t t65 = 133;

    t65 = (x569%(x570<=(x571<=x572)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x578 = -1LL;
	volatile int32_t x579 = 0;
	static uint32_t x580 = 126U;
	volatile int32_t t66 = -58534;

    t66 = (x577%(x578<=(x579<=x580)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x581 = UINT64_MAX;
	volatile int32_t x583 = -42181;
	int8_t x584 = -1;
	uint64_t t67 = 79126LLU;

    t67 = (x581%(x582<=(x583<=x584)));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x585 = 832U;
	int32_t x586 = INT32_MIN;
	uint32_t x587 = UINT32_MAX;
	int8_t x588 = INT8_MIN;
	volatile int32_t t68 = 1456714;

    t68 = (x585%(x586<=(x587<=x588)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x593 = 0U;
	int32_t x594 = -1;
	int64_t x595 = 87759702LL;
	volatile int16_t x596 = -1;
	static volatile uint32_t t69 = 19948U;

    t69 = (x593%(x594<=(x595<=x596)));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x601 = -31;
	int32_t x603 = INT32_MAX;
	static int8_t x604 = 4;
	volatile int32_t t70 = 6;

    t70 = (x601%(x602<=(x603<=x604)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x625 = -1;
	volatile int16_t x626 = INT16_MIN;
	volatile int16_t x628 = INT16_MIN;
	int32_t t71 = 261717630;

    t71 = (x625%(x626<=(x627<=x628)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x629 = 3205;
	static volatile int16_t x630 = INT16_MIN;
	int64_t x631 = INT64_MIN;
	uint8_t x632 = 24U;
	volatile int32_t t72 = -378510;

    t72 = (x629%(x630<=(x631<=x632)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x633 = 14;
	int32_t x634 = -1;
	int8_t x635 = INT8_MIN;
	static uint32_t x636 = 2374871U;
	int32_t t73 = -446;

    t73 = (x633%(x634<=(x635<=x636)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x638 = INT16_MIN;
	int32_t t74 = 13990437;

    t74 = (x637%(x638<=(x639<=x640)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x641 = UINT8_MAX;
	static volatile int64_t x642 = INT64_MIN;

    t75 = (x641%(x642<=(x643<=x644)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x649 = -1;
	static int16_t x651 = INT16_MIN;
	static uint8_t x652 = 46U;
	volatile int32_t t76 = 585346608;

    t76 = (x649%(x650<=(x651<=x652)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x653 = UINT64_MAX;
	int16_t x654 = -1;
	int16_t x656 = -3533;

    t77 = (x653%(x654<=(x655<=x656)));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x657 = 210580LLU;
	static int16_t x658 = -6;
	int8_t x660 = INT8_MIN;
	volatile uint64_t t78 = 2155657702LLU;

    t78 = (x657%(x658<=(x659<=x660)));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x666 = -8;
	int64_t x667 = INT64_MIN;
	uint64_t x668 = 4243712813LLU;
	volatile int64_t t79 = 386LL;

    t79 = (x665%(x666<=(x667<=x668)));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x673 = -50;
	int8_t x674 = -50;
	static int8_t x675 = INT8_MIN;
	static volatile int32_t t80 = -51;

    t80 = (x673%(x674<=(x675<=x676)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x681 = 1U;
	int64_t x682 = -421296731LL;
	int16_t x683 = INT16_MAX;
	int8_t x684 = 0;
	volatile int32_t t81 = -9;

    t81 = (x681%(x682<=(x683<=x684)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x693 = INT8_MAX;
	volatile int16_t x694 = -1;
	static volatile int16_t x695 = INT16_MIN;
	int32_t t82 = -4103144;

    t82 = (x693%(x694<=(x695<=x696)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x702 = INT64_MIN;
	volatile int64_t x703 = INT64_MIN;
	int32_t x704 = INT32_MIN;
	int32_t t83 = -825156918;

    t83 = (x701%(x702<=(x703<=x704)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x717 = -273948343566512LL;
	int16_t x718 = INT16_MIN;
	int32_t x719 = 11905288;
	volatile int8_t x720 = INT8_MIN;

    t84 = (x717%(x718<=(x719<=x720)));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x737 = 13LLU;
	uint32_t x739 = 9U;
	int64_t x740 = 6711015LL;
	uint64_t t85 = 29856743924821916LLU;

    t85 = (x737%(x738<=(x739<=x740)));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x745 = -40;
	static int32_t x746 = -417863;
	static uint32_t x747 = 155U;
	int16_t x748 = INT16_MIN;
	volatile int32_t t86 = 307;

    t86 = (x745%(x746<=(x747<=x748)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x749 = INT16_MIN;
	uint16_t x751 = UINT16_MAX;
	uint8_t x752 = 3U;

    t87 = (x749%(x750<=(x751<=x752)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x753 = INT64_MIN;
	int32_t x754 = -1;
	uint32_t x755 = UINT32_MAX;
	int32_t x756 = -867088590;
	int64_t t88 = 911054811LL;

    t88 = (x753%(x754<=(x755<=x756)));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x762 = -132;
	int8_t x764 = INT8_MIN;

    t89 = (x761%(x762<=(x763<=x764)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x765 = 118U;
	volatile int64_t x766 = INT64_MIN;
	volatile uint32_t x767 = UINT32_MAX;
	volatile int8_t x768 = INT8_MIN;
	int32_t t90 = 15;

    t90 = (x765%(x766<=(x767<=x768)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x785 = 2566485LLU;
	static int8_t x786 = INT8_MIN;
	static int16_t x787 = -1;
	int16_t x788 = 130;
	uint64_t t91 = 184808621515LLU;

    t91 = (x785%(x786<=(x787<=x788)));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x789 = 3501385258750992600LLU;
	int64_t x790 = -53353313194LL;
	int32_t x792 = -649920;
	volatile uint64_t t92 = 190959551104125LLU;

    t92 = (x789%(x790<=(x791<=x792)));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x793 = INT8_MIN;
	volatile int64_t x794 = -3820730359157LL;
	volatile int8_t x795 = -1;
	static int32_t t93 = 32162;

    t93 = (x793%(x794<=(x795<=x796)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x817 = INT32_MIN;
	int16_t x819 = 1;
	volatile int32_t t94 = 1;

    t94 = (x817%(x818<=(x819<=x820)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x822 = INT16_MIN;
	uint8_t x824 = 13U;
	volatile int32_t t95 = -123112;

    t95 = (x821%(x822<=(x823<=x824)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x841 = 1LLU;
	int8_t x843 = INT8_MIN;
	volatile int64_t x844 = INT64_MAX;
	volatile uint64_t t96 = 1594906716846559318LLU;

    t96 = (x841%(x842<=(x843<=x844)));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x853 = INT8_MAX;
	int8_t x854 = -1;
	int32_t x855 = -1;
	int32_t x856 = 766598;
	static volatile int32_t t97 = -174674655;

    t97 = (x853%(x854<=(x855<=x856)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x865 = INT8_MAX;
	int64_t x867 = INT64_MIN;
	uint8_t x868 = 23U;
	int32_t t98 = 165690363;

    t98 = (x865%(x866<=(x867<=x868)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x870 = -1;
	int16_t x871 = 4644;
	volatile uint64_t x872 = UINT64_MAX;
	int32_t t99 = -219428853;

    t99 = (x869%(x870<=(x871<=x872)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x873 = 58U;
	int32_t x874 = -71;
	uint8_t x876 = 42U;
	static int32_t t100 = -216207851;

    t100 = (x873%(x874<=(x875<=x876)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x878 = INT64_MIN;
	uint8_t x879 = 127U;
	int8_t x880 = 3;
	volatile int32_t t101 = 0;

    t101 = (x877%(x878<=(x879<=x880)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x881 = INT64_MIN;
	int8_t x882 = -1;
	uint64_t x883 = 256280212157575517LLU;
	int16_t x884 = -730;

    t102 = (x881%(x882<=(x883<=x884)));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x889 = 83U;
	volatile int16_t x890 = INT16_MIN;
	int64_t x891 = 61320LL;
	volatile int32_t t103 = -173027;

    t103 = (x889%(x890<=(x891<=x892)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x897 = 1;
	static int64_t x898 = INT64_MIN;
	uint8_t x899 = 12U;
	uint8_t x900 = UINT8_MAX;

    t104 = (x897%(x898<=(x899<=x900)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x901 = 7U;
	int16_t x902 = -1;
	int32_t x903 = -1;
	int32_t x904 = INT32_MIN;
	volatile int32_t t105 = -1007890415;

    t105 = (x901%(x902<=(x903<=x904)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x915 = INT8_MAX;
	int32_t x916 = -1;

    t106 = (x913%(x914<=(x915<=x916)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x918 = -1;
	volatile int16_t x920 = 1;

    t107 = (x917%(x918<=(x919<=x920)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x933 = 74LL;
	uint64_t x935 = 84241591LLU;
	int8_t x936 = -3;
	int64_t t108 = -163660182240667492LL;

    t108 = (x933%(x934<=(x935<=x936)));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x937 = UINT8_MAX;
	volatile int32_t x938 = INT32_MIN;
	int32_t x940 = -491;
	int32_t t109 = 33822133;

    t109 = (x937%(x938<=(x939<=x940)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x949 = INT16_MIN;
	static uint8_t x951 = 19U;
	static int32_t x952 = -1;
	static volatile int32_t t110 = -65452106;

    t110 = (x949%(x950<=(x951<=x952)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x954 = INT32_MIN;
	volatile int16_t x955 = INT16_MIN;
	uint16_t x956 = 8101U;
	volatile uint32_t t111 = 13U;

    t111 = (x953%(x954<=(x955<=x956)));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x957 = 3750159706LLU;
	int64_t x958 = INT64_MIN;
	uint32_t x959 = 1155U;
	int32_t x960 = INT32_MIN;
	volatile uint64_t t112 = 8873841970897691LLU;

    t112 = (x957%(x958<=(x959<=x960)));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x969 = UINT8_MAX;
	int64_t x970 = INT64_MIN;
	volatile int32_t x972 = INT32_MIN;
	static int32_t t113 = -11541;

    t113 = (x969%(x970<=(x971<=x972)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x973 = 820;
	int32_t x974 = INT32_MIN;
	static uint16_t x976 = 86U;
	int32_t t114 = 281295395;

    t114 = (x973%(x974<=(x975<=x976)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x977 = -1857578704LL;
	int32_t x978 = INT32_MIN;
	uint64_t x980 = 80017560343088LLU;

    t115 = (x977%(x978<=(x979<=x980)));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x981 = 0U;
	int64_t x982 = INT64_MIN;
	int16_t x983 = -1;
	int8_t x984 = INT8_MIN;
	volatile int32_t t116 = 8;

    t116 = (x981%(x982<=(x983<=x984)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x985 = 63U;
	int32_t x986 = -509;
	int16_t x987 = INT16_MIN;
	uint32_t t117 = 60U;

    t117 = (x985%(x986<=(x987<=x988)));

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x993 = 3873LLU;
	int16_t x995 = -1;
	uint16_t x996 = 4U;
	static volatile uint64_t t118 = 107LLU;

    t118 = (x993%(x994<=(x995<=x996)));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x998 = INT16_MIN;
	int32_t x999 = 1;
	int64_t t119 = -1850340296621LL;

    t119 = (x997%(x998<=(x999<=x1000)));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x1005 = INT32_MIN;
	int16_t x1006 = INT16_MIN;
	int64_t x1007 = INT64_MAX;
	int32_t x1008 = INT32_MIN;
	volatile int32_t t120 = 57457509;

    t120 = (x1005%(x1006<=(x1007<=x1008)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x1009 = UINT8_MAX;
	int32_t x1010 = -1053013841;
	static int16_t x1011 = -1;
	uint16_t x1012 = UINT16_MAX;
	int32_t t121 = -15464694;

    t121 = (x1009%(x1010<=(x1011<=x1012)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x1022 = -1;
	int32_t x1023 = INT32_MAX;
	int32_t x1024 = INT32_MIN;
	static int64_t t122 = -3LL;

    t122 = (x1021%(x1022<=(x1023<=x1024)));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x1041 = INT32_MIN;
	volatile int16_t x1042 = INT16_MIN;
	int32_t x1043 = INT32_MAX;
	int16_t x1044 = INT16_MIN;
	int32_t t123 = 910164020;

    t123 = (x1041%(x1042<=(x1043<=x1044)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x1045 = UINT16_MAX;
	int8_t x1046 = INT8_MIN;
	int64_t x1047 = -2458359041369LL;
	volatile uint8_t x1048 = 11U;
	static int32_t t124 = -20;

    t124 = (x1045%(x1046<=(x1047<=x1048)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x1049 = 88299U;
	int8_t x1050 = INT8_MIN;
	volatile int64_t x1051 = -5996LL;
	int8_t x1052 = -4;

    t125 = (x1049%(x1050<=(x1051<=x1052)));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x1057 = -651;
	int16_t x1058 = -1019;
	uint8_t x1060 = UINT8_MAX;

    t126 = (x1057%(x1058<=(x1059<=x1060)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x1070 = INT64_MIN;
	volatile int8_t x1071 = INT8_MIN;
	volatile uint8_t x1072 = UINT8_MAX;
	volatile int32_t t127 = -65;

    t127 = (x1069%(x1070<=(x1071<=x1072)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x1078 = -1;
	int64_t x1079 = -54474264160731769LL;
	uint64_t x1080 = 30947LLU;

    t128 = (x1077%(x1078<=(x1079<=x1080)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x1081 = INT8_MIN;
	int64_t x1083 = -4750064074926317LL;
	int8_t x1084 = 0;

    t129 = (x1081%(x1082<=(x1083<=x1084)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x1085 = INT32_MIN;
	volatile int16_t x1086 = -69;
	volatile int8_t x1087 = INT8_MAX;
	int64_t x1088 = 0LL;

    t130 = (x1085%(x1086<=(x1087<=x1088)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x1089 = UINT16_MAX;
	int8_t x1090 = INT8_MIN;
	int32_t x1091 = -1;
	int64_t x1092 = INT64_MAX;
	static volatile int32_t t131 = -64;

    t131 = (x1089%(x1090<=(x1091<=x1092)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x1093 = -5373LL;
	static int32_t x1094 = -63106;
	volatile uint16_t x1096 = UINT16_MAX;
	static volatile int64_t t132 = 1683406694621889LL;

    t132 = (x1093%(x1094<=(x1095<=x1096)));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x1101 = 13U;
	int32_t x1102 = -1;
	static int32_t x1104 = 959702;
	volatile int32_t t133 = -4002;

    t133 = (x1101%(x1102<=(x1103<=x1104)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x1113 = INT8_MIN;
	int8_t x1114 = 0;
	uint64_t x1115 = 37086866LLU;
	static volatile int16_t x1116 = -4;
	volatile int32_t t134 = 437210;

    t134 = (x1113%(x1114<=(x1115<=x1116)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x1117 = UINT8_MAX;
	int32_t x1118 = -62;
	volatile int64_t x1119 = INT64_MIN;
	volatile uint8_t x1120 = 47U;
	volatile int32_t t135 = -120480;

    t135 = (x1117%(x1118<=(x1119<=x1120)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x1125 = 111;
	volatile int64_t x1126 = INT64_MIN;
	uint64_t x1128 = 85778707786722LLU;
	volatile int32_t t136 = -168997;

    t136 = (x1125%(x1126<=(x1127<=x1128)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x1129 = INT16_MIN;
	int64_t x1131 = INT64_MAX;
	volatile int64_t x1132 = -1LL;
	volatile int32_t t137 = -9416;

    t137 = (x1129%(x1130<=(x1131<=x1132)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x1134 = -1;
	static volatile int32_t x1135 = INT32_MAX;
	volatile int64_t x1136 = INT64_MIN;
	static volatile int32_t t138 = -9960;

    t138 = (x1133%(x1134<=(x1135<=x1136)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x1150 = 0;
	int32_t t139 = -59251171;

    t139 = (x1149%(x1150<=(x1151<=x1152)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x1157 = INT16_MAX;
	int8_t x1158 = -7;
	int64_t x1159 = 1LL;
	static int32_t t140 = -114;

    t140 = (x1157%(x1158<=(x1159<=x1160)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x1169 = 9963316076LLU;
	int8_t x1170 = -14;
	volatile int16_t x1171 = 3792;
	uint64_t t141 = 23841LLU;

    t141 = (x1169%(x1170<=(x1171<=x1172)));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x1185 = 653316U;
	uint64_t x1186 = 0LLU;
	int64_t x1188 = 30488835LL;
	static volatile uint32_t t142 = 30201U;

    t142 = (x1185%(x1186<=(x1187<=x1188)));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x1189 = INT16_MIN;
	static int64_t x1190 = INT64_MIN;
	uint32_t x1191 = 10U;
	volatile uint32_t x1192 = UINT32_MAX;
	volatile int32_t t143 = 14;

    t143 = (x1189%(x1190<=(x1191<=x1192)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x1194 = 0U;
	static volatile int8_t x1195 = -11;
	int32_t x1196 = -1;
	volatile int32_t t144 = -1366728;

    t144 = (x1193%(x1194<=(x1195<=x1196)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1202 = -1;
	int32_t x1203 = INT32_MIN;
	volatile uint32_t t145 = 8117718U;

    t145 = (x1201%(x1202<=(x1203<=x1204)));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x1217 = 1;
	static volatile int16_t x1218 = -1;
	int8_t x1219 = -1;
	int32_t x1220 = INT32_MAX;
	volatile int32_t t146 = 55415796;

    t146 = (x1217%(x1218<=(x1219<=x1220)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x1221 = 30404323LLU;
	int8_t x1222 = -2;
	volatile int32_t x1223 = INT32_MIN;
	uint64_t t147 = 947799530LLU;

    t147 = (x1221%(x1222<=(x1223<=x1224)));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1225 = -2LL;
	static volatile int8_t x1226 = INT8_MIN;
	int32_t x1228 = -718286453;

    t148 = (x1225%(x1226<=(x1227<=x1228)));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x1229 = INT32_MIN;
	int8_t x1230 = -1;
	volatile int64_t x1232 = INT64_MIN;
	int32_t t149 = 33580211;

    t149 = (x1229%(x1230<=(x1231<=x1232)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1261 = -14;
	volatile int8_t x1262 = -38;
	static int32_t x1263 = -1;
	uint64_t x1264 = UINT64_MAX;

    t150 = (x1261%(x1262<=(x1263<=x1264)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x1279 = UINT64_MAX;
	uint16_t x1280 = 240U;
	volatile int32_t t151 = 188765;

    t151 = (x1277%(x1278<=(x1279<=x1280)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x1282 = -4;
	static int64_t x1283 = INT64_MIN;
	uint64_t x1284 = UINT64_MAX;

    t152 = (x1281%(x1282<=(x1283<=x1284)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x1298 = INT16_MIN;
	volatile uint32_t x1299 = UINT32_MAX;
	static volatile int32_t t153 = 2923;

    t153 = (x1297%(x1298<=(x1299<=x1300)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x1302 = INT64_MIN;
	int64_t x1304 = INT64_MIN;
	volatile int32_t t154 = 107772;

    t154 = (x1301%(x1302<=(x1303<=x1304)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x1314 = INT16_MIN;
	int64_t x1315 = INT64_MIN;
	static int64_t x1316 = -1LL;
	volatile int32_t t155 = 3;

    t155 = (x1313%(x1314<=(x1315<=x1316)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x1329 = INT16_MIN;
	int64_t x1330 = -1LL;
	int64_t x1331 = INT64_MAX;
	uint8_t x1332 = 25U;
	int32_t t156 = 4231359;

    t156 = (x1329%(x1330<=(x1331<=x1332)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x1337 = INT16_MIN;
	int8_t x1338 = INT8_MIN;
	volatile int64_t x1339 = INT64_MAX;
	int8_t x1340 = -49;

    t157 = (x1337%(x1338<=(x1339<=x1340)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x1341 = -3;
	volatile int32_t x1342 = -1;
	static uint64_t x1343 = 3383473876018LLU;
	volatile int32_t t158 = 1576;

    t158 = (x1341%(x1342<=(x1343<=x1344)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x1345 = 5418U;
	int64_t x1346 = -1LL;
	int16_t x1347 = -10506;
	uint8_t x1348 = 18U;
	static volatile uint32_t t159 = 202014989U;

    t159 = (x1345%(x1346<=(x1347<=x1348)));

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x1349 = -39;
	int64_t x1350 = INT64_MIN;
	static int8_t x1351 = INT8_MIN;
	static uint64_t x1352 = 10924LLU;
	int32_t t160 = -867406217;

    t160 = (x1349%(x1350<=(x1351<=x1352)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x1354 = INT16_MIN;
	int8_t x1355 = 6;
	uint32_t x1356 = 1U;

    t161 = (x1353%(x1354<=(x1355<=x1356)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x1361 = 9U;
	int8_t x1362 = -30;
	static int32_t t162 = -16905706;

    t162 = (x1361%(x1362<=(x1363<=x1364)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1365 = -14LL;
	uint16_t x1366 = 0U;
	uint32_t x1367 = 8092837U;
	static volatile int8_t x1368 = -1;

    t163 = (x1365%(x1366<=(x1367<=x1368)));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x1369 = 24648U;
	volatile uint16_t x1371 = 18752U;
	int8_t x1372 = -4;
	static volatile uint32_t t164 = 9U;

    t164 = (x1369%(x1370<=(x1371<=x1372)));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x1373 = -1LL;
	int16_t x1374 = 0;
	int16_t x1375 = INT16_MAX;
	int64_t x1376 = 696791852823910LL;
	int64_t t165 = -108027662958LL;

    t165 = (x1373%(x1374<=(x1375<=x1376)));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x1385 = UINT8_MAX;
	int64_t x1386 = INT64_MIN;
	volatile int64_t x1388 = 51LL;

    t166 = (x1385%(x1386<=(x1387<=x1388)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x1389 = UINT64_MAX;
	int8_t x1390 = INT8_MIN;
	int8_t x1391 = -1;
	uint8_t x1392 = 1U;
	uint64_t t167 = 0LLU;

    t167 = (x1389%(x1390<=(x1391<=x1392)));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1393 = -1;
	volatile int16_t x1394 = INT16_MIN;
	int32_t x1395 = 12837923;
	volatile int16_t x1396 = INT16_MIN;
	volatile int32_t t168 = 1984;

    t168 = (x1393%(x1394<=(x1395<=x1396)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1401 = -2121511494196LL;
	static int64_t x1402 = -1335249032692LL;
	int8_t x1403 = INT8_MAX;
	static uint16_t x1404 = UINT16_MAX;
	volatile int64_t t169 = 113119916864762LL;

    t169 = (x1401%(x1402<=(x1403<=x1404)));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x1409 = 1U;
	int8_t x1410 = -1;
	int64_t x1411 = INT64_MIN;
	uint64_t x1412 = 202885743609023609LLU;
	int32_t t170 = -10391;

    t170 = (x1409%(x1410<=(x1411<=x1412)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x1421 = 833034983U;
	static volatile int16_t x1422 = INT16_MIN;
	volatile int16_t x1424 = INT16_MAX;
	uint32_t t171 = 12267U;

    t171 = (x1421%(x1422<=(x1423<=x1424)));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x1425 = 2U;
	uint32_t x1428 = 7U;

    t172 = (x1425%(x1426<=(x1427<=x1428)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x1459 = INT64_MIN;
	volatile int16_t x1460 = -1;

    t173 = (x1457%(x1458<=(x1459<=x1460)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x1461 = -1;
	int32_t x1462 = -155;
	static int32_t x1463 = -1;
	static int32_t x1464 = 252885042;

    t174 = (x1461%(x1462<=(x1463<=x1464)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x1465 = INT64_MIN;
	int16_t x1466 = INT16_MIN;
	int64_t t175 = 52244581LL;

    t175 = (x1465%(x1466<=(x1467<=x1468)));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x1469 = INT16_MAX;
	int8_t x1471 = -24;
	int8_t x1472 = INT8_MIN;
	static volatile int32_t t176 = -1;

    t176 = (x1469%(x1470<=(x1471<=x1472)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1474 = INT32_MIN;
	int8_t x1476 = INT8_MIN;

    t177 = (x1473%(x1474<=(x1475<=x1476)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x1481 = INT32_MIN;
	int16_t x1482 = 0;
	static int16_t x1483 = INT16_MIN;
	volatile int32_t t178 = 6986;

    t178 = (x1481%(x1482<=(x1483<=x1484)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x1485 = INT16_MIN;
	int64_t x1486 = INT64_MIN;
	static int32_t x1487 = INT32_MIN;
	int16_t x1488 = 148;
	volatile int32_t t179 = -53177;

    t179 = (x1485%(x1486<=(x1487<=x1488)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1489 = -4;
	static int8_t x1490 = INT8_MIN;
	int64_t x1491 = -12073195809003LL;
	int16_t x1492 = INT16_MIN;
	int32_t t180 = 27032738;

    t180 = (x1489%(x1490<=(x1491<=x1492)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x1493 = UINT32_MAX;
	int16_t x1495 = -950;
	int64_t x1496 = 0LL;
	volatile uint32_t t181 = 2U;

    t181 = (x1493%(x1494<=(x1495<=x1496)));

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1497 = -1;
	volatile int16_t x1498 = INT16_MIN;
	int16_t x1500 = 1766;
	int32_t t182 = -3481;

    t182 = (x1497%(x1498<=(x1499<=x1500)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x1505 = 30U;
	int16_t x1506 = INT16_MIN;
	int32_t x1507 = 26184308;
	int32_t t183 = -347;

    t183 = (x1505%(x1506<=(x1507<=x1508)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1517 = 20087389604LL;
	int64_t x1518 = -10856937LL;
	uint64_t x1520 = 0LLU;
	volatile int64_t t184 = -18511505297759929LL;

    t184 = (x1517%(x1518<=(x1519<=x1520)));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1521 = 312812LLU;
	static int8_t x1522 = -1;
	static int32_t x1524 = INT32_MIN;
	uint64_t t185 = 512949691LLU;

    t185 = (x1521%(x1522<=(x1523<=x1524)));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1525 = -1;
	int32_t x1526 = -849451929;
	int32_t x1527 = INT32_MAX;
	static uint8_t x1528 = 17U;
	volatile int32_t t186 = 8203;

    t186 = (x1525%(x1526<=(x1527<=x1528)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1541 = UINT64_MAX;
	uint16_t x1544 = UINT16_MAX;
	volatile uint64_t t187 = 78006634662LLU;

    t187 = (x1541%(x1542<=(x1543<=x1544)));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1555 = 1976803206202LLU;
	static int32_t x1556 = 954988;
	volatile int32_t t188 = 10391330;

    t188 = (x1553%(x1554<=(x1555<=x1556)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1565 = INT32_MAX;
	int32_t x1566 = 0;
	uint32_t x1567 = 3951022U;
	uint64_t x1568 = UINT64_MAX;
	volatile int32_t t189 = -46;

    t189 = (x1565%(x1566<=(x1567<=x1568)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1570 = -1;
	uint8_t x1571 = 0U;
	int16_t x1572 = INT16_MIN;
	int32_t t190 = 43383;

    t190 = (x1569%(x1570<=(x1571<=x1572)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1573 = 26LLU;
	volatile int8_t x1574 = -1;
	int16_t x1575 = -1;
	int64_t x1576 = -103304474998810LL;
	static volatile uint64_t t191 = 42582LLU;

    t191 = (x1573%(x1574<=(x1575<=x1576)));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint16_t x1581 = 13U;
	static int32_t x1582 = INT32_MIN;
	volatile int64_t x1583 = INT64_MIN;
	int32_t t192 = 1233652;

    t192 = (x1581%(x1582<=(x1583<=x1584)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1597 = 412706453U;
	int16_t x1598 = -24;
	int16_t x1599 = INT16_MIN;
	volatile int64_t x1600 = -55538599721LL;

    t193 = (x1597%(x1598<=(x1599<=x1600)));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x1601 = INT16_MIN;
	int32_t x1602 = -1058758;
	static int8_t x1603 = INT8_MIN;
	volatile uint64_t x1604 = UINT64_MAX;

    t194 = (x1601%(x1602<=(x1603<=x1604)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1610 = INT32_MIN;
	uint8_t x1612 = UINT8_MAX;
	static volatile int32_t t195 = 59879;

    t195 = (x1609%(x1610<=(x1611<=x1612)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1627 = 2313LLU;
	int16_t x1628 = -21;
	volatile int32_t t196 = -108603;

    t196 = (x1625%(x1626<=(x1627<=x1628)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1629 = 1848399LL;
	static int32_t x1631 = 832;
	int8_t x1632 = -1;
	volatile int64_t t197 = -17077685695031LL;

    t197 = (x1629%(x1630<=(x1631<=x1632)));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    

    t198 = (x1637%(x1638<=(x1639<=x1640)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x1641 = 2;
	int16_t x1642 = INT16_MIN;
	volatile uint32_t x1643 = UINT32_MAX;
	static uint16_t x1644 = 1U;

    t199 = (x1641%(x1642<=(x1643<=x1644)));

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


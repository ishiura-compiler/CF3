
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

static int8_t x27 = -1;
uint32_t x41 = 705952756U;
uint32_t x42 = 0U;
volatile int8_t x100 = -1;
static uint32_t x228 = UINT32_MAX;
int32_t x234 = 5;
static volatile int32_t t6 = -2;
volatile uint64_t x273 = 60LLU;
volatile int32_t t8 = 314;
volatile uint16_t x363 = 2U;
uint32_t x364 = 20588U;
volatile int64_t x365 = 4143387LL;
int32_t x367 = INT32_MIN;
uint8_t x566 = 3U;
static uint64_t x568 = 6906225LLU;
int32_t t15 = 0;
int16_t x808 = INT16_MIN;
int32_t t16 = -10823008;
uint64_t x867 = 1606641718LLU;
uint8_t x868 = 7U;
uint16_t x908 = 174U;
int32_t t18 = -44;
volatile uint64_t x979 = UINT64_MAX;
volatile int32_t t19 = -367;
static int32_t t20 = -1;
uint16_t x1052 = UINT16_MAX;
static volatile uint64_t x1165 = 1096534000931547756LLU;
static uint16_t x1166 = 53U;
volatile int8_t x1168 = 14;
volatile uint32_t x1334 = 1U;
static uint16_t x1425 = 1494U;
int16_t x1481 = INT16_MAX;
uint16_t x1483 = UINT16_MAX;
static int64_t x1503 = INT64_MIN;
int32_t x1761 = 348968;
volatile int32_t t34 = -348810;
volatile int8_t x1980 = INT8_MIN;
int16_t x2025 = INT16_MAX;
int8_t x2027 = INT8_MIN;
volatile int16_t x2028 = -98;
int8_t x2272 = INT8_MIN;
static volatile int32_t t39 = -75162;
int16_t x2371 = INT16_MIN;
uint32_t x2404 = 331U;
int32_t t42 = 35545;
volatile uint64_t x2417 = 556283467LLU;
int32_t x2419 = INT32_MIN;
int32_t t44 = -5260506;
volatile int8_t x2534 = 5;
volatile int16_t x2536 = -1;
int32_t t45 = 349514134;
volatile int32_t t46 = -196;
uint8_t x2611 = 10U;
uint8_t x2612 = 1U;
volatile int32_t t47 = 489431250;
volatile int64_t x2824 = -1LL;
volatile int32_t t54 = 338;
int32_t t56 = 95;
uint8_t x3038 = 53U;
uint8_t x3083 = UINT8_MAX;
static volatile int32_t t58 = 127969;
int8_t x3090 = 1;
static uint64_t x3113 = UINT64_MAX;
int16_t x3115 = INT16_MIN;
int16_t x3129 = 48;
int16_t x3131 = -3721;
volatile int32_t t64 = 231;
int64_t x3324 = INT64_MAX;
uint64_t x3328 = 6780LLU;
static uint8_t x3408 = 20U;
volatile int32_t t67 = -2124;
static volatile int32_t t68 = -40108;
volatile uint16_t x3570 = 7U;
uint8_t x3572 = 29U;
volatile uint32_t x3579 = UINT32_MAX;
uint32_t x3619 = 5443U;
int16_t x3642 = 1;
static volatile int32_t x3644 = INT32_MIN;
uint16_t x3649 = 22U;
int32_t x3652 = -1;
uint32_t x3766 = 12U;
volatile int32_t t77 = -180337;
int32_t x3872 = -16816;
int32_t t78 = -96984;
uint64_t x3900 = 20470LLU;
uint8_t x3942 = 15U;
static uint32_t x3981 = 385U;
uint8_t x3982 = 3U;
int8_t x3996 = INT8_MIN;
int8_t x4058 = 12;
int32_t x4061 = INT32_MAX;
uint8_t x4174 = 0U;
int32_t t86 = 13632030;
int32_t t87 = -55186754;
int64_t x4191 = INT64_MIN;
uint32_t x4445 = 542U;
int32_t t92 = -208;
int64_t x4624 = INT64_MAX;
int16_t x4650 = 6;
volatile int32_t t94 = -895080;
int16_t x4780 = 9306;
int32_t t97 = -1682;
int16_t x4904 = INT16_MAX;
int8_t x4938 = 0;
int8_t x5014 = 1;
volatile int16_t x5016 = -1;
uint16_t x5077 = 0U;
int32_t x5080 = 328970230;
static uint16_t x5109 = UINT16_MAX;
int16_t x5112 = INT16_MIN;
uint32_t x5426 = 17U;
int64_t x5548 = -41LL;
static uint32_t x5729 = UINT32_MAX;
int64_t x5731 = INT64_MIN;
static int32_t t113 = 1243;
volatile int8_t x5766 = 11;
static int8_t x5775 = INT8_MAX;
static uint16_t x5776 = 12U;
int32_t t116 = -104792;
volatile int8_t x5810 = 46;
static int64_t x5817 = INT64_MAX;
uint32_t x5819 = UINT32_MAX;
int16_t x5820 = INT16_MAX;
volatile int32_t t118 = -346845;
int32_t t119 = 21098266;
static uint8_t x6009 = 10U;
uint8_t x6010 = 2U;
volatile int32_t t122 = -113443;
int16_t x6050 = 25;
static uint8_t x6052 = 17U;
volatile int32_t t123 = -140357030;
uint16_t x6218 = 0U;
int8_t x6219 = -1;
volatile uint32_t x6249 = 125108750U;
int32_t t129 = 144793;
uint32_t x6339 = UINT32_MAX;
int8_t x6340 = INT8_MAX;
int32_t x6404 = -1;
volatile int32_t t131 = -340;
uint64_t x6409 = 440390LLU;
uint64_t x6425 = 26676152LLU;
static uint64_t x6428 = 1699116475LLU;
int64_t x6439 = -1LL;
static uint64_t x6496 = UINT64_MAX;
static uint16_t x6514 = 2U;
volatile uint16_t x6570 = 15U;
int64_t x6572 = INT64_MIN;
volatile int32_t t138 = 11210;
int32_t t139 = 61899011;
volatile uint64_t x6643 = UINT64_MAX;
int32_t t141 = 8;
volatile uint64_t x6714 = 6LLU;
volatile int8_t x6716 = 1;
int32_t x6887 = -409809;
uint64_t x6978 = 29LLU;
uint64_t x7025 = 4343868791909LLU;
int16_t x7026 = 59;
int8_t x7143 = INT8_MIN;
volatile uint8_t x7165 = 68U;
uint8_t x7168 = 1U;
int32_t t151 = -770;
int16_t x7441 = INT16_MAX;
int64_t x7444 = INT64_MIN;
int32_t x7495 = INT32_MIN;
int64_t x7683 = 1162394023719077351LL;
volatile int32_t x7818 = 0;
volatile int64_t x7953 = 2132885646LL;
uint8_t x7954 = 0U;
static volatile int32_t x8036 = -1;
int64_t x8051 = -1LL;
static uint16_t x8065 = 2U;
volatile int64_t x8111 = INT64_MIN;
uint8_t x8138 = 22U;
int8_t x8144 = 2;
volatile int32_t t171 = 2051319;
int8_t x8382 = 0;
volatile int64_t x8383 = INT64_MAX;
int32_t t172 = -91641;
static int16_t x8436 = 62;
int16_t x8516 = -22;
uint16_t x8654 = 26U;
int32_t t176 = 16778936;
static volatile uint8_t x8718 = 17U;
volatile int32_t t177 = -27;
uint8_t x8868 = 13U;
int8_t x8969 = 4;
static uint64_t x9133 = 794357911412218869LLU;
int32_t x9135 = INT32_MIN;
int32_t x9251 = -1;
volatile int16_t x9383 = INT16_MIN;
volatile uint64_t x9409 = 13991524LLU;
int64_t x9537 = 1LL;
static uint64_t x9581 = UINT64_MAX;
int32_t x9584 = 4508246;
int32_t t189 = -938234679;
int8_t x9632 = -1;
static int8_t x9811 = -12;
int16_t x10008 = -1;
static volatile int32_t t197 = 8;


void f0(void) {
    	uint16_t x21 = 20U;
	static volatile uint16_t x22 = 16U;
	int16_t x23 = INT16_MAX;
	volatile int8_t x24 = 24;
	int32_t t0 = 10477484;

    t0 = ((x21>>x22)>(x23>x24));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x25 = 2;
	int8_t x26 = 3;
	int16_t x28 = -6259;
	int32_t t1 = -3764702;

    t1 = ((x25>>x26)>(x27>x28));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x43 = INT32_MAX;
	int64_t x44 = INT64_MIN;
	volatile int32_t t2 = -1;

    t2 = ((x41>>x42)>(x43>x44));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x97 = 12571610;
	uint8_t x98 = 7U;
	int64_t x99 = INT64_MAX;
	int32_t t3 = -125626541;

    t3 = ((x97>>x98)>(x99>x100));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x145 = 99U;
	static uint8_t x146 = 7U;
	int64_t x147 = -3304215669311330919LL;
	static int8_t x148 = INT8_MIN;
	int32_t t4 = 3;

    t4 = ((x145>>x146)>(x147>x148));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x225 = 0;
	uint8_t x226 = 1U;
	uint64_t x227 = 227392478237313775LLU;
	int32_t t5 = 14;

    t5 = ((x225>>x226)>(x227>x228));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x233 = 30443285LLU;
	int64_t x235 = INT64_MIN;
	int16_t x236 = INT16_MAX;

    t6 = ((x233>>x234)>(x235>x236));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x274 = 25;
	static uint8_t x275 = 24U;
	uint8_t x276 = 2U;
	int32_t t7 = 1013;

    t7 = ((x273>>x274)>(x275>x276));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint8_t x309 = UINT8_MAX;
	uint8_t x310 = 12U;
	uint8_t x311 = 0U;
	volatile uint8_t x312 = 41U;

    t8 = ((x309>>x310)>(x311>x312));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x361 = 208U;
	static volatile uint32_t x362 = 0U;
	int32_t t9 = -26790293;

    t9 = ((x361>>x362)>(x363>x364));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x366 = 1;
	int8_t x368 = INT8_MAX;
	int32_t t10 = 108;

    t10 = ((x365>>x366)>(x367>x368));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x437 = INT8_MAX;
	uint16_t x438 = 29U;
	volatile uint64_t x439 = 209864508373LLU;
	uint16_t x440 = UINT16_MAX;
	int32_t t11 = 110892347;

    t11 = ((x437>>x438)>(x439>x440));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x481 = 14877;
	int8_t x482 = 2;
	int64_t x483 = 43586029454LL;
	int16_t x484 = INT16_MAX;
	volatile int32_t t12 = -20;

    t12 = ((x481>>x482)>(x483>x484));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x565 = 820U;
	int32_t x567 = -1;
	static int32_t t13 = -940;

    t13 = ((x565>>x566)>(x567>x568));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x673 = 71285530465LLU;
	volatile uint32_t x674 = 63U;
	int32_t x675 = -341;
	int16_t x676 = -1;
	int32_t t14 = -2;

    t14 = ((x673>>x674)>(x675>x676));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x745 = UINT8_MAX;
	int8_t x746 = 0;
	int16_t x747 = -6;
	uint8_t x748 = UINT8_MAX;

    t15 = ((x745>>x746)>(x747>x748));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x805 = UINT32_MAX;
	uint8_t x806 = 21U;
	int8_t x807 = -21;

    t16 = ((x805>>x806)>(x807>x808));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x865 = INT32_MAX;
	int16_t x866 = 5;
	static int32_t t17 = -27;

    t17 = ((x865>>x866)>(x867>x868));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x905 = 25U;
	volatile int32_t x906 = 19;
	int8_t x907 = INT8_MAX;

    t18 = ((x905>>x906)>(x907>x908));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x977 = UINT32_MAX;
	volatile int8_t x978 = 1;
	static int64_t x980 = -2119922092557LL;

    t19 = ((x977>>x978)>(x979>x980));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x993 = 1892285095455971359LLU;
	int8_t x994 = 1;
	static volatile int64_t x995 = -1LL;
	int16_t x996 = INT16_MAX;

    t20 = ((x993>>x994)>(x995>x996));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x1049 = INT32_MAX;
	uint8_t x1050 = 3U;
	uint8_t x1051 = 7U;
	volatile int32_t t21 = -18036;

    t21 = ((x1049>>x1050)>(x1051>x1052));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x1167 = INT32_MIN;
	volatile int32_t t22 = -2937982;

    t22 = ((x1165>>x1166)>(x1167>x1168));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x1301 = 465U;
	volatile int16_t x1302 = 9;
	static int64_t x1303 = 131LL;
	int32_t x1304 = INT32_MAX;
	volatile int32_t t23 = 18335428;

    t23 = ((x1301>>x1302)>(x1303>x1304));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x1325 = INT8_MAX;
	volatile uint64_t x1326 = 3LLU;
	int64_t x1327 = 647023523916762LL;
	int64_t x1328 = -1LL;
	volatile int32_t t24 = -3;

    t24 = ((x1325>>x1326)>(x1327>x1328));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x1333 = 231345339U;
	static int64_t x1335 = -1LL;
	int16_t x1336 = INT16_MIN;
	volatile int32_t t25 = -34;

    t25 = ((x1333>>x1334)>(x1335>x1336));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x1397 = 277866U;
	volatile uint8_t x1398 = 0U;
	int16_t x1399 = INT16_MIN;
	uint8_t x1400 = 0U;
	int32_t t26 = -81;

    t26 = ((x1397>>x1398)>(x1399>x1400));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x1426 = 0U;
	volatile int64_t x1427 = 10209910434LL;
	uint32_t x1428 = UINT32_MAX;
	int32_t t27 = 6878531;

    t27 = ((x1425>>x1426)>(x1427>x1428));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x1482 = 1U;
	int64_t x1484 = -1LL;
	int32_t t28 = 14943;

    t28 = ((x1481>>x1482)>(x1483>x1484));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x1501 = 1980990828270LLU;
	uint8_t x1502 = 1U;
	static int32_t x1504 = 1;
	int32_t t29 = -758009889;

    t29 = ((x1501>>x1502)>(x1503>x1504));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x1589 = 4U;
	volatile uint8_t x1590 = 3U;
	uint8_t x1591 = 3U;
	int64_t x1592 = INT64_MAX;
	int32_t t30 = 113177;

    t30 = ((x1589>>x1590)>(x1591>x1592));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x1625 = INT8_MAX;
	static int32_t x1626 = 11;
	static int16_t x1627 = -62;
	uint32_t x1628 = 348435495U;
	volatile int32_t t31 = 1;

    t31 = ((x1625>>x1626)>(x1627>x1628));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x1709 = 203469U;
	volatile uint8_t x1710 = 14U;
	uint32_t x1711 = UINT32_MAX;
	int32_t x1712 = INT32_MAX;
	volatile int32_t t32 = -79074065;

    t32 = ((x1709>>x1710)>(x1711>x1712));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x1762 = 10U;
	int64_t x1763 = 66944474811885LL;
	uint8_t x1764 = 31U;
	volatile int32_t t33 = 3041;

    t33 = ((x1761>>x1762)>(x1763>x1764));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x1821 = 1;
	int16_t x1822 = 3;
	int64_t x1823 = 43238653637890LL;
	int16_t x1824 = 0;

    t34 = ((x1821>>x1822)>(x1823>x1824));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x1977 = 4U;
	uint8_t x1978 = 2U;
	volatile int64_t x1979 = -15527644643942157LL;
	volatile int32_t t35 = 27218311;

    t35 = ((x1977>>x1978)>(x1979>x1980));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x2026 = 1;
	int32_t t36 = 28933369;

    t36 = ((x2025>>x2026)>(x2027>x2028));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x2073 = 22186653009519LL;
	volatile uint8_t x2074 = 0U;
	volatile int32_t x2075 = INT32_MAX;
	int8_t x2076 = INT8_MIN;
	volatile int32_t t37 = -153;

    t37 = ((x2073>>x2074)>(x2075>x2076));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x2269 = 352LLU;
	uint8_t x2270 = 3U;
	static int16_t x2271 = -8836;
	static int32_t t38 = -1;

    t38 = ((x2269>>x2270)>(x2271>x2272));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x2309 = INT64_MAX;
	static uint32_t x2310 = 4U;
	uint16_t x2311 = 0U;
	static uint32_t x2312 = 2040U;

    t39 = ((x2309>>x2310)>(x2311>x2312));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x2321 = 1U;
	uint8_t x2322 = 12U;
	static uint8_t x2323 = 110U;
	static int16_t x2324 = INT16_MAX;
	int32_t t40 = -423632867;

    t40 = ((x2321>>x2322)>(x2323>x2324));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x2369 = 116416790;
	volatile int8_t x2370 = 2;
	int16_t x2372 = INT16_MIN;
	static int32_t t41 = 6;

    t41 = ((x2369>>x2370)>(x2371>x2372));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x2401 = 22295434U;
	uint16_t x2402 = 1U;
	static int16_t x2403 = INT16_MAX;

    t42 = ((x2401>>x2402)>(x2403>x2404));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x2418 = 0;
	int16_t x2420 = INT16_MIN;
	int32_t t43 = 44;

    t43 = ((x2417>>x2418)>(x2419>x2420));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x2513 = 0U;
	static int8_t x2514 = 18;
	int16_t x2515 = -1;
	static int32_t x2516 = INT32_MIN;

    t44 = ((x2513>>x2514)>(x2515>x2516));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x2533 = UINT32_MAX;
	static int32_t x2535 = -1;

    t45 = ((x2533>>x2534)>(x2535>x2536));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x2541 = INT64_MAX;
	uint16_t x2542 = 12U;
	int16_t x2543 = INT16_MAX;
	static volatile int8_t x2544 = INT8_MIN;

    t46 = ((x2541>>x2542)>(x2543>x2544));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x2609 = UINT32_MAX;
	int8_t x2610 = 1;

    t47 = ((x2609>>x2610)>(x2611>x2612));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x2613 = 4082807744202494472LLU;
	uint8_t x2614 = 15U;
	int16_t x2615 = -1270;
	static int16_t x2616 = -1;
	static volatile int32_t t48 = 607916;

    t48 = ((x2613>>x2614)>(x2615>x2616));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x2621 = INT32_MAX;
	uint8_t x2622 = 16U;
	static int32_t x2623 = INT32_MIN;
	uint32_t x2624 = 14474U;
	int32_t t49 = -39863419;

    t49 = ((x2621>>x2622)>(x2623>x2624));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x2625 = 0U;
	uint8_t x2626 = 18U;
	int16_t x2627 = -1;
	int64_t x2628 = -1LL;
	int32_t t50 = -659018233;

    t50 = ((x2625>>x2626)>(x2627>x2628));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x2689 = 645914367970540LLU;
	volatile uint8_t x2690 = 52U;
	uint8_t x2691 = UINT8_MAX;
	int32_t x2692 = INT32_MIN;
	int32_t t51 = -49;

    t51 = ((x2689>>x2690)>(x2691>x2692));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x2805 = 15U;
	int8_t x2806 = 0;
	int64_t x2807 = INT64_MIN;
	volatile int8_t x2808 = -1;
	int32_t t52 = 85898694;

    t52 = ((x2805>>x2806)>(x2807>x2808));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x2821 = 0U;
	int64_t x2822 = 0LL;
	int64_t x2823 = INT64_MIN;
	int32_t t53 = -420339277;

    t53 = ((x2821>>x2822)>(x2823>x2824));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x2905 = 95849;
	int16_t x2906 = 3;
	static int16_t x2907 = INT16_MAX;
	int8_t x2908 = INT8_MIN;

    t54 = ((x2905>>x2906)>(x2907>x2908));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x2917 = UINT32_MAX;
	int32_t x2918 = 1;
	int32_t x2919 = INT32_MIN;
	int16_t x2920 = 90;
	volatile int32_t t55 = 124926258;

    t55 = ((x2917>>x2918)>(x2919>x2920));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x2977 = UINT8_MAX;
	int32_t x2978 = 0;
	int16_t x2979 = INT16_MIN;
	uint16_t x2980 = 48U;

    t56 = ((x2977>>x2978)>(x2979>x2980));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x3037 = 0LLU;
	int64_t x3039 = INT64_MAX;
	int64_t x3040 = 111444411533378LL;
	int32_t t57 = -93543017;

    t57 = ((x3037>>x3038)>(x3039>x3040));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x3081 = 13;
	static uint8_t x3082 = 0U;
	int8_t x3084 = 26;

    t58 = ((x3081>>x3082)>(x3083>x3084));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x3089 = UINT32_MAX;
	int8_t x3091 = -1;
	int32_t x3092 = 4;
	static volatile int32_t t59 = 1;

    t59 = ((x3089>>x3090)>(x3091>x3092));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x3114 = 15U;
	volatile uint64_t x3116 = 986674315561311LLU;
	static volatile int32_t t60 = 58424729;

    t60 = ((x3113>>x3114)>(x3115>x3116));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x3130 = 3U;
	int32_t x3132 = INT32_MAX;
	int32_t t61 = 530810;

    t61 = ((x3129>>x3130)>(x3131>x3132));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x3241 = UINT64_MAX;
	volatile uint8_t x3242 = 7U;
	uint64_t x3243 = UINT64_MAX;
	uint8_t x3244 = 0U;
	volatile int32_t t62 = 66729900;

    t62 = ((x3241>>x3242)>(x3243>x3244));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x3265 = 7U;
	uint8_t x3266 = 24U;
	int8_t x3267 = INT8_MAX;
	int8_t x3268 = -62;
	static volatile int32_t t63 = -4060057;

    t63 = ((x3265>>x3266)>(x3267>x3268));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x3289 = 19;
	int16_t x3290 = 2;
	int32_t x3291 = INT32_MIN;
	int32_t x3292 = 115280;

    t64 = ((x3289>>x3290)>(x3291>x3292));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x3321 = 25484846LL;
	uint8_t x3322 = 45U;
	uint8_t x3323 = UINT8_MAX;
	int32_t t65 = -11;

    t65 = ((x3321>>x3322)>(x3323>x3324));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x3325 = INT8_MAX;
	static int16_t x3326 = 3;
	uint32_t x3327 = UINT32_MAX;
	volatile int32_t t66 = 5240322;

    t66 = ((x3325>>x3326)>(x3327>x3328));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x3405 = 7521U;
	uint8_t x3406 = 1U;
	volatile int64_t x3407 = INT64_MIN;

    t67 = ((x3405>>x3406)>(x3407>x3408));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x3469 = 1;
	int16_t x3470 = 20;
	int64_t x3471 = 3495LL;
	uint16_t x3472 = 9U;

    t68 = ((x3469>>x3470)>(x3471>x3472));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x3569 = 409728640055859968LLU;
	int16_t x3571 = 13646;
	int32_t t69 = 4040;

    t69 = ((x3569>>x3570)>(x3571>x3572));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x3577 = UINT16_MAX;
	uint8_t x3578 = 22U;
	uint8_t x3580 = 0U;
	int32_t t70 = -7272716;

    t70 = ((x3577>>x3578)>(x3579>x3580));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x3617 = UINT64_MAX;
	uint16_t x3618 = 10U;
	uint8_t x3620 = 8U;
	int32_t t71 = -27920356;

    t71 = ((x3617>>x3618)>(x3619>x3620));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x3629 = 31828323995009406LLU;
	int8_t x3630 = 7;
	uint32_t x3631 = 117532579U;
	volatile int32_t x3632 = -1;
	static int32_t t72 = -3;

    t72 = ((x3629>>x3630)>(x3631>x3632));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x3641 = UINT64_MAX;
	static int32_t x3643 = -97;
	int32_t t73 = -5893;

    t73 = ((x3641>>x3642)>(x3643>x3644));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x3650 = 31U;
	static int64_t x3651 = -1LL;
	int32_t t74 = -4913680;

    t74 = ((x3649>>x3650)>(x3651>x3652));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x3745 = INT64_MAX;
	uint64_t x3746 = 17LLU;
	uint16_t x3747 = 3521U;
	uint32_t x3748 = UINT32_MAX;
	int32_t t75 = -646801283;

    t75 = ((x3745>>x3746)>(x3747>x3748));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x3765 = 372735611;
	int8_t x3767 = -1;
	int32_t x3768 = INT32_MAX;
	volatile int32_t t76 = -687375639;

    t76 = ((x3765>>x3766)>(x3767>x3768));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x3801 = 412116149811657LLU;
	uint8_t x3802 = 21U;
	volatile int8_t x3803 = -1;
	uint8_t x3804 = UINT8_MAX;

    t77 = ((x3801>>x3802)>(x3803>x3804));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x3869 = 14U;
	uint8_t x3870 = 28U;
	int8_t x3871 = INT8_MAX;

    t78 = ((x3869>>x3870)>(x3871>x3872));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x3897 = 225U;
	int32_t x3898 = 1;
	volatile int64_t x3899 = INT64_MIN;
	volatile int32_t t79 = 9;

    t79 = ((x3897>>x3898)>(x3899>x3900));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x3933 = UINT64_MAX;
	uint32_t x3934 = 59U;
	int64_t x3935 = INT64_MAX;
	volatile uint8_t x3936 = 10U;
	int32_t t80 = -26955108;

    t80 = ((x3933>>x3934)>(x3935>x3936));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x3941 = 0U;
	static int16_t x3943 = -1;
	uint64_t x3944 = UINT64_MAX;
	volatile int32_t t81 = 253539076;

    t81 = ((x3941>>x3942)>(x3943>x3944));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x3983 = -1;
	static int32_t x3984 = INT32_MIN;
	static int32_t t82 = 1272128;

    t82 = ((x3981>>x3982)>(x3983>x3984));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x3993 = 565;
	volatile uint8_t x3994 = 1U;
	int16_t x3995 = INT16_MIN;
	int32_t t83 = -1;

    t83 = ((x3993>>x3994)>(x3995>x3996));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x4057 = UINT8_MAX;
	int64_t x4059 = 407LL;
	uint16_t x4060 = UINT16_MAX;
	int32_t t84 = 7934367;

    t84 = ((x4057>>x4058)>(x4059>x4060));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x4062 = 0;
	uint8_t x4063 = 35U;
	volatile int32_t x4064 = INT32_MIN;
	static int32_t t85 = 0;

    t85 = ((x4061>>x4062)>(x4063>x4064));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x4173 = 6U;
	volatile int16_t x4175 = -54;
	int8_t x4176 = INT8_MIN;

    t86 = ((x4173>>x4174)>(x4175>x4176));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x4181 = 63759U;
	static uint8_t x4182 = 1U;
	volatile uint64_t x4183 = 428629083166682LLU;
	uint8_t x4184 = 88U;

    t87 = ((x4181>>x4182)>(x4183>x4184));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x4189 = 6053LLU;
	uint8_t x4190 = 0U;
	uint16_t x4192 = 346U;
	int32_t t88 = 1840;

    t88 = ((x4189>>x4190)>(x4191>x4192));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x4301 = 6U;
	uint8_t x4302 = 9U;
	uint8_t x4303 = UINT8_MAX;
	int64_t x4304 = INT64_MIN;
	volatile int32_t t89 = 741;

    t89 = ((x4301>>x4302)>(x4303>x4304));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x4446 = 0U;
	uint64_t x4447 = 714859LLU;
	int32_t x4448 = INT32_MIN;
	static int32_t t90 = 1;

    t90 = ((x4445>>x4446)>(x4447>x4448));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x4477 = 78836646204LL;
	int64_t x4478 = 23LL;
	int16_t x4479 = -1;
	uint32_t x4480 = 123584U;
	int32_t t91 = -107668564;

    t91 = ((x4477>>x4478)>(x4479>x4480));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x4537 = UINT16_MAX;
	int64_t x4538 = 1LL;
	int64_t x4539 = -3736LL;
	static volatile uint16_t x4540 = 147U;

    t92 = ((x4537>>x4538)>(x4539>x4540));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x4621 = 9LL;
	static uint16_t x4622 = 6U;
	int16_t x4623 = INT16_MIN;
	volatile int32_t t93 = -428095217;

    t93 = ((x4621>>x4622)>(x4623>x4624));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x4649 = 87892825U;
	volatile int8_t x4651 = -1;
	static volatile uint8_t x4652 = 13U;

    t94 = ((x4649>>x4650)>(x4651>x4652));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x4717 = INT64_MAX;
	uint8_t x4718 = 28U;
	int64_t x4719 = INT64_MIN;
	int16_t x4720 = -1;
	static int32_t t95 = -1359291;

    t95 = ((x4717>>x4718)>(x4719>x4720));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x4777 = 44U;
	volatile uint8_t x4778 = 0U;
	int8_t x4779 = 0;
	static volatile int32_t t96 = 232;

    t96 = ((x4777>>x4778)>(x4779>x4780));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x4809 = 178276907806LLU;
	int8_t x4810 = 1;
	uint64_t x4811 = 6988702853385LLU;
	int16_t x4812 = INT16_MIN;

    t97 = ((x4809>>x4810)>(x4811>x4812));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x4865 = INT64_MAX;
	volatile int32_t x4866 = 0;
	volatile int8_t x4867 = -1;
	static int16_t x4868 = INT16_MIN;
	volatile int32_t t98 = 0;

    t98 = ((x4865>>x4866)>(x4867>x4868));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x4901 = 22U;
	uint8_t x4902 = 9U;
	int8_t x4903 = -1;
	int32_t t99 = 8746863;

    t99 = ((x4901>>x4902)>(x4903>x4904));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x4937 = UINT16_MAX;
	static volatile uint8_t x4939 = UINT8_MAX;
	uint8_t x4940 = UINT8_MAX;
	volatile int32_t t100 = -1215824;

    t100 = ((x4937>>x4938)>(x4939>x4940));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x4981 = INT16_MAX;
	static int16_t x4982 = 1;
	int32_t x4983 = INT32_MIN;
	int16_t x4984 = 1;
	int32_t t101 = 1016;

    t101 = ((x4981>>x4982)>(x4983>x4984));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x5013 = 2U;
	uint64_t x5015 = 1468380888205LLU;
	volatile int32_t t102 = -777158;

    t102 = ((x5013>>x5014)>(x5015>x5016));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x5078 = 2;
	int8_t x5079 = INT8_MIN;
	volatile int32_t t103 = -32881625;

    t103 = ((x5077>>x5078)>(x5079>x5080));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x5105 = INT8_MAX;
	uint16_t x5106 = 0U;
	int64_t x5107 = INT64_MIN;
	static volatile int8_t x5108 = -3;
	volatile int32_t t104 = 1894478;

    t104 = ((x5105>>x5106)>(x5107>x5108));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x5110 = 4;
	int64_t x5111 = 552607091912595213LL;
	static int32_t t105 = -20321482;

    t105 = ((x5109>>x5110)>(x5111>x5112));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x5325 = UINT8_MAX;
	static uint16_t x5326 = 11U;
	static int8_t x5327 = INT8_MAX;
	int16_t x5328 = 1;
	int32_t t106 = -119;

    t106 = ((x5325>>x5326)>(x5327>x5328));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x5425 = INT8_MAX;
	uint64_t x5427 = 242903085LLU;
	int64_t x5428 = -1LL;
	static int32_t t107 = -26964;

    t107 = ((x5425>>x5426)>(x5427>x5428));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x5489 = UINT8_MAX;
	uint8_t x5490 = 1U;
	uint32_t x5491 = UINT32_MAX;
	uint32_t x5492 = UINT32_MAX;
	int32_t t108 = -1;

    t108 = ((x5489>>x5490)>(x5491>x5492));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x5545 = 34;
	int8_t x5546 = 11;
	uint64_t x5547 = UINT64_MAX;
	int32_t t109 = -140;

    t109 = ((x5545>>x5546)>(x5547>x5548));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x5613 = UINT64_MAX;
	uint8_t x5614 = 25U;
	uint16_t x5615 = 20117U;
	uint64_t x5616 = 10944273901759416LLU;
	volatile int32_t t110 = -64689754;

    t110 = ((x5613>>x5614)>(x5615>x5616));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x5681 = 49U;
	static int32_t x5682 = 5;
	uint32_t x5683 = UINT32_MAX;
	volatile int32_t x5684 = INT32_MIN;
	volatile int32_t t111 = -31346313;

    t111 = ((x5681>>x5682)>(x5683>x5684));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x5689 = 15;
	int8_t x5690 = 3;
	int32_t x5691 = INT32_MAX;
	int64_t x5692 = 1LL;
	int32_t t112 = -231653;

    t112 = ((x5689>>x5690)>(x5691>x5692));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x5730 = 17;
	volatile int32_t x5732 = INT32_MIN;

    t113 = ((x5729>>x5730)>(x5731>x5732));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x5765 = 8391478;
	volatile int32_t x5767 = INT32_MIN;
	int16_t x5768 = -1;
	volatile int32_t t114 = -730358732;

    t114 = ((x5765>>x5766)>(x5767>x5768));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x5773 = 16793173784LL;
	uint8_t x5774 = 1U;
	volatile int32_t t115 = -12;

    t115 = ((x5773>>x5774)>(x5775>x5776));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x5793 = 7749;
	static int32_t x5794 = 0;
	int32_t x5795 = INT32_MAX;
	volatile int64_t x5796 = INT64_MIN;

    t116 = ((x5793>>x5794)>(x5795>x5796));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x5809 = 4805894347868777LL;
	static uint16_t x5811 = UINT16_MAX;
	static int64_t x5812 = INT64_MIN;
	int32_t t117 = -190322312;

    t117 = ((x5809>>x5810)>(x5811>x5812));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x5818 = 2;

    t118 = ((x5817>>x5818)>(x5819>x5820));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x6001 = 0LLU;
	int8_t x6002 = 35;
	static int16_t x6003 = -1;
	int64_t x6004 = -1LL;

    t119 = ((x6001>>x6002)>(x6003>x6004));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x6011 = INT8_MIN;
	static volatile uint16_t x6012 = 3U;
	volatile int32_t t120 = -1657093;

    t120 = ((x6009>>x6010)>(x6011>x6012));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x6017 = 882;
	int8_t x6018 = 15;
	volatile int8_t x6019 = INT8_MIN;
	volatile uint32_t x6020 = 7413523U;
	static int32_t t121 = -194315704;

    t121 = ((x6017>>x6018)>(x6019>x6020));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x6025 = 1U;
	uint8_t x6026 = 1U;
	int32_t x6027 = INT32_MIN;
	int8_t x6028 = -1;

    t122 = ((x6025>>x6026)>(x6027>x6028));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x6049 = 331U;
	static int8_t x6051 = -3;

    t123 = ((x6049>>x6050)>(x6051>x6052));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x6109 = UINT8_MAX;
	uint16_t x6110 = 3U;
	volatile uint16_t x6111 = 41U;
	int64_t x6112 = 1511454LL;
	volatile int32_t t124 = -48;

    t124 = ((x6109>>x6110)>(x6111>x6112));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x6217 = 326302U;
	uint16_t x6220 = UINT16_MAX;
	static volatile int32_t t125 = -7014183;

    t125 = ((x6217>>x6218)>(x6219>x6220));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x6237 = UINT8_MAX;
	uint8_t x6238 = 4U;
	uint8_t x6239 = UINT8_MAX;
	int64_t x6240 = 212366LL;
	volatile int32_t t126 = 0;

    t126 = ((x6237>>x6238)>(x6239>x6240));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x6250 = 18U;
	uint32_t x6251 = UINT32_MAX;
	uint64_t x6252 = 886LLU;
	int32_t t127 = -1;

    t127 = ((x6249>>x6250)>(x6251>x6252));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x6281 = INT16_MAX;
	static int16_t x6282 = 0;
	uint8_t x6283 = UINT8_MAX;
	int32_t x6284 = INT32_MIN;
	int32_t t128 = 10;

    t128 = ((x6281>>x6282)>(x6283>x6284));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x6321 = INT16_MAX;
	static uint8_t x6322 = 1U;
	uint32_t x6323 = UINT32_MAX;
	int16_t x6324 = 4567;

    t129 = ((x6321>>x6322)>(x6323>x6324));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x6337 = 3;
	volatile uint8_t x6338 = 0U;
	volatile int32_t t130 = -1;

    t130 = ((x6337>>x6338)>(x6339>x6340));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x6401 = 95U;
	static uint32_t x6402 = 15U;
	int16_t x6403 = INT16_MIN;

    t131 = ((x6401>>x6402)>(x6403>x6404));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x6410 = 41;
	volatile int64_t x6411 = -163754LL;
	static volatile int64_t x6412 = -1LL;
	static volatile int32_t t132 = 813;

    t132 = ((x6409>>x6410)>(x6411>x6412));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x6426 = 17;
	int8_t x6427 = INT8_MAX;
	int32_t t133 = 1;

    t133 = ((x6425>>x6426)>(x6427>x6428));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x6437 = 91730;
	uint64_t x6438 = 8LLU;
	int32_t x6440 = -1;
	static int32_t t134 = -7885381;

    t134 = ((x6437>>x6438)>(x6439>x6440));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x6493 = 3U;
	static volatile uint8_t x6494 = 1U;
	int64_t x6495 = INT64_MIN;
	volatile int32_t t135 = 45;

    t135 = ((x6493>>x6494)>(x6495>x6496));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x6513 = 16106LLU;
	volatile int64_t x6515 = -1048516089473LL;
	int16_t x6516 = INT16_MIN;
	static volatile int32_t t136 = 43472626;

    t136 = ((x6513>>x6514)>(x6515>x6516));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x6569 = 154U;
	int8_t x6571 = 41;
	int32_t t137 = -37;

    t137 = ((x6569>>x6570)>(x6571>x6572));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x6585 = INT32_MAX;
	volatile uint8_t x6586 = 6U;
	static int64_t x6587 = INT64_MAX;
	static uint32_t x6588 = 469375327U;

    t138 = ((x6585>>x6586)>(x6587>x6588));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x6625 = UINT32_MAX;
	volatile int16_t x6626 = 1;
	uint64_t x6627 = 357559674883LLU;
	uint32_t x6628 = 5696507U;

    t139 = ((x6625>>x6626)>(x6627>x6628));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x6641 = 3094302U;
	static volatile uint16_t x6642 = 30U;
	uint8_t x6644 = 10U;
	static int32_t t140 = -3214748;

    t140 = ((x6641>>x6642)>(x6643>x6644));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x6657 = UINT16_MAX;
	int8_t x6658 = 12;
	int8_t x6659 = INT8_MIN;
	int16_t x6660 = -1;

    t141 = ((x6657>>x6658)>(x6659>x6660));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x6713 = INT32_MAX;
	volatile uint16_t x6715 = UINT16_MAX;
	static volatile int32_t t142 = 191251107;

    t142 = ((x6713>>x6714)>(x6715>x6716));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x6885 = 2U;
	static uint16_t x6886 = 6U;
	volatile int8_t x6888 = INT8_MAX;
	int32_t t143 = -24601;

    t143 = ((x6885>>x6886)>(x6887>x6888));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x6945 = INT64_MAX;
	uint32_t x6946 = 0U;
	int32_t x6947 = INT32_MAX;
	int32_t x6948 = INT32_MIN;
	int32_t t144 = 5740;

    t144 = ((x6945>>x6946)>(x6947>x6948));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x6977 = 69U;
	int64_t x6979 = INT64_MIN;
	int16_t x6980 = -1;
	volatile int32_t t145 = -1400907;

    t145 = ((x6977>>x6978)>(x6979>x6980));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x7027 = -1LL;
	int8_t x7028 = INT8_MIN;
	int32_t t146 = 6345;

    t146 = ((x7025>>x7026)>(x7027>x7028));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x7141 = 3981497802332616LLU;
	int8_t x7142 = 1;
	int16_t x7144 = 21;
	static volatile int32_t t147 = 1405711;

    t147 = ((x7141>>x7142)>(x7143>x7144));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x7145 = INT32_MAX;
	volatile uint8_t x7146 = 19U;
	static int8_t x7147 = INT8_MIN;
	volatile int8_t x7148 = 1;
	int32_t t148 = -989;

    t148 = ((x7145>>x7146)>(x7147>x7148));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x7166 = 2U;
	volatile int64_t x7167 = INT64_MAX;
	volatile int32_t t149 = -294269774;

    t149 = ((x7165>>x7166)>(x7167>x7168));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x7185 = 2LL;
	int8_t x7186 = 51;
	volatile uint64_t x7187 = UINT64_MAX;
	int8_t x7188 = INT8_MAX;
	int32_t t150 = 847;

    t150 = ((x7185>>x7186)>(x7187>x7188));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x7205 = 1671274450327626LLU;
	uint16_t x7206 = 30U;
	uint8_t x7207 = 21U;
	uint16_t x7208 = UINT16_MAX;

    t151 = ((x7205>>x7206)>(x7207>x7208));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x7253 = UINT64_MAX;
	uint16_t x7254 = 4U;
	static uint64_t x7255 = 14770880759866033LLU;
	uint8_t x7256 = 5U;
	static int32_t t152 = 463620;

    t152 = ((x7253>>x7254)>(x7255>x7256));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x7277 = INT32_MAX;
	uint8_t x7278 = 23U;
	uint64_t x7279 = 29697828083078396LLU;
	uint32_t x7280 = 2521U;
	int32_t t153 = -155;

    t153 = ((x7277>>x7278)>(x7279>x7280));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x7285 = 3534;
	uint8_t x7286 = 31U;
	volatile int16_t x7287 = -1;
	uint64_t x7288 = 35380557108LLU;
	volatile int32_t t154 = 4671;

    t154 = ((x7285>>x7286)>(x7287>x7288));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x7425 = 0U;
	uint8_t x7426 = 7U;
	uint8_t x7427 = 62U;
	uint16_t x7428 = 2833U;
	static int32_t t155 = -811787008;

    t155 = ((x7425>>x7426)>(x7427>x7428));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x7442 = 20U;
	uint64_t x7443 = UINT64_MAX;
	volatile int32_t t156 = -37925117;

    t156 = ((x7441>>x7442)>(x7443>x7444));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x7493 = UINT8_MAX;
	int8_t x7494 = 3;
	volatile int64_t x7496 = -1LL;
	static int32_t t157 = 62155745;

    t157 = ((x7493>>x7494)>(x7495>x7496));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x7505 = 0;
	int8_t x7506 = 1;
	static int8_t x7507 = -1;
	uint8_t x7508 = 1U;
	int32_t t158 = 3039;

    t158 = ((x7505>>x7506)>(x7507>x7508));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x7681 = 37323LLU;
	volatile int16_t x7682 = 0;
	int16_t x7684 = INT16_MIN;
	volatile int32_t t159 = -1;

    t159 = ((x7681>>x7682)>(x7683>x7684));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x7817 = 0;
	static uint64_t x7819 = 1631119918662787LLU;
	int16_t x7820 = INT16_MAX;
	volatile int32_t t160 = -510210431;

    t160 = ((x7817>>x7818)>(x7819>x7820));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x7825 = UINT64_MAX;
	volatile uint8_t x7826 = 18U;
	static volatile int8_t x7827 = 1;
	static int16_t x7828 = 0;
	volatile int32_t t161 = -90894;

    t161 = ((x7825>>x7826)>(x7827>x7828));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x7869 = INT8_MAX;
	volatile int8_t x7870 = 0;
	static int32_t x7871 = INT32_MAX;
	int8_t x7872 = INT8_MIN;
	static int32_t t162 = -799;

    t162 = ((x7869>>x7870)>(x7871>x7872));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x7955 = 5;
	uint32_t x7956 = 219561641U;
	volatile int32_t t163 = 216093180;

    t163 = ((x7953>>x7954)>(x7955>x7956));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x8033 = UINT8_MAX;
	uint8_t x8034 = 0U;
	static uint32_t x8035 = UINT32_MAX;
	static int32_t t164 = -30;

    t164 = ((x8033>>x8034)>(x8035>x8036));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x8049 = 10734;
	uint32_t x8050 = 13U;
	int16_t x8052 = -1;
	volatile int32_t t165 = 0;

    t165 = ((x8049>>x8050)>(x8051>x8052));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x8066 = 2U;
	uint16_t x8067 = UINT16_MAX;
	static volatile uint8_t x8068 = 0U;
	static int32_t t166 = 49;

    t166 = ((x8065>>x8066)>(x8067>x8068));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x8109 = INT16_MAX;
	uint16_t x8110 = 1U;
	uint16_t x8112 = UINT16_MAX;
	int32_t t167 = 780425;

    t167 = ((x8109>>x8110)>(x8111>x8112));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x8137 = 10U;
	int8_t x8139 = 0;
	int8_t x8140 = -1;
	static int32_t t168 = -378;

    t168 = ((x8137>>x8138)>(x8139>x8140));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x8141 = INT64_MAX;
	uint8_t x8142 = 12U;
	uint32_t x8143 = 187U;
	static volatile int32_t t169 = 52;

    t169 = ((x8141>>x8142)>(x8143>x8144));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x8301 = 72U;
	uint32_t x8302 = 1U;
	int64_t x8303 = INT64_MAX;
	int32_t x8304 = INT32_MIN;
	volatile int32_t t170 = -10416908;

    t170 = ((x8301>>x8302)>(x8303>x8304));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x8337 = UINT8_MAX;
	uint8_t x8338 = 0U;
	int64_t x8339 = -1LL;
	int16_t x8340 = 14;

    t171 = ((x8337>>x8338)>(x8339>x8340));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x8381 = 0U;
	volatile int8_t x8384 = INT8_MIN;

    t172 = ((x8381>>x8382)>(x8383>x8384));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x8433 = INT8_MAX;
	int8_t x8434 = 1;
	uint16_t x8435 = 24U;
	int32_t t173 = -1999759;

    t173 = ((x8433>>x8434)>(x8435>x8436));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x8513 = INT32_MAX;
	static uint16_t x8514 = 21U;
	static int16_t x8515 = INT16_MIN;
	int32_t t174 = -643;

    t174 = ((x8513>>x8514)>(x8515>x8516));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x8653 = 14U;
	int8_t x8655 = INT8_MIN;
	volatile uint8_t x8656 = 7U;
	int32_t t175 = 28025;

    t175 = ((x8653>>x8654)>(x8655>x8656));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x8657 = UINT64_MAX;
	volatile int8_t x8658 = 1;
	static volatile int16_t x8659 = 0;
	int64_t x8660 = INT64_MAX;

    t176 = ((x8657>>x8658)>(x8659>x8660));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x8717 = 6U;
	static int32_t x8719 = -16019;
	int64_t x8720 = INT64_MIN;

    t177 = ((x8717>>x8718)>(x8719>x8720));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x8845 = 82U;
	int8_t x8846 = 1;
	int64_t x8847 = INT64_MIN;
	int64_t x8848 = -105176LL;
	int32_t t178 = 128;

    t178 = ((x8845>>x8846)>(x8847>x8848));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x8865 = 0U;
	static uint8_t x8866 = 19U;
	volatile int16_t x8867 = INT16_MAX;
	volatile int32_t t179 = -1;

    t179 = ((x8865>>x8866)>(x8867>x8868));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x8881 = INT8_MAX;
	uint16_t x8882 = 15U;
	uint8_t x8883 = UINT8_MAX;
	uint16_t x8884 = 669U;
	static int32_t t180 = -208572952;

    t180 = ((x8881>>x8882)>(x8883>x8884));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x8897 = UINT64_MAX;
	volatile int8_t x8898 = 13;
	volatile int16_t x8899 = -27;
	static int16_t x8900 = -1;
	int32_t t181 = -3049;

    t181 = ((x8897>>x8898)>(x8899>x8900));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x8970 = 1U;
	int8_t x8971 = 41;
	int16_t x8972 = INT16_MIN;
	int32_t t182 = -334680229;

    t182 = ((x8969>>x8970)>(x8971>x8972));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x9134 = 14U;
	volatile int16_t x9136 = INT16_MIN;
	volatile int32_t t183 = 1;

    t183 = ((x9133>>x9134)>(x9135>x9136));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x9249 = 29U;
	uint8_t x9250 = 0U;
	static volatile uint8_t x9252 = UINT8_MAX;
	int32_t t184 = 498706;

    t184 = ((x9249>>x9250)>(x9251>x9252));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x9373 = 3764U;
	static int8_t x9374 = 2;
	volatile int64_t x9375 = -1LL;
	static int32_t x9376 = 21024;
	volatile int32_t t185 = 3828;

    t185 = ((x9373>>x9374)>(x9375>x9376));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x9381 = 10610;
	volatile uint32_t x9382 = 5U;
	static volatile int32_t x9384 = 54627;
	int32_t t186 = -17;

    t186 = ((x9381>>x9382)>(x9383>x9384));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x9410 = 0U;
	int16_t x9411 = INT16_MIN;
	uint16_t x9412 = 7U;
	static int32_t t187 = -2298;

    t187 = ((x9409>>x9410)>(x9411>x9412));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x9538 = 5U;
	int16_t x9539 = INT16_MIN;
	int8_t x9540 = -1;
	volatile int32_t t188 = 9506980;

    t188 = ((x9537>>x9538)>(x9539>x9540));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x9582 = 2U;
	int64_t x9583 = INT64_MIN;

    t189 = ((x9581>>x9582)>(x9583>x9584));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x9629 = 1336031272U;
	static volatile int8_t x9630 = 1;
	static uint16_t x9631 = 866U;
	int32_t t190 = -254116;

    t190 = ((x9629>>x9630)>(x9631>x9632));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x9645 = 5;
	static int8_t x9646 = 2;
	static uint16_t x9647 = 6293U;
	int64_t x9648 = INT64_MIN;
	int32_t t191 = 9791776;

    t191 = ((x9645>>x9646)>(x9647>x9648));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x9805 = UINT64_MAX;
	uint8_t x9806 = 3U;
	int8_t x9807 = -1;
	volatile int8_t x9808 = -18;
	volatile int32_t t192 = -129728;

    t192 = ((x9805>>x9806)>(x9807>x9808));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x9809 = 3404;
	uint8_t x9810 = 0U;
	uint8_t x9812 = 85U;
	volatile int32_t t193 = -19265450;

    t193 = ((x9809>>x9810)>(x9811>x9812));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x9845 = 223LLU;
	uint8_t x9846 = 1U;
	uint64_t x9847 = 3LLU;
	int32_t x9848 = INT32_MIN;
	volatile int32_t t194 = -671678785;

    t194 = ((x9845>>x9846)>(x9847>x9848));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x9997 = 0U;
	volatile int32_t x9998 = 0;
	static int16_t x9999 = INT16_MAX;
	volatile uint8_t x10000 = UINT8_MAX;
	static int32_t t195 = 159051;

    t195 = ((x9997>>x9998)>(x9999>x10000));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x10005 = INT32_MAX;
	static volatile uint8_t x10006 = 4U;
	uint8_t x10007 = UINT8_MAX;
	volatile int32_t t196 = -82;

    t196 = ((x10005>>x10006)>(x10007>x10008));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x10025 = 116240425201LL;
	static uint8_t x10026 = 56U;
	int32_t x10027 = INT32_MIN;
	uint64_t x10028 = 1983906853208488568LLU;

    t197 = ((x10025>>x10026)>(x10027>x10028));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x10161 = 496061U;
	uint16_t x10162 = 0U;
	static int64_t x10163 = -1LL;
	volatile uint16_t x10164 = 1310U;
	static volatile int32_t t198 = -200151;

    t198 = ((x10161>>x10162)>(x10163>x10164));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x10229 = UINT64_MAX;
	volatile uint16_t x10230 = 60U;
	int16_t x10231 = INT16_MIN;
	uint64_t x10232 = 1374LLU;
	static volatile int32_t t199 = 1;

    t199 = ((x10229>>x10230)>(x10231>x10232));

    if (t199 != 1) { NG(); } else { ; }
	
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


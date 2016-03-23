
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

int32_t x10 = -1;
static int32_t x17 = INT32_MAX;
volatile int8_t x18 = -1;
volatile uint64_t x39 = UINT64_MAX;
int8_t x45 = INT8_MAX;
uint64_t x68 = 156560195424941LLU;
uint8_t x73 = 11U;
static int32_t x74 = INT32_MIN;
volatile int64_t x93 = 3334020688286385026LL;
volatile int16_t x96 = -1;
int64_t x99 = INT64_MIN;
static int64_t x106 = INT64_MIN;
int64_t x107 = -48967099277LL;
int8_t x117 = INT8_MIN;
int64_t x119 = INT64_MIN;
volatile int32_t x122 = INT32_MIN;
int32_t x139 = 53105027;
int16_t x147 = INT16_MIN;
static uint8_t x148 = 1U;
volatile int32_t t19 = -967;
int16_t x149 = -60;
int8_t x158 = INT8_MAX;
int64_t t23 = -111515630890LL;
static int64_t x183 = 97691248587LL;
int16_t x201 = 6681;
int32_t t26 = 12374;
volatile uint32_t x236 = 473944U;
static volatile uint32_t t31 = 1073732U;
volatile int32_t t32 = 0;
static int8_t x268 = INT8_MIN;
volatile int64_t t33 = -13739682LL;
int8_t x273 = 30;
int8_t x274 = 19;
int8_t x284 = -1;
int64_t x286 = INT64_MIN;
uint64_t x287 = 2091321036522940426LLU;
static int8_t x290 = INT8_MIN;
static uint32_t x306 = 45U;
volatile uint64_t t38 = 9721274100019527LLU;
volatile int64_t x311 = INT64_MIN;
uint32_t t43 = 25U;
volatile int64_t t45 = 393459LL;
int32_t x351 = INT32_MIN;
int32_t x367 = INT32_MIN;
volatile uint32_t x373 = UINT32_MAX;
int64_t x377 = -1LL;
int16_t x379 = INT16_MIN;
int32_t x392 = INT32_MIN;
int64_t x411 = INT64_MAX;
volatile int64_t x425 = INT64_MAX;
volatile int16_t x453 = INT16_MIN;
uint16_t x455 = 9788U;
uint8_t x464 = 78U;
int64_t x467 = -759381084133LL;
volatile int64_t t63 = -100LL;
int32_t x483 = -1;
int8_t x484 = -1;
uint64_t t65 = 1169555606LLU;
static int16_t x498 = -875;
static uint8_t x505 = UINT8_MAX;
int16_t x506 = INT16_MAX;
volatile int32_t t69 = -23292445;
static volatile int64_t x513 = -1LL;
static uint32_t x515 = UINT32_MAX;
static uint32_t t70 = 2784940U;
int64_t x525 = -13LL;
int32_t x527 = INT32_MIN;
int32_t x542 = INT32_MAX;
int32_t x544 = -1;
static volatile int32_t t73 = -31868;
volatile int32_t x570 = INT32_MIN;
volatile int64_t x575 = 69230844LL;
int32_t x576 = -758;
int16_t x598 = 39;
int32_t x599 = INT32_MAX;
volatile int32_t t79 = 1;
uint32_t x631 = UINT32_MAX;
static int64_t x638 = -1LL;
int32_t x639 = INT32_MAX;
volatile uint64_t x653 = 10LLU;
uint32_t x656 = 373U;
uint64_t t83 = 4LLU;
volatile int64_t x665 = -294LL;
volatile int16_t x673 = 648;
int64_t x675 = 4002078LL;
volatile int64_t t86 = 12LL;
static int8_t x708 = 1;
uint32_t x724 = 23789U;
uint64_t t94 = 28718662181LLU;
int16_t x726 = -1;
int32_t x733 = -75;
static int64_t t97 = 710017307LL;
uint64_t x751 = UINT64_MAX;
static uint64_t t98 = 984418371073505684LLU;
int16_t x773 = INT16_MAX;
int8_t x776 = INT8_MAX;
static int8_t x805 = -14;
int64_t x807 = INT64_MAX;
int32_t x809 = INT32_MIN;
uint16_t x822 = 1315U;
static int16_t x833 = -1;
static int32_t x835 = -1348655;
volatile int32_t x849 = INT32_MIN;
volatile uint64_t x850 = 8447508852LLU;
uint8_t x860 = 4U;
uint64_t x905 = 985919LLU;
volatile uint64_t x906 = UINT64_MAX;
volatile int8_t x914 = INT8_MIN;
static uint64_t x928 = 27LLU;
static int16_t x932 = INT16_MAX;
volatile int64_t t121 = -2313LL;
static int16_t x936 = INT16_MIN;
int8_t x942 = INT8_MAX;
static uint16_t x945 = 12U;
static int32_t x946 = -93175712;
int16_t x947 = INT16_MAX;
int32_t t125 = 1;
int64_t x951 = 50035LL;
volatile int64_t t126 = 414259945607144LL;
volatile uint64_t t129 = 7298400LLU;
volatile int64_t x976 = -1LL;
volatile int64_t t130 = -8457866184544861LL;
int32_t t133 = 1862595;
int32_t x999 = INT32_MAX;
int64_t x1008 = -32222816162986270LL;
int32_t x1018 = 1;
static uint8_t x1020 = 58U;
int64_t t137 = -432LL;
static uint8_t x1030 = 32U;
static volatile int32_t x1032 = -1;
uint16_t x1063 = UINT16_MAX;
volatile int32_t x1067 = 429827;
volatile int32_t t142 = -287147590;
static uint8_t x1084 = UINT8_MAX;
int32_t t144 = -510;
volatile int64_t t145 = 3757010645413771376LL;
uint32_t x1112 = UINT32_MAX;
static int8_t x1120 = INT8_MIN;
int16_t x1156 = 1;
int8_t x1157 = INT8_MAX;
int64_t x1173 = INT64_MIN;
uint8_t x1200 = 5U;
static uint32_t t159 = 106350585U;
static int32_t x1215 = 119559;
static uint16_t x1217 = 6753U;
static int64_t x1218 = INT64_MIN;
int8_t x1231 = INT8_MIN;
uint8_t x1232 = 1U;
static volatile int32_t t163 = 114;
int32_t t164 = 260790609;
static uint32_t t165 = 2670U;
static volatile int16_t x1261 = INT16_MAX;
int64_t x1263 = -1LL;
volatile int32_t t168 = -13277119;
int8_t x1270 = -1;
volatile uint8_t x1278 = 1U;
static int64_t t171 = 115LL;
int32_t x1288 = -1;
int16_t x1294 = INT16_MIN;
int16_t x1355 = -1;
int64_t x1383 = INT64_MAX;
static volatile int64_t x1387 = -4638193LL;
volatile int64_t t179 = 807LL;
uint32_t x1393 = UINT32_MAX;
int64_t x1394 = -1LL;
int64_t x1405 = 13963LL;
int8_t x1407 = -18;
int64_t x1427 = INT64_MAX;
int8_t x1430 = -30;
int16_t x1440 = 1699;
int32_t t185 = -138499061;
volatile int16_t x1444 = -1;
volatile uint64_t x1447 = 1393LLU;
uint8_t x1451 = 46U;
int8_t x1452 = -8;
volatile uint32_t x1464 = 13230U;
int8_t x1467 = INT8_MIN;
static uint16_t x1468 = 88U;
int16_t x1476 = INT16_MIN;
int32_t x1487 = 350;
int32_t t194 = -893487104;
uint64_t x1506 = UINT64_MAX;
uint8_t x1510 = 30U;
uint64_t x1542 = 40663140708645LLU;


void f0(void) {
    	int8_t x9 = INT8_MAX;
	static int32_t x11 = INT32_MIN;
	volatile int8_t x12 = 6;
	volatile int32_t t0 = 938579528;

    t0 = ((x9!=x10)/(x11/x12));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x19 = -1;
	int32_t x20 = -1;
	volatile int32_t t1 = -462926993;

    t1 = ((x17!=x18)/(x19/x20));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int32_t x25 = -3947510;
	int32_t x26 = INT32_MAX;
	int32_t x27 = 1026083;
	uint16_t x28 = 23779U;
	static int32_t t2 = 55049438;

    t2 = ((x25!=x26)/(x27/x28));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x29 = UINT8_MAX;
	static volatile int32_t x30 = INT32_MIN;
	int32_t x31 = -1;
	uint32_t x32 = 206456168U;
	uint32_t t3 = 15377U;

    t3 = ((x29!=x30)/(x31/x32));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x33 = INT16_MIN;
	uint16_t x34 = 188U;
	volatile int64_t x35 = -1LL;
	int64_t x36 = -1LL;
	volatile int64_t t4 = 62832350LL;

    t4 = ((x33!=x34)/(x35/x36));

    if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x37 = INT8_MAX;
	int32_t x38 = -1;
	volatile int32_t x40 = INT32_MAX;
	uint64_t t5 = 324137LLU;

    t5 = ((x37!=x38)/(x39/x40));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x46 = INT8_MIN;
	uint16_t x47 = UINT16_MAX;
	volatile int8_t x48 = -62;
	int32_t t6 = 9550;

    t6 = ((x45!=x46)/(x47/x48));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x53 = 3U;
	int64_t x54 = INT64_MAX;
	volatile uint16_t x55 = UINT16_MAX;
	int16_t x56 = -1;
	static volatile int32_t t7 = 19800407;

    t7 = ((x53!=x54)/(x55/x56));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x65 = -1;
	volatile int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MIN;
	volatile uint64_t t8 = 15654443295593LLU;

    t8 = ((x65!=x66)/(x67/x68));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x69 = 62U;
	uint8_t x70 = 110U;
	uint64_t x71 = UINT64_MAX;
	static int8_t x72 = -15;
	uint64_t t9 = 926744LLU;

    t9 = ((x69!=x70)/(x71/x72));

    if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x75 = -1LL;
	int32_t x76 = -1;
	static volatile int64_t t10 = -469232LL;

    t10 = ((x73!=x74)/(x75/x76));

    if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x94 = UINT8_MAX;
	int32_t x95 = 1304713;
	static int32_t t11 = 82353;

    t11 = ((x93!=x94)/(x95/x96));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x97 = 1957844546LL;
	int8_t x98 = 3;
	static volatile int64_t x100 = INT64_MIN;
	int64_t t12 = 42506325LL;

    t12 = ((x97!=x98)/(x99/x100));

    if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x105 = UINT8_MAX;
	int16_t x108 = INT16_MIN;
	int64_t t13 = -10274455997LL;

    t13 = ((x105!=x106)/(x107/x108));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x118 = UINT32_MAX;
	int64_t x120 = 2763388745562LL;
	int64_t t14 = -4032LL;

    t14 = ((x117!=x118)/(x119/x120));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x121 = 2U;
	volatile int64_t x123 = -3998766496547047152LL;
	uint64_t x124 = 14714450LLU;
	uint64_t t15 = 24389310914LLU;

    t15 = ((x121!=x122)/(x123/x124));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x125 = INT32_MAX;
	int16_t x126 = INT16_MAX;
	static int32_t x127 = INT32_MIN;
	volatile int16_t x128 = -49;
	int32_t t16 = -2952;

    t16 = ((x125!=x126)/(x127/x128));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x133 = -1;
	int16_t x134 = -26;
	static int16_t x135 = -1;
	uint64_t x136 = 268768078652237242LLU;
	uint64_t t17 = 696028LLU;

    t17 = ((x133!=x134)/(x135/x136));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x137 = UINT16_MAX;
	static int16_t x138 = INT16_MAX;
	volatile int16_t x140 = -365;
	volatile int32_t t18 = 42277;

    t18 = ((x137!=x138)/(x139/x140));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x145 = -1;
	int64_t x146 = -1128172837913673226LL;

    t19 = ((x145!=x146)/(x147/x148));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x150 = INT8_MIN;
	volatile int8_t x151 = -1;
	uint64_t x152 = 4792232006LLU;
	uint64_t t20 = 132770LLU;

    t20 = ((x149!=x150)/(x151/x152));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x157 = 526U;
	int8_t x159 = INT8_MIN;
	uint64_t x160 = 40325468559072053LLU;
	static uint64_t t21 = 265LLU;

    t21 = ((x157!=x158)/(x159/x160));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x165 = -261342LL;
	int64_t x166 = INT64_MIN;
	volatile int16_t x167 = INT16_MIN;
	static uint32_t x168 = 2113U;
	uint32_t t22 = 0U;

    t22 = ((x165!=x166)/(x167/x168));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x169 = 0;
	int16_t x170 = -1;
	int64_t x171 = INT64_MIN;
	int32_t x172 = INT32_MAX;

    t23 = ((x169!=x170)/(x171/x172));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x173 = INT64_MAX;
	uint64_t x174 = UINT64_MAX;
	uint64_t x175 = UINT64_MAX;
	uint64_t x176 = UINT64_MAX;
	uint64_t t24 = 10LLU;

    t24 = ((x173!=x174)/(x175/x176));

    if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x181 = -1;
	int16_t x182 = -1;
	volatile int8_t x184 = INT8_MIN;
	int64_t t25 = -1017595805LL;

    t25 = ((x181!=x182)/(x183/x184));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x202 = -1LL;
	int8_t x203 = INT8_MIN;
	volatile int8_t x204 = 1;

    t26 = ((x201!=x202)/(x203/x204));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x209 = 1U;
	int8_t x210 = -3;
	static int16_t x211 = -22;
	int8_t x212 = 12;
	volatile int32_t t27 = 234746;

    t27 = ((x209!=x210)/(x211/x212));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x213 = 7;
	volatile int8_t x214 = INT8_MIN;
	volatile int64_t x215 = INT64_MIN;
	uint8_t x216 = 1U;
	volatile int64_t t28 = -1057428494LL;

    t28 = ((x213!=x214)/(x215/x216));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x217 = -28;
	uint8_t x218 = 0U;
	int64_t x219 = 459128042061860838LL;
	uint16_t x220 = 4387U;
	int64_t t29 = -468499296730398059LL;

    t29 = ((x217!=x218)/(x219/x220));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x221 = INT32_MIN;
	int16_t x222 = 44;
	int64_t x223 = INT64_MAX;
	int64_t x224 = -735683725622LL;
	int64_t t30 = -1867421584370802LL;

    t30 = ((x221!=x222)/(x223/x224));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x233 = -1;
	static int8_t x234 = INT8_MAX;
	volatile int16_t x235 = -1;

    t31 = ((x233!=x234)/(x235/x236));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x253 = -1;
	int32_t x254 = -1;
	int16_t x255 = INT16_MIN;
	int8_t x256 = -2;

    t32 = ((x253!=x254)/(x255/x256));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x265 = 9567;
	uint16_t x266 = UINT16_MAX;
	int64_t x267 = INT64_MIN;

    t33 = ((x265!=x266)/(x267/x268));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint16_t x275 = 4U;
	int8_t x276 = -1;
	static int32_t t34 = 10221584;

    t34 = ((x273!=x274)/(x275/x276));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x281 = INT64_MIN;
	uint16_t x282 = UINT16_MAX;
	static int32_t x283 = -1;
	static volatile int32_t t35 = 10;

    t35 = ((x281!=x282)/(x283/x284));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x285 = -850205;
	static int64_t x288 = 5358694263135263LL;
	volatile uint64_t t36 = 8978820890863931768LLU;

    t36 = ((x285!=x286)/(x287/x288));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x289 = -1;
	int16_t x291 = INT16_MIN;
	static volatile int16_t x292 = INT16_MIN;
	static volatile int32_t t37 = -24;

    t37 = ((x289!=x290)/(x291/x292));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x305 = 1058U;
	static int8_t x307 = INT8_MIN;
	static uint64_t x308 = 3LLU;

    t38 = ((x305!=x306)/(x307/x308));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x309 = -156403224316950LL;
	uint32_t x310 = 2U;
	int8_t x312 = -51;
	volatile int64_t t39 = -547LL;

    t39 = ((x309!=x310)/(x311/x312));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x313 = 208LLU;
	static int32_t x314 = INT32_MIN;
	uint16_t x315 = 2764U;
	int32_t x316 = 2;
	volatile int32_t t40 = -1078;

    t40 = ((x313!=x314)/(x315/x316));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x321 = 34U;
	volatile int32_t x322 = INT32_MIN;
	int64_t x323 = INT64_MIN;
	static volatile int16_t x324 = 112;
	int64_t t41 = -1LL;

    t41 = ((x321!=x322)/(x323/x324));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x329 = UINT32_MAX;
	uint32_t x330 = UINT32_MAX;
	int8_t x331 = -1;
	int32_t x332 = -1;
	static int32_t t42 = 339;

    t42 = ((x329!=x330)/(x331/x332));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x333 = UINT8_MAX;
	static int32_t x334 = INT32_MAX;
	static uint32_t x335 = UINT32_MAX;
	uint16_t x336 = 258U;

    t43 = ((x333!=x334)/(x335/x336));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x337 = -1;
	uint16_t x338 = UINT16_MAX;
	volatile int8_t x339 = INT8_MIN;
	int8_t x340 = INT8_MIN;
	volatile int32_t t44 = 1998;

    t44 = ((x337!=x338)/(x339/x340));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint8_t x341 = UINT8_MAX;
	uint8_t x342 = 0U;
	int64_t x343 = -389931LL;
	int8_t x344 = -1;

    t45 = ((x341!=x342)/(x343/x344));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x345 = -17;
	uint16_t x346 = UINT16_MAX;
	int8_t x347 = INT8_MIN;
	uint64_t x348 = 30LLU;
	volatile uint64_t t46 = 377070LLU;

    t46 = ((x345!=x346)/(x347/x348));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x349 = 2U;
	int16_t x350 = -23;
	static int32_t x352 = INT32_MIN;
	volatile int32_t t47 = 1;

    t47 = ((x349!=x350)/(x351/x352));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x353 = INT16_MIN;
	int64_t x354 = -1LL;
	volatile int32_t x355 = INT32_MIN;
	volatile int32_t x356 = 11;
	int32_t t48 = 432681;

    t48 = ((x353!=x354)/(x355/x356));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x357 = INT16_MIN;
	volatile int32_t x358 = INT32_MAX;
	uint64_t x359 = UINT64_MAX;
	uint8_t x360 = UINT8_MAX;
	volatile uint64_t t49 = 30243282639704612LLU;

    t49 = ((x357!=x358)/(x359/x360));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x365 = 1;
	int8_t x366 = INT8_MIN;
	int64_t x368 = 1LL;
	int64_t t50 = -2145029939793638LL;

    t50 = ((x365!=x366)/(x367/x368));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x374 = -1LL;
	uint64_t x375 = UINT64_MAX;
	uint16_t x376 = UINT16_MAX;
	volatile uint64_t t51 = 30742615LLU;

    t51 = ((x373!=x374)/(x375/x376));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x378 = 83U;
	static volatile int16_t x380 = 1179;
	volatile int32_t t52 = 714;

    t52 = ((x377!=x378)/(x379/x380));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x381 = 11U;
	int8_t x382 = INT8_MAX;
	static volatile int64_t x383 = INT64_MAX;
	int16_t x384 = INT16_MAX;
	int64_t t53 = 454318487760LL;

    t53 = ((x381!=x382)/(x383/x384));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x389 = INT32_MAX;
	int64_t x390 = -1LL;
	int32_t x391 = INT32_MIN;
	volatile int32_t t54 = 14;

    t54 = ((x389!=x390)/(x391/x392));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x401 = UINT32_MAX;
	int8_t x402 = 10;
	int64_t x403 = -33218069741870LL;
	uint16_t x404 = UINT16_MAX;
	volatile int64_t t55 = 409703766121LL;

    t55 = ((x401!=x402)/(x403/x404));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x409 = INT64_MIN;
	uint16_t x410 = 125U;
	int32_t x412 = -373746636;
	int64_t t56 = -3002135LL;

    t56 = ((x409!=x410)/(x411/x412));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x421 = -496;
	volatile int64_t x422 = INT64_MIN;
	uint64_t x423 = UINT64_MAX;
	uint16_t x424 = 521U;
	uint64_t t57 = 0LLU;

    t57 = ((x421!=x422)/(x423/x424));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x426 = 66037U;
	uint32_t x427 = UINT32_MAX;
	uint8_t x428 = UINT8_MAX;
	uint32_t t58 = 750886U;

    t58 = ((x425!=x426)/(x427/x428));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x445 = INT16_MIN;
	uint64_t x446 = 2018LLU;
	uint16_t x447 = UINT16_MAX;
	int8_t x448 = INT8_MIN;
	volatile int32_t t59 = 216;

    t59 = ((x445!=x446)/(x447/x448));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x454 = 4U;
	uint8_t x456 = 81U;
	static int32_t t60 = 44431;

    t60 = ((x453!=x454)/(x455/x456));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x457 = -2678;
	int16_t x458 = -1;
	int32_t x459 = -1;
	int16_t x460 = -1;
	static int32_t t61 = 273336;

    t61 = ((x457!=x458)/(x459/x460));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x461 = INT32_MIN;
	int8_t x462 = INT8_MIN;
	int8_t x463 = INT8_MIN;
	int32_t t62 = 2103;

    t62 = ((x461!=x462)/(x463/x464));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x465 = INT8_MIN;
	static uint16_t x466 = UINT16_MAX;
	uint8_t x468 = 3U;

    t63 = ((x465!=x466)/(x467/x468));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint64_t x481 = 9534893603602LLU;
	uint64_t x482 = UINT64_MAX;
	volatile int32_t t64 = 75768;

    t64 = ((x481!=x482)/(x483/x484));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x489 = UINT64_MAX;
	uint16_t x490 = UINT16_MAX;
	uint64_t x491 = UINT64_MAX;
	uint32_t x492 = 114941392U;

    t65 = ((x489!=x490)/(x491/x492));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x497 = -12;
	volatile int64_t x499 = -1LL;
	int32_t x500 = -1;
	int64_t t66 = 1641057736LL;

    t66 = ((x497!=x498)/(x499/x500));

    if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x501 = UINT64_MAX;
	uint64_t x502 = 27869LLU;
	int16_t x503 = -249;
	uint64_t x504 = 1451254LLU;
	volatile uint64_t t67 = 2080870LLU;

    t67 = ((x501!=x502)/(x503/x504));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x507 = INT64_MIN;
	int32_t x508 = 669856308;
	int64_t t68 = -106836LL;

    t68 = ((x505!=x506)/(x507/x508));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x509 = -2;
	int16_t x510 = -1;
	int16_t x511 = INT16_MAX;
	static uint8_t x512 = UINT8_MAX;

    t69 = ((x509!=x510)/(x511/x512));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x514 = INT32_MIN;
	int8_t x516 = -1;

    t70 = ((x513!=x514)/(x515/x516));

    if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x526 = INT64_MIN;
	uint8_t x528 = 56U;
	volatile int32_t t71 = -626456;

    t71 = ((x525!=x526)/(x527/x528));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x541 = INT8_MAX;
	int8_t x543 = 1;
	static int32_t t72 = -1029225;

    t72 = ((x541!=x542)/(x543/x544));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x553 = 482U;
	volatile int32_t x554 = 9;
	uint8_t x555 = 7U;
	int16_t x556 = 3;

    t73 = ((x553!=x554)/(x555/x556));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x569 = INT8_MAX;
	static int64_t x571 = 61761219669395LL;
	int32_t x572 = INT32_MAX;
	static volatile int64_t t74 = -6855712LL;

    t74 = ((x569!=x570)/(x571/x572));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x573 = 93044120316633885LLU;
	static int16_t x574 = INT16_MIN;
	int64_t t75 = -36106931LL;

    t75 = ((x573!=x574)/(x575/x576));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x581 = INT16_MAX;
	int8_t x582 = INT8_MIN;
	volatile uint16_t x583 = 21U;
	static int8_t x584 = -1;
	int32_t t76 = -1135;

    t76 = ((x581!=x582)/(x583/x584));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x593 = UINT32_MAX;
	int32_t x594 = INT32_MIN;
	int64_t x595 = INT64_MIN;
	uint16_t x596 = UINT16_MAX;
	volatile int64_t t77 = 301LL;

    t77 = ((x593!=x594)/(x595/x596));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x597 = -1;
	uint16_t x600 = 92U;
	volatile int32_t t78 = -114;

    t78 = ((x597!=x598)/(x599/x600));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x609 = INT64_MIN;
	int64_t x610 = -4LL;
	static uint8_t x611 = UINT8_MAX;
	volatile int32_t x612 = 194;

    t79 = ((x609!=x610)/(x611/x612));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x629 = UINT64_MAX;
	uint8_t x630 = UINT8_MAX;
	static volatile int64_t x632 = -1LL;
	static volatile int64_t t80 = 10770045568255671LL;

    t80 = ((x629!=x630)/(x631/x632));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x637 = UINT16_MAX;
	int32_t x640 = INT32_MAX;
	volatile int32_t t81 = 5407;

    t81 = ((x637!=x638)/(x639/x640));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x645 = 0;
	int32_t x646 = -1;
	int32_t x647 = INT32_MIN;
	static int32_t x648 = INT32_MIN;
	static volatile int32_t t82 = 3209185;

    t82 = ((x645!=x646)/(x647/x648));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x654 = 2377U;
	static uint64_t x655 = 2649471LLU;

    t83 = ((x653!=x654)/(x655/x656));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x661 = UINT64_MAX;
	int16_t x662 = INT16_MIN;
	int64_t x663 = INT64_MIN;
	int64_t x664 = INT64_MAX;
	volatile int64_t t84 = 4LL;

    t84 = ((x661!=x662)/(x663/x664));

    if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x666 = 3997149;
	uint16_t x667 = 1258U;
	static uint8_t x668 = 9U;
	volatile int32_t t85 = 31;

    t85 = ((x665!=x666)/(x667/x668));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x674 = INT16_MAX;
	static uint8_t x676 = 20U;

    t86 = ((x673!=x674)/(x675/x676));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x677 = 13U;
	volatile int64_t x678 = INT64_MIN;
	int32_t x679 = 47237086;
	static int8_t x680 = -1;
	int32_t t87 = 500907775;

    t87 = ((x677!=x678)/(x679/x680));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x685 = 1207;
	volatile uint8_t x686 = 14U;
	int32_t x687 = -6138;
	int64_t x688 = 1208LL;
	int64_t t88 = 247LL;

    t88 = ((x685!=x686)/(x687/x688));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x693 = 6452U;
	int16_t x694 = -6;
	int8_t x695 = INT8_MIN;
	int8_t x696 = INT8_MIN;
	volatile int32_t t89 = -3063;

    t89 = ((x693!=x694)/(x695/x696));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x697 = -1LL;
	int8_t x698 = 31;
	int32_t x699 = INT32_MIN;
	static int16_t x700 = 6617;
	volatile int32_t t90 = -14574;

    t90 = ((x697!=x698)/(x699/x700));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x705 = INT16_MAX;
	static volatile uint8_t x706 = 2U;
	volatile int64_t x707 = INT64_MIN;
	volatile int64_t t91 = 300987933LL;

    t91 = ((x705!=x706)/(x707/x708));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x713 = 0;
	int64_t x714 = INT64_MAX;
	volatile int32_t x715 = 198038;
	uint8_t x716 = UINT8_MAX;
	int32_t t92 = -19656;

    t92 = ((x713!=x714)/(x715/x716));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x717 = 1U;
	uint16_t x718 = UINT16_MAX;
	uint16_t x719 = 924U;
	int8_t x720 = INT8_MIN;
	volatile int32_t t93 = 0;

    t93 = ((x717!=x718)/(x719/x720));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x721 = UINT64_MAX;
	static int32_t x722 = -338;
	static uint64_t x723 = 20292360189LLU;

    t94 = ((x721!=x722)/(x723/x724));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x725 = 21;
	int64_t x727 = -1LL;
	int16_t x728 = -1;
	static volatile int64_t t95 = 259199099829913560LL;

    t95 = ((x725!=x726)/(x727/x728));

    if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x734 = -62;
	int64_t x735 = INT64_MIN;
	uint32_t x736 = UINT32_MAX;
	int64_t t96 = -3LL;

    t96 = ((x733!=x734)/(x735/x736));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x737 = UINT8_MAX;
	int16_t x738 = INT16_MIN;
	static int64_t x739 = -18073145013584709LL;
	uint32_t x740 = 217U;

    t97 = ((x737!=x738)/(x739/x740));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x749 = UINT32_MAX;
	static int16_t x750 = -1855;
	static volatile uint32_t x752 = 241490757U;

    t98 = ((x749!=x750)/(x751/x752));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x761 = INT32_MIN;
	static int8_t x762 = INT8_MIN;
	uint16_t x763 = 2145U;
	static int8_t x764 = INT8_MAX;
	static int32_t t99 = -8683;

    t99 = ((x761!=x762)/(x763/x764));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x774 = 95U;
	int64_t x775 = INT64_MIN;
	int64_t t100 = -1085342839916LL;

    t100 = ((x773!=x774)/(x775/x776));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x793 = INT64_MIN;
	volatile int8_t x794 = 7;
	int16_t x795 = -4;
	uint64_t x796 = 13956683581LLU;
	uint64_t t101 = 55117340615LLU;

    t101 = ((x793!=x794)/(x795/x796));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x806 = -249;
	int32_t x808 = 2;
	static volatile int64_t t102 = -127556947LL;

    t102 = ((x805!=x806)/(x807/x808));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x810 = INT32_MIN;
	uint64_t x811 = 4336005949453353LLU;
	uint32_t x812 = UINT32_MAX;
	volatile uint64_t t103 = 2462LLU;

    t103 = ((x809!=x810)/(x811/x812));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint64_t x821 = 13104222694885LLU;
	int64_t x823 = -761532186211081411LL;
	uint64_t x824 = 873789878LLU;
	uint64_t t104 = 4631792814985949LLU;

    t104 = ((x821!=x822)/(x823/x824));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint32_t x834 = 5U;
	uint16_t x836 = 368U;
	static int32_t t105 = 3046;

    t105 = ((x833!=x834)/(x835/x836));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x837 = INT8_MIN;
	volatile uint64_t x838 = 1729917973921761LLU;
	int16_t x839 = INT16_MAX;
	int16_t x840 = 13;
	volatile int32_t t106 = 69626;

    t106 = ((x837!=x838)/(x839/x840));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x845 = 15U;
	volatile int64_t x846 = 89906331027515421LL;
	static int32_t x847 = -274661194;
	int32_t x848 = -2736;
	int32_t t107 = -253971226;

    t107 = ((x845!=x846)/(x847/x848));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int32_t x851 = INT32_MIN;
	int16_t x852 = INT16_MAX;
	int32_t t108 = -1166362;

    t108 = ((x849!=x850)/(x851/x852));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x857 = 2075U;
	static uint64_t x858 = 12898409341935LLU;
	static int64_t x859 = INT64_MIN;
	int64_t t109 = 2273755707381873989LL;

    t109 = ((x857!=x858)/(x859/x860));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x865 = 134038430320LLU;
	uint64_t x866 = 2902362539906LLU;
	int32_t x867 = INT32_MAX;
	static int8_t x868 = INT8_MAX;
	int32_t t110 = 1484;

    t110 = ((x865!=x866)/(x867/x868));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x869 = INT8_MIN;
	volatile int32_t x870 = -1;
	volatile int64_t x871 = INT64_MIN;
	static uint16_t x872 = UINT16_MAX;
	volatile int64_t t111 = 194868923599840486LL;

    t111 = ((x869!=x870)/(x871/x872));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x873 = 1;
	static int16_t x874 = -1;
	int16_t x875 = -1;
	int64_t x876 = -1LL;
	volatile int64_t t112 = 278994LL;

    t112 = ((x873!=x874)/(x875/x876));

    if (t112 != 1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x881 = -1;
	uint64_t x882 = 607679687935452175LLU;
	int16_t x883 = INT16_MIN;
	volatile int8_t x884 = 7;
	volatile int32_t t113 = 1;

    t113 = ((x881!=x882)/(x883/x884));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x885 = 394LLU;
	int8_t x886 = INT8_MAX;
	volatile int32_t x887 = INT32_MAX;
	volatile int64_t x888 = -11LL;
	volatile int64_t t114 = 8246629671LL;

    t114 = ((x885!=x886)/(x887/x888));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x893 = -931757387888104LL;
	static int16_t x894 = INT16_MAX;
	volatile uint8_t x895 = UINT8_MAX;
	uint8_t x896 = 43U;
	int32_t t115 = -5755;

    t115 = ((x893!=x894)/(x895/x896));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x897 = INT16_MIN;
	int64_t x898 = INT64_MAX;
	uint16_t x899 = 265U;
	uint8_t x900 = UINT8_MAX;
	int32_t t116 = 51474;

    t116 = ((x897!=x898)/(x899/x900));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x907 = INT64_MAX;
	uint32_t x908 = 1062184520U;
	int64_t t117 = -4211526229490266LL;

    t117 = ((x905!=x906)/(x907/x908));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x913 = 47U;
	volatile int64_t x915 = INT64_MAX;
	uint16_t x916 = 2U;
	volatile int64_t t118 = -5602674LL;

    t118 = ((x913!=x914)/(x915/x916));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x921 = 182U;
	static volatile int64_t x922 = INT64_MIN;
	volatile int16_t x923 = -2556;
	int8_t x924 = -33;
	volatile int32_t t119 = -31812;

    t119 = ((x921!=x922)/(x923/x924));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x925 = -1;
	int16_t x926 = -1;
	int32_t x927 = 197970;
	volatile uint64_t t120 = 5907LLU;

    t120 = ((x925!=x926)/(x927/x928));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x929 = 111136822607LLU;
	int64_t x930 = INT64_MIN;
	int64_t x931 = INT64_MIN;

    t121 = ((x929!=x930)/(x931/x932));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x933 = UINT16_MAX;
	static uint64_t x934 = 1973832042050825583LLU;
	int32_t x935 = -18362769;
	volatile int32_t t122 = 4386938;

    t122 = ((x933!=x934)/(x935/x936));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x937 = 1797936U;
	int8_t x938 = INT8_MIN;
	int16_t x939 = INT16_MIN;
	int64_t x940 = -1LL;
	int64_t t123 = 8067683150013LL;

    t123 = ((x937!=x938)/(x939/x940));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x941 = 3959U;
	int32_t x943 = -1;
	int8_t x944 = -1;
	static volatile int32_t t124 = -1207593;

    t124 = ((x941!=x942)/(x943/x944));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x948 = 3U;

    t125 = ((x945!=x946)/(x947/x948));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x949 = INT8_MAX;
	uint64_t x950 = 1617LLU;
	int32_t x952 = -1;

    t126 = ((x949!=x950)/(x951/x952));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x957 = INT16_MIN;
	static int16_t x958 = INT16_MIN;
	volatile int32_t x959 = 31177762;
	int8_t x960 = -2;
	int32_t t127 = -54728;

    t127 = ((x957!=x958)/(x959/x960));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x961 = INT32_MAX;
	static volatile int64_t x962 = -52311193441LL;
	static int64_t x963 = 383888LL;
	static volatile int16_t x964 = -97;
	int64_t t128 = 7586675LL;

    t128 = ((x961!=x962)/(x963/x964));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x965 = -17;
	volatile int64_t x966 = 221776177691LL;
	int32_t x967 = -1;
	uint64_t x968 = 218451258LLU;

    t129 = ((x965!=x966)/(x967/x968));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x973 = -1;
	uint8_t x974 = 17U;
	static int16_t x975 = 1547;

    t130 = ((x973!=x974)/(x975/x976));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x981 = INT64_MAX;
	int32_t x982 = INT32_MIN;
	uint32_t x983 = UINT32_MAX;
	int8_t x984 = 62;
	static volatile uint32_t t131 = 14U;

    t131 = ((x981!=x982)/(x983/x984));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x985 = -1;
	static volatile uint64_t x986 = UINT64_MAX;
	int32_t x987 = INT32_MIN;
	uint8_t x988 = 1U;
	static volatile int32_t t132 = 126515;

    t132 = ((x985!=x986)/(x987/x988));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x993 = 658864726885917LLU;
	int64_t x994 = -1110796693603LL;
	static int16_t x995 = -42;
	volatile int16_t x996 = 1;

    t133 = ((x993!=x994)/(x995/x996));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int8_t x997 = INT8_MIN;
	uint64_t x998 = 19793478446071755LLU;
	int64_t x1000 = -1LL;
	volatile int64_t t134 = -1445167722657LL;

    t134 = ((x997!=x998)/(x999/x1000));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x1001 = UINT32_MAX;
	static uint32_t x1002 = UINT32_MAX;
	int16_t x1003 = -1;
	uint16_t x1004 = 1U;
	int32_t t135 = -92580808;

    t135 = ((x1001!=x1002)/(x1003/x1004));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x1005 = -2;
	int8_t x1006 = -6;
	static uint64_t x1007 = UINT64_MAX;
	volatile uint64_t t136 = 38140687940981589LLU;

    t136 = ((x1005!=x1006)/(x1007/x1008));

    if (t136 != 1LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x1017 = 3;
	static int64_t x1019 = -94717LL;

    t137 = ((x1017!=x1018)/(x1019/x1020));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x1029 = 28;
	int8_t x1031 = INT8_MIN;
	int32_t t138 = 720564;

    t138 = ((x1029!=x1030)/(x1031/x1032));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x1037 = 21U;
	static int16_t x1038 = -2523;
	static int32_t x1039 = INT32_MAX;
	static uint32_t x1040 = 7548398U;
	volatile uint32_t t139 = 8472U;

    t139 = ((x1037!=x1038)/(x1039/x1040));

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x1045 = 215479979479110LLU;
	int32_t x1046 = INT32_MIN;
	int16_t x1047 = INT16_MIN;
	uint16_t x1048 = 233U;
	volatile int32_t t140 = 31944726;

    t140 = ((x1045!=x1046)/(x1047/x1048));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x1061 = 78414;
	volatile uint8_t x1062 = UINT8_MAX;
	volatile int16_t x1064 = INT16_MIN;
	int32_t t141 = -11;

    t141 = ((x1061!=x1062)/(x1063/x1064));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint64_t x1065 = 106719559185LLU;
	static volatile int8_t x1066 = INT8_MAX;
	int8_t x1068 = -62;

    t142 = ((x1065!=x1066)/(x1067/x1068));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x1073 = -1;
	int32_t x1074 = 1365231;
	int64_t x1075 = INT64_MIN;
	int32_t x1076 = INT32_MAX;
	int64_t t143 = -1319113226LL;

    t143 = ((x1073!=x1074)/(x1075/x1076));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x1081 = 1;
	int64_t x1082 = -1LL;
	static uint16_t x1083 = UINT16_MAX;

    t144 = ((x1081!=x1082)/(x1083/x1084));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x1093 = UINT16_MAX;
	volatile int16_t x1094 = -1;
	static int64_t x1095 = INT64_MIN;
	int32_t x1096 = INT32_MIN;

    t145 = ((x1093!=x1094)/(x1095/x1096));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1109 = 1;
	volatile uint8_t x1110 = UINT8_MAX;
	volatile int8_t x1111 = -1;
	volatile uint32_t t146 = 620492606U;

    t146 = ((x1109!=x1110)/(x1111/x1112));

    if (t146 != 1U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x1117 = UINT8_MAX;
	static uint8_t x1118 = UINT8_MAX;
	volatile int16_t x1119 = INT16_MAX;
	volatile int32_t t147 = 26464407;

    t147 = ((x1117!=x1118)/(x1119/x1120));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x1121 = UINT16_MAX;
	int16_t x1122 = -1;
	int32_t x1123 = INT32_MIN;
	static uint8_t x1124 = 1U;
	volatile int32_t t148 = 0;

    t148 = ((x1121!=x1122)/(x1123/x1124));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x1133 = -3;
	static int16_t x1134 = INT16_MIN;
	static int32_t x1135 = -1;
	volatile int64_t x1136 = 1LL;
	int64_t t149 = 8146722692LL;

    t149 = ((x1133!=x1134)/(x1135/x1136));

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x1149 = -1;
	uint16_t x1150 = UINT16_MAX;
	uint32_t x1151 = UINT32_MAX;
	volatile int8_t x1152 = -1;
	uint32_t t150 = 13563U;

    t150 = ((x1149!=x1150)/(x1151/x1152));

    if (t150 != 1U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x1153 = UINT64_MAX;
	uint64_t x1154 = 694895LLU;
	volatile uint64_t x1155 = 553995439520848LLU;
	uint64_t t151 = 12387425219820477LLU;

    t151 = ((x1153!=x1154)/(x1155/x1156));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x1158 = 0U;
	int64_t x1159 = 79022443938853534LL;
	int32_t x1160 = INT32_MIN;
	static int64_t t152 = -439768950661815300LL;

    t152 = ((x1157!=x1158)/(x1159/x1160));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x1161 = UINT32_MAX;
	int32_t x1162 = 609479486;
	static int64_t x1163 = INT64_MIN;
	int32_t x1164 = -101747;
	volatile int64_t t153 = 1037035534LL;

    t153 = ((x1161!=x1162)/(x1163/x1164));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x1169 = -202LL;
	int32_t x1170 = INT32_MIN;
	static volatile int64_t x1171 = INT64_MIN;
	int8_t x1172 = -36;
	volatile int64_t t154 = -265550743LL;

    t154 = ((x1169!=x1170)/(x1171/x1172));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x1174 = UINT8_MAX;
	int16_t x1175 = INT16_MIN;
	static uint16_t x1176 = 113U;
	int32_t t155 = 31993;

    t155 = ((x1173!=x1174)/(x1175/x1176));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x1177 = -25;
	volatile int16_t x1178 = -1;
	int64_t x1179 = INT64_MAX;
	volatile int8_t x1180 = INT8_MIN;
	int64_t t156 = 534389336670130016LL;

    t156 = ((x1177!=x1178)/(x1179/x1180));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x1189 = INT64_MAX;
	int64_t x1190 = INT64_MIN;
	uint64_t x1191 = 274056243420LLU;
	uint32_t x1192 = UINT32_MAX;
	uint64_t t157 = 235799829690446558LLU;

    t157 = ((x1189!=x1190)/(x1191/x1192));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x1197 = 1U;
	static int32_t x1198 = -7754687;
	int16_t x1199 = INT16_MIN;
	int32_t t158 = 439363;

    t158 = ((x1197!=x1198)/(x1199/x1200));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x1205 = 6U;
	uint16_t x1206 = 41U;
	int8_t x1207 = INT8_MIN;
	uint32_t x1208 = 6064U;

    t159 = ((x1205!=x1206)/(x1207/x1208));

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x1213 = 6U;
	static volatile int16_t x1214 = -1;
	int64_t x1216 = 5261LL;
	int64_t t160 = 279LL;

    t160 = ((x1213!=x1214)/(x1215/x1216));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1219 = -11739323869LL;
	int64_t x1220 = -27457999LL;
	static int64_t t161 = -35435566352LL;

    t161 = ((x1217!=x1218)/(x1219/x1220));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int64_t x1225 = -97684595LL;
	volatile int16_t x1226 = -913;
	static volatile int8_t x1227 = INT8_MIN;
	int16_t x1228 = 52;
	int32_t t162 = 6;

    t162 = ((x1225!=x1226)/(x1227/x1228));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x1229 = INT16_MIN;
	volatile int16_t x1230 = 19;

    t163 = ((x1229!=x1230)/(x1231/x1232));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x1237 = 1U;
	volatile int16_t x1238 = -1;
	int16_t x1239 = -1;
	volatile int8_t x1240 = 1;

    t164 = ((x1237!=x1238)/(x1239/x1240));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x1241 = UINT64_MAX;
	int8_t x1242 = -1;
	uint32_t x1243 = 60989248U;
	volatile uint8_t x1244 = 46U;

    t165 = ((x1241!=x1242)/(x1243/x1244));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x1245 = 1488609992569291038LL;
	static int64_t x1246 = -905476LL;
	static int8_t x1247 = INT8_MAX;
	uint8_t x1248 = 28U;
	int32_t t166 = -4;

    t166 = ((x1245!=x1246)/(x1247/x1248));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x1262 = UINT8_MAX;
	volatile int32_t x1264 = -1;
	volatile int64_t t167 = 364946634721LL;

    t167 = ((x1261!=x1262)/(x1263/x1264));

    if (t167 != 1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x1265 = 13U;
	static uint64_t x1266 = UINT64_MAX;
	int16_t x1267 = -6631;
	int16_t x1268 = -50;

    t168 = ((x1265!=x1266)/(x1267/x1268));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1269 = -1;
	volatile int64_t x1271 = INT64_MIN;
	int32_t x1272 = 528766252;
	int64_t t169 = 4128680741LL;

    t169 = ((x1269!=x1270)/(x1271/x1272));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1273 = -1;
	int64_t x1274 = INT64_MIN;
	int64_t x1275 = 1821196297254705LL;
	volatile int8_t x1276 = -1;
	volatile int64_t t170 = -14LL;

    t170 = ((x1273!=x1274)/(x1275/x1276));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x1277 = -1LL;
	int32_t x1279 = INT32_MAX;
	int64_t x1280 = -1LL;

    t171 = ((x1277!=x1278)/(x1279/x1280));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x1285 = 380U;
	static int64_t x1286 = -1LL;
	volatile uint64_t x1287 = UINT64_MAX;
	uint64_t t172 = 5876080157656LLU;

    t172 = ((x1285!=x1286)/(x1287/x1288));

    if (t172 != 1LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1293 = UINT32_MAX;
	uint16_t x1295 = 349U;
	int8_t x1296 = INT8_MIN;
	volatile int32_t t173 = -10932;

    t173 = ((x1293!=x1294)/(x1295/x1296));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x1297 = 13U;
	uint8_t x1298 = 1U;
	volatile int16_t x1299 = INT16_MIN;
	int16_t x1300 = INT16_MIN;
	static int32_t t174 = 267793533;

    t174 = ((x1297!=x1298)/(x1299/x1300));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1325 = INT64_MAX;
	int64_t x1326 = INT64_MAX;
	static int64_t x1327 = INT64_MAX;
	int8_t x1328 = INT8_MIN;
	volatile int64_t t175 = -79375LL;

    t175 = ((x1325!=x1326)/(x1327/x1328));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1353 = INT64_MAX;
	uint64_t x1354 = 5726578615911LLU;
	uint32_t x1356 = 178611872U;
	volatile uint32_t t176 = 1153U;

    t176 = ((x1353!=x1354)/(x1355/x1356));

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1357 = 29620709U;
	static volatile int32_t x1358 = -20586;
	int32_t x1359 = INT32_MAX;
	volatile int8_t x1360 = 1;
	int32_t t177 = 282046860;

    t177 = ((x1357!=x1358)/(x1359/x1360));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x1381 = INT16_MIN;
	uint8_t x1382 = 68U;
	int8_t x1384 = -1;
	int64_t t178 = 1LL;

    t178 = ((x1381!=x1382)/(x1383/x1384));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x1385 = -24751495;
	static uint64_t x1386 = 103LLU;
	int16_t x1388 = INT16_MAX;

    t179 = ((x1385!=x1386)/(x1387/x1388));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x1389 = -1;
	int32_t x1390 = -127166630;
	volatile uint8_t x1391 = 3U;
	static int8_t x1392 = -1;
	static volatile int32_t t180 = -1043;

    t180 = ((x1389!=x1390)/(x1391/x1392));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1395 = INT16_MAX;
	volatile int16_t x1396 = -36;
	int32_t t181 = 93699;

    t181 = ((x1393!=x1394)/(x1395/x1396));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1406 = 64944LL;
	static uint64_t x1408 = 243469450967289LLU;
	uint64_t t182 = 1805460839LLU;

    t182 = ((x1405!=x1406)/(x1407/x1408));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1425 = 65673281332LLU;
	static uint32_t x1426 = 68U;
	int32_t x1428 = INT32_MIN;
	volatile int64_t t183 = 217030229LL;

    t183 = ((x1425!=x1426)/(x1427/x1428));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1429 = 0;
	int16_t x1431 = 5154;
	volatile int16_t x1432 = -1;
	int32_t t184 = 361019789;

    t184 = ((x1429!=x1430)/(x1431/x1432));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1437 = 7746U;
	uint64_t x1438 = 1946LLU;
	int32_t x1439 = 311990465;

    t185 = ((x1437!=x1438)/(x1439/x1440));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x1441 = INT64_MIN;
	int32_t x1442 = INT32_MIN;
	uint16_t x1443 = 3U;
	int32_t t186 = -15421780;

    t186 = ((x1441!=x1442)/(x1443/x1444));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x1445 = 7U;
	int16_t x1446 = INT16_MIN;
	int8_t x1448 = 4;
	volatile uint64_t t187 = 12LLU;

    t187 = ((x1445!=x1446)/(x1447/x1448));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x1449 = 159323073U;
	int32_t x1450 = INT32_MAX;
	volatile int32_t t188 = 190967;

    t188 = ((x1449!=x1450)/(x1451/x1452));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x1461 = -2;
	volatile int8_t x1462 = INT8_MAX;
	uint16_t x1463 = UINT16_MAX;
	static uint32_t t189 = 51875790U;

    t189 = ((x1461!=x1462)/(x1463/x1464));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1465 = 0LLU;
	uint16_t x1466 = UINT16_MAX;
	static int32_t t190 = 4624751;

    t190 = ((x1465!=x1466)/(x1467/x1468));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x1473 = -1;
	int16_t x1474 = 15;
	int32_t x1475 = INT32_MIN;
	static volatile int32_t t191 = 219;

    t191 = ((x1473!=x1474)/(x1475/x1476));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1477 = INT32_MIN;
	int16_t x1478 = 7486;
	int32_t x1479 = INT32_MIN;
	static int64_t x1480 = 5160LL;
	int64_t t192 = 133178135LL;

    t192 = ((x1477!=x1478)/(x1479/x1480));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1485 = -1;
	static int16_t x1486 = 169;
	uint8_t x1488 = 2U;
	volatile int32_t t193 = -253939002;

    t193 = ((x1485!=x1486)/(x1487/x1488));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1497 = -1LL;
	int32_t x1498 = INT32_MAX;
	static int16_t x1499 = INT16_MIN;
	int16_t x1500 = 70;

    t194 = ((x1497!=x1498)/(x1499/x1500));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1505 = -357244;
	int8_t x1507 = INT8_MIN;
	uint32_t x1508 = 39276U;
	volatile uint32_t t195 = 8861160U;

    t195 = ((x1505!=x1506)/(x1507/x1508));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x1509 = INT32_MAX;
	int8_t x1511 = INT8_MIN;
	static int8_t x1512 = -1;
	volatile int32_t t196 = 265290013;

    t196 = ((x1509!=x1510)/(x1511/x1512));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1537 = INT32_MIN;
	volatile uint32_t x1538 = 303207U;
	int8_t x1539 = 3;
	static uint8_t x1540 = 3U;
	static int32_t t197 = 0;

    t197 = ((x1537!=x1538)/(x1539/x1540));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1541 = INT64_MIN;
	uint64_t x1543 = UINT64_MAX;
	int8_t x1544 = 3;
	uint64_t t198 = 1145LLU;

    t198 = ((x1541!=x1542)/(x1543/x1544));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1557 = 8448951600731LLU;
	static int16_t x1558 = INT16_MIN;
	int64_t x1559 = INT64_MAX;
	volatile uint16_t x1560 = 892U;
	volatile int64_t t199 = -21560375079LL;

    t199 = ((x1557!=x1558)/(x1559/x1560));

    if (t199 != 0LL) { NG(); } else { ; }
	
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


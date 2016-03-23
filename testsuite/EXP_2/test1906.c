
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

uint8_t x18 = 4U;
uint16_t x21 = 237U;
uint16_t x23 = 746U;
uint16_t x29 = 1532U;
int32_t t4 = 1672;
volatile uint16_t x49 = 1052U;
volatile int64_t x50 = INT64_MIN;
volatile int8_t x65 = INT8_MAX;
static uint64_t t10 = 532137469466653LLU;
static uint64_t x93 = 6610151152972061LLU;
int64_t t12 = 15LL;
volatile int32_t t13 = -27540453;
volatile uint8_t x133 = 1U;
static uint64_t x137 = 22565577579479LLU;
int32_t t16 = -55;
uint8_t x163 = 1U;
int16_t x174 = -1;
volatile uint64_t t19 = 1635340388633444075LLU;
static uint64_t x181 = UINT64_MAX;
uint32_t x182 = 774U;
static volatile int64_t t21 = -575908LL;
int64_t x190 = INT64_MIN;
int16_t x195 = INT16_MAX;
volatile uint8_t x196 = UINT8_MAX;
uint32_t x211 = 232U;
int32_t t29 = 2011;
uint32_t x277 = UINT32_MAX;
volatile uint32_t t30 = 122504U;
uint64_t x283 = 19525LLU;
volatile int32_t x293 = 20644;
int64_t x296 = -4108299494LL;
volatile int64_t t34 = -28625465LL;
uint16_t x309 = 27U;
static int8_t x324 = INT8_MIN;
static int32_t t39 = -554;
int64_t x331 = -1LL;
static int8_t x332 = INT8_MAX;
uint8_t x338 = 0U;
static volatile int8_t x340 = INT8_MIN;
uint64_t x363 = 520528598LLU;
uint8_t x365 = 91U;
int32_t x367 = 456334851;
static uint16_t x385 = UINT16_MAX;
volatile int16_t x386 = 1;
static uint16_t x391 = UINT16_MAX;
static int16_t x395 = -1;
volatile int8_t x400 = -10;
volatile int64_t t49 = -2098062266LL;
static volatile int32_t t51 = -220;
int8_t x450 = INT8_MIN;
uint32_t x464 = UINT32_MAX;
uint32_t t53 = 2U;
int8_t x466 = INT8_MIN;
static int8_t x468 = -1;
int64_t x475 = INT64_MIN;
uint64_t x480 = UINT64_MAX;
volatile uint64_t t56 = 36830LLU;
int32_t x481 = 15786119;
uint64_t x482 = UINT64_MAX;
static int8_t x483 = INT8_MIN;
int16_t x491 = -1;
static int64_t x498 = INT64_MIN;
uint8_t x501 = 0U;
volatile int32_t t60 = 214;
uint64_t x522 = 699LLU;
int16_t x547 = -1;
uint64_t x548 = 335949LLU;
uint16_t x554 = 27836U;
static uint32_t x581 = UINT32_MAX;
int64_t x582 = INT64_MIN;
uint16_t x585 = 11U;
int8_t x602 = INT8_MIN;
int32_t t71 = 57402;
static uint32_t x610 = 20778U;
int8_t x616 = -1;
int32_t x638 = -1;
volatile uint8_t x639 = UINT8_MAX;
static int16_t x646 = INT16_MIN;
int8_t x647 = INT8_MAX;
static uint8_t x653 = 0U;
static uint32_t x661 = 793460U;
uint64_t x667 = 1436276LLU;
static int8_t x669 = INT8_MAX;
int32_t x691 = INT32_MAX;
static int16_t x703 = INT16_MIN;
volatile uint16_t x704 = UINT16_MAX;
static uint64_t t87 = 726LLU;
static volatile uint8_t x711 = UINT8_MAX;
volatile uint32_t x716 = 1456U;
int32_t x726 = -15112;
int8_t x734 = -1;
int16_t x754 = 363;
static int8_t x756 = INT8_MIN;
int64_t x774 = INT64_MAX;
static uint8_t x777 = UINT8_MAX;
volatile uint64_t t97 = 207975711523811LLU;
volatile int64_t x788 = INT64_MAX;
volatile int16_t x795 = 952;
uint32_t x814 = 17005U;
uint16_t x822 = UINT16_MAX;
uint64_t x825 = 60555171LLU;
int64_t x826 = INT64_MIN;
static uint64_t x829 = UINT64_MAX;
uint32_t x839 = 117553523U;
static int64_t x851 = -1LL;
static volatile int32_t x867 = INT32_MIN;
int16_t x873 = 1910;
volatile int32_t t113 = 6;
static int16_t x911 = -1;
uint8_t x918 = 6U;
int16_t x950 = INT16_MIN;
int64_t x952 = 97022609693095364LL;
uint64_t x960 = 1LLU;
int64_t x968 = INT64_MAX;
uint16_t x980 = 320U;
volatile int32_t t126 = 38224;
int16_t x1024 = -111;
static int32_t t128 = 358816320;
int32_t x1027 = -1;
int32_t x1028 = 23282;
int64_t x1074 = INT64_MIN;
static int16_t x1076 = INT16_MAX;
volatile int8_t x1081 = INT8_MAX;
volatile uint32_t t134 = 370037642U;
int8_t x1089 = INT8_MAX;
int32_t t137 = 248;
uint8_t x1105 = 1U;
volatile int8_t x1111 = INT8_MAX;
uint16_t x1122 = 29U;
volatile int64_t x1127 = INT64_MIN;
int16_t x1143 = INT16_MIN;
int16_t x1156 = INT16_MIN;
uint64_t x1157 = 7522LLU;
uint64_t x1167 = UINT64_MAX;
volatile int64_t t147 = -41113LL;
uint64_t t148 = 10959LLU;
static volatile int32_t x1231 = -150080;
int16_t x1243 = 71;
static uint32_t x1244 = UINT32_MAX;
int64_t t155 = -18LL;
static uint16_t x1284 = 1340U;
int16_t x1299 = INT16_MIN;
static int16_t x1320 = -1;
uint8_t x1330 = 80U;
volatile int16_t x1331 = INT16_MIN;
int16_t x1346 = INT16_MAX;
int64_t x1347 = -1LL;
int8_t x1363 = INT8_MIN;
uint64_t x1364 = UINT64_MAX;
volatile int64_t t168 = -1504714240919265561LL;
static volatile uint64_t t169 = 323169729LLU;
uint64_t x1425 = UINT64_MAX;
int64_t x1428 = INT64_MAX;
uint8_t x1432 = UINT8_MAX;
static int32_t t171 = 9014;
volatile uint8_t x1438 = 17U;
int32_t x1440 = -1;
uint32_t t173 = 27U;
int64_t x1453 = 2605LL;
int32_t x1462 = INT32_MIN;
volatile uint16_t x1472 = 193U;
volatile int32_t t176 = 1;
int32_t x1473 = INT32_MAX;
uint8_t x1489 = 0U;
volatile uint32_t t179 = 2212699U;
int64_t x1506 = -1LL;
static int8_t x1507 = INT8_MIN;
uint16_t x1518 = UINT16_MAX;
int16_t x1520 = INT16_MIN;
int16_t x1551 = 1;
uint32_t x1558 = 1665U;
uint16_t x1559 = 1714U;
volatile uint64_t t185 = 959253214067475LLU;
volatile uint8_t x1601 = 5U;
volatile int64_t x1623 = INT64_MIN;
int32_t x1634 = -41;
uint64_t x1657 = 348177036LLU;
uint8_t x1666 = 2U;
volatile uint16_t x1668 = 98U;
int64_t x1675 = INT64_MIN;
uint8_t x1676 = 5U;
static int8_t x1691 = INT8_MIN;
int64_t x1701 = 0LL;


void f0(void) {
    	int8_t x5 = INT8_MAX;
	int8_t x6 = INT8_MAX;
	volatile int32_t x7 = -59868296;
	volatile int8_t x8 = -1;
	volatile int32_t t0 = -23441;

    t0 = ((x5>>(x6<=x7))-x8);

    if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x13 = 1U;
	uint16_t x14 = 17U;
	volatile uint8_t x15 = 1U;
	uint64_t x16 = 8367025357637017381LLU;
	uint64_t t1 = 88895255782963LLU;

    t1 = ((x13>>(x14<=x15))-x16);

    if (t1 != 10079718716072534236LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x17 = 693U;
	int16_t x19 = INT16_MAX;
	int32_t x20 = INT32_MAX;
	uint32_t t2 = 58019U;

    t2 = ((x17>>(x18<=x19))-x20);

    if (t2 != 2147483995U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x22 = 3;
	int64_t x24 = -28208722LL;
	int64_t t3 = -4722397045566082LL;

    t3 = ((x21>>(x22<=x23))-x24);

    if (t3 != 28208840LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x30 = UINT16_MAX;
	static volatile int64_t x31 = INT64_MIN;
	static volatile uint16_t x32 = UINT16_MAX;

    t4 = ((x29>>(x30<=x31))-x32);

    if (t4 != -64003) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x33 = 2850790U;
	volatile uint32_t x34 = 239211596U;
	int32_t x35 = INT32_MIN;
	uint64_t x36 = UINT64_MAX;
	static uint64_t t5 = 1LLU;

    t5 = ((x33>>(x34<=x35))-x36);

    if (t5 != 1425396LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x37 = 26342U;
	int32_t x38 = INT32_MIN;
	int8_t x39 = -1;
	uint32_t x40 = 0U;
	volatile uint32_t t6 = 1U;

    t6 = ((x37>>(x38<=x39))-x40);

    if (t6 != 13171U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x41 = 204897219447117LLU;
	volatile int32_t x42 = -1;
	int16_t x43 = -1;
	volatile uint32_t x44 = UINT32_MAX;
	volatile uint64_t t7 = 9569296899LLU;

    t7 = ((x41>>(x42<=x43))-x44);

    if (t7 != 102444314756263LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x51 = -31;
	uint32_t x52 = 1029066U;
	volatile uint32_t t8 = 30U;

    t8 = ((x49>>(x50<=x51))-x52);

    if (t8 != 4293938756U) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x66 = -1194383201483LL;
	int8_t x67 = INT8_MIN;
	volatile uint16_t x68 = 8944U;
	int32_t t9 = -62;

    t9 = ((x65>>(x66<=x67))-x68);

    if (t9 != -8881) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x77 = 0U;
	int16_t x78 = -1;
	static int32_t x79 = INT32_MIN;
	uint64_t x80 = 576LLU;

    t10 = ((x77>>(x78<=x79))-x80);

    if (t10 != 18446744073709551040LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x94 = INT32_MIN;
	int8_t x95 = INT8_MAX;
	static volatile int32_t x96 = INT32_MAX;
	static volatile uint64_t t11 = 2955169021238LLU;

    t11 = ((x93>>(x94<=x95))-x96);

    if (t11 != 3305073429002383LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x105 = INT64_MAX;
	static int16_t x106 = -1;
	int64_t x107 = -360985550LL;
	uint16_t x108 = UINT16_MAX;

    t12 = ((x105>>(x106<=x107))-x108);

    if (t12 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x121 = 4U;
	volatile int64_t x122 = INT64_MIN;
	uint64_t x123 = UINT64_MAX;
	int8_t x124 = -1;

    t13 = ((x121>>(x122<=x123))-x124);

    if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x134 = -606;
	int16_t x135 = INT16_MIN;
	uint16_t x136 = 3197U;
	static int32_t t14 = 1;

    t14 = ((x133>>(x134<=x135))-x136);

    if (t14 != -3196) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x138 = -1;
	int16_t x139 = INT16_MIN;
	int16_t x140 = 28;
	uint64_t t15 = 171201347LLU;

    t15 = ((x137>>(x138<=x139))-x140);

    if (t15 != 22565577579451LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x145 = 1002U;
	volatile int8_t x146 = -1;
	uint32_t x147 = UINT32_MAX;
	uint16_t x148 = 6397U;

    t16 = ((x145>>(x146<=x147))-x148);

    if (t16 != -5896) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x161 = 49296198U;
	static int8_t x162 = INT8_MIN;
	int8_t x164 = -1;
	volatile uint32_t t17 = 389U;

    t17 = ((x161>>(x162<=x163))-x164);

    if (t17 != 24648100U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x165 = 355U;
	int16_t x166 = INT16_MIN;
	int32_t x167 = 395452;
	int8_t x168 = INT8_MIN;
	volatile int32_t t18 = -15;

    t18 = ((x165>>(x166<=x167))-x168);

    if (t18 != 305) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x173 = INT32_MAX;
	static uint8_t x175 = 0U;
	uint64_t x176 = 640733357417187LLU;

    t19 = ((x173>>(x174<=x175))-x176);

    if (t19 != 18446103341425876252LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x183 = 0;
	volatile int16_t x184 = -1;
	static volatile uint64_t t20 = 3353976350LLU;

    t20 = ((x181>>(x182<=x183))-x184);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x185 = INT64_MAX;
	volatile uint64_t x186 = UINT64_MAX;
	uint16_t x187 = 3U;
	int8_t x188 = INT8_MAX;

    t21 = ((x185>>(x186<=x187))-x188);

    if (t21 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x189 = 0;
	int32_t x191 = INT32_MAX;
	uint32_t x192 = UINT32_MAX;
	uint32_t t22 = 103669316U;

    t22 = ((x189>>(x190<=x191))-x192);

    if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x193 = UINT32_MAX;
	int64_t x194 = -495543201313LL;
	volatile uint32_t t23 = 533191703U;

    t23 = ((x193>>(x194<=x195))-x196);

    if (t23 != 2147483392U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x209 = 15796U;
	volatile int16_t x210 = -1;
	int8_t x212 = -1;
	static volatile uint32_t t24 = 192U;

    t24 = ((x209>>(x210<=x211))-x212);

    if (t24 != 15797U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x213 = INT16_MAX;
	int16_t x214 = -1;
	volatile uint16_t x215 = 306U;
	int8_t x216 = -4;
	volatile int32_t t25 = 1;

    t25 = ((x213>>(x214<=x215))-x216);

    if (t25 != 16387) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x225 = UINT8_MAX;
	int16_t x226 = INT16_MAX;
	int32_t x227 = INT32_MIN;
	volatile uint64_t x228 = UINT64_MAX;
	volatile uint64_t t26 = 230722833453924106LLU;

    t26 = ((x225>>(x226<=x227))-x228);

    if (t26 != 256LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x233 = INT32_MAX;
	volatile int8_t x234 = INT8_MAX;
	int64_t x235 = INT64_MAX;
	uint16_t x236 = 2889U;
	static volatile int32_t t27 = -221;

    t27 = ((x233>>(x234<=x235))-x236);

    if (t27 != 1073738934) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x249 = UINT64_MAX;
	uint8_t x250 = 15U;
	int32_t x251 = -1;
	volatile int8_t x252 = INT8_MIN;
	volatile uint64_t t28 = 442288513628LLU;

    t28 = ((x249>>(x250<=x251))-x252);

    if (t28 != 127LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x273 = 5U;
	int16_t x274 = INT16_MAX;
	static uint64_t x275 = UINT64_MAX;
	int16_t x276 = INT16_MIN;

    t29 = ((x273>>(x274<=x275))-x276);

    if (t29 != 32770) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x278 = INT8_MIN;
	static int8_t x279 = 0;
	uint8_t x280 = 0U;

    t30 = ((x277>>(x278<=x279))-x280);

    if (t30 != 2147483647U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x281 = 0LL;
	uint32_t x282 = 140818269U;
	int16_t x284 = 3;
	volatile int64_t t31 = -1LL;

    t31 = ((x281>>(x282<=x283))-x284);

    if (t31 != -3LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x285 = UINT32_MAX;
	int16_t x286 = -1;
	volatile uint32_t x287 = 1005966U;
	static uint64_t x288 = 154716129LLU;
	uint64_t t32 = 16269127LLU;

    t32 = ((x285>>(x286<=x287))-x288);

    if (t32 != 4140251166LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x289 = UINT8_MAX;
	int32_t x290 = 863;
	static uint8_t x291 = UINT8_MAX;
	volatile int32_t x292 = -1;
	volatile int32_t t33 = 10863231;

    t33 = ((x289>>(x290<=x291))-x292);

    if (t33 != 256) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x294 = 1U;
	uint16_t x295 = 0U;

    t34 = ((x293>>(x294<=x295))-x296);

    if (t34 != 4108320138LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x301 = INT64_MAX;
	volatile int8_t x302 = INT8_MIN;
	int8_t x303 = INT8_MIN;
	int8_t x304 = 3;
	volatile int64_t t35 = 514756321783863LL;

    t35 = ((x301>>(x302<=x303))-x304);

    if (t35 != 4611686018427387900LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x310 = 661;
	static int16_t x311 = 2;
	int16_t x312 = INT16_MIN;
	volatile int32_t t36 = -1;

    t36 = ((x309>>(x310<=x311))-x312);

    if (t36 != 32795) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x313 = 174372LL;
	uint32_t x314 = 57U;
	int32_t x315 = -263960093;
	int16_t x316 = -1;
	int64_t t37 = 1019875850180807LL;

    t37 = ((x313>>(x314<=x315))-x316);

    if (t37 != 87187LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x321 = 5874808LL;
	volatile uint16_t x322 = UINT16_MAX;
	static int8_t x323 = INT8_MAX;
	volatile int64_t t38 = 201998748LL;

    t38 = ((x321>>(x322<=x323))-x324);

    if (t38 != 5874936LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int8_t x325 = 3;
	static uint8_t x326 = UINT8_MAX;
	uint16_t x327 = 13U;
	int8_t x328 = 1;

    t39 = ((x325>>(x326<=x327))-x328);

    if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x329 = UINT32_MAX;
	int16_t x330 = INT16_MAX;
	static uint32_t t40 = 1U;

    t40 = ((x329>>(x330<=x331))-x332);

    if (t40 != 4294967168U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x333 = UINT16_MAX;
	uint64_t x334 = 115156949LLU;
	volatile int32_t x335 = INT32_MIN;
	uint32_t x336 = UINT32_MAX;
	static volatile uint32_t t41 = 158762U;

    t41 = ((x333>>(x334<=x335))-x336);

    if (t41 != 32768U) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x337 = 119;
	uint32_t x339 = 0U;
	volatile int32_t t42 = 7;

    t42 = ((x337>>(x338<=x339))-x340);

    if (t42 != 187) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x361 = 1574U;
	int64_t x362 = INT64_MIN;
	static int32_t x364 = -957401627;
	volatile uint32_t t43 = 1005U;

    t43 = ((x361>>(x362<=x363))-x364);

    if (t43 != 957403201U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x366 = INT64_MIN;
	volatile int8_t x368 = INT8_MIN;
	volatile int32_t t44 = 7753;

    t44 = ((x365>>(x366<=x367))-x368);

    if (t44 != 173) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x387 = INT32_MAX;
	uint16_t x388 = 11U;
	volatile int32_t t45 = 24;

    t45 = ((x385>>(x386<=x387))-x388);

    if (t45 != 32756) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x389 = 0;
	volatile int16_t x390 = INT16_MAX;
	static uint64_t x392 = UINT64_MAX;
	volatile uint64_t t46 = 263389327762259LLU;

    t46 = ((x389>>(x390<=x391))-x392);

    if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x393 = INT16_MAX;
	uint32_t x394 = 1791400U;
	int16_t x396 = INT16_MAX;
	volatile int32_t t47 = -14;

    t47 = ((x393>>(x394<=x395))-x396);

    if (t47 != -16384) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x397 = 6290U;
	static uint64_t x398 = UINT64_MAX;
	int16_t x399 = INT16_MIN;
	volatile int32_t t48 = 28161;

    t48 = ((x397>>(x398<=x399))-x400);

    if (t48 != 6300) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x405 = 118LL;
	static int32_t x406 = INT32_MAX;
	uint32_t x407 = 16624U;
	static int16_t x408 = INT16_MIN;

    t49 = ((x405>>(x406<=x407))-x408);

    if (t49 != 32886LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x409 = 2LLU;
	static int8_t x410 = INT8_MIN;
	int64_t x411 = -8643640415946LL;
	static uint32_t x412 = 436406U;
	uint64_t t50 = 311224724686LLU;

    t50 = ((x409>>(x410<=x411))-x412);

    if (t50 != 18446744073709115212LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x437 = 0;
	uint16_t x438 = 5547U;
	volatile int32_t x439 = INT32_MIN;
	static volatile int8_t x440 = INT8_MIN;

    t51 = ((x437>>(x438<=x439))-x440);

    if (t51 != 128) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x449 = 1028429LL;
	uint64_t x451 = 0LLU;
	static uint64_t x452 = 80607827LLU;
	uint64_t t52 = 1341126129646LLU;

    t52 = ((x449>>(x450<=x451))-x452);

    if (t52 != 18446744073629972218LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x461 = 4366366;
	int32_t x462 = INT32_MAX;
	int16_t x463 = INT16_MIN;

    t53 = ((x461>>(x462<=x463))-x464);

    if (t53 != 4366367U) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x465 = 7U;
	volatile int64_t x467 = INT64_MIN;
	volatile int32_t t54 = 20;

    t54 = ((x465>>(x466<=x467))-x468);

    if (t54 != 8) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x473 = UINT32_MAX;
	uint16_t x474 = 1713U;
	uint8_t x476 = 99U;
	volatile uint32_t t55 = 124135988U;

    t55 = ((x473>>(x474<=x475))-x476);

    if (t55 != 4294967196U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x477 = 4U;
	int16_t x478 = INT16_MIN;
	int32_t x479 = -1;

    t56 = ((x477>>(x478<=x479))-x480);

    if (t56 != 3LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x484 = -1;
	volatile int32_t t57 = 10182;

    t57 = ((x481>>(x482<=x483))-x484);

    if (t57 != 15786120) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x489 = 27U;
	volatile int16_t x490 = INT16_MIN;
	int32_t x492 = INT32_MAX;
	volatile int32_t t58 = 285376;

    t58 = ((x489>>(x490<=x491))-x492);

    if (t58 != -2147483634) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x497 = 37646971896181LLU;
	int64_t x499 = INT64_MAX;
	static volatile int16_t x500 = -1;
	volatile uint64_t t59 = 21LLU;

    t59 = ((x497>>(x498<=x499))-x500);

    if (t59 != 18823485948091LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x502 = 8910;
	static int8_t x503 = INT8_MAX;
	static int32_t x504 = 448470839;

    t60 = ((x501>>(x502<=x503))-x504);

    if (t60 != -448470839) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x517 = UINT32_MAX;
	int8_t x518 = INT8_MIN;
	volatile int8_t x519 = INT8_MAX;
	int32_t x520 = -1243360;
	volatile uint32_t t61 = 39U;

    t61 = ((x517>>(x518<=x519))-x520);

    if (t61 != 2148727007U) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x521 = 115114311399069LLU;
	int16_t x523 = INT16_MAX;
	static int16_t x524 = -3;
	uint64_t t62 = 11LLU;

    t62 = ((x521>>(x522<=x523))-x524);

    if (t62 != 57557155699537LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x525 = 69669584141543060LLU;
	uint16_t x526 = 20843U;
	int32_t x527 = 0;
	uint32_t x528 = UINT32_MAX;
	volatile uint64_t t63 = 1474824991308217LLU;

    t63 = ((x525>>(x526<=x527))-x528);

    if (t63 != 69669579846575765LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x545 = INT16_MAX;
	uint16_t x546 = 79U;
	volatile uint64_t t64 = 13587339LLU;

    t64 = ((x545>>(x546<=x547))-x548);

    if (t64 != 18446744073709248434LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x553 = UINT16_MAX;
	int16_t x555 = INT16_MIN;
	static uint64_t x556 = 3369914547LLU;
	static volatile uint64_t t65 = 2736066572916043LLU;

    t65 = ((x553>>(x554<=x555))-x556);

    if (t65 != 18446744070339702604LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x577 = 3603LL;
	int64_t x578 = 185LL;
	uint16_t x579 = 552U;
	uint32_t x580 = 192579495U;
	volatile int64_t t66 = -396228LL;

    t66 = ((x577>>(x578<=x579))-x580);

    if (t66 != -192577694LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x583 = INT64_MIN;
	volatile int8_t x584 = 0;
	uint32_t t67 = 248U;

    t67 = ((x581>>(x582<=x583))-x584);

    if (t67 != 2147483647U) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x586 = INT32_MAX;
	static int64_t x587 = INT64_MAX;
	int8_t x588 = -22;
	static volatile int32_t t68 = -22904466;

    t68 = ((x585>>(x586<=x587))-x588);

    if (t68 != 27) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x593 = 1U;
	static volatile uint32_t x594 = 131384679U;
	uint64_t x595 = 882LLU;
	uint16_t x596 = UINT16_MAX;
	int32_t t69 = -629034206;

    t69 = ((x593>>(x594<=x595))-x596);

    if (t69 != -65534) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int64_t x597 = INT64_MAX;
	int16_t x598 = 3;
	volatile int16_t x599 = INT16_MAX;
	static int8_t x600 = -26;
	int64_t t70 = 0LL;

    t70 = ((x597>>(x598<=x599))-x600);

    if (t70 != 4611686018427387929LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x601 = INT8_MAX;
	uint16_t x603 = UINT16_MAX;
	uint16_t x604 = 16U;

    t71 = ((x601>>(x602<=x603))-x604);

    if (t71 != 47) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x605 = 79U;
	uint64_t x606 = 0LLU;
	int8_t x607 = 34;
	int16_t x608 = INT16_MIN;
	volatile int32_t t72 = 6170;

    t72 = ((x605>>(x606<=x607))-x608);

    if (t72 != 32807) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x609 = UINT16_MAX;
	volatile int16_t x611 = INT16_MAX;
	volatile int8_t x612 = INT8_MIN;
	int32_t t73 = 8363429;

    t73 = ((x609>>(x610<=x611))-x612);

    if (t73 != 32895) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x613 = 5307321;
	volatile int32_t x614 = INT32_MAX;
	int64_t x615 = INT64_MIN;
	static int32_t t74 = 1;

    t74 = ((x613>>(x614<=x615))-x616);

    if (t74 != 5307322) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x625 = 84U;
	volatile uint64_t x626 = 489686LLU;
	static int64_t x627 = -3172266783905541LL;
	int8_t x628 = INT8_MAX;
	int32_t t75 = 30;

    t75 = ((x625>>(x626<=x627))-x628);

    if (t75 != -85) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x637 = 912925775940224029LL;
	static int8_t x640 = -1;
	static int64_t t76 = 10915943649LL;

    t76 = ((x637>>(x638<=x639))-x640);

    if (t76 != 456462887970112015LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x645 = UINT8_MAX;
	volatile uint16_t x648 = 13U;
	int32_t t77 = 93574;

    t77 = ((x645>>(x646<=x647))-x648);

    if (t77 != 114) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x649 = 5621676834886822LLU;
	int8_t x650 = INT8_MIN;
	int8_t x651 = INT8_MAX;
	volatile int16_t x652 = INT16_MIN;
	volatile uint64_t t78 = 469684264070LLU;

    t78 = ((x649>>(x650<=x651))-x652);

    if (t78 != 2810838417476179LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x654 = 2;
	volatile int64_t x655 = -1LL;
	int8_t x656 = -1;
	volatile int32_t t79 = -16607486;

    t79 = ((x653>>(x654<=x655))-x656);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x662 = INT8_MIN;
	int64_t x663 = INT64_MIN;
	uint8_t x664 = 84U;
	volatile uint32_t t80 = 7U;

    t80 = ((x661>>(x662<=x663))-x664);

    if (t80 != 793376U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x665 = 1U;
	int16_t x666 = INT16_MAX;
	int8_t x668 = -1;
	int32_t t81 = 63;

    t81 = ((x665>>(x666<=x667))-x668);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x670 = -1;
	volatile uint16_t x671 = 2U;
	int8_t x672 = INT8_MAX;
	volatile int32_t t82 = 103262891;

    t82 = ((x669>>(x670<=x671))-x672);

    if (t82 != -64) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x673 = UINT64_MAX;
	uint16_t x674 = 12U;
	volatile uint8_t x675 = 17U;
	static int8_t x676 = INT8_MIN;
	uint64_t t83 = 6868LLU;

    t83 = ((x673>>(x674<=x675))-x676);

    if (t83 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x689 = 61360LL;
	volatile int32_t x690 = -26517;
	int16_t x692 = -1;
	volatile int64_t t84 = 157511LL;

    t84 = ((x689>>(x690<=x691))-x692);

    if (t84 != 30681LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x693 = 40;
	volatile int8_t x694 = -18;
	static int64_t x695 = 78388LL;
	int8_t x696 = INT8_MAX;
	volatile int32_t t85 = 308073928;

    t85 = ((x693>>(x694<=x695))-x696);

    if (t85 != -107) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x701 = 796148540;
	int32_t x702 = INT32_MIN;
	volatile int32_t t86 = 8966372;

    t86 = ((x701>>(x702<=x703))-x704);

    if (t86 != 398008735) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x705 = UINT64_MAX;
	int32_t x706 = -1;
	volatile int32_t x707 = INT32_MAX;
	static uint64_t x708 = 3759710859407586LLU;

    t87 = ((x705>>(x706<=x707))-x708);

    if (t87 != 9219612325995368221LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x709 = UINT64_MAX;
	int32_t x710 = INT32_MIN;
	int8_t x712 = INT8_MAX;
	volatile uint64_t t88 = 372357LLU;

    t88 = ((x709>>(x710<=x711))-x712);

    if (t88 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x713 = 1U;
	int16_t x714 = 673;
	int64_t x715 = -1LL;
	static volatile uint32_t t89 = 0U;

    t89 = ((x713>>(x714<=x715))-x716);

    if (t89 != 4294965841U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x721 = 1448376LL;
	uint64_t x722 = UINT64_MAX;
	volatile int8_t x723 = 0;
	uint16_t x724 = 19155U;
	volatile int64_t t90 = -1962253LL;

    t90 = ((x721>>(x722<=x723))-x724);

    if (t90 != 1429221LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x725 = 196357811;
	int64_t x727 = INT64_MIN;
	int8_t x728 = INT8_MIN;
	volatile int32_t t91 = -3837814;

    t91 = ((x725>>(x726<=x727))-x728);

    if (t91 != 196357939) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x733 = 21741LL;
	uint32_t x735 = 1114328481U;
	static int32_t x736 = INT32_MIN;
	volatile int64_t t92 = 6386094750747831LL;

    t92 = ((x733>>(x734<=x735))-x736);

    if (t92 != 2147505389LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x753 = INT16_MAX;
	int32_t x755 = INT32_MAX;
	volatile int32_t t93 = -1191;

    t93 = ((x753>>(x754<=x755))-x756);

    if (t93 != 16511) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x761 = 17954906LLU;
	uint16_t x762 = 43U;
	static volatile int32_t x763 = -1;
	volatile int16_t x764 = INT16_MIN;
	uint64_t t94 = 8548713887755LLU;

    t94 = ((x761>>(x762<=x763))-x764);

    if (t94 != 17987674LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x769 = 8U;
	uint32_t x770 = UINT32_MAX;
	volatile uint64_t x771 = UINT64_MAX;
	static int16_t x772 = -2;
	static int32_t t95 = -3655;

    t95 = ((x769>>(x770<=x771))-x772);

    if (t95 != 6) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x773 = 8439004614LLU;
	int16_t x775 = INT16_MIN;
	int16_t x776 = INT16_MIN;
	uint64_t t96 = 3484183238091LLU;

    t96 = ((x773>>(x774<=x775))-x776);

    if (t96 != 8439037382LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x778 = -1862;
	int8_t x779 = INT8_MIN;
	volatile uint64_t x780 = 202217LLU;

    t97 = ((x777>>(x778<=x779))-x780);

    if (t97 != 18446744073709349526LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x781 = 140468LLU;
	uint32_t x782 = 980395915U;
	int8_t x783 = INT8_MIN;
	int8_t x784 = 0;
	uint64_t t98 = 5354028838LLU;

    t98 = ((x781>>(x782<=x783))-x784);

    if (t98 != 70234LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x785 = UINT8_MAX;
	int16_t x786 = 379;
	int64_t x787 = -1LL;
	volatile int64_t t99 = -9465LL;

    t99 = ((x785>>(x786<=x787))-x788);

    if (t99 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x793 = 5;
	static int64_t x794 = -1250LL;
	uint16_t x796 = 379U;
	int32_t t100 = 4181193;

    t100 = ((x793>>(x794<=x795))-x796);

    if (t100 != -377) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x797 = UINT64_MAX;
	static int32_t x798 = INT32_MIN;
	uint16_t x799 = 6U;
	volatile uint32_t x800 = UINT32_MAX;
	uint64_t t101 = 381921517LLU;

    t101 = ((x797>>(x798<=x799))-x800);

    if (t101 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x809 = UINT32_MAX;
	int64_t x810 = INT64_MIN;
	volatile int16_t x811 = 3254;
	uint64_t x812 = 11420LLU;
	volatile uint64_t t102 = 272LLU;

    t102 = ((x809>>(x810<=x811))-x812);

    if (t102 != 2147472227LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x813 = INT8_MAX;
	uint32_t x815 = 3U;
	volatile uint64_t x816 = 8148870463LLU;
	uint64_t t103 = 4245228LLU;

    t103 = ((x813>>(x814<=x815))-x816);

    if (t103 != 18446744065560681280LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x817 = UINT64_MAX;
	uint32_t x818 = 233704U;
	int32_t x819 = 343888561;
	static int8_t x820 = INT8_MIN;
	uint64_t t104 = 786766632LLU;

    t104 = ((x817>>(x818<=x819))-x820);

    if (t104 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x821 = 239;
	int32_t x823 = INT32_MIN;
	int8_t x824 = INT8_MIN;
	int32_t t105 = 6;

    t105 = ((x821>>(x822<=x823))-x824);

    if (t105 != 367) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x827 = INT8_MIN;
	volatile uint64_t x828 = UINT64_MAX;
	uint64_t t106 = 3LLU;

    t106 = ((x825>>(x826<=x827))-x828);

    if (t106 != 30277586LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x830 = INT32_MIN;
	volatile int16_t x831 = INT16_MIN;
	uint16_t x832 = UINT16_MAX;
	uint64_t t107 = 842898379672852LLU;

    t107 = ((x829>>(x830<=x831))-x832);

    if (t107 != 9223372036854710272LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x837 = 1U;
	int64_t x838 = -106545LL;
	volatile int16_t x840 = 0;
	static uint32_t t108 = 2U;

    t108 = ((x837>>(x838<=x839))-x840);

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x845 = UINT32_MAX;
	int8_t x846 = INT8_MIN;
	uint32_t x847 = 87980U;
	int32_t x848 = 1327;
	static uint32_t t109 = 401188827U;

    t109 = ((x845>>(x846<=x847))-x848);

    if (t109 != 4294965968U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x849 = 96U;
	uint64_t x850 = 28LLU;
	int32_t x852 = INT32_MIN;
	uint32_t t110 = 276U;

    t110 = ((x849>>(x850<=x851))-x852);

    if (t110 != 2147483696U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x857 = UINT32_MAX;
	static volatile uint32_t x858 = 1235579054U;
	static int64_t x859 = -52143687LL;
	int64_t x860 = 168564LL;
	int64_t t111 = 15922677LL;

    t111 = ((x857>>(x858<=x859))-x860);

    if (t111 != 4294798731LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int32_t x865 = INT32_MAX;
	int64_t x866 = 354LL;
	int16_t x868 = 2;
	int32_t t112 = -5162;

    t112 = ((x865>>(x866<=x867))-x868);

    if (t112 != 2147483645) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x874 = INT32_MIN;
	int32_t x875 = -1;
	int16_t x876 = INT16_MIN;

    t113 = ((x873>>(x874<=x875))-x876);

    if (t113 != 33723) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x897 = 1;
	static int16_t x898 = INT16_MAX;
	int32_t x899 = INT32_MIN;
	int64_t x900 = -1LL;
	volatile int64_t t114 = -137LL;

    t114 = ((x897>>(x898<=x899))-x900);

    if (t114 != 2LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x909 = 129U;
	static uint16_t x910 = UINT16_MAX;
	volatile int8_t x912 = INT8_MAX;
	volatile int32_t t115 = -356982;

    t115 = ((x909>>(x910<=x911))-x912);

    if (t115 != 2) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x917 = 1U;
	int64_t x919 = INT64_MIN;
	uint32_t x920 = 27U;
	volatile uint32_t t116 = 1U;

    t116 = ((x917>>(x918<=x919))-x920);

    if (t116 != 4294967270U) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x925 = INT16_MAX;
	int16_t x926 = INT16_MAX;
	static volatile int8_t x927 = 1;
	int8_t x928 = -10;
	volatile int32_t t117 = 9320803;

    t117 = ((x925>>(x926<=x927))-x928);

    if (t117 != 32777) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x929 = UINT64_MAX;
	int32_t x930 = 344;
	static int64_t x931 = -1LL;
	uint32_t x932 = 3U;
	static volatile uint64_t t118 = 11175560604662451LLU;

    t118 = ((x929>>(x930<=x931))-x932);

    if (t118 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x933 = UINT16_MAX;
	volatile uint16_t x934 = 5U;
	volatile int16_t x935 = 1368;
	volatile int8_t x936 = INT8_MIN;
	volatile int32_t t119 = -3043;

    t119 = ((x933>>(x934<=x935))-x936);

    if (t119 != 32895) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x937 = 16846U;
	int64_t x938 = INT64_MIN;
	int16_t x939 = 234;
	static int8_t x940 = 3;
	volatile int32_t t120 = -49019;

    t120 = ((x937>>(x938<=x939))-x940);

    if (t120 != 8420) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x949 = 1U;
	int64_t x951 = 1451968846500633LL;
	volatile int64_t t121 = -7383080024704LL;

    t121 = ((x949>>(x950<=x951))-x952);

    if (t121 != -97022609693095364LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x957 = UINT16_MAX;
	static volatile int64_t x958 = 1LL;
	static volatile int16_t x959 = 0;
	uint64_t t122 = 1LLU;

    t122 = ((x957>>(x958<=x959))-x960);

    if (t122 != 65534LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x965 = INT16_MAX;
	int8_t x966 = 4;
	static volatile int32_t x967 = INT32_MAX;
	volatile int64_t t123 = 12993983223938LL;

    t123 = ((x965>>(x966<=x967))-x968);

    if (t123 != -9223372036854759424LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x977 = INT8_MAX;
	int16_t x978 = -330;
	volatile uint32_t x979 = 21633U;
	int32_t t124 = 1;

    t124 = ((x977>>(x978<=x979))-x980);

    if (t124 != -193) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x985 = 198U;
	static volatile uint16_t x986 = UINT16_MAX;
	int64_t x987 = -25931626211LL;
	uint32_t x988 = 0U;
	uint32_t t125 = 274U;

    t125 = ((x985>>(x986<=x987))-x988);

    if (t125 != 198U) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x1001 = 1;
	volatile int8_t x1002 = -1;
	volatile int32_t x1003 = -40;
	volatile int32_t x1004 = 177;

    t126 = ((x1001>>(x1002<=x1003))-x1004);

    if (t126 != -176) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x1005 = 18506U;
	volatile int16_t x1006 = -1;
	int64_t x1007 = 33638102775021696LL;
	volatile uint64_t x1008 = UINT64_MAX;
	volatile uint64_t t127 = 63712417566263LLU;

    t127 = ((x1005>>(x1006<=x1007))-x1008);

    if (t127 != 9254LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x1021 = INT16_MAX;
	static int8_t x1022 = INT8_MIN;
	uint32_t x1023 = 1158U;

    t128 = ((x1021>>(x1022<=x1023))-x1024);

    if (t128 != 32878) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x1025 = 3U;
	static volatile uint16_t x1026 = 142U;
	static int32_t t129 = 1558234;

    t129 = ((x1025>>(x1026<=x1027))-x1028);

    if (t129 != -23279) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x1049 = 219658190249LLU;
	uint16_t x1050 = UINT16_MAX;
	volatile int16_t x1051 = -1;
	int8_t x1052 = INT8_MAX;
	uint64_t t130 = 96004823898012LLU;

    t130 = ((x1049>>(x1050<=x1051))-x1052);

    if (t130 != 219658190122LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x1053 = 204891688U;
	int64_t x1054 = INT64_MIN;
	uint16_t x1055 = UINT16_MAX;
	uint64_t x1056 = UINT64_MAX;
	uint64_t t131 = 1001189787583528LLU;

    t131 = ((x1053>>(x1054<=x1055))-x1056);

    if (t131 != 102445845LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x1069 = 257U;
	volatile int16_t x1070 = -14895;
	int64_t x1071 = INT64_MIN;
	static uint64_t x1072 = 64833934892013469LLU;
	volatile uint64_t t132 = 55750972116083LLU;

    t132 = ((x1069>>(x1070<=x1071))-x1072);

    if (t132 != 18381910138817538404LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x1073 = UINT64_MAX;
	static uint8_t x1075 = UINT8_MAX;
	static uint64_t t133 = 275514471479169296LLU;

    t133 = ((x1073>>(x1074<=x1075))-x1076);

    if (t133 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x1082 = -1;
	int8_t x1083 = -1;
	uint32_t x1084 = 28U;

    t134 = ((x1081>>(x1082<=x1083))-x1084);

    if (t134 != 35U) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int32_t x1085 = INT32_MAX;
	int8_t x1086 = INT8_MAX;
	volatile int32_t x1087 = INT32_MIN;
	uint64_t x1088 = 9899154242LLU;
	static uint64_t t135 = 2096995LLU;

    t135 = ((x1085>>(x1086<=x1087))-x1088);

    if (t135 != 18446744065957881021LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x1090 = UINT64_MAX;
	int64_t x1091 = INT64_MAX;
	int32_t x1092 = -1;
	static volatile int32_t t136 = -63;

    t136 = ((x1089>>(x1090<=x1091))-x1092);

    if (t136 != 128) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x1101 = UINT8_MAX;
	static volatile uint64_t x1102 = 751804559820340LLU;
	int64_t x1103 = 953031726590056LL;
	int16_t x1104 = INT16_MIN;

    t137 = ((x1101>>(x1102<=x1103))-x1104);

    if (t137 != 32895) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x1106 = -13731648664106079LL;
	int8_t x1107 = INT8_MAX;
	int32_t x1108 = INT32_MAX;
	static volatile int32_t t138 = 693;

    t138 = ((x1105>>(x1106<=x1107))-x1108);

    if (t138 != -2147483647) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x1109 = 3U;
	uint32_t x1110 = UINT32_MAX;
	uint16_t x1112 = UINT16_MAX;
	volatile uint32_t t139 = 18592609U;

    t139 = ((x1109>>(x1110<=x1111))-x1112);

    if (t139 != 4294901764U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x1121 = 0U;
	uint16_t x1123 = UINT16_MAX;
	volatile int32_t x1124 = 0;
	uint32_t t140 = 995U;

    t140 = ((x1121>>(x1122<=x1123))-x1124);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x1125 = 27U;
	volatile int32_t x1126 = -1437678;
	int16_t x1128 = 4;
	volatile int32_t t141 = 500;

    t141 = ((x1125>>(x1126<=x1127))-x1128);

    if (t141 != 23) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x1141 = INT8_MAX;
	volatile int32_t x1142 = 428;
	int8_t x1144 = INT8_MIN;
	static int32_t t142 = -9;

    t142 = ((x1141>>(x1142<=x1143))-x1144);

    if (t142 != 255) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x1145 = INT8_MAX;
	int16_t x1146 = -1;
	int16_t x1147 = -1;
	static uint16_t x1148 = UINT16_MAX;
	int32_t t143 = -3979;

    t143 = ((x1145>>(x1146<=x1147))-x1148);

    if (t143 != -65472) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x1153 = 13618629166935500LLU;
	volatile int16_t x1154 = -1;
	volatile int8_t x1155 = -6;
	volatile uint64_t t144 = 2972322530LLU;

    t144 = ((x1153>>(x1154<=x1155))-x1156);

    if (t144 != 13618629166968268LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x1158 = 526811618073LL;
	volatile uint32_t x1159 = 1U;
	static uint32_t x1160 = 961972U;
	volatile uint64_t t145 = 209457191091876LLU;

    t145 = ((x1157>>(x1158<=x1159))-x1160);

    if (t145 != 18446744073708597166LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x1161 = 121555656452592933LLU;
	static uint16_t x1162 = 111U;
	static volatile int32_t x1163 = -275;
	int64_t x1164 = -1LL;
	static volatile uint64_t t146 = 310LLU;

    t146 = ((x1161>>(x1162<=x1163))-x1164);

    if (t146 != 121555656452592934LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x1165 = 31334U;
	volatile int32_t x1166 = -14746446;
	volatile int64_t x1168 = -3010240926LL;

    t147 = ((x1165>>(x1166<=x1167))-x1168);

    if (t147 != 3010256593LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1181 = 1980LL;
	volatile uint32_t x1182 = 487088454U;
	uint64_t x1183 = UINT64_MAX;
	static uint64_t x1184 = 333431866LLU;

    t148 = ((x1181>>(x1182<=x1183))-x1184);

    if (t148 != 18446744073376120740LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x1185 = 6U;
	volatile uint16_t x1186 = 269U;
	int64_t x1187 = INT64_MIN;
	static int16_t x1188 = 1;
	static volatile int32_t t149 = 34264;

    t149 = ((x1185>>(x1186<=x1187))-x1188);

    if (t149 != 5) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x1189 = INT8_MAX;
	int8_t x1190 = 6;
	uint64_t x1191 = 4LLU;
	int32_t x1192 = -1;
	static int32_t t150 = 396;

    t150 = ((x1189>>(x1190<=x1191))-x1192);

    if (t150 != 128) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x1229 = UINT8_MAX;
	uint16_t x1230 = UINT16_MAX;
	int32_t x1232 = -1;
	int32_t t151 = 483;

    t151 = ((x1229>>(x1230<=x1231))-x1232);

    if (t151 != 256) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x1241 = 1366;
	static int16_t x1242 = -1;
	static volatile uint32_t t152 = 832804329U;

    t152 = ((x1241>>(x1242<=x1243))-x1244);

    if (t152 != 684U) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x1245 = 1;
	volatile int8_t x1246 = 17;
	int8_t x1247 = 0;
	int8_t x1248 = 2;
	static volatile int32_t t153 = -206676;

    t153 = ((x1245>>(x1246<=x1247))-x1248);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x1249 = UINT64_MAX;
	static volatile uint8_t x1250 = 23U;
	volatile int16_t x1251 = INT16_MIN;
	int64_t x1252 = -1LL;
	uint64_t t154 = 4LLU;

    t154 = ((x1249>>(x1250<=x1251))-x1252);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x1257 = UINT32_MAX;
	volatile int64_t x1258 = 1403050LL;
	int32_t x1259 = 685;
	static int64_t x1260 = 1295879LL;

    t155 = ((x1257>>(x1258<=x1259))-x1260);

    if (t155 != 4293671416LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1269 = 3024593;
	uint8_t x1270 = 1U;
	int16_t x1271 = 22;
	static uint32_t x1272 = 51697U;
	volatile uint32_t t156 = 2U;

    t156 = ((x1269>>(x1270<=x1271))-x1272);

    if (t156 != 1460599U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x1273 = UINT64_MAX;
	int16_t x1274 = -188;
	int16_t x1275 = -125;
	volatile int32_t x1276 = -187848756;
	volatile uint64_t t157 = 384598901518LLU;

    t157 = ((x1273>>(x1274<=x1275))-x1276);

    if (t157 != 9223372037042624563LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1281 = 15;
	int64_t x1282 = INT64_MAX;
	uint64_t x1283 = 2921311825956612584LLU;
	int32_t t158 = -2239789;

    t158 = ((x1281>>(x1282<=x1283))-x1284);

    if (t158 != -1325) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1297 = 32764242100110796LLU;
	uint32_t x1298 = UINT32_MAX;
	uint16_t x1300 = 40U;
	volatile uint64_t t159 = 1024159382692LLU;

    t159 = ((x1297>>(x1298<=x1299))-x1300);

    if (t159 != 32764242100110756LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x1309 = UINT32_MAX;
	static volatile uint8_t x1310 = 1U;
	static uint64_t x1311 = UINT64_MAX;
	uint16_t x1312 = 58U;
	uint32_t t160 = 9U;

    t160 = ((x1309>>(x1310<=x1311))-x1312);

    if (t160 != 2147483589U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x1317 = 7U;
	int16_t x1318 = 2799;
	volatile int8_t x1319 = INT8_MIN;
	int32_t t161 = 54406149;

    t161 = ((x1317>>(x1318<=x1319))-x1320);

    if (t161 != 8) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x1329 = UINT16_MAX;
	int16_t x1332 = INT16_MIN;
	int32_t t162 = -24484374;

    t162 = ((x1329>>(x1330<=x1331))-x1332);

    if (t162 != 98303) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1333 = 0;
	uint32_t x1334 = UINT32_MAX;
	int64_t x1335 = INT64_MAX;
	volatile int32_t x1336 = INT32_MAX;
	volatile int32_t t163 = 35140341;

    t163 = ((x1333>>(x1334<=x1335))-x1336);

    if (t163 != -2147483647) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x1341 = UINT16_MAX;
	volatile int8_t x1342 = -7;
	uint64_t x1343 = 271725101477155645LLU;
	uint8_t x1344 = 0U;
	volatile int32_t t164 = 808;

    t164 = ((x1341>>(x1342<=x1343))-x1344);

    if (t164 != 65535) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1345 = 1;
	int32_t x1348 = -1;
	volatile int32_t t165 = 145803467;

    t165 = ((x1345>>(x1346<=x1347))-x1348);

    if (t165 != 2) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1357 = INT16_MAX;
	static volatile uint8_t x1358 = 0U;
	int16_t x1359 = -1;
	int32_t x1360 = -1;
	volatile int32_t t166 = -43780492;

    t166 = ((x1357>>(x1358<=x1359))-x1360);

    if (t166 != 32768) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1361 = 207;
	volatile int8_t x1362 = INT8_MIN;
	uint64_t t167 = 6851977737LLU;

    t167 = ((x1361>>(x1362<=x1363))-x1364);

    if (t167 != 104LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x1373 = INT8_MAX;
	static uint16_t x1374 = UINT16_MAX;
	volatile uint16_t x1375 = 0U;
	volatile int64_t x1376 = INT64_MAX;

    t168 = ((x1373>>(x1374<=x1375))-x1376);

    if (t168 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x1413 = INT32_MAX;
	int16_t x1414 = 0;
	int64_t x1415 = 35LL;
	uint64_t x1416 = 6070903279890LLU;

    t169 = ((x1413>>(x1414<=x1415))-x1416);

    if (t169 != 18446738003880013549LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x1426 = 1U;
	uint16_t x1427 = UINT16_MAX;
	volatile uint64_t t170 = 1159350399LLU;

    t170 = ((x1425>>(x1426<=x1427))-x1428);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1429 = 0;
	volatile uint32_t x1430 = UINT32_MAX;
	int16_t x1431 = -1;

    t171 = ((x1429>>(x1430<=x1431))-x1432);

    if (t171 != -255) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x1437 = 1487U;
	int16_t x1439 = INT16_MIN;
	static int32_t t172 = -47935;

    t172 = ((x1437>>(x1438<=x1439))-x1440);

    if (t172 != 1488) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1445 = 0;
	uint64_t x1446 = 1LLU;
	uint16_t x1447 = 10U;
	uint32_t x1448 = 23064193U;

    t173 = ((x1445>>(x1446<=x1447))-x1448);

    if (t173 != 4271903103U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x1454 = -1;
	static int8_t x1455 = INT8_MAX;
	static uint64_t x1456 = 218LLU;
	volatile uint64_t t174 = 228068636LLU;

    t174 = ((x1453>>(x1454<=x1455))-x1456);

    if (t174 != 1084LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1461 = 38LLU;
	static int16_t x1463 = INT16_MIN;
	static int64_t x1464 = -1LL;
	volatile uint64_t t175 = 562357910315124180LLU;

    t175 = ((x1461>>(x1462<=x1463))-x1464);

    if (t175 != 20LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x1469 = 108;
	uint64_t x1470 = UINT64_MAX;
	uint8_t x1471 = 7U;

    t176 = ((x1469>>(x1470<=x1471))-x1472);

    if (t176 != -85) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1474 = 18844;
	int32_t x1475 = -1;
	volatile int64_t x1476 = INT64_MAX;
	int64_t t177 = -3LL;

    t177 = ((x1473>>(x1474<=x1475))-x1476);

    if (t177 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1490 = 4U;
	uint64_t x1491 = UINT64_MAX;
	uint8_t x1492 = UINT8_MAX;
	volatile int32_t t178 = 184;

    t178 = ((x1489>>(x1490<=x1491))-x1492);

    if (t178 != -255) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1493 = UINT32_MAX;
	int64_t x1494 = INT64_MIN;
	static uint8_t x1495 = 1U;
	uint16_t x1496 = UINT16_MAX;

    t179 = ((x1493>>(x1494<=x1495))-x1496);

    if (t179 != 2147418112U) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int8_t x1505 = 0;
	int32_t x1508 = 476696905;
	static int32_t t180 = 12409383;

    t180 = ((x1505>>(x1506<=x1507))-x1508);

    if (t180 != -476696905) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x1517 = 41U;
	static int64_t x1519 = INT64_MIN;
	int32_t t181 = 176705509;

    t181 = ((x1517>>(x1518<=x1519))-x1520);

    if (t181 != 32809) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x1525 = INT8_MAX;
	int32_t x1526 = 1041242902;
	int8_t x1527 = INT8_MAX;
	int64_t x1528 = -818771672LL;
	int64_t t182 = -54LL;

    t182 = ((x1525>>(x1526<=x1527))-x1528);

    if (t182 != 818771799LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x1549 = 6U;
	uint16_t x1550 = 470U;
	static uint32_t x1552 = UINT32_MAX;
	uint32_t t183 = 980300633U;

    t183 = ((x1549>>(x1550<=x1551))-x1552);

    if (t183 != 7U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1557 = 1U;
	int32_t x1560 = -14857;
	volatile uint32_t t184 = 631953U;

    t184 = ((x1557>>(x1558<=x1559))-x1560);

    if (t184 != 14857U) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x1589 = 69LLU;
	int32_t x1590 = -30599;
	uint32_t x1591 = 14836U;
	static volatile int8_t x1592 = INT8_MAX;

    t185 = ((x1589>>(x1590<=x1591))-x1592);

    if (t185 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1593 = INT8_MAX;
	int32_t x1594 = -1;
	int8_t x1595 = -1;
	int16_t x1596 = INT16_MIN;
	int32_t t186 = -1;

    t186 = ((x1593>>(x1594<=x1595))-x1596);

    if (t186 != 32831) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x1602 = -9513565944084LL;
	int32_t x1603 = -1;
	int8_t x1604 = INT8_MAX;
	volatile int32_t t187 = -4;

    t187 = ((x1601>>(x1602<=x1603))-x1604);

    if (t187 != -125) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1609 = UINT32_MAX;
	static int8_t x1610 = -1;
	uint32_t x1611 = 21875771U;
	volatile int32_t x1612 = 17961;
	static volatile uint32_t t188 = 279502981U;

    t188 = ((x1609>>(x1610<=x1611))-x1612);

    if (t188 != 4294949334U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x1621 = UINT8_MAX;
	static int16_t x1622 = -11232;
	uint8_t x1624 = 112U;
	volatile int32_t t189 = 27;

    t189 = ((x1621>>(x1622<=x1623))-x1624);

    if (t189 != 143) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x1633 = 11U;
	int32_t x1635 = -1;
	int16_t x1636 = -236;
	int32_t t190 = -206;

    t190 = ((x1633>>(x1634<=x1635))-x1636);

    if (t190 != 241) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x1637 = INT8_MAX;
	uint32_t x1638 = 47413U;
	int32_t x1639 = -1;
	volatile uint32_t x1640 = UINT32_MAX;
	volatile uint32_t t191 = 10027123U;

    t191 = ((x1637>>(x1638<=x1639))-x1640);

    if (t191 != 64U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1653 = 49U;
	int32_t x1654 = -191;
	static int32_t x1655 = -1;
	uint32_t x1656 = 14653057U;
	static uint32_t t192 = 5361U;

    t192 = ((x1653>>(x1654<=x1655))-x1656);

    if (t192 != 4280314263U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1658 = INT8_MIN;
	uint16_t x1659 = 0U;
	uint64_t x1660 = 56151554629794398LLU;
	static uint64_t t193 = 63628LLU;

    t193 = ((x1657>>(x1658<=x1659))-x1660);

    if (t193 != 18390592519253845736LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x1661 = 7911964051LL;
	int16_t x1662 = -1;
	int32_t x1663 = INT32_MIN;
	static int16_t x1664 = INT16_MIN;
	volatile int64_t t194 = -239LL;

    t194 = ((x1661>>(x1662<=x1663))-x1664);

    if (t194 != 7911996819LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1665 = INT8_MAX;
	static int8_t x1667 = 19;
	volatile int32_t t195 = -1852355;

    t195 = ((x1665>>(x1666<=x1667))-x1668);

    if (t195 != -35) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1673 = 23;
	static int64_t x1674 = -57400532771992LL;
	volatile int32_t t196 = -1524763;

    t196 = ((x1673>>(x1674<=x1675))-x1676);

    if (t196 != 18) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1685 = 94;
	int16_t x1686 = INT16_MIN;
	static int8_t x1687 = INT8_MIN;
	int8_t x1688 = INT8_MAX;
	volatile int32_t t197 = 203996;

    t197 = ((x1685>>(x1686<=x1687))-x1688);

    if (t197 != -80) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x1689 = 38U;
	static int32_t x1690 = -1;
	int16_t x1692 = -1;
	static volatile int32_t t198 = -86265255;

    t198 = ((x1689>>(x1690<=x1691))-x1692);

    if (t198 != 39) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x1702 = INT32_MIN;
	static int16_t x1703 = -24;
	int64_t x1704 = INT64_MAX;
	int64_t t199 = -82225LL;

    t199 = ((x1701>>(x1702<=x1703))-x1704);

    if (t199 != -9223372036854775807LL) { NG(); } else { ; }
	
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


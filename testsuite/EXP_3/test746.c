
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

volatile int16_t x41 = INT16_MIN;
static volatile int32_t x44 = INT32_MIN;
static volatile uint64_t x52 = 173LLU;
uint64_t t4 = 917789848753827LLU;
static uint8_t x54 = 52U;
static volatile int64_t t5 = -418419078338736160LL;
int64_t x78 = 3987LL;
volatile int64_t t8 = 886683734LL;
static volatile int16_t x83 = -1;
static int32_t t9 = -689612610;
int32_t x97 = INT32_MAX;
int16_t x100 = INT16_MIN;
uint8_t x110 = 27U;
int8_t x141 = -1;
int64_t x145 = -1LL;
uint32_t x150 = 58081U;
static uint8_t x162 = 21U;
static int32_t x163 = INT32_MAX;
volatile int32_t x206 = 3681;
uint32_t x208 = 2908U;
int32_t x222 = INT32_MIN;
volatile int64_t t25 = -6743500108811460LL;
uint8_t x235 = UINT8_MAX;
int16_t x259 = INT16_MIN;
int64_t t32 = 1LL;
int64_t x299 = INT64_MAX;
uint8_t x300 = UINT8_MAX;
uint8_t x307 = 99U;
int8_t x308 = -2;
int32_t x310 = 1;
int8_t x312 = INT8_MAX;
volatile int64_t t39 = 1891764066223827855LL;
uint64_t x354 = 288287LLU;
volatile int32_t t42 = 7669675;
volatile int16_t x379 = INT16_MIN;
static int8_t x380 = -1;
volatile int8_t x395 = INT8_MAX;
static volatile int64_t t45 = 0LL;
int64_t x399 = INT64_MIN;
static volatile int64_t x400 = 13219LL;
volatile int64_t t48 = -1285111LL;
volatile int64_t x426 = INT64_MAX;
volatile int64_t t50 = 4965074521198LL;
static int32_t x441 = 90538326;
uint64_t t51 = 7777071424733LLU;
int64_t t53 = 15847LL;
static uint32_t x473 = UINT32_MAX;
int32_t x474 = INT32_MAX;
int32_t x489 = 4;
volatile int32_t t56 = -5902;
volatile uint32_t x502 = UINT32_MAX;
static int64_t t60 = 264948LL;
int64_t x526 = 1683720138432498842LL;
volatile int8_t x533 = INT8_MAX;
int64_t x534 = INT64_MIN;
int8_t x536 = -17;
static uint32_t x549 = UINT32_MAX;
int64_t t64 = -102758LL;
int16_t x572 = INT16_MIN;
static uint16_t x575 = 199U;
static volatile uint64_t t67 = 465601277241151685LLU;
int32_t x593 = -1;
uint8_t x605 = 0U;
int8_t x608 = -18;
uint16_t x612 = 19U;
int32_t t73 = 7753;
int16_t x623 = 85;
uint32_t x626 = UINT32_MAX;
int16_t x631 = INT16_MIN;
volatile int32_t t76 = -7;
static int8_t x635 = INT8_MAX;
int64_t t77 = -3212LL;
static volatile int64_t x639 = INT64_MIN;
int32_t x670 = -203;
int32_t x671 = INT32_MIN;
volatile uint8_t x690 = 31U;
static int32_t x692 = 4;
int16_t x697 = INT16_MIN;
static int16_t x698 = 1;
volatile int64_t x703 = -139LL;
static uint8_t x720 = 48U;
static int32_t x726 = INT32_MAX;
volatile int64_t t86 = -21557265951973LL;
volatile uint64_t t87 = 65219242LLU;
volatile uint64_t x749 = UINT64_MAX;
int32_t x753 = -1;
static uint8_t x761 = 12U;
static volatile int32_t x764 = -1;
int32_t t92 = -454;
static uint64_t x769 = 239974403LLU;
int64_t x770 = INT64_MAX;
volatile int32_t x774 = -1;
int8_t x792 = -1;
int8_t x796 = INT8_MIN;
volatile uint64_t t96 = 3LLU;
volatile uint32_t x805 = 76436U;
int8_t x808 = INT8_MIN;
static volatile uint64_t t97 = 26964569LLU;
volatile uint32_t t98 = 296099531U;
volatile int8_t x817 = 0;
static volatile int64_t t99 = -299314927562655LL;
static int64_t x822 = -1LL;
int8_t x824 = -24;
volatile int16_t x829 = INT16_MIN;
static volatile uint16_t x830 = 7U;
static int16_t x831 = INT16_MAX;
static uint32_t x839 = 231826U;
volatile uint32_t t102 = 8U;
static int8_t x849 = INT8_MAX;
int8_t x852 = INT8_MIN;
static volatile int64_t x854 = -5987328427143LL;
static volatile uint32_t t105 = 487135U;
uint16_t x873 = UINT16_MAX;
int8_t x874 = INT8_MIN;
uint32_t x876 = 1695217U;
uint32_t x885 = 400100021U;
int32_t x889 = INT32_MIN;
volatile int8_t x890 = 2;
int32_t x907 = INT32_MAX;
static int8_t x908 = -1;
int64_t x949 = -1LL;
int16_t x951 = INT16_MAX;
volatile uint64_t t111 = 2LLU;
int16_t x953 = INT16_MIN;
int64_t x955 = INT64_MIN;
static int32_t x970 = 444851976;
static int32_t x972 = INT32_MIN;
volatile uint32_t t113 = 147188627U;
static int8_t x986 = 1;
static volatile int32_t t117 = -132452;
uint16_t x1007 = 22U;
static int8_t x1008 = -6;
uint64_t x1012 = 604990659LLU;
int64_t x1030 = -1LL;
int16_t x1042 = INT16_MIN;
static int16_t x1052 = INT16_MIN;
uint8_t x1055 = UINT8_MAX;
uint64_t t128 = 5LLU;
int32_t x1084 = 467103390;
uint64_t t130 = 19LLU;
int8_t x1141 = -2;
volatile uint64_t t136 = 1088558998070LLU;
volatile int8_t x1172 = INT8_MAX;
uint32_t x1174 = 995U;
int32_t x1176 = INT32_MIN;
volatile int32_t x1182 = INT32_MIN;
uint64_t x1201 = 207555LLU;
volatile int32_t t143 = 5456;
static int32_t x1230 = INT32_MAX;
int8_t x1235 = INT8_MIN;
int64_t x1236 = -1LL;
int32_t x1246 = -1;
static uint32_t x1247 = 7361379U;
uint64_t x1267 = 2596096990LLU;
static int64_t x1285 = INT64_MAX;
uint64_t x1286 = 3721166LLU;
volatile uint64_t t149 = 21806757150749089LLU;
int32_t x1293 = INT32_MIN;
int16_t x1296 = 93;
volatile int8_t x1312 = INT8_MIN;
volatile int64_t t153 = -170777591367LL;
uint64_t x1321 = UINT64_MAX;
uint8_t x1329 = 0U;
volatile uint64_t x1331 = UINT64_MAX;
uint16_t x1332 = UINT16_MAX;
static uint8_t x1353 = UINT8_MAX;
volatile uint64_t t158 = 14365322LLU;
int64_t x1368 = 1245LL;
int64_t x1370 = -690799994712LL;
int8_t x1371 = INT8_MIN;
static uint8_t x1374 = UINT8_MAX;
volatile int32_t x1403 = 2;
int8_t x1413 = INT8_MIN;
static volatile int64_t x1414 = 778813988548324LL;
volatile int32_t x1416 = 7;
volatile int64_t t163 = 23442809397LL;
int8_t x1417 = -6;
uint32_t t166 = 187547U;
uint8_t x1433 = UINT8_MAX;
int32_t x1437 = INT32_MAX;
int32_t x1443 = INT32_MAX;
int16_t x1446 = INT16_MAX;
int64_t t170 = 117210746611664534LL;
uint8_t x1459 = 4U;
int32_t t171 = 25223;
uint16_t x1471 = UINT16_MAX;
int16_t x1472 = -1;
int64_t x1506 = 439595405LL;
int64_t x1507 = 1402LL;
int16_t x1516 = 19;
int8_t x1522 = 0;
uint32_t x1523 = 113956U;
uint64_t x1529 = 39321671LLU;
volatile uint16_t x1542 = 14U;
static uint32_t x1543 = 122276780U;
static uint16_t x1584 = UINT16_MAX;
static volatile int64_t t183 = -1LL;
int64_t x1590 = -4308318678660LL;
int64_t x1594 = -490338797300065LL;
int64_t x1611 = INT64_MAX;
int64_t t186 = -540870538186LL;
volatile int8_t x1613 = INT8_MIN;
volatile int8_t x1615 = INT8_MIN;
volatile int64_t t188 = -106219322LL;
uint64_t x1629 = UINT64_MAX;
volatile int64_t t190 = -2LL;
static int8_t x1638 = INT8_MAX;
int32_t x1644 = -1;
int16_t x1647 = INT16_MIN;
uint32_t x1650 = 30953747U;
static int16_t x1655 = INT16_MIN;
int32_t x1657 = -1;
static int16_t x1674 = -1;
static int32_t x1675 = INT32_MIN;
int32_t x1680 = INT32_MIN;


void f0(void) {
    	volatile int8_t x1 = 3;
	static int16_t x2 = -1;
	int32_t x3 = INT32_MIN;
	int16_t x4 = INT16_MAX;
	int32_t t0 = 34;

    t0 = ((x1&x2)/(x3/x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x9 = 1U;
	static uint64_t x10 = UINT64_MAX;
	static int16_t x11 = -9476;
	uint8_t x12 = 62U;
	volatile uint64_t t1 = 1LLU;

    t1 = ((x9&x10)/(x11/x12));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x21 = INT64_MAX;
	static int16_t x22 = 0;
	int16_t x23 = -1;
	int16_t x24 = -1;
	volatile int64_t t2 = 13451406950668962LL;

    t2 = ((x21&x22)/(x23/x24));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x42 = UINT16_MAX;
	int32_t x43 = INT32_MIN;
	volatile int32_t t3 = -218998;

    t3 = ((x41&x42)/(x43/x44));

    if (t3 != 32768) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x49 = -1;
	static volatile int16_t x50 = INT16_MIN;
	volatile int64_t x51 = -1LL;

    t4 = ((x49&x50)/(x51/x52));

    if (t4 != 172LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x53 = 1851U;
	static volatile int64_t x55 = 772639989247752675LL;
	static volatile int32_t x56 = INT32_MAX;

    t5 = ((x53&x54)/(x55/x56));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x57 = INT16_MIN;
	uint8_t x58 = 54U;
	int32_t x59 = INT32_MIN;
	static int8_t x60 = 1;
	volatile int32_t t6 = 0;

    t6 = ((x57&x58)/(x59/x60));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x61 = INT16_MIN;
	int8_t x62 = INT8_MAX;
	int64_t x63 = 69341918199656LL;
	uint8_t x64 = 1U;
	volatile int64_t t7 = 105829959LL;

    t7 = ((x61&x62)/(x63/x64));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x77 = 1;
	uint32_t x79 = 427278196U;
	static uint32_t x80 = 1U;

    t8 = ((x77&x78)/(x79/x80));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x81 = 2;
	int32_t x82 = 74373;
	volatile int32_t x84 = -1;

    t9 = ((x81&x82)/(x83/x84));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x98 = 2021101U;
	volatile uint64_t x99 = UINT64_MAX;
	volatile uint64_t t10 = 199933LLU;

    t10 = ((x97&x98)/(x99/x100));

    if (t10 != 2021101LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x101 = INT32_MIN;
	static volatile int64_t x102 = INT64_MIN;
	int8_t x103 = -1;
	uint64_t x104 = 34342583737LLU;
	volatile uint64_t t11 = 1LLU;

    t11 = ((x101&x102)/(x103/x104));

    if (t11 != 17171291900LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x109 = 0U;
	uint16_t x111 = UINT16_MAX;
	int16_t x112 = INT16_MIN;
	volatile int32_t t12 = -72;

    t12 = ((x109&x110)/(x111/x112));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x113 = 10424LL;
	volatile int32_t x114 = INT32_MIN;
	int64_t x115 = INT64_MAX;
	int16_t x116 = INT16_MIN;
	static int64_t t13 = 1776382171480071292LL;

    t13 = ((x113&x114)/(x115/x116));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int32_t x121 = 6;
	int64_t x122 = INT64_MIN;
	uint32_t x123 = UINT32_MAX;
	static uint16_t x124 = 2209U;
	int64_t t14 = 9117411776239LL;

    t14 = ((x121&x122)/(x123/x124));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x142 = 342860;
	volatile int64_t x143 = INT64_MIN;
	int8_t x144 = 1;
	volatile int64_t t15 = -57775265589340653LL;

    t15 = ((x141&x142)/(x143/x144));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x146 = INT16_MIN;
	static int64_t x147 = INT64_MAX;
	static volatile uint16_t x148 = 3974U;
	volatile int64_t t16 = 447510083415698459LL;

    t16 = ((x145&x146)/(x147/x148));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x149 = INT32_MIN;
	static int16_t x151 = INT16_MIN;
	int8_t x152 = INT8_MIN;
	uint32_t t17 = 23140848U;

    t17 = ((x149&x150)/(x151/x152));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x161 = 7U;
	static uint32_t x164 = 61063U;
	volatile uint32_t t18 = 302931U;

    t18 = ((x161&x162)/(x163/x164));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x165 = UINT64_MAX;
	int16_t x166 = -1;
	static int32_t x167 = INT32_MIN;
	volatile int8_t x168 = INT8_MIN;
	static uint64_t t19 = 105LLU;

    t19 = ((x165&x166)/(x167/x168));

    if (t19 != 1099511627775LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x185 = 35187341LLU;
	int16_t x186 = INT16_MAX;
	uint8_t x187 = UINT8_MAX;
	static int8_t x188 = -28;
	static uint64_t t20 = 5710953977LLU;

    t20 = ((x185&x186)/(x187/x188));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x197 = INT64_MIN;
	int8_t x198 = 60;
	int8_t x199 = INT8_MIN;
	uint64_t x200 = 2LLU;
	uint64_t t21 = 3873LLU;

    t21 = ((x197&x198)/(x199/x200));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x201 = -1;
	int8_t x202 = INT8_MIN;
	static int8_t x203 = INT8_MIN;
	uint64_t x204 = 145482900LLU;
	uint64_t t22 = 3560513167104LLU;

    t22 = ((x201&x202)/(x203/x204));

    if (t22 != 145482900LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x205 = -10;
	int16_t x207 = -1;
	uint32_t t23 = 1882727U;

    t23 = ((x205&x206)/(x207/x208));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x221 = INT8_MAX;
	int64_t x223 = -3359766232LL;
	uint8_t x224 = UINT8_MAX;
	int64_t t24 = 13310LL;

    t24 = ((x221&x222)/(x223/x224));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x225 = -1LL;
	static volatile uint32_t x226 = 4U;
	uint16_t x227 = UINT16_MAX;
	uint8_t x228 = 6U;

    t25 = ((x225&x226)/(x227/x228));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x229 = INT64_MIN;
	static volatile uint32_t x230 = 10453U;
	static uint64_t x231 = UINT64_MAX;
	int64_t x232 = -49616139LL;
	uint64_t t26 = 1956657259416764719LLU;

    t26 = ((x229&x230)/(x231/x232));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x233 = INT32_MIN;
	uint16_t x234 = 109U;
	int8_t x236 = 52;
	int32_t t27 = -2587;

    t27 = ((x233&x234)/(x235/x236));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x237 = UINT16_MAX;
	int64_t x238 = 247410529LL;
	int32_t x239 = INT32_MAX;
	uint32_t x240 = 2065952221U;
	volatile int64_t t28 = -11580001719231LL;

    t28 = ((x237&x238)/(x239/x240));

    if (t28 != 12129LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x241 = 6U;
	int8_t x242 = INT8_MIN;
	int8_t x243 = -1;
	static int16_t x244 = 1;
	uint32_t t29 = 32400U;

    t29 = ((x241&x242)/(x243/x244));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x257 = 163U;
	uint32_t x258 = UINT32_MAX;
	int16_t x260 = INT16_MIN;
	uint32_t t30 = 120758268U;

    t30 = ((x257&x258)/(x259/x260));

    if (t30 != 163U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x265 = 29U;
	uint8_t x266 = 25U;
	static int16_t x267 = INT16_MAX;
	volatile int16_t x268 = INT16_MAX;
	volatile int32_t t31 = 62427323;

    t31 = ((x265&x266)/(x267/x268));

    if (t31 != 25) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x281 = INT32_MIN;
	int64_t x282 = 14767LL;
	static int32_t x283 = INT32_MIN;
	int8_t x284 = INT8_MIN;

    t32 = ((x281&x282)/(x283/x284));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x285 = 4483;
	volatile uint64_t x286 = 1361157584105LLU;
	int32_t x287 = INT32_MAX;
	volatile uint16_t x288 = 7703U;
	uint64_t t33 = 11517422179LLU;

    t33 = ((x285&x286)/(x287/x288));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x293 = -41;
	uint32_t x294 = 121068U;
	uint16_t x295 = 7376U;
	static volatile int8_t x296 = INT8_MIN;
	uint32_t t34 = 297349U;

    t34 = ((x293&x294)/(x295/x296));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x297 = 5832391U;
	int64_t x298 = INT64_MAX;
	static int64_t t35 = 336244624LL;

    t35 = ((x297&x298)/(x299/x300));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x305 = -534383936;
	static uint64_t x306 = UINT64_MAX;
	static uint64_t t36 = 603830474916959794LLU;

    t36 = ((x305&x306)/(x307/x308));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x309 = 209U;
	int64_t x311 = INT64_MIN;
	int64_t t37 = -31LL;

    t37 = ((x309&x310)/(x311/x312));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int32_t x321 = INT32_MIN;
	volatile uint32_t x322 = UINT32_MAX;
	int64_t x323 = INT64_MAX;
	uint64_t x324 = 210946806364LLU;
	volatile uint64_t t38 = 1161075074LLU;

    t38 = ((x321&x322)/(x323/x324));

    if (t38 != 49LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x329 = -1LL;
	uint8_t x330 = 16U;
	int32_t x331 = INT32_MIN;
	int16_t x332 = 115;

    t39 = ((x329&x330)/(x331/x332));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x345 = UINT8_MAX;
	int16_t x346 = -1;
	static int8_t x347 = INT8_MIN;
	int64_t x348 = -1LL;
	static volatile int64_t t40 = -111372112LL;

    t40 = ((x345&x346)/(x347/x348));

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x353 = -1;
	int32_t x355 = INT32_MAX;
	static int32_t x356 = -42;
	volatile uint64_t t41 = 129403927684LLU;

    t41 = ((x353&x354)/(x355/x356));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x357 = INT16_MIN;
	int8_t x358 = -3;
	int16_t x359 = -14824;
	int8_t x360 = -1;

    t42 = ((x357&x358)/(x359/x360));

    if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x361 = 0;
	int32_t x362 = -1;
	int32_t x363 = -1;
	int8_t x364 = -1;
	static int32_t t43 = -6024325;

    t43 = ((x361&x362)/(x363/x364));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x377 = INT16_MAX;
	int16_t x378 = 10;
	int32_t t44 = 53;

    t44 = ((x377&x378)/(x379/x380));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x393 = UINT8_MAX;
	static int64_t x394 = -1LL;
	int16_t x396 = -1;

    t45 = ((x393&x394)/(x395/x396));

    if (t45 != -2LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x397 = 1142301462831204LLU;
	int16_t x398 = -3557;
	uint64_t t46 = 0LLU;

    t46 = ((x397&x398)/(x399/x400));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x401 = -2;
	int16_t x402 = INT16_MIN;
	volatile uint8_t x403 = UINT8_MAX;
	static volatile int8_t x404 = INT8_MIN;
	volatile int32_t t47 = 885125395;

    t47 = ((x401&x402)/(x403/x404));

    if (t47 != 32768) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x405 = -93647LL;
	volatile int64_t x406 = -98529230202311LL;
	int64_t x407 = INT64_MIN;
	volatile uint32_t x408 = 350271563U;

    t48 = ((x405&x406)/(x407/x408));

    if (t48 != 3741LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x417 = 56302364850476296LL;
	uint64_t x418 = 22LLU;
	static int16_t x419 = INT16_MIN;
	int32_t x420 = -1878;
	uint64_t t49 = 14493LLU;

    t49 = ((x417&x418)/(x419/x420));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x425 = INT32_MIN;
	int16_t x427 = -11091;
	uint16_t x428 = 10287U;

    t50 = ((x425&x426)/(x427/x428));

    if (t50 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint64_t x442 = 120505355457151488LLU;
	uint64_t x443 = 887791LLU;
	uint8_t x444 = 3U;

    t51 = ((x441&x442)/(x443/x444));

    if (t51 != 57LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x449 = 1967U;
	int32_t x450 = INT32_MIN;
	int8_t x451 = -1;
	uint64_t x452 = UINT64_MAX;
	volatile uint64_t t52 = 174440736583261LLU;

    t52 = ((x449&x450)/(x451/x452));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x457 = INT64_MIN;
	int64_t x458 = -1LL;
	int16_t x459 = INT16_MAX;
	static int8_t x460 = INT8_MAX;

    t53 = ((x457&x458)/(x459/x460));

    if (t53 != -35749504018816960LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x469 = -1LL;
	static int64_t x470 = INT64_MAX;
	static uint8_t x471 = 73U;
	volatile int8_t x472 = -1;
	volatile int64_t t54 = 724855892LL;

    t54 = ((x469&x470)/(x471/x472));

    if (t54 != -126347562148695559LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x475 = -192;
	int8_t x476 = -1;
	volatile uint32_t t55 = 1U;

    t55 = ((x473&x474)/(x475/x476));

    if (t55 != 11184810U) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x490 = INT16_MIN;
	uint16_t x491 = 41U;
	int8_t x492 = -1;

    t56 = ((x489&x490)/(x491/x492));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x501 = 11665724319785780LLU;
	int64_t x503 = INT64_MIN;
	uint8_t x504 = 57U;
	volatile uint64_t t57 = 816632591017385LLU;

    t57 = ((x501&x502)/(x503/x504));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x509 = 1;
	uint16_t x510 = 400U;
	int8_t x511 = -1;
	static int16_t x512 = -1;
	static int32_t t58 = 3725;

    t58 = ((x509&x510)/(x511/x512));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x517 = INT16_MIN;
	int32_t x518 = -1;
	uint16_t x519 = 6024U;
	int8_t x520 = INT8_MIN;
	int32_t t59 = 7101;

    t59 = ((x517&x518)/(x519/x520));

    if (t59 != 697) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x521 = UINT16_MAX;
	static int64_t x522 = 746172LL;
	int32_t x523 = INT32_MIN;
	static int32_t x524 = 16;

    t60 = ((x521&x522)/(x523/x524));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x525 = -5;
	volatile int32_t x527 = INT32_MAX;
	static int16_t x528 = -1;
	volatile int64_t t61 = -1099869695LL;

    t61 = ((x525&x526)/(x527/x528));

    if (t61 != -784043287LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x529 = INT8_MAX;
	int64_t x530 = 717LL;
	uint32_t x531 = UINT32_MAX;
	uint8_t x532 = 8U;
	volatile int64_t t62 = -175531LL;

    t62 = ((x529&x530)/(x531/x532));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x535 = INT16_MAX;
	static int64_t t63 = 1LL;

    t63 = ((x533&x534)/(x535/x536));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x550 = INT8_MAX;
	int64_t x551 = INT64_MAX;
	int64_t x552 = INT64_MAX;

    t64 = ((x549&x550)/(x551/x552));

    if (t64 != 127LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x561 = 12U;
	uint64_t x562 = 165445LLU;
	int32_t x563 = INT32_MIN;
	static uint64_t x564 = 11594738123LLU;
	uint64_t t65 = 186894941033620LLU;

    t65 = ((x561&x562)/(x563/x564));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x569 = INT8_MIN;
	volatile int32_t x570 = -1;
	volatile int64_t x571 = -347293004430427LL;
	volatile int64_t t66 = -2723754LL;

    t66 = ((x569&x570)/(x571/x572));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x573 = -1;
	uint64_t x574 = 6LLU;
	uint8_t x576 = 30U;

    t67 = ((x573&x574)/(x575/x576));

    if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x585 = INT8_MIN;
	int16_t x586 = -2730;
	static volatile int32_t x587 = INT32_MIN;
	uint64_t x588 = 3605LLU;
	static volatile uint64_t t68 = 838LLU;

    t68 = ((x585&x586)/(x587/x588));

    if (t68 != 3605LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x594 = 100;
	int16_t x595 = INT16_MAX;
	int16_t x596 = -1;
	int32_t t69 = -55967;

    t69 = ((x593&x594)/(x595/x596));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x601 = 150418LL;
	volatile int64_t x602 = 6209757722114LL;
	uint32_t x603 = UINT32_MAX;
	static uint32_t x604 = 1630328U;
	static volatile int64_t t70 = 1947096LL;

    t70 = ((x601&x602)/(x603/x604));

    if (t70 != 49LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x606 = 88899893729928043LL;
	int32_t x607 = INT32_MAX;
	volatile int64_t t71 = 1LL;

    t71 = ((x605&x606)/(x607/x608));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x609 = -1;
	volatile int64_t x610 = INT64_MIN;
	static uint16_t x611 = UINT16_MAX;
	int64_t t72 = -13774887551648LL;

    t72 = ((x609&x610)/(x611/x612));

    if (t72 != -2674216305263779LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x617 = -492756143;
	uint8_t x618 = 20U;
	int32_t x619 = INT32_MIN;
	static int8_t x620 = -3;

    t73 = ((x617&x618)/(x619/x620));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x621 = -1;
	volatile int64_t x622 = -1LL;
	int16_t x624 = 7;
	volatile int64_t t74 = -251LL;

    t74 = ((x621&x622)/(x623/x624));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x625 = -1;
	uint16_t x627 = 8U;
	int16_t x628 = -1;
	static volatile uint32_t t75 = 2663789U;

    t75 = ((x625&x626)/(x627/x628));

    if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x629 = INT16_MIN;
	int8_t x630 = INT8_MIN;
	int16_t x632 = 6;

    t76 = ((x629&x630)/(x631/x632));

    if (t76 != 6) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x633 = 5U;
	int16_t x634 = -1;
	volatile int64_t x636 = -1LL;

    t77 = ((x633&x634)/(x635/x636));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x637 = 63405;
	int8_t x638 = 39;
	int64_t x640 = INT64_MAX;
	static volatile int64_t t78 = 3325LL;

    t78 = ((x637&x638)/(x639/x640));

    if (t78 != -37LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x657 = UINT64_MAX;
	int64_t x658 = -1LL;
	static int8_t x659 = INT8_MIN;
	int8_t x660 = INT8_MIN;
	volatile uint64_t t79 = UINT64_MAX;

    t79 = ((x657&x658)/(x659/x660));

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x665 = 174226LLU;
	uint8_t x666 = 10U;
	int8_t x667 = 1;
	int8_t x668 = -1;
	volatile uint64_t t80 = 3369111LLU;

    t80 = ((x665&x666)/(x667/x668));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x669 = 41297060307LL;
	uint32_t x672 = 99819U;
	int64_t t81 = 1041537911LL;

    t81 = ((x669&x670)/(x671/x672));

    if (t81 != 1919632LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x689 = UINT64_MAX;
	int32_t x691 = -1129914;
	uint64_t t82 = 727768350058136028LLU;

    t82 = ((x689&x690)/(x691/x692));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x699 = INT32_MIN;
	volatile uint64_t x700 = 131226807097779458LLU;
	volatile uint64_t t83 = 42177736LLU;

    t83 = ((x697&x698)/(x699/x700));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x701 = INT8_MIN;
	int32_t x702 = -14562257;
	int64_t x704 = -17LL;
	static volatile int64_t t84 = 106044715LL;

    t84 = ((x701&x702)/(x703/x704));

    if (t84 != -1820288LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x717 = INT8_MIN;
	uint16_t x718 = 2268U;
	volatile int64_t x719 = INT64_MIN;
	int64_t t85 = 69372454335LL;

    t85 = ((x717&x718)/(x719/x720));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x725 = -1LL;
	static int64_t x727 = -452401754LL;
	int8_t x728 = INT8_MAX;

    t86 = ((x725&x726)/(x727/x728));

    if (t86 != -602LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x733 = UINT64_MAX;
	static volatile uint16_t x734 = UINT16_MAX;
	volatile int64_t x735 = 3831502358895994LL;
	uint64_t x736 = 57167934370984LLU;

    t87 = ((x733&x734)/(x735/x736));

    if (t87 != 978LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x741 = INT8_MAX;
	uint32_t x742 = 1851269681U;
	int32_t x743 = INT32_MAX;
	static int32_t x744 = -1;
	uint32_t t88 = 1967655440U;

    t88 = ((x741&x742)/(x743/x744));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x745 = 857216LLU;
	int32_t x746 = INT32_MIN;
	int32_t x747 = INT32_MIN;
	int16_t x748 = -50;
	static uint64_t t89 = 10940015LLU;

    t89 = ((x745&x746)/(x747/x748));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x750 = INT16_MAX;
	uint32_t x751 = UINT32_MAX;
	int16_t x752 = 1676;
	uint64_t t90 = 908138826027LLU;

    t90 = ((x749&x750)/(x751/x752));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x754 = UINT32_MAX;
	volatile int16_t x755 = INT16_MIN;
	int8_t x756 = -4;
	static volatile uint32_t t91 = 1828184U;

    t91 = ((x753&x754)/(x755/x756));

    if (t91 != 524287U) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x762 = INT32_MIN;
	int16_t x763 = -1;

    t92 = ((x761&x762)/(x763/x764));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x771 = INT8_MAX;
	int32_t x772 = -1;
	uint64_t t93 = 16630197LLU;

    t93 = ((x769&x770)/(x771/x772));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x773 = 6U;
	int64_t x775 = 38066037349LL;
	int32_t x776 = INT32_MAX;
	int64_t t94 = -216656966905436LL;

    t94 = ((x773&x774)/(x775/x776));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x789 = 402116877230101689LLU;
	int64_t x790 = INT64_MAX;
	static int64_t x791 = -1LL;
	volatile uint64_t t95 = 49505LLU;

    t95 = ((x789&x790)/(x791/x792));

    if (t95 != 402116877230101689LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x793 = -9;
	uint8_t x794 = 62U;
	static uint64_t x795 = UINT64_MAX;

    t96 = ((x793&x794)/(x795/x796));

    if (t96 != 54LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x806 = INT64_MIN;
	static uint64_t x807 = UINT64_MAX;

    t97 = ((x805&x806)/(x807/x808));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x809 = 2136674678U;
	int32_t x810 = INT32_MIN;
	static uint8_t x811 = UINT8_MAX;
	uint16_t x812 = 47U;

    t98 = ((x809&x810)/(x811/x812));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x818 = INT16_MAX;
	int64_t x819 = INT64_MIN;
	uint32_t x820 = 249366U;

    t99 = ((x817&x818)/(x819/x820));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x821 = INT16_MAX;
	volatile int64_t x823 = 443527LL;
	static int64_t t100 = 5667182018LL;

    t100 = ((x821&x822)/(x823/x824));

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x832 = 55U;
	uint32_t t101 = 224U;

    t101 = ((x829&x830)/(x831/x832));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x837 = INT16_MAX;
	static uint32_t x838 = 1U;
	int16_t x840 = 3031;

    t102 = ((x837&x838)/(x839/x840));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x850 = 3U;
	volatile int32_t x851 = INT32_MAX;
	volatile int32_t t103 = -516874582;

    t103 = ((x849&x850)/(x851/x852));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x853 = 1U;
	uint32_t x855 = UINT32_MAX;
	static volatile uint8_t x856 = UINT8_MAX;
	int64_t t104 = 2543644832589940390LL;

    t104 = ((x853&x854)/(x855/x856));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x869 = 0U;
	volatile int8_t x870 = -31;
	static int8_t x871 = INT8_MIN;
	int8_t x872 = 1;

    t105 = ((x869&x870)/(x871/x872));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x875 = -112685;
	volatile uint32_t t106 = 3U;

    t106 = ((x873&x874)/(x875/x876));

    if (t106 != 25U) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x886 = INT16_MIN;
	static int64_t x887 = INT64_MIN;
	uint64_t x888 = 257LLU;
	static volatile uint64_t t107 = 6890371893LLU;

    t107 = ((x885&x886)/(x887/x888));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x891 = INT64_MAX;
	int16_t x892 = INT16_MAX;
	static int64_t t108 = -87241LL;

    t108 = ((x889&x890)/(x891/x892));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x905 = -1;
	static uint64_t x906 = 246LLU;
	static uint64_t t109 = 5869386672LLU;

    t109 = ((x905&x906)/(x907/x908));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x929 = 165U;
	static int64_t x930 = INT64_MIN;
	int8_t x931 = INT8_MIN;
	static int32_t x932 = -1;
	volatile int64_t t110 = 16871767675753LL;

    t110 = ((x929&x930)/(x931/x932));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x950 = 3U;
	uint64_t x952 = 29549LLU;

    t111 = ((x949&x950)/(x951/x952));

    if (t111 != 3LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x954 = 0U;
	uint64_t x956 = 73LLU;
	uint64_t t112 = 0LLU;

    t112 = ((x953&x954)/(x955/x956));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x969 = -1;
	static volatile uint32_t x971 = UINT32_MAX;

    t113 = ((x969&x970)/(x971/x972));

    if (t113 != 444851976U) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x977 = 0;
	int16_t x978 = -8;
	uint64_t x979 = UINT64_MAX;
	int64_t x980 = INT64_MIN;
	uint64_t t114 = 13LLU;

    t114 = ((x977&x978)/(x979/x980));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x981 = INT8_MIN;
	int32_t x982 = -20800;
	int64_t x983 = INT64_MAX;
	uint16_t x984 = 23092U;
	int64_t t115 = 339346931LL;

    t115 = ((x981&x982)/(x983/x984));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x985 = 63;
	int64_t x987 = 94096127895673846LL;
	volatile uint64_t x988 = 8212117690893486LLU;
	uint64_t t116 = 665059754757356LLU;

    t116 = ((x985&x986)/(x987/x988));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x989 = -2;
	static volatile int16_t x990 = 373;
	int8_t x991 = INT8_MIN;
	int8_t x992 = -1;

    t117 = ((x989&x990)/(x991/x992));

    if (t117 != 2) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x1001 = 23;
	int8_t x1002 = -1;
	int32_t x1003 = INT32_MAX;
	volatile uint32_t x1004 = 21714U;
	static uint32_t t118 = 868517513U;

    t118 = ((x1001&x1002)/(x1003/x1004));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x1005 = 0U;
	int64_t x1006 = INT64_MIN;
	static int64_t t119 = 1492420LL;

    t119 = ((x1005&x1006)/(x1007/x1008));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x1009 = UINT8_MAX;
	int8_t x1010 = INT8_MIN;
	int8_t x1011 = -1;
	volatile uint64_t t120 = 38072LLU;

    t120 = ((x1009&x1010)/(x1011/x1012));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x1017 = 321;
	int32_t x1018 = -1;
	static uint64_t x1019 = UINT64_MAX;
	volatile int16_t x1020 = INT16_MIN;
	uint64_t t121 = 62257979581LLU;

    t121 = ((x1017&x1018)/(x1019/x1020));

    if (t121 != 321LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x1025 = INT64_MIN;
	int32_t x1026 = -60;
	int64_t x1027 = -1LL;
	static int8_t x1028 = -1;
	int64_t t122 = INT64_MIN;

    t122 = ((x1025&x1026)/(x1027/x1028));

    if (t122 != INT64_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x1029 = UINT64_MAX;
	int8_t x1031 = -1;
	uint32_t x1032 = 92859U;
	volatile uint64_t t123 = 7066243151LLU;

    t123 = ((x1029&x1030)/(x1031/x1032));

    if (t123 != 398831273754854LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x1041 = INT8_MIN;
	uint64_t x1043 = UINT64_MAX;
	static int32_t x1044 = INT32_MIN;
	volatile uint64_t t124 = 219605079753927918LLU;

    t124 = ((x1041&x1042)/(x1043/x1044));

    if (t124 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x1045 = INT32_MIN;
	volatile int64_t x1046 = 1445536988622LL;
	volatile uint32_t x1047 = UINT32_MAX;
	int32_t x1048 = INT32_MIN;
	int64_t t125 = 127LL;

    t125 = ((x1045&x1046)/(x1047/x1048));

    if (t125 != 1445256495104LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x1049 = 53329326680702LLU;
	volatile int16_t x1050 = INT16_MAX;
	uint16_t x1051 = UINT16_MAX;
	volatile uint64_t t126 = 119549LLU;

    t126 = ((x1049&x1050)/(x1051/x1052));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x1053 = -14783;
	int8_t x1054 = INT8_MIN;
	uint8_t x1056 = UINT8_MAX;
	static volatile int32_t t127 = 440077726;

    t127 = ((x1053&x1054)/(x1055/x1056));

    if (t127 != -14848) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x1057 = 9LLU;
	int32_t x1058 = -1;
	uint64_t x1059 = 328996575201389LLU;
	uint32_t x1060 = UINT32_MAX;

    t128 = ((x1057&x1058)/(x1059/x1060));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x1073 = 2982277542602LLU;
	int32_t x1074 = -1;
	int8_t x1075 = -1;
	int64_t x1076 = -1LL;
	static volatile uint64_t t129 = 1712580406885LLU;

    t129 = ((x1073&x1074)/(x1075/x1076));

    if (t129 != 2982277542602LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x1081 = 62;
	int8_t x1082 = INT8_MIN;
	uint64_t x1083 = UINT64_MAX;

    t130 = ((x1081&x1082)/(x1083/x1084));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x1101 = 82335U;
	volatile uint8_t x1102 = UINT8_MAX;
	int8_t x1103 = INT8_MAX;
	int64_t x1104 = -1LL;
	int64_t t131 = -346096LL;

    t131 = ((x1101&x1102)/(x1103/x1104));

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x1105 = 5LLU;
	uint16_t x1106 = UINT16_MAX;
	int32_t x1107 = INT32_MAX;
	uint8_t x1108 = 39U;
	uint64_t t132 = 434LLU;

    t132 = ((x1105&x1106)/(x1107/x1108));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x1121 = 1;
	uint8_t x1122 = UINT8_MAX;
	volatile uint16_t x1123 = UINT16_MAX;
	int8_t x1124 = 57;
	volatile int32_t t133 = -118132;

    t133 = ((x1121&x1122)/(x1123/x1124));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x1142 = 297022U;
	int32_t x1143 = INT32_MIN;
	static int16_t x1144 = 886;
	uint32_t t134 = 2831494U;

    t134 = ((x1141&x1142)/(x1143/x1144));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x1153 = 0;
	static volatile uint16_t x1154 = UINT16_MAX;
	int8_t x1155 = INT8_MIN;
	volatile uint8_t x1156 = 117U;
	static volatile int32_t t135 = 3;

    t135 = ((x1153&x1154)/(x1155/x1156));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x1165 = INT8_MIN;
	uint64_t x1166 = UINT64_MAX;
	uint32_t x1167 = UINT32_MAX;
	int32_t x1168 = -1;

    t136 = ((x1165&x1166)/(x1167/x1168));

    if (t136 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x1169 = 377985841U;
	volatile uint64_t x1170 = 38030572LLU;
	volatile int64_t x1171 = INT64_MIN;
	static volatile uint64_t t137 = 124283749354367LLU;

    t137 = ((x1169&x1170)/(x1171/x1172));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x1173 = INT64_MIN;
	volatile int32_t x1175 = INT32_MIN;
	int64_t t138 = 0LL;

    t138 = ((x1173&x1174)/(x1175/x1176));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x1181 = UINT16_MAX;
	int8_t x1183 = INT8_MAX;
	int8_t x1184 = -1;
	static volatile int32_t t139 = 3036;

    t139 = ((x1181&x1182)/(x1183/x1184));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x1185 = INT8_MIN;
	int8_t x1186 = INT8_MIN;
	int64_t x1187 = 782LL;
	static int64_t x1188 = 43LL;
	static int64_t t140 = -40LL;

    t140 = ((x1185&x1186)/(x1187/x1188));

    if (t140 != -7LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x1202 = -1;
	int32_t x1203 = -2240518;
	uint64_t x1204 = 32240524LLU;
	uint64_t t141 = 2778046810LLU;

    t141 = ((x1201&x1202)/(x1203/x1204));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x1213 = 21666LL;
	uint64_t x1214 = UINT64_MAX;
	int16_t x1215 = -1;
	uint32_t x1216 = 335U;
	static volatile uint64_t t142 = 3607941799623616764LLU;

    t142 = ((x1213&x1214)/(x1215/x1216));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint8_t x1217 = 3U;
	static int8_t x1218 = 12;
	volatile uint16_t x1219 = 1812U;
	volatile uint8_t x1220 = 29U;

    t143 = ((x1217&x1218)/(x1219/x1220));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1229 = INT8_MIN;
	int64_t x1231 = INT64_MIN;
	uint16_t x1232 = 12U;
	volatile int64_t t144 = 113LL;

    t144 = ((x1229&x1230)/(x1231/x1232));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x1233 = INT64_MAX;
	static int64_t x1234 = -6177673LL;
	int64_t t145 = 1641448LL;

    t145 = ((x1233&x1234)/(x1235/x1236));

    if (t145 != 72057594037879672LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x1245 = 1558;
	volatile uint16_t x1248 = UINT16_MAX;
	uint32_t t146 = 166972983U;

    t146 = ((x1245&x1246)/(x1247/x1248));

    if (t146 != 13U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x1265 = -301759993;
	int16_t x1266 = -210;
	static int32_t x1268 = INT32_MAX;
	uint64_t t147 = 360LLU;

    t147 = ((x1265&x1266)/(x1267/x1268));

    if (t147 != 18446744073407791622LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x1281 = INT64_MIN;
	int32_t x1282 = INT32_MIN;
	static int32_t x1283 = -1;
	volatile int32_t x1284 = -1;
	static volatile int64_t t148 = INT64_MIN;

    t148 = ((x1281&x1282)/(x1283/x1284));

    if (t148 != INT64_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x1287 = 850U;
	int16_t x1288 = -1;

    t149 = ((x1285&x1286)/(x1287/x1288));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x1294 = 0;
	static uint64_t x1295 = 61177922LLU;
	static uint64_t t150 = 127LLU;

    t150 = ((x1293&x1294)/(x1295/x1296));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x1297 = UINT64_MAX;
	static int8_t x1298 = INT8_MAX;
	int16_t x1299 = INT16_MIN;
	int8_t x1300 = 37;
	uint64_t t151 = 11459LLU;

    t151 = ((x1297&x1298)/(x1299/x1300));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x1301 = 6U;
	int16_t x1302 = 14877;
	int32_t x1303 = INT32_MIN;
	int32_t x1304 = INT32_MIN;
	int32_t t152 = 1;

    t152 = ((x1301&x1302)/(x1303/x1304));

    if (t152 != 4) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x1309 = INT8_MIN;
	static volatile int64_t x1310 = 3622LL;
	int64_t x1311 = -84643527005000LL;

    t153 = ((x1309&x1310)/(x1311/x1312));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1322 = -1;
	uint32_t x1323 = 20336660U;
	int64_t x1324 = -1LL;
	uint64_t t154 = 1032221909LLU;

    t154 = ((x1321&x1322)/(x1323/x1324));

    if (t154 != 1LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x1330 = UINT64_MAX;
	static uint64_t t155 = 245LLU;

    t155 = ((x1329&x1330)/(x1331/x1332));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x1333 = INT32_MAX;
	static int64_t x1334 = INT64_MIN;
	int32_t x1335 = INT32_MIN;
	uint8_t x1336 = 6U;
	int64_t t156 = 3612LL;

    t156 = ((x1333&x1334)/(x1335/x1336));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x1354 = INT32_MAX;
	int8_t x1355 = INT8_MIN;
	int8_t x1356 = 4;
	int32_t t157 = 719;

    t157 = ((x1353&x1354)/(x1355/x1356));

    if (t157 != -7) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x1361 = 3U;
	int64_t x1362 = INT64_MAX;
	volatile uint64_t x1363 = 1712118323973652LLU;
	static int32_t x1364 = 4;

    t158 = ((x1361&x1362)/(x1363/x1364));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x1365 = UINT8_MAX;
	int32_t x1366 = INT32_MAX;
	int64_t x1367 = INT64_MIN;
	int64_t t159 = -1171624770740025LL;

    t159 = ((x1365&x1366)/(x1367/x1368));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x1369 = -1637;
	static uint8_t x1372 = 27U;
	volatile int64_t t160 = -45858660433135LL;

    t160 = ((x1369&x1370)/(x1371/x1372));

    if (t160 != 172699998686LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x1373 = 30U;
	int32_t x1375 = INT32_MAX;
	int8_t x1376 = -1;
	int32_t t161 = 7452124;

    t161 = ((x1373&x1374)/(x1375/x1376));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x1401 = 239U;
	static uint64_t x1402 = UINT64_MAX;
	int32_t x1404 = -1;
	uint64_t t162 = 1201568893LLU;

    t162 = ((x1401&x1402)/(x1403/x1404));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1415 = INT64_MIN;

    t163 = ((x1413&x1414)/(x1415/x1416));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x1418 = 30687U;
	volatile int32_t x1419 = INT32_MAX;
	volatile int64_t x1420 = -1LL;
	volatile int64_t t164 = 28334LL;

    t164 = ((x1417&x1418)/(x1419/x1420));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x1421 = 16U;
	uint64_t x1422 = UINT64_MAX;
	int16_t x1423 = 9;
	int8_t x1424 = -1;
	uint64_t t165 = 235019341818639048LLU;

    t165 = ((x1421&x1422)/(x1423/x1424));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x1425 = INT16_MIN;
	int32_t x1426 = 45620;
	static int16_t x1427 = -6;
	uint32_t x1428 = 1357891522U;

    t166 = ((x1425&x1426)/(x1427/x1428));

    if (t166 != 10922U) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1434 = -92;
	uint32_t x1435 = 851204U;
	volatile uint16_t x1436 = 883U;
	static volatile uint32_t t167 = 616757063U;

    t167 = ((x1433&x1434)/(x1435/x1436));

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1438 = 42821588;
	uint8_t x1439 = UINT8_MAX;
	int8_t x1440 = 1;
	int32_t t168 = 948;

    t168 = ((x1437&x1438)/(x1439/x1440));

    if (t168 != 167927) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x1441 = 250982U;
	volatile uint32_t x1442 = 281578988U;
	uint16_t x1444 = 1U;
	uint32_t t169 = 166U;

    t169 = ((x1441&x1442)/(x1443/x1444));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1445 = -1;
	int64_t x1447 = INT64_MAX;
	int8_t x1448 = -61;

    t170 = ((x1445&x1446)/(x1447/x1448));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x1457 = -1;
	volatile uint8_t x1458 = UINT8_MAX;
	static int16_t x1460 = -1;

    t171 = ((x1457&x1458)/(x1459/x1460));

    if (t171 != -63) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1469 = INT64_MAX;
	int32_t x1470 = INT32_MIN;
	volatile int64_t t172 = -20894800LL;

    t172 = ((x1469&x1470)/(x1471/x1472));

    if (t172 != -140739635838976LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1473 = UINT16_MAX;
	static int64_t x1474 = -1LL;
	volatile uint8_t x1475 = UINT8_MAX;
	int8_t x1476 = -1;
	static int64_t t173 = 3LL;

    t173 = ((x1473&x1474)/(x1475/x1476));

    if (t173 != -257LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x1489 = 18U;
	volatile uint64_t x1490 = UINT64_MAX;
	volatile int8_t x1491 = -8;
	uint8_t x1492 = 8U;
	uint64_t t174 = 54785LLU;

    t174 = ((x1489&x1490)/(x1491/x1492));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint64_t x1505 = UINT64_MAX;
	int64_t x1508 = 1362LL;
	uint64_t t175 = 261174838001111LLU;

    t175 = ((x1505&x1506)/(x1507/x1508));

    if (t175 != 439595405LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x1513 = 59U;
	int64_t x1514 = -1LL;
	uint32_t x1515 = 1961875781U;
	int64_t t176 = 402LL;

    t176 = ((x1513&x1514)/(x1515/x1516));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x1517 = 515159LLU;
	int64_t x1518 = -32322491785827LL;
	int64_t x1519 = INT64_MAX;
	volatile uint32_t x1520 = 58930U;
	uint64_t t177 = 7587878377341963LLU;

    t177 = ((x1517&x1518)/(x1519/x1520));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1521 = -1LL;
	int16_t x1524 = INT16_MAX;
	static volatile int64_t t178 = 1072966442LL;

    t178 = ((x1521&x1522)/(x1523/x1524));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1530 = -1;
	int64_t x1531 = -55924563357LL;
	int16_t x1532 = 77;
	static uint64_t t179 = 279804502870LLU;

    t179 = ((x1529&x1530)/(x1531/x1532));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x1541 = UINT16_MAX;
	volatile uint32_t x1544 = 1326U;
	static volatile uint32_t t180 = 1967362U;

    t180 = ((x1541&x1542)/(x1543/x1544));

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x1577 = 204;
	int32_t x1578 = INT32_MIN;
	volatile uint32_t x1579 = 1U;
	int16_t x1580 = 1;
	uint32_t t181 = 133582411U;

    t181 = ((x1577&x1578)/(x1579/x1580));

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1581 = 3745794LLU;
	int16_t x1582 = INT16_MIN;
	volatile int64_t x1583 = INT64_MIN;
	uint64_t t182 = 99933528364795LLU;

    t182 = ((x1581&x1582)/(x1583/x1584));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1585 = INT64_MIN;
	int32_t x1586 = 18360179;
	int32_t x1587 = 18623711;
	int8_t x1588 = -1;

    t183 = ((x1585&x1586)/(x1587/x1588));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1589 = INT8_MAX;
	int8_t x1591 = -58;
	uint64_t x1592 = 94673803441LLU;
	static volatile uint64_t t184 = 112391557127789350LLU;

    t184 = ((x1589&x1590)/(x1591/x1592));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x1593 = INT8_MAX;
	uint32_t x1595 = UINT32_MAX;
	int16_t x1596 = INT16_MIN;
	int64_t t185 = -7LL;

    t185 = ((x1593&x1594)/(x1595/x1596));

    if (t185 != 31LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x1609 = 938LL;
	uint16_t x1610 = UINT16_MAX;
	volatile int64_t x1612 = INT64_MAX;

    t186 = ((x1609&x1610)/(x1611/x1612));

    if (t186 != 938LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x1614 = 2;
	uint64_t x1616 = 7359885262LLU;
	uint64_t t187 = 130702191262990457LLU;

    t187 = ((x1613&x1614)/(x1615/x1616));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x1617 = -1LL;
	uint8_t x1618 = UINT8_MAX;
	static int64_t x1619 = INT64_MIN;
	static int16_t x1620 = -1493;

    t188 = ((x1617&x1618)/(x1619/x1620));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1630 = 1370LLU;
	int64_t x1631 = 105014458134285232LL;
	volatile uint32_t x1632 = 44U;
	volatile uint64_t t189 = 3535273682990LLU;

    t189 = ((x1629&x1630)/(x1631/x1632));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x1633 = -1;
	uint8_t x1634 = UINT8_MAX;
	volatile int64_t x1635 = INT64_MIN;
	int64_t x1636 = INT64_MIN;

    t190 = ((x1633&x1634)/(x1635/x1636));

    if (t190 != 255LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1637 = 1U;
	static uint64_t x1639 = UINT64_MAX;
	int64_t x1640 = -1LL;
	uint64_t t191 = 8587764122936507LLU;

    t191 = ((x1637&x1638)/(x1639/x1640));

    if (t191 != 1LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1641 = -1;
	volatile uint32_t x1642 = 211U;
	int8_t x1643 = -1;
	static volatile uint32_t t192 = 1815348306U;

    t192 = ((x1641&x1642)/(x1643/x1644));

    if (t192 != 211U) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1645 = 559031LL;
	uint64_t x1646 = 33156514721LLU;
	static int16_t x1648 = 230;
	volatile uint64_t t193 = 31979952434LLU;

    t193 = ((x1645&x1646)/(x1647/x1648));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x1649 = 24428LL;
	static int32_t x1651 = -2030476;
	uint16_t x1652 = UINT16_MAX;
	int64_t t194 = 47945360481758678LL;

    t194 = ((x1649&x1650)/(x1651/x1652));

    if (t194 != -691LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1653 = 0U;
	volatile int32_t x1654 = INT32_MAX;
	uint16_t x1656 = 1U;
	int32_t t195 = -10552;

    t195 = ((x1653&x1654)/(x1655/x1656));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1658 = INT32_MIN;
	static int64_t x1659 = -4218130005LL;
	uint8_t x1660 = 1U;
	volatile int64_t t196 = -39LL;

    t196 = ((x1657&x1658)/(x1659/x1660));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x1673 = UINT64_MAX;
	volatile int32_t x1676 = INT32_MIN;
	uint64_t t197 = UINT64_MAX;

    t197 = ((x1673&x1674)/(x1675/x1676));

    if (t197 != UINT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x1677 = -1LL;
	volatile uint8_t x1678 = 18U;
	static int32_t x1679 = INT32_MIN;
	static int64_t t198 = -498028828873369849LL;

    t198 = ((x1677&x1678)/(x1679/x1680));

    if (t198 != 18LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1701 = 45465U;
	static int32_t x1702 = INT32_MIN;
	volatile uint16_t x1703 = UINT16_MAX;
	volatile uint8_t x1704 = 6U;
	static volatile uint32_t t199 = 10897162U;

    t199 = ((x1701&x1702)/(x1703/x1704));

    if (t199 != 0U) { NG(); } else { ; }
	
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


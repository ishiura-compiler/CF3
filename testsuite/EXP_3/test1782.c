
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

volatile uint16_t x9 = 12U;
int8_t x12 = INT8_MIN;
int16_t x16 = INT16_MAX;
volatile int32_t x42 = 69;
int32_t x47 = -3358893;
volatile uint32_t x48 = UINT32_MAX;
int32_t x53 = -1262;
int32_t x55 = INT32_MIN;
static volatile int32_t t6 = -71;
volatile int32_t x64 = INT32_MAX;
uint16_t x65 = 0U;
int8_t x79 = INT8_MIN;
static uint64_t t9 = 74215324862688028LLU;
int32_t x85 = INT32_MAX;
int8_t x94 = INT8_MAX;
int32_t t11 = -55;
static uint32_t x105 = UINT32_MAX;
int64_t x107 = -31858116LL;
static volatile uint32_t t14 = 26U;
volatile int8_t x115 = INT8_MIN;
int8_t x129 = INT8_MAX;
uint64_t x132 = UINT64_MAX;
int32_t x155 = INT32_MIN;
int16_t x159 = 4161;
volatile int8_t x165 = 0;
volatile int32_t t19 = 541414588;
uint8_t x174 = UINT8_MAX;
int32_t x196 = INT32_MAX;
uint64_t x201 = 71169790215346LLU;
int64_t x237 = INT64_MIN;
static int16_t x239 = INT16_MIN;
volatile uint32_t x242 = 290U;
volatile int32_t x244 = -1;
int32_t x265 = 11390003;
int8_t x271 = 8;
int64_t x279 = INT64_MIN;
uint16_t x280 = 431U;
uint16_t x284 = 12636U;
uint64_t t32 = 1LLU;
static volatile int8_t x293 = -2;
int32_t t34 = 239;
volatile uint64_t t36 = 12512987946106355LLU;
volatile uint64_t x333 = 2672644290885LLU;
int8_t x336 = -14;
uint8_t x338 = 34U;
int16_t x339 = INT16_MIN;
int16_t x346 = INT16_MIN;
uint16_t x363 = 12U;
uint32_t x365 = 2312U;
static int32_t x385 = INT32_MIN;
uint64_t x386 = UINT64_MAX;
int8_t x388 = -1;
int16_t x393 = -36;
int64_t x395 = INT64_MIN;
volatile int32_t t46 = -27283;
int64_t x436 = INT64_MAX;
static uint64_t x437 = 14164325LLU;
static int8_t x438 = INT8_MIN;
uint64_t t48 = 3534LLU;
static int8_t x457 = -1;
int64_t x458 = -568LL;
static volatile int8_t x465 = INT8_MIN;
int64_t x467 = -1LL;
uint8_t x468 = 62U;
uint8_t x483 = 0U;
uint64_t x484 = UINT64_MAX;
volatile int64_t x495 = -1LL;
static int32_t x497 = INT32_MIN;
static int16_t x498 = INT16_MIN;
int8_t x501 = 0;
volatile int32_t t60 = -33072;
static uint16_t x526 = UINT16_MAX;
int32_t t64 = -384137304;
static uint32_t x530 = 0U;
int16_t x533 = -1;
int32_t x537 = -17641819;
static uint16_t x539 = 1U;
volatile int64_t x557 = -8839189676LL;
uint8_t x558 = 1U;
int64_t t73 = INT64_MAX;
static uint16_t x614 = UINT16_MAX;
uint64_t t75 = 345722250914LLU;
uint64_t x622 = UINT64_MAX;
static uint32_t x626 = UINT32_MAX;
static int64_t x628 = 12547818792LL;
volatile uint32_t t77 = 103435355U;
volatile uint64_t x631 = 175713083137409915LLU;
static int64_t x669 = -1LL;
uint16_t x671 = 158U;
int16_t x673 = INT16_MIN;
uint64_t x692 = UINT64_MAX;
int32_t t85 = 1;
static volatile int64_t t86 = -1034297765LL;
int32_t x728 = INT32_MAX;
uint64_t t88 = 6042265LLU;
int64_t x737 = INT64_MAX;
volatile int8_t x742 = INT8_MIN;
static uint16_t x747 = 2U;
static int32_t x756 = INT32_MAX;
int32_t x776 = -1;
uint64_t x779 = 36LLU;
int16_t x780 = INT16_MAX;
static int16_t x784 = INT16_MAX;
volatile uint64_t t97 = 23279694LLU;
int8_t x787 = INT8_MAX;
volatile uint64_t x793 = 1849212430LLU;
int32_t x794 = INT32_MAX;
int32_t x811 = INT32_MAX;
int32_t x812 = INT32_MAX;
int32_t t100 = 0;
uint64_t t101 = 403712LLU;
int8_t x846 = -1;
int32_t x847 = -1;
uint16_t x871 = 521U;
int8_t x874 = INT8_MIN;
int16_t x878 = 8892;
int16_t x906 = 0;
static int16_t x913 = INT16_MIN;
volatile int8_t x915 = -4;
int32_t x916 = -1;
int8_t x926 = INT8_MIN;
volatile uint16_t x928 = 16105U;
volatile uint32_t x954 = UINT32_MAX;
uint32_t x955 = UINT32_MAX;
int32_t x959 = -79481;
volatile int16_t x961 = INT16_MAX;
uint16_t x969 = UINT16_MAX;
int64_t x978 = INT64_MIN;
int32_t x1001 = INT32_MIN;
int64_t x1002 = INT64_MIN;
int8_t x1003 = INT8_MIN;
volatile int32_t t121 = -23;
int16_t x1024 = -1;
uint16_t x1028 = 0U;
static int8_t x1054 = INT8_MIN;
int64_t x1055 = INT64_MIN;
static int32_t t126 = 115055692;
int64_t x1068 = 371915850615LL;
volatile int32_t t131 = -7815;
uint8_t x1097 = UINT8_MAX;
volatile int64_t x1147 = -1LL;
int64_t x1171 = INT64_MIN;
volatile int16_t x1178 = -1;
static int32_t x1209 = INT32_MIN;
int16_t x1217 = INT16_MIN;
uint8_t x1219 = 1U;
static int32_t x1227 = INT32_MIN;
int64_t x1248 = -1LL;
volatile int64_t t147 = -115661706308LL;
static int8_t x1291 = INT8_MIN;
static int64_t x1292 = -1LL;
int16_t x1293 = 1763;
int32_t x1305 = INT32_MIN;
int64_t x1314 = -4314272814555583LL;
int32_t t156 = -5;
int16_t x1325 = 4384;
uint32_t x1328 = 398063U;
static int16_t x1375 = INT16_MIN;
volatile int32_t t160 = 29;
static int8_t x1388 = -2;
volatile int64_t t161 = 1592974677LL;
int16_t x1401 = INT16_MAX;
int32_t x1402 = 293057137;
volatile int32_t x1404 = INT32_MAX;
int32_t x1406 = INT32_MIN;
volatile int32_t x1407 = INT32_MIN;
static int16_t x1457 = INT16_MIN;
int32_t x1459 = 106296;
int8_t x1471 = -1;
uint64_t x1472 = UINT64_MAX;
uint8_t x1478 = 86U;
uint16_t x1480 = 6945U;
volatile int16_t x1483 = INT16_MIN;
int16_t x1498 = 16;
int32_t x1511 = INT32_MIN;
int8_t x1553 = INT8_MAX;
int64_t x1555 = INT64_MIN;
volatile int16_t x1566 = INT16_MAX;
int32_t x1567 = INT32_MIN;
static uint16_t x1569 = UINT16_MAX;
uint16_t x1572 = UINT16_MAX;
static uint16_t x1590 = 3842U;
uint64_t x1597 = 799LLU;
uint32_t x1602 = 10055U;
int64_t x1603 = INT64_MIN;
volatile uint32_t t183 = 452572U;
int64_t x1623 = INT64_MIN;
volatile int64_t t184 = -57786570318280997LL;
int16_t x1625 = -333;
uint16_t x1636 = 3711U;
int32_t x1669 = -87759378;
int16_t x1685 = -12;
volatile uint64_t t190 = 241791LLU;
volatile uint16_t x1692 = 229U;
int16_t x1709 = INT16_MIN;
uint64_t x1733 = 594087LLU;
int32_t x1740 = -1;
static int64_t x1745 = -2669214LL;
uint64_t x1761 = 1413931826666LLU;
uint64_t t197 = 4LLU;
int16_t x1766 = INT16_MIN;
int8_t x1768 = INT8_MIN;
volatile int16_t x1791 = -1;
uint16_t x1792 = 3U;
int32_t t199 = 111514275;


void f0(void) {
    	int64_t x10 = 3677LL;
	static uint32_t x11 = 33305110U;
	int64_t t0 = 1139482LL;

    t0 = ((x9-x10)/(x11<=x12));

    if (t0 != -3665LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x13 = INT64_MAX;
	static uint8_t x14 = 0U;
	int16_t x15 = -199;
	volatile int64_t t1 = INT64_MAX;

    t1 = ((x13-x14)/(x15<=x16));

    if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x21 = 390669;
	int64_t x22 = 319605349LL;
	static volatile int32_t x23 = INT32_MIN;
	static int32_t x24 = -6816171;
	static int64_t t2 = -1LL;

    t2 = ((x21-x22)/(x23<=x24));

    if (t2 != -319214680LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x33 = -1LL;
	volatile int16_t x34 = -1;
	int8_t x35 = INT8_MIN;
	uint64_t x36 = UINT64_MAX;
	volatile int64_t t3 = -469670458575978779LL;

    t3 = ((x33-x34)/(x35<=x36));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x41 = UINT64_MAX;
	int16_t x43 = -1;
	uint8_t x44 = 3U;
	uint64_t t4 = 5LLU;

    t4 = ((x41-x42)/(x43<=x44));

    if (t4 != 18446744073709551546LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint8_t x45 = 1U;
	static uint64_t x46 = 7672492598293328619LLU;
	static volatile uint64_t t5 = 4735799294155476LLU;

    t5 = ((x45-x46)/(x47<=x48));

    if (t5 != 10774251475416222998LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x54 = INT16_MAX;
	uint8_t x56 = UINT8_MAX;

    t6 = ((x53-x54)/(x55<=x56));

    if (t6 != -34029) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x61 = 3U;
	uint8_t x62 = 1U;
	uint16_t x63 = 412U;
	int32_t t7 = 0;

    t7 = ((x61-x62)/(x63<=x64));

    if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x66 = -1;
	uint32_t x67 = 1U;
	static uint16_t x68 = UINT16_MAX;
	static volatile int32_t t8 = 28;

    t8 = ((x65-x66)/(x67<=x68));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x77 = 247;
	uint64_t x78 = 4262313427LLU;
	volatile uint16_t x80 = 1590U;

    t9 = ((x77-x78)/(x79<=x80));

    if (t9 != 18446744069447238436LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x86 = 397720869056LLU;
	int16_t x87 = INT16_MIN;
	int16_t x88 = -30;
	volatile uint64_t t10 = 81486619026400LLU;

    t10 = ((x85-x86)/(x87<=x88));

    if (t10 != 18446743678136166207LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x93 = INT16_MAX;
	static int64_t x95 = INT64_MIN;
	int64_t x96 = INT64_MIN;

    t11 = ((x93-x94)/(x95<=x96));

    if (t11 != 32640) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x97 = INT16_MIN;
	int64_t x98 = INT64_MIN;
	static int32_t x99 = -1;
	int8_t x100 = -1;
	int64_t t12 = -2405444LL;

    t12 = ((x97-x98)/(x99<=x100));

    if (t12 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x101 = INT16_MIN;
	int32_t x102 = -101985;
	int16_t x103 = INT16_MIN;
	int8_t x104 = 0;
	int32_t t13 = -492382221;

    t13 = ((x101-x102)/(x103<=x104));

    if (t13 != 69217) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x106 = 6U;
	uint32_t x108 = 392726U;

    t14 = ((x105-x106)/(x107<=x108));

    if (t14 != 4294967289U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x113 = 4106350477882346LLU;
	static int32_t x114 = 1;
	int16_t x116 = INT16_MAX;
	static volatile uint64_t t15 = 45314LLU;

    t15 = ((x113-x114)/(x115<=x116));

    if (t15 != 4106350477882345LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x130 = 151415945U;
	int8_t x131 = INT8_MAX;
	static uint32_t t16 = 164403U;

    t16 = ((x129-x130)/(x131<=x132));

    if (t16 != 4143551478U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x153 = 313814;
	uint64_t x154 = 208778892340382LLU;
	static int16_t x156 = INT16_MIN;
	uint64_t t17 = 169306LLU;

    t17 = ((x153-x154)/(x155<=x156));

    if (t17 != 18446535294817525048LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x157 = -4612;
	int64_t x158 = INT64_MIN;
	int64_t x160 = 28463LL;
	volatile int64_t t18 = 8021315LL;

    t18 = ((x157-x158)/(x159<=x160));

    if (t18 != 9223372036854771196LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int8_t x166 = -30;
	volatile int16_t x167 = INT16_MAX;
	uint64_t x168 = 2005138564LLU;

    t19 = ((x165-x166)/(x167<=x168));

    if (t19 != 30) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x169 = 4U;
	uint64_t x170 = UINT64_MAX;
	uint32_t x171 = 44574834U;
	uint32_t x172 = 1272795211U;
	volatile uint64_t t20 = 14599430888531160LLU;

    t20 = ((x169-x170)/(x171<=x172));

    if (t20 != 5LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x173 = -1073;
	static int16_t x175 = INT16_MAX;
	int64_t x176 = 2049143LL;
	volatile int32_t t21 = 1861669;

    t21 = ((x173-x174)/(x175<=x176));

    if (t21 != -1328) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x193 = UINT8_MAX;
	int64_t x194 = -2202535424908855567LL;
	static uint32_t x195 = 120721326U;
	volatile int64_t t22 = 2426659348210LL;

    t22 = ((x193-x194)/(x195<=x196));

    if (t22 != 2202535424908855822LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x202 = INT16_MIN;
	volatile int8_t x203 = -1;
	int64_t x204 = -1LL;
	uint64_t t23 = 3009478LLU;

    t23 = ((x201-x202)/(x203<=x204));

    if (t23 != 71169790248114LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x213 = 1573942;
	uint64_t x214 = 899LLU;
	uint32_t x215 = UINT32_MAX;
	static uint32_t x216 = UINT32_MAX;
	uint64_t t24 = 42415092916312442LLU;

    t24 = ((x213-x214)/(x215<=x216));

    if (t24 != 1573043LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x221 = INT32_MIN;
	int8_t x222 = -3;
	int64_t x223 = -1LL;
	volatile uint16_t x224 = 1U;
	volatile int32_t t25 = -87754;

    t25 = ((x221-x222)/(x223<=x224));

    if (t25 != -2147483645) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x233 = INT32_MIN;
	int16_t x234 = INT16_MIN;
	static volatile int8_t x235 = 18;
	volatile uint16_t x236 = UINT16_MAX;
	volatile int32_t t26 = -1;

    t26 = ((x233-x234)/(x235<=x236));

    if (t26 != -2147450880) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x238 = UINT64_MAX;
	int16_t x240 = 0;
	uint64_t t27 = 407LLU;

    t27 = ((x237-x238)/(x239<=x240));

    if (t27 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x241 = 14U;
	int16_t x243 = INT16_MIN;
	static uint32_t t28 = 395676U;

    t28 = ((x241-x242)/(x243<=x244));

    if (t28 != 4294967020U) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x266 = -8163;
	volatile uint16_t x267 = UINT16_MAX;
	static uint16_t x268 = UINT16_MAX;
	int32_t t29 = -11557;

    t29 = ((x265-x266)/(x267<=x268));

    if (t29 != 11398166) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x269 = 0U;
	uint8_t x270 = UINT8_MAX;
	static int32_t x272 = 5416;
	int32_t t30 = -109159829;

    t30 = ((x269-x270)/(x271<=x272));

    if (t30 != -255) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x277 = INT64_MAX;
	static volatile uint64_t x278 = 54705LLU;
	static volatile uint64_t t31 = 940987650758LLU;

    t31 = ((x277-x278)/(x279<=x280));

    if (t31 != 9223372036854721102LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x281 = -1;
	uint64_t x282 = 3204189248752239727LLU;
	int32_t x283 = INT32_MIN;

    t32 = ((x281-x282)/(x283<=x284));

    if (t32 != 15242554824957311888LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x294 = -1;
	uint32_t x295 = 526630617U;
	volatile int32_t x296 = INT32_MIN;
	static volatile int32_t t33 = -1988;

    t33 = ((x293-x294)/(x295<=x296));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int8_t x301 = INT8_MAX;
	int16_t x302 = INT16_MAX;
	int64_t x303 = -713908554285LL;
	int8_t x304 = 7;

    t34 = ((x301-x302)/(x303<=x304));

    if (t34 != -32640) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x305 = -1;
	uint16_t x306 = 3U;
	static uint16_t x307 = 13U;
	static volatile uint32_t x308 = 339U;
	volatile int32_t t35 = -1048;

    t35 = ((x305-x306)/(x307<=x308));

    if (t35 != -4) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x317 = 2871LLU;
	static uint32_t x318 = 240U;
	volatile int64_t x319 = -54797LL;
	uint16_t x320 = UINT16_MAX;

    t36 = ((x317-x318)/(x319<=x320));

    if (t36 != 2631LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x325 = INT32_MIN;
	volatile int8_t x326 = INT8_MIN;
	int32_t x327 = INT32_MIN;
	uint16_t x328 = UINT16_MAX;
	static int32_t t37 = 1754;

    t37 = ((x325-x326)/(x327<=x328));

    if (t37 != -2147483520) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x334 = 24032540U;
	uint64_t x335 = 9631474823216028LLU;
	static volatile uint64_t t38 = 1110364785581276LLU;

    t38 = ((x333-x334)/(x335<=x336));

    if (t38 != 2672620258345LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x337 = 187U;
	volatile uint16_t x340 = UINT16_MAX;
	static volatile uint32_t t39 = 196945U;

    t39 = ((x337-x338)/(x339<=x340));

    if (t39 != 153U) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x345 = INT64_MIN;
	int32_t x347 = 45465;
	uint32_t x348 = 529547397U;
	volatile int64_t t40 = 1377LL;

    t40 = ((x345-x346)/(x347<=x348));

    if (t40 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x349 = INT8_MAX;
	static int64_t x350 = -1LL;
	int64_t x351 = INT64_MIN;
	volatile uint8_t x352 = 3U;
	volatile int64_t t41 = 268804668329LL;

    t41 = ((x349-x350)/(x351<=x352));

    if (t41 != 128LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x361 = 3379U;
	volatile int32_t x362 = INT32_MAX;
	int32_t x364 = INT32_MAX;
	static volatile int32_t t42 = -16212;

    t42 = ((x361-x362)/(x363<=x364));

    if (t42 != -2147480268) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x366 = 7U;
	static int16_t x367 = INT16_MIN;
	volatile int64_t x368 = INT64_MAX;
	static uint32_t t43 = 339526U;

    t43 = ((x365-x366)/(x367<=x368));

    if (t43 != 2305U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x387 = INT16_MIN;
	static volatile uint64_t t44 = 1730093LLU;

    t44 = ((x385-x386)/(x387<=x388));

    if (t44 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x394 = -1LL;
	int16_t x396 = INT16_MIN;
	int64_t t45 = 16043256743LL;

    t45 = ((x393-x394)/(x395<=x396));

    if (t45 != -35LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x405 = 2162;
	static volatile int16_t x406 = INT16_MIN;
	uint64_t x407 = UINT64_MAX;
	int8_t x408 = -1;

    t46 = ((x405-x406)/(x407<=x408));

    if (t46 != 34930) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x433 = UINT32_MAX;
	static int16_t x434 = -1;
	int32_t x435 = -1;
	uint32_t t47 = 526656541U;

    t47 = ((x433-x434)/(x435<=x436));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x439 = 1;
	uint64_t x440 = 4001253243260LLU;

    t48 = ((x437-x438)/(x439<=x440));

    if (t48 != 14164453LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x445 = -14833102871786818LL;
	int8_t x446 = INT8_MIN;
	uint16_t x447 = 502U;
	int32_t x448 = 54105289;
	volatile int64_t t49 = -324392997LL;

    t49 = ((x445-x446)/(x447<=x448));

    if (t49 != -14833102871786690LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x453 = 1036;
	static volatile uint16_t x454 = UINT16_MAX;
	static int8_t x455 = INT8_MAX;
	static int16_t x456 = INT16_MAX;
	int32_t t50 = -3290748;

    t50 = ((x453-x454)/(x455<=x456));

    if (t50 != -64499) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x459 = 229;
	int64_t x460 = 9071LL;
	int64_t t51 = -684777537010819773LL;

    t51 = ((x457-x458)/(x459<=x460));

    if (t51 != 567LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x466 = 144U;
	volatile uint32_t t52 = 48U;

    t52 = ((x465-x466)/(x467<=x468));

    if (t52 != 4294967024U) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x469 = INT32_MIN;
	uint32_t x470 = UINT32_MAX;
	volatile int16_t x471 = -2;
	int16_t x472 = -1;
	static uint32_t t53 = 21U;

    t53 = ((x469-x470)/(x471<=x472));

    if (t53 != 2147483649U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x481 = 38834272468LL;
	int8_t x482 = 1;
	static int64_t t54 = 4LL;

    t54 = ((x481-x482)/(x483<=x484));

    if (t54 != 38834272467LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x489 = -1;
	static int16_t x490 = 50;
	int32_t x491 = INT32_MAX;
	static uint32_t x492 = UINT32_MAX;
	volatile int32_t t55 = -855;

    t55 = ((x489-x490)/(x491<=x492));

    if (t55 != -51) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x493 = 32U;
	int16_t x494 = -1;
	int32_t x496 = INT32_MAX;
	volatile int32_t t56 = 7;

    t56 = ((x493-x494)/(x495<=x496));

    if (t56 != 33) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x499 = UINT8_MAX;
	static uint16_t x500 = UINT16_MAX;
	int32_t t57 = 32591;

    t57 = ((x497-x498)/(x499<=x500));

    if (t57 != -2147450880) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x502 = 2356460;
	static volatile int64_t x503 = INT64_MIN;
	volatile uint32_t x504 = UINT32_MAX;
	int32_t t58 = 139824304;

    t58 = ((x501-x502)/(x503<=x504));

    if (t58 != -2356460) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x505 = INT8_MAX;
	int16_t x506 = 1;
	static int32_t x507 = -4;
	volatile int16_t x508 = -1;
	int32_t t59 = 5893;

    t59 = ((x505-x506)/(x507<=x508));

    if (t59 != 126) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x509 = UINT8_MAX;
	int8_t x510 = -6;
	volatile int16_t x511 = INT16_MIN;
	static int16_t x512 = INT16_MIN;

    t60 = ((x509-x510)/(x511<=x512));

    if (t60 != 261) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x513 = INT16_MIN;
	uint32_t x514 = 3480920U;
	volatile uint32_t x515 = 729U;
	int32_t x516 = 48219007;
	volatile uint32_t t61 = 113975368U;

    t61 = ((x513-x514)/(x515<=x516));

    if (t61 != 4291453608U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x517 = 4603092485508939095LLU;
	int16_t x518 = INT16_MIN;
	uint8_t x519 = 8U;
	uint32_t x520 = 5731929U;
	uint64_t t62 = 316049496783934482LLU;

    t62 = ((x517-x518)/(x519<=x520));

    if (t62 != 4603092485508971863LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x521 = 0;
	static int64_t x522 = 446382311LL;
	uint32_t x523 = 1370U;
	int16_t x524 = INT16_MIN;
	int64_t t63 = -72779LL;

    t63 = ((x521-x522)/(x523<=x524));

    if (t63 != -446382311LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x525 = -7;
	volatile int16_t x527 = INT16_MIN;
	int32_t x528 = 1;

    t64 = ((x525-x526)/(x527<=x528));

    if (t64 != -65542) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x529 = UINT8_MAX;
	int16_t x531 = -1;
	int32_t x532 = 53227;
	uint32_t t65 = 5U;

    t65 = ((x529-x530)/(x531<=x532));

    if (t65 != 255U) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x534 = INT32_MAX;
	static int16_t x535 = 3;
	uint8_t x536 = 31U;
	static volatile int32_t t66 = INT32_MIN;

    t66 = ((x533-x534)/(x535<=x536));

    if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x538 = -1LL;
	uint32_t x540 = 2749U;
	volatile int64_t t67 = 266310889LL;

    t67 = ((x537-x538)/(x539<=x540));

    if (t67 != -17641818LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x545 = INT64_MAX;
	int16_t x546 = 1;
	int8_t x547 = -46;
	uint8_t x548 = 0U;
	volatile int64_t t68 = 4039323LL;

    t68 = ((x545-x546)/(x547<=x548));

    if (t68 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x559 = 1;
	int8_t x560 = INT8_MAX;
	int64_t t69 = -2224237644055777112LL;

    t69 = ((x557-x558)/(x559<=x560));

    if (t69 != -8839189677LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x561 = -1;
	uint8_t x562 = 0U;
	static uint16_t x563 = 1447U;
	uint16_t x564 = UINT16_MAX;
	static int32_t t70 = -212244;

    t70 = ((x561-x562)/(x563<=x564));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x581 = UINT16_MAX;
	uint32_t x582 = UINT32_MAX;
	static volatile int8_t x583 = INT8_MIN;
	int8_t x584 = 3;
	uint32_t t71 = 1475U;

    t71 = ((x581-x582)/(x583<=x584));

    if (t71 != 65536U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x593 = 175195133U;
	uint64_t x594 = 56411661137445LLU;
	uint8_t x595 = 36U;
	int16_t x596 = 3333;
	uint64_t t72 = 5879LLU;

    t72 = ((x593-x594)/(x595<=x596));

    if (t72 != 18446687662223609304LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x597 = -1LL;
	int64_t x598 = INT64_MIN;
	int64_t x599 = INT64_MIN;
	int16_t x600 = INT16_MIN;

    t73 = ((x597-x598)/(x599<=x600));

    if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x601 = UINT8_MAX;
	int32_t x602 = INT32_MAX;
	int64_t x603 = INT64_MIN;
	int16_t x604 = 12;
	int32_t t74 = -54518;

    t74 = ((x601-x602)/(x603<=x604));

    if (t74 != -2147483392) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x613 = 5363LLU;
	int16_t x615 = INT16_MIN;
	int8_t x616 = INT8_MIN;

    t75 = ((x613-x614)/(x615<=x616));

    if (t75 != 18446744073709491444LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x621 = 0U;
	static volatile int16_t x623 = INT16_MIN;
	static uint16_t x624 = 0U;
	uint64_t t76 = 6389862905897LLU;

    t76 = ((x621-x622)/(x623<=x624));

    if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x625 = 2741802U;
	volatile int16_t x627 = -1;

    t77 = ((x625-x626)/(x627<=x628));

    if (t77 != 2741803U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x629 = 103U;
	static volatile uint8_t x630 = 6U;
	int64_t x632 = INT64_MIN;
	int32_t t78 = 10048;

    t78 = ((x629-x630)/(x631<=x632));

    if (t78 != 97) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x637 = 321137617LLU;
	static int32_t x638 = INT32_MIN;
	uint16_t x639 = 0U;
	int8_t x640 = 1;
	uint64_t t79 = 2404010236LLU;

    t79 = ((x637-x638)/(x639<=x640));

    if (t79 != 2468621265LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x657 = 28;
	int16_t x658 = INT16_MIN;
	volatile int32_t x659 = INT32_MIN;
	int16_t x660 = 3;
	volatile int32_t t80 = -949339617;

    t80 = ((x657-x658)/(x659<=x660));

    if (t80 != 32796) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x661 = -1LL;
	uint8_t x662 = 7U;
	static int32_t x663 = -1;
	static uint16_t x664 = 1U;
	int64_t t81 = 67645457900611305LL;

    t81 = ((x661-x662)/(x663<=x664));

    if (t81 != -8LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x670 = INT64_MIN;
	volatile int32_t x672 = INT32_MAX;
	volatile int64_t t82 = INT64_MAX;

    t82 = ((x669-x670)/(x671<=x672));

    if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x674 = INT16_MIN;
	int16_t x675 = -1;
	int8_t x676 = 0;
	int32_t t83 = -1015468;

    t83 = ((x673-x674)/(x675<=x676));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x689 = 1U;
	int16_t x690 = -1;
	volatile int16_t x691 = -1;
	static volatile uint32_t t84 = 131438U;

    t84 = ((x689-x690)/(x691<=x692));

    if (t84 != 2U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x693 = INT8_MIN;
	int8_t x694 = INT8_MIN;
	uint8_t x695 = 10U;
	uint8_t x696 = UINT8_MAX;

    t85 = ((x693-x694)/(x695<=x696));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x697 = -1;
	int64_t x698 = 10191892764808512LL;
	static int64_t x699 = -304317569166760LL;
	volatile int32_t x700 = 6;

    t86 = ((x697-x698)/(x699<=x700));

    if (t86 != -10191892764808513LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x725 = INT8_MAX;
	static int64_t x726 = -1LL;
	volatile int8_t x727 = INT8_MAX;
	int64_t t87 = 3192388068438352181LL;

    t87 = ((x725-x726)/(x727<=x728));

    if (t87 != 128LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x729 = 129277665341412LLU;
	int8_t x730 = INT8_MAX;
	volatile int64_t x731 = -1LL;
	uint64_t x732 = UINT64_MAX;

    t88 = ((x729-x730)/(x731<=x732));

    if (t88 != 129277665341285LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x733 = UINT32_MAX;
	int16_t x734 = INT16_MAX;
	static uint8_t x735 = UINT8_MAX;
	uint64_t x736 = 1229LLU;
	volatile uint32_t t89 = 3342U;

    t89 = ((x733-x734)/(x735<=x736));

    if (t89 != 4294934528U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x738 = INT8_MAX;
	int16_t x739 = INT16_MIN;
	static int16_t x740 = INT16_MAX;
	static volatile int64_t t90 = 2993LL;

    t90 = ((x737-x738)/(x739<=x740));

    if (t90 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x741 = INT32_MIN;
	uint32_t x743 = 88329670U;
	static uint64_t x744 = UINT64_MAX;
	static volatile int32_t t91 = 22983942;

    t91 = ((x741-x742)/(x743<=x744));

    if (t91 != -2147483520) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x745 = 14645LL;
	int16_t x746 = -1;
	int16_t x748 = INT16_MAX;
	volatile int64_t t92 = 18320929523930LL;

    t92 = ((x745-x746)/(x747<=x748));

    if (t92 != 14646LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x753 = -1;
	static volatile uint16_t x754 = 78U;
	static uint8_t x755 = 20U;
	static volatile int32_t t93 = -4128150;

    t93 = ((x753-x754)/(x755<=x756));

    if (t93 != -79) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x757 = 4502U;
	int64_t x758 = INT64_MAX;
	int64_t x759 = INT64_MIN;
	volatile int8_t x760 = INT8_MAX;
	int64_t t94 = -6197362733643LL;

    t94 = ((x757-x758)/(x759<=x760));

    if (t94 != -9223372036854771305LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x773 = -1;
	static int32_t x774 = -2;
	volatile int32_t x775 = INT32_MIN;
	volatile int32_t t95 = -73;

    t95 = ((x773-x774)/(x775<=x776));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x777 = INT8_MIN;
	int16_t x778 = INT16_MIN;
	int32_t t96 = -1;

    t96 = ((x777-x778)/(x779<=x780));

    if (t96 != 32640) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x781 = 12108LLU;
	int16_t x782 = INT16_MIN;
	volatile int32_t x783 = -1;

    t97 = ((x781-x782)/(x783<=x784));

    if (t97 != 44876LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x785 = -32;
	int16_t x786 = INT16_MIN;
	uint16_t x788 = 7173U;
	volatile int32_t t98 = 7;

    t98 = ((x785-x786)/(x787<=x788));

    if (t98 != 32736) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x795 = -1;
	int32_t x796 = INT32_MAX;
	uint64_t t99 = 8161187852438LLU;

    t99 = ((x793-x794)/(x795<=x796));

    if (t99 != 18446744073411280399LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int32_t x809 = INT32_MAX;
	int32_t x810 = 732;

    t100 = ((x809-x810)/(x811<=x812));

    if (t100 != 2147482915) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x813 = 122;
	static uint64_t x814 = UINT64_MAX;
	uint32_t x815 = 2U;
	int16_t x816 = -1;

    t101 = ((x813-x814)/(x815<=x816));

    if (t101 != 123LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x845 = 63U;
	int64_t x848 = INT64_MAX;
	int32_t t102 = -12708;

    t102 = ((x845-x846)/(x847<=x848));

    if (t102 != 64) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x869 = INT64_MIN;
	static uint64_t x870 = UINT64_MAX;
	static int32_t x872 = INT32_MAX;
	static uint64_t t103 = 11756822LLU;

    t103 = ((x869-x870)/(x871<=x872));

    if (t103 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x873 = INT32_MIN;
	volatile int32_t x875 = INT32_MIN;
	int16_t x876 = 355;
	static int32_t t104 = 8167452;

    t104 = ((x873-x874)/(x875<=x876));

    if (t104 != -2147483520) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x877 = INT8_MAX;
	int64_t x879 = -1LL;
	volatile int32_t x880 = INT32_MAX;
	int32_t t105 = -12713781;

    t105 = ((x877-x878)/(x879<=x880));

    if (t105 != -8765) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x901 = INT8_MIN;
	static int16_t x902 = -275;
	volatile int32_t x903 = -473714;
	uint16_t x904 = 75U;
	int32_t t106 = 132;

    t106 = ((x901-x902)/(x903<=x904));

    if (t106 != 147) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x905 = INT32_MIN;
	int8_t x907 = INT8_MAX;
	uint16_t x908 = 412U;
	volatile int32_t t107 = INT32_MIN;

    t107 = ((x905-x906)/(x907<=x908));

    if (t107 != INT32_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x914 = 30U;
	int32_t t108 = -26149;

    t108 = ((x913-x914)/(x915<=x916));

    if (t108 != -32798) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x921 = -1;
	int64_t x922 = INT64_MAX;
	int64_t x923 = -58568534606LL;
	static uint64_t x924 = UINT64_MAX;
	static volatile int64_t t109 = INT64_MIN;

    t109 = ((x921-x922)/(x923<=x924));

    if (t109 != INT64_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x925 = UINT64_MAX;
	static volatile int64_t x927 = -1LL;
	volatile uint64_t t110 = 16086817823305LLU;

    t110 = ((x925-x926)/(x927<=x928));

    if (t110 != 127LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x949 = 1U;
	static volatile int32_t x950 = -1;
	volatile int8_t x951 = 1;
	volatile uint16_t x952 = 257U;
	int32_t t111 = 4716;

    t111 = ((x949-x950)/(x951<=x952));

    if (t111 != 2) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x953 = UINT16_MAX;
	uint64_t x956 = UINT64_MAX;
	volatile uint32_t t112 = 268253619U;

    t112 = ((x953-x954)/(x955<=x956));

    if (t112 != 65536U) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint64_t x957 = UINT64_MAX;
	int16_t x958 = -1;
	int32_t x960 = INT32_MAX;
	volatile uint64_t t113 = 10148759095LLU;

    t113 = ((x957-x958)/(x959<=x960));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x962 = -12501308;
	uint32_t x963 = 244938U;
	int32_t x964 = -9750718;
	int32_t t114 = 777;

    t114 = ((x961-x962)/(x963<=x964));

    if (t114 != 12534075) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x965 = 1992631362U;
	uint64_t x966 = UINT64_MAX;
	int16_t x967 = 12742;
	int16_t x968 = INT16_MAX;
	volatile uint64_t t115 = 5697985960LLU;

    t115 = ((x965-x966)/(x967<=x968));

    if (t115 != 1992631363LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int16_t x970 = INT16_MIN;
	int64_t x971 = INT64_MIN;
	int8_t x972 = 14;
	static volatile int32_t t116 = -1184490;

    t116 = ((x969-x970)/(x971<=x972));

    if (t116 != 98303) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x977 = INT64_MIN;
	int32_t x979 = INT32_MIN;
	int64_t x980 = -1376397LL;
	volatile int64_t t117 = -383133176783777074LL;

    t117 = ((x977-x978)/(x979<=x980));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x985 = 0;
	volatile int8_t x986 = INT8_MIN;
	uint16_t x987 = 515U;
	int16_t x988 = INT16_MAX;
	int32_t t118 = -6;

    t118 = ((x985-x986)/(x987<=x988));

    if (t118 != 128) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x1004 = UINT16_MAX;
	static volatile int64_t t119 = -85267690LL;

    t119 = ((x1001-x1002)/(x1003<=x1004));

    if (t119 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x1005 = -1LL;
	volatile int16_t x1006 = 4;
	static int8_t x1007 = INT8_MAX;
	int64_t x1008 = INT64_MAX;
	volatile int64_t t120 = -75248398975LL;

    t120 = ((x1005-x1006)/(x1007<=x1008));

    if (t120 != -5LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x1009 = -1;
	int8_t x1010 = INT8_MIN;
	int8_t x1011 = -1;
	int16_t x1012 = INT16_MAX;

    t121 = ((x1009-x1010)/(x1011<=x1012));

    if (t121 != 127) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x1021 = 1240785888U;
	int32_t x1022 = INT32_MIN;
	static volatile int64_t x1023 = -395871308LL;
	static uint32_t t122 = 1U;

    t122 = ((x1021-x1022)/(x1023<=x1024));

    if (t122 != 3388269536U) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int64_t x1025 = INT64_MAX;
	uint16_t x1026 = 4645U;
	volatile int32_t x1027 = INT32_MIN;
	int64_t t123 = -7LL;

    t123 = ((x1025-x1026)/(x1027<=x1028));

    if (t123 != 9223372036854771162LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x1037 = INT8_MIN;
	int16_t x1038 = INT16_MIN;
	static int8_t x1039 = INT8_MIN;
	static volatile int32_t x1040 = 355564;
	volatile int32_t t124 = -1532119;

    t124 = ((x1037-x1038)/(x1039<=x1040));

    if (t124 != 32640) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x1049 = INT64_MIN;
	static volatile uint64_t x1050 = UINT64_MAX;
	int64_t x1051 = -21LL;
	int8_t x1052 = -13;
	static uint64_t t125 = 15322894587633573LLU;

    t125 = ((x1049-x1050)/(x1051<=x1052));

    if (t125 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x1053 = INT16_MIN;
	int16_t x1056 = -1;

    t126 = ((x1053-x1054)/(x1055<=x1056));

    if (t126 != -32640) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x1057 = -95;
	uint32_t x1058 = UINT32_MAX;
	int64_t x1059 = -24054611749780279LL;
	uint16_t x1060 = UINT16_MAX;
	uint32_t t127 = 883U;

    t127 = ((x1057-x1058)/(x1059<=x1060));

    if (t127 != 4294967202U) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x1065 = -1;
	int8_t x1066 = -1;
	volatile uint16_t x1067 = 25U;
	volatile int32_t t128 = -3660;

    t128 = ((x1065-x1066)/(x1067<=x1068));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x1077 = UINT16_MAX;
	uint64_t x1078 = 5229LLU;
	volatile int16_t x1079 = INT16_MIN;
	uint8_t x1080 = UINT8_MAX;
	uint64_t t129 = 538LLU;

    t129 = ((x1077-x1078)/(x1079<=x1080));

    if (t129 != 60306LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x1081 = 5U;
	int8_t x1082 = INT8_MAX;
	int16_t x1083 = INT16_MIN;
	int16_t x1084 = INT16_MAX;
	int32_t t130 = 3710;

    t130 = ((x1081-x1082)/(x1083<=x1084));

    if (t130 != -122) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x1085 = -12;
	int16_t x1086 = INT16_MIN;
	static int64_t x1087 = 247197598462686098LL;
	static int64_t x1088 = INT64_MAX;

    t131 = ((x1085-x1086)/(x1087<=x1088));

    if (t131 != 32756) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x1098 = 88;
	static int32_t x1099 = -485;
	int32_t x1100 = 61;
	volatile int32_t t132 = 2181;

    t132 = ((x1097-x1098)/(x1099<=x1100));

    if (t132 != 167) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x1101 = INT8_MIN;
	int16_t x1102 = 3;
	int32_t x1103 = INT32_MIN;
	int16_t x1104 = -3;
	int32_t t133 = 7655718;

    t133 = ((x1101-x1102)/(x1103<=x1104));

    if (t133 != -131) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x1117 = UINT32_MAX;
	int32_t x1118 = INT32_MIN;
	static int32_t x1119 = -2480465;
	uint64_t x1120 = UINT64_MAX;
	volatile uint32_t t134 = 207458680U;

    t134 = ((x1117-x1118)/(x1119<=x1120));

    if (t134 != 2147483647U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x1137 = UINT32_MAX;
	volatile uint32_t x1138 = UINT32_MAX;
	int32_t x1139 = INT32_MIN;
	volatile int32_t x1140 = -1;
	uint32_t t135 = 132540U;

    t135 = ((x1137-x1138)/(x1139<=x1140));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x1145 = -1;
	int64_t x1146 = 3293128004LL;
	static uint32_t x1148 = UINT32_MAX;
	int64_t t136 = -121261709902929396LL;

    t136 = ((x1145-x1146)/(x1147<=x1148));

    if (t136 != -3293128005LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x1153 = -29411763;
	uint8_t x1154 = UINT8_MAX;
	uint32_t x1155 = 125U;
	int32_t x1156 = 1394;
	volatile int32_t t137 = -10543370;

    t137 = ((x1153-x1154)/(x1155<=x1156));

    if (t137 != -29412018) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x1169 = 0U;
	int64_t x1170 = -1LL;
	int32_t x1172 = INT32_MAX;
	volatile int64_t t138 = -1LL;

    t138 = ((x1169-x1170)/(x1171<=x1172));

    if (t138 != 1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x1177 = INT8_MIN;
	uint8_t x1179 = 6U;
	volatile int32_t x1180 = 260750;
	volatile int32_t t139 = -976;

    t139 = ((x1177-x1178)/(x1179<=x1180));

    if (t139 != -127) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x1193 = UINT64_MAX;
	int64_t x1194 = INT64_MAX;
	volatile uint8_t x1195 = 11U;
	int32_t x1196 = INT32_MAX;
	static uint64_t t140 = 7040248LLU;

    t140 = ((x1193-x1194)/(x1195<=x1196));

    if (t140 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x1210 = 0U;
	int64_t x1211 = -1LL;
	uint16_t x1212 = 2122U;
	int32_t t141 = INT32_MIN;

    t141 = ((x1209-x1210)/(x1211<=x1212));

    if (t141 != INT32_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x1218 = 3376;
	uint8_t x1220 = UINT8_MAX;
	int32_t t142 = -1;

    t142 = ((x1217-x1218)/(x1219<=x1220));

    if (t142 != -36144) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x1225 = 914;
	int16_t x1226 = 162;
	int16_t x1228 = -1;
	int32_t t143 = 3624068;

    t143 = ((x1225-x1226)/(x1227<=x1228));

    if (t143 != 752) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x1245 = -40;
	uint8_t x1246 = UINT8_MAX;
	volatile int32_t x1247 = INT32_MIN;
	static volatile int32_t t144 = -29093;

    t144 = ((x1245-x1246)/(x1247<=x1248));

    if (t144 != -295) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x1249 = -1LL;
	int16_t x1250 = -1;
	volatile int8_t x1251 = -1;
	volatile int8_t x1252 = INT8_MAX;
	volatile int64_t t145 = -15592423LL;

    t145 = ((x1249-x1250)/(x1251<=x1252));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1253 = 1;
	static uint64_t x1254 = 4LLU;
	int64_t x1255 = -1LL;
	int16_t x1256 = INT16_MAX;
	uint64_t t146 = 262LLU;

    t146 = ((x1253-x1254)/(x1255<=x1256));

    if (t146 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x1257 = INT64_MAX;
	uint8_t x1258 = UINT8_MAX;
	volatile int64_t x1259 = INT64_MIN;
	uint16_t x1260 = 2046U;

    t147 = ((x1257-x1258)/(x1259<=x1260));

    if (t147 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x1269 = UINT16_MAX;
	uint8_t x1270 = UINT8_MAX;
	int32_t x1271 = INT32_MIN;
	int8_t x1272 = INT8_MIN;
	int32_t t148 = 35378401;

    t148 = ((x1269-x1270)/(x1271<=x1272));

    if (t148 != 65280) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x1277 = UINT8_MAX;
	static volatile int32_t x1278 = -1430;
	volatile uint64_t x1279 = 90262357LLU;
	int8_t x1280 = INT8_MIN;
	int32_t t149 = -160;

    t149 = ((x1277-x1278)/(x1279<=x1280));

    if (t149 != 1685) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x1285 = 0U;
	int16_t x1286 = -2;
	uint64_t x1287 = 5090643LLU;
	int64_t x1288 = -551LL;
	int32_t t150 = 91591585;

    t150 = ((x1285-x1286)/(x1287<=x1288));

    if (t150 != 2) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x1289 = INT64_MIN;
	int32_t x1290 = INT32_MIN;
	int64_t t151 = 287589451LL;

    t151 = ((x1289-x1290)/(x1291<=x1292));

    if (t151 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x1294 = UINT64_MAX;
	int8_t x1295 = 1;
	uint64_t x1296 = UINT64_MAX;
	uint64_t t152 = 213LLU;

    t152 = ((x1293-x1294)/(x1295<=x1296));

    if (t152 != 1764LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x1306 = INT32_MIN;
	int32_t x1307 = -1;
	int32_t x1308 = 2499587;
	int32_t t153 = -106243;

    t153 = ((x1305-x1306)/(x1307<=x1308));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x1313 = 41693U;
	int8_t x1315 = 1;
	int64_t x1316 = 1352903358691678LL;
	static int64_t t154 = 3262105446LL;

    t154 = ((x1313-x1314)/(x1315<=x1316));

    if (t154 != 4314272814597276LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x1317 = 0;
	uint32_t x1318 = 3U;
	int64_t x1319 = -1LL;
	int8_t x1320 = -1;
	volatile uint32_t t155 = 823919U;

    t155 = ((x1317-x1318)/(x1319<=x1320));

    if (t155 != 4294967293U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1321 = 17U;
	volatile uint16_t x1322 = UINT16_MAX;
	int32_t x1323 = 30;
	uint16_t x1324 = 343U;

    t156 = ((x1321-x1322)/(x1323<=x1324));

    if (t156 != -65518) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x1326 = -2;
	int64_t x1327 = INT64_MIN;
	int32_t t157 = -9971;

    t157 = ((x1325-x1326)/(x1327<=x1328));

    if (t157 != 4386) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1369 = -18562LL;
	uint32_t x1370 = UINT32_MAX;
	int32_t x1371 = 13063;
	static uint32_t x1372 = UINT32_MAX;
	static int64_t t158 = 13222683097768666LL;

    t158 = ((x1369-x1370)/(x1371<=x1372));

    if (t158 != -4294985857LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x1373 = INT64_MIN;
	static int64_t x1374 = INT64_MIN;
	static int8_t x1376 = INT8_MIN;
	int64_t t159 = -2133457922159LL;

    t159 = ((x1373-x1374)/(x1375<=x1376));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x1381 = INT32_MIN;
	static int16_t x1382 = -1;
	static int64_t x1383 = INT64_MIN;
	int32_t x1384 = INT32_MIN;

    t160 = ((x1381-x1382)/(x1383<=x1384));

    if (t160 != -2147483647) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x1385 = 0U;
	int64_t x1386 = 64981561LL;
	static uint32_t x1387 = 56U;

    t161 = ((x1385-x1386)/(x1387<=x1388));

    if (t161 != -64981561LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x1393 = INT32_MIN;
	uint32_t x1394 = UINT32_MAX;
	int16_t x1395 = 3;
	uint32_t x1396 = 297U;
	volatile uint32_t t162 = 415862U;

    t162 = ((x1393-x1394)/(x1395<=x1396));

    if (t162 != 2147483649U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x1397 = -1LL;
	int16_t x1398 = INT16_MIN;
	static int32_t x1399 = INT32_MIN;
	static int8_t x1400 = INT8_MIN;
	int64_t t163 = -9389019140441667LL;

    t163 = ((x1397-x1398)/(x1399<=x1400));

    if (t163 != 32767LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x1403 = -526955438618767191LL;
	static int32_t t164 = -2838;

    t164 = ((x1401-x1402)/(x1403<=x1404));

    if (t164 != -293024370) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x1405 = INT64_MIN;
	int64_t x1408 = -1LL;
	static volatile int64_t t165 = -810439LL;

    t165 = ((x1405-x1406)/(x1407<=x1408));

    if (t165 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x1417 = 4U;
	volatile int8_t x1418 = INT8_MIN;
	uint8_t x1419 = 4U;
	int8_t x1420 = INT8_MAX;
	int32_t t166 = 87362;

    t166 = ((x1417-x1418)/(x1419<=x1420));

    if (t166 != 132) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x1437 = INT16_MAX;
	int16_t x1438 = -469;
	static uint64_t x1439 = UINT64_MAX;
	int8_t x1440 = -1;
	static int32_t t167 = -524576163;

    t167 = ((x1437-x1438)/(x1439<=x1440));

    if (t167 != 33236) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1458 = 1LL;
	static uint32_t x1460 = 2755824U;
	volatile int64_t t168 = -218908565200449LL;

    t168 = ((x1457-x1458)/(x1459<=x1460));

    if (t168 != -32769LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1469 = -1;
	volatile int32_t x1470 = 612;
	volatile int32_t t169 = 30505334;

    t169 = ((x1469-x1470)/(x1471<=x1472));

    if (t169 != -613) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1473 = 0U;
	int8_t x1474 = -4;
	uint64_t x1475 = 2036176288LLU;
	int64_t x1476 = INT64_MAX;
	int32_t t170 = -8722232;

    t170 = ((x1473-x1474)/(x1475<=x1476));

    if (t170 != 4) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1477 = INT16_MAX;
	static uint32_t x1479 = 84U;
	volatile int32_t t171 = 191640899;

    t171 = ((x1477-x1478)/(x1479<=x1480));

    if (t171 != 32681) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x1481 = UINT8_MAX;
	int16_t x1482 = -3;
	volatile int64_t x1484 = 265167928845035LL;
	static volatile int32_t t172 = -457;

    t172 = ((x1481-x1482)/(x1483<=x1484));

    if (t172 != 258) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x1497 = 2;
	volatile uint8_t x1499 = 0U;
	int32_t x1500 = INT32_MAX;
	int32_t t173 = -1;

    t173 = ((x1497-x1498)/(x1499<=x1500));

    if (t173 != -14) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1505 = -4571;
	volatile uint8_t x1506 = 0U;
	int32_t x1507 = INT32_MIN;
	int8_t x1508 = 1;
	int32_t t174 = 25588591;

    t174 = ((x1505-x1506)/(x1507<=x1508));

    if (t174 != -4571) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1509 = -676287922984LL;
	uint8_t x1510 = 7U;
	static int8_t x1512 = 3;
	int64_t t175 = 2170068018175LL;

    t175 = ((x1509-x1510)/(x1511<=x1512));

    if (t175 != -676287922991LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x1513 = 17;
	static int16_t x1514 = INT16_MIN;
	static volatile int32_t x1515 = -156;
	int32_t x1516 = 883142874;
	volatile int32_t t176 = 3222;

    t176 = ((x1513-x1514)/(x1515<=x1516));

    if (t176 != 32785) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1554 = INT16_MAX;
	int8_t x1556 = INT8_MIN;
	volatile int32_t t177 = -2211101;

    t177 = ((x1553-x1554)/(x1555<=x1556));

    if (t177 != -32640) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x1565 = -1;
	static uint32_t x1568 = UINT32_MAX;
	int32_t t178 = 0;

    t178 = ((x1565-x1566)/(x1567<=x1568));

    if (t178 != -32768) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x1570 = -1;
	volatile uint8_t x1571 = 1U;
	int32_t t179 = -27496119;

    t179 = ((x1569-x1570)/(x1571<=x1572));

    if (t179 != 65536) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x1589 = INT8_MAX;
	int8_t x1591 = INT8_MIN;
	static int8_t x1592 = INT8_MIN;
	int32_t t180 = -1;

    t180 = ((x1589-x1590)/(x1591<=x1592));

    if (t180 != -3715) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int8_t x1598 = -1;
	volatile uint16_t x1599 = UINT16_MAX;
	volatile int64_t x1600 = INT64_MAX;
	volatile uint64_t t181 = 5715069560283079412LLU;

    t181 = ((x1597-x1598)/(x1599<=x1600));

    if (t181 != 800LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1601 = INT32_MIN;
	int64_t x1604 = -1LL;
	static uint32_t t182 = 14207182U;

    t182 = ((x1601-x1602)/(x1603<=x1604));

    if (t182 != 2147473593U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x1613 = 224U;
	static int8_t x1614 = -1;
	int64_t x1615 = INT64_MIN;
	uint8_t x1616 = 121U;

    t183 = ((x1613-x1614)/(x1615<=x1616));

    if (t183 != 225U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x1621 = -8766678801333863LL;
	int32_t x1622 = INT32_MIN;
	int8_t x1624 = -1;

    t184 = ((x1621-x1622)/(x1623<=x1624));

    if (t184 != -8766676653850215LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x1626 = 34U;
	volatile uint32_t x1627 = 2U;
	uint8_t x1628 = UINT8_MAX;
	int32_t t185 = 53095125;

    t185 = ((x1625-x1626)/(x1627<=x1628));

    if (t185 != -367) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1633 = 2U;
	int64_t x1634 = 175741569384LL;
	int64_t x1635 = INT64_MIN;
	int64_t t186 = -208799874373467103LL;

    t186 = ((x1633-x1634)/(x1635<=x1636));

    if (t186 != -175741569382LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1653 = INT32_MIN;
	static int32_t x1654 = INT32_MIN;
	int16_t x1655 = 10579;
	volatile int64_t x1656 = 48015903LL;
	volatile int32_t t187 = -712724;

    t187 = ((x1653-x1654)/(x1655<=x1656));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x1665 = UINT16_MAX;
	uint16_t x1666 = 30U;
	volatile int16_t x1667 = INT16_MIN;
	static uint16_t x1668 = 0U;
	volatile int32_t t188 = 65;

    t188 = ((x1665-x1666)/(x1667<=x1668));

    if (t188 != 65505) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1670 = 13465U;
	volatile int8_t x1671 = INT8_MIN;
	uint8_t x1672 = 1U;
	static int32_t t189 = 297;

    t189 = ((x1669-x1670)/(x1671<=x1672));

    if (t189 != -87772843) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1686 = UINT64_MAX;
	int16_t x1687 = -1;
	uint8_t x1688 = 7U;

    t190 = ((x1685-x1686)/(x1687<=x1688));

    if (t190 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1689 = -1;
	volatile int64_t x1690 = INT64_MIN;
	volatile int32_t x1691 = INT32_MIN;
	int64_t t191 = INT64_MAX;

    t191 = ((x1689-x1690)/(x1691<=x1692));

    if (t191 != INT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1701 = 3U;
	uint32_t x1702 = 163012U;
	static int8_t x1703 = 0;
	volatile uint16_t x1704 = 0U;
	uint32_t t192 = 1081U;

    t192 = ((x1701-x1702)/(x1703<=x1704));

    if (t192 != 4294804287U) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x1710 = INT8_MAX;
	int8_t x1711 = -1;
	uint8_t x1712 = 3U;
	static int32_t t193 = 1187217;

    t193 = ((x1709-x1710)/(x1711<=x1712));

    if (t193 != -32895) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1734 = -13;
	int8_t x1735 = -1;
	volatile int8_t x1736 = INT8_MAX;
	volatile uint64_t t194 = 1095711780807777837LLU;

    t194 = ((x1733-x1734)/(x1735<=x1736));

    if (t194 != 594100LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1737 = 3581674U;
	int16_t x1738 = INT16_MIN;
	int32_t x1739 = -1;
	volatile uint32_t t195 = 8255231U;

    t195 = ((x1737-x1738)/(x1739<=x1740));

    if (t195 != 3614442U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x1746 = UINT64_MAX;
	int16_t x1747 = 1;
	int32_t x1748 = INT32_MAX;
	volatile uint64_t t196 = 7738145812903LLU;

    t196 = ((x1745-x1746)/(x1747<=x1748));

    if (t196 != 18446744073706882403LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1762 = -3315658391222LL;
	int8_t x1763 = INT8_MIN;
	int32_t x1764 = -1;

    t197 = ((x1761-x1762)/(x1763<=x1764));

    if (t197 != 4729590217888LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1765 = -11;
	static uint32_t x1767 = 2099U;
	int32_t t198 = 15;

    t198 = ((x1765-x1766)/(x1767<=x1768));

    if (t198 != 32757) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1789 = UINT8_MAX;
	int16_t x1790 = INT16_MIN;

    t199 = ((x1789-x1790)/(x1791<=x1792));

    if (t199 != 33023) { NG(); } else { ; }
	
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


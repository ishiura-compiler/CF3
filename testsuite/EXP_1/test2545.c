
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

static int64_t x125 = INT64_MIN;
static uint32_t x164 = 50U;
int32_t x250 = 649;
uint32_t x251 = 8673U;
uint16_t x360 = 40U;
uint32_t x362 = UINT32_MAX;
static int16_t x364 = 3;
static volatile int8_t x390 = INT8_MIN;
int64_t x435 = INT64_MIN;
int32_t t10 = 101354185;
uint16_t x552 = 10U;
volatile uint64_t t12 = 7336888261644539LLU;
volatile int32_t x593 = 69940184;
volatile int8_t x603 = -1;
uint8_t x621 = 2U;
int8_t x817 = INT8_MIN;
volatile int32_t t18 = -218;
static int32_t x943 = INT32_MIN;
int8_t x962 = INT8_MAX;
uint64_t x963 = 557985576LLU;
uint64_t t20 = 63425830412088912LLU;
int32_t x1141 = INT32_MIN;
int16_t x1191 = INT16_MAX;
int8_t x1269 = -1;
volatile uint32_t x1318 = 142774456U;
static uint64_t t27 = 1244613654864367LLU;
int8_t x1381 = -5;
uint32_t x1430 = 23286334U;
volatile uint32_t x1442 = 2724U;
volatile int8_t x1444 = 7;
uint64_t t30 = 13223894323LLU;
uint16_t x1448 = 2U;
int32_t x1522 = INT32_MIN;
int32_t x1563 = -1;
static volatile int32_t t34 = 0;
uint8_t x1587 = 0U;
static volatile uint64_t t37 = 504549099101LLU;
int32_t x1799 = INT32_MIN;
uint8_t x1800 = 39U;
int32_t x1909 = INT32_MIN;
int16_t x1911 = INT16_MIN;
int64_t t42 = 122340091835740865LL;
static volatile int16_t x2001 = INT16_MIN;
volatile int8_t x2004 = 1;
static uint32_t t44 = 201089U;
uint64_t t45 = 492063503685606773LLU;
volatile int8_t x2075 = 3;
uint8_t x2076 = 2U;
int32_t t47 = 0;
uint8_t x2120 = 1U;
int8_t x2484 = 0;
static volatile int16_t x2563 = -1;
int8_t x2607 = 1;
uint64_t t53 = 1865562352LLU;
uint64_t x2757 = 9896712210LLU;
uint8_t x2760 = 3U;
int8_t x2865 = 0;
int16_t x2931 = INT16_MIN;
int32_t x2972 = 10;
static uint8_t x2980 = 19U;
uint32_t x3007 = 385327U;
uint8_t x3008 = 1U;
volatile int8_t x3084 = 0;
int32_t x3089 = INT32_MIN;
int32_t x3141 = 14185;
int8_t x3142 = 0;
int32_t t68 = -1;
volatile int64_t t70 = 855626LL;
volatile uint32_t t71 = 3507U;
uint64_t x3342 = UINT64_MAX;
int8_t x3441 = INT8_MIN;
uint64_t x3442 = 458065882361553LLU;
uint64_t t75 = 4456167153175645270LLU;
uint16_t x3449 = UINT16_MAX;
static int16_t x3638 = 167;
uint64_t t79 = 6821626405LLU;
static volatile int32_t x3781 = -1;
volatile int16_t x3782 = -1;
volatile int32_t t82 = -47797;
int8_t x3879 = INT8_MIN;
int16_t x3880 = 4;
volatile uint32_t t83 = 134183U;
int64_t t86 = -13525865879874LL;
uint8_t x4220 = 7U;
int16_t x4247 = -1;
uint8_t x4248 = 0U;
static int64_t x4275 = 271421532742LL;
static uint64_t x4276 = 0LLU;
static uint64_t x4410 = 33087089LLU;
int32_t x4411 = INT32_MAX;
int8_t x4474 = 20;
uint64_t x4495 = 280967129456315LLU;
static uint8_t x4496 = 31U;
int64_t x4539 = INT64_MIN;
uint64_t t99 = 256862825846LLU;
volatile int8_t x4574 = -1;
int16_t x4680 = 2;
static volatile uint64_t x4681 = 31484LLU;
uint16_t x4684 = 1U;
static int64_t t103 = 3LL;
uint64_t x4788 = 13LLU;
uint32_t x4823 = UINT32_MAX;
int32_t x4877 = INT32_MIN;
uint64_t x4953 = 124811248822938LLU;
int64_t x4955 = 191609188901962059LL;
int64_t x4959 = -1LL;
volatile uint32_t x5013 = UINT32_MAX;
volatile uint16_t x5038 = 1U;
volatile int16_t x5045 = -1;
static uint64_t x5070 = UINT64_MAX;
static int64_t x5071 = -51LL;
uint64_t t117 = 1LLU;
volatile uint16_t x5110 = UINT16_MAX;
int32_t x5111 = -1;
uint32_t x5118 = UINT32_MAX;
uint8_t x5119 = 78U;
uint64_t x5183 = 10LLU;
int16_t x5259 = INT16_MIN;
uint32_t x5260 = 0U;
int16_t x5262 = INT16_MAX;
int32_t x5330 = -1;
int16_t x5331 = -1;
volatile int8_t x5332 = 7;
volatile int32_t t124 = -181930;
uint8_t x5356 = 8U;
uint32_t x5385 = 262094U;
int32_t x5447 = INT32_MIN;
volatile int64_t t127 = -58019579251588506LL;
int16_t x5474 = -1;
int8_t x5475 = INT8_MIN;
static int32_t t129 = -304681623;
volatile uint64_t x5637 = UINT64_MAX;
int8_t x5638 = INT8_MIN;
uint8_t x5660 = 2U;
volatile int64_t x5729 = -1LL;
static volatile uint64_t x5793 = 57298652LLU;
volatile uint64_t t133 = 2LLU;
uint8_t x5804 = 27U;
int8_t x5865 = INT8_MAX;
uint32_t x5867 = 38027101U;
uint64_t x5883 = UINT64_MAX;
static uint32_t x5968 = 19U;
volatile uint32_t x6254 = UINT32_MAX;
int8_t x6370 = INT8_MIN;
static uint8_t x6372 = 6U;
volatile int8_t x6373 = INT8_MIN;
uint32_t x6385 = UINT32_MAX;
static volatile uint32_t x6388 = 2U;
static int16_t x6422 = -409;
static uint64_t x6446 = 37LLU;
uint8_t x6448 = 17U;
static int8_t x6492 = 60;
volatile int16_t x6505 = INT16_MIN;
uint16_t x6542 = 25U;
int8_t x6544 = 16;
int8_t x6561 = 2;
uint32_t t154 = 1U;
int16_t x6579 = -7653;
volatile int32_t x6728 = 3;
int8_t x6733 = INT8_MIN;
static int64_t x6736 = 23LL;
volatile uint64_t t160 = 530199551930425LLU;
int64_t t161 = 99643915048374LL;
uint32_t x7078 = UINT32_MAX;
volatile int32_t x7102 = INT32_MIN;
int64_t x7103 = INT64_MIN;
volatile int16_t x7104 = 1;
int8_t x7137 = INT8_MIN;
int64_t t166 = -27044259099482LL;
int16_t x7145 = INT16_MIN;
uint32_t x7147 = 437554101U;
static int32_t t168 = 5;
int16_t x7218 = INT16_MAX;
uint64_t x7219 = UINT64_MAX;
uint64_t t169 = 19428112324LLU;
static volatile int16_t x7234 = INT16_MAX;
static uint64_t x7305 = 813114LLU;
static volatile int8_t x7334 = -21;
static int8_t x7405 = -1;
int8_t x7539 = INT8_MIN;
volatile int64_t t177 = -1855676LL;
uint32_t x7675 = 227U;
uint32_t t179 = 11388079U;
uint8_t x7717 = UINT8_MAX;
int32_t t180 = -4873;
static int32_t x7782 = -12992;
static uint8_t x7784 = 2U;
int16_t x7819 = -1;
static volatile uint64_t t184 = 38LLU;
uint16_t x7966 = 170U;
volatile int8_t x8084 = 13;
static volatile int64_t t187 = 11797970092704LL;
volatile int32_t x8137 = -1240385;
volatile uint64_t x8138 = 3419169LLU;
volatile uint16_t x8139 = UINT16_MAX;
static volatile int16_t x8151 = INT16_MIN;
int32_t x8226 = INT32_MAX;
int8_t x8227 = 0;
uint32_t t192 = 2604U;
uint64_t x8234 = 6322LLU;
static volatile uint64_t t193 = 80660LLU;
uint64_t x8282 = UINT64_MAX;
static volatile uint16_t x8283 = 95U;
static int64_t x8284 = 1LL;
volatile int16_t x8376 = 0;
static int64_t t198 = 6868184488167LL;
uint64_t x8553 = 69239046678LLU;


void f0(void) {
    	uint16_t x9 = 136U;
	static int8_t x10 = -1;
	static volatile int32_t x11 = INT32_MIN;
	static uint64_t x12 = 4LLU;
	static volatile int32_t t0 = 0;

    t0 = (((x9|x10)^x11)>>x12);

    if (t0 != 134217727) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x81 = INT8_MIN;
	static volatile int32_t x82 = -1;
	uint32_t x83 = 3808U;
	int32_t x84 = 0;
	static volatile uint32_t t1 = 3U;

    t1 = (((x81|x82)^x83)>>x84);

    if (t1 != 4294963487U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x126 = 831394U;
	int32_t x127 = -23;
	uint8_t x128 = 0U;
	int64_t t2 = 2764994846121897LL;

    t2 = (((x125|x126)^x127)>>x128);

    if (t2 != 9223372036853944395LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x161 = -1LL;
	int64_t x162 = INT64_MIN;
	volatile int32_t x163 = -1;
	volatile int64_t t3 = 5LL;

    t3 = (((x161|x162)^x163)>>x164);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x221 = INT8_MIN;
	uint8_t x222 = UINT8_MAX;
	int8_t x223 = -1;
	int8_t x224 = 13;
	volatile int32_t t4 = 2374;

    t4 = (((x221|x222)^x223)>>x224);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x249 = 1704790LLU;
	uint8_t x252 = 2U;
	static volatile uint64_t t5 = 840628776427096149LLU;

    t5 = (((x249|x250)^x251)>>x252);

    if (t5 != 428175LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x357 = UINT32_MAX;
	uint64_t x358 = 25LLU;
	int32_t x359 = -547;
	uint64_t t6 = 8253721718310LLU;

    t6 = (((x357|x358)^x359)>>x360);

    if (t6 != 16777215LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x361 = UINT16_MAX;
	static int16_t x363 = -1;
	volatile uint32_t t7 = 7393U;

    t7 = (((x361|x362)^x363)>>x364);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x389 = INT16_MIN;
	uint64_t x391 = 47519041580625597LLU;
	volatile uint8_t x392 = 12U;
	uint64_t t8 = 124266185192LLU;

    t8 = (((x389|x390)^x391)>>x392);

    if (t8 != 4491998298859601LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x433 = 3758LLU;
	uint64_t x434 = 39LLU;
	int8_t x436 = 0;
	uint64_t t9 = 344243LLU;

    t9 = (((x433|x434)^x435)>>x436);

    if (t9 != 9223372036854779567LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x445 = 1;
	static int8_t x446 = INT8_MIN;
	int8_t x447 = INT8_MIN;
	volatile int32_t x448 = 8;

    t10 = (((x445|x446)^x447)>>x448);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x473 = UINT8_MAX;
	int32_t x474 = INT32_MAX;
	static volatile int16_t x475 = 8;
	static uint8_t x476 = 4U;
	int32_t t11 = 83;

    t11 = (((x473|x474)^x475)>>x476);

    if (t11 != 134217727) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x549 = 12U;
	volatile int8_t x550 = -1;
	uint64_t x551 = 1877448789706728LLU;

    t12 = (((x549|x550)^x551)>>x552);

    if (t12 != 18012565063398286LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x594 = 1214610576803316675LLU;
	int32_t x595 = -1;
	int8_t x596 = 1;
	volatile uint64_t t13 = 2216316LLU;

    t13 = (((x593|x594)^x595)>>x596);

    if (t13 != 8616066748418508306LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x601 = INT32_MIN;
	volatile uint16_t x602 = 333U;
	static uint32_t x604 = 13U;
	int32_t t14 = -2;

    t14 = (((x601|x602)^x603)>>x604);

    if (t14 != 262143) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x622 = UINT16_MAX;
	static uint32_t x623 = UINT32_MAX;
	static int16_t x624 = 23;
	uint32_t t15 = 4U;

    t15 = (((x621|x622)^x623)>>x624);

    if (t15 != 511U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x689 = 876U;
	volatile uint32_t x690 = 47860959U;
	volatile int32_t x691 = 6990;
	static int16_t x692 = 0;
	volatile uint32_t t16 = 9099U;

    t16 = (((x689|x690)^x691)>>x692);

    if (t16 != 47862961U) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int8_t x713 = INT8_MIN;
	static volatile int64_t x714 = INT64_MIN;
	static volatile int32_t x715 = -1;
	int64_t x716 = 7LL;
	static volatile int64_t t17 = 190LL;

    t17 = (((x713|x714)^x715)>>x716);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x818 = -2;
	static int32_t x819 = INT32_MIN;
	uint16_t x820 = 2U;

    t18 = (((x817|x818)^x819)>>x820);

    if (t18 != 536870911) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x941 = -143298172;
	uint64_t x942 = UINT64_MAX;
	static int16_t x944 = 8;
	uint64_t t19 = 13694658LLU;

    t19 = (((x941|x942)^x943)>>x944);

    if (t19 != 8388607LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x961 = -1;
	uint32_t x964 = 1U;

    t20 = (((x961|x962)^x963)>>x964);

    if (t20 != 9223372036575783019LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x1065 = INT8_MAX;
	int32_t x1066 = -1;
	static int64_t x1067 = INT64_MIN;
	static int8_t x1068 = 7;
	int64_t t21 = -8138428746167063LL;

    t21 = (((x1065|x1066)^x1067)>>x1068);

    if (t21 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1142 = 167688442446493LLU;
	static int8_t x1143 = -1;
	volatile uint8_t x1144 = 6U;
	uint64_t t22 = 15338LLU;

    t22 = (((x1141|x1142)^x1143)>>x1144);

    if (t22 != 33018357LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x1189 = 3969176U;
	uint32_t x1190 = 369U;
	int32_t x1192 = 0;
	volatile uint32_t t23 = 6017U;

    t23 = (((x1189|x1190)^x1191)>>x1192);

    if (t23 != 3993094U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x1261 = 8U;
	static int64_t x1262 = INT64_MIN;
	int8_t x1263 = INT8_MIN;
	volatile uint32_t x1264 = 6U;
	static volatile int64_t t24 = -2799992149975245LL;

    t24 = (((x1261|x1262)^x1263)>>x1264);

    if (t24 != 144115188075855870LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x1270 = INT16_MAX;
	int64_t x1271 = -1LL;
	uint8_t x1272 = 9U;
	int64_t t25 = 57019677945255LL;

    t25 = (((x1269|x1270)^x1271)>>x1272);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x1317 = 2184;
	int16_t x1319 = INT16_MIN;
	uint8_t x1320 = 1U;
	static volatile uint32_t t26 = 430U;

    t26 = (((x1317|x1318)^x1319)>>x1320);

    if (t26 != 2076085340U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x1333 = UINT64_MAX;
	int16_t x1334 = -1;
	int64_t x1335 = INT64_MAX;
	volatile int32_t x1336 = 1;

    t27 = (((x1333|x1334)^x1335)>>x1336);

    if (t27 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x1382 = INT16_MAX;
	int32_t x1383 = INT32_MIN;
	uint8_t x1384 = 0U;
	volatile int32_t t28 = INT32_MAX;

    t28 = (((x1381|x1382)^x1383)>>x1384);

    if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x1429 = INT64_MAX;
	volatile uint64_t x1431 = 321860558508LLU;
	uint16_t x1432 = 0U;
	uint64_t t29 = 1005193LLU;

    t29 = (((x1429|x1430)^x1431)>>x1432);

    if (t29 != 9223371714994217299LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x1441 = 101013836LLU;
	uint8_t x1443 = 16U;

    t30 = (((x1441|x1442)^x1443)>>x1444);

    if (t30 != 789175LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x1445 = UINT8_MAX;
	volatile uint8_t x1446 = 26U;
	int16_t x1447 = 7;
	int32_t t31 = 114;

    t31 = (((x1445|x1446)^x1447)>>x1448);

    if (t31 != 62) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x1521 = INT16_MIN;
	int16_t x1523 = -1;
	static int8_t x1524 = 0;
	int32_t t32 = -1066;

    t32 = (((x1521|x1522)^x1523)>>x1524);

    if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x1557 = 939U;
	int8_t x1558 = INT8_MIN;
	int16_t x1559 = -6;
	uint8_t x1560 = 21U;
	volatile int32_t t33 = 407115277;

    t33 = (((x1557|x1558)^x1559)>>x1560);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x1561 = -1;
	int32_t x1562 = -1;
	static int16_t x1564 = 10;

    t34 = (((x1561|x1562)^x1563)>>x1564);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x1565 = UINT64_MAX;
	uint16_t x1566 = 10691U;
	static int16_t x1567 = -1;
	volatile uint8_t x1568 = 18U;
	volatile uint64_t t35 = 3701220410460266LLU;

    t35 = (((x1565|x1566)^x1567)>>x1568);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x1585 = UINT16_MAX;
	volatile uint8_t x1586 = UINT8_MAX;
	volatile uint8_t x1588 = 2U;
	volatile int32_t t36 = 0;

    t36 = (((x1585|x1586)^x1587)>>x1588);

    if (t36 != 16383) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x1713 = UINT64_MAX;
	volatile int8_t x1714 = INT8_MAX;
	volatile int16_t x1715 = -1;
	static volatile uint16_t x1716 = 2U;

    t37 = (((x1713|x1714)^x1715)>>x1716);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x1797 = UINT64_MAX;
	static int32_t x1798 = INT32_MAX;
	static uint64_t t38 = 90216024138LLU;

    t38 = (((x1797|x1798)^x1799)>>x1800);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x1813 = 18389223;
	int8_t x1814 = -1;
	int64_t x1815 = INT64_MIN;
	uint8_t x1816 = 58U;
	int64_t t39 = 87827157670LL;

    t39 = (((x1813|x1814)^x1815)>>x1816);

    if (t39 != 31LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x1845 = 16107874LLU;
	int16_t x1846 = INT16_MIN;
	int64_t x1847 = INT64_MIN;
	int16_t x1848 = 2;
	uint64_t t40 = 461347644437548LLU;

    t40 = (((x1845|x1846)^x1847)>>x1848);

    if (t40 != 2305843009213690456LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x1865 = 3LL;
	int8_t x1866 = 0;
	int64_t x1867 = 15746LL;
	uint16_t x1868 = 1U;
	volatile int64_t t41 = 6632012415961LL;

    t41 = (((x1865|x1866)^x1867)>>x1868);

    if (t41 != 7872LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x1910 = -1LL;
	static volatile uint8_t x1912 = 2U;

    t42 = (((x1909|x1910)^x1911)>>x1912);

    if (t42 != 8191LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x1977 = INT8_MAX;
	int8_t x1978 = INT8_MAX;
	static uint8_t x1979 = UINT8_MAX;
	static int16_t x1980 = 5;
	volatile int32_t t43 = 2;

    t43 = (((x1977|x1978)^x1979)>>x1980);

    if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x2002 = 1;
	uint32_t x2003 = 479806U;

    t44 = (((x2001|x2002)^x2003)>>x2004);

    if (t44 != 2147248415U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x2021 = 865468827554883LLU;
	uint32_t x2022 = UINT32_MAX;
	volatile uint16_t x2023 = 2225U;
	uint8_t x2024 = 1U;

    t45 = (((x2021|x2022)^x2023)>>x2024);

    if (t45 != 432735134940071LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x2073 = 110278LLU;
	volatile int32_t x2074 = INT32_MIN;
	uint64_t t46 = 553181396547886240LLU;

    t46 = (((x2073|x2074)^x2075)>>x2076);

    if (t46 != 4611686017890544561LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x2105 = -2175;
	int8_t x2106 = INT8_MAX;
	int8_t x2107 = -1;
	uint16_t x2108 = 1U;

    t47 = (((x2105|x2106)^x2107)>>x2108);

    if (t47 != 1024) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x2117 = 7608U;
	volatile int64_t x2118 = INT64_MIN;
	int8_t x2119 = -9;
	int64_t t48 = 27713377160994277LL;

    t48 = (((x2117|x2118)^x2119)>>x2120);

    if (t48 != 4611686018427384103LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x2465 = 0U;
	int64_t x2466 = INT64_MIN;
	static int16_t x2467 = -1;
	int8_t x2468 = 7;
	volatile int64_t t49 = 30121425184669LL;

    t49 = (((x2465|x2466)^x2467)>>x2468);

    if (t49 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x2481 = INT64_MAX;
	static int32_t x2482 = -1;
	int16_t x2483 = INT16_MIN;
	volatile int64_t t50 = 3939724518004846728LL;

    t50 = (((x2481|x2482)^x2483)>>x2484);

    if (t50 != 32767LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x2561 = 3720602996621LLU;
	static int16_t x2562 = 209;
	uint8_t x2564 = 57U;
	uint64_t t51 = 70091180609167626LLU;

    t51 = (((x2561|x2562)^x2563)>>x2564);

    if (t51 != 127LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x2593 = INT8_MIN;
	int32_t x2594 = 491424;
	uint32_t x2595 = 0U;
	uint8_t x2596 = 21U;
	uint32_t t52 = 126672U;

    t52 = (((x2593|x2594)^x2595)>>x2596);

    if (t52 != 2047U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x2605 = -561LL;
	uint64_t x2606 = 11503562LLU;
	static uint8_t x2608 = 1U;

    t53 = (((x2605|x2606)^x2607)>>x2608);

    if (t53 != 9223372036854775783LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x2621 = -96001976709584LL;
	volatile int8_t x2622 = INT8_MAX;
	int8_t x2623 = INT8_MIN;
	static int8_t x2624 = 17;
	int64_t t54 = 10853495LL;

    t54 = (((x2621|x2622)^x2623)>>x2624);

    if (t54 != 732436956LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x2681 = INT32_MAX;
	int16_t x2682 = INT16_MIN;
	volatile uint32_t x2683 = UINT32_MAX;
	static int8_t x2684 = 7;
	static uint32_t t55 = 60U;

    t55 = (((x2681|x2682)^x2683)>>x2684);

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x2701 = 2339065842425754427LLU;
	int32_t x2702 = INT32_MIN;
	int16_t x2703 = -1;
	static int16_t x2704 = 30;
	volatile uint64_t t56 = 5345017561LLU;

    t56 = (((x2701|x2702)^x2703)>>x2704);

    if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x2758 = -1;
	int64_t x2759 = -560421LL;
	uint64_t t57 = 2780488151LLU;

    t57 = (((x2757|x2758)^x2759)>>x2760);

    if (t57 != 70052LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x2785 = -1;
	volatile uint64_t x2786 = 57000974423LLU;
	static uint64_t x2787 = UINT64_MAX;
	int8_t x2788 = 0;
	volatile uint64_t t58 = 2141LLU;

    t58 = (((x2785|x2786)^x2787)>>x2788);

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint32_t x2866 = 17U;
	volatile int32_t x2867 = INT32_MAX;
	int32_t x2868 = 31;
	uint32_t t59 = 449834U;

    t59 = (((x2865|x2866)^x2867)>>x2868);

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x2929 = -1;
	int16_t x2930 = 2;
	static uint32_t x2932 = 7U;
	int32_t t60 = 558550;

    t60 = (((x2929|x2930)^x2931)>>x2932);

    if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x2969 = UINT8_MAX;
	uint64_t x2970 = UINT64_MAX;
	uint16_t x2971 = 0U;
	uint64_t t61 = 974586224LLU;

    t61 = (((x2969|x2970)^x2971)>>x2972);

    if (t61 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x2977 = INT32_MIN;
	int64_t x2978 = INT64_MAX;
	volatile int32_t x2979 = INT32_MIN;
	int64_t t62 = 138920LL;

    t62 = (((x2977|x2978)^x2979)>>x2980);

    if (t62 != 4095LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x3005 = -1;
	int32_t x3006 = INT32_MAX;
	volatile uint32_t t63 = 40383298U;

    t63 = (((x3005|x3006)^x3007)>>x3008);

    if (t63 != 2147290984U) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x3013 = INT64_MAX;
	int16_t x3014 = -1;
	static volatile int16_t x3015 = INT16_MIN;
	uint8_t x3016 = 1U;
	int64_t t64 = -25381014505337416LL;

    t64 = (((x3013|x3014)^x3015)>>x3016);

    if (t64 != 16383LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int8_t x3081 = INT8_MIN;
	uint16_t x3082 = 15590U;
	static int32_t x3083 = -1;
	volatile int32_t t65 = -8016561;

    t65 = (((x3081|x3082)^x3083)>>x3084);

    if (t65 != 25) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x3090 = UINT64_MAX;
	int8_t x3091 = INT8_MAX;
	volatile int64_t x3092 = 24LL;
	uint64_t t66 = 946890LLU;

    t66 = (((x3089|x3090)^x3091)>>x3092);

    if (t66 != 1099511627775LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x3113 = UINT64_MAX;
	volatile int32_t x3114 = 13032;
	int16_t x3115 = -30;
	int8_t x3116 = 5;
	static uint64_t t67 = 2119544937327LLU;

    t67 = (((x3113|x3114)^x3115)>>x3116);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x3143 = 3U;
	volatile uint16_t x3144 = 3U;

    t68 = (((x3141|x3142)^x3143)>>x3144);

    if (t68 != 1773) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x3213 = INT64_MAX;
	int32_t x3214 = 247;
	static uint64_t x3215 = 22836LLU;
	volatile int16_t x3216 = 2;
	volatile uint64_t t69 = 2555615429LLU;

    t69 = (((x3213|x3214)^x3215)>>x3216);

    if (t69 != 2305843009213688242LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x3269 = INT64_MAX;
	int64_t x3270 = 296288930527914LL;
	int64_t x3271 = 16305LL;
	volatile uint8_t x3272 = 1U;

    t70 = (((x3269|x3270)^x3271)>>x3272);

    if (t70 != 4611686018427379751LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x3273 = 492U;
	volatile int32_t x3274 = INT32_MAX;
	int32_t x3275 = INT32_MAX;
	int16_t x3276 = 2;

    t71 = (((x3273|x3274)^x3275)>>x3276);

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x3341 = UINT32_MAX;
	int32_t x3343 = INT32_MIN;
	int16_t x3344 = 4;
	volatile uint64_t t72 = 5079075671LLU;

    t72 = (((x3341|x3342)^x3343)>>x3344);

    if (t72 != 134217727LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x3353 = -1;
	int32_t x3354 = INT32_MIN;
	int32_t x3355 = -3467924;
	uint16_t x3356 = 6U;
	volatile int32_t t73 = -7;

    t73 = (((x3353|x3354)^x3355)>>x3356);

    if (t73 != 54186) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x3405 = UINT16_MAX;
	uint16_t x3406 = 14U;
	int32_t x3407 = 96599;
	uint8_t x3408 = 28U;
	volatile int32_t t74 = -31724;

    t74 = (((x3405|x3406)^x3407)>>x3408);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x3443 = 35;
	int8_t x3444 = 49;

    t75 = (((x3441|x3442)^x3443)>>x3444);

    if (t75 != 32767LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x3450 = -1;
	volatile int32_t x3451 = INT32_MIN;
	volatile uint8_t x3452 = 5U;
	volatile int32_t t76 = -1931;

    t76 = (((x3449|x3450)^x3451)>>x3452);

    if (t76 != 67108863) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x3637 = -1;
	uint64_t x3639 = 90LLU;
	uint8_t x3640 = 7U;
	uint64_t t77 = 10195772759291LLU;

    t77 = (((x3637|x3638)^x3639)>>x3640);

    if (t77 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x3653 = 23U;
	int32_t x3654 = INT32_MIN;
	uint64_t x3655 = 9570766770LLU;
	int8_t x3656 = 26;
	volatile uint64_t t78 = 928248154378LLU;

    t78 = (((x3653|x3654)^x3655)>>x3656);

    if (t78 != 174LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x3673 = 67959LLU;
	volatile int16_t x3674 = INT16_MAX;
	int64_t x3675 = INT64_MIN;
	int8_t x3676 = 0;

    t79 = (((x3673|x3674)^x3675)>>x3676);

    if (t79 != 9223372036854874111LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x3697 = INT64_MIN;
	uint8_t x3698 = UINT8_MAX;
	static int32_t x3699 = INT32_MIN;
	static uint16_t x3700 = 1U;
	int64_t t80 = -22533900LL;

    t80 = (((x3697|x3698)^x3699)>>x3700);

    if (t80 != 4611686017353646207LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x3783 = 24247330U;
	static uint8_t x3784 = 8U;
	uint32_t t81 = 7174U;

    t81 = (((x3781|x3782)^x3783)>>x3784);

    if (t81 != 16682499U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x3849 = -1;
	volatile int16_t x3850 = INT16_MIN;
	static int32_t x3851 = INT32_MIN;
	static uint32_t x3852 = 6U;

    t82 = (((x3849|x3850)^x3851)>>x3852);

    if (t82 != 33554431) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x3877 = 118U;
	uint8_t x3878 = 22U;

    t83 = (((x3877|x3878)^x3879)>>x3880);

    if (t83 != 268435455U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x3897 = -1;
	int16_t x3898 = 1;
	uint64_t x3899 = 474953745430298345LLU;
	static uint8_t x3900 = 24U;
	volatile uint64_t t84 = 353LLU;

    t84 = (((x3897|x3898)^x3899)>>x3900);

    if (t84 != 1071202178494LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x3905 = UINT64_MAX;
	int64_t x3906 = INT64_MIN;
	uint16_t x3907 = 1693U;
	static uint8_t x3908 = 22U;
	static volatile uint64_t t85 = 908865LLU;

    t85 = (((x3905|x3906)^x3907)>>x3908);

    if (t85 != 4398046511103LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x3941 = INT64_MIN;
	volatile int8_t x3942 = -44;
	int16_t x3943 = INT16_MIN;
	static int16_t x3944 = 14;

    t86 = (((x3941|x3942)^x3943)>>x3944);

    if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x4013 = 1782LLU;
	int64_t x4014 = -814LL;
	static int16_t x4015 = INT16_MIN;
	uint8_t x4016 = 5U;
	static uint64_t t87 = 5696055LLU;

    t87 = (((x4013|x4014)^x4015)>>x4016);

    if (t87 != 1015LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x4133 = 76383789007215LLU;
	uint64_t x4134 = 3675426279LLU;
	int32_t x4135 = INT32_MAX;
	uint16_t x4136 = 19U;
	uint64_t t88 = 2139890170244LLU;

    t88 = (((x4133|x4134)^x4135)>>x4136);

    if (t88 != 145690636LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x4217 = -4487369466182LL;
	static int32_t x4218 = 17;
	int16_t x4219 = INT16_MIN;
	volatile int64_t t89 = 11785LL;

    t89 = (((x4217|x4218)^x4219)>>x4220);

    if (t89 != 35057574077LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x4245 = -1;
	int8_t x4246 = INT8_MIN;
	volatile int32_t t90 = -13740;

    t90 = (((x4245|x4246)^x4247)>>x4248);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x4273 = 0;
	int8_t x4274 = 3;
	int64_t t91 = 0LL;

    t91 = (((x4273|x4274)^x4275)>>x4276);

    if (t91 != 271421532741LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x4365 = UINT8_MAX;
	static int16_t x4366 = -1;
	static int8_t x4367 = -1;
	uint16_t x4368 = 14U;
	int32_t t92 = 1;

    t92 = (((x4365|x4366)^x4367)>>x4368);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x4385 = -1LL;
	int64_t x4386 = INT64_MAX;
	int32_t x4387 = INT32_MIN;
	uint64_t x4388 = 2LLU;
	int64_t t93 = -13078193196882567LL;

    t93 = (((x4385|x4386)^x4387)>>x4388);

    if (t93 != 536870911LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int16_t x4389 = INT16_MAX;
	int32_t x4390 = INT32_MIN;
	int32_t x4391 = INT32_MIN;
	uint16_t x4392 = 6U;
	int32_t t94 = -1482;

    t94 = (((x4389|x4390)^x4391)>>x4392);

    if (t94 != 511) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x4409 = INT32_MAX;
	uint8_t x4412 = 20U;
	static volatile uint64_t t95 = 4739383352479696LLU;

    t95 = (((x4409|x4410)^x4411)>>x4412);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint32_t x4473 = 45U;
	uint8_t x4475 = 9U;
	uint16_t x4476 = 3U;
	volatile uint32_t t96 = 14253812U;

    t96 = (((x4473|x4474)^x4475)>>x4476);

    if (t96 != 6U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x4493 = INT16_MIN;
	int16_t x4494 = -5;
	volatile uint64_t t97 = 169LLU;

    t97 = (((x4493|x4494)^x4495)>>x4496);

    if (t97 != 8589803756LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x4537 = -1;
	static int8_t x4538 = INT8_MAX;
	int32_t x4540 = 55;
	int64_t t98 = 1LL;

    t98 = (((x4537|x4538)^x4539)>>x4540);

    if (t98 != 255LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x4549 = UINT64_MAX;
	int32_t x4550 = -57073974;
	int16_t x4551 = INT16_MIN;
	static uint32_t x4552 = 57U;

    t99 = (((x4549|x4550)^x4551)>>x4552);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x4573 = 1603316040U;
	uint8_t x4575 = 15U;
	volatile uint8_t x4576 = 17U;
	volatile uint32_t t100 = 10U;

    t100 = (((x4573|x4574)^x4575)>>x4576);

    if (t100 != 32767U) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x4677 = UINT64_MAX;
	static volatile int16_t x4678 = INT16_MIN;
	volatile int32_t x4679 = INT32_MIN;
	volatile uint64_t t101 = 34803513LLU;

    t101 = (((x4677|x4678)^x4679)>>x4680);

    if (t101 != 536870911LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x4682 = INT16_MAX;
	int32_t x4683 = INT32_MAX;
	volatile uint64_t t102 = 2LLU;

    t102 = (((x4681|x4682)^x4683)>>x4684);

    if (t102 != 1073725440LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x4717 = -1LL;
	uint16_t x4718 = 5U;
	int8_t x4719 = INT8_MIN;
	uint8_t x4720 = 12U;

    t103 = (((x4717|x4718)^x4719)>>x4720);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x4769 = INT32_MIN;
	uint32_t x4770 = UINT32_MAX;
	uint8_t x4771 = UINT8_MAX;
	uint8_t x4772 = 16U;
	uint32_t t104 = 1949U;

    t104 = (((x4769|x4770)^x4771)>>x4772);

    if (t104 != 65535U) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint32_t x4773 = 20514446U;
	int32_t x4774 = INT32_MIN;
	uint64_t x4775 = 468595LLU;
	static uint8_t x4776 = 7U;
	uint64_t t105 = 46434506LLU;

    t105 = (((x4773|x4774)^x4775)>>x4776);

    if (t105 != 16940097LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x4785 = 0;
	uint8_t x4786 = UINT8_MAX;
	uint32_t x4787 = 46U;
	volatile uint32_t t106 = 228673574U;

    t106 = (((x4785|x4786)^x4787)>>x4788);

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x4821 = INT32_MIN;
	int32_t x4822 = -842512497;
	uint8_t x4824 = 11U;
	uint32_t t107 = 19579220U;

    t107 = (((x4821|x4822)^x4823)>>x4824);

    if (t107 != 411383U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x4857 = 1U;
	int32_t x4858 = INT32_MIN;
	int16_t x4859 = INT16_MIN;
	static volatile int16_t x4860 = 20;
	volatile int32_t t108 = -1;

    t108 = (((x4857|x4858)^x4859)>>x4860);

    if (t108 != 2047) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x4869 = -1;
	static volatile int64_t x4870 = INT64_MAX;
	int16_t x4871 = -26;
	uint32_t x4872 = 1U;
	int64_t t109 = 284144146662941727LL;

    t109 = (((x4869|x4870)^x4871)>>x4872);

    if (t109 != 12LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x4873 = 13462476380LL;
	uint64_t x4874 = 91246448LLU;
	volatile uint64_t x4875 = UINT64_MAX;
	volatile uint8_t x4876 = 15U;
	uint64_t t110 = 830271054LLU;

    t110 = (((x4873|x4874)^x4875)>>x4876);

    if (t110 != 562949953007877LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x4878 = 1789977011LLU;
	int32_t x4879 = -9897;
	int8_t x4880 = 4;
	volatile uint64_t t111 = 17875580817288381LLU;

    t111 = (((x4877|x4878)^x4879)>>x4880);

    if (t111 != 22344590LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x4954 = -48;
	static int32_t x4956 = 21;
	volatile uint64_t t112 = 3714961428035LLU;

    t112 = (((x4953|x4954)^x4955)>>x4956);

    if (t112 != 8704726641086LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x4957 = -1LL;
	int64_t x4958 = INT64_MIN;
	static volatile uint8_t x4960 = 11U;
	volatile int64_t t113 = -79716569904537978LL;

    t113 = (((x4957|x4958)^x4959)>>x4960);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x5014 = INT8_MIN;
	int16_t x5015 = INT16_MAX;
	static int8_t x5016 = 20;
	uint32_t t114 = 841000187U;

    t114 = (((x5013|x5014)^x5015)>>x5016);

    if (t114 != 4095U) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x5037 = INT16_MIN;
	volatile uint64_t x5039 = 138922232446090LLU;
	static int8_t x5040 = 28;
	uint64_t t115 = 15469400123430157LLU;

    t115 = (((x5037|x5038)^x5039)>>x5040);

    if (t115 != 68718959210LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x5046 = INT8_MIN;
	volatile int64_t x5047 = INT64_MIN;
	int8_t x5048 = 21;
	static int64_t t116 = -65876255817345086LL;

    t116 = (((x5045|x5046)^x5047)>>x5048);

    if (t116 != 4398046511103LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x5069 = -2924;
	uint8_t x5072 = 25U;

    t117 = (((x5069|x5070)^x5071)>>x5072);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x5105 = -1LL;
	volatile int8_t x5106 = -4;
	static uint64_t x5107 = 378LLU;
	uint16_t x5108 = 53U;
	volatile uint64_t t118 = 106750995LLU;

    t118 = (((x5105|x5106)^x5107)>>x5108);

    if (t118 != 2047LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x5109 = -1;
	int16_t x5112 = 14;
	int32_t t119 = -1;

    t119 = (((x5109|x5110)^x5111)>>x5112);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x5117 = 36507580LLU;
	uint32_t x5120 = 15U;
	uint64_t t120 = 51014286428441976LLU;

    t120 = (((x5117|x5118)^x5119)>>x5120);

    if (t120 != 131071LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x5181 = INT64_MIN;
	static volatile uint32_t x5182 = 43U;
	uint16_t x5184 = 50U;
	uint64_t t121 = 1921095500LLU;

    t121 = (((x5181|x5182)^x5183)>>x5184);

    if (t121 != 8192LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x5257 = INT64_MIN;
	int8_t x5258 = INT8_MAX;
	static int64_t t122 = 606711LL;

    t122 = (((x5257|x5258)^x5259)>>x5260);

    if (t122 != 9223372036854743167LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x5261 = INT16_MIN;
	volatile int32_t x5263 = -1;
	uint16_t x5264 = 2U;
	volatile int32_t t123 = -8357;

    t123 = (((x5261|x5262)^x5263)>>x5264);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x5329 = 654567;

    t124 = (((x5329|x5330)^x5331)>>x5332);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x5353 = INT16_MAX;
	int64_t x5354 = INT64_MIN;
	volatile int32_t x5355 = INT32_MIN;
	int64_t t125 = 21392408LL;

    t125 = (((x5353|x5354)^x5355)>>x5356);

    if (t125 != 36028797010575487LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint8_t x5386 = 108U;
	static int32_t x5387 = -129535294;
	uint8_t x5388 = 26U;
	volatile uint32_t t126 = 174020925U;

    t126 = (((x5385|x5386)^x5387)>>x5388);

    if (t126 != 62U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x5445 = INT16_MAX;
	int64_t x5446 = INT64_MIN;
	volatile int8_t x5448 = 0;

    t127 = (((x5445|x5446)^x5447)>>x5448);

    if (t127 != 9223372034707324927LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x5465 = 81265138495345612LLU;
	volatile int16_t x5466 = INT16_MIN;
	uint64_t x5467 = 25070820LLU;
	static uint32_t x5468 = 45U;
	volatile uint64_t t128 = 11948794LLU;

    t128 = (((x5465|x5466)^x5467)>>x5468);

    if (t128 != 524287LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x5473 = 7;
	static uint8_t x5476 = 1U;

    t129 = (((x5473|x5474)^x5475)>>x5476);

    if (t129 != 63) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x5639 = INT32_MIN;
	static int8_t x5640 = 48;
	volatile uint64_t t130 = 14413LLU;

    t130 = (((x5637|x5638)^x5639)>>x5640);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x5657 = UINT8_MAX;
	static int32_t x5658 = -1;
	uint32_t x5659 = 52967U;
	uint32_t t131 = 22U;

    t131 = (((x5657|x5658)^x5659)>>x5660);

    if (t131 != 1073728582U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x5730 = 752;
	int8_t x5731 = -1;
	int32_t x5732 = 0;
	volatile int64_t t132 = -41495944734746377LL;

    t132 = (((x5729|x5730)^x5731)>>x5732);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x5794 = 2927801624521254LLU;
	uint16_t x5795 = 5U;
	int8_t x5796 = 3;

    t133 = (((x5793|x5794)^x5795)>>x5796);

    if (t133 != 365975203343839LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x5801 = INT8_MAX;
	static int8_t x5802 = -1;
	static int64_t x5803 = INT64_MIN;
	static volatile int64_t t134 = 114111831LL;

    t134 = (((x5801|x5802)^x5803)>>x5804);

    if (t134 != 68719476735LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x5866 = 6055895584LLU;
	uint8_t x5868 = 13U;
	static uint64_t t135 = 115981836LLU;

    t135 = (((x5865|x5866)^x5867)>>x5868);

    if (t135 != 742796LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x5881 = 55U;
	int64_t x5882 = -2641446837817LL;
	static int8_t x5884 = 5;
	volatile uint64_t t136 = 6226855LLU;

    t136 = (((x5881|x5882)^x5883)>>x5884);

    if (t136 != 82545213680LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int16_t x5929 = -624;
	int64_t x5930 = INT64_MIN;
	int64_t x5931 = INT64_MIN;
	static uint8_t x5932 = 14U;
	volatile int64_t t137 = -8377186294LL;

    t137 = (((x5929|x5930)^x5931)>>x5932);

    if (t137 != 562949953421311LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x5965 = UINT16_MAX;
	uint32_t x5966 = 4U;
	volatile int16_t x5967 = INT16_MAX;
	static volatile uint32_t t138 = 158609U;

    t138 = (((x5965|x5966)^x5967)>>x5968);

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x6081 = 22125U;
	uint64_t x6082 = UINT64_MAX;
	uint64_t x6083 = 270335081052LLU;
	int8_t x6084 = 7;
	static uint64_t t139 = 8002689371LLU;

    t139 = (((x6081|x6082)^x6083)>>x6084);

    if (t139 != 144115185963863051LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x6157 = -388642438;
	int8_t x6158 = -1;
	static int32_t x6159 = -1;
	uint16_t x6160 = 11U;
	int32_t t140 = -606874018;

    t140 = (((x6157|x6158)^x6159)>>x6160);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x6185 = UINT16_MAX;
	volatile int64_t x6186 = 101609205LL;
	int32_t x6187 = INT32_MAX;
	static int16_t x6188 = 1;
	volatile int64_t t141 = -17353904310LL;

    t141 = (((x6185|x6186)^x6187)>>x6188);

    if (t141 != 1022918656LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x6241 = UINT16_MAX;
	int32_t x6242 = INT32_MIN;
	int32_t x6243 = -1;
	uint8_t x6244 = 2U;
	int32_t t142 = 1401536;

    t142 = (((x6241|x6242)^x6243)>>x6244);

    if (t142 != 536854528) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x6253 = INT32_MIN;
	volatile uint8_t x6255 = 1U;
	uint16_t x6256 = 0U;
	uint32_t t143 = 0U;

    t143 = (((x6253|x6254)^x6255)>>x6256);

    if (t143 != 4294967294U) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int8_t x6369 = INT8_MIN;
	uint64_t x6371 = UINT64_MAX;
	uint64_t t144 = 249635262501LLU;

    t144 = (((x6369|x6370)^x6371)>>x6372);

    if (t144 != 1LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x6374 = -3;
	uint64_t x6375 = UINT64_MAX;
	uint64_t x6376 = 17LLU;
	uint64_t t145 = 2680201113978LLU;

    t145 = (((x6373|x6374)^x6375)>>x6376);

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x6386 = INT32_MIN;
	int8_t x6387 = INT8_MIN;
	uint32_t t146 = 5307U;

    t146 = (((x6385|x6386)^x6387)>>x6388);

    if (t146 != 31U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x6421 = INT8_MAX;
	static uint64_t x6423 = UINT64_MAX;
	static uint8_t x6424 = 9U;
	volatile uint64_t t147 = 116903013LLU;

    t147 = (((x6421|x6422)^x6423)>>x6424);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x6445 = -1;
	static int32_t x6447 = -1;
	volatile uint64_t t148 = 2940040223459543LLU;

    t148 = (((x6445|x6446)^x6447)>>x6448);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x6489 = -1LL;
	uint64_t x6490 = 220812LLU;
	volatile int32_t x6491 = 1765;
	static uint64_t t149 = 191549LLU;

    t149 = (((x6489|x6490)^x6491)>>x6492);

    if (t149 != 15LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int32_t x6506 = -4787437;
	static int8_t x6507 = INT8_MIN;
	uint16_t x6508 = 3U;
	int32_t t150 = -3246473;

    t150 = (((x6505|x6506)^x6507)>>x6508);

    if (t150 != 402) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x6513 = 2U;
	int16_t x6514 = -7;
	int32_t x6515 = INT32_MIN;
	int8_t x6516 = 1;
	volatile uint32_t t151 = 2361858U;

    t151 = (((x6513|x6514)^x6515)>>x6516);

    if (t151 != 1073741821U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x6525 = 432676U;
	int64_t x6526 = -1LL;
	static uint64_t x6527 = UINT64_MAX;
	int8_t x6528 = 3;
	volatile uint64_t t152 = 1455348LLU;

    t152 = (((x6525|x6526)^x6527)>>x6528);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x6541 = INT64_MAX;
	uint16_t x6543 = 7461U;
	volatile int64_t t153 = -6823710LL;

    t153 = (((x6541|x6542)^x6543)>>x6544);

    if (t153 != 140737488355327LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x6562 = 1482085198U;
	static int8_t x6563 = INT8_MIN;
	uint32_t x6564 = 1U;

    t154 = (((x6561|x6562)^x6563)>>x6564);

    if (t154 != 1406441063U) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x6577 = INT64_MIN;
	static uint16_t x6578 = 2U;
	volatile uint16_t x6580 = 0U;
	volatile int64_t t155 = -103888LL;

    t155 = (((x6577|x6578)^x6579)>>x6580);

    if (t155 != 9223372036854768153LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x6681 = INT64_MAX;
	uint32_t x6682 = 446U;
	int32_t x6683 = INT32_MAX;
	int64_t x6684 = 1LL;
	int64_t t156 = 3426591609LL;

    t156 = (((x6681|x6682)^x6683)>>x6684);

    if (t156 != 4611686017353646080LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x6697 = INT16_MAX;
	int8_t x6698 = INT8_MAX;
	int64_t x6699 = 16934LL;
	static int8_t x6700 = 15;
	int64_t t157 = 1557252313011572092LL;

    t157 = (((x6697|x6698)^x6699)>>x6700);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x6725 = -3;
	volatile int8_t x6726 = INT8_MAX;
	volatile int32_t x6727 = INT32_MIN;
	volatile int32_t t158 = -483501;

    t158 = (((x6725|x6726)^x6727)>>x6728);

    if (t158 != 268435455) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x6734 = INT64_MIN;
	uint64_t x6735 = UINT64_MAX;
	uint64_t t159 = 1811LLU;

    t159 = (((x6733|x6734)^x6735)>>x6736);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x6781 = UINT32_MAX;
	volatile uint64_t x6782 = UINT64_MAX;
	int32_t x6783 = INT32_MIN;
	uint16_t x6784 = 0U;

    t160 = (((x6781|x6782)^x6783)>>x6784);

    if (t160 != 2147483647LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x6797 = -3005;
	int64_t x6798 = 379949LL;
	volatile int64_t x6799 = INT64_MIN;
	volatile uint64_t x6800 = 0LLU;

    t161 = (((x6797|x6798)^x6799)>>x6800);

    if (t161 != 9223372036854774895LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x6837 = -6142725268379LL;
	static uint64_t x6838 = 10LLU;
	uint8_t x6839 = 3U;
	uint16_t x6840 = 49U;
	static volatile uint64_t t162 = 30283903440333213LLU;

    t162 = (((x6837|x6838)^x6839)>>x6840);

    if (t162 != 32767LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x6901 = INT8_MAX;
	int32_t x6902 = INT32_MAX;
	int64_t x6903 = 6906LL;
	int16_t x6904 = 49;
	static volatile int64_t t163 = -250458768158LL;

    t163 = (((x6901|x6902)^x6903)>>x6904);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x7077 = UINT8_MAX;
	static uint64_t x7079 = UINT64_MAX;
	uint8_t x7080 = 25U;
	volatile uint64_t t164 = 322847813558408LLU;

    t164 = (((x7077|x7078)^x7079)>>x7080);

    if (t164 != 549755813760LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x7101 = 6U;
	int64_t t165 = 5522616738LL;

    t165 = (((x7101|x7102)^x7103)>>x7104);

    if (t165 != 4611686017353646083LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x7138 = 27972U;
	int64_t x7139 = INT64_MIN;
	uint8_t x7140 = 2U;

    t166 = (((x7137|x7138)^x7139)>>x7140);

    if (t166 != 2305843009213693937LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x7146 = -2915;
	uint8_t x7148 = 2U;
	volatile uint32_t t167 = 2U;

    t167 = (((x7145|x7146)^x7147)>>x7148);

    if (t167 != 964353994U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x7193 = INT32_MIN;
	int8_t x7194 = -1;
	volatile int16_t x7195 = INT16_MIN;
	static uint32_t x7196 = 18U;

    t168 = (((x7193|x7194)^x7195)>>x7196);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x7217 = 3287;
	int8_t x7220 = 9;

    t169 = (((x7217|x7218)^x7219)>>x7220);

    if (t169 != 36028797018963904LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x7233 = INT64_MIN;
	int8_t x7235 = -1;
	uint8_t x7236 = 3U;
	int64_t t170 = -1303259239321327LL;

    t170 = (((x7233|x7234)^x7235)>>x7236);

    if (t170 != 1152921504606842880LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int64_t x7277 = -38383393300958LL;
	uint8_t x7278 = 1U;
	int16_t x7279 = INT16_MIN;
	uint8_t x7280 = 0U;
	static volatile int64_t t171 = 801090602LL;

    t171 = (((x7277|x7278)^x7279)>>x7280);

    if (t171 != 38383393283619LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x7306 = INT8_MIN;
	static volatile int64_t x7307 = 142462398LL;
	uint8_t x7308 = 14U;
	volatile uint64_t t172 = 16LLU;

    t172 = (((x7305|x7306)^x7307)>>x7308);

    if (t172 != 1125899906833928LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x7333 = -247687;
	int32_t x7335 = INT32_MIN;
	static volatile uint32_t x7336 = 0U;
	volatile int32_t t173 = 66615445;

    t173 = (((x7333|x7334)^x7335)>>x7336);

    if (t173 != 2147483643) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x7406 = 11583342002967799LLU;
	int32_t x7407 = -1;
	int16_t x7408 = 2;
	volatile uint64_t t174 = 517541LLU;

    t174 = (((x7405|x7406)^x7407)>>x7408);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int64_t x7445 = 6831LL;
	volatile int64_t x7446 = INT64_MAX;
	volatile uint8_t x7447 = UINT8_MAX;
	int32_t x7448 = 55;
	static volatile int64_t t175 = 120025626133LL;

    t175 = (((x7445|x7446)^x7447)>>x7448);

    if (t175 != 255LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x7537 = 17048261536329LLU;
	volatile uint64_t x7538 = 21008LLU;
	volatile int32_t x7540 = 1;
	volatile uint64_t t176 = 25589784419041016LLU;

    t176 = (((x7537|x7538)^x7539)>>x7540);

    if (t176 != 9223363512723997420LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x7585 = INT64_MIN;
	uint8_t x7586 = UINT8_MAX;
	int32_t x7587 = -3;
	uint32_t x7588 = 1U;

    t177 = (((x7585|x7586)^x7587)>>x7588);

    if (t177 != 4611686018427387777LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x7593 = INT64_MAX;
	int16_t x7594 = 17;
	static int16_t x7595 = 829;
	static uint8_t x7596 = 1U;
	int64_t t178 = 141023321647229714LL;

    t178 = (((x7593|x7594)^x7595)>>x7596);

    if (t178 != 4611686018427387489LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x7673 = -1;
	volatile uint16_t x7674 = 2044U;
	int8_t x7676 = 24;

    t179 = (((x7673|x7674)^x7675)>>x7676);

    if (t179 != 255U) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x7718 = -14;
	volatile int32_t x7719 = -347185;
	static int16_t x7720 = 6;

    t180 = (((x7717|x7718)^x7719)>>x7720);

    if (t180 != 5424) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x7781 = -1;
	volatile int8_t x7783 = -8;
	static int32_t t181 = 12;

    t181 = (((x7781|x7782)^x7783)>>x7784);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x7817 = INT32_MIN;
	volatile int32_t x7818 = INT32_MIN;
	static volatile uint8_t x7820 = 2U;
	int32_t t182 = -17;

    t182 = (((x7817|x7818)^x7819)>>x7820);

    if (t182 != 536870911) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x7949 = UINT32_MAX;
	int64_t x7950 = INT64_MIN;
	volatile int16_t x7951 = INT16_MIN;
	static volatile int16_t x7952 = 39;
	volatile int64_t t183 = -3559005386LL;

    t183 = (((x7949|x7950)^x7951)>>x7952);

    if (t183 != 16777215LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x7961 = -1LL;
	uint64_t x7962 = 60LLU;
	int16_t x7963 = INT16_MIN;
	uint8_t x7964 = 10U;

    t184 = (((x7961|x7962)^x7963)>>x7964);

    if (t184 != 31LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x7965 = 215U;
	volatile uint16_t x7967 = 88U;
	volatile uint8_t x7968 = 6U;
	uint32_t t185 = 11306U;

    t185 = (((x7965|x7966)^x7967)>>x7968);

    if (t185 != 2U) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x8069 = -5;
	int16_t x8070 = 557;
	int8_t x8071 = INT8_MIN;
	uint16_t x8072 = 0U;
	int32_t t186 = 85349212;

    t186 = (((x8069|x8070)^x8071)>>x8072);

    if (t186 != 127) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x8081 = 4066326220750LL;
	int32_t x8082 = INT32_MIN;
	int16_t x8083 = -7;

    t187 = (((x8081|x8082)^x8083)>>x8084);

    if (t187 != 123023LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x8121 = 11945303LLU;
	int32_t x8122 = -2258;
	int16_t x8123 = -1;
	volatile int64_t x8124 = 0LL;
	uint64_t t188 = 2006867LLU;

    t188 = (((x8121|x8122)^x8123)>>x8124);

    if (t188 != 2176LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x8140 = 1U;
	uint64_t t189 = 1228830526109996LLU;

    t189 = (((x8137|x8138)^x8139)>>x8140);

    if (t189 != 9223372036854702240LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x8149 = INT32_MIN;
	int8_t x8150 = INT8_MIN;
	volatile uint16_t x8152 = 15U;
	static int32_t t190 = 857384;

    t190 = (((x8149|x8150)^x8151)>>x8152);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x8181 = UINT16_MAX;
	int16_t x8182 = INT16_MIN;
	static volatile int64_t x8183 = -2098690626532573421LL;
	int16_t x8184 = 3;
	int64_t t191 = -3841103LL;

    t191 = (((x8181|x8182)^x8183)>>x8184);

    if (t191 != 262336328316571677LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x8225 = 20746U;
	int16_t x8228 = 1;

    t192 = (((x8225|x8226)^x8227)>>x8228);

    if (t192 != 1073741823U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x8233 = -62;
	int16_t x8235 = INT16_MAX;
	uint16_t x8236 = 7U;

    t193 = (((x8233|x8234)^x8235)>>x8236);

    if (t193 != 144115188075855616LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x8265 = INT16_MIN;
	static volatile uint32_t x8266 = 111U;
	volatile int8_t x8267 = INT8_MAX;
	uint64_t x8268 = 26LLU;
	static uint32_t t194 = 63U;

    t194 = (((x8265|x8266)^x8267)>>x8268);

    if (t194 != 63U) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x8281 = INT16_MIN;
	volatile uint64_t t195 = 12742385LLU;

    t195 = (((x8281|x8282)^x8283)>>x8284);

    if (t195 != 9223372036854775760LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x8373 = -9;
	int16_t x8374 = INT16_MIN;
	int8_t x8375 = -1;
	static volatile int32_t t196 = 17686444;

    t196 = (((x8373|x8374)^x8375)>>x8376);

    if (t196 != 8) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x8401 = 7203;
	static int16_t x8402 = 335;
	uint64_t x8403 = 5040LLU;
	uint16_t x8404 = 0U;
	static volatile uint64_t t197 = 2289958344853856518LLU;

    t197 = (((x8401|x8402)^x8403)>>x8404);

    if (t197 != 3807LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x8461 = 2797U;
	int16_t x8462 = INT16_MAX;
	int64_t x8463 = INT64_MAX;
	int8_t x8464 = 15;

    t198 = (((x8461|x8462)^x8463)>>x8464);

    if (t198 != 281474976710655LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x8554 = INT32_MAX;
	volatile int8_t x8555 = INT8_MIN;
	static uint8_t x8556 = 1U;
	uint64_t t199 = 52703694544LLU;

    t199 = (((x8553|x8554)^x8555)>>x8556);

    if (t199 != 9223372001421295679LLU) { NG(); } else { ; }
	
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



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

int64_t x13 = INT64_MAX;
volatile int32_t x14 = -1;
int64_t x18 = INT64_MIN;
volatile int32_t t1 = -10;
int16_t x77 = -1;
volatile int32_t t2 = 22;
int32_t x95 = INT32_MIN;
volatile int32_t t4 = 185;
uint64_t x135 = 773981LLU;
volatile uint8_t x151 = UINT8_MAX;
int32_t x182 = -1;
uint64_t x286 = 1527647031491LLU;
int32_t t10 = -42369;
static int8_t x417 = 4;
static int16_t x482 = INT16_MIN;
int32_t t14 = 851;
static volatile int32_t t15 = 384373;
int32_t t17 = 12;
int32_t t18 = 14279317;
int32_t x701 = -1;
static volatile int32_t t19 = 204097;
int64_t x707 = INT64_MIN;
int16_t x739 = -1;
int32_t x809 = 1;
int32_t x813 = INT32_MIN;
int16_t x815 = INT16_MIN;
uint32_t x869 = UINT32_MAX;
int16_t x872 = 0;
int32_t t24 = 1;
int8_t x1070 = INT8_MIN;
int32_t t29 = -64303;
int8_t x1077 = INT8_MAX;
static int8_t x1079 = INT8_MAX;
uint64_t x1120 = 0LLU;
static int8_t x1155 = INT8_MIN;
int8_t x1211 = 19;
static int16_t x1250 = INT16_MIN;
volatile int8_t x1346 = INT8_MIN;
volatile int32_t x1425 = INT32_MIN;
static int32_t x1459 = -1;
int32_t t41 = -330980;
uint64_t x1558 = 4LLU;
static int8_t x1560 = 0;
uint16_t x1602 = UINT16_MAX;
int8_t x1616 = 4;
uint32_t x1634 = UINT32_MAX;
static volatile int32_t t46 = 1;
volatile uint8_t x1675 = 3U;
volatile int32_t t47 = 538;
uint32_t x1693 = 32843832U;
static int32_t x1695 = 0;
int32_t t49 = -214797;
uint16_t x1768 = 6U;
static int32_t x1801 = 74004;
volatile uint32_t x1814 = UINT32_MAX;
int32_t t55 = 7;
uint64_t x1882 = UINT64_MAX;
uint32_t x1883 = 0U;
static volatile int32_t t56 = 117;
uint64_t x1943 = 2959LLU;
int64_t x1978 = INT64_MAX;
uint16_t x1979 = UINT16_MAX;
uint32_t x1982 = UINT32_MAX;
uint64_t x2083 = 1493219681763816549LLU;
int32_t t62 = 53486;
int64_t x2178 = INT64_MIN;
int16_t x2291 = INT16_MAX;
volatile int32_t t67 = 42284;
uint8_t x2337 = 46U;
uint8_t x2339 = 2U;
uint8_t x2353 = 12U;
static int64_t x2358 = INT64_MIN;
uint32_t x2385 = 1012739125U;
uint16_t x2388 = 2U;
int32_t x2514 = -1;
volatile uint8_t x2515 = 27U;
uint8_t x2516 = 7U;
static int32_t t75 = 1;
volatile uint8_t x2563 = 38U;
uint16_t x2564 = 17U;
int8_t x2599 = INT8_MIN;
int8_t x2608 = 10;
int32_t t79 = -13;
static int32_t t80 = -785;
int64_t x2722 = INT64_MIN;
uint8_t x2723 = UINT8_MAX;
int8_t x2749 = -1;
uint32_t x2752 = 1U;
int8_t x2834 = 2;
uint32_t x2859 = 1061U;
int8_t x2957 = 7;
uint8_t x2958 = UINT8_MAX;
static int64_t x2966 = -3LL;
int32_t t93 = -1145488;
int32_t t94 = 1;
int32_t x3054 = -9247;
static uint8_t x3123 = 0U;
uint64_t x3144 = 21LLU;
int16_t x3222 = 0;
static uint8_t x3224 = 4U;
int32_t t105 = 229;
int8_t x3234 = INT8_MAX;
static int32_t t107 = 18783;
static uint8_t x3268 = 3U;
uint8_t x3327 = UINT8_MAX;
uint32_t x3382 = UINT32_MAX;
static int8_t x3384 = 2;
int32_t x3405 = 566071551;
int16_t x3407 = INT16_MAX;
static int8_t x3421 = INT8_MAX;
int64_t x3423 = 1023168LL;
static int32_t x3445 = INT32_MIN;
int64_t x3447 = INT64_MIN;
static int32_t t115 = -15;
int32_t x3662 = INT32_MAX;
uint8_t x3664 = 3U;
uint64_t x3746 = UINT64_MAX;
uint8_t x3747 = UINT8_MAX;
int32_t t119 = 25778;
int16_t x3774 = INT16_MIN;
volatile int32_t x3822 = INT32_MIN;
volatile int32_t t121 = 231800;
volatile int32_t x3854 = -1;
volatile int64_t x3885 = 32006933LL;
volatile int32_t t124 = -7485;
int32_t x3995 = 76295746;
int32_t x4011 = INT32_MIN;
int32_t x4046 = -1;
uint64_t x4073 = 283391841LLU;
volatile uint32_t x4103 = 577859U;
int32_t t136 = 957568576;
static int32_t t137 = -105811806;
volatile int64_t x4219 = 6715LL;
volatile int32_t t139 = -53429295;
volatile uint8_t x4225 = 12U;
volatile int32_t t140 = -283508383;
int8_t x4246 = 7;
int32_t x4247 = INT32_MIN;
static volatile int32_t t141 = -121;
int16_t x4289 = 2;
volatile uint16_t x4357 = 3U;
int32_t x4490 = -1;
volatile int32_t t150 = -100167;
uint16_t x4524 = 1U;
uint16_t x4540 = 9U;
volatile int32_t t154 = 10;
int32_t x4735 = INT32_MIN;
int32_t x4767 = -1;
uint16_t x4777 = UINT16_MAX;
uint16_t x4796 = 7U;
uint16_t x4852 = 29U;
int32_t t166 = 21760021;
volatile int32_t t167 = -2892;
uint32_t x4994 = 501U;
volatile int8_t x5006 = INT8_MIN;
int32_t x5007 = -1015;
int16_t x5010 = -13941;
int32_t t170 = -501557121;
uint16_t x5048 = 27U;
uint32_t x5095 = 542376467U;
volatile int16_t x5102 = INT16_MIN;
static int64_t x5122 = INT64_MIN;
volatile int16_t x5123 = INT16_MAX;
uint8_t x5124 = 6U;
volatile int32_t t175 = 197891737;
volatile int32_t t176 = 361459923;
int32_t t179 = 14157092;
uint16_t x5259 = UINT16_MAX;
static uint16_t x5285 = 6213U;
uint8_t x5287 = UINT8_MAX;
int32_t t181 = 71515795;
uint8_t x5316 = 2U;
int32_t t182 = 107554855;
int8_t x5391 = INT8_MIN;
uint16_t x5408 = 1U;
volatile int8_t x5437 = -5;
uint8_t x5439 = UINT8_MAX;
int32_t t188 = 1201351;
volatile int32_t t189 = 25156845;
uint8_t x5512 = 5U;
static volatile uint32_t x5553 = 95253520U;
int64_t x5563 = INT64_MIN;
int32_t x5606 = -97915;
uint16_t x5731 = UINT16_MAX;
static uint64_t x5821 = 205194LLU;
static volatile int32_t t196 = -191477;
int8_t x5845 = INT8_MIN;
uint16_t x5847 = 7U;
volatile int8_t x5848 = 13;
static int32_t t199 = 10790;


void f0(void) {
    	static uint32_t x15 = 4756U;
	uint8_t x16 = 3U;
	volatile int32_t t0 = -17;

    t0 = ((x13!=(x14>x15))<<x16);

    if (t0 != 8) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x17 = UINT64_MAX;
	uint16_t x19 = UINT16_MAX;
	uint8_t x20 = 0U;

    t1 = ((x17!=(x18>x19))<<x20);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x78 = INT32_MIN;
	static uint32_t x79 = UINT32_MAX;
	volatile uint8_t x80 = 6U;

    t2 = ((x77!=(x78>x79))<<x80);

    if (t2 != 64) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x93 = UINT8_MAX;
	int16_t x94 = -1;
	volatile int16_t x96 = 3;
	static volatile int32_t t3 = 1;

    t3 = ((x93!=(x94>x95))<<x96);

    if (t3 != 8) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint32_t x129 = 4U;
	uint32_t x130 = UINT32_MAX;
	int8_t x131 = 8;
	uint8_t x132 = 7U;

    t4 = ((x129!=(x130>x131))<<x132);

    if (t4 != 128) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x133 = UINT16_MAX;
	uint64_t x134 = UINT64_MAX;
	static int16_t x136 = 10;
	int32_t t5 = 625702661;

    t5 = ((x133!=(x134>x135))<<x136);

    if (t5 != 1024) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x149 = 9U;
	static int16_t x150 = INT16_MAX;
	uint8_t x152 = 7U;
	static volatile int32_t t6 = -4649015;

    t6 = ((x149!=(x150>x151))<<x152);

    if (t6 != 128) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x181 = INT64_MAX;
	int64_t x183 = INT64_MIN;
	uint32_t x184 = 14U;
	volatile int32_t t7 = -7;

    t7 = ((x181!=(x182>x183))<<x184);

    if (t7 != 16384) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x269 = INT8_MIN;
	uint16_t x270 = UINT16_MAX;
	uint16_t x271 = UINT16_MAX;
	uint8_t x272 = 6U;
	volatile int32_t t8 = 3897688;

    t8 = ((x269!=(x270>x271))<<x272);

    if (t8 != 64) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x285 = 53LLU;
	volatile int8_t x287 = INT8_MAX;
	static uint32_t x288 = 6U;
	volatile int32_t t9 = 9;

    t9 = ((x285!=(x286>x287))<<x288);

    if (t9 != 64) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x381 = INT16_MAX;
	static uint64_t x382 = 15459629795820516LLU;
	static int32_t x383 = INT32_MAX;
	static volatile uint32_t x384 = 3U;

    t10 = ((x381!=(x382>x383))<<x384);

    if (t10 != 8) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x418 = 169U;
	volatile uint8_t x419 = UINT8_MAX;
	int8_t x420 = 20;
	volatile int32_t t11 = 42395;

    t11 = ((x417!=(x418>x419))<<x420);

    if (t11 != 1048576) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x449 = INT64_MIN;
	int16_t x450 = INT16_MIN;
	int64_t x451 = -38526LL;
	static uint8_t x452 = 3U;
	int32_t t12 = -538313;

    t12 = ((x449!=(x450>x451))<<x452);

    if (t12 != 8) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x481 = -1;
	uint32_t x483 = UINT32_MAX;
	int16_t x484 = 1;
	volatile int32_t t13 = 47912;

    t13 = ((x481!=(x482>x483))<<x484);

    if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x529 = 30U;
	static int32_t x530 = INT32_MAX;
	uint8_t x531 = UINT8_MAX;
	uint64_t x532 = 1LLU;

    t14 = ((x529!=(x530>x531))<<x532);

    if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x589 = INT8_MAX;
	int32_t x590 = -1;
	uint16_t x591 = UINT16_MAX;
	uint8_t x592 = 1U;

    t15 = ((x589!=(x590>x591))<<x592);

    if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x613 = INT8_MIN;
	volatile uint32_t x614 = 4525U;
	uint32_t x615 = 1U;
	uint8_t x616 = 6U;
	volatile int32_t t16 = 718213526;

    t16 = ((x613!=(x614>x615))<<x616);

    if (t16 != 64) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x625 = 29U;
	static int16_t x626 = 1;
	static int64_t x627 = INT64_MIN;
	uint8_t x628 = 0U;

    t17 = ((x625!=(x626>x627))<<x628);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x649 = -38944;
	volatile int64_t x650 = INT64_MAX;
	static int32_t x651 = -1;
	uint8_t x652 = 1U;

    t18 = ((x649!=(x650>x651))<<x652);

    if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x702 = 231755U;
	uint32_t x703 = 14307683U;
	int8_t x704 = 2;

    t19 = ((x701!=(x702>x703))<<x704);

    if (t19 != 4) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x705 = -9;
	volatile int8_t x706 = INT8_MIN;
	int32_t x708 = 1;
	volatile int32_t t20 = 9542671;

    t20 = ((x705!=(x706>x707))<<x708);

    if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x737 = -55LL;
	volatile uint32_t x738 = 109388U;
	static uint16_t x740 = 0U;
	volatile int32_t t21 = -1972195;

    t21 = ((x737!=(x738>x739))<<x740);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x810 = -4951;
	int32_t x811 = INT32_MIN;
	uint8_t x812 = 0U;
	static int32_t t22 = 29496;

    t22 = ((x809!=(x810>x811))<<x812);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x814 = UINT32_MAX;
	static uint8_t x816 = 7U;
	int32_t t23 = -52504;

    t23 = ((x813!=(x814>x815))<<x816);

    if (t23 != 128) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x870 = UINT16_MAX;
	uint32_t x871 = 246U;

    t24 = ((x869!=(x870>x871))<<x872);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x913 = 1338193010U;
	int64_t x914 = INT64_MIN;
	static int8_t x915 = -1;
	volatile uint32_t x916 = 2U;
	static volatile int32_t t25 = 1776350;

    t25 = ((x913!=(x914>x915))<<x916);

    if (t25 != 4) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x989 = 85U;
	static uint8_t x990 = 4U;
	static int32_t x991 = -1;
	volatile int8_t x992 = 1;
	static volatile int32_t t26 = -1294905;

    t26 = ((x989!=(x990>x991))<<x992);

    if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x1005 = INT64_MIN;
	volatile int16_t x1006 = INT16_MIN;
	uint8_t x1007 = 17U;
	int16_t x1008 = 1;
	int32_t t27 = -5239775;

    t27 = ((x1005!=(x1006>x1007))<<x1008);

    if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x1009 = 2662396604083258599LLU;
	int32_t x1010 = -1;
	int32_t x1011 = -452413419;
	volatile int16_t x1012 = 0;
	static int32_t t28 = -241152;

    t28 = ((x1009!=(x1010>x1011))<<x1012);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x1069 = INT16_MAX;
	int32_t x1071 = 315394823;
	static uint8_t x1072 = 4U;

    t29 = ((x1069!=(x1070>x1071))<<x1072);

    if (t29 != 16) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1078 = -347638393;
	volatile uint16_t x1080 = 7U;
	volatile int32_t t30 = -38689;

    t30 = ((x1077!=(x1078>x1079))<<x1080);

    if (t30 != 128) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x1093 = -9768;
	int64_t x1094 = -240784924904651909LL;
	int32_t x1095 = INT32_MIN;
	static volatile uint8_t x1096 = 1U;
	int32_t t31 = -683403;

    t31 = ((x1093!=(x1094>x1095))<<x1096);

    if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x1117 = UINT64_MAX;
	int8_t x1118 = -2;
	int16_t x1119 = -1227;
	int32_t t32 = -3;

    t32 = ((x1117!=(x1118>x1119))<<x1120);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x1153 = INT64_MIN;
	uint64_t x1154 = 3LLU;
	volatile uint8_t x1156 = 0U;
	int32_t t33 = 14002238;

    t33 = ((x1153!=(x1154>x1155))<<x1156);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x1209 = -1;
	int8_t x1210 = INT8_MIN;
	int8_t x1212 = 2;
	volatile int32_t t34 = -1009;

    t34 = ((x1209!=(x1210>x1211))<<x1212);

    if (t34 != 4) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x1241 = UINT32_MAX;
	int16_t x1242 = INT16_MAX;
	int8_t x1243 = INT8_MAX;
	int8_t x1244 = 0;
	volatile int32_t t35 = -43504369;

    t35 = ((x1241!=(x1242>x1243))<<x1244);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x1249 = INT64_MAX;
	static int32_t x1251 = INT32_MAX;
	uint16_t x1252 = 16U;
	volatile int32_t t36 = 18760449;

    t36 = ((x1249!=(x1250>x1251))<<x1252);

    if (t36 != 65536) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x1345 = INT32_MAX;
	uint64_t x1347 = 1797349482980LLU;
	volatile int16_t x1348 = 0;
	int32_t t37 = 8590;

    t37 = ((x1345!=(x1346>x1347))<<x1348);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x1349 = 2893098698736929LLU;
	int8_t x1350 = -30;
	static int8_t x1351 = INT8_MIN;
	volatile int8_t x1352 = 11;
	volatile int32_t t38 = 1909;

    t38 = ((x1349!=(x1350>x1351))<<x1352);

    if (t38 != 2048) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x1426 = -1;
	uint32_t x1427 = UINT32_MAX;
	volatile int8_t x1428 = 12;
	volatile int32_t t39 = 842911578;

    t39 = ((x1425!=(x1426>x1427))<<x1428);

    if (t39 != 4096) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x1457 = UINT64_MAX;
	uint64_t x1458 = 840394LLU;
	int16_t x1460 = 0;
	static volatile int32_t t40 = 1;

    t40 = ((x1457!=(x1458>x1459))<<x1460);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x1517 = INT8_MAX;
	int16_t x1518 = -928;
	int8_t x1519 = -1;
	static uint64_t x1520 = 1LLU;

    t41 = ((x1517!=(x1518>x1519))<<x1520);

    if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x1557 = 1612870LLU;
	int64_t x1559 = INT64_MAX;
	static volatile int32_t t42 = -661145267;

    t42 = ((x1557!=(x1558>x1559))<<x1560);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x1601 = INT32_MIN;
	int64_t x1603 = INT64_MIN;
	uint64_t x1604 = 0LLU;
	int32_t t43 = 521174;

    t43 = ((x1601!=(x1602>x1603))<<x1604);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x1609 = 11453U;
	uint64_t x1610 = 4578004940LLU;
	int64_t x1611 = -1LL;
	uint16_t x1612 = 12U;
	volatile int32_t t44 = -126;

    t44 = ((x1609!=(x1610>x1611))<<x1612);

    if (t44 != 4096) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x1613 = -1;
	uint64_t x1614 = 1057812575655397LLU;
	int64_t x1615 = -1LL;
	int32_t t45 = 913986722;

    t45 = ((x1613!=(x1614>x1615))<<x1616);

    if (t45 != 16) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x1633 = INT16_MIN;
	uint8_t x1635 = 100U;
	uint16_t x1636 = 1U;

    t46 = ((x1633!=(x1634>x1635))<<x1636);

    if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x1673 = 123LL;
	int64_t x1674 = INT64_MAX;
	int32_t x1676 = 1;

    t47 = ((x1673!=(x1674>x1675))<<x1676);

    if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x1681 = INT32_MIN;
	int64_t x1682 = -1LL;
	static volatile uint64_t x1683 = UINT64_MAX;
	static uint16_t x1684 = 1U;
	int32_t t48 = -1064844422;

    t48 = ((x1681!=(x1682>x1683))<<x1684);

    if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x1694 = 14734;
	uint16_t x1696 = 0U;

    t49 = ((x1693!=(x1694>x1695))<<x1696);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x1765 = INT16_MIN;
	static volatile uint32_t x1766 = UINT32_MAX;
	uint16_t x1767 = 331U;
	int32_t t50 = -244;

    t50 = ((x1765!=(x1766>x1767))<<x1768);

    if (t50 != 64) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x1777 = -1466087;
	uint16_t x1778 = 10U;
	volatile int8_t x1779 = INT8_MAX;
	static int8_t x1780 = 4;
	volatile int32_t t51 = -1804989;

    t51 = ((x1777!=(x1778>x1779))<<x1780);

    if (t51 != 16) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x1802 = 761226367790LL;
	int64_t x1803 = INT64_MIN;
	volatile uint8_t x1804 = 1U;
	int32_t t52 = 64;

    t52 = ((x1801!=(x1802>x1803))<<x1804);

    if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x1813 = INT64_MIN;
	static uint32_t x1815 = UINT32_MAX;
	static volatile uint8_t x1816 = 3U;
	int32_t t53 = -982738;

    t53 = ((x1813!=(x1814>x1815))<<x1816);

    if (t53 != 8) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x1849 = INT16_MAX;
	int32_t x1850 = -165323;
	volatile int16_t x1851 = -26;
	static uint16_t x1852 = 0U;
	volatile int32_t t54 = -2389;

    t54 = ((x1849!=(x1850>x1851))<<x1852);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x1857 = -1;
	int32_t x1858 = INT32_MAX;
	static int8_t x1859 = INT8_MIN;
	volatile int16_t x1860 = 3;

    t55 = ((x1857!=(x1858>x1859))<<x1860);

    if (t55 != 8) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x1881 = 2U;
	volatile uint8_t x1884 = 18U;

    t56 = ((x1881!=(x1882>x1883))<<x1884);

    if (t56 != 262144) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x1901 = -1;
	volatile uint64_t x1902 = 1623872LLU;
	int16_t x1903 = -12896;
	volatile uint32_t x1904 = 7U;
	volatile int32_t t57 = 28;

    t57 = ((x1901!=(x1902>x1903))<<x1904);

    if (t57 != 128) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x1925 = 2580U;
	volatile int8_t x1926 = -1;
	int16_t x1927 = INT16_MIN;
	volatile int64_t x1928 = 11LL;
	int32_t t58 = 111509238;

    t58 = ((x1925!=(x1926>x1927))<<x1928);

    if (t58 != 2048) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x1941 = -3LL;
	static uint8_t x1942 = 43U;
	uint8_t x1944 = 2U;
	static volatile int32_t t59 = -150574906;

    t59 = ((x1941!=(x1942>x1943))<<x1944);

    if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x1977 = INT16_MIN;
	int8_t x1980 = 0;
	static int32_t t60 = 9149426;

    t60 = ((x1977!=(x1978>x1979))<<x1980);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x1981 = 724;
	static uint8_t x1983 = 116U;
	static int16_t x1984 = 16;
	int32_t t61 = 52;

    t61 = ((x1981!=(x1982>x1983))<<x1984);

    if (t61 != 65536) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x2081 = -1LL;
	static int32_t x2082 = -1;
	uint16_t x2084 = 16U;

    t62 = ((x2081!=(x2082>x2083))<<x2084);

    if (t62 != 65536) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x2145 = -195275LL;
	int32_t x2146 = INT32_MIN;
	volatile int8_t x2147 = INT8_MIN;
	uint8_t x2148 = 13U;
	int32_t t63 = 14;

    t63 = ((x2145!=(x2146>x2147))<<x2148);

    if (t63 != 8192) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x2177 = -1;
	int16_t x2179 = INT16_MIN;
	static uint16_t x2180 = 6U;
	int32_t t64 = 510072;

    t64 = ((x2177!=(x2178>x2179))<<x2180);

    if (t64 != 64) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x2229 = 947;
	int32_t x2230 = -60593275;
	int8_t x2231 = -1;
	static uint16_t x2232 = 1U;
	int32_t t65 = 0;

    t65 = ((x2229!=(x2230>x2231))<<x2232);

    if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x2289 = INT32_MAX;
	int8_t x2290 = -1;
	static volatile int8_t x2292 = 0;
	volatile int32_t t66 = 2;

    t66 = ((x2289!=(x2290>x2291))<<x2292);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x2305 = UINT16_MAX;
	int32_t x2306 = -1;
	int8_t x2307 = -1;
	static uint8_t x2308 = 3U;

    t67 = ((x2305!=(x2306>x2307))<<x2308);

    if (t67 != 8) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x2338 = UINT16_MAX;
	uint16_t x2340 = 1U;
	volatile int32_t t68 = 48899;

    t68 = ((x2337!=(x2338>x2339))<<x2340);

    if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x2354 = 111U;
	volatile int8_t x2355 = INT8_MAX;
	volatile int16_t x2356 = 3;
	volatile int32_t t69 = -15829045;

    t69 = ((x2353!=(x2354>x2355))<<x2356);

    if (t69 != 8) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x2357 = 802;
	uint8_t x2359 = 1U;
	uint16_t x2360 = 3U;
	int32_t t70 = 206654635;

    t70 = ((x2357!=(x2358>x2359))<<x2360);

    if (t70 != 8) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x2386 = 0;
	static int64_t x2387 = -1LL;
	volatile int32_t t71 = 0;

    t71 = ((x2385!=(x2386>x2387))<<x2388);

    if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x2389 = 57;
	volatile int64_t x2390 = INT64_MIN;
	int8_t x2391 = INT8_MIN;
	static uint64_t x2392 = 1LLU;
	int32_t t72 = -22;

    t72 = ((x2389!=(x2390>x2391))<<x2392);

    if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x2413 = -1;
	static uint64_t x2414 = 1944608435897312LLU;
	static volatile uint16_t x2415 = 1U;
	int8_t x2416 = 12;
	int32_t t73 = -10357;

    t73 = ((x2413!=(x2414>x2415))<<x2416);

    if (t73 != 4096) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x2469 = INT8_MAX;
	int64_t x2470 = INT64_MIN;
	uint16_t x2471 = 2U;
	volatile uint16_t x2472 = 7U;
	int32_t t74 = 97981077;

    t74 = ((x2469!=(x2470>x2471))<<x2472);

    if (t74 != 128) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x2513 = 532827690514305361LLU;

    t75 = ((x2513!=(x2514>x2515))<<x2516);

    if (t75 != 128) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x2561 = INT16_MIN;
	int32_t x2562 = INT32_MIN;
	static int32_t t76 = -542;

    t76 = ((x2561!=(x2562>x2563))<<x2564);

    if (t76 != 131072) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x2597 = UINT16_MAX;
	int8_t x2598 = 1;
	int8_t x2600 = 13;
	static volatile int32_t t77 = 64;

    t77 = ((x2597!=(x2598>x2599))<<x2600);

    if (t77 != 8192) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x2605 = INT16_MIN;
	int8_t x2606 = INT8_MAX;
	static int64_t x2607 = INT64_MIN;
	static volatile int32_t t78 = 61356;

    t78 = ((x2605!=(x2606>x2607))<<x2608);

    if (t78 != 1024) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x2657 = UINT8_MAX;
	int64_t x2658 = -1LL;
	int32_t x2659 = INT32_MIN;
	uint8_t x2660 = 1U;

    t79 = ((x2657!=(x2658>x2659))<<x2660);

    if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x2713 = 1U;
	int32_t x2714 = INT32_MIN;
	uint8_t x2715 = 1U;
	volatile uint32_t x2716 = 4U;

    t80 = ((x2713!=(x2714>x2715))<<x2716);

    if (t80 != 16) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x2721 = UINT16_MAX;
	static int16_t x2724 = 0;
	volatile int32_t t81 = -1112060;

    t81 = ((x2721!=(x2722>x2723))<<x2724);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x2725 = 68U;
	static uint8_t x2726 = 1U;
	uint16_t x2727 = 105U;
	uint64_t x2728 = 0LLU;
	volatile int32_t t82 = -9024701;

    t82 = ((x2725!=(x2726>x2727))<<x2728);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x2750 = INT16_MAX;
	volatile uint64_t x2751 = UINT64_MAX;
	volatile int32_t t83 = 3;

    t83 = ((x2749!=(x2750>x2751))<<x2752);

    if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x2777 = INT64_MAX;
	static int64_t x2778 = 13LL;
	int32_t x2779 = INT32_MAX;
	int8_t x2780 = 5;
	int32_t t84 = 1;

    t84 = ((x2777!=(x2778>x2779))<<x2780);

    if (t84 != 32) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x2833 = 4910847LLU;
	int8_t x2835 = INT8_MAX;
	int8_t x2836 = 1;
	volatile int32_t t85 = -1107811;

    t85 = ((x2833!=(x2834>x2835))<<x2836);

    if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x2853 = -1;
	volatile uint16_t x2854 = 0U;
	int8_t x2855 = INT8_MIN;
	volatile uint8_t x2856 = 1U;
	volatile int32_t t86 = 661325190;

    t86 = ((x2853!=(x2854>x2855))<<x2856);

    if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x2857 = INT8_MAX;
	int32_t x2858 = INT32_MIN;
	int8_t x2860 = 0;
	volatile int32_t t87 = 77;

    t87 = ((x2857!=(x2858>x2859))<<x2860);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x2869 = 154U;
	int8_t x2870 = INT8_MIN;
	int64_t x2871 = 6217092252933260LL;
	static uint8_t x2872 = 2U;
	int32_t t88 = -198985755;

    t88 = ((x2869!=(x2870>x2871))<<x2872);

    if (t88 != 4) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x2901 = INT32_MIN;
	int32_t x2902 = 43425;
	uint16_t x2903 = 174U;
	static uint16_t x2904 = 1U;
	volatile int32_t t89 = -8;

    t89 = ((x2901!=(x2902>x2903))<<x2904);

    if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x2929 = INT8_MAX;
	volatile uint32_t x2930 = UINT32_MAX;
	int64_t x2931 = 103884913988037LL;
	static int8_t x2932 = 0;
	int32_t t90 = -13;

    t90 = ((x2929!=(x2930>x2931))<<x2932);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x2959 = 23U;
	static uint16_t x2960 = 3U;
	int32_t t91 = -666790;

    t91 = ((x2957!=(x2958>x2959))<<x2960);

    if (t91 != 8) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x2961 = INT64_MIN;
	int64_t x2962 = INT64_MIN;
	int16_t x2963 = -29;
	static uint32_t x2964 = 22U;
	volatile int32_t t92 = -22959412;

    t92 = ((x2961!=(x2962>x2963))<<x2964);

    if (t92 != 4194304) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint64_t x2965 = UINT64_MAX;
	int64_t x2967 = INT64_MAX;
	static int8_t x2968 = 0;

    t93 = ((x2965!=(x2966>x2967))<<x2968);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x2997 = 1U;
	int16_t x2998 = INT16_MIN;
	static int8_t x2999 = INT8_MIN;
	uint8_t x3000 = 15U;

    t94 = ((x2997!=(x2998>x2999))<<x3000);

    if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint8_t x3053 = 6U;
	uint32_t x3055 = 5461U;
	uint8_t x3056 = 3U;
	volatile int32_t t95 = -113;

    t95 = ((x3053!=(x3054>x3055))<<x3056);

    if (t95 != 8) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x3093 = INT64_MIN;
	int32_t x3094 = INT32_MIN;
	uint16_t x3095 = 326U;
	uint8_t x3096 = 2U;
	int32_t t96 = -3870;

    t96 = ((x3093!=(x3094>x3095))<<x3096);

    if (t96 != 4) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x3097 = 26837548U;
	uint32_t x3098 = 372U;
	int16_t x3099 = -1;
	uint8_t x3100 = 8U;
	volatile int32_t t97 = 3178906;

    t97 = ((x3097!=(x3098>x3099))<<x3100);

    if (t97 != 256) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x3121 = INT64_MIN;
	int16_t x3122 = -40;
	int16_t x3124 = 0;
	int32_t t98 = 50;

    t98 = ((x3121!=(x3122>x3123))<<x3124);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x3125 = 31U;
	static int16_t x3126 = -1;
	static int64_t x3127 = INT64_MAX;
	int16_t x3128 = 28;
	int32_t t99 = -1422362;

    t99 = ((x3125!=(x3126>x3127))<<x3128);

    if (t99 != 268435456) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x3141 = -1;
	static int32_t x3142 = INT32_MIN;
	uint16_t x3143 = UINT16_MAX;
	volatile int32_t t100 = -3046618;

    t100 = ((x3141!=(x3142>x3143))<<x3144);

    if (t100 != 2097152) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x3145 = 60428315532622963LL;
	int16_t x3146 = INT16_MAX;
	static uint16_t x3147 = 31U;
	int8_t x3148 = 2;
	volatile int32_t t101 = 9;

    t101 = ((x3145!=(x3146>x3147))<<x3148);

    if (t101 != 4) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x3177 = UINT32_MAX;
	int8_t x3178 = -22;
	uint8_t x3179 = 3U;
	int16_t x3180 = 9;
	volatile int32_t t102 = -40;

    t102 = ((x3177!=(x3178>x3179))<<x3180);

    if (t102 != 512) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x3197 = INT8_MIN;
	uint8_t x3198 = UINT8_MAX;
	int8_t x3199 = 34;
	volatile uint32_t x3200 = 3U;
	volatile int32_t t103 = -39;

    t103 = ((x3197!=(x3198>x3199))<<x3200);

    if (t103 != 8) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x3201 = INT8_MIN;
	uint8_t x3202 = 0U;
	uint32_t x3203 = 2296209U;
	int16_t x3204 = 1;
	volatile int32_t t104 = -59067813;

    t104 = ((x3201!=(x3202>x3203))<<x3204);

    if (t104 != 2) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x3221 = UINT32_MAX;
	uint16_t x3223 = 6655U;

    t105 = ((x3221!=(x3222>x3223))<<x3224);

    if (t105 != 16) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int8_t x3233 = 1;
	int16_t x3235 = INT16_MIN;
	uint8_t x3236 = 1U;
	volatile int32_t t106 = 1;

    t106 = ((x3233!=(x3234>x3235))<<x3236);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x3237 = 165U;
	int8_t x3238 = 1;
	int8_t x3239 = INT8_MIN;
	static int8_t x3240 = 1;

    t107 = ((x3237!=(x3238>x3239))<<x3240);

    if (t107 != 2) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x3265 = 1;
	int32_t x3266 = -801337;
	int32_t x3267 = -1;
	static int32_t t108 = -4;

    t108 = ((x3265!=(x3266>x3267))<<x3268);

    if (t108 != 8) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x3325 = INT16_MAX;
	volatile int16_t x3326 = 0;
	volatile uint8_t x3328 = 6U;
	int32_t t109 = 1;

    t109 = ((x3325!=(x3326>x3327))<<x3328);

    if (t109 != 64) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x3381 = 21U;
	int64_t x3383 = INT64_MIN;
	int32_t t110 = 7174969;

    t110 = ((x3381!=(x3382>x3383))<<x3384);

    if (t110 != 4) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x3406 = INT64_MIN;
	uint16_t x3408 = 0U;
	static volatile int32_t t111 = 1;

    t111 = ((x3405!=(x3406>x3407))<<x3408);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x3413 = 5;
	volatile int64_t x3414 = -1LL;
	int8_t x3415 = INT8_MIN;
	int8_t x3416 = 11;
	volatile int32_t t112 = -992658;

    t112 = ((x3413!=(x3414>x3415))<<x3416);

    if (t112 != 2048) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x3422 = INT32_MAX;
	static uint8_t x3424 = 28U;
	volatile int32_t t113 = -351068364;

    t113 = ((x3421!=(x3422>x3423))<<x3424);

    if (t113 != 268435456) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x3446 = -1;
	uint16_t x3448 = 1U;
	int32_t t114 = -15;

    t114 = ((x3445!=(x3446>x3447))<<x3448);

    if (t114 != 2) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int32_t x3533 = 1046819490;
	uint16_t x3534 = 2780U;
	int16_t x3535 = INT16_MIN;
	volatile int8_t x3536 = 26;

    t115 = ((x3533!=(x3534>x3535))<<x3536);

    if (t115 != 67108864) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x3581 = INT8_MIN;
	uint16_t x3582 = 148U;
	uint64_t x3583 = 3587588LLU;
	uint16_t x3584 = 1U;
	volatile int32_t t116 = -7286711;

    t116 = ((x3581!=(x3582>x3583))<<x3584);

    if (t116 != 2) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x3661 = -1;
	uint8_t x3663 = 7U;
	volatile int32_t t117 = -32;

    t117 = ((x3661!=(x3662>x3663))<<x3664);

    if (t117 != 8) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x3725 = INT64_MIN;
	static int16_t x3726 = -1143;
	volatile int8_t x3727 = INT8_MIN;
	static uint8_t x3728 = 17U;
	volatile int32_t t118 = 3;

    t118 = ((x3725!=(x3726>x3727))<<x3728);

    if (t118 != 131072) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x3745 = 196463LLU;
	int16_t x3748 = 6;

    t119 = ((x3745!=(x3746>x3747))<<x3748);

    if (t119 != 64) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x3773 = INT32_MAX;
	int32_t x3775 = INT32_MIN;
	int8_t x3776 = 15;
	int32_t t120 = -3;

    t120 = ((x3773!=(x3774>x3775))<<x3776);

    if (t120 != 32768) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x3821 = 1812U;
	int64_t x3823 = INT64_MIN;
	static int8_t x3824 = 30;

    t121 = ((x3821!=(x3822>x3823))<<x3824);

    if (t121 != 1073741824) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x3829 = 4U;
	uint32_t x3830 = 15U;
	int32_t x3831 = 173648;
	uint16_t x3832 = 7U;
	static volatile int32_t t122 = 83244762;

    t122 = ((x3829!=(x3830>x3831))<<x3832);

    if (t122 != 128) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x3853 = 69;
	volatile int64_t x3855 = INT64_MIN;
	static int8_t x3856 = 1;
	volatile int32_t t123 = -948093060;

    t123 = ((x3853!=(x3854>x3855))<<x3856);

    if (t123 != 2) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x3886 = -7719;
	int32_t x3887 = INT32_MIN;
	volatile int8_t x3888 = 0;

    t124 = ((x3885!=(x3886>x3887))<<x3888);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x3921 = 628733U;
	int32_t x3922 = 2338693;
	volatile int8_t x3923 = INT8_MIN;
	volatile uint64_t x3924 = 5LLU;
	int32_t t125 = -238023;

    t125 = ((x3921!=(x3922>x3923))<<x3924);

    if (t125 != 32) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x3973 = -1;
	volatile int32_t x3974 = INT32_MAX;
	int64_t x3975 = 92370LL;
	uint8_t x3976 = 13U;
	int32_t t126 = 25233272;

    t126 = ((x3973!=(x3974>x3975))<<x3976);

    if (t126 != 8192) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x3993 = INT16_MIN;
	int64_t x3994 = INT64_MIN;
	uint8_t x3996 = 15U;
	int32_t t127 = -377785416;

    t127 = ((x3993!=(x3994>x3995))<<x3996);

    if (t127 != 32768) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x4009 = 3U;
	static volatile uint32_t x4010 = UINT32_MAX;
	int32_t x4012 = 1;
	int32_t t128 = -1;

    t128 = ((x4009!=(x4010>x4011))<<x4012);

    if (t128 != 2) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x4041 = 1128U;
	volatile int64_t x4042 = INT64_MIN;
	uint16_t x4043 = UINT16_MAX;
	uint32_t x4044 = 0U;
	int32_t t129 = -311623030;

    t129 = ((x4041!=(x4042>x4043))<<x4044);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x4045 = UINT64_MAX;
	int8_t x4047 = INT8_MIN;
	volatile uint16_t x4048 = 28U;
	int32_t t130 = 1;

    t130 = ((x4045!=(x4046>x4047))<<x4048);

    if (t130 != 268435456) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x4074 = 1U;
	volatile uint64_t x4075 = 1631996572LLU;
	uint16_t x4076 = 5U;
	volatile int32_t t131 = -678;

    t131 = ((x4073!=(x4074>x4075))<<x4076);

    if (t131 != 32) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x4077 = -1;
	static volatile int32_t x4078 = INT32_MIN;
	uint32_t x4079 = 10U;
	int16_t x4080 = 2;
	volatile int32_t t132 = 6;

    t132 = ((x4077!=(x4078>x4079))<<x4080);

    if (t132 != 4) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int64_t x4085 = INT64_MIN;
	uint64_t x4086 = UINT64_MAX;
	static int64_t x4087 = INT64_MIN;
	static uint16_t x4088 = 1U;
	int32_t t133 = 1087;

    t133 = ((x4085!=(x4086>x4087))<<x4088);

    if (t133 != 2) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x4097 = -1;
	uint8_t x4098 = 6U;
	uint8_t x4099 = 0U;
	int64_t x4100 = 0LL;
	static volatile int32_t t134 = 492040553;

    t134 = ((x4097!=(x4098>x4099))<<x4100);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x4101 = UINT8_MAX;
	static int8_t x4102 = INT8_MIN;
	int16_t x4104 = 19;
	volatile int32_t t135 = 49508142;

    t135 = ((x4101!=(x4102>x4103))<<x4104);

    if (t135 != 524288) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x4109 = INT16_MAX;
	static int16_t x4110 = INT16_MAX;
	int16_t x4111 = -1;
	int8_t x4112 = 11;

    t136 = ((x4109!=(x4110>x4111))<<x4112);

    if (t136 != 2048) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x4121 = INT8_MIN;
	int32_t x4122 = -1;
	static uint64_t x4123 = 532871247737074LLU;
	volatile int64_t x4124 = 3LL;

    t137 = ((x4121!=(x4122>x4123))<<x4124);

    if (t137 != 8) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x4157 = INT32_MIN;
	uint32_t x4158 = 43628U;
	volatile int8_t x4159 = INT8_MIN;
	int8_t x4160 = 5;
	int32_t t138 = 103;

    t138 = ((x4157!=(x4158>x4159))<<x4160);

    if (t138 != 32) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x4217 = 139883962;
	int64_t x4218 = INT64_MAX;
	uint8_t x4220 = 2U;

    t139 = ((x4217!=(x4218>x4219))<<x4220);

    if (t139 != 4) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x4226 = 107U;
	int32_t x4227 = INT32_MIN;
	static volatile int16_t x4228 = 25;

    t140 = ((x4225!=(x4226>x4227))<<x4228);

    if (t140 != 33554432) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int64_t x4245 = INT64_MAX;
	int16_t x4248 = 1;

    t141 = ((x4245!=(x4246>x4247))<<x4248);

    if (t141 != 2) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x4261 = 1U;
	uint8_t x4262 = UINT8_MAX;
	int16_t x4263 = -2199;
	volatile uint16_t x4264 = 0U;
	int32_t t142 = 4;

    t142 = ((x4261!=(x4262>x4263))<<x4264);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x4277 = 8466639U;
	volatile int64_t x4278 = -6227LL;
	volatile int32_t x4279 = 18234;
	static int8_t x4280 = 0;
	volatile int32_t t143 = -486;

    t143 = ((x4277!=(x4278>x4279))<<x4280);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x4290 = UINT16_MAX;
	volatile int64_t x4291 = INT64_MIN;
	uint8_t x4292 = 1U;
	int32_t t144 = 14555561;

    t144 = ((x4289!=(x4290>x4291))<<x4292);

    if (t144 != 2) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int64_t x4358 = INT64_MIN;
	static int32_t x4359 = -1;
	static uint16_t x4360 = 1U;
	volatile int32_t t145 = 4821;

    t145 = ((x4357!=(x4358>x4359))<<x4360);

    if (t145 != 2) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x4377 = 12U;
	int64_t x4378 = INT64_MAX;
	static int8_t x4379 = -1;
	volatile uint64_t x4380 = 2LLU;
	int32_t t146 = -381654;

    t146 = ((x4377!=(x4378>x4379))<<x4380);

    if (t146 != 4) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x4465 = INT8_MIN;
	static uint8_t x4466 = UINT8_MAX;
	uint64_t x4467 = UINT64_MAX;
	uint8_t x4468 = 18U;
	int32_t t147 = 4;

    t147 = ((x4465!=(x4466>x4467))<<x4468);

    if (t147 != 262144) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x4469 = UINT32_MAX;
	uint32_t x4470 = 204339926U;
	uint16_t x4471 = 42U;
	uint32_t x4472 = 11U;
	int32_t t148 = 26200;

    t148 = ((x4469!=(x4470>x4471))<<x4472);

    if (t148 != 2048) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x4477 = -3017920341917138064LL;
	int16_t x4478 = INT16_MIN;
	uint8_t x4479 = 42U;
	uint8_t x4480 = 0U;
	int32_t t149 = -3896;

    t149 = ((x4477!=(x4478>x4479))<<x4480);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x4489 = UINT16_MAX;
	int64_t x4491 = INT64_MIN;
	int64_t x4492 = 0LL;

    t150 = ((x4489!=(x4490>x4491))<<x4492);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x4521 = 1208U;
	uint8_t x4522 = UINT8_MAX;
	static uint16_t x4523 = UINT16_MAX;
	volatile int32_t t151 = -450386;

    t151 = ((x4521!=(x4522>x4523))<<x4524);

    if (t151 != 2) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x4525 = INT32_MAX;
	uint16_t x4526 = 1U;
	static int64_t x4527 = INT64_MAX;
	volatile uint8_t x4528 = 2U;
	int32_t t152 = -65277187;

    t152 = ((x4525!=(x4526>x4527))<<x4528);

    if (t152 != 4) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x4537 = INT16_MIN;
	uint8_t x4538 = UINT8_MAX;
	volatile int64_t x4539 = INT64_MIN;
	volatile int32_t t153 = -10396;

    t153 = ((x4537!=(x4538>x4539))<<x4540);

    if (t153 != 512) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x4541 = 15364U;
	int64_t x4542 = INT64_MAX;
	static int32_t x4543 = INT32_MIN;
	uint8_t x4544 = 1U;

    t154 = ((x4541!=(x4542>x4543))<<x4544);

    if (t154 != 2) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x4549 = INT8_MIN;
	int16_t x4550 = INT16_MIN;
	volatile uint8_t x4551 = UINT8_MAX;
	uint32_t x4552 = 1U;
	static volatile int32_t t155 = 3;

    t155 = ((x4549!=(x4550>x4551))<<x4552);

    if (t155 != 2) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x4597 = -1;
	int64_t x4598 = INT64_MIN;
	int8_t x4599 = INT8_MAX;
	int32_t x4600 = 1;
	static volatile int32_t t156 = -464;

    t156 = ((x4597!=(x4598>x4599))<<x4600);

    if (t156 != 2) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x4637 = -1;
	volatile int8_t x4638 = INT8_MIN;
	uint8_t x4639 = UINT8_MAX;
	uint8_t x4640 = 3U;
	volatile int32_t t157 = 485901847;

    t157 = ((x4637!=(x4638>x4639))<<x4640);

    if (t157 != 8) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x4649 = 1U;
	static int16_t x4650 = -1352;
	int8_t x4651 = 0;
	volatile int16_t x4652 = 0;
	volatile int32_t t158 = 4120183;

    t158 = ((x4649!=(x4650>x4651))<<x4652);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x4733 = -1331;
	volatile int32_t x4734 = INT32_MIN;
	static uint8_t x4736 = 3U;
	volatile int32_t t159 = 0;

    t159 = ((x4733!=(x4734>x4735))<<x4736);

    if (t159 != 8) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x4757 = INT32_MIN;
	static volatile uint8_t x4758 = 56U;
	static uint8_t x4759 = 55U;
	uint8_t x4760 = 4U;
	int32_t t160 = 1;

    t160 = ((x4757!=(x4758>x4759))<<x4760);

    if (t160 != 16) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x4765 = 1U;
	uint16_t x4766 = 711U;
	uint8_t x4768 = 19U;
	int32_t t161 = 510;

    t161 = ((x4765!=(x4766>x4767))<<x4768);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x4778 = INT8_MIN;
	volatile int8_t x4779 = -1;
	int32_t x4780 = 1;
	volatile int32_t t162 = 286552;

    t162 = ((x4777!=(x4778>x4779))<<x4780);

    if (t162 != 2) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x4793 = INT64_MIN;
	volatile int64_t x4794 = INT64_MIN;
	uint64_t x4795 = UINT64_MAX;
	static int32_t t163 = -3;

    t163 = ((x4793!=(x4794>x4795))<<x4796);

    if (t163 != 128) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x4805 = 1495887917U;
	uint64_t x4806 = 4712LLU;
	int64_t x4807 = INT64_MAX;
	static int64_t x4808 = 15LL;
	int32_t t164 = 1;

    t164 = ((x4805!=(x4806>x4807))<<x4808);

    if (t164 != 32768) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x4809 = -1;
	volatile int8_t x4810 = 13;
	uint32_t x4811 = 644065U;
	uint16_t x4812 = 1U;
	int32_t t165 = -58510572;

    t165 = ((x4809!=(x4810>x4811))<<x4812);

    if (t165 != 2) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x4849 = -1;
	uint8_t x4850 = UINT8_MAX;
	uint16_t x4851 = UINT16_MAX;

    t166 = ((x4849!=(x4850>x4851))<<x4852);

    if (t166 != 536870912) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x4917 = INT8_MIN;
	uint32_t x4918 = UINT32_MAX;
	static uint64_t x4919 = 8562865548647322930LLU;
	int8_t x4920 = 1;

    t167 = ((x4917!=(x4918>x4919))<<x4920);

    if (t167 != 2) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x4993 = INT8_MIN;
	uint8_t x4995 = UINT8_MAX;
	uint64_t x4996 = 8LLU;
	volatile int32_t t168 = -76;

    t168 = ((x4993!=(x4994>x4995))<<x4996);

    if (t168 != 256) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x5005 = INT32_MIN;
	int32_t x5008 = 1;
	volatile int32_t t169 = -48165;

    t169 = ((x5005!=(x5006>x5007))<<x5008);

    if (t169 != 2) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x5009 = -1;
	static int64_t x5011 = -18240187270LL;
	uint8_t x5012 = 1U;

    t170 = ((x5009!=(x5010>x5011))<<x5012);

    if (t170 != 2) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x5037 = 83U;
	static uint64_t x5038 = UINT64_MAX;
	volatile int8_t x5039 = INT8_MIN;
	uint16_t x5040 = 24U;
	volatile int32_t t171 = 171617727;

    t171 = ((x5037!=(x5038>x5039))<<x5040);

    if (t171 != 16777216) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x5045 = 31U;
	int32_t x5046 = 6628951;
	int8_t x5047 = INT8_MIN;
	int32_t t172 = 46702;

    t172 = ((x5045!=(x5046>x5047))<<x5048);

    if (t172 != 134217728) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x5093 = INT64_MAX;
	static int64_t x5094 = -944468735865749LL;
	uint64_t x5096 = 0LLU;
	static int32_t t173 = 5258402;

    t173 = ((x5093!=(x5094>x5095))<<x5096);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x5101 = INT64_MIN;
	volatile int16_t x5103 = 0;
	uint32_t x5104 = 20U;
	int32_t t174 = 915;

    t174 = ((x5101!=(x5102>x5103))<<x5104);

    if (t174 != 1048576) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x5121 = INT32_MIN;

    t175 = ((x5121!=(x5122>x5123))<<x5124);

    if (t175 != 64) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x5129 = -86LL;
	uint8_t x5130 = 2U;
	volatile int16_t x5131 = -1;
	int8_t x5132 = 17;

    t176 = ((x5129!=(x5130>x5131))<<x5132);

    if (t176 != 131072) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x5157 = INT64_MIN;
	uint16_t x5158 = 431U;
	volatile int16_t x5159 = INT16_MAX;
	static int8_t x5160 = 9;
	volatile int32_t t177 = 6819;

    t177 = ((x5157!=(x5158>x5159))<<x5160);

    if (t177 != 512) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x5201 = INT64_MIN;
	static int32_t x5202 = INT32_MAX;
	int16_t x5203 = -1;
	uint8_t x5204 = 1U;
	static volatile int32_t t178 = -152717690;

    t178 = ((x5201!=(x5202>x5203))<<x5204);

    if (t178 != 2) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x5229 = -1;
	int16_t x5230 = INT16_MIN;
	uint32_t x5231 = 3U;
	uint8_t x5232 = 2U;

    t179 = ((x5229!=(x5230>x5231))<<x5232);

    if (t179 != 4) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x5257 = UINT64_MAX;
	uint8_t x5258 = 1U;
	uint8_t x5260 = 1U;
	int32_t t180 = -489433485;

    t180 = ((x5257!=(x5258>x5259))<<x5260);

    if (t180 != 2) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x5286 = 51U;
	int8_t x5288 = 5;

    t181 = ((x5285!=(x5286>x5287))<<x5288);

    if (t181 != 32) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x5313 = UINT32_MAX;
	static int32_t x5314 = INT32_MAX;
	int16_t x5315 = -177;

    t182 = ((x5313!=(x5314>x5315))<<x5316);

    if (t182 != 4) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x5353 = -1;
	uint64_t x5354 = 63LLU;
	uint64_t x5355 = UINT64_MAX;
	uint64_t x5356 = 12LLU;
	int32_t t183 = -161;

    t183 = ((x5353!=(x5354>x5355))<<x5356);

    if (t183 != 4096) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x5389 = 1U;
	int16_t x5390 = -1;
	uint32_t x5392 = 3U;
	volatile int32_t t184 = 81;

    t184 = ((x5389!=(x5390>x5391))<<x5392);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x5405 = UINT8_MAX;
	uint8_t x5406 = 3U;
	static uint32_t x5407 = 243U;
	static volatile int32_t t185 = -8;

    t185 = ((x5405!=(x5406>x5407))<<x5408);

    if (t185 != 2) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x5438 = INT8_MIN;
	uint16_t x5440 = 6U;
	volatile int32_t t186 = -3529267;

    t186 = ((x5437!=(x5438>x5439))<<x5440);

    if (t186 != 64) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x5441 = INT32_MIN;
	static int16_t x5442 = INT16_MIN;
	uint32_t x5443 = 20U;
	volatile int8_t x5444 = 0;
	volatile int32_t t187 = -32096;

    t187 = ((x5441!=(x5442>x5443))<<x5444);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x5445 = INT32_MIN;
	int8_t x5446 = INT8_MIN;
	volatile int64_t x5447 = 138240948918627LL;
	int32_t x5448 = 1;

    t188 = ((x5445!=(x5446>x5447))<<x5448);

    if (t188 != 2) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x5477 = 24;
	uint32_t x5478 = UINT32_MAX;
	uint8_t x5479 = 0U;
	uint8_t x5480 = 0U;

    t189 = ((x5477!=(x5478>x5479))<<x5480);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x5509 = 19LL;
	int32_t x5510 = INT32_MAX;
	int64_t x5511 = INT64_MIN;
	int32_t t190 = -1369539;

    t190 = ((x5509!=(x5510>x5511))<<x5512);

    if (t190 != 32) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x5545 = -15;
	uint16_t x5546 = UINT16_MAX;
	static volatile int16_t x5547 = -1;
	static int16_t x5548 = 0;
	volatile int32_t t191 = 0;

    t191 = ((x5545!=(x5546>x5547))<<x5548);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x5554 = -1;
	int8_t x5555 = 1;
	uint16_t x5556 = 13U;
	volatile int32_t t192 = 778111;

    t192 = ((x5553!=(x5554>x5555))<<x5556);

    if (t192 != 8192) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x5561 = UINT8_MAX;
	int64_t x5562 = INT64_MIN;
	uint8_t x5564 = 1U;
	int32_t t193 = -667399297;

    t193 = ((x5561!=(x5562>x5563))<<x5564);

    if (t193 != 2) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x5605 = INT32_MAX;
	int8_t x5607 = INT8_MIN;
	volatile int16_t x5608 = 12;
	volatile int32_t t194 = 2;

    t194 = ((x5605!=(x5606>x5607))<<x5608);

    if (t194 != 4096) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x5729 = INT64_MIN;
	int64_t x5730 = INT64_MIN;
	int8_t x5732 = 5;
	volatile int32_t t195 = 256869649;

    t195 = ((x5729!=(x5730>x5731))<<x5732);

    if (t195 != 32) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x5822 = 1;
	static volatile uint64_t x5823 = 138750480385020377LLU;
	uint8_t x5824 = 1U;

    t196 = ((x5821!=(x5822>x5823))<<x5824);

    if (t196 != 2) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x5846 = INT8_MIN;
	volatile int32_t t197 = -20074;

    t197 = ((x5845!=(x5846>x5847))<<x5848);

    if (t197 != 8192) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x5861 = 5;
	uint32_t x5862 = 6U;
	static volatile int64_t x5863 = 13LL;
	int64_t x5864 = 1LL;
	static int32_t t198 = 0;

    t198 = ((x5861!=(x5862>x5863))<<x5864);

    if (t198 != 2) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x5873 = 4966U;
	int16_t x5874 = INT16_MIN;
	int8_t x5875 = INT8_MIN;
	uint8_t x5876 = 0U;

    t199 = ((x5873!=(x5874>x5875))<<x5876);

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


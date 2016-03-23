
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

int32_t x15 = INT32_MAX;
volatile uint32_t t0 = UINT32_MAX;
int16_t x30 = 4;
volatile int32_t x31 = INT32_MAX;
uint16_t x32 = 1U;
static uint16_t x212 = 18U;
static int32_t t7 = 686099;
int32_t t8 = 262;
int32_t x428 = INT32_MIN;
static volatile int32_t t9 = -63296997;
uint8_t x546 = 0U;
uint64_t t11 = UINT64_MAX;
uint32_t x597 = 7512U;
static int16_t x626 = 0;
int16_t x746 = 1;
static int32_t t17 = -1203192;
uint64_t x869 = 4163484159006116211LLU;
uint8_t x870 = 3U;
int8_t x872 = INT8_MIN;
uint64_t t18 = 19LLU;
volatile int8_t x1037 = 60;
static int8_t x1142 = 0;
uint8_t x1158 = 3U;
int8_t x1159 = INT8_MAX;
static int16_t x1215 = 63;
volatile int8_t x1216 = INT8_MAX;
int32_t x1367 = -1;
volatile int32_t x1504 = 1594;
volatile int32_t t28 = 1075;
uint32_t x1625 = 23074332U;
uint64_t x1628 = 3LLU;
static volatile uint32_t x1685 = 68791U;
volatile uint8_t x1686 = 0U;
uint64_t t34 = 22290172359142LLU;
uint32_t x1769 = 1U;
uint8_t x1770 = 0U;
int8_t x1773 = 0;
static uint16_t x1888 = 15294U;
static uint8_t x1910 = 2U;
int8_t x1942 = 1;
static int32_t x1949 = 32156;
uint8_t x1950 = 2U;
volatile int32_t t41 = 1320;
int64_t x2035 = INT64_MIN;
int8_t x2473 = 2;
static int64_t x2476 = INT64_MIN;
volatile int32_t t47 = -51405;
int32_t x2795 = INT32_MIN;
int8_t x2884 = -1;
static uint16_t x2930 = 1U;
int16_t x2931 = INT16_MIN;
volatile uint8_t x3002 = 13U;
int64_t x3004 = INT64_MAX;
uint64_t t57 = 68508573LLU;
int32_t t61 = -611256;
uint8_t x3458 = 0U;
int8_t x3469 = 1;
int16_t x3470 = 0;
volatile int32_t t63 = 0;
uint16_t x3651 = 125U;
volatile int32_t t65 = 26483;
uint16_t x3693 = UINT16_MAX;
static int8_t x3859 = -1;
uint32_t x4023 = UINT32_MAX;
static int16_t x4024 = 0;
uint32_t t69 = 745722U;
int16_t x4035 = INT16_MIN;
int32_t t71 = 14649;
static volatile int32_t t72 = -12374156;
static int32_t x4189 = 221;
int8_t x4192 = -1;
int32_t t74 = 515825982;
uint32_t x4344 = 39052151U;
int64_t t76 = -1007735059LL;
static uint8_t x4457 = UINT8_MAX;
uint8_t x4458 = 1U;
int64_t x4492 = INT64_MIN;
uint64_t x4505 = 193904753109239LLU;
uint16_t x4508 = 20469U;
static uint16_t x4857 = UINT16_MAX;
int16_t x4878 = 0;
static uint8_t x4902 = 6U;
int32_t x4904 = 3;
int8_t x4937 = INT8_MAX;
volatile int32_t t85 = -1;
int32_t x4997 = 3583789;
uint16_t x5000 = 1U;
int32_t x5447 = INT32_MAX;
static uint8_t x5709 = 56U;
int32_t t97 = -20;
int16_t x5761 = INT16_MAX;
uint64_t x5763 = 31LLU;
static int8_t x5791 = 1;
volatile int32_t t99 = -106104;
static uint8_t x5826 = 3U;
int16_t x5828 = INT16_MAX;
int16_t x5892 = -1;
volatile uint8_t x5926 = 21U;
uint64_t x6032 = 63194LLU;
volatile uint8_t x6452 = 1U;
volatile int64_t x6519 = 31887LL;
static int32_t x6520 = INT32_MIN;
volatile int16_t x6557 = INT16_MAX;
static uint8_t x6558 = 13U;
uint8_t x6654 = 8U;
int16_t x6655 = INT16_MIN;
volatile uint64_t x6677 = 183723LLU;
uint32_t x6738 = 22U;
int64_t x6755 = 30938LL;
int64_t x6787 = INT64_MIN;
volatile int32_t t115 = 26893;
int64_t x6915 = -1LL;
static uint32_t t117 = 5083U;
static int32_t x7007 = -1;
int8_t x7411 = INT8_MIN;
static int32_t t120 = 33572;
volatile int32_t x7591 = -97582;
static int32_t t122 = -12623160;
int8_t x7602 = 3;
uint8_t x7604 = UINT8_MAX;
int32_t x7667 = INT32_MIN;
uint64_t x7797 = UINT64_MAX;
static volatile uint64_t t126 = 297849127LLU;
int16_t x7806 = 1;


void f0(void) {
    	uint32_t x13 = UINT32_MAX;
	uint16_t x14 = 0U;
	static volatile uint8_t x16 = 81U;

    t0 = ((x13<<x14)-(x15==x16));

    if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x29 = 2;
	int32_t t1 = 14;

    t1 = ((x29<<x30)-(x31==x32));

    if (t1 != 32) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x137 = INT16_MAX;
	uint8_t x138 = 3U;
	int32_t x139 = 8043908;
	volatile int8_t x140 = INT8_MIN;
	static int32_t t2 = -1;

    t2 = ((x137<<x138)-(x139==x140));

    if (t2 != 262136) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x161 = 926050934U;
	int64_t x162 = 0LL;
	uint32_t x163 = 521175550U;
	int32_t x164 = -1;
	volatile uint32_t t3 = 7328U;

    t3 = ((x161<<x162)-(x163==x164));

    if (t3 != 926050934U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x185 = 1;
	uint32_t x186 = 26U;
	int8_t x187 = INT8_MIN;
	int64_t x188 = INT64_MIN;
	int32_t t4 = 976;

    t4 = ((x185<<x186)-(x187==x188));

    if (t4 != 67108864) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x205 = UINT8_MAX;
	uint8_t x206 = 0U;
	volatile uint8_t x207 = 84U;
	uint8_t x208 = UINT8_MAX;
	volatile int32_t t5 = -28108;

    t5 = ((x205<<x206)-(x207==x208));

    if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x209 = 6889U;
	uint8_t x210 = 1U;
	int64_t x211 = -1LL;
	int32_t t6 = -720245;

    t6 = ((x209<<x210)-(x211==x212));

    if (t6 != 13778) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x261 = 219U;
	static uint16_t x262 = 0U;
	int64_t x263 = INT64_MIN;
	uint16_t x264 = 94U;

    t7 = ((x261<<x262)-(x263==x264));

    if (t7 != 219) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint16_t x377 = 4U;
	static uint8_t x378 = 1U;
	uint16_t x379 = 28U;
	int32_t x380 = 2478047;

    t8 = ((x377<<x378)-(x379==x380));

    if (t8 != 8) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x425 = 0U;
	static volatile uint16_t x426 = 1U;
	int32_t x427 = 8551;

    t9 = ((x425<<x426)-(x427==x428));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x445 = 0U;
	uint8_t x446 = 2U;
	uint8_t x447 = 40U;
	volatile int8_t x448 = -1;
	int32_t t10 = -12181;

    t10 = ((x445<<x446)-(x447==x448));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x545 = UINT64_MAX;
	volatile int32_t x547 = INT32_MAX;
	int16_t x548 = -1;

    t11 = ((x545<<x546)-(x547==x548));

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x598 = 26;
	int8_t x599 = INT8_MAX;
	uint8_t x600 = 1U;
	volatile uint32_t t12 = 72U;

    t12 = ((x597<<x598)-(x599==x600));

    if (t12 != 1610612736U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x625 = INT32_MAX;
	int32_t x627 = INT32_MIN;
	uint8_t x628 = UINT8_MAX;
	volatile int32_t t13 = INT32_MAX;

    t13 = ((x625<<x626)-(x627==x628));

    if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x629 = 1053;
	static int8_t x630 = 1;
	int8_t x631 = -1;
	int8_t x632 = 27;
	int32_t t14 = 91;

    t14 = ((x629<<x630)-(x631==x632));

    if (t14 != 2106) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x745 = 0U;
	int16_t x747 = -1;
	static int8_t x748 = INT8_MIN;
	volatile uint32_t t15 = 1499903U;

    t15 = ((x745<<x746)-(x747==x748));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x765 = INT16_MAX;
	volatile uint8_t x766 = 0U;
	static int64_t x767 = -857048LL;
	int64_t x768 = INT64_MAX;
	int32_t t16 = 466569;

    t16 = ((x765<<x766)-(x767==x768));

    if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x829 = UINT8_MAX;
	uint32_t x830 = 14U;
	int32_t x831 = INT32_MAX;
	uint64_t x832 = 3987252359761LLU;

    t17 = ((x829<<x830)-(x831==x832));

    if (t17 != 4177920) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x871 = 1669U;

    t18 = ((x869<<x870)-(x871==x872));

    if (t18 != 14861129198339378072LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x921 = 249044909551856950LLU;
	int64_t x922 = 2LL;
	uint32_t x923 = UINT32_MAX;
	uint8_t x924 = 42U;
	uint64_t t19 = 2076235212LLU;

    t19 = ((x921<<x922)-(x923==x924));

    if (t19 != 996179638207427800LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x1017 = UINT32_MAX;
	uint8_t x1018 = 5U;
	int64_t x1019 = INT64_MIN;
	volatile int16_t x1020 = -47;
	volatile uint32_t t20 = 253U;

    t20 = ((x1017<<x1018)-(x1019==x1020));

    if (t20 != 4294967264U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x1038 = 7U;
	uint8_t x1039 = 64U;
	int64_t x1040 = INT64_MAX;
	volatile int32_t t21 = 70339294;

    t21 = ((x1037<<x1038)-(x1039==x1040));

    if (t21 != 7680) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x1089 = UINT8_MAX;
	int16_t x1090 = 2;
	int32_t x1091 = -1;
	uint64_t x1092 = 5545704LLU;
	int32_t t22 = -39;

    t22 = ((x1089<<x1090)-(x1091==x1092));

    if (t22 != 1020) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x1141 = UINT32_MAX;
	uint32_t x1143 = UINT32_MAX;
	uint8_t x1144 = 17U;
	uint32_t t23 = UINT32_MAX;

    t23 = ((x1141<<x1142)-(x1143==x1144));

    if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x1157 = 50;
	volatile int16_t x1160 = -1;
	volatile int32_t t24 = -594942473;

    t24 = ((x1157<<x1158)-(x1159==x1160));

    if (t24 != 400) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x1209 = 0;
	uint8_t x1210 = 29U;
	static int32_t x1211 = INT32_MIN;
	int8_t x1212 = INT8_MIN;
	volatile int32_t t25 = -14335584;

    t25 = ((x1209<<x1210)-(x1211==x1212));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x1213 = INT8_MAX;
	uint8_t x1214 = 2U;
	int32_t t26 = 81003496;

    t26 = ((x1213<<x1214)-(x1215==x1216));

    if (t26 != 508) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x1365 = 946132U;
	int16_t x1366 = 0;
	volatile int64_t x1368 = INT64_MIN;
	volatile uint32_t t27 = 1576545995U;

    t27 = ((x1365<<x1366)-(x1367==x1368));

    if (t27 != 946132U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x1501 = 14U;
	static volatile int16_t x1502 = 1;
	int8_t x1503 = INT8_MAX;

    t28 = ((x1501<<x1502)-(x1503==x1504));

    if (t28 != 28) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x1626 = 0;
	int8_t x1627 = INT8_MAX;
	uint32_t t29 = 4041U;

    t29 = ((x1625<<x1626)-(x1627==x1628));

    if (t29 != 23074332U) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1637 = 104;
	int8_t x1638 = 1;
	static int16_t x1639 = 3;
	int16_t x1640 = 23;
	int32_t t30 = -155;

    t30 = ((x1637<<x1638)-(x1639==x1640));

    if (t30 != 208) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x1641 = 106U;
	uint8_t x1642 = 4U;
	volatile uint32_t x1643 = UINT32_MAX;
	uint8_t x1644 = 1U;
	volatile int32_t t31 = 49573426;

    t31 = ((x1641<<x1642)-(x1643==x1644));

    if (t31 != 1696) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x1657 = 0U;
	uint16_t x1658 = 26U;
	int16_t x1659 = INT16_MIN;
	int16_t x1660 = -6582;
	int32_t t32 = -14827973;

    t32 = ((x1657<<x1658)-(x1659==x1660));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x1687 = -960940942450222LL;
	int64_t x1688 = INT64_MIN;
	volatile uint32_t t33 = 157573U;

    t33 = ((x1685<<x1686)-(x1687==x1688));

    if (t33 != 68791U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x1721 = UINT64_MAX;
	uint8_t x1722 = 15U;
	volatile int8_t x1723 = 10;
	uint8_t x1724 = 6U;

    t34 = ((x1721<<x1722)-(x1723==x1724));

    if (t34 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x1771 = UINT16_MAX;
	static uint8_t x1772 = 1U;
	uint32_t t35 = 1709U;

    t35 = ((x1769<<x1770)-(x1771==x1772));

    if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x1774 = 31;
	volatile int16_t x1775 = INT16_MAX;
	int16_t x1776 = 8;
	int32_t t36 = 0;

    t36 = ((x1773<<x1774)-(x1775==x1776));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x1857 = INT16_MAX;
	int16_t x1858 = 0;
	volatile uint32_t x1859 = UINT32_MAX;
	int64_t x1860 = -1LL;
	int32_t t37 = 0;

    t37 = ((x1857<<x1858)-(x1859==x1860));

    if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x1885 = INT16_MAX;
	static int8_t x1886 = 1;
	static volatile int32_t x1887 = 15;
	volatile int32_t t38 = -370525;

    t38 = ((x1885<<x1886)-(x1887==x1888));

    if (t38 != 65534) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x1909 = 0;
	volatile int64_t x1911 = INT64_MIN;
	int64_t x1912 = INT64_MIN;
	int32_t t39 = -5054545;

    t39 = ((x1909<<x1910)-(x1911==x1912));

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x1941 = 14826U;
	static volatile int32_t x1943 = INT32_MIN;
	volatile int8_t x1944 = 9;
	static int32_t t40 = -1922;

    t40 = ((x1941<<x1942)-(x1943==x1944));

    if (t40 != 29652) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x1951 = -1;
	uint8_t x1952 = UINT8_MAX;

    t41 = ((x1949<<x1950)-(x1951==x1952));

    if (t41 != 128624) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x2033 = 81;
	uint64_t x2034 = 0LLU;
	uint8_t x2036 = UINT8_MAX;
	int32_t t42 = -17;

    t42 = ((x2033<<x2034)-(x2035==x2036));

    if (t42 != 81) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x2109 = 2027U;
	volatile uint16_t x2110 = 5U;
	uint32_t x2111 = UINT32_MAX;
	int32_t x2112 = INT32_MIN;
	uint32_t t43 = 1542975607U;

    t43 = ((x2109<<x2110)-(x2111==x2112));

    if (t43 != 64864U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x2205 = 410;
	uint8_t x2206 = 6U;
	uint32_t x2207 = 30742508U;
	int64_t x2208 = -1LL;
	volatile int32_t t44 = 6044425;

    t44 = ((x2205<<x2206)-(x2207==x2208));

    if (t44 != 26240) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x2357 = 255385701LLU;
	static int8_t x2358 = 42;
	static uint8_t x2359 = 16U;
	static int8_t x2360 = 4;
	volatile uint64_t t45 = 134381947075043656LLU;

    t45 = ((x2357<<x2358)-(x2359==x2360));

    if (t45 != 16393546846326226944LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x2401 = 25U;
	static int64_t x2402 = 2LL;
	int16_t x2403 = -1;
	uint8_t x2404 = 4U;
	int32_t t46 = -7570216;

    t46 = ((x2401<<x2402)-(x2403==x2404));

    if (t46 != 100) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x2474 = 0;
	volatile int64_t x2475 = 177334720508706014LL;

    t47 = ((x2473<<x2474)-(x2475==x2476));

    if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x2517 = 2;
	uint8_t x2518 = 14U;
	static int16_t x2519 = -146;
	uint32_t x2520 = 4369373U;
	volatile int32_t t48 = 5501;

    t48 = ((x2517<<x2518)-(x2519==x2520));

    if (t48 != 32768) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x2689 = 1491;
	uint8_t x2690 = 0U;
	uint64_t x2691 = 24LLU;
	volatile int64_t x2692 = INT64_MAX;
	volatile int32_t t49 = 212414000;

    t49 = ((x2689<<x2690)-(x2691==x2692));

    if (t49 != 1491) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x2793 = 10224U;
	int16_t x2794 = 2;
	int8_t x2796 = INT8_MIN;
	volatile uint32_t t50 = 32135U;

    t50 = ((x2793<<x2794)-(x2795==x2796));

    if (t50 != 40896U) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint64_t x2821 = 265226LLU;
	static volatile uint16_t x2822 = 3U;
	volatile uint16_t x2823 = 10U;
	int16_t x2824 = INT16_MAX;
	volatile uint64_t t51 = 195943LLU;

    t51 = ((x2821<<x2822)-(x2823==x2824));

    if (t51 != 2121808LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x2881 = 214;
	int16_t x2882 = 5;
	volatile int64_t x2883 = -497LL;
	int32_t t52 = -10377;

    t52 = ((x2881<<x2882)-(x2883==x2884));

    if (t52 != 6848) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x2917 = 199611706LL;
	uint8_t x2918 = 10U;
	int16_t x2919 = INT16_MAX;
	volatile uint8_t x2920 = UINT8_MAX;
	volatile int64_t t53 = 862973794796387111LL;

    t53 = ((x2917<<x2918)-(x2919==x2920));

    if (t53 != 204402386944LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x2925 = 8U;
	volatile int32_t x2926 = 1;
	int32_t x2927 = 675602548;
	uint32_t x2928 = 32414U;
	volatile uint32_t t54 = 4U;

    t54 = ((x2925<<x2926)-(x2927==x2928));

    if (t54 != 16U) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x2929 = INT8_MAX;
	int64_t x2932 = -86809312816835LL;
	int32_t t55 = 332;

    t55 = ((x2929<<x2930)-(x2931==x2932));

    if (t55 != 254) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x2973 = UINT64_MAX;
	uint16_t x2974 = 0U;
	volatile uint16_t x2975 = 2U;
	volatile int16_t x2976 = INT16_MIN;
	uint64_t t56 = UINT64_MAX;

    t56 = ((x2973<<x2974)-(x2975==x2976));

    if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint64_t x3001 = 45885120LLU;
	int8_t x3003 = INT8_MIN;

    t57 = ((x3001<<x3002)-(x3003==x3004));

    if (t57 != 375890903040LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x3193 = UINT8_MAX;
	static int8_t x3194 = 0;
	int32_t x3195 = INT32_MIN;
	int8_t x3196 = INT8_MIN;
	volatile int32_t t58 = 1959900;

    t58 = ((x3193<<x3194)-(x3195==x3196));

    if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x3229 = 653823098586255156LLU;
	uint8_t x3230 = 5U;
	static uint8_t x3231 = 71U;
	volatile int16_t x3232 = 1628;
	volatile uint64_t t59 = 44958577485LLU;

    t59 = ((x3229<<x3230)-(x3231==x3232));

    if (t59 != 2475595081050613376LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x3353 = 1U;
	int32_t x3354 = 0;
	volatile int64_t x3355 = 3314894693693LL;
	int32_t x3356 = INT32_MAX;
	volatile int32_t t60 = -880333260;

    t60 = ((x3353<<x3354)-(x3355==x3356));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x3449 = 7905;
	uint32_t x3450 = 5U;
	volatile int32_t x3451 = 28412;
	uint32_t x3452 = 343792077U;

    t61 = ((x3449<<x3450)-(x3451==x3452));

    if (t61 != 252960) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x3457 = UINT16_MAX;
	int16_t x3459 = INT16_MAX;
	uint16_t x3460 = UINT16_MAX;
	static volatile int32_t t62 = 198;

    t62 = ((x3457<<x3458)-(x3459==x3460));

    if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x3471 = UINT16_MAX;
	int32_t x3472 = 26;

    t63 = ((x3469<<x3470)-(x3471==x3472));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x3637 = 3U;
	volatile int8_t x3638 = 5;
	static uint16_t x3639 = 4484U;
	volatile int16_t x3640 = -12583;
	int32_t t64 = -872;

    t64 = ((x3637<<x3638)-(x3639==x3640));

    if (t64 != 96) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x3649 = 6970;
	uint8_t x3650 = 1U;
	static int8_t x3652 = INT8_MIN;

    t65 = ((x3649<<x3650)-(x3651==x3652));

    if (t65 != 13940) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x3694 = 9U;
	volatile int32_t x3695 = -1;
	int16_t x3696 = INT16_MIN;
	static volatile int32_t t66 = 4;

    t66 = ((x3693<<x3694)-(x3695==x3696));

    if (t66 != 33553920) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x3857 = 131226698U;
	uint16_t x3858 = 18U;
	int8_t x3860 = INT8_MAX;
	uint32_t t67 = 1775987U;

    t67 = ((x3857<<x3858)-(x3859==x3860));

    if (t67 != 1898446848U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x3897 = INT16_MAX;
	uint16_t x3898 = 1U;
	int8_t x3899 = 1;
	int32_t x3900 = -149917;
	volatile int32_t t68 = -2494803;

    t68 = ((x3897<<x3898)-(x3899==x3900));

    if (t68 != 65534) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x4021 = 8U;
	static uint16_t x4022 = 2U;

    t69 = ((x4021<<x4022)-(x4023==x4024));

    if (t69 != 32U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x4033 = 1037830LLU;
	int16_t x4034 = 29;
	int8_t x4036 = INT8_MIN;
	static uint64_t t70 = 8918751455326875280LLU;

    t70 = ((x4033<<x4034)-(x4035==x4036));

    if (t70 != 557180738600960LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x4101 = INT16_MAX;
	volatile uint8_t x4102 = 15U;
	static uint16_t x4103 = 191U;
	int32_t x4104 = INT32_MAX;

    t71 = ((x4101<<x4102)-(x4103==x4104));

    if (t71 != 1073709056) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x4173 = 1010;
	uint16_t x4174 = 14U;
	static int64_t x4175 = -1LL;
	int16_t x4176 = -181;

    t72 = ((x4173<<x4174)-(x4175==x4176));

    if (t72 != 16547840) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x4190 = 0;
	int64_t x4191 = -1590729105958199LL;
	volatile int32_t t73 = -159;

    t73 = ((x4189<<x4190)-(x4191==x4192));

    if (t73 != 221) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x4241 = UINT16_MAX;
	static uint8_t x4242 = 4U;
	static int8_t x4243 = -1;
	volatile int8_t x4244 = INT8_MAX;

    t74 = ((x4241<<x4242)-(x4243==x4244));

    if (t74 != 1048560) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x4297 = UINT16_MAX;
	uint16_t x4298 = 6U;
	int64_t x4299 = 62LL;
	volatile uint32_t x4300 = UINT32_MAX;
	volatile int32_t t75 = 436425491;

    t75 = ((x4297<<x4298)-(x4299==x4300));

    if (t75 != 4194240) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x4341 = 5281434LL;
	volatile uint8_t x4342 = 1U;
	static int32_t x4343 = INT32_MIN;

    t76 = ((x4341<<x4342)-(x4343==x4344));

    if (t76 != 10562868LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x4433 = 7U;
	uint8_t x4434 = 0U;
	int16_t x4435 = INT16_MIN;
	int8_t x4436 = -7;
	int32_t t77 = 127920741;

    t77 = ((x4433<<x4434)-(x4435==x4436));

    if (t77 != 7) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x4459 = 560U;
	int32_t x4460 = INT32_MIN;
	volatile int32_t t78 = 38;

    t78 = ((x4457<<x4458)-(x4459==x4460));

    if (t78 != 510) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x4489 = 406918589U;
	uint16_t x4490 = 25U;
	int32_t x4491 = INT32_MIN;
	volatile uint32_t t79 = 2918U;

    t79 = ((x4489<<x4490)-(x4491==x4492));

    if (t79 != 2046820352U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x4506 = 3U;
	static int8_t x4507 = INT8_MAX;
	uint64_t t80 = 9470208248LLU;

    t80 = ((x4505<<x4506)-(x4507==x4508));

    if (t80 != 1551238024873912LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x4529 = 1039911668LL;
	volatile uint8_t x4530 = 1U;
	static volatile uint16_t x4531 = 551U;
	static uint8_t x4532 = UINT8_MAX;
	volatile int64_t t81 = -5788902534604348LL;

    t81 = ((x4529<<x4530)-(x4531==x4532));

    if (t81 != 2079823336LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x4858 = 11;
	uint16_t x4859 = UINT16_MAX;
	int8_t x4860 = INT8_MIN;
	int32_t t82 = 251068;

    t82 = ((x4857<<x4858)-(x4859==x4860));

    if (t82 != 134215680) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x4877 = 36U;
	static volatile uint64_t x4879 = 1083LLU;
	int16_t x4880 = INT16_MIN;
	static uint32_t t83 = 1938294U;

    t83 = ((x4877<<x4878)-(x4879==x4880));

    if (t83 != 36U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x4901 = 14239U;
	int16_t x4903 = -407;
	uint32_t t84 = 34501688U;

    t84 = ((x4901<<x4902)-(x4903==x4904));

    if (t84 != 911296U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x4938 = 0;
	int16_t x4939 = -1;
	int8_t x4940 = INT8_MIN;

    t85 = ((x4937<<x4938)-(x4939==x4940));

    if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x4998 = 0;
	volatile int16_t x4999 = -3;
	volatile int32_t t86 = 945;

    t86 = ((x4997<<x4998)-(x4999==x5000));

    if (t86 != 3583789) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint64_t x5061 = UINT64_MAX;
	static uint32_t x5062 = 3U;
	static uint64_t x5063 = 61LLU;
	volatile uint8_t x5064 = UINT8_MAX;
	volatile uint64_t t87 = 8428LLU;

    t87 = ((x5061<<x5062)-(x5063==x5064));

    if (t87 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x5105 = 137946U;
	uint8_t x5106 = 1U;
	volatile int64_t x5107 = INT64_MIN;
	int8_t x5108 = INT8_MAX;
	static volatile uint32_t t88 = 39494U;

    t88 = ((x5105<<x5106)-(x5107==x5108));

    if (t88 != 275892U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x5141 = 1U;
	volatile int8_t x5142 = 0;
	uint32_t x5143 = UINT32_MAX;
	int16_t x5144 = -1;
	int32_t t89 = 1;

    t89 = ((x5141<<x5142)-(x5143==x5144));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x5233 = 1252845515921799813LLU;
	int8_t x5234 = 13;
	int8_t x5235 = INT8_MAX;
	int8_t x5236 = INT8_MIN;
	static uint64_t t90 = 118432512754453LLU;

    t90 = ((x5233<<x5234)-(x5235==x5236));

    if (t90 != 6920761448873369600LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x5341 = 6U;
	int8_t x5342 = 26;
	volatile uint8_t x5343 = 121U;
	int64_t x5344 = -1LL;
	volatile int32_t t91 = -1;

    t91 = ((x5341<<x5342)-(x5343==x5344));

    if (t91 != 402653184) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x5361 = 3;
	volatile int16_t x5362 = 1;
	uint32_t x5363 = 1557833U;
	int16_t x5364 = INT16_MIN;
	int32_t t92 = 256201887;

    t92 = ((x5361<<x5362)-(x5363==x5364));

    if (t92 != 6) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x5433 = 2401180LL;
	static int8_t x5434 = 0;
	uint8_t x5435 = UINT8_MAX;
	int64_t x5436 = INT64_MAX;
	volatile int64_t t93 = -3537118673815744LL;

    t93 = ((x5433<<x5434)-(x5435==x5436));

    if (t93 != 2401180LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x5445 = 62U;
	uint16_t x5446 = 10U;
	int8_t x5448 = INT8_MIN;
	volatile int32_t t94 = 22970;

    t94 = ((x5445<<x5446)-(x5447==x5448));

    if (t94 != 63488) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x5461 = 27;
	uint8_t x5462 = 20U;
	volatile int64_t x5463 = 50224721LL;
	int64_t x5464 = INT64_MIN;
	volatile int32_t t95 = -50;

    t95 = ((x5461<<x5462)-(x5463==x5464));

    if (t95 != 28311552) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x5637 = UINT32_MAX;
	int8_t x5638 = 0;
	static uint64_t x5639 = UINT64_MAX;
	uint64_t x5640 = 3959LLU;
	uint32_t t96 = UINT32_MAX;

    t96 = ((x5637<<x5638)-(x5639==x5640));

    if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x5710 = 5;
	uint32_t x5711 = 88653U;
	int16_t x5712 = 211;

    t97 = ((x5709<<x5710)-(x5711==x5712));

    if (t97 != 1792) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x5762 = 4;
	static int32_t x5764 = INT32_MIN;
	static volatile int32_t t98 = -219400;

    t98 = ((x5761<<x5762)-(x5763==x5764));

    if (t98 != 524272) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x5789 = UINT16_MAX;
	static uint8_t x5790 = 0U;
	int32_t x5792 = -107058;

    t99 = ((x5789<<x5790)-(x5791==x5792));

    if (t99 != 65535) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x5825 = 18;
	uint64_t x5827 = UINT64_MAX;
	int32_t t100 = -883584926;

    t100 = ((x5825<<x5826)-(x5827==x5828));

    if (t100 != 144) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x5889 = 89U;
	static int8_t x5890 = 14;
	static int64_t x5891 = 16070163061448389LL;
	int32_t t101 = 328;

    t101 = ((x5889<<x5890)-(x5891==x5892));

    if (t101 != 1458176) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x5925 = 3U;
	int64_t x5927 = -1LL;
	int16_t x5928 = 2305;
	uint32_t t102 = 1806002768U;

    t102 = ((x5925<<x5926)-(x5927==x5928));

    if (t102 != 6291456U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x6029 = 222U;
	int16_t x6030 = 3;
	int8_t x6031 = -2;
	volatile int32_t t103 = 245385212;

    t103 = ((x6029<<x6030)-(x6031==x6032));

    if (t103 != 1776) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x6057 = 3U;
	uint32_t x6058 = 3U;
	static int16_t x6059 = 633;
	static uint32_t x6060 = 131555472U;
	volatile int32_t t104 = 372437;

    t104 = ((x6057<<x6058)-(x6059==x6060));

    if (t104 != 24) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x6261 = 1811073572044LLU;
	volatile uint8_t x6262 = 50U;
	uint8_t x6263 = 30U;
	int32_t x6264 = -85314530;
	static uint64_t t105 = 424043005LLU;

    t105 = ((x6261<<x6262)-(x6263==x6264));

    if (t105 != 8300134113243824128LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x6309 = 111384U;
	int8_t x6310 = 3;
	int32_t x6311 = INT32_MAX;
	volatile uint64_t x6312 = 180320319480LLU;
	static volatile uint32_t t106 = 491832566U;

    t106 = ((x6309<<x6310)-(x6311==x6312));

    if (t106 != 891072U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x6449 = 0U;
	uint8_t x6450 = 24U;
	uint32_t x6451 = UINT32_MAX;
	volatile int32_t t107 = -677057790;

    t107 = ((x6449<<x6450)-(x6451==x6452));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x6517 = 68992;
	uint64_t x6518 = 5LLU;
	int32_t t108 = 850;

    t108 = ((x6517<<x6518)-(x6519==x6520));

    if (t108 != 2207744) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x6559 = 2467U;
	uint64_t x6560 = 884LLU;
	volatile int32_t t109 = -3905;

    t109 = ((x6557<<x6558)-(x6559==x6560));

    if (t109 != 268427264) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x6653 = UINT16_MAX;
	int8_t x6656 = INT8_MIN;
	int32_t t110 = 1;

    t110 = ((x6653<<x6654)-(x6655==x6656));

    if (t110 != 16776960) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x6657 = 1U;
	volatile uint16_t x6658 = 4U;
	volatile uint16_t x6659 = UINT16_MAX;
	int32_t x6660 = -3;
	static int32_t t111 = -477;

    t111 = ((x6657<<x6658)-(x6659==x6660));

    if (t111 != 16) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x6678 = 11;
	static uint64_t x6679 = 624220168195568LLU;
	static uint8_t x6680 = UINT8_MAX;
	uint64_t t112 = 8780309583246886LLU;

    t112 = ((x6677<<x6678)-(x6679==x6680));

    if (t112 != 376264704LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x6737 = 0U;
	uint64_t x6739 = UINT64_MAX;
	volatile uint16_t x6740 = UINT16_MAX;
	volatile uint32_t t113 = 58U;

    t113 = ((x6737<<x6738)-(x6739==x6740));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x6753 = 1971U;
	static int8_t x6754 = 5;
	int64_t x6756 = -141179069979LL;
	uint32_t t114 = 30805576U;

    t114 = ((x6753<<x6754)-(x6755==x6756));

    if (t114 != 63072U) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x6785 = INT16_MAX;
	volatile uint16_t x6786 = 12U;
	uint16_t x6788 = UINT16_MAX;

    t115 = ((x6785<<x6786)-(x6787==x6788));

    if (t115 != 134213632) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x6825 = INT8_MAX;
	uint16_t x6826 = 0U;
	static uint32_t x6827 = UINT32_MAX;
	int16_t x6828 = INT16_MIN;
	volatile int32_t t116 = 19520;

    t116 = ((x6825<<x6826)-(x6827==x6828));

    if (t116 != 127) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x6913 = 2U;
	int8_t x6914 = 1;
	int32_t x6916 = INT32_MIN;

    t117 = ((x6913<<x6914)-(x6915==x6916));

    if (t117 != 4U) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x7005 = INT16_MAX;
	static uint32_t x7006 = 5U;
	uint8_t x7008 = 7U;
	int32_t t118 = 308770;

    t118 = ((x7005<<x7006)-(x7007==x7008));

    if (t118 != 1048544) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x7061 = INT8_MAX;
	int16_t x7062 = 10;
	int8_t x7063 = INT8_MIN;
	int32_t x7064 = 21807137;
	volatile int32_t t119 = -12558344;

    t119 = ((x7061<<x7062)-(x7063==x7064));

    if (t119 != 130048) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x7409 = 807U;
	uint8_t x7410 = 0U;
	int64_t x7412 = -1LL;

    t120 = ((x7409<<x7410)-(x7411==x7412));

    if (t120 != 807) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x7561 = 2U;
	int32_t x7562 = 9;
	int16_t x7563 = INT16_MIN;
	static int32_t x7564 = INT32_MAX;
	static uint32_t t121 = 2779526U;

    t121 = ((x7561<<x7562)-(x7563==x7564));

    if (t121 != 1024U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x7589 = INT8_MAX;
	static volatile uint8_t x7590 = 14U;
	uint16_t x7592 = UINT16_MAX;

    t122 = ((x7589<<x7590)-(x7591==x7592));

    if (t122 != 2080768) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x7601 = UINT32_MAX;
	uint32_t x7603 = 2700516U;
	volatile uint32_t t123 = 1U;

    t123 = ((x7601<<x7602)-(x7603==x7604));

    if (t123 != 4294967288U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x7613 = UINT64_MAX;
	uint8_t x7614 = 1U;
	volatile int64_t x7615 = 1407524218105743LL;
	uint32_t x7616 = 596316U;
	static uint64_t t124 = 365650874010565878LLU;

    t124 = ((x7613<<x7614)-(x7615==x7616));

    if (t124 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x7665 = 201U;
	int8_t x7666 = 1;
	int8_t x7668 = -12;
	int32_t t125 = 0;

    t125 = ((x7665<<x7666)-(x7667==x7668));

    if (t125 != 402) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x7798 = 6;
	static int8_t x7799 = INT8_MIN;
	int32_t x7800 = INT32_MIN;

    t126 = ((x7797<<x7798)-(x7799==x7800));

    if (t126 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x7805 = 2373U;
	volatile int8_t x7807 = INT8_MIN;
	int32_t x7808 = -1;
	volatile int32_t t127 = -52785;

    t127 = ((x7805<<x7806)-(x7807==x7808));

    if (t127 != 4746) { NG(); } else { ; }
	
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


    return 0;
}



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

int8_t x3 = -1;
static int8_t x4 = INT8_MIN;
int8_t x7 = INT8_MIN;
static int8_t x15 = -1;
uint64_t x17 = 25097LLU;
uint8_t x19 = 20U;
uint8_t x22 = 19U;
volatile int16_t x23 = INT16_MAX;
volatile uint8_t x38 = 29U;
int64_t x50 = INT64_MAX;
uint8_t x54 = 30U;
int32_t t10 = -637999294;
int8_t x72 = INT8_MAX;
static volatile int8_t x74 = INT8_MIN;
static volatile uint64_t x77 = 8016686934819LLU;
uint32_t x81 = 34605074U;
uint32_t t16 = 1035371937U;
int8_t x92 = INT8_MIN;
volatile int32_t t17 = 0;
int8_t x93 = INT8_MAX;
int64_t x96 = INT64_MIN;
volatile uint16_t x98 = UINT16_MAX;
static uint8_t x102 = 23U;
static int32_t x103 = INT32_MIN;
int16_t x111 = -1;
uint8_t x114 = 6U;
volatile uint32_t t23 = 445U;
volatile int8_t x118 = INT8_MAX;
volatile int16_t x127 = 159;
uint8_t x128 = 114U;
int32_t x135 = INT32_MIN;
volatile int64_t t27 = -28519237934LL;
int8_t x138 = INT8_MIN;
int8_t x139 = INT8_MAX;
uint8_t x149 = UINT8_MAX;
int32_t t31 = 0;
uint32_t x161 = UINT32_MAX;
volatile int32_t x166 = -31548750;
int16_t x169 = -4;
int16_t x171 = INT16_MIN;
int64_t x173 = INT64_MIN;
int64_t x177 = 42099LL;
volatile uint32_t x178 = UINT32_MAX;
volatile int16_t x185 = -1;
uint16_t x195 = 1U;
int32_t t41 = 1056612986;
volatile uint64_t x209 = 16810744068LLU;
static uint64_t t43 = 3LLU;
uint8_t x220 = UINT8_MAX;
volatile int16_t x222 = INT16_MIN;
int32_t x236 = INT32_MAX;
int32_t x252 = INT32_MAX;
static volatile int32_t t53 = -13092992;
uint32_t t54 = 148286U;
volatile int8_t x261 = -10;
int64_t x263 = INT64_MIN;
uint16_t x267 = 3U;
uint16_t x268 = 21485U;
volatile int64_t t56 = -5664LL;
int16_t x273 = 28;
static int32_t x275 = INT32_MIN;
int64_t x285 = -1LL;
volatile uint64_t x286 = 30864248301LLU;
uint64_t x287 = 527462299LLU;
int64_t t60 = 1LL;
volatile int16_t x293 = INT16_MAX;
static int32_t t62 = 892;
volatile int32_t x300 = -5738;
int32_t t63 = -329;
volatile int64_t t64 = -87549715995667239LL;
int32_t x322 = 15428;
uint64_t x324 = UINT64_MAX;
static volatile uint32_t x329 = UINT32_MAX;
int32_t x333 = INT32_MIN;
volatile int32_t t73 = 17446057;
int16_t x350 = -1;
int64_t x351 = 16479041683465LL;
static uint16_t x352 = UINT16_MAX;
int8_t x356 = INT8_MIN;
int8_t x358 = -35;
int32_t x360 = -1;
static int64_t t76 = -1786792218166106LL;
int16_t x362 = INT16_MAX;
volatile int64_t x364 = INT64_MIN;
static int8_t x366 = -1;
int32_t x368 = -1;
uint32_t t79 = 272U;
volatile uint32_t x373 = 44U;
volatile int32_t x375 = INT32_MAX;
int16_t x377 = INT16_MAX;
int32_t x393 = INT32_MIN;
int8_t x398 = INT8_MIN;
volatile int16_t x399 = INT16_MIN;
static int16_t x400 = INT16_MAX;
static volatile uint64_t t84 = 178763437LLU;
uint64_t x405 = 611177LLU;
int8_t x410 = -11;
int32_t x416 = INT32_MAX;
uint64_t x424 = 1668337LLU;
static int32_t x427 = INT32_MIN;
int64_t x431 = INT64_MAX;
uint32_t x433 = 3469804U;
uint16_t x458 = 1U;
int16_t x463 = INT16_MIN;
static int64_t x472 = -1LL;
int16_t x477 = INT16_MIN;
volatile int32_t t102 = 376;
int16_t x485 = INT16_MIN;
uint32_t x489 = 379U;
int16_t x490 = 1;
uint32_t x491 = 1506604U;
volatile int32_t x497 = 227;
uint64_t x500 = UINT64_MAX;
static int64_t x506 = INT64_MIN;
volatile uint32_t x507 = UINT32_MAX;
uint64_t x512 = 1036391LLU;
uint16_t x513 = UINT16_MAX;
int16_t x515 = INT16_MIN;
static int8_t x534 = INT8_MIN;
static int16_t x543 = INT16_MIN;
int64_t x551 = INT64_MIN;
volatile uint32_t x552 = 39585U;
int16_t x553 = INT16_MIN;
uint16_t x555 = 625U;
int32_t t116 = -996094085;
int32_t x571 = -11946869;
static int16_t x573 = -197;
int32_t x576 = INT32_MIN;
uint8_t x579 = 8U;
volatile int64_t t121 = -19225069LL;
static uint16_t x581 = UINT16_MAX;
volatile uint32_t t123 = 2310U;
int32_t x598 = INT32_MIN;
uint32_t x601 = UINT32_MAX;
volatile int32_t x610 = INT32_MIN;
int64_t x612 = -1LL;
volatile int16_t x615 = -1;
uint8_t x619 = 59U;
int32_t t129 = -10223;
int32_t x631 = INT32_MIN;
uint16_t x635 = 2826U;
uint8_t x636 = 4U;
volatile uint64_t t133 = 209938LLU;
volatile int64_t t134 = 7986LL;
volatile uint32_t x646 = 214U;
volatile uint32_t x648 = 26829U;
volatile int8_t x649 = 1;
int8_t x650 = INT8_MIN;
uint8_t x652 = 0U;
uint64_t x655 = 3LLU;
static uint32_t x657 = 24U;
volatile int16_t x664 = -1;
volatile int32_t t140 = -92167479;
int32_t x678 = -1;
int16_t x679 = INT16_MIN;
int64_t x680 = INT64_MIN;
int64_t x691 = INT64_MIN;
int8_t x701 = 1;
int16_t x717 = -1037;
int64_t x718 = INT64_MAX;
volatile int16_t x723 = 1;
uint8_t x728 = UINT8_MAX;
uint16_t x731 = 4391U;
static int16_t x733 = -1;
int8_t x736 = -1;
int32_t t154 = 223811094;
int64_t t155 = 8349829534909LL;
int64_t x742 = -1LL;
int16_t x750 = 143;
volatile int32_t x754 = INT32_MIN;
int8_t x755 = INT8_MAX;
uint8_t x760 = 50U;
int64_t x763 = 253590264844LL;
static volatile int32_t t160 = 5569;
int16_t x765 = -1;
int16_t x770 = -737;
volatile int32_t x771 = INT32_MAX;
static uint8_t x776 = 1U;
volatile int32_t x778 = INT32_MIN;
int64_t x780 = 2961524694966842073LL;
uint64_t x781 = 36482661LLU;
uint64_t t167 = 7493671901LLU;
static uint32_t x793 = 12948965U;
uint32_t x796 = 0U;
static int32_t x802 = 386096489;
static uint32_t x806 = 327730932U;
volatile int64_t x807 = 5070620175LL;
uint16_t x808 = 6108U;
volatile int64_t t172 = -366904569240298LL;
uint64_t t173 = 21955017025614LLU;
int32_t x825 = INT32_MIN;
int32_t x827 = -1;
uint16_t x829 = UINT16_MAX;
int32_t x841 = -1;
int8_t x848 = -1;
volatile uint64_t t180 = 479393544LLU;
int64_t x854 = 21LL;
int64_t x856 = INT64_MAX;
static uint16_t x873 = 23U;
volatile int64_t x874 = 64224360LL;
int8_t x879 = -6;
int64_t t184 = 60443558191691LL;
volatile int64_t t185 = 4238635955375736342LL;
int64_t x902 = -18909491LL;
int8_t x924 = INT8_MIN;
int16_t x932 = INT16_MIN;
static volatile int8_t x938 = -4;
int8_t x939 = INT8_MIN;
int8_t x940 = INT8_MAX;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	static uint16_t x2 = UINT16_MAX;
	volatile int32_t t0 = -968882925;

    t0 = ((x1*(x2>x3))*x4);

    if (t0 != 16384) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 15;
	uint64_t x6 = UINT64_MAX;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = -7;

    t1 = ((x5*(x6>x7))*x8);

    if (t1 != 3825) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -1;
	int32_t x14 = INT32_MIN;
	uint64_t x16 = 51061338101408LLU;
	uint64_t t2 = 9LLU;

    t2 = ((x13*(x14>x15))*x16);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x18 = 118181036;
	volatile uint32_t x20 = 1506U;
	static uint64_t t3 = 97LLU;

    t3 = ((x17*(x18>x19))*x20);

    if (t3 != 37796082LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = UINT64_MAX;
	int16_t x24 = INT16_MAX;
	uint64_t t4 = 2LLU;

    t4 = ((x21*(x22>x23))*x24);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x25 = 937920396U;
	uint32_t x26 = 3U;
	int8_t x27 = -1;
	static uint8_t x28 = 16U;
	static uint32_t t5 = 259081691U;

    t5 = ((x25*(x26>x27))*x28);

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x33 = -1;
	int8_t x34 = -1;
	int32_t x35 = 2;
	volatile int8_t x36 = INT8_MIN;
	static volatile int32_t t6 = -290;

    t6 = ((x33*(x34>x35))*x36);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x37 = 49U;
	uint16_t x39 = 490U;
	uint16_t x40 = 40U;
	static int32_t t7 = -1215;

    t7 = ((x37*(x38>x39))*x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = INT32_MIN;
	int16_t x42 = INT16_MIN;
	int64_t x43 = INT64_MAX;
	static int32_t x44 = 1332;
	static volatile int32_t t8 = 129676;

    t8 = ((x41*(x42>x43))*x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x49 = 0U;
	volatile int16_t x51 = -1;
	volatile int64_t x52 = INT64_MIN;
	static volatile int64_t t9 = 16716653LL;

    t9 = ((x49*(x50>x51))*x52);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x53 = INT8_MIN;
	static uint32_t x55 = UINT32_MAX;
	int16_t x56 = INT16_MIN;

    t10 = ((x53*(x54>x55))*x56);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x57 = -2LL;
	int64_t x58 = 0LL;
	int32_t x59 = 19548411;
	uint32_t x60 = UINT32_MAX;
	int64_t t11 = -19LL;

    t11 = ((x57*(x58>x59))*x60);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x65 = -7714;
	uint16_t x66 = 1257U;
	int16_t x67 = 1;
	int16_t x68 = -115;
	volatile int32_t t12 = 12637;

    t12 = ((x65*(x66>x67))*x68);

    if (t12 != 887110) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x69 = 578831U;
	int8_t x70 = INT8_MIN;
	static volatile uint8_t x71 = 0U;
	volatile uint32_t t13 = 515U;

    t13 = ((x69*(x70>x71))*x72);

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x73 = -1;
	static volatile int32_t x75 = -90772287;
	int32_t x76 = 20;
	volatile int32_t t14 = 1;

    t14 = ((x73*(x74>x75))*x76);

    if (t14 != -20) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x78 = INT16_MIN;
	int64_t x79 = 107924819295LL;
	uint16_t x80 = 1616U;
	static uint64_t t15 = 2049620LLU;

    t15 = ((x77*(x78>x79))*x80);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x82 = INT32_MAX;
	int8_t x83 = -1;
	volatile uint32_t x84 = UINT32_MAX;

    t16 = ((x81*(x82>x83))*x84);

    if (t16 != 4260362222U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x89 = 3U;
	static uint64_t x90 = 392128LLU;
	int64_t x91 = -13843188026235LL;

    t17 = ((x89*(x90>x91))*x92);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x94 = 5488U;
	int8_t x95 = -1;
	volatile int64_t t18 = -6322700962115LL;

    t18 = ((x93*(x94>x95))*x96);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x97 = 2153484231971684LLU;
	int32_t x99 = INT32_MAX;
	int32_t x100 = INT32_MAX;
	static uint64_t t19 = 14539501604LLU;

    t19 = ((x97*(x98>x99))*x100);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x101 = INT32_MIN;
	volatile uint32_t x104 = UINT32_MAX;
	uint32_t t20 = 8441778U;

    t20 = ((x101*(x102>x103))*x104);

    if (t20 != 2147483648U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x105 = 69U;
	int64_t x106 = -1LL;
	uint8_t x107 = 9U;
	static int32_t x108 = 262857291;
	int32_t t21 = -16332467;

    t21 = ((x105*(x106>x107))*x108);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x109 = 1059U;
	uint32_t x110 = 152338191U;
	int32_t x112 = INT32_MIN;
	uint32_t t22 = 1U;

    t22 = ((x109*(x110>x111))*x112);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x113 = UINT32_MAX;
	uint8_t x115 = 87U;
	volatile int8_t x116 = INT8_MIN;

    t23 = ((x113*(x114>x115))*x116);

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x117 = UINT16_MAX;
	int64_t x119 = 411382628428155LL;
	uint16_t x120 = 6U;
	static int32_t t24 = -287;

    t24 = ((x117*(x118>x119))*x120);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x121 = INT16_MIN;
	int8_t x122 = -1;
	int8_t x123 = 24;
	int16_t x124 = -1;
	volatile int32_t t25 = -2100430;

    t25 = ((x121*(x122>x123))*x124);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int16_t x125 = 0;
	int64_t x126 = INT64_MAX;
	volatile int32_t t26 = -206977409;

    t26 = ((x125*(x126>x127))*x128);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x133 = -169;
	uint64_t x134 = 2189771557957680055LLU;
	int64_t x136 = 6513LL;

    t27 = ((x133*(x134>x135))*x136);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x137 = -1;
	static int64_t x140 = 1LL;
	volatile int64_t t28 = 8190LL;

    t28 = ((x137*(x138>x139))*x140);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x141 = -1;
	int32_t x142 = -535379087;
	uint16_t x143 = 4945U;
	int16_t x144 = INT16_MAX;
	volatile int32_t t29 = -807;

    t29 = ((x141*(x142>x143))*x144);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x150 = -1LL;
	volatile int8_t x151 = INT8_MAX;
	volatile uint32_t x152 = 2368563U;
	uint32_t t30 = 1444367U;

    t30 = ((x149*(x150>x151))*x152);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x153 = 3U;
	static int32_t x154 = INT32_MIN;
	int8_t x155 = -1;
	volatile int16_t x156 = -6543;

    t31 = ((x153*(x154>x155))*x156);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x157 = 1U;
	int32_t x158 = INT32_MIN;
	int8_t x159 = INT8_MAX;
	int64_t x160 = -29931586439245LL;
	static int64_t t32 = -6546LL;

    t32 = ((x157*(x158>x159))*x160);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x162 = -1;
	int8_t x163 = INT8_MAX;
	uint32_t x164 = 176U;
	uint32_t t33 = 0U;

    t33 = ((x161*(x162>x163))*x164);

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x165 = INT32_MAX;
	int8_t x167 = INT8_MAX;
	volatile uint32_t x168 = UINT32_MAX;
	volatile uint32_t t34 = 50542661U;

    t34 = ((x165*(x166>x167))*x168);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x170 = 2048423130523LLU;
	volatile uint64_t x172 = UINT64_MAX;
	volatile uint64_t t35 = 1295069026LLU;

    t35 = ((x169*(x170>x171))*x172);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x174 = 111;
	static int16_t x175 = 4636;
	int8_t x176 = 40;
	volatile int64_t t36 = 71031676528238680LL;

    t36 = ((x173*(x174>x175))*x176);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x179 = 2006250795370LL;
	uint16_t x180 = 1976U;
	int64_t t37 = 3362191LL;

    t37 = ((x177*(x178>x179))*x180);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x186 = INT8_MIN;
	uint32_t x187 = 185309117U;
	volatile uint8_t x188 = UINT8_MAX;
	static volatile int32_t t38 = -7410266;

    t38 = ((x185*(x186>x187))*x188);

    if (t38 != -255) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x189 = INT64_MAX;
	static uint8_t x190 = 21U;
	uint32_t x191 = 5683U;
	volatile uint32_t x192 = 28032U;
	int64_t t39 = 100LL;

    t39 = ((x189*(x190>x191))*x192);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x193 = 31U;
	int16_t x194 = INT16_MIN;
	int32_t x196 = -1;
	int32_t t40 = 0;

    t40 = ((x193*(x194>x195))*x196);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x201 = INT8_MIN;
	static uint16_t x202 = 10584U;
	uint32_t x203 = UINT32_MAX;
	int32_t x204 = -1;

    t41 = ((x201*(x202>x203))*x204);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x205 = INT16_MIN;
	volatile int64_t x206 = -1LL;
	static int64_t x207 = INT64_MIN;
	uint32_t x208 = 27U;
	uint32_t t42 = 51200630U;

    t42 = ((x205*(x206>x207))*x208);

    if (t42 != 4294082560U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x210 = 23U;
	volatile int32_t x211 = -413;
	int32_t x212 = INT32_MIN;

    t43 = ((x209*(x210>x211))*x212);

    if (t43 != 792690150676103168LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x217 = INT16_MIN;
	static uint16_t x218 = UINT16_MAX;
	int8_t x219 = INT8_MIN;
	static volatile int32_t t44 = -4699;

    t44 = ((x217*(x218>x219))*x220);

    if (t44 != -8355840) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x221 = 7693875U;
	int32_t x223 = -1;
	int16_t x224 = INT16_MAX;
	uint32_t t45 = 1872U;

    t45 = ((x221*(x222>x223))*x224);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x225 = UINT8_MAX;
	static volatile int32_t x226 = INT32_MIN;
	uint8_t x227 = UINT8_MAX;
	int8_t x228 = INT8_MIN;
	int32_t t46 = 448;

    t46 = ((x225*(x226>x227))*x228);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x229 = UINT64_MAX;
	volatile uint64_t x230 = UINT64_MAX;
	static volatile int8_t x231 = -7;
	uint8_t x232 = UINT8_MAX;
	static volatile uint64_t t47 = 150490917125LLU;

    t47 = ((x229*(x230>x231))*x232);

    if (t47 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x233 = 55000362U;
	int16_t x234 = -1;
	static uint64_t x235 = UINT64_MAX;
	static volatile uint32_t t48 = 3217U;

    t48 = ((x233*(x234>x235))*x236);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x237 = 237138U;
	uint32_t x238 = 3U;
	uint32_t x239 = 4335U;
	int8_t x240 = INT8_MIN;
	uint32_t t49 = 612493496U;

    t49 = ((x237*(x238>x239))*x240);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x241 = -198987606LL;
	static int64_t x242 = -1LL;
	int64_t x243 = -2001579010223LL;
	static uint32_t x244 = 1U;
	int64_t t50 = 62614LL;

    t50 = ((x241*(x242>x243))*x244);

    if (t50 != -198987606LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x245 = 422280U;
	int8_t x246 = -49;
	volatile uint64_t x247 = 242655559280LLU;
	uint8_t x248 = 0U;
	volatile uint32_t t51 = 0U;

    t51 = ((x245*(x246>x247))*x248);

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x249 = UINT16_MAX;
	int64_t x250 = INT64_MIN;
	volatile int64_t x251 = INT64_MIN;
	int32_t t52 = -25588156;

    t52 = ((x249*(x250>x251))*x252);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x253 = UINT16_MAX;
	int8_t x254 = -1;
	volatile int16_t x255 = -1;
	volatile int32_t x256 = INT32_MIN;

    t53 = ((x253*(x254>x255))*x256);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint32_t x257 = 109U;
	static int64_t x258 = -1LL;
	volatile uint64_t x259 = UINT64_MAX;
	static int16_t x260 = 792;

    t54 = ((x257*(x258>x259))*x260);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x262 = INT8_MAX;
	int16_t x264 = 1;
	int32_t t55 = -40220638;

    t55 = ((x261*(x262>x263))*x264);

    if (t55 != -10) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x265 = 3311LL;
	int32_t x266 = -1;

    t56 = ((x265*(x266>x267))*x268);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x274 = UINT64_MAX;
	volatile uint8_t x276 = 3U;
	int32_t t57 = 68390;

    t57 = ((x273*(x274>x275))*x276);

    if (t57 != 84) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x277 = INT8_MIN;
	volatile int8_t x278 = INT8_MIN;
	uint16_t x279 = 6645U;
	int8_t x280 = INT8_MIN;
	volatile int32_t t58 = 0;

    t58 = ((x277*(x278>x279))*x280);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x281 = -2;
	int32_t x282 = 576;
	static int32_t x283 = -1;
	int8_t x284 = INT8_MAX;
	volatile int32_t t59 = -1251151;

    t59 = ((x281*(x282>x283))*x284);

    if (t59 != -254) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x288 = INT8_MIN;

    t60 = ((x285*(x286>x287))*x288);

    if (t60 != 128LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x289 = INT16_MIN;
	int64_t x290 = INT64_MAX;
	static int32_t x291 = INT32_MIN;
	static int8_t x292 = INT8_MIN;
	int32_t t61 = -5;

    t61 = ((x289*(x290>x291))*x292);

    if (t61 != 4194304) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x294 = UINT32_MAX;
	uint8_t x295 = 5U;
	int16_t x296 = -1;

    t62 = ((x293*(x294>x295))*x296);

    if (t62 != -32767) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x297 = -1;
	static volatile uint8_t x298 = 66U;
	int16_t x299 = -1;

    t63 = ((x297*(x298>x299))*x300);

    if (t63 != 5738) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x301 = 0U;
	int64_t x302 = INT64_MIN;
	int8_t x303 = INT8_MAX;
	int64_t x304 = -1LL;

    t64 = ((x301*(x302>x303))*x304);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x305 = -1LL;
	static uint8_t x306 = 2U;
	int64_t x307 = -1LL;
	uint32_t x308 = 13U;
	int64_t t65 = -101135518229390LL;

    t65 = ((x305*(x306>x307))*x308);

    if (t65 != -13LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x317 = INT32_MIN;
	int8_t x318 = INT8_MAX;
	uint32_t x319 = UINT32_MAX;
	static uint8_t x320 = 7U;
	int32_t t66 = 25;

    t66 = ((x317*(x318>x319))*x320);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x321 = 3000LLU;
	static uint32_t x323 = 5U;
	static volatile uint64_t t67 = 120LLU;

    t67 = ((x321*(x322>x323))*x324);

    if (t67 != 18446744073709548616LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x325 = 105U;
	volatile uint64_t x326 = 67480892926LLU;
	int64_t x327 = INT64_MAX;
	int16_t x328 = INT16_MAX;
	volatile int32_t t68 = 3;

    t68 = ((x325*(x326>x327))*x328);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x330 = INT64_MIN;
	volatile int64_t x331 = INT64_MAX;
	volatile int8_t x332 = -7;
	static uint32_t t69 = 77895668U;

    t69 = ((x329*(x330>x331))*x332);

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x334 = 0U;
	volatile int32_t x335 = INT32_MAX;
	int32_t x336 = -121;
	int32_t t70 = 1523726;

    t70 = ((x333*(x334>x335))*x336);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x337 = -1;
	uint32_t x338 = 18782U;
	uint16_t x339 = UINT16_MAX;
	uint32_t x340 = UINT32_MAX;
	uint32_t t71 = 28625U;

    t71 = ((x337*(x338>x339))*x340);

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x341 = 3262U;
	uint64_t x342 = 768982707677957LLU;
	uint64_t x343 = 123020096234415359LLU;
	volatile uint8_t x344 = 0U;
	volatile uint32_t t72 = 3936U;

    t72 = ((x341*(x342>x343))*x344);

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x345 = INT8_MAX;
	int8_t x346 = INT8_MIN;
	int8_t x347 = -13;
	static int16_t x348 = INT16_MAX;

    t73 = ((x345*(x346>x347))*x348);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x349 = -65949043;
	volatile int32_t t74 = -1;

    t74 = ((x349*(x350>x351))*x352);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x353 = -1;
	static int64_t x354 = INT64_MIN;
	uint16_t x355 = UINT16_MAX;
	volatile int32_t t75 = 658878365;

    t75 = ((x353*(x354>x355))*x356);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x357 = INT64_MAX;
	static volatile int16_t x359 = INT16_MAX;

    t76 = ((x357*(x358>x359))*x360);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x361 = 0;
	uint32_t x363 = 2808830U;
	int64_t t77 = 5LL;

    t77 = ((x361*(x362>x363))*x364);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x365 = 808U;
	int64_t x367 = INT64_MIN;
	volatile int32_t t78 = 4978;

    t78 = ((x365*(x366>x367))*x368);

    if (t78 != -808) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x369 = UINT16_MAX;
	static volatile int32_t x370 = INT32_MIN;
	static int16_t x371 = -2037;
	static volatile uint32_t x372 = 39054U;

    t79 = ((x369*(x370>x371))*x372);

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x374 = 2;
	int8_t x376 = -2;
	static uint32_t t80 = 2034244U;

    t80 = ((x373*(x374>x375))*x376);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x378 = -53;
	static int16_t x379 = -1;
	static uint16_t x380 = UINT16_MAX;
	static volatile int32_t t81 = 82135;

    t81 = ((x377*(x378>x379))*x380);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x385 = UINT16_MAX;
	static volatile int64_t x386 = INT64_MAX;
	static uint64_t x387 = 86082520167LLU;
	int8_t x388 = INT8_MIN;
	int32_t t82 = 82502642;

    t82 = ((x385*(x386>x387))*x388);

    if (t82 != -8388480) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x394 = INT8_MAX;
	volatile int64_t x395 = INT64_MAX;
	int8_t x396 = INT8_MAX;
	volatile int32_t t83 = -11;

    t83 = ((x393*(x394>x395))*x396);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x397 = 71442901572667LLU;

    t84 = ((x397*(x398>x399))*x400);

    if (t84 != 2340969555831579589LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x406 = INT64_MIN;
	int8_t x407 = INT8_MAX;
	uint64_t x408 = 36566566028262LLU;
	uint64_t t85 = 474692812580408795LLU;

    t85 = ((x405*(x406>x407))*x408);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x409 = -1388058;
	volatile int16_t x411 = -1;
	int64_t x412 = -66236925LL;
	int64_t t86 = -12405067064LL;

    t86 = ((x409*(x410>x411))*x412);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x413 = UINT64_MAX;
	int16_t x414 = INT16_MIN;
	int16_t x415 = 48;
	volatile uint64_t t87 = 58LLU;

    t87 = ((x413*(x414>x415))*x416);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x417 = UINT32_MAX;
	int8_t x418 = INT8_MIN;
	int32_t x419 = INT32_MIN;
	int16_t x420 = INT16_MAX;
	volatile uint32_t t88 = 328089U;

    t88 = ((x417*(x418>x419))*x420);

    if (t88 != 4294934529U) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x421 = -1;
	int32_t x422 = -213420;
	volatile int8_t x423 = -3;
	volatile uint64_t t89 = 14487052LLU;

    t89 = ((x421*(x422>x423))*x424);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x425 = -1;
	uint8_t x426 = 11U;
	static uint8_t x428 = 0U;
	int32_t t90 = 176231;

    t90 = ((x425*(x426>x427))*x428);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x429 = INT16_MAX;
	int64_t x430 = 63926396539445LL;
	volatile uint64_t x432 = UINT64_MAX;
	volatile uint64_t t91 = 12984022363292LLU;

    t91 = ((x429*(x430>x431))*x432);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x434 = INT32_MIN;
	int16_t x435 = INT16_MAX;
	uint8_t x436 = 29U;
	volatile uint32_t t92 = 2697095U;

    t92 = ((x433*(x434>x435))*x436);

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t x437 = -1LL;
	volatile int64_t x438 = INT64_MIN;
	int8_t x439 = -3;
	int8_t x440 = -1;
	volatile int64_t t93 = 89305894188LL;

    t93 = ((x437*(x438>x439))*x440);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x441 = UINT32_MAX;
	uint64_t x442 = 177LLU;
	volatile int32_t x443 = INT32_MIN;
	int16_t x444 = INT16_MIN;
	volatile uint32_t t94 = 4055352U;

    t94 = ((x441*(x442>x443))*x444);

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x445 = -1LL;
	uint32_t x446 = UINT32_MAX;
	uint32_t x447 = 9490U;
	volatile int64_t x448 = -1LL;
	int64_t t95 = -2832369549324LL;

    t95 = ((x445*(x446>x447))*x448);

    if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x449 = INT16_MIN;
	int64_t x450 = 389LL;
	int32_t x451 = INT32_MAX;
	static int32_t x452 = -1099407;
	static volatile int32_t t96 = 181464;

    t96 = ((x449*(x450>x451))*x452);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x453 = 1664266U;
	static int64_t x454 = 1975416LL;
	volatile int32_t x455 = INT32_MIN;
	static int16_t x456 = INT16_MAX;
	static uint32_t t97 = 321861U;

    t97 = ((x453*(x454>x455))*x456);

    if (t97 != 2993396470U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x457 = UINT64_MAX;
	volatile int32_t x459 = -72210240;
	int16_t x460 = INT16_MAX;
	volatile uint64_t t98 = 2LLU;

    t98 = ((x457*(x458>x459))*x460);

    if (t98 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x461 = INT8_MIN;
	int8_t x462 = INT8_MIN;
	int16_t x464 = INT16_MIN;
	static volatile int32_t t99 = 8;

    t99 = ((x461*(x462>x463))*x464);

    if (t99 != 4194304) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x465 = INT32_MAX;
	volatile uint32_t x466 = 3827U;
	int16_t x467 = INT16_MIN;
	int8_t x468 = 1;
	volatile int32_t t100 = -1;

    t100 = ((x465*(x466>x467))*x468);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x469 = INT32_MIN;
	static uint8_t x470 = 123U;
	int16_t x471 = INT16_MAX;
	volatile int64_t t101 = 106941LL;

    t101 = ((x469*(x470>x471))*x472);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x478 = -16894555788LL;
	int64_t x479 = -1LL;
	int16_t x480 = INT16_MIN;

    t102 = ((x477*(x478>x479))*x480);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x481 = INT32_MIN;
	int32_t x482 = 1;
	uint16_t x483 = UINT16_MAX;
	static int64_t x484 = 289314189556813LL;
	volatile int64_t t103 = -25193LL;

    t103 = ((x481*(x482>x483))*x484);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x486 = INT64_MAX;
	volatile int32_t x487 = INT32_MIN;
	volatile int16_t x488 = INT16_MIN;
	volatile int32_t t104 = -532;

    t104 = ((x485*(x486>x487))*x488);

    if (t104 != 1073741824) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x492 = INT64_MAX;
	volatile int64_t t105 = -8383402493811091LL;

    t105 = ((x489*(x490>x491))*x492);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x493 = INT16_MIN;
	int16_t x494 = INT16_MIN;
	uint64_t x495 = 1601932486230LLU;
	int16_t x496 = INT16_MIN;
	volatile int32_t t106 = 1365;

    t106 = ((x493*(x494>x495))*x496);

    if (t106 != 1073741824) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x498 = INT32_MIN;
	static uint16_t x499 = 24U;
	volatile uint64_t t107 = 1022391171753684220LLU;

    t107 = ((x497*(x498>x499))*x500);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x505 = UINT8_MAX;
	int32_t x508 = INT32_MIN;
	int32_t t108 = 95;

    t108 = ((x505*(x506>x507))*x508);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x509 = 77U;
	volatile int64_t x510 = -7865LL;
	int8_t x511 = -1;
	volatile uint64_t t109 = 1745096822LLU;

    t109 = ((x509*(x510>x511))*x512);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x514 = 4994564U;
	static volatile int64_t x516 = INT64_MAX;
	int64_t t110 = -98486LL;

    t110 = ((x513*(x514>x515))*x516);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x521 = INT64_MAX;
	static uint8_t x522 = 0U;
	volatile uint64_t x523 = UINT64_MAX;
	int32_t x524 = INT32_MIN;
	static volatile int64_t t111 = -1221870836393959LL;

    t111 = ((x521*(x522>x523))*x524);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x529 = INT16_MIN;
	uint32_t x530 = 19U;
	int8_t x531 = 0;
	volatile int16_t x532 = INT16_MAX;
	static volatile int32_t t112 = 586;

    t112 = ((x529*(x530>x531))*x532);

    if (t112 != -1073709056) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x533 = INT8_MIN;
	static volatile int32_t x535 = -132665514;
	int16_t x536 = INT16_MIN;
	int32_t t113 = 0;

    t113 = ((x533*(x534>x535))*x536);

    if (t113 != 4194304) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x541 = UINT32_MAX;
	int32_t x542 = INT32_MIN;
	static uint8_t x544 = 4U;
	uint32_t t114 = 798187U;

    t114 = ((x541*(x542>x543))*x544);

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x549 = INT16_MAX;
	int16_t x550 = INT16_MIN;
	uint32_t t115 = 7U;

    t115 = ((x549*(x550>x551))*x552);

    if (t115 != 1297081695U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x554 = UINT32_MAX;
	uint8_t x556 = 23U;

    t116 = ((x553*(x554>x555))*x556);

    if (t116 != -753664) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x557 = UINT8_MAX;
	int64_t x558 = -854083581450LL;
	int16_t x559 = INT16_MAX;
	int16_t x560 = INT16_MAX;
	static volatile int32_t t117 = 27553;

    t117 = ((x557*(x558>x559))*x560);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x561 = 36U;
	int8_t x562 = INT8_MAX;
	uint8_t x563 = 2U;
	int64_t x564 = 1594940675398LL;
	int64_t t118 = -507904721LL;

    t118 = ((x561*(x562>x563))*x564);

    if (t118 != 57417864314328LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x569 = 235622345U;
	int8_t x570 = -1;
	static int16_t x572 = -1;
	static uint32_t t119 = 43U;

    t119 = ((x569*(x570>x571))*x572);

    if (t119 != 4059344951U) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x574 = -58031LL;
	int32_t x575 = INT32_MAX;
	volatile int32_t t120 = -18233561;

    t120 = ((x573*(x574>x575))*x576);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x577 = -1LL;
	int64_t x578 = INT64_MIN;
	int32_t x580 = 2;

    t121 = ((x577*(x578>x579))*x580);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x582 = -1;
	static int16_t x583 = 3;
	static volatile uint16_t x584 = UINT16_MAX;
	int32_t t122 = -55279414;

    t122 = ((x581*(x582>x583))*x584);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x593 = 0U;
	volatile uint16_t x594 = UINT16_MAX;
	int32_t x595 = -762363;
	volatile int32_t x596 = INT32_MIN;

    t123 = ((x593*(x594>x595))*x596);

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x597 = 8508U;
	volatile int16_t x599 = -2888;
	volatile uint64_t x600 = UINT64_MAX;
	uint64_t t124 = 522921LLU;

    t124 = ((x597*(x598>x599))*x600);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x602 = UINT8_MAX;
	int32_t x603 = INT32_MIN;
	volatile uint32_t x604 = 493853658U;
	uint32_t t125 = 205307783U;

    t125 = ((x601*(x602>x603))*x604);

    if (t125 != 3801113638U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x605 = UINT64_MAX;
	int8_t x606 = INT8_MIN;
	int8_t x607 = 3;
	volatile int16_t x608 = 27;
	static uint64_t t126 = 230LLU;

    t126 = ((x605*(x606>x607))*x608);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x609 = -62959889500438LL;
	int8_t x611 = INT8_MIN;
	volatile int64_t t127 = -1748590460LL;

    t127 = ((x609*(x610>x611))*x612);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x613 = -1LL;
	int8_t x614 = -1;
	uint64_t x616 = 1LLU;
	static volatile uint64_t t128 = 36390244LLU;

    t128 = ((x613*(x614>x615))*x616);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x617 = INT16_MIN;
	int8_t x618 = INT8_MIN;
	uint8_t x620 = 39U;

    t129 = ((x617*(x618>x619))*x620);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x621 = 15025925844441LLU;
	volatile int16_t x622 = INT16_MIN;
	int64_t x623 = -141637298320LL;
	uint16_t x624 = 19U;
	volatile uint64_t t130 = 48345721023118747LLU;

    t130 = ((x621*(x622>x623))*x624);

    if (t130 != 285492591044379LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x625 = -11;
	volatile uint16_t x626 = UINT16_MAX;
	uint64_t x627 = 13465694491LLU;
	int32_t x628 = 4743;
	int32_t t131 = -912070519;

    t131 = ((x625*(x626>x627))*x628);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x629 = UINT16_MAX;
	int16_t x630 = INT16_MIN;
	volatile uint32_t x632 = 9509U;
	uint32_t t132 = 1999462237U;

    t132 = ((x629*(x630>x631))*x632);

    if (t132 != 623172315U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x633 = 2886773LLU;
	int32_t x634 = INT32_MIN;

    t133 = ((x633*(x634>x635))*x636);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x637 = 0;
	volatile int8_t x638 = -1;
	volatile int8_t x639 = -1;
	int64_t x640 = INT64_MIN;

    t134 = ((x637*(x638>x639))*x640);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x641 = INT8_MIN;
	int16_t x642 = INT16_MIN;
	int16_t x643 = INT16_MAX;
	volatile uint64_t x644 = 121LLU;
	uint64_t t135 = 2596526LLU;

    t135 = ((x641*(x642>x643))*x644);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x645 = INT8_MAX;
	uint32_t x647 = 79U;
	static uint32_t t136 = 715423900U;

    t136 = ((x645*(x646>x647))*x648);

    if (t136 != 3407283U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x651 = -1;
	volatile int32_t t137 = -1;

    t137 = ((x649*(x650>x651))*x652);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x653 = 5U;
	static int64_t x654 = INT64_MIN;
	int32_t x656 = 887;
	volatile int32_t t138 = -784756;

    t138 = ((x653*(x654>x655))*x656);

    if (t138 != 4435) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x658 = 2;
	int64_t x659 = 124LL;
	static int64_t x660 = INT64_MAX;
	int64_t t139 = -4973543154LL;

    t139 = ((x657*(x658>x659))*x660);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x661 = INT16_MIN;
	volatile int8_t x662 = -1;
	static uint8_t x663 = 42U;

    t140 = ((x661*(x662>x663))*x664);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x665 = 0U;
	volatile uint64_t x666 = 1670LLU;
	int64_t x667 = -322267663482030414LL;
	volatile int32_t x668 = 132825121;
	static volatile int32_t t141 = 29;

    t141 = ((x665*(x666>x667))*x668);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int8_t x669 = INT8_MAX;
	uint32_t x670 = 519U;
	volatile int32_t x671 = INT32_MAX;
	uint32_t x672 = 1U;
	uint32_t t142 = 3U;

    t142 = ((x669*(x670>x671))*x672);

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x677 = UINT64_MAX;
	static uint64_t t143 = 3LLU;

    t143 = ((x677*(x678>x679))*x680);

    if (t143 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x681 = 605794152264LLU;
	uint32_t x682 = 405U;
	int64_t x683 = INT64_MIN;
	int16_t x684 = 1;
	volatile uint64_t t144 = 162672LLU;

    t144 = ((x681*(x682>x683))*x684);

    if (t144 != 605794152264LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x689 = INT8_MAX;
	static volatile int64_t x690 = INT64_MAX;
	int8_t x692 = INT8_MIN;
	static volatile int32_t t145 = 23815;

    t145 = ((x689*(x690>x691))*x692);

    if (t145 != -16256) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x693 = -316294LL;
	int32_t x694 = 8382158;
	int8_t x695 = -26;
	uint16_t x696 = UINT16_MAX;
	volatile int64_t t146 = 5828549586599LL;

    t146 = ((x693*(x694>x695))*x696);

    if (t146 != -20728327290LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x702 = UINT64_MAX;
	volatile int64_t x703 = 113091668261949329LL;
	int32_t x704 = INT32_MIN;
	static volatile int32_t t147 = INT32_MIN;

    t147 = ((x701*(x702>x703))*x704);

    if (t147 != INT32_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x709 = 3756LLU;
	uint32_t x710 = 66467U;
	int64_t x711 = 1109256580LL;
	uint64_t x712 = 5086192912931443LLU;
	static volatile uint64_t t148 = 3811865560LLU;

    t148 = ((x709*(x710>x711))*x712);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x713 = INT8_MIN;
	int16_t x714 = -45;
	static int32_t x715 = INT32_MAX;
	uint8_t x716 = UINT8_MAX;
	static volatile int32_t t149 = 19;

    t149 = ((x713*(x714>x715))*x716);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x719 = -1LL;
	uint16_t x720 = UINT16_MAX;
	static int32_t t150 = -3348;

    t150 = ((x717*(x718>x719))*x720);

    if (t150 != -67959795) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x721 = INT32_MIN;
	uint32_t x722 = 672029106U;
	static volatile uint32_t x724 = 108U;
	volatile uint32_t t151 = 3866160U;

    t151 = ((x721*(x722>x723))*x724);

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x725 = 26;
	int32_t x726 = INT32_MIN;
	int32_t x727 = -925;
	static volatile int32_t t152 = -24091;

    t152 = ((x725*(x726>x727))*x728);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x729 = 23;
	static int32_t x730 = INT32_MAX;
	uint64_t x732 = 29831LLU;
	uint64_t t153 = 6443556742273598LLU;

    t153 = ((x729*(x730>x731))*x732);

    if (t153 != 686113LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x734 = -1002;
	volatile int64_t x735 = 7773611099LL;

    t154 = ((x733*(x734>x735))*x736);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x737 = INT64_MIN;
	int64_t x738 = -1LL;
	static uint32_t x739 = 66751745U;
	static volatile int64_t x740 = -15730550535LL;

    t155 = ((x737*(x738>x739))*x740);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x741 = 10916089277998707LL;
	static int64_t x743 = -1LL;
	int64_t x744 = -1LL;
	int64_t t156 = 543268298694537LL;

    t156 = ((x741*(x742>x743))*x744);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x749 = 4572969U;
	int8_t x751 = INT8_MIN;
	static int16_t x752 = INT16_MAX;
	volatile uint32_t t157 = 33U;

    t157 = ((x749*(x750>x751))*x752);

    if (t157 != 3813587159U) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x753 = INT8_MIN;
	int32_t x756 = -1;
	static int32_t t158 = 28622;

    t158 = ((x753*(x754>x755))*x756);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x757 = INT16_MIN;
	int8_t x758 = INT8_MIN;
	static uint64_t x759 = 7053552483262LLU;
	volatile int32_t t159 = 61;

    t159 = ((x757*(x758>x759))*x760);

    if (t159 != -1638400) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x761 = -1;
	static int32_t x762 = -1;
	int16_t x764 = INT16_MAX;

    t160 = ((x761*(x762>x763))*x764);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x766 = -6;
	uint16_t x767 = 110U;
	int64_t x768 = -1LL;
	volatile int64_t t161 = 6058003LL;

    t161 = ((x765*(x766>x767))*x768);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x769 = 1;
	int8_t x772 = -1;
	volatile int32_t t162 = -25003387;

    t162 = ((x769*(x770>x771))*x772);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x773 = -1;
	static int64_t x774 = 0LL;
	uint32_t x775 = 166092U;
	static int32_t t163 = -2714933;

    t163 = ((x773*(x774>x775))*x776);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x777 = -1804549365LL;
	int8_t x779 = -1;
	volatile int64_t t164 = -2LL;

    t164 = ((x777*(x778>x779))*x780);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x782 = UINT32_MAX;
	int16_t x783 = 529;
	volatile int8_t x784 = -1;
	static uint64_t t165 = 656325LLU;

    t165 = ((x781*(x782>x783))*x784);

    if (t165 != 18446744073673068955LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x785 = INT8_MIN;
	int32_t x786 = INT32_MIN;
	int64_t x787 = -1LL;
	static int16_t x788 = INT16_MIN;
	int32_t t166 = 30205229;

    t166 = ((x785*(x786>x787))*x788);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x789 = UINT8_MAX;
	int32_t x790 = -369328;
	volatile int64_t x791 = 138677132LL;
	uint64_t x792 = 696794729LLU;

    t167 = ((x789*(x790>x791))*x792);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x794 = 25735LLU;
	static int32_t x795 = INT32_MAX;
	volatile uint32_t t168 = 89267U;

    t168 = ((x793*(x794>x795))*x796);

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x797 = 3U;
	int16_t x798 = INT16_MAX;
	uint32_t x799 = UINT32_MAX;
	static volatile int64_t x800 = -1368LL;
	int64_t t169 = -6431835811737423LL;

    t169 = ((x797*(x798>x799))*x800);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x801 = INT8_MAX;
	uint16_t x803 = 1122U;
	int16_t x804 = INT16_MIN;
	volatile int32_t t170 = 15;

    t170 = ((x801*(x802>x803))*x804);

    if (t170 != -4161536) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x805 = -1LL;
	int64_t t171 = 104256LL;

    t171 = ((x805*(x806>x807))*x808);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x809 = 4U;
	static int16_t x810 = INT16_MAX;
	uint32_t x811 = 15967902U;
	volatile int64_t x812 = -104473865975917267LL;

    t172 = ((x809*(x810>x811))*x812);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x813 = -14384;
	static int8_t x814 = INT8_MIN;
	uint16_t x815 = UINT16_MAX;
	volatile uint64_t x816 = 1136187960905472LLU;

    t173 = ((x813*(x814>x815))*x816);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x817 = INT64_MIN;
	volatile int64_t x818 = INT64_MIN;
	static int32_t x819 = INT32_MAX;
	int8_t x820 = INT8_MIN;
	int64_t t174 = -607LL;

    t174 = ((x817*(x818>x819))*x820);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x826 = -1860367;
	int8_t x828 = INT8_MAX;
	volatile int32_t t175 = -1073755;

    t175 = ((x825*(x826>x827))*x828);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x830 = INT64_MIN;
	int16_t x831 = -113;
	uint8_t x832 = 125U;
	int32_t t176 = -4622;

    t176 = ((x829*(x830>x831))*x832);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x833 = UINT8_MAX;
	volatile int8_t x834 = 1;
	uint8_t x835 = 1U;
	volatile int16_t x836 = INT16_MAX;
	int32_t t177 = 126;

    t177 = ((x833*(x834>x835))*x836);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x842 = -15293;
	volatile uint8_t x843 = UINT8_MAX;
	int32_t x844 = INT32_MIN;
	volatile int32_t t178 = -54;

    t178 = ((x841*(x842>x843))*x844);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x845 = -6587;
	int64_t x846 = -14227505LL;
	volatile int32_t x847 = INT32_MIN;
	int32_t t179 = -1;

    t179 = ((x845*(x846>x847))*x848);

    if (t179 != 6587) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint64_t x849 = 23349656300LLU;
	int16_t x850 = 1;
	uint32_t x851 = 106017327U;
	volatile int16_t x852 = INT16_MAX;

    t180 = ((x849*(x850>x851))*x852);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x853 = -1;
	uint64_t x855 = 56504905730544302LLU;
	int64_t t181 = -22821717729LL;

    t181 = ((x853*(x854>x855))*x856);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x857 = 43U;
	static int64_t x858 = -1LL;
	static uint16_t x859 = 2521U;
	volatile int32_t x860 = INT32_MAX;
	volatile int32_t t182 = -6899;

    t182 = ((x857*(x858>x859))*x860);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x875 = -3455359636188620LL;
	int32_t x876 = -1;
	int32_t t183 = 12609;

    t183 = ((x873*(x874>x875))*x876);

    if (t183 != -23) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x877 = -1LL;
	uint8_t x878 = 0U;
	uint8_t x880 = UINT8_MAX;

    t184 = ((x877*(x878>x879))*x880);

    if (t184 != -255LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x881 = -35374LL;
	uint32_t x882 = 896U;
	uint32_t x883 = 240U;
	volatile int16_t x884 = INT16_MIN;

    t185 = ((x881*(x882>x883))*x884);

    if (t185 != 1159135232LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x889 = UINT16_MAX;
	uint32_t x890 = UINT32_MAX;
	int8_t x891 = -1;
	static int16_t x892 = INT16_MIN;
	int32_t t186 = -655924784;

    t186 = ((x889*(x890>x891))*x892);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int16_t x893 = -4884;
	int8_t x894 = 1;
	int64_t x895 = -16683320847LL;
	int64_t x896 = -2976877LL;
	int64_t t187 = -95874651507LL;

    t187 = ((x893*(x894>x895))*x896);

    if (t187 != 14539067268LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int64_t x897 = INT64_MIN;
	int32_t x898 = -24;
	static uint16_t x899 = 25U;
	int8_t x900 = 6;
	volatile int64_t t188 = -3466053794411711LL;

    t188 = ((x897*(x898>x899))*x900);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x901 = 1U;
	uint16_t x903 = 34U;
	int64_t x904 = 0LL;
	static volatile int64_t t189 = 483117LL;

    t189 = ((x901*(x902>x903))*x904);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x905 = -78LL;
	int32_t x906 = INT32_MIN;
	uint32_t x907 = 362970491U;
	volatile uint64_t x908 = 232438LLU;
	uint64_t t190 = 1728466LLU;

    t190 = ((x905*(x906>x907))*x908);

    if (t190 != 18446744073691421452LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x913 = -1;
	uint32_t x914 = UINT32_MAX;
	uint64_t x915 = 491LLU;
	uint32_t x916 = UINT32_MAX;
	uint32_t t191 = 1280U;

    t191 = ((x913*(x914>x915))*x916);

    if (t191 != 1U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x917 = 5U;
	uint16_t x918 = 14729U;
	uint8_t x919 = 1U;
	static uint8_t x920 = UINT8_MAX;
	int32_t t192 = 10406;

    t192 = ((x917*(x918>x919))*x920);

    if (t192 != 1275) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x921 = 290U;
	uint16_t x922 = 684U;
	int16_t x923 = INT16_MIN;
	volatile int32_t t193 = -34200050;

    t193 = ((x921*(x922>x923))*x924);

    if (t193 != -37120) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x925 = INT32_MAX;
	static int64_t x926 = INT64_MIN;
	uint16_t x927 = 7690U;
	volatile int64_t x928 = 71681LL;
	volatile int64_t t194 = 98039944841071615LL;

    t194 = ((x925*(x926>x927))*x928);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x929 = -1LL;
	static int8_t x930 = -1;
	int32_t x931 = 8558;
	volatile int64_t t195 = 20187975749255155LL;

    t195 = ((x929*(x930>x931))*x932);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x933 = INT32_MIN;
	volatile int32_t x934 = INT32_MIN;
	uint16_t x935 = 21U;
	uint16_t x936 = 188U;
	volatile int32_t t196 = -14158753;

    t196 = ((x933*(x934>x935))*x936);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x937 = 231;
	int32_t t197 = 18811;

    t197 = ((x937*(x938>x939))*x940);

    if (t197 != 29337) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x941 = -1186;
	uint8_t x942 = UINT8_MAX;
	int32_t x943 = INT32_MAX;
	static uint32_t x944 = UINT32_MAX;
	uint32_t t198 = 1213U;

    t198 = ((x941*(x942>x943))*x944);

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x945 = INT16_MIN;
	int64_t x946 = INT64_MAX;
	static int32_t x947 = -1;
	uint64_t x948 = UINT64_MAX;
	volatile uint64_t t199 = 0LLU;

    t199 = ((x945*(x946>x947))*x948);

    if (t199 != 32768LLU) { NG(); } else { ; }
	
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


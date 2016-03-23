
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

static int32_t x19 = -1;
static int64_t x23 = -131937966247LL;
int8_t x63 = -12;
uint16_t x85 = 0U;
int16_t x88 = INT16_MIN;
int64_t t4 = -71835057346744LL;
static int32_t t5 = 4188892;
uint64_t t7 = 74508034610903LLU;
static volatile uint32_t x129 = 3U;
int16_t x131 = INT16_MIN;
volatile int32_t x132 = 131;
int8_t x141 = -1;
uint64_t t10 = 2496695693266LLU;
static uint32_t x163 = 2101U;
static volatile uint64_t x165 = 6195397856LLU;
uint32_t x182 = UINT32_MAX;
int32_t x184 = 1871904;
volatile int16_t x199 = INT16_MIN;
static int8_t x216 = INT8_MIN;
volatile int32_t t18 = -15465;
uint8_t x285 = 5U;
static volatile int8_t x308 = -20;
uint32_t t25 = 524952296U;
int32_t x332 = INT32_MAX;
static volatile int64_t t26 = 962LL;
uint32_t x335 = UINT32_MAX;
uint64_t t28 = 3332064642042268LLU;
int64_t x412 = -1LL;
int64_t t32 = 81143657215598684LL;
int32_t x509 = 582112110;
int64_t t34 = 113436LL;
uint16_t x519 = 27316U;
int16_t x559 = INT16_MIN;
int32_t x564 = INT32_MIN;
static volatile int32_t x566 = INT32_MAX;
static uint64_t x567 = UINT64_MAX;
int16_t x573 = 679;
int32_t x576 = INT32_MAX;
static uint32_t x583 = 501148244U;
int16_t x628 = INT16_MIN;
static volatile int64_t x633 = INT64_MIN;
volatile uint64_t t45 = 35032202718773317LLU;
int32_t x696 = -1;
uint64_t t52 = 123532292LLU;
int16_t x824 = -1;
int32_t x841 = -1;
int32_t x842 = -1;
static uint32_t x852 = 1445U;
uint64_t t56 = 171LLU;
int8_t x861 = INT8_MAX;
volatile uint64_t t57 = 644946LLU;
int8_t x882 = -6;
volatile int64_t t59 = 55LL;
int64_t x913 = 771LL;
uint64_t t64 = 6261968632852534728LLU;
volatile int32_t x953 = INT32_MIN;
uint16_t x957 = 62U;
volatile int16_t x971 = -1;
volatile uint64_t x980 = 57LLU;
uint64_t t70 = 665633LLU;
volatile uint64_t x1039 = UINT64_MAX;
uint64_t t72 = 4LLU;
uint8_t x1052 = UINT8_MAX;
int64_t t73 = -541230066922067870LL;
static volatile uint8_t x1072 = 9U;
int64_t x1074 = -992LL;
volatile int64_t t77 = -6564547013422308LL;
uint16_t x1089 = UINT16_MAX;
volatile int32_t t78 = 60;
int8_t x1094 = INT8_MIN;
uint32_t x1095 = 72119109U;
uint32_t t79 = 7163840U;
int32_t x1103 = INT32_MIN;
volatile int8_t x1104 = 3;
int8_t x1145 = INT8_MIN;
static uint64_t x1151 = UINT64_MAX;
int64_t x1174 = INT64_MIN;
int8_t x1224 = -1;
uint16_t x1228 = 12U;
volatile int64_t t87 = -93310699875143648LL;
int16_t x1238 = 539;
uint64_t t90 = 904562697LLU;
int64_t x1241 = INT64_MAX;
int32_t x1242 = INT32_MAX;
uint32_t x1243 = UINT32_MAX;
volatile int64_t x1270 = INT64_MAX;
uint16_t x1272 = 16143U;
volatile int64_t t93 = 2850968890086073LL;
int64_t t94 = -141207669629LL;
volatile int16_t x1321 = 5468;
int8_t x1324 = -1;
static volatile int64_t t95 = 0LL;
static volatile int8_t x1325 = INT8_MIN;
volatile int64_t x1328 = -23220LL;
int64_t t96 = -196922813508464200LL;
int64_t x1330 = -1LL;
int8_t x1387 = INT8_MIN;
int32_t x1410 = INT32_MAX;
int8_t x1444 = INT8_MAX;
volatile int32_t x1457 = INT32_MAX;
uint64_t x1464 = UINT64_MAX;
int64_t x1473 = -1LL;
uint16_t x1474 = 4763U;
volatile int64_t x1477 = -1966310LL;
uint64_t x1478 = UINT64_MAX;
uint8_t x1480 = 3U;
static int8_t x1531 = INT8_MIN;
volatile uint16_t x1546 = UINT16_MAX;
int16_t x1547 = INT16_MIN;
int16_t x1548 = INT16_MAX;
int64_t x1577 = -30538028LL;
static uint8_t x1579 = 26U;
uint32_t x1587 = 72265U;
static volatile int32_t x1621 = INT32_MIN;
int16_t x1643 = -1;
int64_t t119 = -823LL;
volatile uint64_t t121 = 3176965LLU;
int64_t x1706 = INT64_MAX;
uint32_t x1708 = 3U;
static uint16_t x1736 = 5U;
uint16_t x1749 = UINT16_MAX;
uint32_t x1777 = 296399U;
volatile int64_t t127 = 1LL;
int64_t x1785 = -1LL;
static volatile uint32_t x1788 = 1U;
int16_t x1828 = 10;
uint32_t t129 = 486364498U;
int64_t x1863 = -57039LL;
int64_t t131 = -48324678091584LL;
static int64_t x1869 = INT64_MIN;
volatile uint32_t t133 = 34U;
volatile uint32_t x1893 = 1U;
int64_t x1894 = INT64_MAX;
int8_t x1896 = -1;
static volatile int64_t t134 = 26364501LL;
int16_t x1910 = -1;
uint16_t x1921 = 395U;
uint8_t x1946 = UINT8_MAX;
int8_t x1947 = -1;
int32_t x1994 = INT32_MIN;
static uint64_t x1995 = UINT64_MAX;
static volatile uint64_t t139 = 33504LLU;
int64_t x1997 = INT64_MAX;
volatile int64_t t140 = -8533984LL;
int16_t x2002 = -172;
int32_t x2033 = INT32_MIN;
uint32_t x2042 = 26U;
int8_t x2044 = INT8_MAX;
int64_t x2079 = 314413427LL;
int64_t t146 = -4443439619184710255LL;
static int16_t x2089 = INT16_MAX;
int32_t x2090 = INT32_MIN;
int8_t x2097 = -29;
int32_t x2113 = INT32_MIN;
volatile int64_t x2123 = INT64_MIN;
static int8_t x2129 = INT8_MIN;
static uint64_t x2130 = UINT64_MAX;
volatile uint32_t x2137 = UINT32_MAX;
uint32_t x2138 = 20U;
uint32_t x2140 = 1U;
int16_t x2149 = INT16_MIN;
static volatile int32_t x2152 = INT32_MIN;
volatile int16_t x2161 = -6829;
int64_t x2196 = -1LL;
static uint64_t x2201 = UINT64_MAX;
uint64_t t159 = 12044169967699LLU;
int32_t x2242 = INT32_MIN;
volatile uint32_t x2244 = 1997U;
int64_t t160 = 9671382231LL;
int16_t x2262 = INT16_MIN;
int64_t x2290 = INT64_MIN;
int16_t x2336 = INT16_MAX;
uint64_t x2347 = 439774LLU;
int32_t x2406 = -1;
static int8_t x2407 = -1;
int8_t x2454 = INT8_MAX;
int8_t x2456 = -1;
int32_t x2482 = INT32_MIN;
int64_t t174 = -1LL;
int32_t x2496 = INT32_MIN;
volatile uint32_t x2517 = 1728205596U;
uint16_t x2518 = 1827U;
int32_t x2520 = INT32_MAX;
uint32_t t176 = 3U;
static uint32_t x2550 = UINT32_MAX;
volatile uint64_t t177 = 4608649LLU;
int8_t x2554 = INT8_MIN;
int8_t x2556 = -1;
static int64_t x2597 = 103104746LL;
uint64_t t180 = 88807198LLU;
static int32_t x2615 = 792955;
int64_t x2622 = INT64_MIN;
static volatile int16_t x2624 = 32;
int8_t x2679 = INT8_MAX;
volatile uint8_t x2680 = 9U;
uint64_t x2694 = 161979082373292LLU;
volatile int8_t x2755 = INT8_MIN;
uint8_t x2758 = 7U;
int8_t x2768 = INT8_MIN;
volatile uint64_t t193 = 54861520LLU;
volatile uint8_t x2805 = 67U;
uint8_t x2821 = UINT8_MAX;
volatile int64_t x2829 = -1LL;
static uint16_t x2832 = 25U;
static uint16_t x2844 = 25U;
volatile uint64_t x2850 = UINT64_MAX;
volatile int8_t x2854 = -1;
static uint64_t t199 = 1757905062797081551LLU;


void f0(void) {
    	uint64_t x9 = 68789LLU;
	static int32_t x10 = 15505664;
	volatile uint16_t x11 = UINT16_MAX;
	uint8_t x12 = 3U;
	static volatile uint64_t t0 = 48699975LLU;

    t0 = (x9%(x10/(x11/x12)));

    if (t0 != 16LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x17 = 634U;
	int32_t x18 = INT32_MAX;
	static int32_t x20 = -1;
	uint32_t t1 = 1429U;

    t1 = (x17%(x18/(x19/x20)));

    if (t1 != 634U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x21 = 16103U;
	volatile int64_t x22 = INT64_MIN;
	volatile uint8_t x24 = 62U;
	volatile int64_t t2 = 7327399961LL;

    t2 = (x21%(x22/(x23/x24)));

    if (t2 != 16103LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x61 = UINT16_MAX;
	int64_t x62 = INT64_MIN;
	uint8_t x64 = 2U;
	static int64_t t3 = 530832045215988LL;

    t3 = (x61%(x62/(x63/x64)));

    if (t3 != 65535LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x86 = INT64_MIN;
	static int32_t x87 = INT32_MAX;

    t4 = (x85%(x86/(x87/x88)));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x105 = INT8_MIN;
	volatile uint8_t x106 = UINT8_MAX;
	uint16_t x107 = UINT16_MAX;
	uint16_t x108 = 720U;

    t5 = (x105%(x106/(x107/x108)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x109 = UINT32_MAX;
	static int16_t x110 = -145;
	uint8_t x111 = 26U;
	int64_t x112 = 1LL;
	volatile int64_t t6 = 14LL;

    t6 = (x109%(x110/(x111/x112)));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x121 = 57988183;
	int16_t x122 = -1;
	uint64_t x123 = 60221952946791837LLU;
	uint16_t x124 = 259U;

    t7 = (x121%(x122/(x123/x124)));

    if (t7 != 74363LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x130 = INT64_MAX;
	int64_t t8 = -64373687512319851LL;

    t8 = (x129%(x130/(x131/x132)));

    if (t8 != 3LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x142 = -2057025;
	int16_t x143 = INT16_MIN;
	static int64_t x144 = -1LL;
	volatile int64_t t9 = -62755LL;

    t9 = (x141%(x142/(x143/x144)));

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x149 = -1LL;
	int8_t x150 = INT8_MIN;
	uint64_t x151 = 6966304932LLU;
	static uint8_t x152 = 44U;

    t10 = (x149%(x150/(x151/x152)));

    if (t10 != 127971991LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x153 = 5247302424566760LLU;
	volatile int32_t x154 = INT32_MIN;
	int32_t x155 = INT32_MIN;
	static uint32_t x156 = 563686U;
	uint64_t t11 = 68687848584139LLU;

    t11 = (x153%(x154/(x155/x156)));

    if (t11 != 88311LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x157 = 1024353121305LLU;
	int32_t x158 = -3524359;
	uint64_t x159 = UINT64_MAX;
	volatile uint64_t x160 = UINT64_MAX;
	static volatile uint64_t t12 = 1635934048309LLU;

    t12 = (x157%(x158/(x159/x160)));

    if (t12 != 1024353121305LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x161 = INT32_MIN;
	volatile int8_t x162 = -3;
	uint16_t x164 = 3U;
	uint32_t t13 = 225U;

    t13 = (x161%(x162/(x163/x164)));

    if (t13 != 198U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x166 = 865262039;
	int8_t x167 = INT8_MIN;
	int8_t x168 = INT8_MAX;
	uint64_t t14 = 6187LLU;

    t14 = (x165%(x166/(x167/x168)));

    if (t14 != 6195397856LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x173 = INT32_MIN;
	int64_t x174 = INT64_MIN;
	static volatile int32_t x175 = -1;
	int8_t x176 = -1;
	volatile int64_t t15 = -9345611521LL;

    t15 = (x173%(x174/(x175/x176)));

    if (t15 != -2147483648LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x181 = 4;
	uint32_t x183 = UINT32_MAX;
	static uint32_t t16 = 5U;

    t16 = (x181%(x182/(x183/x184)));

    if (t16 != 4U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x197 = 40U;
	uint16_t x198 = UINT16_MAX;
	int16_t x200 = -1;
	volatile int32_t t17 = -1;

    t17 = (x197%(x198/(x199/x200)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x213 = INT32_MIN;
	uint8_t x214 = UINT8_MAX;
	static int8_t x215 = INT8_MIN;

    t18 = (x213%(x214/(x215/x216)));

    if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x233 = 63U;
	int64_t x234 = INT64_MIN;
	volatile int16_t x235 = 96;
	static int64_t x236 = -1LL;
	static int64_t t19 = -61LL;

    t19 = (x233%(x234/(x235/x236)));

    if (t19 != 63LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x269 = 0;
	static int32_t x270 = -11203132;
	uint64_t x271 = 31405LLU;
	uint16_t x272 = 13U;
	volatile uint64_t t20 = 1011596276LLU;

    t20 = (x269%(x270/(x271/x272)));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x286 = UINT32_MAX;
	volatile int16_t x287 = -120;
	int32_t x288 = -1;
	uint32_t t21 = 962546U;

    t21 = (x285%(x286/(x287/x288)));

    if (t21 != 5U) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x293 = INT8_MIN;
	uint16_t x294 = UINT16_MAX;
	static int64_t x295 = -1LL;
	int16_t x296 = -1;
	static int64_t t22 = 1391837126LL;

    t22 = (x293%(x294/(x295/x296)));

    if (t22 != -128LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x297 = INT16_MAX;
	volatile uint64_t x298 = 75749288LLU;
	int32_t x299 = INT32_MIN;
	int16_t x300 = INT16_MIN;
	volatile uint64_t t23 = 971584LLU;

    t23 = (x297%(x298/(x299/x300)));

    if (t23 != 427LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x305 = 8939U;
	volatile int32_t x306 = INT32_MIN;
	volatile int32_t x307 = INT32_MAX;
	volatile uint32_t t24 = 142279U;

    t24 = (x305%(x306/(x307/x308)));

    if (t24 != 19U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x321 = 5U;
	static int8_t x322 = INT8_MIN;
	int32_t x323 = INT32_MIN;
	uint32_t x324 = 7U;

    t25 = (x321%(x322/(x323/x324)));

    if (t25 != 5U) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x329 = -282533369LL;
	int32_t x330 = -23;
	static int32_t x331 = INT32_MIN;

    t26 = (x329%(x330/(x331/x332)));

    if (t26 != -12LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x333 = INT32_MAX;
	int32_t x334 = INT32_MIN;
	static int8_t x336 = INT8_MIN;
	volatile uint32_t t27 = 674114217U;

    t27 = (x333%(x334/(x335/x336)));

    if (t27 != 2147483647U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x337 = 188076219099LLU;
	int32_t x338 = INT32_MAX;
	volatile int16_t x339 = -1;
	int64_t x340 = -1LL;

    t28 = (x337%(x338/(x339/x340)));

    if (t28 != 1245141810LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x373 = INT64_MAX;
	uint64_t x374 = 678714177LLU;
	int16_t x375 = -1;
	static int8_t x376 = -1;
	uint64_t t29 = 300165979611862LLU;

    t29 = (x373%(x374/(x375/x376)));

    if (t29 != 514989763LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x389 = INT16_MIN;
	uint32_t x390 = 1261553U;
	static volatile uint16_t x391 = 4338U;
	int16_t x392 = 87;
	uint32_t t30 = 61730171U;

    t30 = (x389%(x390/(x391/x392)));

    if (t30 != 24903U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x409 = 10659301U;
	uint64_t x410 = 55881118LLU;
	int16_t x411 = -1;
	uint64_t t31 = 125094937941LLU;

    t31 = (x409%(x410/(x411/x412)));

    if (t31 != 10659301LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x421 = -1LL;
	int16_t x422 = INT16_MIN;
	volatile int16_t x423 = INT16_MIN;
	static int16_t x424 = INT16_MIN;

    t32 = (x421%(x422/(x423/x424)));

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x485 = UINT16_MAX;
	static int16_t x486 = INT16_MIN;
	static int32_t x487 = 492849308;
	uint32_t x488 = 259719698U;
	uint32_t t33 = 1016426178U;

    t33 = (x485%(x486/(x487/x488)));

    if (t33 != 65535U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x510 = INT64_MAX;
	static int16_t x511 = -1147;
	volatile int16_t x512 = -14;

    t34 = (x509%(x510/(x511/x512)));

    if (t34 != 582112110LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x517 = INT32_MIN;
	uint64_t x518 = UINT64_MAX;
	int16_t x520 = 5529;
	volatile uint64_t t35 = 865LLU;

    t35 = (x517%(x518/(x519/x520)));

    if (t35 != 4611686016279904259LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x545 = -1;
	int64_t x546 = INT64_MIN;
	static uint16_t x547 = UINT16_MAX;
	int16_t x548 = -1;
	int64_t t36 = 1LL;

    t36 = (x545%(x546/(x547/x548)));

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int16_t x557 = INT16_MIN;
	int64_t x558 = INT64_MAX;
	int16_t x560 = INT16_MAX;
	int64_t t37 = 70013154370228LL;

    t37 = (x557%(x558/(x559/x560)));

    if (t37 != -32768LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x561 = UINT8_MAX;
	int32_t x562 = INT32_MIN;
	uint32_t x563 = UINT32_MAX;
	volatile uint32_t t38 = 134949U;

    t38 = (x561%(x562/(x563/x564)));

    if (t38 != 255U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x565 = UINT8_MAX;
	int32_t x568 = -1;
	uint64_t t39 = 861688826LLU;

    t39 = (x565%(x566/(x567/x568)));

    if (t39 != 255LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x574 = UINT64_MAX;
	uint64_t x575 = 11687752418LLU;
	uint64_t t40 = 1068345970273561LLU;

    t40 = (x573%(x574/(x575/x576)));

    if (t40 != 679LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x577 = 735557753U;
	uint16_t x578 = 28U;
	int32_t x579 = INT32_MIN;
	int32_t x580 = INT32_MIN;
	volatile uint32_t t41 = 42313U;

    t41 = (x577%(x578/(x579/x580)));

    if (t41 != 21U) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int64_t x581 = 27LL;
	static int16_t x582 = INT16_MIN;
	uint16_t x584 = 5393U;
	int64_t t42 = -3LL;

    t42 = (x581%(x582/(x583/x584)));

    if (t42 != 27LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x605 = -1;
	volatile int32_t x606 = INT32_MIN;
	static int32_t x607 = INT32_MAX;
	uint8_t x608 = 3U;
	volatile int32_t t43 = 38;

    t43 = (x605%(x606/(x607/x608)));

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x625 = 12596U;
	int64_t x626 = INT64_MAX;
	int64_t x627 = 96046192735353LL;
	int64_t t44 = -795348672083LL;

    t44 = (x625%(x626/(x627/x628)));

    if (t44 != 12596LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x634 = UINT64_MAX;
	int32_t x635 = INT32_MAX;
	int8_t x636 = 3;

    t45 = (x633%(x634/(x635/x636)));

    if (t45 != 8LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x641 = 2056216641U;
	int64_t x642 = -3037433590614LL;
	int16_t x643 = 3271;
	int16_t x644 = -1;
	int64_t t46 = 2180LL;

    t46 = (x641%(x642/(x643/x644)));

    if (t46 != 199027043LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x657 = INT16_MIN;
	uint64_t x658 = 4683768785590036LLU;
	int16_t x659 = INT16_MIN;
	int8_t x660 = -1;
	static volatile uint64_t t47 = 1665512217331LLU;

    t47 = (x657%(x658/(x659/x660)));

    if (t47 != 11195752786LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x673 = 370452805U;
	int8_t x674 = INT8_MIN;
	int32_t x675 = -62572;
	uint32_t x676 = 5697099U;
	uint32_t t48 = 23860996U;

    t48 = (x673%(x674/(x675/x676)));

    if (t48 != 5409157U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x689 = 746;
	static int32_t x690 = -305;
	static volatile uint64_t x691 = UINT64_MAX;
	int8_t x692 = INT8_MIN;
	uint64_t t49 = 2066260766148LLU;

    t49 = (x689%(x690/(x691/x692)));

    if (t49 != 746LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint8_t x693 = UINT8_MAX;
	static int64_t x694 = -2378190567563134866LL;
	volatile int8_t x695 = -1;
	volatile int64_t t50 = 1147938519LL;

    t50 = (x693%(x694/(x695/x696)));

    if (t50 != 255LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x769 = UINT32_MAX;
	static int8_t x770 = -1;
	uint32_t x771 = UINT32_MAX;
	uint32_t x772 = UINT32_MAX;
	uint32_t t51 = 3540866U;

    t51 = (x769%(x770/(x771/x772)));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x773 = -1;
	int8_t x774 = INT8_MIN;
	uint64_t x775 = UINT64_MAX;
	int32_t x776 = INT32_MAX;

    t52 = (x773%(x774/(x775/x776)));

    if (t52 != 15LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x809 = 15598U;
	int8_t x810 = -11;
	volatile int16_t x811 = INT16_MIN;
	volatile uint64_t x812 = 15546LLU;
	volatile uint64_t t53 = 17753680816470LLU;

    t53 = (x809%(x810/(x811/x812)));

    if (t53 != 52LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x821 = 26U;
	uint64_t x822 = UINT64_MAX;
	int16_t x823 = -1;
	volatile uint64_t t54 = 90779881LLU;

    t54 = (x821%(x822/(x823/x824)));

    if (t54 != 26LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint32_t x843 = 16140118U;
	uint16_t x844 = 74U;
	uint32_t t55 = 116722U;

    t55 = (x841%(x842/(x843/x844)));

    if (t55 != 5757U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x849 = 0;
	static int16_t x850 = INT16_MIN;
	volatile uint64_t x851 = UINT64_MAX;

    t56 = (x849%(x850/(x851/x852)));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x862 = 4107939592314828835LLU;
	static int32_t x863 = -1;
	int16_t x864 = -1;

    t57 = (x861%(x862/(x863/x864)));

    if (t57 != 127LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x865 = INT8_MIN;
	static int8_t x866 = INT8_MIN;
	int32_t x867 = 18;
	volatile int16_t x868 = -1;
	int32_t t58 = -21;

    t58 = (x865%(x866/(x867/x868)));

    if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x881 = 34346583U;
	volatile int64_t x883 = 1LL;
	int64_t x884 = -1LL;

    t59 = (x881%(x882/(x883/x884)));

    if (t59 != 3LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int32_t x889 = INT32_MAX;
	int64_t x890 = INT64_MAX;
	int16_t x891 = INT16_MIN;
	static int32_t x892 = -1;
	static volatile int64_t t60 = 8767155052001LL;

    t60 = (x889%(x890/(x891/x892)));

    if (t60 != 2147483647LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x893 = INT8_MIN;
	uint32_t x894 = UINT32_MAX;
	uint16_t x895 = UINT16_MAX;
	int16_t x896 = INT16_MIN;
	uint32_t t61 = 134U;

    t61 = (x893%(x894/(x895/x896)));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x897 = 126LLU;
	int64_t x898 = 96625890911090LL;
	static int8_t x899 = 1;
	static volatile int32_t x900 = -1;
	static uint64_t t62 = 115322621302LLU;

    t62 = (x897%(x898/(x899/x900)));

    if (t62 != 126LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x914 = 2028U;
	int32_t x915 = INT32_MIN;
	volatile uint32_t x916 = 246980445U;
	volatile int64_t t63 = 54797434530LL;

    t63 = (x913%(x914/(x915/x916)));

    if (t63 != 12LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x937 = INT8_MAX;
	uint64_t x938 = UINT64_MAX;
	static int16_t x939 = INT16_MIN;
	int16_t x940 = -1;

    t64 = (x937%(x938/(x939/x940)));

    if (t64 != 127LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x945 = -1;
	int32_t x946 = INT32_MIN;
	volatile int16_t x947 = INT16_MIN;
	volatile uint64_t x948 = 15541895LLU;
	volatile uint64_t t65 = 1450608749045LLU;

    t65 = (x945%(x946/(x947/x948)));

    if (t65 != 10949301LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x954 = 91861587;
	static uint8_t x955 = 47U;
	int32_t x956 = 2;
	int32_t t66 = -777614;

    t66 = (x953%(x954/(x955/x956)));

    if (t66 != -2715314) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x958 = UINT64_MAX;
	int64_t x959 = -16467684362491888LL;
	static int16_t x960 = -1655;
	uint64_t t67 = 2453329706029187575LLU;

    t67 = (x957%(x958/(x959/x960)));

    if (t67 != 62LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x961 = -1;
	int32_t x962 = -150;
	int32_t x963 = -1;
	int64_t x964 = -1LL;
	volatile int64_t t68 = -696110741LL;

    t68 = (x961%(x962/(x963/x964)));

    if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x969 = INT64_MIN;
	volatile int64_t x970 = -1LL;
	uint32_t x972 = UINT32_MAX;
	volatile int64_t t69 = -16893838813LL;

    t69 = (x969%(x970/(x971/x972)));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x977 = UINT8_MAX;
	int16_t x978 = -3468;
	int16_t x979 = -1;

    t70 = (x977%(x978/(x979/x980)));

    if (t70 != 31LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x997 = -1LL;
	int32_t x998 = INT32_MAX;
	int32_t x999 = -1;
	uint8_t x1000 = 1U;
	int64_t t71 = -28460443531962LL;

    t71 = (x997%(x998/(x999/x1000)));

    if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x1037 = UINT32_MAX;
	uint32_t x1038 = 158U;
	int8_t x1040 = INT8_MIN;

    t72 = (x1037%(x1038/(x1039/x1040)));

    if (t72 != 49LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x1049 = INT64_MIN;
	int32_t x1050 = INT32_MAX;
	static int32_t x1051 = 122337;

    t73 = (x1049%(x1050/(x1051/x1052)));

    if (t73 != -73728LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x1057 = UINT64_MAX;
	int16_t x1058 = -331;
	volatile int16_t x1059 = INT16_MIN;
	uint32_t x1060 = 1884453501U;
	static volatile uint64_t t74 = 45947719317146LLU;

    t74 = (x1057%(x1058/(x1059/x1060)));

    if (t74 != 110223LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x1069 = INT32_MIN;
	uint64_t x1070 = 172952479LLU;
	uint8_t x1071 = UINT8_MAX;
	volatile uint64_t t75 = 175806981363LLU;

    t75 = (x1069%(x1070/(x1071/x1072)));

    if (t75 != 4196360LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x1073 = -1;
	int64_t x1075 = 1609356LL;
	uint32_t x1076 = 1918U;
	static int64_t t76 = 658916917285397930LL;

    t76 = (x1073%(x1074/(x1075/x1076)));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x1081 = -1LL;
	int32_t x1082 = INT32_MIN;
	int32_t x1083 = INT32_MIN;
	uint8_t x1084 = 1U;

    t77 = (x1081%(x1082/(x1083/x1084)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int8_t x1090 = -1;
	int8_t x1091 = 1;
	static int8_t x1092 = -1;

    t78 = (x1089%(x1090/(x1091/x1092)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x1093 = 1U;
	int16_t x1096 = INT16_MAX;

    t79 = (x1093%(x1094/(x1095/x1096)));

    if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x1101 = -14;
	volatile int32_t x1102 = INT32_MAX;
	volatile int32_t t80 = 15;

    t80 = (x1101%(x1102/(x1103/x1104)));

    if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x1146 = 647U;
	uint32_t x1147 = 1105977U;
	static volatile uint16_t x1148 = 2841U;
	volatile uint32_t t81 = 24709U;

    t81 = (x1145%(x1146/(x1147/x1148)));

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x1149 = -30;
	static int32_t x1150 = INT32_MIN;
	volatile int16_t x1152 = -1;
	volatile uint64_t t82 = 1725599507946812LLU;

    t82 = (x1149%(x1150/(x1151/x1152)));

    if (t82 != 2147483618LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x1173 = UINT64_MAX;
	static uint64_t x1175 = UINT64_MAX;
	int8_t x1176 = INT8_MAX;
	volatile uint64_t t83 = 1243883772605LLU;

    t83 = (x1173%(x1174/(x1175/x1176)));

    if (t83 != 15LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x1181 = UINT8_MAX;
	int32_t x1182 = 491175543;
	int16_t x1183 = INT16_MAX;
	volatile uint16_t x1184 = 4U;
	int32_t t84 = 49167129;

    t84 = (x1181%(x1182/(x1183/x1184)));

    if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int32_t x1189 = INT32_MAX;
	int8_t x1190 = INT8_MIN;
	int8_t x1191 = INT8_MIN;
	int8_t x1192 = -1;
	int32_t t85 = -33427;

    t85 = (x1189%(x1190/(x1191/x1192)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x1221 = INT16_MAX;
	int16_t x1222 = INT16_MIN;
	static int16_t x1223 = INT16_MIN;
	volatile int32_t t86 = -2;

    t86 = (x1221%(x1222/(x1223/x1224)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x1225 = INT16_MAX;
	static int64_t x1226 = INT64_MIN;
	static int16_t x1227 = -253;

    t87 = (x1225%(x1226/(x1227/x1228)));

    if (t87 != 32767LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x1229 = -2;
	int64_t x1230 = INT64_MIN;
	volatile uint64_t x1231 = UINT64_MAX;
	int8_t x1232 = INT8_MIN;
	uint64_t t88 = 2452LLU;

    t88 = (x1229%(x1230/(x1231/x1232)));

    if (t88 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x1233 = -1LL;
	int64_t x1234 = INT64_MAX;
	uint64_t x1235 = 6275749LLU;
	uint8_t x1236 = 2U;
	uint64_t t89 = 2479LLU;

    t89 = (x1233%(x1234/(x1235/x1236)));

    if (t89 != 4708587LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x1237 = INT64_MIN;
	uint64_t x1239 = UINT64_MAX;
	static volatile int32_t x1240 = -1;

    t90 = (x1237%(x1238/(x1239/x1240)));

    if (t90 != 393LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x1244 = -1;
	int64_t t91 = 1LL;

    t91 = (x1241%(x1242/(x1243/x1244)));

    if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x1269 = INT64_MIN;
	uint64_t x1271 = 6322332986630LLU;
	volatile uint64_t t92 = 43103765957818LLU;

    t92 = (x1269%(x1270/(x1271/x1272)));

    if (t92 != 41194488LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x1281 = INT8_MIN;
	int16_t x1282 = -11;
	static int64_t x1283 = INT64_MAX;
	volatile int64_t x1284 = INT64_MAX;

    t93 = (x1281%(x1282/(x1283/x1284)));

    if (t93 != -7LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x1317 = INT8_MAX;
	int64_t x1318 = INT64_MIN;
	int32_t x1319 = INT32_MAX;
	uint16_t x1320 = 2085U;

    t94 = (x1317%(x1318/(x1319/x1320)));

    if (t94 != 127LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x1322 = INT64_MIN;
	int16_t x1323 = INT16_MAX;

    t95 = (x1321%(x1322/(x1323/x1324)));

    if (t95 != 5468LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x1326 = INT16_MAX;
	int16_t x1327 = INT16_MIN;

    t96 = (x1325%(x1326/(x1327/x1328)));

    if (t96 != -128LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x1329 = INT64_MAX;
	uint64_t x1331 = UINT64_MAX;
	int64_t x1332 = -1275469009LL;
	uint64_t t97 = 122LLU;

    t97 = (x1329%(x1330/(x1331/x1332)));

    if (t97 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x1333 = UINT64_MAX;
	volatile int32_t x1334 = INT32_MIN;
	int32_t x1335 = 123918511;
	volatile int8_t x1336 = INT8_MAX;
	uint64_t t98 = 363201387LLU;

    t98 = (x1333%(x1334/(x1335/x1336)));

    if (t98 != 2199LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x1361 = INT64_MIN;
	int32_t x1362 = -7629;
	volatile int64_t x1363 = INT64_MIN;
	int64_t x1364 = -174191070409483646LL;
	volatile int64_t t99 = -3022139228LL;

    t99 = (x1361%(x1362/(x1363/x1364)));

    if (t99 != -74LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x1385 = INT8_MIN;
	int64_t x1386 = -1LL;
	int8_t x1388 = INT8_MIN;
	static int64_t t100 = 1163827070485365LL;

    t100 = (x1385%(x1386/(x1387/x1388)));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x1409 = 1231U;
	int16_t x1411 = INT16_MIN;
	int8_t x1412 = -1;
	uint32_t t101 = 1145494U;

    t101 = (x1409%(x1410/(x1411/x1412)));

    if (t101 != 1231U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x1417 = 2U;
	int32_t x1418 = 206899792;
	static int32_t x1419 = INT32_MIN;
	int32_t x1420 = INT32_MIN;
	static int32_t t102 = 611402227;

    t102 = (x1417%(x1418/(x1419/x1420)));

    if (t102 != 2) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x1441 = -1;
	static int32_t x1442 = INT32_MAX;
	static int16_t x1443 = INT16_MIN;
	volatile int32_t t103 = 6607134;

    t103 = (x1441%(x1442/(x1443/x1444)));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x1449 = -1;
	uint64_t x1450 = UINT64_MAX;
	uint8_t x1451 = UINT8_MAX;
	int32_t x1452 = -2;
	volatile uint64_t t104 = 47LLU;

    t104 = (x1449%(x1450/(x1451/x1452)));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x1458 = INT64_MIN;
	static uint16_t x1459 = UINT16_MAX;
	int8_t x1460 = INT8_MIN;
	static int64_t t105 = -17745374928534LL;

    t105 = (x1457%(x1458/(x1459/x1460)));

    if (t105 != 2147483647LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x1461 = UINT16_MAX;
	uint8_t x1462 = 14U;
	int16_t x1463 = -1;
	volatile uint64_t t106 = 33113109859502LLU;

    t106 = (x1461%(x1462/(x1463/x1464)));

    if (t106 != 1LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x1475 = INT64_MAX;
	static uint64_t x1476 = 4245067284004908564LLU;
	volatile uint64_t t107 = 12689900573126LLU;

    t107 = (x1473%(x1474/(x1475/x1476)));

    if (t107 != 1292LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x1479 = UINT16_MAX;
	uint64_t t108 = 2287769399270LLU;

    t108 = (x1477%(x1478/(x1479/x1480)));

    if (t108 != 844437813264158LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x1513 = INT64_MAX;
	static uint32_t x1514 = 26U;
	uint16_t x1515 = UINT16_MAX;
	uint16_t x1516 = UINT16_MAX;
	int64_t t109 = 236309LL;

    t109 = (x1513%(x1514/(x1515/x1516)));

    if (t109 != 7LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x1529 = 45U;
	volatile int32_t x1530 = -21629;
	int64_t x1532 = -1LL;
	int64_t t110 = 797677LL;

    t110 = (x1529%(x1530/(x1531/x1532)));

    if (t110 != 45LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x1541 = -1LL;
	int64_t x1542 = INT64_MIN;
	uint32_t x1543 = 52877307U;
	volatile int16_t x1544 = INT16_MAX;
	int64_t t111 = -63288042LL;

    t111 = (x1541%(x1542/(x1543/x1544)));

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x1545 = INT64_MIN;
	volatile int64_t t112 = 120LL;

    t112 = (x1545%(x1546/(x1547/x1548)));

    if (t112 != -32768LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x1578 = INT64_MIN;
	int8_t x1580 = 6;
	static volatile int64_t t113 = -9933LL;

    t113 = (x1577%(x1578/(x1579/x1580)));

    if (t113 != -30538028LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x1585 = INT8_MAX;
	static int32_t x1586 = 589734;
	int16_t x1588 = 1;
	volatile uint32_t t114 = 71780064U;

    t114 = (x1585%(x1586/(x1587/x1588)));

    if (t114 != 7U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x1613 = 3U;
	volatile int64_t x1614 = INT64_MIN;
	int32_t x1615 = INT32_MIN;
	int8_t x1616 = INT8_MIN;
	int64_t t115 = 13928560712LL;

    t115 = (x1613%(x1614/(x1615/x1616)));

    if (t115 != 3LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x1622 = INT64_MIN;
	int16_t x1623 = INT16_MAX;
	volatile int64_t x1624 = 233LL;
	int64_t t116 = 7569929904514LL;

    t116 = (x1621%(x1622/(x1623/x1624)));

    if (t116 != -2147483648LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x1641 = UINT8_MAX;
	int8_t x1642 = INT8_MAX;
	uint64_t x1644 = UINT64_MAX;
	volatile uint64_t t117 = 11800144459LLU;

    t117 = (x1641%(x1642/(x1643/x1644)));

    if (t117 != 1LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x1645 = 1U;
	int32_t x1646 = INT32_MIN;
	uint32_t x1647 = UINT32_MAX;
	volatile int32_t x1648 = -251;
	volatile uint32_t t118 = 25U;

    t118 = (x1645%(x1646/(x1647/x1648)));

    if (t118 != 1U) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x1653 = 2471553302308225190LL;
	int64_t x1654 = INT64_MAX;
	volatile int64_t x1655 = INT64_MIN;
	volatile uint32_t x1656 = 4490635U;

    t119 = (x1653%(x1654/(x1655/x1656)));

    if (t119 != 3592015LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int32_t x1657 = INT32_MIN;
	volatile uint16_t x1658 = 12809U;
	uint32_t x1659 = UINT32_MAX;
	static int32_t x1660 = INT32_MIN;
	uint32_t t120 = 1254U;

    t120 = (x1657%(x1658/(x1659/x1660)));

    if (t120 != 3562U) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int32_t x1661 = INT32_MIN;
	static uint16_t x1662 = UINT16_MAX;
	int16_t x1663 = INT16_MAX;
	uint64_t x1664 = 6LLU;

    t121 = (x1661%(x1662/(x1663/x1664)));

    if (t121 != 8LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x1677 = INT8_MIN;
	uint16_t x1678 = 13640U;
	volatile int16_t x1679 = INT16_MIN;
	volatile int16_t x1680 = INT16_MIN;
	int32_t t122 = -356370;

    t122 = (x1677%(x1678/(x1679/x1680)));

    if (t122 != -128) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x1705 = 898;
	static int16_t x1707 = INT16_MIN;
	static volatile int64_t t123 = 777420527LL;

    t123 = (x1705%(x1706/(x1707/x1708)));

    if (t123 != 898LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x1733 = 46951989466849LLU;
	static uint64_t x1734 = UINT64_MAX;
	int8_t x1735 = INT8_MIN;
	static volatile uint64_t t124 = 1286175LLU;

    t124 = (x1733%(x1734/(x1735/x1736)));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int8_t x1750 = INT8_MIN;
	int32_t x1751 = -1;
	int16_t x1752 = -1;
	static volatile int32_t t125 = -169539092;

    t125 = (x1749%(x1750/(x1751/x1752)));

    if (t125 != 127) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x1769 = INT8_MIN;
	int32_t x1770 = 715;
	uint64_t x1771 = UINT64_MAX;
	int16_t x1772 = -1402;
	static uint64_t t126 = 43937751698LLU;

    t126 = (x1769%(x1770/(x1771/x1772)));

    if (t126 != 603LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x1778 = -22540398167LL;
	uint32_t x1779 = 115430325U;
	volatile uint16_t x1780 = 2U;

    t127 = (x1777%(x1778/(x1779/x1780)));

    if (t127 != 389LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x1786 = INT64_MIN;
	static uint8_t x1787 = 87U;
	int64_t t128 = -1587072762LL;

    t128 = (x1785%(x1786/(x1787/x1788)));

    if (t128 != -1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x1825 = INT32_MIN;
	static volatile uint32_t x1826 = UINT32_MAX;
	volatile int16_t x1827 = INT16_MAX;

    t129 = (x1825%(x1826/(x1827/x1828)));

    if (t129 != 128U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x1853 = 64685553213LLU;
	volatile int32_t x1854 = INT32_MAX;
	int64_t x1855 = 7LL;
	int8_t x1856 = -1;
	uint64_t t130 = 193742889844667817LLU;

    t130 = (x1853%(x1854/(x1855/x1856)));

    if (t130 != 64685553213LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x1861 = -1;
	volatile int64_t x1862 = 1933783338LL;
	int8_t x1864 = INT8_MAX;

    t131 = (x1861%(x1862/(x1863/x1864)));

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x1870 = INT8_MIN;
	static volatile int8_t x1871 = INT8_MIN;
	static volatile int8_t x1872 = -1;
	int64_t t132 = -316186961257337LL;

    t132 = (x1869%(x1870/(x1871/x1872)));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x1885 = 309;
	int8_t x1886 = INT8_MIN;
	volatile uint32_t x1887 = 745905276U;
	uint16_t x1888 = 9U;

    t133 = (x1885%(x1886/(x1887/x1888)));

    if (t133 != 3U) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x1895 = INT32_MAX;

    t134 = (x1893%(x1894/(x1895/x1896)));

    if (t134 != 1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x1901 = -1;
	int64_t x1902 = INT64_MIN;
	static uint32_t x1903 = UINT32_MAX;
	uint16_t x1904 = UINT16_MAX;
	volatile int64_t t135 = -508LL;

    t135 = (x1901%(x1902/(x1903/x1904)));

    if (t135 != -1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x1909 = -1;
	int32_t x1911 = INT32_MIN;
	int32_t x1912 = INT32_MAX;
	volatile int32_t t136 = 10;

    t136 = (x1909%(x1910/(x1911/x1912)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x1922 = INT16_MAX;
	int8_t x1923 = -1;
	uint32_t x1924 = 12129708U;
	uint32_t t137 = 3577U;

    t137 = (x1921%(x1922/(x1923/x1924)));

    if (t137 != 27U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x1945 = UINT16_MAX;
	uint32_t x1948 = 159931317U;
	uint32_t t138 = 66941860U;

    t138 = (x1945%(x1946/(x1947/x1948)));

    if (t138 != 6U) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x1993 = INT32_MIN;
	static int8_t x1996 = INT8_MIN;

    t139 = (x1993%(x1994/(x1995/x1996)));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x1998 = UINT32_MAX;
	int16_t x1999 = INT16_MAX;
	int8_t x2000 = INT8_MAX;

    t140 = (x1997%(x1998/(x1999/x2000)));

    if (t140 != 127LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x2001 = UINT16_MAX;
	uint16_t x2003 = 692U;
	uint16_t x2004 = 13U;
	volatile int32_t t141 = -436037;

    t141 = (x2001%(x2002/(x2003/x2004)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x2017 = 9;
	uint64_t x2018 = UINT64_MAX;
	volatile int64_t x2019 = INT64_MAX;
	int64_t x2020 = -1LL;
	volatile uint64_t t142 = 61723LLU;

    t142 = (x2017%(x2018/(x2019/x2020)));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x2034 = INT16_MAX;
	static int16_t x2035 = -1;
	int32_t x2036 = -1;
	volatile int32_t t143 = 3482524;

    t143 = (x2033%(x2034/(x2035/x2036)));

    if (t143 != -2) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x2041 = -1;
	uint8_t x2043 = UINT8_MAX;
	static volatile uint32_t t144 = 79U;

    t144 = (x2041%(x2042/(x2043/x2044)));

    if (t144 != 8U) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x2053 = -4;
	volatile int64_t x2054 = INT64_MAX;
	volatile int32_t x2055 = INT32_MIN;
	int16_t x2056 = INT16_MIN;
	int64_t t145 = -1584LL;

    t145 = (x2053%(x2054/(x2055/x2056)));

    if (t145 != -4LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x2077 = UINT8_MAX;
	int32_t x2078 = INT32_MIN;
	int8_t x2080 = 11;

    t146 = (x2077%(x2078/(x2079/x2080)));

    if (t146 != 30LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x2085 = INT64_MIN;
	int64_t x2086 = INT64_MIN;
	int16_t x2087 = INT16_MAX;
	int16_t x2088 = -85;
	volatile int64_t t147 = 1LL;

    t147 = (x2085%(x2086/(x2087/x2088)));

    if (t147 != -8LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x2091 = 1652;
	static volatile int32_t x2092 = -2;
	static int32_t t148 = 24;

    t148 = (x2089%(x2090/(x2091/x2092)));

    if (t148 != 32767) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x2098 = UINT16_MAX;
	int8_t x2099 = INT8_MIN;
	int8_t x2100 = -18;
	volatile int32_t t149 = 417358;

    t149 = (x2097%(x2098/(x2099/x2100)));

    if (t149 != -29) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x2114 = INT16_MIN;
	int8_t x2115 = INT8_MIN;
	uint64_t x2116 = 679533094LLU;
	volatile uint64_t t150 = 1580486140706LLU;

    t150 = (x2113%(x2114/(x2115/x2116)));

    if (t150 != 299652346LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x2121 = UINT32_MAX;
	volatile uint8_t x2122 = UINT8_MAX;
	int64_t x2124 = INT64_MIN;
	int64_t t151 = 2235718848837830LL;

    t151 = (x2121%(x2122/(x2123/x2124)));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x2131 = UINT32_MAX;
	uint16_t x2132 = 26665U;
	uint64_t t152 = 22479185LLU;

    t152 = (x2129%(x2130/(x2131/x2132)));

    if (t152 != 157152LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x2133 = INT64_MAX;
	volatile uint16_t x2134 = UINT16_MAX;
	uint8_t x2135 = 125U;
	volatile int16_t x2136 = 93;
	volatile int64_t t153 = 854544LL;

    t153 = (x2133%(x2134/(x2135/x2136)));

    if (t153 != 32767LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x2139 = 11;
	volatile uint32_t t154 = 1U;

    t154 = (x2137%(x2138/(x2139/x2140)));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x2150 = -2;
	static uint32_t x2151 = UINT32_MAX;
	volatile uint32_t t155 = 22U;

    t155 = (x2149%(x2150/(x2151/x2152)));

    if (t155 != 4294934528U) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x2162 = INT64_MAX;
	int64_t x2163 = INT64_MIN;
	uint16_t x2164 = UINT16_MAX;
	volatile int64_t t156 = 5525LL;

    t156 = (x2161%(x2162/(x2163/x2164)));

    if (t156 != -6829LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint64_t x2165 = 34075LLU;
	static int16_t x2166 = INT16_MIN;
	int8_t x2167 = INT8_MIN;
	int8_t x2168 = -1;
	uint64_t t157 = 428LLU;

    t157 = (x2165%(x2166/(x2167/x2168)));

    if (t157 != 34075LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x2193 = UINT32_MAX;
	static int32_t x2194 = 218332374;
	static volatile uint8_t x2195 = UINT8_MAX;
	int64_t t158 = -58561483267328240LL;

    t158 = (x2193%(x2194/(x2195/x2196)));

    if (t158 != 243015LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x2202 = INT16_MIN;
	int32_t x2203 = 1;
	int16_t x2204 = -1;

    t159 = (x2201%(x2202/(x2203/x2204)));

    if (t159 != 32767LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x2241 = INT32_MAX;
	int64_t x2243 = 1875334216LL;

    t160 = (x2241%(x2242/(x2243/x2244)));

    if (t160 != 1531LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x2261 = INT16_MAX;
	volatile uint32_t x2263 = UINT32_MAX;
	uint16_t x2264 = 4130U;
	volatile uint32_t t161 = 12312U;

    t161 = (x2261%(x2262/(x2263/x2264)));

    if (t161 != 3864U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x2265 = 1810U;
	uint64_t x2266 = UINT64_MAX;
	uint32_t x2267 = 1218U;
	uint16_t x2268 = 1U;
	uint64_t t162 = 649LLU;

    t162 = (x2265%(x2266/(x2267/x2268)));

    if (t162 != 1810LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int64_t x2277 = INT64_MAX;
	volatile int32_t x2278 = -1;
	volatile int16_t x2279 = -1;
	int8_t x2280 = -1;
	volatile int64_t t163 = -357723LL;

    t163 = (x2277%(x2278/(x2279/x2280)));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int16_t x2285 = INT16_MIN;
	int32_t x2286 = INT32_MIN;
	int8_t x2287 = INT8_MIN;
	static int32_t x2288 = 8;
	static volatile int32_t t164 = 54393678;

    t164 = (x2285%(x2286/(x2287/x2288)));

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x2289 = 22;
	uint64_t x2291 = 3249431416871LLU;
	static int8_t x2292 = 1;
	static uint64_t t165 = 12939237638578LLU;

    t165 = (x2289%(x2290/(x2291/x2292)));

    if (t165 != 22LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x2293 = 49721U;
	int16_t x2294 = -9964;
	int16_t x2295 = -1578;
	uint16_t x2296 = 29U;
	volatile uint32_t t166 = 42270388U;

    t166 = (x2293%(x2294/(x2295/x2296)));

    if (t166 != 41U) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x2305 = INT8_MIN;
	int32_t x2306 = -3851;
	uint8_t x2307 = 77U;
	int16_t x2308 = -1;
	volatile int32_t t167 = -18218834;

    t167 = (x2305%(x2306/(x2307/x2308)));

    if (t167 != -28) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x2333 = INT32_MAX;
	volatile int16_t x2334 = INT16_MIN;
	static volatile int16_t x2335 = INT16_MIN;
	volatile int32_t t168 = -7;

    t168 = (x2333%(x2334/(x2335/x2336)));

    if (t168 != 32767) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x2345 = 27595U;
	int16_t x2346 = 15785;
	uint16_t x2348 = 66U;
	uint64_t t169 = 34516936213938707LLU;

    t169 = (x2345%(x2346/(x2347/x2348)));

    if (t169 != 1LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x2393 = 217315620U;
	uint64_t x2394 = UINT64_MAX;
	static volatile int32_t x2395 = 55112878;
	static uint32_t x2396 = 2U;
	uint64_t t170 = 47637766LLU;

    t170 = (x2393%(x2394/(x2395/x2396)));

    if (t170 != 217315620LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x2405 = INT16_MAX;
	uint32_t x2408 = UINT32_MAX;
	static uint32_t t171 = 71976847U;

    t171 = (x2405%(x2406/(x2407/x2408)));

    if (t171 != 32767U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x2417 = 268013LLU;
	uint64_t x2418 = 148481216464733LLU;
	static int8_t x2419 = INT8_MAX;
	uint8_t x2420 = 46U;
	uint64_t t172 = 14LLU;

    t172 = (x2417%(x2418/(x2419/x2420)));

    if (t172 != 268013LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x2453 = 2U;
	static int32_t x2455 = -2;
	int32_t t173 = 1;

    t173 = (x2453%(x2454/(x2455/x2456)));

    if (t173 != 2) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x2481 = -1;
	int64_t x2483 = INT64_MIN;
	int64_t x2484 = INT64_MIN;

    t174 = (x2481%(x2482/(x2483/x2484)));

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x2493 = INT16_MAX;
	int64_t x2494 = -792425062068LL;
	int32_t x2495 = INT32_MIN;
	volatile int64_t t175 = 57039913441196959LL;

    t175 = (x2493%(x2494/(x2495/x2496)));

    if (t175 != 32767LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x2519 = INT32_MIN;

    t176 = (x2517%(x2518/(x2519/x2520)));

    if (t176 != 1728205596U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x2549 = 36;
	int64_t x2551 = -1LL;
	uint64_t x2552 = 50341003919132301LLU;

    t177 = (x2549%(x2550/(x2551/x2552)));

    if (t177 != 36LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x2553 = UINT32_MAX;
	uint8_t x2555 = 12U;
	uint32_t t178 = 1U;

    t178 = (x2553%(x2554/(x2555/x2556)));

    if (t178 != 5U) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x2598 = INT8_MIN;
	static volatile uint64_t x2599 = UINT64_MAX;
	volatile uint64_t x2600 = UINT64_MAX;
	volatile uint64_t t179 = 2122035700LLU;

    t179 = (x2597%(x2598/(x2599/x2600)));

    if (t179 != 103104746LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x2609 = UINT64_MAX;
	uint64_t x2610 = 16825805909664424LLU;
	int64_t x2611 = 9566365504089LL;
	uint32_t x2612 = 2143639541U;

    t180 = (x2609%(x2610/(x2611/x2612)));

    if (t180 != 658964319773LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x2613 = 297202U;
	volatile uint16_t x2614 = 13875U;
	int16_t x2616 = INT16_MIN;
	volatile uint32_t t181 = 1192U;

    t181 = (x2613%(x2614/(x2615/x2616)));

    if (t181 != 297202U) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x2621 = INT8_MIN;
	int8_t x2623 = INT8_MAX;
	int64_t t182 = 88042195919036LL;

    t182 = (x2621%(x2622/(x2623/x2624)));

    if (t182 != -128LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x2629 = -1903727;
	int64_t x2630 = -1LL;
	static volatile uint64_t x2631 = UINT64_MAX;
	int64_t x2632 = INT64_MIN;
	uint64_t t183 = 1047LLU;

    t183 = (x2629%(x2630/(x2631/x2632)));

    if (t183 != 18446744073707647889LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x2633 = INT32_MIN;
	uint32_t x2634 = 7142085U;
	int8_t x2635 = INT8_MAX;
	static volatile int64_t x2636 = -1LL;
	static volatile int64_t t184 = 79LL;

    t184 = (x2633%(x2634/(x2635/x2636)));

    if (t184 != -55752LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x2649 = UINT64_MAX;
	volatile int64_t x2650 = INT64_MIN;
	int64_t x2651 = -1969LL;
	uint8_t x2652 = 7U;
	uint64_t t185 = 11LLU;

    t185 = (x2649%(x2650/(x2651/x2652)));

    if (t185 != 381LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x2665 = UINT8_MAX;
	int8_t x2666 = -1;
	volatile uint64_t x2667 = 31914926072LLU;
	static uint8_t x2668 = UINT8_MAX;
	volatile uint64_t t186 = 8281LLU;

    t186 = (x2665%(x2666/(x2667/x2668)));

    if (t186 != 255LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x2677 = -1LL;
	uint16_t x2678 = UINT16_MAX;
	int64_t t187 = 673LL;

    t187 = (x2677%(x2678/(x2679/x2680)));

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x2693 = 686;
	int32_t x2695 = INT32_MIN;
	int32_t x2696 = -5;
	uint64_t t188 = 0LLU;

    t188 = (x2693%(x2694/(x2695/x2696)));

    if (t188 != 686LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x2701 = 1278;
	static int64_t x2702 = INT64_MAX;
	int32_t x2703 = INT32_MIN;
	volatile uint8_t x2704 = 73U;
	int64_t t189 = -14LL;

    t189 = (x2701%(x2702/(x2703/x2704)));

    if (t189 != 1278LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x2753 = 3LLU;
	uint32_t x2754 = UINT32_MAX;
	uint8_t x2756 = 3U;
	volatile uint64_t t190 = 175428LLU;

    t190 = (x2753%(x2754/(x2755/x2756)));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x2757 = INT16_MIN;
	static int16_t x2759 = 897;
	int8_t x2760 = INT8_MIN;
	volatile int32_t t191 = 3944;

    t191 = (x2757%(x2758/(x2759/x2760)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x2765 = INT16_MIN;
	static uint16_t x2766 = UINT16_MAX;
	uint16_t x2767 = 3117U;
	int32_t t192 = 141907;

    t192 = (x2765%(x2766/(x2767/x2768)));

    if (t192 != -8) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x2769 = 1LLU;
	static int8_t x2770 = INT8_MIN;
	int8_t x2771 = INT8_MIN;
	uint8_t x2772 = 86U;

    t193 = (x2769%(x2770/(x2771/x2772)));

    if (t193 != 1LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x2806 = INT16_MIN;
	uint32_t x2807 = 74145U;
	int8_t x2808 = INT8_MAX;
	uint32_t t194 = 815364319U;

    t194 = (x2805%(x2806/(x2807/x2808)));

    if (t194 != 67U) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x2822 = 3;
	int32_t x2823 = INT32_MIN;
	int32_t x2824 = INT32_MAX;
	int32_t t195 = 0;

    t195 = (x2821%(x2822/(x2823/x2824)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x2830 = 153721561342198LLU;
	int16_t x2831 = 5924;
	volatile uint64_t t196 = 25808860280LLU;

    t196 = (x2829%(x2830/(x2831/x2832)));

    if (t196 != 385638817215LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x2841 = 5U;
	uint64_t x2842 = 269LLU;
	volatile uint8_t x2843 = 46U;
	volatile uint64_t t197 = 26LLU;

    t197 = (x2841%(x2842/(x2843/x2844)));

    if (t197 != 5LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x2849 = INT64_MIN;
	int32_t x2851 = INT32_MIN;
	volatile int64_t x2852 = -1LL;
	uint64_t t198 = 7733803957964187357LLU;

    t198 = (x2849%(x2850/(x2851/x2852)));

    if (t198 != 1073741824LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x2853 = 630634369LL;
	volatile uint16_t x2855 = UINT16_MAX;
	volatile uint64_t x2856 = 9LLU;

    t199 = (x2853%(x2854/(x2855/x2856)));

    if (t199 != 630634369LLU) { NG(); } else { ; }
	
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


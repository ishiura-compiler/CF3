
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

uint32_t x32 = 564473856U;
int32_t t1 = 1;
uint64_t x43 = UINT64_MAX;
static uint32_t x53 = 222112U;
volatile int32_t t5 = -947;
volatile int8_t x92 = INT8_MIN;
static volatile int64_t x96 = -1LL;
static int32_t t8 = -1835323;
static uint8_t x97 = UINT8_MAX;
volatile uint32_t x105 = 22353U;
int16_t x106 = INT16_MIN;
int8_t x108 = 1;
static int32_t t11 = -5;
int32_t x127 = INT32_MIN;
uint8_t x128 = 8U;
int32_t x130 = -647265687;
volatile int64_t x131 = -15LL;
int32_t t15 = 14;
int64_t x171 = INT64_MIN;
int32_t t17 = -102;
static int32_t t19 = 1;
int32_t x191 = -94676;
int32_t x202 = INT32_MIN;
int8_t x236 = INT8_MAX;
uint8_t x296 = 8U;
int64_t x325 = INT64_MAX;
volatile int8_t x327 = 3;
volatile int16_t x343 = -1392;
static int32_t x344 = -1;
uint8_t x347 = UINT8_MAX;
static int8_t x353 = INT8_MIN;
volatile int16_t x356 = INT16_MIN;
int32_t x396 = 364917;
volatile uint16_t x399 = 428U;
static int64_t x405 = INT64_MAX;
int16_t x427 = INT16_MAX;
int32_t x458 = INT32_MIN;
volatile uint8_t x460 = 3U;
int64_t x461 = INT64_MIN;
volatile uint8_t x463 = 5U;
volatile int32_t t46 = -16275;
static int8_t x475 = 1;
volatile int32_t t47 = -9640413;
volatile int8_t x485 = INT8_MAX;
uint16_t x487 = 4U;
int8_t x499 = 22;
int32_t t50 = 11863;
static uint16_t x507 = 995U;
int8_t x508 = -1;
uint16_t x523 = 5813U;
int16_t x564 = -1;
uint32_t x585 = 12475443U;
static volatile uint64_t x586 = UINT64_MAX;
uint8_t x588 = 28U;
int32_t x593 = INT32_MIN;
int16_t x598 = INT16_MIN;
int32_t x605 = INT32_MIN;
static volatile int32_t t62 = 7;
int32_t t63 = -21801;
int32_t x618 = -1779541;
static int16_t x635 = INT16_MIN;
volatile int32_t x636 = -1;
static volatile int16_t x637 = -1;
volatile int16_t x638 = 7;
int16_t x645 = -7;
int8_t x646 = INT8_MAX;
static volatile uint16_t x665 = 546U;
uint16_t x666 = 473U;
static volatile int16_t x679 = INT16_MAX;
static int8_t x689 = -47;
int32_t t71 = -76705267;
uint8_t x727 = UINT8_MAX;
static volatile int32_t t74 = 265;
static volatile int32_t x749 = -525789494;
volatile int16_t x750 = -535;
uint8_t x758 = 1U;
volatile int32_t t77 = 87;
volatile int64_t x781 = INT64_MIN;
int8_t x796 = INT8_MIN;
int16_t x810 = -1240;
int8_t x812 = 1;
volatile uint64_t x825 = 263624308928126105LLU;
volatile int8_t x836 = -1;
int64_t x837 = -1LL;
static uint32_t x839 = 3U;
int32_t t85 = 2;
int64_t x864 = -118290LL;
uint64_t x871 = 0LLU;
static uint8_t x872 = UINT8_MAX;
int32_t t89 = 45;
volatile int32_t t91 = 208;
static int16_t x918 = INT16_MAX;
volatile int32_t x919 = -1;
volatile int32_t t92 = -3560;
static volatile int32_t t94 = 1;
int32_t x982 = -1;
int8_t x988 = -1;
uint64_t x999 = 5368385903315LLU;
int16_t x1010 = INT16_MAX;
static int8_t x1011 = INT8_MIN;
static int32_t x1012 = -1;
volatile int32_t t103 = 12718;
int16_t x1026 = INT16_MIN;
int16_t x1033 = INT16_MIN;
int32_t x1035 = INT32_MAX;
int8_t x1036 = INT8_MAX;
volatile int32_t x1040 = INT32_MIN;
uint32_t x1057 = 57U;
int64_t x1059 = INT64_MAX;
volatile uint8_t x1086 = 2U;
volatile int16_t x1089 = INT16_MAX;
static int32_t t111 = -1443;
static int64_t x1109 = INT64_MIN;
int32_t x1111 = INT32_MAX;
int32_t t114 = -208826016;
uint8_t x1187 = UINT8_MAX;
volatile int8_t x1188 = 5;
int16_t x1189 = -1;
volatile int32_t t118 = -1;
uint16_t x1223 = 6U;
uint32_t x1236 = 2335830U;
int64_t x1238 = INT64_MIN;
volatile int16_t x1239 = INT16_MIN;
volatile int32_t t123 = 187825;
int16_t x1250 = 70;
int32_t t124 = 8035;
static int32_t x1280 = -1;
int32_t x1291 = -468583;
int32_t t129 = 769406;
uint32_t x1347 = 27U;
uint32_t x1370 = 882U;
int8_t x1372 = -49;
static int32_t x1376 = INT32_MIN;
static uint8_t x1397 = UINT8_MAX;
int16_t x1409 = 5062;
uint8_t x1436 = 4U;
volatile int32_t t138 = 17;
static uint8_t x1442 = 1U;
uint16_t x1479 = UINT16_MAX;
int32_t x1508 = 21632359;
int8_t x1546 = INT8_MIN;
int32_t x1548 = -1;
static uint16_t x1575 = 31389U;
static uint8_t x1576 = UINT8_MAX;
int64_t x1589 = 38224LL;
int32_t t148 = 1555584;
int8_t x1629 = INT8_MIN;
uint32_t x1632 = 12U;
uint64_t x1641 = UINT64_MAX;
uint64_t x1647 = UINT64_MAX;
uint16_t x1648 = 115U;
int16_t x1656 = -1;
int32_t t154 = -992935;
uint32_t x1669 = 1260415U;
static int16_t x1671 = -1;
int32_t t156 = -1709;
volatile uint32_t x1686 = 1359U;
uint16_t x1708 = UINT16_MAX;
static int64_t x1712 = -1LL;
int8_t x1718 = INT8_MIN;
uint8_t x1719 = 1U;
volatile uint8_t x1750 = 3U;
int64_t x1753 = INT64_MAX;
int32_t x1759 = -16188585;
int16_t x1792 = -1;
int32_t x1794 = INT32_MIN;
int8_t x1821 = INT8_MIN;
int32_t t169 = -258641417;
int32_t x1831 = 61;
volatile int8_t x1832 = -1;
int8_t x1833 = 13;
int8_t x1834 = INT8_MAX;
uint64_t x1864 = UINT64_MAX;
volatile int32_t t174 = 6517447;
volatile int64_t x1884 = INT64_MAX;
static int64_t x1899 = 1306277102922347LL;
uint8_t x1900 = 8U;
volatile uint32_t x1921 = 25998743U;
static uint16_t x1924 = 256U;
uint64_t x1938 = 1261420LLU;
volatile int32_t t179 = -1;
int8_t x2012 = -9;
int32_t t183 = -115860803;
int64_t x2016 = -1LL;
int32_t x2017 = INT32_MIN;
int64_t x2018 = 368174410LL;
volatile int32_t t185 = -1845;
int32_t x2063 = -742;
static int16_t x2090 = 10821;
uint64_t x2106 = UINT64_MAX;
int16_t x2110 = 1;
uint16_t x2111 = 6U;
int64_t x2112 = -1LL;
static int32_t t195 = -4021322;
int16_t x2118 = 0;
uint64_t x2141 = 35090081965202640LLU;
int32_t x2144 = -1;
static volatile int32_t t199 = 0;


void f0(void) {
    	int64_t x9 = INT64_MAX;
	uint16_t x10 = 195U;
	int16_t x11 = INT16_MIN;
	volatile int8_t x12 = INT8_MIN;
	int32_t t0 = 28812118;

    t0 = ((x9!=x10)>>(x11%x12));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x29 = INT8_MAX;
	uint16_t x30 = 23916U;
	uint8_t x31 = 0U;

    t1 = ((x29!=x30)>>(x31%x32));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x37 = 343997546577LL;
	int64_t x38 = -10739278LL;
	int64_t x39 = INT64_MAX;
	int8_t x40 = -19;
	static volatile int32_t t2 = 2845271;

    t2 = ((x37!=x38)>>(x39%x40));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x41 = INT64_MIN;
	volatile uint16_t x42 = 11326U;
	static int8_t x44 = 10;
	static int32_t t3 = -1;

    t3 = ((x41!=x42)>>(x43%x44));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x45 = INT8_MIN;
	uint32_t x46 = 86660661U;
	int8_t x47 = INT8_MAX;
	int32_t x48 = -52;
	int32_t t4 = -4;

    t4 = ((x45!=x46)>>(x47%x48));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x54 = 1214U;
	uint16_t x55 = UINT16_MAX;
	uint8_t x56 = UINT8_MAX;

    t5 = ((x53!=x54)>>(x55%x56));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x85 = -1;
	int32_t x86 = -1;
	int8_t x87 = 11;
	uint32_t x88 = UINT32_MAX;
	static int32_t t6 = 76041129;

    t6 = ((x85!=x86)>>(x87%x88));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x89 = UINT8_MAX;
	int32_t x90 = -1;
	int64_t x91 = 212759LL;
	volatile int32_t t7 = 123923262;

    t7 = ((x89!=x90)>>(x91%x92));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x93 = 22630U;
	volatile uint16_t x94 = 1U;
	int8_t x95 = 0;

    t8 = ((x93!=x94)>>(x95%x96));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x98 = -1;
	int8_t x99 = INT8_MIN;
	volatile int8_t x100 = -1;
	volatile int32_t t9 = -946364;

    t9 = ((x97!=x98)>>(x99%x100));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x101 = -16;
	int16_t x102 = 1480;
	static int16_t x103 = INT16_MIN;
	int64_t x104 = -1LL;
	static volatile int32_t t10 = -2;

    t10 = ((x101!=x102)>>(x103%x104));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x107 = INT8_MIN;

    t11 = ((x105!=x106)>>(x107%x108));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x121 = 4;
	int8_t x122 = -1;
	uint32_t x123 = 1U;
	int64_t x124 = -794LL;
	volatile int32_t t12 = 223;

    t12 = ((x121!=x122)>>(x123%x124));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x125 = 2141724U;
	int16_t x126 = 169;
	volatile int32_t t13 = -63;

    t13 = ((x125!=x126)>>(x127%x128));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x129 = -1;
	volatile int8_t x132 = -1;
	volatile int32_t t14 = 1;

    t14 = ((x129!=x130)>>(x131%x132));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x145 = -57268643;
	int8_t x146 = -1;
	static uint64_t x147 = 3289LLU;
	static volatile uint8_t x148 = 39U;

    t15 = ((x145!=x146)>>(x147%x148));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x149 = -1;
	int64_t x150 = 2248539410533268LL;
	uint16_t x151 = 12U;
	volatile uint32_t x152 = 1022U;
	volatile int32_t t16 = 22;

    t16 = ((x149!=x150)>>(x151%x152));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x169 = -1LL;
	uint8_t x170 = 15U;
	static int32_t x172 = -1;

    t17 = ((x169!=x170)>>(x171%x172));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x173 = UINT64_MAX;
	int32_t x174 = INT32_MIN;
	static int64_t x175 = 30483609964LL;
	static int64_t x176 = -1LL;
	volatile int32_t t18 = 177;

    t18 = ((x173!=x174)>>(x175%x176));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x177 = 15U;
	uint8_t x178 = 3U;
	uint16_t x179 = 8U;
	uint16_t x180 = UINT16_MAX;

    t19 = ((x177!=x178)>>(x179%x180));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x189 = -1;
	static volatile uint16_t x190 = 3485U;
	static uint64_t x192 = 7LLU;
	int32_t t20 = -2438889;

    t20 = ((x189!=x190)>>(x191%x192));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x193 = UINT64_MAX;
	volatile int32_t x194 = INT32_MIN;
	volatile uint64_t x195 = UINT64_MAX;
	volatile int8_t x196 = -1;
	volatile int32_t t21 = 427703209;

    t21 = ((x193!=x194)>>(x195%x196));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x201 = 0;
	int32_t x203 = -144;
	static int8_t x204 = -1;
	static volatile int32_t t22 = -628688;

    t22 = ((x201!=x202)>>(x203%x204));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x213 = INT8_MAX;
	volatile int8_t x214 = INT8_MAX;
	uint32_t x215 = UINT32_MAX;
	int8_t x216 = -5;
	int32_t t23 = -178781833;

    t23 = ((x213!=x214)>>(x215%x216));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x225 = INT8_MAX;
	int32_t x226 = INT32_MAX;
	uint32_t x227 = UINT32_MAX;
	static volatile int8_t x228 = INT8_MAX;
	volatile int32_t t24 = -4;

    t24 = ((x225!=x226)>>(x227%x228));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x233 = 1U;
	uint32_t x234 = UINT32_MAX;
	volatile uint64_t x235 = UINT64_MAX;
	volatile int32_t t25 = 1;

    t25 = ((x233!=x234)>>(x235%x236));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x277 = UINT32_MAX;
	int8_t x278 = INT8_MIN;
	int64_t x279 = INT64_MIN;
	int16_t x280 = INT16_MIN;
	volatile int32_t t26 = 136;

    t26 = ((x277!=x278)>>(x279%x280));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x281 = -19;
	uint64_t x282 = 1913LLU;
	uint64_t x283 = UINT64_MAX;
	uint8_t x284 = 46U;
	int32_t t27 = -89;

    t27 = ((x281!=x282)>>(x283%x284));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x289 = UINT8_MAX;
	int64_t x290 = 1191247130LL;
	uint16_t x291 = UINT16_MAX;
	int16_t x292 = -1;
	int32_t t28 = -258;

    t28 = ((x289!=x290)>>(x291%x292));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x293 = 19540U;
	static volatile int32_t x294 = 247536;
	int32_t x295 = INT32_MIN;
	volatile int32_t t29 = -1669;

    t29 = ((x293!=x294)>>(x295%x296));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x297 = -1;
	uint8_t x298 = 81U;
	uint64_t x299 = UINT64_MAX;
	uint16_t x300 = 2U;
	volatile int32_t t30 = 28526;

    t30 = ((x297!=x298)>>(x299%x300));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x326 = 1U;
	int8_t x328 = INT8_MIN;
	int32_t t31 = -6244929;

    t31 = ((x325!=x326)>>(x327%x328));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x337 = -1;
	volatile int16_t x338 = INT16_MIN;
	static uint16_t x339 = 338U;
	int32_t x340 = -1;
	volatile int32_t t32 = -2071;

    t32 = ((x337!=x338)>>(x339%x340));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x341 = INT16_MIN;
	uint64_t x342 = 29LLU;
	static int32_t t33 = 1042218909;

    t33 = ((x341!=x342)>>(x343%x344));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x345 = INT8_MIN;
	volatile int64_t x346 = -1LL;
	int8_t x348 = INT8_MAX;
	volatile int32_t t34 = -32677;

    t34 = ((x345!=x346)>>(x347%x348));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x354 = INT64_MAX;
	uint8_t x355 = 6U;
	int32_t t35 = -304;

    t35 = ((x353!=x354)>>(x355%x356));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x357 = 22;
	uint8_t x358 = 75U;
	static uint64_t x359 = 2577187338164LLU;
	volatile uint16_t x360 = 75U;
	int32_t t36 = -57906247;

    t36 = ((x357!=x358)>>(x359%x360));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x369 = UINT32_MAX;
	int32_t x370 = -1;
	int8_t x371 = 1;
	static uint32_t x372 = 89018U;
	static int32_t t37 = -524;

    t37 = ((x369!=x370)>>(x371%x372));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x393 = -1LL;
	static uint32_t x394 = 9U;
	uint16_t x395 = 0U;
	volatile int32_t t38 = 900;

    t38 = ((x393!=x394)>>(x395%x396));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x397 = INT16_MIN;
	uint32_t x398 = 17064898U;
	volatile int8_t x400 = -1;
	volatile int32_t t39 = 0;

    t39 = ((x397!=x398)>>(x399%x400));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x406 = INT8_MIN;
	volatile int8_t x407 = -63;
	static int16_t x408 = -1;
	int32_t t40 = 16459;

    t40 = ((x405!=x406)>>(x407%x408));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x425 = -21414;
	int16_t x426 = INT16_MAX;
	int8_t x428 = -8;
	int32_t t41 = -2877;

    t41 = ((x425!=x426)>>(x427%x428));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x441 = 13076;
	int8_t x442 = INT8_MIN;
	static volatile uint16_t x443 = 5685U;
	uint16_t x444 = 52U;
	volatile int32_t t42 = 757561873;

    t42 = ((x441!=x442)>>(x443%x444));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x445 = 800924129;
	int16_t x446 = INT16_MAX;
	int32_t x447 = INT32_MAX;
	int64_t x448 = -1LL;
	volatile int32_t t43 = 9518;

    t43 = ((x445!=x446)>>(x447%x448));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x457 = -1;
	static volatile int16_t x459 = INT16_MAX;
	volatile int32_t t44 = 541276;

    t44 = ((x457!=x458)>>(x459%x460));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x462 = INT32_MIN;
	int32_t x464 = INT32_MIN;
	static int32_t t45 = -2365;

    t45 = ((x461!=x462)>>(x463%x464));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x469 = 194;
	static int32_t x470 = -7167;
	int8_t x471 = 0;
	int64_t x472 = -1LL;

    t46 = ((x469!=x470)>>(x471%x472));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x473 = 1;
	uint16_t x474 = 498U;
	int16_t x476 = INT16_MIN;

    t47 = ((x473!=x474)>>(x475%x476));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x481 = INT32_MAX;
	static int64_t x482 = -357937045LL;
	static uint8_t x483 = 22U;
	uint16_t x484 = UINT16_MAX;
	volatile int32_t t48 = -485;

    t48 = ((x481!=x482)>>(x483%x484));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x486 = 27U;
	int64_t x488 = 9818528LL;
	volatile int32_t t49 = -1201537;

    t49 = ((x485!=x486)>>(x487%x488));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x497 = INT16_MAX;
	static volatile int8_t x498 = -1;
	static int8_t x500 = 1;

    t50 = ((x497!=x498)>>(x499%x500));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x505 = -2961;
	int32_t x506 = 16176;
	volatile int32_t t51 = -15704239;

    t51 = ((x505!=x506)>>(x507%x508));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x509 = INT16_MAX;
	int32_t x510 = INT32_MIN;
	uint64_t x511 = UINT64_MAX;
	static volatile int8_t x512 = INT8_MAX;
	volatile int32_t t52 = 2296;

    t52 = ((x509!=x510)>>(x511%x512));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x521 = 1;
	int8_t x522 = INT8_MIN;
	int8_t x524 = 11;
	volatile int32_t t53 = -110313;

    t53 = ((x521!=x522)>>(x523%x524));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x525 = -1;
	int8_t x526 = -1;
	int64_t x527 = INT64_MIN;
	static int8_t x528 = -2;
	volatile int32_t t54 = 0;

    t54 = ((x525!=x526)>>(x527%x528));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x529 = -3;
	static int16_t x530 = -10;
	volatile uint64_t x531 = 10LLU;
	static uint64_t x532 = 1517126812936LLU;
	volatile int32_t t55 = -83022642;

    t55 = ((x529!=x530)>>(x531%x532));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int8_t x537 = -19;
	static volatile int64_t x538 = -19908795107553802LL;
	static int64_t x539 = -26905327894138LL;
	uint16_t x540 = 34U;
	volatile int32_t t56 = -344567;

    t56 = ((x537!=x538)>>(x539%x540));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x545 = 43U;
	int64_t x546 = -1LL;
	static int64_t x547 = -4097824601668605LL;
	volatile int64_t x548 = -1LL;
	int32_t t57 = -9;

    t57 = ((x545!=x546)>>(x547%x548));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x561 = 28;
	int32_t x562 = -128714868;
	uint32_t x563 = UINT32_MAX;
	int32_t t58 = 322;

    t58 = ((x561!=x562)>>(x563%x564));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x587 = 63LLU;
	volatile int32_t t59 = -7564;

    t59 = ((x585!=x586)>>(x587%x588));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x594 = INT8_MAX;
	volatile int8_t x595 = -1;
	uint64_t x596 = UINT64_MAX;
	static volatile int32_t t60 = -37657;

    t60 = ((x593!=x594)>>(x595%x596));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x597 = UINT8_MAX;
	int8_t x599 = 15;
	volatile int8_t x600 = -1;
	int32_t t61 = -19;

    t61 = ((x597!=x598)>>(x599%x600));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x606 = 9U;
	volatile uint8_t x607 = 29U;
	volatile uint64_t x608 = 64101683095314LLU;

    t62 = ((x605!=x606)>>(x607%x608));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x609 = 468916665LL;
	int64_t x610 = -9383LL;
	uint64_t x611 = UINT64_MAX;
	volatile uint64_t x612 = UINT64_MAX;

    t63 = ((x609!=x610)>>(x611%x612));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x617 = INT8_MIN;
	uint16_t x619 = 2U;
	static volatile int8_t x620 = INT8_MIN;
	int32_t t64 = -46040099;

    t64 = ((x617!=x618)>>(x619%x620));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x633 = INT64_MIN;
	uint32_t x634 = UINT32_MAX;
	volatile int32_t t65 = -364247402;

    t65 = ((x633!=x634)>>(x635%x636));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x639 = INT32_MAX;
	int32_t x640 = INT32_MAX;
	int32_t t66 = -755515;

    t66 = ((x637!=x638)>>(x639%x640));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x647 = 9U;
	uint8_t x648 = UINT8_MAX;
	static volatile int32_t t67 = 1;

    t67 = ((x645!=x646)>>(x647%x648));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x667 = 26U;
	int64_t x668 = 13870456955899LL;
	int32_t t68 = -96;

    t68 = ((x665!=x666)>>(x667%x668));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x677 = INT32_MIN;
	int32_t x678 = -404066;
	int64_t x680 = -76LL;
	int32_t t69 = 46;

    t69 = ((x677!=x678)>>(x679%x680));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x690 = INT32_MIN;
	int64_t x691 = INT64_MIN;
	int8_t x692 = 2;
	int32_t t70 = -54;

    t70 = ((x689!=x690)>>(x691%x692));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x697 = 1282649LLU;
	volatile int64_t x698 = -3636053240701LL;
	uint64_t x699 = UINT64_MAX;
	int32_t x700 = INT32_MAX;

    t71 = ((x697!=x698)>>(x699%x700));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x713 = INT32_MIN;
	uint16_t x714 = UINT16_MAX;
	uint16_t x715 = UINT16_MAX;
	int64_t x716 = -1LL;
	int32_t t72 = -3;

    t72 = ((x713!=x714)>>(x715%x716));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x721 = -1;
	int32_t x722 = -75;
	int16_t x723 = INT16_MIN;
	uint32_t x724 = 53U;
	int32_t t73 = 250;

    t73 = ((x721!=x722)>>(x723%x724));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x725 = INT16_MAX;
	int8_t x726 = -1;
	int8_t x728 = INT8_MAX;

    t74 = ((x725!=x726)>>(x727%x728));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x751 = UINT16_MAX;
	volatile int8_t x752 = -1;
	int32_t t75 = -49;

    t75 = ((x749!=x750)>>(x751%x752));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x757 = 20138993500LLU;
	int32_t x759 = INT32_MIN;
	uint32_t x760 = 5U;
	int32_t t76 = 1;

    t76 = ((x757!=x758)>>(x759%x760));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x765 = INT64_MIN;
	int8_t x766 = 0;
	volatile int16_t x767 = 79;
	int32_t x768 = 2;

    t77 = ((x765!=x766)>>(x767%x768));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x782 = INT8_MIN;
	int64_t x783 = INT64_MAX;
	int16_t x784 = INT16_MAX;
	int32_t t78 = -27684;

    t78 = ((x781!=x782)>>(x783%x784));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x793 = -1LL;
	volatile uint32_t x794 = UINT32_MAX;
	static int64_t x795 = 0LL;
	int32_t t79 = -25490;

    t79 = ((x793!=x794)>>(x795%x796));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x801 = -7;
	uint64_t x802 = UINT64_MAX;
	int32_t x803 = INT32_MIN;
	int16_t x804 = INT16_MIN;
	static int32_t t80 = 5856523;

    t80 = ((x801!=x802)>>(x803%x804));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x809 = INT16_MIN;
	int16_t x811 = 2;
	volatile int32_t t81 = -38;

    t81 = ((x809!=x810)>>(x811%x812));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x817 = UINT8_MAX;
	int8_t x818 = INT8_MIN;
	int8_t x819 = INT8_MAX;
	int32_t x820 = -1;
	int32_t t82 = 37889;

    t82 = ((x817!=x818)>>(x819%x820));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x826 = INT32_MIN;
	int32_t x827 = -1;
	static int16_t x828 = -1;
	int32_t t83 = -673;

    t83 = ((x825!=x826)>>(x827%x828));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x833 = UINT16_MAX;
	int16_t x834 = INT16_MAX;
	uint8_t x835 = 21U;
	static int32_t t84 = -19855532;

    t84 = ((x833!=x834)>>(x835%x836));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x838 = INT8_MIN;
	static int8_t x840 = INT8_MIN;

    t85 = ((x837!=x838)>>(x839%x840));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x857 = INT32_MIN;
	static int64_t x858 = INT64_MAX;
	int8_t x859 = 6;
	volatile uint8_t x860 = 28U;
	volatile int32_t t86 = 33138564;

    t86 = ((x857!=x858)>>(x859%x860));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x861 = -220353984263LL;
	int64_t x862 = 402824678LL;
	volatile int32_t x863 = 1;
	static volatile int32_t t87 = -5489;

    t87 = ((x861!=x862)>>(x863%x864));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int64_t x865 = INT64_MAX;
	volatile int32_t x866 = 0;
	static int8_t x867 = 17;
	uint32_t x868 = 102U;
	volatile int32_t t88 = 235771;

    t88 = ((x865!=x866)>>(x867%x868));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x869 = UINT16_MAX;
	int64_t x870 = -1LL;

    t89 = ((x869!=x870)>>(x871%x872));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x893 = 6191760653501304915LLU;
	int8_t x894 = -39;
	static int32_t x895 = INT32_MIN;
	int64_t x896 = -1LL;
	volatile int32_t t90 = 270;

    t90 = ((x893!=x894)>>(x895%x896));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x897 = INT8_MAX;
	static uint16_t x898 = 0U;
	int64_t x899 = -1LL;
	int32_t x900 = -1;

    t91 = ((x897!=x898)>>(x899%x900));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x917 = INT16_MAX;
	volatile int64_t x920 = -1LL;

    t92 = ((x917!=x918)>>(x919%x920));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x925 = UINT16_MAX;
	int64_t x926 = INT64_MIN;
	uint8_t x927 = 0U;
	int32_t x928 = INT32_MIN;
	volatile int32_t t93 = 423717188;

    t93 = ((x925!=x926)>>(x927%x928));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int16_t x929 = -1;
	int8_t x930 = -1;
	int16_t x931 = 0;
	uint32_t x932 = 7239947U;

    t94 = ((x929!=x930)>>(x931%x932));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x937 = INT64_MAX;
	static int8_t x938 = -1;
	int8_t x939 = -1;
	int16_t x940 = -1;
	int32_t t95 = 14257;

    t95 = ((x937!=x938)>>(x939%x940));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x941 = INT16_MIN;
	uint16_t x942 = UINT16_MAX;
	int64_t x943 = INT64_MIN;
	static int8_t x944 = -1;
	volatile int32_t t96 = 0;

    t96 = ((x941!=x942)>>(x943%x944));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x957 = INT8_MIN;
	uint64_t x958 = 1800678LLU;
	uint8_t x959 = 31U;
	volatile int8_t x960 = -1;
	int32_t t97 = 63;

    t97 = ((x957!=x958)>>(x959%x960));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x981 = INT8_MIN;
	int32_t x983 = -1;
	uint64_t x984 = 5LLU;
	static int32_t t98 = 801251;

    t98 = ((x981!=x982)>>(x983%x984));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x985 = 20;
	int16_t x986 = INT16_MAX;
	int8_t x987 = 1;
	int32_t t99 = 3;

    t99 = ((x985!=x986)>>(x987%x988));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x993 = -1;
	static volatile uint8_t x994 = 1U;
	uint32_t x995 = UINT32_MAX;
	static int16_t x996 = -1;
	volatile int32_t t100 = 8;

    t100 = ((x993!=x994)>>(x995%x996));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x997 = 388064LLU;
	uint64_t x998 = 728951486524LLU;
	uint8_t x1000 = 12U;
	int32_t t101 = -202799256;

    t101 = ((x997!=x998)>>(x999%x1000));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x1005 = 17517055U;
	int8_t x1006 = -34;
	static int8_t x1007 = 25;
	int64_t x1008 = INT64_MIN;
	static volatile int32_t t102 = -228586;

    t102 = ((x1005!=x1006)>>(x1007%x1008));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x1009 = INT8_MAX;

    t103 = ((x1009!=x1010)>>(x1011%x1012));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x1025 = INT8_MIN;
	int64_t x1027 = INT64_MAX;
	volatile int16_t x1028 = INT16_MAX;
	volatile int32_t t104 = -329;

    t104 = ((x1025!=x1026)>>(x1027%x1028));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x1034 = INT16_MAX;
	static int32_t t105 = -21;

    t105 = ((x1033!=x1034)>>(x1035%x1036));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x1037 = 0U;
	int32_t x1038 = -1;
	static int64_t x1039 = INT64_MIN;
	volatile int32_t t106 = 6;

    t106 = ((x1037!=x1038)>>(x1039%x1040));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x1058 = 21744;
	volatile int32_t x1060 = -1;
	int32_t t107 = 9993459;

    t107 = ((x1057!=x1058)>>(x1059%x1060));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x1073 = INT64_MIN;
	int16_t x1074 = -1;
	int8_t x1075 = 3;
	uint16_t x1076 = 4383U;
	volatile int32_t t108 = 265051;

    t108 = ((x1073!=x1074)>>(x1075%x1076));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x1077 = 706U;
	static int16_t x1078 = INT16_MIN;
	int32_t x1079 = INT32_MAX;
	static int8_t x1080 = INT8_MAX;
	int32_t t109 = 511853;

    t109 = ((x1077!=x1078)>>(x1079%x1080));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x1085 = UINT8_MAX;
	static volatile uint16_t x1087 = 206U;
	int8_t x1088 = -1;
	volatile int32_t t110 = -58611198;

    t110 = ((x1085!=x1086)>>(x1087%x1088));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x1090 = -5501520451LL;
	int32_t x1091 = INT32_MAX;
	int16_t x1092 = -1;

    t111 = ((x1089!=x1090)>>(x1091%x1092));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x1105 = -1768963;
	uint64_t x1106 = 881521930065LLU;
	uint16_t x1107 = 91U;
	int64_t x1108 = -1LL;
	static int32_t t112 = 0;

    t112 = ((x1105!=x1106)>>(x1107%x1108));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x1110 = -1;
	static int16_t x1112 = INT16_MAX;
	volatile int32_t t113 = -150355467;

    t113 = ((x1109!=x1110)>>(x1111%x1112));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x1117 = 143322028581703LLU;
	static volatile int16_t x1118 = -1;
	uint16_t x1119 = UINT16_MAX;
	static int16_t x1120 = -201;

    t114 = ((x1117!=x1118)>>(x1119%x1120));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x1173 = INT8_MAX;
	volatile uint32_t x1174 = UINT32_MAX;
	int32_t x1175 = INT32_MIN;
	static int16_t x1176 = -1;
	int32_t t115 = 1364501;

    t115 = ((x1173!=x1174)>>(x1175%x1176));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x1185 = -1LL;
	int16_t x1186 = INT16_MAX;
	volatile int32_t t116 = 244510;

    t116 = ((x1185!=x1186)>>(x1187%x1188));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x1190 = -1;
	uint32_t x1191 = 9U;
	int64_t x1192 = INT64_MAX;
	int32_t t117 = 38353;

    t117 = ((x1189!=x1190)>>(x1191%x1192));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x1193 = -1;
	uint8_t x1194 = UINT8_MAX;
	int64_t x1195 = 2LL;
	static volatile int64_t x1196 = INT64_MAX;

    t118 = ((x1193!=x1194)>>(x1195%x1196));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x1213 = INT8_MIN;
	static int8_t x1214 = -1;
	int32_t x1215 = 793;
	static volatile uint8_t x1216 = UINT8_MAX;
	int32_t t119 = 21;

    t119 = ((x1213!=x1214)>>(x1215%x1216));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x1221 = 0;
	uint16_t x1222 = 16903U;
	static uint32_t x1224 = 263U;
	int32_t t120 = 879768;

    t120 = ((x1221!=x1222)>>(x1223%x1224));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int64_t x1233 = 1470914821016665141LL;
	volatile int32_t x1234 = -21741;
	static int8_t x1235 = 1;
	static volatile int32_t t121 = 20466;

    t121 = ((x1233!=x1234)>>(x1235%x1236));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x1237 = -5;
	int32_t x1240 = -1;
	volatile int32_t t122 = 903;

    t122 = ((x1237!=x1238)>>(x1239%x1240));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x1245 = INT64_MAX;
	volatile uint16_t x1246 = 5U;
	int32_t x1247 = 0;
	int8_t x1248 = 1;

    t123 = ((x1245!=x1246)>>(x1247%x1248));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x1249 = 2478U;
	int32_t x1251 = -1;
	static int64_t x1252 = -1LL;

    t124 = ((x1249!=x1250)>>(x1251%x1252));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x1253 = INT64_MAX;
	int16_t x1254 = -1;
	int64_t x1255 = INT64_MIN;
	int16_t x1256 = INT16_MIN;
	volatile int32_t t125 = 253514;

    t125 = ((x1253!=x1254)>>(x1255%x1256));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x1261 = 7;
	volatile int64_t x1262 = INT64_MIN;
	volatile int8_t x1263 = 1;
	static int64_t x1264 = INT64_MIN;
	static volatile int32_t t126 = -305925077;

    t126 = ((x1261!=x1262)>>(x1263%x1264));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x1277 = 2U;
	uint16_t x1278 = UINT16_MAX;
	volatile int32_t x1279 = INT32_MIN;
	volatile int32_t t127 = 1022220;

    t127 = ((x1277!=x1278)>>(x1279%x1280));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x1289 = 162604721404LLU;
	static volatile uint8_t x1290 = 5U;
	int32_t x1292 = -1;
	volatile int32_t t128 = 18639875;

    t128 = ((x1289!=x1290)>>(x1291%x1292));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x1297 = -1;
	static uint8_t x1298 = 1U;
	volatile int8_t x1299 = INT8_MAX;
	int64_t x1300 = -6LL;

    t129 = ((x1297!=x1298)>>(x1299%x1300));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x1317 = 9110904;
	static int64_t x1318 = INT64_MIN;
	volatile uint8_t x1319 = 3U;
	int8_t x1320 = INT8_MIN;
	static volatile int32_t t130 = 1;

    t130 = ((x1317!=x1318)>>(x1319%x1320));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x1345 = INT16_MAX;
	int8_t x1346 = INT8_MIN;
	static int16_t x1348 = -1;
	static int32_t t131 = 3563;

    t131 = ((x1345!=x1346)>>(x1347%x1348));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x1361 = 0U;
	static int16_t x1362 = -198;
	int64_t x1363 = -1LL;
	uint64_t x1364 = UINT64_MAX;
	int32_t t132 = -43;

    t132 = ((x1361!=x1362)>>(x1363%x1364));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x1369 = INT8_MIN;
	volatile uint16_t x1371 = UINT16_MAX;
	int32_t t133 = 4123;

    t133 = ((x1369!=x1370)>>(x1371%x1372));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x1373 = INT8_MAX;
	static volatile int8_t x1374 = 34;
	uint32_t x1375 = 5U;
	volatile int32_t t134 = -1;

    t134 = ((x1373!=x1374)>>(x1375%x1376));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x1398 = 41628114LLU;
	int8_t x1399 = INT8_MAX;
	static int8_t x1400 = -1;
	volatile int32_t t135 = 450;

    t135 = ((x1397!=x1398)>>(x1399%x1400));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x1410 = UINT32_MAX;
	static volatile int16_t x1411 = 14313;
	int16_t x1412 = -1;
	volatile int32_t t136 = -2146;

    t136 = ((x1409!=x1410)>>(x1411%x1412));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x1421 = INT32_MIN;
	volatile int16_t x1422 = INT16_MIN;
	static volatile uint8_t x1423 = UINT8_MAX;
	uint16_t x1424 = 3U;
	volatile int32_t t137 = 110599;

    t137 = ((x1421!=x1422)>>(x1423%x1424));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x1433 = INT8_MAX;
	uint32_t x1434 = UINT32_MAX;
	volatile uint16_t x1435 = 544U;

    t138 = ((x1433!=x1434)>>(x1435%x1436));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint8_t x1437 = 14U;
	uint8_t x1438 = 96U;
	uint16_t x1439 = UINT16_MAX;
	static uint32_t x1440 = 1U;
	static volatile int32_t t139 = 60209;

    t139 = ((x1437!=x1438)>>(x1439%x1440));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x1441 = INT32_MIN;
	volatile uint16_t x1443 = 6U;
	int16_t x1444 = -152;
	volatile int32_t t140 = 42182798;

    t140 = ((x1441!=x1442)>>(x1443%x1444));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x1477 = INT64_MAX;
	volatile int8_t x1478 = INT8_MIN;
	static int16_t x1480 = -1;
	static int32_t t141 = 52;

    t141 = ((x1477!=x1478)>>(x1479%x1480));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x1489 = 1249LLU;
	int32_t x1490 = -1;
	int8_t x1491 = 2;
	static uint8_t x1492 = 87U;
	volatile int32_t t142 = -201;

    t142 = ((x1489!=x1490)>>(x1491%x1492));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x1505 = INT16_MAX;
	int32_t x1506 = -1;
	int64_t x1507 = 29LL;
	int32_t t143 = 5550691;

    t143 = ((x1505!=x1506)>>(x1507%x1508));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x1513 = 6;
	int8_t x1514 = INT8_MIN;
	uint16_t x1515 = UINT16_MAX;
	static int8_t x1516 = -1;
	int32_t t144 = 54984;

    t144 = ((x1513!=x1514)>>(x1515%x1516));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1545 = INT8_MIN;
	static int8_t x1547 = -1;
	volatile int32_t t145 = -612190754;

    t145 = ((x1545!=x1546)>>(x1547%x1548));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x1573 = 2129;
	volatile int32_t x1574 = 14787;
	int32_t t146 = -315;

    t146 = ((x1573!=x1574)>>(x1575%x1576));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x1590 = 3445359945LL;
	static uint8_t x1591 = 23U;
	int64_t x1592 = -1LL;
	volatile int32_t t147 = 2;

    t147 = ((x1589!=x1590)>>(x1591%x1592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1593 = 19984968668571563LL;
	uint16_t x1594 = 42U;
	static int8_t x1595 = -1;
	int64_t x1596 = -1LL;

    t148 = ((x1593!=x1594)>>(x1595%x1596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1609 = -10;
	static uint32_t x1610 = UINT32_MAX;
	int32_t x1611 = INT32_MIN;
	static int16_t x1612 = INT16_MIN;
	volatile int32_t t149 = 1;

    t149 = ((x1609!=x1610)>>(x1611%x1612));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x1630 = UINT32_MAX;
	static int8_t x1631 = INT8_MIN;
	static int32_t t150 = -24;

    t150 = ((x1629!=x1630)>>(x1631%x1632));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x1637 = INT64_MAX;
	int32_t x1638 = -825;
	int8_t x1639 = INT8_MIN;
	int64_t x1640 = -1LL;
	int32_t t151 = 1412347;

    t151 = ((x1637!=x1638)>>(x1639%x1640));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x1642 = -1;
	int32_t x1643 = INT32_MIN;
	static int8_t x1644 = INT8_MIN;
	static int32_t t152 = 1;

    t152 = ((x1641!=x1642)>>(x1643%x1644));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x1645 = INT32_MAX;
	volatile uint64_t x1646 = UINT64_MAX;
	static int32_t t153 = 1;

    t153 = ((x1645!=x1646)>>(x1647%x1648));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x1653 = 942734U;
	int64_t x1654 = INT64_MIN;
	int8_t x1655 = INT8_MAX;

    t154 = ((x1653!=x1654)>>(x1655%x1656));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x1661 = UINT8_MAX;
	int32_t x1662 = -14;
	int8_t x1663 = INT8_MIN;
	int32_t x1664 = -1;
	int32_t t155 = -1;

    t155 = ((x1661!=x1662)>>(x1663%x1664));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x1670 = 8438651236LL;
	uint32_t x1672 = UINT32_MAX;

    t156 = ((x1669!=x1670)>>(x1671%x1672));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x1685 = UINT32_MAX;
	uint16_t x1687 = 1305U;
	static int8_t x1688 = INT8_MIN;
	volatile int32_t t157 = 237180393;

    t157 = ((x1685!=x1686)>>(x1687%x1688));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x1705 = UINT16_MAX;
	static uint16_t x1706 = UINT16_MAX;
	volatile uint32_t x1707 = 0U;
	volatile int32_t t158 = 836781;

    t158 = ((x1705!=x1706)>>(x1707%x1708));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x1709 = INT16_MIN;
	volatile uint64_t x1710 = UINT64_MAX;
	uint32_t x1711 = 14U;
	volatile int32_t t159 = 32758;

    t159 = ((x1709!=x1710)>>(x1711%x1712));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x1717 = 1783U;
	int8_t x1720 = -1;
	volatile int32_t t160 = -1;

    t160 = ((x1717!=x1718)>>(x1719%x1720));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x1749 = UINT64_MAX;
	int32_t x1751 = INT32_MIN;
	volatile int16_t x1752 = -1;
	volatile int32_t t161 = 17214817;

    t161 = ((x1749!=x1750)>>(x1751%x1752));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x1754 = INT32_MIN;
	uint8_t x1755 = 105U;
	uint8_t x1756 = 1U;
	volatile int32_t t162 = -7853195;

    t162 = ((x1753!=x1754)>>(x1755%x1756));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x1757 = 159086432657LLU;
	static volatile int32_t x1758 = INT32_MAX;
	int8_t x1760 = -1;
	static int32_t t163 = -159753;

    t163 = ((x1757!=x1758)>>(x1759%x1760));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int64_t x1765 = -1LL;
	static int16_t x1766 = INT16_MIN;
	uint8_t x1767 = 6U;
	volatile int8_t x1768 = 33;
	static int32_t t164 = 179992;

    t164 = ((x1765!=x1766)>>(x1767%x1768));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x1789 = 45225U;
	int64_t x1790 = -2224LL;
	int64_t x1791 = INT64_MAX;
	int32_t t165 = -28;

    t165 = ((x1789!=x1790)>>(x1791%x1792));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1793 = 8095LL;
	volatile uint16_t x1795 = UINT16_MAX;
	int32_t x1796 = -1;
	static volatile int32_t t166 = -33106200;

    t166 = ((x1793!=x1794)>>(x1795%x1796));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x1805 = 1007032145154729119LLU;
	volatile uint16_t x1806 = 11U;
	uint8_t x1807 = 109U;
	static int64_t x1808 = -1LL;
	int32_t t167 = 222;

    t167 = ((x1805!=x1806)>>(x1807%x1808));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1809 = INT32_MAX;
	static uint8_t x1810 = 79U;
	int16_t x1811 = INT16_MAX;
	int16_t x1812 = -1;
	volatile int32_t t168 = -240310;

    t168 = ((x1809!=x1810)>>(x1811%x1812));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x1822 = UINT32_MAX;
	int16_t x1823 = INT16_MIN;
	uint64_t x1824 = 1LLU;

    t169 = ((x1821!=x1822)>>(x1823%x1824));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1825 = 2U;
	int32_t x1826 = INT32_MIN;
	uint32_t x1827 = 27U;
	volatile int8_t x1828 = -1;
	int32_t t170 = -2694;

    t170 = ((x1825!=x1826)>>(x1827%x1828));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int64_t x1829 = INT64_MIN;
	uint8_t x1830 = UINT8_MAX;
	volatile int32_t t171 = -3633999;

    t171 = ((x1829!=x1830)>>(x1831%x1832));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x1835 = INT16_MAX;
	int64_t x1836 = -1LL;
	volatile int32_t t172 = -55;

    t172 = ((x1833!=x1834)>>(x1835%x1836));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x1861 = INT8_MIN;
	uint32_t x1862 = 2641U;
	int16_t x1863 = 23;
	int32_t t173 = 10786952;

    t173 = ((x1861!=x1862)>>(x1863%x1864));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1869 = INT16_MIN;
	static volatile uint16_t x1870 = UINT16_MAX;
	uint8_t x1871 = 7U;
	int32_t x1872 = -61244;

    t174 = ((x1869!=x1870)>>(x1871%x1872));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x1881 = INT8_MAX;
	static volatile int64_t x1882 = -1226806928094056LL;
	int8_t x1883 = 1;
	volatile int32_t t175 = -11933895;

    t175 = ((x1881!=x1882)>>(x1883%x1884));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x1897 = UINT64_MAX;
	int16_t x1898 = INT16_MIN;
	int32_t t176 = 46;

    t176 = ((x1897!=x1898)>>(x1899%x1900));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1922 = 93U;
	static int16_t x1923 = INT16_MIN;
	volatile int32_t t177 = 5279255;

    t177 = ((x1921!=x1922)>>(x1923%x1924));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x1937 = INT32_MAX;
	volatile int8_t x1939 = 0;
	volatile int8_t x1940 = INT8_MIN;
	volatile int32_t t178 = -1;

    t178 = ((x1937!=x1938)>>(x1939%x1940));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1953 = -362;
	static int16_t x1954 = INT16_MIN;
	int64_t x1955 = INT64_MIN;
	int32_t x1956 = INT32_MIN;

    t179 = ((x1953!=x1954)>>(x1955%x1956));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x1977 = 43U;
	static volatile int64_t x1978 = -1LL;
	static uint64_t x1979 = UINT64_MAX;
	int32_t x1980 = -1;
	volatile int32_t t180 = -30;

    t180 = ((x1977!=x1978)>>(x1979%x1980));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1989 = 5U;
	uint8_t x1990 = UINT8_MAX;
	volatile uint32_t x1991 = 10U;
	uint8_t x1992 = 5U;
	static int32_t t181 = 50;

    t181 = ((x1989!=x1990)>>(x1991%x1992));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x1993 = 570U;
	volatile int32_t x1994 = 776;
	int16_t x1995 = -1;
	int32_t x1996 = -1;
	volatile int32_t t182 = 1941;

    t182 = ((x1993!=x1994)>>(x1995%x1996));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x2009 = UINT64_MAX;
	uint32_t x2010 = 28U;
	uint32_t x2011 = UINT32_MAX;

    t183 = ((x2009!=x2010)>>(x2011%x2012));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x2013 = 26LLU;
	int8_t x2014 = INT8_MAX;
	static int32_t x2015 = INT32_MIN;
	int32_t t184 = -1;

    t184 = ((x2013!=x2014)>>(x2015%x2016));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x2019 = 0U;
	volatile int32_t x2020 = 1;

    t185 = ((x2017!=x2018)>>(x2019%x2020));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x2041 = -1LL;
	int8_t x2042 = INT8_MAX;
	int32_t x2043 = 426417071;
	int8_t x2044 = -1;
	static int32_t t186 = 942105815;

    t186 = ((x2041!=x2042)>>(x2043%x2044));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x2045 = -938;
	int32_t x2046 = INT32_MIN;
	int64_t x2047 = INT64_MIN;
	int32_t x2048 = INT32_MIN;
	int32_t t187 = 3773;

    t187 = ((x2045!=x2046)>>(x2047%x2048));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x2053 = INT32_MIN;
	int64_t x2054 = 24LL;
	volatile int8_t x2055 = 1;
	static int64_t x2056 = INT64_MIN;
	static int32_t t188 = 5189;

    t188 = ((x2053!=x2054)>>(x2055%x2056));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x2057 = 1236;
	int16_t x2058 = -1663;
	volatile uint8_t x2059 = 12U;
	uint32_t x2060 = UINT32_MAX;
	volatile int32_t t189 = -73941760;

    t189 = ((x2057!=x2058)>>(x2059%x2060));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x2061 = INT8_MIN;
	volatile uint32_t x2062 = 84524U;
	int64_t x2064 = -1LL;
	int32_t t190 = -389592098;

    t190 = ((x2061!=x2062)>>(x2063%x2064));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x2065 = 5208281578LL;
	volatile int16_t x2066 = -1;
	uint16_t x2067 = 8U;
	static int64_t x2068 = 6LL;
	volatile int32_t t191 = 266191926;

    t191 = ((x2065!=x2066)>>(x2067%x2068));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x2073 = 1;
	int16_t x2074 = INT16_MIN;
	static int64_t x2075 = -1LL;
	static int64_t x2076 = -1LL;
	int32_t t192 = 3537504;

    t192 = ((x2073!=x2074)>>(x2075%x2076));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x2089 = INT16_MIN;
	uint64_t x2091 = UINT64_MAX;
	uint64_t x2092 = UINT64_MAX;
	static int32_t t193 = -308;

    t193 = ((x2089!=x2090)>>(x2091%x2092));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x2105 = INT64_MIN;
	int64_t x2107 = 0LL;
	int16_t x2108 = -1;
	static volatile int32_t t194 = 3398460;

    t194 = ((x2105!=x2106)>>(x2107%x2108));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x2109 = 13968;

    t195 = ((x2109!=x2110)>>(x2111%x2112));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x2117 = 65LLU;
	uint32_t x2119 = 86236U;
	uint8_t x2120 = 6U;
	volatile int32_t t196 = 3;

    t196 = ((x2117!=x2118)>>(x2119%x2120));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x2129 = 4;
	uint16_t x2130 = 1U;
	int8_t x2131 = INT8_MAX;
	uint8_t x2132 = 1U;
	int32_t t197 = -12;

    t197 = ((x2129!=x2130)>>(x2131%x2132));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x2137 = INT64_MAX;
	uint8_t x2138 = 40U;
	int8_t x2139 = -1;
	static int64_t x2140 = -1LL;
	volatile int32_t t198 = 4565346;

    t198 = ((x2137!=x2138)>>(x2139%x2140));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x2142 = -51292888LL;
	int8_t x2143 = INT8_MAX;

    t199 = ((x2141!=x2142)>>(x2143%x2144));

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


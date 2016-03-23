
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

uint16_t x8 = 7386U;
volatile int16_t x22 = 25;
int8_t x63 = 0;
volatile uint8_t x109 = UINT8_MAX;
int8_t x131 = 0;
static volatile int32_t t4 = -2010;
uint8_t x209 = 11U;
int8_t x212 = -1;
volatile int16_t x213 = INT16_MAX;
int32_t t7 = -89457;
uint16_t x282 = 336U;
uint64_t x303 = UINT64_MAX;
volatile int64_t x476 = INT64_MIN;
uint64_t x573 = 39325LLU;
int16_t x575 = INT16_MIN;
volatile int8_t x576 = 0;
int16_t x614 = -3;
int32_t x615 = -1;
int32_t x630 = -1178;
uint64_t x739 = UINT64_MAX;
int32_t x740 = -1;
int8_t x755 = 9;
volatile int32_t t21 = 8927;
volatile int8_t x800 = INT8_MIN;
uint32_t x845 = UINT32_MAX;
volatile uint32_t x849 = 91U;
static int64_t x851 = INT64_MIN;
int8_t x911 = -1;
int8_t x950 = INT8_MIN;
uint32_t x975 = 56528U;
int64_t x1131 = -1LL;
uint8_t x1206 = UINT8_MAX;
int64_t x1225 = INT64_MIN;
int64_t x1226 = -341687989LL;
uint64_t x1228 = UINT64_MAX;
static uint16_t x1250 = UINT16_MAX;
int32_t t35 = -2;
volatile uint32_t x1309 = UINT32_MAX;
int32_t t38 = -2;
volatile uint16_t x1418 = UINT16_MAX;
int8_t x1425 = INT8_MIN;
int32_t t41 = 8;
static volatile int32_t t42 = 9540;
int64_t x1479 = -1LL;
static int8_t x1577 = INT8_MIN;
uint32_t x1718 = 0U;
volatile int32_t t46 = 1939511;
uint8_t x1794 = 48U;
static int8_t x1795 = INT8_MIN;
uint32_t x1797 = UINT32_MAX;
int32_t x1799 = INT32_MIN;
int8_t x1807 = -1;
static volatile int64_t x1833 = INT64_MIN;
volatile uint32_t x1836 = 0U;
static int64_t x1935 = 8520000019011LL;
volatile int64_t x2014 = INT64_MIN;
volatile uint32_t x2077 = 3U;
int8_t x2078 = INT8_MAX;
uint16_t x2080 = 26U;
volatile int32_t t54 = -62856;
uint8_t x2130 = 2U;
int32_t x2131 = INT32_MIN;
int32_t x2165 = INT32_MIN;
int8_t x2167 = 0;
static int8_t x2232 = -12;
int32_t t60 = -3;
uint8_t x2267 = 0U;
int32_t t61 = -18105;
int32_t x2269 = -13320349;
volatile uint32_t x2272 = 0U;
volatile int32_t t62 = 28383305;
int8_t x2312 = -1;
uint16_t x2338 = 180U;
uint64_t x2365 = 110485683745LLU;
uint8_t x2367 = 0U;
static int32_t t67 = 402387;
int16_t x2487 = -1;
uint8_t x2543 = UINT8_MAX;
volatile int32_t t72 = 1;
int8_t x2601 = -1;
uint64_t x2602 = 147337983336702LLU;
static uint16_t x2603 = 0U;
int32_t t74 = 0;
int64_t x2661 = INT64_MAX;
int32_t x2662 = 48;
int16_t x2823 = -1;
int32_t t79 = -223752;
uint8_t x2856 = 2U;
int32_t x2917 = INT32_MIN;
static int32_t x2920 = 19;
uint16_t x2946 = 0U;
volatile int32_t t84 = -1;
static uint16_t x3158 = 24U;
volatile int32_t t89 = -12288674;
volatile int32_t x3371 = -1;
volatile int32_t t92 = 27120;
static uint64_t x3434 = 51856LLU;
int16_t x3436 = -1;
int8_t x3503 = INT8_MIN;
static volatile uint8_t x3535 = 0U;
uint64_t x3550 = UINT64_MAX;
int8_t x3551 = 0;
static int64_t x3553 = INT64_MIN;
int32_t x3580 = -1;
int16_t x3589 = -10863;
int32_t t100 = 1149965;
uint64_t x3602 = UINT64_MAX;
int16_t x3715 = -1;
int32_t t105 = -6512120;
volatile uint8_t x3844 = 0U;
int32_t t107 = 0;
volatile int32_t t111 = 5452144;
volatile uint32_t x4035 = UINT32_MAX;
volatile int16_t x4036 = -1;
volatile int32_t t113 = 1108256;
int64_t x4077 = INT64_MAX;
volatile uint32_t x4493 = 1315494U;
uint8_t x4494 = UINT8_MAX;
int32_t x4526 = INT32_MIN;
int16_t x4527 = -1;
int64_t x4608 = INT64_MIN;
uint64_t x4661 = 889860177576797324LLU;
uint64_t x4664 = UINT64_MAX;
static int32_t t123 = -149;
int16_t x4698 = 304;
uint32_t x4783 = UINT32_MAX;
static uint16_t x4784 = 0U;
static int16_t x4816 = INT16_MIN;
static volatile int32_t x4843 = INT32_MIN;
volatile int64_t x4910 = -1LL;
volatile int32_t x4911 = INT32_MAX;
int16_t x4962 = INT16_MAX;
uint32_t x4964 = 0U;
volatile int32_t t134 = -42421003;
int32_t x5089 = -1942247;
int16_t x5113 = -1;
static int16_t x5115 = -1;
volatile uint64_t x5170 = UINT64_MAX;
int8_t x5196 = INT8_MIN;
int8_t x5207 = 0;
static int16_t x5369 = INT16_MIN;
int32_t x5389 = -97050;
int32_t t143 = -50254;
uint64_t x5393 = 15574576951LLU;
static volatile int32_t t144 = 1;
static volatile uint8_t x5532 = 0U;
static volatile uint16_t x5641 = UINT16_MAX;
uint8_t x5643 = 0U;
int64_t x5677 = INT64_MIN;
static int32_t t151 = -18;
int32_t t153 = 8705594;
volatile uint16_t x5726 = UINT16_MAX;
uint32_t x5727 = UINT32_MAX;
volatile int32_t t154 = 14529;
static volatile int16_t x5737 = INT16_MIN;
int64_t x5883 = -1LL;
int64_t x5893 = 87054LL;
volatile int16_t x5942 = INT16_MIN;
volatile uint16_t x6080 = 0U;
volatile int32_t t164 = 75529727;
static volatile int8_t x6081 = -62;
int8_t x6114 = 3;
static int64_t x6149 = INT64_MIN;
static uint32_t x6151 = 0U;
uint32_t x6203 = UINT32_MAX;
int16_t x6204 = -1;
int32_t x6254 = -220;
uint8_t x6386 = UINT8_MAX;
int64_t x6392 = -1LL;
int8_t x6440 = 13;
volatile int8_t x6489 = 3;
uint32_t x6507 = UINT32_MAX;
int32_t t176 = -5816519;
volatile int32_t x6701 = -1;
static volatile uint64_t x6734 = 40085885112LLU;
int8_t x6736 = -1;
volatile int32_t t180 = 13993;
uint64_t x6857 = 126LLU;
volatile int32_t t182 = -128;
volatile int32_t t188 = 16517;
volatile uint16_t x7018 = 438U;
int32_t x7079 = 0;
int8_t x7121 = 1;
static volatile int32_t t191 = 2002;
int64_t x7198 = INT64_MAX;
int16_t x7200 = 0;
static int64_t x7284 = -1LL;
static int32_t t194 = 377131665;
int32_t x7370 = -1;
int8_t x7453 = 0;
static int32_t t196 = 166;
volatile int8_t x7536 = -1;
volatile int16_t x7585 = -1;
int32_t t199 = 234;


void f0(void) {
    	static int16_t x5 = INT16_MIN;
	static uint32_t x6 = 1U;
	int16_t x7 = 0;
	static int32_t t0 = 1;

    t0 = ((x5!=x6)<<(x7*x8));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x21 = 116922LL;
	uint8_t x23 = 20U;
	int8_t x24 = 1;
	int32_t t1 = 1;

    t1 = ((x21!=x22)<<(x23*x24));

    if (t1 != 1048576) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int8_t x61 = -1;
	int64_t x62 = INT64_MAX;
	uint32_t x64 = 86U;
	int32_t t2 = 36418476;

    t2 = ((x61!=x62)<<(x63*x64));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x110 = 6097555937768621132LLU;
	int16_t x111 = -1;
	int16_t x112 = -1;
	static int32_t t3 = 1457;

    t3 = ((x109!=x110)<<(x111*x112));

    if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x129 = INT8_MIN;
	volatile int64_t x130 = INT64_MIN;
	volatile int64_t x132 = INT64_MAX;

    t4 = ((x129!=x130)<<(x131*x132));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x210 = 3171639352LL;
	int8_t x211 = -1;
	int32_t t5 = 139905;

    t5 = ((x209!=x210)<<(x211*x212));

    if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x214 = INT8_MIN;
	int16_t x215 = -1;
	static uint64_t x216 = UINT64_MAX;
	volatile int32_t t6 = 0;

    t6 = ((x213!=x214)<<(x215*x216));

    if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x249 = INT32_MIN;
	int8_t x250 = INT8_MIN;
	static uint8_t x251 = 1U;
	uint8_t x252 = 0U;

    t7 = ((x249!=x250)<<(x251*x252));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x281 = 1047662328LLU;
	int64_t x283 = -1LL;
	uint64_t x284 = UINT64_MAX;
	int32_t t8 = 368308;

    t8 = ((x281!=x282)<<(x283*x284));

    if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x301 = INT8_MAX;
	uint32_t x302 = 47U;
	int64_t x304 = -1LL;
	volatile int32_t t9 = 40;

    t9 = ((x301!=x302)<<(x303*x304));

    if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x333 = INT32_MAX;
	volatile uint64_t x334 = 2122177769LLU;
	int32_t x335 = -1;
	static int32_t x336 = -1;
	volatile int32_t t10 = -24862;

    t10 = ((x333!=x334)<<(x335*x336));

    if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x473 = -12230912760LL;
	int32_t x474 = -9186785;
	static uint64_t x475 = 7340533501096LLU;
	volatile int32_t t11 = 27145;

    t11 = ((x473!=x474)<<(x475*x476));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x574 = UINT64_MAX;
	int32_t t12 = -1;

    t12 = ((x573!=x574)<<(x575*x576));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int16_t x585 = 0;
	int8_t x586 = -1;
	static uint8_t x587 = 0U;
	int16_t x588 = 240;
	volatile int32_t t13 = -60;

    t13 = ((x585!=x586)<<(x587*x588));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x613 = INT8_MIN;
	volatile int16_t x616 = -1;
	int32_t t14 = 3292776;

    t14 = ((x613!=x614)<<(x615*x616));

    if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x629 = UINT32_MAX;
	volatile uint16_t x631 = 14755U;
	uint8_t x632 = 0U;
	int32_t t15 = -8037;

    t15 = ((x629!=x630)<<(x631*x632));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x633 = -1;
	uint32_t x634 = 6U;
	uint32_t x635 = UINT32_MAX;
	int16_t x636 = -1;
	int32_t t16 = 25;

    t16 = ((x633!=x634)<<(x635*x636));

    if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int64_t x729 = INT64_MIN;
	static uint8_t x730 = 1U;
	int64_t x731 = INT64_MAX;
	int64_t x732 = 0LL;
	int32_t t17 = 11;

    t17 = ((x729!=x730)<<(x731*x732));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x737 = 32U;
	int64_t x738 = 1480461604871943685LL;
	static int32_t t18 = -3201;

    t18 = ((x737!=x738)<<(x739*x740));

    if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x749 = 166U;
	int8_t x750 = INT8_MIN;
	int8_t x751 = 0;
	int32_t x752 = INT32_MIN;
	volatile int32_t t19 = -777309;

    t19 = ((x749!=x750)<<(x751*x752));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x753 = UINT64_MAX;
	int32_t x754 = -1;
	uint8_t x756 = 1U;
	int32_t t20 = 12207893;

    t20 = ((x753!=x754)<<(x755*x756));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x757 = 1U;
	int64_t x758 = 10210790753LL;
	int8_t x759 = -3;
	static int16_t x760 = -1;

    t21 = ((x757!=x758)<<(x759*x760));

    if (t21 != 8) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x797 = -905;
	int8_t x798 = 21;
	int16_t x799 = 0;
	volatile int32_t t22 = -3623658;

    t22 = ((x797!=x798)<<(x799*x800));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x846 = -117251404474LL;
	volatile uint32_t x847 = UINT32_MAX;
	volatile int8_t x848 = -1;
	int32_t t23 = -97;

    t23 = ((x845!=x846)<<(x847*x848));

    if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x850 = 22U;
	static uint8_t x852 = 0U;
	int32_t t24 = -2045683;

    t24 = ((x849!=x850)<<(x851*x852));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint64_t x909 = 524505552LLU;
	uint32_t x910 = UINT32_MAX;
	int8_t x912 = -1;
	volatile int32_t t25 = -202;

    t25 = ((x909!=x910)<<(x911*x912));

    if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x949 = INT16_MIN;
	int64_t x951 = -1LL;
	static volatile int64_t x952 = -1LL;
	int32_t t26 = 5;

    t26 = ((x949!=x950)<<(x951*x952));

    if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x973 = UINT64_MAX;
	uint32_t x974 = UINT32_MAX;
	static volatile int32_t x976 = INT32_MIN;
	int32_t t27 = 1503520;

    t27 = ((x973!=x974)<<(x975*x976));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x1013 = 14U;
	static volatile uint32_t x1014 = 213U;
	static int16_t x1015 = -14;
	volatile int32_t x1016 = -1;
	static volatile int32_t t28 = -599678106;

    t28 = ((x1013!=x1014)<<(x1015*x1016));

    if (t28 != 16384) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x1061 = UINT32_MAX;
	uint16_t x1062 = UINT16_MAX;
	int16_t x1063 = 3;
	int8_t x1064 = 0;
	int32_t t29 = 346422658;

    t29 = ((x1061!=x1062)<<(x1063*x1064));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x1129 = UINT32_MAX;
	int64_t x1130 = INT64_MIN;
	static uint64_t x1132 = UINT64_MAX;
	volatile int32_t t30 = 53;

    t30 = ((x1129!=x1130)<<(x1131*x1132));

    if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x1205 = 17017529U;
	static int8_t x1207 = -1;
	int8_t x1208 = -1;
	int32_t t31 = 1;

    t31 = ((x1205!=x1206)<<(x1207*x1208));

    if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x1221 = INT64_MIN;
	int64_t x1222 = 539801715222LL;
	static int16_t x1223 = -1;
	volatile uint32_t x1224 = UINT32_MAX;
	int32_t t32 = 0;

    t32 = ((x1221!=x1222)<<(x1223*x1224));

    if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x1227 = -1;
	volatile int32_t t33 = 23657854;

    t33 = ((x1225!=x1226)<<(x1227*x1228));

    if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x1245 = 26U;
	volatile int32_t x1246 = -1;
	uint32_t x1247 = 145U;
	uint32_t x1248 = 0U;
	static volatile int32_t t34 = 1989879;

    t34 = ((x1245!=x1246)<<(x1247*x1248));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x1249 = -1LL;
	static volatile int32_t x1251 = INT32_MIN;
	uint32_t x1252 = 36U;

    t35 = ((x1249!=x1250)<<(x1251*x1252));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x1310 = -11992;
	uint64_t x1311 = 11LLU;
	int32_t x1312 = 0;
	volatile int32_t t36 = -711324129;

    t36 = ((x1309!=x1310)<<(x1311*x1312));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x1325 = -1;
	int64_t x1326 = INT64_MAX;
	int32_t x1327 = -1;
	static volatile int32_t x1328 = 0;
	static volatile int32_t t37 = -2;

    t37 = ((x1325!=x1326)<<(x1327*x1328));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x1337 = UINT8_MAX;
	static uint8_t x1338 = UINT8_MAX;
	int16_t x1339 = INT16_MAX;
	int8_t x1340 = 0;

    t38 = ((x1337!=x1338)<<(x1339*x1340));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x1345 = UINT8_MAX;
	uint16_t x1346 = 5U;
	volatile int16_t x1347 = -1;
	int8_t x1348 = 0;
	int32_t t39 = -88;

    t39 = ((x1345!=x1346)<<(x1347*x1348));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x1417 = -12;
	int8_t x1419 = -1;
	static int16_t x1420 = -3;
	int32_t t40 = -339;

    t40 = ((x1417!=x1418)<<(x1419*x1420));

    if (t40 != 8) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x1426 = 1484535385U;
	uint16_t x1427 = 0U;
	static int64_t x1428 = -1LL;

    t41 = ((x1425!=x1426)<<(x1427*x1428));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x1429 = -48519LL;
	uint16_t x1430 = UINT16_MAX;
	volatile int8_t x1431 = 0;
	static int16_t x1432 = INT16_MIN;

    t42 = ((x1429!=x1430)<<(x1431*x1432));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x1477 = 32415U;
	int16_t x1478 = INT16_MIN;
	int64_t x1480 = -1LL;
	volatile int32_t t43 = 124;

    t43 = ((x1477!=x1478)<<(x1479*x1480));

    if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x1578 = 1;
	uint64_t x1579 = 0LLU;
	int32_t x1580 = INT32_MIN;
	int32_t t44 = 336513;

    t44 = ((x1577!=x1578)<<(x1579*x1580));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x1617 = 5LLU;
	volatile uint8_t x1618 = UINT8_MAX;
	static uint8_t x1619 = UINT8_MAX;
	int8_t x1620 = 0;
	volatile int32_t t45 = 917416;

    t45 = ((x1617!=x1618)<<(x1619*x1620));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x1717 = INT32_MIN;
	volatile int16_t x1719 = 0;
	static volatile int32_t x1720 = 34990431;

    t46 = ((x1717!=x1718)<<(x1719*x1720));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x1793 = UINT8_MAX;
	int8_t x1796 = 0;
	static volatile int32_t t47 = 5;

    t47 = ((x1793!=x1794)<<(x1795*x1796));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint64_t x1798 = 4765LLU;
	uint8_t x1800 = 0U;
	int32_t t48 = 0;

    t48 = ((x1797!=x1798)<<(x1799*x1800));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x1805 = INT64_MIN;
	volatile int32_t x1806 = -1;
	int64_t x1808 = -1LL;
	int32_t t49 = -37738386;

    t49 = ((x1805!=x1806)<<(x1807*x1808));

    if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x1817 = INT32_MIN;
	uint32_t x1818 = UINT32_MAX;
	static uint8_t x1819 = 0U;
	volatile uint8_t x1820 = UINT8_MAX;
	int32_t t50 = 1;

    t50 = ((x1817!=x1818)<<(x1819*x1820));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint64_t x1834 = 221548173577LLU;
	static int16_t x1835 = INT16_MIN;
	volatile int32_t t51 = -8950;

    t51 = ((x1833!=x1834)<<(x1835*x1836));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x1933 = INT64_MIN;
	static int64_t x1934 = 3576857224477588LL;
	int16_t x1936 = 0;
	int32_t t52 = 2;

    t52 = ((x1933!=x1934)<<(x1935*x1936));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x2013 = -4356935;
	uint16_t x2015 = 2U;
	int8_t x2016 = 1;
	volatile int32_t t53 = 52745447;

    t53 = ((x2013!=x2014)<<(x2015*x2016));

    if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x2079 = 0LLU;

    t54 = ((x2077!=x2078)<<(x2079*x2080));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x2117 = -1;
	int32_t x2118 = -57;
	static int16_t x2119 = INT16_MIN;
	uint8_t x2120 = 0U;
	int32_t t55 = 385980;

    t55 = ((x2117!=x2118)<<(x2119*x2120));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x2129 = INT32_MAX;
	uint32_t x2132 = 12708U;
	int32_t t56 = -24736;

    t56 = ((x2129!=x2130)<<(x2131*x2132));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x2166 = -1;
	int16_t x2168 = INT16_MIN;
	int32_t t57 = -780609919;

    t57 = ((x2165!=x2166)<<(x2167*x2168));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x2205 = 27;
	int64_t x2206 = 236153450734653813LL;
	uint16_t x2207 = 0U;
	static int8_t x2208 = -7;
	volatile int32_t t58 = 20480571;

    t58 = ((x2205!=x2206)<<(x2207*x2208));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x2213 = INT64_MIN;
	uint8_t x2214 = UINT8_MAX;
	uint8_t x2215 = 6U;
	uint16_t x2216 = 0U;
	volatile int32_t t59 = -2321536;

    t59 = ((x2213!=x2214)<<(x2215*x2216));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x2229 = INT64_MIN;
	volatile int16_t x2230 = 8;
	uint64_t x2231 = UINT64_MAX;

    t60 = ((x2229!=x2230)<<(x2231*x2232));

    if (t60 != 4096) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x2265 = -1LL;
	int16_t x2266 = INT16_MIN;
	static int64_t x2268 = -531LL;

    t61 = ((x2265!=x2266)<<(x2267*x2268));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x2270 = 171LLU;
	static int32_t x2271 = INT32_MIN;

    t62 = ((x2269!=x2270)<<(x2271*x2272));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x2277 = 1;
	uint16_t x2278 = UINT16_MAX;
	volatile int8_t x2279 = -1;
	int64_t x2280 = -1LL;
	volatile int32_t t63 = -2753;

    t63 = ((x2277!=x2278)<<(x2279*x2280));

    if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x2309 = 19U;
	volatile int32_t x2310 = INT32_MAX;
	volatile uint32_t x2311 = UINT32_MAX;
	volatile int32_t t64 = -39761801;

    t64 = ((x2309!=x2310)<<(x2311*x2312));

    if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x2337 = INT32_MIN;
	int64_t x2339 = INT64_MIN;
	uint64_t x2340 = 485267552656028LLU;
	int32_t t65 = 693;

    t65 = ((x2337!=x2338)<<(x2339*x2340));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x2366 = INT16_MIN;
	static int8_t x2368 = INT8_MIN;
	volatile int32_t t66 = 391715;

    t66 = ((x2365!=x2366)<<(x2367*x2368));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x2437 = 989U;
	int64_t x2438 = INT64_MIN;
	volatile int64_t x2439 = -110579234402781699LL;
	uint16_t x2440 = 0U;

    t67 = ((x2437!=x2438)<<(x2439*x2440));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x2473 = -19;
	volatile uint32_t x2474 = 1833U;
	static volatile int64_t x2475 = -1LL;
	int8_t x2476 = 0;
	volatile int32_t t68 = -20057627;

    t68 = ((x2473!=x2474)<<(x2475*x2476));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x2481 = 358U;
	int32_t x2482 = INT32_MAX;
	uint8_t x2483 = 19U;
	uint64_t x2484 = 1LLU;
	int32_t t69 = -311431;

    t69 = ((x2481!=x2482)<<(x2483*x2484));

    if (t69 != 524288) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x2485 = 1U;
	volatile int8_t x2486 = 0;
	int64_t x2488 = -1LL;
	int32_t t70 = 0;

    t70 = ((x2485!=x2486)<<(x2487*x2488));

    if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x2541 = 0U;
	int64_t x2542 = -75647532595498LL;
	static int8_t x2544 = 0;
	volatile int32_t t71 = 120;

    t71 = ((x2541!=x2542)<<(x2543*x2544));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x2581 = 839429439LL;
	int32_t x2582 = -451207148;
	int64_t x2583 = -1LL;
	static uint64_t x2584 = UINT64_MAX;

    t72 = ((x2581!=x2582)<<(x2583*x2584));

    if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x2604 = -1;
	static int32_t t73 = 298;

    t73 = ((x2601!=x2602)<<(x2603*x2604));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x2653 = -1;
	int8_t x2654 = 2;
	int8_t x2655 = -1;
	uint32_t x2656 = UINT32_MAX;

    t74 = ((x2653!=x2654)<<(x2655*x2656));

    if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x2663 = -1;
	uint32_t x2664 = UINT32_MAX;
	int32_t t75 = -1886460;

    t75 = ((x2661!=x2662)<<(x2663*x2664));

    if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x2693 = INT64_MIN;
	static int32_t x2694 = INT32_MIN;
	int64_t x2695 = -2160525756515LL;
	volatile int64_t x2696 = 0LL;
	int32_t t76 = 4;

    t76 = ((x2693!=x2694)<<(x2695*x2696));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x2793 = -1;
	int32_t x2794 = -6721;
	volatile int32_t x2795 = -1;
	int8_t x2796 = -1;
	static volatile int32_t t77 = -116333;

    t77 = ((x2793!=x2794)<<(x2795*x2796));

    if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x2805 = 1;
	uint32_t x2806 = 1494231U;
	uint8_t x2807 = 0U;
	static uint8_t x2808 = 75U;
	volatile int32_t t78 = -1;

    t78 = ((x2805!=x2806)<<(x2807*x2808));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x2821 = INT32_MIN;
	static int16_t x2822 = INT16_MIN;
	static int16_t x2824 = -1;

    t79 = ((x2821!=x2822)<<(x2823*x2824));

    if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x2825 = 6;
	int64_t x2826 = INT64_MIN;
	int16_t x2827 = -1;
	volatile int16_t x2828 = -1;
	static volatile int32_t t80 = 7321;

    t80 = ((x2825!=x2826)<<(x2827*x2828));

    if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x2853 = INT32_MIN;
	volatile uint64_t x2854 = 184652377LLU;
	int8_t x2855 = 0;
	int32_t t81 = -3;

    t81 = ((x2853!=x2854)<<(x2855*x2856));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x2877 = 5;
	int16_t x2878 = INT16_MAX;
	uint8_t x2879 = 0U;
	uint64_t x2880 = 3176796446549630877LLU;
	volatile int32_t t82 = -36;

    t82 = ((x2877!=x2878)<<(x2879*x2880));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x2918 = -1;
	static uint8_t x2919 = 0U;
	volatile int32_t t83 = 158538;

    t83 = ((x2917!=x2918)<<(x2919*x2920));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x2945 = INT32_MIN;
	uint8_t x2947 = 0U;
	static uint16_t x2948 = 1106U;

    t84 = ((x2945!=x2946)<<(x2947*x2948));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x3049 = UINT64_MAX;
	int16_t x3050 = INT16_MAX;
	uint32_t x3051 = 390U;
	int8_t x3052 = 0;
	int32_t t85 = -2533;

    t85 = ((x3049!=x3050)<<(x3051*x3052));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x3085 = 53428330U;
	int8_t x3086 = -5;
	uint8_t x3087 = 2U;
	int16_t x3088 = 7;
	volatile int32_t t86 = 23954165;

    t86 = ((x3085!=x3086)<<(x3087*x3088));

    if (t86 != 16384) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x3157 = INT8_MAX;
	static volatile int8_t x3159 = -7;
	int32_t x3160 = -1;
	int32_t t87 = 52802645;

    t87 = ((x3157!=x3158)<<(x3159*x3160));

    if (t87 != 128) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x3233 = INT64_MIN;
	volatile int16_t x3234 = 0;
	static uint8_t x3235 = 25U;
	int8_t x3236 = 0;
	volatile int32_t t88 = 29474200;

    t88 = ((x3233!=x3234)<<(x3235*x3236));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x3305 = INT16_MIN;
	int32_t x3306 = INT32_MAX;
	int8_t x3307 = INT8_MIN;
	static volatile uint8_t x3308 = 0U;

    t89 = ((x3305!=x3306)<<(x3307*x3308));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x3369 = INT16_MIN;
	uint32_t x3370 = UINT32_MAX;
	volatile int8_t x3372 = -1;
	int32_t t90 = -302;

    t90 = ((x3369!=x3370)<<(x3371*x3372));

    if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x3401 = -108;
	int8_t x3402 = INT8_MIN;
	static int16_t x3403 = 0;
	uint64_t x3404 = 20490LLU;
	volatile int32_t t91 = 283725;

    t91 = ((x3401!=x3402)<<(x3403*x3404));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x3409 = 274U;
	static int32_t x3410 = INT32_MIN;
	int8_t x3411 = -15;
	volatile uint32_t x3412 = UINT32_MAX;

    t92 = ((x3409!=x3410)<<(x3411*x3412));

    if (t92 != 32768) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x3433 = INT8_MAX;
	int16_t x3435 = -1;
	int32_t t93 = -12669001;

    t93 = ((x3433!=x3434)<<(x3435*x3436));

    if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x3501 = 258202519;
	volatile int16_t x3502 = INT16_MIN;
	static int32_t x3504 = 0;
	static volatile int32_t t94 = -7590;

    t94 = ((x3501!=x3502)<<(x3503*x3504));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint16_t x3533 = UINT16_MAX;
	int64_t x3534 = -1LL;
	int8_t x3536 = INT8_MIN;
	volatile int32_t t95 = 61617;

    t95 = ((x3533!=x3534)<<(x3535*x3536));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x3549 = 69248U;
	uint8_t x3552 = 32U;
	static int32_t t96 = -4535;

    t96 = ((x3549!=x3550)<<(x3551*x3552));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x3554 = -4;
	static uint8_t x3555 = UINT8_MAX;
	int32_t x3556 = 0;
	int32_t t97 = -58419;

    t97 = ((x3553!=x3554)<<(x3555*x3556));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x3577 = -10041565784459LL;
	int8_t x3578 = INT8_MIN;
	volatile int16_t x3579 = -1;
	static int32_t t98 = -4;

    t98 = ((x3577!=x3578)<<(x3579*x3580));

    if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x3585 = 11;
	int32_t x3586 = INT32_MIN;
	volatile uint32_t x3587 = 752721856U;
	int8_t x3588 = 0;
	int32_t t99 = -35366498;

    t99 = ((x3585!=x3586)<<(x3587*x3588));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x3590 = -1;
	static int64_t x3591 = -1LL;
	uint32_t x3592 = 0U;

    t100 = ((x3589!=x3590)<<(x3591*x3592));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x3601 = UINT32_MAX;
	int32_t x3603 = -1;
	int8_t x3604 = -24;
	volatile int32_t t101 = -241249007;

    t101 = ((x3601!=x3602)<<(x3603*x3604));

    if (t101 != 16777216) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x3625 = INT8_MAX;
	uint64_t x3626 = 27465334014LLU;
	volatile uint64_t x3627 = UINT64_MAX;
	int16_t x3628 = -1;
	static volatile int32_t t102 = -97239868;

    t102 = ((x3625!=x3626)<<(x3627*x3628));

    if (t102 != 2) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x3713 = INT16_MIN;
	int64_t x3714 = INT64_MIN;
	int16_t x3716 = -1;
	static int32_t t103 = -2;

    t103 = ((x3713!=x3714)<<(x3715*x3716));

    if (t103 != 2) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x3749 = INT16_MIN;
	static volatile int64_t x3750 = 1428LL;
	uint16_t x3751 = UINT16_MAX;
	static uint16_t x3752 = 0U;
	volatile int32_t t104 = 1;

    t104 = ((x3749!=x3750)<<(x3751*x3752));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x3765 = 0U;
	volatile uint32_t x3766 = 18U;
	uint64_t x3767 = 539960925268LLU;
	int8_t x3768 = 0;

    t105 = ((x3765!=x3766)<<(x3767*x3768));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x3801 = INT16_MIN;
	uint8_t x3802 = 0U;
	static int8_t x3803 = -1;
	int8_t x3804 = 0;
	volatile int32_t t106 = -1679;

    t106 = ((x3801!=x3802)<<(x3803*x3804));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x3841 = INT8_MIN;
	volatile uint8_t x3842 = 6U;
	int8_t x3843 = INT8_MAX;

    t107 = ((x3841!=x3842)<<(x3843*x3844));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x3897 = 1965U;
	static int32_t x3898 = -1;
	int64_t x3899 = -2383620743296LL;
	uint8_t x3900 = 0U;
	static int32_t t108 = 2388649;

    t108 = ((x3897!=x3898)<<(x3899*x3900));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x3945 = -1LL;
	int64_t x3946 = 1LL;
	uint8_t x3947 = 0U;
	int64_t x3948 = -1LL;
	int32_t t109 = -28790121;

    t109 = ((x3945!=x3946)<<(x3947*x3948));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x3949 = 21494;
	volatile int8_t x3950 = 0;
	static volatile int8_t x3951 = -1;
	static uint32_t x3952 = UINT32_MAX;
	static int32_t t110 = -184;

    t110 = ((x3949!=x3950)<<(x3951*x3952));

    if (t110 != 2) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x3985 = INT32_MAX;
	volatile int64_t x3986 = INT64_MIN;
	int16_t x3987 = -28;
	static int32_t x3988 = -1;

    t111 = ((x3985!=x3986)<<(x3987*x3988));

    if (t111 != 268435456) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x3993 = -1LL;
	int64_t x3994 = INT64_MIN;
	uint16_t x3995 = 0U;
	uint16_t x3996 = 86U;
	volatile int32_t t112 = -102476;

    t112 = ((x3993!=x3994)<<(x3995*x3996));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x4033 = 2;
	uint8_t x4034 = 0U;

    t113 = ((x4033!=x4034)<<(x4035*x4036));

    if (t113 != 2) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x4078 = 89988294937LLU;
	volatile uint64_t x4079 = UINT64_MAX;
	int16_t x4080 = -1;
	int32_t t114 = -4258;

    t114 = ((x4077!=x4078)<<(x4079*x4080));

    if (t114 != 2) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x4149 = UINT32_MAX;
	static int16_t x4150 = INT16_MIN;
	uint8_t x4151 = 23U;
	volatile int32_t x4152 = 1;
	volatile int32_t t115 = -73;

    t115 = ((x4149!=x4150)<<(x4151*x4152));

    if (t115 != 8388608) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x4297 = -4;
	static volatile uint16_t x4298 = UINT16_MAX;
	int8_t x4299 = INT8_MIN;
	static int8_t x4300 = 0;
	int32_t t116 = -53526327;

    t116 = ((x4297!=x4298)<<(x4299*x4300));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x4377 = -1;
	int64_t x4378 = INT64_MIN;
	int16_t x4379 = -1;
	int8_t x4380 = -1;
	static int32_t t117 = -3013139;

    t117 = ((x4377!=x4378)<<(x4379*x4380));

    if (t117 != 2) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x4495 = 0;
	volatile int16_t x4496 = 2329;
	volatile int32_t t118 = 6205890;

    t118 = ((x4493!=x4494)<<(x4495*x4496));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x4513 = INT32_MAX;
	uint64_t x4514 = 193LLU;
	uint8_t x4515 = 0U;
	int16_t x4516 = 0;
	static volatile int32_t t119 = 0;

    t119 = ((x4513!=x4514)<<(x4515*x4516));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x4525 = 1;
	int64_t x4528 = -1LL;
	static int32_t t120 = -263350;

    t120 = ((x4525!=x4526)<<(x4527*x4528));

    if (t120 != 2) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x4605 = INT64_MAX;
	static int16_t x4606 = -1;
	int8_t x4607 = 0;
	int32_t t121 = 15;

    t121 = ((x4605!=x4606)<<(x4607*x4608));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x4629 = INT8_MAX;
	static int64_t x4630 = 7257LL;
	static int16_t x4631 = -1;
	int16_t x4632 = -1;
	volatile int32_t t122 = 2521225;

    t122 = ((x4629!=x4630)<<(x4631*x4632));

    if (t122 != 2) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x4662 = 17U;
	static int8_t x4663 = -1;

    t123 = ((x4661!=x4662)<<(x4663*x4664));

    if (t123 != 2) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x4697 = INT8_MIN;
	int64_t x4699 = -1LL;
	static uint64_t x4700 = UINT64_MAX;
	volatile int32_t t124 = -755245;

    t124 = ((x4697!=x4698)<<(x4699*x4700));

    if (t124 != 2) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x4705 = UINT64_MAX;
	int64_t x4706 = -34359082833998611LL;
	int8_t x4707 = 0;
	static int32_t x4708 = -1;
	int32_t t125 = -16400553;

    t125 = ((x4705!=x4706)<<(x4707*x4708));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x4717 = 1987201871382121498LL;
	static volatile int32_t x4718 = -1;
	int32_t x4719 = INT32_MIN;
	uint32_t x4720 = 60914U;
	int32_t t126 = 16;

    t126 = ((x4717!=x4718)<<(x4719*x4720));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x4765 = INT64_MAX;
	int8_t x4766 = -1;
	int8_t x4767 = 11;
	int16_t x4768 = 0;
	int32_t t127 = -1162;

    t127 = ((x4765!=x4766)<<(x4767*x4768));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int32_t x4781 = 287;
	static volatile uint32_t x4782 = 21660629U;
	volatile int32_t t128 = -140137;

    t128 = ((x4781!=x4782)<<(x4783*x4784));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x4813 = INT16_MIN;
	uint16_t x4814 = 2464U;
	static int8_t x4815 = 0;
	volatile int32_t t129 = -1;

    t129 = ((x4813!=x4814)<<(x4815*x4816));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x4841 = 6733792U;
	static int64_t x4842 = 3590LL;
	uint16_t x4844 = 0U;
	volatile int32_t t130 = 440139;

    t130 = ((x4841!=x4842)<<(x4843*x4844));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x4885 = INT32_MAX;
	volatile int8_t x4886 = -1;
	volatile int8_t x4887 = 0;
	int64_t x4888 = INT64_MIN;
	int32_t t131 = 189;

    t131 = ((x4885!=x4886)<<(x4887*x4888));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x4909 = INT16_MAX;
	int8_t x4912 = 0;
	volatile int32_t t132 = -92;

    t132 = ((x4909!=x4910)<<(x4911*x4912));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int64_t x4957 = 137405075060699LL;
	static uint16_t x4958 = UINT16_MAX;
	int8_t x4959 = -1;
	volatile int8_t x4960 = -1;
	volatile int32_t t133 = 729406979;

    t133 = ((x4957!=x4958)<<(x4959*x4960));

    if (t133 != 2) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x4961 = 938049U;
	uint32_t x4963 = 30U;

    t134 = ((x4961!=x4962)<<(x4963*x4964));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x5090 = UINT8_MAX;
	uint32_t x5091 = 3U;
	int16_t x5092 = 0;
	volatile int32_t t135 = 87045610;

    t135 = ((x5089!=x5090)<<(x5091*x5092));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x5114 = INT64_MIN;
	int8_t x5116 = -1;
	volatile int32_t t136 = 5528;

    t136 = ((x5113!=x5114)<<(x5115*x5116));

    if (t136 != 2) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x5169 = INT8_MIN;
	int8_t x5171 = INT8_MIN;
	int8_t x5172 = 0;
	volatile int32_t t137 = 238499;

    t137 = ((x5169!=x5170)<<(x5171*x5172));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x5193 = INT16_MIN;
	int32_t x5194 = 259;
	uint8_t x5195 = 0U;
	int32_t t138 = 905;

    t138 = ((x5193!=x5194)<<(x5195*x5196));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x5205 = INT8_MAX;
	static int8_t x5206 = 1;
	volatile int64_t x5208 = -1LL;
	static int32_t t139 = 58258;

    t139 = ((x5205!=x5206)<<(x5207*x5208));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x5229 = 3289U;
	volatile int32_t x5230 = 5927615;
	uint16_t x5231 = 0U;
	uint32_t x5232 = 14871U;
	volatile int32_t t140 = -1797;

    t140 = ((x5229!=x5230)<<(x5231*x5232));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x5269 = UINT16_MAX;
	int32_t x5270 = INT32_MIN;
	static volatile int8_t x5271 = 0;
	uint8_t x5272 = 122U;
	int32_t t141 = 87947;

    t141 = ((x5269!=x5270)<<(x5271*x5272));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x5370 = INT8_MAX;
	int16_t x5371 = -1;
	int16_t x5372 = -4;
	volatile int32_t t142 = 99749198;

    t142 = ((x5369!=x5370)<<(x5371*x5372));

    if (t142 != 16) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x5390 = INT32_MAX;
	int32_t x5391 = -1;
	int16_t x5392 = -1;

    t143 = ((x5389!=x5390)<<(x5391*x5392));

    if (t143 != 2) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x5394 = 37;
	int16_t x5395 = -1;
	int8_t x5396 = -1;

    t144 = ((x5393!=x5394)<<(x5395*x5396));

    if (t144 != 2) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x5433 = INT64_MIN;
	int32_t x5434 = INT32_MIN;
	int8_t x5435 = 0;
	uint16_t x5436 = UINT16_MAX;
	volatile int32_t t145 = 0;

    t145 = ((x5433!=x5434)<<(x5435*x5436));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x5505 = -306709756191305747LL;
	uint8_t x5506 = 5U;
	static int16_t x5507 = 0;
	int64_t x5508 = 9850LL;
	volatile int32_t t146 = 7;

    t146 = ((x5505!=x5506)<<(x5507*x5508));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x5529 = -42;
	static uint16_t x5530 = 11574U;
	static int8_t x5531 = -1;
	int32_t t147 = -98;

    t147 = ((x5529!=x5530)<<(x5531*x5532));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x5629 = -1LL;
	int8_t x5630 = 1;
	static uint64_t x5631 = UINT64_MAX;
	volatile int8_t x5632 = 0;
	volatile int32_t t148 = -111994;

    t148 = ((x5629!=x5630)<<(x5631*x5632));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x5642 = UINT8_MAX;
	int8_t x5644 = 36;
	volatile int32_t t149 = 6793883;

    t149 = ((x5641!=x5642)<<(x5643*x5644));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x5678 = UINT16_MAX;
	uint8_t x5679 = 3U;
	static uint32_t x5680 = 0U;
	static int32_t t150 = 482792;

    t150 = ((x5677!=x5678)<<(x5679*x5680));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x5681 = INT64_MIN;
	int32_t x5682 = -449;
	int16_t x5683 = 123;
	int8_t x5684 = 0;

    t151 = ((x5681!=x5682)<<(x5683*x5684));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x5685 = -3640644737LL;
	int16_t x5686 = INT16_MAX;
	int16_t x5687 = -1;
	int32_t x5688 = -17;
	static int32_t t152 = -30578189;

    t152 = ((x5685!=x5686)<<(x5687*x5688));

    if (t152 != 131072) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x5697 = -1;
	int8_t x5698 = INT8_MAX;
	int32_t x5699 = 219673;
	volatile uint16_t x5700 = 0U;

    t153 = ((x5697!=x5698)<<(x5699*x5700));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x5725 = 12U;
	int8_t x5728 = -1;

    t154 = ((x5725!=x5726)<<(x5727*x5728));

    if (t154 != 2) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x5738 = INT32_MIN;
	uint8_t x5739 = 0U;
	int8_t x5740 = INT8_MIN;
	volatile int32_t t155 = 49;

    t155 = ((x5737!=x5738)<<(x5739*x5740));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x5881 = 60805065U;
	static volatile int8_t x5882 = INT8_MAX;
	volatile int8_t x5884 = -7;
	int32_t t156 = -3354458;

    t156 = ((x5881!=x5882)<<(x5883*x5884));

    if (t156 != 128) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x5885 = 1;
	uint8_t x5886 = 10U;
	int8_t x5887 = 61;
	volatile int8_t x5888 = 0;
	static volatile int32_t t157 = -16140;

    t157 = ((x5885!=x5886)<<(x5887*x5888));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x5894 = -622983LL;
	static int32_t x5895 = -1;
	uint32_t x5896 = UINT32_MAX;
	volatile int32_t t158 = 64611;

    t158 = ((x5893!=x5894)<<(x5895*x5896));

    if (t158 != 2) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x5937 = 9U;
	volatile uint32_t x5938 = 20433U;
	int16_t x5939 = 0;
	int16_t x5940 = INT16_MAX;
	volatile int32_t t159 = 2605722;

    t159 = ((x5937!=x5938)<<(x5939*x5940));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x5941 = -1;
	uint16_t x5943 = UINT16_MAX;
	int16_t x5944 = 0;
	volatile int32_t t160 = -1;

    t160 = ((x5941!=x5942)<<(x5943*x5944));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int16_t x5953 = INT16_MAX;
	volatile int32_t x5954 = 22;
	int16_t x5955 = 0;
	volatile int16_t x5956 = -227;
	volatile int32_t t161 = -126;

    t161 = ((x5953!=x5954)<<(x5955*x5956));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x6037 = INT16_MIN;
	uint32_t x6038 = UINT32_MAX;
	int32_t x6039 = -1;
	int16_t x6040 = 0;
	volatile int32_t t162 = -57;

    t162 = ((x6037!=x6038)<<(x6039*x6040));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x6069 = 17320U;
	uint32_t x6070 = 43U;
	volatile int8_t x6071 = -1;
	volatile int16_t x6072 = -1;
	volatile int32_t t163 = 58913;

    t163 = ((x6069!=x6070)<<(x6071*x6072));

    if (t163 != 2) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x6077 = INT16_MIN;
	int32_t x6078 = INT32_MIN;
	static uint16_t x6079 = 10U;

    t164 = ((x6077!=x6078)<<(x6079*x6080));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x6082 = INT64_MAX;
	int64_t x6083 = 0LL;
	int64_t x6084 = -1883LL;
	static int32_t t165 = 87;

    t165 = ((x6081!=x6082)<<(x6083*x6084));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x6113 = -1;
	uint16_t x6115 = 0U;
	int64_t x6116 = INT64_MIN;
	volatile int32_t t166 = 1533;

    t166 = ((x6113!=x6114)<<(x6115*x6116));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x6129 = INT32_MAX;
	uint16_t x6130 = UINT16_MAX;
	volatile uint8_t x6131 = UINT8_MAX;
	uint8_t x6132 = 0U;
	int32_t t167 = 14317174;

    t167 = ((x6129!=x6130)<<(x6131*x6132));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x6150 = -1;
	volatile int16_t x6152 = INT16_MAX;
	int32_t t168 = 113802936;

    t168 = ((x6149!=x6150)<<(x6151*x6152));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x6201 = 1618;
	static int32_t x6202 = -1;
	int32_t t169 = 1326;

    t169 = ((x6201!=x6202)<<(x6203*x6204));

    if (t169 != 2) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x6229 = UINT8_MAX;
	uint8_t x6230 = UINT8_MAX;
	int32_t x6231 = 0;
	uint16_t x6232 = UINT16_MAX;
	static volatile int32_t t170 = 12944845;

    t170 = ((x6229!=x6230)<<(x6231*x6232));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x6253 = INT32_MIN;
	uint64_t x6255 = 1217843129353225392LLU;
	int64_t x6256 = INT64_MIN;
	volatile int32_t t171 = -388;

    t171 = ((x6253!=x6254)<<(x6255*x6256));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x6385 = INT8_MIN;
	static int32_t x6387 = 705429096;
	int8_t x6388 = 0;
	int32_t t172 = -16933654;

    t172 = ((x6385!=x6386)<<(x6387*x6388));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x6389 = INT64_MAX;
	int64_t x6390 = 1038128331459380LL;
	volatile int16_t x6391 = -7;
	volatile int32_t t173 = 794544;

    t173 = ((x6389!=x6390)<<(x6391*x6392));

    if (t173 != 128) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x6437 = -1;
	volatile int32_t x6438 = -1;
	static uint32_t x6439 = 0U;
	int32_t t174 = 0;

    t174 = ((x6437!=x6438)<<(x6439*x6440));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x6490 = INT32_MIN;
	int64_t x6491 = -1LL;
	int32_t x6492 = -1;
	int32_t t175 = -1913169;

    t175 = ((x6489!=x6490)<<(x6491*x6492));

    if (t175 != 2) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x6505 = 14084330LLU;
	volatile uint8_t x6506 = UINT8_MAX;
	int8_t x6508 = -1;

    t176 = ((x6505!=x6506)<<(x6507*x6508));

    if (t176 != 2) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x6573 = 811LLU;
	static volatile int8_t x6574 = INT8_MAX;
	volatile int16_t x6575 = 0;
	int8_t x6576 = 37;
	static int32_t t177 = 116837;

    t177 = ((x6573!=x6574)<<(x6575*x6576));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x6661 = INT16_MIN;
	uint32_t x6662 = UINT32_MAX;
	static volatile int64_t x6663 = -1LL;
	int64_t x6664 = -1LL;
	volatile int32_t t178 = 249882958;

    t178 = ((x6661!=x6662)<<(x6663*x6664));

    if (t178 != 2) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x6702 = INT64_MAX;
	static volatile int32_t x6703 = 0;
	int32_t x6704 = -75825;
	int32_t t179 = -1988;

    t179 = ((x6701!=x6702)<<(x6703*x6704));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x6733 = UINT16_MAX;
	static int8_t x6735 = -1;

    t180 = ((x6733!=x6734)<<(x6735*x6736));

    if (t180 != 2) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x6773 = INT8_MAX;
	uint8_t x6774 = 2U;
	uint8_t x6775 = UINT8_MAX;
	static int16_t x6776 = 0;
	volatile int32_t t181 = 222778010;

    t181 = ((x6773!=x6774)<<(x6775*x6776));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x6858 = 13;
	int8_t x6859 = -1;
	volatile uint64_t x6860 = UINT64_MAX;

    t182 = ((x6857!=x6858)<<(x6859*x6860));

    if (t182 != 2) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x6869 = 53U;
	uint16_t x6870 = UINT16_MAX;
	uint32_t x6871 = UINT32_MAX;
	uint32_t x6872 = UINT32_MAX;
	volatile int32_t t183 = 1365;

    t183 = ((x6869!=x6870)<<(x6871*x6872));

    if (t183 != 2) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x6873 = INT64_MAX;
	volatile uint8_t x6874 = UINT8_MAX;
	uint16_t x6875 = 0U;
	uint32_t x6876 = 1U;
	int32_t t184 = -1;

    t184 = ((x6873!=x6874)<<(x6875*x6876));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x6881 = INT64_MIN;
	int64_t x6882 = 851798812052946LL;
	int64_t x6883 = 0LL;
	static volatile int32_t x6884 = INT32_MIN;
	volatile int32_t t185 = 18418;

    t185 = ((x6881!=x6882)<<(x6883*x6884));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x6921 = UINT64_MAX;
	int16_t x6922 = INT16_MIN;
	int16_t x6923 = 0;
	static int16_t x6924 = -1;
	static int32_t t186 = 15422;

    t186 = ((x6921!=x6922)<<(x6923*x6924));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x6929 = INT32_MIN;
	int32_t x6930 = INT32_MIN;
	uint8_t x6931 = 2U;
	static uint16_t x6932 = 0U;
	int32_t t187 = -2;

    t187 = ((x6929!=x6930)<<(x6931*x6932));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x6961 = UINT32_MAX;
	static uint64_t x6962 = 1431658LLU;
	int64_t x6963 = -1LL;
	volatile int16_t x6964 = -1;

    t188 = ((x6961!=x6962)<<(x6963*x6964));

    if (t188 != 2) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x7017 = 882U;
	int8_t x7019 = -1;
	int32_t x7020 = 0;
	volatile int32_t t189 = 1;

    t189 = ((x7017!=x7018)<<(x7019*x7020));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x7077 = 48U;
	int32_t x7078 = INT32_MAX;
	int32_t x7080 = INT32_MIN;
	volatile int32_t t190 = -902637524;

    t190 = ((x7077!=x7078)<<(x7079*x7080));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x7122 = INT16_MIN;
	volatile uint32_t x7123 = UINT32_MAX;
	static volatile int16_t x7124 = -1;

    t191 = ((x7121!=x7122)<<(x7123*x7124));

    if (t191 != 2) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x7197 = 108706U;
	static uint8_t x7199 = 1U;
	int32_t t192 = -9816337;

    t192 = ((x7197!=x7198)<<(x7199*x7200));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x7209 = INT64_MIN;
	int16_t x7210 = -772;
	int32_t x7211 = INT32_MIN;
	uint8_t x7212 = 0U;
	static volatile int32_t t193 = -3;

    t193 = ((x7209!=x7210)<<(x7211*x7212));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x7281 = 898;
	static volatile uint32_t x7282 = 3123340U;
	volatile int16_t x7283 = -1;

    t194 = ((x7281!=x7282)<<(x7283*x7284));

    if (t194 != 2) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x7369 = INT64_MIN;
	int64_t x7371 = -1LL;
	uint64_t x7372 = UINT64_MAX;
	int32_t t195 = 14981563;

    t195 = ((x7369!=x7370)<<(x7371*x7372));

    if (t195 != 2) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x7454 = INT64_MAX;
	uint64_t x7455 = 386160785450679LLU;
	static int16_t x7456 = 0;

    t196 = ((x7453!=x7454)<<(x7455*x7456));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x7461 = 13760277026643LLU;
	volatile int8_t x7462 = INT8_MIN;
	uint8_t x7463 = 1U;
	static int16_t x7464 = 4;
	volatile int32_t t197 = 15;

    t197 = ((x7461!=x7462)<<(x7463*x7464));

    if (t197 != 16) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x7533 = -53861LL;
	int8_t x7534 = INT8_MIN;
	int32_t x7535 = -1;
	static volatile int32_t t198 = -65213;

    t198 = ((x7533!=x7534)<<(x7535*x7536));

    if (t198 != 2) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x7586 = INT32_MIN;
	int16_t x7587 = 0;
	volatile int32_t x7588 = -66332;

    t199 = ((x7585!=x7586)<<(x7587*x7588));

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


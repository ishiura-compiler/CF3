
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

volatile int32_t x1 = 138920042;
int32_t x2 = 2;
volatile int8_t x122 = 1;
static int16_t x125 = INT16_MAX;
int16_t x255 = -1;
static volatile uint32_t x284 = 1485255040U;
static uint16_t x397 = 16298U;
int32_t t10 = -12047217;
volatile int32_t t11 = 92310;
volatile int32_t t12 = -2900;
static int32_t x457 = 53236;
static volatile int32_t t13 = 358344;
uint32_t x601 = UINT32_MAX;
int16_t x602 = 15;
volatile int32_t t15 = 17635;
int8_t x688 = INT8_MIN;
volatile int32_t t17 = 6;
int32_t x779 = 43;
static uint16_t x850 = 1U;
static uint8_t x851 = 1U;
volatile uint8_t x937 = 21U;
int16_t x940 = -3;
volatile int8_t x1103 = INT8_MIN;
uint16_t x1149 = 1287U;
uint8_t x1151 = 20U;
static uint16_t x1187 = 1467U;
uint32_t x1188 = 1541837U;
volatile int32_t t27 = 3;
uint64_t x1197 = 888762LLU;
int16_t x1199 = INT16_MIN;
volatile uint16_t x1201 = 11291U;
uint64_t x1294 = 2LLU;
int8_t x1329 = INT8_MAX;
int64_t x1332 = 610594749686LL;
static volatile int32_t t31 = -1;
uint64_t x1367 = UINT64_MAX;
uint8_t x1561 = UINT8_MAX;
volatile uint64_t x1633 = 242320612177559LLU;
volatile int32_t x1636 = INT32_MIN;
volatile int32_t t35 = -1820336;
int8_t x1662 = 2;
static int32_t x1663 = 867;
int16_t x1664 = INT16_MAX;
uint64_t x1739 = 25003233630046LLU;
static int32_t t37 = 110479;
uint8_t x1769 = 2U;
static volatile uint8_t x1770 = 8U;
static volatile int32_t t38 = 483;
int32_t x1794 = 5;
int16_t x1795 = -734;
uint8_t x1838 = 4U;
int16_t x1987 = INT16_MAX;
int8_t x2138 = 1;
volatile int32_t x2139 = -1;
int16_t x2148 = INT16_MIN;
static int32_t x2192 = -1;
int32_t x2314 = 1;
int32_t x2315 = INT32_MIN;
volatile int32_t x2316 = 44380;
volatile int32_t x2318 = 1;
volatile uint64_t x2373 = 1762665531297346218LLU;
int64_t x2375 = -1LL;
uint32_t x2376 = UINT32_MAX;
int32_t x2399 = 0;
uint32_t x2462 = 3U;
int32_t t57 = 1;
int64_t x2522 = 0LL;
static int32_t t62 = -441;
int16_t x2551 = -3697;
int32_t t63 = 400;
volatile int32_t t64 = -1;
int64_t x2926 = 0LL;
volatile int64_t x2927 = INT64_MIN;
uint64_t x2928 = 1LLU;
uint16_t x3104 = UINT16_MAX;
int64_t x3110 = 1LL;
uint64_t x3111 = UINT64_MAX;
volatile int32_t t70 = 275;
static uint32_t x3134 = 7U;
volatile int8_t x3135 = INT8_MIN;
static int16_t x3151 = -1;
int32_t x3152 = 498000;
static uint16_t x3158 = 19U;
static uint32_t x3160 = 6665U;
static int8_t x3483 = INT8_MIN;
uint16_t x3484 = UINT16_MAX;
static volatile int64_t x3516 = 2347LL;
int32_t t83 = 5512768;
static uint16_t x3906 = 1U;
uint32_t x3907 = 27U;
int64_t x4180 = INT64_MIN;
int16_t x4185 = 1;
volatile uint8_t x4187 = UINT8_MAX;
volatile int32_t t90 = -1360054;
int64_t x4197 = INT64_MAX;
volatile int32_t t91 = -26;
static int32_t t92 = -168;
static int8_t x4283 = -1;
int32_t t94 = -729880876;
int64_t x4367 = 46LL;
uint64_t x4368 = 1254669898799224842LLU;
int32_t x4455 = INT32_MIN;
volatile int32_t t97 = -1284;
static volatile int8_t x4558 = 20;


void f0(void) {
    	volatile int16_t x3 = -14;
	static uint8_t x4 = UINT8_MAX;
	int32_t t0 = -671811;

    t0 = (((x1>>x2)+x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	int8_t x6 = 20;
	uint8_t x7 = UINT8_MAX;
	uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = -73;

    t1 = (((x5>>x6)+x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x121 = UINT64_MAX;
	uint64_t x123 = 1393850LLU;
	int32_t x124 = -1;
	volatile int32_t t2 = 20444386;

    t2 = (((x121>>x122)+x123)>x124);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x126 = 13;
	uint16_t x127 = 31236U;
	volatile uint32_t x128 = UINT32_MAX;
	int32_t t3 = -384;

    t3 = (((x125>>x126)+x127)>x128);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x181 = 52623U;
	int8_t x182 = 0;
	uint32_t x183 = UINT32_MAX;
	static int32_t x184 = 36866701;
	int32_t t4 = 412;

    t4 = (((x181>>x182)+x183)>x184);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x253 = 1U;
	uint16_t x254 = 2U;
	static uint8_t x256 = UINT8_MAX;
	volatile int32_t t5 = -17;

    t5 = (((x253>>x254)+x255)>x256);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x281 = 0LL;
	uint16_t x282 = 1U;
	volatile int64_t x283 = INT64_MIN;
	volatile int32_t t6 = 48528119;

    t6 = (((x281>>x282)+x283)>x284);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x285 = INT32_MAX;
	int16_t x286 = 1;
	int64_t x287 = -1LL;
	static int16_t x288 = 0;
	volatile int32_t t7 = -450;

    t7 = (((x285>>x286)+x287)>x288);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x369 = INT64_MAX;
	int8_t x370 = 1;
	static volatile int8_t x371 = -11;
	int32_t x372 = -1;
	int32_t t8 = 56048555;

    t8 = (((x369>>x370)+x371)>x372);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x398 = 6;
	uint32_t x399 = 5128U;
	int8_t x400 = INT8_MIN;
	int32_t t9 = -5492;

    t9 = (((x397>>x398)+x399)>x400);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x417 = UINT32_MAX;
	int8_t x418 = 2;
	uint64_t x419 = UINT64_MAX;
	volatile int32_t x420 = INT32_MAX;

    t10 = (((x417>>x418)+x419)>x420);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x433 = 1LL;
	int8_t x434 = 0;
	int64_t x435 = -3713958704316LL;
	int16_t x436 = INT16_MIN;

    t11 = (((x433>>x434)+x435)>x436);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x445 = INT16_MAX;
	int8_t x446 = 3;
	volatile int64_t x447 = -1LL;
	int64_t x448 = 2330449223605814830LL;

    t12 = (((x445>>x446)+x447)>x448);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x458 = 0U;
	uint64_t x459 = 162129069114LLU;
	static volatile int16_t x460 = INT16_MAX;

    t13 = (((x457>>x458)+x459)>x460);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x603 = 2;
	int64_t x604 = -1LL;
	volatile int32_t t14 = 116;

    t14 = (((x601>>x602)+x603)>x604);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x617 = 5836427096556LL;
	volatile int64_t x618 = 1LL;
	uint64_t x619 = UINT64_MAX;
	static int64_t x620 = -3LL;

    t15 = (((x617>>x618)+x619)>x620);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x685 = INT8_MAX;
	static uint16_t x686 = 12U;
	uint8_t x687 = UINT8_MAX;
	volatile int32_t t16 = -63643;

    t16 = (((x685>>x686)+x687)>x688);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x773 = INT8_MAX;
	int8_t x774 = 0;
	static int32_t x775 = 61;
	volatile uint64_t x776 = 1080769814878634LLU;

    t17 = (((x773>>x774)+x775)>x776);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x777 = 11919U;
	static uint16_t x778 = 1U;
	uint64_t x780 = UINT64_MAX;
	volatile int32_t t18 = 7;

    t18 = (((x777>>x778)+x779)>x780);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x849 = 550772U;
	int8_t x852 = INT8_MAX;
	volatile int32_t t19 = -67802;

    t19 = (((x849>>x850)+x851)>x852);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint8_t x938 = 19U;
	int32_t x939 = INT32_MAX;
	int32_t t20 = 31;

    t20 = (((x937>>x938)+x939)>x940);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x1001 = 1;
	uint8_t x1002 = 3U;
	int8_t x1003 = -54;
	int64_t x1004 = INT64_MAX;
	int32_t t21 = -984;

    t21 = (((x1001>>x1002)+x1003)>x1004);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x1013 = UINT8_MAX;
	static uint8_t x1014 = 14U;
	static int32_t x1015 = INT32_MAX;
	uint64_t x1016 = 446LLU;
	int32_t t22 = -3;

    t22 = (((x1013>>x1014)+x1015)>x1016);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x1049 = UINT16_MAX;
	static uint8_t x1050 = 0U;
	int64_t x1051 = -1LL;
	volatile uint32_t x1052 = 48499U;
	int32_t t23 = -108486694;

    t23 = (((x1049>>x1050)+x1051)>x1052);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x1077 = UINT8_MAX;
	int16_t x1078 = 1;
	static int8_t x1079 = 6;
	static int64_t x1080 = -876LL;
	volatile int32_t t24 = -18145;

    t24 = (((x1077>>x1078)+x1079)>x1080);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x1101 = UINT16_MAX;
	static int8_t x1102 = 1;
	static int8_t x1104 = INT8_MAX;
	static volatile int32_t t25 = 105147040;

    t25 = (((x1101>>x1102)+x1103)>x1104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x1150 = 8U;
	int8_t x1152 = 8;
	volatile int32_t t26 = -3893025;

    t26 = (((x1149>>x1150)+x1151)>x1152);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x1185 = INT16_MAX;
	int16_t x1186 = 10;

    t27 = (((x1185>>x1186)+x1187)>x1188);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x1198 = 7;
	volatile int64_t x1200 = INT64_MIN;
	int32_t t28 = -25035;

    t28 = (((x1197>>x1198)+x1199)>x1200);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x1202 = 9U;
	static uint64_t x1203 = 332LLU;
	uint16_t x1204 = 30390U;
	int32_t t29 = -16982;

    t29 = (((x1201>>x1202)+x1203)>x1204);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1293 = INT32_MAX;
	uint8_t x1295 = 31U;
	uint32_t x1296 = 3U;
	int32_t t30 = 62;

    t30 = (((x1293>>x1294)+x1295)>x1296);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x1330 = 0;
	static int8_t x1331 = -14;

    t31 = (((x1329>>x1330)+x1331)>x1332);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x1349 = INT32_MAX;
	uint16_t x1350 = 10U;
	uint16_t x1351 = UINT16_MAX;
	volatile int32_t x1352 = INT32_MIN;
	static int32_t t32 = 3320;

    t32 = (((x1349>>x1350)+x1351)>x1352);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x1365 = INT8_MAX;
	static int8_t x1366 = 27;
	uint64_t x1368 = UINT64_MAX;
	int32_t t33 = -1;

    t33 = (((x1365>>x1366)+x1367)>x1368);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x1562 = 2;
	int32_t x1563 = -245037986;
	volatile uint64_t x1564 = 347262557LLU;
	volatile int32_t t34 = -1;

    t34 = (((x1561>>x1562)+x1563)>x1564);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x1634 = 0LLU;
	int8_t x1635 = INT8_MIN;

    t35 = (((x1633>>x1634)+x1635)>x1636);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x1661 = 29U;
	int32_t t36 = 548426;

    t36 = (((x1661>>x1662)+x1663)>x1664);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x1737 = 318528961993077LL;
	volatile uint64_t x1738 = 0LLU;
	int64_t x1740 = INT64_MIN;

    t37 = (((x1737>>x1738)+x1739)>x1740);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x1771 = INT16_MAX;
	uint32_t x1772 = 13U;

    t38 = (((x1769>>x1770)+x1771)>x1772);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x1793 = 114U;
	volatile uint64_t x1796 = 18040020071890551LLU;
	int32_t t39 = 153;

    t39 = (((x1793>>x1794)+x1795)>x1796);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x1809 = UINT64_MAX;
	volatile int8_t x1810 = 52;
	static int64_t x1811 = -1LL;
	uint8_t x1812 = 2U;
	volatile int32_t t40 = 4922026;

    t40 = (((x1809>>x1810)+x1811)>x1812);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint8_t x1837 = UINT8_MAX;
	uint32_t x1839 = 260838344U;
	uint32_t x1840 = 1685865U;
	int32_t t41 = 97508085;

    t41 = (((x1837>>x1838)+x1839)>x1840);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x1857 = INT32_MAX;
	int64_t x1858 = 2LL;
	static uint64_t x1859 = 3809896311LLU;
	uint8_t x1860 = UINT8_MAX;
	volatile int32_t t42 = 707;

    t42 = (((x1857>>x1858)+x1859)>x1860);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x1985 = UINT64_MAX;
	volatile uint64_t x1986 = 4LLU;
	uint32_t x1988 = UINT32_MAX;
	volatile int32_t t43 = -63;

    t43 = (((x1985>>x1986)+x1987)>x1988);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x2101 = INT16_MAX;
	uint8_t x2102 = 25U;
	int32_t x2103 = 1;
	int64_t x2104 = 24732LL;
	int32_t t44 = 121;

    t44 = (((x2101>>x2102)+x2103)>x2104);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x2137 = 0U;
	uint16_t x2140 = UINT16_MAX;
	volatile int32_t t45 = 3703;

    t45 = (((x2137>>x2138)+x2139)>x2140);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x2145 = 1U;
	static uint8_t x2146 = 30U;
	volatile uint8_t x2147 = 2U;
	volatile int32_t t46 = 85170;

    t46 = (((x2145>>x2146)+x2147)>x2148);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x2189 = 4U;
	volatile uint8_t x2190 = 0U;
	volatile int8_t x2191 = -1;
	volatile int32_t t47 = -594;

    t47 = (((x2189>>x2190)+x2191)>x2192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x2225 = 88484725858791936LLU;
	uint8_t x2226 = 21U;
	static int64_t x2227 = -1LL;
	int8_t x2228 = 10;
	int32_t t48 = 770953;

    t48 = (((x2225>>x2226)+x2227)>x2228);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x2301 = 3U;
	uint16_t x2302 = 20U;
	static int32_t x2303 = INT32_MIN;
	int8_t x2304 = -2;
	volatile int32_t t49 = 9;

    t49 = (((x2301>>x2302)+x2303)>x2304);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x2313 = UINT16_MAX;
	volatile int32_t t50 = -3481980;

    t50 = (((x2313>>x2314)+x2315)>x2316);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x2317 = INT64_MAX;
	int64_t x2319 = 814LL;
	int16_t x2320 = -7523;
	int32_t t51 = 66960726;

    t51 = (((x2317>>x2318)+x2319)>x2320);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x2325 = 96U;
	uint8_t x2326 = 2U;
	static int32_t x2327 = -1;
	static uint8_t x2328 = UINT8_MAX;
	int32_t t52 = 3062666;

    t52 = (((x2325>>x2326)+x2327)>x2328);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x2345 = 67U;
	int16_t x2346 = 1;
	uint16_t x2347 = 15U;
	int32_t x2348 = 1205109;
	static volatile int32_t t53 = 172876;

    t53 = (((x2345>>x2346)+x2347)>x2348);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x2374 = 0U;
	int32_t t54 = 45694;

    t54 = (((x2373>>x2374)+x2375)>x2376);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int32_t x2397 = 18627073;
	uint16_t x2398 = 0U;
	int64_t x2400 = -1LL;
	volatile int32_t t55 = -28067954;

    t55 = (((x2397>>x2398)+x2399)>x2400);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x2413 = 186U;
	uint8_t x2414 = 3U;
	uint32_t x2415 = UINT32_MAX;
	int16_t x2416 = INT16_MAX;
	int32_t t56 = -68;

    t56 = (((x2413>>x2414)+x2415)>x2416);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x2461 = INT8_MAX;
	int8_t x2463 = INT8_MIN;
	uint64_t x2464 = 31122308580007LLU;

    t57 = (((x2461>>x2462)+x2463)>x2464);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x2465 = 0U;
	static int8_t x2466 = 0;
	uint8_t x2467 = 0U;
	volatile uint16_t x2468 = UINT16_MAX;
	int32_t t58 = 60;

    t58 = (((x2465>>x2466)+x2467)>x2468);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x2469 = 5LLU;
	static uint8_t x2470 = 0U;
	int64_t x2471 = INT64_MIN;
	volatile uint16_t x2472 = UINT16_MAX;
	volatile int32_t t59 = -7683419;

    t59 = (((x2469>>x2470)+x2471)>x2472);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x2477 = 1054918;
	volatile int16_t x2478 = 1;
	static volatile int16_t x2479 = -1;
	int16_t x2480 = INT16_MIN;
	static volatile int32_t t60 = 1687696;

    t60 = (((x2477>>x2478)+x2479)>x2480);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x2481 = INT8_MAX;
	uint8_t x2482 = 7U;
	uint32_t x2483 = 59754469U;
	volatile int64_t x2484 = INT64_MIN;
	int32_t t61 = -40723969;

    t61 = (((x2481>>x2482)+x2483)>x2484);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x2521 = INT16_MAX;
	static uint8_t x2523 = 23U;
	int16_t x2524 = 7;

    t62 = (((x2521>>x2522)+x2523)>x2524);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x2549 = 15U;
	static uint16_t x2550 = 6U;
	int8_t x2552 = 46;

    t63 = (((x2549>>x2550)+x2551)>x2552);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x2649 = UINT8_MAX;
	uint16_t x2650 = 12U;
	static uint32_t x2651 = 51401U;
	int16_t x2652 = INT16_MIN;

    t64 = (((x2649>>x2650)+x2651)>x2652);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x2873 = INT8_MAX;
	static uint8_t x2874 = 1U;
	uint8_t x2875 = 97U;
	int64_t x2876 = 93951LL;
	volatile int32_t t65 = -3862;

    t65 = (((x2873>>x2874)+x2875)>x2876);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x2925 = 72734789230949LLU;
	int32_t t66 = -5;

    t66 = (((x2925>>x2926)+x2927)>x2928);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x2945 = INT32_MAX;
	uint16_t x2946 = 3U;
	static int32_t x2947 = INT32_MIN;
	volatile int16_t x2948 = INT16_MAX;
	volatile int32_t t67 = 1;

    t67 = (((x2945>>x2946)+x2947)>x2948);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x3057 = INT16_MAX;
	uint8_t x3058 = 6U;
	int32_t x3059 = -1;
	int16_t x3060 = INT16_MIN;
	int32_t t68 = -10965880;

    t68 = (((x3057>>x3058)+x3059)>x3060);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x3101 = 54575233LL;
	volatile uint8_t x3102 = 2U;
	int16_t x3103 = -5190;
	int32_t t69 = -1;

    t69 = (((x3101>>x3102)+x3103)>x3104);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x3109 = 0U;
	int64_t x3112 = -24715039360LL;

    t70 = (((x3109>>x3110)+x3111)>x3112);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x3133 = 1U;
	int64_t x3136 = 2033372854LL;
	static int32_t t71 = 1740;

    t71 = (((x3133>>x3134)+x3135)>x3136);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x3149 = UINT32_MAX;
	int16_t x3150 = 22;
	static volatile int32_t t72 = -1;

    t72 = (((x3149>>x3150)+x3151)>x3152);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x3157 = 1355482U;
	uint64_t x3159 = UINT64_MAX;
	static int32_t t73 = 79;

    t73 = (((x3157>>x3158)+x3159)>x3160);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x3161 = 17218238638252LLU;
	uint8_t x3162 = 3U;
	uint32_t x3163 = 40935U;
	int32_t x3164 = -189;
	int32_t t74 = 5103;

    t74 = (((x3161>>x3162)+x3163)>x3164);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x3481 = 0U;
	int8_t x3482 = 7;
	static int32_t t75 = 9;

    t75 = (((x3481>>x3482)+x3483)>x3484);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x3493 = UINT8_MAX;
	uint8_t x3494 = 30U;
	int64_t x3495 = INT64_MIN;
	uint32_t x3496 = 551651U;
	int32_t t76 = 31;

    t76 = (((x3493>>x3494)+x3495)>x3496);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x3505 = INT16_MAX;
	volatile int8_t x3506 = 26;
	int64_t x3507 = INT64_MIN;
	volatile int16_t x3508 = INT16_MAX;
	static int32_t t77 = 11;

    t77 = (((x3505>>x3506)+x3507)>x3508);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x3513 = INT32_MAX;
	static uint16_t x3514 = 11U;
	int32_t x3515 = INT32_MIN;
	int32_t t78 = -547349444;

    t78 = (((x3513>>x3514)+x3515)>x3516);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x3641 = 81U;
	int8_t x3642 = 9;
	int8_t x3643 = INT8_MIN;
	volatile uint16_t x3644 = 301U;
	volatile int32_t t79 = 30580;

    t79 = (((x3641>>x3642)+x3643)>x3644);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x3741 = 11798869LLU;
	static uint8_t x3742 = 6U;
	int32_t x3743 = INT32_MIN;
	uint8_t x3744 = 10U;
	volatile int32_t t80 = -1158380;

    t80 = (((x3741>>x3742)+x3743)>x3744);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x3781 = UINT64_MAX;
	uint32_t x3782 = 43U;
	static int32_t x3783 = -928;
	volatile int8_t x3784 = INT8_MIN;
	static volatile int32_t t81 = -37226;

    t81 = (((x3781>>x3782)+x3783)>x3784);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x3821 = 5187U;
	uint8_t x3822 = 12U;
	static uint8_t x3823 = 1U;
	volatile int32_t x3824 = INT32_MAX;
	volatile int32_t t82 = -4;

    t82 = (((x3821>>x3822)+x3823)>x3824);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x3861 = INT32_MAX;
	static int8_t x3862 = 1;
	uint32_t x3863 = UINT32_MAX;
	int16_t x3864 = -2150;

    t83 = (((x3861>>x3862)+x3863)>x3864);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x3893 = UINT64_MAX;
	uint16_t x3894 = 0U;
	volatile int16_t x3895 = -1;
	volatile int16_t x3896 = INT16_MIN;
	int32_t t84 = -2684011;

    t84 = (((x3893>>x3894)+x3895)>x3896);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x3905 = 35U;
	static uint16_t x3908 = UINT16_MAX;
	int32_t t85 = 9;

    t85 = (((x3905>>x3906)+x3907)>x3908);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x3917 = INT16_MAX;
	uint16_t x3918 = 2U;
	volatile int64_t x3919 = INT64_MIN;
	volatile int32_t x3920 = INT32_MIN;
	int32_t t86 = 427;

    t86 = (((x3917>>x3918)+x3919)>x3920);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x4053 = 6U;
	uint32_t x4054 = 3U;
	volatile uint64_t x4055 = 1395933907477462LLU;
	int16_t x4056 = 62;
	volatile int32_t t87 = 0;

    t87 = (((x4053>>x4054)+x4055)>x4056);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x4157 = 6U;
	int8_t x4158 = 1;
	int64_t x4159 = -58425276LL;
	volatile uint32_t x4160 = 8917189U;
	volatile int32_t t88 = 16476687;

    t88 = (((x4157>>x4158)+x4159)>x4160);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x4177 = 6U;
	int8_t x4178 = 1;
	int8_t x4179 = 2;
	static volatile int32_t t89 = -4188192;

    t89 = (((x4177>>x4178)+x4179)>x4180);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x4186 = 12U;
	uint8_t x4188 = 19U;

    t90 = (((x4185>>x4186)+x4187)>x4188);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x4198 = 7U;
	static int32_t x4199 = INT32_MIN;
	int32_t x4200 = INT32_MIN;

    t91 = (((x4197>>x4198)+x4199)>x4200);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x4249 = 4051395309433753358LLU;
	uint32_t x4250 = 14U;
	uint32_t x4251 = 395517934U;
	static int32_t x4252 = -1;

    t92 = (((x4249>>x4250)+x4251)>x4252);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x4277 = 1;
	uint8_t x4278 = 10U;
	int32_t x4279 = -31289002;
	static int32_t x4280 = INT32_MIN;
	int32_t t93 = -186;

    t93 = (((x4277>>x4278)+x4279)>x4280);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x4281 = INT32_MAX;
	int16_t x4282 = 6;
	uint64_t x4284 = 59131LLU;

    t94 = (((x4281>>x4282)+x4283)>x4284);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x4317 = 436696LLU;
	int64_t x4318 = 1LL;
	int32_t x4319 = INT32_MAX;
	int16_t x4320 = -84;
	volatile int32_t t95 = -1331;

    t95 = (((x4317>>x4318)+x4319)>x4320);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x4365 = UINT8_MAX;
	static uint8_t x4366 = 0U;
	volatile int32_t t96 = 1;

    t96 = (((x4365>>x4366)+x4367)>x4368);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x4453 = 1812160686U;
	int8_t x4454 = 22;
	int16_t x4456 = -13;

    t97 = (((x4453>>x4454)+x4455)>x4456);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x4469 = UINT8_MAX;
	uint8_t x4470 = 2U;
	int32_t x4471 = INT32_MIN;
	uint32_t x4472 = 497U;
	int32_t t98 = 0;

    t98 = (((x4469>>x4470)+x4471)>x4472);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x4513 = 0;
	int16_t x4514 = 0;
	int64_t x4515 = INT64_MIN;
	static uint32_t x4516 = UINT32_MAX;
	volatile int32_t t99 = -1;

    t99 = (((x4513>>x4514)+x4515)>x4516);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x4525 = 2061;
	uint8_t x4526 = 3U;
	static uint8_t x4527 = 2U;
	uint32_t x4528 = 38403598U;
	int32_t t100 = -11576;

    t100 = (((x4525>>x4526)+x4527)>x4528);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x4557 = 467U;
	uint32_t x4559 = 6U;
	volatile uint8_t x4560 = 23U;
	int32_t t101 = 46;

    t101 = (((x4557>>x4558)+x4559)>x4560);

    if (t101 != 0) { NG(); } else { ; }
	
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


    return 0;
}


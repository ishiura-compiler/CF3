
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

static uint32_t x9 = 7U;
uint8_t x11 = 7U;
int16_t x49 = INT16_MAX;
volatile uint64_t x70 = UINT64_MAX;
volatile uint16_t x112 = 3U;
uint8_t x314 = 15U;
int8_t x397 = 58;
int8_t x458 = 63;
volatile int32_t x642 = INT32_MAX;
int8_t x643 = INT8_MIN;
int32_t x886 = 54996697;
uint64_t x965 = 59838LLU;
static int8_t x1022 = 0;
uint64_t x1023 = UINT64_MAX;
uint16_t x1024 = 2U;
int16_t x1061 = INT16_MIN;
static volatile uint64_t t15 = 1766LLU;
uint32_t x1309 = 1008714208U;
static uint16_t x1337 = 88U;
volatile uint32_t t17 = 391481U;
volatile uint32_t x1357 = UINT32_MAX;
uint32_t x1415 = 608997U;
volatile uint16_t x1424 = 1U;
static uint64_t t22 = 280663103LLU;
uint8_t x1433 = 11U;
volatile int64_t x1472 = 0LL;
uint8_t x1556 = 3U;
int64_t x1607 = INT64_MIN;
uint8_t x1608 = 0U;
uint32_t x1645 = 270U;
int32_t x1646 = INT32_MIN;
volatile uint64_t x1647 = 398148780543566LLU;
int64_t x1738 = 187854474616094LL;
static volatile uint64_t x1739 = 639255LLU;
int16_t x1794 = -1;
uint64_t x1795 = 1431481LLU;
int8_t x1893 = -1;
int8_t x1958 = INT8_MIN;
volatile int32_t t33 = -6029198;
int8_t x1968 = 0;
volatile uint32_t x1972 = 10U;
uint16_t x2181 = 0U;
volatile uint16_t x2184 = 3U;
int16_t x2205 = INT16_MAX;
volatile uint16_t x2206 = 7329U;
uint8_t x2208 = 1U;
uint64_t x2226 = UINT64_MAX;
static uint64_t t40 = 22LLU;
static uint8_t x2286 = 21U;
volatile uint64_t t44 = 121082458LLU;
int16_t x2491 = -1;
static int8_t x2494 = -1;
static uint64_t x2495 = 4LLU;
static volatile uint64_t t47 = 3LLU;
uint16_t x2617 = 3U;
uint16_t x2620 = 1U;
uint64_t x2709 = 3LLU;
static uint8_t x2712 = 13U;
static volatile uint8_t x2742 = 49U;
volatile uint8_t x2744 = 15U;
int8_t x2842 = INT8_MIN;
volatile uint64_t t55 = 186619508LLU;
int16_t x3080 = 1;
uint32_t x3106 = 201048U;
int32_t x3107 = INT32_MAX;
static uint8_t x3108 = 0U;
volatile uint32_t t61 = 6447U;
int32_t x3338 = 1;
uint32_t x3369 = UINT32_MAX;
volatile uint64_t t65 = 15500833LLU;
uint32_t x3434 = UINT32_MAX;
static uint32_t x3456 = 0U;
volatile uint64_t t67 = 225116LLU;
static uint64_t t68 = 632595LLU;
uint8_t x3597 = UINT8_MAX;
static uint64_t t72 = 3019742728LLU;
volatile uint32_t x3799 = UINT32_MAX;
uint32_t t73 = 1344576252U;
uint32_t x3900 = 6U;
static uint8_t x3943 = 26U;
uint16_t x3979 = 0U;
volatile uint64_t t76 = 165367608171LLU;
int8_t x3989 = 0;
static uint32_t x3991 = 9U;
volatile uint32_t t77 = 21791U;
uint8_t x4000 = 1U;
volatile uint64_t x4070 = UINT64_MAX;
uint16_t x4071 = 4009U;
static int8_t x4102 = INT8_MAX;
uint32_t x4103 = 6U;
uint32_t t80 = 2U;
static uint8_t x4188 = 9U;
static volatile uint64_t t82 = 1267184216209978LLU;
int16_t x4413 = 277;
static int8_t x4416 = 13;
int32_t x4465 = -1;
int64_t x4466 = INT64_MAX;
uint64_t x4467 = UINT64_MAX;
uint16_t x4520 = 4U;
static int8_t x4642 = -1;
static int16_t x4665 = INT16_MIN;
int64_t x4771 = INT64_MAX;
volatile int64_t x4779 = 56953735559583LL;
volatile uint64_t x4780 = 1LLU;
int32_t x4838 = -22;
int8_t x4839 = INT8_MIN;
uint64_t t93 = 46585177774LLU;
static uint64_t x4894 = 37LLU;
volatile uint16_t x4895 = UINT16_MAX;
volatile uint64_t t95 = 5026188LLU;
volatile int8_t x5013 = INT8_MIN;
volatile int64_t x5014 = -1LL;
int8_t x5020 = 0;
int32_t x5094 = 14214375;
static int32_t x5165 = 5307;
int8_t x5168 = 0;
volatile int8_t x5200 = 7;
volatile uint64_t t103 = 5615696524006LLU;
volatile uint8_t x5240 = 0U;
volatile uint64_t x5362 = 10288961737172570LLU;
int8_t x5560 = 1;
int32_t x5665 = -1;
uint32_t x5764 = 0U;
int64_t x6045 = -48LL;
int16_t x6046 = -1;
static volatile int64_t t114 = 8875724790724186LL;
volatile int64_t t115 = -193058LL;
uint8_t x6099 = 114U;
volatile uint64_t x6122 = 148231164350244LLU;
int64_t x6177 = 964721LL;
int16_t x6249 = INT16_MIN;
uint64_t x6341 = UINT64_MAX;
static uint8_t x6344 = 11U;
uint16_t x6451 = UINT16_MAX;
static volatile int32_t t127 = -4868753;
uint64_t x6546 = UINT64_MAX;
int16_t x6547 = INT16_MIN;
int8_t x6786 = 3;
uint8_t x6788 = 0U;
int16_t x7169 = INT16_MIN;
volatile int32_t t133 = -1650724;
static int64_t x7266 = INT64_MAX;
static volatile uint64_t t134 = 1726583172761LLU;
volatile int64_t x7298 = -1LL;
int64_t t136 = -28LL;
uint32_t t139 = 65U;
int8_t x7600 = 0;
uint64_t x7661 = 852LLU;
int16_t x7668 = 0;
static uint64_t t144 = 3288LLU;
static int8_t x7680 = 0;
static uint64_t t147 = 204520993711LLU;
uint32_t x7926 = 0U;
static uint32_t x8013 = 4U;
uint16_t x8016 = 25U;
static volatile int64_t t150 = 12LL;
int16_t x8068 = 0;
volatile uint64_t t151 = 7054559LLU;
int64_t x8178 = 2684665352LL;
uint64_t t154 = 1293633807632LLU;
uint32_t t155 = 359591102U;
volatile uint32_t x8245 = UINT32_MAX;
int8_t x8247 = INT8_MIN;
int32_t x8297 = INT32_MIN;
volatile int64_t x8323 = -4794368LL;
int16_t x8429 = -1;
int8_t x8432 = 1;
int32_t t159 = -9306;
volatile int64_t x8483 = 3596471268983LL;
static uint8_t x8484 = 18U;
int8_t x8552 = 8;
int8_t x8677 = 6;
uint8_t x8678 = UINT8_MAX;
static uint32_t t162 = 404U;
int32_t x8713 = 2296003;
uint16_t x8744 = 1U;
volatile int8_t x8767 = INT8_MAX;
uint32_t t166 = 331U;
volatile uint64_t x8834 = 170733763364468508LLU;
static uint64_t t168 = 952600548266688937LLU;
volatile uint32_t x8999 = 241U;
static volatile int8_t x9108 = 1;
uint16_t x9146 = 11U;
int8_t x9148 = 1;
volatile int8_t x9170 = INT8_MAX;
uint16_t x9172 = 28U;
static int64_t t175 = -14LL;
uint32_t x9202 = 43U;
volatile uint16_t x9203 = 1892U;
int32_t x9358 = INT32_MAX;
static int64_t x9421 = -19122LL;
static int8_t x9424 = 3;
uint16_t x9450 = UINT16_MAX;
int32_t x9451 = 587138179;
int16_t x9554 = -27;
uint8_t x9556 = 33U;
volatile int32_t t184 = 284324;
volatile uint64_t t185 = 194LLU;
int16_t x9657 = INT16_MIN;
static uint32_t x9664 = 1U;
uint32_t x9681 = 766076083U;
int32_t x9683 = INT32_MIN;
int8_t x9846 = 0;
volatile int32_t t191 = 0;
int8_t x9920 = 5;
uint8_t x9971 = 4U;
uint32_t x9999 = UINT32_MAX;
int8_t x10217 = 4;
volatile int16_t x10220 = 0;
int64_t x10233 = 10466695854300427LL;
static uint64_t t199 = 87LLU;


void f0(void) {
    	uint32_t x10 = UINT32_MAX;
	static uint32_t x12 = 14U;
	static volatile uint32_t t0 = 77701872U;

    t0 = (((x9+x10)+x11)<<x12);

    if (t0 != 212992U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x50 = INT32_MIN;
	static int32_t x51 = INT32_MAX;
	volatile uint8_t x52 = 3U;
	int32_t t1 = 224956;

    t1 = (((x49+x50)+x51)<<x52);

    if (t1 != 262128) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x69 = 2U;
	int16_t x71 = INT16_MIN;
	volatile int8_t x72 = 1;
	volatile uint64_t t2 = 63285875214LLU;

    t2 = (((x69+x70)+x71)<<x72);

    if (t2 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x109 = 381LLU;
	static int32_t x110 = 534239756;
	volatile int32_t x111 = INT32_MIN;
	volatile uint64_t t3 = 413042472LLU;

    t3 = (((x109+x110)+x111)<<x112);

    if (t3 != 18446744060803603528LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x257 = INT8_MIN;
	uint32_t x258 = 6709U;
	uint16_t x259 = 89U;
	static uint16_t x260 = 1U;
	uint32_t t4 = 441946393U;

    t4 = (((x257+x258)+x259)<<x260);

    if (t4 != 13340U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x313 = 89U;
	static uint64_t x315 = 492LLU;
	int16_t x316 = 0;
	uint64_t t5 = 55790LLU;

    t5 = (((x313+x314)+x315)<<x316);

    if (t5 != 596LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x398 = -1;
	volatile int32_t x399 = -1;
	uint8_t x400 = 6U;
	int32_t t6 = 454;

    t6 = (((x397+x398)+x399)<<x400);

    if (t6 != 3584) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x457 = -1LL;
	int32_t x459 = -1;
	static uint8_t x460 = 14U;
	int64_t t7 = 61026LL;

    t7 = (((x457+x458)+x459)<<x460);

    if (t7 != 999424LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x505 = 20384004957LL;
	static uint8_t x506 = 1U;
	int16_t x507 = 1735;
	uint8_t x508 = 0U;
	int64_t t8 = -13LL;

    t8 = (((x505+x506)+x507)<<x508);

    if (t8 != 20384006693LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x641 = 54764238U;
	uint8_t x644 = 1U;
	volatile uint32_t t9 = 1929986208U;

    t9 = (((x641+x642)+x643)<<x644);

    if (t9 != 109528218U) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x885 = INT64_MIN;
	volatile uint64_t x887 = 1916LLU;
	uint8_t x888 = 35U;
	volatile uint64_t t10 = 66LLU;

    t10 = (((x885+x886)+x887)<<x888);

    if (t10 != 1889737953282883584LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x966 = UINT64_MAX;
	uint32_t x967 = 38432856U;
	uint16_t x968 = 57U;
	uint64_t t11 = 44635104316864LLU;

    t11 = (((x965+x966)+x967)<<x968);

    if (t11 != 3026418949592973312LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x977 = 247772012884220LLU;
	uint32_t x978 = UINT32_MAX;
	static int32_t x979 = INT32_MIN;
	static int32_t x980 = 1;
	uint64_t t12 = 22165156616577577LLU;

    t12 = (((x977+x978)+x979)<<x980);

    if (t12 != 495548320735734LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x1021 = UINT64_MAX;
	static volatile uint64_t t13 = 46172194331LLU;

    t13 = (((x1021+x1022)+x1023)<<x1024);

    if (t13 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x1029 = UINT8_MAX;
	uint64_t x1030 = 137006912447018LLU;
	int32_t x1031 = -1;
	static int32_t x1032 = 1;
	uint64_t t14 = 18938507823066LLU;

    t14 = (((x1029+x1030)+x1031)<<x1032);

    if (t14 != 274013824894544LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1062 = 14;
	static uint64_t x1063 = UINT64_MAX;
	uint16_t x1064 = 12U;

    t15 = (((x1061+x1062)+x1063)<<x1064);

    if (t15 != 18446744073575387136LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x1310 = -1;
	volatile int32_t x1311 = 48667597;
	int16_t x1312 = 0;
	volatile uint32_t t16 = 1U;

    t16 = (((x1309+x1310)+x1311)<<x1312);

    if (t16 != 1057381804U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x1338 = 118U;
	uint32_t x1339 = 62210799U;
	static uint64_t x1340 = 2LLU;

    t17 = (((x1337+x1338)+x1339)<<x1340);

    if (t17 != 248844020U) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x1358 = INT64_MIN;
	volatile uint64_t x1359 = 3910988LLU;
	volatile uint16_t x1360 = 23U;
	uint64_t t18 = 4LLU;

    t18 = (((x1357+x1358)+x1359)<<x1360);

    if (t18 != 36061604755800064LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x1365 = -1;
	volatile uint16_t x1366 = UINT16_MAX;
	int64_t x1367 = 2995853LL;
	int16_t x1368 = 6;
	static int64_t t19 = 40LL;

    t19 = (((x1365+x1366)+x1367)<<x1368);

    if (t19 != 195928768LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x1369 = INT8_MIN;
	int16_t x1370 = INT16_MIN;
	uint32_t x1371 = UINT32_MAX;
	int16_t x1372 = 1;
	volatile uint32_t t20 = 86167828U;

    t20 = (((x1369+x1370)+x1371)<<x1372);

    if (t20 != 4294901502U) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x1413 = -1;
	int16_t x1414 = -1;
	int64_t x1416 = 0LL;
	uint32_t t21 = 16282008U;

    t21 = (((x1413+x1414)+x1415)<<x1416);

    if (t21 != 608995U) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x1421 = -1;
	uint64_t x1422 = 0LLU;
	int64_t x1423 = INT64_MIN;

    t22 = (((x1421+x1422)+x1423)<<x1424);

    if (t22 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x1434 = 940LLU;
	int8_t x1435 = 0;
	volatile int8_t x1436 = 48;
	uint64_t t23 = 7180080337634LLU;

    t23 = (((x1433+x1434)+x1435)<<x1436);

    if (t23 != 267682702851833856LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x1469 = UINT64_MAX;
	int64_t x1470 = INT64_MIN;
	static volatile int32_t x1471 = -37;
	volatile uint64_t t24 = 78607095010692909LLU;

    t24 = (((x1469+x1470)+x1471)<<x1472);

    if (t24 != 9223372036854775770LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x1553 = UINT32_MAX;
	int16_t x1554 = INT16_MIN;
	int32_t x1555 = -1;
	uint32_t t25 = 3U;

    t25 = (((x1553+x1554)+x1555)<<x1556);

    if (t25 != 4294705136U) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x1605 = -127142526LL;
	uint64_t x1606 = 4068743549687108LLU;
	volatile uint64_t t26 = 90851LLU;

    t26 = (((x1605+x1606)+x1607)<<x1608);

    if (t26 != 9227440780277320390LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x1648 = 0;
	static volatile uint64_t t27 = 571LLU;

    t27 = (((x1645+x1646)+x1647)<<x1648);

    if (t27 != 398150928027484LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x1673 = 24513923188352603LLU;
	int8_t x1674 = -1;
	int16_t x1675 = INT16_MAX;
	int16_t x1676 = 0;
	uint64_t t28 = 93178175934805LLU;

    t28 = (((x1673+x1674)+x1675)<<x1676);

    if (t28 != 24513923188385369LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x1717 = -1;
	int8_t x1718 = -2;
	volatile int8_t x1719 = INT8_MAX;
	volatile uint8_t x1720 = 1U;
	volatile int32_t t29 = 1;

    t29 = (((x1717+x1718)+x1719)<<x1720);

    if (t29 != 248) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1737 = INT8_MIN;
	volatile uint8_t x1740 = 58U;
	volatile uint64_t t30 = 2365412LLU;

    t30 = (((x1737+x1738)+x1739)<<x1740);

    if (t30 != 15276209936040722432LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x1793 = INT8_MAX;
	int8_t x1796 = 33;
	volatile uint64_t t31 = 109262567061LLU;

    t31 = (((x1793+x1794)+x1795)<<x1796);

    if (t31 != 12297410491449344LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x1894 = INT8_MIN;
	uint32_t x1895 = 301321U;
	static uint8_t x1896 = 0U;
	uint32_t t32 = 61596963U;

    t32 = (((x1893+x1894)+x1895)<<x1896);

    if (t32 != 301192U) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x1957 = INT16_MAX;
	int16_t x1959 = -1;
	uint16_t x1960 = 13U;

    t33 = (((x1957+x1958)+x1959)<<x1960);

    if (t33 != 267370496) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x1965 = INT16_MIN;
	int32_t x1966 = -1;
	uint32_t x1967 = 2647904U;
	uint32_t t34 = 240U;

    t34 = (((x1965+x1966)+x1967)<<x1968);

    if (t34 != 2615135U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x1969 = 5189LL;
	uint32_t x1970 = UINT32_MAX;
	volatile uint16_t x1971 = 1U;
	static int64_t t35 = 43534794263300LL;

    t35 = (((x1969+x1970)+x1971)<<x1972);

    if (t35 != 4398051824640LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x2129 = 303U;
	int8_t x2130 = INT8_MIN;
	volatile int32_t x2131 = 37573080;
	uint16_t x2132 = 9U;
	static uint32_t t36 = 40144U;

    t36 = (((x2129+x2130)+x2131)<<x2132);

    if (t36 != 2057637376U) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x2161 = UINT64_MAX;
	static int32_t x2162 = INT32_MIN;
	static int16_t x2163 = 293;
	volatile uint16_t x2164 = 0U;
	volatile uint64_t t37 = 1LLU;

    t37 = (((x2161+x2162)+x2163)<<x2164);

    if (t37 != 18446744071562068260LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x2182 = -1;
	static int64_t x2183 = 808464264366106854LL;
	int64_t t38 = 11258388781LL;

    t38 = (((x2181+x2182)+x2183)<<x2184);

    if (t38 != 6467714114928854824LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x2207 = INT16_MIN;
	int32_t t39 = -507936;

    t39 = (((x2205+x2206)+x2207)<<x2208);

    if (t39 != 14656) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x2225 = 107521242855641LL;
	int8_t x2227 = INT8_MIN;
	uint8_t x2228 = 48U;

    t40 = (((x2225+x2226)+x2227)<<x2228);

    if (t40 != 8671681082501890048LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x2245 = 0;
	static uint16_t x2246 = 25190U;
	uint64_t x2247 = 930038139LLU;
	uint8_t x2248 = 45U;
	static volatile uint64_t t41 = 7833957LLU;

    t41 = (((x2245+x2246)+x2247)<<x2248);

    if (t41 != 17616991026738626560LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x2253 = 534078878268LLU;
	static int16_t x2254 = INT16_MAX;
	volatile uint16_t x2255 = UINT16_MAX;
	int8_t x2256 = 29;
	uint64_t t42 = 12123229LLU;

    t42 = (((x2253+x2254)+x2255)<<x2256);

    if (t42 != 10030306125519257600LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x2285 = 0U;
	uint64_t x2287 = 14829LLU;
	uint16_t x2288 = 13U;
	uint64_t t43 = 44170096426219445LLU;

    t43 = (((x2285+x2286)+x2287)<<x2288);

    if (t43 != 121651200LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x2349 = UINT16_MAX;
	uint16_t x2350 = 11197U;
	uint64_t x2351 = UINT64_MAX;
	uint8_t x2352 = 5U;

    t44 = (((x2349+x2350)+x2351)<<x2352);

    if (t44 != 2455392LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x2357 = 2929583606LLU;
	static int32_t x2358 = INT32_MAX;
	volatile uint32_t x2359 = 53119U;
	static volatile uint8_t x2360 = 1U;
	uint64_t t45 = 331LLU;

    t45 = (((x2357+x2358)+x2359)<<x2360);

    if (t45 != 10154240744LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x2489 = 5388U;
	static uint8_t x2490 = UINT8_MAX;
	uint16_t x2492 = 2U;
	int32_t t46 = 652982;

    t46 = (((x2489+x2490)+x2491)<<x2492);

    if (t46 != 22568) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x2493 = 0U;
	uint8_t x2496 = 51U;

    t47 = (((x2493+x2494)+x2495)<<x2496);

    if (t47 != 6755399441055744LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x2505 = 0;
	uint16_t x2506 = UINT16_MAX;
	uint64_t x2507 = 27809949773369272LLU;
	volatile uint16_t x2508 = 10U;
	uint64_t t48 = 26418145LLU;

    t48 = (((x2505+x2506)+x2507)<<x2508);

    if (t48 != 10030644494287690752LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x2618 = 3857U;
	int16_t x2619 = INT16_MIN;
	volatile uint32_t t49 = 0U;

    t49 = (((x2617+x2618)+x2619)<<x2620);

    if (t49 != 4294909480U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x2710 = INT8_MIN;
	uint16_t x2711 = 585U;
	volatile uint64_t t50 = 28513595459LLU;

    t50 = (((x2709+x2710)+x2711)<<x2712);

    if (t50 != 3768320LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x2717 = 65062812;
	volatile int32_t x2718 = -1;
	static uint8_t x2719 = 40U;
	uint8_t x2720 = 1U;
	volatile int32_t t51 = 68403247;

    t51 = (((x2717+x2718)+x2719)<<x2720);

    if (t51 != 130125702) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x2741 = 123832622502LL;
	static int16_t x2743 = -1;
	int64_t t52 = 12238LL;

    t52 = (((x2741+x2742)+x2743)<<x2744);

    if (t52 != 4057747375718400LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x2841 = INT16_MIN;
	uint64_t x2843 = 1LLU;
	volatile int8_t x2844 = 0;
	static uint64_t t53 = 27805432LLU;

    t53 = (((x2841+x2842)+x2843)<<x2844);

    if (t53 != 18446744073709518721LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x2933 = -1;
	uint8_t x2934 = 83U;
	volatile uint32_t x2935 = 112U;
	static uint32_t x2936 = 6U;
	uint32_t t54 = 38410301U;

    t54 = (((x2933+x2934)+x2935)<<x2936);

    if (t54 != 12416U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x2941 = 2U;
	uint64_t x2942 = 20907847074965577LLU;
	static int32_t x2943 = -95;
	volatile uint8_t x2944 = 7U;

    t55 = (((x2941+x2942)+x2943)<<x2944);

    if (t55 != 2676204425595581952LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x3057 = 15;
	static volatile uint16_t x3058 = 15U;
	volatile uint64_t x3059 = UINT64_MAX;
	uint8_t x3060 = 37U;
	uint64_t t56 = 118718LLU;

    t56 = (((x3057+x3058)+x3059)<<x3060);

    if (t56 != 3985729650688LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x3077 = INT16_MAX;
	int32_t x3078 = -1;
	int8_t x3079 = INT8_MIN;
	static volatile int32_t t57 = 137923;

    t57 = (((x3077+x3078)+x3079)<<x3080);

    if (t57 != 65276) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x3089 = 3416938908813881951LLU;
	int32_t x3090 = -1;
	int8_t x3091 = 3;
	uint8_t x3092 = 3U;
	volatile uint64_t t58 = 1584LLU;

    t58 = (((x3089+x3090)+x3091)<<x3092);

    if (t58 != 8888767196801504008LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x3105 = -14995;
	volatile uint32_t t59 = 61853U;

    t59 = (((x3105+x3106)+x3107)<<x3108);

    if (t59 != 2147669700U) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x3193 = INT32_MAX;
	uint64_t x3194 = 1015304984713480LLU;
	int8_t x3195 = INT8_MIN;
	volatile int32_t x3196 = 0;
	uint64_t t60 = 13276222395847LLU;

    t60 = (((x3193+x3194)+x3195)<<x3196);

    if (t60 != 1015307132196999LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x3241 = INT32_MIN;
	int8_t x3242 = INT8_MAX;
	uint32_t x3243 = UINT32_MAX;
	uint8_t x3244 = 1U;

    t61 = (((x3241+x3242)+x3243)<<x3244);

    if (t61 != 252U) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x3281 = -1;
	int32_t x3282 = -1;
	uint32_t x3283 = 66360567U;
	volatile uint8_t x3284 = 2U;
	volatile uint32_t t62 = 232U;

    t62 = (((x3281+x3282)+x3283)<<x3284);

    if (t62 != 265442260U) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x3285 = 3LL;
	static int16_t x3286 = 6;
	uint32_t x3287 = UINT32_MAX;
	static volatile uint16_t x3288 = 30U;
	int64_t t63 = -1834873638952805LL;

    t63 = (((x3285+x3286)+x3287)<<x3288);

    if (t63 != 4611686027017322496LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x3337 = 333U;
	uint64_t x3339 = UINT64_MAX;
	volatile int8_t x3340 = 1;
	volatile uint64_t t64 = 20524364823LLU;

    t64 = (((x3337+x3338)+x3339)<<x3340);

    if (t64 != 666LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x3370 = -857053759671LL;
	static uint64_t x3371 = 16297LLU;
	uint8_t x3372 = 0U;

    t65 = (((x3369+x3370)+x3371)<<x3372);

    if (t65 != 18446743220950775537LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x3433 = 73U;
	int16_t x3435 = -12276;
	int16_t x3436 = 0;
	uint32_t t66 = 26745U;

    t66 = (((x3433+x3434)+x3435)<<x3436);

    if (t66 != 4294955092U) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x3453 = -1;
	int16_t x3454 = INT16_MIN;
	uint64_t x3455 = 105LLU;

    t67 = (((x3453+x3454)+x3455)<<x3456);

    if (t67 != 18446744073709518952LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint32_t x3465 = 148970357U;
	volatile uint64_t x3466 = 500215406997118LLU;
	int64_t x3467 = INT64_MAX;
	volatile uint16_t x3468 = 0U;

    t68 = (((x3465+x3466)+x3467)<<x3468);

    if (t68 != 9223872252410743282LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x3473 = -1;
	uint64_t x3474 = 2LLU;
	int16_t x3475 = INT16_MIN;
	int8_t x3476 = 1;
	uint64_t t69 = 1LLU;

    t69 = (((x3473+x3474)+x3475)<<x3476);

    if (t69 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x3598 = 175U;
	uint32_t x3599 = 155242U;
	static int8_t x3600 = 28;
	static volatile uint32_t t70 = 177997U;

    t70 = (((x3597+x3598)+x3599)<<x3600);

    if (t70 != 2147483648U) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x3693 = INT16_MIN;
	static int16_t x3694 = INT16_MIN;
	uint64_t x3695 = UINT64_MAX;
	uint16_t x3696 = 7U;
	volatile uint64_t t71 = 33268476LLU;

    t71 = (((x3693+x3694)+x3695)<<x3696);

    if (t71 != 18446744073701162880LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x3769 = 191698795LLU;
	int8_t x3770 = -1;
	int64_t x3771 = -135903321972458117LL;
	static uint32_t x3772 = 25U;

    t72 = (((x3769+x3770)+x3771)<<x3772);

    if (t72 != 5492962909514366976LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x3797 = -2;
	int16_t x3798 = INT16_MAX;
	uint16_t x3800 = 3U;

    t73 = (((x3797+x3798)+x3799)<<x3800);

    if (t73 != 262112U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x3897 = UINT8_MAX;
	uint32_t x3898 = UINT32_MAX;
	uint32_t x3899 = 222U;
	volatile uint32_t t74 = 2038904329U;

    t74 = (((x3897+x3898)+x3899)<<x3900);

    if (t74 != 30464U) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x3941 = INT8_MAX;
	static volatile int32_t x3942 = -1;
	int16_t x3944 = 4;
	static volatile int32_t t75 = -4101654;

    t75 = (((x3941+x3942)+x3943)<<x3944);

    if (t75 != 2432) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x3977 = 16543029;
	static uint64_t x3978 = UINT64_MAX;
	int8_t x3980 = 4;

    t76 = (((x3977+x3978)+x3979)<<x3980);

    if (t76 != 264688448LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x3990 = -30516;
	volatile uint32_t x3992 = 23U;

    t77 = (((x3989+x3990)+x3991)<<x3992);

    if (t77 != 1786773504U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x3997 = 2723837U;
	static uint64_t x3998 = 29LLU;
	volatile uint16_t x3999 = 1U;
	static volatile uint64_t t78 = 116641384561395760LLU;

    t78 = (((x3997+x3998)+x3999)<<x4000);

    if (t78 != 5447734LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x4069 = INT8_MAX;
	uint8_t x4072 = 0U;
	uint64_t t79 = 195131958714LLU;

    t79 = (((x4069+x4070)+x4071)<<x4072);

    if (t79 != 4135LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x4101 = INT8_MIN;
	uint8_t x4104 = 3U;

    t80 = (((x4101+x4102)+x4103)<<x4104);

    if (t80 != 40U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x4185 = UINT16_MAX;
	int32_t x4186 = 1;
	uint8_t x4187 = 30U;
	int32_t t81 = 1;

    t81 = (((x4185+x4186)+x4187)<<x4188);

    if (t81 != 33569792) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x4385 = INT8_MIN;
	uint64_t x4386 = 2893986LLU;
	static volatile uint64_t x4387 = UINT64_MAX;
	uint8_t x4388 = 1U;

    t82 = (((x4385+x4386)+x4387)<<x4388);

    if (t82 != 5787714LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x4414 = 762495253015273561LL;
	volatile uint64_t x4415 = 3929700935702573LLU;
	static uint64_t t83 = 23034231990LLU;

    t83 = (((x4413+x4414)+x4415)<<x4416);

    if (t83 != 6660237705151209472LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x4468 = 4U;
	volatile uint64_t t84 = 68696579827009820LLU;

    t84 = (((x4465+x4466)+x4467)<<x4468);

    if (t84 != 18446744073709551568LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x4517 = -1;
	uint16_t x4518 = 14U;
	uint8_t x4519 = 10U;
	volatile int32_t t85 = 24364;

    t85 = (((x4517+x4518)+x4519)<<x4520);

    if (t85 != 368) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x4585 = 112U;
	uint8_t x4586 = UINT8_MAX;
	uint8_t x4587 = 1U;
	uint16_t x4588 = 0U;
	static volatile int32_t t86 = -19451031;

    t86 = (((x4585+x4586)+x4587)<<x4588);

    if (t86 != 368) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x4641 = 214;
	uint64_t x4643 = UINT64_MAX;
	static volatile uint16_t x4644 = 0U;
	uint64_t t87 = 2695601413731LLU;

    t87 = (((x4641+x4642)+x4643)<<x4644);

    if (t87 != 212LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x4666 = 0LLU;
	int64_t x4667 = INT64_MAX;
	uint32_t x4668 = 1U;
	uint64_t t88 = 99369011572845LLU;

    t88 = (((x4665+x4666)+x4667)<<x4668);

    if (t88 != 18446744073709486078LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x4757 = INT8_MIN;
	uint32_t x4758 = UINT32_MAX;
	int32_t x4759 = INT32_MIN;
	int16_t x4760 = 1;
	volatile uint32_t t89 = 2724023U;

    t89 = (((x4757+x4758)+x4759)<<x4760);

    if (t89 != 4294967038U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x4769 = 1U;
	uint64_t x4770 = 93635022LLU;
	static uint32_t x4772 = 5U;
	uint64_t t90 = 8453413587467817LLU;

    t90 = (((x4769+x4770)+x4771)<<x4772);

    if (t90 != 2996320704LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x4777 = -214;
	volatile uint8_t x4778 = 3U;
	int64_t t91 = 5910LL;

    t91 = (((x4777+x4778)+x4779)<<x4780);

    if (t91 != 113907471118744LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x4789 = 37687846LL;
	int8_t x4790 = INT8_MIN;
	uint8_t x4791 = UINT8_MAX;
	uint16_t x4792 = 2U;
	volatile int64_t t92 = 2518935534LL;

    t92 = (((x4789+x4790)+x4791)<<x4792);

    if (t92 != 150751892LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x4837 = UINT64_MAX;
	static volatile int8_t x4840 = 0;

    t93 = (((x4837+x4838)+x4839)<<x4840);

    if (t93 != 18446744073709551465LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x4857 = INT64_MIN;
	uint64_t x4858 = 1671LLU;
	uint32_t x4859 = UINT32_MAX;
	uint16_t x4860 = 4U;
	uint64_t t94 = 1018580488030356884LLU;

    t94 = (((x4857+x4858)+x4859)<<x4860);

    if (t94 != 68719503456LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x4893 = INT8_MIN;
	uint8_t x4896 = 10U;

    t95 = (((x4893+x4894)+x4895)<<x4896);

    if (t95 != 67014656LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x4977 = 76U;
	static uint32_t x4978 = UINT32_MAX;
	uint64_t x4979 = UINT64_MAX;
	static uint8_t x4980 = 29U;
	uint64_t t96 = 0LLU;

    t96 = (((x4977+x4978)+x4979)<<x4980);

    if (t96 != 39728447488LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x5015 = 196;
	static volatile uint32_t x5016 = 37U;
	int64_t t97 = -12285LL;

    t97 = (((x5013+x5014)+x5015)<<x5016);

    if (t97 != 9208409882624LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x5017 = UINT8_MAX;
	static int32_t x5018 = INT32_MIN;
	static uint32_t x5019 = 10431U;
	uint32_t t98 = 37746U;

    t98 = (((x5017+x5018)+x5019)<<x5020);

    if (t98 != 2147494334U) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x5057 = 10211;
	static int64_t x5058 = -1867830LL;
	volatile int64_t x5059 = 7253332539724558LL;
	volatile uint8_t x5060 = 0U;
	volatile int64_t t99 = -7876389LL;

    t99 = (((x5057+x5058)+x5059)<<x5060);

    if (t99 != 7253332537866939LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x5093 = INT32_MIN;
	uint32_t x5095 = 21U;
	static uint8_t x5096 = 27U;
	uint32_t t100 = 517903U;

    t100 = (((x5093+x5094)+x5095)<<x5096);

    if (t100 != 3758096384U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x5097 = UINT32_MAX;
	int8_t x5098 = -14;
	int32_t x5099 = 1;
	int8_t x5100 = 31;
	volatile uint32_t t101 = 153U;

    t101 = (((x5097+x5098)+x5099)<<x5100);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x5166 = 1580357U;
	volatile uint8_t x5167 = 16U;
	volatile uint32_t t102 = 389307135U;

    t102 = (((x5165+x5166)+x5167)<<x5168);

    if (t102 != 1585680U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x5197 = -1;
	uint64_t x5198 = 902LLU;
	int64_t x5199 = INT64_MIN;

    t103 = (((x5197+x5198)+x5199)<<x5200);

    if (t103 != 115328LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x5237 = UINT64_MAX;
	uint32_t x5238 = UINT32_MAX;
	volatile int16_t x5239 = INT16_MIN;
	volatile uint64_t t104 = 15009504LLU;

    t104 = (((x5237+x5238)+x5239)<<x5240);

    if (t104 != 4294934526LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x5349 = 43655LLU;
	int32_t x5350 = INT32_MIN;
	static int8_t x5351 = -9;
	uint16_t x5352 = 0U;
	volatile uint64_t t105 = 406654862LLU;

    t105 = (((x5349+x5350)+x5351)<<x5352);

    if (t105 != 18446744071562111614LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x5361 = -1;
	int32_t x5363 = -1;
	volatile int8_t x5364 = 0;
	static uint64_t t106 = 347562612LLU;

    t106 = (((x5361+x5362)+x5363)<<x5364);

    if (t106 != 10288961737172568LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x5433 = -13152;
	uint32_t x5434 = 15906898U;
	int16_t x5435 = INT16_MAX;
	static volatile uint8_t x5436 = 0U;
	uint32_t t107 = 30347874U;

    t107 = (((x5433+x5434)+x5435)<<x5436);

    if (t107 != 15926513U) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x5557 = INT8_MIN;
	int64_t x5558 = 4LL;
	uint64_t x5559 = 43571137797LLU;
	volatile uint64_t t108 = 117LLU;

    t108 = (((x5557+x5558)+x5559)<<x5560);

    if (t108 != 87142275346LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x5621 = 6111U;
	int16_t x5622 = 6450;
	static volatile uint64_t x5623 = 4720LLU;
	static uint8_t x5624 = 8U;
	uint64_t t109 = 39207060144403LLU;

    t109 = (((x5621+x5622)+x5623)<<x5624);

    if (t109 != 4423936LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x5645 = UINT16_MAX;
	uint64_t x5646 = 4310661520054516793LLU;
	int16_t x5647 = 1;
	uint8_t x5648 = 1U;
	volatile uint64_t t110 = 203424451LLU;

    t110 = (((x5645+x5646)+x5647)<<x5648);

    if (t110 != 8621323040109164658LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x5666 = 54151LLU;
	int32_t x5667 = 802637014;
	uint16_t x5668 = 0U;
	uint64_t t111 = 47LLU;

    t111 = (((x5665+x5666)+x5667)<<x5668);

    if (t111 != 802691164LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x5761 = -1;
	int16_t x5762 = INT16_MAX;
	uint32_t x5763 = 37U;
	static uint32_t t112 = 40U;

    t112 = (((x5761+x5762)+x5763)<<x5764);

    if (t112 != 32803U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x5909 = 2;
	volatile uint8_t x5910 = 16U;
	uint64_t x5911 = 8710LLU;
	volatile int16_t x5912 = 1;
	volatile uint64_t t113 = 47938608496863LLU;

    t113 = (((x5909+x5910)+x5911)<<x5912);

    if (t113 != 17456LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x6047 = 121U;
	static int8_t x6048 = 8;

    t114 = (((x6045+x6046)+x6047)<<x6048);

    if (t114 != 18432LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x6089 = 428450LL;
	int32_t x6090 = 67;
	int32_t x6091 = -1;
	int8_t x6092 = 2;

    t115 = (((x6089+x6090)+x6091)<<x6092);

    if (t115 != 1714064LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x6097 = 23;
	int32_t x6098 = 565;
	volatile int8_t x6100 = 4;
	volatile int32_t t116 = -19503;

    t116 = (((x6097+x6098)+x6099)<<x6100);

    if (t116 != 11232) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x6121 = -1;
	int8_t x6123 = -12;
	uint16_t x6124 = 3U;
	volatile uint64_t t117 = 45090829852274099LLU;

    t117 = (((x6121+x6122)+x6123)<<x6124);

    if (t117 != 1185849314801848LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x6178 = 510362353LLU;
	uint8_t x6179 = 1U;
	uint8_t x6180 = 58U;
	static uint64_t t118 = 2LLU;

    t118 = (((x6177+x6178)+x6179)<<x6180);

    if (t118 != 10088063165309911040LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x6233 = -1;
	volatile uint64_t x6234 = UINT64_MAX;
	int64_t x6235 = INT64_MIN;
	int16_t x6236 = 59;
	uint64_t t119 = 217132369972229LLU;

    t119 = (((x6233+x6234)+x6235)<<x6236);

    if (t119 != 17293822569102704640LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x6250 = INT16_MAX;
	volatile uint64_t x6251 = 330LLU;
	int16_t x6252 = 0;
	volatile uint64_t t120 = 42791584109LLU;

    t120 = (((x6249+x6250)+x6251)<<x6252);

    if (t120 != 329LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x6305 = 240U;
	volatile int16_t x6306 = 5;
	uint8_t x6307 = 33U;
	uint8_t x6308 = 1U;
	volatile int32_t t121 = -594224157;

    t121 = (((x6305+x6306)+x6307)<<x6308);

    if (t121 != 556) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x6342 = UINT16_MAX;
	static int32_t x6343 = -1;
	static volatile uint64_t t122 = 3560583035355753LLU;

    t122 = (((x6341+x6342)+x6343)<<x6344);

    if (t122 != 134211584LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x6349 = INT8_MAX;
	int64_t x6350 = 30068372001164977LL;
	int16_t x6351 = 815;
	volatile uint16_t x6352 = 5U;
	volatile int64_t t123 = 20734011984994LL;

    t123 = (((x6349+x6350)+x6351)<<x6352);

    if (t123 != 962187904037309408LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x6389 = INT16_MIN;
	volatile int16_t x6390 = INT16_MIN;
	volatile uint64_t x6391 = 3970701LLU;
	volatile int16_t x6392 = 2;
	volatile uint64_t t124 = 4556820223701LLU;

    t124 = (((x6389+x6390)+x6391)<<x6392);

    if (t124 != 15620660LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x6405 = 309U;
	uint32_t x6406 = UINT32_MAX;
	int8_t x6407 = -1;
	int8_t x6408 = 0;
	static uint32_t t125 = 248U;

    t125 = (((x6405+x6406)+x6407)<<x6408);

    if (t125 != 307U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x6429 = 764921U;
	volatile uint32_t x6430 = 5U;
	int32_t x6431 = -1;
	uint8_t x6432 = 1U;
	uint32_t t126 = 1018937U;

    t126 = (((x6429+x6430)+x6431)<<x6432);

    if (t126 != 1529850U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x6449 = 31U;
	volatile int32_t x6450 = -1;
	int32_t x6452 = 1;

    t127 = (((x6449+x6450)+x6451)<<x6452);

    if (t127 != 131130) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x6545 = -9618;
	uint8_t x6548 = 3U;
	static uint64_t t128 = 291278895912LLU;

    t128 = (((x6545+x6546)+x6547)<<x6548);

    if (t128 != 18446744073709212520LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x6573 = UINT8_MAX;
	uint16_t x6574 = 2042U;
	int8_t x6575 = INT8_MIN;
	uint8_t x6576 = 1U;
	int32_t t129 = 6729;

    t129 = (((x6573+x6574)+x6575)<<x6576);

    if (t129 != 4338) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x6753 = 648U;
	int8_t x6754 = INT8_MIN;
	uint64_t x6755 = 601417875368LLU;
	static uint8_t x6756 = 1U;
	static uint64_t t130 = 185094129788150163LLU;

    t130 = (((x6753+x6754)+x6755)<<x6756);

    if (t130 != 1202835751776LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x6785 = INT8_MIN;
	volatile uint64_t x6787 = UINT64_MAX;
	static uint64_t t131 = 34220405054147LLU;

    t131 = (((x6785+x6786)+x6787)<<x6788);

    if (t131 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x7170 = UINT32_MAX;
	uint16_t x7171 = 161U;
	uint64_t x7172 = 5LLU;
	volatile uint32_t t132 = 13320701U;

    t132 = (((x7169+x7170)+x7171)<<x7172);

    if (t132 != 4293923840U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x7261 = UINT8_MAX;
	int8_t x7262 = INT8_MAX;
	int8_t x7263 = INT8_MIN;
	uint8_t x7264 = 4U;

    t133 = (((x7261+x7262)+x7263)<<x7264);

    if (t133 != 4064) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x7265 = UINT64_MAX;
	int32_t x7267 = -1;
	int32_t x7268 = 2;

    t134 = (((x7265+x7266)+x7267)<<x7268);

    if (t134 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x7297 = 3;
	volatile uint64_t x7299 = 264012023480772929LLU;
	static int16_t x7300 = 1;
	uint64_t t135 = 5209747LLU;

    t135 = (((x7297+x7298)+x7299)<<x7300);

    if (t135 != 528024046961545862LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x7329 = -1;
	int32_t x7330 = -8028;
	volatile int64_t x7331 = 25671505626148LL;
	int16_t x7332 = 1;

    t136 = (((x7329+x7330)+x7331)<<x7332);

    if (t136 != 51343011236238LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x7417 = INT32_MAX;
	uint64_t x7418 = 3252735104655165LLU;
	volatile uint64_t x7419 = 293080229349541LLU;
	int64_t x7420 = 0LL;
	uint64_t t137 = 47994162549216LLU;

    t137 = (((x7417+x7418)+x7419)<<x7420);

    if (t137 != 3545817481488353LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x7421 = -1;
	volatile uint32_t x7422 = UINT32_MAX;
	volatile int16_t x7423 = 9;
	static uint8_t x7424 = 1U;
	volatile uint32_t t138 = 529176216U;

    t138 = (((x7421+x7422)+x7423)<<x7424);

    if (t138 != 14U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x7561 = 1830U;
	uint16_t x7562 = UINT16_MAX;
	int8_t x7563 = INT8_MIN;
	volatile uint16_t x7564 = 15U;

    t139 = (((x7561+x7562)+x7563)<<x7564);

    if (t139 != 2203222016U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x7597 = 632U;
	int8_t x7598 = 5;
	static int32_t x7599 = 25735547;
	volatile uint32_t t140 = 3533U;

    t140 = (((x7597+x7598)+x7599)<<x7600);

    if (t140 != 25736184U) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x7625 = 2U;
	int32_t x7626 = INT32_MIN;
	volatile int32_t x7627 = INT32_MAX;
	uint8_t x7628 = 16U;
	int32_t t141 = 1225;

    t141 = (((x7625+x7626)+x7627)<<x7628);

    if (t141 != 65536) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x7662 = 22402U;
	static int8_t x7663 = -1;
	uint8_t x7664 = 2U;
	static volatile uint64_t t142 = 259329525213LLU;

    t142 = (((x7661+x7662)+x7663)<<x7664);

    if (t142 != 93012LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x7665 = 3548U;
	uint32_t x7666 = UINT32_MAX;
	uint16_t x7667 = 17U;
	uint32_t t143 = 1120U;

    t143 = (((x7665+x7666)+x7667)<<x7668);

    if (t143 != 3564U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x7673 = INT32_MIN;
	int16_t x7674 = 88;
	static uint64_t x7675 = 1650338LLU;
	int32_t x7676 = 40;

    t144 = (((x7673+x7674)+x7675)<<x7676);

    if (t144 != 1814662577783832576LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x7677 = UINT64_MAX;
	int64_t x7678 = 6020166431472LL;
	int64_t x7679 = -53714LL;
	static volatile uint64_t t145 = 5169620186656442942LLU;

    t145 = (((x7677+x7678)+x7679)<<x7680);

    if (t145 != 6020166377757LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x7681 = 29;
	int8_t x7682 = -3;
	int8_t x7683 = -2;
	uint8_t x7684 = 6U;
	volatile int32_t t146 = -982;

    t146 = (((x7681+x7682)+x7683)<<x7684);

    if (t146 != 1536) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x7825 = UINT32_MAX;
	volatile int32_t x7826 = 2193;
	volatile uint64_t x7827 = UINT64_MAX;
	uint8_t x7828 = 15U;

    t147 = (((x7825+x7826)+x7827)<<x7828);

    if (t147 != 71794688LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x7881 = INT16_MIN;
	static int8_t x7882 = 0;
	volatile uint64_t x7883 = 50511LLU;
	uint32_t x7884 = 1U;
	volatile uint64_t t148 = 63376LLU;

    t148 = (((x7881+x7882)+x7883)<<x7884);

    if (t148 != 35486LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x7925 = INT32_MAX;
	uint32_t x7927 = 0U;
	volatile int8_t x7928 = 12;
	uint32_t t149 = 1716856U;

    t149 = (((x7925+x7926)+x7927)<<x7928);

    if (t149 != 4294963200U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x8014 = -1;
	static volatile int64_t x8015 = -1LL;

    t150 = (((x8013+x8014)+x8015)<<x8016);

    if (t150 != 67108864LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x8065 = 2924888847LLU;
	volatile int64_t x8066 = 5697870458713LL;
	int16_t x8067 = -1;

    t151 = (((x8065+x8066)+x8067)<<x8068);

    if (t151 != 5700795347559LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x8089 = -3;
	int32_t x8090 = 279;
	static uint8_t x8091 = 17U;
	static int8_t x8092 = 6;
	volatile int32_t t152 = 9053919;

    t152 = (((x8089+x8090)+x8091)<<x8092);

    if (t152 != 18752) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x8177 = INT8_MAX;
	int8_t x8179 = INT8_MAX;
	int16_t x8180 = 7;
	int64_t t153 = -141828LL;

    t153 = (((x8177+x8178)+x8179)<<x8180);

    if (t153 != 343637197568LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint64_t x8233 = UINT64_MAX;
	int8_t x8234 = INT8_MAX;
	int64_t x8235 = INT64_MIN;
	uint16_t x8236 = 0U;

    t154 = (((x8233+x8234)+x8235)<<x8236);

    if (t154 != 9223372036854775934LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x8241 = 7714122U;
	int8_t x8242 = INT8_MAX;
	int32_t x8243 = -581;
	static int32_t x8244 = 11;

    t155 = (((x8241+x8242)+x8243)<<x8244);

    if (t155 != 2912690176U) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x8246 = -1;
	int8_t x8248 = 10;
	uint32_t t156 = 48459913U;

    t156 = (((x8245+x8246)+x8247)<<x8248);

    if (t156 != 4294834176U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x8298 = UINT32_MAX;
	static volatile int16_t x8299 = INT16_MAX;
	uint16_t x8300 = 0U;
	volatile uint32_t t157 = 504919627U;

    t157 = (((x8297+x8298)+x8299)<<x8300);

    if (t157 != 2147516414U) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x8321 = INT32_MAX;
	volatile uint32_t x8322 = 1504307034U;
	int32_t x8324 = 0;
	volatile int64_t t158 = 0LL;

    t158 = (((x8321+x8322)+x8323)<<x8324);

    if (t158 != 3646996313LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x8430 = INT8_MAX;
	volatile int8_t x8431 = -6;

    t159 = (((x8429+x8430)+x8431)<<x8432);

    if (t159 != 240) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x8481 = UINT32_MAX;
	uint16_t x8482 = 13U;
	volatile int64_t t160 = -1279499612694272LL;

    t160 = (((x8481+x8482)+x8483)<<x8484);

    if (t160 != 942793364339425280LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x8549 = 0U;
	int16_t x8550 = 28;
	uint32_t x8551 = UINT32_MAX;
	volatile uint32_t t161 = 448833671U;

    t161 = (((x8549+x8550)+x8551)<<x8552);

    if (t161 != 6912U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x8679 = UINT32_MAX;
	volatile int8_t x8680 = 0;

    t162 = (((x8677+x8678)+x8679)<<x8680);

    if (t162 != 260U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x8714 = INT16_MIN;
	int32_t x8715 = 0;
	uint8_t x8716 = 9U;
	int32_t t163 = -1883;

    t163 = (((x8713+x8714)+x8715)<<x8716);

    if (t163 != 1158776320) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x8721 = UINT32_MAX;
	int8_t x8722 = -1;
	int8_t x8723 = 50;
	int8_t x8724 = 1;
	uint32_t t164 = 1736517065U;

    t164 = (((x8721+x8722)+x8723)<<x8724);

    if (t164 != 96U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x8741 = UINT16_MAX;
	int16_t x8742 = INT16_MIN;
	volatile int16_t x8743 = INT16_MAX;
	volatile int32_t t165 = 8049;

    t165 = (((x8741+x8742)+x8743)<<x8744);

    if (t165 != 131068) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x8765 = -1854;
	volatile uint32_t x8766 = 45110U;
	uint8_t x8768 = 25U;

    t166 = (((x8765+x8766)+x8767)<<x8768);

    if (t166 != 3992977408U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x8833 = INT32_MAX;
	uint8_t x8835 = UINT8_MAX;
	uint8_t x8836 = 0U;
	static volatile uint64_t t167 = 36882236186564LLU;

    t167 = (((x8833+x8834)+x8835)<<x8836);

    if (t167 != 170733765511952410LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x8837 = 3488338010319LLU;
	uint64_t x8838 = UINT64_MAX;
	volatile uint64_t x8839 = UINT64_MAX;
	int8_t x8840 = 1;

    t168 = (((x8837+x8838)+x8839)<<x8840);

    if (t168 != 6976676020634LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x8917 = 16686164417LL;
	uint32_t x8918 = 87351U;
	static int32_t x8919 = -113334910;
	uint8_t x8920 = 27U;
	int64_t t169 = -2137561098659939455LL;

    t169 = (((x8917+x8918)+x8919)<<x8920);

    if (t169 != 2224379247013658624LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x8997 = UINT32_MAX;
	uint8_t x8998 = 2U;
	uint8_t x9000 = 10U;
	uint32_t t170 = 1U;

    t170 = (((x8997+x8998)+x8999)<<x9000);

    if (t170 != 247808U) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x9001 = INT16_MAX;
	volatile int8_t x9002 = -1;
	uint16_t x9003 = 8U;
	volatile int32_t x9004 = 0;
	int32_t t171 = 28021303;

    t171 = (((x9001+x9002)+x9003)<<x9004);

    if (t171 != 32774) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x9105 = 11U;
	volatile uint8_t x9106 = 9U;
	int8_t x9107 = -1;
	int32_t t172 = -224847;

    t172 = (((x9105+x9106)+x9107)<<x9108);

    if (t172 != 38) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x9145 = -1;
	int8_t x9147 = -1;
	int32_t t173 = 1897;

    t173 = (((x9145+x9146)+x9147)<<x9148);

    if (t173 != 18) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x9165 = -212;
	uint32_t x9166 = UINT32_MAX;
	int16_t x9167 = -3375;
	uint8_t x9168 = 0U;
	static volatile uint32_t t174 = 3U;

    t174 = (((x9165+x9166)+x9167)<<x9168);

    if (t174 != 4294963708U) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x9169 = INT64_MIN;
	int64_t x9171 = INT64_MAX;

    t175 = (((x9169+x9170)+x9171)<<x9172);

    if (t175 != 33822867456LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x9201 = -1;
	static uint16_t x9204 = 3U;
	uint32_t t176 = 1U;

    t176 = (((x9201+x9202)+x9203)<<x9204);

    if (t176 != 15472U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x9289 = UINT16_MAX;
	static volatile int64_t x9290 = -149874239083220LL;
	uint64_t x9291 = 472836140LLU;
	volatile int8_t x9292 = 3;
	static uint64_t t177 = 3683LLU;

    t177 = (((x9289+x9290)+x9291)<<x9292);

    if (t177 != 18445545083580099256LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x9357 = 1U;
	volatile uint32_t x9359 = 1U;
	uint8_t x9360 = 0U;
	volatile uint32_t t178 = 1630U;

    t178 = (((x9357+x9358)+x9359)<<x9360);

    if (t178 != 2147483649U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x9361 = UINT16_MAX;
	uint64_t x9362 = 2261092776191LLU;
	uint16_t x9363 = UINT16_MAX;
	static int8_t x9364 = 1;
	static volatile uint64_t t179 = 0LLU;

    t179 = (((x9361+x9362)+x9363)<<x9364);

    if (t179 != 4522185814522LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x9377 = 209U;
	uint64_t x9378 = 967310095LLU;
	int8_t x9379 = INT8_MIN;
	volatile int8_t x9380 = 20;
	static volatile uint64_t t180 = 1158LLU;

    t180 = (((x9377+x9378)+x9379)<<x9380);

    if (t180 != 1014298235109376LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x9422 = 15045423U;
	int64_t x9423 = -1LL;
	static volatile int64_t t181 = 238365LL;

    t181 = (((x9421+x9422)+x9423)<<x9424);

    if (t181 != 120210400LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x9449 = INT8_MAX;
	uint8_t x9452 = 1U;
	static volatile int32_t t182 = 170;

    t182 = (((x9449+x9450)+x9451)<<x9452);

    if (t182 != 1174407682) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x9553 = 104736LLU;
	int8_t x9555 = -1;
	volatile uint64_t t183 = 1472300419528303LLU;

    t183 = (((x9553+x9554)+x9555)<<x9556);

    if (t183 != 899434871259136LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x9605 = -1;
	uint16_t x9606 = 177U;
	uint16_t x9607 = 4U;
	uint8_t x9608 = 4U;

    t184 = (((x9605+x9606)+x9607)<<x9608);

    if (t184 != 2880) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x9613 = -1;
	static uint64_t x9614 = UINT64_MAX;
	uint32_t x9615 = 11U;
	int32_t x9616 = 0;

    t185 = (((x9613+x9614)+x9615)<<x9616);

    if (t185 != 9LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x9621 = 676927559U;
	int16_t x9622 = -1;
	int32_t x9623 = 7224114;
	int32_t x9624 = 0;
	volatile uint32_t t186 = 3977406U;

    t186 = (((x9621+x9622)+x9623)<<x9624);

    if (t186 != 684151672U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x9658 = 107777687U;
	int8_t x9659 = INT8_MIN;
	static int8_t x9660 = 1;
	uint32_t t187 = 5790U;

    t187 = (((x9657+x9658)+x9659)<<x9660);

    if (t187 != 215489582U) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x9661 = 4026091248237281491LLU;
	static int32_t x9662 = -1;
	int16_t x9663 = INT16_MAX;
	static uint64_t t188 = 4489638LLU;

    t188 = (((x9661+x9662)+x9663)<<x9664);

    if (t188 != 8052182496474628514LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int8_t x9682 = INT8_MIN;
	static uint8_t x9684 = 10U;
	static uint32_t t189 = 10U;

    t189 = (((x9681+x9682)+x9683)<<x9684);

    if (t189 != 2777730048U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x9737 = 3;
	uint32_t x9738 = 6U;
	volatile int8_t x9739 = INT8_MIN;
	volatile uint8_t x9740 = 2U;
	uint32_t t190 = 396346U;

    t190 = (((x9737+x9738)+x9739)<<x9740);

    if (t190 != 4294966820U) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x9845 = 25;
	int8_t x9847 = -1;
	int16_t x9848 = 1;

    t191 = (((x9845+x9846)+x9847)<<x9848);

    if (t191 != 48) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x9917 = -1;
	int32_t x9918 = INT32_MAX;
	int64_t x9919 = -194LL;
	int64_t t192 = -3239610LL;

    t192 = (((x9917+x9918)+x9919)<<x9920);

    if (t192 != 68719470464LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x9937 = -1;
	uint64_t x9938 = 1573LLU;
	int16_t x9939 = -1;
	uint8_t x9940 = 8U;
	uint64_t t193 = 2936675223118271LLU;

    t193 = (((x9937+x9938)+x9939)<<x9940);

    if (t193 != 402176LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x9969 = -1LL;
	int32_t x9970 = INT32_MAX;
	static uint32_t x9972 = 1U;
	int64_t t194 = -137378346867575610LL;

    t194 = (((x9969+x9970)+x9971)<<x9972);

    if (t194 != 4294967300LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x9977 = 7055832;
	int32_t x9978 = 221354;
	uint8_t x9979 = 1U;
	static uint8_t x9980 = 2U;
	volatile int32_t t195 = -1;

    t195 = (((x9977+x9978)+x9979)<<x9980);

    if (t195 != 29108748) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x9997 = UINT64_MAX;
	int16_t x9998 = 7;
	uint16_t x10000 = 0U;
	uint64_t t196 = 3475131690LLU;

    t196 = (((x9997+x9998)+x9999)<<x10000);

    if (t196 != 4294967301LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x10065 = INT64_MAX;
	int8_t x10066 = -1;
	volatile int16_t x10067 = -1;
	uint8_t x10068 = 0U;
	volatile int64_t t197 = 378688836LL;

    t197 = (((x10065+x10066)+x10067)<<x10068);

    if (t197 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x10218 = 0U;
	int16_t x10219 = 1;
	static volatile int32_t t198 = -3;

    t198 = (((x10217+x10218)+x10219)<<x10220);

    if (t198 != 5) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x10234 = 1942295121902038015LLU;
	volatile uint8_t x10235 = 51U;
	uint16_t x10236 = 9U;

    t199 = (((x10233+x10234)+x10235)<<x10236);

    if (t199 != 3689870710929521152LLU) { NG(); } else { ; }
	
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


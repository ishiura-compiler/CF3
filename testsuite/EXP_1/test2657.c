
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

uint8_t x15 = 29U;
uint16_t x56 = 1U;
int32_t t2 = -1;
static int16_t x102 = INT16_MIN;
uint16_t x217 = UINT16_MAX;
int32_t t5 = 0;
static int32_t x298 = 1;
int8_t x365 = INT8_MIN;
int64_t x459 = INT64_MAX;
static volatile uint8_t x460 = 1U;
static int64_t x481 = -1LL;
int8_t x545 = INT8_MIN;
uint8_t x548 = 17U;
volatile int32_t t10 = 1;
volatile int16_t x599 = INT16_MIN;
static int8_t x605 = INT8_MAX;
int8_t x611 = 27;
int32_t t15 = -27328135;
int16_t x669 = 2090;
volatile int32_t t19 = -755;
volatile int8_t x745 = INT8_MIN;
volatile uint64_t x746 = 941LLU;
uint64_t x785 = 136462978363773449LLU;
int8_t x787 = -1;
int32_t x788 = 5;
volatile int32_t t21 = -1076645;
int8_t x807 = 7;
int16_t x808 = 15;
uint16_t x916 = 12U;
int8_t x921 = INT8_MAX;
uint16_t x1045 = 9U;
static volatile int32_t x1047 = -2;
uint32_t x1048 = 2U;
int32_t x1101 = 15;
uint64_t x1102 = UINT64_MAX;
uint16_t x1104 = 1U;
volatile int32_t t30 = 10837087;
int32_t x1218 = INT32_MAX;
int32_t t33 = -34297;
static int8_t x1242 = INT8_MIN;
uint8_t x1364 = 7U;
static int32_t t37 = -76509;
volatile int64_t x1418 = 157642907LL;
uint8_t x1420 = 2U;
static int16_t x1437 = 7;
int32_t t39 = 12255869;
static volatile uint64_t x1478 = 6765603974172811003LLU;
volatile int32_t x1479 = INT32_MAX;
int8_t x1501 = INT8_MIN;
int8_t x1503 = -3;
int32_t t41 = -335147543;
int16_t x1635 = INT16_MIN;
volatile int8_t x1678 = 0;
volatile int16_t x1761 = INT16_MAX;
int8_t x1762 = INT8_MIN;
uint32_t x1764 = 19U;
uint8_t x1802 = 13U;
int32_t x1819 = -1;
static volatile int32_t x1820 = 7;
volatile uint16_t x1833 = 4U;
uint32_t x1834 = 1994118U;
int32_t t49 = 1230;
uint16_t x1888 = 1U;
int16_t x1905 = INT16_MIN;
int32_t x1906 = INT32_MAX;
static int32_t t53 = 265666;
int16_t x1937 = INT16_MAX;
volatile int32_t t55 = 2;
uint64_t x2018 = 50833011912LLU;
uint8_t x2020 = 11U;
int32_t t57 = 382199;
int32_t x2101 = INT32_MIN;
int64_t x2103 = -17695450419LL;
volatile int32_t t61 = 21502;
static int64_t x2109 = -549551453592332805LL;
int32_t t63 = -1;
int64_t x2153 = INT64_MIN;
int8_t x2174 = INT8_MAX;
int32_t x2175 = -1;
int8_t x2181 = -1;
volatile int32_t t70 = -3;
int32_t t72 = 9773438;
volatile int32_t x2307 = -20;
uint8_t x2349 = UINT8_MAX;
static int32_t x2350 = INT32_MIN;
uint16_t x2351 = 507U;
int32_t t75 = 14639;
int32_t t76 = 29374196;
int16_t x2431 = -1;
volatile int32_t t77 = 372607;
int16_t x2527 = INT16_MAX;
uint16_t x2528 = 15U;
uint64_t x2532 = 2LLU;
static int32_t t82 = -11057;
static int32_t t83 = 7;
int8_t x2635 = 11;
int8_t x2666 = -1;
int32_t x2667 = INT32_MAX;
uint32_t x2706 = UINT32_MAX;
uint8_t x2764 = 11U;
int32_t t92 = -190;
volatile int16_t x2770 = INT16_MAX;
int8_t x2771 = INT8_MIN;
int8_t x2772 = 6;
uint64_t x2778 = UINT64_MAX;
volatile int32_t t95 = 8937721;
volatile int16_t x2826 = -1;
int16_t x2827 = 1233;
volatile int32_t t96 = 51720932;
int64_t x2839 = INT64_MIN;
uint16_t x2935 = 12504U;
int32_t t99 = -9;
uint8_t x2956 = 3U;
volatile int32_t t100 = 20240;
volatile int32_t x2984 = 22;
int16_t x3023 = INT16_MAX;
uint32_t x3047 = UINT32_MAX;
volatile int32_t t105 = 28;
int64_t x3075 = -1LL;
uint16_t x3082 = 1U;
int16_t x3084 = 3;
int16_t x3195 = -1;
uint8_t x3287 = 3U;
int32_t x3321 = -1;
static uint64_t x3324 = 2LLU;
int8_t x3436 = 0;
static volatile int32_t t114 = 15;
uint16_t x3500 = 24U;
uint64_t x3563 = 766303LLU;
int8_t x3572 = 10;
int16_t x3578 = -1;
uint16_t x3585 = 24828U;
volatile int32_t t119 = -12;
uint8_t x3621 = 6U;
int8_t x3917 = INT8_MIN;
int16_t x3993 = INT16_MAX;
int64_t x3994 = -118278690453LL;
int32_t t125 = -83080;
volatile int64_t x4149 = -4LL;
uint8_t x4151 = 1U;
volatile int32_t t128 = 40158040;
volatile int64_t x4194 = -1LL;
uint8_t x4195 = 0U;
volatile int32_t t130 = -39424669;
int64_t x4358 = -20445931475239LL;
uint16_t x4360 = 2U;
volatile int32_t t134 = 699971119;
volatile int32_t t136 = 305;
int8_t x4374 = INT8_MAX;
int64_t x4423 = -1LL;
uint16_t x4424 = 21U;
int16_t x4457 = 12;
int64_t x4498 = -962840398762LL;
volatile int32_t t141 = 4;
volatile uint16_t x4520 = 0U;
static int8_t x4533 = INT8_MIN;
volatile int32_t x4605 = -3054689;
static uint64_t x4677 = 1LLU;
int32_t x4703 = INT32_MIN;
int16_t x4705 = INT16_MIN;
volatile uint32_t x4708 = 5U;
int32_t x4919 = INT32_MIN;
int16_t x4998 = INT16_MIN;
volatile uint8_t x5071 = 48U;
static uint8_t x5086 = 0U;
int32_t x5092 = 0;
int32_t x5158 = -1;
volatile uint32_t x5212 = 11U;
int64_t x5266 = -377707733398566LL;
int32_t t162 = 189391;
int64_t x5411 = INT64_MAX;
volatile int32_t t165 = -31786;
static int16_t x5494 = INT16_MIN;
volatile int32_t t166 = -68176;
int16_t x5502 = 0;
static volatile uint8_t x5504 = 24U;
static int64_t x5566 = INT64_MIN;
uint16_t x5604 = 7U;
int32_t t172 = 11;
uint8_t x5614 = 62U;
uint16_t x5616 = 1U;
static uint64_t x5651 = UINT64_MAX;
int32_t x5652 = 26;
int16_t x5655 = -20;
static uint8_t x5669 = UINT8_MAX;
int64_t x5671 = INT64_MAX;
int8_t x5741 = INT8_MIN;
volatile uint8_t x5839 = 14U;
uint16_t x5840 = 6U;
uint32_t x6150 = UINT32_MAX;
volatile int32_t t186 = 0;
static int64_t x6221 = -1LL;
int32_t t187 = 139876;
int64_t x6265 = INT64_MIN;
uint8_t x6292 = 30U;
int32_t t190 = -31;
volatile uint8_t x6298 = 2U;
static int8_t x6341 = INT8_MIN;
uint64_t x6342 = 3LLU;
volatile uint32_t x6349 = 1939119U;
uint8_t x6350 = UINT8_MAX;
static int32_t x6361 = -1;
static uint64_t x6363 = 493796627370670LLU;
int32_t t194 = 0;
uint64_t x6370 = 132LLU;
static uint64_t x6371 = 848637954LLU;
volatile int32_t t195 = 71601;
static int64_t x6375 = 115583178763LL;
int16_t x6376 = 0;
static int32_t t196 = 167961137;
int8_t x6395 = INT8_MIN;
volatile int32_t t197 = -12172272;
uint16_t x6443 = UINT16_MAX;


void f0(void) {
    	int8_t x13 = INT8_MIN;
	volatile int16_t x14 = INT16_MAX;
	uint16_t x16 = 1U;
	volatile int32_t t0 = 138152253;

    t0 = (((x13^x14)==x15)>>x16);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x53 = UINT16_MAX;
	uint64_t x54 = 6214508LLU;
	volatile int64_t x55 = -1LL;
	volatile int32_t t1 = 0;

    t1 = (((x53^x54)==x55)>>x56);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x57 = -1;
	static uint32_t x58 = 2044U;
	uint16_t x59 = 7U;
	int64_t x60 = 0LL;

    t2 = (((x57^x58)==x59)>>x60);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x101 = 0;
	static int16_t x103 = INT16_MAX;
	int8_t x104 = 13;
	int32_t t3 = -810705459;

    t3 = (((x101^x102)==x103)>>x104);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x109 = INT64_MIN;
	static int16_t x110 = -1;
	uint16_t x111 = UINT16_MAX;
	volatile uint8_t x112 = 28U;
	static volatile int32_t t4 = -29;

    t4 = (((x109^x110)==x111)>>x112);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x218 = 0;
	int32_t x219 = 135495;
	uint32_t x220 = 1U;

    t5 = (((x217^x218)==x219)>>x220);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x297 = 1U;
	int16_t x299 = INT16_MIN;
	int8_t x300 = 0;
	int32_t t6 = -95933;

    t6 = (((x297^x298)==x299)>>x300);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x366 = -1LL;
	uint16_t x367 = 1U;
	uint8_t x368 = 12U;
	volatile int32_t t7 = -26245469;

    t7 = (((x365^x366)==x367)>>x368);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x457 = 898002;
	int32_t x458 = -1;
	static int32_t t8 = 3;

    t8 = (((x457^x458)==x459)>>x460);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x482 = INT8_MIN;
	int32_t x483 = INT32_MAX;
	int16_t x484 = 8;
	volatile int32_t t9 = -38;

    t9 = (((x481^x482)==x483)>>x484);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x546 = 10847594887LLU;
	int64_t x547 = 680438938505221664LL;

    t10 = (((x545^x546)==x547)>>x548);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x581 = 220364U;
	int8_t x582 = -1;
	uint64_t x583 = 31742349963620LLU;
	int32_t x584 = 0;
	volatile int32_t t11 = 5;

    t11 = (((x581^x582)==x583)>>x584);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x585 = UINT64_MAX;
	static int64_t x586 = -1LL;
	uint64_t x587 = 74453480381724LLU;
	static uint8_t x588 = 0U;
	static volatile int32_t t12 = -4037632;

    t12 = (((x585^x586)==x587)>>x588);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x597 = INT64_MAX;
	volatile uint16_t x598 = 14361U;
	volatile uint16_t x600 = 6U;
	int32_t t13 = -7762304;

    t13 = (((x597^x598)==x599)>>x600);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x606 = -1;
	volatile int8_t x607 = INT8_MIN;
	int32_t x608 = 0;
	volatile int32_t t14 = 174540;

    t14 = (((x605^x606)==x607)>>x608);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x609 = INT8_MIN;
	static int32_t x610 = INT32_MIN;
	static uint64_t x612 = 0LLU;

    t15 = (((x609^x610)==x611)>>x612);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x670 = -1;
	int64_t x671 = 293841305253413LL;
	uint8_t x672 = 12U;
	static volatile int32_t t16 = -4120764;

    t16 = (((x669^x670)==x671)>>x672);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x681 = INT8_MAX;
	int32_t x682 = 34411;
	volatile int8_t x683 = INT8_MIN;
	uint16_t x684 = 30U;
	int32_t t17 = 1;

    t17 = (((x681^x682)==x683)>>x684);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int64_t x721 = 3064951493LL;
	volatile int8_t x722 = -50;
	uint8_t x723 = 52U;
	static volatile uint16_t x724 = 5U;
	volatile int32_t t18 = 91964420;

    t18 = (((x721^x722)==x723)>>x724);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x729 = INT32_MIN;
	uint64_t x730 = 12963LLU;
	static int32_t x731 = INT32_MIN;
	uint16_t x732 = 7U;

    t19 = (((x729^x730)==x731)>>x732);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x747 = 1130U;
	volatile uint8_t x748 = 12U;
	volatile int32_t t20 = -2533;

    t20 = (((x745^x746)==x747)>>x748);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x786 = -1;

    t21 = (((x785^x786)==x787)>>x788);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int64_t x805 = -1LL;
	int64_t x806 = 5LL;
	volatile int32_t t22 = -50575;

    t22 = (((x805^x806)==x807)>>x808);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x897 = -1;
	static volatile int32_t x898 = -149047720;
	int32_t x899 = -3;
	volatile uint16_t x900 = 5U;
	int32_t t23 = 9436;

    t23 = (((x897^x898)==x899)>>x900);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x901 = -1;
	int8_t x902 = INT8_MAX;
	int32_t x903 = INT32_MAX;
	uint8_t x904 = 6U;
	int32_t t24 = 238659;

    t24 = (((x901^x902)==x903)>>x904);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x913 = UINT32_MAX;
	int32_t x914 = -5083;
	int64_t x915 = -1LL;
	static int32_t t25 = -122058;

    t25 = (((x913^x914)==x915)>>x916);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x922 = -3732409LL;
	volatile uint32_t x923 = UINT32_MAX;
	volatile uint8_t x924 = 25U;
	static volatile int32_t t26 = -5279016;

    t26 = (((x921^x922)==x923)>>x924);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x937 = UINT16_MAX;
	uint8_t x938 = 26U;
	static uint16_t x939 = UINT16_MAX;
	uint8_t x940 = 2U;
	volatile int32_t t27 = 127012715;

    t27 = (((x937^x938)==x939)>>x940);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x965 = 102U;
	uint16_t x966 = 121U;
	static uint8_t x967 = 3U;
	volatile int8_t x968 = 7;
	volatile int32_t t28 = 1;

    t28 = (((x965^x966)==x967)>>x968);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x1046 = 15LLU;
	volatile int32_t t29 = -27948;

    t29 = (((x1045^x1046)==x1047)>>x1048);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x1103 = -1LL;

    t30 = (((x1101^x1102)==x1103)>>x1104);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x1189 = -3;
	volatile int32_t x1190 = 61234792;
	volatile int64_t x1191 = -17002913LL;
	int16_t x1192 = 0;
	volatile int32_t t31 = -8;

    t31 = (((x1189^x1190)==x1191)>>x1192);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x1217 = 362U;
	int8_t x1219 = 1;
	uint8_t x1220 = 0U;
	int32_t t32 = -36;

    t32 = (((x1217^x1218)==x1219)>>x1220);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x1225 = INT32_MAX;
	int64_t x1226 = INT64_MIN;
	volatile int64_t x1227 = INT64_MIN;
	uint16_t x1228 = 28U;

    t33 = (((x1225^x1226)==x1227)>>x1228);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint8_t x1237 = 52U;
	uint16_t x1238 = 5584U;
	static volatile int8_t x1239 = -5;
	uint64_t x1240 = 13LLU;
	volatile int32_t t34 = 7;

    t34 = (((x1237^x1238)==x1239)>>x1240);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x1241 = INT64_MIN;
	static int16_t x1243 = INT16_MIN;
	uint8_t x1244 = 0U;
	static volatile int32_t t35 = -1448694;

    t35 = (((x1241^x1242)==x1243)>>x1244);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x1277 = 9;
	static uint64_t x1278 = UINT64_MAX;
	uint32_t x1279 = UINT32_MAX;
	uint8_t x1280 = 11U;
	int32_t t36 = 337;

    t36 = (((x1277^x1278)==x1279)>>x1280);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x1361 = 23879898662140LLU;
	static int32_t x1362 = -92;
	int32_t x1363 = 2059539;

    t37 = (((x1361^x1362)==x1363)>>x1364);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x1417 = -26777132;
	int64_t x1419 = -34745LL;
	int32_t t38 = 1636685;

    t38 = (((x1417^x1418)==x1419)>>x1420);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x1438 = INT8_MIN;
	uint32_t x1439 = 5527333U;
	volatile uint16_t x1440 = 3U;

    t39 = (((x1437^x1438)==x1439)>>x1440);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x1477 = INT8_MIN;
	static uint64_t x1480 = 2LLU;
	volatile int32_t t40 = -1023412166;

    t40 = (((x1477^x1478)==x1479)>>x1480);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x1502 = UINT16_MAX;
	int16_t x1504 = 7;

    t41 = (((x1501^x1502)==x1503)>>x1504);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x1589 = UINT8_MAX;
	static volatile uint32_t x1590 = 19U;
	static int16_t x1591 = INT16_MAX;
	uint8_t x1592 = 9U;
	volatile int32_t t42 = -4367597;

    t42 = (((x1589^x1590)==x1591)>>x1592);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x1633 = 52502271U;
	int32_t x1634 = 7004;
	uint16_t x1636 = 9U;
	static int32_t t43 = -174632;

    t43 = (((x1633^x1634)==x1635)>>x1636);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x1677 = 941485LLU;
	uint64_t x1679 = 13880371603870LLU;
	uint8_t x1680 = 2U;
	int32_t t44 = -184574;

    t44 = (((x1677^x1678)==x1679)>>x1680);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x1763 = -153311223LL;
	int32_t t45 = 42521822;

    t45 = (((x1761^x1762)==x1763)>>x1764);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x1777 = INT8_MIN;
	int32_t x1778 = INT32_MIN;
	static int64_t x1779 = INT64_MIN;
	static uint8_t x1780 = 0U;
	static int32_t t46 = 20763466;

    t46 = (((x1777^x1778)==x1779)>>x1780);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x1801 = 45089LLU;
	int16_t x1803 = -1378;
	uint32_t x1804 = 11U;
	static int32_t t47 = 19;

    t47 = (((x1801^x1802)==x1803)>>x1804);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x1817 = 6100630083936LLU;
	static int64_t x1818 = -1LL;
	static int32_t t48 = 4364561;

    t48 = (((x1817^x1818)==x1819)>>x1820);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x1835 = INT64_MAX;
	uint16_t x1836 = 5U;

    t49 = (((x1833^x1834)==x1835)>>x1836);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x1849 = -1;
	int8_t x1850 = -12;
	int32_t x1851 = -1;
	int32_t x1852 = 16;
	int32_t t50 = 380;

    t50 = (((x1849^x1850)==x1851)>>x1852);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x1865 = -733;
	uint64_t x1866 = UINT64_MAX;
	static uint32_t x1867 = 3U;
	static volatile int16_t x1868 = 1;
	int32_t t51 = 1326;

    t51 = (((x1865^x1866)==x1867)>>x1868);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x1885 = 1235U;
	int64_t x1886 = INT64_MIN;
	uint64_t x1887 = 266649500791752LLU;
	volatile int32_t t52 = 1;

    t52 = (((x1885^x1886)==x1887)>>x1888);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x1907 = 0U;
	volatile int8_t x1908 = 22;

    t53 = (((x1905^x1906)==x1907)>>x1908);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x1938 = 94U;
	volatile uint16_t x1939 = 858U;
	int16_t x1940 = 2;
	int32_t t54 = -6682050;

    t54 = (((x1937^x1938)==x1939)>>x1940);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x1969 = INT64_MIN;
	uint64_t x1970 = 3LLU;
	int32_t x1971 = -1;
	int16_t x1972 = 6;

    t55 = (((x1969^x1970)==x1971)>>x1972);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint32_t x2009 = UINT32_MAX;
	uint8_t x2010 = 1U;
	volatile int32_t x2011 = -1;
	volatile int8_t x2012 = 0;
	int32_t t56 = -24;

    t56 = (((x2009^x2010)==x2011)>>x2012);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x2017 = UINT8_MAX;
	int32_t x2019 = INT32_MAX;

    t57 = (((x2017^x2018)==x2019)>>x2020);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x2037 = 480796604LLU;
	volatile uint8_t x2038 = 5U;
	static int16_t x2039 = -12;
	static uint32_t x2040 = 1U;
	volatile int32_t t58 = -457491;

    t58 = (((x2037^x2038)==x2039)>>x2040);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x2073 = -255689;
	static uint16_t x2074 = 1445U;
	static int16_t x2075 = INT16_MAX;
	int8_t x2076 = 6;
	static int32_t t59 = -1;

    t59 = (((x2073^x2074)==x2075)>>x2076);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x2097 = 52552965;
	int32_t x2098 = INT32_MAX;
	int16_t x2099 = 208;
	uint8_t x2100 = 7U;
	volatile int32_t t60 = -2104;

    t60 = (((x2097^x2098)==x2099)>>x2100);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x2102 = 0;
	uint8_t x2104 = 5U;

    t61 = (((x2101^x2102)==x2103)>>x2104);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x2110 = -6LL;
	int16_t x2111 = INT16_MAX;
	uint32_t x2112 = 15U;
	int32_t t62 = 5816;

    t62 = (((x2109^x2110)==x2111)>>x2112);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x2125 = 1;
	volatile uint64_t x2126 = 1650LLU;
	int16_t x2127 = INT16_MIN;
	static uint8_t x2128 = 11U;

    t63 = (((x2125^x2126)==x2127)>>x2128);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x2154 = INT64_MAX;
	static int16_t x2155 = -1;
	uint16_t x2156 = 0U;
	int32_t t64 = -7060;

    t64 = (((x2153^x2154)==x2155)>>x2156);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x2157 = INT32_MAX;
	uint16_t x2158 = 2U;
	static int16_t x2159 = -6;
	int32_t x2160 = 15;
	volatile int32_t t65 = -39;

    t65 = (((x2157^x2158)==x2159)>>x2160);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x2173 = INT16_MIN;
	uint8_t x2176 = 8U;
	volatile int32_t t66 = -1940;

    t66 = (((x2173^x2174)==x2175)>>x2176);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x2182 = -1LL;
	static int64_t x2183 = 50902LL;
	uint8_t x2184 = 3U;
	int32_t t67 = 6;

    t67 = (((x2181^x2182)==x2183)>>x2184);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x2193 = INT8_MAX;
	int64_t x2194 = INT64_MIN;
	int8_t x2195 = INT8_MIN;
	int8_t x2196 = 4;
	static int32_t t68 = -38;

    t68 = (((x2193^x2194)==x2195)>>x2196);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x2209 = INT8_MIN;
	int8_t x2210 = -3;
	int32_t x2211 = -1;
	int8_t x2212 = 5;
	int32_t t69 = -1353;

    t69 = (((x2209^x2210)==x2211)>>x2212);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x2253 = 3U;
	uint8_t x2254 = 1U;
	int32_t x2255 = INT32_MIN;
	uint8_t x2256 = 11U;

    t70 = (((x2253^x2254)==x2255)>>x2256);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x2269 = -1;
	uint8_t x2270 = UINT8_MAX;
	uint64_t x2271 = 12LLU;
	volatile int8_t x2272 = 1;
	static int32_t t71 = 234875209;

    t71 = (((x2269^x2270)==x2271)>>x2272);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x2293 = 15239881;
	static int32_t x2294 = -596407;
	volatile int32_t x2295 = INT32_MIN;
	volatile uint8_t x2296 = 0U;

    t72 = (((x2293^x2294)==x2295)>>x2296);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x2305 = -85;
	int32_t x2306 = INT32_MAX;
	static volatile int8_t x2308 = 4;
	int32_t t73 = 19208521;

    t73 = (((x2305^x2306)==x2307)>>x2308);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x2325 = INT64_MIN;
	int32_t x2326 = INT32_MIN;
	int8_t x2327 = INT8_MIN;
	int8_t x2328 = 0;
	volatile int32_t t74 = 1805;

    t74 = (((x2325^x2326)==x2327)>>x2328);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x2352 = 1;

    t75 = (((x2349^x2350)==x2351)>>x2352);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x2385 = 83715U;
	uint64_t x2386 = 5LLU;
	static int32_t x2387 = INT32_MAX;
	int32_t x2388 = 1;

    t76 = (((x2385^x2386)==x2387)>>x2388);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x2429 = 381805496814LLU;
	int16_t x2430 = INT16_MAX;
	int8_t x2432 = 1;

    t77 = (((x2429^x2430)==x2431)>>x2432);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x2445 = INT64_MIN;
	uint64_t x2446 = 10001235948763LLU;
	uint16_t x2447 = 16930U;
	int8_t x2448 = 0;
	int32_t t78 = 133424;

    t78 = (((x2445^x2446)==x2447)>>x2448);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x2469 = UINT8_MAX;
	volatile int16_t x2470 = 193;
	int32_t x2471 = -1;
	static int16_t x2472 = 0;
	int32_t t79 = -439297738;

    t79 = (((x2469^x2470)==x2471)>>x2472);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x2513 = 645164U;
	int32_t x2514 = INT32_MIN;
	int8_t x2515 = -1;
	uint8_t x2516 = 30U;
	int32_t t80 = 842429275;

    t80 = (((x2513^x2514)==x2515)>>x2516);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x2525 = -1LL;
	static int16_t x2526 = INT16_MAX;
	volatile int32_t t81 = -8;

    t81 = (((x2525^x2526)==x2527)>>x2528);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x2529 = INT16_MIN;
	int8_t x2530 = INT8_MIN;
	uint32_t x2531 = UINT32_MAX;

    t82 = (((x2529^x2530)==x2531)>>x2532);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x2541 = INT32_MIN;
	int32_t x2542 = 4105468;
	static int16_t x2543 = INT16_MIN;
	static int8_t x2544 = 3;

    t83 = (((x2541^x2542)==x2543)>>x2544);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x2573 = UINT16_MAX;
	uint16_t x2574 = UINT16_MAX;
	int8_t x2575 = -1;
	static volatile uint8_t x2576 = 4U;
	volatile int32_t t84 = -48;

    t84 = (((x2573^x2574)==x2575)>>x2576);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x2605 = INT64_MIN;
	static volatile uint8_t x2606 = UINT8_MAX;
	int16_t x2607 = -1;
	static volatile uint8_t x2608 = 0U;
	static int32_t t85 = -2;

    t85 = (((x2605^x2606)==x2607)>>x2608);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x2621 = INT16_MAX;
	int8_t x2622 = INT8_MIN;
	static int8_t x2623 = -1;
	uint8_t x2624 = 7U;
	static int32_t t86 = -126;

    t86 = (((x2621^x2622)==x2623)>>x2624);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x2633 = 29U;
	volatile int16_t x2634 = 1;
	static volatile int16_t x2636 = 11;
	int32_t t87 = -3049568;

    t87 = (((x2633^x2634)==x2635)>>x2636);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x2641 = INT16_MAX;
	static uint8_t x2642 = 4U;
	volatile uint64_t x2643 = UINT64_MAX;
	int16_t x2644 = 1;
	static volatile int32_t t88 = -10;

    t88 = (((x2641^x2642)==x2643)>>x2644);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x2665 = 5LL;
	int16_t x2668 = 0;
	int32_t t89 = -3;

    t89 = (((x2665^x2666)==x2667)>>x2668);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x2705 = -1LL;
	static uint32_t x2707 = 28U;
	uint8_t x2708 = 7U;
	static volatile int32_t t90 = 8;

    t90 = (((x2705^x2706)==x2707)>>x2708);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x2729 = 17677708945801LLU;
	int8_t x2730 = INT8_MIN;
	static int64_t x2731 = -1LL;
	volatile uint8_t x2732 = 8U;
	volatile int32_t t91 = 3886852;

    t91 = (((x2729^x2730)==x2731)>>x2732);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x2761 = 0U;
	int8_t x2762 = 11;
	int64_t x2763 = -1LL;

    t92 = (((x2761^x2762)==x2763)>>x2764);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x2765 = 30U;
	int32_t x2766 = -8249096;
	int32_t x2767 = INT32_MAX;
	uint16_t x2768 = 0U;
	static volatile int32_t t93 = 631021;

    t93 = (((x2765^x2766)==x2767)>>x2768);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x2769 = INT16_MIN;
	int32_t t94 = -97371;

    t94 = (((x2769^x2770)==x2771)>>x2772);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x2777 = -1;
	static volatile uint32_t x2779 = 3333732U;
	int32_t x2780 = 1;

    t95 = (((x2777^x2778)==x2779)>>x2780);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x2825 = INT64_MIN;
	uint16_t x2828 = 1U;

    t96 = (((x2825^x2826)==x2827)>>x2828);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x2837 = -35;
	int32_t x2838 = -1;
	static volatile int64_t x2840 = 0LL;
	volatile int32_t t97 = -83;

    t97 = (((x2837^x2838)==x2839)>>x2840);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x2853 = 2225;
	int8_t x2854 = 12;
	int16_t x2855 = 2970;
	static int8_t x2856 = 7;
	static int32_t t98 = -393;

    t98 = (((x2853^x2854)==x2855)>>x2856);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint8_t x2933 = UINT8_MAX;
	int8_t x2934 = INT8_MIN;
	static int8_t x2936 = 0;

    t99 = (((x2933^x2934)==x2935)>>x2936);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x2953 = UINT8_MAX;
	int8_t x2954 = 24;
	int8_t x2955 = INT8_MIN;

    t100 = (((x2953^x2954)==x2955)>>x2956);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x2981 = INT32_MAX;
	uint32_t x2982 = 52867U;
	static int32_t x2983 = -1;
	int32_t t101 = -140425195;

    t101 = (((x2981^x2982)==x2983)>>x2984);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x2997 = INT16_MIN;
	int64_t x2998 = INT64_MAX;
	volatile uint32_t x2999 = 2580U;
	uint8_t x3000 = 4U;
	int32_t t102 = 38505695;

    t102 = (((x2997^x2998)==x2999)>>x3000);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x3021 = UINT8_MAX;
	static int64_t x3022 = 3758960LL;
	int16_t x3024 = 0;
	volatile int32_t t103 = -125189;

    t103 = (((x3021^x3022)==x3023)>>x3024);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x3029 = -1273;
	int8_t x3030 = INT8_MIN;
	int32_t x3031 = -1;
	int16_t x3032 = 0;
	int32_t t104 = -404551;

    t104 = (((x3029^x3030)==x3031)>>x3032);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x3045 = INT64_MIN;
	volatile int8_t x3046 = INT8_MIN;
	uint8_t x3048 = 27U;

    t105 = (((x3045^x3046)==x3047)>>x3048);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x3073 = 139LLU;
	volatile int64_t x3074 = INT64_MIN;
	uint16_t x3076 = 0U;
	int32_t t106 = 43;

    t106 = (((x3073^x3074)==x3075)>>x3076);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x3081 = INT16_MIN;
	int64_t x3083 = -1LL;
	int32_t t107 = 1;

    t107 = (((x3081^x3082)==x3083)>>x3084);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x3117 = INT8_MIN;
	static uint8_t x3118 = UINT8_MAX;
	int16_t x3119 = 28;
	volatile uint8_t x3120 = 2U;
	int32_t t108 = 956;

    t108 = (((x3117^x3118)==x3119)>>x3120);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x3193 = INT8_MAX;
	volatile int64_t x3194 = INT64_MAX;
	uint8_t x3196 = 4U;
	volatile int32_t t109 = -129678549;

    t109 = (((x3193^x3194)==x3195)>>x3196);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x3285 = INT16_MIN;
	int64_t x3286 = INT64_MAX;
	uint16_t x3288 = 1U;
	volatile int32_t t110 = 17;

    t110 = (((x3285^x3286)==x3287)>>x3288);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x3322 = INT16_MIN;
	volatile uint16_t x3323 = 0U;
	int32_t t111 = 4;

    t111 = (((x3321^x3322)==x3323)>>x3324);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x3365 = 130347390682063497LLU;
	int64_t x3366 = INT64_MIN;
	int8_t x3367 = -6;
	volatile uint8_t x3368 = 19U;
	static volatile int32_t t112 = -9025115;

    t112 = (((x3365^x3366)==x3367)>>x3368);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x3425 = INT64_MAX;
	int64_t x3426 = INT64_MIN;
	uint64_t x3427 = 29871492333LLU;
	int64_t x3428 = 0LL;
	volatile int32_t t113 = 1046519207;

    t113 = (((x3425^x3426)==x3427)>>x3428);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x3433 = INT8_MAX;
	int64_t x3434 = INT64_MIN;
	volatile int32_t x3435 = INT32_MAX;

    t114 = (((x3433^x3434)==x3435)>>x3436);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x3497 = 3780;
	int16_t x3498 = INT16_MIN;
	static uint16_t x3499 = 2556U;
	volatile int32_t t115 = -1838746;

    t115 = (((x3497^x3498)==x3499)>>x3500);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x3561 = INT8_MAX;
	uint8_t x3562 = UINT8_MAX;
	static int16_t x3564 = 1;
	volatile int32_t t116 = 18025;

    t116 = (((x3561^x3562)==x3563)>>x3564);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x3569 = -51;
	uint16_t x3570 = UINT16_MAX;
	uint16_t x3571 = UINT16_MAX;
	int32_t t117 = -820;

    t117 = (((x3569^x3570)==x3571)>>x3572);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x3577 = INT16_MAX;
	volatile int64_t x3579 = 67401940086994631LL;
	static int8_t x3580 = 0;
	static volatile int32_t t118 = 9;

    t118 = (((x3577^x3578)==x3579)>>x3580);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x3586 = 21U;
	int32_t x3587 = 2;
	int32_t x3588 = 4;

    t119 = (((x3585^x3586)==x3587)>>x3588);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x3622 = -739;
	int8_t x3623 = INT8_MIN;
	uint32_t x3624 = 1U;
	volatile int32_t t120 = 282672588;

    t120 = (((x3621^x3622)==x3623)>>x3624);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x3769 = INT16_MIN;
	int16_t x3770 = -1;
	static int32_t x3771 = 11437;
	int8_t x3772 = 7;
	volatile int32_t t121 = -215;

    t121 = (((x3769^x3770)==x3771)>>x3772);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x3893 = 8U;
	uint32_t x3894 = 1U;
	volatile int8_t x3895 = -1;
	int16_t x3896 = 0;
	int32_t t122 = 36262;

    t122 = (((x3893^x3894)==x3895)>>x3896);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x3897 = -1;
	int64_t x3898 = INT64_MIN;
	static int32_t x3899 = 150;
	uint32_t x3900 = 3U;
	int32_t t123 = 5320;

    t123 = (((x3897^x3898)==x3899)>>x3900);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x3918 = 47485LLU;
	int8_t x3919 = INT8_MAX;
	uint16_t x3920 = 13U;
	static volatile int32_t t124 = 6019;

    t124 = (((x3917^x3918)==x3919)>>x3920);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x3995 = 743;
	static uint32_t x3996 = 0U;

    t125 = (((x3993^x3994)==x3995)>>x3996);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x4009 = UINT32_MAX;
	int64_t x4010 = INT64_MAX;
	int8_t x4011 = 5;
	int64_t x4012 = 2LL;
	volatile int32_t t126 = -13995395;

    t126 = (((x4009^x4010)==x4011)>>x4012);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x4029 = INT8_MIN;
	int32_t x4030 = 0;
	volatile uint64_t x4031 = UINT64_MAX;
	static int8_t x4032 = 12;
	int32_t t127 = -7092783;

    t127 = (((x4029^x4030)==x4031)>>x4032);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x4150 = INT8_MIN;
	uint32_t x4152 = 3U;

    t128 = (((x4149^x4150)==x4151)>>x4152);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x4193 = 1946385U;
	int8_t x4196 = 8;
	int32_t t129 = -111;

    t129 = (((x4193^x4194)==x4195)>>x4196);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x4209 = 93U;
	static volatile int16_t x4210 = INT16_MAX;
	static volatile int8_t x4211 = 6;
	int8_t x4212 = 14;

    t130 = (((x4209^x4210)==x4211)>>x4212);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x4245 = 0;
	int8_t x4246 = INT8_MIN;
	static uint32_t x4247 = UINT32_MAX;
	uint8_t x4248 = 15U;
	volatile int32_t t131 = 1988332;

    t131 = (((x4245^x4246)==x4247)>>x4248);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x4253 = 497336LLU;
	int64_t x4254 = 1132624299212634193LL;
	int32_t x4255 = -240289;
	uint8_t x4256 = 25U;
	int32_t t132 = -7102476;

    t132 = (((x4253^x4254)==x4255)>>x4256);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x4341 = INT32_MIN;
	uint8_t x4342 = 3U;
	int16_t x4343 = INT16_MAX;
	volatile uint8_t x4344 = 0U;
	volatile int32_t t133 = 142289;

    t133 = (((x4341^x4342)==x4343)>>x4344);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x4357 = 3U;
	static uint64_t x4359 = 2520560279165914LLU;

    t134 = (((x4357^x4358)==x4359)>>x4360);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x4361 = 101U;
	uint16_t x4362 = UINT16_MAX;
	volatile int32_t x4363 = INT32_MIN;
	volatile int16_t x4364 = 7;
	volatile int32_t t135 = 93;

    t135 = (((x4361^x4362)==x4363)>>x4364);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x4369 = UINT16_MAX;
	volatile uint16_t x4370 = UINT16_MAX;
	uint32_t x4371 = UINT32_MAX;
	uint8_t x4372 = 1U;

    t136 = (((x4369^x4370)==x4371)>>x4372);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x4373 = 42;
	int64_t x4375 = INT64_MIN;
	uint8_t x4376 = 13U;
	static volatile int32_t t137 = -26178;

    t137 = (((x4373^x4374)==x4375)>>x4376);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x4421 = INT64_MIN;
	uint16_t x4422 = 9692U;
	static int32_t t138 = 1442859;

    t138 = (((x4421^x4422)==x4423)>>x4424);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x4449 = 1;
	int16_t x4450 = -7072;
	int32_t x4451 = INT32_MAX;
	int8_t x4452 = 2;
	volatile int32_t t139 = 168;

    t139 = (((x4449^x4450)==x4451)>>x4452);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x4458 = UINT32_MAX;
	int64_t x4459 = -1LL;
	static int16_t x4460 = 0;
	int32_t t140 = 1;

    t140 = (((x4457^x4458)==x4459)>>x4460);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x4497 = INT64_MIN;
	uint8_t x4499 = 0U;
	volatile int8_t x4500 = 2;

    t141 = (((x4497^x4498)==x4499)>>x4500);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int8_t x4517 = -1;
	uint8_t x4518 = 8U;
	int64_t x4519 = -21151LL;
	static int32_t t142 = -8813597;

    t142 = (((x4517^x4518)==x4519)>>x4520);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x4534 = INT64_MIN;
	int32_t x4535 = INT32_MIN;
	volatile int8_t x4536 = 24;
	volatile int32_t t143 = -63323;

    t143 = (((x4533^x4534)==x4535)>>x4536);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x4577 = INT64_MAX;
	uint8_t x4578 = 3U;
	int8_t x4579 = INT8_MIN;
	static volatile int8_t x4580 = 1;
	int32_t t144 = 1997;

    t144 = (((x4577^x4578)==x4579)>>x4580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x4606 = 0;
	volatile uint64_t x4607 = UINT64_MAX;
	static uint32_t x4608 = 0U;
	int32_t t145 = 1;

    t145 = (((x4605^x4606)==x4607)>>x4608);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x4633 = 0U;
	int16_t x4634 = INT16_MAX;
	int8_t x4635 = -1;
	static int16_t x4636 = 4;
	volatile int32_t t146 = -9;

    t146 = (((x4633^x4634)==x4635)>>x4636);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x4678 = -1;
	int32_t x4679 = 3816857;
	uint16_t x4680 = 0U;
	int32_t t147 = -1141447;

    t147 = (((x4677^x4678)==x4679)>>x4680);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x4701 = 79685;
	uint32_t x4702 = 28522U;
	volatile uint8_t x4704 = 20U;
	volatile int32_t t148 = 37;

    t148 = (((x4701^x4702)==x4703)>>x4704);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x4706 = INT32_MIN;
	volatile int32_t x4707 = -1;
	int32_t t149 = -4211586;

    t149 = (((x4705^x4706)==x4707)>>x4708);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x4917 = 6133732077066272782LLU;
	static int32_t x4918 = INT32_MIN;
	static uint8_t x4920 = 29U;
	int32_t t150 = -104;

    t150 = (((x4917^x4918)==x4919)>>x4920);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x4997 = UINT16_MAX;
	uint16_t x4999 = 19U;
	volatile uint8_t x5000 = 4U;
	int32_t t151 = 57712;

    t151 = (((x4997^x4998)==x4999)>>x5000);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x5021 = 21;
	int16_t x5022 = -117;
	int64_t x5023 = -1LL;
	uint8_t x5024 = 17U;
	static volatile int32_t t152 = 549367959;

    t152 = (((x5021^x5022)==x5023)>>x5024);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x5045 = -2;
	volatile uint64_t x5046 = 178548992575LLU;
	int8_t x5047 = INT8_MIN;
	uint16_t x5048 = 1U;
	static int32_t t153 = -625573695;

    t153 = (((x5045^x5046)==x5047)>>x5048);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x5069 = -1;
	volatile int8_t x5070 = INT8_MIN;
	int16_t x5072 = 13;
	volatile int32_t t154 = 103265;

    t154 = (((x5069^x5070)==x5071)>>x5072);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x5085 = 45U;
	int32_t x5087 = 41;
	int32_t x5088 = 22;
	volatile int32_t t155 = 458477;

    t155 = (((x5085^x5086)==x5087)>>x5088);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x5089 = -22LL;
	volatile int8_t x5090 = -1;
	uint8_t x5091 = UINT8_MAX;
	volatile int32_t t156 = 14943;

    t156 = (((x5089^x5090)==x5091)>>x5092);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x5141 = INT64_MAX;
	static int16_t x5142 = 6;
	int64_t x5143 = INT64_MIN;
	int8_t x5144 = 0;
	int32_t t157 = 1;

    t157 = (((x5141^x5142)==x5143)>>x5144);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x5157 = 242547729U;
	volatile int64_t x5159 = INT64_MAX;
	static uint8_t x5160 = 7U;
	volatile int32_t t158 = -1362;

    t158 = (((x5157^x5158)==x5159)>>x5160);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int8_t x5169 = -1;
	int32_t x5170 = INT32_MIN;
	uint8_t x5171 = 1U;
	uint8_t x5172 = 2U;
	static volatile int32_t t159 = 505068299;

    t159 = (((x5169^x5170)==x5171)>>x5172);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x5209 = INT16_MAX;
	int8_t x5210 = -1;
	int8_t x5211 = INT8_MIN;
	volatile int32_t t160 = 14950;

    t160 = (((x5209^x5210)==x5211)>>x5212);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x5225 = UINT8_MAX;
	uint16_t x5226 = 3U;
	int16_t x5227 = -12;
	uint16_t x5228 = 2U;
	volatile int32_t t161 = 25388903;

    t161 = (((x5225^x5226)==x5227)>>x5228);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x5265 = INT8_MIN;
	int32_t x5267 = INT32_MIN;
	volatile int16_t x5268 = 0;

    t162 = (((x5265^x5266)==x5267)>>x5268);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x5381 = INT64_MIN;
	volatile int8_t x5382 = -1;
	uint8_t x5383 = 2U;
	volatile uint16_t x5384 = 8U;
	int32_t t163 = 3715;

    t163 = (((x5381^x5382)==x5383)>>x5384);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x5409 = INT8_MAX;
	static volatile int16_t x5410 = -1;
	volatile uint8_t x5412 = 1U;
	int32_t t164 = -19;

    t164 = (((x5409^x5410)==x5411)>>x5412);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x5425 = INT16_MIN;
	int16_t x5426 = INT16_MIN;
	int16_t x5427 = INT16_MIN;
	volatile uint16_t x5428 = 3U;

    t165 = (((x5425^x5426)==x5427)>>x5428);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x5493 = INT64_MIN;
	uint32_t x5495 = UINT32_MAX;
	int8_t x5496 = 0;

    t166 = (((x5493^x5494)==x5495)>>x5496);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x5497 = -58;
	uint16_t x5498 = 6604U;
	volatile uint16_t x5499 = UINT16_MAX;
	uint16_t x5500 = 1U;
	static volatile int32_t t167 = 253;

    t167 = (((x5497^x5498)==x5499)>>x5500);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x5501 = -1;
	int64_t x5503 = INT64_MAX;
	volatile int32_t t168 = 539;

    t168 = (((x5501^x5502)==x5503)>>x5504);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x5557 = INT8_MIN;
	volatile uint16_t x5558 = 16317U;
	uint16_t x5559 = 15U;
	int16_t x5560 = 15;
	int32_t t169 = 984598;

    t169 = (((x5557^x5558)==x5559)>>x5560);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x5565 = INT8_MIN;
	int64_t x5567 = INT64_MIN;
	static uint16_t x5568 = 31U;
	int32_t t170 = -394;

    t170 = (((x5565^x5566)==x5567)>>x5568);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x5601 = -1;
	uint64_t x5602 = 1343711950658LLU;
	int16_t x5603 = -1697;
	volatile int32_t t171 = 13302;

    t171 = (((x5601^x5602)==x5603)>>x5604);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x5605 = 4852329U;
	static int32_t x5606 = -27967939;
	static uint16_t x5607 = UINT16_MAX;
	int16_t x5608 = 7;

    t172 = (((x5605^x5606)==x5607)>>x5608);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x5613 = 19014638;
	uint64_t x5615 = UINT64_MAX;
	int32_t t173 = -993;

    t173 = (((x5613^x5614)==x5615)>>x5616);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint8_t x5649 = 14U;
	uint8_t x5650 = 5U;
	volatile int32_t t174 = -28;

    t174 = (((x5649^x5650)==x5651)>>x5652);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x5653 = UINT32_MAX;
	int64_t x5654 = 29089446195167917LL;
	int8_t x5656 = 17;
	int32_t t175 = -742830;

    t175 = (((x5653^x5654)==x5655)>>x5656);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x5670 = -1;
	int16_t x5672 = 0;
	int32_t t176 = -2;

    t176 = (((x5669^x5670)==x5671)>>x5672);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x5737 = 86139;
	uint16_t x5738 = UINT16_MAX;
	uint32_t x5739 = UINT32_MAX;
	volatile uint8_t x5740 = 10U;
	static volatile int32_t t177 = -7187;

    t177 = (((x5737^x5738)==x5739)>>x5740);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x5742 = 900016677875871LLU;
	static volatile int8_t x5743 = INT8_MIN;
	uint8_t x5744 = 10U;
	static volatile int32_t t178 = 803637853;

    t178 = (((x5741^x5742)==x5743)>>x5744);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x5765 = INT8_MAX;
	int32_t x5766 = INT32_MIN;
	static int8_t x5767 = INT8_MIN;
	uint16_t x5768 = 13U;
	volatile int32_t t179 = 57;

    t179 = (((x5765^x5766)==x5767)>>x5768);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x5837 = 4;
	int64_t x5838 = -1LL;
	static int32_t t180 = -9368;

    t180 = (((x5837^x5838)==x5839)>>x5840);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x5869 = 2931;
	volatile int64_t x5870 = -24LL;
	int32_t x5871 = INT32_MAX;
	static int8_t x5872 = 13;
	static int32_t t181 = 41;

    t181 = (((x5869^x5870)==x5871)>>x5872);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x5961 = 7;
	int16_t x5962 = INT16_MIN;
	uint16_t x5963 = 0U;
	uint8_t x5964 = 2U;
	static volatile int32_t t182 = 845;

    t182 = (((x5961^x5962)==x5963)>>x5964);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x5993 = INT16_MIN;
	int32_t x5994 = -34;
	int8_t x5995 = 13;
	volatile uint8_t x5996 = 10U;
	int32_t t183 = -12593;

    t183 = (((x5993^x5994)==x5995)>>x5996);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x6125 = 13LLU;
	int64_t x6126 = 11367190335660LL;
	int16_t x6127 = INT16_MIN;
	int8_t x6128 = 13;
	volatile int32_t t184 = 1004;

    t184 = (((x6125^x6126)==x6127)>>x6128);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x6149 = -1;
	int16_t x6151 = INT16_MIN;
	int8_t x6152 = 2;
	int32_t t185 = -98;

    t185 = (((x6149^x6150)==x6151)>>x6152);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x6213 = INT32_MIN;
	uint32_t x6214 = 46095802U;
	int8_t x6215 = INT8_MAX;
	int32_t x6216 = 10;

    t186 = (((x6213^x6214)==x6215)>>x6216);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x6222 = 0;
	volatile int16_t x6223 = -1;
	volatile uint8_t x6224 = 27U;

    t187 = (((x6221^x6222)==x6223)>>x6224);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x6266 = 152773665185458292LLU;
	uint32_t x6267 = 498844401U;
	int8_t x6268 = 1;
	volatile int32_t t188 = -190245806;

    t188 = (((x6265^x6266)==x6267)>>x6268);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x6285 = INT64_MIN;
	static int16_t x6286 = INT16_MIN;
	int8_t x6287 = -30;
	uint16_t x6288 = 1U;
	static int32_t t189 = 19169595;

    t189 = (((x6285^x6286)==x6287)>>x6288);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x6289 = 258;
	uint64_t x6290 = 832395451LLU;
	volatile uint8_t x6291 = 26U;

    t190 = (((x6289^x6290)==x6291)>>x6292);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int64_t x6297 = -1LL;
	static int16_t x6299 = -1;
	uint16_t x6300 = 3U;
	int32_t t191 = 1;

    t191 = (((x6297^x6298)==x6299)>>x6300);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x6343 = -1LL;
	int32_t x6344 = 1;
	volatile int32_t t192 = -239;

    t192 = (((x6341^x6342)==x6343)>>x6344);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x6351 = UINT64_MAX;
	uint8_t x6352 = 10U;
	volatile int32_t t193 = -219346;

    t193 = (((x6349^x6350)==x6351)>>x6352);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x6362 = 25;
	static int8_t x6364 = 0;

    t194 = (((x6361^x6362)==x6363)>>x6364);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x6369 = INT16_MAX;
	int8_t x6372 = 2;

    t195 = (((x6369^x6370)==x6371)>>x6372);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x6373 = -1;
	int16_t x6374 = INT16_MAX;

    t196 = (((x6373^x6374)==x6375)>>x6376);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x6393 = INT8_MIN;
	uint64_t x6394 = 427650LLU;
	volatile uint32_t x6396 = 13U;

    t197 = (((x6393^x6394)==x6395)>>x6396);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x6405 = -1;
	int64_t x6406 = 4282LL;
	static volatile int16_t x6407 = INT16_MIN;
	volatile uint16_t x6408 = 1U;
	volatile int32_t t198 = -6717542;

    t198 = (((x6405^x6406)==x6407)>>x6408);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x6441 = 3LLU;
	static int8_t x6442 = INT8_MAX;
	int16_t x6444 = 14;
	int32_t t199 = 0;

    t199 = (((x6441^x6442)==x6443)>>x6444);

    if (t199 != 0) { NG(); } else { ; }
	
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


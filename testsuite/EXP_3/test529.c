
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

int16_t x85 = INT16_MAX;
int64_t x115 = 1LL;
static uint8_t x116 = 13U;
volatile int32_t x125 = 754726489;
static volatile int8_t x127 = 0;
int8_t x145 = INT8_MAX;
int8_t x241 = INT8_MIN;
int16_t x291 = 0;
int16_t x306 = -1;
int32_t t9 = 9;
volatile uint64_t x673 = UINT64_MAX;
int32_t x674 = 1595843;
int64_t x713 = -1LL;
uint16_t x715 = UINT16_MAX;
int64_t x729 = 8956734235LL;
int32_t t15 = -407935703;
volatile int32_t x849 = -1;
static volatile uint16_t x881 = 2705U;
uint8_t x924 = 15U;
static uint32_t x1006 = UINT32_MAX;
int32_t t21 = 1;
int64_t x1015 = -1LL;
volatile int32_t t22 = -653071616;
int32_t x1109 = 1007707580;
int32_t x1111 = INT32_MAX;
int32_t x1115 = INT32_MIN;
int64_t x1319 = INT64_MIN;
volatile int32_t t28 = 0;
int64_t x1341 = INT64_MIN;
int32_t t29 = 0;
int32_t t30 = 58;
volatile int32_t t31 = 230;
volatile uint32_t x1432 = UINT32_MAX;
int32_t x1449 = INT32_MAX;
int32_t t34 = 31195431;
uint32_t x1490 = 620U;
volatile int32_t t36 = 1;
volatile uint32_t x1525 = 43443U;
int32_t t40 = 8;
int64_t x1595 = -4LL;
volatile int32_t t42 = 5;
int8_t x1679 = -1;
uint64_t x1701 = UINT64_MAX;
int64_t x1730 = -1LL;
int64_t x1773 = 55273067080298415LL;
int32_t t47 = -1;
static int32_t t48 = -83;
static uint8_t x1809 = 0U;
static int64_t x1850 = 1946823654631128066LL;
static volatile int32_t t52 = -3430;
int8_t x1907 = 0;
uint16_t x1932 = UINT16_MAX;
int32_t x1935 = 0;
volatile int32_t t55 = 452254;
int32_t x1946 = INT32_MAX;
volatile int32_t t56 = -6;
int64_t x1951 = -1LL;
volatile int32_t t58 = 4374402;
int32_t x2013 = INT32_MAX;
int8_t x2016 = -1;
static int16_t x2060 = -1295;
int64_t x2069 = 956806159079922LL;
static int16_t x2073 = -1;
uint8_t x2111 = 0U;
int32_t t64 = 311166;
static volatile int32_t t65 = -366374;
int32_t x2273 = INT32_MIN;
volatile int64_t x2274 = INT64_MIN;
volatile int32_t t67 = 29893;
volatile int32_t x2289 = -7442;
static int64_t x2291 = -1LL;
static int64_t x2297 = -1LL;
int8_t x2308 = 0;
static int32_t x2311 = INT32_MIN;
static volatile int32_t t72 = 452615215;
int8_t x2337 = INT8_MAX;
int32_t x2397 = -4693;
int32_t x2505 = 55;
volatile int32_t t75 = -296127;
int64_t x2536 = INT64_MIN;
int64_t x2609 = -1LL;
int64_t x2612 = -1LL;
int8_t x2654 = -12;
int32_t t80 = -312612;
static uint8_t x2693 = 1U;
volatile int8_t x2696 = -1;
static volatile int32_t t81 = -5;
static uint16_t x2728 = 0U;
int16_t x2749 = -1;
static uint8_t x2751 = 1U;
uint8_t x2752 = 0U;
int16_t x2781 = INT16_MIN;
int8_t x2833 = INT8_MAX;
int32_t x2873 = 1;
volatile int32_t t86 = 3232292;
int8_t x3057 = INT8_MAX;
uint64_t x3058 = UINT64_MAX;
int64_t x3060 = INT64_MIN;
static volatile int32_t t91 = -117537083;
uint32_t x3117 = 118792U;
static volatile int16_t x3120 = -1;
int32_t x3125 = -1;
uint32_t x3126 = 133U;
volatile int32_t t96 = -1;
int32_t t97 = 65869;
int32_t x3326 = -162336;
int16_t x3345 = -1;
int32_t t101 = 224;
int16_t x3441 = -9;
uint64_t x3455 = 2LLU;
uint16_t x3477 = 1U;
uint16_t x3561 = 550U;
int16_t x3813 = INT16_MIN;
int64_t x3816 = -1LL;
int32_t t111 = -1;
uint64_t x4031 = 2200LLU;
volatile int8_t x4048 = -1;
int32_t t116 = 0;
static uint16_t x4053 = UINT16_MAX;
static int32_t t117 = -19623;
int64_t x4083 = INT64_MIN;
int32_t t121 = 16299441;
int16_t x4177 = -1;
volatile int32_t t122 = -172099098;
int8_t x4258 = INT8_MIN;
static uint8_t x4405 = UINT8_MAX;
static int32_t x4406 = 48254763;
int16_t x4424 = -1;
volatile int32_t t128 = 1;
volatile uint32_t x4479 = UINT32_MAX;
int8_t x4564 = -1;
volatile int32_t t131 = -12;
int16_t x4621 = INT16_MIN;
int8_t x4662 = -1;
int16_t x4730 = INT16_MIN;
int32_t t135 = 40643;
static volatile int32_t x4734 = INT32_MIN;
uint64_t x4764 = UINT64_MAX;
volatile int16_t x4777 = 0;
int32_t t138 = -20;
uint16_t x4819 = 6U;
int8_t x4820 = 0;
volatile int32_t t140 = 471517919;
int64_t x4868 = -1LL;
static int64_t x4906 = INT64_MAX;
int16_t x4907 = -1;
static int32_t t142 = -85152;
volatile uint64_t x4930 = 15450160372399LLU;
volatile int16_t x4984 = -1;
int32_t t145 = -1;
volatile int64_t x5060 = -1LL;
int32_t x5107 = 2;
int8_t x5108 = 4;
int16_t x5134 = 0;
int8_t x5239 = -1;
static int32_t t152 = -42647;
uint64_t x5338 = UINT64_MAX;
static int8_t x5340 = -1;
int32_t t153 = -860200255;
int16_t x5362 = INT16_MAX;
int64_t x5397 = INT64_MIN;
uint64_t x5399 = 28682219336302390LLU;
int64_t x5405 = -1LL;
int32_t x5408 = -6;
volatile int32_t t156 = 437872;
volatile int32_t t157 = -115243485;
static int32_t t159 = 20391;
int8_t x5515 = 7;
int32_t t161 = 94;
int32_t x5718 = -1;
int8_t x5743 = -14;
int32_t x5744 = -1;
int32_t x5798 = 5127;
uint16_t x5801 = 7U;
int32_t x5869 = INT32_MIN;
volatile int8_t x5888 = -1;
int32_t t171 = 148189453;
int32_t t172 = -4430075;
volatile int32_t t179 = -232460846;
volatile uint32_t x6258 = 3186447U;
static uint64_t x6283 = UINT64_MAX;
uint32_t x6386 = 448276U;
volatile uint16_t x6409 = 1U;
volatile int32_t t188 = -4;
volatile int16_t x6441 = 152;
int32_t x6477 = 0;
int32_t t192 = 1;
uint16_t x6497 = 124U;
volatile uint16_t x6499 = UINT16_MAX;
volatile uint64_t x6503 = UINT64_MAX;
uint16_t x6639 = 10U;
int8_t x6641 = INT8_MAX;
static uint64_t x6642 = UINT64_MAX;
int32_t t198 = -2264;
int32_t t199 = -2;


void f0(void) {
    	static int64_t x86 = -26046LL;
	int32_t x87 = -660;
	uint8_t x88 = 0U;
	int32_t t0 = 0;

    t0 = ((x85<=x86)>>(x87*x88));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x113 = 121965LLU;
	uint64_t x114 = 2559LLU;
	int32_t t1 = 15141;

    t1 = ((x113<=x114)>>(x115*x116));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x126 = -1;
	uint32_t x128 = 23773U;
	int32_t t2 = -57;

    t2 = ((x125<=x126)>>(x127*x128));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x146 = INT64_MAX;
	volatile uint8_t x147 = UINT8_MAX;
	static int8_t x148 = 0;
	int32_t t3 = -3816;

    t3 = ((x145<=x146)>>(x147*x148));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x217 = INT32_MIN;
	uint32_t x218 = 4U;
	int8_t x219 = 0;
	uint64_t x220 = UINT64_MAX;
	volatile int32_t t4 = 23523590;

    t4 = ((x217<=x218)>>(x219*x220));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x242 = INT8_MIN;
	int16_t x243 = -1;
	int8_t x244 = -1;
	volatile int32_t t5 = 1;

    t5 = ((x241<=x242)>>(x243*x244));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x273 = INT64_MAX;
	int16_t x274 = 0;
	int64_t x275 = INT64_MIN;
	volatile uint8_t x276 = 0U;
	int32_t t6 = 14130364;

    t6 = ((x273<=x274)>>(x275*x276));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x289 = 1651U;
	int16_t x290 = INT16_MIN;
	int8_t x292 = -1;
	volatile int32_t t7 = -31652815;

    t7 = ((x289<=x290)>>(x291*x292));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x305 = 14LL;
	uint64_t x307 = 15814576LLU;
	int64_t x308 = INT64_MIN;
	volatile int32_t t8 = 13;

    t8 = ((x305<=x306)>>(x307*x308));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x421 = UINT32_MAX;
	int32_t x422 = -1;
	volatile uint8_t x423 = 6U;
	uint8_t x424 = 4U;

    t9 = ((x421<=x422)>>(x423*x424));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x513 = -8318426LL;
	volatile int32_t x514 = INT32_MIN;
	static int64_t x515 = INT64_MAX;
	static uint32_t x516 = 0U;
	volatile int32_t t10 = 785407987;

    t10 = ((x513<=x514)>>(x515*x516));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x577 = 1081U;
	uint64_t x578 = UINT64_MAX;
	static int8_t x579 = -1;
	int16_t x580 = -1;
	int32_t t11 = -726;

    t11 = ((x577<=x578)>>(x579*x580));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int8_t x657 = INT8_MIN;
	int32_t x658 = -1;
	volatile int8_t x659 = 0;
	int16_t x660 = INT16_MIN;
	static int32_t t12 = -16540;

    t12 = ((x657<=x658)>>(x659*x660));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x675 = -1;
	uint32_t x676 = UINT32_MAX;
	volatile int32_t t13 = 705;

    t13 = ((x673<=x674)>>(x675*x676));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x714 = -1;
	uint8_t x716 = 0U;
	volatile int32_t t14 = 28732;

    t14 = ((x713<=x714)>>(x715*x716));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x730 = INT64_MAX;
	volatile uint32_t x731 = 0U;
	static int8_t x732 = -6;

    t15 = ((x729<=x730)>>(x731*x732));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x809 = INT8_MIN;
	static int8_t x810 = INT8_MIN;
	uint8_t x811 = UINT8_MAX;
	int8_t x812 = 0;
	volatile int32_t t16 = 0;

    t16 = ((x809<=x810)>>(x811*x812));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x850 = INT64_MAX;
	uint32_t x851 = 0U;
	uint8_t x852 = UINT8_MAX;
	static int32_t t17 = 182;

    t17 = ((x849<=x850)>>(x851*x852));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x882 = 1553U;
	int64_t x883 = INT64_MIN;
	uint8_t x884 = 0U;
	volatile int32_t t18 = 1;

    t18 = ((x881<=x882)>>(x883*x884));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x921 = INT8_MIN;
	int16_t x922 = -1;
	uint64_t x923 = 2LLU;
	volatile int32_t t19 = -29;

    t19 = ((x921<=x922)>>(x923*x924));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x969 = 3395U;
	int32_t x970 = -802350;
	int32_t x971 = INT32_MAX;
	volatile int8_t x972 = 0;
	int32_t t20 = 3776;

    t20 = ((x969<=x970)>>(x971*x972));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x1005 = 4;
	volatile uint64_t x1007 = UINT64_MAX;
	volatile int64_t x1008 = -1LL;

    t21 = ((x1005<=x1006)>>(x1007*x1008));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint8_t x1013 = UINT8_MAX;
	int64_t x1014 = 280LL;
	static int8_t x1016 = -1;

    t22 = ((x1013<=x1014)>>(x1015*x1016));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x1105 = UINT32_MAX;
	static int64_t x1106 = -1LL;
	static int64_t x1107 = -1LL;
	uint64_t x1108 = UINT64_MAX;
	static int32_t t23 = 839202703;

    t23 = ((x1105<=x1106)>>(x1107*x1108));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x1110 = -1LL;
	static volatile uint8_t x1112 = 0U;
	volatile int32_t t24 = 533220304;

    t24 = ((x1109<=x1110)>>(x1111*x1112));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint32_t x1113 = 1939281U;
	uint16_t x1114 = 6305U;
	int64_t x1116 = 0LL;
	volatile int32_t t25 = 16;

    t25 = ((x1113<=x1114)>>(x1115*x1116));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x1185 = -4;
	static int32_t x1186 = INT32_MIN;
	volatile uint64_t x1187 = UINT64_MAX;
	int32_t x1188 = -1;
	volatile int32_t t26 = 73881331;

    t26 = ((x1185<=x1186)>>(x1187*x1188));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x1189 = UINT16_MAX;
	uint64_t x1190 = 41743400006LLU;
	static int32_t x1191 = -1;
	uint32_t x1192 = UINT32_MAX;
	int32_t t27 = -42730;

    t27 = ((x1189<=x1190)>>(x1191*x1192));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x1317 = INT64_MIN;
	uint64_t x1318 = 0LLU;
	uint64_t x1320 = 326070580LLU;

    t28 = ((x1317<=x1318)>>(x1319*x1320));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x1342 = -1;
	uint16_t x1343 = 12U;
	uint8_t x1344 = 0U;

    t29 = ((x1341<=x1342)>>(x1343*x1344));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x1365 = INT32_MIN;
	volatile uint8_t x1366 = UINT8_MAX;
	uint8_t x1367 = 0U;
	volatile int16_t x1368 = 4;

    t30 = ((x1365<=x1366)>>(x1367*x1368));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x1385 = INT32_MIN;
	uint16_t x1386 = 915U;
	static uint32_t x1387 = 0U;
	int16_t x1388 = INT16_MIN;

    t31 = ((x1385<=x1386)>>(x1387*x1388));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x1425 = -11101;
	static int16_t x1426 = INT16_MIN;
	uint8_t x1427 = 1U;
	volatile uint32_t x1428 = 0U;
	int32_t t32 = 211;

    t32 = ((x1425<=x1426)>>(x1427*x1428));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x1429 = 3592;
	int16_t x1430 = INT16_MIN;
	int8_t x1431 = -1;
	volatile int32_t t33 = -362263;

    t33 = ((x1429<=x1430)>>(x1431*x1432));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x1450 = 5;
	volatile int64_t x1451 = -17LL;
	int32_t x1452 = -1;

    t34 = ((x1449<=x1450)>>(x1451*x1452));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x1473 = -6318447;
	static uint16_t x1474 = 4U;
	int8_t x1475 = -19;
	uint32_t x1476 = UINT32_MAX;
	static volatile int32_t t35 = -903374037;

    t35 = ((x1473<=x1474)>>(x1475*x1476));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x1489 = INT64_MAX;
	static int64_t x1491 = -3LL;
	static uint64_t x1492 = UINT64_MAX;

    t36 = ((x1489<=x1490)>>(x1491*x1492));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x1526 = -1LL;
	int32_t x1527 = INT32_MIN;
	uint16_t x1528 = 0U;
	volatile int32_t t37 = -11;

    t37 = ((x1525<=x1526)>>(x1527*x1528));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x1533 = -1LL;
	volatile int8_t x1534 = 2;
	int64_t x1535 = -1LL;
	int16_t x1536 = -1;
	static volatile int32_t t38 = 46112673;

    t38 = ((x1533<=x1534)>>(x1535*x1536));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x1537 = UINT16_MAX;
	volatile int8_t x1538 = INT8_MIN;
	uint16_t x1539 = UINT16_MAX;
	int32_t x1540 = 0;
	int32_t t39 = 477990147;

    t39 = ((x1537<=x1538)>>(x1539*x1540));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x1569 = INT64_MIN;
	static uint16_t x1570 = 2U;
	int32_t x1571 = -30;
	uint32_t x1572 = UINT32_MAX;

    t40 = ((x1569<=x1570)>>(x1571*x1572));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x1585 = 598231393;
	static int32_t x1586 = -1;
	int32_t x1587 = INT32_MAX;
	volatile int8_t x1588 = 0;
	int32_t t41 = -485661241;

    t41 = ((x1585<=x1586)>>(x1587*x1588));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x1593 = 29543044106586990LLU;
	static volatile int32_t x1594 = INT32_MIN;
	int32_t x1596 = -1;

    t42 = ((x1593<=x1594)>>(x1595*x1596));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x1677 = 1LLU;
	int64_t x1678 = -1LL;
	static int16_t x1680 = -1;
	int32_t t43 = 142132;

    t43 = ((x1677<=x1678)>>(x1679*x1680));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x1689 = INT8_MIN;
	uint8_t x1690 = 47U;
	int64_t x1691 = -1LL;
	int32_t x1692 = -1;
	static int32_t t44 = -823;

    t44 = ((x1689<=x1690)>>(x1691*x1692));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x1702 = INT32_MIN;
	static volatile uint64_t x1703 = UINT64_MAX;
	int64_t x1704 = -1LL;
	int32_t t45 = -121995634;

    t45 = ((x1701<=x1702)>>(x1703*x1704));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x1729 = -1;
	static int32_t x1731 = -1;
	int8_t x1732 = -1;
	int32_t t46 = -838;

    t46 = ((x1729<=x1730)>>(x1731*x1732));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x1774 = -24678721;
	int64_t x1775 = -1LL;
	static int8_t x1776 = -1;

    t47 = ((x1773<=x1774)>>(x1775*x1776));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x1785 = INT8_MAX;
	int32_t x1786 = INT32_MIN;
	uint64_t x1787 = UINT64_MAX;
	int32_t x1788 = -1;

    t48 = ((x1785<=x1786)>>(x1787*x1788));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x1810 = 24;
	static int32_t x1811 = INT32_MIN;
	int16_t x1812 = 0;
	volatile int32_t t49 = -37;

    t49 = ((x1809<=x1810)>>(x1811*x1812));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x1845 = INT16_MAX;
	volatile int8_t x1846 = INT8_MIN;
	int8_t x1847 = -13;
	int64_t x1848 = -1LL;
	volatile int32_t t50 = -336509;

    t50 = ((x1845<=x1846)>>(x1847*x1848));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x1849 = 648U;
	static int8_t x1851 = -1;
	int8_t x1852 = -1;
	volatile int32_t t51 = -19706361;

    t51 = ((x1849<=x1850)>>(x1851*x1852));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x1881 = 13478761U;
	int8_t x1882 = INT8_MAX;
	uint8_t x1883 = 8U;
	volatile int8_t x1884 = 3;

    t52 = ((x1881<=x1882)>>(x1883*x1884));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x1905 = -3984;
	int32_t x1906 = INT32_MAX;
	static uint8_t x1908 = UINT8_MAX;
	int32_t t53 = -1806218;

    t53 = ((x1905<=x1906)>>(x1907*x1908));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x1929 = INT8_MIN;
	static uint16_t x1930 = 2880U;
	int8_t x1931 = 0;
	volatile int32_t t54 = -227254111;

    t54 = ((x1929<=x1930)>>(x1931*x1932));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x1933 = -23;
	int16_t x1934 = INT16_MIN;
	int16_t x1936 = INT16_MIN;

    t55 = ((x1933<=x1934)>>(x1935*x1936));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x1945 = -1;
	static volatile uint8_t x1947 = 0U;
	int16_t x1948 = -10522;

    t56 = ((x1945<=x1946)>>(x1947*x1948));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x1949 = INT16_MAX;
	int32_t x1950 = -1;
	volatile int8_t x1952 = -1;
	volatile int32_t t57 = 16294;

    t57 = ((x1949<=x1950)>>(x1951*x1952));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x1977 = 11U;
	int8_t x1978 = -1;
	static volatile int64_t x1979 = INT64_MAX;
	int8_t x1980 = 0;

    t58 = ((x1977<=x1978)>>(x1979*x1980));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x1985 = UINT16_MAX;
	int32_t x1986 = INT32_MAX;
	uint64_t x1987 = 0LLU;
	static volatile uint64_t x1988 = UINT64_MAX;
	int32_t t59 = -96922742;

    t59 = ((x1985<=x1986)>>(x1987*x1988));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x2014 = INT32_MIN;
	int8_t x2015 = -1;
	int32_t t60 = 652874739;

    t60 = ((x2013<=x2014)>>(x2015*x2016));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x2057 = INT64_MIN;
	uint8_t x2058 = 1U;
	uint16_t x2059 = 0U;
	volatile int32_t t61 = -183;

    t61 = ((x2057<=x2058)>>(x2059*x2060));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x2070 = INT16_MIN;
	int64_t x2071 = -1LL;
	static volatile uint64_t x2072 = UINT64_MAX;
	volatile int32_t t62 = 0;

    t62 = ((x2069<=x2070)>>(x2071*x2072));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x2074 = 641891LLU;
	int16_t x2075 = -1;
	int8_t x2076 = -1;
	static volatile int32_t t63 = 10387;

    t63 = ((x2073<=x2074)>>(x2075*x2076));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x2109 = INT32_MAX;
	int64_t x2110 = INT64_MIN;
	static int16_t x2112 = 3;

    t64 = ((x2109<=x2110)>>(x2111*x2112));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x2117 = 7;
	static uint32_t x2118 = 1255411388U;
	static int16_t x2119 = INT16_MAX;
	int8_t x2120 = 0;

    t65 = ((x2117<=x2118)>>(x2119*x2120));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x2121 = 84U;
	int8_t x2122 = INT8_MAX;
	volatile int8_t x2123 = 1;
	volatile uint8_t x2124 = 17U;
	volatile int32_t t66 = -12060026;

    t66 = ((x2121<=x2122)>>(x2123*x2124));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x2275 = -1LL;
	int16_t x2276 = -4;

    t67 = ((x2273<=x2274)>>(x2275*x2276));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x2290 = 3U;
	int8_t x2292 = -1;
	volatile int32_t t68 = 10;

    t68 = ((x2289<=x2290)>>(x2291*x2292));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x2293 = 85142216091089868LLU;
	static int16_t x2294 = INT16_MIN;
	static int8_t x2295 = -25;
	uint32_t x2296 = UINT32_MAX;
	volatile int32_t t69 = 1832106;

    t69 = ((x2293<=x2294)>>(x2295*x2296));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x2298 = 9U;
	volatile uint32_t x2299 = 0U;
	int16_t x2300 = -1;
	int32_t t70 = 3804225;

    t70 = ((x2297<=x2298)>>(x2299*x2300));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x2305 = INT64_MIN;
	volatile uint64_t x2306 = UINT64_MAX;
	uint16_t x2307 = UINT16_MAX;
	static int32_t t71 = 57990;

    t71 = ((x2305<=x2306)>>(x2307*x2308));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x2309 = INT64_MAX;
	volatile int8_t x2310 = INT8_MIN;
	uint16_t x2312 = 0U;

    t72 = ((x2309<=x2310)>>(x2311*x2312));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x2338 = UINT64_MAX;
	volatile int32_t x2339 = -29;
	static int32_t x2340 = -1;
	volatile int32_t t73 = -644;

    t73 = ((x2337<=x2338)>>(x2339*x2340));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x2398 = -13;
	int64_t x2399 = -1LL;
	static int8_t x2400 = -1;
	volatile int32_t t74 = 31747;

    t74 = ((x2397<=x2398)>>(x2399*x2400));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x2506 = INT64_MIN;
	uint32_t x2507 = 11U;
	uint8_t x2508 = 1U;

    t75 = ((x2505<=x2506)>>(x2507*x2508));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x2513 = -1;
	uint16_t x2514 = 1U;
	volatile int32_t x2515 = -1;
	int64_t x2516 = -1LL;
	volatile int32_t t76 = -288538592;

    t76 = ((x2513<=x2514)>>(x2515*x2516));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int8_t x2533 = -1;
	volatile uint32_t x2534 = UINT32_MAX;
	int8_t x2535 = 0;
	int32_t t77 = -1;

    t77 = ((x2533<=x2534)>>(x2535*x2536));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x2610 = 1455U;
	static int16_t x2611 = -1;
	static volatile int32_t t78 = -41944415;

    t78 = ((x2609<=x2610)>>(x2611*x2612));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x2653 = INT32_MIN;
	uint16_t x2655 = UINT16_MAX;
	volatile int8_t x2656 = 0;
	volatile int32_t t79 = -22361270;

    t79 = ((x2653<=x2654)>>(x2655*x2656));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x2673 = -13;
	static int8_t x2674 = INT8_MAX;
	static volatile int16_t x2675 = -1;
	int16_t x2676 = -3;

    t80 = ((x2673<=x2674)>>(x2675*x2676));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x2694 = INT8_MIN;
	int8_t x2695 = 0;

    t81 = ((x2693<=x2694)>>(x2695*x2696));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x2725 = -3;
	volatile int8_t x2726 = -13;
	uint32_t x2727 = 687221U;
	int32_t t82 = 171117;

    t82 = ((x2725<=x2726)>>(x2727*x2728));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x2750 = 60953U;
	int32_t t83 = -12;

    t83 = ((x2749<=x2750)>>(x2751*x2752));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x2782 = UINT8_MAX;
	uint8_t x2783 = 6U;
	volatile int64_t x2784 = 0LL;
	int32_t t84 = 354597;

    t84 = ((x2781<=x2782)>>(x2783*x2784));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x2834 = 922759LLU;
	int32_t x2835 = -1;
	static int16_t x2836 = -1;
	static int32_t t85 = 53;

    t85 = ((x2833<=x2834)>>(x2835*x2836));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x2874 = -1;
	int16_t x2875 = -1;
	int8_t x2876 = -1;

    t86 = ((x2873<=x2874)>>(x2875*x2876));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x2993 = 2U;
	int64_t x2994 = -1LL;
	uint8_t x2995 = 0U;
	static uint16_t x2996 = UINT16_MAX;
	int32_t t87 = 1699351;

    t87 = ((x2993<=x2994)>>(x2995*x2996));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x3037 = INT64_MAX;
	volatile int16_t x3038 = INT16_MAX;
	static uint32_t x3039 = UINT32_MAX;
	volatile int32_t x3040 = -1;
	int32_t t88 = -3587116;

    t88 = ((x3037<=x3038)>>(x3039*x3040));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x3059 = 1950644826648LLU;
	int32_t t89 = 2;

    t89 = ((x3057<=x3058)>>(x3059*x3060));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x3061 = 6;
	int8_t x3062 = -1;
	int16_t x3063 = -1;
	volatile int32_t x3064 = -1;
	int32_t t90 = -936;

    t90 = ((x3061<=x3062)>>(x3063*x3064));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x3093 = INT64_MIN;
	int64_t x3094 = 496028654588674653LL;
	int32_t x3095 = -2;
	int32_t x3096 = -1;

    t91 = ((x3093<=x3094)>>(x3095*x3096));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x3109 = -1;
	uint64_t x3110 = 14973879630LLU;
	int8_t x3111 = -1;
	static uint64_t x3112 = UINT64_MAX;
	int32_t t92 = -657;

    t92 = ((x3109<=x3110)>>(x3111*x3112));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x3118 = INT32_MIN;
	int32_t x3119 = -1;
	int32_t t93 = -1213110;

    t93 = ((x3117<=x3118)>>(x3119*x3120));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x3127 = 0;
	static int32_t x3128 = 126;
	int32_t t94 = -7357865;

    t94 = ((x3125<=x3126)>>(x3127*x3128));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x3181 = INT32_MIN;
	int8_t x3182 = -58;
	int32_t x3183 = -1;
	static int8_t x3184 = -1;
	int32_t t95 = 995;

    t95 = ((x3181<=x3182)>>(x3183*x3184));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x3185 = -1;
	uint64_t x3186 = UINT64_MAX;
	uint64_t x3187 = 1102040115906LLU;
	int64_t x3188 = INT64_MIN;

    t96 = ((x3185<=x3186)>>(x3187*x3188));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x3197 = 908;
	int16_t x3198 = INT16_MAX;
	static volatile int32_t x3199 = INT32_MIN;
	volatile uint32_t x3200 = 1806U;

    t97 = ((x3197<=x3198)>>(x3199*x3200));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x3237 = 14099;
	uint64_t x3238 = UINT64_MAX;
	int32_t x3239 = -1;
	int8_t x3240 = -1;
	static int32_t t98 = -3;

    t98 = ((x3237<=x3238)>>(x3239*x3240));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x3257 = UINT8_MAX;
	int64_t x3258 = INT64_MIN;
	int8_t x3259 = INT8_MIN;
	int32_t x3260 = 0;
	volatile int32_t t99 = -901;

    t99 = ((x3257<=x3258)>>(x3259*x3260));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x3325 = UINT64_MAX;
	int8_t x3327 = 0;
	int16_t x3328 = INT16_MIN;
	volatile int32_t t100 = 0;

    t100 = ((x3325<=x3326)>>(x3327*x3328));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x3346 = UINT16_MAX;
	int16_t x3347 = INT16_MIN;
	volatile uint8_t x3348 = 0U;

    t101 = ((x3345<=x3346)>>(x3347*x3348));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x3442 = INT32_MIN;
	int32_t x3443 = -72964;
	volatile uint8_t x3444 = 0U;
	static int32_t t102 = -23;

    t102 = ((x3441<=x3442)>>(x3443*x3444));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x3453 = INT8_MIN;
	uint64_t x3454 = UINT64_MAX;
	uint8_t x3456 = 1U;
	static int32_t t103 = 5;

    t103 = ((x3453<=x3454)>>(x3455*x3456));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x3478 = -1;
	int8_t x3479 = -1;
	uint64_t x3480 = UINT64_MAX;
	static volatile int32_t t104 = -508152286;

    t104 = ((x3477<=x3478)>>(x3479*x3480));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x3485 = 20279U;
	int8_t x3486 = -14;
	uint64_t x3487 = 527474243508918LLU;
	int64_t x3488 = INT64_MIN;
	int32_t t105 = -768;

    t105 = ((x3485<=x3486)>>(x3487*x3488));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x3525 = -1LL;
	int64_t x3526 = INT64_MAX;
	static int8_t x3527 = -1;
	int32_t x3528 = -1;
	volatile int32_t t106 = -45;

    t106 = ((x3525<=x3526)>>(x3527*x3528));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x3557 = UINT16_MAX;
	static int32_t x3558 = INT32_MIN;
	static volatile int8_t x3559 = INT8_MAX;
	int16_t x3560 = 0;
	volatile int32_t t107 = -15;

    t107 = ((x3557<=x3558)>>(x3559*x3560));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x3562 = INT8_MAX;
	int16_t x3563 = -6;
	int32_t x3564 = -1;
	static int32_t t108 = 90;

    t108 = ((x3561<=x3562)>>(x3563*x3564));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x3713 = -66085252LL;
	static int32_t x3714 = INT32_MAX;
	int32_t x3715 = -1;
	int64_t x3716 = -1LL;
	int32_t t109 = 366588;

    t109 = ((x3713<=x3714)>>(x3715*x3716));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x3757 = UINT8_MAX;
	int16_t x3758 = INT16_MAX;
	volatile int16_t x3759 = -1;
	int16_t x3760 = -28;
	int32_t t110 = -92;

    t110 = ((x3757<=x3758)>>(x3759*x3760));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x3814 = 23U;
	int32_t x3815 = -1;

    t111 = ((x3813<=x3814)>>(x3815*x3816));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x3825 = INT8_MIN;
	int64_t x3826 = INT64_MIN;
	static int8_t x3827 = -1;
	int8_t x3828 = -6;
	int32_t t112 = 502;

    t112 = ((x3825<=x3826)>>(x3827*x3828));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x3969 = INT32_MIN;
	volatile int16_t x3970 = INT16_MAX;
	static volatile uint64_t x3971 = UINT64_MAX;
	static int64_t x3972 = -1LL;
	int32_t t113 = 8761521;

    t113 = ((x3969<=x3970)>>(x3971*x3972));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int8_t x3977 = INT8_MIN;
	uint32_t x3978 = 278955879U;
	static uint8_t x3979 = 0U;
	int8_t x3980 = INT8_MIN;
	static volatile int32_t t114 = 149;

    t114 = ((x3977<=x3978)>>(x3979*x3980));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x4029 = INT64_MIN;
	uint8_t x4030 = UINT8_MAX;
	volatile int64_t x4032 = INT64_MIN;
	int32_t t115 = 1330;

    t115 = ((x4029<=x4030)>>(x4031*x4032));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x4045 = 104760727U;
	static uint16_t x4046 = 684U;
	static int16_t x4047 = -1;

    t116 = ((x4045<=x4046)>>(x4047*x4048));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x4054 = 4;
	int8_t x4055 = INT8_MIN;
	int32_t x4056 = 0;

    t117 = ((x4053<=x4054)>>(x4055*x4056));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x4081 = UINT16_MAX;
	int16_t x4082 = INT16_MIN;
	volatile int16_t x4084 = 0;
	volatile int32_t t118 = 4033162;

    t118 = ((x4081<=x4082)>>(x4083*x4084));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x4101 = INT64_MAX;
	uint32_t x4102 = UINT32_MAX;
	int64_t x4103 = 83992LL;
	int16_t x4104 = 0;
	volatile int32_t t119 = 434958092;

    t119 = ((x4101<=x4102)>>(x4103*x4104));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x4105 = 1U;
	int32_t x4106 = INT32_MIN;
	int32_t x4107 = -1;
	static int64_t x4108 = -1LL;
	volatile int32_t t120 = -410;

    t120 = ((x4105<=x4106)>>(x4107*x4108));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x4149 = 6U;
	static int64_t x4150 = -338333LL;
	static uint64_t x4151 = UINT64_MAX;
	int8_t x4152 = 0;

    t121 = ((x4149<=x4150)>>(x4151*x4152));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x4178 = -4;
	uint16_t x4179 = 1U;
	static uint8_t x4180 = 5U;

    t122 = ((x4177<=x4178)>>(x4179*x4180));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x4257 = INT32_MAX;
	uint16_t x4259 = UINT16_MAX;
	volatile int16_t x4260 = 0;
	int32_t t123 = 17413;

    t123 = ((x4257<=x4258)>>(x4259*x4260));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x4407 = INT32_MAX;
	uint8_t x4408 = 0U;
	volatile int32_t t124 = -211617748;

    t124 = ((x4405<=x4406)>>(x4407*x4408));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x4421 = INT16_MIN;
	static int8_t x4422 = -1;
	static int64_t x4423 = -1LL;
	int32_t t125 = -7889219;

    t125 = ((x4421<=x4422)>>(x4423*x4424));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x4425 = INT64_MIN;
	uint8_t x4426 = 120U;
	int32_t x4427 = -1;
	static int64_t x4428 = -1LL;
	volatile int32_t t126 = -519357116;

    t126 = ((x4425<=x4426)>>(x4427*x4428));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x4433 = 5;
	static int16_t x4434 = INT16_MIN;
	static volatile uint64_t x4435 = UINT64_MAX;
	int64_t x4436 = -1LL;
	int32_t t127 = -12016;

    t127 = ((x4433<=x4434)>>(x4435*x4436));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x4457 = INT64_MAX;
	int64_t x4458 = INT64_MIN;
	int8_t x4459 = -1;
	uint32_t x4460 = UINT32_MAX;

    t128 = ((x4457<=x4458)>>(x4459*x4460));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x4477 = INT16_MIN;
	int16_t x4478 = 55;
	uint16_t x4480 = 0U;
	volatile int32_t t129 = 146567;

    t129 = ((x4477<=x4478)>>(x4479*x4480));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x4513 = 2192144021803799LLU;
	uint16_t x4514 = 6U;
	int8_t x4515 = -1;
	static int8_t x4516 = 0;
	volatile int32_t t130 = -99055712;

    t130 = ((x4513<=x4514)>>(x4515*x4516));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x4561 = -1;
	volatile int16_t x4562 = INT16_MIN;
	volatile uint32_t x4563 = UINT32_MAX;

    t131 = ((x4561<=x4562)>>(x4563*x4564));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x4581 = -1;
	int32_t x4582 = -94;
	uint8_t x4583 = 1U;
	uint8_t x4584 = 23U;
	int32_t t132 = 19564;

    t132 = ((x4581<=x4582)>>(x4583*x4584));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x4622 = INT32_MIN;
	int16_t x4623 = 0;
	int64_t x4624 = 3553057455200225LL;
	static volatile int32_t t133 = 3152296;

    t133 = ((x4621<=x4622)>>(x4623*x4624));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x4661 = -1;
	uint8_t x4663 = 3U;
	volatile int16_t x4664 = 1;
	static volatile int32_t t134 = 38;

    t134 = ((x4661<=x4662)>>(x4663*x4664));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x4729 = -1;
	static int32_t x4731 = -1;
	uint64_t x4732 = UINT64_MAX;

    t135 = ((x4729<=x4730)>>(x4731*x4732));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int16_t x4733 = -7;
	volatile int16_t x4735 = INT16_MAX;
	static uint8_t x4736 = 0U;
	int32_t t136 = 0;

    t136 = ((x4733<=x4734)>>(x4735*x4736));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x4761 = 140U;
	int32_t x4762 = -1;
	uint64_t x4763 = UINT64_MAX;
	volatile int32_t t137 = 5385;

    t137 = ((x4761<=x4762)>>(x4763*x4764));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x4778 = -6657;
	int8_t x4779 = -1;
	int32_t x4780 = -1;

    t138 = ((x4777<=x4778)>>(x4779*x4780));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x4817 = INT16_MAX;
	int32_t x4818 = INT32_MIN;
	int32_t t139 = 1500;

    t139 = ((x4817<=x4818)>>(x4819*x4820));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x4825 = INT16_MIN;
	volatile int32_t x4826 = INT32_MIN;
	int8_t x4827 = -1;
	uint64_t x4828 = UINT64_MAX;

    t140 = ((x4825<=x4826)>>(x4827*x4828));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x4865 = INT64_MAX;
	static uint32_t x4866 = 38186753U;
	int8_t x4867 = -1;
	volatile int32_t t141 = -30;

    t141 = ((x4865<=x4866)>>(x4867*x4868));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x4905 = INT16_MIN;
	int8_t x4908 = -7;

    t142 = ((x4905<=x4906)>>(x4907*x4908));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x4913 = 3;
	static int16_t x4914 = INT16_MIN;
	volatile int32_t x4915 = -1;
	volatile uint16_t x4916 = 0U;
	int32_t t143 = -131;

    t143 = ((x4913<=x4914)>>(x4915*x4916));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x4929 = INT16_MIN;
	int8_t x4931 = -1;
	static uint32_t x4932 = UINT32_MAX;
	int32_t t144 = 483773;

    t144 = ((x4929<=x4930)>>(x4931*x4932));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x4981 = 5;
	static int32_t x4982 = INT32_MIN;
	int8_t x4983 = -1;

    t145 = ((x4981<=x4982)>>(x4983*x4984));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x5057 = INT64_MIN;
	int32_t x5058 = INT32_MIN;
	volatile int64_t x5059 = -1LL;
	volatile int32_t t146 = 168;

    t146 = ((x5057<=x5058)>>(x5059*x5060));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x5105 = 51760U;
	int32_t x5106 = INT32_MIN;
	volatile int32_t t147 = -79;

    t147 = ((x5105<=x5106)>>(x5107*x5108));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x5117 = -1LL;
	int64_t x5118 = INT64_MAX;
	uint16_t x5119 = 1U;
	volatile int32_t x5120 = 29;
	static int32_t t148 = 12830490;

    t148 = ((x5117<=x5118)>>(x5119*x5120));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x5133 = INT64_MIN;
	uint32_t x5135 = 1687329702U;
	volatile uint8_t x5136 = 0U;
	int32_t t149 = -855742;

    t149 = ((x5133<=x5134)>>(x5135*x5136));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x5225 = UINT32_MAX;
	int8_t x5226 = INT8_MIN;
	uint8_t x5227 = 127U;
	int8_t x5228 = 0;
	volatile int32_t t150 = -210238;

    t150 = ((x5225<=x5226)>>(x5227*x5228));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x5237 = 34U;
	int16_t x5238 = -21;
	volatile int8_t x5240 = 0;
	int32_t t151 = -104609;

    t151 = ((x5237<=x5238)>>(x5239*x5240));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x5269 = UINT8_MAX;
	uint64_t x5270 = 1471472312117403LLU;
	static volatile int32_t x5271 = INT32_MIN;
	uint32_t x5272 = 14184962U;

    t152 = ((x5269<=x5270)>>(x5271*x5272));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x5337 = -940647161799505LL;
	int16_t x5339 = -1;

    t153 = ((x5337<=x5338)>>(x5339*x5340));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x5361 = INT32_MIN;
	static uint64_t x5363 = UINT64_MAX;
	int64_t x5364 = -8LL;
	int32_t t154 = -251577588;

    t154 = ((x5361<=x5362)>>(x5363*x5364));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x5398 = 75;
	static volatile int64_t x5400 = INT64_MIN;
	int32_t t155 = -399;

    t155 = ((x5397<=x5398)>>(x5399*x5400));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x5406 = -1;
	int8_t x5407 = -1;

    t156 = ((x5405<=x5406)>>(x5407*x5408));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x5445 = 3U;
	int32_t x5446 = 143755739;
	int8_t x5447 = 0;
	uint32_t x5448 = 930818U;

    t157 = ((x5445<=x5446)>>(x5447*x5448));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x5461 = UINT32_MAX;
	int16_t x5462 = INT16_MAX;
	volatile int32_t x5463 = -1;
	uint64_t x5464 = UINT64_MAX;
	static volatile int32_t t158 = 3352117;

    t158 = ((x5461<=x5462)>>(x5463*x5464));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x5493 = 23U;
	volatile int8_t x5494 = 0;
	static int64_t x5495 = INT64_MIN;
	uint8_t x5496 = 0U;

    t159 = ((x5493<=x5494)>>(x5495*x5496));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x5513 = INT64_MIN;
	int16_t x5514 = -1;
	volatile uint8_t x5516 = 0U;
	int32_t t160 = -19768787;

    t160 = ((x5513<=x5514)>>(x5515*x5516));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x5529 = INT16_MIN;
	static uint64_t x5530 = UINT64_MAX;
	static uint32_t x5531 = 2U;
	int32_t x5532 = INT32_MIN;

    t161 = ((x5529<=x5530)>>(x5531*x5532));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x5661 = -1;
	int8_t x5662 = INT8_MIN;
	volatile uint8_t x5663 = 0U;
	int16_t x5664 = -1;
	volatile int32_t t162 = -3385346;

    t162 = ((x5661<=x5662)>>(x5663*x5664));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x5717 = UINT16_MAX;
	int16_t x5719 = -493;
	uint16_t x5720 = 0U;
	static volatile int32_t t163 = 1368;

    t163 = ((x5717<=x5718)>>(x5719*x5720));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x5729 = INT32_MIN;
	volatile uint8_t x5730 = 54U;
	uint8_t x5731 = 0U;
	int8_t x5732 = INT8_MIN;
	volatile int32_t t164 = 8678;

    t164 = ((x5729<=x5730)>>(x5731*x5732));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x5741 = 3248610763474LLU;
	int16_t x5742 = INT16_MIN;
	int32_t t165 = 13203;

    t165 = ((x5741<=x5742)>>(x5743*x5744));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x5797 = 1620469LLU;
	static volatile int32_t x5799 = -1;
	int32_t x5800 = -1;
	int32_t t166 = 2;

    t166 = ((x5797<=x5798)>>(x5799*x5800));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x5802 = INT8_MIN;
	uint64_t x5803 = 0LLU;
	int8_t x5804 = -1;
	volatile int32_t t167 = -928;

    t167 = ((x5801<=x5802)>>(x5803*x5804));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x5825 = 22U;
	int32_t x5826 = -1;
	static int64_t x5827 = 0LL;
	static uint64_t x5828 = 142034293300LLU;
	int32_t t168 = 1;

    t168 = ((x5825<=x5826)>>(x5827*x5828));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x5870 = 152262718;
	static int8_t x5871 = -18;
	volatile uint64_t x5872 = UINT64_MAX;
	int32_t t169 = -260175;

    t169 = ((x5869<=x5870)>>(x5871*x5872));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x5885 = 19U;
	volatile uint32_t x5886 = UINT32_MAX;
	int64_t x5887 = -1LL;
	volatile int32_t t170 = -1;

    t170 = ((x5885<=x5886)>>(x5887*x5888));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x6005 = 2219;
	int16_t x6006 = 20;
	int32_t x6007 = -1;
	int64_t x6008 = -1LL;

    t171 = ((x6005<=x6006)>>(x6007*x6008));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x6013 = 5;
	static int32_t x6014 = INT32_MIN;
	volatile int64_t x6015 = INT64_MIN;
	uint64_t x6016 = 11844299810862LLU;

    t172 = ((x6013<=x6014)>>(x6015*x6016));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x6021 = 1U;
	int8_t x6022 = 1;
	int8_t x6023 = -1;
	static uint64_t x6024 = UINT64_MAX;
	int32_t t173 = 6277266;

    t173 = ((x6021<=x6022)>>(x6023*x6024));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x6073 = -1;
	static int64_t x6074 = INT64_MIN;
	volatile uint8_t x6075 = 1U;
	int32_t x6076 = 18;
	volatile int32_t t174 = 77307846;

    t174 = ((x6073<=x6074)>>(x6075*x6076));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x6101 = INT16_MIN;
	volatile int32_t x6102 = INT32_MIN;
	int16_t x6103 = 0;
	uint32_t x6104 = 1696U;
	int32_t t175 = 22695565;

    t175 = ((x6101<=x6102)>>(x6103*x6104));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x6105 = -1;
	volatile int64_t x6106 = INT64_MIN;
	volatile int16_t x6107 = INT16_MIN;
	static volatile uint32_t x6108 = 0U;
	int32_t t176 = 207;

    t176 = ((x6105<=x6106)>>(x6107*x6108));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x6149 = INT8_MIN;
	uint16_t x6150 = UINT16_MAX;
	static uint64_t x6151 = 356615449398053LLU;
	static volatile int8_t x6152 = 0;
	volatile int32_t t177 = -4666;

    t177 = ((x6149<=x6150)>>(x6151*x6152));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x6157 = 0;
	int16_t x6158 = -1;
	int8_t x6159 = INT8_MAX;
	static int32_t x6160 = 0;
	static volatile int32_t t178 = 0;

    t178 = ((x6157<=x6158)>>(x6159*x6160));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x6165 = 37U;
	uint32_t x6166 = UINT32_MAX;
	int64_t x6167 = INT64_MIN;
	uint64_t x6168 = 1062LLU;

    t179 = ((x6165<=x6166)>>(x6167*x6168));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x6205 = -6;
	static uint64_t x6206 = 3176829440983504LLU;
	uint32_t x6207 = 0U;
	int8_t x6208 = -1;
	static int32_t t180 = 159;

    t180 = ((x6205<=x6206)>>(x6207*x6208));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x6237 = -183;
	uint16_t x6238 = 0U;
	int32_t x6239 = -1;
	int8_t x6240 = 0;
	volatile int32_t t181 = -5;

    t181 = ((x6237<=x6238)>>(x6239*x6240));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x6241 = INT16_MIN;
	volatile int32_t x6242 = INT32_MAX;
	int8_t x6243 = -3;
	int8_t x6244 = -1;
	static int32_t t182 = -3;

    t182 = ((x6241<=x6242)>>(x6243*x6244));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x6257 = -1;
	int16_t x6259 = INT16_MIN;
	int16_t x6260 = 0;
	int32_t t183 = 1;

    t183 = ((x6257<=x6258)>>(x6259*x6260));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x6277 = INT16_MAX;
	int8_t x6278 = INT8_MIN;
	uint32_t x6279 = 1U;
	int32_t x6280 = 4;
	static volatile int32_t t184 = 97607;

    t184 = ((x6277<=x6278)>>(x6279*x6280));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int16_t x6281 = 896;
	uint32_t x6282 = UINT32_MAX;
	int32_t x6284 = -1;
	volatile int32_t t185 = -4082752;

    t185 = ((x6281<=x6282)>>(x6283*x6284));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x6285 = 26662U;
	volatile int16_t x6286 = INT16_MIN;
	volatile uint64_t x6287 = UINT64_MAX;
	static int16_t x6288 = -1;
	static volatile int32_t t186 = -1;

    t186 = ((x6285<=x6286)>>(x6287*x6288));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x6385 = INT32_MIN;
	volatile int32_t x6387 = INT32_MIN;
	uint32_t x6388 = 0U;
	int32_t t187 = 11;

    t187 = ((x6385<=x6386)>>(x6387*x6388));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x6410 = INT64_MIN;
	int8_t x6411 = 0;
	uint16_t x6412 = UINT16_MAX;

    t188 = ((x6409<=x6410)>>(x6411*x6412));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x6421 = INT32_MIN;
	int64_t x6422 = -1LL;
	uint8_t x6423 = 0U;
	volatile uint32_t x6424 = UINT32_MAX;
	int32_t t189 = 4925788;

    t189 = ((x6421<=x6422)>>(x6423*x6424));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x6442 = INT16_MIN;
	int8_t x6443 = 0;
	static volatile int32_t x6444 = INT32_MAX;
	int32_t t190 = 207424698;

    t190 = ((x6441<=x6442)>>(x6443*x6444));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x6469 = INT64_MIN;
	uint16_t x6470 = 111U;
	uint16_t x6471 = 0U;
	volatile int64_t x6472 = INT64_MAX;
	volatile int32_t t191 = -23327484;

    t191 = ((x6469<=x6470)>>(x6471*x6472));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x6478 = INT32_MAX;
	static int32_t x6479 = 7;
	int8_t x6480 = 0;

    t192 = ((x6477<=x6478)>>(x6479*x6480));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x6485 = INT64_MIN;
	int32_t x6486 = INT32_MIN;
	int32_t x6487 = INT32_MIN;
	int8_t x6488 = 0;
	int32_t t193 = -71604208;

    t193 = ((x6485<=x6486)>>(x6487*x6488));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x6498 = 4840U;
	static uint8_t x6500 = 0U;
	int32_t t194 = 462935;

    t194 = ((x6497<=x6498)>>(x6499*x6500));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x6501 = INT16_MIN;
	int8_t x6502 = -1;
	uint64_t x6504 = UINT64_MAX;
	int32_t t195 = 2;

    t195 = ((x6501<=x6502)>>(x6503*x6504));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x6621 = 21792858258LLU;
	volatile uint32_t x6622 = 49U;
	uint32_t x6623 = UINT32_MAX;
	int32_t x6624 = -1;
	static int32_t t196 = 11649;

    t196 = ((x6621<=x6622)>>(x6623*x6624));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x6637 = INT8_MIN;
	static uint32_t x6638 = UINT32_MAX;
	uint32_t x6640 = 3U;
	static volatile int32_t t197 = -103127;

    t197 = ((x6637<=x6638)>>(x6639*x6640));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x6643 = 0;
	static uint32_t x6644 = UINT32_MAX;

    t198 = ((x6641<=x6642)>>(x6643*x6644));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x6773 = INT8_MIN;
	static int64_t x6774 = INT64_MAX;
	static volatile int8_t x6775 = INT8_MAX;
	volatile uint16_t x6776 = 0U;

    t199 = ((x6773<=x6774)>>(x6775*x6776));

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


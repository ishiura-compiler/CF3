
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

int32_t x1 = INT32_MIN;
uint32_t x2 = UINT32_MAX;
volatile uint32_t t2 = 359U;
uint32_t x350 = UINT32_MAX;
int16_t x352 = -1;
int32_t x368 = -122059034;
volatile int32_t t7 = 1;
int8_t x447 = 1;
uint16_t x582 = 7513U;
static int16_t x648 = INT16_MIN;
static uint16_t x729 = 24U;
int32_t x732 = INT32_MIN;
static int64_t t13 = -719LL;
uint64_t x930 = UINT64_MAX;
static int8_t x1023 = 26;
uint32_t t15 = 259607U;
uint64_t x1025 = UINT64_MAX;
static uint64_t t16 = 34234LLU;
uint64_t t17 = 130733904406037LLU;
static uint16_t x1259 = 9U;
int8_t x1523 = 0;
static volatile uint32_t t24 = 515115U;
uint32_t x1592 = 3369U;
int64_t x1674 = 2662615LL;
uint32_t t29 = 93U;
uint16_t x1892 = 3754U;
static volatile uint64_t t31 = 2965826531938515LLU;
uint8_t x2210 = 0U;
uint16_t x2316 = 7U;
volatile uint64_t t35 = 1408LLU;
int8_t x2350 = INT8_MIN;
int64_t t36 = -746994805LL;
volatile int64_t t37 = 91594212LL;
int8_t x2601 = 0;
int64_t x2602 = INT64_MAX;
volatile int16_t x2604 = INT16_MIN;
volatile int64_t t40 = -203809LL;
static uint8_t x2605 = 113U;
int16_t x2606 = INT16_MAX;
int64_t x2617 = -1766359467752LL;
int8_t x2851 = 23;
int64_t x2881 = 20158392LL;
uint32_t x2882 = 191287931U;
uint32_t x2883 = 6U;
static uint16_t x2913 = UINT16_MAX;
int8_t x2916 = INT8_MAX;
volatile uint16_t x2968 = 8126U;
static uint64_t x3034 = 307137270LLU;
volatile uint64_t t51 = 800950206410LLU;
uint8_t x3191 = 18U;
uint64_t x3238 = 13317254298722147LLU;
uint8_t x3240 = UINT8_MAX;
static volatile uint8_t x3317 = UINT8_MAX;
int8_t x3319 = 1;
int32_t x3366 = INT32_MAX;
uint8_t x3367 = 1U;
int16_t x3461 = INT16_MAX;
static uint8_t x3721 = 26U;
int8_t x3851 = 29;
int8_t x3852 = INT8_MIN;
volatile uint64_t t66 = 206857433LLU;
static int32_t t67 = -305104;
int64_t x4281 = 6849679510418LL;
uint8_t x4441 = UINT8_MAX;
uint8_t x4443 = 1U;
int16_t x4444 = -1;
static int8_t x4692 = INT8_MIN;
volatile uint16_t x4722 = 1U;
int16_t x4759 = 0;
uint32_t x4955 = 29U;
int32_t t77 = 3405;
uint8_t x4959 = 14U;
volatile uint32_t t78 = 1674717U;
int16_t x5136 = -43;
int32_t t81 = INT32_MAX;
uint64_t x5294 = 8568600LLU;
uint32_t x5296 = 4852117U;
static int64_t x5505 = INT64_MIN;
uint8_t x5575 = 52U;
int16_t x5588 = -1;
static int32_t t88 = 237924866;
uint64_t x5766 = 27786723LLU;
int16_t x5814 = INT16_MAX;
static uint16_t x5816 = 1U;
uint8_t x5865 = 14U;
int32_t x5866 = 35;
uint64_t x5948 = UINT64_MAX;
volatile uint64_t t93 = 235344LLU;
uint64_t x5988 = 13595566646968LLU;
uint8_t x6010 = UINT8_MAX;
uint64_t t96 = 156LLU;
int64_t x6093 = INT64_MAX;
uint32_t x6094 = 2124U;
int32_t x6128 = -811;
volatile int64_t t99 = -340697LL;
int64_t x6337 = INT64_MAX;
static int32_t x6339 = 0;
volatile int64_t t102 = -146157497207LL;
uint8_t x6424 = 14U;
volatile uint64_t t103 = 2614298875LLU;
volatile uint64_t x6513 = 2637413632887442051LLU;
volatile uint64_t x6533 = UINT64_MAX;
volatile int16_t x6534 = -48;
uint8_t x6536 = UINT8_MAX;
static uint64_t x6558 = UINT64_MAX;
int32_t x6589 = INT32_MAX;
uint64_t t108 = 14195546917LLU;
int8_t x6852 = INT8_MIN;
uint32_t x6928 = 112199U;
volatile uint32_t t111 = 47U;
int32_t x7185 = INT32_MIN;
uint8_t x7187 = 9U;
int32_t x7282 = 0;
static uint8_t x7389 = UINT8_MAX;
static volatile int32_t t115 = -1466971;
int16_t x7581 = 30;
uint32_t t119 = 1956U;
uint8_t x7763 = 26U;
int32_t x7931 = 57;
uint64_t t122 = 97944831016LLU;
static volatile int16_t x8100 = INT16_MIN;
static uint32_t x8218 = 11352U;
uint64_t t127 = 29344566LLU;
int64_t x8296 = INT64_MIN;
int32_t x8576 = INT32_MIN;
uint32_t t130 = 20U;
uint64_t t133 = 3438529963LLU;
int8_t x9200 = -22;
volatile uint32_t t134 = 461311152U;
uint32_t x9254 = 18213U;
int64_t x9256 = -1LL;
volatile int64_t t137 = 287630560218332LL;
uint32_t x9549 = 487758759U;
volatile uint8_t x9550 = 1U;
uint64_t x9552 = 181605095712377098LLU;
int64_t x9562 = 1046607137381962038LL;
volatile int8_t x9710 = INT8_MIN;
uint64_t x9816 = 7332625944446433726LLU;
uint32_t x9906 = 201114U;
uint16_t x9961 = 1U;
uint64_t x9963 = 3LLU;
int16_t x9964 = 3798;
volatile int8_t x10055 = 1;
static volatile uint32_t t146 = 26291U;
volatile int8_t x10176 = 14;
uint8_t x10265 = UINT8_MAX;
int64_t x10266 = INT64_MAX;
static int64_t t149 = 616448LL;
static uint64_t t151 = 39035LLU;
int8_t x10578 = 1;
uint8_t x10579 = 7U;
int8_t x10580 = 15;
uint64_t x10585 = 928771080LLU;
volatile int32_t x10586 = INT32_MAX;
static uint64_t t155 = 257163925996949LLU;
int16_t x10635 = 1;
static volatile uint16_t x10679 = 13U;
uint8_t x10770 = 1U;
uint8_t x10803 = 21U;
static int32_t x10873 = 1072685;
uint8_t x10875 = 1U;
int8_t x10876 = -1;
int64_t t166 = 12146183513LL;
uint64_t x11610 = 499497658LLU;
int8_t x11633 = -1;
volatile uint64_t x11765 = 605411066LLU;
static uint64_t t174 = 530LLU;
static int32_t x11826 = INT32_MIN;
int32_t x11931 = 1;
static uint64_t x11993 = UINT64_MAX;
volatile uint32_t t180 = 414494215U;
volatile uint32_t t181 = 106082484U;
uint64_t t183 = 210551415328837346LLU;
uint16_t x12189 = UINT16_MAX;
int32_t t184 = 1;
static volatile int64_t t186 = -105LL;
uint64_t x12301 = 145141349653670LLU;
int16_t x12540 = INT16_MAX;
volatile uint32_t t189 = 698U;
uint64_t x12728 = 170LLU;
uint64_t x12749 = 1585594813144LLU;
int8_t x12751 = 14;
static uint64_t x12773 = 1892945LLU;
uint8_t x12807 = 3U;
uint64_t t193 = 7061625319388LLU;
int64_t x12833 = INT64_MAX;
int16_t x12868 = INT16_MAX;
uint64_t t195 = 4384116925686917321LLU;
static int64_t x12942 = 12160LL;
int8_t x12943 = 25;


void f0(void) {
    	uint8_t x3 = 13U;
	int8_t x4 = -1;
	volatile uint32_t t0 = 31U;

    t0 = (((x1|x2)>>x3)/x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x33 = 1;
	int16_t x34 = 93;
	static uint8_t x35 = 0U;
	int16_t x36 = 78;
	int32_t t1 = -1;

    t1 = (((x33|x34)>>x35)/x36);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x201 = 14U;
	uint16_t x202 = 12U;
	uint16_t x203 = 1U;
	static uint32_t x204 = 2431030U;

    t2 = (((x201|x202)>>x203)/x204);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x281 = 7725;
	uint32_t x282 = UINT32_MAX;
	volatile uint8_t x283 = 0U;
	volatile int8_t x284 = -2;
	static volatile uint32_t t3 = 1664U;

    t3 = (((x281|x282)>>x283)/x284);

    if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x305 = UINT8_MAX;
	static uint8_t x306 = UINT8_MAX;
	uint16_t x307 = 6U;
	int64_t x308 = -450608LL;
	int64_t t4 = 3556640294713LL;

    t4 = (((x305|x306)>>x307)/x308);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x349 = INT32_MIN;
	static int16_t x351 = 1;
	uint32_t t5 = 15408380U;

    t5 = (((x349|x350)>>x351)/x352);

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x365 = 1;
	static int64_t x366 = INT64_MAX;
	int8_t x367 = 0;
	int64_t t6 = 262836119775924520LL;

    t6 = (((x365|x366)>>x367)/x368);

    if (t6 != -75564845424LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x433 = INT8_MAX;
	uint8_t x434 = 58U;
	uint8_t x435 = 27U;
	uint16_t x436 = 544U;

    t7 = (((x433|x434)>>x435)/x436);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x445 = INT16_MAX;
	volatile uint8_t x446 = 23U;
	volatile uint16_t x448 = UINT16_MAX;
	volatile int32_t t8 = -22;

    t8 = (((x445|x446)>>x447)/x448);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x561 = 49158988U;
	volatile uint64_t x562 = UINT64_MAX;
	static uint16_t x563 = 63U;
	int64_t x564 = INT64_MIN;
	uint64_t t9 = 4254LLU;

    t9 = (((x561|x562)>>x563)/x564);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x581 = 51U;
	int16_t x583 = 1;
	volatile uint16_t x584 = UINT16_MAX;
	volatile int32_t t10 = 1308;

    t10 = (((x581|x582)>>x583)/x584);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x645 = 6;
	uint16_t x646 = UINT16_MAX;
	uint16_t x647 = 0U;
	static volatile int32_t t11 = -14053;

    t11 = (((x645|x646)>>x647)/x648);

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x730 = UINT32_MAX;
	static int64_t x731 = 2LL;
	uint32_t t12 = 1U;

    t12 = (((x729|x730)>>x731)/x732);

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x857 = 7771LL;
	volatile int16_t x858 = 3725;
	int8_t x859 = 33;
	uint8_t x860 = 14U;

    t13 = (((x857|x858)>>x859)/x860);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x929 = 31714226850915809LLU;
	static int8_t x931 = 6;
	static uint16_t x932 = UINT16_MAX;
	uint64_t t14 = 25222LLU;

    t14 = (((x929|x930)>>x931)/x932);

    if (t14 != 4398113620992LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x1021 = 58U;
	static uint32_t x1022 = UINT32_MAX;
	uint16_t x1024 = UINT16_MAX;

    t15 = (((x1021|x1022)>>x1023)/x1024);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x1026 = 39075U;
	int8_t x1027 = 0;
	int8_t x1028 = INT8_MIN;

    t16 = (((x1025|x1026)>>x1027)/x1028);

    if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x1069 = INT16_MIN;
	volatile uint64_t x1070 = UINT64_MAX;
	uint16_t x1071 = 0U;
	int32_t x1072 = -1;

    t17 = (((x1069|x1070)>>x1071)/x1072);

    if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x1077 = INT64_MAX;
	uint8_t x1078 = UINT8_MAX;
	volatile uint32_t x1079 = 3U;
	int16_t x1080 = -1;
	static volatile int64_t t18 = -3155088227LL;

    t18 = (((x1077|x1078)>>x1079)/x1080);

    if (t18 != -1152921504606846975LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x1257 = UINT64_MAX;
	static uint8_t x1258 = 115U;
	int8_t x1260 = -19;
	volatile uint64_t t19 = 3291345LLU;

    t19 = (((x1257|x1258)>>x1259)/x1260);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x1381 = -1;
	uint32_t x1382 = UINT32_MAX;
	static uint64_t x1383 = 28LLU;
	int64_t x1384 = INT64_MIN;
	static volatile int64_t t20 = 331519314945LL;

    t20 = (((x1381|x1382)>>x1383)/x1384);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int8_t x1469 = INT8_MAX;
	uint16_t x1470 = 45U;
	uint16_t x1471 = 1U;
	static int64_t x1472 = -6350312989LL;
	volatile int64_t t21 = 40467LL;

    t21 = (((x1469|x1470)>>x1471)/x1472);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x1513 = 226;
	int8_t x1514 = 56;
	uint8_t x1515 = 0U;
	volatile int16_t x1516 = INT16_MAX;
	static volatile int32_t t22 = -25813450;

    t22 = (((x1513|x1514)>>x1515)/x1516);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x1521 = INT8_MAX;
	volatile uint8_t x1522 = 0U;
	volatile int16_t x1524 = -2;
	int32_t t23 = 522255835;

    t23 = (((x1521|x1522)>>x1523)/x1524);

    if (t23 != -63) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x1577 = UINT32_MAX;
	int32_t x1578 = 898051;
	uint8_t x1579 = 0U;
	int32_t x1580 = INT32_MIN;

    t24 = (((x1577|x1578)>>x1579)/x1580);

    if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x1589 = 27;
	int32_t x1590 = INT32_MAX;
	int8_t x1591 = 2;
	uint32_t t25 = 29090090U;

    t25 = (((x1589|x1590)>>x1591)/x1592);

    if (t25 != 159356U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x1673 = 5LL;
	int8_t x1675 = 1;
	int32_t x1676 = 761255;
	static volatile int64_t t26 = -1746183209LL;

    t26 = (((x1673|x1674)>>x1675)/x1676);

    if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x1697 = UINT8_MAX;
	uint64_t x1698 = 124825628132LLU;
	uint8_t x1699 = 50U;
	volatile int32_t x1700 = -1;
	static uint64_t t27 = 13236588LLU;

    t27 = (((x1697|x1698)>>x1699)/x1700);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x1769 = 3U;
	int8_t x1770 = INT8_MAX;
	uint8_t x1771 = 3U;
	static volatile int32_t x1772 = INT32_MIN;
	static volatile uint32_t t28 = 101U;

    t28 = (((x1769|x1770)>>x1771)/x1772);

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x1781 = INT8_MAX;
	uint16_t x1782 = 2U;
	uint8_t x1783 = 1U;
	uint32_t x1784 = 4U;

    t29 = (((x1781|x1782)>>x1783)/x1784);

    if (t29 != 15U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x1889 = INT64_MAX;
	volatile int64_t x1890 = INT64_MAX;
	uint64_t x1891 = 41LLU;
	int64_t t30 = 23514645LL;

    t30 = (((x1889|x1890)>>x1891)/x1892);

    if (t30 != 1117LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x2117 = 11985211184309LLU;
	int64_t x2118 = -1LL;
	uint16_t x2119 = 9U;
	static int32_t x2120 = 27189065;

    t31 = (((x2117|x2118)>>x2119)/x2120);

    if (t31 != 1325120853LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x2125 = UINT32_MAX;
	int32_t x2126 = -90;
	uint64_t x2127 = 0LLU;
	volatile int8_t x2128 = INT8_MIN;
	volatile uint32_t t32 = 2127484346U;

    t32 = (((x2125|x2126)>>x2127)/x2128);

    if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x2209 = 36LLU;
	volatile uint8_t x2211 = 3U;
	static int16_t x2212 = INT16_MIN;
	static uint64_t t33 = 100011677809LLU;

    t33 = (((x2209|x2210)>>x2211)/x2212);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x2289 = UINT64_MAX;
	int64_t x2290 = INT64_MIN;
	int64_t x2291 = 1LL;
	int32_t x2292 = -1;
	uint64_t t34 = 173470666093933348LLU;

    t34 = (((x2289|x2290)>>x2291)/x2292);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x2313 = 1069675913LLU;
	volatile int64_t x2314 = -26678LL;
	volatile int16_t x2315 = 0;

    t35 = (((x2313|x2314)>>x2315)/x2316);

    if (t35 != 2635249153387078502LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x2349 = 10650206U;
	uint8_t x2351 = 1U;
	int64_t x2352 = INT64_MAX;

    t36 = (((x2349|x2350)>>x2351)/x2352);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x2357 = INT64_MAX;
	uint8_t x2358 = 2U;
	int8_t x2359 = 0;
	int64_t x2360 = -523614011164335LL;

    t37 = (((x2357|x2358)>>x2359)/x2360);

    if (t37 != -17614LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x2433 = 3U;
	uint16_t x2434 = UINT16_MAX;
	uint8_t x2435 = 11U;
	static volatile int16_t x2436 = 5;
	static int32_t t38 = 11;

    t38 = (((x2433|x2434)>>x2435)/x2436);

    if (t38 != 6) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x2481 = UINT64_MAX;
	volatile int32_t x2482 = -2977;
	static int32_t x2483 = 6;
	int16_t x2484 = INT16_MIN;
	volatile uint64_t t39 = 890968LLU;

    t39 = (((x2481|x2482)>>x2483)/x2484);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x2603 = 1U;

    t40 = (((x2601|x2602)>>x2603)/x2604);

    if (t40 != -140737488355327LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x2607 = 0;
	volatile int16_t x2608 = INT16_MIN;
	int32_t t41 = -31;

    t41 = (((x2605|x2606)>>x2607)/x2608);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x2618 = 4480978445989989773LLU;
	volatile int32_t x2619 = 6;
	uint64_t x2620 = 1100LLU;
	volatile uint64_t t42 = 121100831671LLU;

    t42 = (((x2617|x2618)>>x2619)/x2620);

    if (t42 != 262027589792071LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x2629 = -3860;
	uint64_t x2630 = 15407546585795LLU;
	static uint16_t x2631 = 2U;
	static volatile uint64_t x2632 = 26306695453542LLU;
	volatile uint64_t t43 = 352449995667LLU;

    t43 = (((x2629|x2630)>>x2631)/x2632);

    if (t43 != 175304LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x2849 = UINT16_MAX;
	uint8_t x2850 = UINT8_MAX;
	int16_t x2852 = INT16_MIN;
	volatile int32_t t44 = -9956802;

    t44 = (((x2849|x2850)>>x2851)/x2852);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x2884 = INT8_MAX;
	volatile int64_t t45 = -57910872404LL;

    t45 = (((x2881|x2882)>>x2883)/x2884);

    if (t45 != 23671LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x2901 = 1581LLU;
	static int16_t x2902 = INT16_MIN;
	static int8_t x2903 = 0;
	static volatile uint64_t x2904 = 36302LLU;
	uint64_t t46 = 677270LLU;

    t46 = (((x2901|x2902)>>x2903)/x2904);

    if (t46 != 508146770803523LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x2914 = INT16_MAX;
	int16_t x2915 = 1;
	volatile int32_t t47 = 515419;

    t47 = (((x2913|x2914)>>x2915)/x2916);

    if (t47 != 258) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x2965 = INT16_MAX;
	static volatile int8_t x2966 = INT8_MAX;
	uint16_t x2967 = 0U;
	int32_t t48 = 112998;

    t48 = (((x2965|x2966)>>x2967)/x2968);

    if (t48 != 4) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x3033 = UINT32_MAX;
	uint32_t x3035 = 5U;
	int32_t x3036 = -60207048;
	uint64_t t49 = 2515046LLU;

    t49 = (((x3033|x3034)>>x3035)/x3036);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x3049 = INT32_MAX;
	uint32_t x3050 = 6781529U;
	uint8_t x3051 = 10U;
	int32_t x3052 = INT32_MAX;
	volatile uint32_t t50 = 500067U;

    t50 = (((x3049|x3050)>>x3051)/x3052);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x3089 = 56U;
	int32_t x3090 = 68934;
	uint8_t x3091 = 15U;
	uint64_t x3092 = UINT64_MAX;

    t51 = (((x3089|x3090)>>x3091)/x3092);

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x3189 = 0U;
	int16_t x3190 = 351;
	uint16_t x3192 = UINT16_MAX;
	volatile int32_t t52 = -3;

    t52 = (((x3189|x3190)>>x3191)/x3192);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x3237 = 9551U;
	int8_t x3239 = 28;
	uint64_t t53 = 722LLU;

    t53 = (((x3237|x3238)>>x3239)/x3240);

    if (t53 != 194551LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x3318 = 1378U;
	int64_t x3320 = -21LL;
	int64_t t54 = 42740022213317LL;

    t54 = (((x3317|x3318)>>x3319)/x3320);

    if (t54 != -36LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x3365 = INT64_MAX;
	int64_t x3368 = INT64_MIN;
	static volatile int64_t t55 = 15108222599023LL;

    t55 = (((x3365|x3366)>>x3367)/x3368);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x3462 = 329999095U;
	volatile uint32_t x3463 = 0U;
	volatile int64_t x3464 = -13833923LL;
	volatile int64_t t56 = 2279387217712LL;

    t56 = (((x3461|x3462)>>x3463)/x3464);

    if (t56 != -23LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x3605 = 20U;
	static uint8_t x3606 = UINT8_MAX;
	int8_t x3607 = 0;
	volatile int32_t x3608 = INT32_MAX;
	int32_t t57 = -1;

    t57 = (((x3605|x3606)>>x3607)/x3608);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x3617 = 1;
	int64_t x3618 = 4314002086345811723LL;
	static int8_t x3619 = 1;
	int8_t x3620 = 4;
	static volatile int64_t t58 = -87101503435721682LL;

    t58 = (((x3617|x3618)>>x3619)/x3620);

    if (t58 != 539250260793226465LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x3637 = 3LLU;
	volatile int8_t x3638 = INT8_MIN;
	uint16_t x3639 = 3U;
	int32_t x3640 = -1;
	volatile uint64_t t59 = 130993558615284151LLU;

    t59 = (((x3637|x3638)>>x3639)/x3640);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x3722 = 1;
	volatile int8_t x3723 = 0;
	volatile uint64_t x3724 = 10977721166605553LLU;
	volatile uint64_t t60 = 593988LLU;

    t60 = (((x3721|x3722)>>x3723)/x3724);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x3845 = 481U;
	static int64_t x3846 = 3816940974209819751LL;
	static int8_t x3847 = 6;
	volatile int8_t x3848 = INT8_MIN;
	int64_t t61 = -4548948182230974961LL;

    t61 = (((x3845|x3846)>>x3847)/x3848);

    if (t61 != -465935177515847LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x3849 = 28;
	uint64_t x3850 = 137588829LLU;
	volatile uint64_t t62 = 1105852675044230794LLU;

    t62 = (((x3849|x3850)>>x3851)/x3852);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x3881 = UINT16_MAX;
	uint64_t x3882 = 2579051LLU;
	static uint8_t x3883 = 5U;
	uint8_t x3884 = 120U;
	uint64_t t63 = 1679872LLU;

    t63 = (((x3881|x3882)>>x3883)/x3884);

    if (t63 != 682LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x3885 = 46721;
	int32_t x3886 = INT32_MAX;
	uint32_t x3887 = 1U;
	static int64_t x3888 = -12805LL;
	static int64_t t64 = -7685153050076838LL;

    t64 = (((x3885|x3886)>>x3887)/x3888);

    if (t64 != -83853LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x3905 = 1606014114538LLU;
	int8_t x3906 = -3;
	int16_t x3907 = 7;
	uint32_t x3908 = 1U;
	volatile uint64_t t65 = 5776472511601987795LLU;

    t65 = (((x3905|x3906)>>x3907)/x3908);

    if (t65 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x3933 = UINT64_MAX;
	uint32_t x3934 = UINT32_MAX;
	static int32_t x3935 = 1;
	static volatile int8_t x3936 = INT8_MIN;

    t66 = (((x3933|x3934)>>x3935)/x3936);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x3993 = INT16_MAX;
	static uint8_t x3994 = 3U;
	static int16_t x3995 = 17;
	volatile uint16_t x3996 = UINT16_MAX;

    t67 = (((x3993|x3994)>>x3995)/x3996);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x4009 = -8;
	static uint64_t x4010 = 5597588313701324LLU;
	uint8_t x4011 = 27U;
	volatile int16_t x4012 = INT16_MIN;
	volatile uint64_t t68 = 18821LLU;

    t68 = (((x4009|x4010)>>x4011)/x4012);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x4237 = 245634U;
	volatile uint32_t x4238 = 15307502U;
	static int8_t x4239 = 7;
	int64_t x4240 = 7444982LL;
	int64_t t69 = 2417637067808LL;

    t69 = (((x4237|x4238)>>x4239)/x4240);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x4277 = UINT32_MAX;
	volatile int16_t x4278 = INT16_MIN;
	static uint8_t x4279 = 22U;
	static volatile int64_t x4280 = INT64_MIN;
	volatile int64_t t70 = 1702229763559LL;

    t70 = (((x4277|x4278)>>x4279)/x4280);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x4282 = 13819;
	int8_t x4283 = 42;
	int8_t x4284 = INT8_MIN;
	static int64_t t71 = 5887LL;

    t71 = (((x4281|x4282)>>x4283)/x4284);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x4442 = 6U;
	static int32_t t72 = -329869448;

    t72 = (((x4441|x4442)>>x4443)/x4444);

    if (t72 != -127) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x4517 = INT8_MAX;
	uint8_t x4518 = UINT8_MAX;
	int8_t x4519 = 7;
	uint32_t x4520 = 915340646U;
	volatile uint32_t t73 = 11U;

    t73 = (((x4517|x4518)>>x4519)/x4520);

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x4689 = -1;
	uint64_t x4690 = 1LLU;
	uint8_t x4691 = 6U;
	uint64_t t74 = 66667200LLU;

    t74 = (((x4689|x4690)>>x4691)/x4692);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x4721 = INT8_MAX;
	uint16_t x4723 = 12U;
	static int16_t x4724 = INT16_MIN;
	int32_t t75 = 167075;

    t75 = (((x4721|x4722)>>x4723)/x4724);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x4757 = -15;
	static uint32_t x4758 = 646859159U;
	uint64_t x4760 = 3540941403076054LLU;
	volatile uint64_t t76 = 25302556LLU;

    t76 = (((x4757|x4758)>>x4759)/x4760);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x4953 = INT32_MAX;
	volatile int32_t x4954 = 682;
	uint8_t x4956 = 5U;

    t77 = (((x4953|x4954)>>x4955)/x4956);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x4957 = 0;
	static volatile uint32_t x4958 = 13408U;
	static int32_t x4960 = -1;

    t78 = (((x4957|x4958)>>x4959)/x4960);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x5133 = 21427831926LLU;
	uint16_t x5134 = UINT16_MAX;
	int8_t x5135 = 34;
	uint64_t t79 = 11740824LLU;

    t79 = (((x5133|x5134)>>x5135)/x5136);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x5169 = UINT8_MAX;
	int64_t x5170 = INT64_MAX;
	uint8_t x5171 = 3U;
	int64_t x5172 = 16484LL;
	static volatile int64_t t80 = -771354LL;

    t80 = (((x5169|x5170)>>x5171)/x5172);

    if (t80 != 69941852985127LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x5257 = INT32_MAX;
	volatile uint8_t x5258 = 27U;
	static volatile int8_t x5259 = 0;
	volatile int16_t x5260 = 1;

    t81 = (((x5257|x5258)>>x5259)/x5260);

    if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x5293 = UINT32_MAX;
	int8_t x5295 = 1;
	uint64_t t82 = 6030763216963LLU;

    t82 = (((x5293|x5294)>>x5295)/x5296);

    if (t82 != 442LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x5353 = 11671;
	uint64_t x5354 = 3920645234LLU;
	int16_t x5355 = 1;
	uint32_t x5356 = 2310U;
	volatile uint64_t t83 = 2914167LLU;

    t83 = (((x5353|x5354)>>x5355)/x5356);

    if (t83 != 848626LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x5445 = 4636093869087638266LLU;
	uint8_t x5446 = 23U;
	int8_t x5447 = 1;
	uint8_t x5448 = 106U;
	static volatile uint64_t t84 = 4580265536LLU;

    t84 = (((x5445|x5446)>>x5447)/x5448);

    if (t84 != 21868367307017161LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x5506 = 14253237656614860LLU;
	uint8_t x5507 = 1U;
	uint32_t x5508 = UINT32_MAX;
	volatile uint64_t t85 = 46293885LLU;

    t85 = (((x5505|x5506)>>x5507)/x5508);

    if (t85 != 1075401119LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x5541 = 15U;
	uint16_t x5542 = UINT16_MAX;
	int8_t x5543 = 0;
	int8_t x5544 = 1;
	static volatile int32_t t86 = -4083;

    t86 = (((x5541|x5542)>>x5543)/x5544);

    if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x5573 = UINT64_MAX;
	int8_t x5574 = 24;
	int64_t x5576 = INT64_MIN;
	uint64_t t87 = 161136000843899LLU;

    t87 = (((x5573|x5574)>>x5575)/x5576);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x5585 = 0;
	int32_t x5586 = 27783;
	int32_t x5587 = 0;

    t88 = (((x5585|x5586)>>x5587)/x5588);

    if (t88 != -27783) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x5765 = -1;
	int16_t x5767 = 3;
	int64_t x5768 = INT64_MIN;
	uint64_t t89 = 3376LLU;

    t89 = (((x5765|x5766)>>x5767)/x5768);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int8_t x5813 = INT8_MAX;
	int8_t x5815 = 7;
	int32_t t90 = -4117;

    t90 = (((x5813|x5814)>>x5815)/x5816);

    if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x5867 = 0U;
	int16_t x5868 = -1;
	volatile int32_t t91 = -20;

    t91 = (((x5865|x5866)>>x5867)/x5868);

    if (t91 != -47) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x5873 = UINT32_MAX;
	static int8_t x5874 = INT8_MAX;
	uint8_t x5875 = 31U;
	int8_t x5876 = 52;
	volatile uint32_t t92 = 12549U;

    t92 = (((x5873|x5874)>>x5875)/x5876);

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x5945 = INT16_MAX;
	int8_t x5946 = INT8_MAX;
	static uint8_t x5947 = 17U;

    t93 = (((x5945|x5946)>>x5947)/x5948);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x5985 = UINT16_MAX;
	uint8_t x5986 = 0U;
	uint32_t x5987 = 0U;
	volatile uint64_t t94 = 538669268178240026LLU;

    t94 = (((x5985|x5986)>>x5987)/x5988);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x5997 = INT32_MAX;
	volatile uint32_t x5998 = UINT32_MAX;
	int16_t x5999 = 0;
	int32_t x6000 = 4701;
	static volatile uint32_t t95 = 1006U;

    t95 = (((x5997|x5998)>>x5999)/x6000);

    if (t95 != 913628U) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x6009 = 5;
	int16_t x6011 = 24;
	volatile uint64_t x6012 = 231415LLU;

    t96 = (((x6009|x6010)>>x6011)/x6012);

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x6095 = 0;
	int16_t x6096 = -1;
	volatile int64_t t97 = -33544743377279LL;

    t97 = (((x6093|x6094)>>x6095)/x6096);

    if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x6125 = 16339905U;
	uint16_t x6126 = 7U;
	static int32_t x6127 = 16;
	uint32_t t98 = 269U;

    t98 = (((x6125|x6126)>>x6127)/x6128);

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x6141 = INT32_MAX;
	static int64_t x6142 = 6254LL;
	volatile int16_t x6143 = 16;
	int8_t x6144 = INT8_MAX;

    t99 = (((x6141|x6142)>>x6143)/x6144);

    if (t99 != 258LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x6213 = 1;
	uint16_t x6214 = UINT16_MAX;
	static int16_t x6215 = 5;
	int32_t x6216 = -3836254;
	volatile int32_t t100 = -15;

    t100 = (((x6213|x6214)>>x6215)/x6216);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x6273 = INT16_MAX;
	int16_t x6274 = 224;
	uint8_t x6275 = 2U;
	int16_t x6276 = -1;
	static volatile int32_t t101 = -1;

    t101 = (((x6273|x6274)>>x6275)/x6276);

    if (t101 != -8191) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x6338 = 434438092U;
	int16_t x6340 = INT16_MIN;

    t102 = (((x6337|x6338)>>x6339)/x6340);

    if (t102 != -281474976710655LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x6421 = 261LLU;
	uint64_t x6422 = 5319913786LLU;
	static uint16_t x6423 = 30U;

    t103 = (((x6421|x6422)>>x6423)/x6424);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x6514 = -1;
	uint8_t x6515 = 26U;
	int32_t x6516 = INT32_MIN;
	volatile uint64_t t104 = 165479LLU;

    t104 = (((x6513|x6514)>>x6515)/x6516);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x6535 = 2;
	uint64_t t105 = 164201LLU;

    t105 = (((x6533|x6534)>>x6535)/x6536);

    if (t105 != 18085043209519168LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x6557 = -1;
	int8_t x6559 = 9;
	int64_t x6560 = -1LL;
	uint64_t t106 = 582662LLU;

    t106 = (((x6557|x6558)>>x6559)/x6560);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x6590 = 3U;
	static int8_t x6591 = 1;
	int32_t x6592 = INT32_MIN;
	volatile int32_t t107 = 4938;

    t107 = (((x6589|x6590)>>x6591)/x6592);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x6721 = 2276757365377786031LLU;
	uint16_t x6722 = 389U;
	static volatile uint32_t x6723 = 1U;
	int64_t x6724 = INT64_MAX;

    t108 = (((x6721|x6722)>>x6723)/x6724);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int16_t x6801 = 16;
	volatile int16_t x6802 = INT16_MAX;
	volatile uint8_t x6803 = 7U;
	static int32_t x6804 = -210373;
	volatile int32_t t109 = -6;

    t109 = (((x6801|x6802)>>x6803)/x6804);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x6849 = 99;
	volatile int64_t x6850 = INT64_MAX;
	int16_t x6851 = 0;
	static int64_t t110 = 92999388546495LL;

    t110 = (((x6849|x6850)>>x6851)/x6852);

    if (t110 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x6925 = INT16_MAX;
	int8_t x6926 = 0;
	volatile int32_t x6927 = 1;

    t111 = (((x6925|x6926)>>x6927)/x6928);

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x7065 = INT32_MAX;
	static uint64_t x7066 = UINT64_MAX;
	static uint16_t x7067 = 1U;
	int8_t x7068 = -8;
	volatile uint64_t t112 = 836966960125LLU;

    t112 = (((x7065|x7066)>>x7067)/x7068);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x7186 = 6LLU;
	int32_t x7188 = INT32_MAX;
	uint64_t t113 = 3091557LLU;

    t113 = (((x7185|x7186)>>x7187)/x7188);

    if (t113 != 16777216LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x7281 = INT64_MAX;
	int8_t x7283 = 0;
	int32_t x7284 = -400380;
	static volatile int64_t t114 = 2966063140110841LL;

    t114 = (((x7281|x7282)>>x7283)/x7284);

    if (t114 != -23036545374031LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x7390 = 842U;
	int16_t x7391 = 11;
	int16_t x7392 = -4;

    t115 = (((x7389|x7390)>>x7391)/x7392);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x7453 = 24U;
	uint32_t x7454 = 14092243U;
	int8_t x7455 = 27;
	volatile uint16_t x7456 = UINT16_MAX;
	uint32_t t116 = 5744U;

    t116 = (((x7453|x7454)>>x7455)/x7456);

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x7529 = INT64_MAX;
	int64_t x7530 = INT64_MAX;
	uint8_t x7531 = 43U;
	volatile int16_t x7532 = INT16_MAX;
	int64_t t117 = -25634065460LL;

    t117 = (((x7529|x7530)>>x7531)/x7532);

    if (t117 != 32LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x7582 = 152U;
	uint32_t x7583 = 3U;
	int64_t x7584 = -1LL;
	volatile int64_t t118 = 16762762720740LL;

    t118 = (((x7581|x7582)>>x7583)/x7584);

    if (t118 != -19LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x7705 = UINT8_MAX;
	uint8_t x7706 = 42U;
	int16_t x7707 = 1;
	volatile uint32_t x7708 = 25102897U;

    t119 = (((x7705|x7706)>>x7707)/x7708);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x7761 = 32LLU;
	int16_t x7762 = -1;
	volatile uint64_t x7764 = UINT64_MAX;
	volatile uint64_t t120 = 1926902LLU;

    t120 = (((x7761|x7762)>>x7763)/x7764);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x7801 = 1U;
	int16_t x7802 = -1;
	static volatile int64_t x7803 = 0LL;
	uint16_t x7804 = 1U;
	static volatile uint32_t t121 = UINT32_MAX;

    t121 = (((x7801|x7802)>>x7803)/x7804);

    if (t121 != UINT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x7929 = 460803636992875192LLU;
	static int16_t x7930 = INT16_MIN;
	static uint8_t x7932 = 26U;

    t122 = (((x7929|x7930)>>x7931)/x7932);

    if (t122 != 4LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x8077 = 22523051483LLU;
	int16_t x8078 = 95;
	uint16_t x8079 = 27U;
	int32_t x8080 = 20;
	volatile uint64_t t123 = 2929050214189488LLU;

    t123 = (((x8077|x8078)>>x8079)/x8080);

    if (t123 != 8LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x8097 = 11U;
	uint16_t x8098 = 0U;
	static uint64_t x8099 = 12LLU;
	volatile int32_t t124 = 1;

    t124 = (((x8097|x8098)>>x8099)/x8100);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x8145 = INT8_MIN;
	static uint64_t x8146 = 635076469871553387LLU;
	int8_t x8147 = 1;
	uint8_t x8148 = 33U;
	volatile uint64_t t125 = 2LLU;

    t125 = (((x8145|x8146)>>x8147)/x8148);

    if (t125 != 279496122328932599LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x8217 = INT32_MIN;
	static uint8_t x8219 = 3U;
	int16_t x8220 = INT16_MIN;
	uint32_t t126 = 249549U;

    t126 = (((x8217|x8218)>>x8219)/x8220);

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int32_t x8277 = -1;
	static uint64_t x8278 = UINT64_MAX;
	static volatile int16_t x8279 = 0;
	static int8_t x8280 = INT8_MAX;

    t127 = (((x8277|x8278)>>x8279)/x8280);

    if (t127 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x8293 = UINT32_MAX;
	uint64_t x8294 = 77895500072LLU;
	uint32_t x8295 = 32U;
	uint64_t t128 = 60LLU;

    t128 = (((x8293|x8294)>>x8295)/x8296);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint8_t x8453 = 0U;
	static int8_t x8454 = 19;
	static uint64_t x8455 = 2LLU;
	uint32_t x8456 = 3U;
	volatile uint32_t t129 = 48U;

    t129 = (((x8453|x8454)>>x8455)/x8456);

    if (t129 != 1U) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x8573 = INT8_MIN;
	static volatile uint32_t x8574 = 21U;
	volatile uint8_t x8575 = 0U;

    t130 = (((x8573|x8574)>>x8575)/x8576);

    if (t130 != 1U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x8733 = 0;
	uint16_t x8734 = UINT16_MAX;
	int8_t x8735 = 0;
	int32_t x8736 = INT32_MIN;
	static volatile int32_t t131 = -10411465;

    t131 = (((x8733|x8734)>>x8735)/x8736);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x9005 = INT32_MIN;
	uint64_t x9006 = UINT64_MAX;
	uint16_t x9007 = 56U;
	uint64_t x9008 = 7693752938LLU;
	volatile uint64_t t132 = 32LLU;

    t132 = (((x9005|x9006)>>x9007)/x9008);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x9149 = 40271U;
	volatile uint64_t x9150 = UINT64_MAX;
	int16_t x9151 = 1;
	static volatile int32_t x9152 = INT32_MAX;

    t133 = (((x9149|x9150)>>x9151)/x9152);

    if (t133 != 4294967298LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x9197 = INT32_MIN;
	uint32_t x9198 = 130U;
	uint8_t x9199 = 5U;

    t134 = (((x9197|x9198)>>x9199)/x9200);

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x9253 = INT16_MIN;
	volatile int8_t x9255 = 2;
	volatile int64_t t135 = -3022440295345LL;

    t135 = (((x9253|x9254)>>x9255)/x9256);

    if (t135 != -1073738185LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint64_t x9313 = UINT64_MAX;
	int16_t x9314 = INT16_MAX;
	int64_t x9315 = 14LL;
	int16_t x9316 = INT16_MIN;
	volatile uint64_t t136 = 12LLU;

    t136 = (((x9313|x9314)>>x9315)/x9316);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x9369 = INT8_MAX;
	int8_t x9370 = 23;
	uint8_t x9371 = 28U;
	int64_t x9372 = INT64_MIN;

    t137 = (((x9369|x9370)>>x9371)/x9372);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x9551 = 1;
	uint64_t t138 = 3750127LLU;

    t138 = (((x9549|x9550)>>x9551)/x9552);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x9561 = 183U;
	int8_t x9563 = 0;
	int32_t x9564 = INT32_MIN;
	volatile int64_t t139 = 11LL;

    t139 = (((x9561|x9562)>>x9563)/x9564);

    if (t139 != -487364426LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x9709 = 96790LLU;
	static int8_t x9711 = 6;
	int16_t x9712 = INT16_MIN;
	uint64_t t140 = 54821LLU;

    t140 = (((x9709|x9710)>>x9711)/x9712);

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x9713 = INT64_MAX;
	int64_t x9714 = 15674832489LL;
	int32_t x9715 = 43;
	int32_t x9716 = -1;
	volatile int64_t t141 = 77028200358683LL;

    t141 = (((x9713|x9714)>>x9715)/x9716);

    if (t141 != -1048575LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x9813 = 7U;
	static uint16_t x9814 = 193U;
	int32_t x9815 = 13;
	uint64_t t142 = 18264869293410575LLU;

    t142 = (((x9813|x9814)>>x9815)/x9816);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x9877 = 402;
	static int16_t x9878 = 13;
	int32_t x9879 = 7;
	static int16_t x9880 = INT16_MAX;
	volatile int32_t t143 = -3;

    t143 = (((x9877|x9878)>>x9879)/x9880);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x9905 = INT16_MAX;
	static uint8_t x9907 = 0U;
	int32_t x9908 = INT32_MAX;
	uint32_t t144 = 10696U;

    t144 = (((x9905|x9906)>>x9907)/x9908);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x9962 = 16U;
	static int32_t t145 = 7543890;

    t145 = (((x9961|x9962)>>x9963)/x9964);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x10053 = 126U;
	uint32_t x10054 = UINT32_MAX;
	int8_t x10056 = INT8_MIN;

    t146 = (((x10053|x10054)>>x10055)/x10056);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x10097 = UINT64_MAX;
	volatile int32_t x10098 = -8;
	uint8_t x10099 = 1U;
	volatile int32_t x10100 = -5272532;
	uint64_t t147 = 14187465119147LLU;

    t147 = (((x10097|x10098)>>x10099)/x10100);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x10173 = INT32_MAX;
	int8_t x10174 = 1;
	uint8_t x10175 = 5U;
	volatile int32_t t148 = -106298930;

    t148 = (((x10173|x10174)>>x10175)/x10176);

    if (t148 != 4793490) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x10267 = 14U;
	int16_t x10268 = INT16_MAX;

    t149 = (((x10265|x10266)>>x10267)/x10268);

    if (t149 != 17180393488LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x10305 = 19U;
	uint64_t x10306 = 16488LLU;
	static uint32_t x10307 = 1U;
	static int8_t x10308 = -1;
	static uint64_t t150 = 36563071LLU;

    t150 = (((x10305|x10306)>>x10307)/x10308);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x10329 = 2716618195478537LLU;
	int32_t x10330 = INT32_MIN;
	int16_t x10331 = 46;
	int8_t x10332 = 8;

    t151 = (((x10329|x10330)>>x10331)/x10332);

    if (t151 != 32767LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x10365 = INT16_MIN;
	static uint32_t x10366 = 996718203U;
	volatile uint16_t x10367 = 6U;
	int8_t x10368 = INT8_MIN;
	uint32_t t152 = 68U;

    t152 = (((x10365|x10366)>>x10367)/x10368);

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x10533 = 0U;
	uint8_t x10534 = 104U;
	int8_t x10535 = 13;
	static int8_t x10536 = INT8_MAX;
	volatile uint32_t t153 = 2U;

    t153 = (((x10533|x10534)>>x10535)/x10536);

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x10577 = 1;
	int32_t t154 = 0;

    t154 = (((x10577|x10578)>>x10579)/x10580);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x10587 = 1U;
	uint8_t x10588 = UINT8_MAX;

    t155 = (((x10585|x10586)>>x10587)/x10588);

    if (t155 != 4210752LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x10609 = 0LL;
	static volatile int32_t x10610 = 56;
	int16_t x10611 = 0;
	volatile uint32_t x10612 = UINT32_MAX;
	int64_t t156 = -15050611702LL;

    t156 = (((x10609|x10610)>>x10611)/x10612);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x10633 = UINT16_MAX;
	volatile uint16_t x10634 = 6U;
	static volatile int64_t x10636 = -1LL;
	volatile int64_t t157 = 889707LL;

    t157 = (((x10633|x10634)>>x10635)/x10636);

    if (t157 != -32767LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x10677 = UINT64_MAX;
	volatile int64_t x10678 = INT64_MIN;
	volatile int32_t x10680 = -1;
	static volatile uint64_t t158 = 14792539170748131LLU;

    t158 = (((x10677|x10678)>>x10679)/x10680);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x10713 = INT8_MAX;
	int32_t x10714 = INT32_MAX;
	uint8_t x10715 = 1U;
	int8_t x10716 = -1;
	int32_t t159 = 1662345;

    t159 = (((x10713|x10714)>>x10715)/x10716);

    if (t159 != -1073741823) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x10769 = 756872152193375LL;
	int32_t x10771 = 11;
	int8_t x10772 = -1;
	volatile int64_t t160 = -115768868LL;

    t160 = (((x10769|x10770)>>x10771)/x10772);

    if (t160 != -369566480563LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x10801 = UINT32_MAX;
	int16_t x10802 = INT16_MIN;
	volatile int16_t x10804 = INT16_MIN;
	uint32_t t161 = 3599U;

    t161 = (((x10801|x10802)>>x10803)/x10804);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x10853 = 0;
	uint64_t x10854 = UINT64_MAX;
	int8_t x10855 = 31;
	static int16_t x10856 = -1;
	uint64_t t162 = 853091162482LLU;

    t162 = (((x10853|x10854)>>x10855)/x10856);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x10874 = INT64_MAX;
	static volatile int64_t t163 = -1061944542386637LL;

    t163 = (((x10873|x10874)>>x10875)/x10876);

    if (t163 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x10929 = INT8_MAX;
	uint16_t x10930 = 10462U;
	uint32_t x10931 = 0U;
	volatile uint32_t x10932 = 30097381U;
	uint32_t t164 = 3U;

    t164 = (((x10929|x10930)>>x10931)/x10932);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x10949 = 35222729U;
	int64_t x10950 = 1739955233788925831LL;
	static uint8_t x10951 = 4U;
	uint16_t x10952 = 137U;
	volatile int64_t t165 = -43LL;

    t165 = (((x10949|x10950)>>x10951)/x10952);

    if (t165 != 793775197896688LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x11089 = INT16_MAX;
	int64_t x11090 = INT64_MAX;
	int64_t x11091 = 13LL;
	uint16_t x11092 = UINT16_MAX;

    t166 = (((x11089|x11090)>>x11091)/x11092);

    if (t166 != 17180131332LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x11097 = 196U;
	int32_t x11098 = -372237;
	volatile uint8_t x11099 = 1U;
	int8_t x11100 = -6;
	uint32_t t167 = 2072317157U;

    t167 = (((x11097|x11098)>>x11099)/x11100);

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint32_t x11381 = 170577U;
	volatile int8_t x11382 = INT8_MIN;
	uint8_t x11383 = 2U;
	uint8_t x11384 = 18U;
	uint32_t t168 = 22295U;

    t168 = (((x11381|x11382)>>x11383)/x11384);

    if (t168 != 59652322U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x11413 = 1U;
	uint8_t x11414 = 67U;
	volatile uint32_t x11415 = 0U;
	volatile int64_t x11416 = INT64_MAX;
	static int64_t t169 = 832063588LL;

    t169 = (((x11413|x11414)>>x11415)/x11416);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x11497 = UINT64_MAX;
	static int32_t x11498 = -64;
	uint64_t x11499 = 5LLU;
	int8_t x11500 = -1;
	uint64_t t170 = 650488348496LLU;

    t170 = (((x11497|x11498)>>x11499)/x11500);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x11609 = UINT8_MAX;
	volatile uint8_t x11611 = 11U;
	int16_t x11612 = -1;
	uint64_t t171 = 12845603425087356LLU;

    t171 = (((x11609|x11610)>>x11611)/x11612);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x11634 = 57U;
	int32_t x11635 = 0;
	int16_t x11636 = INT16_MIN;
	uint32_t t172 = 0U;

    t172 = (((x11633|x11634)>>x11635)/x11636);

    if (t172 != 1U) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x11761 = UINT32_MAX;
	int32_t x11762 = INT32_MIN;
	uint32_t x11763 = 18U;
	static int64_t x11764 = -1LL;
	int64_t t173 = 165LL;

    t173 = (((x11761|x11762)>>x11763)/x11764);

    if (t173 != -16383LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x11766 = UINT64_MAX;
	uint8_t x11767 = 0U;
	static int32_t x11768 = -1;

    t174 = (((x11765|x11766)>>x11767)/x11768);

    if (t174 != 1LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x11825 = 4098865U;
	uint8_t x11827 = 2U;
	int32_t x11828 = INT32_MIN;
	uint32_t t175 = 1244U;

    t175 = (((x11825|x11826)>>x11827)/x11828);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x11857 = INT16_MAX;
	volatile int64_t x11858 = INT64_MAX;
	uint8_t x11859 = 16U;
	int8_t x11860 = 26;
	volatile int64_t t176 = 21249459LL;

    t176 = (((x11857|x11858)>>x11859)/x11860);

    if (t176 != 5412980321358LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x11929 = 30U;
	int32_t x11930 = INT32_MIN;
	uint8_t x11932 = 17U;
	volatile uint32_t t177 = 32U;

    t177 = (((x11929|x11930)>>x11931)/x11932);

    if (t177 != 63161284U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x11949 = UINT32_MAX;
	uint16_t x11950 = 446U;
	int32_t x11951 = 0;
	uint8_t x11952 = 20U;
	uint32_t t178 = 0U;

    t178 = (((x11949|x11950)>>x11951)/x11952);

    if (t178 != 214748364U) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x11994 = INT16_MIN;
	static uint16_t x11995 = 2U;
	int16_t x11996 = INT16_MIN;
	static volatile uint64_t t179 = 176LLU;

    t179 = (((x11993|x11994)>>x11995)/x11996);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x12025 = 109665U;
	static int32_t x12026 = INT32_MIN;
	uint16_t x12027 = 3U;
	int16_t x12028 = INT16_MAX;

    t180 = (((x12025|x12026)>>x12027)/x12028);

    if (t180 != 8192U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x12029 = 22264832U;
	uint32_t x12030 = 2869357U;
	int64_t x12031 = 0LL;
	int8_t x12032 = -1;

    t181 = (((x12029|x12030)>>x12031)/x12032);

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x12057 = INT64_MAX;
	volatile uint16_t x12058 = 26U;
	static uint8_t x12059 = 12U;
	uint32_t x12060 = 9657U;
	volatile int64_t t182 = 112LL;

    t182 = (((x12057|x12058)>>x12059)/x12060);

    if (t182 != 233177986298LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x12077 = -1;
	uint64_t x12078 = UINT64_MAX;
	volatile uint16_t x12079 = 35U;
	static uint8_t x12080 = UINT8_MAX;

    t183 = (((x12077|x12078)>>x12079)/x12080);

    if (t183 != 2105376LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x12190 = 0;
	volatile int8_t x12191 = 0;
	int32_t x12192 = INT32_MAX;

    t184 = (((x12189|x12190)>>x12191)/x12192);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x12213 = -21;
	uint64_t x12214 = UINT64_MAX;
	volatile uint16_t x12215 = 17U;
	static int8_t x12216 = INT8_MIN;
	volatile uint64_t t185 = 922080295457020512LLU;

    t185 = (((x12213|x12214)>>x12215)/x12216);

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x12225 = 101480U;
	int16_t x12226 = INT16_MAX;
	volatile int8_t x12227 = 2;
	int64_t x12228 = -1LL;

    t186 = (((x12225|x12226)>>x12227)/x12228);

    if (t186 != -32767LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x12302 = INT8_MAX;
	volatile uint16_t x12303 = 24U;
	static volatile uint64_t x12304 = UINT64_MAX;
	volatile uint64_t t187 = 2669233LLU;

    t187 = (((x12301|x12302)>>x12303)/x12304);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x12537 = 162;
	volatile uint64_t x12538 = UINT64_MAX;
	int16_t x12539 = 11;
	uint64_t t188 = 25037226LLU;

    t188 = (((x12537|x12538)>>x12539)/x12540);

    if (t188 != 274886295808LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x12717 = INT16_MAX;
	static uint32_t x12718 = 923593U;
	int8_t x12719 = 0;
	static uint8_t x12720 = UINT8_MAX;

    t189 = (((x12717|x12718)>>x12719)/x12720);

    if (t189 != 3726U) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x12725 = 1;
	volatile uint16_t x12726 = UINT16_MAX;
	uint16_t x12727 = 25U;
	volatile uint64_t t190 = 17LLU;

    t190 = (((x12725|x12726)>>x12727)/x12728);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x12750 = 1;
	int32_t x12752 = -6;
	uint64_t t191 = 1035365366603LLU;

    t191 = (((x12749|x12750)>>x12751)/x12752);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x12774 = INT64_MIN;
	int32_t x12775 = 4;
	int32_t x12776 = -1;
	uint64_t t192 = 413882998011578LLU;

    t192 = (((x12773|x12774)>>x12775)/x12776);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x12805 = UINT64_MAX;
	uint16_t x12806 = UINT16_MAX;
	static int16_t x12808 = 2;

    t193 = (((x12805|x12806)>>x12807)/x12808);

    if (t193 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x12834 = 3U;
	int16_t x12835 = 0;
	volatile int64_t x12836 = 2400238209773944LL;
	static volatile int64_t t194 = -2951550063254145295LL;

    t194 = (((x12833|x12834)>>x12835)/x12836);

    if (t194 != 3842LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x12865 = INT8_MIN;
	volatile uint64_t x12866 = 8391231175869LLU;
	int8_t x12867 = 5;

    t195 = (((x12865|x12866)>>x12867)/x12868);

    if (t195 != 17592722931712LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x12905 = INT32_MIN;
	static uint64_t x12906 = 4LLU;
	int16_t x12907 = 11;
	uint8_t x12908 = 5U;
	volatile uint64_t t196 = 829916191332404LLU;

    t196 = (((x12905|x12906)>>x12907)/x12908);

    if (t196 != 1801439850738483LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x12929 = 13;
	static uint8_t x12930 = 15U;
	int32_t x12931 = 30;
	static uint8_t x12932 = 31U;
	volatile int32_t t197 = 310690800;

    t197 = (((x12929|x12930)>>x12931)/x12932);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x12937 = 2939;
	volatile uint16_t x12938 = UINT16_MAX;
	volatile int8_t x12939 = 0;
	volatile uint16_t x12940 = UINT16_MAX;
	volatile int32_t t198 = 2;

    t198 = (((x12937|x12938)>>x12939)/x12940);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x12941 = 42U;
	int32_t x12944 = INT32_MAX;
	int64_t t199 = -248LL;

    t199 = (((x12941|x12942)>>x12943)/x12944);

    if (t199 != 0LL) { NG(); } else { ; }
	
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



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

static int16_t x10 = -45;
volatile int8_t x12 = 1;
int32_t x117 = 1;
volatile int64_t x126 = -1LL;
volatile uint8_t x166 = 0U;
uint16_t x168 = 10U;
static int64_t x410 = -1LL;
uint8_t x412 = 5U;
int8_t x546 = INT8_MAX;
uint8_t x548 = 5U;
static uint8_t x568 = 1U;
static volatile int16_t x605 = -1;
static int64_t x613 = 494LL;
uint32_t x665 = 0U;
int8_t x666 = INT8_MAX;
int8_t x668 = 1;
volatile int32_t t15 = 3821;
volatile int32_t x982 = INT32_MAX;
static uint32_t t23 = 13915U;
uint64_t x1127 = 1154LLU;
static int8_t x1173 = -1;
uint32_t x1175 = UINT32_MAX;
static uint64_t x1289 = 15692LLU;
int32_t x1290 = INT32_MIN;
uint16_t x1292 = 1U;
volatile uint64_t t27 = 12729258LLU;
int8_t x1353 = -1;
uint32_t x1354 = 137U;
int32_t x1487 = 46098818;
static volatile int64_t x1520 = 0LL;
int32_t t30 = -18939;
static volatile uint32_t t32 = 15295U;
uint32_t x1589 = 1061042U;
static int16_t x1699 = -11;
volatile uint32_t t37 = 42U;
static uint32_t t41 = 33118039U;
uint64_t x2001 = 140381470577619153LLU;
int16_t x2022 = 10412;
uint64_t x2107 = UINT64_MAX;
uint32_t x2108 = 0U;
static volatile int16_t x2156 = 0;
int8_t x2200 = 23;
uint16_t x2348 = 2U;
int16_t x2622 = -1;
int8_t x2623 = INT8_MIN;
volatile int8_t x2636 = 1;
uint32_t x2648 = 3U;
volatile uint8_t x2652 = 1U;
uint16_t x2665 = 1U;
static uint64_t x2733 = 2071258LLU;
uint8_t x2827 = 17U;
uint32_t x3139 = 17582U;
static volatile int32_t t62 = 7577407;
uint32_t x3227 = UINT32_MAX;
volatile uint64_t t65 = 2107832105424LLU;
static int32_t t66 = -3971119;
static int16_t x3391 = INT16_MIN;
int32_t x3543 = INT32_MIN;
uint64_t x3675 = 15668439LLU;
uint8_t x3676 = 0U;
uint32_t x3785 = UINT32_MAX;
volatile int32_t t75 = -210;
int64_t x3811 = -1LL;
int32_t t76 = -101849;
uint64_t x3862 = 40LLU;
int8_t x3864 = 3;
volatile int16_t x3890 = 2689;
static int32_t t78 = -1481534;
uint64_t x3893 = UINT64_MAX;
int16_t x3942 = INT16_MIN;
uint32_t x3943 = UINT32_MAX;
static int8_t x4010 = 2;
volatile int8_t x4080 = 0;
volatile int16_t x4417 = -1;
int8_t x4427 = INT8_MAX;
static volatile int16_t x4509 = INT16_MAX;
static volatile uint8_t x4510 = 121U;
uint16_t x4512 = 4U;
volatile int32_t t89 = 15199;
static uint32_t x4517 = 1U;
volatile uint32_t t90 = 3921975U;
uint8_t x4604 = 27U;
volatile int16_t x4605 = INT16_MAX;
int16_t x4608 = 0;
uint64_t t94 = 75538140438344LLU;
int32_t x4745 = -1;
int16_t x4822 = 672;
int16_t x4823 = INT16_MIN;
uint16_t x4824 = 28U;
volatile int32_t t96 = -13710026;
int64_t x4846 = 1683LL;
volatile uint32_t t97 = 11U;
uint32_t x5248 = 7U;
static volatile int16_t x5268 = 0;
static int8_t x5270 = 6;
uint8_t x5340 = 8U;
uint8_t x5428 = 2U;
int64_t x5684 = 5LL;
static uint16_t x5701 = 36U;
int32_t x5704 = 7;
uint16_t x5777 = 41U;
int32_t x5779 = 0;
static int64_t x5857 = -1LL;
int16_t x5858 = INT16_MIN;
uint64_t x5885 = UINT64_MAX;
volatile uint64_t t114 = 22LLU;
static int8_t x5969 = -1;
int16_t x6131 = -1;
static uint16_t x6132 = 1U;
int16_t x6134 = INT16_MIN;
int64_t x6154 = -20986006488844LL;
int16_t x6156 = 24;
static uint64_t x6169 = 116282178104LLU;
static uint8_t x6172 = 23U;
volatile uint8_t x6272 = 3U;
int64_t x6308 = 0LL;
int32_t x6319 = 32719;
static int8_t x6320 = 0;
int16_t x6330 = -264;
volatile int16_t x6331 = 8090;
int16_t x6332 = 0;
uint64_t x6465 = 3463189490796799LLU;
int16_t x6468 = 2;
volatile uint16_t x6470 = 14U;
static uint8_t x6776 = 0U;
int16_t x6789 = 121;
static uint32_t x6813 = 832403529U;
int16_t x6815 = 1;
static uint64_t x7057 = 349849976774226279LLU;
int64_t x7069 = -1LL;
int16_t x7113 = -1;
uint32_t x7149 = 7U;
int64_t x7150 = INT64_MIN;
uint32_t t146 = 7U;
int32_t x7218 = INT32_MAX;
static volatile int8_t x7219 = 0;
static int16_t x7226 = -209;
uint8_t x7228 = 3U;
int64_t x7489 = 5LL;
uint8_t x7492 = 22U;
int32_t x7586 = -92558;
int64_t x7587 = -1LL;
uint32_t x7690 = UINT32_MAX;
static int8_t x7700 = 1;
static uint8_t x7722 = 9U;
int32_t x7724 = 7;
int8_t x7746 = -1;
volatile int32_t t160 = 3186305;
static uint64_t x7833 = 23980877LLU;
volatile int8_t x7836 = 24;
volatile uint16_t x7849 = UINT16_MAX;
int64_t x7958 = -53412277031LL;
static uint8_t x8080 = 0U;
static volatile int32_t t168 = 28709225;
int64_t x8310 = INT64_MIN;
volatile int16_t x8375 = INT16_MIN;
int8_t x8376 = 20;
uint8_t x8413 = 2U;
int8_t x8414 = INT8_MIN;
static int8_t x8583 = -1;
int32_t x8618 = INT32_MAX;
uint8_t x8664 = 0U;
int16_t x8713 = 944;
volatile int8_t x8907 = -14;
int32_t x9116 = 1;
volatile int32_t t182 = -22;
static int16_t x9167 = 15381;
static uint32_t x9303 = UINT32_MAX;
int32_t t185 = 14551;
uint32_t x9321 = UINT32_MAX;
volatile uint32_t t186 = 2U;
static volatile uint16_t x9334 = UINT16_MAX;
uint8_t x9336 = 1U;
uint8_t x9407 = UINT8_MAX;
volatile uint32_t t189 = 210281U;
static uint32_t x9519 = 3352746U;
uint8_t x9613 = 26U;
int32_t x9719 = INT32_MIN;
volatile uint16_t x9759 = 1U;
int32_t t194 = -8500856;
int8_t x10072 = 1;


void f0(void) {
    	uint64_t x9 = 203999687764404LLU;
	static int32_t x11 = -6;
	static volatile uint64_t t0 = 861625410345450253LLU;

    t0 = ((x9+(x10!=x11))<<x12);

    if (t0 != 407999375528810LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x21 = -1LL;
	volatile uint32_t x22 = UINT32_MAX;
	uint64_t x23 = UINT64_MAX;
	int32_t x24 = 0;
	volatile int64_t t1 = -722LL;

    t1 = ((x21+(x22!=x23))<<x24);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x118 = INT8_MAX;
	volatile int32_t x119 = INT32_MIN;
	volatile uint64_t x120 = 1LLU;
	int32_t t2 = -17004723;

    t2 = ((x117+(x118!=x119))<<x120);

    if (t2 != 4) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x125 = -1;
	static uint16_t x127 = 3U;
	uint8_t x128 = 2U;
	volatile int32_t t3 = -21741;

    t3 = ((x125+(x126!=x127))<<x128);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x165 = 0;
	int32_t x167 = -307;
	volatile int32_t t4 = -1011241806;

    t4 = ((x165+(x166!=x167))<<x168);

    if (t4 != 1024) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x181 = UINT8_MAX;
	volatile int8_t x182 = INT8_MIN;
	int32_t x183 = INT32_MIN;
	volatile int8_t x184 = 0;
	volatile int32_t t5 = 9848776;

    t5 = ((x181+(x182!=x183))<<x184);

    if (t5 != 256) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x389 = 6U;
	int32_t x390 = INT32_MAX;
	uint32_t x391 = 114814U;
	int64_t x392 = 3LL;
	uint32_t t6 = 224317494U;

    t6 = ((x389+(x390!=x391))<<x392);

    if (t6 != 56U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x409 = 1848473LLU;
	volatile int32_t x411 = INT32_MAX;
	volatile uint64_t t7 = 7662742337LLU;

    t7 = ((x409+(x410!=x411))<<x412);

    if (t7 != 59151168LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x545 = 4399;
	uint8_t x547 = UINT8_MAX;
	volatile int32_t t8 = -401;

    t8 = ((x545+(x546!=x547))<<x548);

    if (t8 != 140800) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x565 = INT8_MAX;
	int32_t x566 = INT32_MIN;
	uint16_t x567 = 48U;
	volatile int32_t t9 = -4096721;

    t9 = ((x565+(x566!=x567))<<x568);

    if (t9 != 256) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x589 = INT8_MAX;
	static volatile uint8_t x590 = 123U;
	uint16_t x591 = 16416U;
	int16_t x592 = 3;
	static int32_t t10 = -78769299;

    t10 = ((x589+(x590!=x591))<<x592);

    if (t10 != 1024) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x606 = INT64_MIN;
	int16_t x607 = INT16_MIN;
	uint8_t x608 = 29U;
	int32_t t11 = -18;

    t11 = ((x605+(x606!=x607))<<x608);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint16_t x614 = UINT16_MAX;
	uint32_t x615 = 255U;
	uint8_t x616 = 0U;
	volatile int64_t t12 = -374LL;

    t12 = ((x613+(x614!=x615))<<x616);

    if (t12 != 495LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x649 = UINT64_MAX;
	int8_t x650 = -1;
	int16_t x651 = -2020;
	static uint8_t x652 = 61U;
	volatile uint64_t t13 = 442LLU;

    t13 = ((x649+(x650!=x651))<<x652);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x667 = INT8_MIN;
	uint32_t t14 = 487561095U;

    t14 = ((x665+(x666!=x667))<<x668);

    if (t14 != 2U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x805 = INT8_MAX;
	uint64_t x806 = UINT64_MAX;
	int16_t x807 = INT16_MIN;
	static uint8_t x808 = 1U;

    t15 = ((x805+(x806!=x807))<<x808);

    if (t15 != 256) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x837 = 4063;
	int64_t x838 = INT64_MIN;
	volatile uint16_t x839 = UINT16_MAX;
	static uint16_t x840 = 19U;
	int32_t t16 = 1;

    t16 = ((x837+(x838!=x839))<<x840);

    if (t16 != 2130706432) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x881 = 441068U;
	uint16_t x882 = UINT16_MAX;
	uint8_t x883 = 38U;
	volatile int8_t x884 = 7;
	volatile uint32_t t17 = 12576086U;

    t17 = ((x881+(x882!=x883))<<x884);

    if (t17 != 56456832U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x925 = 1884897U;
	int16_t x926 = INT16_MAX;
	int8_t x927 = INT8_MIN;
	uint8_t x928 = 1U;
	static volatile uint32_t t18 = 346U;

    t18 = ((x925+(x926!=x927))<<x928);

    if (t18 != 3769796U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x945 = 0U;
	int8_t x946 = INT8_MIN;
	int32_t x947 = -1;
	static uint8_t x948 = 0U;
	volatile uint32_t t19 = 1368U;

    t19 = ((x945+(x946!=x947))<<x948);

    if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x981 = 512767213LLU;
	static volatile int8_t x983 = INT8_MIN;
	static uint16_t x984 = 8U;
	volatile uint64_t t20 = 695187LLU;

    t20 = ((x981+(x982!=x983))<<x984);

    if (t20 != 131268406784LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x993 = 6;
	int16_t x994 = INT16_MAX;
	int8_t x995 = 2;
	static uint8_t x996 = 2U;
	int32_t t21 = -579707238;

    t21 = ((x993+(x994!=x995))<<x996);

    if (t21 != 28) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x1069 = 0;
	uint8_t x1070 = 14U;
	int8_t x1071 = INT8_MIN;
	int64_t x1072 = 0LL;
	static int32_t t22 = 378591805;

    t22 = ((x1069+(x1070!=x1071))<<x1072);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x1081 = 3158U;
	static int64_t x1082 = 945231LL;
	uint64_t x1083 = 69LLU;
	int8_t x1084 = 21;

    t23 = ((x1081+(x1082!=x1083))<<x1084);

    if (t23 != 2329935872U) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x1125 = INT16_MAX;
	uint32_t x1126 = 255U;
	uint8_t x1128 = 15U;
	volatile int32_t t24 = -4154;

    t24 = ((x1125+(x1126!=x1127))<<x1128);

    if (t24 != 1073741824) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x1161 = UINT64_MAX;
	int8_t x1162 = -23;
	int16_t x1163 = INT16_MIN;
	uint16_t x1164 = 1U;
	uint64_t t25 = 16435194208623484LLU;

    t25 = ((x1161+(x1162!=x1163))<<x1164);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x1174 = 14U;
	uint16_t x1176 = 3U;
	volatile int32_t t26 = -135817;

    t26 = ((x1173+(x1174!=x1175))<<x1176);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x1291 = 0U;

    t27 = ((x1289+(x1290!=x1291))<<x1292);

    if (t27 != 31386LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x1355 = INT8_MIN;
	int8_t x1356 = 0;
	volatile int32_t t28 = 270361914;

    t28 = ((x1353+(x1354!=x1355))<<x1356);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x1485 = -1;
	volatile uint16_t x1486 = 303U;
	volatile uint32_t x1488 = 12U;
	int32_t t29 = 6064926;

    t29 = ((x1485+(x1486!=x1487))<<x1488);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1517 = 1;
	static volatile uint16_t x1518 = 13U;
	int32_t x1519 = INT32_MIN;

    t30 = ((x1517+(x1518!=x1519))<<x1520);

    if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x1537 = UINT64_MAX;
	uint32_t x1538 = 688065666U;
	int32_t x1539 = INT32_MIN;
	volatile uint8_t x1540 = 40U;
	static volatile uint64_t t31 = 7LLU;

    t31 = ((x1537+(x1538!=x1539))<<x1540);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x1561 = 1U;
	int64_t x1562 = INT64_MIN;
	volatile uint16_t x1563 = 13U;
	uint8_t x1564 = 13U;

    t32 = ((x1561+(x1562!=x1563))<<x1564);

    if (t32 != 16384U) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x1590 = INT8_MIN;
	int8_t x1591 = INT8_MIN;
	uint16_t x1592 = 21U;
	uint32_t t33 = 22992737U;

    t33 = ((x1589+(x1590!=x1591))<<x1592);

    if (t33 != 373293056U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x1629 = UINT16_MAX;
	int32_t x1630 = 84;
	static int8_t x1631 = INT8_MAX;
	static int8_t x1632 = 6;
	volatile int32_t t34 = 62;

    t34 = ((x1629+(x1630!=x1631))<<x1632);

    if (t34 != 4194304) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x1697 = 75U;
	int8_t x1698 = -1;
	static int8_t x1700 = 1;
	static volatile int32_t t35 = -17064;

    t35 = ((x1697+(x1698!=x1699))<<x1700);

    if (t35 != 152) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint32_t x1713 = 193639U;
	int8_t x1714 = -3;
	static uint8_t x1715 = 78U;
	int32_t x1716 = 1;
	static volatile uint32_t t36 = 233U;

    t36 = ((x1713+(x1714!=x1715))<<x1716);

    if (t36 != 387280U) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint32_t x1793 = 23920U;
	uint32_t x1794 = UINT32_MAX;
	int8_t x1795 = INT8_MAX;
	uint8_t x1796 = 3U;

    t37 = ((x1793+(x1794!=x1795))<<x1796);

    if (t37 != 191368U) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x1865 = 5435LL;
	int32_t x1866 = INT32_MIN;
	uint16_t x1867 = 258U;
	volatile uint32_t x1868 = 37U;
	int64_t t38 = 822593954LL;

    t38 = ((x1865+(x1866!=x1867))<<x1868);

    if (t38 != 747118151073792LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x1889 = UINT32_MAX;
	int8_t x1890 = INT8_MIN;
	uint16_t x1891 = 955U;
	static volatile uint8_t x1892 = 0U;
	static uint32_t t39 = 0U;

    t39 = ((x1889+(x1890!=x1891))<<x1892);

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x1925 = UINT32_MAX;
	int64_t x1926 = INT64_MAX;
	uint8_t x1927 = UINT8_MAX;
	static int8_t x1928 = 5;
	volatile uint32_t t40 = 528352144U;

    t40 = ((x1925+(x1926!=x1927))<<x1928);

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x1945 = 725014U;
	static uint32_t x1946 = UINT32_MAX;
	int64_t x1947 = INT64_MIN;
	int16_t x1948 = 1;

    t41 = ((x1945+(x1946!=x1947))<<x1948);

    if (t41 != 1450030U) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x2002 = INT32_MIN;
	int8_t x2003 = -20;
	volatile int32_t x2004 = 0;
	uint64_t t42 = 136054635149972LLU;

    t42 = ((x2001+(x2002!=x2003))<<x2004);

    if (t42 != 140381470577619154LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x2021 = 13214U;
	int16_t x2023 = 1;
	uint8_t x2024 = 4U;
	volatile uint32_t t43 = 109U;

    t43 = ((x2021+(x2022!=x2023))<<x2024);

    if (t43 != 211440U) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int16_t x2077 = INT16_MAX;
	static int8_t x2078 = INT8_MAX;
	int64_t x2079 = -12LL;
	int8_t x2080 = 4;
	static volatile int32_t t44 = 393;

    t44 = ((x2077+(x2078!=x2079))<<x2080);

    if (t44 != 524288) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x2105 = -1LL;
	static int8_t x2106 = INT8_MAX;
	int64_t t45 = 0LL;

    t45 = ((x2105+(x2106!=x2107))<<x2108);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x2109 = 9U;
	static int64_t x2110 = INT64_MAX;
	static uint32_t x2111 = UINT32_MAX;
	uint16_t x2112 = 2U;
	int32_t t46 = -15406;

    t46 = ((x2109+(x2110!=x2111))<<x2112);

    if (t46 != 40) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x2153 = INT8_MAX;
	int64_t x2154 = INT64_MIN;
	int16_t x2155 = 13402;
	volatile int32_t t47 = -97403;

    t47 = ((x2153+(x2154!=x2155))<<x2156);

    if (t47 != 128) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x2197 = -1LL;
	int64_t x2198 = -1LL;
	uint64_t x2199 = 15552780171LLU;
	static int64_t t48 = 1LL;

    t48 = ((x2197+(x2198!=x2199))<<x2200);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x2233 = INT8_MAX;
	static int16_t x2234 = -1;
	int64_t x2235 = -11263688547LL;
	uint8_t x2236 = 7U;
	int32_t t49 = 30893395;

    t49 = ((x2233+(x2234!=x2235))<<x2236);

    if (t49 != 16384) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x2265 = 3;
	int64_t x2266 = INT64_MAX;
	int8_t x2267 = INT8_MIN;
	uint32_t x2268 = 4U;
	static int32_t t50 = 888;

    t50 = ((x2265+(x2266!=x2267))<<x2268);

    if (t50 != 64) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x2345 = -1;
	int64_t x2346 = INT64_MAX;
	static uint32_t x2347 = 77326903U;
	static int32_t t51 = -239951329;

    t51 = ((x2345+(x2346!=x2347))<<x2348);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x2485 = 69359849532LLU;
	static volatile int32_t x2486 = INT32_MIN;
	int8_t x2487 = INT8_MAX;
	int8_t x2488 = 14;
	uint64_t t52 = 1LLU;

    t52 = ((x2485+(x2486!=x2487))<<x2488);

    if (t52 != 1136391774748672LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x2621 = 24351U;
	uint8_t x2624 = 0U;
	static volatile int32_t t53 = -1331461;

    t53 = ((x2621+(x2622!=x2623))<<x2624);

    if (t53 != 24352) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x2633 = 22U;
	int32_t x2634 = -1;
	volatile int32_t x2635 = 0;
	volatile int32_t t54 = -342;

    t54 = ((x2633+(x2634!=x2635))<<x2636);

    if (t54 != 46) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x2645 = 88955465685088LLU;
	static uint8_t x2646 = 5U;
	uint8_t x2647 = 103U;
	uint64_t t55 = 6LLU;

    t55 = ((x2645+(x2646!=x2647))<<x2648);

    if (t55 != 711643725480712LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x2649 = -1;
	int64_t x2650 = INT64_MIN;
	static int8_t x2651 = INT8_MIN;
	volatile int32_t t56 = -298941976;

    t56 = ((x2649+(x2650!=x2651))<<x2652);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x2666 = INT64_MIN;
	int32_t x2667 = INT32_MIN;
	uint16_t x2668 = 11U;
	int32_t t57 = -471087;

    t57 = ((x2665+(x2666!=x2667))<<x2668);

    if (t57 != 4096) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x2713 = UINT64_MAX;
	int64_t x2714 = -1LL;
	static int32_t x2715 = INT32_MIN;
	static volatile uint16_t x2716 = 21U;
	volatile uint64_t t58 = 1953601878922376LLU;

    t58 = ((x2713+(x2714!=x2715))<<x2716);

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x2734 = INT32_MIN;
	int8_t x2735 = -44;
	int8_t x2736 = 0;
	volatile uint64_t t59 = 24383229LLU;

    t59 = ((x2733+(x2734!=x2735))<<x2736);

    if (t59 != 2071259LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x2825 = 0;
	uint16_t x2826 = 22U;
	volatile uint8_t x2828 = 10U;
	static volatile int32_t t60 = 2;

    t60 = ((x2825+(x2826!=x2827))<<x2828);

    if (t60 != 1024) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x2905 = 105275854U;
	int16_t x2906 = INT16_MIN;
	uint64_t x2907 = 487LLU;
	int8_t x2908 = 0;
	volatile uint32_t t61 = 951877U;

    t61 = ((x2905+(x2906!=x2907))<<x2908);

    if (t61 != 105275855U) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint8_t x3137 = UINT8_MAX;
	volatile int8_t x3138 = INT8_MAX;
	static int8_t x3140 = 6;

    t62 = ((x3137+(x3138!=x3139))<<x3140);

    if (t62 != 16384) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x3145 = 0U;
	int64_t x3146 = 63190LL;
	uint8_t x3147 = 13U;
	uint8_t x3148 = 1U;
	int32_t t63 = -1;

    t63 = ((x3145+(x3146!=x3147))<<x3148);

    if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x3201 = -1LL;
	static int16_t x3202 = INT16_MIN;
	int64_t x3203 = INT64_MIN;
	int16_t x3204 = 23;
	int64_t t64 = -420457927809480340LL;

    t64 = ((x3201+(x3202!=x3203))<<x3204);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x3225 = UINT64_MAX;
	uint8_t x3226 = 21U;
	int8_t x3228 = 34;

    t65 = ((x3225+(x3226!=x3227))<<x3228);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x3317 = -1;
	int64_t x3318 = -1LL;
	int16_t x3319 = -703;
	uint8_t x3320 = 0U;

    t66 = ((x3317+(x3318!=x3319))<<x3320);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x3369 = -1;
	uint16_t x3370 = 30U;
	uint8_t x3371 = 12U;
	volatile uint8_t x3372 = 3U;
	volatile int32_t t67 = -941234;

    t67 = ((x3369+(x3370!=x3371))<<x3372);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x3389 = UINT16_MAX;
	int16_t x3390 = 0;
	uint8_t x3392 = 0U;
	volatile int32_t t68 = 131707747;

    t68 = ((x3389+(x3390!=x3391))<<x3392);

    if (t68 != 65536) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x3409 = -1;
	static uint8_t x3410 = 14U;
	int16_t x3411 = -1;
	static int8_t x3412 = 1;
	volatile int32_t t69 = 30494685;

    t69 = ((x3409+(x3410!=x3411))<<x3412);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x3541 = -1LL;
	uint16_t x3542 = 134U;
	volatile uint8_t x3544 = 27U;
	static volatile int64_t t70 = 49300215901500288LL;

    t70 = ((x3541+(x3542!=x3543))<<x3544);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x3629 = 3764466U;
	static volatile int32_t x3630 = INT32_MAX;
	static volatile uint16_t x3631 = 1U;
	uint8_t x3632 = 0U;
	static volatile uint32_t t71 = 131181686U;

    t71 = ((x3629+(x3630!=x3631))<<x3632);

    if (t71 != 3764467U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x3673 = -1;
	int32_t x3674 = -2746394;
	int32_t t72 = 0;

    t72 = ((x3673+(x3674!=x3675))<<x3676);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x3757 = 521760U;
	int64_t x3758 = INT64_MIN;
	uint16_t x3759 = 13U;
	static int16_t x3760 = 0;
	uint32_t t73 = 7587489U;

    t73 = ((x3757+(x3758!=x3759))<<x3760);

    if (t73 != 521761U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x3786 = 72U;
	int64_t x3787 = INT64_MAX;
	static volatile uint8_t x3788 = 7U;
	static volatile uint32_t t74 = 1U;

    t74 = ((x3785+(x3786!=x3787))<<x3788);

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x3789 = 345;
	int64_t x3790 = INT64_MIN;
	int32_t x3791 = -1;
	uint8_t x3792 = 3U;

    t75 = ((x3789+(x3790!=x3791))<<x3792);

    if (t75 != 2768) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x3809 = 0;
	static int32_t x3810 = INT32_MIN;
	int16_t x3812 = 1;

    t76 = ((x3809+(x3810!=x3811))<<x3812);

    if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x3861 = 28917U;
	uint8_t x3863 = 3U;
	int32_t t77 = 22070741;

    t77 = ((x3861+(x3862!=x3863))<<x3864);

    if (t77 != 231344) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x3889 = UINT16_MAX;
	uint16_t x3891 = 8U;
	int16_t x3892 = 11;

    t78 = ((x3889+(x3890!=x3891))<<x3892);

    if (t78 != 134217728) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x3894 = 21LLU;
	uint16_t x3895 = UINT16_MAX;
	volatile int16_t x3896 = 56;
	uint64_t t79 = 485289529795LLU;

    t79 = ((x3893+(x3894!=x3895))<<x3896);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int8_t x3941 = -1;
	uint16_t x3944 = 29U;
	int32_t t80 = -20;

    t80 = ((x3941+(x3942!=x3943))<<x3944);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x4009 = UINT16_MAX;
	uint32_t x4011 = 5147U;
	volatile uint16_t x4012 = 0U;
	static volatile int32_t t81 = -795202813;

    t81 = ((x4009+(x4010!=x4011))<<x4012);

    if (t81 != 65536) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x4077 = 3U;
	int32_t x4078 = INT32_MIN;
	uint8_t x4079 = 0U;
	static volatile int32_t t82 = 6272;

    t82 = ((x4077+(x4078!=x4079))<<x4080);

    if (t82 != 4) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x4093 = 411U;
	int64_t x4094 = 10301LL;
	volatile uint64_t x4095 = UINT64_MAX;
	static volatile uint8_t x4096 = 6U;
	volatile uint32_t t83 = 371U;

    t83 = ((x4093+(x4094!=x4095))<<x4096);

    if (t83 != 26368U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x4181 = 1981U;
	int32_t x4182 = -1;
	static int32_t x4183 = INT32_MIN;
	static volatile uint8_t x4184 = 7U;
	int32_t t84 = 1;

    t84 = ((x4181+(x4182!=x4183))<<x4184);

    if (t84 != 253696) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x4245 = UINT8_MAX;
	static volatile int32_t x4246 = INT32_MAX;
	int16_t x4247 = INT16_MIN;
	uint16_t x4248 = 8U;
	volatile int32_t t85 = 442;

    t85 = ((x4245+(x4246!=x4247))<<x4248);

    if (t85 != 65536) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x4365 = -1LL;
	int8_t x4366 = -1;
	static int32_t x4367 = INT32_MIN;
	uint32_t x4368 = 47U;
	int64_t t86 = 112886084467LL;

    t86 = ((x4365+(x4366!=x4367))<<x4368);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x4418 = 3017947LLU;
	int32_t x4419 = INT32_MAX;
	uint32_t x4420 = 9U;
	int32_t t87 = 118611937;

    t87 = ((x4417+(x4418!=x4419))<<x4420);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x4425 = 12U;
	volatile int32_t x4426 = INT32_MAX;
	uint16_t x4428 = 1U;
	volatile int32_t t88 = 8657;

    t88 = ((x4425+(x4426!=x4427))<<x4428);

    if (t88 != 26) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x4511 = 5442865509803033LL;

    t89 = ((x4509+(x4510!=x4511))<<x4512);

    if (t89 != 524288) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x4518 = 783U;
	int8_t x4519 = INT8_MIN;
	uint8_t x4520 = 0U;

    t90 = ((x4517+(x4518!=x4519))<<x4520);

    if (t90 != 2U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x4553 = 26U;
	int16_t x4554 = 0;
	uint8_t x4555 = 59U;
	static uint16_t x4556 = 1U;
	int32_t t91 = 5051;

    t91 = ((x4553+(x4554!=x4555))<<x4556);

    if (t91 != 54) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x4601 = UINT64_MAX;
	uint64_t x4602 = UINT64_MAX;
	int16_t x4603 = INT16_MAX;
	static volatile uint64_t t92 = 110181431860882LLU;

    t92 = ((x4601+(x4602!=x4603))<<x4604);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x4606 = 12U;
	int8_t x4607 = INT8_MAX;
	volatile int32_t t93 = 1;

    t93 = ((x4605+(x4606!=x4607))<<x4608);

    if (t93 != 32768) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x4625 = 265476340LLU;
	int16_t x4626 = -5;
	uint64_t x4627 = UINT64_MAX;
	volatile int16_t x4628 = 41;

    t94 = ((x4625+(x4626!=x4627))<<x4628);

    if (t94 != 11939581372856795136LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x4746 = 7077U;
	int32_t x4747 = -1;
	int8_t x4748 = 18;
	static volatile int32_t t95 = -147318206;

    t95 = ((x4745+(x4746!=x4747))<<x4748);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x4821 = -1;

    t96 = ((x4821+(x4822!=x4823))<<x4824);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x4845 = 26398U;
	uint64_t x4847 = 1141743626128958LLU;
	uint8_t x4848 = 1U;

    t97 = ((x4845+(x4846!=x4847))<<x4848);

    if (t97 != 52798U) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x4953 = -1;
	uint8_t x4954 = 3U;
	uint32_t x4955 = 1363719782U;
	int8_t x4956 = 1;
	volatile int32_t t98 = 21357;

    t98 = ((x4953+(x4954!=x4955))<<x4956);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x5109 = 54U;
	uint32_t x5110 = UINT32_MAX;
	uint32_t x5111 = 30012842U;
	uint64_t x5112 = 7LLU;
	volatile int32_t t99 = 5198;

    t99 = ((x5109+(x5110!=x5111))<<x5112);

    if (t99 != 7040) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x5129 = 19U;
	uint32_t x5130 = 6133010U;
	int16_t x5131 = 11550;
	uint8_t x5132 = 1U;
	volatile uint32_t t100 = 118U;

    t100 = ((x5129+(x5130!=x5131))<<x5132);

    if (t100 != 40U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x5213 = 50791U;
	static int8_t x5214 = INT8_MAX;
	int8_t x5215 = -13;
	static uint32_t x5216 = 2U;
	uint32_t t101 = 250173916U;

    t101 = ((x5213+(x5214!=x5215))<<x5216);

    if (t101 != 203168U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x5245 = 1044LLU;
	uint32_t x5246 = 68U;
	static int8_t x5247 = 25;
	volatile uint64_t t102 = 81371LLU;

    t102 = ((x5245+(x5246!=x5247))<<x5248);

    if (t102 != 133760LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x5265 = -1;
	static volatile uint16_t x5266 = 15U;
	int16_t x5267 = -271;
	int32_t t103 = -10681;

    t103 = ((x5265+(x5266!=x5267))<<x5268);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x5269 = -1LL;
	volatile uint16_t x5271 = 0U;
	uint16_t x5272 = 0U;
	volatile int64_t t104 = 1817317LL;

    t104 = ((x5269+(x5270!=x5271))<<x5272);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x5333 = 11U;
	uint8_t x5334 = 3U;
	uint32_t x5335 = 6503773U;
	uint8_t x5336 = 5U;
	volatile int32_t t105 = -610974;

    t105 = ((x5333+(x5334!=x5335))<<x5336);

    if (t105 != 384) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x5337 = 15U;
	int32_t x5338 = INT32_MIN;
	static int64_t x5339 = 637028555858420913LL;
	static int32_t t106 = -247712;

    t106 = ((x5337+(x5338!=x5339))<<x5340);

    if (t106 != 4096) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x5425 = UINT32_MAX;
	uint16_t x5426 = 47U;
	volatile int8_t x5427 = 1;
	static volatile uint32_t t107 = 1861657U;

    t107 = ((x5425+(x5426!=x5427))<<x5428);

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x5465 = -1;
	uint32_t x5466 = 225U;
	int64_t x5467 = -1594711224397377LL;
	uint8_t x5468 = 0U;
	static int32_t t108 = 12455;

    t108 = ((x5465+(x5466!=x5467))<<x5468);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x5633 = 120LLU;
	static int32_t x5634 = 1513;
	int8_t x5635 = -53;
	static int8_t x5636 = 1;
	uint64_t t109 = 176333905985062LLU;

    t109 = ((x5633+(x5634!=x5635))<<x5636);

    if (t109 != 242LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x5681 = UINT8_MAX;
	volatile int8_t x5682 = INT8_MIN;
	uint16_t x5683 = UINT16_MAX;
	static int32_t t110 = 604279;

    t110 = ((x5681+(x5682!=x5683))<<x5684);

    if (t110 != 8192) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x5702 = INT8_MIN;
	int32_t x5703 = INT32_MAX;
	int32_t t111 = -12624;

    t111 = ((x5701+(x5702!=x5703))<<x5704);

    if (t111 != 4736) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x5778 = INT8_MIN;
	uint16_t x5780 = 13U;
	volatile int32_t t112 = -1665;

    t112 = ((x5777+(x5778!=x5779))<<x5780);

    if (t112 != 344064) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x5859 = -2613430412586LL;
	static volatile uint8_t x5860 = 18U;
	volatile int64_t t113 = -67328610287LL;

    t113 = ((x5857+(x5858!=x5859))<<x5860);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x5886 = -3519630984LL;
	static uint64_t x5887 = UINT64_MAX;
	volatile int16_t x5888 = 7;

    t114 = ((x5885+(x5886!=x5887))<<x5888);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x5970 = 129;
	int8_t x5971 = INT8_MIN;
	uint8_t x5972 = 0U;
	int32_t t115 = -516960794;

    t115 = ((x5969+(x5970!=x5971))<<x5972);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x6033 = -1;
	static volatile int32_t x6034 = INT32_MIN;
	uint32_t x6035 = 1179946U;
	int16_t x6036 = 0;
	volatile int32_t t116 = -34550;

    t116 = ((x6033+(x6034!=x6035))<<x6036);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x6061 = 44;
	volatile uint16_t x6062 = 16U;
	int64_t x6063 = INT64_MAX;
	uint8_t x6064 = 5U;
	int32_t t117 = -47;

    t117 = ((x6061+(x6062!=x6063))<<x6064);

    if (t117 != 1440) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x6129 = UINT16_MAX;
	static uint16_t x6130 = 512U;
	volatile int32_t t118 = 3853;

    t118 = ((x6129+(x6130!=x6131))<<x6132);

    if (t118 != 131072) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x6133 = 3601177683937140426LLU;
	int8_t x6135 = INT8_MIN;
	static uint8_t x6136 = 0U;
	volatile uint64_t t119 = 1289796504260756LLU;

    t119 = ((x6133+(x6134!=x6135))<<x6136);

    if (t119 != 3601177683937140427LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x6153 = 1;
	static uint64_t x6155 = 244162LLU;
	volatile int32_t t120 = 1;

    t120 = ((x6153+(x6154!=x6155))<<x6156);

    if (t120 != 33554432) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x6170 = -8550358509216825LL;
	int32_t x6171 = -1;
	volatile uint64_t t121 = 34LLU;

    t121 = ((x6169+(x6170!=x6171))<<x6172);

    if (t121 != 975445609509027840LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x6241 = UINT32_MAX;
	int32_t x6242 = INT32_MIN;
	int32_t x6243 = INT32_MIN;
	int16_t x6244 = 11;
	static uint32_t t122 = 1U;

    t122 = ((x6241+(x6242!=x6243))<<x6244);

    if (t122 != 4294965248U) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x6269 = 1LLU;
	static int16_t x6270 = -1;
	uint16_t x6271 = 131U;
	volatile uint64_t t123 = 655012470LLU;

    t123 = ((x6269+(x6270!=x6271))<<x6272);

    if (t123 != 16LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x6305 = 29U;
	volatile int64_t x6306 = INT64_MAX;
	int64_t x6307 = -10LL;
	int32_t t124 = -60134;

    t124 = ((x6305+(x6306!=x6307))<<x6308);

    if (t124 != 30) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x6317 = -1LL;
	uint16_t x6318 = UINT16_MAX;
	volatile int64_t t125 = -15326313100694LL;

    t125 = ((x6317+(x6318!=x6319))<<x6320);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x6329 = 41211208110LL;
	int64_t t126 = -37283960724499309LL;

    t126 = ((x6329+(x6330!=x6331))<<x6332);

    if (t126 != 41211208111LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x6421 = -1;
	int64_t x6422 = INT64_MAX;
	int8_t x6423 = INT8_MIN;
	int16_t x6424 = 3;
	volatile int32_t t127 = 0;

    t127 = ((x6421+(x6422!=x6423))<<x6424);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x6453 = 1903418674630LL;
	static int64_t x6454 = INT64_MAX;
	volatile uint32_t x6455 = 119U;
	volatile uint8_t x6456 = 3U;
	volatile int64_t t128 = 31759761321LL;

    t128 = ((x6453+(x6454!=x6455))<<x6456);

    if (t128 != 15227349397048LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x6466 = INT32_MAX;
	int16_t x6467 = -1;
	volatile uint64_t t129 = 102411883555856144LLU;

    t129 = ((x6465+(x6466!=x6467))<<x6468);

    if (t129 != 13852757963187200LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x6469 = 21U;
	int16_t x6471 = INT16_MAX;
	int16_t x6472 = 0;
	int32_t t130 = -65601892;

    t130 = ((x6469+(x6470!=x6471))<<x6472);

    if (t130 != 22) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x6473 = UINT8_MAX;
	uint16_t x6474 = UINT16_MAX;
	uint16_t x6475 = 6767U;
	int16_t x6476 = 1;
	static volatile int32_t t131 = -145293;

    t131 = ((x6473+(x6474!=x6475))<<x6476);

    if (t131 != 512) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x6477 = -1;
	static int8_t x6478 = -3;
	uint16_t x6479 = 21U;
	static uint16_t x6480 = 7U;
	static volatile int32_t t132 = 205289;

    t132 = ((x6477+(x6478!=x6479))<<x6480);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x6649 = -1;
	static uint64_t x6650 = UINT64_MAX;
	int8_t x6651 = 5;
	int64_t x6652 = 0LL;
	volatile int32_t t133 = 236271;

    t133 = ((x6649+(x6650!=x6651))<<x6652);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x6677 = 2499;
	uint32_t x6678 = UINT32_MAX;
	uint8_t x6679 = 5U;
	volatile uint16_t x6680 = 7U;
	volatile int32_t t134 = -107797;

    t134 = ((x6677+(x6678!=x6679))<<x6680);

    if (t134 != 320000) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x6773 = INT16_MAX;
	int8_t x6774 = 1;
	int8_t x6775 = -3;
	static int32_t t135 = -868;

    t135 = ((x6773+(x6774!=x6775))<<x6776);

    if (t135 != 32768) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x6790 = 954U;
	volatile int64_t x6791 = 3707LL;
	uint8_t x6792 = 0U;
	volatile int32_t t136 = -109851362;

    t136 = ((x6789+(x6790!=x6791))<<x6792);

    if (t136 != 122) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x6814 = INT8_MIN;
	uint8_t x6816 = 21U;
	uint32_t t137 = 954296999U;

    t137 = ((x6813+(x6814!=x6815))<<x6816);

    if (t137 != 155189248U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x6941 = 86202367U;
	int64_t x6942 = -1LL;
	uint32_t x6943 = UINT32_MAX;
	static int8_t x6944 = 1;
	static volatile uint32_t t138 = 10U;

    t138 = ((x6941+(x6942!=x6943))<<x6944);

    if (t138 != 172404736U) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int64_t x6965 = -1LL;
	int64_t x6966 = -1LL;
	int64_t x6967 = INT64_MIN;
	int32_t x6968 = 1;
	volatile int64_t t139 = -5803271363328LL;

    t139 = ((x6965+(x6966!=x6967))<<x6968);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x7005 = 4087090060777LLU;
	volatile uint64_t x7006 = UINT64_MAX;
	int16_t x7007 = -1;
	uint16_t x7008 = 11U;
	uint64_t t140 = 2LLU;

    t140 = ((x7005+(x7006!=x7007))<<x7008);

    if (t140 != 8370360444471296LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x7058 = 1U;
	uint16_t x7059 = 63U;
	uint8_t x7060 = 0U;
	volatile uint64_t t141 = 61LLU;

    t141 = ((x7057+(x7058!=x7059))<<x7060);

    if (t141 != 349849976774226280LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x7070 = UINT16_MAX;
	volatile int8_t x7071 = -1;
	static int16_t x7072 = 58;
	int64_t t142 = 448844522874679LL;

    t142 = ((x7069+(x7070!=x7071))<<x7072);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x7077 = 11U;
	volatile int64_t x7078 = 8LL;
	uint8_t x7079 = 1U;
	uint8_t x7080 = 1U;
	volatile uint32_t t143 = 7167U;

    t143 = ((x7077+(x7078!=x7079))<<x7080);

    if (t143 != 24U) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x7109 = -1LL;
	volatile int8_t x7110 = INT8_MAX;
	int64_t x7111 = INT64_MIN;
	uint16_t x7112 = 33U;
	volatile int64_t t144 = -1686554LL;

    t144 = ((x7109+(x7110!=x7111))<<x7112);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x7114 = INT8_MIN;
	static int64_t x7115 = INT64_MIN;
	int8_t x7116 = 14;
	int32_t t145 = 2255028;

    t145 = ((x7113+(x7114!=x7115))<<x7116);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint16_t x7151 = UINT16_MAX;
	static volatile int64_t x7152 = 0LL;

    t146 = ((x7149+(x7150!=x7151))<<x7152);

    if (t146 != 8U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x7217 = -1;
	int8_t x7220 = 11;
	int32_t t147 = -10593;

    t147 = ((x7217+(x7218!=x7219))<<x7220);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x7225 = 133U;
	int64_t x7227 = -1LL;
	int32_t t148 = 7329;

    t148 = ((x7225+(x7226!=x7227))<<x7228);

    if (t148 != 1072) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x7301 = -1;
	int8_t x7302 = INT8_MIN;
	int32_t x7303 = INT32_MAX;
	uint32_t x7304 = 15U;
	static volatile int32_t t149 = -8;

    t149 = ((x7301+(x7302!=x7303))<<x7304);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x7381 = 1856;
	int64_t x7382 = -519357267LL;
	int16_t x7383 = INT16_MIN;
	int8_t x7384 = 0;
	static int32_t t150 = -1012421;

    t150 = ((x7381+(x7382!=x7383))<<x7384);

    if (t150 != 1857) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x7385 = UINT8_MAX;
	int32_t x7386 = INT32_MIN;
	uint16_t x7387 = 1153U;
	int8_t x7388 = 1;
	volatile int32_t t151 = 1038014352;

    t151 = ((x7385+(x7386!=x7387))<<x7388);

    if (t151 != 512) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x7437 = -1;
	volatile int64_t x7438 = INT64_MIN;
	int64_t x7439 = -1LL;
	static volatile int8_t x7440 = 1;
	static volatile int32_t t152 = 15402;

    t152 = ((x7437+(x7438!=x7439))<<x7440);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x7490 = INT8_MIN;
	volatile int8_t x7491 = INT8_MIN;
	static volatile int64_t t153 = -4216027LL;

    t153 = ((x7489+(x7490!=x7491))<<x7492);

    if (t153 != 20971520LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x7529 = 9925LLU;
	static int64_t x7530 = INT64_MIN;
	volatile uint8_t x7531 = 0U;
	int32_t x7532 = 0;
	volatile uint64_t t154 = 34902LLU;

    t154 = ((x7529+(x7530!=x7531))<<x7532);

    if (t154 != 9926LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x7585 = 62U;
	int8_t x7588 = 4;
	static volatile int32_t t155 = -10080;

    t155 = ((x7585+(x7586!=x7587))<<x7588);

    if (t155 != 1008) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x7689 = 31339007LLU;
	int32_t x7691 = INT32_MIN;
	volatile int8_t x7692 = 0;
	volatile uint64_t t156 = 2270830009701205670LLU;

    t156 = ((x7689+(x7690!=x7691))<<x7692);

    if (t156 != 31339008LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x7697 = 155LLU;
	static int16_t x7698 = INT16_MIN;
	static uint64_t x7699 = 14911561360LLU;
	uint64_t t157 = 0LLU;

    t157 = ((x7697+(x7698!=x7699))<<x7700);

    if (t157 != 312LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x7721 = -1LL;
	uint8_t x7723 = 11U;
	volatile int64_t t158 = 1823575LL;

    t158 = ((x7721+(x7722!=x7723))<<x7724);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x7745 = 478U;
	int64_t x7747 = 0LL;
	uint32_t x7748 = 1U;
	int32_t t159 = -1;

    t159 = ((x7745+(x7746!=x7747))<<x7748);

    if (t159 != 958) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x7793 = 23U;
	int8_t x7794 = -26;
	uint32_t x7795 = 164076266U;
	uint32_t x7796 = 0U;

    t160 = ((x7793+(x7794!=x7795))<<x7796);

    if (t160 != 24) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x7834 = 10U;
	uint64_t x7835 = UINT64_MAX;
	uint64_t t161 = 172835798083LLU;

    t161 = ((x7833+(x7834!=x7835))<<x7836);

    if (t161 != 402332370075648LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x7850 = -1;
	static volatile int16_t x7851 = INT16_MIN;
	int16_t x7852 = 1;
	volatile int32_t t162 = 26004028;

    t162 = ((x7849+(x7850!=x7851))<<x7852);

    if (t162 != 131072) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x7897 = 15U;
	static volatile uint64_t x7898 = 67970179LLU;
	volatile int16_t x7899 = INT16_MAX;
	volatile int64_t x7900 = 3LL;
	int32_t t163 = -231;

    t163 = ((x7897+(x7898!=x7899))<<x7900);

    if (t163 != 128) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x7941 = INT16_MAX;
	int64_t x7942 = INT64_MIN;
	int8_t x7943 = -1;
	uint8_t x7944 = 1U;
	int32_t t164 = -471;

    t164 = ((x7941+(x7942!=x7943))<<x7944);

    if (t164 != 65536) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x7957 = 103066986979LLU;
	volatile int64_t x7959 = -7826LL;
	uint8_t x7960 = 1U;
	volatile uint64_t t165 = 5380LLU;

    t165 = ((x7957+(x7958!=x7959))<<x7960);

    if (t165 != 206133973960LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x8077 = 0;
	uint64_t x8078 = UINT64_MAX;
	static uint64_t x8079 = 1356LLU;
	volatile int32_t t166 = 99649315;

    t166 = ((x8077+(x8078!=x8079))<<x8080);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x8101 = UINT32_MAX;
	int16_t x8102 = 1;
	static uint16_t x8103 = UINT16_MAX;
	static uint8_t x8104 = 4U;
	static uint32_t t167 = 1U;

    t167 = ((x8101+(x8102!=x8103))<<x8104);

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x8233 = INT8_MAX;
	uint32_t x8234 = 65282U;
	uint8_t x8235 = 2U;
	uint8_t x8236 = 16U;

    t168 = ((x8233+(x8234!=x8235))<<x8236);

    if (t168 != 8388608) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x8309 = -1;
	int16_t x8311 = INT16_MIN;
	volatile int8_t x8312 = 5;
	int32_t t169 = 22;

    t169 = ((x8309+(x8310!=x8311))<<x8312);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x8373 = -1;
	int8_t x8374 = 0;
	int32_t t170 = 1172010;

    t170 = ((x8373+(x8374!=x8375))<<x8376);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x8415 = UINT64_MAX;
	uint8_t x8416 = 1U;
	volatile int32_t t171 = -3489995;

    t171 = ((x8413+(x8414!=x8415))<<x8416);

    if (t171 != 6) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x8581 = -1;
	int32_t x8582 = 5393;
	uint8_t x8584 = 1U;
	volatile int32_t t172 = 50288;

    t172 = ((x8581+(x8582!=x8583))<<x8584);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x8617 = 76;
	uint64_t x8619 = UINT64_MAX;
	uint8_t x8620 = 12U;
	volatile int32_t t173 = 24138169;

    t173 = ((x8617+(x8618!=x8619))<<x8620);

    if (t173 != 315392) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x8661 = 28U;
	volatile int16_t x8662 = INT16_MIN;
	uint16_t x8663 = 27103U;
	volatile int32_t t174 = 0;

    t174 = ((x8661+(x8662!=x8663))<<x8664);

    if (t174 != 29) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x8714 = 21U;
	int16_t x8715 = INT16_MIN;
	volatile uint16_t x8716 = 4U;
	static volatile int32_t t175 = -154;

    t175 = ((x8713+(x8714!=x8715))<<x8716);

    if (t175 != 15120) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x8905 = -1LL;
	int16_t x8906 = INT16_MIN;
	int8_t x8908 = 4;
	volatile int64_t t176 = -415795LL;

    t176 = ((x8905+(x8906!=x8907))<<x8908);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x8913 = 560841856LLU;
	uint32_t x8914 = UINT32_MAX;
	int8_t x8915 = INT8_MIN;
	static int16_t x8916 = 7;
	volatile uint64_t t177 = 2989640067058LLU;

    t177 = ((x8913+(x8914!=x8915))<<x8916);

    if (t177 != 71787757696LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x8957 = -1;
	uint32_t x8958 = 1U;
	int8_t x8959 = 31;
	uint8_t x8960 = 0U;
	volatile int32_t t178 = 20761;

    t178 = ((x8957+(x8958!=x8959))<<x8960);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x8965 = -1;
	uint16_t x8966 = 8888U;
	int8_t x8967 = INT8_MIN;
	int8_t x8968 = 22;
	static int32_t t179 = -842828;

    t179 = ((x8965+(x8966!=x8967))<<x8968);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x8969 = INT8_MAX;
	int64_t x8970 = INT64_MAX;
	int32_t x8971 = INT32_MIN;
	uint16_t x8972 = 15U;
	int32_t t180 = -952003;

    t180 = ((x8969+(x8970!=x8971))<<x8972);

    if (t180 != 4194304) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x9053 = -1;
	static uint16_t x9054 = 31151U;
	volatile int32_t x9055 = INT32_MIN;
	int8_t x9056 = 0;
	int32_t t181 = 0;

    t181 = ((x9053+(x9054!=x9055))<<x9056);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x9113 = 5471;
	int16_t x9114 = -1;
	int64_t x9115 = INT64_MIN;

    t182 = ((x9113+(x9114!=x9115))<<x9116);

    if (t182 != 10944) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x9165 = 30663U;
	uint64_t x9166 = 94LLU;
	int8_t x9168 = 16;
	int32_t t183 = 1;

    t183 = ((x9165+(x9166!=x9167))<<x9168);

    if (t183 != 2009595904) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x9185 = 33U;
	int32_t x9186 = -207;
	uint32_t x9187 = UINT32_MAX;
	volatile uint16_t x9188 = 10U;
	int32_t t184 = 27195542;

    t184 = ((x9185+(x9186!=x9187))<<x9188);

    if (t184 != 34816) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x9301 = INT8_MAX;
	volatile int8_t x9302 = INT8_MAX;
	volatile int32_t x9304 = 0;

    t185 = ((x9301+(x9302!=x9303))<<x9304);

    if (t185 != 128) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x9322 = -30775814;
	uint16_t x9323 = 21U;
	uint16_t x9324 = 6U;

    t186 = ((x9321+(x9322!=x9323))<<x9324);

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x9333 = 21276803LL;
	uint32_t x9335 = 3846341U;
	int64_t t187 = 3562715LL;

    t187 = ((x9333+(x9334!=x9335))<<x9336);

    if (t187 != 42553608LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x9405 = INT8_MAX;
	int64_t x9406 = -1212LL;
	int16_t x9408 = 1;
	static volatile int32_t t188 = -23459905;

    t188 = ((x9405+(x9406!=x9407))<<x9408);

    if (t188 != 256) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x9409 = 190469225U;
	uint32_t x9410 = UINT32_MAX;
	static uint32_t x9411 = 25U;
	static uint8_t x9412 = 7U;

    t189 = ((x9409+(x9410!=x9411))<<x9412);

    if (t189 != 2905224448U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x9517 = 22U;
	static int16_t x9518 = INT16_MIN;
	uint8_t x9520 = 0U;
	volatile uint32_t t190 = 228466503U;

    t190 = ((x9517+(x9518!=x9519))<<x9520);

    if (t190 != 23U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x9521 = 30191390974LLU;
	volatile int64_t x9522 = 51088865076LL;
	int32_t x9523 = INT32_MIN;
	uint16_t x9524 = 2U;
	volatile uint64_t t191 = 195689LLU;

    t191 = ((x9521+(x9522!=x9523))<<x9524);

    if (t191 != 120765563900LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x9614 = 22;
	int16_t x9615 = -1;
	int64_t x9616 = 1LL;
	static int32_t t192 = -3207;

    t192 = ((x9613+(x9614!=x9615))<<x9616);

    if (t192 != 54) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x9717 = UINT64_MAX;
	static int16_t x9718 = INT16_MAX;
	static uint16_t x9720 = 3U;
	uint64_t t193 = 390824242LLU;

    t193 = ((x9717+(x9718!=x9719))<<x9720);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x9757 = 833U;
	uint32_t x9758 = 1U;
	int8_t x9760 = 0;

    t194 = ((x9757+(x9758!=x9759))<<x9760);

    if (t194 != 833) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x9857 = 0;
	int8_t x9858 = INT8_MIN;
	int16_t x9859 = INT16_MAX;
	int32_t x9860 = 10;
	volatile int32_t t195 = 12;

    t195 = ((x9857+(x9858!=x9859))<<x9860);

    if (t195 != 1024) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x9913 = -1;
	int32_t x9914 = INT32_MAX;
	volatile int16_t x9915 = INT16_MIN;
	volatile uint8_t x9916 = 23U;
	int32_t t196 = -491026;

    t196 = ((x9913+(x9914!=x9915))<<x9916);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x10033 = 1113U;
	int64_t x10034 = 1162422513045191688LL;
	int16_t x10035 = 4;
	static int32_t x10036 = 8;
	uint32_t t197 = 3095U;

    t197 = ((x10033+(x10034!=x10035))<<x10036);

    if (t197 != 285184U) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint32_t x10049 = UINT32_MAX;
	uint64_t x10050 = UINT64_MAX;
	uint32_t x10051 = UINT32_MAX;
	static volatile int8_t x10052 = 31;
	volatile uint32_t t198 = 57U;

    t198 = ((x10049+(x10050!=x10051))<<x10052);

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint32_t x10069 = 1913U;
	int32_t x10070 = INT32_MAX;
	int8_t x10071 = 9;
	uint32_t t199 = 25U;

    t199 = ((x10069+(x10070!=x10071))<<x10072);

    if (t199 != 3828U) { NG(); } else { ; }
	
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


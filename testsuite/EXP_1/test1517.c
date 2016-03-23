
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

int8_t x10 = INT8_MIN;
int32_t x12 = -66;
uint8_t x102 = 66U;
static uint16_t x207 = 1U;
static int64_t x208 = 1647969322681192141LL;
volatile int64_t t4 = -8795150601LL;
volatile int8_t x219 = 8;
volatile int16_t x221 = INT16_MAX;
static uint16_t x224 = 14U;
uint8_t x327 = 14U;
static uint64_t x328 = 160LLU;
int32_t x374 = INT32_MAX;
static volatile int8_t x503 = 25;
uint8_t x513 = UINT8_MAX;
uint64_t x524 = UINT64_MAX;
volatile int16_t x576 = INT16_MIN;
volatile int32_t t16 = -6761;
static int32_t x632 = -1;
int64_t x670 = INT64_MIN;
uint32_t t18 = 377750U;
volatile uint64_t t19 = 6619046752957487345LLU;
volatile uint8_t x695 = 12U;
uint16_t x739 = 13U;
int32_t x744 = INT32_MIN;
static volatile int32_t t24 = 8241411;
int8_t x754 = 30;
uint16_t x793 = UINT16_MAX;
static int8_t x796 = INT8_MIN;
volatile int16_t x801 = INT16_MIN;
int8_t x814 = -1;
static int64_t x816 = -1LL;
volatile uint16_t x862 = 608U;
volatile uint8_t x863 = 4U;
volatile int32_t t31 = 1;
static volatile uint32_t x945 = UINT32_MAX;
int16_t x947 = 0;
volatile int64_t t34 = 48045079462637465LL;
volatile int32_t x1013 = INT32_MAX;
int16_t x1015 = 8;
int32_t t36 = -1;
int16_t x1053 = INT16_MIN;
int32_t t39 = -22764033;
static volatile int32_t t40 = -2;
int16_t x1178 = 1;
static uint8_t x1201 = UINT8_MAX;
static volatile int32_t x1204 = INT32_MIN;
uint16_t x1215 = 7U;
uint64_t x1216 = 54547748296478LLU;
int32_t x1228 = INT32_MAX;
int16_t x1264 = -1;
static volatile int32_t t47 = 0;
uint8_t x1359 = 20U;
int64_t x1409 = -1762064737375LL;
static int32_t x1410 = INT32_MAX;
int32_t t51 = -235940224;
volatile int64_t x1421 = INT64_MIN;
static int8_t x1422 = INT8_MIN;
uint8_t x1427 = 6U;
uint8_t x1455 = 23U;
volatile int8_t x1456 = INT8_MAX;
int32_t t55 = 894960;
uint16_t x1527 = 1U;
int32_t x1557 = INT32_MAX;
static uint64_t t58 = 140154978895812LLU;
volatile int32_t x1584 = 23;
int64_t x1608 = INT64_MAX;
int64_t x1611 = 0LL;
int8_t x1623 = 12;
int32_t x1624 = INT32_MIN;
int8_t x1645 = INT8_MIN;
static int32_t t67 = 1539715;
int16_t x1754 = -2561;
static int32_t t70 = 1863773;
uint16_t x1931 = 3U;
uint32_t x1943 = 15U;
uint64_t t72 = 387783933243598772LLU;
int32_t x1948 = -1;
volatile uint32_t t75 = 20397557U;
int32_t t76 = -102871270;
static int32_t t77 = -21300009;
uint32_t x2174 = UINT32_MAX;
int8_t x2175 = 24;
uint16_t x2194 = 11250U;
int32_t x2231 = 1;
int64_t x2261 = INT64_MIN;
static volatile uint64_t t83 = 7406LLU;
static int16_t x2270 = -1;
int64_t t84 = -4248LL;
static uint64_t x2274 = 4394726031457899043LLU;
uint8_t x2275 = 1U;
volatile int32_t t86 = 386;
static int8_t x2345 = INT8_MIN;
uint8_t x2347 = 17U;
int32_t t90 = -3;
int8_t x2388 = INT8_MIN;
int8_t x2492 = -21;
static int64_t x2532 = INT64_MIN;
static int8_t x2544 = INT8_MIN;
volatile int8_t x2570 = -2;
uint8_t x2571 = 11U;
int64_t x2593 = INT64_MIN;
int32_t x2682 = -59461;
volatile int8_t x2712 = INT8_MIN;
int64_t x2772 = INT64_MIN;
static int64_t t103 = -238990960855LL;
uint8_t x2849 = 65U;
int32_t x2851 = 1;
uint16_t x2852 = 2U;
volatile int32_t t105 = 250093;
uint64_t x2878 = 3103207438641677LLU;
int16_t x2922 = 13;
uint8_t x2951 = 29U;
volatile uint16_t x2972 = 4U;
int8_t x2983 = 18;
int32_t t111 = 0;
int32_t x3053 = -1;
volatile uint8_t x3054 = 0U;
uint64_t x3065 = 0LLU;
uint64_t x3068 = 2424337832LLU;
volatile int64_t x3117 = -1LL;
static int16_t x3120 = INT16_MAX;
int16_t x3162 = INT16_MAX;
volatile uint8_t x3198 = UINT8_MAX;
static volatile uint64_t x3199 = 14LLU;
int32_t t118 = 939;
int8_t x3207 = 20;
static int64_t x3329 = 1074LL;
int8_t x3330 = 5;
int32_t t122 = 2629920;
int64_t x3405 = -412637167371LL;
int8_t x3408 = 9;
volatile int32_t t124 = -10;
int64_t x3532 = INT64_MIN;
volatile int64_t x3556 = 59170538683LL;
static uint8_t x3635 = 5U;
volatile int32_t t127 = 45182;
uint64_t x3706 = UINT64_MAX;
volatile int64_t x3746 = -1LL;
volatile int8_t x3748 = INT8_MAX;
int32_t x3768 = INT32_MIN;
int64_t x3769 = INT64_MIN;
int32_t x3770 = -1647813;
uint64_t x3816 = 77500188LLU;
volatile uint64_t t132 = 198043652LLU;
static uint32_t x3845 = UINT32_MAX;
int32_t x3937 = INT32_MIN;
volatile uint8_t x3939 = 7U;
uint32_t x3997 = UINT32_MAX;
static int32_t x3998 = -48196061;
int8_t x4000 = -18;
int64_t x4018 = -1LL;
static int8_t x4019 = 16;
static int32_t x4021 = INT32_MAX;
int8_t x4097 = -1;
int16_t x4099 = 27;
static int64_t x4100 = -1LL;
volatile int32_t t143 = 122;
volatile uint32_t x4130 = UINT32_MAX;
static int16_t x4174 = INT16_MIN;
volatile int32_t t145 = 5264;
uint64_t x4177 = 407204231760LLU;
volatile int32_t t148 = 21602573;
volatile int64_t x4273 = 1918632LL;
volatile int64_t x4276 = 1053138868142777LL;
int8_t x4282 = INT8_MIN;
static volatile int64_t x4388 = -11854393824851839LL;
volatile int8_t x4543 = 1;
int16_t x4551 = 0;
int16_t x4572 = INT16_MAX;
int8_t x4615 = 0;
volatile uint16_t x4645 = 2U;
static uint8_t x4671 = 8U;
int32_t t161 = 715338;
volatile uint8_t x4700 = UINT8_MAX;
int32_t t163 = 31511313;
static volatile int32_t x4774 = INT32_MAX;
int8_t x4775 = 13;
volatile int32_t t164 = 37;
static int32_t x4845 = -223918638;
int32_t t169 = -353131858;
uint64_t x4989 = UINT64_MAX;
int8_t x5015 = 1;
static int8_t x5048 = INT8_MIN;
int16_t x5119 = 0;
static int32_t x5129 = INT32_MIN;
int64_t x5132 = INT64_MAX;
static uint8_t x5151 = 1U;
uint32_t x5154 = 1U;
uint64_t x5155 = 5LLU;
int32_t t177 = 4956;
volatile int64_t x5168 = -804560501807LL;
int32_t x5254 = INT32_MAX;
int16_t x5261 = INT16_MAX;
int8_t x5262 = -1;
static volatile uint64_t x5277 = 30058323782021LLU;
volatile int64_t t182 = -138LL;
int64_t x5286 = -1LL;
int32_t x5349 = 851464;
static int64_t x5481 = INT64_MIN;
static volatile uint8_t x5483 = 16U;
int16_t x5488 = INT16_MIN;
volatile int32_t t189 = 65139;
volatile int32_t x5502 = INT32_MAX;
uint16_t x5503 = 2U;
volatile int32_t t190 = -30303;
int64_t x5562 = INT64_MIN;
volatile int64_t x5564 = -145652179013310054LL;
uint64_t x5655 = 2LLU;
volatile int16_t x5713 = INT16_MIN;
volatile uint16_t x5759 = 0U;
int32_t x5842 = -154;
uint16_t x5859 = 6U;


void f0(void) {
    	static int32_t x9 = INT32_MIN;
	static volatile uint8_t x11 = 2U;
	volatile int32_t t0 = 0;

    t0 = (((x9==x10)>>x11)%x12);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x53 = 7729LLU;
	int8_t x54 = INT8_MAX;
	int64_t x55 = 16LL;
	int32_t x56 = 217;
	volatile int32_t t1 = 1;

    t1 = (((x53==x54)>>x55)%x56);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x61 = -1LL;
	int16_t x62 = 0;
	int8_t x63 = 4;
	int32_t x64 = -1;
	int32_t t2 = -496530;

    t2 = (((x61==x62)>>x63)%x64);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x101 = 0LLU;
	int16_t x103 = 3;
	volatile uint64_t x104 = 135257598618179LLU;
	uint64_t t3 = 3698986824127319912LLU;

    t3 = (((x101==x102)>>x103)%x104);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x205 = INT8_MIN;
	uint32_t x206 = UINT32_MAX;

    t4 = (((x205==x206)>>x207)%x208);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x217 = INT16_MIN;
	volatile uint8_t x218 = 1U;
	volatile uint32_t x220 = UINT32_MAX;
	uint32_t t5 = 1413866U;

    t5 = (((x217==x218)>>x219)%x220);

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x222 = UINT16_MAX;
	static uint16_t x223 = 2U;
	volatile int32_t t6 = 41230;

    t6 = (((x221==x222)>>x223)%x224);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x325 = UINT32_MAX;
	int16_t x326 = INT16_MIN;
	uint64_t t7 = 31451975909LLU;

    t7 = (((x325==x326)>>x327)%x328);

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x373 = INT64_MAX;
	uint32_t x375 = 1U;
	static volatile int64_t x376 = INT64_MIN;
	volatile int64_t t8 = -37613705652772191LL;

    t8 = (((x373==x374)>>x375)%x376);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x425 = UINT32_MAX;
	int16_t x426 = INT16_MAX;
	static int8_t x427 = 1;
	volatile uint32_t x428 = 134083800U;
	static volatile uint32_t t9 = 39U;

    t9 = (((x425==x426)>>x427)%x428);

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x501 = -1;
	static int32_t x502 = 19;
	int64_t x504 = INT64_MIN;
	volatile int64_t t10 = 8106LL;

    t10 = (((x501==x502)>>x503)%x504);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x514 = 135552529949466250LL;
	static uint16_t x515 = 0U;
	int32_t x516 = 5445419;
	int32_t t11 = 7;

    t11 = (((x513==x514)>>x515)%x516);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x521 = INT16_MIN;
	int16_t x522 = INT16_MIN;
	uint32_t x523 = 14U;
	uint64_t t12 = 65745LLU;

    t12 = (((x521==x522)>>x523)%x524);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x561 = INT64_MIN;
	static volatile int8_t x562 = -2;
	volatile uint16_t x563 = 1U;
	int32_t x564 = INT32_MIN;
	int32_t t13 = -7129;

    t13 = (((x561==x562)>>x563)%x564);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x573 = 16LLU;
	int64_t x574 = -1LL;
	volatile int8_t x575 = 0;
	int32_t t14 = 38;

    t14 = (((x573==x574)>>x575)%x576);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x589 = INT32_MIN;
	volatile uint64_t x590 = UINT64_MAX;
	volatile int16_t x591 = 3;
	uint32_t x592 = 2U;
	static volatile uint32_t t15 = 482018657U;

    t15 = (((x589==x590)>>x591)%x592);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x601 = INT16_MIN;
	int64_t x602 = INT64_MAX;
	int8_t x603 = 29;
	int32_t x604 = INT32_MIN;

    t16 = (((x601==x602)>>x603)%x604);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x629 = INT8_MIN;
	int8_t x630 = INT8_MIN;
	uint8_t x631 = 2U;
	int32_t t17 = 13601;

    t17 = (((x629==x630)>>x631)%x632);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x669 = 696473656319482LLU;
	static int8_t x671 = 9;
	volatile uint32_t x672 = 192731U;

    t18 = (((x669==x670)>>x671)%x672);

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x685 = UINT32_MAX;
	uint16_t x686 = 89U;
	volatile uint8_t x687 = 0U;
	static uint64_t x688 = 201037660LLU;

    t19 = (((x685==x686)>>x687)%x688);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x693 = INT8_MAX;
	int16_t x694 = INT16_MAX;
	volatile uint8_t x696 = 29U;
	static volatile int32_t t20 = 3303299;

    t20 = (((x693==x694)>>x695)%x696);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x697 = UINT32_MAX;
	uint64_t x698 = UINT64_MAX;
	volatile int32_t x699 = 7;
	int64_t x700 = INT64_MAX;
	int64_t t21 = 2891903800034494LL;

    t21 = (((x697==x698)>>x699)%x700);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x729 = 253U;
	int64_t x730 = -111LL;
	volatile int32_t x731 = 1;
	int64_t x732 = INT64_MIN;
	int64_t t22 = -29746168LL;

    t22 = (((x729==x730)>>x731)%x732);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x737 = 1382094283337478507LLU;
	int64_t x738 = INT64_MIN;
	static int32_t x740 = INT32_MIN;
	volatile int32_t t23 = 321570;

    t23 = (((x737==x738)>>x739)%x740);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x741 = 0;
	static uint16_t x742 = 538U;
	int16_t x743 = 1;

    t24 = (((x741==x742)>>x743)%x744);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x753 = 129LL;
	uint8_t x755 = 1U;
	int8_t x756 = -1;
	volatile int32_t t25 = 109434639;

    t25 = (((x753==x754)>>x755)%x756);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x794 = 0;
	uint8_t x795 = 7U;
	int32_t t26 = -16248691;

    t26 = (((x793==x794)>>x795)%x796);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x802 = INT16_MIN;
	volatile uint8_t x803 = 6U;
	volatile uint32_t x804 = UINT32_MAX;
	volatile uint32_t t27 = 8U;

    t27 = (((x801==x802)>>x803)%x804);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x813 = 1807592U;
	int16_t x815 = 0;
	int64_t t28 = 178LL;

    t28 = (((x813==x814)>>x815)%x816);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x849 = INT8_MIN;
	int32_t x850 = 11471054;
	uint8_t x851 = 0U;
	int8_t x852 = -1;
	volatile int32_t t29 = -97570;

    t29 = (((x849==x850)>>x851)%x852);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x861 = 123U;
	static int64_t x864 = INT64_MIN;
	volatile int64_t t30 = -24243808LL;

    t30 = (((x861==x862)>>x863)%x864);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x897 = 25;
	int32_t x898 = -6259116;
	uint8_t x899 = 4U;
	volatile uint8_t x900 = 6U;

    t31 = (((x897==x898)>>x899)%x900);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x946 = 112426;
	static uint16_t x948 = 137U;
	volatile int32_t t32 = -22686;

    t32 = (((x945==x946)>>x947)%x948);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x977 = INT64_MIN;
	volatile int64_t x978 = INT64_MAX;
	int8_t x979 = 23;
	volatile int16_t x980 = 1217;
	int32_t t33 = 1471;

    t33 = (((x977==x978)>>x979)%x980);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x989 = 24;
	int32_t x990 = INT32_MIN;
	static uint32_t x991 = 9U;
	int64_t x992 = INT64_MIN;

    t34 = (((x989==x990)>>x991)%x992);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x997 = UINT8_MAX;
	int32_t x998 = INT32_MAX;
	uint8_t x999 = 8U;
	static uint64_t x1000 = 107783979462LLU;
	volatile uint64_t t35 = 1012259592LLU;

    t35 = (((x997==x998)>>x999)%x1000);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x1014 = UINT16_MAX;
	static uint8_t x1016 = UINT8_MAX;

    t36 = (((x1013==x1014)>>x1015)%x1016);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x1054 = 2920U;
	int32_t x1055 = 2;
	static int8_t x1056 = INT8_MAX;
	volatile int32_t t37 = -44;

    t37 = (((x1053==x1054)>>x1055)%x1056);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x1101 = 7U;
	volatile int8_t x1102 = -56;
	int8_t x1103 = 31;
	int8_t x1104 = INT8_MAX;
	volatile int32_t t38 = 5625242;

    t38 = (((x1101==x1102)>>x1103)%x1104);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x1149 = INT64_MAX;
	int16_t x1150 = INT16_MAX;
	static int32_t x1151 = 15;
	static int16_t x1152 = INT16_MAX;

    t39 = (((x1149==x1150)>>x1151)%x1152);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint32_t x1157 = 226211462U;
	int16_t x1158 = INT16_MIN;
	uint64_t x1159 = 1LLU;
	int32_t x1160 = INT32_MIN;

    t40 = (((x1157==x1158)>>x1159)%x1160);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x1177 = INT16_MAX;
	uint16_t x1179 = 1U;
	int16_t x1180 = INT16_MAX;
	int32_t t41 = -121;

    t41 = (((x1177==x1178)>>x1179)%x1180);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x1202 = INT64_MIN;
	int8_t x1203 = 11;
	static int32_t t42 = 28049318;

    t42 = (((x1201==x1202)>>x1203)%x1204);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x1213 = INT8_MAX;
	int8_t x1214 = INT8_MIN;
	volatile uint64_t t43 = 5274731513970720LLU;

    t43 = (((x1213==x1214)>>x1215)%x1216);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x1217 = INT16_MAX;
	int32_t x1218 = -1;
	volatile int32_t x1219 = 29;
	int64_t x1220 = INT64_MAX;
	int64_t t44 = -56530933LL;

    t44 = (((x1217==x1218)>>x1219)%x1220);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x1225 = INT32_MIN;
	int32_t x1226 = -1;
	int8_t x1227 = 0;
	static int32_t t45 = -935299;

    t45 = (((x1225==x1226)>>x1227)%x1228);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x1233 = -296701;
	volatile uint16_t x1234 = 4936U;
	int8_t x1235 = 0;
	static uint8_t x1236 = UINT8_MAX;
	int32_t t46 = 415;

    t46 = (((x1233==x1234)>>x1235)%x1236);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x1261 = -1;
	int32_t x1262 = INT32_MIN;
	static volatile uint8_t x1263 = 1U;

    t47 = (((x1261==x1262)>>x1263)%x1264);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x1321 = -8LL;
	volatile int8_t x1322 = 2;
	static uint16_t x1323 = 23U;
	uint32_t x1324 = 238U;
	volatile uint32_t t48 = 344114514U;

    t48 = (((x1321==x1322)>>x1323)%x1324);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x1357 = INT64_MAX;
	uint16_t x1358 = UINT16_MAX;
	static int64_t x1360 = -1LL;
	volatile int64_t t49 = -1912075209468502LL;

    t49 = (((x1357==x1358)>>x1359)%x1360);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x1411 = 31U;
	static volatile int64_t x1412 = INT64_MIN;
	volatile int64_t t50 = -55197236372LL;

    t50 = (((x1409==x1410)>>x1411)%x1412);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x1413 = 102U;
	int32_t x1414 = INT32_MIN;
	uint8_t x1415 = 1U;
	int8_t x1416 = -1;

    t51 = (((x1413==x1414)>>x1415)%x1416);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x1423 = 3;
	static int32_t x1424 = 3;
	int32_t t52 = -82513666;

    t52 = (((x1421==x1422)>>x1423)%x1424);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x1425 = 34U;
	int8_t x1426 = INT8_MIN;
	volatile int8_t x1428 = -3;
	volatile int32_t t53 = -279134;

    t53 = (((x1425==x1426)>>x1427)%x1428);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x1453 = 7095LLU;
	static int16_t x1454 = -17;
	int32_t t54 = 1;

    t54 = (((x1453==x1454)>>x1455)%x1456);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x1489 = INT8_MAX;
	uint16_t x1490 = 27U;
	int16_t x1491 = 0;
	int32_t x1492 = INT32_MAX;

    t55 = (((x1489==x1490)>>x1491)%x1492);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x1513 = UINT64_MAX;
	volatile int16_t x1514 = INT16_MIN;
	uint32_t x1515 = 1U;
	uint8_t x1516 = 3U;
	volatile int32_t t56 = -238341;

    t56 = (((x1513==x1514)>>x1515)%x1516);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x1525 = 16686U;
	int8_t x1526 = 6;
	static volatile uint16_t x1528 = 1U;
	volatile int32_t t57 = -2891;

    t57 = (((x1525==x1526)>>x1527)%x1528);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x1558 = -1;
	static volatile uint8_t x1559 = 5U;
	uint64_t x1560 = 78LLU;

    t58 = (((x1557==x1558)>>x1559)%x1560);

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x1581 = 2U;
	int8_t x1582 = -1;
	volatile int8_t x1583 = 1;
	volatile int32_t t59 = -23184011;

    t59 = (((x1581==x1582)>>x1583)%x1584);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x1605 = 422119407LL;
	uint64_t x1606 = 3800LLU;
	int16_t x1607 = 11;
	volatile int64_t t60 = -11195807663668342LL;

    t60 = (((x1605==x1606)>>x1607)%x1608);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x1609 = INT32_MIN;
	uint32_t x1610 = 739750741U;
	static int32_t x1612 = -162039104;
	int32_t t61 = 91297840;

    t61 = (((x1609==x1610)>>x1611)%x1612);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x1621 = INT64_MIN;
	uint64_t x1622 = UINT64_MAX;
	int32_t t62 = -5969;

    t62 = (((x1621==x1622)>>x1623)%x1624);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x1629 = INT64_MAX;
	static uint32_t x1630 = 20261U;
	uint8_t x1631 = 0U;
	static int64_t x1632 = INT64_MIN;
	static int64_t t63 = 1102LL;

    t63 = (((x1629==x1630)>>x1631)%x1632);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x1646 = 299;
	int32_t x1647 = 0;
	int32_t x1648 = INT32_MIN;
	int32_t t64 = 5637057;

    t64 = (((x1645==x1646)>>x1647)%x1648);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x1673 = INT16_MAX;
	static int16_t x1674 = 2;
	static uint16_t x1675 = 21U;
	int16_t x1676 = INT16_MIN;
	static int32_t t65 = -15646750;

    t65 = (((x1673==x1674)>>x1675)%x1676);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x1681 = INT64_MAX;
	int16_t x1682 = -1;
	static uint16_t x1683 = 8U;
	volatile int32_t x1684 = INT32_MIN;
	volatile int32_t t66 = 88525857;

    t66 = (((x1681==x1682)>>x1683)%x1684);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x1733 = 3334;
	int16_t x1734 = INT16_MIN;
	static volatile uint16_t x1735 = 5U;
	uint16_t x1736 = 171U;

    t67 = (((x1733==x1734)>>x1735)%x1736);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x1745 = 1008629822773588LLU;
	uint32_t x1746 = UINT32_MAX;
	int16_t x1747 = 13;
	int16_t x1748 = INT16_MAX;
	volatile int32_t t68 = 1414;

    t68 = (((x1745==x1746)>>x1747)%x1748);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x1753 = -1;
	volatile uint16_t x1755 = 1U;
	int16_t x1756 = INT16_MAX;
	int32_t t69 = -1983845;

    t69 = (((x1753==x1754)>>x1755)%x1756);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x1853 = 1260U;
	int8_t x1854 = -6;
	uint8_t x1855 = 3U;
	uint16_t x1856 = UINT16_MAX;

    t70 = (((x1853==x1854)>>x1855)%x1856);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x1929 = INT16_MIN;
	int8_t x1930 = INT8_MAX;
	static int16_t x1932 = INT16_MIN;
	int32_t t71 = -1;

    t71 = (((x1929==x1930)>>x1931)%x1932);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x1941 = INT8_MIN;
	int32_t x1942 = INT32_MAX;
	uint64_t x1944 = UINT64_MAX;

    t72 = (((x1941==x1942)>>x1943)%x1944);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x1945 = INT32_MAX;
	int32_t x1946 = -108;
	static uint32_t x1947 = 0U;
	volatile int32_t t73 = -248834;

    t73 = (((x1945==x1946)>>x1947)%x1948);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x1949 = UINT64_MAX;
	int16_t x1950 = 40;
	uint16_t x1951 = 3U;
	uint64_t x1952 = 2299080813368999931LLU;
	uint64_t t74 = 3097223LLU;

    t74 = (((x1949==x1950)>>x1951)%x1952);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint64_t x2037 = UINT64_MAX;
	static int32_t x2038 = INT32_MIN;
	volatile uint16_t x2039 = 29U;
	uint32_t x2040 = 1818247U;

    t75 = (((x2037==x2038)>>x2039)%x2040);

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x2049 = INT64_MAX;
	uint16_t x2050 = UINT16_MAX;
	int16_t x2051 = 1;
	volatile uint16_t x2052 = UINT16_MAX;

    t76 = (((x2049==x2050)>>x2051)%x2052);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int32_t x2057 = INT32_MIN;
	volatile int64_t x2058 = -333574738812942047LL;
	volatile uint8_t x2059 = 2U;
	int8_t x2060 = INT8_MIN;

    t77 = (((x2057==x2058)>>x2059)%x2060);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x2113 = -166687;
	int32_t x2114 = INT32_MIN;
	static uint8_t x2115 = 0U;
	int32_t x2116 = -1460589;
	int32_t t78 = -2258776;

    t78 = (((x2113==x2114)>>x2115)%x2116);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x2173 = INT8_MAX;
	int64_t x2176 = INT64_MIN;
	int64_t t79 = -114LL;

    t79 = (((x2173==x2174)>>x2175)%x2176);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x2193 = INT8_MIN;
	uint8_t x2195 = 0U;
	static int64_t x2196 = -1LL;
	static volatile int64_t t80 = -729448573793535LL;

    t80 = (((x2193==x2194)>>x2195)%x2196);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x2229 = INT32_MIN;
	int16_t x2230 = INT16_MAX;
	static int8_t x2232 = -14;
	int32_t t81 = -16773;

    t81 = (((x2229==x2230)>>x2231)%x2232);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x2245 = UINT64_MAX;
	int32_t x2246 = -1;
	int64_t x2247 = 18LL;
	volatile uint16_t x2248 = 3U;
	volatile int32_t t82 = 1;

    t82 = (((x2245==x2246)>>x2247)%x2248);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x2262 = -55;
	uint8_t x2263 = 1U;
	volatile uint64_t x2264 = 6772030LLU;

    t83 = (((x2261==x2262)>>x2263)%x2264);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x2269 = -239LL;
	static volatile uint16_t x2271 = 7U;
	int64_t x2272 = 129074991LL;

    t84 = (((x2269==x2270)>>x2271)%x2272);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x2273 = INT32_MIN;
	uint16_t x2276 = 7587U;
	volatile int32_t t85 = -79390784;

    t85 = (((x2273==x2274)>>x2275)%x2276);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x2281 = 8177560U;
	uint32_t x2282 = 165585671U;
	static uint8_t x2283 = 4U;
	volatile int8_t x2284 = INT8_MAX;

    t86 = (((x2281==x2282)>>x2283)%x2284);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x2321 = 21;
	int64_t x2322 = INT64_MAX;
	static int16_t x2323 = 1;
	int32_t x2324 = INT32_MIN;
	int32_t t87 = 5826069;

    t87 = (((x2321==x2322)>>x2323)%x2324);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x2329 = 4685276U;
	static int32_t x2330 = INT32_MAX;
	uint64_t x2331 = 10LLU;
	static volatile uint64_t x2332 = UINT64_MAX;
	uint64_t t88 = 30512LLU;

    t88 = (((x2329==x2330)>>x2331)%x2332);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x2337 = INT8_MIN;
	uint8_t x2338 = 0U;
	uint8_t x2339 = 16U;
	int8_t x2340 = INT8_MIN;
	volatile int32_t t89 = 297043476;

    t89 = (((x2337==x2338)>>x2339)%x2340);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x2346 = UINT32_MAX;
	static volatile int16_t x2348 = INT16_MIN;

    t90 = (((x2345==x2346)>>x2347)%x2348);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x2385 = -1;
	uint8_t x2386 = UINT8_MAX;
	int32_t x2387 = 1;
	static volatile int32_t t91 = -15163;

    t91 = (((x2385==x2386)>>x2387)%x2388);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x2397 = -5;
	volatile int16_t x2398 = 2722;
	volatile uint8_t x2399 = 3U;
	static int32_t x2400 = -2;
	static int32_t t92 = -2170;

    t92 = (((x2397==x2398)>>x2399)%x2400);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x2421 = 641156LLU;
	volatile int64_t x2422 = INT64_MIN;
	static int8_t x2423 = 1;
	static int64_t x2424 = -1LL;
	volatile int64_t t93 = -52296LL;

    t93 = (((x2421==x2422)>>x2423)%x2424);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x2449 = -50410913;
	static volatile int64_t x2450 = -1LL;
	static uint8_t x2451 = 3U;
	int64_t x2452 = INT64_MIN;
	volatile int64_t t94 = 1517LL;

    t94 = (((x2449==x2450)>>x2451)%x2452);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x2489 = UINT32_MAX;
	volatile int64_t x2490 = -1LL;
	uint32_t x2491 = 0U;
	int32_t t95 = -3906155;

    t95 = (((x2489==x2490)>>x2491)%x2492);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x2529 = -58;
	uint8_t x2530 = 17U;
	uint8_t x2531 = 3U;
	volatile int64_t t96 = 3337047882LL;

    t96 = (((x2529==x2530)>>x2531)%x2532);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x2541 = INT64_MIN;
	int32_t x2542 = -197493;
	static uint16_t x2543 = 0U;
	static volatile int32_t t97 = 498985;

    t97 = (((x2541==x2542)>>x2543)%x2544);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x2569 = INT16_MIN;
	uint32_t x2572 = 29778669U;
	static uint32_t t98 = 0U;

    t98 = (((x2569==x2570)>>x2571)%x2572);

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x2594 = UINT32_MAX;
	uint8_t x2595 = 1U;
	static volatile uint32_t x2596 = 13949516U;
	volatile uint32_t t99 = 81297487U;

    t99 = (((x2593==x2594)>>x2595)%x2596);

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x2681 = INT64_MIN;
	int8_t x2683 = 0;
	static volatile int32_t x2684 = -1828248;
	int32_t t100 = -8;

    t100 = (((x2681==x2682)>>x2683)%x2684);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x2709 = INT32_MIN;
	int32_t x2710 = INT32_MIN;
	uint8_t x2711 = 21U;
	volatile int32_t t101 = -19938892;

    t101 = (((x2709==x2710)>>x2711)%x2712);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x2769 = 20432435216054715LL;
	static uint16_t x2770 = UINT16_MAX;
	volatile int32_t x2771 = 1;
	static volatile int64_t t102 = 5576405LL;

    t102 = (((x2769==x2770)>>x2771)%x2772);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x2789 = 6157LLU;
	int8_t x2790 = INT8_MIN;
	uint8_t x2791 = 1U;
	int64_t x2792 = -30477953017321LL;

    t103 = (((x2789==x2790)>>x2791)%x2792);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x2813 = INT32_MAX;
	static volatile uint8_t x2814 = 113U;
	static int8_t x2815 = 13;
	volatile int16_t x2816 = INT16_MIN;
	volatile int32_t t104 = 582682;

    t104 = (((x2813==x2814)>>x2815)%x2816);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x2850 = 5U;

    t105 = (((x2849==x2850)>>x2851)%x2852);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x2877 = UINT64_MAX;
	int8_t x2879 = 1;
	int8_t x2880 = INT8_MIN;
	volatile int32_t t106 = -91;

    t106 = (((x2877==x2878)>>x2879)%x2880);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x2921 = 36U;
	uint64_t x2923 = 1LLU;
	volatile uint64_t x2924 = 5554498225LLU;
	volatile uint64_t t107 = 216473567093489857LLU;

    t107 = (((x2921==x2922)>>x2923)%x2924);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x2949 = 232U;
	uint16_t x2950 = 2U;
	int8_t x2952 = INT8_MIN;
	volatile int32_t t108 = 295;

    t108 = (((x2949==x2950)>>x2951)%x2952);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x2957 = INT32_MIN;
	uint8_t x2958 = 43U;
	uint8_t x2959 = 3U;
	int32_t x2960 = INT32_MIN;
	volatile int32_t t109 = 75499;

    t109 = (((x2957==x2958)>>x2959)%x2960);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x2969 = 56550638LLU;
	int64_t x2970 = INT64_MAX;
	uint8_t x2971 = 6U;
	volatile int32_t t110 = -3978663;

    t110 = (((x2969==x2970)>>x2971)%x2972);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint64_t x2981 = 27184180216LLU;
	uint32_t x2982 = UINT32_MAX;
	int16_t x2984 = -1;

    t111 = (((x2981==x2982)>>x2983)%x2984);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x3041 = UINT16_MAX;
	static int64_t x3042 = -1LL;
	volatile uint64_t x3043 = 12LLU;
	int32_t x3044 = INT32_MIN;
	volatile int32_t t112 = 3;

    t112 = (((x3041==x3042)>>x3043)%x3044);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x3055 = 26U;
	int64_t x3056 = INT64_MIN;
	int64_t t113 = -71948520LL;

    t113 = (((x3053==x3054)>>x3055)%x3056);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x3061 = 857LL;
	int8_t x3062 = INT8_MIN;
	volatile uint8_t x3063 = 19U;
	int8_t x3064 = -1;
	volatile int32_t t114 = 113817310;

    t114 = (((x3061==x3062)>>x3063)%x3064);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x3066 = INT16_MAX;
	uint8_t x3067 = 7U;
	volatile uint64_t t115 = 19056624827568LLU;

    t115 = (((x3065==x3066)>>x3067)%x3068);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x3118 = 2307U;
	uint8_t x3119 = 0U;
	static volatile int32_t t116 = -189;

    t116 = (((x3117==x3118)>>x3119)%x3120);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x3161 = 325U;
	int16_t x3163 = 14;
	static int32_t x3164 = INT32_MAX;
	volatile int32_t t117 = -2507088;

    t117 = (((x3161==x3162)>>x3163)%x3164);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x3197 = 0U;
	uint16_t x3200 = UINT16_MAX;

    t118 = (((x3197==x3198)>>x3199)%x3200);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x3205 = -86;
	int64_t x3206 = INT64_MIN;
	static int8_t x3208 = 62;
	int32_t t119 = 2145703;

    t119 = (((x3205==x3206)>>x3207)%x3208);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x3257 = -2;
	static int16_t x3258 = INT16_MIN;
	uint64_t x3259 = 1LLU;
	int64_t x3260 = INT64_MIN;
	int64_t t120 = -4924LL;

    t120 = (((x3257==x3258)>>x3259)%x3260);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x3331 = 0LLU;
	int64_t x3332 = -4654085285841LL;
	volatile int64_t t121 = 32621054509LL;

    t121 = (((x3329==x3330)>>x3331)%x3332);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x3393 = 18;
	volatile int32_t x3394 = -29687093;
	volatile int16_t x3395 = 8;
	int32_t x3396 = INT32_MIN;

    t122 = (((x3393==x3394)>>x3395)%x3396);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x3406 = 1185U;
	uint16_t x3407 = 30U;
	int32_t t123 = -7813;

    t123 = (((x3405==x3406)>>x3407)%x3408);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x3489 = INT64_MIN;
	int16_t x3490 = INT16_MIN;
	int64_t x3491 = 22LL;
	volatile int32_t x3492 = 956;

    t124 = (((x3489==x3490)>>x3491)%x3492);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x3529 = INT64_MIN;
	volatile uint64_t x3530 = UINT64_MAX;
	int8_t x3531 = 0;
	volatile int64_t t125 = 129692167089241456LL;

    t125 = (((x3529==x3530)>>x3531)%x3532);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x3553 = 57U;
	uint8_t x3554 = 0U;
	uint16_t x3555 = 26U;
	volatile int64_t t126 = -594688201876167LL;

    t126 = (((x3553==x3554)>>x3555)%x3556);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x3633 = INT32_MIN;
	int16_t x3634 = INT16_MIN;
	int32_t x3636 = INT32_MAX;

    t127 = (((x3633==x3634)>>x3635)%x3636);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x3705 = 279242;
	uint8_t x3707 = 7U;
	uint32_t x3708 = 196U;
	static volatile uint32_t t128 = 29693U;

    t128 = (((x3705==x3706)>>x3707)%x3708);

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x3745 = INT32_MIN;
	static volatile uint8_t x3747 = 0U;
	volatile int32_t t129 = 190674;

    t129 = (((x3745==x3746)>>x3747)%x3748);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x3765 = -4243509571453LL;
	int16_t x3766 = INT16_MIN;
	uint8_t x3767 = 3U;
	static int32_t t130 = 4025;

    t130 = (((x3765==x3766)>>x3767)%x3768);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x3771 = 1;
	uint32_t x3772 = 2286U;
	uint32_t t131 = 2076892706U;

    t131 = (((x3769==x3770)>>x3771)%x3772);

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x3813 = INT16_MIN;
	int16_t x3814 = INT16_MAX;
	uint8_t x3815 = 1U;

    t132 = (((x3813==x3814)>>x3815)%x3816);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x3829 = INT16_MAX;
	int64_t x3830 = -401019635069LL;
	static uint32_t x3831 = 5U;
	int32_t x3832 = INT32_MAX;
	int32_t t133 = -817242733;

    t133 = (((x3829==x3830)>>x3831)%x3832);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x3846 = -37;
	int16_t x3847 = 1;
	static int16_t x3848 = INT16_MIN;
	volatile int32_t t134 = 0;

    t134 = (((x3845==x3846)>>x3847)%x3848);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x3938 = 118;
	uint8_t x3940 = 47U;
	int32_t t135 = 1442763;

    t135 = (((x3937==x3938)>>x3939)%x3940);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x3999 = 2U;
	volatile int32_t t136 = -81;

    t136 = (((x3997==x3998)>>x3999)%x4000);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x4017 = 22U;
	volatile uint64_t x4020 = 6135829887723149LLU;
	uint64_t t137 = 1750916379284LLU;

    t137 = (((x4017==x4018)>>x4019)%x4020);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x4022 = INT16_MIN;
	int8_t x4023 = 0;
	int32_t x4024 = -1;
	volatile int32_t t138 = -37241;

    t138 = (((x4021==x4022)>>x4023)%x4024);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x4029 = INT64_MIN;
	static uint32_t x4030 = 266721399U;
	int16_t x4031 = 4;
	static int32_t x4032 = 1985044;
	volatile int32_t t139 = 9;

    t139 = (((x4029==x4030)>>x4031)%x4032);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x4065 = 238U;
	static int32_t x4066 = INT32_MAX;
	static int16_t x4067 = 1;
	int32_t x4068 = INT32_MIN;
	int32_t t140 = 1906495;

    t140 = (((x4065==x4066)>>x4067)%x4068);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x4081 = INT64_MAX;
	int64_t x4082 = INT64_MAX;
	int16_t x4083 = 0;
	int32_t x4084 = -7192357;
	int32_t t141 = -1415695;

    t141 = (((x4081==x4082)>>x4083)%x4084);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x4098 = INT32_MIN;
	volatile int64_t t142 = 0LL;

    t142 = (((x4097==x4098)>>x4099)%x4100);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x4101 = UINT16_MAX;
	static uint8_t x4102 = UINT8_MAX;
	int8_t x4103 = 0;
	static volatile int32_t x4104 = INT32_MAX;

    t143 = (((x4101==x4102)>>x4103)%x4104);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x4129 = INT8_MAX;
	int8_t x4131 = 0;
	static uint16_t x4132 = 95U;
	volatile int32_t t144 = -26417821;

    t144 = (((x4129==x4130)>>x4131)%x4132);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x4173 = -3;
	uint16_t x4175 = 2U;
	static int32_t x4176 = INT32_MIN;

    t145 = (((x4173==x4174)>>x4175)%x4176);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x4178 = INT8_MIN;
	static int8_t x4179 = 2;
	static uint16_t x4180 = 4246U;
	volatile int32_t t146 = -2;

    t146 = (((x4177==x4178)>>x4179)%x4180);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x4197 = INT32_MIN;
	int8_t x4198 = -1;
	uint16_t x4199 = 14U;
	int32_t x4200 = 743772;
	int32_t t147 = -14105094;

    t147 = (((x4197==x4198)>>x4199)%x4200);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x4257 = 152218206417111LL;
	int16_t x4258 = INT16_MIN;
	uint8_t x4259 = 15U;
	int16_t x4260 = INT16_MIN;

    t148 = (((x4257==x4258)>>x4259)%x4260);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x4274 = INT16_MAX;
	int32_t x4275 = 8;
	volatile int64_t t149 = 58854393LL;

    t149 = (((x4273==x4274)>>x4275)%x4276);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x4281 = UINT32_MAX;
	volatile int8_t x4283 = 3;
	int64_t x4284 = -1LL;
	static int64_t t150 = -1LL;

    t150 = (((x4281==x4282)>>x4283)%x4284);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x4365 = INT8_MIN;
	static uint16_t x4366 = 5794U;
	uint16_t x4367 = 11U;
	uint8_t x4368 = UINT8_MAX;
	static int32_t t151 = -405;

    t151 = (((x4365==x4366)>>x4367)%x4368);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x4385 = 9548U;
	static volatile uint8_t x4386 = 0U;
	int8_t x4387 = 3;
	int64_t t152 = -311LL;

    t152 = (((x4385==x4386)>>x4387)%x4388);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x4541 = INT64_MIN;
	volatile int8_t x4542 = INT8_MIN;
	int64_t x4544 = INT64_MIN;
	volatile int64_t t153 = 129278559740056LL;

    t153 = (((x4541==x4542)>>x4543)%x4544);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x4549 = 32259056942784LL;
	uint16_t x4550 = UINT16_MAX;
	static int64_t x4552 = INT64_MIN;
	volatile int64_t t154 = 265931178LL;

    t154 = (((x4549==x4550)>>x4551)%x4552);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x4569 = INT16_MIN;
	volatile int32_t x4570 = INT32_MAX;
	int8_t x4571 = 1;
	int32_t t155 = -1590;

    t155 = (((x4569==x4570)>>x4571)%x4572);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x4573 = INT8_MIN;
	uint16_t x4574 = 1692U;
	uint16_t x4575 = 0U;
	static int64_t x4576 = 207LL;
	static int64_t t156 = 511186LL;

    t156 = (((x4573==x4574)>>x4575)%x4576);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x4601 = -1;
	volatile uint16_t x4602 = 5U;
	static uint8_t x4603 = 5U;
	uint8_t x4604 = 9U;
	volatile int32_t t157 = 942;

    t157 = (((x4601==x4602)>>x4603)%x4604);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x4613 = 7U;
	int8_t x4614 = 27;
	int32_t x4616 = INT32_MIN;
	int32_t t158 = 5;

    t158 = (((x4613==x4614)>>x4615)%x4616);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x4646 = 730U;
	uint16_t x4647 = 12U;
	int8_t x4648 = INT8_MAX;
	int32_t t159 = -376858670;

    t159 = (((x4645==x4646)>>x4647)%x4648);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x4649 = -280LL;
	static uint32_t x4650 = 263U;
	uint16_t x4651 = 1U;
	uint32_t x4652 = 3U;
	volatile uint32_t t160 = 6408U;

    t160 = (((x4649==x4650)>>x4651)%x4652);

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x4669 = -173;
	int32_t x4670 = INT32_MIN;
	static int32_t x4672 = INT32_MIN;

    t161 = (((x4669==x4670)>>x4671)%x4672);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x4697 = INT8_MAX;
	int8_t x4698 = 19;
	static int8_t x4699 = 0;
	int32_t t162 = -1;

    t162 = (((x4697==x4698)>>x4699)%x4700);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x4733 = 7U;
	volatile uint16_t x4734 = 1221U;
	static volatile int32_t x4735 = 15;
	volatile uint8_t x4736 = 4U;

    t163 = (((x4733==x4734)>>x4735)%x4736);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x4773 = INT8_MAX;
	int16_t x4776 = INT16_MIN;

    t164 = (((x4773==x4774)>>x4775)%x4776);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x4781 = 11367113805586LLU;
	int32_t x4782 = INT32_MAX;
	uint16_t x4783 = 15U;
	static uint32_t x4784 = 2060U;
	volatile uint32_t t165 = 203638790U;

    t165 = (((x4781==x4782)>>x4783)%x4784);

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x4825 = 2;
	volatile int16_t x4826 = INT16_MAX;
	int8_t x4827 = 0;
	static int8_t x4828 = -11;
	static int32_t t166 = 12;

    t166 = (((x4825==x4826)>>x4827)%x4828);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x4841 = INT8_MAX;
	static int16_t x4842 = -292;
	volatile uint8_t x4843 = 3U;
	static uint64_t x4844 = 18247991LLU;
	uint64_t t167 = 676182LLU;

    t167 = (((x4841==x4842)>>x4843)%x4844);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x4846 = INT64_MIN;
	uint32_t x4847 = 0U;
	int8_t x4848 = -13;
	volatile int32_t t168 = -100;

    t168 = (((x4845==x4846)>>x4847)%x4848);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x4909 = -1LL;
	volatile int8_t x4910 = INT8_MAX;
	int16_t x4911 = 0;
	static int8_t x4912 = INT8_MIN;

    t169 = (((x4909==x4910)>>x4911)%x4912);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x4981 = INT32_MIN;
	static uint16_t x4982 = 411U;
	uint8_t x4983 = 6U;
	int64_t x4984 = INT64_MAX;
	volatile int64_t t170 = 543413867419303LL;

    t170 = (((x4981==x4982)>>x4983)%x4984);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x4990 = 35U;
	int8_t x4991 = 15;
	static int8_t x4992 = INT8_MAX;
	int32_t t171 = 1;

    t171 = (((x4989==x4990)>>x4991)%x4992);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x5013 = 1LLU;
	uint64_t x5014 = 37LLU;
	uint32_t x5016 = 248U;
	uint32_t t172 = 648915U;

    t172 = (((x5013==x5014)>>x5015)%x5016);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x5045 = -1LL;
	int64_t x5046 = 16347151LL;
	volatile int16_t x5047 = 28;
	volatile int32_t t173 = 77;

    t173 = (((x5045==x5046)>>x5047)%x5048);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x5117 = -28613569138765362LL;
	int32_t x5118 = INT32_MIN;
	static volatile int64_t x5120 = INT64_MIN;
	volatile int64_t t174 = -122536LL;

    t174 = (((x5117==x5118)>>x5119)%x5120);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x5130 = -1;
	uint32_t x5131 = 5U;
	static int64_t t175 = 35LL;

    t175 = (((x5129==x5130)>>x5131)%x5132);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x5149 = 106U;
	int8_t x5150 = -3;
	int16_t x5152 = INT16_MIN;
	static volatile int32_t t176 = 1;

    t176 = (((x5149==x5150)>>x5151)%x5152);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x5153 = 7U;
	int8_t x5156 = 1;

    t177 = (((x5153==x5154)>>x5155)%x5156);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint64_t x5165 = UINT64_MAX;
	int32_t x5166 = INT32_MIN;
	static uint16_t x5167 = 1U;
	int64_t t178 = 93LL;

    t178 = (((x5165==x5166)>>x5167)%x5168);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x5249 = UINT64_MAX;
	volatile int16_t x5250 = INT16_MAX;
	uint8_t x5251 = 21U;
	static uint16_t x5252 = UINT16_MAX;
	volatile int32_t t179 = -2745252;

    t179 = (((x5249==x5250)>>x5251)%x5252);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x5253 = 28882310LLU;
	int16_t x5255 = 1;
	uint16_t x5256 = 78U;
	static volatile int32_t t180 = 227;

    t180 = (((x5253==x5254)>>x5255)%x5256);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x5263 = 9LL;
	int8_t x5264 = INT8_MIN;
	int32_t t181 = -894450;

    t181 = (((x5261==x5262)>>x5263)%x5264);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint64_t x5278 = UINT64_MAX;
	uint8_t x5279 = 5U;
	int64_t x5280 = 2656942682782LL;

    t182 = (((x5277==x5278)>>x5279)%x5280);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x5285 = 0U;
	uint8_t x5287 = 9U;
	int64_t x5288 = -1LL;
	int64_t t183 = -1502030621LL;

    t183 = (((x5285==x5286)>>x5287)%x5288);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x5350 = 6;
	uint32_t x5351 = 1U;
	int16_t x5352 = -1;
	volatile int32_t t184 = -69261;

    t184 = (((x5349==x5350)>>x5351)%x5352);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x5397 = UINT64_MAX;
	volatile int32_t x5398 = 7584566;
	uint8_t x5399 = 4U;
	uint16_t x5400 = 15234U;
	int32_t t185 = -122431;

    t185 = (((x5397==x5398)>>x5399)%x5400);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x5421 = UINT32_MAX;
	static int32_t x5422 = INT32_MIN;
	volatile int8_t x5423 = 2;
	volatile int32_t x5424 = INT32_MIN;
	int32_t t186 = -2;

    t186 = (((x5421==x5422)>>x5423)%x5424);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x5441 = 413491862LL;
	volatile uint8_t x5442 = UINT8_MAX;
	uint8_t x5443 = 3U;
	volatile uint16_t x5444 = 83U;
	int32_t t187 = -31038;

    t187 = (((x5441==x5442)>>x5443)%x5444);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x5482 = -1;
	static uint32_t x5484 = UINT32_MAX;
	volatile uint32_t t188 = 7811691U;

    t188 = (((x5481==x5482)>>x5483)%x5484);

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x5485 = 77614LLU;
	int32_t x5486 = 286237650;
	uint32_t x5487 = 17U;

    t189 = (((x5485==x5486)>>x5487)%x5488);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x5501 = 17071161058LLU;
	uint8_t x5504 = UINT8_MAX;

    t190 = (((x5501==x5502)>>x5503)%x5504);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x5561 = -1LL;
	int8_t x5563 = 1;
	volatile int64_t t191 = -4129467212044LL;

    t191 = (((x5561==x5562)>>x5563)%x5564);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint64_t x5609 = 1588256161LLU;
	uint32_t x5610 = 22U;
	uint8_t x5611 = 1U;
	uint32_t x5612 = 339974430U;
	static uint32_t t192 = 1141U;

    t192 = (((x5609==x5610)>>x5611)%x5612);

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x5653 = INT16_MAX;
	uint8_t x5654 = 3U;
	int32_t x5656 = INT32_MAX;
	static volatile int32_t t193 = 362299;

    t193 = (((x5653==x5654)>>x5655)%x5656);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x5689 = INT32_MIN;
	uint64_t x5690 = UINT64_MAX;
	static int8_t x5691 = 2;
	uint32_t x5692 = UINT32_MAX;
	static volatile uint32_t t194 = 121376825U;

    t194 = (((x5689==x5690)>>x5691)%x5692);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x5714 = 10837U;
	uint32_t x5715 = 18U;
	int32_t x5716 = -862125179;
	volatile int32_t t195 = 80745;

    t195 = (((x5713==x5714)>>x5715)%x5716);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x5757 = UINT32_MAX;
	static uint16_t x5758 = 17U;
	int32_t x5760 = 627147;
	volatile int32_t t196 = -15;

    t196 = (((x5757==x5758)>>x5759)%x5760);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x5789 = INT32_MIN;
	static volatile int16_t x5790 = INT16_MIN;
	volatile uint8_t x5791 = 7U;
	static int64_t x5792 = -92054187LL;
	volatile int64_t t197 = -7234678949613567LL;

    t197 = (((x5789==x5790)>>x5791)%x5792);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x5841 = -1;
	static int8_t x5843 = 0;
	volatile int16_t x5844 = -391;
	volatile int32_t t198 = -50928;

    t198 = (((x5841==x5842)>>x5843)%x5844);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x5857 = INT64_MIN;
	uint16_t x5858 = 6611U;
	volatile int8_t x5860 = INT8_MIN;
	volatile int32_t t199 = -491;

    t199 = (((x5857==x5858)>>x5859)%x5860);

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


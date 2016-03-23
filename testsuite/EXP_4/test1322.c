
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

int8_t x1 = INT8_MAX;
uint8_t x2 = 15U;
static uint32_t x4 = 15U;
static uint8_t x49 = 99U;
uint16_t x201 = UINT16_MAX;
volatile uint16_t x313 = 5U;
uint32_t x425 = 6538U;
volatile int16_t x426 = 2;
uint32_t x427 = 4762627U;
volatile uint64_t x505 = 198318860261LLU;
volatile int8_t x506 = 12;
static uint32_t x561 = 1U;
int8_t x573 = INT8_MAX;
uint32_t x581 = 24U;
uint8_t x634 = 1U;
uint64_t x653 = UINT64_MAX;
int16_t x656 = 209;
int16_t x703 = 273;
int8_t x753 = INT8_MAX;
int32_t t19 = -1067627572;
static int64_t x812 = INT64_MIN;
static uint16_t x839 = UINT16_MAX;
uint64_t t22 = 39LLU;
static int8_t x999 = INT8_MIN;
int32_t x1003 = -1014089;
uint8_t x1079 = 0U;
volatile uint8_t x1206 = 3U;
uint8_t x1208 = UINT8_MAX;
uint64_t x1357 = UINT64_MAX;
volatile int32_t t31 = -4587924;
uint8_t x1705 = 48U;
int16_t x1708 = INT16_MAX;
volatile uint8_t x1749 = UINT8_MAX;
static int16_t x1752 = 5412;
uint64_t x1765 = 195LLU;
uint16_t x1810 = 24U;
static volatile uint32_t t39 = 504U;
static int16_t x1857 = 452;
int8_t x1859 = -1;
volatile uint64_t x1893 = 5994521456LLU;
static uint64_t x1929 = 2350550827292536LLU;
int8_t x2008 = INT8_MIN;
int16_t x2130 = 0;
volatile int16_t x2287 = INT16_MIN;
int16_t x2288 = INT16_MIN;
int32_t x2339 = INT32_MAX;
uint16_t x2483 = 3275U;
static uint8_t x2558 = 3U;
int8_t x2560 = INT8_MAX;
volatile int32_t t52 = 102858;
int16_t x2689 = INT16_MAX;
volatile uint8_t x2706 = 127U;
volatile int32_t x2751 = -3211233;
int16_t x2782 = 84;
int64_t x2856 = INT64_MIN;
int8_t x2910 = 1;
uint16_t x2911 = 4U;
int64_t t62 = INT64_MAX;
volatile int8_t x3050 = 0;
uint8_t x3057 = 5U;
uint64_t x3156 = UINT64_MAX;
uint16_t x3337 = 20117U;
volatile int32_t t67 = -199;
uint16_t x3361 = 2529U;
static uint64_t x3411 = UINT64_MAX;
uint32_t x3434 = 11U;
uint16_t x3436 = 3U;
uint8_t x3565 = 15U;
int32_t t73 = 28091;
int32_t x3629 = 936;
volatile int32_t t75 = -42192275;
int32_t x3689 = 25089;
uint64_t x3765 = 8594LLU;
static int64_t x3767 = 4224570358086368872LL;
int16_t x3941 = INT16_MAX;
int32_t x4133 = 2;
uint8_t x4226 = 41U;
uint32_t x4280 = UINT32_MAX;
static int8_t x4375 = -37;
int8_t x4421 = 23;
int8_t x4581 = 3;
static volatile int8_t x4582 = 5;
static uint32_t x4584 = 923U;
static volatile uint16_t x4627 = 74U;
volatile int8_t x4727 = INT8_MIN;
volatile int16_t x4728 = INT16_MAX;
uint8_t x4769 = 5U;
volatile int64_t x4869 = 1LL;
int16_t x4870 = 3;
uint16_t x4946 = 0U;
int8_t x4948 = INT8_MAX;
static volatile uint64_t t96 = 143041397560308067LLU;
static volatile uint64_t x4967 = 2271040300LLU;
int16_t x4968 = INT16_MIN;
static volatile uint64_t t97 = 2823LLU;
uint8_t x5054 = 14U;
int64_t x5055 = 0LL;
static uint8_t x5082 = 0U;
uint32_t x5125 = 51U;
uint32_t x5127 = 946527519U;
volatile uint32_t x5206 = 25U;
int32_t x5356 = INT32_MAX;
int32_t t105 = 673;
uint8_t x5391 = 1U;
int16_t x5392 = -1;
uint64_t t109 = 6654064406693329LLU;
int16_t x5554 = 5;
uint16_t x5682 = 13U;
static volatile int32_t t115 = 515598;
int16_t x5744 = -1;
volatile int32_t x5839 = -291;
static int32_t x5944 = INT32_MIN;
volatile int64_t x5961 = 119061321762312LL;
int64_t x5964 = 687LL;
volatile int64_t t121 = -4494555771269927375LL;
static uint8_t x5983 = UINT8_MAX;
uint8_t x6042 = 22U;
int32_t x6044 = INT32_MAX;
int32_t t123 = -13850;
int64_t x6053 = 169370100LL;
static int8_t x6055 = INT8_MAX;
uint8_t x6168 = 3U;
static volatile int32_t t126 = -1019;
int16_t x6215 = -4032;
volatile int16_t x6260 = INT16_MAX;
volatile int32_t t128 = 959523;
uint16_t x6401 = 14033U;
volatile int32_t t134 = -17;
int32_t x6645 = 0;
uint16_t x6646 = 13U;
int32_t t136 = -3;
int32_t x6724 = -136;
uint64_t x6759 = UINT64_MAX;
static uint8_t x6854 = 48U;
static int16_t x6856 = -1;
uint64_t x6883 = 1699938LLU;
static int8_t x7036 = INT8_MIN;
int32_t t144 = 45864;
int8_t x7097 = 1;
static uint64_t x7217 = 1057023282LLU;
int64_t x7220 = 13804135902LL;
static uint64_t x7251 = 960460LLU;
int8_t x7252 = -12;
uint32_t x7325 = 3U;
int64_t x7437 = 17LL;
int16_t x7439 = INT16_MIN;
int64_t t150 = -11860585472LL;
int8_t x7454 = 22;
uint32_t x7539 = UINT32_MAX;
int32_t t154 = -2031473;
uint64_t t155 = 15LLU;
uint64_t t156 = 948LLU;
int16_t x7624 = 31;
static int32_t t157 = 209;
int16_t x7629 = INT16_MAX;
int32_t x7651 = INT32_MAX;
static uint16_t x7675 = UINT16_MAX;
uint32_t x7729 = 203098U;
static uint32_t x7837 = UINT32_MAX;
uint8_t x7913 = UINT8_MAX;
uint8_t x7914 = 1U;
uint32_t x8113 = UINT32_MAX;
uint32_t t166 = 6317433U;
uint8_t x8232 = UINT8_MAX;
int32_t t169 = -2;
volatile uint32_t x8377 = UINT32_MAX;
static uint32_t x8424 = 112966U;
int8_t x8453 = 3;
static volatile int32_t t172 = -1174;
int16_t x8554 = 1;
uint8_t x9026 = 35U;
int32_t t178 = -1;
uint16_t x9201 = 7U;
uint8_t x9202 = 13U;
volatile int32_t t181 = 376;
static uint8_t x9274 = 12U;
int32_t x9344 = -1;
int32_t x9353 = INT32_MAX;
int32_t x9354 = 1;
int16_t x9438 = 51;
int8_t x9440 = INT8_MIN;
static uint16_t x9665 = 156U;
volatile int32_t t189 = 36;
int32_t t190 = -26;
static uint8_t x9851 = 48U;
static uint64_t x9852 = UINT64_MAX;
volatile uint32_t x9857 = 6790U;
int8_t x9892 = INT8_MAX;
uint64_t x10069 = UINT64_MAX;
uint32_t x10098 = 41U;
int8_t x10099 = INT8_MIN;
int64_t t197 = -1LL;
uint32_t x10242 = 20U;


void f0(void) {
    	uint8_t x3 = 38U;
	volatile int32_t t0 = 2888699;

    t0 = (x1<<(x2>>(x3!=x4)));

    if (t0 != 16256) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x50 = 1U;
	volatile int32_t x51 = INT32_MAX;
	static int8_t x52 = INT8_MIN;
	volatile int32_t t1 = 25845;

    t1 = (x49<<(x50>>(x51!=x52)));

    if (t1 != 99) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x93 = UINT64_MAX;
	int16_t x94 = 10;
	uint64_t x95 = 5737322LLU;
	static int16_t x96 = 1;
	volatile uint64_t t2 = 3352LLU;

    t2 = (x93<<(x94>>(x95!=x96)));

    if (t2 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint8_t x101 = UINT8_MAX;
	uint8_t x102 = 34U;
	uint64_t x103 = UINT64_MAX;
	int16_t x104 = INT16_MAX;
	int32_t t3 = 1;

    t3 = (x101<<(x102>>(x103!=x104)));

    if (t3 != 33423360) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint16_t x202 = 1U;
	static volatile int32_t x203 = INT32_MIN;
	int8_t x204 = -1;
	volatile int32_t t4 = 5;

    t4 = (x201<<(x202>>(x203!=x204)));

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x314 = 49;
	int64_t x315 = -118173606112796LL;
	static uint64_t x316 = 671754085LLU;
	volatile int32_t t5 = 1886;

    t5 = (x313<<(x314>>(x315!=x316)));

    if (t5 != 83886080) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x421 = 11778236419LLU;
	uint64_t x422 = 53LLU;
	uint8_t x423 = 33U;
	int32_t x424 = -1;
	volatile uint64_t t6 = 15LLU;

    t6 = (x421<<(x422>>(x423!=x424)));

    if (t6 != 790424066002518016LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x428 = -1LL;
	uint32_t t7 = 2850323U;

    t7 = (x425<<(x426>>(x427!=x428)));

    if (t7 != 13076U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x493 = 1U;
	int16_t x494 = 0;
	int64_t x495 = -4550271484511436393LL;
	volatile uint32_t x496 = 547934U;
	volatile int32_t t8 = 0;

    t8 = (x493<<(x494>>(x495!=x496)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x507 = UINT64_MAX;
	int8_t x508 = -1;
	volatile uint64_t t9 = 3394734445278327LLU;

    t9 = (x505<<(x506>>(x507!=x508)));

    if (t9 != 812314051629056LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x562 = 2U;
	uint32_t x563 = 1957691U;
	uint8_t x564 = 0U;
	uint32_t t10 = 1U;

    t10 = (x561<<(x562>>(x563!=x564)));

    if (t10 != 2U) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x574 = 11;
	int64_t x575 = INT64_MAX;
	volatile uint8_t x576 = 3U;
	int32_t t11 = -2160;

    t11 = (x573<<(x574>>(x575!=x576)));

    if (t11 != 4064) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x582 = 0LLU;
	int8_t x583 = 21;
	int32_t x584 = INT32_MAX;
	static uint32_t t12 = 1U;

    t12 = (x581<<(x582>>(x583!=x584)));

    if (t12 != 24U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x597 = UINT64_MAX;
	volatile uint8_t x598 = 2U;
	volatile int32_t x599 = 6723033;
	uint8_t x600 = 1U;
	volatile uint64_t t13 = 4209984445LLU;

    t13 = (x597<<(x598>>(x599!=x600)));

    if (t13 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x601 = 733LLU;
	int8_t x602 = 1;
	volatile int8_t x603 = INT8_MIN;
	int64_t x604 = INT64_MAX;
	volatile uint64_t t14 = 7344497479961LLU;

    t14 = (x601<<(x602>>(x603!=x604)));

    if (t14 != 733LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x633 = INT64_MAX;
	int8_t x635 = INT8_MIN;
	uint16_t x636 = UINT16_MAX;
	volatile int64_t t15 = INT64_MAX;

    t15 = (x633<<(x634>>(x635!=x636)));

    if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x654 = 0;
	int32_t x655 = INT32_MIN;
	uint64_t t16 = UINT64_MAX;

    t16 = (x653<<(x654>>(x655!=x656)));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x701 = 1499480;
	uint8_t x702 = 0U;
	int32_t x704 = INT32_MIN;
	int32_t t17 = 26842188;

    t17 = (x701<<(x702>>(x703!=x704)));

    if (t17 != 1499480) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x754 = 1U;
	int32_t x755 = INT32_MIN;
	volatile int32_t x756 = -1;
	volatile int32_t t18 = -2;

    t18 = (x753<<(x754>>(x755!=x756)));

    if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x769 = 63U;
	uint16_t x770 = 2U;
	int64_t x771 = INT64_MAX;
	int64_t x772 = 60220LL;

    t19 = (x769<<(x770>>(x771!=x772)));

    if (t19 != 126) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x809 = 710478428U;
	uint8_t x810 = 13U;
	int8_t x811 = INT8_MIN;
	uint32_t t20 = 5094689U;

    t20 = (x809<<(x810>>(x811!=x812)));

    if (t20 != 2520946432U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x837 = UINT8_MAX;
	uint8_t x838 = 9U;
	int16_t x840 = INT16_MAX;
	volatile int32_t t21 = 0;

    t21 = (x837<<(x838>>(x839!=x840)));

    if (t21 != 4080) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x873 = 36143182618971LLU;
	uint8_t x874 = 2U;
	int64_t x875 = INT64_MIN;
	int8_t x876 = INT8_MIN;

    t22 = (x873<<(x874>>(x875!=x876)));

    if (t22 != 72286365237942LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x997 = 88755405LLU;
	int16_t x998 = 1;
	static uint64_t x1000 = 26LLU;
	volatile uint64_t t23 = 3108LLU;

    t23 = (x997<<(x998>>(x999!=x1000)));

    if (t23 != 88755405LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x1001 = 24;
	uint16_t x1002 = 0U;
	int8_t x1004 = INT8_MIN;
	volatile int32_t t24 = 6;

    t24 = (x1001<<(x1002>>(x1003!=x1004)));

    if (t24 != 24) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x1025 = 1882345666LL;
	uint8_t x1026 = 20U;
	int8_t x1027 = INT8_MIN;
	int64_t x1028 = INT64_MIN;
	volatile int64_t t25 = -665887474690539LL;

    t25 = (x1025<<(x1026>>(x1027!=x1028)));

    if (t25 != 1927521961984LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x1033 = 74U;
	uint8_t x1034 = 13U;
	int64_t x1035 = 433175283946889347LL;
	static uint64_t x1036 = 1447821884905LLU;
	volatile int32_t t26 = -27;

    t26 = (x1033<<(x1034>>(x1035!=x1036)));

    if (t26 != 4736) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x1077 = UINT8_MAX;
	int16_t x1078 = 1;
	int64_t x1080 = -1LL;
	static int32_t t27 = -348910;

    t27 = (x1077<<(x1078>>(x1079!=x1080)));

    if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x1205 = UINT32_MAX;
	static int32_t x1207 = INT32_MIN;
	volatile uint32_t t28 = 45U;

    t28 = (x1205<<(x1206>>(x1207!=x1208)));

    if (t28 != 4294967294U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x1257 = INT8_MAX;
	int16_t x1258 = 4;
	int8_t x1259 = INT8_MAX;
	volatile int32_t x1260 = -1;
	int32_t t29 = 2504519;

    t29 = (x1257<<(x1258>>(x1259!=x1260)));

    if (t29 != 508) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1358 = INT8_MAX;
	static uint32_t x1359 = 2U;
	uint8_t x1360 = 1U;
	uint64_t t30 = 20970832393753LLU;

    t30 = (x1357<<(x1358>>(x1359!=x1360)));

    if (t30 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x1393 = 5U;
	uint64_t x1394 = 6LLU;
	static int8_t x1395 = -24;
	volatile int16_t x1396 = -1;

    t31 = (x1393<<(x1394>>(x1395!=x1396)));

    if (t31 != 40) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint16_t x1397 = 15658U;
	int8_t x1398 = 5;
	static int16_t x1399 = -5087;
	volatile uint32_t x1400 = UINT32_MAX;
	int32_t t32 = -5761;

    t32 = (x1397<<(x1398>>(x1399!=x1400)));

    if (t32 != 62632) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x1405 = 3756686U;
	uint16_t x1406 = 5U;
	uint8_t x1407 = 5U;
	int8_t x1408 = INT8_MAX;
	volatile uint32_t t33 = 259040U;

    t33 = (x1405<<(x1406>>(x1407!=x1408)));

    if (t33 != 15026744U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x1673 = 6U;
	volatile uint8_t x1674 = 28U;
	uint8_t x1675 = UINT8_MAX;
	volatile int64_t x1676 = 98064388392694LL;
	volatile int32_t t34 = -3;

    t34 = (x1673<<(x1674>>(x1675!=x1676)));

    if (t34 != 98304) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x1706 = 6U;
	int16_t x1707 = -1;
	volatile int32_t t35 = -687885021;

    t35 = (x1705<<(x1706>>(x1707!=x1708)));

    if (t35 != 384) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x1750 = 2U;
	volatile uint16_t x1751 = 10876U;
	int32_t t36 = 3425;

    t36 = (x1749<<(x1750>>(x1751!=x1752)));

    if (t36 != 510) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x1766 = 26U;
	uint64_t x1767 = 89LLU;
	static uint64_t x1768 = 11LLU;
	uint64_t t37 = 2828241418879429LLU;

    t37 = (x1765<<(x1766>>(x1767!=x1768)));

    if (t37 != 1597440LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x1781 = UINT64_MAX;
	uint32_t x1782 = 43U;
	int64_t x1783 = -533950521LL;
	static int16_t x1784 = -1;
	uint64_t t38 = 11096838LLU;

    t38 = (x1781<<(x1782>>(x1783!=x1784)));

    if (t38 != 18446744073707454464LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x1809 = 1629U;
	int32_t x1811 = -1;
	int32_t x1812 = 33;

    t39 = (x1809<<(x1810>>(x1811!=x1812)));

    if (t39 != 6672384U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x1829 = UINT64_MAX;
	int8_t x1830 = 1;
	static volatile uint8_t x1831 = 2U;
	uint32_t x1832 = 19U;
	volatile uint64_t t40 = UINT64_MAX;

    t40 = (x1829<<(x1830>>(x1831!=x1832)));

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x1858 = 3U;
	int16_t x1860 = INT16_MIN;
	static volatile int32_t t41 = -3267;

    t41 = (x1857<<(x1858>>(x1859!=x1860)));

    if (t41 != 904) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x1894 = 13U;
	volatile uint16_t x1895 = 0U;
	int64_t x1896 = INT64_MIN;
	volatile uint64_t t42 = 36LLU;

    t42 = (x1893<<(x1894>>(x1895!=x1896)));

    if (t42 != 383649373184LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x1930 = 2U;
	uint64_t x1931 = 10419233972260LLU;
	static volatile uint16_t x1932 = 4U;
	static volatile uint64_t t43 = 36831741104274852LLU;

    t43 = (x1929<<(x1930>>(x1931!=x1932)));

    if (t43 != 4701101654585072LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x2005 = 5717LLU;
	volatile uint8_t x2006 = 3U;
	volatile int8_t x2007 = INT8_MAX;
	volatile uint64_t t44 = 4649381026468324417LLU;

    t44 = (x2005<<(x2006>>(x2007!=x2008)));

    if (t44 != 11434LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x2129 = INT64_MAX;
	volatile int8_t x2131 = -7;
	static int32_t x2132 = INT32_MAX;
	int64_t t45 = INT64_MAX;

    t45 = (x2129<<(x2130>>(x2131!=x2132)));

    if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x2185 = 2108862LLU;
	volatile int8_t x2186 = INT8_MAX;
	volatile int32_t x2187 = INT32_MIN;
	int64_t x2188 = INT64_MAX;
	volatile uint64_t t46 = 298LLU;

    t46 = (x2185<<(x2186>>(x2187!=x2188)));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x2285 = INT16_MAX;
	static uint8_t x2286 = 7U;
	volatile int32_t t47 = 1163;

    t47 = (x2285<<(x2286>>(x2287!=x2288)));

    if (t47 != 4194176) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x2321 = 965U;
	uint16_t x2322 = 5U;
	static int64_t x2323 = -3211514664LL;
	int16_t x2324 = INT16_MAX;
	uint32_t t48 = 2956792U;

    t48 = (x2321<<(x2322>>(x2323!=x2324)));

    if (t48 != 3860U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x2337 = 6767U;
	int8_t x2338 = 1;
	volatile int64_t x2340 = -1LL;
	int32_t t49 = -186911954;

    t49 = (x2337<<(x2338>>(x2339!=x2340)));

    if (t49 != 6767) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x2481 = 10;
	volatile uint8_t x2482 = 7U;
	static int32_t x2484 = INT32_MAX;
	volatile int32_t t50 = -953629;

    t50 = (x2481<<(x2482>>(x2483!=x2484)));

    if (t50 != 80) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x2505 = UINT32_MAX;
	uint8_t x2506 = 54U;
	int16_t x2507 = 92;
	volatile int8_t x2508 = INT8_MIN;
	uint32_t t51 = 1158U;

    t51 = (x2505<<(x2506>>(x2507!=x2508)));

    if (t51 != 4160749568U) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x2557 = 4513891;
	static uint64_t x2559 = 50012193267035747LLU;

    t52 = (x2557<<(x2558>>(x2559!=x2560)));

    if (t52 != 9027782) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x2633 = INT32_MAX;
	uint8_t x2634 = 1U;
	volatile int32_t x2635 = -1069585477;
	int64_t x2636 = -229LL;
	volatile int32_t t53 = INT32_MAX;

    t53 = (x2633<<(x2634>>(x2635!=x2636)));

    if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x2657 = 596141520305437LL;
	static uint8_t x2658 = 3U;
	static int8_t x2659 = -7;
	int32_t x2660 = INT32_MAX;
	int64_t t54 = 16LL;

    t54 = (x2657<<(x2658>>(x2659!=x2660)));

    if (t54 != 1192283040610874LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x2690 = 6;
	static volatile int16_t x2691 = 108;
	volatile int16_t x2692 = -2803;
	static volatile int32_t t55 = -6433;

    t55 = (x2689<<(x2690>>(x2691!=x2692)));

    if (t55 != 262136) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x2705 = 0LLU;
	volatile int8_t x2707 = -2;
	static volatile int8_t x2708 = -1;
	uint64_t t56 = 77670158814786LLU;

    t56 = (x2705<<(x2706>>(x2707!=x2708)));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x2749 = 17;
	uint8_t x2750 = 1U;
	volatile int32_t x2752 = -514632805;
	int32_t t57 = -87;

    t57 = (x2749<<(x2750>>(x2751!=x2752)));

    if (t57 != 17) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x2781 = 78LL;
	static volatile int64_t x2783 = INT64_MIN;
	static uint8_t x2784 = 1U;
	volatile int64_t t58 = -795266LL;

    t58 = (x2781<<(x2782>>(x2783!=x2784)));

    if (t58 != 343047627866112LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x2841 = 41U;
	static int8_t x2842 = 0;
	uint16_t x2843 = 4U;
	volatile int8_t x2844 = INT8_MIN;
	static volatile int32_t t59 = -156;

    t59 = (x2841<<(x2842>>(x2843!=x2844)));

    if (t59 != 41) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x2853 = 7923U;
	uint8_t x2854 = 12U;
	int64_t x2855 = -22LL;
	int32_t t60 = -80016;

    t60 = (x2853<<(x2854>>(x2855!=x2856)));

    if (t60 != 507072) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x2889 = 32779647LL;
	int32_t x2890 = 28;
	int64_t x2891 = INT64_MIN;
	int64_t x2892 = -1LL;
	int64_t t61 = -73812248144801LL;

    t61 = (x2889<<(x2890>>(x2891!=x2892)));

    if (t61 != 537061736448LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x2909 = INT64_MAX;
	int16_t x2912 = INT16_MIN;

    t62 = (x2909<<(x2910>>(x2911!=x2912)));

    if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x3049 = INT64_MAX;
	uint8_t x3051 = 31U;
	uint32_t x3052 = 25438414U;
	volatile int64_t t63 = INT64_MAX;

    t63 = (x3049<<(x3050>>(x3051!=x3052)));

    if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x3058 = 2;
	int64_t x3059 = -1LL;
	static volatile int32_t x3060 = -298215;
	volatile int32_t t64 = 201;

    t64 = (x3057<<(x3058>>(x3059!=x3060)));

    if (t64 != 10) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x3093 = 1U;
	int8_t x3094 = 1;
	int32_t x3095 = INT32_MAX;
	static uint16_t x3096 = 1U;
	int32_t t65 = 1150;

    t65 = (x3093<<(x3094>>(x3095!=x3096)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x3153 = 5U;
	uint16_t x3154 = 10U;
	int16_t x3155 = -1;
	static volatile int32_t t66 = -95443;

    t66 = (x3153<<(x3154>>(x3155!=x3156)));

    if (t66 != 5120) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x3338 = 0U;
	int8_t x3339 = INT8_MAX;
	uint16_t x3340 = UINT16_MAX;

    t67 = (x3337<<(x3338>>(x3339!=x3340)));

    if (t67 != 20117) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x3362 = 5;
	int8_t x3363 = -1;
	volatile int64_t x3364 = INT64_MIN;
	int32_t t68 = -1;

    t68 = (x3361<<(x3362>>(x3363!=x3364)));

    if (t68 != 10116) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x3369 = 1018687LLU;
	volatile int8_t x3370 = INT8_MAX;
	static uint32_t x3371 = 95540U;
	uint32_t x3372 = UINT32_MAX;
	static volatile uint64_t t69 = 13962087LLU;

    t69 = (x3369<<(x3370>>(x3371!=x3372)));

    if (t69 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int8_t x3409 = INT8_MAX;
	static int32_t x3410 = 7;
	static volatile int32_t x3412 = -1;
	volatile int32_t t70 = -471;

    t70 = (x3409<<(x3410>>(x3411!=x3412)));

    if (t70 != 16256) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x3433 = 24088022LL;
	static volatile int8_t x3435 = INT8_MIN;
	int64_t t71 = 105718984LL;

    t71 = (x3433<<(x3434>>(x3435!=x3436)));

    if (t71 != 770816704LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x3517 = INT8_MAX;
	uint8_t x3518 = 1U;
	uint32_t x3519 = UINT32_MAX;
	static uint16_t x3520 = 2U;
	int32_t t72 = 62;

    t72 = (x3517<<(x3518>>(x3519!=x3520)));

    if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint16_t x3566 = 6U;
	uint32_t x3567 = 522U;
	static int32_t x3568 = -1;

    t73 = (x3565<<(x3566>>(x3567!=x3568)));

    if (t73 != 120) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x3601 = UINT64_MAX;
	uint8_t x3602 = 14U;
	int32_t x3603 = 121599;
	static int8_t x3604 = INT8_MIN;
	uint64_t t74 = 1122LLU;

    t74 = (x3601<<(x3602>>(x3603!=x3604)));

    if (t74 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x3630 = 1;
	int32_t x3631 = INT32_MIN;
	static uint8_t x3632 = UINT8_MAX;

    t75 = (x3629<<(x3630>>(x3631!=x3632)));

    if (t75 != 936) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x3690 = 1U;
	uint16_t x3691 = 112U;
	int32_t x3692 = INT32_MAX;
	int32_t t76 = -211984;

    t76 = (x3689<<(x3690>>(x3691!=x3692)));

    if (t76 != 25089) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x3693 = 31U;
	volatile int64_t x3694 = 3LL;
	int8_t x3695 = INT8_MIN;
	int32_t x3696 = INT32_MAX;
	static uint32_t t77 = 6U;

    t77 = (x3693<<(x3694>>(x3695!=x3696)));

    if (t77 != 62U) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x3766 = 0;
	int64_t x3768 = -2137416251305125LL;
	uint64_t t78 = 0LLU;

    t78 = (x3765<<(x3766>>(x3767!=x3768)));

    if (t78 != 8594LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x3901 = UINT64_MAX;
	uint16_t x3902 = 7U;
	static int16_t x3903 = INT16_MIN;
	int16_t x3904 = INT16_MIN;
	uint64_t t79 = 31309LLU;

    t79 = (x3901<<(x3902>>(x3903!=x3904)));

    if (t79 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x3921 = 10085581LLU;
	int16_t x3922 = 2;
	static int64_t x3923 = INT64_MIN;
	volatile int32_t x3924 = -1;
	volatile uint64_t t80 = 34878732608LLU;

    t80 = (x3921<<(x3922>>(x3923!=x3924)));

    if (t80 != 20171162LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x3942 = 0U;
	static int8_t x3943 = INT8_MIN;
	static uint8_t x3944 = UINT8_MAX;
	volatile int32_t t81 = -84116;

    t81 = (x3941<<(x3942>>(x3943!=x3944)));

    if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x4109 = 28173299U;
	uint8_t x4110 = 15U;
	int8_t x4111 = -1;
	volatile int32_t x4112 = INT32_MIN;
	uint32_t t82 = 101U;

    t82 = (x4109<<(x4110>>(x4111!=x4112)));

    if (t82 != 3606182272U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x4134 = 1;
	static int8_t x4135 = INT8_MIN;
	uint64_t x4136 = 77LLU;
	int32_t t83 = 30;

    t83 = (x4133<<(x4134>>(x4135!=x4136)));

    if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x4153 = UINT32_MAX;
	static uint32_t x4154 = 39U;
	uint8_t x4155 = 0U;
	static volatile uint8_t x4156 = 10U;
	uint32_t t84 = 1838U;

    t84 = (x4153<<(x4154>>(x4155!=x4156)));

    if (t84 != 4294443008U) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x4225 = 98U;
	uint8_t x4227 = 26U;
	static uint8_t x4228 = UINT8_MAX;
	volatile int32_t t85 = 1452;

    t85 = (x4225<<(x4226>>(x4227!=x4228)));

    if (t85 != 102760448) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x4265 = 2U;
	volatile uint16_t x4266 = 6U;
	uint8_t x4267 = 89U;
	volatile int64_t x4268 = INT64_MAX;
	volatile int32_t t86 = -5;

    t86 = (x4265<<(x4266>>(x4267!=x4268)));

    if (t86 != 16) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x4277 = 2934779862LLU;
	int32_t x4278 = 1;
	uint16_t x4279 = 91U;
	uint64_t t87 = 268834575443531953LLU;

    t87 = (x4277<<(x4278>>(x4279!=x4280)));

    if (t87 != 2934779862LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x4373 = UINT64_MAX;
	volatile uint8_t x4374 = 3U;
	volatile int8_t x4376 = -3;
	static volatile uint64_t t88 = 2LLU;

    t88 = (x4373<<(x4374>>(x4375!=x4376)));

    if (t88 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x4422 = 7U;
	volatile int8_t x4423 = -1;
	static uint8_t x4424 = 11U;
	volatile int32_t t89 = 2;

    t89 = (x4421<<(x4422>>(x4423!=x4424)));

    if (t89 != 184) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x4529 = INT64_MAX;
	volatile uint8_t x4530 = 0U;
	int8_t x4531 = -1;
	uint8_t x4532 = 1U;
	int64_t t90 = INT64_MAX;

    t90 = (x4529<<(x4530>>(x4531!=x4532)));

    if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x4583 = 7613428769180LL;
	volatile int32_t t91 = -557225;

    t91 = (x4581<<(x4582>>(x4583!=x4584)));

    if (t91 != 12) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x4625 = 47616LLU;
	uint16_t x4626 = 51U;
	int32_t x4628 = -1;
	volatile uint64_t t92 = 130215894072LLU;

    t92 = (x4625<<(x4626>>(x4627!=x4628)));

    if (t92 != 1597727834112LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x4725 = 10064057LL;
	int16_t x4726 = 1;
	int64_t t93 = -300988833063LL;

    t93 = (x4725<<(x4726>>(x4727!=x4728)));

    if (t93 != 10064057LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x4770 = 31U;
	static volatile int64_t x4771 = INT64_MAX;
	int16_t x4772 = INT16_MIN;
	volatile int32_t t94 = -1538167;

    t94 = (x4769<<(x4770>>(x4771!=x4772)));

    if (t94 != 163840) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x4871 = INT32_MAX;
	static int16_t x4872 = -161;
	volatile int64_t t95 = -39873LL;

    t95 = (x4869<<(x4870>>(x4871!=x4872)));

    if (t95 != 2LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x4945 = 24198176070LLU;
	int32_t x4947 = -1;

    t96 = (x4945<<(x4946>>(x4947!=x4948)));

    if (t96 != 24198176070LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x4965 = 35430LLU;
	static uint64_t x4966 = 1LLU;

    t97 = (x4965<<(x4966>>(x4967!=x4968)));

    if (t97 != 35430LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x5053 = 15913U;
	int16_t x5056 = INT16_MAX;
	uint32_t t98 = 1639557U;

    t98 = (x5053<<(x5054>>(x5055!=x5056)));

    if (t98 != 2036864U) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x5081 = INT16_MAX;
	uint64_t x5083 = 0LLU;
	uint32_t x5084 = 94286246U;
	int32_t t99 = 310566936;

    t99 = (x5081<<(x5082>>(x5083!=x5084)));

    if (t99 != 32767) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x5126 = 22U;
	uint32_t x5128 = UINT32_MAX;
	uint32_t t100 = 909374883U;

    t100 = (x5125<<(x5126>>(x5127!=x5128)));

    if (t100 != 104448U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x5149 = UINT64_MAX;
	uint8_t x5150 = 50U;
	volatile uint32_t x5151 = UINT32_MAX;
	uint64_t x5152 = 473681LLU;
	volatile uint64_t t101 = 3718298LLU;

    t101 = (x5149<<(x5150>>(x5151!=x5152)));

    if (t101 != 18446744073675997184LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x5205 = 331U;
	static volatile uint8_t x5207 = 19U;
	static uint8_t x5208 = 0U;
	volatile int32_t t102 = 528116;

    t102 = (x5205<<(x5206>>(x5207!=x5208)));

    if (t102 != 1355776) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x5353 = 24513LLU;
	volatile int16_t x5354 = 0;
	int16_t x5355 = 15;
	static volatile uint64_t t103 = 201305275945524854LLU;

    t103 = (x5353<<(x5354>>(x5355!=x5356)));

    if (t103 != 24513LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x5365 = 4U;
	int8_t x5366 = 23;
	int8_t x5367 = -5;
	int8_t x5368 = 11;
	volatile int32_t t104 = -249;

    t104 = (x5365<<(x5366>>(x5367!=x5368)));

    if (t104 != 8192) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x5369 = UINT8_MAX;
	volatile uint8_t x5370 = 0U;
	volatile int64_t x5371 = 3925926252717060LL;
	int64_t x5372 = INT64_MIN;

    t105 = (x5369<<(x5370>>(x5371!=x5372)));

    if (t105 != 255) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x5381 = UINT16_MAX;
	volatile uint16_t x5382 = 2U;
	int8_t x5383 = -29;
	int32_t x5384 = INT32_MAX;
	static int32_t t106 = 16;

    t106 = (x5381<<(x5382>>(x5383!=x5384)));

    if (t106 != 131070) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x5389 = UINT8_MAX;
	uint8_t x5390 = 4U;
	volatile int32_t t107 = 14;

    t107 = (x5389<<(x5390>>(x5391!=x5392)));

    if (t107 != 1020) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x5433 = 174U;
	int16_t x5434 = 13;
	volatile int8_t x5435 = 0;
	volatile int8_t x5436 = INT8_MAX;
	int32_t t108 = -52530;

    t108 = (x5433<<(x5434>>(x5435!=x5436)));

    if (t108 != 11136) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x5485 = 450037004LLU;
	volatile int8_t x5486 = INT8_MAX;
	uint8_t x5487 = 12U;
	int8_t x5488 = INT8_MIN;

    t109 = (x5485<<(x5486>>(x5487!=x5488)));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x5493 = 69020951;
	volatile int8_t x5494 = 7;
	int8_t x5495 = 1;
	uint8_t x5496 = UINT8_MAX;
	int32_t t110 = -2984;

    t110 = (x5493<<(x5494>>(x5495!=x5496)));

    if (t110 != 552167608) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x5553 = UINT16_MAX;
	int16_t x5555 = -10529;
	int64_t x5556 = -53283815308185LL;
	static int32_t t111 = -47818;

    t111 = (x5553<<(x5554>>(x5555!=x5556)));

    if (t111 != 262140) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x5637 = 4614;
	int16_t x5638 = 23;
	static int8_t x5639 = -1;
	static uint64_t x5640 = 5877396422253LLU;
	int32_t t112 = -1484838;

    t112 = (x5637<<(x5638>>(x5639!=x5640)));

    if (t112 != 9449472) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x5653 = 57521LLU;
	int8_t x5654 = INT8_MAX;
	int64_t x5655 = -1LL;
	int32_t x5656 = 1975013;
	static uint64_t t113 = 26613LLU;

    t113 = (x5653<<(x5654>>(x5655!=x5656)));

    if (t113 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x5681 = 13291615207781020LLU;
	volatile int8_t x5683 = INT8_MIN;
	uint32_t x5684 = UINT32_MAX;
	uint64_t t114 = 5624091690163407606LLU;

    t114 = (x5681<<(x5682>>(x5683!=x5684)));

    if (t114 != 850663373297985280LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x5721 = 18840;
	uint16_t x5722 = 24U;
	volatile int32_t x5723 = -1;
	int32_t x5724 = 5;

    t115 = (x5721<<(x5722>>(x5723!=x5724)));

    if (t115 != 77168640) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x5741 = INT8_MAX;
	int64_t x5742 = 0LL;
	int8_t x5743 = INT8_MIN;
	static volatile int32_t t116 = 140533401;

    t116 = (x5741<<(x5742>>(x5743!=x5744)));

    if (t116 != 127) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x5781 = 53647876378337LLU;
	uint16_t x5782 = 0U;
	int32_t x5783 = INT32_MIN;
	static int8_t x5784 = INT8_MIN;
	volatile uint64_t t117 = 44LLU;

    t117 = (x5781<<(x5782>>(x5783!=x5784)));

    if (t117 != 53647876378337LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x5837 = 240301251;
	uint8_t x5838 = 0U;
	int8_t x5840 = -5;
	int32_t t118 = -10938595;

    t118 = (x5837<<(x5838>>(x5839!=x5840)));

    if (t118 != 240301251) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x5913 = 7936LL;
	volatile int8_t x5914 = 15;
	static int32_t x5915 = 28434;
	int32_t x5916 = -1;
	int64_t t119 = 371999424321491LL;

    t119 = (x5913<<(x5914>>(x5915!=x5916)));

    if (t119 != 1015808LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x5941 = 17690662U;
	volatile uint8_t x5942 = 12U;
	uint8_t x5943 = 1U;
	static volatile uint32_t t120 = 179U;

    t120 = (x5941<<(x5942>>(x5943!=x5944)));

    if (t120 != 1132202368U) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x5962 = 1;
	volatile uint32_t x5963 = UINT32_MAX;

    t121 = (x5961<<(x5962>>(x5963!=x5964)));

    if (t121 != 119061321762312LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x5981 = 96U;
	volatile uint8_t x5982 = 2U;
	int16_t x5984 = -1;
	int32_t t122 = 2;

    t122 = (x5981<<(x5982>>(x5983!=x5984)));

    if (t122 != 192) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x6041 = 25U;
	static int8_t x6043 = -1;

    t123 = (x6041<<(x6042>>(x6043!=x6044)));

    if (t123 != 51200) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x6054 = 1U;
	static volatile uint32_t x6056 = UINT32_MAX;
	static volatile int64_t t124 = 13LL;

    t124 = (x6053<<(x6054>>(x6055!=x6056)));

    if (t124 != 169370100LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x6113 = UINT64_MAX;
	int16_t x6114 = 80;
	int8_t x6115 = 8;
	int8_t x6116 = -1;
	uint64_t t125 = 118730LLU;

    t125 = (x6113<<(x6114>>(x6115!=x6116)));

    if (t125 != 18446742974197923840LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x6165 = 7;
	static int16_t x6166 = 1;
	uint64_t x6167 = 264945599849346132LLU;

    t126 = (x6165<<(x6166>>(x6167!=x6168)));

    if (t126 != 7) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x6213 = 19635365207293LLU;
	uint64_t x6214 = 21LLU;
	int64_t x6216 = INT64_MAX;
	uint64_t t127 = 3314504LLU;

    t127 = (x6213<<(x6214>>(x6215!=x6216)));

    if (t127 != 20106613972268032LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x6257 = 30;
	uint64_t x6258 = 1LLU;
	uint32_t x6259 = UINT32_MAX;

    t128 = (x6257<<(x6258>>(x6259!=x6260)));

    if (t128 != 30) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x6297 = 15U;
	static uint8_t x6298 = 1U;
	static uint16_t x6299 = UINT16_MAX;
	volatile int32_t x6300 = INT32_MAX;
	volatile int32_t t129 = 24634;

    t129 = (x6297<<(x6298>>(x6299!=x6300)));

    if (t129 != 15) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x6325 = 111U;
	volatile int64_t x6326 = 18LL;
	static int8_t x6327 = INT8_MAX;
	volatile uint64_t x6328 = 14088LLU;
	volatile int32_t t130 = -1183;

    t130 = (x6325<<(x6326>>(x6327!=x6328)));

    if (t130 != 56832) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x6361 = 8U;
	volatile uint64_t x6362 = 5LLU;
	static int8_t x6363 = INT8_MIN;
	int32_t x6364 = INT32_MIN;
	int32_t t131 = -835;

    t131 = (x6361<<(x6362>>(x6363!=x6364)));

    if (t131 != 32) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x6402 = 0;
	uint64_t x6403 = UINT64_MAX;
	volatile uint64_t x6404 = 6601180713095023296LLU;
	int32_t t132 = -29006644;

    t132 = (x6401<<(x6402>>(x6403!=x6404)));

    if (t132 != 14033) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x6473 = UINT16_MAX;
	int8_t x6474 = 0;
	static uint64_t x6475 = 15276LLU;
	uint8_t x6476 = 123U;
	volatile int32_t t133 = -22310730;

    t133 = (x6473<<(x6474>>(x6475!=x6476)));

    if (t133 != 65535) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x6537 = 93U;
	uint16_t x6538 = 3U;
	int64_t x6539 = 1280LL;
	volatile int32_t x6540 = INT32_MIN;

    t134 = (x6537<<(x6538>>(x6539!=x6540)));

    if (t134 != 186) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x6629 = 795U;
	int16_t x6630 = 18;
	static int8_t x6631 = -18;
	uint8_t x6632 = 6U;
	volatile int32_t t135 = -2951301;

    t135 = (x6629<<(x6630>>(x6631!=x6632)));

    if (t135 != 407040) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x6647 = -11LL;
	uint64_t x6648 = UINT64_MAX;

    t136 = (x6645<<(x6646>>(x6647!=x6648)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x6721 = 2U;
	int8_t x6722 = 3;
	uint8_t x6723 = 1U;
	volatile int32_t t137 = 76826276;

    t137 = (x6721<<(x6722>>(x6723!=x6724)));

    if (t137 != 4) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x6757 = 1193U;
	uint8_t x6758 = 10U;
	int16_t x6760 = 2127;
	int32_t t138 = 49087;

    t138 = (x6757<<(x6758>>(x6759!=x6760)));

    if (t138 != 38176) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x6817 = 3733284;
	int8_t x6818 = 1;
	volatile int32_t x6819 = -1;
	int16_t x6820 = INT16_MIN;
	volatile int32_t t139 = -1;

    t139 = (x6817<<(x6818>>(x6819!=x6820)));

    if (t139 != 3733284) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x6853 = 1;
	int8_t x6855 = 1;
	volatile int32_t t140 = -74056;

    t140 = (x6853<<(x6854>>(x6855!=x6856)));

    if (t140 != 16777216) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x6869 = INT16_MAX;
	uint8_t x6870 = 6U;
	int64_t x6871 = INT64_MIN;
	static volatile int64_t x6872 = -1LL;
	int32_t t141 = 761;

    t141 = (x6869<<(x6870>>(x6871!=x6872)));

    if (t141 != 262136) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x6881 = 44;
	static volatile uint64_t x6882 = 40LLU;
	int8_t x6884 = INT8_MIN;
	static int32_t t142 = 0;

    t142 = (x6881<<(x6882>>(x6883!=x6884)));

    if (t142 != 46137344) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x6933 = 109967103780LLU;
	uint16_t x6934 = 17U;
	int8_t x6935 = INT8_MIN;
	uint8_t x6936 = UINT8_MAX;
	static uint64_t t143 = 10LLU;

    t143 = (x6933<<(x6934>>(x6935!=x6936)));

    if (t143 != 28151578567680LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x7033 = 3U;
	uint8_t x7034 = 3U;
	int8_t x7035 = INT8_MIN;

    t144 = (x7033<<(x7034>>(x7035!=x7036)));

    if (t144 != 24) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x7073 = 39813045U;
	uint32_t x7074 = 8U;
	static uint32_t x7075 = 3U;
	volatile uint64_t x7076 = 16085161LLU;
	uint32_t t145 = 0U;

    t145 = (x7073<<(x7074>>(x7075!=x7076)));

    if (t145 != 637008720U) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x7098 = 1;
	uint32_t x7099 = 38560241U;
	uint8_t x7100 = 58U;
	static int32_t t146 = -109323;

    t146 = (x7097<<(x7098>>(x7099!=x7100)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x7218 = 92U;
	int64_t x7219 = -3011LL;
	uint64_t t147 = 127LLU;

    t147 = (x7217<<(x7218>>(x7219!=x7220)));

    if (t147 != 4128815695880257536LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x7249 = UINT64_MAX;
	uint8_t x7250 = 2U;
	volatile uint64_t t148 = 508097LLU;

    t148 = (x7249<<(x7250>>(x7251!=x7252)));

    if (t148 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x7326 = 7U;
	int32_t x7327 = INT32_MAX;
	uint32_t x7328 = 3520937U;
	uint32_t t149 = 115015U;

    t149 = (x7325<<(x7326>>(x7327!=x7328)));

    if (t149 != 24U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x7438 = 8U;
	static uint8_t x7440 = UINT8_MAX;

    t150 = (x7437<<(x7438>>(x7439!=x7440)));

    if (t150 != 272LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x7453 = 24U;
	uint32_t x7455 = 419692U;
	int16_t x7456 = 218;
	static int32_t t151 = -503;

    t151 = (x7453<<(x7454>>(x7455!=x7456)));

    if (t151 != 49152) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x7537 = 481034U;
	int8_t x7538 = 34;
	volatile int8_t x7540 = INT8_MIN;
	uint32_t t152 = 153U;

    t152 = (x7537<<(x7538>>(x7539!=x7540)));

    if (t152 != 2920546304U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x7553 = UINT32_MAX;
	static uint32_t x7554 = 7U;
	volatile uint16_t x7555 = 5U;
	uint8_t x7556 = UINT8_MAX;
	uint32_t t153 = 221289U;

    t153 = (x7553<<(x7554>>(x7555!=x7556)));

    if (t153 != 4294967288U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x7565 = 12;
	int32_t x7566 = 11;
	volatile uint16_t x7567 = 180U;
	int64_t x7568 = -1LL;

    t154 = (x7565<<(x7566>>(x7567!=x7568)));

    if (t154 != 384) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x7577 = 25892512535343405LLU;
	static volatile uint8_t x7578 = 10U;
	int32_t x7579 = INT32_MIN;
	int16_t x7580 = INT16_MAX;

    t155 = (x7577<<(x7578>>(x7579!=x7580)));

    if (t155 != 828560401130988960LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x7597 = 9684527045958LLU;
	int8_t x7598 = INT8_MAX;
	volatile int8_t x7599 = 0;
	uint32_t x7600 = 54U;

    t156 = (x7597<<(x7598>>(x7599!=x7600)));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x7621 = INT8_MAX;
	int16_t x7622 = 5;
	int64_t x7623 = -1LL;

    t157 = (x7621<<(x7622>>(x7623!=x7624)));

    if (t157 != 508) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint16_t x7630 = 8U;
	int16_t x7631 = -1;
	int16_t x7632 = INT16_MIN;
	static int32_t t158 = -119;

    t158 = (x7629<<(x7630>>(x7631!=x7632)));

    if (t158 != 524272) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x7649 = 4880656235256589LLU;
	int8_t x7650 = INT8_MAX;
	uint32_t x7652 = UINT32_MAX;
	volatile uint64_t t159 = 519704979390LLU;

    t159 = (x7649<<(x7650>>(x7651!=x7652)));

    if (t159 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x7673 = 92665U;
	uint8_t x7674 = 52U;
	int16_t x7676 = -1;
	static volatile uint32_t t160 = 1U;

    t160 = (x7673<<(x7674>>(x7675!=x7676)));

    if (t160 != 3825205248U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x7701 = 3U;
	uint8_t x7702 = 2U;
	static int32_t x7703 = INT32_MIN;
	uint16_t x7704 = 25631U;
	int32_t t161 = 50;

    t161 = (x7701<<(x7702>>(x7703!=x7704)));

    if (t161 != 6) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x7730 = 7;
	static int64_t x7731 = 424LL;
	static int16_t x7732 = INT16_MAX;
	static uint32_t t162 = 289032883U;

    t162 = (x7729<<(x7730>>(x7731!=x7732)));

    if (t162 != 1624784U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x7838 = 18LLU;
	int32_t x7839 = INT32_MAX;
	volatile uint8_t x7840 = UINT8_MAX;
	volatile uint32_t t163 = 3U;

    t163 = (x7837<<(x7838>>(x7839!=x7840)));

    if (t163 != 4294966784U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x7915 = -1LL;
	int64_t x7916 = -17845LL;
	static int32_t t164 = -6;

    t164 = (x7913<<(x7914>>(x7915!=x7916)));

    if (t164 != 255) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x8114 = 24U;
	int32_t x8115 = 45;
	int8_t x8116 = INT8_MIN;
	volatile uint32_t t165 = 55U;

    t165 = (x8113<<(x8114>>(x8115!=x8116)));

    if (t165 != 4294963200U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x8149 = 6612652U;
	static int8_t x8150 = 22;
	volatile uint32_t x8151 = 274U;
	uint32_t x8152 = 1944U;

    t166 = (x8149<<(x8150>>(x8151!=x8152)));

    if (t166 != 657809408U) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x8185 = INT64_MAX;
	volatile int8_t x8186 = 0;
	volatile int64_t x8187 = -15897581LL;
	int32_t x8188 = -1;
	int64_t t167 = INT64_MAX;

    t167 = (x8185<<(x8186>>(x8187!=x8188)));

    if (t167 != INT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x8229 = 378911864484229LL;
	volatile uint8_t x8230 = 0U;
	static int32_t x8231 = 9;
	static int64_t t168 = 487089920400317LL;

    t168 = (x8229<<(x8230>>(x8231!=x8232)));

    if (t168 != 378911864484229LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x8253 = INT16_MAX;
	volatile uint16_t x8254 = 0U;
	volatile int64_t x8255 = 4952557LL;
	int16_t x8256 = INT16_MIN;

    t169 = (x8253<<(x8254>>(x8255!=x8256)));

    if (t169 != 32767) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x8378 = 16U;
	int8_t x8379 = 47;
	static volatile uint8_t x8380 = 17U;
	uint32_t t170 = 732432090U;

    t170 = (x8377<<(x8378>>(x8379!=x8380)));

    if (t170 != 4294967040U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x8421 = 117343520729LLU;
	uint8_t x8422 = 19U;
	static int32_t x8423 = 580287070;
	static uint64_t t171 = 32831LLU;

    t171 = (x8421<<(x8422>>(x8423!=x8424)));

    if (t171 != 60079882613248LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x8454 = 6U;
	int16_t x8455 = INT16_MIN;
	int64_t x8456 = 5004535LL;

    t172 = (x8453<<(x8454>>(x8455!=x8456)));

    if (t172 != 24) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x8469 = 0LLU;
	int8_t x8470 = 0;
	static int8_t x8471 = INT8_MAX;
	volatile int8_t x8472 = INT8_MIN;
	volatile uint64_t t173 = 14370683985099LLU;

    t173 = (x8469<<(x8470>>(x8471!=x8472)));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x8553 = 349128233317164491LLU;
	volatile int32_t x8555 = INT32_MAX;
	static int64_t x8556 = INT64_MIN;
	uint64_t t174 = 772594LLU;

    t174 = (x8553<<(x8554>>(x8555!=x8556)));

    if (t174 != 349128233317164491LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x8841 = 397LL;
	uint16_t x8842 = 1U;
	int32_t x8843 = INT32_MAX;
	volatile uint16_t x8844 = UINT16_MAX;
	volatile int64_t t175 = -4792542766LL;

    t175 = (x8841<<(x8842>>(x8843!=x8844)));

    if (t175 != 397LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x8949 = UINT8_MAX;
	int8_t x8950 = 22;
	int64_t x8951 = -241089317LL;
	int16_t x8952 = INT16_MIN;
	int32_t t176 = 304;

    t176 = (x8949<<(x8950>>(x8951!=x8952)));

    if (t176 != 522240) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x9025 = 4758U;
	int32_t x9027 = INT32_MAX;
	static volatile uint16_t x9028 = 3U;
	volatile int32_t t177 = 1549214;

    t177 = (x9025<<(x9026>>(x9027!=x9028)));

    if (t177 != 623640576) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x9049 = 199U;
	static int8_t x9050 = 1;
	int32_t x9051 = INT32_MAX;
	uint32_t x9052 = 13734U;

    t178 = (x9049<<(x9050>>(x9051!=x9052)));

    if (t178 != 199) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x9153 = 0;
	int8_t x9154 = 0;
	volatile uint16_t x9155 = UINT16_MAX;
	static volatile int8_t x9156 = 1;
	int32_t t179 = 380898794;

    t179 = (x9153<<(x9154>>(x9155!=x9156)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x9203 = INT16_MAX;
	int64_t x9204 = 264669860382LL;
	volatile int32_t t180 = -1688;

    t180 = (x9201<<(x9202>>(x9203!=x9204)));

    if (t180 != 448) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x9261 = 57;
	static int16_t x9262 = 1;
	int16_t x9263 = -9;
	uint16_t x9264 = 19U;

    t181 = (x9261<<(x9262>>(x9263!=x9264)));

    if (t181 != 57) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint64_t x9273 = 157681422898282LLU;
	volatile uint16_t x9275 = 29204U;
	int8_t x9276 = -1;
	uint64_t t182 = 344LLU;

    t182 = (x9273<<(x9274>>(x9275!=x9276)));

    if (t182 != 10091611065490048LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x9341 = 1263LLU;
	uint8_t x9342 = 0U;
	volatile int32_t x9343 = -1059304858;
	volatile uint64_t t183 = 1144LLU;

    t183 = (x9341<<(x9342>>(x9343!=x9344)));

    if (t183 != 1263LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x9355 = INT32_MIN;
	static int16_t x9356 = 0;
	static int32_t t184 = INT32_MAX;

    t184 = (x9353<<(x9354>>(x9355!=x9356)));

    if (t184 != INT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x9437 = 41038LL;
	int8_t x9439 = -1;
	volatile int64_t t185 = -123924094LL;

    t185 = (x9437<<(x9438>>(x9439!=x9440)));

    if (t185 != 1377006780416LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x9666 = 27;
	int32_t x9667 = 712543;
	int32_t x9668 = -235;
	int32_t t186 = 16677758;

    t186 = (x9665<<(x9666>>(x9667!=x9668)));

    if (t186 != 1277952) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x9781 = 117306U;
	uint8_t x9782 = 36U;
	int8_t x9783 = -19;
	int64_t x9784 = -1LL;
	uint32_t t187 = 494578U;

    t187 = (x9781<<(x9782>>(x9783!=x9784)));

    if (t187 != 686292992U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x9833 = 0LLU;
	volatile int8_t x9834 = 25;
	static int64_t x9835 = 4005484LL;
	uint64_t x9836 = UINT64_MAX;
	static uint64_t t188 = 170928432LLU;

    t188 = (x9833<<(x9834>>(x9835!=x9836)));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x9837 = 214354;
	int16_t x9838 = 0;
	int16_t x9839 = 7;
	static volatile uint8_t x9840 = UINT8_MAX;

    t189 = (x9837<<(x9838>>(x9839!=x9840)));

    if (t189 != 214354) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x9845 = 21U;
	int16_t x9846 = 1;
	static int16_t x9847 = INT16_MIN;
	uint8_t x9848 = 7U;

    t190 = (x9845<<(x9846>>(x9847!=x9848)));

    if (t190 != 21) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x9849 = 2U;
	int8_t x9850 = 1;
	int32_t t191 = -1;

    t191 = (x9849<<(x9850>>(x9851!=x9852)));

    if (t191 != 2) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x9858 = 1U;
	static int8_t x9859 = -1;
	int16_t x9860 = INT16_MAX;
	uint32_t t192 = 239359498U;

    t192 = (x9857<<(x9858>>(x9859!=x9860)));

    if (t192 != 6790U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x9889 = 1;
	uint8_t x9890 = 33U;
	uint32_t x9891 = UINT32_MAX;
	int32_t t193 = -16884370;

    t193 = (x9889<<(x9890>>(x9891!=x9892)));

    if (t193 != 65536) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x10070 = INT8_MAX;
	int16_t x10071 = -58;
	uint8_t x10072 = 75U;
	uint64_t t194 = 7007LLU;

    t194 = (x10069<<(x10070>>(x10071!=x10072)));

    if (t194 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x10085 = 39U;
	static volatile uint64_t x10086 = 0LLU;
	int32_t x10087 = -1;
	int8_t x10088 = -1;
	int32_t t195 = -2138;

    t195 = (x10085<<(x10086>>(x10087!=x10088)));

    if (t195 != 39) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x10097 = 188738LLU;
	uint8_t x10100 = 105U;
	static uint64_t t196 = 19350LLU;

    t196 = (x10097<<(x10098>>(x10099!=x10100)));

    if (t196 != 197906137088LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x10133 = 215430928LL;
	uint8_t x10134 = 38U;
	volatile int16_t x10135 = INT16_MAX;
	uint16_t x10136 = 729U;

    t197 = (x10133<<(x10134>>(x10135!=x10136)));

    if (t197 != 112947850379264LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x10221 = INT16_MAX;
	int64_t x10222 = 20LL;
	static int32_t x10223 = -1;
	uint32_t x10224 = 163U;
	volatile int32_t t198 = 2846;

    t198 = (x10221<<(x10222>>(x10223!=x10224)));

    if (t198 != 33553408) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x10241 = UINT8_MAX;
	static int32_t x10243 = 1;
	uint16_t x10244 = UINT16_MAX;
	volatile int32_t t199 = -849622422;

    t199 = (x10241<<(x10242>>(x10243!=x10244)));

    if (t199 != 261120) { NG(); } else { ; }
	
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


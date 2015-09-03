#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 55312023LLU;
int32_t x106 = INT32_MAX;
static volatile int64_t x118 = INT64_MAX;
int16_t x241 = -1018;
uint8_t x257 = 3U;
static uint16_t x360 = 8U;
int32_t t6 = -745;
int64_t x365 = -1LL;
int64_t t7 = 2307LL;
uint16_t x407 = 0U;
volatile int32_t t8 = 2;
int8_t x444 = 0;
int64_t x522 = 25517LL;
uint16_t x524 = UINT16_MAX;
int16_t x552 = -1;
volatile uint32_t x663 = 0U;
int16_t x664 = INT16_MAX;
static int8_t x716 = INT8_MIN;
uint16_t x742 = UINT16_MAX;
volatile uint32_t t16 = 332862U;
uint8_t x770 = 19U;
int8_t x772 = INT8_MIN;
volatile uint8_t x839 = 4U;
int32_t x840 = INT32_MAX;
uint8_t x1131 = 1U;
int32_t x1201 = INT32_MIN;
uint32_t x1285 = 339U;
uint64_t x1288 = 12124850LLU;
uint8_t x1349 = 22U;
int8_t x1352 = -7;
static volatile uint8_t x1374 = UINT8_MAX;
static uint8_t x1379 = 11U;
int64_t t31 = -472291906462576LL;
uint32_t x1450 = UINT32_MAX;
static int64_t x1560 = -1LL;
volatile int32_t t33 = -17196678;
int16_t x1624 = 5073;
volatile uint16_t x1642 = 117U;
int8_t x1808 = -19;
int64_t x1843 = 1LL;
int64_t x1845 = INT64_MAX;
uint64_t x2002 = UINT64_MAX;
volatile uint8_t x2017 = UINT8_MAX;
uint64_t t44 = UINT64_MAX;
int8_t x2481 = INT8_MAX;
static volatile uint32_t x2640 = UINT32_MAX;
int32_t x2802 = INT32_MAX;
int8_t x2804 = INT8_MIN;
static volatile uint32_t t52 = 689U;
uint64_t x3018 = 216778693LLU;
int8_t x3124 = INT8_MIN;
uint8_t x3211 = 25U;
static int64_t t59 = INT64_MAX;
static int64_t t60 = -110224514730779909LL;
uint8_t x3358 = 0U;
volatile uint32_t x3360 = 6996582U;
int32_t x3430 = INT32_MAX;
uint16_t x3432 = UINT16_MAX;
int8_t x3731 = 2;
int32_t t66 = -41495;
volatile int16_t x3754 = 8;
volatile int32_t t67 = 16;
int16_t x3766 = 11;
uint64_t x3861 = 13541LLU;
volatile int16_t x3862 = 373;
uint64_t t71 = 16279626064598LLU;
volatile uint32_t x3946 = 11U;
int32_t t73 = 243755;
uint32_t x3976 = 7697U;
uint32_t t74 = UINT32_MAX;
volatile int16_t x4048 = INT16_MIN;
volatile int8_t x4108 = INT8_MIN;
int8_t x4114 = 7;
int16_t x4157 = INT16_MIN;
static int16_t x4200 = -1;
uint32_t x4221 = UINT32_MAX;
volatile uint32_t t83 = 10U;
uint64_t x4381 = UINT64_MAX;
uint8_t x4384 = UINT8_MAX;
int32_t x4461 = INT32_MIN;
uint16_t x4463 = 4U;
uint16_t x4464 = 308U;
uint16_t x4488 = 71U;
int8_t x4511 = 2;
int32_t t87 = -9702;
static uint8_t x4691 = 25U;
uint16_t x4712 = UINT16_MAX;
int64_t x4733 = 40281764978LL;
uint64_t x4776 = UINT64_MAX;
int64_t x4790 = 268913996558556622LL;
uint8_t x4791 = 0U;
volatile int64_t t92 = -917204292933LL;
uint16_t x4897 = 9135U;
uint64_t x4898 = 101957LLU;
uint8_t x5083 = 2U;
volatile int16_t x5165 = INT16_MIN;
int16_t x5166 = 15;
volatile int8_t x5167 = 4;
int32_t t96 = 22;
volatile int8_t x5184 = -28;
uint8_t x5219 = 9U;
int16_t x5250 = 401;
uint8_t x5251 = 14U;


void f0(void) {
	uint64_t x1 = 6568255275717496143LLU;
	static int64_t x2 = INT64_MAX;
	volatile int16_t x3 = 7;
	int64_t x4 = INT64_MIN;

	t0 = (x1*((x2>>x3)<=x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x105 = INT32_MIN;
	uint8_t x107 = 15U;
	int16_t x108 = -3;
	int32_t t1 = -815911533;

	t1 = (x105*((x106>>x107)<=x108));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x117 = 2233465829797618LLU;
	static uint16_t x119 = 0U;
	static uint8_t x120 = 3U;
	static uint64_t t2 = 0LLU;

	t2 = (x117*((x118>>x119)<=x120));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x242 = 348LLU;
	static int8_t x243 = 0;
	static int64_t x244 = INT64_MIN;
	int32_t t3 = 19132;

	t3 = (x241*((x242>>x243)<=x244));

	if (t3 != -1018) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x258 = UINT16_MAX;
	uint8_t x259 = 1U;
	int8_t x260 = INT8_MIN;
	int32_t t4 = 12;

	t4 = (x257*((x258>>x259)<=x260));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x349 = -1;
	int8_t x350 = INT8_MAX;
	static uint8_t x351 = 1U;
	uint64_t x352 = UINT64_MAX;
	int32_t t5 = 9;

	t5 = (x349*((x350>>x351)<=x352));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x357 = 9U;
	int32_t x358 = 5;
	int32_t x359 = 1;

	t6 = (x357*((x358>>x359)<=x360));

	if (t6 != 9) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x366 = UINT8_MAX;
	uint32_t x367 = 14U;
	int16_t x368 = INT16_MAX;

	t7 = (x365*((x366>>x367)<=x368));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x405 = 2;
	uint64_t x406 = 1500194LLU;
	uint32_t x408 = UINT32_MAX;

	t8 = (x405*((x406>>x407)<=x408));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x437 = 84629LLU;
	uint64_t x438 = 198429235047349652LLU;
	uint8_t x439 = 2U;
	static int32_t x440 = INT32_MAX;
	volatile uint64_t t9 = 36812622123LLU;

	t9 = (x437*((x438>>x439)<=x440));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x441 = 427601658;
	int16_t x442 = INT16_MAX;
	int8_t x443 = 1;
	volatile int32_t t10 = -646829;

	t10 = (x441*((x442>>x443)<=x444));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x521 = INT32_MAX;
	uint16_t x523 = 10U;
	int32_t t11 = INT32_MAX;

	t11 = (x521*((x522>>x523)<=x524));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x549 = -53062743355787LL;
	int16_t x550 = 1;
	static volatile int64_t x551 = 14LL;
	static volatile int64_t t12 = -47LL;

	t12 = (x549*((x550>>x551)<=x552));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x573 = -1;
	uint32_t x574 = 14U;
	uint16_t x575 = 0U;
	static int16_t x576 = INT16_MIN;
	int32_t t13 = -818435030;

	t13 = (x573*((x574>>x575)<=x576));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x661 = 14352011U;
	static uint32_t x662 = UINT32_MAX;
	uint32_t t14 = 1263748U;

	t14 = (x661*((x662>>x663)<=x664));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x713 = 1335096LLU;
	static uint64_t x714 = UINT64_MAX;
	static uint16_t x715 = 4U;
	uint64_t t15 = 133961193506668LLU;

	t15 = (x713*((x714>>x715)<=x716));

	if (t15 != 1335096LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x741 = UINT32_MAX;
	static uint8_t x743 = 8U;
	volatile uint8_t x744 = 4U;

	t16 = (x741*((x742>>x743)<=x744));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x769 = 7U;
	uint8_t x771 = 12U;
	volatile int32_t t17 = 78822;

	t17 = (x769*((x770>>x771)<=x772));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x793 = 93219U;
	uint32_t x794 = UINT32_MAX;
	static int32_t x795 = 0;
	volatile int8_t x796 = 55;
	volatile uint32_t t18 = 915U;

	t18 = (x793*((x794>>x795)<=x796));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x805 = -1038009140;
	int32_t x806 = INT32_MAX;
	static int8_t x807 = 4;
	static int64_t x808 = INT64_MIN;
	static int32_t t19 = 891072;

	t19 = (x805*((x806>>x807)<=x808));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x809 = 26U;
	uint16_t x810 = 27U;
	static int16_t x811 = 24;
	static volatile int16_t x812 = 53;
	static int32_t t20 = 529500355;

	t20 = (x809*((x810>>x811)<=x812));

	if (t20 != 26) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x837 = INT64_MIN;
	uint16_t x838 = 1830U;
	int64_t t21 = INT64_MIN;

	t21 = (x837*((x838>>x839)<=x840));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x857 = UINT64_MAX;
	uint32_t x858 = UINT32_MAX;
	uint8_t x859 = 6U;
	volatile int8_t x860 = 1;
	volatile uint64_t t22 = 837867443LLU;

	t22 = (x857*((x858>>x859)<=x860));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x957 = INT64_MIN;
	static uint64_t x958 = 45043LLU;
	volatile int8_t x959 = 1;
	volatile int16_t x960 = INT16_MAX;
	int64_t t23 = INT64_MIN;

	t23 = (x957*((x958>>x959)<=x960));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1017 = UINT32_MAX;
	volatile int32_t x1018 = INT32_MAX;
	volatile int64_t x1019 = 6LL;
	static volatile int64_t x1020 = INT64_MIN;
	volatile uint32_t t24 = 19527686U;

	t24 = (x1017*((x1018>>x1019)<=x1020));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1129 = 1U;
	static volatile int32_t x1130 = INT32_MAX;
	uint8_t x1132 = UINT8_MAX;
	volatile uint32_t t25 = 0U;

	t25 = (x1129*((x1130>>x1131)<=x1132));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x1202 = 91U;
	int32_t x1203 = 6;
	uint16_t x1204 = 31259U;
	int32_t t26 = INT32_MIN;

	t26 = (x1201*((x1202>>x1203)<=x1204));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x1277 = -1;
	int32_t x1278 = 11;
	static uint8_t x1279 = 0U;
	static volatile uint32_t x1280 = 8828U;
	int32_t t27 = 40980;

	t27 = (x1277*((x1278>>x1279)<=x1280));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1286 = INT8_MAX;
	int8_t x1287 = 14;
	uint32_t t28 = 2534946U;

	t28 = (x1285*((x1286>>x1287)<=x1288));

	if (t28 != 339U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x1350 = 200U;
	int8_t x1351 = 1;
	int32_t t29 = 189;

	t29 = (x1349*((x1350>>x1351)<=x1352));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1373 = -1;
	uint8_t x1375 = 0U;
	int8_t x1376 = -1;
	volatile int32_t t30 = 3485;

	t30 = (x1373*((x1374>>x1375)<=x1376));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x1377 = -5LL;
	uint64_t x1378 = UINT64_MAX;
	uint16_t x1380 = UINT16_MAX;

	t31 = (x1377*((x1378>>x1379)<=x1380));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1449 = -167502900LL;
	uint16_t x1451 = 1U;
	int64_t x1452 = INT64_MIN;
	volatile int64_t t32 = 60098363277LL;

	t32 = (x1449*((x1450>>x1451)<=x1452));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1557 = UINT16_MAX;
	int16_t x1558 = INT16_MAX;
	volatile uint8_t x1559 = 2U;

	t33 = (x1557*((x1558>>x1559)<=x1560));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x1613 = -85610358151788LL;
	int64_t x1614 = 51968416303LL;
	volatile int8_t x1615 = 8;
	uint8_t x1616 = 0U;
	int64_t t34 = -25070796212LL;

	t34 = (x1613*((x1614>>x1615)<=x1616));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1621 = -61105;
	int32_t x1622 = 56878;
	static uint32_t x1623 = 8U;
	static volatile int32_t t35 = -1555;

	t35 = (x1621*((x1622>>x1623)<=x1624));

	if (t35 != -61105) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1641 = 25U;
	int8_t x1643 = 1;
	uint16_t x1644 = 6U;
	volatile int32_t t36 = -508977188;

	t36 = (x1641*((x1642>>x1643)<=x1644));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x1717 = INT32_MAX;
	volatile int64_t x1718 = 1LL;
	int64_t x1719 = 51LL;
	int16_t x1720 = INT16_MIN;
	volatile int32_t t37 = 212138541;

	t37 = (x1717*((x1718>>x1719)<=x1720));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1805 = UINT8_MAX;
	int8_t x1806 = INT8_MAX;
	uint16_t x1807 = 2U;
	volatile int32_t t38 = 45988027;

	t38 = (x1805*((x1806>>x1807)<=x1808));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1841 = -1;
	static volatile uint64_t x1842 = UINT64_MAX;
	int8_t x1844 = -30;
	static int32_t t39 = -1;

	t39 = (x1841*((x1842>>x1843)<=x1844));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x1846 = 6197U;
	static volatile int8_t x1847 = 5;
	static uint32_t x1848 = 14861191U;
	int64_t t40 = INT64_MAX;

	t40 = (x1845*((x1846>>x1847)<=x1848));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2001 = -1;
	uint8_t x2003 = 6U;
	uint8_t x2004 = UINT8_MAX;
	volatile int32_t t41 = 13;

	t41 = (x2001*((x2002>>x2003)<=x2004));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2018 = UINT32_MAX;
	uint8_t x2019 = 6U;
	int32_t x2020 = INT32_MIN;
	static volatile int32_t t42 = 109583;

	t42 = (x2017*((x2018>>x2019)<=x2020));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x2125 = 1060LLU;
	uint32_t x2126 = 63826U;
	volatile int8_t x2127 = 18;
	int64_t x2128 = INT64_MIN;
	uint64_t t43 = 1LLU;

	t43 = (x2125*((x2126>>x2127)<=x2128));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x2213 = UINT64_MAX;
	int8_t x2214 = INT8_MAX;
	uint8_t x2215 = 7U;
	int16_t x2216 = 362;

	t44 = (x2213*((x2214>>x2215)<=x2216));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2389 = INT8_MIN;
	static int64_t x2390 = 2LL;
	uint32_t x2391 = 43U;
	static uint64_t x2392 = 113777908702LLU;
	volatile int32_t t45 = 69270655;

	t45 = (x2389*((x2390>>x2391)<=x2392));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2433 = INT8_MIN;
	static uint8_t x2434 = UINT8_MAX;
	uint64_t x2435 = 6LLU;
	volatile int64_t x2436 = -1LL;
	int32_t t46 = -3313721;

	t46 = (x2433*((x2434>>x2435)<=x2436));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2482 = 755U;
	uint16_t x2483 = 2U;
	uint16_t x2484 = 7U;
	int32_t t47 = -267;

	t47 = (x2481*((x2482>>x2483)<=x2484));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x2637 = 3429814;
	uint32_t x2638 = UINT32_MAX;
	int16_t x2639 = 0;
	volatile int32_t t48 = 2;

	t48 = (x2637*((x2638>>x2639)<=x2640));

	if (t48 != 3429814) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x2733 = 295;
	uint16_t x2734 = UINT16_MAX;
	int16_t x2735 = 0;
	int32_t x2736 = INT32_MIN;
	static int32_t t49 = 369377;

	t49 = (x2733*((x2734>>x2735)<=x2736));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x2741 = INT32_MIN;
	volatile uint8_t x2742 = 5U;
	static volatile uint32_t x2743 = 17U;
	uint16_t x2744 = UINT16_MAX;
	volatile int32_t t50 = INT32_MIN;

	t50 = (x2741*((x2742>>x2743)<=x2744));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2801 = INT32_MIN;
	uint8_t x2803 = 9U;
	volatile int32_t t51 = 21;

	t51 = (x2801*((x2802>>x2803)<=x2804));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2857 = 83031U;
	int32_t x2858 = 108657;
	int64_t x2859 = 4LL;
	volatile int16_t x2860 = -1;

	t52 = (x2857*((x2858>>x2859)<=x2860));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x2861 = INT8_MAX;
	int32_t x2862 = 15860;
	int32_t x2863 = 13;
	int32_t x2864 = 4245;
	int32_t t53 = -15;

	t53 = (x2861*((x2862>>x2863)<=x2864));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2865 = INT16_MIN;
	int8_t x2866 = INT8_MAX;
	volatile int8_t x2867 = 5;
	uint64_t x2868 = 949203LLU;
	int32_t t54 = -542699004;

	t54 = (x2865*((x2866>>x2867)<=x2868));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x2869 = 24U;
	volatile uint16_t x2870 = 70U;
	int16_t x2871 = 1;
	int32_t x2872 = INT32_MAX;
	volatile uint32_t t55 = 1119047709U;

	t55 = (x2869*((x2870>>x2871)<=x2872));

	if (t55 != 24U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3017 = 1U;
	volatile uint64_t x3019 = 4LLU;
	int32_t x3020 = INT32_MIN;
	uint32_t t56 = 1880734U;

	t56 = (x3017*((x3018>>x3019)<=x3020));

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x3121 = 89696712U;
	int64_t x3122 = INT64_MAX;
	volatile uint16_t x3123 = 13U;
	volatile uint32_t t57 = 408U;

	t57 = (x3121*((x3122>>x3123)<=x3124));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3161 = INT64_MIN;
	uint64_t x3162 = 17248642114313LLU;
	static uint8_t x3163 = 0U;
	static volatile int8_t x3164 = INT8_MIN;
	static volatile int64_t t58 = INT64_MIN;

	t58 = (x3161*((x3162>>x3163)<=x3164));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3209 = INT64_MAX;
	uint32_t x3210 = 98109U;
	int8_t x3212 = INT8_MAX;

	t59 = (x3209*((x3210>>x3211)<=x3212));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x3241 = INT64_MIN;
	volatile int32_t x3242 = INT32_MAX;
	int8_t x3243 = 0;
	int8_t x3244 = INT8_MAX;

	t60 = (x3241*((x3242>>x3243)<=x3244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3301 = 1U;
	uint64_t x3302 = 420957574486583415LLU;
	volatile uint32_t x3303 = 23U;
	static int32_t x3304 = INT32_MIN;
	static volatile int32_t t61 = 23337;

	t61 = (x3301*((x3302>>x3303)<=x3304));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3357 = INT8_MIN;
	static volatile uint16_t x3359 = 2U;
	volatile int32_t t62 = 26634077;

	t62 = (x3357*((x3358>>x3359)<=x3360));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3401 = INT16_MAX;
	uint16_t x3402 = 184U;
	volatile uint16_t x3403 = 1U;
	volatile int64_t x3404 = 231LL;
	static volatile int32_t t63 = -667532979;

	t63 = (x3401*((x3402>>x3403)<=x3404));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3429 = 1U;
	uint8_t x3431 = 1U;
	static int32_t t64 = 0;

	t64 = (x3429*((x3430>>x3431)<=x3432));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x3481 = UINT8_MAX;
	int8_t x3482 = 23;
	int16_t x3483 = 1;
	int16_t x3484 = INT16_MAX;
	int32_t t65 = 1399001;

	t65 = (x3481*((x3482>>x3483)<=x3484));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x3729 = -456934513;
	uint8_t x3730 = 1U;
	int32_t x3732 = INT32_MIN;

	t66 = (x3729*((x3730>>x3731)<=x3732));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3753 = 8;
	uint8_t x3755 = 3U;
	int64_t x3756 = 0LL;

	t67 = (x3753*((x3754>>x3755)<=x3756));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3765 = 17;
	int16_t x3767 = 3;
	int64_t x3768 = INT64_MAX;
	volatile int32_t t68 = 65999;

	t68 = (x3765*((x3766>>x3767)<=x3768));

	if (t68 != 17) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x3821 = -1LL;
	static uint64_t x3822 = UINT64_MAX;
	uint8_t x3823 = 4U;
	int16_t x3824 = 6;
	volatile int64_t t69 = 3LL;

	t69 = (x3821*((x3822>>x3823)<=x3824));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3845 = INT8_MAX;
	static uint32_t x3846 = 231966U;
	int16_t x3847 = 1;
	int32_t x3848 = -35;
	volatile int32_t t70 = -1464;

	t70 = (x3845*((x3846>>x3847)<=x3848));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3863 = 1;
	static uint64_t x3864 = 422357532701530LLU;

	t71 = (x3861*((x3862>>x3863)<=x3864));

	if (t71 != 13541LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x3897 = UINT32_MAX;
	int64_t x3898 = 1LL;
	static int32_t x3899 = 46;
	int8_t x3900 = INT8_MIN;
	volatile uint32_t t72 = 203U;

	t72 = (x3897*((x3898>>x3899)<=x3900));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x3945 = 0U;
	uint8_t x3947 = 13U;
	volatile int8_t x3948 = INT8_MIN;

	t73 = (x3945*((x3946>>x3947)<=x3948));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x3973 = UINT32_MAX;
	static int32_t x3974 = 53;
	static volatile int8_t x3975 = 0;

	t74 = (x3973*((x3974>>x3975)<=x3976));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x3981 = 5;
	static int64_t x3982 = 3576416337640LL;
	int64_t x3983 = 15LL;
	int32_t x3984 = -54;
	int32_t t75 = -116857;

	t75 = (x3981*((x3982>>x3983)<=x3984));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4045 = INT64_MAX;
	uint16_t x4046 = UINT16_MAX;
	static uint16_t x4047 = 26U;
	int64_t t76 = 1277944LL;

	t76 = (x4045*((x4046>>x4047)<=x4048));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4073 = UINT64_MAX;
	uint8_t x4074 = 1U;
	volatile int32_t x4075 = 10;
	static volatile uint64_t x4076 = 5LLU;
	uint64_t t77 = UINT64_MAX;

	t77 = (x4073*((x4074>>x4075)<=x4076));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x4105 = 13838755358563LL;
	static uint64_t x4106 = 20928379160173LLU;
	volatile int16_t x4107 = 1;
	int64_t t78 = 1087959543769LL;

	t78 = (x4105*((x4106>>x4107)<=x4108));

	if (t78 != 13838755358563LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4113 = 73355767LL;
	int16_t x4115 = 0;
	static volatile int64_t x4116 = INT64_MIN;
	volatile int64_t t79 = 764719828613LL;

	t79 = (x4113*((x4114>>x4115)<=x4116));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4158 = 447883838U;
	uint16_t x4159 = 1U;
	int16_t x4160 = INT16_MIN;
	int32_t t80 = -503892;

	t80 = (x4157*((x4158>>x4159)<=x4160));

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x4177 = UINT16_MAX;
	volatile uint64_t x4178 = 5413542276LLU;
	uint8_t x4179 = 14U;
	volatile int64_t x4180 = INT64_MIN;
	static int32_t t81 = 734;

	t81 = (x4177*((x4178>>x4179)<=x4180));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4197 = INT64_MIN;
	static int64_t x4198 = 15692287857633070LL;
	uint16_t x4199 = 3U;
	volatile int64_t t82 = -356807553104043885LL;

	t82 = (x4197*((x4198>>x4199)<=x4200));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x4222 = 1;
	static volatile uint64_t x4223 = 0LLU;
	int8_t x4224 = -1;

	t83 = (x4221*((x4222>>x4223)<=x4224));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x4382 = UINT16_MAX;
	static int32_t x4383 = 0;
	static volatile uint64_t t84 = 3612402805698LLU;

	t84 = (x4381*((x4382>>x4383)<=x4384));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x4462 = 1432LL;
	int32_t t85 = INT32_MIN;

	t85 = (x4461*((x4462>>x4463)<=x4464));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4485 = -25516436801LL;
	static uint64_t x4486 = 3183016LLU;
	volatile int8_t x4487 = 1;
	int64_t t86 = -88961361LL;

	t86 = (x4485*((x4486>>x4487)<=x4488));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x4509 = 72U;
	static uint8_t x4510 = 0U;
	static volatile int16_t x4512 = 1;

	t87 = (x4509*((x4510>>x4511)<=x4512));

	if (t87 != 72) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x4689 = 58U;
	int16_t x4690 = INT16_MAX;
	int32_t x4692 = INT32_MIN;
	volatile int32_t t88 = 33282686;

	t88 = (x4689*((x4690>>x4691)<=x4692));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4709 = INT16_MIN;
	static uint8_t x4710 = UINT8_MAX;
	uint64_t x4711 = 2LLU;
	static int32_t t89 = -259;

	t89 = (x4709*((x4710>>x4711)<=x4712));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4734 = INT32_MAX;
	int32_t x4735 = 1;
	int16_t x4736 = -15990;
	int64_t t90 = 2448103153898284LL;

	t90 = (x4733*((x4734>>x4735)<=x4736));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x4773 = INT32_MIN;
	static uint64_t x4774 = 80674150350843200LLU;
	static uint32_t x4775 = 52U;
	int32_t t91 = INT32_MIN;

	t91 = (x4773*((x4774>>x4775)<=x4776));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x4789 = 2229711LL;
	int16_t x4792 = INT16_MAX;

	t92 = (x4789*((x4790>>x4791)<=x4792));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4899 = 18;
	int32_t x4900 = INT32_MIN;
	volatile int32_t t93 = 26147;

	t93 = (x4897*((x4898>>x4899)<=x4900));

	if (t93 != 9135) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x4933 = -49;
	uint8_t x4934 = 14U;
	uint8_t x4935 = 0U;
	int8_t x4936 = INT8_MIN;
	volatile int32_t t94 = 0;

	t94 = (x4933*((x4934>>x4935)<=x4936));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x5081 = 532U;
	int64_t x5082 = 6349189372897LL;
	int8_t x5084 = -1;
	static volatile int32_t t95 = 905;

	t95 = (x5081*((x5082>>x5083)<=x5084));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x5168 = INT32_MAX;

	t96 = (x5165*((x5166>>x5167)<=x5168));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x5181 = INT64_MIN;
	int8_t x5182 = 2;
	uint64_t x5183 = 0LLU;
	int64_t t97 = 2931407124481LL;

	t97 = (x5181*((x5182>>x5183)<=x5184));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x5217 = 264613LLU;
	int16_t x5218 = INT16_MAX;
	static int64_t x5220 = INT64_MAX;
	uint64_t t98 = 5170216307035LLU;

	t98 = (x5217*((x5218>>x5219)<=x5220));

	if (t98 != 264613LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x5249 = INT16_MAX;
	uint8_t x5252 = 2U;
	volatile int32_t t99 = -332;

	t99 = (x5249*((x5250>>x5251)<=x5252));

	if (t99 != 32767) { NG(); } else { ; }
	
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


    return 0;
}


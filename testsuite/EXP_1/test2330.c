
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

static int8_t x20 = 42;
int64_t x45 = -1LL;
int64_t x77 = -1LL;
static uint64_t t3 = 12581797298578LLU;
uint8_t x169 = UINT8_MAX;
uint8_t x170 = UINT8_MAX;
static int8_t x171 = 24;
volatile uint64_t t6 = 1492451535118LLU;
uint8_t x248 = 12U;
uint64_t t7 = 268510LLU;
int64_t x290 = INT64_MAX;
int8_t x292 = 2;
int64_t t9 = 337642LL;
uint64_t t10 = 239812495398832883LLU;
static volatile uint64_t x384 = 1LLU;
uint64_t t11 = 1716707526LLU;
volatile uint64_t x406 = 23665981LLU;
static int8_t x413 = 6;
static volatile uint64_t t13 = 14890647764LLU;
volatile int32_t x668 = 3;
int64_t x889 = -1LL;
uint32_t t21 = 3334U;
volatile uint32_t x1218 = UINT32_MAX;
uint64_t x1321 = UINT64_MAX;
uint64_t x1397 = UINT64_MAX;
volatile uint32_t x1398 = UINT32_MAX;
volatile uint32_t t28 = 511U;
static int8_t x1610 = 3;
volatile uint8_t x1611 = 15U;
volatile int8_t x1848 = 0;
uint64_t t35 = 48489759249LLU;
volatile uint64_t x2273 = 8837422313LLU;
uint64_t t37 = 149518879LLU;
int8_t x2352 = 0;
static volatile int16_t x2530 = -1;
static volatile uint8_t x2574 = 1U;
int8_t x2639 = 5;
uint64_t x2691 = UINT64_MAX;
static uint32_t x2753 = 2966391U;
uint64_t x2754 = 81458LLU;
static uint64_t x2966 = UINT64_MAX;
uint16_t x2968 = 2U;
uint32_t t53 = 955104716U;
static int32_t x3049 = INT32_MIN;
volatile uint32_t x3050 = 157U;
uint32_t x3217 = 1U;
static int32_t x3219 = -1;
static volatile uint64_t x3262 = 4LLU;
int16_t x3264 = 0;
int32_t x3298 = 0;
static int64_t x3299 = 7537476339LL;
volatile uint8_t x3300 = 1U;
int64_t t58 = -1005041738LL;
uint64_t x3313 = 62224537726LLU;
volatile uint64_t t59 = 2005LLU;
static uint16_t x3453 = 1292U;
uint8_t x3455 = 9U;
volatile int64_t t61 = 1484002887170LL;
int16_t x3477 = -1;
int64_t x3509 = -2LL;
uint8_t x3512 = 4U;
uint32_t x3622 = 27865U;
uint16_t x4018 = 426U;
static volatile int16_t x4074 = -1;
uint64_t x4075 = 0LLU;
static uint64_t t67 = 331LLU;
int8_t x4258 = 0;
static uint16_t x4259 = UINT16_MAX;
int8_t x4264 = 3;
volatile uint64_t t69 = 27507909820876LLU;
volatile uint8_t x4297 = UINT8_MAX;
int16_t x4298 = -1;
static volatile int32_t t71 = -586;
int8_t x4323 = 1;
volatile uint16_t x4337 = 57U;
int32_t x4338 = INT32_MIN;
int32_t x4340 = 1;
volatile int8_t x4384 = 9;
volatile uint32_t x4566 = UINT32_MAX;
int64_t x4661 = INT64_MAX;
int32_t x4664 = 2;
uint32_t x4769 = 621265898U;
uint16_t x4771 = 7U;
int16_t x4786 = 2550;
uint16_t x4862 = 9U;
int8_t x4998 = 2;
volatile int64_t x5003 = INT64_MIN;
static int8_t x5079 = INT8_MAX;
uint8_t x5080 = 6U;
volatile uint64_t t88 = 530LLU;
static uint32_t x5122 = 6U;
static uint16_t x5173 = UINT16_MAX;
int8_t x5176 = 14;
int16_t x5208 = 0;
volatile uint16_t x5249 = UINT16_MAX;
volatile uint32_t x5343 = 0U;
int8_t x5379 = -1;
uint8_t x5380 = 59U;
volatile uint64_t t95 = 53235171845LLU;
static uint64_t x5549 = UINT64_MAX;
static int8_t x5550 = -1;
int32_t x5634 = INT32_MAX;
uint64_t t103 = 40389020188066066LLU;
int32_t x6097 = INT32_MAX;
int8_t x6100 = 0;
int16_t x6123 = -219;
volatile uint32_t t106 = 7693U;
volatile uint64_t t107 = 5139LLU;
int64_t x6203 = 582976511LL;
int16_t x6331 = INT16_MAX;
uint16_t x6332 = 1U;
int32_t x6349 = INT32_MAX;
volatile int64_t t112 = -66921969619553LL;
int8_t x6371 = INT8_MIN;
static uint16_t x6461 = 6U;
static volatile uint8_t x6525 = 39U;
uint16_t x6558 = UINT16_MAX;
volatile int8_t x6664 = 1;
int16_t x6685 = INT16_MIN;
volatile uint32_t x6705 = UINT32_MAX;
uint32_t x6771 = UINT32_MAX;
volatile int64_t x6785 = INT64_MIN;
uint32_t x6796 = 2U;
volatile int32_t x6818 = INT32_MIN;
uint64_t x6829 = 30LLU;
volatile int8_t x6831 = -43;
static uint8_t x6832 = 10U;
static uint64_t x6941 = 212LLU;
uint64_t t130 = 75716603LLU;
int8_t x6973 = INT8_MIN;
static int16_t x7044 = 0;
static uint32_t x7148 = 11U;
uint64_t x7163 = 114LLU;
uint16_t x7218 = 3U;
uint64_t x7219 = 1LLU;
static volatile uint64_t t138 = 36493098549929361LLU;
uint8_t x7318 = 5U;
volatile uint64_t t142 = 48640LLU;
uint32_t x7537 = UINT32_MAX;
uint8_t x7538 = 57U;
int16_t x7539 = -1;
volatile uint32_t t143 = 93U;
volatile int16_t x7605 = INT16_MAX;
int32_t t144 = 45;
static uint8_t x7631 = UINT8_MAX;
int32_t x7774 = -3495323;
int8_t x7776 = 24;
uint8_t x7791 = UINT8_MAX;
volatile uint8_t x7978 = 21U;
uint64_t x7993 = 12544043593127785LLU;
uint32_t x8095 = UINT32_MAX;
volatile uint16_t x8096 = 0U;
int32_t x8129 = INT32_MAX;
static volatile uint64_t t157 = 2047LLU;
int16_t x8235 = -1;
static int64_t x8267 = INT64_MAX;
uint16_t x8373 = 63U;
volatile uint16_t x8376 = 6U;
volatile uint64_t x8401 = 272755684373LLU;
uint32_t x8402 = 8U;
uint64_t x8426 = 7142LLU;
volatile uint64_t x8550 = 3337LLU;
int64_t t167 = -2106LL;
int16_t x8761 = -47;
uint16_t x8763 = UINT16_MAX;
static int64_t x8830 = -136851697996LL;
static int8_t x8994 = -1;
int8_t x9051 = 9;
static volatile int8_t x9052 = 0;
int32_t x9079 = -7;
static int8_t x9089 = -1;
static int32_t t180 = 3;
uint16_t x9166 = 25500U;
static uint64_t x9397 = UINT64_MAX;
int16_t x9535 = INT16_MAX;
volatile uint32_t x9536 = 0U;
static uint64_t x9543 = UINT64_MAX;
int32_t x9557 = -39490252;
uint32_t x9558 = UINT32_MAX;
volatile int32_t x9559 = -1;
volatile uint64_t t195 = 1921782118483468LLU;
int32_t x9966 = 541114;
uint8_t x9968 = 2U;
int64_t t198 = 219LL;
int32_t x9983 = INT32_MAX;


void f0(void) {
    	int8_t x17 = -29;
	static uint64_t x18 = 16920263LLU;
	static int8_t x19 = INT8_MIN;
	static volatile uint64_t t0 = 56107257LLU;

    t0 = (((x17&x18)|x19)<<x20);

    if (t0 != 18446475792872374272LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x46 = INT8_MIN;
	uint64_t x47 = 58109493LLU;
	static volatile uint16_t x48 = 1U;
	volatile uint64_t t1 = 105LLU;

    t1 = (((x45&x46)|x47)<<x48);

    if (t1 != 18446744073709551466LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x78 = UINT16_MAX;
	int16_t x79 = INT16_MAX;
	int8_t x80 = 0;
	static int64_t t2 = -1168708995122LL;

    t2 = (((x77&x78)|x79)<<x80);

    if (t2 != 65535LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x149 = INT8_MAX;
	uint64_t x150 = 42670LLU;
	volatile uint16_t x151 = UINT16_MAX;
	uint16_t x152 = 20U;

    t3 = (((x149&x150)|x151)<<x152);

    if (t3 != 68718428160LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x157 = INT32_MIN;
	static uint32_t x158 = UINT32_MAX;
	int16_t x159 = INT16_MIN;
	int16_t x160 = 0;
	static volatile uint32_t t4 = 1U;

    t4 = (((x157&x158)|x159)<<x160);

    if (t4 != 4294934528U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x172 = 7U;
	int32_t t5 = 199799325;

    t5 = (((x169&x170)|x171)<<x172);

    if (t5 != 32640) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x205 = -1;
	uint64_t x206 = 11831626702837932LLU;
	volatile uint8_t x207 = 10U;
	int8_t x208 = 2;

    t6 = (((x205&x206)|x207)<<x208);

    if (t6 != 47326506811351736LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x245 = INT64_MAX;
	uint8_t x246 = 36U;
	static uint64_t x247 = 3766144122216382LLU;

    t7 = (((x245&x246)|x247)<<x248);

    if (t7 != 15426126324598300672LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x261 = 1U;
	static uint32_t x262 = 1554666110U;
	uint16_t x263 = UINT16_MAX;
	static int8_t x264 = 30;
	volatile uint32_t t8 = 2U;

    t8 = (((x261&x262)|x263)<<x264);

    if (t8 != 3221225472U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x289 = INT8_MAX;
	volatile uint8_t x291 = 1U;

    t9 = (((x289&x290)|x291)<<x292);

    if (t9 != 508LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x349 = INT64_MIN;
	uint64_t x350 = 2401861554LLU;
	int32_t x351 = -54413;
	uint64_t x352 = 7LLU;

    t10 = (((x349&x350)|x351)<<x352);

    if (t10 != 18446744073702586752LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x381 = -6LL;
	uint64_t x382 = UINT64_MAX;
	int8_t x383 = INT8_MAX;

    t11 = (((x381&x382)|x383)<<x384);

    if (t11 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x405 = 31U;
	static int32_t x407 = INT32_MIN;
	int8_t x408 = 1;
	uint64_t t12 = 57LLU;

    t12 = (((x405&x406)|x407)<<x408);

    if (t12 != 18446744069414584378LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x414 = 225854322297LLU;
	int32_t x415 = -876336440;
	uint8_t x416 = 5U;

    t13 = (((x413&x414)|x415)<<x416);

    if (t13 != 18446744045666785536LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint64_t x477 = 176302371857LLU;
	uint16_t x478 = 19673U;
	int32_t x479 = INT32_MIN;
	uint16_t x480 = 1U;
	uint64_t t14 = 187724902162523458LLU;

    t14 = (((x477&x478)|x479)<<x480);

    if (t14 != 18446744069414586402LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x549 = -1;
	uint64_t x550 = UINT64_MAX;
	volatile int32_t x551 = INT32_MAX;
	uint8_t x552 = 2U;
	volatile uint64_t t15 = 319757012LLU;

    t15 = (((x549&x550)|x551)<<x552);

    if (t15 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x665 = 7;
	volatile uint16_t x666 = 10020U;
	uint32_t x667 = 114529U;
	volatile uint32_t t16 = 46U;

    t16 = (((x665&x666)|x667)<<x668);

    if (t16 != 916264U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x701 = INT16_MIN;
	int16_t x702 = INT16_MAX;
	int16_t x703 = 0;
	uint32_t x704 = 29U;
	volatile int32_t t17 = 14379176;

    t17 = (((x701&x702)|x703)<<x704);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x721 = 24418651;
	static uint64_t x722 = 19105308918LLU;
	static int8_t x723 = 53;
	uint8_t x724 = 44U;
	uint64_t t18 = 53907810472396448LLU;

    t18 = (((x721&x722)|x723)<<x724);

    if (t18 != 578554222442708992LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x769 = -1;
	volatile uint64_t x770 = UINT64_MAX;
	int16_t x771 = -65;
	volatile uint8_t x772 = 2U;
	volatile uint64_t t19 = 32750886LLU;

    t19 = (((x769&x770)|x771)<<x772);

    if (t19 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x890 = INT8_MAX;
	uint8_t x891 = UINT8_MAX;
	int16_t x892 = 1;
	volatile int64_t t20 = -7216795061952985LL;

    t20 = (((x889&x890)|x891)<<x892);

    if (t20 != 510LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x969 = 27U;
	static uint16_t x970 = 6019U;
	volatile int32_t x971 = -1;
	int8_t x972 = 26;

    t21 = (((x969&x970)|x971)<<x972);

    if (t21 != 4227858432U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x977 = UINT64_MAX;
	uint16_t x978 = 10899U;
	int32_t x979 = -1;
	uint8_t x980 = 6U;
	uint64_t t22 = 1264LLU;

    t22 = (((x977&x978)|x979)<<x980);

    if (t22 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x1101 = -55;
	volatile int64_t x1102 = INT64_MAX;
	static volatile int8_t x1103 = INT8_MAX;
	volatile int8_t x1104 = 0;
	static volatile int64_t t23 = INT64_MAX;

    t23 = (((x1101&x1102)|x1103)<<x1104);

    if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x1217 = UINT64_MAX;
	static int32_t x1219 = 4792568;
	uint16_t x1220 = 3U;
	volatile uint64_t t24 = 1865445064513550886LLU;

    t24 = (((x1217&x1218)|x1219)<<x1220);

    if (t24 != 34359738360LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x1322 = 0U;
	uint16_t x1323 = UINT16_MAX;
	static int8_t x1324 = 1;
	uint64_t t25 = 18123613LLU;

    t25 = (((x1321&x1322)|x1323)<<x1324);

    if (t25 != 131070LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x1399 = INT32_MIN;
	int8_t x1400 = 31;
	volatile uint64_t t26 = 28LLU;

    t26 = (((x1397&x1398)|x1399)<<x1400);

    if (t26 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x1413 = UINT8_MAX;
	volatile uint32_t x1414 = 2788U;
	uint32_t x1415 = UINT32_MAX;
	volatile uint8_t x1416 = 6U;
	volatile uint32_t t27 = 6176360U;

    t27 = (((x1413&x1414)|x1415)<<x1416);

    if (t27 != 4294967232U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x1445 = 11679351U;
	int16_t x1446 = INT16_MIN;
	uint8_t x1447 = UINT8_MAX;
	uint8_t x1448 = 1U;

    t28 = (((x1445&x1446)|x1447)<<x1448);

    if (t28 != 23331326U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x1457 = 779170631102LLU;
	static int64_t x1458 = 0LL;
	static int16_t x1459 = -1;
	int8_t x1460 = 7;
	static volatile uint64_t t29 = 2LLU;

    t29 = (((x1457&x1458)|x1459)<<x1460);

    if (t29 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x1513 = 772483;
	int32_t x1514 = -1;
	int64_t x1515 = 545LL;
	volatile int8_t x1516 = 1;
	int64_t t30 = -20LL;

    t30 = (((x1513&x1514)|x1515)<<x1516);

    if (t30 != 1546054LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x1569 = UINT64_MAX;
	volatile int32_t x1570 = -1;
	volatile int32_t x1571 = INT32_MIN;
	volatile uint8_t x1572 = 7U;
	uint64_t t31 = 8456749181862255LLU;

    t31 = (((x1569&x1570)|x1571)<<x1572);

    if (t31 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x1609 = 3758U;
	static int8_t x1612 = 7;
	volatile int32_t t32 = -522453259;

    t32 = (((x1609&x1610)|x1611)<<x1612);

    if (t32 != 1920) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x1845 = -35350885;
	int16_t x1846 = INT16_MIN;
	uint64_t x1847 = 47868LLU;
	uint64_t t33 = 2LLU;

    t33 = (((x1845&x1846)|x1847)<<x1848);

    if (t33 != 18446744073674210044LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x1881 = -1;
	int32_t x1882 = 875079;
	int64_t x1883 = INT64_MAX;
	uint16_t x1884 = 0U;
	volatile int64_t t34 = INT64_MAX;

    t34 = (((x1881&x1882)|x1883)<<x1884);

    if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x2133 = INT16_MIN;
	uint16_t x2134 = 89U;
	static uint64_t x2135 = 11003258055LLU;
	int16_t x2136 = 32;

    t35 = (((x2133&x2134)|x2135)<<x2136);

    if (t35 != 10365145348254466048LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x2209 = -7;
	uint16_t x2210 = UINT16_MAX;
	uint8_t x2211 = 14U;
	static uint32_t x2212 = 0U;
	int32_t t36 = 59004;

    t36 = (((x2209&x2210)|x2211)<<x2212);

    if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x2274 = INT64_MIN;
	static int64_t x2275 = -4LL;
	static volatile int8_t x2276 = 0;

    t37 = (((x2273&x2274)|x2275)<<x2276);

    if (t37 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x2325 = 7;
	int64_t x2326 = INT64_MIN;
	int16_t x2327 = 0;
	volatile int32_t x2328 = 1;
	int64_t t38 = 50743LL;

    t38 = (((x2325&x2326)|x2327)<<x2328);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x2349 = INT16_MAX;
	uint32_t x2350 = 11U;
	static int16_t x2351 = -1;
	uint32_t t39 = UINT32_MAX;

    t39 = (((x2349&x2350)|x2351)<<x2352);

    if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x2521 = UINT16_MAX;
	volatile int16_t x2522 = -660;
	static uint64_t x2523 = UINT64_MAX;
	int8_t x2524 = 4;
	volatile uint64_t t40 = 1949156LLU;

    t40 = (((x2521&x2522)|x2523)<<x2524);

    if (t40 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x2525 = -343;
	uint32_t x2526 = 38664899U;
	static int8_t x2527 = -1;
	uint8_t x2528 = 2U;
	volatile uint32_t t41 = 59U;

    t41 = (((x2525&x2526)|x2527)<<x2528);

    if (t41 != 4294967292U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x2529 = 57U;
	uint16_t x2531 = 60U;
	uint8_t x2532 = 7U;
	volatile int32_t t42 = -261786;

    t42 = (((x2529&x2530)|x2531)<<x2532);

    if (t42 != 7808) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x2533 = INT64_MIN;
	uint8_t x2534 = 66U;
	uint8_t x2535 = 0U;
	uint16_t x2536 = 15U;
	volatile int64_t t43 = 53978850LL;

    t43 = (((x2533&x2534)|x2535)<<x2536);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x2573 = -11;
	uint64_t x2575 = 1003102932114385863LLU;
	uint16_t x2576 = 41U;
	volatile uint64_t t44 = 7626798LLU;

    t44 = (((x2573&x2574)|x2575)<<x2576);

    if (t44 != 12202377846034792448LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x2637 = UINT16_MAX;
	int8_t x2638 = INT8_MAX;
	static uint16_t x2640 = 0U;
	static volatile int32_t t45 = -3485913;

    t45 = (((x2637&x2638)|x2639)<<x2640);

    if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x2689 = 3U;
	volatile int32_t x2690 = INT32_MAX;
	uint8_t x2692 = 23U;
	static volatile uint64_t t46 = 128991734429LLU;

    t46 = (((x2689&x2690)|x2691)<<x2692);

    if (t46 != 18446744073701163008LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x2755 = -1;
	volatile int16_t x2756 = 19;
	uint64_t t47 = 4711332559468163200LLU;

    t47 = (((x2753&x2754)|x2755)<<x2756);

    if (t47 != 18446744073709027328LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x2773 = 0LLU;
	static uint32_t x2774 = 1163U;
	int64_t x2775 = -1LL;
	uint16_t x2776 = 7U;
	volatile uint64_t t48 = 47LLU;

    t48 = (((x2773&x2774)|x2775)<<x2776);

    if (t48 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x2789 = 478319LLU;
	uint16_t x2790 = UINT16_MAX;
	uint16_t x2791 = 87U;
	volatile uint16_t x2792 = 0U;
	uint64_t t49 = 62627798269829LLU;

    t49 = (((x2789&x2790)|x2791)<<x2792);

    if (t49 != 19583LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x2937 = -1;
	static int8_t x2938 = 16;
	static int8_t x2939 = 0;
	static uint32_t x2940 = 4U;
	static volatile int32_t t50 = -106848908;

    t50 = (((x2937&x2938)|x2939)<<x2940);

    if (t50 != 256) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x2957 = -20;
	uint8_t x2958 = 73U;
	uint32_t x2959 = 1899197898U;
	int16_t x2960 = 11;
	uint32_t t51 = 3U;

    t51 = (((x2957&x2958)|x2959)<<x2960);

    if (t51 != 2611892224U) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x2965 = INT32_MAX;
	uint32_t x2967 = UINT32_MAX;
	uint64_t t52 = 56LLU;

    t52 = (((x2965&x2966)|x2967)<<x2968);

    if (t52 != 17179869180LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x3017 = 2013337U;
	int32_t x3018 = INT32_MAX;
	int16_t x3019 = -172;
	uint8_t x3020 = 3U;

    t53 = (((x3017&x3018)|x3019)<<x3020);

    if (t53 != 4294967016U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x3051 = 1;
	int64_t x3052 = 1LL;
	static uint32_t t54 = 7502U;

    t54 = (((x3049&x3050)|x3051)<<x3052);

    if (t54 != 2U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x3053 = 3U;
	int64_t x3054 = -1LL;
	static int32_t x3055 = INT32_MAX;
	int32_t x3056 = 11;
	int64_t t55 = 30521LL;

    t55 = (((x3053&x3054)|x3055)<<x3056);

    if (t55 != 4398046509056LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x3218 = INT8_MAX;
	volatile uint8_t x3220 = 1U;
	uint32_t t56 = 25670290U;

    t56 = (((x3217&x3218)|x3219)<<x3220);

    if (t56 != 4294967294U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x3261 = -1;
	static int64_t x3263 = -1717960151297824LL;
	volatile uint64_t t57 = 870LLU;

    t57 = (((x3261&x3262)|x3263)<<x3264);

    if (t57 != 18445026113558253796LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x3297 = 3U;

    t58 = (((x3297&x3298)|x3299)<<x3300);

    if (t58 != 15074952678LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x3314 = -33622120;
	static uint16_t x3315 = UINT16_MAX;
	static uint64_t x3316 = 15LLU;

    t59 = (((x3313&x3314)|x3315)<<x3316);

    if (t59 != 2038973446717440LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x3449 = 230983U;
	int32_t x3450 = INT32_MIN;
	int8_t x3451 = INT8_MIN;
	volatile uint32_t x3452 = 1U;
	static uint32_t t60 = 10349U;

    t60 = (((x3449&x3450)|x3451)<<x3452);

    if (t60 != 4294967040U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x3454 = INT64_MAX;
	int8_t x3456 = 0;

    t61 = (((x3453&x3454)|x3455)<<x3456);

    if (t61 != 1293LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x3478 = -1;
	uint64_t x3479 = UINT64_MAX;
	uint8_t x3480 = 1U;
	volatile uint64_t t62 = 97846040LLU;

    t62 = (((x3477&x3478)|x3479)<<x3480);

    if (t62 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x3510 = 13U;
	uint8_t x3511 = 66U;
	volatile int64_t t63 = -115483148013LL;

    t63 = (((x3509&x3510)|x3511)<<x3512);

    if (t63 != 1248LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x3621 = -1348805656LL;
	uint64_t x3623 = UINT64_MAX;
	int8_t x3624 = 0;
	static volatile uint64_t t64 = UINT64_MAX;

    t64 = (((x3621&x3622)|x3623)<<x3624);

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x3757 = 3478953LL;
	int8_t x3758 = INT8_MIN;
	volatile int16_t x3759 = 626;
	uint16_t x3760 = 5U;
	volatile int64_t t65 = 203672402003127LL;

    t65 = (((x3757&x3758)|x3759)<<x3760);

    if (t65 != 111345216LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x4017 = -3;
	uint64_t x4019 = 10645LLU;
	static uint32_t x4020 = 47U;
	volatile uint64_t t66 = 107727187394407LLU;

    t66 = (((x4017&x4018)|x4019)<<x4020);

    if (t66 != 1503780063076679680LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x4073 = 107U;
	volatile int8_t x4076 = 17;

    t67 = (((x4073&x4074)|x4075)<<x4076);

    if (t67 != 14024704LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x4257 = INT64_MIN;
	int8_t x4260 = 0;
	int64_t t68 = 8859345541926791LL;

    t68 = (((x4257&x4258)|x4259)<<x4260);

    if (t68 != 65535LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x4261 = 26472U;
	uint64_t x4262 = UINT64_MAX;
	int8_t x4263 = INT8_MAX;

    t69 = (((x4261&x4262)|x4263)<<x4264);

    if (t69 != 211960LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x4265 = 1;
	int8_t x4266 = 0;
	uint32_t x4267 = 89U;
	static volatile uint32_t x4268 = 3U;
	uint32_t t70 = 15204900U;

    t70 = (((x4265&x4266)|x4267)<<x4268);

    if (t70 != 712U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x4299 = 8U;
	uint8_t x4300 = 2U;

    t71 = (((x4297&x4298)|x4299)<<x4300);

    if (t71 != 1020) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x4321 = 2570U;
	int64_t x4322 = INT64_MIN;
	static uint32_t x4324 = 11U;
	volatile int64_t t72 = 568044LL;

    t72 = (((x4321&x4322)|x4323)<<x4324);

    if (t72 != 2048LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x4339 = 73U;
	volatile int32_t t73 = 30;

    t73 = (((x4337&x4338)|x4339)<<x4340);

    if (t73 != 146) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x4381 = 8U;
	static volatile int32_t x4382 = INT32_MAX;
	static int32_t x4383 = INT32_MIN;
	volatile uint32_t t74 = 12516868U;

    t74 = (((x4381&x4382)|x4383)<<x4384);

    if (t74 != 4096U) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x4453 = INT8_MIN;
	static volatile uint8_t x4454 = 14U;
	static int64_t x4455 = 23677500288LL;
	uint16_t x4456 = 15U;
	int64_t t75 = 1443945340963380LL;

    t75 = (((x4453&x4454)|x4455)<<x4456);

    if (t75 != 775864329437184LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x4565 = 67U;
	int8_t x4567 = -51;
	static uint16_t x4568 = 3U;
	static uint32_t t76 = 21046U;

    t76 = (((x4565&x4566)|x4567)<<x4568);

    if (t76 != 4294966904U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x4577 = 1670895LLU;
	int32_t x4578 = INT32_MAX;
	static int16_t x4579 = INT16_MIN;
	uint64_t x4580 = 21LLU;
	volatile uint64_t t77 = 16LLU;

    t77 = (((x4577&x4578)|x4579)<<x4580);

    if (t77 != 18446744073137029120LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x4613 = INT16_MIN;
	uint16_t x4614 = UINT16_MAX;
	static int16_t x4615 = 220;
	int16_t x4616 = 3;
	static int32_t t78 = -554;

    t78 = (((x4613&x4614)|x4615)<<x4616);

    if (t78 != 263904) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x4662 = 675683U;
	int32_t x4663 = 502631199;
	int64_t t79 = -4634660365LL;

    t79 = (((x4661&x4662)|x4663)<<x4664);

    if (t79 != 2013216252LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x4770 = INT64_MIN;
	static int16_t x4772 = 0;
	static int64_t t80 = -21082LL;

    t80 = (((x4769&x4770)|x4771)<<x4772);

    if (t80 != 7LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x4785 = 2004721U;
	volatile int32_t x4787 = INT32_MIN;
	int32_t x4788 = 2;
	uint32_t t81 = 1U;

    t81 = (((x4785&x4786)|x4787)<<x4788);

    if (t81 != 960U) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x4837 = INT8_MAX;
	int16_t x4838 = 452;
	uint8_t x4839 = 1U;
	static int8_t x4840 = 23;
	int32_t t82 = -1;

    t82 = (((x4837&x4838)|x4839)<<x4840);

    if (t82 != 578813952) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x4861 = 1U;
	volatile uint64_t x4863 = 389234319LLU;
	uint32_t x4864 = 25U;
	volatile uint64_t t83 = 2911220383012479358LLU;

    t83 = (((x4861&x4862)|x4863)<<x4864);

    if (t83 != 13060536488951808LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x4869 = 18822792LL;
	int16_t x4870 = 14751;
	static volatile int8_t x4871 = INT8_MAX;
	int8_t x4872 = 1;
	volatile int64_t t84 = -257392LL;

    t84 = (((x4869&x4870)|x4871)<<x4872);

    if (t84 != 25086LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x4997 = UINT64_MAX;
	volatile int64_t x4999 = 53058LL;
	uint16_t x5000 = 7U;
	uint64_t t85 = 14508666LLU;

    t85 = (((x4997&x4998)|x4999)<<x5000);

    if (t85 != 6791424LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x5001 = 38521062LL;
	uint64_t x5002 = UINT64_MAX;
	static volatile uint32_t x5004 = 2U;
	uint64_t t86 = 86331LLU;

    t86 = (((x5001&x5002)|x5003)<<x5004);

    if (t86 != 154084248LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x5077 = INT64_MAX;
	uint8_t x5078 = UINT8_MAX;
	volatile int64_t t87 = -200431479848148360LL;

    t87 = (((x5077&x5078)|x5079)<<x5080);

    if (t87 != 16320LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x5105 = 20094LLU;
	static uint32_t x5106 = UINT32_MAX;
	uint32_t x5107 = 116673562U;
	static volatile int16_t x5108 = 1;

    t88 = (((x5105&x5106)|x5107)<<x5108);

    if (t88 != 233348348LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x5121 = INT8_MIN;
	int8_t x5123 = INT8_MIN;
	int32_t x5124 = 2;
	volatile uint32_t t89 = 123148U;

    t89 = (((x5121&x5122)|x5123)<<x5124);

    if (t89 != 4294966784U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x5174 = 2041U;
	static uint16_t x5175 = 21U;
	static uint32_t t90 = 50823U;

    t90 = (((x5173&x5174)|x5175)<<x5176);

    if (t90 != 33505280U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x5205 = -1LL;
	volatile int32_t x5206 = INT32_MAX;
	uint16_t x5207 = 30411U;
	static int64_t t91 = -50562028LL;

    t91 = (((x5205&x5206)|x5207)<<x5208);

    if (t91 != 2147483647LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x5250 = INT16_MIN;
	static int8_t x5251 = 9;
	volatile uint64_t x5252 = 3LLU;
	int32_t t92 = 0;

    t92 = (((x5249&x5250)|x5251)<<x5252);

    if (t92 != 262216) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x5341 = INT16_MIN;
	uint8_t x5342 = 1U;
	static uint32_t x5344 = 10U;
	uint32_t t93 = 3773587U;

    t93 = (((x5341&x5342)|x5343)<<x5344);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x5357 = INT16_MIN;
	static uint32_t x5358 = 232953U;
	int8_t x5359 = INT8_MAX;
	int8_t x5360 = 11;
	volatile uint32_t t94 = 3U;

    t94 = (((x5357&x5358)|x5359)<<x5360);

    if (t94 != 470022144U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x5377 = 21379LLU;
	uint16_t x5378 = 1U;

    t95 = (((x5377&x5378)|x5379)<<x5380);

    if (t95 != 17870283321406128128LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x5417 = INT64_MIN;
	static int8_t x5418 = INT8_MIN;
	volatile uint64_t x5419 = 7465516367919403LLU;
	uint16_t x5420 = 14U;
	uint64_t t96 = 1LLU;

    t96 = (((x5417&x5418)|x5419)<<x5420);

    if (t96 != 11634555729734189056LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x5551 = -1;
	static volatile int8_t x5552 = 29;
	uint64_t t97 = 1009123146968920LLU;

    t97 = (((x5549&x5550)|x5551)<<x5552);

    if (t97 != 18446744073172680704LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x5561 = 1041LLU;
	uint16_t x5562 = 53U;
	int64_t x5563 = INT64_MIN;
	int8_t x5564 = 3;
	volatile uint64_t t98 = 4LLU;

    t98 = (((x5561&x5562)|x5563)<<x5564);

    if (t98 != 136LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x5633 = UINT64_MAX;
	volatile uint32_t x5635 = UINT32_MAX;
	static uint8_t x5636 = 29U;
	static volatile uint64_t t99 = 1241LLU;

    t99 = (((x5633&x5634)|x5635)<<x5636);

    if (t99 != 2305843008676823040LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x5661 = 216;
	int32_t x5662 = INT32_MIN;
	int32_t x5663 = 386722406;
	int8_t x5664 = 0;
	int32_t t100 = -46914;

    t100 = (((x5661&x5662)|x5663)<<x5664);

    if (t100 != 386722406) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x5973 = 0U;
	uint64_t x5974 = 16550LLU;
	static int16_t x5975 = -1;
	int8_t x5976 = 1;
	volatile uint64_t t101 = 403618093LLU;

    t101 = (((x5973&x5974)|x5975)<<x5976);

    if (t101 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x6041 = 62U;
	static uint8_t x6042 = 1U;
	static uint64_t x6043 = UINT64_MAX;
	uint16_t x6044 = 2U;
	volatile uint64_t t102 = 32LLU;

    t102 = (((x6041&x6042)|x6043)<<x6044);

    if (t102 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x6061 = INT64_MIN;
	int32_t x6062 = INT32_MAX;
	uint64_t x6063 = UINT64_MAX;
	volatile uint8_t x6064 = 5U;

    t103 = (((x6061&x6062)|x6063)<<x6064);

    if (t103 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x6065 = -26;
	uint32_t x6066 = 16758U;
	int8_t x6067 = INT8_MIN;
	int16_t x6068 = 1;
	static volatile uint32_t t104 = 1691795U;

    t104 = (((x6065&x6066)|x6067)<<x6068);

    if (t104 != 4294967244U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x6098 = INT16_MAX;
	static uint8_t x6099 = UINT8_MAX;
	int32_t t105 = -1;

    t105 = (((x6097&x6098)|x6099)<<x6100);

    if (t105 != 32767) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x6121 = INT32_MIN;
	uint32_t x6122 = UINT32_MAX;
	int8_t x6124 = 1;

    t106 = (((x6121&x6122)|x6123)<<x6124);

    if (t106 != 4294966858U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x6181 = 1LLU;
	volatile uint32_t x6182 = 408118586U;
	int16_t x6183 = INT16_MAX;
	int16_t x6184 = 1;

    t107 = (((x6181&x6182)|x6183)<<x6184);

    if (t107 != 65534LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x6201 = 0U;
	int64_t x6202 = -1LL;
	uint8_t x6204 = 2U;
	volatile int64_t t108 = -4804507LL;

    t108 = (((x6201&x6202)|x6203)<<x6204);

    if (t108 != 2331906044LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x6245 = -7580;
	static uint32_t x6246 = UINT32_MAX;
	int8_t x6247 = -1;
	volatile uint16_t x6248 = 12U;
	static volatile uint32_t t109 = 4U;

    t109 = (((x6245&x6246)|x6247)<<x6248);

    if (t109 != 4294963200U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x6329 = 0U;
	int64_t x6330 = -14LL;
	volatile int64_t t110 = -7774722LL;

    t110 = (((x6329&x6330)|x6331)<<x6332);

    if (t110 != 65534LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x6337 = -1;
	uint16_t x6338 = 9688U;
	uint8_t x6339 = UINT8_MAX;
	volatile uint8_t x6340 = 3U;
	int32_t t111 = 514;

    t111 = (((x6337&x6338)|x6339)<<x6340);

    if (t111 != 77816) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x6350 = INT64_MIN;
	int16_t x6351 = 6844;
	uint16_t x6352 = 2U;

    t112 = (((x6349&x6350)|x6351)<<x6352);

    if (t112 != 27376LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x6369 = UINT16_MAX;
	static uint64_t x6370 = 15742795LLU;
	int32_t x6372 = 1;
	uint64_t t113 = 2599624208LLU;

    t113 = (((x6369&x6370)|x6371)<<x6372);

    if (t113 != 18446744073709551510LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x6462 = 9U;
	uint64_t x6463 = 480LLU;
	uint8_t x6464 = 1U;
	uint64_t t114 = 3048439007293672339LLU;

    t114 = (((x6461&x6462)|x6463)<<x6464);

    if (t114 != 960LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x6497 = 62U;
	volatile int64_t x6498 = INT64_MIN;
	int64_t x6499 = INT64_MAX;
	uint8_t x6500 = 0U;
	volatile int64_t t115 = INT64_MAX;

    t115 = (((x6497&x6498)|x6499)<<x6500);

    if (t115 != INT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x6526 = 54;
	uint64_t x6527 = UINT64_MAX;
	int16_t x6528 = 52;
	static volatile uint64_t t116 = 80710499LLU;

    t116 = (((x6525&x6526)|x6527)<<x6528);

    if (t116 != 18442240474082181120LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x6557 = INT16_MIN;
	uint32_t x6559 = 109U;
	uint32_t x6560 = 3U;
	static uint32_t t117 = 206691U;

    t117 = (((x6557&x6558)|x6559)<<x6560);

    if (t117 != 263016U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x6597 = INT8_MIN;
	uint64_t x6598 = 20800001133173LLU;
	int64_t x6599 = INT64_MIN;
	uint16_t x6600 = 24U;
	uint64_t t118 = 32351071615452LLU;

    t118 = (((x6597&x6598)|x6599)<<x6600);

    if (t118 != 16924718482753323008LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x6661 = UINT64_MAX;
	uint64_t x6662 = 14560561718LLU;
	static volatile uint8_t x6663 = 33U;
	uint64_t t119 = 6651941239153376LLU;

    t119 = (((x6661&x6662)|x6663)<<x6664);

    if (t119 != 29121123438LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x6681 = UINT32_MAX;
	int8_t x6682 = 0;
	uint64_t x6683 = 111LLU;
	uint32_t x6684 = 0U;
	uint64_t t120 = 1LLU;

    t120 = (((x6681&x6682)|x6683)<<x6684);

    if (t120 != 111LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x6686 = 4108746U;
	uint64_t x6687 = UINT64_MAX;
	int8_t x6688 = 2;
	volatile uint64_t t121 = 31176909110LLU;

    t121 = (((x6685&x6686)|x6687)<<x6688);

    if (t121 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x6693 = 26208161822178LLU;
	static volatile int64_t x6694 = -7534LL;
	int16_t x6695 = INT16_MIN;
	uint8_t x6696 = 20U;
	uint64_t t122 = 5209167171LLU;

    t122 = (((x6693&x6694)|x6695)<<x6696);

    if (t122 != 18446744065255931904LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x6706 = -1;
	uint64_t x6707 = 4171179563LLU;
	int8_t x6708 = 1;
	volatile uint64_t t123 = 50190732LLU;

    t123 = (((x6705&x6706)|x6707)<<x6708);

    if (t123 != 8589934590LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x6769 = INT32_MAX;
	uint16_t x6770 = 14U;
	int8_t x6772 = 7;
	volatile uint32_t t124 = 26513U;

    t124 = (((x6769&x6770)|x6771)<<x6772);

    if (t124 != 4294967168U) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x6786 = INT8_MAX;
	int8_t x6787 = 5;
	volatile int8_t x6788 = 60;
	int64_t t125 = 24LL;

    t125 = (((x6785&x6786)|x6787)<<x6788);

    if (t125 != 5764607523034234880LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x6793 = 2107324199051LL;
	uint64_t x6794 = UINT64_MAX;
	int16_t x6795 = INT16_MIN;
	uint64_t t126 = 0LLU;

    t126 = (((x6793&x6794)|x6795)<<x6796);

    if (t126 != 18446744073709535788LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x6817 = UINT32_MAX;
	int8_t x6819 = INT8_MIN;
	uint8_t x6820 = 0U;
	volatile uint32_t t127 = 27015402U;

    t127 = (((x6817&x6818)|x6819)<<x6820);

    if (t127 != 4294967168U) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x6830 = 31756439051LL;
	volatile uint64_t t128 = 36LLU;

    t128 = (((x6829&x6830)|x6831)<<x6832);

    if (t128 != 18446744073709517824LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x6837 = 6304072501349474LLU;
	int8_t x6838 = -1;
	static uint16_t x6839 = 1U;
	volatile uint8_t x6840 = 1U;
	static volatile uint64_t t129 = 14LLU;

    t129 = (((x6837&x6838)|x6839)<<x6840);

    if (t129 != 12608145002698950LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x6942 = 14892U;
	int64_t x6943 = INT64_MIN;
	volatile uint32_t x6944 = 2U;

    t130 = (((x6941&x6942)|x6943)<<x6944);

    if (t130 != 16LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x6974 = 53975757U;
	int64_t x6975 = INT64_MAX;
	volatile uint64_t x6976 = 0LLU;
	volatile int64_t t131 = INT64_MAX;

    t131 = (((x6973&x6974)|x6975)<<x6976);

    if (t131 != INT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x7001 = 486;
	int32_t x7002 = INT32_MAX;
	int32_t x7003 = 203793993;
	int8_t x7004 = 1;
	int32_t t132 = 1835;

    t132 = (((x7001&x7002)|x7003)<<x7004);

    if (t132 != 407588830) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x7041 = 2U;
	int64_t x7042 = INT64_MIN;
	int8_t x7043 = 1;
	volatile int64_t t133 = 13787736610460LL;

    t133 = (((x7041&x7042)|x7043)<<x7044);

    if (t133 != 1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x7061 = INT32_MIN;
	uint16_t x7062 = 125U;
	uint32_t x7063 = UINT32_MAX;
	uint8_t x7064 = 4U;
	volatile uint32_t t134 = 51303695U;

    t134 = (((x7061&x7062)|x7063)<<x7064);

    if (t134 != 4294967280U) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x7145 = INT64_MIN;
	int16_t x7146 = INT16_MAX;
	int32_t x7147 = 2992867;
	int64_t t135 = -2483707707198620LL;

    t135 = (((x7145&x7146)|x7147)<<x7148);

    if (t135 != 6129391616LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x7161 = 156;
	int16_t x7162 = INT16_MIN;
	uint32_t x7164 = 15U;
	uint64_t t136 = 2590LLU;

    t136 = (((x7161&x7162)|x7163)<<x7164);

    if (t136 != 3735552LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x7217 = UINT16_MAX;
	int32_t x7220 = 1;
	uint64_t t137 = 263195093430830661LLU;

    t137 = (((x7217&x7218)|x7219)<<x7220);

    if (t137 != 6LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x7313 = 7U;
	int8_t x7314 = INT8_MIN;
	volatile uint64_t x7315 = 216957296LLU;
	uint8_t x7316 = 0U;

    t138 = (((x7313&x7314)|x7315)<<x7316);

    if (t138 != 216957296LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x7317 = UINT16_MAX;
	static uint64_t x7319 = 1199009LLU;
	uint64_t x7320 = 4LLU;
	uint64_t t139 = 15055867063682LLU;

    t139 = (((x7317&x7318)|x7319)<<x7320);

    if (t139 != 19184208LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x7401 = 903;
	uint16_t x7402 = 6601U;
	static int16_t x7403 = INT16_MAX;
	volatile uint32_t x7404 = 3U;
	int32_t t140 = 10811;

    t140 = (((x7401&x7402)|x7403)<<x7404);

    if (t140 != 262136) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x7409 = 0;
	static volatile int64_t x7410 = 16LL;
	uint32_t x7411 = 529U;
	int8_t x7412 = 5;
	int64_t t141 = -13LL;

    t141 = (((x7409&x7410)|x7411)<<x7412);

    if (t141 != 16928LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x7485 = 400536834324223629LLU;
	int16_t x7486 = 1;
	int8_t x7487 = INT8_MIN;
	volatile int8_t x7488 = 1;

    t142 = (((x7485&x7486)|x7487)<<x7488);

    if (t142 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x7540 = 1;

    t143 = (((x7537&x7538)|x7539)<<x7540);

    if (t143 != 4294967294U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x7606 = INT32_MIN;
	uint8_t x7607 = UINT8_MAX;
	static uint8_t x7608 = 13U;

    t144 = (((x7605&x7606)|x7607)<<x7608);

    if (t144 != 2088960) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x7629 = 65844667LLU;
	static int32_t x7630 = 12230;
	static uint8_t x7632 = 3U;
	uint64_t t145 = 26970093592LLU;

    t145 = (((x7629&x7630)|x7631)<<x7632);

    if (t145 != 77816LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x7717 = INT8_MIN;
	volatile uint16_t x7718 = 0U;
	uint32_t x7719 = UINT32_MAX;
	uint8_t x7720 = 11U;
	uint32_t t146 = 24863U;

    t146 = (((x7717&x7718)|x7719)<<x7720);

    if (t146 != 4294965248U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x7765 = 2U;
	int16_t x7766 = INT16_MIN;
	static int16_t x7767 = INT16_MIN;
	volatile uint64_t x7768 = 7LLU;
	volatile uint32_t t147 = 10034U;

    t147 = (((x7765&x7766)|x7767)<<x7768);

    if (t147 != 4290772992U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x7773 = 3;
	static uint32_t x7775 = UINT32_MAX;
	uint32_t t148 = 5788484U;

    t148 = (((x7773&x7774)|x7775)<<x7776);

    if (t148 != 4278190080U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x7789 = 4710LLU;
	int64_t x7790 = INT64_MAX;
	int16_t x7792 = 0;
	volatile uint64_t t149 = 108LLU;

    t149 = (((x7789&x7790)|x7791)<<x7792);

    if (t149 != 4863LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x7837 = INT8_MIN;
	uint32_t x7838 = UINT32_MAX;
	static int16_t x7839 = INT16_MAX;
	int32_t x7840 = 5;
	static uint32_t t150 = 1U;

    t150 = (((x7837&x7838)|x7839)<<x7840);

    if (t150 != 4294967264U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x7861 = UINT32_MAX;
	volatile uint64_t x7862 = 92971LLU;
	int16_t x7863 = 977;
	int32_t x7864 = 0;
	uint64_t t151 = 1086LLU;

    t151 = (((x7861&x7862)|x7863)<<x7864);

    if (t151 != 93179LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x7977 = -1;
	uint64_t x7979 = 469469441LLU;
	uint16_t x7980 = 22U;
	volatile uint64_t t152 = 97867297935LLU;

    t152 = (((x7977&x7978)|x7979)<<x7980);

    if (t152 != 1969097638150144LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x7994 = 874;
	volatile uint32_t x7995 = UINT32_MAX;
	volatile uint8_t x7996 = 36U;
	volatile uint64_t t153 = 8LLU;

    t153 = (((x7993&x7994)|x7995)<<x7996);

    if (t153 != 18446744004990074880LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x8041 = INT64_MIN;
	uint16_t x8042 = 49U;
	uint32_t x8043 = 354U;
	static int16_t x8044 = 1;
	int64_t t154 = 235422212934LL;

    t154 = (((x8041&x8042)|x8043)<<x8044);

    if (t154 != 708LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x8093 = INT32_MIN;
	int16_t x8094 = -1;
	volatile uint32_t t155 = UINT32_MAX;

    t155 = (((x8093&x8094)|x8095)<<x8096);

    if (t155 != UINT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x8130 = 6145608314062099201LLU;
	volatile uint16_t x8131 = 503U;
	int8_t x8132 = 0;
	uint64_t t156 = 948986LLU;

    t156 = (((x8129&x8130)|x8131)<<x8132);

    if (t156 != 1750848503LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x8149 = 2U;
	uint32_t x8150 = 29U;
	static uint64_t x8151 = 67657233250634684LLU;
	static volatile uint8_t x8152 = 5U;

    t157 = (((x8149&x8150)|x8151)<<x8152);

    if (t157 != 2165031464020309888LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x8233 = 0U;
	uint32_t x8234 = 10U;
	static uint64_t x8236 = 8LLU;
	volatile uint32_t t158 = 32617760U;

    t158 = (((x8233&x8234)|x8235)<<x8236);

    if (t158 != 4294967040U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x8265 = UINT64_MAX;
	int64_t x8266 = INT64_MAX;
	static int8_t x8268 = 14;
	uint64_t t159 = 4LLU;

    t159 = (((x8265&x8266)|x8267)<<x8268);

    if (t159 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x8317 = 88575251283311319LLU;
	int32_t x8318 = -1;
	static int16_t x8319 = INT16_MIN;
	uint8_t x8320 = 23U;
	volatile uint64_t t160 = 488180LLU;

    t160 = (((x8317&x8318)|x8319)<<x8320);

    if (t160 != 18446744062628200448LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x8374 = -3;
	uint32_t x8375 = UINT32_MAX;
	uint32_t t161 = 26434991U;

    t161 = (((x8373&x8374)|x8375)<<x8376);

    if (t161 != 4294967232U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x8393 = 538LLU;
	int8_t x8394 = INT8_MIN;
	static int8_t x8395 = INT8_MAX;
	uint64_t x8396 = 60LLU;
	uint64_t t162 = 24934302874662464LLU;

    t162 = (((x8393&x8394)|x8395)<<x8396);

    if (t162 != 17293822569102704640LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x8403 = 57464U;
	uint32_t x8404 = 63U;
	volatile uint64_t t163 = 1876282LLU;

    t163 = (((x8401&x8402)|x8403)<<x8404);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x8425 = UINT16_MAX;
	int8_t x8427 = INT8_MIN;
	int8_t x8428 = 0;
	uint64_t t164 = 3402124205385LLU;

    t164 = (((x8425&x8426)|x8427)<<x8428);

    if (t164 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x8489 = 2U;
	uint64_t x8490 = UINT64_MAX;
	int16_t x8491 = 0;
	volatile uint8_t x8492 = 57U;
	static volatile uint64_t t165 = 8247448786489335791LLU;

    t165 = (((x8489&x8490)|x8491)<<x8492);

    if (t165 != 288230376151711744LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x8549 = INT64_MIN;
	static int32_t x8551 = INT32_MIN;
	uint16_t x8552 = 21U;
	volatile uint64_t t166 = 832102LLU;

    t166 = (((x8549&x8550)|x8551)<<x8552);

    if (t166 != 18442240474082181120LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x8577 = 22LL;
	volatile int32_t x8578 = INT32_MIN;
	int64_t x8579 = 14946LL;
	int8_t x8580 = 0;

    t167 = (((x8577&x8578)|x8579)<<x8580);

    if (t167 != 14946LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x8593 = 49931448;
	uint64_t x8594 = 997518520743211LLU;
	uint64_t x8595 = 838977308640734533LLU;
	volatile int64_t x8596 = 0LL;
	uint64_t t168 = 2932876LLU;

    t168 = (((x8593&x8594)|x8595)<<x8596);

    if (t168 != 838977308641848685LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x8677 = INT16_MAX;
	uint32_t x8678 = 45U;
	int8_t x8679 = -1;
	uint8_t x8680 = 0U;
	volatile uint32_t t169 = UINT32_MAX;

    t169 = (((x8677&x8678)|x8679)<<x8680);

    if (t169 != UINT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x8762 = 5849109600LLU;
	int8_t x8764 = 15;
	static uint64_t t170 = 87LLU;

    t170 = (((x8761&x8762)|x8763)<<x8764);

    if (t170 != 191665063034880LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x8829 = 21614476U;
	uint16_t x8831 = 1U;
	uint16_t x8832 = 3U;
	int64_t t171 = 133723296729280907LL;

    t171 = (((x8829&x8830)|x8831)<<x8832);

    if (t171 != 134640680LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x8901 = UINT32_MAX;
	uint8_t x8902 = 56U;
	int32_t x8903 = -2177;
	static uint8_t x8904 = 4U;
	static volatile uint32_t t172 = 6125998U;

    t172 = (((x8901&x8902)|x8903)<<x8904);

    if (t172 != 4294932464U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x8929 = 5U;
	int16_t x8930 = INT16_MIN;
	int16_t x8931 = 3297;
	volatile uint8_t x8932 = 1U;
	static volatile int32_t t173 = 84;

    t173 = (((x8929&x8930)|x8931)<<x8932);

    if (t173 != 6594) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x8933 = INT16_MIN;
	uint8_t x8934 = UINT8_MAX;
	volatile uint8_t x8935 = 6U;
	static uint64_t x8936 = 2LLU;
	static int32_t t174 = 194;

    t174 = (((x8933&x8934)|x8935)<<x8936);

    if (t174 != 24) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x8993 = 110855LLU;
	int64_t x8995 = INT64_MIN;
	int8_t x8996 = 0;
	uint64_t t175 = 45731953LLU;

    t175 = (((x8993&x8994)|x8995)<<x8996);

    if (t175 != 9223372036854886663LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x9049 = INT32_MAX;
	int8_t x9050 = -1;
	int32_t t176 = INT32_MAX;

    t176 = (((x9049&x9050)|x9051)<<x9052);

    if (t176 != INT32_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x9077 = 7950355U;
	int8_t x9078 = -1;
	static uint8_t x9080 = 1U;
	uint32_t t177 = 16085233U;

    t177 = (((x9077&x9078)|x9079)<<x9080);

    if (t177 != 4294967286U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x9090 = INT8_MAX;
	volatile uint64_t x9091 = 1459486282922313LLU;
	static int8_t x9092 = 28;
	static uint64_t t178 = 38LLU;

    t178 = (((x9089&x9090)|x9091)<<x9092);

    if (t178 != 5915244567141023744LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x9125 = -39239LL;
	int64_t x9126 = 29799849562769LL;
	uint64_t x9127 = 367896LLU;
	static int16_t x9128 = 1;
	volatile uint64_t t179 = 39872885LLU;

    t179 = (((x9125&x9126)|x9127)<<x9128);

    if (t179 != 59599699787570LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x9145 = 0;
	uint16_t x9146 = 10340U;
	int16_t x9147 = 29;
	uint8_t x9148 = 2U;

    t180 = (((x9145&x9146)|x9147)<<x9148);

    if (t180 != 116) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x9165 = UINT16_MAX;
	uint8_t x9167 = UINT8_MAX;
	int16_t x9168 = 1;
	static int32_t t181 = 3954;

    t181 = (((x9165&x9166)|x9167)<<x9168);

    if (t181 != 51198) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x9209 = 516228748114LLU;
	int32_t x9210 = 6741;
	int16_t x9211 = INT16_MAX;
	static int8_t x9212 = 0;
	volatile uint64_t t182 = 3215LLU;

    t182 = (((x9209&x9210)|x9211)<<x9212);

    if (t182 != 32767LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x9249 = INT8_MAX;
	static volatile int32_t x9250 = -110310;
	uint8_t x9251 = 3U;
	volatile uint16_t x9252 = 22U;
	int32_t t183 = 66583269;

    t183 = (((x9249&x9250)|x9251)<<x9252);

    if (t183 != 113246208) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x9289 = 59674548721LLU;
	int32_t x9290 = -3;
	uint8_t x9291 = 3U;
	int16_t x9292 = 18;
	static volatile uint64_t t184 = 9190247659LLU;

    t184 = (((x9289&x9290)|x9291)<<x9292);

    if (t184 != 15643324900442112LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x9309 = 3426918719760809039LLU;
	volatile uint64_t x9310 = 2LLU;
	static uint8_t x9311 = 4U;
	int8_t x9312 = 0;
	volatile uint64_t t185 = 510272348428LLU;

    t185 = (((x9309&x9310)|x9311)<<x9312);

    if (t185 != 6LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x9321 = 220673701LLU;
	uint32_t x9322 = 216950009U;
	uint32_t x9323 = 9U;
	volatile uint8_t x9324 = 22U;
	volatile uint64_t t186 = 4283355667LLU;

    t186 = (((x9321&x9322)|x9323)<<x9324);

    if (t186 != 854909654138880LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x9398 = -24;
	volatile int16_t x9399 = -4554;
	volatile uint64_t x9400 = 4LLU;
	static volatile uint64_t t187 = 537093293961LLU;

    t187 = (((x9397&x9398)|x9399)<<x9400);

    if (t187 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x9489 = 3;
	int16_t x9490 = 4855;
	uint64_t x9491 = 252407243593LLU;
	static volatile uint8_t x9492 = 7U;
	static uint64_t t188 = 2597LLU;

    t188 = (((x9489&x9490)|x9491)<<x9492);

    if (t188 != 32308127180160LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x9533 = 1290LLU;
	int8_t x9534 = INT8_MIN;
	volatile uint64_t t189 = 18398408LLU;

    t189 = (((x9533&x9534)|x9535)<<x9536);

    if (t189 != 32767LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x9541 = 10894005269361416LLU;
	int64_t x9542 = 1115630671719458LL;
	volatile uint8_t x9544 = 10U;
	volatile uint64_t t190 = 24351LLU;

    t190 = (((x9541&x9542)|x9543)<<x9544);

    if (t190 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int16_t x9545 = INT16_MIN;
	uint64_t x9546 = 286298952372013973LLU;
	int64_t x9547 = INT64_MIN;
	volatile uint32_t x9548 = 13U;
	volatile uint64_t t191 = 150910351290824LLU;

    t191 = (((x9545&x9546)|x9547)<<x9548);

    if (t191 != 2624520470266904576LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x9560 = 3U;
	volatile uint32_t t192 = 229333U;

    t192 = (((x9557&x9558)|x9559)<<x9560);

    if (t192 != 4294967288U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x9629 = INT8_MIN;
	uint8_t x9630 = UINT8_MAX;
	uint64_t x9631 = UINT64_MAX;
	uint8_t x9632 = 3U;
	uint64_t t193 = 397116LLU;

    t193 = (((x9629&x9630)|x9631)<<x9632);

    if (t193 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x9697 = 87355071U;
	static uint8_t x9698 = 61U;
	int8_t x9699 = INT8_MIN;
	int8_t x9700 = 0;
	volatile uint32_t t194 = 427824U;

    t194 = (((x9697&x9698)|x9699)<<x9700);

    if (t194 != 4294967229U) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x9797 = 18U;
	volatile uint64_t x9798 = 1504604220932964LLU;
	int32_t x9799 = INT32_MAX;
	static uint16_t x9800 = 30U;

    t195 = (((x9797&x9798)|x9799)<<x9800);

    if (t195 != 2305843008139952128LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x9857 = 69467669U;
	int8_t x9858 = INT8_MIN;
	int32_t x9859 = 72743;
	uint8_t x9860 = 0U;
	static uint32_t t196 = 97U;

    t196 = (((x9857&x9858)|x9859)<<x9860);

    if (t196 != 69467687U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x9885 = 0U;
	uint16_t x9886 = UINT16_MAX;
	volatile int8_t x9887 = 45;
	volatile int8_t x9888 = 9;
	static volatile int32_t t197 = -12946;

    t197 = (((x9885&x9886)|x9887)<<x9888);

    if (t197 != 23040) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x9965 = -1;
	static int64_t x9967 = 44251LL;

    t198 = (((x9965&x9966)|x9967)<<x9968);

    if (t198 != 2340844LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x9981 = UINT32_MAX;
	int16_t x9982 = INT16_MAX;
	static int32_t x9984 = 0;
	volatile uint32_t t199 = 123755412U;

    t199 = (((x9981&x9982)|x9983)<<x9984);

    if (t199 != 2147483647U) { NG(); } else { ; }
	
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



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

int64_t x175 = INT64_MIN;
static int32_t x264 = INT32_MAX;
int16_t x421 = 13488;
uint16_t x422 = 17U;
int8_t x424 = INT8_MAX;
uint32_t x929 = 241832U;
static int16_t x930 = 6;
static int32_t x968 = 57832352;
uint8_t x1013 = UINT8_MAX;
int16_t x1015 = INT16_MIN;
uint8_t x1079 = UINT8_MAX;
static uint64_t x1361 = 125144279563158LLU;
int8_t x1363 = INT8_MIN;
int16_t x1364 = -1;
volatile int64_t t12 = 21902907287808808LL;
uint8_t x1702 = 28U;
uint16_t x1704 = UINT16_MAX;
static volatile int8_t x1742 = 1;
static uint8_t x1821 = UINT8_MAX;
uint8_t x1890 = 0U;
volatile uint16_t x2226 = 0U;
uint64_t x2426 = 5LLU;
volatile int32_t t22 = -492319;
uint16_t x2841 = 451U;
static int8_t x2842 = 4;
int32_t t26 = 53239378;
int32_t x3082 = 0;
uint32_t x3120 = 125169240U;
volatile int16_t x3261 = 40;
uint8_t x3521 = 15U;
uint32_t x3524 = UINT32_MAX;
uint32_t x3529 = 875U;
volatile int64_t x3561 = 14840029LL;
volatile int16_t x3826 = 1;
int64_t x4487 = INT64_MIN;
volatile uint32_t t45 = 86U;
int16_t x4939 = 0;
int64_t x5010 = 3LL;
int8_t x5044 = -26;
uint64_t t51 = 33LLU;
volatile int16_t x5293 = 3;
uint64_t x5337 = UINT64_MAX;
uint8_t x5338 = 1U;
int16_t x5440 = 5002;
int16_t x5464 = 66;
volatile int32_t t57 = 62121306;
uint16_t x5532 = UINT16_MAX;
static int32_t x5656 = 1793;
int8_t x5832 = INT8_MAX;
volatile int32_t t61 = 12295;
int16_t x6088 = -1;
uint64_t x6135 = UINT64_MAX;
int16_t x6183 = -5;
int16_t x6184 = INT16_MAX;
uint64_t x6218 = 4LLU;
volatile uint64_t x6253 = 125543LLU;
int32_t x6255 = INT32_MIN;
int8_t x6530 = 1;
static uint32_t t71 = 6118U;
uint8_t x6861 = UINT8_MAX;
uint64_t x6899 = 1LLU;
static int32_t t75 = 93565;
volatile int32_t x7231 = -111349;
int64_t x7297 = INT64_MAX;
volatile uint64_t t78 = 173206830511890LLU;
uint8_t x7436 = 29U;
static int16_t x7513 = INT16_MAX;
int32_t x7563 = INT32_MIN;
uint32_t x7699 = 27U;
volatile int32_t t83 = -64723;
volatile int32_t x7761 = INT32_MAX;
static volatile uint8_t x7762 = 2U;
uint32_t t85 = 1907504U;
volatile int32_t x7860 = -7;
int32_t x8172 = INT32_MIN;
uint32_t t91 = 1U;
uint32_t x8585 = 62296291U;
int64_t x8587 = -15LL;
volatile int32_t x8724 = INT32_MAX;
int32_t t96 = 436639787;
volatile uint16_t x9326 = 0U;


void f0(void) {
    	static int16_t x81 = 15258;
	volatile uint8_t x82 = 2U;
	int32_t x83 = INT32_MIN;
	uint8_t x84 = 0U;
	int32_t t0 = 1;

    t0 = (x81>>(x82/(x83<=x84)));

    if (t0 != 3814) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x173 = UINT64_MAX;
	uint32_t x174 = 1U;
	static volatile uint8_t x176 = UINT8_MAX;
	uint64_t t1 = 15LLU;

    t1 = (x173>>(x174/(x175<=x176)));

    if (t1 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x261 = 151673768609LLU;
	static uint8_t x262 = 2U;
	static int16_t x263 = INT16_MIN;
	volatile uint64_t t2 = 20013396591LLU;

    t2 = (x261>>(x262/(x263<=x264)));

    if (t2 != 37918442152LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x423 = INT8_MAX;
	int32_t t3 = -62920;

    t3 = (x421>>(x422/(x423<=x424)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint64_t x697 = UINT64_MAX;
	uint8_t x698 = 0U;
	static int8_t x699 = INT8_MAX;
	int16_t x700 = 155;
	static volatile uint64_t t4 = UINT64_MAX;

    t4 = (x697>>(x698/(x699<=x700)));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x931 = 431U;
	uint32_t x932 = 1269U;
	uint32_t t5 = 9U;

    t5 = (x929>>(x930/(x931<=x932)));

    if (t5 != 3778U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x965 = 52386151U;
	volatile int32_t x966 = 2;
	static int32_t x967 = INT32_MIN;
	volatile uint32_t t6 = 43455755U;

    t6 = (x965>>(x966/(x967<=x968)));

    if (t6 != 13096537U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x1014 = 8LLU;
	static uint16_t x1016 = 8999U;
	volatile int32_t t7 = 80;

    t7 = (x1013>>(x1014/(x1015<=x1016)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x1077 = UINT16_MAX;
	uint8_t x1078 = 13U;
	volatile uint32_t x1080 = 147001U;
	static int32_t t8 = -253;

    t8 = (x1077>>(x1078/(x1079<=x1080)));

    if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x1321 = 2;
	static uint32_t x1322 = 19U;
	volatile int16_t x1323 = INT16_MIN;
	int16_t x1324 = -8;
	int32_t t9 = -434304352;

    t9 = (x1321>>(x1322/(x1323<=x1324)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x1362 = 0U;
	volatile uint64_t t10 = 724LLU;

    t10 = (x1361>>(x1362/(x1363<=x1364)));

    if (t10 != 125144279563158LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x1497 = 1756953769LL;
	static uint16_t x1498 = 1U;
	int8_t x1499 = INT8_MAX;
	volatile uint64_t x1500 = UINT64_MAX;
	volatile int64_t t11 = 5287LL;

    t11 = (x1497>>(x1498/(x1499<=x1500)));

    if (t11 != 878476884LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x1581 = 25172575919LL;
	static uint8_t x1582 = 7U;
	int64_t x1583 = -1025779LL;
	static int8_t x1584 = INT8_MAX;

    t12 = (x1581>>(x1582/(x1583<=x1584)));

    if (t12 != 196660749LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x1701 = 271U;
	static uint16_t x1703 = 0U;
	static volatile uint32_t t13 = 11170329U;

    t13 = (x1701>>(x1702/(x1703<=x1704)));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x1741 = INT64_MAX;
	static int64_t x1743 = INT64_MIN;
	int8_t x1744 = -1;
	volatile int64_t t14 = -2657293272087946939LL;

    t14 = (x1741>>(x1742/(x1743<=x1744)));

    if (t14 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x1822 = 9U;
	uint32_t x1823 = 3U;
	static int8_t x1824 = INT8_MIN;
	volatile int32_t t15 = -21439970;

    t15 = (x1821>>(x1822/(x1823<=x1824)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x1825 = 12905978055LLU;
	uint16_t x1826 = 1U;
	static int32_t x1827 = -976243950;
	int8_t x1828 = -1;
	uint64_t t16 = 6522758509963485813LLU;

    t16 = (x1825>>(x1826/(x1827<=x1828)));

    if (t16 != 6452989027LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x1849 = UINT32_MAX;
	uint32_t x1850 = 5U;
	static int16_t x1851 = -1;
	int64_t x1852 = INT64_MAX;
	uint32_t t17 = 829849890U;

    t17 = (x1849>>(x1850/(x1851<=x1852)));

    if (t17 != 134217727U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x1889 = 5;
	int32_t x1891 = -57;
	int16_t x1892 = INT16_MAX;
	int32_t t18 = 615;

    t18 = (x1889>>(x1890/(x1891<=x1892)));

    if (t18 != 5) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x2153 = INT64_MAX;
	static uint16_t x2154 = 7U;
	int32_t x2155 = -1653108;
	int8_t x2156 = -1;
	int64_t t19 = -237559LL;

    t19 = (x2153>>(x2154/(x2155<=x2156)));

    if (t19 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x2225 = 10U;
	int64_t x2227 = INT64_MIN;
	int64_t x2228 = INT64_MIN;
	int32_t t20 = -1251263;

    t20 = (x2225>>(x2226/(x2227<=x2228)));

    if (t20 != 10) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x2425 = UINT64_MAX;
	int32_t x2427 = 1690208;
	volatile int64_t x2428 = 9274580LL;
	static volatile uint64_t t21 = 366176930987625LLU;

    t21 = (x2425>>(x2426/(x2427<=x2428)));

    if (t21 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x2453 = 12U;
	volatile int32_t x2454 = 0;
	uint32_t x2455 = 2720U;
	int32_t x2456 = INT32_MIN;

    t22 = (x2453>>(x2454/(x2455<=x2456)));

    if (t22 != 12) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x2613 = 17852177643125LL;
	int8_t x2614 = 1;
	uint8_t x2615 = 1U;
	static uint8_t x2616 = 67U;
	volatile int64_t t23 = 89906LL;

    t23 = (x2613>>(x2614/(x2615<=x2616)));

    if (t23 != 8926088821562LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x2813 = 7U;
	uint8_t x2814 = 1U;
	int8_t x2815 = -1;
	int64_t x2816 = 1LL;
	volatile int32_t t24 = 181229287;

    t24 = (x2813>>(x2814/(x2815<=x2816)));

    if (t24 != 3) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x2821 = 112U;
	int16_t x2822 = 1;
	uint64_t x2823 = 2016153LLU;
	int8_t x2824 = INT8_MIN;
	volatile int32_t t25 = -3430;

    t25 = (x2821>>(x2822/(x2823<=x2824)));

    if (t25 != 56) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint32_t x2843 = 31756385U;
	volatile int8_t x2844 = INT8_MIN;

    t26 = (x2841>>(x2842/(x2843<=x2844)));

    if (t26 != 28) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x3025 = INT64_MAX;
	uint8_t x3026 = 0U;
	uint8_t x3027 = 6U;
	uint16_t x3028 = UINT16_MAX;
	int64_t t27 = INT64_MAX;

    t27 = (x3025>>(x3026/(x3027<=x3028)));

    if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x3081 = 204;
	int8_t x3083 = 0;
	static int16_t x3084 = 3789;
	static volatile int32_t t28 = 1;

    t28 = (x3081>>(x3082/(x3083<=x3084)));

    if (t28 != 204) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x3117 = 3295785814LLU;
	int8_t x3118 = 30;
	volatile int8_t x3119 = INT8_MAX;
	uint64_t t29 = 47989194204LLU;

    t29 = (x3117>>(x3118/(x3119<=x3120)));

    if (t29 != 3LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x3173 = 8432427U;
	static uint16_t x3174 = 5U;
	int8_t x3175 = INT8_MIN;
	volatile int8_t x3176 = -1;
	uint32_t t30 = 51821136U;

    t30 = (x3173>>(x3174/(x3175<=x3176)));

    if (t30 != 263513U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x3193 = 0U;
	int16_t x3194 = 7;
	volatile int32_t x3195 = -1;
	volatile int8_t x3196 = 6;
	static volatile int32_t t31 = 97559256;

    t31 = (x3193>>(x3194/(x3195<=x3196)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x3262 = 7U;
	volatile int16_t x3263 = -6907;
	uint8_t x3264 = UINT8_MAX;
	int32_t t32 = 549;

    t32 = (x3261>>(x3262/(x3263<=x3264)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x3285 = 0U;
	uint16_t x3286 = 0U;
	uint16_t x3287 = 1287U;
	int64_t x3288 = INT64_MAX;
	volatile int32_t t33 = -196573266;

    t33 = (x3285>>(x3286/(x3287<=x3288)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x3522 = 5;
	int32_t x3523 = -236866;
	volatile int32_t t34 = 2;

    t34 = (x3521>>(x3522/(x3523<=x3524)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x3530 = 11;
	uint16_t x3531 = 3U;
	static uint32_t x3532 = 6U;
	volatile uint32_t t35 = 23200848U;

    t35 = (x3529>>(x3530/(x3531<=x3532)));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x3562 = 52U;
	int8_t x3563 = INT8_MAX;
	uint64_t x3564 = 376817LLU;
	volatile int64_t t36 = -39LL;

    t36 = (x3561>>(x3562/(x3563<=x3564)));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x3577 = 105321173655517LL;
	uint8_t x3578 = 1U;
	int32_t x3579 = INT32_MAX;
	uint64_t x3580 = 114812560673353557LLU;
	volatile int64_t t37 = -13132091098003077LL;

    t37 = (x3577>>(x3578/(x3579<=x3580)));

    if (t37 != 52660586827758LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x3721 = 830650U;
	int16_t x3722 = 1;
	uint8_t x3723 = UINT8_MAX;
	uint32_t x3724 = UINT32_MAX;
	static uint32_t t38 = 67642083U;

    t38 = (x3721>>(x3722/(x3723<=x3724)));

    if (t38 != 415325U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x3801 = 3U;
	uint16_t x3802 = 3U;
	int16_t x3803 = 278;
	volatile int16_t x3804 = 15219;
	int32_t t39 = 2415719;

    t39 = (x3801>>(x3802/(x3803<=x3804)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x3825 = 29U;
	int16_t x3827 = INT16_MIN;
	int64_t x3828 = INT64_MAX;
	uint32_t t40 = 1U;

    t40 = (x3825>>(x3826/(x3827<=x3828)));

    if (t40 != 14U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x4049 = 56U;
	int8_t x4050 = 20;
	volatile uint8_t x4051 = 62U;
	volatile int32_t x4052 = 7470786;
	int32_t t41 = 306204503;

    t41 = (x4049>>(x4050/(x4051<=x4052)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x4101 = INT16_MAX;
	int8_t x4102 = 1;
	int32_t x4103 = INT32_MIN;
	int64_t x4104 = INT64_MAX;
	int32_t t42 = -1240;

    t42 = (x4101>>(x4102/(x4103<=x4104)));

    if (t42 != 16383) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x4305 = 4135;
	uint16_t x4306 = 15U;
	uint16_t x4307 = 15563U;
	static int64_t x4308 = 121608LL;
	int32_t t43 = -957666;

    t43 = (x4305>>(x4306/(x4307<=x4308)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x4433 = UINT16_MAX;
	volatile uint8_t x4434 = 1U;
	static uint16_t x4435 = 3297U;
	static int16_t x4436 = INT16_MAX;
	int32_t t44 = 64073;

    t44 = (x4433>>(x4434/(x4435<=x4436)));

    if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x4485 = 1658U;
	uint16_t x4486 = 1U;
	static uint8_t x4488 = 10U;

    t45 = (x4485>>(x4486/(x4487<=x4488)));

    if (t45 != 829U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x4717 = 2U;
	int8_t x4718 = 0;
	volatile int8_t x4719 = -1;
	uint8_t x4720 = 55U;
	volatile uint32_t t46 = 1538U;

    t46 = (x4717>>(x4718/(x4719<=x4720)));

    if (t46 != 2U) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x4937 = 0;
	static uint16_t x4938 = 3U;
	uint64_t x4940 = UINT64_MAX;
	static int32_t t47 = 491767;

    t47 = (x4937>>(x4938/(x4939<=x4940)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x5009 = INT64_MAX;
	uint32_t x5011 = 253739U;
	int8_t x5012 = -53;
	static int64_t t48 = 4043369180706LL;

    t48 = (x5009>>(x5010/(x5011<=x5012)));

    if (t48 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x5013 = 1;
	uint8_t x5014 = 6U;
	uint64_t x5015 = 4858783710392LLU;
	int64_t x5016 = INT64_MIN;
	int32_t t49 = -142368537;

    t49 = (x5013>>(x5014/(x5015<=x5016)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x5041 = 853U;
	int8_t x5042 = 12;
	int16_t x5043 = -223;
	uint32_t t50 = 735109237U;

    t50 = (x5041>>(x5042/(x5043<=x5044)));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x5185 = UINT64_MAX;
	volatile uint8_t x5186 = 31U;
	int16_t x5187 = INT16_MIN;
	static int64_t x5188 = -1LL;

    t51 = (x5185>>(x5186/(x5187<=x5188)));

    if (t51 != 8589934591LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x5201 = 939774988;
	uint8_t x5202 = 1U;
	int16_t x5203 = INT16_MIN;
	volatile int16_t x5204 = -1;
	int32_t t52 = 13;

    t52 = (x5201>>(x5202/(x5203<=x5204)));

    if (t52 != 469887494) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x5294 = 3;
	uint16_t x5295 = 6U;
	uint16_t x5296 = UINT16_MAX;
	int32_t t53 = -17228;

    t53 = (x5293>>(x5294/(x5295<=x5296)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int64_t x5339 = INT64_MIN;
	int16_t x5340 = INT16_MAX;
	volatile uint64_t t54 = 44799182861448LLU;

    t54 = (x5337>>(x5338/(x5339<=x5340)));

    if (t54 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x5417 = INT16_MAX;
	uint32_t x5418 = 0U;
	static int32_t x5419 = INT32_MIN;
	volatile uint16_t x5420 = UINT16_MAX;
	volatile int32_t t55 = -19479;

    t55 = (x5417>>(x5418/(x5419<=x5420)));

    if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x5437 = UINT16_MAX;
	int8_t x5438 = 1;
	int64_t x5439 = -1LL;
	static int32_t t56 = -7953;

    t56 = (x5437>>(x5438/(x5439<=x5440)));

    if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x5461 = INT32_MAX;
	uint16_t x5462 = 5U;
	volatile int64_t x5463 = -1LL;

    t57 = (x5461>>(x5462/(x5463<=x5464)));

    if (t57 != 67108863) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x5529 = 225;
	uint16_t x5530 = 1U;
	int8_t x5531 = -6;
	static int32_t t58 = -100947957;

    t58 = (x5529>>(x5530/(x5531<=x5532)));

    if (t58 != 112) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x5653 = UINT8_MAX;
	uint32_t x5654 = 0U;
	int16_t x5655 = INT16_MIN;
	int32_t t59 = 1;

    t59 = (x5653>>(x5654/(x5655<=x5656)));

    if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x5829 = 677;
	static uint64_t x5830 = 31LLU;
	int32_t x5831 = INT32_MIN;
	volatile int32_t t60 = -228027612;

    t60 = (x5829>>(x5830/(x5831<=x5832)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x6081 = 11;
	uint8_t x6082 = 6U;
	int64_t x6083 = 498996LL;
	volatile uint32_t x6084 = 14360773U;

    t61 = (x6081>>(x6082/(x6083<=x6084)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int8_t x6085 = 1;
	int8_t x6086 = 14;
	uint32_t x6087 = 24767U;
	int32_t t62 = 11316466;

    t62 = (x6085>>(x6086/(x6087<=x6088)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x6133 = INT32_MAX;
	static uint16_t x6134 = 15U;
	static uint64_t x6136 = UINT64_MAX;
	volatile int32_t t63 = -85;

    t63 = (x6133>>(x6134/(x6135<=x6136)));

    if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x6181 = 0;
	volatile uint8_t x6182 = 3U;
	volatile int32_t t64 = 344;

    t64 = (x6181>>(x6182/(x6183<=x6184)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x6217 = 74U;
	int32_t x6219 = INT32_MIN;
	int16_t x6220 = 13249;
	volatile int32_t t65 = 5;

    t65 = (x6217>>(x6218/(x6219<=x6220)));

    if (t65 != 4) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x6254 = 0U;
	int16_t x6256 = INT16_MIN;
	volatile uint64_t t66 = 266790396LLU;

    t66 = (x6253>>(x6254/(x6255<=x6256)));

    if (t66 != 125543LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x6325 = INT64_MAX;
	static volatile uint8_t x6326 = 30U;
	int8_t x6327 = -1;
	uint64_t x6328 = UINT64_MAX;
	static int64_t t67 = 3094LL;

    t67 = (x6325>>(x6326/(x6327<=x6328)));

    if (t67 != 8589934591LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x6529 = 0U;
	uint32_t x6531 = 446549U;
	int8_t x6532 = -1;
	int32_t t68 = 18;

    t68 = (x6529>>(x6530/(x6531<=x6532)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x6617 = 1869U;
	uint8_t x6618 = 3U;
	volatile int8_t x6619 = 1;
	uint64_t x6620 = 358354457197995LLU;
	volatile uint32_t t69 = 3692684U;

    t69 = (x6617>>(x6618/(x6619<=x6620)));

    if (t69 != 233U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x6765 = 886;
	uint16_t x6766 = 3U;
	uint8_t x6767 = 22U;
	int8_t x6768 = INT8_MAX;
	int32_t t70 = 229062;

    t70 = (x6765>>(x6766/(x6767<=x6768)));

    if (t70 != 110) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x6789 = 2405464U;
	int8_t x6790 = 2;
	int32_t x6791 = INT32_MIN;
	int8_t x6792 = INT8_MAX;

    t71 = (x6789>>(x6790/(x6791<=x6792)));

    if (t71 != 601366U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x6862 = 31LLU;
	int64_t x6863 = INT64_MIN;
	int8_t x6864 = INT8_MIN;
	volatile int32_t t72 = -8326260;

    t72 = (x6861>>(x6862/(x6863<=x6864)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x6897 = 261630U;
	int16_t x6898 = 0;
	int64_t x6900 = INT64_MAX;
	uint32_t t73 = 168362319U;

    t73 = (x6897>>(x6898/(x6899<=x6900)));

    if (t73 != 261630U) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x7177 = 56;
	uint8_t x7178 = 3U;
	volatile uint16_t x7179 = 1U;
	volatile int64_t x7180 = INT64_MAX;
	static volatile int32_t t74 = -9;

    t74 = (x7177>>(x7178/(x7179<=x7180)));

    if (t74 != 7) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x7213 = 49683687;
	volatile uint8_t x7214 = 1U;
	int64_t x7215 = -15710LL;
	int8_t x7216 = -1;

    t75 = (x7213>>(x7214/(x7215<=x7216)));

    if (t75 != 24841843) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x7229 = 30201203604050004LL;
	static uint8_t x7230 = 63U;
	volatile int64_t x7232 = 48642606287LL;
	volatile int64_t t76 = -115226117372568971LL;

    t76 = (x7229>>(x7230/(x7231<=x7232)));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint64_t x7298 = 31LLU;
	int16_t x7299 = 0;
	uint32_t x7300 = UINT32_MAX;
	volatile int64_t t77 = -1LL;

    t77 = (x7297>>(x7298/(x7299<=x7300)));

    if (t77 != 4294967295LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x7321 = 5263460425931172LLU;
	volatile uint32_t x7322 = 0U;
	int8_t x7323 = 0;
	int32_t x7324 = 20;

    t78 = (x7321>>(x7322/(x7323<=x7324)));

    if (t78 != 5263460425931172LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x7433 = INT16_MAX;
	volatile uint8_t x7434 = 1U;
	int64_t x7435 = INT64_MIN;
	volatile int32_t t79 = 64404884;

    t79 = (x7433>>(x7434/(x7435<=x7436)));

    if (t79 != 16383) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x7473 = 508362LL;
	uint16_t x7474 = 5U;
	int32_t x7475 = INT32_MIN;
	int16_t x7476 = -44;
	volatile int64_t t80 = -9879106918414LL;

    t80 = (x7473>>(x7474/(x7475<=x7476)));

    if (t80 != 15886LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x7514 = 10U;
	volatile int16_t x7515 = INT16_MIN;
	int32_t x7516 = 266927;
	int32_t t81 = 273392;

    t81 = (x7513>>(x7514/(x7515<=x7516)));

    if (t81 != 31) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x7561 = 650215888610397LLU;
	static int8_t x7562 = 20;
	static int8_t x7564 = INT8_MIN;
	uint64_t t82 = 9LLU;

    t82 = (x7561>>(x7562/(x7563<=x7564)));

    if (t82 != 620094193LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x7697 = INT16_MAX;
	int32_t x7698 = 1;
	volatile int32_t x7700 = INT32_MIN;

    t83 = (x7697>>(x7698/(x7699<=x7700)));

    if (t83 != 16383) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x7763 = 75;
	volatile uint32_t x7764 = UINT32_MAX;
	volatile int32_t t84 = 9;

    t84 = (x7761>>(x7762/(x7763<=x7764)));

    if (t84 != 536870911) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x7813 = 1631474260U;
	int16_t x7814 = 1;
	int16_t x7815 = INT16_MIN;
	int16_t x7816 = INT16_MIN;

    t85 = (x7813>>(x7814/(x7815<=x7816)));

    if (t85 != 815737130U) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x7857 = INT8_MAX;
	int32_t x7858 = 0;
	static uint64_t x7859 = 831729LLU;
	volatile int32_t t86 = -53029931;

    t86 = (x7857>>(x7858/(x7859<=x7860)));

    if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x8161 = 1724U;
	int64_t x8162 = 7LL;
	int64_t x8163 = INT64_MIN;
	int32_t x8164 = -1;
	uint32_t t87 = 11907407U;

    t87 = (x8161>>(x8162/(x8163<=x8164)));

    if (t87 != 13U) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x8169 = 5512;
	uint16_t x8170 = 9U;
	int64_t x8171 = INT64_MIN;
	int32_t t88 = 12703;

    t88 = (x8169>>(x8170/(x8171<=x8172)));

    if (t88 != 10) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint64_t x8321 = 39098LLU;
	int32_t x8322 = 2;
	int16_t x8323 = 3723;
	int64_t x8324 = 204505762292565894LL;
	volatile uint64_t t89 = 500LLU;

    t89 = (x8321>>(x8322/(x8323<=x8324)));

    if (t89 != 9774LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x8405 = 136U;
	uint16_t x8406 = 1U;
	int64_t x8407 = -1LL;
	uint8_t x8408 = UINT8_MAX;
	static int32_t t90 = -5;

    t90 = (x8405>>(x8406/(x8407<=x8408)));

    if (t90 != 68) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x8549 = 14321U;
	int32_t x8550 = 3;
	int32_t x8551 = -709237;
	int8_t x8552 = INT8_MIN;

    t91 = (x8549>>(x8550/(x8551<=x8552)));

    if (t91 != 1790U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x8586 = 0U;
	volatile uint16_t x8588 = UINT16_MAX;
	static uint32_t t92 = 6556U;

    t92 = (x8585>>(x8586/(x8587<=x8588)));

    if (t92 != 62296291U) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x8685 = INT16_MAX;
	volatile uint8_t x8686 = 6U;
	uint8_t x8687 = 2U;
	uint64_t x8688 = UINT64_MAX;
	int32_t t93 = 1;

    t93 = (x8685>>(x8686/(x8687<=x8688)));

    if (t93 != 511) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x8721 = 0U;
	uint64_t x8722 = 31LLU;
	int32_t x8723 = -1;
	static int32_t t94 = 77855;

    t94 = (x8721>>(x8722/(x8723<=x8724)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x8869 = 0U;
	uint8_t x8870 = 6U;
	int16_t x8871 = -1;
	static int64_t x8872 = INT64_MAX;
	volatile int32_t t95 = -2;

    t95 = (x8869>>(x8870/(x8871<=x8872)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x9053 = UINT16_MAX;
	uint32_t x9054 = 27U;
	int16_t x9055 = 7;
	int32_t x9056 = 1557;

    t96 = (x9053>>(x9054/(x9055<=x9056)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x9245 = 30;
	static volatile int8_t x9246 = 0;
	uint32_t x9247 = 493U;
	static volatile uint16_t x9248 = 512U;
	static int32_t t97 = 4623;

    t97 = (x9245>>(x9246/(x9247<=x9248)));

    if (t97 != 30) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x9325 = 1;
	int64_t x9327 = INT64_MIN;
	static int8_t x9328 = -1;
	volatile int32_t t98 = -737400;

    t98 = (x9325>>(x9326/(x9327<=x9328)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x9521 = 34U;
	int16_t x9522 = 0;
	uint64_t x9523 = 7751189940904LLU;
	static int64_t x9524 = INT64_MIN;
	static volatile uint32_t t99 = 113U;

    t99 = (x9521>>(x9522/(x9523<=x9524)));

    if (t99 != 34U) { NG(); } else { ; }
	
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


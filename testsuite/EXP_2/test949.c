
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

int16_t x27 = INT16_MIN;
int32_t t0 = 1696;
uint16_t x38 = 3398U;
uint64_t x81 = UINT64_MAX;
static int64_t x82 = INT64_MIN;
int64_t x98 = INT64_MIN;
static int8_t x100 = 18;
int8_t x149 = -1;
int8_t x151 = INT8_MIN;
uint32_t x203 = 186953342U;
volatile uint8_t x204 = 25U;
volatile uint32_t t5 = 13U;
static volatile int64_t t6 = -1023LL;
uint32_t x249 = 332751225U;
int8_t x252 = 12;
static uint32_t x303 = UINT32_MAX;
int64_t x325 = -121355107535045933LL;
uint8_t x341 = 11U;
uint8_t x489 = UINT8_MAX;
uint16_t x491 = 57U;
volatile int16_t x509 = INT16_MAX;
uint64_t x511 = 778968167LLU;
uint32_t x539 = 2547U;
volatile int32_t t18 = 283;
static uint16_t x602 = UINT16_MAX;
int32_t x637 = INT32_MIN;
static volatile int8_t x639 = -1;
uint8_t x652 = 3U;
uint32_t x744 = 1U;
volatile uint64_t x766 = 26806107527097023LLU;
int32_t x768 = 30;
static int32_t t29 = -274779960;
volatile int16_t x811 = INT16_MIN;
static uint64_t x911 = UINT64_MAX;
volatile uint32_t x912 = 8U;
uint16_t x929 = UINT16_MAX;
int16_t x938 = INT16_MAX;
static uint64_t t33 = 1186LLU;
volatile int32_t x1010 = -983;
uint16_t x1025 = UINT16_MAX;
int16_t x1027 = -2;
static int64_t t36 = -161216440LL;
volatile int16_t x1071 = -1;
uint8_t x1072 = 22U;
static uint8_t x1142 = 1U;
static int16_t x1200 = 0;
volatile int64_t t39 = 420598997LL;
int8_t x1292 = 60;
volatile uint64_t t40 = 93LLU;
uint32_t x1327 = 22601U;
uint8_t x1328 = 3U;
static uint16_t x1349 = 73U;
uint8_t x1441 = UINT8_MAX;
uint8_t x1443 = 46U;
uint32_t x1479 = UINT32_MAX;
uint32_t t45 = 2U;
int32_t x1547 = INT32_MIN;
int16_t x1580 = 7;
uint16_t x1628 = 6U;
int64_t x1662 = -4008586691644394LL;
int8_t x1687 = 1;
uint32_t t52 = 8U;
int32_t x1717 = INT32_MAX;
uint32_t x1742 = 0U;
int16_t x1744 = 1;
uint64_t t54 = 2777863885056LLU;
static uint64_t t55 = 13LLU;
int16_t x1894 = -4066;
int8_t x1896 = 2;
uint16_t x1914 = 3172U;
volatile int16_t x1915 = INT16_MIN;
uint32_t x1962 = UINT32_MAX;
uint16_t x2036 = 4U;
volatile int64_t t60 = -15919766LL;
static volatile int8_t x2129 = -1;
uint16_t x2132 = 3U;
int32_t t65 = 3014884;
uint16_t x2312 = 3U;
static uint32_t x2498 = 41378761U;
uint16_t x2500 = 0U;
uint64_t x2514 = 19773LLU;
int8_t x2572 = 50;
int64_t t71 = -40608LL;
int16_t x2679 = INT16_MAX;
static int64_t t74 = 92907LL;
uint64_t x2699 = 834305832582721248LLU;
uint64_t x2700 = 3LLU;
volatile uint64_t t75 = 435106LLU;
volatile int64_t t77 = -3LL;
volatile uint64_t x2739 = UINT64_MAX;
uint64_t x2822 = 21679460939LLU;
volatile uint16_t x2835 = UINT16_MAX;
int16_t x2836 = 13;
volatile uint64_t t83 = 1050819458148877LLU;
static int64_t t84 = 16LL;
uint8_t x2996 = 12U;
int64_t t87 = -2400546077912331791LL;
volatile uint32_t x3018 = UINT32_MAX;
int16_t x3026 = INT16_MIN;
uint16_t x3027 = 14747U;
uint8_t x3028 = 8U;
uint16_t x3049 = UINT16_MAX;
int64_t x3215 = INT64_MIN;
int32_t t93 = 54;
int16_t x3230 = -1;
static int8_t x3231 = INT8_MIN;
int16_t x3286 = INT16_MAX;
volatile int8_t x3413 = INT8_MAX;
static volatile int64_t t97 = 198745150061648LL;
static int64_t x3550 = INT64_MIN;
volatile uint64_t t99 = 0LLU;
volatile int32_t x3593 = INT32_MAX;
int8_t x3650 = INT8_MIN;
static int16_t x3651 = -8804;
volatile uint32_t x3659 = 15547U;
uint16_t x3660 = 6U;
uint32_t t104 = 345247549U;
static uint64_t x3745 = 25486417887863047LLU;
int16_t x3747 = INT16_MIN;
uint8_t x3757 = 1U;
uint64_t x3758 = 1533393979466025314LLU;
volatile int64_t x3843 = INT64_MIN;
int32_t x3999 = -1;
static uint64_t x4062 = UINT64_MAX;
int8_t x4063 = INT8_MIN;
volatile uint64_t t115 = 362521545707282LLU;
int16_t x4133 = 2833;
uint8_t x4136 = 28U;
uint64_t x4190 = 200932581081193LLU;
int64_t t119 = -3042350917178212LL;
static int64_t x4218 = INT64_MIN;
int32_t t121 = 6;
uint64_t x4243 = 88934LLU;
int64_t t123 = -35927302314295LL;
int32_t x4343 = -1015796750;
uint32_t x4423 = UINT32_MAX;
volatile int64_t x4514 = INT64_MIN;
int8_t x4549 = INT8_MAX;
int16_t x4552 = 1;
volatile int32_t x4594 = -162;
volatile uint8_t x4596 = 12U;
int8_t x4601 = INT8_MAX;
uint8_t x4603 = UINT8_MAX;
static uint64_t x4666 = 1088271LLU;
uint8_t x4668 = 14U;
int8_t x4677 = -34;
volatile int8_t x4742 = INT8_MIN;
uint8_t x4756 = 8U;
int16_t x4769 = INT16_MIN;
volatile uint8_t x4793 = UINT8_MAX;
static volatile int32_t t139 = -6;
uint16_t x4914 = 2U;
static volatile int8_t x4915 = INT8_MIN;
volatile int8_t x4988 = 6;
int64_t x4989 = INT64_MIN;
int64_t x4991 = -1LL;
int64_t t142 = 102848901648LL;
int32_t x5029 = -1;
int8_t x5030 = INT8_MIN;
int8_t x5031 = -1;
int8_t x5032 = 1;
static volatile uint16_t x5132 = 18U;
volatile uint16_t x5136 = 9U;
volatile uint64_t t145 = 58085002909108LLU;
uint16_t x5140 = 57U;
int64_t t146 = 17883002210686291LL;
volatile int16_t x5193 = 71;
int64_t x5295 = INT64_MIN;
volatile int64_t t151 = 4466743441634330406LL;
uint8_t x5324 = 13U;
int64_t x5377 = 467390452356992LL;
int64_t x5378 = -6842393861673LL;
int64_t t153 = 3214172524331517179LL;
volatile uint32_t t155 = 15740083U;
uint8_t x5421 = 2U;
uint64_t x5453 = 213LLU;
uint64_t t157 = 865LLU;
volatile uint64_t x5487 = 63843148051281LLU;
static uint32_t x5488 = 1U;
int8_t x5530 = -1;
int32_t x5690 = INT32_MAX;
volatile int32_t t164 = -65;
static int8_t x5733 = INT8_MIN;
int8_t x5756 = 6;
volatile uint32_t t166 = 36U;
int16_t x5759 = INT16_MIN;
uint64_t x5777 = 609LLU;
volatile uint64_t t171 = 4138530385480677LLU;
uint64_t t172 = 194931835LLU;
int8_t x5913 = INT8_MIN;
static volatile uint8_t x5914 = 0U;
static uint64_t x6134 = 9LLU;
uint64_t t178 = 1864096LLU;
int32_t x6150 = 2182;
int32_t t180 = 1722687;
static volatile uint16_t x6280 = 7U;
int8_t x6302 = INT8_MIN;
volatile uint8_t x6342 = UINT8_MAX;
int64_t t184 = -256749685045711LL;
int64_t x6419 = -1LL;
volatile int16_t x6420 = 15;
uint64_t t186 = 1LLU;
int64_t x6574 = -552701934578645LL;
int64_t x6613 = -51LL;
volatile int8_t x6616 = 2;
static int8_t x6707 = INT8_MIN;
int32_t x6774 = -1;
uint8_t x6831 = 2U;
int32_t t194 = 1;
uint64_t x6865 = 781574LLU;
static uint8_t x6868 = 21U;
uint64_t t197 = 11411LLU;
static uint32_t x6937 = 1566163239U;
int8_t x6940 = 0;
int64_t t199 = 130636639LL;


void f0(void) {
    	int16_t x25 = INT16_MIN;
	int32_t x26 = INT32_MIN;
	int64_t x28 = 14LL;

    t0 = ((x25&(x26%x27))>>x28);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x37 = INT64_MAX;
	volatile uint16_t x39 = 3U;
	volatile int16_t x40 = 35;
	static volatile int64_t t1 = -2647441LL;

    t1 = ((x37&(x38%x39))>>x40);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x83 = UINT64_MAX;
	int8_t x84 = 0;
	uint64_t t2 = 363407197372509150LLU;

    t2 = ((x81&(x82%x83))>>x84);

    if (t2 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x97 = 33U;
	static volatile int32_t x99 = -1;
	volatile int64_t t3 = -765431453LL;

    t3 = ((x97&(x98%x99))>>x100);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x150 = INT32_MIN;
	volatile int64_t x152 = 8LL;
	volatile int32_t t4 = -728770;

    t4 = ((x149&(x150%x151))>>x152);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x201 = INT8_MAX;
	static int32_t x202 = INT32_MAX;

    t5 = ((x201&(x202%x203))>>x204);

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x229 = INT32_MIN;
	int64_t x230 = INT64_MAX;
	volatile uint32_t x231 = UINT32_MAX;
	uint8_t x232 = 1U;

    t6 = ((x229&(x230%x231))>>x232);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x233 = UINT8_MAX;
	uint8_t x234 = 76U;
	uint16_t x235 = 1U;
	uint32_t x236 = 0U;
	int32_t t7 = -895254;

    t7 = ((x233&(x234%x235))>>x236);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x250 = -6;
	volatile uint8_t x251 = 6U;
	volatile uint32_t t8 = 20324U;

    t8 = ((x249&(x250%x251))>>x252);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x293 = INT8_MIN;
	volatile int8_t x294 = -1;
	uint64_t x295 = UINT64_MAX;
	uint16_t x296 = 16U;
	uint64_t t9 = 9041945852002LLU;

    t9 = ((x293&(x294%x295))>>x296);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x301 = -1LL;
	static uint64_t x302 = 102066185451LLU;
	volatile uint16_t x304 = 1U;
	uint64_t t10 = 29333271922LLU;

    t10 = ((x301&(x302%x303))>>x304);

    if (t10 != 1640968833LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x305 = INT64_MAX;
	static uint16_t x306 = UINT16_MAX;
	static int16_t x307 = -1;
	static volatile int8_t x308 = 4;
	int64_t t11 = 15117LL;

    t11 = ((x305&(x306%x307))>>x308);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x326 = 6204U;
	uint16_t x327 = 63U;
	static uint32_t x328 = 7U;
	volatile int64_t t12 = 304104645LL;

    t12 = ((x325&(x326%x327))>>x328);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x342 = INT16_MIN;
	volatile int64_t x343 = -1LL;
	static int32_t x344 = 1;
	static volatile int64_t t13 = -28167320759LL;

    t13 = ((x341&(x342%x343))>>x344);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x389 = -1LL;
	static int32_t x390 = INT32_MIN;
	uint32_t x391 = UINT32_MAX;
	int8_t x392 = 1;
	int64_t t14 = 816718LL;

    t14 = ((x389&(x390%x391))>>x392);

    if (t14 != 1073741824LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x490 = INT16_MAX;
	static int8_t x492 = 1;
	int32_t t15 = -188;

    t15 = ((x489&(x490%x491))>>x492);

    if (t15 != 24) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x510 = INT8_MAX;
	uint8_t x512 = 5U;
	uint64_t t16 = 44LLU;

    t16 = ((x509&(x510%x511))>>x512);

    if (t16 != 3LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x537 = UINT16_MAX;
	static volatile int8_t x538 = INT8_MAX;
	static int8_t x540 = 1;
	volatile uint32_t t17 = 133370U;

    t17 = ((x537&(x538%x539))>>x540);

    if (t17 != 63U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x569 = INT16_MIN;
	int8_t x570 = INT8_MIN;
	int32_t x571 = -1;
	int8_t x572 = 2;

    t18 = ((x569&(x570%x571))>>x572);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x601 = 0U;
	volatile int64_t x603 = INT64_MAX;
	uint8_t x604 = 2U;
	volatile int64_t t19 = 1LL;

    t19 = ((x601&(x602%x603))>>x604);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x621 = 80;
	uint64_t x622 = 17631601771434LLU;
	int32_t x623 = INT32_MIN;
	uint8_t x624 = 1U;
	volatile uint64_t t20 = 244909LLU;

    t20 = ((x621&(x622%x623))>>x624);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x638 = INT16_MAX;
	int32_t x640 = 1;
	volatile int32_t t21 = 100;

    t21 = ((x637&(x638%x639))>>x640);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x641 = -1LL;
	uint16_t x642 = UINT16_MAX;
	int32_t x643 = INT32_MIN;
	static uint32_t x644 = 4U;
	int64_t t22 = 2947490227392LL;

    t22 = ((x641&(x642%x643))>>x644);

    if (t22 != 4095LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int16_t x649 = -1;
	static volatile uint64_t x650 = 97126LLU;
	int16_t x651 = INT16_MIN;
	uint64_t t23 = 57092134914LLU;

    t23 = ((x649&(x650%x651))>>x652);

    if (t23 != 12140LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint32_t x673 = 1898U;
	int32_t x674 = 19676864;
	int32_t x675 = INT32_MIN;
	int16_t x676 = 4;
	static uint32_t t24 = 91430U;

    t24 = ((x673&(x674%x675))>>x676);

    if (t24 != 100U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x709 = 37415589570LL;
	static uint64_t x710 = 3074626LLU;
	volatile uint64_t x711 = 27963069LLU;
	int8_t x712 = 14;
	uint64_t t25 = 55LLU;

    t25 = ((x709&(x710%x711))>>x712);

    if (t25 != 146LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x741 = 4095LL;
	static int8_t x742 = INT8_MIN;
	uint64_t x743 = 2334LLU;
	uint64_t t26 = 21949827183253319LLU;

    t26 = ((x741&(x742%x743))>>x744);

    if (t26 != 604LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x761 = UINT64_MAX;
	int32_t x762 = INT32_MIN;
	uint8_t x763 = UINT8_MAX;
	uint16_t x764 = 0U;
	uint64_t t27 = 26283LLU;

    t27 = ((x761&(x762%x763))>>x764);

    if (t27 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x765 = 1046754U;
	static uint16_t x767 = UINT16_MAX;
	volatile uint64_t t28 = 25859427LLU;

    t28 = ((x765&(x766%x767))>>x768);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x805 = 165U;
	int16_t x806 = INT16_MIN;
	int32_t x807 = INT32_MIN;
	uint8_t x808 = 1U;

    t29 = ((x805&(x806%x807))>>x808);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x809 = 2102;
	int16_t x810 = INT16_MIN;
	uint8_t x812 = 1U;
	volatile int32_t t30 = 1014;

    t30 = ((x809&(x810%x811))>>x812);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x909 = INT64_MIN;
	static int16_t x910 = INT16_MAX;
	uint64_t t31 = 133783763969146LLU;

    t31 = ((x909&(x910%x911))>>x912);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x930 = 6U;
	int64_t x931 = INT64_MAX;
	int16_t x932 = 1;
	volatile int64_t t32 = 1685772763LL;

    t32 = ((x929&(x930%x931))>>x932);

    if (t32 != 3LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x937 = 15690030190222LLU;
	int8_t x939 = -1;
	uint16_t x940 = 12U;

    t33 = ((x937&(x938%x939))>>x940);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x1009 = -90050752;
	uint64_t x1011 = UINT64_MAX;
	volatile uint8_t x1012 = 8U;
	static uint64_t t34 = 4225LLU;

    t34 = ((x1009&(x1010%x1011))>>x1012);

    if (t34 != 72057594037576172LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x1026 = 183534750U;
	uint8_t x1028 = 7U;
	uint32_t t35 = 0U;

    t35 = ((x1025&(x1026%x1027))>>x1028);

    if (t35 != 265U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x1061 = INT64_MIN;
	int8_t x1062 = -1;
	static uint32_t x1063 = 210197U;
	uint8_t x1064 = 2U;

    t36 = ((x1061&(x1062%x1063))>>x1064);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x1069 = 5807;
	int16_t x1070 = INT16_MIN;
	volatile int32_t t37 = 0;

    t37 = ((x1069&(x1070%x1071))>>x1072);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x1141 = 3970U;
	volatile uint16_t x1143 = 4U;
	uint8_t x1144 = 0U;
	static volatile uint32_t t38 = 41779U;

    t38 = ((x1141&(x1142%x1143))>>x1144);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int64_t x1197 = INT64_MAX;
	volatile int8_t x1198 = INT8_MIN;
	volatile int8_t x1199 = -44;

    t39 = ((x1197&(x1198%x1199))>>x1200);

    if (t39 != 9223372036854775768LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x1289 = -1;
	volatile int32_t x1290 = INT32_MIN;
	uint64_t x1291 = 3383732709573365686LLU;

    t40 = ((x1289&(x1290%x1291))>>x1292);

    if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x1325 = UINT64_MAX;
	int32_t x1326 = INT32_MAX;
	static uint64_t t41 = 203636854699942LLU;

    t41 = ((x1325&(x1326%x1327))>>x1328);

    if (t41 != 553LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x1329 = -44810147;
	uint8_t x1330 = 63U;
	uint32_t x1331 = 440U;
	int16_t x1332 = 12;
	uint32_t t42 = 302887U;

    t42 = ((x1329&(x1330%x1331))>>x1332);

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int8_t x1350 = -5;
	volatile int16_t x1351 = INT16_MAX;
	uint16_t x1352 = 1U;
	static int32_t t43 = -1373181;

    t43 = ((x1349&(x1350%x1351))>>x1352);

    if (t43 != 36) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x1442 = -1;
	uint8_t x1444 = 11U;
	static volatile int32_t t44 = 68;

    t44 = ((x1441&(x1442%x1443))>>x1444);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x1477 = -1;
	uint8_t x1478 = 13U;
	int8_t x1480 = 1;

    t45 = ((x1477&(x1478%x1479))>>x1480);

    if (t45 != 6U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x1541 = 424U;
	volatile int64_t x1542 = INT64_MIN;
	int32_t x1543 = -1;
	int16_t x1544 = 7;
	int64_t t46 = 32455921LL;

    t46 = ((x1541&(x1542%x1543))>>x1544);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x1545 = UINT64_MAX;
	int32_t x1546 = INT32_MIN;
	int16_t x1548 = 0;
	volatile uint64_t t47 = 6832510193200638969LLU;

    t47 = ((x1545&(x1546%x1547))>>x1548);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x1577 = UINT16_MAX;
	uint16_t x1578 = 428U;
	int16_t x1579 = INT16_MIN;
	int32_t t48 = 0;

    t48 = ((x1577&(x1578%x1579))>>x1580);

    if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x1625 = -28;
	static int16_t x1626 = 681;
	uint32_t x1627 = UINT32_MAX;
	static volatile uint32_t t49 = 1449863648U;

    t49 = ((x1625&(x1626%x1627))>>x1628);

    if (t49 != 10U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x1653 = 871U;
	static int8_t x1654 = -41;
	int16_t x1655 = INT16_MIN;
	uint16_t x1656 = 0U;
	int32_t t50 = -553436;

    t50 = ((x1653&(x1654%x1655))>>x1656);

    if (t50 != 839) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x1661 = -1;
	int64_t x1663 = -1LL;
	volatile uint16_t x1664 = 18U;
	int64_t t51 = -47LL;

    t51 = ((x1661&(x1662%x1663))>>x1664);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x1685 = UINT32_MAX;
	uint16_t x1686 = 17U;
	int8_t x1688 = 5;

    t52 = ((x1685&(x1686%x1687))>>x1688);

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x1718 = UINT8_MAX;
	uint64_t x1719 = UINT64_MAX;
	int16_t x1720 = 0;
	static volatile uint64_t t53 = 499LLU;

    t53 = ((x1717&(x1718%x1719))>>x1720);

    if (t53 != 255LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x1741 = 2U;
	static volatile uint64_t x1743 = 91442549428LLU;

    t54 = ((x1741&(x1742%x1743))>>x1744);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x1849 = -1;
	static volatile uint64_t x1850 = UINT64_MAX;
	int64_t x1851 = INT64_MIN;
	int16_t x1852 = 4;

    t55 = ((x1849&(x1850%x1851))>>x1852);

    if (t55 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x1873 = -6;
	uint32_t x1874 = 344292787U;
	volatile uint16_t x1875 = UINT16_MAX;
	uint8_t x1876 = 27U;
	static uint32_t t56 = 799538U;

    t56 = ((x1873&(x1874%x1875))>>x1876);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x1893 = -1;
	uint32_t x1895 = 6406453U;
	volatile uint32_t t57 = 67578U;

    t57 = ((x1893&(x1894%x1895))>>x1896);

    if (t57 != 659930U) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x1913 = INT64_MAX;
	int8_t x1916 = 47;
	int64_t t58 = 2035785257283510LL;

    t58 = ((x1913&(x1914%x1915))>>x1916);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x1961 = INT16_MIN;
	volatile int64_t x1963 = -1LL;
	int16_t x1964 = 1;
	volatile int64_t t59 = -47260868546095LL;

    t59 = ((x1961&(x1962%x1963))>>x1964);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x2033 = 88726229U;
	uint16_t x2034 = UINT16_MAX;
	int64_t x2035 = INT64_MIN;

    t60 = ((x2033&(x2034%x2035))>>x2036);

    if (t60 != 3501LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x2101 = 11U;
	int64_t x2102 = INT64_MAX;
	int32_t x2103 = INT32_MIN;
	static int8_t x2104 = 0;
	volatile int64_t t61 = -202LL;

    t61 = ((x2101&(x2102%x2103))>>x2104);

    if (t61 != 11LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x2130 = INT16_MAX;
	uint16_t x2131 = 1U;
	static volatile int32_t t62 = -31849057;

    t62 = ((x2129&(x2130%x2131))>>x2132);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x2193 = -1;
	uint64_t x2194 = 13805LLU;
	int16_t x2195 = 5805;
	uint64_t x2196 = 3LLU;
	uint64_t t63 = 3151028454644036682LLU;

    t63 = ((x2193&(x2194%x2195))>>x2196);

    if (t63 != 274LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x2197 = 331;
	int16_t x2198 = INT16_MIN;
	int32_t x2199 = 757910924;
	static volatile uint8_t x2200 = 23U;
	int32_t t64 = -26;

    t64 = ((x2197&(x2198%x2199))>>x2200);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x2245 = INT16_MIN;
	volatile int32_t x2246 = INT32_MAX;
	volatile int16_t x2247 = INT16_MAX;
	volatile int8_t x2248 = 4;

    t65 = ((x2245&(x2246%x2247))>>x2248);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x2309 = UINT16_MAX;
	volatile int16_t x2310 = INT16_MIN;
	uint32_t x2311 = 23957070U;
	volatile uint32_t t66 = 16194607U;

    t66 = ((x2309&(x2310%x2311))>>x2312);

    if (t66 != 8174U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x2449 = 0;
	int64_t x2450 = INT64_MIN;
	uint32_t x2451 = 10075895U;
	volatile int16_t x2452 = 6;
	int64_t t67 = 2946864548361137271LL;

    t67 = ((x2449&(x2450%x2451))>>x2452);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int32_t x2497 = INT32_MIN;
	uint32_t x2499 = UINT32_MAX;
	uint32_t t68 = 48U;

    t68 = ((x2497&(x2498%x2499))>>x2500);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x2513 = INT32_MIN;
	uint32_t x2515 = 9U;
	volatile uint32_t x2516 = 1U;
	volatile uint64_t t69 = 7623707302185256LLU;

    t69 = ((x2513&(x2514%x2515))>>x2516);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x2553 = 12;
	static int64_t x2554 = INT64_MIN;
	int16_t x2555 = INT16_MIN;
	int8_t x2556 = 3;
	volatile int64_t t70 = 1710LL;

    t70 = ((x2553&(x2554%x2555))>>x2556);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x2569 = INT64_MAX;
	uint32_t x2570 = 166U;
	uint8_t x2571 = UINT8_MAX;

    t71 = ((x2569&(x2570%x2571))>>x2572);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x2581 = UINT16_MAX;
	volatile int8_t x2582 = INT8_MIN;
	volatile int16_t x2583 = -1;
	uint8_t x2584 = 13U;
	int32_t t72 = -1;

    t72 = ((x2581&(x2582%x2583))>>x2584);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x2589 = INT8_MAX;
	static int64_t x2590 = 107660057507LL;
	int64_t x2591 = 42347441893LL;
	volatile int64_t x2592 = 1LL;
	volatile int64_t t73 = 119254791452096LL;

    t73 = ((x2589&(x2590%x2591))>>x2592);

    if (t73 != 44LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x2677 = INT64_MIN;
	uint8_t x2678 = UINT8_MAX;
	uint8_t x2680 = 0U;

    t74 = ((x2677&(x2678%x2679))>>x2680);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x2697 = 40U;
	static int16_t x2698 = -1;

    t75 = ((x2697&(x2698%x2699))>>x2700);

    if (t75 != 5LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x2705 = UINT64_MAX;
	uint32_t x2706 = 1U;
	volatile int64_t x2707 = -1LL;
	uint64_t x2708 = 36LLU;
	uint64_t t76 = 3858LLU;

    t76 = ((x2705&(x2706%x2707))>>x2708);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x2733 = UINT16_MAX;
	uint32_t x2734 = 1137183212U;
	int64_t x2735 = INT64_MAX;
	volatile int8_t x2736 = 13;

    t77 = ((x2733&(x2734%x2735))>>x2736);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x2737 = INT32_MAX;
	uint32_t x2738 = UINT32_MAX;
	static uint16_t x2740 = 14U;
	static uint64_t t78 = 242111370143956LLU;

    t78 = ((x2737&(x2738%x2739))>>x2740);

    if (t78 != 131071LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x2757 = UINT8_MAX;
	int64_t x2758 = -327522949014495525LL;
	uint32_t x2759 = UINT32_MAX;
	uint8_t x2760 = 42U;
	int64_t t79 = -8374625814LL;

    t79 = ((x2757&(x2758%x2759))>>x2760);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x2769 = -1;
	volatile uint8_t x2770 = 1U;
	static uint64_t x2771 = 10497235059369521LLU;
	volatile uint8_t x2772 = 24U;
	volatile uint64_t t80 = 1483460302080LLU;

    t80 = ((x2769&(x2770%x2771))>>x2772);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x2801 = 2743912LLU;
	volatile int8_t x2802 = INT8_MIN;
	int8_t x2803 = INT8_MIN;
	static uint8_t x2804 = 52U;
	uint64_t t81 = 131208152903293158LLU;

    t81 = ((x2801&(x2802%x2803))>>x2804);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x2821 = 10;
	int16_t x2823 = INT16_MAX;
	static int8_t x2824 = 7;
	uint64_t t82 = 17819861LLU;

    t82 = ((x2821&(x2822%x2823))>>x2824);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x2833 = 53;
	static uint64_t x2834 = 17LLU;

    t83 = ((x2833&(x2834%x2835))>>x2836);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x2849 = -1258680;
	uint32_t x2850 = UINT32_MAX;
	int64_t x2851 = INT64_MIN;
	volatile int8_t x2852 = 31;

    t84 = ((x2849&(x2850%x2851))>>x2852);

    if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x2969 = 1024LLU;
	volatile int16_t x2970 = 1039;
	int16_t x2971 = INT16_MIN;
	uint8_t x2972 = 51U;
	uint64_t t85 = 536575732612LLU;

    t85 = ((x2969&(x2970%x2971))>>x2972);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x2973 = 2;
	int8_t x2974 = -1;
	volatile int8_t x2975 = INT8_MAX;
	volatile uint8_t x2976 = 11U;
	int32_t t86 = 15563;

    t86 = ((x2973&(x2974%x2975))>>x2976);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x2993 = 0U;
	volatile uint8_t x2994 = 34U;
	static volatile int64_t x2995 = INT64_MIN;

    t87 = ((x2993&(x2994%x2995))>>x2996);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x3017 = 2U;
	volatile uint64_t x3019 = UINT64_MAX;
	uint8_t x3020 = 30U;
	uint64_t t88 = 4459000312900993LLU;

    t88 = ((x3017&(x3018%x3019))>>x3020);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x3025 = 321U;
	volatile uint32_t t89 = 1U;

    t89 = ((x3025&(x3026%x3027))>>x3028);

    if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x3050 = 5317115621664166639LLU;
	uint8_t x3051 = UINT8_MAX;
	int64_t x3052 = 59LL;
	uint64_t t90 = 9761102LLU;

    t90 = ((x3049&(x3050%x3051))>>x3052);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x3181 = INT8_MAX;
	int16_t x3182 = -1;
	static int16_t x3183 = INT16_MAX;
	static volatile uint16_t x3184 = 14U;
	int32_t t91 = 1404448;

    t91 = ((x3181&(x3182%x3183))>>x3184);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x3213 = 49;
	int32_t x3214 = -180324137;
	volatile int8_t x3216 = 1;
	static int64_t t92 = 71597555713790782LL;

    t92 = ((x3213&(x3214%x3215))>>x3216);

    if (t92 != 8LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x3221 = 890U;
	volatile int32_t x3222 = -5670;
	int8_t x3223 = -4;
	uint64_t x3224 = 16LLU;

    t93 = ((x3221&(x3222%x3223))>>x3224);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x3229 = INT8_MAX;
	uint16_t x3232 = 3U;
	volatile int32_t t94 = 0;

    t94 = ((x3229&(x3230%x3231))>>x3232);

    if (t94 != 15) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x3285 = INT64_MIN;
	static volatile int16_t x3287 = 3317;
	uint32_t x3288 = 24U;
	static int64_t t95 = 90043LL;

    t95 = ((x3285&(x3286%x3287))>>x3288);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x3341 = 2U;
	int64_t x3342 = 58381LL;
	int32_t x3343 = 1;
	volatile int8_t x3344 = 0;
	volatile int64_t t96 = 279918532732952LL;

    t96 = ((x3341&(x3342%x3343))>>x3344);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x3414 = INT64_MIN;
	int8_t x3415 = INT8_MIN;
	uint8_t x3416 = 1U;

    t97 = ((x3413&(x3414%x3415))>>x3416);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x3489 = 3979U;
	int8_t x3490 = INT8_MIN;
	int16_t x3491 = INT16_MIN;
	int8_t x3492 = 15;
	volatile uint32_t t98 = 56351U;

    t98 = ((x3489&(x3490%x3491))>>x3492);

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x3549 = UINT64_MAX;
	static int16_t x3551 = INT16_MIN;
	volatile uint32_t x3552 = 18U;

    t99 = ((x3549&(x3550%x3551))>>x3552);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x3594 = 2028571074353LL;
	uint16_t x3595 = UINT16_MAX;
	static uint16_t x3596 = 22U;
	int64_t t100 = -1877263670931LL;

    t100 = ((x3593&(x3594%x3595))>>x3596);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x3597 = INT64_MIN;
	int16_t x3598 = -1;
	int8_t x3599 = -1;
	uint32_t x3600 = 43U;
	int64_t t101 = -28955004179341442LL;

    t101 = ((x3597&(x3598%x3599))>>x3600);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x3649 = 1067477898U;
	volatile int16_t x3652 = 0;
	static uint32_t t102 = 107U;

    t102 = ((x3649&(x3650%x3651))>>x3652);

    if (t102 != 1067477888U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x3657 = 506;
	static int64_t x3658 = INT64_MIN;
	static volatile int64_t t103 = -219LL;

    t103 = ((x3657&(x3658%x3659))>>x3660);

    if (t103 != 5LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x3661 = 7728545;
	static uint8_t x3662 = UINT8_MAX;
	static uint32_t x3663 = UINT32_MAX;
	int32_t x3664 = 1;

    t104 = ((x3661&(x3662%x3663))>>x3664);

    if (t104 != 80U) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x3689 = 4;
	static int32_t x3690 = INT32_MIN;
	volatile uint8_t x3691 = UINT8_MAX;
	uint8_t x3692 = 11U;
	volatile int32_t t105 = 23109;

    t105 = ((x3689&(x3690%x3691))>>x3692);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x3697 = 3U;
	int32_t x3698 = -644;
	uint16_t x3699 = 1U;
	volatile int8_t x3700 = 0;
	int32_t t106 = -460;

    t106 = ((x3697&(x3698%x3699))>>x3700);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x3733 = 2525310883LLU;
	volatile uint8_t x3734 = 96U;
	static int64_t x3735 = 16532751758LL;
	int32_t x3736 = 15;
	volatile uint64_t t107 = 507842LLU;

    t107 = ((x3733&(x3734%x3735))>>x3736);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x3746 = UINT32_MAX;
	uint16_t x3748 = 1U;
	volatile uint64_t t108 = 6139651LLU;

    t108 = ((x3745&(x3746%x3747))>>x3748);

    if (t108 != 4227LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x3759 = UINT64_MAX;
	uint8_t x3760 = 4U;
	uint64_t t109 = 3LLU;

    t109 = ((x3757&(x3758%x3759))>>x3760);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x3793 = UINT8_MAX;
	static int16_t x3794 = -1;
	volatile uint8_t x3795 = 12U;
	uint8_t x3796 = 3U;
	volatile int32_t t110 = 1994;

    t110 = ((x3793&(x3794%x3795))>>x3796);

    if (t110 != 31) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x3841 = INT16_MAX;
	int8_t x3842 = INT8_MIN;
	static int8_t x3844 = 22;
	static int64_t t111 = -22LL;

    t111 = ((x3841&(x3842%x3843))>>x3844);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x3865 = 3U;
	static volatile int8_t x3866 = 0;
	static int16_t x3867 = INT16_MIN;
	uint64_t x3868 = 3LLU;
	int32_t t112 = 62570;

    t112 = ((x3865&(x3866%x3867))>>x3868);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x3997 = 1514080;
	volatile int16_t x3998 = INT16_MIN;
	uint16_t x4000 = 0U;
	int32_t t113 = 1;

    t113 = ((x3997&(x3998%x3999))>>x4000);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x4061 = 1971U;
	int8_t x4064 = 1;
	uint64_t t114 = 207409663349LLU;

    t114 = ((x4061&(x4062%x4063))>>x4064);

    if (t114 != 25LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x4089 = UINT64_MAX;
	uint8_t x4090 = 1U;
	int32_t x4091 = INT32_MAX;
	volatile uint32_t x4092 = 57U;

    t115 = ((x4089&(x4090%x4091))>>x4092);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x4134 = 99U;
	uint64_t x4135 = 814319801814264LLU;
	uint64_t t116 = 18LLU;

    t116 = ((x4133&(x4134%x4135))>>x4136);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x4189 = INT16_MIN;
	static int32_t x4191 = INT32_MIN;
	static uint16_t x4192 = 4U;
	volatile uint64_t t117 = 280314LLU;

    t117 = ((x4189&(x4190%x4191))>>x4192);

    if (t117 != 12558286317568LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x4205 = 11;
	int64_t x4206 = 113923117654947LL;
	int64_t x4207 = 124848013LL;
	static uint32_t x4208 = 59U;
	int64_t t118 = -1276200698951LL;

    t118 = ((x4205&(x4206%x4207))>>x4208);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x4209 = UINT32_MAX;
	static int64_t x4210 = INT64_MAX;
	int32_t x4211 = -4140377;
	uint8_t x4212 = 2U;

    t119 = ((x4209&(x4210%x4211))>>x4212);

    if (t119 != 343493LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x4217 = 14U;
	uint8_t x4219 = UINT8_MAX;
	static uint32_t x4220 = 0U;
	static volatile int64_t t120 = -1515627LL;

    t120 = ((x4217&(x4218%x4219))>>x4220);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x4237 = INT8_MIN;
	int8_t x4238 = 1;
	uint16_t x4239 = UINT16_MAX;
	volatile uint8_t x4240 = 28U;

    t121 = ((x4237&(x4238%x4239))>>x4240);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x4241 = 50432551219620648LL;
	int64_t x4242 = INT64_MIN;
	int8_t x4244 = 1;
	static uint64_t t122 = 383265657584LLU;

    t122 = ((x4241&(x4242%x4243))>>x4244);

    if (t122 != 36996LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x4321 = 470;
	uint16_t x4322 = UINT16_MAX;
	int64_t x4323 = INT64_MIN;
	uint8_t x4324 = 26U;

    t123 = ((x4321&(x4322%x4323))>>x4324);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x4341 = INT16_MIN;
	int64_t x4342 = 1715230621962LL;
	int16_t x4344 = 2;
	volatile int64_t t124 = 11LL;

    t124 = ((x4341&(x4342%x4343))>>x4344);

    if (t124 != 141426688LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x4421 = -14078;
	uint8_t x4422 = 13U;
	uint8_t x4424 = 0U;
	volatile uint32_t t125 = 1240U;

    t125 = ((x4421&(x4422%x4423))>>x4424);

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x4513 = 752U;
	int16_t x4515 = 200;
	int8_t x4516 = 0;
	int64_t t126 = 14LL;

    t126 = ((x4513&(x4514%x4515))>>x4516);

    if (t126 != 752LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int16_t x4550 = INT16_MAX;
	volatile int16_t x4551 = -1;
	int32_t t127 = 14210;

    t127 = ((x4549&(x4550%x4551))>>x4552);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x4593 = INT8_MIN;
	uint32_t x4595 = 97548785U;
	uint32_t t128 = 8018U;

    t128 = ((x4593&(x4594%x4595))>>x4596);

    if (t128 != 688U) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x4602 = INT8_MAX;
	int64_t x4604 = 7LL;
	int32_t t129 = 36;

    t129 = ((x4601&(x4602%x4603))>>x4604);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x4665 = INT64_MAX;
	int32_t x4667 = -63;
	volatile uint64_t t130 = 62534LLU;

    t130 = ((x4665&(x4666%x4667))>>x4668);

    if (t130 != 66LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x4673 = UINT64_MAX;
	int32_t x4674 = 0;
	uint8_t x4675 = UINT8_MAX;
	uint8_t x4676 = 7U;
	volatile uint64_t t131 = 270644674431384LLU;

    t131 = ((x4673&(x4674%x4675))>>x4676);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x4678 = 1625U;
	volatile int16_t x4679 = INT16_MIN;
	uint8_t x4680 = 6U;
	volatile int32_t t132 = -363971265;

    t132 = ((x4677&(x4678%x4679))>>x4680);

    if (t132 != 25) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x4709 = 5555;
	volatile uint8_t x4710 = 7U;
	static uint8_t x4711 = 114U;
	static int16_t x4712 = 28;
	int32_t t133 = -378;

    t133 = ((x4709&(x4710%x4711))>>x4712);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x4741 = 28218U;
	int16_t x4743 = -1;
	volatile uint32_t x4744 = 6U;
	volatile int32_t t134 = 1;

    t134 = ((x4741&(x4742%x4743))>>x4744);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x4753 = 1;
	uint32_t x4754 = 0U;
	static uint8_t x4755 = 3U;
	uint32_t t135 = 2969U;

    t135 = ((x4753&(x4754%x4755))>>x4756);

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x4770 = INT16_MAX;
	int64_t x4771 = -1879369877467569LL;
	static uint16_t x4772 = 27U;
	volatile int64_t t136 = 8608980017LL;

    t136 = ((x4769&(x4770%x4771))>>x4772);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x4794 = INT32_MIN;
	static int64_t x4795 = 60559LL;
	static uint8_t x4796 = 5U;
	volatile int64_t t137 = -72900712996850LL;

    t137 = ((x4793&(x4794%x4795))>>x4796);

    if (t137 != 2LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x4817 = INT64_MIN;
	static int16_t x4818 = -1;
	int64_t x4819 = -1LL;
	uint16_t x4820 = 1U;
	static volatile int64_t t138 = -94809965LL;

    t138 = ((x4817&(x4818%x4819))>>x4820);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x4873 = -190;
	volatile int8_t x4874 = 7;
	uint8_t x4875 = UINT8_MAX;
	volatile int64_t x4876 = 29LL;

    t139 = ((x4873&(x4874%x4875))>>x4876);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x4913 = -60169;
	uint32_t x4916 = 21U;
	int32_t t140 = -6;

    t140 = ((x4913&(x4914%x4915))>>x4916);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x4985 = INT32_MAX;
	volatile int64_t x4986 = -1LL;
	static int32_t x4987 = INT32_MIN;
	volatile int64_t t141 = -596830437415LL;

    t141 = ((x4985&(x4986%x4987))>>x4988);

    if (t141 != 33554431LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x4990 = 177431LL;
	static uint8_t x4992 = 23U;

    t142 = ((x4989&(x4990%x4991))>>x4992);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t t143 = 2683830;

    t143 = ((x5029&(x5030%x5031))>>x5032);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x5129 = 84U;
	int64_t x5130 = 66706528591LL;
	int64_t x5131 = -52262773674LL;
	volatile int64_t t144 = 15LL;

    t144 = ((x5129&(x5130%x5131))>>x5132);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x5133 = -1;
	static uint64_t x5134 = UINT64_MAX;
	volatile uint64_t x5135 = 5870326449024LLU;

    t145 = ((x5133&(x5134%x5135))>>x5136);

    if (t145 != 937038194LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x5137 = -2;
	uint32_t x5138 = 371354892U;
	int64_t x5139 = INT64_MIN;

    t146 = ((x5137&(x5138%x5139))>>x5140);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x5141 = INT8_MIN;
	volatile int8_t x5142 = 4;
	uint64_t x5143 = 1248353125014017LLU;
	uint8_t x5144 = 1U;
	static volatile uint64_t t147 = 194306LLU;

    t147 = ((x5141&(x5142%x5143))>>x5144);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x5194 = -29;
	int32_t x5195 = 115734587;
	static int8_t x5196 = 0;
	int32_t t148 = 7613;

    t148 = ((x5193&(x5194%x5195))>>x5196);

    if (t148 != 67) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint32_t x5241 = 2070268217U;
	int64_t x5242 = 7617LL;
	int64_t x5243 = 6973LL;
	int8_t x5244 = 2;
	int64_t t149 = -23343889LL;

    t149 = ((x5241&(x5242%x5243))>>x5244);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x5249 = INT8_MIN;
	uint32_t x5250 = 24824U;
	uint64_t x5251 = 1534394243742519797LLU;
	int8_t x5252 = 11;
	static volatile uint64_t t150 = 74LLU;

    t150 = ((x5249&(x5250%x5251))>>x5252);

    if (t150 != 12LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x5293 = -4;
	uint32_t x5294 = UINT32_MAX;
	static uint8_t x5296 = 61U;

    t151 = ((x5293&(x5294%x5295))>>x5296);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x5321 = 105965;
	uint32_t x5322 = 1106505185U;
	int16_t x5323 = -1;
	uint32_t t152 = 0U;

    t152 = ((x5321&(x5322%x5323))>>x5324);

    if (t152 != 12U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x5379 = 3;
	volatile uint8_t x5380 = 3U;

    t153 = ((x5377&(x5378%x5379))>>x5380);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x5381 = UINT32_MAX;
	int64_t x5382 = INT64_MAX;
	uint64_t x5383 = 99107480115268LLU;
	uint8_t x5384 = 1U;
	static volatile uint64_t t154 = 66LLU;

    t154 = ((x5381&(x5382%x5383))>>x5384);

    if (t154 != 1183799279LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x5413 = 957U;
	int8_t x5414 = INT8_MIN;
	static uint8_t x5415 = 107U;
	volatile uint8_t x5416 = 22U;

    t155 = ((x5413&(x5414%x5415))>>x5416);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x5422 = INT16_MAX;
	uint8_t x5423 = UINT8_MAX;
	int8_t x5424 = 0;
	volatile int32_t t156 = 285666604;

    t156 = ((x5421&(x5422%x5423))>>x5424);

    if (t156 != 2) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x5454 = UINT16_MAX;
	uint8_t x5455 = 1U;
	int16_t x5456 = 0;

    t157 = ((x5453&(x5454%x5455))>>x5456);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x5485 = INT64_MIN;
	static uint8_t x5486 = 28U;
	uint64_t t158 = 1247LLU;

    t158 = ((x5485&(x5486%x5487))>>x5488);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x5489 = 9U;
	int8_t x5490 = 0;
	static volatile int32_t x5491 = INT32_MAX;
	static int8_t x5492 = 1;
	int32_t t159 = 65811;

    t159 = ((x5489&(x5490%x5491))>>x5492);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x5529 = INT64_MAX;
	volatile int64_t x5531 = -156LL;
	static int8_t x5532 = 8;
	volatile int64_t t160 = 10939LL;

    t160 = ((x5529&(x5530%x5531))>>x5532);

    if (t160 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x5537 = 3791185;
	int16_t x5538 = -1;
	int32_t x5539 = 189864;
	uint64_t x5540 = 1LLU;
	volatile int32_t t161 = -3;

    t161 = ((x5537&(x5538%x5539))>>x5540);

    if (t161 != 1895592) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x5597 = UINT64_MAX;
	uint64_t x5598 = 16190448781243237LLU;
	int16_t x5599 = INT16_MIN;
	uint8_t x5600 = 4U;
	uint64_t t162 = 880142664302817838LLU;

    t162 = ((x5597&(x5598%x5599))>>x5600);

    if (t162 != 1011903048827702LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x5613 = UINT16_MAX;
	static int8_t x5614 = 45;
	static int32_t x5615 = INT32_MIN;
	int8_t x5616 = 0;
	int32_t t163 = 0;

    t163 = ((x5613&(x5614%x5615))>>x5616);

    if (t163 != 45) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x5689 = INT16_MAX;
	int8_t x5691 = INT8_MIN;
	volatile int8_t x5692 = 10;

    t164 = ((x5689&(x5690%x5691))>>x5692);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x5734 = -26;
	uint64_t x5735 = UINT64_MAX;
	uint8_t x5736 = 0U;
	uint64_t t165 = 12983LLU;

    t165 = ((x5733&(x5734%x5735))>>x5736);

    if (t165 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x5753 = INT32_MAX;
	static volatile uint32_t x5754 = 5193U;
	int8_t x5755 = -1;

    t166 = ((x5753&(x5754%x5755))>>x5756);

    if (t166 != 81U) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x5757 = 37039LLU;
	int8_t x5758 = INT8_MIN;
	volatile uint64_t x5760 = 4LLU;
	uint64_t t167 = 848966431012LLU;

    t167 = ((x5757&(x5758%x5759))>>x5760);

    if (t167 != 2312LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x5769 = INT16_MAX;
	uint16_t x5770 = 81U;
	int32_t x5771 = INT32_MIN;
	uint8_t x5772 = 7U;
	int32_t t168 = -1531;

    t168 = ((x5769&(x5770%x5771))>>x5772);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x5773 = INT64_MIN;
	static uint64_t x5774 = 44846487207048LLU;
	static volatile int64_t x5775 = -460374LL;
	static int8_t x5776 = 5;
	uint64_t t169 = 162585218446147LLU;

    t169 = ((x5773&(x5774%x5775))>>x5776);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x5778 = INT32_MIN;
	int8_t x5779 = -2;
	uint8_t x5780 = 2U;
	uint64_t t170 = 29674377833612229LLU;

    t170 = ((x5777&(x5778%x5779))>>x5780);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x5817 = 51LLU;
	int64_t x5818 = INT64_MIN;
	int32_t x5819 = -48645692;
	uint16_t x5820 = 6U;

    t171 = ((x5817&(x5818%x5819))>>x5820);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint8_t x5853 = 9U;
	int64_t x5854 = INT64_MIN;
	uint64_t x5855 = UINT64_MAX;
	uint8_t x5856 = 15U;

    t172 = ((x5853&(x5854%x5855))>>x5856);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x5885 = 21922542985956197LLU;
	uint8_t x5886 = 0U;
	uint32_t x5887 = 446277U;
	static int8_t x5888 = 1;
	uint64_t t173 = 6384377549162LLU;

    t173 = ((x5885&(x5886%x5887))>>x5888);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x5889 = 29U;
	int16_t x5890 = 193;
	volatile int64_t x5891 = INT64_MIN;
	volatile int8_t x5892 = 1;
	volatile int64_t t174 = 3682LL;

    t174 = ((x5889&(x5890%x5891))>>x5892);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x5915 = 43081LLU;
	uint8_t x5916 = 15U;
	volatile uint64_t t175 = 175107028723LLU;

    t175 = ((x5913&(x5914%x5915))>>x5916);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x5965 = 1401921418999735LLU;
	uint64_t x5966 = UINT64_MAX;
	int8_t x5967 = INT8_MIN;
	volatile int8_t x5968 = 13;
	uint64_t t176 = 2314428LLU;

    t176 = ((x5965&(x5966%x5967))>>x5968);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x5997 = -677525LL;
	static volatile int16_t x5998 = 133;
	int32_t x5999 = INT32_MIN;
	uint16_t x6000 = 34U;
	volatile int64_t t177 = -12184858025538LL;

    t177 = ((x5997&(x5998%x5999))>>x6000);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x6133 = -5661729;
	volatile int8_t x6135 = 17;
	uint32_t x6136 = 2U;

    t178 = ((x6133&(x6134%x6135))>>x6136);

    if (t178 != 2LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x6149 = 4348U;
	int8_t x6151 = -1;
	static volatile uint8_t x6152 = 5U;
	int32_t t179 = -2947948;

    t179 = ((x6149&(x6150%x6151))>>x6152);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x6269 = INT32_MIN;
	int32_t x6270 = -80;
	uint8_t x6271 = 1U;
	uint16_t x6272 = 29U;

    t180 = ((x6269&(x6270%x6271))>>x6272);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int64_t x6277 = INT64_MIN;
	volatile int16_t x6278 = INT16_MIN;
	int16_t x6279 = -1;
	int64_t t181 = -1110338LL;

    t181 = ((x6277&(x6278%x6279))>>x6280);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x6301 = 8U;
	int16_t x6303 = INT16_MIN;
	uint8_t x6304 = 30U;
	static volatile int32_t t182 = -14827375;

    t182 = ((x6301&(x6302%x6303))>>x6304);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x6341 = 80839U;
	int64_t x6343 = -716LL;
	int8_t x6344 = 1;
	volatile int64_t t183 = -13LL;

    t183 = ((x6341&(x6342%x6343))>>x6344);

    if (t183 != 99LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x6397 = INT64_MIN;
	static int32_t x6398 = INT32_MAX;
	static uint16_t x6399 = UINT16_MAX;
	int8_t x6400 = 2;

    t184 = ((x6397&(x6398%x6399))>>x6400);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x6417 = 31U;
	static uint8_t x6418 = 14U;
	int64_t t185 = 44669460LL;

    t185 = ((x6417&(x6418%x6419))>>x6420);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x6433 = INT16_MAX;
	uint64_t x6434 = 1381610LLU;
	static int8_t x6435 = INT8_MIN;
	uint16_t x6436 = 1U;

    t186 = ((x6433&(x6434%x6435))>>x6436);

    if (t186 != 2677LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x6441 = INT64_MAX;
	volatile uint64_t x6442 = 6LLU;
	int64_t x6443 = -42LL;
	static int32_t x6444 = 0;
	uint64_t t187 = 10082701LLU;

    t187 = ((x6441&(x6442%x6443))>>x6444);

    if (t187 != 6LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x6573 = 12U;
	int32_t x6575 = -1;
	uint16_t x6576 = 7U;
	volatile int64_t t188 = -5852LL;

    t188 = ((x6573&(x6574%x6575))>>x6576);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x6614 = 1U;
	volatile int8_t x6615 = -1;
	int64_t t189 = -3LL;

    t189 = ((x6613&(x6614%x6615))>>x6616);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x6645 = INT16_MIN;
	static int32_t x6646 = 2847;
	int64_t x6647 = -1LL;
	volatile uint8_t x6648 = 3U;
	volatile int64_t t190 = 103881051180649LL;

    t190 = ((x6645&(x6646%x6647))>>x6648);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x6705 = INT64_MAX;
	int16_t x6706 = -14734;
	uint8_t x6708 = 13U;
	int64_t t191 = 5184LL;

    t191 = ((x6705&(x6706%x6707))>>x6708);

    if (t191 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x6713 = INT8_MAX;
	static int64_t x6714 = INT64_MAX;
	static int8_t x6715 = INT8_MIN;
	volatile uint8_t x6716 = 9U;
	int64_t t192 = -6897747419502LL;

    t192 = ((x6713&(x6714%x6715))>>x6716);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x6773 = UINT16_MAX;
	volatile int8_t x6775 = INT8_MAX;
	int8_t x6776 = 1;
	volatile int32_t t193 = -1175;

    t193 = ((x6773&(x6774%x6775))>>x6776);

    if (t193 != 32767) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x6829 = -1;
	volatile uint16_t x6830 = UINT16_MAX;
	volatile int8_t x6832 = 1;

    t194 = ((x6829&(x6830%x6831))>>x6832);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x6857 = 212696U;
	int32_t x6858 = INT32_MIN;
	int8_t x6859 = INT8_MAX;
	int64_t x6860 = 0LL;
	uint32_t t195 = 42490U;

    t195 = ((x6857&(x6858%x6859))>>x6860);

    if (t195 != 212696U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x6866 = 1156330LLU;
	int8_t x6867 = INT8_MAX;
	uint64_t t196 = 973128665421258534LLU;

    t196 = ((x6865&(x6866%x6867))>>x6868);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x6933 = UINT64_MAX;
	volatile int16_t x6934 = -1;
	int8_t x6935 = -1;
	static volatile int8_t x6936 = 1;

    t197 = ((x6933&(x6934%x6935))>>x6936);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x6938 = INT32_MAX;
	int32_t x6939 = 957561;
	static uint32_t t198 = 410686U;

    t198 = ((x6937&(x6938%x6939))>>x6940);

    if (t198 != 622597U) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x6953 = INT64_MIN;
	static volatile int64_t x6954 = INT64_MIN;
	volatile int32_t x6955 = INT32_MIN;
	static uint8_t x6956 = 2U;

    t199 = ((x6953&(x6954%x6955))>>x6956);

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


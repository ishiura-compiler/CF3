
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

static int8_t x181 = INT8_MIN;
uint64_t x183 = UINT64_MAX;
uint32_t x245 = 0U;
static int8_t x246 = -1;
static int64_t x276 = -1LL;
int8_t x404 = -1;
static int32_t x661 = -1;
volatile int64_t x664 = -1LL;
uint16_t x665 = UINT16_MAX;
int8_t x840 = -1;
static volatile int16_t x846 = -1;
int32_t x1039 = -1;
volatile int16_t x1040 = -1;
static int16_t x1085 = INT16_MAX;
uint64_t x1088 = UINT64_MAX;
uint16_t x1245 = UINT16_MAX;
int16_t x1247 = -1;
volatile int32_t t14 = 181778666;
volatile int8_t x1306 = INT8_MIN;
uint32_t x1381 = UINT32_MAX;
int64_t x1384 = -1LL;
static int32_t x1419 = INT32_MIN;
int64_t x1444 = -1LL;
static int16_t x1461 = INT16_MIN;
uint8_t x1557 = 12U;
uint64_t x1558 = UINT64_MAX;
int64_t x1752 = -1LL;
volatile uint16_t x2097 = UINT16_MAX;
int32_t x2099 = -1;
uint8_t x2206 = UINT8_MAX;
int32_t x2208 = -1;
static int8_t x2601 = -1;
static uint16_t x2602 = 31U;
int32_t x2697 = INT32_MIN;
int32_t t34 = 56256;
static int32_t x3118 = INT32_MIN;
uint32_t x3119 = UINT32_MAX;
int8_t x3210 = -1;
static volatile int32_t x3211 = -1;
int64_t x3353 = INT64_MIN;
int64_t t40 = -2934171438721LL;
uint64_t x3462 = 5969958436889658LLU;
uint32_t x3476 = 0U;
int64_t x3578 = 1806997116629911042LL;
static uint32_t t44 = 4192047U;
int32_t t47 = -5599106;
volatile int64_t x3781 = 163869620908019LL;
uint64_t x3783 = UINT64_MAX;
int64_t x3857 = INT64_MIN;
uint64_t x3927 = UINT64_MAX;
int16_t x3928 = -1;
uint8_t x3950 = 14U;
int64_t x3991 = -1LL;
int8_t x4115 = -1;
static int64_t x4253 = -289507LL;
uint64_t x4255 = UINT64_MAX;
int16_t x4968 = -1;
static volatile uint32_t t59 = 12959U;
static int32_t x4969 = 2027036;
uint64_t x5369 = 1655LLU;
uint64_t x5372 = UINT64_MAX;
volatile int8_t x5678 = INT8_MIN;
static int16_t x5898 = INT16_MIN;
volatile int16_t x5899 = -1;
static int64_t x5937 = INT64_MAX;
static uint8_t x5938 = UINT8_MAX;
uint64_t x6157 = UINT64_MAX;
volatile int8_t x6158 = -1;
uint32_t x6197 = 101644U;
uint32_t x6228 = UINT32_MAX;
uint32_t x6242 = 834055308U;
static int8_t x6267 = INT8_MIN;
int8_t x6298 = INT8_MAX;
static uint8_t x6483 = UINT8_MAX;
int64_t x6589 = -1LL;
uint64_t x6590 = UINT64_MAX;
uint64_t x6679 = UINT64_MAX;
uint32_t x6811 = UINT32_MAX;
int16_t x7040 = -1;
int32_t t83 = 58714023;
uint64_t t88 = 1217791025810LLU;
int64_t x7582 = INT64_MIN;
int16_t x7584 = -1;


void f0(void) {
    	static int32_t x182 = INT32_MAX;
	int32_t x184 = -1;
	static volatile int32_t t0 = 2466;

    t0 = ((x181%x182)/(x183==x184));

    if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x247 = -1;
	uint64_t x248 = UINT64_MAX;
	uint32_t t1 = 943797052U;

    t1 = ((x245%x246)/(x247==x248));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x273 = 8;
	int32_t x274 = -170;
	uint64_t x275 = UINT64_MAX;
	int32_t t2 = 94184859;

    t2 = ((x273%x274)/(x275==x276));

    if (t2 != 8) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x401 = 20;
	static volatile int8_t x402 = INT8_MIN;
	uint64_t x403 = UINT64_MAX;
	static int32_t t3 = -94729;

    t3 = ((x401%x402)/(x403==x404));

    if (t3 != 20) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x445 = 74885U;
	int32_t x446 = 12016803;
	static int8_t x447 = -1;
	int16_t x448 = -1;
	static uint32_t t4 = 0U;

    t4 = ((x445%x446)/(x447==x448));

    if (t4 != 74885U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x489 = 791503373782117040LL;
	int64_t x490 = INT64_MAX;
	int8_t x491 = INT8_MIN;
	int8_t x492 = INT8_MIN;
	int64_t t5 = -355977115714465101LL;

    t5 = ((x489%x490)/(x491==x492));

    if (t5 != 791503373782117040LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x662 = INT16_MAX;
	int8_t x663 = -1;
	static int32_t t6 = -22740;

    t6 = ((x661%x662)/(x663==x664));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x666 = INT16_MIN;
	uint16_t x667 = UINT16_MAX;
	uint16_t x668 = UINT16_MAX;
	volatile int32_t t7 = 26293;

    t7 = ((x665%x666)/(x667==x668));

    if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x833 = 5U;
	uint8_t x834 = 106U;
	static int8_t x835 = -1;
	int16_t x836 = -1;
	volatile int32_t t8 = -2;

    t8 = ((x833%x834)/(x835==x836));

    if (t8 != 5) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x837 = INT64_MIN;
	int16_t x838 = INT16_MAX;
	uint64_t x839 = UINT64_MAX;
	volatile int64_t t9 = 2915587300775LL;

    t9 = ((x837%x838)/(x839==x840));

    if (t9 != -8LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x845 = 65892370U;
	int64_t x847 = INT64_MAX;
	int64_t x848 = INT64_MAX;
	uint32_t t10 = 757U;

    t10 = ((x845%x846)/(x847==x848));

    if (t10 != 65892370U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x1037 = 158U;
	int8_t x1038 = -1;
	volatile int32_t t11 = 5663690;

    t11 = ((x1037%x1038)/(x1039==x1040));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x1086 = 2251509161LL;
	static uint64_t x1087 = UINT64_MAX;
	volatile int64_t t12 = -299589LL;

    t12 = ((x1085%x1086)/(x1087==x1088));

    if (t12 != 32767LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x1237 = INT8_MIN;
	int32_t x1238 = -1534100;
	int8_t x1239 = INT8_MIN;
	static int8_t x1240 = INT8_MIN;
	int32_t t13 = 5433;

    t13 = ((x1237%x1238)/(x1239==x1240));

    if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x1246 = UINT8_MAX;
	static int8_t x1248 = -1;

    t14 = ((x1245%x1246)/(x1247==x1248));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x1305 = INT64_MIN;
	int32_t x1307 = -1;
	int16_t x1308 = -1;
	int64_t t15 = -3701578798696692992LL;

    t15 = ((x1305%x1306)/(x1307==x1308));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x1382 = -1;
	int32_t x1383 = -1;
	volatile uint32_t t16 = 3U;

    t16 = ((x1381%x1382)/(x1383==x1384));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x1389 = INT32_MAX;
	static int32_t x1390 = -1;
	int16_t x1391 = -1;
	static int16_t x1392 = -1;
	volatile int32_t t17 = 111022;

    t17 = ((x1389%x1390)/(x1391==x1392));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x1417 = 83U;
	uint16_t x1418 = UINT16_MAX;
	int32_t x1420 = INT32_MIN;
	static int32_t t18 = -87263;

    t18 = ((x1417%x1418)/(x1419==x1420));

    if (t18 != 83) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x1441 = -64544162;
	static int64_t x1442 = INT64_MIN;
	static int64_t x1443 = -1LL;
	volatile int64_t t19 = -12535341385892LL;

    t19 = ((x1441%x1442)/(x1443==x1444));

    if (t19 != -64544162LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x1462 = -1;
	int16_t x1463 = INT16_MAX;
	int16_t x1464 = INT16_MAX;
	volatile int32_t t20 = 114574151;

    t20 = ((x1461%x1462)/(x1463==x1464));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x1559 = -1;
	volatile int16_t x1560 = -1;
	volatile uint64_t t21 = 41893597780LLU;

    t21 = ((x1557%x1558)/(x1559==x1560));

    if (t21 != 12LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x1629 = -456988LL;
	uint32_t x1630 = UINT32_MAX;
	static volatile int8_t x1631 = -1;
	volatile int8_t x1632 = -1;
	static int64_t t22 = -3886824LL;

    t22 = ((x1629%x1630)/(x1631==x1632));

    if (t22 != -456988LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x1749 = 12347260425915LLU;
	int64_t x1750 = INT64_MIN;
	uint64_t x1751 = UINT64_MAX;
	uint64_t t23 = 5LLU;

    t23 = ((x1749%x1750)/(x1751==x1752));

    if (t23 != 12347260425915LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x1933 = UINT32_MAX;
	static volatile int64_t x1934 = -139795665206LL;
	int8_t x1935 = INT8_MAX;
	volatile int8_t x1936 = INT8_MAX;
	int64_t t24 = 12664860012518LL;

    t24 = ((x1933%x1934)/(x1935==x1936));

    if (t24 != 4294967295LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x1941 = -154576323;
	static uint8_t x1942 = 47U;
	int32_t x1943 = INT32_MAX;
	static int32_t x1944 = INT32_MAX;
	volatile int32_t t25 = 45732431;

    t25 = ((x1941%x1942)/(x1943==x1944));

    if (t25 != -44) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x2098 = INT32_MIN;
	int8_t x2100 = -1;
	volatile int32_t t26 = 4;

    t26 = ((x2097%x2098)/(x2099==x2100));

    if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x2125 = 3U;
	uint64_t x2126 = 2230173277138216744LLU;
	static uint64_t x2127 = UINT64_MAX;
	volatile int64_t x2128 = -1LL;
	uint64_t t27 = 3LLU;

    t27 = ((x2125%x2126)/(x2127==x2128));

    if (t27 != 3LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x2205 = UINT32_MAX;
	uint32_t x2207 = UINT32_MAX;
	static volatile uint32_t t28 = 5099749U;

    t28 = ((x2205%x2206)/(x2207==x2208));

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x2241 = 57329870;
	int16_t x2242 = -1;
	int64_t x2243 = INT64_MIN;
	int64_t x2244 = INT64_MIN;
	volatile int32_t t29 = -1161110;

    t29 = ((x2241%x2242)/(x2243==x2244));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x2469 = 0LLU;
	uint32_t x2470 = 12555122U;
	int8_t x2471 = -1;
	int8_t x2472 = -1;
	uint64_t t30 = 3355836208790511905LLU;

    t30 = ((x2469%x2470)/(x2471==x2472));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x2553 = INT32_MIN;
	static int8_t x2554 = -1;
	int32_t x2555 = -1;
	int16_t x2556 = -1;
	volatile int32_t t31 = -65265168;

    t31 = ((x2553%x2554)/(x2555==x2556));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x2603 = INT8_MIN;
	static volatile int8_t x2604 = INT8_MIN;
	int32_t t32 = 634221;

    t32 = ((x2601%x2602)/(x2603==x2604));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x2698 = INT8_MIN;
	uint32_t x2699 = UINT32_MAX;
	int16_t x2700 = -1;
	int32_t t33 = 544;

    t33 = ((x2697%x2698)/(x2699==x2700));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x2893 = INT8_MIN;
	uint8_t x2894 = 73U;
	int8_t x2895 = INT8_MIN;
	int8_t x2896 = INT8_MIN;

    t34 = ((x2893%x2894)/(x2895==x2896));

    if (t34 != -55) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x3117 = INT16_MIN;
	int32_t x3120 = -1;
	volatile int32_t t35 = -3;

    t35 = ((x3117%x3118)/(x3119==x3120));

    if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x3209 = -12;
	uint64_t x3212 = UINT64_MAX;
	volatile int32_t t36 = -8005136;

    t36 = ((x3209%x3210)/(x3211==x3212));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x3309 = 4U;
	int32_t x3310 = -1;
	int16_t x3311 = -1;
	int64_t x3312 = -1LL;
	volatile uint32_t t37 = 6863U;

    t37 = ((x3309%x3310)/(x3311==x3312));

    if (t37 != 4U) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x3354 = -1LL;
	int64_t x3355 = -1LL;
	volatile int32_t x3356 = -1;
	int64_t t38 = 10160LL;

    t38 = ((x3353%x3354)/(x3355==x3356));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x3373 = -85405LL;
	int32_t x3374 = INT32_MAX;
	static int16_t x3375 = INT16_MIN;
	int16_t x3376 = INT16_MIN;
	volatile int64_t t39 = 180967LL;

    t39 = ((x3373%x3374)/(x3375==x3376));

    if (t39 != -85405LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x3449 = 20851488LL;
	int64_t x3450 = INT64_MIN;
	static int8_t x3451 = -1;
	int32_t x3452 = -1;

    t40 = ((x3449%x3450)/(x3451==x3452));

    if (t40 != 20851488LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x3461 = -1;
	int64_t x3463 = -1LL;
	int8_t x3464 = -1;
	uint64_t t41 = 749562LLU;

    t41 = ((x3461%x3462)/(x3463==x3464));

    if (t41 != 5542462157398053LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x3473 = -15;
	int8_t x3474 = INT8_MIN;
	int32_t x3475 = 0;
	int32_t t42 = 76099009;

    t42 = ((x3473%x3474)/(x3475==x3476));

    if (t42 != -15) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x3577 = -1LL;
	int64_t x3579 = -1LL;
	static volatile int32_t x3580 = -1;
	volatile int64_t t43 = 12428840LL;

    t43 = ((x3577%x3578)/(x3579==x3580));

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x3613 = -9741;
	uint32_t x3614 = UINT32_MAX;
	static uint32_t x3615 = UINT32_MAX;
	uint32_t x3616 = UINT32_MAX;

    t44 = ((x3613%x3614)/(x3615==x3616));

    if (t44 != 4294957555U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x3729 = 56U;
	int32_t x3730 = -1;
	volatile int16_t x3731 = -1;
	int8_t x3732 = -1;
	int32_t t45 = -1091;

    t45 = ((x3729%x3730)/(x3731==x3732));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x3741 = -1;
	uint8_t x3742 = 88U;
	static int16_t x3743 = INT16_MIN;
	int16_t x3744 = INT16_MIN;
	int32_t t46 = 743868;

    t46 = ((x3741%x3742)/(x3743==x3744));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x3769 = 11;
	int16_t x3770 = INT16_MIN;
	int8_t x3771 = -1;
	int32_t x3772 = -1;

    t47 = ((x3769%x3770)/(x3771==x3772));

    if (t47 != 11) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x3782 = INT32_MAX;
	volatile int8_t x3784 = -1;
	volatile int64_t t48 = -6511743LL;

    t48 = ((x3781%x3782)/(x3783==x3784));

    if (t48 != 1586256390LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x3858 = UINT32_MAX;
	int64_t x3859 = -1LL;
	static volatile int32_t x3860 = -1;
	int64_t t49 = 17613654597729179LL;

    t49 = ((x3857%x3858)/(x3859==x3860));

    if (t49 != -2147483648LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x3861 = UINT8_MAX;
	uint64_t x3862 = 79717901547438460LLU;
	int64_t x3863 = -1LL;
	int16_t x3864 = -1;
	uint64_t t50 = 7LLU;

    t50 = ((x3861%x3862)/(x3863==x3864));

    if (t50 != 255LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x3925 = 27U;
	static uint32_t x3926 = UINT32_MAX;
	volatile uint32_t t51 = 46552U;

    t51 = ((x3925%x3926)/(x3927==x3928));

    if (t51 != 27U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x3949 = 223402436U;
	int8_t x3951 = -1;
	volatile int32_t x3952 = -1;
	volatile uint32_t t52 = 15U;

    t52 = ((x3949%x3950)/(x3951==x3952));

    if (t52 != 12U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x3989 = INT8_MAX;
	uint64_t x3990 = UINT64_MAX;
	int32_t x3992 = -1;
	static volatile uint64_t t53 = 267607115LLU;

    t53 = ((x3989%x3990)/(x3991==x3992));

    if (t53 != 127LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x4113 = 3371U;
	static int32_t x4114 = INT32_MIN;
	volatile int64_t x4116 = -1LL;
	volatile uint32_t t54 = 126729U;

    t54 = ((x4113%x4114)/(x4115==x4116));

    if (t54 != 3371U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x4254 = -1;
	static volatile int64_t x4256 = -1LL;
	volatile int64_t t55 = 81228580383121537LL;

    t55 = ((x4253%x4254)/(x4255==x4256));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x4469 = 1;
	int64_t x4470 = INT64_MIN;
	volatile int16_t x4471 = INT16_MIN;
	volatile int16_t x4472 = INT16_MIN;
	volatile int64_t t56 = 268612268294905544LL;

    t56 = ((x4469%x4470)/(x4471==x4472));

    if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x4577 = -448775467LL;
	uint64_t x4578 = 37685758LLU;
	int64_t x4579 = INT64_MIN;
	int64_t x4580 = INT64_MIN;
	static uint64_t t57 = 938264257303811LLU;

    t57 = ((x4577%x4578)/(x4579==x4580));

    if (t57 != 21344991LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int32_t x4777 = INT32_MIN;
	static uint32_t x4778 = UINT32_MAX;
	volatile int32_t x4779 = -1;
	int8_t x4780 = -1;
	uint32_t t58 = 362413U;

    t58 = ((x4777%x4778)/(x4779==x4780));

    if (t58 != 2147483648U) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x4965 = INT32_MIN;
	static uint32_t x4966 = 2754307U;
	volatile int8_t x4967 = -1;

    t59 = ((x4965%x4966)/(x4967==x4968));

    if (t59 != 1878495U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x4970 = 127061U;
	volatile uint32_t x4971 = UINT32_MAX;
	int8_t x4972 = -1;
	volatile uint32_t t60 = 1018463404U;

    t60 = ((x4969%x4970)/(x4971==x4972));

    if (t60 != 121121U) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x5141 = INT64_MIN;
	int16_t x5142 = -4;
	static int8_t x5143 = -1;
	volatile int32_t x5144 = -1;
	int64_t t61 = -31217314LL;

    t61 = ((x5141%x5142)/(x5143==x5144));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x5370 = UINT16_MAX;
	volatile int32_t x5371 = -1;
	uint64_t t62 = 786345LLU;

    t62 = ((x5369%x5370)/(x5371==x5372));

    if (t62 != 1655LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x5465 = -6084;
	volatile uint16_t x5466 = 11893U;
	int16_t x5467 = INT16_MIN;
	volatile int16_t x5468 = INT16_MIN;
	static int32_t t63 = 201;

    t63 = ((x5465%x5466)/(x5467==x5468));

    if (t63 != -6084) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x5677 = INT16_MIN;
	int8_t x5679 = -1;
	int32_t x5680 = -1;
	int32_t t64 = 4;

    t64 = ((x5677%x5678)/(x5679==x5680));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x5681 = INT16_MIN;
	volatile uint32_t x5682 = 446762959U;
	volatile int32_t x5683 = -1;
	int16_t x5684 = -1;
	volatile uint32_t t65 = 426U;

    t65 = ((x5681%x5682)/(x5683==x5684));

    if (t65 != 274067897U) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x5705 = INT16_MIN;
	int16_t x5706 = INT16_MIN;
	static int8_t x5707 = -1;
	int16_t x5708 = -1;
	volatile int32_t t66 = -2348462;

    t66 = ((x5705%x5706)/(x5707==x5708));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x5897 = 6U;
	int64_t x5900 = -1LL;
	int32_t t67 = 56;

    t67 = ((x5897%x5898)/(x5899==x5900));

    if (t67 != 6) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x5939 = -1;
	volatile int32_t x5940 = -1;
	static volatile int64_t t68 = 6446949048454706LL;

    t68 = ((x5937%x5938)/(x5939==x5940));

    if (t68 != 127LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x6159 = INT8_MAX;
	int8_t x6160 = INT8_MAX;
	uint64_t t69 = 397971961LLU;

    t69 = ((x6157%x6158)/(x6159==x6160));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x6198 = 261U;
	int8_t x6199 = -1;
	int64_t x6200 = -1LL;
	volatile uint32_t t70 = 9964U;

    t70 = ((x6197%x6198)/(x6199==x6200));

    if (t70 != 115U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x6225 = 9U;
	uint16_t x6226 = 811U;
	volatile int16_t x6227 = -1;
	volatile int32_t t71 = -28985091;

    t71 = ((x6225%x6226)/(x6227==x6228));

    if (t71 != 9) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x6241 = 211U;
	uint32_t x6243 = UINT32_MAX;
	int32_t x6244 = -1;
	uint32_t t72 = 87085U;

    t72 = ((x6241%x6242)/(x6243==x6244));

    if (t72 != 211U) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x6265 = INT64_MAX;
	uint64_t x6266 = 8670LLU;
	volatile int8_t x6268 = INT8_MIN;
	uint64_t t73 = 915951036957784LLU;

    t73 = ((x6265%x6266)/(x6267==x6268));

    if (t73 != 3187LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x6297 = INT64_MIN;
	int64_t x6299 = INT64_MIN;
	int64_t x6300 = INT64_MIN;
	volatile int64_t t74 = -1705LL;

    t74 = ((x6297%x6298)/(x6299==x6300));

    if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x6401 = 4;
	volatile int64_t x6402 = -1LL;
	int8_t x6403 = INT8_MIN;
	int8_t x6404 = INT8_MIN;
	volatile int64_t t75 = 1524165025LL;

    t75 = ((x6401%x6402)/(x6403==x6404));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x6481 = INT64_MAX;
	uint64_t x6482 = UINT64_MAX;
	uint8_t x6484 = UINT8_MAX;
	volatile uint64_t t76 = 15093719989LLU;

    t76 = ((x6481%x6482)/(x6483==x6484));

    if (t76 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x6521 = INT64_MIN;
	static volatile uint8_t x6522 = 45U;
	volatile int16_t x6523 = -1;
	int8_t x6524 = -1;
	volatile int64_t t77 = 1249LL;

    t77 = ((x6521%x6522)/(x6523==x6524));

    if (t77 != -8LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x6591 = INT16_MIN;
	volatile int16_t x6592 = INT16_MIN;
	uint64_t t78 = 245LLU;

    t78 = ((x6589%x6590)/(x6591==x6592));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x6645 = -1;
	volatile int32_t x6646 = -1;
	int16_t x6647 = -1;
	int32_t x6648 = -1;
	volatile int32_t t79 = -199716;

    t79 = ((x6645%x6646)/(x6647==x6648));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x6677 = INT32_MAX;
	int32_t x6678 = INT32_MIN;
	static int64_t x6680 = -1LL;
	static volatile int32_t t80 = INT32_MAX;

    t80 = ((x6677%x6678)/(x6679==x6680));

    if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x6777 = -1LL;
	volatile uint8_t x6778 = 40U;
	volatile int64_t x6779 = INT64_MAX;
	int64_t x6780 = INT64_MAX;
	int64_t t81 = -611LL;

    t81 = ((x6777%x6778)/(x6779==x6780));

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x6809 = -1;
	int8_t x6810 = INT8_MIN;
	int8_t x6812 = -1;
	static volatile int32_t t82 = -1;

    t82 = ((x6809%x6810)/(x6811==x6812));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x7037 = UINT16_MAX;
	int8_t x7038 = INT8_MIN;
	int8_t x7039 = -1;

    t83 = ((x7037%x7038)/(x7039==x7040));

    if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x7093 = INT16_MIN;
	uint32_t x7094 = 7506U;
	int8_t x7095 = -1;
	static int8_t x7096 = -1;
	static volatile uint32_t t84 = 218936726U;

    t84 = ((x7093%x7094)/(x7095==x7096));

    if (t84 != 1328U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x7249 = 7868LLU;
	static int8_t x7250 = INT8_MIN;
	int64_t x7251 = -1LL;
	uint64_t x7252 = UINT64_MAX;
	uint64_t t85 = 3LLU;

    t85 = ((x7249%x7250)/(x7251==x7252));

    if (t85 != 7868LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x7353 = -16091756371258779LL;
	int32_t x7354 = INT32_MAX;
	volatile int32_t x7355 = -1;
	int32_t x7356 = -1;
	int64_t t86 = -5968LL;

    t86 = ((x7353%x7354)/(x7355==x7356));

    if (t86 != -2126808150LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x7469 = 1;
	volatile int8_t x7470 = 32;
	volatile int8_t x7471 = INT8_MIN;
	int8_t x7472 = INT8_MIN;
	volatile int32_t t87 = 1;

    t87 = ((x7469%x7470)/(x7471==x7472));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x7477 = 3169LLU;
	int8_t x7478 = INT8_MIN;
	int8_t x7479 = -1;
	int32_t x7480 = -1;

    t88 = ((x7477%x7478)/(x7479==x7480));

    if (t88 != 3169LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x7581 = INT64_MIN;
	uint32_t x7583 = UINT32_MAX;
	volatile int64_t t89 = -3LL;

    t89 = ((x7581%x7582)/(x7583==x7584));

    if (t89 != 0LL) { NG(); } else { ; }
	
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


    return 0;
}


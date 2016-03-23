
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

static int8_t x48 = 9;
uint8_t x89 = 28U;
volatile uint16_t x90 = 12139U;
uint32_t x107 = 6U;
uint8_t x169 = UINT8_MAX;
uint8_t x172 = 4U;
static int8_t x343 = -1;
int8_t x477 = -1;
int32_t t13 = -13516620;
volatile int64_t x483 = INT64_MAX;
int32_t t15 = -3;
uint8_t x632 = 17U;
int32_t t17 = -172818;
int64_t x777 = -1LL;
int32_t t22 = -52539;
uint8_t x808 = 22U;
int32_t t23 = -933;
int8_t x835 = INT8_MIN;
uint8_t x884 = 5U;
int32_t x913 = INT32_MAX;
static volatile int32_t x945 = INT32_MIN;
static volatile int16_t x963 = 228;
int32_t t31 = -3757958;
uint8_t x1044 = 8U;
static volatile int32_t t32 = -22;
int32_t x1051 = -29;
int32_t t33 = 163;
int16_t x1157 = INT16_MIN;
static int8_t x1161 = INT8_MIN;
int16_t x1192 = 15;
volatile int64_t x1278 = -1LL;
int32_t t37 = 154924;
int32_t x1290 = INT32_MIN;
static volatile int8_t x1298 = -1;
uint64_t x1309 = 1541875923LLU;
uint32_t x1312 = 0U;
uint8_t x1324 = 7U;
int8_t x1545 = 6;
int64_t x1589 = INT64_MAX;
int64_t x1610 = INT64_MIN;
int32_t t49 = 363836528;
volatile int8_t x1635 = INT8_MIN;
static volatile int32_t x1706 = -416990879;
uint32_t x1707 = UINT32_MAX;
volatile int32_t t53 = -1;
volatile int32_t t54 = -61457;
int64_t x1966 = INT64_MIN;
uint16_t x1984 = 1U;
static int32_t t56 = 4088;
static int64_t x1990 = -516097LL;
int32_t t58 = 15;
int16_t x2091 = INT16_MIN;
int32_t x2233 = INT32_MAX;
static int16_t x2234 = 83;
static int32_t x2249 = INT32_MAX;
int8_t x2262 = INT8_MIN;
uint8_t x2271 = 85U;
int32_t t68 = -7;
volatile uint16_t x2455 = 2672U;
int32_t x2519 = -2739;
uint16_t x2520 = 13U;
int32_t x2582 = -1;
volatile int32_t t78 = 1;
int16_t x2694 = 97;
volatile int64_t x2695 = 548600286867LL;
int32_t t82 = 83;
static volatile int32_t x2771 = INT32_MIN;
uint32_t x2782 = 1280U;
volatile int32_t t85 = 3;
int16_t x2842 = -1;
int32_t t86 = 2;
int8_t x2845 = 17;
int32_t x2857 = -108;
int16_t x2860 = 9;
int32_t t88 = 148;
static volatile int16_t x2919 = INT16_MAX;
static uint16_t x2969 = 29U;
int8_t x3004 = 0;
int16_t x3015 = INT16_MAX;
int8_t x3076 = 1;
static volatile int64_t x3143 = -1LL;
static int16_t x3189 = 4;
uint16_t x3197 = 427U;
uint64_t x3198 = 24342LLU;
static int64_t x3200 = 1LL;
int32_t t97 = -2041;
int8_t x3202 = INT8_MIN;
uint32_t x3245 = 41286U;
static int16_t x3248 = 4;
static uint64_t x3300 = 3LLU;
uint32_t x3342 = UINT32_MAX;
int8_t x3344 = 4;
volatile int32_t t103 = -7;
uint16_t x3425 = 776U;
static int32_t x3427 = INT32_MAX;
uint32_t x3428 = 16U;
volatile int32_t t106 = -71277;
int32_t x3479 = INT32_MAX;
static int32_t x3590 = INT32_MIN;
int16_t x3592 = 1;
volatile int32_t x3641 = INT32_MIN;
int16_t x3643 = INT16_MIN;
int32_t x3723 = INT32_MIN;
int32_t t111 = -165282769;
int32_t x3773 = INT32_MIN;
int32_t t114 = 26902;
uint32_t x3809 = UINT32_MAX;
int8_t x3810 = INT8_MIN;
volatile int32_t t115 = -3;
volatile int8_t x3915 = 19;
uint8_t x3937 = 20U;
int8_t x4012 = 0;
uint32_t x4015 = UINT32_MAX;
int32_t x4026 = INT32_MIN;
volatile int64_t x4071 = -1LL;
uint16_t x4162 = 13U;
volatile uint32_t x4185 = UINT32_MAX;
uint8_t x4187 = 10U;
int32_t x4215 = -29414154;
uint8_t x4216 = 1U;
static int32_t t128 = -60404;
int16_t x4318 = -1;
int8_t x4320 = 1;
int32_t x4346 = INT32_MIN;
uint8_t x4348 = 15U;
int32_t x4460 = 27;
int32_t t132 = 63;
int32_t x4506 = -1;
volatile int32_t t134 = 1339141;
int32_t t135 = -31783;
volatile int8_t x4569 = INT8_MAX;
static uint32_t x4658 = 1U;
int8_t x4670 = INT8_MAX;
volatile int8_t x4680 = 19;
volatile int32_t t139 = 53467;
uint8_t x4704 = 23U;
int64_t x4753 = INT64_MIN;
uint16_t x4793 = 162U;
static volatile int16_t x4795 = 11;
int32_t x4796 = 1;
int64_t x4923 = INT64_MAX;
int32_t t148 = 58695;
volatile int16_t x5065 = -1;
int32_t t150 = -1;
int8_t x5095 = INT8_MIN;
int8_t x5096 = 7;
int32_t t152 = 187104188;
volatile uint16_t x5165 = UINT16_MAX;
int32_t t154 = 435994973;
volatile int32_t x5173 = 7374;
int64_t x5175 = -1LL;
static int64_t x5201 = INT64_MIN;
volatile int32_t x5421 = INT32_MIN;
int32_t x5452 = 27;
int8_t x5476 = 1;
volatile int32_t t161 = -11104;
int16_t x5589 = INT16_MIN;
uint16_t x5592 = 2U;
volatile int16_t x5677 = INT16_MIN;
uint16_t x5680 = 20U;
int32_t t165 = 2340;
int8_t x5692 = 1;
int8_t x5729 = INT8_MAX;
int32_t t168 = 2966840;
uint16_t x5754 = UINT16_MAX;
int16_t x5846 = INT16_MIN;
volatile uint8_t x5848 = 7U;
int64_t x5858 = -8052LL;
int32_t t174 = 889219;
static uint64_t x5893 = UINT64_MAX;
volatile uint8_t x5894 = UINT8_MAX;
volatile int32_t t176 = -2;
int32_t x5955 = INT32_MAX;
volatile int32_t t179 = -3327;
int8_t x6018 = INT8_MAX;
static int32_t x6074 = 539970956;
uint16_t x6117 = UINT16_MAX;
volatile uint16_t x6119 = 479U;
int8_t x6159 = INT8_MAX;
volatile int8_t x6205 = INT8_MIN;
static volatile int8_t x6206 = INT8_MAX;
volatile int32_t x6209 = -1;
static int32_t x6234 = INT32_MIN;
volatile int32_t t189 = -13;
int8_t x6248 = 5;
static int8_t x6299 = 3;
static int8_t x6300 = 1;
int32_t t192 = -5550;
static uint8_t x6344 = 4U;
volatile int8_t x6364 = 1;
volatile int32_t t195 = -47247;
static volatile int32_t t196 = 2065152;
uint16_t x6386 = 72U;
int32_t x6388 = 1;
uint16_t x6424 = 1U;
uint32_t x6427 = 1298938948U;


void f0(void) {
    	int8_t x45 = INT8_MIN;
	int64_t x46 = -1LL;
	uint8_t x47 = 13U;
	volatile int32_t t0 = 389618650;

    t0 = ((x45>(x46|x47))>>x48);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x73 = INT8_MAX;
	int32_t x74 = INT32_MIN;
	int32_t x75 = -997601272;
	int8_t x76 = 7;
	volatile int32_t t1 = 3;

    t1 = ((x73>(x74|x75))>>x76);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x85 = 15;
	int16_t x86 = 1170;
	int64_t x87 = INT64_MIN;
	uint8_t x88 = 5U;
	volatile int32_t t2 = -4482105;

    t2 = ((x85>(x86|x87))>>x88);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x91 = INT16_MIN;
	uint32_t x92 = 2U;
	int32_t t3 = 67569;

    t3 = ((x89>(x90|x91))>>x92);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x105 = -1;
	volatile int32_t x106 = INT32_MAX;
	static int16_t x108 = 0;
	static volatile int32_t t4 = 220115;

    t4 = ((x105>(x106|x107))>>x108);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x141 = INT16_MIN;
	volatile int8_t x142 = INT8_MAX;
	int64_t x143 = 1049557862136922377LL;
	int8_t x144 = 0;
	int32_t t5 = 3450320;

    t5 = ((x141>(x142|x143))>>x144);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x170 = 1U;
	uint8_t x171 = UINT8_MAX;
	int32_t t6 = 953534;

    t6 = ((x169>(x170|x171))>>x172);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x281 = INT32_MAX;
	volatile int32_t x282 = -56;
	int64_t x283 = -111LL;
	static int8_t x284 = 17;
	int32_t t7 = -48562341;

    t7 = ((x281>(x282|x283))>>x284);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x341 = UINT64_MAX;
	int32_t x342 = INT32_MIN;
	int16_t x344 = 24;
	volatile int32_t t8 = 0;

    t8 = ((x341>(x342|x343))>>x344);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x349 = INT16_MAX;
	int32_t x350 = 58912599;
	int8_t x351 = INT8_MIN;
	volatile int8_t x352 = 4;
	int32_t t9 = -1664418;

    t9 = ((x349>(x350|x351))>>x352);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x389 = INT64_MIN;
	static int16_t x390 = INT16_MAX;
	int32_t x391 = INT32_MIN;
	uint16_t x392 = 0U;
	int32_t t10 = -15778947;

    t10 = ((x389>(x390|x391))>>x392);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x393 = 56763413806LL;
	uint16_t x394 = 3006U;
	int16_t x395 = INT16_MAX;
	static int8_t x396 = 0;
	static volatile int32_t t11 = -10594673;

    t11 = ((x393>(x394|x395))>>x396);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x413 = 3832;
	volatile uint64_t x414 = 36LLU;
	static uint16_t x415 = 912U;
	static uint32_t x416 = 5U;
	volatile int32_t t12 = 8452;

    t12 = ((x413>(x414|x415))>>x416);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x478 = -908492LL;
	uint16_t x479 = UINT16_MAX;
	int8_t x480 = 1;

    t13 = ((x477>(x478|x479))>>x480);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x481 = 0;
	uint64_t x482 = 1LLU;
	uint8_t x484 = 1U;
	volatile int32_t t14 = 3443496;

    t14 = ((x481>(x482|x483))>>x484);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x529 = INT32_MAX;
	int64_t x530 = 14128429408LL;
	int64_t x531 = INT64_MAX;
	uint16_t x532 = 0U;

    t15 = ((x529>(x530|x531))>>x532);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x537 = 3U;
	int16_t x538 = INT16_MIN;
	uint16_t x539 = UINT16_MAX;
	volatile int16_t x540 = 1;
	volatile int32_t t16 = 1;

    t16 = ((x537>(x538|x539))>>x540);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x629 = -1LL;
	int32_t x630 = -1;
	uint64_t x631 = 81LLU;

    t17 = ((x629>(x630|x631))>>x632);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x645 = INT64_MIN;
	int32_t x646 = INT32_MAX;
	int8_t x647 = INT8_MIN;
	static volatile int8_t x648 = 11;
	volatile int32_t t18 = 1044530;

    t18 = ((x645>(x646|x647))>>x648);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x697 = INT64_MAX;
	volatile uint16_t x698 = UINT16_MAX;
	int16_t x699 = -161;
	int8_t x700 = 29;
	int32_t t19 = 1;

    t19 = ((x697>(x698|x699))>>x700);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x765 = 1254U;
	int8_t x766 = 3;
	int16_t x767 = INT16_MIN;
	uint16_t x768 = 24U;
	static volatile int32_t t20 = -13;

    t20 = ((x765>(x766|x767))>>x768);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x773 = INT8_MIN;
	volatile int64_t x774 = INT64_MAX;
	int64_t x775 = -1LL;
	uint8_t x776 = 14U;
	volatile int32_t t21 = -1105017;

    t21 = ((x773>(x774|x775))>>x776);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x778 = INT8_MIN;
	int8_t x779 = INT8_MIN;
	static uint8_t x780 = 17U;

    t22 = ((x777>(x778|x779))>>x780);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x805 = 226350444719968LLU;
	uint32_t x806 = 27U;
	int16_t x807 = INT16_MIN;

    t23 = ((x805>(x806|x807))>>x808);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x833 = 1155654LLU;
	int16_t x834 = INT16_MIN;
	static uint64_t x836 = 6LLU;
	int32_t t24 = 1;

    t24 = ((x833>(x834|x835))>>x836);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x881 = 6405U;
	int32_t x882 = INT32_MAX;
	static uint64_t x883 = 414086337LLU;
	volatile int32_t t25 = 980041474;

    t25 = ((x881>(x882|x883))>>x884);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x889 = INT16_MIN;
	int64_t x890 = INT64_MAX;
	int16_t x891 = -1;
	static int16_t x892 = 1;
	volatile int32_t t26 = 507875;

    t26 = ((x889>(x890|x891))>>x892);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x914 = UINT32_MAX;
	static uint8_t x915 = UINT8_MAX;
	static int8_t x916 = 22;
	static int32_t t27 = 6621146;

    t27 = ((x913>(x914|x915))>>x916);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x946 = UINT8_MAX;
	int16_t x947 = INT16_MIN;
	uint16_t x948 = 2U;
	volatile int32_t t28 = 367137;

    t28 = ((x945>(x946|x947))>>x948);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x961 = 23U;
	uint32_t x962 = 2033U;
	static uint8_t x964 = 2U;
	int32_t t29 = -38379127;

    t29 = ((x961>(x962|x963))>>x964);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x985 = INT64_MAX;
	int16_t x986 = INT16_MIN;
	static int16_t x987 = 2;
	uint16_t x988 = 19U;
	int32_t t30 = -173079;

    t30 = ((x985>(x986|x987))>>x988);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x993 = UINT64_MAX;
	uint16_t x994 = 2074U;
	int8_t x995 = -36;
	int16_t x996 = 1;

    t31 = ((x993>(x994|x995))>>x996);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x1041 = 44U;
	static volatile int32_t x1042 = -320050497;
	static int8_t x1043 = -19;

    t32 = ((x1041>(x1042|x1043))>>x1044);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x1049 = UINT32_MAX;
	int32_t x1050 = INT32_MIN;
	int16_t x1052 = 1;

    t33 = ((x1049>(x1050|x1051))>>x1052);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x1158 = -1LL;
	int8_t x1159 = INT8_MIN;
	int8_t x1160 = 1;
	volatile int32_t t34 = 118;

    t34 = ((x1157>(x1158|x1159))>>x1160);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x1162 = 27;
	uint8_t x1163 = 16U;
	uint8_t x1164 = 0U;
	static volatile int32_t t35 = 0;

    t35 = ((x1161>(x1162|x1163))>>x1164);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x1189 = 15052;
	volatile uint64_t x1190 = UINT64_MAX;
	static uint16_t x1191 = 11422U;
	volatile int32_t t36 = -4;

    t36 = ((x1189>(x1190|x1191))>>x1192);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x1277 = UINT8_MAX;
	volatile int64_t x1279 = INT64_MAX;
	volatile uint32_t x1280 = 1U;

    t37 = ((x1277>(x1278|x1279))>>x1280);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x1289 = -1;
	int16_t x1291 = 2568;
	uint8_t x1292 = 0U;
	volatile int32_t t38 = 3810;

    t38 = ((x1289>(x1290|x1291))>>x1292);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x1297 = INT64_MIN;
	int16_t x1299 = -1;
	uint8_t x1300 = 5U;
	volatile int32_t t39 = -26910265;

    t39 = ((x1297>(x1298|x1299))>>x1300);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x1310 = UINT32_MAX;
	static volatile int16_t x1311 = INT16_MIN;
	int32_t t40 = -60;

    t40 = ((x1309>(x1310|x1311))>>x1312);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x1317 = INT16_MAX;
	static volatile uint8_t x1318 = 46U;
	uint8_t x1319 = UINT8_MAX;
	static int8_t x1320 = 0;
	int32_t t41 = 124220;

    t41 = ((x1317>(x1318|x1319))>>x1320);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x1321 = 78U;
	volatile int16_t x1322 = INT16_MIN;
	int32_t x1323 = 8356819;
	volatile int32_t t42 = 1764726;

    t42 = ((x1321>(x1322|x1323))>>x1324);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x1377 = -1;
	int8_t x1378 = INT8_MAX;
	int8_t x1379 = -11;
	int16_t x1380 = 1;
	int32_t t43 = 6415;

    t43 = ((x1377>(x1378|x1379))>>x1380);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x1453 = INT8_MIN;
	int16_t x1454 = INT16_MIN;
	uint16_t x1455 = UINT16_MAX;
	volatile uint8_t x1456 = 19U;
	int32_t t44 = -1153;

    t44 = ((x1453>(x1454|x1455))>>x1456);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x1457 = INT64_MIN;
	int8_t x1458 = INT8_MAX;
	static uint8_t x1459 = UINT8_MAX;
	uint8_t x1460 = 1U;
	int32_t t45 = 3546410;

    t45 = ((x1457>(x1458|x1459))>>x1460);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x1509 = -1840007LL;
	uint32_t x1510 = UINT32_MAX;
	static volatile int64_t x1511 = INT64_MAX;
	uint8_t x1512 = 15U;
	volatile int32_t t46 = -7262629;

    t46 = ((x1509>(x1510|x1511))>>x1512);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x1546 = -2;
	volatile int16_t x1547 = -1;
	static uint16_t x1548 = 1U;
	static volatile int32_t t47 = -25910;

    t47 = ((x1545>(x1546|x1547))>>x1548);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x1590 = -1;
	int16_t x1591 = 0;
	static int32_t x1592 = 5;
	volatile int32_t t48 = -8128;

    t48 = ((x1589>(x1590|x1591))>>x1592);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x1609 = 15;
	int16_t x1611 = INT16_MIN;
	volatile uint16_t x1612 = 2U;

    t49 = ((x1609>(x1610|x1611))>>x1612);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x1633 = -1;
	int32_t x1634 = INT32_MIN;
	volatile uint8_t x1636 = 17U;
	volatile int32_t t50 = -151;

    t50 = ((x1633>(x1634|x1635))>>x1636);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x1641 = INT8_MAX;
	uint16_t x1642 = 52U;
	uint16_t x1643 = 12U;
	int8_t x1644 = 14;
	volatile int32_t t51 = -5;

    t51 = ((x1641>(x1642|x1643))>>x1644);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x1653 = -1166554;
	int32_t x1654 = INT32_MIN;
	int32_t x1655 = -8771;
	uint16_t x1656 = 1U;
	int32_t t52 = -9922;

    t52 = ((x1653>(x1654|x1655))>>x1656);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x1705 = -1;
	int8_t x1708 = 1;

    t53 = ((x1705>(x1706|x1707))>>x1708);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x1833 = INT64_MIN;
	int8_t x1834 = INT8_MAX;
	int16_t x1835 = 7;
	int8_t x1836 = 0;

    t54 = ((x1833>(x1834|x1835))>>x1836);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x1965 = 0U;
	static uint16_t x1967 = 5U;
	volatile int16_t x1968 = 0;
	static int32_t t55 = -21;

    t55 = ((x1965>(x1966|x1967))>>x1968);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x1981 = 1057027LL;
	volatile int32_t x1982 = INT32_MAX;
	int8_t x1983 = INT8_MIN;

    t56 = ((x1981>(x1982|x1983))>>x1984);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x1989 = -23;
	int16_t x1991 = -1;
	uint32_t x1992 = 0U;
	static volatile int32_t t57 = 1262864;

    t57 = ((x1989>(x1990|x1991))>>x1992);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x2041 = -1LL;
	int64_t x2042 = -395LL;
	uint64_t x2043 = 17273367LLU;
	static uint16_t x2044 = 18U;

    t58 = ((x2041>(x2042|x2043))>>x2044);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x2045 = 57U;
	static uint16_t x2046 = 31460U;
	int8_t x2047 = INT8_MIN;
	static int8_t x2048 = 0;
	volatile int32_t t59 = -4247;

    t59 = ((x2045>(x2046|x2047))>>x2048);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x2089 = 381499089U;
	int32_t x2090 = -66992570;
	volatile uint16_t x2092 = 0U;
	static int32_t t60 = 619;

    t60 = ((x2089>(x2090|x2091))>>x2092);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x2109 = 1LL;
	uint16_t x2110 = 15U;
	int8_t x2111 = 1;
	uint64_t x2112 = 2LLU;
	int32_t t61 = -2;

    t61 = ((x2109>(x2110|x2111))>>x2112);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x2221 = UINT16_MAX;
	int32_t x2222 = INT32_MIN;
	uint16_t x2223 = UINT16_MAX;
	static uint8_t x2224 = 5U;
	int32_t t62 = 2916217;

    t62 = ((x2221>(x2222|x2223))>>x2224);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x2235 = 228U;
	int16_t x2236 = 5;
	int32_t t63 = -10757036;

    t63 = ((x2233>(x2234|x2235))>>x2236);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x2250 = UINT8_MAX;
	static uint64_t x2251 = 3932331655LLU;
	int8_t x2252 = 5;
	int32_t t64 = 0;

    t64 = ((x2249>(x2250|x2251))>>x2252);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x2253 = 2LLU;
	int64_t x2254 = INT64_MIN;
	int64_t x2255 = INT64_MAX;
	int64_t x2256 = 0LL;
	static volatile int32_t t65 = 114344;

    t65 = ((x2253>(x2254|x2255))>>x2256);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x2261 = 3545587U;
	int64_t x2263 = INT64_MAX;
	volatile uint8_t x2264 = 0U;
	volatile int32_t t66 = 3;

    t66 = ((x2261>(x2262|x2263))>>x2264);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x2269 = -1;
	static int32_t x2270 = -1;
	uint8_t x2272 = 0U;
	int32_t t67 = -1368874;

    t67 = ((x2269>(x2270|x2271))>>x2272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x2293 = 377854LL;
	static volatile uint16_t x2294 = 99U;
	uint8_t x2295 = UINT8_MAX;
	static uint8_t x2296 = 0U;

    t68 = ((x2293>(x2294|x2295))>>x2296);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x2313 = INT32_MIN;
	int16_t x2314 = 18;
	uint16_t x2315 = 9U;
	uint16_t x2316 = 26U;
	int32_t t69 = 11698;

    t69 = ((x2313>(x2314|x2315))>>x2316);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x2373 = 31263U;
	int32_t x2374 = INT32_MIN;
	int64_t x2375 = INT64_MIN;
	static uint16_t x2376 = 9U;
	int32_t t70 = -353;

    t70 = ((x2373>(x2374|x2375))>>x2376);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x2437 = INT32_MIN;
	int64_t x2438 = INT64_MIN;
	uint8_t x2439 = UINT8_MAX;
	static uint8_t x2440 = 17U;
	int32_t t71 = 984;

    t71 = ((x2437>(x2438|x2439))>>x2440);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x2453 = 49;
	int16_t x2454 = INT16_MIN;
	static volatile uint32_t x2456 = 0U;
	volatile int32_t t72 = 1;

    t72 = ((x2453>(x2454|x2455))>>x2456);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x2457 = INT8_MIN;
	uint32_t x2458 = 129840196U;
	volatile int8_t x2459 = -1;
	static uint8_t x2460 = 13U;
	volatile int32_t t73 = 12;

    t73 = ((x2457>(x2458|x2459))>>x2460);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x2489 = UINT16_MAX;
	int16_t x2490 = INT16_MAX;
	uint16_t x2491 = UINT16_MAX;
	uint16_t x2492 = 31U;
	int32_t t74 = 1114;

    t74 = ((x2489>(x2490|x2491))>>x2492);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x2517 = -1;
	volatile int64_t x2518 = INT64_MIN;
	volatile int32_t t75 = 3969200;

    t75 = ((x2517>(x2518|x2519))>>x2520);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x2537 = 7995;
	volatile int8_t x2538 = -1;
	volatile uint32_t x2539 = 13166U;
	volatile int16_t x2540 = 13;
	int32_t t76 = 4896179;

    t76 = ((x2537>(x2538|x2539))>>x2540);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x2577 = UINT16_MAX;
	uint64_t x2578 = 33580352LLU;
	static uint16_t x2579 = UINT16_MAX;
	static volatile uint16_t x2580 = 2U;
	volatile int32_t t77 = 3887413;

    t77 = ((x2577>(x2578|x2579))>>x2580);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x2581 = INT16_MAX;
	uint32_t x2583 = 47342U;
	volatile int8_t x2584 = 0;

    t78 = ((x2581>(x2582|x2583))>>x2584);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x2693 = 903561312U;
	uint8_t x2696 = 5U;
	int32_t t79 = -420554417;

    t79 = ((x2693>(x2694|x2695))>>x2696);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x2717 = 5373715U;
	uint16_t x2718 = UINT16_MAX;
	int32_t x2719 = INT32_MIN;
	int16_t x2720 = 7;
	int32_t t80 = 107324493;

    t80 = ((x2717>(x2718|x2719))>>x2720);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x2729 = -48064986;
	static int32_t x2730 = INT32_MAX;
	int16_t x2731 = INT16_MAX;
	int32_t x2732 = 24;
	int32_t t81 = 7;

    t81 = ((x2729>(x2730|x2731))>>x2732);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x2761 = UINT16_MAX;
	int64_t x2762 = -2124095822981LL;
	int64_t x2763 = INT64_MIN;
	uint8_t x2764 = 3U;

    t82 = ((x2761>(x2762|x2763))>>x2764);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x2769 = -1;
	int16_t x2770 = -1;
	volatile uint8_t x2772 = 1U;
	static volatile int32_t t83 = 40064;

    t83 = ((x2769>(x2770|x2771))>>x2772);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x2781 = 0;
	int16_t x2783 = INT16_MIN;
	static uint32_t x2784 = 8U;
	static int32_t t84 = -1;

    t84 = ((x2781>(x2782|x2783))>>x2784);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x2817 = UINT32_MAX;
	int64_t x2818 = -4385447010775LL;
	volatile uint8_t x2819 = 4U;
	static uint8_t x2820 = 0U;

    t85 = ((x2817>(x2818|x2819))>>x2820);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x2841 = INT64_MIN;
	int64_t x2843 = 129070218LL;
	static volatile int16_t x2844 = 1;

    t86 = ((x2841>(x2842|x2843))>>x2844);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x2846 = 29U;
	static int32_t x2847 = -1;
	static uint32_t x2848 = 1U;
	int32_t t87 = 15001333;

    t87 = ((x2845>(x2846|x2847))>>x2848);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x2858 = 7;
	uint64_t x2859 = 288LLU;

    t88 = ((x2857>(x2858|x2859))>>x2860);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x2917 = INT16_MIN;
	int64_t x2918 = INT64_MIN;
	uint64_t x2920 = 3LLU;
	int32_t t89 = -956;

    t89 = ((x2917>(x2918|x2919))>>x2920);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x2970 = 94345368;
	int32_t x2971 = -1;
	uint8_t x2972 = 5U;
	static volatile int32_t t90 = 4556;

    t90 = ((x2969>(x2970|x2971))>>x2972);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x3001 = UINT64_MAX;
	int32_t x3002 = -1;
	int8_t x3003 = -17;
	static volatile int32_t t91 = 91205;

    t91 = ((x3001>(x3002|x3003))>>x3004);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x3013 = 1;
	int32_t x3014 = -1;
	volatile uint8_t x3016 = 9U;
	int32_t t92 = -24;

    t92 = ((x3013>(x3014|x3015))>>x3016);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x3073 = INT8_MAX;
	int16_t x3074 = -7824;
	volatile int16_t x3075 = INT16_MIN;
	int32_t t93 = -3398;

    t93 = ((x3073>(x3074|x3075))>>x3076);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x3097 = UINT8_MAX;
	int16_t x3098 = 1;
	uint8_t x3099 = UINT8_MAX;
	uint8_t x3100 = 24U;
	int32_t t94 = 688;

    t94 = ((x3097>(x3098|x3099))>>x3100);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x3141 = -27;
	int32_t x3142 = 0;
	int8_t x3144 = 19;
	volatile int32_t t95 = 830938727;

    t95 = ((x3141>(x3142|x3143))>>x3144);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x3190 = 8U;
	volatile int32_t x3191 = -1;
	int32_t x3192 = 12;
	int32_t t96 = -38966;

    t96 = ((x3189>(x3190|x3191))>>x3192);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x3199 = 209;

    t97 = ((x3197>(x3198|x3199))>>x3200);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x3201 = UINT16_MAX;
	int64_t x3203 = -1LL;
	volatile uint8_t x3204 = 1U;
	int32_t t98 = 3013;

    t98 = ((x3201>(x3202|x3203))>>x3204);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x3246 = 53906611491680212LLU;
	static uint8_t x3247 = 96U;
	volatile int32_t t99 = 166921;

    t99 = ((x3245>(x3246|x3247))>>x3248);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x3293 = INT16_MIN;
	int32_t x3294 = -1;
	int64_t x3295 = -1LL;
	static uint16_t x3296 = 31U;
	volatile int32_t t100 = 513178;

    t100 = ((x3293>(x3294|x3295))>>x3296);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x3297 = 14U;
	static int8_t x3298 = INT8_MAX;
	uint32_t x3299 = 278U;
	int32_t t101 = -5330;

    t101 = ((x3297>(x3298|x3299))>>x3300);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x3341 = 24U;
	int8_t x3343 = -30;
	volatile int32_t t102 = 401;

    t102 = ((x3341>(x3342|x3343))>>x3344);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x3345 = UINT8_MAX;
	volatile int16_t x3346 = INT16_MAX;
	static uint8_t x3347 = 4U;
	uint32_t x3348 = 0U;

    t103 = ((x3345>(x3346|x3347))>>x3348);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint8_t x3373 = 24U;
	volatile int8_t x3374 = INT8_MAX;
	int64_t x3375 = INT64_MIN;
	int8_t x3376 = 0;
	volatile int32_t t104 = 9839;

    t104 = ((x3373>(x3374|x3375))>>x3376);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x3413 = 59U;
	volatile int32_t x3414 = -1;
	uint8_t x3415 = 0U;
	uint8_t x3416 = 8U;
	int32_t t105 = -315777;

    t105 = ((x3413>(x3414|x3415))>>x3416);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x3426 = -1LL;

    t106 = ((x3425>(x3426|x3427))>>x3428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x3477 = 563U;
	int64_t x3478 = -1LL;
	volatile uint8_t x3480 = 14U;
	int32_t t107 = 646;

    t107 = ((x3477>(x3478|x3479))>>x3480);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x3589 = 16211173623LLU;
	static int32_t x3591 = INT32_MAX;
	volatile int32_t t108 = -9561;

    t108 = ((x3589>(x3590|x3591))>>x3592);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x3642 = INT32_MIN;
	uint32_t x3644 = 6U;
	volatile int32_t t109 = 11;

    t109 = ((x3641>(x3642|x3643))>>x3644);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x3721 = -14143511913090LL;
	uint64_t x3722 = 89761535455659712LLU;
	int64_t x3724 = 3LL;
	int32_t t110 = 27;

    t110 = ((x3721>(x3722|x3723))>>x3724);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x3725 = 195532806813971LLU;
	int16_t x3726 = -1;
	int8_t x3727 = 0;
	static volatile int16_t x3728 = 2;

    t111 = ((x3725>(x3726|x3727))>>x3728);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x3774 = INT16_MIN;
	volatile uint32_t x3775 = 61692U;
	static int64_t x3776 = 31LL;
	static volatile int32_t t112 = 252;

    t112 = ((x3773>(x3774|x3775))>>x3776);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int64_t x3781 = INT64_MIN;
	volatile int32_t x3782 = -1;
	uint32_t x3783 = 1094233856U;
	int8_t x3784 = 4;
	volatile int32_t t113 = -232755127;

    t113 = ((x3781>(x3782|x3783))>>x3784);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x3797 = 259171LLU;
	uint32_t x3798 = 28U;
	int8_t x3799 = INT8_MIN;
	volatile uint32_t x3800 = 6U;

    t114 = ((x3797>(x3798|x3799))>>x3800);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x3811 = INT16_MIN;
	uint16_t x3812 = 30U;

    t115 = ((x3809>(x3810|x3811))>>x3812);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x3853 = INT16_MAX;
	static int64_t x3854 = INT64_MAX;
	int8_t x3855 = -1;
	uint64_t x3856 = 18LLU;
	volatile int32_t t116 = -49042;

    t116 = ((x3853>(x3854|x3855))>>x3856);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x3901 = 5;
	int8_t x3902 = -1;
	static volatile int32_t x3903 = 130645;
	static volatile int8_t x3904 = 0;
	volatile int32_t t117 = 0;

    t117 = ((x3901>(x3902|x3903))>>x3904);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x3913 = INT16_MAX;
	int64_t x3914 = INT64_MAX;
	volatile uint32_t x3916 = 7U;
	volatile int32_t t118 = -1520;

    t118 = ((x3913>(x3914|x3915))>>x3916);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x3938 = INT32_MIN;
	volatile int32_t x3939 = INT32_MAX;
	uint16_t x3940 = 4U;
	int32_t t119 = -86;

    t119 = ((x3937>(x3938|x3939))>>x3940);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int16_t x4009 = INT16_MIN;
	int16_t x4010 = INT16_MAX;
	int32_t x4011 = INT32_MIN;
	static volatile int32_t t120 = -1756470;

    t120 = ((x4009>(x4010|x4011))>>x4012);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x4013 = 892196506U;
	uint16_t x4014 = 9U;
	uint16_t x4016 = 3U;
	int32_t t121 = -1;

    t121 = ((x4013>(x4014|x4015))>>x4016);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x4025 = INT8_MIN;
	volatile int64_t x4027 = INT64_MAX;
	uint8_t x4028 = 3U;
	int32_t t122 = 740093;

    t122 = ((x4025>(x4026|x4027))>>x4028);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x4069 = INT64_MIN;
	uint64_t x4070 = UINT64_MAX;
	uint16_t x4072 = 15U;
	volatile int32_t t123 = -8398;

    t123 = ((x4069>(x4070|x4071))>>x4072);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x4161 = INT32_MIN;
	uint32_t x4163 = UINT32_MAX;
	static int16_t x4164 = 1;
	static int32_t t124 = 6;

    t124 = ((x4161>(x4162|x4163))>>x4164);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x4169 = INT32_MIN;
	static int64_t x4170 = -4LL;
	static uint32_t x4171 = 459341U;
	int32_t x4172 = 30;
	static volatile int32_t t125 = 319;

    t125 = ((x4169>(x4170|x4171))>>x4172);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x4186 = 45;
	static uint8_t x4188 = 16U;
	static int32_t t126 = -485590;

    t126 = ((x4185>(x4186|x4187))>>x4188);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x4213 = 2984614;
	static int16_t x4214 = 14630;
	int32_t t127 = 7;

    t127 = ((x4213>(x4214|x4215))>>x4216);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x4217 = INT32_MAX;
	int32_t x4218 = -6980865;
	uint32_t x4219 = 289365U;
	uint8_t x4220 = 9U;

    t128 = ((x4217>(x4218|x4219))>>x4220);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x4317 = INT32_MIN;
	int64_t x4319 = -1LL;
	static volatile int32_t t129 = 3295112;

    t129 = ((x4317>(x4318|x4319))>>x4320);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x4345 = INT64_MIN;
	volatile int64_t x4347 = 1268818537559246LL;
	int32_t t130 = 54;

    t130 = ((x4345>(x4346|x4347))>>x4348);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x4397 = -1;
	static volatile int64_t x4398 = 953758119361977586LL;
	int32_t x4399 = INT32_MIN;
	int8_t x4400 = 1;
	int32_t t131 = 47;

    t131 = ((x4397>(x4398|x4399))>>x4400);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x4457 = 8335181763536842629LLU;
	static int16_t x4458 = -1;
	int32_t x4459 = 24884452;

    t132 = ((x4457>(x4458|x4459))>>x4460);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x4477 = -4282564757250961893LL;
	static uint8_t x4478 = UINT8_MAX;
	volatile int16_t x4479 = -1;
	volatile int32_t x4480 = 0;
	volatile int32_t t133 = -1;

    t133 = ((x4477>(x4478|x4479))>>x4480);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x4505 = UINT16_MAX;
	volatile uint8_t x4507 = 33U;
	volatile int8_t x4508 = 3;

    t134 = ((x4505>(x4506|x4507))>>x4508);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x4521 = INT8_MIN;
	uint8_t x4522 = 82U;
	uint64_t x4523 = 262579318871LLU;
	static int8_t x4524 = 14;

    t135 = ((x4521>(x4522|x4523))>>x4524);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x4570 = -34605035791585LL;
	uint64_t x4571 = 3440920LLU;
	int8_t x4572 = 12;
	volatile int32_t t136 = -951902;

    t136 = ((x4569>(x4570|x4571))>>x4572);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x4657 = UINT16_MAX;
	int16_t x4659 = INT16_MIN;
	uint8_t x4660 = 15U;
	volatile int32_t t137 = -2813;

    t137 = ((x4657>(x4658|x4659))>>x4660);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint64_t x4669 = 3483LLU;
	int64_t x4671 = INT64_MIN;
	static int16_t x4672 = 0;
	int32_t t138 = 1083;

    t138 = ((x4669>(x4670|x4671))>>x4672);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int8_t x4677 = INT8_MIN;
	int32_t x4678 = INT32_MIN;
	int16_t x4679 = -1;

    t139 = ((x4677>(x4678|x4679))>>x4680);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x4685 = -1;
	static int64_t x4686 = -3256631198381810LL;
	volatile int32_t x4687 = 717;
	uint32_t x4688 = 15U;
	volatile int32_t t140 = -7083;

    t140 = ((x4685>(x4686|x4687))>>x4688);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x4701 = -12;
	int16_t x4702 = INT16_MIN;
	int16_t x4703 = INT16_MAX;
	int32_t t141 = 3843;

    t141 = ((x4701>(x4702|x4703))>>x4704);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x4713 = -1;
	volatile int16_t x4714 = INT16_MIN;
	uint32_t x4715 = UINT32_MAX;
	int8_t x4716 = 1;
	int32_t t142 = 55;

    t142 = ((x4713>(x4714|x4715))>>x4716);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x4754 = -3686561;
	uint32_t x4755 = UINT32_MAX;
	volatile uint8_t x4756 = 14U;
	int32_t t143 = -3865251;

    t143 = ((x4753>(x4754|x4755))>>x4756);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x4765 = -1;
	volatile int32_t x4766 = INT32_MIN;
	int64_t x4767 = 6607LL;
	uint8_t x4768 = 28U;
	volatile int32_t t144 = -72;

    t144 = ((x4765>(x4766|x4767))>>x4768);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x4769 = 504715947;
	volatile int16_t x4770 = -1;
	volatile uint16_t x4771 = UINT16_MAX;
	uint8_t x4772 = 11U;
	int32_t t145 = 28487;

    t145 = ((x4769>(x4770|x4771))>>x4772);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x4794 = 52393622347617LLU;
	volatile int32_t t146 = -70;

    t146 = ((x4793>(x4794|x4795))>>x4796);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x4913 = 16U;
	int64_t x4914 = -1LL;
	static uint64_t x4915 = 317LLU;
	uint32_t x4916 = 2U;
	volatile int32_t t147 = 283680;

    t147 = ((x4913>(x4914|x4915))>>x4916);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x4921 = INT64_MAX;
	int8_t x4922 = INT8_MIN;
	static volatile int8_t x4924 = 0;

    t148 = ((x4921>(x4922|x4923))>>x4924);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x4941 = -1LL;
	int64_t x4942 = 10209LL;
	int64_t x4943 = -1LL;
	static volatile uint8_t x4944 = 4U;
	volatile int32_t t149 = 8;

    t149 = ((x4941>(x4942|x4943))>>x4944);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x5066 = -1LL;
	uint8_t x5067 = 9U;
	int8_t x5068 = 1;

    t150 = ((x5065>(x5066|x5067))>>x5068);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x5093 = UINT64_MAX;
	int16_t x5094 = -912;
	int32_t t151 = -96483;

    t151 = ((x5093>(x5094|x5095))>>x5096);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x5097 = INT64_MIN;
	uint32_t x5098 = 259787U;
	static int32_t x5099 = INT32_MIN;
	int32_t x5100 = 0;

    t152 = ((x5097>(x5098|x5099))>>x5100);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x5133 = 123U;
	uint64_t x5134 = UINT64_MAX;
	uint64_t x5135 = 344779LLU;
	uint8_t x5136 = 1U;
	volatile int32_t t153 = 326187348;

    t153 = ((x5133>(x5134|x5135))>>x5136);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x5166 = INT32_MIN;
	static int16_t x5167 = -1184;
	uint8_t x5168 = 1U;

    t154 = ((x5165>(x5166|x5167))>>x5168);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x5174 = UINT64_MAX;
	int8_t x5176 = 1;
	volatile int32_t t155 = -977319;

    t155 = ((x5173>(x5174|x5175))>>x5176);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x5202 = 14364LLU;
	volatile uint64_t x5203 = 24880LLU;
	volatile int8_t x5204 = 1;
	int32_t t156 = -8;

    t156 = ((x5201>(x5202|x5203))>>x5204);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x5333 = INT32_MAX;
	static int16_t x5334 = INT16_MAX;
	int64_t x5335 = -2421544463LL;
	int8_t x5336 = 3;
	int32_t t157 = 2;

    t157 = ((x5333>(x5334|x5335))>>x5336);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x5422 = -1;
	int32_t x5423 = 96;
	uint8_t x5424 = 1U;
	volatile int32_t t158 = 10000;

    t158 = ((x5421>(x5422|x5423))>>x5424);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x5449 = -1;
	volatile int16_t x5450 = INT16_MAX;
	volatile int16_t x5451 = INT16_MIN;
	int32_t t159 = 52068410;

    t159 = ((x5449>(x5450|x5451))>>x5452);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x5473 = INT64_MIN;
	volatile int64_t x5474 = -1LL;
	uint8_t x5475 = UINT8_MAX;
	volatile int32_t t160 = 3;

    t160 = ((x5473>(x5474|x5475))>>x5476);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x5553 = 2U;
	uint32_t x5554 = UINT32_MAX;
	volatile uint16_t x5555 = UINT16_MAX;
	uint32_t x5556 = 9U;

    t161 = ((x5553>(x5554|x5555))>>x5556);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x5590 = UINT64_MAX;
	static uint8_t x5591 = UINT8_MAX;
	int32_t t162 = -12060710;

    t162 = ((x5589>(x5590|x5591))>>x5592);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x5649 = UINT8_MAX;
	volatile uint8_t x5650 = 86U;
	int16_t x5651 = 1;
	int8_t x5652 = 0;
	volatile int32_t t163 = 60;

    t163 = ((x5649>(x5650|x5651))>>x5652);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x5653 = -1;
	static int16_t x5654 = 25;
	int16_t x5655 = -1;
	static volatile uint8_t x5656 = 20U;
	int32_t t164 = 3968;

    t164 = ((x5653>(x5654|x5655))>>x5656);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x5678 = -21;
	int32_t x5679 = 1;

    t165 = ((x5677>(x5678|x5679))>>x5680);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x5689 = 2U;
	volatile int64_t x5690 = 22820886LL;
	int8_t x5691 = -1;
	static volatile int32_t t166 = -63925877;

    t166 = ((x5689>(x5690|x5691))>>x5692);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x5693 = -1;
	volatile uint32_t x5694 = 86U;
	uint16_t x5695 = 254U;
	volatile int8_t x5696 = 1;
	int32_t t167 = -4062;

    t167 = ((x5693>(x5694|x5695))>>x5696);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x5730 = 41;
	uint8_t x5731 = UINT8_MAX;
	uint8_t x5732 = 1U;

    t168 = ((x5729>(x5730|x5731))>>x5732);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x5753 = INT32_MIN;
	volatile uint64_t x5755 = 36164773LLU;
	static volatile uint8_t x5756 = 25U;
	int32_t t169 = 5085;

    t169 = ((x5753>(x5754|x5755))>>x5756);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x5765 = -1LL;
	int16_t x5766 = 0;
	int64_t x5767 = INT64_MAX;
	static int16_t x5768 = 3;
	static int32_t t170 = 0;

    t170 = ((x5765>(x5766|x5767))>>x5768);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x5789 = -1LL;
	int64_t x5790 = INT64_MIN;
	uint32_t x5791 = 16U;
	volatile uint32_t x5792 = 15U;
	volatile int32_t t171 = 29;

    t171 = ((x5789>(x5790|x5791))>>x5792);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x5837 = -1;
	int8_t x5838 = INT8_MAX;
	int16_t x5839 = INT16_MIN;
	uint16_t x5840 = 7U;
	int32_t t172 = -1;

    t172 = ((x5837>(x5838|x5839))>>x5840);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x5845 = 1;
	uint16_t x5847 = UINT16_MAX;
	static volatile int32_t t173 = 12937985;

    t173 = ((x5845>(x5846|x5847))>>x5848);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x5857 = INT8_MAX;
	volatile int16_t x5859 = -3;
	uint8_t x5860 = 12U;

    t174 = ((x5857>(x5858|x5859))>>x5860);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x5877 = 71U;
	volatile int64_t x5878 = INT64_MIN;
	static int8_t x5879 = -1;
	uint8_t x5880 = 13U;
	int32_t t175 = 5677;

    t175 = ((x5877>(x5878|x5879))>>x5880);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x5895 = 1063708150U;
	volatile int16_t x5896 = 14;

    t176 = ((x5893>(x5894|x5895))>>x5896);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x5897 = 14U;
	static int8_t x5898 = INT8_MIN;
	volatile uint8_t x5899 = 45U;
	static uint16_t x5900 = 1U;
	volatile int32_t t177 = 4;

    t177 = ((x5897>(x5898|x5899))>>x5900);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x5953 = INT16_MIN;
	volatile int32_t x5954 = INT32_MIN;
	volatile uint8_t x5956 = 3U;
	static int32_t t178 = 27;

    t178 = ((x5953>(x5954|x5955))>>x5956);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x5973 = INT64_MAX;
	uint16_t x5974 = UINT16_MAX;
	volatile int64_t x5975 = INT64_MIN;
	int16_t x5976 = 8;

    t179 = ((x5973>(x5974|x5975))>>x5976);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x6005 = 14U;
	int32_t x6006 = -1;
	int64_t x6007 = 6794751758LL;
	static uint64_t x6008 = 25LLU;
	volatile int32_t t180 = -5167616;

    t180 = ((x6005>(x6006|x6007))>>x6008);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x6017 = 37U;
	int64_t x6019 = INT64_MAX;
	int8_t x6020 = 3;
	int32_t t181 = 3038;

    t181 = ((x6017>(x6018|x6019))>>x6020);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x6037 = 550197U;
	static int64_t x6038 = INT64_MIN;
	volatile int32_t x6039 = INT32_MIN;
	int8_t x6040 = 12;
	int32_t t182 = -2;

    t182 = ((x6037>(x6038|x6039))>>x6040);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x6073 = INT16_MIN;
	static uint32_t x6075 = UINT32_MAX;
	volatile int16_t x6076 = 0;
	int32_t t183 = 5610;

    t183 = ((x6073>(x6074|x6075))>>x6076);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x6118 = -1;
	int16_t x6120 = 5;
	volatile int32_t t184 = -25843837;

    t184 = ((x6117>(x6118|x6119))>>x6120);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x6133 = INT16_MIN;
	volatile int8_t x6134 = 0;
	static volatile uint64_t x6135 = 552216678199245817LLU;
	static volatile uint32_t x6136 = 10U;
	int32_t t185 = -840916722;

    t185 = ((x6133>(x6134|x6135))>>x6136);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int8_t x6157 = -44;
	int8_t x6158 = -1;
	static int8_t x6160 = 7;
	static int32_t t186 = 1;

    t186 = ((x6157>(x6158|x6159))>>x6160);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x6207 = INT16_MAX;
	volatile uint8_t x6208 = 4U;
	static int32_t t187 = 101532009;

    t187 = ((x6205>(x6206|x6207))>>x6208);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x6210 = -1;
	static int8_t x6211 = 0;
	volatile int8_t x6212 = 22;
	volatile int32_t t188 = -445;

    t188 = ((x6209>(x6210|x6211))>>x6212);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x6233 = INT64_MIN;
	static int32_t x6235 = INT32_MAX;
	volatile int8_t x6236 = 4;

    t189 = ((x6233>(x6234|x6235))>>x6236);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x6245 = INT16_MIN;
	static volatile int16_t x6246 = 2;
	int16_t x6247 = INT16_MIN;
	volatile int32_t t190 = 678;

    t190 = ((x6245>(x6246|x6247))>>x6248);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x6297 = INT64_MAX;
	uint64_t x6298 = UINT64_MAX;
	volatile int32_t t191 = -98633;

    t191 = ((x6297>(x6298|x6299))>>x6300);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x6313 = -1LL;
	uint8_t x6314 = 8U;
	uint8_t x6315 = 0U;
	uint8_t x6316 = 17U;

    t192 = ((x6313>(x6314|x6315))>>x6316);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x6341 = 1142747249022227LLU;
	int64_t x6342 = INT64_MAX;
	uint64_t x6343 = 3739629265752033LLU;
	int32_t t193 = 821426;

    t193 = ((x6341>(x6342|x6343))>>x6344);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x6349 = 3;
	uint16_t x6350 = 783U;
	static uint64_t x6351 = 459578746459LLU;
	volatile uint8_t x6352 = 3U;
	int32_t t194 = -10790;

    t194 = ((x6349>(x6350|x6351))>>x6352);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x6361 = 14;
	volatile int8_t x6362 = -1;
	uint32_t x6363 = 37U;

    t195 = ((x6361>(x6362|x6363))>>x6364);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x6373 = -9;
	uint64_t x6374 = 472680792954231LLU;
	static uint8_t x6375 = UINT8_MAX;
	static int64_t x6376 = 21LL;

    t196 = ((x6373>(x6374|x6375))>>x6376);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x6385 = 61;
	static uint16_t x6387 = 130U;
	int32_t t197 = -10040806;

    t197 = ((x6385>(x6386|x6387))>>x6388);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x6421 = 1U;
	static volatile int8_t x6422 = 11;
	int64_t x6423 = INT64_MIN;
	static int32_t t198 = 156876433;

    t198 = ((x6421>(x6422|x6423))>>x6424);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x6425 = -1290604953LL;
	volatile int8_t x6426 = 3;
	volatile int8_t x6428 = 11;
	volatile int32_t t199 = 4;

    t199 = ((x6425>(x6426|x6427))>>x6428);

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


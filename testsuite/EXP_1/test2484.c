
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

static uint32_t x9 = 0U;
uint8_t x24 = 0U;
int8_t x87 = INT8_MIN;
int16_t x125 = INT16_MAX;
static uint16_t x126 = UINT16_MAX;
uint16_t x211 = 27108U;
int32_t t4 = -805767643;
static volatile int32_t t5 = -13465196;
int16_t x233 = INT16_MIN;
int16_t x236 = 19;
int64_t x257 = INT64_MAX;
volatile int64_t x259 = -252237316143180LL;
int64_t x310 = INT64_MIN;
int16_t x350 = 56;
uint8_t x352 = 9U;
int32_t x469 = INT32_MIN;
uint16_t x506 = 0U;
int64_t x545 = INT64_MIN;
static int32_t x546 = INT32_MAX;
static uint16_t x602 = 9U;
int64_t x610 = -114304402735403LL;
static volatile int32_t t20 = 19;
int32_t x647 = -1;
int8_t x805 = INT8_MIN;
int32_t t23 = 58681139;
uint32_t x865 = 1285U;
static int16_t x887 = 7;
int32_t x901 = INT32_MAX;
static volatile int32_t t27 = 246211402;
int16_t x958 = INT16_MAX;
static int16_t x1033 = -1;
static int8_t x1055 = INT8_MIN;
static uint8_t x1108 = 1U;
int64_t x1115 = -6LL;
static int16_t x1146 = INT16_MAX;
static uint32_t x1147 = 2U;
uint8_t x1224 = 1U;
static int16_t x1318 = INT16_MIN;
uint32_t x1323 = UINT32_MAX;
int16_t x1336 = 25;
uint8_t x1358 = 3U;
int8_t x1518 = -37;
volatile int32_t t48 = 415031;
uint16_t x1556 = 3U;
int8_t x1560 = 0;
int8_t x1563 = INT8_MIN;
int16_t x1607 = 7595;
volatile int32_t t52 = 94;
uint16_t x1621 = 0U;
uint32_t x1622 = UINT32_MAX;
volatile int32_t t53 = 969230630;
volatile int8_t x1644 = 7;
static volatile int64_t x1685 = INT64_MIN;
volatile int16_t x1686 = -1;
int64_t x1751 = 10541077565301LL;
int64_t x1774 = INT64_MAX;
int8_t x1780 = 5;
uint64_t x1782 = 194499197919481246LLU;
int64_t x1791 = INT64_MIN;
int8_t x1792 = 1;
int16_t x1838 = -1;
volatile uint32_t x1859 = 6461084U;
int16_t x1875 = 15;
volatile int32_t t64 = 9873806;
volatile int32_t x1897 = INT32_MIN;
uint32_t x1914 = 3834U;
volatile int32_t t66 = -15;
uint64_t x1925 = 91157037670LLU;
volatile int16_t x1926 = INT16_MAX;
int32_t t68 = 26549;
static volatile int32_t t69 = -488262;
int32_t x2003 = INT32_MIN;
volatile uint64_t x2014 = 34LLU;
int16_t x2033 = -1;
uint32_t x2034 = 706999U;
int16_t x2035 = -13651;
int32_t x2138 = -1;
uint64_t x2293 = UINT64_MAX;
static uint32_t x2295 = 91836U;
int32_t t79 = -524034;
int32_t x2324 = 1;
volatile int32_t t80 = -11;
static int32_t x2355 = -682643440;
uint8_t x2358 = 88U;
volatile int32_t t82 = 59052;
static uint8_t x2404 = 3U;
int16_t x2468 = 25;
int32_t t85 = -213308541;
volatile uint16_t x2479 = 13U;
volatile int16_t x2482 = INT16_MIN;
static uint32_t x2527 = 1148258U;
int32_t x2595 = INT32_MIN;
uint16_t x2764 = 3U;
volatile int32_t t93 = -170930846;
uint32_t x2797 = 4811U;
int32_t t95 = -19;
static uint64_t x3059 = UINT64_MAX;
uint16_t x3125 = UINT16_MAX;
volatile int32_t t99 = 967883476;
volatile int32_t x3143 = INT32_MIN;
uint64_t x3243 = 37009415LLU;
int32_t t102 = -451486;
uint32_t x3261 = 1950U;
uint32_t x3281 = 31468974U;
volatile int32_t t104 = 20;
uint32_t x3362 = UINT32_MAX;
uint8_t x3364 = 0U;
int16_t x3400 = 3;
uint16_t x3413 = UINT16_MAX;
uint8_t x3414 = UINT8_MAX;
volatile uint8_t x3415 = 4U;
static uint32_t x3416 = 0U;
static int16_t x3471 = INT16_MIN;
uint64_t x3517 = 201124920675LLU;
static volatile int32_t t115 = -34380;
uint32_t x3551 = 7360664U;
uint64_t x3569 = UINT64_MAX;
volatile uint64_t x3572 = 0LLU;
int32_t x3650 = -1;
static volatile int16_t x3651 = INT16_MAX;
int16_t x3652 = 0;
int32_t x3661 = 47487;
static int16_t x3679 = -1;
static volatile int8_t x3707 = 0;
uint16_t x3777 = UINT16_MAX;
int8_t x3780 = 0;
int32_t x3850 = INT32_MIN;
int32_t t126 = -6;
uint8_t x3920 = 6U;
int64_t x3956 = 0LL;
volatile int64_t x3971 = INT64_MIN;
static volatile int8_t x3992 = 1;
static uint8_t x4044 = 29U;
int32_t t134 = 1317;
uint32_t x4066 = 1U;
int16_t x4121 = -1;
int32_t x4170 = 432167433;
int8_t x4175 = INT8_MAX;
static uint8_t x4180 = 14U;
uint16_t x4185 = 1U;
volatile int32_t t146 = 463;
volatile int32_t t147 = -10;
volatile uint64_t x4289 = 71308LLU;
volatile uint32_t x4290 = 2U;
int32_t x4297 = INT32_MIN;
volatile uint32_t x4299 = 4391599U;
int32_t t149 = 1;
uint64_t x4367 = UINT64_MAX;
static int16_t x4422 = INT16_MIN;
uint16_t x4533 = UINT16_MAX;
int32_t x4535 = INT32_MIN;
uint16_t x4536 = 11U;
uint16_t x4552 = 6U;
uint8_t x4586 = UINT8_MAX;
uint32_t x4588 = 2U;
uint8_t x4620 = 15U;
volatile int32_t t158 = -25165145;
int8_t x4636 = 1;
int64_t x4649 = -1736634LL;
int16_t x4671 = INT16_MAX;
volatile int32_t t164 = -8;
int16_t x4764 = 4;
int8_t x4791 = INT8_MIN;
int16_t x4813 = -4784;
static int32_t x4815 = INT32_MAX;
int32_t t170 = 441;
int32_t x4852 = 0;
volatile int32_t t171 = -234;
int32_t x4883 = -3355370;
int32_t t172 = 2017185;
int16_t x4910 = INT16_MIN;
static volatile int32_t t175 = 29;
int8_t x5059 = -1;
volatile int32_t t177 = -2333051;
int32_t t178 = 8075;
volatile uint16_t x5169 = 8094U;
int32_t t179 = -15;
static int64_t x5241 = -1LL;
volatile int8_t x5286 = INT8_MIN;
volatile int8_t x5303 = INT8_MIN;
uint8_t x5324 = 1U;
int32_t x5351 = 1121585;
volatile uint64_t x5399 = 343278039165651LLU;
int32_t x5405 = INT32_MIN;
static volatile int8_t x5408 = 13;
int64_t x5415 = INT64_MAX;
volatile int64_t x5504 = 14LL;
uint8_t x5530 = UINT8_MAX;
volatile uint16_t x5532 = 0U;
int16_t x5547 = INT16_MIN;
int32_t x5548 = 0;
volatile int32_t t194 = 6663;
volatile uint16_t x5604 = 0U;
volatile int32_t t195 = -21621355;
volatile int16_t x5834 = INT16_MIN;
volatile int16_t x5956 = 0;


void f0(void) {
    	static int16_t x10 = -1;
	int16_t x11 = -1;
	uint64_t x12 = 7LLU;
	volatile int32_t t0 = -1;

    t0 = (((x9|x10)<=x11)<<x12);

    if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x21 = UINT8_MAX;
	int8_t x22 = INT8_MAX;
	uint64_t x23 = 274615731036421LLU;
	static int32_t t1 = -2;

    t1 = (((x21|x22)<=x23)<<x24);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x85 = 4479472U;
	uint16_t x86 = 0U;
	uint8_t x88 = 0U;
	volatile int32_t t2 = -25;

    t2 = (((x85|x86)<=x87)<<x88);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x127 = 68915562196348LL;
	uint16_t x128 = 13U;
	volatile int32_t t3 = -229193231;

    t3 = (((x125|x126)<=x127)<<x128);

    if (t3 != 8192) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x209 = 214LLU;
	int32_t x210 = -494423425;
	int8_t x212 = 0;

    t4 = (((x209|x210)<=x211)<<x212);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x213 = -1;
	uint32_t x214 = 34U;
	int32_t x215 = INT32_MIN;
	uint64_t x216 = 11LLU;

    t5 = (((x213|x214)<=x215)<<x216);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x225 = INT64_MAX;
	volatile int32_t x226 = INT32_MIN;
	int16_t x227 = -1;
	static uint16_t x228 = 1U;
	static volatile int32_t t6 = -4467701;

    t6 = (((x225|x226)<=x227)<<x228);

    if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x234 = -1;
	int32_t x235 = 38;
	volatile int32_t t7 = 1;

    t7 = (((x233|x234)<=x235)<<x236);

    if (t7 != 524288) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x258 = 3969877;
	static int16_t x260 = 0;
	volatile int32_t t8 = 3939;

    t8 = (((x257|x258)<=x259)<<x260);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x289 = INT32_MIN;
	static volatile uint64_t x290 = 126949LLU;
	volatile uint16_t x291 = 14478U;
	volatile uint32_t x292 = 5U;
	static int32_t t9 = -30;

    t9 = (((x289|x290)<=x291)<<x292);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x309 = 2U;
	uint32_t x311 = UINT32_MAX;
	volatile uint8_t x312 = 3U;
	volatile int32_t t10 = -464197;

    t10 = (((x309|x310)<=x311)<<x312);

    if (t10 != 8) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x349 = -1LL;
	volatile int32_t x351 = -72;
	volatile int32_t t11 = 15934;

    t11 = (((x349|x350)<=x351)<<x352);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x361 = 19;
	int32_t x362 = -1;
	volatile int32_t x363 = 0;
	static int16_t x364 = 16;
	int32_t t12 = 1581503;

    t12 = (((x361|x362)<=x363)<<x364);

    if (t12 != 65536) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x470 = UINT32_MAX;
	uint8_t x471 = 36U;
	int32_t x472 = 0;
	int32_t t13 = 27535073;

    t13 = (((x469|x470)<=x471)<<x472);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x505 = 0;
	int64_t x507 = INT64_MIN;
	uint8_t x508 = 1U;
	volatile int32_t t14 = 6879486;

    t14 = (((x505|x506)<=x507)<<x508);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x541 = 12613;
	uint16_t x542 = 69U;
	int8_t x543 = -7;
	volatile uint8_t x544 = 12U;
	int32_t t15 = -1;

    t15 = (((x541|x542)<=x543)<<x544);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x547 = 15U;
	int8_t x548 = 15;
	volatile int32_t t16 = 2296;

    t16 = (((x545|x546)<=x547)<<x548);

    if (t16 != 32768) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x565 = INT16_MAX;
	int8_t x566 = INT8_MAX;
	static int64_t x567 = INT64_MAX;
	volatile uint32_t x568 = 2U;
	volatile int32_t t17 = -1007;

    t17 = (((x565|x566)<=x567)<<x568);

    if (t17 != 4) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x597 = UINT32_MAX;
	int32_t x598 = INT32_MAX;
	int16_t x599 = 1;
	uint8_t x600 = 4U;
	volatile int32_t t18 = 14840;

    t18 = (((x597|x598)<=x599)<<x600);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x601 = UINT8_MAX;
	volatile uint64_t x603 = 1509964438858303LLU;
	uint8_t x604 = 11U;
	volatile int32_t t19 = 11;

    t19 = (((x601|x602)<=x603)<<x604);

    if (t19 != 2048) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x609 = 25;
	uint64_t x611 = 1836LLU;
	uint8_t x612 = 3U;

    t20 = (((x609|x610)<=x611)<<x612);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x645 = INT8_MIN;
	int32_t x646 = 1;
	int16_t x648 = 0;
	static int32_t t21 = -919;

    t21 = (((x645|x646)<=x647)<<x648);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x729 = INT32_MIN;
	int16_t x730 = -1;
	uint32_t x731 = UINT32_MAX;
	static uint8_t x732 = 0U;
	volatile int32_t t22 = -822913810;

    t22 = (((x729|x730)<=x731)<<x732);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x806 = INT16_MIN;
	volatile int16_t x807 = 0;
	int8_t x808 = 2;

    t23 = (((x805|x806)<=x807)<<x808);

    if (t23 != 4) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x853 = 14;
	static int16_t x854 = INT16_MAX;
	static uint32_t x855 = 3038090U;
	uint16_t x856 = 6U;
	volatile int32_t t24 = 60488374;

    t24 = (((x853|x854)<=x855)<<x856);

    if (t24 != 64) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x866 = UINT16_MAX;
	volatile uint64_t x867 = UINT64_MAX;
	uint8_t x868 = 28U;
	volatile int32_t t25 = -60;

    t25 = (((x865|x866)<=x867)<<x868);

    if (t25 != 268435456) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x885 = 580U;
	volatile int32_t x886 = -2273730;
	uint8_t x888 = 1U;
	volatile int32_t t26 = 145491555;

    t26 = (((x885|x886)<=x887)<<x888);

    if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x902 = INT16_MIN;
	int16_t x903 = 3962;
	int8_t x904 = 0;

    t27 = (((x901|x902)<=x903)<<x904);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x945 = INT16_MIN;
	int8_t x946 = 0;
	volatile int8_t x947 = INT8_MAX;
	int16_t x948 = 6;
	volatile int32_t t28 = -16;

    t28 = (((x945|x946)<=x947)<<x948);

    if (t28 != 64) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x957 = INT16_MIN;
	static uint64_t x959 = UINT64_MAX;
	static volatile uint8_t x960 = 1U;
	volatile int32_t t29 = 6456;

    t29 = (((x957|x958)<=x959)<<x960);

    if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x1021 = -849136985106LL;
	uint16_t x1022 = UINT16_MAX;
	int16_t x1023 = INT16_MIN;
	static int8_t x1024 = 0;
	int32_t t30 = -4571038;

    t30 = (((x1021|x1022)<=x1023)<<x1024);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x1034 = UINT32_MAX;
	uint64_t x1035 = 1563733113604489553LLU;
	static uint16_t x1036 = 1U;
	volatile int32_t t31 = -4246;

    t31 = (((x1033|x1034)<=x1035)<<x1036);

    if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x1053 = -1;
	int16_t x1054 = INT16_MIN;
	volatile int8_t x1056 = 12;
	volatile int32_t t32 = -1;

    t32 = (((x1053|x1054)<=x1055)<<x1056);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int32_t x1105 = 19;
	int16_t x1106 = 123;
	volatile uint16_t x1107 = 0U;
	volatile int32_t t33 = -241;

    t33 = (((x1105|x1106)<=x1107)<<x1108);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x1113 = 22;
	int64_t x1114 = INT64_MIN;
	int8_t x1116 = 2;
	int32_t t34 = -117;

    t34 = (((x1113|x1114)<=x1115)<<x1116);

    if (t34 != 4) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x1133 = INT8_MIN;
	int16_t x1134 = INT16_MIN;
	static int64_t x1135 = INT64_MIN;
	static uint16_t x1136 = 6U;
	int32_t t35 = 130190;

    t35 = (((x1133|x1134)<=x1135)<<x1136);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x1145 = 224705;
	uint8_t x1148 = 1U;
	int32_t t36 = -2574;

    t36 = (((x1145|x1146)<=x1147)<<x1148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x1161 = INT16_MAX;
	static uint32_t x1162 = 355419535U;
	uint32_t x1163 = UINT32_MAX;
	uint8_t x1164 = 2U;
	int32_t t37 = 95;

    t37 = (((x1161|x1162)<=x1163)<<x1164);

    if (t37 != 4) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x1201 = INT64_MAX;
	volatile int16_t x1202 = -1;
	uint8_t x1203 = UINT8_MAX;
	static int8_t x1204 = 30;
	int32_t t38 = -31560;

    t38 = (((x1201|x1202)<=x1203)<<x1204);

    if (t38 != 1073741824) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x1221 = INT16_MIN;
	int64_t x1222 = 7658450945402925LL;
	uint8_t x1223 = 5U;
	volatile int32_t t39 = 59982449;

    t39 = (((x1221|x1222)<=x1223)<<x1224);

    if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x1253 = INT16_MIN;
	static uint8_t x1254 = 1U;
	int64_t x1255 = 62805920875746904LL;
	volatile int16_t x1256 = 0;
	volatile int32_t t40 = 415;

    t40 = (((x1253|x1254)<=x1255)<<x1256);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x1257 = UINT8_MAX;
	int16_t x1258 = -4084;
	uint16_t x1259 = 11307U;
	uint8_t x1260 = 1U;
	static volatile int32_t t41 = 14204033;

    t41 = (((x1257|x1258)<=x1259)<<x1260);

    if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x1317 = INT32_MAX;
	uint64_t x1319 = 10157089332LLU;
	uint64_t x1320 = 0LLU;
	volatile int32_t t42 = 270510860;

    t42 = (((x1317|x1318)<=x1319)<<x1320);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x1321 = 1042U;
	static int16_t x1322 = INT16_MAX;
	uint32_t x1324 = 0U;
	static int32_t t43 = 60455;

    t43 = (((x1321|x1322)<=x1323)<<x1324);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x1333 = INT32_MIN;
	int64_t x1334 = -1LL;
	volatile uint32_t x1335 = 66516963U;
	static volatile int32_t t44 = -22630630;

    t44 = (((x1333|x1334)<=x1335)<<x1336);

    if (t44 != 33554432) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x1357 = 339596U;
	uint32_t x1359 = 381U;
	volatile uint8_t x1360 = 0U;
	int32_t t45 = 34387701;

    t45 = (((x1357|x1358)<=x1359)<<x1360);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x1369 = -430;
	static volatile uint32_t x1370 = 11178886U;
	static int16_t x1371 = INT16_MIN;
	volatile uint16_t x1372 = 1U;
	volatile int32_t t46 = -14;

    t46 = (((x1369|x1370)<=x1371)<<x1372);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int32_t x1457 = 73631334;
	int16_t x1458 = INT16_MIN;
	uint32_t x1459 = 0U;
	uint32_t x1460 = 5U;
	int32_t t47 = 400;

    t47 = (((x1457|x1458)<=x1459)<<x1460);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x1517 = 275LLU;
	static volatile uint64_t x1519 = 54982736443LLU;
	static int8_t x1520 = 1;

    t48 = (((x1517|x1518)<=x1519)<<x1520);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x1553 = INT16_MIN;
	int64_t x1554 = 27033125LL;
	int32_t x1555 = INT32_MIN;
	int32_t t49 = 12;

    t49 = (((x1553|x1554)<=x1555)<<x1556);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x1557 = 2LLU;
	int8_t x1558 = 8;
	volatile uint64_t x1559 = UINT64_MAX;
	int32_t t50 = -1485;

    t50 = (((x1557|x1558)<=x1559)<<x1560);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x1561 = INT32_MIN;
	uint16_t x1562 = 1740U;
	int8_t x1564 = 0;
	int32_t t51 = 20528;

    t51 = (((x1561|x1562)<=x1563)<<x1564);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x1605 = INT16_MIN;
	uint32_t x1606 = UINT32_MAX;
	uint8_t x1608 = 2U;

    t52 = (((x1605|x1606)<=x1607)<<x1608);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x1623 = -73475073;
	uint32_t x1624 = 0U;

    t53 = (((x1621|x1622)<=x1623)<<x1624);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x1641 = UINT16_MAX;
	int32_t x1642 = INT32_MAX;
	int64_t x1643 = 1698684538457696LL;
	int32_t t54 = -1182414;

    t54 = (((x1641|x1642)<=x1643)<<x1644);

    if (t54 != 128) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x1687 = 263720059958LL;
	int8_t x1688 = 12;
	volatile int32_t t55 = -224837;

    t55 = (((x1685|x1686)<=x1687)<<x1688);

    if (t55 != 4096) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x1733 = INT32_MIN;
	uint16_t x1734 = 49U;
	uint64_t x1735 = 1091951326314LLU;
	volatile uint8_t x1736 = 1U;
	volatile int32_t t56 = 167713;

    t56 = (((x1733|x1734)<=x1735)<<x1736);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x1749 = 3193U;
	uint64_t x1750 = UINT64_MAX;
	uint16_t x1752 = 7U;
	volatile int32_t t57 = -7;

    t57 = (((x1749|x1750)<=x1751)<<x1752);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x1773 = 51552LLU;
	static int32_t x1775 = INT32_MAX;
	volatile int16_t x1776 = 1;
	static int32_t t58 = -55926;

    t58 = (((x1773|x1774)<=x1775)<<x1776);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x1777 = INT8_MAX;
	static uint64_t x1778 = 4618600452125LLU;
	volatile uint8_t x1779 = 1U;
	int32_t t59 = 190163006;

    t59 = (((x1777|x1778)<=x1779)<<x1780);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x1781 = UINT16_MAX;
	int16_t x1783 = INT16_MIN;
	uint16_t x1784 = 4U;
	static volatile int32_t t60 = 27;

    t60 = (((x1781|x1782)<=x1783)<<x1784);

    if (t60 != 16) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x1789 = 3;
	int16_t x1790 = INT16_MIN;
	int32_t t61 = -63;

    t61 = (((x1789|x1790)<=x1791)<<x1792);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x1837 = INT32_MIN;
	int16_t x1839 = INT16_MIN;
	int16_t x1840 = 25;
	int32_t t62 = -2718;

    t62 = (((x1837|x1838)<=x1839)<<x1840);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x1857 = -1;
	static uint8_t x1858 = 4U;
	int8_t x1860 = 1;
	int32_t t63 = -6803373;

    t63 = (((x1857|x1858)<=x1859)<<x1860);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x1873 = INT8_MIN;
	int16_t x1874 = INT16_MIN;
	int8_t x1876 = 1;

    t64 = (((x1873|x1874)<=x1875)<<x1876);

    if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint32_t x1898 = UINT32_MAX;
	int64_t x1899 = -9945340438557710LL;
	int8_t x1900 = 11;
	int32_t t65 = -130;

    t65 = (((x1897|x1898)<=x1899)<<x1900);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x1913 = UINT8_MAX;
	static int32_t x1915 = INT32_MIN;
	volatile int16_t x1916 = 0;

    t66 = (((x1913|x1914)<=x1915)<<x1916);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x1927 = 97781;
	uint8_t x1928 = 1U;
	volatile int32_t t67 = -228764;

    t67 = (((x1925|x1926)<=x1927)<<x1928);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x1977 = -1;
	volatile int16_t x1978 = -1;
	volatile uint32_t x1979 = UINT32_MAX;
	int8_t x1980 = 5;

    t68 = (((x1977|x1978)<=x1979)<<x1980);

    if (t68 != 32) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x1997 = 11LL;
	volatile int64_t x1998 = 49547873587241LL;
	int64_t x1999 = -1LL;
	uint32_t x2000 = 0U;

    t69 = (((x1997|x1998)<=x1999)<<x2000);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x2001 = INT8_MAX;
	volatile int32_t x2002 = 456512206;
	uint32_t x2004 = 1U;
	volatile int32_t t70 = -129111;

    t70 = (((x2001|x2002)<=x2003)<<x2004);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x2009 = UINT8_MAX;
	volatile uint16_t x2010 = 5917U;
	static uint32_t x2011 = 1957015250U;
	uint64_t x2012 = 11LLU;
	int32_t t71 = 1;

    t71 = (((x2009|x2010)<=x2011)<<x2012);

    if (t71 != 2048) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x2013 = INT32_MIN;
	int32_t x2015 = INT32_MAX;
	uint8_t x2016 = 1U;
	int32_t t72 = 72924;

    t72 = (((x2013|x2014)<=x2015)<<x2016);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x2017 = 0;
	uint16_t x2018 = 1U;
	uint64_t x2019 = 475612LLU;
	uint8_t x2020 = 3U;
	volatile int32_t t73 = -6;

    t73 = (((x2017|x2018)<=x2019)<<x2020);

    if (t73 != 8) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x2036 = 5LLU;
	int32_t t74 = 25050319;

    t74 = (((x2033|x2034)<=x2035)<<x2036);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x2061 = UINT8_MAX;
	uint64_t x2062 = 184574836LLU;
	volatile uint8_t x2063 = 7U;
	volatile int64_t x2064 = 6LL;
	volatile int32_t t75 = 261222;

    t75 = (((x2061|x2062)<=x2063)<<x2064);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x2093 = INT64_MAX;
	volatile int8_t x2094 = INT8_MIN;
	int64_t x2095 = INT64_MIN;
	int8_t x2096 = 1;
	static volatile int32_t t76 = -1;

    t76 = (((x2093|x2094)<=x2095)<<x2096);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x2137 = INT8_MIN;
	uint64_t x2139 = 151267630LLU;
	uint8_t x2140 = 24U;
	volatile int32_t t77 = -44255;

    t77 = (((x2137|x2138)<=x2139)<<x2140);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x2177 = -1;
	int8_t x2178 = -1;
	int64_t x2179 = 25387LL;
	int8_t x2180 = 15;
	int32_t t78 = 21570860;

    t78 = (((x2177|x2178)<=x2179)<<x2180);

    if (t78 != 32768) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x2294 = 1U;
	int64_t x2296 = 3LL;

    t79 = (((x2293|x2294)<=x2295)<<x2296);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x2321 = -1;
	int16_t x2322 = 50;
	int8_t x2323 = 1;

    t80 = (((x2321|x2322)<=x2323)<<x2324);

    if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x2353 = -1;
	uint64_t x2354 = UINT64_MAX;
	volatile uint16_t x2356 = 25U;
	volatile int32_t t81 = 112807353;

    t81 = (((x2353|x2354)<=x2355)<<x2356);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x2357 = 26028LLU;
	int16_t x2359 = -1;
	int16_t x2360 = 22;

    t82 = (((x2357|x2358)<=x2359)<<x2360);

    if (t82 != 4194304) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x2361 = INT16_MAX;
	int32_t x2362 = -8911;
	volatile uint8_t x2363 = UINT8_MAX;
	static uint32_t x2364 = 0U;
	volatile int32_t t83 = -102;

    t83 = (((x2361|x2362)<=x2363)<<x2364);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x2401 = INT32_MIN;
	uint8_t x2402 = UINT8_MAX;
	static int16_t x2403 = -1;
	int32_t t84 = -528835351;

    t84 = (((x2401|x2402)<=x2403)<<x2404);

    if (t84 != 8) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x2465 = -45;
	uint64_t x2466 = 2751458647295797891LLU;
	uint64_t x2467 = UINT64_MAX;

    t85 = (((x2465|x2466)<=x2467)<<x2468);

    if (t85 != 33554432) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x2477 = -3989181018584886842LL;
	static volatile int16_t x2478 = -1;
	int16_t x2480 = 0;
	volatile int32_t t86 = -29;

    t86 = (((x2477|x2478)<=x2479)<<x2480);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint32_t x2481 = UINT32_MAX;
	volatile uint16_t x2483 = 461U;
	uint8_t x2484 = 3U;
	int32_t t87 = -65449;

    t87 = (((x2481|x2482)<=x2483)<<x2484);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x2525 = UINT8_MAX;
	uint32_t x2526 = 2478449U;
	int8_t x2528 = 1;
	static volatile int32_t t88 = 21751859;

    t88 = (((x2525|x2526)<=x2527)<<x2528);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x2593 = INT32_MIN;
	int16_t x2594 = -69;
	static uint8_t x2596 = 1U;
	volatile int32_t t89 = 2833;

    t89 = (((x2593|x2594)<=x2595)<<x2596);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x2617 = INT64_MIN;
	int32_t x2618 = INT32_MAX;
	uint8_t x2619 = 28U;
	uint16_t x2620 = 0U;
	int32_t t90 = -13;

    t90 = (((x2617|x2618)<=x2619)<<x2620);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x2633 = INT64_MIN;
	int8_t x2634 = 20;
	int64_t x2635 = INT64_MAX;
	int8_t x2636 = 1;
	int32_t t91 = 139197;

    t91 = (((x2633|x2634)<=x2635)<<x2636);

    if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x2761 = 59083341LLU;
	int8_t x2762 = -1;
	volatile uint8_t x2763 = UINT8_MAX;
	volatile int32_t t92 = 91720;

    t92 = (((x2761|x2762)<=x2763)<<x2764);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x2769 = UINT16_MAX;
	int64_t x2770 = -114801391LL;
	static uint16_t x2771 = 3769U;
	uint8_t x2772 = 11U;

    t93 = (((x2769|x2770)<=x2771)<<x2772);

    if (t93 != 2048) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x2798 = INT64_MAX;
	static int64_t x2799 = -137LL;
	static int8_t x2800 = 4;
	int32_t t94 = -27423;

    t94 = (((x2797|x2798)<=x2799)<<x2800);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x2921 = 63;
	volatile uint64_t x2922 = 2154LLU;
	int8_t x2923 = -1;
	volatile int16_t x2924 = 3;

    t95 = (((x2921|x2922)<=x2923)<<x2924);

    if (t95 != 8) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x3045 = INT16_MIN;
	uint8_t x3046 = 1U;
	uint64_t x3047 = 18440640LLU;
	volatile uint32_t x3048 = 3U;
	int32_t t96 = -4;

    t96 = (((x3045|x3046)<=x3047)<<x3048);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x3057 = -58;
	static volatile int64_t x3058 = INT64_MAX;
	volatile int8_t x3060 = 0;
	int32_t t97 = -219690344;

    t97 = (((x3057|x3058)<=x3059)<<x3060);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x3077 = 6U;
	int64_t x3078 = 5499609623721LL;
	volatile int64_t x3079 = 2814987605598LL;
	volatile int8_t x3080 = 4;
	volatile int32_t t98 = 23178;

    t98 = (((x3077|x3078)<=x3079)<<x3080);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x3126 = INT8_MAX;
	uint16_t x3127 = 1158U;
	static uint8_t x3128 = 0U;

    t99 = (((x3125|x3126)<=x3127)<<x3128);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x3141 = 386815;
	uint64_t x3142 = UINT64_MAX;
	volatile uint32_t x3144 = 4U;
	int32_t t100 = 3572612;

    t100 = (((x3141|x3142)<=x3143)<<x3144);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x3229 = UINT64_MAX;
	int16_t x3230 = 1599;
	volatile int8_t x3231 = INT8_MAX;
	uint8_t x3232 = 1U;
	static int32_t t101 = -566643;

    t101 = (((x3229|x3230)<=x3231)<<x3232);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x3241 = -51803627LL;
	static uint8_t x3242 = 5U;
	static volatile uint32_t x3244 = 1U;

    t102 = (((x3241|x3242)<=x3243)<<x3244);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x3262 = -146435949429533936LL;
	static int8_t x3263 = -1;
	static uint16_t x3264 = 1U;
	volatile int32_t t103 = 3507;

    t103 = (((x3261|x3262)<=x3263)<<x3264);

    if (t103 != 2) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x3282 = -368;
	static int16_t x3283 = INT16_MIN;
	int16_t x3284 = 1;

    t104 = (((x3281|x3282)<=x3283)<<x3284);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x3357 = 39073628LL;
	int64_t x3358 = INT64_MIN;
	int8_t x3359 = INT8_MAX;
	static uint32_t x3360 = 1U;
	int32_t t105 = 1;

    t105 = (((x3357|x3358)<=x3359)<<x3360);

    if (t105 != 2) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x3361 = INT32_MIN;
	static volatile int16_t x3363 = -1;
	volatile int32_t t106 = 22976272;

    t106 = (((x3361|x3362)<=x3363)<<x3364);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x3397 = 27;
	int32_t x3398 = INT32_MAX;
	volatile int8_t x3399 = INT8_MIN;
	static volatile int32_t t107 = -16624454;

    t107 = (((x3397|x3398)<=x3399)<<x3400);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t t108 = -403135709;

    t108 = (((x3413|x3414)<=x3415)<<x3416);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x3421 = 20726313U;
	int16_t x3422 = -1;
	int64_t x3423 = INT64_MAX;
	int8_t x3424 = 3;
	int32_t t109 = 184304805;

    t109 = (((x3421|x3422)<=x3423)<<x3424);

    if (t109 != 8) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x3437 = -2863407LL;
	int8_t x3438 = 54;
	static volatile int16_t x3439 = INT16_MIN;
	uint8_t x3440 = 0U;
	int32_t t110 = -7292;

    t110 = (((x3437|x3438)<=x3439)<<x3440);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x3465 = -1LL;
	int16_t x3466 = INT16_MAX;
	static uint8_t x3467 = UINT8_MAX;
	uint8_t x3468 = 4U;
	int32_t t111 = 918104885;

    t111 = (((x3465|x3466)<=x3467)<<x3468);

    if (t111 != 16) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x3469 = 19156U;
	int64_t x3470 = INT64_MIN;
	int8_t x3472 = 0;
	volatile int32_t t112 = -14163446;

    t112 = (((x3469|x3470)<=x3471)<<x3472);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x3481 = 264764677441LL;
	int32_t x3482 = INT32_MIN;
	int64_t x3483 = -5410992758668LL;
	uint8_t x3484 = 5U;
	int32_t t113 = -6007;

    t113 = (((x3481|x3482)<=x3483)<<x3484);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x3518 = 21U;
	uint32_t x3519 = 364U;
	static volatile uint8_t x3520 = 7U;
	int32_t t114 = 14;

    t114 = (((x3517|x3518)<=x3519)<<x3520);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint8_t x3541 = 54U;
	int64_t x3542 = -1LL;
	int32_t x3543 = 5425;
	uint8_t x3544 = 3U;

    t115 = (((x3541|x3542)<=x3543)<<x3544);

    if (t115 != 8) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x3549 = 461U;
	uint8_t x3550 = 2U;
	static uint16_t x3552 = 2U;
	int32_t t116 = -10210;

    t116 = (((x3549|x3550)<=x3551)<<x3552);

    if (t116 != 4) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x3570 = INT16_MIN;
	int32_t x3571 = -1;
	volatile int32_t t117 = 48;

    t117 = (((x3569|x3570)<=x3571)<<x3572);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x3585 = INT32_MIN;
	volatile int8_t x3586 = INT8_MIN;
	volatile int8_t x3587 = INT8_MIN;
	uint32_t x3588 = 0U;
	int32_t t118 = 54825;

    t118 = (((x3585|x3586)<=x3587)<<x3588);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x3649 = INT64_MIN;
	static volatile int32_t t119 = -351592069;

    t119 = (((x3649|x3650)<=x3651)<<x3652);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x3662 = -1;
	uint16_t x3663 = UINT16_MAX;
	uint64_t x3664 = 20LLU;
	volatile int32_t t120 = -3045379;

    t120 = (((x3661|x3662)<=x3663)<<x3664);

    if (t120 != 1048576) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x3677 = INT16_MAX;
	static int8_t x3678 = -1;
	volatile int8_t x3680 = 1;
	int32_t t121 = -6019135;

    t121 = (((x3677|x3678)<=x3679)<<x3680);

    if (t121 != 2) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x3685 = INT16_MIN;
	int8_t x3686 = INT8_MIN;
	uint64_t x3687 = UINT64_MAX;
	int64_t x3688 = 6LL;
	volatile int32_t t122 = 2746675;

    t122 = (((x3685|x3686)<=x3687)<<x3688);

    if (t122 != 64) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x3705 = -5;
	int32_t x3706 = -1;
	int16_t x3708 = 4;
	static int32_t t123 = -903;

    t123 = (((x3705|x3706)<=x3707)<<x3708);

    if (t123 != 16) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x3729 = -1;
	int8_t x3730 = INT8_MIN;
	static uint8_t x3731 = 1U;
	uint8_t x3732 = 15U;
	volatile int32_t t124 = -1124;

    t124 = (((x3729|x3730)<=x3731)<<x3732);

    if (t124 != 32768) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int32_t x3778 = INT32_MIN;
	int64_t x3779 = INT64_MAX;
	int32_t t125 = -1372;

    t125 = (((x3777|x3778)<=x3779)<<x3780);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x3849 = 481;
	static volatile int16_t x3851 = -1;
	uint8_t x3852 = 1U;

    t126 = (((x3849|x3850)<=x3851)<<x3852);

    if (t126 != 2) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x3893 = -9038;
	int32_t x3894 = INT32_MIN;
	int8_t x3895 = -3;
	volatile int8_t x3896 = 0;
	volatile int32_t t127 = 404;

    t127 = (((x3893|x3894)<=x3895)<<x3896);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int64_t x3909 = INT64_MIN;
	static int64_t x3910 = 3504911645360958844LL;
	int16_t x3911 = -66;
	volatile int8_t x3912 = 1;
	volatile int32_t t128 = 0;

    t128 = (((x3909|x3910)<=x3911)<<x3912);

    if (t128 != 2) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x3917 = 11433222112940255LL;
	uint16_t x3918 = 47U;
	static int8_t x3919 = 0;
	static int32_t t129 = -36126;

    t129 = (((x3917|x3918)<=x3919)<<x3920);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x3921 = INT8_MIN;
	int16_t x3922 = INT16_MAX;
	static int16_t x3923 = 167;
	static uint16_t x3924 = 1U;
	int32_t t130 = -3053517;

    t130 = (((x3921|x3922)<=x3923)<<x3924);

    if (t130 != 2) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x3953 = 21924894LLU;
	volatile int8_t x3954 = INT8_MIN;
	int32_t x3955 = INT32_MAX;
	volatile int32_t t131 = -1;

    t131 = (((x3953|x3954)<=x3955)<<x3956);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x3969 = UINT32_MAX;
	uint32_t x3970 = 71819244U;
	volatile int16_t x3972 = 1;
	volatile int32_t t132 = -142781146;

    t132 = (((x3969|x3970)<=x3971)<<x3972);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x3989 = 5;
	int16_t x3990 = -1;
	uint8_t x3991 = 25U;
	int32_t t133 = 6;

    t133 = (((x3989|x3990)<=x3991)<<x3992);

    if (t133 != 2) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x4041 = -1;
	int64_t x4042 = -1LL;
	int32_t x4043 = INT32_MIN;

    t134 = (((x4041|x4042)<=x4043)<<x4044);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x4065 = 5U;
	static int8_t x4067 = INT8_MIN;
	static uint32_t x4068 = 2U;
	static int32_t t135 = 1022809;

    t135 = (((x4065|x4066)<=x4067)<<x4068);

    if (t135 != 4) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x4093 = UINT64_MAX;
	uint64_t x4094 = 1865LLU;
	static int64_t x4095 = -1LL;
	volatile int8_t x4096 = 0;
	int32_t t136 = 13861764;

    t136 = (((x4093|x4094)<=x4095)<<x4096);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x4122 = 1;
	int16_t x4123 = INT16_MAX;
	uint8_t x4124 = 1U;
	int32_t t137 = 6626247;

    t137 = (((x4121|x4122)<=x4123)<<x4124);

    if (t137 != 2) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x4125 = INT8_MAX;
	volatile int8_t x4126 = -1;
	int16_t x4127 = 7;
	int64_t x4128 = 0LL;
	volatile int32_t t138 = -71;

    t138 = (((x4125|x4126)<=x4127)<<x4128);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x4129 = -1LL;
	int32_t x4130 = 1239140;
	volatile int16_t x4131 = INT16_MIN;
	uint8_t x4132 = 1U;
	static int32_t t139 = 3430903;

    t139 = (((x4129|x4130)<=x4131)<<x4132);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x4169 = INT64_MAX;
	int64_t x4171 = -1LL;
	uint8_t x4172 = 1U;
	volatile int32_t t140 = -5974534;

    t140 = (((x4169|x4170)<=x4171)<<x4172);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x4173 = UINT16_MAX;
	static int32_t x4174 = INT32_MAX;
	int16_t x4176 = 1;
	int32_t t141 = 0;

    t141 = (((x4173|x4174)<=x4175)<<x4176);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x4177 = -116;
	volatile int32_t x4178 = INT32_MIN;
	uint32_t x4179 = 2131U;
	volatile int32_t t142 = 213007;

    t142 = (((x4177|x4178)<=x4179)<<x4180);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x4186 = 5U;
	int64_t x4187 = 1567917075764809LL;
	uint8_t x4188 = 1U;
	volatile int32_t t143 = 1784943;

    t143 = (((x4185|x4186)<=x4187)<<x4188);

    if (t143 != 2) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x4225 = INT16_MIN;
	uint64_t x4226 = 201151391133LLU;
	uint16_t x4227 = 26U;
	uint8_t x4228 = 7U;
	volatile int32_t t144 = 521525;

    t144 = (((x4225|x4226)<=x4227)<<x4228);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x4233 = UINT16_MAX;
	static int16_t x4234 = -1;
	volatile int16_t x4235 = INT16_MIN;
	uint16_t x4236 = 2U;
	static volatile int32_t t145 = 0;

    t145 = (((x4233|x4234)<=x4235)<<x4236);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x4241 = 0U;
	int8_t x4242 = -1;
	volatile int8_t x4243 = -1;
	uint8_t x4244 = 6U;

    t146 = (((x4241|x4242)<=x4243)<<x4244);

    if (t146 != 64) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x4253 = INT8_MIN;
	uint16_t x4254 = 8803U;
	int16_t x4255 = 6050;
	int16_t x4256 = 1;

    t147 = (((x4253|x4254)<=x4255)<<x4256);

    if (t147 != 2) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x4291 = UINT16_MAX;
	int32_t x4292 = 24;
	int32_t t148 = 9152823;

    t148 = (((x4289|x4290)<=x4291)<<x4292);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x4298 = -76413LL;
	int8_t x4300 = 6;

    t149 = (((x4297|x4298)<=x4299)<<x4300);

    if (t149 != 64) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x4365 = INT32_MIN;
	int8_t x4366 = INT8_MAX;
	uint16_t x4368 = 2U;
	volatile int32_t t150 = 16317;

    t150 = (((x4365|x4366)<=x4367)<<x4368);

    if (t150 != 4) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x4421 = -1034088772;
	int16_t x4423 = 3;
	uint8_t x4424 = 0U;
	volatile int32_t t151 = 4022428;

    t151 = (((x4421|x4422)<=x4423)<<x4424);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x4429 = 2658387U;
	uint64_t x4430 = 198012209LLU;
	int32_t x4431 = INT32_MIN;
	uint8_t x4432 = 14U;
	static int32_t t152 = 178451;

    t152 = (((x4429|x4430)<=x4431)<<x4432);

    if (t152 != 16384) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x4501 = INT32_MIN;
	int32_t x4502 = 0;
	static int8_t x4503 = INT8_MAX;
	volatile uint8_t x4504 = 30U;
	volatile int32_t t153 = -2;

    t153 = (((x4501|x4502)<=x4503)<<x4504);

    if (t153 != 1073741824) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x4534 = INT8_MIN;
	int32_t t154 = 34358675;

    t154 = (((x4533|x4534)<=x4535)<<x4536);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x4541 = INT64_MIN;
	int8_t x4542 = INT8_MAX;
	volatile int16_t x4543 = INT16_MAX;
	static uint16_t x4544 = 2U;
	static int32_t t155 = 12971320;

    t155 = (((x4541|x4542)<=x4543)<<x4544);

    if (t155 != 4) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x4549 = 31659950LLU;
	int32_t x4550 = INT32_MIN;
	int8_t x4551 = INT8_MAX;
	static int32_t t156 = -11;

    t156 = (((x4549|x4550)<=x4551)<<x4552);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x4585 = -1459280;
	static uint16_t x4587 = 22U;
	static volatile int32_t t157 = 59351;

    t157 = (((x4585|x4586)<=x4587)<<x4588);

    if (t157 != 4) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x4617 = INT64_MIN;
	static int32_t x4618 = INT32_MIN;
	int32_t x4619 = 512289;

    t158 = (((x4617|x4618)<=x4619)<<x4620);

    if (t158 != 32768) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x4625 = 6U;
	int64_t x4626 = INT64_MIN;
	uint64_t x4627 = 49899743203733643LLU;
	uint16_t x4628 = 1U;
	volatile int32_t t159 = 697157999;

    t159 = (((x4625|x4626)<=x4627)<<x4628);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x4633 = -630776601;
	int64_t x4634 = INT64_MAX;
	uint64_t x4635 = UINT64_MAX;
	int32_t t160 = -465;

    t160 = (((x4633|x4634)<=x4635)<<x4636);

    if (t160 != 2) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x4650 = -1;
	int32_t x4651 = -1;
	uint8_t x4652 = 1U;
	static int32_t t161 = 2057358;

    t161 = (((x4649|x4650)<=x4651)<<x4652);

    if (t161 != 2) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x4665 = INT32_MAX;
	int64_t x4666 = INT64_MIN;
	int32_t x4667 = 10547288;
	uint8_t x4668 = 0U;
	int32_t t162 = 0;

    t162 = (((x4665|x4666)<=x4667)<<x4668);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x4669 = UINT16_MAX;
	int8_t x4670 = -1;
	static int8_t x4672 = 3;
	static int32_t t163 = 23;

    t163 = (((x4669|x4670)<=x4671)<<x4672);

    if (t163 != 8) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x4697 = 4832U;
	int64_t x4698 = INT64_MIN;
	uint32_t x4699 = UINT32_MAX;
	uint16_t x4700 = 6U;

    t164 = (((x4697|x4698)<=x4699)<<x4700);

    if (t164 != 64) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x4701 = UINT32_MAX;
	int32_t x4702 = -25;
	uint64_t x4703 = 65900599LLU;
	uint16_t x4704 = 15U;
	volatile int32_t t165 = 7988;

    t165 = (((x4701|x4702)<=x4703)<<x4704);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x4741 = 1U;
	int32_t x4742 = 7868;
	static volatile uint8_t x4743 = 3U;
	volatile uint32_t x4744 = 8U;
	volatile int32_t t166 = -10;

    t166 = (((x4741|x4742)<=x4743)<<x4744);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x4757 = INT8_MIN;
	volatile uint32_t x4758 = UINT32_MAX;
	uint32_t x4759 = UINT32_MAX;
	int64_t x4760 = 0LL;
	static volatile int32_t t167 = -45019;

    t167 = (((x4757|x4758)<=x4759)<<x4760);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x4761 = INT8_MIN;
	volatile uint16_t x4762 = 50U;
	uint8_t x4763 = UINT8_MAX;
	int32_t t168 = -294;

    t168 = (((x4761|x4762)<=x4763)<<x4764);

    if (t168 != 16) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x4789 = 179794LL;
	int32_t x4790 = -1;
	uint8_t x4792 = 4U;
	int32_t t169 = 226;

    t169 = (((x4789|x4790)<=x4791)<<x4792);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x4814 = INT8_MIN;
	uint8_t x4816 = 0U;

    t170 = (((x4813|x4814)<=x4815)<<x4816);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x4849 = -8;
	int16_t x4850 = -16;
	static int16_t x4851 = 6546;

    t171 = (((x4849|x4850)<=x4851)<<x4852);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x4881 = 8610U;
	int8_t x4882 = -1;
	uint16_t x4884 = 3U;

    t172 = (((x4881|x4882)<=x4883)<<x4884);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x4909 = 0U;
	int16_t x4911 = INT16_MIN;
	uint8_t x4912 = 16U;
	int32_t t173 = -7;

    t173 = (((x4909|x4910)<=x4911)<<x4912);

    if (t173 != 65536) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x4949 = -2;
	uint32_t x4950 = UINT32_MAX;
	static volatile int32_t x4951 = 33059;
	uint16_t x4952 = 1U;
	int32_t t174 = 874998;

    t174 = (((x4949|x4950)<=x4951)<<x4952);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x5005 = 2U;
	int16_t x5006 = -1;
	uint32_t x5007 = 336U;
	uint32_t x5008 = 6U;

    t175 = (((x5005|x5006)<=x5007)<<x5008);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x5057 = -1;
	int8_t x5058 = 1;
	uint8_t x5060 = 2U;
	int32_t t176 = -66646949;

    t176 = (((x5057|x5058)<=x5059)<<x5060);

    if (t176 != 4) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x5117 = UINT8_MAX;
	int32_t x5118 = -1;
	uint8_t x5119 = 9U;
	static int8_t x5120 = 13;

    t177 = (((x5117|x5118)<=x5119)<<x5120);

    if (t177 != 8192) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x5149 = 611;
	uint16_t x5150 = UINT16_MAX;
	static int8_t x5151 = INT8_MAX;
	uint16_t x5152 = 6U;

    t178 = (((x5149|x5150)<=x5151)<<x5152);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x5170 = 151U;
	volatile int64_t x5171 = 24368429409LL;
	uint32_t x5172 = 0U;

    t179 = (((x5169|x5170)<=x5171)<<x5172);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x5242 = UINT64_MAX;
	volatile uint16_t x5243 = 112U;
	uint8_t x5244 = 30U;
	volatile int32_t t180 = -98;

    t180 = (((x5241|x5242)<=x5243)<<x5244);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x5285 = UINT16_MAX;
	int16_t x5287 = -5;
	int8_t x5288 = 19;
	int32_t t181 = -1;

    t181 = (((x5285|x5286)<=x5287)<<x5288);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x5301 = -1LL;
	static int8_t x5302 = 1;
	int16_t x5304 = 23;
	volatile int32_t t182 = -125;

    t182 = (((x5301|x5302)<=x5303)<<x5304);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x5317 = 3;
	int64_t x5318 = INT64_MIN;
	int32_t x5319 = -1;
	uint32_t x5320 = 11U;
	int32_t t183 = 235203651;

    t183 = (((x5317|x5318)<=x5319)<<x5320);

    if (t183 != 2048) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x5321 = 642U;
	static volatile int64_t x5322 = INT64_MAX;
	static int32_t x5323 = INT32_MIN;
	int32_t t184 = 8566;

    t184 = (((x5321|x5322)<=x5323)<<x5324);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x5329 = INT64_MAX;
	static volatile uint8_t x5330 = 38U;
	int16_t x5331 = 3;
	int16_t x5332 = 10;
	int32_t t185 = -2;

    t185 = (((x5329|x5330)<=x5331)<<x5332);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x5349 = -1;
	volatile int16_t x5350 = 17;
	int32_t x5352 = 0;
	volatile int32_t t186 = 19;

    t186 = (((x5349|x5350)<=x5351)<<x5352);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x5397 = 121529942;
	volatile uint8_t x5398 = 2U;
	uint16_t x5400 = 1U;
	static volatile int32_t t187 = 5;

    t187 = (((x5397|x5398)<=x5399)<<x5400);

    if (t187 != 2) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x5406 = INT64_MIN;
	uint16_t x5407 = UINT16_MAX;
	volatile int32_t t188 = -25853;

    t188 = (((x5405|x5406)<=x5407)<<x5408);

    if (t188 != 8192) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x5413 = INT8_MIN;
	static int32_t x5414 = 902431252;
	uint16_t x5416 = 2U;
	volatile int32_t t189 = 5590915;

    t189 = (((x5413|x5414)<=x5415)<<x5416);

    if (t189 != 4) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int64_t x5433 = INT64_MIN;
	int64_t x5434 = -1LL;
	int32_t x5435 = INT32_MIN;
	volatile uint16_t x5436 = 1U;
	int32_t t190 = -346;

    t190 = (((x5433|x5434)<=x5435)<<x5436);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x5457 = -475;
	int16_t x5458 = -6854;
	static int32_t x5459 = 4948774;
	int8_t x5460 = 1;
	static volatile int32_t t191 = 904713261;

    t191 = (((x5457|x5458)<=x5459)<<x5460);

    if (t191 != 2) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x5501 = 628U;
	uint32_t x5502 = 0U;
	int16_t x5503 = INT16_MIN;
	volatile int32_t t192 = 14721;

    t192 = (((x5501|x5502)<=x5503)<<x5504);

    if (t192 != 16384) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x5529 = 1;
	int16_t x5531 = INT16_MIN;
	volatile int32_t t193 = -886399;

    t193 = (((x5529|x5530)<=x5531)<<x5532);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x5545 = INT32_MAX;
	static uint8_t x5546 = 1U;

    t194 = (((x5545|x5546)<=x5547)<<x5548);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x5601 = -1;
	volatile uint32_t x5602 = UINT32_MAX;
	static int8_t x5603 = INT8_MIN;

    t195 = (((x5601|x5602)<=x5603)<<x5604);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x5681 = INT64_MAX;
	int8_t x5682 = INT8_MAX;
	int64_t x5683 = -1LL;
	int8_t x5684 = 11;
	static volatile int32_t t196 = -22524;

    t196 = (((x5681|x5682)<=x5683)<<x5684);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x5833 = 9U;
	int64_t x5835 = INT64_MIN;
	uint16_t x5836 = 6U;
	int32_t t197 = 1428;

    t197 = (((x5833|x5834)<=x5835)<<x5836);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x5901 = INT32_MIN;
	int8_t x5902 = -1;
	int64_t x5903 = -24828666LL;
	int8_t x5904 = 2;
	int32_t t198 = 1236456;

    t198 = (((x5901|x5902)<=x5903)<<x5904);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x5953 = INT8_MIN;
	static int64_t x5954 = -1LL;
	int64_t x5955 = INT64_MAX;
	int32_t t199 = -170592426;

    t199 = (((x5953|x5954)<=x5955)<<x5956);

    if (t199 != 1) { NG(); } else { ; }
	
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


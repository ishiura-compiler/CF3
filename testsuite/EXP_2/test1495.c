
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

static uint16_t x3 = 1U;
volatile int8_t x42 = -10;
int32_t x65 = 4956975;
volatile uint8_t x68 = 4U;
volatile int32_t t4 = -2439973;
int16_t x121 = INT16_MAX;
uint32_t x123 = 5U;
volatile int32_t t5 = 224751;
int32_t x207 = INT32_MIN;
int32_t t8 = 10083;
int16_t x391 = -1;
int32_t t9 = -450;
static volatile int32_t x525 = 103630753;
uint8_t x527 = UINT8_MAX;
uint8_t x616 = 8U;
int32_t t13 = -1678;
static int16_t x641 = INT16_MAX;
static int16_t x643 = -1;
static volatile uint8_t x644 = 1U;
uint32_t x649 = 2132778474U;
static int32_t t16 = -1;
static int32_t x705 = -1;
int8_t x706 = INT8_MIN;
int8_t x708 = 1;
int32_t t17 = -863043;
int64_t x718 = INT64_MAX;
volatile int32_t t18 = -1501;
static int32_t t19 = 27736307;
volatile int32_t t22 = 3464374;
static volatile int32_t t24 = 93;
int8_t x930 = 35;
int16_t x975 = -1;
volatile int32_t t27 = 2908209;
static uint8_t x993 = UINT8_MAX;
static int32_t t29 = -2003696;
volatile uint64_t x1029 = 2955172LLU;
uint32_t x1046 = 4248U;
volatile int64_t x1054 = -1LL;
static uint64_t x1055 = UINT64_MAX;
static int8_t x1075 = INT8_MAX;
int32_t t33 = 653698580;
volatile int32_t t35 = 3;
static int32_t x1151 = INT32_MAX;
int16_t x1153 = INT16_MAX;
int64_t x1235 = INT64_MIN;
int8_t x1236 = 1;
uint32_t x1306 = 1021020448U;
static int8_t x1307 = INT8_MIN;
volatile int32_t x1321 = -1;
static volatile int8_t x1369 = INT8_MIN;
volatile uint16_t x1372 = 6U;
volatile int32_t t42 = -137;
int16_t x1459 = INT16_MIN;
volatile int32_t t44 = 1;
static uint8_t x1517 = 13U;
volatile int32_t t47 = -19556;
int8_t x1593 = -5;
static uint8_t x1595 = 6U;
int32_t t48 = 40210775;
int8_t x1610 = INT8_MIN;
int32_t x1615 = INT32_MAX;
volatile int32_t t51 = -36084;
volatile int32_t x1678 = -1;
volatile int32_t x1685 = -611161;
uint64_t x1686 = 2549107127851LLU;
volatile int32_t t57 = -1301;
int64_t x1929 = -1LL;
uint16_t x2030 = 1489U;
volatile int64_t x2031 = 1423668826LL;
volatile int64_t x2037 = -1LL;
static uint8_t x2040 = 19U;
int8_t x2049 = INT8_MIN;
int32_t t68 = -483150002;
volatile int64_t x2127 = -1LL;
uint8_t x2128 = 2U;
static volatile uint64_t x2172 = 3LLU;
int32_t x2214 = INT32_MIN;
int16_t x2215 = INT16_MAX;
int64_t x2255 = INT64_MIN;
volatile int32_t t74 = 8180198;
int16_t x2265 = INT16_MIN;
volatile int32_t t76 = 12161494;
static volatile int32_t t77 = 214506839;
uint64_t x2428 = 3LLU;
int16_t x2459 = INT16_MIN;
int32_t t80 = 3;
int32_t t81 = 910192184;
static int16_t x2489 = 2457;
static volatile int32_t t82 = -260741369;
static uint64_t x2562 = UINT64_MAX;
int32_t x2563 = INT32_MAX;
static uint16_t x2564 = 1U;
volatile int8_t x2606 = INT8_MIN;
int8_t x2633 = INT8_MAX;
uint8_t x2724 = 0U;
uint32_t x2733 = UINT32_MAX;
static int16_t x2735 = 3104;
uint8_t x2736 = 3U;
int32_t x2741 = -17531820;
static int8_t x2748 = 1;
static int32_t x2779 = -198;
int32_t t95 = -186630261;
uint8_t x2824 = 0U;
static uint16_t x2855 = UINT16_MAX;
volatile int32_t t97 = 2;
int64_t x2866 = -3205LL;
static uint8_t x2905 = 54U;
uint8_t x2908 = 17U;
static volatile int32_t t101 = 1;
int32_t x2953 = INT32_MAX;
static int32_t x2977 = INT32_MIN;
int8_t x2980 = 0;
volatile int16_t x3254 = INT16_MIN;
static uint8_t x3255 = UINT8_MAX;
uint8_t x3344 = 7U;
int64_t x3405 = INT64_MIN;
int16_t x3408 = 2;
static uint32_t x3471 = UINT32_MAX;
uint32_t x3514 = UINT32_MAX;
int32_t x3534 = -126;
volatile int32_t t119 = 2257738;
uint16_t x3560 = 0U;
volatile int32_t x3566 = INT32_MIN;
int8_t x3568 = 3;
int8_t x3589 = -2;
static int32_t t124 = -27011;
uint64_t x3657 = UINT64_MAX;
int64_t x3659 = -1LL;
uint8_t x3660 = 0U;
int32_t t126 = -15489;
volatile int32_t t127 = -230;
volatile int8_t x3742 = -1;
uint16_t x3759 = 1U;
volatile int32_t t129 = -6941021;
volatile uint16_t x3790 = 7705U;
static int8_t x3804 = 1;
volatile int32_t t131 = -944309;
int64_t x3882 = -54885072918182LL;
uint8_t x3972 = 3U;
volatile int32_t t136 = -96;
static volatile int8_t x4022 = -1;
int16_t x4024 = 3;
uint8_t x4027 = 4U;
int8_t x4036 = 0;
int32_t t141 = 1222;
uint32_t x4181 = 37462667U;
int8_t x4182 = -24;
int32_t x4194 = INT32_MIN;
uint16_t x4284 = 23U;
static uint8_t x4292 = 0U;
static uint8_t x4330 = UINT8_MAX;
int64_t x4331 = -1LL;
int8_t x4350 = INT8_MIN;
static volatile int32_t t149 = 107276;
int32_t x4397 = INT32_MIN;
int16_t x4398 = 41;
volatile int32_t t150 = 292;
uint32_t x4447 = 1819U;
int8_t x4461 = 22;
volatile int16_t x4462 = INT16_MAX;
int32_t t153 = 4;
static int32_t t154 = -33335305;
int8_t x4555 = -15;
static int16_t x4598 = -1;
static uint32_t x4599 = 836577U;
uint64_t x4742 = 3717499941148LLU;
uint32_t x4743 = UINT32_MAX;
volatile int8_t x4773 = INT8_MIN;
int32_t x4837 = INT32_MAX;
int32_t t161 = 2783;
int16_t x4852 = 7;
volatile int32_t t162 = -466;
uint16_t x4862 = 7U;
int32_t x4909 = INT32_MIN;
volatile int32_t t165 = 1;
uint64_t x4973 = UINT64_MAX;
int16_t x4986 = -1;
volatile uint8_t x4988 = 0U;
int32_t x5021 = INT32_MIN;
uint8_t x5024 = 0U;
volatile int32_t t170 = 672987;
int32_t x5122 = INT32_MIN;
uint16_t x5124 = 5U;
uint8_t x5126 = 8U;
uint64_t x5147 = UINT64_MAX;
int32_t t173 = 154058;
int16_t x5267 = 200;
static int16_t x5327 = INT16_MIN;
uint8_t x5331 = 30U;
uint8_t x5384 = 7U;
uint64_t x5391 = 35660877356737456LLU;
uint8_t x5392 = 10U;
uint16_t x5481 = 1U;
int8_t x5486 = -3;
volatile int64_t x5567 = INT64_MIN;
int8_t x5568 = 2;
volatile uint8_t x5604 = 25U;
int64_t x5622 = -59029968LL;
int32_t x5810 = INT32_MAX;
static volatile int64_t x5873 = 3666LL;
int16_t x5876 = 1;
int32_t t192 = 0;
uint16_t x5881 = UINT16_MAX;
int16_t x5910 = INT16_MIN;
volatile uint16_t x5957 = 3523U;
volatile uint16_t x5960 = 24U;
volatile int8_t x5963 = INT8_MAX;
uint64_t x5964 = 8LLU;
int32_t x5986 = -3501;
int8_t x5987 = 7;
static int8_t x5988 = 0;


void f0(void) {
    	int16_t x1 = -1;
	static volatile int32_t x2 = -1;
	static uint8_t x4 = 21U;
	volatile int32_t t0 = 7;

    t0 = ((x1>(x2==x3))>>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x21 = UINT64_MAX;
	int16_t x22 = -1;
	uint32_t x23 = 504U;
	static uint8_t x24 = 7U;
	volatile int32_t t1 = -999;

    t1 = ((x21>(x22==x23))>>x24);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x33 = 1;
	int8_t x34 = INT8_MAX;
	uint64_t x35 = UINT64_MAX;
	static uint8_t x36 = 6U;
	volatile int32_t t2 = -50687;

    t2 = ((x33>(x34==x35))>>x36);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x41 = 11;
	uint8_t x43 = 6U;
	uint8_t x44 = 7U;
	int32_t t3 = -2311;

    t3 = ((x41>(x42==x43))>>x44);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x66 = UINT8_MAX;
	static uint8_t x67 = 46U;

    t4 = ((x65>(x66==x67))>>x68);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x122 = 317503534;
	static int16_t x124 = 4;

    t5 = ((x121>(x122==x123))>>x124);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x177 = -1;
	static int64_t x178 = 556LL;
	uint16_t x179 = 737U;
	int32_t x180 = 1;
	static int32_t t6 = 97033;

    t6 = ((x177>(x178==x179))>>x180);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x205 = -257040756;
	volatile int8_t x206 = INT8_MIN;
	int8_t x208 = 11;
	static int32_t t7 = -1087304;

    t7 = ((x205>(x206==x207))>>x208);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x297 = INT64_MIN;
	int64_t x298 = INT64_MIN;
	uint8_t x299 = 4U;
	uint8_t x300 = 6U;

    t8 = ((x297>(x298==x299))>>x300);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x389 = -1;
	int16_t x390 = -1;
	static int8_t x392 = 3;

    t9 = ((x389>(x390==x391))>>x392);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x526 = -3601998;
	volatile int8_t x528 = 0;
	int32_t t10 = 278036800;

    t10 = ((x525>(x526==x527))>>x528);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x541 = INT64_MIN;
	volatile uint16_t x542 = 8U;
	int64_t x543 = -1LL;
	uint16_t x544 = 2U;
	volatile int32_t t11 = 13583;

    t11 = ((x541>(x542==x543))>>x544);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x557 = 33U;
	int16_t x558 = INT16_MAX;
	uint32_t x559 = UINT32_MAX;
	int8_t x560 = 0;
	int32_t t12 = 4870718;

    t12 = ((x557>(x558==x559))>>x560);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x613 = -1;
	int16_t x614 = INT16_MAX;
	uint32_t x615 = 482085786U;

    t13 = ((x613>(x614==x615))>>x616);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x642 = INT64_MIN;
	volatile int32_t t14 = 5943;

    t14 = ((x641>(x642==x643))>>x644);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x650 = -3021;
	int8_t x651 = INT8_MIN;
	int8_t x652 = 0;
	static int32_t t15 = -310;

    t15 = ((x649>(x650==x651))>>x652);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x693 = 436U;
	int8_t x694 = 0;
	int8_t x695 = -1;
	uint8_t x696 = 7U;

    t16 = ((x693>(x694==x695))>>x696);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x707 = INT8_MIN;

    t17 = ((x705>(x706==x707))>>x708);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x717 = 0U;
	static int32_t x719 = 7;
	volatile uint8_t x720 = 5U;

    t18 = ((x717>(x718==x719))>>x720);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x749 = 3720452U;
	volatile int16_t x750 = INT16_MIN;
	static uint16_t x751 = UINT16_MAX;
	static volatile uint16_t x752 = 4U;

    t19 = ((x749>(x750==x751))>>x752);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x757 = -59185218;
	volatile uint64_t x758 = 4506703638015657102LLU;
	int64_t x759 = INT64_MIN;
	int8_t x760 = 30;
	int32_t t20 = 1047824733;

    t20 = ((x757>(x758==x759))>>x760);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x829 = 3442467928899275LLU;
	int16_t x830 = 1;
	uint8_t x831 = UINT8_MAX;
	static volatile uint8_t x832 = 7U;
	volatile int32_t t21 = 9;

    t21 = ((x829>(x830==x831))>>x832);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x865 = 725U;
	int32_t x866 = INT32_MIN;
	static int16_t x867 = 0;
	static uint8_t x868 = 7U;

    t22 = ((x865>(x866==x867))>>x868);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x885 = 11842U;
	uint32_t x886 = 5027U;
	uint32_t x887 = 122874U;
	static uint16_t x888 = 30U;
	static volatile int32_t t23 = -197;

    t23 = ((x885>(x886==x887))>>x888);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x893 = INT64_MIN;
	uint64_t x894 = 1807909824LLU;
	uint8_t x895 = UINT8_MAX;
	static int8_t x896 = 0;

    t24 = ((x893>(x894==x895))>>x896);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x929 = UINT64_MAX;
	volatile int32_t x931 = -1;
	uint16_t x932 = 6U;
	static int32_t t25 = 258660783;

    t25 = ((x929>(x930==x931))>>x932);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x973 = 503U;
	int64_t x974 = 1599739701058LL;
	uint32_t x976 = 0U;
	int32_t t26 = 5623;

    t26 = ((x973>(x974==x975))>>x976);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x977 = INT16_MIN;
	static volatile uint8_t x978 = 5U;
	uint32_t x979 = UINT32_MAX;
	uint16_t x980 = 1U;

    t27 = ((x977>(x978==x979))>>x980);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x989 = -354429;
	int8_t x990 = INT8_MAX;
	static int8_t x991 = INT8_MIN;
	int64_t x992 = 2LL;
	int32_t t28 = -1304995;

    t28 = ((x989>(x990==x991))>>x992);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x994 = -516209LL;
	int16_t x995 = INT16_MAX;
	static uint64_t x996 = 7LLU;

    t29 = ((x993>(x994==x995))>>x996);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x1030 = 4932;
	uint64_t x1031 = 773683939676948LLU;
	uint8_t x1032 = 6U;
	int32_t t30 = -557;

    t30 = ((x1029>(x1030==x1031))>>x1032);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x1045 = INT8_MIN;
	uint64_t x1047 = 8178659222045961LLU;
	uint8_t x1048 = 0U;
	static int32_t t31 = -346387544;

    t31 = ((x1045>(x1046==x1047))>>x1048);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x1053 = -2547344330347356867LL;
	uint8_t x1056 = 7U;
	static volatile int32_t t32 = -9326;

    t32 = ((x1053>(x1054==x1055))>>x1056);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x1073 = 8067191407590LLU;
	int8_t x1074 = -1;
	int8_t x1076 = 2;

    t33 = ((x1073>(x1074==x1075))>>x1076);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x1077 = -1LL;
	int16_t x1078 = -1;
	uint16_t x1079 = 0U;
	volatile uint8_t x1080 = 6U;
	volatile int32_t t34 = -353;

    t34 = ((x1077>(x1078==x1079))>>x1080);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x1089 = 936LL;
	static volatile int64_t x1090 = INT64_MIN;
	uint16_t x1091 = 103U;
	static uint8_t x1092 = 31U;

    t35 = ((x1089>(x1090==x1091))>>x1092);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x1149 = UINT32_MAX;
	int32_t x1150 = -1;
	int8_t x1152 = 4;
	volatile int32_t t36 = 103190673;

    t36 = ((x1149>(x1150==x1151))>>x1152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x1154 = -1;
	volatile int16_t x1155 = 75;
	int32_t x1156 = 9;
	volatile int32_t t37 = 7262;

    t37 = ((x1153>(x1154==x1155))>>x1156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x1233 = -1;
	volatile uint16_t x1234 = UINT16_MAX;
	int32_t t38 = -1;

    t38 = ((x1233>(x1234==x1235))>>x1236);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x1305 = INT64_MAX;
	int8_t x1308 = 3;
	volatile int32_t t39 = 5;

    t39 = ((x1305>(x1306==x1307))>>x1308);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x1322 = 268904073LL;
	uint8_t x1323 = 65U;
	uint8_t x1324 = 1U;
	static int32_t t40 = -299014;

    t40 = ((x1321>(x1322==x1323))>>x1324);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x1353 = UINT16_MAX;
	uint64_t x1354 = UINT64_MAX;
	int64_t x1355 = INT64_MAX;
	int8_t x1356 = 14;
	int32_t t41 = -121;

    t41 = ((x1353>(x1354==x1355))>>x1356);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x1370 = -45;
	int8_t x1371 = INT8_MAX;

    t42 = ((x1369>(x1370==x1371))>>x1372);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x1441 = 1U;
	uint64_t x1442 = 597415690727LLU;
	static int16_t x1443 = INT16_MIN;
	uint16_t x1444 = 6U;
	int32_t t43 = 8950338;

    t43 = ((x1441>(x1442==x1443))>>x1444);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x1457 = INT64_MIN;
	int64_t x1458 = INT64_MIN;
	static uint8_t x1460 = 1U;

    t44 = ((x1457>(x1458==x1459))>>x1460);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x1518 = INT32_MAX;
	int32_t x1519 = INT32_MIN;
	uint16_t x1520 = 1U;
	volatile int32_t t45 = 36077;

    t45 = ((x1517>(x1518==x1519))>>x1520);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int32_t x1525 = -1;
	static int64_t x1526 = -1LL;
	int64_t x1527 = INT64_MIN;
	int32_t x1528 = 13;
	volatile int32_t t46 = 65330;

    t46 = ((x1525>(x1526==x1527))>>x1528);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x1577 = 1U;
	int16_t x1578 = -1;
	int16_t x1579 = -1;
	uint32_t x1580 = 31U;

    t47 = ((x1577>(x1578==x1579))>>x1580);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x1594 = 404132040416146LLU;
	static volatile uint16_t x1596 = 24U;

    t48 = ((x1593>(x1594==x1595))>>x1596);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x1609 = INT8_MIN;
	int32_t x1611 = -1;
	uint16_t x1612 = 0U;
	static int32_t t49 = -682;

    t49 = ((x1609>(x1610==x1611))>>x1612);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x1613 = -206136159;
	volatile uint32_t x1614 = UINT32_MAX;
	volatile uint64_t x1616 = 20LLU;
	volatile int32_t t50 = -201114;

    t50 = ((x1613>(x1614==x1615))>>x1616);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x1645 = INT16_MIN;
	volatile int32_t x1646 = -760869790;
	int16_t x1647 = -1;
	uint8_t x1648 = 8U;

    t51 = ((x1645>(x1646==x1647))>>x1648);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x1665 = 20037LL;
	int64_t x1666 = -1LL;
	uint64_t x1667 = 1142268038487318910LLU;
	static int8_t x1668 = 5;
	int32_t t52 = -4;

    t52 = ((x1665>(x1666==x1667))>>x1668);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x1673 = 507U;
	int64_t x1674 = -10636949LL;
	uint64_t x1675 = 1552417470526163504LLU;
	int8_t x1676 = 21;
	static int32_t t53 = 5;

    t53 = ((x1673>(x1674==x1675))>>x1676);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x1677 = UINT64_MAX;
	int8_t x1679 = 12;
	uint8_t x1680 = 3U;
	volatile int32_t t54 = 1;

    t54 = ((x1677>(x1678==x1679))>>x1680);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x1687 = 3U;
	uint32_t x1688 = 30U;
	static int32_t t55 = -1;

    t55 = ((x1685>(x1686==x1687))>>x1688);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x1745 = UINT16_MAX;
	volatile uint8_t x1746 = 19U;
	static volatile uint8_t x1747 = UINT8_MAX;
	uint8_t x1748 = 1U;
	int32_t t56 = 1;

    t56 = ((x1745>(x1746==x1747))>>x1748);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x1781 = 1156;
	volatile int32_t x1782 = 2;
	int16_t x1783 = 18;
	static uint8_t x1784 = 0U;

    t57 = ((x1781>(x1782==x1783))>>x1784);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x1793 = INT64_MAX;
	int32_t x1794 = -1146;
	static int16_t x1795 = -1;
	int32_t x1796 = 2;
	static int32_t t58 = -1419398;

    t58 = ((x1793>(x1794==x1795))>>x1796);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x1805 = -1;
	int8_t x1806 = INT8_MIN;
	volatile uint64_t x1807 = 8257450982364LLU;
	uint8_t x1808 = 0U;
	volatile int32_t t59 = 716;

    t59 = ((x1805>(x1806==x1807))>>x1808);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x1909 = UINT8_MAX;
	int64_t x1910 = INT64_MIN;
	static uint8_t x1911 = 1U;
	uint8_t x1912 = 7U;
	int32_t t60 = -1;

    t60 = ((x1909>(x1910==x1911))>>x1912);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x1930 = -5;
	static int32_t x1931 = -6793;
	volatile int8_t x1932 = 0;
	volatile int32_t t61 = -6298121;

    t61 = ((x1929>(x1930==x1931))>>x1932);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x1993 = 5557179741194478LL;
	volatile int16_t x1994 = -1;
	uint16_t x1995 = 7789U;
	volatile uint8_t x1996 = 2U;
	static volatile int32_t t62 = -16713501;

    t62 = ((x1993>(x1994==x1995))>>x1996);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x1997 = INT8_MIN;
	int16_t x1998 = 93;
	int8_t x1999 = 1;
	int16_t x2000 = 29;
	volatile int32_t t63 = -7608;

    t63 = ((x1997>(x1998==x1999))>>x2000);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x2029 = INT32_MIN;
	static volatile uint32_t x2032 = 12U;
	volatile int32_t t64 = -548;

    t64 = ((x2029>(x2030==x2031))>>x2032);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x2038 = -30;
	uint64_t x2039 = 1007LLU;
	int32_t t65 = 15;

    t65 = ((x2037>(x2038==x2039))>>x2040);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x2041 = 502U;
	uint64_t x2042 = UINT64_MAX;
	int8_t x2043 = 26;
	int8_t x2044 = 7;
	volatile int32_t t66 = 230;

    t66 = ((x2041>(x2042==x2043))>>x2044);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x2045 = -12;
	int64_t x2046 = 1566303LL;
	uint32_t x2047 = 9779484U;
	static uint8_t x2048 = 0U;
	int32_t t67 = -12;

    t67 = ((x2045>(x2046==x2047))>>x2048);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x2050 = -1;
	int32_t x2051 = INT32_MAX;
	int16_t x2052 = 1;

    t68 = ((x2049>(x2050==x2051))>>x2052);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x2061 = -1;
	int32_t x2062 = -124520019;
	uint16_t x2063 = 13464U;
	int16_t x2064 = 0;
	int32_t t69 = -76;

    t69 = ((x2061>(x2062==x2063))>>x2064);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x2125 = UINT16_MAX;
	int16_t x2126 = 46;
	int32_t t70 = -4975923;

    t70 = ((x2125>(x2126==x2127))>>x2128);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x2169 = INT8_MAX;
	int64_t x2170 = -1LL;
	uint64_t x2171 = 1270869LLU;
	static volatile int32_t t71 = -1151626;

    t71 = ((x2169>(x2170==x2171))>>x2172);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x2213 = -46;
	volatile int8_t x2216 = 0;
	int32_t t72 = 1983408;

    t72 = ((x2213>(x2214==x2215))>>x2216);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x2217 = INT16_MAX;
	static int64_t x2218 = INT64_MAX;
	int64_t x2219 = -6912LL;
	uint8_t x2220 = 0U;
	volatile int32_t t73 = -15181;

    t73 = ((x2217>(x2218==x2219))>>x2220);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x2253 = 1U;
	static int64_t x2254 = INT64_MIN;
	volatile int8_t x2256 = 3;

    t74 = ((x2253>(x2254==x2255))>>x2256);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x2266 = 43756U;
	volatile int16_t x2267 = 320;
	volatile uint8_t x2268 = 3U;
	volatile int32_t t75 = 1069891516;

    t75 = ((x2265>(x2266==x2267))>>x2268);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x2277 = -1LL;
	uint8_t x2278 = UINT8_MAX;
	uint8_t x2279 = UINT8_MAX;
	uint16_t x2280 = 14U;

    t76 = ((x2277>(x2278==x2279))>>x2280);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x2301 = UINT32_MAX;
	int32_t x2302 = 222182949;
	uint32_t x2303 = 65U;
	uint16_t x2304 = 1U;

    t77 = ((x2301>(x2302==x2303))>>x2304);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x2305 = INT8_MIN;
	int16_t x2306 = -3876;
	static int16_t x2307 = -22;
	int8_t x2308 = 13;
	volatile int32_t t78 = -14040;

    t78 = ((x2305>(x2306==x2307))>>x2308);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x2425 = 128LL;
	uint32_t x2426 = 8268U;
	int16_t x2427 = -403;
	int32_t t79 = -16;

    t79 = ((x2425>(x2426==x2427))>>x2428);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x2457 = INT8_MAX;
	int8_t x2458 = INT8_MAX;
	int16_t x2460 = 1;

    t80 = ((x2457>(x2458==x2459))>>x2460);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x2469 = -2;
	static int8_t x2470 = -45;
	int8_t x2471 = -1;
	uint16_t x2472 = 8U;

    t81 = ((x2469>(x2470==x2471))>>x2472);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x2490 = 303353;
	static int8_t x2491 = INT8_MIN;
	int8_t x2492 = 0;

    t82 = ((x2489>(x2490==x2491))>>x2492);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x2517 = 0;
	volatile int32_t x2518 = -75377409;
	int32_t x2519 = INT32_MAX;
	static int8_t x2520 = 1;
	int32_t t83 = -1177600;

    t83 = ((x2517>(x2518==x2519))>>x2520);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x2553 = -5;
	int8_t x2554 = INT8_MAX;
	uint64_t x2555 = UINT64_MAX;
	uint16_t x2556 = 27U;
	volatile int32_t t84 = -103;

    t84 = ((x2553>(x2554==x2555))>>x2556);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x2561 = INT16_MIN;
	int32_t t85 = 236422;

    t85 = ((x2561>(x2562==x2563))>>x2564);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x2605 = INT32_MIN;
	int64_t x2607 = 1991467236858887795LL;
	uint16_t x2608 = 5U;
	int32_t t86 = -217685564;

    t86 = ((x2605>(x2606==x2607))>>x2608);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x2634 = 150U;
	static int64_t x2635 = 60496958011628094LL;
	volatile uint8_t x2636 = 1U;
	static volatile int32_t t87 = 349710351;

    t87 = ((x2633>(x2634==x2635))>>x2636);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x2657 = -1;
	uint32_t x2658 = UINT32_MAX;
	volatile uint64_t x2659 = UINT64_MAX;
	uint16_t x2660 = 1U;
	volatile int32_t t88 = 821158355;

    t88 = ((x2657>(x2658==x2659))>>x2660);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x2669 = INT64_MAX;
	static int8_t x2670 = -1;
	int64_t x2671 = INT64_MIN;
	int8_t x2672 = 0;
	volatile int32_t t89 = 298336667;

    t89 = ((x2669>(x2670==x2671))>>x2672);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x2721 = INT64_MIN;
	int8_t x2722 = -2;
	uint8_t x2723 = 6U;
	volatile int32_t t90 = 474384677;

    t90 = ((x2721>(x2722==x2723))>>x2724);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x2725 = INT8_MIN;
	int8_t x2726 = 2;
	static volatile int8_t x2727 = -1;
	uint16_t x2728 = 3U;
	int32_t t91 = 1;

    t91 = ((x2725>(x2726==x2727))>>x2728);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x2734 = 1038115246LLU;
	int32_t t92 = -52;

    t92 = ((x2733>(x2734==x2735))>>x2736);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x2742 = 5921089364080179183LLU;
	int32_t x2743 = INT32_MIN;
	volatile uint16_t x2744 = 1U;
	static volatile int32_t t93 = 85707115;

    t93 = ((x2741>(x2742==x2743))>>x2744);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x2745 = INT8_MIN;
	static int64_t x2746 = INT64_MAX;
	static int64_t x2747 = INT64_MIN;
	int32_t t94 = -68278996;

    t94 = ((x2745>(x2746==x2747))>>x2748);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x2777 = 645U;
	volatile int8_t x2778 = -3;
	uint8_t x2780 = 7U;

    t95 = ((x2777>(x2778==x2779))>>x2780);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x2821 = 1670U;
	int8_t x2822 = INT8_MIN;
	volatile uint16_t x2823 = 7U;
	static volatile int32_t t96 = -217178554;

    t96 = ((x2821>(x2822==x2823))>>x2824);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x2853 = INT32_MIN;
	volatile uint64_t x2854 = 17798LLU;
	static int8_t x2856 = 2;

    t97 = ((x2853>(x2854==x2855))>>x2856);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x2865 = 31108U;
	int16_t x2867 = 14;
	int8_t x2868 = 24;
	static volatile int32_t t98 = -1855004;

    t98 = ((x2865>(x2866==x2867))>>x2868);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x2877 = INT16_MIN;
	int16_t x2878 = -21;
	int8_t x2879 = -60;
	static uint8_t x2880 = 0U;
	int32_t t99 = 531;

    t99 = ((x2877>(x2878==x2879))>>x2880);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int64_t x2889 = INT64_MAX;
	volatile int16_t x2890 = -1;
	int32_t x2891 = INT32_MIN;
	volatile uint8_t x2892 = 9U;
	volatile int32_t t100 = -211;

    t100 = ((x2889>(x2890==x2891))>>x2892);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x2906 = INT16_MIN;
	volatile int64_t x2907 = INT64_MIN;

    t101 = ((x2905>(x2906==x2907))>>x2908);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x2925 = INT64_MIN;
	volatile uint16_t x2926 = 3226U;
	volatile uint16_t x2927 = 11U;
	volatile uint8_t x2928 = 0U;
	int32_t t102 = -51227516;

    t102 = ((x2925>(x2926==x2927))>>x2928);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x2937 = INT8_MAX;
	int64_t x2938 = INT64_MAX;
	int16_t x2939 = INT16_MIN;
	static uint8_t x2940 = 0U;
	volatile int32_t t103 = -58764;

    t103 = ((x2937>(x2938==x2939))>>x2940);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x2941 = INT32_MIN;
	uint64_t x2942 = 6208LLU;
	uint16_t x2943 = 1453U;
	uint16_t x2944 = 16U;
	volatile int32_t t104 = 89428293;

    t104 = ((x2941>(x2942==x2943))>>x2944);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x2954 = -50;
	int16_t x2955 = -1;
	volatile uint16_t x2956 = 27U;
	int32_t t105 = 0;

    t105 = ((x2953>(x2954==x2955))>>x2956);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x2973 = INT64_MIN;
	int32_t x2974 = -1;
	static volatile int64_t x2975 = 219738450323LL;
	int8_t x2976 = 0;
	int32_t t106 = -5928752;

    t106 = ((x2973>(x2974==x2975))>>x2976);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x2978 = 0U;
	int16_t x2979 = 792;
	int32_t t107 = -8233245;

    t107 = ((x2977>(x2978==x2979))>>x2980);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x2989 = 18076U;
	int8_t x2990 = -30;
	int16_t x2991 = 1;
	static uint8_t x2992 = 2U;
	volatile int32_t t108 = 418;

    t108 = ((x2989>(x2990==x2991))>>x2992);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x3069 = -5;
	volatile int8_t x3070 = -1;
	uint16_t x3071 = UINT16_MAX;
	static uint8_t x3072 = 0U;
	int32_t t109 = 156398;

    t109 = ((x3069>(x3070==x3071))>>x3072);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x3105 = -1;
	volatile int8_t x3106 = 3;
	int8_t x3107 = INT8_MIN;
	static int16_t x3108 = 14;
	int32_t t110 = -170;

    t110 = ((x3105>(x3106==x3107))>>x3108);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x3209 = -1;
	int32_t x3210 = -1;
	volatile int32_t x3211 = -1;
	uint8_t x3212 = 1U;
	int32_t t111 = 303;

    t111 = ((x3209>(x3210==x3211))>>x3212);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x3241 = 3501;
	int8_t x3242 = 1;
	static uint32_t x3243 = 128427240U;
	int8_t x3244 = 4;
	static int32_t t112 = -4952955;

    t112 = ((x3241>(x3242==x3243))>>x3244);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x3253 = 104U;
	int64_t x3256 = 1LL;
	volatile int32_t t113 = -1;

    t113 = ((x3253>(x3254==x3255))>>x3256);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x3341 = 64694717LLU;
	int16_t x3342 = -1;
	int8_t x3343 = -1;
	static int32_t t114 = 234137708;

    t114 = ((x3341>(x3342==x3343))>>x3344);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x3401 = UINT8_MAX;
	int32_t x3402 = INT32_MIN;
	int16_t x3403 = 12775;
	uint8_t x3404 = 1U;
	volatile int32_t t115 = 30;

    t115 = ((x3401>(x3402==x3403))>>x3404);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x3406 = 35;
	int8_t x3407 = -47;
	int32_t t116 = -20925;

    t116 = ((x3405>(x3406==x3407))>>x3408);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x3469 = -1LL;
	int8_t x3470 = 0;
	static volatile int8_t x3472 = 1;
	volatile int32_t t117 = -493455261;

    t117 = ((x3469>(x3470==x3471))>>x3472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x3513 = 45;
	int16_t x3515 = INT16_MIN;
	uint8_t x3516 = 22U;
	int32_t t118 = 7261302;

    t118 = ((x3513>(x3514==x3515))>>x3516);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x3533 = -6;
	int32_t x3535 = 7;
	int8_t x3536 = 0;

    t119 = ((x3533>(x3534==x3535))>>x3536);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x3557 = INT8_MIN;
	int64_t x3558 = -1LL;
	int8_t x3559 = INT8_MIN;
	int32_t t120 = -49293860;

    t120 = ((x3557>(x3558==x3559))>>x3560);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x3565 = -982691LL;
	int8_t x3567 = -1;
	int32_t t121 = -844776;

    t121 = ((x3565>(x3566==x3567))>>x3568);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x3577 = INT8_MIN;
	int8_t x3578 = -1;
	uint8_t x3579 = 1U;
	int64_t x3580 = 1LL;
	int32_t t122 = -6;

    t122 = ((x3577>(x3578==x3579))>>x3580);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x3590 = INT8_MIN;
	uint8_t x3591 = UINT8_MAX;
	int64_t x3592 = 0LL;
	int32_t t123 = -1;

    t123 = ((x3589>(x3590==x3591))>>x3592);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x3629 = UINT64_MAX;
	static int64_t x3630 = INT64_MIN;
	volatile uint64_t x3631 = UINT64_MAX;
	uint8_t x3632 = 3U;

    t124 = ((x3629>(x3630==x3631))>>x3632);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x3637 = INT8_MIN;
	volatile uint8_t x3638 = 29U;
	uint32_t x3639 = UINT32_MAX;
	uint64_t x3640 = 16LLU;
	int32_t t125 = -25771547;

    t125 = ((x3637>(x3638==x3639))>>x3640);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x3658 = -1;

    t126 = ((x3657>(x3658==x3659))>>x3660);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x3693 = 60179U;
	uint64_t x3694 = 3LLU;
	uint8_t x3695 = 32U;
	uint64_t x3696 = 1LLU;

    t127 = ((x3693>(x3694==x3695))>>x3696);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x3741 = INT16_MIN;
	volatile int32_t x3743 = -1;
	uint8_t x3744 = 0U;
	int32_t t128 = 19485327;

    t128 = ((x3741>(x3742==x3743))>>x3744);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x3757 = 175644527LLU;
	uint16_t x3758 = UINT16_MAX;
	static int16_t x3760 = 3;

    t129 = ((x3757>(x3758==x3759))>>x3760);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x3789 = INT8_MAX;
	static int32_t x3791 = -2036;
	uint64_t x3792 = 11LLU;
	volatile int32_t t130 = -6514;

    t130 = ((x3789>(x3790==x3791))>>x3792);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x3801 = -7;
	static int16_t x3802 = -1;
	static volatile int32_t x3803 = INT32_MAX;

    t131 = ((x3801>(x3802==x3803))>>x3804);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x3881 = INT8_MIN;
	int8_t x3883 = INT8_MIN;
	uint8_t x3884 = 2U;
	int32_t t132 = 258165209;

    t132 = ((x3881>(x3882==x3883))>>x3884);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x3937 = INT32_MAX;
	static volatile int32_t x3938 = -1013694;
	uint8_t x3939 = 42U;
	volatile uint8_t x3940 = 10U;
	volatile int32_t t133 = -13723;

    t133 = ((x3937>(x3938==x3939))>>x3940);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x3945 = INT16_MAX;
	static int16_t x3946 = -13044;
	int8_t x3947 = INT8_MAX;
	int16_t x3948 = 28;
	int32_t t134 = -31319692;

    t134 = ((x3945>(x3946==x3947))>>x3948);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x3969 = INT8_MIN;
	static int64_t x3970 = -2417576279LL;
	static int32_t x3971 = INT32_MIN;
	volatile int32_t t135 = -1940;

    t135 = ((x3969>(x3970==x3971))>>x3972);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x3993 = -1;
	int64_t x3994 = INT64_MIN;
	int32_t x3995 = INT32_MIN;
	volatile uint8_t x3996 = 26U;

    t136 = ((x3993>(x3994==x3995))>>x3996);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x4021 = 74;
	uint64_t x4023 = 1695LLU;
	int32_t t137 = 11;

    t137 = ((x4021>(x4022==x4023))>>x4024);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x4025 = INT8_MIN;
	int32_t x4026 = INT32_MAX;
	volatile int16_t x4028 = 4;
	int32_t t138 = -1648;

    t138 = ((x4025>(x4026==x4027))>>x4028);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x4033 = INT16_MIN;
	int64_t x4034 = INT64_MIN;
	int8_t x4035 = INT8_MIN;
	int32_t t139 = -13382871;

    t139 = ((x4033>(x4034==x4035))>>x4036);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x4077 = INT8_MIN;
	int32_t x4078 = INT32_MIN;
	int8_t x4079 = 5;
	uint32_t x4080 = 1U;
	int32_t t140 = 64824;

    t140 = ((x4077>(x4078==x4079))>>x4080);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x4101 = 1U;
	int8_t x4102 = INT8_MAX;
	int32_t x4103 = -1;
	int16_t x4104 = 1;

    t141 = ((x4101>(x4102==x4103))>>x4104);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x4169 = -15101405300088LL;
	static volatile int64_t x4170 = INT64_MIN;
	static int32_t x4171 = -1;
	static int8_t x4172 = 8;
	int32_t t142 = -14453;

    t142 = ((x4169>(x4170==x4171))>>x4172);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x4183 = UINT16_MAX;
	uint8_t x4184 = 3U;
	volatile int32_t t143 = 7506;

    t143 = ((x4181>(x4182==x4183))>>x4184);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x4193 = -1LL;
	static uint16_t x4195 = UINT16_MAX;
	int16_t x4196 = 1;
	int32_t t144 = 60672150;

    t144 = ((x4193>(x4194==x4195))>>x4196);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x4249 = INT16_MIN;
	volatile uint64_t x4250 = 42905045842769190LLU;
	volatile int32_t x4251 = -1;
	uint16_t x4252 = 5U;
	int32_t t145 = -24564119;

    t145 = ((x4249>(x4250==x4251))>>x4252);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x4281 = 1861299;
	int64_t x4282 = INT64_MAX;
	int8_t x4283 = -63;
	int32_t t146 = -18083;

    t146 = ((x4281>(x4282==x4283))>>x4284);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x4289 = INT8_MIN;
	int32_t x4290 = -16346894;
	static int8_t x4291 = INT8_MIN;
	static int32_t t147 = 1;

    t147 = ((x4289>(x4290==x4291))>>x4292);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x4329 = 76;
	uint8_t x4332 = 13U;
	volatile int32_t t148 = 228226230;

    t148 = ((x4329>(x4330==x4331))>>x4332);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x4349 = INT32_MIN;
	int64_t x4351 = -1LL;
	int8_t x4352 = 3;

    t149 = ((x4349>(x4350==x4351))>>x4352);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x4399 = 7829701;
	uint8_t x4400 = 20U;

    t150 = ((x4397>(x4398==x4399))>>x4400);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x4445 = -13;
	int8_t x4446 = -1;
	uint8_t x4448 = 1U;
	volatile int32_t t151 = -807;

    t151 = ((x4445>(x4446==x4447))>>x4448);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x4463 = -960242626640158LL;
	int8_t x4464 = 0;
	int32_t t152 = -54282;

    t152 = ((x4461>(x4462==x4463))>>x4464);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x4477 = UINT32_MAX;
	int8_t x4478 = INT8_MIN;
	volatile uint32_t x4479 = 20583003U;
	volatile uint8_t x4480 = 1U;

    t153 = ((x4477>(x4478==x4479))>>x4480);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint8_t x4525 = 63U;
	volatile uint8_t x4526 = 1U;
	int32_t x4527 = -862869491;
	static volatile int8_t x4528 = 25;

    t154 = ((x4525>(x4526==x4527))>>x4528);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x4553 = -317;
	int32_t x4554 = -1;
	int8_t x4556 = 15;
	int32_t t155 = 98917704;

    t155 = ((x4553>(x4554==x4555))>>x4556);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x4561 = UINT32_MAX;
	uint16_t x4562 = UINT16_MAX;
	int16_t x4563 = -1;
	static uint16_t x4564 = 1U;
	static int32_t t156 = -1963;

    t156 = ((x4561>(x4562==x4563))>>x4564);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x4597 = -30;
	uint8_t x4600 = 19U;
	volatile int32_t t157 = -93;

    t157 = ((x4597>(x4598==x4599))>>x4600);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x4685 = -1;
	volatile uint64_t x4686 = 1699788954760370LLU;
	int64_t x4687 = INT64_MIN;
	static int8_t x4688 = 3;
	static volatile int32_t t158 = 27032950;

    t158 = ((x4685>(x4686==x4687))>>x4688);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x4741 = INT16_MIN;
	int16_t x4744 = 1;
	int32_t t159 = -1;

    t159 = ((x4741>(x4742==x4743))>>x4744);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x4774 = 2LLU;
	volatile int8_t x4775 = INT8_MIN;
	volatile uint8_t x4776 = 2U;
	static volatile int32_t t160 = 7648541;

    t160 = ((x4773>(x4774==x4775))>>x4776);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x4838 = 122U;
	uint16_t x4839 = 4146U;
	volatile uint8_t x4840 = 29U;

    t161 = ((x4837>(x4838==x4839))>>x4840);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x4849 = INT64_MIN;
	static uint8_t x4850 = 5U;
	static int64_t x4851 = -1LL;

    t162 = ((x4849>(x4850==x4851))>>x4852);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint8_t x4861 = 1U;
	static int16_t x4863 = INT16_MIN;
	volatile int8_t x4864 = 0;
	volatile int32_t t163 = 19;

    t163 = ((x4861>(x4862==x4863))>>x4864);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x4873 = -4500;
	uint32_t x4874 = 1U;
	static uint16_t x4875 = UINT16_MAX;
	int8_t x4876 = 9;
	static volatile int32_t t164 = 104129949;

    t164 = ((x4873>(x4874==x4875))>>x4876);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x4910 = INT8_MIN;
	volatile int8_t x4911 = -26;
	uint8_t x4912 = 0U;

    t165 = ((x4909>(x4910==x4911))>>x4912);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x4974 = INT32_MAX;
	int8_t x4975 = 5;
	int16_t x4976 = 23;
	volatile int32_t t166 = 2;

    t166 = ((x4973>(x4974==x4975))>>x4976);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x4985 = 11456U;
	static int16_t x4987 = 0;
	volatile int32_t t167 = 59108;

    t167 = ((x4985>(x4986==x4987))>>x4988);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x4989 = 2473812;
	int32_t x4990 = INT32_MAX;
	volatile int16_t x4991 = -1;
	static uint8_t x4992 = 1U;
	static volatile int32_t t168 = 4849309;

    t168 = ((x4989>(x4990==x4991))>>x4992);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x5001 = 7468;
	volatile int16_t x5002 = -1;
	static uint32_t x5003 = 164981321U;
	uint64_t x5004 = 0LLU;
	int32_t t169 = 367518;

    t169 = ((x5001>(x5002==x5003))>>x5004);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x5022 = 93U;
	int64_t x5023 = -1LL;

    t170 = ((x5021>(x5022==x5023))>>x5024);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x5121 = -1;
	int16_t x5123 = 1;
	int32_t t171 = -469634656;

    t171 = ((x5121>(x5122==x5123))>>x5124);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x5125 = 5406LL;
	volatile int32_t x5127 = INT32_MIN;
	volatile int8_t x5128 = 1;
	int32_t t172 = 1;

    t172 = ((x5125>(x5126==x5127))>>x5128);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x5145 = 0LL;
	uint64_t x5146 = 12567862837999LLU;
	static int16_t x5148 = 1;

    t173 = ((x5145>(x5146==x5147))>>x5148);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x5249 = 43528U;
	int64_t x5250 = INT64_MAX;
	int8_t x5251 = -2;
	static volatile int16_t x5252 = 1;
	int32_t t174 = -78643;

    t174 = ((x5249>(x5250==x5251))>>x5252);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x5265 = INT32_MAX;
	uint8_t x5266 = 28U;
	static uint16_t x5268 = 5U;
	volatile int32_t t175 = 665;

    t175 = ((x5265>(x5266==x5267))>>x5268);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x5269 = UINT16_MAX;
	int16_t x5270 = INT16_MIN;
	static int8_t x5271 = INT8_MAX;
	uint16_t x5272 = 4U;
	int32_t t176 = 6151290;

    t176 = ((x5269>(x5270==x5271))>>x5272);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x5277 = -1LL;
	uint64_t x5278 = 199LLU;
	uint64_t x5279 = UINT64_MAX;
	static volatile uint8_t x5280 = 26U;
	static int32_t t177 = 212304399;

    t177 = ((x5277>(x5278==x5279))>>x5280);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x5305 = -1LL;
	volatile uint64_t x5306 = 708698496LLU;
	int16_t x5307 = -255;
	volatile uint32_t x5308 = 3U;
	int32_t t178 = -1;

    t178 = ((x5305>(x5306==x5307))>>x5308);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x5325 = 122052860971LLU;
	uint16_t x5326 = 1932U;
	int8_t x5328 = 29;
	volatile int32_t t179 = -408;

    t179 = ((x5325>(x5326==x5327))>>x5328);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x5329 = 1U;
	int32_t x5330 = 1549245;
	static int64_t x5332 = 23LL;
	int32_t t180 = 7452;

    t180 = ((x5329>(x5330==x5331))>>x5332);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x5381 = 2823076915LLU;
	int32_t x5382 = -2;
	static int32_t x5383 = INT32_MIN;
	volatile int32_t t181 = -302551;

    t181 = ((x5381>(x5382==x5383))>>x5384);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x5389 = INT64_MAX;
	volatile int64_t x5390 = -230605995LL;
	int32_t t182 = 3753;

    t182 = ((x5389>(x5390==x5391))>>x5392);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x5482 = 1209;
	int8_t x5483 = INT8_MAX;
	static volatile uint16_t x5484 = 10U;
	volatile int32_t t183 = 242239590;

    t183 = ((x5481>(x5482==x5483))>>x5484);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x5485 = 2218643210879724LLU;
	volatile int16_t x5487 = -1;
	volatile uint8_t x5488 = 1U;
	volatile int32_t t184 = -10;

    t184 = ((x5485>(x5486==x5487))>>x5488);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x5565 = INT64_MIN;
	volatile int16_t x5566 = INT16_MAX;
	int32_t t185 = 1233;

    t185 = ((x5565>(x5566==x5567))>>x5568);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x5577 = 4;
	uint16_t x5578 = 26U;
	uint16_t x5579 = 980U;
	int32_t x5580 = 1;
	volatile int32_t t186 = 34603;

    t186 = ((x5577>(x5578==x5579))>>x5580);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x5601 = 43U;
	static int32_t x5602 = INT32_MIN;
	int64_t x5603 = 30682555LL;
	int32_t t187 = 14;

    t187 = ((x5601>(x5602==x5603))>>x5604);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x5605 = 31U;
	uint64_t x5606 = UINT64_MAX;
	int16_t x5607 = -8;
	static uint8_t x5608 = 17U;
	int32_t t188 = -148;

    t188 = ((x5605>(x5606==x5607))>>x5608);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x5621 = 9575971285LL;
	volatile int8_t x5623 = -1;
	uint8_t x5624 = 15U;
	static int32_t t189 = 94;

    t189 = ((x5621>(x5622==x5623))>>x5624);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x5689 = INT16_MIN;
	int8_t x5690 = INT8_MIN;
	volatile int16_t x5691 = -1;
	int8_t x5692 = 1;
	volatile int32_t t190 = -13642;

    t190 = ((x5689>(x5690==x5691))>>x5692);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x5809 = 10;
	static int64_t x5811 = INT64_MIN;
	volatile int16_t x5812 = 5;
	static int32_t t191 = 11549958;

    t191 = ((x5809>(x5810==x5811))>>x5812);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x5874 = INT32_MIN;
	volatile int32_t x5875 = INT32_MAX;

    t192 = ((x5873>(x5874==x5875))>>x5876);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x5882 = -31;
	uint16_t x5883 = 901U;
	uint16_t x5884 = 3U;
	static volatile int32_t t193 = 6;

    t193 = ((x5881>(x5882==x5883))>>x5884);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x5909 = 17U;
	static volatile int8_t x5911 = 0;
	uint64_t x5912 = 0LLU;
	static int32_t t194 = 4565262;

    t194 = ((x5909>(x5910==x5911))>>x5912);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x5958 = INT64_MIN;
	int32_t x5959 = INT32_MIN;
	static volatile int32_t t195 = -6093406;

    t195 = ((x5957>(x5958==x5959))>>x5960);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x5961 = INT8_MAX;
	int8_t x5962 = 1;
	volatile int32_t t196 = 1801436;

    t196 = ((x5961>(x5962==x5963))>>x5964);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x5973 = 18119U;
	int64_t x5974 = -38545LL;
	int32_t x5975 = INT32_MAX;
	volatile int8_t x5976 = 4;
	volatile int32_t t197 = 5;

    t197 = ((x5973>(x5974==x5975))>>x5976);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x5985 = -1;
	int32_t t198 = 7;

    t198 = ((x5985>(x5986==x5987))>>x5988);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x6041 = INT8_MIN;
	uint64_t x6042 = 5045433986797LLU;
	int8_t x6043 = -7;
	uint8_t x6044 = 3U;
	int32_t t199 = 47449;

    t199 = ((x6041>(x6042==x6043))>>x6044);

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


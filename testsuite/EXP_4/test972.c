
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

int8_t x133 = 0;
int8_t x136 = INT8_MAX;
int32_t t2 = -71;
uint32_t x318 = 0U;
int32_t x395 = -1;
int8_t x396 = INT8_MIN;
uint8_t x496 = 2U;
volatile int32_t t7 = 7584;
int16_t x909 = INT16_MAX;
static uint8_t x910 = 9U;
int64_t x967 = INT64_MIN;
int64_t x1191 = INT64_MIN;
static volatile int32_t t14 = 156162359;
int32_t t15 = 976502;
volatile int32_t x1359 = -1;
volatile int32_t t17 = 71207076;
static volatile int8_t x1386 = 0;
volatile uint32_t x1725 = UINT32_MAX;
uint8_t x1727 = 0U;
uint32_t t19 = 767926U;
uint8_t x1804 = UINT8_MAX;
static uint32_t x1810 = UINT32_MAX;
volatile uint32_t x1973 = 128178274U;
int8_t x2193 = INT8_MAX;
uint16_t x2558 = 10U;
volatile uint8_t x2750 = 19U;
static uint16_t x2751 = UINT16_MAX;
volatile int32_t x2896 = INT32_MIN;
uint64_t x2902 = UINT64_MAX;
volatile int8_t x3250 = 11;
int32_t t37 = 29414854;
volatile int32_t t38 = 380374;
volatile int32_t t41 = 1;
int64_t x3823 = -1LL;
int32_t x3852 = INT32_MAX;
uint32_t x3970 = UINT32_MAX;
volatile int32_t t49 = 6;
static volatile int16_t x4044 = -1012;
volatile int32_t t50 = -2;
static uint8_t x4303 = 12U;
uint8_t x4637 = 38U;
int32_t x5096 = -1;
int32_t t56 = 469575426;
volatile uint64_t x5193 = UINT64_MAX;
volatile int32_t x5211 = INT32_MIN;
int32_t x5477 = INT32_MAX;
volatile int64_t t62 = -1147714472598LL;
uint8_t x5516 = 2U;
volatile int16_t x5611 = 117;
static int8_t x5787 = 1;
int32_t t68 = 14002;
int16_t x6347 = INT16_MIN;
int64_t x6688 = INT64_MAX;
int16_t x6700 = -1;
uint32_t x6853 = UINT32_MAX;
uint16_t x6854 = 5U;
uint32_t x6855 = UINT32_MAX;
volatile uint32_t x7044 = 2299U;
int16_t x7055 = INT16_MIN;
int16_t x7056 = INT16_MAX;
volatile uint64_t t75 = 6645898LLU;
uint32_t x7341 = 1616338737U;
uint64_t x7342 = UINT64_MAX;
volatile int32_t t80 = -1;
uint16_t x7585 = UINT16_MAX;
int16_t x7587 = -1;
int32_t x7949 = 2730;
int32_t t85 = -1309965;
int16_t x8232 = INT16_MAX;
uint64_t x8626 = UINT64_MAX;
volatile int32_t t88 = -61660;
static volatile uint8_t x9011 = 1U;
int16_t x9430 = 0;
static int64_t x9483 = -1LL;


void f0(void) {
    	int8_t x77 = INT8_MAX;
	int32_t x78 = -1;
	static int16_t x79 = -1;
	int64_t x80 = INT64_MAX;
	static int32_t t0 = 30663170;

    t0 = (x77<<(x78^(x79%x80)));

    if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x134 = 11;
	uint32_t x135 = UINT32_MAX;
	volatile int32_t t1 = -220006;

    t1 = (x133<<(x134^(x135%x136)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x241 = 3U;
	uint8_t x242 = 5U;
	uint64_t x243 = UINT64_MAX;
	static uint32_t x244 = UINT32_MAX;

    t2 = (x241<<(x242^(x243%x244)));

    if (t2 != 96) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x317 = INT64_MAX;
	int16_t x319 = INT16_MAX;
	volatile int64_t x320 = -1LL;
	volatile int64_t t3 = INT64_MAX;

    t3 = (x317<<(x318^(x319%x320)));

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x329 = 343819654106716125LLU;
	int16_t x330 = 1;
	int64_t x331 = INT64_MAX;
	static volatile int8_t x332 = -1;
	static volatile uint64_t t4 = 4723699118LLU;

    t4 = (x329<<(x330^(x331%x332)));

    if (t4 != 687639308213432250LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x393 = 262399139444LL;
	volatile int8_t x394 = -1;
	volatile int64_t t5 = 53071058349695770LL;

    t5 = (x393<<(x394^(x395%x396)));

    if (t5 != 262399139444LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x413 = UINT8_MAX;
	volatile int16_t x414 = 8;
	int32_t x415 = INT32_MAX;
	volatile int8_t x416 = -1;
	static int32_t t6 = 1062;

    t6 = (x413<<(x414^(x415%x416)));

    if (t6 != 65280) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x493 = 839U;
	static volatile uint8_t x494 = 0U;
	int64_t x495 = INT64_MIN;

    t7 = (x493<<(x494^(x495%x496)));

    if (t7 != 839) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x853 = 799849975559973LLU;
	volatile uint16_t x854 = 1U;
	volatile uint16_t x855 = 14U;
	int16_t x856 = 966;
	uint64_t t8 = 1539186408609585360LLU;

    t8 = (x853<<(x854^(x855%x856)));

    if (t8 != 7762739925439643648LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x911 = INT64_MAX;
	static int8_t x912 = INT8_MAX;
	int32_t t9 = 3844896;

    t9 = (x909<<(x910^(x911%x912)));

    if (t9 != 16776704) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x929 = UINT32_MAX;
	int64_t x930 = -1LL;
	int64_t x931 = -1LL;
	uint32_t x932 = 245963836U;
	static volatile uint32_t t10 = UINT32_MAX;

    t10 = (x929<<(x930^(x931%x932)));

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x965 = INT64_MAX;
	uint32_t x966 = 0U;
	int64_t x968 = INT64_MIN;
	int64_t t11 = INT64_MAX;

    t11 = (x965<<(x966^(x967%x968)));

    if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x1069 = 94522LLU;
	static volatile uint32_t x1070 = UINT32_MAX;
	int32_t x1071 = INT32_MIN;
	static volatile int32_t x1072 = INT32_MAX;
	static volatile uint64_t t12 = 30206603327356LLU;

    t12 = (x1069<<(x1070^(x1071%x1072)));

    if (t12 != 94522LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x1161 = 0U;
	volatile int16_t x1162 = INT16_MIN;
	int16_t x1163 = INT16_MIN;
	int32_t x1164 = INT32_MIN;
	volatile int32_t t13 = 1;

    t13 = (x1161<<(x1162^(x1163%x1164)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x1189 = 1U;
	int16_t x1190 = 7;
	static int64_t x1192 = INT64_MIN;

    t14 = (x1189<<(x1190^(x1191%x1192)));

    if (t14 != 128) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x1209 = 858;
	int16_t x1210 = INT16_MAX;
	int16_t x1211 = INT16_MAX;
	int32_t x1212 = INT32_MIN;

    t15 = (x1209<<(x1210^(x1211%x1212)));

    if (t15 != 858) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x1337 = UINT32_MAX;
	volatile uint8_t x1338 = 0U;
	int8_t x1339 = 0;
	int64_t x1340 = INT64_MIN;
	volatile uint32_t t16 = UINT32_MAX;

    t16 = (x1337<<(x1338^(x1339%x1340)));

    if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x1357 = UINT8_MAX;
	int8_t x1358 = -1;
	int64_t x1360 = INT64_MIN;

    t17 = (x1357<<(x1358^(x1359%x1360)));

    if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x1385 = 107U;
	volatile int32_t x1387 = INT32_MAX;
	uint8_t x1388 = 15U;
	int32_t t18 = -174701;

    t18 = (x1385<<(x1386^(x1387%x1388)));

    if (t18 != 13696) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x1726 = 20U;
	static int32_t x1728 = -17919;

    t19 = (x1725<<(x1726^(x1727%x1728)));

    if (t19 != 4293918720U) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x1801 = INT8_MAX;
	uint64_t x1802 = 0LLU;
	static volatile int64_t x1803 = 0LL;
	volatile int32_t t20 = 147;

    t20 = (x1801<<(x1802^(x1803%x1804)));

    if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x1809 = 263U;
	int16_t x1811 = -1;
	volatile uint8_t x1812 = UINT8_MAX;
	volatile int32_t t21 = -254743;

    t21 = (x1809<<(x1810^(x1811%x1812)));

    if (t21 != 263) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x1825 = 36321844937LLU;
	int64_t x1826 = -1LL;
	int64_t x1827 = -1LL;
	int16_t x1828 = INT16_MIN;
	uint64_t t22 = 96225428147LLU;

    t22 = (x1825<<(x1826^(x1827%x1828)));

    if (t22 != 36321844937LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x1953 = 6U;
	static int32_t x1954 = -1;
	static int64_t x1955 = -12LL;
	volatile int16_t x1956 = INT16_MAX;
	volatile int32_t t23 = -2917;

    t23 = (x1953<<(x1954^(x1955%x1956)));

    if (t23 != 12288) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x1957 = 53U;
	int16_t x1958 = -1;
	int8_t x1959 = -1;
	uint16_t x1960 = 2U;
	static int32_t t24 = 608222;

    t24 = (x1957<<(x1958^(x1959%x1960)));

    if (t24 != 53) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x1974 = -3;
	int16_t x1975 = INT16_MIN;
	volatile int8_t x1976 = INT8_MAX;
	static uint32_t t25 = 7U;

    t25 = (x1973<<(x1974^(x1975%x1976)));

    if (t25 != 1025426192U) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x2194 = 0;
	int64_t x2195 = INT64_MIN;
	int64_t x2196 = -1LL;
	int32_t t26 = -4117;

    t26 = (x2193<<(x2194^(x2195%x2196)));

    if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x2245 = 15;
	int16_t x2246 = -1;
	static int16_t x2247 = -1;
	volatile int8_t x2248 = INT8_MIN;
	volatile int32_t t27 = -2702;

    t27 = (x2245<<(x2246^(x2247%x2248)));

    if (t27 != 15) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x2501 = 1;
	int8_t x2502 = INT8_MIN;
	int8_t x2503 = INT8_MIN;
	int16_t x2504 = INT16_MAX;
	static int32_t t28 = -745761;

    t28 = (x2501<<(x2502^(x2503%x2504)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x2557 = 374670U;
	uint16_t x2559 = 76U;
	int64_t x2560 = -1LL;
	uint32_t t29 = 30936U;

    t29 = (x2557<<(x2558^(x2559%x2560)));

    if (t29 != 383662080U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x2697 = 5U;
	uint8_t x2698 = 0U;
	int32_t x2699 = INT32_MIN;
	static int32_t x2700 = INT32_MIN;
	volatile int32_t t30 = 1360288;

    t30 = (x2697<<(x2698^(x2699%x2700)));

    if (t30 != 5) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x2725 = UINT8_MAX;
	uint32_t x2726 = 7U;
	static int32_t x2727 = INT32_MAX;
	int16_t x2728 = -2;
	int32_t t31 = -306358;

    t31 = (x2725<<(x2726^(x2727%x2728)));

    if (t31 != 16320) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x2749 = 241873584436LLU;
	int16_t x2752 = INT16_MAX;
	volatile uint64_t t32 = 7242LLU;

    t32 = (x2749<<(x2750^(x2751%x2752)));

    if (t32 != 63405708918390784LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x2893 = 2647U;
	int64_t x2894 = -1LL;
	static int64_t x2895 = -1LL;
	static volatile uint32_t t33 = 26U;

    t33 = (x2893<<(x2894^(x2895%x2896)));

    if (t33 != 2647U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x2901 = 164LL;
	volatile int64_t x2903 = -1LL;
	uint32_t x2904 = UINT32_MAX;
	volatile int64_t t34 = -75391147LL;

    t34 = (x2901<<(x2902^(x2903%x2904)));

    if (t34 != 164LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x2909 = 35;
	uint16_t x2910 = 4U;
	int32_t x2911 = 0;
	static int32_t x2912 = INT32_MIN;
	int32_t t35 = 862481;

    t35 = (x2909<<(x2910^(x2911%x2912)));

    if (t35 != 560) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x2989 = UINT8_MAX;
	int8_t x2990 = -1;
	static volatile int64_t x2991 = INT64_MIN;
	int16_t x2992 = INT16_MAX;
	volatile int32_t t36 = -308344311;

    t36 = (x2989<<(x2990^(x2991%x2992)));

    if (t36 != 32640) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x3249 = 3;
	uint16_t x3251 = UINT16_MAX;
	int32_t x3252 = -17;

    t37 = (x3249<<(x3250^(x3251%x3252)));

    if (t37 != 6144) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x3365 = INT8_MAX;
	static uint16_t x3366 = UINT16_MAX;
	uint16_t x3367 = UINT16_MAX;
	int64_t x3368 = INT64_MIN;

    t38 = (x3365<<(x3366^(x3367%x3368)));

    if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x3413 = INT32_MAX;
	int32_t x3414 = INT32_MIN;
	int32_t x3415 = INT32_MIN;
	int64_t x3416 = INT64_MIN;
	int32_t t39 = INT32_MAX;

    t39 = (x3413<<(x3414^(x3415%x3416)));

    if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x3553 = 108U;
	volatile uint64_t x3554 = UINT64_MAX;
	static int64_t x3555 = -1LL;
	int32_t x3556 = -34301;
	static volatile int32_t t40 = -186480352;

    t40 = (x3553<<(x3554^(x3555%x3556)));

    if (t40 != 108) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x3601 = 67U;
	static volatile int32_t x3602 = 14;
	int16_t x3603 = INT16_MIN;
	int64_t x3604 = -1LL;

    t41 = (x3601<<(x3602^(x3603%x3604)));

    if (t41 != 1097728) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x3629 = 260242LLU;
	int8_t x3630 = INT8_MAX;
	volatile int8_t x3631 = INT8_MAX;
	uint64_t x3632 = 42111349892LLU;
	uint64_t t42 = 35004765LLU;

    t42 = (x3629<<(x3630^(x3631%x3632)));

    if (t42 != 260242LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x3689 = INT16_MAX;
	static int32_t x3690 = INT32_MIN;
	int32_t x3691 = INT32_MIN;
	volatile int64_t x3692 = 555990724112753947LL;
	int32_t t43 = 255098;

    t43 = (x3689<<(x3690^(x3691%x3692)));

    if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x3821 = 97087411U;
	int64_t x3822 = -1LL;
	uint32_t x3824 = 1870U;
	static volatile uint32_t t44 = 3118U;

    t44 = (x3821<<(x3822^(x3823%x3824)));

    if (t44 != 97087411U) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x3849 = INT64_MAX;
	uint8_t x3850 = 1U;
	static uint32_t x3851 = UINT32_MAX;
	static int64_t t45 = INT64_MAX;

    t45 = (x3849<<(x3850^(x3851%x3852)));

    if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x3897 = 7U;
	static int8_t x3898 = 0;
	int8_t x3899 = 1;
	uint16_t x3900 = 530U;
	int32_t t46 = -1277782;

    t46 = (x3897<<(x3898^(x3899%x3900)));

    if (t46 != 14) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x3969 = INT16_MAX;
	static volatile int32_t x3971 = -1;
	int32_t x3972 = INT32_MAX;
	volatile int32_t t47 = 0;

    t47 = (x3969<<(x3970^(x3971%x3972)));

    if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x4013 = 7622090U;
	volatile int16_t x4014 = 9;
	uint32_t x4015 = UINT32_MAX;
	int8_t x4016 = -1;
	uint32_t t48 = 5U;

    t48 = (x4013<<(x4014^(x4015%x4016)));

    if (t48 != 3902510080U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x4021 = 0U;
	int32_t x4022 = -1;
	static volatile int16_t x4023 = -1;
	static int64_t x4024 = INT64_MAX;

    t49 = (x4021<<(x4022^(x4023%x4024)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x4041 = 1;
	static int16_t x4042 = -1;
	static volatile int64_t x4043 = -1LL;

    t50 = (x4041<<(x4042^(x4043%x4044)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x4149 = INT8_MAX;
	static volatile int64_t x4150 = 1LL;
	static volatile int16_t x4151 = INT16_MIN;
	int32_t x4152 = -1;
	int32_t t51 = 0;

    t51 = (x4149<<(x4150^(x4151%x4152)));

    if (t51 != 254) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int16_t x4301 = INT16_MAX;
	int16_t x4302 = 2;
	static uint16_t x4304 = 1U;
	volatile int32_t t52 = 13491629;

    t52 = (x4301<<(x4302^(x4303%x4304)));

    if (t52 != 131068) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x4638 = 0;
	int32_t x4639 = -1;
	static int32_t x4640 = -1;
	volatile int32_t t53 = 47;

    t53 = (x4637<<(x4638^(x4639%x4640)));

    if (t53 != 38) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x4837 = 1;
	uint64_t x4838 = UINT64_MAX;
	static int64_t x4839 = INT64_MIN;
	int32_t x4840 = -7;
	int32_t t54 = 8328439;

    t54 = (x4837<<(x4838^(x4839%x4840)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x4957 = 42231346U;
	uint32_t x4958 = 9U;
	static int8_t x4959 = 1;
	int16_t x4960 = INT16_MIN;
	uint32_t t55 = 11512U;

    t55 = (x4957<<(x4958^(x4959%x4960)));

    if (t55 != 2221289984U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x5093 = INT8_MAX;
	volatile int8_t x5094 = 24;
	static int32_t x5095 = INT32_MIN;

    t56 = (x5093<<(x5094^(x5095%x5096)));

    if (t56 != 2130706432) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x5173 = 2;
	uint8_t x5174 = 0U;
	static volatile int16_t x5175 = 1;
	volatile uint8_t x5176 = 6U;
	int32_t t57 = -10;

    t57 = (x5173<<(x5174^(x5175%x5176)));

    if (t57 != 4) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x5194 = 15;
	static volatile uint16_t x5195 = 34U;
	int32_t x5196 = INT32_MIN;
	static volatile uint64_t t58 = 2424LLU;

    t58 = (x5193<<(x5194^(x5195%x5196)));

    if (t58 != 18446708889337462784LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x5209 = 203711LLU;
	int8_t x5210 = -1;
	volatile int32_t x5212 = -134;
	volatile uint64_t t59 = 1028034LLU;

    t59 = (x5209<<(x5210^(x5211%x5212)));

    if (t59 != 3998633519151579136LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x5478 = UINT64_MAX;
	static int64_t x5479 = -1LL;
	volatile int16_t x5480 = -5460;
	static volatile int32_t t60 = INT32_MAX;

    t60 = (x5477<<(x5478^(x5479%x5480)));

    if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x5497 = 1;
	static uint8_t x5498 = 14U;
	uint16_t x5499 = 13U;
	uint64_t x5500 = UINT64_MAX;
	int32_t t61 = -107223;

    t61 = (x5497<<(x5498^(x5499%x5500)));

    if (t61 != 8) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x5509 = 2LL;
	int16_t x5510 = INT16_MAX;
	static volatile int16_t x5511 = INT16_MAX;
	uint32_t x5512 = 551816621U;

    t62 = (x5509<<(x5510^(x5511%x5512)));

    if (t62 != 2LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x5513 = UINT32_MAX;
	static uint32_t x5514 = 0U;
	uint32_t x5515 = UINT32_MAX;
	volatile uint32_t t63 = 443514135U;

    t63 = (x5513<<(x5514^(x5515%x5516)));

    if (t63 != 4294967294U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x5609 = 194555385912LLU;
	uint16_t x5610 = 14U;
	int8_t x5612 = 1;
	static volatile uint64_t t64 = 909633LLU;

    t64 = (x5609<<(x5610^(x5611%x5612)));

    if (t64 != 3187595442782208LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x5673 = INT16_MAX;
	static uint16_t x5674 = 0U;
	int16_t x5675 = INT16_MIN;
	volatile int16_t x5676 = -1;
	static int32_t t65 = 46;

    t65 = (x5673<<(x5674^(x5675%x5676)));

    if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x5785 = 7;
	uint32_t x5786 = 6U;
	int64_t x5788 = INT64_MAX;
	int32_t t66 = 1019516;

    t66 = (x5785<<(x5786^(x5787%x5788)));

    if (t66 != 896) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x5905 = UINT32_MAX;
	int8_t x5906 = 0;
	uint16_t x5907 = 0U;
	uint64_t x5908 = 1737136025717149LLU;
	volatile uint32_t t67 = UINT32_MAX;

    t67 = (x5905<<(x5906^(x5907%x5908)));

    if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x6169 = 21U;
	int16_t x6170 = -19;
	int8_t x6171 = -1;
	volatile int16_t x6172 = INT16_MAX;

    t68 = (x6169<<(x6170^(x6171%x6172)));

    if (t68 != 5505024) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x6345 = 34775991;
	uint32_t x6346 = 0U;
	int8_t x6348 = -1;
	int32_t t69 = 79092;

    t69 = (x6345<<(x6346^(x6347%x6348)));

    if (t69 != 34775991) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x6685 = 0U;
	int32_t x6686 = 6;
	uint32_t x6687 = 5U;
	volatile int32_t t70 = -85;

    t70 = (x6685<<(x6686^(x6687%x6688)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x6697 = 18824842LLU;
	uint8_t x6698 = 44U;
	uint16_t x6699 = 0U;
	static volatile uint64_t t71 = 8015285736343659588LLU;

    t71 = (x6697<<(x6698^(x6699%x6700)));

    if (t71 != 17575473467673804800LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x6856 = -1;
	volatile uint32_t t72 = 1771524U;

    t72 = (x6853<<(x6854^(x6855%x6856)));

    if (t72 != 4294967264U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x7041 = 13581099;
	uint8_t x7042 = 0U;
	int8_t x7043 = 1;
	volatile int32_t t73 = -51568;

    t73 = (x7041<<(x7042^(x7043%x7044)));

    if (t73 != 27162198) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x7053 = INT8_MAX;
	uint64_t x7054 = UINT64_MAX;
	int32_t t74 = 86;

    t74 = (x7053<<(x7054^(x7055%x7056)));

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x7057 = UINT64_MAX;
	static int8_t x7058 = 5;
	static int8_t x7059 = INT8_MIN;
	int64_t x7060 = -1LL;

    t75 = (x7057<<(x7058^(x7059%x7060)));

    if (t75 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x7173 = 0U;
	int8_t x7174 = INT8_MIN;
	int8_t x7175 = INT8_MIN;
	int16_t x7176 = INT16_MIN;
	int32_t t76 = -258;

    t76 = (x7173<<(x7174^(x7175%x7176)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x7185 = UINT64_MAX;
	volatile int64_t x7186 = -1LL;
	static volatile int8_t x7187 = -2;
	static int64_t x7188 = INT64_MIN;
	uint64_t t77 = 11LLU;

    t77 = (x7185<<(x7186^(x7187%x7188)));

    if (t77 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x7343 = -1;
	int64_t x7344 = INT64_MIN;
	static uint32_t t78 = 1U;

    t78 = (x7341<<(x7342^(x7343%x7344)));

    if (t78 != 1616338737U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x7373 = 4545550U;
	uint8_t x7374 = 7U;
	volatile int16_t x7375 = INT16_MIN;
	int64_t x7376 = -1LL;
	volatile uint32_t t79 = 2418U;

    t79 = (x7373<<(x7374^(x7375%x7376)));

    if (t79 != 581830400U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x7473 = 11831U;
	int8_t x7474 = -1;
	int64_t x7475 = -5LL;
	volatile int64_t x7476 = INT64_MIN;

    t80 = (x7473<<(x7474^(x7475%x7476)));

    if (t80 != 189296) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x7586 = 3U;
	volatile int64_t x7588 = -1LL;
	volatile int32_t t81 = -61;

    t81 = (x7585<<(x7586^(x7587%x7588)));

    if (t81 != 524280) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x7613 = INT16_MAX;
	volatile int8_t x7614 = 13;
	volatile int64_t x7615 = INT64_MIN;
	int64_t x7616 = INT64_MIN;
	static int32_t t82 = 3411613;

    t82 = (x7613<<(x7614^(x7615%x7616)));

    if (t82 != 268427264) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x7689 = 11U;
	static volatile uint16_t x7690 = 1U;
	volatile int64_t x7691 = 1040373698LL;
	static volatile int8_t x7692 = 1;
	static volatile int32_t t83 = -1675954;

    t83 = (x7689<<(x7690^(x7691%x7692)));

    if (t83 != 22) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x7950 = 1;
	uint8_t x7951 = 5U;
	int32_t x7952 = INT32_MAX;
	static int32_t t84 = -1;

    t84 = (x7949<<(x7950^(x7951%x7952)));

    if (t84 != 43680) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x8145 = 14U;
	int8_t x8146 = 24;
	volatile uint8_t x8147 = 26U;
	int16_t x8148 = -31;

    t85 = (x8145<<(x8146^(x8147%x8148)));

    if (t85 != 56) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x8165 = 11017824133LLU;
	int8_t x8166 = INT8_MIN;
	int8_t x8167 = INT8_MIN;
	static volatile uint64_t x8168 = UINT64_MAX;
	static volatile uint64_t t86 = 112583444836404879LLU;

    t86 = (x8165<<(x8166^(x8167%x8168)));

    if (t86 != 11017824133LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x8229 = 15U;
	volatile uint64_t x8230 = UINT64_MAX;
	int32_t x8231 = INT32_MIN;
	int32_t t87 = -1;

    t87 = (x8229<<(x8230^(x8231%x8232)));

    if (t87 != 30) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x8625 = UINT8_MAX;
	int64_t x8627 = -1LL;
	volatile int64_t x8628 = INT64_MIN;

    t88 = (x8625<<(x8626^(x8627%x8628)));

    if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x8757 = UINT64_MAX;
	uint16_t x8758 = 0U;
	volatile int32_t x8759 = 13;
	static int64_t x8760 = 29998LL;
	uint64_t t89 = 261LLU;

    t89 = (x8757<<(x8758^(x8759%x8760)));

    if (t89 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x9009 = 67995U;
	static volatile uint8_t x9010 = 13U;
	uint16_t x9012 = 16922U;
	uint32_t t90 = 62036330U;

    t90 = (x9009<<(x9010^(x9011%x9012)));

    if (t90 != 278507520U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x9289 = 32051U;
	int64_t x9290 = -1LL;
	static int8_t x9291 = INT8_MIN;
	volatile int8_t x9292 = INT8_MAX;
	static volatile int32_t t91 = -7043900;

    t91 = (x9289<<(x9290^(x9291%x9292)));

    if (t91 != 32051) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x9429 = INT8_MAX;
	uint64_t x9431 = UINT64_MAX;
	int16_t x9432 = INT16_MAX;
	volatile int32_t t92 = -409759;

    t92 = (x9429<<(x9430^(x9431%x9432)));

    if (t92 != 4161536) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x9481 = 1;
	uint64_t x9482 = UINT64_MAX;
	uint32_t x9484 = 2740747U;
	int32_t t93 = -1501;

    t93 = (x9481<<(x9482^(x9483%x9484)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x9497 = 98U;
	int8_t x9498 = -3;
	int32_t x9499 = -1;
	int8_t x9500 = INT8_MAX;
	volatile uint32_t t94 = 7919U;

    t94 = (x9497<<(x9498^(x9499%x9500)));

    if (t94 != 392U) { NG(); } else { ; }
	
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


    return 0;
}


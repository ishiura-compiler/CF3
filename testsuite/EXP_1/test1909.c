
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

uint16_t x5 = 5033U;
int8_t x15 = 15;
int16_t x118 = INT16_MIN;
uint8_t x119 = 0U;
int32_t x265 = INT32_MAX;
uint32_t x366 = 389962U;
uint8_t x367 = 2U;
static int32_t t10 = -3716;
int8_t x465 = INT8_MIN;
int32_t x466 = -1;
int8_t x502 = INT8_MIN;
static int32_t t13 = 543;
uint16_t x509 = 244U;
volatile int32_t x524 = INT32_MIN;
int32_t x566 = 3593845;
uint8_t x567 = 0U;
int64_t x653 = INT64_MIN;
uint16_t x675 = 15U;
static int32_t x721 = INT32_MAX;
uint64_t x724 = UINT64_MAX;
int16_t x796 = INT16_MAX;
volatile int32_t t23 = 29557357;
static uint8_t x917 = UINT8_MAX;
int64_t x961 = -1LL;
volatile uint32_t x963 = 0U;
volatile int8_t x1023 = 1;
int8_t x1024 = -59;
int8_t x1051 = 1;
static uint32_t x1077 = 997459745U;
uint8_t x1079 = 3U;
volatile int16_t x1121 = -1;
int64_t x1145 = 4050424776072LL;
volatile int16_t x1147 = 3;
uint64_t t34 = 3733325573LLU;
volatile uint8_t x1187 = 9U;
static uint32_t x1216 = 75U;
uint8_t x1285 = UINT8_MAX;
volatile int32_t t38 = -6;
static int64_t x1318 = INT64_MIN;
int8_t x1364 = -23;
int8_t x1451 = 1;
int16_t x1510 = INT16_MIN;
static int32_t t43 = -11107372;
int64_t x1590 = INT64_MIN;
int8_t x1625 = INT8_MIN;
uint8_t x1627 = 1U;
int8_t x1647 = 7;
volatile int64_t x1648 = INT64_MAX;
volatile uint8_t x1761 = 56U;
int64_t x1778 = -1LL;
volatile int32_t x1782 = -1;
uint8_t x1784 = 33U;
int32_t t53 = -17268257;
uint8_t x1817 = UINT8_MAX;
uint64_t t55 = 106416586706LLU;
static uint16_t x1903 = 15U;
int32_t x1904 = -1;
int16_t x1906 = INT16_MIN;
volatile int32_t t58 = 26987826;
int64_t x1913 = -22614LL;
int64_t x1914 = INT64_MIN;
static int64_t x1988 = INT64_MAX;
volatile int32_t t66 = 1;
uint8_t x2129 = 3U;
uint32_t x2175 = 1U;
int32_t x2229 = -208;
int16_t x2244 = -1;
volatile int64_t t72 = -2557LL;
static uint64_t x2337 = 2773924560LLU;
int64_t x2338 = INT64_MAX;
int32_t x2340 = -1;
static volatile int32_t t73 = -5205398;
int64_t x2434 = -1816966001705005LL;
volatile int8_t x2457 = INT8_MIN;
uint32_t x2520 = 47651U;
volatile uint8_t x2607 = 12U;
int8_t x2766 = INT8_MAX;
uint8_t x2807 = 1U;
volatile int32_t t84 = -138;
int8_t x2865 = 0;
uint32_t x2868 = 1021228U;
uint64_t x2877 = UINT64_MAX;
volatile int64_t x2878 = INT64_MIN;
int32_t x2881 = 215;
volatile uint8_t x2883 = 1U;
int32_t x2898 = 98287134;
uint32_t x2911 = 17U;
int32_t x2958 = -1;
int64_t t91 = 11420452725349142LL;
int16_t x2965 = INT16_MIN;
uint16_t x2991 = 0U;
uint16_t x3031 = 0U;
int8_t x3063 = 0;
uint32_t x3093 = 407352U;
static int8_t x3096 = INT8_MAX;
int32_t x3104 = INT32_MIN;
volatile uint16_t x3127 = 6U;
uint64_t x3137 = UINT64_MAX;
uint8_t x3219 = 12U;
uint64_t x3236 = UINT64_MAX;
int32_t x3364 = INT32_MIN;
volatile int32_t t104 = 1006776;
int32_t x3381 = -3;
int32_t t107 = -36609;
volatile int32_t t109 = 62529943;
static volatile int32_t t110 = 1010219;
static int8_t x3532 = 31;
volatile int64_t x3553 = 302435389906265069LL;
uint8_t x3555 = 1U;
uint32_t t113 = 2020U;
volatile int64_t x3617 = -1LL;
static int32_t x3620 = -1;
uint8_t x3695 = 0U;
static int8_t x3705 = 39;
static volatile int32_t x3708 = -1;
int64_t x3764 = INT64_MAX;
uint16_t x3795 = 6U;
int16_t x3844 = INT16_MIN;
uint32_t x3965 = UINT32_MAX;
uint32_t x4031 = 13U;
int64_t x4058 = -63946510LL;
int32_t x4060 = INT32_MAX;
volatile uint16_t x4079 = 2U;
uint8_t x4087 = 20U;
int64_t x4154 = -1LL;
int8_t x4162 = INT8_MIN;
volatile uint64_t x4322 = 116LLU;
int32_t x4342 = INT32_MIN;
volatile uint32_t t133 = 0U;
int32_t x4365 = INT32_MIN;
uint32_t x4366 = 57790U;
uint32_t x4369 = UINT32_MAX;
static int16_t x4372 = -67;
static uint8_t x4386 = 1U;
uint32_t x4407 = 2U;
static uint32_t x4514 = UINT32_MAX;
int8_t x4572 = 25;
int16_t x4618 = -1;
int8_t x4638 = INT8_MAX;
volatile uint64_t x4639 = 1LLU;
int16_t x4671 = 14;
static int64_t x4686 = INT64_MAX;
uint8_t x4705 = 3U;
int8_t x4706 = -1;
int64_t t146 = -4952LL;
static int32_t t150 = 197367;
int64_t x4792 = INT64_MIN;
int32_t x4885 = INT32_MIN;
int64_t x4886 = 241LL;
static volatile int8_t x4948 = INT8_MAX;
int64_t x4969 = 17LL;
int32_t x5005 = -19;
int64_t x5006 = -1LL;
int16_t x5047 = 1;
uint16_t x5135 = 12U;
uint32_t x5136 = 327846912U;
uint32_t x5157 = 220127867U;
static volatile int32_t t160 = 182357436;
uint64_t x5241 = 2040121LLU;
volatile int64_t t162 = 330316849873390LL;
int8_t x5298 = INT8_MIN;
volatile uint8_t x5299 = 31U;
int32_t x5300 = INT32_MIN;
uint64_t x5315 = 5LLU;
int32_t x5350 = INT32_MIN;
int16_t x5362 = INT16_MIN;
volatile uint64_t x5364 = UINT64_MAX;
uint64_t t166 = 15056456823948925LLU;
int64_t x5366 = INT64_MIN;
volatile uint64_t x5367 = 2LLU;
static int16_t x5368 = INT16_MIN;
volatile int32_t x5382 = INT32_MIN;
static uint8_t x5435 = 1U;
uint32_t x5447 = 14U;
int64_t x5448 = -1448346913392384575LL;
int16_t x5568 = -1;
int64_t x5602 = -1392905763653083LL;
int8_t x5604 = INT8_MIN;
int64_t t175 = 70461LL;
static uint64_t x5646 = 1445982022LLU;
int64_t x5669 = -1LL;
volatile uint32_t x5670 = UINT32_MAX;
int16_t x5701 = 16266;
int32_t x5719 = 17;
static uint16_t x5734 = 465U;
static volatile uint8_t x5778 = 1U;
volatile uint64_t x5779 = 3LLU;
uint32_t x5928 = UINT32_MAX;
volatile uint32_t t186 = 7U;
int8_t x5947 = 26;
int16_t x5976 = INT16_MAX;
volatile int32_t t189 = -1071740373;
int8_t x6053 = 33;
uint64_t x6064 = 25282LLU;
uint32_t x6084 = 2975857U;
int16_t x6115 = 1;
int64_t x6181 = INT64_MIN;
volatile int64_t x6183 = 12LL;
int32_t x6209 = -1;
static int32_t x6214 = INT32_MAX;
int16_t x6233 = -28;
int8_t x6234 = INT8_MAX;


void f0(void) {
    	volatile uint16_t x1 = UINT16_MAX;
	int8_t x2 = INT8_MIN;
	volatile uint8_t x3 = 19U;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 1;

    t0 = (((x1<=x2)>>x3)%x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = INT8_MAX;
	uint8_t x7 = 17U;
	volatile int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -29993;

    t1 = (((x5<=x6)>>x7)%x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x13 = 7601366U;
	volatile int32_t x14 = -1;
	int16_t x16 = INT16_MIN;
	static int32_t t2 = -1;

    t2 = (((x13<=x14)>>x15)%x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x53 = INT64_MAX;
	int32_t x54 = INT32_MIN;
	static uint16_t x55 = 1U;
	int8_t x56 = -2;
	volatile int32_t t3 = 135716936;

    t3 = (((x53<=x54)>>x55)%x56);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x117 = INT64_MAX;
	int64_t x120 = -168LL;
	volatile int64_t t4 = 24371LL;

    t4 = (((x117<=x118)>>x119)%x120);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x266 = INT16_MIN;
	int16_t x267 = 12;
	int16_t x268 = 44;
	volatile int32_t t5 = -997260;

    t5 = (((x265<=x266)>>x267)%x268);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x285 = INT8_MIN;
	volatile int64_t x286 = INT64_MIN;
	uint8_t x287 = 15U;
	static uint16_t x288 = 745U;
	volatile int32_t t6 = 3999864;

    t6 = (((x285<=x286)>>x287)%x288);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x341 = 697U;
	int64_t x342 = INT64_MIN;
	volatile uint8_t x343 = 7U;
	static volatile int8_t x344 = 3;
	int32_t t7 = 3211390;

    t7 = (((x341<=x342)>>x343)%x344);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x349 = 1U;
	uint8_t x350 = UINT8_MAX;
	int32_t x351 = 1;
	volatile uint32_t x352 = UINT32_MAX;
	volatile uint32_t t8 = 208671U;

    t8 = (((x349<=x350)>>x351)%x352);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x365 = INT64_MIN;
	int8_t x368 = INT8_MIN;
	int32_t t9 = 2;

    t9 = (((x365<=x366)>>x367)%x368);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x417 = 1;
	int16_t x418 = 79;
	uint8_t x419 = 0U;
	uint16_t x420 = UINT16_MAX;

    t10 = (((x417<=x418)>>x419)%x420);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x441 = UINT32_MAX;
	uint16_t x442 = 102U;
	uint32_t x443 = 0U;
	static uint64_t x444 = 261596777LLU;
	volatile uint64_t t11 = 847541938512335121LLU;

    t11 = (((x441<=x442)>>x443)%x444);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x467 = 10U;
	static uint8_t x468 = 1U;
	static volatile int32_t t12 = -161;

    t12 = (((x465<=x466)>>x467)%x468);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x501 = INT16_MAX;
	static volatile int16_t x503 = 9;
	uint16_t x504 = 1U;

    t13 = (((x501<=x502)>>x503)%x504);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x510 = INT64_MAX;
	uint16_t x511 = 22U;
	volatile int16_t x512 = INT16_MAX;
	static volatile int32_t t14 = 3;

    t14 = (((x509<=x510)>>x511)%x512);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x521 = 58U;
	int64_t x522 = -63LL;
	uint8_t x523 = 1U;
	volatile int32_t t15 = -312771;

    t15 = (((x521<=x522)>>x523)%x524);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x565 = INT64_MIN;
	int32_t x568 = -1;
	volatile int32_t t16 = -350;

    t16 = (((x565<=x566)>>x567)%x568);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x601 = -64036338;
	volatile int16_t x602 = INT16_MAX;
	static uint8_t x603 = 0U;
	int32_t x604 = INT32_MIN;
	static volatile int32_t t17 = 9966;

    t17 = (((x601<=x602)>>x603)%x604);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x633 = INT64_MIN;
	volatile int64_t x634 = INT64_MIN;
	static int8_t x635 = 26;
	uint32_t x636 = UINT32_MAX;
	static uint32_t t18 = 61786U;

    t18 = (((x633<=x634)>>x635)%x636);

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x649 = INT32_MIN;
	int32_t x650 = INT32_MIN;
	static int16_t x651 = 0;
	int32_t x652 = INT32_MIN;
	volatile int32_t t19 = 12966;

    t19 = (((x649<=x650)>>x651)%x652);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x654 = INT32_MIN;
	uint8_t x655 = 3U;
	volatile int32_t x656 = INT32_MIN;
	volatile int32_t t20 = 380;

    t20 = (((x653<=x654)>>x655)%x656);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x673 = -1;
	uint64_t x674 = 99LLU;
	int32_t x676 = -840;
	volatile int32_t t21 = 594982;

    t21 = (((x673<=x674)>>x675)%x676);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint32_t x722 = UINT32_MAX;
	int16_t x723 = 1;
	uint64_t t22 = 9972879554715LLU;

    t22 = (((x721<=x722)>>x723)%x724);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x793 = 0LLU;
	static int8_t x794 = -2;
	static uint32_t x795 = 1U;

    t23 = (((x793<=x794)>>x795)%x796);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x797 = 9191472LL;
	int32_t x798 = INT32_MIN;
	int8_t x799 = 0;
	uint32_t x800 = 1426381U;
	uint32_t t24 = 62U;

    t24 = (((x797<=x798)>>x799)%x800);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x901 = INT32_MIN;
	uint32_t x902 = 139U;
	volatile uint16_t x903 = 4U;
	volatile int32_t x904 = INT32_MAX;
	volatile int32_t t25 = 485189298;

    t25 = (((x901<=x902)>>x903)%x904);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x918 = -101;
	uint16_t x919 = 0U;
	uint64_t x920 = 4453812568347325LLU;
	uint64_t t26 = 977521836813199656LLU;

    t26 = (((x917<=x918)>>x919)%x920);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x937 = 2712529954850397726LLU;
	int8_t x938 = INT8_MIN;
	volatile int64_t x939 = 17LL;
	int8_t x940 = INT8_MIN;
	int32_t t27 = -127106;

    t27 = (((x937<=x938)>>x939)%x940);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x962 = 1837;
	int8_t x964 = 2;
	int32_t t28 = 808543;

    t28 = (((x961<=x962)>>x963)%x964);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x1021 = INT64_MIN;
	int64_t x1022 = -1LL;
	volatile int32_t t29 = 3416311;

    t29 = (((x1021<=x1022)>>x1023)%x1024);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1049 = 10;
	int32_t x1050 = INT32_MIN;
	uint64_t x1052 = UINT64_MAX;
	volatile uint64_t t30 = 1019816789LLU;

    t30 = (((x1049<=x1050)>>x1051)%x1052);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x1078 = 1U;
	volatile int64_t x1080 = 1LL;
	int64_t t31 = 946213951904LL;

    t31 = (((x1077<=x1078)>>x1079)%x1080);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x1122 = -971758LL;
	uint64_t x1123 = 3LLU;
	uint8_t x1124 = 46U;
	static volatile int32_t t32 = -14048;

    t32 = (((x1121<=x1122)>>x1123)%x1124);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x1146 = 1138;
	uint32_t x1148 = UINT32_MAX;
	static volatile uint32_t t33 = 5390U;

    t33 = (((x1145<=x1146)>>x1147)%x1148);

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x1173 = INT32_MIN;
	uint64_t x1174 = 1LLU;
	uint8_t x1175 = 2U;
	uint64_t x1176 = UINT64_MAX;

    t34 = (((x1173<=x1174)>>x1175)%x1176);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x1185 = 14105U;
	int32_t x1186 = 2074249;
	static uint16_t x1188 = UINT16_MAX;
	static int32_t t35 = 6374735;

    t35 = (((x1185<=x1186)>>x1187)%x1188);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x1197 = INT64_MAX;
	uint64_t x1198 = 18900182516LLU;
	int16_t x1199 = 5;
	int32_t x1200 = -1;
	volatile int32_t t36 = 12575;

    t36 = (((x1197<=x1198)>>x1199)%x1200);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x1213 = 1;
	static volatile int16_t x1214 = -2903;
	static uint16_t x1215 = 0U;
	uint32_t t37 = 91276U;

    t37 = (((x1213<=x1214)>>x1215)%x1216);

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x1286 = INT64_MAX;
	int16_t x1287 = 0;
	static uint16_t x1288 = UINT16_MAX;

    t38 = (((x1285<=x1286)>>x1287)%x1288);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x1317 = INT16_MAX;
	uint8_t x1319 = 0U;
	static int64_t x1320 = -1LL;
	int64_t t39 = -1LL;

    t39 = (((x1317<=x1318)>>x1319)%x1320);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x1361 = INT8_MIN;
	static uint8_t x1362 = UINT8_MAX;
	uint8_t x1363 = 17U;
	int32_t t40 = 121956820;

    t40 = (((x1361<=x1362)>>x1363)%x1364);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x1417 = 1487149;
	int64_t x1418 = INT64_MAX;
	uint64_t x1419 = 3LLU;
	int16_t x1420 = -799;
	static volatile int32_t t41 = -52;

    t41 = (((x1417<=x1418)>>x1419)%x1420);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x1449 = INT16_MAX;
	static uint64_t x1450 = 579224386491479LLU;
	static int64_t x1452 = -4463217LL;
	volatile int64_t t42 = -709911268636779700LL;

    t42 = (((x1449<=x1450)>>x1451)%x1452);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x1509 = -2;
	static uint16_t x1511 = 0U;
	volatile int32_t x1512 = -1;

    t43 = (((x1509<=x1510)>>x1511)%x1512);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int64_t x1545 = -3446LL;
	uint64_t x1546 = 112167394100LLU;
	uint16_t x1547 = 4U;
	int64_t x1548 = INT64_MIN;
	int64_t t44 = -11753603LL;

    t44 = (((x1545<=x1546)>>x1547)%x1548);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x1557 = INT16_MIN;
	static volatile int32_t x1558 = INT32_MIN;
	volatile uint64_t x1559 = 1LLU;
	int8_t x1560 = INT8_MIN;
	static volatile int32_t t45 = -189;

    t45 = (((x1557<=x1558)>>x1559)%x1560);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x1589 = 4152181U;
	volatile uint8_t x1591 = 1U;
	uint8_t x1592 = 33U;
	static int32_t t46 = 490608;

    t46 = (((x1589<=x1590)>>x1591)%x1592);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x1626 = 24294U;
	int64_t x1628 = -208827935344943766LL;
	volatile int64_t t47 = 3LL;

    t47 = (((x1625<=x1626)>>x1627)%x1628);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x1645 = 19;
	int32_t x1646 = INT32_MIN;
	static volatile int64_t t48 = 13373412LL;

    t48 = (((x1645<=x1646)>>x1647)%x1648);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x1677 = INT16_MAX;
	uint32_t x1678 = UINT32_MAX;
	int8_t x1679 = 23;
	int32_t x1680 = -1;
	int32_t t49 = -10;

    t49 = (((x1677<=x1678)>>x1679)%x1680);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x1709 = 13U;
	volatile int32_t x1710 = INT32_MIN;
	uint8_t x1711 = 8U;
	uint16_t x1712 = 13940U;
	static int32_t t50 = 4145;

    t50 = (((x1709<=x1710)>>x1711)%x1712);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x1762 = 1083257313509260390LL;
	static uint8_t x1763 = 10U;
	static int8_t x1764 = 9;
	int32_t t51 = 268176;

    t51 = (((x1761<=x1762)>>x1763)%x1764);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x1777 = 25306053518405LLU;
	uint64_t x1779 = 11LLU;
	volatile int16_t x1780 = INT16_MIN;
	volatile int32_t t52 = 5711068;

    t52 = (((x1777<=x1778)>>x1779)%x1780);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x1781 = 51;
	uint32_t x1783 = 8U;

    t53 = (((x1781<=x1782)>>x1783)%x1784);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x1818 = UINT32_MAX;
	int8_t x1819 = 17;
	volatile int16_t x1820 = -1191;
	int32_t t54 = 769731;

    t54 = (((x1817<=x1818)>>x1819)%x1820);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x1837 = 73U;
	int16_t x1838 = -1;
	volatile uint16_t x1839 = 0U;
	static uint64_t x1840 = UINT64_MAX;

    t55 = (((x1837<=x1838)>>x1839)%x1840);

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x1845 = INT64_MAX;
	int16_t x1846 = INT16_MAX;
	uint16_t x1847 = 4U;
	static uint8_t x1848 = 13U;
	int32_t t56 = -14578165;

    t56 = (((x1845<=x1846)>>x1847)%x1848);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x1901 = 805U;
	volatile int32_t x1902 = INT32_MIN;
	int32_t t57 = 9;

    t57 = (((x1901<=x1902)>>x1903)%x1904);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x1905 = -15489620LL;
	uint32_t x1907 = 26U;
	int16_t x1908 = INT16_MAX;

    t58 = (((x1905<=x1906)>>x1907)%x1908);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x1915 = 0U;
	int64_t x1916 = INT64_MIN;
	int64_t t59 = -464LL;

    t59 = (((x1913<=x1914)>>x1915)%x1916);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x1985 = -1;
	int8_t x1986 = INT8_MAX;
	uint8_t x1987 = 31U;
	static int64_t t60 = -403428066963516124LL;

    t60 = (((x1985<=x1986)>>x1987)%x1988);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x1993 = INT16_MAX;
	volatile int8_t x1994 = 1;
	volatile int8_t x1995 = 0;
	volatile uint64_t x1996 = UINT64_MAX;
	static uint64_t t61 = 1815704LLU;

    t61 = (((x1993<=x1994)>>x1995)%x1996);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x2001 = 444508190160LLU;
	static int32_t x2002 = INT32_MAX;
	static volatile int8_t x2003 = 5;
	int16_t x2004 = INT16_MAX;
	volatile int32_t t62 = 115522;

    t62 = (((x2001<=x2002)>>x2003)%x2004);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x2009 = 11263084991367023LLU;
	int32_t x2010 = -1;
	volatile int16_t x2011 = 0;
	uint32_t x2012 = 839273748U;
	static uint32_t t63 = 299091U;

    t63 = (((x2009<=x2010)>>x2011)%x2012);

    if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x2061 = -1;
	uint32_t x2062 = UINT32_MAX;
	volatile uint8_t x2063 = 0U;
	static volatile int64_t x2064 = -1LL;
	int64_t t64 = 58948739LL;

    t64 = (((x2061<=x2062)>>x2063)%x2064);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x2097 = INT64_MAX;
	int32_t x2098 = INT32_MIN;
	volatile uint16_t x2099 = 3U;
	uint32_t x2100 = 35895221U;
	uint32_t t65 = 7U;

    t65 = (((x2097<=x2098)>>x2099)%x2100);

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x2117 = -5893;
	volatile uint32_t x2118 = 0U;
	int8_t x2119 = 1;
	volatile int32_t x2120 = INT32_MAX;

    t66 = (((x2117<=x2118)>>x2119)%x2120);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x2130 = 25198U;
	static uint8_t x2131 = 1U;
	static int64_t x2132 = -1LL;
	volatile int64_t t67 = 10299270280170936LL;

    t67 = (((x2129<=x2130)>>x2131)%x2132);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x2173 = INT64_MIN;
	static int8_t x2174 = -1;
	uint8_t x2176 = 3U;
	static int32_t t68 = 18;

    t68 = (((x2173<=x2174)>>x2175)%x2176);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x2225 = -23417305887620LL;
	int16_t x2226 = 1546;
	volatile uint64_t x2227 = 1LLU;
	int16_t x2228 = INT16_MAX;
	volatile int32_t t69 = 0;

    t69 = (((x2225<=x2226)>>x2227)%x2228);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x2230 = 527893742;
	uint16_t x2231 = 4U;
	static int32_t x2232 = -21358;
	volatile int32_t t70 = -27;

    t70 = (((x2229<=x2230)>>x2231)%x2232);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x2241 = -1;
	volatile uint32_t x2242 = 248U;
	uint16_t x2243 = 0U;
	int32_t t71 = -116307552;

    t71 = (((x2241<=x2242)>>x2243)%x2244);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x2329 = INT32_MIN;
	int8_t x2330 = -1;
	uint64_t x2331 = 3LLU;
	int64_t x2332 = INT64_MAX;

    t72 = (((x2329<=x2330)>>x2331)%x2332);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int32_t x2339 = 0;

    t73 = (((x2337<=x2338)>>x2339)%x2340);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x2353 = 15336339455767LLU;
	static uint32_t x2354 = 912596730U;
	volatile int8_t x2355 = 21;
	int8_t x2356 = INT8_MIN;
	int32_t t74 = -87;

    t74 = (((x2353<=x2354)>>x2355)%x2356);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x2433 = -1;
	int8_t x2435 = 1;
	uint8_t x2436 = 7U;
	static volatile int32_t t75 = 900467885;

    t75 = (((x2433<=x2434)>>x2435)%x2436);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x2458 = -3;
	static int8_t x2459 = 19;
	int32_t x2460 = INT32_MAX;
	int32_t t76 = 19311667;

    t76 = (((x2457<=x2458)>>x2459)%x2460);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x2489 = UINT64_MAX;
	static volatile int32_t x2490 = -2816354;
	uint32_t x2491 = 2U;
	int16_t x2492 = -3;
	int32_t t77 = -7476;

    t77 = (((x2489<=x2490)>>x2491)%x2492);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x2517 = INT16_MAX;
	int16_t x2518 = -11;
	static int8_t x2519 = 2;
	uint32_t t78 = 19656U;

    t78 = (((x2517<=x2518)>>x2519)%x2520);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x2549 = INT32_MIN;
	volatile uint32_t x2550 = UINT32_MAX;
	int16_t x2551 = 1;
	volatile int16_t x2552 = -1;
	volatile int32_t t79 = -818864636;

    t79 = (((x2549<=x2550)>>x2551)%x2552);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x2565 = 20U;
	uint64_t x2566 = 12548LLU;
	static int8_t x2567 = 0;
	static int16_t x2568 = -87;
	int32_t t80 = 1;

    t80 = (((x2565<=x2566)>>x2567)%x2568);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x2605 = 161641777481LLU;
	int8_t x2606 = INT8_MAX;
	volatile int32_t x2608 = -1;
	volatile int32_t t81 = -1391;

    t81 = (((x2605<=x2606)>>x2607)%x2608);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x2705 = 15998LLU;
	volatile uint8_t x2706 = 1U;
	uint8_t x2707 = 3U;
	int32_t x2708 = 81132;
	static volatile int32_t t82 = 65285;

    t82 = (((x2705<=x2706)>>x2707)%x2708);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x2765 = -186654450628425LL;
	static volatile uint16_t x2767 = 0U;
	static volatile int32_t x2768 = INT32_MIN;
	volatile int32_t t83 = 203004870;

    t83 = (((x2765<=x2766)>>x2767)%x2768);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x2805 = 0;
	int32_t x2806 = INT32_MIN;
	uint16_t x2808 = UINT16_MAX;

    t84 = (((x2805<=x2806)>>x2807)%x2808);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x2866 = 3858106U;
	int16_t x2867 = 2;
	static volatile uint32_t t85 = 10845678U;

    t85 = (((x2865<=x2866)>>x2867)%x2868);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x2879 = 6U;
	static int64_t x2880 = 1LL;
	int64_t t86 = -107242LL;

    t86 = (((x2877<=x2878)>>x2879)%x2880);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x2882 = INT64_MAX;
	uint64_t x2884 = 53116178652408676LLU;
	static volatile uint64_t t87 = 10255LLU;

    t87 = (((x2881<=x2882)>>x2883)%x2884);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x2885 = -1;
	int8_t x2886 = -1;
	int8_t x2887 = 1;
	int8_t x2888 = INT8_MIN;
	int32_t t88 = -1;

    t88 = (((x2885<=x2886)>>x2887)%x2888);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int16_t x2897 = 1;
	uint16_t x2899 = 14U;
	int8_t x2900 = INT8_MIN;
	static int32_t t89 = 1036822;

    t89 = (((x2897<=x2898)>>x2899)%x2900);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint32_t x2909 = 114637U;
	uint16_t x2910 = UINT16_MAX;
	int32_t x2912 = INT32_MIN;
	int32_t t90 = -103014592;

    t90 = (((x2909<=x2910)>>x2911)%x2912);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x2957 = -1;
	uint8_t x2959 = 19U;
	int64_t x2960 = 2049629604188349LL;

    t91 = (((x2957<=x2958)>>x2959)%x2960);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x2966 = 2924230U;
	static int8_t x2967 = 1;
	static volatile uint16_t x2968 = 78U;
	volatile int32_t t92 = -4605;

    t92 = (((x2965<=x2966)>>x2967)%x2968);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x2989 = 707LLU;
	volatile int8_t x2990 = -1;
	volatile uint64_t x2992 = UINT64_MAX;
	static volatile uint64_t t93 = 1159886984106LLU;

    t93 = (((x2989<=x2990)>>x2991)%x2992);

    if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x3029 = UINT8_MAX;
	volatile uint16_t x3030 = 2U;
	int64_t x3032 = 17741775829157606LL;
	int64_t t94 = 7103731918LL;

    t94 = (((x3029<=x3030)>>x3031)%x3032);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x3045 = INT8_MIN;
	uint16_t x3046 = UINT16_MAX;
	static int32_t x3047 = 21;
	int64_t x3048 = INT64_MIN;
	volatile int64_t t95 = -23150308LL;

    t95 = (((x3045<=x3046)>>x3047)%x3048);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x3061 = 42980;
	int64_t x3062 = 410101502473LL;
	static int64_t x3064 = INT64_MAX;
	volatile int64_t t96 = -43LL;

    t96 = (((x3061<=x3062)>>x3063)%x3064);

    if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x3094 = INT16_MAX;
	static volatile int16_t x3095 = 0;
	volatile int32_t t97 = -4648393;

    t97 = (((x3093<=x3094)>>x3095)%x3096);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x3101 = UINT16_MAX;
	int8_t x3102 = INT8_MAX;
	static volatile uint8_t x3103 = 21U;
	int32_t t98 = -16756658;

    t98 = (((x3101<=x3102)>>x3103)%x3104);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x3121 = UINT16_MAX;
	int8_t x3122 = 0;
	uint8_t x3123 = 6U;
	static uint32_t x3124 = 12207137U;
	volatile uint32_t t99 = 91U;

    t99 = (((x3121<=x3122)>>x3123)%x3124);

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x3125 = INT16_MIN;
	int32_t x3126 = INT32_MAX;
	uint16_t x3128 = 12U;
	volatile int32_t t100 = 864770;

    t100 = (((x3125<=x3126)>>x3127)%x3128);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x3138 = INT8_MIN;
	volatile uint8_t x3139 = 3U;
	int16_t x3140 = INT16_MAX;
	volatile int32_t t101 = -2;

    t101 = (((x3137<=x3138)>>x3139)%x3140);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x3217 = INT8_MIN;
	static volatile int64_t x3218 = -1LL;
	int32_t x3220 = INT32_MIN;
	static int32_t t102 = -4;

    t102 = (((x3217<=x3218)>>x3219)%x3220);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x3233 = 37U;
	int64_t x3234 = INT64_MAX;
	int32_t x3235 = 0;
	uint64_t t103 = 3025LLU;

    t103 = (((x3233<=x3234)>>x3235)%x3236);

    if (t103 != 1LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x3361 = INT16_MAX;
	uint64_t x3362 = 856360LLU;
	int8_t x3363 = 2;

    t104 = (((x3361<=x3362)>>x3363)%x3364);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x3382 = 100U;
	static int32_t x3383 = 1;
	int16_t x3384 = 5940;
	int32_t t105 = -3;

    t105 = (((x3381<=x3382)>>x3383)%x3384);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x3409 = INT64_MIN;
	static int16_t x3410 = INT16_MAX;
	volatile int8_t x3411 = 3;
	uint64_t x3412 = 974437439LLU;
	static volatile uint64_t t106 = 2LLU;

    t106 = (((x3409<=x3410)>>x3411)%x3412);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x3421 = INT16_MAX;
	volatile uint32_t x3422 = 3369U;
	volatile uint16_t x3423 = 13U;
	volatile int8_t x3424 = INT8_MIN;

    t107 = (((x3421<=x3422)>>x3423)%x3424);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x3481 = 67;
	int64_t x3482 = INT64_MIN;
	int8_t x3483 = 1;
	int16_t x3484 = 1483;
	static volatile int32_t t108 = -3876992;

    t108 = (((x3481<=x3482)>>x3483)%x3484);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x3513 = INT8_MIN;
	int64_t x3514 = INT64_MIN;
	uint8_t x3515 = 6U;
	int32_t x3516 = -3;

    t109 = (((x3513<=x3514)>>x3515)%x3516);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x3521 = INT64_MIN;
	uint64_t x3522 = 1890648649886653939LLU;
	volatile int64_t x3523 = 2LL;
	uint16_t x3524 = UINT16_MAX;

    t110 = (((x3521<=x3522)>>x3523)%x3524);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x3529 = -20;
	uint32_t x3530 = UINT32_MAX;
	int16_t x3531 = 10;
	static int32_t t111 = 110533;

    t111 = (((x3529<=x3530)>>x3531)%x3532);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int64_t x3554 = INT64_MIN;
	static int32_t x3556 = INT32_MAX;
	int32_t t112 = 359320;

    t112 = (((x3553<=x3554)>>x3555)%x3556);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x3613 = UINT64_MAX;
	int16_t x3614 = INT16_MIN;
	uint16_t x3615 = 25U;
	static uint32_t x3616 = UINT32_MAX;

    t113 = (((x3613<=x3614)>>x3615)%x3616);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x3618 = UINT32_MAX;
	volatile int32_t x3619 = 0;
	static volatile int32_t t114 = 2026998;

    t114 = (((x3617<=x3618)>>x3619)%x3620);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x3693 = -882963057LL;
	int64_t x3694 = INT64_MAX;
	static int64_t x3696 = -1LL;
	int64_t t115 = -7522739279LL;

    t115 = (((x3693<=x3694)>>x3695)%x3696);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x3706 = -14;
	uint16_t x3707 = 1U;
	volatile int32_t t116 = 629299;

    t116 = (((x3705<=x3706)>>x3707)%x3708);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x3717 = UINT16_MAX;
	uint8_t x3718 = UINT8_MAX;
	volatile int64_t x3719 = 1LL;
	uint16_t x3720 = 1U;
	volatile int32_t t117 = -8024391;

    t117 = (((x3717<=x3718)>>x3719)%x3720);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x3745 = UINT64_MAX;
	volatile int8_t x3746 = INT8_MIN;
	volatile int8_t x3747 = 28;
	static volatile int32_t x3748 = INT32_MIN;
	static int32_t t118 = -7521106;

    t118 = (((x3745<=x3746)>>x3747)%x3748);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x3761 = -896;
	volatile int8_t x3762 = INT8_MIN;
	volatile int8_t x3763 = 25;
	int64_t t119 = 109069LL;

    t119 = (((x3761<=x3762)>>x3763)%x3764);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x3793 = -74073387807787356LL;
	int64_t x3794 = -131537748528228779LL;
	volatile int32_t x3796 = -9419570;
	volatile int32_t t120 = 0;

    t120 = (((x3793<=x3794)>>x3795)%x3796);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x3841 = -1LL;
	static uint16_t x3842 = 935U;
	uint8_t x3843 = 3U;
	int32_t t121 = 6072;

    t121 = (((x3841<=x3842)>>x3843)%x3844);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x3966 = 6786009273408LL;
	uint16_t x3967 = 6U;
	uint32_t x3968 = UINT32_MAX;
	uint32_t t122 = 31U;

    t122 = (((x3965<=x3966)>>x3967)%x3968);

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x4029 = 720968;
	int64_t x4030 = -1LL;
	static int32_t x4032 = -1;
	int32_t t123 = 0;

    t123 = (((x4029<=x4030)>>x4031)%x4032);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x4057 = -18;
	uint8_t x4059 = 0U;
	volatile int32_t t124 = -1;

    t124 = (((x4057<=x4058)>>x4059)%x4060);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x4077 = INT8_MIN;
	uint16_t x4078 = 14080U;
	volatile uint16_t x4080 = 5U;
	int32_t t125 = 15533494;

    t125 = (((x4077<=x4078)>>x4079)%x4080);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x4085 = INT8_MIN;
	static uint8_t x4086 = 0U;
	static uint16_t x4088 = 7U;
	volatile int32_t t126 = 810899128;

    t126 = (((x4085<=x4086)>>x4087)%x4088);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x4101 = INT32_MIN;
	uint16_t x4102 = UINT16_MAX;
	int8_t x4103 = 3;
	int16_t x4104 = 5;
	volatile int32_t t127 = -89890809;

    t127 = (((x4101<=x4102)>>x4103)%x4104);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x4153 = 3U;
	uint8_t x4155 = 5U;
	volatile uint64_t x4156 = 24006801LLU;
	volatile uint64_t t128 = 11588526LLU;

    t128 = (((x4153<=x4154)>>x4155)%x4156);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x4161 = UINT16_MAX;
	int8_t x4163 = 0;
	volatile int32_t x4164 = INT32_MIN;
	static int32_t t129 = -257723;

    t129 = (((x4161<=x4162)>>x4163)%x4164);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x4293 = 1;
	static volatile uint64_t x4294 = 69283799LLU;
	uint32_t x4295 = 1U;
	static int16_t x4296 = -3;
	int32_t t130 = 37;

    t130 = (((x4293<=x4294)>>x4295)%x4296);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x4305 = INT16_MAX;
	int64_t x4306 = INT64_MAX;
	int8_t x4307 = 0;
	uint8_t x4308 = 17U;
	static volatile int32_t t131 = -108315;

    t131 = (((x4305<=x4306)>>x4307)%x4308);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x4321 = INT8_MIN;
	static int8_t x4323 = 1;
	int8_t x4324 = 7;
	int32_t t132 = 226622499;

    t132 = (((x4321<=x4322)>>x4323)%x4324);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x4341 = 48U;
	static int16_t x4343 = 1;
	static uint32_t x4344 = 247228U;

    t133 = (((x4341<=x4342)>>x4343)%x4344);

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x4367 = 12LL;
	int16_t x4368 = INT16_MIN;
	volatile int32_t t134 = 1098;

    t134 = (((x4365<=x4366)>>x4367)%x4368);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x4370 = INT16_MIN;
	uint8_t x4371 = 1U;
	volatile int32_t t135 = -14;

    t135 = (((x4369<=x4370)>>x4371)%x4372);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x4385 = INT8_MAX;
	uint8_t x4387 = 8U;
	volatile uint16_t x4388 = 1792U;
	int32_t t136 = -2;

    t136 = (((x4385<=x4386)>>x4387)%x4388);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x4405 = 1991U;
	volatile int16_t x4406 = -3;
	static int16_t x4408 = 2550;
	volatile int32_t t137 = 48712442;

    t137 = (((x4405<=x4406)>>x4407)%x4408);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x4461 = INT64_MIN;
	int8_t x4462 = -1;
	int32_t x4463 = 15;
	uint8_t x4464 = UINT8_MAX;
	volatile int32_t t138 = 470;

    t138 = (((x4461<=x4462)>>x4463)%x4464);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x4513 = 3;
	static uint8_t x4515 = 1U;
	volatile int64_t x4516 = INT64_MIN;
	int64_t t139 = -658587989328318534LL;

    t139 = (((x4513<=x4514)>>x4515)%x4516);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x4569 = INT64_MIN;
	static volatile uint16_t x4570 = 3955U;
	int16_t x4571 = 1;
	volatile int32_t t140 = -2563312;

    t140 = (((x4569<=x4570)>>x4571)%x4572);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x4617 = INT32_MIN;
	int8_t x4619 = 9;
	static volatile int32_t x4620 = -1;
	int32_t t141 = 20;

    t141 = (((x4617<=x4618)>>x4619)%x4620);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x4637 = INT64_MIN;
	int16_t x4640 = INT16_MAX;
	volatile int32_t t142 = 382;

    t142 = (((x4637<=x4638)>>x4639)%x4640);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x4653 = INT32_MAX;
	static volatile int64_t x4654 = INT64_MIN;
	volatile int64_t x4655 = 2LL;
	static volatile int32_t x4656 = 18915613;
	int32_t t143 = 456878;

    t143 = (((x4653<=x4654)>>x4655)%x4656);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x4669 = 230U;
	int8_t x4670 = INT8_MAX;
	static int64_t x4672 = INT64_MIN;
	int64_t t144 = 17954247014973LL;

    t144 = (((x4669<=x4670)>>x4671)%x4672);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x4685 = UINT16_MAX;
	volatile uint8_t x4687 = 29U;
	uint8_t x4688 = 3U;
	int32_t t145 = -2482064;

    t145 = (((x4685<=x4686)>>x4687)%x4688);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x4707 = 0;
	int64_t x4708 = INT64_MAX;

    t146 = (((x4705<=x4706)>>x4707)%x4708);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x4717 = 1U;
	uint64_t x4718 = 26175827032385577LLU;
	int8_t x4719 = 1;
	volatile int64_t x4720 = -1LL;
	int64_t t147 = 1283373776699LL;

    t147 = (((x4717<=x4718)>>x4719)%x4720);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x4773 = -1199414866549LL;
	uint32_t x4774 = 64931U;
	uint8_t x4775 = 0U;
	int32_t x4776 = -151602;
	static volatile int32_t t148 = 30964;

    t148 = (((x4773<=x4774)>>x4775)%x4776);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x4777 = INT64_MAX;
	int8_t x4778 = 0;
	int8_t x4779 = 0;
	int32_t x4780 = INT32_MIN;
	int32_t t149 = -60850;

    t149 = (((x4777<=x4778)>>x4779)%x4780);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x4781 = -1;
	int16_t x4782 = -11;
	uint16_t x4783 = 11U;
	volatile int8_t x4784 = -16;

    t150 = (((x4781<=x4782)>>x4783)%x4784);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x4789 = INT8_MIN;
	uint64_t x4790 = UINT64_MAX;
	uint16_t x4791 = 15U;
	static int64_t t151 = 1067628768LL;

    t151 = (((x4789<=x4790)>>x4791)%x4792);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x4805 = -1;
	int32_t x4806 = INT32_MAX;
	uint8_t x4807 = 0U;
	uint64_t x4808 = 110416405903133LLU;
	volatile uint64_t t152 = 1444LLU;

    t152 = (((x4805<=x4806)>>x4807)%x4808);

    if (t152 != 1LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x4813 = 1101615U;
	volatile uint64_t x4814 = 122859525615033160LLU;
	static uint8_t x4815 = 0U;
	static int32_t x4816 = INT32_MAX;
	static volatile int32_t t153 = -382486;

    t153 = (((x4813<=x4814)>>x4815)%x4816);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x4887 = 22U;
	uint8_t x4888 = UINT8_MAX;
	volatile int32_t t154 = 11937;

    t154 = (((x4885<=x4886)>>x4887)%x4888);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x4945 = 803U;
	uint64_t x4946 = 99403LLU;
	volatile uint16_t x4947 = 0U;
	volatile int32_t t155 = -7;

    t155 = (((x4945<=x4946)>>x4947)%x4948);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x4970 = -1;
	int16_t x4971 = 1;
	static int8_t x4972 = INT8_MIN;
	int32_t t156 = -747;

    t156 = (((x4969<=x4970)>>x4971)%x4972);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x5007 = 9;
	static int64_t x5008 = INT64_MAX;
	static volatile int64_t t157 = 399261LL;

    t157 = (((x5005<=x5006)>>x5007)%x5008);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x5045 = 176582513133458815LLU;
	static int32_t x5046 = -7881;
	int32_t x5048 = 29891979;
	volatile int32_t t158 = -25;

    t158 = (((x5045<=x5046)>>x5047)%x5048);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x5133 = INT8_MAX;
	int64_t x5134 = INT64_MIN;
	volatile uint32_t t159 = 2773199U;

    t159 = (((x5133<=x5134)>>x5135)%x5136);

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x5158 = 5U;
	uint16_t x5159 = 2U;
	int16_t x5160 = -7;

    t160 = (((x5157<=x5158)>>x5159)%x5160);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x5229 = 36U;
	int64_t x5230 = INT64_MIN;
	uint8_t x5231 = 1U;
	int32_t x5232 = INT32_MAX;
	int32_t t161 = 404971936;

    t161 = (((x5229<=x5230)>>x5231)%x5232);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x5242 = INT64_MIN;
	int8_t x5243 = 1;
	int64_t x5244 = 956921983LL;

    t162 = (((x5241<=x5242)>>x5243)%x5244);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x5297 = UINT16_MAX;
	int32_t t163 = 684;

    t163 = (((x5297<=x5298)>>x5299)%x5300);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x5313 = 40U;
	int64_t x5314 = -1LL;
	int16_t x5316 = INT16_MAX;
	volatile int32_t t164 = 92;

    t164 = (((x5313<=x5314)>>x5315)%x5316);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x5349 = UINT32_MAX;
	volatile uint32_t x5351 = 5U;
	volatile uint32_t x5352 = UINT32_MAX;
	static uint32_t t165 = 176U;

    t165 = (((x5349<=x5350)>>x5351)%x5352);

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x5361 = INT32_MIN;
	int16_t x5363 = 2;

    t166 = (((x5361<=x5362)>>x5363)%x5364);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x5365 = UINT32_MAX;
	volatile int32_t t167 = 7307;

    t167 = (((x5365<=x5366)>>x5367)%x5368);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x5381 = INT16_MIN;
	static uint64_t x5383 = 3LLU;
	int16_t x5384 = 1366;
	volatile int32_t t168 = 4790;

    t168 = (((x5381<=x5382)>>x5383)%x5384);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x5433 = -170130257213829LL;
	uint32_t x5434 = 60054912U;
	int32_t x5436 = -1;
	int32_t t169 = -3324406;

    t169 = (((x5433<=x5434)>>x5435)%x5436);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x5445 = -1;
	uint16_t x5446 = 115U;
	volatile int64_t t170 = 3021118465LL;

    t170 = (((x5445<=x5446)>>x5447)%x5448);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x5549 = -1;
	int16_t x5550 = INT16_MIN;
	static uint64_t x5551 = 24LLU;
	uint32_t x5552 = UINT32_MAX;
	uint32_t t171 = 80U;

    t171 = (((x5549<=x5550)>>x5551)%x5552);

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x5565 = 0U;
	int8_t x5566 = 9;
	int8_t x5567 = 5;
	int32_t t172 = 20;

    t172 = (((x5565<=x5566)>>x5567)%x5568);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x5577 = UINT32_MAX;
	uint8_t x5578 = 3U;
	uint8_t x5579 = 1U;
	int32_t x5580 = INT32_MAX;
	volatile int32_t t173 = -5;

    t173 = (((x5577<=x5578)>>x5579)%x5580);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x5601 = INT64_MIN;
	uint32_t x5603 = 1U;
	int32_t t174 = -56;

    t174 = (((x5601<=x5602)>>x5603)%x5604);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x5605 = UINT64_MAX;
	int64_t x5606 = INT64_MIN;
	int16_t x5607 = 12;
	int64_t x5608 = INT64_MAX;

    t175 = (((x5605<=x5606)>>x5607)%x5608);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x5645 = INT32_MAX;
	static uint8_t x5647 = 14U;
	volatile int8_t x5648 = 1;
	int32_t t176 = -17;

    t176 = (((x5645<=x5646)>>x5647)%x5648);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x5671 = 7U;
	uint32_t x5672 = 679453967U;
	static uint32_t t177 = 750125U;

    t177 = (((x5669<=x5670)>>x5671)%x5672);

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x5702 = UINT8_MAX;
	int8_t x5703 = 1;
	static int32_t x5704 = 30105437;
	volatile int32_t t178 = 127990;

    t178 = (((x5701<=x5702)>>x5703)%x5704);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x5717 = -9;
	int32_t x5718 = INT32_MIN;
	static uint32_t x5720 = UINT32_MAX;
	volatile uint32_t t179 = 27176911U;

    t179 = (((x5717<=x5718)>>x5719)%x5720);

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x5729 = 38;
	uint32_t x5730 = 1U;
	int8_t x5731 = 12;
	volatile uint64_t x5732 = UINT64_MAX;
	static uint64_t t180 = 27118LLU;

    t180 = (((x5729<=x5730)>>x5731)%x5732);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x5733 = -1;
	int8_t x5735 = 2;
	volatile uint8_t x5736 = UINT8_MAX;
	volatile int32_t t181 = -54720200;

    t181 = (((x5733<=x5734)>>x5735)%x5736);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x5777 = 4954U;
	int64_t x5780 = INT64_MIN;
	int64_t t182 = 88478983056265LL;

    t182 = (((x5777<=x5778)>>x5779)%x5780);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x5833 = 76U;
	volatile uint8_t x5834 = UINT8_MAX;
	volatile uint64_t x5835 = 28LLU;
	int64_t x5836 = INT64_MIN;
	volatile int64_t t183 = 13LL;

    t183 = (((x5833<=x5834)>>x5835)%x5836);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x5857 = -1;
	static int32_t x5858 = INT32_MIN;
	int16_t x5859 = 2;
	static int8_t x5860 = INT8_MIN;
	static int32_t t184 = -3;

    t184 = (((x5857<=x5858)>>x5859)%x5860);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x5909 = 311767478LLU;
	uint32_t x5910 = 3111748U;
	uint16_t x5911 = 7U;
	static int16_t x5912 = INT16_MAX;
	int32_t t185 = 2;

    t185 = (((x5909<=x5910)>>x5911)%x5912);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x5925 = 787200074974LL;
	volatile int16_t x5926 = INT16_MIN;
	static volatile uint16_t x5927 = 0U;

    t186 = (((x5925<=x5926)>>x5927)%x5928);

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x5945 = INT64_MIN;
	static int8_t x5946 = INT8_MIN;
	int16_t x5948 = INT16_MIN;
	int32_t t187 = 541;

    t187 = (((x5945<=x5946)>>x5947)%x5948);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x5957 = INT32_MIN;
	int64_t x5958 = 10048LL;
	static int32_t x5959 = 14;
	volatile int64_t x5960 = INT64_MIN;
	volatile int64_t t188 = 2899420372LL;

    t188 = (((x5957<=x5958)>>x5959)%x5960);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x5973 = UINT8_MAX;
	volatile int8_t x5974 = INT8_MAX;
	int8_t x5975 = 11;

    t189 = (((x5973<=x5974)>>x5975)%x5976);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x6025 = 52U;
	int32_t x6026 = INT32_MIN;
	uint8_t x6027 = 2U;
	uint64_t x6028 = UINT64_MAX;
	volatile uint64_t t190 = 33875LLU;

    t190 = (((x6025<=x6026)>>x6027)%x6028);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x6054 = 1291561235U;
	int8_t x6055 = 20;
	static volatile int64_t x6056 = INT64_MIN;
	static int64_t t191 = 441306329LL;

    t191 = (((x6053<=x6054)>>x6055)%x6056);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x6061 = 199117260U;
	int64_t x6062 = 0LL;
	volatile uint16_t x6063 = 1U;
	uint64_t t192 = 104074771260468LLU;

    t192 = (((x6061<=x6062)>>x6063)%x6064);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x6081 = -105688572535453LL;
	static volatile uint8_t x6082 = UINT8_MAX;
	uint32_t x6083 = 0U;
	volatile uint32_t t193 = 26937297U;

    t193 = (((x6081<=x6082)>>x6083)%x6084);

    if (t193 != 1U) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x6113 = INT8_MIN;
	volatile int16_t x6114 = INT16_MIN;
	uint64_t x6116 = UINT64_MAX;
	volatile uint64_t t194 = 375817826382278247LLU;

    t194 = (((x6113<=x6114)>>x6115)%x6116);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x6182 = -1LL;
	static volatile uint16_t x6184 = 199U;
	int32_t t195 = -321318432;

    t195 = (((x6181<=x6182)>>x6183)%x6184);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x6210 = 0;
	uint8_t x6211 = 13U;
	static uint16_t x6212 = 482U;
	static volatile int32_t t196 = -241;

    t196 = (((x6209<=x6210)>>x6211)%x6212);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x6213 = INT64_MAX;
	int8_t x6215 = 0;
	int8_t x6216 = INT8_MAX;
	static int32_t t197 = 40450;

    t197 = (((x6213<=x6214)>>x6215)%x6216);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x6235 = 0LLU;
	static uint16_t x6236 = UINT16_MAX;
	int32_t t198 = 0;

    t198 = (((x6233<=x6234)>>x6235)%x6236);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x6269 = INT8_MAX;
	int8_t x6270 = 2;
	uint8_t x6271 = 30U;
	uint16_t x6272 = 1U;
	static volatile int32_t t199 = -289228446;

    t199 = (((x6269<=x6270)>>x6271)%x6272);

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



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

volatile int8_t x8 = 3;
int8_t x220 = 1;
uint8_t x227 = 90U;
int32_t x265 = -377480732;
volatile uint32_t x386 = 2U;
int32_t x517 = INT32_MIN;
uint8_t x518 = 1U;
volatile uint8_t x540 = 12U;
uint32_t x961 = UINT32_MAX;
uint8_t x964 = 16U;
uint32_t t11 = UINT32_MAX;
volatile int8_t x978 = INT8_MAX;
static volatile int8_t x980 = 1;
uint32_t x1009 = UINT32_MAX;
int64_t x1089 = -1621402655LL;
static int32_t t17 = 306367;
static uint8_t x1500 = 0U;
volatile int8_t x1547 = 4;
volatile int32_t t23 = 131306123;
uint16_t x1601 = UINT16_MAX;
volatile int64_t x1626 = INT64_MIN;
uint16_t x1864 = 31U;
static int16_t x2068 = 7;
int32_t x2118 = -1;
uint32_t x2517 = 2551784U;
int16_t x2518 = 1010;
uint32_t x2767 = UINT32_MAX;
volatile uint8_t x3020 = 29U;
int32_t x3143 = INT32_MAX;
uint32_t x3144 = 0U;
uint32_t x3277 = UINT32_MAX;
static int8_t x3279 = INT8_MAX;
volatile uint64_t x3293 = 6091912LLU;
volatile uint64_t t39 = 30865380011LLU;
uint16_t x3407 = 5795U;
volatile uint16_t x3408 = 15U;
volatile int32_t t40 = 7138;
static volatile uint8_t x3463 = 113U;
uint32_t x3464 = 23U;
static volatile uint64_t t41 = UINT64_MAX;
int32_t x3735 = 16817;
int8_t x3983 = 1;
uint32_t x3984 = 0U;
int32_t x4005 = INT32_MAX;
volatile uint8_t x4006 = 0U;
uint32_t x4277 = 32761228U;
int16_t x4426 = 1;
uint8_t x4428 = 0U;
uint16_t x4461 = 32016U;
volatile int8_t x4462 = -1;
static volatile int32_t t54 = -1;
uint16_t x4712 = 0U;
int16_t x5035 = INT16_MAX;
volatile int8_t x5155 = 1;
int16_t x5532 = 3;
uint8_t x5584 = 0U;
uint8_t x5616 = 7U;
int16_t x5701 = -1624;
uint8_t x5931 = 1U;
int64_t t65 = INT64_MAX;
uint64_t t67 = UINT64_MAX;
uint8_t x6245 = UINT8_MAX;
static int16_t x6598 = INT16_MIN;
volatile int8_t x6605 = -1;
int16_t x6608 = 30;
volatile int32_t t75 = -987047973;
int32_t t77 = -9;
static int32_t x7241 = INT32_MIN;
static int64_t x7479 = 394371492913350569LL;
int64_t x7533 = INT64_MAX;
static int64_t t80 = INT64_MAX;
int16_t x7573 = 8930;
int16_t x7667 = 1;
int8_t x7972 = 2;
uint8_t x8128 = 1U;
volatile int16_t x8282 = -1;
static int64_t x8284 = 15LL;
volatile int16_t x8306 = 0;
int8_t x8631 = 15;
volatile int32_t t96 = 6390;
int32_t x8795 = INT32_MAX;
static volatile int32_t t97 = INT32_MIN;
volatile int64_t t98 = -744364321917647LL;
uint8_t x9016 = 2U;
volatile int32_t t100 = INT32_MIN;
volatile int32_t t103 = -63;
static uint8_t x9337 = 0U;
int8_t x9340 = 26;
volatile int32_t x9591 = INT32_MAX;
int16_t x9602 = INT16_MIN;
int64_t x9701 = -2LL;
static uint16_t x9702 = 2915U;


void f0(void) {
    	int8_t x5 = -1;
	uint8_t x6 = 13U;
	volatile uint16_t x7 = 13110U;
	volatile int32_t t0 = -122245600;

    t0 = (x5/(x6<=(x7>>x8)));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x121 = INT16_MIN;
	int64_t x122 = -1LL;
	uint32_t x123 = UINT32_MAX;
	int8_t x124 = 1;
	int32_t t1 = 0;

    t1 = (x121/(x122<=(x123>>x124)));

    if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x217 = INT8_MIN;
	int64_t x218 = INT64_MIN;
	volatile uint8_t x219 = 20U;
	int32_t t2 = -53;

    t2 = (x217/(x218<=(x219>>x220)));

    if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x221 = 738U;
	int8_t x222 = 0;
	static int32_t x223 = 14;
	int16_t x224 = 0;
	volatile int32_t t3 = 3;

    t3 = (x221/(x222<=(x223>>x224)));

    if (t3 != 738) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x225 = INT16_MIN;
	int8_t x226 = -25;
	int8_t x228 = 1;
	static int32_t t4 = -17275;

    t4 = (x225/(x226<=(x227>>x228)));

    if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x266 = -1LL;
	volatile uint16_t x267 = UINT16_MAX;
	static uint8_t x268 = 0U;
	volatile int32_t t5 = -15689;

    t5 = (x265/(x266<=(x267>>x268)));

    if (t5 != -377480732) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x385 = UINT16_MAX;
	uint32_t x387 = UINT32_MAX;
	int16_t x388 = 1;
	int32_t t6 = -20447608;

    t6 = (x385/(x386<=(x387>>x388)));

    if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x449 = 65;
	uint64_t x450 = 2LLU;
	static int32_t x451 = 1731990;
	static uint8_t x452 = 4U;
	volatile int32_t t7 = -11815;

    t7 = (x449/(x450<=(x451>>x452)));

    if (t7 != 65) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x519 = 1U;
	static int16_t x520 = 0;
	volatile int32_t t8 = INT32_MIN;

    t8 = (x517/(x518<=(x519>>x520)));

    if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x537 = INT8_MIN;
	int64_t x538 = -8574683861299LL;
	uint32_t x539 = 10U;
	int32_t t9 = 51929;

    t9 = (x537/(x538<=(x539>>x540)));

    if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x661 = UINT16_MAX;
	uint16_t x662 = UINT16_MAX;
	uint32_t x663 = UINT32_MAX;
	int32_t x664 = 2;
	volatile int32_t t10 = 223644;

    t10 = (x661/(x662<=(x663>>x664)));

    if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x962 = 29U;
	static int64_t x963 = 2156637401633643LL;

    t11 = (x961/(x962<=(x963>>x964)));

    if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x977 = INT64_MIN;
	int32_t x979 = 621904797;
	static int64_t t12 = INT64_MIN;

    t12 = (x977/(x978<=(x979>>x980)));

    if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x1010 = INT64_MIN;
	int16_t x1011 = 1;
	uint16_t x1012 = 6U;
	volatile uint32_t t13 = UINT32_MAX;

    t13 = (x1009/(x1010<=(x1011>>x1012)));

    if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x1081 = INT64_MIN;
	int64_t x1082 = INT64_MIN;
	uint16_t x1083 = 3979U;
	uint16_t x1084 = 4U;
	static volatile int64_t t14 = INT64_MIN;

    t14 = (x1081/(x1082<=(x1083>>x1084)));

    if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x1090 = -1;
	volatile int64_t x1091 = INT64_MAX;
	volatile uint8_t x1092 = 0U;
	volatile int64_t t15 = -106259033336LL;

    t15 = (x1089/(x1090<=(x1091>>x1092)));

    if (t15 != -1621402655LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x1225 = INT16_MIN;
	int8_t x1226 = INT8_MAX;
	volatile int64_t x1227 = 680860663721930405LL;
	uint8_t x1228 = 0U;
	volatile int32_t t16 = 0;

    t16 = (x1225/(x1226<=(x1227>>x1228)));

    if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x1273 = 8;
	int16_t x1274 = -1;
	uint8_t x1275 = UINT8_MAX;
	uint8_t x1276 = 1U;

    t17 = (x1273/(x1274<=(x1275>>x1276)));

    if (t17 != 8) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x1281 = -47462LL;
	int16_t x1282 = INT16_MIN;
	static int8_t x1283 = INT8_MAX;
	uint8_t x1284 = 9U;
	int64_t t18 = -10080363LL;

    t18 = (x1281/(x1282<=(x1283>>x1284)));

    if (t18 != -47462LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x1413 = 7596U;
	int32_t x1414 = INT32_MIN;
	uint16_t x1415 = 92U;
	int16_t x1416 = 1;
	int32_t t19 = -566;

    t19 = (x1413/(x1414<=(x1415>>x1416)));

    if (t19 != 7596) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x1497 = INT32_MIN;
	int64_t x1498 = INT64_MIN;
	static int8_t x1499 = 17;
	volatile int32_t t20 = INT32_MIN;

    t20 = (x1497/(x1498<=(x1499>>x1500)));

    if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint8_t x1513 = 6U;
	int8_t x1514 = 1;
	static volatile int64_t x1515 = INT64_MAX;
	uint8_t x1516 = 57U;
	volatile int32_t t21 = -344;

    t21 = (x1513/(x1514<=(x1515>>x1516)));

    if (t21 != 6) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x1545 = -6;
	static int16_t x1546 = -1;
	uint8_t x1548 = 2U;
	int32_t t22 = -8286588;

    t22 = (x1545/(x1546<=(x1547>>x1548)));

    if (t22 != -6) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x1549 = -42658631;
	int8_t x1550 = 0;
	int8_t x1551 = INT8_MAX;
	int8_t x1552 = 0;

    t23 = (x1549/(x1550<=(x1551>>x1552)));

    if (t23 != -42658631) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x1602 = -1;
	uint8_t x1603 = 117U;
	static int16_t x1604 = 24;
	static int32_t t24 = 7209892;

    t24 = (x1601/(x1602<=(x1603>>x1604)));

    if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x1625 = INT16_MIN;
	volatile uint32_t x1627 = 3891U;
	volatile uint8_t x1628 = 0U;
	int32_t t25 = -117444494;

    t25 = (x1625/(x1626<=(x1627>>x1628)));

    if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x1649 = -1;
	volatile uint8_t x1650 = 125U;
	uint16_t x1651 = UINT16_MAX;
	uint16_t x1652 = 0U;
	int32_t t26 = 13576;

    t26 = (x1649/(x1650<=(x1651>>x1652)));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x1861 = INT64_MIN;
	static volatile uint16_t x1862 = 1705U;
	uint64_t x1863 = 5226664643194431LLU;
	volatile int64_t t27 = INT64_MIN;

    t27 = (x1861/(x1862<=(x1863>>x1864)));

    if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x2065 = INT32_MAX;
	int8_t x2066 = INT8_MAX;
	uint32_t x2067 = 598789U;
	volatile int32_t t28 = INT32_MAX;

    t28 = (x2065/(x2066<=(x2067>>x2068)));

    if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x2117 = 7U;
	uint8_t x2119 = UINT8_MAX;
	static int8_t x2120 = 0;
	volatile int32_t t29 = -11627913;

    t29 = (x2117/(x2118<=(x2119>>x2120)));

    if (t29 != 7) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x2185 = 12;
	int32_t x2186 = INT32_MIN;
	int16_t x2187 = INT16_MAX;
	uint8_t x2188 = 19U;
	static volatile int32_t t30 = 80;

    t30 = (x2185/(x2186<=(x2187>>x2188)));

    if (t30 != 12) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x2245 = INT8_MIN;
	int32_t x2246 = INT32_MIN;
	volatile int32_t x2247 = 117092;
	int32_t x2248 = 7;
	int32_t t31 = 208;

    t31 = (x2245/(x2246<=(x2247>>x2248)));

    if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x2519 = 122888767U;
	int8_t x2520 = 6;
	uint32_t t32 = 39488524U;

    t32 = (x2517/(x2518<=(x2519>>x2520)));

    if (t32 != 2551784U) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int16_t x2761 = INT16_MIN;
	uint16_t x2762 = 476U;
	uint32_t x2763 = 625U;
	uint8_t x2764 = 0U;
	volatile int32_t t33 = 24561799;

    t33 = (x2761/(x2762<=(x2763>>x2764)));

    if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x2765 = -8630684339822990LL;
	volatile uint8_t x2766 = 12U;
	static int8_t x2768 = 0;
	volatile int64_t t34 = -16504749LL;

    t34 = (x2765/(x2766<=(x2767>>x2768)));

    if (t34 != -8630684339822990LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x2873 = 0;
	int32_t x2874 = INT32_MIN;
	static int8_t x2875 = 2;
	volatile int64_t x2876 = 7LL;
	int32_t t35 = 764;

    t35 = (x2873/(x2874<=(x2875>>x2876)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x3017 = INT16_MIN;
	int64_t x3018 = INT64_MIN;
	uint8_t x3019 = 0U;
	volatile int32_t t36 = -904;

    t36 = (x3017/(x3018<=(x3019>>x3020)));

    if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x3141 = 316U;
	int16_t x3142 = -150;
	volatile int32_t t37 = -102901916;

    t37 = (x3141/(x3142<=(x3143>>x3144)));

    if (t37 != 316) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x3278 = INT16_MIN;
	static volatile uint16_t x3280 = 9U;
	uint32_t t38 = UINT32_MAX;

    t38 = (x3277/(x3278<=(x3279>>x3280)));

    if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x3294 = INT8_MAX;
	static volatile uint32_t x3295 = 565700849U;
	static uint8_t x3296 = 2U;

    t39 = (x3293/(x3294<=(x3295>>x3296)));

    if (t39 != 6091912LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x3405 = 38;
	static int32_t x3406 = INT32_MIN;

    t40 = (x3405/(x3406<=(x3407>>x3408)));

    if (t40 != 38) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x3461 = UINT64_MAX;
	static int8_t x3462 = -1;

    t41 = (x3461/(x3462<=(x3463>>x3464)));

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x3581 = INT32_MAX;
	int16_t x3582 = -1;
	int64_t x3583 = 386697LL;
	static volatile uint8_t x3584 = 25U;
	int32_t t42 = INT32_MAX;

    t42 = (x3581/(x3582<=(x3583>>x3584)));

    if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x3585 = 4U;
	int16_t x3586 = 14;
	int32_t x3587 = 33546;
	uint8_t x3588 = 10U;
	uint32_t t43 = 233228U;

    t43 = (x3585/(x3586<=(x3587>>x3588)));

    if (t43 != 4U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x3681 = 85;
	uint8_t x3682 = 1U;
	uint64_t x3683 = UINT64_MAX;
	volatile uint8_t x3684 = 0U;
	volatile int32_t t44 = 112663;

    t44 = (x3681/(x3682<=(x3683>>x3684)));

    if (t44 != 85) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x3717 = INT32_MIN;
	volatile uint16_t x3718 = 2364U;
	int32_t x3719 = 53973;
	uint8_t x3720 = 1U;
	volatile int32_t t45 = INT32_MIN;

    t45 = (x3717/(x3718<=(x3719>>x3720)));

    if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x3733 = UINT16_MAX;
	int16_t x3734 = INT16_MIN;
	volatile uint16_t x3736 = 0U;
	volatile int32_t t46 = 126;

    t46 = (x3733/(x3734<=(x3735>>x3736)));

    if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x3841 = 894;
	uint64_t x3842 = 3LLU;
	int8_t x3843 = INT8_MAX;
	volatile uint8_t x3844 = 5U;
	volatile int32_t t47 = -577;

    t47 = (x3841/(x3842<=(x3843>>x3844)));

    if (t47 != 894) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x3897 = -6;
	int16_t x3898 = 0;
	int8_t x3899 = INT8_MAX;
	uint8_t x3900 = 0U;
	static int32_t t48 = 0;

    t48 = (x3897/(x3898<=(x3899>>x3900)));

    if (t48 != -6) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x3981 = -4427983455918822LL;
	uint8_t x3982 = 1U;
	static int64_t t49 = 1222392945241640255LL;

    t49 = (x3981/(x3982<=(x3983>>x3984)));

    if (t49 != -4427983455918822LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x4007 = 4U;
	int16_t x4008 = 25;
	int32_t t50 = INT32_MAX;

    t50 = (x4005/(x4006<=(x4007>>x4008)));

    if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x4278 = 2U;
	int32_t x4279 = 5484010;
	static uint8_t x4280 = 1U;
	volatile uint32_t t51 = 2100799U;

    t51 = (x4277/(x4278<=(x4279>>x4280)));

    if (t51 != 32761228U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x4425 = 515212592;
	uint16_t x4427 = 12840U;
	static int32_t t52 = 563867;

    t52 = (x4425/(x4426<=(x4427>>x4428)));

    if (t52 != 515212592) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x4463 = 47700417;
	uint32_t x4464 = 12U;
	volatile int32_t t53 = 2;

    t53 = (x4461/(x4462<=(x4463>>x4464)));

    if (t53 != 32016) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x4485 = UINT8_MAX;
	uint8_t x4486 = UINT8_MAX;
	uint64_t x4487 = 1901958777966314LLU;
	static volatile uint16_t x4488 = 7U;

    t54 = (x4485/(x4486<=(x4487>>x4488)));

    if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x4709 = -1;
	volatile uint8_t x4710 = UINT8_MAX;
	volatile uint64_t x4711 = 390329LLU;
	int32_t t55 = 6489;

    t55 = (x4709/(x4710<=(x4711>>x4712)));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x5025 = 8015722;
	int32_t x5026 = -483853;
	volatile int32_t x5027 = INT32_MAX;
	volatile uint8_t x5028 = 3U;
	volatile int32_t t56 = -4;

    t56 = (x5025/(x5026<=(x5027>>x5028)));

    if (t56 != 8015722) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x5033 = INT64_MAX;
	static int16_t x5034 = -1;
	uint8_t x5036 = 0U;
	volatile int64_t t57 = INT64_MAX;

    t57 = (x5033/(x5034<=(x5035>>x5036)));

    if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x5129 = 1U;
	volatile int16_t x5130 = INT16_MIN;
	int64_t x5131 = INT64_MAX;
	static uint8_t x5132 = 0U;
	int32_t t58 = -458;

    t58 = (x5129/(x5130<=(x5131>>x5132)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x5153 = 81U;
	int16_t x5154 = -5496;
	int8_t x5156 = 1;
	volatile uint32_t t59 = 1787138471U;

    t59 = (x5153/(x5154<=(x5155>>x5156)));

    if (t59 != 81U) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x5529 = INT32_MAX;
	volatile int16_t x5530 = INT16_MIN;
	int16_t x5531 = INT16_MAX;
	static volatile int32_t t60 = INT32_MAX;

    t60 = (x5529/(x5530<=(x5531>>x5532)));

    if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x5581 = -48999LL;
	uint16_t x5582 = UINT16_MAX;
	uint64_t x5583 = 13327844261LLU;
	volatile int64_t t61 = -39LL;

    t61 = (x5581/(x5582<=(x5583>>x5584)));

    if (t61 != -48999LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x5613 = INT32_MIN;
	uint16_t x5614 = 2U;
	uint16_t x5615 = UINT16_MAX;
	volatile int32_t t62 = INT32_MIN;

    t62 = (x5613/(x5614<=(x5615>>x5616)));

    if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x5702 = 4004U;
	int64_t x5703 = INT64_MAX;
	static uint64_t x5704 = 1LLU;
	int32_t t63 = -24;

    t63 = (x5701/(x5702<=(x5703>>x5704)));

    if (t63 != -1624) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x5709 = 30U;
	int64_t x5710 = -18813763LL;
	int32_t x5711 = INT32_MAX;
	static uint16_t x5712 = 4U;
	int32_t t64 = 194;

    t64 = (x5709/(x5710<=(x5711>>x5712)));

    if (t64 != 30) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x5929 = INT64_MAX;
	static int16_t x5930 = -1829;
	int8_t x5932 = 16;

    t65 = (x5929/(x5930<=(x5931>>x5932)));

    if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x6053 = 23U;
	volatile int8_t x6054 = INT8_MIN;
	uint16_t x6055 = UINT16_MAX;
	int64_t x6056 = 1LL;
	volatile int32_t t66 = 9306;

    t66 = (x6053/(x6054<=(x6055>>x6056)));

    if (t66 != 23) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x6169 = UINT64_MAX;
	uint16_t x6170 = 1U;
	uint64_t x6171 = 13637547066350LLU;
	int16_t x6172 = 5;

    t67 = (x6169/(x6170<=(x6171>>x6172)));

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x6246 = INT16_MIN;
	int8_t x6247 = 2;
	static uint32_t x6248 = 1U;
	volatile int32_t t68 = 7511;

    t68 = (x6245/(x6246<=(x6247>>x6248)));

    if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x6309 = 1U;
	static int8_t x6310 = -1;
	static int32_t x6311 = 875;
	uint8_t x6312 = 27U;
	int32_t t69 = 43156790;

    t69 = (x6309/(x6310<=(x6311>>x6312)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x6313 = UINT8_MAX;
	volatile int32_t x6314 = -122124;
	static uint8_t x6315 = 0U;
	uint16_t x6316 = 2U;
	volatile int32_t t70 = 14;

    t70 = (x6313/(x6314<=(x6315>>x6316)));

    if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x6317 = 1U;
	int32_t x6318 = 1;
	uint32_t x6319 = UINT32_MAX;
	uint8_t x6320 = 13U;
	int32_t t71 = 58808763;

    t71 = (x6317/(x6318<=(x6319>>x6320)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x6525 = 6121277U;
	volatile int16_t x6526 = INT16_MAX;
	uint64_t x6527 = UINT64_MAX;
	static uint8_t x6528 = 6U;
	volatile uint32_t t72 = 11336U;

    t72 = (x6525/(x6526<=(x6527>>x6528)));

    if (t72 != 6121277U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x6597 = 1U;
	int8_t x6599 = INT8_MAX;
	uint8_t x6600 = 4U;
	volatile int32_t t73 = 2;

    t73 = (x6597/(x6598<=(x6599>>x6600)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x6606 = 12LL;
	static int64_t x6607 = INT64_MAX;
	int32_t t74 = -158;

    t74 = (x6605/(x6606<=(x6607>>x6608)));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x6729 = INT16_MIN;
	volatile int32_t x6730 = -13815;
	volatile uint8_t x6731 = UINT8_MAX;
	int8_t x6732 = 0;

    t75 = (x6729/(x6730<=(x6731>>x6732)));

    if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x6925 = -193384058;
	int64_t x6926 = INT64_MIN;
	int64_t x6927 = INT64_MAX;
	uint8_t x6928 = 8U;
	static volatile int32_t t76 = -277949;

    t76 = (x6925/(x6926<=(x6927>>x6928)));

    if (t76 != -193384058) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x7181 = INT16_MIN;
	int16_t x7182 = -1;
	uint8_t x7183 = UINT8_MAX;
	uint16_t x7184 = 11U;

    t77 = (x7181/(x7182<=(x7183>>x7184)));

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x7242 = 1944809457LLU;
	uint32_t x7243 = UINT32_MAX;
	uint32_t x7244 = 1U;
	volatile int32_t t78 = INT32_MIN;

    t78 = (x7241/(x7242<=(x7243>>x7244)));

    if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x7477 = INT64_MAX;
	volatile uint8_t x7478 = UINT8_MAX;
	uint8_t x7480 = 7U;
	int64_t t79 = INT64_MAX;

    t79 = (x7477/(x7478<=(x7479>>x7480)));

    if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x7534 = 0U;
	int8_t x7535 = 33;
	uint8_t x7536 = 2U;

    t80 = (x7533/(x7534<=(x7535>>x7536)));

    if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x7574 = INT64_MIN;
	int64_t x7575 = 125561354328403285LL;
	static uint8_t x7576 = 5U;
	static int32_t t81 = -4545;

    t81 = (x7573/(x7574<=(x7575>>x7576)));

    if (t81 != 8930) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x7613 = -1LL;
	int64_t x7614 = INT64_MIN;
	int32_t x7615 = INT32_MAX;
	int8_t x7616 = 0;
	static int64_t t82 = -318274251043LL;

    t82 = (x7613/(x7614<=(x7615>>x7616)));

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x7633 = 9U;
	uint16_t x7634 = UINT16_MAX;
	volatile int64_t x7635 = 887035119996526914LL;
	int16_t x7636 = 1;
	volatile int32_t t83 = -1;

    t83 = (x7633/(x7634<=(x7635>>x7636)));

    if (t83 != 9) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x7645 = 0U;
	int64_t x7646 = INT64_MIN;
	uint8_t x7647 = 35U;
	uint8_t x7648 = 1U;
	int32_t t84 = 202313;

    t84 = (x7645/(x7646<=(x7647>>x7648)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x7665 = INT64_MAX;
	int64_t x7666 = -493LL;
	uint16_t x7668 = 0U;
	volatile int64_t t85 = INT64_MAX;

    t85 = (x7665/(x7666<=(x7667>>x7668)));

    if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x7761 = INT32_MAX;
	int32_t x7762 = INT32_MIN;
	static uint16_t x7763 = UINT16_MAX;
	uint16_t x7764 = 11U;
	static volatile int32_t t86 = INT32_MAX;

    t86 = (x7761/(x7762<=(x7763>>x7764)));

    if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x7969 = UINT16_MAX;
	static int64_t x7970 = INT64_MIN;
	int64_t x7971 = INT64_MAX;
	static volatile int32_t t87 = -2224083;

    t87 = (x7969/(x7970<=(x7971>>x7972)));

    if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x8125 = 3U;
	int16_t x8126 = INT16_MIN;
	volatile uint8_t x8127 = 1U;
	volatile int32_t t88 = -1;

    t88 = (x8125/(x8126<=(x8127>>x8128)));

    if (t88 != 3) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x8189 = -1;
	int64_t x8190 = INT64_MIN;
	static volatile int16_t x8191 = 0;
	static uint16_t x8192 = 0U;
	int32_t t89 = -13;

    t89 = (x8189/(x8190<=(x8191>>x8192)));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x8281 = 944520LLU;
	uint16_t x8283 = UINT16_MAX;
	uint64_t t90 = 1348653323780LLU;

    t90 = (x8281/(x8282<=(x8283>>x8284)));

    if (t90 != 944520LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x8305 = INT64_MIN;
	int32_t x8307 = INT32_MAX;
	uint8_t x8308 = 3U;
	int64_t t91 = INT64_MIN;

    t91 = (x8305/(x8306<=(x8307>>x8308)));

    if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x8309 = INT32_MIN;
	int16_t x8310 = 4264;
	uint32_t x8311 = 4562038U;
	uint8_t x8312 = 3U;
	volatile int32_t t92 = INT32_MIN;

    t92 = (x8309/(x8310<=(x8311>>x8312)));

    if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x8629 = 1172500941U;
	volatile int64_t x8630 = -7899157LL;
	uint8_t x8632 = 23U;
	uint32_t t93 = 346690723U;

    t93 = (x8629/(x8630<=(x8631>>x8632)));

    if (t93 != 1172500941U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x8705 = 63U;
	uint32_t x8706 = 5834U;
	volatile uint32_t x8707 = 257407394U;
	uint32_t x8708 = 6U;
	volatile int32_t t94 = -246472;

    t94 = (x8705/(x8706<=(x8707>>x8708)));

    if (t94 != 63) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x8721 = -1;
	int64_t x8722 = -1158950214413LL;
	static int64_t x8723 = 16054957162759LL;
	uint16_t x8724 = 34U;
	static int32_t t95 = -68435759;

    t95 = (x8721/(x8722<=(x8723>>x8724)));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x8733 = INT8_MAX;
	uint8_t x8734 = UINT8_MAX;
	uint32_t x8735 = 6530U;
	static uint32_t x8736 = 3U;

    t96 = (x8733/(x8734<=(x8735>>x8736)));

    if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x8793 = INT32_MIN;
	static int32_t x8794 = INT32_MIN;
	static uint16_t x8796 = 2U;

    t97 = (x8793/(x8794<=(x8795>>x8796)));

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x8833 = 52472715LL;
	int16_t x8834 = INT16_MIN;
	int64_t x8835 = INT64_MAX;
	volatile uint8_t x8836 = 5U;

    t98 = (x8833/(x8834<=(x8835>>x8836)));

    if (t98 != 52472715LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x8841 = INT32_MAX;
	int16_t x8842 = INT16_MIN;
	int64_t x8843 = 113632074LL;
	uint8_t x8844 = 11U;
	int32_t t99 = INT32_MAX;

    t99 = (x8841/(x8842<=(x8843>>x8844)));

    if (t99 != INT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x9013 = INT32_MIN;
	static int8_t x9014 = -1;
	int64_t x9015 = INT64_MAX;

    t100 = (x9013/(x9014<=(x9015>>x9016)));

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x9049 = -18;
	static uint64_t x9050 = 2630920680LLU;
	volatile uint32_t x9051 = UINT32_MAX;
	uint32_t x9052 = 0U;
	volatile int32_t t101 = 5952814;

    t101 = (x9049/(x9050<=(x9051>>x9052)));

    if (t101 != -18) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x9085 = 968U;
	int8_t x9086 = 0;
	uint8_t x9087 = UINT8_MAX;
	volatile uint8_t x9088 = 1U;
	int32_t t102 = 318;

    t102 = (x9085/(x9086<=(x9087>>x9088)));

    if (t102 != 968) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x9137 = 61;
	volatile int32_t x9138 = INT32_MIN;
	volatile int8_t x9139 = INT8_MAX;
	uint16_t x9140 = 26U;

    t103 = (x9137/(x9138<=(x9139>>x9140)));

    if (t103 != 61) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x9209 = -1;
	int32_t x9210 = 116;
	volatile uint64_t x9211 = 30394673548464463LLU;
	volatile int8_t x9212 = 1;
	static int32_t t104 = 337549948;

    t104 = (x9209/(x9210<=(x9211>>x9212)));

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x9265 = 1388;
	static int64_t x9266 = -1LL;
	int16_t x9267 = INT16_MAX;
	volatile int64_t x9268 = 1LL;
	volatile int32_t t105 = 380946093;

    t105 = (x9265/(x9266<=(x9267>>x9268)));

    if (t105 != 1388) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x9309 = 1;
	static int16_t x9310 = -1;
	static int8_t x9311 = 7;
	int8_t x9312 = 30;
	volatile int32_t t106 = 45833120;

    t106 = (x9309/(x9310<=(x9311>>x9312)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x9338 = INT8_MAX;
	uint64_t x9339 = UINT64_MAX;
	volatile int32_t t107 = 0;

    t107 = (x9337/(x9338<=(x9339>>x9340)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x9589 = UINT8_MAX;
	int32_t x9590 = INT32_MIN;
	volatile uint16_t x9592 = 1U;
	static volatile int32_t t108 = 1850;

    t108 = (x9589/(x9590<=(x9591>>x9592)));

    if (t108 != 255) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x9601 = INT8_MIN;
	uint16_t x9603 = 73U;
	volatile int16_t x9604 = 28;
	volatile int32_t t109 = -8;

    t109 = (x9601/(x9602<=(x9603>>x9604)));

    if (t109 != -128) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x9703 = INT16_MAX;
	static uint32_t x9704 = 2U;
	static int64_t t110 = 399734LL;

    t110 = (x9701/(x9702<=(x9703>>x9704)));

    if (t110 != -2LL) { NG(); } else { ; }
	
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


    return 0;
}



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

uint64_t x218 = UINT64_MAX;
static uint64_t x252 = 0LLU;
static uint16_t x270 = 15U;
uint32_t x462 = 5U;
int32_t x575 = 1057;
static uint8_t x663 = 0U;
static uint16_t x664 = 2U;
int8_t x711 = 0;
static int64_t t9 = -106122LL;
volatile uint64_t x871 = UINT64_MAX;
static int32_t x1081 = INT32_MIN;
static int64_t x1082 = INT64_MAX;
int32_t t13 = -1;
uint16_t x1577 = 7631U;
volatile uint32_t t14 = 6081309U;
int64_t x1584 = INT64_MIN;
int64_t t16 = 2413154626LL;
uint8_t x1721 = 3U;
uint64_t x1724 = UINT64_MAX;
int32_t x1756 = -1;
int64_t x1938 = 3084366896207129005LL;
int32_t x1997 = INT32_MIN;
uint32_t x2100 = 0U;
uint32_t x2212 = UINT32_MAX;
int8_t x2417 = INT8_MIN;
int16_t x2418 = 13;
static int16_t x2420 = -1;
int32_t t26 = 258627393;
int16_t x2548 = -1;
int32_t t28 = 0;
volatile uint8_t x2974 = 6U;
static int8_t x2976 = -1;
volatile int16_t x3259 = -1;
int32_t t33 = 29441572;
static int16_t x3272 = -1;
static uint64_t x3386 = 13706LLU;
static int32_t x3398 = INT32_MAX;
static volatile int32_t t37 = -3;
volatile int8_t x3609 = -50;
int8_t x3611 = -1;
uint8_t x3618 = UINT8_MAX;
volatile uint64_t x3785 = 3LLU;
int32_t t45 = -1;
int16_t x4373 = -1243;
volatile int32_t x4374 = 65161969;
volatile int32_t t49 = -62241389;
uint16_t x4602 = 8U;
uint32_t x4708 = UINT32_MAX;
int64_t x4798 = INT64_MAX;
volatile uint64_t x4799 = 1808040439848562LLU;
static int16_t x5168 = -1;
int64_t t58 = -630334861LL;
int32_t x5601 = 7;
int32_t x5602 = INT32_MAX;
int8_t x5727 = -5;
static int8_t x5728 = -5;
uint32_t x5922 = 8U;
uint64_t x5944 = UINT64_MAX;
uint64_t t68 = 8034384392961LLU;
volatile uint8_t x6213 = 0U;
int8_t x6227 = 7;
uint32_t x6228 = 2U;
uint64_t t70 = 4124418159LLU;
int8_t x6283 = -1;
volatile uint64_t t72 = 172785533LLU;
uint64_t x6602 = UINT64_MAX;
volatile uint64_t t73 = 292268LLU;
volatile uint64_t x6826 = UINT64_MAX;
uint64_t x6912 = UINT64_MAX;
uint64_t x7070 = 106779493699906522LLU;
uint8_t x7195 = UINT8_MAX;
volatile int64_t t78 = 0LL;
volatile int32_t t82 = 1043;
int8_t x7483 = -1;
int64_t x7484 = -1LL;
static int16_t x7707 = INT16_MIN;
static int8_t x7708 = 0;
volatile uint16_t x7769 = 32466U;
int32_t x7770 = 724006;
static uint64_t x7772 = UINT64_MAX;
volatile int32_t t87 = -520891800;
volatile int64_t x7961 = INT64_MIN;
int32_t x7962 = INT32_MAX;
uint8_t x8002 = 57U;
volatile int8_t x8003 = 0;
int32_t x8006 = INT32_MAX;
uint32_t x8050 = 2150057U;
uint64_t x8186 = 279616332452386LLU;
int64_t x8209 = INT64_MAX;
uint8_t x8253 = UINT8_MAX;
uint8_t x8370 = 59U;
uint16_t x8554 = 39U;
volatile int64_t x8629 = INT64_MIN;
static uint64_t x8709 = 108931LLU;
volatile int8_t x8711 = 0;


void f0(void) {
    	int32_t x1 = -1;
	int8_t x2 = 5;
	volatile int32_t x3 = -164;
	static uint16_t x4 = 0U;
	int32_t t0 = -817367225;

    t0 = (x1%(x2>>(x3*x4)));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x153 = 7;
	uint32_t x154 = 443U;
	static int16_t x155 = -1;
	uint32_t x156 = UINT32_MAX;
	uint32_t t1 = 67U;

    t1 = (x153%(x154>>(x155*x156)));

    if (t1 != 7U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x217 = UINT64_MAX;
	int8_t x219 = -33;
	static uint64_t x220 = UINT64_MAX;
	uint64_t t2 = 9438750180LLU;

    t2 = (x217%(x218>>(x219*x220)));

    if (t2 != 3LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x249 = INT16_MIN;
	int64_t x250 = INT64_MAX;
	uint64_t x251 = 15985LLU;
	volatile int64_t t3 = 1765383833311LL;

    t3 = (x249%(x250>>(x251*x252)));

    if (t3 != -32768LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x269 = INT8_MIN;
	volatile int64_t x271 = INT64_MIN;
	uint64_t x272 = 2LLU;
	int32_t t4 = 0;

    t4 = (x269%(x270>>(x271*x272)));

    if (t4 != -8) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x461 = UINT32_MAX;
	static uint32_t x463 = 1594811200U;
	int32_t x464 = INT32_MIN;
	volatile uint32_t t5 = 1U;

    t5 = (x461%(x462>>(x463*x464)));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x573 = -2;
	int8_t x574 = INT8_MAX;
	int16_t x576 = 0;
	int32_t t6 = -3354462;

    t6 = (x573%(x574>>(x575*x576)));

    if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x589 = 1339473956459842LLU;
	uint32_t x590 = 5810U;
	static int32_t x591 = -1;
	int8_t x592 = -1;
	uint64_t t7 = 16064903908712077LLU;

    t7 = (x589%(x590>>(x591*x592)));

    if (t7 != 847LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x661 = INT16_MAX;
	volatile uint32_t x662 = 166534U;
	volatile uint32_t t8 = 109334U;

    t8 = (x661%(x662>>(x663*x664)));

    if (t8 != 32767U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x709 = INT64_MIN;
	uint8_t x710 = 121U;
	int8_t x712 = 1;

    t9 = (x709%(x710>>(x711*x712)));

    if (t9 != -107LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x869 = -1;
	static uint16_t x870 = UINT16_MAX;
	uint64_t x872 = UINT64_MAX;
	int32_t t10 = -661391;

    t10 = (x869%(x870>>(x871*x872)));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x1069 = INT16_MIN;
	volatile int16_t x1070 = INT16_MAX;
	static uint64_t x1071 = 0LLU;
	volatile uint32_t x1072 = UINT32_MAX;
	volatile int32_t t11 = -119899285;

    t11 = (x1069%(x1070>>(x1071*x1072)));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x1083 = -1;
	int16_t x1084 = -1;
	static int64_t t12 = 348494044LL;

    t12 = (x1081%(x1082>>(x1083*x1084)));

    if (t12 != -2147483648LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x1345 = INT16_MIN;
	volatile uint16_t x1346 = UINT16_MAX;
	int16_t x1347 = 0;
	int64_t x1348 = INT64_MAX;

    t13 = (x1345%(x1346>>(x1347*x1348)));

    if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x1578 = 161305198U;
	static int16_t x1579 = -2;
	uint64_t x1580 = UINT64_MAX;

    t14 = (x1577%(x1578>>(x1579*x1580)));

    if (t14 != 7631U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x1581 = 3U;
	static int16_t x1582 = 117;
	uint64_t x1583 = 37339508484118358LLU;
	volatile int32_t t15 = -1;

    t15 = (x1581%(x1582>>(x1583*x1584)));

    if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int64_t x1609 = INT64_MAX;
	int16_t x1610 = 83;
	uint32_t x1611 = UINT32_MAX;
	int32_t x1612 = -1;

    t16 = (x1609%(x1610>>(x1611*x1612)));

    if (t16 != 7LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x1722 = 378365119275LL;
	int32_t x1723 = -1;
	static int64_t t17 = -1434321165783434LL;

    t17 = (x1721%(x1722>>(x1723*x1724)));

    if (t17 != 3LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint16_t x1753 = 20U;
	uint64_t x1754 = 13436170620LLU;
	static uint32_t x1755 = UINT32_MAX;
	volatile uint64_t t18 = 13831074LLU;

    t18 = (x1753%(x1754>>(x1755*x1756)));

    if (t18 != 20LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x1901 = INT32_MIN;
	int64_t x1902 = 1209502017996524LL;
	int32_t x1903 = INT32_MIN;
	uint32_t x1904 = 37488U;
	volatile int64_t t19 = 0LL;

    t19 = (x1901%(x1902>>(x1903*x1904)));

    if (t19 != -2147483648LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x1937 = 7812342;
	int32_t x1939 = -1;
	uint32_t x1940 = UINT32_MAX;
	int64_t t20 = 226146LL;

    t20 = (x1937%(x1938>>(x1939*x1940)));

    if (t20 != 7812342LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x1998 = UINT32_MAX;
	int8_t x1999 = INT8_MAX;
	uint8_t x2000 = 0U;
	uint32_t t21 = 50861009U;

    t21 = (x1997%(x1998>>(x1999*x2000)));

    if (t21 != 2147483648U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x2001 = UINT64_MAX;
	uint64_t x2002 = 3819185139282210487LLU;
	int16_t x2003 = -1;
	static int32_t x2004 = -50;
	volatile uint64_t t22 = 4241806761902LLU;

    t22 = (x2001%(x2002>>(x2003*x2004)));

    if (t22 != 703LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x2097 = UINT8_MAX;
	uint8_t x2098 = UINT8_MAX;
	int16_t x2099 = -1214;
	static int32_t t23 = 2;

    t23 = (x2097%(x2098>>(x2099*x2100)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x2185 = UINT16_MAX;
	uint64_t x2186 = UINT64_MAX;
	static int32_t x2187 = INT32_MAX;
	uint8_t x2188 = 0U;
	static uint64_t t24 = 6427499079392702LLU;

    t24 = (x2185%(x2186>>(x2187*x2188)));

    if (t24 != 65535LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x2209 = -4;
	volatile int8_t x2210 = INT8_MAX;
	volatile int16_t x2211 = -1;
	static volatile int32_t t25 = 1;

    t25 = (x2209%(x2210>>(x2211*x2212)));

    if (t25 != -4) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x2419 = -2;

    t26 = (x2417%(x2418>>(x2419*x2420)));

    if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int64_t x2545 = INT64_MAX;
	uint8_t x2546 = UINT8_MAX;
	int8_t x2547 = -1;
	int64_t t27 = 1LL;

    t27 = (x2545%(x2546>>(x2547*x2548)));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x2673 = INT16_MIN;
	volatile uint16_t x2674 = 14474U;
	static uint16_t x2675 = 1U;
	uint16_t x2676 = 7U;

    t28 = (x2673%(x2674>>(x2675*x2676)));

    if (t28 != -111) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x2741 = INT32_MIN;
	uint64_t x2742 = 244595LLU;
	volatile uint64_t x2743 = 17057114780659LLU;
	volatile int16_t x2744 = 0;
	uint64_t t29 = 998589648168LLU;

    t29 = (x2741%(x2742>>(x2743*x2744)));

    if (t29 != 106683LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x2873 = INT8_MAX;
	uint8_t x2874 = UINT8_MAX;
	int8_t x2875 = -1;
	int64_t x2876 = -1LL;
	static volatile int32_t t30 = -1615199;

    t30 = (x2873%(x2874>>(x2875*x2876)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x2973 = INT8_MAX;
	static int8_t x2975 = 0;
	static int32_t t31 = 1604;

    t31 = (x2973%(x2974>>(x2975*x2976)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x3201 = -1161193365815LL;
	static uint16_t x3202 = 29U;
	uint8_t x3203 = 0U;
	static int8_t x3204 = INT8_MAX;
	static volatile int64_t t32 = 18108236LL;

    t32 = (x3201%(x3202>>(x3203*x3204)));

    if (t32 != -10LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint8_t x3257 = UINT8_MAX;
	int32_t x3258 = 17009;
	int16_t x3260 = 0;

    t33 = (x3257%(x3258>>(x3259*x3260)));

    if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x3269 = -1LL;
	volatile uint8_t x3270 = UINT8_MAX;
	volatile int32_t x3271 = -1;
	volatile int64_t t34 = -33588832599LL;

    t34 = (x3269%(x3270>>(x3271*x3272)));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x3369 = -1LL;
	uint8_t x3370 = UINT8_MAX;
	int64_t x3371 = -1LL;
	volatile int32_t x3372 = -1;
	static volatile int64_t t35 = -6761790869409836LL;

    t35 = (x3369%(x3370>>(x3371*x3372)));

    if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x3385 = UINT8_MAX;
	uint64_t x3387 = 29420140840LLU;
	static int64_t x3388 = INT64_MIN;
	uint64_t t36 = 19410LLU;

    t36 = (x3385%(x3386>>(x3387*x3388)));

    if (t36 != 255LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x3397 = -3707464;
	int32_t x3399 = -1;
	static int16_t x3400 = -12;

    t37 = (x3397%(x3398>>(x3399*x3400)));

    if (t37 != -37455) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x3569 = INT16_MIN;
	static int64_t x3570 = INT64_MAX;
	uint64_t x3571 = 0LLU;
	int8_t x3572 = -1;
	int64_t t38 = 2883067006546470551LL;

    t38 = (x3569%(x3570>>(x3571*x3572)));

    if (t38 != -32768LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x3610 = 31U;
	static int64_t x3612 = -1LL;
	volatile int32_t t39 = -246;

    t39 = (x3609%(x3610>>(x3611*x3612)));

    if (t39 != -5) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x3613 = -1564;
	volatile uint16_t x3614 = UINT16_MAX;
	volatile int8_t x3615 = 0;
	volatile uint64_t x3616 = 26444LLU;
	int32_t t40 = -26196180;

    t40 = (x3613%(x3614>>(x3615*x3616)));

    if (t40 != -1564) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x3617 = 54U;
	static int8_t x3619 = 0;
	uint8_t x3620 = 5U;
	int32_t t41 = -2938004;

    t41 = (x3617%(x3618>>(x3619*x3620)));

    if (t41 != 54) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x3701 = UINT16_MAX;
	uint64_t x3702 = UINT64_MAX;
	int32_t x3703 = INT32_MIN;
	uint16_t x3704 = 0U;
	volatile uint64_t t42 = 1589104185429016038LLU;

    t42 = (x3701%(x3702>>(x3703*x3704)));

    if (t42 != 65535LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x3786 = 9260322783582746LLU;
	int64_t x3787 = INT64_MAX;
	uint8_t x3788 = 0U;
	static volatile uint64_t t43 = 24750222171775506LLU;

    t43 = (x3785%(x3786>>(x3787*x3788)));

    if (t43 != 3LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x3929 = 2834989720688857LLU;
	int16_t x3930 = INT16_MAX;
	uint64_t x3931 = 199196625LLU;
	int8_t x3932 = 0;
	static volatile uint64_t t44 = 34670LLU;

    t44 = (x3929%(x3930>>(x3931*x3932)));

    if (t44 != 6472LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x4005 = UINT8_MAX;
	static uint16_t x4006 = 22U;
	static volatile uint8_t x4007 = 0U;
	uint8_t x4008 = UINT8_MAX;

    t45 = (x4005%(x4006>>(x4007*x4008)));

    if (t45 != 13) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x4009 = -1056862904;
	uint64_t x4010 = 134516LLU;
	int8_t x4011 = -1;
	volatile uint32_t x4012 = 0U;
	uint64_t t46 = 941407113LLU;

    t46 = (x4009%(x4010>>(x4011*x4012)));

    if (t46 != 109256LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x4129 = 69174828;
	int64_t x4130 = 21614LL;
	static int32_t x4131 = -1;
	int64_t x4132 = -1LL;
	static volatile int64_t t47 = 309341631981LL;

    t47 = (x4129%(x4130>>(x4131*x4132)));

    if (t47 != 10028LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x4181 = 60LLU;
	static uint32_t x4182 = UINT32_MAX;
	int8_t x4183 = 2;
	uint32_t x4184 = 1U;
	volatile uint64_t t48 = 122984385203515395LLU;

    t48 = (x4181%(x4182>>(x4183*x4184)));

    if (t48 != 60LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x4375 = UINT64_MAX;
	int8_t x4376 = 0;

    t49 = (x4373%(x4374>>(x4375*x4376)));

    if (t49 != -1243) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x4601 = 966324297558706087LL;
	int16_t x4603 = 1;
	int16_t x4604 = 1;
	static int64_t t50 = 640300LL;

    t50 = (x4601%(x4602>>(x4603*x4604)));

    if (t50 != 3LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x4705 = 14865U;
	volatile uint64_t x4706 = UINT64_MAX;
	int8_t x4707 = -1;
	static uint64_t t51 = 1257778535063LLU;

    t51 = (x4705%(x4706>>(x4707*x4708)));

    if (t51 != 14865LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x4797 = 1676U;
	static int64_t x4800 = INT64_MIN;
	static int64_t t52 = 394665LL;

    t52 = (x4797%(x4798>>(x4799*x4800)));

    if (t52 != 1676LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x4841 = INT64_MAX;
	uint32_t x4842 = 11621393U;
	int32_t x4843 = 0;
	volatile uint64_t x4844 = 36452153294LLU;
	volatile int64_t t53 = -1422699258481LL;

    t53 = (x4841%(x4842>>(x4843*x4844)));

    if (t53 != 10420655LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x5153 = -2464;
	uint64_t x5154 = 423404143916791LLU;
	int32_t x5155 = INT32_MIN;
	volatile uint32_t x5156 = 951206960U;
	uint64_t t54 = 8758407488001LLU;

    t54 = (x5153%(x5154>>(x5155*x5156)));

    if (t54 != 295735686715655LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x5157 = -1;
	uint32_t x5158 = UINT32_MAX;
	volatile int64_t x5159 = -1LL;
	int16_t x5160 = -25;
	static uint32_t t55 = 481170935U;

    t55 = (x5157%(x5158>>(x5159*x5160)));

    if (t55 != 15U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x5165 = 2057897U;
	volatile int32_t x5166 = INT32_MAX;
	int32_t x5167 = -1;
	volatile uint32_t t56 = 8030617U;

    t56 = (x5165%(x5166>>(x5167*x5168)));

    if (t56 != 2057897U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x5189 = 3U;
	uint64_t x5190 = 11550690LLU;
	volatile int64_t x5191 = -1LL;
	int16_t x5192 = -1;
	volatile uint64_t t57 = 2217158532LLU;

    t57 = (x5189%(x5190>>(x5191*x5192)));

    if (t57 != 3LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x5329 = INT64_MIN;
	static uint16_t x5330 = 15U;
	int32_t x5331 = 2;
	uint64_t x5332 = 0LLU;

    t58 = (x5329%(x5330>>(x5331*x5332)));

    if (t58 != -8LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x5493 = INT64_MIN;
	uint32_t x5494 = 94698809U;
	int8_t x5495 = -9;
	int32_t x5496 = -1;
	volatile int64_t t59 = 198734LL;

    t59 = (x5493%(x5494>>(x5495*x5496)));

    if (t59 != -19446LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x5603 = UINT32_MAX;
	uint32_t x5604 = UINT32_MAX;
	static int32_t t60 = 202439766;

    t60 = (x5601%(x5602>>(x5603*x5604)));

    if (t60 != 7) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x5725 = 27770U;
	uint32_t x5726 = 143733938U;
	uint32_t t61 = 369321020U;

    t61 = (x5725%(x5726>>(x5727*x5728)));

    if (t61 != 2U) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x5729 = INT16_MAX;
	static uint64_t x5730 = 30852890003LLU;
	int64_t x5731 = 57844LL;
	static uint8_t x5732 = 0U;
	static uint64_t t62 = 11591323LLU;

    t62 = (x5729%(x5730>>(x5731*x5732)));

    if (t62 != 32767LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x5753 = 5757;
	static uint64_t x5754 = 270613798280LLU;
	int64_t x5755 = INT64_MIN;
	volatile uint16_t x5756 = 0U;
	static uint64_t t63 = 0LLU;

    t63 = (x5753%(x5754>>(x5755*x5756)));

    if (t63 != 5757LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x5829 = UINT32_MAX;
	uint32_t x5830 = 2078573U;
	int32_t x5831 = -1;
	int16_t x5832 = -1;
	volatile uint32_t t64 = 1255U;

    t64 = (x5829%(x5830>>(x5831*x5832)));

    if (t64 != 637543U) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x5913 = -3;
	int32_t x5914 = 188;
	static int64_t x5915 = -1LL;
	uint64_t x5916 = UINT64_MAX;
	volatile int32_t t65 = 440738638;

    t65 = (x5913%(x5914>>(x5915*x5916)));

    if (t65 != -3) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x5921 = 7U;
	static uint8_t x5923 = 0U;
	volatile int8_t x5924 = 0;
	uint32_t t66 = 1014086U;

    t66 = (x5921%(x5922>>(x5923*x5924)));

    if (t66 != 7U) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x5941 = 19U;
	static uint16_t x5942 = UINT16_MAX;
	int16_t x5943 = 0;
	volatile int32_t t67 = -2;

    t67 = (x5941%(x5942>>(x5943*x5944)));

    if (t67 != 19) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x6153 = 28376U;
	static uint64_t x6154 = 220LLU;
	static uint64_t x6155 = UINT64_MAX;
	uint8_t x6156 = 0U;

    t68 = (x6153%(x6154>>(x6155*x6156)));

    if (t68 != 216LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x6214 = 10721;
	static int32_t x6215 = INT32_MIN;
	uint32_t x6216 = 1932004U;
	volatile int32_t t69 = 230120378;

    t69 = (x6213%(x6214>>(x6215*x6216)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x6225 = 3U;
	uint64_t x6226 = 50714390LLU;

    t70 = (x6225%(x6226>>(x6227*x6228)));

    if (t70 != 3LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x6229 = -1LL;
	int8_t x6230 = INT8_MAX;
	int16_t x6231 = 3;
	static volatile int16_t x6232 = 1;
	volatile int64_t t71 = 7646LL;

    t71 = (x6229%(x6230>>(x6231*x6232)));

    if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x6281 = -38;
	uint64_t x6282 = 38541025122455LLU;
	int64_t x6284 = -1LL;

    t72 = (x6281%(x6282>>(x6283*x6284)));

    if (t72 != 7383449883374LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x6601 = UINT64_MAX;
	static int8_t x6603 = 0;
	uint16_t x6604 = 10449U;

    t73 = (x6601%(x6602>>(x6603*x6604)));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x6825 = INT32_MAX;
	int8_t x6827 = -1;
	int8_t x6828 = -38;
	uint64_t t74 = 4362213983851911LLU;

    t74 = (x6825%(x6826>>(x6827*x6828)));

    if (t74 != 31LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x6909 = INT8_MIN;
	uint32_t x6910 = 3543U;
	int16_t x6911 = -1;
	static volatile uint32_t t75 = 8284662U;

    t75 = (x6909%(x6910>>(x6911*x6912)));

    if (t75 != 1724U) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x7069 = INT64_MAX;
	uint64_t x7071 = UINT64_MAX;
	volatile int16_t x7072 = -1;
	volatile uint64_t t76 = 23LLU;

    t76 = (x7069%(x7070>>(x7071*x7072)));

    if (t76 != 40335578662814915LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x7193 = 0U;
	uint16_t x7194 = 3617U;
	volatile uint16_t x7196 = 0U;
	uint32_t t77 = 47U;

    t77 = (x7193%(x7194>>(x7195*x7196)));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x7197 = INT64_MIN;
	volatile uint16_t x7198 = UINT16_MAX;
	int8_t x7199 = 0;
	volatile int8_t x7200 = INT8_MIN;

    t78 = (x7197%(x7198>>(x7199*x7200)));

    if (t78 != -32768LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x7321 = 3;
	static uint64_t x7322 = 1176LLU;
	uint64_t x7323 = UINT64_MAX;
	int64_t x7324 = -1LL;
	volatile uint64_t t79 = 2082445171928991LLU;

    t79 = (x7321%(x7322>>(x7323*x7324)));

    if (t79 != 3LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x7337 = INT8_MAX;
	uint8_t x7338 = 27U;
	uint16_t x7339 = UINT16_MAX;
	uint16_t x7340 = 0U;
	volatile int32_t t80 = -130354510;

    t80 = (x7337%(x7338>>(x7339*x7340)));

    if (t80 != 19) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x7405 = 3U;
	uint64_t x7406 = UINT64_MAX;
	static int16_t x7407 = -1;
	int8_t x7408 = -1;
	uint64_t t81 = 146391272284886LLU;

    t81 = (x7405%(x7406>>(x7407*x7408)));

    if (t81 != 3LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x7421 = INT32_MIN;
	int16_t x7422 = 7496;
	uint8_t x7423 = 15U;
	uint8_t x7424 = 0U;

    t82 = (x7421%(x7422>>(x7423*x7424)));

    if (t82 != -7080) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x7481 = 350U;
	uint16_t x7482 = 31U;
	int32_t t83 = 49096424;

    t83 = (x7481%(x7482>>(x7483*x7484)));

    if (t83 != 5) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x7557 = -45;
	int32_t x7558 = INT32_MAX;
	int64_t x7559 = INT64_MIN;
	static uint64_t x7560 = 5918852LLU;
	int32_t t84 = -8809602;

    t84 = (x7557%(x7558>>(x7559*x7560)));

    if (t84 != -45) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x7585 = -23;
	uint64_t x7586 = UINT64_MAX;
	uint8_t x7587 = 0U;
	uint16_t x7588 = UINT16_MAX;
	volatile uint64_t t85 = 50070527174513554LLU;

    t85 = (x7585%(x7586>>(x7587*x7588)));

    if (t85 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x7705 = 0U;
	int32_t x7706 = 10088511;
	static volatile int32_t t86 = 150285;

    t86 = (x7705%(x7706>>(x7707*x7708)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x7771 = -1;

    t87 = (x7769%(x7770>>(x7771*x7772)));

    if (t87 != 32466) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint64_t x7937 = 2380035LLU;
	int16_t x7938 = 478;
	int64_t x7939 = -1LL;
	static int64_t x7940 = -1LL;
	volatile uint64_t t88 = 5540103373LLU;

    t88 = (x7937%(x7938>>(x7939*x7940)));

    if (t88 != 73LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x7963 = 7U;
	volatile uint8_t x7964 = 3U;
	int64_t t89 = -60408473728879LL;

    t89 = (x7961%(x7962>>(x7963*x7964)));

    if (t89 != -8LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x8001 = INT16_MIN;
	int16_t x8004 = 9778;
	static int32_t t90 = -6;

    t90 = (x8001%(x8002>>(x8003*x8004)));

    if (t90 != -50) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x8005 = 10;
	int8_t x8007 = -1;
	static volatile int8_t x8008 = -21;
	int32_t t91 = 23963;

    t91 = (x8005%(x8006>>(x8007*x8008)));

    if (t91 != 10) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x8049 = 42948143LL;
	int8_t x8051 = -10;
	int16_t x8052 = -1;
	int64_t t92 = 382867913LL;

    t92 = (x8049%(x8050>>(x8051*x8052)));

    if (t92 != 504LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x8149 = 801462;
	volatile uint32_t x8150 = UINT32_MAX;
	uint64_t x8151 = UINT64_MAX;
	static volatile int8_t x8152 = -26;
	uint32_t t93 = 312284247U;

    t93 = (x8149%(x8150>>(x8151*x8152)));

    if (t93 != 39U) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x8185 = INT16_MAX;
	int32_t x8187 = INT32_MIN;
	uint32_t x8188 = 7969000U;
	volatile uint64_t t94 = 303729355508LLU;

    t94 = (x8185%(x8186>>(x8187*x8188)));

    if (t94 != 32767LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x8210 = 56;
	volatile uint64_t x8211 = UINT64_MAX;
	volatile uint64_t x8212 = UINT64_MAX;
	static volatile int64_t t95 = 28LL;

    t95 = (x8209%(x8210>>(x8211*x8212)));

    if (t95 != 7LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x8254 = INT32_MAX;
	uint16_t x8255 = 2U;
	static uint8_t x8256 = 1U;
	volatile int32_t t96 = 85;

    t96 = (x8253%(x8254>>(x8255*x8256)));

    if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x8369 = -1LL;
	static int8_t x8371 = 20;
	uint8_t x8372 = 0U;
	int64_t t97 = -23636807LL;

    t97 = (x8369%(x8370>>(x8371*x8372)));

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x8553 = UINT8_MAX;
	int16_t x8555 = -1;
	int32_t x8556 = -1;
	static volatile int32_t t98 = 93558776;

    t98 = (x8553%(x8554>>(x8555*x8556)));

    if (t98 != 8) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x8630 = INT64_MAX;
	static int8_t x8631 = 0;
	int64_t x8632 = -3LL;
	static volatile int64_t t99 = 644LL;

    t99 = (x8629%(x8630>>(x8631*x8632)));

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x8710 = INT16_MAX;
	static int64_t x8712 = INT64_MAX;
	uint64_t t100 = 1031509271954LLU;

    t100 = (x8709%(x8710>>(x8711*x8712)));

    if (t100 != 10630LLU) { NG(); } else { ; }
	
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


    return 0;
}


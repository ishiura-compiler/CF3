
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

static volatile int64_t x60 = -1LL;
int16_t x435 = -1;
volatile uint16_t x481 = UINT16_MAX;
int16_t x484 = -23;
static int64_t t4 = 44592963717269LL;
uint64_t x618 = 512806751088LLU;
static volatile uint64_t x706 = 449140948820407817LLU;
uint16_t x753 = 336U;
int8_t x754 = INT8_MIN;
volatile uint16_t x755 = 4U;
uint32_t x756 = 1U;
int32_t x915 = -1;
int64_t x962 = -1LL;
uint8_t x964 = 0U;
int32_t x1038 = INT32_MAX;
int8_t x1182 = INT8_MIN;
uint64_t x1265 = 251544420177370LLU;
uint8_t x1266 = UINT8_MAX;
static uint16_t x1289 = 8580U;
int32_t x1291 = -1;
int32_t t20 = 265795523;
volatile uint32_t t22 = 437U;
int16_t x1645 = -173;
volatile int16_t x1886 = INT16_MIN;
volatile int32_t t26 = 360446674;
static uint32_t x1935 = UINT32_MAX;
static int8_t x1936 = -3;
int16_t x2093 = INT16_MIN;
uint64_t x2094 = 30624318604082936LLU;
uint8_t x2205 = 36U;
int16_t x2207 = -13;
int32_t t30 = 419557012;
uint8_t x2455 = 23U;
int8_t x2498 = -1;
volatile int32_t x2785 = 807758816;
int32_t x2787 = INT32_MIN;
volatile int32_t t35 = 947;
uint64_t x2930 = 25164061LLU;
uint16_t x3071 = UINT16_MAX;
uint16_t x3072 = UINT16_MAX;
volatile uint64_t t41 = 11025185289LLU;
int8_t x3239 = -13;
volatile uint64_t t42 = 614058324474204LLU;
static int8_t x3358 = INT8_MIN;
volatile int32_t t45 = 1899981;
int32_t x3686 = 3126;
int64_t x3687 = -1LL;
int64_t x3763 = 1LL;
volatile int64_t x3852 = INT64_MIN;
static volatile int32_t t49 = 628511917;
volatile uint64_t t51 = 8LLU;
static int8_t x4007 = INT8_MIN;
int8_t x4023 = 0;
volatile uint64_t t53 = 10269286757726LLU;
uint64_t x4098 = 37968549LLU;
uint64_t t57 = 65730144402LLU;
int64_t x4938 = -1LL;
uint64_t x4940 = UINT64_MAX;
uint32_t x5093 = 255U;
int32_t x5096 = -1;
static int16_t x5138 = 46;
volatile uint32_t x5139 = UINT32_MAX;
uint64_t x5379 = UINT64_MAX;
uint64_t x5380 = UINT64_MAX;
int8_t x5423 = INT8_MIN;
int8_t x5424 = INT8_MIN;
int32_t x5449 = INT32_MAX;
volatile int16_t x5451 = -1;
static uint8_t x5551 = 0U;
volatile int16_t x5554 = -1;
volatile int32_t t72 = 454;
static volatile int8_t x5592 = 0;
volatile int32_t x5602 = -2990226;
int16_t x5604 = -1;
static uint32_t t74 = 96811481U;
volatile uint64_t x5614 = 30481939977205464LLU;
static volatile int16_t x5616 = 1;
uint32_t x5619 = UINT32_MAX;
volatile uint64_t t80 = 26LLU;
int16_t x6172 = -1;
static uint8_t x6339 = 2U;
volatile uint64_t t84 = 543927191486922520LLU;
uint64_t x6393 = 46537929LLU;
int32_t x6395 = -1;


void f0(void) {
    	static int32_t x57 = INT32_MAX;
	volatile uint64_t x58 = 33LLU;
	int8_t x59 = -1;
	uint64_t t0 = 233819LLU;

    t0 = ((x57-x58)<<(x59^x60));

    if (t0 != 2147483614LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x285 = 2LL;
	static int64_t x286 = 0LL;
	uint8_t x287 = 0U;
	static uint8_t x288 = 35U;
	static int64_t t1 = 56261LL;

    t1 = ((x285-x286)<<(x287^x288));

    if (t1 != 68719476736LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x433 = -1;
	int32_t x434 = -1;
	int64_t x436 = -1LL;
	volatile int32_t t2 = 11;

    t2 = ((x433-x434)<<(x435^x436));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x482 = 2LLU;
	int16_t x483 = -1;
	uint64_t t3 = 1497029839LLU;

    t3 = ((x481-x482)<<(x483^x484));

    if (t3 != 274865324032LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x525 = 0LL;
	uint8_t x526 = 0U;
	static uint8_t x527 = 3U;
	uint8_t x528 = 0U;

    t4 = ((x525-x526)<<(x527^x528));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x561 = 98432146U;
	int8_t x562 = INT8_MAX;
	int8_t x563 = -1;
	static volatile int8_t x564 = -7;
	volatile uint32_t t5 = 82169U;

    t5 = ((x561-x562)<<(x563^x564));

    if (t5 != 2004681920U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x617 = -63;
	int8_t x619 = -1;
	uint64_t x620 = UINT64_MAX;
	volatile uint64_t t6 = 2457354775631LLU;

    t6 = ((x617-x618)<<(x619^x620));

    if (t6 != 18446743560902800465LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x705 = UINT8_MAX;
	int8_t x707 = 16;
	int8_t x708 = 49;
	volatile uint64_t t7 = 56028427LLU;

    t7 = ((x705-x706)<<(x707^x708));

    if (t7 != 10877483840851410944LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t t8 = 110;

    t8 = ((x753-x754)<<(x755^x756));

    if (t8 != 14848) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x781 = INT16_MIN;
	volatile int64_t x782 = INT64_MIN;
	volatile int16_t x783 = INT16_MIN;
	int16_t x784 = INT16_MIN;
	volatile int64_t t9 = 133260780662109125LL;

    t9 = ((x781-x782)<<(x783^x784));

    if (t9 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x913 = 69U;
	int16_t x914 = -12;
	int8_t x916 = -1;
	static int32_t t10 = -38731352;

    t10 = ((x913-x914)<<(x915^x916));

    if (t10 != 81) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x929 = 1956U;
	static uint8_t x930 = 85U;
	uint32_t x931 = UINT32_MAX;
	int8_t x932 = -1;
	volatile uint32_t t11 = 307589817U;

    t11 = ((x929-x930)<<(x931^x932));

    if (t11 != 1871U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x961 = 36;
	int64_t x963 = 6LL;
	int64_t t12 = -1101892822226921LL;

    t12 = ((x961-x962)<<(x963^x964));

    if (t12 != 2368LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x985 = INT8_MIN;
	volatile uint32_t x986 = 67398U;
	static volatile uint64_t x987 = UINT64_MAX;
	static uint64_t x988 = UINT64_MAX;
	static volatile uint32_t t13 = 5U;

    t13 = ((x985-x986)<<(x987^x988));

    if (t13 != 4294899770U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x1029 = UINT64_MAX;
	uint8_t x1030 = 2U;
	int8_t x1031 = -8;
	int32_t x1032 = -1;
	volatile uint64_t t14 = 114LLU;

    t14 = ((x1029-x1030)<<(x1031^x1032));

    if (t14 != 18446744073709551232LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x1037 = INT64_MAX;
	static volatile uint32_t x1039 = UINT32_MAX;
	int32_t x1040 = -1;
	int64_t t15 = -27296648LL;

    t15 = ((x1037-x1038)<<(x1039^x1040));

    if (t15 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint16_t x1181 = 1487U;
	int8_t x1183 = INT8_MAX;
	int8_t x1184 = INT8_MAX;
	volatile int32_t t16 = -25;

    t16 = ((x1181-x1182)<<(x1183^x1184));

    if (t16 != 1615) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x1267 = -1;
	static int8_t x1268 = -1;
	uint64_t t17 = 3LLU;

    t17 = ((x1265-x1266)<<(x1267^x1268));

    if (t17 != 251544420177115LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x1290 = 7LLU;
	volatile int64_t x1292 = -1LL;
	uint64_t t18 = 60LLU;

    t18 = ((x1289-x1290)<<(x1291^x1292));

    if (t18 != 8573LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x1401 = 100;
	int64_t x1402 = -1LL;
	volatile uint64_t x1403 = UINT64_MAX;
	volatile uint64_t x1404 = UINT64_MAX;
	volatile int64_t t19 = 14620LL;

    t19 = ((x1401-x1402)<<(x1403^x1404));

    if (t19 != 101LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x1465 = INT8_MAX;
	int8_t x1466 = INT8_MAX;
	uint64_t x1467 = UINT64_MAX;
	int8_t x1468 = -15;

    t20 = ((x1465-x1466)<<(x1467^x1468));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x1533 = UINT16_MAX;
	static volatile int16_t x1534 = INT16_MIN;
	int8_t x1535 = -1;
	int16_t x1536 = -1;
	static volatile int32_t t21 = 506078730;

    t21 = ((x1533-x1534)<<(x1535^x1536));

    if (t21 != 98303) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x1621 = UINT32_MAX;
	int8_t x1622 = INT8_MIN;
	int64_t x1623 = -1LL;
	int8_t x1624 = -6;

    t22 = ((x1621-x1622)<<(x1623^x1624));

    if (t22 != 4064U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x1646 = -5480;
	int8_t x1647 = INT8_MIN;
	volatile int8_t x1648 = INT8_MIN;
	static int32_t t23 = 60896744;

    t23 = ((x1645-x1646)<<(x1647^x1648));

    if (t23 != 5307) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x1809 = 10034LLU;
	int64_t x1810 = INT64_MIN;
	int32_t x1811 = -1;
	int8_t x1812 = -1;
	static uint64_t t24 = 1843914737871146879LLU;

    t24 = ((x1809-x1810)<<(x1811^x1812));

    if (t24 != 9223372036854785842LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x1841 = INT16_MAX;
	static volatile uint64_t x1842 = 252LLU;
	uint64_t x1843 = 5LLU;
	uint8_t x1844 = 2U;
	volatile uint64_t t25 = 21208631698LLU;

    t25 = ((x1841-x1842)<<(x1843^x1844));

    if (t25 != 4161920LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x1885 = INT8_MIN;
	int8_t x1887 = -1;
	volatile int8_t x1888 = -1;

    t26 = ((x1885-x1886)<<(x1887^x1888));

    if (t26 != 32640) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x1933 = -1;
	volatile int8_t x1934 = INT8_MIN;
	int32_t t27 = -179030;

    t27 = ((x1933-x1934)<<(x1935^x1936));

    if (t27 != 508) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x1993 = 18355623U;
	static int16_t x1994 = INT16_MIN;
	int8_t x1995 = -1;
	static uint32_t x1996 = UINT32_MAX;
	uint32_t t28 = 471U;

    t28 = ((x1993-x1994)<<(x1995^x1996));

    if (t28 != 18388391U) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x2095 = UINT64_MAX;
	int32_t x2096 = -1;
	uint64_t t29 = 3384328563118LLU;

    t29 = ((x2093-x2094)<<(x2095^x2096));

    if (t29 != 18416119755105435912LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x2206 = INT8_MIN;
	int8_t x2208 = -2;

    t30 = ((x2205-x2206)<<(x2207^x2208));

    if (t30 != 1343488) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x2237 = 31713388U;
	static int8_t x2238 = -1;
	int64_t x2239 = -1LL;
	int16_t x2240 = -1;
	volatile uint32_t t31 = 735805U;

    t31 = ((x2237-x2238)<<(x2239^x2240));

    if (t31 != 31713389U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x2453 = 28424080761930LLU;
	int32_t x2454 = INT32_MIN;
	int32_t x2456 = 2;
	uint64_t t32 = 8125251LLU;

    t32 = ((x2453-x2454)<<(x2455^x2456));

    if (t32 != 4273889196541739008LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x2497 = 115U;
	static uint64_t x2499 = UINT64_MAX;
	int32_t x2500 = -1;
	volatile int32_t t33 = -2;

    t33 = ((x2497-x2498)<<(x2499^x2500));

    if (t33 != 116) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x2689 = 177;
	uint64_t x2690 = UINT64_MAX;
	static volatile uint8_t x2691 = 15U;
	int8_t x2692 = 0;
	volatile uint64_t t34 = 212LLU;

    t34 = ((x2689-x2690)<<(x2691^x2692));

    if (t34 != 5832704LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x2786 = -4669;
	static int32_t x2788 = INT32_MIN;

    t35 = ((x2785-x2786)<<(x2787^x2788));

    if (t35 != 807763485) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x2893 = INT16_MIN;
	volatile uint64_t x2894 = UINT64_MAX;
	int32_t x2895 = -1;
	volatile int64_t x2896 = -1LL;
	volatile uint64_t t36 = 6045204926229774141LLU;

    t36 = ((x2893-x2894)<<(x2895^x2896));

    if (t36 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x2929 = 30691892727817LLU;
	int16_t x2931 = INT16_MIN;
	volatile int16_t x2932 = INT16_MIN;
	static uint64_t t37 = 2058224LLU;

    t37 = ((x2929-x2930)<<(x2931^x2932));

    if (t37 != 30691867563756LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x2957 = -1LL;
	int8_t x2958 = INT8_MIN;
	int32_t x2959 = INT32_MIN;
	int32_t x2960 = INT32_MIN;
	int64_t t38 = -7259439LL;

    t38 = ((x2957-x2958)<<(x2959^x2960));

    if (t38 != 127LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x3069 = -2134668999935LL;
	uint64_t x3070 = 1650476LLU;
	volatile uint64_t t39 = 2408239306015963LLU;

    t39 = ((x3069-x3070)<<(x3071^x3072));

    if (t39 != 18446741939038901205LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x3093 = 0U;
	volatile int32_t x3094 = -4;
	int8_t x3095 = -1;
	uint64_t x3096 = UINT64_MAX;
	int32_t t40 = 430;

    t40 = ((x3093-x3094)<<(x3095^x3096));

    if (t40 != 4) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x3109 = 0;
	static uint64_t x3110 = 184381073LLU;
	int64_t x3111 = INT64_MIN;
	int64_t x3112 = INT64_MIN;

    t41 = ((x3109-x3110)<<(x3111^x3112));

    if (t41 != 18446744073525170543LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x3237 = 8300772341323963LLU;
	uint16_t x3238 = 15U;
	static uint64_t x3240 = UINT64_MAX;

    t42 = ((x3237-x3238)<<(x3239^x3240));

    if (t42 != 15553219436353339392LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x3325 = 1U;
	int16_t x3326 = -1;
	static uint64_t x3327 = UINT64_MAX;
	int64_t x3328 = -1LL;
	static volatile int32_t t43 = 1268461;

    t43 = ((x3325-x3326)<<(x3327^x3328));

    if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x3357 = INT8_MIN;
	int16_t x3359 = -1;
	int64_t x3360 = -14LL;
	volatile int32_t t44 = -1552;

    t44 = ((x3357-x3358)<<(x3359^x3360));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x3641 = UINT16_MAX;
	int16_t x3642 = INT16_MIN;
	static uint8_t x3643 = 0U;
	int8_t x3644 = 7;

    t45 = ((x3641-x3642)<<(x3643^x3644));

    if (t45 != 12582784) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x3685 = 4179595984680438LLU;
	volatile int16_t x3688 = -1;
	static uint64_t t46 = 296805089014395LLU;

    t46 = ((x3685-x3686)<<(x3687^x3688));

    if (t46 != 4179595984677312LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x3725 = INT32_MIN;
	uint64_t x3726 = UINT64_MAX;
	int8_t x3727 = 5;
	uint8_t x3728 = 1U;
	static volatile uint64_t t47 = 494147222LLU;

    t47 = ((x3725-x3726)<<(x3727^x3728));

    if (t47 != 18446744039349813264LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x3761 = 217089U;
	int16_t x3762 = -7;
	int8_t x3764 = 11;
	volatile uint32_t t48 = 2123160673U;

    t48 = ((x3761-x3762)<<(x3763^x3764));

    if (t48 != 222306304U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x3849 = -13;
	volatile int32_t x3850 = -52;
	static int64_t x3851 = INT64_MIN;

    t49 = ((x3849-x3850)<<(x3851^x3852));

    if (t49 != 39) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x3953 = UINT32_MAX;
	uint64_t x3954 = UINT64_MAX;
	int8_t x3955 = 0;
	int8_t x3956 = 12;
	static uint64_t t50 = 267191147520574LLU;

    t50 = ((x3953-x3954)<<(x3955^x3956));

    if (t50 != 17592186044416LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x3957 = UINT64_MAX;
	int8_t x3958 = INT8_MAX;
	volatile int32_t x3959 = -1;
	uint64_t x3960 = UINT64_MAX;

    t51 = ((x3957-x3958)<<(x3959^x3960));

    if (t51 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x4005 = 4688U;
	volatile int8_t x4006 = INT8_MIN;
	int16_t x4008 = -119;
	static volatile int32_t t52 = 418;

    t52 = ((x4005-x4006)<<(x4007^x4008));

    if (t52 != 2465792) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x4021 = UINT16_MAX;
	uint64_t x4022 = 63872LLU;
	static int32_t x4024 = 61;

    t53 = ((x4021-x4022)<<(x4023^x4024));

    if (t53 != 16140901064495857664LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x4037 = 3U;
	volatile uint64_t x4038 = 175073771LLU;
	int8_t x4039 = INT8_MIN;
	int8_t x4040 = INT8_MIN;
	uint64_t t54 = 135376062288LLU;

    t54 = ((x4037-x4038)<<(x4039^x4040));

    if (t54 != 18446744073534477848LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x4097 = -1;
	volatile int8_t x4099 = -1;
	int8_t x4100 = -28;
	uint64_t t55 = 1LLU;

    t55 = ((x4097-x4098)<<(x4099^x4100));

    if (t55 != 18441648021193097216LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x4321 = INT16_MAX;
	volatile int16_t x4322 = -1;
	volatile int8_t x4323 = -1;
	static int32_t x4324 = -1;
	volatile int32_t t56 = -619946;

    t56 = ((x4321-x4322)<<(x4323^x4324));

    if (t56 != 32768) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x4353 = -1;
	uint64_t x4354 = 7603013LLU;
	int32_t x4355 = -1;
	int64_t x4356 = -4LL;

    t57 = ((x4353-x4354)<<(x4355^x4356));

    if (t57 != 18446744073648727504LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x4453 = 8U;
	volatile uint32_t x4454 = 42284636U;
	volatile int16_t x4455 = -1;
	static volatile int16_t x4456 = -1;
	volatile uint32_t t58 = 434365212U;

    t58 = ((x4453-x4454)<<(x4455^x4456));

    if (t58 != 4252682668U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x4501 = 196553287LLU;
	int16_t x4502 = INT16_MIN;
	volatile int64_t x4503 = -1LL;
	int32_t x4504 = -1;
	static uint64_t t59 = 756635418266LLU;

    t59 = ((x4501-x4502)<<(x4503^x4504));

    if (t59 != 196586055LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x4769 = 54036388;
	static int8_t x4770 = INT8_MIN;
	int8_t x4771 = -1;
	uint64_t x4772 = UINT64_MAX;
	volatile int32_t t60 = -70;

    t60 = ((x4769-x4770)<<(x4771^x4772));

    if (t60 != 54036516) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x4829 = INT16_MIN;
	uint32_t x4830 = 3U;
	volatile int16_t x4831 = INT16_MIN;
	static int16_t x4832 = INT16_MIN;
	volatile uint32_t t61 = 16U;

    t61 = ((x4829-x4830)<<(x4831^x4832));

    if (t61 != 4294934525U) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x4937 = -1;
	uint64_t x4939 = UINT64_MAX;
	static volatile int64_t t62 = -41LL;

    t62 = ((x4937-x4938)<<(x4939^x4940));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x5094 = 1U;
	int8_t x5095 = -1;
	volatile uint32_t t63 = 15892U;

    t63 = ((x5093-x5094)<<(x5095^x5096));

    if (t63 != 254U) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x5105 = INT64_MIN;
	static int64_t x5106 = INT64_MIN;
	int8_t x5107 = -1;
	int8_t x5108 = -15;
	int64_t t64 = 32731LL;

    t64 = ((x5105-x5106)<<(x5107^x5108));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x5137 = 91013006LL;
	volatile int8_t x5140 = -1;
	int64_t t65 = 39LL;

    t65 = ((x5137-x5138)<<(x5139^x5140));

    if (t65 != 91012960LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x5157 = 165U;
	uint16_t x5158 = 56U;
	int64_t x5159 = INT64_MIN;
	int64_t x5160 = INT64_MIN;
	uint32_t t66 = 1716U;

    t66 = ((x5157-x5158)<<(x5159^x5160));

    if (t66 != 109U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x5377 = INT16_MIN;
	static int16_t x5378 = INT16_MIN;
	volatile int32_t t67 = 14044;

    t67 = ((x5377-x5378)<<(x5379^x5380));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x5421 = 1688452683369443966LLU;
	static int64_t x5422 = -2897330LL;
	static uint64_t t68 = 37787LLU;

    t68 = ((x5421-x5422)<<(x5423^x5424));

    if (t68 != 1688452683372341296LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x5450 = UINT32_MAX;
	volatile int16_t x5452 = -4;
	static uint32_t t69 = 90U;

    t69 = ((x5449-x5450)<<(x5451^x5452));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x5493 = 38U;
	uint64_t x5494 = 1LLU;
	static int64_t x5495 = INT64_MIN;
	volatile int64_t x5496 = INT64_MIN;
	uint64_t t70 = 19LLU;

    t70 = ((x5493-x5494)<<(x5495^x5496));

    if (t70 != 37LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x5549 = INT16_MAX;
	uint16_t x5550 = 25246U;
	int64_t x5552 = 0LL;
	int32_t t71 = 2288863;

    t71 = ((x5549-x5550)<<(x5551^x5552));

    if (t71 != 7521) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x5553 = -1;
	int32_t x5555 = INT32_MIN;
	int32_t x5556 = INT32_MIN;

    t72 = ((x5553-x5554)<<(x5555^x5556));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x5589 = 465U;
	volatile int8_t x5590 = INT8_MIN;
	uint8_t x5591 = 3U;
	static uint32_t t73 = 19U;

    t73 = ((x5589-x5590)<<(x5591^x5592));

    if (t73 != 4744U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x5601 = UINT32_MAX;
	volatile int32_t x5603 = -1;

    t74 = ((x5601-x5602)<<(x5603^x5604));

    if (t74 != 2990225U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x5613 = 6512U;
	uint8_t x5615 = 1U;
	static volatile uint64_t t75 = 1LLU;

    t75 = ((x5613-x5614)<<(x5615^x5616));

    if (t75 != 18416262133732352664LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x5617 = 738004208U;
	static volatile int16_t x5618 = -370;
	int8_t x5620 = -2;
	volatile uint32_t t76 = 3100167U;

    t76 = ((x5617-x5618)<<(x5619^x5620));

    if (t76 != 1476009156U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x5625 = UINT64_MAX;
	volatile int16_t x5626 = INT16_MIN;
	int32_t x5627 = INT32_MIN;
	int32_t x5628 = INT32_MIN;
	volatile uint64_t t77 = 438LLU;

    t77 = ((x5625-x5626)<<(x5627^x5628));

    if (t77 != 32767LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x5893 = UINT8_MAX;
	static uint16_t x5894 = 255U;
	int64_t x5895 = INT64_MIN;
	int64_t x5896 = INT64_MIN;
	int32_t t78 = -928;

    t78 = ((x5893-x5894)<<(x5895^x5896));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint64_t x5929 = 395644969056237433LLU;
	int8_t x5930 = INT8_MAX;
	static int8_t x5931 = -1;
	static int8_t x5932 = -1;
	uint64_t t79 = 496867855057834LLU;

    t79 = ((x5929-x5930)<<(x5931^x5932));

    if (t79 != 395644969056237306LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x5973 = 28287825LLU;
	uint64_t x5974 = 4302996272282LLU;
	static int64_t x5975 = -1LL;
	uint64_t x5976 = UINT64_MAX;

    t80 = ((x5973-x5974)<<(x5975^x5976));

    if (t80 != 18446739770741567159LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x6169 = 37106923U;
	int32_t x6170 = INT32_MAX;
	int16_t x6171 = -1;
	volatile uint32_t t81 = 27896379U;

    t81 = ((x6169-x6170)<<(x6171^x6172));

    if (t81 != 2184590572U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x6253 = 1636026656U;
	int64_t x6254 = -955038LL;
	int8_t x6255 = 0;
	uint8_t x6256 = 6U;
	static volatile int64_t t82 = -1528245904LL;

    t82 = ((x6253-x6254)<<(x6255^x6256));

    if (t82 != 104766828416LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x6301 = 11195U;
	int8_t x6302 = INT8_MAX;
	volatile uint16_t x6303 = 0U;
	uint8_t x6304 = 6U;
	int32_t t83 = 7688;

    t83 = ((x6301-x6302)<<(x6303^x6304));

    if (t83 != 708352) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x6337 = UINT8_MAX;
	uint64_t x6338 = UINT64_MAX;
	volatile int64_t x6340 = 0LL;

    t84 = ((x6337-x6338)<<(x6339^x6340));

    if (t84 != 1024LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x6341 = 1LLU;
	int32_t x6342 = INT32_MIN;
	static volatile int32_t x6343 = -1;
	int16_t x6344 = -1;
	uint64_t t85 = 59LLU;

    t85 = ((x6341-x6342)<<(x6343^x6344));

    if (t85 != 2147483649LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x6353 = INT16_MAX;
	uint16_t x6354 = 1U;
	int16_t x6355 = INT16_MIN;
	static int16_t x6356 = INT16_MIN;
	volatile int32_t t86 = 0;

    t86 = ((x6353-x6354)<<(x6355^x6356));

    if (t86 != 32766) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x6357 = 119U;
	uint64_t x6358 = 79498LLU;
	volatile int16_t x6359 = -1;
	static int32_t x6360 = -1;
	volatile uint64_t t87 = 8395625221158LLU;

    t87 = ((x6357-x6358)<<(x6359^x6360));

    if (t87 != 18446744073709472237LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x6361 = 977612286LLU;
	uint16_t x6362 = UINT16_MAX;
	uint32_t x6363 = UINT32_MAX;
	static int16_t x6364 = -1;
	volatile uint64_t t88 = 35020984709571LLU;

    t88 = ((x6361-x6362)<<(x6363^x6364));

    if (t88 != 977546751LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x6394 = INT64_MIN;
	static uint64_t x6396 = UINT64_MAX;
	volatile uint64_t t89 = 384312082LLU;

    t89 = ((x6393-x6394)<<(x6395^x6396));

    if (t89 != 9223372036901313737LLU) { NG(); } else { ; }
	
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


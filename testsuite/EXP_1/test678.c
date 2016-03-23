
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

static uint8_t x32 = 6U;
uint16_t x52 = 7U;
int16_t x59 = 13203;
int8_t x60 = 0;
static uint16_t x259 = 7744U;
int16_t x261 = INT16_MIN;
uint64_t x263 = UINT64_MAX;
int16_t x274 = INT16_MIN;
uint64_t x276 = 1LLU;
int32_t x301 = 878813470;
volatile int8_t x304 = 1;
volatile uint16_t x324 = 28U;
static uint64_t x332 = 2LLU;
static int16_t x374 = INT16_MAX;
static int32_t t11 = -22;
volatile int32_t t13 = 23;
static volatile uint16_t x453 = 28700U;
volatile int64_t x454 = INT64_MIN;
int8_t x506 = INT8_MIN;
uint32_t x576 = 1U;
int32_t x647 = -26;
volatile int8_t x685 = -1;
int32_t x741 = INT32_MIN;
int64_t x742 = INT64_MIN;
int16_t x749 = INT16_MIN;
uint64_t x778 = 98333LLU;
int64_t x881 = -4268714055748747607LL;
int8_t x882 = -1;
volatile uint8_t x922 = UINT8_MAX;
int16_t x923 = INT16_MIN;
uint8_t x924 = 2U;
volatile int16_t x946 = INT16_MAX;
uint32_t x969 = UINT32_MAX;
static int8_t x984 = 1;
int8_t x992 = 7;
volatile int16_t x1041 = -1;
uint8_t x1168 = 12U;
int8_t x1178 = INT8_MIN;
int8_t x1205 = INT8_MAX;
static int16_t x1208 = 1;
static int32_t x1385 = INT32_MAX;
int32_t x1458 = INT32_MAX;
volatile int16_t x1460 = 5;
int8_t x1462 = INT8_MIN;
volatile uint8_t x1487 = 4U;
static uint64_t x1503 = UINT64_MAX;
volatile int32_t t46 = 2;
int32_t t47 = 1;
volatile int32_t t48 = -192191143;
static volatile int32_t x1817 = -1;
volatile int32_t t52 = -53413038;
volatile int64_t x1823 = INT64_MAX;
volatile int32_t t53 = 594;
uint16_t x1988 = 0U;
volatile int32_t x2002 = INT32_MIN;
int8_t x2004 = 0;
static int32_t t58 = -813;
volatile uint64_t x2016 = 4LLU;
volatile int32_t t59 = 811700;
int32_t x2025 = 439;
int8_t x2027 = INT8_MIN;
uint64_t x2078 = UINT64_MAX;
volatile int32_t t62 = -28;
uint16_t x2117 = 831U;
uint16_t x2118 = UINT16_MAX;
int32_t x2119 = INT32_MIN;
int32_t t63 = -349;
int8_t x2192 = 11;
uint16_t x2249 = UINT16_MAX;
int32_t x2250 = INT32_MAX;
volatile int32_t t67 = 425679;
uint64_t x2427 = UINT64_MAX;
static int32_t t71 = -173;
int16_t x2493 = INT16_MIN;
int32_t t73 = -2238981;
int64_t x2497 = INT64_MIN;
uint8_t x2498 = 1U;
int32_t x2583 = 58238687;
uint16_t x2628 = 6U;
uint8_t x2668 = 0U;
int16_t x2686 = -1;
int32_t t79 = 391292182;
volatile int32_t t80 = -14460;
volatile int64_t x2741 = -1LL;
volatile int32_t t81 = -2520;
int32_t x2785 = -1;
int8_t x2786 = INT8_MIN;
volatile int32_t t82 = -839395802;
uint16_t x2822 = UINT16_MAX;
volatile int8_t x2827 = INT8_MAX;
int8_t x2828 = 14;
volatile int32_t t84 = 80856732;
volatile int32_t t86 = 55010641;
int8_t x2904 = 0;
int32_t x2915 = 10152177;
uint8_t x2916 = 10U;
uint32_t x2966 = 892661547U;
int32_t t95 = -28653880;
int8_t x3137 = INT8_MIN;
uint64_t x3138 = 243LLU;
uint8_t x3140 = 1U;
int16_t x3153 = INT16_MAX;
static int16_t x3154 = 1525;
int32_t x3155 = 917419535;
static volatile int32_t t102 = -334785;
static int16_t x3465 = -1;
static int64_t x3466 = INT64_MIN;
static uint8_t x3468 = 7U;
static uint16_t x3574 = 2U;
int16_t x3591 = -1;
static volatile uint32_t x3625 = UINT32_MAX;
volatile int32_t x3627 = -2335;
int16_t x3711 = -1;
int16_t x3739 = INT16_MAX;
static uint16_t x3740 = 1U;
uint16_t x3807 = UINT16_MAX;
volatile uint8_t x3876 = 14U;
uint8_t x3888 = 12U;
static uint8_t x3910 = UINT8_MAX;
static volatile int32_t t115 = 205172586;
int64_t x4045 = 23265513263LL;
int32_t x4059 = INT32_MIN;
volatile int16_t x4066 = INT16_MAX;
uint32_t x4130 = 2U;
int32_t x4142 = INT32_MAX;
volatile int8_t x4183 = INT8_MAX;
uint8_t x4208 = 1U;
volatile uint8_t x4217 = 25U;
uint32_t x4220 = 7U;
uint32_t x4409 = UINT32_MAX;
volatile int32_t t134 = 105945;
int32_t t135 = 11384064;
int8_t x4518 = INT8_MAX;
volatile int8_t x4519 = INT8_MAX;
static volatile int8_t x4537 = INT8_MIN;
int16_t x4538 = INT16_MIN;
volatile int32_t t139 = 85181179;
int32_t x4571 = -15066;
uint16_t x4590 = 4659U;
volatile int32_t t142 = 0;
static volatile int32_t t143 = 28;
static uint32_t x4688 = 1U;
int64_t x4694 = INT64_MIN;
static int8_t x4695 = INT8_MAX;
int16_t x4778 = INT16_MIN;
int8_t x4780 = 4;
int8_t x4906 = INT8_MAX;
uint64_t x4907 = 181081640LLU;
static uint64_t x4958 = UINT64_MAX;
static uint8_t x4991 = 115U;
int32_t t156 = 6;
int32_t t157 = 26100;
int32_t x5037 = INT32_MAX;
uint32_t x5039 = UINT32_MAX;
volatile uint16_t x5040 = 12U;
int32_t x5053 = -3642922;
volatile int32_t t160 = 1448464;
volatile uint64_t x5122 = UINT64_MAX;
uint64_t x5146 = 1650942640LLU;
volatile int32_t t163 = -1661417;
static int64_t x5197 = INT64_MIN;
int16_t x5199 = INT16_MIN;
uint8_t x5200 = 9U;
volatile int32_t t164 = -7312;
int16_t x5225 = INT16_MIN;
int8_t x5228 = 1;
int64_t x5266 = -1LL;
int32_t t168 = -3095;
uint8_t x5332 = 6U;
int8_t x5400 = 1;
static volatile int32_t t170 = -1873;
static int16_t x5422 = 12596;
int8_t x5586 = INT8_MAX;
volatile uint16_t x5654 = UINT16_MAX;
int16_t x5655 = INT16_MAX;
int16_t x5656 = 13;
volatile int32_t t175 = 548;
int8_t x5657 = 11;
volatile int16_t x5710 = INT16_MIN;
int8_t x5712 = 0;
int32_t t180 = -262;
int32_t t181 = 121556;
static volatile int8_t x5860 = 1;
volatile int32_t t183 = 1008;
volatile int32_t t184 = 217140;
static volatile int64_t x5873 = INT64_MAX;
int8_t x5878 = -1;
volatile int64_t x5887 = INT64_MIN;
static volatile uint8_t x5891 = 111U;
static volatile int32_t x5892 = 1;
static uint16_t x5920 = 1U;
volatile int16_t x5977 = INT16_MIN;
static uint64_t x5978 = UINT64_MAX;
volatile int64_t x5979 = 83103960118978LL;
int16_t x5980 = 0;
int64_t x6069 = INT64_MIN;
int32_t t191 = -12;
int16_t x6111 = -844;
static volatile int32_t t192 = -26;
int32_t t193 = -8;
int8_t x6262 = INT8_MIN;
uint8_t x6264 = 25U;
volatile int8_t x6287 = -1;
int32_t t196 = -1;
uint32_t x6311 = UINT32_MAX;
volatile uint32_t x6327 = 285U;
uint64_t x6345 = UINT64_MAX;
uint16_t x6346 = UINT16_MAX;
volatile int32_t t199 = -4442;


void f0(void) {
    	int16_t x29 = INT16_MAX;
	int8_t x30 = -4;
	uint16_t x31 = 10461U;
	int32_t t0 = 6;

    t0 = (((x29/x30)!=x31)<<x32);

    if (t0 != 64) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint16_t x49 = 721U;
	volatile int32_t x50 = INT32_MIN;
	int64_t x51 = INT64_MIN;
	volatile int32_t t1 = -152;

    t1 = (((x49/x50)!=x51)<<x52);

    if (t1 != 128) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x57 = 1LLU;
	volatile int32_t x58 = -306;
	int32_t t2 = -115;

    t2 = (((x57/x58)!=x59)<<x60);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x61 = -2402;
	int16_t x62 = 46;
	uint32_t x63 = UINT32_MAX;
	int64_t x64 = 0LL;
	int32_t t3 = 61;

    t3 = (((x61/x62)!=x63)<<x64);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x153 = -14;
	int16_t x154 = 181;
	uint32_t x155 = UINT32_MAX;
	uint16_t x156 = 26U;
	int32_t t4 = 1;

    t4 = (((x153/x154)!=x155)<<x156);

    if (t4 != 67108864) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x257 = INT16_MAX;
	int8_t x258 = -1;
	uint16_t x260 = 0U;
	volatile int32_t t5 = 300379328;

    t5 = (((x257/x258)!=x259)<<x260);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x262 = 187738U;
	volatile int8_t x264 = 1;
	volatile int32_t t6 = -27;

    t6 = (((x261/x262)!=x263)<<x264);

    if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x273 = 19U;
	volatile int16_t x275 = INT16_MIN;
	int32_t t7 = -983497;

    t7 = (((x273/x274)!=x275)<<x276);

    if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x302 = INT32_MIN;
	uint8_t x303 = 2U;
	volatile int32_t t8 = -1094809;

    t8 = (((x301/x302)!=x303)<<x304);

    if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int64_t x321 = INT64_MIN;
	uint16_t x322 = 53U;
	int16_t x323 = INT16_MAX;
	int32_t t9 = -38;

    t9 = (((x321/x322)!=x323)<<x324);

    if (t9 != 268435456) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x329 = INT64_MAX;
	static int16_t x330 = 11;
	int32_t x331 = INT32_MAX;
	int32_t t10 = 13806771;

    t10 = (((x329/x330)!=x331)<<x332);

    if (t10 != 4) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x373 = INT16_MIN;
	int8_t x375 = 1;
	uint8_t x376 = 23U;

    t11 = (((x373/x374)!=x375)<<x376);

    if (t11 != 8388608) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x385 = -1;
	int16_t x386 = INT16_MIN;
	uint16_t x387 = UINT16_MAX;
	int8_t x388 = 28;
	volatile int32_t t12 = 105113;

    t12 = (((x385/x386)!=x387)<<x388);

    if (t12 != 268435456) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x397 = INT64_MAX;
	int32_t x398 = INT32_MIN;
	volatile int8_t x399 = -33;
	int8_t x400 = 2;

    t13 = (((x397/x398)!=x399)<<x400);

    if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x433 = INT16_MAX;
	int32_t x434 = INT32_MIN;
	volatile int16_t x435 = INT16_MIN;
	int16_t x436 = 1;
	int32_t t14 = 276896938;

    t14 = (((x433/x434)!=x435)<<x436);

    if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x455 = -1;
	volatile int16_t x456 = 0;
	volatile int32_t t15 = -130025;

    t15 = (((x453/x454)!=x455)<<x456);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x505 = -53183;
	uint8_t x507 = UINT8_MAX;
	uint64_t x508 = 5LLU;
	volatile int32_t t16 = 16858837;

    t16 = (((x505/x506)!=x507)<<x508);

    if (t16 != 32) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x573 = -1;
	int64_t x574 = -67936943460921065LL;
	uint64_t x575 = 530249560551110364LLU;
	volatile int32_t t17 = -4528;

    t17 = (((x573/x574)!=x575)<<x576);

    if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x645 = INT8_MAX;
	int8_t x646 = 12;
	int16_t x648 = 15;
	volatile int32_t t18 = 3392659;

    t18 = (((x645/x646)!=x647)<<x648);

    if (t18 != 32768) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x686 = INT8_MAX;
	volatile int8_t x687 = -1;
	static int64_t x688 = 22LL;
	volatile int32_t t19 = 249744;

    t19 = (((x685/x686)!=x687)<<x688);

    if (t19 != 4194304) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x701 = 42753;
	uint16_t x702 = 26412U;
	int16_t x703 = INT16_MIN;
	static uint64_t x704 = 1LLU;
	volatile int32_t t20 = 50948;

    t20 = (((x701/x702)!=x703)<<x704);

    if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x743 = 37U;
	int8_t x744 = 0;
	int32_t t21 = 51;

    t21 = (((x741/x742)!=x743)<<x744);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x750 = 465;
	static int64_t x751 = -1LL;
	static uint8_t x752 = 7U;
	int32_t t22 = -928;

    t22 = (((x749/x750)!=x751)<<x752);

    if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x777 = INT8_MAX;
	int64_t x779 = INT64_MAX;
	int8_t x780 = 2;
	int32_t t23 = -17;

    t23 = (((x777/x778)!=x779)<<x780);

    if (t23 != 4) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x785 = -1;
	int16_t x786 = -1;
	int32_t x787 = INT32_MAX;
	uint32_t x788 = 2U;
	static volatile int32_t t24 = 430327522;

    t24 = (((x785/x786)!=x787)<<x788);

    if (t24 != 4) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x883 = 16U;
	int8_t x884 = 12;
	volatile int32_t t25 = 10593;

    t25 = (((x881/x882)!=x883)<<x884);

    if (t25 != 4096) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x885 = INT32_MIN;
	volatile uint16_t x886 = UINT16_MAX;
	uint8_t x887 = 2U;
	int8_t x888 = 29;
	volatile int32_t t26 = 5;

    t26 = (((x885/x886)!=x887)<<x888);

    if (t26 != 536870912) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x921 = 4LLU;
	static volatile int32_t t27 = -200;

    t27 = (((x921/x922)!=x923)<<x924);

    if (t27 != 4) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x945 = INT32_MIN;
	uint64_t x947 = 179LLU;
	static volatile uint16_t x948 = 6U;
	volatile int32_t t28 = 945372;

    t28 = (((x945/x946)!=x947)<<x948);

    if (t28 != 64) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x970 = UINT32_MAX;
	volatile uint16_t x971 = 3U;
	uint32_t x972 = 3U;
	int32_t t29 = 236;

    t29 = (((x969/x970)!=x971)<<x972);

    if (t29 != 8) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x981 = INT8_MIN;
	static int32_t x982 = INT32_MIN;
	int16_t x983 = INT16_MIN;
	volatile int32_t t30 = -3914;

    t30 = (((x981/x982)!=x983)<<x984);

    if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x989 = 6745700772LLU;
	int32_t x990 = INT32_MAX;
	int16_t x991 = -1;
	volatile int32_t t31 = 176557062;

    t31 = (((x989/x990)!=x991)<<x992);

    if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x1042 = 493107819286LL;
	static uint64_t x1043 = 13116LLU;
	volatile int8_t x1044 = 11;
	static volatile int32_t t32 = -117159897;

    t32 = (((x1041/x1042)!=x1043)<<x1044);

    if (t32 != 2048) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x1077 = -1;
	volatile int16_t x1078 = INT16_MIN;
	static int8_t x1079 = INT8_MIN;
	volatile uint64_t x1080 = 18LLU;
	int32_t t33 = -130024;

    t33 = (((x1077/x1078)!=x1079)<<x1080);

    if (t33 != 262144) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x1165 = 8095829LLU;
	volatile int8_t x1166 = 1;
	int16_t x1167 = INT16_MAX;
	int32_t t34 = -4620;

    t34 = (((x1165/x1166)!=x1167)<<x1168);

    if (t34 != 4096) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x1177 = 1U;
	int64_t x1179 = -1LL;
	static int8_t x1180 = 1;
	int32_t t35 = -594829;

    t35 = (((x1177/x1178)!=x1179)<<x1180);

    if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x1206 = 716U;
	volatile int32_t x1207 = INT32_MIN;
	volatile int32_t t36 = 2;

    t36 = (((x1205/x1206)!=x1207)<<x1208);

    if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x1217 = 5;
	volatile int8_t x1218 = INT8_MIN;
	static int32_t x1219 = INT32_MIN;
	volatile uint16_t x1220 = 7U;
	static volatile int32_t t37 = -179202;

    t37 = (((x1217/x1218)!=x1219)<<x1220);

    if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x1241 = 7870829LLU;
	static int64_t x1242 = INT64_MIN;
	uint64_t x1243 = 2538060360LLU;
	volatile int8_t x1244 = 1;
	static volatile int32_t t38 = 12439840;

    t38 = (((x1241/x1242)!=x1243)<<x1244);

    if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x1245 = INT16_MAX;
	volatile int16_t x1246 = -1;
	static uint8_t x1247 = 6U;
	volatile uint16_t x1248 = 17U;
	static int32_t t39 = -2;

    t39 = (((x1245/x1246)!=x1247)<<x1248);

    if (t39 != 131072) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x1386 = INT16_MAX;
	static volatile uint16_t x1387 = 0U;
	uint8_t x1388 = 8U;
	volatile int32_t t40 = -254203449;

    t40 = (((x1385/x1386)!=x1387)<<x1388);

    if (t40 != 256) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x1429 = -3;
	static uint64_t x1430 = UINT64_MAX;
	int32_t x1431 = -192703;
	uint8_t x1432 = 21U;
	volatile int32_t t41 = 417614;

    t41 = (((x1429/x1430)!=x1431)<<x1432);

    if (t41 != 2097152) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x1457 = INT32_MAX;
	static uint32_t x1459 = 14935U;
	int32_t t42 = 1046470;

    t42 = (((x1457/x1458)!=x1459)<<x1460);

    if (t42 != 32) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x1461 = 42U;
	volatile int16_t x1463 = -1046;
	uint8_t x1464 = 25U;
	int32_t t43 = -4758514;

    t43 = (((x1461/x1462)!=x1463)<<x1464);

    if (t43 != 33554432) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x1485 = 1U;
	volatile int16_t x1486 = INT16_MIN;
	uint16_t x1488 = 0U;
	volatile int32_t t44 = -4;

    t44 = (((x1485/x1486)!=x1487)<<x1488);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x1501 = INT32_MIN;
	int16_t x1502 = -60;
	int8_t x1504 = 5;
	volatile int32_t t45 = -194044;

    t45 = (((x1501/x1502)!=x1503)<<x1504);

    if (t45 != 32) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x1521 = 2;
	static uint32_t x1522 = 143U;
	uint64_t x1523 = UINT64_MAX;
	static uint8_t x1524 = 2U;

    t46 = (((x1521/x1522)!=x1523)<<x1524);

    if (t46 != 4) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x1533 = INT16_MIN;
	int64_t x1534 = INT64_MIN;
	uint32_t x1535 = 1U;
	uint8_t x1536 = 6U;

    t47 = (((x1533/x1534)!=x1535)<<x1536);

    if (t47 != 64) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x1561 = INT16_MIN;
	static volatile uint64_t x1562 = 48366834638888LLU;
	int64_t x1563 = INT64_MIN;
	uint8_t x1564 = 4U;

    t48 = (((x1561/x1562)!=x1563)<<x1564);

    if (t48 != 16) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x1621 = UINT8_MAX;
	uint64_t x1622 = 126876386LLU;
	int32_t x1623 = INT32_MAX;
	static int8_t x1624 = 0;
	volatile int32_t t49 = 84934;

    t49 = (((x1621/x1622)!=x1623)<<x1624);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x1653 = INT8_MIN;
	int8_t x1654 = 21;
	int16_t x1655 = INT16_MIN;
	static uint8_t x1656 = 4U;
	static int32_t t50 = 0;

    t50 = (((x1653/x1654)!=x1655)<<x1656);

    if (t50 != 16) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x1769 = 16U;
	int32_t x1770 = INT32_MIN;
	int16_t x1771 = INT16_MIN;
	static int8_t x1772 = 1;
	volatile int32_t t51 = -71;

    t51 = (((x1769/x1770)!=x1771)<<x1772);

    if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x1818 = INT8_MIN;
	int32_t x1819 = 218;
	uint16_t x1820 = 23U;

    t52 = (((x1817/x1818)!=x1819)<<x1820);

    if (t52 != 8388608) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x1821 = 25U;
	int8_t x1822 = INT8_MIN;
	uint64_t x1824 = 26LLU;

    t53 = (((x1821/x1822)!=x1823)<<x1824);

    if (t53 != 67108864) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x1921 = INT8_MAX;
	int32_t x1922 = INT32_MIN;
	volatile int32_t x1923 = INT32_MAX;
	int8_t x1924 = 4;
	int32_t t54 = 4241717;

    t54 = (((x1921/x1922)!=x1923)<<x1924);

    if (t54 != 16) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x1949 = 2U;
	static int16_t x1950 = -2;
	int32_t x1951 = -5989;
	uint8_t x1952 = 20U;
	int32_t t55 = -16891;

    t55 = (((x1949/x1950)!=x1951)<<x1952);

    if (t55 != 1048576) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x1985 = INT8_MIN;
	int64_t x1986 = 264485903LL;
	uint16_t x1987 = UINT16_MAX;
	int32_t t56 = -508083794;

    t56 = (((x1985/x1986)!=x1987)<<x1988);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x1989 = 43484744297LLU;
	int16_t x1990 = INT16_MIN;
	volatile int16_t x1991 = 122;
	int32_t x1992 = 6;
	int32_t t57 = -606958366;

    t57 = (((x1989/x1990)!=x1991)<<x1992);

    if (t57 != 64) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x2001 = 2U;
	int8_t x2003 = INT8_MIN;

    t58 = (((x2001/x2002)!=x2003)<<x2004);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x2013 = 0;
	uint16_t x2014 = 479U;
	int8_t x2015 = -2;

    t59 = (((x2013/x2014)!=x2015)<<x2016);

    if (t59 != 16) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x2026 = INT64_MAX;
	int16_t x2028 = 1;
	volatile int32_t t60 = -20436923;

    t60 = (((x2025/x2026)!=x2027)<<x2028);

    if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x2077 = INT32_MAX;
	volatile int8_t x2079 = 7;
	uint16_t x2080 = 28U;
	volatile int32_t t61 = 71037199;

    t61 = (((x2077/x2078)!=x2079)<<x2080);

    if (t61 != 268435456) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x2081 = 108U;
	int32_t x2082 = INT32_MIN;
	static int16_t x2083 = -54;
	uint8_t x2084 = 2U;

    t62 = (((x2081/x2082)!=x2083)<<x2084);

    if (t62 != 4) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x2120 = 0;

    t63 = (((x2117/x2118)!=x2119)<<x2120);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x2125 = INT8_MIN;
	volatile uint16_t x2126 = 2207U;
	int32_t x2127 = INT32_MIN;
	uint16_t x2128 = 10U;
	volatile int32_t t64 = -7590595;

    t64 = (((x2125/x2126)!=x2127)<<x2128);

    if (t64 != 1024) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x2189 = 60258297U;
	int32_t x2190 = -510075971;
	static int16_t x2191 = INT16_MAX;
	volatile int32_t t65 = 1;

    t65 = (((x2189/x2190)!=x2191)<<x2192);

    if (t65 != 2048) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x2213 = INT8_MAX;
	int64_t x2214 = -55812227715320LL;
	int8_t x2215 = -1;
	volatile int16_t x2216 = 0;
	int32_t t66 = 85390350;

    t66 = (((x2213/x2214)!=x2215)<<x2216);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x2251 = -5;
	int16_t x2252 = 12;

    t67 = (((x2249/x2250)!=x2251)<<x2252);

    if (t67 != 4096) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x2373 = 27925LLU;
	static int8_t x2374 = INT8_MAX;
	volatile int64_t x2375 = INT64_MIN;
	int16_t x2376 = 1;
	volatile int32_t t68 = -1;

    t68 = (((x2373/x2374)!=x2375)<<x2376);

    if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x2425 = INT8_MAX;
	uint16_t x2426 = UINT16_MAX;
	volatile int8_t x2428 = 28;
	int32_t t69 = -32303820;

    t69 = (((x2425/x2426)!=x2427)<<x2428);

    if (t69 != 268435456) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x2449 = 925U;
	static int8_t x2450 = INT8_MIN;
	int64_t x2451 = INT64_MIN;
	uint16_t x2452 = 3U;
	static int32_t t70 = 108827;

    t70 = (((x2449/x2450)!=x2451)<<x2452);

    if (t70 != 8) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x2477 = 11;
	volatile int64_t x2478 = 426502936LL;
	static int8_t x2479 = -2;
	static uint32_t x2480 = 4U;

    t71 = (((x2477/x2478)!=x2479)<<x2480);

    if (t71 != 16) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x2481 = INT64_MIN;
	static int32_t x2482 = INT32_MIN;
	volatile uint16_t x2483 = UINT16_MAX;
	uint8_t x2484 = 4U;
	volatile int32_t t72 = 2731261;

    t72 = (((x2481/x2482)!=x2483)<<x2484);

    if (t72 != 16) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x2494 = -1LL;
	int16_t x2495 = INT16_MIN;
	uint16_t x2496 = 15U;

    t73 = (((x2493/x2494)!=x2495)<<x2496);

    if (t73 != 32768) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x2499 = 3U;
	int32_t x2500 = 1;
	int32_t t74 = 2080719;

    t74 = (((x2497/x2498)!=x2499)<<x2500);

    if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x2509 = INT32_MIN;
	int16_t x2510 = -1442;
	static volatile int32_t x2511 = INT32_MAX;
	int32_t x2512 = 21;
	volatile int32_t t75 = -2035;

    t75 = (((x2509/x2510)!=x2511)<<x2512);

    if (t75 != 2097152) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x2581 = INT8_MIN;
	static int8_t x2582 = INT8_MIN;
	volatile uint8_t x2584 = 0U;
	volatile int32_t t76 = 182497;

    t76 = (((x2581/x2582)!=x2583)<<x2584);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x2625 = UINT64_MAX;
	static int32_t x2626 = 47;
	int32_t x2627 = INT32_MIN;
	volatile int32_t t77 = -2098498;

    t77 = (((x2625/x2626)!=x2627)<<x2628);

    if (t77 != 64) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x2665 = 328U;
	uint8_t x2666 = 1U;
	uint32_t x2667 = 219185356U;
	int32_t t78 = 1;

    t78 = (((x2665/x2666)!=x2667)<<x2668);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x2685 = -1LL;
	int8_t x2687 = 1;
	volatile uint8_t x2688 = 11U;

    t79 = (((x2685/x2686)!=x2687)<<x2688);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x2725 = INT64_MIN;
	static int32_t x2726 = INT32_MIN;
	int64_t x2727 = -1LL;
	int16_t x2728 = 0;

    t80 = (((x2725/x2726)!=x2727)<<x2728);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x2742 = INT64_MAX;
	static int32_t x2743 = INT32_MIN;
	int8_t x2744 = 0;

    t81 = (((x2741/x2742)!=x2743)<<x2744);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x2787 = 36;
	uint32_t x2788 = 1U;

    t82 = (((x2785/x2786)!=x2787)<<x2788);

    if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x2821 = -1014228;
	int16_t x2823 = INT16_MAX;
	int64_t x2824 = 20LL;
	static int32_t t83 = -9;

    t83 = (((x2821/x2822)!=x2823)<<x2824);

    if (t83 != 1048576) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x2825 = INT16_MIN;
	static int8_t x2826 = -45;

    t84 = (((x2825/x2826)!=x2827)<<x2828);

    if (t84 != 16384) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint8_t x2857 = UINT8_MAX;
	uint16_t x2858 = UINT16_MAX;
	uint8_t x2859 = 8U;
	static uint8_t x2860 = 11U;
	int32_t t85 = 461607;

    t85 = (((x2857/x2858)!=x2859)<<x2860);

    if (t85 != 2048) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x2861 = UINT64_MAX;
	uint64_t x2862 = UINT64_MAX;
	volatile int16_t x2863 = INT16_MIN;
	uint16_t x2864 = 6U;

    t86 = (((x2861/x2862)!=x2863)<<x2864);

    if (t86 != 64) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x2865 = 58U;
	int8_t x2866 = INT8_MAX;
	static volatile int16_t x2867 = -35;
	uint8_t x2868 = 6U;
	int32_t t87 = 12253;

    t87 = (((x2865/x2866)!=x2867)<<x2868);

    if (t87 != 64) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x2901 = INT16_MIN;
	uint64_t x2902 = 4150776343714LLU;
	int16_t x2903 = INT16_MAX;
	int32_t t88 = 63342;

    t88 = (((x2901/x2902)!=x2903)<<x2904);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x2913 = 1;
	int32_t x2914 = INT32_MAX;
	volatile int32_t t89 = -371;

    t89 = (((x2913/x2914)!=x2915)<<x2916);

    if (t89 != 1024) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x2965 = 1097397LLU;
	uint8_t x2967 = UINT8_MAX;
	int16_t x2968 = 5;
	int32_t t90 = -285282;

    t90 = (((x2965/x2966)!=x2967)<<x2968);

    if (t90 != 32) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x2985 = INT32_MIN;
	uint64_t x2986 = 1792195456485LLU;
	uint32_t x2987 = 2734U;
	int32_t x2988 = 1;
	int32_t t91 = -82979286;

    t91 = (((x2985/x2986)!=x2987)<<x2988);

    if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x3033 = INT32_MIN;
	uint64_t x3034 = 2430LLU;
	int8_t x3035 = -1;
	uint8_t x3036 = 17U;
	static int32_t t92 = -5;

    t92 = (((x3033/x3034)!=x3035)<<x3036);

    if (t92 != 131072) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x3065 = 950U;
	uint64_t x3066 = UINT64_MAX;
	volatile int32_t x3067 = -29902;
	static uint8_t x3068 = 17U;
	int32_t t93 = 5375;

    t93 = (((x3065/x3066)!=x3067)<<x3068);

    if (t93 != 131072) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x3081 = 144406023830569LL;
	static int32_t x3082 = INT32_MAX;
	static uint16_t x3083 = UINT16_MAX;
	volatile uint8_t x3084 = 4U;
	int32_t t94 = -458;

    t94 = (((x3081/x3082)!=x3083)<<x3084);

    if (t94 != 16) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint16_t x3089 = 55U;
	int64_t x3090 = INT64_MIN;
	static int64_t x3091 = INT64_MIN;
	uint32_t x3092 = 2U;

    t95 = (((x3089/x3090)!=x3091)<<x3092);

    if (t95 != 4) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint64_t x3121 = 767124056506996LLU;
	int8_t x3122 = -1;
	volatile int8_t x3123 = INT8_MIN;
	int8_t x3124 = 18;
	int32_t t96 = -23237;

    t96 = (((x3121/x3122)!=x3123)<<x3124);

    if (t96 != 262144) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x3139 = -1;
	int32_t t97 = -104265;

    t97 = (((x3137/x3138)!=x3139)<<x3140);

    if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x3145 = 497;
	uint64_t x3146 = 88553292291681LLU;
	volatile int64_t x3147 = 516893954LL;
	uint8_t x3148 = 1U;
	volatile int32_t t98 = 255;

    t98 = (((x3145/x3146)!=x3147)<<x3148);

    if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x3156 = 7LLU;
	static volatile int32_t t99 = 30692788;

    t99 = (((x3153/x3154)!=x3155)<<x3156);

    if (t99 != 128) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x3237 = 7052;
	volatile uint8_t x3238 = 2U;
	int64_t x3239 = INT64_MIN;
	static volatile uint8_t x3240 = 1U;
	int32_t t100 = 22319;

    t100 = (((x3237/x3238)!=x3239)<<x3240);

    if (t100 != 2) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint64_t x3253 = 265905172457LLU;
	int32_t x3254 = -1;
	uint16_t x3255 = UINT16_MAX;
	uint16_t x3256 = 5U;
	volatile int32_t t101 = 111;

    t101 = (((x3253/x3254)!=x3255)<<x3256);

    if (t101 != 32) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x3285 = 720U;
	uint8_t x3286 = UINT8_MAX;
	volatile int32_t x3287 = -1;
	int16_t x3288 = 6;

    t102 = (((x3285/x3286)!=x3287)<<x3288);

    if (t102 != 64) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x3417 = 13U;
	uint32_t x3418 = 88961737U;
	int16_t x3419 = INT16_MIN;
	uint8_t x3420 = 3U;
	static int32_t t103 = 3619085;

    t103 = (((x3417/x3418)!=x3419)<<x3420);

    if (t103 != 8) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x3467 = 117074311932LL;
	static volatile int32_t t104 = 246030598;

    t104 = (((x3465/x3466)!=x3467)<<x3468);

    if (t104 != 128) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x3573 = 4475LL;
	int8_t x3575 = 2;
	int16_t x3576 = 1;
	volatile int32_t t105 = 123599;

    t105 = (((x3573/x3574)!=x3575)<<x3576);

    if (t105 != 2) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x3589 = -1;
	uint16_t x3590 = 799U;
	int64_t x3592 = 1LL;
	static int32_t t106 = 32200791;

    t106 = (((x3589/x3590)!=x3591)<<x3592);

    if (t106 != 2) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x3597 = INT32_MAX;
	static volatile uint16_t x3598 = UINT16_MAX;
	static int32_t x3599 = INT32_MIN;
	static uint8_t x3600 = 16U;
	int32_t t107 = -26126;

    t107 = (((x3597/x3598)!=x3599)<<x3600);

    if (t107 != 65536) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x3626 = UINT32_MAX;
	volatile uint8_t x3628 = 17U;
	static int32_t t108 = -1;

    t108 = (((x3625/x3626)!=x3627)<<x3628);

    if (t108 != 131072) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x3681 = INT16_MIN;
	uint16_t x3682 = 4701U;
	int64_t x3683 = -1LL;
	volatile uint16_t x3684 = 3U;
	int32_t t109 = -11669;

    t109 = (((x3681/x3682)!=x3683)<<x3684);

    if (t109 != 8) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x3709 = 18414221LL;
	uint16_t x3710 = UINT16_MAX;
	int8_t x3712 = 0;
	volatile int32_t t110 = -35;

    t110 = (((x3709/x3710)!=x3711)<<x3712);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x3737 = -29891220LL;
	static int32_t x3738 = INT32_MIN;
	int32_t t111 = -55;

    t111 = (((x3737/x3738)!=x3739)<<x3740);

    if (t111 != 2) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x3805 = -3574;
	int32_t x3806 = 6877;
	static uint8_t x3808 = 1U;
	int32_t t112 = 152;

    t112 = (((x3805/x3806)!=x3807)<<x3808);

    if (t112 != 2) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x3873 = 29517U;
	int16_t x3874 = INT16_MIN;
	int64_t x3875 = INT64_MIN;
	static volatile int32_t t113 = 15022116;

    t113 = (((x3873/x3874)!=x3875)<<x3876);

    if (t113 != 16384) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x3885 = 39U;
	uint8_t x3886 = UINT8_MAX;
	uint16_t x3887 = 9U;
	int32_t t114 = 9996;

    t114 = (((x3885/x3886)!=x3887)<<x3888);

    if (t114 != 4096) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x3909 = INT64_MIN;
	volatile int32_t x3911 = INT32_MAX;
	uint16_t x3912 = 30U;

    t115 = (((x3909/x3910)!=x3911)<<x3912);

    if (t115 != 1073741824) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x4046 = 2377;
	int16_t x4047 = INT16_MAX;
	uint16_t x4048 = 3U;
	int32_t t116 = -26253;

    t116 = (((x4045/x4046)!=x4047)<<x4048);

    if (t116 != 8) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x4057 = INT64_MIN;
	static int32_t x4058 = INT32_MAX;
	int8_t x4060 = 25;
	int32_t t117 = 614;

    t117 = (((x4057/x4058)!=x4059)<<x4060);

    if (t117 != 33554432) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x4065 = INT8_MIN;
	uint16_t x4067 = 4046U;
	uint8_t x4068 = 4U;
	volatile int32_t t118 = 39535;

    t118 = (((x4065/x4066)!=x4067)<<x4068);

    if (t118 != 16) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int8_t x4101 = -1;
	volatile int32_t x4102 = INT32_MIN;
	int16_t x4103 = 5;
	int8_t x4104 = 7;
	volatile int32_t t119 = -629256856;

    t119 = (((x4101/x4102)!=x4103)<<x4104);

    if (t119 != 128) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x4129 = INT32_MAX;
	volatile int8_t x4131 = -1;
	static volatile int8_t x4132 = 1;
	int32_t t120 = -22681611;

    t120 = (((x4129/x4130)!=x4131)<<x4132);

    if (t120 != 2) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x4141 = -1;
	uint16_t x4143 = UINT16_MAX;
	volatile uint8_t x4144 = 1U;
	volatile int32_t t121 = -6;

    t121 = (((x4141/x4142)!=x4143)<<x4144);

    if (t121 != 2) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x4145 = INT64_MIN;
	uint16_t x4146 = 9U;
	int16_t x4147 = INT16_MIN;
	volatile uint8_t x4148 = 3U;
	static int32_t t122 = 63;

    t122 = (((x4145/x4146)!=x4147)<<x4148);

    if (t122 != 8) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x4165 = UINT8_MAX;
	volatile int16_t x4166 = INT16_MIN;
	static int64_t x4167 = INT64_MIN;
	static uint8_t x4168 = 21U;
	int32_t t123 = 158;

    t123 = (((x4165/x4166)!=x4167)<<x4168);

    if (t123 != 2097152) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x4177 = INT32_MIN;
	uint64_t x4178 = UINT64_MAX;
	static int16_t x4179 = 1;
	int8_t x4180 = 4;
	volatile int32_t t124 = -11705;

    t124 = (((x4177/x4178)!=x4179)<<x4180);

    if (t124 != 16) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x4181 = INT8_MIN;
	volatile int8_t x4182 = INT8_MIN;
	uint16_t x4184 = 13U;
	volatile int32_t t125 = 10;

    t125 = (((x4181/x4182)!=x4183)<<x4184);

    if (t125 != 8192) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x4205 = 0;
	int32_t x4206 = INT32_MAX;
	int64_t x4207 = 382557270490635080LL;
	volatile int32_t t126 = -5788028;

    t126 = (((x4205/x4206)!=x4207)<<x4208);

    if (t126 != 2) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x4218 = 8033009282598LL;
	volatile int8_t x4219 = INT8_MAX;
	volatile int32_t t127 = 1681;

    t127 = (((x4217/x4218)!=x4219)<<x4220);

    if (t127 != 128) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x4221 = 132208U;
	static uint8_t x4222 = 10U;
	int16_t x4223 = -1;
	static volatile uint8_t x4224 = 6U;
	volatile int32_t t128 = 209;

    t128 = (((x4221/x4222)!=x4223)<<x4224);

    if (t128 != 64) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x4233 = 2LLU;
	int32_t x4234 = 172;
	int8_t x4235 = -2;
	uint16_t x4236 = 0U;
	volatile int32_t t129 = -1101736;

    t129 = (((x4233/x4234)!=x4235)<<x4236);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x4273 = INT32_MIN;
	int64_t x4274 = INT64_MIN;
	int16_t x4275 = INT16_MIN;
	volatile int8_t x4276 = 1;
	int32_t t130 = 6129;

    t130 = (((x4273/x4274)!=x4275)<<x4276);

    if (t130 != 2) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x4281 = -1;
	uint8_t x4282 = UINT8_MAX;
	uint8_t x4283 = UINT8_MAX;
	volatile uint8_t x4284 = 22U;
	int32_t t131 = 10;

    t131 = (((x4281/x4282)!=x4283)<<x4284);

    if (t131 != 4194304) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x4305 = INT8_MIN;
	static int8_t x4306 = -34;
	int32_t x4307 = INT32_MAX;
	static int8_t x4308 = 24;
	int32_t t132 = 81575808;

    t132 = (((x4305/x4306)!=x4307)<<x4308);

    if (t132 != 16777216) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x4410 = INT32_MAX;
	uint8_t x4411 = UINT8_MAX;
	int16_t x4412 = 6;
	volatile int32_t t133 = 2510;

    t133 = (((x4409/x4410)!=x4411)<<x4412);

    if (t133 != 64) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x4421 = 21377809673454LL;
	static volatile uint32_t x4422 = 38383U;
	uint64_t x4423 = 33273622485229LLU;
	volatile uint32_t x4424 = 3U;

    t134 = (((x4421/x4422)!=x4423)<<x4424);

    if (t134 != 8) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x4445 = 611397719U;
	static int16_t x4446 = INT16_MIN;
	static int32_t x4447 = INT32_MAX;
	volatile uint32_t x4448 = 3U;

    t135 = (((x4445/x4446)!=x4447)<<x4448);

    if (t135 != 8) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x4449 = 0;
	int32_t x4450 = INT32_MAX;
	volatile int16_t x4451 = INT16_MIN;
	uint16_t x4452 = 1U;
	static int32_t t136 = 32880;

    t136 = (((x4449/x4450)!=x4451)<<x4452);

    if (t136 != 2) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x4481 = UINT32_MAX;
	static int32_t x4482 = INT32_MAX;
	static int8_t x4483 = INT8_MAX;
	static volatile uint32_t x4484 = 2U;
	int32_t t137 = 68318098;

    t137 = (((x4481/x4482)!=x4483)<<x4484);

    if (t137 != 4) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x4517 = -220;
	int8_t x4520 = 8;
	volatile int32_t t138 = 2569018;

    t138 = (((x4517/x4518)!=x4519)<<x4520);

    if (t138 != 256) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x4539 = 13U;
	static uint8_t x4540 = 1U;

    t139 = (((x4537/x4538)!=x4539)<<x4540);

    if (t139 != 2) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x4569 = INT8_MAX;
	volatile int64_t x4570 = -5460977691220959LL;
	int32_t x4572 = 5;
	int32_t t140 = -420;

    t140 = (((x4569/x4570)!=x4571)<<x4572);

    if (t140 != 32) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x4577 = 1703;
	static int64_t x4578 = INT64_MAX;
	uint32_t x4579 = 2936392U;
	static int8_t x4580 = 3;
	static int32_t t141 = 98;

    t141 = (((x4577/x4578)!=x4579)<<x4580);

    if (t141 != 8) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x4589 = -1;
	int16_t x4591 = INT16_MAX;
	int8_t x4592 = 0;

    t142 = (((x4589/x4590)!=x4591)<<x4592);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x4609 = INT8_MAX;
	int64_t x4610 = INT64_MAX;
	volatile uint8_t x4611 = UINT8_MAX;
	uint16_t x4612 = 0U;

    t143 = (((x4609/x4610)!=x4611)<<x4612);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x4637 = -10;
	volatile int32_t x4638 = INT32_MIN;
	volatile uint16_t x4639 = 135U;
	uint16_t x4640 = 24U;
	volatile int32_t t144 = 4188601;

    t144 = (((x4637/x4638)!=x4639)<<x4640);

    if (t144 != 16777216) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x4669 = 102U;
	int32_t x4670 = INT32_MIN;
	uint32_t x4671 = 686946U;
	int8_t x4672 = 6;
	int32_t t145 = 0;

    t145 = (((x4669/x4670)!=x4671)<<x4672);

    if (t145 != 64) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x4685 = INT16_MAX;
	volatile int64_t x4686 = INT64_MIN;
	volatile uint32_t x4687 = 42810U;
	volatile int32_t t146 = -764104;

    t146 = (((x4685/x4686)!=x4687)<<x4688);

    if (t146 != 2) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x4693 = 40;
	volatile int8_t x4696 = 1;
	static int32_t t147 = -4200;

    t147 = (((x4693/x4694)!=x4695)<<x4696);

    if (t147 != 2) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int8_t x4749 = -1;
	static uint16_t x4750 = 37U;
	int16_t x4751 = INT16_MIN;
	volatile uint16_t x4752 = 3U;
	volatile int32_t t148 = 594;

    t148 = (((x4749/x4750)!=x4751)<<x4752);

    if (t148 != 8) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x4753 = INT8_MAX;
	int16_t x4754 = -2876;
	int32_t x4755 = INT32_MIN;
	int8_t x4756 = 1;
	volatile int32_t t149 = 1299;

    t149 = (((x4753/x4754)!=x4755)<<x4756);

    if (t149 != 2) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x4757 = UINT16_MAX;
	int16_t x4758 = INT16_MIN;
	volatile int64_t x4759 = 662910909543997240LL;
	static uint16_t x4760 = 5U;
	volatile int32_t t150 = 48;

    t150 = (((x4757/x4758)!=x4759)<<x4760);

    if (t150 != 32) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x4777 = 0U;
	uint32_t x4779 = UINT32_MAX;
	static volatile int32_t t151 = -465;

    t151 = (((x4777/x4778)!=x4779)<<x4780);

    if (t151 != 16) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x4785 = 443903778;
	int16_t x4786 = -1;
	int8_t x4787 = INT8_MAX;
	int8_t x4788 = 2;
	static int32_t t152 = 53;

    t152 = (((x4785/x4786)!=x4787)<<x4788);

    if (t152 != 4) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x4845 = INT32_MAX;
	int32_t x4846 = INT32_MAX;
	int8_t x4847 = INT8_MIN;
	volatile int16_t x4848 = 1;
	static int32_t t153 = -84673455;

    t153 = (((x4845/x4846)!=x4847)<<x4848);

    if (t153 != 2) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x4905 = 7851;
	int16_t x4908 = 2;
	static volatile int32_t t154 = 76;

    t154 = (((x4905/x4906)!=x4907)<<x4908);

    if (t154 != 4) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x4957 = INT8_MIN;
	int64_t x4959 = 199776391043008650LL;
	static int8_t x4960 = 9;
	static volatile int32_t t155 = 2490;

    t155 = (((x4957/x4958)!=x4959)<<x4960);

    if (t155 != 512) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x4989 = -1;
	volatile int16_t x4990 = INT16_MIN;
	static int16_t x4992 = 7;

    t156 = (((x4989/x4990)!=x4991)<<x4992);

    if (t156 != 128) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x5029 = 5009369LL;
	static uint32_t x5030 = 975169U;
	volatile int16_t x5031 = -6592;
	static int32_t x5032 = 6;

    t157 = (((x5029/x5030)!=x5031)<<x5032);

    if (t157 != 64) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x5033 = INT16_MIN;
	int8_t x5034 = INT8_MAX;
	static uint32_t x5035 = 3U;
	int8_t x5036 = 16;
	volatile int32_t t158 = -1416107;

    t158 = (((x5033/x5034)!=x5035)<<x5036);

    if (t158 != 65536) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x5038 = INT8_MIN;
	volatile int32_t t159 = -5336265;

    t159 = (((x5037/x5038)!=x5039)<<x5040);

    if (t159 != 4096) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x5054 = 73U;
	static uint8_t x5055 = 1U;
	static int16_t x5056 = 0;

    t160 = (((x5053/x5054)!=x5055)<<x5056);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x5077 = 840U;
	volatile int32_t x5078 = INT32_MAX;
	int8_t x5079 = INT8_MIN;
	uint16_t x5080 = 1U;
	volatile int32_t t161 = 22445;

    t161 = (((x5077/x5078)!=x5079)<<x5080);

    if (t161 != 2) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int16_t x5121 = -85;
	uint64_t x5123 = 13LLU;
	uint32_t x5124 = 3U;
	int32_t t162 = -26718;

    t162 = (((x5121/x5122)!=x5123)<<x5124);

    if (t162 != 8) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x5145 = 17329142382379439LLU;
	volatile int16_t x5147 = INT16_MIN;
	static volatile int8_t x5148 = 0;

    t163 = (((x5145/x5146)!=x5147)<<x5148);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x5198 = INT64_MIN;

    t164 = (((x5197/x5198)!=x5199)<<x5200);

    if (t164 != 512) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x5226 = INT32_MIN;
	int64_t x5227 = INT64_MAX;
	static int32_t t165 = -143617;

    t165 = (((x5225/x5226)!=x5227)<<x5228);

    if (t165 != 2) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x5245 = UINT64_MAX;
	volatile uint64_t x5246 = 11504LLU;
	volatile uint64_t x5247 = 47LLU;
	uint64_t x5248 = 2LLU;
	volatile int32_t t166 = -106196210;

    t166 = (((x5245/x5246)!=x5247)<<x5248);

    if (t166 != 4) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x5265 = UINT64_MAX;
	uint64_t x5267 = 3251985889325052LLU;
	int8_t x5268 = 1;
	int32_t t167 = 33;

    t167 = (((x5265/x5266)!=x5267)<<x5268);

    if (t167 != 2) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x5273 = -1;
	int64_t x5274 = 28LL;
	int16_t x5275 = INT16_MIN;
	uint8_t x5276 = 1U;

    t168 = (((x5273/x5274)!=x5275)<<x5276);

    if (t168 != 2) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x5329 = -111;
	int64_t x5330 = -1LL;
	uint16_t x5331 = UINT16_MAX;
	volatile int32_t t169 = 60018;

    t169 = (((x5329/x5330)!=x5331)<<x5332);

    if (t169 != 64) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x5397 = 223521U;
	uint16_t x5398 = 1982U;
	static int16_t x5399 = INT16_MAX;

    t170 = (((x5397/x5398)!=x5399)<<x5400);

    if (t170 != 2) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x5401 = UINT64_MAX;
	int8_t x5402 = INT8_MIN;
	uint64_t x5403 = 692619971085554845LLU;
	uint8_t x5404 = 8U;
	volatile int32_t t171 = 3;

    t171 = (((x5401/x5402)!=x5403)<<x5404);

    if (t171 != 256) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x5421 = 6845;
	static int64_t x5423 = -200LL;
	uint32_t x5424 = 10U;
	volatile int32_t t172 = 13;

    t172 = (((x5421/x5422)!=x5423)<<x5424);

    if (t172 != 1024) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x5473 = UINT32_MAX;
	static volatile uint32_t x5474 = UINT32_MAX;
	uint64_t x5475 = 25460928615LLU;
	uint8_t x5476 = 24U;
	int32_t t173 = 0;

    t173 = (((x5473/x5474)!=x5475)<<x5476);

    if (t173 != 16777216) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x5585 = 251279LLU;
	int32_t x5587 = -1;
	volatile int16_t x5588 = 4;
	int32_t t174 = -1477;

    t174 = (((x5585/x5586)!=x5587)<<x5588);

    if (t174 != 16) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x5653 = INT8_MIN;

    t175 = (((x5653/x5654)!=x5655)<<x5656);

    if (t175 != 8192) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x5658 = UINT8_MAX;
	int8_t x5659 = INT8_MIN;
	uint32_t x5660 = 2U;
	static int32_t t176 = 13382;

    t176 = (((x5657/x5658)!=x5659)<<x5660);

    if (t176 != 4) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x5705 = UINT32_MAX;
	int32_t x5706 = INT32_MIN;
	uint16_t x5707 = UINT16_MAX;
	static volatile int8_t x5708 = 5;
	volatile int32_t t177 = -1778857;

    t177 = (((x5705/x5706)!=x5707)<<x5708);

    if (t177 != 32) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x5709 = -21;
	int64_t x5711 = INT64_MAX;
	volatile int32_t t178 = 205067172;

    t178 = (((x5709/x5710)!=x5711)<<x5712);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x5717 = -43;
	volatile int8_t x5718 = -6;
	int8_t x5719 = -1;
	uint16_t x5720 = 6U;
	volatile int32_t t179 = -130020;

    t179 = (((x5717/x5718)!=x5719)<<x5720);

    if (t179 != 64) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x5757 = 3U;
	uint64_t x5758 = 521LLU;
	uint64_t x5759 = UINT64_MAX;
	int16_t x5760 = 1;

    t180 = (((x5757/x5758)!=x5759)<<x5760);

    if (t180 != 2) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x5785 = -11637196133363861LL;
	static int8_t x5786 = -1;
	static uint8_t x5787 = 0U;
	static uint8_t x5788 = 14U;

    t181 = (((x5785/x5786)!=x5787)<<x5788);

    if (t181 != 16384) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x5825 = INT16_MIN;
	int64_t x5826 = INT64_MIN;
	static volatile uint64_t x5827 = UINT64_MAX;
	static int64_t x5828 = 0LL;
	volatile int32_t t182 = 21321386;

    t182 = (((x5825/x5826)!=x5827)<<x5828);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x5857 = -729;
	int32_t x5858 = -2291;
	volatile uint16_t x5859 = UINT16_MAX;

    t183 = (((x5857/x5858)!=x5859)<<x5860);

    if (t183 != 2) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x5861 = INT8_MIN;
	int16_t x5862 = -1;
	volatile int16_t x5863 = INT16_MIN;
	uint16_t x5864 = 0U;

    t184 = (((x5861/x5862)!=x5863)<<x5864);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x5874 = INT32_MIN;
	uint32_t x5875 = 55097900U;
	static int8_t x5876 = 1;
	int32_t t185 = 10168767;

    t185 = (((x5873/x5874)!=x5875)<<x5876);

    if (t185 != 2) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x5877 = 4303U;
	static uint64_t x5879 = 6256765586073654021LLU;
	uint32_t x5880 = 1U;
	int32_t t186 = 1;

    t186 = (((x5877/x5878)!=x5879)<<x5880);

    if (t186 != 2) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x5885 = -150;
	volatile int64_t x5886 = -1LL;
	uint32_t x5888 = 6U;
	static int32_t t187 = 903;

    t187 = (((x5885/x5886)!=x5887)<<x5888);

    if (t187 != 64) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x5889 = 5991LLU;
	static int16_t x5890 = -1;
	volatile int32_t t188 = 226;

    t188 = (((x5889/x5890)!=x5891)<<x5892);

    if (t188 != 2) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x5917 = INT16_MIN;
	static int64_t x5918 = INT64_MIN;
	static volatile uint8_t x5919 = 110U;
	int32_t t189 = -959542;

    t189 = (((x5917/x5918)!=x5919)<<x5920);

    if (t189 != 2) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t t190 = 29585;

    t190 = (((x5977/x5978)!=x5979)<<x5980);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x6070 = UINT64_MAX;
	int64_t x6071 = INT64_MAX;
	static volatile int64_t x6072 = 0LL;

    t191 = (((x6069/x6070)!=x6071)<<x6072);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x6109 = INT64_MAX;
	volatile int64_t x6110 = INT64_MIN;
	uint16_t x6112 = 2U;

    t192 = (((x6109/x6110)!=x6111)<<x6112);

    if (t192 != 4) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x6125 = 14U;
	static volatile int16_t x6126 = -1;
	int64_t x6127 = -1LL;
	volatile uint16_t x6128 = 1U;

    t193 = (((x6125/x6126)!=x6127)<<x6128);

    if (t193 != 2) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x6221 = UINT8_MAX;
	int8_t x6222 = INT8_MIN;
	uint64_t x6223 = UINT64_MAX;
	uint32_t x6224 = 0U;
	static int32_t t194 = 199502291;

    t194 = (((x6221/x6222)!=x6223)<<x6224);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x6261 = -29929082;
	static int8_t x6263 = -10;
	volatile int32_t t195 = 7186;

    t195 = (((x6261/x6262)!=x6263)<<x6264);

    if (t195 != 33554432) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x6285 = 4247U;
	volatile int16_t x6286 = -456;
	static int16_t x6288 = 1;

    t196 = (((x6285/x6286)!=x6287)<<x6288);

    if (t196 != 2) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x6309 = INT32_MAX;
	static int64_t x6310 = INT64_MIN;
	int16_t x6312 = 20;
	volatile int32_t t197 = -5709;

    t197 = (((x6309/x6310)!=x6311)<<x6312);

    if (t197 != 1048576) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x6325 = -1;
	int8_t x6326 = -1;
	int8_t x6328 = 20;
	volatile int32_t t198 = -102181423;

    t198 = (((x6325/x6326)!=x6327)<<x6328);

    if (t198 != 1048576) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x6347 = -1;
	static int8_t x6348 = 1;

    t199 = (((x6345/x6346)!=x6347)<<x6348);

    if (t199 != 2) { NG(); } else { ; }
	
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


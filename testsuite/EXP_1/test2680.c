
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

static int32_t x5 = -1;
int16_t x8 = 12;
volatile int32_t t0 = -942;
static volatile int8_t x13 = -1;
int16_t x27 = -1;
int16_t x63 = -1;
int32_t x145 = INT32_MIN;
int64_t x146 = -9942583591LL;
volatile int32_t t4 = -219062;
int32_t t6 = -8516226;
static int32_t x314 = INT32_MAX;
uint64_t x315 = UINT64_MAX;
volatile int16_t x329 = -1501;
static int32_t x331 = 3691;
int32_t t9 = -14129;
uint16_t x405 = 79U;
uint16_t x438 = 1U;
int8_t x451 = INT8_MIN;
static int16_t x452 = 1;
int32_t x545 = INT32_MIN;
int64_t x549 = INT64_MIN;
static uint16_t x551 = 220U;
static int32_t x563 = INT32_MAX;
int64_t x571 = INT64_MIN;
int64_t x577 = -165678091LL;
uint64_t x579 = 614387962744948883LLU;
uint32_t x632 = 1U;
int32_t x637 = INT32_MAX;
int8_t x713 = INT8_MIN;
volatile int32_t x719 = -819777;
int8_t x769 = 1;
static volatile int32_t x770 = 3;
int32_t x771 = INT32_MIN;
uint8_t x890 = UINT8_MAX;
volatile int16_t x891 = INT16_MIN;
uint8_t x892 = 0U;
volatile int8_t x961 = INT8_MIN;
uint16_t x964 = 1U;
int32_t t30 = -12278;
uint8_t x968 = 6U;
volatile uint32_t x990 = UINT32_MAX;
int16_t x1032 = 8;
uint16_t x1109 = 2U;
volatile int32_t t39 = 630955;
uint64_t x1245 = 7415391658479531LLU;
volatile int32_t t43 = 28;
static uint32_t x1281 = 576U;
static uint8_t x1284 = 3U;
int32_t t44 = -83;
uint64_t x1331 = 278083421220490LLU;
uint8_t x1496 = 15U;
int32_t t51 = -4;
static int64_t x1626 = 1106703LL;
uint32_t x1628 = 9U;
int16_t x1661 = INT16_MIN;
int64_t x1671 = 615174659335341527LL;
volatile int32_t x1763 = INT32_MIN;
volatile int32_t t59 = -77;
uint16_t x1916 = 3U;
volatile int32_t t62 = -24;
int64_t x1955 = INT64_MIN;
uint8_t x1956 = 0U;
int32_t t67 = 38928;
uint64_t x2045 = UINT64_MAX;
static volatile int32_t t68 = 56;
uint16_t x2130 = 12U;
int32_t x2132 = 1;
volatile int32_t t69 = -200;
volatile int64_t x2138 = 6785167895LL;
int8_t x2174 = 20;
volatile int16_t x2176 = 0;
uint64_t x2235 = 49620870LLU;
static int64_t x2242 = INT64_MIN;
volatile int64_t x2243 = INT64_MIN;
int64_t x2353 = -44933LL;
int64_t x2355 = INT64_MAX;
static uint32_t x2360 = 6U;
int32_t t77 = -47072092;
static int16_t x2374 = INT16_MIN;
uint64_t x2375 = 3042694045LLU;
int32_t t78 = -1;
volatile uint32_t x2423 = 3U;
static int8_t x2506 = INT8_MAX;
int32_t x2507 = INT32_MAX;
int16_t x2642 = -8;
uint32_t x2667 = UINT32_MAX;
uint64_t x2680 = 2LLU;
static volatile int32_t t87 = 16298568;
static int8_t x2778 = INT8_MIN;
int64_t x2789 = INT64_MIN;
uint16_t x2792 = 31U;
static volatile int32_t x2818 = 16701;
int32_t x2829 = INT32_MIN;
uint8_t x2832 = 0U;
static int32_t t92 = 151190;
static int8_t x2835 = INT8_MIN;
volatile uint8_t x2868 = 4U;
int8_t x2890 = INT8_MIN;
int8_t x2941 = 0;
int32_t t97 = 18;
uint16_t x2961 = 62U;
volatile int64_t x3027 = 48011883159LL;
static volatile uint8_t x3085 = 78U;
int8_t x3088 = 3;
volatile int32_t t103 = 0;
int32_t t105 = 32389;
int8_t x3256 = 1;
static int8_t x3304 = 1;
uint8_t x3345 = 0U;
int16_t x3411 = INT16_MIN;
int8_t x3412 = 4;
int32_t t109 = -143750;
uint16_t x3561 = UINT16_MAX;
uint32_t x3564 = 1U;
int32_t t114 = -9;
uint8_t x3602 = 4U;
static uint32_t x3605 = 814770575U;
int8_t x3606 = 0;
int32_t t117 = 49843;
volatile uint8_t x3637 = 2U;
uint32_t x3638 = 2608755U;
static int8_t x3665 = INT8_MAX;
int8_t x3671 = INT8_MIN;
uint8_t x3672 = 1U;
int32_t x3677 = INT32_MAX;
volatile int32_t t121 = 31576;
volatile int32_t x3804 = 2;
static int64_t x3849 = 5866011080LL;
int16_t x3861 = -1;
volatile int8_t x3862 = 3;
volatile int32_t t128 = 9352323;
volatile int32_t t129 = 4924469;
static int64_t x3902 = -1LL;
int32_t t130 = -7048;
static uint8_t x3916 = 4U;
volatile int8_t x3992 = 20;
volatile int32_t t135 = 1017012;
volatile int16_t x4074 = -1;
int32_t x4076 = 3;
uint8_t x4144 = 1U;
static volatile int16_t x4157 = INT16_MAX;
volatile uint32_t x4158 = 28046U;
int32_t x4203 = 0;
static uint8_t x4228 = 27U;
int8_t x4321 = -4;
int8_t x4324 = 26;
int64_t x4375 = INT64_MAX;
uint64_t x4433 = UINT64_MAX;
int32_t t150 = 426;
int16_t x4478 = -4;
int16_t x4480 = 0;
static volatile int32_t t151 = -6349832;
uint8_t x4654 = 61U;
int8_t x4666 = INT8_MAX;
static int8_t x4692 = 23;
volatile int32_t t156 = -117283873;
uint64_t x4693 = 25581609860944045LLU;
int8_t x4784 = 1;
int16_t x4895 = 308;
static int32_t x4908 = 1;
static volatile uint16_t x4973 = 9004U;
static volatile int32_t x4974 = 401;
int32_t t162 = 231;
int16_t x4982 = INT16_MIN;
int8_t x4983 = 0;
int16_t x5017 = -1220;
uint32_t x5018 = 16U;
int64_t x5151 = 217516729328937991LL;
int64_t x5152 = 6LL;
int64_t x5162 = INT64_MAX;
int32_t t170 = -1;
static volatile uint8_t x5211 = UINT8_MAX;
static uint16_t x5221 = 680U;
int8_t x5222 = 0;
volatile int32_t t172 = -429934342;
volatile int16_t x5252 = 0;
int64_t x5257 = -548516876207928LL;
int16_t x5258 = INT16_MIN;
int32_t x5293 = INT32_MIN;
static int16_t x5301 = INT16_MIN;
int8_t x5316 = 0;
int64_t x5362 = INT64_MAX;
volatile int32_t t181 = -400990506;
volatile uint8_t x5392 = 2U;
int32_t x5398 = INT32_MIN;
int32_t x5399 = 10166;
uint8_t x5400 = 6U;
int8_t x5518 = INT8_MIN;
uint32_t x5550 = 6665282U;
volatile int32_t t186 = 23169423;
static int32_t x5590 = INT32_MIN;
uint32_t x5603 = UINT32_MAX;
int16_t x5604 = 0;
int32_t x5637 = 0;
volatile int32_t x5639 = -1;
static int16_t x5724 = 1;
volatile int32_t t191 = 65450;
volatile int8_t x5738 = INT8_MAX;
int64_t x5747 = INT64_MIN;
static int64_t x5794 = 1LL;
int32_t x5822 = -1;
int32_t t195 = 0;
uint64_t x5857 = 193076792177997LLU;
uint64_t x6023 = 2367LLU;


void f0(void) {
    	int8_t x6 = -1;
	int64_t x7 = INT64_MIN;

    t0 = (((x5^x6)<=x7)<<x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x14 = INT8_MAX;
	int8_t x15 = INT8_MIN;
	volatile uint16_t x16 = 6U;
	volatile int32_t t1 = 3;

    t1 = (((x13^x14)<=x15)<<x16);

    if (t1 != 64) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x25 = UINT16_MAX;
	int16_t x26 = INT16_MIN;
	static uint8_t x28 = 0U;
	volatile int32_t t2 = 3;

    t2 = (((x25^x26)<=x27)<<x28);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x61 = INT16_MIN;
	volatile int32_t x62 = INT32_MIN;
	int16_t x64 = 1;
	static volatile int32_t t3 = -1356622;

    t3 = (((x61^x62)<=x63)<<x64);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x147 = INT32_MIN;
	uint8_t x148 = 3U;

    t4 = (((x145^x146)<=x147)<<x148);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x161 = UINT8_MAX;
	int64_t x162 = 661654145497LL;
	int32_t x163 = -1;
	uint16_t x164 = 0U;
	static volatile int32_t t5 = -34;

    t5 = (((x161^x162)<=x163)<<x164);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x305 = UINT16_MAX;
	int16_t x306 = -2;
	int64_t x307 = INT64_MIN;
	int64_t x308 = 0LL;

    t6 = (((x305^x306)<=x307)<<x308);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x313 = UINT8_MAX;
	uint8_t x316 = 0U;
	int32_t t7 = -2052231;

    t7 = (((x313^x314)<=x315)<<x316);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x330 = INT64_MIN;
	int8_t x332 = 1;
	static volatile int32_t t8 = -940;

    t8 = (((x329^x330)<=x331)<<x332);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x333 = INT64_MIN;
	int16_t x334 = INT16_MAX;
	uint8_t x335 = 15U;
	uint16_t x336 = 3U;

    t9 = (((x333^x334)<=x335)<<x336);

    if (t9 != 8) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x406 = 0U;
	volatile uint64_t x407 = 117689LLU;
	static uint16_t x408 = 11U;
	static volatile int32_t t10 = 1;

    t10 = (((x405^x406)<=x407)<<x408);

    if (t10 != 2048) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x437 = 24110U;
	int16_t x439 = 1;
	uint8_t x440 = 0U;
	volatile int32_t t11 = 1;

    t11 = (((x437^x438)<=x439)<<x440);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x449 = INT32_MIN;
	int8_t x450 = 0;
	int32_t t12 = -12;

    t12 = (((x449^x450)<=x451)<<x452);

    if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x509 = -3872;
	static uint32_t x510 = 12U;
	volatile int64_t x511 = -1354184LL;
	uint8_t x512 = 0U;
	volatile int32_t t13 = 246097679;

    t13 = (((x509^x510)<=x511)<<x512);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x529 = INT16_MIN;
	uint8_t x530 = 60U;
	int32_t x531 = -386931568;
	int8_t x532 = 0;
	static volatile int32_t t14 = -360;

    t14 = (((x529^x530)<=x531)<<x532);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x546 = -11;
	int64_t x547 = INT64_MIN;
	static volatile uint16_t x548 = 6U;
	static volatile int32_t t15 = -5;

    t15 = (((x545^x546)<=x547)<<x548);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x550 = UINT8_MAX;
	uint8_t x552 = 11U;
	static volatile int32_t t16 = 1596241;

    t16 = (((x549^x550)<=x551)<<x552);

    if (t16 != 2048) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x561 = INT16_MAX;
	int16_t x562 = INT16_MIN;
	volatile uint8_t x564 = 19U;
	volatile int32_t t17 = -334907671;

    t17 = (((x561^x562)<=x563)<<x564);

    if (t17 != 524288) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x569 = 40;
	static uint16_t x570 = UINT16_MAX;
	uint8_t x572 = 0U;
	int32_t t18 = -62666;

    t18 = (((x569^x570)<=x571)<<x572);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x578 = INT32_MIN;
	uint32_t x580 = 2U;
	volatile int32_t t19 = 1578;

    t19 = (((x577^x578)<=x579)<<x580);

    if (t19 != 4) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x629 = INT16_MIN;
	volatile int16_t x630 = -809;
	int64_t x631 = INT64_MIN;
	int32_t t20 = -10699842;

    t20 = (((x629^x630)<=x631)<<x632);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x638 = INT16_MIN;
	volatile uint32_t x639 = UINT32_MAX;
	volatile int16_t x640 = 0;
	int32_t t21 = -26;

    t21 = (((x637^x638)<=x639)<<x640);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x714 = INT16_MIN;
	uint64_t x715 = 4395719209LLU;
	int8_t x716 = 0;
	volatile int32_t t22 = 5;

    t22 = (((x713^x714)<=x715)<<x716);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x717 = INT64_MIN;
	int32_t x718 = INT32_MIN;
	static uint16_t x720 = 7U;
	volatile int32_t t23 = 0;

    t23 = (((x717^x718)<=x719)<<x720);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x772 = 1;
	volatile int32_t t24 = -62110;

    t24 = (((x769^x770)<=x771)<<x772);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x801 = 22672053719432LL;
	int8_t x802 = INT8_MAX;
	static int8_t x803 = INT8_MAX;
	uint8_t x804 = 20U;
	static volatile int32_t t25 = -5473537;

    t25 = (((x801^x802)<=x803)<<x804);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x841 = 24260U;
	int32_t x842 = INT32_MIN;
	static uint8_t x843 = 0U;
	int8_t x844 = 3;
	int32_t t26 = -45958;

    t26 = (((x841^x842)<=x843)<<x844);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x889 = -1;
	volatile int32_t t27 = -4598918;

    t27 = (((x889^x890)<=x891)<<x892);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x925 = 6;
	int32_t x926 = -1;
	uint64_t x927 = 4895764643LLU;
	uint8_t x928 = 15U;
	static volatile int32_t t28 = -208;

    t28 = (((x925^x926)<=x927)<<x928);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x941 = 0U;
	int16_t x942 = -1;
	uint8_t x943 = UINT8_MAX;
	uint8_t x944 = 30U;
	static volatile int32_t t29 = -291450392;

    t29 = (((x941^x942)<=x943)<<x944);

    if (t29 != 1073741824) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x962 = -3;
	int64_t x963 = 16685LL;

    t30 = (((x961^x962)<=x963)<<x964);

    if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x965 = 24U;
	int32_t x966 = INT32_MAX;
	static int16_t x967 = INT16_MIN;
	volatile int32_t t31 = -2;

    t31 = (((x965^x966)<=x967)<<x968);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x977 = -1LL;
	uint64_t x978 = 25LLU;
	int64_t x979 = INT64_MAX;
	uint16_t x980 = 31U;
	int32_t t32 = -3;

    t32 = (((x977^x978)<=x979)<<x980);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x989 = 1LLU;
	volatile int64_t x991 = -1LL;
	uint8_t x992 = 1U;
	static volatile int32_t t33 = 462634062;

    t33 = (((x989^x990)<=x991)<<x992);

    if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x1029 = INT16_MIN;
	static uint8_t x1030 = UINT8_MAX;
	int32_t x1031 = -6;
	volatile int32_t t34 = -10580495;

    t34 = (((x1029^x1030)<=x1031)<<x1032);

    if (t34 != 256) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x1110 = -1;
	uint16_t x1111 = 14831U;
	static int8_t x1112 = 2;
	static int32_t t35 = -58;

    t35 = (((x1109^x1110)<=x1111)<<x1112);

    if (t35 != 4) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x1133 = UINT32_MAX;
	static int32_t x1134 = -3372;
	int32_t x1135 = INT32_MIN;
	uint16_t x1136 = 1U;
	int32_t t36 = 1;

    t36 = (((x1133^x1134)<=x1135)<<x1136);

    if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x1137 = -4;
	volatile int16_t x1138 = INT16_MIN;
	int8_t x1139 = 6;
	uint8_t x1140 = 0U;
	static int32_t t37 = -6458;

    t37 = (((x1137^x1138)<=x1139)<<x1140);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x1157 = INT8_MIN;
	int64_t x1158 = INT64_MIN;
	static int16_t x1159 = -1;
	static uint32_t x1160 = 7U;
	volatile int32_t t38 = 716898;

    t38 = (((x1157^x1158)<=x1159)<<x1160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x1169 = INT64_MIN;
	int64_t x1170 = -17689LL;
	volatile int64_t x1171 = -1LL;
	int8_t x1172 = 4;

    t39 = (((x1169^x1170)<=x1171)<<x1172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x1209 = 3401577;
	int16_t x1210 = -1;
	static int64_t x1211 = 1503562532925039LL;
	uint32_t x1212 = 15U;
	int32_t t40 = 12940960;

    t40 = (((x1209^x1210)<=x1211)<<x1212);

    if (t40 != 32768) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x1221 = UINT16_MAX;
	volatile int16_t x1222 = -1;
	int64_t x1223 = -53LL;
	static uint16_t x1224 = 1U;
	int32_t t41 = 1;

    t41 = (((x1221^x1222)<=x1223)<<x1224);

    if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x1229 = INT8_MIN;
	int16_t x1230 = -1;
	uint16_t x1231 = UINT16_MAX;
	uint16_t x1232 = 16U;
	volatile int32_t t42 = -7791;

    t42 = (((x1229^x1230)<=x1231)<<x1232);

    if (t42 != 65536) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x1246 = 233525257;
	uint16_t x1247 = 37U;
	uint8_t x1248 = 25U;

    t43 = (((x1245^x1246)<=x1247)<<x1248);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x1282 = -166420486;
	volatile uint16_t x1283 = 0U;

    t44 = (((x1281^x1282)<=x1283)<<x1284);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x1285 = INT64_MAX;
	static volatile int8_t x1286 = -1;
	uint64_t x1287 = 62827LLU;
	uint8_t x1288 = 1U;
	volatile int32_t t45 = -84;

    t45 = (((x1285^x1286)<=x1287)<<x1288);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x1329 = INT16_MIN;
	static uint8_t x1330 = 1U;
	int16_t x1332 = 2;
	volatile int32_t t46 = -9106964;

    t46 = (((x1329^x1330)<=x1331)<<x1332);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x1377 = 3910U;
	uint8_t x1378 = 25U;
	int64_t x1379 = -1LL;
	int16_t x1380 = 3;
	volatile int32_t t47 = -181970;

    t47 = (((x1377^x1378)<=x1379)<<x1380);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x1385 = 43U;
	static int16_t x1386 = -173;
	int32_t x1387 = INT32_MIN;
	uint8_t x1388 = 0U;
	volatile int32_t t48 = 1992560;

    t48 = (((x1385^x1386)<=x1387)<<x1388);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x1413 = 176596LLU;
	int16_t x1414 = INT16_MIN;
	static volatile int16_t x1415 = INT16_MIN;
	int16_t x1416 = 12;
	int32_t t49 = 437;

    t49 = (((x1413^x1414)<=x1415)<<x1416);

    if (t49 != 4096) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x1457 = UINT64_MAX;
	volatile uint8_t x1458 = 0U;
	volatile uint64_t x1459 = UINT64_MAX;
	static uint8_t x1460 = 12U;
	volatile int32_t t50 = -143189;

    t50 = (((x1457^x1458)<=x1459)<<x1460);

    if (t50 != 4096) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x1493 = 12U;
	uint64_t x1494 = 6LLU;
	static int32_t x1495 = INT32_MIN;

    t51 = (((x1493^x1494)<=x1495)<<x1496);

    if (t51 != 32768) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x1525 = 2592U;
	static uint16_t x1526 = UINT16_MAX;
	static volatile int16_t x1527 = -89;
	uint64_t x1528 = 4LLU;
	volatile int32_t t52 = 0;

    t52 = (((x1525^x1526)<=x1527)<<x1528);

    if (t52 != 16) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int64_t x1625 = INT64_MAX;
	static int64_t x1627 = -115820074371645LL;
	volatile int32_t t53 = -80;

    t53 = (((x1625^x1626)<=x1627)<<x1628);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x1629 = INT32_MIN;
	uint32_t x1630 = 142081U;
	int8_t x1631 = -12;
	uint8_t x1632 = 22U;
	int32_t t54 = 357;

    t54 = (((x1629^x1630)<=x1631)<<x1632);

    if (t54 != 4194304) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x1662 = INT8_MIN;
	int32_t x1663 = 1143236;
	uint8_t x1664 = 7U;
	volatile int32_t t55 = -16699921;

    t55 = (((x1661^x1662)<=x1663)<<x1664);

    if (t55 != 128) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x1669 = 0;
	volatile int8_t x1670 = 5;
	uint8_t x1672 = 1U;
	int32_t t56 = 104;

    t56 = (((x1669^x1670)<=x1671)<<x1672);

    if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x1745 = 52503;
	uint8_t x1746 = 30U;
	uint64_t x1747 = UINT64_MAX;
	int32_t x1748 = 2;
	int32_t t57 = 2031876;

    t57 = (((x1745^x1746)<=x1747)<<x1748);

    if (t57 != 4) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x1761 = INT16_MIN;
	static volatile uint32_t x1762 = UINT32_MAX;
	static volatile uint8_t x1764 = 5U;
	volatile int32_t t58 = 10516237;

    t58 = (((x1761^x1762)<=x1763)<<x1764);

    if (t58 != 32) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x1841 = -2815;
	static int32_t x1842 = INT32_MAX;
	static int16_t x1843 = INT16_MAX;
	uint32_t x1844 = 14U;

    t59 = (((x1841^x1842)<=x1843)<<x1844);

    if (t59 != 16384) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x1869 = INT8_MIN;
	int16_t x1870 = -1;
	uint32_t x1871 = 13940168U;
	uint8_t x1872 = 12U;
	volatile int32_t t60 = 0;

    t60 = (((x1869^x1870)<=x1871)<<x1872);

    if (t60 != 4096) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x1913 = INT64_MIN;
	int16_t x1914 = -1;
	volatile int16_t x1915 = -1;
	static volatile int32_t t61 = -130933416;

    t61 = (((x1913^x1914)<=x1915)<<x1916);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x1933 = INT16_MIN;
	int8_t x1934 = INT8_MIN;
	int32_t x1935 = 93;
	int8_t x1936 = 0;

    t62 = (((x1933^x1934)<=x1935)<<x1936);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x1953 = INT32_MIN;
	static int32_t x1954 = INT32_MIN;
	volatile int32_t t63 = 8;

    t63 = (((x1953^x1954)<=x1955)<<x1956);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x1961 = 11370U;
	int64_t x1962 = 0LL;
	uint64_t x1963 = 430651188752039418LLU;
	static volatile uint8_t x1964 = 1U;
	volatile int32_t t64 = 129;

    t64 = (((x1961^x1962)<=x1963)<<x1964);

    if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x1981 = INT8_MAX;
	uint8_t x1982 = UINT8_MAX;
	uint64_t x1983 = 79179718752LLU;
	uint8_t x1984 = 3U;
	volatile int32_t t65 = 5760;

    t65 = (((x1981^x1982)<=x1983)<<x1984);

    if (t65 != 8) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x1989 = 126U;
	uint32_t x1990 = 2744251U;
	int8_t x1991 = 59;
	uint64_t x1992 = 2LLU;
	volatile int32_t t66 = 242612052;

    t66 = (((x1989^x1990)<=x1991)<<x1992);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x2025 = -1;
	static int16_t x2026 = -1;
	static uint32_t x2027 = 71576260U;
	uint16_t x2028 = 6U;

    t67 = (((x2025^x2026)<=x2027)<<x2028);

    if (t67 != 64) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x2046 = -1;
	int64_t x2047 = -843408LL;
	uint8_t x2048 = 4U;

    t68 = (((x2045^x2046)<=x2047)<<x2048);

    if (t68 != 16) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x2129 = 728125053U;
	int32_t x2131 = -1;

    t69 = (((x2129^x2130)<=x2131)<<x2132);

    if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x2137 = INT32_MIN;
	uint64_t x2139 = 6893LLU;
	static uint32_t x2140 = 15U;
	static volatile int32_t t70 = -28002;

    t70 = (((x2137^x2138)<=x2139)<<x2140);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x2173 = 21U;
	static int16_t x2175 = 7207;
	volatile int32_t t71 = 606111856;

    t71 = (((x2173^x2174)<=x2175)<<x2176);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x2193 = -1;
	int16_t x2194 = -1;
	static uint64_t x2195 = UINT64_MAX;
	int8_t x2196 = 0;
	int32_t t72 = 0;

    t72 = (((x2193^x2194)<=x2195)<<x2196);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x2205 = 5U;
	uint32_t x2206 = UINT32_MAX;
	uint64_t x2207 = 10211869919736LLU;
	uint16_t x2208 = 1U;
	volatile int32_t t73 = -29435;

    t73 = (((x2205^x2206)<=x2207)<<x2208);

    if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x2233 = 4U;
	int64_t x2234 = -193688094561651340LL;
	uint16_t x2236 = 28U;
	static int32_t t74 = -676530;

    t74 = (((x2233^x2234)<=x2235)<<x2236);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x2241 = 20;
	uint16_t x2244 = 3U;
	int32_t t75 = 81338;

    t75 = (((x2241^x2242)<=x2243)<<x2244);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x2354 = 47LLU;
	int8_t x2356 = 0;
	static volatile int32_t t76 = -199;

    t76 = (((x2353^x2354)<=x2355)<<x2356);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x2357 = 17343045114912LLU;
	uint64_t x2358 = 43809347762LLU;
	int64_t x2359 = -4069LL;

    t77 = (((x2357^x2358)<=x2359)<<x2360);

    if (t77 != 64) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x2373 = UINT32_MAX;
	uint16_t x2376 = 1U;

    t78 = (((x2373^x2374)<=x2375)<<x2376);

    if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x2417 = INT16_MIN;
	int64_t x2418 = INT64_MIN;
	static uint16_t x2419 = UINT16_MAX;
	int8_t x2420 = 18;
	int32_t t79 = 526053;

    t79 = (((x2417^x2418)<=x2419)<<x2420);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x2421 = INT16_MIN;
	volatile int64_t x2422 = -4835LL;
	volatile int8_t x2424 = 17;
	int32_t t80 = 13338403;

    t80 = (((x2421^x2422)<=x2423)<<x2424);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x2433 = UINT32_MAX;
	static volatile uint64_t x2434 = 11709577533358LLU;
	int8_t x2435 = INT8_MIN;
	volatile int32_t x2436 = 0;
	volatile int32_t t81 = -58262;

    t81 = (((x2433^x2434)<=x2435)<<x2436);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x2441 = UINT64_MAX;
	int64_t x2442 = INT64_MIN;
	uint32_t x2443 = UINT32_MAX;
	uint8_t x2444 = 1U;
	volatile int32_t t82 = -56977;

    t82 = (((x2441^x2442)<=x2443)<<x2444);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x2505 = -5;
	static int64_t x2508 = 0LL;
	volatile int32_t t83 = 15;

    t83 = (((x2505^x2506)<=x2507)<<x2508);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x2641 = INT32_MAX;
	volatile int64_t x2643 = INT64_MAX;
	int16_t x2644 = 1;
	volatile int32_t t84 = -379059946;

    t84 = (((x2641^x2642)<=x2643)<<x2644);

    if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x2665 = -5578643100992LL;
	volatile uint8_t x2666 = 1U;
	int8_t x2668 = 1;
	int32_t t85 = 1983909;

    t85 = (((x2665^x2666)<=x2667)<<x2668);

    if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x2673 = 49U;
	int16_t x2674 = -1;
	int8_t x2675 = -1;
	static uint16_t x2676 = 4U;
	volatile int32_t t86 = 8895244;

    t86 = (((x2673^x2674)<=x2675)<<x2676);

    if (t86 != 16) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x2677 = UINT32_MAX;
	uint8_t x2678 = 13U;
	static int32_t x2679 = -475;

    t87 = (((x2677^x2678)<=x2679)<<x2680);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x2741 = -1;
	uint16_t x2742 = 27U;
	int32_t x2743 = -1;
	static int16_t x2744 = 2;
	volatile int32_t t88 = -21582;

    t88 = (((x2741^x2742)<=x2743)<<x2744);

    if (t88 != 4) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x2777 = INT8_MAX;
	int32_t x2779 = 529759116;
	int8_t x2780 = 0;
	int32_t t89 = 1246;

    t89 = (((x2777^x2778)<=x2779)<<x2780);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x2790 = -1;
	static volatile int16_t x2791 = 86;
	static int32_t t90 = -39305057;

    t90 = (((x2789^x2790)<=x2791)<<x2792);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x2817 = 1935;
	int32_t x2819 = INT32_MAX;
	volatile uint8_t x2820 = 9U;
	int32_t t91 = 21339;

    t91 = (((x2817^x2818)<=x2819)<<x2820);

    if (t91 != 512) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x2830 = INT64_MIN;
	int16_t x2831 = -1;

    t92 = (((x2829^x2830)<=x2831)<<x2832);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x2833 = INT8_MIN;
	volatile uint32_t x2834 = UINT32_MAX;
	uint64_t x2836 = 6LLU;
	static int32_t t93 = -152;

    t93 = (((x2833^x2834)<=x2835)<<x2836);

    if (t93 != 64) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x2865 = -31;
	volatile int8_t x2866 = INT8_MIN;
	volatile uint32_t x2867 = 15039U;
	int32_t t94 = 1;

    t94 = (((x2865^x2866)<=x2867)<<x2868);

    if (t94 != 16) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x2889 = INT16_MIN;
	int8_t x2891 = -1;
	uint16_t x2892 = 22U;
	volatile int32_t t95 = -64;

    t95 = (((x2889^x2890)<=x2891)<<x2892);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint16_t x2901 = 3U;
	int64_t x2902 = -13761632LL;
	int64_t x2903 = -1LL;
	uint8_t x2904 = 1U;
	int32_t t96 = 3066794;

    t96 = (((x2901^x2902)<=x2903)<<x2904);

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x2942 = INT32_MIN;
	static volatile int64_t x2943 = INT64_MIN;
	uint32_t x2944 = 13U;

    t97 = (((x2941^x2942)<=x2943)<<x2944);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x2962 = 2U;
	uint64_t x2963 = 518194513987LLU;
	static uint32_t x2964 = 0U;
	int32_t t98 = -942108583;

    t98 = (((x2961^x2962)<=x2963)<<x2964);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x2973 = INT16_MIN;
	int8_t x2974 = INT8_MAX;
	uint8_t x2975 = 1U;
	volatile int16_t x2976 = 6;
	volatile int32_t t99 = -9802078;

    t99 = (((x2973^x2974)<=x2975)<<x2976);

    if (t99 != 64) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x3013 = -723055229371LL;
	uint8_t x3014 = 87U;
	volatile uint64_t x3015 = UINT64_MAX;
	int16_t x3016 = 0;
	static int32_t t100 = 260172;

    t100 = (((x3013^x3014)<=x3015)<<x3016);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x3017 = 0;
	volatile int32_t x3018 = 325428837;
	int64_t x3019 = 38460588812LL;
	uint8_t x3020 = 0U;
	int32_t t101 = 225107;

    t101 = (((x3017^x3018)<=x3019)<<x3020);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x3025 = UINT64_MAX;
	volatile int32_t x3026 = INT32_MIN;
	static uint8_t x3028 = 6U;
	volatile int32_t t102 = -53;

    t102 = (((x3025^x3026)<=x3027)<<x3028);

    if (t102 != 64) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x3086 = UINT8_MAX;
	uint16_t x3087 = UINT16_MAX;

    t103 = (((x3085^x3086)<=x3087)<<x3088);

    if (t103 != 8) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x3173 = -1LL;
	int8_t x3174 = -2;
	volatile int32_t x3175 = INT32_MIN;
	volatile uint32_t x3176 = 13U;
	int32_t t104 = 3580;

    t104 = (((x3173^x3174)<=x3175)<<x3176);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x3197 = 205U;
	int16_t x3198 = -7;
	uint64_t x3199 = UINT64_MAX;
	int8_t x3200 = 25;

    t105 = (((x3197^x3198)<=x3199)<<x3200);

    if (t105 != 33554432) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x3253 = INT8_MAX;
	static int32_t x3254 = -1;
	int8_t x3255 = INT8_MIN;
	static volatile int32_t t106 = 979561997;

    t106 = (((x3253^x3254)<=x3255)<<x3256);

    if (t106 != 2) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x3301 = 6U;
	uint16_t x3302 = 9U;
	uint16_t x3303 = UINT16_MAX;
	int32_t t107 = 7816;

    t107 = (((x3301^x3302)<=x3303)<<x3304);

    if (t107 != 2) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x3346 = INT8_MIN;
	int32_t x3347 = INT32_MAX;
	uint8_t x3348 = 3U;
	int32_t t108 = 2192;

    t108 = (((x3345^x3346)<=x3347)<<x3348);

    if (t108 != 8) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x3409 = INT32_MAX;
	uint64_t x3410 = 113888LLU;

    t109 = (((x3409^x3410)<=x3411)<<x3412);

    if (t109 != 16) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x3417 = INT64_MIN;
	static int8_t x3418 = INT8_MIN;
	uint16_t x3419 = 74U;
	static int16_t x3420 = 20;
	volatile int32_t t110 = 17043;

    t110 = (((x3417^x3418)<=x3419)<<x3420);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x3457 = UINT8_MAX;
	static int8_t x3458 = INT8_MIN;
	uint64_t x3459 = 16516766LLU;
	int32_t x3460 = 0;
	int32_t t111 = 1817022;

    t111 = (((x3457^x3458)<=x3459)<<x3460);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x3557 = 1811;
	static int8_t x3558 = -1;
	int8_t x3559 = INT8_MIN;
	uint16_t x3560 = 7U;
	volatile int32_t t112 = 443810834;

    t112 = (((x3557^x3558)<=x3559)<<x3560);

    if (t112 != 128) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x3562 = INT8_MAX;
	static volatile int16_t x3563 = -1;
	static volatile int32_t t113 = 6606105;

    t113 = (((x3561^x3562)<=x3563)<<x3564);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x3585 = INT32_MIN;
	static int64_t x3586 = 479623LL;
	static uint64_t x3587 = 25949994LLU;
	uint32_t x3588 = 1U;

    t114 = (((x3585^x3586)<=x3587)<<x3588);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x3601 = -1;
	uint16_t x3603 = 88U;
	int8_t x3604 = 7;
	int32_t t115 = -52;

    t115 = (((x3601^x3602)<=x3603)<<x3604);

    if (t115 != 128) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x3607 = 12;
	uint16_t x3608 = 9U;
	volatile int32_t t116 = 133;

    t116 = (((x3605^x3606)<=x3607)<<x3608);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x3621 = -701933;
	int32_t x3622 = INT32_MAX;
	int8_t x3623 = -6;
	int8_t x3624 = 1;

    t117 = (((x3621^x3622)<=x3623)<<x3624);

    if (t117 != 2) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x3639 = 47;
	static uint8_t x3640 = 14U;
	static int32_t t118 = 9017391;

    t118 = (((x3637^x3638)<=x3639)<<x3640);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int32_t x3666 = INT32_MIN;
	volatile int32_t x3667 = -53009;
	int32_t x3668 = 10;
	volatile int32_t t119 = 4046;

    t119 = (((x3665^x3666)<=x3667)<<x3668);

    if (t119 != 1024) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x3669 = 12253437650463LLU;
	int8_t x3670 = INT8_MIN;
	int32_t t120 = 510971;

    t120 = (((x3669^x3670)<=x3671)<<x3672);

    if (t120 != 2) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x3678 = INT16_MIN;
	int16_t x3679 = 113;
	volatile int8_t x3680 = 2;

    t121 = (((x3677^x3678)<=x3679)<<x3680);

    if (t121 != 4) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x3701 = INT8_MIN;
	static int16_t x3702 = INT16_MIN;
	uint32_t x3703 = UINT32_MAX;
	int8_t x3704 = 2;
	volatile int32_t t122 = -2804750;

    t122 = (((x3701^x3702)<=x3703)<<x3704);

    if (t122 != 4) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x3741 = -1;
	int32_t x3742 = INT32_MIN;
	int64_t x3743 = -1LL;
	uint64_t x3744 = 0LLU;
	static volatile int32_t t123 = 30;

    t123 = (((x3741^x3742)<=x3743)<<x3744);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x3745 = INT64_MIN;
	int16_t x3746 = INT16_MIN;
	uint32_t x3747 = 28626000U;
	uint8_t x3748 = 17U;
	int32_t t124 = -109;

    t124 = (((x3745^x3746)<=x3747)<<x3748);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x3801 = 1974U;
	uint16_t x3802 = UINT16_MAX;
	int64_t x3803 = -1LL;
	int32_t t125 = 283791;

    t125 = (((x3801^x3802)<=x3803)<<x3804);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x3845 = 117U;
	volatile uint64_t x3846 = 108250LLU;
	volatile uint64_t x3847 = 2735108160LLU;
	static volatile int8_t x3848 = 12;
	int32_t t126 = -41100;

    t126 = (((x3845^x3846)<=x3847)<<x3848);

    if (t126 != 4096) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint16_t x3850 = 34U;
	static uint16_t x3851 = UINT16_MAX;
	volatile uint16_t x3852 = 2U;
	int32_t t127 = 98067;

    t127 = (((x3849^x3850)<=x3851)<<x3852);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x3863 = INT8_MIN;
	static int8_t x3864 = 6;

    t128 = (((x3861^x3862)<=x3863)<<x3864);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x3873 = INT64_MIN;
	int8_t x3874 = 29;
	int64_t x3875 = -1LL;
	uint16_t x3876 = 0U;

    t129 = (((x3873^x3874)<=x3875)<<x3876);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x3901 = 5967;
	static volatile int16_t x3903 = 46;
	uint8_t x3904 = 0U;

    t130 = (((x3901^x3902)<=x3903)<<x3904);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x3913 = 6262269418501LL;
	uint32_t x3914 = UINT32_MAX;
	volatile int8_t x3915 = -1;
	int32_t t131 = 0;

    t131 = (((x3913^x3914)<=x3915)<<x3916);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x3977 = INT8_MAX;
	uint16_t x3978 = 480U;
	uint8_t x3979 = 26U;
	int32_t x3980 = 12;
	int32_t t132 = -1;

    t132 = (((x3977^x3978)<=x3979)<<x3980);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x3981 = 1U;
	uint32_t x3982 = 8443U;
	int32_t x3983 = 265744586;
	int8_t x3984 = 0;
	volatile int32_t t133 = 1;

    t133 = (((x3981^x3982)<=x3983)<<x3984);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x3989 = -142;
	int32_t x3990 = -1;
	int64_t x3991 = -779258692868307LL;
	static volatile int32_t t134 = -136760404;

    t134 = (((x3989^x3990)<=x3991)<<x3992);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x4017 = INT16_MAX;
	int32_t x4018 = INT32_MIN;
	int32_t x4019 = INT32_MAX;
	static uint8_t x4020 = 3U;

    t135 = (((x4017^x4018)<=x4019)<<x4020);

    if (t135 != 8) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x4025 = 8542186731643937LL;
	static int32_t x4026 = -6897;
	uint32_t x4027 = 2U;
	uint8_t x4028 = 23U;
	volatile int32_t t136 = 47567225;

    t136 = (((x4025^x4026)<=x4027)<<x4028);

    if (t136 != 8388608) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x4045 = -1;
	volatile uint64_t x4046 = 10LLU;
	int16_t x4047 = INT16_MAX;
	volatile uint8_t x4048 = 18U;
	static volatile int32_t t137 = 584617;

    t137 = (((x4045^x4046)<=x4047)<<x4048);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x4073 = 11594;
	int32_t x4075 = INT32_MIN;
	int32_t t138 = 736857;

    t138 = (((x4073^x4074)<=x4075)<<x4076);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int16_t x4093 = 2;
	volatile int32_t x4094 = -12332254;
	int64_t x4095 = -1LL;
	uint8_t x4096 = 2U;
	int32_t t139 = 214811;

    t139 = (((x4093^x4094)<=x4095)<<x4096);

    if (t139 != 4) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int16_t x4141 = INT16_MIN;
	static int8_t x4142 = INT8_MAX;
	volatile uint16_t x4143 = 0U;
	volatile int32_t t140 = 1;

    t140 = (((x4141^x4142)<=x4143)<<x4144);

    if (t140 != 2) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x4159 = INT32_MAX;
	volatile int8_t x4160 = 0;
	static int32_t t141 = 9;

    t141 = (((x4157^x4158)<=x4159)<<x4160);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x4161 = 1U;
	int8_t x4162 = -7;
	int64_t x4163 = INT64_MIN;
	uint16_t x4164 = 18U;
	static volatile int32_t t142 = -2677;

    t142 = (((x4161^x4162)<=x4163)<<x4164);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x4201 = -1;
	volatile int32_t x4202 = INT32_MIN;
	volatile int32_t x4204 = 1;
	volatile int32_t t143 = -900966041;

    t143 = (((x4201^x4202)<=x4203)<<x4204);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x4209 = 0U;
	static int64_t x4210 = 206662661731LL;
	static int32_t x4211 = INT32_MIN;
	static uint32_t x4212 = 1U;
	volatile int32_t t144 = -2;

    t144 = (((x4209^x4210)<=x4211)<<x4212);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x4225 = INT16_MIN;
	static uint64_t x4226 = 4062555905974LLU;
	uint64_t x4227 = 9784836588765LLU;
	static volatile int32_t t145 = 108760547;

    t145 = (((x4225^x4226)<=x4227)<<x4228);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x4253 = INT8_MIN;
	int16_t x4254 = -1;
	static int32_t x4255 = -1;
	static uint8_t x4256 = 14U;
	int32_t t146 = 4087639;

    t146 = (((x4253^x4254)<=x4255)<<x4256);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x4322 = UINT8_MAX;
	int8_t x4323 = 48;
	volatile int32_t t147 = -562357849;

    t147 = (((x4321^x4322)<=x4323)<<x4324);

    if (t147 != 67108864) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x4373 = UINT64_MAX;
	int32_t x4374 = INT32_MAX;
	uint8_t x4376 = 24U;
	static int32_t t148 = -208;

    t148 = (((x4373^x4374)<=x4375)<<x4376);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x4434 = 6;
	int64_t x4435 = -1LL;
	uint16_t x4436 = 0U;
	volatile int32_t t149 = 1;

    t149 = (((x4433^x4434)<=x4435)<<x4436);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x4453 = INT32_MIN;
	uint64_t x4454 = 4367086394840047LLU;
	uint8_t x4455 = 118U;
	volatile int8_t x4456 = 1;

    t150 = (((x4453^x4454)<=x4455)<<x4456);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x4477 = 1785U;
	int16_t x4479 = -1;

    t151 = (((x4477^x4478)<=x4479)<<x4480);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x4589 = -1LL;
	volatile uint16_t x4590 = 11U;
	static int64_t x4591 = -1LL;
	int16_t x4592 = 1;
	int32_t t152 = 1;

    t152 = (((x4589^x4590)<=x4591)<<x4592);

    if (t152 != 2) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x4653 = INT64_MIN;
	int8_t x4655 = -1;
	uint16_t x4656 = 15U;
	static int32_t t153 = 0;

    t153 = (((x4653^x4654)<=x4655)<<x4656);

    if (t153 != 32768) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x4657 = INT8_MAX;
	int8_t x4658 = INT8_MAX;
	uint32_t x4659 = 4414U;
	volatile uint16_t x4660 = 2U;
	static int32_t t154 = -9933334;

    t154 = (((x4657^x4658)<=x4659)<<x4660);

    if (t154 != 4) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x4665 = UINT8_MAX;
	static int16_t x4667 = -1;
	uint8_t x4668 = 0U;
	int32_t t155 = -38422;

    t155 = (((x4665^x4666)<=x4667)<<x4668);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x4689 = -5654;
	volatile uint8_t x4690 = UINT8_MAX;
	uint64_t x4691 = 386734969525LLU;

    t156 = (((x4689^x4690)<=x4691)<<x4692);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x4694 = INT64_MAX;
	int64_t x4695 = -1LL;
	int8_t x4696 = 3;
	int32_t t157 = -734929610;

    t157 = (((x4693^x4694)<=x4695)<<x4696);

    if (t157 != 8) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint32_t x4781 = 13798929U;
	int64_t x4782 = -41625874685LL;
	static uint8_t x4783 = UINT8_MAX;
	int32_t t158 = -12474796;

    t158 = (((x4781^x4782)<=x4783)<<x4784);

    if (t158 != 2) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x4889 = INT64_MIN;
	uint8_t x4890 = UINT8_MAX;
	static int64_t x4891 = INT64_MAX;
	uint64_t x4892 = 0LLU;
	volatile int32_t t159 = 2;

    t159 = (((x4889^x4890)<=x4891)<<x4892);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x4893 = INT8_MIN;
	volatile int16_t x4894 = INT16_MAX;
	volatile uint8_t x4896 = 0U;
	int32_t t160 = -11794;

    t160 = (((x4893^x4894)<=x4895)<<x4896);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x4905 = 1045613181901459LLU;
	int8_t x4906 = -1;
	int8_t x4907 = INT8_MAX;
	int32_t t161 = -595785;

    t161 = (((x4905^x4906)<=x4907)<<x4908);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x4975 = 0U;
	static uint8_t x4976 = 3U;

    t162 = (((x4973^x4974)<=x4975)<<x4976);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x4981 = 41258494LLU;
	uint32_t x4984 = 1U;
	int32_t t163 = -30967133;

    t163 = (((x4981^x4982)<=x4983)<<x4984);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x5019 = 957243167902462LLU;
	uint8_t x5020 = 0U;
	volatile int32_t t164 = 763288895;

    t164 = (((x5017^x5018)<=x5019)<<x5020);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x5085 = -1;
	int16_t x5086 = INT16_MIN;
	static int8_t x5087 = 1;
	int8_t x5088 = 1;
	int32_t t165 = 62174258;

    t165 = (((x5085^x5086)<=x5087)<<x5088);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x5149 = UINT32_MAX;
	uint16_t x5150 = 145U;
	static volatile int32_t t166 = 303;

    t166 = (((x5149^x5150)<=x5151)<<x5152);

    if (t166 != 64) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x5161 = INT16_MIN;
	uint8_t x5163 = 83U;
	int16_t x5164 = 1;
	int32_t t167 = -356834;

    t167 = (((x5161^x5162)<=x5163)<<x5164);

    if (t167 != 2) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x5165 = INT32_MAX;
	int8_t x5166 = INT8_MAX;
	int8_t x5167 = 0;
	static uint8_t x5168 = 16U;
	int32_t t168 = -19375225;

    t168 = (((x5165^x5166)<=x5167)<<x5168);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x5169 = INT64_MAX;
	int32_t x5170 = INT32_MIN;
	int32_t x5171 = INT32_MIN;
	uint16_t x5172 = 0U;
	volatile int32_t t169 = -177;

    t169 = (((x5169^x5170)<=x5171)<<x5172);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x5181 = INT64_MIN;
	static int16_t x5182 = 2765;
	int64_t x5183 = INT64_MIN;
	uint8_t x5184 = 31U;

    t170 = (((x5181^x5182)<=x5183)<<x5184);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x5209 = 1200224;
	int32_t x5210 = INT32_MIN;
	volatile uint8_t x5212 = 0U;
	int32_t t171 = 3;

    t171 = (((x5209^x5210)<=x5211)<<x5212);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x5223 = INT8_MIN;
	uint8_t x5224 = 0U;

    t172 = (((x5221^x5222)<=x5223)<<x5224);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x5237 = 39424725U;
	int64_t x5238 = -1068LL;
	int8_t x5239 = -1;
	static volatile uint8_t x5240 = 0U;
	volatile int32_t t173 = 415;

    t173 = (((x5237^x5238)<=x5239)<<x5240);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x5249 = -1;
	static int8_t x5250 = -1;
	volatile int64_t x5251 = INT64_MIN;
	int32_t t174 = 16;

    t174 = (((x5249^x5250)<=x5251)<<x5252);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x5259 = 2136;
	uint8_t x5260 = 31U;
	int32_t t175 = -233062819;

    t175 = (((x5257^x5258)<=x5259)<<x5260);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x5294 = 259225959U;
	int32_t x5295 = INT32_MAX;
	int16_t x5296 = 1;
	volatile int32_t t176 = 5209;

    t176 = (((x5293^x5294)<=x5295)<<x5296);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x5302 = INT32_MIN;
	int16_t x5303 = INT16_MAX;
	int8_t x5304 = 1;
	volatile int32_t t177 = 374;

    t177 = (((x5301^x5302)<=x5303)<<x5304);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x5313 = 30589U;
	int64_t x5314 = 12364LL;
	uint8_t x5315 = 61U;
	static volatile int32_t t178 = -93;

    t178 = (((x5313^x5314)<=x5315)<<x5316);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x5361 = INT8_MIN;
	static int32_t x5363 = 7337;
	volatile int8_t x5364 = 14;
	static volatile int32_t t179 = -217;

    t179 = (((x5361^x5362)<=x5363)<<x5364);

    if (t179 != 16384) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x5373 = -419LL;
	static uint64_t x5374 = 44556003LLU;
	int32_t x5375 = -1;
	uint8_t x5376 = 8U;
	int32_t t180 = 0;

    t180 = (((x5373^x5374)<=x5375)<<x5376);

    if (t180 != 256) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x5381 = 98551LLU;
	int64_t x5382 = -21749213952208LL;
	volatile int16_t x5383 = INT16_MAX;
	uint32_t x5384 = 5U;

    t181 = (((x5381^x5382)<=x5383)<<x5384);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x5385 = 3U;
	volatile uint64_t x5386 = 1548186LLU;
	uint8_t x5387 = 0U;
	static uint8_t x5388 = 3U;
	volatile int32_t t182 = -18446;

    t182 = (((x5385^x5386)<=x5387)<<x5388);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x5389 = INT8_MAX;
	static int8_t x5390 = INT8_MIN;
	int64_t x5391 = -2318656475435797762LL;
	static volatile int32_t t183 = 1;

    t183 = (((x5389^x5390)<=x5391)<<x5392);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x5397 = INT8_MIN;
	int32_t t184 = -1068808992;

    t184 = (((x5397^x5398)<=x5399)<<x5400);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x5517 = 2714LLU;
	volatile uint32_t x5519 = 14851U;
	uint8_t x5520 = 1U;
	volatile int32_t t185 = 20;

    t185 = (((x5517^x5518)<=x5519)<<x5520);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x5549 = 20400237U;
	int8_t x5551 = INT8_MAX;
	uint32_t x5552 = 1U;

    t186 = (((x5549^x5550)<=x5551)<<x5552);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x5589 = -1;
	int64_t x5591 = INT64_MIN;
	int16_t x5592 = 1;
	int32_t t187 = 40263397;

    t187 = (((x5589^x5590)<=x5591)<<x5592);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x5601 = INT64_MAX;
	static int16_t x5602 = INT16_MAX;
	int32_t t188 = -4498092;

    t188 = (((x5601^x5602)<=x5603)<<x5604);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x5638 = UINT64_MAX;
	volatile uint16_t x5640 = 3U;
	int32_t t189 = 6072622;

    t189 = (((x5637^x5638)<=x5639)<<x5640);

    if (t189 != 8) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x5705 = 6920695U;
	int32_t x5706 = INT32_MIN;
	volatile int32_t x5707 = -295679383;
	uint16_t x5708 = 7U;
	int32_t t190 = 101848425;

    t190 = (((x5705^x5706)<=x5707)<<x5708);

    if (t190 != 128) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x5721 = -1;
	int16_t x5722 = INT16_MIN;
	int16_t x5723 = 3;

    t191 = (((x5721^x5722)<=x5723)<<x5724);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x5737 = -1;
	static volatile int16_t x5739 = -1;
	static uint8_t x5740 = 22U;
	int32_t t192 = -321;

    t192 = (((x5737^x5738)<=x5739)<<x5740);

    if (t192 != 4194304) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x5745 = 107U;
	int64_t x5746 = 15250LL;
	int32_t x5748 = 3;
	int32_t t193 = -2;

    t193 = (((x5745^x5746)<=x5747)<<x5748);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x5793 = UINT8_MAX;
	int32_t x5795 = -32586655;
	int16_t x5796 = 0;
	volatile int32_t t194 = -1;

    t194 = (((x5793^x5794)<=x5795)<<x5796);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x5821 = INT8_MAX;
	int32_t x5823 = INT32_MAX;
	uint8_t x5824 = 0U;

    t195 = (((x5821^x5822)<=x5823)<<x5824);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x5858 = INT16_MIN;
	int8_t x5859 = INT8_MIN;
	int16_t x5860 = 1;
	volatile int32_t t196 = 14;

    t196 = (((x5857^x5858)<=x5859)<<x5860);

    if (t196 != 2) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x5893 = UINT32_MAX;
	static uint32_t x5894 = 15U;
	int16_t x5895 = 31;
	int16_t x5896 = 15;
	volatile int32_t t197 = -83987101;

    t197 = (((x5893^x5894)<=x5895)<<x5896);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x5929 = INT64_MIN;
	int8_t x5930 = INT8_MIN;
	uint32_t x5931 = UINT32_MAX;
	volatile uint32_t x5932 = 6U;
	int32_t t198 = 12003921;

    t198 = (((x5929^x5930)<=x5931)<<x5932);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x6021 = -1LL;
	static int16_t x6022 = 0;
	volatile uint8_t x6024 = 12U;
	volatile int32_t t199 = 52;

    t199 = (((x6021^x6022)<=x6023)<<x6024);

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


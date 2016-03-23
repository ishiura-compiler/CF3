
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

volatile int16_t x16 = -1;
static uint8_t x101 = 11U;
volatile int64_t x112 = 672LL;
int64_t t4 = -1LL;
static int32_t x149 = INT32_MIN;
static uint8_t x151 = 7U;
volatile int8_t x194 = -1;
uint8_t x195 = 27U;
uint8_t x197 = 110U;
uint8_t x198 = UINT8_MAX;
uint32_t x200 = 17044589U;
int32_t x247 = 0;
static uint8_t x248 = UINT8_MAX;
volatile int32_t t11 = 1;
uint16_t x323 = 15U;
uint16_t x495 = 9U;
static int8_t x500 = INT8_MIN;
uint64_t x530 = 536326811608324596LLU;
int32_t t17 = 8222;
static volatile uint64_t x632 = 52878251011039981LLU;
uint32_t x645 = 16187138U;
volatile int64_t t20 = 24459LL;
volatile uint8_t x720 = 2U;
uint64_t x813 = UINT64_MAX;
int64_t x820 = INT64_MIN;
uint16_t x847 = 18U;
volatile int32_t t28 = -1;
int8_t x865 = INT8_MIN;
int8_t x866 = 12;
uint16_t x867 = 2U;
volatile int32_t t30 = -975657989;
uint16_t x1047 = 22U;
volatile uint64_t x1066 = UINT64_MAX;
volatile uint8_t x1067 = 1U;
volatile int32_t t33 = -8375925;
int8_t x1125 = INT8_MIN;
int32_t x1127 = 4;
static int64_t x1145 = INT64_MAX;
volatile int32_t t36 = 1642;
static int32_t x1245 = INT32_MAX;
static int8_t x1247 = 1;
int32_t x1318 = INT32_MIN;
int32_t x1386 = -5;
int16_t x1388 = -1;
volatile int16_t x1397 = INT16_MAX;
volatile int8_t x1404 = -1;
volatile int8_t x1465 = INT8_MIN;
int16_t x1578 = INT16_MIN;
uint32_t x1592 = 10616408U;
int64_t t51 = -13564LL;
uint16_t x1660 = UINT16_MAX;
int16_t x1682 = INT16_MAX;
uint64_t x1734 = 1842789126099737801LLU;
int32_t x1736 = 35;
static uint64_t x1750 = 332663LLU;
volatile int16_t x1752 = 1;
uint32_t x1758 = 1712U;
uint8_t x1759 = 3U;
int32_t x1769 = INT32_MIN;
volatile int32_t x1771 = 0;
uint64_t x1772 = UINT64_MAX;
static uint64_t t58 = 8820449660223302962LLU;
volatile uint32_t x1777 = 11U;
int8_t x1779 = 1;
int64_t t59 = -3864348631945475LL;
volatile int8_t x1869 = INT8_MAX;
static uint64_t x1888 = 29405601087394LLU;
volatile uint64_t t61 = 195LLU;
volatile int32_t x2046 = 124211179;
static uint8_t x2087 = 6U;
volatile uint64_t x2088 = 15558476LLU;
int16_t x2174 = -1;
static int64_t x2218 = -1LL;
uint16_t x2241 = UINT16_MAX;
int16_t x2252 = INT16_MIN;
uint16_t x2278 = UINT16_MAX;
int32_t t72 = 15;
uint16_t x2311 = 2U;
int64_t x2324 = -828LL;
uint8_t x2343 = 1U;
uint32_t t76 = 24195U;
uint32_t x2351 = 7U;
int16_t x2357 = INT16_MIN;
static volatile uint8_t x2359 = 1U;
int64_t x2370 = -1LL;
uint32_t x2413 = 260256662U;
uint64_t x2416 = 497LLU;
static int16_t x2465 = INT16_MAX;
uint16_t x2559 = 14U;
int32_t x2560 = -4;
static uint16_t x2656 = 13U;
static int64_t x2665 = 1593LL;
uint64_t x2690 = 556LLU;
volatile int32_t t88 = 1043;
volatile uint32_t x2701 = 6772374U;
int32_t t90 = -119771;
uint8_t x2871 = 0U;
static uint32_t x2872 = 6U;
volatile uint32_t t92 = 630U;
int8_t x2910 = -1;
int32_t t94 = 29;
volatile int32_t t95 = 10579;
static uint8_t x2999 = 21U;
int32_t x3038 = INT32_MIN;
uint8_t x3147 = 26U;
uint64_t x3207 = 15LLU;
int16_t x3222 = -1;
static int32_t x3241 = INT32_MAX;
int8_t x3243 = 11;
volatile int32_t t104 = 92;
static uint64_t x3259 = 0LLU;
volatile uint32_t x3417 = 1724143U;
volatile int32_t x3473 = -93;
int16_t x3474 = INT16_MIN;
uint16_t x3475 = 29U;
volatile int16_t x3479 = 0;
int64_t x3506 = INT64_MIN;
volatile int8_t x3507 = 11;
uint16_t x3525 = 3U;
static int8_t x3574 = INT8_MIN;
volatile uint32_t x3609 = 163819U;
uint64_t x3627 = 0LLU;
volatile uint16_t x3653 = 3U;
uint16_t x3654 = 411U;
uint8_t x3663 = 11U;
int32_t x3664 = INT32_MIN;
int32_t t117 = -115126;
int32_t x3886 = -1;
static uint32_t x3949 = 14183377U;
int16_t x3951 = 1;
int32_t x4052 = INT32_MAX;
volatile int32_t t125 = -6921761;
int16_t x4217 = -103;
int8_t x4366 = 16;
int32_t x4368 = -33827245;
int32_t x4384 = 2150;
int32_t t132 = 23;
static volatile int32_t t133 = 1;
volatile int32_t x4422 = 732;
volatile uint32_t x4423 = 0U;
int16_t x4478 = 0;
int32_t t135 = -6288803;
int8_t x4486 = INT8_MIN;
int64_t x4610 = INT64_MAX;
uint8_t x4612 = 14U;
int8_t x4615 = 12;
int64_t x4666 = INT64_MIN;
uint32_t x4753 = 98666371U;
uint16_t x4777 = 121U;
volatile int64_t x4826 = INT64_MIN;
static int32_t x4828 = 994570;
int32_t t146 = 0;
uint8_t x5122 = UINT8_MAX;
uint64_t x5178 = 145240957941125488LLU;
int64_t x5180 = INT64_MAX;
int32_t t150 = -1244260;
int64_t x5313 = INT64_MIN;
static volatile uint32_t x5316 = 59600U;
uint8_t x5336 = 3U;
uint64_t x5337 = 17050222623533LLU;
int32_t t153 = 877299;
uint8_t x5386 = 5U;
uint32_t x5509 = 89374111U;
static int16_t x5510 = 21;
static int8_t x5514 = INT8_MAX;
uint8_t x5545 = 15U;
uint16_t x5548 = UINT16_MAX;
static volatile int64_t x5554 = INT64_MIN;
volatile int32_t x5601 = -1;
volatile int16_t x5606 = -1;
int64_t t162 = INT64_MAX;
uint64_t x5742 = UINT64_MAX;
static uint16_t x5763 = 3U;
uint16_t x5792 = 1U;
volatile int64_t x5818 = INT64_MIN;
volatile int16_t x5876 = 1;
int32_t t170 = 874986;
static int16_t x5883 = 0;
int16_t x5884 = 1;
volatile uint32_t x5926 = UINT32_MAX;
static int16_t x6024 = INT16_MIN;
int32_t t176 = -149298715;
static uint64_t x6030 = 6725259849243558564LLU;
int8_t x6137 = INT8_MAX;
static volatile uint8_t x6139 = 0U;
static volatile int64_t x6145 = INT64_MAX;
volatile int32_t x6148 = INT32_MIN;
volatile int64_t x6310 = INT64_MIN;
uint64_t x6312 = UINT64_MAX;
int64_t x6445 = INT64_MIN;
int64_t x6446 = -963063011865587723LL;
int8_t x6499 = 2;
static uint16_t x6616 = 1061U;
int16_t x6660 = INT16_MAX;
volatile int8_t x6717 = INT8_MIN;
uint8_t x6720 = 0U;
static int16_t x6773 = -1;
uint16_t x6774 = 25306U;
uint32_t x6806 = UINT32_MAX;


void f0(void) {
    	int64_t x13 = -15LL;
	uint16_t x14 = 7U;
	static uint64_t x15 = 1LLU;
	int32_t t0 = -4;

    t0 = (((x13>x14)>>x15)*x16);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x33 = -9;
	volatile int16_t x34 = -6;
	int8_t x35 = 1;
	volatile int16_t x36 = INT16_MIN;
	volatile int32_t t1 = 3;

    t1 = (((x33>x34)>>x35)*x36);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x89 = -1;
	uint32_t x90 = 451583645U;
	volatile int8_t x91 = 0;
	int32_t x92 = INT32_MIN;
	int32_t t2 = INT32_MIN;

    t2 = (((x89>x90)>>x91)*x92);

    if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x102 = 3U;
	volatile uint8_t x103 = 2U;
	uint32_t x104 = UINT32_MAX;
	volatile uint32_t t3 = 2835U;

    t3 = (((x101>x102)>>x103)*x104);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x109 = 63;
	uint64_t x110 = 1LLU;
	int16_t x111 = 2;

    t4 = (((x109>x110)>>x111)*x112);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x145 = 248148814U;
	volatile int64_t x146 = INT64_MIN;
	uint8_t x147 = 7U;
	int32_t x148 = INT32_MIN;
	volatile int32_t t5 = -29870;

    t5 = (((x145>x146)>>x147)*x148);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x150 = 3248U;
	int8_t x152 = -1;
	volatile int32_t t6 = 200872779;

    t6 = (((x149>x150)>>x151)*x152);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x193 = 5U;
	int32_t x196 = INT32_MAX;
	int32_t t7 = 1186865;

    t7 = (((x193>x194)>>x195)*x196);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x199 = 1U;
	uint32_t t8 = 115U;

    t8 = (((x197>x198)>>x199)*x200);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x209 = 51U;
	uint32_t x210 = 3695104U;
	int8_t x211 = 8;
	static uint16_t x212 = UINT16_MAX;
	int32_t t9 = -1;

    t9 = (((x209>x210)>>x211)*x212);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int8_t x229 = INT8_MAX;
	static volatile int64_t x230 = -18853154LL;
	static int8_t x231 = 4;
	uint16_t x232 = 34U;
	volatile int32_t t10 = 965635729;

    t10 = (((x229>x230)>>x231)*x232);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x245 = 40;
	int32_t x246 = INT32_MIN;

    t11 = (((x245>x246)>>x247)*x248);

    if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x321 = INT32_MIN;
	int16_t x322 = INT16_MAX;
	uint16_t x324 = 178U;
	volatile int32_t t12 = -41;

    t12 = (((x321>x322)>>x323)*x324);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x381 = 1289647LLU;
	uint32_t x382 = 175101U;
	int8_t x383 = 26;
	uint8_t x384 = UINT8_MAX;
	int32_t t13 = -132927;

    t13 = (((x381>x382)>>x383)*x384);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x493 = INT16_MIN;
	int8_t x494 = -1;
	int16_t x496 = -1;
	static volatile int32_t t14 = 46;

    t14 = (((x493>x494)>>x495)*x496);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x497 = 1U;
	int8_t x498 = -1;
	uint32_t x499 = 4U;
	int32_t t15 = -5;

    t15 = (((x497>x498)>>x499)*x500);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x529 = 1;
	uint64_t x531 = 1LLU;
	int32_t x532 = INT32_MIN;
	int32_t t16 = 585;

    t16 = (((x529>x530)>>x531)*x532);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x553 = 53395U;
	static uint64_t x554 = 8645885190317081184LLU;
	volatile uint16_t x555 = 20U;
	int32_t x556 = 1;

    t17 = (((x553>x554)>>x555)*x556);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x609 = 21423965;
	volatile uint32_t x610 = 6872757U;
	static int8_t x611 = 3;
	int16_t x612 = INT16_MAX;
	int32_t t18 = -26;

    t18 = (((x609>x610)>>x611)*x612);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int16_t x629 = -127;
	volatile int16_t x630 = INT16_MAX;
	int32_t x631 = 16;
	uint64_t t19 = 193LLU;

    t19 = (((x629>x630)>>x631)*x632);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x646 = INT16_MIN;
	int16_t x647 = 2;
	int64_t x648 = INT64_MIN;

    t20 = (((x645>x646)>>x647)*x648);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x665 = INT8_MIN;
	int8_t x666 = INT8_MIN;
	int8_t x667 = 0;
	int16_t x668 = -1;
	int32_t t21 = -2995265;

    t21 = (((x665>x666)>>x667)*x668);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x705 = INT32_MIN;
	volatile int32_t x706 = INT32_MAX;
	volatile int8_t x707 = 0;
	int64_t x708 = -1LL;
	int64_t t22 = 30982349302496LL;

    t22 = (((x705>x706)>>x707)*x708);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x717 = INT32_MIN;
	int32_t x718 = INT32_MAX;
	uint16_t x719 = 1U;
	int32_t t23 = 4679;

    t23 = (((x717>x718)>>x719)*x720);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x729 = INT32_MAX;
	static int16_t x730 = INT16_MIN;
	uint16_t x731 = 18U;
	int64_t x732 = 4584429823959875016LL;
	int64_t t24 = -986087941241326LL;

    t24 = (((x729>x730)>>x731)*x732);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x769 = UINT32_MAX;
	volatile int8_t x770 = INT8_MAX;
	uint8_t x771 = 0U;
	volatile int16_t x772 = -159;
	int32_t t25 = 110842495;

    t25 = (((x769>x770)>>x771)*x772);

    if (t25 != -159) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x814 = UINT16_MAX;
	int32_t x815 = 7;
	volatile uint32_t x816 = 36626939U;
	uint32_t t26 = 59U;

    t26 = (((x813>x814)>>x815)*x816);

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x817 = INT32_MAX;
	static volatile int64_t x818 = -1LL;
	static uint8_t x819 = 2U;
	int64_t t27 = -11LL;

    t27 = (((x817>x818)>>x819)*x820);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x845 = 0;
	static int64_t x846 = INT64_MIN;
	static volatile uint16_t x848 = UINT16_MAX;

    t28 = (((x845>x846)>>x847)*x848);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x868 = INT16_MIN;
	volatile int32_t t29 = -1;

    t29 = (((x865>x866)>>x867)*x868);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x869 = -3;
	int16_t x870 = INT16_MIN;
	uint16_t x871 = 1U;
	volatile int32_t x872 = -1;

    t30 = (((x869>x870)>>x871)*x872);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x901 = -1LL;
	int64_t x902 = INT64_MIN;
	static uint8_t x903 = 6U;
	int64_t x904 = INT64_MIN;
	int64_t t31 = -2302081083322092LL;

    t31 = (((x901>x902)>>x903)*x904);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x1045 = -1;
	static int16_t x1046 = INT16_MAX;
	uint16_t x1048 = UINT16_MAX;
	int32_t t32 = -38118;

    t32 = (((x1045>x1046)>>x1047)*x1048);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x1065 = -1;
	int32_t x1068 = -488;

    t33 = (((x1065>x1066)>>x1067)*x1068);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x1085 = INT16_MAX;
	volatile int32_t x1086 = INT32_MIN;
	uint8_t x1087 = 1U;
	int8_t x1088 = -4;
	int32_t t34 = -1;

    t34 = (((x1085>x1086)>>x1087)*x1088);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x1126 = INT64_MAX;
	int64_t x1128 = INT64_MAX;
	volatile int64_t t35 = 57901960752262122LL;

    t35 = (((x1125>x1126)>>x1127)*x1128);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x1146 = INT64_MAX;
	int64_t x1147 = 0LL;
	static int32_t x1148 = INT32_MIN;

    t36 = (((x1145>x1146)>>x1147)*x1148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x1193 = INT32_MIN;
	int32_t x1194 = INT32_MIN;
	int8_t x1195 = 0;
	int64_t x1196 = INT64_MAX;
	int64_t t37 = 2281597839262LL;

    t37 = (((x1193>x1194)>>x1195)*x1196);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x1237 = 2875693618712206LL;
	int8_t x1238 = -1;
	volatile int8_t x1239 = 0;
	int64_t x1240 = 1739229951639LL;
	int64_t t38 = 795LL;

    t38 = (((x1237>x1238)>>x1239)*x1240);

    if (t38 != 1739229951639LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x1246 = -1;
	int8_t x1248 = INT8_MIN;
	volatile int32_t t39 = 15051755;

    t39 = (((x1245>x1246)>>x1247)*x1248);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x1309 = 956242;
	int16_t x1310 = INT16_MIN;
	uint8_t x1311 = 15U;
	volatile int8_t x1312 = INT8_MAX;
	static int32_t t40 = 64895997;

    t40 = (((x1309>x1310)>>x1311)*x1312);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x1317 = INT16_MIN;
	volatile int16_t x1319 = 23;
	static int8_t x1320 = -1;
	int32_t t41 = -964638656;

    t41 = (((x1317>x1318)>>x1319)*x1320);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x1385 = -1;
	volatile uint8_t x1387 = 1U;
	volatile int32_t t42 = 518056507;

    t42 = (((x1385>x1386)>>x1387)*x1388);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x1398 = -10;
	uint8_t x1399 = 2U;
	static int64_t x1400 = -32017LL;
	volatile int64_t t43 = -2990LL;

    t43 = (((x1397>x1398)>>x1399)*x1400);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x1401 = INT64_MIN;
	volatile int32_t x1402 = 216218;
	static int16_t x1403 = 1;
	volatile int32_t t44 = -47134;

    t44 = (((x1401>x1402)>>x1403)*x1404);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x1413 = UINT8_MAX;
	static uint16_t x1414 = 27560U;
	uint16_t x1415 = 14U;
	int64_t x1416 = INT64_MIN;
	int64_t t45 = 5008496177035971LL;

    t45 = (((x1413>x1414)>>x1415)*x1416);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x1445 = -812;
	int64_t x1446 = 292080183LL;
	int8_t x1447 = 17;
	int64_t x1448 = INT64_MAX;
	volatile int64_t t46 = -11047LL;

    t46 = (((x1445>x1446)>>x1447)*x1448);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x1466 = -1;
	int8_t x1467 = 1;
	static uint64_t x1468 = 157175199603LLU;
	volatile uint64_t t47 = 11591LLU;

    t47 = (((x1465>x1466)>>x1467)*x1468);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x1497 = -1394011;
	int8_t x1498 = INT8_MIN;
	int8_t x1499 = 0;
	volatile int64_t x1500 = INT64_MIN;
	volatile int64_t t48 = -2566339835076LL;

    t48 = (((x1497>x1498)>>x1499)*x1500);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x1577 = -1LL;
	int8_t x1579 = 6;
	uint32_t x1580 = 13U;
	static uint32_t t49 = 98U;

    t49 = (((x1577>x1578)>>x1579)*x1580);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x1589 = 10;
	volatile uint32_t x1590 = UINT32_MAX;
	static uint8_t x1591 = 14U;
	volatile uint32_t t50 = 11U;

    t50 = (((x1589>x1590)>>x1591)*x1592);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x1609 = -1LL;
	int32_t x1610 = INT32_MIN;
	static int8_t x1611 = 0;
	static int64_t x1612 = -1686LL;

    t51 = (((x1609>x1610)>>x1611)*x1612);

    if (t51 != -1686LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x1657 = -1;
	volatile int16_t x1658 = INT16_MIN;
	uint8_t x1659 = 20U;
	volatile int32_t t52 = 82444891;

    t52 = (((x1657>x1658)>>x1659)*x1660);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x1681 = -579;
	uint16_t x1683 = 24U;
	int16_t x1684 = INT16_MAX;
	int32_t t53 = 382;

    t53 = (((x1681>x1682)>>x1683)*x1684);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x1729 = INT16_MIN;
	int16_t x1730 = INT16_MAX;
	uint8_t x1731 = 0U;
	static int32_t x1732 = 608595062;
	int32_t t54 = 4;

    t54 = (((x1729>x1730)>>x1731)*x1732);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x1733 = -1;
	volatile int64_t x1735 = 0LL;
	int32_t t55 = 4475684;

    t55 = (((x1733>x1734)>>x1735)*x1736);

    if (t55 != 35) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x1749 = INT8_MAX;
	uint16_t x1751 = 10U;
	volatile int32_t t56 = 6741;

    t56 = (((x1749>x1750)>>x1751)*x1752);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x1757 = 1330U;
	volatile int8_t x1760 = INT8_MIN;
	volatile int32_t t57 = -251;

    t57 = (((x1757>x1758)>>x1759)*x1760);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x1770 = 5125633LL;

    t58 = (((x1769>x1770)>>x1771)*x1772);

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x1778 = 123205274963192722LLU;
	int64_t x1780 = -334LL;

    t59 = (((x1777>x1778)>>x1779)*x1780);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x1870 = 1928489U;
	int8_t x1871 = 31;
	static uint16_t x1872 = UINT16_MAX;
	volatile int32_t t60 = 530;

    t60 = (((x1869>x1870)>>x1871)*x1872);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x1885 = 10594293715LLU;
	int16_t x1886 = INT16_MAX;
	uint64_t x1887 = 5LLU;

    t61 = (((x1885>x1886)>>x1887)*x1888);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x1905 = INT64_MAX;
	uint16_t x1906 = 0U;
	uint64_t x1907 = 7LLU;
	volatile int16_t x1908 = -1;
	volatile int32_t t62 = -49222;

    t62 = (((x1905>x1906)>>x1907)*x1908);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x1941 = UINT8_MAX;
	int32_t x1942 = INT32_MAX;
	static uint8_t x1943 = 9U;
	uint16_t x1944 = 6U;
	volatile int32_t t63 = 42046;

    t63 = (((x1941>x1942)>>x1943)*x1944);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x2045 = INT16_MAX;
	static int8_t x2047 = 6;
	static int64_t x2048 = INT64_MAX;
	volatile int64_t t64 = 85391447471LL;

    t64 = (((x2045>x2046)>>x2047)*x2048);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x2085 = 4U;
	int16_t x2086 = INT16_MAX;
	uint64_t t65 = 6985282LLU;

    t65 = (((x2085>x2086)>>x2087)*x2088);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x2173 = INT8_MIN;
	uint8_t x2175 = 15U;
	int64_t x2176 = -1LL;
	volatile int64_t t66 = -119157837LL;

    t66 = (((x2173>x2174)>>x2175)*x2176);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x2197 = INT16_MIN;
	int32_t x2198 = INT32_MAX;
	static uint8_t x2199 = 0U;
	int64_t x2200 = INT64_MIN;
	static volatile int64_t t67 = -2162729320034631LL;

    t67 = (((x2197>x2198)>>x2199)*x2200);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x2217 = 21U;
	uint8_t x2219 = 12U;
	int8_t x2220 = INT8_MIN;
	int32_t t68 = 1075195;

    t68 = (((x2217>x2218)>>x2219)*x2220);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x2242 = UINT8_MAX;
	uint16_t x2243 = 1U;
	static int32_t x2244 = INT32_MAX;
	volatile int32_t t69 = 78505664;

    t69 = (((x2241>x2242)>>x2243)*x2244);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x2249 = 3722460LLU;
	volatile int8_t x2250 = 0;
	static uint8_t x2251 = 4U;
	int32_t t70 = 36455;

    t70 = (((x2249>x2250)>>x2251)*x2252);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x2277 = INT64_MIN;
	static uint8_t x2279 = 0U;
	uint16_t x2280 = 7U;
	int32_t t71 = 126;

    t71 = (((x2277>x2278)>>x2279)*x2280);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x2281 = 3U;
	volatile int64_t x2282 = INT64_MIN;
	uint16_t x2283 = 11U;
	int32_t x2284 = -1;

    t72 = (((x2281>x2282)>>x2283)*x2284);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x2289 = 7557379784118419LLU;
	static volatile int64_t x2290 = -1LL;
	static int16_t x2291 = 3;
	uint8_t x2292 = 80U;
	static volatile int32_t t73 = 1;

    t73 = (((x2289>x2290)>>x2291)*x2292);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x2309 = 7785812147001473LL;
	static volatile uint64_t x2310 = 974713181524LLU;
	int64_t x2312 = -1LL;
	int64_t t74 = 9663389568LL;

    t74 = (((x2309>x2310)>>x2311)*x2312);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x2321 = INT16_MIN;
	int64_t x2322 = 334261871433LL;
	int16_t x2323 = 1;
	int64_t t75 = 13889LL;

    t75 = (((x2321>x2322)>>x2323)*x2324);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x2341 = INT8_MAX;
	static int64_t x2342 = INT64_MIN;
	uint32_t x2344 = 201U;

    t76 = (((x2341>x2342)>>x2343)*x2344);

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x2349 = INT16_MIN;
	static uint64_t x2350 = 4010565777775LLU;
	uint8_t x2352 = 81U;
	volatile int32_t t77 = -519965382;

    t77 = (((x2349>x2350)>>x2351)*x2352);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x2358 = 171816025U;
	volatile int64_t x2360 = INT64_MIN;
	static int64_t t78 = 0LL;

    t78 = (((x2357>x2358)>>x2359)*x2360);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x2369 = INT32_MIN;
	uint8_t x2371 = 1U;
	int8_t x2372 = -1;
	int32_t t79 = -2;

    t79 = (((x2369>x2370)>>x2371)*x2372);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x2385 = -1391715;
	int8_t x2386 = INT8_MAX;
	uint16_t x2387 = 1U;
	int64_t x2388 = INT64_MIN;
	int64_t t80 = -4499911844319489832LL;

    t80 = (((x2385>x2386)>>x2387)*x2388);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x2414 = -462;
	uint16_t x2415 = 24U;
	uint64_t t81 = 39608566LLU;

    t81 = (((x2413>x2414)>>x2415)*x2416);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x2466 = -5;
	uint16_t x2467 = 4U;
	static int16_t x2468 = INT16_MAX;
	int32_t t82 = 43227887;

    t82 = (((x2465>x2466)>>x2467)*x2468);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x2557 = INT16_MIN;
	static int64_t x2558 = INT64_MAX;
	volatile int32_t t83 = 27;

    t83 = (((x2557>x2558)>>x2559)*x2560);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x2577 = 0;
	uint8_t x2578 = 16U;
	volatile uint64_t x2579 = 2LLU;
	int64_t x2580 = INT64_MIN;
	volatile int64_t t84 = -203503286LL;

    t84 = (((x2577>x2578)>>x2579)*x2580);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x2653 = -2;
	uint64_t x2654 = 43649050813480LLU;
	static uint8_t x2655 = 6U;
	volatile int32_t t85 = -918973;

    t85 = (((x2653>x2654)>>x2655)*x2656);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x2666 = 870501035U;
	int8_t x2667 = 1;
	static volatile int8_t x2668 = INT8_MAX;
	int32_t t86 = -59060;

    t86 = (((x2665>x2666)>>x2667)*x2668);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x2669 = -1LL;
	int16_t x2670 = -3;
	int32_t x2671 = 7;
	int64_t x2672 = INT64_MAX;
	volatile int64_t t87 = 47854232211099603LL;

    t87 = (((x2669>x2670)>>x2671)*x2672);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x2689 = UINT64_MAX;
	int8_t x2691 = 7;
	int32_t x2692 = INT32_MIN;

    t88 = (((x2689>x2690)>>x2691)*x2692);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint64_t x2697 = 1785998LLU;
	int32_t x2698 = INT32_MIN;
	uint8_t x2699 = 9U;
	int64_t x2700 = INT64_MIN;
	static volatile int64_t t89 = -29807947989LL;

    t89 = (((x2697>x2698)>>x2699)*x2700);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x2702 = INT32_MIN;
	uint16_t x2703 = 15U;
	int32_t x2704 = 2;

    t90 = (((x2701>x2702)>>x2703)*x2704);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x2849 = 33292176154755LLU;
	volatile int32_t x2850 = INT32_MIN;
	int8_t x2851 = 16;
	uint8_t x2852 = 76U;
	int32_t t91 = 1;

    t91 = (((x2849>x2850)>>x2851)*x2852);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x2869 = -1;
	int16_t x2870 = 54;

    t92 = (((x2869>x2870)>>x2871)*x2872);

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x2909 = -1834486059366880436LL;
	static uint8_t x2911 = 20U;
	int64_t x2912 = INT64_MAX;
	int64_t t93 = -272116960963411LL;

    t93 = (((x2909>x2910)>>x2911)*x2912);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x2925 = INT16_MIN;
	volatile int8_t x2926 = INT8_MIN;
	int8_t x2927 = 2;
	int32_t x2928 = INT32_MAX;

    t94 = (((x2925>x2926)>>x2927)*x2928);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x2977 = INT16_MIN;
	static int8_t x2978 = INT8_MIN;
	int8_t x2979 = 0;
	int8_t x2980 = 4;

    t95 = (((x2977>x2978)>>x2979)*x2980);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x2997 = -1;
	int64_t x2998 = -1LL;
	int64_t x3000 = 139504542347448861LL;
	int64_t t96 = 603753281981331785LL;

    t96 = (((x2997>x2998)>>x2999)*x3000);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x3025 = -1;
	int8_t x3026 = -39;
	uint16_t x3027 = 4U;
	int64_t x3028 = INT64_MIN;
	int64_t t97 = -1164069961LL;

    t97 = (((x3025>x3026)>>x3027)*x3028);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x3037 = INT64_MIN;
	uint16_t x3039 = 2U;
	static int16_t x3040 = -7;
	volatile int32_t t98 = -900;

    t98 = (((x3037>x3038)>>x3039)*x3040);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x3105 = 1;
	volatile int16_t x3106 = -1;
	uint8_t x3107 = 27U;
	int8_t x3108 = INT8_MIN;
	int32_t t99 = 2660;

    t99 = (((x3105>x3106)>>x3107)*x3108);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x3145 = UINT16_MAX;
	static volatile uint16_t x3146 = UINT16_MAX;
	uint16_t x3148 = 176U;
	int32_t t100 = -981;

    t100 = (((x3145>x3146)>>x3147)*x3148);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x3205 = 31;
	int8_t x3206 = INT8_MAX;
	uint8_t x3208 = UINT8_MAX;
	int32_t t101 = 80;

    t101 = (((x3205>x3206)>>x3207)*x3208);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x3221 = -1;
	uint8_t x3223 = 9U;
	static int64_t x3224 = -1LL;
	volatile int64_t t102 = -233749580728LL;

    t102 = (((x3221>x3222)>>x3223)*x3224);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x3237 = 1822U;
	int64_t x3238 = INT64_MIN;
	uint8_t x3239 = 1U;
	volatile int8_t x3240 = INT8_MAX;
	volatile int32_t t103 = 1884517;

    t103 = (((x3237>x3238)>>x3239)*x3240);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x3242 = UINT64_MAX;
	static volatile int8_t x3244 = INT8_MAX;

    t104 = (((x3241>x3242)>>x3243)*x3244);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x3257 = INT8_MAX;
	volatile int32_t x3258 = INT32_MIN;
	volatile int32_t x3260 = -12;
	volatile int32_t t105 = 32545;

    t105 = (((x3257>x3258)>>x3259)*x3260);

    if (t105 != -12) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x3357 = -8341LL;
	int8_t x3358 = -1;
	volatile int8_t x3359 = 9;
	volatile uint8_t x3360 = 11U;
	volatile int32_t t106 = -1;

    t106 = (((x3357>x3358)>>x3359)*x3360);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x3418 = INT16_MAX;
	int64_t x3419 = 6LL;
	static int16_t x3420 = INT16_MIN;
	int32_t t107 = -201603;

    t107 = (((x3417>x3418)>>x3419)*x3420);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x3476 = UINT64_MAX;
	uint64_t t108 = 5940789LLU;

    t108 = (((x3473>x3474)>>x3475)*x3476);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x3477 = INT32_MIN;
	int64_t x3478 = 5LL;
	static int16_t x3480 = INT16_MIN;
	int32_t t109 = 198717243;

    t109 = (((x3477>x3478)>>x3479)*x3480);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x3505 = 11LL;
	int64_t x3508 = INT64_MIN;
	volatile int64_t t110 = 1LL;

    t110 = (((x3505>x3506)>>x3507)*x3508);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x3521 = 17999670U;
	int8_t x3522 = INT8_MIN;
	int8_t x3523 = 5;
	static int16_t x3524 = 8;
	volatile int32_t t111 = -1135;

    t111 = (((x3521>x3522)>>x3523)*x3524);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x3526 = INT32_MAX;
	int8_t x3527 = 0;
	volatile int8_t x3528 = -3;
	volatile int32_t t112 = -63016452;

    t112 = (((x3525>x3526)>>x3527)*x3528);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x3573 = -1847408492160447LL;
	uint32_t x3575 = 2U;
	uint32_t x3576 = 1U;
	uint32_t t113 = 4732U;

    t113 = (((x3573>x3574)>>x3575)*x3576);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x3610 = 0;
	int8_t x3611 = 0;
	uint8_t x3612 = 2U;
	volatile int32_t t114 = -16332979;

    t114 = (((x3609>x3610)>>x3611)*x3612);

    if (t114 != 2) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x3625 = INT32_MAX;
	static int16_t x3626 = INT16_MAX;
	int8_t x3628 = INT8_MIN;
	volatile int32_t t115 = -955363761;

    t115 = (((x3625>x3626)>>x3627)*x3628);

    if (t115 != -128) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x3655 = 1U;
	volatile int64_t x3656 = -1LL;
	int64_t t116 = -70674LL;

    t116 = (((x3653>x3654)>>x3655)*x3656);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x3661 = 6;
	uint16_t x3662 = 336U;

    t117 = (((x3661>x3662)>>x3663)*x3664);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x3749 = 868425329U;
	static int64_t x3750 = INT64_MAX;
	uint16_t x3751 = 2U;
	volatile int64_t x3752 = INT64_MIN;
	int64_t t118 = -382896293LL;

    t118 = (((x3749>x3750)>>x3751)*x3752);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x3881 = 2046;
	int32_t x3882 = -42;
	uint32_t x3883 = 0U;
	uint32_t x3884 = UINT32_MAX;
	volatile uint32_t t119 = UINT32_MAX;

    t119 = (((x3881>x3882)>>x3883)*x3884);

    if (t119 != UINT32_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x3885 = -14;
	int32_t x3887 = 23;
	uint64_t x3888 = 31347LLU;
	volatile uint64_t t120 = 15119005LLU;

    t120 = (((x3885>x3886)>>x3887)*x3888);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x3925 = UINT16_MAX;
	static int64_t x3926 = -1851156212222680LL;
	uint8_t x3927 = 31U;
	uint16_t x3928 = 13909U;
	int32_t t121 = -913855356;

    t121 = (((x3925>x3926)>>x3927)*x3928);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x3950 = 84U;
	volatile int16_t x3952 = -1;
	static int32_t t122 = 1004836777;

    t122 = (((x3949>x3950)>>x3951)*x3952);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x3953 = -1;
	volatile uint16_t x3954 = 67U;
	volatile uint32_t x3955 = 0U;
	int8_t x3956 = -1;
	volatile int32_t t123 = 28912314;

    t123 = (((x3953>x3954)>>x3955)*x3956);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x4049 = 1;
	int16_t x4050 = -2723;
	volatile uint8_t x4051 = 9U;
	volatile int32_t t124 = 233056;

    t124 = (((x4049>x4050)>>x4051)*x4052);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x4125 = -30526624736924890LL;
	int8_t x4126 = -27;
	uint32_t x4127 = 13U;
	static volatile int8_t x4128 = -1;

    t125 = (((x4125>x4126)>>x4127)*x4128);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x4218 = INT16_MAX;
	static int64_t x4219 = 9LL;
	int16_t x4220 = -220;
	int32_t t126 = 5;

    t126 = (((x4217>x4218)>>x4219)*x4220);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x4229 = INT32_MAX;
	int8_t x4230 = INT8_MAX;
	volatile uint32_t x4231 = 13U;
	int8_t x4232 = INT8_MIN;
	volatile int32_t t127 = 174320182;

    t127 = (((x4229>x4230)>>x4231)*x4232);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x4257 = UINT32_MAX;
	volatile int16_t x4258 = -8059;
	static volatile uint8_t x4259 = 2U;
	int32_t x4260 = INT32_MIN;
	int32_t t128 = 443;

    t128 = (((x4257>x4258)>>x4259)*x4260);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x4357 = 30841U;
	uint64_t x4358 = 7853859578295435LLU;
	uint8_t x4359 = 16U;
	volatile int32_t x4360 = -2;
	int32_t t129 = -91553;

    t129 = (((x4357>x4358)>>x4359)*x4360);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x4365 = UINT8_MAX;
	uint16_t x4367 = 1U;
	int32_t t130 = 15;

    t130 = (((x4365>x4366)>>x4367)*x4368);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x4381 = -1;
	volatile int64_t x4382 = 1976LL;
	uint32_t x4383 = 17U;
	int32_t t131 = -19130;

    t131 = (((x4381>x4382)>>x4383)*x4384);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x4397 = INT8_MIN;
	int16_t x4398 = INT16_MIN;
	uint8_t x4399 = 24U;
	int32_t x4400 = -1;

    t132 = (((x4397>x4398)>>x4399)*x4400);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x4417 = INT16_MIN;
	int64_t x4418 = -1LL;
	uint8_t x4419 = 5U;
	int16_t x4420 = -1;

    t133 = (((x4417>x4418)>>x4419)*x4420);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x4421 = 19U;
	int8_t x4424 = 0;
	volatile int32_t t134 = -245460;

    t134 = (((x4421>x4422)>>x4423)*x4424);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint32_t x4477 = 55U;
	uint64_t x4479 = 1LLU;
	static int16_t x4480 = 1;

    t135 = (((x4477>x4478)>>x4479)*x4480);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x4485 = 108421234U;
	static uint8_t x4487 = 5U;
	uint32_t x4488 = 67384U;
	static volatile uint32_t t136 = 39U;

    t136 = (((x4485>x4486)>>x4487)*x4488);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x4501 = INT32_MAX;
	static int16_t x4502 = -1;
	volatile int16_t x4503 = 0;
	static uint32_t x4504 = UINT32_MAX;
	uint32_t t137 = UINT32_MAX;

    t137 = (((x4501>x4502)>>x4503)*x4504);

    if (t137 != UINT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x4541 = 14476390;
	int8_t x4542 = 1;
	static uint16_t x4543 = 0U;
	static uint32_t x4544 = 1254919421U;
	volatile uint32_t t138 = 1192U;

    t138 = (((x4541>x4542)>>x4543)*x4544);

    if (t138 != 1254919421U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x4585 = 6;
	uint64_t x4586 = 1021937975448128556LLU;
	volatile uint8_t x4587 = 3U;
	static int8_t x4588 = -1;
	static int32_t t139 = 791974852;

    t139 = (((x4585>x4586)>>x4587)*x4588);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x4589 = UINT8_MAX;
	int32_t x4590 = -1;
	volatile uint16_t x4591 = 11U;
	int8_t x4592 = INT8_MIN;
	int32_t t140 = -8275772;

    t140 = (((x4589>x4590)>>x4591)*x4592);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x4609 = UINT32_MAX;
	int16_t x4611 = 6;
	volatile int32_t t141 = -20728430;

    t141 = (((x4609>x4610)>>x4611)*x4612);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x4613 = INT64_MIN;
	uint8_t x4614 = UINT8_MAX;
	volatile int8_t x4616 = INT8_MIN;
	volatile int32_t t142 = 0;

    t142 = (((x4613>x4614)>>x4615)*x4616);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x4665 = 5;
	volatile uint16_t x4667 = 3U;
	int16_t x4668 = INT16_MIN;
	volatile int32_t t143 = -16;

    t143 = (((x4665>x4666)>>x4667)*x4668);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x4754 = -109;
	static int8_t x4755 = 31;
	uint32_t x4756 = 497U;
	volatile uint32_t t144 = 1507295821U;

    t144 = (((x4753>x4754)>>x4755)*x4756);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x4778 = -13185;
	static uint8_t x4779 = 10U;
	int8_t x4780 = 1;
	volatile int32_t t145 = 445225;

    t145 = (((x4777>x4778)>>x4779)*x4780);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x4825 = -1;
	volatile uint8_t x4827 = 27U;

    t146 = (((x4825>x4826)>>x4827)*x4828);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x5085 = UINT16_MAX;
	int32_t x5086 = -1;
	uint8_t x5087 = 7U;
	int32_t x5088 = -1;
	int32_t t147 = -207603;

    t147 = (((x5085>x5086)>>x5087)*x5088);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x5121 = INT16_MAX;
	int16_t x5123 = 1;
	static int16_t x5124 = 14632;
	volatile int32_t t148 = 12935074;

    t148 = (((x5121>x5122)>>x5123)*x5124);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x5177 = 8;
	int16_t x5179 = 8;
	volatile int64_t t149 = -3064314495LL;

    t149 = (((x5177>x5178)>>x5179)*x5180);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x5213 = 8;
	uint16_t x5214 = 4491U;
	uint8_t x5215 = 1U;
	int16_t x5216 = 14;

    t150 = (((x5213>x5214)>>x5215)*x5216);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x5314 = 5466609878LL;
	int16_t x5315 = 1;
	static uint32_t t151 = 689478U;

    t151 = (((x5313>x5314)>>x5315)*x5316);

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x5333 = 27U;
	static int8_t x5334 = INT8_MAX;
	uint16_t x5335 = 16U;
	int32_t t152 = -77025980;

    t152 = (((x5333>x5334)>>x5335)*x5336);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x5338 = 1768853LL;
	volatile uint8_t x5339 = 4U;
	int8_t x5340 = INT8_MAX;

    t153 = (((x5337>x5338)>>x5339)*x5340);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x5385 = 619U;
	volatile uint8_t x5387 = 2U;
	int64_t x5388 = INT64_MIN;
	int64_t t154 = 6386487320267LL;

    t154 = (((x5385>x5386)>>x5387)*x5388);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x5501 = INT32_MIN;
	int64_t x5502 = 60180778LL;
	volatile int16_t x5503 = 4;
	int8_t x5504 = -58;
	int32_t t155 = -271546868;

    t155 = (((x5501>x5502)>>x5503)*x5504);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x5511 = 0;
	int16_t x5512 = -1;
	int32_t t156 = -242777213;

    t156 = (((x5509>x5510)>>x5511)*x5512);

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x5513 = 1158;
	int8_t x5515 = 8;
	static uint8_t x5516 = 1U;
	int32_t t157 = 377230235;

    t157 = (((x5513>x5514)>>x5515)*x5516);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x5546 = 26040970U;
	uint8_t x5547 = 10U;
	static int32_t t158 = 521672;

    t158 = (((x5545>x5546)>>x5547)*x5548);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x5553 = INT16_MIN;
	uint8_t x5555 = 4U;
	volatile int32_t x5556 = -1;
	volatile int32_t t159 = 0;

    t159 = (((x5553>x5554)>>x5555)*x5556);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x5602 = INT16_MIN;
	uint16_t x5603 = 20U;
	int64_t x5604 = INT64_MIN;
	volatile int64_t t160 = -258461529994931LL;

    t160 = (((x5601>x5602)>>x5603)*x5604);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x5605 = 0U;
	uint16_t x5607 = 5U;
	int8_t x5608 = INT8_MIN;
	static int32_t t161 = -59094;

    t161 = (((x5605>x5606)>>x5607)*x5608);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x5633 = 377U;
	static int8_t x5634 = INT8_MIN;
	uint32_t x5635 = 0U;
	int64_t x5636 = INT64_MAX;

    t162 = (((x5633>x5634)>>x5635)*x5636);

    if (t162 != INT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x5661 = INT16_MIN;
	int64_t x5662 = -1LL;
	volatile int8_t x5663 = 20;
	volatile int16_t x5664 = -1;
	int32_t t163 = 175080;

    t163 = (((x5661>x5662)>>x5663)*x5664);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x5669 = UINT64_MAX;
	uint64_t x5670 = 50LLU;
	static uint16_t x5671 = 31U;
	uint32_t x5672 = 0U;
	static uint32_t t164 = 108171U;

    t164 = (((x5669>x5670)>>x5671)*x5672);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x5741 = INT32_MAX;
	static int32_t x5743 = 28;
	static volatile int64_t x5744 = INT64_MIN;
	volatile int64_t t165 = -4090179LL;

    t165 = (((x5741>x5742)>>x5743)*x5744);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x5761 = 25U;
	uint64_t x5762 = 18534LLU;
	int16_t x5764 = -1;
	volatile int32_t t166 = -203484;

    t166 = (((x5761>x5762)>>x5763)*x5764);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x5789 = -1681;
	uint64_t x5790 = 120134634088127159LLU;
	uint32_t x5791 = 0U;
	static int32_t t167 = 9201271;

    t167 = (((x5789>x5790)>>x5791)*x5792);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x5817 = 3725258367LLU;
	uint8_t x5819 = 9U;
	int16_t x5820 = INT16_MIN;
	int32_t t168 = -26;

    t168 = (((x5817>x5818)>>x5819)*x5820);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x5861 = -411;
	uint16_t x5862 = 32559U;
	uint16_t x5863 = 2U;
	int64_t x5864 = INT64_MIN;
	volatile int64_t t169 = -134428398866021849LL;

    t169 = (((x5861>x5862)>>x5863)*x5864);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x5873 = INT64_MIN;
	int32_t x5874 = INT32_MIN;
	static uint64_t x5875 = 0LLU;

    t170 = (((x5873>x5874)>>x5875)*x5876);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x5881 = UINT64_MAX;
	volatile int64_t x5882 = -1121515030253LL;
	static int32_t t171 = 1472166;

    t171 = (((x5881>x5882)>>x5883)*x5884);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x5913 = INT32_MAX;
	int32_t x5914 = -340695;
	uint16_t x5915 = 8U;
	int64_t x5916 = -1LL;
	volatile int64_t t172 = 3LL;

    t172 = (((x5913>x5914)>>x5915)*x5916);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x5925 = UINT8_MAX;
	uint8_t x5927 = 0U;
	int32_t x5928 = INT32_MIN;
	int32_t t173 = 347;

    t173 = (((x5925>x5926)>>x5927)*x5928);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint64_t x5933 = 28LLU;
	uint32_t x5934 = UINT32_MAX;
	int16_t x5935 = 18;
	uint8_t x5936 = 13U;
	volatile int32_t t174 = -10;

    t174 = (((x5933>x5934)>>x5935)*x5936);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x6001 = 16528846LL;
	int64_t x6002 = INT64_MAX;
	int8_t x6003 = 10;
	uint8_t x6004 = 99U;
	int32_t t175 = 974;

    t175 = (((x6001>x6002)>>x6003)*x6004);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x6021 = -28447098;
	int32_t x6022 = -1;
	uint8_t x6023 = 10U;

    t176 = (((x6021>x6022)>>x6023)*x6024);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x6029 = 74;
	uint32_t x6031 = 0U;
	static volatile uint16_t x6032 = UINT16_MAX;
	static volatile int32_t t177 = -1992129;

    t177 = (((x6029>x6030)>>x6031)*x6032);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x6138 = -1;
	static int32_t x6140 = INT32_MIN;
	volatile int32_t t178 = INT32_MIN;

    t178 = (((x6137>x6138)>>x6139)*x6140);

    if (t178 != INT32_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x6146 = 2786U;
	int16_t x6147 = 0;
	int32_t t179 = INT32_MIN;

    t179 = (((x6145>x6146)>>x6147)*x6148);

    if (t179 != INT32_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x6253 = INT16_MIN;
	volatile int64_t x6254 = -1LL;
	int16_t x6255 = 0;
	int64_t x6256 = INT64_MIN;
	volatile int64_t t180 = 21272578837167LL;

    t180 = (((x6253>x6254)>>x6255)*x6256);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x6261 = 8U;
	int32_t x6262 = -21;
	volatile uint8_t x6263 = 1U;
	static int8_t x6264 = -15;
	volatile int32_t t181 = 184268;

    t181 = (((x6261>x6262)>>x6263)*x6264);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x6309 = 5191332954LLU;
	volatile uint8_t x6311 = 2U;
	uint64_t t182 = 7LLU;

    t182 = (((x6309>x6310)>>x6311)*x6312);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x6377 = INT64_MAX;
	volatile uint16_t x6378 = 29433U;
	int8_t x6379 = 13;
	int8_t x6380 = -1;
	volatile int32_t t183 = -392524750;

    t183 = (((x6377>x6378)>>x6379)*x6380);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x6393 = -1LL;
	int8_t x6394 = 25;
	volatile uint8_t x6395 = 7U;
	int16_t x6396 = 3223;
	volatile int32_t t184 = -303416632;

    t184 = (((x6393>x6394)>>x6395)*x6396);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x6447 = 17;
	static int8_t x6448 = INT8_MIN;
	int32_t t185 = -212;

    t185 = (((x6445>x6446)>>x6447)*x6448);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x6457 = 39;
	int32_t x6458 = INT32_MIN;
	volatile int8_t x6459 = 5;
	uint64_t x6460 = 3001375LLU;
	uint64_t t186 = 26LLU;

    t186 = (((x6457>x6458)>>x6459)*x6460);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x6461 = INT16_MAX;
	int16_t x6462 = 0;
	uint32_t x6463 = 7U;
	int32_t x6464 = 6295857;
	int32_t t187 = -9680;

    t187 = (((x6461>x6462)>>x6463)*x6464);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x6497 = -33LL;
	static int16_t x6498 = INT16_MIN;
	volatile int64_t x6500 = -1LL;
	int64_t t188 = -5097977039LL;

    t188 = (((x6497>x6498)>>x6499)*x6500);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x6561 = 0;
	uint64_t x6562 = 1047554357368531LLU;
	uint8_t x6563 = 0U;
	int16_t x6564 = INT16_MAX;
	int32_t t189 = 281528013;

    t189 = (((x6561>x6562)>>x6563)*x6564);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x6613 = -6834;
	static volatile int64_t x6614 = 359899944977LL;
	int8_t x6615 = 3;
	volatile int32_t t190 = -548817;

    t190 = (((x6613>x6614)>>x6615)*x6616);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x6645 = -1;
	int8_t x6646 = INT8_MIN;
	uint16_t x6647 = 0U;
	int32_t x6648 = -112517245;
	static volatile int32_t t191 = -2;

    t191 = (((x6645>x6646)>>x6647)*x6648);

    if (t191 != -112517245) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x6657 = INT64_MIN;
	volatile int32_t x6658 = INT32_MAX;
	volatile int8_t x6659 = 0;
	volatile int32_t t192 = -737266;

    t192 = (((x6657>x6658)>>x6659)*x6660);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x6677 = -1;
	int16_t x6678 = 1998;
	uint8_t x6679 = 23U;
	volatile int8_t x6680 = -18;
	volatile int32_t t193 = 9;

    t193 = (((x6677>x6678)>>x6679)*x6680);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x6718 = 0;
	static uint16_t x6719 = 5U;
	int32_t t194 = 90668;

    t194 = (((x6717>x6718)>>x6719)*x6720);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x6769 = 7;
	uint64_t x6770 = UINT64_MAX;
	static volatile int8_t x6771 = 2;
	int8_t x6772 = 38;
	volatile int32_t t195 = -7;

    t195 = (((x6769>x6770)>>x6771)*x6772);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x6775 = 3;
	int16_t x6776 = INT16_MIN;
	int32_t t196 = 670518490;

    t196 = (((x6773>x6774)>>x6775)*x6776);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x6777 = INT16_MAX;
	volatile uint16_t x6778 = UINT16_MAX;
	int16_t x6779 = 4;
	volatile int64_t x6780 = INT64_MIN;
	int64_t t197 = -6311195446LL;

    t197 = (((x6777>x6778)>>x6779)*x6780);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x6805 = INT32_MIN;
	int16_t x6807 = 4;
	uint16_t x6808 = UINT16_MAX;
	int32_t t198 = 24669151;

    t198 = (((x6805>x6806)>>x6807)*x6808);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x6817 = UINT64_MAX;
	uint64_t x6818 = 1757064822245975078LLU;
	uint32_t x6819 = 1U;
	uint64_t x6820 = UINT64_MAX;
	uint64_t t199 = 1LLU;

    t199 = (((x6817>x6818)>>x6819)*x6820);

    if (t199 != 0LLU) { NG(); } else { ; }
	
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


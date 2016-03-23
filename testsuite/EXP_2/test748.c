
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

int32_t x1 = INT32_MAX;
uint8_t x2 = 7U;
volatile int32_t t0 = -94897;
volatile int64_t t3 = 79374LL;
uint16_t x65 = 1200U;
int8_t x106 = INT8_MAX;
int64_t x186 = INT64_MAX;
volatile int32_t x199 = 5;
volatile uint32_t t8 = 2003177004U;
static int16_t x227 = INT16_MAX;
static int8_t x297 = INT8_MIN;
uint16_t x300 = 1U;
static uint16_t x301 = UINT16_MAX;
int64_t x302 = 278245206734331LL;
volatile int64_t t12 = -475081984979421423LL;
volatile uint16_t x305 = 22U;
int16_t x451 = -239;
int64_t x469 = -15041LL;
static volatile int8_t x470 = INT8_MIN;
static int64_t x481 = INT64_MIN;
int32_t x484 = 6;
static int64_t x523 = 61LL;
volatile int64_t t19 = -15567LL;
uint64_t x587 = UINT64_MAX;
volatile uint16_t x588 = 7U;
static volatile uint64_t t21 = 580550139114800LLU;
int8_t x619 = INT8_MIN;
int32_t t23 = -15119;
int32_t x678 = INT32_MAX;
static uint32_t x696 = 17U;
static int32_t x707 = INT32_MIN;
int8_t x790 = INT8_MAX;
int16_t x791 = 1;
static uint32_t x851 = 1713U;
static int16_t x855 = INT16_MAX;
int16_t x941 = INT16_MAX;
uint8_t x944 = 0U;
volatile int8_t x1031 = INT8_MAX;
static uint16_t x1032 = 0U;
uint8_t x1124 = 15U;
int16_t x1181 = INT16_MIN;
int8_t x1182 = -1;
uint32_t t45 = 14148588U;
uint32_t x1366 = 905143U;
uint8_t x1368 = 1U;
uint32_t x1391 = 2953011U;
uint16_t x1396 = 0U;
uint64_t x1398 = 11LLU;
uint8_t x1444 = 31U;
int32_t x1451 = -1;
int8_t x1518 = INT8_MIN;
int8_t x1519 = -4;
volatile int32_t x1537 = -1;
volatile int16_t x1538 = -1;
static int64_t x1539 = INT64_MIN;
uint8_t x1542 = 114U;
int16_t x1670 = -1;
int32_t t59 = 48865178;
int16_t x1698 = -396;
uint16_t x1773 = 110U;
volatile int32_t t61 = -10691;
volatile int64_t t63 = 8393311879979110LL;
int8_t x1882 = INT8_MIN;
uint8_t x1884 = 0U;
int8_t x1938 = INT8_MIN;
int32_t x1939 = INT32_MAX;
volatile int32_t t65 = -975950236;
int8_t x1942 = INT8_MIN;
int32_t t66 = 215163197;
uint64_t t68 = 858902LLU;
int64_t x2007 = 8231801LL;
int8_t x2057 = INT8_MAX;
volatile int32_t t71 = 1122690;
uint8_t x2139 = 8U;
volatile int64_t x2149 = 30340LL;
int32_t x2151 = -1636507;
volatile uint64_t x2197 = 55515LLU;
int32_t x2479 = -19;
int32_t t82 = 20;
static int32_t x2511 = 26483547;
int16_t x2515 = -1;
volatile int32_t x2521 = -4;
uint32_t x2522 = 1264256206U;
int8_t x2523 = 16;
uint16_t x2524 = 27U;
static int16_t x2557 = -7177;
volatile uint64_t t89 = 1944LLU;
volatile int8_t x2637 = -42;
volatile uint8_t x2638 = UINT8_MAX;
volatile int64_t t94 = -3LL;
uint64_t t96 = 2691346881333063157LLU;
int64_t x2931 = -22062194LL;
int8_t x2932 = 0;
int64_t x2994 = INT64_MAX;
int64_t t99 = -598258840153116LL;
int64_t x3029 = -263995LL;
uint32_t x3042 = 207U;
uint64_t t101 = 960488724781338LLU;
int32_t x3058 = INT32_MIN;
volatile uint8_t x3060 = 2U;
int64_t t102 = 20LL;
int64_t x3280 = 15LL;
volatile int32_t t106 = 307;
static int64_t x3322 = 530278LL;
int32_t x3357 = INT32_MAX;
volatile int8_t x3397 = INT8_MIN;
int16_t x3399 = INT16_MIN;
static volatile uint64_t x3401 = 201LLU;
int32_t x3402 = INT32_MAX;
static uint8_t x3404 = 12U;
static int64_t x3409 = -1LL;
static uint16_t x3412 = 15U;
int8_t x3500 = 0;
int64_t x3552 = 1LL;
int32_t t118 = -3640;
uint8_t x3601 = UINT8_MAX;
int8_t x3602 = -1;
static volatile uint16_t x3604 = 10U;
uint8_t x3627 = UINT8_MAX;
uint16_t x3690 = UINT16_MAX;
uint8_t x3692 = 15U;
int64_t t121 = -31790361LL;
int32_t x3695 = 427122578;
static volatile uint64_t t122 = 23203LLU;
int16_t x3729 = -1;
static int32_t x3754 = -44;
uint16_t x3873 = 265U;
int8_t x3875 = 5;
uint8_t x3876 = 0U;
static volatile int8_t x3889 = INT8_MAX;
uint32_t t130 = 9974U;
int8_t x4005 = -1;
volatile uint64_t x4006 = 167LLU;
static uint8_t x4008 = 50U;
int8_t x4053 = 10;
volatile int64_t x4131 = -1LL;
uint64_t x4136 = 3LLU;
int64_t t135 = 4159572148LL;
uint8_t x4152 = 1U;
static int64_t t136 = 135941506754LL;
int16_t x4218 = INT16_MIN;
volatile uint32_t x4237 = 1U;
uint8_t x4240 = 4U;
volatile uint32_t t140 = 1U;
static int64_t x4333 = -4446721LL;
int64_t x4335 = 377713LL;
uint16_t x4341 = 1200U;
int64_t x4369 = -1LL;
uint64_t x4370 = 5927LLU;
volatile uint32_t t145 = 695U;
volatile int16_t x4525 = -13;
uint8_t x4600 = 19U;
static int32_t x4624 = 1;
int64_t x4690 = INT64_MAX;
int8_t x4743 = INT8_MAX;
uint32_t t159 = 22467285U;
volatile int8_t x4793 = -2;
volatile uint8_t x4796 = 1U;
uint8_t x4884 = 38U;
int64_t t162 = -5390586LL;
static uint8_t x5068 = 27U;
static uint64_t t165 = 148307LLU;
int32_t t167 = 21;
static uint32_t x5309 = 2U;
volatile uint8_t x5353 = UINT8_MAX;
int32_t t169 = -869338;
int32_t x5361 = -26;
static uint16_t x5364 = 1U;
volatile int16_t x5369 = INT16_MAX;
int16_t x5372 = 1;
int16_t x5433 = INT16_MIN;
static int8_t x5436 = 19;
volatile int32_t t174 = 101702;
int64_t x5522 = INT64_MAX;
static uint8_t x5604 = 6U;
int8_t x5648 = 0;
static uint64_t t177 = 212117LLU;
uint32_t x5702 = UINT32_MAX;
static int16_t x5713 = INT16_MIN;
volatile uint64_t x5715 = UINT64_MAX;
volatile int32_t t180 = -113639;
int16_t x5745 = -1;
volatile int8_t x5746 = -38;
int16_t x5747 = 1252;
uint64_t x5763 = 32911190364876194LLU;
volatile int64_t x5766 = -49658182925740012LL;
uint8_t x5768 = 29U;
int64_t x5785 = -1152540403838060115LL;
uint16_t x5921 = UINT16_MAX;
static int8_t x5923 = INT8_MIN;
volatile uint8_t x5944 = 3U;
int8_t x5945 = -1;
int8_t x5946 = 1;
int8_t x5947 = INT8_MIN;
volatile int32_t t190 = 7028;
static uint8_t x5957 = 19U;
int8_t x5960 = 1;
int8_t x6026 = INT8_MIN;
int32_t x6027 = INT32_MAX;
static int32_t t192 = 141340249;
int64_t x6057 = -36LL;
int32_t x6185 = INT32_MIN;
int8_t x6188 = 56;
volatile int64_t t195 = 58922LL;
uint16_t x6214 = 2U;
static int32_t x6215 = 1801;
volatile uint32_t t198 = 2772U;
uint16_t x6265 = 97U;


void f0(void) {
    	static int32_t x3 = 7943;
	static uint16_t x4 = 13U;

    t0 = ((x1&(x2/x3))<<x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x33 = INT16_MIN;
	uint16_t x34 = 6390U;
	int8_t x35 = 4;
	uint8_t x36 = 1U;
	static volatile int32_t t1 = -3881692;

    t1 = ((x33&(x34/x35))<<x36);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x45 = 26911U;
	int8_t x46 = -1;
	volatile uint64_t x47 = UINT64_MAX;
	volatile uint8_t x48 = 0U;
	uint64_t t2 = 33733991LLU;

    t2 = ((x45&(x46/x47))<<x48);

    if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x53 = 11U;
	volatile uint8_t x54 = 9U;
	volatile int64_t x55 = INT64_MIN;
	static uint32_t x56 = 7U;

    t3 = ((x53&(x54/x55))<<x56);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x66 = 58;
	static volatile uint32_t x67 = UINT32_MAX;
	static uint16_t x68 = 3U;
	volatile uint32_t t4 = 3677U;

    t4 = ((x65&(x66/x67))<<x68);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x105 = -1;
	int64_t x107 = INT64_MAX;
	volatile int8_t x108 = 43;
	volatile int64_t t5 = 428015700941LL;

    t5 = ((x105&(x106/x107))<<x108);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x185 = 12U;
	uint32_t x187 = UINT32_MAX;
	uint16_t x188 = 0U;
	int64_t t6 = 227851397105LL;

    t6 = ((x185&(x186/x187))<<x188);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x197 = -1;
	uint64_t x198 = UINT64_MAX;
	uint8_t x200 = 4U;
	static uint64_t t7 = 1409LLU;

    t7 = ((x197&(x198/x199))<<x200);

    if (t7 != 3689348814741910320LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x221 = -1;
	static uint32_t x222 = UINT32_MAX;
	int32_t x223 = 12;
	uint8_t x224 = 0U;

    t8 = ((x221&(x222/x223))<<x224);

    if (t8 != 357913941U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x225 = -1;
	int8_t x226 = -14;
	int8_t x228 = 1;
	volatile int32_t t9 = -112692;

    t9 = ((x225&(x226/x227))<<x228);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x293 = INT64_MIN;
	int32_t x294 = -8;
	int32_t x295 = -6;
	static uint16_t x296 = 3U;
	int64_t t10 = 151LL;

    t10 = ((x293&(x294/x295))<<x296);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x298 = -1;
	volatile int64_t x299 = INT64_MIN;
	int64_t t11 = -2LL;

    t11 = ((x297&(x298/x299))<<x300);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x303 = INT64_MIN;
	int16_t x304 = 48;

    t12 = ((x301&(x302/x303))<<x304);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x306 = INT8_MIN;
	uint16_t x307 = 788U;
	int16_t x308 = 0;
	volatile int32_t t13 = 13350;

    t13 = ((x305&(x306/x307))<<x308);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x321 = INT16_MIN;
	int8_t x322 = INT8_MIN;
	volatile uint64_t x323 = UINT64_MAX;
	uint8_t x324 = 0U;
	uint64_t t14 = 111409471969276LLU;

    t14 = ((x321&(x322/x323))<<x324);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x449 = 1050932964LLU;
	uint32_t x450 = 232U;
	static int8_t x452 = 5;
	static uint64_t t15 = 81213129917LLU;

    t15 = ((x449&(x450/x451))<<x452);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x461 = 0U;
	int64_t x462 = INT64_MIN;
	int16_t x463 = INT16_MAX;
	static int16_t x464 = 59;
	int64_t t16 = 887190509160056LL;

    t16 = ((x461&(x462/x463))<<x464);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x471 = INT16_MIN;
	volatile uint8_t x472 = 1U;
	int64_t t17 = 2951LL;

    t17 = ((x469&(x470/x471))<<x472);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x482 = 0;
	int16_t x483 = INT16_MIN;
	volatile int64_t t18 = -4513326689850086LL;

    t18 = ((x481&(x482/x483))<<x484);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x521 = UINT32_MAX;
	static volatile int32_t x522 = -1;
	int8_t x524 = 0;

    t19 = ((x521&(x522/x523))<<x524);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x545 = INT16_MIN;
	uint64_t x546 = UINT64_MAX;
	int32_t x547 = INT32_MIN;
	uint8_t x548 = 1U;
	uint64_t t20 = 8977073695881414LLU;

    t20 = ((x545&(x546/x547))<<x548);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x585 = INT64_MAX;
	uint16_t x586 = UINT16_MAX;

    t21 = ((x585&(x586/x587))<<x588);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x597 = 2427;
	uint8_t x598 = 0U;
	int8_t x599 = INT8_MIN;
	volatile int32_t x600 = 15;
	volatile int32_t t22 = 502;

    t22 = ((x597&(x598/x599))<<x600);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x617 = INT32_MIN;
	int16_t x618 = INT16_MIN;
	uint8_t x620 = 3U;

    t23 = ((x617&(x618/x619))<<x620);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x637 = UINT16_MAX;
	int16_t x638 = INT16_MAX;
	uint64_t x639 = UINT64_MAX;
	uint8_t x640 = 30U;
	volatile uint64_t t24 = 12324633LLU;

    t24 = ((x637&(x638/x639))<<x640);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x677 = 16U;
	int32_t x679 = -1;
	uint32_t x680 = 0U;
	uint32_t t25 = 15414508U;

    t25 = ((x677&(x678/x679))<<x680);

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x689 = 48U;
	static uint8_t x690 = 19U;
	int8_t x691 = -6;
	int8_t x692 = 2;
	int32_t t26 = 8;

    t26 = ((x689&(x690/x691))<<x692);

    if (t26 != 192) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x693 = -103479LL;
	int64_t x694 = INT64_MAX;
	static volatile uint32_t x695 = UINT32_MAX;
	static int64_t t27 = 20464LL;

    t27 = ((x693&(x694/x695))<<x696);

    if (t27 != 281474976710656LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x705 = INT32_MIN;
	volatile uint64_t x706 = UINT64_MAX;
	static int16_t x708 = 2;
	uint64_t t28 = 15079439446LLU;

    t28 = ((x705&(x706/x707))<<x708);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x729 = 0;
	uint64_t x730 = 354938LLU;
	int32_t x731 = 195750033;
	static int16_t x732 = 2;
	uint64_t t29 = 143190137119052626LLU;

    t29 = ((x729&(x730/x731))<<x732);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x789 = 10971U;
	int16_t x792 = 0;
	volatile int32_t t30 = -15;

    t30 = ((x789&(x790/x791))<<x792);

    if (t30 != 91) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x849 = INT32_MIN;
	int32_t x850 = INT32_MIN;
	uint16_t x852 = 7U;
	volatile uint32_t t31 = 236013301U;

    t31 = ((x849&(x850/x851))<<x852);

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x853 = INT16_MIN;
	static int32_t x854 = -21374;
	uint8_t x856 = 0U;
	int32_t t32 = -4;

    t32 = ((x853&(x854/x855))<<x856);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x942 = INT16_MAX;
	uint32_t x943 = 1803812U;
	volatile uint32_t t33 = 58220U;

    t33 = ((x941&(x942/x943))<<x944);

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x953 = INT32_MAX;
	int64_t x954 = -10018LL;
	uint32_t x955 = UINT32_MAX;
	volatile uint8_t x956 = 6U;
	int64_t t34 = 1LL;

    t34 = ((x953&(x954/x955))<<x956);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x977 = -41265944;
	static int8_t x978 = -1;
	volatile int64_t x979 = INT64_MIN;
	int16_t x980 = 11;
	volatile int64_t t35 = -5LL;

    t35 = ((x977&(x978/x979))<<x980);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x989 = 5U;
	int8_t x990 = INT8_MIN;
	static int8_t x991 = -1;
	uint8_t x992 = 7U;
	static int32_t t36 = 456759459;

    t36 = ((x989&(x990/x991))<<x992);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int32_t x1005 = INT32_MIN;
	static int8_t x1006 = 0;
	int8_t x1007 = -1;
	static uint16_t x1008 = 16U;
	int32_t t37 = -538288;

    t37 = ((x1005&(x1006/x1007))<<x1008);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x1029 = INT16_MAX;
	int8_t x1030 = -6;
	int32_t t38 = -7023179;

    t38 = ((x1029&(x1030/x1031))<<x1032);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x1041 = -118304643;
	volatile uint64_t x1042 = 10LLU;
	volatile int8_t x1043 = 1;
	static int16_t x1044 = 6;
	volatile uint64_t t39 = 2750115654527527849LLU;

    t39 = ((x1041&(x1042/x1043))<<x1044);

    if (t39 != 512LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x1057 = INT8_MIN;
	static uint64_t x1058 = 72860LLU;
	static uint16_t x1059 = 120U;
	uint8_t x1060 = 3U;
	static uint64_t t40 = 7404058262LLU;

    t40 = ((x1057&(x1058/x1059))<<x1060);

    if (t40 != 4096LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x1121 = -1;
	volatile int8_t x1122 = INT8_MAX;
	static int64_t x1123 = 11LL;
	volatile int64_t t41 = 31826LL;

    t41 = ((x1121&(x1122/x1123))<<x1124);

    if (t41 != 360448LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x1137 = 22066881917171LL;
	volatile int16_t x1138 = INT16_MIN;
	int32_t x1139 = 2794412;
	uint8_t x1140 = 3U;
	int64_t t42 = 30606936725136LL;

    t42 = ((x1137&(x1138/x1139))<<x1140);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x1183 = INT32_MAX;
	uint16_t x1184 = 1U;
	int32_t t43 = -37440;

    t43 = ((x1181&(x1182/x1183))<<x1184);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x1257 = 1489189U;
	volatile int64_t x1258 = 65909884800319LL;
	int32_t x1259 = INT32_MIN;
	int8_t x1260 = 0;
	int64_t t44 = 11389795312920901LL;

    t44 = ((x1257&(x1258/x1259))<<x1260);

    if (t44 != 1476613LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x1265 = -1;
	uint32_t x1266 = 3724U;
	static int16_t x1267 = -56;
	int8_t x1268 = 22;

    t45 = ((x1265&(x1266/x1267))<<x1268);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint16_t x1285 = 4783U;
	int64_t x1286 = INT64_MAX;
	int64_t x1287 = INT64_MIN;
	int8_t x1288 = 5;
	volatile int64_t t46 = -110540654LL;

    t46 = ((x1285&(x1286/x1287))<<x1288);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x1365 = -1;
	volatile uint64_t x1367 = 241174858803670876LLU;
	volatile uint64_t t47 = 6116053LLU;

    t47 = ((x1365&(x1366/x1367))<<x1368);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x1373 = -1;
	uint32_t x1374 = 48091U;
	int16_t x1375 = -1;
	volatile uint16_t x1376 = 5U;
	volatile uint32_t t48 = 0U;

    t48 = ((x1373&(x1374/x1375))<<x1376);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x1381 = INT8_MAX;
	volatile int8_t x1382 = INT8_MAX;
	volatile int64_t x1383 = INT64_MAX;
	int8_t x1384 = 19;
	volatile int64_t t49 = -12290027242LL;

    t49 = ((x1381&(x1382/x1383))<<x1384);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x1389 = 2U;
	int64_t x1390 = -1LL;
	int32_t x1392 = 3;
	volatile int64_t t50 = -47756733756205LL;

    t50 = ((x1389&(x1390/x1391))<<x1392);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x1393 = 797U;
	int32_t x1394 = INT32_MAX;
	int8_t x1395 = -3;
	static int32_t t51 = 4;

    t51 = ((x1393&(x1394/x1395))<<x1396);

    if (t51 != 276) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x1397 = UINT32_MAX;
	int8_t x1399 = -1;
	uint16_t x1400 = 0U;
	volatile uint64_t t52 = 1352125686007122068LLU;

    t52 = ((x1397&(x1398/x1399))<<x1400);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x1441 = INT16_MAX;
	static int8_t x1442 = INT8_MAX;
	volatile int16_t x1443 = INT16_MIN;
	int32_t t53 = 63;

    t53 = ((x1441&(x1442/x1443))<<x1444);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x1449 = INT32_MIN;
	uint32_t x1450 = UINT32_MAX;
	uint8_t x1452 = 1U;
	uint32_t t54 = 52U;

    t54 = ((x1449&(x1450/x1451))<<x1452);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x1517 = INT8_MAX;
	volatile uint8_t x1520 = 4U;
	static volatile int32_t t55 = -22156;

    t55 = ((x1517&(x1518/x1519))<<x1520);

    if (t55 != 512) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int16_t x1540 = 62;
	volatile int64_t t56 = -130272LL;

    t56 = ((x1537&(x1538/x1539))<<x1540);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x1541 = INT64_MAX;
	static int8_t x1543 = 5;
	uint8_t x1544 = 12U;
	static volatile int64_t t57 = 0LL;

    t57 = ((x1541&(x1542/x1543))<<x1544);

    if (t57 != 90112LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x1629 = 205222313U;
	uint64_t x1630 = 4320514366591LLU;
	int8_t x1631 = -2;
	uint32_t x1632 = 7U;
	uint64_t t58 = 2976LLU;

    t58 = ((x1629&(x1630/x1631))<<x1632);

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x1669 = -11;
	static int8_t x1671 = 60;
	int16_t x1672 = 5;

    t59 = ((x1669&(x1670/x1671))<<x1672);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x1697 = INT8_MIN;
	int8_t x1699 = -1;
	uint8_t x1700 = 2U;
	static int32_t t60 = -7703413;

    t60 = ((x1697&(x1698/x1699))<<x1700);

    if (t60 != 1536) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x1774 = 36U;
	int16_t x1775 = INT16_MAX;
	int16_t x1776 = 0;

    t61 = ((x1773&(x1774/x1775))<<x1776);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x1829 = 2U;
	volatile uint8_t x1830 = UINT8_MAX;
	int8_t x1831 = INT8_MIN;
	int32_t x1832 = 1;
	volatile int32_t t62 = 358426444;

    t62 = ((x1829&(x1830/x1831))<<x1832);

    if (t62 != 4) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x1853 = UINT32_MAX;
	int32_t x1854 = INT32_MIN;
	int64_t x1855 = INT64_MIN;
	uint8_t x1856 = 6U;

    t63 = ((x1853&(x1854/x1855))<<x1856);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x1881 = -1LL;
	static int32_t x1883 = -1;
	int64_t t64 = -12630626508579665LL;

    t64 = ((x1881&(x1882/x1883))<<x1884);

    if (t64 != 128LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x1937 = 2;
	int16_t x1940 = 0;

    t65 = ((x1937&(x1938/x1939))<<x1940);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x1941 = UINT8_MAX;
	static uint16_t x1943 = 5U;
	volatile uint8_t x1944 = 5U;

    t66 = ((x1941&(x1942/x1943))<<x1944);

    if (t66 != 7392) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x1985 = -369747590;
	uint8_t x1986 = 1U;
	uint16_t x1987 = 7456U;
	uint32_t x1988 = 2U;
	volatile int32_t t67 = -2307207;

    t67 = ((x1985&(x1986/x1987))<<x1988);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x1989 = -2677968LL;
	uint64_t x1990 = 1214466084520194022LLU;
	int16_t x1991 = 9;
	static volatile int8_t x1992 = 14;

    t68 = ((x1989&(x1990/x1991))<<x1992);

    if (t68 != 15705491716495114240LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x2005 = INT64_MIN;
	volatile uint16_t x2006 = 217U;
	uint16_t x2008 = 14U;
	int64_t t69 = 104231280355627664LL;

    t69 = ((x2005&(x2006/x2007))<<x2008);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x2058 = 94995220107636524LL;
	int16_t x2059 = -1;
	uint8_t x2060 = 3U;
	volatile int64_t t70 = 354LL;

    t70 = ((x2057&(x2058/x2059))<<x2060);

    if (t70 != 672LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x2101 = 7123U;
	int16_t x2102 = INT16_MAX;
	static volatile uint8_t x2103 = 14U;
	volatile uint16_t x2104 = 2U;

    t71 = ((x2101&(x2102/x2103))<<x2104);

    if (t71 != 9216) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x2137 = 1;
	static uint32_t x2138 = UINT32_MAX;
	int64_t x2140 = 0LL;
	volatile uint32_t t72 = 396784U;

    t72 = ((x2137&(x2138/x2139))<<x2140);

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x2150 = INT32_MIN;
	int8_t x2152 = 11;
	volatile int64_t t73 = -1927778827LL;

    t73 = ((x2149&(x2150/x2151))<<x2152);

    if (t73 != 2097152LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x2181 = INT8_MAX;
	static volatile int8_t x2182 = -1;
	static uint16_t x2183 = UINT16_MAX;
	uint32_t x2184 = 1U;
	volatile int32_t t74 = 99;

    t74 = ((x2181&(x2182/x2183))<<x2184);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x2198 = 31389;
	int8_t x2199 = -1;
	uint8_t x2200 = 3U;
	volatile uint64_t t75 = 913921LLU;

    t75 = ((x2197&(x2198/x2199))<<x2200);

    if (t75 != 262680LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x2249 = 44U;
	int16_t x2250 = -1;
	uint8_t x2251 = 3U;
	int32_t x2252 = 26;
	int32_t t76 = 1637241;

    t76 = ((x2249&(x2250/x2251))<<x2252);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x2301 = -57;
	int16_t x2302 = INT16_MIN;
	volatile uint64_t x2303 = UINT64_MAX;
	static uint8_t x2304 = 1U;
	uint64_t t77 = 17357871184543836LLU;

    t77 = ((x2301&(x2302/x2303))<<x2304);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x2337 = 528LLU;
	uint32_t x2338 = 77084972U;
	static int64_t x2339 = INT64_MAX;
	uint8_t x2340 = 1U;
	uint64_t t78 = 58LLU;

    t78 = ((x2337&(x2338/x2339))<<x2340);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x2421 = 1693;
	int64_t x2422 = INT64_MAX;
	int32_t x2423 = INT32_MAX;
	uint8_t x2424 = 3U;
	static int64_t t79 = -18305804412LL;

    t79 = ((x2421&(x2422/x2423))<<x2424);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x2465 = INT32_MIN;
	volatile uint32_t x2466 = 13897987U;
	uint32_t x2467 = UINT32_MAX;
	int8_t x2468 = 16;
	uint32_t t80 = 36583U;

    t80 = ((x2465&(x2466/x2467))<<x2468);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x2477 = 5797LLU;
	int64_t x2478 = INT64_MIN;
	uint32_t x2480 = 2U;
	volatile uint64_t t81 = 2937817517LLU;

    t81 = ((x2477&(x2478/x2479))<<x2480);

    if (t81 != 2048LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x2493 = -1;
	int32_t x2494 = INT32_MIN;
	volatile int32_t x2495 = INT32_MIN;
	static int64_t x2496 = 0LL;

    t82 = ((x2493&(x2494/x2495))<<x2496);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x2509 = 378U;
	static int16_t x2510 = -1;
	uint8_t x2512 = 1U;
	uint32_t t83 = 252218U;

    t83 = ((x2509&(x2510/x2511))<<x2512);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x2513 = UINT8_MAX;
	int8_t x2514 = 1;
	volatile uint64_t x2516 = 4LLU;
	volatile int32_t t84 = 0;

    t84 = ((x2513&(x2514/x2515))<<x2516);

    if (t84 != 4080) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint32_t t85 = 78201U;

    t85 = ((x2521&(x2522/x2523))<<x2524);

    if (t85 != 1610612736U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x2545 = 0U;
	static int8_t x2546 = INT8_MIN;
	static int32_t x2547 = INT32_MIN;
	uint8_t x2548 = 0U;
	static int32_t t86 = 0;

    t86 = ((x2545&(x2546/x2547))<<x2548);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x2558 = 48;
	volatile int16_t x2559 = INT16_MIN;
	int16_t x2560 = 0;
	int32_t t87 = 9534227;

    t87 = ((x2557&(x2558/x2559))<<x2560);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x2601 = INT8_MIN;
	int16_t x2602 = INT16_MAX;
	volatile uint32_t x2603 = 40052U;
	static uint8_t x2604 = 15U;
	uint32_t t88 = 19U;

    t88 = ((x2601&(x2602/x2603))<<x2604);

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x2633 = INT16_MIN;
	volatile int64_t x2634 = 35224129294048LL;
	volatile uint64_t x2635 = 2623190LLU;
	int8_t x2636 = 14;

    t89 = ((x2633&(x2634/x2635))<<x2636);

    if (t89 != 219580203008LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x2639 = INT8_MAX;
	int16_t x2640 = 5;
	volatile int32_t t90 = 446;

    t90 = ((x2637&(x2638/x2639))<<x2640);

    if (t90 != 64) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x2669 = INT16_MIN;
	int64_t x2670 = -1LL;
	uint8_t x2671 = UINT8_MAX;
	static int8_t x2672 = 1;
	volatile int64_t t91 = -13142LL;

    t91 = ((x2669&(x2670/x2671))<<x2672);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x2761 = INT16_MAX;
	static uint16_t x2762 = UINT16_MAX;
	int16_t x2763 = 561;
	int8_t x2764 = 0;
	volatile int32_t t92 = -421;

    t92 = ((x2761&(x2762/x2763))<<x2764);

    if (t92 != 116) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x2813 = 1U;
	static uint64_t x2814 = 221412172LLU;
	uint16_t x2815 = 1U;
	uint8_t x2816 = 0U;
	uint64_t t93 = 15944912267LLU;

    t93 = ((x2813&(x2814/x2815))<<x2816);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x2833 = INT64_MAX;
	uint32_t x2834 = UINT32_MAX;
	uint32_t x2835 = 18593447U;
	volatile uint8_t x2836 = 12U;

    t94 = ((x2833&(x2834/x2835))<<x2836);

    if (t94 != 942080LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x2913 = -1;
	volatile uint8_t x2914 = 3U;
	static int16_t x2915 = INT16_MAX;
	int8_t x2916 = 3;
	volatile int32_t t95 = -22004;

    t95 = ((x2913&(x2914/x2915))<<x2916);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x2917 = 4455U;
	int32_t x2918 = INT32_MAX;
	uint64_t x2919 = UINT64_MAX;
	int64_t x2920 = 1LL;

    t96 = ((x2917&(x2918/x2919))<<x2920);

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x2929 = UINT8_MAX;
	volatile int64_t x2930 = INT64_MAX;
	volatile int64_t t97 = 130658394180071LL;

    t97 = ((x2929&(x2930/x2931))<<x2932);

    if (t97 != 97LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x2961 = INT16_MIN;
	int32_t x2962 = -9588;
	int16_t x2963 = INT16_MIN;
	static int8_t x2964 = 1;
	static volatile int32_t t98 = 3699822;

    t98 = ((x2961&(x2962/x2963))<<x2964);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x2993 = INT16_MAX;
	int64_t x2995 = -501730665552471LL;
	uint16_t x2996 = 19U;

    t99 = ((x2993&(x2994/x2995))<<x2996);

    if (t99 != 7541882880LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x3030 = 15U;
	uint64_t x3031 = UINT64_MAX;
	uint32_t x3032 = 0U;
	static volatile uint64_t t100 = 5910216LLU;

    t100 = ((x3029&(x3030/x3031))<<x3032);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x3041 = 45035255016051LLU;
	volatile int16_t x3043 = INT16_MIN;
	static int8_t x3044 = 0;

    t101 = ((x3041&(x3042/x3043))<<x3044);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x3057 = INT8_MIN;
	int64_t x3059 = INT64_MIN;

    t102 = ((x3057&(x3058/x3059))<<x3060);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x3105 = INT32_MAX;
	static int32_t x3106 = INT32_MAX;
	static int64_t x3107 = -1LL;
	uint32_t x3108 = 8U;
	int64_t t103 = -1763871253558339201LL;

    t103 = ((x3105&(x3106/x3107))<<x3108);

    if (t103 != 256LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x3161 = 69012455U;
	int64_t x3162 = INT64_MAX;
	int32_t x3163 = INT32_MIN;
	int64_t x3164 = 6LL;
	volatile int64_t t104 = 17104137034525051LL;

    t104 = ((x3161&(x3162/x3163))<<x3164);

    if (t104 != 64LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x3177 = 32745944814642LLU;
	volatile int8_t x3178 = 1;
	volatile int16_t x3179 = INT16_MAX;
	int16_t x3180 = 27;
	volatile uint64_t t105 = 955044145355492015LLU;

    t105 = ((x3177&(x3178/x3179))<<x3180);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x3277 = INT32_MAX;
	int16_t x3278 = INT16_MAX;
	static volatile uint8_t x3279 = UINT8_MAX;

    t106 = ((x3277&(x3278/x3279))<<x3280);

    if (t106 != 4194304) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x3321 = 136204521179767LLU;
	uint16_t x3323 = 159U;
	uint8_t x3324 = 62U;
	static uint64_t t107 = 12LLU;

    t107 = ((x3321&(x3322/x3323))<<x3324);

    if (t107 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x3358 = -1;
	int64_t x3359 = INT64_MAX;
	volatile uint8_t x3360 = 0U;
	volatile int64_t t108 = -1629825LL;

    t108 = ((x3357&(x3358/x3359))<<x3360);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x3385 = -46;
	uint16_t x3386 = 673U;
	int64_t x3387 = INT64_MAX;
	uint8_t x3388 = 31U;
	int64_t t109 = -4207462398419648LL;

    t109 = ((x3385&(x3386/x3387))<<x3388);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x3393 = 116U;
	static uint64_t x3394 = 1833915749462985866LLU;
	volatile int8_t x3395 = -12;
	uint32_t x3396 = 5U;
	uint64_t t110 = 4819569742LLU;

    t110 = ((x3393&(x3394/x3395))<<x3396);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x3398 = 198640590405962LLU;
	uint8_t x3400 = 2U;
	uint64_t t111 = 76582LLU;

    t111 = ((x3397&(x3398/x3399))<<x3400);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x3403 = 10059868763232LLU;
	volatile uint64_t t112 = 140LLU;

    t112 = ((x3401&(x3402/x3403))<<x3404);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x3410 = -1LL;
	int32_t x3411 = -769664656;
	volatile int64_t t113 = -2561232706497849824LL;

    t113 = ((x3409&(x3410/x3411))<<x3412);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x3477 = INT32_MIN;
	uint32_t x3478 = UINT32_MAX;
	int32_t x3479 = INT32_MAX;
	uint8_t x3480 = 0U;
	uint32_t t114 = 33U;

    t114 = ((x3477&(x3478/x3479))<<x3480);

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x3497 = UINT8_MAX;
	int32_t x3498 = -1;
	int8_t x3499 = INT8_MAX;
	static volatile int32_t t115 = 0;

    t115 = ((x3497&(x3498/x3499))<<x3500);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x3549 = -1;
	static int8_t x3550 = 38;
	volatile int8_t x3551 = INT8_MAX;
	int32_t t116 = 453;

    t116 = ((x3549&(x3550/x3551))<<x3552);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x3557 = -69729;
	int16_t x3558 = INT16_MAX;
	int16_t x3559 = INT16_MIN;
	static uint8_t x3560 = 15U;
	int32_t t117 = -658219;

    t117 = ((x3557&(x3558/x3559))<<x3560);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x3593 = -1;
	int8_t x3594 = INT8_MIN;
	uint8_t x3595 = UINT8_MAX;
	uint8_t x3596 = 3U;

    t118 = ((x3593&(x3594/x3595))<<x3596);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x3603 = UINT16_MAX;
	int32_t t119 = 163763580;

    t119 = ((x3601&(x3602/x3603))<<x3604);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x3625 = -1;
	int32_t x3626 = -1;
	uint16_t x3628 = 20U;
	static int32_t t120 = 4784;

    t120 = ((x3625&(x3626/x3627))<<x3628);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x3689 = INT64_MAX;
	int64_t x3691 = INT64_MIN;

    t121 = ((x3689&(x3690/x3691))<<x3692);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x3693 = 3993708285526LLU;
	int8_t x3694 = -1;
	uint8_t x3696 = 54U;

    t122 = ((x3693&(x3694/x3695))<<x3696);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x3730 = 534478863136651587LLU;
	uint32_t x3731 = 256259U;
	static int8_t x3732 = 38;
	volatile uint64_t t123 = 990LLU;

    t123 = ((x3729&(x3730/x3731))<<x3732);

    if (t123 != 5919544929184382976LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint64_t x3753 = 335248LLU;
	volatile uint32_t x3755 = 61U;
	uint8_t x3756 = 2U;
	uint64_t t124 = 11LLU;

    t124 = ((x3753&(x3754/x3755))<<x3756);

    if (t124 != 28736LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x3765 = -1;
	uint8_t x3766 = UINT8_MAX;
	static uint8_t x3767 = UINT8_MAX;
	volatile uint16_t x3768 = 0U;
	static int32_t t125 = -10726638;

    t125 = ((x3765&(x3766/x3767))<<x3768);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x3861 = 3U;
	uint8_t x3862 = 59U;
	int32_t x3863 = -1;
	int16_t x3864 = 1;
	int32_t t126 = -27722082;

    t126 = ((x3861&(x3862/x3863))<<x3864);

    if (t126 != 2) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x3874 = -1;
	int32_t t127 = 48103;

    t127 = ((x3873&(x3874/x3875))<<x3876);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x3890 = -5096;
	int64_t x3891 = INT64_MIN;
	int16_t x3892 = 22;
	volatile int64_t t128 = -36760290308135968LL;

    t128 = ((x3889&(x3890/x3891))<<x3892);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x3893 = 59;
	static int8_t x3894 = INT8_MIN;
	int32_t x3895 = 17763;
	int64_t x3896 = 0LL;
	volatile int32_t t129 = -1;

    t129 = ((x3893&(x3894/x3895))<<x3896);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x3901 = 15063U;
	static volatile int32_t x3902 = INT32_MAX;
	static int8_t x3903 = -3;
	int8_t x3904 = 13;

    t130 = ((x3901&(x3902/x3903))<<x3904);

    if (t130 != 34258944U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x3941 = 67U;
	uint64_t x3942 = 1133353LLU;
	int8_t x3943 = INT8_MIN;
	uint8_t x3944 = 0U;
	uint64_t t131 = 21LLU;

    t131 = ((x3941&(x3942/x3943))<<x3944);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x4007 = -1LL;
	volatile uint64_t t132 = 173169477742LLU;

    t132 = ((x4005&(x4006/x4007))<<x4008);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x4054 = INT64_MAX;
	volatile int64_t x4055 = INT64_MIN;
	static int8_t x4056 = 3;
	volatile int64_t t133 = 501472237929362LL;

    t133 = ((x4053&(x4054/x4055))<<x4056);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x4129 = INT32_MIN;
	int16_t x4130 = -12255;
	static int16_t x4132 = 0;
	int64_t t134 = 1348364LL;

    t134 = ((x4129&(x4130/x4131))<<x4132);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x4133 = INT64_MIN;
	volatile int16_t x4134 = INT16_MIN;
	int32_t x4135 = INT32_MIN;

    t135 = ((x4133&(x4134/x4135))<<x4136);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x4149 = INT16_MIN;
	int16_t x4150 = INT16_MIN;
	int64_t x4151 = INT64_MIN;

    t136 = ((x4149&(x4150/x4151))<<x4152);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x4181 = INT32_MIN;
	int16_t x4182 = INT16_MAX;
	int8_t x4183 = INT8_MAX;
	int8_t x4184 = 0;
	volatile int32_t t137 = -182;

    t137 = ((x4181&(x4182/x4183))<<x4184);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x4217 = 12U;
	volatile int64_t x4219 = INT64_MAX;
	static uint16_t x4220 = 1U;
	int64_t t138 = -483895455579LL;

    t138 = ((x4217&(x4218/x4219))<<x4220);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x4225 = 67487942683LLU;
	uint16_t x4226 = UINT16_MAX;
	static int32_t x4227 = INT32_MAX;
	uint16_t x4228 = 23U;
	volatile uint64_t t139 = 410190LLU;

    t139 = ((x4225&(x4226/x4227))<<x4228);

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x4238 = UINT8_MAX;
	int32_t x4239 = -123592;

    t140 = ((x4237&(x4238/x4239))<<x4240);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x4253 = 27166079;
	int32_t x4254 = INT32_MAX;
	volatile int64_t x4255 = -1LL;
	uint32_t x4256 = 7U;
	int64_t t141 = 1047936916258LL;

    t141 = ((x4253&(x4254/x4255))<<x4256);

    if (t141 != 128LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x4334 = -21;
	uint8_t x4336 = 1U;
	volatile int64_t t142 = 265504LL;

    t142 = ((x4333&(x4334/x4335))<<x4336);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint16_t x4342 = 120U;
	int32_t x4343 = INT32_MAX;
	static volatile uint8_t x4344 = 27U;
	volatile int32_t t143 = 115;

    t143 = ((x4341&(x4342/x4343))<<x4344);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x4371 = -1;
	static uint8_t x4372 = 6U;
	static uint64_t t144 = 3388046905578LLU;

    t144 = ((x4369&(x4370/x4371))<<x4372);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x4381 = INT16_MIN;
	uint8_t x4382 = UINT8_MAX;
	volatile uint32_t x4383 = 3U;
	uint8_t x4384 = 21U;

    t145 = ((x4381&(x4382/x4383))<<x4384);

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x4449 = 1U;
	uint64_t x4450 = 25232479048531LLU;
	static int32_t x4451 = -1;
	volatile uint16_t x4452 = 19U;
	uint64_t t146 = 22LLU;

    t146 = ((x4449&(x4450/x4451))<<x4452);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x4465 = 57U;
	int16_t x4466 = 2;
	volatile int8_t x4467 = INT8_MIN;
	uint8_t x4468 = 0U;
	int32_t t147 = 9206;

    t147 = ((x4465&(x4466/x4467))<<x4468);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x4501 = -10682325LL;
	static int8_t x4502 = INT8_MAX;
	static uint16_t x4503 = 7U;
	int8_t x4504 = 51;
	volatile int64_t t148 = -739LL;

    t148 = ((x4501&(x4502/x4503))<<x4504);

    if (t148 != 4503599627370496LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x4526 = 10;
	int8_t x4527 = INT8_MIN;
	int32_t x4528 = 28;
	int32_t t149 = 15;

    t149 = ((x4525&(x4526/x4527))<<x4528);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x4529 = INT64_MIN;
	volatile uint8_t x4530 = UINT8_MAX;
	int64_t x4531 = INT64_MIN;
	volatile int16_t x4532 = 0;
	volatile int64_t t150 = -129LL;

    t150 = ((x4529&(x4530/x4531))<<x4532);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x4533 = INT64_MIN;
	int16_t x4534 = INT16_MAX;
	int16_t x4535 = INT16_MIN;
	uint32_t x4536 = 2U;
	volatile int64_t t151 = -45LL;

    t151 = ((x4533&(x4534/x4535))<<x4536);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x4577 = -16;
	uint64_t x4578 = UINT64_MAX;
	int16_t x4579 = 2;
	int64_t x4580 = 0LL;
	static volatile uint64_t t152 = 113909036184854621LLU;

    t152 = ((x4577&(x4578/x4579))<<x4580);

    if (t152 != 9223372036854775792LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x4597 = UINT32_MAX;
	int8_t x4598 = 19;
	static int32_t x4599 = 137672;
	static volatile uint32_t t153 = 83U;

    t153 = ((x4597&(x4598/x4599))<<x4600);

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x4621 = INT16_MIN;
	uint64_t x4622 = 151335288LLU;
	int64_t x4623 = INT64_MIN;
	uint64_t t154 = 7167314368LLU;

    t154 = ((x4621&(x4622/x4623))<<x4624);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint8_t x4645 = 92U;
	uint8_t x4646 = 2U;
	int8_t x4647 = 1;
	uint32_t x4648 = 18U;
	int32_t t155 = -1;

    t155 = ((x4645&(x4646/x4647))<<x4648);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x4677 = INT64_MAX;
	int8_t x4678 = -1;
	int32_t x4679 = INT32_MIN;
	int16_t x4680 = 3;
	volatile int64_t t156 = 354560029501190LL;

    t156 = ((x4677&(x4678/x4679))<<x4680);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x4689 = 5;
	int32_t x4691 = INT32_MAX;
	int16_t x4692 = 27;
	int64_t t157 = -3378988LL;

    t157 = ((x4689&(x4690/x4691))<<x4692);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x4697 = 38U;
	int8_t x4698 = INT8_MAX;
	uint64_t x4699 = UINT64_MAX;
	volatile uint16_t x4700 = 0U;
	static volatile uint64_t t158 = 57570483246LLU;

    t158 = ((x4697&(x4698/x4699))<<x4700);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x4741 = 38;
	uint32_t x4742 = 12761U;
	int8_t x4744 = 0;

    t159 = ((x4741&(x4742/x4743))<<x4744);

    if (t159 != 36U) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x4794 = INT64_MIN;
	int32_t x4795 = -21440370;
	static volatile int64_t t160 = 1263151570377107533LL;

    t160 = ((x4793&(x4794/x4795))<<x4796);

    if (t160 != 860374334664LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x4849 = INT64_MIN;
	int32_t x4850 = -13461;
	int32_t x4851 = INT32_MIN;
	uint8_t x4852 = 1U;
	volatile int64_t t161 = -35448205387LL;

    t161 = ((x4849&(x4850/x4851))<<x4852);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x4881 = 1U;
	uint16_t x4882 = UINT16_MAX;
	int64_t x4883 = INT64_MIN;

    t162 = ((x4881&(x4882/x4883))<<x4884);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x5065 = INT64_MIN;
	uint32_t x5066 = UINT32_MAX;
	uint64_t x5067 = 3624029145995LLU;
	volatile uint64_t t163 = 41258LLU;

    t163 = ((x5065&(x5066/x5067))<<x5068);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x5093 = UINT32_MAX;
	int16_t x5094 = -52;
	int32_t x5095 = INT32_MIN;
	uint32_t x5096 = 11U;
	volatile uint32_t t164 = 7958331U;

    t164 = ((x5093&(x5094/x5095))<<x5096);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x5221 = INT8_MAX;
	static uint64_t x5222 = 508639181390584LLU;
	int8_t x5223 = INT8_MIN;
	static uint16_t x5224 = 2U;

    t165 = ((x5221&(x5222/x5223))<<x5224);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x5261 = UINT8_MAX;
	int64_t x5262 = 561782704248045600LL;
	int8_t x5263 = -21;
	uint8_t x5264 = 53U;
	int64_t t166 = -2571744757637LL;

    t166 = ((x5261&(x5262/x5263))<<x5264);

    if (t166 != 540431955284459520LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x5289 = 5U;
	static volatile uint8_t x5290 = 0U;
	static uint8_t x5291 = 5U;
	uint8_t x5292 = 15U;

    t167 = ((x5289&(x5290/x5291))<<x5292);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x5310 = 3796;
	int64_t x5311 = -5LL;
	uint32_t x5312 = 1U;
	volatile int64_t t168 = -94607907602059LL;

    t168 = ((x5309&(x5310/x5311))<<x5312);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x5354 = INT16_MIN;
	int16_t x5355 = 157;
	int8_t x5356 = 1;

    t169 = ((x5353&(x5354/x5355))<<x5356);

    if (t169 != 96) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x5362 = INT8_MIN;
	uint64_t x5363 = UINT64_MAX;
	volatile uint64_t t170 = 3704287037497LLU;

    t170 = ((x5361&(x5362/x5363))<<x5364);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x5370 = INT8_MIN;
	volatile int8_t x5371 = -1;
	int32_t t171 = 383572087;

    t171 = ((x5369&(x5370/x5371))<<x5372);

    if (t171 != 256) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x5385 = 1;
	uint64_t x5386 = 80420077LLU;
	uint64_t x5387 = 216752125779LLU;
	int16_t x5388 = 0;
	uint64_t t172 = 2765604LLU;

    t172 = ((x5385&(x5386/x5387))<<x5388);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x5434 = 26692U;
	int64_t x5435 = -143984048LL;
	volatile int64_t t173 = 234445872686349328LL;

    t173 = ((x5433&(x5434/x5435))<<x5436);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x5473 = INT32_MAX;
	int8_t x5474 = INT8_MAX;
	int32_t x5475 = INT32_MIN;
	static uint32_t x5476 = 4U;

    t174 = ((x5473&(x5474/x5475))<<x5476);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x5521 = 7U;
	uint8_t x5523 = 92U;
	static uint32_t x5524 = 1U;
	volatile int64_t t175 = 207LL;

    t175 = ((x5521&(x5522/x5523))<<x5524);

    if (t175 != 4LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x5601 = 30U;
	int16_t x5602 = INT16_MIN;
	int64_t x5603 = -253293LL;
	static int64_t t176 = -4417629619108446578LL;

    t176 = ((x5601&(x5602/x5603))<<x5604);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x5645 = 2171628571220LLU;
	int16_t x5646 = 7404;
	int16_t x5647 = INT16_MAX;

    t177 = ((x5645&(x5646/x5647))<<x5648);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x5701 = INT8_MIN;
	int64_t x5703 = INT64_MAX;
	uint32_t x5704 = 35U;
	int64_t t178 = 4264918LL;

    t178 = ((x5701&(x5702/x5703))<<x5704);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x5714 = 0U;
	uint8_t x5716 = 34U;
	uint64_t t179 = 146800LLU;

    t179 = ((x5713&(x5714/x5715))<<x5716);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x5729 = UINT16_MAX;
	int8_t x5730 = 1;
	int32_t x5731 = -865;
	uint8_t x5732 = 11U;

    t180 = ((x5729&(x5730/x5731))<<x5732);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x5748 = 1U;
	volatile int32_t t181 = 61787;

    t181 = ((x5745&(x5746/x5747))<<x5748);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x5757 = 9U;
	uint8_t x5758 = 0U;
	volatile uint32_t x5759 = 945202683U;
	uint16_t x5760 = 6U;
	volatile uint32_t t182 = 0U;

    t182 = ((x5757&(x5758/x5759))<<x5760);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int16_t x5761 = 0;
	int16_t x5762 = 216;
	uint64_t x5764 = 57LLU;
	uint64_t t183 = 11929767LLU;

    t183 = ((x5761&(x5762/x5763))<<x5764);

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x5765 = INT32_MAX;
	int64_t x5767 = -1LL;
	volatile int64_t t184 = -2068533LL;

    t184 = ((x5765&(x5766/x5767))<<x5768);

    if (t184 != 445677131976933376LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x5786 = 3173308027LLU;
	uint32_t x5787 = 414U;
	volatile int8_t x5788 = 1;
	uint64_t t185 = 1506498506319LLU;

    t185 = ((x5785&(x5786/x5787))<<x5788);

    if (t185 != 14737986LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x5833 = 178U;
	static volatile uint64_t x5834 = UINT64_MAX;
	uint16_t x5835 = UINT16_MAX;
	static volatile uint8_t x5836 = 1U;
	volatile uint64_t t186 = 120LLU;

    t186 = ((x5833&(x5834/x5835))<<x5836);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x5853 = INT64_MIN;
	int32_t x5854 = 6041;
	volatile int64_t x5855 = INT64_MIN;
	uint8_t x5856 = 3U;
	volatile int64_t t187 = -9246817LL;

    t187 = ((x5853&(x5854/x5855))<<x5856);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x5922 = -1;
	uint8_t x5924 = 1U;
	volatile int32_t t188 = -35316064;

    t188 = ((x5921&(x5922/x5923))<<x5924);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x5941 = 111U;
	int8_t x5942 = INT8_MIN;
	volatile int8_t x5943 = 1;
	static int32_t t189 = -791;

    t189 = ((x5941&(x5942/x5943))<<x5944);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x5948 = 4;

    t190 = ((x5945&(x5946/x5947))<<x5948);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x5958 = UINT32_MAX;
	int64_t x5959 = 1038736314523796LL;
	volatile int64_t t191 = 142963631326569LL;

    t191 = ((x5957&(x5958/x5959))<<x5960);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x6025 = 1;
	static int8_t x6028 = 0;

    t192 = ((x6025&(x6026/x6027))<<x6028);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x6058 = 15U;
	static uint64_t x6059 = 51226104323LLU;
	uint8_t x6060 = 1U;
	volatile uint64_t t193 = 808093LLU;

    t193 = ((x6057&(x6058/x6059))<<x6060);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x6113 = 1657456619129LLU;
	static int64_t x6114 = 0LL;
	uint32_t x6115 = 34422911U;
	static volatile uint32_t x6116 = 0U;
	uint64_t t194 = 17331639855599LLU;

    t194 = ((x6113&(x6114/x6115))<<x6116);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x6186 = -33;
	int64_t x6187 = INT64_MIN;

    t195 = ((x6185&(x6186/x6187))<<x6188);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x6205 = -1;
	volatile uint16_t x6206 = UINT16_MAX;
	uint64_t x6207 = UINT64_MAX;
	int8_t x6208 = 0;
	static volatile uint64_t t196 = 100LLU;

    t196 = ((x6205&(x6206/x6207))<<x6208);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x6213 = INT32_MIN;
	volatile int8_t x6216 = 2;
	volatile int32_t t197 = 107167740;

    t197 = ((x6213&(x6214/x6215))<<x6216);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x6233 = UINT32_MAX;
	static int16_t x6234 = INT16_MIN;
	volatile uint16_t x6235 = UINT16_MAX;
	int16_t x6236 = 0;

    t198 = ((x6233&(x6234/x6235))<<x6236);

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x6266 = 777449U;
	uint16_t x6267 = 402U;
	static volatile int32_t x6268 = 2;
	uint32_t t199 = 387U;

    t199 = ((x6265&(x6266/x6267))<<x6268);

    if (t199 != 4U) { NG(); } else { ; }
	
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


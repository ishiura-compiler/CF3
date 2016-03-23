
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

static int32_t x88 = INT32_MIN;
int32_t t1 = -163;
int32_t t3 = 22116;
volatile int32_t t5 = 18;
volatile int32_t t7 = -37949;
static volatile int8_t x330 = 0;
volatile uint32_t x332 = 488132U;
int32_t t8 = 0;
static int32_t x341 = INT32_MAX;
int64_t x376 = INT64_MIN;
int16_t x441 = INT16_MIN;
int16_t x443 = 8;
int16_t x558 = INT16_MAX;
uint16_t x559 = 21U;
uint8_t x585 = UINT8_MAX;
int8_t x588 = INT8_MIN;
int64_t x734 = -1LL;
static int8_t x761 = -1;
uint8_t x763 = 0U;
int8_t x764 = INT8_MIN;
static int8_t x788 = INT8_MIN;
int64_t x822 = -1LL;
int16_t x823 = 1;
int8_t x828 = -2;
static int32_t t21 = -7063;
int64_t x841 = -1126234542979LL;
int32_t x868 = INT32_MAX;
int32_t t23 = 5886;
int8_t x871 = 0;
uint16_t x950 = 883U;
int32_t t27 = -28546;
static volatile int16_t x1065 = INT16_MAX;
volatile int32_t t30 = 887737;
int8_t x1090 = 10;
static int32_t x1112 = INT32_MIN;
volatile int8_t x1159 = 0;
int32_t x1214 = -1;
static uint16_t x1215 = 0U;
uint64_t x1216 = 252LLU;
volatile int32_t t36 = 39;
int64_t x1296 = INT64_MAX;
volatile int32_t t38 = -45168991;
uint16_t x1359 = 3U;
static volatile uint16_t x1442 = 988U;
int64_t x1493 = 455702409748084LL;
uint16_t x1510 = 30923U;
int32_t x1553 = -1;
int32_t x1554 = INT32_MIN;
static int16_t x1556 = -1;
int8_t x1596 = INT8_MIN;
volatile uint8_t x1633 = UINT8_MAX;
uint8_t x1683 = 22U;
volatile int64_t x1693 = 30357141926742LL;
static int16_t x1707 = 3;
int32_t x1760 = 183;
int32_t t54 = -594000403;
volatile uint16_t x1793 = UINT16_MAX;
int16_t x1794 = INT16_MIN;
uint64_t x1800 = 683644577476LLU;
int16_t x1877 = 540;
int32_t t60 = 121;
volatile int32_t x1973 = -584608747;
static uint8_t x2023 = 23U;
int16_t x2031 = 4;
int8_t x2149 = -1;
static int32_t x2180 = 209726358;
uint8_t x2232 = 0U;
int8_t x2267 = 28;
int64_t x2268 = INT64_MIN;
static int8_t x2434 = INT8_MAX;
int16_t x2436 = INT16_MIN;
int32_t x2460 = -1006006;
uint8_t x2635 = 6U;
int16_t x2668 = 1261;
uint16_t x2709 = 2U;
uint8_t x2711 = 10U;
uint32_t x2846 = 24618549U;
int32_t t77 = -1108;
int64_t x2873 = INT64_MIN;
uint32_t x2942 = 128175U;
uint16_t x2943 = 14U;
uint32_t x2993 = 1871426U;
static int8_t x2996 = INT8_MIN;
static uint16_t x3008 = 1U;
static uint16_t x3109 = UINT16_MAX;
int64_t x3190 = INT64_MAX;
int32_t t88 = 713884103;
uint64_t x3229 = 32614171LLU;
int16_t x3230 = -1;
static int32_t t89 = -134983322;
int16_t x3257 = 2;
static uint64_t x3258 = 23779469LLU;
int8_t x3259 = 0;
int32_t x3274 = INT32_MIN;
static uint16_t x3300 = 23U;
int32_t x3340 = -2479150;
volatile int32_t t93 = 9076156;
int64_t x3446 = -1LL;
uint8_t x3447 = 7U;
volatile int64_t x3506 = -1LL;
uint16_t x3508 = UINT16_MAX;
static volatile int8_t x3535 = 8;
volatile int32_t x3681 = INT32_MAX;
uint8_t x3767 = 3U;
int8_t x3786 = INT8_MIN;
uint32_t x3787 = 1U;
int32_t x3856 = INT32_MAX;
int64_t x3914 = -461204LL;
uint8_t x3915 = 13U;
uint16_t x3946 = 1216U;
volatile int16_t x3947 = 21;
static int8_t x3981 = -1;
int32_t t115 = -121882;
uint8_t x4023 = 2U;
uint64_t x4024 = UINT64_MAX;
volatile int32_t t116 = 458294;
static volatile int32_t t117 = 712890815;
static int8_t x4116 = -1;
uint16_t x4135 = 1U;
volatile int8_t x4136 = -44;
int32_t x4391 = 1;
uint8_t x4411 = 1U;
uint16_t x4475 = 0U;
int8_t x4654 = INT8_MAX;
int8_t x4663 = 1;
int16_t x4718 = INT16_MIN;
static uint16_t x4720 = UINT16_MAX;
volatile int16_t x4793 = INT16_MAX;
static int16_t x4862 = -1;
volatile int32_t x4865 = INT32_MIN;
volatile int8_t x4917 = -1;
static int32_t x4974 = -1;
int8_t x4976 = 0;
uint64_t x4991 = 0LLU;
int8_t x5035 = 2;
uint64_t x5059 = 4LLU;
volatile int32_t t143 = 1270;
uint64_t x5119 = 19LLU;
static int32_t x5202 = INT32_MIN;
uint8_t x5203 = 12U;
int8_t x5323 = 1;
static int64_t x5324 = INT64_MIN;
uint8_t x5357 = 12U;
volatile uint16_t x5359 = 13U;
int64_t x5372 = -104LL;
volatile uint32_t x5385 = UINT32_MAX;
volatile int64_t x5386 = 97125926021LL;
static int32_t t154 = -1;
volatile int16_t x5402 = INT16_MAX;
static uint32_t x5442 = 20U;
int64_t x5443 = 6LL;
int32_t t156 = 4491;
uint8_t x5487 = 16U;
int64_t x5586 = INT64_MAX;
uint32_t x5603 = 7U;
int64_t x5653 = INT64_MAX;
static volatile int32_t x5719 = 13;
int32_t x5771 = 1;
static uint32_t x5772 = UINT32_MAX;
int32_t t165 = 201043;
int64_t x5774 = INT64_MIN;
static volatile int16_t x5785 = INT16_MIN;
uint8_t x5788 = 100U;
volatile int32_t t168 = 39;
int16_t x5929 = -2;
uint16_t x5991 = 14U;
uint64_t x5993 = 568693705719LLU;
volatile int8_t x5995 = 7;
static int64_t x6021 = -1LL;
uint8_t x6023 = 31U;
int16_t x6038 = -1;
volatile int8_t x6039 = 1;
volatile int64_t x6164 = INT64_MIN;
int16_t x6196 = -1;
static int32_t t181 = -208764570;
uint32_t x6207 = 6U;
volatile uint64_t x6237 = UINT64_MAX;
int16_t x6240 = 2;
uint8_t x6303 = 0U;
volatile int32_t t185 = 8801;
int32_t t187 = 456;
uint8_t x6443 = 2U;
volatile int64_t x6465 = INT64_MIN;
int8_t x6467 = 1;
uint8_t x6495 = 7U;
int16_t x6538 = 11;
uint16_t x6551 = 3U;
int32_t t195 = -2722660;
int8_t x6553 = INT8_MAX;
volatile uint64_t x6701 = 1057418136044LLU;
uint8_t x6718 = UINT8_MAX;


void f0(void) {
    	uint32_t x21 = UINT32_MAX;
	volatile int16_t x22 = 231;
	int8_t x23 = 2;
	volatile int8_t x24 = -1;
	volatile int32_t t0 = -82;

    t0 = (((x21<=x22)>>x23)==x24);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x85 = -1;
	int16_t x86 = -1;
	int32_t x87 = 3;

    t1 = (((x85<=x86)>>x87)==x88);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x165 = -1;
	int64_t x166 = INT64_MIN;
	volatile int8_t x167 = 0;
	int8_t x168 = -1;
	static int32_t t2 = -1;

    t2 = (((x165<=x166)>>x167)==x168);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x209 = 118;
	volatile int64_t x210 = 143525LL;
	uint8_t x211 = 0U;
	uint16_t x212 = 15U;

    t3 = (((x209<=x210)>>x211)==x212);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x237 = INT16_MIN;
	static int64_t x238 = -51699LL;
	uint64_t x239 = 27LLU;
	int8_t x240 = INT8_MAX;
	int32_t t4 = 61749;

    t4 = (((x237<=x238)>>x239)==x240);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x249 = INT16_MAX;
	uint64_t x250 = 3LLU;
	int16_t x251 = 2;
	static int32_t x252 = -1122875;

    t5 = (((x249<=x250)>>x251)==x252);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x269 = 0;
	volatile int32_t x270 = INT32_MIN;
	static volatile uint8_t x271 = 3U;
	uint8_t x272 = UINT8_MAX;
	int32_t t6 = 5;

    t6 = (((x269<=x270)>>x271)==x272);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x277 = 1U;
	volatile uint8_t x278 = 2U;
	int8_t x279 = 7;
	int64_t x280 = INT64_MAX;

    t7 = (((x277<=x278)>>x279)==x280);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x329 = UINT64_MAX;
	int8_t x331 = 1;

    t8 = (((x329<=x330)>>x331)==x332);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x342 = UINT8_MAX;
	static uint8_t x343 = 2U;
	static int32_t x344 = INT32_MIN;
	volatile int32_t t9 = -596681251;

    t9 = (((x341<=x342)>>x343)==x344);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x361 = 16198238LLU;
	uint32_t x362 = UINT32_MAX;
	int16_t x363 = 6;
	static int32_t x364 = -1;
	static int32_t t10 = -1773026;

    t10 = (((x361<=x362)>>x363)==x364);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x373 = INT64_MAX;
	int64_t x374 = INT64_MIN;
	uint8_t x375 = 1U;
	int32_t t11 = -156644557;

    t11 = (((x373<=x374)>>x375)==x376);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x405 = INT32_MIN;
	volatile uint64_t x406 = 66LLU;
	uint8_t x407 = 7U;
	int16_t x408 = -1;
	int32_t t12 = -30;

    t12 = (((x405<=x406)>>x407)==x408);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x442 = INT32_MIN;
	static int8_t x444 = -36;
	int32_t t13 = 6861;

    t13 = (((x441<=x442)>>x443)==x444);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x557 = -7;
	volatile uint32_t x560 = 3492170U;
	int32_t t14 = -670;

    t14 = (((x557<=x558)>>x559)==x560);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x586 = -1LL;
	volatile int8_t x587 = 8;
	static int32_t t15 = 204592;

    t15 = (((x585<=x586)>>x587)==x588);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x729 = -62;
	static int32_t x730 = -13945152;
	uint8_t x731 = 0U;
	uint64_t x732 = 2679392554979107LLU;
	int32_t t16 = 341;

    t16 = (((x729<=x730)>>x731)==x732);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x733 = 1935400U;
	volatile uint16_t x735 = 14U;
	static int16_t x736 = INT16_MIN;
	int32_t t17 = -15816;

    t17 = (((x733<=x734)>>x735)==x736);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x762 = UINT8_MAX;
	int32_t t18 = 611;

    t18 = (((x761<=x762)>>x763)==x764);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x785 = -1;
	int64_t x786 = INT64_MIN;
	uint64_t x787 = 4LLU;
	static int32_t t19 = -343764523;

    t19 = (((x785<=x786)>>x787)==x788);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x821 = 6;
	uint64_t x824 = UINT64_MAX;
	volatile int32_t t20 = -2;

    t20 = (((x821<=x822)>>x823)==x824);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x825 = -192;
	int16_t x826 = 5;
	static volatile int8_t x827 = 27;

    t21 = (((x825<=x826)>>x827)==x828);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x842 = 20U;
	int8_t x843 = 0;
	int8_t x844 = -1;
	volatile int32_t t22 = 1;

    t22 = (((x841<=x842)>>x843)==x844);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x865 = 50732484047915LLU;
	uint32_t x866 = 2108349742U;
	static volatile int32_t x867 = 2;

    t23 = (((x865<=x866)>>x867)==x868);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x869 = UINT64_MAX;
	uint32_t x870 = UINT32_MAX;
	uint64_t x872 = 21786253181107435LLU;
	volatile int32_t t24 = -6;

    t24 = (((x869<=x870)>>x871)==x872);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x949 = -15;
	int8_t x951 = 8;
	int32_t x952 = INT32_MAX;
	int32_t t25 = 36662591;

    t25 = (((x949<=x950)>>x951)==x952);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x965 = -1;
	int32_t x966 = INT32_MIN;
	volatile uint16_t x967 = 10U;
	volatile int8_t x968 = 49;
	int32_t t26 = -149985813;

    t26 = (((x965<=x966)>>x967)==x968);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint32_t x969 = 487235279U;
	volatile uint64_t x970 = UINT64_MAX;
	uint16_t x971 = 13U;
	uint64_t x972 = 613716963LLU;

    t27 = (((x969<=x970)>>x971)==x972);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x977 = -1;
	int8_t x978 = INT8_MIN;
	volatile uint8_t x979 = 6U;
	uint64_t x980 = 5319982053LLU;
	volatile int32_t t28 = -1;

    t28 = (((x977<=x978)>>x979)==x980);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x1025 = INT64_MIN;
	int8_t x1026 = INT8_MAX;
	volatile int8_t x1027 = 0;
	static volatile int16_t x1028 = INT16_MIN;
	volatile int32_t t29 = 32514;

    t29 = (((x1025<=x1026)>>x1027)==x1028);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1066 = INT32_MIN;
	volatile uint16_t x1067 = 4U;
	static uint32_t x1068 = 1U;

    t30 = (((x1065<=x1066)>>x1067)==x1068);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x1069 = 601U;
	uint32_t x1070 = 3048U;
	int16_t x1071 = 1;
	static uint8_t x1072 = 110U;
	volatile int32_t t31 = 85871;

    t31 = (((x1069<=x1070)>>x1071)==x1072);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x1089 = -1;
	int8_t x1091 = 19;
	int64_t x1092 = INT64_MIN;
	volatile int32_t t32 = 4;

    t32 = (((x1089<=x1090)>>x1091)==x1092);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x1109 = 3584LLU;
	int16_t x1110 = -1;
	int8_t x1111 = 6;
	static int32_t t33 = -3;

    t33 = (((x1109<=x1110)>>x1111)==x1112);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x1137 = -1848191684691516105LL;
	uint64_t x1138 = UINT64_MAX;
	uint32_t x1139 = 9U;
	int64_t x1140 = 24865LL;
	volatile int32_t t34 = 1;

    t34 = (((x1137<=x1138)>>x1139)==x1140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x1157 = 0U;
	volatile int8_t x1158 = INT8_MIN;
	volatile int32_t x1160 = INT32_MAX;
	volatile int32_t t35 = 183941;

    t35 = (((x1157<=x1158)>>x1159)==x1160);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x1213 = UINT16_MAX;

    t36 = (((x1213<=x1214)>>x1215)==x1216);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x1277 = INT32_MIN;
	int8_t x1278 = -43;
	static uint8_t x1279 = 6U;
	int32_t x1280 = 426314;
	volatile int32_t t37 = -6;

    t37 = (((x1277<=x1278)>>x1279)==x1280);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x1293 = INT16_MIN;
	static volatile int8_t x1294 = -1;
	int32_t x1295 = 4;

    t38 = (((x1293<=x1294)>>x1295)==x1296);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x1329 = INT16_MIN;
	uint64_t x1330 = 1748416041507019923LLU;
	static volatile int8_t x1331 = 11;
	int8_t x1332 = -1;
	int32_t t39 = 22;

    t39 = (((x1329<=x1330)>>x1331)==x1332);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x1357 = 14;
	int16_t x1358 = INT16_MIN;
	volatile int8_t x1360 = INT8_MAX;
	int32_t t40 = -175957;

    t40 = (((x1357<=x1358)>>x1359)==x1360);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x1437 = INT8_MIN;
	volatile uint64_t x1438 = 5496628179LLU;
	volatile int16_t x1439 = 7;
	int32_t x1440 = 45;
	int32_t t41 = -4;

    t41 = (((x1437<=x1438)>>x1439)==x1440);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x1441 = INT8_MAX;
	uint8_t x1443 = 21U;
	static int64_t x1444 = INT64_MIN;
	int32_t t42 = 469753103;

    t42 = (((x1441<=x1442)>>x1443)==x1444);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x1494 = INT32_MAX;
	uint64_t x1495 = 2LLU;
	volatile int32_t x1496 = -1;
	static int32_t t43 = 262934;

    t43 = (((x1493<=x1494)>>x1495)==x1496);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x1509 = 164160U;
	volatile int8_t x1511 = 13;
	int8_t x1512 = -1;
	int32_t t44 = -1;

    t44 = (((x1509<=x1510)>>x1511)==x1512);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x1549 = 10U;
	int32_t x1550 = INT32_MAX;
	uint16_t x1551 = 17U;
	static uint8_t x1552 = 1U;
	int32_t t45 = -130643;

    t45 = (((x1549<=x1550)>>x1551)==x1552);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x1555 = 1U;
	volatile int32_t t46 = -190;

    t46 = (((x1553<=x1554)>>x1555)==x1556);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x1557 = -1;
	int32_t x1558 = INT32_MAX;
	uint8_t x1559 = 6U;
	uint8_t x1560 = 26U;
	volatile int32_t t47 = 445222299;

    t47 = (((x1557<=x1558)>>x1559)==x1560);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x1593 = -2041287;
	static int8_t x1594 = -2;
	volatile uint64_t x1595 = 25LLU;
	int32_t t48 = 502;

    t48 = (((x1593<=x1594)>>x1595)==x1596);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x1634 = -59;
	uint8_t x1635 = 3U;
	int32_t x1636 = INT32_MIN;
	volatile int32_t t49 = -2444;

    t49 = (((x1633<=x1634)>>x1635)==x1636);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x1681 = 12U;
	uint8_t x1682 = 11U;
	static int32_t x1684 = 183652094;
	int32_t t50 = -1;

    t50 = (((x1681<=x1682)>>x1683)==x1684);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x1694 = INT32_MIN;
	volatile uint8_t x1695 = 9U;
	int64_t x1696 = -118LL;
	int32_t t51 = -11188966;

    t51 = (((x1693<=x1694)>>x1695)==x1696);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x1705 = 2;
	uint8_t x1706 = 2U;
	int64_t x1708 = 7493394290249328LL;
	volatile int32_t t52 = 1;

    t52 = (((x1705<=x1706)>>x1707)==x1708);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x1709 = INT16_MIN;
	static volatile int8_t x1710 = -1;
	int8_t x1711 = 3;
	int32_t x1712 = -1;
	static int32_t t53 = 2735742;

    t53 = (((x1709<=x1710)>>x1711)==x1712);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x1757 = -28;
	volatile int32_t x1758 = 733825330;
	uint16_t x1759 = 24U;

    t54 = (((x1757<=x1758)>>x1759)==x1760);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x1795 = 1;
	uint64_t x1796 = 2LLU;
	static volatile int32_t t55 = 11292485;

    t55 = (((x1793<=x1794)>>x1795)==x1796);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x1797 = INT64_MAX;
	volatile int32_t x1798 = 14582;
	uint8_t x1799 = 9U;
	volatile int32_t t56 = -192010990;

    t56 = (((x1797<=x1798)>>x1799)==x1800);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x1841 = INT16_MIN;
	int32_t x1842 = INT32_MIN;
	static int64_t x1843 = 5LL;
	int64_t x1844 = INT64_MIN;
	int32_t t57 = -22123209;

    t57 = (((x1841<=x1842)>>x1843)==x1844);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x1853 = INT64_MIN;
	int64_t x1854 = INT64_MIN;
	int8_t x1855 = 0;
	int16_t x1856 = INT16_MAX;
	volatile int32_t t58 = 2730;

    t58 = (((x1853<=x1854)>>x1855)==x1856);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x1857 = INT16_MIN;
	volatile int16_t x1858 = INT16_MIN;
	volatile uint32_t x1859 = 15U;
	int8_t x1860 = INT8_MIN;
	static int32_t t59 = -1;

    t59 = (((x1857<=x1858)>>x1859)==x1860);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x1878 = INT8_MIN;
	uint8_t x1879 = 15U;
	int16_t x1880 = INT16_MIN;

    t60 = (((x1877<=x1878)>>x1879)==x1880);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x1957 = INT64_MIN;
	static volatile uint32_t x1958 = 51114606U;
	static int16_t x1959 = 2;
	volatile int8_t x1960 = INT8_MIN;
	volatile int32_t t61 = 19493846;

    t61 = (((x1957<=x1958)>>x1959)==x1960);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x1974 = 3LL;
	static int8_t x1975 = 22;
	volatile int8_t x1976 = 1;
	volatile int32_t t62 = -61;

    t62 = (((x1973<=x1974)>>x1975)==x1976);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x2021 = -34949;
	int16_t x2022 = INT16_MIN;
	volatile uint8_t x2024 = 2U;
	int32_t t63 = -62981297;

    t63 = (((x2021<=x2022)>>x2023)==x2024);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x2029 = -1;
	static uint8_t x2030 = UINT8_MAX;
	int64_t x2032 = -126154LL;
	int32_t t64 = 29205;

    t64 = (((x2029<=x2030)>>x2031)==x2032);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x2150 = INT8_MIN;
	uint32_t x2151 = 0U;
	uint32_t x2152 = 524628494U;
	volatile int32_t t65 = 3922119;

    t65 = (((x2149<=x2150)>>x2151)==x2152);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x2177 = INT32_MIN;
	int32_t x2178 = INT32_MIN;
	int8_t x2179 = 0;
	volatile int32_t t66 = 3115920;

    t66 = (((x2177<=x2178)>>x2179)==x2180);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x2229 = 911U;
	uint64_t x2230 = UINT64_MAX;
	volatile uint8_t x2231 = 1U;
	volatile int32_t t67 = -1744021;

    t67 = (((x2229<=x2230)>>x2231)==x2232);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int8_t x2265 = -10;
	int8_t x2266 = -1;
	volatile int32_t t68 = -31304024;

    t68 = (((x2265<=x2266)>>x2267)==x2268);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x2321 = 13012048;
	int64_t x2322 = INT64_MIN;
	int32_t x2323 = 0;
	static int16_t x2324 = -592;
	volatile int32_t t69 = -1984;

    t69 = (((x2321<=x2322)>>x2323)==x2324);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x2433 = INT32_MIN;
	int8_t x2435 = 0;
	int32_t t70 = 8;

    t70 = (((x2433<=x2434)>>x2435)==x2436);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x2457 = UINT64_MAX;
	volatile uint32_t x2458 = 9732U;
	uint16_t x2459 = 17U;
	int32_t t71 = -1;

    t71 = (((x2457<=x2458)>>x2459)==x2460);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x2537 = INT16_MIN;
	int8_t x2538 = 1;
	int16_t x2539 = 0;
	int64_t x2540 = -1LL;
	static int32_t t72 = -2;

    t72 = (((x2537<=x2538)>>x2539)==x2540);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x2633 = 236387LLU;
	uint64_t x2634 = 23541373830721LLU;
	static volatile int16_t x2636 = INT16_MAX;
	int32_t t73 = 40176;

    t73 = (((x2633<=x2634)>>x2635)==x2636);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x2653 = -12266;
	int32_t x2654 = -22621730;
	uint8_t x2655 = 1U;
	int8_t x2656 = INT8_MAX;
	volatile int32_t t74 = 13899990;

    t74 = (((x2653<=x2654)>>x2655)==x2656);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int64_t x2665 = -4LL;
	int32_t x2666 = -12;
	static uint64_t x2667 = 6LLU;
	volatile int32_t t75 = -729888;

    t75 = (((x2665<=x2666)>>x2667)==x2668);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x2710 = 615;
	int16_t x2712 = INT16_MIN;
	static volatile int32_t t76 = -75236605;

    t76 = (((x2709<=x2710)>>x2711)==x2712);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x2845 = 5U;
	static uint32_t x2847 = 24U;
	int32_t x2848 = INT32_MAX;

    t77 = (((x2845<=x2846)>>x2847)==x2848);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x2857 = 108081959648LLU;
	uint8_t x2858 = 3U;
	uint32_t x2859 = 3U;
	uint16_t x2860 = UINT16_MAX;
	volatile int32_t t78 = -31;

    t78 = (((x2857<=x2858)>>x2859)==x2860);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x2874 = INT16_MIN;
	uint32_t x2875 = 5U;
	uint64_t x2876 = 1794165995LLU;
	int32_t t79 = -143755;

    t79 = (((x2873<=x2874)>>x2875)==x2876);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x2933 = 8147251158478LLU;
	int16_t x2934 = INT16_MIN;
	uint8_t x2935 = 5U;
	static int32_t x2936 = 13643016;
	int32_t t80 = -56;

    t80 = (((x2933<=x2934)>>x2935)==x2936);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x2941 = INT32_MAX;
	int16_t x2944 = INT16_MAX;
	static int32_t t81 = 220;

    t81 = (((x2941<=x2942)>>x2943)==x2944);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x2994 = INT32_MIN;
	uint32_t x2995 = 3U;
	int32_t t82 = 38129;

    t82 = (((x2993<=x2994)>>x2995)==x2996);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x3005 = 37U;
	int8_t x3006 = INT8_MAX;
	int8_t x3007 = 0;
	int32_t t83 = 1;

    t83 = (((x3005<=x3006)>>x3007)==x3008);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x3061 = INT32_MAX;
	int64_t x3062 = INT64_MIN;
	uint32_t x3063 = 1U;
	volatile int16_t x3064 = INT16_MIN;
	static volatile int32_t t84 = 113484;

    t84 = (((x3061<=x3062)>>x3063)==x3064);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int8_t x3110 = -9;
	uint16_t x3111 = 18U;
	uint16_t x3112 = 471U;
	static volatile int32_t t85 = 428;

    t85 = (((x3109<=x3110)>>x3111)==x3112);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x3113 = 7U;
	int32_t x3114 = INT32_MIN;
	uint8_t x3115 = 0U;
	int64_t x3116 = INT64_MIN;
	volatile int32_t t86 = -97500655;

    t86 = (((x3113<=x3114)>>x3115)==x3116);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x3117 = 14778U;
	int32_t x3118 = INT32_MAX;
	uint16_t x3119 = 1U;
	int8_t x3120 = -1;
	static int32_t t87 = 432;

    t87 = (((x3117<=x3118)>>x3119)==x3120);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x3189 = 217U;
	int32_t x3191 = 3;
	static int32_t x3192 = 3;

    t88 = (((x3189<=x3190)>>x3191)==x3192);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x3231 = 2U;
	int8_t x3232 = INT8_MIN;

    t89 = (((x3229<=x3230)>>x3231)==x3232);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x3260 = 318121161U;
	int32_t t90 = -52069;

    t90 = (((x3257<=x3258)>>x3259)==x3260);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x3273 = -14990;
	uint8_t x3275 = 0U;
	static volatile int64_t x3276 = INT64_MAX;
	volatile int32_t t91 = 5699;

    t91 = (((x3273<=x3274)>>x3275)==x3276);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x3297 = INT8_MIN;
	int8_t x3298 = INT8_MIN;
	uint8_t x3299 = 1U;
	int32_t t92 = -3121726;

    t92 = (((x3297<=x3298)>>x3299)==x3300);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x3337 = 61U;
	int32_t x3338 = -877734;
	uint8_t x3339 = 9U;

    t93 = (((x3337<=x3338)>>x3339)==x3340);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x3357 = -1;
	uint32_t x3358 = 3289U;
	static int8_t x3359 = 4;
	volatile int64_t x3360 = -1LL;
	int32_t t94 = -8602;

    t94 = (((x3357<=x3358)>>x3359)==x3360);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x3413 = INT32_MAX;
	uint8_t x3414 = 4U;
	uint8_t x3415 = 6U;
	volatile int8_t x3416 = INT8_MIN;
	static volatile int32_t t95 = -29520742;

    t95 = (((x3413<=x3414)>>x3415)==x3416);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x3445 = -1;
	int8_t x3448 = INT8_MIN;
	static int32_t t96 = -10444395;

    t96 = (((x3445<=x3446)>>x3447)==x3448);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x3449 = INT16_MIN;
	uint8_t x3450 = 21U;
	volatile uint8_t x3451 = 1U;
	int16_t x3452 = 0;
	int32_t t97 = 2;

    t97 = (((x3449<=x3450)>>x3451)==x3452);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x3469 = INT16_MIN;
	uint32_t x3470 = UINT32_MAX;
	uint8_t x3471 = 26U;
	uint32_t x3472 = UINT32_MAX;
	int32_t t98 = -26696236;

    t98 = (((x3469<=x3470)>>x3471)==x3472);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x3493 = 6U;
	volatile int16_t x3494 = INT16_MIN;
	uint8_t x3495 = 3U;
	uint32_t x3496 = UINT32_MAX;
	volatile int32_t t99 = -24465;

    t99 = (((x3493<=x3494)>>x3495)==x3496);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x3505 = 11032U;
	volatile uint16_t x3507 = 12U;
	volatile int32_t t100 = 31387;

    t100 = (((x3505<=x3506)>>x3507)==x3508);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x3509 = 13U;
	uint16_t x3510 = 22487U;
	uint64_t x3511 = 25LLU;
	static uint16_t x3512 = UINT16_MAX;
	volatile int32_t t101 = 10005960;

    t101 = (((x3509<=x3510)>>x3511)==x3512);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x3533 = 195U;
	int16_t x3534 = -1;
	int16_t x3536 = -27;
	int32_t t102 = 26168046;

    t102 = (((x3533<=x3534)>>x3535)==x3536);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x3585 = -1;
	uint16_t x3586 = 0U;
	uint16_t x3587 = 1U;
	int8_t x3588 = INT8_MAX;
	int32_t t103 = 29858;

    t103 = (((x3585<=x3586)>>x3587)==x3588);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x3621 = 0U;
	volatile uint64_t x3622 = 2129303748383119LLU;
	volatile uint8_t x3623 = 0U;
	static uint16_t x3624 = 28757U;
	int32_t t104 = 13190;

    t104 = (((x3621<=x3622)>>x3623)==x3624);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x3629 = 15316481U;
	uint8_t x3630 = 96U;
	int16_t x3631 = 0;
	int16_t x3632 = -977;
	static volatile int32_t t105 = -49264225;

    t105 = (((x3629<=x3630)>>x3631)==x3632);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x3682 = INT32_MIN;
	int8_t x3683 = 2;
	int32_t x3684 = 29848;
	int32_t t106 = 2;

    t106 = (((x3681<=x3682)>>x3683)==x3684);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x3765 = 447U;
	int64_t x3766 = INT64_MIN;
	uint16_t x3768 = 14U;
	volatile int32_t t107 = 31;

    t107 = (((x3765<=x3766)>>x3767)==x3768);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x3785 = 809;
	int16_t x3788 = 1647;
	volatile int32_t t108 = -1;

    t108 = (((x3785<=x3786)>>x3787)==x3788);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x3805 = INT32_MAX;
	int32_t x3806 = INT32_MAX;
	int16_t x3807 = 7;
	int32_t x3808 = -6487848;
	int32_t t109 = 80098;

    t109 = (((x3805<=x3806)>>x3807)==x3808);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x3813 = 805;
	uint16_t x3814 = UINT16_MAX;
	int32_t x3815 = 1;
	volatile int32_t x3816 = INT32_MIN;
	static volatile int32_t t110 = 402;

    t110 = (((x3813<=x3814)>>x3815)==x3816);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x3853 = 19717919038818621LLU;
	int64_t x3854 = -1LL;
	uint8_t x3855 = 3U;
	int32_t t111 = -1933716;

    t111 = (((x3853<=x3854)>>x3855)==x3856);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x3913 = INT32_MIN;
	int8_t x3916 = INT8_MAX;
	int32_t t112 = 478;

    t112 = (((x3913<=x3914)>>x3915)==x3916);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x3917 = INT8_MIN;
	int16_t x3918 = 16;
	static uint16_t x3919 = 0U;
	int64_t x3920 = INT64_MIN;
	int32_t t113 = 9907035;

    t113 = (((x3917<=x3918)>>x3919)==x3920);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x3945 = INT16_MIN;
	int64_t x3948 = INT64_MAX;
	static volatile int32_t t114 = 0;

    t114 = (((x3945<=x3946)>>x3947)==x3948);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x3982 = -1;
	int8_t x3983 = 0;
	static int32_t x3984 = -1;

    t115 = (((x3981<=x3982)>>x3983)==x3984);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x4021 = INT16_MIN;
	uint8_t x4022 = UINT8_MAX;

    t116 = (((x4021<=x4022)>>x4023)==x4024);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x4093 = INT64_MAX;
	static int64_t x4094 = INT64_MIN;
	uint16_t x4095 = 1U;
	volatile int16_t x4096 = 50;

    t117 = (((x4093<=x4094)>>x4095)==x4096);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x4101 = 28U;
	volatile int16_t x4102 = 2;
	uint16_t x4103 = 3U;
	int8_t x4104 = -24;
	int32_t t118 = 9767;

    t118 = (((x4101<=x4102)>>x4103)==x4104);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x4113 = -1;
	static uint8_t x4114 = 63U;
	int8_t x4115 = 1;
	int32_t t119 = -5252;

    t119 = (((x4113<=x4114)>>x4115)==x4116);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x4133 = INT64_MIN;
	int32_t x4134 = INT32_MIN;
	int32_t t120 = 92;

    t120 = (((x4133<=x4134)>>x4135)==x4136);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x4389 = 1048315U;
	volatile int32_t x4390 = 4263;
	static int32_t x4392 = INT32_MIN;
	int32_t t121 = -28;

    t121 = (((x4389<=x4390)>>x4391)==x4392);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x4409 = 0U;
	uint8_t x4410 = 0U;
	volatile int16_t x4412 = INT16_MIN;
	volatile int32_t t122 = 112;

    t122 = (((x4409<=x4410)>>x4411)==x4412);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x4425 = UINT16_MAX;
	volatile int8_t x4426 = INT8_MAX;
	uint8_t x4427 = 4U;
	uint8_t x4428 = 62U;
	int32_t t123 = 0;

    t123 = (((x4425<=x4426)>>x4427)==x4428);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x4441 = INT32_MAX;
	volatile int32_t x4442 = INT32_MIN;
	uint16_t x4443 = 12U;
	uint64_t x4444 = 18524659004596LLU;
	volatile int32_t t124 = 11902;

    t124 = (((x4441<=x4442)>>x4443)==x4444);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x4473 = UINT8_MAX;
	int16_t x4474 = -1;
	static int8_t x4476 = INT8_MIN;
	int32_t t125 = 0;

    t125 = (((x4473<=x4474)>>x4475)==x4476);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x4481 = 62U;
	uint16_t x4482 = UINT16_MAX;
	volatile uint16_t x4483 = 29U;
	int32_t x4484 = INT32_MAX;
	int32_t t126 = -782087;

    t126 = (((x4481<=x4482)>>x4483)==x4484);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x4517 = 2U;
	uint64_t x4518 = UINT64_MAX;
	volatile int8_t x4519 = 0;
	static volatile uint8_t x4520 = 7U;
	volatile int32_t t127 = -14362829;

    t127 = (((x4517<=x4518)>>x4519)==x4520);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x4653 = INT32_MIN;
	uint16_t x4655 = 3U;
	uint8_t x4656 = 1U;
	volatile int32_t t128 = -668224326;

    t128 = (((x4653<=x4654)>>x4655)==x4656);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x4661 = 0U;
	int8_t x4662 = 54;
	volatile uint16_t x4664 = 11210U;
	volatile int32_t t129 = 250980;

    t129 = (((x4661<=x4662)>>x4663)==x4664);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x4717 = UINT16_MAX;
	static uint8_t x4719 = 7U;
	int32_t t130 = 1659;

    t130 = (((x4717<=x4718)>>x4719)==x4720);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x4749 = 23U;
	uint16_t x4750 = 141U;
	uint8_t x4751 = 15U;
	int16_t x4752 = INT16_MIN;
	int32_t t131 = 2651;

    t131 = (((x4749<=x4750)>>x4751)==x4752);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x4794 = INT64_MIN;
	uint8_t x4795 = 7U;
	volatile uint32_t x4796 = 13U;
	volatile int32_t t132 = 379996;

    t132 = (((x4793<=x4794)>>x4795)==x4796);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x4817 = 19894434LLU;
	static uint64_t x4818 = 65915728757268611LLU;
	uint8_t x4819 = 31U;
	static volatile uint8_t x4820 = 2U;
	volatile int32_t t133 = -143;

    t133 = (((x4817<=x4818)>>x4819)==x4820);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x4861 = INT8_MIN;
	static volatile int16_t x4863 = 0;
	int8_t x4864 = 13;
	int32_t t134 = -43129;

    t134 = (((x4861<=x4862)>>x4863)==x4864);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x4866 = INT8_MAX;
	uint8_t x4867 = 12U;
	int16_t x4868 = 1;
	static int32_t t135 = -1;

    t135 = (((x4865<=x4866)>>x4867)==x4868);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x4877 = 202LL;
	uint16_t x4878 = 569U;
	uint8_t x4879 = 6U;
	volatile int32_t x4880 = INT32_MIN;
	int32_t t136 = -463;

    t136 = (((x4877<=x4878)>>x4879)==x4880);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x4909 = 49941098217LLU;
	uint8_t x4910 = UINT8_MAX;
	uint8_t x4911 = 2U;
	static volatile int16_t x4912 = INT16_MIN;
	volatile int32_t t137 = 182;

    t137 = (((x4909<=x4910)>>x4911)==x4912);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x4918 = 13062;
	int16_t x4919 = 0;
	volatile int16_t x4920 = INT16_MAX;
	volatile int32_t t138 = -1;

    t138 = (((x4917<=x4918)>>x4919)==x4920);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x4941 = UINT32_MAX;
	uint8_t x4942 = UINT8_MAX;
	static uint8_t x4943 = 14U;
	int8_t x4944 = -1;
	volatile int32_t t139 = -257;

    t139 = (((x4941<=x4942)>>x4943)==x4944);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x4973 = INT32_MAX;
	volatile int16_t x4975 = 10;
	int32_t t140 = -1;

    t140 = (((x4973<=x4974)>>x4975)==x4976);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x4989 = INT8_MIN;
	int8_t x4990 = INT8_MAX;
	int64_t x4992 = -1LL;
	int32_t t141 = -1;

    t141 = (((x4989<=x4990)>>x4991)==x4992);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x5033 = INT16_MIN;
	int8_t x5034 = INT8_MIN;
	static int8_t x5036 = -2;
	volatile int32_t t142 = 936;

    t142 = (((x5033<=x5034)>>x5035)==x5036);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x5057 = 736434LL;
	int8_t x5058 = INT8_MIN;
	int16_t x5060 = -8895;

    t143 = (((x5057<=x5058)>>x5059)==x5060);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x5117 = INT16_MIN;
	int64_t x5118 = INT64_MIN;
	int32_t x5120 = INT32_MAX;
	int32_t t144 = 5857244;

    t144 = (((x5117<=x5118)>>x5119)==x5120);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x5121 = 284306348LLU;
	static uint8_t x5122 = 1U;
	static uint16_t x5123 = 0U;
	volatile int32_t x5124 = -1;
	volatile int32_t t145 = -114709;

    t145 = (((x5121<=x5122)>>x5123)==x5124);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x5137 = -189999912;
	int64_t x5138 = -1LL;
	uint64_t x5139 = 24LLU;
	static uint8_t x5140 = UINT8_MAX;
	volatile int32_t t146 = 760734;

    t146 = (((x5137<=x5138)>>x5139)==x5140);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x5201 = 228386350LLU;
	int16_t x5204 = -66;
	int32_t t147 = 138356;

    t147 = (((x5201<=x5202)>>x5203)==x5204);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x5225 = UINT32_MAX;
	int32_t x5226 = INT32_MAX;
	volatile uint16_t x5227 = 28U;
	volatile int64_t x5228 = INT64_MIN;
	volatile int32_t t148 = 248003;

    t148 = (((x5225<=x5226)>>x5227)==x5228);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x5253 = UINT16_MAX;
	int8_t x5254 = 0;
	int16_t x5255 = 1;
	int32_t x5256 = -1004728746;
	static volatile int32_t t149 = -58;

    t149 = (((x5253<=x5254)>>x5255)==x5256);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x5301 = 11296LL;
	uint64_t x5302 = UINT64_MAX;
	int32_t x5303 = 0;
	int16_t x5304 = INT16_MAX;
	volatile int32_t t150 = 5009;

    t150 = (((x5301<=x5302)>>x5303)==x5304);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x5321 = -12324;
	volatile int8_t x5322 = -13;
	int32_t t151 = 1529;

    t151 = (((x5321<=x5322)>>x5323)==x5324);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x5358 = INT64_MIN;
	uint64_t x5360 = 44336912286LLU;
	volatile int32_t t152 = 21;

    t152 = (((x5357<=x5358)>>x5359)==x5360);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x5369 = INT64_MAX;
	static int8_t x5370 = -24;
	uint16_t x5371 = 4U;
	int32_t t153 = -183557258;

    t153 = (((x5369<=x5370)>>x5371)==x5372);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x5387 = 3U;
	uint32_t x5388 = 2194U;

    t154 = (((x5385<=x5386)>>x5387)==x5388);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x5401 = 2022082;
	int8_t x5403 = 4;
	uint32_t x5404 = UINT32_MAX;
	static volatile int32_t t155 = 157881;

    t155 = (((x5401<=x5402)>>x5403)==x5404);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x5441 = UINT32_MAX;
	uint64_t x5444 = 610954633448384LLU;

    t156 = (((x5441<=x5442)>>x5443)==x5444);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x5485 = -1LL;
	volatile int16_t x5486 = -6;
	int8_t x5488 = 1;
	volatile int32_t t157 = 3470;

    t157 = (((x5485<=x5486)>>x5487)==x5488);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x5585 = INT8_MIN;
	volatile uint16_t x5587 = 0U;
	int32_t x5588 = -79063;
	static volatile int32_t t158 = -77680;

    t158 = (((x5585<=x5586)>>x5587)==x5588);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x5593 = 248U;
	uint64_t x5594 = UINT64_MAX;
	uint8_t x5595 = 17U;
	int8_t x5596 = INT8_MIN;
	int32_t t159 = 164158309;

    t159 = (((x5593<=x5594)>>x5595)==x5596);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x5601 = INT32_MIN;
	int64_t x5602 = -34490923652LL;
	int32_t x5604 = INT32_MAX;
	volatile int32_t t160 = -1;

    t160 = (((x5601<=x5602)>>x5603)==x5604);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x5654 = 0;
	uint8_t x5655 = 1U;
	int32_t x5656 = -1;
	static int32_t t161 = 55894468;

    t161 = (((x5653<=x5654)>>x5655)==x5656);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x5717 = 0;
	int32_t x5718 = -4683946;
	static int32_t x5720 = INT32_MIN;
	int32_t t162 = 94719371;

    t162 = (((x5717<=x5718)>>x5719)==x5720);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x5741 = UINT64_MAX;
	int16_t x5742 = 2;
	uint16_t x5743 = 1U;
	uint64_t x5744 = 28859LLU;
	int32_t t163 = 32;

    t163 = (((x5741<=x5742)>>x5743)==x5744);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int64_t x5745 = 2049841884997LL;
	int32_t x5746 = 781;
	static volatile int8_t x5747 = 1;
	static int8_t x5748 = INT8_MIN;
	volatile int32_t t164 = 1;

    t164 = (((x5745<=x5746)>>x5747)==x5748);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x5769 = UINT32_MAX;
	uint32_t x5770 = 43225U;

    t165 = (((x5769<=x5770)>>x5771)==x5772);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x5773 = INT16_MAX;
	static uint32_t x5775 = 3U;
	int16_t x5776 = -1;
	int32_t t166 = -38415;

    t166 = (((x5773<=x5774)>>x5775)==x5776);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x5786 = -6458825;
	uint64_t x5787 = 6LLU;
	int32_t t167 = -27653;

    t167 = (((x5785<=x5786)>>x5787)==x5788);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x5801 = INT8_MIN;
	static int8_t x5802 = -1;
	static volatile uint8_t x5803 = 18U;
	int32_t x5804 = INT32_MAX;

    t168 = (((x5801<=x5802)>>x5803)==x5804);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x5833 = 0LLU;
	int64_t x5834 = INT64_MIN;
	static int8_t x5835 = 2;
	static uint16_t x5836 = 4U;
	static volatile int32_t t169 = 1196;

    t169 = (((x5833<=x5834)>>x5835)==x5836);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x5893 = -11;
	static int32_t x5894 = -1;
	int64_t x5895 = 7LL;
	int64_t x5896 = INT64_MIN;
	volatile int32_t t170 = 36862269;

    t170 = (((x5893<=x5894)>>x5895)==x5896);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x5930 = UINT32_MAX;
	volatile uint8_t x5931 = 28U;
	uint32_t x5932 = 213U;
	static volatile int32_t t171 = 42844;

    t171 = (((x5929<=x5930)>>x5931)==x5932);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x5989 = -65093259LL;
	int16_t x5990 = -69;
	int32_t x5992 = 70291;
	int32_t t172 = 1065;

    t172 = (((x5989<=x5990)>>x5991)==x5992);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x5994 = -2749;
	int64_t x5996 = -1LL;
	volatile int32_t t173 = -138;

    t173 = (((x5993<=x5994)>>x5995)==x5996);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x6022 = INT8_MAX;
	int8_t x6024 = INT8_MAX;
	int32_t t174 = -3192;

    t174 = (((x6021<=x6022)>>x6023)==x6024);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x6037 = INT64_MAX;
	volatile int32_t x6040 = 51870810;
	int32_t t175 = -1;

    t175 = (((x6037<=x6038)>>x6039)==x6040);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x6057 = INT8_MAX;
	int16_t x6058 = INT16_MIN;
	uint16_t x6059 = 1U;
	static volatile int8_t x6060 = -7;
	volatile int32_t t176 = 120;

    t176 = (((x6057<=x6058)>>x6059)==x6060);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x6153 = 7;
	static uint32_t x6154 = 1U;
	volatile uint8_t x6155 = 19U;
	int32_t x6156 = INT32_MAX;
	volatile int32_t t177 = 0;

    t177 = (((x6153<=x6154)>>x6155)==x6156);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x6161 = -1LL;
	volatile uint32_t x6162 = UINT32_MAX;
	volatile uint8_t x6163 = 1U;
	volatile int32_t t178 = -1;

    t178 = (((x6161<=x6162)>>x6163)==x6164);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x6185 = INT64_MIN;
	static volatile int32_t x6186 = INT32_MIN;
	uint16_t x6187 = 25U;
	static int16_t x6188 = -478;
	int32_t t179 = 65337;

    t179 = (((x6185<=x6186)>>x6187)==x6188);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x6189 = UINT8_MAX;
	int16_t x6190 = -91;
	uint8_t x6191 = 1U;
	int64_t x6192 = INT64_MIN;
	volatile int32_t t180 = -8457;

    t180 = (((x6189<=x6190)>>x6191)==x6192);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x6193 = INT64_MIN;
	static uint64_t x6194 = UINT64_MAX;
	static volatile int16_t x6195 = 24;

    t181 = (((x6193<=x6194)>>x6195)==x6196);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x6205 = -1LL;
	static uint8_t x6206 = UINT8_MAX;
	static uint64_t x6208 = 899500964LLU;
	int32_t t182 = -1;

    t182 = (((x6205<=x6206)>>x6207)==x6208);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x6238 = INT8_MAX;
	static volatile int32_t x6239 = 5;
	int32_t t183 = 975;

    t183 = (((x6237<=x6238)>>x6239)==x6240);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int32_t x6289 = INT32_MAX;
	int64_t x6290 = 1LL;
	int8_t x6291 = 0;
	int16_t x6292 = INT16_MIN;
	volatile int32_t t184 = -73992912;

    t184 = (((x6289<=x6290)>>x6291)==x6292);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x6301 = UINT32_MAX;
	uint64_t x6302 = UINT64_MAX;
	int16_t x6304 = INT16_MIN;

    t185 = (((x6301<=x6302)>>x6303)==x6304);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x6321 = UINT32_MAX;
	uint16_t x6322 = 79U;
	static int8_t x6323 = 0;
	int64_t x6324 = INT64_MIN;
	volatile int32_t t186 = 36238;

    t186 = (((x6321<=x6322)>>x6323)==x6324);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x6329 = -391;
	uint16_t x6330 = 15U;
	static volatile uint8_t x6331 = 1U;
	volatile uint8_t x6332 = UINT8_MAX;

    t187 = (((x6329<=x6330)>>x6331)==x6332);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x6345 = INT8_MAX;
	int16_t x6346 = -39;
	uint32_t x6347 = 13U;
	int32_t x6348 = -1;
	int32_t t188 = 227;

    t188 = (((x6345<=x6346)>>x6347)==x6348);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x6365 = 24;
	volatile int64_t x6366 = 6LL;
	static uint16_t x6367 = 0U;
	uint32_t x6368 = 5386819U;
	int32_t t189 = 138763;

    t189 = (((x6365<=x6366)>>x6367)==x6368);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x6441 = 0U;
	int64_t x6442 = INT64_MIN;
	uint16_t x6444 = 1236U;
	int32_t t190 = 1;

    t190 = (((x6441<=x6442)>>x6443)==x6444);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x6457 = INT8_MIN;
	static int16_t x6458 = INT16_MIN;
	int8_t x6459 = 1;
	int32_t x6460 = 423346672;
	static volatile int32_t t191 = 410091;

    t191 = (((x6457<=x6458)>>x6459)==x6460);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x6466 = INT8_MAX;
	int16_t x6468 = -11553;
	volatile int32_t t192 = 3450;

    t192 = (((x6465<=x6466)>>x6467)==x6468);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x6493 = INT16_MIN;
	static int16_t x6494 = 1;
	int8_t x6496 = -1;
	static volatile int32_t t193 = -3;

    t193 = (((x6493<=x6494)>>x6495)==x6496);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x6537 = -1;
	volatile uint8_t x6539 = 1U;
	volatile int32_t x6540 = INT32_MAX;
	volatile int32_t t194 = 1980;

    t194 = (((x6537<=x6538)>>x6539)==x6540);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x6549 = -1LL;
	int8_t x6550 = -1;
	static int32_t x6552 = INT32_MIN;

    t195 = (((x6549<=x6550)>>x6551)==x6552);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x6554 = INT64_MAX;
	int8_t x6555 = 15;
	int64_t x6556 = -1LL;
	int32_t t196 = 39127972;

    t196 = (((x6553<=x6554)>>x6555)==x6556);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x6581 = INT64_MAX;
	static int16_t x6582 = INT16_MAX;
	uint8_t x6583 = 13U;
	static int8_t x6584 = 1;
	int32_t t197 = -446773;

    t197 = (((x6581<=x6582)>>x6583)==x6584);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x6702 = INT32_MIN;
	uint8_t x6703 = 0U;
	int32_t x6704 = INT32_MAX;
	volatile int32_t t198 = 67794550;

    t198 = (((x6701<=x6702)>>x6703)==x6704);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x6717 = -1;
	int16_t x6719 = 8;
	static int16_t x6720 = INT16_MIN;
	volatile int32_t t199 = 169210;

    t199 = (((x6717<=x6718)>>x6719)==x6720);

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


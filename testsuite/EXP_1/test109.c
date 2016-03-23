
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

static int8_t x87 = 27;
uint8_t x104 = 1U;
int32_t t2 = 19;
int32_t t3 = -1461209;
int16_t x394 = INT16_MIN;
int16_t x521 = -1349;
volatile int32_t x563 = INT32_MIN;
int16_t x565 = 1988;
volatile int32_t x646 = 3435032;
int16_t x666 = -1;
uint8_t x681 = 1U;
volatile int32_t x719 = INT32_MIN;
int32_t x815 = -1;
uint16_t x821 = UINT16_MAX;
uint64_t x853 = UINT64_MAX;
volatile uint16_t x854 = UINT16_MAX;
int16_t x919 = INT16_MAX;
int16_t x920 = 1;
volatile int32_t t22 = -2124310;
int16_t x957 = INT16_MIN;
volatile int32_t x958 = 8;
uint64_t x975 = UINT64_MAX;
volatile int32_t t24 = 147703665;
volatile int64_t x1102 = -1LL;
int64_t x1111 = -1LL;
static int64_t x1150 = INT64_MIN;
static volatile uint8_t x1156 = 31U;
volatile int32_t t31 = -1;
int8_t x1209 = INT8_MIN;
int64_t x1211 = 911814LL;
uint8_t x1216 = 3U;
int64_t x1275 = INT64_MIN;
int32_t t34 = -791256;
volatile uint8_t x1344 = 31U;
int32_t t37 = -98388028;
static uint8_t x1552 = 12U;
volatile int32_t t39 = 65921824;
int8_t x1595 = -1;
volatile int8_t x1601 = 17;
int16_t x1603 = -2;
uint8_t x1604 = 15U;
int32_t t41 = -121776;
uint64_t x1609 = UINT64_MAX;
int16_t x1613 = INT16_MAX;
volatile uint32_t x1645 = 1713599208U;
uint8_t x1646 = 6U;
uint32_t x1670 = 228397U;
static int16_t x1711 = INT16_MIN;
int32_t t48 = -44843;
static uint16_t x1728 = 1U;
int32_t t49 = -244037;
volatile int32_t t51 = -766244589;
static uint16_t x1857 = 12183U;
uint64_t x1878 = 300963LLU;
int32_t t56 = -643798;
volatile int32_t t57 = -5484;
uint16_t x2073 = UINT16_MAX;
static int16_t x2075 = INT16_MIN;
int32_t t58 = 275834;
static uint16_t x2194 = 9862U;
uint8_t x2196 = 1U;
int64_t x2330 = INT64_MIN;
uint64_t x2332 = 7LLU;
int32_t t65 = -130553;
uint8_t x2356 = 0U;
volatile int32_t t66 = -7;
volatile int32_t t67 = -771;
int8_t x2389 = INT8_MIN;
uint8_t x2392 = 14U;
int32_t t69 = -1988622;
static uint16_t x2471 = 3U;
int32_t t73 = -38940714;
volatile int32_t t75 = 482;
int64_t x2715 = 666944597LL;
int64_t x2749 = 10943LL;
int16_t x2751 = -602;
volatile uint64_t x2757 = 1491069471369279LLU;
int64_t x2781 = -15241455800668937LL;
static uint8_t x2783 = 13U;
int32_t t79 = 22966008;
volatile int32_t t80 = -25;
static uint8_t x2830 = 1U;
volatile uint16_t x2832 = 0U;
volatile int32_t t81 = 575089;
uint16_t x2834 = 93U;
static int32_t t82 = 3;
int8_t x2905 = INT8_MAX;
static int64_t x2969 = -13721055LL;
int8_t x2972 = 0;
volatile int16_t x3065 = -9594;
int32_t t87 = 329384;
volatile int8_t x3154 = 19;
uint8_t x3157 = 6U;
volatile uint16_t x3160 = 17U;
int32_t t89 = -30;
volatile int32_t t90 = 0;
int32_t x3223 = -72462215;
int32_t t91 = 51;
int32_t x3267 = INT32_MIN;
uint64_t x3394 = 174LLU;
static uint64_t x3409 = 775LLU;
volatile int32_t t97 = 258832579;
int32_t x3415 = INT32_MIN;
static volatile uint16_t x3438 = 1U;
static int32_t x3451 = -1;
int8_t x3495 = 0;
volatile uint8_t x3515 = UINT8_MAX;
int64_t x3518 = INT64_MIN;
volatile uint64_t x3557 = 900185795606LLU;
int8_t x3559 = -5;
static int32_t t107 = -29145;
uint16_t x3933 = 794U;
volatile int16_t x4041 = INT16_MAX;
uint8_t x4044 = 1U;
volatile int8_t x4046 = INT8_MIN;
volatile uint32_t x4092 = 1U;
uint8_t x4118 = 23U;
int32_t t117 = -317142;
static int32_t x4463 = INT32_MIN;
uint8_t x4464 = 3U;
static volatile int32_t t118 = 465256;
int64_t x4557 = INT64_MAX;
uint64_t x4631 = 187669173924314817LLU;
int8_t x4713 = -1;
int32_t t123 = -17745225;
static volatile int32_t t126 = -2;
volatile int32_t t128 = -380;
int8_t x4900 = 13;
uint8_t x4941 = UINT8_MAX;
uint16_t x4943 = UINT16_MAX;
int16_t x4976 = 0;
uint16_t x4986 = 0U;
volatile int32_t t132 = 5;
int32_t x4998 = 25162987;
int8_t x5013 = INT8_MAX;
static uint8_t x5016 = 0U;
volatile int8_t x5032 = 1;
uint64_t x5167 = 10756693LLU;
int32_t x5239 = INT32_MAX;
volatile uint64_t x5261 = 3999LLU;
volatile uint8_t x5264 = 4U;
volatile int32_t t138 = -187412;
int16_t x5331 = -10315;
int32_t t141 = 30059;
int32_t x5357 = -1;
volatile int16_t x5359 = 128;
int8_t x5369 = INT8_MAX;
volatile uint8_t x5372 = 1U;
uint64_t x5569 = 61406697333LLU;
static int32_t t146 = -259399;
uint64_t x5597 = 201263230LLU;
int16_t x5598 = INT16_MIN;
int32_t x5599 = 9568;
static int8_t x5600 = 0;
uint8_t x5629 = 3U;
int64_t x5632 = 7LL;
volatile uint16_t x5695 = 0U;
uint8_t x5744 = 28U;
int8_t x5765 = INT8_MIN;
uint8_t x5774 = 40U;
int16_t x5794 = -1;
int32_t t160 = -237;
int32_t x5879 = INT32_MIN;
static uint8_t x5880 = 0U;
int64_t x5918 = -1668087LL;
uint8_t x5920 = 2U;
int8_t x5985 = 1;
int16_t x6045 = -1760;
static int32_t x6046 = INT32_MAX;
volatile int32_t t165 = 213015407;
uint32_t x6070 = UINT32_MAX;
int32_t t166 = -1;
static int32_t t167 = 0;
uint32_t x6119 = UINT32_MAX;
volatile uint8_t x6164 = 11U;
volatile uint32_t x6357 = 54U;
volatile int8_t x6430 = -1;
int32_t t175 = -4;
volatile int32_t t176 = -25562;
static int16_t x6462 = -10992;
static uint32_t x6464 = 5U;
volatile int16_t x6479 = 5926;
uint16_t x6480 = 9U;
int64_t x6539 = INT64_MIN;
static int8_t x6541 = 0;
uint64_t x6553 = 6233085660578LLU;
int8_t x6555 = -1;
volatile uint16_t x6576 = 6U;
static int64_t x6593 = -277294149608042LL;
uint8_t x6594 = 1U;
uint8_t x6595 = 58U;
uint32_t x6782 = 72755U;
static uint8_t x6784 = 25U;
volatile int32_t t186 = 1;
static volatile int32_t t188 = 211;
int32_t x7089 = INT32_MAX;
uint8_t x7195 = 1U;
uint32_t x7247 = UINT32_MAX;
uint8_t x7248 = 9U;
static uint32_t x7271 = 14043U;
int64_t x7357 = 2270LL;
int64_t x7360 = 19LL;
int32_t x7387 = -1002466;


void f0(void) {
    	static int8_t x85 = INT8_MIN;
	int16_t x86 = INT16_MIN;
	volatile uint16_t x88 = 5U;
	static int32_t t0 = -3087;

    t0 = (((x85+x86)==x87)>>x88);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x101 = 3344678807LLU;
	uint32_t x102 = 4740U;
	uint16_t x103 = UINT16_MAX;
	static volatile int32_t t1 = -6;

    t1 = (((x101+x102)==x103)>>x104);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x197 = 0;
	uint32_t x198 = UINT32_MAX;
	static volatile int8_t x199 = -1;
	uint8_t x200 = 4U;

    t2 = (((x197+x198)==x199)>>x200);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x237 = 16U;
	int32_t x238 = INT32_MIN;
	int16_t x239 = INT16_MIN;
	uint32_t x240 = 5U;

    t3 = (((x237+x238)==x239)>>x240);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x301 = INT16_MIN;
	int8_t x302 = -1;
	static int64_t x303 = INT64_MIN;
	volatile uint16_t x304 = 1U;
	int32_t t4 = -146515001;

    t4 = (((x301+x302)==x303)>>x304);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x313 = 12U;
	static int8_t x314 = INT8_MIN;
	uint32_t x315 = 81U;
	int32_t x316 = 3;
	int32_t t5 = 0;

    t5 = (((x313+x314)==x315)>>x316);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x389 = 2027659844592424LL;
	uint32_t x390 = UINT32_MAX;
	static int16_t x391 = INT16_MIN;
	int8_t x392 = 5;
	int32_t t6 = 201;

    t6 = (((x389+x390)==x391)>>x392);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x393 = 61099629181816714LL;
	uint16_t x395 = UINT16_MAX;
	int8_t x396 = 0;
	static volatile int32_t t7 = -1;

    t7 = (((x393+x394)==x395)>>x396);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x522 = 1;
	int16_t x523 = -1;
	static int8_t x524 = 0;
	int32_t t8 = -8899;

    t8 = (((x521+x522)==x523)>>x524);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x561 = INT64_MIN;
	volatile uint16_t x562 = UINT16_MAX;
	static int16_t x564 = 24;
	int32_t t9 = 27;

    t9 = (((x561+x562)==x563)>>x564);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x566 = UINT64_MAX;
	uint32_t x567 = UINT32_MAX;
	uint16_t x568 = 23U;
	volatile int32_t t10 = 17652;

    t10 = (((x565+x566)==x567)>>x568);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x645 = 15427U;
	static uint8_t x647 = UINT8_MAX;
	uint16_t x648 = 3U;
	int32_t t11 = -244149;

    t11 = (((x645+x646)==x647)>>x648);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x665 = INT16_MIN;
	static uint64_t x667 = 4065LLU;
	uint8_t x668 = 0U;
	volatile int32_t t12 = -140;

    t12 = (((x665+x666)==x667)>>x668);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x682 = INT16_MAX;
	static uint64_t x683 = UINT64_MAX;
	uint16_t x684 = 7U;
	int32_t t13 = 14;

    t13 = (((x681+x682)==x683)>>x684);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x689 = INT32_MAX;
	int64_t x690 = 503590530364109LL;
	static int32_t x691 = INT32_MIN;
	uint16_t x692 = 3U;
	int32_t t14 = -171;

    t14 = (((x689+x690)==x691)>>x692);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x717 = 0;
	int16_t x718 = INT16_MIN;
	static int8_t x720 = 11;
	volatile int32_t t15 = 0;

    t15 = (((x717+x718)==x719)>>x720);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x813 = INT64_MIN;
	int64_t x814 = INT64_MAX;
	uint8_t x816 = 0U;
	volatile int32_t t16 = -445;

    t16 = (((x813+x814)==x815)>>x816);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x822 = 145U;
	int8_t x823 = INT8_MAX;
	uint8_t x824 = 20U;
	volatile int32_t t17 = 0;

    t17 = (((x821+x822)==x823)>>x824);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x855 = 6422504;
	volatile uint32_t x856 = 3U;
	int32_t t18 = 1;

    t18 = (((x853+x854)==x855)>>x856);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x869 = 2562985206287630LL;
	uint32_t x870 = 143U;
	uint8_t x871 = 61U;
	static int16_t x872 = 12;
	int32_t t19 = 404;

    t19 = (((x869+x870)==x871)>>x872);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x893 = UINT32_MAX;
	int8_t x894 = -1;
	static uint64_t x895 = 7398427956206056822LLU;
	int16_t x896 = 5;
	volatile int32_t t20 = 107;

    t20 = (((x893+x894)==x895)>>x896);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x917 = -1;
	volatile uint64_t x918 = UINT64_MAX;
	int32_t t21 = 56251025;

    t21 = (((x917+x918)==x919)>>x920);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x929 = 0;
	volatile uint32_t x930 = 1459U;
	int8_t x931 = -62;
	static uint16_t x932 = 15U;

    t22 = (((x929+x930)==x931)>>x932);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x959 = 1LL;
	uint8_t x960 = 11U;
	int32_t t23 = 23493031;

    t23 = (((x957+x958)==x959)>>x960);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x973 = UINT64_MAX;
	int8_t x974 = INT8_MIN;
	int8_t x976 = 0;

    t24 = (((x973+x974)==x975)>>x976);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x977 = 135389717221750295LLU;
	static volatile uint32_t x978 = UINT32_MAX;
	uint64_t x979 = 37588922167130588LLU;
	uint8_t x980 = 6U;
	int32_t t25 = -80357;

    t25 = (((x977+x978)==x979)>>x980);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int64_t x1025 = INT64_MIN;
	uint16_t x1026 = UINT16_MAX;
	uint32_t x1027 = 13765U;
	uint16_t x1028 = 2U;
	int32_t t26 = -136774953;

    t26 = (((x1025+x1026)==x1027)>>x1028);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x1085 = INT16_MIN;
	int32_t x1086 = 1;
	int16_t x1087 = -151;
	volatile uint8_t x1088 = 7U;
	static int32_t t27 = 82;

    t27 = (((x1085+x1086)==x1087)>>x1088);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x1101 = 781687440U;
	uint64_t x1103 = 7LLU;
	uint16_t x1104 = 5U;
	volatile int32_t t28 = 738811903;

    t28 = (((x1101+x1102)==x1103)>>x1104);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x1109 = 176740955271LL;
	volatile uint64_t x1110 = UINT64_MAX;
	static uint32_t x1112 = 14U;
	int32_t t29 = -1515301;

    t29 = (((x1109+x1110)==x1111)>>x1112);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x1149 = 679;
	static uint8_t x1151 = UINT8_MAX;
	uint16_t x1152 = 1U;
	int32_t t30 = 7080;

    t30 = (((x1149+x1150)==x1151)>>x1152);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x1153 = UINT16_MAX;
	int64_t x1154 = -1935483LL;
	int64_t x1155 = -16050524LL;

    t31 = (((x1153+x1154)==x1155)>>x1156);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint16_t x1210 = 81U;
	int8_t x1212 = 23;
	volatile int32_t t32 = 27004056;

    t32 = (((x1209+x1210)==x1211)>>x1212);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x1213 = UINT64_MAX;
	static int64_t x1214 = -1LL;
	uint8_t x1215 = UINT8_MAX;
	static volatile int32_t t33 = -119;

    t33 = (((x1213+x1214)==x1215)>>x1216);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x1273 = -1;
	volatile int32_t x1274 = -6889522;
	uint16_t x1276 = 26U;

    t34 = (((x1273+x1274)==x1275)>>x1276);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x1341 = INT8_MAX;
	int32_t x1342 = INT32_MIN;
	volatile int64_t x1343 = -1LL;
	static volatile int32_t t35 = -317310621;

    t35 = (((x1341+x1342)==x1343)>>x1344);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x1361 = 7;
	uint64_t x1362 = 855697745027LLU;
	uint64_t x1363 = UINT64_MAX;
	uint8_t x1364 = 0U;
	volatile int32_t t36 = 1113241;

    t36 = (((x1361+x1362)==x1363)>>x1364);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x1381 = 13878966U;
	uint64_t x1382 = 1269704LLU;
	static volatile uint64_t x1383 = 19460LLU;
	static uint64_t x1384 = 3LLU;

    t37 = (((x1381+x1382)==x1383)>>x1384);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x1409 = 1;
	int32_t x1410 = -1;
	int64_t x1411 = INT64_MAX;
	uint16_t x1412 = 17U;
	int32_t t38 = -177;

    t38 = (((x1409+x1410)==x1411)>>x1412);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x1549 = INT16_MAX;
	volatile int32_t x1550 = -237126;
	uint64_t x1551 = 24LLU;

    t39 = (((x1549+x1550)==x1551)>>x1552);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x1593 = 864;
	static uint32_t x1594 = 79078U;
	volatile uint8_t x1596 = 2U;
	volatile int32_t t40 = -831;

    t40 = (((x1593+x1594)==x1595)>>x1596);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x1602 = 44LLU;

    t41 = (((x1601+x1602)==x1603)>>x1604);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x1610 = UINT32_MAX;
	int32_t x1611 = INT32_MIN;
	volatile int8_t x1612 = 0;
	static int32_t t42 = -997;

    t42 = (((x1609+x1610)==x1611)>>x1612);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x1614 = 0U;
	int8_t x1615 = 2;
	uint8_t x1616 = 26U;
	int32_t t43 = -52;

    t43 = (((x1613+x1614)==x1615)>>x1616);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x1647 = INT16_MIN;
	int8_t x1648 = 22;
	int32_t t44 = -21499696;

    t44 = (((x1645+x1646)==x1647)>>x1648);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x1669 = 57156U;
	uint32_t x1671 = UINT32_MAX;
	static uint32_t x1672 = 1U;
	static volatile int32_t t45 = -1;

    t45 = (((x1669+x1670)==x1671)>>x1672);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x1697 = INT16_MAX;
	uint64_t x1698 = UINT64_MAX;
	int64_t x1699 = -1LL;
	int8_t x1700 = 10;
	volatile int32_t t46 = -5;

    t46 = (((x1697+x1698)==x1699)>>x1700);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x1709 = -1;
	int64_t x1710 = -3104012532907901181LL;
	uint8_t x1712 = 7U;
	static volatile int32_t t47 = -9288485;

    t47 = (((x1709+x1710)==x1711)>>x1712);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x1713 = 0U;
	volatile int64_t x1714 = INT64_MAX;
	volatile int32_t x1715 = INT32_MIN;
	int8_t x1716 = 28;

    t48 = (((x1713+x1714)==x1715)>>x1716);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x1725 = 4U;
	int64_t x1726 = INT64_MIN;
	uint8_t x1727 = 17U;

    t49 = (((x1725+x1726)==x1727)>>x1728);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x1741 = INT8_MAX;
	int64_t x1742 = INT64_MIN;
	int64_t x1743 = INT64_MAX;
	int8_t x1744 = 1;
	int32_t t50 = 16047;

    t50 = (((x1741+x1742)==x1743)>>x1744);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x1777 = 44153LL;
	volatile int64_t x1778 = -1LL;
	uint32_t x1779 = UINT32_MAX;
	uint16_t x1780 = 1U;

    t51 = (((x1777+x1778)==x1779)>>x1780);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x1858 = INT8_MAX;
	volatile uint8_t x1859 = 5U;
	int32_t x1860 = 31;
	static int32_t t52 = 401214854;

    t52 = (((x1857+x1858)==x1859)>>x1860);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x1877 = -283;
	int64_t x1879 = INT64_MAX;
	int16_t x1880 = 14;
	int32_t t53 = 975;

    t53 = (((x1877+x1878)==x1879)>>x1880);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x1905 = INT16_MIN;
	static int32_t x1906 = INT32_MAX;
	static uint32_t x1907 = UINT32_MAX;
	int32_t x1908 = 15;
	int32_t t54 = 125;

    t54 = (((x1905+x1906)==x1907)>>x1908);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x1937 = -1;
	int8_t x1938 = INT8_MAX;
	int32_t x1939 = INT32_MIN;
	int16_t x1940 = 0;
	int32_t t55 = 1;

    t55 = (((x1937+x1938)==x1939)>>x1940);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x1977 = 0U;
	int8_t x1978 = INT8_MIN;
	int8_t x1979 = -1;
	int16_t x1980 = 11;

    t56 = (((x1977+x1978)==x1979)>>x1980);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x2025 = 3LLU;
	static uint64_t x2026 = 5531691660335728609LLU;
	static int64_t x2027 = -1LL;
	uint32_t x2028 = 2U;

    t57 = (((x2025+x2026)==x2027)>>x2028);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x2074 = INT16_MIN;
	int32_t x2076 = 0;

    t58 = (((x2073+x2074)==x2075)>>x2076);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x2109 = -1LL;
	uint32_t x2110 = 321U;
	static volatile int16_t x2111 = INT16_MAX;
	static int16_t x2112 = 1;
	int32_t t59 = -16073;

    t59 = (((x2109+x2110)==x2111)>>x2112);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x2121 = -9462408278835LL;
	int32_t x2122 = INT32_MAX;
	volatile int16_t x2123 = INT16_MIN;
	volatile uint16_t x2124 = 24U;
	int32_t t60 = 27678976;

    t60 = (((x2121+x2122)==x2123)>>x2124);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x2165 = UINT32_MAX;
	int64_t x2166 = INT64_MIN;
	uint8_t x2167 = UINT8_MAX;
	uint16_t x2168 = 3U;
	int32_t t61 = 3152911;

    t61 = (((x2165+x2166)==x2167)>>x2168);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x2193 = INT64_MIN;
	int32_t x2195 = INT32_MIN;
	static volatile int32_t t62 = -46416179;

    t62 = (((x2193+x2194)==x2195)>>x2196);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x2225 = INT16_MIN;
	static int32_t x2226 = INT32_MAX;
	volatile int32_t x2227 = INT32_MIN;
	uint64_t x2228 = 0LLU;
	int32_t t63 = -257117;

    t63 = (((x2225+x2226)==x2227)>>x2228);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x2313 = 80U;
	int8_t x2314 = -1;
	volatile uint8_t x2315 = 15U;
	uint16_t x2316 = 7U;
	volatile int32_t t64 = 7230;

    t64 = (((x2313+x2314)==x2315)>>x2316);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x2329 = 3;
	int8_t x2331 = INT8_MIN;

    t65 = (((x2329+x2330)==x2331)>>x2332);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint8_t x2353 = 2U;
	int8_t x2354 = INT8_MAX;
	int8_t x2355 = -29;

    t66 = (((x2353+x2354)==x2355)>>x2356);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x2377 = 1652465024872805560LLU;
	static int32_t x2378 = INT32_MIN;
	static int32_t x2379 = INT32_MAX;
	uint32_t x2380 = 0U;

    t67 = (((x2377+x2378)==x2379)>>x2380);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x2390 = 1LL;
	volatile int8_t x2391 = -1;
	int32_t t68 = 931;

    t68 = (((x2389+x2390)==x2391)>>x2392);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x2421 = -1LL;
	int8_t x2422 = 7;
	int8_t x2423 = INT8_MIN;
	uint8_t x2424 = 12U;

    t69 = (((x2421+x2422)==x2423)>>x2424);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x2425 = -3;
	volatile int8_t x2426 = INT8_MIN;
	uint16_t x2427 = 18U;
	uint8_t x2428 = 29U;
	volatile int32_t t70 = -3233;

    t70 = (((x2425+x2426)==x2427)>>x2428);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x2437 = INT16_MIN;
	uint32_t x2438 = 8U;
	static volatile int32_t x2439 = INT32_MIN;
	volatile int16_t x2440 = 6;
	volatile int32_t t71 = 1;

    t71 = (((x2437+x2438)==x2439)>>x2440);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x2469 = 47489629U;
	volatile int64_t x2470 = 180314LL;
	volatile int8_t x2472 = 6;
	volatile int32_t t72 = 0;

    t72 = (((x2469+x2470)==x2471)>>x2472);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x2473 = -1;
	volatile uint16_t x2474 = UINT16_MAX;
	static int16_t x2475 = 64;
	uint32_t x2476 = 7U;

    t73 = (((x2473+x2474)==x2475)>>x2476);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x2517 = 214542210;
	int8_t x2518 = -1;
	volatile int8_t x2519 = -13;
	volatile uint16_t x2520 = 1U;
	static int32_t t74 = 197734;

    t74 = (((x2517+x2518)==x2519)>>x2520);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x2581 = 1859661358574139741LL;
	static int8_t x2582 = -10;
	int16_t x2583 = INT16_MIN;
	int16_t x2584 = 7;

    t75 = (((x2581+x2582)==x2583)>>x2584);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x2713 = INT16_MIN;
	volatile int64_t x2714 = -16LL;
	static uint8_t x2716 = 13U;
	static int32_t t76 = 36;

    t76 = (((x2713+x2714)==x2715)>>x2716);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x2750 = -1348344023186107LL;
	int32_t x2752 = 0;
	volatile int32_t t77 = 889;

    t77 = (((x2749+x2750)==x2751)>>x2752);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x2758 = 13254972810337126LLU;
	volatile int16_t x2759 = INT16_MAX;
	uint16_t x2760 = 4U;
	int32_t t78 = -2071;

    t78 = (((x2757+x2758)==x2759)>>x2760);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x2782 = INT64_MAX;
	uint16_t x2784 = 2U;

    t79 = (((x2781+x2782)==x2783)>>x2784);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x2797 = 5LLU;
	volatile int64_t x2798 = INT64_MIN;
	int16_t x2799 = INT16_MAX;
	int16_t x2800 = 0;

    t80 = (((x2797+x2798)==x2799)>>x2800);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x2829 = INT16_MIN;
	int8_t x2831 = INT8_MIN;

    t81 = (((x2829+x2830)==x2831)>>x2832);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x2833 = 35U;
	uint16_t x2835 = UINT16_MAX;
	static volatile uint8_t x2836 = 2U;

    t82 = (((x2833+x2834)==x2835)>>x2836);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x2865 = INT32_MAX;
	uint32_t x2866 = 14658860U;
	int64_t x2867 = -1LL;
	static int16_t x2868 = 0;
	int32_t t83 = 5;

    t83 = (((x2865+x2866)==x2867)>>x2868);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x2906 = -808;
	int16_t x2907 = -224;
	int16_t x2908 = 1;
	int32_t t84 = -8;

    t84 = (((x2905+x2906)==x2907)>>x2908);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x2970 = INT16_MIN;
	int16_t x2971 = 230;
	int32_t t85 = 554426;

    t85 = (((x2969+x2970)==x2971)>>x2972);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x3066 = 2U;
	volatile int16_t x3067 = 2;
	int16_t x3068 = 5;
	int32_t t86 = 852;

    t86 = (((x3065+x3066)==x3067)>>x3068);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x3097 = UINT8_MAX;
	static int16_t x3098 = INT16_MAX;
	int64_t x3099 = INT64_MIN;
	volatile uint64_t x3100 = 0LLU;

    t87 = (((x3097+x3098)==x3099)>>x3100);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x3153 = INT32_MIN;
	static uint8_t x3155 = 0U;
	int8_t x3156 = 1;
	volatile int32_t t88 = 3750;

    t88 = (((x3153+x3154)==x3155)>>x3156);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x3158 = 2130567729154LLU;
	static volatile int64_t x3159 = 10350LL;

    t89 = (((x3157+x3158)==x3159)>>x3160);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x3193 = 1474222U;
	int32_t x3194 = -160425627;
	uint64_t x3195 = UINT64_MAX;
	static uint8_t x3196 = 4U;

    t90 = (((x3193+x3194)==x3195)>>x3196);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x3221 = 21U;
	int64_t x3222 = INT64_MIN;
	int16_t x3224 = 3;

    t91 = (((x3221+x3222)==x3223)>>x3224);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x3265 = -289801611989LL;
	static int32_t x3266 = INT32_MAX;
	uint8_t x3268 = 0U;
	volatile int32_t t92 = 10;

    t92 = (((x3265+x3266)==x3267)>>x3268);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x3277 = 68U;
	int8_t x3278 = 0;
	volatile int8_t x3279 = 1;
	volatile uint8_t x3280 = 3U;
	volatile int32_t t93 = 6018;

    t93 = (((x3277+x3278)==x3279)>>x3280);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x3305 = UINT16_MAX;
	volatile uint32_t x3306 = 1981U;
	int8_t x3307 = INT8_MAX;
	int8_t x3308 = 0;
	static int32_t t94 = 76176853;

    t94 = (((x3305+x3306)==x3307)>>x3308);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x3381 = INT16_MIN;
	volatile uint16_t x3382 = 75U;
	uint64_t x3383 = 12511743369562LLU;
	int16_t x3384 = 0;
	volatile int32_t t95 = -287309452;

    t95 = (((x3381+x3382)==x3383)>>x3384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x3393 = -4228;
	static int8_t x3395 = INT8_MIN;
	int32_t x3396 = 3;
	int32_t t96 = -1786;

    t96 = (((x3393+x3394)==x3395)>>x3396);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x3410 = 1;
	static volatile int32_t x3411 = -1;
	uint8_t x3412 = 0U;

    t97 = (((x3409+x3410)==x3411)>>x3412);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x3413 = UINT16_MAX;
	volatile int32_t x3414 = INT32_MIN;
	int8_t x3416 = 16;
	volatile int32_t t98 = 88044365;

    t98 = (((x3413+x3414)==x3415)>>x3416);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x3437 = -1;
	uint32_t x3439 = 1U;
	uint8_t x3440 = 3U;
	int32_t t99 = 110692;

    t99 = (((x3437+x3438)==x3439)>>x3440);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x3449 = -21LL;
	uint32_t x3450 = 0U;
	int8_t x3452 = 0;
	static volatile int32_t t100 = 1;

    t100 = (((x3449+x3450)==x3451)>>x3452);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x3461 = 778U;
	uint64_t x3462 = 10LLU;
	volatile uint16_t x3463 = 1910U;
	int8_t x3464 = 15;
	int32_t t101 = -1085;

    t101 = (((x3461+x3462)==x3463)>>x3464);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x3493 = 1U;
	int32_t x3494 = -375;
	static uint32_t x3496 = 2U;
	static int32_t t102 = 16227456;

    t102 = (((x3493+x3494)==x3495)>>x3496);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x3513 = INT16_MIN;
	int32_t x3514 = INT32_MAX;
	int16_t x3516 = 0;
	volatile int32_t t103 = -91923220;

    t103 = (((x3513+x3514)==x3515)>>x3516);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x3517 = 1;
	int8_t x3519 = -1;
	uint8_t x3520 = 24U;
	volatile int32_t t104 = 26;

    t104 = (((x3517+x3518)==x3519)>>x3520);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x3558 = -2005924503184333695LL;
	int8_t x3560 = 8;
	int32_t t105 = -1945;

    t105 = (((x3557+x3558)==x3559)>>x3560);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x3677 = INT32_MAX;
	uint64_t x3678 = UINT64_MAX;
	int16_t x3679 = INT16_MAX;
	uint8_t x3680 = 0U;
	int32_t t106 = -55141;

    t106 = (((x3677+x3678)==x3679)>>x3680);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint8_t x3705 = UINT8_MAX;
	uint16_t x3706 = UINT16_MAX;
	int8_t x3707 = INT8_MIN;
	int8_t x3708 = 2;

    t107 = (((x3705+x3706)==x3707)>>x3708);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x3765 = 0;
	int32_t x3766 = -6691;
	static uint32_t x3767 = 967U;
	uint8_t x3768 = 4U;
	int32_t t108 = -258542;

    t108 = (((x3765+x3766)==x3767)>>x3768);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint64_t x3934 = UINT64_MAX;
	int32_t x3935 = -1;
	uint8_t x3936 = 14U;
	static int32_t t109 = 136846514;

    t109 = (((x3933+x3934)==x3935)>>x3936);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x4042 = -20573030LL;
	int32_t x4043 = 8116;
	int32_t t110 = 24;

    t110 = (((x4041+x4042)==x4043)>>x4044);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x4045 = 11U;
	int16_t x4047 = -466;
	int8_t x4048 = 6;
	volatile int32_t t111 = 0;

    t111 = (((x4045+x4046)==x4047)>>x4048);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x4089 = -1LL;
	uint64_t x4090 = 125942782198201772LLU;
	uint64_t x4091 = 431LLU;
	volatile int32_t t112 = 950;

    t112 = (((x4089+x4090)==x4091)>>x4092);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x4117 = INT16_MIN;
	uint32_t x4119 = 6U;
	int8_t x4120 = 2;
	int32_t t113 = 0;

    t113 = (((x4117+x4118)==x4119)>>x4120);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x4181 = 11U;
	int8_t x4182 = -1;
	int16_t x4183 = -1;
	int8_t x4184 = 1;
	volatile int32_t t114 = -1;

    t114 = (((x4181+x4182)==x4183)>>x4184);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x4285 = -1LL;
	uint64_t x4286 = 41485589368LLU;
	volatile int64_t x4287 = -514751503810327LL;
	uint32_t x4288 = 3U;
	int32_t t115 = 201;

    t115 = (((x4285+x4286)==x4287)>>x4288);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x4353 = UINT8_MAX;
	volatile int8_t x4354 = 2;
	static uint8_t x4355 = UINT8_MAX;
	uint8_t x4356 = 20U;
	volatile int32_t t116 = 1849708;

    t116 = (((x4353+x4354)==x4355)>>x4356);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x4425 = 5U;
	int16_t x4426 = INT16_MIN;
	uint64_t x4427 = 131091536LLU;
	volatile uint8_t x4428 = 26U;

    t117 = (((x4425+x4426)==x4427)>>x4428);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x4461 = INT64_MIN;
	static volatile int64_t x4462 = INT64_MAX;

    t118 = (((x4461+x4462)==x4463)>>x4464);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x4558 = -1;
	volatile int64_t x4559 = INT64_MIN;
	uint16_t x4560 = 0U;
	volatile int32_t t119 = 3468710;

    t119 = (((x4557+x4558)==x4559)>>x4560);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x4585 = 15U;
	static int8_t x4586 = 27;
	uint8_t x4587 = UINT8_MAX;
	volatile int32_t x4588 = 1;
	int32_t t120 = 956;

    t120 = (((x4585+x4586)==x4587)>>x4588);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x4629 = UINT16_MAX;
	int8_t x4630 = INT8_MIN;
	static uint16_t x4632 = 3U;
	volatile int32_t t121 = -369781;

    t121 = (((x4629+x4630)==x4631)>>x4632);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x4714 = UINT32_MAX;
	static uint16_t x4715 = UINT16_MAX;
	int8_t x4716 = 15;
	volatile int32_t t122 = -289;

    t122 = (((x4713+x4714)==x4715)>>x4716);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x4721 = 152435899U;
	uint64_t x4722 = UINT64_MAX;
	volatile int16_t x4723 = INT16_MIN;
	static int32_t x4724 = 2;

    t123 = (((x4721+x4722)==x4723)>>x4724);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x4737 = -7;
	int64_t x4738 = -1LL;
	uint8_t x4739 = 5U;
	uint32_t x4740 = 1U;
	int32_t t124 = 1;

    t124 = (((x4737+x4738)==x4739)>>x4740);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x4741 = -15LL;
	static uint16_t x4742 = 4U;
	volatile int32_t x4743 = INT32_MIN;
	volatile int8_t x4744 = 24;
	volatile int32_t t125 = 775;

    t125 = (((x4741+x4742)==x4743)>>x4744);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x4773 = INT16_MIN;
	volatile uint64_t x4774 = UINT64_MAX;
	static int8_t x4775 = -1;
	static int8_t x4776 = 6;

    t126 = (((x4773+x4774)==x4775)>>x4776);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x4841 = UINT16_MAX;
	static uint8_t x4842 = UINT8_MAX;
	static int64_t x4843 = INT64_MAX;
	static uint8_t x4844 = 1U;
	int32_t t127 = -1;

    t127 = (((x4841+x4842)==x4843)>>x4844);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x4853 = INT16_MIN;
	volatile int8_t x4854 = -1;
	int64_t x4855 = -6270400995LL;
	static uint16_t x4856 = 2U;

    t128 = (((x4853+x4854)==x4855)>>x4856);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x4897 = UINT16_MAX;
	int8_t x4898 = 3;
	int8_t x4899 = 0;
	volatile int32_t t129 = 2;

    t129 = (((x4897+x4898)==x4899)>>x4900);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x4942 = 1;
	int16_t x4944 = 10;
	volatile int32_t t130 = -2;

    t130 = (((x4941+x4942)==x4943)>>x4944);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x4973 = UINT16_MAX;
	uint8_t x4974 = 8U;
	int32_t x4975 = -6843002;
	int32_t t131 = 1;

    t131 = (((x4973+x4974)==x4975)>>x4976);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x4985 = 2028614;
	uint32_t x4987 = 166339U;
	static uint8_t x4988 = 3U;

    t132 = (((x4985+x4986)==x4987)>>x4988);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x4997 = 0LL;
	int16_t x4999 = INT16_MIN;
	int8_t x5000 = 1;
	int32_t t133 = -3;

    t133 = (((x4997+x4998)==x4999)>>x5000);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x5014 = 3U;
	int8_t x5015 = 60;
	int32_t t134 = 13;

    t134 = (((x5013+x5014)==x5015)>>x5016);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x5029 = 5406U;
	int32_t x5030 = -496537;
	int32_t x5031 = 197;
	int32_t t135 = 173386110;

    t135 = (((x5029+x5030)==x5031)>>x5032);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x5165 = -10;
	static uint32_t x5166 = 16422671U;
	volatile uint8_t x5168 = 0U;
	volatile int32_t t136 = 372253;

    t136 = (((x5165+x5166)==x5167)>>x5168);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x5237 = 0;
	uint32_t x5238 = 27U;
	volatile int32_t x5240 = 7;
	static int32_t t137 = -1548033;

    t137 = (((x5237+x5238)==x5239)>>x5240);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x5262 = UINT8_MAX;
	int64_t x5263 = -1LL;

    t138 = (((x5261+x5262)==x5263)>>x5264);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x5269 = INT8_MIN;
	static uint64_t x5270 = 79937990766588965LLU;
	static int16_t x5271 = -216;
	volatile uint8_t x5272 = 12U;
	static int32_t t139 = 933435013;

    t139 = (((x5269+x5270)==x5271)>>x5272);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x5329 = INT8_MIN;
	int64_t x5330 = INT64_MAX;
	volatile int32_t x5332 = 7;
	static int32_t t140 = 1004;

    t140 = (((x5329+x5330)==x5331)>>x5332);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x5345 = -727;
	volatile int16_t x5346 = INT16_MAX;
	int32_t x5347 = -1;
	static volatile int8_t x5348 = 24;

    t141 = (((x5345+x5346)==x5347)>>x5348);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x5358 = INT16_MAX;
	static int16_t x5360 = 1;
	volatile int32_t t142 = 99;

    t142 = (((x5357+x5358)==x5359)>>x5360);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x5370 = 87;
	static int64_t x5371 = 1LL;
	static volatile int32_t t143 = 993315615;

    t143 = (((x5369+x5370)==x5371)>>x5372);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x5473 = -1;
	int32_t x5474 = -1;
	int8_t x5475 = -1;
	uint32_t x5476 = 26U;
	volatile int32_t t144 = -91802;

    t144 = (((x5473+x5474)==x5475)>>x5476);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x5537 = INT64_MIN;
	uint64_t x5538 = 1591070LLU;
	volatile int32_t x5539 = INT32_MAX;
	static int8_t x5540 = 0;
	volatile int32_t t145 = -561328485;

    t145 = (((x5537+x5538)==x5539)>>x5540);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x5570 = INT16_MAX;
	int32_t x5571 = -1;
	static int8_t x5572 = 1;

    t146 = (((x5569+x5570)==x5571)>>x5572);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t t147 = -174053;

    t147 = (((x5597+x5598)==x5599)>>x5600);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x5605 = INT32_MIN;
	int64_t x5606 = -44179441136515LL;
	static int64_t x5607 = INT64_MIN;
	uint64_t x5608 = 0LLU;
	int32_t t148 = -87170;

    t148 = (((x5605+x5606)==x5607)>>x5608);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x5630 = 1046582707LLU;
	int32_t x5631 = INT32_MIN;
	static volatile int32_t t149 = -4010;

    t149 = (((x5629+x5630)==x5631)>>x5632);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint16_t x5661 = UINT16_MAX;
	uint16_t x5662 = UINT16_MAX;
	int8_t x5663 = 0;
	int8_t x5664 = 1;
	static volatile int32_t t150 = -54833351;

    t150 = (((x5661+x5662)==x5663)>>x5664);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x5669 = 6773U;
	static volatile int8_t x5670 = -1;
	int16_t x5671 = -993;
	int16_t x5672 = 10;
	volatile int32_t t151 = -1;

    t151 = (((x5669+x5670)==x5671)>>x5672);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x5693 = 66U;
	uint16_t x5694 = UINT16_MAX;
	volatile int16_t x5696 = 0;
	volatile int32_t t152 = -71611;

    t152 = (((x5693+x5694)==x5695)>>x5696);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x5701 = 15312U;
	int64_t x5702 = -784796592018120156LL;
	uint8_t x5703 = 10U;
	uint32_t x5704 = 1U;
	volatile int32_t t153 = -111;

    t153 = (((x5701+x5702)==x5703)>>x5704);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x5705 = INT8_MIN;
	int16_t x5706 = -14;
	uint16_t x5707 = 12428U;
	uint64_t x5708 = 10LLU;
	volatile int32_t t154 = -3461122;

    t154 = (((x5705+x5706)==x5707)>>x5708);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x5741 = INT16_MAX;
	static uint16_t x5742 = 3U;
	int32_t x5743 = INT32_MAX;
	int32_t t155 = -353258;

    t155 = (((x5741+x5742)==x5743)>>x5744);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x5761 = -1;
	int64_t x5762 = 0LL;
	volatile int64_t x5763 = INT64_MIN;
	static uint32_t x5764 = 19U;
	volatile int32_t t156 = -343425413;

    t156 = (((x5761+x5762)==x5763)>>x5764);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x5766 = -20;
	static volatile int64_t x5767 = -1LL;
	static uint64_t x5768 = 13LLU;
	int32_t t157 = -15919;

    t157 = (((x5765+x5766)==x5767)>>x5768);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x5773 = 1;
	int64_t x5775 = -1LL;
	uint16_t x5776 = 2U;
	static volatile int32_t t158 = 7;

    t158 = (((x5773+x5774)==x5775)>>x5776);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x5793 = UINT32_MAX;
	int32_t x5795 = INT32_MIN;
	uint8_t x5796 = 5U;
	static int32_t t159 = -133205629;

    t159 = (((x5793+x5794)==x5795)>>x5796);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x5833 = 4001467U;
	int32_t x5834 = -1;
	int8_t x5835 = INT8_MIN;
	int8_t x5836 = 1;

    t160 = (((x5833+x5834)==x5835)>>x5836);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x5849 = INT16_MIN;
	int8_t x5850 = INT8_MIN;
	static int64_t x5851 = 16053357651LL;
	uint8_t x5852 = 1U;
	volatile int32_t t161 = 7778;

    t161 = (((x5849+x5850)==x5851)>>x5852);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x5877 = INT16_MAX;
	uint16_t x5878 = 47U;
	volatile int32_t t162 = -16;

    t162 = (((x5877+x5878)==x5879)>>x5880);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x5917 = INT8_MIN;
	static int32_t x5919 = -1;
	volatile int32_t t163 = 460;

    t163 = (((x5917+x5918)==x5919)>>x5920);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x5986 = 4U;
	int32_t x5987 = INT32_MAX;
	uint8_t x5988 = 21U;
	int32_t t164 = -52238950;

    t164 = (((x5985+x5986)==x5987)>>x5988);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x6047 = -3609748075214918251LL;
	uint8_t x6048 = 31U;

    t165 = (((x6045+x6046)==x6047)>>x6048);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x6069 = -1;
	uint16_t x6071 = 1868U;
	uint8_t x6072 = 1U;

    t166 = (((x6069+x6070)==x6071)>>x6072);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint8_t x6077 = 4U;
	uint8_t x6078 = 18U;
	uint64_t x6079 = 11531LLU;
	uint32_t x6080 = 5U;

    t167 = (((x6077+x6078)==x6079)>>x6080);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x6117 = 4;
	int8_t x6118 = 23;
	uint8_t x6120 = 3U;
	int32_t t168 = 930941;

    t168 = (((x6117+x6118)==x6119)>>x6120);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x6157 = 17U;
	int8_t x6158 = -1;
	static int64_t x6159 = -1LL;
	uint32_t x6160 = 4U;
	volatile int32_t t169 = -6284;

    t169 = (((x6157+x6158)==x6159)>>x6160);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x6161 = -1LL;
	uint8_t x6162 = 17U;
	int32_t x6163 = 23;
	volatile int32_t t170 = -1274424;

    t170 = (((x6161+x6162)==x6163)>>x6164);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x6237 = UINT16_MAX;
	static uint8_t x6238 = 15U;
	uint8_t x6239 = 46U;
	uint16_t x6240 = 2U;
	int32_t t171 = 442700436;

    t171 = (((x6237+x6238)==x6239)>>x6240);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x6317 = INT16_MAX;
	volatile int8_t x6318 = 0;
	int8_t x6319 = INT8_MAX;
	uint8_t x6320 = 8U;
	int32_t t172 = 3406332;

    t172 = (((x6317+x6318)==x6319)>>x6320);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x6325 = -1;
	volatile uint16_t x6326 = UINT16_MAX;
	int8_t x6327 = -1;
	uint8_t x6328 = 30U;
	volatile int32_t t173 = 3;

    t173 = (((x6325+x6326)==x6327)>>x6328);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x6358 = -3854LL;
	volatile int8_t x6359 = INT8_MIN;
	int8_t x6360 = 2;
	volatile int32_t t174 = 3;

    t174 = (((x6357+x6358)==x6359)>>x6360);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x6429 = 2U;
	int16_t x6431 = 62;
	volatile uint64_t x6432 = 1LLU;

    t175 = (((x6429+x6430)==x6431)>>x6432);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x6449 = 113U;
	int32_t x6450 = INT32_MAX;
	volatile uint8_t x6451 = 37U;
	int8_t x6452 = 1;

    t176 = (((x6449+x6450)==x6451)>>x6452);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x6461 = 108976LLU;
	static uint8_t x6463 = 16U;
	volatile int32_t t177 = -187791;

    t177 = (((x6461+x6462)==x6463)>>x6464);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x6477 = INT16_MAX;
	volatile int64_t x6478 = -7166633100754LL;
	int32_t t178 = -34653;

    t178 = (((x6477+x6478)==x6479)>>x6480);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x6537 = -1;
	uint64_t x6538 = UINT64_MAX;
	uint8_t x6540 = 4U;
	int32_t t179 = -4114;

    t179 = (((x6537+x6538)==x6539)>>x6540);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x6542 = INT16_MIN;
	int8_t x6543 = INT8_MIN;
	int8_t x6544 = 14;
	int32_t t180 = 212232;

    t180 = (((x6541+x6542)==x6543)>>x6544);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x6554 = INT16_MAX;
	int32_t x6556 = 6;
	int32_t t181 = 13860826;

    t181 = (((x6553+x6554)==x6555)>>x6556);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x6573 = 84697922172230295LLU;
	int32_t x6574 = 890832946;
	static volatile int32_t x6575 = INT32_MIN;
	static volatile int32_t t182 = -3008;

    t182 = (((x6573+x6574)==x6575)>>x6576);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x6596 = 6U;
	int32_t t183 = 32761980;

    t183 = (((x6593+x6594)==x6595)>>x6596);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x6781 = -61LL;
	int64_t x6783 = INT64_MIN;
	volatile int32_t t184 = -5036;

    t184 = (((x6781+x6782)==x6783)>>x6784);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x6805 = 0U;
	volatile int32_t x6806 = INT32_MAX;
	int8_t x6807 = -3;
	uint8_t x6808 = 0U;
	int32_t t185 = 1346117;

    t185 = (((x6805+x6806)==x6807)>>x6808);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x6857 = INT64_MIN;
	uint16_t x6858 = UINT16_MAX;
	static int16_t x6859 = -2;
	uint8_t x6860 = 4U;

    t186 = (((x6857+x6858)==x6859)>>x6860);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x6989 = 10U;
	uint64_t x6990 = UINT64_MAX;
	int8_t x6991 = -3;
	static uint8_t x6992 = 7U;
	static volatile int32_t t187 = 736;

    t187 = (((x6989+x6990)==x6991)>>x6992);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x7069 = 33087120504LLU;
	int64_t x7070 = -1LL;
	static int8_t x7071 = 0;
	static uint16_t x7072 = 4U;

    t188 = (((x7069+x7070)==x7071)>>x7072);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x7090 = -1LL;
	int16_t x7091 = INT16_MAX;
	volatile uint16_t x7092 = 0U;
	static int32_t t189 = 449;

    t189 = (((x7089+x7090)==x7091)>>x7092);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x7145 = INT8_MAX;
	static int32_t x7146 = -1;
	uint32_t x7147 = 8796302U;
	uint8_t x7148 = 5U;
	volatile int32_t t190 = -11782;

    t190 = (((x7145+x7146)==x7147)>>x7148);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x7193 = 0U;
	int32_t x7194 = -363567;
	int64_t x7196 = 5LL;
	int32_t t191 = -311;

    t191 = (((x7193+x7194)==x7195)>>x7196);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x7229 = -1;
	uint64_t x7230 = 982155312668845LLU;
	uint16_t x7231 = UINT16_MAX;
	uint16_t x7232 = 7U;
	volatile int32_t t192 = 0;

    t192 = (((x7229+x7230)==x7231)>>x7232);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x7245 = 0U;
	int8_t x7246 = 0;
	int32_t t193 = 320734667;

    t193 = (((x7245+x7246)==x7247)>>x7248);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x7261 = 32;
	int32_t x7262 = INT32_MIN;
	uint32_t x7263 = 31338019U;
	volatile int8_t x7264 = 18;
	int32_t t194 = 31272836;

    t194 = (((x7261+x7262)==x7263)>>x7264);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x7269 = -1;
	volatile int32_t x7270 = -1;
	static int8_t x7272 = 1;
	volatile int32_t t195 = -826993;

    t195 = (((x7269+x7270)==x7271)>>x7272);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x7358 = -1;
	volatile int16_t x7359 = INT16_MIN;
	int32_t t196 = 8583;

    t196 = (((x7357+x7358)==x7359)>>x7360);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x7365 = 31U;
	static uint64_t x7366 = 43400968760479911LLU;
	static uint8_t x7367 = 23U;
	uint8_t x7368 = 21U;
	int32_t t197 = -49765771;

    t197 = (((x7365+x7366)==x7367)>>x7368);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x7373 = 361;
	int8_t x7374 = INT8_MIN;
	volatile uint16_t x7375 = UINT16_MAX;
	volatile uint8_t x7376 = 14U;
	static volatile int32_t t198 = 213;

    t198 = (((x7373+x7374)==x7375)>>x7376);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x7385 = -1LL;
	int64_t x7386 = -1LL;
	uint8_t x7388 = 2U;
	volatile int32_t t199 = 655;

    t199 = (((x7385+x7386)==x7387)>>x7388);

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


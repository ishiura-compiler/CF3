
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

static uint64_t x9 = 347101241216726619LLU;
static volatile uint16_t x10 = 1U;
static volatile uint32_t t1 = 479466U;
volatile uint64_t x234 = 3195359677LLU;
int8_t x235 = INT8_MAX;
volatile int32_t x280 = 3;
uint32_t t7 = 12256U;
uint8_t x296 = 2U;
volatile uint16_t x304 = 3U;
uint32_t x305 = 1136914U;
static int64_t x306 = -1LL;
volatile int32_t x308 = 24;
uint64_t t11 = 20482167626LLU;
int16_t x418 = -1;
int16_t x419 = -1;
int32_t x474 = INT32_MIN;
int64_t x475 = 1LL;
static int8_t x476 = 0;
uint64_t x527 = UINT64_MAX;
uint8_t x674 = 0U;
static uint64_t t15 = 1855016969798LLU;
int16_t x678 = 14049;
uint64_t t18 = 403388345096LLU;
volatile int64_t x723 = -1LL;
uint16_t x733 = UINT16_MAX;
volatile int8_t x734 = INT8_MAX;
int8_t x942 = -1;
static int16_t x1006 = 4;
int16_t x1007 = -1;
volatile int32_t t23 = -310;
int64_t x1019 = -1LL;
int32_t t26 = -7;
int16_t x1225 = 936;
uint16_t x1305 = 5709U;
int8_t x1333 = INT8_MAX;
int8_t x1530 = -2;
static uint8_t x1656 = 18U;
static uint64_t x1842 = UINT64_MAX;
int16_t x1843 = INT16_MIN;
int8_t x1935 = -1;
static uint64_t t39 = 3011367781612187LLU;
int64_t x2078 = INT64_MIN;
int8_t x2150 = 43;
volatile uint32_t t43 = 28U;
uint8_t x2230 = 3U;
static int64_t x2313 = INT64_MAX;
uint32_t x2316 = 0U;
volatile int64_t t46 = INT64_MAX;
uint16_t x2450 = 14312U;
int32_t x2540 = 1;
uint8_t x2560 = 16U;
volatile uint32_t t50 = 44U;
int64_t x2569 = INT64_MAX;
uint8_t x2674 = UINT8_MAX;
int32_t x2676 = 10;
int16_t x2734 = INT16_MIN;
static uint64_t x2735 = UINT64_MAX;
uint64_t x2769 = 37021458LLU;
int32_t x2771 = 17770895;
static uint8_t x2772 = 1U;
int16_t x3114 = INT16_MAX;
volatile int32_t x3194 = 359536;
int64_t x3195 = INT64_MAX;
volatile uint64_t t62 = 330674479LLU;
int16_t x3366 = INT16_MAX;
uint8_t x3432 = 26U;
uint32_t x3545 = UINT32_MAX;
static int64_t t70 = 2158538167027708951LL;
uint32_t x3620 = 3U;
uint8_t x3712 = 3U;
volatile int16_t x3739 = INT16_MIN;
int32_t t73 = -479474;
static int32_t x3806 = INT32_MIN;
static volatile int32_t t77 = 5704183;
volatile int32_t x3893 = -30117;
volatile int64_t x3894 = INT64_MIN;
int64_t x3903 = -463134366LL;
int8_t x3913 = 21;
uint8_t x3916 = 2U;
static int32_t t80 = -513447;
static uint64_t x4027 = 76287239527LLU;
static int16_t x4081 = -1;
static uint8_t x4084 = 11U;
int64_t t85 = 3LL;
int64_t x4242 = 29LL;
uint64_t x4282 = 7632LLU;
volatile uint64_t t89 = 445957930LLU;
int8_t x4436 = 2;
int64_t x4695 = INT64_MAX;
uint32_t x4729 = 979U;
volatile int16_t x4731 = -1;
uint32_t t94 = 2517U;
int16_t x4763 = -10;
volatile uint8_t x4768 = 45U;
static uint32_t x4949 = 135577171U;
static int64_t x4950 = INT64_MIN;
volatile uint32_t x4963 = UINT32_MAX;
int8_t x5063 = 24;
int16_t x5154 = INT16_MIN;
int32_t x5284 = 14;
volatile int8_t x5382 = INT8_MIN;
int64_t x5418 = -23393726LL;
int32_t x5419 = -1;
int8_t x5420 = 0;
int64_t t106 = -27LL;
static int8_t x5564 = 16;
volatile int32_t x5599 = 217228;
uint8_t x5615 = UINT8_MAX;
uint32_t x5725 = 81859U;
static uint32_t x5825 = 3214U;
volatile uint32_t t112 = 4918103U;
int32_t t113 = 898094;
int16_t x6046 = -31;
volatile int8_t x6062 = -1;
volatile int16_t x6090 = INT16_MIN;
int8_t x6231 = INT8_MIN;
uint32_t t122 = 160995504U;
int8_t x6343 = INT8_MIN;
volatile int32_t x6467 = -3;
int8_t x6468 = 22;
int64_t x6527 = INT64_MIN;
int64_t x6529 = 434697451589911LL;
volatile uint64_t x6550 = 822416626972298LLU;
int32_t x6583 = -1;
volatile uint64_t t132 = 224028578973LLU;
int16_t x7053 = INT16_MIN;
static int64_t x7054 = 1420130172697LL;
int32_t x7055 = INT32_MIN;
uint32_t x7075 = 9U;
int64_t x7191 = INT64_MIN;
int8_t x7205 = -2;
static uint16_t x7251 = 2455U;
volatile uint32_t x7370 = 224569U;
static int8_t x7388 = 1;
uint16_t x7447 = UINT16_MAX;
uint16_t x7448 = 7U;
uint64_t x7581 = UINT64_MAX;
int64_t t144 = 2109LL;
volatile int16_t x7767 = INT16_MAX;
uint16_t x7862 = 9U;
uint8_t x7863 = 1U;
volatile uint64_t t150 = 993870LLU;
uint16_t x7940 = 0U;
uint64_t t151 = 427859LLU;
static uint16_t x8002 = 617U;
volatile uint32_t t154 = 7687470U;
uint64_t x8071 = 25696840270LLU;
static int16_t x8072 = 1;
uint64_t x8079 = UINT64_MAX;
uint8_t x8080 = 48U;
volatile int64_t t157 = -26LL;
int8_t x8112 = 0;
int8_t x8287 = 28;
volatile int64_t t159 = 28624LL;
volatile int64_t x8331 = INT64_MAX;
int64_t t160 = 6941984LL;
static uint32_t x8396 = 9U;
static uint8_t x8549 = 26U;
uint64_t x8550 = 0LLU;
uint64_t x8715 = 16060550757LLU;
uint8_t x8716 = 8U;
volatile int32_t t168 = 194;
static int64_t x8898 = 114468817478181225LL;
uint64_t t170 = 452LLU;
int32_t x8995 = INT32_MIN;
uint64_t t172 = 12561246LLU;
int32_t x9113 = -1;
uint32_t x9115 = 2038435U;
static volatile uint64_t x9438 = 63463849205LLU;
uint64_t t176 = 1426128772920314646LLU;
static int64_t t177 = 860904852790667LL;
static volatile int32_t x9461 = INT32_MIN;
static volatile uint64_t t179 = 17747155890683LLU;
uint32_t x9551 = 4844U;
uint8_t x9559 = 126U;
static int32_t x9589 = -506677;
int16_t x9615 = INT16_MIN;
static int32_t x9683 = INT32_MAX;
uint8_t x9691 = 3U;
uint8_t x9692 = 4U;
volatile int16_t x9716 = 1;
int32_t t187 = -2171;
static volatile int32_t x9745 = INT32_MIN;
uint64_t x9747 = 29886294LLU;
volatile uint64_t t188 = 919359LLU;
int8_t x9757 = 1;
int8_t x9760 = 15;
int32_t x9794 = 0;
volatile uint8_t x10134 = UINT8_MAX;
volatile uint64_t x10135 = 1721538LLU;
uint64_t t195 = 25LLU;
int8_t x10282 = 0;
volatile int32_t x10284 = 19;
int64_t t197 = -3715LL;
volatile int32_t x10285 = INT32_MIN;
uint8_t x10289 = 0U;
static volatile uint32_t t199 = 8410U;


void f0(void) {
    	static volatile int32_t x11 = -1;
	int8_t x12 = 0;
	uint64_t t0 = 3449818114LLU;

    t0 = ((x9^(x10/x11))<<x12);

    if (t0 != 18099642832492824996LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x33 = 1U;
	uint32_t x34 = 1735338U;
	int32_t x35 = -18497487;
	static volatile int32_t x36 = 0;

    t1 = ((x33^(x34/x35))<<x36);

    if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x61 = 14LLU;
	int8_t x62 = 24;
	volatile int8_t x63 = INT8_MAX;
	static int16_t x64 = 0;
	uint64_t t2 = 269488119151842667LLU;

    t2 = ((x61^(x62/x63))<<x64);

    if (t2 != 14LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x137 = -1;
	uint16_t x138 = 76U;
	int8_t x139 = -2;
	uint8_t x140 = 9U;
	int32_t t3 = -5;

    t3 = ((x137^(x138/x139))<<x140);

    if (t3 != 18944) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x229 = 0U;
	int64_t x230 = INT64_MAX;
	int64_t x231 = INT64_MIN;
	uint8_t x232 = 5U;
	int64_t t4 = -2931075765LL;

    t4 = ((x229^(x230/x231))<<x232);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x233 = -1;
	int16_t x236 = 2;
	uint64_t t5 = 1654623188494114813LLU;

    t5 = ((x233^(x234/x235))<<x236);

    if (t5 != 18446744073608910364LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x277 = 91014096096803LL;
	int16_t x278 = -1;
	static int32_t x279 = INT32_MIN;
	volatile int64_t t6 = -53837268LL;

    t6 = ((x277^(x278/x279))<<x280);

    if (t6 != 728112768774424LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x289 = 7904;
	int16_t x290 = -9;
	uint32_t x291 = UINT32_MAX;
	int16_t x292 = 0;

    t7 = ((x289^(x290/x291))<<x292);

    if (t7 != 7904U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x293 = 4U;
	uint16_t x294 = 23626U;
	int8_t x295 = -1;
	uint32_t t8 = 61U;

    t8 = ((x293^(x294/x295))<<x296);

    if (t8 != 4294872776U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x301 = INT8_MAX;
	uint64_t x302 = 5755713343033314315LLU;
	volatile int64_t x303 = INT64_MIN;
	volatile uint64_t t9 = 1394956476040416115LLU;

    t9 = ((x301^(x302/x303))<<x304);

    if (t9 != 1016LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x307 = INT16_MAX;
	volatile int64_t t10 = -806850LL;

    t10 = ((x305^(x306/x307))<<x308);

    if (t10 != 19074251751424LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x313 = 1949124950346543046LLU;
	int32_t x314 = INT32_MIN;
	static uint32_t x315 = 81997522U;
	uint32_t x316 = 7U;

    t11 = ((x313^(x314/x315))<<x316);

    if (t11 != 9680320686133341696LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x417 = UINT16_MAX;
	volatile uint8_t x420 = 0U;
	int32_t t12 = 49;

    t12 = ((x417^(x418/x419))<<x420);

    if (t12 != 65534) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x473 = -1;
	static volatile int64_t t13 = 1LL;

    t13 = ((x473^(x474/x475))<<x476);

    if (t13 != 2147483647LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x525 = -1;
	static uint64_t x526 = UINT64_MAX;
	static int16_t x528 = 32;
	uint64_t t14 = 51950377430213LLU;

    t14 = ((x525^(x526/x527))<<x528);

    if (t14 != 18446744065119617024LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x673 = INT64_MAX;
	uint64_t x675 = 1LLU;
	int16_t x676 = 3;

    t15 = ((x673^(x674/x675))<<x676);

    if (t15 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x677 = UINT32_MAX;
	static volatile uint64_t x679 = 118897569LLU;
	uint8_t x680 = 0U;
	static uint64_t t16 = 424177927576204917LLU;

    t16 = ((x677^(x678/x679))<<x680);

    if (t16 != 4294967295LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x697 = 55U;
	uint8_t x698 = UINT8_MAX;
	static volatile uint8_t x699 = 18U;
	static volatile int8_t x700 = 0;
	volatile int32_t t17 = -249326;

    t17 = ((x697^(x698/x699))<<x700);

    if (t17 != 57) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x705 = 10784U;
	uint64_t x706 = UINT64_MAX;
	static uint32_t x707 = 209980U;
	int32_t x708 = 0;

    t18 = ((x705^(x706/x707))<<x708);

    if (t18 != 87850005102605LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x721 = INT64_MIN;
	int64_t x722 = 28601LL;
	uint16_t x724 = 0U;
	volatile int64_t t19 = 16317497157817LL;

    t19 = ((x721^(x722/x723))<<x724);

    if (t19 != 9223372036854747207LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x735 = INT8_MIN;
	volatile int8_t x736 = 13;
	int32_t t20 = -3063556;

    t20 = ((x733^(x734/x735))<<x736);

    if (t20 != 536862720) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x841 = INT16_MAX;
	uint64_t x842 = UINT64_MAX;
	int64_t x843 = -1LL;
	uint8_t x844 = 18U;
	static volatile uint64_t t21 = 10099692502LLU;

    t21 = ((x841^(x842/x843))<<x844);

    if (t21 != 8589410304LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x941 = 3769U;
	int32_t x943 = 5865;
	uint16_t x944 = 3U;
	static int32_t t22 = 1;

    t22 = ((x941^(x942/x943))<<x944);

    if (t22 != 30152) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x1005 = INT8_MIN;
	uint16_t x1008 = 0U;

    t23 = ((x1005^(x1006/x1007))<<x1008);

    if (t23 != 124) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint16_t x1017 = 471U;
	int16_t x1018 = -1;
	volatile uint8_t x1020 = 22U;
	static int64_t t24 = -10552371669516105LL;

    t24 = ((x1017^(x1018/x1019))<<x1020);

    if (t24 != 1971322880LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x1041 = -1;
	static int8_t x1042 = -25;
	volatile uint64_t x1043 = 252484LLU;
	int32_t x1044 = 5;
	uint64_t t25 = 8721271696346LLU;

    t25 = ((x1041^(x1042/x1043))<<x1044);

    if (t25 != 18444406120372473984LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x1117 = 103087;
	uint8_t x1118 = 3U;
	int32_t x1119 = INT32_MAX;
	uint8_t x1120 = 5U;

    t26 = ((x1117^(x1118/x1119))<<x1120);

    if (t26 != 3298784) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x1226 = -1LL;
	uint16_t x1227 = 96U;
	int8_t x1228 = 0;
	volatile int64_t t27 = -17933711858586186LL;

    t27 = ((x1225^(x1226/x1227))<<x1228);

    if (t27 != 936LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x1306 = INT64_MAX;
	volatile uint8_t x1307 = UINT8_MAX;
	uint8_t x1308 = 2U;
	int64_t t28 = 35528916566860LL;

    t28 = ((x1305^(x1306/x1307))<<x1308);

    if (t28 != 144680345676176180LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x1334 = 39U;
	volatile int16_t x1335 = -1;
	uint8_t x1336 = 11U;
	volatile uint32_t t29 = 62054756U;

    t29 = ((x1333^(x1334/x1335))<<x1336);

    if (t29 != 260096U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x1469 = 749678LL;
	volatile uint16_t x1470 = 4U;
	int16_t x1471 = INT16_MIN;
	uint32_t x1472 = 37U;
	int64_t t30 = 19456937736158257LL;

    t30 = ((x1469^(x1470/x1471))<<x1472);

    if (t30 != 103034959760982016LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x1493 = 188LLU;
	int16_t x1494 = -1459;
	int64_t x1495 = -16964035660LL;
	uint8_t x1496 = 18U;
	static volatile uint64_t t31 = 28715492851161113LLU;

    t31 = ((x1493^(x1494/x1495))<<x1496);

    if (t31 != 49283072LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x1529 = 236663795U;
	int64_t x1531 = INT64_MIN;
	volatile uint8_t x1532 = 7U;
	static int64_t t32 = -330455LL;

    t32 = ((x1529^(x1530/x1531))<<x1532);

    if (t32 != 30292965760LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x1585 = INT16_MIN;
	static uint8_t x1586 = 2U;
	uint64_t x1587 = UINT64_MAX;
	uint8_t x1588 = 10U;
	uint64_t t33 = 2769889LLU;

    t33 = ((x1585^(x1586/x1587))<<x1588);

    if (t33 != 18446744073675997184LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x1653 = 9U;
	static int8_t x1654 = -1;
	int16_t x1655 = 5340;
	static volatile uint32_t t34 = 311371850U;

    t34 = ((x1653^(x1654/x1655))<<x1656);

    if (t34 != 2359296U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x1801 = 16U;
	int16_t x1802 = 256;
	static int8_t x1803 = INT8_MAX;
	uint8_t x1804 = 8U;
	volatile uint32_t t35 = 232309U;

    t35 = ((x1801^(x1802/x1803))<<x1804);

    if (t35 != 4608U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x1841 = 1U;
	uint8_t x1844 = 25U;
	volatile uint64_t t36 = 12585LLU;

    t36 = ((x1841^(x1842/x1843))<<x1844);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x1929 = -66060161865787356LL;
	uint64_t x1930 = 908719605422LLU;
	int8_t x1931 = INT8_MIN;
	uint32_t x1932 = 1U;
	volatile uint64_t t37 = 8763625393612LLU;

    t37 = ((x1929^(x1930/x1931))<<x1932);

    if (t37 != 18314623749977976904LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x1933 = 51035U;
	volatile int16_t x1934 = INT16_MIN;
	uint8_t x1936 = 7U;
	uint32_t t38 = 69689U;

    t38 = ((x1933^(x1934/x1935))<<x1936);

    if (t38 != 2338176U) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint64_t x1969 = 2656894LLU;
	volatile int64_t x1970 = -1LL;
	int32_t x1971 = INT32_MIN;
	volatile int8_t x1972 = 2;

    t39 = ((x1969^(x1970/x1971))<<x1972);

    if (t39 != 10627576LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x2041 = UINT32_MAX;
	static uint64_t x2042 = 2091526880552984591LLU;
	uint16_t x2043 = 16353U;
	uint8_t x2044 = 39U;
	uint64_t t40 = 4740965564341LLU;

    t40 = ((x2041^(x2042/x2043))<<x2044);

    if (t40 != 13488163785986277376LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x2077 = 52661791752731760LLU;
	static volatile uint16_t x2079 = UINT16_MAX;
	uint8_t x2080 = 22U;
	volatile uint64_t t41 = 10563446LLU;

    t41 = ((x2077^(x2078/x2079))<<x2080);

    if (t41 != 1758750139943485440LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x2149 = -1;
	uint32_t x2151 = UINT32_MAX;
	uint64_t x2152 = 4LLU;
	volatile uint32_t t42 = 278U;

    t42 = ((x2149^(x2150/x2151))<<x2152);

    if (t42 != 4294967280U) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint8_t x2201 = UINT8_MAX;
	volatile int8_t x2202 = 1;
	volatile uint32_t x2203 = 4U;
	static uint8_t x2204 = 1U;

    t43 = ((x2201^(x2202/x2203))<<x2204);

    if (t43 != 510U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x2209 = INT16_MAX;
	int16_t x2210 = -1;
	static uint64_t x2211 = UINT64_MAX;
	static int8_t x2212 = 1;
	static volatile uint64_t t44 = 2878686555183LLU;

    t44 = ((x2209^(x2210/x2211))<<x2212);

    if (t44 != 65532LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x2229 = 4;
	volatile int64_t x2231 = INT64_MIN;
	int8_t x2232 = 0;
	int64_t t45 = 222957LL;

    t45 = ((x2229^(x2230/x2231))<<x2232);

    if (t45 != 4LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x2314 = -1;
	static volatile int8_t x2315 = INT8_MAX;

    t46 = ((x2313^(x2314/x2315))<<x2316);

    if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x2337 = 1U;
	static uint64_t x2338 = 0LLU;
	int64_t x2339 = INT64_MIN;
	volatile int8_t x2340 = 0;
	volatile uint64_t t47 = 102060055LLU;

    t47 = ((x2337^(x2338/x2339))<<x2340);

    if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x2449 = 26799435U;
	int64_t x2451 = INT64_MIN;
	volatile int16_t x2452 = 6;
	int64_t t48 = -177LL;

    t48 = ((x2449^(x2450/x2451))<<x2452);

    if (t48 != 1715163840LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x2537 = 1261843U;
	int32_t x2538 = INT32_MAX;
	int8_t x2539 = INT8_MAX;
	volatile uint32_t t49 = 2358743U;

    t49 = ((x2537^(x2538/x2539))<<x2540);

    if (t49 != 35818038U) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x2557 = -1042669;
	uint32_t x2558 = UINT32_MAX;
	uint16_t x2559 = UINT16_MAX;

    t50 = ((x2557^(x2558/x2559))<<x2560);

    if (t50 != 387055616U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x2570 = 3105187U;
	static uint32_t x2571 = UINT32_MAX;
	int8_t x2572 = 0;
	volatile int64_t t51 = INT64_MAX;

    t51 = ((x2569^(x2570/x2571))<<x2572);

    if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x2673 = UINT64_MAX;
	int64_t x2675 = INT64_MIN;
	volatile uint64_t t52 = 68962281904434LLU;

    t52 = ((x2673^(x2674/x2675))<<x2676);

    if (t52 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x2733 = UINT32_MAX;
	uint16_t x2736 = 49U;
	uint64_t t53 = 923162261398LLU;

    t53 = ((x2733^(x2734/x2735))<<x2736);

    if (t53 != 18446181123756130304LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x2770 = 1;
	volatile uint64_t t54 = 7644172635653LLU;

    t54 = ((x2769^(x2770/x2771))<<x2772);

    if (t54 != 74042916LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x2773 = 0U;
	int64_t x2774 = INT64_MIN;
	volatile int16_t x2775 = INT16_MIN;
	static int8_t x2776 = 0;
	static volatile int64_t t55 = 690295344LL;

    t55 = ((x2773^(x2774/x2775))<<x2776);

    if (t55 != 281474976710656LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x2853 = 5761886905LLU;
	static volatile uint64_t x2854 = UINT64_MAX;
	int64_t x2855 = INT64_MIN;
	int32_t x2856 = 53;
	static volatile uint64_t t56 = 837090488224917272LLU;

    t56 = ((x2853^(x2854/x2855))<<x2856);

    if (t56 != 6269010681299730432LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x2945 = UINT16_MAX;
	int16_t x2946 = -6;
	static int64_t x2947 = 74487758LL;
	uint16_t x2948 = 7U;
	int64_t t57 = -127700LL;

    t57 = ((x2945^(x2946/x2947))<<x2948);

    if (t57 != 8388480LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x2989 = 34238283U;
	volatile int32_t x2990 = -1;
	uint32_t x2991 = 6741U;
	static uint8_t x2992 = 2U;
	uint32_t t58 = 8U;

    t58 = ((x2989^(x2990/x2991))<<x2992);

    if (t58 != 135224956U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x3069 = 23U;
	volatile uint64_t x3070 = UINT64_MAX;
	int64_t x3071 = INT64_MAX;
	int8_t x3072 = 14;
	volatile uint64_t t59 = 1059104126496LLU;

    t59 = ((x3069^(x3070/x3071))<<x3072);

    if (t59 != 344064LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x3113 = UINT16_MAX;
	static uint32_t x3115 = 7885U;
	int8_t x3116 = 5;
	volatile uint32_t t60 = 461170U;

    t60 = ((x3113^(x3114/x3115))<<x3116);

    if (t60 != 2096992U) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x3165 = 494U;
	int64_t x3166 = INT64_MAX;
	static int32_t x3167 = INT32_MAX;
	static volatile uint8_t x3168 = 27U;
	int64_t t61 = 2311884311575562LL;

    t61 = ((x3165^(x3166/x3167))<<x3168);

    if (t61 != 576460818338545664LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x3193 = 5LLU;
	volatile int8_t x3196 = 48;

    t62 = ((x3193^(x3194/x3195))<<x3196);

    if (t62 != 1407374883553280LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x3353 = 6;
	uint8_t x3354 = 1U;
	uint16_t x3355 = 214U;
	uint8_t x3356 = 1U;
	volatile int32_t t63 = 1167306;

    t63 = ((x3353^(x3354/x3355))<<x3356);

    if (t63 != 12) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x3365 = 8065;
	uint32_t x3367 = 5216167U;
	static uint8_t x3368 = 0U;
	volatile uint32_t t64 = 10407U;

    t64 = ((x3365^(x3366/x3367))<<x3368);

    if (t64 != 8065U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x3429 = 151771816652389LLU;
	int8_t x3430 = INT8_MAX;
	volatile int16_t x3431 = -46;
	static volatile uint64_t t65 = 1073987476389LLU;

    t65 = ((x3429^(x3430/x3431))<<x3432);

    if (t65 != 15815270003273367552LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x3485 = INT8_MAX;
	int32_t x3486 = INT32_MAX;
	int64_t x3487 = 1LL;
	int8_t x3488 = 0;
	int64_t t66 = -4LL;

    t66 = ((x3485^(x3486/x3487))<<x3488);

    if (t66 != 2147483520LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x3489 = -1;
	int64_t x3490 = INT64_MAX;
	int8_t x3491 = INT8_MIN;
	uint8_t x3492 = 1U;
	volatile int64_t t67 = -27525LL;

    t67 = ((x3489^(x3490/x3491))<<x3492);

    if (t67 != 144115188075855868LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x3501 = INT32_MIN;
	uint32_t x3502 = 1304U;
	static uint32_t x3503 = 3610466U;
	uint16_t x3504 = 3U;
	volatile uint32_t t68 = 405523349U;

    t68 = ((x3501^(x3502/x3503))<<x3504);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x3546 = INT16_MIN;
	int32_t x3547 = INT32_MAX;
	int8_t x3548 = 12;
	uint32_t t69 = 941536U;

    t69 = ((x3545^(x3546/x3547))<<x3548);

    if (t69 != 4294963200U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x3597 = 92U;
	volatile int64_t x3598 = 1LL;
	int32_t x3599 = -67353;
	uint8_t x3600 = 1U;

    t70 = ((x3597^(x3598/x3599))<<x3600);

    if (t70 != 184LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x3617 = INT64_MIN;
	int32_t x3618 = -1;
	uint64_t x3619 = 214571LLU;
	uint64_t t71 = 2106822LLU;

    t71 = ((x3617^(x3618/x3619))<<x3620);

    if (t71 != 687762803872264LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x3709 = 6U;
	int8_t x3710 = INT8_MIN;
	int32_t x3711 = -1;
	int32_t t72 = 143114372;

    t72 = ((x3709^(x3710/x3711))<<x3712);

    if (t72 != 1072) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint8_t x3737 = 12U;
	static uint8_t x3738 = 112U;
	uint8_t x3740 = 1U;

    t73 = ((x3737^(x3738/x3739))<<x3740);

    if (t73 != 24) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x3749 = -1LL;
	uint64_t x3750 = 1838LLU;
	static int8_t x3751 = -11;
	int8_t x3752 = 18;
	uint64_t t74 = 1060426016095LLU;

    t74 = ((x3749^(x3750/x3751))<<x3752);

    if (t74 != 18446744073709289472LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x3805 = -29;
	uint32_t x3807 = 2945749U;
	uint8_t x3808 = 17U;
	static volatile uint32_t t75 = 4212825U;

    t75 = ((x3805^(x3806/x3807))<<x3808);

    if (t75 != 4201906176U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x3849 = UINT32_MAX;
	static int32_t x3850 = INT32_MAX;
	volatile int16_t x3851 = INT16_MAX;
	uint8_t x3852 = 8U;
	uint32_t t76 = 11614021U;

    t76 = ((x3849^(x3850/x3851))<<x3852);

    if (t76 != 4278189312U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x3853 = 2;
	int32_t x3854 = -1;
	int8_t x3855 = INT8_MIN;
	volatile uint8_t x3856 = 1U;

    t77 = ((x3853^(x3854/x3855))<<x3856);

    if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x3895 = 9U;
	uint8_t x3896 = 1U;
	int64_t t78 = -5241260101218LL;

    t78 = ((x3893^(x3894/x3895))<<x3896);

    if (t78 != 2049638230412228390LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x3901 = 104U;
	static volatile uint64_t x3902 = UINT64_MAX;
	uint8_t x3904 = 0U;
	volatile uint64_t t79 = 13340563861785118LLU;

    t79 = ((x3901^(x3902/x3903))<<x3904);

    if (t79 != 105LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x3914 = INT32_MIN;
	volatile int16_t x3915 = INT16_MIN;

    t80 = ((x3913^(x3914/x3915))<<x3916);

    if (t80 != 262228) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x3941 = INT32_MAX;
	static volatile uint64_t x3942 = 15934LLU;
	int64_t x3943 = INT64_MAX;
	volatile uint8_t x3944 = 0U;
	volatile uint64_t t81 = 471LLU;

    t81 = ((x3941^(x3942/x3943))<<x3944);

    if (t81 != 2147483647LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x4025 = 2100981169088033LL;
	uint16_t x4026 = UINT16_MAX;
	int16_t x4028 = 53;
	static uint64_t t82 = 161023321163LLU;

    t82 = ((x4025^(x4026/x4027))<<x4028);

    if (t82 != 14132295630688616448LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x4082 = INT64_MIN;
	int32_t x4083 = INT32_MAX;
	int64_t t83 = -143452461LL;

    t83 = ((x4081^(x4082/x4083))<<x4084);

    if (t83 != 8796093024256LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x4085 = 1549142148U;
	volatile uint64_t x4086 = 87932942540108LLU;
	volatile uint8_t x4087 = UINT8_MAX;
	static uint8_t x4088 = 0U;
	uint64_t t84 = 11279581940087618LLU;

    t84 = ((x4085^(x4086/x4087))<<x4088);

    if (t84 != 343959378932LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x4125 = 1468079601U;
	int64_t x4126 = -1LL;
	static int16_t x4127 = 271;
	uint8_t x4128 = 2U;

    t85 = ((x4125^(x4126/x4127))<<x4128);

    if (t85 != 5872318404LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x4221 = UINT32_MAX;
	volatile int8_t x4222 = 1;
	int64_t x4223 = 723LL;
	uint8_t x4224 = 3U;
	volatile int64_t t86 = 993947116961055LL;

    t86 = ((x4221^(x4222/x4223))<<x4224);

    if (t86 != 34359738360LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x4241 = 10;
	int16_t x4243 = INT16_MAX;
	uint8_t x4244 = 28U;
	volatile int64_t t87 = 3323888667884LL;

    t87 = ((x4241^(x4242/x4243))<<x4244);

    if (t87 != 2684354560LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x4253 = INT16_MIN;
	static uint64_t x4254 = 248192764317LLU;
	static uint32_t x4255 = 8U;
	uint8_t x4256 = 0U;
	volatile uint64_t t88 = 358589LLU;

    t88 = ((x4253^(x4254/x4255))<<x4256);

    if (t88 != 18446744042685440307LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x4281 = 9375169LLU;
	static int8_t x4283 = 1;
	uint16_t x4284 = 0U;

    t89 = ((x4281^(x4282/x4283))<<x4284);

    if (t89 != 9375761LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x4397 = -1;
	uint32_t x4398 = 7U;
	uint8_t x4399 = 18U;
	int64_t x4400 = 2LL;
	static volatile uint32_t t90 = 248027U;

    t90 = ((x4397^(x4398/x4399))<<x4400);

    if (t90 != 4294967292U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x4433 = -1;
	volatile uint8_t x4434 = 0U;
	uint32_t x4435 = UINT32_MAX;
	uint32_t t91 = 524109362U;

    t91 = ((x4433^(x4434/x4435))<<x4436);

    if (t91 != 4294967292U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x4437 = 96875878LLU;
	int32_t x4438 = -1;
	uint64_t x4439 = 3648LLU;
	uint8_t x4440 = 50U;
	volatile uint64_t t92 = 3174746720374809LLU;

    t92 = ((x4437^(x4438/x4439))<<x4440);

    if (t92 != 12130445596322430976LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x4693 = UINT64_MAX;
	int64_t x4694 = INT64_MIN;
	int8_t x4696 = 17;
	volatile uint64_t t93 = 12421739328130LLU;

    t93 = ((x4693^(x4694/x4695))<<x4696);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int8_t x4730 = INT8_MIN;
	static uint8_t x4732 = 0U;

    t94 = ((x4729^(x4730/x4731))<<x4732);

    if (t94 != 851U) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x4761 = INT8_MIN;
	int8_t x4762 = INT8_MAX;
	int16_t x4764 = 11;
	int32_t t95 = -35553934;

    t95 = ((x4761^(x4762/x4763))<<x4764);

    if (t95 != 237568) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x4765 = UINT8_MAX;
	volatile int16_t x4766 = INT16_MIN;
	uint64_t x4767 = UINT64_MAX;
	volatile uint64_t t96 = 0LLU;

    t96 = ((x4765^(x4766/x4767))<<x4768);

    if (t96 != 8972014882652160LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x4861 = 165LLU;
	volatile uint16_t x4862 = UINT16_MAX;
	static uint8_t x4863 = 3U;
	int64_t x4864 = 41LL;
	static uint64_t t97 = 9118998832595688680LLU;

    t97 = ((x4861^(x4862/x4863))<<x4864);

    if (t97 != 48378511622144000LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x4951 = INT64_MIN;
	volatile int8_t x4952 = 1;
	volatile int64_t t98 = -6999942962LL;

    t98 = ((x4949^(x4950/x4951))<<x4952);

    if (t98 != 271154340LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x4961 = UINT32_MAX;
	static int8_t x4962 = INT8_MAX;
	int8_t x4964 = 2;
	uint32_t t99 = 55796322U;

    t99 = ((x4961^(x4962/x4963))<<x4964);

    if (t99 != 4294967292U) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x5061 = 325247;
	uint64_t x5062 = 3508812LLU;
	int8_t x5064 = 34;
	static uint64_t t100 = 23LLU;

    t100 = ((x5061^(x5062/x5063))<<x5064);

    if (t100 != 7658768502358016LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x5125 = -3730;
	uint64_t x5126 = UINT64_MAX;
	uint32_t x5127 = UINT32_MAX;
	uint8_t x5128 = 5U;
	volatile uint64_t t101 = 5029984200331LLU;

    t101 = ((x5125^(x5126/x5127))<<x5128);

    if (t101 != 18446743936270478816LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x5153 = 244U;
	uint32_t x5155 = 144U;
	static uint8_t x5156 = 3U;
	volatile uint32_t t102 = 1878U;

    t102 = ((x5153^(x5154/x5155))<<x5156);

    if (t102 != 238607312U) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x5281 = 1908078LL;
	int64_t x5282 = INT64_MAX;
	volatile uint64_t x5283 = 4728438LLU;
	volatile uint64_t t103 = 411502LLU;

    t103 = ((x5281^(x5282/x5283))<<x5284);

    if (t103 != 31958898830786560LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x5317 = -1;
	int32_t x5318 = -54587;
	uint32_t x5319 = 29508001U;
	volatile int16_t x5320 = 0;
	static uint32_t t104 = 43552069U;

    t104 = ((x5317^(x5318/x5319))<<x5320);

    if (t104 != 4294967150U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x5381 = 302343990U;
	int64_t x5383 = -93394122LL;
	volatile int8_t x5384 = 5;
	int64_t t105 = 372317907979LL;

    t105 = ((x5381^(x5382/x5383))<<x5384);

    if (t105 != 9675007680LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x5417 = 7U;

    t106 = ((x5417^(x5418/x5419))<<x5420);

    if (t106 != 23393721LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x5561 = 1158574276045413LLU;
	uint64_t x5562 = 99LLU;
	int64_t x5563 = 15475788353LL;
	static uint64_t t107 = 2LLU;

    t107 = ((x5561^(x5562/x5563))<<x5564);

    if (t107 != 2141347460073979904LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x5597 = INT32_MAX;
	uint16_t x5598 = 71U;
	int16_t x5600 = 0;
	volatile int32_t t108 = INT32_MAX;

    t108 = ((x5597^(x5598/x5599))<<x5600);

    if (t108 != INT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x5613 = -1LL;
	uint64_t x5614 = 4946941043864940996LLU;
	int8_t x5616 = 11;
	uint64_t t109 = 3849811387287LLU;

    t109 = ((x5613^(x5614/x5615))<<x5616);

    if (t109 != 15609505719813363712LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x5726 = UINT16_MAX;
	uint16_t x5727 = 7599U;
	volatile int16_t x5728 = 3;
	volatile uint32_t t110 = 800988U;

    t110 = ((x5725^(x5726/x5727))<<x5728);

    if (t110 != 654936U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x5785 = 324U;
	int64_t x5786 = 393625380681LL;
	static uint16_t x5787 = 170U;
	volatile uint8_t x5788 = 0U;
	static volatile int64_t t111 = 3220181590LL;

    t111 = ((x5785^(x5786/x5787))<<x5788);

    if (t111 != 2315443603LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x5826 = -5;
	int8_t x5827 = 3;
	uint8_t x5828 = 1U;

    t112 = ((x5825^(x5826/x5827))<<x5828);

    if (t112 != 4294960866U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x5869 = 134;
	int16_t x5870 = INT16_MIN;
	int32_t x5871 = INT32_MIN;
	volatile int16_t x5872 = 0;

    t113 = ((x5869^(x5870/x5871))<<x5872);

    if (t113 != 134) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x6045 = UINT16_MAX;
	uint32_t x6047 = 1136U;
	static int16_t x6048 = 0;
	volatile uint32_t t114 = 2U;

    t114 = ((x6045^(x6046/x6047))<<x6048);

    if (t114 != 3755858U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x6061 = UINT32_MAX;
	static volatile int8_t x6063 = INT8_MAX;
	volatile int16_t x6064 = 18;
	uint32_t t115 = 492171U;

    t115 = ((x6061^(x6062/x6063))<<x6064);

    if (t115 != 4294705152U) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x6073 = -1;
	uint64_t x6074 = 7926516393136704LLU;
	volatile uint8_t x6075 = 3U;
	int8_t x6076 = 3;
	volatile uint64_t t116 = 1998825726929LLU;

    t116 = ((x6073^(x6074/x6075))<<x6076);

    if (t116 != 18425606696661187064LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x6089 = 1268887LL;
	volatile uint32_t x6091 = 985U;
	int8_t x6092 = 0;
	volatile int64_t t117 = 116051357954LL;

    t117 = ((x6089^(x6090/x6091))<<x6092);

    if (t117 != 5362692LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x6213 = 38U;
	volatile int32_t x6214 = 165493;
	static int64_t x6215 = 3122121258965219193LL;
	static int8_t x6216 = 0;
	int64_t t118 = -93940819LL;

    t118 = ((x6213^(x6214/x6215))<<x6216);

    if (t118 != 38LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x6229 = INT8_MAX;
	int16_t x6230 = INT16_MIN;
	uint8_t x6232 = 12U;
	int32_t t119 = 36972;

    t119 = ((x6229^(x6230/x6231))<<x6232);

    if (t119 != 1568768) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x6261 = INT64_MIN;
	volatile int8_t x6262 = 1;
	volatile uint64_t x6263 = 18974466124LLU;
	uint8_t x6264 = 47U;
	uint64_t t120 = 983117454102546343LLU;

    t120 = ((x6261^(x6262/x6263))<<x6264);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x6305 = 19;
	uint64_t x6306 = 77585LLU;
	volatile int8_t x6307 = INT8_MIN;
	int64_t x6308 = 1LL;
	uint64_t t121 = 2033LLU;

    t121 = ((x6305^(x6306/x6307))<<x6308);

    if (t121 != 38LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x6321 = -4527;
	int32_t x6322 = INT32_MIN;
	static volatile uint32_t x6323 = 68843416U;
	static uint16_t x6324 = 2U;

    t122 = ((x6321^(x6322/x6323))<<x6324);

    if (t122 != 4294949176U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x6341 = UINT64_MAX;
	int8_t x6342 = INT8_MIN;
	static int8_t x6344 = 7;
	volatile uint64_t t123 = 1056662268421581618LLU;

    t123 = ((x6341^(x6342/x6343))<<x6344);

    if (t123 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x6465 = UINT32_MAX;
	static int16_t x6466 = -1;
	volatile uint32_t t124 = 2401648U;

    t124 = ((x6465^(x6466/x6467))<<x6468);

    if (t124 != 4290772992U) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x6525 = 123254108696012183LL;
	volatile uint16_t x6526 = UINT16_MAX;
	int8_t x6528 = 0;
	static int64_t t125 = -2LL;

    t125 = ((x6525^(x6526/x6527))<<x6528);

    if (t125 != 123254108696012183LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x6530 = 19U;
	static int32_t x6531 = -823480;
	int8_t x6532 = 0;
	static volatile int64_t t126 = 64736LL;

    t126 = ((x6529^(x6530/x6531))<<x6532);

    if (t126 != 434697451589911LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x6549 = 5;
	volatile int32_t x6551 = INT32_MAX;
	int16_t x6552 = 4;
	volatile uint64_t t127 = 586128634986118LLU;

    t127 = ((x6549^(x6550/x6551))<<x6552);

    if (t127 != 6127392LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x6581 = 50073208LLU;
	int8_t x6582 = INT8_MIN;
	static uint16_t x6584 = 1U;
	static uint64_t t128 = 870716437273399942LLU;

    t128 = ((x6581^(x6582/x6583))<<x6584);

    if (t128 != 100146672LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x6693 = 860956915U;
	int16_t x6694 = 20;
	volatile uint64_t x6695 = 75323LLU;
	uint16_t x6696 = 36U;
	volatile uint64_t t129 = 24009665570374LLU;

    t129 = ((x6693^(x6694/x6695))<<x6696);

    if (t129 != 3824276469912174592LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x6705 = 1366U;
	int8_t x6706 = INT8_MIN;
	int32_t x6707 = -758;
	uint16_t x6708 = 5U;
	static uint32_t t130 = 3619U;

    t130 = ((x6705^(x6706/x6707))<<x6708);

    if (t130 != 43712U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x6805 = INT16_MIN;
	uint8_t x6806 = 31U;
	static int16_t x6807 = -1;
	int8_t x6808 = 0;
	int32_t t131 = 939;

    t131 = ((x6805^(x6806/x6807))<<x6808);

    if (t131 != 32737) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x6841 = 7560LLU;
	int64_t x6842 = -1LL;
	int16_t x6843 = -1;
	int8_t x6844 = 2;

    t132 = ((x6841^(x6842/x6843))<<x6844);

    if (t132 != 30244LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x7056 = 2U;
	int64_t t133 = 3603LL;

    t133 = ((x7053^(x7054/x7055))<<x7056);

    if (t133 != 128428LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x7073 = 7086;
	static volatile uint64_t x7074 = 1464528548LLU;
	uint64_t x7076 = 43LLU;
	volatile uint64_t t134 = 69686LLU;

    t134 = ((x7073^(x7074/x7075))<<x7076);

    if (t134 != 10893609364283719680LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x7189 = -5740828710LL;
	static uint64_t x7190 = 3267121858370LLU;
	static uint32_t x7192 = 9U;
	volatile uint64_t t135 = 5788814890694297804LLU;

    t135 = ((x7189^(x7190/x7191))<<x7192);

    if (t135 != 18446741134405252096LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x7206 = 1439936506U;
	uint32_t x7207 = 12639815U;
	static uint8_t x7208 = 9U;
	uint32_t t136 = 7966989U;

    t136 = ((x7205^(x7206/x7207))<<x7208);

    if (t136 != 4294909440U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x7249 = INT32_MIN;
	int64_t x7250 = INT64_MIN;
	static uint64_t x7252 = 0LLU;
	int64_t t137 = -530613918LL;

    t137 = ((x7249^(x7250/x7251))<<x7252);

    if (t137 != 3756974294490172LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x7369 = -1;
	int8_t x7371 = INT8_MIN;
	uint16_t x7372 = 4U;
	uint32_t t138 = 678546U;

    t138 = ((x7369^(x7370/x7371))<<x7372);

    if (t138 != 4294967280U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x7385 = 670U;
	static uint64_t x7386 = 6696950090LLU;
	static int64_t x7387 = INT64_MIN;
	volatile uint64_t t139 = 1735569765LLU;

    t139 = ((x7385^(x7386/x7387))<<x7388);

    if (t139 != 1340LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x7425 = 67U;
	volatile int32_t x7426 = INT32_MIN;
	volatile uint32_t x7427 = 19309U;
	static int8_t x7428 = 0;
	volatile uint32_t t140 = 193495U;

    t140 = ((x7425^(x7426/x7427))<<x7428);

    if (t140 != 111155U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x7445 = 1198;
	int8_t x7446 = -42;
	volatile int32_t t141 = -85157535;

    t141 = ((x7445^(x7446/x7447))<<x7448);

    if (t141 != 153344) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x7537 = INT32_MAX;
	int8_t x7538 = -1;
	int32_t x7539 = INT32_MAX;
	int8_t x7540 = 0;
	volatile int32_t t142 = INT32_MAX;

    t142 = ((x7537^(x7538/x7539))<<x7540);

    if (t142 != INT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x7582 = 207U;
	uint64_t x7583 = 34012LLU;
	uint8_t x7584 = 5U;
	uint64_t t143 = 848766714951676249LLU;

    t143 = ((x7581^(x7582/x7583))<<x7584);

    if (t143 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x7633 = -1;
	uint8_t x7634 = UINT8_MAX;
	int64_t x7635 = -1LL;
	volatile uint8_t x7636 = 1U;

    t144 = ((x7633^(x7634/x7635))<<x7636);

    if (t144 != 508LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x7657 = -5;
	uint64_t x7658 = UINT64_MAX;
	uint8_t x7659 = 1U;
	uint64_t x7660 = 38LLU;
	uint64_t t145 = 19618278101570346LLU;

    t145 = ((x7657^(x7658/x7659))<<x7660);

    if (t145 != 1099511627776LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x7713 = INT8_MIN;
	uint64_t x7714 = UINT64_MAX;
	int32_t x7715 = -1;
	uint8_t x7716 = 3U;
	uint64_t t146 = 11554539677LLU;

    t146 = ((x7713^(x7714/x7715))<<x7716);

    if (t146 != 18446744073709550600LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x7765 = 2021451U;
	int64_t x7766 = -1LL;
	uint8_t x7768 = 3U;
	int64_t t147 = -368937299586313927LL;

    t147 = ((x7765^(x7766/x7767))<<x7768);

    if (t147 != 16171608LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x7817 = 3;
	volatile uint64_t x7818 = 3021838343130350LLU;
	int64_t x7819 = INT64_MAX;
	int8_t x7820 = 15;
	volatile uint64_t t148 = 926221250LLU;

    t148 = ((x7817^(x7818/x7819))<<x7820);

    if (t148 != 98304LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x7845 = 6036LLU;
	volatile int8_t x7846 = INT8_MAX;
	int8_t x7847 = -1;
	uint64_t x7848 = 44LLU;
	uint64_t t149 = 132988978228210985LLU;

    t149 = ((x7845^(x7846/x7847))<<x7848);

    if (t149 != 18339027118559592448LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x7861 = UINT64_MAX;
	volatile int8_t x7864 = 1;

    t150 = ((x7861^(x7862/x7863))<<x7864);

    if (t150 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x7937 = INT64_MAX;
	int8_t x7938 = INT8_MAX;
	uint64_t x7939 = 116727199181LLU;

    t151 = ((x7937^(x7938/x7939))<<x7940);

    if (t151 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x7941 = UINT16_MAX;
	static int16_t x7942 = -1;
	int64_t x7943 = 7605269537810LL;
	int8_t x7944 = 1;
	static int64_t t152 = 393906183688LL;

    t152 = ((x7941^(x7942/x7943))<<x7944);

    if (t152 != 131070LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x8001 = UINT32_MAX;
	uint64_t x8003 = 922587906119942496LLU;
	uint8_t x8004 = 2U;
	uint64_t t153 = 195576029696796109LLU;

    t153 = ((x8001^(x8002/x8003))<<x8004);

    if (t153 != 17179869180LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x8053 = 14146U;
	volatile int16_t x8054 = -578;
	uint32_t x8055 = 3U;
	int8_t x8056 = 0;

    t154 = ((x8053^(x8054/x8055))<<x8056);

    if (t154 != 1431659478U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x8069 = 36347203U;
	static int64_t x8070 = -1LL;
	uint64_t t155 = 13673LLU;

    t155 = ((x8069^(x8070/x8071))<<x8072);

    if (t155 != 1371956964LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x8077 = -140666788257450685LL;
	volatile int32_t x8078 = INT32_MAX;
	uint64_t t156 = 22922LLU;

    t156 = ((x8077^(x8078/x8079))<<x8080);

    if (t156 != 3837911307449794560LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x8105 = INT8_MIN;
	int64_t x8106 = 446LL;
	volatile int8_t x8107 = INT8_MIN;
	uint8_t x8108 = 31U;

    t157 = ((x8105^(x8106/x8107))<<x8108);

    if (t157 != 268435456000LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x8109 = UINT32_MAX;
	static uint32_t x8110 = 193U;
	uint8_t x8111 = UINT8_MAX;
	volatile uint32_t t158 = UINT32_MAX;

    t158 = ((x8109^(x8110/x8111))<<x8112);

    if (t158 != UINT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x8285 = INT64_MIN;
	int64_t x8286 = INT64_MIN;
	volatile int8_t x8288 = 0;

    t159 = ((x8285^(x8286/x8287))<<x8288);

    if (t159 != 8893965892681390958LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x8329 = 6711348U;
	uint16_t x8330 = 3U;
	static int8_t x8332 = 2;

    t160 = ((x8329^(x8330/x8331))<<x8332);

    if (t160 != 26845392LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x8393 = UINT8_MAX;
	volatile int8_t x8394 = -1;
	int8_t x8395 = INT8_MIN;
	volatile int32_t t161 = -556;

    t161 = ((x8393^(x8394/x8395))<<x8396);

    if (t161 != 130560) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x8551 = 45U;
	volatile int8_t x8552 = 10;
	uint64_t t162 = 1649974473204LLU;

    t162 = ((x8549^(x8550/x8551))<<x8552);

    if (t162 != 26624LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x8597 = 15340LLU;
	int16_t x8598 = INT16_MIN;
	uint64_t x8599 = UINT64_MAX;
	int16_t x8600 = 2;
	volatile uint64_t t163 = 3260347657335036893LLU;

    t163 = ((x8597^(x8598/x8599))<<x8600);

    if (t163 != 61360LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x8621 = INT16_MIN;
	uint32_t x8622 = 3U;
	uint64_t x8623 = 5LLU;
	uint16_t x8624 = 28U;
	uint64_t t164 = 33856527863496LLU;

    t164 = ((x8621^(x8622/x8623))<<x8624);

    if (t164 != 18446735277616529408LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x8677 = UINT64_MAX;
	volatile int32_t x8678 = 2960159;
	int32_t x8679 = 29042118;
	int8_t x8680 = 1;
	volatile uint64_t t165 = 509948LLU;

    t165 = ((x8677^(x8678/x8679))<<x8680);

    if (t165 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x8713 = INT16_MAX;
	static int64_t x8714 = -1LL;
	volatile uint64_t t166 = 94421372LLU;

    t166 = ((x8713^(x8714/x8715))<<x8716);

    if (t166 != 294031434496LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x8809 = 15U;
	static int16_t x8810 = 523;
	static volatile int32_t x8811 = INT32_MIN;
	int16_t x8812 = 8;
	volatile uint32_t t167 = 12332214U;

    t167 = ((x8809^(x8810/x8811))<<x8812);

    if (t167 != 3840U) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x8813 = 29;
	int16_t x8814 = INT16_MIN;
	int32_t x8815 = INT32_MAX;
	static int16_t x8816 = 18;

    t168 = ((x8813^(x8814/x8815))<<x8816);

    if (t168 != 7602176) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x8897 = 1U;
	int16_t x8899 = INT16_MAX;
	static uint8_t x8900 = 2U;
	static volatile int64_t t169 = -427850315LL;

    t169 = ((x8897^(x8898/x8899))<<x8900);

    if (t169 != 13973670763660LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint64_t x8929 = 45344975885LLU;
	uint64_t x8930 = 42026843532475LLU;
	static uint64_t x8931 = 488LLU;
	uint16_t x8932 = 58U;

    t170 = ((x8929^(x8930/x8931))<<x8932);

    if (t170 != 8070450532247928832LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x8993 = INT64_MIN;
	static uint64_t x8994 = 504216775162653LLU;
	uint16_t x8996 = 47U;
	uint64_t t171 = 58172828892695219LLU;

    t171 = ((x8993^(x8994/x8995))<<x8996);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x9061 = UINT64_MAX;
	volatile int32_t x9062 = -156184;
	int8_t x9063 = -1;
	static volatile int32_t x9064 = 15;

    t172 = ((x9061^(x9062/x9063))<<x9064);

    if (t172 != 18446744068591681536LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x9114 = UINT32_MAX;
	volatile uint8_t x9116 = 5U;
	static volatile uint32_t t173 = 22709U;

    t173 = ((x9113^(x9114/x9115))<<x9116);

    if (t173 != 4294899872U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x9205 = 570122538U;
	uint8_t x9206 = UINT8_MAX;
	int8_t x9207 = -1;
	uint16_t x9208 = 29U;
	volatile uint32_t t174 = 20U;

    t174 = ((x9205^(x9206/x9207))<<x9208);

    if (t174 != 1610612736U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x9253 = UINT64_MAX;
	uint8_t x9254 = 108U;
	volatile int16_t x9255 = -3307;
	uint16_t x9256 = 0U;
	volatile uint64_t t175 = UINT64_MAX;

    t175 = ((x9253^(x9254/x9255))<<x9256);

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x9437 = 17503340415303902LLU;
	uint64_t x9439 = UINT64_MAX;
	int8_t x9440 = 1;

    t176 = ((x9437^(x9438/x9439))<<x9440);

    if (t176 != 35006680830607804LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x9449 = UINT16_MAX;
	int8_t x9450 = INT8_MAX;
	volatile int64_t x9451 = 102LL;
	static int8_t x9452 = 1;

    t177 = ((x9449^(x9450/x9451))<<x9452);

    if (t177 != 131068LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x9462 = INT16_MIN;
	uint64_t x9463 = UINT64_MAX;
	uint16_t x9464 = 33U;
	static volatile uint64_t t178 = 10732845790303LLU;

    t178 = ((x9461^(x9462/x9463))<<x9464);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x9493 = 23104475519601LLU;
	volatile int16_t x9494 = INT16_MAX;
	uint8_t x9495 = UINT8_MAX;
	static uint16_t x9496 = 0U;

    t179 = ((x9493^(x9494/x9495))<<x9496);

    if (t179 != 23104475519729LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x9549 = -1LL;
	int64_t x9550 = INT64_MIN;
	uint16_t x9552 = 1U;
	int64_t t180 = -14572832165LL;

    t180 = ((x9549^(x9550/x9551))<<x9552);

    if (t180 != 3808163516455314LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x9557 = 0U;
	int32_t x9558 = 4356;
	static uint8_t x9560 = 3U;
	int32_t t181 = 503;

    t181 = ((x9557^(x9558/x9559))<<x9560);

    if (t181 != 272) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x9590 = 35U;
	int16_t x9591 = 42;
	static uint8_t x9592 = 0U;
	volatile uint32_t t182 = 42U;

    t182 = ((x9589^(x9590/x9591))<<x9592);

    if (t182 != 4294460619U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x9613 = 1500600338LLU;
	int64_t x9614 = -16139649224329LL;
	uint16_t x9616 = 23U;
	volatile uint64_t t183 = 191930LLU;

    t183 = ((x9613^(x9614/x9615))<<x9616);

    if (t183 != 9593659959803904LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x9661 = INT64_MIN;
	volatile uint64_t x9662 = UINT64_MAX;
	static int64_t x9663 = 163243232LL;
	volatile int32_t x9664 = 55;
	uint64_t t184 = 206845227798259LLU;

    t184 = ((x9661^(x9662/x9663))<<x9664);

    if (t184 != 1909526242005090304LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x9681 = 45U;
	volatile int32_t x9682 = 81333;
	static uint8_t x9684 = 1U;
	int32_t t185 = -598353042;

    t185 = ((x9681^(x9682/x9683))<<x9684);

    if (t185 != 90) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x9689 = INT8_MAX;
	uint32_t x9690 = 82288U;
	uint32_t t186 = 2U;

    t186 = ((x9689^(x9690/x9691))<<x9692);

    if (t186 != 439712U) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x9713 = 0U;
	int32_t x9714 = INT32_MIN;
	static int16_t x9715 = INT16_MIN;

    t187 = ((x9713^(x9714/x9715))<<x9716);

    if (t187 != 131072) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x9746 = 1858;
	uint8_t x9748 = 12U;

    t188 = ((x9745^(x9746/x9747))<<x9748);

    if (t188 != 18446735277616529408LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint8_t x9758 = UINT8_MAX;
	uint16_t x9759 = 1384U;
	int32_t t189 = -8;

    t189 = ((x9757^(x9758/x9759))<<x9760);

    if (t189 != 32768) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x9793 = 4589U;
	int32_t x9795 = 7335309;
	int8_t x9796 = 30;
	static volatile uint32_t t190 = 4U;

    t190 = ((x9793^(x9794/x9795))<<x9796);

    if (t190 != 1073741824U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x9797 = 1144662724418LLU;
	static uint32_t x9798 = 19430853U;
	uint8_t x9799 = 72U;
	static volatile uint8_t x9800 = 14U;
	static uint64_t t191 = 3802792948737127104LLU;

    t191 = ((x9797^(x9798/x9799))<<x9800);

    if (t191 != 18754149791072256LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x10129 = INT64_MAX;
	uint64_t x10130 = 880741405427575LLU;
	int32_t x10131 = -66496797;
	volatile uint16_t x10132 = 8U;
	volatile uint64_t t192 = 1100112678730LLU;

    t192 = ((x10129^(x10130/x10131))<<x10132);

    if (t192 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x10133 = UINT8_MAX;
	uint8_t x10136 = 5U;
	volatile uint64_t t193 = 4366LLU;

    t193 = ((x10133^(x10134/x10135))<<x10136);

    if (t193 != 8160LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x10149 = UINT32_MAX;
	int64_t x10150 = -1LL;
	uint8_t x10151 = UINT8_MAX;
	volatile int64_t x10152 = 5LL;
	int64_t t194 = -16245607470LL;

    t194 = ((x10149^(x10150/x10151))<<x10152);

    if (t194 != 137438953440LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x10169 = 462121021;
	uint64_t x10170 = 58824747LLU;
	volatile uint64_t x10171 = 47390458889LLU;
	volatile int8_t x10172 = 1;

    t195 = ((x10169^(x10170/x10171))<<x10172);

    if (t195 != 924242042LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x10269 = 108U;
	int32_t x10270 = -1;
	int8_t x10271 = INT8_MIN;
	volatile int8_t x10272 = 3;
	volatile int32_t t196 = -37;

    t196 = ((x10269^(x10270/x10271))<<x10272);

    if (t196 != 864) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x10281 = 174454U;
	int64_t x10283 = -10731806934670LL;

    t197 = ((x10281^(x10282/x10283))<<x10284);

    if (t197 != 91464138752LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x10286 = -1;
	uint32_t x10287 = 27U;
	uint64_t x10288 = 7LLU;
	uint32_t t198 = 3U;

    t198 = ((x10285^(x10286/x10287))<<x10288);

    if (t198 != 3181457152U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x10290 = 2U;
	volatile uint32_t x10291 = 969651836U;
	uint8_t x10292 = 13U;

    t199 = ((x10289^(x10290/x10291))<<x10292);

    if (t199 != 0U) { NG(); } else { ; }
	
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



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

static int16_t x3 = INT16_MIN;
int8_t x35 = INT8_MAX;
int16_t x36 = 0;
volatile int8_t x46 = -37;
int8_t x48 = 0;
int16_t x49 = -7;
int8_t x51 = 0;
static int32_t x79 = INT32_MAX;
static volatile int8_t x81 = INT8_MIN;
int64_t x82 = INT64_MIN;
uint64_t x159 = 318530355938LLU;
uint32_t x160 = 12U;
volatile int16_t x193 = 13;
volatile int32_t t10 = 8785;
uint32_t x266 = 400U;
int32_t x267 = 0;
int32_t t12 = -21;
volatile int32_t x275 = INT32_MIN;
uint32_t x276 = 2U;
int32_t t14 = 66998325;
int64_t x325 = INT64_MIN;
volatile int8_t x328 = 2;
static int32_t x347 = -1;
volatile int64_t x389 = INT64_MIN;
static int64_t x390 = INT64_MAX;
volatile uint32_t x396 = 4U;
int32_t t18 = 51906270;
int32_t x419 = -872585622;
volatile uint16_t x420 = 3U;
static int16_t x445 = INT16_MAX;
int16_t x602 = 1;
volatile int32_t t22 = -32122908;
int8_t x673 = INT8_MAX;
int8_t x690 = 5;
static int64_t x874 = INT64_MAX;
volatile int8_t x932 = 27;
static volatile int8_t x941 = 28;
static int16_t x959 = -1;
int16_t x960 = 0;
uint64_t x1001 = 11LLU;
volatile uint16_t x1004 = 13U;
volatile int32_t t35 = -45;
uint64_t x1091 = UINT64_MAX;
int16_t x1094 = 3;
int32_t t37 = -54;
int32_t x1141 = -8275089;
int8_t x1256 = 3;
static int32_t x1325 = 2707956;
int8_t x1328 = 3;
volatile int32_t t45 = 122778920;
int64_t x1406 = INT64_MIN;
static int64_t x1499 = -45728310522173762LL;
volatile int32_t t48 = -31551195;
uint32_t x1518 = 353764U;
int16_t x1519 = 4082;
uint16_t x1520 = 11U;
int16_t x1534 = INT16_MAX;
int8_t x1535 = 0;
static volatile int32_t t50 = 77352098;
volatile int8_t x1592 = 1;
static uint32_t x1640 = 3U;
int64_t x1682 = -1LL;
static uint16_t x1683 = UINT16_MAX;
int32_t t54 = 5758;
uint16_t x1734 = 1452U;
uint8_t x1747 = 0U;
volatile int8_t x1797 = -6;
volatile int8_t x2142 = -1;
int8_t x2161 = INT8_MIN;
int32_t x2163 = INT32_MIN;
static volatile int16_t x2187 = -1;
volatile int32_t t70 = -14941;
uint64_t x2215 = 686746100855870571LLU;
volatile int32_t t72 = 31576;
uint8_t x2244 = 3U;
int8_t x2282 = INT8_MIN;
uint32_t x2296 = 4U;
volatile int16_t x2315 = -1;
volatile uint8_t x2340 = 1U;
static uint8_t x2406 = 0U;
uint64_t x2453 = UINT64_MAX;
static uint8_t x2456 = 2U;
int16_t x2493 = INT16_MIN;
uint8_t x2496 = 0U;
int8_t x2510 = -1;
int32_t t84 = 129;
uint64_t x2530 = 4019LLU;
int32_t t85 = -120696307;
int32_t t86 = 3;
int32_t x2577 = INT32_MIN;
int8_t x2580 = 1;
int32_t x2597 = INT32_MIN;
int16_t x2599 = INT16_MIN;
int8_t x2600 = 2;
uint16_t x2619 = 1U;
static volatile int32_t t89 = -40;
int16_t x2722 = INT16_MAX;
int8_t x2795 = INT8_MIN;
int8_t x2802 = 48;
volatile int32_t t92 = 1076306;
uint16_t x2841 = UINT16_MAX;
volatile int64_t x2966 = INT64_MIN;
int32_t x3035 = -1;
int16_t x3081 = -7;
int8_t x3086 = 14;
int16_t x3094 = -1;
int32_t x3121 = INT32_MIN;
int32_t x3123 = INT32_MAX;
volatile int32_t t105 = 3983382;
int8_t x3128 = 1;
static uint64_t x3227 = 2784113LLU;
int64_t x3231 = -11612467961528510LL;
int32_t t109 = 16483;
volatile int8_t x3434 = INT8_MIN;
volatile int32_t t113 = -5744;
int16_t x3476 = 1;
int32_t x3493 = INT32_MAX;
int64_t x3498 = -26560645055238572LL;
int64_t x3514 = INT64_MAX;
volatile int32_t t117 = 832;
uint8_t x3525 = 7U;
volatile int16_t x3567 = 1;
int64_t x3714 = -1LL;
uint32_t x3746 = 3406U;
static uint16_t x3748 = 6U;
static int16_t x3777 = INT16_MIN;
int16_t x3778 = INT16_MIN;
volatile uint32_t x3780 = 3U;
int64_t x3881 = INT64_MIN;
int16_t x4090 = INT16_MAX;
int64_t x4151 = -1LL;
int8_t x4152 = 1;
int32_t x4170 = INT32_MIN;
uint32_t x4172 = 1U;
static volatile int16_t x4316 = 0;
volatile int16_t x4336 = 1;
uint32_t x4363 = 45612081U;
int16_t x4385 = -1;
volatile uint16_t x4386 = 469U;
volatile int32_t x4467 = -3718649;
volatile int8_t x4468 = 1;
static volatile int16_t x4473 = -1;
uint32_t x4475 = 45481U;
static int32_t t134 = 508918416;
volatile int32_t t136 = 14;
volatile int32_t t137 = 18;
int8_t x4548 = 0;
uint16_t x4609 = UINT16_MAX;
int64_t x4637 = INT64_MIN;
volatile int64_t x4639 = -1LL;
volatile int32_t t141 = 57;
int8_t x4700 = 0;
volatile int32_t t143 = 25;
int64_t x4775 = 50919163184LL;
uint8_t x4875 = 125U;
uint8_t x4876 = 4U;
volatile int32_t t147 = -13;
int32_t t149 = -24626;
uint16_t x4981 = UINT16_MAX;
static int16_t x4993 = -1;
static uint16_t x5058 = UINT16_MAX;
uint16_t x5060 = 19U;
int32_t t152 = 8926343;
int32_t x5115 = -202;
volatile int32_t x5117 = -1;
int32_t x5167 = 236114079;
int16_t x5168 = 0;
static int32_t t155 = 321;
int16_t x5170 = -1;
static int32_t x5172 = 30;
int32_t t157 = 14667170;
int16_t x5243 = INT16_MAX;
static int32_t x5294 = INT32_MIN;
uint8_t x5300 = 0U;
uint8_t x5309 = 64U;
volatile int32_t t162 = -1;
int32_t x5313 = INT32_MIN;
static int16_t x5363 = INT16_MIN;
uint16_t x5439 = 6U;
uint8_t x5440 = 0U;
volatile int64_t x5519 = -1LL;
volatile int32_t t167 = 174168232;
uint64_t x5542 = 391246224648967LLU;
static volatile int32_t t170 = 1;
static int64_t x5610 = -11284818212LL;
int64_t x5611 = INT64_MAX;
uint8_t x5612 = 0U;
int32_t x5686 = -1;
static int32_t x5687 = INT32_MAX;
int64_t x5830 = INT64_MIN;
int32_t t175 = -228944741;
static uint16_t x5848 = 29U;
uint8_t x5940 = 18U;
int32_t x6175 = -1;
uint8_t x6212 = 0U;
uint8_t x6244 = 0U;
int16_t x6297 = -7188;
static int8_t x6319 = -1;
static uint32_t x6349 = 20U;
int32_t x6485 = -1;
volatile uint16_t x6491 = 55U;
volatile int8_t x6536 = 12;
static int32_t x6594 = INT32_MIN;
int32_t x6621 = INT32_MAX;
static int32_t x6622 = 2;
int32_t t195 = -660003866;
static volatile uint8_t x6634 = 3U;
int64_t x6635 = INT64_MIN;
uint32_t x6694 = 7U;
static uint8_t x6696 = 8U;
static int16_t x6828 = 0;


void f0(void) {
    	uint32_t x1 = 9055U;
	volatile int16_t x2 = -1859;
	int32_t x4 = 1;
	volatile int32_t t0 = -1;

    t0 = ((x1!=(x2<=x3))<<x4);

    if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x33 = INT64_MIN;
	uint16_t x34 = 127U;
	int32_t t1 = -1702;

    t1 = ((x33!=(x34<=x35))<<x36);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x45 = 44U;
	uint8_t x47 = 25U;
	volatile int32_t t2 = -13;

    t2 = ((x45!=(x46<=x47))<<x48);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x50 = 96;
	uint16_t x52 = 0U;
	static int32_t t3 = -8;

    t3 = ((x49!=(x50<=x51))<<x52);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x77 = INT16_MIN;
	static volatile uint64_t x78 = UINT64_MAX;
	int16_t x80 = 15;
	volatile int32_t t4 = -6649905;

    t4 = ((x77!=(x78<=x79))<<x80);

    if (t4 != 32768) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x83 = INT8_MAX;
	static uint8_t x84 = 7U;
	volatile int32_t t5 = 53168;

    t5 = ((x81!=(x82<=x83))<<x84);

    if (t5 != 128) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x105 = INT64_MAX;
	int16_t x106 = INT16_MIN;
	int32_t x107 = INT32_MAX;
	uint16_t x108 = 1U;
	volatile int32_t t6 = -449;

    t6 = ((x105!=(x106<=x107))<<x108);

    if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x153 = 38696LL;
	volatile uint32_t x154 = 47U;
	int64_t x155 = INT64_MAX;
	uint8_t x156 = 1U;
	static volatile int32_t t7 = 15009;

    t7 = ((x153!=(x154<=x155))<<x156);

    if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x157 = INT64_MAX;
	uint16_t x158 = 864U;
	int32_t t8 = -71;

    t8 = ((x157!=(x158<=x159))<<x160);

    if (t8 != 4096) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x181 = 8U;
	int32_t x182 = INT32_MIN;
	int8_t x183 = -1;
	static volatile int16_t x184 = 17;
	int32_t t9 = -79804343;

    t9 = ((x181!=(x182<=x183))<<x184);

    if (t9 != 131072) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x194 = -144372LL;
	int8_t x195 = 3;
	static uint32_t x196 = 12U;

    t10 = ((x193!=(x194<=x195))<<x196);

    if (t10 != 4096) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x237 = 1LLU;
	uint16_t x238 = 16U;
	uint16_t x239 = 120U;
	uint8_t x240 = 5U;
	volatile int32_t t11 = 13968191;

    t11 = ((x237!=(x238<=x239))<<x240);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x265 = INT16_MAX;
	uint16_t x268 = 1U;

    t12 = ((x265!=(x266<=x267))<<x268);

    if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x269 = UINT16_MAX;
	int16_t x270 = INT16_MAX;
	int8_t x271 = INT8_MIN;
	static uint8_t x272 = 1U;
	volatile int32_t t13 = 23758;

    t13 = ((x269!=(x270<=x271))<<x272);

    if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x273 = -1;
	uint16_t x274 = 32U;

    t14 = ((x273!=(x274<=x275))<<x276);

    if (t14 != 4) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x326 = UINT64_MAX;
	int64_t x327 = INT64_MIN;
	int32_t t15 = 4656020;

    t15 = ((x325!=(x326<=x327))<<x328);

    if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x345 = INT8_MIN;
	uint16_t x346 = UINT16_MAX;
	int8_t x348 = 0;
	int32_t t16 = 52187;

    t16 = ((x345!=(x346<=x347))<<x348);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x391 = 415U;
	int64_t x392 = 6LL;
	volatile int32_t t17 = 1086;

    t17 = ((x389!=(x390<=x391))<<x392);

    if (t17 != 64) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x393 = -1;
	uint8_t x394 = 103U;
	static volatile int16_t x395 = INT16_MIN;

    t18 = ((x393!=(x394<=x395))<<x396);

    if (t18 != 16) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x417 = INT32_MIN;
	static volatile int64_t x418 = -21736152LL;
	int32_t t19 = 57;

    t19 = ((x417!=(x418<=x419))<<x420);

    if (t19 != 8) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x446 = 498960U;
	uint16_t x447 = UINT16_MAX;
	uint8_t x448 = 8U;
	int32_t t20 = 798801;

    t20 = ((x445!=(x446<=x447))<<x448);

    if (t20 != 256) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x457 = -1423;
	static int16_t x458 = INT16_MIN;
	int16_t x459 = 2;
	uint32_t x460 = 10U;
	int32_t t21 = -169408015;

    t21 = ((x457!=(x458<=x459))<<x460);

    if (t21 != 1024) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x601 = -5LL;
	static int32_t x603 = -1;
	volatile uint8_t x604 = 0U;

    t22 = ((x601!=(x602<=x603))<<x604);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x613 = -573953787LL;
	static volatile int16_t x614 = INT16_MAX;
	int8_t x615 = -2;
	uint8_t x616 = 0U;
	volatile int32_t t23 = 1436;

    t23 = ((x613!=(x614<=x615))<<x616);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x674 = -9;
	int16_t x675 = -1;
	uint8_t x676 = 3U;
	int32_t t24 = 2953;

    t24 = ((x673!=(x674<=x675))<<x676);

    if (t24 != 8) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x689 = INT16_MIN;
	int8_t x691 = 7;
	int8_t x692 = 2;
	int32_t t25 = -229421;

    t25 = ((x689!=(x690<=x691))<<x692);

    if (t25 != 4) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x717 = INT32_MAX;
	int8_t x718 = INT8_MAX;
	int8_t x719 = -1;
	uint8_t x720 = 24U;
	volatile int32_t t26 = 969627;

    t26 = ((x717!=(x718<=x719))<<x720);

    if (t26 != 16777216) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x821 = INT16_MIN;
	uint64_t x822 = UINT64_MAX;
	static volatile int8_t x823 = -1;
	int8_t x824 = 0;
	int32_t t27 = 58278479;

    t27 = ((x821!=(x822<=x823))<<x824);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x849 = 53254689LLU;
	int8_t x850 = INT8_MIN;
	static int16_t x851 = INT16_MIN;
	static uint8_t x852 = 6U;
	static volatile int32_t t28 = 220;

    t28 = ((x849!=(x850<=x851))<<x852);

    if (t28 != 64) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x873 = INT8_MIN;
	int16_t x875 = INT16_MIN;
	volatile uint8_t x876 = 1U;
	volatile int32_t t29 = 130542969;

    t29 = ((x873!=(x874<=x875))<<x876);

    if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x929 = -1LL;
	volatile int8_t x930 = 1;
	int8_t x931 = -1;
	int32_t t30 = -474259505;

    t30 = ((x929!=(x930<=x931))<<x932);

    if (t30 != 134217728) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x942 = UINT8_MAX;
	int32_t x943 = -1;
	static int8_t x944 = 1;
	int32_t t31 = -3883;

    t31 = ((x941!=(x942<=x943))<<x944);

    if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x957 = 111117U;
	uint8_t x958 = UINT8_MAX;
	volatile int32_t t32 = 371;

    t32 = ((x957!=(x958<=x959))<<x960);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x1002 = 1;
	int8_t x1003 = -56;
	int32_t t33 = -9;

    t33 = ((x1001!=(x1002<=x1003))<<x1004);

    if (t33 != 8192) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x1069 = 0U;
	uint64_t x1070 = 44217173812654LLU;
	uint8_t x1071 = 1U;
	int16_t x1072 = 0;
	volatile int32_t t34 = 917;

    t34 = ((x1069!=(x1070<=x1071))<<x1072);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x1073 = INT64_MIN;
	static uint32_t x1074 = 18U;
	int16_t x1075 = -108;
	volatile uint8_t x1076 = 3U;

    t35 = ((x1073!=(x1074<=x1075))<<x1076);

    if (t35 != 8) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x1089 = UINT64_MAX;
	int16_t x1090 = -1;
	static volatile uint16_t x1092 = 6U;
	int32_t t36 = 3332;

    t36 = ((x1089!=(x1090<=x1091))<<x1092);

    if (t36 != 64) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x1093 = -96694;
	uint16_t x1095 = UINT16_MAX;
	uint8_t x1096 = 13U;

    t37 = ((x1093!=(x1094<=x1095))<<x1096);

    if (t37 != 8192) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x1142 = 2404581858LLU;
	uint8_t x1143 = 83U;
	int16_t x1144 = 16;
	int32_t t38 = 10;

    t38 = ((x1141!=(x1142<=x1143))<<x1144);

    if (t38 != 65536) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x1149 = 1;
	volatile int32_t x1150 = INT32_MIN;
	int8_t x1151 = 2;
	int8_t x1152 = 2;
	int32_t t39 = -3591012;

    t39 = ((x1149!=(x1150<=x1151))<<x1152);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x1157 = 370535917039472LL;
	uint16_t x1158 = 7U;
	static int8_t x1159 = -1;
	static uint8_t x1160 = 0U;
	int32_t t40 = -528403;

    t40 = ((x1157!=(x1158<=x1159))<<x1160);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x1173 = INT64_MAX;
	static int16_t x1174 = 0;
	static int8_t x1175 = 0;
	int8_t x1176 = 0;
	int32_t t41 = -1;

    t41 = ((x1173!=(x1174<=x1175))<<x1176);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x1253 = UINT8_MAX;
	int16_t x1254 = INT16_MIN;
	int64_t x1255 = INT64_MIN;
	static volatile int32_t t42 = -692386451;

    t42 = ((x1253!=(x1254<=x1255))<<x1256);

    if (t42 != 8) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x1289 = INT8_MIN;
	int8_t x1290 = INT8_MIN;
	static volatile int64_t x1291 = -1LL;
	uint16_t x1292 = 14U;
	static int32_t t43 = 1;

    t43 = ((x1289!=(x1290<=x1291))<<x1292);

    if (t43 != 16384) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x1326 = 1996U;
	uint8_t x1327 = 1U;
	int32_t t44 = -3498;

    t44 = ((x1325!=(x1326<=x1327))<<x1328);

    if (t44 != 8) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x1377 = -1LL;
	volatile int8_t x1378 = INT8_MIN;
	uint64_t x1379 = 5109LLU;
	uint16_t x1380 = 1U;

    t45 = ((x1377!=(x1378<=x1379))<<x1380);

    if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x1405 = -7;
	int32_t x1407 = INT32_MIN;
	uint16_t x1408 = 3U;
	int32_t t46 = 255890945;

    t46 = ((x1405!=(x1406<=x1407))<<x1408);

    if (t46 != 8) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x1497 = INT8_MAX;
	uint8_t x1498 = 5U;
	uint64_t x1500 = 16LLU;
	int32_t t47 = -2259;

    t47 = ((x1497!=(x1498<=x1499))<<x1500);

    if (t47 != 65536) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x1505 = INT64_MAX;
	volatile int8_t x1506 = INT8_MIN;
	int16_t x1507 = 5;
	uint16_t x1508 = 0U;

    t48 = ((x1505!=(x1506<=x1507))<<x1508);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x1517 = UINT64_MAX;
	static volatile int32_t t49 = 17609733;

    t49 = ((x1517!=(x1518<=x1519))<<x1520);

    if (t49 != 2048) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x1533 = 64917U;
	uint16_t x1536 = 1U;

    t50 = ((x1533!=(x1534<=x1535))<<x1536);

    if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x1589 = 415;
	static int8_t x1590 = INT8_MAX;
	static uint64_t x1591 = UINT64_MAX;
	int32_t t51 = 6171;

    t51 = ((x1589!=(x1590<=x1591))<<x1592);

    if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x1637 = UINT64_MAX;
	int8_t x1638 = -1;
	int8_t x1639 = 2;
	int32_t t52 = -15;

    t52 = ((x1637!=(x1638<=x1639))<<x1640);

    if (t52 != 8) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x1681 = 0U;
	uint16_t x1684 = 13U;
	static volatile int32_t t53 = -10533217;

    t53 = ((x1681!=(x1682<=x1683))<<x1684);

    if (t53 != 8192) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x1689 = INT16_MIN;
	int32_t x1690 = 7007281;
	static int8_t x1691 = INT8_MIN;
	static uint16_t x1692 = 3U;

    t54 = ((x1689!=(x1690<=x1691))<<x1692);

    if (t54 != 8) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x1717 = INT8_MIN;
	uint32_t x1718 = UINT32_MAX;
	int64_t x1719 = INT64_MIN;
	uint16_t x1720 = 12U;
	volatile int32_t t55 = -1;

    t55 = ((x1717!=(x1718<=x1719))<<x1720);

    if (t55 != 4096) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x1733 = UINT32_MAX;
	int64_t x1735 = -1LL;
	int64_t x1736 = 2LL;
	static int32_t t56 = 124558;

    t56 = ((x1733!=(x1734<=x1735))<<x1736);

    if (t56 != 4) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x1745 = INT16_MAX;
	static int64_t x1746 = INT64_MIN;
	volatile int16_t x1748 = 1;
	volatile int32_t t57 = -47235;

    t57 = ((x1745!=(x1746<=x1747))<<x1748);

    if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x1798 = 238U;
	int32_t x1799 = -7427200;
	int8_t x1800 = 0;
	int32_t t58 = 100219;

    t58 = ((x1797!=(x1798<=x1799))<<x1800);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x1897 = UINT32_MAX;
	int16_t x1898 = 77;
	static int64_t x1899 = INT64_MIN;
	uint64_t x1900 = 0LLU;
	volatile int32_t t59 = -412060919;

    t59 = ((x1897!=(x1898<=x1899))<<x1900);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x1929 = 473965317188LLU;
	int8_t x1930 = -1;
	int8_t x1931 = 3;
	static uint8_t x1932 = 3U;
	volatile int32_t t60 = -1;

    t60 = ((x1929!=(x1930<=x1931))<<x1932);

    if (t60 != 8) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int16_t x1973 = INT16_MIN;
	static int64_t x1974 = INT64_MAX;
	volatile int8_t x1975 = INT8_MIN;
	uint64_t x1976 = 24LLU;
	volatile int32_t t61 = 1;

    t61 = ((x1973!=(x1974<=x1975))<<x1976);

    if (t61 != 16777216) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x2037 = 121046726403556LLU;
	static volatile int64_t x2038 = INT64_MAX;
	uint16_t x2039 = 11U;
	uint8_t x2040 = 5U;
	int32_t t62 = 901;

    t62 = ((x2037!=(x2038<=x2039))<<x2040);

    if (t62 != 32) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x2041 = UINT64_MAX;
	volatile int16_t x2042 = -1;
	int16_t x2043 = INT16_MIN;
	static uint16_t x2044 = 2U;
	volatile int32_t t63 = 511831866;

    t63 = ((x2041!=(x2042<=x2043))<<x2044);

    if (t63 != 4) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x2053 = 218230530U;
	int32_t x2054 = -12519315;
	int8_t x2055 = -1;
	volatile uint8_t x2056 = 5U;
	int32_t t64 = -343;

    t64 = ((x2053!=(x2054<=x2055))<<x2056);

    if (t64 != 32) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x2077 = -323LL;
	int8_t x2078 = INT8_MIN;
	int16_t x2079 = INT16_MAX;
	int16_t x2080 = 11;
	int32_t t65 = 2379705;

    t65 = ((x2077!=(x2078<=x2079))<<x2080);

    if (t65 != 2048) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x2133 = -19;
	int8_t x2134 = INT8_MAX;
	int8_t x2135 = -1;
	uint8_t x2136 = 1U;
	int32_t t66 = -30;

    t66 = ((x2133!=(x2134<=x2135))<<x2136);

    if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x2141 = UINT16_MAX;
	volatile uint32_t x2143 = 922412299U;
	static int8_t x2144 = 7;
	volatile int32_t t67 = 2584087;

    t67 = ((x2141!=(x2142<=x2143))<<x2144);

    if (t67 != 128) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x2153 = 1051469U;
	static uint8_t x2154 = 4U;
	uint8_t x2155 = 29U;
	static volatile int16_t x2156 = 0;
	int32_t t68 = -88696922;

    t68 = ((x2153!=(x2154<=x2155))<<x2156);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x2162 = INT16_MAX;
	int8_t x2164 = 1;
	volatile int32_t t69 = 83753877;

    t69 = ((x2161!=(x2162<=x2163))<<x2164);

    if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x2185 = 12;
	volatile uint32_t x2186 = 16745U;
	uint8_t x2188 = 3U;

    t70 = ((x2185!=(x2186<=x2187))<<x2188);

    if (t70 != 8) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x2209 = INT8_MIN;
	uint16_t x2210 = UINT16_MAX;
	int8_t x2211 = -1;
	static int8_t x2212 = 0;
	volatile int32_t t71 = -1000434;

    t71 = ((x2209!=(x2210<=x2211))<<x2212);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x2213 = INT64_MIN;
	volatile int64_t x2214 = INT64_MAX;
	static uint8_t x2216 = 2U;

    t72 = ((x2213!=(x2214<=x2215))<<x2216);

    if (t72 != 4) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int64_t x2229 = -1LL;
	static int32_t x2230 = 54;
	uint16_t x2231 = 1U;
	static int8_t x2232 = 4;
	int32_t t73 = 120;

    t73 = ((x2229!=(x2230<=x2231))<<x2232);

    if (t73 != 16) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x2241 = INT8_MAX;
	int16_t x2242 = -1;
	int32_t x2243 = -1;
	static int32_t t74 = 4420;

    t74 = ((x2241!=(x2242<=x2243))<<x2244);

    if (t74 != 8) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x2249 = INT8_MAX;
	int64_t x2250 = INT64_MAX;
	int32_t x2251 = -1038576423;
	volatile int8_t x2252 = 2;
	static volatile int32_t t75 = 20566340;

    t75 = ((x2249!=(x2250<=x2251))<<x2252);

    if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x2281 = 6U;
	static int8_t x2283 = INT8_MIN;
	uint32_t x2284 = 1U;
	static int32_t t76 = -588935122;

    t76 = ((x2281!=(x2282<=x2283))<<x2284);

    if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x2293 = -1;
	static int64_t x2294 = INT64_MIN;
	int8_t x2295 = INT8_MIN;
	static int32_t t77 = 10836;

    t77 = ((x2293!=(x2294<=x2295))<<x2296);

    if (t77 != 16) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x2313 = INT64_MIN;
	uint8_t x2314 = 3U;
	static uint8_t x2316 = 1U;
	volatile int32_t t78 = -179486147;

    t78 = ((x2313!=(x2314<=x2315))<<x2316);

    if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x2337 = INT64_MIN;
	int32_t x2338 = -1;
	int64_t x2339 = 250053864868484077LL;
	int32_t t79 = -6046410;

    t79 = ((x2337!=(x2338<=x2339))<<x2340);

    if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x2385 = UINT16_MAX;
	volatile int8_t x2386 = -2;
	volatile uint16_t x2387 = 61U;
	uint32_t x2388 = 5U;
	static volatile int32_t t80 = 65934;

    t80 = ((x2385!=(x2386<=x2387))<<x2388);

    if (t80 != 32) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x2405 = -5;
	static volatile int32_t x2407 = INT32_MIN;
	uint8_t x2408 = 0U;
	static volatile int32_t t81 = -41;

    t81 = ((x2405!=(x2406<=x2407))<<x2408);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x2454 = INT32_MIN;
	int16_t x2455 = -675;
	static int32_t t82 = 232707432;

    t82 = ((x2453!=(x2454<=x2455))<<x2456);

    if (t82 != 4) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int8_t x2494 = INT8_MIN;
	uint8_t x2495 = 10U;
	volatile int32_t t83 = -558967236;

    t83 = ((x2493!=(x2494<=x2495))<<x2496);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x2509 = 888456714U;
	int64_t x2511 = -1LL;
	static uint8_t x2512 = 13U;

    t84 = ((x2509!=(x2510<=x2511))<<x2512);

    if (t84 != 8192) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x2529 = INT8_MIN;
	static int64_t x2531 = 88LL;
	volatile uint16_t x2532 = 27U;

    t85 = ((x2529!=(x2530<=x2531))<<x2532);

    if (t85 != 134217728) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x2573 = INT8_MAX;
	uint32_t x2574 = 8U;
	uint8_t x2575 = 43U;
	static uint8_t x2576 = 19U;

    t86 = ((x2573!=(x2574<=x2575))<<x2576);

    if (t86 != 524288) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x2578 = UINT64_MAX;
	static uint16_t x2579 = UINT16_MAX;
	static int32_t t87 = -552;

    t87 = ((x2577!=(x2578<=x2579))<<x2580);

    if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x2598 = INT32_MAX;
	static volatile int32_t t88 = -240493670;

    t88 = ((x2597!=(x2598<=x2599))<<x2600);

    if (t88 != 4) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x2617 = INT32_MAX;
	int64_t x2618 = 9LL;
	int16_t x2620 = 4;

    t89 = ((x2617!=(x2618<=x2619))<<x2620);

    if (t89 != 16) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x2721 = 28U;
	int8_t x2723 = -1;
	uint16_t x2724 = 3U;
	int32_t t90 = -3;

    t90 = ((x2721!=(x2722<=x2723))<<x2724);

    if (t90 != 8) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x2793 = 119715090U;
	int32_t x2794 = -56;
	static volatile int8_t x2796 = 0;
	volatile int32_t t91 = 159;

    t91 = ((x2793!=(x2794<=x2795))<<x2796);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x2801 = -1;
	int32_t x2803 = INT32_MAX;
	uint32_t x2804 = 1U;

    t92 = ((x2801!=(x2802<=x2803))<<x2804);

    if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x2825 = INT64_MIN;
	static uint8_t x2826 = 0U;
	static uint64_t x2827 = 2848054839423LLU;
	uint8_t x2828 = 14U;
	volatile int32_t t93 = 510935;

    t93 = ((x2825!=(x2826<=x2827))<<x2828);

    if (t93 != 16384) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x2833 = 449U;
	static int64_t x2834 = INT64_MIN;
	uint16_t x2835 = 1U;
	static uint8_t x2836 = 1U;
	int32_t t94 = -321616824;

    t94 = ((x2833!=(x2834<=x2835))<<x2836);

    if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x2842 = 0;
	int16_t x2843 = -1;
	volatile uint8_t x2844 = 16U;
	volatile int32_t t95 = 0;

    t95 = ((x2841!=(x2842<=x2843))<<x2844);

    if (t95 != 65536) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x2957 = INT32_MIN;
	uint32_t x2958 = 290116U;
	uint16_t x2959 = 9636U;
	int8_t x2960 = 1;
	static int32_t t96 = -10509670;

    t96 = ((x2957!=(x2958<=x2959))<<x2960);

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x2965 = 0U;
	volatile int32_t x2967 = INT32_MAX;
	uint16_t x2968 = 9U;
	volatile int32_t t97 = -24983254;

    t97 = ((x2965!=(x2966<=x2967))<<x2968);

    if (t97 != 512) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x2973 = 44U;
	volatile int16_t x2974 = 65;
	volatile uint16_t x2975 = 3U;
	uint16_t x2976 = 3U;
	volatile int32_t t98 = 6030756;

    t98 = ((x2973!=(x2974<=x2975))<<x2976);

    if (t98 != 8) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x2993 = INT8_MAX;
	uint64_t x2994 = 7742560LLU;
	uint8_t x2995 = 5U;
	int8_t x2996 = 0;
	static volatile int32_t t99 = -3300735;

    t99 = ((x2993!=(x2994<=x2995))<<x2996);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x3033 = INT16_MIN;
	volatile uint16_t x3034 = UINT16_MAX;
	uint16_t x3036 = 1U;
	int32_t t100 = 725696276;

    t100 = ((x3033!=(x3034<=x3035))<<x3036);

    if (t100 != 2) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x3049 = UINT8_MAX;
	volatile int16_t x3050 = INT16_MAX;
	int8_t x3051 = -1;
	uint32_t x3052 = 12U;
	int32_t t101 = 214335;

    t101 = ((x3049!=(x3050<=x3051))<<x3052);

    if (t101 != 4096) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x3082 = INT8_MIN;
	int16_t x3083 = 22;
	volatile uint8_t x3084 = 25U;
	volatile int32_t t102 = 65;

    t102 = ((x3081!=(x3082<=x3083))<<x3084);

    if (t102 != 33554432) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x3085 = -1;
	static int64_t x3087 = INT64_MIN;
	static uint8_t x3088 = 0U;
	volatile int32_t t103 = 7575724;

    t103 = ((x3085!=(x3086<=x3087))<<x3088);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x3093 = INT8_MIN;
	int16_t x3095 = 13;
	uint8_t x3096 = 17U;
	int32_t t104 = -31522;

    t104 = ((x3093!=(x3094<=x3095))<<x3096);

    if (t104 != 131072) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x3122 = INT32_MIN;
	int16_t x3124 = 6;

    t105 = ((x3121!=(x3122<=x3123))<<x3124);

    if (t105 != 64) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x3125 = 9454247527LLU;
	volatile uint32_t x3126 = UINT32_MAX;
	int64_t x3127 = INT64_MAX;
	volatile int32_t t106 = 26709;

    t106 = ((x3125!=(x3126<=x3127))<<x3128);

    if (t106 != 2) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x3197 = 4286;
	int32_t x3198 = INT32_MIN;
	static uint8_t x3199 = 1U;
	uint8_t x3200 = 20U;
	int32_t t107 = 27860;

    t107 = ((x3197!=(x3198<=x3199))<<x3200);

    if (t107 != 1048576) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x3225 = UINT32_MAX;
	int32_t x3226 = -41827;
	uint16_t x3228 = 3U;
	int32_t t108 = -31139342;

    t108 = ((x3225!=(x3226<=x3227))<<x3228);

    if (t108 != 8) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x3229 = UINT16_MAX;
	int32_t x3230 = -3;
	static uint16_t x3232 = 27U;

    t109 = ((x3229!=(x3230<=x3231))<<x3232);

    if (t109 != 134217728) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x3297 = 94596383840LL;
	int64_t x3298 = INT64_MIN;
	int8_t x3299 = INT8_MIN;
	int64_t x3300 = 7LL;
	int32_t t110 = 6568;

    t110 = ((x3297!=(x3298<=x3299))<<x3300);

    if (t110 != 128) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x3325 = INT8_MIN;
	volatile int64_t x3326 = -71368LL;
	static int64_t x3327 = -1LL;
	int8_t x3328 = 0;
	volatile int32_t t111 = 0;

    t111 = ((x3325!=(x3326<=x3327))<<x3328);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x3429 = UINT64_MAX;
	static volatile int64_t x3430 = INT64_MIN;
	uint32_t x3431 = 3658U;
	int8_t x3432 = 17;
	int32_t t112 = -181951;

    t112 = ((x3429!=(x3430<=x3431))<<x3432);

    if (t112 != 131072) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x3433 = -1;
	int8_t x3435 = INT8_MAX;
	int16_t x3436 = 1;

    t113 = ((x3433!=(x3434<=x3435))<<x3436);

    if (t113 != 2) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x3473 = UINT64_MAX;
	volatile int64_t x3474 = -1LL;
	uint8_t x3475 = 63U;
	volatile int32_t t114 = -31160;

    t114 = ((x3473!=(x3474<=x3475))<<x3476);

    if (t114 != 2) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x3494 = INT8_MIN;
	static uint16_t x3495 = 63U;
	int32_t x3496 = 2;
	int32_t t115 = 31;

    t115 = ((x3493!=(x3494<=x3495))<<x3496);

    if (t115 != 4) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x3497 = 57886044687LLU;
	volatile int64_t x3499 = -1LL;
	int8_t x3500 = 26;
	int32_t t116 = -49460;

    t116 = ((x3497!=(x3498<=x3499))<<x3500);

    if (t116 != 67108864) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x3513 = 789260969036018757LL;
	uint32_t x3515 = 5U;
	uint8_t x3516 = 20U;

    t117 = ((x3513!=(x3514<=x3515))<<x3516);

    if (t117 != 1048576) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x3526 = 3845757LLU;
	uint32_t x3527 = 6U;
	uint16_t x3528 = 2U;
	int32_t t118 = -16;

    t118 = ((x3525!=(x3526<=x3527))<<x3528);

    if (t118 != 4) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x3565 = 3;
	int32_t x3566 = INT32_MIN;
	static uint8_t x3568 = 14U;
	volatile int32_t t119 = -80;

    t119 = ((x3565!=(x3566<=x3567))<<x3568);

    if (t119 != 16384) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x3713 = -6816080468510684LL;
	static int8_t x3715 = -1;
	uint8_t x3716 = 0U;
	int32_t t120 = 3998;

    t120 = ((x3713!=(x3714<=x3715))<<x3716);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x3745 = INT8_MIN;
	static volatile uint64_t x3747 = 224LLU;
	volatile int32_t t121 = 0;

    t121 = ((x3745!=(x3746<=x3747))<<x3748);

    if (t121 != 64) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x3779 = -7;
	static int32_t t122 = 0;

    t122 = ((x3777!=(x3778<=x3779))<<x3780);

    if (t122 != 8) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x3882 = 1125367LLU;
	int8_t x3883 = INT8_MAX;
	int32_t x3884 = 1;
	static volatile int32_t t123 = -118567570;

    t123 = ((x3881!=(x3882<=x3883))<<x3884);

    if (t123 != 2) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x4089 = -17;
	volatile int32_t x4091 = 1;
	int16_t x4092 = 0;
	int32_t t124 = 54332337;

    t124 = ((x4089!=(x4090<=x4091))<<x4092);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x4149 = 2U;
	int16_t x4150 = INT16_MIN;
	static int32_t t125 = -49865642;

    t125 = ((x4149!=(x4150<=x4151))<<x4152);

    if (t125 != 2) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x4169 = -1;
	int16_t x4171 = INT16_MIN;
	volatile int32_t t126 = -14375;

    t126 = ((x4169!=(x4170<=x4171))<<x4172);

    if (t126 != 2) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x4185 = INT16_MIN;
	int32_t x4186 = INT32_MIN;
	int32_t x4187 = INT32_MAX;
	int8_t x4188 = 3;
	int32_t t127 = -30;

    t127 = ((x4185!=(x4186<=x4187))<<x4188);

    if (t127 != 8) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x4197 = INT16_MIN;
	int8_t x4198 = INT8_MAX;
	static int64_t x4199 = INT64_MIN;
	int8_t x4200 = 10;
	volatile int32_t t128 = 793649;

    t128 = ((x4197!=(x4198<=x4199))<<x4200);

    if (t128 != 1024) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x4313 = UINT16_MAX;
	int64_t x4314 = INT64_MIN;
	static uint16_t x4315 = 195U;
	int32_t t129 = -11220770;

    t129 = ((x4313!=(x4314<=x4315))<<x4316);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x4333 = 0U;
	int32_t x4334 = INT32_MIN;
	int16_t x4335 = -2209;
	int32_t t130 = 3009528;

    t130 = ((x4333!=(x4334<=x4335))<<x4336);

    if (t130 != 2) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x4361 = INT8_MIN;
	volatile int32_t x4362 = 88;
	uint8_t x4364 = 0U;
	static int32_t t131 = -291763;

    t131 = ((x4361!=(x4362<=x4363))<<x4364);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x4387 = INT32_MAX;
	int8_t x4388 = 0;
	volatile int32_t t132 = 126;

    t132 = ((x4385!=(x4386<=x4387))<<x4388);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x4465 = INT64_MIN;
	volatile int8_t x4466 = -1;
	volatile int32_t t133 = -7223819;

    t133 = ((x4465!=(x4466<=x4467))<<x4468);

    if (t133 != 2) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x4474 = UINT8_MAX;
	uint16_t x4476 = 11U;

    t134 = ((x4473!=(x4474<=x4475))<<x4476);

    if (t134 != 2048) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x4477 = 47U;
	int16_t x4478 = 0;
	int32_t x4479 = INT32_MIN;
	int16_t x4480 = 12;
	int32_t t135 = -547176;

    t135 = ((x4477!=(x4478<=x4479))<<x4480);

    if (t135 != 4096) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x4489 = 62256368U;
	volatile int64_t x4490 = INT64_MAX;
	int8_t x4491 = -1;
	int32_t x4492 = 1;

    t136 = ((x4489!=(x4490<=x4491))<<x4492);

    if (t136 != 2) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x4513 = UINT64_MAX;
	int8_t x4514 = INT8_MAX;
	int8_t x4515 = -1;
	static int8_t x4516 = 1;

    t137 = ((x4513!=(x4514<=x4515))<<x4516);

    if (t137 != 2) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x4545 = 33146742241107942LLU;
	static int32_t x4546 = INT32_MIN;
	static int16_t x4547 = 1;
	volatile int32_t t138 = -3;

    t138 = ((x4545!=(x4546<=x4547))<<x4548);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x4573 = INT16_MIN;
	static volatile int8_t x4574 = INT8_MAX;
	volatile int32_t x4575 = INT32_MAX;
	uint8_t x4576 = 1U;
	int32_t t139 = 29;

    t139 = ((x4573!=(x4574<=x4575))<<x4576);

    if (t139 != 2) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x4610 = -14288850022148LL;
	int16_t x4611 = INT16_MIN;
	int16_t x4612 = 3;
	int32_t t140 = -3;

    t140 = ((x4609!=(x4610<=x4611))<<x4612);

    if (t140 != 8) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x4638 = 0U;
	int8_t x4640 = 3;

    t141 = ((x4637!=(x4638<=x4639))<<x4640);

    if (t141 != 8) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x4697 = 2U;
	int64_t x4698 = -37449138221722LL;
	uint32_t x4699 = 3463U;
	volatile int32_t t142 = -1020;

    t142 = ((x4697!=(x4698<=x4699))<<x4700);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x4701 = UINT8_MAX;
	volatile int32_t x4702 = INT32_MIN;
	static uint16_t x4703 = 0U;
	uint32_t x4704 = 15U;

    t143 = ((x4701!=(x4702<=x4703))<<x4704);

    if (t143 != 32768) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x4757 = UINT8_MAX;
	volatile uint32_t x4758 = 1U;
	int8_t x4759 = -1;
	uint8_t x4760 = 5U;
	static int32_t t144 = -3070153;

    t144 = ((x4757!=(x4758<=x4759))<<x4760);

    if (t144 != 32) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int16_t x4773 = 169;
	int32_t x4774 = INT32_MAX;
	uint64_t x4776 = 1LLU;
	int32_t t145 = -219470;

    t145 = ((x4773!=(x4774<=x4775))<<x4776);

    if (t145 != 2) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x4817 = INT16_MIN;
	int8_t x4818 = 28;
	uint8_t x4819 = UINT8_MAX;
	uint8_t x4820 = 2U;
	volatile int32_t t146 = -539398069;

    t146 = ((x4817!=(x4818<=x4819))<<x4820);

    if (t146 != 4) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x4873 = -9;
	int16_t x4874 = -1;

    t147 = ((x4873!=(x4874<=x4875))<<x4876);

    if (t147 != 16) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x4881 = INT16_MIN;
	int32_t x4882 = 93;
	static int16_t x4883 = 0;
	uint8_t x4884 = 6U;
	int32_t t148 = 487817343;

    t148 = ((x4881!=(x4882<=x4883))<<x4884);

    if (t148 != 64) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x4977 = 41002U;
	int16_t x4978 = -1;
	static uint16_t x4979 = 18U;
	uint32_t x4980 = 7U;

    t149 = ((x4977!=(x4978<=x4979))<<x4980);

    if (t149 != 128) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x4982 = UINT64_MAX;
	int16_t x4983 = -5463;
	uint32_t x4984 = 2U;
	volatile int32_t t150 = 11892;

    t150 = ((x4981!=(x4982<=x4983))<<x4984);

    if (t150 != 4) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x4994 = INT8_MIN;
	int8_t x4995 = -1;
	static uint64_t x4996 = 15LLU;
	volatile int32_t t151 = -52754534;

    t151 = ((x4993!=(x4994<=x4995))<<x4996);

    if (t151 != 32768) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x5057 = UINT16_MAX;
	int8_t x5059 = INT8_MIN;

    t152 = ((x5057!=(x5058<=x5059))<<x5060);

    if (t152 != 524288) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x5113 = 1U;
	int32_t x5114 = INT32_MIN;
	static uint8_t x5116 = 20U;
	int32_t t153 = 274870;

    t153 = ((x5113!=(x5114<=x5115))<<x5116);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x5118 = -1;
	uint64_t x5119 = UINT64_MAX;
	uint32_t x5120 = 1U;
	volatile int32_t t154 = 14656;

    t154 = ((x5117!=(x5118<=x5119))<<x5120);

    if (t154 != 2) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x5165 = -1;
	static int32_t x5166 = INT32_MIN;

    t155 = ((x5165!=(x5166<=x5167))<<x5168);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x5169 = INT64_MAX;
	uint32_t x5171 = 3536467U;
	volatile int32_t t156 = 0;

    t156 = ((x5169!=(x5170<=x5171))<<x5172);

    if (t156 != 1073741824) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x5189 = 1963U;
	int16_t x5190 = -127;
	volatile int16_t x5191 = 6;
	uint8_t x5192 = 23U;

    t157 = ((x5189!=(x5190<=x5191))<<x5192);

    if (t157 != 8388608) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x5241 = INT8_MIN;
	volatile int64_t x5242 = INT64_MIN;
	volatile uint8_t x5244 = 3U;
	volatile int32_t t158 = 907572;

    t158 = ((x5241!=(x5242<=x5243))<<x5244);

    if (t158 != 8) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x5269 = INT16_MAX;
	uint32_t x5270 = 5U;
	int16_t x5271 = INT16_MIN;
	uint16_t x5272 = 5U;
	static int32_t t159 = 23;

    t159 = ((x5269!=(x5270<=x5271))<<x5272);

    if (t159 != 32) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x5293 = -387;
	static uint8_t x5295 = UINT8_MAX;
	static uint16_t x5296 = 4U;
	volatile int32_t t160 = 1445;

    t160 = ((x5293!=(x5294<=x5295))<<x5296);

    if (t160 != 16) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x5297 = INT64_MAX;
	static volatile int64_t x5298 = INT64_MIN;
	int32_t x5299 = 3321553;
	int32_t t161 = 22;

    t161 = ((x5297!=(x5298<=x5299))<<x5300);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x5310 = INT8_MAX;
	int16_t x5311 = INT16_MIN;
	static volatile uint8_t x5312 = 25U;

    t162 = ((x5309!=(x5310<=x5311))<<x5312);

    if (t162 != 33554432) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x5314 = UINT32_MAX;
	uint8_t x5315 = 40U;
	uint8_t x5316 = 1U;
	static int32_t t163 = -850;

    t163 = ((x5313!=(x5314<=x5315))<<x5316);

    if (t163 != 2) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x5361 = 108419946;
	uint64_t x5362 = 200LLU;
	int8_t x5364 = 4;
	int32_t t164 = 20;

    t164 = ((x5361!=(x5362<=x5363))<<x5364);

    if (t164 != 16) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x5437 = -103;
	int8_t x5438 = -6;
	volatile int32_t t165 = -183;

    t165 = ((x5437!=(x5438<=x5439))<<x5440);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x5517 = 60198266414521710LL;
	int64_t x5518 = INT64_MIN;
	volatile uint32_t x5520 = 0U;
	static volatile int32_t t166 = -7;

    t166 = ((x5517!=(x5518<=x5519))<<x5520);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x5525 = 2349920903516603522LLU;
	volatile int8_t x5526 = 0;
	int16_t x5527 = INT16_MIN;
	volatile uint16_t x5528 = 0U;

    t167 = ((x5525!=(x5526<=x5527))<<x5528);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x5541 = INT32_MIN;
	int8_t x5543 = -1;
	uint16_t x5544 = 0U;
	static volatile int32_t t168 = -15;

    t168 = ((x5541!=(x5542<=x5543))<<x5544);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x5561 = 1;
	uint64_t x5562 = 305915251849320LLU;
	uint8_t x5563 = 67U;
	uint8_t x5564 = 0U;
	int32_t t169 = 4115261;

    t169 = ((x5561!=(x5562<=x5563))<<x5564);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x5597 = -1;
	uint64_t x5598 = UINT64_MAX;
	int16_t x5599 = INT16_MIN;
	int32_t x5600 = 7;

    t170 = ((x5597!=(x5598<=x5599))<<x5600);

    if (t170 != 128) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x5609 = UINT64_MAX;
	int32_t t171 = 1;

    t171 = ((x5609!=(x5610<=x5611))<<x5612);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x5641 = 1;
	static int8_t x5642 = INT8_MIN;
	int8_t x5643 = 0;
	static uint16_t x5644 = 6U;
	int32_t t172 = 1;

    t172 = ((x5641!=(x5642<=x5643))<<x5644);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x5661 = 1LL;
	int32_t x5662 = -1895032;
	volatile int64_t x5663 = INT64_MIN;
	int8_t x5664 = 7;
	volatile int32_t t173 = 44957;

    t173 = ((x5661!=(x5662<=x5663))<<x5664);

    if (t173 != 128) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x5685 = UINT16_MAX;
	int8_t x5688 = 1;
	int32_t t174 = -16817290;

    t174 = ((x5685!=(x5686<=x5687))<<x5688);

    if (t174 != 2) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x5829 = UINT8_MAX;
	int32_t x5831 = INT32_MIN;
	static int8_t x5832 = 0;

    t175 = ((x5829!=(x5830<=x5831))<<x5832);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x5845 = 7711;
	uint64_t x5846 = 824076223801LLU;
	volatile int16_t x5847 = INT16_MIN;
	static int32_t t176 = 3;

    t176 = ((x5845!=(x5846<=x5847))<<x5848);

    if (t176 != 536870912) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x5929 = -198331088053008739LL;
	uint64_t x5930 = 4023220482LLU;
	static uint16_t x5931 = UINT16_MAX;
	volatile uint16_t x5932 = 7U;
	int32_t t177 = 140;

    t177 = ((x5929!=(x5930<=x5931))<<x5932);

    if (t177 != 128) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x5937 = UINT8_MAX;
	volatile uint8_t x5938 = 1U;
	uint8_t x5939 = UINT8_MAX;
	volatile int32_t t178 = -26663686;

    t178 = ((x5937!=(x5938<=x5939))<<x5940);

    if (t178 != 262144) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x6009 = INT16_MIN;
	int32_t x6010 = -1;
	volatile int16_t x6011 = -13502;
	static uint16_t x6012 = 3U;
	int32_t t179 = 237706393;

    t179 = ((x6009!=(x6010<=x6011))<<x6012);

    if (t179 != 8) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x6037 = -116LL;
	int32_t x6038 = -1;
	uint16_t x6039 = UINT16_MAX;
	int16_t x6040 = 30;
	int32_t t180 = 35;

    t180 = ((x6037!=(x6038<=x6039))<<x6040);

    if (t180 != 1073741824) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x6173 = INT64_MIN;
	int16_t x6174 = INT16_MIN;
	uint8_t x6176 = 3U;
	volatile int32_t t181 = 18;

    t181 = ((x6173!=(x6174<=x6175))<<x6176);

    if (t181 != 8) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x6209 = 8LLU;
	static int64_t x6210 = INT64_MIN;
	static int64_t x6211 = 5063018912476548LL;
	volatile int32_t t182 = -2459;

    t182 = ((x6209!=(x6210<=x6211))<<x6212);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x6241 = -3142473245LL;
	int8_t x6242 = -12;
	int32_t x6243 = INT32_MIN;
	int32_t t183 = 0;

    t183 = ((x6241!=(x6242<=x6243))<<x6244);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x6257 = 7139827473475489LL;
	static volatile int64_t x6258 = INT64_MAX;
	int32_t x6259 = INT32_MAX;
	int16_t x6260 = 1;
	volatile int32_t t184 = 433576;

    t184 = ((x6257!=(x6258<=x6259))<<x6260);

    if (t184 != 2) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x6298 = INT64_MIN;
	static int64_t x6299 = INT64_MIN;
	static volatile int16_t x6300 = 29;
	volatile int32_t t185 = 18008;

    t185 = ((x6297!=(x6298<=x6299))<<x6300);

    if (t185 != 536870912) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x6317 = 3;
	int8_t x6318 = -1;
	static uint64_t x6320 = 1LLU;
	int32_t t186 = 9103052;

    t186 = ((x6317!=(x6318<=x6319))<<x6320);

    if (t186 != 2) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x6337 = 42U;
	static volatile int32_t x6338 = INT32_MIN;
	int32_t x6339 = -1;
	volatile uint8_t x6340 = 1U;
	int32_t t187 = 58871929;

    t187 = ((x6337!=(x6338<=x6339))<<x6340);

    if (t187 != 2) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x6350 = -17;
	uint16_t x6351 = 13U;
	int8_t x6352 = 0;
	volatile int32_t t188 = -59484;

    t188 = ((x6349!=(x6350<=x6351))<<x6352);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x6361 = 3810952LL;
	static int16_t x6362 = -15;
	uint64_t x6363 = 3210963373321782LLU;
	uint8_t x6364 = 27U;
	volatile int32_t t189 = -1150;

    t189 = ((x6361!=(x6362<=x6363))<<x6364);

    if (t189 != 134217728) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x6486 = 36U;
	volatile int8_t x6487 = INT8_MAX;
	int64_t x6488 = 0LL;
	int32_t t190 = -97;

    t190 = ((x6485!=(x6486<=x6487))<<x6488);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x6489 = -1;
	uint32_t x6490 = UINT32_MAX;
	static uint8_t x6492 = 2U;
	static int32_t t191 = -453789;

    t191 = ((x6489!=(x6490<=x6491))<<x6492);

    if (t191 != 4) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x6533 = INT64_MAX;
	volatile int64_t x6534 = INT64_MIN;
	int32_t x6535 = -1;
	int32_t t192 = 1309227;

    t192 = ((x6533!=(x6534<=x6535))<<x6536);

    if (t192 != 4096) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x6589 = INT16_MAX;
	static int32_t x6590 = -75;
	volatile int64_t x6591 = 139137LL;
	int16_t x6592 = 1;
	volatile int32_t t193 = -15;

    t193 = ((x6589!=(x6590<=x6591))<<x6592);

    if (t193 != 2) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x6593 = UINT64_MAX;
	int8_t x6595 = 30;
	uint8_t x6596 = 1U;
	int32_t t194 = -27873;

    t194 = ((x6593!=(x6594<=x6595))<<x6596);

    if (t194 != 2) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x6623 = INT16_MAX;
	volatile uint8_t x6624 = 11U;

    t195 = ((x6621!=(x6622<=x6623))<<x6624);

    if (t195 != 2048) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x6625 = INT8_MIN;
	volatile int8_t x6626 = 4;
	int8_t x6627 = 5;
	static uint16_t x6628 = 1U;
	static volatile int32_t t196 = 57349;

    t196 = ((x6625!=(x6626<=x6627))<<x6628);

    if (t196 != 2) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x6633 = 800694470139700LL;
	uint16_t x6636 = 4U;
	static volatile int32_t t197 = 31;

    t197 = ((x6633!=(x6634<=x6635))<<x6636);

    if (t197 != 16) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x6693 = 1U;
	uint8_t x6695 = UINT8_MAX;
	int32_t t198 = 729;

    t198 = ((x6693!=(x6694<=x6695))<<x6696);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x6825 = 107U;
	uint64_t x6826 = 4424LLU;
	static volatile int32_t x6827 = 8088;
	int32_t t199 = -16;

    t199 = ((x6825!=(x6826<=x6827))<<x6828);

    if (t199 != 1) { NG(); } else { ; }
	
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


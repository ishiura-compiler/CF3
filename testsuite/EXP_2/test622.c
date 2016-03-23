
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

static int32_t x75 = -7;
static int16_t x160 = 2;
volatile int32_t x245 = INT32_MIN;
uint32_t x337 = 10547811U;
static int64_t x339 = INT64_MIN;
int64_t t7 = 5320623309575026LL;
int8_t x353 = INT8_MIN;
static int16_t x373 = 11577;
uint32_t x460 = 1U;
static volatile int32_t t11 = 606;
uint64_t x557 = 7218598077520LLU;
static uint64_t x659 = 105876776732LLU;
uint8_t x660 = 1U;
static int16_t x666 = 40;
int64_t x673 = -1215824284LL;
int8_t x705 = 50;
int32_t x707 = INT32_MAX;
int32_t x722 = -1;
static int32_t t19 = 18455841;
static uint8_t x849 = 0U;
volatile uint64_t x851 = UINT64_MAX;
uint16_t x937 = 27U;
static int8_t x1004 = 3;
uint32_t t22 = 68U;
static int8_t x1008 = 19;
volatile int64_t t23 = -30594LL;
uint32_t x1062 = 239330U;
volatile uint64_t x1063 = 43650769907909480LLU;
uint64_t x1073 = 6851984LLU;
int8_t x1089 = 22;
volatile int32_t t27 = -12;
volatile int64_t t29 = -14981656LL;
int32_t x1139 = INT32_MIN;
volatile int64_t t32 = -21LL;
uint8_t x1181 = 0U;
static int16_t x1186 = INT16_MAX;
int64_t x1209 = INT64_MIN;
volatile int64_t x1211 = INT64_MAX;
static volatile int32_t t36 = -25825;
volatile int16_t x1239 = -1;
uint64_t x1271 = 243516341566819714LLU;
static volatile uint64_t t38 = 156788958LLU;
int32_t x1278 = -211088;
static uint16_t x1280 = 3U;
int8_t x1286 = INT8_MIN;
static int32_t x1338 = -1;
static volatile uint64_t x1340 = 6LLU;
int64_t x1442 = INT64_MIN;
int8_t x1566 = INT8_MAX;
int64_t x1571 = INT64_MIN;
volatile int8_t x1624 = 0;
int8_t x1662 = 1;
uint16_t x1731 = UINT16_MAX;
static uint32_t x1732 = 1U;
int16_t x1882 = INT16_MIN;
int8_t x1884 = 12;
uint8_t x1915 = UINT8_MAX;
int64_t x1985 = 206346294LL;
uint8_t x2109 = UINT8_MAX;
uint64_t x2183 = 167439694391678810LLU;
int64_t t67 = -192838927713333591LL;
volatile uint32_t x2509 = 7U;
int8_t x2514 = INT8_MAX;
int32_t x2515 = INT32_MAX;
static volatile uint8_t x2516 = 2U;
int16_t x2525 = INT16_MAX;
int8_t x2528 = 2;
int16_t x2581 = INT16_MIN;
int8_t x2584 = 1;
uint32_t x2614 = 44U;
static uint8_t x2616 = 8U;
volatile uint32_t x2723 = 825211275U;
uint16_t x2724 = 7U;
uint32_t x2737 = UINT32_MAX;
uint16_t x2739 = 2511U;
int8_t x2755 = INT8_MIN;
volatile int64_t t78 = 31372645973LL;
int64_t x2818 = 2033402LL;
uint16_t x2835 = 105U;
static volatile int16_t x2937 = INT16_MIN;
int16_t x2939 = INT16_MAX;
uint16_t x2940 = 5U;
int8_t x3161 = 6;
uint32_t x3213 = UINT32_MAX;
int8_t x3251 = INT8_MIN;
static uint8_t x3256 = 20U;
int64_t t87 = -5424619626907LL;
int16_t x3293 = 7;
uint8_t x3296 = 14U;
volatile uint64_t t88 = 5743511061LLU;
int64_t x3318 = -57839995339LL;
volatile int32_t x3335 = INT32_MIN;
static int64_t x3343 = INT64_MAX;
volatile int8_t x3344 = 0;
int64_t t93 = -3711096886712LL;
uint16_t x3503 = 38U;
uint16_t x3504 = 1U;
uint32_t t94 = 6292199U;
int64_t t95 = -26567274LL;
volatile int32_t x3575 = -21076617;
int64_t x3579 = -4LL;
int8_t x3753 = -1;
int8_t x3756 = 7;
int32_t t100 = 118;
int8_t x3773 = -1;
uint32_t x3849 = 5267533U;
int16_t x3852 = 1;
uint32_t x3920 = 1U;
int64_t x3929 = -8879LL;
uint16_t x3930 = 122U;
int64_t t106 = 95170783603987862LL;
int8_t x4034 = -1;
static volatile uint64_t t107 = 3LLU;
static uint64_t x4078 = 495094637225LLU;
volatile int8_t x4079 = INT8_MIN;
uint64_t t112 = 2705752467481LLU;
uint16_t x4348 = 4U;
uint64_t x4354 = 133020LLU;
uint64_t t114 = 113867106521852733LLU;
volatile uint32_t t117 = 1574U;
int64_t x4474 = -1LL;
int32_t x4475 = 17913168;
uint8_t x4516 = 19U;
int32_t x4529 = -1;
volatile uint64_t t121 = 291367726LLU;
int32_t x4584 = 1;
uint64_t t122 = 33529722930345363LLU;
static uint16_t x4806 = UINT16_MAX;
uint64_t x4852 = 1LLU;
volatile int64_t t125 = -1LL;
static uint8_t x4901 = 1U;
uint32_t t126 = 60U;
static int32_t t129 = -7;
volatile int16_t x5143 = -3;
volatile int64_t x5147 = -1LL;
uint16_t x5286 = 7902U;
uint32_t x5288 = 10U;
volatile uint32_t x5317 = UINT32_MAX;
int16_t x5318 = 597;
uint64_t x5319 = 1042009LLU;
static volatile uint64_t t137 = 10365LLU;
uint64_t x5322 = 151LLU;
uint8_t x5324 = 27U;
int32_t x5326 = -179780255;
uint8_t x5354 = 25U;
volatile int8_t x5478 = 28;
int64_t t141 = -48LL;
int16_t x5541 = INT16_MAX;
static int32_t x5625 = -373593;
int64_t t143 = 8LL;
int8_t x5633 = INT8_MAX;
uint8_t x5636 = 3U;
int8_t x5733 = -4;
volatile int8_t x5768 = 1;
volatile uint32_t t148 = 3699U;
volatile uint64_t t150 = 12553LLU;
static int32_t x5839 = -1;
int8_t x5842 = INT8_MIN;
int64_t x5843 = INT64_MAX;
static int8_t x5851 = INT8_MAX;
uint8_t x5922 = UINT8_MAX;
static int16_t x5924 = 1;
uint32_t x5945 = 688829319U;
int32_t x5946 = INT32_MIN;
int8_t x5998 = 0;
int16_t x5999 = INT16_MIN;
uint16_t x6000 = 18U;
int32_t x6003 = -1;
int8_t x6004 = 1;
int64_t x6110 = -237LL;
static uint64_t x6229 = UINT64_MAX;
int8_t x6232 = 1;
uint64_t t163 = 227LLU;
static uint32_t x6249 = 105363U;
int32_t t167 = 1;
uint16_t x6378 = 1U;
uint16_t x6379 = UINT16_MAX;
int64_t x6455 = -16127799282404875LL;
static uint16_t x6470 = 6867U;
int8_t x6591 = INT8_MIN;
static int64_t x6611 = INT64_MAX;
static int8_t x6647 = 3;
int64_t x6650 = -22LL;
volatile uint32_t x6651 = 58482U;
volatile uint16_t x6652 = 1U;
int32_t x6666 = 23488;
int32_t x6753 = 25202336;
int32_t x6755 = 4475192;
volatile int32_t t179 = -4760;
int8_t x6790 = -6;
int8_t x6869 = -52;
int16_t x6871 = 12;
static uint64_t x6958 = 9658270007LLU;
static int16_t x6960 = 2;
static volatile uint16_t x7132 = 15U;
volatile uint8_t x7142 = 10U;
static volatile int64_t x7143 = 1421LL;
static int64_t t188 = -3793476129LL;
uint8_t x7196 = 3U;
volatile int64_t x7215 = INT64_MIN;
uint32_t t191 = 2014515U;
uint8_t x7337 = UINT8_MAX;
uint64_t x7431 = 3LLU;
volatile int16_t x7461 = INT16_MIN;
int32_t x7462 = INT32_MAX;
int8_t x7464 = 1;
volatile int16_t x7626 = 1;
int16_t x7628 = 1;
static int32_t x7701 = INT32_MIN;


void f0(void) {
    	int64_t x57 = INT64_MIN;
	int8_t x58 = INT8_MAX;
	int32_t x59 = INT32_MIN;
	static uint8_t x60 = 0U;
	volatile int64_t t0 = 660825LL;

    t0 = ((x57*(x58/x59))<<x60);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x73 = 1;
	volatile uint32_t x74 = 1431769U;
	int16_t x76 = 1;
	uint32_t t1 = 12763305U;

    t1 = ((x73*(x74/x75))<<x76);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x117 = INT8_MIN;
	uint64_t x118 = 269465523022LLU;
	int16_t x119 = -1;
	volatile int8_t x120 = 56;
	volatile uint64_t t2 = 1561096486893692297LLU;

    t2 = ((x117*(x118/x119))<<x120);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x157 = 4108;
	int32_t x158 = INT32_MIN;
	uint32_t x159 = UINT32_MAX;
	static uint32_t t3 = 1808498U;

    t3 = ((x157*(x158/x159))<<x160);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x233 = INT16_MIN;
	int8_t x234 = -1;
	int64_t x235 = INT64_MIN;
	uint8_t x236 = 3U;
	int64_t t4 = 12120955829593LL;

    t4 = ((x233*(x234/x235))<<x236);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x246 = INT32_MAX;
	int64_t x247 = INT64_MAX;
	static int16_t x248 = 0;
	static int64_t t5 = -11869997LL;

    t5 = ((x245*(x246/x247))<<x248);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x257 = 111159;
	int64_t x258 = -20706987252LL;
	static int32_t x259 = INT32_MIN;
	volatile uint32_t x260 = 8U;
	volatile int64_t t6 = 67232518887592714LL;

    t6 = ((x257*(x258/x259))<<x260);

    if (t6 != 256110336LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x338 = INT8_MIN;
	uint8_t x340 = 0U;

    t7 = ((x337*(x338/x339))<<x340);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x354 = UINT16_MAX;
	int32_t x355 = 967729;
	uint8_t x356 = 15U;
	int32_t t8 = 0;

    t8 = ((x353*(x354/x355))<<x356);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x369 = INT64_MAX;
	int8_t x370 = INT8_MIN;
	uint64_t x371 = 2160701LLU;
	uint8_t x372 = 7U;
	static volatile uint64_t t9 = 239LLU;

    t9 = ((x369*(x370/x371))<<x372);

    if (t9 != 18445651287969444736LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x374 = 454;
	int32_t x375 = INT32_MIN;
	volatile uint32_t x376 = 3U;
	int32_t t10 = -403;

    t10 = ((x373*(x374/x375))<<x376);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x457 = -7;
	int8_t x458 = 31;
	uint16_t x459 = 603U;

    t11 = ((x457*(x458/x459))<<x460);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x529 = -7;
	int32_t x530 = INT32_MAX;
	int64_t x531 = INT64_MAX;
	volatile uint32_t x532 = 5U;
	volatile int64_t t12 = 687908064174229133LL;

    t12 = ((x529*(x530/x531))<<x532);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x558 = -1;
	volatile uint32_t x559 = 60U;
	uint16_t x560 = 25U;
	volatile uint64_t t13 = 6378393488409LLU;

    t13 = ((x557*(x558/x559))<<x560);

    if (t13 != 3239292967042678784LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int32_t x657 = INT32_MAX;
	uint32_t x658 = UINT32_MAX;
	uint64_t t14 = 1214820675531LLU;

    t14 = ((x657*(x658/x659))<<x660);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x665 = 359LLU;
	uint16_t x667 = 3U;
	int8_t x668 = 52;
	uint64_t t15 = 2003974110LLU;

    t15 = ((x665*(x666/x667))<<x668);

    if (t15 != 2571555387228553216LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x674 = 1;
	uint8_t x675 = 14U;
	int8_t x676 = 7;
	int64_t t16 = -2448LL;

    t16 = ((x673*(x674/x675))<<x676);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x706 = 106928589LL;
	volatile uint16_t x708 = 42U;
	volatile int64_t t17 = 1730LL;

    t17 = ((x705*(x706/x707))<<x708);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x721 = -443;
	int16_t x723 = INT16_MIN;
	int8_t x724 = 27;
	volatile int32_t t18 = 6685268;

    t18 = ((x721*(x722/x723))<<x724);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x829 = 470967;
	volatile int32_t x830 = -1788127;
	int32_t x831 = INT32_MIN;
	static uint8_t x832 = 1U;

    t19 = ((x829*(x830/x831))<<x832);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x850 = 7625U;
	int8_t x852 = 10;
	uint64_t t20 = 234135930848728355LLU;

    t20 = ((x849*(x850/x851))<<x852);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x938 = INT8_MIN;
	volatile int32_t x939 = INT32_MIN;
	volatile int8_t x940 = 0;
	volatile int32_t t21 = 295;

    t21 = ((x937*(x938/x939))<<x940);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x1001 = 108U;
	static int8_t x1002 = INT8_MAX;
	uint32_t x1003 = 192U;

    t22 = ((x1001*(x1002/x1003))<<x1004);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x1005 = UINT16_MAX;
	volatile int32_t x1006 = -59168331;
	int64_t x1007 = -537017089149LL;

    t23 = ((x1005*(x1006/x1007))<<x1008);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint64_t x1061 = 1078635527803LLU;
	int8_t x1064 = 0;
	volatile uint64_t t24 = 626085LLU;

    t24 = ((x1061*(x1062/x1063))<<x1064);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x1074 = 4795;
	static volatile int16_t x1075 = -1;
	uint16_t x1076 = 0U;
	volatile uint64_t t25 = 2LLU;

    t25 = ((x1073*(x1074/x1075))<<x1076);

    if (t25 != 18446744040854288336LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x1081 = -1;
	uint8_t x1082 = 34U;
	int8_t x1083 = INT8_MAX;
	volatile uint8_t x1084 = 0U;
	volatile int32_t t26 = 50183;

    t26 = ((x1081*(x1082/x1083))<<x1084);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x1090 = 168U;
	uint16_t x1091 = 5U;
	uint16_t x1092 = 1U;

    t27 = ((x1089*(x1090/x1091))<<x1092);

    if (t27 != 1452) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x1093 = INT32_MAX;
	static int16_t x1094 = -28;
	uint16_t x1095 = 891U;
	int16_t x1096 = 2;
	int32_t t28 = -33;

    t28 = ((x1093*(x1094/x1095))<<x1096);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x1097 = -1LL;
	static uint16_t x1098 = 581U;
	volatile int64_t x1099 = 3642497375LL;
	uint8_t x1100 = 52U;

    t29 = ((x1097*(x1098/x1099))<<x1100);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x1101 = UINT16_MAX;
	int8_t x1102 = INT8_MAX;
	int16_t x1103 = INT16_MIN;
	int8_t x1104 = 1;
	volatile int32_t t30 = 896429;

    t30 = ((x1101*(x1102/x1103))<<x1104);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x1137 = 8U;
	volatile int16_t x1138 = INT16_MIN;
	volatile int8_t x1140 = 1;
	int32_t t31 = 444;

    t31 = ((x1137*(x1138/x1139))<<x1140);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x1145 = 104U;
	int64_t x1146 = 1438091028LL;
	static int32_t x1147 = INT32_MAX;
	volatile uint8_t x1148 = 8U;

    t32 = ((x1145*(x1146/x1147))<<x1148);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x1182 = UINT64_MAX;
	volatile int32_t x1183 = INT32_MAX;
	uint8_t x1184 = 2U;
	uint64_t t33 = 98LLU;

    t33 = ((x1181*(x1182/x1183))<<x1184);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x1185 = INT64_MAX;
	int16_t x1187 = INT16_MIN;
	uint32_t x1188 = 4U;
	static int64_t t34 = 13616LL;

    t34 = ((x1185*(x1186/x1187))<<x1188);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x1210 = 0;
	uint32_t x1212 = 28U;
	volatile int64_t t35 = -348323782445816492LL;

    t35 = ((x1209*(x1210/x1211))<<x1212);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x1233 = -1;
	uint16_t x1234 = 42U;
	uint16_t x1235 = UINT16_MAX;
	uint8_t x1236 = 7U;

    t36 = ((x1233*(x1234/x1235))<<x1236);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x1237 = 103U;
	int8_t x1238 = -1;
	int8_t x1240 = 6;
	volatile int32_t t37 = -201878;

    t37 = ((x1237*(x1238/x1239))<<x1240);

    if (t37 != 6592) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x1269 = 1342241186315LL;
	uint32_t x1270 = 7080U;
	int8_t x1272 = 27;

    t38 = ((x1269*(x1270/x1271))<<x1272);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x1277 = -22732;
	static int32_t x1279 = 467;
	volatile int32_t t39 = -107647;

    t39 = ((x1277*(x1278/x1279))<<x1280);

    if (t39 != 82198912) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x1285 = 474869439509090207LLU;
	int64_t x1287 = 12741LL;
	uint64_t x1288 = 3LLU;
	uint64_t t40 = 121331675808035LLU;

    t40 = ((x1285*(x1286/x1287))<<x1288);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x1337 = 1;
	static int8_t x1339 = INT8_MIN;
	static int32_t t41 = -30;

    t41 = ((x1337*(x1338/x1339))<<x1340);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x1357 = INT16_MIN;
	volatile int8_t x1358 = 0;
	static int32_t x1359 = 76669;
	uint8_t x1360 = 9U;
	int32_t t42 = 31;

    t42 = ((x1357*(x1358/x1359))<<x1360);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x1441 = 0;
	int16_t x1443 = INT16_MIN;
	uint64_t x1444 = 19LLU;
	int64_t t43 = 1246083LL;

    t43 = ((x1441*(x1442/x1443))<<x1444);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x1501 = INT8_MIN;
	volatile uint16_t x1502 = 11196U;
	uint32_t x1503 = UINT32_MAX;
	uint16_t x1504 = 3U;
	uint32_t t44 = 638595U;

    t44 = ((x1501*(x1502/x1503))<<x1504);

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x1505 = 123LLU;
	int8_t x1506 = INT8_MIN;
	volatile uint16_t x1507 = 32159U;
	int8_t x1508 = 4;
	volatile uint64_t t45 = 5906598599877433065LLU;

    t45 = ((x1505*(x1506/x1507))<<x1508);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x1565 = 3;
	int8_t x1567 = INT8_MAX;
	int16_t x1568 = 15;
	int32_t t46 = 12;

    t46 = ((x1565*(x1566/x1567))<<x1568);

    if (t46 != 98304) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x1569 = -25280734;
	int16_t x1570 = INT16_MIN;
	uint8_t x1572 = 7U;
	volatile int64_t t47 = 286010422056202LL;

    t47 = ((x1569*(x1570/x1571))<<x1572);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x1621 = INT8_MIN;
	static uint32_t x1622 = 818760U;
	volatile int64_t x1623 = INT64_MIN;
	int64_t t48 = 915LL;

    t48 = ((x1621*(x1622/x1623))<<x1624);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x1661 = -1;
	uint16_t x1663 = UINT16_MAX;
	int8_t x1664 = 0;
	int32_t t49 = 0;

    t49 = ((x1661*(x1662/x1663))<<x1664);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x1729 = UINT64_MAX;
	uint8_t x1730 = UINT8_MAX;
	static uint64_t t50 = 474430355353411LLU;

    t50 = ((x1729*(x1730/x1731))<<x1732);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x1745 = INT64_MIN;
	volatile uint16_t x1746 = 905U;
	volatile uint32_t x1747 = UINT32_MAX;
	uint8_t x1748 = 11U;
	volatile int64_t t51 = 22161559521977LL;

    t51 = ((x1745*(x1746/x1747))<<x1748);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x1753 = 0U;
	volatile int8_t x1754 = INT8_MIN;
	uint16_t x1755 = 22899U;
	static volatile int32_t x1756 = 6;
	volatile int32_t t52 = -759;

    t52 = ((x1753*(x1754/x1755))<<x1756);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x1773 = INT8_MAX;
	uint64_t x1774 = 960902917677LLU;
	int16_t x1775 = INT16_MIN;
	int8_t x1776 = 0;
	uint64_t t53 = 234801090LLU;

    t53 = ((x1773*(x1774/x1775))<<x1776);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x1789 = INT8_MAX;
	uint8_t x1790 = 33U;
	int16_t x1791 = INT16_MAX;
	uint8_t x1792 = 4U;
	int32_t t54 = 37825;

    t54 = ((x1789*(x1790/x1791))<<x1792);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x1853 = -1LL;
	uint8_t x1854 = UINT8_MAX;
	volatile int16_t x1855 = 257;
	static int16_t x1856 = 1;
	static int64_t t55 = 1171LL;

    t55 = ((x1853*(x1854/x1855))<<x1856);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x1877 = -1LL;
	int16_t x1878 = -606;
	static uint16_t x1879 = 11U;
	uint16_t x1880 = 2U;
	int64_t t56 = -2LL;

    t56 = ((x1877*(x1878/x1879))<<x1880);

    if (t56 != 220LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x1881 = 1;
	int32_t x1883 = 93450;
	volatile int32_t t57 = 11430738;

    t57 = ((x1881*(x1882/x1883))<<x1884);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x1913 = -93569127810LL;
	static int16_t x1914 = -939;
	static int16_t x1916 = 3;
	static int64_t t58 = 20532669980LL;

    t58 = ((x1913*(x1914/x1915))<<x1916);

    if (t58 != 2245659067440LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x1981 = -1;
	int16_t x1982 = -1;
	uint64_t x1983 = 3620339428LLU;
	static uint32_t x1984 = 25U;
	volatile uint64_t t59 = 1007LLU;

    t59 = ((x1981*(x1982/x1983))<<x1984);

    if (t59 != 18275773911394156544LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x1986 = UINT64_MAX;
	static uint8_t x1987 = 5U;
	static uint64_t x1988 = 7LLU;
	uint64_t t60 = 7LLU;

    t60 = ((x1985*(x1986/x1987))<<x1988);

    if (t60 != 7378697624201355520LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x2110 = UINT16_MAX;
	int8_t x2111 = INT8_MAX;
	uint8_t x2112 = 13U;
	volatile int32_t t61 = 375;

    t61 = ((x2109*(x2110/x2111))<<x2112);

    if (t61 != 1077903360) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x2181 = 221U;
	static uint8_t x2182 = 50U;
	uint32_t x2184 = 7U;
	static uint64_t t62 = 4375LLU;

    t62 = ((x2181*(x2182/x2183))<<x2184);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x2261 = UINT8_MAX;
	int16_t x2262 = INT16_MIN;
	int64_t x2263 = INT64_MIN;
	static uint64_t x2264 = 46LLU;
	volatile int64_t t63 = -7413LL;

    t63 = ((x2261*(x2262/x2263))<<x2264);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x2353 = INT8_MAX;
	int32_t x2354 = -1;
	static int16_t x2355 = INT16_MIN;
	volatile uint8_t x2356 = 0U;
	volatile int32_t t64 = -108884374;

    t64 = ((x2353*(x2354/x2355))<<x2356);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x2397 = INT16_MIN;
	volatile uint32_t x2398 = 103U;
	volatile uint64_t x2399 = UINT64_MAX;
	uint32_t x2400 = 10U;
	uint64_t t65 = 407678098480LLU;

    t65 = ((x2397*(x2398/x2399))<<x2400);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x2405 = INT8_MIN;
	static volatile int32_t x2406 = INT32_MIN;
	uint64_t x2407 = 278673305171920136LLU;
	uint8_t x2408 = 3U;
	uint64_t t66 = 1758881LLU;

    t66 = ((x2405*(x2406/x2407))<<x2408);

    if (t66 != 18446744073709484032LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x2481 = 9652092419LL;
	static int64_t x2482 = -39980LL;
	int64_t x2483 = INT64_MIN;
	uint8_t x2484 = 13U;

    t67 = ((x2481*(x2482/x2483))<<x2484);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x2510 = INT16_MIN;
	static int8_t x2511 = INT8_MAX;
	int16_t x2512 = 0;
	uint32_t t68 = 10U;

    t68 = ((x2509*(x2510/x2511))<<x2512);

    if (t68 != 4294965490U) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x2513 = INT8_MAX;
	volatile int32_t t69 = -28127;

    t69 = ((x2513*(x2514/x2515))<<x2516);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x2526 = -165135LL;
	int64_t x2527 = INT64_MAX;
	int64_t t70 = 4LL;

    t70 = ((x2525*(x2526/x2527))<<x2528);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x2582 = INT8_MIN;
	uint16_t x2583 = 12391U;
	volatile int32_t t71 = 186;

    t71 = ((x2581*(x2582/x2583))<<x2584);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x2613 = INT8_MAX;
	int8_t x2615 = INT8_MIN;
	uint32_t t72 = 8537032U;

    t72 = ((x2613*(x2614/x2615))<<x2616);

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x2617 = -4;
	uint64_t x2618 = 75606235930725245LLU;
	uint32_t x2619 = UINT32_MAX;
	uint16_t x2620 = 5U;
	uint64_t t73 = 169563553280LLU;

    t73 = ((x2617*(x2618/x2619))<<x2620);

    if (t73 != 18446744071456310272LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint32_t x2633 = 7856U;
	uint8_t x2634 = 25U;
	static int16_t x2635 = -1;
	int16_t x2636 = 1;
	uint32_t t74 = 17984458U;

    t74 = ((x2633*(x2634/x2635))<<x2636);

    if (t74 != 4294574496U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x2721 = 119U;
	uint64_t x2722 = UINT64_MAX;
	volatile uint64_t t75 = 33270637LLU;

    t75 = ((x2721*(x2722/x2723))<<x2724);

    if (t75 != 340495596997248LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x2738 = -1LL;
	uint8_t x2740 = 11U;
	volatile int64_t t76 = -5893LL;

    t76 = ((x2737*(x2738/x2739))<<x2740);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x2753 = UINT64_MAX;
	volatile uint8_t x2754 = 1U;
	uint16_t x2756 = 6U;
	volatile uint64_t t77 = 275197231LLU;

    t77 = ((x2753*(x2754/x2755))<<x2756);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x2769 = -1;
	uint16_t x2770 = 250U;
	int64_t x2771 = -1LL;
	uint8_t x2772 = 31U;

    t78 = ((x2769*(x2770/x2771))<<x2772);

    if (t78 != 536870912000LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x2805 = INT32_MIN;
	int16_t x2806 = -3;
	int64_t x2807 = INT64_MIN;
	uint16_t x2808 = 4U;
	volatile int64_t t79 = -456342LL;

    t79 = ((x2805*(x2806/x2807))<<x2808);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x2817 = 497LL;
	volatile uint32_t x2819 = 789741U;
	int8_t x2820 = 0;
	static volatile int64_t t80 = -408LL;

    t80 = ((x2817*(x2818/x2819))<<x2820);

    if (t80 != 994LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x2833 = 7811U;
	static int32_t x2834 = -1;
	static uint8_t x2836 = 0U;
	volatile uint32_t t81 = 0U;

    t81 = ((x2833*(x2834/x2835))<<x2836);

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x2869 = 2U;
	uint64_t x2870 = UINT64_MAX;
	volatile int32_t x2871 = INT32_MAX;
	static int8_t x2872 = 5;
	uint64_t t82 = 1970028227072515LLU;

    t82 = ((x2869*(x2870/x2871))<<x2872);

    if (t82 != 549755814144LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x2938 = INT8_MIN;
	static volatile int32_t t83 = -5356;

    t83 = ((x2937*(x2938/x2939))<<x2940);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x3162 = 324894166LLU;
	int8_t x3163 = INT8_MIN;
	uint16_t x3164 = 3U;
	volatile uint64_t t84 = 837LLU;

    t84 = ((x3161*(x3162/x3163))<<x3164);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x3214 = INT16_MAX;
	uint16_t x3215 = UINT16_MAX;
	static uint16_t x3216 = 4U;
	uint32_t t85 = 247U;

    t85 = ((x3213*(x3214/x3215))<<x3216);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x3249 = INT16_MAX;
	static int8_t x3250 = -1;
	uint8_t x3252 = 0U;
	volatile int32_t t86 = 219856;

    t86 = ((x3249*(x3250/x3251))<<x3252);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x3253 = INT64_MAX;
	uint8_t x3254 = 39U;
	static int32_t x3255 = INT32_MAX;

    t87 = ((x3253*(x3254/x3255))<<x3256);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x3294 = UINT64_MAX;
	int64_t x3295 = INT64_MIN;

    t88 = ((x3293*(x3294/x3295))<<x3296);

    if (t88 != 114688LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int16_t x3301 = INT16_MIN;
	int32_t x3302 = 32673577;
	static uint32_t x3303 = UINT32_MAX;
	uint8_t x3304 = 0U;
	uint32_t t89 = 132U;

    t89 = ((x3301*(x3302/x3303))<<x3304);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x3305 = -1;
	volatile uint32_t x3306 = 531146383U;
	int64_t x3307 = INT64_MIN;
	int8_t x3308 = 1;
	volatile int64_t t90 = 101825LL;

    t90 = ((x3305*(x3306/x3307))<<x3308);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x3317 = 10U;
	int8_t x3319 = -1;
	uint8_t x3320 = 1U;
	int64_t t91 = -135312663828LL;

    t91 = ((x3317*(x3318/x3319))<<x3320);

    if (t91 != 1156799906780LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x3333 = 1031674LL;
	volatile int16_t x3334 = INT16_MIN;
	volatile uint32_t x3336 = 54U;
	int64_t t92 = -15536664LL;

    t92 = ((x3333*(x3334/x3335))<<x3336);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x3341 = 0U;
	uint32_t x3342 = 13749U;

    t93 = ((x3341*(x3342/x3343))<<x3344);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x3501 = 119008069U;
	int32_t x3502 = INT32_MIN;

    t94 = ((x3501*(x3502/x3503))<<x3504);

    if (t94 != 3189486106U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x3561 = 30128LL;
	int64_t x3562 = INT64_MIN;
	volatile int32_t x3563 = INT32_MIN;
	volatile uint16_t x3564 = 2U;

    t95 = ((x3561*(x3562/x3563))<<x3564);

    if (t95 != 517595098775552LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x3573 = -256;
	static volatile uint64_t x3574 = UINT64_MAX;
	uint8_t x3576 = 0U;
	uint64_t t96 = 1081868LLU;

    t96 = ((x3573*(x3574/x3575))<<x3576);

    if (t96 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x3577 = 14U;
	static int8_t x3578 = -1;
	static int8_t x3580 = 7;
	int64_t t97 = 1954798898062LL;

    t97 = ((x3577*(x3578/x3579))<<x3580);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x3581 = UINT64_MAX;
	volatile int64_t x3582 = INT64_MIN;
	static uint32_t x3583 = UINT32_MAX;
	uint16_t x3584 = 0U;
	volatile uint64_t t98 = 244LLU;

    t98 = ((x3581*(x3582/x3583))<<x3584);

    if (t98 != 2147483648LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x3609 = 528U;
	uint8_t x3610 = 27U;
	int16_t x3611 = -1;
	volatile uint8_t x3612 = 17U;
	volatile uint32_t t99 = 207U;

    t99 = ((x3609*(x3610/x3611))<<x3612);

    if (t99 != 2426404864U) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x3754 = -12;
	int16_t x3755 = -214;

    t100 = ((x3753*(x3754/x3755))<<x3756);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x3774 = UINT32_MAX;
	static int16_t x3775 = 34;
	uint8_t x3776 = 0U;
	uint32_t t101 = 108723882U;

    t101 = ((x3773*(x3774/x3775))<<x3776);

    if (t101 != 4168644729U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x3781 = INT32_MIN;
	int64_t x3782 = -189LL;
	volatile uint8_t x3783 = UINT8_MAX;
	uint8_t x3784 = 11U;
	static int64_t t102 = -9869029298LL;

    t102 = ((x3781*(x3782/x3783))<<x3784);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x3829 = 54LLU;
	int8_t x3830 = INT8_MIN;
	int16_t x3831 = INT16_MAX;
	int32_t x3832 = 12;
	uint64_t t103 = 811LLU;

    t103 = ((x3829*(x3830/x3831))<<x3832);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x3850 = 60;
	volatile int64_t x3851 = INT64_MIN;
	static int64_t t104 = -6164LL;

    t104 = ((x3849*(x3850/x3851))<<x3852);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x3917 = -1LL;
	int64_t x3918 = INT64_MIN;
	uint64_t x3919 = 13429075LLU;
	uint64_t t105 = 1138137675198574613LLU;

    t105 = ((x3917*(x3918/x3919))<<x3920);

    if (t105 != 18446742700067355582LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x3931 = INT16_MAX;
	uint8_t x3932 = 4U;

    t106 = ((x3929*(x3930/x3931))<<x3932);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x4033 = 32190LLU;
	int64_t x4035 = INT64_MIN;
	int32_t x4036 = 2;

    t107 = ((x4033*(x4034/x4035))<<x4036);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x4069 = 1U;
	int16_t x4070 = -198;
	int64_t x4071 = INT64_MIN;
	static int8_t x4072 = 1;
	volatile int64_t t108 = -26LL;

    t108 = ((x4069*(x4070/x4071))<<x4072);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x4077 = INT8_MIN;
	int16_t x4080 = 41;
	volatile uint64_t t109 = 23568730943LLU;

    t109 = ((x4077*(x4078/x4079))<<x4080);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x4081 = 2U;
	uint16_t x4082 = 1867U;
	volatile uint64_t x4083 = UINT64_MAX;
	static uint8_t x4084 = 6U;
	static volatile uint64_t t110 = 35LLU;

    t110 = ((x4081*(x4082/x4083))<<x4084);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x4289 = 418U;
	uint64_t x4290 = UINT64_MAX;
	int8_t x4291 = INT8_MIN;
	uint8_t x4292 = 1U;
	static volatile uint64_t t111 = 4288327401255646683LLU;

    t111 = ((x4289*(x4290/x4291))<<x4292);

    if (t111 != 836LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x4305 = 2500;
	int8_t x4306 = INT8_MAX;
	uint64_t x4307 = 626284LLU;
	int64_t x4308 = 3LL;

    t112 = ((x4305*(x4306/x4307))<<x4308);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x4345 = 90016036683637106LL;
	static int16_t x4346 = -27;
	int32_t x4347 = -55119;
	int64_t t113 = -1705198138500LL;

    t113 = ((x4345*(x4346/x4347))<<x4348);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x4353 = UINT64_MAX;
	int16_t x4355 = INT16_MIN;
	static int16_t x4356 = 20;

    t114 = ((x4353*(x4354/x4355))<<x4356);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x4373 = -478;
	uint16_t x4374 = UINT16_MAX;
	uint64_t x4375 = UINT64_MAX;
	int16_t x4376 = 0;
	volatile uint64_t t115 = 3910586219LLU;

    t115 = ((x4373*(x4374/x4375))<<x4376);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x4441 = -1;
	int32_t x4442 = INT32_MAX;
	int16_t x4443 = -3193;
	uint8_t x4444 = 2U;
	int32_t t116 = -149169;

    t116 = ((x4441*(x4442/x4443))<<x4444);

    if (t116 != 2690236) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x4469 = INT8_MIN;
	uint32_t x4470 = UINT32_MAX;
	volatile int32_t x4471 = -140241;
	static uint8_t x4472 = 1U;

    t117 = ((x4469*(x4470/x4471))<<x4472);

    if (t117 != 4294967040U) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x4473 = UINT32_MAX;
	volatile int8_t x4476 = 31;
	volatile int64_t t118 = 25784552LL;

    t118 = ((x4473*(x4474/x4475))<<x4476);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x4501 = 10;
	volatile int8_t x4502 = 14;
	static uint64_t x4503 = 775282941183005921LLU;
	static uint32_t x4504 = 6U;
	uint64_t t119 = 274778420435169LLU;

    t119 = ((x4501*(x4502/x4503))<<x4504);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x4513 = 1327975495432905545LLU;
	uint16_t x4514 = 1175U;
	uint16_t x4515 = UINT16_MAX;
	volatile uint64_t t120 = 47514310643466LLU;

    t120 = ((x4513*(x4514/x4515))<<x4516);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x4530 = INT8_MIN;
	uint64_t x4531 = 294041872288LLU;
	volatile uint16_t x4532 = 3U;

    t121 = ((x4529*(x4530/x4531))<<x4532);

    if (t121 != 18446744073207670880LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint32_t x4581 = 842602712U;
	volatile uint64_t x4582 = 3441290759375147508LLU;
	volatile int32_t x4583 = 24;

    t122 = ((x4581*(x4582/x4583))<<x4584);

    if (t122 != 2465727790905201232LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x4753 = -1;
	static volatile int32_t x4754 = 222590667;
	volatile int32_t x4755 = INT32_MIN;
	int16_t x4756 = 7;
	int32_t t123 = -54;

    t123 = ((x4753*(x4754/x4755))<<x4756);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x4805 = UINT32_MAX;
	int64_t x4807 = INT64_MIN;
	uint32_t x4808 = 3U;
	volatile int64_t t124 = -1716922069187826589LL;

    t124 = ((x4805*(x4806/x4807))<<x4808);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int16_t x4849 = INT16_MIN;
	int64_t x4850 = -30029352356430LL;
	int64_t x4851 = INT64_MAX;

    t125 = ((x4849*(x4850/x4851))<<x4852);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x4902 = 3;
	static volatile uint32_t x4903 = 63732828U;
	uint32_t x4904 = 5U;

    t126 = ((x4901*(x4902/x4903))<<x4904);

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x4937 = -1;
	uint32_t x4938 = UINT32_MAX;
	int8_t x4939 = INT8_MAX;
	uint16_t x4940 = 6U;
	uint32_t t127 = 3662U;

    t127 = ((x4937*(x4938/x4939))<<x4940);

    if (t127 != 2130574336U) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x4949 = -1LL;
	uint8_t x4950 = 9U;
	static int8_t x4951 = -1;
	int8_t x4952 = 39;
	int64_t t128 = 806622485050LL;

    t128 = ((x4949*(x4950/x4951))<<x4952);

    if (t128 != 4947802324992LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x4961 = INT8_MIN;
	volatile int16_t x4962 = INT16_MIN;
	uint8_t x4963 = UINT8_MAX;
	static uint8_t x4964 = 0U;

    t129 = ((x4961*(x4962/x4963))<<x4964);

    if (t129 != 16384) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x5029 = 944U;
	uint8_t x5030 = 54U;
	int8_t x5031 = INT8_MIN;
	int8_t x5032 = 1;
	uint32_t t130 = 17476854U;

    t130 = ((x5029*(x5030/x5031))<<x5032);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x5081 = UINT8_MAX;
	uint8_t x5082 = 0U;
	uint8_t x5083 = 5U;
	volatile uint8_t x5084 = 16U;
	int32_t t131 = 10394;

    t131 = ((x5081*(x5082/x5083))<<x5084);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x5117 = -1;
	uint64_t x5118 = UINT64_MAX;
	int64_t x5119 = -1LL;
	uint16_t x5120 = 13U;
	uint64_t t132 = 129542329208LLU;

    t132 = ((x5117*(x5118/x5119))<<x5120);

    if (t132 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x5141 = -61;
	volatile uint16_t x5142 = UINT16_MAX;
	uint8_t x5144 = 0U;
	static volatile int32_t t133 = 0;

    t133 = ((x5141*(x5142/x5143))<<x5144);

    if (t133 != 1332545) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x5145 = 10816529262749LLU;
	int32_t x5146 = -8490;
	int8_t x5148 = 1;
	static volatile uint64_t t134 = 11484LLU;

    t134 = ((x5145*(x5146/x5147))<<x5148);

    if (t134 != 183664666881478020LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x5285 = UINT16_MAX;
	int64_t x5287 = 1543LL;
	int64_t t135 = 502031767610375208LL;

    t135 = ((x5285*(x5286/x5287))<<x5288);

    if (t135 != 335539200LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x5305 = INT64_MAX;
	int32_t x5306 = -1;
	uint64_t x5307 = 106519545LLU;
	volatile uint8_t x5308 = 31U;
	static volatile uint64_t t136 = 65779105158593229LLU;

    t136 = ((x5305*(x5306/x5307))<<x5308);

    if (t136 != 15486671837579968512LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x5320 = 2U;

    t137 = ((x5317*(x5318/x5319))<<x5320);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x5321 = -258622830;
	int64_t x5323 = -1LL;
	volatile uint64_t t138 = 1LLU;

    t138 = ((x5321*(x5322/x5323))<<x5324);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x5325 = -1;
	int8_t x5327 = INT8_MAX;
	static int8_t x5328 = 1;
	static int32_t t139 = -36;

    t139 = ((x5325*(x5326/x5327))<<x5328);

    if (t139 != 2831184) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int64_t x5353 = -7862LL;
	uint8_t x5355 = UINT8_MAX;
	static uint16_t x5356 = 6U;
	static int64_t t140 = 3702873LL;

    t140 = ((x5353*(x5354/x5355))<<x5356);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x5477 = INT64_MIN;
	int32_t x5479 = INT32_MIN;
	static uint8_t x5480 = 3U;

    t141 = ((x5477*(x5478/x5479))<<x5480);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x5542 = -1LL;
	int64_t x5543 = INT64_MIN;
	static int8_t x5544 = 0;
	volatile int64_t t142 = -83085067543705052LL;

    t142 = ((x5541*(x5542/x5543))<<x5544);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x5626 = INT16_MAX;
	volatile int64_t x5627 = INT64_MIN;
	int16_t x5628 = 59;

    t143 = ((x5625*(x5626/x5627))<<x5628);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x5634 = 6368481LLU;
	static int64_t x5635 = -1LL;
	volatile uint64_t t144 = 41139848080943548LLU;

    t144 = ((x5633*(x5634/x5635))<<x5636);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x5665 = 1U;
	static volatile int16_t x5666 = 52;
	static int8_t x5667 = INT8_MAX;
	int8_t x5668 = 1;
	int32_t t145 = -26840;

    t145 = ((x5665*(x5666/x5667))<<x5668);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x5709 = INT16_MAX;
	volatile uint8_t x5710 = 48U;
	uint32_t x5711 = 1041364793U;
	uint16_t x5712 = 7U;
	volatile uint32_t t146 = 16U;

    t146 = ((x5709*(x5710/x5711))<<x5712);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x5734 = 4155826LLU;
	volatile int16_t x5735 = INT16_MIN;
	uint16_t x5736 = 11U;
	volatile uint64_t t147 = 350593LLU;

    t147 = ((x5733*(x5734/x5735))<<x5736);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x5765 = 0;
	volatile uint32_t x5766 = UINT32_MAX;
	volatile int32_t x5767 = INT32_MIN;

    t148 = ((x5765*(x5766/x5767))<<x5768);

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x5793 = -42394658084LL;
	int16_t x5794 = -1;
	volatile int32_t x5795 = -17601;
	int8_t x5796 = 2;
	volatile int64_t t149 = 444349332116203LL;

    t149 = ((x5793*(x5794/x5795))<<x5796);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x5813 = -1;
	uint64_t x5814 = 137791167354938LLU;
	uint64_t x5815 = 572146629390553LLU;
	int16_t x5816 = 5;

    t150 = ((x5813*(x5814/x5815))<<x5816);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x5825 = -12;
	uint16_t x5826 = UINT16_MAX;
	volatile int8_t x5827 = -1;
	volatile uint32_t x5828 = 1U;
	static volatile int32_t t151 = 1799;

    t151 = ((x5825*(x5826/x5827))<<x5828);

    if (t151 != 1572840) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x5837 = 12436831U;
	uint16_t x5838 = UINT16_MAX;
	static uint16_t x5840 = 3U;
	static uint32_t t152 = 3187230U;

    t152 = ((x5837*(x5838/x5839))<<x5840);

    if (t152 != 3673565944U) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x5841 = INT16_MAX;
	int16_t x5844 = 37;
	int64_t t153 = -58LL;

    t153 = ((x5841*(x5842/x5843))<<x5844);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x5849 = 374320840610391LLU;
	uint64_t x5850 = 15767725LLU;
	static volatile uint8_t x5852 = 3U;
	volatile uint64_t t154 = 964714058859LLU;

    t154 = ((x5849*(x5850/x5851))<<x5852);

    if (t154 != 2855550253673724520LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x5921 = -119;
	int16_t x5923 = INT16_MIN;
	volatile int32_t t155 = 5037;

    t155 = ((x5921*(x5922/x5923))<<x5924);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x5947 = 1;
	uint8_t x5948 = 5U;
	uint32_t t156 = 9U;

    t156 = ((x5945*(x5946/x5947))<<x5948);

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x5997 = -1206614;
	int32_t t157 = 229933;

    t157 = ((x5997*(x5998/x5999))<<x6000);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x6001 = 53U;
	uint64_t x6002 = 712243206LLU;
	static volatile uint64_t t158 = 9713LLU;

    t158 = ((x6001*(x6002/x6003))<<x6004);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int32_t x6073 = INT32_MIN;
	int32_t x6074 = 0;
	int32_t x6075 = INT32_MAX;
	volatile uint8_t x6076 = 7U;
	int32_t t159 = -7097;

    t159 = ((x6073*(x6074/x6075))<<x6076);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x6097 = 0;
	volatile int8_t x6098 = INT8_MIN;
	int8_t x6099 = 8;
	static uint8_t x6100 = 17U;
	volatile int32_t t160 = 19;

    t160 = ((x6097*(x6098/x6099))<<x6100);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x6109 = INT32_MIN;
	static volatile int8_t x6111 = INT8_MAX;
	volatile uint8_t x6112 = 2U;
	static volatile int64_t t161 = -2LL;

    t161 = ((x6109*(x6110/x6111))<<x6112);

    if (t161 != 8589934592LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x6185 = INT32_MAX;
	static uint16_t x6186 = 13U;
	int32_t x6187 = 431879085;
	static int32_t x6188 = 23;
	static int32_t t162 = -1939;

    t162 = ((x6185*(x6186/x6187))<<x6188);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int64_t x6230 = INT64_MIN;
	int16_t x6231 = INT16_MIN;

    t163 = ((x6229*(x6230/x6231))<<x6232);

    if (t163 != 18446181123756130304LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x6241 = INT64_MAX;
	volatile uint64_t x6242 = 326205LLU;
	int64_t x6243 = INT64_MAX;
	uint16_t x6244 = 3U;
	volatile uint64_t t164 = 1594966964687869LLU;

    t164 = ((x6241*(x6242/x6243))<<x6244);

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x6250 = -215916;
	uint64_t x6251 = UINT64_MAX;
	uint8_t x6252 = 7U;
	volatile uint64_t t165 = 234929073537188LLU;

    t165 = ((x6249*(x6250/x6251))<<x6252);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x6349 = INT32_MIN;
	uint64_t x6350 = 55502822692893436LLU;
	static int16_t x6351 = 15;
	volatile uint64_t x6352 = 1LLU;
	uint64_t t166 = 9745309464LLU;

    t166 = ((x6349*(x6350/x6351))<<x6352);

    if (t166 != 14840783175159906304LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x6361 = INT16_MIN;
	static uint8_t x6362 = 1U;
	uint16_t x6363 = 955U;
	volatile uint16_t x6364 = 4U;

    t167 = ((x6361*(x6362/x6363))<<x6364);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x6377 = 438U;
	int8_t x6380 = 1;
	volatile int32_t t168 = 453;

    t168 = ((x6377*(x6378/x6379))<<x6380);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x6453 = UINT8_MAX;
	uint64_t x6454 = 3985826980773544480LLU;
	static int8_t x6456 = 0;
	uint64_t t169 = 4LLU;

    t169 = ((x6453*(x6454/x6455))<<x6456);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x6469 = UINT8_MAX;
	int64_t x6471 = 19369311242271LL;
	uint8_t x6472 = 3U;
	int64_t t170 = -2417053416322594199LL;

    t170 = ((x6469*(x6470/x6471))<<x6472);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int32_t x6525 = 32093218;
	volatile uint64_t x6526 = 86917313LLU;
	uint8_t x6527 = 2U;
	int8_t x6528 = 1;
	volatile uint64_t t171 = 255094272995LLU;

    t171 = ((x6525*(x6526/x6527))<<x6528);

    if (t171 != 2789456241990016LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x6537 = INT16_MIN;
	static uint8_t x6538 = 12U;
	int32_t x6539 = -331;
	uint16_t x6540 = 3U;
	int32_t t172 = -8215;

    t172 = ((x6537*(x6538/x6539))<<x6540);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x6589 = INT64_MIN;
	static int8_t x6590 = 0;
	int64_t x6592 = 1LL;
	static volatile int64_t t173 = 9886835816574LL;

    t173 = ((x6589*(x6590/x6591))<<x6592);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x6609 = -1;
	int8_t x6610 = INT8_MIN;
	volatile uint8_t x6612 = 1U;
	volatile int64_t t174 = -5486LL;

    t174 = ((x6609*(x6610/x6611))<<x6612);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x6629 = -1LL;
	static int64_t x6630 = -1LL;
	volatile int8_t x6631 = INT8_MIN;
	static volatile uint8_t x6632 = 15U;
	volatile int64_t t175 = -545110626886LL;

    t175 = ((x6629*(x6630/x6631))<<x6632);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x6645 = -1;
	int64_t x6646 = -3LL;
	uint16_t x6648 = 0U;
	int64_t t176 = -1LL;

    t176 = ((x6645*(x6646/x6647))<<x6648);

    if (t176 != 1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x6649 = INT32_MIN;
	volatile int64_t t177 = -1765009635661LL;

    t177 = ((x6649*(x6650/x6651))<<x6652);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x6665 = INT8_MIN;
	int8_t x6667 = INT8_MIN;
	int16_t x6668 = 1;
	int32_t t178 = 191412;

    t178 = ((x6665*(x6666/x6667))<<x6668);

    if (t178 != 46848) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x6754 = -58;
	int32_t x6756 = 19;

    t179 = ((x6753*(x6754/x6755))<<x6756);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x6789 = INT16_MAX;
	int64_t x6791 = -1LL;
	static int8_t x6792 = 6;
	int64_t t180 = 896LL;

    t180 = ((x6789*(x6790/x6791))<<x6792);

    if (t180 != 12582528LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x6821 = INT32_MIN;
	uint8_t x6822 = UINT8_MAX;
	int32_t x6823 = INT32_MIN;
	volatile int16_t x6824 = 1;
	volatile int32_t t181 = -351;

    t181 = ((x6821*(x6822/x6823))<<x6824);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x6870 = INT16_MIN;
	int32_t x6872 = 0;
	static int32_t t182 = 542487281;

    t182 = ((x6869*(x6870/x6871))<<x6872);

    if (t182 != 141960) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x6885 = 167413303269624LLU;
	static volatile int16_t x6886 = INT16_MIN;
	uint32_t x6887 = 127021U;
	uint8_t x6888 = 41U;
	static volatile uint64_t t183 = 1880562LLU;

    t183 = ((x6885*(x6886/x6887))<<x6888);

    if (t183 != 11648208592472899584LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x6957 = 0;
	uint8_t x6959 = 21U;
	uint64_t t184 = 28367555LLU;

    t184 = ((x6957*(x6958/x6959))<<x6960);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x7037 = INT64_MIN;
	int8_t x7038 = 0;
	uint32_t x7039 = UINT32_MAX;
	int16_t x7040 = 5;
	int64_t t185 = -30702430091471LL;

    t185 = ((x7037*(x7038/x7039))<<x7040);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x7125 = INT16_MIN;
	static int16_t x7126 = INT16_MAX;
	int8_t x7127 = -1;
	volatile uint8_t x7128 = 1U;
	volatile int32_t t186 = -293;

    t186 = ((x7125*(x7126/x7127))<<x7128);

    if (t186 != 2147418112) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x7129 = -1LL;
	int64_t x7130 = 0LL;
	uint16_t x7131 = UINT16_MAX;
	static volatile int64_t t187 = -120153777013LL;

    t187 = ((x7129*(x7130/x7131))<<x7132);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x7141 = INT8_MIN;
	volatile uint32_t x7144 = 3U;

    t188 = ((x7141*(x7142/x7143))<<x7144);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x7193 = UINT16_MAX;
	int8_t x7194 = 0;
	int64_t x7195 = INT64_MIN;
	static int64_t t189 = 9396717480LL;

    t189 = ((x7193*(x7194/x7195))<<x7196);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x7213 = 221;
	static int32_t x7214 = 422;
	volatile uint32_t x7216 = 7U;
	volatile int64_t t190 = -19977LL;

    t190 = ((x7213*(x7214/x7215))<<x7216);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x7229 = INT16_MAX;
	uint32_t x7230 = 67821U;
	volatile int32_t x7231 = 141;
	uint16_t x7232 = 0U;

    t191 = ((x7229*(x7230/x7231))<<x7232);

    if (t191 != 15760927U) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x7293 = 7;
	int8_t x7294 = INT8_MIN;
	int32_t x7295 = -139341;
	static int16_t x7296 = 7;
	static int32_t t192 = 14352;

    t192 = ((x7293*(x7294/x7295))<<x7296);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x7338 = 69;
	int8_t x7339 = INT8_MAX;
	static int8_t x7340 = 0;
	int32_t t193 = 34761;

    t193 = ((x7337*(x7338/x7339))<<x7340);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x7429 = INT64_MIN;
	static volatile int16_t x7430 = INT16_MIN;
	int16_t x7432 = 0;
	uint64_t t194 = 674350LLU;

    t194 = ((x7429*(x7430/x7431))<<x7432);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x7463 = INT32_MIN;
	int32_t t195 = 551;

    t195 = ((x7461*(x7462/x7463))<<x7464);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x7465 = UINT16_MAX;
	volatile uint64_t x7466 = UINT64_MAX;
	volatile int32_t x7467 = INT32_MIN;
	static uint8_t x7468 = 5U;
	uint64_t t196 = 196130275111LLU;

    t196 = ((x7465*(x7466/x7467))<<x7468);

    if (t196 != 2097120LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x7625 = INT8_MIN;
	int32_t x7627 = INT32_MIN;
	static int32_t t197 = 1884;

    t197 = ((x7625*(x7626/x7627))<<x7628);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x7697 = -3;
	int8_t x7698 = 0;
	int8_t x7699 = INT8_MIN;
	uint8_t x7700 = 0U;
	static volatile int32_t t198 = -1;

    t198 = ((x7697*(x7698/x7699))<<x7700);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x7702 = INT8_MIN;
	static int32_t x7703 = -5205;
	uint8_t x7704 = 10U;
	volatile int32_t t199 = -1186939;

    t199 = ((x7701*(x7702/x7703))<<x7704);

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


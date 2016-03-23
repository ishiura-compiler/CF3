
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

volatile uint16_t x50 = 0U;
uint32_t t0 = UINT32_MAX;
volatile int8_t x90 = 1;
static int8_t x147 = -1;
volatile uint32_t x165 = UINT32_MAX;
volatile int16_t x167 = INT16_MIN;
uint32_t t3 = 0U;
int64_t x240 = INT64_MIN;
volatile uint64_t t6 = 263842463944666869LLU;
int8_t x385 = INT8_MAX;
volatile uint16_t x388 = 14300U;
static int8_t x401 = INT8_MAX;
int32_t x431 = 13210;
volatile uint32_t t10 = 3257067U;
static uint16_t x493 = UINT16_MAX;
int32_t x495 = -1;
static uint16_t x557 = 14083U;
static int32_t x621 = INT32_MAX;
volatile int64_t x623 = INT64_MIN;
volatile int16_t x742 = 0;
int32_t x744 = -245110445;
uint32_t x756 = 26402U;
static int32_t x841 = INT32_MAX;
volatile uint8_t x842 = 1U;
static uint8_t x844 = UINT8_MAX;
uint32_t x866 = 0U;
uint8_t x867 = 37U;
int8_t x918 = 30;
int64_t x919 = INT64_MIN;
int64_t x1025 = 1830959115LL;
int32_t t25 = 59;
static volatile int32_t t27 = -26954015;
static volatile uint32_t x1224 = 44U;
int16_t x1234 = 3;
int64_t x1236 = INT64_MIN;
volatile int64_t x1277 = 15LL;
uint16_t x1278 = 17U;
volatile int64_t t30 = -2926369361933074LL;
static uint16_t x1369 = 15U;
static uint8_t x1378 = 27U;
volatile int64_t x1424 = -1LL;
static int32_t x1474 = 3;
volatile int16_t x1503 = INT16_MIN;
int64_t x1504 = -1LL;
int32_t t37 = 92;
static volatile int8_t x1566 = 15;
static int8_t x1634 = 6;
int16_t x1636 = INT16_MIN;
int32_t x1661 = 1137619;
int32_t x1664 = INT32_MAX;
volatile int32_t t40 = -16211128;
int16_t x1767 = INT16_MIN;
int64_t x1768 = INT64_MIN;
uint8_t x1913 = UINT8_MAX;
int32_t t43 = -1;
uint64_t x1979 = 300961015566146LLU;
volatile int32_t t44 = 597073817;
int64_t t45 = 32321846LL;
volatile int8_t x2158 = 1;
int32_t t46 = -730;
int64_t x2245 = 1037598554LL;
uint8_t x2295 = 0U;
uint8_t x2362 = 15U;
volatile int32_t t53 = 265;
static volatile uint64_t t54 = 482481464LLU;
int16_t x2593 = 63;
static uint32_t x2594 = 0U;
volatile int32_t t56 = -1088958;
uint16_t x2639 = 433U;
volatile int32_t x2640 = INT32_MIN;
static int64_t t58 = -112LL;
static volatile int32_t t59 = -979393891;
uint64_t x2741 = 7749036068781785672LLU;
volatile int8_t x2742 = 3;
static int16_t x2819 = -9425;
volatile int64_t t63 = 83679370242668907LL;
static int8_t x3044 = INT8_MIN;
uint64_t x3063 = UINT64_MAX;
uint32_t x3117 = 1969346934U;
int8_t x3119 = 1;
static int8_t x3146 = 9;
uint16_t x3147 = UINT16_MAX;
int64_t x3148 = 12315205836LL;
int32_t t68 = -1;
static int32_t t70 = 0;
int8_t x3285 = 1;
int32_t x3286 = 1;
int32_t x3287 = INT32_MIN;
static int64_t t74 = 45073267LL;
int8_t x3408 = -1;
static uint16_t x3464 = UINT16_MAX;
volatile int8_t x3469 = INT8_MAX;
static int16_t x3471 = 0;
volatile int32_t t79 = 10542;
static int8_t x3498 = 0;
uint8_t x3529 = 0U;
uint8_t x3666 = 3U;
uint16_t x3749 = 26U;
uint64_t x3750 = 15LLU;
static int32_t x3861 = 584707163;
int64_t x3866 = 0LL;
volatile uint32_t x4035 = 15U;
int8_t x4082 = 4;
int64_t x4132 = INT64_MAX;
int32_t x4279 = INT32_MAX;
uint32_t x4437 = UINT32_MAX;
uint8_t x4443 = 0U;
volatile uint8_t x4444 = 50U;
uint8_t x4521 = UINT8_MAX;
uint16_t x4522 = 21U;
uint32_t x4577 = 2966248U;
int64_t x4597 = INT64_MAX;
static volatile uint32_t x4715 = 546426327U;
volatile uint32_t x4729 = UINT32_MAX;
static uint8_t x4730 = 0U;
int16_t x4731 = INT16_MIN;
int64_t x4828 = -1LL;
uint8_t x4932 = 2U;
volatile int32_t t107 = 92;
int32_t x4994 = 0;
int8_t x4995 = INT8_MAX;
uint16_t x5007 = 4U;
uint16_t x5129 = 265U;
volatile int16_t x5158 = 1;
int8_t x5249 = INT8_MAX;
uint32_t x5250 = 3U;
int32_t x5307 = INT32_MAX;
int32_t x5387 = 2557;
static volatile int32_t x5388 = 810282461;
int8_t x5390 = 3;
int32_t x5391 = 90569443;
static uint8_t x5427 = 0U;
int16_t x5563 = -43;
uint8_t x5573 = 28U;
volatile int32_t t127 = 113155151;
uint16_t x5650 = 12U;
int16_t x5652 = INT16_MAX;
volatile int16_t x5676 = -1;
uint32_t x5729 = 8388908U;
uint32_t t130 = 106U;
uint8_t x5937 = 101U;
int32_t t136 = 253895041;
static int32_t x6084 = 1;
uint32_t x6145 = 48U;
static int64_t x6174 = 0LL;
volatile int16_t x6228 = INT16_MIN;
uint64_t x6259 = 8065915318990LLU;
int16_t x6260 = INT16_MIN;
uint16_t x6281 = UINT16_MAX;
int64_t x6329 = 200LL;
uint8_t x6330 = 15U;
uint64_t x6331 = 192920706972211LLU;
int64_t t148 = 5374271LL;
uint8_t x6461 = 23U;
uint8_t x6503 = UINT8_MAX;
static volatile int16_t x6504 = INT16_MAX;
uint32_t t152 = 372U;
uint32_t x6576 = 389457U;
int16_t x6648 = -3738;
int8_t x6690 = 4;
volatile int64_t x6707 = INT64_MIN;
static volatile int64_t t156 = -109603837558LL;
int32_t x6711 = INT32_MIN;
uint16_t x6859 = 0U;
uint16_t x6885 = 7945U;
uint8_t x6898 = 9U;
volatile int32_t t161 = 5;
int16_t x7034 = 0;
int32_t t166 = 495211;
int64_t x7071 = -1LL;
int64_t x7072 = INT64_MIN;
volatile uint64_t t169 = 69959421935769LLU;
int32_t t170 = 0;
int16_t x7196 = -1;
static int64_t x7351 = INT64_MAX;
int8_t x7352 = 0;
uint32_t t176 = 2078095U;
uint16_t x7361 = 9U;
uint8_t x7362 = 1U;
uint8_t x7557 = UINT8_MAX;
uint32_t t179 = 6741U;
uint64_t x7624 = 142081LLU;
volatile int32_t t180 = 13;
int16_t x7779 = -24;
volatile int8_t x8007 = INT8_MIN;
static int16_t x8231 = INT16_MAX;
volatile uint64_t x8232 = UINT64_MAX;
int8_t x8251 = INT8_MAX;
volatile int16_t x8271 = INT16_MAX;
volatile int8_t x8510 = 0;
uint32_t x8512 = 320U;
volatile int32_t t191 = -40027491;
int32_t t193 = -29858;
uint64_t x8613 = 173789266LLU;
volatile int64_t x8615 = INT64_MIN;
static int64_t x8635 = INT64_MAX;
volatile int32_t t195 = 84;
int64_t x8725 = INT64_MAX;
static int64_t x8745 = INT64_MAX;
uint64_t x8789 = 809937113LLU;


void f0(void) {
    	uint32_t x49 = UINT32_MAX;
	int16_t x51 = INT16_MIN;
	int16_t x52 = 0;

    t0 = ((x49>>x50)*(x51!=x52));

    if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x89 = 28394837;
	volatile int16_t x91 = 416;
	int8_t x92 = 4;
	int32_t t1 = -1170947;

    t1 = ((x89>>x90)*(x91!=x92));

    if (t1 != 14197418) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x145 = 1244485187125771LLU;
	static int8_t x146 = 10;
	int16_t x148 = INT16_MIN;
	volatile uint64_t t2 = 422805142LLU;

    t2 = ((x145>>x146)*(x147!=x148));

    if (t2 != 1215317565552LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x166 = 17U;
	volatile int32_t x168 = 14943847;

    t3 = ((x165>>x166)*(x167!=x168));

    if (t3 != 32767U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x237 = 6533U;
	int8_t x238 = 4;
	static int64_t x239 = INT64_MAX;
	volatile int32_t t4 = -169379108;

    t4 = ((x237>>x238)*(x239!=x240));

    if (t4 != 408) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x265 = 26272LLU;
	int8_t x266 = 1;
	int32_t x267 = 224819;
	uint16_t x268 = 10764U;
	volatile uint64_t t5 = 16841323LLU;

    t5 = ((x265>>x266)*(x267!=x268));

    if (t5 != 13136LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x333 = 11LLU;
	uint32_t x334 = 3U;
	uint64_t x335 = UINT64_MAX;
	int32_t x336 = INT32_MAX;

    t6 = ((x333>>x334)*(x335!=x336));

    if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x357 = 1094;
	static uint8_t x358 = 28U;
	uint16_t x359 = UINT16_MAX;
	uint64_t x360 = 30999727849LLU;
	volatile int32_t t7 = -30;

    t7 = ((x357>>x358)*(x359!=x360));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x386 = 14;
	int16_t x387 = INT16_MIN;
	volatile int32_t t8 = 16102115;

    t8 = ((x385>>x386)*(x387!=x388));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x402 = 5U;
	int64_t x403 = -3089715085279091LL;
	volatile uint32_t x404 = 10325134U;
	int32_t t9 = -4125649;

    t9 = ((x401>>x402)*(x403!=x404));

    if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x429 = 2861877U;
	uint64_t x430 = 3LLU;
	int64_t x432 = INT64_MIN;

    t10 = ((x429>>x430)*(x431!=x432));

    if (t10 != 357734U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x449 = UINT32_MAX;
	uint16_t x450 = 26U;
	int16_t x451 = 1;
	int64_t x452 = INT64_MIN;
	uint32_t t11 = 54U;

    t11 = ((x449>>x450)*(x451!=x452));

    if (t11 != 63U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x469 = 0;
	uint16_t x470 = 2U;
	int16_t x471 = INT16_MIN;
	int64_t x472 = -1624074091147803LL;
	volatile int32_t t12 = 6068934;

    t12 = ((x469>>x470)*(x471!=x472));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x494 = 2LLU;
	static int64_t x496 = INT64_MAX;
	static int32_t t13 = 276;

    t13 = ((x493>>x494)*(x495!=x496));

    if (t13 != 16383) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x558 = 8U;
	volatile uint32_t x559 = UINT32_MAX;
	uint64_t x560 = UINT64_MAX;
	int32_t t14 = 1387479;

    t14 = ((x557>>x558)*(x559!=x560));

    if (t14 != 55) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x622 = 3;
	uint16_t x624 = 57U;
	volatile int32_t t15 = -3294390;

    t15 = ((x621>>x622)*(x623!=x624));

    if (t15 != 268435455) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x633 = 0;
	uint8_t x634 = 2U;
	volatile int16_t x635 = 507;
	uint16_t x636 = 2U;
	volatile int32_t t16 = -4123;

    t16 = ((x633>>x634)*(x635!=x636));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x741 = 0;
	static int16_t x743 = -1;
	volatile int32_t t17 = -5597083;

    t17 = ((x741>>x742)*(x743!=x744));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x753 = 1058535U;
	uint8_t x754 = 6U;
	uint32_t x755 = UINT32_MAX;
	volatile uint32_t t18 = 65U;

    t18 = ((x753>>x754)*(x755!=x756));

    if (t18 != 16539U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x757 = 95111455187715523LLU;
	static uint8_t x758 = 9U;
	static int16_t x759 = -1;
	uint16_t x760 = 0U;
	static volatile uint64_t t19 = 60103523246408LLU;

    t19 = ((x757>>x758)*(x759!=x760));

    if (t19 != 185764560913506LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x843 = INT16_MIN;
	int32_t t20 = -3691;

    t20 = ((x841>>x842)*(x843!=x844));

    if (t20 != 1073741823) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x865 = INT64_MAX;
	int64_t x868 = -1LL;
	volatile int64_t t21 = INT64_MAX;

    t21 = ((x865>>x866)*(x867!=x868));

    if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x917 = 31U;
	int64_t x920 = -1LL;
	static int32_t t22 = -2;

    t22 = ((x917>>x918)*(x919!=x920));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x1017 = 44U;
	int16_t x1018 = 2;
	uint64_t x1019 = UINT64_MAX;
	volatile uint8_t x1020 = 96U;
	volatile int32_t t23 = -445;

    t23 = ((x1017>>x1018)*(x1019!=x1020));

    if (t23 != 11) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x1026 = 1;
	int64_t x1027 = INT64_MIN;
	uint8_t x1028 = UINT8_MAX;
	int64_t t24 = 16481223864LL;

    t24 = ((x1025>>x1026)*(x1027!=x1028));

    if (t24 != 915479557LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x1085 = INT32_MAX;
	int64_t x1086 = 18LL;
	volatile int64_t x1087 = -44673472148500281LL;
	static volatile int32_t x1088 = -296354;

    t25 = ((x1085>>x1086)*(x1087!=x1088));

    if (t25 != 8191) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x1089 = 793LLU;
	uint16_t x1090 = 0U;
	static int32_t x1091 = INT32_MAX;
	static int8_t x1092 = 58;
	volatile uint64_t t26 = 1488566LLU;

    t26 = ((x1089>>x1090)*(x1091!=x1092));

    if (t26 != 793LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint8_t x1169 = 6U;
	volatile int32_t x1170 = 12;
	uint32_t x1171 = 27U;
	int8_t x1172 = -1;

    t27 = ((x1169>>x1170)*(x1171!=x1172));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x1221 = UINT16_MAX;
	int8_t x1222 = 20;
	uint8_t x1223 = 90U;
	int32_t t28 = 13;

    t28 = ((x1221>>x1222)*(x1223!=x1224));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x1233 = 11U;
	uint16_t x1235 = UINT16_MAX;
	volatile int32_t t29 = 211918;

    t29 = ((x1233>>x1234)*(x1235!=x1236));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x1279 = 24U;
	int32_t x1280 = 10;

    t30 = ((x1277>>x1278)*(x1279!=x1280));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x1370 = 29U;
	int8_t x1371 = -1;
	int8_t x1372 = -1;
	volatile int32_t t31 = 8810210;

    t31 = ((x1369>>x1370)*(x1371!=x1372));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x1377 = INT64_MAX;
	static volatile int32_t x1379 = INT32_MIN;
	static int32_t x1380 = 2396212;
	int64_t t32 = -2632LL;

    t32 = ((x1377>>x1378)*(x1379!=x1380));

    if (t32 != 68719476735LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x1381 = 2U;
	uint8_t x1382 = 9U;
	int32_t x1383 = INT32_MIN;
	uint32_t x1384 = UINT32_MAX;
	volatile int32_t t33 = -254527774;

    t33 = ((x1381>>x1382)*(x1383!=x1384));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x1421 = INT32_MAX;
	uint8_t x1422 = 0U;
	uint64_t x1423 = 63762LLU;
	volatile int32_t t34 = INT32_MAX;

    t34 = ((x1421>>x1422)*(x1423!=x1424));

    if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x1473 = UINT8_MAX;
	uint8_t x1475 = UINT8_MAX;
	uint16_t x1476 = 83U;
	volatile int32_t t35 = 343;

    t35 = ((x1473>>x1474)*(x1475!=x1476));

    if (t35 != 31) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint64_t x1501 = UINT64_MAX;
	uint8_t x1502 = 5U;
	uint64_t t36 = 92804125782849LLU;

    t36 = ((x1501>>x1502)*(x1503!=x1504));

    if (t36 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x1509 = 1U;
	uint8_t x1510 = 5U;
	int16_t x1511 = -1;
	volatile int32_t x1512 = INT32_MIN;

    t37 = ((x1509>>x1510)*(x1511!=x1512));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x1565 = 12U;
	uint32_t x1567 = UINT32_MAX;
	uint64_t x1568 = 0LLU;
	volatile int32_t t38 = -84;

    t38 = ((x1565>>x1566)*(x1567!=x1568));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x1633 = UINT32_MAX;
	volatile uint16_t x1635 = 7U;
	uint32_t t39 = 59345U;

    t39 = ((x1633>>x1634)*(x1635!=x1636));

    if (t39 != 67108863U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x1662 = 6U;
	int16_t x1663 = 1;

    t40 = ((x1661>>x1662)*(x1663!=x1664));

    if (t40 != 17775) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint64_t x1765 = UINT64_MAX;
	uint8_t x1766 = 3U;
	volatile uint64_t t41 = 14730247736676LLU;

    t41 = ((x1765>>x1766)*(x1767!=x1768));

    if (t41 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x1914 = 2U;
	static volatile int8_t x1915 = INT8_MIN;
	static int32_t x1916 = 30;
	volatile int32_t t42 = 465382766;

    t42 = ((x1913>>x1914)*(x1915!=x1916));

    if (t42 != 63) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x1917 = 4;
	uint8_t x1918 = 0U;
	static volatile uint16_t x1919 = UINT16_MAX;
	int16_t x1920 = INT16_MIN;

    t43 = ((x1917>>x1918)*(x1919!=x1920));

    if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x1977 = 14;
	static int8_t x1978 = 1;
	int8_t x1980 = -1;

    t44 = ((x1977>>x1978)*(x1979!=x1980));

    if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x2053 = 1563153LL;
	int8_t x2054 = 0;
	int8_t x2055 = 12;
	static int16_t x2056 = -83;

    t45 = ((x2053>>x2054)*(x2055!=x2056));

    if (t45 != 1563153LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x2157 = 15U;
	uint8_t x2159 = UINT8_MAX;
	uint64_t x2160 = 128392455LLU;

    t46 = ((x2157>>x2158)*(x2159!=x2160));

    if (t46 != 7) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x2217 = 8367LLU;
	static uint8_t x2218 = 50U;
	uint8_t x2219 = UINT8_MAX;
	int64_t x2220 = INT64_MAX;
	static uint64_t t47 = 18202LLU;

    t47 = ((x2217>>x2218)*(x2219!=x2220));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x2246 = 58U;
	static int8_t x2247 = INT8_MIN;
	static int64_t x2248 = -1964138LL;
	static volatile int64_t t48 = 113228LL;

    t48 = ((x2245>>x2246)*(x2247!=x2248));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x2293 = INT64_MAX;
	int8_t x2294 = 0;
	int32_t x2296 = INT32_MIN;
	static int64_t t49 = INT64_MAX;

    t49 = ((x2293>>x2294)*(x2295!=x2296));

    if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x2301 = 93U;
	int8_t x2302 = 1;
	volatile uint32_t x2303 = 94U;
	int8_t x2304 = -6;
	volatile int32_t t50 = 55797;

    t50 = ((x2301>>x2302)*(x2303!=x2304));

    if (t50 != 46) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x2325 = UINT8_MAX;
	volatile uint8_t x2326 = 28U;
	uint16_t x2327 = 1149U;
	int16_t x2328 = INT16_MAX;
	volatile int32_t t51 = 42887;

    t51 = ((x2325>>x2326)*(x2327!=x2328));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x2361 = UINT16_MAX;
	uint64_t x2363 = 1445864713067633LLU;
	uint64_t x2364 = 1733LLU;
	static int32_t t52 = 10;

    t52 = ((x2361>>x2362)*(x2363!=x2364));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x2397 = INT32_MAX;
	uint16_t x2398 = 13U;
	int32_t x2399 = INT32_MIN;
	uint8_t x2400 = 2U;

    t53 = ((x2397>>x2398)*(x2399!=x2400));

    if (t53 != 262143) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x2505 = 14519393232280LLU;
	uint8_t x2506 = 29U;
	static uint16_t x2507 = 0U;
	int64_t x2508 = -4146971911077483LL;

    t54 = ((x2505>>x2506)*(x2507!=x2508));

    if (t54 != 27044LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x2561 = INT32_MAX;
	int8_t x2562 = 0;
	uint8_t x2563 = UINT8_MAX;
	int8_t x2564 = INT8_MAX;
	int32_t t55 = INT32_MAX;

    t55 = ((x2561>>x2562)*(x2563!=x2564));

    if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x2595 = -325;
	uint16_t x2596 = UINT16_MAX;

    t56 = ((x2593>>x2594)*(x2595!=x2596));

    if (t56 != 63) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x2637 = INT64_MAX;
	volatile uint16_t x2638 = 7U;
	volatile int64_t t57 = 108LL;

    t57 = ((x2637>>x2638)*(x2639!=x2640));

    if (t57 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x2697 = INT64_MAX;
	int8_t x2698 = 2;
	int32_t x2699 = -1;
	uint32_t x2700 = 240931U;

    t58 = ((x2697>>x2698)*(x2699!=x2700));

    if (t58 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x2701 = INT32_MAX;
	static int8_t x2702 = 1;
	int8_t x2703 = INT8_MIN;
	uint8_t x2704 = 6U;

    t59 = ((x2701>>x2702)*(x2703!=x2704));

    if (t59 != 1073741823) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x2721 = 1U;
	int16_t x2722 = 8;
	static int16_t x2723 = INT16_MIN;
	volatile int32_t x2724 = INT32_MAX;
	static volatile int32_t t60 = 6877952;

    t60 = ((x2721>>x2722)*(x2723!=x2724));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x2743 = 27439560U;
	static volatile int16_t x2744 = INT16_MIN;
	volatile uint64_t t61 = 12003539781LLU;

    t61 = ((x2741>>x2742)*(x2743!=x2744));

    if (t61 != 968629508597723209LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint64_t x2817 = UINT64_MAX;
	uint8_t x2818 = 8U;
	static int64_t x2820 = -1LL;
	volatile uint64_t t62 = 34360378944LLU;

    t62 = ((x2817>>x2818)*(x2819!=x2820));

    if (t62 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x2861 = INT64_MAX;
	uint16_t x2862 = 57U;
	static volatile int8_t x2863 = INT8_MIN;
	uint32_t x2864 = 554694181U;

    t63 = ((x2861>>x2862)*(x2863!=x2864));

    if (t63 != 63LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x2949 = 245984719LLU;
	static int16_t x2950 = 29;
	int8_t x2951 = -1;
	int64_t x2952 = INT64_MAX;
	volatile uint64_t t64 = 68631150508LLU;

    t64 = ((x2949>>x2950)*(x2951!=x2952));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x3041 = 595777746672LLU;
	uint32_t x3042 = 0U;
	uint8_t x3043 = 6U;
	static uint64_t t65 = 3870LLU;

    t65 = ((x3041>>x3042)*(x3043!=x3044));

    if (t65 != 595777746672LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x3061 = 36U;
	volatile int8_t x3062 = 5;
	uint16_t x3064 = 25U;
	volatile int32_t t66 = 5;

    t66 = ((x3061>>x3062)*(x3063!=x3064));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x3118 = 6;
	int64_t x3120 = INT64_MIN;
	volatile uint32_t t67 = 119868294U;

    t67 = ((x3117>>x3118)*(x3119!=x3120));

    if (t67 != 30771045U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x3145 = UINT8_MAX;

    t68 = ((x3145>>x3146)*(x3147!=x3148));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x3177 = INT32_MAX;
	uint64_t x3178 = 7LLU;
	uint32_t x3179 = 593003U;
	int16_t x3180 = INT16_MIN;
	static volatile int32_t t69 = 2;

    t69 = ((x3177>>x3178)*(x3179!=x3180));

    if (t69 != 16777215) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x3249 = 30472;
	uint16_t x3250 = 12U;
	volatile int64_t x3251 = -970585LL;
	int64_t x3252 = INT64_MIN;

    t70 = ((x3249>>x3250)*(x3251!=x3252));

    if (t70 != 7) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x3269 = 1U;
	uint8_t x3270 = 1U;
	int32_t x3271 = -7;
	uint32_t x3272 = 26U;
	int32_t t71 = -26223;

    t71 = ((x3269>>x3270)*(x3271!=x3272));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x3288 = -27469596376562LL;
	int32_t t72 = 37785;

    t72 = ((x3285>>x3286)*(x3287!=x3288));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x3317 = UINT16_MAX;
	int64_t x3318 = 1LL;
	uint64_t x3319 = 15431084993LLU;
	uint16_t x3320 = 464U;
	int32_t t73 = -774551;

    t73 = ((x3317>>x3318)*(x3319!=x3320));

    if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x3325 = INT64_MAX;
	uint8_t x3326 = 25U;
	static int32_t x3327 = 126;
	uint8_t x3328 = 5U;

    t74 = ((x3325>>x3326)*(x3327!=x3328));

    if (t74 != 274877906943LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x3389 = INT64_MAX;
	uint32_t x3390 = 26U;
	uint8_t x3391 = 5U;
	int16_t x3392 = INT16_MIN;
	static int64_t t75 = -10522899266128469LL;

    t75 = ((x3389>>x3390)*(x3391!=x3392));

    if (t75 != 137438953471LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x3397 = 153U;
	static int16_t x3398 = 3;
	uint8_t x3399 = 5U;
	static uint64_t x3400 = UINT64_MAX;
	int32_t t76 = 7033;

    t76 = ((x3397>>x3398)*(x3399!=x3400));

    if (t76 != 19) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x3405 = 357947831000LLU;
	volatile uint32_t x3406 = 2U;
	volatile int8_t x3407 = -1;
	static volatile uint64_t t77 = 55953LLU;

    t77 = ((x3405>>x3406)*(x3407!=x3408));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x3461 = 0U;
	static int32_t x3462 = 0;
	int16_t x3463 = -1;
	int32_t t78 = 126584;

    t78 = ((x3461>>x3462)*(x3463!=x3464));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x3470 = 6U;
	static uint8_t x3472 = 4U;

    t79 = ((x3469>>x3470)*(x3471!=x3472));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x3497 = UINT64_MAX;
	static int8_t x3499 = -57;
	volatile int8_t x3500 = INT8_MAX;
	volatile uint64_t t80 = UINT64_MAX;

    t80 = ((x3497>>x3498)*(x3499!=x3500));

    if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x3530 = 0;
	static int8_t x3531 = INT8_MIN;
	int8_t x3532 = INT8_MIN;
	volatile int32_t t81 = -9;

    t81 = ((x3529>>x3530)*(x3531!=x3532));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x3617 = INT8_MAX;
	int8_t x3618 = 0;
	static int16_t x3619 = INT16_MIN;
	static int8_t x3620 = INT8_MIN;
	int32_t t82 = 92048914;

    t82 = ((x3617>>x3618)*(x3619!=x3620));

    if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x3665 = 8U;
	int32_t x3667 = 865;
	volatile uint64_t x3668 = UINT64_MAX;
	static int32_t t83 = -8;

    t83 = ((x3665>>x3666)*(x3667!=x3668));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x3701 = 1794530132LLU;
	int8_t x3702 = 6;
	int8_t x3703 = INT8_MAX;
	int16_t x3704 = 0;
	volatile uint64_t t84 = 1LLU;

    t84 = ((x3701>>x3702)*(x3703!=x3704));

    if (t84 != 28039533LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int64_t x3751 = INT64_MIN;
	int32_t x3752 = INT32_MIN;
	volatile int32_t t85 = -82;

    t85 = ((x3749>>x3750)*(x3751!=x3752));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x3862 = 0U;
	volatile int8_t x3863 = 8;
	uint64_t x3864 = 14042102282281514LLU;
	static int32_t t86 = -8387802;

    t86 = ((x3861>>x3862)*(x3863!=x3864));

    if (t86 != 584707163) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x3865 = UINT8_MAX;
	int8_t x3867 = -1;
	int8_t x3868 = 0;
	int32_t t87 = 784566553;

    t87 = ((x3865>>x3866)*(x3867!=x3868));

    if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x4033 = 79LLU;
	volatile uint32_t x4034 = 25U;
	int64_t x4036 = INT64_MIN;
	volatile uint64_t t88 = 2241927651285LLU;

    t88 = ((x4033>>x4034)*(x4035!=x4036));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x4069 = 599U;
	uint64_t x4070 = 1LLU;
	volatile int16_t x4071 = -26;
	int16_t x4072 = INT16_MAX;
	volatile int32_t t89 = 19853;

    t89 = ((x4069>>x4070)*(x4071!=x4072));

    if (t89 != 299) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x4081 = 3U;
	static uint8_t x4083 = 12U;
	int32_t x4084 = 708877;
	static int32_t t90 = -7;

    t90 = ((x4081>>x4082)*(x4083!=x4084));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x4109 = INT8_MAX;
	int8_t x4110 = 13;
	int64_t x4111 = INT64_MIN;
	volatile int8_t x4112 = -3;
	int32_t t91 = 42695325;

    t91 = ((x4109>>x4110)*(x4111!=x4112));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x4129 = INT64_MAX;
	volatile int32_t x4130 = 17;
	uint64_t x4131 = 192999244LLU;
	int64_t t92 = -22942591300631639LL;

    t92 = ((x4129>>x4130)*(x4131!=x4132));

    if (t92 != 70368744177663LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x4149 = 1U;
	uint8_t x4150 = 3U;
	volatile int64_t x4151 = -3484248211775060202LL;
	int64_t x4152 = INT64_MAX;
	int32_t t93 = -29;

    t93 = ((x4149>>x4150)*(x4151!=x4152));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint64_t x4277 = 241522389507980757LLU;
	volatile int32_t x4278 = 19;
	uint64_t x4280 = UINT64_MAX;
	uint64_t t94 = 32973958565833LLU;

    t94 = ((x4277>>x4278)*(x4279!=x4280));

    if (t94 != 460667399421LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x4349 = INT8_MAX;
	uint8_t x4350 = 18U;
	int16_t x4351 = INT16_MIN;
	volatile int16_t x4352 = INT16_MIN;
	static int32_t t95 = 43;

    t95 = ((x4349>>x4350)*(x4351!=x4352));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x4438 = 3U;
	static int8_t x4439 = INT8_MAX;
	volatile int16_t x4440 = -1;
	static uint32_t t96 = 3985907U;

    t96 = ((x4437>>x4438)*(x4439!=x4440));

    if (t96 != 536870911U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x4441 = 1344U;
	volatile int16_t x4442 = 0;
	int32_t t97 = -3353;

    t97 = ((x4441>>x4442)*(x4443!=x4444));

    if (t97 != 1344) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x4523 = 2786U;
	static volatile uint16_t x4524 = 46U;
	int32_t t98 = 19911;

    t98 = ((x4521>>x4522)*(x4523!=x4524));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x4578 = 20U;
	int32_t x4579 = -429055631;
	uint32_t x4580 = UINT32_MAX;
	volatile uint32_t t99 = 458261U;

    t99 = ((x4577>>x4578)*(x4579!=x4580));

    if (t99 != 2U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x4598 = 4U;
	uint16_t x4599 = 27612U;
	int16_t x4600 = INT16_MIN;
	volatile int64_t t100 = 1LL;

    t100 = ((x4597>>x4598)*(x4599!=x4600));

    if (t100 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x4649 = 3502282U;
	volatile uint8_t x4650 = 14U;
	int8_t x4651 = -22;
	static uint8_t x4652 = UINT8_MAX;
	static uint32_t t101 = 12U;

    t101 = ((x4649>>x4650)*(x4651!=x4652));

    if (t101 != 213U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x4701 = UINT16_MAX;
	static int16_t x4702 = 25;
	int32_t x4703 = INT32_MIN;
	volatile int16_t x4704 = -1;
	volatile int32_t t102 = -12;

    t102 = ((x4701>>x4702)*(x4703!=x4704));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x4713 = 7;
	int64_t x4714 = 0LL;
	int32_t x4716 = 3770000;
	int32_t t103 = 865391;

    t103 = ((x4713>>x4714)*(x4715!=x4716));

    if (t103 != 7) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x4732 = INT64_MAX;
	uint32_t t104 = UINT32_MAX;

    t104 = ((x4729>>x4730)*(x4731!=x4732));

    if (t104 != UINT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x4825 = UINT16_MAX;
	int8_t x4826 = 28;
	static int16_t x4827 = -3;
	int32_t t105 = -259020;

    t105 = ((x4825>>x4826)*(x4827!=x4828));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x4861 = 5U;
	static uint64_t x4862 = 1LLU;
	int8_t x4863 = 2;
	int8_t x4864 = 0;
	static int32_t t106 = -77976871;

    t106 = ((x4861>>x4862)*(x4863!=x4864));

    if (t106 != 2) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x4929 = 63;
	uint32_t x4930 = 3U;
	static int64_t x4931 = INT64_MIN;

    t107 = ((x4929>>x4930)*(x4931!=x4932));

    if (t107 != 7) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x4993 = 1;
	int64_t x4996 = INT64_MIN;
	static int32_t t108 = -148571194;

    t108 = ((x4993>>x4994)*(x4995!=x4996));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x5005 = UINT16_MAX;
	uint16_t x5006 = 22U;
	static uint32_t x5008 = 25701U;
	static int32_t t109 = -259859;

    t109 = ((x5005>>x5006)*(x5007!=x5008));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x5049 = INT16_MAX;
	uint16_t x5050 = 0U;
	int8_t x5051 = INT8_MIN;
	static uint32_t x5052 = 406U;
	int32_t t110 = -80;

    t110 = ((x5049>>x5050)*(x5051!=x5052));

    if (t110 != 32767) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x5130 = 1U;
	static int8_t x5131 = INT8_MIN;
	volatile uint64_t x5132 = UINT64_MAX;
	int32_t t111 = 1363;

    t111 = ((x5129>>x5130)*(x5131!=x5132));

    if (t111 != 132) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x5157 = INT64_MAX;
	int8_t x5159 = INT8_MIN;
	static volatile int32_t x5160 = -921140299;
	int64_t t112 = 3119682280474049LL;

    t112 = ((x5157>>x5158)*(x5159!=x5160));

    if (t112 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x5177 = UINT64_MAX;
	volatile int8_t x5178 = 31;
	int8_t x5179 = INT8_MIN;
	int8_t x5180 = -1;
	uint64_t t113 = 123LLU;

    t113 = ((x5177>>x5178)*(x5179!=x5180));

    if (t113 != 8589934591LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x5221 = 0U;
	volatile uint32_t x5222 = 1U;
	uint64_t x5223 = UINT64_MAX;
	static int32_t x5224 = INT32_MIN;
	volatile uint32_t t114 = 430978U;

    t114 = ((x5221>>x5222)*(x5223!=x5224));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x5237 = UINT32_MAX;
	uint8_t x5238 = 0U;
	uint32_t x5239 = UINT32_MAX;
	uint8_t x5240 = UINT8_MAX;
	uint32_t t115 = UINT32_MAX;

    t115 = ((x5237>>x5238)*(x5239!=x5240));

    if (t115 != UINT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x5241 = INT16_MAX;
	static uint16_t x5242 = 1U;
	static uint8_t x5243 = 3U;
	volatile uint8_t x5244 = UINT8_MAX;
	static volatile int32_t t116 = 7;

    t116 = ((x5241>>x5242)*(x5243!=x5244));

    if (t116 != 16383) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x5251 = INT32_MIN;
	uint16_t x5252 = UINT16_MAX;
	volatile int32_t t117 = -924;

    t117 = ((x5249>>x5250)*(x5251!=x5252));

    if (t117 != 15) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x5305 = 19U;
	static int32_t x5306 = 8;
	int16_t x5308 = 0;
	static int32_t t118 = -2720012;

    t118 = ((x5305>>x5306)*(x5307!=x5308));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x5381 = INT8_MAX;
	int32_t x5382 = 0;
	static int32_t x5383 = -1;
	static int32_t x5384 = 7447;
	volatile int32_t t119 = -50;

    t119 = ((x5381>>x5382)*(x5383!=x5384));

    if (t119 != 127) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x5385 = 1;
	int8_t x5386 = 1;
	volatile int32_t t120 = 688917867;

    t120 = ((x5385>>x5386)*(x5387!=x5388));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int16_t x5389 = 1427;
	int8_t x5392 = INT8_MIN;
	volatile int32_t t121 = -264509301;

    t121 = ((x5389>>x5390)*(x5391!=x5392));

    if (t121 != 178) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x5425 = 3071425807239529984LLU;
	int64_t x5426 = 3LL;
	static int32_t x5428 = INT32_MIN;
	uint64_t t122 = 2504399518386738LLU;

    t122 = ((x5425>>x5426)*(x5427!=x5428));

    if (t122 != 383928225904941248LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x5513 = 11489110LLU;
	static uint8_t x5514 = 0U;
	int64_t x5515 = -1LL;
	volatile int16_t x5516 = INT16_MIN;
	volatile uint64_t t123 = 68669194792296579LLU;

    t123 = ((x5513>>x5514)*(x5515!=x5516));

    if (t123 != 11489110LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x5517 = 0U;
	int16_t x5518 = 3;
	static volatile int32_t x5519 = INT32_MIN;
	int16_t x5520 = -1;
	volatile int32_t t124 = 224305413;

    t124 = ((x5517>>x5518)*(x5519!=x5520));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x5561 = INT16_MAX;
	uint64_t x5562 = 21LLU;
	int64_t x5564 = 69344887031815LL;
	int32_t t125 = 0;

    t125 = ((x5561>>x5562)*(x5563!=x5564));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x5574 = 1;
	int32_t x5575 = INT32_MIN;
	int8_t x5576 = -1;
	volatile int32_t t126 = 1273;

    t126 = ((x5573>>x5574)*(x5575!=x5576));

    if (t126 != 14) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x5597 = UINT16_MAX;
	uint32_t x5598 = 8U;
	static int64_t x5599 = INT64_MIN;
	int64_t x5600 = 24783148593LL;

    t127 = ((x5597>>x5598)*(x5599!=x5600));

    if (t127 != 255) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x5649 = UINT8_MAX;
	int8_t x5651 = 59;
	static int32_t t128 = 13881104;

    t128 = ((x5649>>x5650)*(x5651!=x5652));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x5673 = 1917693062U;
	volatile uint8_t x5674 = 15U;
	static volatile uint32_t x5675 = 736U;
	uint32_t t129 = 3235U;

    t129 = ((x5673>>x5674)*(x5675!=x5676));

    if (t129 != 58523U) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x5730 = 3U;
	int32_t x5731 = -1;
	int64_t x5732 = INT64_MAX;

    t130 = ((x5729>>x5730)*(x5731!=x5732));

    if (t130 != 1048613U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x5841 = 31U;
	uint8_t x5842 = 10U;
	static uint16_t x5843 = 21U;
	uint64_t x5844 = 622830393LLU;
	int32_t t131 = -5796122;

    t131 = ((x5841>>x5842)*(x5843!=x5844));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x5938 = 1;
	int64_t x5939 = 58703LL;
	int16_t x5940 = 14;
	static volatile int32_t t132 = -108;

    t132 = ((x5937>>x5938)*(x5939!=x5940));

    if (t132 != 50) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x5957 = INT16_MAX;
	int8_t x5958 = 3;
	uint32_t x5959 = UINT32_MAX;
	int8_t x5960 = INT8_MIN;
	volatile int32_t t133 = 0;

    t133 = ((x5957>>x5958)*(x5959!=x5960));

    if (t133 != 4095) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x5961 = 4756350306286200LLU;
	int16_t x5962 = 12;
	int16_t x5963 = INT16_MIN;
	static uint8_t x5964 = 0U;
	uint64_t t134 = 10748LLU;

    t134 = ((x5961>>x5962)*(x5963!=x5964));

    if (t134 != 1161218336495LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x5965 = 335886119LLU;
	uint32_t x5966 = 33U;
	uint64_t x5967 = UINT64_MAX;
	uint32_t x5968 = UINT32_MAX;
	volatile uint64_t t135 = 192555055733781LLU;

    t135 = ((x5965>>x5966)*(x5967!=x5968));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x6005 = 1U;
	uint8_t x6006 = 6U;
	uint64_t x6007 = 3LLU;
	int8_t x6008 = INT8_MIN;

    t136 = ((x6005>>x6006)*(x6007!=x6008));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x6017 = 19699U;
	volatile uint8_t x6018 = 14U;
	int32_t x6019 = -2010483;
	int8_t x6020 = 43;
	int32_t t137 = -8873;

    t137 = ((x6017>>x6018)*(x6019!=x6020));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x6033 = UINT16_MAX;
	int16_t x6034 = 1;
	int32_t x6035 = INT32_MIN;
	int16_t x6036 = INT16_MAX;
	volatile int32_t t138 = -272;

    t138 = ((x6033>>x6034)*(x6035!=x6036));

    if (t138 != 32767) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x6081 = INT16_MAX;
	uint8_t x6082 = 19U;
	volatile int8_t x6083 = INT8_MIN;
	int32_t t139 = -135;

    t139 = ((x6081>>x6082)*(x6083!=x6084));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x6121 = INT8_MAX;
	static volatile uint16_t x6122 = 20U;
	uint16_t x6123 = 3957U;
	int32_t x6124 = INT32_MIN;
	volatile int32_t t140 = 104977;

    t140 = ((x6121>>x6122)*(x6123!=x6124));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x6146 = 0LL;
	int8_t x6147 = INT8_MIN;
	static int16_t x6148 = -18;
	static volatile uint32_t t141 = 0U;

    t141 = ((x6145>>x6146)*(x6147!=x6148));

    if (t141 != 48U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x6173 = UINT64_MAX;
	int8_t x6175 = INT8_MAX;
	volatile int16_t x6176 = INT16_MIN;
	volatile uint64_t t142 = UINT64_MAX;

    t142 = ((x6173>>x6174)*(x6175!=x6176));

    if (t142 != UINT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x6225 = UINT32_MAX;
	volatile uint8_t x6226 = 24U;
	int32_t x6227 = 1522514;
	uint32_t t143 = 13U;

    t143 = ((x6225>>x6226)*(x6227!=x6228));

    if (t143 != 255U) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x6245 = 1U;
	uint8_t x6246 = 3U;
	int64_t x6247 = INT64_MIN;
	int16_t x6248 = 6183;
	static int32_t t144 = -75;

    t144 = ((x6245>>x6246)*(x6247!=x6248));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x6257 = 802U;
	uint8_t x6258 = 9U;
	int32_t t145 = -1;

    t145 = ((x6257>>x6258)*(x6259!=x6260));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x6282 = 1U;
	static int32_t x6283 = INT32_MIN;
	volatile int16_t x6284 = INT16_MAX;
	int32_t t146 = -4224866;

    t146 = ((x6281>>x6282)*(x6283!=x6284));

    if (t146 != 32767) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x6332 = INT8_MIN;
	static int64_t t147 = 891LL;

    t147 = ((x6329>>x6330)*(x6331!=x6332));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x6429 = 304LL;
	int16_t x6430 = 1;
	int8_t x6431 = -1;
	int8_t x6432 = -1;

    t148 = ((x6429>>x6430)*(x6431!=x6432));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x6462 = 3U;
	int32_t x6463 = 43;
	static int8_t x6464 = -1;
	volatile int32_t t149 = -10;

    t149 = ((x6461>>x6462)*(x6463!=x6464));

    if (t149 != 2) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x6493 = INT32_MAX;
	uint32_t x6494 = 1U;
	int8_t x6495 = INT8_MIN;
	volatile int32_t x6496 = 266468723;
	int32_t t150 = -5;

    t150 = ((x6493>>x6494)*(x6495!=x6496));

    if (t150 != 1073741823) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x6501 = INT64_MAX;
	uint32_t x6502 = 4U;
	int64_t t151 = 28978683LL;

    t151 = ((x6501>>x6502)*(x6503!=x6504));

    if (t151 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x6525 = 1679077U;
	volatile uint16_t x6526 = 2U;
	int16_t x6527 = -1;
	int64_t x6528 = INT64_MIN;

    t152 = ((x6525>>x6526)*(x6527!=x6528));

    if (t152 != 419769U) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x6573 = 1;
	uint8_t x6574 = 5U;
	int64_t x6575 = INT64_MIN;
	static volatile int32_t t153 = -3;

    t153 = ((x6573>>x6574)*(x6575!=x6576));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x6645 = 26LL;
	uint8_t x6646 = 44U;
	static uint8_t x6647 = 110U;
	static int64_t t154 = 203021218LL;

    t154 = ((x6645>>x6646)*(x6647!=x6648));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x6689 = 1U;
	int8_t x6691 = INT8_MIN;
	int16_t x6692 = 46;
	static volatile int32_t t155 = -1;

    t155 = ((x6689>>x6690)*(x6691!=x6692));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x6705 = 58205011092377LL;
	static int8_t x6706 = 26;
	int8_t x6708 = -1;

    t156 = ((x6705>>x6706)*(x6707!=x6708));

    if (t156 != 867322LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x6709 = UINT32_MAX;
	static int16_t x6710 = 1;
	static uint64_t x6712 = 486374781486559073LLU;
	uint32_t t157 = 1017032U;

    t157 = ((x6709>>x6710)*(x6711!=x6712));

    if (t157 != 2147483647U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x6773 = UINT64_MAX;
	uint64_t x6774 = 11LLU;
	int32_t x6775 = -1;
	volatile int8_t x6776 = -6;
	volatile uint64_t t158 = 227838910408688453LLU;

    t158 = ((x6773>>x6774)*(x6775!=x6776));

    if (t158 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x6857 = 1U;
	uint8_t x6858 = 0U;
	uint8_t x6860 = UINT8_MAX;
	volatile uint32_t t159 = 2U;

    t159 = ((x6857>>x6858)*(x6859!=x6860));

    if (t159 != 1U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x6886 = 7U;
	uint16_t x6887 = 3U;
	uint8_t x6888 = 0U;
	static volatile int32_t t160 = 44074883;

    t160 = ((x6885>>x6886)*(x6887!=x6888));

    if (t160 != 62) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x6897 = INT32_MAX;
	static int16_t x6899 = -6;
	volatile uint8_t x6900 = 1U;

    t161 = ((x6897>>x6898)*(x6899!=x6900));

    if (t161 != 4194303) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x6937 = UINT64_MAX;
	uint8_t x6938 = 8U;
	static int64_t x6939 = 44935896LL;
	static int32_t x6940 = -10;
	static volatile uint64_t t162 = 642631911976282LLU;

    t162 = ((x6937>>x6938)*(x6939!=x6940));

    if (t162 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x6941 = INT64_MAX;
	int8_t x6942 = 8;
	static int8_t x6943 = INT8_MIN;
	uint8_t x6944 = 2U;
	int64_t t163 = 1126LL;

    t163 = ((x6941>>x6942)*(x6943!=x6944));

    if (t163 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x6989 = 140U;
	static uint8_t x6990 = 7U;
	int64_t x6991 = 1LL;
	uint64_t x6992 = 1238683598025884649LLU;
	volatile int32_t t164 = -4278;

    t164 = ((x6989>>x6990)*(x6991!=x6992));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x7033 = UINT64_MAX;
	int16_t x7035 = -4;
	volatile uint8_t x7036 = UINT8_MAX;
	volatile uint64_t t165 = UINT64_MAX;

    t165 = ((x7033>>x7034)*(x7035!=x7036));

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x7061 = 15U;
	uint8_t x7062 = 6U;
	int16_t x7063 = INT16_MIN;
	volatile int16_t x7064 = -1;

    t166 = ((x7061>>x7062)*(x7063!=x7064));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x7069 = 106337424379840LL;
	static uint16_t x7070 = 40U;
	volatile int64_t t167 = -211772663816453LL;

    t167 = ((x7069>>x7070)*(x7071!=x7072));

    if (t167 != 96LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x7077 = 350623476383LL;
	int16_t x7078 = 1;
	int32_t x7079 = -1037082;
	int16_t x7080 = INT16_MAX;
	volatile int64_t t168 = 2164188655064LL;

    t168 = ((x7077>>x7078)*(x7079!=x7080));

    if (t168 != 175311738191LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x7097 = 54884LLU;
	static int16_t x7098 = 16;
	int8_t x7099 = INT8_MIN;
	static int64_t x7100 = -146081645107LL;

    t169 = ((x7097>>x7098)*(x7099!=x7100));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x7145 = 0U;
	static int16_t x7146 = 29;
	static uint32_t x7147 = UINT32_MAX;
	int64_t x7148 = -1LL;

    t170 = ((x7145>>x7146)*(x7147!=x7148));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x7157 = UINT32_MAX;
	volatile uint32_t x7158 = 7U;
	int8_t x7159 = -56;
	uint64_t x7160 = UINT64_MAX;
	uint32_t t171 = 5990U;

    t171 = ((x7157>>x7158)*(x7159!=x7160));

    if (t171 != 33554431U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x7193 = 4U;
	static uint8_t x7194 = 0U;
	int8_t x7195 = INT8_MAX;
	volatile int32_t t172 = 2;

    t172 = ((x7193>>x7194)*(x7195!=x7196));

    if (t172 != 4) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x7205 = 552U;
	uint64_t x7206 = 0LLU;
	int64_t x7207 = 152403212718LL;
	int8_t x7208 = INT8_MIN;
	int32_t t173 = 6617;

    t173 = ((x7205>>x7206)*(x7207!=x7208));

    if (t173 != 552) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x7261 = UINT64_MAX;
	static volatile int8_t x7262 = 3;
	uint8_t x7263 = UINT8_MAX;
	volatile uint8_t x7264 = 0U;
	volatile uint64_t t174 = 66823769206383LLU;

    t174 = ((x7261>>x7262)*(x7263!=x7264));

    if (t174 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x7349 = INT64_MAX;
	uint8_t x7350 = 1U;
	int64_t t175 = 16010638LL;

    t175 = ((x7349>>x7350)*(x7351!=x7352));

    if (t175 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x7357 = UINT32_MAX;
	uint16_t x7358 = 22U;
	int8_t x7359 = 33;
	volatile int64_t x7360 = INT64_MAX;

    t176 = ((x7357>>x7358)*(x7359!=x7360));

    if (t176 != 1023U) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x7363 = INT64_MIN;
	int64_t x7364 = INT64_MIN;
	int32_t t177 = -361545249;

    t177 = ((x7361>>x7362)*(x7363!=x7364));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x7558 = 5U;
	static uint8_t x7559 = 2U;
	volatile int64_t x7560 = -7243105511LL;
	volatile int32_t t178 = 45198;

    t178 = ((x7557>>x7558)*(x7559!=x7560));

    if (t178 != 7) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x7565 = UINT32_MAX;
	int16_t x7566 = 3;
	volatile int8_t x7567 = 0;
	int16_t x7568 = 4;

    t179 = ((x7565>>x7566)*(x7567!=x7568));

    if (t179 != 536870911U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x7621 = UINT8_MAX;
	int16_t x7622 = 25;
	static int8_t x7623 = 1;

    t180 = ((x7621>>x7622)*(x7623!=x7624));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x7669 = 3392258361769406LLU;
	uint16_t x7670 = 6U;
	int16_t x7671 = INT16_MIN;
	uint64_t x7672 = UINT64_MAX;
	uint64_t t181 = 82898LLU;

    t181 = ((x7669>>x7670)*(x7671!=x7672));

    if (t181 != 53004036902646LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x7733 = UINT32_MAX;
	static uint8_t x7734 = 2U;
	int32_t x7735 = INT32_MAX;
	static int8_t x7736 = INT8_MIN;
	volatile uint32_t t182 = 175378U;

    t182 = ((x7733>>x7734)*(x7735!=x7736));

    if (t182 != 1073741823U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x7777 = 0U;
	uint8_t x7778 = 1U;
	int64_t x7780 = -1LL;
	uint32_t t183 = 43112808U;

    t183 = ((x7777>>x7778)*(x7779!=x7780));

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x7917 = 20;
	volatile int8_t x7918 = 1;
	volatile int8_t x7919 = INT8_MIN;
	uint32_t x7920 = 34U;
	int32_t t184 = -158102;

    t184 = ((x7917>>x7918)*(x7919!=x7920));

    if (t184 != 10) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x8005 = 36670LLU;
	uint16_t x8006 = 13U;
	uint8_t x8008 = 1U;
	static volatile uint64_t t185 = 38781144667244922LLU;

    t185 = ((x8005>>x8006)*(x8007!=x8008));

    if (t185 != 4LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x8189 = 3801U;
	uint16_t x8190 = 15U;
	volatile uint32_t x8191 = UINT32_MAX;
	int16_t x8192 = -3;
	static volatile uint32_t t186 = 1717935U;

    t186 = ((x8189>>x8190)*(x8191!=x8192));

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x8229 = INT64_MAX;
	uint32_t x8230 = 5U;
	int64_t t187 = 14598638711159409LL;

    t187 = ((x8229>>x8230)*(x8231!=x8232));

    if (t187 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x8249 = 21;
	int8_t x8250 = 1;
	uint16_t x8252 = 1559U;
	volatile int32_t t188 = 1;

    t188 = ((x8249>>x8250)*(x8251!=x8252));

    if (t188 != 10) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x8269 = 1;
	uint64_t x8270 = 0LLU;
	volatile int8_t x8272 = -1;
	volatile int32_t t189 = 855;

    t189 = ((x8269>>x8270)*(x8271!=x8272));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x8501 = 1994234U;
	int8_t x8502 = 0;
	int32_t x8503 = -3010519;
	int8_t x8504 = INT8_MIN;
	volatile uint32_t t190 = 468U;

    t190 = ((x8501>>x8502)*(x8503!=x8504));

    if (t190 != 1994234U) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x8509 = INT16_MAX;
	int8_t x8511 = INT8_MIN;

    t191 = ((x8509>>x8510)*(x8511!=x8512));

    if (t191 != 32767) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x8533 = 12053573209885227LL;
	uint16_t x8534 = 13U;
	uint16_t x8535 = UINT16_MAX;
	uint32_t x8536 = 1U;
	int64_t t192 = -111327LL;

    t192 = ((x8533>>x8534)*(x8535!=x8536));

    if (t192 != 1471383448472LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint16_t x8561 = 172U;
	uint16_t x8562 = 4U;
	int16_t x8563 = INT16_MIN;
	int16_t x8564 = INT16_MAX;

    t193 = ((x8561>>x8562)*(x8563!=x8564));

    if (t193 != 10) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x8614 = 0;
	uint64_t x8616 = 2448675127527342333LLU;
	volatile uint64_t t194 = 6336506445524246134LLU;

    t194 = ((x8613>>x8614)*(x8615!=x8616));

    if (t194 != 173789266LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x8633 = 0;
	volatile uint8_t x8634 = 24U;
	int64_t x8636 = -193035595226LL;

    t195 = ((x8633>>x8634)*(x8635!=x8636));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x8637 = 7U;
	static int8_t x8638 = 7;
	int32_t x8639 = 1916;
	volatile int32_t x8640 = 0;
	static volatile int32_t t196 = 17;

    t196 = ((x8637>>x8638)*(x8639!=x8640));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x8726 = 0;
	static int64_t x8727 = -14402830943710854LL;
	int16_t x8728 = -13813;
	volatile int64_t t197 = INT64_MAX;

    t197 = ((x8725>>x8726)*(x8727!=x8728));

    if (t197 != INT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x8746 = 0;
	uint8_t x8747 = 1U;
	static int8_t x8748 = -1;
	volatile int64_t t198 = INT64_MAX;

    t198 = ((x8745>>x8746)*(x8747!=x8748));

    if (t198 != INT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x8790 = 0;
	uint8_t x8791 = 35U;
	static int64_t x8792 = -1LL;
	volatile uint64_t t199 = 749418190694908733LLU;

    t199 = ((x8789>>x8790)*(x8791!=x8792));

    if (t199 != 809937113LLU) { NG(); } else { ; }
	
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


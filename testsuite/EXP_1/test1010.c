
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

uint16_t x125 = UINT16_MAX;
uint8_t x126 = 0U;
int64_t x128 = INT64_MIN;
static int8_t x234 = 1;
volatile int32_t x316 = INT32_MAX;
uint8_t x371 = UINT8_MAX;
int16_t x372 = 1;
int8_t x381 = INT8_MAX;
volatile int64_t t5 = -439646155LL;
uint16_t x418 = 3U;
uint32_t x473 = UINT32_MAX;
uint64_t t7 = 89704426LLU;
int8_t x715 = -1;
int64_t x716 = -1LL;
volatile uint16_t x733 = 0U;
static int32_t x735 = INT32_MAX;
static int16_t x736 = INT16_MAX;
uint8_t x1081 = UINT8_MAX;
int32_t t11 = 392783;
int8_t x1375 = INT8_MIN;
uint16_t x1733 = 4314U;
volatile int64_t x1736 = INT64_MIN;
int64_t t14 = -3797677454980664023LL;
static uint64_t x1741 = UINT64_MAX;
uint16_t x1744 = 19173U;
volatile uint64_t t15 = 2123372994615882LLU;
int64_t x1805 = 211007LL;
int64_t t16 = 31LL;
int16_t x2060 = 2881;
uint32_t t17 = 867175U;
volatile uint16_t x2078 = 2U;
volatile uint32_t t18 = 992173691U;
static volatile uint64_t x2393 = 858525104257312LLU;
int16_t x2543 = INT16_MIN;
uint32_t x2544 = UINT32_MAX;
static volatile uint32_t x2593 = 1U;
int64_t x2595 = -137867250LL;
int16_t x3110 = 1;
uint64_t t27 = 305182139195958595LLU;
volatile uint64_t x3357 = UINT64_MAX;
int32_t x3360 = INT32_MIN;
volatile int16_t x3399 = INT16_MIN;
static volatile int16_t x3483 = INT16_MIN;
uint32_t t30 = 54072U;
int32_t x3487 = 458;
static volatile uint32_t x3511 = 1216482492U;
int64_t x3853 = 2487LL;
volatile int8_t x3855 = 0;
static int64_t x3911 = INT64_MIN;
static volatile uint16_t x3912 = UINT16_MAX;
int8_t x3933 = 1;
uint16_t x3994 = 0U;
uint32_t t39 = 7157U;
int64_t x4107 = -17913571141141LL;
static volatile uint64_t x4221 = 2LLU;
int64_t x4223 = -1LL;
int8_t x4403 = -1;
int16_t x4643 = -13863;
int32_t t51 = 411072643;
volatile uint64_t x4873 = UINT64_MAX;
int16_t x4875 = INT16_MAX;
int64_t x4876 = INT64_MIN;
uint8_t x4982 = 1U;
volatile uint64_t t55 = 463090937LLU;
static volatile int32_t x5283 = 3;
int8_t x5434 = 16;
uint64_t t57 = 1035501040661LLU;
uint32_t t58 = 75U;
static int8_t x5696 = INT8_MIN;
uint8_t x6308 = UINT8_MAX;
static volatile int32_t t64 = 6640121;
int32_t x6428 = INT32_MAX;
volatile uint32_t x6485 = 0U;
int32_t x6488 = INT32_MAX;
int8_t x6516 = -1;
volatile uint64_t t67 = 312924682122545LLU;
uint32_t t68 = 83U;
uint8_t x6649 = 1U;
volatile uint16_t x6778 = 0U;
volatile uint8_t x6838 = 1U;
static uint32_t x7011 = 779557U;
uint8_t x7012 = UINT8_MAX;
static volatile int16_t x7126 = 1;
static uint32_t t78 = 2033503U;
uint32_t x7342 = 1U;
int64_t t79 = 22457120452LL;
static uint8_t x7387 = UINT8_MAX;
int32_t x7439 = 459;
int32_t t81 = 341164;
int16_t x7443 = -393;
static int64_t x7465 = 1426LL;
uint32_t x7485 = 3U;
int16_t x7486 = 10;
volatile uint32_t x7487 = 160438505U;
uint32_t t85 = 113408U;
int16_t x7600 = INT16_MIN;
static volatile uint16_t x7711 = 5780U;
volatile uint64_t x7729 = 81248257647732LLU;
volatile uint64_t t90 = 373692687LLU;
int16_t x7750 = 7;
int64_t x7751 = INT64_MIN;
volatile uint64_t t91 = 240LLU;
int16_t x8366 = 1;
volatile uint32_t t94 = 293688U;
uint32_t x8497 = UINT32_MAX;
uint64_t t96 = 80330LLU;
uint16_t x8687 = 4081U;
uint16_t x8688 = UINT16_MAX;
volatile int32_t t97 = -50343665;
int8_t x8815 = 0;
int64_t t101 = 74992615566105919LL;
static uint8_t x9074 = 10U;
volatile uint16_t x9075 = 78U;
int8_t x9102 = 1;
int32_t x9103 = -246906;
static int64_t x9171 = INT64_MAX;
volatile uint64_t t105 = 2560404275569007LLU;
volatile uint32_t x9297 = UINT32_MAX;
uint16_t x9298 = 8U;
static uint8_t x9465 = UINT8_MAX;
int64_t x9484 = INT64_MAX;
static uint8_t x9569 = 39U;
volatile uint64_t x9570 = 22LLU;
uint32_t x9571 = 846U;
int64_t x9572 = INT64_MAX;
static uint32_t x9629 = UINT32_MAX;
volatile uint32_t t111 = 23624U;
int32_t x10071 = INT32_MIN;
uint32_t t114 = 96371065U;
int32_t x10104 = INT32_MAX;
int32_t t116 = 751;
static uint8_t x10415 = 17U;
uint16_t x10621 = 1315U;
static int16_t x10819 = INT16_MIN;
uint64_t t124 = 10LLU;
volatile uint8_t x11074 = 2U;
int8_t x11143 = -1;
uint8_t x11345 = UINT8_MAX;
int8_t x11525 = INT8_MAX;
uint64_t x11621 = 16684802LLU;
static uint64_t t135 = 2202451253LLU;
volatile uint32_t x11759 = 1U;
uint16_t x11810 = 3U;
uint64_t t139 = 13477023LLU;
uint16_t x12025 = 62U;
static uint64_t x12027 = 221258217616LLU;
volatile int32_t x12155 = -1;
volatile int8_t x12666 = 0;
volatile uint32_t t147 = 1469804U;
int32_t x12837 = 0;
int64_t x12960 = -512030613767084585LL;
static int64_t x13089 = 49179LL;
int32_t x13180 = INT32_MAX;
volatile uint32_t t153 = 1729404327U;
int16_t x13254 = 5;
int32_t x13255 = INT32_MIN;
uint64_t x13313 = 1731758354LLU;
uint8_t x13389 = 0U;
volatile uint16_t x13404 = 201U;
static int32_t x13415 = -2543;
uint8_t x13598 = 2U;
uint16_t x13599 = UINT16_MAX;
uint32_t x13788 = 15U;
volatile uint64_t x13937 = 593LLU;
static int16_t x13939 = -1;
int32_t x13940 = INT32_MIN;
volatile uint64_t t165 = 15LLU;
int16_t x13958 = 4;
int8_t x13960 = -1;
uint8_t x14020 = 0U;
static volatile int16_t x14148 = INT16_MAX;
uint64_t t169 = 507166997LLU;
int16_t x14370 = 0;
uint64_t x14421 = UINT64_MAX;
uint32_t x14483 = 129990742U;
uint32_t x14790 = 13U;
uint8_t x14791 = 2U;
int8_t x14854 = 1;
uint32_t x14855 = UINT32_MAX;
uint64_t x15061 = 484302LLU;
volatile uint64_t t179 = 13559937563006LLU;
int8_t x15243 = -1;
uint32_t x15245 = 9U;
int64_t x15248 = 36010967LL;
uint8_t x15410 = 60U;
int32_t x15412 = 25;
volatile uint64_t t183 = 24548587349LLU;
volatile uint8_t x15614 = 3U;
int8_t x15616 = -1;
int8_t x15731 = 1;
int8_t x15934 = 1;
int64_t x16131 = 1LL;
int64_t x16132 = -1LL;
int8_t x16234 = 4;
volatile uint64_t x16273 = 1753212872282021LLU;
uint8_t x16454 = 1U;
int8_t x16456 = INT8_MIN;
volatile uint64_t t193 = 38082LLU;
static volatile int32_t t194 = -1;
uint64_t x16533 = 4506731723809LLU;
uint32_t x16535 = 60241U;
volatile uint64_t t196 = 87473530LLU;
static int64_t x16643 = -1LL;
int16_t x16655 = -13;
volatile int8_t x16656 = -1;


void f0(void) {
    	int8_t x127 = -1;
	volatile int64_t t0 = -620822187LL;

    t0 = (((x125<<x126)*x127)-x128);

    if (t0 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x233 = UINT16_MAX;
	static uint16_t x235 = 9U;
	int32_t x236 = -338;
	volatile int32_t t1 = -96;

    t1 = (((x233<<x234)*x235)-x236);

    if (t1 != 1179968) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x257 = 14690LL;
	uint8_t x258 = 0U;
	uint8_t x259 = 1U;
	volatile uint16_t x260 = UINT16_MAX;
	volatile int64_t t2 = -126LL;

    t2 = (((x257<<x258)*x259)-x260);

    if (t2 != -50845LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x313 = 25118U;
	int8_t x314 = 7;
	volatile uint64_t x315 = UINT64_MAX;
	volatile uint64_t t3 = 1558401LLU;

    t3 = (((x313<<x314)*x315)-x316);

    if (t3 != 18446744071558852865LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x369 = 0;
	int32_t x370 = 0;
	volatile int32_t t4 = -870013;

    t4 = (((x369<<x370)*x371)-x372);

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x382 = 1;
	volatile int64_t x383 = -1LL;
	int64_t x384 = INT64_MIN;

    t5 = (((x381<<x382)*x383)-x384);

    if (t5 != 9223372036854775554LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x417 = UINT64_MAX;
	static int16_t x419 = -1;
	int64_t x420 = -407845LL;
	static volatile uint64_t t6 = 55388864943933LLU;

    t6 = (((x417<<x418)*x419)-x420);

    if (t6 != 407853LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x474 = 0U;
	uint64_t x475 = 1037202006029558851LLU;
	static uint8_t x476 = UINT8_MAX;

    t7 = (((x473<<x474)*x475)-x476);

    if (t7 != 11192010808555543230LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x713 = UINT32_MAX;
	volatile int32_t x714 = 0;
	int64_t t8 = 162562202904LL;

    t8 = (((x713<<x714)*x715)-x716);

    if (t8 != 2LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x734 = 24;
	int32_t t9 = -19024;

    t9 = (((x733<<x734)*x735)-x736);

    if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x913 = 36760U;
	uint8_t x914 = 31U;
	static int64_t x915 = -21863168651LL;
	volatile uint16_t x916 = 24U;
	volatile int64_t t10 = -303LL;

    t10 = (((x913<<x914)*x915)-x916);

    if (t10 != -24LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x1082 = 6;
	static volatile int8_t x1083 = -1;
	uint16_t x1084 = 161U;

    t11 = (((x1081<<x1082)*x1083)-x1084);

    if (t11 != -16481) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x1373 = UINT16_MAX;
	volatile int8_t x1374 = 1;
	int64_t x1376 = 503666515477LL;
	static int64_t t12 = -102551568LL;

    t12 = (((x1373<<x1374)*x1375)-x1376);

    if (t12 != -503683292437LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x1645 = 3U;
	uint8_t x1646 = 5U;
	int16_t x1647 = 885;
	int8_t x1648 = INT8_MIN;
	int32_t t13 = 22127;

    t13 = (((x1645<<x1646)*x1647)-x1648);

    if (t13 != 85088) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x1734 = 10U;
	volatile int16_t x1735 = -6;

    t14 = (((x1733<<x1734)*x1735)-x1736);

    if (t14 != 9223372036828270592LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x1742 = 1U;
	uint16_t x1743 = 8865U;

    t15 = (((x1741<<x1742)*x1743)-x1744);

    if (t15 != 18446744073709514713LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x1806 = 19U;
	int16_t x1807 = -1;
	uint16_t x1808 = 43U;

    t16 = (((x1805<<x1806)*x1807)-x1808);

    if (t16 != -110628438059LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x2057 = 8;
	uint16_t x2058 = 3U;
	uint32_t x2059 = 128649977U;

    t17 = (((x2057<<x2058)*x2059)-x2060);

    if (t17 != 3938628351U) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x2077 = 35189U;
	volatile int16_t x2079 = 349;
	static volatile int16_t x2080 = INT16_MIN;

    t18 = (((x2077<<x2078)*x2079)-x2080);

    if (t18 != 49156612U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x2325 = 7;
	uint8_t x2326 = 3U;
	uint64_t x2327 = 273567133857575LLU;
	int16_t x2328 = -1;
	uint64_t t19 = 58LLU;

    t19 = (((x2325<<x2326)*x2327)-x2328);

    if (t19 != 15319759496024201LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x2394 = 1U;
	static int8_t x2395 = INT8_MIN;
	int16_t x2396 = 9;
	volatile uint64_t t20 = 2850280083411LLU;

    t20 = (((x2393<<x2394)*x2395)-x2396);

    if (t20 != 18226961647019679735LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x2541 = INT16_MAX;
	volatile int8_t x2542 = 0;
	volatile uint32_t t21 = 109610U;

    t21 = (((x2541<<x2542)*x2543)-x2544);

    if (t21 != 3221258241U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x2594 = 22U;
	int64_t x2596 = -1LL;
	static int64_t t22 = -3019LL;

    t22 = (((x2593<<x2594)*x2595)-x2596);

    if (t22 != -578257158143999LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x2985 = 0U;
	uint8_t x2986 = 7U;
	uint16_t x2987 = 10U;
	volatile int64_t x2988 = -40112276038LL;
	int64_t t23 = -54320LL;

    t23 = (((x2985<<x2986)*x2987)-x2988);

    if (t23 != 40112276038LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x2997 = 4203887814139780LLU;
	uint8_t x2998 = 8U;
	volatile int8_t x2999 = 1;
	volatile uint32_t x3000 = 1952223551U;
	volatile uint64_t t24 = 28976119LLU;

    t24 = (((x2997<<x2998)*x2999)-x3000);

    if (t24 != 1076195278467560129LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x3109 = 38774402LLU;
	static uint64_t x3111 = 2567805LLU;
	volatile int16_t x3112 = 23;
	uint64_t t25 = 28883823769232342LLU;

    t25 = (((x3109<<x3110)*x3111)-x3112);

    if (t25 != 199130206655197LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x3201 = 10323338U;
	int32_t x3202 = 3;
	uint32_t x3203 = 7514U;
	uint16_t x3204 = 2043U;
	static volatile uint32_t t26 = 19402U;

    t26 = (((x3201<<x3202)*x3203)-x3204);

    if (t26 != 2081201189U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x3261 = UINT64_MAX;
	int8_t x3262 = 26;
	uint8_t x3263 = UINT8_MAX;
	int32_t x3264 = INT32_MIN;

    t27 = (((x3261<<x3262)*x3263)-x3264);

    if (t27 != 18446744058744274944LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x3358 = 0U;
	int16_t x3359 = INT16_MIN;
	volatile uint64_t t28 = 3202708667LLU;

    t28 = (((x3357<<x3358)*x3359)-x3360);

    if (t28 != 2147516416LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int16_t x3397 = 20;
	int32_t x3398 = 0;
	static int64_t x3400 = -221867066605647LL;
	int64_t t29 = 306423321682786188LL;

    t29 = (((x3397<<x3398)*x3399)-x3400);

    if (t29 != 221867065950287LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x3481 = 325581377U;
	static int8_t x3482 = 0;
	int32_t x3484 = -1;

    t30 = (((x3481<<x3482)*x3483)-x3484);

    if (t30 != 48201729U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x3485 = 2U;
	static volatile int8_t x3486 = 6;
	int32_t x3488 = 31;
	uint32_t t31 = 91U;

    t31 = (((x3485<<x3486)*x3487)-x3488);

    if (t31 != 58593U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x3509 = UINT64_MAX;
	uint64_t x3510 = 15LLU;
	int8_t x3512 = -27;
	uint64_t t32 = 2124897045LLU;

    t32 = (((x3509<<x3510)*x3511)-x3512);

    if (t32 != 18446704212011253787LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x3645 = 276523213387639360LLU;
	uint64_t x3646 = 1LLU;
	int16_t x3647 = INT16_MIN;
	int32_t x3648 = INT32_MAX;
	uint64_t t33 = 19315346702099128LLU;

    t33 = (((x3645<<x3646)*x3647)-x3648);

    if (t33 != 10924111882008657921LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x3854 = 1LLU;
	int16_t x3856 = -13414;
	volatile int64_t t34 = 8351413656569LL;

    t34 = (((x3853<<x3854)*x3855)-x3856);

    if (t34 != 13414LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x3909 = 2762965277977484439LLU;
	static int64_t x3910 = 1LL;
	volatile uint64_t t35 = 466518LLU;

    t35 = (((x3909<<x3910)*x3911)-x3912);

    if (t35 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x3934 = 1;
	int8_t x3935 = INT8_MAX;
	int8_t x3936 = INT8_MIN;
	int32_t t36 = -16950289;

    t36 = (((x3933<<x3934)*x3935)-x3936);

    if (t36 != 382) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x3993 = 7U;
	int16_t x3995 = -1;
	int32_t x3996 = INT32_MIN;
	int32_t t37 = -563;

    t37 = (((x3993<<x3994)*x3995)-x3996);

    if (t37 != 2147483641) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x4037 = 1U;
	static int16_t x4038 = 1;
	static uint8_t x4039 = 1U;
	int16_t x4040 = INT16_MAX;
	int32_t t38 = 108265;

    t38 = (((x4037<<x4038)*x4039)-x4040);

    if (t38 != -32765) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x4041 = 7614U;
	static volatile int8_t x4042 = 11;
	uint16_t x4043 = 82U;
	volatile int8_t x4044 = -11;

    t39 = (((x4041<<x4042)*x4043)-x4044);

    if (t39 != 1278664715U) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint64_t x4105 = 89711401076LLU;
	static uint32_t x4106 = 27U;
	volatile uint64_t x4108 = 273627469051257LLU;
	volatile uint64_t t40 = 6LLU;

    t40 = (((x4105<<x4106)*x4107)-x4108);

    if (t40 != 14092013196909480583LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x4222 = 26;
	int64_t x4224 = -1LL;
	static volatile uint64_t t41 = 20642157LLU;

    t41 = (((x4221<<x4222)*x4223)-x4224);

    if (t41 != 18446744073575333889LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x4269 = INT8_MAX;
	static uint8_t x4270 = 0U;
	uint32_t x4271 = 13U;
	int32_t x4272 = INT32_MIN;
	static volatile uint32_t t42 = 3779750U;

    t42 = (((x4269<<x4270)*x4271)-x4272);

    if (t42 != 2147485299U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x4289 = 7857LLU;
	uint8_t x4290 = 3U;
	int64_t x4291 = INT64_MIN;
	int8_t x4292 = INT8_MIN;
	volatile uint64_t t43 = 184988397LLU;

    t43 = (((x4289<<x4290)*x4291)-x4292);

    if (t43 != 128LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x4401 = 0U;
	static int8_t x4402 = 0;
	int8_t x4404 = -8;
	int32_t t44 = 27;

    t44 = (((x4401<<x4402)*x4403)-x4404);

    if (t44 != 8) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x4621 = 23701496LLU;
	volatile int16_t x4622 = 29;
	static int64_t x4623 = -1LL;
	uint32_t x4624 = 402862831U;
	uint64_t t45 = 97975117158749107LLU;

    t45 = (((x4621<<x4622)*x4623)-x4624);

    if (t45 != 18434019429533404433LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x4633 = UINT32_MAX;
	uint8_t x4634 = 4U;
	int32_t x4635 = 427;
	int64_t x4636 = INT64_MAX;
	int64_t t46 = -1200991867878082456LL;

    t46 = (((x4633<<x4634)*x4635)-x4636);

    if (t46 != -9223372032559815343LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x4641 = UINT8_MAX;
	uint8_t x4642 = 7U;
	int64_t x4644 = -1LL;
	int64_t t47 = -295LL;

    t47 = (((x4641<<x4642)*x4643)-x4644);

    if (t47 != -452488319LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x4717 = 1U;
	int8_t x4718 = 24;
	uint8_t x4719 = UINT8_MAX;
	volatile int16_t x4720 = INT16_MIN;
	uint32_t t48 = 1U;

    t48 = (((x4717<<x4718)*x4719)-x4720);

    if (t48 != 4278222848U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x4773 = UINT64_MAX;
	uint32_t x4774 = 1U;
	int64_t x4775 = -1LL;
	static uint8_t x4776 = UINT8_MAX;
	uint64_t t49 = 71625299385481511LLU;

    t49 = (((x4773<<x4774)*x4775)-x4776);

    if (t49 != 18446744073709551363LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x4797 = 1LLU;
	uint16_t x4798 = 2U;
	int32_t x4799 = INT32_MIN;
	int8_t x4800 = INT8_MIN;
	uint64_t t50 = 436828LLU;

    t50 = (((x4797<<x4798)*x4799)-x4800);

    if (t50 != 18446744065119617152LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x4821 = 0U;
	uint8_t x4822 = 27U;
	int8_t x4823 = -1;
	int16_t x4824 = -58;

    t51 = (((x4821<<x4822)*x4823)-x4824);

    if (t51 != 58) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x4874 = 3;
	uint64_t t52 = 1LLU;

    t52 = (((x4873<<x4874)*x4875)-x4876);

    if (t52 != 9223372036854513672LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x4909 = 3905208000389065438LLU;
	static uint8_t x4910 = 54U;
	int32_t x4911 = INT32_MIN;
	uint64_t x4912 = 50874723741944531LLU;
	volatile uint64_t t53 = 1LLU;

    t53 = (((x4909<<x4910)*x4911)-x4912);

    if (t53 != 18395869349967607085LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x4981 = UINT32_MAX;
	uint16_t x4983 = 191U;
	int32_t x4984 = INT32_MAX;
	uint32_t t54 = 39019U;

    t54 = (((x4981<<x4982)*x4983)-x4984);

    if (t54 != 2147483267U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x5245 = 15;
	static uint32_t x5246 = 27U;
	uint64_t x5247 = UINT64_MAX;
	int64_t x5248 = 657017495LL;

    t55 = (((x5245<<x5246)*x5247)-x5248);

    if (t55 != 18446744071039268201LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x5281 = INT8_MAX;
	int8_t x5282 = 2;
	uint32_t x5284 = 322371U;
	volatile uint32_t t56 = 0U;

    t56 = (((x5281<<x5282)*x5283)-x5284);

    if (t56 != 4294646449U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x5433 = UINT32_MAX;
	volatile uint64_t x5435 = UINT64_MAX;
	int32_t x5436 = -1;

    t57 = (((x5433<<x5434)*x5435)-x5436);

    if (t57 != 18446744069414649857LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x5513 = 19942U;
	uint16_t x5514 = 2U;
	uint16_t x5515 = UINT16_MAX;
	uint8_t x5516 = 0U;

    t58 = (((x5513<<x5514)*x5515)-x5516);

    if (t58 != 932628584U) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x5633 = INT8_MAX;
	int16_t x5634 = 0;
	volatile uint32_t x5635 = 20U;
	int8_t x5636 = INT8_MIN;
	volatile uint32_t t59 = 15U;

    t59 = (((x5633<<x5634)*x5635)-x5636);

    if (t59 != 2668U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x5637 = UINT64_MAX;
	volatile uint8_t x5638 = 11U;
	int32_t x5639 = INT32_MIN;
	int32_t x5640 = -1;
	uint64_t t60 = 154886843134LLU;

    t60 = (((x5637<<x5638)*x5639)-x5640);

    if (t60 != 4398046511105LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x5693 = UINT32_MAX;
	uint32_t x5694 = 0U;
	static int16_t x5695 = INT16_MIN;
	uint32_t t61 = 1673836U;

    t61 = (((x5693<<x5694)*x5695)-x5696);

    if (t61 != 32896U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x5993 = UINT32_MAX;
	volatile uint8_t x5994 = 20U;
	int32_t x5995 = -1;
	volatile int32_t x5996 = INT32_MIN;
	static volatile uint32_t t62 = 244913985U;

    t62 = (((x5993<<x5994)*x5995)-x5996);

    if (t62 != 2148532224U) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x6017 = UINT64_MAX;
	static uint8_t x6018 = 0U;
	static volatile int64_t x6019 = -1LL;
	volatile uint32_t x6020 = UINT32_MAX;
	uint64_t t63 = 700565167605277LLU;

    t63 = (((x6017<<x6018)*x6019)-x6020);

    if (t63 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x6305 = INT16_MAX;
	static uint8_t x6306 = 1U;
	int8_t x6307 = -7;

    t64 = (((x6305<<x6306)*x6307)-x6308);

    if (t64 != -458993) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x6425 = UINT64_MAX;
	static int8_t x6426 = 40;
	volatile int16_t x6427 = INT16_MAX;
	volatile uint64_t t65 = 10004838132241812LLU;

    t65 = (((x6425<<x6426)*x6427)-x6428);

    if (t65 != 18410716374054731777LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x6486 = 0;
	uint16_t x6487 = 2U;
	uint32_t t66 = 66173309U;

    t66 = (((x6485<<x6486)*x6487)-x6488);

    if (t66 != 2147483649U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x6513 = UINT64_MAX;
	uint32_t x6514 = 0U;
	static uint16_t x6515 = 12811U;

    t67 = (((x6513<<x6514)*x6515)-x6516);

    if (t67 != 18446744073709538806LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x6645 = UINT32_MAX;
	uint64_t x6646 = 12LLU;
	int8_t x6647 = INT8_MIN;
	volatile int16_t x6648 = INT16_MIN;

    t68 = (((x6645<<x6646)*x6647)-x6648);

    if (t68 != 557056U) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x6650 = 11U;
	uint64_t x6651 = UINT64_MAX;
	int32_t x6652 = INT32_MIN;
	uint64_t t69 = 795664LLU;

    t69 = (((x6649<<x6650)*x6651)-x6652);

    if (t69 != 2147481600LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x6665 = 124U;
	int32_t x6666 = 0;
	static uint16_t x6667 = 533U;
	int8_t x6668 = 0;
	volatile int32_t t70 = 3;

    t70 = (((x6665<<x6666)*x6667)-x6668);

    if (t70 != 66092) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x6677 = 17249766677755LLU;
	int16_t x6678 = 3;
	int64_t x6679 = INT64_MIN;
	int16_t x6680 = INT16_MIN;
	uint64_t t71 = 3433750309672594709LLU;

    t71 = (((x6677<<x6678)*x6679)-x6680);

    if (t71 != 32768LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x6777 = INT16_MAX;
	int16_t x6779 = 1;
	uint16_t x6780 = UINT16_MAX;
	volatile int32_t t72 = 4282387;

    t72 = (((x6777<<x6778)*x6779)-x6780);

    if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x6837 = 395969427U;
	int16_t x6839 = INT16_MAX;
	int64_t x6840 = 12LL;
	volatile int64_t t73 = -5621LL;

    t73 = (((x6837<<x6838)*x6839)-x6840);

    if (t73 != 3562993870LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x6957 = INT8_MAX;
	uint8_t x6958 = 1U;
	int64_t x6959 = -1LL;
	uint64_t x6960 = 303LLU;
	volatile uint64_t t74 = 3095348LLU;

    t74 = (((x6957<<x6958)*x6959)-x6960);

    if (t74 != 18446744073709551059LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x7009 = UINT64_MAX;
	int16_t x7010 = 4;
	volatile uint64_t t75 = 6030LLU;

    t75 = (((x7009<<x7010)*x7011)-x7012);

    if (t75 != 18446744073697078449LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x7053 = UINT8_MAX;
	uint64_t x7054 = 1LLU;
	int16_t x7055 = 0;
	uint32_t x7056 = 37084U;
	static volatile uint32_t t76 = 1012913410U;

    t76 = (((x7053<<x7054)*x7055)-x7056);

    if (t76 != 4294930212U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x7105 = UINT16_MAX;
	int32_t x7106 = 0;
	static volatile uint16_t x7107 = 81U;
	int32_t x7108 = 22955;
	volatile int32_t t77 = 206505;

    t77 = (((x7105<<x7106)*x7107)-x7108);

    if (t77 != 5285380) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x7125 = 817U;
	static int32_t x7127 = INT32_MIN;
	volatile int8_t x7128 = 6;

    t78 = (((x7125<<x7126)*x7127)-x7128);

    if (t78 != 4294967290U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x7341 = INT8_MAX;
	int64_t x7343 = 9834949501LL;
	int16_t x7344 = INT16_MIN;

    t79 = (((x7341<<x7342)*x7343)-x7344);

    if (t79 != 2498077206022LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x7385 = 1U;
	static uint8_t x7386 = 2U;
	int32_t x7388 = 52;
	static int32_t t80 = 21;

    t80 = (((x7385<<x7386)*x7387)-x7388);

    if (t80 != 968) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x7437 = 3U;
	uint8_t x7438 = 0U;
	int8_t x7440 = INT8_MAX;

    t81 = (((x7437<<x7438)*x7439)-x7440);

    if (t81 != 1250) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x7441 = 157U;
	uint8_t x7442 = 8U;
	int64_t x7444 = -42212850LL;
	volatile int64_t t82 = -4011686719734572397LL;

    t82 = (((x7441<<x7442)*x7443)-x7444);

    if (t82 != 26417394LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x7466 = 1;
	static int64_t x7467 = 33789LL;
	int32_t x7468 = INT32_MIN;
	int64_t t83 = 10891985853LL;

    t83 = (((x7465<<x7466)*x7467)-x7468);

    if (t83 != 2243849876LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x7481 = 521083LLU;
	int8_t x7482 = 0;
	static volatile int16_t x7483 = 1;
	int64_t x7484 = -250917485120864LL;
	uint64_t t84 = 12035LLU;

    t84 = (((x7481<<x7482)*x7483)-x7484);

    if (t84 != 250917485641947LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x7488 = -1;

    t85 = (((x7485<<x7486)*x7487)-x7488);

    if (t85 != 3240815617U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x7597 = 54U;
	static uint32_t x7598 = 0U;
	int16_t x7599 = INT16_MIN;
	uint32_t t86 = 1304872548U;

    t86 = (((x7597<<x7598)*x7599)-x7600);

    if (t86 != 4293230592U) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x7689 = 1879629U;
	uint16_t x7690 = 1U;
	static int8_t x7691 = 0;
	uint32_t x7692 = 1836378620U;
	static uint32_t t87 = 17U;

    t87 = (((x7689<<x7690)*x7691)-x7692);

    if (t87 != 2458588676U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x7701 = 141U;
	static int32_t x7702 = 5;
	volatile int64_t x7703 = 7648LL;
	static int16_t x7704 = 33;
	int64_t t88 = 14571213016202469LL;

    t88 = (((x7701<<x7702)*x7703)-x7704);

    if (t88 != 34507743LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x7709 = 0;
	volatile uint8_t x7710 = 7U;
	volatile uint8_t x7712 = 31U;
	static int32_t t89 = 15728;

    t89 = (((x7709<<x7710)*x7711)-x7712);

    if (t89 != -31) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x7730 = 4U;
	int8_t x7731 = INT8_MAX;
	volatile uint16_t x7732 = 6033U;

    t90 = (((x7729<<x7730)*x7731)-x7732);

    if (t90 != 165096459540185391LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x7749 = 6118703977LLU;
	static int32_t x7752 = -1;

    t91 = (((x7749<<x7750)*x7751)-x7752);

    if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x7833 = 46028586U;
	volatile uint32_t x7834 = 0U;
	volatile int32_t x7835 = INT32_MIN;
	volatile int32_t x7836 = -1;
	uint32_t t92 = 359242U;

    t92 = (((x7833<<x7834)*x7835)-x7836);

    if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x8233 = UINT8_MAX;
	int16_t x8234 = 0;
	int8_t x8235 = INT8_MIN;
	static int8_t x8236 = INT8_MIN;
	int32_t t93 = -1489;

    t93 = (((x8233<<x8234)*x8235)-x8236);

    if (t93 != -32512) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x8365 = 2839U;
	volatile int16_t x8367 = -1;
	volatile int8_t x8368 = -1;

    t94 = (((x8365<<x8366)*x8367)-x8368);

    if (t94 != 4294961619U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x8498 = 13U;
	static volatile int8_t x8499 = INT8_MIN;
	uint8_t x8500 = 1U;
	static volatile uint32_t t95 = 73197U;

    t95 = (((x8497<<x8498)*x8499)-x8500);

    if (t95 != 1048575U) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x8509 = UINT64_MAX;
	volatile int8_t x8510 = 40;
	uint64_t x8511 = 4LLU;
	int32_t x8512 = INT32_MAX;

    t96 = (((x8509<<x8510)*x8511)-x8512);

    if (t96 != 18446739673515556865LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x8685 = 0;
	uint8_t x8686 = 1U;

    t97 = (((x8685<<x8686)*x8687)-x8688);

    if (t97 != -65535) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x8761 = 108514LLU;
	static uint8_t x8762 = 14U;
	int32_t x8763 = INT32_MIN;
	volatile int64_t x8764 = INT64_MIN;
	volatile uint64_t t98 = 2608502645LLU;

    t98 = (((x8761<<x8762)*x8763)-x8764);

    if (t98 != 5405375084007260160LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x8813 = 1;
	static int64_t x8814 = 2LL;
	volatile int8_t x8816 = 1;
	int32_t t99 = 1799928;

    t99 = (((x8813<<x8814)*x8815)-x8816);

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x8869 = 24988U;
	int8_t x8870 = 7;
	int64_t x8871 = -1LL;
	int32_t x8872 = INT32_MAX;
	static int64_t t100 = 0LL;

    t100 = (((x8869<<x8870)*x8871)-x8872);

    if (t100 != -2150682111LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x8925 = 1001;
	int16_t x8926 = 0;
	static uint16_t x8927 = 736U;
	static int64_t x8928 = 30356LL;

    t101 = (((x8925<<x8926)*x8927)-x8928);

    if (t101 != 706380LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x9073 = 4280349LLU;
	volatile uint8_t x9076 = 28U;
	static uint64_t t102 = 8057LLU;

    t102 = (((x9073<<x9074)*x9075)-x9076);

    if (t102 != 341880035300LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x9077 = 2174310818806330792LLU;
	static volatile int8_t x9078 = 0;
	volatile uint16_t x9079 = 1652U;
	uint8_t x9080 = UINT8_MAX;
	static uint64_t t103 = 6539593899107897795LLU;

    t103 = (((x9077<<x9078)*x9079)-x9080);

    if (t103 != 13293122368405454625LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x9101 = INT8_MAX;
	volatile int16_t x9104 = INT16_MIN;
	volatile int32_t t104 = 2567980;

    t104 = (((x9101<<x9102)*x9103)-x9104);

    if (t104 != -62681356) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x9169 = 499717365522704620LLU;
	static uint8_t x9170 = 21U;
	uint32_t x9172 = UINT32_MAX;

    t105 = (((x9169<<x9170)*x9171)-x9172);

    if (t105 != 13151774911712198657LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x9299 = INT16_MIN;
	int64_t x9300 = 3300LL;
	volatile int64_t t106 = 64747722202301LL;

    t106 = (((x9297<<x9298)*x9299)-x9300);

    if (t106 != 8385308LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x9466 = 0U;
	int64_t x9467 = -1LL;
	uint16_t x9468 = 28553U;
	int64_t t107 = -23998LL;

    t107 = (((x9465<<x9466)*x9467)-x9468);

    if (t107 != -28808LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x9481 = 16498U;
	uint8_t x9482 = 0U;
	int8_t x9483 = 0;
	int64_t t108 = 0LL;

    t108 = (((x9481<<x9482)*x9483)-x9484);

    if (t108 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t t109 = 722129646294440LL;

    t109 = (((x9569<<x9570)*x9571)-x9572);

    if (t109 != -9223372035906863103LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x9601 = 14U;
	int8_t x9602 = 1;
	int16_t x9603 = INT16_MIN;
	uint8_t x9604 = 37U;
	static volatile int32_t t110 = 6877441;

    t110 = (((x9601<<x9602)*x9603)-x9604);

    if (t110 != -917541) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x9630 = 0U;
	int8_t x9631 = INT8_MIN;
	volatile uint16_t x9632 = UINT16_MAX;

    t111 = (((x9629<<x9630)*x9631)-x9632);

    if (t111 != 4294901889U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x9785 = UINT8_MAX;
	int8_t x9786 = 1;
	volatile int8_t x9787 = 24;
	volatile int16_t x9788 = -1;
	int32_t t112 = -894;

    t112 = (((x9785<<x9786)*x9787)-x9788);

    if (t112 != 12241) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x9929 = INT16_MAX;
	uint8_t x9930 = 0U;
	static uint16_t x9931 = 6933U;
	int16_t x9932 = -1;
	int32_t t113 = 233;

    t113 = (((x9929<<x9930)*x9931)-x9932);

    if (t113 != 227173612) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x10069 = 6750192U;
	volatile uint16_t x10070 = 0U;
	int32_t x10072 = INT32_MAX;

    t114 = (((x10069<<x10070)*x10071)-x10072);

    if (t114 != 2147483649U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x10101 = UINT64_MAX;
	static uint64_t x10102 = 9LLU;
	int8_t x10103 = INT8_MIN;
	uint64_t t115 = 582002LLU;

    t115 = (((x10101<<x10102)*x10103)-x10104);

    if (t115 != 18446744071562133505LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x10169 = INT8_MAX;
	uint8_t x10170 = 5U;
	int8_t x10171 = -34;
	int8_t x10172 = INT8_MIN;

    t116 = (((x10169<<x10170)*x10171)-x10172);

    if (t116 != -138048) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x10185 = 43200272LLU;
	int8_t x10186 = 3;
	int8_t x10187 = -22;
	uint16_t x10188 = 1U;
	static uint64_t t117 = 717363491233545293LLU;

    t117 = (((x10185<<x10186)*x10187)-x10188);

    if (t117 != 18446744066106303743LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x10233 = 0;
	uint8_t x10234 = 3U;
	static int64_t x10235 = INT64_MIN;
	static int16_t x10236 = 1;
	volatile int64_t t118 = -9201711965637LL;

    t118 = (((x10233<<x10234)*x10235)-x10236);

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x10357 = 3110;
	static volatile uint64_t x10358 = 0LLU;
	uint64_t x10359 = 1032191080LLU;
	uint64_t x10360 = 36026287710893LLU;
	static volatile uint64_t t119 = 451LLU;

    t119 = (((x10357<<x10358)*x10359)-x10360);

    if (t119 != 18446711257536099523LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x10413 = 33463405U;
	int16_t x10414 = 3;
	int32_t x10416 = INT32_MIN;
	volatile uint32_t t120 = 1U;

    t120 = (((x10413<<x10414)*x10415)-x10416);

    if (t120 != 2403539432U) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x10477 = INT8_MAX;
	uint16_t x10478 = 1U;
	volatile uint64_t x10479 = 13156431LLU;
	static int8_t x10480 = INT8_MAX;
	static uint64_t t121 = 4019416280366674LLU;

    t121 = (((x10477<<x10478)*x10479)-x10480);

    if (t121 != 3341733347LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x10622 = 6U;
	volatile int32_t x10623 = 0;
	uint64_t x10624 = 68471402430106LLU;
	uint64_t t122 = 2025629504553LLU;

    t122 = (((x10621<<x10622)*x10623)-x10624);

    if (t122 != 18446675602307121510LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x10677 = 59;
	static int8_t x10678 = 0;
	static int16_t x10679 = INT16_MAX;
	volatile int16_t x10680 = INT16_MIN;
	static volatile int32_t t123 = -27;

    t123 = (((x10677<<x10678)*x10679)-x10680);

    if (t123 != 1966021) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x10817 = UINT64_MAX;
	int16_t x10818 = 12;
	uint16_t x10820 = UINT16_MAX;

    t124 = (((x10817<<x10818)*x10819)-x10820);

    if (t124 != 134152193LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x10869 = 16282217U;
	uint16_t x10870 = 5U;
	static int16_t x10871 = 6786;
	static int32_t x10872 = INT32_MIN;
	uint32_t t125 = 251412519U;

    t125 = (((x10869<<x10870)*x10871)-x10872);

    if (t125 != 3105385024U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x10993 = 0U;
	static int16_t x10994 = 13;
	uint8_t x10995 = 64U;
	volatile int16_t x10996 = -1;
	static int32_t t126 = 0;

    t126 = (((x10993<<x10994)*x10995)-x10996);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x11045 = INT16_MAX;
	int8_t x11046 = 1;
	int16_t x11047 = INT16_MIN;
	uint16_t x11048 = UINT16_MAX;
	static int32_t t127 = -35895;

    t127 = (((x11045<<x11046)*x11047)-x11048);

    if (t127 != -2147483647) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x11073 = 22102U;
	uint32_t x11075 = 17872U;
	int8_t x11076 = -1;
	uint32_t t128 = 2088348668U;

    t128 = (((x11073<<x11074)*x11075)-x11076);

    if (t128 != 1580027777U) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x11141 = 14;
	volatile int32_t x11142 = 0;
	int8_t x11144 = -2;
	int32_t t129 = 216624;

    t129 = (((x11141<<x11142)*x11143)-x11144);

    if (t129 != -12) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x11346 = 18;
	uint32_t x11347 = UINT32_MAX;
	int8_t x11348 = INT8_MIN;
	volatile uint32_t t130 = 61679U;

    t130 = (((x11345<<x11346)*x11347)-x11348);

    if (t130 != 4228120704U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x11397 = UINT64_MAX;
	uint8_t x11398 = 1U;
	int64_t x11399 = -14367677115334LL;
	uint16_t x11400 = 4782U;
	volatile uint64_t t131 = 6306904353542044LLU;

    t131 = (((x11397<<x11398)*x11399)-x11400);

    if (t131 != 28735354225886LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x11461 = UINT8_MAX;
	int8_t x11462 = 0;
	int16_t x11463 = INT16_MIN;
	int16_t x11464 = INT16_MIN;
	int32_t t132 = 13400079;

    t132 = (((x11461<<x11462)*x11463)-x11464);

    if (t132 != -8323072) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x11481 = 64U;
	uint16_t x11482 = 9U;
	uint32_t x11483 = 8195U;
	static int8_t x11484 = -16;
	volatile uint32_t t133 = 55379828U;

    t133 = (((x11481<<x11482)*x11483)-x11484);

    if (t133 != 268533776U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x11526 = 0U;
	int8_t x11527 = INT8_MIN;
	uint64_t x11528 = 712LLU;
	uint64_t t134 = 1550516033046LLU;

    t134 = (((x11525<<x11526)*x11527)-x11528);

    if (t134 != 18446744073709534648LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x11622 = 12U;
	static int8_t x11623 = -15;
	static volatile uint64_t x11624 = UINT64_MAX;

    t135 = (((x11621<<x11622)*x11623)-x11624);

    if (t135 != 18446743048595316737LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x11757 = INT16_MAX;
	uint8_t x11758 = 0U;
	static volatile uint32_t x11760 = 154U;
	volatile uint32_t t136 = 4773207U;

    t136 = (((x11757<<x11758)*x11759)-x11760);

    if (t136 != 32613U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x11809 = 1U;
	int32_t x11811 = INT32_MIN;
	int64_t x11812 = 515683LL;
	volatile int64_t t137 = 5533LL;

    t137 = (((x11809<<x11810)*x11811)-x11812);

    if (t137 != -515683LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x11813 = UINT64_MAX;
	uint8_t x11814 = 1U;
	int64_t x11815 = 1277581876LL;
	uint64_t x11816 = 181142126811LLU;
	volatile uint64_t t138 = 2039902209LLU;

    t138 = (((x11813<<x11814)*x11815)-x11816);

    if (t138 != 18446743890012261053LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x11957 = 245LLU;
	int8_t x11958 = 1;
	static int8_t x11959 = INT8_MIN;
	int16_t x11960 = INT16_MIN;

    t139 = (((x11957<<x11958)*x11959)-x11960);

    if (t139 != 18446744073709521664LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint32_t x12026 = 5U;
	int16_t x12028 = -1;
	uint64_t t140 = 22LLU;

    t140 = (((x12025<<x12026)*x12027)-x12028);

    if (t140 != 438976303750145LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x12153 = 3U;
	int32_t x12154 = 3;
	int32_t x12156 = INT32_MIN;
	uint32_t t141 = 2952U;

    t141 = (((x12153<<x12154)*x12155)-x12156);

    if (t141 != 2147483624U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x12337 = 45095983504LL;
	int8_t x12338 = 7;
	static int8_t x12339 = -1;
	volatile uint8_t x12340 = 21U;
	volatile int64_t t142 = -2440LL;

    t142 = (((x12337<<x12338)*x12339)-x12340);

    if (t142 != -5772285888533LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x12489 = 217U;
	uint8_t x12490 = 24U;
	int8_t x12491 = INT8_MIN;
	uint8_t x12492 = UINT8_MAX;
	uint32_t t143 = 13U;

    t143 = (((x12489<<x12490)*x12491)-x12492);

    if (t143 != 2147483393U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x12581 = 2U;
	volatile int16_t x12582 = 3;
	volatile uint8_t x12583 = 2U;
	int8_t x12584 = INT8_MAX;
	int32_t t144 = 353;

    t144 = (((x12581<<x12582)*x12583)-x12584);

    if (t144 != -95) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x12625 = 63;
	volatile uint32_t x12626 = 2U;
	volatile int16_t x12627 = -6522;
	uint8_t x12628 = 14U;
	volatile int32_t t145 = 5738;

    t145 = (((x12625<<x12626)*x12627)-x12628);

    if (t145 != -1643558) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x12665 = 42;
	volatile int16_t x12667 = INT16_MIN;
	static int8_t x12668 = -39;
	volatile int32_t t146 = 210;

    t146 = (((x12665<<x12666)*x12667)-x12668);

    if (t146 != -1376217) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x12673 = 521783185U;
	static int8_t x12674 = 2;
	int8_t x12675 = INT8_MIN;
	static int16_t x12676 = -29;

    t147 = (((x12673<<x12674)*x12675)-x12676);

    if (t147 != 3429948957U) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x12829 = UINT64_MAX;
	static volatile int8_t x12830 = 18;
	volatile int32_t x12831 = INT32_MAX;
	int64_t x12832 = -1LL;
	volatile uint64_t t148 = 6468LLU;

    t148 = (((x12829<<x12830)*x12831)-x12832);

    if (t148 != 18446181123756392449LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x12838 = 0;
	int32_t x12839 = 870;
	static volatile uint32_t x12840 = 2105816U;
	volatile uint32_t t149 = 1U;

    t149 = (((x12837<<x12838)*x12839)-x12840);

    if (t149 != 4292861480U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x12957 = 209;
	uint8_t x12958 = 2U;
	int16_t x12959 = INT16_MIN;
	volatile int64_t t150 = -5LL;

    t150 = (((x12957<<x12958)*x12959)-x12960);

    if (t150 != 512030613739690537LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x13029 = 4839LLU;
	int32_t x13030 = 0;
	static int16_t x13031 = 27;
	int16_t x13032 = -313;
	static volatile uint64_t t151 = 37369146530LLU;

    t151 = (((x13029<<x13030)*x13031)-x13032);

    if (t151 != 130966LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x13090 = 14U;
	int8_t x13091 = -1;
	int16_t x13092 = INT16_MIN;
	int64_t t152 = 274571LL;

    t152 = (((x13089<<x13090)*x13091)-x13092);

    if (t152 != -805715968LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x13177 = 371U;
	int8_t x13178 = 2;
	int16_t x13179 = INT16_MAX;

    t153 = (((x13177<<x13178)*x13179)-x13180);

    if (t153 != 2196109877U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x13253 = 249206U;
	uint32_t x13256 = UINT32_MAX;
	uint32_t t154 = 31335U;

    t154 = (((x13253<<x13254)*x13255)-x13256);

    if (t154 != 1U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x13301 = 37U;
	int16_t x13302 = 0;
	static uint64_t x13303 = 1150862502LLU;
	static volatile int32_t x13304 = -831020;
	volatile uint64_t t155 = 60868938235LLU;

    t155 = (((x13301<<x13302)*x13303)-x13304);

    if (t155 != 42582743594LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x13314 = 62;
	uint16_t x13315 = 270U;
	int32_t x13316 = -1;
	uint64_t t156 = 7LLU;

    t156 = (((x13313<<x13314)*x13315)-x13316);

    if (t156 != 1LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x13390 = 11U;
	volatile uint16_t x13391 = 27U;
	int8_t x13392 = -1;
	volatile int32_t t157 = 1;

    t157 = (((x13389<<x13390)*x13391)-x13392);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x13401 = 36767751;
	static int32_t x13402 = 2;
	int16_t x13403 = -1;
	volatile int32_t t158 = -61646;

    t158 = (((x13401<<x13402)*x13403)-x13404);

    if (t158 != -147071205) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x13413 = 299862554U;
	volatile int32_t x13414 = 3;
	uint32_t x13416 = 32038524U;
	static uint32_t t159 = 64303U;

    t159 = (((x13413<<x13414)*x13415)-x13416);

    if (t159 != 2712690516U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x13541 = UINT32_MAX;
	uint64_t x13542 = 0LLU;
	uint32_t x13543 = UINT32_MAX;
	uint64_t x13544 = 804395LLU;
	volatile uint64_t t160 = 7509455LLU;

    t160 = (((x13541<<x13542)*x13543)-x13544);

    if (t160 != 18446744073708747222LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x13597 = 539758413LLU;
	volatile uint16_t x13600 = UINT16_MAX;
	uint64_t t161 = 449011778831895791LLU;

    t161 = (((x13597<<x13598)*x13599)-x13600);

    if (t161 != 141492270318285LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x13629 = 109458057LLU;
	int8_t x13630 = 0;
	uint8_t x13631 = 0U;
	volatile int64_t x13632 = 35312593537LL;
	volatile uint64_t t162 = 71458LLU;

    t162 = (((x13629<<x13630)*x13631)-x13632);

    if (t162 != 18446744038396958079LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x13785 = 24LL;
	uint64_t x13786 = 3LLU;
	int32_t x13787 = -47023;
	volatile int64_t t163 = 104893445838032977LL;

    t163 = (((x13785<<x13786)*x13787)-x13788);

    if (t163 != -9028431LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x13938 = 0U;
	uint64_t t164 = 1551196248LLU;

    t164 = (((x13937<<x13938)*x13939)-x13940);

    if (t164 != 2147483055LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x13953 = 24LL;
	volatile uint16_t x13954 = 1U;
	int16_t x13955 = INT16_MIN;
	uint64_t x13956 = 31LLU;

    t165 = (((x13953<<x13954)*x13955)-x13956);

    if (t165 != 18446744073707978721LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x13957 = 925517U;
	static uint32_t x13959 = 372U;
	volatile uint32_t t166 = 2887108U;

    t166 = (((x13957<<x13958)*x13959)-x13960);

    if (t166 != 1213709889U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x14017 = 184U;
	int64_t x14018 = 0LL;
	uint32_t x14019 = UINT32_MAX;
	volatile uint32_t t167 = 137319U;

    t167 = (((x14017<<x14018)*x14019)-x14020);

    if (t167 != 4294967112U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x14129 = 38818U;
	int8_t x14130 = 26;
	static int16_t x14131 = -10340;
	int32_t x14132 = INT32_MAX;
	volatile uint32_t t168 = 2049U;

    t168 = (((x14129<<x14130)*x14131)-x14132);

    if (t168 != 1610612737U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x14145 = 1702419671386LLU;
	static uint64_t x14146 = 15LLU;
	int32_t x14147 = INT32_MAX;

    t169 = (((x14145<<x14146)*x14147)-x14148);

    if (t169 != 12218353684141211649LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x14317 = 655;
	int8_t x14318 = 1;
	volatile int8_t x14319 = -1;
	int16_t x14320 = INT16_MAX;
	volatile int32_t t170 = 47476;

    t170 = (((x14317<<x14318)*x14319)-x14320);

    if (t170 != -34077) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint32_t x14321 = UINT32_MAX;
	uint8_t x14322 = 14U;
	volatile int64_t x14323 = 7695545LL;
	int32_t x14324 = 3;
	int64_t t171 = -1120030329980087508LL;

    t171 = (((x14321<<x14322)*x14323)-x14324);

    if (t171 != 33051988016087037LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x14369 = 1640898LL;
	static int8_t x14371 = INT8_MAX;
	uint32_t x14372 = UINT32_MAX;
	int64_t t172 = -263491840LL;

    t172 = (((x14369<<x14370)*x14371)-x14372);

    if (t172 != -4086573249LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x14377 = 1075017878U;
	int8_t x14378 = 3;
	uint8_t x14379 = 10U;
	int64_t x14380 = INT64_MAX;
	volatile int64_t t173 = 1283LL;

    t173 = (((x14377<<x14378)*x14379)-x14380);

    if (t173 != -9223372036752691487LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x14422 = 3U;
	uint32_t x14423 = UINT32_MAX;
	uint32_t x14424 = 1U;
	uint64_t t174 = 50366309060LLU;

    t174 = (((x14421<<x14422)*x14423)-x14424);

    if (t174 != 18446744039349813255LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x14465 = 14988LLU;
	volatile int32_t x14466 = 43;
	int32_t x14467 = INT32_MIN;
	volatile int64_t x14468 = INT64_MIN;
	static volatile uint64_t t175 = 3226223578LLU;

    t175 = (((x14465<<x14466)*x14467)-x14468);

    if (t175 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x14481 = 2;
	int8_t x14482 = 15;
	int8_t x14484 = 0;
	volatile uint32_t t176 = 0U;

    t176 = (((x14481<<x14482)*x14483)-x14484);

    if (t176 != 2153119744U) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint8_t x14789 = UINT8_MAX;
	static int8_t x14792 = -1;
	volatile int32_t t177 = -1550301;

    t177 = (((x14789<<x14790)*x14791)-x14792);

    if (t177 != 4177921) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x14853 = 1880056LL;
	uint8_t x14856 = 1U;
	static int64_t t178 = 42339056853026119LL;

    t178 = (((x14853<<x14854)*x14855)-x14856);

    if (t178 != 16149558065537039LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x15062 = 63U;
	volatile int64_t x15063 = 507488832286LL;
	static int16_t x15064 = -1;

    t179 = (((x15061<<x15062)*x15063)-x15064);

    if (t179 != 1LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x15089 = 435331565681301LLU;
	volatile int64_t x15090 = 5LL;
	uint64_t x15091 = 2041866059620232626LLU;
	int32_t x15092 = 55;
	uint64_t t180 = 733594080535966015LLU;

    t180 = (((x15089<<x15090)*x15091)-x15092);

    if (t180 != 13314658656943182601LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x15241 = 54110386U;
	static volatile uint16_t x15242 = 16U;
	int32_t x15244 = INT32_MIN;
	volatile uint32_t t181 = 159U;

    t181 = (((x15241<<x15242)*x15243)-x15244);

    if (t181 != 3612213248U) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x15246 = 6U;
	int16_t x15247 = INT16_MIN;
	volatile int64_t t182 = 398220805378LL;

    t182 = (((x15245<<x15246)*x15247)-x15248);

    if (t182 != 4240081961LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x15409 = 192LLU;
	int16_t x15411 = INT16_MIN;

    t183 = (((x15409<<x15410)*x15411)-x15412);

    if (t183 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x15565 = 126625595401330627LL;
	int16_t x15566 = 0;
	volatile int64_t x15567 = -1LL;
	int64_t x15568 = 1024LL;
	volatile int64_t t184 = 441432438282LL;

    t184 = (((x15565<<x15566)*x15567)-x15568);

    if (t184 != -126625595401331651LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x15613 = UINT64_MAX;
	int8_t x15615 = -1;
	volatile uint64_t t185 = 55732LLU;

    t185 = (((x15613<<x15614)*x15615)-x15616);

    if (t185 != 9LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x15729 = UINT8_MAX;
	int8_t x15730 = 5;
	int32_t x15732 = 97139676;
	int32_t t186 = -183;

    t186 = (((x15729<<x15730)*x15731)-x15732);

    if (t186 != -97131516) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x15837 = 2;
	uint32_t x15838 = 18U;
	static int8_t x15839 = INT8_MIN;
	uint8_t x15840 = UINT8_MAX;
	volatile int32_t t187 = 61059;

    t187 = (((x15837<<x15838)*x15839)-x15840);

    if (t187 != -67109119) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x15849 = UINT8_MAX;
	volatile uint8_t x15850 = 9U;
	static int8_t x15851 = -1;
	int8_t x15852 = -24;
	static int32_t t188 = -67774517;

    t188 = (((x15849<<x15850)*x15851)-x15852);

    if (t188 != -130536) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x15933 = 1222660191311LLU;
	int8_t x15935 = INT8_MIN;
	int32_t x15936 = INT32_MIN;
	volatile uint64_t t189 = 737276233489060LLU;

    t189 = (((x15933<<x15934)*x15935)-x15936);

    if (t189 != 18446431074848059648LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x16129 = 1285388833588407LLU;
	volatile uint16_t x16130 = 25U;
	uint64_t t190 = 22178619LLU;

    t190 = (((x16129<<x16130)*x16131)-x16132);

    if (t190 != 2004565868586991617LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x16233 = INT8_MAX;
	volatile uint8_t x16235 = 48U;
	uint8_t x16236 = 2U;
	static volatile int32_t t191 = -270;

    t191 = (((x16233<<x16234)*x16235)-x16236);

    if (t191 != 97534) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x16274 = 20;
	uint8_t x16275 = 14U;
	int8_t x16276 = INT8_MIN;
	static uint64_t t192 = 2513421384177LLU;

    t192 = (((x16273<<x16274)*x16275)-x16276);

    if (t192 != 4069187899069825152LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x16453 = 7005620537538348094LLU;
	int8_t x16455 = INT8_MIN;

    t193 = (((x16453<<x16454)*x16455)-x16456);

    if (t193 != 14342061613718946432LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x16525 = 1492U;
	volatile uint16_t x16526 = 2U;
	int8_t x16527 = INT8_MIN;
	int32_t x16528 = INT32_MIN;

    t194 = (((x16525<<x16526)*x16527)-x16528);

    if (t194 != 2146719744) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x16534 = 0;
	int64_t x16536 = INT64_MIN;
	volatile uint64_t t195 = 100106722637909LLU;

    t195 = (((x16533<<x16534)*x16535)-x16536);

    if (t195 != 9494862062628753777LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x16585 = 1862LLU;
	int64_t x16586 = 31LL;
	uint32_t x16587 = 3483929U;
	int8_t x16588 = -1;

    t196 = (((x16585<<x16586)*x16587)-x16588);

    if (t196 != 13930889199541551105LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x16609 = 5;
	static uint16_t x16610 = 0U;
	uint32_t x16611 = 443720U;
	volatile int32_t x16612 = 171730;
	volatile uint32_t t197 = 78168U;

    t197 = (((x16609<<x16610)*x16611)-x16612);

    if (t197 != 2046870U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x16641 = INT32_MAX;
	uint8_t x16642 = 0U;
	int64_t x16644 = 3082141466LL;
	int64_t t198 = -29019467731516317LL;

    t198 = (((x16641<<x16642)*x16643)-x16644);

    if (t198 != -5229625113LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x16653 = 16;
	uint8_t x16654 = 7U;
	volatile int32_t t199 = -254;

    t199 = (((x16653<<x16654)*x16655)-x16656);

    if (t199 != -26623) { NG(); } else { ; }
	
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


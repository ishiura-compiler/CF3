
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

int8_t x40 = 2;
int8_t x148 = 1;
uint16_t x409 = 19242U;
volatile uint16_t x493 = 6729U;
int32_t x494 = INT32_MAX;
uint8_t x496 = 0U;
static volatile int16_t x541 = INT16_MIN;
static uint32_t x575 = 17689U;
int8_t x576 = 60;
uint16_t x607 = 280U;
uint8_t x644 = 4U;
uint64_t x658 = 312LLU;
volatile int32_t x803 = -24738;
int64_t x811 = INT64_MIN;
volatile int64_t t12 = 3165081403014305LL;
int16_t x835 = 1635;
uint64_t x953 = 4518717706794227768LLU;
uint32_t x954 = UINT32_MAX;
static volatile uint64_t t15 = 3044LLU;
int64_t t16 = 3LL;
uint32_t x1041 = UINT32_MAX;
uint16_t x1042 = 1U;
static volatile uint32_t x1271 = UINT32_MAX;
int16_t x1272 = 1;
uint64_t x1309 = 1302LLU;
uint8_t x1310 = 0U;
uint64_t t23 = 59292297377LLU;
volatile int32_t t24 = 19049097;
static volatile uint64_t x1329 = 90271554LLU;
int8_t x1381 = -47;
int8_t x1398 = 2;
static int8_t x1436 = 1;
int32_t t31 = 534087996;
static volatile int32_t x1544 = 2;
int8_t x1565 = INT8_MIN;
static uint16_t x1568 = 4U;
volatile uint32_t t39 = 160778U;
static int8_t x1716 = 1;
static int16_t x1797 = -1;
int16_t x1800 = 3;
int8_t x1810 = INT8_MIN;
int32_t t44 = 354;
volatile uint32_t x1895 = 7552555U;
static int8_t x1896 = 7;
static volatile uint32_t t47 = 0U;
static uint64_t x1962 = UINT64_MAX;
volatile int16_t x1963 = -1;
int64_t x2001 = 2051115054100LL;
int8_t x2002 = 32;
uint64_t t51 = 549848751LLU;
int64_t t53 = -512LL;
volatile uint32_t t54 = 16136U;
int8_t x2285 = INT8_MIN;
volatile uint32_t x2329 = 6434457U;
volatile int16_t x2413 = 2;
volatile int64_t t58 = 33359412LL;
volatile uint64_t t59 = 43631866389LLU;
int8_t x2613 = 1;
volatile int64_t t62 = 472802183300714LL;
int64_t t64 = -117180510947932956LL;
static volatile uint64_t t66 = 105816406494LLU;
static volatile int8_t x2874 = 1;
static volatile uint64_t x2881 = 3193833896LLU;
volatile int8_t x2882 = INT8_MIN;
static uint8_t x2896 = 2U;
uint16_t x3013 = UINT16_MAX;
uint8_t x3016 = 11U;
int16_t x3022 = INT16_MAX;
static uint64_t x3065 = 30350203478550LLU;
int64_t x3069 = 262113755LL;
volatile int8_t x3070 = INT8_MAX;
uint32_t x3071 = 50267U;
int8_t x3119 = INT8_MAX;
static uint8_t x3152 = 52U;
static volatile uint64_t t77 = 300390824788853592LLU;
uint64_t x3418 = 95554210853LLU;
int32_t x3645 = INT32_MIN;
uint8_t x3648 = 1U;
volatile int64_t t82 = -2LL;
static uint8_t x3720 = 2U;
volatile uint32_t x3816 = 3U;
uint32_t x3841 = UINT32_MAX;
uint32_t t87 = 1849U;
volatile uint32_t t90 = 4820188U;
int32_t x3949 = 6;
volatile uint64_t x3974 = 29803093548321LLU;
int16_t x3975 = 6026;
int64_t t93 = -265365816455969LL;
static uint64_t x4081 = UINT64_MAX;
static int64_t x4102 = -1897840215816170LL;
int32_t x4103 = INT32_MIN;
static int16_t x4109 = INT16_MIN;
int64_t x4117 = INT64_MAX;
int64_t t98 = 5331LL;
static int8_t x4126 = INT8_MAX;
static uint32_t x4161 = UINT32_MAX;
uint8_t x4294 = UINT8_MAX;
int8_t x4295 = -4;
int32_t x4339 = -1;
volatile int16_t x4430 = INT16_MIN;
int64_t x4534 = INT64_MIN;
static volatile uint64_t t105 = 4LLU;
static int64_t x4649 = -1LL;
static int64_t t108 = 26070873648335582LL;
uint8_t x4676 = 0U;
static volatile uint64_t t111 = 4408430367LLU;
int16_t x4867 = -1;
volatile uint64_t x4978 = UINT64_MAX;
volatile uint64_t t114 = 6100636LLU;
int8_t x5021 = 0;
int16_t x5022 = INT16_MIN;
static volatile int8_t x5160 = 6;
uint64_t t118 = 15613748LLU;
volatile int16_t x5239 = -1;
int32_t x5322 = -171842144;
static volatile uint64_t t120 = 2036LLU;
int32_t x5346 = -8629392;
int32_t x5384 = 0;
uint32_t x5443 = 41951U;
uint64_t t124 = 139LLU;
uint32_t x5501 = UINT32_MAX;
int32_t x5562 = INT32_MIN;
int32_t t127 = -84801;
int16_t x5710 = -11104;
volatile uint8_t x5712 = 2U;
static int64_t t128 = 56283534049LL;
int8_t x5714 = INT8_MIN;
volatile uint8_t x5731 = 2U;
volatile uint8_t x5732 = 0U;
int32_t x5771 = INT32_MIN;
volatile int64_t x5817 = -3578652350LL;
int8_t x5819 = INT8_MAX;
volatile uint16_t x5897 = UINT16_MAX;
uint32_t x5898 = 132361U;
volatile uint8_t x5900 = 3U;
volatile int8_t x5977 = INT8_MIN;
int8_t x5978 = INT8_MIN;
uint16_t x6197 = 2U;
int64_t x6249 = -1LL;
uint32_t x6312 = 13U;
static uint32_t x6420 = 0U;
static uint64_t x6439 = UINT64_MAX;
uint64_t t148 = 735585642LLU;
volatile int8_t x6480 = 0;
int8_t x6554 = -1;
volatile int8_t x6556 = 12;
volatile int64_t x6562 = INT64_MIN;
int64_t t151 = -12224197371933089LL;
uint16_t x6568 = 44U;
uint64_t t152 = 280356609LLU;
int16_t x6583 = INT16_MIN;
volatile uint8_t x6713 = UINT8_MAX;
int8_t x6714 = INT8_MAX;
uint64_t x6715 = 401656041028154678LLU;
int16_t x6727 = INT16_MIN;
static volatile uint32_t x6754 = 1U;
int32_t t159 = 201;
static int8_t x6830 = INT8_MAX;
uint64_t x6945 = 275012403052971LLU;
int16_t x6954 = INT16_MIN;
uint8_t x6956 = 3U;
volatile int32_t x7083 = INT32_MIN;
uint8_t x7110 = 0U;
uint8_t x7132 = 0U;
int64_t x7157 = INT64_MAX;
volatile int64_t x7163 = -27741918460758480LL;
volatile uint32_t x7164 = 5U;
int32_t x7169 = INT32_MIN;
int16_t x7327 = INT16_MAX;
uint8_t x7550 = UINT8_MAX;
uint64_t x7555 = UINT64_MAX;
int8_t x7613 = 23;
uint64_t x7626 = 4855764896526LLU;
uint16_t x7634 = 1U;
uint64_t x7635 = UINT64_MAX;
int64_t x7636 = 6LL;
static int64_t x7690 = INT64_MIN;
uint64_t x7734 = 598783121LLU;
static volatile uint64_t t179 = 928418577139750LLU;
uint64_t t180 = 76810286810LLU;
uint32_t x7855 = 980639168U;
static int32_t x8089 = 2;
uint8_t x8092 = 1U;
volatile int8_t x8107 = -1;
uint16_t x8108 = 3U;
volatile int64_t t188 = 121572623599958LL;
static uint16_t x8159 = 8U;
int64_t x8199 = 2668437LL;
int64_t t192 = 466041231940257232LL;
int8_t x8291 = 1;
static int32_t x8474 = INT32_MIN;
uint8_t x8476 = 60U;
static uint16_t x8497 = UINT16_MAX;
uint64_t x8498 = 121228978LLU;


void f0(void) {
    	int8_t x37 = INT8_MIN;
	uint16_t x38 = 671U;
	volatile uint32_t x39 = UINT32_MAX;
	uint32_t t0 = 63064U;

    t0 = ((x37*(x38%x39))<<x40);

    if (t0 != 4294623744U) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x145 = 0LL;
	int16_t x146 = -1;
	int64_t x147 = 175929LL;
	volatile int64_t t1 = 393LL;

    t1 = ((x145*(x146%x147))<<x148);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x389 = INT8_MAX;
	uint8_t x390 = 7U;
	static uint8_t x391 = UINT8_MAX;
	uint32_t x392 = 0U;
	volatile int32_t t2 = -1;

    t2 = ((x389*(x390%x391))<<x392);

    if (t2 != 889) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x410 = 1U;
	int64_t x411 = 212149558LL;
	volatile int16_t x412 = 12;
	int64_t t3 = -130711656393528138LL;

    t3 = ((x409*(x410%x411))<<x412);

    if (t3 != 78815232LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x495 = INT16_MAX;
	volatile int32_t t4 = 0;

    t4 = ((x493*(x494%x495))<<x496);

    if (t4 != 6729) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x542 = INT64_MIN;
	int32_t x543 = INT32_MIN;
	int8_t x544 = 3;
	int64_t t5 = -109116813682742LL;

    t5 = ((x541*(x542%x543))<<x544);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x573 = 243956LLU;
	int8_t x574 = 17;
	volatile uint64_t t6 = 5410LLU;

    t6 = ((x573*(x574%x575))<<x576);

    if (t6 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x605 = 2U;
	volatile uint32_t x606 = UINT32_MAX;
	int16_t x608 = 0;
	volatile uint32_t t7 = 120291U;

    t7 = ((x605*(x606%x607))<<x608);

    if (t7 != 510U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x641 = UINT64_MAX;
	int16_t x642 = INT16_MAX;
	uint64_t x643 = 512558755878549341LLU;
	static volatile uint64_t t8 = 126LLU;

    t8 = ((x641*(x642%x643))<<x644);

    if (t8 != 18446744073709027344LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x657 = -5;
	uint32_t x659 = UINT32_MAX;
	int64_t x660 = 17LL;
	uint64_t t9 = 84634LLU;

    t9 = ((x657*(x658%x659))<<x660);

    if (t9 != 18446744073505079296LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x757 = 49339146549081272LLU;
	static int16_t x758 = INT16_MIN;
	int16_t x759 = INT16_MAX;
	volatile int8_t x760 = 4;
	uint64_t t10 = 29LLU;

    t10 = ((x757*(x758%x759))<<x760);

    if (t10 != 17657317728924251264LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x801 = INT32_MIN;
	uint64_t x802 = UINT64_MAX;
	int16_t x804 = 0;
	volatile uint64_t t11 = 8531082795544LLU;

    t11 = ((x801*(x802%x803))<<x804);

    if (t11 != 18446690951406551040LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x809 = INT32_MAX;
	volatile uint32_t x810 = 0U;
	uint8_t x812 = 18U;

    t12 = ((x809*(x810%x811))<<x812);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x833 = 2U;
	uint32_t x834 = 1001753U;
	uint8_t x836 = 3U;
	uint32_t t13 = 5963766U;

    t13 = ((x833*(x834%x835))<<x836);

    if (t13 != 18128U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x955 = 62U;
	volatile int8_t x956 = 3;
	uint64_t t14 = 0LLU;

    t14 = ((x953*(x954%x955))<<x956);

    if (t14 != 16215504594513708352LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x965 = 111850800603LLU;
	static int32_t x966 = 220642;
	int32_t x967 = -1;
	int8_t x968 = 1;

    t15 = ((x965*(x966%x967))<<x968);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x977 = -2281656288LL;
	static int32_t x978 = -515877765;
	int32_t x979 = INT32_MIN;
	static uint32_t x980 = 0U;

    t16 = ((x977*(x978%x979))<<x980);

    if (t16 != 1177055746351636320LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x1043 = -6;
	static int8_t x1044 = 3;
	uint32_t t17 = 10727508U;

    t17 = ((x1041*(x1042%x1043))<<x1044);

    if (t17 != 4294967288U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x1109 = -1634695077LL;
	uint16_t x1110 = UINT16_MAX;
	int8_t x1111 = 1;
	static int8_t x1112 = 15;
	int64_t t18 = 680881134LL;

    t18 = ((x1109*(x1110%x1111))<<x1112);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x1269 = 3U;
	uint32_t x1270 = 7709U;
	volatile uint32_t t19 = 70613507U;

    t19 = ((x1269*(x1270%x1271))<<x1272);

    if (t19 != 46254U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x1277 = 11499090LLU;
	uint32_t x1278 = UINT32_MAX;
	uint64_t x1279 = UINT64_MAX;
	static int32_t x1280 = 9;
	volatile uint64_t t20 = 1640LLU;

    t20 = ((x1277*(x1278%x1279))<<x1280);

    if (t20 != 6840022248088361984LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x1281 = INT64_MAX;
	int32_t x1282 = -5264;
	int16_t x1283 = -1;
	int8_t x1284 = 31;
	static int64_t t21 = -911864072LL;

    t21 = ((x1281*(x1282%x1283))<<x1284);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x1293 = UINT16_MAX;
	uint16_t x1294 = 16U;
	int16_t x1295 = INT16_MIN;
	volatile uint16_t x1296 = 0U;
	int32_t t22 = -2730;

    t22 = ((x1293*(x1294%x1295))<<x1296);

    if (t22 != 1048560) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x1311 = UINT8_MAX;
	static int32_t x1312 = 50;

    t23 = ((x1309*(x1310%x1311))<<x1312);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x1313 = 0;
	int16_t x1314 = -1;
	static volatile int16_t x1315 = INT16_MIN;
	static uint32_t x1316 = 7U;

    t24 = ((x1313*(x1314%x1315))<<x1316);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x1330 = 7540U;
	static int8_t x1331 = INT8_MIN;
	volatile uint16_t x1332 = 12U;
	uint64_t t25 = 866055969609706LLU;

    t25 = ((x1329*(x1330%x1331))<<x1332);

    if (t25 != 42891265081344LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x1349 = INT8_MIN;
	volatile uint64_t x1350 = 11LLU;
	volatile int64_t x1351 = INT64_MIN;
	volatile uint16_t x1352 = 11U;
	volatile uint64_t t26 = 613278322983LLU;

    t26 = ((x1349*(x1350%x1351))<<x1352);

    if (t26 != 18446744073706668032LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x1377 = INT16_MAX;
	volatile int64_t x1378 = INT64_MAX;
	uint16_t x1379 = 1202U;
	volatile uint8_t x1380 = 2U;
	static volatile int64_t t27 = 382926414427381LL;

    t27 = ((x1377*(x1378%x1379))<<x1380);

    if (t27 != 128315572LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x1382 = UINT32_MAX;
	int8_t x1383 = -13;
	int8_t x1384 = 0;
	volatile uint32_t t28 = 124126106U;

    t28 = ((x1381*(x1382%x1383))<<x1384);

    if (t28 != 4294966732U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x1397 = -1;
	uint64_t x1399 = 1617LLU;
	int8_t x1400 = 3;
	static uint64_t t29 = 42018527059186620LLU;

    t29 = ((x1397*(x1398%x1399))<<x1400);

    if (t29 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x1413 = 13470997LLU;
	int32_t x1414 = 1;
	int64_t x1415 = INT64_MIN;
	static uint8_t x1416 = 1U;
	static uint64_t t30 = 4368086441LLU;

    t30 = ((x1413*(x1414%x1415))<<x1416);

    if (t30 != 26941994LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x1433 = 11406U;
	int8_t x1434 = -1;
	int16_t x1435 = -1;

    t31 = ((x1433*(x1434%x1435))<<x1436);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x1445 = 251910064734471313LLU;
	volatile int8_t x1446 = 1;
	uint16_t x1447 = 32U;
	volatile uint8_t x1448 = 0U;
	volatile uint64_t t32 = 85406LLU;

    t32 = ((x1445*(x1446%x1447))<<x1448);

    if (t32 != 251910064734471313LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x1537 = 6U;
	uint8_t x1538 = UINT8_MAX;
	int32_t x1539 = -1;
	static uint8_t x1540 = 18U;
	volatile int32_t t33 = -170;

    t33 = ((x1537*(x1538%x1539))<<x1540);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x1541 = 485LLU;
	volatile int64_t x1542 = 90570LL;
	int32_t x1543 = INT32_MAX;
	uint64_t t34 = 271LLU;

    t34 = ((x1541*(x1542%x1543))<<x1544);

    if (t34 != 175705800LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x1545 = -506;
	uint32_t x1546 = 719997206U;
	volatile int32_t x1547 = INT32_MIN;
	int64_t x1548 = 0LL;
	volatile uint32_t t35 = 1U;

    t35 = ((x1545*(x1546%x1547))<<x1548);

    if (t35 != 753633924U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x1557 = 6;
	int32_t x1558 = 976671;
	uint64_t x1559 = 19922207142LLU;
	int8_t x1560 = 28;
	uint64_t t36 = 1091206LLU;

    t36 = ((x1557*(x1558%x1559))<<x1560);

    if (t36 != 1573038751481856LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x1566 = 114020877880134LL;
	int8_t x1567 = -1;
	static int64_t t37 = 59507521755190LL;

    t37 = ((x1565*(x1566%x1567))<<x1568);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x1577 = INT16_MIN;
	uint16_t x1578 = 1U;
	uint64_t x1579 = 521581782583LLU;
	volatile uint16_t x1580 = 0U;
	volatile uint64_t t38 = 16397058340177516LLU;

    t38 = ((x1577*(x1578%x1579))<<x1580);

    if (t38 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x1709 = 25U;
	uint16_t x1710 = UINT16_MAX;
	int32_t x1711 = -1;
	int8_t x1712 = 1;

    t39 = ((x1709*(x1710%x1711))<<x1712);

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x1713 = UINT16_MAX;
	int8_t x1714 = -1;
	uint64_t x1715 = 133081595993522LLU;
	static volatile uint64_t t40 = 8623625160731LLU;

    t40 = ((x1713*(x1714%x1715))<<x1716);

    if (t40 != 4966223357783391570LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x1793 = -1182;
	uint32_t x1794 = UINT32_MAX;
	static uint8_t x1795 = UINT8_MAX;
	volatile uint8_t x1796 = 13U;
	uint32_t t41 = 96788U;

    t41 = ((x1793*(x1794%x1795))<<x1796);

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x1798 = INT64_MIN;
	int32_t x1799 = INT32_MIN;
	static volatile int64_t t42 = 12LL;

    t42 = ((x1797*(x1798%x1799))<<x1800);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x1805 = INT8_MIN;
	uint32_t x1806 = 720944082U;
	uint16_t x1807 = 1001U;
	uint32_t x1808 = 8U;
	static uint32_t t43 = 183U;

    t43 = ((x1805*(x1806%x1807))<<x1808);

    if (t43 != 4266819584U) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x1809 = 0U;
	volatile int16_t x1811 = INT16_MAX;
	static uint32_t x1812 = 6U;

    t44 = ((x1809*(x1810%x1811))<<x1812);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x1829 = 946LL;
	static volatile int64_t x1830 = 140964365037163486LL;
	int16_t x1831 = INT16_MIN;
	uint8_t x1832 = 9U;
	int64_t t45 = -17351126107145LL;

    t45 = ((x1829*(x1830%x1831))<<x1832);

    if (t45 != 10399037440LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x1837 = UINT32_MAX;
	int32_t x1838 = INT32_MIN;
	int8_t x1839 = 25;
	uint32_t x1840 = 6U;
	uint32_t t46 = 168U;

    t46 = ((x1837*(x1838%x1839))<<x1840);

    if (t46 != 1472U) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x1893 = INT8_MIN;
	int8_t x1894 = -1;

    t47 = ((x1893*(x1894%x1895))<<x1896);

    if (t47 != 2077900800U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x1921 = 5755;
	int16_t x1922 = 26;
	int16_t x1923 = -402;
	uint16_t x1924 = 6U;
	volatile int32_t t48 = 2;

    t48 = ((x1921*(x1922%x1923))<<x1924);

    if (t48 != 9576320) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x1961 = INT16_MAX;
	uint16_t x1964 = 34U;
	volatile uint64_t t49 = 1683LLU;

    t49 = ((x1961*(x1962%x1963))<<x1964);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x1989 = INT32_MIN;
	static volatile uint64_t x1990 = UINT64_MAX;
	uint64_t x1991 = 1484760941151708230LLU;
	volatile int16_t x1992 = 0;
	volatile uint64_t t50 = 2358520LLU;

    t50 = ((x1989*(x1990%x1991))<<x1992);

    if (t50 != 11120893417918300160LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x2003 = 860LLU;
	volatile uint16_t x2004 = 0U;

    t51 = ((x2001*(x2002%x2003))<<x2004);

    if (t51 != 65635681731200LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x2005 = -7838LL;
	volatile int16_t x2006 = INT16_MIN;
	volatile int64_t x2007 = INT64_MIN;
	uint16_t x2008 = 1U;
	int64_t t52 = -63243150LL;

    t52 = ((x2005*(x2006%x2007))<<x2008);

    if (t52 != 513671168LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x2177 = 10U;
	int64_t x2178 = 3152LL;
	volatile uint8_t x2179 = 25U;
	static int64_t x2180 = 14LL;

    t53 = ((x2177*(x2178%x2179))<<x2180);

    if (t53 != 327680LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x2257 = INT8_MIN;
	uint32_t x2258 = UINT32_MAX;
	uint8_t x2259 = UINT8_MAX;
	int8_t x2260 = 6;

    t54 = ((x2257*(x2258%x2259))<<x2260);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x2286 = INT32_MIN;
	static int8_t x2287 = -60;
	uint64_t x2288 = 7LLU;
	volatile int32_t t55 = 23;

    t55 = ((x2285*(x2286%x2287))<<x2288);

    if (t55 != 131072) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x2330 = UINT16_MAX;
	int32_t x2331 = INT32_MIN;
	uint8_t x2332 = 10U;
	uint32_t t56 = 1032488U;

    t56 = ((x2329*(x2330%x2331))<<x2332);

    if (t56 != 3678772224U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x2414 = UINT64_MAX;
	volatile int16_t x2415 = 15;
	int8_t x2416 = 1;
	uint64_t t57 = 2519LLU;

    t57 = ((x2413*(x2414%x2415))<<x2416);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x2525 = INT64_MAX;
	int32_t x2526 = INT32_MIN;
	volatile uint8_t x2527 = 1U;
	volatile uint32_t x2528 = 1U;

    t58 = ((x2525*(x2526%x2527))<<x2528);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x2541 = -2929;
	static uint64_t x2542 = 3119647833865624525LLU;
	volatile int64_t x2543 = -1LL;
	uint32_t x2544 = 16U;

    t59 = ((x2541*(x2542%x2543))<<x2544);

    if (t59 != 13015232676695834624LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x2573 = 45766962LL;
	int8_t x2574 = 1;
	volatile int32_t x2575 = INT32_MAX;
	volatile uint8_t x2576 = 2U;
	volatile int64_t t60 = 1467943276LL;

    t60 = ((x2573*(x2574%x2575))<<x2576);

    if (t60 != 183067848LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x2605 = -1;
	int16_t x2606 = -3;
	uint8_t x2607 = 37U;
	uint16_t x2608 = 4U;
	static int32_t t61 = -3;

    t61 = ((x2605*(x2606%x2607))<<x2608);

    if (t61 != 48) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x2614 = 2U;
	int64_t x2615 = 127201056873154906LL;
	volatile uint8_t x2616 = 1U;

    t62 = ((x2613*(x2614%x2615))<<x2616);

    if (t62 != 4LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x2629 = INT8_MAX;
	static int16_t x2630 = -1;
	volatile int16_t x2631 = -1;
	uint8_t x2632 = 0U;
	static int32_t t63 = 991;

    t63 = ((x2629*(x2630%x2631))<<x2632);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x2669 = INT32_MIN;
	int64_t x2670 = INT64_MIN;
	int16_t x2671 = INT16_MIN;
	uint64_t x2672 = 36LLU;

    t64 = ((x2669*(x2670%x2671))<<x2672);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x2685 = 3U;
	uint64_t x2686 = 13927117LLU;
	int8_t x2687 = -13;
	volatile uint16_t x2688 = 59U;
	uint64_t t65 = 18LLU;

    t65 = ((x2685*(x2686%x2687))<<x2688);

    if (t65 != 4035225266123964416LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint64_t x2689 = UINT64_MAX;
	static uint64_t x2690 = 97LLU;
	int32_t x2691 = -1;
	int8_t x2692 = 0;

    t66 = ((x2689*(x2690%x2691))<<x2692);

    if (t66 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int16_t x2781 = 0;
	int16_t x2782 = -1;
	int16_t x2783 = 34;
	int8_t x2784 = 26;
	static volatile int32_t t67 = -183;

    t67 = ((x2781*(x2782%x2783))<<x2784);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x2873 = 1381979271U;
	int64_t x2875 = -1LL;
	uint32_t x2876 = 55U;
	int64_t t68 = -65LL;

    t68 = ((x2873*(x2874%x2875))<<x2876);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x2883 = INT64_MIN;
	uint8_t x2884 = 4U;
	static uint64_t t69 = 115322LLU;

    t69 = ((x2881*(x2882%x2883))<<x2884);

    if (t69 != 18446737532737732608LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x2893 = 1;
	static volatile uint8_t x2894 = 0U;
	int16_t x2895 = -27;
	volatile int32_t t70 = -20;

    t70 = ((x2893*(x2894%x2895))<<x2896);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x2941 = -62;
	volatile int8_t x2942 = INT8_MIN;
	volatile int8_t x2943 = INT8_MIN;
	uint8_t x2944 = 27U;
	int32_t t71 = -1;

    t71 = ((x2941*(x2942%x2943))<<x2944);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int8_t x3014 = INT8_MAX;
	uint8_t x3015 = 20U;
	volatile int32_t t72 = 18779;

    t72 = ((x3013*(x3014%x3015))<<x3016);

    if (t72 != 939509760) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x3021 = 0;
	uint8_t x3023 = UINT8_MAX;
	static uint8_t x3024 = 6U;
	static volatile int32_t t73 = -201532791;

    t73 = ((x3021*(x3022%x3023))<<x3024);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint8_t x3066 = 29U;
	int16_t x3067 = -23;
	static int16_t x3068 = 46;
	volatile uint64_t t74 = 2LLU;

    t74 = ((x3065*(x3066%x3067))<<x3068);

    if (t74 != 5990068979379470336LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x3072 = 1U;
	int64_t t75 = -911685404931768LL;

    t75 = ((x3069*(x3070%x3071))<<x3072);

    if (t75 != 66576893770LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x3117 = 763940465021695LLU;
	volatile int32_t x3118 = INT32_MIN;
	int8_t x3120 = 0;
	volatile uint64_t t76 = 14210275970LLU;

    t76 = ((x3117*(x3118%x3119))<<x3120);

    if (t76 != 18440632549989378056LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x3149 = 4419108U;
	static uint64_t x3150 = 3LLU;
	static int8_t x3151 = -60;

    t77 = ((x3149*(x3150%x3151))<<x3152);

    if (t77 != 12015603805824483328LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x3293 = UINT32_MAX;
	int8_t x3294 = -1;
	int8_t x3295 = -1;
	volatile int16_t x3296 = 1;
	uint32_t t78 = 2369602U;

    t78 = ((x3293*(x3294%x3295))<<x3296);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x3417 = -1;
	int8_t x3419 = INT8_MIN;
	uint32_t x3420 = 9U;
	uint64_t t79 = 15305087024LLU;

    t79 = ((x3417*(x3418%x3419))<<x3420);

    if (t79 != 18446695149953594880LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x3485 = 90512383165611LLU;
	uint64_t x3486 = UINT64_MAX;
	uint8_t x3487 = 98U;
	static int64_t x3488 = 3LL;
	volatile uint64_t t80 = 45510834LLU;

    t80 = ((x3485*(x3486%x3487))<<x3488);

    if (t80 != 724099065324888LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x3597 = UINT16_MAX;
	uint64_t x3598 = UINT64_MAX;
	uint16_t x3599 = UINT16_MAX;
	volatile int8_t x3600 = 1;
	uint64_t t81 = 6LLU;

    t81 = ((x3597*(x3598%x3599))<<x3600);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x3646 = -15;
	int64_t x3647 = INT64_MAX;

    t82 = ((x3645*(x3646%x3647))<<x3648);

    if (t82 != 64424509440LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x3717 = 3522LL;
	static int64_t x3718 = INT64_MIN;
	int32_t x3719 = INT32_MIN;
	volatile int64_t t83 = -15303859554554930LL;

    t83 = ((x3717*(x3718%x3719))<<x3720);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x3741 = 61;
	int16_t x3742 = INT16_MIN;
	uint64_t x3743 = 455758858377LLU;
	int16_t x3744 = 19;
	uint64_t t84 = 222622558LLU;

    t84 = ((x3741*(x3742%x3743))<<x3744);

    if (t84 != 14264404932084367360LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x3785 = UINT64_MAX;
	volatile int8_t x3786 = INT8_MIN;
	int64_t x3787 = -105LL;
	int16_t x3788 = 0;
	uint64_t t85 = 565940186271115LLU;

    t85 = ((x3785*(x3786%x3787))<<x3788);

    if (t85 != 23LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x3813 = 110;
	int32_t x3814 = 94725711;
	int64_t x3815 = -1LL;
	static int64_t t86 = 1LL;

    t86 = ((x3813*(x3814%x3815))<<x3816);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x3842 = 95496071U;
	volatile int32_t x3843 = INT32_MIN;
	int8_t x3844 = 20;

    t87 = ((x3841*(x3842%x3843))<<x3844);

    if (t87 != 2274361344U) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x3849 = INT32_MIN;
	volatile int32_t x3850 = INT32_MIN;
	volatile uint64_t x3851 = UINT64_MAX;
	int8_t x3852 = 38;
	static uint64_t t88 = 798446LLU;

    t88 = ((x3849*(x3850%x3851))<<x3852);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x3877 = -6;
	int64_t x3878 = INT64_MIN;
	int32_t x3879 = -1;
	uint8_t x3880 = 1U;
	int64_t t89 = 1LL;

    t89 = ((x3877*(x3878%x3879))<<x3880);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x3889 = INT16_MIN;
	volatile uint32_t x3890 = UINT32_MAX;
	uint16_t x3891 = 3U;
	uint16_t x3892 = 1U;

    t90 = ((x3889*(x3890%x3891))<<x3892);

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x3950 = INT8_MIN;
	int8_t x3951 = 1;
	uint8_t x3952 = 27U;
	static int32_t t91 = -8;

    t91 = ((x3949*(x3950%x3951))<<x3952);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x3973 = 437574LL;
	volatile int8_t x3976 = 41;
	uint64_t t92 = 83919138LLU;

    t92 = ((x3973*(x3974%x3975))<<x3976);

    if (t92 != 5424590149214273536LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x4045 = -1LL;
	int32_t x4046 = INT32_MIN;
	int8_t x4047 = INT8_MIN;
	int8_t x4048 = 18;

    t93 = ((x4045*(x4046%x4047))<<x4048);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x4077 = UINT8_MAX;
	static uint8_t x4078 = 4U;
	static uint32_t x4079 = 7045245U;
	int8_t x4080 = 3;
	uint32_t t94 = 61500136U;

    t94 = ((x4077*(x4078%x4079))<<x4080);

    if (t94 != 8160U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x4082 = UINT16_MAX;
	static int8_t x4083 = INT8_MIN;
	int8_t x4084 = 1;
	static uint64_t t95 = 929LLU;

    t95 = ((x4081*(x4082%x4083))<<x4084);

    if (t95 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x4101 = -34;
	int16_t x4104 = 1;
	volatile int64_t t96 = 134072920LL;

    t96 = ((x4101*(x4102%x4103))<<x4104);

    if (t96 != 104848939560LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x4110 = INT16_MIN;
	static uint32_t x4111 = 24586U;
	static int8_t x4112 = 1;
	volatile uint32_t t97 = 7U;

    t97 = ((x4109*(x4110%x4111))<<x4112);

    if (t97 != 3889430528U) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int8_t x4118 = INT8_MIN;
	int8_t x4119 = INT8_MIN;
	uint8_t x4120 = 5U;

    t98 = ((x4117*(x4118%x4119))<<x4120);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x4125 = 15;
	static volatile int8_t x4127 = -2;
	static int8_t x4128 = 6;
	static volatile int32_t t99 = -2191;

    t99 = ((x4125*(x4126%x4127))<<x4128);

    if (t99 != 960) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x4162 = INT8_MIN;
	uint8_t x4163 = 76U;
	int8_t x4164 = 1;
	uint32_t t100 = 15U;

    t100 = ((x4161*(x4162%x4163))<<x4164);

    if (t100 != 104U) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x4293 = UINT64_MAX;
	int16_t x4296 = 0;
	uint64_t t101 = 37807232922730LLU;

    t101 = ((x4293*(x4294%x4295))<<x4296);

    if (t101 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x4337 = -350;
	static volatile int32_t x4338 = -1;
	uint8_t x4340 = 1U;
	static int32_t t102 = -42202;

    t102 = ((x4337*(x4338%x4339))<<x4340);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x4377 = 209386243019LLU;
	uint8_t x4378 = UINT8_MAX;
	static uint64_t x4379 = 718058297849805LLU;
	uint8_t x4380 = 22U;
	volatile uint64_t t103 = 3174163058LLU;

    t103 = ((x4377*(x4378%x4379))<<x4380);

    if (t103 != 2587608058574143488LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint64_t x4429 = 23345089280LLU;
	volatile uint16_t x4431 = 13080U;
	uint16_t x4432 = 41U;
	uint64_t t104 = 662271903279559219LLU;

    t104 = ((x4429*(x4430%x4431))<<x4432);

    if (t104 != 8079457731502669824LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x4533 = 112U;
	static uint64_t x4535 = 6174839522328540LLU;
	volatile uint16_t x4536 = 3U;

    t105 = ((x4533*(x4534%x4535))<<x4536);

    if (t105 != 3885620496365966848LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x4557 = INT16_MIN;
	int8_t x4558 = 0;
	uint32_t x4559 = 6626379U;
	int32_t x4560 = 5;
	volatile uint32_t t106 = 132222609U;

    t106 = ((x4557*(x4558%x4559))<<x4560);

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x4641 = INT32_MIN;
	int16_t x4642 = INT16_MIN;
	static volatile int32_t x4643 = -1;
	uint8_t x4644 = 2U;
	int32_t t107 = 166257;

    t107 = ((x4641*(x4642%x4643))<<x4644);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x4650 = -1;
	static volatile int32_t x4651 = 7;
	uint8_t x4652 = 14U;

    t108 = ((x4649*(x4650%x4651))<<x4652);

    if (t108 != 16384LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x4673 = -1;
	int32_t x4674 = -1;
	volatile int8_t x4675 = -1;
	int32_t t109 = 1387154;

    t109 = ((x4673*(x4674%x4675))<<x4676);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x4745 = -1LL;
	uint64_t x4746 = 25335LLU;
	uint32_t x4747 = 357947304U;
	int8_t x4748 = 9;
	volatile uint64_t t110 = 1486899307762597LLU;

    t110 = ((x4745*(x4746%x4747))<<x4748);

    if (t110 != 18446744073696580096LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x4817 = INT8_MIN;
	uint64_t x4818 = UINT64_MAX;
	int8_t x4819 = -16;
	static int8_t x4820 = 2;

    t111 = ((x4817*(x4818%x4819))<<x4820);

    if (t111 != 18446744073709543936LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x4829 = -13;
	uint64_t x4830 = 50697565LLU;
	uint32_t x4831 = 2U;
	static uint8_t x4832 = 33U;
	uint64_t t112 = 12473603803939212LLU;

    t112 = ((x4829*(x4830%x4831))<<x4832);

    if (t112 != 18446743962040401920LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x4865 = INT64_MIN;
	int64_t x4866 = -340510705752231818LL;
	int8_t x4868 = 12;
	volatile int64_t t113 = -274412095638LL;

    t113 = ((x4865*(x4866%x4867))<<x4868);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x4977 = -8261329274438862LL;
	volatile int64_t x4979 = INT64_MIN;
	uint8_t x4980 = 50U;

    t114 = ((x4977*(x4978%x4979))<<x4980);

    if (t114 != 1384856885416427520LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x4989 = 1060729072146677LLU;
	static int32_t x4990 = -1;
	int8_t x4991 = INT8_MIN;
	int8_t x4992 = 0;
	uint64_t t115 = 110LLU;

    t115 = ((x4989*(x4990%x4991))<<x4992);

    if (t115 != 18445683344637404939LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x5023 = -1;
	uint64_t x5024 = 2LLU;
	int32_t t116 = -70;

    t116 = ((x5021*(x5022%x5023))<<x5024);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint16_t x5157 = 22236U;
	int8_t x5158 = INT8_MAX;
	int64_t x5159 = INT64_MIN;
	int64_t t117 = -355369707283686LL;

    t117 = ((x5157*(x5158%x5159))<<x5160);

    if (t117 != 180734208LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x5209 = 798480438;
	uint64_t x5210 = UINT64_MAX;
	volatile uint8_t x5211 = 46U;
	volatile int8_t x5212 = 29;

    t118 = ((x5209*(x5210%x5211))<<x5212);

    if (t118 != 2143404604816097280LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x5237 = INT16_MIN;
	static int16_t x5238 = INT16_MIN;
	static volatile int8_t x5240 = 0;
	int32_t t119 = 1299;

    t119 = ((x5237*(x5238%x5239))<<x5240);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x5321 = 3852810659449344220LLU;
	int64_t x5323 = -1LL;
	volatile uint32_t x5324 = 22U;

    t120 = ((x5321*(x5322%x5323))<<x5324);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x5345 = UINT64_MAX;
	volatile uint64_t x5347 = 211169143LLU;
	uint16_t x5348 = 4U;
	uint64_t t121 = 118830889LLU;

    t121 = ((x5345*(x5346%x5347))<<x5348);

    if (t121 != 18446744072014826016LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x5381 = INT64_MAX;
	uint64_t x5382 = 84948863606560LLU;
	int32_t x5383 = INT32_MIN;
	uint64_t t122 = 56901LLU;

    t122 = ((x5381*(x5382%x5383))<<x5384);

    if (t122 != 18446659124845945056LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x5409 = -1;
	int8_t x5410 = 0;
	volatile int8_t x5411 = -1;
	uint8_t x5412 = 1U;
	int32_t t123 = -943476530;

    t123 = ((x5409*(x5410%x5411))<<x5412);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x5441 = 3909853;
	volatile uint64_t x5442 = UINT64_MAX;
	static uint16_t x5444 = 4U;

    t124 = ((x5441*(x5442%x5443))<<x5444);

    if (t124 != 945934195408LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x5477 = INT16_MIN;
	uint32_t x5478 = UINT32_MAX;
	static int32_t x5479 = INT32_MAX;
	static uint32_t x5480 = 10U;
	uint32_t t125 = 920U;

    t125 = ((x5477*(x5478%x5479))<<x5480);

    if (t125 != 4261412864U) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x5502 = INT64_MIN;
	int8_t x5503 = INT8_MIN;
	uint8_t x5504 = 7U;
	volatile int64_t t126 = 38923462928LL;

    t126 = ((x5501*(x5502%x5503))<<x5504);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x5561 = -1;
	uint8_t x5563 = UINT8_MAX;
	static uint8_t x5564 = 0U;

    t127 = ((x5561*(x5562%x5563))<<x5564);

    if (t127 != 128) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x5709 = -1LL;
	volatile uint16_t x5711 = 983U;

    t128 = ((x5709*(x5710%x5711))<<x5712);

    if (t128 != 1164LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x5713 = -307743LL;
	int64_t x5715 = -1LL;
	uint16_t x5716 = 26U;
	volatile int64_t t129 = -1371186631LL;

    t129 = ((x5713*(x5714%x5715))<<x5716);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x5717 = INT8_MIN;
	int16_t x5718 = INT16_MIN;
	volatile int64_t x5719 = -3605371921313690943LL;
	int16_t x5720 = 21;
	int64_t t130 = -68LL;

    t130 = ((x5717*(x5718%x5719))<<x5720);

    if (t130 != 8796093022208LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int8_t x5729 = -1;
	int32_t x5730 = INT32_MIN;
	int32_t t131 = -11;

    t131 = ((x5729*(x5730%x5731))<<x5732);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x5769 = 13;
	int64_t x5770 = INT64_MIN;
	int16_t x5772 = 5;
	static volatile int64_t t132 = -1544LL;

    t132 = ((x5769*(x5770%x5771))<<x5772);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x5773 = INT32_MIN;
	uint64_t x5774 = 1644849507LLU;
	int64_t x5775 = -1LL;
	int16_t x5776 = 3;
	uint64_t t133 = 4LLU;

    t133 = ((x5773*(x5774%x5775))<<x5776);

    if (t133 != 8635188789792210944LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x5813 = 16;
	int16_t x5814 = INT16_MAX;
	volatile int32_t x5815 = 226711781;
	int16_t x5816 = 0;
	volatile int32_t t134 = 70594385;

    t134 = ((x5813*(x5814%x5815))<<x5816);

    if (t134 != 524272) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x5818 = -1;
	uint16_t x5820 = 14U;
	int64_t t135 = -7162612528245615LL;

    t135 = ((x5817*(x5818%x5819))<<x5820);

    if (t135 != 58632640102400LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x5837 = UINT64_MAX;
	uint16_t x5838 = UINT16_MAX;
	uint8_t x5839 = 43U;
	volatile int32_t x5840 = 0;
	static volatile uint64_t t136 = 150140712307435LLU;

    t136 = ((x5837*(x5838%x5839))<<x5840);

    if (t136 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x5899 = UINT8_MAX;
	volatile uint32_t t137 = 0U;

    t137 = ((x5897*(x5898%x5899))<<x5900);

    if (t137 != 8388480U) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x5979 = 73;
	uint8_t x5980 = 13U;
	int32_t t138 = 13;

    t138 = ((x5977*(x5978%x5979))<<x5980);

    if (t138 != 57671680) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x6005 = UINT64_MAX;
	volatile int16_t x6006 = -22;
	volatile uint8_t x6007 = 123U;
	uint8_t x6008 = 51U;
	static volatile uint64_t t139 = 199464267408259456LLU;

    t139 = ((x6005*(x6006%x6007))<<x6008);

    if (t139 != 49539595901075456LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x6125 = INT32_MIN;
	int64_t x6126 = -464483646807706LL;
	volatile int8_t x6127 = -7;
	uint8_t x6128 = 22U;
	static volatile int64_t t140 = -5439218250237LL;

    t140 = ((x6125*(x6126%x6127))<<x6128);

    if (t140 != 9007199254740992LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x6137 = -1;
	int16_t x6138 = INT16_MAX;
	uint8_t x6139 = 1U;
	static uint8_t x6140 = 8U;
	volatile int32_t t141 = 1;

    t141 = ((x6137*(x6138%x6139))<<x6140);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x6198 = 48;
	int32_t x6199 = INT32_MAX;
	volatile int8_t x6200 = 0;
	volatile int32_t t142 = -13;

    t142 = ((x6197*(x6198%x6199))<<x6200);

    if (t142 != 96) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x6250 = UINT16_MAX;
	int32_t x6251 = -1;
	uint32_t x6252 = 0U;
	volatile int64_t t143 = -215LL;

    t143 = ((x6249*(x6250%x6251))<<x6252);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x6309 = INT32_MAX;
	uint32_t x6310 = 374250U;
	static volatile int64_t x6311 = INT64_MAX;
	int64_t t144 = -2152637470673221169LL;

    t144 = ((x6309*(x6310%x6311))<<x6312);

    if (t144 != 6583875624056832000LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x6317 = 16349834622LLU;
	uint16_t x6318 = 29742U;
	int32_t x6319 = -1;
	uint8_t x6320 = 2U;
	volatile uint64_t t145 = 4644911901658947LLU;

    t145 = ((x6317*(x6318%x6319))<<x6320);

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x6357 = INT8_MIN;
	int16_t x6358 = -1;
	int32_t x6359 = 1842598;
	uint8_t x6360 = 0U;
	int32_t t146 = -676;

    t146 = ((x6357*(x6358%x6359))<<x6360);

    if (t146 != 128) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x6417 = 0;
	int8_t x6418 = INT8_MIN;
	int8_t x6419 = INT8_MIN;
	volatile int32_t t147 = 48;

    t147 = ((x6417*(x6418%x6419))<<x6420);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x6437 = INT8_MAX;
	int16_t x6438 = INT16_MAX;
	static uint32_t x6440 = 1U;

    t148 = ((x6437*(x6438%x6439))<<x6440);

    if (t148 != 8322818LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x6477 = INT32_MIN;
	static uint64_t x6478 = UINT64_MAX;
	static int64_t x6479 = -103821057258279LL;
	uint64_t t149 = 70009497481904277LLU;

    t149 = ((x6477*(x6478%x6479))<<x6480);

    if (t149 != 11772838703632744448LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x6553 = -1;
	int64_t x6555 = -367438663197LL;
	int64_t t150 = 24737025LL;

    t150 = ((x6553*(x6554%x6555))<<x6556);

    if (t150 != 4096LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x6561 = 13U;
	int64_t x6563 = INT64_MIN;
	static uint16_t x6564 = 14U;

    t151 = ((x6561*(x6562%x6563))<<x6564);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x6565 = 471795LLU;
	uint32_t x6566 = UINT32_MAX;
	uint64_t x6567 = UINT64_MAX;

    t152 = ((x6565*(x6566%x6567))<<x6568);

    if (t152 != 10146838658884304896LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x6581 = -6616915;
	int8_t x6582 = -1;
	int8_t x6584 = 2;
	int32_t t153 = 75068;

    t153 = ((x6581*(x6582%x6583))<<x6584);

    if (t153 != 26467660) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int8_t x6716 = 2;
	static volatile uint64_t t154 = 38012LLU;

    t154 = ((x6713*(x6714%x6715))<<x6716);

    if (t154 != 129540LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x6717 = 1212833739970995LLU;
	static int64_t x6718 = INT64_MAX;
	uint32_t x6719 = 119U;
	static uint8_t x6720 = 5U;
	uint64_t t155 = 876LLU;

    t155 = ((x6717*(x6718%x6719))<<x6720);

    if (t155 != 1630048546521017280LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x6721 = -1LL;
	int64_t x6722 = -43541532402LL;
	static volatile int32_t x6723 = 685;
	uint64_t x6724 = 2LLU;
	int64_t t156 = -362LL;

    t156 = ((x6721*(x6722%x6723))<<x6724);

    if (t156 != 2408LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint16_t x6725 = 188U;
	volatile int16_t x6726 = INT16_MIN;
	uint8_t x6728 = 15U;
	int32_t t157 = 229;

    t157 = ((x6725*(x6726%x6727))<<x6728);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x6753 = UINT32_MAX;
	volatile int32_t x6755 = 23183;
	volatile int32_t x6756 = 6;
	uint32_t t158 = 43258U;

    t158 = ((x6753*(x6754%x6755))<<x6756);

    if (t158 != 4294967232U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x6805 = 23097U;
	uint8_t x6806 = UINT8_MAX;
	int16_t x6807 = INT16_MAX;
	volatile uint32_t x6808 = 0U;

    t159 = ((x6805*(x6806%x6807))<<x6808);

    if (t159 != 5889735) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x6829 = 0U;
	int8_t x6831 = -1;
	static int32_t x6832 = 1;
	int32_t t160 = -19363;

    t160 = ((x6829*(x6830%x6831))<<x6832);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x6946 = INT64_MIN;
	uint32_t x6947 = UINT32_MAX;
	uint16_t x6948 = 1U;
	uint64_t t161 = 939056480840916LLU;

    t161 = ((x6945*(x6946%x6947))<<x6948);

    if (t161 != 12639420889008439296LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int32_t x6953 = -1;
	int16_t x6955 = INT16_MAX;
	volatile int32_t t162 = 1;

    t162 = ((x6953*(x6954%x6955))<<x6956);

    if (t162 != 8) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x7081 = 1;
	uint32_t x7082 = 7826U;
	static uint8_t x7084 = 24U;
	volatile uint32_t t163 = 2U;

    t163 = ((x7081*(x7082%x7083))<<x7084);

    if (t163 != 2449473536U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x7109 = 7;
	static uint64_t x7111 = 171616962LLU;
	int16_t x7112 = 3;
	uint64_t t164 = 492LLU;

    t164 = ((x7109*(x7110%x7111))<<x7112);

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x7129 = INT16_MAX;
	uint64_t x7130 = UINT64_MAX;
	uint16_t x7131 = UINT16_MAX;
	static volatile uint64_t t165 = 90354957913844LLU;

    t165 = ((x7129*(x7130%x7131))<<x7132);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x7158 = 8U;
	uint64_t x7159 = UINT64_MAX;
	uint16_t x7160 = 7U;
	static volatile uint64_t t166 = 437916LLU;

    t166 = ((x7157*(x7158%x7159))<<x7160);

    if (t166 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x7161 = 1056695327120282727LLU;
	uint8_t x7162 = 19U;
	volatile uint64_t t167 = 41LLU;

    t167 = ((x7161*(x7162%x7163))<<x7164);

    if (t167 != 15281460383007143072LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x7170 = INT64_MIN;
	volatile int8_t x7171 = INT8_MIN;
	volatile uint8_t x7172 = 0U;
	int64_t t168 = 67587935661908LL;

    t168 = ((x7169*(x7170%x7171))<<x7172);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x7317 = -351213199404756372LL;
	int64_t x7318 = -1LL;
	volatile uint64_t x7319 = 180288768929LLU;
	uint8_t x7320 = 15U;
	volatile uint64_t t169 = 131931719822990LLU;

    t169 = ((x7317*(x7318%x7319))<<x7320);

    if (t169 != 18277385264685252608LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x7325 = 252U;
	uint64_t x7326 = UINT64_MAX;
	static uint8_t x7328 = 7U;
	uint64_t t170 = 62LLU;

    t170 = ((x7325*(x7326%x7327))<<x7328);

    if (t170 != 483840LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x7505 = 49U;
	uint64_t x7506 = 3LLU;
	int32_t x7507 = INT32_MAX;
	uint8_t x7508 = 39U;
	volatile uint64_t t171 = 496612696496636473LLU;

    t171 = ((x7505*(x7506%x7507))<<x7508);

    if (t171 != 80814104641536LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x7549 = 0U;
	int16_t x7551 = INT16_MAX;
	static int8_t x7552 = 16;
	static volatile int32_t t172 = 4284279;

    t172 = ((x7549*(x7550%x7551))<<x7552);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x7553 = -1465663LL;
	volatile int64_t x7554 = INT64_MIN;
	uint8_t x7556 = 5U;
	uint64_t t173 = 259119782147018292LLU;

    t173 = ((x7553*(x7554%x7555))<<x7556);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x7614 = INT16_MAX;
	static int8_t x7615 = INT8_MAX;
	volatile uint32_t x7616 = 20U;
	volatile int32_t t174 = 58137;

    t174 = ((x7613*(x7614%x7615))<<x7616);

    if (t174 != 24117248) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x7625 = INT32_MIN;
	uint32_t x7627 = 22296U;
	uint16_t x7628 = 1U;
	volatile uint64_t t175 = 23101LLU;

    t175 = ((x7625*(x7626%x7627))<<x7628);

    if (t175 != 18446686942054580224LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x7633 = -7276;
	volatile uint64_t t176 = 152063931LLU;

    t176 = ((x7633*(x7634%x7635))<<x7636);

    if (t176 != 18446744073709085952LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x7689 = -1;
	int32_t x7691 = -4;
	static volatile uint16_t x7692 = 7U;
	static volatile int64_t t177 = 325LL;

    t177 = ((x7689*(x7690%x7691))<<x7692);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x7729 = 6;
	uint8_t x7730 = 1U;
	uint16_t x7731 = UINT16_MAX;
	int8_t x7732 = 6;
	volatile int32_t t178 = 16;

    t178 = ((x7729*(x7730%x7731))<<x7732);

    if (t178 != 384) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x7733 = UINT8_MAX;
	int32_t x7735 = 8;
	uint8_t x7736 = 35U;

    t179 = ((x7733*(x7734%x7735))<<x7736);

    if (t179 != 8761733283840LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x7829 = 5458106468039278LLU;
	volatile int8_t x7830 = INT8_MIN;
	int8_t x7831 = INT8_MAX;
	int8_t x7832 = 1;

    t180 = ((x7829*(x7830%x7831))<<x7832);

    if (t180 != 18435827860773473060LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x7845 = 0U;
	uint16_t x7846 = 0U;
	int64_t x7847 = INT64_MIN;
	int16_t x7848 = 1;
	volatile int64_t t181 = 97265683065LL;

    t181 = ((x7845*(x7846%x7847))<<x7848);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x7849 = 0;
	static int16_t x7850 = 419;
	static int16_t x7851 = INT16_MAX;
	int16_t x7852 = 16;
	int32_t t182 = -159;

    t182 = ((x7849*(x7850%x7851))<<x7852);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x7853 = INT32_MIN;
	static int32_t x7854 = INT32_MAX;
	uint8_t x7856 = 0U;
	volatile uint32_t t183 = 786U;

    t183 = ((x7853*(x7854%x7855))<<x7856);

    if (t183 != 2147483648U) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x7993 = 5367U;
	uint8_t x7994 = 28U;
	uint64_t x7995 = 8361301205LLU;
	uint8_t x7996 = 47U;
	static volatile uint64_t t184 = 4165LLU;

    t184 = ((x7993*(x7994%x7995))<<x7996);

    if (t184 != 2702722726375718912LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x8025 = -1;
	int32_t x8026 = -50;
	static uint32_t x8027 = 117699U;
	volatile int32_t x8028 = 0;
	uint32_t t185 = 7U;

    t185 = ((x8025*(x8026%x8027))<<x8028);

    if (t185 != 4294954259U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x8090 = INT64_MAX;
	int64_t x8091 = 46907086LL;
	int64_t t186 = 4229748217507LL;

    t186 = ((x8089*(x8090%x8091))<<x8092);

    if (t186 != 105652532LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x8105 = INT64_MIN;
	volatile uint16_t x8106 = UINT16_MAX;
	int64_t t187 = -21LL;

    t187 = ((x8105*(x8106%x8107))<<x8108);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x8141 = INT32_MAX;
	int64_t x8142 = INT64_MIN;
	volatile int32_t x8143 = INT32_MIN;
	uint16_t x8144 = 0U;

    t188 = ((x8141*(x8142%x8143))<<x8144);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x8157 = INT16_MIN;
	volatile int8_t x8158 = INT8_MIN;
	int16_t x8160 = 1;
	int32_t t189 = 62766049;

    t189 = ((x8157*(x8158%x8159))<<x8160);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x8197 = UINT32_MAX;
	uint8_t x8198 = 38U;
	uint16_t x8200 = 7U;
	int64_t t190 = 3976LL;

    t190 = ((x8197*(x8198%x8199))<<x8200);

    if (t190 != 20890720922880LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x8221 = -62771488LL;
	static uint64_t x8222 = UINT64_MAX;
	volatile int64_t x8223 = 124920LL;
	volatile int8_t x8224 = 0;
	volatile uint64_t t191 = 98526LLU;

    t191 = ((x8221*(x8222%x8223))<<x8224);

    if (t191 != 18446742603915160096LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x8245 = -1;
	uint32_t x8246 = 181U;
	static volatile int64_t x8247 = -1LL;
	int8_t x8248 = 1;

    t192 = ((x8245*(x8246%x8247))<<x8248);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x8289 = 1635968690237894111LL;
	int8_t x8290 = INT8_MIN;
	uint16_t x8292 = 13U;
	volatile int64_t t193 = 755LL;

    t193 = ((x8289*(x8290%x8291))<<x8292);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x8361 = 1;
	uint8_t x8362 = 6U;
	uint16_t x8363 = 378U;
	int32_t x8364 = 1;
	volatile int32_t t194 = -213855717;

    t194 = ((x8361*(x8362%x8363))<<x8364);

    if (t194 != 12) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x8385 = -43;
	uint64_t x8386 = UINT64_MAX;
	volatile uint16_t x8387 = 448U;
	uint8_t x8388 = 42U;
	uint64_t t195 = 454458783LLU;

    t195 = ((x8385*(x8386%x8387))<<x8388);

    if (t195 != 18422726341712412672LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x8401 = -17348152;
	volatile int64_t x8402 = INT64_MIN;
	int8_t x8403 = -1;
	static int16_t x8404 = 28;
	volatile int64_t t196 = 30LL;

    t196 = ((x8401*(x8402%x8403))<<x8404);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x8421 = 1U;
	uint16_t x8422 = 205U;
	int16_t x8423 = -1;
	volatile int32_t x8424 = 0;
	volatile int32_t t197 = -418490;

    t197 = ((x8421*(x8422%x8423))<<x8424);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x8473 = INT32_MAX;
	int64_t x8475 = -1LL;
	int64_t t198 = 13087LL;

    t198 = ((x8473*(x8474%x8475))<<x8476);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x8499 = -111478770942391LL;
	uint16_t x8500 = 12U;
	uint64_t t199 = 107490486691LLU;

    t199 = ((x8497*(x8498%x8499))<<x8500);

    if (t199 != 32541659435950080LLU) { NG(); } else { ; }
	
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


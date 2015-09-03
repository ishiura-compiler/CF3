#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x75 = 237;
uint8_t x76 = 9U;
static volatile int64_t x91 = INT64_MIN;
int64_t t2 = -19479936047LL;
static uint8_t x159 = 1U;
int64_t x179 = -3687545992111LL;
volatile int64_t t5 = -8566263983276004LL;
volatile int64_t t7 = 90LL;
uint8_t x311 = 1U;
volatile int64_t t10 = -30775462988LL;
volatile int16_t x334 = INT16_MAX;
uint8_t x396 = 2U;
int32_t x427 = INT32_MIN;
volatile int32_t t13 = 32514481;
int32_t x454 = INT32_MAX;
int8_t x493 = INT8_MIN;
volatile uint64_t x496 = 20LLU;
int32_t t15 = -925607639;
static volatile int16_t x525 = -456;
static volatile int64_t x527 = INT64_MIN;
uint32_t x540 = 6U;
int64_t x565 = INT64_MIN;
uint16_t x568 = 3U;
uint8_t x840 = 0U;
volatile uint32_t t25 = 883U;
volatile int32_t x1002 = -1;
int32_t x1060 = 7;
int8_t x1061 = INT8_MIN;
int64_t x1062 = 86740LL;
volatile int16_t x1120 = 0;
volatile int8_t x1236 = 17;
int8_t x1355 = -1;
uint32_t x1372 = 3U;
int32_t x1421 = 192;
static int8_t x1424 = 3;
volatile int64_t t39 = 327207717620507LL;
volatile int16_t x1463 = INT16_MAX;
uint32_t x1467 = UINT32_MAX;
int16_t x1488 = 1;
int64_t t43 = -54968615130539209LL;
uint32_t x1521 = 1722858510U;
static int32_t x1523 = 126;
uint32_t x1545 = 21946875U;
int16_t x1733 = INT16_MAX;
static int8_t x1816 = 1;
uint64_t x1821 = UINT64_MAX;
static int32_t x1875 = -1;
uint32_t t57 = 9722U;
static int32_t t59 = -38;
uint16_t x2011 = 4873U;
volatile uint32_t t61 = 1560U;
int32_t x2061 = -1;
volatile int8_t x2062 = INT8_MAX;
int32_t x2185 = INT32_MIN;
uint32_t x2186 = 27U;
int32_t x2199 = INT32_MIN;
static int64_t t67 = -149678LL;
uint16_t x2230 = UINT16_MAX;
int16_t x2255 = -8;
int32_t t69 = -9024;
static int16_t x2313 = 1;
volatile int64_t t71 = -225LL;
uint8_t x2401 = UINT8_MAX;
int8_t x2403 = -1;
int8_t x2490 = -1;
volatile uint8_t x2492 = 26U;
int16_t x2512 = 0;
uint64_t t75 = 101413012182412LLU;
volatile uint64_t t77 = 413201579LLU;
uint32_t x2592 = 3U;
int32_t t78 = -3332901;
uint8_t x2600 = 2U;
int8_t x2608 = 1;
int8_t x2644 = 29;
int32_t t83 = -28;
static uint64_t t87 = 8329074901244LLU;
int16_t x2977 = INT16_MAX;
uint64_t x2980 = 3LLU;
static uint64_t x2985 = 738129709421LLU;
volatile uint64_t t89 = 944386896339425007LLU;
int32_t x3074 = INT32_MIN;
int64_t x3075 = INT64_MIN;
int32_t x3114 = -982;
static uint64_t x3116 = 32LLU;
volatile int32_t x3128 = 0;
volatile uint32_t t93 = 0U;
int32_t t94 = 83;
volatile uint64_t t98 = 117807448LLU;


void f0(void) {
	uint16_t x33 = 27U;
	static volatile int8_t x34 = INT8_MIN;
	volatile int16_t x35 = INT16_MIN;
	uint16_t x36 = 25U;
	volatile int32_t t0 = 196807;

	t0 = (((x33&x34)&x35)<<x36);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x73 = 53;
	volatile int8_t x74 = INT8_MIN;
	volatile int32_t t1 = 12;

	t1 = (((x73&x74)&x75)<<x76);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x89 = INT8_MIN;
	int32_t x90 = 6885;
	int64_t x92 = 1LL;

	t2 = (((x89&x90)&x91)<<x92);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x149 = 2;
	uint8_t x150 = 21U;
	int32_t x151 = INT32_MAX;
	volatile int8_t x152 = 3;
	static volatile int32_t t3 = 51313087;

	t3 = (((x149&x150)&x151)<<x152);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x157 = UINT16_MAX;
	uint16_t x158 = UINT16_MAX;
	uint8_t x160 = 0U;
	int32_t t4 = -632689213;

	t4 = (((x157&x158)&x159)<<x160);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x177 = -1;
	volatile uint8_t x178 = 11U;
	static uint8_t x180 = 2U;

	t5 = (((x177&x178)&x179)<<x180);

	if (t5 != 4LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x217 = 21U;
	static volatile uint64_t x218 = 881930502515LLU;
	int16_t x219 = INT16_MIN;
	int8_t x220 = 2;
	static volatile uint64_t t6 = 883676473LLU;

	t6 = (((x217&x218)&x219)<<x220);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x245 = 28U;
	static int64_t x246 = INT64_MAX;
	int32_t x247 = -1;
	uint16_t x248 = 13U;

	t7 = (((x245&x246)&x247)<<x248);

	if (t7 != 229376LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x305 = INT64_MAX;
	int64_t x306 = INT64_MIN;
	volatile uint16_t x307 = UINT16_MAX;
	uint64_t x308 = 9LLU;
	int64_t t8 = -46513782LL;

	t8 = (((x305&x306)&x307)<<x308);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x309 = UINT16_MAX;
	int16_t x310 = INT16_MIN;
	static int8_t x312 = 7;
	volatile int32_t t9 = 44;

	t9 = (((x309&x310)&x311)<<x312);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x317 = INT64_MIN;
	int8_t x318 = INT8_MAX;
	static int8_t x319 = -1;
	static uint16_t x320 = 20U;

	t10 = (((x317&x318)&x319)<<x320);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x333 = 27U;
	uint64_t x335 = 1877087LLU;
	static int32_t x336 = 1;
	static volatile uint64_t t11 = 1LLU;

	t11 = (((x333&x334)&x335)<<x336);

	if (t11 != 54LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x393 = INT8_MIN;
	int16_t x394 = -1;
	uint32_t x395 = 523407U;
	volatile uint32_t t12 = 422301199U;

	t12 = (((x393&x394)&x395)<<x396);

	if (t12 != 2093568U) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x425 = INT8_MAX;
	int16_t x426 = INT16_MAX;
	static int8_t x428 = 9;

	t13 = (((x425&x426)&x427)<<x428);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x453 = INT64_MIN;
	int32_t x455 = INT32_MAX;
	uint16_t x456 = 14U;
	int64_t t14 = -3204971518LL;

	t14 = (((x453&x454)&x455)<<x456);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x494 = INT32_MIN;
	static uint16_t x495 = 2245U;

	t15 = (((x493&x494)&x495)<<x496);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x526 = 586487520239815LLU;
	static uint8_t x528 = 41U;
	static uint64_t t16 = 76154LLU;

	t16 = (((x525&x526)&x527)<<x528);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x537 = -33;
	uint16_t x538 = 9137U;
	int32_t x539 = INT32_MIN;
	volatile int32_t t17 = 11278;

	t17 = (((x537&x538)&x539)<<x540);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x566 = INT16_MIN;
	uint8_t x567 = UINT8_MAX;
	int64_t t18 = 196265746456LL;

	t18 = (((x565&x566)&x567)<<x568);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x609 = 1U;
	static int16_t x610 = 8003;
	int8_t x611 = INT8_MIN;
	volatile uint8_t x612 = 2U;
	int32_t t19 = 51018;

	t19 = (((x609&x610)&x611)<<x612);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x661 = 6642U;
	static int8_t x662 = INT8_MAX;
	int32_t x663 = -13;
	int8_t x664 = 1;
	int32_t t20 = -27792;

	t20 = (((x661&x662)&x663)<<x664);

	if (t20 != 228) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x729 = -1;
	int64_t x730 = -1LL;
	static uint16_t x731 = 16309U;
	static int8_t x732 = 1;
	volatile int64_t t21 = -6231918LL;

	t21 = (((x729&x730)&x731)<<x732);

	if (t21 != 32618LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x757 = UINT64_MAX;
	static uint16_t x758 = UINT16_MAX;
	int32_t x759 = INT32_MAX;
	uint16_t x760 = 12U;
	volatile uint64_t t22 = 615691882945710LLU;

	t22 = (((x757&x758)&x759)<<x760);

	if (t22 != 268431360LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x785 = 1675453U;
	uint64_t x786 = 23954921240LLU;
	static int16_t x787 = INT16_MIN;
	static int8_t x788 = 0;
	uint64_t t23 = 484163423341602LLU;

	t23 = (((x785&x786)&x787)<<x788);

	if (t23 != 1114112LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x837 = -1LL;
	int32_t x838 = INT32_MAX;
	volatile int32_t x839 = INT32_MIN;
	volatile int64_t t24 = 935LL;

	t24 = (((x837&x838)&x839)<<x840);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x881 = -1;
	static uint32_t x882 = UINT32_MAX;
	uint8_t x883 = 81U;
	uint8_t x884 = 1U;

	t25 = (((x881&x882)&x883)<<x884);

	if (t25 != 162U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x929 = -1LL;
	uint32_t x930 = 6370462U;
	uint8_t x931 = 2U;
	uint8_t x932 = 24U;
	static int64_t t26 = -28506969LL;

	t26 = (((x929&x930)&x931)<<x932);

	if (t26 != 33554432LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1001 = -1;
	volatile uint8_t x1003 = UINT8_MAX;
	static uint16_t x1004 = 1U;
	int32_t t27 = -375930301;

	t27 = (((x1001&x1002)&x1003)<<x1004);

	if (t27 != 510) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x1049 = INT16_MAX;
	static int16_t x1050 = INT16_MIN;
	int32_t x1051 = INT32_MIN;
	static int64_t x1052 = 28LL;
	volatile int32_t t28 = -59;

	t28 = (((x1049&x1050)&x1051)<<x1052);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1057 = 0;
	uint8_t x1058 = 25U;
	int16_t x1059 = INT16_MAX;
	static int32_t t29 = 288083118;

	t29 = (((x1057&x1058)&x1059)<<x1060);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x1063 = 0U;
	volatile uint32_t x1064 = 18U;
	static int64_t t30 = 2581466503700686LL;

	t30 = (((x1061&x1062)&x1063)<<x1064);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1117 = INT8_MIN;
	static int64_t x1118 = 1LL;
	static uint64_t x1119 = UINT64_MAX;
	uint64_t t31 = 499013LLU;

	t31 = (((x1117&x1118)&x1119)<<x1120);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1169 = INT64_MIN;
	int64_t x1170 = INT64_MIN;
	uint16_t x1171 = 308U;
	int64_t x1172 = 12LL;
	volatile int64_t t32 = 5185718244LL;

	t32 = (((x1169&x1170)&x1171)<<x1172);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1233 = 5006U;
	uint16_t x1234 = 3718U;
	int64_t x1235 = INT64_MIN;
	volatile int64_t t33 = -602361LL;

	t33 = (((x1233&x1234)&x1235)<<x1236);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1333 = INT64_MAX;
	static int32_t x1334 = -162;
	volatile uint32_t x1335 = 86U;
	uint16_t x1336 = 0U;
	int64_t t34 = 2871869705788LL;

	t34 = (((x1333&x1334)&x1335)<<x1336);

	if (t34 != 86LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x1337 = 26U;
	static int16_t x1338 = INT16_MIN;
	int16_t x1339 = INT16_MAX;
	volatile uint8_t x1340 = 3U;
	static int32_t t35 = -1542;

	t35 = (((x1337&x1338)&x1339)<<x1340);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1353 = 120063379U;
	uint64_t x1354 = 238127220LLU;
	static volatile uint16_t x1356 = 34U;
	volatile uint64_t t36 = 29444690288955LLU;

	t36 = (((x1353&x1354)&x1355)<<x1356);

	if (t36 != 1765411328807141376LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1357 = -1;
	int16_t x1358 = INT16_MIN;
	int16_t x1359 = 1;
	int8_t x1360 = 23;
	volatile int32_t t37 = 2434214;

	t37 = (((x1357&x1358)&x1359)<<x1360);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1369 = 159;
	int64_t x1370 = INT64_MIN;
	static int64_t x1371 = INT64_MIN;
	static volatile int64_t t38 = 252474LL;

	t38 = (((x1369&x1370)&x1371)<<x1372);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1422 = INT64_MIN;
	int32_t x1423 = -1;

	t39 = (((x1421&x1422)&x1423)<<x1424);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1445 = UINT8_MAX;
	volatile uint8_t x1446 = 3U;
	static uint32_t x1447 = UINT32_MAX;
	volatile int8_t x1448 = 7;
	volatile uint32_t t40 = 314U;

	t40 = (((x1445&x1446)&x1447)<<x1448);

	if (t40 != 384U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x1461 = -1;
	uint64_t x1462 = 12925882561878LLU;
	int8_t x1464 = 29;
	static volatile uint64_t t41 = 496285601828991223LLU;

	t41 = (((x1461&x1462)&x1463)<<x1464);

	if (t41 != 16126528454656LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1465 = -7292870294LL;
	static int64_t x1466 = 876LL;
	volatile int8_t x1468 = 37;
	int64_t t42 = -54LL;

	t42 = (((x1465&x1466)&x1467)<<x1468);

	if (t42 != 49478023249920LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1485 = 0;
	int64_t x1486 = 1940864621356634945LL;
	static int16_t x1487 = INT16_MAX;

	t43 = (((x1485&x1486)&x1487)<<x1488);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x1522 = 3U;
	uint8_t x1524 = 0U;
	uint32_t t44 = 219U;

	t44 = (((x1521&x1522)&x1523)<<x1524);

	if (t44 != 2U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x1546 = INT32_MIN;
	static volatile uint32_t x1547 = 16520U;
	static uint8_t x1548 = 1U;
	volatile uint32_t t45 = 1842U;

	t45 = (((x1545&x1546)&x1547)<<x1548);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x1565 = INT8_MAX;
	int32_t x1566 = INT32_MAX;
	int64_t x1567 = INT64_MIN;
	uint8_t x1568 = 5U;
	int64_t t46 = -98749687678LL;

	t46 = (((x1565&x1566)&x1567)<<x1568);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x1577 = -1;
	int8_t x1578 = 0;
	static int16_t x1579 = INT16_MIN;
	int16_t x1580 = 1;
	volatile int32_t t47 = -1038;

	t47 = (((x1577&x1578)&x1579)<<x1580);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1645 = -55;
	volatile uint16_t x1646 = 15U;
	uint32_t x1647 = 12331U;
	int64_t x1648 = 1LL;
	uint32_t t48 = 3620627U;

	t48 = (((x1645&x1646)&x1647)<<x1648);

	if (t48 != 18U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x1734 = 30454U;
	static volatile int16_t x1735 = 1988;
	uint8_t x1736 = 1U;
	static volatile uint32_t t49 = 326904U;

	t49 = (((x1733&x1734)&x1735)<<x1736);

	if (t49 != 3464U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1749 = 3017814619332LLU;
	int16_t x1750 = INT16_MIN;
	int32_t x1751 = INT32_MIN;
	int8_t x1752 = 37;
	uint64_t t50 = 230LLU;

	t50 = (((x1749&x1750)&x1751)<<x1752);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x1757 = INT16_MIN;
	int16_t x1758 = INT16_MAX;
	int64_t x1759 = -1LL;
	int8_t x1760 = 4;
	int64_t t51 = -357041LL;

	t51 = (((x1757&x1758)&x1759)<<x1760);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x1813 = -28060LL;
	int64_t x1814 = 139LL;
	uint32_t x1815 = 1575U;
	volatile int64_t t52 = -8LL;

	t52 = (((x1813&x1814)&x1815)<<x1816);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1822 = 77LLU;
	volatile uint8_t x1823 = 2U;
	int8_t x1824 = 14;
	volatile uint64_t t53 = 8665607754951LLU;

	t53 = (((x1821&x1822)&x1823)<<x1824);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1873 = INT64_MAX;
	int64_t x1874 = INT64_MIN;
	uint8_t x1876 = 28U;
	volatile int64_t t54 = -259764518759397489LL;

	t54 = (((x1873&x1874)&x1875)<<x1876);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1905 = INT8_MIN;
	int16_t x1906 = INT16_MIN;
	int8_t x1907 = INT8_MAX;
	uint8_t x1908 = 29U;
	static int32_t t55 = -451941122;

	t55 = (((x1905&x1906)&x1907)<<x1908);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x1917 = 76U;
	int16_t x1918 = 0;
	uint8_t x1919 = 45U;
	uint16_t x1920 = 2U;
	static int32_t t56 = -74;

	t56 = (((x1917&x1918)&x1919)<<x1920);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1949 = 119U;
	uint32_t x1950 = 974U;
	int16_t x1951 = INT16_MAX;
	uint8_t x1952 = 1U;

	t57 = (((x1949&x1950)&x1951)<<x1952);

	if (t57 != 140U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1965 = INT32_MIN;
	uint64_t x1966 = 965855611416086LLU;
	volatile int64_t x1967 = INT64_MIN;
	int32_t x1968 = 0;
	static volatile uint64_t t58 = 25LLU;

	t58 = (((x1965&x1966)&x1967)<<x1968);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x1989 = 14537U;
	int8_t x1990 = -1;
	uint16_t x1991 = 53U;
	static uint16_t x1992 = 0U;

	t59 = (((x1989&x1990)&x1991)<<x1992);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2009 = 34;
	uint8_t x2010 = 89U;
	uint8_t x2012 = 1U;
	volatile int32_t t60 = 0;

	t60 = (((x2009&x2010)&x2011)<<x2012);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2017 = UINT32_MAX;
	static volatile uint16_t x2018 = UINT16_MAX;
	int32_t x2019 = -1;
	static volatile uint16_t x2020 = 15U;

	t61 = (((x2017&x2018)&x2019)<<x2020);

	if (t61 != 2147450880U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2063 = -1;
	static uint8_t x2064 = 0U;
	volatile int32_t t62 = -317;

	t62 = (((x2061&x2062)&x2063)<<x2064);

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2081 = INT32_MIN;
	int16_t x2082 = 3;
	static int32_t x2083 = INT32_MIN;
	int8_t x2084 = 11;
	volatile int32_t t63 = -345702988;

	t63 = (((x2081&x2082)&x2083)<<x2084);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2097 = INT32_MAX;
	int8_t x2098 = 0;
	static int8_t x2099 = -1;
	static uint16_t x2100 = 4U;
	static int32_t t64 = -14;

	t64 = (((x2097&x2098)&x2099)<<x2100);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2113 = 787809586;
	static int16_t x2114 = -588;
	volatile int64_t x2115 = INT64_MIN;
	uint16_t x2116 = 35U;
	static int64_t t65 = -270684698637381078LL;

	t65 = (((x2113&x2114)&x2115)<<x2116);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2187 = UINT64_MAX;
	uint8_t x2188 = 1U;
	volatile uint64_t t66 = 111886652LLU;

	t66 = (((x2185&x2186)&x2187)<<x2188);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x2197 = 1465U;
	volatile int64_t x2198 = -34602775LL;
	uint8_t x2200 = 6U;

	t67 = (((x2197&x2198)&x2199)<<x2200);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2229 = INT16_MIN;
	int8_t x2231 = INT8_MIN;
	static volatile uint64_t x2232 = 0LLU;
	static volatile int32_t t68 = 3055;

	t68 = (((x2229&x2230)&x2231)<<x2232);

	if (t68 != 32768) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2253 = INT32_MIN;
	int32_t x2254 = INT32_MAX;
	volatile uint16_t x2256 = 3U;

	t69 = (((x2253&x2254)&x2255)<<x2256);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2257 = INT16_MAX;
	uint8_t x2258 = 1U;
	static uint64_t x2259 = UINT64_MAX;
	uint8_t x2260 = 2U;
	static uint64_t t70 = 15291712LLU;

	t70 = (((x2257&x2258)&x2259)<<x2260);

	if (t70 != 4LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x2314 = UINT32_MAX;
	static int64_t x2315 = -47953261689355LL;
	static uint8_t x2316 = 0U;

	t71 = (((x2313&x2314)&x2315)<<x2316);

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2349 = INT8_MAX;
	uint8_t x2350 = 39U;
	volatile int64_t x2351 = INT64_MIN;
	uint64_t x2352 = 0LLU;
	volatile int64_t t72 = -3973360LL;

	t72 = (((x2349&x2350)&x2351)<<x2352);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2402 = INT16_MIN;
	volatile uint32_t x2404 = 9U;
	int32_t t73 = -1;

	t73 = (((x2401&x2402)&x2403)<<x2404);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x2489 = -39;
	uint32_t x2491 = 17932027U;
	uint32_t t74 = 1989229741U;

	t74 = (((x2489&x2490)&x2491)<<x2492);

	if (t74 != 1677721600U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2509 = UINT8_MAX;
	int64_t x2510 = INT64_MAX;
	uint64_t x2511 = 3996017625LLU;

	t75 = (((x2509&x2510)&x2511)<<x2512);

	if (t75 != 217LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x2513 = 1376U;
	int64_t x2514 = 239327LL;
	static int64_t x2515 = -1LL;
	uint32_t x2516 = 5U;
	int64_t t76 = 10490068LL;

	t76 = (((x2513&x2514)&x2515)<<x2516);

	if (t76 != 34816LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x2537 = 5097150599594LLU;
	static int16_t x2538 = INT16_MIN;
	uint32_t x2539 = UINT32_MAX;
	uint16_t x2540 = 0U;

	t77 = (((x2537&x2538)&x2539)<<x2540);

	if (t77 != 3319365632LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x2589 = -1;
	static int8_t x2590 = INT8_MIN;
	static volatile int8_t x2591 = INT8_MAX;

	t78 = (((x2589&x2590)&x2591)<<x2592);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2597 = INT8_MAX;
	static int32_t x2598 = -1;
	volatile int8_t x2599 = INT8_MAX;
	volatile int32_t t79 = 1;

	t79 = (((x2597&x2598)&x2599)<<x2600);

	if (t79 != 508) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2605 = -2295101;
	uint32_t x2606 = UINT32_MAX;
	uint16_t x2607 = UINT16_MAX;
	volatile uint32_t t80 = 1U;

	t80 = (((x2605&x2606)&x2607)<<x2608);

	if (t80 != 128390U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2641 = 282241815LL;
	volatile int32_t x2642 = -395383658;
	static int32_t x2643 = 2188;
	volatile int64_t t81 = -3LL;

	t81 = (((x2641&x2642)&x2643)<<x2644);

	if (t81 != 1101659111424LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x2737 = UINT32_MAX;
	uint8_t x2738 = UINT8_MAX;
	int16_t x2739 = INT16_MIN;
	int8_t x2740 = 24;
	static volatile uint32_t t82 = 3U;

	t82 = (((x2737&x2738)&x2739)<<x2740);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2789 = 5377;
	static volatile uint8_t x2790 = UINT8_MAX;
	static int32_t x2791 = INT32_MIN;
	int8_t x2792 = 1;

	t83 = (((x2789&x2790)&x2791)<<x2792);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x2801 = INT8_MIN;
	uint16_t x2802 = UINT16_MAX;
	int16_t x2803 = INT16_MIN;
	volatile uint16_t x2804 = 3U;
	volatile int32_t t84 = 2;

	t84 = (((x2801&x2802)&x2803)<<x2804);

	if (t84 != 262144) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x2841 = INT16_MIN;
	int8_t x2842 = INT8_MAX;
	uint64_t x2843 = 432100LLU;
	static int8_t x2844 = 25;
	uint64_t t85 = 6321480LLU;

	t85 = (((x2841&x2842)&x2843)<<x2844);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x2845 = 232;
	volatile uint8_t x2846 = 46U;
	int8_t x2847 = INT8_MAX;
	uint64_t x2848 = 0LLU;
	static int32_t t86 = 441267;

	t86 = (((x2845&x2846)&x2847)<<x2848);

	if (t86 != 40) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x2929 = 634786LLU;
	int16_t x2930 = INT16_MIN;
	int32_t x2931 = INT32_MIN;
	static int16_t x2932 = 4;

	t87 = (((x2929&x2930)&x2931)<<x2932);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x2978 = INT16_MAX;
	uint8_t x2979 = UINT8_MAX;
	volatile int32_t t88 = 328960387;

	t88 = (((x2977&x2978)&x2979)<<x2980);

	if (t88 != 2040) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x2986 = UINT8_MAX;
	volatile int8_t x2987 = -1;
	volatile uint8_t x2988 = 1U;

	t89 = (((x2985&x2986)&x2987)<<x2988);

	if (t89 != 218LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x3073 = 431;
	volatile int32_t x3076 = 6;
	static volatile int64_t t90 = 7333376398544LL;

	t90 = (((x3073&x3074)&x3075)<<x3076);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x3101 = INT8_MIN;
	volatile int32_t x3102 = 21352;
	static volatile uint64_t x3103 = 391157653044864507LLU;
	uint32_t x3104 = 0U;
	uint64_t t91 = 421502706326LLU;

	t91 = (((x3101&x3102)&x3103)<<x3104);

	if (t91 != 256LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x3113 = UINT32_MAX;
	static uint64_t x3115 = UINT64_MAX;
	static volatile uint64_t t92 = 1598LLU;

	t92 = (((x3113&x3114)&x3115)<<x3116);

	if (t92 != 18446739856051666944LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x3125 = 6U;
	volatile int8_t x3126 = 1;
	uint32_t x3127 = 1977320020U;

	t93 = (((x3125&x3126)&x3127)<<x3128);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3133 = INT8_MAX;
	int16_t x3134 = -29;
	uint16_t x3135 = UINT16_MAX;
	int8_t x3136 = 8;

	t94 = (((x3133&x3134)&x3135)<<x3136);

	if (t94 != 25344) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3153 = INT16_MIN;
	int16_t x3154 = 4655;
	static int32_t x3155 = -109;
	static uint8_t x3156 = 7U;
	int32_t t95 = 30;

	t95 = (((x3153&x3154)&x3155)<<x3156);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x3189 = -5;
	int16_t x3190 = 6338;
	int32_t x3191 = INT32_MAX;
	int8_t x3192 = 14;
	volatile int32_t t96 = -108;

	t96 = (((x3189&x3190)&x3191)<<x3192);

	if (t96 != 103841792) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3225 = 144291815LLU;
	volatile int16_t x3226 = -1;
	int64_t x3227 = 26375812423918062LL;
	int8_t x3228 = 1;
	uint64_t t97 = 27612132LLU;

	t97 = (((x3225&x3226)&x3227)<<x3228);

	if (t97 != 2180044LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x3309 = 91669LLU;
	uint32_t x3310 = 2673769U;
	int8_t x3311 = 1;
	uint8_t x3312 = 47U;

	t98 = (((x3309&x3310)&x3311)<<x3312);

	if (t98 != 140737488355328LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x3349 = UINT64_MAX;
	int8_t x3350 = INT8_MIN;
	int8_t x3351 = -1;
	uint8_t x3352 = 8U;
	uint64_t t99 = 6LLU;

	t99 = (((x3349&x3350)&x3351)<<x3352);

	if (t99 != 18446744073709518848LLU) { NG(); } else { ; }
	
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


    return 0;
}


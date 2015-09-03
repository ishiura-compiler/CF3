#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x51 = 24;
int32_t x190 = 22996973;
static volatile uint64_t x191 = 5LLU;
uint8_t x229 = 74U;
static uint16_t x230 = 4U;
static int64_t x256 = -656304588612LL;
static int32_t x340 = INT32_MIN;
int32_t x461 = INT32_MAX;
uint32_t x475 = 0U;
uint64_t t14 = 3644517676LLU;
uint8_t x487 = 15U;
uint32_t x618 = 81853384U;
static volatile int16_t x661 = INT16_MIN;
static int16_t x664 = INT16_MIN;
int16_t x665 = INT16_MAX;
uint64_t x666 = 290LLU;
int32_t t21 = -1;
int16_t x691 = 1;
static int16_t x820 = INT16_MIN;
static volatile uint64_t t25 = 9038397652213LLU;
uint32_t x955 = 7U;
int8_t x975 = 1;
int16_t x976 = 55;
static uint8_t x979 = 0U;
int64_t t32 = 1600816121846LL;
volatile uint8_t x1006 = UINT8_MAX;
uint16_t x1007 = 7U;
volatile uint64_t t33 = 0LLU;
volatile uint16_t x1056 = 12U;
int32_t x1182 = -1;
uint64_t x1184 = UINT64_MAX;
int16_t x1217 = 10248;
volatile int16_t x1292 = INT16_MIN;
int16_t x1308 = INT16_MIN;
static volatile uint8_t x1350 = UINT8_MAX;
volatile int8_t x1370 = INT8_MAX;
static volatile int64_t t45 = -1448361526LL;
int64_t x1418 = INT64_MIN;
static int32_t x1442 = INT32_MIN;
int64_t x1454 = -99839986542LL;
int32_t x1461 = -1;
static volatile int32_t t49 = 650;
int32_t x1482 = INT32_MIN;
int32_t x1484 = INT32_MIN;
volatile int32_t t50 = -35;
volatile int32_t t51 = -32873775;
uint16_t x1879 = 0U;
int32_t x1900 = INT32_MAX;
uint64_t x1937 = UINT64_MAX;
uint16_t x1957 = 70U;
static int16_t x2203 = 0;
int32_t x2217 = -717;
int8_t x2219 = 14;
volatile uint64_t t62 = 3560838142162428621LLU;
static uint32_t x2246 = 260147407U;
static volatile uint32_t t64 = 6U;
volatile int32_t t66 = -127;
volatile int64_t x2338 = INT64_MIN;
static volatile int64_t x2339 = 3LL;
volatile uint32_t t69 = 8529576U;
uint64_t x2514 = 195923LLU;
int64_t x2516 = 6444404562713LL;
uint8_t x2531 = 2U;
int64_t x2564 = INT64_MAX;
int16_t x2694 = -1;
uint32_t x2726 = 512426550U;
volatile uint32_t t80 = 1886U;
volatile int64_t t82 = -1245557788104LL;
volatile int16_t x2940 = -1608;
uint64_t x2943 = 17LLU;
int64_t x2965 = INT64_MAX;
uint8_t x2967 = 2U;
volatile int16_t x2968 = INT16_MIN;
int32_t t89 = 99891;
uint8_t x3092 = 5U;
int32_t x3108 = INT32_MIN;
static int16_t x3110 = 1;
volatile int64_t t92 = 5157106840LL;
int8_t x3121 = INT8_MAX;
int16_t x3122 = INT16_MAX;
int8_t x3123 = 0;
volatile int32_t t94 = 48564717;
static uint32_t x3345 = 11U;


void f0(void) {
	uint16_t x29 = UINT16_MAX;
	int32_t x30 = -1;
	volatile uint8_t x31 = 0U;
	int64_t x32 = -1LL;
	int64_t t0 = -287772LL;

	t0 = (((x29%x30)<<x31)/x32);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x49 = 570LL;
	static int16_t x50 = 4722;
	int16_t x52 = -1;
	int64_t t1 = -2504997717624551LL;

	t1 = (((x49%x50)<<x51)/x52);

	if (t1 != -9563013120LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x61 = UINT8_MAX;
	int16_t x62 = -1;
	volatile uint16_t x63 = 1U;
	static volatile int32_t x64 = -4453;
	volatile int32_t t2 = -84;

	t2 = (((x61%x62)<<x63)/x64);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x117 = 433052682790LLU;
	int8_t x118 = INT8_MIN;
	uint64_t x119 = 22LLU;
	int32_t x120 = -1;
	uint64_t t3 = 1376192041161LLU;

	t3 = (((x117%x118)<<x119)/x120);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x173 = INT32_MIN;
	volatile uint64_t x174 = 4690547881LLU;
	volatile uint8_t x175 = 6U;
	volatile uint16_t x176 = 3689U;
	static uint64_t t4 = 1262084414993LLU;

	t4 = (((x173%x174)<<x175)/x176);

	if (t4 != 43660252LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x189 = UINT32_MAX;
	static int8_t x192 = INT8_MAX;
	uint32_t t5 = 1U;

	t5 = (((x189%x190)<<x191)/x192);

	if (t5 != 4417087U) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x225 = -1;
	uint64_t x226 = UINT64_MAX;
	uint16_t x227 = 1U;
	int64_t x228 = INT64_MIN;
	static uint64_t t6 = 3719705248115LLU;

	t6 = (((x225%x226)<<x227)/x228);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x231 = 14U;
	int32_t x232 = -278010210;
	static int32_t t7 = 55812931;

	t7 = (((x229%x230)<<x231)/x232);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x241 = INT8_MAX;
	static volatile uint32_t x242 = 146051U;
	int32_t x243 = 1;
	static volatile int16_t x244 = INT16_MAX;
	volatile uint32_t t8 = 775628U;

	t8 = (((x241%x242)<<x243)/x244);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x253 = UINT64_MAX;
	int64_t x254 = INT64_MIN;
	uint64_t x255 = 11LLU;
	uint64_t t9 = 217797719195578LLU;

	t9 = (((x253%x254)<<x255)/x256);

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x337 = 6U;
	int16_t x338 = -1;
	static uint16_t x339 = 11U;
	int32_t t10 = 222108;

	t10 = (((x337%x338)<<x339)/x340);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x369 = INT32_MAX;
	static int16_t x370 = INT16_MIN;
	uint8_t x371 = 1U;
	int16_t x372 = 3949;
	int32_t t11 = -100343;

	t11 = (((x369%x370)<<x371)/x372);

	if (t11 != 16) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x409 = 921;
	int64_t x410 = INT64_MIN;
	volatile uint8_t x411 = 2U;
	int32_t x412 = -1;
	volatile int64_t t12 = -13533678044976502LL;

	t12 = (((x409%x410)<<x411)/x412);

	if (t12 != -3684LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x462 = UINT16_MAX;
	static uint8_t x463 = 2U;
	int64_t x464 = -17497LL;
	int64_t t13 = -1027979173183LL;

	t13 = (((x461%x462)<<x463)/x464);

	if (t13 != -7LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x473 = UINT16_MAX;
	uint64_t x474 = 2LLU;
	static uint16_t x476 = UINT16_MAX;

	t14 = (((x473%x474)<<x475)/x476);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x485 = INT16_MAX;
	static int32_t x486 = INT32_MIN;
	static uint32_t x488 = 15U;
	static uint32_t t15 = 45U;

	t15 = (((x485%x486)<<x487)/x488);

	if (t15 != 71580603U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x605 = UINT32_MAX;
	uint64_t x606 = 491LLU;
	uint16_t x607 = 23U;
	int8_t x608 = 9;
	volatile uint64_t t16 = 2602LLU;

	t16 = (((x605%x606)<<x607)/x608);

	if (t16 != 259114780LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x617 = INT8_MIN;
	int8_t x619 = 0;
	uint8_t x620 = UINT8_MAX;
	volatile uint32_t t17 = 35477U;

	t17 = (((x617%x618)<<x619)/x620);

	if (t17 != 151338U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x657 = -1;
	uint64_t x658 = UINT64_MAX;
	static uint16_t x659 = 2U;
	int8_t x660 = 5;
	uint64_t t18 = 5303016LLU;

	t18 = (((x657%x658)<<x659)/x660);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x662 = 2U;
	uint8_t x663 = 11U;
	volatile int32_t t19 = 77350;

	t19 = (((x661%x662)<<x663)/x664);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x667 = 26;
	static int8_t x668 = -6;
	static volatile uint64_t t20 = 5258LLU;

	t20 = (((x665%x666)<<x667)/x668);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x685 = INT8_MAX;
	static int16_t x686 = INT16_MIN;
	volatile int16_t x687 = 1;
	int16_t x688 = -4;

	t21 = (((x685%x686)<<x687)/x688);

	if (t21 != -63) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x689 = 2906311024710996LLU;
	volatile int8_t x690 = -5;
	static int32_t x692 = 456216423;
	volatile uint64_t t22 = 2035180453LLU;

	t22 = (((x689%x690)<<x691)/x692);

	if (t22 != 12740931LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x721 = 3U;
	int64_t x722 = -1LL;
	int8_t x723 = 0;
	volatile int8_t x724 = INT8_MAX;
	volatile int64_t t23 = -1437735983751LL;

	t23 = (((x721%x722)<<x723)/x724);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x789 = -1;
	int8_t x790 = 1;
	uint8_t x791 = 5U;
	int32_t x792 = INT32_MAX;
	int32_t t24 = -50;

	t24 = (((x789%x790)<<x791)/x792);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x817 = UINT64_MAX;
	static volatile int64_t x818 = -1LL;
	uint8_t x819 = 3U;

	t25 = (((x817%x818)<<x819)/x820);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x821 = 418;
	volatile uint16_t x822 = 212U;
	uint8_t x823 = 1U;
	int64_t x824 = INT64_MIN;
	int64_t t26 = 25067274LL;

	t26 = (((x821%x822)<<x823)/x824);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x953 = -1;
	volatile int64_t x954 = -1LL;
	static volatile int32_t x956 = INT32_MAX;
	volatile int64_t t27 = -1LL;

	t27 = (((x953%x954)<<x955)/x956);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x957 = INT8_MIN;
	static uint32_t x958 = 1602062857U;
	volatile int64_t x959 = 3LL;
	int64_t x960 = INT64_MIN;
	int64_t t28 = -35142LL;

	t28 = (((x957%x958)<<x959)/x960);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x969 = 91419884U;
	int16_t x970 = INT16_MAX;
	uint16_t x971 = 0U;
	uint64_t x972 = 3LLU;
	volatile uint64_t t29 = 7661LLU;

	t29 = (((x969%x970)<<x971)/x972);

	if (t29 != 10907LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x973 = -1LL;
	volatile int8_t x974 = -1;
	int64_t t30 = -147715647LL;

	t30 = (((x973%x974)<<x975)/x976);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x977 = INT16_MIN;
	int16_t x978 = -1;
	static volatile int8_t x980 = -1;
	volatile int32_t t31 = 205607175;

	t31 = (((x977%x978)<<x979)/x980);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1001 = 1928U;
	int64_t x1002 = -128842289365771615LL;
	uint8_t x1003 = 0U;
	int16_t x1004 = -1;

	t32 = (((x1001%x1002)<<x1003)/x1004);

	if (t32 != -1928LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x1005 = UINT64_MAX;
	int8_t x1008 = INT8_MAX;

	t33 = (((x1005%x1006)<<x1007)/x1008);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1053 = 3;
	int16_t x1054 = -1;
	uint8_t x1055 = 6U;
	static volatile int32_t t34 = -6;

	t34 = (((x1053%x1054)<<x1055)/x1056);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1093 = 21;
	static uint64_t x1094 = 777897LLU;
	volatile uint8_t x1095 = 0U;
	volatile int32_t x1096 = INT32_MIN;
	uint64_t t35 = 142309LLU;

	t35 = (((x1093%x1094)<<x1095)/x1096);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x1161 = INT64_MIN;
	uint64_t x1162 = UINT64_MAX;
	static int8_t x1163 = 0;
	int8_t x1164 = INT8_MAX;
	volatile uint64_t t36 = 581LLU;

	t36 = (((x1161%x1162)<<x1163)/x1164);

	if (t36 != 72624976668147841LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x1181 = UINT64_MAX;
	static int32_t x1183 = 25;
	volatile uint64_t t37 = 1503197067323801LLU;

	t37 = (((x1181%x1182)<<x1183)/x1184);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x1218 = -1;
	int8_t x1219 = 1;
	volatile int64_t x1220 = INT64_MIN;
	int64_t t38 = 3729LL;

	t38 = (((x1217%x1218)<<x1219)/x1220);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1241 = 1501U;
	static volatile int16_t x1242 = INT16_MAX;
	volatile uint16_t x1243 = 3U;
	uint8_t x1244 = 103U;
	volatile int32_t t39 = -3699901;

	t39 = (((x1241%x1242)<<x1243)/x1244);

	if (t39 != 116) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1289 = INT64_MIN;
	int64_t x1290 = -1LL;
	int8_t x1291 = 18;
	volatile int64_t t40 = -8245112LL;

	t40 = (((x1289%x1290)<<x1291)/x1292);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x1305 = UINT32_MAX;
	static volatile int32_t x1306 = INT32_MIN;
	uint32_t x1307 = 7U;
	uint32_t t41 = 15263650U;

	t41 = (((x1305%x1306)<<x1307)/x1308);

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x1325 = -1;
	static uint32_t x1326 = 205081831U;
	volatile uint8_t x1327 = 5U;
	int64_t x1328 = -1LL;
	static int64_t t42 = 1332395381268922LL;

	t42 = (((x1325%x1326)<<x1327)/x1328);

	if (t42 != -1891614304LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1349 = 1606U;
	int64_t x1351 = 9LL;
	volatile uint16_t x1352 = UINT16_MAX;
	volatile int32_t t43 = 566113;

	t43 = (((x1349%x1350)<<x1351)/x1352);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x1369 = 13195;
	uint8_t x1371 = 0U;
	uint32_t x1372 = 731896U;
	volatile uint32_t t44 = 154U;

	t44 = (((x1369%x1370)<<x1371)/x1372);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x1413 = 64290U;
	uint16_t x1414 = 195U;
	volatile int16_t x1415 = 1;
	int64_t x1416 = 6300334427693LL;

	t45 = (((x1413%x1414)<<x1415)/x1416);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1417 = UINT32_MAX;
	uint64_t x1419 = 5LLU;
	volatile int8_t x1420 = INT8_MIN;
	int64_t t46 = 930536589969LL;

	t46 = (((x1417%x1418)<<x1419)/x1420);

	if (t46 != -1073741823LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1441 = 6825252;
	uint8_t x1443 = 2U;
	int16_t x1444 = INT16_MIN;
	volatile int32_t t47 = 253795;

	t47 = (((x1441%x1442)<<x1443)/x1444);

	if (t47 != -833) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1453 = 1;
	volatile int32_t x1455 = 4;
	int8_t x1456 = INT8_MIN;
	volatile int64_t t48 = -103487393949862457LL;

	t48 = (((x1453%x1454)<<x1455)/x1456);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x1462 = -1;
	uint16_t x1463 = 14U;
	volatile int32_t x1464 = -1;

	t49 = (((x1461%x1462)<<x1463)/x1464);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1481 = 0U;
	static uint32_t x1483 = 19U;

	t50 = (((x1481%x1482)<<x1483)/x1484);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x1541 = INT8_MAX;
	int32_t x1542 = INT32_MIN;
	static int8_t x1543 = 1;
	int8_t x1544 = 1;

	t51 = (((x1541%x1542)<<x1543)/x1544);

	if (t51 != 254) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x1573 = INT16_MIN;
	int64_t x1574 = -1LL;
	volatile uint8_t x1575 = 2U;
	volatile int32_t x1576 = INT32_MAX;
	volatile int64_t t52 = 898584009469057LL;

	t52 = (((x1573%x1574)<<x1575)/x1576);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1853 = 3U;
	uint8_t x1854 = UINT8_MAX;
	volatile uint16_t x1855 = 26U;
	uint16_t x1856 = 5807U;
	uint32_t t53 = 110081U;

	t53 = (((x1853%x1854)<<x1855)/x1856);

	if (t53 != 34669U) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x1877 = 924;
	uint8_t x1878 = 38U;
	static volatile int16_t x1880 = 2;
	int32_t t54 = -57;

	t54 = (((x1877%x1878)<<x1879)/x1880);

	if (t54 != 6) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1897 = UINT8_MAX;
	int32_t x1898 = -1;
	int8_t x1899 = 5;
	int32_t t55 = 11615;

	t55 = (((x1897%x1898)<<x1899)/x1900);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x1905 = 19100837U;
	int16_t x1906 = INT16_MAX;
	int32_t x1907 = 4;
	static int8_t x1908 = INT8_MIN;
	volatile uint32_t t56 = 1900806139U;

	t56 = (((x1905%x1906)<<x1907)/x1908);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1938 = 4;
	int8_t x1939 = 13;
	int32_t x1940 = -4608765;
	volatile uint64_t t57 = 0LLU;

	t57 = (((x1937%x1938)<<x1939)/x1940);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x1958 = -31;
	static uint16_t x1959 = 2U;
	uint32_t x1960 = 230U;
	uint32_t t58 = 40U;

	t58 = (((x1957%x1958)<<x1959)/x1960);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x2101 = 24347466934776492LL;
	uint16_t x2102 = UINT16_MAX;
	int8_t x2103 = 25;
	static volatile int16_t x2104 = -91;
	int64_t t59 = 1300701480724LL;

	t59 = (((x2101%x2102)<<x2103)/x2104);

	if (t59 != -20457879079LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2125 = 6410;
	static uint16_t x2126 = 12U;
	uint8_t x2127 = 6U;
	static int64_t x2128 = INT64_MAX;
	int64_t t60 = -4221163LL;

	t60 = (((x2125%x2126)<<x2127)/x2128);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2201 = INT16_MIN;
	static uint64_t x2202 = 1324912LLU;
	uint32_t x2204 = UINT32_MAX;
	uint64_t t61 = 297778421369091LLU;

	t61 = (((x2201%x2202)<<x2203)/x2204);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x2218 = 1536144537LLU;
	int16_t x2220 = INT16_MIN;

	t62 = (((x2217%x2218)<<x2219)/x2220);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x2225 = 0;
	int64_t x2226 = INT64_MAX;
	uint32_t x2227 = 4U;
	uint8_t x2228 = UINT8_MAX;
	static volatile int64_t t63 = 26LL;

	t63 = (((x2225%x2226)<<x2227)/x2228);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x2245 = UINT32_MAX;
	volatile uint16_t x2247 = 0U;
	uint8_t x2248 = 109U;

	t64 = (((x2245%x2246)<<x2247)/x2248);

	if (t64 != 1216594U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x2273 = 9U;
	static int16_t x2274 = INT16_MIN;
	volatile int8_t x2275 = 1;
	static int16_t x2276 = INT16_MIN;
	volatile int32_t t65 = 456827;

	t65 = (((x2273%x2274)<<x2275)/x2276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x2309 = 3U;
	static uint8_t x2310 = UINT8_MAX;
	uint8_t x2311 = 6U;
	static int32_t x2312 = 2520050;

	t66 = (((x2309%x2310)<<x2311)/x2312);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x2337 = 648993868241963422LLU;
	volatile int32_t x2340 = -35;
	volatile uint64_t t67 = 8818LLU;

	t67 = (((x2337%x2338)<<x2339)/x2340);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x2365 = INT8_MAX;
	uint64_t x2366 = UINT64_MAX;
	static uint8_t x2367 = 24U;
	volatile int16_t x2368 = -5045;
	static uint64_t t68 = 93LLU;

	t68 = (((x2365%x2366)<<x2367)/x2368);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x2393 = 0;
	static int8_t x2394 = INT8_MIN;
	static uint16_t x2395 = 2U;
	uint32_t x2396 = UINT32_MAX;

	t69 = (((x2393%x2394)<<x2395)/x2396);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2505 = INT8_MAX;
	static int32_t x2506 = 935949;
	uint16_t x2507 = 13U;
	uint8_t x2508 = 85U;
	volatile int32_t t70 = 11810463;

	t70 = (((x2505%x2506)<<x2507)/x2508);

	if (t70 != 12239) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2513 = INT32_MIN;
	volatile int32_t x2515 = 58;
	uint64_t t71 = 668328404122LLU;

	t71 = (((x2513%x2514)<<x2515)/x2516);

	if (t71 != 2012655LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2529 = INT16_MAX;
	int8_t x2530 = -1;
	uint16_t x2532 = 2U;
	volatile int32_t t72 = -1912981;

	t72 = (((x2529%x2530)<<x2531)/x2532);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x2557 = 72431209U;
	static uint64_t x2558 = UINT64_MAX;
	static volatile uint64_t x2559 = 7LLU;
	int16_t x2560 = -1;
	volatile uint64_t t73 = 63620LLU;

	t73 = (((x2557%x2558)<<x2559)/x2560);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x2561 = INT16_MIN;
	int32_t x2562 = -1;
	int16_t x2563 = 1;
	volatile int64_t t74 = -32491LL;

	t74 = (((x2561%x2562)<<x2563)/x2564);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2581 = 0;
	uint32_t x2582 = 138U;
	static uint16_t x2583 = 0U;
	int32_t x2584 = 1;
	uint32_t t75 = 15846197U;

	t75 = (((x2581%x2582)<<x2583)/x2584);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x2601 = -1LL;
	int16_t x2602 = -1;
	uint8_t x2603 = 41U;
	int64_t x2604 = INT64_MIN;
	volatile int64_t t76 = -20LL;

	t76 = (((x2601%x2602)<<x2603)/x2604);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x2641 = UINT8_MAX;
	int64_t x2642 = INT64_MIN;
	uint8_t x2643 = 0U;
	int32_t x2644 = INT32_MIN;
	volatile int64_t t77 = 0LL;

	t77 = (((x2641%x2642)<<x2643)/x2644);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x2693 = INT64_MIN;
	int8_t x2695 = 12;
	volatile int32_t x2696 = INT32_MIN;
	int64_t t78 = -636969LL;

	t78 = (((x2693%x2694)<<x2695)/x2696);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2713 = 276747023;
	int32_t x2714 = INT32_MIN;
	int64_t x2715 = 0LL;
	volatile uint8_t x2716 = 35U;
	int32_t t79 = 10851;

	t79 = (((x2713%x2714)<<x2715)/x2716);

	if (t79 != 7907057) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x2725 = INT32_MIN;
	uint8_t x2727 = 6U;
	int16_t x2728 = INT16_MIN;

	t80 = (((x2725%x2726)<<x2727)/x2728);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x2737 = -10255;
	volatile uint32_t x2738 = 6U;
	static volatile int16_t x2739 = 5;
	uint16_t x2740 = UINT16_MAX;
	uint32_t t81 = 404U;

	t81 = (((x2737%x2738)<<x2739)/x2740);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2789 = INT64_MAX;
	static int8_t x2790 = INT8_MIN;
	uint32_t x2791 = 8U;
	static volatile uint8_t x2792 = UINT8_MAX;

	t82 = (((x2789%x2790)<<x2791)/x2792);

	if (t82 != 127LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x2793 = INT32_MIN;
	static uint32_t x2794 = 93488104U;
	int8_t x2795 = 2;
	uint16_t x2796 = 2713U;
	volatile uint32_t t83 = 12424U;

	t83 = (((x2793%x2794)<<x2795)/x2796);

	if (t83 != 133793U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x2813 = 329032216U;
	int16_t x2814 = -1;
	static uint32_t x2815 = 0U;
	static int16_t x2816 = INT16_MAX;
	static uint32_t t84 = 4078932U;

	t84 = (((x2813%x2814)<<x2815)/x2816);

	if (t84 != 10041U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2933 = 0;
	int16_t x2934 = INT16_MAX;
	int8_t x2935 = 1;
	uint16_t x2936 = UINT16_MAX;
	int32_t t85 = 43292762;

	t85 = (((x2933%x2934)<<x2935)/x2936);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x2937 = UINT32_MAX;
	static volatile int8_t x2938 = INT8_MIN;
	uint16_t x2939 = 16U;
	uint32_t t86 = 533490U;

	t86 = (((x2937%x2938)<<x2939)/x2940);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2941 = INT8_MAX;
	static int32_t x2942 = -1;
	volatile int16_t x2944 = -1;
	int32_t t87 = -65737716;

	t87 = (((x2941%x2942)<<x2943)/x2944);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2966 = -10340;
	volatile int64_t t88 = -8578LL;

	t88 = (((x2965%x2966)<<x2967)/x2968);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3057 = 0;
	int16_t x3058 = INT16_MIN;
	int8_t x3059 = 10;
	volatile uint8_t x3060 = 1U;

	t89 = (((x3057%x3058)<<x3059)/x3060);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x3089 = -1LL;
	uint64_t x3090 = 126185038064831LLU;
	volatile uint16_t x3091 = 3U;
	volatile uint64_t t90 = 17530LLU;

	t90 = (((x3089%x3090)<<x3091)/x3092);

	if (t90 != 9166540859819LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x3105 = 712U;
	static int8_t x3106 = INT8_MIN;
	static int16_t x3107 = 3;
	volatile int32_t t91 = -30530276;

	t91 = (((x3105%x3106)<<x3107)/x3108);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x3109 = 82824U;
	int8_t x3111 = 3;
	static volatile int64_t x3112 = -4233299262654423LL;

	t92 = (((x3109%x3110)<<x3111)/x3112);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x3124 = 1U;
	volatile int32_t t93 = 1;

	t93 = (((x3121%x3122)<<x3123)/x3124);

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x3133 = INT32_MAX;
	static uint8_t x3134 = 1U;
	uint8_t x3135 = 15U;
	int32_t x3136 = -93554;

	t94 = (((x3133%x3134)<<x3135)/x3136);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x3177 = 1;
	uint64_t x3178 = 14012529LLU;
	static int8_t x3179 = 2;
	int16_t x3180 = INT16_MIN;
	static uint64_t t95 = 1592247721302649LLU;

	t95 = (((x3177%x3178)<<x3179)/x3180);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x3221 = -1;
	static int32_t x3222 = -1;
	volatile uint8_t x3223 = 0U;
	static int64_t x3224 = INT64_MAX;
	int64_t t96 = -27948383604529267LL;

	t96 = (((x3221%x3222)<<x3223)/x3224);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3265 = 1811350;
	static volatile int8_t x3266 = 2;
	uint64_t x3267 = 6LLU;
	volatile uint8_t x3268 = 5U;
	int32_t t97 = -14546;

	t97 = (((x3265%x3266)<<x3267)/x3268);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3346 = -1;
	uint64_t x3347 = 10LLU;
	static int16_t x3348 = 1;
	uint32_t t98 = 1834U;

	t98 = (((x3345%x3346)<<x3347)/x3348);

	if (t98 != 11264U) { NG(); } else { ; }
	
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


    return 0;
}


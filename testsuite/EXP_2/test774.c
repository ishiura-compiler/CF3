#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x25 = UINT16_MAX;
volatile int64_t x29 = INT64_MAX;
int16_t x30 = INT16_MIN;
uint8_t x32 = 19U;
static int64_t x38 = INT64_MAX;
static uint64_t x77 = UINT64_MAX;
static volatile int16_t x135 = 17;
static int16_t x136 = 27;
uint8_t x164 = 3U;
int32_t t6 = -101190;
static uint16_t x182 = 2317U;
uint16_t x184 = 3U;
int64_t x190 = INT64_MIN;
uint8_t x216 = 20U;
int32_t t9 = 14214;
int16_t x217 = INT16_MIN;
static uint16_t x219 = 2U;
volatile int64_t x282 = INT64_MIN;
int16_t x332 = 16;
int32_t t12 = -2007;
int32_t t13 = -17711;
uint64_t x438 = 607664040LLU;
int32_t x539 = -115;
uint8_t x541 = UINT8_MAX;
volatile int32_t t17 = -1;
volatile uint16_t x578 = 5423U;
uint16_t x586 = 2949U;
uint8_t x588 = 16U;
int32_t t19 = 16031;
uint16_t x635 = 1476U;
uint16_t x636 = 3U;
uint32_t x728 = 0U;
int32_t x770 = 419239;
int16_t x806 = -1;
static uint16_t x808 = 1U;
static int16_t x809 = -4;
volatile int64_t x837 = INT64_MIN;
static volatile int32_t x838 = INT32_MAX;
uint64_t x839 = 59758052446013LLU;
static uint8_t x840 = 3U;
static volatile int32_t t27 = -45678;
volatile int64_t x850 = INT64_MAX;
volatile uint8_t x861 = UINT8_MAX;
uint16_t x863 = 595U;
int32_t t30 = -20677;
uint64_t x1037 = 21082LLU;
volatile uint32_t x1069 = 24478U;
uint64_t x1190 = UINT64_MAX;
uint16_t x1192 = 13U;
static uint8_t x1194 = 2U;
static int32_t x1195 = 10072838;
static int32_t x1307 = -27215;
uint16_t x1313 = UINT16_MAX;
uint8_t x1343 = UINT8_MAX;
int16_t x1367 = INT16_MAX;
uint8_t x1379 = UINT8_MAX;
volatile uint32_t x1422 = 714681U;
volatile int32_t t48 = 377;
uint64_t x1479 = 5180865736133840LLU;
static int32_t t52 = 493;
int64_t x1507 = -1LL;
uint8_t x1588 = 12U;
static volatile int8_t x1590 = INT8_MIN;
static volatile int8_t x1592 = 17;
volatile int32_t t55 = -17105381;
int64_t x1635 = INT64_MIN;
uint16_t x1674 = 13U;
volatile int8_t x1696 = 2;
uint8_t x1712 = 31U;
int64_t x1729 = INT64_MIN;
volatile int32_t t63 = -5225115;
int8_t x1774 = -1;
int32_t t64 = 0;
uint64_t x1838 = 525890884463831036LLU;
static int32_t x1897 = 9451005;
static int64_t x1929 = INT64_MIN;
int32_t t72 = 2736840;
uint16_t x1996 = 11U;
int32_t t73 = 82251704;
int32_t t74 = -777;
static uint64_t x2070 = UINT64_MAX;
int16_t x2091 = INT16_MIN;
volatile int64_t x2115 = INT64_MIN;
static uint16_t x2121 = 59U;
int64_t x2123 = -1LL;
int64_t x2145 = INT64_MIN;
int64_t x2147 = -1LL;
uint16_t x2159 = 27869U;
int32_t t82 = -7;
int16_t x2221 = -1;
static volatile int64_t x2222 = INT64_MAX;
volatile int16_t x2224 = 27;
volatile int32_t t85 = -229530118;
uint16_t x2249 = 6036U;
int8_t x2294 = 3;
volatile uint32_t x2295 = 33068884U;
int16_t x2337 = INT16_MAX;
int32_t x2338 = 188545;
volatile int32_t t89 = 1587;
volatile int32_t t90 = 1654771;
uint8_t x2402 = UINT8_MAX;
int32_t t91 = 3;
uint32_t x2516 = 5U;
volatile int32_t x2557 = -1;
int64_t x2631 = 311579LL;
int64_t x2641 = INT64_MAX;
int32_t t95 = 455603534;
int32_t x2709 = -1;
uint8_t x2711 = UINT8_MAX;
int8_t x2913 = INT8_MIN;
volatile int32_t t98 = -1752449;


void f0(void) {
	int16_t x26 = -2366;
	int32_t x27 = 18;
	volatile int16_t x28 = 3;
	volatile int32_t t0 = 1438;

	t0 = ((x25==(x26%x27))>>x28);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x31 = -3;
	int32_t t1 = -529327717;

	t1 = ((x29==(x30%x31))>>x32);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x37 = UINT32_MAX;
	int16_t x39 = INT16_MAX;
	static uint32_t x40 = 1U;
	volatile int32_t t2 = -113818;

	t2 = ((x37==(x38%x39))>>x40);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x78 = INT8_MIN;
	int64_t x79 = INT64_MIN;
	uint32_t x80 = 9U;
	static volatile int32_t t3 = -15;

	t3 = ((x77==(x78%x79))>>x80);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x133 = 13444LLU;
	uint64_t x134 = 2174LLU;
	int32_t t4 = -118;

	t4 = ((x133==(x134%x135))>>x136);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x161 = 180485U;
	int16_t x162 = -1;
	uint16_t x163 = 1598U;
	volatile int32_t t5 = 18;

	t5 = ((x161==(x162%x163))>>x164);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x173 = INT16_MIN;
	static int32_t x174 = 4;
	static uint64_t x175 = UINT64_MAX;
	volatile int64_t x176 = 26LL;

	t6 = ((x173==(x174%x175))>>x176);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x181 = 6974157160LLU;
	volatile int8_t x183 = INT8_MAX;
	int32_t t7 = 274342811;

	t7 = ((x181==(x182%x183))>>x184);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x189 = 12839;
	static int8_t x191 = 1;
	uint64_t x192 = 3LLU;
	int32_t t8 = -1809;

	t8 = ((x189==(x190%x191))>>x192);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x213 = 171U;
	static int32_t x214 = 3691;
	static int8_t x215 = INT8_MIN;

	t9 = ((x213==(x214%x215))>>x216);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x218 = 20211U;
	int16_t x220 = 17;
	volatile int32_t t10 = 3549372;

	t10 = ((x217==(x218%x219))>>x220);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x281 = UINT32_MAX;
	int16_t x283 = INT16_MIN;
	int8_t x284 = 19;
	static int32_t t11 = -15;

	t11 = ((x281==(x282%x283))>>x284);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x329 = 1;
	static int16_t x330 = INT16_MIN;
	int64_t x331 = INT64_MIN;

	t12 = ((x329==(x330%x331))>>x332);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x397 = UINT8_MAX;
	static volatile uint32_t x398 = 325U;
	volatile uint64_t x399 = 690324747005LLU;
	uint16_t x400 = 0U;

	t13 = ((x397==(x398%x399))>>x400);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x433 = 26;
	static uint64_t x434 = UINT64_MAX;
	volatile uint64_t x435 = UINT64_MAX;
	static int64_t x436 = 13LL;
	static volatile int32_t t14 = 0;

	t14 = ((x433==(x434%x435))>>x436);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x437 = 25347615116206LLU;
	int64_t x439 = INT64_MAX;
	int8_t x440 = 0;
	static int32_t t15 = -83;

	t15 = ((x437==(x438%x439))>>x440);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x537 = UINT8_MAX;
	int64_t x538 = INT64_MIN;
	int8_t x540 = 4;
	int32_t t16 = -112643361;

	t16 = ((x537==(x538%x539))>>x540);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x542 = INT16_MIN;
	uint16_t x543 = UINT16_MAX;
	static uint16_t x544 = 1U;

	t17 = ((x541==(x542%x543))>>x544);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x577 = INT16_MAX;
	int8_t x579 = 42;
	int8_t x580 = 0;
	volatile int32_t t18 = 1;

	t18 = ((x577==(x578%x579))>>x580);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x585 = INT32_MIN;
	static int32_t x587 = INT32_MAX;

	t19 = ((x585==(x586%x587))>>x588);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x629 = UINT16_MAX;
	volatile int32_t x630 = INT32_MAX;
	int64_t x631 = -31628LL;
	static int16_t x632 = 10;
	int32_t t20 = -5270;

	t20 = ((x629==(x630%x631))>>x632);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x633 = 73629957;
	uint8_t x634 = 1U;
	volatile int32_t t21 = 1;

	t21 = ((x633==(x634%x635))>>x636);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x725 = -1LL;
	int16_t x726 = INT16_MAX;
	static volatile int32_t x727 = INT32_MAX;
	int32_t t22 = 0;

	t22 = ((x725==(x726%x727))>>x728);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x769 = UINT16_MAX;
	int64_t x771 = -114626401LL;
	uint16_t x772 = 3U;
	int32_t t23 = 7577857;

	t23 = ((x769==(x770%x771))>>x772);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x805 = UINT16_MAX;
	int16_t x807 = -14;
	volatile int32_t t24 = -29792;

	t24 = ((x805==(x806%x807))>>x808);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x810 = INT8_MAX;
	uint8_t x811 = 27U;
	static int8_t x812 = 0;
	volatile int32_t t25 = -16412776;

	t25 = ((x809==(x810%x811))>>x812);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x829 = 2527996U;
	int32_t x830 = INT32_MAX;
	volatile int32_t x831 = INT32_MIN;
	volatile int8_t x832 = 29;
	volatile int32_t t26 = -15164170;

	t26 = ((x829==(x830%x831))>>x832);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {


	t27 = ((x837==(x838%x839))>>x840);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x849 = -1;
	uint32_t x851 = UINT32_MAX;
	uint8_t x852 = 17U;
	int32_t t28 = -217;

	t28 = ((x849==(x850%x851))>>x852);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x862 = 6;
	volatile int16_t x864 = 0;
	volatile int32_t t29 = 161333;

	t29 = ((x861==(x862%x863))>>x864);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x893 = INT32_MIN;
	int8_t x894 = INT8_MIN;
	int64_t x895 = INT64_MIN;
	static uint8_t x896 = 13U;

	t30 = ((x893==(x894%x895))>>x896);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x929 = UINT64_MAX;
	int64_t x930 = -1LL;
	int64_t x931 = -1LL;
	static uint8_t x932 = 21U;
	int32_t t31 = -48289653;

	t31 = ((x929==(x930%x931))>>x932);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1038 = UINT32_MAX;
	volatile uint16_t x1039 = 1U;
	int32_t x1040 = 1;
	volatile int32_t t32 = -26083252;

	t32 = ((x1037==(x1038%x1039))>>x1040);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1070 = INT16_MIN;
	static uint32_t x1071 = UINT32_MAX;
	int16_t x1072 = 2;
	int32_t t33 = -424036;

	t33 = ((x1069==(x1070%x1071))>>x1072);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x1133 = UINT32_MAX;
	volatile int32_t x1134 = INT32_MAX;
	volatile int8_t x1135 = INT8_MIN;
	uint8_t x1136 = 3U;
	int32_t t34 = -21;

	t34 = ((x1133==(x1134%x1135))>>x1136);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x1153 = 208844;
	volatile int64_t x1154 = 48939940374325431LL;
	uint16_t x1155 = 43U;
	uint8_t x1156 = 0U;
	int32_t t35 = 75323;

	t35 = ((x1153==(x1154%x1155))>>x1156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1189 = UINT8_MAX;
	volatile uint32_t x1191 = 14U;
	volatile int32_t t36 = 9;

	t36 = ((x1189==(x1190%x1191))>>x1192);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1193 = 2;
	int64_t x1196 = 0LL;
	static volatile int32_t t37 = 13767;

	t37 = ((x1193==(x1194%x1195))>>x1196);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1209 = INT8_MIN;
	int16_t x1210 = -106;
	uint64_t x1211 = 6870026578LLU;
	int16_t x1212 = 5;
	int32_t t38 = -11611122;

	t38 = ((x1209==(x1210%x1211))>>x1212);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x1249 = 23;
	volatile int32_t x1250 = INT32_MAX;
	volatile int32_t x1251 = INT32_MAX;
	int32_t x1252 = 1;
	volatile int32_t t39 = 1921;

	t39 = ((x1249==(x1250%x1251))>>x1252);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x1297 = 0U;
	volatile int32_t x1298 = -2160897;
	static volatile int32_t x1299 = INT32_MAX;
	int8_t x1300 = 7;
	static int32_t t40 = 5596;

	t40 = ((x1297==(x1298%x1299))>>x1300);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1301 = UINT8_MAX;
	uint16_t x1302 = 2940U;
	int64_t x1303 = INT64_MIN;
	uint8_t x1304 = 0U;
	int32_t t41 = 55017;

	t41 = ((x1301==(x1302%x1303))>>x1304);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1305 = 5;
	uint32_t x1306 = UINT32_MAX;
	uint32_t x1308 = 0U;
	static volatile int32_t t42 = -986;

	t42 = ((x1305==(x1306%x1307))>>x1308);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1314 = 10141U;
	volatile int64_t x1315 = 1700636163146630237LL;
	uint8_t x1316 = 1U;
	volatile int32_t t43 = 0;

	t43 = ((x1313==(x1314%x1315))>>x1316);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1341 = 100U;
	int64_t x1342 = -25902247449LL;
	volatile int32_t x1344 = 0;
	static volatile int32_t t44 = 961158;

	t44 = ((x1341==(x1342%x1343))>>x1344);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1365 = 50357;
	static uint32_t x1366 = 11013U;
	uint32_t x1368 = 4U;
	volatile int32_t t45 = 1679943;

	t45 = ((x1365==(x1366%x1367))>>x1368);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1377 = INT32_MIN;
	int64_t x1378 = INT64_MIN;
	volatile uint8_t x1380 = 27U;
	volatile int32_t t46 = -8077;

	t46 = ((x1377==(x1378%x1379))>>x1380);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1385 = 332169;
	int64_t x1386 = -1LL;
	static int64_t x1387 = 28710653083LL;
	static uint32_t x1388 = 1U;
	int32_t t47 = -98115;

	t47 = ((x1385==(x1386%x1387))>>x1388);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x1421 = 10140903LL;
	uint8_t x1423 = UINT8_MAX;
	int32_t x1424 = 7;

	t48 = ((x1421==(x1422%x1423))>>x1424);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x1425 = -1;
	int16_t x1426 = INT16_MAX;
	int32_t x1427 = 1739275;
	int8_t x1428 = 0;
	volatile int32_t t49 = 9023;

	t49 = ((x1425==(x1426%x1427))>>x1428);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1437 = 131498643590660129LLU;
	int16_t x1438 = -1760;
	int8_t x1439 = -1;
	uint16_t x1440 = 9U;
	int32_t t50 = 561309804;

	t50 = ((x1437==(x1438%x1439))>>x1440);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1465 = 1;
	int32_t x1466 = -1;
	int64_t x1467 = -1LL;
	uint8_t x1468 = 2U;
	int32_t t51 = -1;

	t51 = ((x1465==(x1466%x1467))>>x1468);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1477 = 150;
	volatile uint8_t x1478 = UINT8_MAX;
	uint16_t x1480 = 23U;

	t52 = ((x1477==(x1478%x1479))>>x1480);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x1505 = 0;
	uint64_t x1506 = 280LLU;
	uint16_t x1508 = 21U;
	volatile int32_t t53 = 1701;

	t53 = ((x1505==(x1506%x1507))>>x1508);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1585 = -3LL;
	uint8_t x1586 = UINT8_MAX;
	volatile uint16_t x1587 = UINT16_MAX;
	int32_t t54 = -264019191;

	t54 = ((x1585==(x1586%x1587))>>x1588);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1589 = -249207382372367LL;
	static int8_t x1591 = INT8_MIN;

	t55 = ((x1589==(x1590%x1591))>>x1592);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1633 = -1;
	int64_t x1634 = INT64_MAX;
	uint16_t x1636 = 1U;
	static int32_t t56 = 66376;

	t56 = ((x1633==(x1634%x1635))>>x1636);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x1657 = -10900;
	int32_t x1658 = -1;
	int32_t x1659 = 8051;
	int8_t x1660 = 0;
	int32_t t57 = -95;

	t57 = ((x1657==(x1658%x1659))>>x1660);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1665 = 1;
	int8_t x1666 = INT8_MIN;
	volatile int64_t x1667 = INT64_MIN;
	uint8_t x1668 = 6U;
	volatile int32_t t58 = -58523;

	t58 = ((x1665==(x1666%x1667))>>x1668);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1673 = UINT8_MAX;
	volatile int8_t x1675 = INT8_MAX;
	uint16_t x1676 = 0U;
	int32_t t59 = -2032265;

	t59 = ((x1673==(x1674%x1675))>>x1676);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x1685 = INT8_MAX;
	static uint64_t x1686 = 204425970LLU;
	int32_t x1687 = INT32_MIN;
	volatile uint8_t x1688 = 23U;
	static int32_t t60 = 3522;

	t60 = ((x1685==(x1686%x1687))>>x1688);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1693 = -1LL;
	uint64_t x1694 = 88046565890260LLU;
	volatile uint8_t x1695 = 2U;
	static volatile int32_t t61 = 373;

	t61 = ((x1693==(x1694%x1695))>>x1696);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1709 = INT8_MIN;
	uint32_t x1710 = 11U;
	volatile uint16_t x1711 = 14U;
	volatile int32_t t62 = -2077;

	t62 = ((x1709==(x1710%x1711))>>x1712);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x1730 = INT8_MAX;
	int32_t x1731 = INT32_MIN;
	int8_t x1732 = 0;

	t63 = ((x1729==(x1730%x1731))>>x1732);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1773 = INT8_MIN;
	int64_t x1775 = INT64_MIN;
	uint8_t x1776 = 10U;

	t64 = ((x1773==(x1774%x1775))>>x1776);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x1813 = UINT64_MAX;
	uint64_t x1814 = 4854LLU;
	int64_t x1815 = INT64_MIN;
	uint64_t x1816 = 6LLU;
	int32_t t65 = -185221921;

	t65 = ((x1813==(x1814%x1815))>>x1816);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x1837 = INT32_MAX;
	volatile int64_t x1839 = 524241127361LL;
	int8_t x1840 = 23;
	volatile int32_t t66 = 190813831;

	t66 = ((x1837==(x1838%x1839))>>x1840);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x1853 = 45;
	static int8_t x1854 = INT8_MIN;
	int8_t x1855 = -1;
	uint64_t x1856 = 3LLU;
	int32_t t67 = -152;

	t67 = ((x1853==(x1854%x1855))>>x1856);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1893 = INT16_MIN;
	int8_t x1894 = INT8_MAX;
	static int32_t x1895 = INT32_MIN;
	static volatile uint8_t x1896 = 0U;
	volatile int32_t t68 = -102;

	t68 = ((x1893==(x1894%x1895))>>x1896);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x1898 = -32000;
	static int16_t x1899 = -1;
	int8_t x1900 = 1;
	int32_t t69 = -434;

	t69 = ((x1897==(x1898%x1899))>>x1900);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x1921 = 1;
	static volatile int8_t x1922 = INT8_MIN;
	uint8_t x1923 = UINT8_MAX;
	int8_t x1924 = 1;
	int32_t t70 = 7;

	t70 = ((x1921==(x1922%x1923))>>x1924);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x1930 = -495;
	uint8_t x1931 = 91U;
	int8_t x1932 = 0;
	static int32_t t71 = -2011612;

	t71 = ((x1929==(x1930%x1931))>>x1932);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x1941 = 20;
	int64_t x1942 = -1LL;
	int8_t x1943 = INT8_MIN;
	uint16_t x1944 = 14U;

	t72 = ((x1941==(x1942%x1943))>>x1944);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x1993 = UINT64_MAX;
	int32_t x1994 = -1;
	uint16_t x1995 = 106U;

	t73 = ((x1993==(x1994%x1995))>>x1996);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2017 = INT32_MIN;
	int32_t x2018 = INT32_MAX;
	int32_t x2019 = 338;
	static uint32_t x2020 = 6U;

	t74 = ((x2017==(x2018%x2019))>>x2020);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2069 = UINT8_MAX;
	volatile uint8_t x2071 = 95U;
	static int16_t x2072 = 1;
	static volatile int32_t t75 = 16450682;

	t75 = ((x2069==(x2070%x2071))>>x2072);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2081 = -301584857627LL;
	int16_t x2082 = INT16_MIN;
	uint64_t x2083 = 1932403LLU;
	static volatile int32_t x2084 = 1;
	volatile int32_t t76 = 91981;

	t76 = ((x2081==(x2082%x2083))>>x2084);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x2089 = 261448U;
	static volatile uint8_t x2090 = UINT8_MAX;
	volatile uint16_t x2092 = 13U;
	int32_t t77 = -2931126;

	t77 = ((x2089==(x2090%x2091))>>x2092);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x2113 = INT32_MIN;
	int64_t x2114 = INT64_MIN;
	uint32_t x2116 = 4U;
	static volatile int32_t t78 = 243923886;

	t78 = ((x2113==(x2114%x2115))>>x2116);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x2122 = -23;
	int16_t x2124 = 3;
	volatile int32_t t79 = 809696125;

	t79 = ((x2121==(x2122%x2123))>>x2124);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x2146 = 1U;
	uint8_t x2148 = 14U;
	volatile int32_t t80 = -2;

	t80 = ((x2145==(x2146%x2147))>>x2148);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x2149 = 8U;
	int8_t x2150 = -14;
	volatile int32_t x2151 = -1;
	static volatile uint32_t x2152 = 26U;
	volatile int32_t t81 = -181254;

	t81 = ((x2149==(x2150%x2151))>>x2152);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x2157 = -1LL;
	int8_t x2158 = INT8_MAX;
	uint8_t x2160 = 7U;

	t82 = ((x2157==(x2158%x2159))>>x2160);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x2173 = UINT32_MAX;
	int16_t x2174 = 1050;
	int16_t x2175 = INT16_MIN;
	uint32_t x2176 = 11U;
	int32_t t83 = 1916078;

	t83 = ((x2173==(x2174%x2175))>>x2176);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x2193 = -1;
	int32_t x2194 = INT32_MIN;
	int64_t x2195 = INT64_MIN;
	uint8_t x2196 = 3U;
	volatile int32_t t84 = 184;

	t84 = ((x2193==(x2194%x2195))>>x2196);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2223 = 43U;

	t85 = ((x2221==(x2222%x2223))>>x2224);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x2250 = INT64_MIN;
	int32_t x2251 = INT32_MIN;
	int16_t x2252 = 0;
	int32_t t86 = -3;

	t86 = ((x2249==(x2250%x2251))>>x2252);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x2293 = INT8_MIN;
	volatile int16_t x2296 = 1;
	volatile int32_t t87 = -218;

	t87 = ((x2293==(x2294%x2295))>>x2296);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2301 = INT16_MIN;
	uint16_t x2302 = 327U;
	volatile int16_t x2303 = INT16_MAX;
	static uint8_t x2304 = 0U;
	int32_t t88 = 223;

	t88 = ((x2301==(x2302%x2303))>>x2304);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x2339 = INT8_MIN;
	uint8_t x2340 = 0U;

	t89 = ((x2337==(x2338%x2339))>>x2340);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x2393 = 3;
	uint32_t x2394 = 231188629U;
	int32_t x2395 = 1;
	uint8_t x2396 = 12U;

	t90 = ((x2393==(x2394%x2395))>>x2396);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x2401 = INT8_MAX;
	static uint8_t x2403 = 7U;
	uint8_t x2404 = 3U;

	t91 = ((x2401==(x2402%x2403))>>x2404);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x2513 = -1;
	int16_t x2514 = INT16_MIN;
	static int64_t x2515 = -1851LL;
	int32_t t92 = -60925965;

	t92 = ((x2513==(x2514%x2515))>>x2516);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x2558 = 113U;
	static uint64_t x2559 = UINT64_MAX;
	uint8_t x2560 = 2U;
	volatile int32_t t93 = -1632;

	t93 = ((x2557==(x2558%x2559))>>x2560);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x2629 = INT32_MAX;
	static volatile uint16_t x2630 = UINT16_MAX;
	int16_t x2632 = 9;
	int32_t t94 = -15172;

	t94 = ((x2629==(x2630%x2631))>>x2632);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x2642 = -383247055;
	int64_t x2643 = INT64_MIN;
	uint16_t x2644 = 13U;

	t95 = ((x2641==(x2642%x2643))>>x2644);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x2685 = INT64_MIN;
	static uint32_t x2686 = 7U;
	volatile int32_t x2687 = INT32_MAX;
	int8_t x2688 = 1;
	volatile int32_t t96 = 10043;

	t96 = ((x2685==(x2686%x2687))>>x2688);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x2710 = INT64_MIN;
	int8_t x2712 = 3;
	volatile int32_t t97 = -996434;

	t97 = ((x2709==(x2710%x2711))>>x2712);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x2914 = -1;
	volatile uint32_t x2915 = 3737046U;
	int16_t x2916 = 15;

	t98 = ((x2913==(x2914%x2915))>>x2916);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2961 = INT32_MAX;
	int8_t x2962 = INT8_MIN;
	int64_t x2963 = -38984134333110LL;
	int16_t x2964 = 25;
	int32_t t99 = -25427;

	t99 = ((x2961==(x2962%x2963))>>x2964);

	if (t99 != 0) { NG(); } else { ; }
	
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


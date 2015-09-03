#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x31 = 169523U;
volatile int16_t x61 = INT16_MAX;
static int8_t x104 = 0;
volatile int64_t t3 = -752331877LL;
volatile uint64_t t4 = 1975824LLU;
volatile uint32_t x218 = 731606U;
uint64_t x249 = 4437870158460505LLU;
uint32_t x301 = 231725U;
static uint16_t x461 = UINT16_MAX;
int32_t t9 = -54226;
int8_t x473 = -1;
volatile int64_t t12 = 15591313LL;
volatile int16_t x583 = INT16_MIN;
volatile uint64_t t16 = 2410033590LLU;
volatile uint64_t t17 = 96732149422239618LLU;
int64_t t18 = -14819928274266LL;
int8_t x769 = -1;
uint32_t x770 = UINT32_MAX;
uint32_t x772 = 1U;
static uint64_t x873 = UINT64_MAX;
static volatile int64_t x874 = INT64_MAX;
int32_t x890 = -1;
static uint32_t x891 = UINT32_MAX;
uint32_t x1132 = 0U;
volatile int64_t t24 = -10561LL;
int16_t x1247 = INT16_MAX;
int8_t x1408 = 27;
static int16_t x1422 = INT16_MIN;
uint32_t x1515 = 419109U;
static int32_t t35 = -1743;
int16_t x1789 = -1;
int8_t x1790 = INT8_MIN;
uint32_t x1810 = 26U;
uint8_t x1812 = 51U;
int16_t x1818 = INT16_MIN;
uint8_t x1820 = 7U;
int8_t x1882 = INT8_MAX;
volatile int64_t x1986 = -37060LL;
static int32_t x1995 = 2;
static int8_t x2000 = 9;
static int64_t x2021 = INT64_MIN;
uint64_t t48 = 4940914868719540LLU;
int8_t x2186 = INT8_MIN;
volatile int16_t x2200 = 20;
volatile uint64_t t51 = 0LLU;
static volatile uint32_t x2374 = 301U;
uint32_t x2381 = 1784U;
volatile uint32_t x2442 = 4U;
int8_t x2443 = INT8_MIN;
volatile int8_t x2469 = -1;
static volatile int64_t t56 = -4900211484LL;
volatile int32_t x2473 = 395245;
uint16_t x2476 = 12U;
int16_t x2606 = INT16_MAX;
uint8_t x2607 = 6U;
volatile uint32_t t60 = 192659U;
int64_t t61 = -3565840LL;
int16_t x2655 = 0;
uint64_t x2863 = UINT64_MAX;
static uint8_t x2864 = 6U;
int16_t x2891 = INT16_MIN;
static uint8_t x2904 = 1U;
int32_t x3006 = INT32_MIN;
int32_t x3013 = INT32_MAX;
uint64_t x3014 = 10257170LLU;
volatile uint64_t t73 = 320662LLU;
static uint8_t x3146 = 57U;
volatile uint64_t t74 = 61717LLU;
static uint64_t x3345 = 2976561102499138LLU;
int16_t x3348 = 0;
int64_t x3361 = INT64_MAX;
int32_t x3362 = INT32_MIN;
static int16_t x3388 = 0;
static uint64_t t77 = 534423256LLU;
int64_t t78 = -2357053661LL;
int32_t x3484 = 0;
uint64_t t79 = 732373797810532LLU;
static volatile int64_t t80 = 262864LL;
static volatile int32_t x3612 = 23;
uint32_t x3692 = 23U;
uint16_t x3818 = UINT16_MAX;
static int32_t t85 = -6729;
volatile uint32_t t86 = 347U;
int8_t x3867 = 11;
volatile uint64_t t89 = 51457245527LLU;
int8_t x3966 = INT8_MAX;
int8_t x4105 = INT8_MAX;
int32_t x4106 = -1;
static uint64_t x4107 = UINT64_MAX;
uint8_t x4108 = 1U;
int64_t x4109 = -1LL;
uint8_t x4172 = 26U;
volatile int32_t x4221 = -28;
uint8_t x4280 = 6U;
uint16_t x4287 = 17677U;
int8_t x4300 = 0;


void f0(void) {
	uint32_t x17 = 312U;
	volatile int16_t x18 = -1;
	uint16_t x19 = UINT16_MAX;
	uint32_t x20 = 6U;
	static uint32_t t0 = 41941850U;

	t0 = (((x17%x18)+x19)>>x20);

	if (t0 != 1028U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x29 = INT64_MIN;
	int16_t x30 = INT16_MAX;
	int8_t x32 = 24;
	static volatile int64_t t1 = 876134265984LL;

	t1 = (((x29%x30)+x31)>>x32);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x62 = 702652142567853247LLU;
	int32_t x63 = 18;
	volatile uint8_t x64 = 6U;
	static uint64_t t2 = 7LLU;

	t2 = (((x61%x62)+x63)>>x64);

	if (t2 != 512LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x101 = INT64_MIN;
	uint8_t x102 = 65U;
	int32_t x103 = INT32_MAX;

	t3 = (((x101%x102)+x103)>>x104);

	if (t3 != 2147483639LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint64_t x193 = UINT64_MAX;
	int64_t x194 = -1LL;
	static volatile int8_t x195 = INT8_MIN;
	uint8_t x196 = 2U;

	t4 = (((x193%x194)+x195)>>x196);

	if (t4 != 4611686018427387872LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x217 = 173987023557932507LLU;
	int8_t x219 = INT8_MIN;
	static int32_t x220 = 1;
	uint64_t t5 = 134129055859509782LLU;

	t5 = (((x217%x218)+x219)>>x220);

	if (t5 != 186371LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x237 = 1393150LLU;
	uint8_t x238 = 4U;
	int32_t x239 = INT32_MIN;
	uint64_t x240 = 1LLU;
	volatile uint64_t t6 = 28068398LLU;

	t6 = (((x237%x238)+x239)>>x240);

	if (t6 != 9223372035781033985LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x250 = -1;
	uint16_t x251 = 1U;
	uint8_t x252 = 0U;
	uint64_t t7 = 9600604492LLU;

	t7 = (((x249%x250)+x251)>>x252);

	if (t7 != 4437870158460506LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x302 = 1;
	volatile uint64_t x303 = 356640741029LLU;
	static int16_t x304 = 0;
	uint64_t t8 = 2505393011605304454LLU;

	t8 = (((x301%x302)+x303)>>x304);

	if (t8 != 356640741029LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x462 = INT32_MIN;
	int8_t x463 = INT8_MIN;
	static int16_t x464 = 10;

	t9 = (((x461%x462)+x463)>>x464);

	if (t9 != 63) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x474 = 12U;
	uint64_t x475 = 1969488798073134590LLU;
	int8_t x476 = 0;
	static volatile uint64_t t10 = 355LLU;

	t10 = (((x473%x474)+x475)>>x476);

	if (t10 != 1969488798073134589LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x477 = INT64_MIN;
	int8_t x478 = INT8_MAX;
	uint8_t x479 = 4U;
	uint32_t x480 = 1U;
	static volatile int64_t t11 = 12780LL;

	t11 = (((x477%x478)+x479)>>x480);

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x485 = UINT32_MAX;
	volatile int64_t x486 = INT64_MIN;
	static int32_t x487 = -1;
	uint8_t x488 = 11U;

	t12 = (((x485%x486)+x487)>>x488);

	if (t12 != 2097151LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x537 = 0;
	volatile int8_t x538 = -39;
	static uint16_t x539 = 1U;
	int8_t x540 = 0;
	int32_t t13 = 2512;

	t13 = (((x537%x538)+x539)>>x540);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x581 = 1;
	uint32_t x582 = 8894U;
	int8_t x584 = 0;
	static uint32_t t14 = 1U;

	t14 = (((x581%x582)+x583)>>x584);

	if (t14 != 4294934529U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x609 = -105;
	volatile int64_t x610 = INT64_MIN;
	uint16_t x611 = 28284U;
	volatile int8_t x612 = 18;
	volatile int64_t t15 = 241858217579863148LL;

	t15 = (((x609%x610)+x611)>>x612);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x625 = 35795951453327LLU;
	volatile int16_t x626 = 159;
	uint8_t x627 = 11U;
	static uint8_t x628 = 0U;

	t16 = (((x625%x626)+x627)>>x628);

	if (t16 != 124LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x657 = UINT64_MAX;
	int64_t x658 = INT64_MIN;
	int64_t x659 = 459LL;
	int64_t x660 = 0LL;

	t17 = (((x657%x658)+x659)>>x660);

	if (t17 != 9223372036854776266LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x753 = -1LL;
	int64_t x754 = INT64_MAX;
	int64_t x755 = INT64_MAX;
	static int16_t x756 = 15;

	t18 = (((x753%x754)+x755)>>x756);

	if (t18 != 281474976710655LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x761 = INT64_MIN;
	static volatile int32_t x762 = INT32_MIN;
	int64_t x763 = 25399LL;
	int16_t x764 = 3;
	int64_t t19 = 191147LL;

	t19 = (((x761%x762)+x763)>>x764);

	if (t19 != 3174LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x771 = 185743102679LLU;
	uint64_t t20 = 427253546952LLU;

	t20 = (((x769%x770)+x771)>>x772);

	if (t20 != 92871551339LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x875 = -1;
	int16_t x876 = 1;
	uint64_t t21 = 72370041571LLU;

	t21 = (((x873%x874)+x875)>>x876);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x889 = 229276019;
	uint16_t x892 = 10U;
	volatile uint32_t t22 = 423826U;

	t22 = (((x889%x890)+x891)>>x892);

	if (t22 != 4194303U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1061 = INT64_MIN;
	volatile int8_t x1062 = -1;
	uint64_t x1063 = 96575854433971157LLU;
	uint8_t x1064 = 1U;
	uint64_t t23 = 56139212506423482LLU;

	t23 = (((x1061%x1062)+x1063)>>x1064);

	if (t23 != 48287927216985578LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1129 = 205850460;
	volatile int64_t x1130 = INT64_MIN;
	int16_t x1131 = -1;

	t24 = (((x1129%x1130)+x1131)>>x1132);

	if (t24 != 205850459LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1245 = INT64_MIN;
	int16_t x1246 = INT16_MIN;
	uint32_t x1248 = 1U;
	volatile int64_t t25 = -339288239782LL;

	t25 = (((x1245%x1246)+x1247)>>x1248);

	if (t25 != 16383LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x1321 = INT16_MIN;
	volatile int64_t x1322 = 278450790LL;
	int64_t x1323 = INT64_MAX;
	static uint16_t x1324 = 54U;
	volatile int64_t t26 = -539709348863902LL;

	t26 = (((x1321%x1322)+x1323)>>x1324);

	if (t26 != 511LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1345 = -1;
	uint32_t x1346 = UINT32_MAX;
	int16_t x1347 = -1;
	static uint16_t x1348 = 22U;
	uint32_t t27 = 13413182U;

	t27 = (((x1345%x1346)+x1347)>>x1348);

	if (t27 != 1023U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1357 = -1LL;
	volatile uint64_t x1358 = UINT64_MAX;
	int8_t x1359 = 7;
	static volatile uint32_t x1360 = 0U;
	static uint64_t t28 = 434582759492LLU;

	t28 = (((x1357%x1358)+x1359)>>x1360);

	if (t28 != 7LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1369 = INT8_MIN;
	static int64_t x1370 = 686388522929514LL;
	int16_t x1371 = INT16_MAX;
	uint8_t x1372 = 1U;
	int64_t t29 = -23LL;

	t29 = (((x1369%x1370)+x1371)>>x1372);

	if (t29 != 16319LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1405 = INT64_MIN;
	static int64_t x1406 = INT64_MIN;
	int8_t x1407 = 34;
	int64_t t30 = -279995995385209LL;

	t30 = (((x1405%x1406)+x1407)>>x1408);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1421 = 52785LLU;
	static volatile int8_t x1423 = INT8_MIN;
	uint16_t x1424 = 5U;
	uint64_t t31 = 1295027607973008LLU;

	t31 = (((x1421%x1422)+x1423)>>x1424);

	if (t31 != 1645LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x1513 = UINT16_MAX;
	uint16_t x1514 = UINT16_MAX;
	uint8_t x1516 = 31U;
	uint32_t t32 = 16012469U;

	t32 = (((x1513%x1514)+x1515)>>x1516);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1641 = 10;
	uint16_t x1642 = 29U;
	static int8_t x1643 = 1;
	uint16_t x1644 = 5U;
	int32_t t33 = 289028238;

	t33 = (((x1641%x1642)+x1643)>>x1644);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1697 = 2387174409306450LL;
	uint64_t x1698 = 519509LLU;
	volatile int64_t x1699 = INT64_MAX;
	uint16_t x1700 = 0U;
	uint64_t t34 = 131864694720134LLU;

	t34 = (((x1697%x1698)+x1699)>>x1700);

	if (t34 != 9223372036855199440LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1701 = INT32_MIN;
	int16_t x1702 = 7;
	uint16_t x1703 = 5571U;
	volatile uint8_t x1704 = 0U;

	t35 = (((x1701%x1702)+x1703)>>x1704);

	if (t35 != 5569) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1791 = 264387LLU;
	volatile int16_t x1792 = 8;
	uint64_t t36 = 3729890049LLU;

	t36 = (((x1789%x1790)+x1791)>>x1792);

	if (t36 != 1032LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1809 = UINT64_MAX;
	static uint8_t x1811 = UINT8_MAX;
	volatile uint64_t t37 = 876991926152229995LLU;

	t37 = (((x1809%x1810)+x1811)>>x1812);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1817 = 2;
	uint64_t x1819 = UINT64_MAX;
	static uint64_t t38 = 228790377LLU;

	t38 = (((x1817%x1818)+x1819)>>x1820);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1869 = INT8_MIN;
	volatile int16_t x1870 = INT16_MAX;
	uint32_t x1871 = UINT32_MAX;
	int32_t x1872 = 0;
	uint32_t t39 = 25024284U;

	t39 = (((x1869%x1870)+x1871)>>x1872);

	if (t39 != 4294967167U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x1881 = UINT8_MAX;
	static int8_t x1883 = 2;
	static volatile uint64_t x1884 = 24LLU;
	int32_t t40 = 10054106;

	t40 = (((x1881%x1882)+x1883)>>x1884);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1973 = INT32_MAX;
	static volatile int16_t x1974 = INT16_MAX;
	uint16_t x1975 = 17U;
	int8_t x1976 = 31;
	volatile int32_t t41 = 116;

	t41 = (((x1973%x1974)+x1975)>>x1976);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1985 = 249U;
	static int64_t x1987 = 13825787874845LL;
	uint16_t x1988 = 2U;
	volatile int64_t t42 = -2501524576LL;

	t42 = (((x1985%x1986)+x1987)>>x1988);

	if (t42 != 3456446968773LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x1993 = INT8_MAX;
	int8_t x1994 = INT8_MAX;
	static volatile int8_t x1996 = 7;
	int32_t t43 = -329990;

	t43 = (((x1993%x1994)+x1995)>>x1996);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1997 = INT8_MIN;
	int8_t x1998 = -3;
	uint32_t x1999 = 775357U;
	volatile uint32_t t44 = 555774226U;

	t44 = (((x1997%x1998)+x1999)>>x2000);

	if (t44 != 1514U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2022 = 5;
	uint32_t x2023 = 5981936U;
	static volatile uint32_t x2024 = 1U;
	int64_t t45 = 1LL;

	t45 = (((x2021%x2022)+x2023)>>x2024);

	if (t45 != 2990966LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2037 = -816LL;
	volatile int8_t x2038 = INT8_MIN;
	uint64_t x2039 = 14110484699940654LLU;
	uint8_t x2040 = 3U;
	static uint64_t t46 = 387457976LLU;

	t46 = (((x2037%x2038)+x2039)>>x2040);

	if (t46 != 1763810587492575LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2041 = UINT64_MAX;
	int32_t x2042 = 21;
	int8_t x2043 = 6;
	uint32_t x2044 = 33U;
	uint64_t t47 = 6LLU;

	t47 = (((x2041%x2042)+x2043)>>x2044);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2129 = 1U;
	volatile uint64_t x2130 = 173387645189826286LLU;
	volatile uint16_t x2131 = 21691U;
	uint8_t x2132 = 44U;

	t48 = (((x2129%x2130)+x2131)>>x2132);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2145 = UINT64_MAX;
	uint64_t x2146 = 6129220746484622LLU;
	int64_t x2147 = -1LL;
	int8_t x2148 = 15;
	static volatile uint64_t t49 = 122117115347341163LLU;

	t49 = (((x2145%x2146)+x2147)>>x2148);

	if (t49 != 119593735880LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x2185 = 247159;
	uint8_t x2187 = 29U;
	volatile uint8_t x2188 = 1U;
	static volatile int32_t t50 = 31683;

	t50 = (((x2185%x2186)+x2187)>>x2188);

	if (t50 != 74) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2197 = INT8_MIN;
	uint64_t x2198 = 30674596398857094LLU;
	volatile uint16_t x2199 = UINT16_MAX;

	t51 = (((x2197%x2198)+x2199)>>x2200);

	if (t51 != 10787618633LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x2233 = 1409;
	volatile int16_t x2234 = -1;
	uint64_t x2235 = 14045926785LLU;
	uint8_t x2236 = 2U;
	uint64_t t52 = 296496LLU;

	t52 = (((x2233%x2234)+x2235)>>x2236);

	if (t52 != 3511481696LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x2373 = 1U;
	int32_t x2375 = 439;
	int16_t x2376 = 2;
	uint32_t t53 = 1399845374U;

	t53 = (((x2373%x2374)+x2375)>>x2376);

	if (t53 != 110U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x2382 = 42639613333102LLU;
	int32_t x2383 = -1;
	int8_t x2384 = 0;
	static volatile uint64_t t54 = 248872653680LLU;

	t54 = (((x2381%x2382)+x2383)>>x2384);

	if (t54 != 1783LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2441 = 11391U;
	uint8_t x2444 = 3U;
	volatile uint32_t t55 = 32062270U;

	t55 = (((x2441%x2442)+x2443)>>x2444);

	if (t55 != 536870896U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2470 = INT32_MIN;
	int64_t x2471 = INT64_MAX;
	uint32_t x2472 = 39U;

	t56 = (((x2469%x2470)+x2471)>>x2472);

	if (t56 != 16777215LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x2474 = -14110888848LL;
	static uint16_t x2475 = 99U;
	static int64_t t57 = 87164862917LL;

	t57 = (((x2473%x2474)+x2475)>>x2476);

	if (t57 != 96LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2565 = -8;
	int16_t x2566 = INT16_MAX;
	uint64_t x2567 = 15450595880LLU;
	static volatile int16_t x2568 = 3;
	volatile uint64_t t58 = 512144012478LLU;

	t58 = (((x2565%x2566)+x2567)>>x2568);

	if (t58 != 1931324484LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x2605 = UINT32_MAX;
	uint16_t x2608 = 17U;
	volatile uint32_t t59 = 2193394U;

	t59 = (((x2605%x2606)+x2607)>>x2608);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2609 = 682387;
	static int32_t x2610 = 341712;
	uint32_t x2611 = 3325U;
	uint16_t x2612 = 1U;

	t60 = (((x2609%x2610)+x2611)>>x2612);

	if (t60 != 172000U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2641 = INT16_MAX;
	uint16_t x2642 = UINT16_MAX;
	int64_t x2643 = 7547922595114827LL;
	uint32_t x2644 = 0U;

	t61 = (((x2641%x2642)+x2643)>>x2644);

	if (t61 != 7547922595147594LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x2653 = 273183747;
	static int64_t x2654 = -3330LL;
	volatile uint16_t x2656 = 1U;
	int64_t t62 = 39018584LL;

	t62 = (((x2653%x2654)+x2655)>>x2656);

	if (t62 != 268LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x2757 = 0U;
	volatile int64_t x2758 = INT64_MIN;
	int8_t x2759 = 15;
	int16_t x2760 = 43;
	volatile int64_t t63 = 3650662341839850LL;

	t63 = (((x2757%x2758)+x2759)>>x2760);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2793 = INT16_MAX;
	uint64_t x2794 = 2384025LLU;
	static uint16_t x2795 = 27U;
	int32_t x2796 = 7;
	volatile uint64_t t64 = 68LLU;

	t64 = (((x2793%x2794)+x2795)>>x2796);

	if (t64 != 256LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2861 = -1;
	int16_t x2862 = INT16_MIN;
	uint64_t t65 = 29566LLU;

	t65 = (((x2861%x2862)+x2863)>>x2864);

	if (t65 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2885 = INT8_MIN;
	uint8_t x2886 = 39U;
	int16_t x2887 = 8209;
	uint8_t x2888 = 5U;
	volatile int32_t t66 = 17;

	t66 = (((x2885%x2886)+x2887)>>x2888);

	if (t66 != 256) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2889 = UINT16_MAX;
	static int64_t x2890 = INT64_MIN;
	uint16_t x2892 = 5U;
	volatile int64_t t67 = 7LL;

	t67 = (((x2889%x2890)+x2891)>>x2892);

	if (t67 != 1023LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x2901 = UINT64_MAX;
	static volatile int16_t x2902 = 3767;
	int32_t x2903 = 415510;
	uint64_t t68 = 14503327LLU;

	t68 = (((x2901%x2902)+x2903)>>x2904);

	if (t68 != 208967LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2925 = -1LL;
	uint8_t x2926 = 2U;
	uint16_t x2927 = 37U;
	volatile int8_t x2928 = 0;
	int64_t t69 = 3938266LL;

	t69 = (((x2925%x2926)+x2927)>>x2928);

	if (t69 != 36LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3005 = 193978120915391851LL;
	volatile uint16_t x3007 = UINT16_MAX;
	uint8_t x3008 = 0U;
	int64_t t70 = 373436302096466LL;

	t70 = (((x3005%x3006)+x3007)>>x3008);

	if (t70 != 1063064938LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x3015 = UINT16_MAX;
	static volatile uint16_t x3016 = 2U;
	volatile uint64_t t71 = 9802631LLU;

	t71 = (((x3013%x3014)+x3015)>>x3016);

	if (t71 != 950163LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x3033 = -12;
	volatile int32_t x3034 = 5381372;
	int64_t x3035 = INT64_MAX;
	volatile uint16_t x3036 = 30U;
	volatile int64_t t72 = -559446893826LL;

	t72 = (((x3033%x3034)+x3035)>>x3036);

	if (t72 != 8589934591LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x3133 = 985063500305701LLU;
	static int32_t x3134 = INT32_MIN;
	volatile uint64_t x3135 = 1601264105371921LLU;
	int16_t x3136 = 10;

	t73 = (((x3133%x3134)+x3135)>>x3136);

	if (t73 != 2525710552419LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3145 = INT16_MIN;
	uint64_t x3147 = 590258445563681LLU;
	static volatile uint8_t x3148 = 1U;

	t74 = (((x3145%x3146)+x3147)>>x3148);

	if (t74 != 295129222781815LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3346 = INT32_MIN;
	uint64_t x3347 = 13499440830LLU;
	volatile uint64_t t75 = 1958637566LLU;

	t75 = (((x3345%x3346)+x3347)>>x3348);

	if (t75 != 2976574601939968LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3363 = INT32_MAX;
	uint16_t x3364 = 7U;
	volatile int64_t t76 = 15581367964585913LL;

	t76 = (((x3361%x3362)+x3363)>>x3364);

	if (t76 != 33554431LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x3385 = INT32_MIN;
	int8_t x3386 = 1;
	volatile uint64_t x3387 = 1739730764199LLU;

	t77 = (((x3385%x3386)+x3387)>>x3388);

	if (t77 != 1739730764199LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3417 = INT8_MIN;
	int32_t x3418 = -1;
	int64_t x3419 = 1880984209628291431LL;
	static uint8_t x3420 = 3U;

	t78 = (((x3417%x3418)+x3419)>>x3420);

	if (t78 != 235123026203536428LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x3481 = UINT64_MAX;
	uint16_t x3482 = 6U;
	static uint8_t x3483 = UINT8_MAX;

	t79 = (((x3481%x3482)+x3483)>>x3484);

	if (t79 != 258LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3553 = -1;
	uint16_t x3554 = 19374U;
	volatile int64_t x3555 = INT64_MAX;
	uint32_t x3556 = 10U;

	t80 = (((x3553%x3554)+x3555)>>x3556);

	if (t80 != 9007199254740991LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x3609 = INT16_MIN;
	uint32_t x3610 = 3U;
	int16_t x3611 = 0;
	uint32_t t81 = 10533U;

	t81 = (((x3609%x3610)+x3611)>>x3612);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x3689 = INT8_MAX;
	volatile int32_t x3690 = INT32_MAX;
	int8_t x3691 = INT8_MAX;
	volatile int32_t t82 = -15;

	t82 = (((x3689%x3690)+x3691)>>x3692);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3745 = 2508U;
	int16_t x3746 = -1;
	static volatile int64_t x3747 = 439855164383218LL;
	static uint16_t x3748 = 46U;
	volatile int64_t t83 = 1LL;

	t83 = (((x3745%x3746)+x3747)>>x3748);

	if (t83 != 6LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3749 = INT8_MAX;
	int32_t x3750 = 144;
	int16_t x3751 = INT16_MAX;
	uint16_t x3752 = 1U;
	volatile int32_t t84 = -8912178;

	t84 = (((x3749%x3750)+x3751)>>x3752);

	if (t84 != 16447) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x3817 = INT16_MIN;
	int32_t x3819 = 4158967;
	static uint32_t x3820 = 14U;

	t85 = (((x3817%x3818)+x3819)>>x3820);

	if (t85 != 251) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x3857 = 1U;
	int16_t x3858 = 11;
	uint32_t x3859 = UINT32_MAX;
	uint8_t x3860 = 7U;

	t86 = (((x3857%x3858)+x3859)>>x3860);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x3865 = 12U;
	volatile uint16_t x3866 = UINT16_MAX;
	int32_t x3868 = 30;
	int32_t t87 = -501;

	t87 = (((x3865%x3866)+x3867)>>x3868);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x3873 = 994U;
	volatile uint32_t x3874 = 319628U;
	static int64_t x3875 = 10770733LL;
	int8_t x3876 = 63;
	int64_t t88 = -231241933013532LL;

	t88 = (((x3873%x3874)+x3875)>>x3876);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3901 = INT8_MIN;
	static uint64_t x3902 = UINT64_MAX;
	int64_t x3903 = INT64_MAX;
	int8_t x3904 = 1;

	t89 = (((x3901%x3902)+x3903)>>x3904);

	if (t89 != 4611686018427387839LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x3909 = 0;
	int64_t x3910 = -1LL;
	volatile int64_t x3911 = INT64_MAX;
	uint64_t x3912 = 17LLU;
	int64_t t90 = -102034788035051LL;

	t90 = (((x3909%x3910)+x3911)>>x3912);

	if (t90 != 70368744177663LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3925 = INT32_MAX;
	static int8_t x3926 = INT8_MIN;
	volatile uint64_t x3927 = 161230LLU;
	int32_t x3928 = 0;
	uint64_t t91 = 1LLU;

	t91 = (((x3925%x3926)+x3927)>>x3928);

	if (t91 != 161357LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3965 = -1;
	static uint32_t x3967 = 4780U;
	int8_t x3968 = 1;
	volatile uint32_t t92 = 387U;

	t92 = (((x3965%x3966)+x3967)>>x3968);

	if (t92 != 2389U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t t93 = 1864437989LLU;

	t93 = (((x4105%x4106)+x4107)>>x4108);

	if (t93 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x4110 = INT16_MIN;
	int32_t x4111 = INT32_MAX;
	volatile uint8_t x4112 = 1U;
	int64_t t94 = 36LL;

	t94 = (((x4109%x4110)+x4111)>>x4112);

	if (t94 != 1073741823LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x4169 = INT32_MAX;
	volatile int64_t x4170 = INT64_MAX;
	uint16_t x4171 = 1226U;
	volatile int64_t t95 = 747847319626413LL;

	t95 = (((x4169%x4170)+x4171)>>x4172);

	if (t95 != 32LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x4222 = 22U;
	static uint16_t x4223 = 18U;
	uint8_t x4224 = 1U;
	int32_t t96 = 99262;

	t96 = (((x4221%x4222)+x4223)>>x4224);

	if (t96 != 6) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x4277 = 55633U;
	static uint64_t x4278 = 4223618096045LLU;
	int32_t x4279 = INT32_MIN;
	volatile uint64_t t97 = 4010510930426LLU;

	t97 = (((x4277%x4278)+x4279)>>x4280);

	if (t97 != 288230376118158181LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x4285 = UINT8_MAX;
	static int8_t x4286 = INT8_MIN;
	uint8_t x4288 = 4U;
	volatile int32_t t98 = -38;

	t98 = (((x4285%x4286)+x4287)>>x4288);

	if (t98 != 1112) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x4297 = 652205303267879LLU;
	int8_t x4298 = -3;
	uint64_t x4299 = 11086695213245LLU;
	uint64_t t99 = 61871LLU;

	t99 = (((x4297%x4298)+x4299)>>x4300);

	if (t99 != 663291998481124LLU) { NG(); } else { ; }
	
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


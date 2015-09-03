#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x18 = -16;
static uint16_t x20 = UINT16_MAX;
static uint64_t x60 = 13015730LLU;
static int64_t x70 = INT64_MIN;
int32_t t3 = -125601;
static int8_t x148 = INT8_MIN;
int32_t x170 = INT32_MAX;
uint16_t x171 = 9U;
uint8_t x197 = 14U;
static int8_t x200 = INT8_MAX;
int16_t x242 = -1;
uint32_t x261 = 10408U;
int16_t x272 = -113;
int32_t t12 = 29177;
volatile uint64_t x325 = 27084405LLU;
static int8_t x332 = INT8_MIN;
volatile int16_t x359 = 6;
uint32_t x482 = 5496219U;
uint8_t x483 = 0U;
uint32_t t21 = 78394U;
static int32_t x501 = -379112;
int64_t x569 = INT64_MIN;
static volatile int8_t x570 = 11;
static int32_t t24 = -21831663;
volatile uint8_t x594 = UINT8_MAX;
static uint32_t x614 = 75U;
int64_t t26 = -73504714432279421LL;
static int8_t x707 = 9;
volatile uint16_t x1038 = UINT16_MAX;
int8_t x1050 = INT8_MIN;
volatile uint16_t x1067 = 30U;
volatile uint16_t x1068 = 5U;
int32_t t31 = -405300843;
volatile int64_t x1117 = INT64_MIN;
static uint8_t x1119 = 3U;
uint8_t x1202 = UINT8_MAX;
uint16_t x1203 = 1U;
uint32_t x1240 = 1503400457U;
int16_t x1269 = -1;
uint16_t x1321 = 91U;
int32_t x1356 = INT32_MIN;
static int32_t x1377 = -1;
uint64_t x1379 = 7LLU;
int16_t x1386 = 0;
volatile int32_t t45 = -26313;
uint64_t x1501 = UINT64_MAX;
int32_t x1504 = INT32_MIN;
volatile int16_t x1531 = 4;
volatile int32_t t50 = 482947068;
int64_t x1672 = -754479449502985409LL;
int16_t x1710 = 7365;
static int8_t x1809 = INT8_MIN;
int32_t x1811 = 1;
int64_t x1818 = 317569558LL;
uint8_t x1842 = 73U;
int32_t x1898 = INT32_MIN;
int8_t x1899 = 1;
static int64_t x1900 = -1LL;
static volatile int8_t x1952 = -5;
int32_t x2057 = 0;
uint16_t x2058 = 170U;
volatile uint32_t x2155 = 0U;
int8_t x2162 = -1;
volatile uint32_t x2193 = 5106087U;
static int8_t x2194 = 1;
uint32_t x2196 = 49045U;
uint64_t x2204 = UINT64_MAX;
uint16_t x2230 = 14U;
volatile int32_t x2240 = INT32_MAX;
int32_t t76 = -97552874;
int32_t x2285 = INT32_MIN;
static int32_t x2289 = INT32_MIN;
int8_t x2403 = 1;
int8_t x2408 = INT8_MIN;
int8_t x2430 = INT8_MIN;
int8_t x2540 = INT8_MAX;
static int8_t x2579 = 3;
static volatile uint32_t t88 = 162719176U;
uint8_t x2632 = 45U;
uint16_t x2662 = 515U;
static volatile uint16_t x2737 = 8U;
uint32_t x2738 = 83U;
volatile int64_t t93 = 526826663629396137LL;
volatile int32_t t94 = 46;
int64_t x2813 = -1LL;
volatile uint32_t x2831 = 7U;


void f0(void) {
	int16_t x17 = -1;
	volatile int8_t x19 = 1;
	static int32_t t0 = 621974;

	t0 = (((x17==x18)>>x19)*x20);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x53 = UINT64_MAX;
	uint32_t x54 = 2763555U;
	uint8_t x55 = 29U;
	int32_t x56 = -1;
	int32_t t1 = -191;

	t1 = (((x53==x54)>>x55)*x56);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x57 = UINT64_MAX;
	static int8_t x58 = -1;
	uint32_t x59 = 3U;
	volatile uint64_t t2 = 101257221639697441LLU;

	t2 = (((x57==x58)>>x59)*x60);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x69 = 0U;
	volatile uint8_t x71 = 16U;
	static int32_t x72 = -1;

	t3 = (((x69==x70)>>x71)*x72);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x137 = INT32_MIN;
	int32_t x138 = -1;
	int16_t x139 = 6;
	int32_t x140 = 18022902;
	int32_t t4 = 65;

	t4 = (((x137==x138)>>x139)*x140);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x145 = INT8_MIN;
	static uint64_t x146 = UINT64_MAX;
	volatile uint8_t x147 = 4U;
	int32_t t5 = -1037;

	t5 = (((x145==x146)>>x147)*x148);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x169 = -1LL;
	volatile int64_t x172 = -1LL;
	int64_t t6 = -29230182LL;

	t6 = (((x169==x170)>>x171)*x172);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x198 = -1;
	int8_t x199 = 0;
	volatile int32_t t7 = 255;

	t7 = (((x197==x198)>>x199)*x200);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x229 = -160963570;
	int16_t x230 = INT16_MIN;
	volatile uint8_t x231 = 1U;
	volatile int64_t x232 = INT64_MIN;
	static volatile int64_t t8 = 78663327902LL;

	t8 = (((x229==x230)>>x231)*x232);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x241 = 2243590934845446LL;
	static uint8_t x243 = 0U;
	uint8_t x244 = UINT8_MAX;
	static volatile int32_t t9 = 12345;

	t9 = (((x241==x242)>>x243)*x244);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x262 = 2U;
	volatile int8_t x263 = 14;
	static uint8_t x264 = 6U;
	volatile int32_t t10 = -15;

	t10 = (((x261==x262)>>x263)*x264);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x269 = 6U;
	static uint32_t x270 = UINT32_MAX;
	int8_t x271 = 0;
	int32_t t11 = 224537880;

	t11 = (((x269==x270)>>x271)*x272);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x317 = 14U;
	int64_t x318 = -1LL;
	uint8_t x319 = 4U;
	int16_t x320 = -1;

	t12 = (((x317==x318)>>x319)*x320);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x326 = UINT8_MAX;
	uint16_t x327 = 4U;
	int64_t x328 = INT64_MIN;
	int64_t t13 = -17558792077898LL;

	t13 = (((x325==x326)>>x327)*x328);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x329 = 29U;
	int64_t x330 = -1LL;
	uint8_t x331 = 26U;
	int32_t t14 = -145;

	t14 = (((x329==x330)>>x331)*x332);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x357 = 7908;
	static uint64_t x358 = UINT64_MAX;
	volatile uint64_t x360 = 2157352541LLU;
	volatile uint64_t t15 = 987LLU;

	t15 = (((x357==x358)>>x359)*x360);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x385 = INT16_MIN;
	uint16_t x386 = 7008U;
	uint8_t x387 = 5U;
	static int16_t x388 = INT16_MIN;
	volatile int32_t t16 = 25;

	t16 = (((x385==x386)>>x387)*x388);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x405 = 51336583;
	volatile int64_t x406 = INT64_MAX;
	int16_t x407 = 0;
	int64_t x408 = INT64_MIN;
	int64_t t17 = 7453316397332LL;

	t17 = (((x405==x406)>>x407)*x408);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x429 = -1;
	static int8_t x430 = -1;
	int64_t x431 = 2LL;
	static int64_t x432 = 61078275989722981LL;
	static int64_t t18 = 9LL;

	t18 = (((x429==x430)>>x431)*x432);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x441 = INT16_MIN;
	int32_t x442 = -6;
	int8_t x443 = 0;
	int32_t x444 = -1;
	int32_t t19 = -169;

	t19 = (((x441==x442)>>x443)*x444);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x453 = INT16_MAX;
	static uint32_t x454 = UINT32_MAX;
	uint16_t x455 = 27U;
	int32_t x456 = -6006849;
	volatile int32_t t20 = 8900911;

	t20 = (((x453==x454)>>x455)*x456);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x481 = INT64_MAX;
	static uint32_t x484 = 13U;

	t21 = (((x481==x482)>>x483)*x484);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x502 = INT8_MIN;
	int8_t x503 = 1;
	int8_t x504 = INT8_MIN;
	volatile int32_t t22 = 9413;

	t22 = (((x501==x502)>>x503)*x504);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x561 = 77;
	uint32_t x562 = 1U;
	uint8_t x563 = 2U;
	static uint32_t x564 = 7539043U;
	volatile uint32_t t23 = 129132043U;

	t23 = (((x561==x562)>>x563)*x564);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x571 = 6U;
	volatile uint8_t x572 = 1U;

	t24 = (((x569==x570)>>x571)*x572);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x593 = UINT32_MAX;
	volatile uint8_t x595 = 0U;
	static uint16_t x596 = UINT16_MAX;
	volatile int32_t t25 = -7256000;

	t25 = (((x593==x594)>>x595)*x596);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x613 = -1LL;
	volatile int16_t x615 = 1;
	int64_t x616 = -1LL;

	t26 = (((x613==x614)>>x615)*x616);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x705 = 1U;
	volatile int32_t x706 = -40;
	volatile int64_t x708 = INT64_MAX;
	int64_t t27 = -53911792337134LL;

	t27 = (((x705==x706)>>x707)*x708);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x877 = -1;
	int16_t x878 = -1;
	int16_t x879 = 5;
	int64_t x880 = INT64_MAX;
	int64_t t28 = 6952LL;

	t28 = (((x877==x878)>>x879)*x880);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1037 = INT64_MIN;
	int64_t x1039 = 11LL;
	volatile int16_t x1040 = INT16_MAX;
	int32_t t29 = 40538;

	t29 = (((x1037==x1038)>>x1039)*x1040);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x1049 = 174387745764009LLU;
	uint16_t x1051 = 9U;
	volatile int8_t x1052 = -25;
	int32_t t30 = -39;

	t30 = (((x1049==x1050)>>x1051)*x1052);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1065 = UINT8_MAX;
	uint64_t x1066 = UINT64_MAX;

	t31 = (((x1065==x1066)>>x1067)*x1068);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x1118 = INT8_MIN;
	int64_t x1120 = INT64_MIN;
	int64_t t32 = 1635364333834001171LL;

	t32 = (((x1117==x1118)>>x1119)*x1120);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1177 = INT8_MIN;
	int32_t x1178 = -25;
	static int8_t x1179 = 5;
	int32_t x1180 = INT32_MAX;
	volatile int32_t t33 = -313617889;

	t33 = (((x1177==x1178)>>x1179)*x1180);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1201 = -13033;
	int64_t x1204 = INT64_MIN;
	int64_t t34 = 344614010LL;

	t34 = (((x1201==x1202)>>x1203)*x1204);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1233 = INT8_MAX;
	static uint32_t x1234 = UINT32_MAX;
	uint8_t x1235 = 0U;
	int32_t x1236 = INT32_MAX;
	volatile int32_t t35 = -49;

	t35 = (((x1233==x1234)>>x1235)*x1236);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1237 = INT32_MIN;
	volatile uint32_t x1238 = 11U;
	uint32_t x1239 = 31U;
	volatile uint32_t t36 = 62328U;

	t36 = (((x1237==x1238)>>x1239)*x1240);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1241 = INT64_MIN;
	volatile uint16_t x1242 = 773U;
	static volatile uint8_t x1243 = 0U;
	int16_t x1244 = -1;
	int32_t t37 = 1;

	t37 = (((x1241==x1242)>>x1243)*x1244);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1261 = 1;
	int32_t x1262 = -70699880;
	uint8_t x1263 = 7U;
	uint32_t x1264 = UINT32_MAX;
	volatile uint32_t t38 = 408821U;

	t38 = (((x1261==x1262)>>x1263)*x1264);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1270 = INT64_MIN;
	uint8_t x1271 = 9U;
	uint8_t x1272 = 14U;
	volatile int32_t t39 = 6914738;

	t39 = (((x1269==x1270)>>x1271)*x1272);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x1313 = INT32_MIN;
	static volatile uint8_t x1314 = 0U;
	int16_t x1315 = 1;
	uint16_t x1316 = UINT16_MAX;
	int32_t t40 = 2094160;

	t40 = (((x1313==x1314)>>x1315)*x1316);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1322 = -1LL;
	uint16_t x1323 = 22U;
	int64_t x1324 = -1LL;
	volatile int64_t t41 = 544966542866LL;

	t41 = (((x1321==x1322)>>x1323)*x1324);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1353 = INT64_MIN;
	int8_t x1354 = INT8_MIN;
	uint8_t x1355 = 12U;
	volatile int32_t t42 = -86265;

	t42 = (((x1353==x1354)>>x1355)*x1356);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x1378 = 7995609445590913LLU;
	uint8_t x1380 = 0U;
	volatile int32_t t43 = 65316470;

	t43 = (((x1377==x1378)>>x1379)*x1380);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1385 = INT8_MAX;
	static int8_t x1387 = 0;
	static int8_t x1388 = -62;
	static int32_t t44 = -44847969;

	t44 = (((x1385==x1386)>>x1387)*x1388);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1425 = INT8_MIN;
	int64_t x1426 = INT64_MIN;
	static int32_t x1427 = 1;
	static int16_t x1428 = -1;

	t45 = (((x1425==x1426)>>x1427)*x1428);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x1481 = UINT32_MAX;
	int16_t x1482 = -1;
	int16_t x1483 = 11;
	static uint16_t x1484 = 26U;
	int32_t t46 = -29923;

	t46 = (((x1481==x1482)>>x1483)*x1484);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1502 = 78075409;
	volatile int8_t x1503 = 0;
	volatile int32_t t47 = 933;

	t47 = (((x1501==x1502)>>x1503)*x1504);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1505 = UINT16_MAX;
	int32_t x1506 = INT32_MIN;
	static uint8_t x1507 = 2U;
	int8_t x1508 = -1;
	volatile int32_t t48 = -25;

	t48 = (((x1505==x1506)>>x1507)*x1508);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1529 = 155607U;
	uint16_t x1530 = 13740U;
	volatile int16_t x1532 = -16;
	volatile int32_t t49 = 50347;

	t49 = (((x1529==x1530)>>x1531)*x1532);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1585 = -1LL;
	static int16_t x1586 = INT16_MIN;
	static uint32_t x1587 = 2U;
	int16_t x1588 = INT16_MAX;

	t50 = (((x1585==x1586)>>x1587)*x1588);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x1593 = INT16_MIN;
	volatile uint32_t x1594 = UINT32_MAX;
	uint16_t x1595 = 3U;
	int8_t x1596 = INT8_MIN;
	volatile int32_t t51 = 813988;

	t51 = (((x1593==x1594)>>x1595)*x1596);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x1657 = UINT64_MAX;
	int16_t x1658 = -5700;
	volatile uint16_t x1659 = 19U;
	volatile int16_t x1660 = INT16_MIN;
	int32_t t52 = 3;

	t52 = (((x1657==x1658)>>x1659)*x1660);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1669 = UINT16_MAX;
	static int8_t x1670 = INT8_MIN;
	int64_t x1671 = 1LL;
	volatile int64_t t53 = 3791197960905644153LL;

	t53 = (((x1669==x1670)>>x1671)*x1672);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x1709 = 261797949427978LL;
	int8_t x1711 = 5;
	uint16_t x1712 = UINT16_MAX;
	int32_t t54 = 1586028;

	t54 = (((x1709==x1710)>>x1711)*x1712);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1745 = INT8_MIN;
	static uint8_t x1746 = 12U;
	uint16_t x1747 = 0U;
	volatile int64_t x1748 = INT64_MAX;
	static int64_t t55 = 2336172LL;

	t55 = (((x1745==x1746)>>x1747)*x1748);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1797 = 17227924582121LL;
	uint64_t x1798 = 4094LLU;
	int8_t x1799 = 1;
	uint64_t x1800 = UINT64_MAX;
	static volatile uint64_t t56 = 45531878940LLU;

	t56 = (((x1797==x1798)>>x1799)*x1800);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1810 = -1;
	int8_t x1812 = 1;
	int32_t t57 = 0;

	t57 = (((x1809==x1810)>>x1811)*x1812);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x1817 = -1;
	uint8_t x1819 = 3U;
	static volatile int16_t x1820 = -14245;
	int32_t t58 = -558411;

	t58 = (((x1817==x1818)>>x1819)*x1820);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1841 = 0;
	uint8_t x1843 = 5U;
	static int8_t x1844 = 0;
	static int32_t t59 = 384737;

	t59 = (((x1841==x1842)>>x1843)*x1844);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x1897 = UINT8_MAX;
	int64_t t60 = -61575569001918LL;

	t60 = (((x1897==x1898)>>x1899)*x1900);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1905 = -1LL;
	int8_t x1906 = -16;
	volatile int8_t x1907 = 12;
	int8_t x1908 = 6;
	volatile int32_t t61 = 1;

	t61 = (((x1905==x1906)>>x1907)*x1908);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x1949 = 2244U;
	static int8_t x1950 = -1;
	uint8_t x1951 = 5U;
	volatile int32_t t62 = -23657946;

	t62 = (((x1949==x1950)>>x1951)*x1952);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x1985 = 127U;
	int64_t x1986 = INT64_MAX;
	volatile uint8_t x1987 = 8U;
	static int8_t x1988 = -1;
	static volatile int32_t t63 = 8;

	t63 = (((x1985==x1986)>>x1987)*x1988);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x2059 = 6U;
	volatile int32_t x2060 = INT32_MIN;
	volatile int32_t t64 = -577525;

	t64 = (((x2057==x2058)>>x2059)*x2060);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x2073 = 5178452U;
	static volatile int8_t x2074 = -1;
	uint8_t x2075 = 0U;
	int8_t x2076 = 5;
	static int32_t t65 = 51441641;

	t65 = (((x2073==x2074)>>x2075)*x2076);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x2085 = 9U;
	int64_t x2086 = -293996381647LL;
	static uint16_t x2087 = 0U;
	static uint32_t x2088 = UINT32_MAX;
	uint32_t t66 = 30U;

	t66 = (((x2085==x2086)>>x2087)*x2088);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2101 = -26;
	volatile int16_t x2102 = 1;
	volatile int16_t x2103 = 1;
	uint32_t x2104 = 21587943U;
	uint32_t t67 = 38514548U;

	t67 = (((x2101==x2102)>>x2103)*x2104);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2121 = 59234733LLU;
	int64_t x2122 = 82405530LL;
	uint16_t x2123 = 11U;
	int32_t x2124 = INT32_MAX;
	int32_t t68 = 14;

	t68 = (((x2121==x2122)>>x2123)*x2124);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2153 = -1;
	uint64_t x2154 = 1854307487824667LLU;
	uint16_t x2156 = 315U;
	static int32_t t69 = 1753;

	t69 = (((x2153==x2154)>>x2155)*x2156);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2161 = INT32_MAX;
	uint32_t x2163 = 0U;
	int32_t x2164 = INT32_MAX;
	int32_t t70 = -5;

	t70 = (((x2161==x2162)>>x2163)*x2164);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2181 = INT32_MIN;
	uint8_t x2182 = 11U;
	uint8_t x2183 = 12U;
	static volatile int8_t x2184 = INT8_MIN;
	static int32_t t71 = 21;

	t71 = (((x2181==x2182)>>x2183)*x2184);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x2195 = 28U;
	static volatile uint32_t t72 = 107801U;

	t72 = (((x2193==x2194)>>x2195)*x2196);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x2201 = UINT32_MAX;
	int32_t x2202 = INT32_MAX;
	static int8_t x2203 = 17;
	uint64_t t73 = 1260LLU;

	t73 = (((x2201==x2202)>>x2203)*x2204);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x2229 = 425U;
	int32_t x2231 = 1;
	volatile int16_t x2232 = -1;
	volatile int32_t t74 = 504;

	t74 = (((x2229==x2230)>>x2231)*x2232);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2237 = 93071;
	int8_t x2238 = -1;
	static int8_t x2239 = 26;
	static volatile int32_t t75 = -4193164;

	t75 = (((x2237==x2238)>>x2239)*x2240);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2245 = 12288;
	int16_t x2246 = INT16_MIN;
	int8_t x2247 = 10;
	int32_t x2248 = INT32_MAX;

	t76 = (((x2245==x2246)>>x2247)*x2248);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x2265 = INT64_MIN;
	uint64_t x2266 = UINT64_MAX;
	int8_t x2267 = 1;
	uint32_t x2268 = 220381570U;
	uint32_t t77 = 145861400U;

	t77 = (((x2265==x2266)>>x2267)*x2268);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x2286 = 409U;
	uint16_t x2287 = 2U;
	static int32_t x2288 = -1;
	volatile int32_t t78 = 5;

	t78 = (((x2285==x2286)>>x2287)*x2288);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x2290 = INT32_MAX;
	uint8_t x2291 = 2U;
	int64_t x2292 = INT64_MIN;
	int64_t t79 = 1LL;

	t79 = (((x2289==x2290)>>x2291)*x2292);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2401 = 25;
	int16_t x2402 = 3;
	uint64_t x2404 = 11268655LLU;
	volatile uint64_t t80 = 140325957LLU;

	t80 = (((x2401==x2402)>>x2403)*x2404);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x2405 = 31U;
	int16_t x2406 = INT16_MAX;
	int8_t x2407 = 7;
	int32_t t81 = 0;

	t81 = (((x2405==x2406)>>x2407)*x2408);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x2425 = 2539LLU;
	int64_t x2426 = INT64_MIN;
	static volatile uint8_t x2427 = 5U;
	uint32_t x2428 = 0U;
	uint32_t t82 = 3U;

	t82 = (((x2425==x2426)>>x2427)*x2428);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint16_t x2429 = 0U;
	uint8_t x2431 = 6U;
	int8_t x2432 = 0;
	int32_t t83 = -86515;

	t83 = (((x2429==x2430)>>x2431)*x2432);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x2501 = 14U;
	volatile uint8_t x2502 = 14U;
	uint16_t x2503 = 7U;
	int32_t x2504 = INT32_MAX;
	int32_t t84 = 22526;

	t84 = (((x2501==x2502)>>x2503)*x2504);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2525 = -19;
	volatile int8_t x2526 = 1;
	volatile uint8_t x2527 = 11U;
	int8_t x2528 = 4;
	int32_t t85 = -5310;

	t85 = (((x2525==x2526)>>x2527)*x2528);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2537 = -31;
	static uint16_t x2538 = 469U;
	uint32_t x2539 = 3U;
	int32_t t86 = -44;

	t86 = (((x2537==x2538)>>x2539)*x2540);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2561 = -1;
	static uint16_t x2562 = 280U;
	volatile int16_t x2563 = 0;
	uint8_t x2564 = 82U;
	int32_t t87 = -1560871;

	t87 = (((x2561==x2562)>>x2563)*x2564);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2577 = -1;
	static uint8_t x2578 = 1U;
	static uint32_t x2580 = UINT32_MAX;

	t88 = (((x2577==x2578)>>x2579)*x2580);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x2629 = 2U;
	int16_t x2630 = INT16_MAX;
	uint8_t x2631 = 10U;
	int32_t t89 = 4;

	t89 = (((x2629==x2630)>>x2631)*x2632);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2661 = 789396LLU;
	int32_t x2663 = 1;
	static uint8_t x2664 = 1U;
	int32_t t90 = 103778314;

	t90 = (((x2661==x2662)>>x2663)*x2664);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x2685 = INT16_MIN;
	int32_t x2686 = -1;
	int8_t x2687 = 1;
	int8_t x2688 = INT8_MIN;
	volatile int32_t t91 = 51979;

	t91 = (((x2685==x2686)>>x2687)*x2688);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x2739 = 6;
	int8_t x2740 = 39;
	volatile int32_t t92 = 1;

	t92 = (((x2737==x2738)>>x2739)*x2740);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x2757 = -75793458;
	int16_t x2758 = -82;
	static int8_t x2759 = 0;
	int64_t x2760 = 1621304207044204779LL;

	t93 = (((x2757==x2758)>>x2759)*x2760);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x2765 = INT32_MIN;
	uint16_t x2766 = 112U;
	static volatile int16_t x2767 = 6;
	volatile int32_t x2768 = -1;

	t94 = (((x2765==x2766)>>x2767)*x2768);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x2797 = INT8_MIN;
	static int16_t x2798 = 37;
	static int8_t x2799 = 1;
	static volatile int64_t x2800 = INT64_MAX;
	volatile int64_t t95 = 1564982401285607302LL;

	t95 = (((x2797==x2798)>>x2799)*x2800);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2809 = UINT64_MAX;
	int64_t x2810 = INT64_MAX;
	uint16_t x2811 = 5U;
	uint32_t x2812 = UINT32_MAX;
	static uint32_t t96 = 209U;

	t96 = (((x2809==x2810)>>x2811)*x2812);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x2814 = INT32_MIN;
	uint8_t x2815 = 9U;
	int16_t x2816 = -1;
	volatile int32_t t97 = -280299331;

	t97 = (((x2813==x2814)>>x2815)*x2816);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x2825 = INT64_MIN;
	static int64_t x2826 = INT64_MIN;
	static volatile uint64_t x2827 = 3LLU;
	static int64_t x2828 = 413LL;
	volatile int64_t t98 = -30114563LL;

	t98 = (((x2825==x2826)>>x2827)*x2828);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x2829 = -10498564111LL;
	uint32_t x2830 = UINT32_MAX;
	volatile uint16_t x2832 = 0U;
	volatile int32_t t99 = -870;

	t99 = (((x2829==x2830)>>x2831)*x2832);

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


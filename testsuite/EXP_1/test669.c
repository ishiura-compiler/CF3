#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x133 = 1178U;
int8_t x142 = INT8_MAX;
static uint8_t x144 = 9U;
int8_t x164 = 7;
int16_t x297 = 1;
int64_t x298 = INT64_MIN;
volatile int64_t t5 = -63858LL;
int32_t x321 = INT32_MAX;
uint16_t x356 = 13U;
volatile int8_t x375 = INT8_MIN;
int8_t x392 = 6;
uint8_t x509 = UINT8_MAX;
static volatile uint32_t x511 = 193U;
static volatile uint32_t x613 = UINT32_MAX;
volatile uint64_t t13 = 2029LLU;
static int32_t x623 = -4;
uint8_t x764 = 1U;
uint32_t x1155 = UINT32_MAX;
volatile uint32_t t22 = 728U;
volatile int8_t x1220 = 14;
static uint8_t x1248 = 2U;
static volatile int64_t t24 = 3570430083830086LL;
volatile int64_t x1306 = INT64_MIN;
int64_t x1307 = 3449701645505823LL;
static uint64_t x1333 = UINT64_MAX;
static int8_t x1335 = INT8_MIN;
volatile int64_t x1367 = INT64_MIN;
volatile uint64_t t29 = 374446322451827249LLU;
volatile int32_t t31 = 4833;
static int64_t x1413 = 0LL;
static uint64_t x1415 = 32597800174411982LLU;
static uint8_t x1486 = 21U;
volatile int64_t x1487 = -1838055412384966LL;
static uint64_t t34 = 5024987051986595427LLU;
int32_t x1497 = 5876;
int64_t x1546 = INT64_MAX;
uint64_t x1547 = 19104381LLU;
uint64_t t36 = 7LLU;
int64_t x1574 = INT64_MAX;
static uint64_t x1575 = 1LLU;
uint16_t x1783 = 74U;
int16_t x1784 = 31;
int8_t x1814 = -1;
uint64_t x1878 = 2LLU;
volatile int8_t x1880 = 19;
uint16_t x1958 = 8U;
static uint32_t x2146 = 4274U;
int64_t x2179 = INT64_MAX;
uint8_t x2220 = 0U;
static uint32_t t48 = 32331U;
static int16_t x2305 = -40;
int8_t x2308 = 5;
volatile uint64_t t49 = 7LLU;
volatile uint64_t t50 = 1034904134838396LLU;
int16_t x2485 = INT16_MIN;
int64_t x2521 = INT64_MIN;
volatile int64_t x2522 = INT64_MIN;
int8_t x2592 = 1;
static int16_t x2650 = INT16_MIN;
int32_t x2657 = -1;
uint32_t x2660 = 6U;
volatile uint32_t t60 = 257385971U;
uint16_t x2716 = 6U;
static uint8_t x2828 = 47U;
volatile int8_t x2840 = 1;
uint64_t t65 = 4983713LLU;
volatile int32_t t67 = 389;
uint64_t t68 = 1584610769LLU;
int8_t x2991 = 1;
int8_t x3023 = -6;
volatile int32_t t70 = 8;
volatile int64_t x3034 = INT64_MAX;
uint64_t x3091 = UINT64_MAX;
volatile uint32_t t73 = 10U;
static volatile int16_t x3266 = INT16_MIN;
int16_t x3268 = 1;
volatile uint32_t x3285 = 1058684500U;
volatile uint32_t t76 = 23610U;
int32_t x3325 = -1;
static uint16_t x3341 = 27079U;
uint32_t t79 = 15930U;
int32_t x3357 = INT32_MIN;
int64_t x3398 = INT64_MIN;
int8_t x3401 = INT8_MIN;
volatile uint64_t t89 = 16932292004672175LLU;
volatile int16_t x4002 = INT16_MIN;
int32_t x4005 = -1;
uint8_t x4007 = 66U;
int32_t t96 = 24862;
int64_t x4233 = 77LL;
int8_t x4273 = -1;
int64_t x4277 = -1LL;


void f0(void) {
	static int16_t x9 = INT16_MIN;
	uint16_t x10 = 755U;
	int8_t x11 = INT8_MIN;
	volatile uint8_t x12 = 0U;
	int32_t t0 = -103;

	t0 = (((x9/x10)^x11)<<x12);

	if (t0 != 85) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x134 = UINT16_MAX;
	uint32_t x135 = 621U;
	int8_t x136 = 0;
	volatile uint32_t t1 = 10612133U;

	t1 = (((x133/x134)^x135)<<x136);

	if (t1 != 621U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x141 = -1;
	uint16_t x143 = UINT16_MAX;
	int32_t t2 = 90854441;

	t2 = (((x141/x142)^x143)<<x144);

	if (t2 != 33553920) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x161 = 178170LL;
	uint32_t x162 = 18735U;
	static int64_t x163 = 2177861449118591LL;
	static int64_t t3 = -825620390020213164LL;

	t3 = (((x161/x162)^x163)<<x164);

	if (t3 != 278766265487178496LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x217 = 13;
	static uint64_t x218 = 495074277LLU;
	volatile uint8_t x219 = 91U;
	int16_t x220 = 10;
	volatile uint64_t t4 = 2147808031854584717LLU;

	t4 = (((x217/x218)^x219)<<x220);

	if (t4 != 93184LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x299 = INT32_MAX;
	volatile uint8_t x300 = 2U;

	t5 = (((x297/x298)^x299)<<x300);

	if (t5 != 8589934588LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x322 = 23232042957890LLU;
	volatile int16_t x323 = -39;
	volatile uint8_t x324 = 7U;
	uint64_t t6 = 3511387783LLU;

	t6 = (((x321/x322)^x323)<<x324);

	if (t6 != 18446744073709546624LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x353 = 2792LLU;
	volatile int32_t x354 = INT32_MIN;
	int64_t x355 = -1LL;
	volatile uint64_t t7 = 11731440LLU;

	t7 = (((x353/x354)^x355)<<x356);

	if (t7 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x373 = INT8_MIN;
	uint8_t x374 = 10U;
	uint16_t x376 = 1U;
	static volatile int32_t t8 = -99364244;

	t8 = (((x373/x374)^x375)<<x376);

	if (t8 != 232) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x389 = 2LLU;
	int32_t x390 = INT32_MAX;
	uint32_t x391 = 401344914U;
	uint64_t t9 = 199884806LLU;

	t9 = (((x389/x390)^x391)<<x392);

	if (t9 != 25686074496LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x401 = -43782944;
	static int16_t x402 = INT16_MIN;
	int8_t x403 = 30;
	uint8_t x404 = 19U;
	volatile int32_t t10 = -56946;

	t10 = (((x401/x402)^x403)<<x404);

	if (t10 != 691011584) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x510 = INT32_MIN;
	int32_t x512 = 0;
	volatile uint32_t t11 = 6U;

	t11 = (((x509/x510)^x511)<<x512);

	if (t11 != 193U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x589 = 1;
	volatile int64_t x590 = INT64_MIN;
	uint32_t x591 = 69896301U;
	int8_t x592 = 4;
	volatile int64_t t12 = -401479854721LL;

	t12 = (((x589/x590)^x591)<<x592);

	if (t12 != 1118340816LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x614 = 470U;
	uint64_t x615 = 824511571425996473LLU;
	uint8_t x616 = 0U;

	t13 = (((x613/x614)^x615)<<x616);

	if (t13 != 824511571433676429LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x621 = 60657574301723LLU;
	int64_t x622 = -1LL;
	volatile uint8_t x624 = 2U;
	volatile uint64_t t14 = 138869LLU;

	t14 = (((x621/x622)^x623)<<x624);

	if (t14 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x761 = -140;
	int16_t x762 = -2295;
	int64_t x763 = 0LL;
	int64_t t15 = -112360237418LL;

	t15 = (((x761/x762)^x763)<<x764);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x773 = INT64_MAX;
	int32_t x774 = INT32_MIN;
	static int32_t x775 = -1;
	static uint8_t x776 = 0U;
	int64_t t16 = 989256561976LL;

	t16 = (((x773/x774)^x775)<<x776);

	if (t16 != 4294967294LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x821 = UINT64_MAX;
	uint16_t x822 = 4025U;
	uint64_t x823 = UINT64_MAX;
	uint8_t x824 = 0U;
	uint64_t t17 = 1920888064LLU;

	t17 = (((x821/x822)^x823)<<x824);

	if (t17 != 18442161031703661044LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x841 = -5;
	static int64_t x842 = -1LL;
	static uint32_t x843 = 2259965U;
	volatile int8_t x844 = 5;
	int64_t t18 = 43408163187338LL;

	t18 = (((x841/x842)^x843)<<x844);

	if (t18 != 72318720LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1049 = 146722966U;
	static int8_t x1050 = INT8_MAX;
	int8_t x1051 = -1;
	uint8_t x1052 = 0U;
	volatile uint32_t t19 = 25U;

	t19 = (((x1049/x1050)^x1051)<<x1052);

	if (t19 != 4293811997U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x1069 = 0U;
	int16_t x1070 = 3;
	int64_t x1071 = 919090398881914LL;
	int8_t x1072 = 7;
	volatile int64_t t20 = 1200371061444LL;

	t20 = (((x1069/x1070)^x1071)<<x1072);

	if (t20 != 117643571056884992LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1085 = UINT8_MAX;
	static int64_t x1086 = 109667019893179744LL;
	uint16_t x1087 = 941U;
	int8_t x1088 = 9;
	volatile int64_t t21 = -17448659501554LL;

	t21 = (((x1085/x1086)^x1087)<<x1088);

	if (t21 != 481792LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1153 = UINT32_MAX;
	int16_t x1154 = INT16_MAX;
	uint8_t x1156 = 22U;

	t22 = (((x1153/x1154)^x1155)<<x1156);

	if (t22 != 4273995776U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x1217 = 1;
	static int8_t x1218 = INT8_MIN;
	uint64_t x1219 = 212LLU;
	volatile uint64_t t23 = 1658269668710LLU;

	t23 = (((x1217/x1218)^x1219)<<x1220);

	if (t23 != 3473408LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1245 = -1LL;
	int32_t x1246 = -1;
	volatile uint8_t x1247 = 9U;

	t24 = (((x1245/x1246)^x1247)<<x1248);

	if (t24 != 32LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1301 = INT16_MIN;
	volatile uint64_t x1302 = UINT64_MAX;
	int16_t x1303 = INT16_MAX;
	static int16_t x1304 = 54;
	static uint64_t t25 = 1542280362LLU;

	t25 = (((x1301/x1302)^x1303)<<x1304);

	if (t25 != 18428729675200069632LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1305 = INT8_MIN;
	int64_t x1308 = 1LL;
	volatile int64_t t26 = 45577832663373084LL;

	t26 = (((x1305/x1306)^x1307)<<x1308);

	if (t26 != 6899403291011646LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1334 = -1;
	int64_t x1336 = 1LL;
	static uint64_t t27 = 26466LLU;

	t27 = (((x1333/x1334)^x1335)<<x1336);

	if (t27 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x1349 = 143LLU;
	uint64_t x1350 = 1101000138488883482LLU;
	uint32_t x1351 = 68865649U;
	uint8_t x1352 = 4U;
	volatile uint64_t t28 = 12768LLU;

	t28 = (((x1349/x1350)^x1351)<<x1352);

	if (t28 != 1101850384LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x1365 = UINT64_MAX;
	volatile int32_t x1366 = -12828;
	volatile uint8_t x1368 = 32U;

	t29 = (((x1365/x1366)^x1367)<<x1368);

	if (t29 != 4294967296LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x1373 = INT64_MIN;
	static uint64_t x1374 = 122769376657LLU;
	int32_t x1375 = -1;
	int8_t x1376 = 11;
	volatile uint64_t t30 = 3406163855LLU;

	t30 = (((x1373/x1374)^x1375)<<x1376);

	if (t30 != 18446743919848169472LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1381 = UINT8_MAX;
	int16_t x1382 = -200;
	int32_t x1383 = -1;
	static volatile uint8_t x1384 = 3U;

	t31 = (((x1381/x1382)^x1383)<<x1384);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1385 = INT32_MAX;
	static volatile int32_t x1386 = -7;
	volatile int16_t x1387 = INT16_MIN;
	uint32_t x1388 = 1U;
	static int32_t t32 = -1847;

	t32 = (((x1385/x1386)^x1387)<<x1388);

	if (t32 != 613594844) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x1414 = -1;
	static uint8_t x1416 = 3U;
	volatile uint64_t t33 = 4183LLU;

	t33 = (((x1413/x1414)^x1415)<<x1416);

	if (t33 != 260782401395295856LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x1485 = 1350531941LLU;
	uint16_t x1488 = 5U;

	t34 = (((x1485/x1486)^x1487)<<x1488);

	if (t34 != 18387926302499702720LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1498 = -1LL;
	volatile uint64_t x1499 = 425615209342462550LLU;
	uint8_t x1500 = 1U;
	uint64_t t35 = 1044669814734392158LLU;

	t35 = (((x1497/x1498)^x1499)<<x1500);

	if (t35 != 17595513655024617140LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x1545 = 1U;
	volatile uint8_t x1548 = 19U;

	t36 = (((x1545/x1546)^x1547)<<x1548);

	if (t36 != 10016197705728LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1573 = INT16_MIN;
	volatile uint32_t x1576 = 17U;
	uint64_t t37 = 11287770691LLU;

	t37 = (((x1573/x1574)^x1575)<<x1576);

	if (t37 != 131072LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x1585 = 486527881LLU;
	static int32_t x1586 = INT32_MAX;
	volatile uint16_t x1587 = 0U;
	volatile int8_t x1588 = 13;
	uint64_t t38 = 4339167991514LLU;

	t38 = (((x1585/x1586)^x1587)<<x1588);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x1733 = 3016261444LLU;
	uint64_t x1734 = 31936435639653025LLU;
	static int16_t x1735 = INT16_MIN;
	int32_t x1736 = 0;
	volatile uint64_t t39 = 2070381006326104395LLU;

	t39 = (((x1733/x1734)^x1735)<<x1736);

	if (t39 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1781 = 160LLU;
	int16_t x1782 = -1;
	uint64_t t40 = 14893210792630657LLU;

	t40 = (((x1781/x1782)^x1783)<<x1784);

	if (t40 != 158913789952LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x1813 = 2;
	int8_t x1815 = -3;
	uint32_t x1816 = 9U;
	int32_t t41 = -137044406;

	t41 = (((x1813/x1814)^x1815)<<x1816);

	if (t41 != 1536) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1877 = INT8_MAX;
	int32_t x1879 = 10;
	uint64_t t42 = 7349880501561LLU;

	t42 = (((x1877/x1878)^x1879)<<x1880);

	if (t42 != 27787264LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x1957 = -1;
	int8_t x1959 = 0;
	volatile int8_t x1960 = 3;
	static int32_t t43 = 264;

	t43 = (((x1957/x1958)^x1959)<<x1960);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x2089 = -1LL;
	int64_t x2090 = 1LL;
	int16_t x2091 = -6549;
	static int8_t x2092 = 6;
	volatile int64_t t44 = -2LL;

	t44 = (((x2089/x2090)^x2091)<<x2092);

	if (t44 != 419072LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x2145 = INT64_MAX;
	uint64_t x2147 = UINT64_MAX;
	int8_t x2148 = 58;
	volatile uint64_t t45 = 7558600LLU;

	t45 = (((x2145/x2146)^x2147)<<x2148);

	if (t45 != 7493989779944505344LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2177 = INT32_MIN;
	uint64_t x2178 = UINT64_MAX;
	static uint32_t x2180 = 3U;
	volatile uint64_t t46 = 11LLU;

	t46 = (((x2177/x2178)^x2179)<<x2180);

	if (t46 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x2217 = INT32_MIN;
	int64_t x2218 = INT64_MAX;
	uint32_t x2219 = UINT32_MAX;
	volatile int64_t t47 = -276607LL;

	t47 = (((x2217/x2218)^x2219)<<x2220);

	if (t47 != 4294967295LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x2281 = -1;
	uint32_t x2282 = 31U;
	uint8_t x2283 = UINT8_MAX;
	uint8_t x2284 = 6U;

	t48 = (((x2281/x2282)^x2283)<<x2284);

	if (t48 != 277094080U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2306 = 7LLU;
	volatile uint16_t x2307 = 45U;

	t49 = (((x2305/x2306)^x2307)<<x2308);

	if (t49 != 10540996613548315680LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2421 = 75;
	uint64_t x2422 = UINT64_MAX;
	static int32_t x2423 = INT32_MAX;
	uint8_t x2424 = 26U;

	t50 = (((x2421/x2422)^x2423)<<x2424);

	if (t50 != 144115188008747008LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x2486 = 3LLU;
	volatile int32_t x2487 = -1;
	static uint8_t x2488 = 2U;
	static uint64_t t51 = 5190999LLU;

	t51 = (((x2485/x2486)^x2487)<<x2488);

	if (t51 != 12297829382473078100LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2523 = 3650865245LLU;
	uint8_t x2524 = 1U;
	uint64_t t52 = 14286947340216LLU;

	t52 = (((x2521/x2522)^x2523)<<x2524);

	if (t52 != 7301730488LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2557 = -5;
	int64_t x2558 = 31643863368LL;
	volatile uint32_t x2559 = 22723051U;
	uint8_t x2560 = 4U;
	volatile int64_t t53 = 4LL;

	t53 = (((x2557/x2558)^x2559)<<x2560);

	if (t53 != 363568816LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x2561 = INT16_MAX;
	int64_t x2562 = INT64_MAX;
	int16_t x2563 = INT16_MAX;
	int8_t x2564 = 0;
	volatile int64_t t54 = -3096199907LL;

	t54 = (((x2561/x2562)^x2563)<<x2564);

	if (t54 != 32767LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2565 = -917;
	int32_t x2566 = -404961;
	uint16_t x2567 = 620U;
	volatile uint8_t x2568 = 5U;
	volatile int32_t t55 = 4152;

	t55 = (((x2565/x2566)^x2567)<<x2568);

	if (t55 != 19840) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x2589 = INT8_MIN;
	volatile int16_t x2590 = INT16_MIN;
	static int16_t x2591 = INT16_MAX;
	static volatile int32_t t56 = -491;

	t56 = (((x2589/x2590)^x2591)<<x2592);

	if (t56 != 65534) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x2609 = INT16_MAX;
	uint64_t x2610 = 242528768525550LLU;
	int64_t x2611 = -1LL;
	volatile uint16_t x2612 = 4U;
	volatile uint64_t t57 = 33333LLU;

	t57 = (((x2609/x2610)^x2611)<<x2612);

	if (t57 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x2649 = 4039456518714472846LL;
	int8_t x2651 = -6;
	volatile uint8_t x2652 = 0U;
	volatile int64_t t58 = -20706438037LL;

	t58 = (((x2649/x2650)^x2651)<<x2652);

	if (t58 != 123274429892413LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2658 = INT64_MAX;
	volatile uint16_t x2659 = UINT16_MAX;
	volatile int64_t t59 = 277737265673LL;

	t59 = (((x2657/x2658)^x2659)<<x2660);

	if (t59 != 4194240LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x2665 = -1;
	int16_t x2666 = -1;
	volatile uint32_t x2667 = UINT32_MAX;
	static uint16_t x2668 = 0U;

	t60 = (((x2665/x2666)^x2667)<<x2668);

	if (t60 != 4294967294U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x2713 = -20315705631LL;
	volatile int32_t x2714 = INT32_MIN;
	uint64_t x2715 = 95132438209LLU;
	uint64_t t61 = 11145290941619LLU;

	t61 = (((x2713/x2714)^x2715)<<x2716);

	if (t61 != 6088476045824LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x2777 = -1;
	uint64_t x2778 = 124594669079LLU;
	uint64_t x2779 = 589342LLU;
	volatile int8_t x2780 = 34;
	volatile uint64_t t62 = 37635426082007LLU;

	t62 = (((x2777/x2778)^x2779)<<x2780);

	if (t62 != 2553391609756516352LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2789 = 223126U;
	volatile int64_t x2790 = INT64_MIN;
	uint8_t x2791 = 1U;
	int8_t x2792 = 3;
	static int64_t t63 = 7LL;

	t63 = (((x2789/x2790)^x2791)<<x2792);

	if (t63 != 8LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2825 = 40033991586159202LLU;
	int8_t x2826 = -1;
	int16_t x2827 = INT16_MIN;
	volatile uint64_t t64 = 16708242186977LLU;

	t64 = (((x2825/x2826)^x2827)<<x2828);

	if (t64 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x2837 = UINT16_MAX;
	static int64_t x2838 = INT64_MIN;
	volatile uint64_t x2839 = 7595702729742LLU;

	t65 = (((x2837/x2838)^x2839)<<x2840);

	if (t65 != 15191405459484LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x2889 = 2U;
	uint16_t x2890 = UINT16_MAX;
	uint16_t x2891 = 412U;
	volatile int16_t x2892 = 1;
	volatile int32_t t66 = 39764;

	t66 = (((x2889/x2890)^x2891)<<x2892);

	if (t66 != 824) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2893 = 22U;
	int8_t x2894 = INT8_MAX;
	int32_t x2895 = 6;
	volatile uint8_t x2896 = 0U;

	t67 = (((x2893/x2894)^x2895)<<x2896);

	if (t67 != 6) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x2913 = 11U;
	static volatile int8_t x2914 = INT8_MIN;
	uint64_t x2915 = UINT64_MAX;
	volatile uint16_t x2916 = 3U;

	t68 = (((x2913/x2914)^x2915)<<x2916);

	if (t68 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2989 = INT64_MIN;
	int8_t x2990 = INT8_MIN;
	uint32_t x2992 = 0U;
	volatile int64_t t69 = -34463533857573LL;

	t69 = (((x2989/x2990)^x2991)<<x2992);

	if (t69 != 72057594037927937LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x3021 = 101U;
	volatile int32_t x3022 = -1;
	int8_t x3024 = 1;

	t70 = (((x3021/x3022)^x3023)<<x3024);

	if (t70 != 194) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3033 = 144573237U;
	int16_t x3035 = 309;
	static volatile uint8_t x3036 = 15U;
	int64_t t71 = 2092478911449796816LL;

	t71 = (((x3033/x3034)^x3035)<<x3036);

	if (t71 != 10125312LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3089 = INT64_MAX;
	uint16_t x3090 = 52U;
	static uint16_t x3092 = 17U;
	uint64_t t72 = 18581615LLU;

	t72 = (((x3089/x3090)^x3091)<<x3092);

	if (t72 != 12770822820260347904LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x3113 = 1048177526U;
	int16_t x3114 = -492;
	int16_t x3115 = -1;
	int8_t x3116 = 1;

	t73 = (((x3113/x3114)^x3115)<<x3116);

	if (t73 != 4294967294U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3233 = -1LL;
	volatile uint64_t x3234 = 103324084149645914LLU;
	int8_t x3235 = INT8_MIN;
	uint8_t x3236 = 9U;
	uint64_t t74 = 880816393377548313LLU;

	t74 = (((x3233/x3234)^x3235)<<x3236);

	if (t74 != 18446744073709446144LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3265 = INT32_MIN;
	uint64_t x3267 = UINT64_MAX;
	static volatile uint64_t t75 = 6908878129LLU;

	t75 = (((x3265/x3266)^x3267)<<x3268);

	if (t75 != 18446744073709420542LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3286 = INT16_MIN;
	int16_t x3287 = 3747;
	static volatile int8_t x3288 = 9;

	t76 = (((x3285/x3286)^x3287)<<x3288);

	if (t76 != 1918464U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x3313 = 3167861302802LLU;
	volatile int8_t x3314 = -2;
	int16_t x3315 = INT16_MAX;
	static int8_t x3316 = 8;
	volatile uint64_t t77 = 1200851965601LLU;

	t77 = (((x3313/x3314)^x3315)<<x3316);

	if (t77 != 8388352LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x3326 = INT16_MIN;
	int8_t x3327 = INT8_MAX;
	int32_t x3328 = 0;
	volatile int32_t t78 = -310991753;

	t78 = (((x3325/x3326)^x3327)<<x3328);

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3342 = UINT32_MAX;
	int8_t x3343 = -55;
	uint16_t x3344 = 2U;

	t79 = (((x3341/x3342)^x3343)<<x3344);

	if (t79 != 4294967076U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x3358 = 27822LLU;
	int64_t x3359 = -1LL;
	uint8_t x3360 = 33U;
	static volatile uint64_t t80 = 422553438LLU;

	t80 = (((x3357/x3358)^x3359)<<x3360);

	if (t80 != 16206374997655027712LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x3397 = INT32_MAX;
	int32_t x3399 = 9;
	uint8_t x3400 = 6U;
	static int64_t t81 = 1LL;

	t81 = (((x3397/x3398)^x3399)<<x3400);

	if (t81 != 576LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x3402 = UINT64_MAX;
	int8_t x3403 = 3;
	volatile int8_t x3404 = 14;
	volatile uint64_t t82 = 7601806508039756681LLU;

	t82 = (((x3401/x3402)^x3403)<<x3404);

	if (t82 != 49152LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x3437 = 4U;
	int8_t x3438 = INT8_MIN;
	uint64_t x3439 = UINT64_MAX;
	uint32_t x3440 = 3U;
	volatile uint64_t t83 = 28496053337504595LLU;

	t83 = (((x3437/x3438)^x3439)<<x3440);

	if (t83 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x3513 = 12822061685294180LLU;
	int8_t x3514 = -1;
	int64_t x3515 = INT64_MAX;
	volatile uint8_t x3516 = 1U;
	uint64_t t84 = 18LLU;

	t84 = (((x3513/x3514)^x3515)<<x3516);

	if (t84 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3645 = INT8_MAX;
	uint64_t x3646 = 3097974804751896LLU;
	static int64_t x3647 = INT64_MAX;
	volatile int32_t x3648 = 25;
	static volatile uint64_t t85 = 9390480953LLU;

	t85 = (((x3645/x3646)^x3647)<<x3648);

	if (t85 != 18446744073675997184LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x3681 = -1;
	int32_t x3682 = 225434259;
	static int8_t x3683 = 1;
	volatile uint8_t x3684 = 1U;
	int32_t t86 = 5042627;

	t86 = (((x3681/x3682)^x3683)<<x3684);

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x3705 = UINT16_MAX;
	int32_t x3706 = 56053;
	uint64_t x3707 = 2362889985920LLU;
	int8_t x3708 = 1;
	volatile uint64_t t87 = 14564LLU;

	t87 = (((x3705/x3706)^x3707)<<x3708);

	if (t87 != 4725779971842LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x3721 = 204153U;
	uint32_t x3722 = 6125U;
	static int8_t x3723 = 8;
	uint16_t x3724 = 26U;
	uint32_t t88 = 126U;

	t88 = (((x3721/x3722)^x3723)<<x3724);

	if (t88 != 2751463424U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x3889 = 1302091LLU;
	volatile int32_t x3890 = -1;
	int8_t x3891 = INT8_MIN;
	uint8_t x3892 = 17U;

	t89 = (((x3889/x3890)^x3891)<<x3892);

	if (t89 != 18446744073692774400LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3905 = 10;
	static int32_t x3906 = INT32_MIN;
	int8_t x3907 = 8;
	static uint16_t x3908 = 3U;
	int32_t t90 = 531603;

	t90 = (((x3905/x3906)^x3907)<<x3908);

	if (t90 != 64) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x3937 = INT8_MAX;
	int64_t x3938 = INT64_MIN;
	uint8_t x3939 = 0U;
	static uint32_t x3940 = 0U;
	int64_t t91 = -37LL;

	t91 = (((x3937/x3938)^x3939)<<x3940);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x3941 = INT8_MIN;
	uint8_t x3942 = 24U;
	int16_t x3943 = INT16_MIN;
	int8_t x3944 = 0;
	volatile int32_t t92 = 32741;

	t92 = (((x3941/x3942)^x3943)<<x3944);

	if (t92 != 32763) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x4001 = 797475793815976924LLU;
	int32_t x4003 = INT32_MAX;
	volatile uint8_t x4004 = 2U;
	uint64_t t93 = 51122LLU;

	t93 = (((x4001/x4002)^x4003)<<x4004);

	if (t93 != 8589934588LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4006 = UINT8_MAX;
	static int16_t x4008 = 0;
	static volatile int32_t t94 = 28067;

	t94 = (((x4005/x4006)^x4007)<<x4008);

	if (t94 != 66) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x4117 = 2154404902LLU;
	static uint64_t x4118 = 61237LLU;
	int8_t x4119 = INT8_MIN;
	uint16_t x4120 = 0U;
	uint64_t t95 = 566473LLU;

	t95 = (((x4117/x4118)^x4119)<<x4120);

	if (t95 != 18446744073709516525LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4205 = 1;
	uint16_t x4206 = 14U;
	int16_t x4207 = INT16_MAX;
	uint32_t x4208 = 1U;

	t96 = (((x4205/x4206)^x4207)<<x4208);

	if (t96 != 65534) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4234 = INT8_MIN;
	static uint16_t x4235 = 38U;
	static int8_t x4236 = 3;
	int64_t t97 = -47148225792903LL;

	t97 = (((x4233/x4234)^x4235)<<x4236);

	if (t97 != 304LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x4274 = 30739320LLU;
	int8_t x4275 = -1;
	uint8_t x4276 = 3U;
	volatile uint64_t t98 = 191962353666LLU;

	t98 = (((x4273/x4274)^x4275)<<x4276);

	if (t98 != 18446739272889215000LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x4278 = 3U;
	volatile int8_t x4279 = INT8_MAX;
	uint16_t x4280 = 8U;
	volatile int64_t t99 = -1824055066576176776LL;

	t99 = (((x4277/x4278)^x4279)<<x4280);

	if (t99 != 32512LL) { NG(); } else { ; }
	
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


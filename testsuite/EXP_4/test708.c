#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x55 = INT8_MIN;
uint32_t t0 = 927866796U;
uint32_t x179 = UINT32_MAX;
int16_t x221 = 116;
int64_t x222 = -802858521236605LL;
uint8_t x227 = 0U;
int16_t x292 = INT16_MIN;
int32_t t12 = -31617;
uint32_t x545 = 169475U;
int16_t x547 = INT16_MIN;
int32_t x599 = -1208147;
volatile uint64_t x613 = 124798LLU;
int8_t x691 = INT8_MIN;
uint32_t x705 = 82668U;
volatile uint64_t x718 = UINT64_MAX;
uint16_t x740 = 2U;
int32_t x796 = 173;
uint8_t x931 = 0U;
static int8_t x937 = INT8_MAX;
int64_t x947 = INT64_MIN;
uint16_t x1209 = UINT16_MAX;
static volatile int32_t t32 = -172056950;
int32_t t33 = INT32_MAX;
int32_t t34 = 51519734;
volatile uint16_t x1311 = UINT16_MAX;
volatile uint32_t x1342 = 225U;
uint8_t x1343 = 0U;
volatile int32_t t39 = 1;
volatile int32_t t40 = -285912;
volatile int8_t x1357 = INT8_MAX;
static int64_t x1365 = INT64_MAX;
uint8_t x1367 = 4U;
uint32_t x1418 = 10284U;
int32_t t44 = -15;
static volatile int32_t t45 = -29470;
uint32_t x1435 = 642476332U;
uint8_t x1442 = 3U;
volatile int32_t t47 = 740717;
uint16_t x1473 = 51U;
static int32_t t49 = 407;
int64_t x1503 = INT64_MIN;
static volatile int64_t x1506 = INT64_MIN;
uint16_t x1545 = 1U;
volatile int64_t t56 = INT64_MAX;
int8_t x1578 = -22;
int64_t x1579 = 0LL;
int64_t x1645 = INT64_MAX;
int8_t x1646 = -1;
int8_t x1653 = 3;
int8_t x1655 = 63;
int32_t t61 = 50919;
static volatile uint16_t x1745 = UINT16_MAX;
int32_t x1746 = INT32_MIN;
int32_t x1931 = INT32_MIN;
static int64_t x1940 = -1LL;
static volatile int16_t x1961 = 151;
volatile uint32_t t75 = 259229U;
static int32_t x2065 = 3;
volatile uint64_t x2071 = 1728259169334292LLU;
volatile int64_t x2132 = -1LL;
int32_t x2139 = -139169;
int64_t x2164 = -713113177755971LL;
int16_t x2170 = INT16_MIN;
static uint32_t x2176 = 874859U;
static int8_t x2242 = INT8_MAX;
static volatile int8_t x2243 = 0;
volatile int32_t t88 = 523113704;
int8_t x2249 = 7;
volatile int32_t t89 = 272113940;
int64_t x2260 = 216LL;
int16_t x2328 = -1;
int32_t t92 = 19293;
uint16_t x2350 = UINT16_MAX;
uint16_t x2351 = 80U;
uint8_t x2424 = 1U;
uint32_t x2430 = UINT32_MAX;
static int32_t x2477 = 3668;
int32_t x2478 = INT32_MIN;
int32_t x2479 = INT32_MIN;
uint8_t x2513 = 43U;


void f0(void) {
	uint32_t x53 = 3U;
	static int16_t x54 = 0;
	uint8_t x56 = UINT8_MAX;

	t0 = (x53<<(x54*(x55%x56)));

	if (t0 != 3U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x177 = 30;
	uint32_t x178 = UINT32_MAX;
	volatile int32_t x180 = -1;
	volatile int32_t t1 = 8213255;

	t1 = (x177<<(x178*(x179%x180)));

	if (t1 != 30) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x197 = 430U;
	uint8_t x198 = 11U;
	static int8_t x199 = 0;
	int64_t x200 = -1LL;
	volatile uint32_t t2 = 0U;

	t2 = (x197<<(x198*(x199%x200)));

	if (t2 != 430U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x209 = UINT8_MAX;
	int32_t x210 = 1;
	uint16_t x211 = UINT16_MAX;
	int8_t x212 = -25;
	volatile int32_t t3 = 34;

	t3 = (x209<<(x210*(x211%x212)));

	if (t3 != 261120) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x217 = 29076LLU;
	volatile int16_t x218 = 807;
	static int16_t x219 = -1;
	int32_t x220 = -1;
	volatile uint64_t t4 = 9911923912588LLU;

	t4 = (x217<<(x218*(x219%x220)));

	if (t4 != 29076LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x223 = INT16_MIN;
	int8_t x224 = INT8_MIN;
	static int32_t t5 = -456;

	t5 = (x221<<(x222*(x223%x224)));

	if (t5 != 116) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x225 = 11U;
	volatile int8_t x226 = INT8_MIN;
	static int8_t x228 = -1;
	volatile int32_t t6 = -166;

	t6 = (x225<<(x226*(x227%x228)));

	if (t6 != 11) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x237 = INT8_MAX;
	volatile uint8_t x238 = 1U;
	static uint8_t x239 = 5U;
	int64_t x240 = INT64_MAX;
	static volatile int32_t t7 = -1;

	t7 = (x237<<(x238*(x239%x240)));

	if (t7 != 4064) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x273 = 10;
	int16_t x274 = 13;
	int64_t x275 = 7077330391109578LL;
	int8_t x276 = -1;
	volatile int32_t t8 = -23985981;

	t8 = (x273<<(x274*(x275%x276)));

	if (t8 != 10) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x285 = 0;
	volatile int32_t x286 = INT32_MIN;
	int32_t x287 = -1;
	int8_t x288 = 1;
	volatile int32_t t9 = 228199138;

	t9 = (x285<<(x286*(x287%x288)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x289 = 491654LL;
	int8_t x290 = -1;
	int16_t x291 = INT16_MIN;
	volatile int64_t t10 = -7696LL;

	t10 = (x289<<(x290*(x291%x292)));

	if (t10 != 491654LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x337 = 5329U;
	int64_t x338 = -1157484287LL;
	uint16_t x339 = 17U;
	int64_t x340 = -1LL;
	int32_t t11 = 913050;

	t11 = (x337<<(x338*(x339%x340)));

	if (t11 != 5329) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x353 = UINT8_MAX;
	uint32_t x354 = UINT32_MAX;
	uint16_t x355 = UINT16_MAX;
	int8_t x356 = -1;

	t12 = (x353<<(x354*(x355%x356)));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x405 = 1;
	static int32_t x406 = -1;
	int32_t x407 = INT32_MAX;
	int32_t x408 = INT32_MAX;
	volatile int32_t t13 = -974299;

	t13 = (x405<<(x406*(x407%x408)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x445 = INT8_MAX;
	volatile int64_t x446 = 82976473264LL;
	static int16_t x447 = 0;
	int64_t x448 = 88971LL;
	int32_t t14 = 1;

	t14 = (x445<<(x446*(x447%x448)));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x525 = 8U;
	int16_t x526 = INT16_MIN;
	static uint64_t x527 = UINT64_MAX;
	uint8_t x528 = UINT8_MAX;
	static volatile int32_t t15 = 170;

	t15 = (x525<<(x526*(x527%x528)));

	if (t15 != 8) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x546 = INT16_MAX;
	volatile int16_t x548 = -1;
	volatile uint32_t t16 = 448656560U;

	t16 = (x545<<(x546*(x547%x548)));

	if (t16 != 169475U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x597 = UINT64_MAX;
	int64_t x598 = -1LL;
	static int8_t x600 = -1;
	uint64_t t17 = UINT64_MAX;

	t17 = (x597<<(x598*(x599%x600)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x614 = INT16_MIN;
	uint32_t x615 = UINT32_MAX;
	int32_t x616 = -1;
	volatile uint64_t t18 = 38535265423LLU;

	t18 = (x613<<(x614*(x615%x616)));

	if (t18 != 124798LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x649 = 0;
	static uint64_t x650 = 2LLU;
	uint32_t x651 = UINT32_MAX;
	volatile uint32_t x652 = 255U;
	int32_t t19 = 20164811;

	t19 = (x649<<(x650*(x651%x652)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x689 = INT64_MAX;
	int8_t x690 = INT8_MIN;
	int8_t x692 = INT8_MIN;
	int64_t t20 = INT64_MAX;

	t20 = (x689<<(x690*(x691%x692)));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x706 = INT64_MAX;
	int64_t x707 = INT64_MIN;
	volatile int8_t x708 = INT8_MIN;
	volatile uint32_t t21 = 2U;

	t21 = (x705<<(x706*(x707%x708)));

	if (t21 != 82668U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x717 = UINT16_MAX;
	static volatile int64_t x719 = -1LL;
	int64_t x720 = INT64_MAX;
	static volatile int32_t t22 = -4928191;

	t22 = (x717<<(x718*(x719%x720)));

	if (t22 != 131070) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x737 = 2969U;
	int64_t x738 = INT64_MAX;
	volatile int32_t x739 = INT32_MIN;
	volatile int32_t t23 = 158717271;

	t23 = (x737<<(x738*(x739%x740)));

	if (t23 != 2969) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x793 = UINT32_MAX;
	uint8_t x794 = 0U;
	int16_t x795 = -1;
	uint32_t t24 = UINT32_MAX;

	t24 = (x793<<(x794*(x795%x796)));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x809 = 265075504783601669LLU;
	uint64_t x810 = 6LLU;
	volatile int32_t x811 = -33043935;
	int16_t x812 = -1;
	volatile uint64_t t25 = 16286LLU;

	t25 = (x809<<(x810*(x811%x812)));

	if (t25 != 265075504783601669LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x929 = INT16_MAX;
	int64_t x930 = 15125045542516LL;
	int32_t x932 = 1908354;
	int32_t t26 = 11;

	t26 = (x929<<(x930*(x931%x932)));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x938 = 0U;
	static int32_t x939 = INT32_MAX;
	int16_t x940 = -1;
	volatile int32_t t27 = 1344676;

	t27 = (x937<<(x938*(x939%x940)));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x945 = INT16_MAX;
	static int16_t x946 = INT16_MIN;
	int32_t x948 = 2;
	int32_t t28 = 84721;

	t28 = (x945<<(x946*(x947%x948)));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x953 = 3326;
	uint64_t x954 = 443497339LLU;
	int8_t x955 = INT8_MAX;
	int8_t x956 = -1;
	volatile int32_t t29 = -172387456;

	t29 = (x953<<(x954*(x955%x956)));

	if (t29 != 3326) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x1149 = 720172552831071LL;
	int64_t x1150 = -124260648LL;
	int64_t x1151 = INT64_MIN;
	int32_t x1152 = INT32_MIN;
	int64_t t30 = 12074771160770LL;

	t30 = (x1149<<(x1150*(x1151%x1152)));

	if (t30 != 720172552831071LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1193 = 0;
	uint8_t x1194 = 0U;
	volatile int32_t x1195 = -665612404;
	int32_t x1196 = -16;
	int32_t t31 = 518;

	t31 = (x1193<<(x1194*(x1195%x1196)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1210 = -1;
	volatile uint32_t x1211 = UINT32_MAX;
	int64_t x1212 = -1LL;

	t32 = (x1209<<(x1210*(x1211%x1212)));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1265 = INT32_MAX;
	volatile int32_t x1266 = INT32_MIN;
	uint8_t x1267 = 0U;
	static int64_t x1268 = INT64_MIN;

	t33 = (x1265<<(x1266*(x1267%x1268)));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1269 = UINT8_MAX;
	uint64_t x1270 = UINT64_MAX;
	int16_t x1271 = -1;
	uint64_t x1272 = 1LLU;

	t34 = (x1269<<(x1270*(x1271%x1272)));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1293 = 6U;
	int16_t x1294 = -1;
	uint16_t x1295 = UINT16_MAX;
	uint16_t x1296 = UINT16_MAX;
	volatile int32_t t35 = -104605;

	t35 = (x1293<<(x1294*(x1295%x1296)));

	if (t35 != 6) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1309 = INT16_MAX;
	uint64_t x1310 = 38LLU;
	int16_t x1312 = -1;
	int32_t t36 = 29323;

	t36 = (x1309<<(x1310*(x1311%x1312)));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x1313 = INT64_MAX;
	int16_t x1314 = 1;
	volatile int64_t x1315 = INT64_MIN;
	static int8_t x1316 = INT8_MIN;
	volatile int64_t t37 = INT64_MAX;

	t37 = (x1313<<(x1314*(x1315%x1316)));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1341 = 0;
	volatile int16_t x1344 = INT16_MIN;
	int32_t t38 = 119;

	t38 = (x1341<<(x1342*(x1343%x1344)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1345 = UINT8_MAX;
	int8_t x1346 = -1;
	int8_t x1347 = INT8_MIN;
	static uint8_t x1348 = 2U;

	t39 = (x1345<<(x1346*(x1347%x1348)));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1353 = 0;
	uint16_t x1354 = 325U;
	volatile int8_t x1355 = INT8_MIN;
	volatile int32_t x1356 = -1;

	t40 = (x1353<<(x1354*(x1355%x1356)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1358 = INT64_MIN;
	uint32_t x1359 = UINT32_MAX;
	volatile uint8_t x1360 = 1U;
	int32_t t41 = 1;

	t41 = (x1357<<(x1358*(x1359%x1360)));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1361 = 66125;
	int16_t x1362 = 0;
	volatile uint32_t x1363 = 940966U;
	int64_t x1364 = INT64_MIN;
	static int32_t t42 = 115279689;

	t42 = (x1361<<(x1362*(x1363%x1364)));

	if (t42 != 66125) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x1366 = -1;
	int32_t x1368 = -1;
	volatile int64_t t43 = INT64_MAX;

	t43 = (x1365<<(x1366*(x1367%x1368)));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1417 = INT8_MAX;
	static volatile int8_t x1419 = INT8_MIN;
	int16_t x1420 = -1;

	t44 = (x1417<<(x1418*(x1419%x1420)));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1421 = 562550996;
	volatile int16_t x1422 = INT16_MIN;
	volatile int16_t x1423 = -1;
	static volatile int64_t x1424 = -1LL;

	t45 = (x1421<<(x1422*(x1423%x1424)));

	if (t45 != 562550996) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1433 = INT16_MAX;
	int32_t x1434 = INT32_MAX;
	uint32_t x1436 = 1U;
	static int32_t t46 = -189040;

	t46 = (x1433<<(x1434*(x1435%x1436)));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1441 = INT16_MAX;
	uint64_t x1443 = 2215188883641634729LLU;
	static uint8_t x1444 = 7U;

	t47 = (x1441<<(x1442*(x1443%x1444)));

	if (t47 != 16776704) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x1474 = 14;
	int8_t x1475 = -1;
	uint64_t x1476 = UINT64_MAX;
	volatile int32_t t48 = 0;

	t48 = (x1473<<(x1474*(x1475%x1476)));

	if (t48 != 51) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x1481 = 0;
	uint64_t x1482 = UINT64_MAX;
	int32_t x1483 = -1;
	int16_t x1484 = INT16_MIN;

	t49 = (x1481<<(x1482*(x1483%x1484)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1501 = 2438911913327828535LLU;
	uint8_t x1502 = UINT8_MAX;
	int8_t x1504 = -1;
	uint64_t t50 = 56251282271LLU;

	t50 = (x1501<<(x1502*(x1503%x1504)));

	if (t50 != 2438911913327828535LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x1505 = INT8_MAX;
	int8_t x1507 = -10;
	static uint8_t x1508 = 1U;
	volatile int32_t t51 = 513;

	t51 = (x1505<<(x1506*(x1507%x1508)));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x1525 = 847U;
	uint32_t x1526 = UINT32_MAX;
	volatile int16_t x1527 = INT16_MIN;
	volatile int32_t x1528 = -1;
	volatile uint32_t t52 = 11U;

	t52 = (x1525<<(x1526*(x1527%x1528)));

	if (t52 != 847U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1533 = UINT32_MAX;
	int32_t x1534 = 135626;
	static int32_t x1535 = 694426;
	volatile int8_t x1536 = -1;
	volatile uint32_t t53 = UINT32_MAX;

	t53 = (x1533<<(x1534*(x1535%x1536)));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x1541 = 8U;
	int32_t x1542 = INT32_MAX;
	static int16_t x1543 = INT16_MIN;
	volatile int8_t x1544 = INT8_MIN;
	volatile int32_t t54 = 76;

	t54 = (x1541<<(x1542*(x1543%x1544)));

	if (t54 != 8) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1546 = INT32_MIN;
	int8_t x1547 = INT8_MIN;
	uint32_t x1548 = 1U;
	volatile int32_t t55 = 144438431;

	t55 = (x1545<<(x1546*(x1547%x1548)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x1557 = INT64_MAX;
	uint64_t x1558 = 246263347544LLU;
	int32_t x1559 = INT32_MIN;
	int16_t x1560 = INT16_MIN;

	t56 = (x1557<<(x1558*(x1559%x1560)));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x1569 = 515U;
	int16_t x1570 = -856;
	int16_t x1571 = 0;
	int8_t x1572 = INT8_MIN;
	static uint32_t t57 = 714789816U;

	t57 = (x1569<<(x1570*(x1571%x1572)));

	if (t57 != 515U) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x1577 = INT64_MAX;
	uint16_t x1580 = UINT16_MAX;
	int64_t t58 = INT64_MAX;

	t58 = (x1577<<(x1578*(x1579%x1580)));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1647 = INT32_MIN;
	int16_t x1648 = -1;
	static int64_t t59 = INT64_MAX;

	t59 = (x1645<<(x1646*(x1647%x1648)));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x1649 = 4887914U;
	uint64_t x1650 = UINT64_MAX;
	int32_t x1651 = INT32_MIN;
	int16_t x1652 = INT16_MIN;
	volatile uint32_t t60 = 16180356U;

	t60 = (x1649<<(x1650*(x1651%x1652)));

	if (t60 != 4887914U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x1654 = UINT16_MAX;
	int64_t x1656 = -1LL;

	t61 = (x1653<<(x1654*(x1655%x1656)));

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x1669 = 28U;
	int8_t x1670 = 49;
	static int8_t x1671 = 1;
	static int64_t x1672 = 1LL;
	static int32_t t62 = 12585;

	t62 = (x1669<<(x1670*(x1671%x1672)));

	if (t62 != 28) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1701 = 5966093;
	static int64_t x1702 = INT64_MIN;
	int64_t x1703 = 201222313LL;
	static uint64_t x1704 = 720389LLU;
	static volatile int32_t t63 = 352181;

	t63 = (x1701<<(x1702*(x1703%x1704)));

	if (t63 != 5966093) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x1747 = -1;
	static uint64_t x1748 = UINT64_MAX;
	volatile int32_t t64 = 27;

	t64 = (x1745<<(x1746*(x1747%x1748)));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x1773 = 348059124U;
	int64_t x1774 = INT64_MIN;
	int16_t x1775 = INT16_MIN;
	uint8_t x1776 = 1U;
	volatile uint32_t t65 = 338288U;

	t65 = (x1773<<(x1774*(x1775%x1776)));

	if (t65 != 348059124U) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x1861 = INT64_MAX;
	uint32_t x1862 = 492433U;
	int64_t x1863 = INT64_MIN;
	int16_t x1864 = INT16_MIN;
	static int64_t t66 = INT64_MAX;

	t66 = (x1861<<(x1862*(x1863%x1864)));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x1897 = 109U;
	static int8_t x1898 = -22;
	int32_t x1899 = INT32_MIN;
	int8_t x1900 = -1;
	int32_t t67 = 12653801;

	t67 = (x1897<<(x1898*(x1899%x1900)));

	if (t67 != 109) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x1901 = 11061U;
	int16_t x1902 = -1;
	int8_t x1903 = -1;
	int8_t x1904 = -1;
	volatile int32_t t68 = -6;

	t68 = (x1901<<(x1902*(x1903%x1904)));

	if (t68 != 11061) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x1929 = 12884874LL;
	uint8_t x1930 = 25U;
	int32_t x1932 = INT32_MIN;
	static int64_t t69 = -46LL;

	t69 = (x1929<<(x1930*(x1931%x1932)));

	if (t69 != 12884874LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x1937 = 2765U;
	int32_t x1938 = -1059;
	volatile uint8_t x1939 = UINT8_MAX;
	volatile int32_t t70 = 12;

	t70 = (x1937<<(x1938*(x1939%x1940)));

	if (t70 != 2765) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x1962 = -16;
	int32_t x1963 = -1;
	int64_t x1964 = INT64_MIN;
	volatile int32_t t71 = 25;

	t71 = (x1961<<(x1962*(x1963%x1964)));

	if (t71 != 9895936) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x1973 = 27;
	uint64_t x1974 = UINT64_MAX;
	uint64_t x1975 = UINT64_MAX;
	static uint16_t x1976 = UINT16_MAX;
	volatile int32_t t72 = 6433426;

	t72 = (x1973<<(x1974*(x1975%x1976)));

	if (t72 != 27) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2025 = UINT8_MAX;
	uint32_t x2026 = UINT32_MAX;
	uint16_t x2027 = UINT16_MAX;
	int16_t x2028 = -1;
	int32_t t73 = -170;

	t73 = (x2025<<(x2026*(x2027%x2028)));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2037 = 21223664145LLU;
	volatile uint8_t x2038 = UINT8_MAX;
	int16_t x2039 = INT16_MIN;
	static volatile int64_t x2040 = -1LL;
	uint64_t t74 = 1504823715263LLU;

	t74 = (x2037<<(x2038*(x2039%x2040)));

	if (t74 != 21223664145LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x2049 = 89091U;
	uint64_t x2050 = UINT64_MAX;
	int32_t x2051 = 0;
	uint32_t x2052 = 1017U;

	t75 = (x2049<<(x2050*(x2051%x2052)));

	if (t75 != 89091U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2066 = INT32_MIN;
	uint16_t x2067 = 3U;
	int32_t x2068 = -1;
	volatile int32_t t76 = -34625430;

	t76 = (x2065<<(x2066*(x2067%x2068)));

	if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2069 = INT16_MAX;
	static int64_t x2070 = INT64_MIN;
	uint64_t x2072 = 41096215LLU;
	volatile int32_t t77 = -199865;

	t77 = (x2069<<(x2070*(x2071%x2072)));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x2093 = 1363U;
	uint64_t x2094 = UINT64_MAX;
	volatile int32_t x2095 = -1;
	int32_t x2096 = INT32_MIN;
	static volatile int32_t t78 = -23417;

	t78 = (x2093<<(x2094*(x2095%x2096)));

	if (t78 != 2726) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2129 = INT8_MAX;
	volatile uint8_t x2130 = UINT8_MAX;
	int8_t x2131 = INT8_MIN;
	int32_t t79 = 82777;

	t79 = (x2129<<(x2130*(x2131%x2132)));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2137 = INT32_MAX;
	int64_t x2138 = INT64_MAX;
	static volatile int64_t x2140 = -1LL;
	static int32_t t80 = INT32_MAX;

	t80 = (x2137<<(x2138*(x2139%x2140)));

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2161 = 3527LL;
	int8_t x2162 = 3;
	volatile uint8_t x2163 = 0U;
	int64_t t81 = 591956222782211LL;

	t81 = (x2161<<(x2162*(x2163%x2164)));

	if (t81 != 3527LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x2165 = UINT32_MAX;
	int64_t x2166 = INT64_MIN;
	static volatile uint16_t x2167 = UINT16_MAX;
	int8_t x2168 = -1;
	volatile uint32_t t82 = UINT32_MAX;

	t82 = (x2165<<(x2166*(x2167%x2168)));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x2169 = 604U;
	int64_t x2171 = 202512867571LL;
	int32_t x2172 = -1;
	int32_t t83 = 14161;

	t83 = (x2169<<(x2170*(x2171%x2172)));

	if (t83 != 604) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2173 = 508582190LL;
	int16_t x2174 = 3;
	static int16_t x2175 = 3;
	volatile int64_t t84 = 831605715430182LL;

	t84 = (x2173<<(x2174*(x2175%x2176)));

	if (t84 != 260394081280LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x2185 = 2401167LLU;
	volatile int8_t x2186 = -1;
	int16_t x2187 = -1;
	static int32_t x2188 = 62147075;
	volatile uint64_t t85 = 245LLU;

	t85 = (x2185<<(x2186*(x2187%x2188)));

	if (t85 != 4802334LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x2197 = 404U;
	int16_t x2198 = INT16_MIN;
	int8_t x2199 = -6;
	static int64_t x2200 = -1LL;
	uint32_t t86 = 367370U;

	t86 = (x2197<<(x2198*(x2199%x2200)));

	if (t86 != 404U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2213 = INT32_MAX;
	static int32_t x2214 = INT32_MIN;
	int64_t x2215 = INT64_MIN;
	int32_t x2216 = -1;
	int32_t t87 = INT32_MAX;

	t87 = (x2213<<(x2214*(x2215%x2216)));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x2241 = 30;
	int16_t x2244 = INT16_MIN;

	t88 = (x2241<<(x2242*(x2243%x2244)));

	if (t88 != 30) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2250 = INT32_MIN;
	int8_t x2251 = -1;
	int8_t x2252 = -1;

	t89 = (x2249<<(x2250*(x2251%x2252)));

	if (t89 != 7) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2257 = 91LLU;
	int64_t x2258 = INT64_MAX;
	int8_t x2259 = 0;
	uint64_t t90 = 2525012859904247LLU;

	t90 = (x2257<<(x2258*(x2259%x2260)));

	if (t90 != 91LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x2325 = 179U;
	int64_t x2326 = -2607746826317913874LL;
	int32_t x2327 = INT32_MIN;
	int32_t t91 = -261662259;

	t91 = (x2325<<(x2326*(x2327%x2328)));

	if (t91 != 179) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x2345 = 0U;
	uint64_t x2346 = UINT64_MAX;
	uint64_t x2347 = UINT64_MAX;
	static volatile int32_t x2348 = -1;

	t92 = (x2345<<(x2346*(x2347%x2348)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x2349 = 0;
	volatile int64_t x2352 = -1LL;
	int32_t t93 = -99;

	t93 = (x2349<<(x2350*(x2351%x2352)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x2421 = INT32_MAX;
	volatile int16_t x2422 = 8;
	int64_t x2423 = INT64_MIN;
	int32_t t94 = INT32_MAX;

	t94 = (x2421<<(x2422*(x2423%x2424)));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x2429 = 14U;
	static int32_t x2431 = INT32_MIN;
	int32_t x2432 = INT32_MIN;
	volatile int32_t t95 = -65410;

	t95 = (x2429<<(x2430*(x2431%x2432)));

	if (t95 != 14) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x2449 = INT32_MAX;
	volatile int32_t x2450 = 130;
	uint16_t x2451 = 3U;
	static int64_t x2452 = -1LL;
	volatile int32_t t96 = INT32_MAX;

	t96 = (x2449<<(x2450*(x2451%x2452)));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x2480 = 2060340U;
	int32_t t97 = -106;

	t97 = (x2477<<(x2478*(x2479%x2480)));

	if (t97 != 3668) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x2514 = UINT16_MAX;
	static uint32_t x2515 = 4U;
	int64_t x2516 = -1LL;
	int32_t t98 = -8745;

	t98 = (x2513<<(x2514*(x2515%x2516)));

	if (t98 != 43) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2581 = 7657879;
	uint64_t x2582 = 2893278177428133LLU;
	int32_t x2583 = 466428;
	static int64_t x2584 = -1LL;
	int32_t t99 = -50487;

	t99 = (x2581<<(x2582*(x2583%x2584)));

	if (t99 != 7657879) { NG(); } else { ; }
	
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


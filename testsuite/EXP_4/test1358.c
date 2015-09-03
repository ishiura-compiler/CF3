#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -24;
static int8_t x122 = 1;
volatile int32_t t3 = 71;
uint8_t x169 = UINT8_MAX;
int32_t x170 = -1;
int32_t x171 = INT32_MIN;
int32_t t4 = 5;
uint16_t x194 = 0U;
static uint32_t x195 = UINT32_MAX;
static int8_t x196 = INT8_MIN;
int32_t x217 = 3134;
int16_t x226 = -1;
static volatile int8_t x228 = 0;
static int16_t x246 = 2;
static int32_t t11 = -5414;
int32_t x347 = INT32_MIN;
static uint64_t x349 = 353027662705897LLU;
int8_t x373 = INT8_MAX;
volatile int64_t x375 = INT64_MAX;
int32_t x390 = -1;
int64_t x391 = INT64_MIN;
int32_t t18 = 1;
int64_t x416 = -1LL;
int8_t x441 = INT8_MAX;
volatile uint64_t x448 = 9877518410856LLU;
int32_t t23 = 203;
int16_t x673 = 259;
int16_t x676 = INT16_MAX;
static volatile int32_t t24 = 13832167;
int16_t x678 = -1;
volatile uint8_t x730 = 19U;
uint64_t x753 = 230668729837LLU;
static volatile int32_t t28 = 1641746;
static volatile uint32_t t29 = 143228U;
int8_t x809 = 49;
int64_t x810 = -1LL;
static int32_t x818 = -1;
static int8_t x819 = -8;
volatile int16_t x820 = INT16_MAX;
volatile int64_t x979 = 3668848LL;
uint32_t t33 = 24U;
volatile uint16_t x1045 = UINT16_MAX;
int32_t x1048 = -1;
int32_t t35 = 1;
int8_t x1197 = 0;
static volatile int32_t x1216 = INT32_MAX;
uint64_t x1288 = UINT64_MAX;
int8_t x1314 = 3;
volatile uint8_t x1388 = 50U;
static int8_t x1417 = INT8_MAX;
static int32_t x1432 = 8475318;
static int16_t x1440 = INT16_MIN;
volatile int32_t t53 = 118;
volatile int32_t t55 = 1;
volatile int32_t x1545 = INT32_MAX;
static int64_t x1547 = INT64_MIN;
int16_t x1627 = -1;
uint8_t x1647 = 0U;
uint32_t x1657 = 6421U;
volatile uint32_t t60 = 15222U;
static uint16_t x1693 = 8U;
static int8_t x1694 = -1;
volatile uint8_t x1696 = UINT8_MAX;
static uint16_t x1758 = 6U;
volatile int32_t x1791 = INT32_MAX;
volatile int8_t x1792 = -1;
static volatile int8_t x1800 = INT8_MIN;
uint8_t x1823 = 50U;
static uint64_t t68 = 420871270LLU;
volatile uint8_t x1950 = 4U;
static volatile int32_t x1951 = INT32_MIN;
uint16_t x1952 = UINT16_MAX;
int8_t x2017 = INT8_MAX;
static volatile uint64_t x2019 = UINT64_MAX;
volatile int16_t x2020 = -1;
int32_t t70 = 1210621;
int32_t x2056 = -1;
int32_t t72 = INT32_MAX;
uint64_t x2181 = UINT64_MAX;
uint8_t x2183 = 4U;
volatile int32_t x2217 = INT32_MAX;
volatile int16_t x2220 = INT16_MIN;
uint32_t x2228 = 29U;
int32_t x2271 = INT32_MAX;
static int32_t t77 = -13;
int32_t t80 = -210;
volatile int32_t x2516 = -1;
volatile int32_t t81 = -7170540;
int8_t x2522 = 1;
volatile int8_t x2712 = 41;
uint32_t x2752 = UINT32_MAX;
static volatile uint16_t x2904 = 1U;
static int8_t x3056 = INT8_MIN;
volatile uint8_t x3121 = UINT8_MAX;
int8_t x3132 = INT8_MIN;
uint16_t x3305 = UINT16_MAX;
volatile uint32_t x3307 = 5U;
uint8_t x3308 = UINT8_MAX;
static uint32_t x3399 = 411474118U;
static volatile int32_t t98 = 15716903;


void f0(void) {
	uint8_t x65 = 0U;
	uint32_t x66 = UINT32_MAX;
	static uint64_t x67 = 687LLU;
	static int64_t x68 = 162909725408060188LL;
	static volatile int32_t t0 = -3;

	t0 = (x65<<(x66+(x67<x68)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x81 = INT16_MAX;
	uint64_t x82 = 1LLU;
	int32_t x83 = -23;
	uint8_t x84 = UINT8_MAX;

	t1 = (x81<<(x82+(x83<x84)));

	if (t1 != 131068) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x113 = UINT32_MAX;
	int32_t x114 = -1;
	int32_t x115 = -1;
	volatile uint8_t x116 = 4U;
	uint32_t t2 = UINT32_MAX;

	t2 = (x113<<(x114+(x115<x116)));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x121 = 3418;
	int32_t x123 = -1;
	static int32_t x124 = INT32_MIN;

	t3 = (x121<<(x122+(x123<x124)));

	if (t3 != 6836) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x172 = 1U;

	t4 = (x169<<(x170+(x171<x172)));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x185 = 0U;
	int8_t x186 = 0;
	uint64_t x187 = 6322290LLU;
	uint16_t x188 = 9788U;
	volatile int32_t t5 = 380;

	t5 = (x185<<(x186+(x187<x188)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x193 = 3;
	static int32_t t6 = -94240;

	t6 = (x193<<(x194+(x195<x196)));

	if (t6 != 3) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x218 = -1LL;
	int64_t x219 = INT64_MIN;
	int32_t x220 = 389442;
	int32_t t7 = 3122485;

	t7 = (x217<<(x218+(x219<x220)));

	if (t7 != 3134) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x225 = UINT8_MAX;
	static int64_t x227 = -15740181780LL;
	int32_t t8 = 7560;

	t8 = (x225<<(x226+(x227<x228)));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x233 = 465981353228LLU;
	uint64_t x234 = UINT64_MAX;
	int16_t x235 = INT16_MIN;
	uint16_t x236 = 4004U;
	volatile uint64_t t9 = 237LLU;

	t9 = (x233<<(x234+(x235<x236)));

	if (t9 != 465981353228LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x241 = UINT64_MAX;
	uint32_t x242 = UINT32_MAX;
	static int64_t x243 = -1LL;
	uint8_t x244 = 0U;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (x241<<(x242+(x243<x244)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x245 = 12311U;
	uint8_t x247 = 6U;
	int64_t x248 = -119885469309LL;

	t11 = (x245<<(x246+(x247<x248)));

	if (t11 != 49244) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x261 = 35U;
	volatile uint8_t x262 = 14U;
	int16_t x263 = 60;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t12 = -863;

	t12 = (x261<<(x262+(x263<x264)));

	if (t12 != 1146880) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x309 = 0U;
	static uint32_t x310 = 6U;
	uint8_t x311 = 18U;
	int32_t x312 = INT32_MAX;
	volatile int32_t t13 = -31905587;

	t13 = (x309<<(x310+(x311<x312)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x345 = INT16_MAX;
	int16_t x346 = -1;
	static int16_t x348 = INT16_MIN;
	volatile int32_t t14 = -164629;

	t14 = (x345<<(x346+(x347<x348)));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x350 = 12;
	int8_t x351 = INT8_MAX;
	int16_t x352 = INT16_MIN;
	static uint64_t t15 = 804354501333044LLU;

	t15 = (x349<<(x350+(x351<x352)));

	if (t15 != 1446001306443354112LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x369 = 3826172353347993215LLU;
	int8_t x370 = -1;
	int8_t x371 = INT8_MIN;
	static uint16_t x372 = 0U;
	static uint64_t t16 = 28075256LLU;

	t16 = (x369<<(x370+(x371<x372)));

	if (t16 != 3826172353347993215LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x374 = 0;
	uint32_t x376 = 25U;
	int32_t t17 = -44952789;

	t17 = (x373<<(x374+(x375<x376)));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x389 = UINT16_MAX;
	static uint16_t x392 = 854U;

	t18 = (x389<<(x390+(x391<x392)));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x413 = 18U;
	int32_t x414 = 0;
	int8_t x415 = INT8_MIN;
	static volatile int32_t t19 = -212;

	t19 = (x413<<(x414+(x415<x416)));

	if (t19 != 36) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x442 = 23U;
	volatile int32_t x443 = -797;
	int64_t x444 = 21083002195265LL;
	static int32_t t20 = -268686;

	t20 = (x441<<(x442+(x443<x444)));

	if (t20 != 2130706432) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x445 = 1U;
	volatile uint8_t x446 = 4U;
	static int64_t x447 = -28279820632063LL;
	volatile int32_t t21 = -383;

	t21 = (x445<<(x446+(x447<x448)));

	if (t21 != 16) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x457 = 2981058771LL;
	uint64_t x458 = UINT64_MAX;
	volatile int16_t x459 = -1;
	int32_t x460 = INT32_MAX;
	int64_t t22 = 7176431428LL;

	t22 = (x457<<(x458+(x459<x460)));

	if (t22 != 2981058771LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x493 = UINT16_MAX;
	uint8_t x494 = 0U;
	int8_t x495 = INT8_MAX;
	int64_t x496 = -1005160246332022LL;

	t23 = (x493<<(x494+(x495<x496)));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x674 = 5;
	int16_t x675 = -1606;

	t24 = (x673<<(x674+(x675<x676)));

	if (t24 != 16576) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x677 = 1U;
	uint16_t x679 = 22474U;
	static int64_t x680 = INT64_MAX;
	volatile int32_t t25 = 57257;

	t25 = (x677<<(x678+(x679<x680)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x729 = 13U;
	uint8_t x731 = 1U;
	int16_t x732 = 171;
	volatile uint32_t t26 = 5828U;

	t26 = (x729<<(x730+(x731<x732)));

	if (t26 != 13631488U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x754 = -1;
	uint32_t x755 = 1U;
	static volatile int16_t x756 = -102;
	volatile uint64_t t27 = 5822185796091101LLU;

	t27 = (x753<<(x754+(x755<x756)));

	if (t27 != 230668729837LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x781 = 4U;
	uint8_t x782 = 5U;
	volatile uint16_t x783 = 280U;
	uint64_t x784 = 2480315613617504653LLU;

	t28 = (x781<<(x782+(x783<x784)));

	if (t28 != 256) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x785 = 13789795U;
	int16_t x786 = -1;
	int8_t x787 = INT8_MIN;
	uint16_t x788 = UINT16_MAX;

	t29 = (x785<<(x786+(x787<x788)));

	if (t29 != 13789795U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x811 = -358826438LL;
	static int64_t x812 = -1LL;
	static int32_t t30 = -12049334;

	t30 = (x809<<(x810+(x811<x812)));

	if (t30 != 49) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x817 = 6053U;
	volatile int32_t t31 = 279562;

	t31 = (x817<<(x818+(x819<x820)));

	if (t31 != 6053) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x869 = 12392378;
	volatile uint8_t x870 = 2U;
	int16_t x871 = -1498;
	static uint8_t x872 = 62U;
	int32_t t32 = -96;

	t32 = (x869<<(x870+(x871<x872)));

	if (t32 != 99139024) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x977 = UINT32_MAX;
	volatile uint8_t x978 = 17U;
	volatile int32_t x980 = -1;

	t33 = (x977<<(x978+(x979<x980)));

	if (t33 != 4294836224U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x1046 = -1;
	static int64_t x1047 = INT64_MIN;
	int32_t t34 = 401231;

	t34 = (x1045<<(x1046+(x1047<x1048)));

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1057 = 3U;
	static uint64_t x1058 = 10LLU;
	uint16_t x1059 = 48U;
	volatile int16_t x1060 = 2;

	t35 = (x1057<<(x1058+(x1059<x1060)));

	if (t35 != 3072) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1149 = 430;
	static uint8_t x1150 = 1U;
	int16_t x1151 = -1;
	static uint16_t x1152 = 925U;
	int32_t t36 = -229759263;

	t36 = (x1149<<(x1150+(x1151<x1152)));

	if (t36 != 1720) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1165 = UINT32_MAX;
	uint8_t x1166 = 12U;
	static volatile int16_t x1167 = 0;
	int16_t x1168 = INT16_MIN;
	volatile uint32_t t37 = 2U;

	t37 = (x1165<<(x1166+(x1167<x1168)));

	if (t37 != 4294963200U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1198 = -1LL;
	int16_t x1199 = INT16_MIN;
	int64_t x1200 = -1LL;
	int32_t t38 = 48;

	t38 = (x1197<<(x1198+(x1199<x1200)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1205 = 26U;
	static int8_t x1206 = 0;
	int16_t x1207 = INT16_MIN;
	volatile int8_t x1208 = INT8_MIN;
	volatile int32_t t39 = -251578379;

	t39 = (x1205<<(x1206+(x1207<x1208)));

	if (t39 != 52) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1213 = 6903313389LLU;
	volatile uint16_t x1214 = 32U;
	int16_t x1215 = INT16_MIN;
	volatile uint64_t t40 = 62793LLU;

	t40 = (x1213<<(x1214+(x1215<x1216)));

	if (t40 != 3958778258459197440LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1241 = 56U;
	uint16_t x1242 = 19U;
	static uint32_t x1243 = 8U;
	static uint64_t x1244 = 352821LLU;
	int32_t t41 = -4059;

	t41 = (x1241<<(x1242+(x1243<x1244)));

	if (t41 != 58720256) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1281 = 623451;
	static uint32_t x1282 = 3U;
	static int32_t x1283 = -368994;
	volatile uint64_t x1284 = 1262608152978157LLU;
	volatile int32_t t42 = 492;

	t42 = (x1281<<(x1282+(x1283<x1284)));

	if (t42 != 4987608) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x1285 = 1731462LL;
	static uint64_t x1286 = UINT64_MAX;
	volatile int32_t x1287 = 497013445;
	static volatile int64_t t43 = 18011269944434811LL;

	t43 = (x1285<<(x1286+(x1287<x1288)));

	if (t43 != 1731462LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1313 = 3U;
	volatile uint32_t x1315 = 594501U;
	int64_t x1316 = INT64_MAX;
	int32_t t44 = -126;

	t44 = (x1313<<(x1314+(x1315<x1316)));

	if (t44 != 48) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x1377 = 7706U;
	uint8_t x1378 = 2U;
	uint32_t x1379 = 1447956U;
	uint32_t x1380 = UINT32_MAX;
	int32_t t45 = -621081129;

	t45 = (x1377<<(x1378+(x1379<x1380)));

	if (t45 != 61648) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1381 = 52LLU;
	int8_t x1382 = 1;
	int8_t x1383 = 4;
	volatile int32_t x1384 = 583729711;
	volatile uint64_t t46 = 9469278LLU;

	t46 = (x1381<<(x1382+(x1383<x1384)));

	if (t46 != 208LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1385 = INT32_MAX;
	uint64_t x1386 = UINT64_MAX;
	static volatile int8_t x1387 = INT8_MIN;
	int32_t t47 = INT32_MAX;

	t47 = (x1385<<(x1386+(x1387<x1388)));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1393 = 202871907U;
	uint8_t x1394 = 21U;
	int8_t x1395 = INT8_MIN;
	uint16_t x1396 = UINT16_MAX;
	volatile uint32_t t48 = 1U;

	t48 = (x1393<<(x1394+(x1395<x1396)));

	if (t48 != 415236096U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x1418 = 0;
	static volatile uint64_t x1419 = 4937473609463361536LLU;
	uint8_t x1420 = 126U;
	int32_t t49 = -1;

	t49 = (x1417<<(x1418+(x1419<x1420)));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1429 = 812891;
	int32_t x1430 = 7;
	volatile int8_t x1431 = INT8_MAX;
	volatile int32_t t50 = 3;

	t50 = (x1429<<(x1430+(x1431<x1432)));

	if (t50 != 208100096) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1437 = 708111LLU;
	uint16_t x1438 = 1U;
	static uint16_t x1439 = UINT16_MAX;
	volatile uint64_t t51 = 332906172435LLU;

	t51 = (x1437<<(x1438+(x1439<x1440)));

	if (t51 != 1416222LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1441 = 9;
	int8_t x1442 = -1;
	static int32_t x1443 = INT32_MAX;
	volatile uint32_t x1444 = UINT32_MAX;
	volatile int32_t t52 = -195249;

	t52 = (x1441<<(x1442+(x1443<x1444)));

	if (t52 != 9) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1473 = 12U;
	int8_t x1474 = 26;
	int32_t x1475 = -1;
	volatile int64_t x1476 = -1LL;

	t53 = (x1473<<(x1474+(x1475<x1476)));

	if (t53 != 805306368) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1485 = UINT16_MAX;
	int8_t x1486 = 3;
	volatile int64_t x1487 = -23LL;
	static int64_t x1488 = INT64_MIN;
	int32_t t54 = 153;

	t54 = (x1485<<(x1486+(x1487<x1488)));

	if (t54 != 524280) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1489 = 2U;
	static int32_t x1490 = -1;
	int64_t x1491 = -60639614953580LL;
	volatile int16_t x1492 = INT16_MIN;

	t55 = (x1489<<(x1490+(x1491<x1492)));

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1546 = -1;
	int16_t x1548 = INT16_MIN;
	static volatile int32_t t56 = INT32_MAX;

	t56 = (x1545<<(x1546+(x1547<x1548)));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1593 = 6489;
	static int64_t x1594 = -1LL;
	uint16_t x1595 = 31U;
	static volatile int16_t x1596 = INT16_MAX;
	volatile int32_t t57 = 56147599;

	t57 = (x1593<<(x1594+(x1595<x1596)));

	if (t57 != 6489) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1625 = UINT64_MAX;
	int8_t x1626 = -1;
	uint8_t x1628 = 3U;
	uint64_t t58 = UINT64_MAX;

	t58 = (x1625<<(x1626+(x1627<x1628)));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x1645 = UINT64_MAX;
	int8_t x1646 = -1;
	uint8_t x1648 = 92U;
	uint64_t t59 = UINT64_MAX;

	t59 = (x1645<<(x1646+(x1647<x1648)));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x1658 = 3LLU;
	int64_t x1659 = INT64_MIN;
	int8_t x1660 = INT8_MIN;

	t60 = (x1657<<(x1658+(x1659<x1660)));

	if (t60 != 102736U) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x1695 = -1;
	int32_t t61 = -8424070;

	t61 = (x1693<<(x1694+(x1695<x1696)));

	if (t61 != 8) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x1705 = 1;
	int64_t x1706 = -1LL;
	int16_t x1707 = INT16_MIN;
	volatile uint8_t x1708 = 1U;
	int32_t t62 = -3273123;

	t62 = (x1705<<(x1706+(x1707<x1708)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x1757 = INT8_MAX;
	volatile uint32_t x1759 = 1990U;
	uint8_t x1760 = 10U;
	volatile int32_t t63 = 254843;

	t63 = (x1757<<(x1758+(x1759<x1760)));

	if (t63 != 8128) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x1789 = 952LLU;
	uint32_t x1790 = 0U;
	static uint64_t t64 = 5012652173180412LLU;

	t64 = (x1789<<(x1790+(x1791<x1792)));

	if (t64 != 952LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1797 = 119776210180696LL;
	int8_t x1798 = 4;
	int8_t x1799 = INT8_MIN;
	static volatile int64_t t65 = 812823LL;

	t65 = (x1797<<(x1798+(x1799<x1800)));

	if (t65 != 1916419362891136LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x1821 = 2983164U;
	static int16_t x1822 = 5;
	int64_t x1824 = INT64_MAX;
	volatile uint32_t t66 = 2U;

	t66 = (x1821<<(x1822+(x1823<x1824)));

	if (t66 != 190922496U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x1905 = UINT64_MAX;
	int8_t x1906 = 32;
	int64_t x1907 = INT64_MAX;
	uint32_t x1908 = UINT32_MAX;
	volatile uint64_t t67 = 2427062070032146702LLU;

	t67 = (x1905<<(x1906+(x1907<x1908)));

	if (t67 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x1913 = 365371946013LLU;
	uint16_t x1914 = 1U;
	static int64_t x1915 = 2325783193452606LL;
	int8_t x1916 = -11;

	t68 = (x1913<<(x1914+(x1915<x1916)));

	if (t68 != 730743892026LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x1949 = UINT64_MAX;
	static volatile uint64_t t69 = 7523LLU;

	t69 = (x1949<<(x1950+(x1951<x1952)));

	if (t69 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x2018 = 4U;

	t70 = (x2017<<(x2018+(x2019<x2020)));

	if (t70 != 2032) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x2053 = 42U;
	uint16_t x2054 = 14U;
	uint16_t x2055 = 4U;
	int32_t t71 = -277872;

	t71 = (x2053<<(x2054+(x2055<x2056)));

	if (t71 != 688128) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2085 = INT32_MAX;
	int32_t x2086 = -1;
	int64_t x2087 = -1894857579354686153LL;
	uint32_t x2088 = 2085664586U;

	t72 = (x2085<<(x2086+(x2087<x2088)));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2173 = INT64_MAX;
	uint32_t x2174 = UINT32_MAX;
	int8_t x2175 = INT8_MIN;
	int64_t x2176 = INT64_MAX;
	int64_t t73 = INT64_MAX;

	t73 = (x2173<<(x2174+(x2175<x2176)));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2182 = 60U;
	int64_t x2184 = -1LL;
	static volatile uint64_t t74 = 3LLU;

	t74 = (x2181<<(x2182+(x2183<x2184)));

	if (t74 != 17293822569102704640LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2218 = -1LL;
	uint32_t x2219 = 504U;
	int32_t t75 = INT32_MAX;

	t75 = (x2217<<(x2218+(x2219<x2220)));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x2225 = INT8_MAX;
	uint64_t x2226 = UINT64_MAX;
	int64_t x2227 = INT64_MIN;
	static int32_t t76 = 225708;

	t76 = (x2225<<(x2226+(x2227<x2228)));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x2269 = UINT8_MAX;
	volatile uint8_t x2270 = 7U;
	int32_t x2272 = -1;

	t77 = (x2269<<(x2270+(x2271<x2272)));

	if (t77 != 32640) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2273 = 983473248374LL;
	static volatile int32_t x2274 = -1;
	int8_t x2275 = INT8_MAX;
	uint64_t x2276 = UINT64_MAX;
	volatile int64_t t78 = 15667945023LL;

	t78 = (x2273<<(x2274+(x2275<x2276)));

	if (t78 != 983473248374LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2345 = 563815103223297LLU;
	int64_t x2346 = -1LL;
	static int8_t x2347 = INT8_MAX;
	static uint64_t x2348 = 957LLU;
	uint64_t t79 = 116LLU;

	t79 = (x2345<<(x2346+(x2347<x2348)));

	if (t79 != 563815103223297LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x2497 = UINT16_MAX;
	int32_t x2498 = 12;
	int16_t x2499 = -365;
	volatile int16_t x2500 = 0;

	t80 = (x2497<<(x2498+(x2499<x2500)));

	if (t80 != 536862720) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x2513 = 0U;
	static uint8_t x2514 = 1U;
	int32_t x2515 = -10761;

	t81 = (x2513<<(x2514+(x2515<x2516)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x2521 = INT8_MAX;
	uint8_t x2523 = 113U;
	uint8_t x2524 = UINT8_MAX;
	int32_t t82 = 225859;

	t82 = (x2521<<(x2522+(x2523<x2524)));

	if (t82 != 508) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x2565 = INT8_MAX;
	static uint8_t x2566 = 0U;
	int32_t x2567 = INT32_MIN;
	static uint16_t x2568 = 11847U;
	int32_t t83 = 800;

	t83 = (x2565<<(x2566+(x2567<x2568)));

	if (t83 != 254) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x2641 = 1401825U;
	uint64_t x2642 = UINT64_MAX;
	volatile int16_t x2643 = INT16_MIN;
	volatile int8_t x2644 = -2;
	uint32_t t84 = 9271709U;

	t84 = (x2641<<(x2642+(x2643<x2644)));

	if (t84 != 1401825U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x2709 = UINT64_MAX;
	int32_t x2710 = -1;
	int64_t x2711 = -3451231539490133LL;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (x2709<<(x2710+(x2711<x2712)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x2749 = 218LLU;
	int16_t x2750 = 1;
	int16_t x2751 = INT16_MIN;
	volatile uint64_t t86 = 10863948598046210LLU;

	t86 = (x2749<<(x2750+(x2751<x2752)));

	if (t86 != 872LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2793 = 1;
	uint32_t x2794 = 4U;
	uint16_t x2795 = 14655U;
	uint32_t x2796 = UINT32_MAX;
	int32_t t87 = -3;

	t87 = (x2793<<(x2794+(x2795<x2796)));

	if (t87 != 32) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x2901 = 1724643;
	uint8_t x2902 = 1U;
	int64_t x2903 = INT64_MIN;
	static int32_t t88 = -6264397;

	t88 = (x2901<<(x2902+(x2903<x2904)));

	if (t88 != 6898572) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x3009 = UINT64_MAX;
	uint16_t x3010 = 21U;
	static int32_t x3011 = INT32_MIN;
	uint64_t x3012 = 39813028LLU;
	uint64_t t89 = 896897895204386LLU;

	t89 = (x3009<<(x3010+(x3011<x3012)));

	if (t89 != 18446744073707454464LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x3053 = UINT8_MAX;
	uint32_t x3054 = 1U;
	int64_t x3055 = -1LL;
	static volatile int32_t t90 = 3454021;

	t90 = (x3053<<(x3054+(x3055<x3056)));

	if (t90 != 510) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3122 = 0;
	int8_t x3123 = -1;
	int8_t x3124 = -4;
	int32_t t91 = -13834511;

	t91 = (x3121<<(x3122+(x3123<x3124)));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x3129 = 122476U;
	volatile uint32_t x3130 = UINT32_MAX;
	int32_t x3131 = INT32_MIN;
	static uint32_t t92 = 30643392U;

	t92 = (x3129<<(x3130+(x3131<x3132)));

	if (t92 != 122476U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3209 = 250028432446072LL;
	int64_t x3210 = -1LL;
	static volatile int16_t x3211 = 238;
	static uint32_t x3212 = 1530120U;
	int64_t t93 = -2551267295247LL;

	t93 = (x3209<<(x3210+(x3211<x3212)));

	if (t93 != 250028432446072LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x3306 = -1;
	int32_t t94 = 4377680;

	t94 = (x3305<<(x3306+(x3307<x3308)));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x3337 = 16U;
	int8_t x3338 = 0;
	uint16_t x3339 = UINT16_MAX;
	int16_t x3340 = INT16_MIN;
	static int32_t t95 = 228914;

	t95 = (x3337<<(x3338+(x3339<x3340)));

	if (t95 != 16) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x3341 = 14;
	volatile int8_t x3342 = -1;
	int8_t x3343 = INT8_MIN;
	uint8_t x3344 = 52U;
	int32_t t96 = -3109;

	t96 = (x3341<<(x3342+(x3343<x3344)));

	if (t96 != 14) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3397 = 11425U;
	int32_t x3398 = -1;
	int32_t x3400 = INT32_MAX;
	uint32_t t97 = 1U;

	t97 = (x3397<<(x3398+(x3399<x3400)));

	if (t97 != 11425U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x3417 = 0;
	uint8_t x3418 = 1U;
	volatile int32_t x3419 = -37;
	int16_t x3420 = 58;

	t98 = (x3417<<(x3418+(x3419<x3420)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x3421 = 9186U;
	int64_t x3422 = -1LL;
	int32_t x3423 = INT32_MIN;
	int8_t x3424 = INT8_MAX;
	static int32_t t99 = 3;

	t99 = (x3421<<(x3422+(x3423<x3424)));

	if (t99 != 9186) { NG(); } else { ; }
	
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


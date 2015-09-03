#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x8 = 5U;
static int32_t x69 = INT32_MIN;
int16_t x70 = 3943;
int8_t x71 = INT8_MAX;
uint8_t x72 = 0U;
static volatile int16_t x157 = 0;
uint8_t x160 = 4U;
int64_t x189 = INT64_MAX;
int8_t x192 = 0;
uint8_t x202 = 5U;
volatile int64_t x203 = INT64_MIN;
volatile int8_t x216 = 0;
uint8_t x298 = 123U;
static int64_t x318 = -1LL;
uint16_t x321 = 96U;
static uint32_t x322 = UINT32_MAX;
int8_t x455 = 1;
int16_t x463 = INT16_MIN;
static volatile uint32_t x537 = 634423522U;
uint32_t t20 = 2428465U;
volatile int32_t t21 = -2163242;
volatile int64_t x633 = 1186352716496LL;
static int16_t x650 = INT16_MIN;
int8_t x652 = 2;
static volatile int64_t t24 = -24920774597583057LL;
uint16_t x672 = 2U;
uint64_t x735 = 172LLU;
uint8_t x736 = 5U;
static volatile uint32_t x786 = UINT32_MAX;
int64_t x787 = 1625825984198716LL;
uint64_t x828 = 0LLU;
static volatile int32_t t32 = -26512179;
int32_t t33 = 18;
volatile int32_t t34 = -1;
uint8_t x1008 = 0U;
volatile int8_t x1048 = 10;
uint16_t x1060 = 0U;
static uint64_t x1077 = UINT64_MAX;
int16_t x1113 = INT16_MIN;
int16_t x1115 = -1;
uint16_t x1116 = 8U;
uint16_t x1164 = 1U;
volatile int32_t t41 = 15;
int16_t x1189 = -1;
volatile uint32_t x1209 = 14U;
uint8_t x1212 = 2U;
int32_t x1226 = INT32_MIN;
uint16_t x1357 = UINT16_MAX;
int64_t x1365 = -1LL;
int64_t t50 = -28970171252206482LL;
uint32_t t51 = 100197U;
uint32_t x1435 = UINT32_MAX;
volatile uint32_t t52 = 12448220U;
int16_t x1454 = INT16_MIN;
uint8_t x1455 = 4U;
int32_t t53 = 5;
int64_t x1467 = -1LL;
uint32_t t54 = 28165977U;
int8_t x1582 = INT8_MIN;
uint8_t x1660 = 18U;
volatile uint32_t t59 = 205U;
volatile int32_t x1673 = -1;
int64_t x1675 = -1LL;
uint16_t x1676 = 0U;
int32_t t61 = -194323519;
volatile int32_t t63 = -782178;
uint64_t x1826 = UINT64_MAX;
volatile uint8_t x1827 = UINT8_MAX;
int8_t x1828 = 0;
int32_t t64 = 1662;
volatile int8_t x1865 = INT8_MAX;
int8_t x1867 = INT8_MIN;
int8_t x1890 = 12;
volatile int32_t x1891 = INT32_MAX;
static uint8_t x1892 = 1U;
uint8_t x1902 = 7U;
uint8_t x1928 = 3U;
volatile uint16_t x2003 = UINT16_MAX;
int8_t x2004 = 7;
volatile int64_t t72 = 1542027074665445642LL;
uint64_t x2085 = 10977LLU;
uint16_t x2086 = 17923U;
uint32_t x2128 = 16U;
volatile int32_t x2222 = 4400;
int16_t x2236 = 12;
int8_t x2293 = -1;
int8_t x2323 = 12;
uint64_t x2334 = UINT64_MAX;
uint32_t x2358 = 1256U;
static int32_t x2378 = -1;
int8_t x2398 = 0;
volatile int32_t t94 = -277;
int32_t x2622 = INT32_MIN;
int32_t x2659 = INT32_MAX;


void f0(void) {
	int16_t x5 = INT16_MIN;
	static uint64_t x6 = 242LLU;
	int16_t x7 = -1451;
	volatile int32_t t0 = -1;

	t0 = ((x5&(x6<x7))<<x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t t1 = 63;

	t1 = ((x69&(x70<x71))<<x72);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x129 = -1LL;
	volatile int32_t x130 = -1385148;
	static int64_t x131 = 253057340391LL;
	uint8_t x132 = 0U;
	volatile int64_t t2 = -908354967LL;

	t2 = ((x129&(x130<x131))<<x132);

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x158 = 29LLU;
	uint16_t x159 = 104U;
	static int32_t t3 = -845370;

	t3 = ((x157&(x158<x159))<<x160);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x190 = -77;
	static volatile int16_t x191 = -1;
	int64_t t4 = -344074603LL;

	t4 = ((x189&(x190<x191))<<x192);

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x201 = 239U;
	uint32_t x204 = 14U;
	volatile int32_t t5 = -3375279;

	t5 = ((x201&(x202<x203))<<x204);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x213 = -1LL;
	static int16_t x214 = INT16_MIN;
	int16_t x215 = INT16_MAX;
	volatile int64_t t6 = 352856284351097LL;

	t6 = ((x213&(x214<x215))<<x216);

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x217 = 249;
	static uint8_t x218 = 21U;
	int16_t x219 = 1;
	uint64_t x220 = 21LLU;
	volatile int32_t t7 = 1;

	t7 = ((x217&(x218<x219))<<x220);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x265 = 4U;
	uint16_t x266 = 7U;
	uint32_t x267 = UINT32_MAX;
	volatile int32_t x268 = 3;
	static uint32_t t8 = 1670582603U;

	t8 = ((x265&(x266<x267))<<x268);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x293 = INT64_MIN;
	uint16_t x294 = 20U;
	int16_t x295 = INT16_MIN;
	uint8_t x296 = 1U;
	int64_t t9 = 568308498LL;

	t9 = ((x293&(x294<x295))<<x296);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x297 = INT8_MIN;
	int16_t x299 = 0;
	uint8_t x300 = 3U;
	static int32_t t10 = -1484;

	t10 = ((x297&(x298<x299))<<x300);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x317 = 1960;
	volatile int64_t x319 = -1LL;
	uint8_t x320 = 0U;
	volatile int32_t t11 = 56545;

	t11 = ((x317&(x318<x319))<<x320);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x323 = INT32_MAX;
	uint8_t x324 = 16U;
	int32_t t12 = -63373;

	t12 = ((x321&(x322<x323))<<x324);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x329 = INT64_MIN;
	int16_t x330 = -3006;
	int32_t x331 = INT32_MAX;
	int16_t x332 = 0;
	volatile int64_t t13 = 4655245829LL;

	t13 = ((x329&(x330<x331))<<x332);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x341 = INT8_MIN;
	int32_t x342 = INT32_MAX;
	int64_t x343 = 110750213LL;
	uint16_t x344 = 0U;
	volatile int32_t t14 = 0;

	t14 = ((x341&(x342<x343))<<x344);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x345 = INT16_MIN;
	static int8_t x346 = INT8_MAX;
	uint64_t x347 = 116466630084LLU;
	uint8_t x348 = 2U;
	volatile int32_t t15 = 2;

	t15 = ((x345&(x346<x347))<<x348);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x437 = UINT64_MAX;
	int8_t x438 = -1;
	int8_t x439 = INT8_MIN;
	volatile uint8_t x440 = 1U;
	volatile uint64_t t16 = 34LLU;

	t16 = ((x437&(x438<x439))<<x440);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x449 = 13U;
	uint16_t x450 = UINT16_MAX;
	int64_t x451 = INT64_MAX;
	static uint16_t x452 = 3U;
	volatile int32_t t17 = 1;

	t17 = ((x449&(x450<x451))<<x452);

	if (t17 != 8) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x453 = UINT32_MAX;
	int32_t x454 = INT32_MAX;
	static int8_t x456 = 1;
	volatile uint32_t t18 = 4871004U;

	t18 = ((x453&(x454<x455))<<x456);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x461 = -18449;
	static uint16_t x462 = UINT16_MAX;
	int8_t x464 = 7;
	int32_t t19 = -2;

	t19 = ((x461&(x462<x463))<<x464);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x538 = INT64_MIN;
	int8_t x539 = INT8_MIN;
	static volatile uint16_t x540 = 18U;

	t20 = ((x537&(x538<x539))<<x540);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x597 = UINT16_MAX;
	uint64_t x598 = 24761LLU;
	uint32_t x599 = UINT32_MAX;
	uint8_t x600 = 8U;

	t21 = ((x597&(x598<x599))<<x600);

	if (t21 != 256) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x609 = 4U;
	volatile int8_t x610 = INT8_MAX;
	int16_t x611 = 11758;
	static uint32_t x612 = 1U;
	static volatile int32_t t22 = 3;

	t22 = ((x609&(x610<x611))<<x612);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x634 = UINT16_MAX;
	static int8_t x635 = INT8_MAX;
	uint8_t x636 = 30U;
	volatile int64_t t23 = 95017503763224LL;

	t23 = ((x633&(x634<x635))<<x636);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x649 = 301LL;
	static uint64_t x651 = UINT64_MAX;

	t24 = ((x649&(x650<x651))<<x652);

	if (t24 != 4LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x669 = UINT32_MAX;
	int8_t x670 = INT8_MIN;
	int16_t x671 = INT16_MAX;
	uint32_t t25 = 0U;

	t25 = ((x669&(x670<x671))<<x672);

	if (t25 != 4U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x733 = 110316LLU;
	int16_t x734 = 4;
	uint64_t t26 = 15790LLU;

	t26 = ((x733&(x734<x735))<<x736);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x785 = -1;
	uint64_t x788 = 1LLU;
	volatile int32_t t27 = 1078111;

	t27 = ((x785&(x786<x787))<<x788);

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x821 = 145;
	uint8_t x822 = 23U;
	int8_t x823 = INT8_MIN;
	int8_t x824 = 1;
	static volatile int32_t t28 = 389246;

	t28 = ((x821&(x822<x823))<<x824);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x825 = -1;
	static int8_t x826 = 2;
	static volatile uint8_t x827 = 47U;
	volatile int32_t t29 = 1;

	t29 = ((x825&(x826<x827))<<x828);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x925 = INT16_MAX;
	volatile int32_t x926 = INT32_MIN;
	int8_t x927 = INT8_MIN;
	static int8_t x928 = 4;
	volatile int32_t t30 = 13794;

	t30 = ((x925&(x926<x927))<<x928);

	if (t30 != 16) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x949 = -15;
	uint64_t x950 = UINT64_MAX;
	uint16_t x951 = 101U;
	int8_t x952 = 1;
	int32_t t31 = 1;

	t31 = ((x949&(x950<x951))<<x952);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x953 = INT32_MIN;
	int32_t x954 = 1;
	static int16_t x955 = -1;
	static int16_t x956 = 13;

	t32 = ((x953&(x954<x955))<<x956);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x981 = 4284;
	volatile int16_t x982 = -67;
	uint8_t x983 = UINT8_MAX;
	volatile uint32_t x984 = 5U;

	t33 = ((x981&(x982<x983))<<x984);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x993 = INT32_MIN;
	int32_t x994 = -81068071;
	uint8_t x995 = 5U;
	volatile int64_t x996 = 5LL;

	t34 = ((x993&(x994<x995))<<x996);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1001 = UINT8_MAX;
	uint64_t x1002 = UINT64_MAX;
	static int64_t x1003 = -975641LL;
	uint8_t x1004 = 4U;
	volatile int32_t t35 = 33699;

	t35 = ((x1001&(x1002<x1003))<<x1004);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1005 = INT32_MIN;
	int64_t x1006 = INT64_MIN;
	volatile int16_t x1007 = -1;
	static volatile int32_t t36 = -5792152;

	t36 = ((x1005&(x1006<x1007))<<x1008);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x1045 = INT64_MIN;
	int8_t x1046 = -1;
	int64_t x1047 = INT64_MIN;
	int64_t t37 = -826272684132504LL;

	t37 = ((x1045&(x1046<x1047))<<x1048);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1057 = -1;
	volatile int8_t x1058 = INT8_MAX;
	int32_t x1059 = -90804;
	int32_t t38 = -304240;

	t38 = ((x1057&(x1058<x1059))<<x1060);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1078 = 1;
	int32_t x1079 = -3348;
	int8_t x1080 = 0;
	volatile uint64_t t39 = 135603166840224LLU;

	t39 = ((x1077&(x1078<x1079))<<x1080);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1114 = -10076LL;
	int32_t t40 = -3198972;

	t40 = ((x1113&(x1114<x1115))<<x1116);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1161 = 17U;
	static int16_t x1162 = INT16_MIN;
	int16_t x1163 = INT16_MIN;

	t41 = ((x1161&(x1162<x1163))<<x1164);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1169 = INT32_MIN;
	volatile int8_t x1170 = INT8_MIN;
	int64_t x1171 = INT64_MIN;
	uint8_t x1172 = 1U;
	int32_t t42 = -280;

	t42 = ((x1169&(x1170<x1171))<<x1172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x1190 = 58;
	int64_t x1191 = -1LL;
	uint8_t x1192 = 22U;
	int32_t t43 = -10788268;

	t43 = ((x1189&(x1190<x1191))<<x1192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1210 = INT32_MAX;
	uint32_t x1211 = 322U;
	volatile uint32_t t44 = 7589U;

	t44 = ((x1209&(x1210<x1211))<<x1212);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1225 = UINT8_MAX;
	int8_t x1227 = INT8_MAX;
	volatile uint16_t x1228 = 7U;
	volatile int32_t t45 = -246868;

	t45 = ((x1225&(x1226<x1227))<<x1228);

	if (t45 != 128) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1249 = INT8_MIN;
	int64_t x1250 = INT64_MAX;
	static int8_t x1251 = -3;
	uint16_t x1252 = 2U;
	int32_t t46 = -46448;

	t46 = ((x1249&(x1250<x1251))<<x1252);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1277 = UINT16_MAX;
	int64_t x1278 = INT64_MIN;
	uint8_t x1279 = 2U;
	volatile uint8_t x1280 = 1U;
	static int32_t t47 = -13198651;

	t47 = ((x1277&(x1278<x1279))<<x1280);

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1341 = INT64_MIN;
	int64_t x1342 = INT64_MIN;
	uint16_t x1343 = 107U;
	uint8_t x1344 = 0U;
	static int64_t t48 = 873759619LL;

	t48 = ((x1341&(x1342<x1343))<<x1344);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1358 = -958;
	int64_t x1359 = INT64_MAX;
	uint16_t x1360 = 21U;
	int32_t t49 = -54933;

	t49 = ((x1357&(x1358<x1359))<<x1360);

	if (t49 != 2097152) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1366 = 6U;
	int32_t x1367 = INT32_MAX;
	volatile uint8_t x1368 = 1U;

	t50 = ((x1365&(x1366<x1367))<<x1368);

	if (t50 != 2LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x1425 = UINT32_MAX;
	int64_t x1426 = INT64_MAX;
	int32_t x1427 = -122;
	int16_t x1428 = 7;

	t51 = ((x1425&(x1426<x1427))<<x1428);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x1433 = 110383U;
	static int64_t x1434 = 507218888LL;
	uint8_t x1436 = 2U;

	t52 = ((x1433&(x1434<x1435))<<x1436);

	if (t52 != 4U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1453 = INT16_MAX;
	uint16_t x1456 = 22U;

	t53 = ((x1453&(x1454<x1455))<<x1456);

	if (t53 != 4194304) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1465 = 7140779U;
	uint32_t x1466 = UINT32_MAX;
	volatile uint8_t x1468 = 13U;

	t54 = ((x1465&(x1466<x1467))<<x1468);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1517 = INT8_MIN;
	int64_t x1518 = INT64_MIN;
	volatile uint8_t x1519 = 69U;
	static volatile uint64_t x1520 = 2LLU;
	int32_t t55 = -142076569;

	t55 = ((x1517&(x1518<x1519))<<x1520);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x1581 = -12;
	static volatile int8_t x1583 = INT8_MAX;
	int16_t x1584 = 0;
	volatile int32_t t56 = -14903;

	t56 = ((x1581&(x1582<x1583))<<x1584);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1601 = 769U;
	int16_t x1602 = 13750;
	int16_t x1603 = INT16_MIN;
	volatile int8_t x1604 = 4;
	volatile int32_t t57 = 372108;

	t57 = ((x1601&(x1602<x1603))<<x1604);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x1625 = 63U;
	static volatile int64_t x1626 = INT64_MIN;
	int8_t x1627 = 1;
	int8_t x1628 = 2;
	volatile int32_t t58 = -20550435;

	t58 = ((x1625&(x1626<x1627))<<x1628);

	if (t58 != 4) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x1657 = UINT32_MAX;
	int8_t x1658 = INT8_MAX;
	int64_t x1659 = -409610LL;

	t59 = ((x1657&(x1658<x1659))<<x1660);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1674 = INT32_MIN;
	int32_t t60 = 114;

	t60 = ((x1673&(x1674<x1675))<<x1676);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x1709 = 1;
	int16_t x1710 = -1;
	uint32_t x1711 = 942U;
	uint16_t x1712 = 0U;

	t61 = ((x1709&(x1710<x1711))<<x1712);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x1741 = 473715934;
	int8_t x1742 = -3;
	int16_t x1743 = INT16_MIN;
	uint16_t x1744 = 15U;
	int32_t t62 = 11;

	t62 = ((x1741&(x1742<x1743))<<x1744);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x1753 = INT32_MAX;
	uint8_t x1754 = 0U;
	int32_t x1755 = INT32_MIN;
	uint32_t x1756 = 0U;

	t63 = ((x1753&(x1754<x1755))<<x1756);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x1825 = 1952;

	t64 = ((x1825&(x1826<x1827))<<x1828);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1866 = UINT8_MAX;
	volatile int8_t x1868 = 12;
	volatile int32_t t65 = 177;

	t65 = ((x1865&(x1866<x1867))<<x1868);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x1889 = 60294833717865130LL;
	static int64_t t66 = -28348784331653908LL;

	t66 = ((x1889&(x1890<x1891))<<x1892);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x1901 = INT64_MAX;
	static int64_t x1903 = -1LL;
	uint16_t x1904 = 1U;
	static int64_t t67 = 12683718317664417LL;

	t67 = ((x1901&(x1902<x1903))<<x1904);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x1925 = 2159U;
	static int8_t x1926 = INT8_MAX;
	uint32_t x1927 = 34486U;
	static volatile int32_t t68 = -5520;

	t68 = ((x1925&(x1926<x1927))<<x1928);

	if (t68 != 8) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x1961 = 2033;
	int64_t x1962 = -67079730LL;
	static int16_t x1963 = -135;
	int16_t x1964 = 1;
	int32_t t69 = 42407;

	t69 = ((x1961&(x1962<x1963))<<x1964);

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x2001 = INT8_MAX;
	uint8_t x2002 = 10U;
	static int32_t t70 = 59407114;

	t70 = ((x2001&(x2002<x2003))<<x2004);

	if (t70 != 128) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2037 = INT8_MIN;
	volatile int8_t x2038 = INT8_MIN;
	static int32_t x2039 = INT32_MIN;
	uint8_t x2040 = 0U;
	int32_t t71 = 399251508;

	t71 = ((x2037&(x2038<x2039))<<x2040);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x2049 = -13910453905LL;
	volatile int8_t x2050 = INT8_MIN;
	int32_t x2051 = 23019536;
	static volatile uint8_t x2052 = 7U;

	t72 = ((x2049&(x2050<x2051))<<x2052);

	if (t72 != 128LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2057 = -1LL;
	int16_t x2058 = 291;
	static uint16_t x2059 = 114U;
	int8_t x2060 = 1;
	int64_t t73 = 27LL;

	t73 = ((x2057&(x2058<x2059))<<x2060);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x2087 = -1;
	static uint16_t x2088 = 0U;
	uint64_t t74 = 1210073371LLU;

	t74 = ((x2085&(x2086<x2087))<<x2088);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x2109 = UINT8_MAX;
	int8_t x2110 = INT8_MIN;
	static volatile int8_t x2111 = 1;
	static volatile int8_t x2112 = 0;
	int32_t t75 = -11105;

	t75 = ((x2109&(x2110<x2111))<<x2112);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2125 = INT64_MAX;
	int8_t x2126 = -1;
	int8_t x2127 = INT8_MIN;
	volatile int64_t t76 = -5475LL;

	t76 = ((x2125&(x2126<x2127))<<x2128);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x2129 = UINT16_MAX;
	uint8_t x2130 = 14U;
	static volatile int16_t x2131 = -258;
	static int32_t x2132 = 0;
	int32_t t77 = 8;

	t77 = ((x2129&(x2130<x2131))<<x2132);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x2149 = UINT64_MAX;
	int8_t x2150 = -1;
	static uint8_t x2151 = 1U;
	uint8_t x2152 = 53U;
	uint64_t t78 = 370590766073694742LLU;

	t78 = ((x2149&(x2150<x2151))<<x2152);

	if (t78 != 9007199254740992LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2221 = INT16_MAX;
	static volatile int32_t x2223 = -1;
	int32_t x2224 = 28;
	volatile int32_t t79 = -5;

	t79 = ((x2221&(x2222<x2223))<<x2224);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x2229 = UINT16_MAX;
	static int8_t x2230 = INT8_MAX;
	uint64_t x2231 = 58920795756495405LLU;
	uint8_t x2232 = 7U;
	int32_t t80 = -787471;

	t80 = ((x2229&(x2230<x2231))<<x2232);

	if (t80 != 128) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x2233 = -1LL;
	static int8_t x2234 = INT8_MIN;
	uint8_t x2235 = 1U;
	int64_t t81 = -21256500560LL;

	t81 = ((x2233&(x2234<x2235))<<x2236);

	if (t81 != 4096LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2237 = -3;
	int16_t x2238 = INT16_MAX;
	static int32_t x2239 = -1218;
	int64_t x2240 = 0LL;
	volatile int32_t t82 = -4486876;

	t82 = ((x2237&(x2238<x2239))<<x2240);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x2277 = UINT64_MAX;
	int8_t x2278 = -4;
	static volatile int16_t x2279 = INT16_MIN;
	uint16_t x2280 = 0U;
	uint64_t t83 = 1479LLU;

	t83 = ((x2277&(x2278<x2279))<<x2280);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x2281 = UINT32_MAX;
	static uint16_t x2282 = UINT16_MAX;
	int8_t x2283 = 7;
	uint8_t x2284 = 15U;
	volatile uint32_t t84 = 437U;

	t84 = ((x2281&(x2282<x2283))<<x2284);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2294 = INT32_MIN;
	int32_t x2295 = INT32_MAX;
	int32_t x2296 = 3;
	int32_t t85 = -16287;

	t85 = ((x2293&(x2294<x2295))<<x2296);

	if (t85 != 8) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x2321 = 7712LLU;
	int64_t x2322 = -1LL;
	uint8_t x2324 = 0U;
	uint64_t t86 = 116878LLU;

	t86 = ((x2321&(x2322<x2323))<<x2324);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x2325 = 37LLU;
	int64_t x2326 = -471455032849754064LL;
	int8_t x2327 = 1;
	static int8_t x2328 = 2;
	volatile uint64_t t87 = 420039059438LLU;

	t87 = ((x2325&(x2326<x2327))<<x2328);

	if (t87 != 4LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x2333 = UINT32_MAX;
	static uint16_t x2335 = UINT16_MAX;
	int16_t x2336 = 0;
	volatile uint32_t t88 = 2231070U;

	t88 = ((x2333&(x2334<x2335))<<x2336);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x2345 = 14U;
	static int64_t x2346 = INT64_MAX;
	int8_t x2347 = INT8_MAX;
	int16_t x2348 = 0;
	volatile uint32_t t89 = 9U;

	t89 = ((x2345&(x2346<x2347))<<x2348);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2357 = 28;
	volatile int64_t x2359 = INT64_MIN;
	int16_t x2360 = 1;
	int32_t t90 = 456;

	t90 = ((x2357&(x2358<x2359))<<x2360);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x2377 = 23U;
	int16_t x2379 = -1;
	int16_t x2380 = 1;
	int32_t t91 = -5897585;

	t91 = ((x2377&(x2378<x2379))<<x2380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x2397 = INT16_MIN;
	int16_t x2399 = 147;
	uint16_t x2400 = 0U;
	int32_t t92 = 3965;

	t92 = ((x2397&(x2398<x2399))<<x2400);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x2413 = -1;
	static int32_t x2414 = -3;
	static uint16_t x2415 = 8569U;
	int8_t x2416 = 16;
	int32_t t93 = -20498;

	t93 = ((x2413&(x2414<x2415))<<x2416);

	if (t93 != 65536) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x2429 = INT8_MAX;
	int8_t x2430 = INT8_MAX;
	volatile int16_t x2431 = 1;
	uint8_t x2432 = 8U;

	t94 = ((x2429&(x2430<x2431))<<x2432);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x2433 = -1;
	uint32_t x2434 = 88351U;
	int8_t x2435 = -4;
	uint8_t x2436 = 18U;
	volatile int32_t t95 = -3926;

	t95 = ((x2433&(x2434<x2435))<<x2436);

	if (t95 != 262144) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x2457 = -27;
	uint16_t x2458 = 1414U;
	volatile int16_t x2459 = INT16_MIN;
	int8_t x2460 = 0;
	int32_t t96 = -786;

	t96 = ((x2457&(x2458<x2459))<<x2460);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x2557 = -22040076253832LL;
	int8_t x2558 = -1;
	int32_t x2559 = INT32_MIN;
	uint16_t x2560 = 1U;
	int64_t t97 = 1013337920573357LL;

	t97 = ((x2557&(x2558<x2559))<<x2560);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x2621 = 7083497579970598175LLU;
	static int32_t x2623 = INT32_MAX;
	uint8_t x2624 = 1U;
	volatile uint64_t t98 = 85LLU;

	t98 = ((x2621&(x2622<x2623))<<x2624);

	if (t98 != 2LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x2657 = 1U;
	volatile uint8_t x2658 = 122U;
	uint8_t x2660 = 0U;
	int32_t t99 = -1843;

	t99 = ((x2657&(x2658<x2659))<<x2660);

	if (t99 != 1) { NG(); } else { ; }
	
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


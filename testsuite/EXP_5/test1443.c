#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x85 = 7;
static uint32_t x87 = 20U;
int16_t x97 = 63;
volatile uint16_t x100 = 0U;
static uint16_t x191 = 30U;
volatile int32_t t3 = -2616;
int64_t x227 = 1333960925459564LL;
int8_t x340 = 0;
volatile uint32_t x362 = 17U;
uint64_t x363 = 16189LLU;
static int16_t x365 = INT16_MAX;
int32_t x414 = -1957400;
static int8_t x415 = 1;
uint64_t x416 = 6LLU;
int64_t x426 = -1LL;
static int32_t x468 = 1;
uint8_t x475 = 40U;
int32_t x525 = -421459;
int64_t x527 = -1LL;
int32_t t14 = -866403;
volatile int32_t x542 = INT32_MIN;
volatile int8_t x543 = -1;
int32_t x589 = INT32_MIN;
int32_t t17 = INT32_MIN;
volatile int32_t t18 = -939461574;
uint32_t x651 = UINT32_MAX;
static volatile int64_t x689 = -1LL;
int32_t x690 = 0;
uint16_t x717 = 6U;
int16_t x719 = 96;
uint8_t x720 = 7U;
volatile int32_t x845 = -13298;
volatile uint32_t x848 = 11U;
static volatile int32_t t24 = -631303;
int16_t x858 = INT16_MIN;
uint32_t x860 = 20U;
volatile int32_t t27 = 0;
int64_t x999 = INT64_MIN;
static int8_t x1000 = 2;
int8_t x1008 = 0;
volatile int32_t t30 = INT32_MAX;
int64_t x1041 = -1LL;
uint64_t x1046 = UINT64_MAX;
int16_t x1047 = INT16_MIN;
volatile int32_t t32 = -4882898;
int32_t x1098 = INT32_MIN;
int8_t x1099 = INT8_MIN;
uint16_t x1100 = 7U;
volatile int32_t t33 = INT32_MIN;
volatile uint8_t x1229 = 7U;
int8_t x1250 = -2;
uint8_t x1256 = 1U;
int64_t t37 = INT64_MAX;
volatile int32_t t38 = -129622781;
int8_t x1415 = -28;
uint64_t t41 = UINT64_MAX;
int32_t x1438 = 25107;
volatile int32_t t42 = 3912;
int16_t x1523 = -114;
uint16_t x1524 = 16U;
int16_t x1535 = INT16_MAX;
int64_t x1539 = -1LL;
int32_t x1593 = INT32_MIN;
int32_t x1594 = INT32_MIN;
volatile int32_t x1611 = INT32_MIN;
int32_t t50 = -1;
uint64_t x1705 = UINT64_MAX;
volatile uint64_t t52 = UINT64_MAX;
static int16_t x1725 = INT16_MAX;
int8_t x1739 = -4;
uint8_t x1740 = 9U;
uint32_t t54 = 3U;
uint32_t x1772 = 2U;
static uint16_t x1775 = UINT16_MAX;
volatile int16_t x1776 = 4;
static int64_t x1795 = -1LL;
uint8_t x1934 = UINT8_MAX;
int64_t x2122 = -1LL;
volatile int8_t x2123 = INT8_MAX;
static uint32_t x2140 = 3U;
uint16_t x2166 = 3U;
int16_t x2169 = -284;
uint16_t x2170 = 14U;
volatile int8_t x2172 = 1;
int32_t t68 = -1;
static volatile int8_t x2182 = INT8_MIN;
int16_t x2184 = 2;
uint64_t t69 = 38783715891LLU;
int8_t x2237 = INT8_MAX;
static int32_t x2239 = 861076;
static volatile int64_t x2339 = -1LL;
static volatile uint64_t x2395 = 2072298270668LLU;
uint8_t x2412 = 7U;
static volatile int64_t x2449 = INT64_MAX;
static uint16_t x2474 = 1436U;
int32_t t79 = INT32_MAX;
volatile uint8_t x2500 = 0U;
int32_t x2509 = INT32_MIN;
int32_t t81 = INT32_MIN;
static volatile int32_t x2558 = -3;
int16_t x2560 = 14;
static volatile uint8_t x2576 = 26U;
volatile uint64_t x2601 = UINT64_MAX;
uint32_t x2614 = UINT32_MAX;
uint32_t x2702 = UINT32_MAX;
int64_t t90 = INT64_MIN;
volatile uint32_t x2908 = 1U;
int32_t t93 = 703659;
static int8_t x2928 = 1;
volatile int64_t t95 = 312097312637183LL;
uint8_t x2956 = 1U;
volatile int32_t t96 = -12120001;


void f0(void) {
	uint16_t x86 = 484U;
	uint16_t x88 = 22U;
	static int32_t t0 = -1735;

	t0 = (x85^((x86<x87)>>x88));

	if (t0 != 7) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x98 = 10U;
	volatile uint16_t x99 = 31U;
	int32_t t1 = -128059033;

	t1 = (x97^((x98<x99)>>x100));

	if (t1 != 62) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x121 = 2;
	int32_t x122 = -413330;
	int8_t x123 = 1;
	volatile int8_t x124 = 0;
	volatile int32_t t2 = -417450;

	t2 = (x121^((x122<x123)>>x124));

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x189 = -1;
	uint32_t x190 = UINT32_MAX;
	volatile uint8_t x192 = 0U;

	t3 = (x189^((x190<x191)>>x192));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x225 = INT8_MIN;
	int32_t x226 = INT32_MIN;
	uint8_t x228 = 1U;
	volatile int32_t t4 = 1004526221;

	t4 = (x225^((x226<x227)>>x228));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x249 = -1;
	static int32_t x250 = -1;
	static volatile int16_t x251 = INT16_MAX;
	int8_t x252 = 1;
	int32_t t5 = -330690;

	t5 = (x249^((x250<x251)>>x252));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x337 = 7440U;
	int32_t x338 = INT32_MAX;
	int8_t x339 = INT8_MIN;
	uint32_t t6 = 19376U;

	t6 = (x337^((x338<x339)>>x340));

	if (t6 != 7440U) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x361 = -1;
	static volatile int8_t x364 = 7;
	volatile int32_t t7 = 0;

	t7 = (x361^((x362<x363)>>x364));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x366 = -1LL;
	uint32_t x367 = 0U;
	static volatile uint16_t x368 = 6U;
	int32_t t8 = 45786;

	t8 = (x365^((x366<x367)>>x368));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x409 = -1;
	int8_t x410 = INT8_MIN;
	int32_t x411 = INT32_MIN;
	int16_t x412 = 8;
	static volatile int32_t t9 = -2417;

	t9 = (x409^((x410<x411)>>x412));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x413 = 3U;
	static volatile int32_t t10 = -79141;

	t10 = (x413^((x414<x415)>>x416));

	if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x425 = 35391138LLU;
	int64_t x427 = 0LL;
	int8_t x428 = 0;
	volatile uint64_t t11 = 245100757147990LLU;

	t11 = (x425^((x426<x427)>>x428));

	if (t11 != 35391139LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x465 = INT64_MIN;
	int64_t x466 = 241081141785LL;
	static int32_t x467 = -1;
	volatile int64_t t12 = INT64_MIN;

	t12 = (x465^((x466<x467)>>x468));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x473 = INT64_MIN;
	uint16_t x474 = UINT16_MAX;
	volatile uint16_t x476 = 13U;
	int64_t t13 = INT64_MIN;

	t13 = (x473^((x474<x475)>>x476));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x526 = -16;
	int8_t x528 = 1;

	t14 = (x525^((x526<x527)>>x528));

	if (t14 != -421459) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x541 = INT16_MAX;
	int32_t x544 = 0;
	volatile int32_t t15 = -100547547;

	t15 = (x541^((x542<x543)>>x544));

	if (t15 != 32766) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x577 = -14;
	uint16_t x578 = 1510U;
	int16_t x579 = -1;
	volatile uint8_t x580 = 6U;
	volatile int32_t t16 = -2906031;

	t16 = (x577^((x578<x579)>>x580));

	if (t16 != -14) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x590 = UINT64_MAX;
	int32_t x591 = INT32_MAX;
	uint16_t x592 = 2U;

	t17 = (x589^((x590<x591)>>x592));

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x633 = 1161;
	static int64_t x634 = INT64_MIN;
	volatile uint32_t x635 = 23002U;
	volatile uint8_t x636 = 6U;

	t18 = (x633^((x634<x635)>>x636));

	if (t18 != 1161) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x649 = 39U;
	uint8_t x650 = UINT8_MAX;
	volatile int16_t x652 = 7;
	volatile int32_t t19 = -61850;

	t19 = (x649^((x650<x651)>>x652));

	if (t19 != 39) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x669 = 2178LLU;
	static int64_t x670 = -1LL;
	uint32_t x671 = UINT32_MAX;
	volatile uint8_t x672 = 23U;
	volatile uint64_t t20 = 499984LLU;

	t20 = (x669^((x670<x671)>>x672));

	if (t20 != 2178LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x691 = 7968993241LLU;
	uint8_t x692 = 3U;
	int64_t t21 = 4850LL;

	t21 = (x689^((x690<x691)>>x692));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x718 = INT32_MIN;
	static int32_t t22 = 237511;

	t22 = (x717^((x718<x719)>>x720));

	if (t22 != 6) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x801 = 9;
	static int64_t x802 = INT64_MIN;
	volatile int16_t x803 = -123;
	volatile uint32_t x804 = 1U;
	volatile int32_t t23 = 455;

	t23 = (x801^((x802<x803)>>x804));

	if (t23 != 9) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x846 = INT32_MIN;
	int8_t x847 = -1;

	t24 = (x845^((x846<x847)>>x848));

	if (t24 != -13298) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x857 = 78997036057363LL;
	int32_t x859 = 32440243;
	int64_t t25 = -1579897727LL;

	t25 = (x857^((x858<x859)>>x860));

	if (t25 != 78997036057363LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x873 = UINT8_MAX;
	int8_t x874 = INT8_MIN;
	int64_t x875 = -1LL;
	uint16_t x876 = 21U;
	volatile int32_t t26 = 3001142;

	t26 = (x873^((x874<x875)>>x876));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x933 = 6U;
	static int64_t x934 = INT64_MIN;
	uint16_t x935 = 28603U;
	uint8_t x936 = 2U;

	t27 = (x933^((x934<x935)>>x936));

	if (t27 != 6) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x997 = INT8_MIN;
	int16_t x998 = -530;
	int32_t t28 = -1358854;

	t28 = (x997^((x998<x999)>>x1000));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x1005 = -77236203586LL;
	int64_t x1006 = INT64_MIN;
	static int16_t x1007 = 0;
	int64_t t29 = 308287633273385259LL;

	t29 = (x1005^((x1006<x1007)>>x1008));

	if (t29 != -77236203585LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1033 = INT32_MAX;
	uint8_t x1034 = UINT8_MAX;
	volatile uint8_t x1035 = 14U;
	uint16_t x1036 = 17U;

	t30 = (x1033^((x1034<x1035)>>x1036));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1042 = INT8_MIN;
	static int8_t x1043 = INT8_MAX;
	static uint8_t x1044 = 10U;
	volatile int64_t t31 = -20323LL;

	t31 = (x1041^((x1042<x1043)>>x1044));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1045 = 1;
	uint32_t x1048 = 3U;

	t32 = (x1045^((x1046<x1047)>>x1048));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1097 = INT32_MIN;

	t33 = (x1097^((x1098<x1099)>>x1100));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1230 = INT8_MAX;
	static int16_t x1231 = 0;
	static uint16_t x1232 = 1U;
	int32_t t34 = -1;

	t34 = (x1229^((x1230<x1231)>>x1232));

	if (t34 != 7) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1249 = 2U;
	volatile int64_t x1251 = -12114134217642701LL;
	uint8_t x1252 = 1U;
	volatile int32_t t35 = 23489;

	t35 = (x1249^((x1250<x1251)>>x1252));

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1253 = -434055LL;
	int64_t x1254 = 1211931997112LL;
	int8_t x1255 = 1;
	volatile int64_t t36 = -1974237LL;

	t36 = (x1253^((x1254<x1255)>>x1256));

	if (t36 != -434055LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x1261 = INT64_MAX;
	int64_t x1262 = INT64_MIN;
	volatile int16_t x1263 = -1;
	static uint16_t x1264 = 2U;

	t37 = (x1261^((x1262<x1263)>>x1264));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1301 = INT8_MIN;
	int32_t x1302 = INT32_MIN;
	static uint8_t x1303 = 4U;
	uint64_t x1304 = 2LLU;

	t38 = (x1301^((x1302<x1303)>>x1304));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1409 = INT32_MAX;
	int32_t x1410 = INT32_MAX;
	int16_t x1411 = INT16_MIN;
	uint8_t x1412 = 1U;
	static int32_t t39 = INT32_MAX;

	t39 = (x1409^((x1410<x1411)>>x1412));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1413 = UINT8_MAX;
	int16_t x1414 = INT16_MIN;
	uint8_t x1416 = 31U;
	volatile int32_t t40 = 2542;

	t40 = (x1413^((x1414<x1415)>>x1416));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1433 = UINT64_MAX;
	volatile int32_t x1434 = 43;
	int64_t x1435 = INT64_MAX;
	uint8_t x1436 = 2U;

	t41 = (x1433^((x1434<x1435)>>x1436));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1437 = 189U;
	int32_t x1439 = -1;
	uint8_t x1440 = 7U;

	t42 = (x1437^((x1438<x1439)>>x1440));

	if (t42 != 189) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x1469 = -54;
	volatile int16_t x1470 = -1;
	int32_t x1471 = -24;
	volatile int32_t x1472 = 16;
	int32_t t43 = 16240;

	t43 = (x1469^((x1470<x1471)>>x1472));

	if (t43 != -54) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1521 = 3;
	int32_t x1522 = INT32_MAX;
	volatile int32_t t44 = -2581;

	t44 = (x1521^((x1522<x1523)>>x1524));

	if (t44 != 3) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1533 = -1;
	volatile int64_t x1534 = INT64_MIN;
	int64_t x1536 = 22LL;
	int32_t t45 = -20;

	t45 = (x1533^((x1534<x1535)>>x1536));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x1537 = -1;
	uint32_t x1538 = 23127664U;
	uint16_t x1540 = 4U;
	static volatile int32_t t46 = -1;

	t46 = (x1537^((x1538<x1539)>>x1540));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x1553 = UINT32_MAX;
	volatile int64_t x1554 = 73486327LL;
	volatile int8_t x1555 = -1;
	uint8_t x1556 = 3U;
	static volatile uint32_t t47 = UINT32_MAX;

	t47 = (x1553^((x1554<x1555)>>x1556));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x1595 = INT32_MIN;
	static uint16_t x1596 = 0U;
	static int32_t t48 = INT32_MIN;

	t48 = (x1593^((x1594<x1595)>>x1596));

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x1609 = UINT32_MAX;
	int32_t x1610 = INT32_MIN;
	uint32_t x1612 = 1U;
	uint32_t t49 = UINT32_MAX;

	t49 = (x1609^((x1610<x1611)>>x1612));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x1621 = 1U;
	int8_t x1622 = -6;
	uint32_t x1623 = 447822353U;
	int16_t x1624 = 7;

	t50 = (x1621^((x1622<x1623)>>x1624));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1637 = -17;
	int16_t x1638 = INT16_MAX;
	static int32_t x1639 = -73333556;
	uint8_t x1640 = 8U;
	volatile int32_t t51 = -1;

	t51 = (x1637^((x1638<x1639)>>x1640));

	if (t51 != -17) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1706 = UINT8_MAX;
	int64_t x1707 = INT64_MIN;
	int16_t x1708 = 27;

	t52 = (x1705^((x1706<x1707)>>x1708));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1726 = -44;
	uint64_t x1727 = 59245405459913871LLU;
	uint8_t x1728 = 2U;
	int32_t t53 = -145;

	t53 = (x1725^((x1726<x1727)>>x1728));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x1737 = 70603U;
	int64_t x1738 = INT64_MAX;

	t54 = (x1737^((x1738<x1739)>>x1740));

	if (t54 != 70603U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1757 = 17U;
	static int32_t x1758 = -14144828;
	uint8_t x1759 = 2U;
	uint8_t x1760 = 21U;
	volatile int32_t t55 = -283;

	t55 = (x1757^((x1758<x1759)>>x1760));

	if (t55 != 17) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x1769 = 44218196941701LLU;
	static uint16_t x1770 = UINT16_MAX;
	static volatile int32_t x1771 = INT32_MIN;
	static volatile uint64_t t56 = 15824779066LLU;

	t56 = (x1769^((x1770<x1771)>>x1772));

	if (t56 != 44218196941701LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1773 = INT16_MAX;
	static int16_t x1774 = 10;
	volatile int32_t t57 = -15805;

	t57 = (x1773^((x1774<x1775)>>x1776));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x1793 = 3196167U;
	int8_t x1794 = INT8_MAX;
	int16_t x1796 = 1;
	static volatile uint32_t t58 = 51064603U;

	t58 = (x1793^((x1794<x1795)>>x1796));

	if (t58 != 3196167U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1893 = INT64_MAX;
	int32_t x1894 = INT32_MIN;
	int32_t x1895 = 114223;
	int32_t x1896 = 11;
	static int64_t t59 = INT64_MAX;

	t59 = (x1893^((x1894<x1895)>>x1896));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x1933 = 679375799879633LLU;
	int64_t x1935 = INT64_MIN;
	volatile int16_t x1936 = 1;
	volatile uint64_t t60 = 18736555159LLU;

	t60 = (x1933^((x1934<x1935)>>x1936));

	if (t60 != 679375799879633LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1937 = INT8_MIN;
	static int16_t x1938 = -1;
	int8_t x1939 = 10;
	uint16_t x1940 = 16U;
	volatile int32_t t61 = -203313369;

	t61 = (x1937^((x1938<x1939)>>x1940));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x2009 = 109LL;
	static int8_t x2010 = -1;
	int16_t x2011 = 3805;
	volatile uint16_t x2012 = 0U;
	volatile int64_t t62 = -31070692LL;

	t62 = (x2009^((x2010<x2011)>>x2012));

	if (t62 != 108LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2065 = 151513751U;
	uint64_t x2066 = 3LLU;
	uint8_t x2067 = 0U;
	uint16_t x2068 = 7U;
	uint32_t t63 = 14982293U;

	t63 = (x2065^((x2066<x2067)>>x2068));

	if (t63 != 151513751U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2093 = -2820543900268196696LL;
	static volatile int16_t x2094 = -1;
	static volatile uint8_t x2095 = 0U;
	int8_t x2096 = 0;
	volatile int64_t t64 = 4136604LL;

	t64 = (x2093^((x2094<x2095)>>x2096));

	if (t64 != -2820543900268196695LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x2121 = -3103364LL;
	static uint8_t x2124 = 0U;
	int64_t t65 = 2268LL;

	t65 = (x2121^((x2122<x2123)>>x2124));

	if (t65 != -3103363LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x2137 = 27U;
	volatile int32_t x2138 = INT32_MAX;
	volatile int16_t x2139 = INT16_MIN;
	int32_t t66 = 685;

	t66 = (x2137^((x2138<x2139)>>x2140));

	if (t66 != 27) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2165 = -2902265;
	int16_t x2167 = -169;
	uint16_t x2168 = 27U;
	volatile int32_t t67 = 163427;

	t67 = (x2165^((x2166<x2167)>>x2168));

	if (t67 != -2902265) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2171 = INT16_MIN;

	t68 = (x2169^((x2170<x2171)>>x2172));

	if (t68 != -284) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x2181 = 2LLU;
	int16_t x2183 = 10273;

	t69 = (x2181^((x2182<x2183)>>x2184));

	if (t69 != 2LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x2185 = 8U;
	int64_t x2186 = INT64_MIN;
	int32_t x2187 = -1;
	static int8_t x2188 = 1;
	volatile int32_t t70 = 6697;

	t70 = (x2185^((x2186<x2187)>>x2188));

	if (t70 != 8) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x2193 = INT8_MAX;
	static volatile uint16_t x2194 = UINT16_MAX;
	volatile int8_t x2195 = INT8_MIN;
	static volatile uint8_t x2196 = 2U;
	volatile int32_t t71 = -43;

	t71 = (x2193^((x2194<x2195)>>x2196));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x2238 = 382U;
	static uint8_t x2240 = 1U;
	volatile int32_t t72 = -524;

	t72 = (x2237^((x2238<x2239)>>x2240));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2241 = 489;
	int16_t x2242 = INT16_MAX;
	uint16_t x2243 = UINT16_MAX;
	volatile int32_t x2244 = 1;
	int32_t t73 = 1;

	t73 = (x2241^((x2242<x2243)>>x2244));

	if (t73 != 489) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2297 = 15730204LLU;
	volatile int32_t x2298 = -1;
	volatile uint64_t x2299 = UINT64_MAX;
	static int8_t x2300 = 0;
	uint64_t t74 = 3246021339LLU;

	t74 = (x2297^((x2298<x2299)>>x2300));

	if (t74 != 15730204LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2337 = INT32_MIN;
	uint8_t x2338 = UINT8_MAX;
	uint8_t x2340 = 0U;
	volatile int32_t t75 = INT32_MIN;

	t75 = (x2337^((x2338<x2339)>>x2340));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x2393 = UINT32_MAX;
	int8_t x2394 = INT8_MIN;
	volatile uint16_t x2396 = 0U;
	volatile uint32_t t76 = UINT32_MAX;

	t76 = (x2393^((x2394<x2395)>>x2396));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x2409 = -1;
	uint8_t x2410 = 1U;
	volatile uint8_t x2411 = 37U;
	int32_t t77 = -87352989;

	t77 = (x2409^((x2410<x2411)>>x2412));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x2450 = 157917680LLU;
	int64_t x2451 = INT64_MAX;
	uint8_t x2452 = 6U;
	int64_t t78 = INT64_MAX;

	t78 = (x2449^((x2450<x2451)>>x2452));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2473 = INT32_MAX;
	int32_t x2475 = INT32_MAX;
	int8_t x2476 = 13;

	t79 = (x2473^((x2474<x2475)>>x2476));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x2497 = 25U;
	uint64_t x2498 = 444944315LLU;
	static uint8_t x2499 = 17U;
	volatile int32_t t80 = 1;

	t80 = (x2497^((x2498<x2499)>>x2500));

	if (t80 != 25) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x2510 = 25458U;
	static volatile uint32_t x2511 = 61440U;
	uint8_t x2512 = 9U;

	t81 = (x2509^((x2510<x2511)>>x2512));

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x2557 = -101964054392614LL;
	uint8_t x2559 = 0U;
	static int64_t t82 = -2LL;

	t82 = (x2557^((x2558<x2559)>>x2560));

	if (t82 != -101964054392614LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x2573 = 117089LLU;
	int64_t x2574 = -1LL;
	static int64_t x2575 = INT64_MAX;
	uint64_t t83 = 13LLU;

	t83 = (x2573^((x2574<x2575)>>x2576));

	if (t83 != 117089LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x2602 = UINT8_MAX;
	volatile int64_t x2603 = 365272034LL;
	int8_t x2604 = 14;
	static uint64_t t84 = UINT64_MAX;

	t84 = (x2601^((x2602<x2603)>>x2604));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x2613 = INT64_MIN;
	int16_t x2615 = -8179;
	volatile int16_t x2616 = 0;
	static volatile int64_t t85 = INT64_MIN;

	t85 = (x2613^((x2614<x2615)>>x2616));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x2649 = INT16_MIN;
	int32_t x2650 = -1;
	volatile int8_t x2651 = -10;
	int64_t x2652 = 4LL;
	int32_t t86 = -69;

	t86 = (x2649^((x2650<x2651)>>x2652));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2689 = -4247467261LL;
	int16_t x2690 = INT16_MIN;
	int8_t x2691 = INT8_MIN;
	static int8_t x2692 = 18;
	int64_t t87 = 1LL;

	t87 = (x2689^((x2690<x2691)>>x2692));

	if (t87 != -4247467261LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x2701 = INT16_MIN;
	uint32_t x2703 = 59U;
	int16_t x2704 = 1;
	int32_t t88 = 13200968;

	t88 = (x2701^((x2702<x2703)>>x2704));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x2709 = 3;
	int16_t x2710 = -1;
	uint64_t x2711 = UINT64_MAX;
	int64_t x2712 = 15LL;
	volatile int32_t t89 = -2009;

	t89 = (x2709^((x2710<x2711)>>x2712));

	if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x2769 = INT64_MIN;
	int32_t x2770 = INT32_MIN;
	int16_t x2771 = INT16_MIN;
	int8_t x2772 = 1;

	t90 = (x2769^((x2770<x2771)>>x2772));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x2777 = INT32_MIN;
	static int64_t x2778 = INT64_MIN;
	uint8_t x2779 = 21U;
	int8_t x2780 = 1;
	volatile int32_t t91 = INT32_MIN;

	t91 = (x2777^((x2778<x2779)>>x2780));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x2865 = INT8_MIN;
	int64_t x2866 = INT64_MIN;
	static int64_t x2867 = INT64_MIN;
	uint8_t x2868 = 15U;
	volatile int32_t t92 = 17;

	t92 = (x2865^((x2866<x2867)>>x2868));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x2905 = -476567377;
	uint8_t x2906 = UINT8_MAX;
	int32_t x2907 = 8492225;

	t93 = (x2905^((x2906<x2907)>>x2908));

	if (t93 != -476567377) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x2925 = -6344071761040575LL;
	uint8_t x2926 = 0U;
	int8_t x2927 = 5;
	volatile int64_t t94 = 8071241074LL;

	t94 = (x2925^((x2926<x2927)>>x2928));

	if (t94 != -6344071761040575LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x2949 = 26514LL;
	int64_t x2950 = INT64_MIN;
	int32_t x2951 = INT32_MIN;
	static uint32_t x2952 = 5U;

	t95 = (x2949^((x2950<x2951)>>x2952));

	if (t95 != 26514LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x2953 = 15U;
	int16_t x2954 = INT16_MAX;
	int8_t x2955 = 1;

	t96 = (x2953^((x2954<x2955)>>x2956));

	if (t96 != 15) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x2977 = 5152843;
	int32_t x2978 = -50;
	volatile int32_t x2979 = 0;
	int8_t x2980 = 5;
	int32_t t97 = 1;

	t97 = (x2977^((x2978<x2979)>>x2980));

	if (t97 != 5152843) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x2981 = INT8_MAX;
	uint32_t x2982 = 34121780U;
	static int16_t x2983 = 7612;
	uint32_t x2984 = 12U;
	int32_t t98 = -6;

	t98 = (x2981^((x2982<x2983)>>x2984));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3021 = INT8_MAX;
	uint64_t x3022 = UINT64_MAX;
	uint8_t x3023 = 7U;
	int64_t x3024 = 4LL;
	int32_t t99 = 550883762;

	t99 = (x3021^((x3022<x3023)>>x3024));

	if (t99 != 127) { NG(); } else { ; }
	
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


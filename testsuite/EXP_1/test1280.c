#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x33 = -1LL;
int64_t x34 = -1LL;
uint8_t x83 = UINT8_MAX;
int8_t x84 = 7;
volatile int32_t t2 = 1777;
uint64_t x126 = 241739134552LLU;
volatile int8_t x127 = INT8_MAX;
static int64_t x131 = INT64_MIN;
int32_t t4 = -1;
static volatile int32_t t5 = 1;
int16_t x237 = -1;
static volatile int32_t t8 = 49;
static int8_t x285 = -1;
uint8_t x288 = 1U;
int8_t x306 = -7;
uint32_t x307 = UINT32_MAX;
int32_t t10 = 624997728;
int8_t x326 = -1;
int32_t t13 = -595196862;
uint16_t x524 = 6U;
uint8_t x549 = UINT8_MAX;
volatile int64_t x551 = INT64_MIN;
volatile int16_t x579 = INT16_MIN;
static uint32_t x626 = 80U;
uint16_t x627 = UINT16_MAX;
int64_t x721 = 134330657171LL;
static int8_t x723 = INT8_MAX;
volatile int32_t t23 = 241178375;
static int8_t x769 = INT8_MAX;
static uint8_t x798 = UINT8_MAX;
volatile int64_t x799 = 210LL;
static int32_t t25 = -160;
int64_t x838 = 7083971666344LL;
volatile uint16_t x840 = 1U;
volatile int64_t x874 = 698618770346162800LL;
static int8_t x955 = INT8_MIN;
int16_t x956 = 6;
static uint64_t x1009 = UINT64_MAX;
volatile int8_t x1012 = 15;
int64_t x1034 = INT64_MIN;
static volatile int32_t x1035 = INT32_MIN;
uint8_t x1046 = 1U;
volatile int16_t x1047 = INT16_MIN;
static volatile int32_t t35 = 13953600;
int8_t x1111 = INT8_MIN;
uint8_t x1112 = 1U;
int32_t t37 = 6;
uint16_t x1146 = 7U;
int64_t x1215 = 76171LL;
int64_t x1333 = -1LL;
volatile uint16_t x1336 = 1U;
uint32_t x1406 = 3976U;
int32_t x1463 = INT32_MIN;
volatile int32_t t45 = 764;
uint16_t x1532 = 5U;
volatile int8_t x1542 = INT8_MAX;
volatile int32_t t47 = 68;
int8_t x1656 = 1;
static uint8_t x1673 = 1U;
static int32_t t49 = -264144188;
int32_t t50 = 95;
volatile int64_t x1723 = -340226735446LL;
int8_t x1724 = 15;
int8_t x1805 = -1;
uint32_t x1806 = 3370U;
int16_t x1969 = INT16_MIN;
int32_t t56 = 1;
volatile int16_t x2000 = 0;
int32_t x2019 = INT32_MAX;
int32_t t59 = 294054891;
int8_t x2037 = INT8_MIN;
static volatile uint16_t x2097 = 153U;
int16_t x2100 = 1;
static volatile int32_t t62 = 2;
volatile uint64_t x2119 = 543LLU;
volatile int32_t t63 = -28612291;
uint16_t x2193 = 7059U;
uint16_t x2195 = 9U;
volatile int32_t t66 = -2;
int8_t x2252 = 12;
int32_t x2277 = INT32_MAX;
uint8_t x2280 = 3U;
int32_t x2301 = INT32_MIN;
volatile int32_t t71 = -20881;
int32_t x2353 = -170876815;
static int32_t x2460 = 0;
static volatile int32_t x2497 = 59515;
static int64_t x2499 = -1LL;
static uint16_t x2500 = 30U;
static volatile int16_t x2525 = INT16_MIN;
int8_t x2560 = 7;
int32_t x2581 = -1;
volatile int8_t x2583 = -1;
int32_t t79 = 1283030;
static uint32_t x2595 = 244249U;
int32_t x2630 = INT32_MAX;
uint8_t x2658 = UINT8_MAX;
int32_t x2666 = INT32_MIN;
static int64_t x2678 = INT64_MIN;
int8_t x2680 = 1;
int32_t x2689 = 19887;
static int64_t x2690 = -1LL;
uint32_t x2729 = 38U;
int8_t x2731 = INT8_MIN;
uint16_t x2761 = 4598U;
static int32_t x2762 = INT32_MAX;
int32_t t88 = 480696980;
int16_t x2771 = INT16_MIN;
uint16_t x2837 = 1U;
static volatile int32_t t91 = -979915171;
static volatile int16_t x2877 = INT16_MIN;
volatile int32_t t93 = 854;
static int16_t x2882 = 1;
int64_t x2894 = -37317LL;
volatile uint64_t x2957 = 2760322915575551LLU;
volatile uint16_t x2960 = 7U;
int8_t x3053 = INT8_MIN;
static uint16_t x3055 = 120U;
static volatile int32_t t99 = 1061711715;


void f0(void) {
	int32_t x35 = INT32_MIN;
	int8_t x36 = 14;
	int32_t t0 = -361836;

	t0 = (((x33==x34)==x35)<<x36);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x81 = INT8_MAX;
	int16_t x82 = INT16_MAX;
	static int32_t t1 = 0;

	t1 = (((x81==x82)==x83)<<x84);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x85 = -1;
	uint8_t x86 = 9U;
	uint16_t x87 = 143U;
	int8_t x88 = 1;

	t2 = (((x85==x86)==x87)<<x88);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x125 = UINT8_MAX;
	int8_t x128 = 12;
	volatile int32_t t3 = 1;

	t3 = (((x125==x126)==x127)<<x128);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x129 = INT32_MAX;
	volatile uint16_t x130 = UINT16_MAX;
	static int8_t x132 = 2;

	t4 = (((x129==x130)==x131)<<x132);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x149 = 34097107849517257LLU;
	static int32_t x150 = INT32_MIN;
	int16_t x151 = -1;
	static volatile int16_t x152 = 0;

	t5 = (((x149==x150)==x151)<<x152);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x157 = -1;
	int32_t x158 = -1;
	int64_t x159 = -2535LL;
	uint8_t x160 = 1U;
	int32_t t6 = -10281;

	t6 = (((x157==x158)==x159)<<x160);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x177 = -1LL;
	uint64_t x178 = UINT64_MAX;
	static int16_t x179 = -1181;
	int8_t x180 = 5;
	int32_t t7 = 18208470;

	t7 = (((x177==x178)==x179)<<x180);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x238 = INT8_MIN;
	int64_t x239 = INT64_MIN;
	uint8_t x240 = 25U;

	t8 = (((x237==x238)==x239)<<x240);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x286 = -35662287647LL;
	int16_t x287 = INT16_MIN;
	int32_t t9 = -1;

	t9 = (((x285==x286)==x287)<<x288);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x305 = 1187U;
	uint16_t x308 = 6U;

	t10 = (((x305==x306)==x307)<<x308);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x325 = 15U;
	static volatile int32_t x327 = INT32_MAX;
	volatile int8_t x328 = 21;
	volatile int32_t t11 = 2469787;

	t11 = (((x325==x326)==x327)<<x328);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x409 = -1;
	int32_t x410 = -1;
	volatile int16_t x411 = -1;
	uint32_t x412 = 7U;
	int32_t t12 = -25631996;

	t12 = (((x409==x410)==x411)<<x412);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x417 = -1;
	uint8_t x418 = 7U;
	static volatile int32_t x419 = -1;
	uint16_t x420 = 0U;

	t13 = (((x417==x418)==x419)<<x420);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x457 = UINT32_MAX;
	int32_t x458 = -1;
	static volatile int64_t x459 = -1LL;
	static volatile uint8_t x460 = 4U;
	int32_t t14 = 394608;

	t14 = (((x457==x458)==x459)<<x460);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x521 = 1U;
	uint16_t x522 = 103U;
	uint64_t x523 = 1750266344967814LLU;
	static volatile int32_t t15 = -2302259;

	t15 = (((x521==x522)==x523)<<x524);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x529 = UINT32_MAX;
	volatile uint32_t x530 = UINT32_MAX;
	static int32_t x531 = INT32_MIN;
	static uint8_t x532 = 4U;
	volatile int32_t t16 = 536355;

	t16 = (((x529==x530)==x531)<<x532);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x550 = UINT16_MAX;
	volatile int8_t x552 = 2;
	volatile int32_t t17 = -48500904;

	t17 = (((x549==x550)==x551)<<x552);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x577 = UINT8_MAX;
	static int32_t x578 = INT32_MAX;
	uint32_t x580 = 3U;
	int32_t t18 = 351368;

	t18 = (((x577==x578)==x579)<<x580);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x581 = -1;
	uint32_t x582 = 1286510388U;
	int32_t x583 = -1;
	uint8_t x584 = 1U;
	int32_t t19 = -4180712;

	t19 = (((x581==x582)==x583)<<x584);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x613 = INT16_MIN;
	int64_t x614 = INT64_MIN;
	uint8_t x615 = UINT8_MAX;
	int8_t x616 = 3;
	int32_t t20 = 266;

	t20 = (((x613==x614)==x615)<<x616);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x625 = INT32_MIN;
	int8_t x628 = 6;
	static volatile int32_t t21 = -455;

	t21 = (((x625==x626)==x627)<<x628);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x709 = 1;
	int16_t x710 = INT16_MIN;
	uint8_t x711 = UINT8_MAX;
	uint8_t x712 = 1U;
	int32_t t22 = -207360;

	t22 = (((x709==x710)==x711)<<x712);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x722 = 423725090;
	volatile uint8_t x724 = 6U;

	t23 = (((x721==x722)==x723)<<x724);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x770 = 3U;
	int32_t x771 = INT32_MIN;
	volatile int8_t x772 = 1;
	volatile int32_t t24 = 115672267;

	t24 = (((x769==x770)==x771)<<x772);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x797 = 182U;
	int8_t x800 = 8;

	t25 = (((x797==x798)==x799)<<x800);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x805 = UINT64_MAX;
	volatile int16_t x806 = -1573;
	int32_t x807 = INT32_MAX;
	uint16_t x808 = 4U;
	volatile int32_t t26 = -2044360;

	t26 = (((x805==x806)==x807)<<x808);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x809 = -1;
	static uint64_t x810 = UINT64_MAX;
	int8_t x811 = INT8_MIN;
	static uint8_t x812 = 2U;
	int32_t t27 = 211;

	t27 = (((x809==x810)==x811)<<x812);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x837 = -14;
	volatile int64_t x839 = -5952599358744046LL;
	volatile int32_t t28 = -145177910;

	t28 = (((x837==x838)==x839)<<x840);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x873 = INT8_MIN;
	uint64_t x875 = 3LLU;
	int32_t x876 = 1;
	static volatile int32_t t29 = 6978;

	t29 = (((x873==x874)==x875)<<x876);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x953 = 131138763228885739LLU;
	static int8_t x954 = INT8_MIN;
	int32_t t30 = 1;

	t30 = (((x953==x954)==x955)<<x956);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x957 = 18;
	uint8_t x958 = 46U;
	int32_t x959 = INT32_MIN;
	static uint16_t x960 = 5U;
	int32_t t31 = 0;

	t31 = (((x957==x958)==x959)<<x960);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x1010 = INT32_MIN;
	uint8_t x1011 = 30U;
	int32_t t32 = 2;

	t32 = (((x1009==x1010)==x1011)<<x1012);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1033 = 1U;
	uint8_t x1036 = 23U;
	static int32_t t33 = -422;

	t33 = (((x1033==x1034)==x1035)<<x1036);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1045 = INT64_MAX;
	volatile uint8_t x1048 = 6U;
	int32_t t34 = 1752;

	t34 = (((x1045==x1046)==x1047)<<x1048);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x1085 = -1;
	int64_t x1086 = -1LL;
	static uint8_t x1087 = 22U;
	uint16_t x1088 = 0U;

	t35 = (((x1085==x1086)==x1087)<<x1088);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1109 = 3;
	int8_t x1110 = INT8_MIN;
	int32_t t36 = 16111;

	t36 = (((x1109==x1110)==x1111)<<x1112);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1129 = INT16_MIN;
	int32_t x1130 = INT32_MIN;
	int8_t x1131 = INT8_MIN;
	uint8_t x1132 = 4U;

	t37 = (((x1129==x1130)==x1131)<<x1132);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x1145 = 425404605LLU;
	volatile int64_t x1147 = INT64_MIN;
	static uint16_t x1148 = 0U;
	static volatile int32_t t38 = -581;

	t38 = (((x1145==x1146)==x1147)<<x1148);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1213 = -1;
	volatile int8_t x1214 = INT8_MIN;
	int16_t x1216 = 0;
	volatile int32_t t39 = -66207004;

	t39 = (((x1213==x1214)==x1215)<<x1216);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x1273 = INT32_MAX;
	static int8_t x1274 = INT8_MIN;
	uint8_t x1275 = 5U;
	uint16_t x1276 = 0U;
	int32_t t40 = 6;

	t40 = (((x1273==x1274)==x1275)<<x1276);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1325 = -1;
	int16_t x1326 = INT16_MIN;
	volatile uint64_t x1327 = 190469379LLU;
	int8_t x1328 = 3;
	int32_t t41 = 1455;

	t41 = (((x1325==x1326)==x1327)<<x1328);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1334 = 10LL;
	int64_t x1335 = -189565411311280LL;
	int32_t t42 = 15;

	t42 = (((x1333==x1334)==x1335)<<x1336);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x1337 = 183U;
	int64_t x1338 = INT64_MIN;
	int8_t x1339 = INT8_MIN;
	int16_t x1340 = 0;
	volatile int32_t t43 = -7992;

	t43 = (((x1337==x1338)==x1339)<<x1340);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x1405 = INT16_MIN;
	volatile int64_t x1407 = -1LL;
	int16_t x1408 = 0;
	int32_t t44 = 13822;

	t44 = (((x1405==x1406)==x1407)<<x1408);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1461 = INT32_MAX;
	volatile int8_t x1462 = INT8_MIN;
	int8_t x1464 = 0;

	t45 = (((x1461==x1462)==x1463)<<x1464);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1529 = INT16_MIN;
	int16_t x1530 = -1;
	uint64_t x1531 = UINT64_MAX;
	int32_t t46 = -1;

	t46 = (((x1529==x1530)==x1531)<<x1532);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1541 = INT64_MIN;
	uint8_t x1543 = UINT8_MAX;
	volatile uint8_t x1544 = 1U;

	t47 = (((x1541==x1542)==x1543)<<x1544);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1653 = INT8_MAX;
	int16_t x1654 = INT16_MAX;
	volatile uint8_t x1655 = 30U;
	volatile int32_t t48 = 159864;

	t48 = (((x1653==x1654)==x1655)<<x1656);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1674 = -532;
	int32_t x1675 = INT32_MIN;
	static uint16_t x1676 = 1U;

	t49 = (((x1673==x1674)==x1675)<<x1676);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x1697 = INT32_MIN;
	int32_t x1698 = -176908966;
	volatile int32_t x1699 = -4956165;
	volatile uint8_t x1700 = 4U;

	t50 = (((x1697==x1698)==x1699)<<x1700);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1721 = 4;
	uint64_t x1722 = 129LLU;
	static int32_t t51 = 357;

	t51 = (((x1721==x1722)==x1723)<<x1724);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1807 = 14147770186172604LL;
	uint8_t x1808 = 4U;
	int32_t t52 = 2;

	t52 = (((x1805==x1806)==x1807)<<x1808);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1829 = UINT16_MAX;
	int32_t x1830 = -1;
	int64_t x1831 = INT64_MIN;
	static uint8_t x1832 = 7U;
	static volatile int32_t t53 = 543956652;

	t53 = (((x1829==x1830)==x1831)<<x1832);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x1845 = INT32_MIN;
	uint8_t x1846 = UINT8_MAX;
	uint8_t x1847 = UINT8_MAX;
	int16_t x1848 = 0;
	volatile int32_t t54 = 6346608;

	t54 = (((x1845==x1846)==x1847)<<x1848);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x1970 = UINT8_MAX;
	int64_t x1971 = INT64_MIN;
	uint32_t x1972 = 3U;
	int32_t t55 = -32406;

	t55 = (((x1969==x1970)==x1971)<<x1972);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x1989 = INT64_MIN;
	int8_t x1990 = -1;
	int8_t x1991 = INT8_MIN;
	uint32_t x1992 = 0U;

	t56 = (((x1989==x1990)==x1991)<<x1992);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x1997 = INT32_MIN;
	volatile int64_t x1998 = INT64_MIN;
	int8_t x1999 = -3;
	int32_t t57 = -131622;

	t57 = (((x1997==x1998)==x1999)<<x2000);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2017 = UINT16_MAX;
	static int8_t x2018 = -1;
	uint8_t x2020 = 21U;
	int32_t t58 = -718411471;

	t58 = (((x2017==x2018)==x2019)<<x2020);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x2025 = INT16_MIN;
	static uint32_t x2026 = 209U;
	static int16_t x2027 = -1;
	uint8_t x2028 = 16U;

	t59 = (((x2025==x2026)==x2027)<<x2028);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2038 = -1;
	uint8_t x2039 = UINT8_MAX;
	static volatile uint8_t x2040 = 27U;
	int32_t t60 = -1013168;

	t60 = (((x2037==x2038)==x2039)<<x2040);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2093 = 7;
	volatile int64_t x2094 = 0LL;
	int64_t x2095 = -1LL;
	volatile int8_t x2096 = 0;
	int32_t t61 = 1230;

	t61 = (((x2093==x2094)==x2095)<<x2096);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x2098 = INT16_MAX;
	volatile uint16_t x2099 = 3610U;

	t62 = (((x2097==x2098)==x2099)<<x2100);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x2117 = 1;
	uint32_t x2118 = 1U;
	static int8_t x2120 = 0;

	t63 = (((x2117==x2118)==x2119)<<x2120);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2133 = INT64_MIN;
	volatile int64_t x2134 = INT64_MIN;
	int32_t x2135 = INT32_MIN;
	int8_t x2136 = 0;
	int32_t t64 = -30322;

	t64 = (((x2133==x2134)==x2135)<<x2136);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2194 = -1;
	uint16_t x2196 = 1U;
	int32_t t65 = -32499056;

	t65 = (((x2193==x2194)==x2195)<<x2196);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x2217 = INT32_MAX;
	static int8_t x2218 = INT8_MAX;
	int16_t x2219 = INT16_MIN;
	int64_t x2220 = 7LL;

	t66 = (((x2217==x2218)==x2219)<<x2220);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2237 = 2723;
	int16_t x2238 = INT16_MIN;
	int64_t x2239 = INT64_MIN;
	uint8_t x2240 = 1U;
	volatile int32_t t67 = 1;

	t67 = (((x2237==x2238)==x2239)<<x2240);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x2249 = INT16_MIN;
	int64_t x2250 = 426468182LL;
	int16_t x2251 = 81;
	int32_t t68 = -1;

	t68 = (((x2249==x2250)==x2251)<<x2252);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2253 = INT32_MIN;
	static int8_t x2254 = -1;
	volatile uint32_t x2255 = UINT32_MAX;
	uint8_t x2256 = 14U;
	int32_t t69 = 899;

	t69 = (((x2253==x2254)==x2255)<<x2256);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x2278 = 1562U;
	int64_t x2279 = -102623229452LL;
	int32_t t70 = -467326176;

	t70 = (((x2277==x2278)==x2279)<<x2280);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2302 = 162779023LL;
	static int64_t x2303 = -1708479042820696LL;
	uint32_t x2304 = 7U;

	t71 = (((x2301==x2302)==x2303)<<x2304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2309 = INT8_MIN;
	static uint64_t x2310 = UINT64_MAX;
	volatile int16_t x2311 = INT16_MIN;
	int8_t x2312 = 7;
	int32_t t72 = 25753;

	t72 = (((x2309==x2310)==x2311)<<x2312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2354 = -1;
	int64_t x2355 = INT64_MIN;
	int64_t x2356 = 4LL;
	static volatile int32_t t73 = 6667;

	t73 = (((x2353==x2354)==x2355)<<x2356);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2397 = INT8_MIN;
	static int8_t x2398 = 0;
	int8_t x2399 = 1;
	int32_t x2400 = 0;
	volatile int32_t t74 = 239231570;

	t74 = (((x2397==x2398)==x2399)<<x2400);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x2457 = -1;
	int64_t x2458 = INT64_MIN;
	int16_t x2459 = INT16_MIN;
	static volatile int32_t t75 = -4126;

	t75 = (((x2457==x2458)==x2459)<<x2460);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x2498 = -1;
	volatile int32_t t76 = 1;

	t76 = (((x2497==x2498)==x2499)<<x2500);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2526 = 1;
	static int64_t x2527 = INT64_MIN;
	uint16_t x2528 = 0U;
	int32_t t77 = 0;

	t77 = (((x2525==x2526)==x2527)<<x2528);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2557 = 105LL;
	volatile int32_t x2558 = INT32_MAX;
	uint8_t x2559 = UINT8_MAX;
	int32_t t78 = -31971;

	t78 = (((x2557==x2558)==x2559)<<x2560);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x2582 = 6549U;
	volatile uint8_t x2584 = 18U;

	t79 = (((x2581==x2582)==x2583)<<x2584);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2593 = -1;
	static int64_t x2594 = INT64_MIN;
	int8_t x2596 = 3;
	volatile int32_t t80 = 2;

	t80 = (((x2593==x2594)==x2595)<<x2596);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2629 = -1;
	static volatile int32_t x2631 = INT32_MIN;
	volatile uint8_t x2632 = 3U;
	static int32_t t81 = -58;

	t81 = (((x2629==x2630)==x2631)<<x2632);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x2657 = INT32_MIN;
	int64_t x2659 = -1LL;
	volatile uint8_t x2660 = 1U;
	volatile int32_t t82 = 5;

	t82 = (((x2657==x2658)==x2659)<<x2660);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x2665 = 63U;
	uint32_t x2667 = 16U;
	static int8_t x2668 = 1;
	int32_t t83 = -86333;

	t83 = (((x2665==x2666)==x2667)<<x2668);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2677 = -1LL;
	int16_t x2679 = 3;
	int32_t t84 = -47869;

	t84 = (((x2677==x2678)==x2679)<<x2680);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x2681 = -1;
	int16_t x2682 = -3439;
	volatile int16_t x2683 = 15;
	int16_t x2684 = 6;
	volatile int32_t t85 = 1;

	t85 = (((x2681==x2682)==x2683)<<x2684);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x2691 = -1;
	static uint16_t x2692 = 13U;
	volatile int32_t t86 = 62875;

	t86 = (((x2689==x2690)==x2691)<<x2692);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x2730 = 72U;
	volatile uint16_t x2732 = 0U;
	int32_t t87 = -1;

	t87 = (((x2729==x2730)==x2731)<<x2732);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x2763 = 122703LLU;
	uint64_t x2764 = 0LLU;

	t88 = (((x2761==x2762)==x2763)<<x2764);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x2769 = -1LL;
	uint64_t x2770 = 0LLU;
	uint8_t x2772 = 26U;
	int32_t t89 = -4047;

	t89 = (((x2769==x2770)==x2771)<<x2772);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x2813 = INT64_MIN;
	static volatile int8_t x2814 = 0;
	volatile int8_t x2815 = INT8_MIN;
	volatile int8_t x2816 = 2;
	volatile int32_t t90 = -775697;

	t90 = (((x2813==x2814)==x2815)<<x2816);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x2838 = 28;
	static uint16_t x2839 = 3405U;
	uint8_t x2840 = 31U;

	t91 = (((x2837==x2838)==x2839)<<x2840);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x2873 = INT8_MAX;
	int64_t x2874 = INT64_MIN;
	uint16_t x2875 = 9U;
	uint8_t x2876 = 3U;
	volatile int32_t t92 = 2670;

	t92 = (((x2873==x2874)==x2875)<<x2876);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x2878 = -21;
	int8_t x2879 = -1;
	static volatile uint64_t x2880 = 23LLU;

	t93 = (((x2877==x2878)==x2879)<<x2880);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x2881 = 110536LL;
	uint64_t x2883 = UINT64_MAX;
	static uint32_t x2884 = 12U;
	static int32_t t94 = -1085;

	t94 = (((x2881==x2882)==x2883)<<x2884);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x2893 = INT8_MIN;
	int8_t x2895 = -3;
	static volatile int8_t x2896 = 0;
	int32_t t95 = 3;

	t95 = (((x2893==x2894)==x2895)<<x2896);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x2897 = 1U;
	int64_t x2898 = INT64_MIN;
	static uint8_t x2899 = 1U;
	static volatile uint8_t x2900 = 20U;
	static volatile int32_t t96 = -3178842;

	t96 = (((x2897==x2898)==x2899)<<x2900);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x2958 = INT8_MIN;
	int16_t x2959 = -1;
	volatile int32_t t97 = -46768;

	t97 = (((x2957==x2958)==x2959)<<x2960);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x3025 = 3580132U;
	static uint64_t x3026 = UINT64_MAX;
	uint32_t x3027 = 404960527U;
	uint8_t x3028 = 2U;
	volatile int32_t t98 = 1;

	t98 = (((x3025==x3026)==x3027)<<x3028);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3054 = INT8_MIN;
	volatile int32_t x3056 = 3;

	t99 = (((x3053==x3054)==x3055)<<x3056);

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


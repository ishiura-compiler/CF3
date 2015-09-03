#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x195 = 48;
int32_t x281 = INT32_MAX;
uint16_t x559 = 1U;
static int16_t x581 = INT16_MIN;
uint8_t x584 = UINT8_MAX;
volatile int64_t t7 = 1740LL;
int32_t x834 = INT32_MIN;
int8_t x838 = INT8_MIN;
int8_t x871 = 2;
int16_t x872 = INT16_MIN;
volatile uint16_t x1058 = UINT16_MAX;
volatile uint64_t t14 = 5716214962780890384LLU;
static volatile int16_t x1079 = 15;
volatile uint64_t t15 = 113975977408LLU;
volatile uint64_t t16 = 1050887047802868562LLU;
int32_t x1164 = -170672;
static uint32_t x1178 = UINT32_MAX;
static int32_t x1180 = INT32_MIN;
int32_t x1415 = 5;
static volatile int32_t x1418 = -1;
uint64_t x1421 = 413LLU;
uint8_t x1439 = 1U;
int16_t x1471 = 5;
volatile uint32_t t26 = 89231U;
uint16_t x1505 = UINT16_MAX;
static uint16_t x1507 = 2U;
uint64_t x1510 = 41LLU;
uint8_t x1511 = 6U;
uint64_t t28 = 84173892771885LLU;
uint32_t x1526 = 1U;
static uint16_t x1637 = 1310U;
int16_t x1640 = 280;
volatile int32_t t31 = -7;
static uint16_t x1705 = 660U;
uint64_t t32 = 54922093751113722LLU;
uint64_t x1722 = 207430LLU;
volatile uint16_t x1723 = 0U;
int32_t x1760 = INT32_MAX;
volatile uint32_t t35 = 310355625U;
uint32_t x1801 = 0U;
int8_t x1802 = INT8_MIN;
static volatile int8_t x1811 = 5;
uint32_t t38 = 2114779U;
static volatile int16_t x2130 = -1;
int8_t x2132 = 58;
static uint8_t x2172 = 20U;
uint64_t t42 = 39LLU;
uint8_t x2343 = 3U;
int16_t x2399 = 10;
uint32_t x2611 = 7U;
static volatile uint8_t x2627 = 0U;
uint64_t x2637 = 42312121999LLU;
uint64_t x2662 = UINT64_MAX;
static int16_t x2773 = INT16_MAX;
int32_t t56 = 1489922;
int64_t x2958 = -1LL;
static uint16_t x2959 = 43U;
uint64_t x2960 = 13183861150204LLU;
uint32_t t60 = 1286060668U;
int8_t x3074 = INT8_MIN;
uint64_t x3149 = UINT64_MAX;
static int8_t x3151 = 0;
uint8_t x3153 = 39U;
static uint8_t x3156 = 0U;
uint64_t t66 = 2LLU;
uint8_t x3204 = 58U;
uint16_t x3345 = 14U;
static uint16_t x3371 = 3U;
volatile uint32_t t71 = 14926U;
int16_t x3436 = -1;
volatile uint8_t x3477 = 5U;
uint8_t x3479 = 2U;
static uint16_t x3495 = 17U;
volatile uint8_t x3496 = UINT8_MAX;
int16_t x3729 = -988;
static volatile uint16_t x3974 = 0U;
uint32_t x4040 = 11209235U;
uint64_t x4081 = 1785095298LLU;
uint64_t x4110 = UINT64_MAX;
uint8_t x4111 = 21U;
int16_t x4160 = INT16_MIN;
uint8_t x4191 = 1U;
int64_t t85 = 842021768784950007LL;
uint64_t x4268 = 8595587922LLU;
static int64_t t89 = 53321915LL;
uint64_t x4397 = UINT64_MAX;
uint16_t x4399 = 0U;
uint64_t t90 = UINT64_MAX;
int16_t x4449 = 4;
int32_t x4545 = 1017922643;
uint16_t x4653 = 1U;
static volatile int32_t t93 = -906347;
int32_t x4812 = INT32_MAX;
int64_t x4837 = INT64_MAX;
static int64_t x4838 = INT64_MAX;
uint16_t x5111 = 21U;
uint8_t x5112 = 2U;
uint8_t x5135 = 20U;


void f0(void) {
	volatile int32_t x25 = -1;
	int8_t x26 = INT8_MIN;
	int8_t x27 = 6;
	static volatile int32_t x28 = -4786;
	volatile int32_t t0 = -1;

	t0 = (((x25-x26)<<x27)-x28);

	if (t0 != 12914) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x193 = UINT64_MAX;
	volatile int32_t x194 = INT32_MAX;
	uint32_t x196 = 709587U;
	uint64_t t1 = 5334234954LLU;

	t1 = (((x193-x194)<<x195)-x196);

	if (t1 != 18446744073708842029LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x197 = UINT32_MAX;
	int16_t x198 = 61;
	static uint64_t x199 = 15LLU;
	uint64_t x200 = 14250LLU;
	uint64_t t2 = 6821LLU;

	t2 = (((x197-x198)<<x199)-x200);

	if (t2 != 4292921430LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x257 = UINT32_MAX;
	static int8_t x258 = INT8_MIN;
	int8_t x259 = 1;
	volatile int64_t x260 = -1LL;
	volatile int64_t t3 = 868881277806544LL;

	t3 = (((x257-x258)<<x259)-x260);

	if (t3 != 255LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x282 = INT8_MAX;
	uint8_t x283 = 0U;
	int16_t x284 = INT16_MAX;
	int32_t t4 = 43498;

	t4 = (((x281-x282)<<x283)-x284);

	if (t4 != 2147450753) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x413 = 2396353837456459202LLU;
	int16_t x414 = INT16_MIN;
	uint32_t x415 = 1U;
	uint64_t x416 = 2455LLU;
	volatile uint64_t t5 = 555516LLU;

	t5 = (((x413-x414)<<x415)-x416);

	if (t5 != 4792707674912981485LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x557 = -1;
	static int16_t x558 = INT16_MIN;
	static uint32_t x560 = 998832U;
	uint32_t t6 = 219697703U;

	t6 = (((x557-x558)<<x559)-x560);

	if (t6 != 4294033998U) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x582 = -15035650588757LL;
	volatile uint8_t x583 = 1U;

	t7 = (((x581-x582)<<x583)-x584);

	if (t7 != 30071301111723LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x653 = 5606U;
	int64_t x654 = -1LL;
	volatile uint8_t x655 = 1U;
	static int16_t x656 = -3594;
	volatile int64_t t8 = -27005LL;

	t8 = (((x653-x654)<<x655)-x656);

	if (t8 != 14808LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x669 = UINT8_MAX;
	volatile int16_t x670 = INT16_MIN;
	uint16_t x671 = 15U;
	int8_t x672 = 8;
	int32_t t9 = 55;

	t9 = (((x669-x670)<<x671)-x672);

	if (t9 != 1082097656) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x833 = INT32_MIN;
	int8_t x835 = 1;
	static int8_t x836 = -1;
	int32_t t10 = 195027;

	t10 = (((x833-x834)<<x835)-x836);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x837 = UINT16_MAX;
	uint64_t x839 = 3LLU;
	uint64_t x840 = UINT64_MAX;
	static volatile uint64_t t11 = 9844530LLU;

	t11 = (((x837-x838)<<x839)-x840);

	if (t11 != 525305LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x869 = 7U;
	uint64_t x870 = UINT64_MAX;
	static volatile uint64_t t12 = 3892002855609LLU;

	t12 = (((x869-x870)<<x871)-x872);

	if (t12 != 32800LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x889 = UINT32_MAX;
	volatile int32_t x890 = -492052;
	int64_t x891 = 1LL;
	int16_t x892 = -1;
	uint32_t t13 = 4600628U;

	t13 = (((x889-x890)<<x891)-x892);

	if (t13 != 984103U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1057 = 54451494334395LLU;
	int8_t x1059 = 2;
	int16_t x1060 = INT16_MAX;

	t14 = (((x1057-x1058)<<x1059)-x1060);

	if (t14 != 217805977042673LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x1077 = 1879630676LLU;
	uint32_t x1078 = 1U;
	int8_t x1080 = INT8_MIN;

	t15 = (((x1077-x1078)<<x1079)-x1080);

	if (t15 != 61591737958528LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x1097 = 1;
	uint64_t x1098 = 1LLU;
	int8_t x1099 = 0;
	int16_t x1100 = 10;

	t16 = (((x1097-x1098)<<x1099)-x1100);

	if (t16 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x1129 = UINT8_MAX;
	uint32_t x1130 = UINT32_MAX;
	uint32_t x1131 = 24U;
	static uint8_t x1132 = 1U;
	uint32_t t17 = UINT32_MAX;

	t17 = (((x1129-x1130)<<x1131)-x1132);

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x1137 = 3;
	uint64_t x1138 = 3182811687156681LLU;
	uint32_t x1139 = 3U;
	int8_t x1140 = -1;
	uint64_t t18 = 69639681438240203LLU;

	t18 = (((x1137-x1138)<<x1139)-x1140);

	if (t18 != 18421281580212298193LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x1161 = 730U;
	int32_t x1162 = -27;
	int8_t x1163 = 0;
	static volatile uint32_t t19 = 7U;

	t19 = (((x1161-x1162)<<x1163)-x1164);

	if (t19 != 171429U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1177 = UINT32_MAX;
	volatile uint32_t x1179 = 2U;
	volatile uint32_t t20 = 234062U;

	t20 = (((x1177-x1178)<<x1179)-x1180);

	if (t20 != 2147483648U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x1341 = UINT32_MAX;
	static uint16_t x1342 = UINT16_MAX;
	uint8_t x1343 = 30U;
	uint16_t x1344 = 67U;
	uint32_t t21 = 124829310U;

	t21 = (((x1341-x1342)<<x1343)-x1344);

	if (t21 != 4294967229U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x1413 = 1764358U;
	int8_t x1414 = INT8_MAX;
	uint64_t x1416 = 8540131186275946LLU;
	volatile uint64_t t22 = 30064547524LLU;

	t22 = (((x1413-x1414)<<x1415)-x1416);

	if (t22 != 18438203942579731062LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1417 = 15U;
	static volatile uint8_t x1419 = 21U;
	uint64_t x1420 = 172159577LLU;
	uint64_t t23 = 37270665355159126LLU;

	t23 = (((x1417-x1418)<<x1419)-x1420);

	if (t23 != 18446744073570946471LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x1422 = INT8_MIN;
	uint8_t x1423 = 18U;
	static uint64_t x1424 = UINT64_MAX;
	uint64_t t24 = 446353LLU;

	t24 = (((x1421-x1422)<<x1423)-x1424);

	if (t24 != 141819905LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1437 = UINT32_MAX;
	int32_t x1438 = INT32_MIN;
	static uint8_t x1440 = UINT8_MAX;
	volatile uint32_t t25 = 381624403U;

	t25 = (((x1437-x1438)<<x1439)-x1440);

	if (t25 != 4294967039U) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x1469 = INT8_MAX;
	volatile uint32_t x1470 = 520900U;
	static volatile int32_t x1472 = -5306274;

	t26 = (((x1469-x1470)<<x1471)-x1472);

	if (t26 != 4283608834U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1506 = 29U;
	int32_t x1508 = 53472;
	int32_t t27 = 844036609;

	t27 = (((x1505-x1506)<<x1507)-x1508);

	if (t27 != 208552) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1509 = INT64_MAX;
	uint32_t x1512 = UINT32_MAX;

	t28 = (((x1509-x1510)<<x1511)-x1512);

	if (t28 != 18446744069414581633LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1525 = -1;
	static uint8_t x1527 = 5U;
	uint16_t x1528 = UINT16_MAX;
	volatile uint32_t t29 = 662U;

	t29 = (((x1525-x1526)<<x1527)-x1528);

	if (t29 != 4294901697U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1638 = UINT64_MAX;
	volatile uint8_t x1639 = 16U;
	static volatile uint64_t t30 = 574908278338LLU;

	t30 = (((x1637-x1638)<<x1639)-x1640);

	if (t30 != 85917416LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x1689 = -1;
	int16_t x1690 = -1272;
	int16_t x1691 = 3;
	static uint16_t x1692 = UINT16_MAX;

	t31 = (((x1689-x1690)<<x1691)-x1692);

	if (t31 != -55367) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1706 = 1U;
	int8_t x1707 = 3;
	volatile uint64_t x1708 = 5687710817870999LLU;

	t32 = (((x1705-x1706)<<x1707)-x1708);

	if (t32 != 18441056362891685889LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1721 = 0;
	static uint8_t x1724 = 2U;
	uint64_t t33 = 1568645009470648618LLU;

	t33 = (((x1721-x1722)<<x1723)-x1724);

	if (t33 != 18446744073709344184LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1757 = INT16_MIN;
	static int16_t x1758 = INT16_MIN;
	uint8_t x1759 = 4U;
	volatile int32_t t34 = -205;

	t34 = (((x1757-x1758)<<x1759)-x1760);

	if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1781 = 194529370U;
	int32_t x1782 = -1;
	volatile int8_t x1783 = 1;
	int8_t x1784 = INT8_MIN;

	t35 = (((x1781-x1782)<<x1783)-x1784);

	if (t35 != 389058870U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1803 = 2;
	static int16_t x1804 = 3671;
	uint32_t t36 = 514659U;

	t36 = (((x1801-x1802)<<x1803)-x1804);

	if (t36 != 4294964137U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1809 = -1LL;
	int32_t x1810 = -1;
	uint16_t x1812 = 28338U;
	int64_t t37 = -2402LL;

	t37 = (((x1809-x1810)<<x1811)-x1812);

	if (t37 != -28338LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x1953 = 34083U;
	int16_t x1954 = INT16_MIN;
	uint8_t x1955 = 1U;
	static volatile int32_t x1956 = -1;

	t38 = (((x1953-x1954)<<x1955)-x1956);

	if (t38 != 133703U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x2005 = UINT32_MAX;
	uint64_t x2006 = 1011110LLU;
	volatile uint16_t x2007 = 1U;
	uint32_t x2008 = UINT32_MAX;
	static volatile uint64_t t39 = 3051LLU;

	t39 = (((x2005-x2006)<<x2007)-x2008);

	if (t39 != 4292945075LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2041 = 59883289U;
	int16_t x2042 = -1;
	volatile uint8_t x2043 = 0U;
	volatile int16_t x2044 = 994;
	static uint32_t t40 = 6242U;

	t40 = (((x2041-x2042)<<x2043)-x2044);

	if (t40 != 59882296U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x2129 = INT8_MAX;
	int16_t x2131 = 1;
	volatile int32_t t41 = 1620;

	t41 = (((x2129-x2130)<<x2131)-x2132);

	if (t41 != 198) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x2169 = 26U;
	uint64_t x2170 = UINT64_MAX;
	uint8_t x2171 = 28U;

	t42 = (((x2169-x2170)<<x2171)-x2172);

	if (t42 != 7247757292LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2341 = 123U;
	int16_t x2342 = INT16_MIN;
	static int8_t x2344 = -2;
	int32_t t43 = 169;

	t43 = (((x2341-x2342)<<x2343)-x2344);

	if (t43 != 263130) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2349 = -1;
	uint64_t x2350 = 1020910183LLU;
	uint8_t x2351 = 13U;
	int64_t x2352 = INT64_MIN;
	static volatile uint64_t t44 = 1398227719255146LLU;

	t44 = (((x2349-x2350)<<x2351)-x2352);

	if (t44 != 9223363673558548480LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2377 = 3511931U;
	uint64_t x2378 = 9954276607200554LLU;
	static uint16_t x2379 = 13U;
	static int8_t x2380 = 1;
	volatile uint64_t t45 = 180LLU;

	t45 = (((x2377-x2378)<<x2379)-x2380);

	if (t45 != 10688286431130558463LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2397 = 1694279158967750552LLU;
	uint32_t x2398 = UINT32_MAX;
	static volatile int64_t x2400 = INT64_MAX;
	volatile uint64_t t46 = 104181LLU;

	t46 = (((x2397-x2398)<<x2399)-x2400);

	if (t46 != 10171283493086979073LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2473 = 12LLU;
	int32_t x2474 = INT32_MIN;
	static volatile uint8_t x2475 = 5U;
	volatile int16_t x2476 = -1;
	static volatile uint64_t t47 = 4182449050547LLU;

	t47 = (((x2473-x2474)<<x2475)-x2476);

	if (t47 != 68719477121LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2605 = 1;
	int8_t x2606 = INT8_MIN;
	int16_t x2607 = 7;
	uint32_t x2608 = UINT32_MAX;
	uint32_t t48 = 170022902U;

	t48 = (((x2605-x2606)<<x2607)-x2608);

	if (t48 != 16513U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2609 = UINT64_MAX;
	uint32_t x2610 = 26884U;
	uint64_t x2612 = 1128388252LLU;
	volatile uint64_t t49 = 108436468379631256LLU;

	t49 = (((x2609-x2610)<<x2611)-x2612);

	if (t49 != 18446744072577722084LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2625 = UINT64_MAX;
	int8_t x2626 = INT8_MAX;
	volatile uint32_t x2628 = 269U;
	volatile uint64_t t50 = 880736953753LLU;

	t50 = (((x2625-x2626)<<x2627)-x2628);

	if (t50 != 18446744073709551219LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2638 = INT32_MIN;
	int32_t x2639 = 1;
	int16_t x2640 = -1;
	volatile uint64_t t51 = 28976620LLU;

	t51 = (((x2637-x2638)<<x2639)-x2640);

	if (t51 != 88919211295LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2661 = UINT64_MAX;
	static uint8_t x2663 = 2U;
	int8_t x2664 = INT8_MIN;
	static uint64_t t52 = 223382521137LLU;

	t52 = (((x2661-x2662)<<x2663)-x2664);

	if (t52 != 128LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x2669 = 196869LL;
	static int16_t x2670 = 2865;
	int64_t x2671 = 0LL;
	int16_t x2672 = INT16_MIN;
	int64_t t53 = -99405LL;

	t53 = (((x2669-x2670)<<x2671)-x2672);

	if (t53 != 226772LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2681 = 21845LLU;
	int8_t x2682 = 0;
	uint16_t x2683 = 1U;
	int16_t x2684 = -1;
	uint64_t t54 = 72326452902826LLU;

	t54 = (((x2681-x2682)<<x2683)-x2684);

	if (t54 != 43691LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x2741 = 2358757LL;
	uint64_t x2742 = 125626065LLU;
	uint16_t x2743 = 2U;
	static int16_t x2744 = INT16_MIN;
	uint64_t t55 = 97LLU;

	t55 = (((x2741-x2742)<<x2743)-x2744);

	if (t55 != 18446744073216515152LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2774 = -643474;
	static uint8_t x2775 = 2U;
	volatile int32_t x2776 = -43266;

	t56 = (((x2773-x2774)<<x2775)-x2776);

	if (t56 != 2748230) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x2957 = INT16_MAX;
	volatile uint64_t t57 = 28632784118257093LLU;

	t57 = (((x2957-x2958)<<x2959)-x2960);

	if (t57 != 288217192290561540LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x2977 = 159;
	int8_t x2978 = INT8_MIN;
	int64_t x2979 = 5LL;
	static int64_t x2980 = INT64_MAX;
	volatile int64_t t58 = 0LL;

	t58 = (((x2977-x2978)<<x2979)-x2980);

	if (t58 != -9223372036854766623LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2993 = 13U;
	int8_t x2994 = 1;
	volatile uint16_t x2995 = 12U;
	static int32_t x2996 = -1;
	int32_t t59 = -5;

	t59 = (((x2993-x2994)<<x2995)-x2996);

	if (t59 != 49153) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x3017 = 505U;
	volatile int32_t x3018 = INT32_MAX;
	volatile int16_t x3019 = 1;
	uint16_t x3020 = 1220U;

	t60 = (((x3017-x3018)<<x3019)-x3020);

	if (t60 != 4294967088U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3073 = 7U;
	int8_t x3075 = 1;
	static int32_t x3076 = -1;
	int32_t t61 = -9;

	t61 = (((x3073-x3074)<<x3075)-x3076);

	if (t61 != 271) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3081 = 10729399889117343LL;
	uint64_t x3082 = UINT64_MAX;
	uint8_t x3083 = 1U;
	int32_t x3084 = 3;
	volatile uint64_t t62 = 85161326971743925LLU;

	t62 = (((x3081-x3082)<<x3083)-x3084);

	if (t62 != 21458799778234685LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3097 = 927;
	volatile uint64_t x3098 = 2385166LLU;
	int32_t x3099 = 0;
	int8_t x3100 = 1;
	volatile uint64_t t63 = 618LLU;

	t63 = (((x3097-x3098)<<x3099)-x3100);

	if (t63 != 18446744073707167376LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x3150 = INT8_MAX;
	int32_t x3152 = INT32_MIN;
	volatile uint64_t t64 = 9326953LLU;

	t64 = (((x3149-x3150)<<x3151)-x3152);

	if (t64 != 2147483520LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x3154 = 25;
	static uint16_t x3155 = 3U;
	volatile int32_t t65 = 4;

	t65 = (((x3153-x3154)<<x3155)-x3156);

	if (t65 != 112) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3165 = UINT64_MAX;
	static int16_t x3166 = INT16_MIN;
	uint8_t x3167 = 0U;
	static volatile uint64_t x3168 = UINT64_MAX;

	t66 = (((x3165-x3166)<<x3167)-x3168);

	if (t66 != 32768LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3201 = 6820U;
	int16_t x3202 = INT16_MIN;
	uint8_t x3203 = 14U;
	volatile int32_t t67 = 6045983;

	t67 = (((x3201-x3202)<<x3203)-x3204);

	if (t67 != 648609734) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3253 = 0U;
	int64_t x3254 = -32827552622802280LL;
	static int8_t x3255 = 5;
	int64_t x3256 = 2963LL;
	volatile int64_t t68 = -37LL;

	t68 = (((x3253-x3254)<<x3255)-x3256);

	if (t68 != 1050481683929669997LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3293 = INT32_MAX;
	volatile int64_t x3294 = -1LL;
	int16_t x3295 = 26;
	static int16_t x3296 = INT16_MAX;
	int64_t t69 = -1123838495197997LL;

	t69 = (((x3293-x3294)<<x3295)-x3296);

	if (t69 != 144115188075823105LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x3346 = 0U;
	static int64_t x3347 = 0LL;
	int16_t x3348 = INT16_MAX;
	volatile int32_t t70 = 0;

	t70 = (((x3345-x3346)<<x3347)-x3348);

	if (t70 != -32753) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3369 = INT8_MAX;
	int8_t x3370 = INT8_MAX;
	volatile uint32_t x3372 = 3U;

	t71 = (((x3369-x3370)<<x3371)-x3372);

	if (t71 != 4294967293U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3433 = -1LL;
	int16_t x3434 = -64;
	int8_t x3435 = 18;
	volatile int64_t t72 = 2186864800702702LL;

	t72 = (((x3433-x3434)<<x3435)-x3436);

	if (t72 != 16515073LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3478 = -1LL;
	int32_t x3480 = INT32_MIN;
	int64_t t73 = -3180533184170857LL;

	t73 = (((x3477-x3478)<<x3479)-x3480);

	if (t73 != 2147483672LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x3493 = 6150180190LLU;
	uint64_t x3494 = 0LLU;
	volatile uint64_t t74 = 33709186808LLU;

	t74 = (((x3493-x3494)<<x3495)-x3496);

	if (t74 != 806116417863425LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3713 = INT8_MIN;
	static volatile uint64_t x3714 = 5749080887001LLU;
	uint8_t x3715 = 4U;
	uint64_t x3716 = UINT64_MAX;
	volatile uint64_t t75 = 7118322745LLU;

	t75 = (((x3713-x3714)<<x3715)-x3716);

	if (t75 != 18446652088415357553LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x3730 = 2486U;
	uint8_t x3731 = 8U;
	uint16_t x3732 = UINT16_MAX;
	static uint32_t t76 = 22137910U;

	t76 = (((x3729-x3730)<<x3731)-x3732);

	if (t76 != 4294012417U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3761 = -1LL;
	uint64_t x3762 = UINT64_MAX;
	uint16_t x3763 = 2U;
	int64_t x3764 = -6685250917099LL;
	static volatile uint64_t t77 = 110LLU;

	t77 = (((x3761-x3762)<<x3763)-x3764);

	if (t77 != 6685250917099LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x3865 = INT8_MIN;
	volatile uint32_t x3866 = 57603U;
	int8_t x3867 = 7;
	int32_t x3868 = INT32_MAX;
	uint32_t t78 = 52274U;

	t78 = (((x3865-x3866)<<x3867)-x3868);

	if (t78 != 2140094081U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3973 = 1515;
	uint16_t x3975 = 3U;
	volatile int32_t x3976 = -1;
	volatile int32_t t79 = -640457;

	t79 = (((x3973-x3974)<<x3975)-x3976);

	if (t79 != 12121) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x4037 = INT16_MAX;
	int32_t x4038 = -1;
	int8_t x4039 = 10;
	uint32_t t80 = 1U;

	t80 = (((x4037-x4038)<<x4039)-x4040);

	if (t80 != 22345197U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4073 = INT8_MAX;
	static volatile int64_t x4074 = -1LL;
	uint16_t x4075 = 47U;
	uint16_t x4076 = 28U;
	int64_t t81 = -27471991829787LL;

	t81 = (((x4073-x4074)<<x4075)-x4076);

	if (t81 != 18014398509481956LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4082 = -1LL;
	uint32_t x4083 = 6U;
	uint64_t x4084 = 3313226LLU;
	uint64_t t82 = 127530931735427986LLU;

	t82 = (((x4081-x4082)<<x4083)-x4084);

	if (t82 != 114242785910LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4109 = -1LL;
	static uint64_t x4112 = UINT64_MAX;
	static uint64_t t83 = 1802551749891431856LLU;

	t83 = (((x4109-x4110)<<x4111)-x4112);

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4157 = UINT8_MAX;
	uint32_t x4158 = UINT32_MAX;
	uint16_t x4159 = 15U;
	volatile uint32_t t84 = 66U;

	t84 = (((x4157-x4158)<<x4159)-x4160);

	if (t84 != 8421376U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x4189 = 184333325718059LL;
	int8_t x4190 = INT8_MAX;
	volatile uint16_t x4192 = UINT16_MAX;

	t85 = (((x4189-x4190)<<x4191)-x4192);

	if (t85 != 368666651370329LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4233 = -36959;
	static uint32_t x4234 = 6153U;
	static uint16_t x4235 = 11U;
	uint64_t x4236 = 30181119477431LLU;
	uint64_t t86 = 58147920LLU;

	t86 = (((x4233-x4234)<<x4235)-x4236);

	if (t86 != 18446713896796748105LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x4265 = 20U;
	volatile int8_t x4266 = INT8_MIN;
	uint8_t x4267 = 15U;
	uint64_t t87 = 24753325686019750LLU;

	t87 = (((x4265-x4266)<<x4267)-x4268);

	if (t87 != 18446744065118813358LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x4277 = 0U;
	int16_t x4278 = -1;
	int32_t x4279 = 0;
	static uint32_t x4280 = UINT32_MAX;
	static volatile uint32_t t88 = 24785U;

	t88 = (((x4277-x4278)<<x4279)-x4280);

	if (t88 != 2U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4289 = 779029506017209071LL;
	uint32_t x4290 = UINT32_MAX;
	int8_t x4291 = 0;
	int16_t x4292 = INT16_MAX;

	t89 = (((x4289-x4290)<<x4291)-x4292);

	if (t89 != 779029501722209009LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x4398 = -1;
	int64_t x4400 = 1LL;

	t90 = (((x4397-x4398)<<x4399)-x4400);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x4450 = INT8_MIN;
	uint8_t x4451 = 1U;
	volatile int32_t x4452 = -1;
	int32_t t91 = 6025707;

	t91 = (((x4449-x4450)<<x4451)-x4452);

	if (t91 != 265) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x4546 = UINT64_MAX;
	volatile int8_t x4547 = 10;
	volatile uint8_t x4548 = 2U;
	uint64_t t92 = 123396713601LLU;

	t92 = (((x4545-x4546)<<x4547)-x4548);

	if (t92 != 1042352787454LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4654 = INT8_MIN;
	static uint16_t x4655 = 16U;
	volatile uint8_t x4656 = UINT8_MAX;

	t93 = (((x4653-x4654)<<x4655)-x4656);

	if (t93 != 8453889) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x4677 = 467181356U;
	uint16_t x4678 = 10U;
	uint8_t x4679 = 1U;
	static uint8_t x4680 = 3U;
	volatile uint32_t t94 = 719310U;

	t94 = (((x4677-x4678)<<x4679)-x4680);

	if (t94 != 934362689U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4777 = 2432077645666682LL;
	static uint32_t x4778 = 26U;
	int8_t x4779 = 0;
	uint32_t x4780 = 1054U;
	int64_t t95 = -31853189LL;

	t95 = (((x4777-x4778)<<x4779)-x4780);

	if (t95 != 2432077645665602LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x4809 = -1;
	static volatile int8_t x4810 = -2;
	int8_t x4811 = 12;
	static volatile int32_t t96 = -4505;

	t96 = (((x4809-x4810)<<x4811)-x4812);

	if (t96 != -2147479551) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x4839 = 0U;
	uint32_t x4840 = 437082344U;
	int64_t t97 = 1187665524161009LL;

	t97 = (((x4837-x4838)<<x4839)-x4840);

	if (t97 != -437082344LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x5109 = INT64_MIN;
	uint64_t x5110 = UINT64_MAX;
	static volatile uint64_t t98 = 602663112LLU;

	t98 = (((x5109-x5110)<<x5111)-x5112);

	if (t98 != 2097150LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5133 = 14;
	static uint32_t x5134 = UINT32_MAX;
	static int16_t x5136 = INT16_MAX;
	uint32_t t99 = 618U;

	t99 = (((x5133-x5134)<<x5135)-x5136);

	if (t99 != 15695873U) { NG(); } else { ; }
	
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


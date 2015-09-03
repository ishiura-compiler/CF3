#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x86 = -1LL;
int16_t x87 = INT16_MAX;
static int64_t t1 = 51377519252LL;
int32_t t3 = 0;
uint64_t x217 = UINT64_MAX;
static uint64_t t5 = 20655861256LLU;
static int32_t t6 = -2654356;
uint8_t x273 = UINT8_MAX;
volatile uint8_t x276 = 1U;
volatile uint64_t x347 = 168LLU;
static volatile uint64_t t8 = 687189646681041LLU;
int32_t x462 = INT32_MIN;
static int64_t x519 = -1LL;
int64_t x594 = -1LL;
volatile int64_t x595 = -1074742586345LL;
uint8_t x596 = 1U;
int8_t x616 = 1;
int16_t x618 = -1;
volatile uint32_t x620 = 0U;
volatile int16_t x632 = 1;
static volatile uint8_t x653 = 43U;
int32_t t16 = 120;
int8_t x667 = INT8_MAX;
int32_t t17 = -193;
volatile int32_t x705 = 158790738;
volatile uint64_t x761 = UINT64_MAX;
uint64_t x786 = 31091943566721057LLU;
uint64_t t21 = 13075272879313LLU;
int16_t x905 = INT16_MAX;
uint64_t x919 = UINT64_MAX;
volatile int64_t x1041 = INT64_MAX;
volatile uint16_t x1042 = 12440U;
int64_t t25 = -1657326730376256204LL;
int32_t x1118 = 3493;
uint64_t x1125 = UINT64_MAX;
int16_t x1127 = INT16_MAX;
uint64_t x1222 = 61449694229240LLU;
uint32_t x1247 = 349U;
static int64_t x1248 = 0LL;
int64_t x1287 = 7311LL;
static int64_t t32 = -10677925LL;
static int16_t x1419 = INT16_MIN;
volatile int32_t t33 = 7022298;
uint32_t x1462 = 22468496U;
int16_t x1463 = -60;
static uint8_t x1464 = 2U;
int16_t x1566 = INT16_MIN;
uint8_t x1567 = UINT8_MAX;
int64_t x1609 = 64626064844786360LL;
int32_t x1610 = -321;
uint8_t x1612 = 0U;
static volatile int8_t x1650 = INT8_MAX;
volatile uint64_t t41 = 2092543827823LLU;
int16_t x1734 = INT16_MIN;
uint64_t x1755 = UINT64_MAX;
static int16_t x1789 = INT16_MIN;
int32_t x1791 = -1;
static uint64_t x1807 = 2452189754662402LLU;
int8_t x1853 = -1;
int16_t x1854 = 124;
static int8_t x1960 = 1;
volatile int8_t x1974 = -7;
uint8_t x1976 = 0U;
uint16_t x1983 = UINT16_MAX;
volatile uint32_t x2001 = 1893943347U;
volatile uint32_t x2002 = 23U;
volatile uint64_t x2003 = 4181998925981339275LLU;
static uint64_t t51 = 36353833180365876LLU;
static volatile int64_t x2090 = -1163LL;
volatile int64_t t52 = -56LL;
static int8_t x2153 = INT8_MIN;
static uint64_t x2154 = UINT64_MAX;
int64_t x2321 = INT64_MAX;
volatile int64_t x2323 = INT64_MAX;
volatile uint16_t x2350 = 46U;
uint16_t x2449 = 492U;
int16_t x2450 = -1;
int16_t x2453 = INT16_MAX;
uint64_t x2515 = UINT64_MAX;
static int64_t x2657 = -883813218973127LL;
int8_t x2659 = -1;
int8_t x2693 = INT8_MAX;
int64_t x2694 = -796433332556763860LL;
static int64_t t67 = -376131924365450609LL;
static volatile int64_t x2749 = -1184380674269100260LL;
static volatile int64_t t70 = -4LL;
static uint8_t x2832 = 0U;
int16_t x2872 = 0;
uint32_t x2884 = 48U;
int8_t x2897 = 0;
volatile int8_t x2899 = INT8_MIN;
uint16_t x2908 = 2U;
int64_t x3125 = INT64_MIN;
static volatile uint8_t x3128 = 5U;
int64_t t79 = -28384LL;
uint64_t x3137 = UINT64_MAX;
int32_t x3157 = 32579547;
int8_t x3160 = 1;
uint32_t x3173 = 4991605U;
static int16_t x3210 = INT16_MIN;
uint64_t t85 = 85638429136745LLU;
int64_t x3311 = INT64_MAX;
int8_t x3312 = 1;
int64_t t89 = -591945LL;
int32_t x3333 = INT32_MIN;
static int8_t x3335 = -4;
static int64_t t91 = 398703447653LL;
static int16_t x3354 = INT16_MIN;
static volatile uint16_t x3356 = 0U;
int32_t t93 = 6;
uint64_t t94 = 69LLU;
int64_t x3425 = INT64_MIN;
static int16_t x3449 = 2116;
uint16_t x3450 = 13309U;
int8_t x3518 = INT8_MIN;
uint8_t x3520 = 32U;


void f0(void) {
	int64_t x37 = -111LL;
	int64_t x38 = INT64_MAX;
	uint64_t x39 = 3LLU;
	int32_t x40 = 17;
	uint64_t t0 = 71057165573529969LLU;

	t0 = ((x37&(x38^x39))<<x40);

	if (t0 != 18446744073694871552LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x85 = INT64_MAX;
	uint8_t x88 = 0U;

	t1 = ((x85&(x86^x87))<<x88);

	if (t1 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x93 = INT16_MIN;
	uint64_t x94 = 4751LLU;
	int16_t x95 = INT16_MIN;
	int8_t x96 = 26;
	volatile uint64_t t2 = 0LLU;

	t2 = ((x93&(x94^x95))<<x96);

	if (t2 != 18446741874686296064LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x117 = 2U;
	int32_t x118 = INT32_MIN;
	int16_t x119 = INT16_MIN;
	int8_t x120 = 23;

	t3 = ((x117&(x118^x119))<<x120);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x193 = 4820203U;
	int32_t x194 = INT32_MAX;
	volatile int64_t x195 = 217648LL;
	static uint8_t x196 = 3U;
	volatile int64_t t4 = -3293639LL;

	t4 = ((x193&(x194^x195))<<x196);

	if (t4 != 38037080LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x218 = 1LLU;
	volatile int64_t x219 = INT64_MIN;
	uint16_t x220 = 49U;

	t5 = ((x217&(x218^x219))<<x220);

	if (t5 != 562949953421312LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x229 = 1U;
	static int8_t x230 = INT8_MAX;
	int8_t x231 = INT8_MAX;
	int64_t x232 = 5LL;

	t6 = ((x229&(x230^x231))<<x232);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MIN;
	int32_t t7 = 165136444;

	t7 = ((x273&(x274^x275))<<x276);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x345 = INT64_MIN;
	static int32_t x346 = -50797753;
	uint8_t x348 = 0U;

	t8 = ((x345&(x346^x347))<<x348);

	if (t8 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x461 = INT64_MIN;
	static int32_t x463 = -1;
	uint32_t x464 = 25U;
	static int64_t t9 = -104LL;

	t9 = ((x461&(x462^x463))<<x464);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x517 = INT16_MAX;
	static int8_t x518 = -34;
	int8_t x520 = 10;
	static int64_t t10 = 2312551LL;

	t10 = ((x517&(x518^x519))<<x520);

	if (t10 != 33792LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x525 = 0;
	static volatile int32_t x526 = INT32_MIN;
	int8_t x527 = INT8_MIN;
	uint8_t x528 = 4U;
	static volatile int32_t t11 = -995005;

	t11 = ((x525&(x526^x527))<<x528);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x593 = 9;
	int64_t t12 = 35658254LL;

	t12 = ((x593&(x594^x595))<<x596);

	if (t12 != 16LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x613 = 24U;
	int32_t x614 = INT32_MIN;
	int8_t x615 = INT8_MIN;
	int32_t t13 = -1;

	t13 = ((x613&(x614^x615))<<x616);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x617 = 79249769U;
	int32_t x619 = INT32_MIN;
	uint32_t t14 = 1U;

	t14 = ((x617&(x618^x619))<<x620);

	if (t14 != 79249769U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x629 = UINT8_MAX;
	int64_t x630 = INT64_MAX;
	int32_t x631 = INT32_MAX;
	volatile int64_t t15 = -11958788730088LL;

	t15 = ((x629&(x630^x631))<<x632);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x654 = 29209659;
	static int16_t x655 = INT16_MAX;
	int8_t x656 = 0;

	t16 = ((x653&(x654^x655))<<x656);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x665 = -1;
	int32_t x666 = 40230971;
	int16_t x668 = 3;

	t17 = ((x665&(x666^x667))<<x668);

	if (t17 != 321847840) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x706 = 112U;
	int8_t x707 = 9;
	uint8_t x708 = 16U;
	int32_t t18 = -412203;

	t18 = ((x705&(x706^x707))<<x708);

	if (t18 != 5242880) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x762 = 4U;
	uint8_t x763 = 0U;
	int32_t x764 = 0;
	static uint64_t t19 = 90LLU;

	t19 = ((x761&(x762^x763))<<x764);

	if (t19 != 4LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x785 = INT16_MIN;
	int16_t x787 = -1;
	int16_t x788 = 1;
	static uint64_t t20 = 68125991025LLU;

	t20 = ((x785&(x786^x787))<<x788);

	if (t20 != 18384560186576076800LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x793 = INT8_MIN;
	static int8_t x794 = 0;
	volatile uint64_t x795 = UINT64_MAX;
	static volatile int8_t x796 = 2;

	t21 = ((x793&(x794^x795))<<x796);

	if (t21 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x906 = INT16_MIN;
	int8_t x907 = -1;
	int16_t x908 = 1;
	static volatile int32_t t22 = 6;

	t22 = ((x905&(x906^x907))<<x908);

	if (t22 != 65534) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x917 = 1;
	static volatile int32_t x918 = INT32_MIN;
	int8_t x920 = 8;
	uint64_t t23 = 0LLU;

	t23 = ((x917&(x918^x919))<<x920);

	if (t23 != 256LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x985 = 707642676604631LL;
	int64_t x986 = 273618951450LL;
	int32_t x987 = INT32_MIN;
	volatile int16_t x988 = 1;
	volatile int64_t t24 = 1449868080LL;

	t24 = ((x985&(x986^x987))<<x988);

	if (t24 != 1415072684152868LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1043 = 14051U;
	uint8_t x1044 = 7U;

	t25 = ((x1041&(x1042^x1043))<<x1044);

	if (t25 != 212352LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1097 = 399320U;
	int32_t x1098 = INT32_MIN;
	int16_t x1099 = 7737;
	volatile int16_t x1100 = 3;
	static uint32_t t26 = 14702U;

	t26 = ((x1097&(x1098^x1099))<<x1100);

	if (t26 != 45248U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1117 = 105U;
	int8_t x1119 = INT8_MIN;
	uint8_t x1120 = 7U;
	int32_t t27 = -1;

	t27 = ((x1117&(x1118^x1119))<<x1120);

	if (t27 != 4224) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1126 = INT16_MAX;
	int16_t x1128 = 1;
	uint64_t t28 = 825884966912LLU;

	t28 = ((x1125&(x1126^x1127))<<x1128);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1221 = INT32_MIN;
	int8_t x1223 = INT8_MAX;
	uint8_t x1224 = 9U;
	volatile uint64_t t29 = 22391LLU;

	t29 = ((x1221&(x1222^x1223))<<x1224);

	if (t29 != 31461425717182464LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x1245 = INT32_MIN;
	static volatile int32_t x1246 = 11431660;
	static uint32_t t30 = 902070929U;

	t30 = ((x1245&(x1246^x1247))<<x1248);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1269 = 1;
	int32_t x1270 = 476182391;
	static volatile int8_t x1271 = -1;
	int32_t x1272 = 0;
	static volatile int32_t t31 = -1077072;

	t31 = ((x1269&(x1270^x1271))<<x1272);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1285 = INT64_MAX;
	int64_t x1286 = 51013666LL;
	uint8_t x1288 = 2U;

	t32 = ((x1285&(x1286^x1287))<<x1288);

	if (t32 != 204067508LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1417 = 1782U;
	static int16_t x1418 = -1;
	uint8_t x1420 = 1U;

	t33 = ((x1417&(x1418^x1419))<<x1420);

	if (t33 != 3564) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1433 = -23638;
	static uint64_t x1434 = UINT64_MAX;
	uint64_t x1435 = UINT64_MAX;
	volatile uint8_t x1436 = 24U;
	uint64_t t34 = 2854328793720LLU;

	t34 = ((x1433&(x1434^x1435))<<x1436);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x1461 = 41077718036308LL;
	int64_t t35 = -350901393481296LL;

	t35 = ((x1461&(x1462^x1463))<<x1464);

	if (t35 != 2585829712LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1545 = 29U;
	int32_t x1546 = INT32_MIN;
	int64_t x1547 = INT64_MIN;
	uint8_t x1548 = 31U;
	int64_t t36 = -220896351LL;

	t36 = ((x1545&(x1546^x1547))<<x1548);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x1565 = 762505872947032LL;
	uint16_t x1568 = 0U;
	int64_t t37 = 569380994632975LL;

	t37 = ((x1565&(x1566^x1567))<<x1568);

	if (t37 != 762505872932952LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x1611 = UINT64_MAX;
	volatile uint64_t t38 = 255044823800897741LLU;

	t38 = ((x1609&(x1610^x1611))<<x1612);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1649 = 4;
	int8_t x1651 = -1;
	uint32_t x1652 = 0U;
	static volatile int32_t t39 = -2;

	t39 = ((x1649&(x1650^x1651))<<x1652);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x1677 = UINT64_MAX;
	uint32_t x1678 = 12486980U;
	int16_t x1679 = 0;
	uint64_t x1680 = 14LLU;
	static volatile uint64_t t40 = 2793891578868123LLU;

	t40 = ((x1677&(x1678^x1679))<<x1680);

	if (t40 != 204586680320LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1693 = 8080424955LLU;
	int32_t x1694 = INT32_MIN;
	static int8_t x1695 = 4;
	uint8_t x1696 = 3U;

	t41 = ((x1693&(x1694^x1695))<<x1696);

	if (t41 != 51539607552LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1733 = 2U;
	int16_t x1735 = 248;
	uint32_t x1736 = 5U;
	int32_t t42 = 948786;

	t42 = ((x1733&(x1734^x1735))<<x1736);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1753 = 5244506;
	int64_t x1754 = INT64_MIN;
	int8_t x1756 = 0;
	volatile uint64_t t43 = 31LLU;

	t43 = ((x1753&(x1754^x1755))<<x1756);

	if (t43 != 5244506LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x1790 = INT8_MIN;
	uint16_t x1792 = 23U;
	int32_t t44 = 14519;

	t44 = ((x1789&(x1790^x1791))<<x1792);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x1805 = INT64_MIN;
	uint64_t x1806 = 294302927866487LLU;
	static volatile int64_t x1808 = 20LL;
	volatile uint64_t t45 = 5335860LLU;

	t45 = ((x1805&(x1806^x1807))<<x1808);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1855 = 39;
	uint8_t x1856 = 23U;
	volatile int32_t t46 = 232229788;

	t46 = ((x1853&(x1854^x1855))<<x1856);

	if (t46 != 763363328) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1925 = 1U;
	volatile uint8_t x1926 = UINT8_MAX;
	static volatile int8_t x1927 = -13;
	uint8_t x1928 = 1U;
	int32_t t47 = -54;

	t47 = ((x1925&(x1926^x1927))<<x1928);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1957 = UINT8_MAX;
	volatile int32_t x1958 = INT32_MIN;
	static uint16_t x1959 = 2U;
	int32_t t48 = 23927;

	t48 = ((x1957&(x1958^x1959))<<x1960);

	if (t48 != 4) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1973 = -527869093;
	int16_t x1975 = -1;
	volatile int32_t t49 = 5296;

	t49 = ((x1973&(x1974^x1975))<<x1976);

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x1981 = 2;
	int64_t x1982 = INT64_MAX;
	static uint16_t x1984 = 35U;
	volatile int64_t t50 = 25176535491LL;

	t50 = ((x1981&(x1982^x1983))<<x1984);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2004 = 0;

	t51 = ((x2001&(x2002^x2003))<<x2004);

	if (t51 != 807553040LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2089 = UINT16_MAX;
	int8_t x2091 = -16;
	volatile uint8_t x2092 = 4U;

	t52 = ((x2089&(x2090^x2091))<<x2092);

	if (t52 != 18512LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x2093 = INT32_MAX;
	int32_t x2094 = 85802;
	volatile int16_t x2095 = INT16_MAX;
	static int8_t x2096 = 0;
	int32_t t53 = -10269802;

	t53 = ((x2093&(x2094^x2095))<<x2096);

	if (t53 != 78037) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2105 = INT8_MAX;
	volatile uint8_t x2106 = UINT8_MAX;
	static int64_t x2107 = INT64_MAX;
	uint16_t x2108 = 1U;
	int64_t t54 = -1216005LL;

	t54 = ((x2105&(x2106^x2107))<<x2108);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x2113 = INT8_MIN;
	int32_t x2114 = -1;
	int16_t x2115 = INT16_MIN;
	uint8_t x2116 = 1U;
	volatile int32_t t55 = -57;

	t55 = ((x2113&(x2114^x2115))<<x2116);

	if (t55 != 65280) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2155 = -1;
	static uint8_t x2156 = 0U;
	uint64_t t56 = 5LLU;

	t56 = ((x2153&(x2154^x2155))<<x2156);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x2185 = -1LL;
	uint16_t x2186 = 1U;
	volatile uint64_t x2187 = 1LLU;
	uint8_t x2188 = 44U;
	uint64_t t57 = 21409290543712249LLU;

	t57 = ((x2185&(x2186^x2187))<<x2188);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x2322 = 6428779487784LLU;
	static int32_t x2324 = 3;
	uint64_t t58 = 2636438139807LLU;

	t58 = ((x2321&(x2322^x2323))<<x2324);

	if (t58 != 18446692643473649336LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x2325 = 126623635U;
	static int64_t x2326 = -1LL;
	volatile int8_t x2327 = 34;
	int8_t x2328 = 2;
	static volatile int64_t t59 = 0LL;

	t59 = ((x2325&(x2326^x2327))<<x2328);

	if (t59 != 506494532LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x2349 = UINT8_MAX;
	int32_t x2351 = INT32_MIN;
	int8_t x2352 = 21;
	int32_t t60 = -1;

	t60 = ((x2349&(x2350^x2351))<<x2352);

	if (t60 != 96468992) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x2361 = 1;
	uint64_t x2362 = UINT64_MAX;
	volatile int64_t x2363 = 95LL;
	uint16_t x2364 = 61U;
	uint64_t t61 = 97394LLU;

	t61 = ((x2361&(x2362^x2363))<<x2364);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2451 = 207202LLU;
	uint8_t x2452 = 4U;
	uint64_t t62 = 2020952395300LLU;

	t62 = ((x2449&(x2450^x2451))<<x2452);

	if (t62 != 2240LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x2454 = 2U;
	int8_t x2455 = -1;
	uint8_t x2456 = 4U;
	static volatile int32_t t63 = -1014;

	t63 = ((x2453&(x2454^x2455))<<x2456);

	if (t63 != 524240) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x2513 = -1;
	volatile uint64_t x2514 = 55378819431909710LLU;
	int8_t x2516 = 1;
	uint64_t t64 = 14611675428908LLU;

	t64 = ((x2513&(x2514^x2515))<<x2516);

	if (t64 != 18335986434845732194LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x2609 = 0;
	int64_t x2610 = -7337468009136509LL;
	static int16_t x2611 = -2036;
	uint16_t x2612 = 1U;
	static int64_t t65 = 3482098593640672LL;

	t65 = ((x2609&(x2610^x2611))<<x2612);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2658 = -1LL;
	static uint8_t x2660 = 3U;
	int64_t t66 = -5086218784LL;

	t66 = ((x2657&(x2658^x2659))<<x2660);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2695 = INT16_MAX;
	volatile uint8_t x2696 = 0U;

	t67 = ((x2693&(x2694^x2695))<<x2696);

	if (t67 != 83LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x2709 = INT8_MAX;
	int32_t x2710 = INT32_MIN;
	volatile int16_t x2711 = INT16_MAX;
	uint8_t x2712 = 8U;
	static int32_t t68 = -77;

	t68 = ((x2709&(x2710^x2711))<<x2712);

	if (t68 != 32512) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2737 = UINT16_MAX;
	int64_t x2738 = 36044209557235601LL;
	int16_t x2739 = INT16_MIN;
	uint8_t x2740 = 1U;
	int64_t t69 = -68LL;

	t69 = ((x2737&(x2738^x2739))<<x2740);

	if (t69 != 118562LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x2750 = 57U;
	int16_t x2751 = -382;
	static uint8_t x2752 = 19U;

	t70 = ((x2749&(x2750^x2751))<<x2752);

	if (t70 != 627624388853760LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x2809 = 146;
	uint8_t x2810 = 26U;
	uint64_t x2811 = 4909843961LLU;
	uint16_t x2812 = 0U;
	volatile uint64_t t71 = 11679LLU;

	t71 = ((x2809&(x2810^x2811))<<x2812);

	if (t71 != 130LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2829 = INT8_MIN;
	uint16_t x2830 = 4U;
	int32_t x2831 = 1343;
	int32_t t72 = 208;

	t72 = ((x2829&(x2830^x2831))<<x2832);

	if (t72 != 1280) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x2869 = 9296U;
	uint16_t x2870 = 11U;
	int32_t x2871 = INT32_MIN;
	int32_t t73 = 1;

	t73 = ((x2869&(x2870^x2871))<<x2872);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x2881 = UINT8_MAX;
	uint64_t x2882 = UINT64_MAX;
	int32_t x2883 = -1;
	uint64_t t74 = 8384496277948304710LLU;

	t74 = ((x2881&(x2882^x2883))<<x2884);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x2898 = INT16_MIN;
	uint64_t x2900 = 5LLU;
	volatile int32_t t75 = 1105604;

	t75 = ((x2897&(x2898^x2899))<<x2900);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2905 = INT16_MAX;
	int64_t x2906 = INT64_MAX;
	static int8_t x2907 = INT8_MAX;
	int64_t t76 = 8245053155971822LL;

	t76 = ((x2905&(x2906^x2907))<<x2908);

	if (t76 != 130560LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x2965 = -2390926621444297519LL;
	int64_t x2966 = INT64_MAX;
	int32_t x2967 = 228;
	volatile int8_t x2968 = 0;
	static volatile int64_t t77 = -4866148746LL;

	t77 = ((x2965&(x2966^x2967))<<x2968);

	if (t77 != 6832445415410478097LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x2985 = INT64_MIN;
	uint64_t x2986 = 226LLU;
	uint64_t x2987 = 1703400890143605LLU;
	int16_t x2988 = 3;
	uint64_t t78 = 2LLU;

	t78 = ((x2985&(x2986^x2987))<<x2988);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x3126 = 166842678154LL;
	int64_t x3127 = INT64_MAX;

	t79 = ((x3125&(x3126^x3127))<<x3128);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3138 = -44;
	volatile int8_t x3139 = INT8_MIN;
	volatile int16_t x3140 = 6;
	volatile uint64_t t80 = 291065420LLU;

	t80 = ((x3137&(x3138^x3139))<<x3140);

	if (t80 != 5376LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x3158 = 272303172288838417LLU;
	int8_t x3159 = INT8_MIN;
	uint64_t t81 = 732878150LLU;

	t81 = ((x3157&(x3158^x3159))<<x3160);

	if (t81 != 16910626LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3174 = -1;
	int64_t x3175 = -76LL;
	uint8_t x3176 = 3U;
	int64_t t82 = -289LL;

	t82 = ((x3173&(x3174^x3175))<<x3176);

	if (t82 != 520LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x3209 = 116;
	int64_t x3211 = INT64_MAX;
	static uint16_t x3212 = 3U;
	volatile int64_t t83 = 0LL;

	t83 = ((x3209&(x3210^x3211))<<x3212);

	if (t83 != 928LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x3213 = INT32_MIN;
	volatile uint16_t x3214 = 150U;
	volatile uint64_t x3215 = 2033259894LLU;
	uint32_t x3216 = 47U;
	volatile uint64_t t84 = 4899903137LLU;

	t84 = ((x3213&(x3214^x3215))<<x3216);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x3217 = INT64_MIN;
	volatile uint64_t x3218 = 2350LLU;
	int32_t x3219 = -1;
	volatile uint8_t x3220 = 6U;

	t85 = ((x3217&(x3218^x3219))<<x3220);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x3269 = 0;
	uint16_t x3270 = 86U;
	volatile uint64_t x3271 = 38606626740265LLU;
	volatile uint8_t x3272 = 3U;
	static uint64_t t86 = 51LLU;

	t86 = ((x3269&(x3270^x3271))<<x3272);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3273 = 18;
	static int32_t x3274 = 23945810;
	volatile uint64_t x3275 = UINT64_MAX;
	uint16_t x3276 = 10U;
	volatile uint64_t t87 = 34680757LLU;

	t87 = ((x3273&(x3274^x3275))<<x3276);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x3305 = 108U;
	int32_t x3306 = INT32_MIN;
	int16_t x3307 = INT16_MAX;
	uint8_t x3308 = 0U;
	static int32_t t88 = -200;

	t88 = ((x3305&(x3306^x3307))<<x3308);

	if (t88 != 108) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3309 = 4;
	int8_t x3310 = -55;

	t89 = ((x3309&(x3310^x3311))<<x3312);

	if (t89 != 8LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x3334 = -63595LL;
	volatile int32_t x3336 = 4;
	volatile int64_t t90 = 1307753402735528417LL;

	t90 = ((x3333&(x3334^x3335))<<x3336);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3341 = 6399;
	int32_t x3342 = INT32_MAX;
	int64_t x3343 = -1LL;
	uint16_t x3344 = 49U;

	t91 = ((x3341&(x3342^x3343))<<x3344);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x3345 = INT64_MIN;
	uint32_t x3346 = UINT32_MAX;
	int32_t x3347 = INT32_MIN;
	uint32_t x3348 = 28U;
	volatile int64_t t92 = -1LL;

	t92 = ((x3345&(x3346^x3347))<<x3348);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x3353 = -1018539236;
	static int32_t x3355 = INT32_MIN;

	t93 = ((x3353&(x3354^x3355))<<x3356);

	if (t93 != 1128923136) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x3361 = -1LL;
	uint64_t x3362 = UINT64_MAX;
	int16_t x3363 = INT16_MAX;
	uint16_t x3364 = 59U;

	t94 = ((x3361&(x3362^x3363))<<x3364);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3426 = INT16_MIN;
	int64_t x3427 = INT64_MIN;
	static volatile uint8_t x3428 = 25U;
	volatile int64_t t95 = -200727695LL;

	t95 = ((x3425&(x3426^x3427))<<x3428);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3451 = INT8_MAX;
	int8_t x3452 = 7;
	volatile int32_t t96 = -2015;

	t96 = ((x3449&(x3450^x3451))<<x3452);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x3457 = 4365307188090346718LLU;
	uint16_t x3458 = 1U;
	static volatile int8_t x3459 = -12;
	static int32_t x3460 = 51;
	uint64_t t97 = 546LLU;

	t97 = ((x3457&(x3458^x3459))<<x3460);

	if (t97 != 16618282624997130240LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x3505 = INT8_MIN;
	volatile uint32_t x3506 = UINT32_MAX;
	uint64_t x3507 = 401524380435LLU;
	static uint8_t x3508 = 24U;
	volatile uint64_t t98 = 1013837061745816LLU;

	t98 = ((x3505&(x3506^x3507))<<x3508);

	if (t98 != 6738308823439638528LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x3517 = 506U;
	int64_t x3519 = 55LL;
	int64_t t99 = -278625531820343108LL;

	t99 = ((x3517&(x3518^x3519))<<x3520);

	if (t99 != 1864015806464LL) { NG(); } else { ; }
	
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


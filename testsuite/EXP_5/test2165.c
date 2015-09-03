#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = -1;
int64_t x12 = -1548324312754306629LL;
volatile uint8_t x48 = 8U;
int32_t x119 = -1;
int8_t x120 = 13;
int32_t x133 = 209163982;
int32_t x146 = -15;
volatile uint64_t t6 = UINT64_MAX;
static int64_t x150 = 3LL;
static int64_t x152 = INT64_MIN;
static volatile uint64_t t8 = UINT64_MAX;
uint32_t x202 = UINT32_MAX;
volatile uint64_t t12 = UINT64_MAX;
uint8_t x270 = 46U;
volatile int16_t x273 = 5099;
volatile uint8_t x275 = 31U;
uint64_t x276 = 8LLU;
int32_t t14 = 333520;
int64_t x324 = INT64_MIN;
uint8_t x353 = 3U;
uint16_t x384 = 501U;
static volatile uint32_t t19 = 17U;
static uint32_t x409 = 122U;
uint16_t x411 = 6876U;
uint64_t t22 = 235905846139LLU;
uint16_t x539 = 1U;
uint8_t x585 = 76U;
volatile uint64_t x633 = 2206205452962266650LLU;
volatile int64_t x634 = -1LL;
volatile int32_t t28 = 1;
int64_t x687 = -1LL;
int16_t x697 = INT16_MAX;
static volatile int32_t t30 = -117;
int64_t x779 = -770563605LL;
int32_t x804 = 0;
volatile uint64_t t34 = 36LLU;
static int8_t x850 = -1;
volatile uint64_t t35 = 1LLU;
static uint8_t x880 = 18U;
uint64_t t37 = 3867659369965600LLU;
volatile int8_t x889 = 6;
int8_t x892 = -17;
int32_t t38 = 3013224;
volatile uint64_t x901 = 15260414077863236LLU;
int16_t x903 = INT16_MIN;
volatile uint64_t t39 = 546722285886270LLU;
volatile uint8_t x922 = 1U;
uint8_t x923 = 1U;
static uint64_t t40 = 66LLU;
int8_t x931 = INT8_MIN;
int8_t x956 = INT8_MAX;
volatile int8_t x978 = -1;
int32_t x1000 = INT32_MAX;
uint32_t t44 = 84U;
int32_t t45 = 1;
int16_t x1034 = INT16_MIN;
uint32_t x1086 = UINT32_MAX;
int64_t x1092 = -1LL;
volatile int32_t t49 = -77664268;
uint16_t x1140 = UINT16_MAX;
static int16_t x1145 = 10;
uint8_t x1148 = 71U;
int32_t t53 = 2066136;
volatile int16_t x1366 = INT16_MIN;
uint16_t x1374 = 0U;
static int16_t x1375 = -1;
volatile int32_t t59 = 464;
uint16_t x1460 = 27U;
int16_t x1470 = -1;
static volatile uint32_t x1517 = 481U;
uint8_t x1518 = 0U;
volatile int8_t x1520 = 0;
uint32_t t63 = 0U;
int64_t x1544 = INT64_MIN;
int8_t x1547 = INT8_MAX;
int64_t t65 = -186603295552432493LL;
volatile uint32_t x1561 = 12868371U;
static volatile uint32_t t66 = 2235U;
int16_t x1566 = INT16_MIN;
int64_t x1567 = 122680809396279LL;
int64_t x1577 = INT64_MAX;
uint32_t x1593 = UINT32_MAX;
volatile uint8_t x1613 = 27U;
static uint64_t x1625 = 124148LLU;
volatile uint64_t t72 = 3805336213638591LLU;
volatile uint64_t x1725 = UINT64_MAX;
uint8_t x1732 = 8U;
volatile int64_t x1770 = -1LL;
uint64_t x1772 = 20LLU;
volatile uint32_t x1861 = UINT32_MAX;
static int32_t x1864 = INT32_MIN;
volatile int32_t t79 = 34;
volatile int32_t t80 = -9962079;
volatile uint32_t x1941 = UINT32_MAX;
static volatile uint64_t x1966 = 295043890LLU;
uint8_t x2062 = 35U;
static uint8_t x2076 = 15U;
int16_t x2101 = 0;
uint64_t x2104 = UINT64_MAX;
volatile int32_t t91 = 20114;
int16_t x2166 = 1975;
static uint8_t x2220 = 5U;
int32_t t99 = -374253;


void f0(void) {
	static int32_t x9 = 23350;
	uint64_t x11 = UINT64_MAX;
	volatile int32_t t0 = -13;

	t0 = (x9>>((x10^x11)&x12));

	if (t0 != 23350) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x41 = INT8_MAX;
	volatile int32_t x42 = 1;
	int8_t x43 = 23;
	volatile int32_t x44 = INT32_MAX;
	static int32_t t1 = 175850;

	t1 = (x41>>((x42^x43)&x44));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x45 = INT16_MAX;
	volatile uint64_t x46 = 356852339662LLU;
	static int8_t x47 = INT8_MAX;
	static volatile int32_t t2 = 163;

	t2 = (x45>>((x46^x47)&x48));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x97 = 490U;
	uint8_t x98 = UINT8_MAX;
	int16_t x99 = INT16_MAX;
	static int32_t x100 = INT32_MIN;
	int32_t t3 = 797;

	t3 = (x97>>((x98^x99)&x100));

	if (t3 != 490) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x117 = INT8_MAX;
	int64_t x118 = -1LL;
	volatile int32_t t4 = -101348;

	t4 = (x117>>((x118^x119)&x120));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x134 = -1;
	static uint64_t x135 = UINT64_MAX;
	int32_t x136 = -1;
	volatile int32_t t5 = 24;

	t5 = (x133>>((x134^x135)&x136));

	if (t5 != 209163982) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x145 = UINT64_MAX;
	int32_t x147 = -1;
	uint16_t x148 = 0U;

	t6 = (x145>>((x146^x147)&x148));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x149 = 0;
	int64_t x151 = INT64_MAX;
	int32_t t7 = -63;

	t7 = (x149>>((x150^x151)&x152));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x169 = UINT64_MAX;
	static int64_t x170 = 0LL;
	int32_t x171 = INT32_MIN;
	static int32_t x172 = INT32_MAX;

	t8 = (x169>>((x170^x171)&x172));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x177 = 0;
	int8_t x178 = -12;
	int8_t x179 = -8;
	volatile uint16_t x180 = 20U;
	static volatile int32_t t9 = -14;

	t9 = (x177>>((x178^x179)&x180));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x201 = 1073671595983LLU;
	volatile int64_t x203 = -1LL;
	static uint32_t x204 = UINT32_MAX;
	volatile uint64_t t10 = 233LLU;

	t10 = (x201>>((x202^x203)&x204));

	if (t10 != 1073671595983LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x217 = 4U;
	int64_t x218 = INT64_MAX;
	static int32_t x219 = INT32_MIN;
	int8_t x220 = 31;
	int32_t t11 = 398;

	t11 = (x217>>((x218^x219)&x220));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x241 = UINT64_MAX;
	int8_t x242 = INT8_MIN;
	static volatile uint64_t x243 = UINT64_MAX;
	volatile int8_t x244 = INT8_MIN;

	t12 = (x241>>((x242^x243)&x244));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x269 = 3U;
	static uint64_t x271 = 1129429363761544919LLU;
	static int64_t x272 = INT64_MIN;
	int32_t t13 = -45;

	t13 = (x269>>((x270^x271)&x272));

	if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x274 = -2;

	t14 = (x273>>((x274^x275)&x276));

	if (t14 != 5099) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x297 = 3347066783147136LLU;
	int8_t x298 = -1;
	uint16_t x299 = 31U;
	uint8_t x300 = 15U;
	uint64_t t15 = 53602480424321359LLU;

	t15 = (x297>>((x298^x299)&x300));

	if (t15 != 3347066783147136LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x321 = 10U;
	uint64_t x322 = 30472437269932401LLU;
	volatile uint64_t x323 = 3LLU;
	static int32_t t16 = -483;

	t16 = (x321>>((x322^x323)&x324));

	if (t16 != 10) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x354 = INT16_MIN;
	volatile int16_t x355 = INT16_MIN;
	int32_t x356 = -1;
	int32_t t17 = 394927;

	t17 = (x353>>((x354^x355)&x356));

	if (t17 != 3) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x369 = 41592312;
	int16_t x370 = 1;
	uint32_t x371 = UINT32_MAX;
	int8_t x372 = 0;
	volatile int32_t t18 = -1;

	t18 = (x369>>((x370^x371)&x372));

	if (t18 != 41592312) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x381 = 11264430U;
	static volatile uint16_t x382 = 3U;
	uint32_t x383 = 1U;

	t19 = (x381>>((x382^x383)&x384));

	if (t19 != 11264430U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x410 = 57U;
	int64_t x412 = INT64_MIN;
	uint32_t t20 = 27391U;

	t20 = (x409>>((x410^x411)&x412));

	if (t20 != 122U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x433 = 2U;
	volatile int16_t x434 = INT16_MIN;
	int16_t x435 = -8023;
	volatile int8_t x436 = 8;
	int32_t t21 = -164162542;

	t21 = (x433>>((x434^x435)&x436));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x461 = 1572692584704912LLU;
	int16_t x462 = INT16_MIN;
	int8_t x463 = INT8_MAX;
	int8_t x464 = 4;

	t22 = (x461>>((x462^x463)&x464));

	if (t22 != 98293286544057LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x489 = 14U;
	static volatile int32_t x490 = -37559247;
	int8_t x491 = -1;
	int8_t x492 = 0;
	static uint32_t t23 = 6061254U;

	t23 = (x489>>((x490^x491)&x492));

	if (t23 != 14U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x537 = 112U;
	volatile int64_t x538 = 16614362001974LL;
	int8_t x540 = 27;
	int32_t t24 = -35644;

	t24 = (x537>>((x538^x539)&x540));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x561 = 1;
	uint64_t x562 = UINT64_MAX;
	volatile int16_t x563 = INT16_MAX;
	static int16_t x564 = INT16_MAX;
	int32_t t25 = -37;

	t25 = (x561>>((x562^x563)&x564));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x586 = INT16_MIN;
	int8_t x587 = INT8_MIN;
	volatile int16_t x588 = INT16_MIN;
	volatile int32_t t26 = 9287;

	t26 = (x585>>((x586^x587)&x588));

	if (t26 != 76) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x635 = INT64_MAX;
	volatile int64_t x636 = INT64_MAX;
	static uint64_t t27 = 2020LLU;

	t27 = (x633>>((x634^x635)&x636));

	if (t27 != 2206205452962266650LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x665 = UINT16_MAX;
	int8_t x666 = -1;
	int32_t x667 = -2;
	static int8_t x668 = INT8_MIN;

	t28 = (x665>>((x666^x667)&x668));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x685 = UINT16_MAX;
	int8_t x686 = -1;
	int64_t x688 = 76800965LL;
	volatile int32_t t29 = 625;

	t29 = (x685>>((x686^x687)&x688));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x698 = 395539761;
	uint64_t x699 = UINT64_MAX;
	uint8_t x700 = 1U;

	t30 = (x697>>((x698^x699)&x700));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x769 = 2199309474559LLU;
	static int64_t x770 = -1LL;
	int64_t x771 = -1LL;
	int8_t x772 = -3;
	volatile uint64_t t31 = 581461LLU;

	t31 = (x769>>((x770^x771)&x772));

	if (t31 != 2199309474559LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x777 = INT8_MAX;
	int8_t x778 = INT8_MAX;
	uint8_t x780 = 5U;
	volatile int32_t t32 = 10934;

	t32 = (x777>>((x778^x779)&x780));

	if (t32 != 7) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x801 = 69702U;
	volatile int32_t x802 = -1;
	int16_t x803 = -1;
	uint32_t t33 = 97492U;

	t33 = (x801>>((x802^x803)&x804));

	if (t33 != 69702U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x817 = UINT64_MAX;
	int64_t x818 = INT64_MAX;
	volatile int64_t x819 = INT64_MIN;
	uint8_t x820 = 17U;

	t34 = (x817>>((x818^x819)&x820));

	if (t34 != 140737488355327LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x849 = 1119983688735609LLU;
	int16_t x851 = INT16_MIN;
	uint32_t x852 = 0U;

	t35 = (x849>>((x850^x851)&x852));

	if (t35 != 1119983688735609LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x865 = 43LLU;
	static volatile uint8_t x866 = 27U;
	int16_t x867 = INT16_MIN;
	static uint16_t x868 = 6660U;
	volatile uint64_t t36 = 2238033277191LLU;

	t36 = (x865>>((x866^x867)&x868));

	if (t36 != 43LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x877 = 179533423LLU;
	int32_t x878 = 1;
	int32_t x879 = -1;

	t37 = (x877>>((x878^x879)&x880));

	if (t37 != 684LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x890 = -1LL;
	uint64_t x891 = UINT64_MAX;

	t38 = (x889>>((x890^x891)&x892));

	if (t38 != 6) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x902 = 195202425371610LLU;
	volatile int16_t x904 = 0;

	t39 = (x901>>((x902^x903)&x904));

	if (t39 != 15260414077863236LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x921 = 97649LLU;
	uint64_t x924 = 26615304LLU;

	t40 = (x921>>((x922^x923)&x924));

	if (t40 != 97649LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x929 = UINT64_MAX;
	int64_t x930 = -1LL;
	int8_t x932 = INT8_MIN;
	static uint64_t t41 = UINT64_MAX;

	t41 = (x929>>((x930^x931)&x932));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x953 = 1543554249441642695LL;
	int8_t x954 = 12;
	int32_t x955 = -9973;
	volatile int64_t t42 = -66LL;

	t42 = (x953>>((x954^x955)&x956));

	if (t42 != 12059017573762833LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x977 = 10U;
	uint64_t x979 = UINT64_MAX;
	int64_t x980 = INT64_MAX;
	volatile int32_t t43 = 166;

	t43 = (x977>>((x978^x979)&x980));

	if (t43 != 10) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x997 = 2158U;
	uint16_t x998 = 1U;
	int32_t x999 = INT32_MIN;

	t44 = (x997>>((x998^x999)&x1000));

	if (t44 != 1079U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1009 = 14U;
	int64_t x1010 = INT64_MAX;
	uint32_t x1011 = UINT32_MAX;
	static volatile uint8_t x1012 = 89U;

	t45 = (x1009>>((x1010^x1011)&x1012));

	if (t45 != 14) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1033 = UINT32_MAX;
	int16_t x1035 = -1;
	int32_t x1036 = INT32_MIN;
	volatile uint32_t t46 = UINT32_MAX;

	t46 = (x1033>>((x1034^x1035)&x1036));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1061 = 18U;
	int8_t x1062 = 27;
	static int32_t x1063 = INT32_MIN;
	uint16_t x1064 = 1U;
	int32_t t47 = -923122;

	t47 = (x1061>>((x1062^x1063)&x1064));

	if (t47 != 9) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1085 = 14955U;
	static int16_t x1087 = -795;
	static uint16_t x1088 = 1U;
	volatile int32_t t48 = -12276360;

	t48 = (x1085>>((x1086^x1087)&x1088));

	if (t48 != 14955) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1089 = 404;
	static volatile int32_t x1090 = -1;
	volatile uint64_t x1091 = UINT64_MAX;

	t49 = (x1089>>((x1090^x1091)&x1092));

	if (t49 != 404) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1137 = 15631307U;
	volatile uint8_t x1138 = 0U;
	int32_t x1139 = INT32_MIN;
	uint32_t t50 = 509426713U;

	t50 = (x1137>>((x1138^x1139)&x1140));

	if (t50 != 15631307U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x1146 = INT8_MIN;
	int8_t x1147 = INT8_MIN;
	static int32_t t51 = -1;

	t51 = (x1145>>((x1146^x1147)&x1148));

	if (t51 != 10) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x1205 = 982U;
	int32_t x1206 = INT32_MIN;
	uint32_t x1207 = UINT32_MAX;
	uint8_t x1208 = 12U;
	volatile int32_t t52 = -12179283;

	t52 = (x1205>>((x1206^x1207)&x1208));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x1233 = 48U;
	uint16_t x1234 = 12U;
	static uint32_t x1235 = UINT32_MAX;
	static uint16_t x1236 = 1U;

	t53 = (x1233>>((x1234^x1235)&x1236));

	if (t53 != 24) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x1249 = UINT64_MAX;
	uint8_t x1250 = 31U;
	int16_t x1251 = INT16_MIN;
	static int16_t x1252 = INT16_MAX;
	uint64_t t54 = 3458LLU;

	t54 = (x1249>>((x1250^x1251)&x1252));

	if (t54 != 8589934591LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1281 = 39U;
	int16_t x1282 = 15;
	uint8_t x1283 = 44U;
	int8_t x1284 = INT8_MIN;
	volatile int32_t t55 = -27;

	t55 = (x1281>>((x1282^x1283)&x1284));

	if (t55 != 39) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1305 = INT64_MAX;
	static uint64_t x1306 = 4117819284054LLU;
	uint32_t x1307 = UINT32_MAX;
	int8_t x1308 = 16;
	static int64_t t56 = INT64_MAX;

	t56 = (x1305>>((x1306^x1307)&x1308));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1337 = 15024;
	static uint64_t x1338 = 1LLU;
	volatile int32_t x1339 = INT32_MAX;
	static uint8_t x1340 = 4U;
	volatile int32_t t57 = 734795;

	t57 = (x1337>>((x1338^x1339)&x1340));

	if (t57 != 939) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1365 = UINT8_MAX;
	int16_t x1367 = INT16_MIN;
	volatile int8_t x1368 = -1;
	volatile int32_t t58 = -998;

	t58 = (x1365>>((x1366^x1367)&x1368));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1373 = 34;
	volatile uint8_t x1376 = 3U;

	t59 = (x1373>>((x1374^x1375)&x1376));

	if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x1409 = 48U;
	static int64_t x1410 = -1LL;
	volatile uint64_t x1411 = UINT64_MAX;
	uint16_t x1412 = 0U;
	volatile int32_t t60 = -251942;

	t60 = (x1409>>((x1410^x1411)&x1412));

	if (t60 != 48) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x1457 = 6;
	uint8_t x1458 = UINT8_MAX;
	int16_t x1459 = 23;
	int32_t t61 = 3;

	t61 = (x1457>>((x1458^x1459)&x1460));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x1469 = 981U;
	volatile int16_t x1471 = -27;
	static int32_t x1472 = -1;
	int32_t t62 = -2;

	t62 = (x1469>>((x1470^x1471)&x1472));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x1519 = 10U;

	t63 = (x1517>>((x1518^x1519)&x1520));

	if (t63 != 481U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x1541 = 321990444282LLU;
	static int16_t x1542 = INT16_MAX;
	int64_t x1543 = INT64_MAX;
	uint64_t t64 = 807698538675104LLU;

	t64 = (x1541>>((x1542^x1543)&x1544));

	if (t64 != 321990444282LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1545 = INT64_MAX;
	uint8_t x1546 = 113U;
	int16_t x1548 = -62;

	t65 = (x1545>>((x1546^x1547)&x1548));

	if (t65 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x1562 = INT64_MIN;
	uint16_t x1563 = 229U;
	static uint8_t x1564 = 1U;

	t66 = (x1561>>((x1562^x1563)&x1564));

	if (t66 != 6434185U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1565 = INT32_MAX;
	static uint8_t x1568 = 13U;
	static volatile int32_t t67 = -345;

	t67 = (x1565>>((x1566^x1567)&x1568));

	if (t67 != 67108863) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x1578 = UINT64_MAX;
	int8_t x1579 = -1;
	static int8_t x1580 = -1;
	volatile int64_t t68 = INT64_MAX;

	t68 = (x1577>>((x1578^x1579)&x1580));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x1594 = INT8_MAX;
	static volatile int64_t x1595 = INT64_MAX;
	int64_t x1596 = INT64_MIN;
	volatile uint32_t t69 = UINT32_MAX;

	t69 = (x1593>>((x1594^x1595)&x1596));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x1614 = INT32_MIN;
	uint64_t x1615 = 31867183LLU;
	uint8_t x1616 = 0U;
	volatile int32_t t70 = -62541786;

	t70 = (x1613>>((x1614^x1615)&x1616));

	if (t70 != 27) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x1626 = -1;
	uint32_t x1627 = 259014U;
	uint8_t x1628 = UINT8_MAX;
	static volatile uint64_t t71 = 215283936LLU;

	t71 = (x1625>>((x1626^x1627)&x1628));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x1681 = 4305383549366782LLU;
	int16_t x1682 = -1;
	int64_t x1683 = INT64_MAX;
	static uint64_t x1684 = 682287LLU;

	t72 = (x1681>>((x1682^x1683)&x1684));

	if (t72 != 4305383549366782LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x1726 = 2085U;
	uint64_t x1727 = 6328159922LLU;
	static uint8_t x1728 = 3U;
	uint64_t t73 = 2536282LLU;

	t73 = (x1725>>((x1726^x1727)&x1728));

	if (t73 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x1729 = 246U;
	int64_t x1730 = INT64_MIN;
	static volatile uint8_t x1731 = 8U;
	volatile int32_t t74 = -202190;

	t74 = (x1729>>((x1730^x1731)&x1732));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x1745 = 8U;
	static int64_t x1746 = INT64_MAX;
	static int32_t x1747 = INT32_MAX;
	uint32_t x1748 = 1U;
	volatile int32_t t75 = -7731;

	t75 = (x1745>>((x1746^x1747)&x1748));

	if (t75 != 8) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x1769 = 3307299653696596024LL;
	int8_t x1771 = -1;
	volatile int64_t t76 = -314416104LL;

	t76 = (x1769>>((x1770^x1771)&x1772));

	if (t76 != 3307299653696596024LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x1862 = -1;
	volatile int8_t x1863 = -1;
	static uint32_t t77 = UINT32_MAX;

	t77 = (x1861>>((x1862^x1863)&x1864));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x1885 = 227307375466781046LLU;
	int16_t x1886 = INT16_MAX;
	volatile uint8_t x1887 = UINT8_MAX;
	int16_t x1888 = 1;
	volatile uint64_t t78 = 1821411838805625LLU;

	t78 = (x1885>>((x1886^x1887)&x1888));

	if (t78 != 227307375466781046LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x1909 = 2725542;
	static volatile uint64_t x1910 = 80474LLU;
	int16_t x1911 = 1;
	uint16_t x1912 = 3U;

	t79 = (x1909>>((x1910^x1911)&x1912));

	if (t79 != 340692) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x1925 = 122U;
	int16_t x1926 = -1;
	int16_t x1927 = INT16_MAX;
	int64_t x1928 = 253LL;

	t80 = (x1925>>((x1926^x1927)&x1928));

	if (t80 != 122) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x1929 = INT8_MAX;
	uint32_t x1930 = 0U;
	uint32_t x1931 = 5U;
	static uint32_t x1932 = UINT32_MAX;
	volatile int32_t t81 = -32259549;

	t81 = (x1929>>((x1930^x1931)&x1932));

	if (t81 != 3) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x1937 = UINT64_MAX;
	int8_t x1938 = INT8_MIN;
	static int64_t x1939 = INT64_MAX;
	int64_t x1940 = 7744760652729270LL;
	uint64_t t82 = 64224865088628238LLU;

	t82 = (x1937>>((x1938^x1939)&x1940));

	if (t82 != 1023LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x1942 = 57827;
	int16_t x1943 = 189;
	volatile int8_t x1944 = 16;
	uint32_t t83 = 760450U;

	t83 = (x1941>>((x1942^x1943)&x1944));

	if (t83 != 65535U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x1965 = INT32_MAX;
	volatile int8_t x1967 = 0;
	int8_t x1968 = 1;
	volatile int32_t t84 = INT32_MAX;

	t84 = (x1965>>((x1966^x1967)&x1968));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2005 = INT16_MAX;
	uint8_t x2006 = UINT8_MAX;
	uint32_t x2007 = 1U;
	int8_t x2008 = 0;
	int32_t t85 = -30756328;

	t85 = (x2005>>((x2006^x2007)&x2008));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x2061 = 10U;
	static volatile int8_t x2063 = -1;
	int16_t x2064 = 1;
	volatile int32_t t86 = 103;

	t86 = (x2061>>((x2062^x2063)&x2064));

	if (t86 != 10) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x2069 = 4;
	int32_t x2070 = 11599422;
	uint32_t x2071 = 431000461U;
	int8_t x2072 = 1;
	volatile int32_t t87 = 11;

	t87 = (x2069>>((x2070^x2071)&x2072));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x2073 = 0;
	int32_t x2074 = INT32_MIN;
	int32_t x2075 = 1859312;
	volatile int32_t t88 = 65;

	t88 = (x2073>>((x2074^x2075)&x2076));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x2085 = 591U;
	int16_t x2086 = INT16_MAX;
	int8_t x2087 = -14;
	uint8_t x2088 = 3U;
	int32_t t89 = 20422983;

	t89 = (x2085>>((x2086^x2087)&x2088));

	if (t89 != 295) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x2102 = -1;
	int32_t x2103 = -1;
	volatile int32_t t90 = -2193;

	t90 = (x2101>>((x2102^x2103)&x2104));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x2105 = 1;
	int8_t x2106 = INT8_MAX;
	int8_t x2107 = INT8_MAX;
	int64_t x2108 = INT64_MIN;

	t91 = (x2105>>((x2106^x2107)&x2108));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x2117 = 55U;
	uint64_t x2118 = UINT64_MAX;
	int16_t x2119 = INT16_MAX;
	int8_t x2120 = 16;
	int32_t t92 = 693423787;

	t92 = (x2117>>((x2118^x2119)&x2120));

	if (t92 != 55) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x2121 = 0U;
	volatile int32_t x2122 = INT32_MIN;
	volatile uint32_t x2123 = 27U;
	int64_t x2124 = INT64_MIN;
	volatile int32_t t93 = -98298158;

	t93 = (x2121>>((x2122^x2123)&x2124));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x2141 = INT8_MAX;
	volatile int16_t x2142 = INT16_MIN;
	int64_t x2143 = 6431LL;
	static uint8_t x2144 = UINT8_MAX;
	volatile int32_t t94 = 6452333;

	t94 = (x2141>>((x2142^x2143)&x2144));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x2149 = INT8_MAX;
	static int8_t x2150 = 7;
	uint8_t x2151 = UINT8_MAX;
	uint8_t x2152 = 1U;
	int32_t t95 = 289730320;

	t95 = (x2149>>((x2150^x2151)&x2152));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x2157 = 1969294055LLU;
	uint16_t x2158 = 178U;
	static int8_t x2159 = INT8_MIN;
	uint8_t x2160 = 32U;
	volatile uint64_t t96 = 822635008327554LLU;

	t96 = (x2157>>((x2158^x2159)&x2160));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x2165 = 49U;
	uint16_t x2167 = 192U;
	volatile int16_t x2168 = INT16_MIN;
	volatile int32_t t97 = 106553;

	t97 = (x2165>>((x2166^x2167)&x2168));

	if (t97 != 49) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x2177 = INT16_MAX;
	int32_t x2178 = -1;
	int64_t x2179 = INT64_MIN;
	uint8_t x2180 = 14U;
	static volatile int32_t t98 = -28330;

	t98 = (x2177>>((x2178^x2179)&x2180));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x2217 = 13U;
	uint32_t x2218 = 749U;
	uint8_t x2219 = UINT8_MAX;

	t99 = (x2217>>((x2218^x2219)&x2220));

	if (t99 != 13) { NG(); } else { ; }
	
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


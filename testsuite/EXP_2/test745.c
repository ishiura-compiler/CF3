#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x10 = INT64_MIN;
int64_t x11 = -1LL;
uint16_t x12 = 61U;
int64_t x28 = -1LL;
static int32_t x38 = INT32_MAX;
volatile uint32_t x39 = 2U;
int8_t x101 = 0;
volatile uint16_t x102 = 15U;
int64_t x151 = -1LL;
volatile uint64_t t8 = 29440834877925507LLU;
static volatile uint32_t x200 = 310958462U;
volatile uint64_t t11 = 319970063518LLU;
volatile int32_t x298 = INT32_MAX;
volatile uint64_t t14 = 4444996249910887LLU;
static uint8_t x398 = 29U;
uint64_t t16 = 479499LLU;
volatile uint8_t x429 = 6U;
static volatile uint8_t x430 = 5U;
static volatile int64_t x431 = -8460170LL;
int64_t x459 = -1LL;
uint8_t x460 = 1U;
uint8_t x466 = 4U;
uint8_t x481 = 3U;
uint32_t x582 = 27U;
int64_t x584 = INT64_MAX;
volatile int8_t x594 = INT8_MIN;
uint32_t t25 = 6482U;
int64_t x601 = 74569LL;
int64_t x614 = INT64_MAX;
uint64_t t28 = 6089LLU;
static int8_t x829 = 2;
int8_t x862 = 10;
static int16_t x918 = 0;
volatile uint32_t t36 = 193U;
static int32_t t37 = -444355;
uint16_t x1033 = 194U;
int8_t x1036 = -37;
int64_t x1069 = 331LL;
int64_t x1094 = INT64_MIN;
volatile int8_t x1140 = -1;
int32_t t42 = -24;
volatile int64_t x1148 = INT64_MAX;
volatile int64_t t44 = -973LL;
uint8_t x1174 = 10U;
static int64_t t45 = 67505356LL;
static int32_t x1235 = -1;
int16_t x1256 = 23;
int8_t x1270 = 11;
static volatile int64_t t50 = -5703LL;
int64_t x1386 = -6546LL;
volatile int64_t x1387 = -1LL;
static uint32_t x1388 = 11402U;
int32_t t53 = 16;
int32_t x1405 = INT32_MAX;
static uint32_t x1421 = UINT32_MAX;
volatile uint64_t t56 = 42725527019LLU;
static int64_t t57 = 3679435668019064LL;
uint32_t x1475 = 4U;
int32_t x1476 = INT32_MIN;
volatile int32_t x1504 = INT32_MIN;
static int64_t x1613 = 3680518LL;
static int64_t t63 = 1302LL;
uint8_t x1637 = UINT8_MAX;
volatile int16_t x1647 = INT16_MIN;
static volatile uint32_t x1648 = UINT32_MAX;
volatile uint32_t t65 = 2902139U;
uint8_t x1653 = 22U;
uint32_t x1654 = UINT32_MAX;
uint32_t x1656 = 8357U;
static int64_t t68 = 26306471386LL;
volatile int32_t x1707 = INT32_MIN;
static int32_t x1802 = INT32_MIN;
int8_t x1819 = INT8_MAX;
volatile uint64_t x1838 = UINT64_MAX;
volatile int8_t x1839 = -1;
int8_t x1855 = -1;
int8_t x1871 = -1;
uint32_t t84 = 803U;
volatile uint64_t x1892 = 13370LLU;
static int8_t x1894 = -1;
int64_t x1915 = -2060916851248036899LL;
volatile int64_t t87 = -3LL;
int8_t x1918 = -1;
uint32_t x1919 = UINT32_MAX;
volatile int16_t x1971 = -1;
volatile int64_t x1972 = -1LL;
int16_t x1984 = INT16_MIN;
volatile int64_t x2002 = INT64_MIN;
int16_t x2015 = INT16_MAX;
uint32_t x2040 = 1U;
volatile uint32_t t98 = 891134618U;
uint8_t x2050 = UINT8_MAX;


void f0(void) {
	uint32_t x9 = UINT32_MAX;
	volatile uint32_t t0 = 94U;

	t0 = ((x9<<(x10%x11))/x12);

	if (t0 != 70409299U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x25 = 64836U;
	int8_t x26 = INT8_MAX;
	int64_t x27 = -1LL;
	int64_t t1 = -7579179LL;

	t1 = ((x25<<(x26%x27))/x28);

	if (t1 != -64836LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x37 = UINT32_MAX;
	static int16_t x40 = -1735;
	static uint32_t t2 = 15324623U;

	t2 = ((x37<<(x38%x39))/x40);

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x65 = 415U;
	int8_t x66 = 3;
	int16_t x67 = INT16_MAX;
	volatile int8_t x68 = INT8_MIN;
	uint32_t t3 = 92289U;

	t3 = ((x65<<(x66%x67))/x68);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x69 = 2394;
	int32_t x70 = INT32_MIN;
	int8_t x71 = -1;
	int8_t x72 = INT8_MAX;
	int32_t t4 = 1470;

	t4 = ((x69<<(x70%x71))/x72);

	if (t4 != 18) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x103 = INT32_MAX;
	int32_t x104 = INT32_MAX;
	volatile int32_t t5 = -63010912;

	t5 = ((x101<<(x102%x103))/x104);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x141 = INT16_MAX;
	static volatile int32_t x142 = 1976680;
	volatile uint8_t x143 = 3U;
	uint32_t x144 = 415656U;
	uint32_t t6 = 97395U;

	t6 = ((x141<<(x142%x143))/x144);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x149 = UINT64_MAX;
	static uint32_t x150 = 41224880U;
	int32_t x152 = -1;
	volatile uint64_t t7 = 16159612LLU;

	t7 = ((x149<<(x150%x151))/x152);

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x189 = UINT64_MAX;
	int32_t x190 = INT32_MIN;
	int32_t x191 = -1;
	static int32_t x192 = INT32_MIN;

	t8 = ((x189<<(x190%x191))/x192);

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x197 = 234;
	uint8_t x198 = 6U;
	int32_t x199 = INT32_MIN;
	static volatile uint32_t t9 = 153U;

	t9 = ((x197<<(x198%x199))/x200);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x237 = 326LL;
	volatile uint8_t x238 = 0U;
	int64_t x239 = INT64_MAX;
	static int64_t x240 = INT64_MIN;
	int64_t t10 = 67637630818LL;

	t10 = ((x237<<(x238%x239))/x240);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x257 = UINT64_MAX;
	volatile uint16_t x258 = 31U;
	static volatile uint8_t x259 = UINT8_MAX;
	int16_t x260 = -1;

	t11 = ((x257<<(x258%x259))/x260);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x297 = UINT32_MAX;
	int8_t x299 = 1;
	int8_t x300 = -1;
	uint32_t t12 = 489U;

	t12 = ((x297<<(x298%x299))/x300);

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x373 = 0U;
	int8_t x374 = INT8_MAX;
	int8_t x375 = 20;
	int32_t x376 = INT32_MAX;
	int32_t t13 = 2457;

	t13 = ((x373<<(x374%x375))/x376);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x385 = 8954924789077LLU;
	volatile int8_t x386 = 7;
	uint8_t x387 = 26U;
	uint64_t x388 = UINT64_MAX;

	t14 = ((x385<<(x386%x387))/x388);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x389 = 63289U;
	volatile uint8_t x390 = 3U;
	int16_t x391 = -1;
	uint16_t x392 = 25U;
	volatile uint32_t t15 = 56U;

	t15 = ((x389<<(x390%x391))/x392);

	if (t15 != 2531U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x397 = 5381LLU;
	volatile int64_t x399 = INT64_MIN;
	int64_t x400 = INT64_MIN;

	t16 = ((x397<<(x398%x399))/x400);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x421 = 3U;
	int32_t x422 = 1;
	int32_t x423 = INT32_MIN;
	uint32_t x424 = UINT32_MAX;
	uint32_t t17 = 114U;

	t17 = ((x421<<(x422%x423))/x424);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x432 = 1389U;
	volatile uint32_t t18 = 999716U;

	t18 = ((x429<<(x430%x431))/x432);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x457 = INT16_MAX;
	uint8_t x458 = 87U;
	volatile int32_t t19 = -3;

	t19 = ((x457<<(x458%x459))/x460);

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x465 = UINT8_MAX;
	static int32_t x467 = 56570;
	int8_t x468 = -1;
	static int32_t t20 = -77;

	t20 = ((x465<<(x466%x467))/x468);

	if (t20 != -4080) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x473 = 1U;
	uint64_t x474 = UINT64_MAX;
	int8_t x475 = -7;
	volatile int16_t x476 = 1;
	static volatile uint32_t t21 = 136882U;

	t21 = ((x473<<(x474%x475))/x476);

	if (t21 != 64U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x482 = -1992523190843LL;
	int64_t x483 = -1LL;
	volatile uint32_t x484 = 6381612U;
	uint32_t t22 = 33U;

	t22 = ((x481<<(x482%x483))/x484);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x493 = 1473;
	int64_t x494 = -1LL;
	static volatile int32_t x495 = -1;
	uint8_t x496 = 27U;
	volatile int32_t t23 = 742;

	t23 = ((x493<<(x494%x495))/x496);

	if (t23 != 54) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x581 = 13U;
	volatile uint64_t x583 = UINT64_MAX;
	static volatile int64_t t24 = 2727861LL;

	t24 = ((x581<<(x582%x583))/x584);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x593 = UINT32_MAX;
	static volatile uint32_t x595 = 27U;
	int16_t x596 = -1;

	t25 = ((x593<<(x594%x595))/x596);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x602 = -1;
	int16_t x603 = -1;
	volatile int8_t x604 = INT8_MAX;
	int64_t t26 = -5523534335LL;

	t26 = ((x601<<(x602%x603))/x604);

	if (t26 != 587LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x613 = 2U;
	uint8_t x615 = 7U;
	int64_t x616 = INT64_MAX;
	volatile int64_t t27 = 1315069712585LL;

	t27 = ((x613<<(x614%x615))/x616);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x665 = UINT64_MAX;
	volatile int8_t x666 = 11;
	int16_t x667 = INT16_MIN;
	int32_t x668 = -1;

	t28 = ((x665<<(x666%x667))/x668);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x753 = 119;
	int64_t x754 = INT64_MIN;
	volatile int8_t x755 = -1;
	int64_t x756 = INT64_MIN;
	int64_t t29 = -1071957LL;

	t29 = ((x753<<(x754%x755))/x756);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x789 = 11175936040904362LLU;
	uint16_t x790 = 5235U;
	int8_t x791 = -1;
	int64_t x792 = -1LL;
	volatile uint64_t t30 = 126LLU;

	t30 = ((x789<<(x790%x791))/x792);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x797 = UINT64_MAX;
	int64_t x798 = INT64_MAX;
	int64_t x799 = -1LL;
	int8_t x800 = -1;
	uint64_t t31 = 817314102674LLU;

	t31 = ((x797<<(x798%x799))/x800);

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x817 = 101907LLU;
	uint8_t x818 = 31U;
	static volatile int64_t x819 = INT64_MIN;
	int32_t x820 = 42494874;
	static volatile uint64_t t32 = 29043052434693LLU;

	t32 = ((x817<<(x818%x819))/x820);

	if (t32 != 5149882LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x830 = INT64_MIN;
	int32_t x831 = INT32_MIN;
	int32_t x832 = -1;
	int32_t t33 = 11660;

	t33 = ((x829<<(x830%x831))/x832);

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint16_t x861 = 7113U;
	static int32_t x863 = INT32_MIN;
	uint32_t x864 = 2895332U;
	static uint32_t t34 = 223U;

	t34 = ((x861<<(x862%x863))/x864);

	if (t34 != 2U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x917 = INT16_MAX;
	int8_t x919 = -1;
	int16_t x920 = INT16_MAX;
	volatile int32_t t35 = -3;

	t35 = ((x917<<(x918%x919))/x920);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x933 = UINT32_MAX;
	static uint8_t x934 = 76U;
	static int16_t x935 = -1;
	static int32_t x936 = INT32_MAX;

	t36 = ((x933<<(x934%x935))/x936);

	if (t36 != 2U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x977 = 5U;
	volatile uint32_t x978 = 22U;
	volatile int32_t x979 = -1;
	int16_t x980 = -1;

	t37 = ((x977<<(x978%x979))/x980);

	if (t37 != -20971520) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x1034 = INT64_MAX;
	static uint16_t x1035 = 2U;
	int32_t t38 = -3899;

	t38 = ((x1033<<(x1034%x1035))/x1036);

	if (t38 != -10) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1070 = -1;
	static volatile uint32_t x1071 = UINT32_MAX;
	volatile int16_t x1072 = -1;
	int64_t t39 = -1074814314073630545LL;

	t39 = ((x1069<<(x1070%x1071))/x1072);

	if (t39 != -331LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1093 = INT64_MAX;
	int8_t x1095 = INT8_MIN;
	static int32_t x1096 = INT32_MAX;
	int64_t t40 = -16786928811LL;

	t40 = ((x1093<<(x1094%x1095))/x1096);

	if (t40 != 4294967298LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x1125 = 6351LL;
	int64_t x1126 = INT64_MIN;
	static uint64_t x1127 = 12LLU;
	volatile uint32_t x1128 = 517U;
	volatile int64_t t41 = -1898653659415053445LL;

	t41 = ((x1125<<(x1126%x1127))/x1128);

	if (t41 != 3144LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x1137 = 1U;
	static int16_t x1138 = 0;
	int16_t x1139 = -210;

	t42 = ((x1137<<(x1138%x1139))/x1140);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1141 = 3U;
	volatile uint32_t x1142 = 1U;
	int16_t x1143 = INT16_MIN;
	volatile int16_t x1144 = INT16_MAX;
	volatile int32_t t43 = -22;

	t43 = ((x1141<<(x1142%x1143))/x1144);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1145 = UINT32_MAX;
	int64_t x1146 = 96144LL;
	static uint8_t x1147 = 4U;

	t44 = ((x1145<<(x1146%x1147))/x1148);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x1173 = UINT16_MAX;
	volatile uint32_t x1175 = 115430382U;
	int64_t x1176 = INT64_MIN;

	t45 = ((x1173<<(x1174%x1175))/x1176);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x1209 = 22U;
	int16_t x1210 = 7;
	static uint64_t x1211 = UINT64_MAX;
	uint16_t x1212 = UINT16_MAX;
	static int32_t t46 = -17165948;

	t46 = ((x1209<<(x1210%x1211))/x1212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1217 = 1U;
	int8_t x1218 = INT8_MIN;
	int8_t x1219 = 4;
	uint64_t x1220 = 23381104122092LLU;
	volatile uint64_t t47 = 509257456995990LLU;

	t47 = ((x1217<<(x1218%x1219))/x1220);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1233 = INT32_MAX;
	uint16_t x1234 = 29U;
	uint64_t x1236 = 1236146837413825618LLU;
	uint64_t t48 = 30561193488LLU;

	t48 = ((x1233<<(x1234%x1235))/x1236);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1253 = 132953437462LLU;
	uint8_t x1254 = 4U;
	static volatile int32_t x1255 = -33332;
	volatile uint64_t t49 = 409LLU;

	t49 = ((x1253<<(x1254%x1255))/x1256);

	if (t49 != 92489347799LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x1269 = 122691822410917320LL;
	int8_t x1271 = -1;
	volatile int8_t x1272 = -1;

	t50 = ((x1269<<(x1270%x1271))/x1272);

	if (t50 != -122691822410917320LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x1325 = 283256LLU;
	static volatile int32_t x1326 = 1431;
	static int8_t x1327 = INT8_MAX;
	int16_t x1328 = -878;
	uint64_t t51 = 13533LLU;

	t51 = ((x1325<<(x1326%x1327))/x1328);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1385 = INT8_MAX;
	volatile uint32_t t52 = 19U;

	t52 = ((x1385<<(x1386%x1387))/x1388);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1401 = UINT16_MAX;
	static int16_t x1402 = 0;
	int16_t x1403 = 1761;
	volatile uint8_t x1404 = 49U;

	t53 = ((x1401<<(x1402%x1403))/x1404);

	if (t53 != 1337) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1406 = INT8_MIN;
	int32_t x1407 = -1;
	int64_t x1408 = 83127491LL;
	volatile int64_t t54 = 564052969558LL;

	t54 = ((x1405<<(x1406%x1407))/x1408);

	if (t54 != 25LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1417 = 120U;
	uint16_t x1418 = 4U;
	volatile int8_t x1419 = -30;
	int32_t x1420 = -1;
	volatile int32_t t55 = -694507743;

	t55 = ((x1417<<(x1418%x1419))/x1420);

	if (t55 != -1920) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1422 = 394;
	static int64_t x1423 = -1LL;
	uint64_t x1424 = 2190295731217LLU;

	t56 = ((x1421<<(x1422%x1423))/x1424);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x1441 = 906U;
	int64_t x1442 = 115LL;
	uint16_t x1443 = 1U;
	int64_t x1444 = -1LL;

	t57 = ((x1441<<(x1442%x1443))/x1444);

	if (t57 != -906LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x1457 = UINT32_MAX;
	uint32_t x1458 = 923057U;
	static int16_t x1459 = 4;
	uint16_t x1460 = UINT16_MAX;
	volatile uint32_t t58 = 19496U;

	t58 = ((x1457<<(x1458%x1459))/x1460);

	if (t58 != 65536U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x1473 = UINT32_MAX;
	static int8_t x1474 = INT8_MAX;
	volatile uint32_t t59 = 52U;

	t59 = ((x1473<<(x1474%x1475))/x1476);

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x1501 = 272937LLU;
	int32_t x1502 = 123;
	static volatile uint16_t x1503 = 7U;
	static volatile uint64_t t60 = 327053555258LLU;

	t60 = ((x1501<<(x1502%x1503))/x1504);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x1517 = UINT8_MAX;
	static volatile int32_t x1518 = INT32_MAX;
	int16_t x1519 = -904;
	uint8_t x1520 = 64U;
	int32_t t61 = -882470;

	t61 = ((x1517<<(x1518%x1519))/x1520);

	if (t61 != 510) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x1577 = 2U;
	uint16_t x1578 = 15U;
	uint32_t x1579 = 206U;
	int8_t x1580 = INT8_MIN;
	volatile int32_t t62 = -6386;

	t62 = ((x1577<<(x1578%x1579))/x1580);

	if (t62 != -512) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x1614 = 3U;
	static volatile uint8_t x1615 = UINT8_MAX;
	int16_t x1616 = 1;

	t63 = ((x1613<<(x1614%x1615))/x1616);

	if (t63 != 29444144LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x1638 = INT32_MIN;
	int16_t x1639 = -1;
	static int8_t x1640 = INT8_MAX;
	int32_t t64 = -1509227;

	t64 = ((x1637<<(x1638%x1639))/x1640);

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1645 = UINT8_MAX;
	int64_t x1646 = INT64_MIN;

	t65 = ((x1645<<(x1646%x1647))/x1648);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x1655 = -1LL;
	volatile uint32_t t66 = 177U;

	t66 = ((x1653<<(x1654%x1655))/x1656);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x1661 = 199885506998LL;
	volatile int32_t x1662 = -1;
	volatile uint64_t x1663 = 2LLU;
	int16_t x1664 = INT16_MIN;
	int64_t t67 = 5960229414LL;

	t67 = ((x1661<<(x1662%x1663))/x1664);

	if (t67 != -12200043LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x1665 = 5LL;
	static uint16_t x1666 = 1234U;
	int8_t x1667 = 1;
	volatile int32_t x1668 = INT32_MIN;

	t68 = ((x1665<<(x1666%x1667))/x1668);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x1705 = 21082U;
	int32_t x1706 = INT32_MIN;
	int16_t x1708 = INT16_MIN;
	int32_t t69 = -37312;

	t69 = ((x1705<<(x1706%x1707))/x1708);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x1725 = 2758U;
	uint64_t x1726 = UINT64_MAX;
	uint16_t x1727 = UINT16_MAX;
	static int64_t x1728 = 7266LL;
	int64_t t70 = 47390381974856915LL;

	t70 = ((x1725<<(x1726%x1727))/x1728);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x1733 = 37751044922LLU;
	uint16_t x1734 = 3U;
	volatile int64_t x1735 = INT64_MIN;
	int8_t x1736 = INT8_MAX;
	static uint64_t t71 = 1351LLU;

	t71 = ((x1733<<(x1734%x1735))/x1736);

	if (t71 != 2378018577LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x1741 = INT8_MAX;
	int64_t x1742 = INT64_MAX;
	uint8_t x1743 = 52U;
	int64_t x1744 = INT64_MIN;
	int64_t t72 = 6LL;

	t72 = ((x1741<<(x1742%x1743))/x1744);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x1781 = 124U;
	int64_t x1782 = INT64_MIN;
	int32_t x1783 = INT32_MIN;
	int8_t x1784 = -1;
	int32_t t73 = 192;

	t73 = ((x1781<<(x1782%x1783))/x1784);

	if (t73 != -124) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x1793 = 0U;
	uint16_t x1794 = 24U;
	uint16_t x1795 = 1U;
	volatile int64_t x1796 = INT64_MIN;
	int64_t t74 = -147854LL;

	t74 = ((x1793<<(x1794%x1795))/x1796);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x1801 = 1513LLU;
	volatile uint32_t x1803 = 41U;
	volatile uint32_t x1804 = 7U;
	static uint64_t t75 = 7652758386LLU;

	t75 = ((x1801<<(x1802%x1803))/x1804);

	if (t75 != 118825792344649LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x1817 = UINT8_MAX;
	static uint32_t x1818 = 181992U;
	int32_t x1820 = INT32_MIN;
	int32_t t76 = 3052048;

	t76 = ((x1817<<(x1818%x1819))/x1820);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x1825 = 43;
	static int8_t x1826 = -10;
	uint8_t x1827 = 1U;
	int8_t x1828 = 27;
	int32_t t77 = -15;

	t77 = ((x1825<<(x1826%x1827))/x1828);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x1829 = 501583177U;
	volatile uint16_t x1830 = 1U;
	static int64_t x1831 = -1LL;
	int32_t x1832 = INT32_MIN;
	static volatile uint32_t t78 = 1478223U;

	t78 = ((x1829<<(x1830%x1831))/x1832);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x1837 = 88061196546256LL;
	static int64_t x1840 = INT64_MIN;
	volatile int64_t t79 = -24836860962LL;

	t79 = ((x1837<<(x1838%x1839))/x1840);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x1841 = INT8_MAX;
	uint8_t x1842 = 14U;
	int16_t x1843 = 2;
	int32_t x1844 = 7830;
	static volatile int32_t t80 = 1809;

	t80 = ((x1841<<(x1842%x1843))/x1844);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x1853 = INT32_MAX;
	volatile int64_t x1854 = INT64_MIN;
	int8_t x1856 = -1;
	volatile int32_t t81 = -1825;

	t81 = ((x1853<<(x1854%x1855))/x1856);

	if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x1869 = UINT8_MAX;
	int64_t x1870 = -125651032829LL;
	int8_t x1872 = INT8_MIN;
	int32_t t82 = 37064;

	t82 = ((x1869<<(x1870%x1871))/x1872);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x1877 = INT32_MAX;
	int64_t x1878 = INT64_MAX;
	int32_t x1879 = -1;
	int8_t x1880 = INT8_MAX;
	static int32_t t83 = 2;

	t83 = ((x1877<<(x1878%x1879))/x1880);

	if (t83 != 16909320) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x1885 = 1109U;
	static int32_t x1886 = 1;
	volatile int16_t x1887 = -1;
	static uint32_t x1888 = 6762U;

	t84 = ((x1885<<(x1886%x1887))/x1888);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x1889 = 12462LL;
	int8_t x1890 = INT8_MIN;
	int8_t x1891 = INT8_MIN;
	uint64_t t85 = 13314620LLU;

	t85 = ((x1889<<(x1890%x1891))/x1892);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x1893 = UINT64_MAX;
	int32_t x1895 = -1;
	int64_t x1896 = -1LL;
	volatile uint64_t t86 = 59439006535686LLU;

	t86 = ((x1893<<(x1894%x1895))/x1896);

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x1913 = 93135LL;
	uint8_t x1914 = 29U;
	static int16_t x1916 = INT16_MAX;

	t87 = ((x1913<<(x1914%x1915))/x1916);

	if (t87 != 1525970408LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x1917 = 63590U;
	static int8_t x1920 = INT8_MAX;
	static uint32_t t88 = 11128462U;

	t88 = ((x1917<<(x1918%x1919))/x1920);

	if (t88 != 500U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x1945 = INT16_MAX;
	uint32_t x1946 = 11636U;
	uint8_t x1947 = 26U;
	volatile int32_t x1948 = -30657;
	int32_t t89 = -5641183;

	t89 = ((x1945<<(x1946%x1947))/x1948);

	if (t89 != -17511) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x1961 = INT16_MAX;
	int8_t x1962 = -1;
	uint64_t x1963 = UINT64_MAX;
	int64_t x1964 = INT64_MIN;
	static volatile int64_t t90 = -10893545LL;

	t90 = ((x1961<<(x1962%x1963))/x1964);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x1969 = 1;
	static uint8_t x1970 = 21U;
	volatile int64_t t91 = 488506678009160414LL;

	t91 = ((x1969<<(x1970%x1971))/x1972);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x1977 = 10U;
	int64_t x1978 = 1LL;
	static uint16_t x1979 = 2U;
	int8_t x1980 = -2;
	uint32_t t92 = 496196730U;

	t92 = ((x1977<<(x1978%x1979))/x1980);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x1981 = UINT64_MAX;
	uint32_t x1982 = UINT32_MAX;
	static volatile int8_t x1983 = -1;
	uint64_t t93 = 272279625938512LLU;

	t93 = ((x1981<<(x1982%x1983))/x1984);

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x2001 = 109U;
	int64_t x2003 = INT64_MIN;
	uint8_t x2004 = UINT8_MAX;
	int32_t t94 = -3224994;

	t94 = ((x2001<<(x2002%x2003))/x2004);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x2013 = 14;
	int8_t x2014 = 1;
	int16_t x2016 = INT16_MAX;
	static volatile int32_t t95 = -1104664;

	t95 = ((x2013<<(x2014%x2015))/x2016);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x2029 = 1;
	volatile int32_t x2030 = INT32_MIN;
	static int32_t x2031 = INT32_MIN;
	static int8_t x2032 = INT8_MIN;
	int32_t t96 = 7;

	t96 = ((x2029<<(x2030%x2031))/x2032);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x2033 = 214238093681LL;
	volatile uint64_t x2034 = 6797934671LLU;
	uint32_t x2035 = 2U;
	int64_t x2036 = -251LL;
	volatile int64_t t97 = 5625866773619LL;

	t97 = ((x2033<<(x2034%x2035))/x2036);

	if (t97 != -1707076443LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x2037 = UINT16_MAX;
	static int32_t x2038 = INT32_MIN;
	static uint32_t x2039 = 19U;

	t98 = ((x2037<<(x2038%x2039))/x2040);

	if (t98 != 524280U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x2049 = 157347993221546LLU;
	volatile int16_t x2051 = -1;
	int8_t x2052 = 5;
	uint64_t t99 = 327569LLU;

	t99 = ((x2049<<(x2050%x2051))/x2052);

	if (t99 != 31469598644309LLU) { NG(); } else { ; }
	
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


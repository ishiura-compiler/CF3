#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x43 = 0;
static int64_t t3 = 33521LL;
static volatile uint32_t t4 = 1U;
uint64_t x122 = 110143187502598LLU;
static int8_t x146 = -1;
int32_t x206 = INT32_MIN;
uint32_t x272 = 1938503329U;
int32_t x304 = INT32_MAX;
static volatile uint8_t x435 = 1U;
int64_t x496 = -1LL;
int16_t x542 = INT16_MAX;
static uint8_t x547 = 1U;
int32_t t14 = -1209;
int64_t x581 = 1LL;
uint64_t x586 = UINT64_MAX;
int16_t x588 = -1;
int32_t t16 = -69;
static int32_t x778 = -1;
int32_t t20 = -13204993;
static uint8_t x795 = 25U;
static int8_t x800 = -1;
uint8_t x867 = 19U;
int8_t x868 = INT8_MIN;
volatile int32_t t23 = -15945263;
uint8_t x877 = 1U;
uint64_t x941 = UINT64_MAX;
static int32_t t26 = -446937792;
uint64_t t27 = 965348263LLU;
int64_t x957 = INT64_MIN;
int8_t x958 = INT8_MIN;
uint16_t x960 = 2241U;
volatile int64_t x962 = INT64_MIN;
int8_t x964 = 0;
static int32_t x973 = 1;
int8_t x976 = -10;
int32_t t33 = -693126790;
volatile uint8_t x1011 = 13U;
static uint16_t x1109 = 965U;
int32_t x1111 = 3;
volatile int32_t x1112 = 54287498;
static uint8_t x1203 = 1U;
int16_t x1316 = 0;
int16_t x1324 = 532;
int16_t x1365 = INT16_MIN;
static int8_t x1366 = INT8_MIN;
int8_t x1367 = 1;
static uint16_t x1383 = 1U;
int8_t x1384 = 7;
uint64_t x1385 = 133367LLU;
int32_t t48 = 13395625;
int64_t x1402 = -7994593142789LL;
volatile uint16_t x1417 = 19U;
int32_t t50 = -8120;
uint64_t x1470 = 53LLU;
int64_t x1490 = -1LL;
volatile int32_t t57 = 36214;
int32_t x1622 = -234184866;
int16_t x1623 = 8;
static volatile uint16_t x1650 = UINT16_MAX;
uint8_t x1651 = 0U;
uint8_t x1755 = 26U;
uint8_t x1815 = 1U;
static int64_t x1816 = -1LL;
int8_t x1922 = -1;
uint64_t x1923 = 8LLU;
int32_t t72 = -228;
static uint16_t x2031 = 29U;
int64_t t73 = -940586797603903713LL;
volatile int32_t x2085 = INT32_MAX;
int8_t x2120 = -1;
uint16_t x2158 = UINT16_MAX;
volatile uint64_t t76 = 4055658324015181399LLU;
static int8_t x2180 = 0;
int32_t t77 = -8061587;
int16_t x2255 = 3;
uint32_t x2275 = 2U;
int8_t x2373 = INT8_MIN;
int8_t x2422 = INT8_MIN;
int16_t x2424 = -1;
uint64_t x2433 = UINT64_MAX;
uint16_t x2453 = 77U;
uint16_t x2454 = 20104U;
int16_t x2455 = 1;
int16_t x2469 = INT16_MIN;
int8_t x2472 = -53;
volatile int32_t t87 = 959413985;
static int64_t x2522 = INT64_MIN;
int32_t x2524 = INT32_MAX;
int32_t x2621 = -1;
uint8_t x2751 = 0U;
volatile int64_t x2786 = INT64_MIN;
uint8_t x2793 = 1U;
int32_t x2949 = INT32_MIN;
static int16_t x2950 = 566;
uint16_t x3026 = 5U;
int32_t t97 = 1296890;
uint64_t x3058 = UINT64_MAX;
int32_t x3102 = -82;


void f0(void) {
	int32_t x13 = -976;
	int16_t x14 = 1;
	uint8_t x15 = 2U;
	int8_t x16 = -1;
	int32_t t0 = -93329879;

	t0 = (((x13==x14)<<x15)*x16);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x41 = INT8_MAX;
	uint16_t x42 = UINT16_MAX;
	uint64_t x44 = UINT64_MAX;
	volatile uint64_t t1 = 11982283768LLU;

	t1 = (((x41==x42)<<x43)*x44);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x57 = INT8_MAX;
	uint64_t x58 = 468467942593441587LLU;
	volatile uint8_t x59 = 3U;
	uint64_t x60 = 1799981581859LLU;
	volatile uint64_t t2 = 941849557725LLU;

	t2 = (((x57==x58)<<x59)*x60);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x93 = -1;
	int16_t x94 = 1;
	uint16_t x95 = 5U;
	int64_t x96 = 24LL;

	t3 = (((x93==x94)<<x95)*x96);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x105 = UINT64_MAX;
	int16_t x106 = -8;
	uint8_t x107 = 16U;
	static uint32_t x108 = UINT32_MAX;

	t4 = (((x105==x106)<<x107)*x108);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x121 = UINT64_MAX;
	int8_t x123 = 7;
	uint16_t x124 = 13U;
	static int32_t t5 = -19;

	t5 = (((x121==x122)<<x123)*x124);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x145 = -1;
	static uint8_t x147 = 0U;
	uint64_t x148 = UINT64_MAX;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (((x145==x146)<<x147)*x148);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x205 = -2;
	uint16_t x207 = 11U;
	int64_t x208 = 392970673131LL;
	static int64_t t7 = -1988422862LL;

	t7 = (((x205==x206)<<x207)*x208);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x269 = 1238225101608576376LLU;
	int8_t x270 = -3;
	uint8_t x271 = 1U;
	uint32_t t8 = 7U;

	t8 = (((x269==x270)<<x271)*x272);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x301 = -2;
	uint64_t x302 = 189783057409998448LLU;
	static uint8_t x303 = 0U;
	static volatile int32_t t9 = -560;

	t9 = (((x301==x302)<<x303)*x304);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x325 = UINT64_MAX;
	uint64_t x326 = 6LLU;
	int8_t x327 = 1;
	int64_t x328 = -7525102247022LL;
	int64_t t10 = -82069102459691LL;

	t10 = (((x325==x326)<<x327)*x328);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x433 = INT64_MIN;
	static int32_t x434 = 1;
	int16_t x436 = INT16_MIN;
	int32_t t11 = 20;

	t11 = (((x433==x434)<<x435)*x436);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x493 = INT8_MIN;
	int64_t x494 = INT64_MAX;
	int8_t x495 = 0;
	volatile int64_t t12 = 219510126LL;

	t12 = (((x493==x494)<<x495)*x496);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x541 = UINT32_MAX;
	volatile uint64_t x543 = 0LLU;
	int32_t x544 = INT32_MIN;
	volatile int32_t t13 = -5188;

	t13 = (((x541==x542)<<x543)*x544);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x545 = INT16_MAX;
	int64_t x546 = 0LL;
	int32_t x548 = INT32_MIN;

	t14 = (((x545==x546)<<x547)*x548);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x582 = -47;
	static int8_t x583 = 1;
	int64_t x584 = INT64_MIN;
	volatile int64_t t15 = 29918540002310854LL;

	t15 = (((x581==x582)<<x583)*x584);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x585 = INT64_MAX;
	int8_t x587 = 12;

	t16 = (((x585==x586)<<x587)*x588);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x597 = INT32_MAX;
	static uint8_t x598 = UINT8_MAX;
	volatile int16_t x599 = 0;
	static uint32_t x600 = 12U;
	volatile uint32_t t17 = 13087U;

	t17 = (((x597==x598)<<x599)*x600);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x637 = -1;
	uint64_t x638 = UINT64_MAX;
	uint16_t x639 = 0U;
	uint64_t x640 = 6318LLU;
	volatile uint64_t t18 = 452020765083LLU;

	t18 = (((x637==x638)<<x639)*x640);

	if (t18 != 6318LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x737 = 2974U;
	static int8_t x738 = INT8_MIN;
	volatile uint16_t x739 = 0U;
	static int16_t x740 = INT16_MIN;
	volatile int32_t t19 = 15;

	t19 = (((x737==x738)<<x739)*x740);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x777 = -1LL;
	static int8_t x779 = 1;
	uint8_t x780 = 79U;

	t20 = (((x777==x778)<<x779)*x780);

	if (t20 != 158) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x793 = 4LLU;
	static int8_t x794 = -1;
	uint16_t x796 = UINT16_MAX;
	volatile int32_t t21 = -1005;

	t21 = (((x793==x794)<<x795)*x796);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x797 = INT8_MIN;
	static int64_t x798 = 98100555LL;
	static uint8_t x799 = 5U;
	static int32_t t22 = -111917391;

	t22 = (((x797==x798)<<x799)*x800);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x865 = INT16_MIN;
	int32_t x866 = -1;

	t23 = (((x865==x866)<<x867)*x868);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x878 = UINT8_MAX;
	volatile int8_t x879 = 1;
	volatile uint16_t x880 = 4U;
	volatile int32_t t24 = 12419;

	t24 = (((x877==x878)<<x879)*x880);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x933 = -2;
	int16_t x934 = INT16_MAX;
	int32_t x935 = 11;
	int16_t x936 = INT16_MIN;
	int32_t t25 = -395768823;

	t25 = (((x933==x934)<<x935)*x936);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x942 = UINT8_MAX;
	uint8_t x943 = 14U;
	int8_t x944 = INT8_MIN;

	t26 = (((x941==x942)<<x943)*x944);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x949 = 36;
	int16_t x950 = 496;
	volatile int8_t x951 = 24;
	static uint64_t x952 = UINT64_MAX;

	t27 = (((x949==x950)<<x951)*x952);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x953 = 4;
	uint64_t x954 = 10100750LLU;
	uint8_t x955 = 1U;
	static int16_t x956 = INT16_MAX;
	static volatile int32_t t28 = -1;

	t28 = (((x953==x954)<<x955)*x956);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x959 = 3;
	int32_t t29 = 54;

	t29 = (((x957==x958)<<x959)*x960);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x961 = INT32_MIN;
	uint8_t x963 = 3U;
	static int32_t t30 = -219609320;

	t30 = (((x961==x962)<<x963)*x964);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x974 = 5457422;
	volatile uint8_t x975 = 3U;
	volatile int32_t t31 = 1163526;

	t31 = (((x973==x974)<<x975)*x976);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x981 = -1;
	static int16_t x982 = -1;
	uint16_t x983 = 0U;
	int8_t x984 = 12;
	volatile int32_t t32 = -881;

	t32 = (((x981==x982)<<x983)*x984);

	if (t32 != 12) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x989 = 9942U;
	int32_t x990 = -177492;
	int8_t x991 = 12;
	volatile int32_t x992 = 332873880;

	t33 = (((x989==x990)<<x991)*x992);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x993 = INT16_MAX;
	int8_t x994 = 0;
	volatile uint8_t x995 = 12U;
	static int32_t x996 = INT32_MIN;
	int32_t t34 = 3632729;

	t34 = (((x993==x994)<<x995)*x996);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1009 = 28U;
	int8_t x1010 = INT8_MAX;
	int16_t x1012 = INT16_MIN;
	int32_t t35 = 1;

	t35 = (((x1009==x1010)<<x1011)*x1012);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x1049 = 2U;
	uint16_t x1050 = 1U;
	static int8_t x1051 = 0;
	volatile int8_t x1052 = -28;
	volatile int32_t t36 = 363143733;

	t36 = (((x1049==x1050)<<x1051)*x1052);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x1065 = INT16_MAX;
	volatile int32_t x1066 = INT32_MIN;
	uint8_t x1067 = 6U;
	static uint64_t x1068 = 338119185336566LLU;
	volatile uint64_t t37 = 4LLU;

	t37 = (((x1065==x1066)<<x1067)*x1068);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1085 = -174721646;
	int16_t x1086 = INT16_MAX;
	static uint8_t x1087 = 2U;
	volatile int32_t x1088 = -1;
	static volatile int32_t t38 = 2;

	t38 = (((x1085==x1086)<<x1087)*x1088);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1097 = 212U;
	int16_t x1098 = -945;
	volatile uint32_t x1099 = 0U;
	uint32_t x1100 = 27410U;
	uint32_t t39 = 93597875U;

	t39 = (((x1097==x1098)<<x1099)*x1100);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1110 = -1;
	volatile int32_t t40 = -588390533;

	t40 = (((x1109==x1110)<<x1111)*x1112);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1165 = 568;
	int16_t x1166 = -1;
	volatile uint8_t x1167 = 5U;
	static int8_t x1168 = -1;
	volatile int32_t t41 = -10952822;

	t41 = (((x1165==x1166)<<x1167)*x1168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1201 = -1;
	static int16_t x1202 = 43;
	uint8_t x1204 = UINT8_MAX;
	volatile int32_t t42 = -4;

	t42 = (((x1201==x1202)<<x1203)*x1204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1313 = -1;
	int64_t x1314 = INT64_MIN;
	volatile int32_t x1315 = 0;
	volatile int32_t t43 = -594005;

	t43 = (((x1313==x1314)<<x1315)*x1316);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1317 = 1;
	int32_t x1318 = 11;
	volatile uint8_t x1319 = 0U;
	int64_t x1320 = INT64_MIN;
	static int64_t t44 = -1017861670188LL;

	t44 = (((x1317==x1318)<<x1319)*x1320);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1321 = 5205U;
	int16_t x1322 = INT16_MIN;
	int8_t x1323 = 0;
	static int32_t t45 = 0;

	t45 = (((x1321==x1322)<<x1323)*x1324);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1368 = 442264692U;
	volatile uint32_t t46 = 129052U;

	t46 = (((x1365==x1366)<<x1367)*x1368);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x1381 = -54;
	int64_t x1382 = -479132275LL;
	volatile int32_t t47 = 230248140;

	t47 = (((x1381==x1382)<<x1383)*x1384);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x1386 = UINT64_MAX;
	uint16_t x1387 = 1U;
	uint16_t x1388 = UINT16_MAX;

	t48 = (((x1385==x1386)<<x1387)*x1388);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1401 = -1;
	int16_t x1403 = 22;
	uint32_t x1404 = 61U;
	static uint32_t t49 = 1703993U;

	t49 = (((x1401==x1402)<<x1403)*x1404);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x1418 = INT8_MAX;
	volatile uint8_t x1419 = 12U;
	int8_t x1420 = 2;

	t50 = (((x1417==x1418)<<x1419)*x1420);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x1425 = -1;
	volatile int16_t x1426 = INT16_MIN;
	uint8_t x1427 = 0U;
	int32_t x1428 = INT32_MAX;
	volatile int32_t t51 = -2;

	t51 = (((x1425==x1426)<<x1427)*x1428);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x1465 = 0U;
	static uint32_t x1466 = UINT32_MAX;
	static uint16_t x1467 = 9U;
	static int64_t x1468 = INT64_MAX;
	int64_t t52 = 7885434LL;

	t52 = (((x1465==x1466)<<x1467)*x1468);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1469 = -1;
	int8_t x1471 = 13;
	volatile int16_t x1472 = -106;
	volatile int32_t t53 = -501916692;

	t53 = (((x1469==x1470)<<x1471)*x1472);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1477 = -1;
	int64_t x1478 = -1LL;
	uint16_t x1479 = 1U;
	int8_t x1480 = -14;
	volatile int32_t t54 = 8;

	t54 = (((x1477==x1478)<<x1479)*x1480);

	if (t54 != -28) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1489 = INT16_MAX;
	volatile int8_t x1491 = 0;
	int8_t x1492 = 14;
	static volatile int32_t t55 = 80386;

	t55 = (((x1489==x1490)<<x1491)*x1492);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1509 = INT8_MIN;
	uint64_t x1510 = 5214749987589LLU;
	static uint8_t x1511 = 0U;
	uint8_t x1512 = 48U;
	int32_t t56 = -2060;

	t56 = (((x1509==x1510)<<x1511)*x1512);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1585 = 12033066400LLU;
	uint8_t x1586 = 46U;
	volatile uint16_t x1587 = 25U;
	int32_t x1588 = INT32_MIN;

	t57 = (((x1585==x1586)<<x1587)*x1588);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1613 = -1;
	static int32_t x1614 = 62289;
	uint64_t x1615 = 1LLU;
	uint16_t x1616 = UINT16_MAX;
	volatile int32_t t58 = 279936184;

	t58 = (((x1613==x1614)<<x1615)*x1616);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1621 = INT64_MIN;
	int32_t x1624 = -1;
	int32_t t59 = 14138362;

	t59 = (((x1621==x1622)<<x1623)*x1624);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1625 = INT32_MIN;
	int16_t x1626 = INT16_MAX;
	int8_t x1627 = 0;
	int8_t x1628 = -1;
	static int32_t t60 = 27667;

	t60 = (((x1625==x1626)<<x1627)*x1628);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x1649 = 71U;
	volatile int16_t x1652 = INT16_MIN;
	volatile int32_t t61 = -107;

	t61 = (((x1649==x1650)<<x1651)*x1652);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x1753 = UINT8_MAX;
	static int8_t x1754 = INT8_MAX;
	static volatile uint64_t x1756 = UINT64_MAX;
	volatile uint64_t t62 = 6LLU;

	t62 = (((x1753==x1754)<<x1755)*x1756);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x1773 = -2263742662200798451LL;
	uint8_t x1774 = 12U;
	uint16_t x1775 = 1U;
	static uint8_t x1776 = 4U;
	int32_t t63 = 4311;

	t63 = (((x1773==x1774)<<x1775)*x1776);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x1797 = INT32_MIN;
	static int8_t x1798 = 6;
	int16_t x1799 = 3;
	volatile int8_t x1800 = INT8_MAX;
	static volatile int32_t t64 = 16;

	t64 = (((x1797==x1798)<<x1799)*x1800);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x1805 = INT8_MIN;
	volatile uint16_t x1806 = 7817U;
	volatile uint8_t x1807 = 11U;
	volatile int8_t x1808 = 15;
	volatile int32_t t65 = -623505275;

	t65 = (((x1805==x1806)<<x1807)*x1808);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x1813 = INT8_MAX;
	static uint32_t x1814 = UINT32_MAX;
	volatile int64_t t66 = 0LL;

	t66 = (((x1813==x1814)<<x1815)*x1816);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1817 = 19;
	volatile int32_t x1818 = INT32_MIN;
	int8_t x1819 = 0;
	int64_t x1820 = -21157627LL;
	volatile int64_t t67 = 2788501LL;

	t67 = (((x1817==x1818)<<x1819)*x1820);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x1825 = 41U;
	int8_t x1826 = -1;
	static uint8_t x1827 = 1U;
	int64_t x1828 = -1LL;
	int64_t t68 = -1502040LL;

	t68 = (((x1825==x1826)<<x1827)*x1828);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x1857 = INT64_MIN;
	static uint16_t x1858 = UINT16_MAX;
	uint8_t x1859 = 0U;
	int64_t x1860 = INT64_MIN;
	volatile int64_t t69 = -3LL;

	t69 = (((x1857==x1858)<<x1859)*x1860);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x1921 = -1LL;
	int16_t x1924 = -1;
	int32_t t70 = 0;

	t70 = (((x1921==x1922)<<x1923)*x1924);

	if (t70 != -256) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x1925 = INT16_MIN;
	static int64_t x1926 = INT64_MAX;
	uint16_t x1927 = 2U;
	int32_t x1928 = -1;
	volatile int32_t t71 = 70862257;

	t71 = (((x1925==x1926)<<x1927)*x1928);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x1969 = INT64_MAX;
	volatile int8_t x1970 = -1;
	volatile uint8_t x1971 = 7U;
	int8_t x1972 = 0;

	t72 = (((x1969==x1970)<<x1971)*x1972);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2029 = INT64_MIN;
	static volatile int16_t x2030 = -46;
	static int64_t x2032 = INT64_MIN;

	t73 = (((x2029==x2030)<<x2031)*x2032);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x2086 = 16U;
	static uint8_t x2087 = 1U;
	uint32_t x2088 = UINT32_MAX;
	uint32_t t74 = 5U;

	t74 = (((x2085==x2086)<<x2087)*x2088);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2117 = -1LL;
	static uint8_t x2118 = 28U;
	uint8_t x2119 = 1U;
	int32_t t75 = -51326;

	t75 = (((x2117==x2118)<<x2119)*x2120);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2157 = 58;
	static volatile int16_t x2159 = 14;
	volatile uint64_t x2160 = 199077LLU;

	t76 = (((x2157==x2158)<<x2159)*x2160);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2177 = INT8_MIN;
	int8_t x2178 = -3;
	volatile uint8_t x2179 = 14U;

	t77 = (((x2177==x2178)<<x2179)*x2180);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2237 = INT8_MIN;
	static int16_t x2238 = INT16_MIN;
	static volatile uint64_t x2239 = 4LLU;
	int64_t x2240 = INT64_MIN;
	volatile int64_t t78 = -8800LL;

	t78 = (((x2237==x2238)<<x2239)*x2240);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2253 = INT32_MIN;
	static int8_t x2254 = INT8_MIN;
	static int64_t x2256 = 56889LL;
	volatile int64_t t79 = 2053600715642676LL;

	t79 = (((x2253==x2254)<<x2255)*x2256);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2273 = INT16_MAX;
	volatile uint8_t x2274 = 15U;
	int64_t x2276 = -1LL;
	int64_t t80 = -8751645110563357LL;

	t80 = (((x2273==x2274)<<x2275)*x2276);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2341 = INT32_MIN;
	volatile uint64_t x2342 = 648556LLU;
	volatile int16_t x2343 = 2;
	int16_t x2344 = 0;
	int32_t t81 = 11003599;

	t81 = (((x2341==x2342)<<x2343)*x2344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x2374 = 3U;
	int8_t x2375 = 10;
	volatile int16_t x2376 = INT16_MIN;
	int32_t t82 = 14;

	t82 = (((x2373==x2374)<<x2375)*x2376);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x2421 = 118527U;
	uint8_t x2423 = 2U;
	int32_t t83 = -178;

	t83 = (((x2421==x2422)<<x2423)*x2424);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x2434 = 6262U;
	uint32_t x2435 = 2U;
	int64_t x2436 = INT64_MAX;
	int64_t t84 = -1LL;

	t84 = (((x2433==x2434)<<x2435)*x2436);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2456 = UINT16_MAX;
	int32_t t85 = -221;

	t85 = (((x2453==x2454)<<x2455)*x2456);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2470 = 5;
	static uint8_t x2471 = 2U;
	static int32_t t86 = -136697;

	t86 = (((x2469==x2470)<<x2471)*x2472);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x2497 = INT32_MAX;
	int64_t x2498 = INT64_MIN;
	int8_t x2499 = 6;
	int32_t x2500 = -1;

	t87 = (((x2497==x2498)<<x2499)*x2500);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x2521 = 62U;
	static int64_t x2523 = 0LL;
	int32_t t88 = -5;

	t88 = (((x2521==x2522)<<x2523)*x2524);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x2565 = 9217U;
	int8_t x2566 = INT8_MIN;
	static int16_t x2567 = 0;
	volatile int16_t x2568 = INT16_MIN;
	volatile int32_t t89 = 1967;

	t89 = (((x2565==x2566)<<x2567)*x2568);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x2622 = -1;
	static uint16_t x2623 = 1U;
	int64_t x2624 = -1LL;
	static int64_t t90 = -1704560LL;

	t90 = (((x2621==x2622)<<x2623)*x2624);

	if (t90 != -2LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x2681 = -1;
	static uint32_t x2682 = UINT32_MAX;
	int8_t x2683 = 11;
	uint64_t x2684 = 91622110393697LLU;
	uint64_t t91 = 528LLU;

	t91 = (((x2681==x2682)<<x2683)*x2684);

	if (t91 != 187642082086291456LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x2737 = -1;
	int32_t x2738 = INT32_MIN;
	volatile uint8_t x2739 = 14U;
	volatile int16_t x2740 = -1;
	int32_t t92 = -6;

	t92 = (((x2737==x2738)<<x2739)*x2740);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x2749 = -231436;
	static int32_t x2750 = INT32_MAX;
	uint16_t x2752 = 2365U;
	int32_t t93 = -13;

	t93 = (((x2749==x2750)<<x2751)*x2752);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x2785 = INT8_MAX;
	uint32_t x2787 = 5U;
	int8_t x2788 = INT8_MIN;
	int32_t t94 = 3003;

	t94 = (((x2785==x2786)<<x2787)*x2788);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x2794 = -1;
	int32_t x2795 = 1;
	int64_t x2796 = -1LL;
	int64_t t95 = -1838132795379430LL;

	t95 = (((x2793==x2794)<<x2795)*x2796);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x2951 = 2U;
	static volatile int32_t x2952 = INT32_MIN;
	volatile int32_t t96 = 460380664;

	t96 = (((x2949==x2950)<<x2951)*x2952);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x3025 = INT32_MAX;
	uint8_t x3027 = 3U;
	uint8_t x3028 = UINT8_MAX;

	t97 = (((x3025==x3026)<<x3027)*x3028);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3057 = INT64_MAX;
	static uint16_t x3059 = 0U;
	static int16_t x3060 = -1;
	static volatile int32_t t98 = 19;

	t98 = (((x3057==x3058)<<x3059)*x3060);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3101 = 5272U;
	volatile int8_t x3103 = 12;
	volatile int32_t x3104 = 115228255;
	volatile int32_t t99 = -3931470;

	t99 = (((x3101==x3102)<<x3103)*x3104);

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


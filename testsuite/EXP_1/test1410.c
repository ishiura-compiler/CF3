#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = 892703315LL;
int16_t x97 = -1;
uint64_t x98 = 2338526338LLU;
uint16_t x100 = 31U;
volatile int8_t x131 = -1;
static int16_t x200 = 0;
int32_t x275 = 414767246;
int32_t t4 = -868;
int8_t x369 = INT8_MIN;
int8_t x370 = -1;
static int8_t x444 = 15;
int64_t x496 = 59LL;
uint64_t x546 = 2872802451190870LLU;
uint8_t x643 = UINT8_MAX;
int8_t x645 = 5;
int32_t t15 = -405;
int16_t x734 = -15;
volatile uint8_t x765 = UINT8_MAX;
uint64_t x785 = 6152696455LLU;
int8_t x786 = INT8_MIN;
uint16_t x793 = 177U;
static uint8_t x804 = 2U;
int32_t t21 = -1011675531;
uint16_t x843 = 1359U;
int32_t t23 = -389308799;
volatile int32_t x865 = -1;
volatile int64_t x866 = 222456761825194LL;
volatile int8_t x1001 = -1;
volatile int32_t t28 = 53101;
static int16_t x1047 = INT16_MAX;
int32_t t29 = 9936;
int64_t x1059 = 284369912LL;
uint8_t x1065 = 13U;
int16_t x1067 = -3;
uint32_t x1068 = 0U;
int32_t t31 = 6;
static volatile int64_t x1089 = 59623LL;
static int16_t x1090 = INT16_MIN;
uint64_t x1111 = UINT64_MAX;
int64_t x1118 = 31353119831216LL;
volatile int16_t x1150 = INT16_MIN;
uint64_t t38 = 604046587432605109LLU;
uint32_t x1304 = 30U;
static int64_t x1321 = INT64_MIN;
uint16_t x1322 = UINT16_MAX;
int32_t t41 = 8957;
uint16_t x1364 = 25U;
static uint64_t t43 = 8476731517729LLU;
int16_t x1442 = -1;
volatile int64_t x1473 = 11LL;
uint8_t x1476 = 1U;
int8_t x1559 = 3;
static int32_t x1682 = INT32_MAX;
uint16_t x1684 = 6U;
int16_t x1690 = INT16_MIN;
uint32_t x1789 = 10U;
int64_t x1790 = 1179700LL;
uint32_t x1839 = UINT32_MAX;
volatile int64_t x1843 = 221649443517000LL;
uint8_t x1896 = 6U;
int64_t x1899 = 87988134478304LL;
uint8_t x1906 = 13U;
int32_t t59 = -23676;
int32_t t60 = -1;
uint64_t x1961 = 1870741LLU;
static int8_t x2020 = 51;
int8_t x2055 = INT8_MIN;
uint8_t x2057 = 1U;
int32_t t65 = 9873200;
int32_t x2061 = INT32_MIN;
volatile uint64_t t66 = 682863481963LLU;
int64_t x2099 = 310LL;
int32_t x2105 = INT32_MIN;
volatile int32_t t69 = 0;
int8_t x2198 = INT8_MIN;
int32_t x2205 = INT32_MAX;
uint32_t x2208 = 6U;
static uint16_t x2257 = UINT16_MAX;
static volatile int8_t x2297 = INT8_MIN;
int16_t x2299 = INT16_MIN;
int64_t x2309 = INT64_MIN;
volatile int32_t x2315 = -28;
int64_t x2325 = 1047142775LL;
static uint32_t x2334 = 41777156U;
int64_t x2405 = INT64_MIN;
int64_t x2406 = 19520827514LL;
volatile int32_t t79 = 86209;
int16_t x2424 = 2;
static int16_t x2489 = -29;
int8_t x2491 = -1;
int8_t x2609 = INT8_MIN;
int16_t x2610 = INT16_MIN;
int8_t x2654 = -5;
uint64_t x2655 = UINT64_MAX;
volatile int8_t x2660 = 0;
volatile int32_t x2678 = INT32_MAX;
int8_t x2688 = 0;
uint32_t x2704 = 3U;
volatile int64_t x2725 = -2971740LL;
int8_t x2726 = INT8_MIN;
static int64_t x2728 = 21LL;
static volatile int32_t t91 = 2;
int32_t x2754 = -1;
int32_t x2773 = 1089;
static uint8_t x2831 = UINT8_MAX;
uint32_t t98 = 57U;
volatile int16_t x2849 = INT16_MIN;
int32_t t99 = 11;


void f0(void) {
	uint32_t x5 = 0U;
	int8_t x7 = -1;
	uint8_t x8 = 28U;
	int32_t t0 = -2;

	t0 = (((x5<x6)%x7)<<x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x99 = INT8_MIN;
	static volatile int32_t t1 = -124173;

	t1 = (((x97<x98)%x99)<<x100);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x129 = UINT32_MAX;
	int64_t x130 = -1LL;
	uint8_t x132 = 0U;
	static int32_t t2 = -1133933;

	t2 = (((x129<x130)%x131)<<x132);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x197 = 1U;
	static int64_t x198 = INT64_MIN;
	uint16_t x199 = 455U;
	static volatile int32_t t3 = -4124036;

	t3 = (((x197<x198)%x199)<<x200);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x273 = INT8_MAX;
	static uint16_t x274 = 115U;
	volatile uint8_t x276 = 22U;

	t4 = (((x273<x274)%x275)<<x276);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x371 = UINT32_MAX;
	volatile uint8_t x372 = 4U;
	uint32_t t5 = 2U;

	t5 = (((x369<x370)%x371)<<x372);

	if (t5 != 16U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x425 = 391726762814LLU;
	uint64_t x426 = 69864775LLU;
	int8_t x427 = INT8_MIN;
	uint32_t x428 = 0U;
	volatile int32_t t6 = -1541;

	t6 = (((x425<x426)%x427)<<x428);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x441 = 1357LLU;
	uint32_t x442 = 0U;
	uint8_t x443 = 4U;
	volatile int32_t t7 = 104;

	t7 = (((x441<x442)%x443)<<x444);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x493 = 0;
	uint16_t x494 = 119U;
	static volatile uint64_t x495 = 299793LLU;
	volatile uint64_t t8 = 1055LLU;

	t8 = (((x493<x494)%x495)<<x496);

	if (t8 != 576460752303423488LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x513 = 2;
	int64_t x514 = -1LL;
	int16_t x515 = 1;
	int8_t x516 = 15;
	volatile int32_t t9 = -16269199;

	t9 = (((x513<x514)%x515)<<x516);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x537 = 102329;
	volatile int8_t x538 = INT8_MIN;
	static int64_t x539 = -1LL;
	uint8_t x540 = 34U;
	int64_t t10 = 19774832507350LL;

	t10 = (((x537<x538)%x539)<<x540);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x545 = INT16_MIN;
	volatile int8_t x547 = -1;
	volatile uint32_t x548 = 0U;
	volatile int32_t t11 = -8780;

	t11 = (((x545<x546)%x547)<<x548);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x605 = UINT16_MAX;
	int16_t x606 = INT16_MAX;
	int32_t x607 = -8223710;
	static uint8_t x608 = 11U;
	int32_t t12 = -496;

	t12 = (((x605<x606)%x607)<<x608);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x617 = -1069724LL;
	int8_t x618 = -1;
	volatile int64_t x619 = -3758129780682961LL;
	volatile int8_t x620 = 4;
	int64_t t13 = 1539772LL;

	t13 = (((x617<x618)%x619)<<x620);

	if (t13 != 16LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x641 = 704U;
	static volatile int32_t x642 = -6962622;
	uint8_t x644 = 0U;
	static int32_t t14 = -652;

	t14 = (((x641<x642)%x643)<<x644);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x646 = 43LLU;
	int16_t x647 = INT16_MAX;
	static uint8_t x648 = 8U;

	t15 = (((x645<x646)%x647)<<x648);

	if (t15 != 256) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x733 = UINT32_MAX;
	int16_t x735 = 6;
	uint32_t x736 = 0U;
	int32_t t16 = 12;

	t16 = (((x733<x734)%x735)<<x736);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x766 = 194U;
	int16_t x767 = -1;
	uint32_t x768 = 4U;
	int32_t t17 = -19746;

	t17 = (((x765<x766)%x767)<<x768);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x787 = UINT16_MAX;
	int32_t x788 = 0;
	volatile int32_t t18 = -30545600;

	t18 = (((x785<x786)%x787)<<x788);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x794 = 1;
	static int8_t x795 = -1;
	uint32_t x796 = 10U;
	volatile int32_t t19 = -654060;

	t19 = (((x793<x794)%x795)<<x796);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x797 = 0U;
	static volatile uint8_t x798 = 35U;
	int16_t x799 = -8909;
	static int8_t x800 = 3;
	volatile int32_t t20 = 104357;

	t20 = (((x797<x798)%x799)<<x800);

	if (t20 != 8) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x801 = 1U;
	volatile uint8_t x802 = UINT8_MAX;
	int16_t x803 = INT16_MIN;

	t21 = (((x801<x802)%x803)<<x804);

	if (t21 != 4) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x841 = -1;
	uint16_t x842 = 53U;
	volatile uint8_t x844 = 1U;
	static volatile int32_t t22 = -213112589;

	t22 = (((x841<x842)%x843)<<x844);

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x857 = INT64_MIN;
	int16_t x858 = INT16_MIN;
	static volatile int8_t x859 = INT8_MIN;
	static uint8_t x860 = 7U;

	t23 = (((x857<x858)%x859)<<x860);

	if (t23 != 128) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x867 = 3760326281LLU;
	int8_t x868 = 8;
	uint64_t t24 = 655645903036958055LLU;

	t24 = (((x865<x866)%x867)<<x868);

	if (t24 != 256LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x869 = INT32_MIN;
	static int16_t x870 = -1;
	static int64_t x871 = -3871161LL;
	static int8_t x872 = 4;
	volatile int64_t t25 = 63536292267142417LL;

	t25 = (((x869<x870)%x871)<<x872);

	if (t25 != 16LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x873 = -4229993612LL;
	int16_t x874 = INT16_MIN;
	static int32_t x875 = INT32_MAX;
	int8_t x876 = 2;
	int32_t t26 = -779041;

	t26 = (((x873<x874)%x875)<<x876);

	if (t26 != 4) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x933 = INT8_MIN;
	static int32_t x934 = INT32_MIN;
	int32_t x935 = 11662;
	int8_t x936 = 3;
	volatile int32_t t27 = -26520;

	t27 = (((x933<x934)%x935)<<x936);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1002 = UINT64_MAX;
	volatile int32_t x1003 = INT32_MIN;
	static int16_t x1004 = 4;

	t28 = (((x1001<x1002)%x1003)<<x1004);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1045 = INT32_MIN;
	int32_t x1046 = -2286;
	uint32_t x1048 = 14U;

	t29 = (((x1045<x1046)%x1047)<<x1048);

	if (t29 != 16384) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x1057 = UINT64_MAX;
	int64_t x1058 = -1LL;
	int8_t x1060 = 53;
	volatile int64_t t30 = 15967LL;

	t30 = (((x1057<x1058)%x1059)<<x1060);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1066 = INT64_MAX;

	t31 = (((x1065<x1066)%x1067)<<x1068);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1091 = -1;
	static uint8_t x1092 = 5U;
	int32_t t32 = -144;

	t32 = (((x1089<x1090)%x1091)<<x1092);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1109 = -1623634502887719546LL;
	uint64_t x1110 = UINT64_MAX;
	static int16_t x1112 = 30;
	uint64_t t33 = 232198894LLU;

	t33 = (((x1109<x1110)%x1111)<<x1112);

	if (t33 != 1073741824LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1117 = -65457122LL;
	static volatile uint8_t x1119 = UINT8_MAX;
	static uint16_t x1120 = 0U;
	static volatile int32_t t34 = 24683459;

	t34 = (((x1117<x1118)%x1119)<<x1120);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1149 = INT64_MIN;
	int16_t x1151 = -1;
	volatile int8_t x1152 = 0;
	int32_t t35 = -359915589;

	t35 = (((x1149<x1150)%x1151)<<x1152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x1197 = INT32_MAX;
	volatile int32_t x1198 = -1;
	int8_t x1199 = -1;
	uint8_t x1200 = 31U;
	volatile int32_t t36 = 11;

	t36 = (((x1197<x1198)%x1199)<<x1200);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1229 = 44988669U;
	int16_t x1230 = -1;
	int32_t x1231 = -72629877;
	uint64_t x1232 = 12LLU;
	volatile int32_t t37 = 22943;

	t37 = (((x1229<x1230)%x1231)<<x1232);

	if (t37 != 4096) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1241 = -265;
	int64_t x1242 = INT64_MIN;
	volatile uint64_t x1243 = UINT64_MAX;
	uint32_t x1244 = 43U;

	t38 = (((x1241<x1242)%x1243)<<x1244);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x1301 = -1;
	int64_t x1302 = -16921219285LL;
	static volatile int16_t x1303 = INT16_MIN;
	volatile int32_t t39 = 691344;

	t39 = (((x1301<x1302)%x1303)<<x1304);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x1323 = 5U;
	static int8_t x1324 = 1;
	volatile int32_t t40 = 1;

	t40 = (((x1321<x1322)%x1323)<<x1324);

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1349 = UINT16_MAX;
	static volatile int64_t x1350 = -1LL;
	static volatile uint8_t x1351 = UINT8_MAX;
	volatile uint8_t x1352 = 14U;

	t41 = (((x1349<x1350)%x1351)<<x1352);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1361 = UINT16_MAX;
	uint16_t x1362 = UINT16_MAX;
	int32_t x1363 = INT32_MIN;
	volatile int32_t t42 = -4564;

	t42 = (((x1361<x1362)%x1363)<<x1364);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x1369 = -7563850LL;
	uint16_t x1370 = 24U;
	uint64_t x1371 = 358827LLU;
	int32_t x1372 = 6;

	t43 = (((x1369<x1370)%x1371)<<x1372);

	if (t43 != 64LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x1413 = 3;
	int64_t x1414 = INT64_MAX;
	int16_t x1415 = INT16_MIN;
	uint8_t x1416 = 6U;
	static volatile int32_t t44 = 22;

	t44 = (((x1413<x1414)%x1415)<<x1416);

	if (t44 != 64) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1441 = INT8_MIN;
	static int64_t x1443 = 61868LL;
	uint8_t x1444 = 16U;
	int64_t t45 = 15LL;

	t45 = (((x1441<x1442)%x1443)<<x1444);

	if (t45 != 65536LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x1461 = -10722;
	volatile int64_t x1462 = INT64_MIN;
	uint32_t x1463 = 258649U;
	int64_t x1464 = 26LL;
	volatile uint32_t t46 = 20184U;

	t46 = (((x1461<x1462)%x1463)<<x1464);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x1474 = 568702273953737262LLU;
	volatile uint64_t x1475 = 1125222755131613LLU;
	uint64_t t47 = 23537212LLU;

	t47 = (((x1473<x1474)%x1475)<<x1476);

	if (t47 != 2LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x1557 = UINT32_MAX;
	uint16_t x1558 = 13U;
	uint64_t x1560 = 2LLU;
	static volatile int32_t t48 = 14503602;

	t48 = (((x1557<x1558)%x1559)<<x1560);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1585 = -1062;
	volatile uint8_t x1586 = UINT8_MAX;
	int32_t x1587 = -104;
	volatile uint8_t x1588 = 4U;
	volatile int32_t t49 = -118749749;

	t49 = (((x1585<x1586)%x1587)<<x1588);

	if (t49 != 16) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x1681 = -1;
	int8_t x1683 = 28;
	volatile int32_t t50 = -765;

	t50 = (((x1681<x1682)%x1683)<<x1684);

	if (t50 != 64) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1689 = INT32_MIN;
	uint64_t x1691 = 3LLU;
	static uint8_t x1692 = 9U;
	uint64_t t51 = 202556LLU;

	t51 = (((x1689<x1690)%x1691)<<x1692);

	if (t51 != 512LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1697 = INT8_MAX;
	uint16_t x1698 = UINT16_MAX;
	uint64_t x1699 = UINT64_MAX;
	int8_t x1700 = 50;
	static volatile uint64_t t52 = 9240LLU;

	t52 = (((x1697<x1698)%x1699)<<x1700);

	if (t52 != 1125899906842624LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1791 = -1;
	volatile int8_t x1792 = 0;
	int32_t t53 = 611983;

	t53 = (((x1789<x1790)%x1791)<<x1792);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1837 = 1;
	static uint64_t x1838 = UINT64_MAX;
	int16_t x1840 = 1;
	volatile uint32_t t54 = 1U;

	t54 = (((x1837<x1838)%x1839)<<x1840);

	if (t54 != 2U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1841 = INT32_MAX;
	int32_t x1842 = 6;
	uint16_t x1844 = 1U;
	int64_t t55 = -20761LL;

	t55 = (((x1841<x1842)%x1843)<<x1844);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x1893 = UINT8_MAX;
	static volatile int32_t x1894 = INT32_MAX;
	int32_t x1895 = -1;
	volatile int32_t t56 = -218469;

	t56 = (((x1893<x1894)%x1895)<<x1896);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1897 = 32094;
	volatile int16_t x1898 = INT16_MIN;
	static uint32_t x1900 = 0U;
	int64_t t57 = -2874261233008880386LL;

	t57 = (((x1897<x1898)%x1899)<<x1900);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1901 = 471928912580LLU;
	uint64_t x1902 = UINT64_MAX;
	uint16_t x1903 = UINT16_MAX;
	uint8_t x1904 = 13U;
	static volatile int32_t t58 = -258;

	t58 = (((x1901<x1902)%x1903)<<x1904);

	if (t58 != 8192) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1905 = INT32_MIN;
	static uint16_t x1907 = 164U;
	uint8_t x1908 = 3U;

	t59 = (((x1905<x1906)%x1907)<<x1908);

	if (t59 != 8) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1941 = -1;
	int64_t x1942 = INT64_MIN;
	volatile uint8_t x1943 = UINT8_MAX;
	volatile int16_t x1944 = 0;

	t60 = (((x1941<x1942)%x1943)<<x1944);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x1962 = 1626U;
	int8_t x1963 = INT8_MIN;
	uint8_t x1964 = 0U;
	volatile int32_t t61 = 13;

	t61 = (((x1961<x1962)%x1963)<<x1964);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x2017 = INT32_MAX;
	int32_t x2018 = 2702;
	uint64_t x2019 = 74LLU;
	volatile uint64_t t62 = 73117164LLU;

	t62 = (((x2017<x2018)%x2019)<<x2020);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2045 = INT16_MAX;
	volatile int16_t x2046 = INT16_MIN;
	int32_t x2047 = 1;
	static int8_t x2048 = 0;
	volatile int32_t t63 = 1;

	t63 = (((x2045<x2046)%x2047)<<x2048);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2053 = INT32_MIN;
	volatile int16_t x2054 = 1;
	uint8_t x2056 = 3U;
	volatile int32_t t64 = -15005;

	t64 = (((x2053<x2054)%x2055)<<x2056);

	if (t64 != 8) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2058 = -1LL;
	int8_t x2059 = INT8_MAX;
	uint32_t x2060 = 2U;

	t65 = (((x2057<x2058)%x2059)<<x2060);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2062 = 1774;
	static volatile uint64_t x2063 = 172152067LLU;
	volatile int16_t x2064 = 47;

	t66 = (((x2061<x2062)%x2063)<<x2064);

	if (t66 != 140737488355328LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2097 = UINT64_MAX;
	int64_t x2098 = -1LL;
	uint32_t x2100 = 3U;
	int64_t t67 = 218463LL;

	t67 = (((x2097<x2098)%x2099)<<x2100);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x2106 = -1;
	int8_t x2107 = INT8_MAX;
	int32_t x2108 = 20;
	volatile int32_t t68 = -1210;

	t68 = (((x2105<x2106)%x2107)<<x2108);

	if (t68 != 1048576) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2153 = INT16_MAX;
	volatile int8_t x2154 = -56;
	int32_t x2155 = INT32_MAX;
	int32_t x2156 = 0;

	t69 = (((x2153<x2154)%x2155)<<x2156);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2197 = INT64_MIN;
	static volatile uint8_t x2199 = 28U;
	int8_t x2200 = 7;
	int32_t t70 = 1;

	t70 = (((x2197<x2198)%x2199)<<x2200);

	if (t70 != 128) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2206 = -1;
	int32_t x2207 = 321710587;
	int32_t t71 = -14212628;

	t71 = (((x2205<x2206)%x2207)<<x2208);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x2225 = UINT16_MAX;
	int8_t x2226 = -1;
	volatile uint64_t x2227 = 303081967026LLU;
	uint16_t x2228 = 13U;
	uint64_t t72 = 410396760183435LLU;

	t72 = (((x2225<x2226)%x2227)<<x2228);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2258 = INT16_MAX;
	uint16_t x2259 = 3531U;
	int8_t x2260 = 9;
	static volatile int32_t t73 = -8365;

	t73 = (((x2257<x2258)%x2259)<<x2260);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x2298 = 453U;
	uint8_t x2300 = 15U;
	int32_t t74 = -118940;

	t74 = (((x2297<x2298)%x2299)<<x2300);

	if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x2310 = INT8_MIN;
	int8_t x2311 = INT8_MIN;
	static uint16_t x2312 = 9U;
	static int32_t t75 = 857888;

	t75 = (((x2309<x2310)%x2311)<<x2312);

	if (t75 != 512) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x2313 = INT32_MAX;
	static volatile int8_t x2314 = -1;
	uint8_t x2316 = 9U;
	volatile int32_t t76 = -47;

	t76 = (((x2313<x2314)%x2315)<<x2316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x2326 = INT16_MIN;
	uint64_t x2327 = UINT64_MAX;
	uint16_t x2328 = 4U;
	volatile uint64_t t77 = 3660952199892408942LLU;

	t77 = (((x2325<x2326)%x2327)<<x2328);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2333 = INT16_MIN;
	static uint32_t x2335 = UINT32_MAX;
	uint8_t x2336 = 16U;
	volatile uint32_t t78 = 7600U;

	t78 = (((x2333<x2334)%x2335)<<x2336);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x2407 = 1U;
	int8_t x2408 = 1;

	t79 = (((x2405<x2406)%x2407)<<x2408);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2421 = -1;
	int64_t x2422 = INT64_MAX;
	uint8_t x2423 = UINT8_MAX;
	static volatile int32_t t80 = 4738599;

	t80 = (((x2421<x2422)%x2423)<<x2424);

	if (t80 != 4) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2490 = 1U;
	uint32_t x2492 = 6U;
	volatile int32_t t81 = 79;

	t81 = (((x2489<x2490)%x2491)<<x2492);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x2537 = UINT32_MAX;
	volatile int8_t x2538 = 26;
	volatile int16_t x2539 = INT16_MIN;
	volatile int8_t x2540 = 4;
	static volatile int32_t t82 = 327;

	t82 = (((x2537<x2538)%x2539)<<x2540);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x2611 = 2541U;
	static volatile uint8_t x2612 = 5U;
	volatile int32_t t83 = -253635992;

	t83 = (((x2609<x2610)%x2611)<<x2612);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x2653 = 143023LLU;
	int8_t x2656 = 15;
	static uint64_t t84 = 736861432885180LLU;

	t84 = (((x2653<x2654)%x2655)<<x2656);

	if (t84 != 32768LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x2657 = UINT32_MAX;
	volatile uint8_t x2658 = 36U;
	static volatile int8_t x2659 = -1;
	int32_t t85 = 133690917;

	t85 = (((x2657<x2658)%x2659)<<x2660);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x2669 = 1;
	uint8_t x2670 = 110U;
	uint64_t x2671 = UINT64_MAX;
	uint8_t x2672 = 3U;
	volatile uint64_t t86 = 81663267LLU;

	t86 = (((x2669<x2670)%x2671)<<x2672);

	if (t86 != 8LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x2677 = 280130U;
	uint64_t x2679 = 1884LLU;
	uint32_t x2680 = 61U;
	uint64_t t87 = 13LLU;

	t87 = (((x2677<x2678)%x2679)<<x2680);

	if (t87 != 2305843009213693952LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2685 = INT64_MIN;
	static int8_t x2686 = -11;
	int16_t x2687 = INT16_MAX;
	int32_t t88 = -1528;

	t88 = (((x2685<x2686)%x2687)<<x2688);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x2701 = 3828LLU;
	int64_t x2702 = -1664600601213885396LL;
	static int32_t x2703 = -1;
	int32_t t89 = -386530193;

	t89 = (((x2701<x2702)%x2703)<<x2704);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x2727 = -1;
	volatile int32_t t90 = 181061143;

	t90 = (((x2725<x2726)%x2727)<<x2728);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2729 = 2;
	int32_t x2730 = INT32_MIN;
	int32_t x2731 = -1;
	int16_t x2732 = 3;

	t91 = (((x2729<x2730)%x2731)<<x2732);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x2733 = UINT8_MAX;
	int8_t x2734 = INT8_MIN;
	int16_t x2735 = -1;
	uint8_t x2736 = 22U;
	volatile int32_t t92 = -100318;

	t92 = (((x2733<x2734)%x2735)<<x2736);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x2753 = 1U;
	int16_t x2755 = -1;
	volatile int16_t x2756 = 0;
	int32_t t93 = -21233;

	t93 = (((x2753<x2754)%x2755)<<x2756);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x2774 = 64245376377888558LL;
	uint64_t x2775 = 4116387404606105LLU;
	uint8_t x2776 = 0U;
	volatile uint64_t t94 = 359LLU;

	t94 = (((x2773<x2774)%x2775)<<x2776);

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x2777 = UINT64_MAX;
	uint16_t x2778 = 876U;
	int64_t x2779 = INT64_MIN;
	uint8_t x2780 = 12U;
	int64_t t95 = -742LL;

	t95 = (((x2777<x2778)%x2779)<<x2780);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x2821 = INT32_MIN;
	static int64_t x2822 = INT64_MIN;
	int8_t x2823 = -1;
	uint8_t x2824 = 25U;
	volatile int32_t t96 = 2;

	t96 = (((x2821<x2822)%x2823)<<x2824);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x2829 = -3032306064362244LL;
	int32_t x2830 = -1;
	int8_t x2832 = 2;
	volatile int32_t t97 = -163882;

	t97 = (((x2829<x2830)%x2831)<<x2832);

	if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x2837 = 4041925827448223085LLU;
	volatile int8_t x2838 = 1;
	uint32_t x2839 = 117413252U;
	static uint8_t x2840 = 5U;

	t98 = (((x2837<x2838)%x2839)<<x2840);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x2850 = 1LLU;
	uint8_t x2851 = 124U;
	volatile uint8_t x2852 = 3U;

	t99 = (((x2849<x2850)%x2851)<<x2852);

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = -3LL;
volatile int16_t x158 = INT16_MIN;
uint8_t x159 = 125U;
uint16_t x160 = 10U;
static int32_t x320 = 8;
static uint32_t x330 = 2U;
volatile uint64_t t10 = 33981956LLU;
uint8_t x557 = 1U;
volatile uint32_t x603 = 14195U;
volatile uint8_t x780 = 26U;
int64_t x807 = 2958052627LL;
volatile int32_t x829 = INT32_MIN;
static uint32_t x841 = UINT32_MAX;
int64_t x861 = INT64_MIN;
int64_t t23 = 3LL;
int16_t x971 = 2820;
int64_t t26 = 1485881567143768LL;
int16_t x985 = INT16_MAX;
int64_t x987 = -1LL;
int32_t x1151 = -128;
volatile int32_t x1181 = INT32_MIN;
int64_t x1187 = INT64_MAX;
volatile int32_t x1202 = -2493;
uint32_t t33 = 5249460U;
static volatile int32_t x1214 = 11233;
uint32_t x1342 = 117U;
static volatile uint64_t t36 = 102871191LLU;
int8_t x1353 = -4;
volatile int32_t t37 = -1472;
uint8_t x1445 = 112U;
volatile int32_t x1447 = INT32_MIN;
uint64_t t40 = 30218LLU;
uint64_t x1451 = 109620575452LLU;
int8_t x1491 = 17;
static volatile int8_t x1494 = -1;
static volatile int64_t x1694 = -7179775LL;
int64_t x1697 = -1LL;
uint64_t t49 = 1962607LLU;
uint8_t x1830 = 59U;
int64_t x1833 = 140922940554416LL;
volatile uint8_t x1836 = 2U;
static int32_t x1857 = -13;
int64_t x2071 = INT64_MAX;
volatile int32_t t61 = 95109;
int16_t x2247 = INT16_MIN;
volatile int64_t x2286 = INT64_MAX;
int32_t x2294 = -1;
static int8_t x2304 = 9;
static uint32_t x2308 = 0U;
int16_t x2333 = -1;
volatile int64_t x2335 = -643314361LL;
volatile int64_t t69 = -158872155394335LL;
volatile int64_t x2354 = -1LL;
int64_t x2374 = -1LL;
volatile int64_t t73 = 39505371469LL;
uint32_t x2527 = UINT32_MAX;
uint8_t x2528 = 2U;
int32_t x2571 = INT32_MIN;
uint32_t x2584 = 21U;
uint64_t x2593 = UINT64_MAX;
static volatile int32_t x2594 = INT32_MIN;
volatile uint64_t t80 = 1046415169657479LLU;
uint16_t x2662 = 20818U;
volatile int64_t x2663 = -1LL;
volatile int64_t t81 = -10LL;
int8_t x2701 = INT8_MIN;
int64_t t83 = 552LL;
uint64_t x2746 = UINT64_MAX;
volatile uint8_t x2809 = 0U;
volatile int64_t t88 = -219143LL;
static uint16_t x2977 = 28089U;
int64_t t89 = 6975329744429101LL;
static volatile uint32_t x3002 = UINT32_MAX;
volatile uint64_t x3003 = 101942267LLU;
uint64_t x3046 = 1905LLU;
static volatile uint64_t t92 = 45LLU;
volatile int32_t t94 = -61234;
uint64_t x3081 = 624802510656503637LLU;
int64_t x3105 = INT64_MAX;
static volatile int8_t x3119 = INT8_MIN;
int32_t x3148 = 8;
volatile int64_t t99 = -2304530196702LL;


void f0(void) {
	uint32_t x9 = 48544U;
	int64_t x10 = -1LL;
	static int16_t x11 = -6;
	uint16_t x12 = 11U;

	t0 = (((x9%x10)/x11)<<x12);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x37 = 914472648457769923LLU;
	uint64_t x38 = UINT64_MAX;
	int16_t x39 = -28;
	static uint64_t x40 = 0LLU;
	volatile uint64_t t1 = 8425676191139LLU;

	t1 = (((x37%x38)/x39)<<x40);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x157 = 1U;
	static volatile uint32_t t2 = 9758587U;

	t2 = (((x157%x158)/x159)<<x160);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x169 = INT64_MIN;
	int64_t x170 = -1LL;
	volatile int64_t x171 = INT64_MIN;
	int64_t x172 = 0LL;
	int64_t t3 = 33978043087LL;

	t3 = (((x169%x170)/x171)<<x172);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x237 = INT32_MIN;
	static uint16_t x238 = 1237U;
	uint64_t x239 = 6135592495540919LLU;
	volatile uint16_t x240 = 7U;
	uint64_t t4 = 6631275302886513954LLU;

	t4 = (((x237%x238)/x239)<<x240);

	if (t4 != 384768LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x245 = INT8_MAX;
	uint32_t x246 = 10U;
	int8_t x247 = INT8_MIN;
	volatile uint32_t x248 = 0U;
	uint32_t t5 = 7U;

	t5 = (((x245%x246)/x247)<<x248);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x269 = -1004;
	uint64_t x270 = UINT64_MAX;
	int32_t x271 = -937765;
	int32_t x272 = 1;
	volatile uint64_t t6 = 544304019081147329LLU;

	t6 = (((x269%x270)/x271)<<x272);

	if (t6 != 2LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x317 = -1;
	uint16_t x318 = 3161U;
	int32_t x319 = INT32_MIN;
	int32_t t7 = -72415164;

	t7 = (((x317%x318)/x319)<<x320);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x329 = INT64_MIN;
	int8_t x331 = -1;
	uint32_t x332 = 2U;
	int64_t t8 = 12590723623LL;

	t8 = (((x329%x330)/x331)<<x332);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x361 = UINT64_MAX;
	static int32_t x362 = INT32_MIN;
	int16_t x363 = 3;
	int8_t x364 = 14;
	volatile uint64_t t9 = 170700929LLU;

	t9 = (((x361%x362)/x363)<<x364);

	if (t9 != 11728124018688LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x461 = UINT64_MAX;
	static uint64_t x462 = 917720431LLU;
	int32_t x463 = -5996494;
	uint8_t x464 = 12U;

	t10 = (((x461%x462)/x463)<<x464);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x501 = INT32_MIN;
	static int16_t x502 = INT16_MAX;
	int16_t x503 = INT16_MIN;
	int16_t x504 = 2;
	volatile int32_t t11 = -42544070;

	t11 = (((x501%x502)/x503)<<x504);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x558 = 1;
	int32_t x559 = 790;
	uint8_t x560 = 0U;
	volatile int32_t t12 = -13924278;

	t12 = (((x557%x558)/x559)<<x560);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x601 = UINT64_MAX;
	int8_t x602 = INT8_MIN;
	uint32_t x604 = 0U;
	uint64_t t13 = 118553833543483577LLU;

	t13 = (((x601%x602)/x603)<<x604);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x637 = INT64_MIN;
	int8_t x638 = -57;
	volatile uint8_t x639 = 105U;
	uint8_t x640 = 61U;
	volatile int64_t t14 = -15LL;

	t14 = (((x637%x638)/x639)<<x640);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x701 = UINT8_MAX;
	int8_t x702 = INT8_MAX;
	int16_t x703 = INT16_MIN;
	int32_t x704 = 26;
	int32_t t15 = 109531406;

	t15 = (((x701%x702)/x703)<<x704);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x753 = INT64_MAX;
	static int8_t x754 = INT8_MIN;
	int32_t x755 = INT32_MIN;
	int8_t x756 = 0;
	static volatile int64_t t16 = 2369983081665133LL;

	t16 = (((x753%x754)/x755)<<x756);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x777 = 93U;
	uint16_t x778 = 31581U;
	static uint64_t x779 = 42555984767LLU;
	uint64_t t17 = 91902893683235150LLU;

	t17 = (((x777%x778)/x779)<<x780);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x805 = 154362583U;
	uint32_t x806 = 88675888U;
	int16_t x808 = 0;
	volatile int64_t t18 = -3052592935535013538LL;

	t18 = (((x805%x806)/x807)<<x808);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x830 = 2U;
	static int32_t x831 = -61926;
	uint8_t x832 = 1U;
	static volatile int32_t t19 = 82;

	t19 = (((x829%x830)/x831)<<x832);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x842 = 328147319846511LLU;
	uint32_t x843 = 606081335U;
	uint8_t x844 = 7U;
	uint64_t t20 = 1789214739483324LLU;

	t20 = (((x841%x842)/x843)<<x844);

	if (t20 != 896LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x845 = 15818LLU;
	volatile uint64_t x846 = UINT64_MAX;
	uint16_t x847 = 14U;
	static uint16_t x848 = 3U;
	volatile uint64_t t21 = 2319340364807658516LLU;

	t21 = (((x845%x846)/x847)<<x848);

	if (t21 != 9032LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x862 = 1643LLU;
	volatile int8_t x863 = -1;
	uint8_t x864 = 2U;
	volatile uint64_t t22 = 1073LLU;

	t22 = (((x861%x862)/x863)<<x864);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x921 = 1;
	int16_t x922 = -14;
	int64_t x923 = 355081LL;
	uint32_t x924 = 1U;

	t23 = (((x921%x922)/x923)<<x924);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x941 = 1733241U;
	uint32_t x942 = 104708U;
	uint32_t x943 = 369149822U;
	int8_t x944 = 0;
	volatile uint32_t t24 = 7292094U;

	t24 = (((x941%x942)/x943)<<x944);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x961 = UINT64_MAX;
	int32_t x962 = INT32_MAX;
	static volatile uint8_t x963 = 1U;
	static volatile uint8_t x964 = 2U;
	uint64_t t25 = 72853LLU;

	t25 = (((x961%x962)/x963)<<x964);

	if (t25 != 12LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x969 = INT64_MIN;
	int32_t x970 = INT32_MAX;
	static int32_t x972 = 11;

	t26 = (((x969%x970)/x971)<<x972);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x986 = -1LL;
	uint32_t x988 = 0U;
	volatile int64_t t27 = -16624776158668LL;

	t27 = (((x985%x986)/x987)<<x988);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x993 = INT64_MIN;
	uint64_t x994 = 281076703139964LLU;
	static int8_t x995 = INT8_MIN;
	static int8_t x996 = 1;
	static volatile uint64_t t28 = 5149273LLU;

	t28 = (((x993%x994)/x995)<<x996);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x1017 = -1;
	uint16_t x1018 = 19U;
	static int16_t x1019 = -1;
	static volatile uint8_t x1020 = 2U;
	static int32_t t29 = 37172;

	t29 = (((x1017%x1018)/x1019)<<x1020);

	if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1149 = 33LL;
	static int16_t x1150 = -1;
	static int8_t x1152 = 7;
	int64_t t30 = 3589045LL;

	t30 = (((x1149%x1150)/x1151)<<x1152);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1182 = -1;
	uint32_t x1183 = 12482553U;
	int16_t x1184 = 4;
	volatile uint32_t t31 = 117925078U;

	t31 = (((x1181%x1182)/x1183)<<x1184);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1185 = 371;
	volatile int32_t x1186 = INT32_MAX;
	volatile int8_t x1188 = 30;
	volatile int64_t t32 = -381169549797207LL;

	t32 = (((x1185%x1186)/x1187)<<x1188);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x1201 = UINT32_MAX;
	static int32_t x1203 = 46169;
	uint16_t x1204 = 8U;

	t33 = (((x1201%x1202)/x1203)<<x1204);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1213 = -87;
	uint64_t x1215 = 517LLU;
	static volatile int32_t x1216 = 0;
	volatile uint64_t t34 = 1666574239LLU;

	t34 = (((x1213%x1214)/x1215)<<x1216);

	if (t34 != 35680356041991395LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1221 = -1;
	uint16_t x1222 = UINT16_MAX;
	static volatile uint16_t x1223 = 10360U;
	uint16_t x1224 = 21U;
	int32_t t35 = 3949;

	t35 = (((x1221%x1222)/x1223)<<x1224);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x1341 = UINT64_MAX;
	volatile int32_t x1343 = -38806;
	int8_t x1344 = 8;

	t36 = (((x1341%x1342)/x1343)<<x1344);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x1354 = INT16_MIN;
	static uint16_t x1355 = 7819U;
	volatile uint64_t x1356 = 1LLU;

	t37 = (((x1353%x1354)/x1355)<<x1356);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x1409 = INT64_MAX;
	volatile int16_t x1410 = INT16_MAX;
	uint8_t x1411 = 16U;
	int8_t x1412 = 29;
	volatile int64_t t38 = 8543348221919014LL;

	t38 = (((x1409%x1410)/x1411)<<x1412);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x1413 = 11686581LLU;
	uint16_t x1414 = UINT16_MAX;
	uint32_t x1415 = UINT32_MAX;
	static volatile int8_t x1416 = 0;
	volatile uint64_t t39 = 3193999919LLU;

	t39 = (((x1413%x1414)/x1415)<<x1416);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1446 = 26768686LLU;
	uint8_t x1448 = 0U;

	t40 = (((x1445%x1446)/x1447)<<x1448);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x1449 = 118659929LLU;
	int32_t x1450 = 8988395;
	int16_t x1452 = 0;
	volatile uint64_t t41 = 18566100967LLU;

	t41 = (((x1449%x1450)/x1451)<<x1452);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x1489 = 0U;
	static int64_t x1490 = INT64_MIN;
	int8_t x1492 = 13;
	volatile int64_t t42 = 288956282523748LL;

	t42 = (((x1489%x1490)/x1491)<<x1492);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1493 = 31866U;
	static uint8_t x1495 = 5U;
	volatile uint16_t x1496 = 11U;
	volatile int32_t t43 = 18652417;

	t43 = (((x1493%x1494)/x1495)<<x1496);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1617 = 4U;
	int16_t x1618 = -1;
	volatile int8_t x1619 = INT8_MIN;
	static volatile uint8_t x1620 = 6U;
	static volatile int32_t t44 = -19653506;

	t44 = (((x1617%x1618)/x1619)<<x1620);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1625 = -1;
	int32_t x1626 = INT32_MAX;
	uint8_t x1627 = UINT8_MAX;
	static int8_t x1628 = 12;
	int32_t t45 = -15230592;

	t45 = (((x1625%x1626)/x1627)<<x1628);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1677 = 612U;
	uint64_t x1678 = 3488665432211751041LLU;
	int32_t x1679 = INT32_MAX;
	uint8_t x1680 = 54U;
	static volatile uint64_t t46 = 659LLU;

	t46 = (((x1677%x1678)/x1679)<<x1680);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x1685 = 8684;
	uint16_t x1686 = 343U;
	int8_t x1687 = INT8_MIN;
	int8_t x1688 = 10;
	static volatile int32_t t47 = 21737754;

	t47 = (((x1685%x1686)/x1687)<<x1688);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x1693 = INT32_MIN;
	int8_t x1695 = -1;
	volatile int16_t x1696 = 1;
	int64_t t48 = 8493482098323741LL;

	t48 = (((x1693%x1694)/x1695)<<x1696);

	if (t48 != 1461846LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1698 = 10451LLU;
	volatile int64_t x1699 = -1LL;
	uint8_t x1700 = 0U;

	t49 = (((x1697%x1698)/x1699)<<x1700);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1733 = UINT8_MAX;
	uint64_t x1734 = 6103LLU;
	static int16_t x1735 = INT16_MAX;
	uint32_t x1736 = 13U;
	volatile uint64_t t50 = 32032774983929LLU;

	t50 = (((x1733%x1734)/x1735)<<x1736);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x1829 = INT64_MIN;
	int16_t x1831 = INT16_MAX;
	volatile uint8_t x1832 = 16U;
	volatile int64_t t51 = 10133LL;

	t51 = (((x1829%x1830)/x1831)<<x1832);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x1834 = INT64_MAX;
	volatile uint8_t x1835 = 60U;
	int64_t t52 = 1003058933LL;

	t52 = (((x1833%x1834)/x1835)<<x1836);

	if (t52 != 9394862703624LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1849 = -1157;
	int16_t x1850 = -1;
	int64_t x1851 = 776436870338LL;
	uint16_t x1852 = 4U;
	int64_t t53 = -14758461960158249LL;

	t53 = (((x1849%x1850)/x1851)<<x1852);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1858 = INT32_MAX;
	int64_t x1859 = -865LL;
	volatile int8_t x1860 = 47;
	int64_t t54 = 2531081569293LL;

	t54 = (((x1857%x1858)/x1859)<<x1860);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1861 = 835U;
	int64_t x1862 = INT64_MAX;
	uint16_t x1863 = 24U;
	uint8_t x1864 = 1U;
	int64_t t55 = -111341713LL;

	t55 = (((x1861%x1862)/x1863)<<x1864);

	if (t55 != 68LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x1917 = UINT64_MAX;
	uint32_t x1918 = UINT32_MAX;
	int16_t x1919 = INT16_MAX;
	static uint8_t x1920 = 33U;
	static uint64_t t56 = 7127762103244LLU;

	t56 = (((x1917%x1918)/x1919)<<x1920);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1921 = UINT8_MAX;
	volatile int8_t x1922 = -1;
	volatile int64_t x1923 = INT64_MIN;
	int16_t x1924 = 4;
	int64_t t57 = 13996LL;

	t57 = (((x1921%x1922)/x1923)<<x1924);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x1977 = UINT32_MAX;
	uint8_t x1978 = UINT8_MAX;
	volatile int8_t x1979 = INT8_MIN;
	uint32_t x1980 = 1U;
	uint32_t t58 = 0U;

	t58 = (((x1977%x1978)/x1979)<<x1980);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2013 = 12U;
	volatile uint64_t x2014 = 401288547LLU;
	int64_t x2015 = -49771233857LL;
	uint16_t x2016 = 21U;
	volatile uint64_t t59 = 396LLU;

	t59 = (((x2013%x2014)/x2015)<<x2016);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x2069 = INT32_MIN;
	volatile int8_t x2070 = INT8_MAX;
	static volatile int8_t x2072 = 3;
	volatile int64_t t60 = 236960880LL;

	t60 = (((x2069%x2070)/x2071)<<x2072);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x2101 = -17510810;
	volatile int16_t x2102 = 749;
	int16_t x2103 = INT16_MIN;
	static uint16_t x2104 = 1U;

	t61 = (((x2101%x2102)/x2103)<<x2104);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x2105 = UINT8_MAX;
	int16_t x2106 = 10;
	int32_t x2107 = INT32_MIN;
	volatile uint16_t x2108 = 0U;
	int32_t t62 = 4497434;

	t62 = (((x2105%x2106)/x2107)<<x2108);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x2113 = -1;
	int32_t x2114 = INT32_MIN;
	uint64_t x2115 = UINT64_MAX;
	static int32_t x2116 = 1;
	volatile uint64_t t63 = 13LLU;

	t63 = (((x2113%x2114)/x2115)<<x2116);

	if (t63 != 2LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2245 = 23;
	int32_t x2246 = -62705;
	uint8_t x2248 = 0U;
	static int32_t t64 = 247;

	t64 = (((x2245%x2246)/x2247)<<x2248);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2285 = UINT16_MAX;
	volatile uint8_t x2287 = 1U;
	uint8_t x2288 = 3U;
	volatile int64_t t65 = 31062083LL;

	t65 = (((x2285%x2286)/x2287)<<x2288);

	if (t65 != 524280LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2293 = 6;
	int16_t x2295 = -1;
	int8_t x2296 = 5;
	int32_t t66 = -13527;

	t66 = (((x2293%x2294)/x2295)<<x2296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2301 = -11;
	static int8_t x2302 = 10;
	uint32_t x2303 = UINT32_MAX;
	volatile uint32_t t67 = 499U;

	t67 = (((x2301%x2302)/x2303)<<x2304);

	if (t67 != 512U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x2305 = INT8_MIN;
	int8_t x2306 = -1;
	static int64_t x2307 = INT64_MIN;
	int64_t t68 = 3716453316498909318LL;

	t68 = (((x2305%x2306)/x2307)<<x2308);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2334 = -1;
	uint64_t x2336 = 3LLU;

	t69 = (((x2333%x2334)/x2335)<<x2336);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2341 = -2923;
	int64_t x2342 = INT64_MIN;
	int16_t x2343 = INT16_MIN;
	volatile int16_t x2344 = 2;
	int64_t t70 = -80LL;

	t70 = (((x2341%x2342)/x2343)<<x2344);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x2353 = 900775LLU;
	uint8_t x2355 = 2U;
	uint8_t x2356 = 2U;
	static uint64_t t71 = 3411339873290876213LLU;

	t71 = (((x2353%x2354)/x2355)<<x2356);

	if (t71 != 1801548LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2369 = INT16_MIN;
	uint16_t x2370 = UINT16_MAX;
	volatile uint64_t x2371 = UINT64_MAX;
	uint8_t x2372 = 1U;
	volatile uint64_t t72 = 26022232LLU;

	t72 = (((x2369%x2370)/x2371)<<x2372);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x2373 = UINT32_MAX;
	volatile int32_t x2375 = INT32_MAX;
	static int16_t x2376 = 8;

	t73 = (((x2373%x2374)/x2375)<<x2376);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x2445 = UINT16_MAX;
	int32_t x2446 = INT32_MIN;
	uint16_t x2447 = 727U;
	int32_t x2448 = 10;
	int32_t t74 = -1160;

	t74 = (((x2445%x2446)/x2447)<<x2448);

	if (t74 != 92160) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2505 = 12U;
	uint16_t x2506 = 244U;
	uint16_t x2507 = 5686U;
	static int16_t x2508 = 0;
	volatile int32_t t75 = -604;

	t75 = (((x2505%x2506)/x2507)<<x2508);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x2525 = -57851919868071LL;
	uint64_t x2526 = 6954467014LLU;
	uint64_t t76 = 22LLU;

	t76 = (((x2525%x2526)/x2527)<<x2528);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x2569 = UINT8_MAX;
	uint8_t x2570 = UINT8_MAX;
	uint16_t x2572 = 2U;
	volatile int32_t t77 = 470686;

	t77 = (((x2569%x2570)/x2571)<<x2572);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x2581 = 83U;
	uint64_t x2582 = UINT64_MAX;
	volatile int16_t x2583 = INT16_MIN;
	volatile uint64_t t78 = 42689085989299184LLU;

	t78 = (((x2581%x2582)/x2583)<<x2584);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x2589 = -1;
	static int8_t x2590 = INT8_MIN;
	int8_t x2591 = -58;
	volatile uint8_t x2592 = 3U;
	volatile int32_t t79 = -921;

	t79 = (((x2589%x2590)/x2591)<<x2592);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x2595 = UINT8_MAX;
	static uint32_t x2596 = 12U;

	t80 = (((x2593%x2594)/x2595)<<x2596);

	if (t80 != 34494480384LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2661 = INT32_MIN;
	volatile uint8_t x2664 = 0U;

	t81 = (((x2661%x2662)/x2663)<<x2664);

	if (t81 != 2858LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x2673 = INT8_MAX;
	int32_t x2674 = INT32_MIN;
	int32_t x2675 = INT32_MIN;
	volatile uint16_t x2676 = 0U;
	volatile int32_t t82 = 6618946;

	t82 = (((x2673%x2674)/x2675)<<x2676);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2702 = INT16_MAX;
	int64_t x2703 = 65655481182337256LL;
	int16_t x2704 = 10;

	t83 = (((x2701%x2702)/x2703)<<x2704);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x2745 = INT8_MIN;
	int8_t x2747 = INT8_MIN;
	static uint8_t x2748 = 47U;
	static volatile uint64_t t84 = 978971921462LLU;

	t84 = (((x2745%x2746)/x2747)<<x2748);

	if (t84 != 140737488355328LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2801 = -1;
	int32_t x2802 = -1;
	volatile uint16_t x2803 = 1122U;
	uint8_t x2804 = 7U;
	volatile int32_t t85 = 213080;

	t85 = (((x2801%x2802)/x2803)<<x2804);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x2810 = INT16_MIN;
	volatile int8_t x2811 = -1;
	volatile int16_t x2812 = 1;
	volatile int32_t t86 = 1;

	t86 = (((x2809%x2810)/x2811)<<x2812);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x2869 = 23U;
	uint32_t x2870 = UINT32_MAX;
	uint32_t x2871 = UINT32_MAX;
	uint8_t x2872 = 1U;
	uint32_t t87 = 775704U;

	t87 = (((x2869%x2870)/x2871)<<x2872);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x2885 = INT64_MIN;
	static int8_t x2886 = INT8_MIN;
	static volatile int8_t x2887 = INT8_MIN;
	volatile int16_t x2888 = 1;

	t88 = (((x2885%x2886)/x2887)<<x2888);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2978 = INT32_MIN;
	int64_t x2979 = INT64_MAX;
	static uint8_t x2980 = 0U;

	t89 = (((x2977%x2978)/x2979)<<x2980);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x3001 = -243551978;
	uint8_t x3004 = 45U;
	volatile uint64_t t90 = 283841LLU;

	t90 = (((x3001%x3002)/x3003)<<x3004);

	if (t90 != 1372190511464448LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x3025 = 1U;
	volatile uint32_t x3026 = 1U;
	static int16_t x3027 = 15297;
	volatile uint8_t x3028 = 1U;
	volatile uint32_t t91 = 862684U;

	t91 = (((x3025%x3026)/x3027)<<x3028);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3045 = -74066;
	uint64_t x3047 = 168709256051309LLU;
	uint64_t x3048 = 44LLU;

	t92 = (((x3045%x3046)/x3047)<<x3048);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3073 = 1731;
	int32_t x3074 = INT32_MAX;
	int64_t x3075 = INT64_MIN;
	int64_t x3076 = 0LL;
	volatile int64_t t93 = 10957085963564LL;

	t93 = (((x3073%x3074)/x3075)<<x3076);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x3077 = 12546;
	uint8_t x3078 = UINT8_MAX;
	uint16_t x3079 = UINT16_MAX;
	volatile int8_t x3080 = 0;

	t94 = (((x3077%x3078)/x3079)<<x3080);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x3082 = UINT16_MAX;
	int16_t x3083 = INT16_MAX;
	uint16_t x3084 = 0U;
	volatile uint64_t t95 = 8LLU;

	t95 = (((x3081%x3082)/x3083)<<x3084);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3106 = INT32_MAX;
	static int8_t x3107 = INT8_MAX;
	uint8_t x3108 = 0U;
	static volatile int64_t t96 = -796024232074LL;

	t96 = (((x3105%x3106)/x3107)<<x3108);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3117 = UINT32_MAX;
	uint32_t x3118 = 176640U;
	uint32_t x3120 = 5U;
	uint32_t t97 = 237640U;

	t97 = (((x3117%x3118)/x3119)<<x3120);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x3133 = UINT8_MAX;
	int16_t x3134 = -1;
	volatile uint64_t x3135 = UINT64_MAX;
	static volatile uint16_t x3136 = 3U;
	volatile uint64_t t98 = 4321327358140187744LLU;

	t98 = (((x3133%x3134)/x3135)<<x3136);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3145 = -1;
	volatile int8_t x3146 = INT8_MIN;
	int64_t x3147 = 7057LL;

	t99 = (((x3145%x3146)/x3147)<<x3148);

	if (t99 != 0LL) { NG(); } else { ; }
	
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


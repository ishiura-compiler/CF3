#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x333 = UINT32_MAX;
uint32_t x334 = UINT32_MAX;
uint32_t x335 = UINT32_MAX;
int64_t x378 = 27617830527573947LL;
uint32_t x428 = 0U;
volatile uint32_t x458 = 0U;
static int64_t x462 = -2629542038705LL;
volatile int64_t t8 = 234980100026096340LL;
uint32_t x633 = 40338759U;
volatile uint8_t x635 = 5U;
int32_t x744 = INT32_MIN;
static int8_t x749 = 4;
int8_t x751 = 0;
volatile uint8_t x757 = 12U;
static int32_t x760 = -2;
int64_t x790 = -97872471002790LL;
int64_t x792 = 5459319092068LL;
int16_t x821 = INT16_MIN;
int64_t x845 = INT64_MIN;
uint64_t x847 = UINT64_MAX;
int8_t x981 = INT8_MAX;
volatile int16_t x989 = INT16_MIN;
uint32_t t22 = 70838962U;
uint16_t x1021 = 28114U;
int64_t x1022 = -1LL;
int8_t x1119 = 0;
volatile uint16_t x1226 = 121U;
static int8_t x1227 = -1;
int32_t t25 = 11918552;
volatile uint16_t x1253 = UINT16_MAX;
static uint8_t x1267 = UINT8_MAX;
static volatile uint32_t t30 = 28U;
int8_t x1421 = INT8_MAX;
int16_t x1423 = 11;
volatile uint64_t x1440 = 112596LLU;
int64_t x1592 = -1LL;
uint8_t x1620 = 0U;
static int64_t x1646 = INT64_MIN;
uint8_t x1648 = 0U;
volatile uint64_t t36 = 3046944900117010049LLU;
int8_t x1766 = 0;
volatile int64_t t37 = -61208347LL;
int32_t x1772 = -1;
int8_t x1784 = -1;
int16_t x1812 = -86;
uint64_t x1921 = UINT64_MAX;
uint8_t x1938 = UINT8_MAX;
int16_t x1974 = -1;
int8_t x2049 = 11;
volatile int32_t t47 = -36561590;
uint16_t x2085 = 7514U;
volatile int64_t t50 = 26510550497LL;
uint16_t x2289 = 132U;
static int32_t x2329 = 0;
int16_t x2383 = -1;
int32_t x2389 = -1;
int8_t x2392 = -1;
static int16_t x2460 = 0;
static volatile uint64_t t56 = 96LLU;
uint32_t x2501 = 43U;
volatile int64_t t58 = 10LL;
int16_t x2566 = INT16_MIN;
int16_t x2568 = 0;
volatile int32_t t62 = 1169;
uint8_t x2738 = 110U;
int8_t x2958 = INT8_MAX;
uint8_t x2960 = 53U;
static uint8_t x3009 = UINT8_MAX;
volatile uint16_t x3011 = 0U;
int16_t x3012 = -65;
volatile int32_t x3176 = -1;
volatile uint32_t x3260 = 0U;
uint32_t x3370 = UINT32_MAX;
int32_t x3389 = 1;
int32_t t75 = -227510;
int32_t t77 = 103901441;
static uint8_t x3456 = 0U;
int64_t x3461 = 1127272180036775LL;
uint64_t x3462 = 2959978062895LLU;
static uint64_t x3528 = UINT64_MAX;
int64_t t81 = 51263368245LL;
int8_t x3643 = -26;
volatile uint32_t t82 = 724U;
int8_t x3687 = -6;
uint8_t x3693 = UINT8_MAX;
int64_t x3733 = 8012203053LL;
static int64_t x3736 = -1LL;
volatile int64_t t87 = -39LL;
volatile int64_t x3802 = INT64_MAX;
static int64_t t88 = INT64_MAX;
uint64_t x3838 = 51262915033734LLU;
uint8_t x3880 = 0U;
uint32_t x3965 = 95U;
uint64_t x4006 = UINT64_MAX;
int16_t x4008 = -1;
uint64_t t94 = 51332716070093LLU;
int64_t x4030 = INT64_MAX;
static int64_t x4032 = -1LL;
uint16_t x4046 = 9982U;
volatile int32_t t96 = -239133;
int32_t x4073 = INT32_MAX;


void f0(void) {
	uint16_t x29 = 782U;
	uint32_t x30 = 24704797U;
	static int32_t x31 = INT32_MAX;
	static int32_t x32 = 0;
	uint32_t t0 = 31378U;

	t0 = ((x29&x30)>>(x31*x32));

	if (t0 != 780U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x73 = 6803;
	static int16_t x74 = INT16_MIN;
	uint32_t x75 = UINT32_MAX;
	int32_t x76 = -29;
	volatile int32_t t1 = 3;

	t1 = ((x73&x74)>>(x75*x76));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x269 = UINT32_MAX;
	uint16_t x270 = UINT16_MAX;
	int8_t x271 = 0;
	static volatile int32_t x272 = -347;
	uint32_t t2 = 3U;

	t2 = ((x269&x270)>>(x271*x272));

	if (t2 != 65535U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x336 = -1;
	static uint32_t t3 = 4310U;

	t3 = ((x333&x334)>>(x335*x336));

	if (t3 != 2147483647U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x345 = INT16_MAX;
	int16_t x346 = INT16_MIN;
	uint32_t x347 = UINT32_MAX;
	int8_t x348 = -1;
	int32_t t4 = 453;

	t4 = ((x345&x346)>>(x347*x348));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x377 = INT16_MIN;
	uint16_t x379 = 2U;
	uint8_t x380 = 24U;
	volatile int64_t t5 = 3359775769LL;

	t5 = ((x377&x378)>>(x379*x380));

	if (t5 != 98LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x425 = 40U;
	static int16_t x426 = INT16_MIN;
	int16_t x427 = INT16_MIN;
	static uint32_t t6 = 106U;

	t6 = ((x425&x426)>>(x427*x428));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x457 = UINT16_MAX;
	static uint16_t x459 = 0U;
	uint64_t x460 = 5108LLU;
	uint32_t t7 = 182593965U;

	t7 = ((x457&x458)>>(x459*x460));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x461 = INT16_MAX;
	int8_t x463 = -1;
	int32_t x464 = -3;

	t8 = ((x461&x462)>>(x463*x464));

	if (t8 != 1641LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x489 = INT64_MAX;
	int32_t x490 = 0;
	int16_t x491 = -1;
	int8_t x492 = -1;
	static volatile int64_t t9 = 418926815682437LL;

	t9 = ((x489&x490)>>(x491*x492));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x565 = INT64_MAX;
	volatile uint8_t x566 = UINT8_MAX;
	volatile uint32_t x567 = UINT32_MAX;
	static volatile int8_t x568 = -1;
	volatile int64_t t10 = -13495LL;

	t10 = ((x565&x566)>>(x567*x568));

	if (t10 != 127LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x634 = INT32_MIN;
	uint8_t x636 = 2U;
	volatile uint32_t t11 = 1234U;

	t11 = ((x633&x634)>>(x635*x636));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x705 = 28827569225LLU;
	int8_t x706 = 1;
	volatile int16_t x707 = INT16_MIN;
	uint8_t x708 = 0U;
	volatile uint64_t t12 = 54595LLU;

	t12 = ((x705&x706)>>(x707*x708));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x741 = -49;
	static uint32_t x742 = UINT32_MAX;
	static int8_t x743 = 0;
	volatile uint32_t t13 = 175U;

	t13 = ((x741&x742)>>(x743*x744));

	if (t13 != 4294967247U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x750 = INT32_MIN;
	uint32_t x752 = 3U;
	int32_t t14 = -29974350;

	t14 = ((x749&x750)>>(x751*x752));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x758 = -1LL;
	static int64_t x759 = -1LL;
	static volatile int64_t t15 = 54LL;

	t15 = ((x757&x758)>>(x759*x760));

	if (t15 != 3LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x789 = 1838265U;
	static int8_t x791 = 0;
	static int64_t t16 = -3732385380180LL;

	t16 = ((x789&x790)>>(x791*x792));

	if (t16 != 24LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x822 = INT32_MAX;
	volatile int64_t x823 = -1LL;
	uint64_t x824 = UINT64_MAX;
	static volatile int32_t t17 = -7633268;

	t17 = ((x821&x822)>>(x823*x824));

	if (t17 != 1073725440) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x846 = 11656;
	int32_t x848 = -1;
	int64_t t18 = -7102591619879596LL;

	t18 = ((x845&x846)>>(x847*x848));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x861 = INT8_MIN;
	uint16_t x862 = UINT16_MAX;
	int32_t x863 = -1;
	uint32_t x864 = UINT32_MAX;
	static int32_t t19 = 6614;

	t19 = ((x861&x862)>>(x863*x864));

	if (t19 != 32704) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x921 = INT32_MAX;
	uint16_t x922 = 5947U;
	int8_t x923 = INT8_MIN;
	volatile int16_t x924 = 0;
	int32_t t20 = 0;

	t20 = ((x921&x922)>>(x923*x924));

	if (t20 != 5947) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x982 = INT16_MIN;
	volatile uint16_t x983 = 5U;
	uint8_t x984 = 0U;
	volatile int32_t t21 = 1063;

	t21 = ((x981&x982)>>(x983*x984));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x990 = UINT32_MAX;
	volatile uint8_t x991 = 3U;
	uint16_t x992 = 0U;

	t22 = ((x989&x990)>>(x991*x992));

	if (t22 != 4294934528U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1023 = 0;
	uint16_t x1024 = 483U;
	volatile int64_t t23 = -5561555764LL;

	t23 = ((x1021&x1022)>>(x1023*x1024));

	if (t23 != 28114LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1117 = INT64_MIN;
	volatile int64_t x1118 = INT64_MAX;
	static int16_t x1120 = 2422;
	static int64_t t24 = -6296953LL;

	t24 = ((x1117&x1118)>>(x1119*x1120));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x1225 = 1U;
	int16_t x1228 = -1;

	t25 = ((x1225&x1226)>>(x1227*x1228));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1233 = 0U;
	int16_t x1234 = INT16_MIN;
	int8_t x1235 = -1;
	int8_t x1236 = -1;
	int32_t t26 = 148394068;

	t26 = ((x1233&x1234)>>(x1235*x1236));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1254 = -1;
	volatile uint64_t x1255 = UINT64_MAX;
	static int16_t x1256 = -1;
	int32_t t27 = -1;

	t27 = ((x1253&x1254)>>(x1255*x1256));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1265 = 123528LLU;
	int16_t x1266 = INT16_MIN;
	static volatile int8_t x1268 = 0;
	volatile uint64_t t28 = 1955856954065505215LLU;

	t28 = ((x1265&x1266)>>(x1267*x1268));

	if (t28 != 98304LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1353 = 104722510;
	uint64_t x1354 = 2525565205654LLU;
	int64_t x1355 = -1LL;
	int32_t x1356 = -1;
	volatile uint64_t t29 = 17046308688939060LLU;

	t29 = ((x1353&x1354)>>(x1355*x1356));

	if (t29 != 51664899LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1381 = INT8_MAX;
	volatile uint32_t x1382 = UINT32_MAX;
	uint64_t x1383 = 31540784340594828LLU;
	int64_t x1384 = INT64_MIN;

	t30 = ((x1381&x1382)>>(x1383*x1384));

	if (t30 != 127U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1422 = 2348145U;
	static uint8_t x1424 = 1U;
	uint32_t t31 = 572U;

	t31 = ((x1421&x1422)>>(x1423*x1424));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1437 = INT64_MIN;
	uint16_t x1438 = 3367U;
	static uint8_t x1439 = 0U;
	int64_t t32 = -43643304866LL;

	t32 = ((x1437&x1438)>>(x1439*x1440));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1589 = 0;
	static int8_t x1590 = 58;
	int32_t x1591 = -1;
	int32_t t33 = -13899;

	t33 = ((x1589&x1590)>>(x1591*x1592));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1617 = 57697164012831LLU;
	volatile int16_t x1618 = -51;
	static int64_t x1619 = INT64_MIN;
	static uint64_t t34 = 3272277194LLU;

	t34 = ((x1617&x1618)>>(x1619*x1620));

	if (t34 != 57697164012813LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1645 = 113U;
	uint16_t x1647 = UINT16_MAX;
	static volatile int64_t t35 = 1794LL;

	t35 = ((x1645&x1646)>>(x1647*x1648));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1673 = 3877LLU;
	int8_t x1674 = -1;
	volatile int64_t x1675 = -1LL;
	static volatile uint64_t x1676 = UINT64_MAX;

	t36 = ((x1673&x1674)>>(x1675*x1676));

	if (t36 != 1938LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1765 = INT64_MIN;
	int8_t x1767 = 0;
	int16_t x1768 = -12207;

	t37 = ((x1765&x1766)>>(x1767*x1768));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x1769 = 605LL;
	volatile uint8_t x1770 = 110U;
	int16_t x1771 = -1;
	int64_t t38 = 3530096373066481692LL;

	t38 = ((x1769&x1770)>>(x1771*x1772));

	if (t38 != 38LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x1781 = UINT32_MAX;
	static int16_t x1782 = INT16_MIN;
	uint32_t x1783 = UINT32_MAX;
	uint32_t t39 = 1593U;

	t39 = ((x1781&x1782)>>(x1783*x1784));

	if (t39 != 2147467264U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1793 = 12U;
	volatile int8_t x1794 = 0;
	uint32_t x1795 = 0U;
	volatile uint32_t x1796 = UINT32_MAX;
	volatile int32_t t40 = -59478144;

	t40 = ((x1793&x1794)>>(x1795*x1796));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1809 = INT8_MAX;
	int16_t x1810 = INT16_MIN;
	uint64_t x1811 = 0LLU;
	int32_t t41 = -886;

	t41 = ((x1809&x1810)>>(x1811*x1812));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1897 = 8323U;
	volatile uint64_t x1898 = UINT64_MAX;
	static volatile int8_t x1899 = -1;
	int16_t x1900 = 0;
	volatile uint64_t t42 = 10367838563LLU;

	t42 = ((x1897&x1898)>>(x1899*x1900));

	if (t42 != 8323LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1922 = -3239LL;
	volatile uint16_t x1923 = 3U;
	uint8_t x1924 = 2U;
	volatile uint64_t t43 = 29543LLU;

	t43 = ((x1921&x1922)>>(x1923*x1924));

	if (t43 != 288230376151711693LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x1937 = 5381074801LLU;
	int8_t x1939 = INT8_MIN;
	uint16_t x1940 = 0U;
	static volatile uint64_t t44 = 1994821LLU;

	t44 = ((x1937&x1938)>>(x1939*x1940));

	if (t44 != 113LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1973 = UINT16_MAX;
	int8_t x1975 = 0;
	volatile uint64_t x1976 = UINT64_MAX;
	int32_t t45 = 1985047;

	t45 = ((x1973&x1974)>>(x1975*x1976));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1981 = UINT8_MAX;
	uint8_t x1982 = 4U;
	volatile uint32_t x1983 = UINT32_MAX;
	uint32_t x1984 = UINT32_MAX;
	static int32_t t46 = -518;

	t46 = ((x1981&x1982)>>(x1983*x1984));

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2050 = -1;
	uint32_t x2051 = UINT32_MAX;
	int8_t x2052 = -1;

	t47 = ((x2049&x2050)>>(x2051*x2052));

	if (t47 != 5) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2086 = 1;
	uint8_t x2087 = 0U;
	static volatile int32_t x2088 = -1;
	volatile int32_t t48 = -16358500;

	t48 = ((x2085&x2086)>>(x2087*x2088));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2089 = UINT32_MAX;
	static int8_t x2090 = -3;
	uint8_t x2091 = 0U;
	uint32_t x2092 = UINT32_MAX;
	uint32_t t49 = 381U;

	t49 = ((x2089&x2090)>>(x2091*x2092));

	if (t49 != 4294967293U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x2129 = 17U;
	int64_t x2130 = -7LL;
	static uint16_t x2131 = 3U;
	int16_t x2132 = 4;

	t50 = ((x2129&x2130)>>(x2131*x2132));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2290 = INT32_MIN;
	int32_t x2291 = 3;
	static uint8_t x2292 = 1U;
	volatile int32_t t51 = -46638;

	t51 = ((x2289&x2290)>>(x2291*x2292));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2330 = 588072860921239341LLU;
	static volatile uint8_t x2331 = 1U;
	volatile int8_t x2332 = 0;
	uint64_t t52 = 328191736LLU;

	t52 = ((x2329&x2330)>>(x2331*x2332));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x2381 = INT16_MAX;
	volatile int64_t x2382 = INT64_MIN;
	uint8_t x2384 = 0U;
	volatile int64_t t53 = 2841427LL;

	t53 = ((x2381&x2382)>>(x2383*x2384));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x2390 = UINT16_MAX;
	int16_t x2391 = -1;
	volatile int32_t t54 = -50373685;

	t54 = ((x2389&x2390)>>(x2391*x2392));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2457 = 39U;
	uint64_t x2458 = 31430191LLU;
	int32_t x2459 = INT32_MIN;
	static uint64_t t55 = 799340192LLU;

	t55 = ((x2457&x2458)>>(x2459*x2460));

	if (t55 != 39LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2465 = 279905716LLU;
	int8_t x2466 = INT8_MIN;
	int64_t x2467 = -1LL;
	int8_t x2468 = -11;

	t56 = ((x2465&x2466)>>(x2467*x2468));

	if (t56 != 136672LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2497 = 41;
	int32_t x2498 = -4396;
	int64_t x2499 = 1LL;
	int8_t x2500 = 2;
	volatile int32_t t57 = 305;

	t57 = ((x2497&x2498)>>(x2499*x2500));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x2502 = INT64_MIN;
	volatile uint32_t x2503 = 0U;
	int16_t x2504 = 0;

	t58 = ((x2501&x2502)>>(x2503*x2504));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2513 = -1;
	int8_t x2514 = 5;
	volatile uint8_t x2515 = 0U;
	uint32_t x2516 = UINT32_MAX;
	int32_t t59 = 10399;

	t59 = ((x2513&x2514)>>(x2515*x2516));

	if (t59 != 5) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2565 = 86U;
	int16_t x2567 = INT16_MIN;
	int32_t t60 = -443719400;

	t60 = ((x2565&x2566)>>(x2567*x2568));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x2589 = INT64_MIN;
	uint64_t x2590 = 4189760LLU;
	int64_t x2591 = INT64_MIN;
	volatile uint64_t x2592 = 3343428795698064860LLU;
	uint64_t t61 = 11413957077LLU;

	t61 = ((x2589&x2590)>>(x2591*x2592));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x2645 = UINT16_MAX;
	volatile int16_t x2646 = INT16_MIN;
	int8_t x2647 = -2;
	volatile uint64_t x2648 = UINT64_MAX;

	t62 = ((x2645&x2646)>>(x2647*x2648));

	if (t62 != 8192) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x2737 = INT8_MAX;
	volatile int8_t x2739 = 0;
	int16_t x2740 = INT16_MIN;
	static int32_t t63 = 28;

	t63 = ((x2737&x2738)>>(x2739*x2740));

	if (t63 != 110) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2857 = 1176U;
	static volatile int64_t x2858 = 123149139348579LL;
	uint32_t x2859 = 0U;
	int8_t x2860 = 3;
	int64_t t64 = -187930LL;

	t64 = ((x2857&x2858)>>(x2859*x2860));

	if (t64 != 1024LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2917 = UINT32_MAX;
	int8_t x2918 = -26;
	volatile int8_t x2919 = -1;
	volatile int16_t x2920 = -1;
	volatile uint32_t t65 = 165732155U;

	t65 = ((x2917&x2918)>>(x2919*x2920));

	if (t65 != 2147483635U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2957 = 89U;
	uint8_t x2959 = 0U;
	volatile uint32_t t66 = 120393U;

	t66 = ((x2957&x2958)>>(x2959*x2960));

	if (t66 != 89U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3010 = INT64_MIN;
	volatile int64_t t67 = -508326051795LL;

	t67 = ((x3009&x3010)>>(x3011*x3012));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3013 = -289;
	uint64_t x3014 = 61077LLU;
	volatile int32_t x3015 = -1;
	int32_t x3016 = -1;
	volatile uint64_t t68 = 1284LLU;

	t68 = ((x3013&x3014)>>(x3015*x3016));

	if (t68 != 30538LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x3173 = 4486245916448711LL;
	volatile int32_t x3174 = -1;
	volatile int8_t x3175 = -13;
	volatile int64_t t69 = 41735LL;

	t69 = ((x3173&x3174)>>(x3175*x3176));

	if (t69 != 547637440972LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3221 = INT64_MAX;
	uint32_t x3222 = 39U;
	int16_t x3223 = -3;
	int32_t x3224 = -1;
	volatile int64_t t70 = -33396724702409419LL;

	t70 = ((x3221&x3222)>>(x3223*x3224));

	if (t70 != 4LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x3245 = 0;
	int8_t x3246 = INT8_MIN;
	int16_t x3247 = 0;
	int8_t x3248 = INT8_MAX;
	int32_t t71 = -7267329;

	t71 = ((x3245&x3246)>>(x3247*x3248));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3257 = INT64_MAX;
	int16_t x3258 = -6;
	int32_t x3259 = 47;
	volatile int64_t t72 = 6551965LL;

	t72 = ((x3257&x3258)>>(x3259*x3260));

	if (t72 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3353 = INT32_MAX;
	int8_t x3354 = INT8_MAX;
	int8_t x3355 = INT8_MAX;
	uint8_t x3356 = 0U;
	int32_t t73 = -590388;

	t73 = ((x3353&x3354)>>(x3355*x3356));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x3369 = 1361069U;
	static volatile int8_t x3371 = -1;
	uint64_t x3372 = UINT64_MAX;
	volatile uint32_t t74 = 320198005U;

	t74 = ((x3369&x3370)>>(x3371*x3372));

	if (t74 != 680534U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3390 = -36;
	int64_t x3391 = 1LL;
	uint8_t x3392 = 14U;

	t75 = ((x3389&x3390)>>(x3391*x3392));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3397 = 0;
	uint64_t x3398 = 485322352028LLU;
	int16_t x3399 = INT16_MIN;
	int8_t x3400 = 0;
	volatile uint64_t t76 = 43833201LLU;

	t76 = ((x3397&x3398)>>(x3399*x3400));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3429 = 86;
	int16_t x3430 = 0;
	static int32_t x3431 = INT32_MAX;
	volatile uint16_t x3432 = 0U;

	t77 = ((x3429&x3430)>>(x3431*x3432));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x3453 = 37;
	int64_t x3454 = -250599276LL;
	uint64_t x3455 = 67311869652856428LLU;
	int64_t t78 = -1LL;

	t78 = ((x3453&x3454)>>(x3455*x3456));

	if (t78 != 4LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x3463 = UINT64_MAX;
	int64_t x3464 = -1LL;
	uint64_t t79 = 84398613264LLU;

	t79 = ((x3461&x3462)>>(x3463*x3464));

	if (t79 != 105229324819LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x3517 = 1U;
	int8_t x3518 = INT8_MIN;
	uint32_t x3519 = 0U;
	static uint8_t x3520 = UINT8_MAX;
	volatile int32_t t80 = 3174618;

	t80 = ((x3517&x3518)>>(x3519*x3520));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x3525 = INT64_MAX;
	volatile int32_t x3526 = -11387717;
	int64_t x3527 = -4LL;

	t81 = ((x3525&x3526)>>(x3527*x3528));

	if (t81 != 576460752302711755LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3641 = 1U;
	uint32_t x3642 = 7197U;
	static uint64_t x3644 = UINT64_MAX;

	t82 = ((x3641&x3642)>>(x3643*x3644));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x3685 = 1118178399748502576LL;
	uint16_t x3686 = 648U;
	int64_t x3688 = -1LL;
	int64_t t83 = -6LL;

	t83 = ((x3685&x3686)>>(x3687*x3688));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x3694 = 1103U;
	int32_t x3695 = -7;
	int16_t x3696 = -1;
	int32_t t84 = -1003;

	t84 = ((x3693&x3694)>>(x3695*x3696));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x3734 = -1;
	int16_t x3735 = -1;
	volatile int64_t t85 = 11143LL;

	t85 = ((x3733&x3734)>>(x3735*x3736));

	if (t85 != 4006101526LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3737 = INT16_MAX;
	volatile uint16_t x3738 = 57U;
	volatile uint16_t x3739 = 0U;
	int32_t x3740 = INT32_MIN;
	static int32_t t86 = 89494234;

	t86 = ((x3737&x3738)>>(x3739*x3740));

	if (t86 != 57) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x3793 = INT8_MAX;
	int64_t x3794 = 18606834LL;
	volatile int16_t x3795 = -1723;
	int8_t x3796 = 0;

	t87 = ((x3793&x3794)>>(x3795*x3796));

	if (t87 != 114LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3801 = -1;
	uint32_t x3803 = 4723127U;
	static uint32_t x3804 = 0U;

	t88 = ((x3801&x3802)>>(x3803*x3804));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3837 = INT8_MIN;
	int8_t x3839 = -1;
	static volatile int32_t x3840 = 0;
	uint64_t t89 = 476955416LLU;

	t89 = ((x3837&x3838)>>(x3839*x3840));

	if (t89 != 51262915033728LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x3861 = INT64_MIN;
	int32_t x3862 = INT32_MAX;
	int64_t x3863 = 0LL;
	volatile int8_t x3864 = INT8_MIN;
	volatile int64_t t90 = 1246488LL;

	t90 = ((x3861&x3862)>>(x3863*x3864));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x3877 = INT64_MIN;
	volatile uint16_t x3878 = 34U;
	static volatile int16_t x3879 = INT16_MIN;
	static volatile int64_t t91 = -3665646874504510017LL;

	t91 = ((x3877&x3878)>>(x3879*x3880));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3966 = INT8_MIN;
	int16_t x3967 = -1597;
	uint32_t x3968 = 0U;
	volatile uint32_t t92 = 23U;

	t92 = ((x3965&x3966)>>(x3967*x3968));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x3977 = 1U;
	int32_t x3978 = 49;
	volatile uint32_t x3979 = 0U;
	uint8_t x3980 = UINT8_MAX;
	int32_t t93 = 7;

	t93 = ((x3977&x3978)>>(x3979*x3980));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x4005 = -1;
	static volatile int8_t x4007 = -1;

	t94 = ((x4005&x4006)>>(x4007*x4008));

	if (t94 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x4029 = UINT64_MAX;
	uint16_t x4031 = 0U;
	uint64_t t95 = 1732966892209011LLU;

	t95 = ((x4029&x4030)>>(x4031*x4032));

	if (t95 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4045 = INT8_MAX;
	int32_t x4047 = -1;
	int8_t x4048 = -1;

	t96 = ((x4045&x4046)>>(x4047*x4048));

	if (t96 != 63) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x4074 = 1126U;
	static int16_t x4075 = -1;
	uint64_t x4076 = UINT64_MAX;
	int32_t t97 = -1157;

	t97 = ((x4073&x4074)>>(x4075*x4076));

	if (t97 != 563) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x4109 = INT8_MIN;
	static uint32_t x4110 = 20U;
	uint8_t x4111 = 0U;
	uint64_t x4112 = 0LLU;
	volatile uint32_t t98 = 34584358U;

	t98 = ((x4109&x4110)>>(x4111*x4112));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x4225 = UINT8_MAX;
	uint32_t x4226 = UINT32_MAX;
	uint16_t x4227 = 1U;
	volatile int64_t x4228 = 29LL;
	static volatile uint32_t t99 = 7189U;

	t99 = ((x4225&x4226)>>(x4227*x4228));

	if (t99 != 0U) { NG(); } else { ; }
	
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

